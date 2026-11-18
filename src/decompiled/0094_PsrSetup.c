// decompiled by r2ghidra: 0094_PsrSetup.pe32
// functions: 42

/* entry0 @ 0x10300 */

ulong entry0(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong uVar2;
    
    fcn.00010344(param_1,param_2);
    iVar1 = (**(*0x18550 + 0x140))(0x151b0,0,0x17c20);
    if (iVar1 < 0) {
        uVar2 = 0x8000000000000015;
    }
    else {
        uVar2 = fcn.000113c0();
    }
    return uVar2;
}


/* fcn.00010344 @ 0x10344 */

int64_t fcn.00010344(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    *0x18550 = *(arg1 + 0x60);
    *0x18548 = arg1;
    (**(*0x18550 + 0x140))(0x15270,0,0x18558);
    (**(*0x18550 + 0x140))(0x15260,0,0x18578);
    (**(*0x18550 + 0x140))(0x15220,0,0x18568);
    (**(*0x18550 + 0x140))(0x15a70,0,0x18560);
    (**(*0x18550 + 0x140))(0x15250,0,0x18570);
    uVar1 = 0;
    if (*0x18580 == 0) {
        *0x18580 = 0;
        if (*(*0x18548 + 0x68) != 0) {
            piVar2 = *(*0x18548 + 0x70);
            do {
                if ((*0x152a0 == *piVar2) && (*0x152a8 == piVar2[1])) {
                    *0x18580 = (*(*0x18548 + 0x70))[uVar1 * 3 + 2];
                    return *0x18580;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x18548 + 0x68));
        }
    }
    return *0x18580;
}


/* fcn.000113c0 @ 0x113c0 */

int64_t fcn.000113c0(void)

{
    int64_t iVar1;
    int64_t aiStackX_8 [4];
    
    *0x185a0 = 0x11374;
    *0x185a8 = 0x11398;
    *0x185b0 = 0x109ec;
    iVar1 = (**(*0x18550 + 0x140))(0x15220,0,0x185b8);
    if (-1 < iVar1) {
        aiStackX_8[0] = 0;
        iVar1 = (**(*0x18550 + 0x148))(aiStackX_8,0x15210,0x15a88,0x15290,0x185a0,0);
        if ((-1 < iVar1) && (*0x18588 = fcn.00014974(0x15aa0,aiStackX_8[0],0x152c0,0x15ab0), *0x18588 == 0)) {
            iVar1 = -0x7ffffffffffffff9;
        }
    }
    return iVar1;
}


/* fcn.00014974 @ 0x14974 */

uint64_t fcn.00014974(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int *piVar5;
    int64_t *piVar6;
    int64_t iStackX_18;
    int64_t iStackX_20;
    uint64_t auStack_48 [2];
    
    iStackX_20 = arg4;
    if (arg3 != 0) {
        piVar6 = &iStackX_18;
        piVar5 = arg3;
        uVar4 = 0;
        do {
            piVar6 = piVar6 + 1;
            uVar3 = uVar4 + *piVar5 + -4;
            uVar4 = uVar3;
            piVar5 = *piVar6;
        } while (piVar5 != NULL);
        if (uVar3 != 0) {
            iStackX_18 = arg3;
            puVar1 = fcn.00012aa8(uVar3 + 0x18);
            if (puVar1 != NULL) {
                *puVar1 = *arg1;
                piVar6 = &iStackX_18;
                puVar1[1] = *(arg1 + 8);
                *(puVar1 + 2) = uVar3 + 0x18;
                piVar5 = puVar1 + 0x14;
                do {
                    uVar3 = *arg3 - 4;
                    if ((uVar3 != 0) && (piVar5 != arg3 + 4)) {
                        section..text(piVar5,arg3 + 4,uVar3);
                    }
                    piVar6 = piVar6 + 1;
                    piVar5 = piVar5 + uVar3;
                    arg3 = *piVar6;
                } while (arg3 != NULL);
                if (piVar5 != 0x17be8) {
                    section..text(piVar5,0x17be8,4);
                }
                iVar2 = (***0x18578)(*0x18578,puVar1,arg2,auStack_48);
                if (iVar2 < 0) {
                    auStack_48[0] = 0;
                }
                (**(*0x18550 + 0x48))(puVar1);
                return auStack_48[0];
            }
        }
    }
    return 0;
}


/* fcn.000148e8 @ 0x148e8 */

int64_t fcn.000148e8(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uchar auStackX_10 [8];
    int64_t aiStackX_18 [2];
    
    aiStackX_18[0] = 0;
    iVar1 = (**(*0x18558 + 0x18))(*0x18558,arg1,auStackX_10,aiStackX_18);
    if ((iVar1 == -0x7ffffffffffffffb) && (iVar1 = fcn.00012aa8(aiStackX_18[0]), iVar1 != 0)) {
        iVar2 = (**(*0x18558 + 0x18))(*0x18558,arg1,iVar1,aiStackX_18);
        if (-1 < iVar2) {
            return iVar1;
        }
        (**(*0x18550 + 0x48))(iVar1);
    }
    return 0;
}


