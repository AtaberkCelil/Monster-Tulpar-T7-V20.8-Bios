// decompiled by r2ghidra: 0783_OemTurboModeDxe.pe32
// functions: 10

/* entry0 @ 0x103c0 */

ulong entry0(ulong noname_0,int64_t arg1)

{
    uchar auStackX_18 [16];
    
    fcn.00010438(noname_0,arg1);
    if (*0x10800 == 0) {
        *0x107f0 = *(arg1 + 0x60);
        *0x107f8 = *(arg1 + 0x58);
        *0x10800 = arg1;
    }
    (**(*0x107f0 + 0x170))(0x200,0x10,0x10508,0,0x10790,auStackX_18);
    return 0;
}


/* fcn.00010438 @ 0x10438 */

void fcn.00010438(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    
    *0x107e8 = *(arg1 + 0x60);
    *0x107e0 = arg1;
    fcn.00010560();
    iVar3 = fcn.000105cc();
    if (iVar3 == 0) {
        uVar4 = fcn.00010300();
        fcn.000102f0();
        uVar1 = in(0x1808);
        fcn.000102d0(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x000102c0();
        }
        fcn.000102d0(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.000102f0();
        }
        else {
            fcn.000102e0();
        }
    }
    if ((*0x10810 != NULL) || (iVar3 = (**(*0x107e8 + 0x140))(0x107a0,0,0x10810), -1 < iVar3)) {
        (***0x10810)(*0x10810,0x10818);
    }
    return;
}


/* fcn.00010560 @ 0x10560 */

int64_t fcn.00010560(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10808 == 0) {
        *0x10808 = 0;
        if (*(*0x107e0 + 0x68) != 0) {
            piVar2 = *(*0x107e0 + 0x70);
            do {
                if ((*0x10780 == *piVar2) && (*0x10788 == piVar2[1])) {
                    *0x10808 = (*(*0x107e0 + 0x70))[uVar1 * 3 + 2];
                    return *0x10808;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x107e0 + 0x68));
        }
    }
    return *0x10808;
}


/* fcn.000105cc @ 0x105cc */

void fcn.000105cc(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00010560();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00010603:
            if ((piVar1 == NULL) || ((*0x107b0 == *(piVar1 + 4) && (*0x107b8 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00010603;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010300 @ 0x10300 */

uint64_t fcn.00010300(void)

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


/* fcn.000102f0 @ 0x102f0 */

void fcn.000102f0(void)

{
    return;
}


/* fcn.000102d0 @ 0x102d0 */

uint64_t fcn.000102d0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102c2 @ 0x102c2 */

void fcn.000102c2(void)

{
    return;
}


/* fcn.000102e0 @ 0x102e0 */

void fcn.000102e0(void)

{
    return;
}


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 1312 named .text
    uVar5 = 0;
    puVar2 = arg2 + -1 + arg3;
    if ((arg2 < arg1) && (arg1 <= puVar2)) {
        puVar3 = arg1 + -1 + arg3;
        uVar5 = 1;
        uVar4 = arg3;
    }
    else {
        uVar4 = arg3 & 7;
        puVar2 = arg2;
        puVar3 = arg1;
        for (uVar1 = arg3 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
        }
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + uVar5 * -2 + 1;
        puVar3 = puVar3 + uVar5 * -2 + 1;
    }
    return arg1;
}


