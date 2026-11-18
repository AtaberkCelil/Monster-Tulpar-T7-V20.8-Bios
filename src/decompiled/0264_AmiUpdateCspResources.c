// decompiled by r2ghidra: 0264_AmiUpdateCspResources.pe32
// functions: 12

/* entry0 @ 0x10310 */

void entry0(int64_t arg1,int64_t arg2)

{
    ulong auStackX_18 [2];
    
    fcn.0001038c(arg1,arg2);
    if (*0x10aa0 == 0) {
        *0x10a90 = *(arg2 + 0x60);
        *0x10a98 = *(arg2 + 0x58);
        *0x10aa0 = arg2;
    }
    fcn.000105b8();
    fcn.00010600(arg1);
    auStackX_18[0] = 0;
    (**(*0x10a78 + 0x148))(auStackX_18,0x10a00,0,0);
    return;
}


/* fcn.0001038c @ 0x1038c */

void fcn.0001038c(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x10a78 = *(arg1 + 0x60);
    *0x10a70 = arg1;
    fcn.00010454();
    puVar4 = fcn.00010454();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000103e0:
            if (puVar4 == NULL) {
                uVar5 = fcn.000102a0();
                fcn.00010290();
                uVar2 = in(0x1808);
                fcn.00010270(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x00010260();
                }
                fcn.00010270(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010290();
                }
                else {
                    fcn.00010280();
                }
                return;
            }
            if ((*0x10a30 == *(puVar4 + 4)) && (*0x10a38 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x000103e0;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.000105b8 @ 0x105b8 */

void fcn.000105b8(void)

{
    int64_t iVar1;
    
    if (*0x10aa8 == 0) {
        iVar1 = (**(*0x10a90 + 0x140))(0x10a10,0,0x10aa8);
        if (-1 < iVar1) {
            *0x10ab0 = *(*0x10aa8 + 0x10);
        }
    }
    return;
}


/* fcn.00010600 @ 0x10600 */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_39h

int64_t fcn.00010600(int64_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    uint64_t *puVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t var_6fh;
    int64_t var_77h;
    int64_t var_7fh;
    int64_t iStack_e8;
    int64_t iStack_e0;
    uint64_t uStack_d0;
    uchar auStack_b0 [16];
    int iStack_a0;
    int64_t iStack_98;
    uchar auStack_88 [15];
    int64_t var_71h;
    int iStack_68;
    uchar auStack_60 [7];
    int64_t var_51h;
    int32_t var_41h;
    uint32_t var_39h;
    int64_t var_29h;
    int32_t var_9h;
    uint32_t var_1h;
    
    iStackX_18 = 0;
    uVar8 = 0;
    iStackX_10 = 0;
    uVar12 = 0xffffffffffffffff;
    iVar11 = 0;
    if (*0x10aa0 == 0) {
        iVar4 = -0x7ffffffffffffffe;
    }
    else {
        iVar4 = fcn.000104c0(&iStackX_18);
        iVar3 = iStackX_18;
        if (-1 < iVar4) {
            uVar10 = 0;
            iStackX_20 = *0x10ab0 + 0x20 + *(*0x10ab0 + 0x18) * 0x159;
            if (*(*0x10ab0 + 0x1c) != 0) {
                piVar5 = iStackX_20 + 8;
                do {
                    if (*(piVar5 + 0xc) == -1) {
                        (**(iVar3 + 0x50))(piVar5[1],piVar5[-1]);
                    }
                    else {
                        iVar11 = iVar11 + 1;
                        iVar4 = iStackX_10 + 1;
                        if ((*(piVar5 + 0xc) & 1) == 0) {
                            iVar4 = iStackX_10;
                        }
                        uVar2 = piVar5[-1];
                        uVar1 = uVar2 + *piVar5;
                        if (uVar8 < uVar1) {
                            uVar8 = uVar1;
                        }
                        if (uVar2 < uVar12) {
                            uVar12 = uVar2;
                        }
                        (**(iVar3 + 0x18))(piVar5[1],uVar2,*piVar5,0x800000000000100d);
                        iStackX_10 = iVar4;
                    }
                    piVar7 = piVar5 + -1;
                    if (*(piVar5 + 0xc) == -1) {
                        iVar4 = (**(iVar3 + 0x70))(*piVar7,auStack_b0);
                        if (iStack_98 == 0) {
                            if (iStack_a0 != piVar5[1]) {
                                *(piVar5 + 1) = iStack_a0;
                            }
                            iVar4 = (**(iVar3 + 0x58))(2,piVar5[1],0,*piVar5,piVar7,arg1,0);
code_r0x0001076f:
                            if (iVar4 < 0) {
                                return iVar4;
                            }
                        }
                    }
                    else {
                        iVar4 = (**(iVar3 + 0x38))(*piVar7,auStack_88);
                        if (_auStack_60 == 0) {
                            if (iStack_68 != piVar5[1]) {
                                *(piVar5 + 1) = iStack_68;
                            }
                            iVar4 = (**(iVar3 + 0x20))(2,piVar5[1],0,*piVar5,piVar7,arg1,0);
                            goto code_r0x0001076f;
                        }
                    }
                    uVar10 = uVar10 + 1;
                    piVar5 = piVar5 + 0x24;
                } while (uVar10 < *(*0x10ab0 + 0x1c));
            }
            if ((iVar11 != 0) && (iVar11 == iStackX_10)) {
                uVar10 = uVar12 & 0xfffffffffffff000;
                if ((uVar12 & 0xfff) == 0) {
                    uVar10 = uVar12;
                }
                while (iVar4 = (**(iVar3 + 0x38))(uVar10,&iStack_e8), -1 < iVar4) {
                    uVar12 = iStack_e0 + iStack_e8;
                    if (uVar8 <= iStack_e0 + iStack_e8) {
                        uVar12 = uVar8;
                    }
                    if ((uStack_d0 & 1) == 0) {
                        uStack_d0 = uStack_d0 | 1;
                        iVar4 = (**(iVar3 + 0x40))(uVar10,uVar12 - uVar10);
                    }
                    if (uVar8 <= uVar12) break;
                    uVar10 = uVar12;
                }
            }
            uVar12 = 0;
            if (*(*0x10ab0 + 0x1c) != 0) {
                puVar6 = iStackX_20 + 0x14;
                iVar9 = *0x10ab0;
                do {
                    if (*puVar6 != 0xffffffffffffffff) {
                        iVar4 = (**(iVar3 + 0x40))(*(puVar6 + -0x14),*(puVar6 + -0xc),*puVar6);
                        if (iVar4 < 0) {
                            uVar8 = *puVar6 & 0xffffffffffffeff0 | 1;
                            if (iVar11 != iStackX_10) {
                                uVar8 = *puVar6 & 0xffffffffffffeff0;
                            }
                            iVar4 = (**(iVar3 + 0x40))(*(puVar6 + -0x14),*(puVar6 + -0xc),uVar8);
                        }
                        iVar9 = *0x10ab0;
                    }
                    uVar12 = uVar12 + 1;
                    puVar6 = puVar6 + 0x24;
                } while (uVar12 < *(iVar9 + 0x1c));
            }
        }
    }
    return iVar4;
}


/* fcn.00010454 @ 0x10454 */

int64_t fcn.00010454(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10a80 == 0) {
        *0x10a80 = 0;
        if (*(*0x10a70 + 0x68) != 0) {
            piVar2 = *(*0x10a70 + 0x70);
            do {
                if ((*0x10a20 == *piVar2) && (*0x10a28 == piVar2[1])) {
                    *0x10a80 = (*(*0x10a70 + 0x70))[uVar1 * 3 + 2];
                    return *0x10a80;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10a70 + 0x68));
        }
    }
    return *0x10a80;
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


/* fcn.0001053c @ 0x1053c */

int64_t fcn.0001053c(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    piVar3 = 0x10a40;
    piVar2 = piVar1;
    if (((arg1 & 7) != 0) && ((arg1 & 7) == 0)) {
        iVar4 = 8;
        do {
            if (*piVar2 != *piVar3) break;
            piVar2 = piVar2 + 1;
            piVar3 = piVar3 + 1;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
    }
    for (; (piVar2 <= piVar1 + 1 && (*piVar2 == *piVar3)); piVar2 = piVar2 + 1) {
        piVar3 = piVar3 + 1;
    }
    while( true ) {
        if (piVar1 + 2 <= piVar2) {
            return 0;
        }
        if (*piVar2 != *piVar3) break;
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
    }
    return *piVar2 - *piVar3;
}


/* fcn.000104c0 @ 0x104c0 */

ulong fcn.000104c0(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    if (*0x10a88 == 0) {
        iVar2 = *(*0x10aa0 + 0x70);
        *0x10a88 = 0;
        for (iVar3 = *(*0x10aa0 + 0x68); iVar3 != 0; iVar3 = iVar3 + -1) {
            iVar1 = fcn.0001053c(iVar2);
            if (iVar1 == 0) {
                *0x10a88 = *(iVar2 + 0x10);
                goto code_r0x00010506;
            }
            iVar2 = iVar2 + 0x18;
        }
        *0x10a88 = 0;
code_r0x00010506:
        if (*0x10a88 == 0) {
            return 0xa000000000000002;
        }
    }
    if (arg1 != 0) {
        *arg1 = *0x10a88;
    }
    return 0;
}


