/*
 * monster_bios.c
 * -----------------------------------------------------------------------------
 * monster_bios_layout.c icindeki dugum tablosunu gezmek icin kucuk yardimci
 * fonksiyonlar. Harici bagimlilik yoktur; sadece standart C kutuphanesi.
 * -----------------------------------------------------------------------------
 */
#include "monster_bios.h"

#include <ctype.h>
#include <stdio.h>
#include <string.h>

static const char *const REGION_NAMES[] = {
    "Descriptor", "BIOS", "ME", "GbE", "PDR", "EC", "Region 6", "Region 7"
};

static int guid_equal_ci(const char *a, const char *b)
{
    if (a == NULL || b == NULL) return 0;
    while (*a != '\0' && *b != '\0') {
        if (toupper((unsigned char)*a) != toupper((unsigned char)*b))
            return 0;
        ++a; ++b;
    }
    return *a == '\0' && *b == '\0';
}

const bios_node_t *bios_root(void)
{
    return &monster_bios_nodes[0];
}

const bios_node_t *bios_find_name(const char *name)
{
    size_t i;
    if (name == NULL) return NULL;
    for (i = 0; i < monster_bios_node_count; ++i) {
        const bios_node_t *n = &monster_bios_nodes[i];
        if (n->name != NULL && strcmp(n->name, name) == 0)
            return n;
    }
    return NULL;
}

const bios_node_t *bios_find_guid(const char *guid)
{
    size_t i;
    if (guid == NULL) return NULL;
    for (i = 0; i < monster_bios_node_count; ++i) {
        const bios_node_t *n = &monster_bios_nodes[i];
        if (guid_equal_ci(n->guid, guid))
            return n;
    }
    return NULL;
}

size_t bios_children(const bios_node_t *node,
                     const bios_node_t **out, size_t max)
{
    size_t i, count = 0;
    ptrdiff_t idx;
    if (node == NULL) return 0;
    idx = node - monster_bios_nodes;
    for (i = 0; i < monster_bios_node_count; ++i) {
        if (monster_bios_nodes[i].parent != (int32_t)idx) continue;
        if (out != NULL && count < max) out[count] = &monster_bios_nodes[i];
        ++count;
    }
    return count;
}

const char *bios_kind_name(bios_node_kind_t kind)
{
    switch (kind) {
    case BIOS_NODE_IMAGE:   return "image";
    case BIOS_NODE_REGION:  return "region";
    case BIOS_NODE_FV:      return "fv";
    case BIOS_NODE_FILE:    return "file";
    case BIOS_NODE_SECTION: return "section";
    }
    return "?";
}

const char *bios_type_name(const bios_node_t *node)
{
    if (node == NULL) return "?";
    switch (node->kind) {
    case BIOS_NODE_REGION:
        return node->type < sizeof(REGION_NAMES) / sizeof(REGION_NAMES[0])
                   ? REGION_NAMES[node->type] : "region";
    case BIOS_NODE_IMAGE: return "image";
    case BIOS_NODE_FV:    return "firmware volume";
    case BIOS_NODE_FILE:
        switch (node->type) {
        case 0x01: return "RAW";
        case 0x02: return "FREEFORM";
        case 0x03: return "SECURITY_CORE";
        case 0x04: return "PEI_CORE";
        case 0x05: return "DXE_CORE";
        case 0x06: return "PEIM";
        case 0x07: return "DRIVER";
        case 0x08: return "COMBINED_PEIM_DRIVER";
        case 0x09: return "APPLICATION";
        case 0x0A: return "SMM";
        case 0x0B: return "FIRMWARE_VOLUME_IMAGE";
        case 0x0C: return "COMBINED_SMM_DXE";
        case 0x0D: return "SMM_CORE";
        case 0x0E: return "MM_STANDALONE";
        case 0x0F: return "MM_CORE_STANDALONE";
        }
        return "file";
    case BIOS_NODE_SECTION:
        switch (node->type) {
        case 0x01: return "COMPRESSION";
        case 0x02: return "GUID_DEFINED";
        case 0x03: return "DISPOSABLE";
        case 0x10: return "PE32";
        case 0x11: return "PIC";
        case 0x12: return "TE";
        case 0x13: return "DXE_DEPEX";
        case 0x14: return "VERSION";
        case 0x15: return "UI";
        case 0x16: return "COMPAT16";
        case 0x17: return "FV_IMAGE";
        case 0x18: return "FREEFORM_SUBTYPE";
        case 0x19: return "RAW";
        case 0x1B: return "PEI_DEPEX";
        case 0x1C: return "MM_DEPEX";
        case 0x1D: return "MM_DEPEX2";
        }
        return "section";
    }
    return "?";
}

int bios_is_decoded(const bios_node_t *node)
{
    return node != NULL && node->container >= 0;
}

void bios_print_node(const bios_node_t *node)
{
    if (node == NULL) return;
    printf("[%4zu] %-7s %-20s off=0x%08X size=0x%08X parent=%4d cont=%4d",
           (size_t)(node - monster_bios_nodes),
           bios_kind_name(node->kind),
           bios_type_name(node),
           node->offset, node->size,
           node->parent, node->container);
    if (node->name != NULL) printf("  \"%s\"", node->name);
    if (node->guid != NULL) printf("  %s", node->guid);
    putchar('\n');
}

void bios_print_tree(const bios_node_t *node, int depth)
{
    size_t i;
    ptrdiff_t idx;
    int d;
    if (node == NULL) return;

    for (d = 0; d < depth; ++d) fputs("  ", stdout);
    bios_print_node(node);

    idx = node - monster_bios_nodes;
    for (i = 0; i < monster_bios_node_count; ++i) {
        if (monster_bios_nodes[i].parent == (int32_t)idx)
            bios_print_tree(&monster_bios_nodes[i], depth + 1);
    }
}
