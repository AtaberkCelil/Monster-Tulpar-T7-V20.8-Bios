// decompiled by r2ghidra: 0823_OemWorkaroundDxe.pe32
// functions: 9

/* entry0 @ 0x103b4 */

ulong entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.000103c4(arg1,in_RDX);
    return 0;
}


/* fcn.000103c4 @ 0x103c4 */

void fcn.000103c4(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    
    *0x105b8 = *(arg1 + 0x60);
    *0x105b0 = arg1;
    fcn.00010494();
    iVar3 = fcn.00010500();
    if (iVar3 == 0) {
        uVar4 = fcn.000102a0();
        fcn.00010290();
        uVar1 = in(0x1808);
        fcn.00010270(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x00010260();
        }
        fcn.00010270(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010290();
        }
        else {
            fcn.00010280();
        }
    }
    if ((*0x105c8 != NULL) || (iVar3 = (**(*0x105b8 + 0x140))(0x10570,0,0x105c8), -1 < iVar3)) {
        (***0x105c8)(*0x105c8,0x105d0);
    }
    return;
}


/* fcn.00010494 @ 0x10494 */

int64_t fcn.00010494(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x105c0 == 0) {
        *0x105c0 = 0;
        if (*(*0x105b0 + 0x68) != 0) {
            piVar2 = *(*0x105b0 + 0x70);
            do {
                if ((*0x10560 == *piVar2) && (*0x10568 == piVar2[1])) {
                    *0x105c0 = (*(*0x105b0 + 0x70))[uVar1 * 3 + 2];
                    return *0x105c0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x105b0 + 0x68));
        }
    }
    return *0x105c0;
}


/* fcn.00010500 @ 0x10500 */

void fcn.00010500(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00010494();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00010537:
            if ((piVar1 == NULL) || ((*0x10580 == *(piVar1 + 4) && (*0x10588 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00010537;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.000102a0 @ 0x102a0 */

uint64_t fcn.000102a0(void)

{
    uint8_t in_CF;
    uint8_t in_PF;
    uint8_t in_AF;
    uint8_t in_ZF;
    uint8_t in_SF;
    uint8_t in_TF;
    uint8_t in_IF;
    uint8_t in_OF;
    uint8_t in_NT;
    uint8_t in_AC;
    uint8_t in_VIF;
    uint8_t in_VIP;
    uint8_t in_ID;
    
    return (in_NT & 1) * 0x4000 | (in_OF & 1) * 0x800 | (in_IF & 1) * 0x200 | (in_TF & 1) * 0x100 | (in_SF & 1) * 0x80 |
           (in_ZF & 1) * 0x40 | (in_AF & 1) * 0x10 | (in_PF & 1) * 4 | in_CF & 1 | (in_ID & 1) * 0x200000 |
           (in_VIP & 1) * 0x100000 | (in_VIF & 1) * 0x80000 | (in_AC & 1) * 0x40000;
}


/* fcn.00010290 @ 0x10290 */

void fcn.00010290(void)

{
    return;
}


/* fcn.00010270 @ 0x10270 */

uint64_t fcn.00010270(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010262 @ 0x10262 */

void fcn.00010262(void)

{
    return;
}


/* fcn.00010280 @ 0x10280 */

void fcn.00010280(void)

{
    return;
}