/* fcn.00011cec @ 0x11cec */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00011cec(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

{
    uint16_t uVar1;
    uint32_t uVar2;
    char cVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    char *pcVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    char cVar13;
    uint64_t uVar14;
    char *pcVar15;
    uint32_t uVar16;
    uint64_t *puVar17;
    uint64_t *puVar18;
    int64_t *piVar19;
    uint8_t *puVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    bool bVar23;
    int64_t var_10h;
    uint64_t uStackX_18;
    uint8_t *puStackX_20;
    uint64_t *in_stack_00000028;
    char cStack0000000000000030;
    int8_t var_68h;
    int64_t var_70h_2;
    char *pcStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t *puStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    uint64_t uStack_98;
    int64_t iStack_90;
    int64_t var_80h;
    int64_t var_78h;
    int32_t var_70h;
    int32_t var_6ch;
    int64_t var_68h_2;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_bp_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int8_t var_18h;
    
    puVar17 = NULL;
    puStack_b0 = NULL;
    if (arg2 == 0) {
        uVar22 = arg3 & 0x2000;
        if ((arg3 & 0x2000U) == 0) goto code_r0x00011d4b;
    }
    else {
        uVar22 = arg3 & 0x2000;
        if (((arg3 & 0x2000U) == 0) && (arg1 == 0)) {
            return 0;
        }
    }
    if (arg4 == 0) {
        return 0;
    }
code_r0x00011d4b:
    uVar5 = 1;
    if ((arg3 & 0x40U) == 0) {
        if (1000000 < arg2) {
            return 0;
        }
        uVar14 = uVar5;
    }
    else {
        if (1000000 < arg2) {
            return 0;
        }
        uVar14 = 2;
    }
    if ((arg3 >> 8 & 1) == 0) {
        uVar21 = fcn.00011c64(arg4);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.00011b60(arg4,0xf4241);
        if (1000000 < uVar5) {
            return 0;
        }
        puVar17 = NULL;
        uStack_98 = 0xffff;
        uVar5 = 2;
    }
    var_78h = uVar5;
    if (uVar22 == 0) {
        if (arg2 == 0) {
            return 0;
        }
    }
    else {
        arg1 = arg1 & -(arg2 != 0);
    }
    _var_70h = NULL;
    uStack_d0 = 0;
    pcStack_d8 = NULL;
    if (arg1 != NULL) {
        _var_70h = arg1;
        pcStack_d8 = arg1 + (arg2 + -1) * uVar14;
    }
    if (uVar5 == 1) {
        iVar4 = 0;
    }
    else {
        iVar4 = *(arg4 + 1) << 8;
    }
    uStack_a8 = (*arg4 | iVar4) & uStack_98;
    puStackX_20 = arg4;
    while( true ) {
        uVar22 = 1;
        if ((uStack_a8 == 0) || ((arg1 != NULL && (pcStack_d8 <= arg1)))) break;
        uStack_a0 = 0;
        uVar5 = 0;
        iStack_90 = 0;
        cVar3 = '\0';
        uVar21 = arg3 & 0x2140;
        uStack_b8 = 1;
        cVar13 = '\0';
        bVar23 = false;
        _cStack0000000000000030 = _cStack0000000000000030 & 0xffffffffffffff00;
        uStack_c0 = 0;
        uStackX_18 = uVar21;
        if (uStack_a8 == 10) {
            puVar20 = puStackX_20 + var_78h;
            pcVar8 = 0x1623c;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar20[1] << 8;
            }
            uStack_a8 = (iVar4 | *puVar20) & uStack_98;
            if (uStack_a8 != 0xd) {
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0xd) {
            puVar20 = puStackX_20 + var_78h;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar20[1] << 8;
            }
            uVar10 = iVar4 | *puVar20;
code_r0x00012106:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x1623c;
            }
            else {
                pcVar8 = 0x16240;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x00011e9d:
            while( true ) {
                puStackX_20 = puVar20 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puStackX_20[1] << 8;
                }
                uStack_a8 = (*puStackX_20 | iVar4) & uStack_98;
                if (uStack_a8 < 0x2e) break;
                if (uStack_a8 == 0x2e) {
                    uVar21 = uVar21 | 0x800;
                    goto code_r0x00012040;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x00012057;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x00012040;
                        }
                        goto code_r0x00012057;
                    }
                }
                uVar5 = 0;
                uStack_c0 = 0;
                if (0x2f < uStack_a8) {
                    do {
                        if (0x39 < uStack_a8) break;
                        puStackX_20 = puStackX_20 + var_78h;
                        uVar5 = uStack_a8 + (uVar5 * 5 + -0x18) * 2;
                        if (var_78h == 1) {
                            iVar4 = 0;
                        }
                        else {
                            iVar4 = puStackX_20[1] << 8;
                        }
                        uStack_a8 = (*puStackX_20 | iVar4) & uStack_98;
                    } while (0x2f < uStack_a8);
                    uStack_c0 = uVar5;
                }
                puVar20 = puStackX_20 + -var_78h;
                uVar5 = uStack_c0;
                if ((uVar21 & 0x800) == 0) {
                    uVar21 = uVar21 | 0x200;
                    uStack_a0 = uStack_c0;
                    uStackX_18 = uVar21;
                }
                else {
                    uVar22 = uStack_c0;
                    uStack_b8 = uStack_c0;
                }
            }
            if (uStack_a8 == 0x2d) {
                uVar21 = uVar21 | 1;
code_r0x00012040:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x00011e9d;
            }
            if (uStack_a8 != 0) {
                if (uStack_a8 == 0x20) {
                    uVar21 = uVar21 | 4;
                }
                else {
                    if (uStack_a8 == 0x2a) {
                        if ((uVar21 & 0x800) == 0) {
                            uVar21 = uVar21 | 0x200;
                            if (puVar17 == NULL) {
                                uStack_a0 = *puVar18;
                                puVar18 = puVar18 + 1;
                                in_stack_00000028 = puVar18;
                            }
                            else {
                                uStack_a0 = *puVar17;
                                puVar17 = puVar17 + 1;
                                puStack_b0 = puVar17;
                            }
                            puVar20 = puStackX_20;
                            uStackX_18 = uVar21;
                        }
                        else {
                            if (puVar17 == NULL) {
                                uStack_b8 = *puVar18;
                                puVar18 = puVar18 + 1;
                                in_stack_00000028 = puVar18;
                            }
                            else {
                                uStack_b8 = *puVar17;
                                puVar17 = puVar17 + 1;
                                puStack_b0 = puVar17;
                            }
                            puVar20 = puStackX_20;
                            uVar22 = uStack_b8;
                        }
                        goto code_r0x00011e9d;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x00012057;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x00012040;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x00012057:
            puVar20 = puStackX_20;
            if (uStack_a8 < 0x68) {
                if (uStack_a8 == 0x67) {
                    if (puVar17 == NULL) {
                        uVar22 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        uVar22 = *puVar17;
                        puStack_b0 = puVar17 + 1;
                    }
                    if (uVar22 == 0) {
                        pcVar8 = "<null guid>";
                    }
                    else {
                        fcn.00012a54(&var_68h_2,0x26,0,0x161d0);
                        pcVar8 = &var_68h_2;
                        uVar5 = uStack_c0;
                        cVar13 = cStack0000000000000030;
                    }
                    uVar22 = uStack_b8;
                }
                else {
                    if (uStack_a8 != 10) {
                        if (uStack_a8 == 0xd) {
                            puVar20 = puStackX_20 + var_78h;
                            if (var_78h == 1) {
                                iVar4 = 0;
                            }
                            else {
                                iVar4 = puVar20[1] << 8;
                            }
                            uVar10 = iVar4 | *puVar20;
                            goto code_r0x00012106;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x000122ef;
                        if (uStack_a8 == 0x58) goto code_r0x000123e4;
                        if (uStack_a8 == 0x61) goto code_r0x000122f8;
                        if (uStack_a8 == 99) {
                            if (puVar17 == NULL) {
                                uVar1 = *puVar18;
                                in_stack_00000028 = puVar18 + 1;
                            }
                            else {
                                uVar1 = *puVar17;
                                puStack_b0 = puVar17 + 1;
                            }
                            var_80h = uVar1;
                            pcVar8 = &var_80h;
                            goto code_r0x00011e7e;
                        }
                        if (uStack_a8 != 100) goto code_r0x00011e7a;
                        goto code_r0x000123fb;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x1623c;
                    if (var_78h == 1) {
                        iVar4 = 0;
                    }
                    else {
                        iVar4 = puVar20[1] << 8;
                    }
                    uStack_a8 = (iVar4 | *puVar20) & uStack_98;
                    if (uStack_a8 != 0xd) {
                        puVar20 = puStackX_20;
                    }
                }
                goto code_r0x00012628;
            }
            if (uStack_a8 != 0x70) {
                if (uStack_a8 == 0x72) {
                    if (puVar17 == NULL) {
                        uVar10 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        uVar10 = *puVar17;
                        puStack_b0 = puVar17 + 1;
                    }
                    pcVar8 = &var_68h_2;
                    if (uVar10 < 0) {
                        if ((uVar10 & 0x7fffffffffffffff) - 1 < 0x21) {
                            pcVar8 = (uVar10 & 0x7fffffffffffffff) * 0x15;
                            iVar12 = 0x162db;
                            goto code_r0x000123ab;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x000123ab:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x00012628;
                    }
                    fcn.00012a54(&var_68h_2,0x26,0,0x16234);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x000122ef:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x000122f8:
                        if (puVar17 == NULL) {
                            pcVar8 = *puVar18;
                            in_stack_00000028 = puVar18 + 1;
                        }
                        else {
                            pcVar8 = *puVar17;
                            puStack_b0 = puVar17 + 1;
                        }
                        if (pcVar8 == NULL) {
                            uVar21 = uVar21 & 0xfffffffffffffbff;
                            pcVar8 = "<null string>";
                            uStackX_18 = uVar21;
                        }
                        uVar22 = uVar22 & -((uVar21 & 0x800) != 0);
                        goto code_r0x00012628;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x00011e7a;
                            goto code_r0x000123e8;
                        }
                        goto code_r0x000123ed;
                    }
                    if (puVar17 == NULL) {
                        uVar10 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        puStack_b0 = puVar17 + 1;
                        uVar10 = *puVar17;
                    }
                    if (uVar10 == 0) {
                        pcVar8 = "<null time>";
                        goto code_r0x00012628;
                    }
                    fcn.00012a54(&var_68h_2,0x26,0,0x16218);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x00012628;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x000123e4:
            uVar21 = uVar21 | 0x20;
code_r0x000123e8:
            uVar21 = uVar21 | 0x80;
code_r0x000123ed:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x000123fb:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x0001243d;
                }
                uVar5 = *puVar18;
                in_stack_00000028 = puVar18 + 1;
            }
            else if (puVar17 == NULL) {
                uVar5 = *puVar18;
                in_stack_00000028 = puVar18 + 1;
            }
            else {
                uVar5 = *puVar17;
code_r0x0001243d:
                puStack_b0 = puVar17 + 1;
            }
            cVar3 = (uVar21 & 4) << 3;
            if ((uVar21 & 2) != 0) {
                cVar3 = '+';
            }
            bVar23 = (uVar21 & 8) != 0;
            if (uVar21 < '\0') {
                uVar16 = 0x10;
                bVar23 = false;
                if (((uVar21 & 0x10) == 0) && (uVar2 = 0x10, uVar5 < 0)) {
code_r0x000124c5:
                    uVar16 = uVar2;
                    uVar5 = uVar5 & 0xffffffff;
                }
            }
            else {
                uVar16 = 10;
                if ((uVar21 & 8) != 0) {
                    uVar21 = uVar21 & 0xffffffffffffffdf;
                    uVar22 = 1;
                }
                if ((uVar5 < 0) && (uVar21 >> 0xe == 0)) {
                    cVar3 = '-';
                    uVar5 = -uVar5;
                }
                else {
                    uVar2 = 10;
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x000124c5;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar10 = uVar5;
            do {
                uVar6 = uVar10 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = "0123456789ABCDEFP"[uVar10 % uVar16];
                uVar10 = uVar6;
            } while (uVar6 != 0);
            uStack_c0 = piVar19 - &var_68h_2;
            if (uVar5 == 0) {
                uStack_c0 = uStack_c0 & -(uVar22 != 0);
            }
            pcVar8 = &var_68h_2 + uStack_c0;
            iStack_90 = 3 - uStack_c0 % 3;
            if (uStack_c0 % 3 == 0) {
                iStack_90 = 0;
            }
            if ((bVar23) && (uStack_c0 != 0)) {
                uStack_c0 = uStack_c0 + (uStack_c0 - 1) / 3;
            }
            if (cVar3 != '\0') {
                uStack_c0 = uStack_c0 + 1;
                uVar22 = uVar22 + 1;
            }
            uVar21 = uVar21 | 0x1000;
            cVar13 = '\x01';
            uVar5 = uStack_c0;
            uStackX_18 = uVar21;
            if ((uVar21 & 0xa21) == 0x220) {
                uVar22 = uStack_a0;
            }
        }
        else {
code_r0x00011e7a:
            pcVar8 = &uStack_a8;
code_r0x00011e7e:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x00012628:
        puStackX_20 = puVar20;
        uVar16 = uVar21;
        iVar12 = ((uVar21 & 0x400) != 0) + 1;
        _cStack0000000000000030 = (-((uVar21 & 0x400) != 0) & 0xff00) + 0xff;
        if ((uVar21 >> 0xc & 1) == 0) {
            uVar5 = 0;
            pcVar15 = pcVar8 + 1;
            while ((((pcVar15[-1] != '\0' || (((uVar21 & 0x400) != 0 && (*pcVar15 != '\0')))) &&
                    ((uVar5 < uVar22 || ((uVar21 >> 0xb & 1) == 0)))) &&
                   ((_cStack0000000000000030 & (*pcVar15 << 8 | pcVar15[-1])) != 0))) {
                uVar5 = uVar5 + 1;
                pcVar15 = pcVar15 + iVar12;
            }
            uStack_c0 = uVar5;
        }
        else {
            iVar12 = -iVar12;
        }
        if (uVar22 < uVar5) {
            uVar22 = uVar5;
        }
        uVar10 = uVar16 & 0x201;
        var_40h = uVar10;
        pcVar15 = pcStack_d8;
        if (uVar10 == 0x200) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar22) * uVar14;
            if (((uVar21 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00011cb8(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00011cb8(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
            }
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar6, (uVar21 & 0x2000) == 0)) && (arg1 != NULL)) {
                iVar9 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar6 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar6;
                    iVar9 = iVar9 + 1;
                } while (iVar9 < 1);
            }
        }
        else {
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar14, (uVar21 >> 0xd & 1) == 0)) && (arg1 != NULL)) {
                iVar9 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar14 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar14;
                    iVar9 = iVar9 + 1;
                } while (iVar9 < 1);
            }
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00011cb8(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
            }
        }
        arg3 = uVar21;
        if ((cVar3 != '\0') < uStack_c0) {
            uVar5 = cVar3 != '\0';
            iVar9 = iStack_90;
            do {
                if ((*pcVar8 == '\0') && ((iVar12 < 2 || (*(pcVar8 + 1) == '\0')))) break;
                uStack_d0 = uStack_d0 + uVar6;
                uVar10 = *pcVar8 & _cStack0000000000000030;
                if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                    iVar11 = 0;
                    do {
                        if (pcStack_d8 <= arg1) break;
                        *arg1 = uVar10;
                        if (uVar6 != 1) {
                            *(arg1 + 1) = uVar10 >> 8;
                        }
                        arg1 = arg1 + uVar6;
                        iVar11 = iVar11 + 1;
                    } while (iVar11 < 1);
                }
                pcVar8 = pcVar8 + iVar12;
                uVar10 = uVar5 + 1;
                if ((bVar23) && (iVar9 = iVar9 + 1, iVar9 == 3)) {
                    iVar11 = 0;
                    uVar10 = uVar5 + 2;
                    if (uStack_c0 <= uVar10) break;
                    uStack_d0 = uStack_d0 + uVar6;
                    iVar9 = iVar11;
                    if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                        iVar7 = 0;
                        do {
                            iVar9 = iVar11;
                            if (pcStack_d8 <= arg1) break;
                            *arg1 = ',';
                            if (uVar6 != 1) {
                                *(arg1 + 1) = '\0';
                            }
                            arg1 = arg1 + uVar6;
                            iVar7 = iVar7 + 1;
                            iVar9 = 0;
                        } while (iVar7 < 1);
                    }
                }
                uVar5 = uVar10;
            } while (uVar10 < uStack_c0);
            arg3 = uStackX_18;
            uVar10 = var_40h;
        }
        if (uVar10 == 0x201) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar22) * uVar6;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00011cb8(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        puStackX_20 = puStackX_20 + var_78h;
        if (var_78h == 1) {
            iVar4 = 0;
        }
        else {
            iVar4 = puStackX_20[1] << 8;
        }
        uStack_a8 = (iVar4 | *puStackX_20) & uStack_98;
        puVar17 = puStack_b0;
    }
    iVar12 = 0;
    if ((arg3 >> 0xd & 1) != 0) {
        return uStack_d0 / uVar14;
    }
    pcVar8 = arg1;
    do {
        if (pcStack_d8 + uVar14 <= pcVar8) break;
        *pcVar8 = '\0';
        if (uVar14 != 1) {
            pcVar8[1] = '\0';
        }
        pcVar8 = pcVar8 + uVar14;
        iVar12 = iVar12 + 1;
    } while (iVar12 < 1);
    return (arg1 - _var_70h) / uVar14;
}


