// decompiled by r2ghidra: 0578_AmiBoardInfo2.pe32
// functions: 14

/* entry0 @ 0x10310 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.0001032c(arg1,arg2);
    fcn.00010444(arg1,arg2);
    return;
}


/* fcn.0001032c @ 0x1032c */

void fcn.0001032c(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x10be0 = *(arg1 + 0x60);
    *0x10bd8 = arg1;
    fcn.0001060c();
    puVar4 = fcn.0001060c();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x00010380:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010300();
                fcn.000102f0();
                uVar2 = in(0x1808);
                fcn.000102d0(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x000102c0();
                }
                fcn.000102d0(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.000102f0();
                }
                else {
                    fcn.000102e0();
                }
                return;
            }
            if ((*0x10b78 == *(puVar4 + 4)) && (*0x10b80 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x00010380;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010444 @ 0x10444 */

void fcn.00010444(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong uStackX_8;
    int64_t aiStackX_18 [2];
    int64_t var_30h;
    
    aiStackX_18[0] = 0;
    uVar4 = 0;
    uStackX_8 = 0;
    if (*0x10c00 == 0) {
        *0x10bf0 = *(arg2 + 0x60);
        *0x10bf8 = *(arg2 + 0x58);
        *0x10c00 = arg2;
    }
    iVar1 = (**(*0x10be0 + 0x140))(0x10af0,0,aiStackX_18);
    if (iVar1 < 0) {
        aiStackX_18[0] = 0x10b00;
        iVar1 = fcn.00010718(0x10bd0,0x10bc8,0x10ae0,0x10ad0);
        if (-1 < iVar1) {
            iVar1 = -0x7ffffffffffffffe;
            if (*0x10bd0 == 0) {
                iVar2 = -0x7ffffffffffffffe;
            }
            else {
                iVar2 = fcn.000103f4(0x4154414449435024,&uStackX_8,*0x10bd0);
                uVar4 = uStackX_8;
            }
            if (-1 < iVar2) {
                *(aiStackX_18[0] + 0x10) = uVar4;
                iVar2 = fcn.00010718(0x10bc0,0x10bb0,0x10ac0,0);
                if (-1 < iVar2) {
                    *(aiStackX_18[0] + 0x28) = *0x10bc0;
                    *(aiStackX_18[0] + 0x30) = *0x10bb0;
                }
                uVar4 = 0;
                uStackX_8 = 0;
                iVar2 = *0x10bd0;
                if (*0x10bd0 == 0) {
                    iVar3 = -0x7ffffffffffffffe;
                }
                else {
                    iVar3 = fcn.000103f4(0x415441444f495324,&uStackX_8,*0x10bd0);
                    uVar4 = uStackX_8;
                }
                if (-1 < iVar3) {
                    *(aiStackX_18[0] + 0x18) = uVar4;
                    iVar2 = *0x10bd0;
                }
                uStackX_8 = 0;
                if (iVar2 != 0) {
                    iVar1 = fcn.000103f4(0x4154414449504124,&uStackX_8,iVar2);
                }
                if (-1 < iVar1) {
                    *(aiStackX_18[0] + 0x20) = uStackX_8;
                }
                (**(*0x10be0 + 0x148))(0x10bb8,0x10af0,0x10b00,0);
            }
        }
    }
    return;
}


/* fcn.0001060c @ 0x1060c */

int64_t fcn.0001060c(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10be8 == 0) {
        *0x10be8 = 0;
        if (*(*0x10bd8 + 0x68) != 0) {
            piVar2 = *(*0x10bd8 + 0x70);
            do {
                if ((*0x10ab0 == *piVar2) && (*0x10ab8 == piVar2[1])) {
                    *0x10be8 = (*(*0x10bd8 + 0x70))[uVar1 * 3 + 2];
                    return *0x10be8;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10bd8 + 0x68));
        }
    }
    return *0x10be8;
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


/* fcn.00010718 @ 0x10718 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

int64_t fcn.00010718(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uchar auStack_68 [8];
    int64_t iStack_60;
    int64_t iStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    uint64_t uStack_40;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    uint32_t var_bp_8h;
    
    iStack_50 = 0;
    iStack_60 = 0;
    iStack_48 = 0;
    iVar2 = (**(*0x10bf0 + 0x138))(2,0x10aa0,0,&uStack_40,&iStack_50);
    if (-1 < iVar2) {
        uVar5 = 0;
        if (uStack_40 != 0) {
            do {
                iVar2 = (**(*0x10bf0 + 0x98))(*(iStack_50 + uVar5 * 8),0x10aa0,&iStack_48);
                if (-1 < iVar2) {
                    iVar2 = 0;
                    do {
                        iStack_60 = 0;
                        iVar3 = (**(iStack_48 + 0x18))
                                          (iStack_48,arg3,'\x19' - (arg4 != 0),iVar2,&iStack_60,&iStack_58,
                                           auStack_68);
                        if (iVar3 < 0) {
                            if (arg4 == 0) {
                                iVar3 = (**(iStack_48 + 0x18))
                                                  (iStack_48,arg3,0x10,iVar2,&iStack_60,&iStack_58,auStack_68);
                            }
                            if (iVar3 < 0) break;
                        }
                        iVar1 = iStack_60;
                        if (arg4 == 0) {
code_r0x000108f8:
                            (**(*0x10bf0 + 0x48))(iStack_50);
                            if (-1 < iVar3) {
                                *arg1 = iStack_60;
                                *arg2 = iStack_58;
                            }
                            return iVar3;
                        }
                        iVar4 = fcn.000106a4(iStack_60,arg4);
                        if (iVar4 == 0) {
                            iStack_58 = iStack_58 + -0x10;
                            iStack_60 = fcn.00010678(iStack_58);
                            if (iStack_60 == 0) {
                                iVar3 = -0x7ffffffffffffff7;
                            }
                            else {
                                fcn.000109e0(iStack_60,iVar1 + 0x10,iStack_58);
                            }
                            (**(*0x10bf0 + 0x48))(iVar1);
                            goto code_r0x000108f8;
                        }
                        if (iVar1 != 0) {
                            (**(*0x10bf0 + 0x48))(iVar1);
                        }
                        iVar2 = iVar2 + 1;
                    } while( true );
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < uStack_40);
        }
        (**(*0x10bf0 + 0x48))(iStack_50);
    }
    return -0x7ffffffffffffff2;
}


/* fcn.000103f4 @ 0x103f4 */

ulong fcn.000103f4(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint in_R8;
    int64_t *piVar1;
    
    if ((arg2 != 0) && (*0x10bc8 != 0)) {
        if (*0x10bc8 != 8) {
            piVar1 = CONCAT44(in_R8,arg3);
            do {
                if (*piVar1 == arg1) {
                    *arg2 = piVar1;
                    return 0;
                }
                piVar1 = piVar1 + 1;
            } while (piVar1 - CONCAT44(in_R8,arg3) < *0x10bc8 - 8U);
        }
        return 0x800000000000000e;
    }
    return 0x8000000000000002;
}


/* fcn.000106a4 @ 0x106a4 */

int64_t fcn.000106a4(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    arg1 = arg1 & 7;
    piVar2 = piVar1;
    if ((arg1 != 0) && (arg1 == (arg2 & 7))) {
        iVar3 = 8 - arg1;
        for (; (iVar3 != 0 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
            arg2 = arg2 + 1;
            iVar3 = iVar3 + -1;
        }
    }
    for (; (piVar2 <= piVar1 + 1 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
        arg2 = arg2 + 8;
    }
    while( true ) {
        if (piVar1 + 2 <= piVar2) {
            return 0;
        }
        if (*piVar2 != *arg2) break;
        piVar2 = piVar2 + 1;
        arg2 = arg2 + 1;
    }
    return *piVar2 - *arg2;
}


/* fcn.00010678 @ 0x10678 */

ulong fcn.00010678(int64_t arg1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    (**(*0x10bf0 + 0x40))(4,arg1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.000109e0 @ 0x109e0 */

int64_t fcn.000109e0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *puVar4;
    uint8_t uVar5;
    
    uVar5 = 0;
    bVar1 = false;
    uVar2 = arg2 - arg1;
    puVar4 = arg1;
    if (arg2 < arg1) {
        uVar2 = -uVar2;
        if (arg1 <= arg3 + arg2) {
            puVar4 = arg3 + arg1;
            bVar1 = true;
            uVar5 = 1;
            arg2 = arg3 + arg2;
        }
    }
    if ((7 < arg3) && (7 < uVar2)) {
        uVar2 = arg2 & 7;
        uVar3 = puVar4 & 7;
        if (bVar1) {
            arg2 = arg2 + -1;
            puVar4 = puVar4 + -1;
        }
        if ((uVar2 == uVar3) && (uVar2 != 0)) {
            if (!bVar1) {
                uVar2 = 8 - uVar2;
            }
            arg3 = arg3 - uVar2;
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                *puVar4 = *arg2;
                arg2 = arg2 + uVar5 * -2 + 1;
                puVar4 = puVar4 + uVar5 * -2 + 1;
            }
        }
        if (bVar1) {
            arg2 = arg2 + -7;
            puVar4 = puVar4 + -7;
        }
        for (uVar2 = arg3 >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *arg2;
            arg2 = arg2 + (uVar5 * -2 + 1) * 8;
            puVar4 = puVar4 + uVar5 * -2 + 1;
        }
        arg3 = arg3 & 7;
        if (arg3 == 0) {
            return arg1;
        }
        if (bVar1) {
            arg2 = arg2 + 8;
            puVar4 = puVar4 + 1;
        }
    }
    if (bVar1) {
        arg2 = arg2 + -1;
        puVar4 = puVar4 + -1;
    }
    for (; arg3 != 0; arg3 = arg3 - 1) {
        *puVar4 = *arg2;
        arg2 = arg2 + uVar5 * -2 + 1;
        puVar4 = puVar4 + uVar5 * -2 + 1;
    }
    return arg1;
}


