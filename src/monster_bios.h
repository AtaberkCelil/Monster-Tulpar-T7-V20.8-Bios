/*
 * monster_bios.h
 * -----------------------------------------------------------------------------
 * "monster_bios.bin" (32 MB Intel flash imaji) icin okunabilir C modeli.
 *
 * Imaj; flash descriptor bolgeleri, UEFI firmware volume'lari (FV), FFS
 * dosyalari ve section'lardan olusan bir agac olarak tanimlanir. Agac duz
 * (flat) bir dugum tablosunda tutulur; parent/container indeksleriyle
 * hiyerarsi yeniden kurulabilir.
 *
 * container == -1 : offset, imaj dosyasindaki MUTLAK ofsettir.
 * container >= 0  : offset, monster_bios_nodes[container] dugumunun
 *                   acilmis (LZMA / EFI sikistirmasi cozulmus) icerigine
 *                   gore GORELI ofsettir.
 *
 * Ornek:
 *     const bios_node_t *root = bios_root();
 *     bios_print_tree(root, 0);
 *
 *     const bios_node_t *n = bios_find_name("Setup");
 *     if (n) printf("%s @ 0x%X\n", n->name, n->offset);
 * -----------------------------------------------------------------------------
 */
#ifndef MONSTER_BIOS_H
#define MONSTER_BIOS_H

#include <stddef.h>
#include <stdint.h>

#define MONSTER_BIOS_IMAGE_SIZE 0x02000000u   /* 32 MiB */

typedef enum {
    BIOS_NODE_IMAGE = 0,   /* tum imaj */
    BIOS_NODE_REGION,      /* flash descriptor bolgesi */
    BIOS_NODE_FV,          /* firmware volume */
    BIOS_NODE_FILE,        /* FFS dosyasi */
    BIOS_NODE_SECTION      /* section */
} bios_node_kind_t;

typedef struct bios_node {
    bios_node_kind_t kind;      /* dugum turu */
    int32_t  parent;            /* ust dugum indeksi, kok icin -1 */
    int32_t  container;         /* acilmis icerik sahibi section, yoksa -1 */
    uint32_t offset;            /* mutlak ya da container'a gore goreli ofset */
    uint32_t size;              /* dugumun bayt cinsinden boyu */
    uint16_t type;              /* FFS dosya / section / bolge turu */
    const char *name;           /* okunabilir ad (NULL olabilir) */
    const char *guid;           /* "XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX" ya da NULL */
} bios_node_t;

/* monster_bios_layout.c dosyasinda uretilir. */
extern const bios_node_t monster_bios_nodes[];
extern const size_t      monster_bios_node_count;

/* monster_bios_blob.c dosyasinda uretilir (ham 32 MB imaj). */
extern const unsigned char monster_bios_blob[];
extern const size_t        monster_bios_blob_size;

/* --- yardimci fonksiyonlar (monster_bios.c) ------------------------------- */
const bios_node_t *bios_root(void);

const bios_node_t *bios_find_name(const char *name);
const bios_node_t *bios_find_guid(const char *guid);

size_t bios_children(const bios_node_t *node,
                     const bios_node_t **out, size_t max);

const char *bios_kind_name(bios_node_kind_t kind);
const char *bios_type_name(const bios_node_t *node);

int  bios_is_decoded(const bios_node_t *node);
void bios_print_node(const bios_node_t *node);
void bios_print_tree(const bios_node_t *node, int depth);

#endif /* MONSTER_BIOS_H */
