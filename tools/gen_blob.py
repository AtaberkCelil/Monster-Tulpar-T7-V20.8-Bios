#!/usr/bin/env python3
"""Ham BIOS imajindan monster_bios_blob.c uretir.

Kullanim:
    python3 tools/gen_blob.py ../monster_bios.bin src/monster_bios_blob.c

Bu dosya, tam firmware imajini C dizisi olarak gömer. Uretilen dosya
makineye ozel veri icerebilir; paylasmayin (bkz. .gitignore).
"""
import sys
from pathlib import Path

HEADER = """/*
 * monster_bios_blob.c
 * -----------------------------------------------------------------------------
 * OTOMATIK URETILDI - ham 32 MB BIOS imaji.
 * Okunabilir yapi icin monster_bios_layout.c dosyasina bakin.
 * -----------------------------------------------------------------------------
 */
#include "monster_bios.h"

"""

def main() -> int:
    if len(sys.argv) != 3:
        print(__doc__, file=sys.stderr)
        return 2
    src, dst = Path(sys.argv[1]), Path(sys.argv[2])
    data = src.read_bytes()
    with dst.open("w", encoding="ascii") as f:
        f.write(HEADER)
        f.write("const unsigned char monster_bios_blob[] = {\n")
        for i in range(0, len(data), 16):
            f.write("  " + ",".join("0x%02x" % b for b in data[i:i + 16]) + ",\n")
        f.write("};\n\n")
        f.write("const size_t monster_bios_blob_size = MONSTER_BIOS_IMAGE_SIZE;\n")
    return 0

if __name__ == "__main__":
    raise SystemExit(main())