/* fcn.00012ba4 @ 0x12ba4 */

int64_t fcn.00012ba4(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t *arg1_00;
    code *pcVar5;
    int64_t in_R8;
    char *pcVar6;
    uchar in_R9B;
    unkbyte7 in_R9;
    int64_t iStack_28;
    uint32_t *puStack_20;
    
    iVar3 = 0;
    if (arg1 != 0) {
        fcn.000102c0(&iStack_28,0x18);
        for (; (*arg1 != '\x7f' || (*(arg1 + 1) != -1)); arg1 = arg1 + *(arg1 + 2)) {
            pcVar5 = 0x14700;
            iVar1 = iVar3;
            iVar4 = iVar3;
            do {
                if ((*arg1 == *(iVar1 + 0x178c0)) && (*(arg1 + 1) == *(iVar1 + 0x178c1))) {
                    pcVar5 = *(iVar4 * 0x10 + 0x178c8);
                    break;
                }
                iVar4 = iVar4 + 1;
                iVar1 = iVar4 * 0x10;
            } while (*(iVar1 + 0x178c8) != 0);
            arg1_00 = puStack_20;
            if (((puStack_20 != NULL) && (pcVar5 != 0x146f4)) && (*(iStack_28 + puStack_20 * 2) != 0x2c)) {
                arg1_00 = &iStack_28;
                fcn.00012d0c(arg1_00,0x17854,in_R8,CONCAT71(in_R9,in_R9B));
            }
            pcVar6 = arg1;
            uVar2 = fcn.00012ad4(arg1_00,*(arg1 + 2),arg1);
            in_R9B = 1;
            in_R8 = CONCAT71(pcVar6 >> 8,1);
            (*pcVar5)(&iStack_28,uVar2);
            (**(*0x18550 + 0x48))(uVar2);
        }
        if (iStack_28 == 0) {
            iVar3 = fcn.00012aa8(2);
        }
        else {
            iVar3 = iStack_28;
        }
    }
    return iVar3;
}


/* fcn.00012ad4 @ 0x12ad4 */

