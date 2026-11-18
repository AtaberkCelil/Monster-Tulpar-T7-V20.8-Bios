// decompiled by r2ghidra: 0289_SmmAccess.pe32
// functions: 6

/* entry0 @ 0x102c0 */

void entry0(ulong noname_0,int64_t arg1)

{
    *0x10738 = *(arg1 + 0x60);
    *0x10730 = arg1;
    fcn.00010658();
    fcn.000102e8();
    return;
}


/* fcn.00010658 @ 0x10658 */

int64_t fcn.00010658(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10740 == 0) {
        *0x10740 = 0;
        if (*(*0x10730 + 0x68) != 0) {
            piVar2 = *(*0x10730 + 0x70);
            do {
                if ((*0x106e0 == *piVar2) && (*0x106e8 == piVar2[1])) {
                    *0x10740 = (*(*0x10730 + 0x70))[uVar1 * 3 + 2];
                    return *0x10740;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10730 + 0x68));
        }
    }
    return *0x10740;
}


/* fcn.000102e8 @ 0x102e8 */

int16_t * fcn.000102e8(void)

{
    int16_t *piVar1;
    uint32_t uVar2;
    int16_t *piVar3;
    int64_t iVar4;
    int16_t *piVar5;
    int16_t *piVar6;
    int64_t arg2;
    
    fcn.000102a0(0x10750,0x48);
    piVar5 = NULL;
    *0x10750 = 0x61733534;
    *0x10758 = 0;
    piVar3 = fcn.00010658();
    do {
        if (*piVar3 == -1) {
            piVar3 = piVar5;
code_r0x00010353:
            if (piVar3 == NULL) goto code_r0x00010494;
            if ((*0x106f0 == *(piVar3 + 4)) && (*0x106f8 == *(piVar3 + 8))) {
                if (piVar3 == NULL) {
code_r0x00010494:
                    piVar5 = 0x800000000000000e;
                }
                else {
                    uVar2 = *(piVar3 + 0xc);
                    arg2 = uVar2 << 5;
                    iVar4 = fcn.00010628(*0x106f8,arg2);
                    if ((iVar4 != 0) && (uVar2 != 0)) {
                        iVar4 = fcn.000102a0(iVar4,arg2);
                    }
                    *0x10790 = iVar4;
                    if (iVar4 == 0) {
                        piVar5 = 0x8000000000000009;
                    }
                    else {
                        *0x10788 = piVar5;
                        if (*(piVar3 + 0xc) != 0) {
                            piVar6 = piVar5;
                            while( true ) {
                                *0x10788 = *0x10788 + 1;
                                *(piVar6 + *0x10790) = *(piVar3 + 0x10 + piVar6);
                                piVar1 = piVar6 + 0x10;
                                *(piVar6 + *0x10790 + 8) = *(piVar3 + 0x14 + piVar6);
                                *(piVar6 + *0x10790 + 0x10) = *(piVar3 + 8 + piVar1);
                                *(piVar6 + *0x10790 + 0x18) = *(piVar3 + 0xc + piVar1);
                                if (*(piVar3 + 0xc) <= *0x10788) break;
                                piVar6 = piVar1;
                            }
                        }
                        *0x10760 = 0x104b0;
                        *0x10768 = 0x10514;
                        *0x10780 = 0;
                        *0x10770 = 0x1058c;
                        *0x10778 = 0x105c8;
                        iVar4 = (**(*0x10738 + 0x148))(0x10758,0x10700,0x10760,0);
                        if (iVar4 < 0) {
                            piVar5 = 0x8000000000000003;
                        }
                    }
                }
                return piVar5;
            }
        }
        else if (*piVar3 == 4) goto code_r0x00010353;
        piVar3 = piVar3 + piVar3[1];
    } while( true );
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    for (uVar1 = arg2 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
    }
    return arg1;
}


/* fcn.00010628 @ 0x10628 */

ulong fcn.00010628(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x10738 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 1152 named .text
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


