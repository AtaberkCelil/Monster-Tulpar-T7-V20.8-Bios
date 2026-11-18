/*
 * example.c - monster_bios C modeli icin kucuk ornek.
 *
 *   ./biosdump                 ozet + firmware volume listesi
 *   ./biosdump --tree          tum agaci yazdir (uzun)
 *   ./biosdump <isim>          isme gore dugum bul (ornek: Setup, CpuDxe)
 *   ./biosdump -g <GUID>       GUID'e gore dugum bul
 */
#include "monster_bios.h"

#include <stdio.h>
#include <string.h>

static void print_firmware_volumes(void)
{
    size_t i;
    puts("Firmware volume'lar:");
    for (i = 0; i < monster_bios_node_count; ++i) {
        const bios_node_t *n = &monster_bios_nodes[i];
        if (n->kind != BIOS_NODE_FV) continue;
        printf("  [%4zu] off=0x%08X size=0x%08X cont=%4d  %s\n",
               i, n->offset, n->size, n->container,
               n->name != NULL ? n->name : "FV");
    }
}

static void print_stats(void)
{
    size_t i, fv = 0, files = 0, named = 0, sections = 0;
    for (i = 0; i < monster_bios_node_count; ++i) {
        const bios_node_t *n = &monster_bios_nodes[i];
        switch (n->kind) {
        case BIOS_NODE_FV:      ++fv; break;
        case BIOS_NODE_FILE:    ++files; if (n->name) ++named; break;
        case BIOS_NODE_SECTION: ++sections; break;
        default: break;
        }
    }
    printf("Imaj boyutu : %zu bayt (0x%X)\n", monster_bios_blob_size,
           (unsigned)monster_bios_blob_size);
    printf("Dugum       : %zu\n", monster_bios_node_count);
    printf("FV / dosya  : %zu / %zu (adli: %zu)\n", fv, files, named);
    printf("Section     : %zu\n\n", sections);
}

int main(int argc, char **argv)
{
    if (argc >= 2 && strcmp(argv[1], "--tree") == 0) {
        bios_print_tree(bios_root(), 0);
        return 0;
    }
    if (argc >= 3 && strcmp(argv[1], "-g") == 0) {
        const bios_node_t *n = bios_find_guid(argv[2]);
        if (n == NULL) { fprintf(stderr, "GUID bulunamadi: %s\n", argv[2]); return 1; }
        bios_print_node(n);
        return 0;
    }
    if (argc >= 2) {
        const bios_node_t *n = bios_find_name(argv[1]);
        if (n == NULL) { fprintf(stderr, "Dugum bulunamadi: %s\n", argv[1]); return 1; }
        bios_print_node(n);
        return 0;
    }

    print_stats();
    print_firmware_volumes();
    puts("\nIpucu: ./biosdump --tree | less   ya da   ./biosdump CpuDxe");
    return 0;
}