void fcn.00012ad4(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00012a78();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00012a78 @ 0x12a78 */

ulong fcn.00012a78(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x18550 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 20256 named .text
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


/* fcn.000147d4 @ 0x147d4 */

int16_t fcn.000147d4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    char cVar2;
    char *arg1_00;
    int16_t iVar3;
    char *pcVar4;
    int64_t iVar5;
    char *pcVar6;
    int64_t iVar7;
    int64_t iVar8;
    int16_t aiStackX_10 [4];
    
    aiStackX_10[0] = arg2;
    pcVar4 = fcn.000148e8(arg1);
    if (pcVar4 == NULL) {
        iVar3 = 0;
    }
    else {
        iVar7 = -0x7ffffffffffffffe;
        cVar2 = *pcVar4;
        arg1_00 = pcVar4;
        while (cVar2 != '\0') {
            pcVar6 = arg1_00;
            if (*arg1_00 != '\0') {
                do {
                    if (*pcVar6 == ';') break;
                    pcVar6 = pcVar6 + 1;
                } while (*pcVar6 != '\0');
                if (*pcVar6 != '\0') {
                    *pcVar6 = '\0';
                    pcVar6 = pcVar6 + 1;
                }
            }
            iVar5 = 0;
            do {
                iVar8 = iVar5 + 1;
                pcVar1 = iVar5 + 0x17be1;
                iVar5 = iVar8;
            } while (*pcVar1 != '\0');
            iVar5 = fcn.00011b24(arg1_00,arg2,iVar8);
            if (iVar5 != 0) {
                arg2 = arg1;
                if (aiStackX_10[0] == 0) {
                    iVar7 = (***0x18558)(*0x18558,arg1,aiStackX_10);
                }
                else {
                    iVar7 = (*(*0x18558)[2])(*0x18558);
                }
                if (iVar7 < 0) break;
            }
            arg1_00 = pcVar6;
            cVar2 = *pcVar6;
        }
        (**(*0x18550 + 0x48))(pcVar4);
        iVar3 = 0;
        if (-1 < iVar7) {
            iVar3 = aiStackX_10[0];
        }
    }
    return iVar3;
}


/* fcn.00014a90 @ 0x14a90 */

int64_t * fcn.00014a90(ulong param_1)

{
    int64_t *piVar1;
    int64_t iVar2;
    
    piVar1 = fcn.00012a78(param_1,0x18);
    if (piVar1 != NULL) {
        iVar2 = fcn.00012a78();
        *piVar1 = iVar2;
        if (iVar2 != 0) {
            piVar1[2] = 0;
            piVar1[1] = 0x200;
            return piVar1;
        }
        (**(*0x18550 + 0x48))(piVar1);
    }
    return NULL;
}


/* fcn.00014bd0 @ 0x14bd0 */

void fcn.00014bd0(int64_t arg1)

{
    unkbyte7 in_R8;
    uchar auStack_28 [2];
    ulong uStack_26;
    ulong uStack_1e;
    
    fcn.000102c0(auStack_28,0x12);
    uStack_26 = *0x151c0;
    uStack_1e = *0x151c8;
    fcn.00014b70(arg1,auStack_28,CONCAT71(in_R8,0x5f),0x12);
    return;
}


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,int64_t arg2)

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


/* fcn.00014b70 @ 0x14b70 */

int64_t fcn.00014b70(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int64_t arg1_00;
    char in_stack_00000028;
    
    *arg1 = arg2;
    uVar1 = in_stack_00000028 + arg3 & 0x7f;
    *(arg1 + 1) = uVar1;
    arg1_00 = fcn.00014b14(noname_0,uVar1);
    if ((arg3 != 0) && (arg1_00 != arg1)) {
        section..text(arg1_00,arg1,arg3);
    }
    return arg1_00;
}


/* fcn.00014b14 @ 0x14b14 */

int64_t fcn.00014b14(int64_t arg1,int64_t arg2)

{
    uint64_t arg1_00;
    int64_t iVar1;
    ulong uVar2;
    
    arg1_00 = *(arg1 + 8);
    if (arg1_00 < *(arg1 + 0x10) + arg2) {
        uVar2 = fcn.00012b14(arg1,arg1_00,arg2 + 0x200 + arg1_00,*arg1);
        *arg1 = uVar2;
        *(arg1 + 8) = *(arg1 + 8) + arg2 + 0x200;
    }
    iVar1 = *(arg1 + 0x10);
    *(arg1 + 0x10) = iVar1 + arg2;
    return *arg1 + iVar1;
}


/* fcn.00012b14 @ 0x12b14 */

int64_t fcn.00012b14(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00012a78(noname_0,arg2);
    if (arg1_00 != 0) {
        if (arg2 != 0) {
            arg1_00 = fcn.000102c0(arg1_00,arg2);
        }
        if ((arg1_00 != 0) && (arg3 != 0)) {
            if (arg1 < arg2) {
                arg2 = arg1;
            }
            if ((arg2 != 0) && (arg1_00 != arg3)) {
                section..text(arg1_00,arg3,arg2);
            }
            (**(*0x18550 + 0x48))(arg3);
        }
    }
    return arg1_00;
}


/* fcn.0001176c @ 0x1176c */

ulong fcn.0001176c(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint8_t uVar7;
    uint64_t uVar8;
    int64_t iStackX_10;
    
    uVar8 = 0;
    iStackX_10 = 0;
    iVar3 = (**(*0x18550 + 0x140))(0x151b0,0,&iStackX_10);
    if (iVar3 < 0) {
        uVar4 = 0x8000000000000003;
    }
    else {
        iVar3 = fcn.00012aa8(0x1884);
        if (iVar3 == 0) {
            uVar4 = 0x8000000000000009;
        }
        else {
            (**(iStackX_10 + 8))(iStackX_10,0x1884,iVar3);
            if (arg1 != iVar3) {
                section..text(arg1,iVar3,2);
            }
            if (arg1 + 2 != iVar3 + 2) {
                section..text(arg1 + 2,iVar3 + 2,2);
            }
            if (arg1 + 4 != iVar3 + 4) {
                section..text(arg1 + 4,iVar3 + 4,0x10);
            }
            if (arg1 + 0x14 != iVar3 + 0x14) {
                section..text(arg1 + 0x14,iVar3 + 0x14,8);
            }
            if (arg1 + 0x1c != iVar3 + 0x1c) {
                section..text(arg1 + 0x1c,iVar3 + 0x1c,8);
            }
            if (arg1 + 0x24 != iVar3 + 0x24) {
                section..text(arg1 + 0x24,iVar3 + 0x24,8);
            }
            if (arg1 + 0x2c != iVar3 + 0x2c) {
                section..text(arg1 + 0x2c,iVar3 + 0x2c,8);
            }
            if (arg1 + 0x34 != iVar3 + 0x34) {
                section..text(arg1 + 0x34,iVar3 + 0x34,8);
            }
            if (arg1 + 0x3c != iVar3 + 0x3c) {
                section..text(arg1 + 0x3c,iVar3 + 0x3c,8);
            }
            if (arg1 + 0x44 != iVar3 + 0x44) {
                section..text(arg1 + 0x44,iVar3 + 0x44,8);
            }
            if (arg1 + 0x4c != iVar3 + 0x4c) {
                section..text(arg1 + 0x4c,iVar3 + 0x4c,8);
            }
            if (arg1 + 0x54 != iVar3 + 0x54) {
                section..text(arg1 + 0x54,iVar3 + 0x54,4);
            }
            if (arg1 + 0x58 != iVar3 + 0x58) {
                section..text(arg1 + 0x58,iVar3 + 0x58,0x40);
            }
            if (arg1 + 0x98 != iVar3 + 0x98) {
                section..text(arg1 + 0x98,iVar3 + 0x98,0x40);
            }
            if (arg1 + 0xd8 != iVar3 + 0xd8) {
                section..text(arg1 + 0xd8,iVar3 + 0xd8,0x40);
            }
            if (arg1 + 0x118 != iVar3 + 0x118) {
                section..text(arg1 + 0x118,iVar3 + 0x118,0x40);
            }
            if (arg1 + 0x158 != iVar3 + 0x158) {
                section..text(arg1 + 0x158,iVar3 + 0x158,0x400);
            }
            if (arg1 + 0x558 != iVar3 + 0x558) {
                section..text(arg1 + 0x558,iVar3 + 0x558,4);
            }
            if (arg1 + 0x560 != iVar3 + 0x55c) {
                section..text(arg1 + 0x560,iVar3 + 0x55c,4);
            }
            if (arg1 + 0x564 != iVar3 + 0x560) {
                section..text(arg1 + 0x564,iVar3 + 0x560,4);
            }
            if (arg1 + 0x568 != iVar3 + 0x564) {
                section..text(arg1 + 0x568,iVar3 + 0x564,4);
            }
            if (arg1 + 0x55c != iVar3 + 0x568) {
                section..text(arg1 + 0x55c,iVar3 + 0x568,4);
            }
            uVar2 = *(iVar3 + 0x598);
            uVar6 = 0;
            if (100 < *(iVar3 + 0x598)) {
                uVar2 = 100;
            }
            *(arg1 + 0x56c) = uVar2;
            if (uVar2 != 0) {
                do {
                    iVar1 = iVar3 + 0x5a0 + uVar8 * 0xc;
                    *(arg1 + 0x570 + uVar8) = *(iVar3 + 0x59c + uVar8 * 0xc);
                    iVar5 = arg1 + (uVar8 + 0x175) * 4;
                    if (iVar5 != iVar1) {
                        section..text(iVar5,iVar1,4);
                    }
                    iVar1 = iVar3 + 0x5a4 + uVar8 * 0xc;
                    iVar5 = arg1 + 0x764 + uVar6;
                    if (iVar5 != iVar1) {
                        section..text(iVar5,iVar1,4);
                    }
                    uVar7 = uVar8 + 1;
                    uVar8 = uVar7;
                    uVar6 = uVar6 + 4;
                } while (uVar7 < *(arg1 + 0x56c));
            }
            if (arg1 + 0x8f4 != iVar3 + 0xab4) {
                section..text(arg1 + 0x8f4,iVar3 + 0xab4,2);
            }
            if (arg1 + 0x8f6 != iVar3 + 0xab6) {
                section..text(arg1 + 0x8f6,iVar3 + 0xab6,2);
            }
            if (arg1 + 0x8f8 != iVar3 + 0xab8) {
                section..text(arg1 + 0x8f8,iVar3 + 0xab8,2);
            }
            if (arg1 + 0x8fa != iVar3 + 0xaba) {
                section..text(arg1 + 0x8fa,iVar3 + 0xaba,2);
            }
            uVar4 = 0;
        }
    }
    return uVar4;
}


/* fcn.00010600 @ 0x10600 */

void fcn.00010600(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    char *pcVar2;
    int64_t iVar3;
    char *pcVar4;
    uchar auStack_828 [64];
    int64_t in_stack_fffffffffffff818;
    int8_t in_stack_fffffffffffff820;
    
    pcVar2 = fcn.000148e8(arg1);
    if (pcVar2 != NULL) {
        cVar1 = *pcVar2;
        pcVar4 = pcVar2;
        while (cVar1 != '\0') {
            if (*pcVar4 == ';') {
                *pcVar4 = '\0';
                break;
            }
            pcVar4 = pcVar4 + 1;
            cVar1 = *pcVar4;
        }
        fcn.00011cec(auStack_828,0x400,0x140,arg3,in_stack_fffffffffffff818,in_stack_fffffffffffff820);
        if ((*0x17c30 != 0) || (iVar3 = (**(*0x18550 + 0x140))(0x15270,0,0x17c30), -1 < iVar3)) {
            (**(*0x17c30 + 0x10))(*0x17c30,arg1,arg2 & 0xffff,pcVar2,auStack_828,0);
            (**(*0x18550 + 0x48))(pcVar2);
        }
    }
    return;
}


/* fcn.000104c4 @ 0x104c4 */

void fcn.000104c4(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    char cVar8;
    int iVar9;
    uint32_t uVar10;
    
    bVar1 = false;
    uVar4 = (arg1 & 0xffffffffU) / 0x15180;
    iVar9 = uVar4;
    uVar10 = arg1 + iVar9 * -0x15180;
    iVar5 = uVar4 * 0x6719f361 >> 0x20;
    uVar6 = (iVar9 - iVar5 >> 1) + iVar5;
    uVar7 = uVar6 >> 8;
    uVar2 = uVar7 + 0x7b2;
    if ((((uVar2 & 3) == 0) && (uVar2 != (uVar2 / 100) * 100)) || (uVar2 == (uVar2 / 400) * 400)) {
        bVar1 = true;
    }
    uVar4 = 0;
    uVar3 = 0;
    uVar7 = (iVar9 + uVar7 * -0x16d) - ((uVar2 / 400 - 0x1dd) + ((uVar2 >> 2) - uVar2 / 100));
    uVar2 = 0x1f;
    if (0x1e < uVar7) {
        do {
            uVar3 = uVar4 + 1;
            uVar4 = uVar3;
            uVar7 = uVar7 - uVar2;
            uVar2 = *(uVar4 + 0x16190);
        } while (uVar2 <= uVar7);
    }
    cVar8 = uVar7;
    if ((bVar1) && (uVar3 == 1)) {
        cVar8 = cVar8 + '\x01';
    }
    *(arg2 + 2) = uVar3 + '\x01';
    *(arg2 + 3) = cVar8 + '\x01';
    *arg2 = (uVar6 >> 8) + 0x7b2;
    *(arg2 + 4) = uVar10 / 0xe10;
    cVar8 = uVar10 / 0x3c;
    *(arg2 + 5) = cVar8 + ((uVar10 / 0x3c) / 0x3c) * -0x3c;
    *(arg2 + 6) = uVar10 + cVar8 * -0x3c;
    return;
}


/* fcn.000106e0 @ 0x106e0 */

void fcn.000106e0(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint64_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint8_t *puVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint8_t auStack_18 [16];
    
    uVar6 = 0;
    uVar7 = arg1 & 0xffffffff;
    uVar4 = 0;
    if (arg1 == 0) {
        *arg2 = 0x30;
        uVar4 = 1;
    }
    else {
        do {
            uVar3 = uVar4;
            uVar2 = uVar7 / 10;
            auStack_18[uVar3] = uVar7 + uVar2 * -10 | 0x30;
            if (((uVar3 + 1) % 3 == uVar6) && (999 < arg1)) {
                uVar6 = uVar6 + 1;
                uVar3 = uVar3 + 1;
                auStack_18[uVar3] = 0x2c;
            }
            uVar4 = uVar3 + 1;
            uVar7 = uVar2;
        } while (uVar2 != 0);
        uVar1 = uVar3 - 1;
        if (auStack_18[uVar3] != 0x2c) {
            uVar1 = uVar3;
        }
        if (uVar4 != 0) {
            uVar7 = uVar4;
            puVar5 = arg2;
            do {
                uVar2 = uVar1;
                uVar1 = uVar1 - 1;
                *puVar5 = auStack_18[uVar2];
                puVar5 = puVar5 + 1;
                uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
        }
    }
    *(uVar4 + arg2) = 0;
    return;
}


/* fcn.00014eec @ 0x14eec */

//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h

int64_t fcn.00014eec(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_68h)

{
    bool bVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t *arg2_00;
    uint64_t *puVar4;
    uint64_t *puVar5;
    int64_t iVar6;
    uint64_t *arg1_00;
    uint32_t uVar7;
    uint64_t uVar8;
    uint64_t *arg1_01;
    int64_t unaff_R15;
    uint64_t uStackX_10;
    uint16_t uStackX_18;
    int64_t iStackX_20;
    int64_t var_48h;
    int64_t var_50h;
    int16_t var_58h;
    int64_t var_60h;
    uint64_t *puStackY_60;
    uint64_t *puStackY_58;
    int64_t in_stack_ffffffffffffffb8;
    uint32_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    
    uStackX_18 = arg3;
    puVar4 = NULL;
    puStackY_60 = NULL;
    puVar5 = NULL;
    uStackX_10 = arg2;
    iStackX_20 = arg4;
    iVar3 = (**(*0x18578 + 0x20))(*0x18578,arg1,&puStackY_60,0);
    if (iVar3 != -0x7ffffffffffffffb) {
        return iVar3;
    }
    arg2_00 = fcn.00012a78(0x8000000000000005,puStackY_60);
    if (arg2_00 == NULL) {
        return -0x7ffffffffffffff7;
    }
    iVar3 = (**(*0x18578 + 0x20))(*0x18578,arg1,&puStackY_60,arg2_00);
    if (-1 < iVar3) {
        puStackY_60 = puStackY_60 + *(arg4 + 0x10);
        puVar4 = fcn.00012aa8(puStackY_60);
        puStackY_58 = puVar4;
        if ((puVar4 == NULL) || (arg1_00 = puStackY_60, puVar5 = fcn.00012aa8(puStackY_60), puVar5 == NULL)) {
            iVar3 = -0x7ffffffffffffff7;
        }
        else {
            uVar8 = 0x14;
            if (puVar4 != arg2_00) {
                arg1_00 = puVar4;
                section..text(puVar4,arg2_00,0x14);
            }
            iVar3 = iStackX_20;
            uVar2 = arg2_00[2];
            arg1_01 = puVar4 + 0x14;
            bVar1 = false;
            if (0x14 < uVar2) {
                do {
                    puVar4 = uVar8 + arg2_00;
                    if (&uStackX_10 != puVar4) {
                        arg1_00 = &uStackX_10;
                        section..text(arg1_00,puVar4,4);
                    }
                    uVar7 = uVar8 + (*puVar4 & 0xffffff);
                    uVar8 = uVar7;
                    if ((*(puVar4 + 3) == '\x02') &&
                       (iVar6 = fcn.00014c28(arg1_00,uStackX_18,puVar4,iVar3,in_stack_ffffffffffffffb8,unaff_R15),
                       -1 < iVar6)) {
                        bVar1 = true;
                        puVar4 = puVar5;
                    }
                    if (&uStackX_10 != puVar4) {
                        arg1_00 = &uStackX_10;
                        section..text(arg1_00,puVar4,4);
                    }
                    if (((uStackX_10 & 0xffffff) != 0) && (arg1_01 != puVar4)) {
                        arg1_00 = arg1_01;
                        section..text(arg1_01,puVar4,uStackX_10 & 0xffffff);
                    }
                    puVar4 = puStackY_58;
                    arg1_01 = arg1_01 + (uStackX_10 & 0xffffff);
                } while (uVar7 < uVar2);
                if (bVar1) {
                    puStackY_60 = arg1_01 - puStackY_58;
                    *(puStackY_58 + 2) = puStackY_60;
                    iVar3 = (**(*0x18578 + 0x10))(*0x18578,arg1,puStackY_58);
                    goto code_r0x000150dc;
                }
            }
            iVar3 = -0x7ffffffffffffff2;
        }
    }
code_r0x000150dc:
    (**(*0x18550 + 0x48))(arg2_00);
    if (puVar4 != NULL) {
        (**(*0x18550 + 0x48))(puVar4);
    }
    if (puVar5 != NULL) {
        (**(*0x18550 + 0x48))(puVar5);
    }
    return iVar3;
}


/* fcn.00012aa8 @ 0x12aa8 */

void fcn.00012aa8(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00012a78(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
}


/* fcn.000103f0 @ 0x103f0 */

void fcn.000103f0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    char16_t *arg4;
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    uVar1 = arg1 & 0xff;
    if (uVar1 < 0x14) {
        if (uVar1 == 0x13) {
            arg4 = L"PRTC Reset";
            goto code_r0x000104b7;
        }
        if (uVar1 == 8) {
            arg4 = L"Log Started";
            goto code_r0x000104b7;
        }
        if (uVar1 == 9) {
            arg4 = L"Log Ended";
            goto code_r0x000104b7;
        }
        if (uVar1 == 10) {
            arg4 = L"Log Full";
            goto code_r0x000104b7;
        }
        if (uVar1 == 0x10) {
            arg4 = L"Replay Protection Infrastructure Failure";
            goto code_r0x000104b7;
        }
        if (uVar1 == 0x11) {
            arg4 = L"Log Missing";
            goto code_r0x000104b7;
        }
        if (uVar1 == 0x12) {
            arg4 = L"Log Integrity Compromised";
            goto code_r0x000104b7;
        }
    }
    else {
        if (uVar1 == 0x14) {
            arg4 = L"Log in Recovery State";
            goto code_r0x000104b7;
        }
        if (uVar1 == 0x15) {
            arg4 = L"DAM Entered State";
            goto code_r0x000104b7;
        }
        if (uVar1 == 0x16) {
            arg4 = L"Unlocked State Entered";
            goto code_r0x000104b7;
        }
        if (uVar1 == 0x17) {
            arg4 = L"PSR SVN Incremented";
            goto code_r0x000104b7;
        }
        if (uVar1 == 0x20) {
            arg4 = L"Chassis Intrusion Detected";
            goto code_r0x000104b7;
        }
    }
    arg4 = L"Unknown Event";
code_r0x000104b7:
    fcn.00011cec(arg2,0x32,0x140,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00014ae4 @ 0x14ae4 */

void fcn.00014ae4(int64_t arg1)

{
    if (*arg1 != 0) {
        (**(*0x18550 + 0x48))();
    }
    //WARNING: Could not recover jumptable at 0x00014b0e. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x18550 + 0x48))(arg1);
    return;
}


/* fcn.00011614 @ 0x11614 */

ulong * fcn.00011614(void)

{
    ulong *puVar1;
    ulong *puVar2;
    ulong *puVar3;
    ulong *puVar4;
    int64_t iVar5;
    ulong *puVar6;
    ulong uVar7;
    uint64_t uVar8;
    int64_t iStackX_8;
    uint64_t uStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t var_30h;
    uint32_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    
    uStackX_10 = 0;
    iStackX_8 = 0;
    iStackX_18 = 0;
    iStackX_20 = 0;
    puVar4 = fcn.00012aa8(0x30);
    if (puVar4 != NULL) {
        *puVar4 = 0x45525350;
        puVar1 = puVar4 + 1;
        *puVar1 = puVar1;
        iVar5 = *0x18550;
        puVar4[2] = puVar1;
        iVar5 = (**(iVar5 + 0x138))(2,0x15a30,0,&uStackX_10,&iStackX_8);
        if ((-1 < iVar5) && (uVar8 = 0, uStackX_10 != 0)) {
            do {
                iVar5 = (**(*0x18550 + 0x98))(*(iStackX_8 + uVar8 * 8),0x15a30,&iStackX_18);
                if ((-1 < iVar5) &&
                   ((*(*(iStackX_18 + 8) + 4) != '\0' &&
                    (iVar5 = (**(*0x18550 + 0x98))(*(iStackX_8 + uVar8 * 8),0x15240,&iStackX_20), -1 < iVar5)))) {
                    puVar6 = fcn.00012aa8(0x30);
                    if (puVar6 == NULL) {
                        return puVar4;
                    }
                    *puVar6 = 0x45525350;
                    puVar6[3] = *(iStackX_8 + uVar8 * 8);
                    uVar7 = fcn.00012cd8(*(iStackX_8 + uVar8 * 8));
                    puVar6[4] = uVar7;
                    uVar7 = fcn.000114a4(iStackX_20);
                    puVar6[5] = uVar7;
                    puVar2 = puVar6 + 1;
                    *puVar2 = puVar1;
                    puVar3 = puVar4[2];
                    puVar6[2] = puVar3;
                    *puVar3 = puVar2;
                    puVar4[2] = puVar2;
                }
                uVar8 = uVar8 + 1;
            } while (uVar8 < uStackX_10);
        }
    }
    return puVar4;
}


/* fcn.00010864 @ 0x10864 */

void fcn.00010864(void)

{
    int16_t iVar1;
    int16_t *arg2;
    int16_t *noname_0;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    int64_t iVar6;
    
    iVar6 = 0;
    if ((*0x18540 != 0) && (piVar2 = *0x18540 + 8, *piVar2 != piVar2)) {
        piVar5 = *piVar2;
        iVar3 = iVar6;
        iVar4 = iVar6;
        if (piVar5 != piVar2) {
            do {
                iVar3 = fcn.00012ba4(piVar5[3]);
                arg2 = piVar5[4];
                iVar1 = *arg2;
                noname_0 = arg2;
                iVar4 = iVar6;
                while (iVar1 != 0) {
                    noname_0 = noname_0 + 1;
                    iVar4 = iVar4 + 1;
                    iVar1 = *noname_0;
                }
                iVar4 = fcn.00012ad4(noname_0,iVar4 * 2 + 2,arg2);
                piVar5 = *piVar5;
            } while (piVar5 != *0x18540 + 8);
        }
        (**(*0x18550 + 0x48))(iVar3);
        (**(*0x18550 + 0x48))(iVar4);
    }
    return;
}


/* fcn.000107b4 @ 0x107b4 */

void fcn.000107b4(uint32_t arg1)

{
    int16_t *piVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int16_t iVar3;
    int16_t *piVar4;
    int64_t iVar5;
    
    iVar3 = *CONCAT44(in_register_0000000c,arg1);
    iVar2 = 0;
    if (iVar3 != 0) {
        piVar1 = CONCAT44(in_register_0000000c,arg1);
        do {
            if (iVar3 != 0x20) break;
            piVar1 = piVar1 + 1;
            iVar3 = *piVar1;
        } while (iVar3 != 0);
        piVar4 = CONCAT44(in_register_0000000c,arg1);
        if (CONCAT44(in_register_0000000c,arg1) != piVar1) {
            iVar3 = *piVar1;
            if (iVar3 != 0) {
                do {
                    *piVar4 = iVar3;
                    piVar4 = piVar4 + 1;
                    iVar3 = *((piVar1 - CONCAT44(in_register_0000000c,arg1)) + piVar4);
                } while (iVar3 != 0);
            }
            *piVar4 = 0;
        }
        piVar1 = CONCAT44(in_register_0000000c,arg1);
        iVar3 = *CONCAT44(in_register_0000000c,arg1);
        iVar5 = iVar2;
        while (iVar3 != 0) {
            piVar1 = piVar1 + 1;
            iVar5 = iVar5 + 1;
            iVar3 = *piVar1;
        }
        for (piVar1 = CONCAT44(in_register_0000000c,arg1) + (iVar5 + -1) * 2;
            (CONCAT44(in_register_0000000c,arg1) <= piVar1 && (*piVar1 == 0x20)); piVar1 = piVar1 + -1) {
        }
        piVar4 = CONCAT44(in_register_0000000c,arg1);
        iVar3 = *CONCAT44(in_register_0000000c,arg1);
        while (iVar3 != 0) {
            piVar4 = piVar4 + 1;
            iVar2 = iVar2 + 1;
            iVar3 = *piVar4;
        }
        if (piVar1 != CONCAT44(in_register_0000000c,arg1) + (iVar2 + -1) * 2) {
            piVar1[1] = 0;
        }
    }
    return;
}


/* fcn.00010918 @ 0x10918 */

void fcn.00010918(int64_t arg1)

{
    int64_t arg1_00;
    int64_t iVar1;
    uint uVar2;
    char16_t *arg3;
    uchar auStackX_10 [8];
    int64_t iStackX_18;
    
    arg1_00 = *0x18588;
    iVar1 = (**(*0x18550 + 0x140))(0x15230,0,&iStackX_18);
    uVar2 = 0;
    if (-1 < iVar1) {
        if (arg1 == 0) {
            arg3 = L"Export File Success.";
        }
        else if (arg1 == -0x7ffffffffffffffd) {
            uVar2 = 2;
            arg3 = L"Export File Fail.";
        }
        else if (arg1 == -0x7ffffffffffffff2) {
            uVar2 = 1;
            arg3 = L"Cannot Find The USB";
        }
        else {
            arg3 = L"To Be Defined";
        }
        fcn.000147d4(arg1_00,0x2b,arg3);
        (**(iStackX_18 + 8))(iStackX_18,uVar2,0,arg1_00,0x2b,auStackX_10);
    }
    return;
}


/* fcn.00011b94 @ 0x11b94 */

ulong fcn.00011b94(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    int16_t *piVar3;
    int64_t iVar4;
    uint64_t arg2_00;
    
    iVar4 = arg2;
    piVar3 = arg1;
    iVar1 = fcn.00011b60(arg1,arg2);
    arg2_00 = iVar4 - iVar1;
    if ((((arg1 == 0) || (arg3 == NULL)) || (1000000 < arg2)) || (arg2 == 0)) {
        return 0x8000000000000002;
    }
    if (arg2_00 == 0) {
        return 0x8000000000000004;
    }
    uVar2 = fcn.00011b60(arg3,arg2_00);
    if (arg2_00 <= uVar2) {
        return 0x8000000000000005;
    }
    if (arg3 <= piVar3) {
        if (piVar3 < arg3 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < piVar3) goto code_r0x00011c35;
    }
    if (arg3 < piVar3 + arg2) {
        return 0x800000000000000f;
    }
code_r0x00011c35:
    piVar3 = piVar3 + iVar1;
    for (; *arg3 != 0; arg3 = arg3 + 2) {
        *piVar3 = *arg3;
        piVar3 = piVar3 + 1;
    }
    *piVar3 = 0;
    return 0;
}


/* fcn.00012cd8 @ 0x12cd8 */

ulong fcn.00012cd8(ulong param_1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x18550 + 0x98))(param_1,0x15210,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.000114a4 @ 0x114a4 */

int64_t fcn.000114a4(int64_t arg1)

{
    int64_t iVar1;
    int16_t *piVar2;
    int64_t iVar3;
    int16_t *piVar4;
    uint64_t uVar5;
    int64_t var_10h;
    int16_t *piStackX_10;
    int16_t var_30h;
    int64_t var_28h;
    int32_t var_bp_20h;
    int64_t var_bp_18h;
    int8_t var_ah;
    int8_t var_9h;
    
    iVar3 = 0;
    var_28h = str.UEFI._0_8_;
    var_bp_20h = str.UEFI._8_4_;
    var_30h = 0;
    if (arg1 != 0) {
        iVar1 = (**(arg1 + 0x30))(str.UEFI._0_8_,&var_bp_18h);
        if (-1 < iVar1) {
            iVar1 = (**(arg1 + 0x50))(arg1,0x409,var_ah,&var_10h);
            piVar4 = &var_30h;
            if (-1 < iVar1) {
                piVar4 = var_10h;
            }
            var_10h = piVar4;
            iVar1 = (**(arg1 + 0x50))(arg1,0x409,var_9h,&piStackX_10);
            piVar4 = &var_30h;
            if (-1 < iVar1) {
                piVar4 = piStackX_10;
            }
            if ((var_10h != &var_30h) || (piVar4 != &var_30h)) {
                iVar1 = iVar3;
                for (piVar2 = var_10h; *piVar2 != 0; piVar2 = piVar2 + 1) {
                    iVar1 = iVar1 + 1;
                }
                for (piVar2 = piVar4; *piVar2 != 0; piVar2 = piVar2 + 1) {
                    iVar3 = iVar3 + 1;
                }
                uVar5 = (iVar3 + iVar1) * 2 + 0x18;
                piStackX_10 = piVar4;
                iVar3 = fcn.00012aa8(uVar5);
                uVar5 = uVar5 >> 1;
                fcn.00011b94(iVar3,uVar5,&var_28h);
                fcn.00011b94(iVar3,uVar5,var_10h);
                fcn.00011b94(iVar3,uVar5,0x16070);
                fcn.00011b94(iVar3,uVar5,piStackX_10);
                fcn.00011b94(iVar3,uVar5,0x16070);
                if (var_10h != &var_30h) {
                    (**(*0x18550 + 0x48))();
                }
                if (piStackX_10 != &var_30h) {
                    (**(*0x18550 + 0x48))();
                }
                return iVar3;
            }
        }
    }
    return 0;
}


/* fcn.00011b60 @ 0x11b60 */

uint64_t fcn.00011b60(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if (((CONCAT44(in_register_0000000c,arg1) != 0) && (arg2 != 0)) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
        do {
            if (arg2 - 1U <= uVar1) {
                return arg2;
            }
            uVar1 = uVar1 + 1;
        } while (*(CONCAT44(in_register_0000000c,arg1) + uVar1 * 2) != 0);
        return uVar1;
    }
    return 0;
}


/* fcn.00011c64 @ 0x11c64 */

uint64_t fcn.00011c64(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != '\0')) {
        while (uVar1 < 1000000) {
            uVar1 = uVar1 + 1;
            if (*(uVar1 + CONCAT44(in_register_0000000c,arg1)) == '\0') {
                return uVar1;
            }
        }
        uVar1 = 0xf4241;
    }
    return uVar1;
}


/* fcn.00012a54 @ 0x12a54 */

void fcn.00012a54(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00011cec(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00011cb8 @ 0x11cb8 */

uchar * fcn.00011cb8(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_register_0000000c;
    uchar *puVar1;
    int64_t iVar2;
    int64_t in_stack_00000028;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = 0;
    if (0 < arg3) {
        do {
            if (arg2 <= puVar1) {
                return puVar1;
            }
            *puVar1 = arg4;
            if (in_stack_00000028 != 1) {
                puVar1[1] = arg4 >> 8;
            }
            puVar1 = puVar1 + in_stack_00000028;
            iVar2 = iVar2 + 1;
        } while (iVar2 < arg3);
    }
    return puVar1;
}


/* fcn.00012d0c @ 0x12d0c */

ulong fcn.00012d0c(uint32_t *arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t arg2_00;
    int64_t iVar2;
    ulong uVar3;
    int64_t in_stack_00000028;
    int8_t in_stack_00000030;
    
    uVar3 = 0;
    iVar2 = fcn.00011cec(0,0,0x2140,arg2,in_stack_00000028,in_stack_00000030);
    iVar1 = *(arg1 + 2);
    if (*(arg1 + 4) < (iVar1 + iVar2) * 2 + 2U) {
        arg2_00 = (iVar1 + 2 + iVar2 * 2) * 2;
        *(arg1 + 4) = arg2_00;
        uVar3 = fcn.00012b14(uVar3,iVar1 * 2,arg2_00,*arg1);
        *arg1 = uVar3;
    }
    fcn.00011cec(*(arg1 + 2) * 2 + *arg1,*(arg1 + 4) + *(arg1 + 2) * -2 >> 1,0x140,arg2,in_stack_00000028,
                 in_stack_00000030);
    *(arg1 + 2) = *(arg1 + 2) + iVar2;
    return *arg1;
}


/* fcn.00011c88 @ 0x11c88 */

void fcn.00011c88(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00011cec(arg1,arg2 >> 1,0x140,arg3,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00013b84 @ 0x13b84 */

void fcn.00013b84(int64_t arg1,int64_t arg2)

{
    fcn.00012d0c(arg1,0x17200,*arg2,*(arg2 + 1));
    return;
}


/* fcn.00011b24 @ 0x11b24 */

int64_t fcn.00011b24(int64_t arg1,ulong noname_1,uint32_t arg2)

{
    char *pcVar1;
    uint in_R8;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_R8,arg2);
    pcVar1 = "x-UEFI";
    if (uVar2 == 0) {
        return 0;
    }
    for (; (((*arg1 != '\0' && (*pcVar1 != '\0')) && (*arg1 == *pcVar1)) && (1 < uVar2)); uVar2 = uVar2 - 1) {
        arg1 = arg1 + 1;
        pcVar1 = pcVar1 + 1;
    }
    return *arg1 - *pcVar1;
}


/* fcn.000102e0 @ 0x102e0 */

int64_t fcn.000102e0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    char cVar2;
    char *pcVar3;
    char *pcVar4;
    
    do {
        pcVar3 = arg1;
        pcVar4 = arg2;
        if (arg3 == 0) break;
        arg3 = arg3 + -1;
        pcVar4 = arg2 + 1;
        pcVar3 = arg1 + 1;
        cVar2 = *arg2;
        cVar1 = *arg1;
        arg1 = pcVar3;
        arg2 = pcVar4;
    } while (cVar1 == cVar2);
    return pcVar3[-1] - pcVar4[-1];
}


/* fcn.00014c28 @ 0x14c28 */

ulong fcn.00014c28(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h,int64_t arg_68h)

{
    char *pcVar1;
    bool bVar2;
    bool bVar3;
    int64_t *piVar4;
    uint32_t uVar5;
    int64_t iVar6;
    char *arg2_00;
    char *pcVar7;
    int iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    int64_t iStackX_8;
    ushort auStackX_10 [4];
    ulong *in_stack_00000028;
    int64_t *in_stack_00000030;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_58h;
    
    piVar4 = in_stack_00000030;
    auStackX_10[0] = arg2;
    uVar10 = 4;
    iStackX_8 = arg1;
    if (in_stack_00000030 != arg3) {
        section..text(in_stack_00000030,arg3,4);
    }
    iVar9 = 4;
    pcVar7 = piVar4 + 4;
    if (&iStackX_8 != arg3) {
        section..text(&iStackX_8,arg3,4);
    }
    arg2_00 = arg3 + 4;
    bVar2 = false;
    bVar3 = false;
    uVar5 = iStackX_8;
    do {
        if ((uVar5 & 0xffffff) <= uVar10) {
            return 0x800000000000000e;
        }
        if (((arg2_00[1] & 0x7fU) != 0) && (pcVar7 != arg2_00)) {
            section..text(pcVar7,arg2_00,arg2_00[1] & 0x7f);
            uVar5 = iStackX_8;
        }
        pcVar7 = pcVar7 + (arg2_00[1] & 0x7f);
        iVar9 = iVar9 + (arg2_00[1] & 0x7f);
        if (*arg2_00 == '\x0e') {
            if ((*(arg2_00 + 2) == *0x15aa0) && (*(arg2_00 + 10) == *0x15aa8)) {
                bVar2 = true;
            }
            else {
                bVar2 = false;
            }
        }
        else if ((*arg2_00 == '\x01') || (*arg2_00 == ']')) {
            if (arg2_00 + 2 != auStackX_10) {
                iVar6 = fcn.000102e0(arg2_00 + 2,auStackX_10,2);
                uVar5 = iStackX_8;
                if (iVar6 != 0) {
                    bVar3 = false;
                    goto code_r0x00014d34;
                }
            }
            bVar3 = true;
        }
code_r0x00014d34:
        if (((bVar2) && (bVar3)) && (pcVar1 = *arg4, ((arg2_00[1] ^ pcVar1[1]) & 0x7fU) == 0)) {
            if (((pcVar1[1] & 0x7fU) == 0) || (arg2_00 == pcVar1)) {
                iVar6 = 0;
            }
            else {
                iVar6 = fcn.000102e0(arg2_00,pcVar1,pcVar1[1] & 0x7f);
                uVar5 = iStackX_8;
            }
            if (iVar6 == 0) {
                if (in_stack_00000028 == NULL) goto code_r0x00014dfd;
                pcVar1 = *in_stack_00000028;
                break;
            }
        }
        uVar10 = uVar10 + (arg2_00[1] & 0x7f);
        arg2_00 = arg2_00 + (arg2_00[1] & 0x7f);
    } while( true );
    while( true ) {
        if (((pcVar1[1] & 0x7fU) == 0) || (arg2_00 == pcVar1)) {
            iVar6 = 0;
        }
        else {
            iVar6 = fcn.000102e0(arg2_00,pcVar1,pcVar1[1] & 0x7f);
            uVar5 = iStackX_8;
        }
        if (iVar6 == 0) break;
        do {
            uVar10 = uVar10 + (arg2_00[1] & 0x7f);
            arg2_00 = arg2_00 + (arg2_00[1] & 0x7f);
            if ((uVar5 & 0xffffff) <= uVar10) goto code_r0x00014def;
        } while (((arg2_00[1] ^ pcVar1[1]) & 0x7fU) != 0);
    }
code_r0x00014def:
    if ((uVar5 & 0xffffff) <= uVar10) {
        return 0x800000000000000e;
    }
code_r0x00014dfd:
    uVar11 = *(*arg4 + 1) & 0x7f;
    pcVar1 = *arg4 + uVar11;
    iVar6 = *(arg4 + 0x10) - uVar11;
    if ((iVar6 != 0) && (pcVar7 != pcVar1)) {
        section..text(pcVar7,pcVar1,iVar6);
        uVar5 = iStackX_8;
    }
    iVar6 = *(arg4 + 0x10) - uVar11;
    pcVar7 = pcVar7 + iVar6;
    iVar8 = iVar9 + iVar6;
    if (in_stack_00000028 != NULL) {
        if (((arg2_00[1] & 0x7fU) != 0) && (pcVar7 != arg2_00)) {
            section..text(pcVar7,arg2_00,arg2_00[1] & 0x7f);
            uVar5 = iStackX_8;
        }
        pcVar7 = pcVar7 + (arg2_00[1] & 0x7f);
        iVar8 = iVar8 + (arg2_00[1] & 0x7f);
    }
    iVar6 = uVar10 + (arg2_00[1] & 0x7f);
    iVar9 = (uVar5 & 0xffffff) - iVar6;
    if ((iVar9 != 0) && (pcVar7 != iVar6 + arg3)) {
        section..text(pcVar7,iVar6 + arg3,iVar9);
        uVar5 = iStackX_8;
    }
    iStackX_8 = CONCAT44(iStackX_8._4_4_,uVar5 ^ (iVar8 + ((uVar5 & 0xffffff) - iVar6) ^ uVar5) & 0xffffff);
    if (in_stack_00000030 != &iStackX_8) {
        section..text(in_stack_00000030,&iStackX_8,4);
    }
    return 0;
}


