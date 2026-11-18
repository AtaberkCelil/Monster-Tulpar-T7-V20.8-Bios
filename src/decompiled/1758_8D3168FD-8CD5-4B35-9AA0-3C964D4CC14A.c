// decompiled by r2ghidra: 1758_8D3168FD-8CD5-4B35-9AA0-3C964D4CC14A.pe32
// functions: 883

/* entry0 @ 0x19a60 */

int64_t entry0(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t in_RDX;
    int64_t iStackX_8;
    
    fcn.0001cd88(arg1,in_RDX);
    fcn.0001ca64(0,in_RDX);
    fcn.0001ba7c(0x43860,0,0x78);
    *0x43870 = 0x1aed4;
    *0x43878 = 0x1acdc;
    *0x43888 = 0x1b;
    *0x43880 = 0x1ade4;
    *0x438b8 = 0x1afc4;
    *0x438c0 = 0x1af5c;
    *0x438c8 = 0x365d8;
    *0x438a0 = 0x1afc4;
    *0x438a8 = 0x1af90;
    *0x438b0 = 0x365e0;
    *0x438d0 = 8;
    *0x438d4 = 0x20046;
    *0x43860 = arg1;
    *0x43890 = arg1;
    *0x43898 = arg1;
    iVar1 = (**(*0x4af30 + 0x148))(0x43860,0x42648,0x43870,0x42718,0x438b8,0x42708,0x438a0,0x427a8,0x438d0,0);
    if (((-1 < iVar1) && (iVar2 = fcn.0001a364(*0x43860), -1 < iVar2)) && (iStackX_8 != 0)) {
        *(iStackX_8 + 0x58) = 0x1afec;
    }
    return iVar1;
}


/* fcn.0001cd88 @ 0x1cd88 */

ulong fcn.0001cd88(int64_t arg1,int64_t arg2)

{
    fcn.0001155c(arg1,arg2);
    fcn.00011520(arg1,arg2);
    return 0;
}


/* fcn.0001155c @ 0x1155c */

ulong fcn.0001155c(int64_t arg1,int64_t arg2)

{
    *0x4af28 = arg1;
    if (((*0x36e74 & 1) != 0) && (arg1 == 0)) {
        fcn.00010374(0x387b0,0x2d,0x38788);
    }
    *0x4af20 = arg2;
    if (((*0x36e74 & 1) != 0) && (arg2 == 0)) {
        fcn.00010374(0x387b0,0x33,0x38818);
    }
    *0x4af30 = *(arg2 + 0x60);
    if (((*0x36e74 & 1) != 0) && (*0x4af30 == 0)) {
        fcn.00010374(0x387b0,0x39,0x38830);
    }
    return 0;
}


/* fcn.00011520 @ 0x11520 */

ulong fcn.00011520(ulong noname_0,int64_t arg1)

{
    *0x4af18 = *(arg1 + 0x58);
    if (((*0x36e74 & 1) != 0) && (*0x4af18 == 0)) {
        fcn.00010374(0x38720,0x29,0x38700);
    }
    return 0;
}


/* fcn.00010374 @ 0x10374 */

void fcn.00010374(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint8_t uVar2;
    int64_t iVar3;
    uchar *puVar4;
    uchar auStack_108 [264];
    
    fcn.000104e0(auStack_108,0x100,0x37e90,*0x42630);
    iVar3 = fcn.00011c08(auStack_108);
    puVar4 = auStack_108;
    while (iVar3 != 0) {
        iVar3 = iVar3 + -1;
        do {
            uVar2 = in(0x3fd);
        } while ((uVar2 & 0x20) == 0);
        out(0x3f8,*puVar4);
        puVar4 = puVar4 + 1;
    }
    if ((*0x36e74 & 0x10) != 0) {
        pcVar1 = swi(3);
        (*pcVar1)();
        return;
    }
    if ((*0x36e74 & 0x20) != 0) {
        do {
        } while( true );
    }
    return;
}


/* fcn.0001ca64 @ 0x1ca64 */

ulong fcn.0001ca64(ulong noname_0,int64_t arg1)

{
    uchar auVar1 [16];
    int64_t iStackX_8;
    int64_t aiStackX_10 [3];
    
    fcn.0001cae0(aiStackX_10,arg1);
    (**(*0x4af30 + 0xf8))(3000);
    fcn.0001cae0(&iStackX_8,arg1);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = iStackX_8 - aiStackX_10[0];
    *0x438e0 = (iStackX_8 - aiStackX_10[0]) / 3000;
    return SUB168(ZEXT816(0xaec33e1f671529a5) * auVar1,0);
}


/* fcn.0001cae0 @ 0x1cae0 */

void fcn.0001cae0(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    
    uVar1 = rdtsc();
    *arg1 = uVar1;
    *(arg1 + 4) = uVar1 >> 0x20;
    return;
}


/* fcn.0001ba7c @ 0x1ba7c */

ulong fcn.0001ba7c(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uchar *puVar1;
    uint in_register_0000000c;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    for (; arg3 != 0; arg3 = arg3 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return CONCAT44(in_register_0000000c,arg1);
}


/* fcn.0001a364 @ 0x1a364 */

void fcn.0001a364(int64_t arg1)

{
    (**(*0x4af30 + 0x118))();
    return;
}


/* fcn.000102c4 @ 0x102c4 */

uint64_t fcn.000102c4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint8_t *puVar4;
    uint8_t auStackY_108 [64];
    int64_t in_stack_ffffffffffffff38;
    int8_t in_stack_ffffffffffffff40;
    
    if (((*0x36e74 & 1) != 0) && (arg2 == 0)) {
        fcn.00010374(0x37e40,0x6f,0x37e20);
    }
    uVar3 = *0x36e64;
    if ((arg1 & uVar3) != 0) {
        fcn.000105bc(auStackY_108,0x100,0,arg2,in_stack_ffffffffffffff38,in_stack_ffffffffffffff40);
        uVar2 = fcn.00011c08(auStackY_108);
        puVar4 = auStackY_108;
        uVar3 = uVar2;
        while (uVar2 != 0) {
            uVar2 = uVar2 - 1;
            do {
                uVar1 = in(0x3fd);
            } while ((uVar1 & 0x20) == 0);
            uVar3 = *puVar4;
            out(0x3f8,*puVar4);
            puVar4 = puVar4 + 1;
        }
    }
    return uVar3;
}


/* fcn.000105bc @ 0x105bc */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.000105bc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

{
    uint16_t uVar1;
    char cVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    char *pcVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    uint8_t *puVar12;
    char cVar13;
    char *pcVar14;
    uint32_t uVar15;
    uint64_t *puVar16;
    uint64_t uVar17;
    uint64_t *puVar18;
    uint32_t uVar19;
    uint64_t uVar20;
    bool bVar21;
    int64_t var_10h;
    uint64_t uStackX_18;
    uint8_t *puStackX_20;
    uint64_t *in_stack_00000028;
    char cStack0000000000000030;
    int8_t var_68h;
    int64_t var_70h;
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
    int8_t var_70h_2;
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
    int64_t var_18h;
    
    puStack_b0 = NULL;
    if (arg2 == 0) {
        if ((arg3 & 0x2000U) != 0) goto code_r0x0001063a;
code_r0x00010665:
        if ((arg3 & 0x40U) == 0) {
            uVar4 = *0x36e60;
            if (*0x36e60 != 0) {
                if (((*0x36e74 & 1) != 0) && (uVar4 < arg2)) {
                    fcn.00010374(0x38240,0x252,0x382b0);
                    uVar4 = *0x36e60;
                }
                if (uVar4 < arg2) goto code_r0x0001062b;
            }
            uVar19 = 1;
            uVar15 = *0x36e5c;
        }
        else {
            uVar4 = *0x36e5c;
            uVar15 = *0x36e5c;
            if (*0x36e5c != 0) {
                if (((*0x36e74 & 1) != 0) && (uVar4 < arg2)) {
                    fcn.00010374(0x38240,0x24d,0x38320);
                    uVar4 = *0x36e5c;
                }
                uVar15 = uVar4;
                if (uVar4 < arg2) goto code_r0x0001062b;
            }
            uVar4 = *0x36e60;
            uVar19 = 2;
        }
        if ((arg3 >> 8 & 1) == 0) {
            if (uVar4 != 0) {
                if (((*0x36e74 & 1) != 0) && (uVar20 = fcn.000123bc(arg4,uVar4 + 1), (uVar4 & 0xffffffff) < uVar20)) {
                    fcn.00010374(0x38240,0x263,0x38400);
                    uVar4 = *0x36e60;
                }
                uVar20 = fcn.000123bc(arg4,uVar4 + 1);
                if ((uVar4 & 0xffffffff) < uVar20) goto code_r0x0001062b;
            }
            var_78h = 1;
            uStack_98 = 0xff;
        }
        else {
            if (uVar15 != 0) {
                if ((*0x36e74 & 1) != 0) {
                    uVar4 = fcn.00011e70(arg4,uVar15 + 1);
                    uVar15 = *0x36e5c;
                    if (*0x36e5c < uVar4) {
                        fcn.00010374(0x38240,0x25d,0x38370);
                        uVar15 = *0x36e5c;
                    }
                }
                uVar4 = fcn.00011e70(arg4,uVar15 + 1);
                if (*0x36e5c < uVar4) goto code_r0x0001062b;
            }
            var_78h = 2;
            uStack_98 = 0xffff;
        }
        if ((arg3 & 0x2000U) == 0) {
            if (arg2 == 0) goto code_r0x0001062b;
        }
        else {
            arg1 = arg1 & -(arg2 != 0);
        }
        _var_70h_2 = NULL;
        uStack_d0 = 0;
        pcStack_d8 = NULL;
        if (arg1 != NULL) {
            _var_70h_2 = arg1;
            pcStack_d8 = arg1 + (arg2 + -1) * uVar19;
        }
        if (var_78h == 1) {
            iVar3 = 0;
        }
        else {
            iVar3 = *(arg4 + 1) << 8;
        }
        uVar20 = *arg4;
        uVar4 = iVar3;
        while( true ) {
            uStack_a8 = (uVar20 | uVar4) & uStack_98;
            if ((uStack_a8 == 0) || ((arg1 != NULL && (pcStack_d8 <= arg1)))) break;
            uStack_a0 = 0;
            uVar4 = 0;
            iStack_90 = 0;
            uVar17 = arg3 & 0x2140;
            cVar13 = '\0';
            cVar2 = '\0';
            uVar20 = 1;
            uStack_b8 = 1;
            bVar21 = false;
            _cStack0000000000000030 = _cStack0000000000000030 & 0xffffffffffffff00;
            uStack_c0 = 0;
            uStackX_18 = uVar17;
            if (uStack_a8 == 10) {
                puVar12 = arg4 + var_78h;
                pcVar6 = 0x38514;
                if (var_78h == 1) {
                    iVar3 = 0;
                }
                else {
                    iVar3 = puVar12[1] << 8;
                }
                uStack_a8 = (iVar3 | *puVar12) & uStack_98;
                if (uStack_a8 != 0xd) {
                    puVar12 = arg4;
                }
            }
            else if (uStack_a8 == 0xd) {
code_r0x00010b0f:
                puVar12 = arg4 + var_78h;
                if (var_78h == 1) {
                    iVar3 = 0;
                }
                else {
                    iVar3 = puVar12[1] << 8;
                }
                uStack_a8 = (iVar3 | *puVar12) & uStack_98;
                if (uStack_a8 == 10) {
                    pcVar6 = 0x38514;
                }
                else {
                    pcVar6 = 0x38518;
                    puVar12 = arg4;
                }
            }
            else {
                puStackX_20 = arg4;
                if (uStack_a8 == 0x25) {
                    puVar16 = in_stack_00000028;
                    puVar18 = puStack_b0;
code_r0x000108cf:
                    while( true ) {
                        puStackX_20 = arg4 + var_78h;
                        if (var_78h == 1) {
                            iVar3 = 0;
                        }
                        else {
                            iVar3 = puStackX_20[1] << 8;
                        }
                        uStack_a8 = (*puStackX_20 | iVar3) & uStack_98;
                        if (uStack_a8 < 0x2e) break;
                        if (uStack_a8 == 0x2e) {
                            uVar17 = uVar17 | 0x800;
                            goto code_r0x00010a69;
                        }
                        if (uStack_a8 == 0x30) {
                            if ((uVar17 & 0x800) == 0) {
                                uVar17 = uVar17 | 0x20;
                                uStackX_18 = uVar17;
                            }
                        }
                        else {
                            if (uStack_a8 < 0x31) goto code_r0x00010a80;
                            if (0x39 < uStack_a8) {
                                if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                    uVar17 = uVar17 | 0x10;
                                    goto code_r0x00010a69;
                                }
                                goto code_r0x00010a80;
                            }
                        }
                        uVar4 = 0;
                        uStack_c0 = 0;
                        if (0x2f < uStack_a8) {
                            do {
                                if (0x39 < uStack_a8) break;
                                puStackX_20 = puStackX_20 + var_78h;
                                uVar4 = uStack_a8 + (uVar4 * 5 + -0x18) * 2;
                                if (var_78h == 1) {
                                    iVar3 = 0;
                                }
                                else {
                                    iVar3 = puStackX_20[1] << 8;
                                }
                                uStack_a8 = (*puStackX_20 | iVar3) & uStack_98;
                            } while (0x2f < uStack_a8);
                            uStack_c0 = uVar4;
                        }
                        arg4 = puStackX_20 + -var_78h;
                        uVar4 = uStack_c0;
                        if ((uVar17 & 0x800) == 0) {
                            uVar17 = uVar17 | 0x200;
                            uStack_a0 = uStack_c0;
                            uStackX_18 = uVar17;
                        }
                        else {
                            uVar20 = uStack_c0;
                            uStack_b8 = uStack_c0;
                        }
                    }
                    if (uStack_a8 == 0x2d) {
                        uVar17 = uVar17 | 1;
code_r0x00010a69:
                        arg4 = puStackX_20;
                        uStackX_18 = uVar17;
                        goto code_r0x000108cf;
                    }
                    if (uStack_a8 != 0) {
                        if (uStack_a8 == 0x20) {
                            uVar17 = uVar17 | 4;
                        }
                        else {
                            if (uStack_a8 == 0x2a) {
                                if ((uVar17 & 0x800) == 0) {
                                    uVar17 = uVar17 | 0x200;
                                    if (puVar18 == NULL) {
                                        uStack_a0 = *puVar16;
                                        puVar16 = puVar16 + 1;
                                        in_stack_00000028 = puVar16;
                                    }
                                    else {
                                        uStack_a0 = *puVar18;
                                        puVar18 = puVar18 + 1;
                                        puStack_b0 = puVar18;
                                    }
                                    arg4 = puStackX_20;
                                    uStackX_18 = uVar17;
                                }
                                else {
                                    if (puVar18 == NULL) {
                                        uStack_b8 = *puVar16;
                                        puVar16 = puVar16 + 1;
                                        in_stack_00000028 = puVar16;
                                    }
                                    else {
                                        uStack_b8 = *puVar18;
                                        puVar18 = puVar18 + 1;
                                        puStack_b0 = puVar18;
                                    }
                                    arg4 = puStackX_20;
                                    uVar20 = uStack_b8;
                                }
                                goto code_r0x000108cf;
                            }
                            if (uStack_a8 == 0x2b) {
                                uVar17 = uVar17 | 2;
                            }
                            else {
                                if (uStack_a8 != 0x2c) goto code_r0x00010a80;
                                uVar17 = uVar17 | 8;
                            }
                        }
                        goto code_r0x00010a69;
                    }
                    uVar20 = 0;
                    uStack_b8 = 0;
                    puStackX_20 = arg4;
code_r0x00010a80:
                    puVar12 = puStackX_20;
                    if (uStack_a8 < 0x68) {
                        if (uStack_a8 == 0x67) {
                            if (puVar18 == NULL) {
                                uVar8 = *puVar16;
                                in_stack_00000028 = puVar16 + 1;
                            }
                            else {
                                uVar8 = *puVar18;
                                puStack_b0 = puVar18 + 1;
                            }
                            if (uVar8 == 0) {
                                cStack0000000000000030 = '\0';
                                pcVar6 = "<null guid>";
                                cVar13 = cStack0000000000000030;
                            }
                            else {
                                fcn.00011db8(uVar8);
                                fcn.00011d80(uVar8 + 4);
                                fcn.00011d80(uVar8 + 6);
                                fcn.00011488(&var_68h_2,0x26,0,0x384a8);
                                pcVar6 = &var_68h_2;
                                uVar4 = uStack_c0;
                                uVar20 = uStack_b8;
                                cVar13 = cStack0000000000000030;
                            }
                        }
                        else {
                            if (uStack_a8 != 10) {
                                arg4 = puStackX_20;
                                if (uStack_a8 == 0xd) goto code_r0x00010b0f;
                                if (uStack_a8 == 0x53) goto code_r0x00010d32;
                                if (uStack_a8 == 0x58) goto code_r0x00010e1e;
                                if (uStack_a8 == 0x61) goto code_r0x00010d3b;
                                if (uStack_a8 == 99) {
                                    if (puVar18 == NULL) {
                                        uVar1 = *puVar16;
                                        in_stack_00000028 = puVar16 + 1;
                                    }
                                    else {
                                        uVar1 = *puVar18;
                                        puStack_b0 = puVar18 + 1;
                                    }
                                    var_80h = uVar1;
                                    pcVar6 = &var_80h;
                                    goto code_r0x000108b4;
                                }
                                if (uStack_a8 != 100) goto code_r0x000108b0;
                                goto code_r0x00010e35;
                            }
                            puVar12 = puStackX_20 + var_78h;
                            pcVar6 = 0x38514;
                            if (var_78h == 1) {
                                iVar3 = 0;
                            }
                            else {
                                iVar3 = puVar12[1] << 8;
                            }
                            uStack_a8 = (iVar3 | *puVar12) & uStack_98;
                            if (uStack_a8 != 0xd) {
                                puVar12 = puStackX_20;
                            }
                        }
                        goto code_r0x00011010;
                    }
                    if (uStack_a8 != 0x70) {
                        if (uStack_a8 == 0x72) {
                            if (puVar18 == NULL) {
                                uVar8 = *puVar16;
                                in_stack_00000028 = puVar16 + 1;
                            }
                            else {
                                uVar8 = *puVar18;
                                puStack_b0 = puVar18 + 1;
                            }
                            pcVar6 = &var_68h_2;
                            if (uVar8 < 0) {
                                if ((uVar8 & 0x7fffffffffffffff) - 1 < 0x21) {
                                    pcVar6 = *(uVar8 * 8 + 0x38548);
                                    goto code_r0x00010de8;
                                }
                            }
                            else if (uVar8 < 6) {
                                pcVar6 = *(uVar8 * 8 + 0x38520);
code_r0x00010de8:
                                if (pcVar6 != &var_68h_2) goto code_r0x00011010;
                            }
                            fcn.00011488(&var_68h_2,0x26,0,0x3850c);
                        }
                        else {
                            if (uStack_a8 == 0x73) {
code_r0x00010d32:
                                uVar17 = uVar17 | 0x400;
                                uStackX_18 = uVar17;
code_r0x00010d3b:
                                if (puVar18 == NULL) {
                                    pcVar6 = *puVar16;
                                    in_stack_00000028 = puVar16 + 1;
                                }
                                else {
                                    pcVar6 = *puVar18;
                                    puStack_b0 = puVar18 + 1;
                                }
                                if (pcVar6 == NULL) {
                                    uVar17 = uVar17 & 0xfffffffffffffbff;
                                    pcVar6 = "<null string>";
                                    uStackX_18 = uVar17;
                                }
                                uVar20 = uVar20 & -((uVar17 & 0x800) != 0);
                                goto code_r0x00011010;
                            }
                            if (uStack_a8 != 0x74) {
                                if (uStack_a8 != 0x75) {
                                    if (uStack_a8 != 0x78) goto code_r0x000108b0;
                                    goto code_r0x00010e22;
                                }
                                goto code_r0x00010e27;
                            }
                            if (puVar18 == NULL) {
                                in_stack_00000028 = puVar16 + 1;
                                uVar8 = *puVar16;
                            }
                            else {
                                uVar8 = *puVar18;
                                puStack_b0 = puVar18 + 1;
                            }
                            if (uVar8 == 0) {
                                pcVar6 = "<null time>";
                                goto code_r0x00011010;
                            }
                            fcn.00011488(&var_68h_2,0x26,0,0x384f0);
                            pcVar6 = &var_68h_2;
                        }
                        uVar4 = uStack_c0;
                        goto code_r0x00011010;
                    }
                    uVar17 = uVar17 & 0xffffffffffffffd9 | 0x10;
code_r0x00010e1e:
                    uVar17 = uVar17 | 0x20;
code_r0x00010e22:
                    uVar17 = uVar17 | 0x80;
code_r0x00010e27:
                    if (-1 < uVar17) {
                        uVar17 = uVar17 & 0xfffffffffffffffd | 0x4000;
                    }
code_r0x00010e35:
                    if ((uVar17 & 0x10) == 0) {
                        if (puVar18 != NULL) {
                            uVar4 = *puVar18;
                            goto code_r0x00010e77;
                        }
                        uVar4 = *puVar16;
                        in_stack_00000028 = puVar16 + 1;
                    }
                    else if (puVar18 == NULL) {
                        uVar4 = *puVar16;
                        in_stack_00000028 = puVar16 + 1;
                    }
                    else {
                        uVar4 = *puVar18;
code_r0x00010e77:
                        puStack_b0 = puVar18 + 1;
                    }
                    cVar2 = (uVar17 & 4) << 3;
                    if ((uVar17 & 2) != 0) {
                        cVar2 = '+';
                    }
                    bVar21 = (uVar17 & 8) != 0;
                    if (uVar17 < '\0') {
                        iVar11 = 0x10;
                        bVar21 = false;
                        if (((uVar17 & 0x10) == 0) && (uVar4 < 0)) {
code_r0x00010eff:
                            uVar4 = uVar4 & 0xffffffff;
                        }
                    }
                    else {
                        iVar11 = 10;
                        if ((uVar17 & 8) != 0) {
                            uVar17 = uVar17 & 0xffffffffffffffdf;
                            uVar20 = 1;
                        }
                        if ((uVar4 < 0) && (uVar17 >> 0xe == 0)) {
                            cVar2 = '-';
                            uVar4 = -uVar4;
                        }
                        else if ((uVar17 & 0x4010) == 0x4000) goto code_r0x00010eff;
                    }
                    iVar11 = fcn.0001053c(&var_68h_2,uVar4,iVar11);
                    uStack_c0 = iVar11 - &var_68h_2;
                    if (uVar4 == 0) {
                        uStack_c0 = uStack_c0 & -(uVar20 != 0);
                    }
                    pcVar6 = &var_68h_2 + uStack_c0;
                    iStack_90 = 3 - uStack_c0 % 3;
                    if (uStack_c0 % 3 == 0) {
                        iStack_90 = 0;
                    }
                    if ((bVar21) && (uStack_c0 != 0)) {
                        uStack_c0 = uStack_c0 + (uStack_c0 - 1) / 3;
                    }
                    if (cVar2 != '\0') {
                        uStack_c0 = uStack_c0 + 1;
                        uVar20 = uVar20 + 1;
                    }
                    uVar17 = uVar17 | 0x1000;
                    uVar4 = uStack_c0;
                    cVar13 = '\x01';
                    uStackX_18 = uVar17;
                    if ((uVar17 & 0xa21) == 0x220) {
                        uVar20 = uStack_a0;
                    }
                }
                else {
code_r0x000108b0:
                    pcVar6 = &uStack_a8;
code_r0x000108b4:
                    uVar17 = uVar17 | 0x400;
                    uStackX_18 = uVar17;
                    puVar12 = puStackX_20;
                }
            }
code_r0x00011010:
            puStackX_20 = puVar12;
            uVar15 = uVar17;
            iVar11 = ((uVar17 & 0x400) != 0) + 1;
            _cStack0000000000000030 = (-((uVar17 & 0x400) != 0) & 0xff00) + 0xff;
            if ((uVar17 >> 0xc & 1) == 0) {
                uVar4 = 0;
                pcVar14 = pcVar6 + 1;
                while ((((pcVar14[-1] != '\0' || (((uVar17 & 0x400) != 0 && (*pcVar14 != '\0')))) &&
                        ((uVar4 < uVar20 || ((uVar17 >> 0xb & 1) == 0)))) &&
                       ((_cStack0000000000000030 & (*pcVar14 << 8 | pcVar14[-1])) != 0))) {
                    uVar4 = uVar4 + 1;
                    pcVar14 = pcVar14 + iVar11;
                }
                uStack_c0 = uVar4;
            }
            else {
                iVar11 = -iVar11;
            }
            if (uVar20 < uVar4) {
                uVar20 = uVar4;
            }
            uVar8 = uVar15 & 0x201;
            var_40h = uVar8;
            pcVar14 = pcStack_d8;
            if (uVar8 == 0x200) {
                uStack_d0 = uStack_d0 + (uStack_a0 - uVar20) * uVar19;
                if (((uVar17 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                    arg1 = fcn.00010508(arg1,pcStack_d8,uStack_a0 - uVar20,0x20);
                }
            }
            if (cVar13 == '\0') {
                uVar9 = uVar19;
                uStack_d0 = uStack_d0 + (uVar20 - uVar4) * uVar9;
                if (((uVar17 & 0x2000) == 0) && (arg1 != NULL)) {
                    arg1 = fcn.00010508(arg1,pcVar14,uVar20 - uVar4,(uVar15 & 0x2000) + 0x20);
                }
                if (((cVar2 != '\0') && (uStack_d0 = uStack_d0 + uVar9, (uVar17 & 0x2000) == 0)) && (arg1 != NULL)) {
                    iVar7 = 0;
                    do {
                        if (pcStack_d8 <= arg1) break;
                        *arg1 = cVar2;
                        if (uVar9 != 1) {
                            *(arg1 + 1) = '\0';
                        }
                        arg1 = arg1 + uVar9;
                        iVar7 = iVar7 + 1;
                    } while (iVar7 < 1);
                }
            }
            else {
                if (cVar2 != '\0') {
                    uVar9 = uVar19;
                    uStack_d0 = uStack_d0 + uVar9;
                    if (((uVar17 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                        iVar7 = 0;
                        do {
                            if (pcStack_d8 <= arg1) break;
                            *arg1 = cVar2;
                            if (uVar9 != 1) {
                                *(arg1 + 1) = '\0';
                            }
                            arg1 = arg1 + uVar9;
                            iVar7 = iVar7 + 1;
                        } while (iVar7 < 1);
                    }
                }
                uVar9 = uVar19;
                uStack_d0 = uStack_d0 + (uVar20 - uVar4) * uVar9;
                if (((uVar17 & 0x2000) == 0) && (arg1 != NULL)) {
                    arg1 = fcn.00010508(arg1,pcStack_d8,uVar20 - uVar4,(uVar15 & 0x2000) + 0x30);
                }
            }
            arg3 = uVar17;
            if ((cVar2 != '\0') < uStack_c0) {
                iVar7 = iStack_90;
                uVar4 = cVar2 != '\0';
                do {
                    if ((*pcVar6 == '\0') && ((iVar11 < 2 || (*(pcVar6 + 1) == '\0')))) break;
                    uStack_d0 = uStack_d0 + uVar9;
                    uVar8 = *pcVar6 & _cStack0000000000000030;
                    if (((uVar17 & 0x2000) == 0) && (arg1 != NULL)) {
                        iVar10 = 0;
                        do {
                            if (pcStack_d8 <= arg1) break;
                            *arg1 = uVar8;
                            if (uVar9 != 1) {
                                *(arg1 + 1) = uVar8 >> 8;
                            }
                            arg1 = arg1 + uVar9;
                            iVar10 = iVar10 + 1;
                        } while (iVar10 < 1);
                    }
                    pcVar6 = pcVar6 + iVar11;
                    uVar8 = uVar4 + 1;
                    if ((bVar21) && (iVar7 = iVar7 + 1, iVar7 == 3)) {
                        iVar10 = 0;
                        uVar8 = uVar4 + 2;
                        if (uStack_c0 <= uVar8) break;
                        uStack_d0 = uStack_d0 + uVar9;
                        iVar7 = iVar10;
                        if (((uVar17 & 0x2000) == 0) && (arg1 != NULL)) {
                            iVar5 = 0;
                            do {
                                iVar7 = iVar10;
                                if (pcStack_d8 <= arg1) break;
                                *arg1 = ',';
                                if (uVar9 != 1) {
                                    *(arg1 + 1) = '\0';
                                }
                                arg1 = arg1 + uVar9;
                                iVar5 = iVar5 + 1;
                                iVar7 = 0;
                            } while (iVar5 < 1);
                        }
                    }
                    uVar4 = uVar8;
                } while (uVar8 < uStack_c0);
                arg3 = uStackX_18;
                uVar8 = var_40h;
            }
            if (uVar8 == 0x201) {
                uStack_d0 = uStack_d0 + (uStack_a0 - uVar20) * uVar9;
                if (((uVar17 & 0x2000) == 0) && (arg1 != NULL)) {
                    arg1 = fcn.00010508(arg1,pcStack_d8,uStack_a0 - uVar20,0x20);
                }
            }
            arg4 = puStackX_20 + var_78h;
            if (var_78h == 1) {
                iVar3 = 0;
            }
            else {
                iVar3 = *(arg4 + 1) << 8;
            }
            uVar20 = iVar3;
            uVar4 = *arg4;
        }
        if ((arg3 >> 0xd & 1) == 0) {
            if (((*0x36e74 & 1) != 0) && (arg1 == NULL)) {
                fcn.00010374(0x38240,0x4c1,0x37ea8);
            }
            uStack_d0 = uVar19;
            iVar11 = 0;
            pcVar6 = arg1;
            do {
                if (pcStack_d8 + uStack_d0 <= pcVar6) break;
                *pcVar6 = '\0';
                if (uStack_d0 != 1) {
                    pcVar6[1] = '\0';
                }
                pcVar6 = pcVar6 + uStack_d0;
                iVar11 = iVar11 + 1;
            } while (iVar11 < 1);
            uStack_d0 = (arg1 - _var_70h_2) / uStack_d0;
        }
        else {
            uStack_d0 = uStack_d0 / uVar19;
        }
    }
    else {
        if ((arg3 & 0x2000U) == 0) {
            if ((*0x36e74 & 1) != 0) {
                if (arg1 != 0) goto code_r0x0001063a;
                fcn.00010374(0x38240,0x23c,0x38290);
            }
            if (arg1 != 0) goto code_r0x0001063a;
        }
        else {
code_r0x0001063a:
            if ((*0x36e74 & 1) != 0) {
                if (arg4 != 0) goto code_r0x00010665;
                fcn.00010374(0x38240,0x244,0x382f8);
            }
            if (arg4 != 0) goto code_r0x00010665;
        }
code_r0x0001062b:
        uStack_d0 = 0;
    }
    return uStack_d0;
}


/* fcn.00011c08 @ 0x11c08 */

uint64_t fcn.00011c08(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    
    if (((*0x36e74 & 1) != 0) && (arg1 == 0)) {
        fcn.00010374(0x38928,0x434,0x38910);
    }
    uVar2 = 0;
    if (*arg1 != '\0') {
        uVar1 = *0x36e60;
        do {
            if (((uVar1 != 0) && ((*0x36e74 & 1) != 0)) && (uVar1 <= uVar2)) {
                fcn.00010374(0x38928,0x43c,0x389d0);
                uVar1 = *0x36e60;
            }
            arg1 = arg1 + 1;
            uVar2 = uVar2 + 1;
        } while (*arg1 != '\0');
    }
    return uVar2;
}


/* fcn.000104e0 @ 0x104e0 */

void fcn.000104e0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.000105bc(arg1,arg2,0,arg3,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.0001041c @ 0x1041c */

void fcn.0001041c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    if ((*0x36e74 & 1) != 0) {
        if ((arg1 & 1U) != 0) {
            fcn.00010374(0x37f00,0x47,0x37ed8);
        }
        if (((*0x36e74 & 1) != 0) && ((arg3 & 1U) != 0)) {
            fcn.00010374(0x37f00,0x48,0x37f48);
        }
    }
    fcn.000105bc(arg1,arg2 >> 1,0x140,arg3,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00011e70 @ 0x11e70 */

uint64_t fcn.00011e70(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    
    if (((*0x36e74 & 1) != 0) && ((arg1 & 1U) != 0)) {
        fcn.00010374(0x38b40,0x7a,0x38968);
    }
    uVar1 = 0;
    if ((arg1 == 0) || (arg2 == 0)) {
        uVar1 = 0;
    }
    else if (*arg1 != 0) {
        do {
            if (arg2 - 1U <= uVar1) {
                return arg2;
            }
            uVar1 = uVar1 + 1;
        } while (*(arg1 + uVar1 * 2) != 0);
    }
    return uVar1;
}


/* fcn.000123bc @ 0x123bc */

uint64_t fcn.000123bc(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    if (((CONCAT44(in_register_0000000c,arg1) != 0) && (arg2 != 0)) &&
       (uVar1 = 0, *CONCAT44(in_register_0000000c,arg1) != '\0')) {
        do {
            if (arg2 - 1U <= uVar1) {
                return arg2;
            }
            uVar1 = uVar1 + 1;
        } while (*(uVar1 + CONCAT44(in_register_0000000c,arg1)) != '\0');
        return uVar1;
    }
    return 0;
}


/* fcn.00011db8 @ 0x11db8 */

uint fcn.00011db8(int64_t arg1)

{
    if (((*0x36e74 & 1) != 0) && (arg1 == 0)) {
        fcn.00010374(0x38a90,0x87,0x37ea8);
    }
    return *arg1;
}


/* fcn.00011d80 @ 0x11d80 */

ushort fcn.00011d80(int64_t arg1)

{
    if (((*0x36e74 & 1) != 0) && (arg1 == 0)) {
        fcn.00010374(0x38a90,0x20,0x37ea8);
    }
    return *arg1;
}


/* fcn.00011488 @ 0x11488 */

void fcn.00011488(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.000105bc(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.0001053c @ 0x1053c */

char * fcn.0001053c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    
    *arg1 = 0;
    do {
        if (((*0x36e74 & 1) != 0) && (arg3 == 0)) {
            fcn.00010374(0x38af0,0x29,0x38ad8);
        }
        arg1 = arg1 + 1;
        uVar1 = arg2 / (arg3 & 0xffffffffU);
        *arg1 = "0123456789ABCDEF(Length - 1) <= (0xFFFFFFFFFFFFFFFFULL - (UINTN)Buffer)"[arg2 % (arg3 & 0xffffffffU)];
        arg2 = uVar1;
    } while (uVar1 != 0);
    return arg1;
}


/* fcn.00010508 @ 0x10508 */

uchar * fcn.00010508(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.000117fc @ 0x117fc */

uchar fcn.000117fc(int64_t arg1)

{
    char cVar1;
    
    if (((*0x36e74 & 1) != 0) && (arg1 == 0)) {
        fcn.00010374(0x38860,0x100,0x38848);
    }
    cVar1 = fcn.000117b8(arg1);
    if ((cVar1 != '\0') && (cVar1 = fcn.000116fc(arg1), cVar1 == -1)) {
        return 1;
    }
    return 0;
}


/* fcn.00011734 @ 0x11734 */

ushort fcn.00011734(int64_t arg1)

{
    ushort uVar1;
    
    if (((*0x36e74 & 1) != 0) && (arg1 == 0)) {
        fcn.00010374(0x38860,0xaf,0x38848);
    }
    uVar1 = fcn.00011d80(arg1 + 2);
    return uVar1;
}


/* fcn.000116c4 @ 0x116c4 */

uchar fcn.000116c4(int64_t arg1)

{
    if (((*0x36e74 & 1) != 0) && (arg1 == 0)) {
        fcn.00010374(0x38860,0x80,0x38848);
    }
    return *arg1;
}


/* fcn.000116fc @ 0x116fc */

uchar fcn.000116fc(int64_t arg1)

{
    if (((*0x36e74 & 1) != 0) && (arg1 == 0)) {
        fcn.00010374(0x38860,0x96,0x38848);
    }
    return *(arg1 + 1);
}


/* fcn.00011778 @ 0x11778 */

int64_t fcn.00011778(int64_t arg1)

{
    int64_t iVar1;
    
    if (((*0x36e74 & 1) != 0) && (arg1 == 0)) {
        fcn.00010374(0x38860,199,0x38848);
    }
    iVar1 = fcn.00011734(arg1);
    return iVar1 + arg1;
}


/* fcn.000117b8 @ 0x117b8 */

bool fcn.000117b8(int64_t arg1)

{
    char cVar1;
    
    if (((*0x36e74 & 1) != 0) && (arg1 == 0)) {
        fcn.00010374(0x38860,0xe5,0x38848);
    }
    cVar1 = fcn.000116c4(arg1);
    return cVar1 == '\x7f';
}


/* fcn.000115f8 @ 0x115f8 */

bool fcn.000115f8(int64_t arg1)

{
    char cVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    bool bVar6;
    
    uVar4 = 0;
    if (arg1 == 0) {
code_r0x000116a4:
        bVar6 = false;
    }
    else {
        uVar5 = uVar4;
        while( true ) {
            cVar1 = fcn.000117fc(arg1);
            if (cVar1 != '\0') break;
            uVar2 = fcn.00011734(arg1);
            if ((((uVar2 < 4) || (~uVar5 < uVar2)) || (uVar5 = uVar5 + uVar2, 0xfffffffffffffffb < uVar5)) ||
               ((*0x36e7c != 0 && (uVar4 = uVar4 + 1, *0x36e7c <= uVar4)))) goto code_r0x000116a4;
            cVar1 = fcn.000116c4(arg1);
            if (cVar1 == '\x04') {
                cVar1 = fcn.000116fc(arg1);
                if ((cVar1 == '\x04') && (*(uVar2 + arg1 + -2) != 0)) goto code_r0x000116a4;
            }
            arg1 = fcn.00011778(arg1);
        }
        iVar3 = fcn.00011734(arg1);
        bVar6 = iVar3 == 4;
    }
    return bVar6;
}


/* fcn.0001194c @ 0x1194c */

int64_t fcn.0001194c(int64_t arg1)

{
    char cVar1;
    int64_t arg1_00;
    int64_t iVar2;
    
    iVar2 = 0;
    if (arg1 != 0) {
        cVar1 = fcn.000115f8(arg1);
        if (cVar1 != '\0') {
            arg1_00 = arg1;
            while( true ) {
                cVar1 = fcn.000117fc(arg1_00);
                if (cVar1 != '\0') break;
                arg1_00 = fcn.00011778(arg1_00);
            }
            iVar2 = fcn.00011734(arg1_00);
            iVar2 = iVar2 + (arg1_00 - arg1);
        }
    }
    return iVar2;
}


/* fcn.00012440 @ 0x12440 */

void fcn.00012440(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    if ((*0x36e74 & 1) != 0) {
        if (arg2 == 0) {
            fcn.00010374(0x38d50,0x233,0x37ea8);
        }
        if (((*0x36e74 & 1) != 0) && (-arg2 < arg1)) {
            fcn.00010374(0x38d50,0x234,0x38df0);
        }
    }
    arg1_00 = fcn.000123e8();
    if (arg1_00 != 0) {
        fcn.000134cc(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.000123e8 @ 0x123e8 */

ulong fcn.000123e8(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x4af30 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000134cc @ 0x134cc */

int64_t fcn.000134cc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    if (arg3 != 0) {
        if ((*0x36e74 & 1) != 0) {
            if (~arg1 < arg3 - 1U) {
                fcn.00010374(0x39210,0x32,0x391c0);
            }
            if (((*0x36e74 & 1) != 0) && (~arg2 < arg3 - 1U)) {
                fcn.00010374(0x39210,0x33,0x39260);
            }
        }
        if (arg1 != arg2) {
            iVar1 = fcn.00013740(arg1,arg2,arg3);
            return iVar1;
        }
    }
    return arg1;
}


/* fcn.00011900 @ 0x11900 */

//WARNING: Removing unreachable block (ram,0x0001353a)

ulong fcn.00011900(int64_t arg1)

{
    ulong uVar1;
    
    if (((*0x36e74 & 1) != 0) && (arg1 == 0)) {
        fcn.00010374(0x38860,0x153,0x38848);
    }
    if (((*0x36e74 & 1) != 0) && (~arg1 < 3)) {
        fcn.00010374(0x39210,0x32,0x391c0);
    }
    if (arg1 == 0x38908) {
        uVar1 = 0x38908;
    }
    else {
        uVar1 = fcn.00013740(arg1,0x38908,4);
    }
    return uVar1;
}


/* fcn.000119ac @ 0x119ac */

int64_t fcn.000119ac(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t arg1_00;
    
    iVar3 = 0;
    if (arg1 == 0) {
        arg1 = 0x38908;
        if (arg2 != 0) {
            arg1 = arg2;
        }
    }
    else if (arg2 != 0) {
        cVar1 = fcn.000115f8(arg1);
        if (cVar1 == '\0') {
            return 0;
        }
        cVar1 = fcn.000115f8(arg2);
        if (cVar1 == '\0') {
            return 0;
        }
        iVar4 = fcn.0001194c(arg1);
        iVar2 = fcn.0001194c(arg2);
        arg1_00 = fcn.000123e8();
        iVar3 = 0;
        if (arg1_00 != 0) {
            iVar3 = fcn.000134cc(arg1_00,arg1,iVar4);
            fcn.000134cc(iVar4 + -4 + iVar3,arg2,iVar2);
        }
        return iVar3;
    }
    iVar4 = arg1;
    iVar2 = fcn.0001194c(arg1);
    if (iVar2 != 0) {
        iVar3 = fcn.00012440(iVar4,iVar2,arg1);
    }
    return iVar3;
}


/* fcn.000124cc @ 0x124cc */

void fcn.000124cc(void)

{
    int64_t arg3;
    int64_t in_R9;
    
    arg3 = (**(*0x4af30 + 0x48))();
    if (((*0x36e74 & 1) != 0) && (arg3 < 0)) {
        if (((*0x36e74 & 2) != 0) && (*0x36e80 < 0)) {
            fcn.000102a0(0x80000000,0x38db0,arg3,in_R9);
        }
        fcn.00010374(0x38d50,0x32d,0x38dd8);
    }
    return;
}


/* fcn.000102a0 @ 0x102a0 */

void fcn.000102a0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    //[00] -r-x section size 156096 named .text
    iStackX_18 = arg3;
    iStackX_20 = arg4;
    fcn.000102c4(arg1,arg2,&iStackX_18);
    return;
}


/* fcn.000135c0 @ 0x135c0 */

int64_t fcn.000135c0(int64_t arg1,int64_t arg2)

{
    if (arg2 != 0) {
        if ((*0x36e74 & 1) != 0) {
            if (arg1 == 0) {
                fcn.00010374(0x392e0,0x2f,0x37ea8);
            }
            if (((*0x36e74 & 1) != 0) && (-arg1 < arg2)) {
                fcn.00010374(0x392e0,0x30,0x392a0);
            }
        }
        arg1 = fcn.000114ac(arg1,arg2);
    }
    return arg1;
}


/* fcn.00012530 @ 0x12530 */

int64_t fcn.00012530(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    
    uVar2 = 0;
    if (arg1 == 0) {
        iVar4 = 0;
    }
    else {
        iVar4 = 1;
        uVar3 = uVar2;
        do {
            while ((((iVar1 = *(arg1 + uVar2 * 2), iVar1 != -0x10 && (iVar1 != -0xf)) && (iVar1 != 0)) &&
                   ((uVar3 = uVar3 + iVar4, arg2 == '\0' || (uVar3 <= arg3))))) {
                uVar2 = uVar2 + 1;
            }
            if (*(arg1 + uVar2 * 2) == 0) break;
            if ((arg2 != '\0') && (arg3 < uVar3)) {
                *arg4 = uVar2;
                break;
            }
            iVar4 = (*(arg1 + uVar2 * 2) != -0x10) + 1;
            uVar2 = uVar2 + 1;
        } while (*(arg1 + uVar2 * 2) != 0);
        iVar4 = uVar3 * 2;
    }
    return iVar4;
}


/* fcn.00012418 @ 0x12418 */

void fcn.00012418(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000123e8(arg1,arg1);
    if (arg1_00 != 0) {
        fcn.000135c0(arg1_00,arg1);
    }
    return;
}


/* fcn.00013644 @ 0x13644 */

int64_t fcn.00013644(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ushort *puVar1;
    uint64_t uVar2;
    
    if (arg2 != 0) {
        if ((*0x36e74 & 1) != 0) {
            if (arg1 == 0) {
                fcn.00010374(0x39330,0x34,0x37ea8);
            }
            if ((*0x36e74 & 1) != 0) {
                if (~arg1 < arg2 - 1U) {
                    fcn.00010374(0x39330,0x35,0x38670);
                }
                if ((*0x36e74 & 1) != 0) {
                    if ((arg1 & 1U) != 0) {
                        fcn.00010374(0x39330,0x36,0x386a8);
                    }
                    if (((*0x36e74 & 1) != 0) && ((arg2 & 1U) != 0)) {
                        fcn.00010374(0x39330,0x37,0x386d8);
                    }
                }
            }
        }
        uVar2 = arg2 >> 1;
        if (uVar2 != 0) {
            puVar1 = arg1 + -2 + uVar2 * 2;
            do {
                *puVar1 = arg3;
                puVar1 = puVar1 + -1;
                uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
        }
    }
    return arg1;
}


/* fcn.00011ee0 @ 0x11ee0 */

ulong fcn.00011ee0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    uint64_t uVar2;
    int64_t arg2_00;
    
    if ((*0x36e74 & 1) != 0) {
        if ((arg1 & 1U) != 0) {
            fcn.00010374(0x38b40,0x13a,0x38b88);
        }
        if (((*0x36e74 & 1) != 0) && ((arg3 & 1U) != 0)) {
            fcn.00010374(0x38b40,0x13b,0x38bb0);
        }
    }
    if ((*0x36e74 & 1) == 0) {
code_r0x00011f86:
        if (arg1 == 0) {
            return 0x8000000000000002;
        }
    }
    else if (arg1 == 0) {
        fcn.00010374(0x38b40,0x140,0x38bd8);
        goto code_r0x00011f86;
    }
    if ((*0x36e74 & 1) == 0) {
code_r0x00011fbe:
        if (arg3 == 0) {
            return 0x8000000000000002;
        }
    }
    else if (arg3 == 0) {
        fcn.00010374(0x38b40,0x141,0x38bf8);
        goto code_r0x00011fbe;
    }
    uVar2 = *0x36e5c;
    if (*0x36e5c != 0) {
        if (((*0x36e74 & 1) != 0) && (uVar2 < arg2)) {
            fcn.00010374(0x38b40,0x147,0x38c20);
            uVar2 = *0x36e5c;
        }
        if (uVar2 < arg2) {
            return 0x8000000000000002;
        }
        if (((*0x36e74 & 1) != 0) && (uVar2 < arg4)) {
            fcn.00010374(0x38b40,0x148,0x38ce8);
            uVar2 = *0x36e5c;
        }
        if (uVar2 < arg4) {
            return 0x8000000000000002;
        }
    }
    if ((*0x36e74 & 1) == 0) {
code_r0x00012051:
        if (arg2 == 0) {
            return 0x8000000000000002;
        }
    }
    else if (arg2 == 0) {
        fcn.00010374(0x38b40,0x14e,0x38c60);
        goto code_r0x00012051;
    }
    arg2_00 = arg4;
    if (arg2 < arg4) {
        arg2_00 = arg2;
    }
    uVar2 = fcn.00011e70(arg3,arg2_00);
    if (arg2 <= arg4) {
        if ((*0x36e74 & 1) != 0) {
            if (uVar2 < arg2) goto code_r0x000120aa;
            fcn.00010374(0x38b40,0x155,0x38c70);
        }
        if (arg2 <= uVar2) {
            return 0x8000000000000005;
        }
    }
code_r0x000120aa:
    if (arg4 < uVar2) {
        uVar2 = arg4;
    }
    if ((*0x36e74 & 1) == 0) {
code_r0x000120ee:
        if (arg3 <= arg1) goto code_r0x000120f3;
    }
    else {
        if (arg1 < arg3) {
code_r0x000120d1:
            if (arg3 < arg1 + arg2 * 2) {
code_r0x000120da:
                fcn.00010374(0x38b40,0x15e,0x38c90);
            }
            goto code_r0x000120ee;
        }
        if (arg1 < arg3 + 2 + uVar2 * 2) goto code_r0x000120da;
        if (arg1 <= arg3) goto code_r0x000120d1;
code_r0x000120f3:
        if (arg1 < arg3 + 2 + uVar2 * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x0001211a;
    }
    if (arg3 < arg1 + arg2 * 2) {
        return 0x800000000000000f;
    }
code_r0x0001211a:
    if (uVar2 != 0) {
        arg3 = arg3 - arg1;
        do {
            iVar1 = *(arg3 + arg1);
            if (iVar1 == 0) break;
            *arg1 = iVar1;
            arg1 = arg1 + 2;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    *arg1 = 0;
    return 0;
}


/* fcn.00012160 @ 0x12160 */

//WARNING: Removing unreachable block (ram,0x000121c4)

ulong fcn.00012160(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    int16_t *piVar3;
    int16_t iVar4;
    int16_t *piVar5;
    uint64_t arg2_00;
    
    piVar5 = 0x38ed0;
    if (((*0x36e74 & 1) != 0) && ((arg1 & 1U) != 0)) {
        fcn.00010374(0x38b40,0x199,0x38b88);
    }
    iVar1 = fcn.00011e70(arg1,arg2);
    arg2_00 = arg2 - iVar1;
    if ((*0x36e74 & 1) == 0) {
code_r0x00012219:
        if (arg1 == 0) {
            return 0x8000000000000002;
        }
    }
    else if (arg1 == 0) {
        fcn.00010374(0x38b40,0x1a5,0x38bd8);
        goto code_r0x00012219;
    }
    uVar2 = *0x36e5c;
    if (*0x36e5c != 0) {
        if (((*0x36e74 & 1) != 0) && (uVar2 < arg2)) {
            fcn.00010374(0x38b40,0x1ac,0x38c20);
            uVar2 = *0x36e5c;
        }
        if (uVar2 < arg2) {
            return 0x8000000000000002;
        }
    }
    if ((*0x36e74 & 1) == 0) {
code_r0x0001228c:
        if (arg2 == 0) {
            return 0x8000000000000002;
        }
    }
    else if (arg2 == 0) {
        fcn.00010374(0x38b40,0x1b2,0x38c60);
        goto code_r0x0001228c;
    }
    if ((*0x36e74 & 1) == 0) {
code_r0x000122af:
        if (arg2_00 == 0) {
            return 0x8000000000000004;
        }
    }
    else if (arg2_00 == 0) {
        fcn.00010374(0x38b40,0x1b7,0x38d28);
        goto code_r0x000122af;
    }
    uVar2 = fcn.00011e70(0x38ed0,arg2_00);
    if ((*0x36e74 & 1) == 0) {
code_r0x000122fe:
        if (arg2_00 <= uVar2) {
            return 0x8000000000000005;
        }
    }
    else if (arg2_00 <= uVar2) {
        fcn.00010374(0x38b40,0x1bd,0x38d38);
        goto code_r0x000122fe;
    }
    if ((*0x36e74 & 1) == 0) {
code_r0x0001234e:
        if (0x38ecf < arg1) goto code_r0x00012353;
    }
    else {
        if (arg1 < 0x38ed0) {
code_r0x0001232d:
            if (0x38ed0 < arg1 + arg2 * 2) {
code_r0x00012336:
                fcn.00010374(0x38b40,0x1c2,0x38c90);
            }
            goto code_r0x0001234e;
        }
        if (arg1 < uVar2 * 2 + 0x38ed2) goto code_r0x00012336;
        if (arg1 < 0x38ed1) goto code_r0x0001232d;
code_r0x00012353:
        if (arg1 < uVar2 * 2 + 0x38ed2) {
            return 0x800000000000000f;
        }
        if (0x38ed0 < arg1) goto code_r0x0001237a;
    }
    if (0x38ed0 < arg1 + arg2 * 2) {
        return 0x800000000000000f;
    }
code_r0x0001237a:
    piVar3 = arg1 + iVar1 * 2;
    iVar4 = 0x2e;
    do {
        *piVar3 = iVar4;
        piVar5 = piVar5 + 1;
        iVar4 = *piVar5;
        piVar3 = piVar3 + 1;
    } while (iVar4 != 0);
    *piVar3 = 0;
    return 0;
}


/* fcn.00013578 @ 0x13578 */

int64_t fcn.00013578(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = fcn.00011df0(arg2);
    fcn.00011e28(arg1,iVar1);
    iVar1 = fcn.00011df0(arg2 + 8);
    fcn.00011e28(arg1 + 8,iVar1);
    return arg1;
}


/* fcn.00011df0 @ 0x11df0 */

ulong fcn.00011df0(int64_t arg1)

{
    if (((*0x36e74 & 1) != 0) && (arg1 == 0)) {
        fcn.00010374(0x38a90,0xba,0x37ea8);
    }
    return *arg1;
}


/* fcn.00011e28 @ 0x11e28 */

int64_t fcn.00011e28(int64_t arg1,int64_t arg2)

{
    if (((*0x36e74 & 1) != 0) && (arg1 == 0)) {
        fcn.00010374(0x38a90,0xd5,0x37ea8);
    }
    *arg1 = arg2;
    return arg2;
}


/* fcn.00012c48 @ 0x12c48 */

int64_t fcn.00012c48(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    uchar auStackX_20 [8];
    int64_t aiStack_28 [2];
    
    if ((*0x4af38 == 0) && ((iVar1 = (**(*0x4af30 + 0x140))(0x42828,0,0x4af38), iVar1 < 0 || (*0x4af38 == 0)))) {
        return 0;
    }
    aiStack_28[0] = 0;
    if (arg3 == 0) {
        iVar1 = (**(*0x4af38 + 8))(*0x4af38,aiStack_28,auStackX_20,1,arg1,arg2);
        if (-1 < iVar1) {
            iVar1 = fcn.00012418(2);
            return iVar1;
        }
        if (iVar1 != -0x7ffffffffffffffb) {
            return 0;
        }
        iVar1 = fcn.00012418(aiStack_28[0]);
        if (iVar1 == 0) {
            return 0;
        }
    }
    else {
        iVar1 = arg3;
    }
    iVar2 = (**(*0x4af38 + 8))(*0x4af38,aiStack_28,iVar1,arg3 == 0,arg1,arg2);
    if (iVar2 < 0) {
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00011b48 @ 0x11b48 */

uint64_t fcn.00011b48(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    
    uVar2 = 0;
    if ((*0x36e74 & 1) != 0) {
        if (arg1 == 0) {
            fcn.00010374(0x38928,0xa6,0x38910);
        }
        if (((*0x36e74 & 1) != 0) && ((arg1 & 1U) != 0)) {
            fcn.00010374(0x38928,0xa7,0x38968);
        }
    }
    if (*arg1 != 0) {
        uVar1 = *0x36e5c;
        do {
            if (((uVar1 != 0) && ((*0x36e74 & 1) != 0)) && (uVar1 <= uVar2)) {
                fcn.00010374(0x38928,0xaf,0x38990);
                uVar1 = *0x36e5c;
            }
            arg1 = arg1 + 2;
            uVar2 = uVar2 + 1;
        } while (*arg1 != 0);
    }
    return uVar2;
}


/* fcn.000104c0 @ 0x104c0 */

void fcn.000104c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iStackX_20;
    
    iStackX_20 = arg4;
    fcn.0001041c(arg1,arg2,arg3,&iStackX_20);
    return;
}


/* fcn.00012b8c @ 0x12b8c */

ulong fcn.00012b8c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uStackX_20;
    uchar auStack_18 [16];
    
    if ((*0x36e74 & 1) != 0) {
        if (arg1 == 0) {
            fcn.00010374(0x38ee0,0x234,0x38f68);
        }
        if (((*0x36e74 & 1) != 0) && (arg2 == 0)) {
            fcn.00010374(0x38ee0,0x235,0x38f88);
        }
    }
    iVar1 = (**(*0x4af40 + 0x18))(*0x4af40,arg1,arg2,arg3,&uStackX_20,auStack_18);
    if (iVar1 < 0) {
        uStackX_20 = 0;
    }
    return uStackX_20;
}


/* fcn.00013290 @ 0x13290 */

int64_t fcn.00013290(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uchar auStackX_10 [8];
    int64_t aiStackX_18 [2];
    
    if (((*0x36e74 & 1) != 0) && (arg1 == 0)) {
        fcn.00010374(0x39110,0x29,0x38f48);
    }
    aiStackX_18[0] = 0;
    iVar1 = (**(*0x4af50 + 0x18))(*0x4af50,arg1,auStackX_10,aiStackX_18);
    if ((iVar1 == -0x7ffffffffffffffb) && (iVar1 = fcn.00012418(aiStackX_18[0]), iVar1 != 0)) {
        iVar2 = (**(*0x4af50 + 0x18))(*0x4af50,arg1,iVar1,aiStackX_18);
        if (-1 < iVar2) {
            return iVar1;
        }
        fcn.000124cc(iVar1);
    }
    return 0;
}


/* fcn.00011c94 @ 0x11c94 */

int64_t fcn.00011c94(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    if (arg3 == 0) {
        iVar1 = 0;
    }
    else {
        if ((*0x36e74 & 1) != 0) {
            iVar1 = fcn.00011c08(arg1);
            if (iVar1 == -1) {
                fcn.00010374(0x38928,0x522,0x38a08);
            }
            if ((*0x36e74 & 1) != 0) {
                iVar1 = fcn.00011c08(arg2);
                if (iVar1 == -1) {
                    fcn.00010374(0x38928,0x523,0x38a28);
                }
            }
        }
        if (((*0x36e60 != 0) && ((*0x36e74 & 1) != 0)) && (*0x36e60 < arg3)) {
            fcn.00010374(0x38928,0x526,0x38a48);
        }
        for (; ((*arg1 != '\0' && (*arg2 != '\0')) && ((*arg1 == *arg2 && (1 < arg3)))); arg3 = arg3 - 1) {
            arg1 = arg1 + 1;
            arg2 = arg2 + 1;
        }
        iVar1 = *arg1 - *arg2;
    }
    return iVar1;
}


/* fcn.000138f4 @ 0x138f4 */

int64_t fcn.000138f4(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int64_t iVar2;
    int64_t aiStackX_18 [2];
    
    if (((*0x36e74 & 1) != 0) && (arg1 == 0)) {
        aiStackX_18[0] = arg2;
        fcn.00010374(0x39380,0x573,0x393c0);
    }
    iVar2 = *0x4af18;
    aiStackX_18[0] = 0;
    *arg1 = 0;
    iVar2 = (**(iVar2 + 0x48))(L"PlatformLang",0x427b8,0,aiStackX_18,0);
    if (iVar2 == -0x7ffffffffffffffb) {
        iVar2 = fcn.000123e8();
        uVar1 = *0x36e74 & 1;
        *arg1 = iVar2;
        if ((uVar1 != 0) && (iVar2 == 0)) {
            fcn.00010374(0x39380,0x587,0x39408);
        }
        if (*arg1 == 0) {
            iVar2 = -0x7ffffffffffffff7;
        }
        else {
            iVar2 = (**(*0x4af18 + 0x48))(L"PlatformLang",0x427b8,0,aiStackX_18,*arg1);
            if (iVar2 < 0) {
                fcn.000124cc(*arg1);
                *arg1 = 0;
            }
        }
    }
    return iVar2;
}


/* fcn.00013a00 @ 0x13a00 */

ulong fcn.00013a00(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t arg3_00;
    char *arg1_00;
    char *arg1_01;
    char **ppcVar5;
    char *pcStackX_18;
    char *pcStackX_20;
    
    pcStackX_18 = arg3;
    pcStackX_20 = arg4;
    if (((*0x36e74 & 1) != 0) && (arg1 == 0)) {
        fcn.00010374(0x39380,0x643,0x39420);
    }
    if (pcStackX_18 != NULL) {
        ppcVar5 = &pcStackX_18;
        arg1_00 = pcStackX_18;
        do {
            arg3_00 = 3;
            uVar2 = fcn.00011c08(arg1_00);
            if (uVar2 < 4) {
                uVar2 = fcn.00011c08(arg1_00);
            }
            else {
                uVar2 = 3;
            }
            if (arg2 == 0) {
                cVar1 = *arg1_00;
                uVar2 = 0;
                if (cVar1 != '\0') {
                    do {
                        if (cVar1 == ';') break;
                        uVar2 = uVar2 + 1;
                        cVar1 = arg1_00[uVar2];
                    } while (cVar1 != '\0');
                    goto code_r0x00013b07;
                }
            }
            else {
code_r0x00013b07:
                if (uVar2 != 0) {
                    cVar1 = *arg1;
                    arg1_01 = arg1;
                    while (cVar1 != '\0') {
                        if (arg2 == 0) {
                            for (; (*arg1_01 != '\0' && (*arg1_01 == ';')); arg1_01 = arg1_01 + 1) {
                            }
                            arg3_00 = 0;
                            cVar1 = *arg1_01;
                            while ((cVar1 != '\0' && (cVar1 != ';'))) {
                                arg3_00 = arg3_00 + 1;
                                cVar1 = arg1_01[arg3_00];
                            }
                            if (uVar2 <= arg3_00) goto code_r0x00013ad5;
                        }
                        else {
code_r0x00013ad5:
                            iVar3 = fcn.00011c94(arg1_01,arg1_00,uVar2);
                            if (iVar3 == 0) {
                                iVar3 = fcn.00012418(arg3_00 + 1);
                                if (iVar3 == 0) {
                                    return 0;
                                }
                                uVar4 = fcn.000134cc(iVar3,arg1_01,arg3_00);
                                return uVar4;
                            }
                        }
                        arg1_01 = arg1_01 + arg3_00;
                        cVar1 = *arg1_01;
                    }
                    if ((arg2 != 0) || (uVar2 = uVar2 - 1, uVar2 == 0)) goto code_r0x00013b0c;
                    do {
                        if (arg1_00[uVar2] == '-') break;
                        uVar2 = uVar2 - 1;
                    } while (uVar2 != 0);
                    goto code_r0x00013b07;
                }
            }
code_r0x00013b0c:
            ppcVar5 = ppcVar5 + 1;
            arg1_00 = *ppcVar5;
        } while (arg1_00 != NULL);
    }
    return 0;
}


/* fcn.00013740 @ 0x13740 */

ulong fcn.00013740(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    uchar uVar1;
    uint uVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint in_register_0000000c;
    uint in_R8;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *puVar7;
    ulong *puVar8;
    uint *puVar9;
    uint *puVar10;
    uchar *puVar11;
    uchar *puVar12;
    
    uVar6 = CONCAT44(in_R8,arg3);
    uVar4 = CONCAT44(in_register_0000000c,arg1) | arg2;
    if (((uVar4 & 7) == 0) && (7 < uVar6)) {
        if (CONCAT44(in_register_0000000c,arg1) < arg2) {
            puVar7 = CONCAT44(in_register_0000000c,arg1);
            uVar4 = uVar6 >> 3;
            iVar5 = uVar6 + uVar4 * -8;
            do {
                uVar3 = *arg2;
                arg2 = arg2 + 8;
                *puVar7 = uVar3;
                puVar7 = puVar7 + 1;
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
            if (iVar5 != 0) {
                arg2 = arg2 - puVar7;
                do {
                    *puVar7 = *(arg2 + puVar7);
                    puVar7 = puVar7 + 1;
                    iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
            }
        }
        else if (arg2 < CONCAT44(in_register_0000000c,arg1)) {
            puVar7 = arg2 + uVar6;
            puVar8 = CONCAT44(in_register_0000000c,arg1) + uVar6;
            uVar4 = arg3 & 7;
            if ((arg3 & 7) != 0) {
                uVar6 = uVar6 - uVar4;
                do {
                    puVar7 = puVar7 + -1;
                    puVar8 = puVar8 + -1;
                    *puVar8 = *puVar7;
                    uVar4 = uVar4 - 1;
                } while (uVar4 != 0);
            }
            if (uVar6 != 0) {
                iVar5 = (uVar6 - 1 >> 3) + 1;
                do {
                    puVar7 = puVar7 + -1;
                    puVar8 = puVar8 + -1;
                    *puVar8 = *puVar7;
                    iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
            }
        }
    }
    else if (((uVar4 & 3) == 0) && (3 < uVar6)) {
        if (CONCAT44(in_register_0000000c,arg1) < arg2) {
            puVar9 = CONCAT44(in_register_0000000c,arg1);
            uVar4 = uVar6 >> 2;
            iVar5 = uVar6 + uVar4 * -4;
            do {
                uVar2 = *arg2;
                arg2 = arg2 + 4;
                *puVar9 = uVar2;
                puVar9 = puVar9 + 1;
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
            if (iVar5 != 0) {
                arg2 = arg2 - puVar9;
                do {
                    *puVar9 = *(arg2 + puVar9);
                    puVar9 = puVar9 + 1;
                    iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
            }
        }
        else if (arg2 < CONCAT44(in_register_0000000c,arg1)) {
            puVar9 = arg2 + uVar6;
            puVar10 = CONCAT44(in_register_0000000c,arg1) + uVar6;
            uVar4 = arg3 & 3;
            if ((arg3 & 3) != 0) {
                uVar6 = uVar6 - uVar4;
                do {
                    puVar9 = puVar9 + -1;
                    puVar10 = puVar10 + -1;
                    *puVar10 = *puVar9;
                    uVar4 = uVar4 - 1;
                } while (uVar4 != 0);
            }
            if (uVar6 != 0) {
                iVar5 = (uVar6 - 1 >> 2) + 1;
                do {
                    puVar9 = puVar9 + -1;
                    puVar10 = puVar10 + -1;
                    *puVar10 = *puVar9;
                    iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
            }
        }
    }
    else if (CONCAT44(in_register_0000000c,arg1) < arg2) {
        puVar11 = CONCAT44(in_register_0000000c,arg1);
        if (uVar6 != 0) {
            do {
                *puVar11 = puVar11[arg2 - CONCAT44(in_register_0000000c,arg1)];
                puVar11 = puVar11 + 1;
                uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
        }
    }
    else if (arg2 < CONCAT44(in_register_0000000c,arg1)) {
        puVar11 = (uVar6 - 1) + CONCAT44(in_register_0000000c,arg1);
        puVar12 = (uVar6 - 1) + arg2;
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            uVar1 = *puVar12;
            puVar12 = puVar12 + -1;
            *puVar11 = uVar1;
            puVar11 = puVar11 + -1;
        }
    }
    return CONCAT44(in_register_0000000c,arg1);
}


/* fcn.000114ac @ 0x114ac */

int64_t fcn.000114ac(int64_t arg1,uint32_t arg2)

{
    uint in_register_00000014;
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    
    uVar1 = CONCAT44(in_register_00000014,arg2);
    puVar2 = arg1;
    if (((arg1 & 7U) == 0) && (7 < uVar1)) {
        uVar3 = uVar1 >> 3;
        uVar1 = uVar1 + uVar3 * -8;
        do {
            *puVar2 = 0;
            puVar2 = puVar2 + 1;
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
    }
    else if (((arg1 & 3U) == 0) && (3 < uVar1)) {
        uVar3 = uVar1 >> 2;
        uVar1 = uVar1 + uVar3 * -4;
        do {
            *puVar2 = 0;
            puVar2 = puVar2 + 4;
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
    }
    return arg1;
}


/* fcn.0001d93c @ 0x1d93c */

//WARNING: Variable defined which should be unmapped: var_40h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_15h

ulong fcn.0001d93c(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int iVar2;
    ulong uVar3;
    uint8_t uVar4;
    int64_t iVar5;
    uint64_t *arg4_00;
    uint32_t uVar6;
    uint in_R8;
    int64_t *arg2_00;
    int64_t iVar7;
    uint16_t uVar8;
    int32_t var_30h;
    int64_t iStackY_60;
    uint32_t uStackY_58;
    int iStackY_54;
    uint8_t uStackY_50;
    int64_t var_40h;
    int64_t var_38h;
    int32_t var_30h_2;
    int32_t var_2ch;
    int8_t var_28h;
    int8_t var_15h;
    int8_t var_13h;
    int8_t var_12h;
    int8_t var_11h;
    int8_t var_bp_10h;
    int8_t var_fh;
    int8_t var_eh;
    int8_t var_dh;
    int8_t var_bh;
    int8_t var_ah;
    
    arg2_00 = CONCAT44(in_R8,arg3);
    uVar4 = arg2;
    if (((arg1 == 0) || (arg2_00 == NULL)) || (arg2_00[1] == 0)) {
        uVar3 = 1;
    }
    else if (uVar4 < 8) {
        arg4_00 = ((arg2 & 0xffU) + 2) * 0x18 + arg1;
        if ((arg4_00[2] & 4) == 0) {
            uVar3 = 8;
        }
        else if (*arg4_00 < *(arg2_00 + 2) + *arg2_00) {
            uVar3 = 6;
        }
        else if ((arg4_00[2] & 1) == 0) {
            if ((arg4_00[2] & 8) == 0) {
                if ((*(arg2_00 + 0x14) != 3) && (*(arg2_00 + 2) != 0)) {
                    fcn.0001ba7c(&iStackY_60,0,0x35);
                    iVar5 = arg2_00[1];
                    iVar7 = *arg2_00;
                    for (uVar6 = *(arg2_00 + 2); uVar6 != 0; uVar6 = uVar6 - uVar8) {
                        iStackY_54 = *(arg2_00 + 0x14);
                        uVar8 = *(arg4_00 + 0xc);
                        if (uVar6 < *(arg4_00 + 0xc)) {
                            uVar8 = uVar6;
                        }
                        uVar1 = iVar7 >> 0x18;
                        if ((arg4_00[2] & 2) == 0) {
                            var_38h._3_1_ = 200;
                            if (iStackY_54 == 2) {
                                var_38h._3_1_ = 0xca;
                            }
                            var_30h_2._0_1_ = uVar1 & 0xf;
                        }
                        else {
                            var_38h._3_1_ = 0x25;
                            if (iStackY_54 == 2) {
                                var_38h._3_1_ = 0x35;
                            }
                            var_30h_2._2_1_ = iVar7 >> 0x20;
                            var_30h_2._3_1_ = iVar7 >> 0x28;
                            var_30h_2._1_1_ = uVar1;
                        }
                        var_30h_2._0_1_ = var_30h_2 | 0x40;
                        arg4 = CONCAT71(arg4 >> 8,1);
                        var_2ch._2_1_ = uVar8 >> 8;
                        var_38h._6_1_ = iVar7 >> 8;
                        var_38h._7_1_ = iVar7 >> 0x10;
                        uStackY_58 = arg4_00[1] * uVar8;
                        var_2ch._1_1_ = uVar8;
                        var_38h._5_1_ = iVar7;
                        iStackY_60 = iVar5;
                        uStackY_50 = uVar4;
                        iVar2 = fcn.0001d764(arg1,&iStackY_60,60000000,arg4);
                        if (iVar2 != 0) {
                            return 2;
                        }
                        iVar7 = iVar7 + uVar8;
                        iVar5 = iVar5 + uStackY_58;
                    }
                }
                uVar3 = 0;
            }
            else {
                uVar3 = fcn.0001ec3c(arg1,arg2_00,CONCAT71(arg2_00 >> 8,uVar4),arg4_00,var_40h);
            }
        }
        else {
            uVar3 = 7;
        }
    }
    else {
        uVar3 = 9;
    }
    return uVar3;
}


/* fcn.0001eb20 @ 0x1eb20 */

ulong fcn.0001eb20(int64_t arg1)

{
    int iVar1;
    
    iVar1 = arg1;
    if (iVar1 < 8) {
        if (iVar1 != 7) {
            if (iVar1 == 0) {
                return 0;
            }
            if (iVar1 == 1) {
                return 0x8000000000000002;
            }
            if (((iVar1 != 2) && (iVar1 != 4)) && (iVar1 == 6)) {
                return 0x8000000000000002;
            }
        }
    }
    else {
        if (iVar1 < 10) {
            return 0x8000000000000002;
        }
        if (iVar1 == 10) {
            return 0x800000000000000d;
        }
        if (iVar1 == 0xb) {
            return 0x8000000000000012;
        }
        if (iVar1 == 0xc) {
            return 0x800000000000000c;
        }
    }
    return 0x8000000000000007;
}


/* fcn.0001b9e4 @ 0x1b9e4 */

ulong fcn.0001b9e4(int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    iVar1 = (**(*0x4af30 + 0x40))(4,arg1,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.00011858 @ 0x11858 */

uint64_t fcn.00011858(int64_t arg1,int64_t arg2)

{
    if ((*0x36e74 & 1) != 0) {
        if (arg1 == 0) {
            fcn.00010374(0x38860,0x138,0x38848);
        }
        if (((*0x36e74 & 1) != 0) && (0xfffb < arg2 - 4U)) {
            fcn.00010374(0x38860,0x139,0x388c0);
        }
    }
    if (((*0x36e74 & 1) != 0) && (arg1 + 2 == NULL)) {
        fcn.00010374(0x38a90,arg1 + 0x3d,0x37ea8);
    }
    *(arg1 + 2) = arg2;
    return arg2 & 0xffff;
}


/* fcn.0001ba1c @ 0x1ba1c */

ulong fcn.0001ba1c(int64_t arg1,int64_t arg2,uint32_t arg3,uint32_t arg4)

{
    uint in_R8;
    int64_t iVar1;
    uint in_R9;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_R9,arg4);
    if ((uVar2 != 0) && (arg1 != 0)) {
        if (CONCAT44(in_R8,arg3) == 0) {
            for (; arg2 != 0; arg2 = arg2 + -1) {
                *arg1 = 0;
                arg1 = arg1 + 1;
            }
        }
        else {
            if (uVar2 <= arg2) {
                if (uVar2 != 0) {
                    iVar1 = CONCAT44(in_R8,arg3) - arg1;
                    do {
                        *arg1 = *(arg1 + iVar1);
                        arg1 = arg1 + 1;
                        uVar2 = uVar2 - 1;
                    } while (uVar2 != 0);
                }
                return 0;
            }
            for (; arg2 != 0; arg2 = arg2 + -1) {
                *arg1 = 0;
                arg1 = arg1 + 1;
            }
        }
    }
    return 0x8000000000000002;
}


/* fcn.0001bc04 @ 0x1bc04 */

void fcn.0001bc04(uint32_t arg1)

{
    char *pcVar1;
    char *pcVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    char *pcVar4;
    char cVar5;
    
    pcVar4 = CONCAT44(in_register_0000000c,arg1);
    cVar5 = *pcVar4;
    pcVar1 = pcVar4;
    while (cVar5 != '\0') {
        pcVar1 = pcVar1 + 1;
        cVar5 = *pcVar1;
    }
    do {
        pcVar2 = pcVar1;
        pcVar1 = pcVar2 + -1;
    } while (*pcVar1 == ' ');
    *pcVar2 = '\0';
    cVar5 = *pcVar4;
    pcVar1 = pcVar4;
    while (cVar5 == ' ') {
        pcVar1 = pcVar1 + 1;
        cVar5 = *pcVar1;
    }
    cVar5 = *pcVar1;
    if (cVar5 != '\0') {
        iVar3 = pcVar1 - pcVar4;
        do {
            *pcVar4 = cVar5;
            pcVar4 = pcVar4 + 1;
            cVar5 = pcVar4[iVar3];
        } while (cVar5 != '\0');
    }
    *pcVar4 = '\0';
    return;
}


/* fcn.0001bb80 @ 0x1bb80 */

int16_t fcn.0001bb80(uint32_t arg1)

{
    char cVar1;
    int16_t iVar2;
    uint in_register_0000000c;
    char *pcVar3;
    
    pcVar3 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = 0;
    cVar1 = *pcVar3;
    while (cVar1 != '\0') {
        pcVar3 = pcVar3 + 1;
        iVar2 = iVar2 + 1;
        cVar1 = *pcVar3;
    }
    return iVar2;
}


/* fcn.0001b9d8 @ 0x1b9d8 */

void fcn.0001b9d8(void)

{
    //WARNING: Could not recover jumptable at 0x0001b9df. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x4af30 + 0x48))();
    return;
}


/* fcn.00019104 @ 0x19104 */

int64_t fcn.00019104(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    int64_t iVar1;
    
    iVar1 = *0x43840;
    do {
        if (iVar1 == 0) {
            return 0;
        }
        if (arg2 == 1) {
code_r0x00019125:
            if (*(iVar1 + 0x10) == CONCAT44(in_register_0000000c,arg1)) {
                return iVar1;
            }
        }
        else if (arg2 == 2) {
            if (*(iVar1 + 0x10) == CONCAT44(in_register_0000000c,arg1)) {
                return iVar1;
            }
            goto code_r0x00019125;
        }
        iVar1 = *(iVar1 + 0x18);
    } while( true );
}


/* fcn.0001a26c @ 0x1a26c */

ulong fcn.0001a26c(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    
    iVar1 = fcn.0001b164(noname_0,arg2);
    uVar3 = 0;
    if (iVar1 != 0) {
        fcn.00018fb4(*(iVar1 + 0x10));
        *(iVar1 + 0x10) = arg1;
        if (*(iVar1 + 0xdb) != '\0') {
            if (arg3 == '\0') {
                if (*(iVar1 + 0xd9) == '\0') {
                    iVar2 = (**(*0x4af30 + 0x148))(iVar1 + 8,0x42728,iVar1 + 0x28,0);
                    if (-1 < iVar2) {
                        *(iVar1 + 0xd9) = 1;
                    }
                }
            }
            else if (*(iVar1 + 0xd9) != '\0') {
                iVar2 = (**(*0x4af30 + 0x150))(*(iVar1 + 8),0x42728,iVar1 + 0x28,0);
                if (-1 < iVar2) {
                    *(iVar1 + 0xd9) = 0;
                }
            }
        }
        *(iVar1 + 0xda) = 1;
        uVar3 = 1;
    }
    return uVar3;
}


/* fcn.0001a688 @ 0x1a688 */

int64_t fcn.0001a688(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *puVar8;
    int64_t *piVar9;
    uint in_register_0000000c;
    int64_t *piVar10;
    int64_t *piVar11;
    int64_t in_stack_00000028;
    uchar auStack_38 [16];
    
    for (piVar11 = *0x43868; piVar11 != NULL; piVar11 = piVar11[4]) {
        if (*piVar11 == CONCAT44(in_register_0000000c,arg1)) goto code_r0x0001a6c9;
    }
    piVar11 = NULL;
code_r0x0001a6c9:
    if ((piVar11 == NULL) || (piVar4 = fcn.0001b9e4(0xe0), piVar4 == NULL)) {
        return -0x7ffffffffffffff7;
    }
    fcn.0001ba7c(piVar4,0,0xe0);
    piVar4[2] = in_stack_00000028;
    iVar5 = fcn.00011a84(piVar11[1],arg2);
    piVar4[0x11] = iVar5;
    if (iVar5 != 0) {
        uVar2 = fcn.0001bb80(arg3);
        iVar5 = (uVar2 + 1) * 2;
        iVar6 = fcn.0001b9e4(iVar5);
        piVar4[3] = iVar6;
        if (iVar6 != 0) {
            uVar3 = fcn.0001bb80(arg4);
            iVar6 = (uVar3 + 1) * 2;
            iVar7 = fcn.0001b9e4(iVar6);
            piVar4[4] = iVar7;
            if (iVar7 == 0) {
                iVar5 = -0x7ffffffffffffff7;
            }
            else {
                fcn.0001ba7c(piVar4[3],0,iVar5);
                fcn.0001ba7c(piVar4[4],0,iVar6);
                fcn.0001bd54(piVar4[3],uVar2,arg3);
                *(piVar4[3] + uVar2 * 2) = 0;
                fcn.0001bd54(piVar4[4],uVar3,arg4);
                *(piVar4[4] + uVar3 * 2) = 0;
                puVar8 = piVar11[2];
                if (piVar11[2] == NULL) {
                    piVar11[2] = piVar4;
                }
                else {
                    while (*puVar8 != NULL) {
                        puVar8 = *puVar8;
                    }
                    *puVar8 = piVar4;
                }
                iVar5 = (**(*0x4af30 + 0x148))(piVar4 + 1,0x42688,piVar4[0x11],0);
                if ((-1 < iVar5) &&
                   (iVar5 = (**(*0x4af30 + 0x118))(*piVar11,0x42818,auStack_38,*0x43860,piVar4[1],8), -1 < iVar5))
                {
                    return iVar5;
                }
                piVar1 = piVar11[2];
                piVar10 = NULL;
                while (piVar9 = piVar1, piVar9 != NULL) {
                    if (piVar9 == piVar4) {
                        if (piVar9 == piVar11[2]) {
                            piVar11[2] = *piVar9;
                        }
                        else {
                            *piVar10 = *piVar9;
                        }
                        break;
                    }
                    piVar10 = piVar9;
                    piVar1 = *piVar9;
                }
                if (-1 < iVar5) {
                    return iVar5;
                }
            }
            goto code_r0x0001a891;
        }
    }
    iVar5 = -0x7ffffffffffffff7;
code_r0x0001a891:
    if (piVar4[0x11] != 0) {
        (**(*0x4af30 + 0x48))();
    }
    if (piVar4[3] != 0) {
        fcn.0001b9d8();
    }
    if (piVar4[4] != 0) {
        fcn.0001b9d8();
    }
    fcn.0001b9d8(piVar4);
    return iVar5;
}


/* fcn.0001a0e4 @ 0x1a0e4 */

int64_t fcn.0001a0e4(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t in_stack_00000028;
    
    iVar1 = fcn.0001b164(noname_0,0);
    if (iVar1 == 0) {
        iVar2 = -0x7ffffffffffffff2;
    }
    else {
        *(iVar1 + 0x78) = 0;
        *(iVar1 + 0x28) = 0x20001;
        *(iVar1 + 0x30) = iVar1 + 0x58;
        *(iVar1 + 0x38) = 0x1b570;
        *(iVar1 + 0x40) = 0x1b4b8;
        *(iVar1 + 0x58) = 0;
        *(iVar1 + 0x48) = 0x1b58c;
        *(iVar1 + 0x50) = 0x1b49c;
        *(iVar1 + 0x5e) = 0;
        *(iVar1 + 0x5c) = in_stack_00000028 >> 1 & 1;
        *(iVar1 + 0x60) = 0;
        *(iVar1 + 0x5d) = in_stack_00000028 >> 2 & 1;
        *(iVar1 + 0x68) = 1;
        *(iVar1 + 0x5f) = in_stack_00000028 & 1;
        *(iVar1 + 100) = arg1;
        *(iVar1 + 0x70) = arg3 + -1;
        *(iVar1 + 0x80) = arg2;
        if ((in_stack_00000028 & 0x38) == 0x28) {
            iVar2 = 0;
        }
        else {
            iVar2 = (**(*0x4af30 + 0x148))(iVar1 + 8,0x42728,iVar1 + 0x28,0);
            if (-1 < iVar2) {
                *(iVar1 + 0xd9) = 1;
            }
        }
    }
    return iVar2;
}


/* fcn.0001a8ec @ 0x1a8ec */

int64_t fcn.0001a8ec(int64_t param_1)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int64_t iVar5;
    int64_t iVar6;
    
    iVar5 = fcn.0001b164(param_1,0);
    uVar4 = *0x42754;
    uVar3 = *0x42750;
    uVar2 = *0x4274c;
    uVar1 = *0x42748;
    if (iVar5 == 0) {
        iVar6 = -0x7ffffffffffffff2;
    }
    else {
        *(iVar5 + 0xa8) = 0x1b624;
        *(iVar5 + 0xa0) = 0x18114;
        *(iVar5 + 0xb0) = 0x18114;
        *(iVar5 + 0xb8) = 0x1b7c0;
        *(iVar5 + 0x90) = uVar1;
        *(iVar5 + 0x94) = uVar2;
        *(iVar5 + 0x98) = uVar3;
        *(iVar5 + 0x9c) = uVar4;
        iVar6 = (**(*0x4af30 + 0x148))(iVar5 + 8,0x42738,iVar5 + 0x90,0);
        if (-1 < iVar6) {
            *(iVar5 + 0xc0) = 1;
        }
    }
    return iVar6;
}


/* fcn.0001ac20 @ 0x1ac20 */

void fcn.0001ac20(int64_t param_1)

{
    int64_t iVar1;
    
    iVar1 = fcn.0001b164(param_1,0);
    if (iVar1 != 0) {
        *(iVar1 + 0xda) = 1;
    }
    return;
}


/* fcn.0001b164 @ 0x1b164 */

ulong * fcn.0001b164(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int64_t iVar2;
    ulong *puVar3;
    int64_t iVar4;
    ulong *puVar5;
    uchar uStack_28;
    ulong uStack_27;
    ulong uStack_1f;
    ushort uStack_17;
    uchar uStack_15;
    
    iVar4 = *0x43868;
    do {
        if (iVar4 == 0) {
            return NULL;
        }
        for (puVar5 = *(iVar4 + 0x10); puVar5 != NULL; puVar5 = *puVar5) {
            iVar2 = fcn.0001ca6c(puVar5[0x11]);
            if (iVar2 == 0) {
                return NULL;
            }
            iVar1 = fcn.0001ba94(iVar2,arg1,*(iVar2 + 2));
            if (iVar1 == 0) {
                if (arg2 != 0) {
                    uStack_28 = 0;
                    uStack_27 = 0;
                    uStack_1f = 0;
                    uStack_17 = 0;
                    uStack_15 = 0;
                    fcn.0001bdfc(&uStack_28,0x14,puVar5[4]);
                    iVar1 = fcn.0001ba94(&uStack_28,arg2,0x11);
                    puVar3 = NULL;
                    if (iVar1 == 0) {
                        puVar3 = puVar5;
                    }
                    return puVar3;
                }
                return puVar5;
            }
        }
        iVar4 = *(iVar4 + 0x20);
    } while( true );
}


/* fcn.0001aabc @ 0x1aabc */

void fcn.0001aabc(uint32_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    uint in_register_0000000c;
    int64_t *arg1_00;
    
    for (arg1_00 = *0x43868; (arg1_00 != NULL && (*arg1_00 != CONCAT44(in_register_0000000c,arg1)));
        arg1_00 = arg1_00[4]) {
    }
    if (arg1_00 != NULL) {
        arg2_00 = fcn.0001b164(arg2,0);
        if (arg2_00 != 0) {
            fcn.0001b2c4(arg1_00,arg2_00);
        }
    }
    return;
}


/* fcn.00021390 @ 0x21390 */

void fcn.00021390(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    bool bVar6;
    char in_stack_00000028;
    
    uVar5 = 0;
    if (arg4 != 0) {
        iVar4 = 0;
        do {
            iVar2 = iVar4 + 1;
            if (*(uVar5 + arg2) < 0x21) {
                iVar2 = iVar4;
            }
        } while ((iVar2 != arg3 + -1) && (uVar5 = uVar5 + 1, iVar4 = iVar2, uVar5 < arg4));
        if (iVar2 != 0) {
            *(iVar2 + arg1) = 0;
            uVar5 = arg4 - 1;
            iVar4 = iVar2 + -1;
            do {
                do {
                    uVar3 = in_stack_00000028 != '\0' ^ uVar5;
                    uVar5 = uVar5 - 1;
                    uVar1 = *(uVar3 + arg2);
                } while (uVar1 < 0x21);
                if (uVar1 == 0x3a) {
                    uVar1 = 0x3b;
                }
                *(iVar4 + arg1) = uVar1;
                bVar6 = iVar4 != 0;
                iVar4 = iVar4 + -1;
            } while (bVar6);
            return;
        }
    }
    *arg1 = 0;
    return;
}


/* fcn.00021258 @ 0x21258 */

bool fcn.00021258(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.0002ce30(*0x43c08 + 0x48,arg1);
    return iVar1 != 0;
}


/* fcn.0002ce30 @ 0x2ce30 */

int64_t fcn.0002ce30(uint32_t arg1,int64_t arg2)

{
    int16_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    int64_t iVar3;
    uint8_t uVar4;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar4 = 0;
    if (*(iVar2 + 0x1b00) != '\0') {
        do {
            iVar3 = uVar4 * 0xd8;
            if ((*(iVar3 + 0xd0 + iVar2) == '\0') &&
               (iVar1 = fcn.0001bb9c(arg2,arg1 + 0x1c + iVar3,0x10), iVar1 == 0)) {
                return iVar3 + iVar2;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(iVar2 + 0x1b00));
    }
    return 0;
}


/* fcn.00020d64 @ 0x20d64 */

void fcn.00020d64(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    char cVar2;
    ushort uVar3;
    uint32_t uVar4;
    uchar *puVar5;
    uint8_t uVar6;
    ushort *puVar7;
    uchar *puVar8;
    int64_t iVar9;
    uint64_t uStack_a8;
    uint uStack_a0;
    uint32_t uStack_9c;
    int iStack_98;
    uchar auStack_94 [41];
    uchar auStack_6b [17];
    ushort auStack_5a [10];
    uchar uStack_46;
    
    fcn.0001ba7c(&uStack_a8,0,0x80);
    uStack_a0 = arg3;
    if (((*(arg2 + 0xd4) & 0xc000) == 0x4000) && ((*(arg2 + 0xd4) & 0x1000) != 0)) {
        iStack_98 = *(arg2 + 0xea) * 2;
    }
    else {
        iStack_98 = 0x200;
    }
    if (((*(arg2 + 0xa6) & 0x400) == 0) || ((*(arg2 + 0xac) & 0x400) == 0)) {
        uStack_a8 = *(arg2 + 0x78);
    }
    else {
        uStack_a8 = *(arg2 + 200);
    }
    uVar4 = uStack_9c;
    if (((*(arg2 + 0xa4) & 1) != 0) && (uVar4 = uStack_9c | 1, (*(arg2 + 0xaa) & 1) != 0)) {
        uVar4 = uStack_9c | 3;
    }
    uVar6 = 0;
    if ((((*(arg2 + 0x100) & 7) != 7) || ((*(arg2 + 0xa4) & 2) == 0)) || (uStack_9c = 4, (*(arg2 + 0xaa) & 2) == 0)) {
        uStack_9c = 0;
    }
    uStack_9c = uVar4 & 0xfffffffb | uStack_9c;
    cVar2 = fcn.00017644(arg1);
    if (cVar2 != '\0') {
        uStack_9c = uStack_9c | 8;
    }
    if (*(arg2 + 0x1b2) == 1) {
        uStack_9c = uStack_9c | 0x10;
    }
    if ((*(arg2 + 0x60) & 1) != 0) {
        uStack_9c = uStack_9c | 0x20;
        cVar2 = fcn.00017698(arg1,10000000);
        if (cVar2 != '\0') {
            uStack_9c = uStack_9c | 0x40;
        }
        cVar2 = fcn.000176a4(arg1,10000000);
        if (cVar2 != '\0') {
            cVar2 = fcn.000176cc();
            if (cVar2 != '\0') {
                uStack_9c = uStack_9c | 0x2000;
            }
        }
    }
    cVar2 = fcn.00017684(arg1);
    if (cVar2 != '\0') {
        uStack_9c = uStack_9c | 0x80;
    }
    cVar2 = fcn.000176b4(arg1);
    if (cVar2 != '\0') {
        uStack_9c = uStack_9c | 0x800;
    }
    puVar7 = auStack_5a;
    iVar9 = 10;
    do {
        uVar3 = fcn.00011b38(*((arg2 - auStack_5a) + 0x14 + puVar7));
        *puVar7 = uVar3;
        puVar7 = puVar7 + 1;
        iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    uStack_46 = 0;
    fcn.00021390(auStack_6b,arg2 + 0x14,0x11,0x14);
    puVar8 = arg2 + 0x36;
    puVar5 = puVar8;
    do {
        uVar4 = uVar6;
        uVar6 = uVar6 + 2;
        puVar5[auStack_94 + -puVar8] = puVar8[uVar4 + 1];
        uVar1 = *puVar5;
        puVar5 = puVar5 + 2;
        auStack_94[uVar4 + 1] = uVar1;
    } while (uVar6 < 0x28);
    fcn.0001bc04(auStack_94);
    fcn.00028bf8(*0x43c08,arg1,&uStack_a8);
    return;
}


/* fcn.0001915c @ 0x1915c */

ulong * fcn.0001915c(uint32_t arg1,uint32_t arg2)

{
    ulong *puVar1;
    
    puVar1 = *0x43838;
    while( true ) {
        if (puVar1 == NULL) {
            return NULL;
        }
        if ((**puVar1 == arg1) && (*(puVar1 + 1) == arg2)) break;
        puVar1 = puVar1[2];
    }
    return puVar1;
}


/* fcn.00019420 @ 0x19420 */

bool fcn.00019420(int64_t arg1,uint32_t arg2)

{
    uint8_t uVar1;
    char cVar2;
    int64_t *piVar3;
    int64_t iVar4;
    uint32_t arg1_00;
    uint64_t uVar5;
    unkbyte7 Var6;
    uint8_t uVar7;
    uchar auStack_88 [44];
    uint32_t uStack_5c;
    int iStack_20;
    
    arg1_00 = arg1;
    if (arg2 == 1) {
        arg1 = 0;
        piVar3 = fcn.0001915c(1,arg1_00);
    }
    else {
        piVar3 = fcn.00019138(arg1_00);
    }
    if ((piVar3 != NULL) && (**piVar3 == arg2)) {
        uVar1 = fcn.000227f4();
        uVar7 = 0;
        if (uVar1 != 0) {
            do {
                fcn.000235b8(CONCAT71(arg1 >> 8,uVar7),auStack_88);
                uVar5 = uStack_5c;
                iVar4 = fcn.00019138(uStack_5c);
                Var6 = uVar5 >> 8;
                if ((iVar4 == 0) || (*(iVar4 + 10) == '\0')) {
                    arg1 = CONCAT71(Var6,0xff);
                }
                else {
                    arg1 = CONCAT71(Var6,*(iVar4 + 8));
                }
                if (arg1 == piVar3[1]) {
                    cVar2 = fcn.00018ce0(uStack_5c);
                    arg1 = *piVar3;
                    if (cVar2 == *(arg1 + 8)) {
                        return iStack_20 != 1;
                    }
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < uVar1);
        }
    }
    return false;
}


/* fcn.00014844 @ 0x14844 */

ulong fcn.00014844(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint uVar2;
    int64_t iVar3;
    
    fcn.0001ba7c(arg2,0,0x35);
    iVar3 = 0;
    do {
        *(arg2 + 0x23 + iVar3) = *(*(arg1 + 8) + 2 + iVar3);
        iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    *(arg2 + 0x2c) = *(*(arg1 + 8) + 0xb);
    *(arg2 + 0x2d) = *(*(arg1 + 8) + 0xc);
    *(arg2 + 0x2e) = *(*(arg1 + 8) + 0xd);
    *(arg2 + 0x25) = *(*(arg1 + 8) + 4);
    *(arg2 + 0x29) = *(*(arg1 + 8) + 8);
    *(arg2 + 0x26) = *(*(arg1 + 8) + 5);
    *(arg2 + 0x2a) = *(*(arg1 + 8) + 9);
    *(arg2 + 0x27) = *(*(arg1 + 8) + 6);
    *(arg2 + 0x2b) = *(*(arg1 + 8) + 10);
    *(arg2 + 0x28) = *(*(arg1 + 8) + 7);
    uVar1 = *(arg1 + 0x30);
    if (uVar1 == 2) {
code_r0x0001491a:
        *(arg2 + 0xc) = 0;
    }
    else {
        if (uVar1 == 4) {
code_r0x00014911:
            *(arg2 + 0xc) = 1;
            goto code_r0x0001491e;
        }
        if (uVar1 != 5) {
            if (uVar1 < 8) {
                return 0x8000000000000003;
            }
            if (uVar1 < 10) goto code_r0x0001491a;
            if (uVar1 == 10) goto code_r0x00014911;
            if (uVar1 != 0xb) {
                return 0x8000000000000003;
            }
        }
        *(arg2 + 0xc) = 2;
    }
code_r0x0001491e:
    if (*(arg2 + 0xc) == 1) {
        *arg2 = *(arg1 + 0x18);
        uVar2 = *(arg1 + 0x28);
    }
    else {
        if (*(arg2 + 0xc) != 2) {
            return 0;
        }
        *arg2 = *(arg1 + 0x20);
        uVar2 = *(arg1 + 0x2c);
    }
    *(arg2 + 8) = uVar2;
    return 0;
}


/* fcn.0001bcc4 @ 0x1bcc4 */

uint64_t fcn.0001bcc4(int64_t arg1,int64_t arg2)

{
    if (arg1 == 0) {
        return 0xffffffffffffffff;
    }
    return arg1 / 10;
}


/* fcn.0001d764 @ 0x1d764 */

uint64_t fcn.0001d764(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    char cVar5;
    char cVar6;
    int iVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong uVar11;
    ulong uStackX_8;
    int64_t aiStack_28 [2];
    
    aiStack_28[0] = 0;
    uVar11 = 0;
    if (arg1 == 0) {
        return 1;
    }
    if (arg2 != 0) {
        if (7 < *(arg2 + 0x10)) {
            return 9;
        }
        iVar10 = arg2;
        if ((*arg2 != 0) && (cVar5 = fcn.0001a03c(), cVar5 != '\0')) {
            uVar11 = *arg2;
            iVar10 = arg2;
            cVar5 = fcn.0001ce98(arg1,arg2,aiStack_28);
            if (cVar5 == '\0') {
                *arg2 = uVar11;
                return 2;
            }
        }
        if (*(arg2 + 0x23) == -0x14) {
            if (*arg2 == 0) {
                return 1;
            }
            if (arg4 != '\0') {
                cVar5 = fcn.00013c68();
                cVar6 = fcn.00013c60();
                if ((cVar5 != '\0') && (cVar6 != '\0')) {
                    iVar10 = CONCAT71(iVar10 >> 8,*(arg2 + 0x10));
                    uStackX_8 = 0;
                    iVar7 = fcn.00013c18(&uStackX_8,iVar10);
                    if (iVar7 == 0) {
                        fcn.0001ba1c(*arg2,*(arg2 + 8),uStackX_8,0x200);
                        fcn.0001ba7c(arg2 + 0x21,0,0x14);
                        *(arg2 + 0x28) = 0x40;
                        *(arg2 + 0x23) = 0x50;
                        return 0;
                    }
                }
            }
        }
        uVar9 = fcn.0001d520(arg1,CONCAT71(iVar10 >> 8,*(arg2 + 0x10)));
        if ((uVar9 != 0) && (*(arg2 + 0x11) != '\x12')) {
            return uVar9;
        }
        cVar5 = fcn.0001d134(arg1,arg2,0);
        if (cVar5 != '\0') {
            uVar1 = *(arg2 + 0x10);
            iVar10 = *(arg1 + 8) + 0x130 + uVar1 * 0x80;
            fcn.00019c78(*arg1,iVar10,0xffffffff);
            fcn.0001d278(arg1,CONCAT71(iVar10 >> 8,*(arg2 + 0x10)));
            iVar10 = *(arg1 + 8) + 0x138 + uVar1 * 0x80;
            fcn.00019c78(*arg1,iVar10,1);
            uVar8 = fcn.0001cee8(arg1,CONCAT71(iVar10 >> 8,*(arg2 + 0x10)),1,arg3);
            uVar9 = *(arg1 + 0xf0) + 0x100U & 0xffffffffffffff00;
            uVar2 = *(uVar9 + 0x44);
            uVar3 = *(uVar9 + 0x48);
            uVar4 = *(uVar9 + 0x4c);
            *(arg2 + 0x21) = *(uVar9 + 0x40);
            *(arg2 + 0x25) = uVar2;
            *(arg2 + 0x29) = uVar3;
            *(arg2 + 0x2d) = uVar4;
            *(arg2 + 0x31) = *(uVar9 + 0x50);
            if (aiStack_28[0] != 0) {
                iVar10 = fcn.0001a09c(*arg1);
                *arg2 = uVar11;
                if (iVar10 < 0) {
                    return 2;
                }
            }
            return uVar8;
        }
    }
    return 2;
}


/* fcn.0001eb90 @ 0x1eb90 */

uint64_t fcn.0001eb90(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong uVar2;
    int64_t arg3_00;
    int64_t iVar3;
    uint8_t auStack_208 [512];
    
    uVar1 = arg2 & 0xff;
    iVar3 = uVar1 * 3;
    if ((*(arg1 + 0x40 + uVar1 * 0x18) & 1) != 0) {
        if (arg3 == 0) {
            uVar2 = 0x200;
            fcn.0001ba7c(auStack_208,0,0x200);
            arg3_00 = CONCAT71(uVar2 >> 8,arg2);
            uVar1 = fcn.0001dd74(arg1,auStack_208,arg3_00,CONCAT71(iVar3 >> 8,1));
            if ((uVar1 != 0) ||
               ((uVar1 = CONCAT71(uVar1 >> 8,auStack_208[0] >> 2), (auStack_208[0] >> 2 & 1) != 0 &&
                (uVar1 = fcn.0001ddf0(arg1,auStack_208,CONCAT71(arg3_00 >> 8,arg2)), uVar1 != 0))))
            goto code_r0x0001ebb1;
            arg3 = auStack_208;
        }
        uVar1 = CONCAT71(uVar1 >> 8,*(arg3 + 0x100)) & 0xffffffffffffff07;
        if (((uVar1 != '\a') || ((*(arg3 + 0xa4) & 2) == 0)) || ((*(arg3 + 0xaa) & 2) == 0)) {
            return CONCAT71(uVar1 >> 8,1);
        }
    }
code_r0x0001ebb1:
    return uVar1 & 0xffffffffffffff00;
}


/* fcn.00018be0 @ 0x18be0 */

uint fcn.00018be0(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    uint uVar3;
    int *arg2;
    
    iVar1 = *0x43838;
    while (iVar1 != 0) {
        iVar1 = *(iVar1 + 0x10);
        fcn.0001b9d8();
    }
    *0x43838 = 0;
    *0x43822 = 0;
    if (arg1 == '\0') {
        fcn.0001a628(*0x43830);
    }
    iVar2 = fcn.000211b4();
    if (iVar2 == 0) {
        for (arg2 = *0x43840; arg2 != NULL; arg2 = *(arg2 + 6)) {
            if (*arg2 == 1) {
                fcn.0001e50c(*(arg2 + 4),arg2);
            }
            else if (*arg2 == 2) {
                fcn.0001fcdc(*(arg2 + 4));
            }
        }
        fcn.0002116c();
        fcn.0001ab04(*0x43830);
        uVar3 = 1;
    }
    else {
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00015e58 @ 0x15e58 */

void fcn.00015e58(void)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint64_t arg1;
    uint32_t uVar3;
    ulong uVar4;
    uchar *puVar5;
    char *in_R9;
    char cVar6;
    uchar auStack_1b8 [16];
    uchar auStack_1a8 [24];
    uchar auStack_190 [40];
    uchar auStack_168 [144];
    uchar auStack_d8 [24];
    int64_t iStack_c0;
    uint32_t uStack_7c;
    uint32_t uStack_78;
    int64_t aiStack_58 [5];
    ulong uStack_30;
    
    uStack_30 = 0x15e68;
    fcn.00016ea0(0x436e0);
    uStack_30 = 0x15e6d;
    fcn.00016e70();
    fcn.00016ea0(0x436e0);
    uVar4 = 0;
    fcn.0001ba7c(&stack0xfffffffffffffe98,0,0x82);
    if (*0x4375c != '\0') {
        fcn.00023974(&stack0xffffffffffffffa8);
        fcn.0001c5f4(&stack0xfffffffffffffe48,aiStack_58[0],CONCAT71(uVar4 >> 8,1),in_R9);
        in_R9 = "Intel Optane";
        fcn.0001c0b4(&stack0xfffffffffffffe98,0x82,0x36530,0x36520);
        fcn.00016f88(0x37,&stack0xfffffffffffffe98);
    }
    if (*0x43763 != 0) {
        in_R9 = "Incomplete Optane Volume";
        fcn.0001c0b4(&stack0xfffffffffffffe98,0x82,0x36554,0x36538);
        fcn.00016f88(0x37,&stack0xfffffffffffffe98);
    }
    arg1 = *0x4375f;
    if (*0x4375f != 0) {
        fcn.00017314(arg1);
    }
    if (*0x43763 != 0) {
        arg1 = *0x43763;
        fcn.00017314(arg1);
    }
    if (*0x43749 != 0) {
        cVar6 = '\0';
        uVar3 = *0x43749;
        do {
            if ((uVar3 & 1) != 0) {
                fcn.00023d7c(CONCAT71(arg1 >> 8,cVar6),&stack0xffffffffffffff28);
                fcn.0001ba7c(&stack0xfffffffffffffe70,0,0x22);
                fcn.0001ba7c(&stack0xfffffffffffffe58,0,0x16);
                fcn.0001ba7c(&stack0xfffffffffffffe48,0,0xb);
                puVar5 = &stack0xffffffffffffff28;
                fcn.0001bd54(&stack0xfffffffffffffe70,0x11,puVar5);
                fcn.0001c5f4(&stack0xfffffffffffffe48,iStack_c0,CONCAT71(puVar5 >> 8,1),in_R9);
                fcn.0001bd54(&stack0xfffffffffffffe58,0xb,&stack0xfffffffffffffe48);
                uVar1 = fcn.000159fc(uStack_78);
                uVar2 = fcn.000159fc(uStack_7c);
                fcn.000130e0(*0x43590,uVar2,0);
                fcn.000130e0(*0x43590,uVar1,0);
                fcn.000104c0(&stack0xfffffffffffffe98,0x82,0x36558,&stack0xfffffffffffffe70);
                if (cVar6 == '\0') {
                    uVar1 = 0x39;
                }
                else if (cVar6 == '\x01') {
                    uVar1 = 0x3a;
                }
                else if (cVar6 == '\x02') {
                    uVar1 = 0x3b;
                }
                else if (cVar6 == '\x03') {
                    uVar1 = 0x3c;
                }
                else {
                    uVar1 = 0;
                }
                in_R9 = NULL;
                arg1 = *0x43590;
                fcn.00012f50(*0x43590,uVar1,&stack0xfffffffffffffe98,0);
            }
            cVar6 = cVar6 + '\x01';
            uVar3 = uVar3 >> 1;
        } while (uVar3 != 0);
    }
    if (*0x4373d != 0) {
        fcn.00017314(*0x4373d);
    }
    fcn.00016e70();
    return;
}


/* fcn.0001e874 @ 0x1e874 */

ulong fcn.0001e874(void)

{
    return 0x400000;
}


/* fcn.0001e820 @ 0x1e820 */

char fcn.0001e820(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    
    if (((arg1 != 0) && (arg2 < 8)) && (uVar1 = *(arg1 + 0x10 + ((arg2 & 0xff) + 2) * 0x18), (uVar1 & 4) != 0)) {
        return ((uVar1 & 8) != 0) + '\x01';
    }
    return '\0';
}


/* fcn.0001e850 @ 0x1e850 */

uint fcn.0001e850(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    
    if (((arg1 != 0) && (arg2 < 8)) && (iVar1 = (arg2 & 0xff) + 2, (*(arg1 + 0x10 + iVar1 * 0x18) & 4) != 0)) {
        return *(arg1 + 8 + iVar1 * 0x18);
    }
    return 0;
}


/* fcn.000143ac @ 0x143ac */

uint64_t fcn.000143ac(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar auVar1 [16];
    uchar auVar2 [16];
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    
    uVar3 = fcn.0001e874();
    if (*arg4 % *(*arg1 + 4) != 0) {
        return 0x8000000000000002;
    }
    if (7 < arg2) {
        return 0x8000000000000002;
    }
    uVar8 = arg2 & 0xffff;
    piVar7 = fcn.0001915c(1,arg2);
    if (piVar7 == NULL) {
        return 0x8000000000000002;
    }
    if (*(piVar7 + 10) == '\0') {
        return 0x8000000000000002;
    }
    iVar4 = fcn.0001e820(*(*piVar7 + 0x10),CONCAT71(uVar8 >> 8,piVar7[1]));
    if (iVar4 != 1) {
        return 0x8000000000000002;
    }
    if (arg3 != -1) {
        return 0x8000000000000002;
    }
    uVar8 = CONCAT44(0,*(*arg1 + 4));
    if (*(arg4 + 0x18) % uVar8 != 0) {
        return 0x8000000000000002;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar8;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *(arg4 + 0x20);
    auVar2 = auVar2 % auVar1;
    if (auVar2._0_8_ != 0) {
        return 0x8000000000000002;
    }
    if (auVar2[0] <= *(arg4 + 0x31)) {
        uVar5 = fcn.0001e850(*(*piVar7 + 0x10),CONCAT71(auVar2._1_7_,piVar7[1]));
        if (uVar5 == 0) {
            return 0x8000000000000002;
        }
        uVar6 = 0xffffffff / uVar5;
        if (uVar6 < *(arg4 + 0x28)) {
            *(arg4 + 0x28) = 0xffffffff;
        }
        else {
            *(arg4 + 0x28) = *(arg4 + 0x28) * uVar5;
        }
        if (uVar6 < *(arg4 + 0x2c)) {
            *(arg4 + 0x2c) = 0xffffffff;
        }
        else {
            *(arg4 + 0x2c) = *(arg4 + 0x2c) * uVar5;
        }
        if ((*(arg4 + 0x28) != 0) || (*(arg4 + 0x2c) != 0)) {
            *(arg4 + 0x31) = *(arg4 + 0x31) | 0x80;
        }
        if (*(arg4 + 0x31) == '\0') goto code_r0x000144f7;
    }
    if (uVar3 < *(arg4 + 0x28)) {
        *(arg4 + 0x28) = uVar3;
        return 0x8000000000000004;
    }
    if (uVar3 < *(arg4 + 0x2c)) {
        *(arg4 + 0x2c) = uVar3;
        return 0x8000000000000004;
    }
code_r0x000144f7:
    if ((*(arg4 + 8) == 0) && (*(arg4 + 0x30) != -1)) {
        return 0x8000000000000002;
    }
    return ~-(*arg4 != 0) & 0x8000000000000002;
}


/* fcn.0001d6f8 @ 0x1d6f8 */

uint fcn.0001d6f8(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    ushort uVar1;
    uint uVar2;
    
    if (arg1 == 0) {
        uVar2 = 1;
    }
    else if (arg2 < 8) {
        uVar1 = fcn.00019bb0(*arg1,*(arg1 + 8) + (arg2 & 0xff) * 0x80 + 0x120);
        if (arg3 != 0) {
            *arg3 = uVar1;
        }
        if (arg4 != 0) {
            *arg4 = uVar1 >> 8;
        }
        uVar2 = 0;
    }
    else {
        uVar2 = 9;
    }
    return uVar2;
}


/* fcn.000141a8 @ 0x141a8 */

int64_t fcn.000141a8(ulong noname_0,uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char cVar2;
    uint32_t uVar3;
    int64_t *piVar4;
    int64_t iVar5;
    uint8_t uVar6;
    uint64_t arg1_00;
    int64_t arg1_01;
    int64_t *arg2_00;
    ulong in_R9;
    int64_t var_40h;
    int32_t var_38h;
    uint32_t var_34h;
    int8_t var_30h;
    int8_t var_1dh;
    int8_t var_1ch;
    int8_t var_1bh;
    int8_t var_1ah;
    int8_t var_19h;
    int8_t var_18h;
    int8_t var_17h;
    int8_t var_16h;
    int8_t var_15h;
    int8_t var_13h;
    int8_t var_12h;
    
    if (arg1 < 8) {
        piVar4 = fcn.0001915c(1,arg1 & 0xffff);
        if ((piVar4 != NULL) && (*(piVar4 + 10) != '\0')) {
            iVar1 = *(*piVar4 + 0x10);
            cVar2 = fcn.00019420(arg1 & 0xffff,1);
            if (cVar2 != '\0') {
                uVar6 = *(*(arg2 + 8) + 2);
                if (uVar6 < 0xeb) {
                    if ((((0x3a < uVar6 - 0xb0) || ((0x40f000000000001U >> (uVar6 - 0xb0 & 0x3f) & 1) == 0)) &&
                        (uVar6 != 0x90)) && (uVar6 != 0x92)) {
                        return -0x7ffffffffffffffd;
                    }
                }
                else {
                    uVar3 = uVar6 - 0xec;
                    if (10 < uVar3) {
                        return -0x7ffffffffffffffd;
                    }
                    if ((0x7e9U >> (uVar3 & 0x1f) & 1) == 0) {
                        return -0x7ffffffffffffffd;
                    }
                }
            }
            arg2_00 = &var_40h;
            iVar5 = fcn.00014844(arg2,arg2_00);
            if (iVar5 < 0) {
                return iVar5;
            }
            var_30h = piVar4[1];
            iVar5 = fcn.0001bcc4(*(arg2 + 0x10),arg2_00);
            uVar3 = fcn.0001d764(iVar1,&var_40h,iVar5,CONCAT71(in_R9 >> 8,1));
            arg1_00 = uVar3;
            iVar5 = fcn.0001eb20(arg1_00);
            iVar1 = *arg2;
            *(iVar1 + 2) = var_1dh;
            *(iVar1 + 3) = var_1ch;
            *(iVar1 + 0xc) = var_13h;
            *(iVar1 + 0xd) = var_12h;
            *(iVar1 + 4) = var_1bh;
            *(iVar1 + 8) = var_17h;
            *(iVar1 + 5) = var_1ah;
            *(iVar1 + 9) = var_16h;
            *(iVar1 + 6) = var_19h;
            *(iVar1 + 10) = var_15h;
            *(iVar1 + 7) = var_18h;
            if (var_34h == 1) {
                *(arg2 + 0x28) = var_38h;
            }
            else if (var_34h == 2) {
                *(arg2 + 0x2c) = var_38h;
            }
            if (iVar5 == 0) {
                arg1_01 = *(*piVar4 + 0x10);
                cVar2 = *(*(arg2 + 8) + 2);
                if (cVar2 == -0x14) {
                    cVar2 = fcn.0001eb90(arg1_01,CONCAT71(iVar1 >> 8,piVar4[1]),var_40h);
                    if (cVar2 == '\0') {
                        return 0;
                    }
                }
                else {
                    uVar6 = cVar2 + 0xf;
                    arg1_01 = CONCAT71(arg1_00 >> 8,uVar6);
                    if (5 < uVar6) {
                        return 0;
                    }
                    if ((0x2bU >> (arg1_01 & 0x1f) & 1) == 0) {
                        return 0;
                    }
                }
                fcn.00018be0(CONCAT71(arg1_01 >> 8,1));
                fcn.00015e58();
            }
            return iVar5;
        }
    }
    return -0x7ffffffffffffffe;
}


/* fcn.00014970 @ 0x14970 */

//WARNING: Variable defined which should be unmapped: var_10h

ulong fcn.00014970(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    int iVar2;
    int64_t *piVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    char cVar5;
    int32_t var_10h;
    
    if ((((CONCAT44(in_register_0000000c,arg1) == 0x42e70) && (arg2 != 0)) && (*arg2 != 0)) && (arg3 != 0)) {
        iVar1 = fcn.0001ba94(*arg2,0x42ec0,0x10);
        if (iVar1 == 0) {
            uVar4 = 0;
            goto code_r0x000149ff;
        }
        iVar1 = fcn.0001ba94(*arg2,0x42ed0,0x10);
        if (iVar1 == 0) {
            cVar5 = **arg2;
            do {
                uVar4 = cVar5 + 1U;
                if (7 < cVar5 + 1U) {
                    return 0x800000000000000e;
                }
code_r0x000149ff:
                cVar5 = uVar4;
                piVar3 = fcn.0001915c(1,uVar4);
            } while (((piVar3 == NULL) || (*(piVar3 + 10) == '\0')) ||
                    (iVar2 = fcn.0001e820(*(*piVar3 + 0x10),CONCAT71(uVar4 >> 8,piVar3[1])), iVar2 != 2));
            *0x42ed0 = cVar5;
            fcn.0001ba1c(*arg2,0x10,0x42ed0,0x10);
            *arg3 = 0;
            *0x42e60 = 0;
            return 0;
        }
    }
    return 0x8000000000000002;
}


/* fcn.0001ba94 @ 0x1ba94 */

ulong fcn.0001ba94(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    int64_t iVar1;
    uint in_register_00000014;
    char *pcVar2;
    
    pcVar2 = CONCAT44(in_register_00000014,arg2);
    if (arg3 != 0) {
        iVar1 = CONCAT44(in_register_0000000c,arg1) - pcVar2;
        do {
            if (pcVar2[iVar1] != *pcVar2) {
                return 1;
            }
            pcVar2 = pcVar2 + 1;
            arg3 = arg3 + -1;
        } while (arg3 != 0);
    }
    return 0;
}


/* fcn.0001f1c8 @ 0x1f1c8 */

void fcn.0001f1c8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint uVar1;
    int64_t in_stack_00000038;
    uchar auStack_48 [12];
    uint uStack_3c;
    uchar uStack_38;
    ulong uStack_37;
    ulong uStack_2f;
    uchar uStack_25;
    
    uVar1 = arg4;
    fcn.0001ba7c(auStack_48,0,0x35);
    uStack_37 = *arg2;
    uStack_2f = *(arg2 + 8);
    uStack_25 = 0xa0;
    uStack_3c = uVar1;
    uStack_38 = arg3;
    fcn.0001d764(arg1,auStack_48,in_stack_00000038,CONCAT44(arg4 >> 0x20,CONCAT31(arg4 >> 8,1)));
    return;
}


/* fcn.0001f17c @ 0x1f17c */

void fcn.0001f17c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uStack_18;
    ulong uStack_17;
    uint uStack_f;
    ushort uStack_b;
    uchar uStack_9;
    
    uStack_f = 0;
    uStack_b = 0;
    uStack_9 = 0;
    uStack_18 = 3;
    uStack_17 = 0x12000000;
    fcn.0001f1c8(arg1,&uStack_18,arg3,1);
    return;
}


/* fcn.00014f40 @ 0x14f40 */

ulong fcn.00014f40(void)

{
    uchar *puVar1;
    int64_t iVar2;
    
    fcn.0001a334(L"RstVmdFastEnumVar");
    iVar2 = 0x68a;
    puVar1 = 0x42ef0;
    do {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return 0x42ef0;
}


/* fcn.0001a334 @ 0x1a334 */

void fcn.0001a334(ulong param_1,ulong param_2)

{
    (**(*0x4af18 + 0x58))(param_1,param_2,0,0,0);
    return;
}


/* fcn.0001f288 @ 0x1f288 */

char * fcn.0001f288(void)

{
    return "$VER\x02\x02\x13";
}


/* fcn.000152bc @ 0x152bc */

void fcn.000152bc(int64_t arg1)

{
    (**(*0x4af18 + 0x58))(L"RstVmdFastEnumVar",0x3a4f0,7,0x68a,arg1);
    return;
}


/* fcn.0001bd3c @ 0x1bd3c */

uint64_t fcn.0001bd3c(int64_t noname_0,uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_00000014;
    uint64_t uVar2;
    
    uVar1 = 0;
    uVar2 = uVar1;
    if (CONCAT44(in_register_00000014,arg1) != 0) {
        do {
            uVar1 = uVar1 + *(uVar2 + noname_0);
            uVar2 = uVar2 + 1;
        } while (uVar2 < CONCAT44(in_register_00000014,arg1));
    }
    return uVar1;
}


/* fcn.0001a518 @ 0x1a518 */

void fcn.0001a518(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iStack_18;
    ulong *puStack_10;
    
    iVar1 = (**(*0x4af30 + 0x140))(0x425c0,0,&puStack_10);
    if ((-1 < iVar1) && (iVar1 = (**puStack_10)(puStack_10,arg1,arg2 & 0xffffffff,arg3), -1 < iVar1)) {
        return;
    }
    iVar1 = (**(*0x4af30 + 0x140))(0x42620,0,&iStack_18);
    if ((-1 < iVar1) && (iVar1 = (**(iStack_18 + 8))(iStack_18,arg1,1,arg4 & 0xffffffff,arg3), -1 < iVar1)) {
        (**(iStack_18 + 0x10))(iStack_18,arg4 & 0xffffffff);
    }
    return;
}


/* fcn.000211ac @ 0x211ac */

ulong fcn.000211ac(int64_t arg1)

{
    return *(arg1 + 0x80);
}


/* fcn.00021198 @ 0x21198 */

int64_t fcn.00021198(int64_t arg1)

{
    return arg1 + 0x2d;
}


/* fcn.0001bb9c @ 0x1bb9c */

int fcn.0001bb9c(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int iVar1;
    uint in_register_00000014;
    uint8_t *puVar2;
    
    iVar1 = 0;
    for (puVar2 = CONCAT44(in_register_00000014,arg2); (*arg1 != 0 && (*puVar2 != 0)); puVar2 = puVar2 + 1) {
        if (arg3 == 0) {
            return 0;
        }
        if (*arg1 != *puVar2) break;
        arg1 = arg1 + 1;
        arg3 = arg3 + -1;
    }
    if (arg3 != 0) {
        iVar1 = *arg1 - *puVar2;
    }
    return iVar1;
}


/* fcn.0001522c @ 0x1522c */

bool fcn.0001522c(int64_t arg1)

{
    uint64_t uVar1;
    int64_t arg2;
    ulong uVar2;
    bool bVar3;
    
    bVar3 = *0x42ef5 < 2;
    if (bVar3) {
        uVar1 = *0x42ef5;
        *0x42ef5 = *0x42ef5 + 1;
        arg2 = fcn.00021198(arg1);
        fcn.0001bbd0(uVar1 * 0x31 + 0x43518,arg2,0x29);
        uVar2 = fcn.000211ac(arg1);
        *(uVar1 * 0x31 + 0x43541) = uVar2;
    }
    return bVar3;
}


/* fcn.00015118 @ 0x15118 */

bool fcn.00015118(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int16_t iVar2;
    uchar extraout_AL;
    uchar extraout_AL_00;
    uchar extraout_AH;
    uchar extraout_AH_00;
    unkbyte6 extraout_var;
    unkbyte6 extraout_var_00;
    
    fcn.000211ac(arg1);
    iVar1 = *(arg2 + 0x29);
    fcn.00021198(arg1);
    iVar2 = fcn.0001bb9c(CONCAT62(extraout_var_00,CONCAT11(extraout_AH_00,extraout_AL_00)),arg2,0x29);
    return iVar2 == 0 && CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)) == iVar1;
}


/* fcn.0001bbd0 @ 0x1bbd0 */

int64_t fcn.0001bbd0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    
    iVar1 = 0;
    if (arg3 != 0) {
        iVar2 = arg1 - arg2;
        do {
            if (*arg2 == '\0') break;
            *(arg2 + iVar2) = *arg2;
            iVar1 = iVar1 + 1;
            arg2 = arg2 + 1;
            arg3 = arg3 + -1;
        } while (arg3 != 0);
        if (arg3 != 0) {
            *(iVar1 + arg1) = 0;
        }
    }
    return arg1;
}


/* fcn.0001ac3c @ 0x1ac3c */

void fcn.0001ac3c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iVar1 = (**(*0x4af30 + 0x140))(0x425c0,0,&iStackX_20);
    if ((iVar1 < 0) || (iVar1 = (**(iStackX_20 + 8))(iStackX_20,*arg1), iVar1 < 0)) {
        iVar1 = (**(*0x4af30 + 0x140))(0x42620,0,&iStackX_18);
        if (iVar1 < 0) {
            return;
        }
        iVar1 = (**(iStackX_18 + 8))(iStackX_18,0,1,arg2 & 0xffffffff,arg1);
        if (iVar1 < 0) {
            return;
        }
        iVar1 = (**(iStackX_18 + 0x10))(iStackX_18,arg2 & 0xffffffff);
        if (iVar1 < 0) {
            return;
        }
    }
    *arg1 = 0;
    return;
}


/* fcn.0001a604 @ 0x1a604 */

bool fcn.0001a604(ulong param_1)

{
    int64_t iVar1;
    uchar auStackX_10 [24];
    
    iVar1 = (**(*0x4af30 + 0x140))(param_1,0,auStackX_10);
    return -1 < iVar1;
}


/* fcn.00023360 @ 0x23360 */

uint32_t fcn.00023360(ulong param_1,ulong param_2)

{
    uint8_t uVar1;
    int64_t extraout_RAX;
    unkbyte7 Var2;
    uint8_t uVar3;
    uint32_t uVar4;
    
    Var2 = param_2 >> 8;
    uVar4 = 0;
    uVar3 = 0;
    uVar1 = **(*0x43c08 + 0x38);
    if (uVar1 != 0) {
        do {
            fcn.0002b5b0(*(*0x43c08 + 0x38) + 0x10,CONCAT71(Var2,uVar3));
            if ((extraout_RAX != 0) && ((*(*(extraout_RAX + 0x30) + 0xc0) >> 4 & 1) != 0)) {
                uVar4 = uVar4 | 1 << (uVar3 & 0x1f);
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < uVar1);
    }
    return uVar4;
}


/* fcn.0002554c @ 0x2554c */

ulong fcn.0002554c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t extraout_RAX;
    ulong uVar1;
    
    fcn.0002b5b0(*(*0x43c08 + 0x38) + 0x10,CONCAT71(arg2 >> 8,arg1));
    if (extraout_RAX == 0) {
        uVar1 = 0xf;
    }
    else {
        *(extraout_RAX + 0x38) = arg2;
        *(extraout_RAX + 0x39) = arg3;
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.000235b8 @ 0x235b8 */

uint fcn.000235b8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uchar uVar2;
    uint uVar3;
    int64_t iVar4;
    ulong uVar5;
    
    iVar4 = fcn.0002b5b0(*(*0x43c08 + 0x38) + 0x10,CONCAT71(arg2 >> 8,arg1));
    if (iVar4 == 0) {
        uVar3 = 0xf;
    }
    else {
        iVar1 = *(iVar4 + 0x30);
        fcn.0001ba7c(arg2,0,0x78);
        fcn.0001ba1c(arg2,0x11,iVar4 + 0x11,0x10);
        uVar5 = 0;
        *(arg2 + 0x18) = *(*(iVar4 + 0x30) + 0x80);
        *(arg2 + 0x28) = *(*(iVar4 + 0x30) + 0xc0);
        *(arg2 + 0x5a) = *(iVar4 + 0x39);
        *(arg2 + 0x5c) = *(iVar1 + 0x8c);
        *(arg2 + 0x2c) = *(iVar1 + 0x88);
        fcn.0001ba1c(arg2 + 0x30,0x29,iVar1 + 0x2d,0x29);
        *(arg2 + 0x60) = *(iVar1 + 0x8c) >> 4 & 1;
        if (*(iVar4 + 0x28) == 0) {
            *(arg2 + 0x59) = 0xff;
        }
        else {
            uVar2 = fcn.0002ae7c(*(iVar4 + 0x28));
            *(arg2 + 0x59) = uVar2;
        }
        fcn.00024abc(arg2,CONCAT71(uVar5 >> 8,arg1));
        fcn.000244f4(arg2);
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.0001bdfc @ 0x1bdfc */

void fcn.0001bdfc(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint in_R8;
    int16_t *piVar1;
    uint32_t uVar2;
    
    piVar1 = CONCAT44(in_R8,arg3);
    uVar2 = 0;
    if (arg2 != 0) {
        do {
            *arg1 = *piVar1;
            if (*piVar1 == 0) {
                return;
            }
            uVar2 = uVar2 + 1;
            arg1 = arg1 + 1;
            piVar1 = piVar1 + 1;
        } while (uVar2 < arg2);
    }
    return;
}


/* fcn.00021f34 @ 0x21f34 */

uint64_t fcn.00021f34(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t *arg1_00;
    int64_t iVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    uint uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint16_t uVar10;
    uint64_t uVar11;
    uint8_t *puVar12;
    uint8_t *arg2_00;
    uint8_t uVar13;
    char cVar14;
    uint8_t *puVar15;
    char cVar16;
    char cVar17;
    char cStack_58;
    
    uVar13 = arg2;
    if (arg1 == 0) {
        return 1;
    }
    cStack_58 = '\0';
    iVar7 = fcn.0001f288();
    bVar4 = false;
    uVar11 = arg2 & 0xffffffffffffff00;
    bVar2 = false;
    bVar3 = false;
    arg1_00 = *(*0x43c08 + 0x38);
    iVar1 = *(arg1_00 + arg1_00[0x30] * 8 + 0x38);
    arg1_00[0xa0] = uVar13;
    *(arg1_00 + 0xa8) = *(arg1 + 0xc);
    *(arg1_00 + 0xac) = *(arg1 + 8);
    arg1_00[0xb0] = 0;
    arg1_00[0xb1] = 0;
    arg1_00[0xb2] = 0;
    arg1_00[0xb3] = 0;
    *(arg1_00 + 0xa4) = *(arg1 + 0x10);
    if (*(arg1 + 0x10) == 0x10) {
        arg1_00[0xb0] = 0;
        arg1_00[0xb1] = 4;
        arg1_00[0xb2] = 0;
        arg1_00[0xb3] = 0;
        uVar5 = *(arg1_00 + 0xb0);
        if (*(arg1 + 0x14) != '\0') {
            uVar5 = 0xc00;
        }
        *(arg1_00 + 0xb0) = uVar5;
    }
    uVar13 = 0;
    if (*arg1_00 != 0) {
        do {
            uVar11 = CONCAT71(uVar11 >> 8,uVar13);
            iVar8 = fcn.0002b5b0(arg1_00 + 0x10,uVar11);
            if (*(iVar8 + 0x38) != '\0') {
                uVar6 = *(*(iVar8 + 0x30) + 0x8c);
                if ((uVar6 >> 0xd & 1) != 0) {
                    bVar2 = true;
                }
                if ((uVar6 >> 0xe & 1) != 0) {
                    bVar4 = true;
                }
                if ((uVar6 >> 0xf & 1) != 0) {
                    bVar3 = true;
                }
            }
            uVar13 = uVar13 + 1;
        } while (uVar13 < *arg1_00);
        if (bVar2) {
            return 0x29;
        }
        if (bVar4) {
            return 0x2c;
        }
        if (bVar3) {
            return 0x2d;
        }
    }
    puVar15 = NULL;
    cVar17 = '\0';
    cVar14 = '\0';
    puVar12 = *arg1;
    uVar10 = 0;
    uVar13 = *puVar12;
    if (uVar13 != 0) {
        do {
            uVar10 = uVar10 + 1;
            if ((((uVar13 < 0x20) || (0x7e < uVar13)) || (uVar13 == 0x5c)) || (uVar13 == 0x2e)) {
                return 7;
            }
            puVar12 = puVar12 + 1;
            uVar13 = *puVar12;
        } while (uVar13 != 0);
        if (uVar10 != 0) {
            if (0x10 < uVar10) {
                return 5;
            }
            arg2_00 = *arg1;
            puVar12 = iVar1 + 0x10;
            fcn.0001bbd0(puVar12,arg2_00,0x10);
            uVar13 = 0;
            *(iVar1 + 0x20) = 0;
            cVar16 = cVar17;
            if (*arg1_00 != 0) {
                cStack_58 = '\0';
                do {
                    arg2_00 = CONCAT71(arg2_00 >> 8,uVar13);
                    puVar12 = arg1_00 + 0x10;
                    iVar8 = fcn.0002b5b0(puVar12,arg2_00);
                    if (*(iVar8 + 0x38) != '\0') {
                        arg2_00 = puVar15 + 1U & 0xff;
                        if ((*(*(iVar8 + 0x30) + 0x8c) >> 7 & 1) == 0) {
                            arg2_00 = puVar15;
                        }
                        puVar12 = puVar15;
                        puVar15 = arg2_00;
                        if (*(iVar8 + 0x39) == '\x01') {
                            cStack_58 = cStack_58 + '\x01';
                        }
                        else if (*(iVar8 + 0x39) == '\x02') {
                            cVar16 = cVar16 + '\x01';
                        }
                        else {
                            cVar17 = cVar17 + '\x01';
                        }
                    }
                    cVar14 = puVar15;
                    uVar13 = uVar13 + 1;
                } while (uVar13 < *arg1_00);
                if ((cVar14 != '\0') && (cVar14 != cVar17)) {
                    return 0x27;
                }
            }
            if ((((*(iVar7 + 0x22) & 0x10000) != 0) && (cVar14 != '\0')) && (*(arg1 + 0x10) != 0x20)) {
                return 0x2b;
            }
            if ((((*(iVar7 + 0x22) & 0x20000) != 0) && (cVar17 != '\0')) && (cVar14 == '\0')) {
                return 0x2a;
            }
            uVar11 = *(arg1 + 0x10);
            if (*(arg1 + 0x10) == 0x10) {
                if (cVar17 == '\0') {
                    if (cStack_58 != '\x01') {
                        if (cVar16 == '\x01') {
                            return 0x1d;
                        }
                        return 0x1f;
                    }
                    if (cVar16 != '\x01') {
                        return 0x1e;
                    }
                    cVar17 = '\x02';
code_r0x0002225f:
                    uVar9 = fcn.00024100(CONCAT71(puVar12 >> 8,cVar17),uVar11);
                    if (uVar9 != 0) {
                        return uVar9;
                    }
                    iVar7 = CONCAT71(uVar11 >> 8,arg3);
                    uVar6 = fcn.0002db5c(arg1_00,iVar7);
                    *(arg1 + 8) = *(arg1_00 + 0xac);
                    if ((cVar14 == cVar17) && (*(arg1 + 0x10) == 1)) {
                        *(iVar1 + 0x34) = 0;
                    }
                    if (((*(arg1 + 0x15) != '\0') || (0x65 < *(arg1 + 8))) && (*(arg1 + 8) != 0)) {
                        if ((uVar6 == 0) && (arg3 == '\x01')) {
                            fcn.0002d610(arg1_00,CONCAT71(iVar7 >> 8,arg4));
                        }
                        return uVar6;
                    }
                    return 0x26;
                }
            }
            else if ((cStack_58 == '\0') && (cVar16 == '\0')) goto code_r0x0002225f;
            return 1;
        }
    }
    return 4;
}


/* fcn.00027094 @ 0x27094 */

char * fcn.00027094(uint32_t arg1)

{
    if (0x2e < arg1) {
        return "Invalid error code";
    }
    return *(arg1 * 8 + 0x42c50);
}


/* fcn.0001bd54 @ 0x1bd54 */

void fcn.0001bd54(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint in_R8;
    uint8_t *puVar1;
    uint32_t uVar2;
    
    puVar1 = CONCAT44(in_R8,arg3);
    uVar2 = 0;
    if (arg2 != 0) {
        do {
            *arg1 = *puVar1;
            if (*puVar1 == 0) {
                return;
            }
            uVar2 = uVar2 + 1;
            arg1 = arg1 + 2;
            puVar1 = puVar1 + 1;
        } while (uVar2 < arg2);
    }
    return;
}


/* fcn.00012f50 @ 0x12f50 */

int16_t fcn.00012f50(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    char *arg1_00;
    int16_t iVar2;
    char *pcVar3;
    int64_t iVar4;
    char *pcVar5;
    int64_t iVar6;
    int16_t aiStackX_10 [4];
    
    aiStackX_10[0] = arg2;
    if ((*0x36e74 & 1) != 0) {
        if (arg1 == 0) {
            fcn.00010374(0x39080,0x40,0x38f48);
        }
        if (((*0x36e74 & 1) != 0) && (arg3 == 0)) {
            fcn.00010374(0x39080,0x41,0x38910);
        }
    }
    if (arg4 == 0) {
        pcVar3 = fcn.00013290(arg1);
    }
    else {
        iVar6 = arg4;
        iVar4 = fcn.00011c08(arg4);
        pcVar3 = fcn.00012440(iVar6,iVar4 + 1,arg4);
    }
    if (pcVar3 == NULL) {
        iVar2 = 0;
    }
    else {
        iVar6 = -0x7ffffffffffffffe;
        cVar1 = *pcVar3;
        arg1_00 = pcVar3;
        while (cVar1 != '\0') {
            pcVar5 = arg1_00;
            if (*arg1_00 != '\0') {
                do {
                    if (*pcVar5 == ';') break;
                    pcVar5 = pcVar5 + 1;
                } while (*pcVar5 != '\0');
                if (*pcVar5 != '\0') {
                    *pcVar5 = '\0';
                    pcVar5 = pcVar5 + 1;
                }
            }
            if (arg4 == 0) {
                iVar4 = fcn.00011c08(0x390cc);
                iVar4 = fcn.00011c94(arg1_00,0x390cc,iVar4);
                if (iVar4 != 0) goto code_r0x0001305a;
            }
            else {
code_r0x0001305a:
                if (aiStackX_10[0] == 0) {
                    iVar6 = (***0x4af50)(*0x4af50,arg1,aiStackX_10,arg1_00,0,arg3,0);
                }
                else {
                    iVar6 = (*(*0x4af50)[2])(*0x4af50,arg1,aiStackX_10[0],arg1_00,arg3,0);
                }
                if (iVar6 < 0) break;
            }
            arg1_00 = pcVar5;
            cVar1 = *pcVar5;
        }
        fcn.000124cc(pcVar3);
        iVar2 = 0;
        if (-1 < iVar6) {
            iVar2 = aiStackX_10[0];
        }
    }
    return iVar2;
}


/* fcn.00012d48 @ 0x12d48 */

bool fcn.00012d48(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iStackX_18;
    uchar auStack_18 [16];
    
    iStackX_18 = arg3;
    iVar1 = fcn.00012c48(arg1,arg2,0);
    if (iVar1 != 0) {
        iVar2 = fcn.00011b48(0x39000);
        iVar3 = fcn.00011b48(iVar1);
        iVar2 = iVar2 * 2 + iVar3 * 2;
        iVar3 = fcn.00012418(iVar2 + 4);
        fcn.000104c0(iVar3,iVar2 + 4,0x38fa0,0x39000);
        fcn.000124cc(iVar1);
        if (iVar3 != 0) {
            iVar1 = (**(*0x4af40 + 0x20))(*0x4af40,iVar3,arg4,&iStackX_18,auStack_18);
            fcn.000124cc(iVar3);
            return -1 < iVar1;
        }
    }
    return false;
}


/* fcn.0001534c @ 0x1534c */

uint32_t fcn.0001534c(int64_t arg1,int64_t arg2)

{
    ushort uVar1;
    uint32_t uVar2;
    uint uVar3;
    uint32_t uVar4;
    uint64_t arg1_00;
    int64_t arg2_00;
    char cVar5;
    uint64_t uVar6;
    ulong uVar7;
    ulong in_R9;
    uint8_t uVar8;
    uchar *puStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    uchar auStack_c0 [16];
    uchar uStack_b0;
    uchar auStack_a8 [89];
    uint8_t uStack_4f;
    
    puStack_d8 = NULL;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uVar8 = 0xff;
    uVar2 = fcn.00023360();
    uVar6 = 0;
    for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
        cVar5 = uVar6;
        if ((uVar2 & 1) != 0) {
            uVar4 = *(uVar6 + 0x4370d) - 1;
            arg1_00 = uVar4;
            if (uVar4 == 0) {
                arg2_00 = 0;
code_r0x000153bb:
                arg1_00 = CONCAT31(uVar4 >> 8,cVar5);
                fcn.0002554c(arg1_00,arg2_00,0);
            }
            else if (uVar4 == 1) {
                arg2_00 = 0x43701;
                goto code_r0x000153bb;
            }
            if ((uVar8 == 0xff) && (*(uVar6 + 0x4370d) != '\x01')) {
                fcn.000235b8(CONCAT71(arg1_00 >> 8,cVar5),auStack_a8);
                uVar8 = uStack_4f;
            }
        }
        uVar6 = cVar5 + 1;
    }
    uVar7 = 0x436e1;
    fcn.0001bdfc(auStack_c0,0x10,0x436e1);
    uStack_b0 = 0;
    fcn.0001bc04(auStack_c0);
    puStack_d8 = auStack_c0;
    uStack_c8 = CONCAT44(uStack_c8._4_4_,*0x43703);
    if (*0x4372f < 0x81) {
        if (*0x4372f == 0x80) {
            uVar1 = 0x100;
        }
        else if (*0x4372f == 1) {
            uVar1 = 2;
        }
        else if (*0x4372f == 2) {
            uVar1 = 4;
        }
        else if (*0x4372f == 4) {
            uVar1 = 8;
        }
        else {
            if (*0x4372f == 8) {
                uStack_d0 = CONCAT26(uStack_d0._6_2_,0x1000000000);
                goto code_r0x000154dc;
            }
            if (*0x4372f == 0x10) {
                uVar1 = 0x20;
            }
            else {
                if (*0x4372f != 0x20) {
                    if (*0x4372f == 0x40) {
                        uStack_d0 = CONCAT26(uStack_d0._6_2_,0x8000000000);
                        goto code_r0x000154dc;
                    }
                    goto code_r0x000154cc;
                }
                uVar1 = 0x40;
            }
        }
    }
    else {
        uVar1 = 0x200;
        if ((((*0x4372f != 0x100) && (uVar1 = 0x400, *0x4372f != 0x200)) && (uVar1 = 0x800, *0x4372f != 0x400)) &&
           (((uVar1 = 0x1000, *0x4372f != 0x800 && (uVar1 = 0x2000, *0x4372f != 0x1000)) &&
            (uVar1 = 0x4000, *0x4372f != 0x2000)))) {
            if (*0x4372f != 0x4000) {
code_r0x000154cc:
                uStack_d0 = uStack_d0._6_2_ << 0x30;
                goto code_r0x000154dc;
            }
            uVar1 = 0x8000;
        }
    }
    uStack_d0._4_4_ = CONCAT22(uStack_d0._6_2_,uVar1);
code_r0x000154dc:
    uVar3 = *0x43731;
    if (arg2 != '\0') {
        uVar3 = 0xffffffff;
    }
    uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar3);
    uVar2 = fcn.00021f34(&puStack_d8,uVar8,CONCAT71(uVar7 >> 8,arg1 == '\0'),CONCAT71(in_R9 >> 8,1));
    uVar4 = fcn.00027094(uVar2);
    fcn.0001bd54(0x435b0,0x96,uVar4);
    fcn.00012f50(*0x43590,0x13b,0x435b0,0);
    if (uVar2 == 0) {
        *0x43731 = uStack_d0;
    }
    return uVar2;
}


/* fcn.00022ea0 @ 0x22ea0 */

ushort fcn.00022ea0(int64_t arg1,int64_t arg2)

{
    char cVar1;
    ushort uVar2;
    int64_t iVar3;
    int64_t arg1_00;
    
    iVar3 = fcn.0001f288();
    cVar1 = fcn.000291bc(3);
    arg1_00 = 0x2000001;
    if (((cVar1 == '\0') || ((*(iVar3 + 0x1a) & 0x1000000) == 0)) && ((*(iVar3 + 0x1a) & 0x2000001) == 0x2000001)) {
        arg1_00 = 0;
    }
    fcn.00028d84(arg1_00);
    uVar2 = fcn.00022f10(CONCAT71(arg1_00 >> 8,arg1),arg2);
    fcn.00028bbc();
    return uVar2;
}


/* fcn.00015e78 @ 0x15e78 */

void fcn.00015e78(uint32_t arg1)

{
    int64_t arg4;
    uint32_t arg1_00;
    uint32_t arg3;
    int16_t iStackX_8;
    int16_t iStackX_a;
    
    if (arg1 == 1) {
        fcn.00012d48(0x36498,0x36578,0x89,0x436e0);
        arg1_00 = fcn.0001534c(0,0);
        if (arg1_00 != 0) {
            do {
                arg3 = fcn.00027094(arg1_00);
                fcn.0001bd54(0x435b0,0x96,arg3);
                arg4 = fcn.000130e0(*0x43590,0x13e,0);
                fcn.000125d8(0x17,&iStackX_8,0x365b4,arg4);
                if (iStackX_8 == 0x17) break;
            } while (iStackX_a != 0xd);
        }
        fcn.00016e30();
    }
    return;
}


/* fcn.00022d80 @ 0x22d80 */

uchar fcn.00022d80(int64_t arg1)

{
    char cVar1;
    int64_t extraout_RAX;
    unkbyte7 in_RDX;
    uchar uVar2;
    
    fcn.0002b5b0(*(*0x43c08 + 0x38) + 0x10,CONCAT71(in_RDX,arg1));
    uVar2 = 0;
    if (*(extraout_RAX + 0x30) != 0) {
        cVar1 = fcn.0002186c(*(extraout_RAX + 0x30));
        if (cVar1 != '\0') {
            uVar2 = 1;
        }
    }
    return uVar2;
}


/* fcn.0002b5b0 @ 0x2b5b0 */

void fcn.0002b5b0(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    char cVar2;
    
    puVar1 = *arg1;
    for (cVar2 = arg2; (puVar1 != NULL && (cVar2 != '\0')); cVar2 = cVar2 + -1) {
        puVar1 = *puVar1;
    }
    return;
}


/* fcn.0002186c @ 0x2186c */

bool fcn.0002186c(int64_t arg1)

{
    ulong uStack_3c28;
    uchar *puStack_3c20;
    uint uStack_3c14;
    int16_t iStack_3c10;
    uchar uStack_3c0c;
    uchar auStack_3c08 [15360];
    
    fcn.0001ba7c(auStack_3c08,0,0x3c00);
    fcn.0001ba7c(&uStack_3c28,0,0x20);
    puStack_3c20 = auStack_3c08;
    uStack_3c14 = 0x3c00;
    uStack_3c0c = 0x2a;
    uStack_3c28 = 0;
    (***arg1)(arg1,&uStack_3c28);
    return iStack_3c10 == 0;
}


/* fcn.00024de0 @ 0x24de0 */

uint fcn.00024de0(int64_t arg1)

{
    uint32_t uVar1;
    int64_t *arg1_00;
    int64_t iVar2;
    char cVar3;
    int64_t arg1_01;
    ulong in_RDX;
    
    arg1_01 = fcn.0002b5b0(*(*0x43c08 + 0x38) + 0x10,CONCAT71(in_RDX >> 8,arg1));
    if (arg1_01 != 0) {
        fcn.00025280(arg1_01);
        uVar1 = *(*(arg1_01 + 0x30) + 0xc0);
        if (((uVar1 >> 4 & 1) != 0) && ((uVar1 >> 6 & 1) == 0)) {
            if (*(arg1_01 + 0x28) != 0) {
                arg1_00 = *(*(arg1_01 + 0x28) + 0x58);
                cVar3 = fcn.0002cc80(arg1_00);
                if (cVar3 != '\0') {
                    fcn.0002d15c(*(*0x43c08 + 0x38),0,*(arg1_01 + 0x30));
                }
                cVar3 = fcn.00025aa4(*0x429d0,*arg1_00);
                if ((cVar3 != '\0') || (cVar3 = fcn.0002cba0(arg1_00), cVar3 != '\0')) {
                    fcn.000287ec(*0x43c08);
                }
            }
            iVar2 = *(arg1_01 + 0x30);
            if (*(iVar2 + 0xc0) != 0) {
                *(iVar2 + 0xc0) = 0;
                fcn.000277c4(iVar2);
            }
            iVar2 = *(arg1_01 + 0x30);
            if ((*(iVar2 + 0xc0) & 0x110) != 0x110) {
                *(iVar2 + 0xc0) = *(iVar2 + 0xc0) | 0x110;
                fcn.000277c4(iVar2);
            }
            (****(arg1_01 + 0x40))(*(arg1_01 + 0x40),1);
        }
        return 0;
    }
    return 0xf;
}


/* fcn.000228ac @ 0x228ac */

//WARNING: Variable defined which should be unmapped: var_fh

int fcn.000228ac(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    int64_t iVar2;
    uint64_t uVar3;
    char cVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint8_t uVar11;
    uint32_t uVar12;
    uint8_t uVar13;
    int iVar14;
    int32_t var_fh;
    
    iVar14 = 0;
    iVar10 = *(*0x43c08 + 0x38);
    iVar6 = fcn.0002b5b0(iVar10 + 0x10,arg2);
    if (iVar6 == 0) {
        return 0xf;
    }
    iVar9 = *(iVar6 + 0x30);
    if (((*(iVar9 + 0xc0) & 0x41) != 0) && ((*(iVar9 + 0xc0) >> 9 & 1) == 0)) {
        if (*(iVar10 + 0x30) <= arg1) {
            return 0xe;
        }
        iVar10 = *(iVar10 + 0x38 + (arg1 & 0xffU) * 8);
        if ((*(*(*(iVar10 + 0x38) + 0x28) + 0xc) & 0x21) != 0) {
            return 0x14;
        }
        if ((*(iVar10 + 0x4c) == '\0') || ((*(iVar9 + 0x8c) >> 4 & 1) == 0)) {
            iVar2 = *(iVar10 + 8);
            uVar3 = *(iVar9 + 0x80);
            iVar9 = iVar2;
            uVar7 = fcn.0002add4(iVar2);
            if (uVar3 < uVar7) {
                return 0xd;
            }
            uVar13 = 0;
            if (*(iVar2 + 0x14) != '\0') {
                do {
                    iVar8 = *(iVar2 + 0x18 + uVar13 * 8);
                    iVar9 = iVar8 + 0x11;
                    cVar4 = fcn.0002134c(iVar9);
                    if (cVar4 == '\0') {
                        uVar12 = *(*(iVar8 + 0x30) + 0x8c);
                        uVar11 = uVar12 >> 7 ^ *(*(iVar6 + 0x30) + 0x8c) >> 7;
                        arg2 = CONCAT31(uVar12 >> 0xf,uVar11);
                        if ((uVar11 & 1) != 0) {
                            return 0x27;
                        }
                        iVar9 = 0x100;
                        cVar4 = fcn.000291a0(0x100);
                        if ((cVar4 != '\0') && (iVar9 = *(*(iVar10 + 0x38) + 0x28), *(iVar9 + 0xc) != 0x10)) {
                            iVar9 = *(iVar8 + 0x30);
                            uVar12 = *(iVar9 + 0x8c) ^ *(*(iVar6 + 0x30) + 0x8c);
                            arg2 = uVar12;
                            if ((uVar12 & 8) != 0) {
                                return 0x15;
                            }
                        }
                    }
                    uVar13 = uVar13 + 1;
                } while (uVar13 < *(iVar2 + 0x14));
            }
            uVar13 = 0;
            if (*(iVar2 + 0x50) != '\0') {
                do {
                    iVar10 = *(**(iVar2 + 0x58 + uVar13 * 8) + 0xd8);
                    iVar9 = *(iVar10 + 0x10);
                    if ((*(iVar9 + 8) == 2) || ((*(iVar9 + 0x28) & 0x21) != 0)) {
                        iVar8 = fcn.0002a2ec(iVar9);
                        if (iVar8 == 0) {
                            iVar14 = 0x14;
                            break;
                        }
                        if (arg3 == '\0') {
                            iVar9 = *(iVar6 + 0x30);
                            if ((*(iVar9 + 0xc0) & 0x40) != 0) {
                                *(iVar9 + 0xc0) = *(iVar9 + 0xc0) & 0xffffffbf;
                                fcn.000277c4(iVar9);
                            }
                            iVar9 = *(iVar6 + 0x30);
                            if ((*(iVar9 + 0xc0) & 1) == 0) {
                                *(iVar9 + 0xc0) = *(iVar9 + 0xc0) | 1;
                                fcn.000277c4(iVar9);
                            }
                            arg2 = *(iVar6 + 0x30);
                            fcn.0002bbbc(iVar10,arg2);
                            iVar9 = iVar10;
                        }
                    }
                    else {
                        iVar14 = 0x14;
                    }
                    uVar13 = uVar13 + 1;
                } while (uVar13 < *(iVar2 + 0x50));
            }
            if ((arg3 == '\0') && (iVar14 == 0)) {
                iVar10 = *(iVar2 + 0x68);
                iVar5 = fcn.0001bce4(iVar9,arg2);
                piVar1 = iVar10 + 0x18;
                *piVar1 = *piVar1 + iVar5;
                (****(iVar2 + 0x68))(*(iVar2 + 0x68),1);
            }
            return iVar14;
        }
    }
    return 0x10;
}


/* fcn.00016e30 @ 0x16e30 */

void fcn.00016e30(void)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint64_t arg1;
    uint32_t uVar3;
    ulong uVar4;
    uchar *puVar5;
    char *in_R9;
    char cVar6;
    uchar auStack_1b8 [16];
    uchar auStack_1a8 [24];
    uchar auStack_190 [40];
    uchar auStack_168 [144];
    uchar auStack_d8 [24];
    int64_t iStack_c0;
    uint32_t uStack_7c;
    uint32_t uStack_78;
    int64_t aiStack_58 [5];
    ulong uStack_30;
    
    uStack_30 = 0x16e3b;
    fcn.00018be0(0);
    uStack_30 = 0x16e47;
    fcn.00016ea0(0x436e0);
    uStack_30 = 0x16e4c;
    fcn.00016e70();
    fcn.00016ea0(0x436e0);
    uVar4 = 0;
    fcn.0001ba7c(&stack0xfffffffffffffe98,0,0x82);
    if (*0x4375c != '\0') {
        fcn.00023974(&stack0xffffffffffffffa8);
        fcn.0001c5f4(&stack0xfffffffffffffe48,aiStack_58[0],CONCAT71(uVar4 >> 8,1),in_R9);
        in_R9 = "Intel Optane";
        fcn.0001c0b4(&stack0xfffffffffffffe98,0x82,0x36530,0x36520);
        fcn.00016f88(0x37,&stack0xfffffffffffffe98);
    }
    if (*0x43763 != 0) {
        in_R9 = "Incomplete Optane Volume";
        fcn.0001c0b4(&stack0xfffffffffffffe98,0x82,0x36554,0x36538);
        fcn.00016f88(0x37,&stack0xfffffffffffffe98);
    }
    arg1 = *0x4375f;
    if (*0x4375f != 0) {
        fcn.00017314(arg1);
    }
    if (*0x43763 != 0) {
        arg1 = *0x43763;
        fcn.00017314(arg1);
    }
    if (*0x43749 != 0) {
        cVar6 = '\0';
        uVar3 = *0x43749;
        do {
            if ((uVar3 & 1) != 0) {
                fcn.00023d7c(CONCAT71(arg1 >> 8,cVar6),&stack0xffffffffffffff28);
                fcn.0001ba7c(&stack0xfffffffffffffe70,0,0x22);
                fcn.0001ba7c(&stack0xfffffffffffffe58,0,0x16);
                fcn.0001ba7c(&stack0xfffffffffffffe48,0,0xb);
                puVar5 = &stack0xffffffffffffff28;
                fcn.0001bd54(&stack0xfffffffffffffe70,0x11,puVar5);
                fcn.0001c5f4(&stack0xfffffffffffffe48,iStack_c0,CONCAT71(puVar5 >> 8,1),in_R9);
                fcn.0001bd54(&stack0xfffffffffffffe58,0xb,&stack0xfffffffffffffe48);
                uVar1 = fcn.000159fc(uStack_78);
                uVar2 = fcn.000159fc(uStack_7c);
                fcn.000130e0(*0x43590,uVar2,0);
                fcn.000130e0(*0x43590,uVar1,0);
                fcn.000104c0(&stack0xfffffffffffffe98,0x82,0x36558,&stack0xfffffffffffffe70);
                if (cVar6 == '\0') {
                    uVar1 = 0x39;
                }
                else if (cVar6 == '\x01') {
                    uVar1 = 0x3a;
                }
                else if (cVar6 == '\x02') {
                    uVar1 = 0x3b;
                }
                else if (cVar6 == '\x03') {
                    uVar1 = 0x3c;
                }
                else {
                    uVar1 = 0;
                }
                in_R9 = NULL;
                arg1 = *0x43590;
                fcn.00012f50(*0x43590,uVar1,&stack0xfffffffffffffe98,0);
            }
            cVar6 = cVar6 + '\x01';
            uVar3 = uVar3 >> 1;
        } while (uVar3 != 0);
    }
    if (*0x4373d != 0) {
        fcn.00017314(*0x4373d);
    }
    fcn.00016e70();
    return;
}


/* fcn.00015f50 @ 0x15f50 */

void fcn.00015f50(uint32_t arg1)

{
    uchar uVar1;
    uint32_t uVar2;
    int16_t iVar3;
    uint in_register_0000000c;
    int64_t arg1_00;
    unkbyte7 Var5;
    ulong uVar4;
    uchar *arg2;
    uchar auStackX_8 [8];
    uchar auStack_88 [59];
    uchar auStack_4d [69];
    
    iVar3 = arg1;
    if (iVar3 == 6) {
        fcn.0001682c();
    }
    else if (iVar3 == 5) {
        fcn.00017020(0x170,0x172);
        fcn.00016e70();
    }
    else {
        arg1_00 = CONCAT71(CONCAT44(in_register_0000000c,arg1) >> 8,*0x43753);
        arg2 = auStack_88;
        fcn.00023d7c(arg1_00,arg2);
        uVar1 = *0x43753;
        uVar2 = arg1 & 0xffff;
        Var5 = arg1_00 >> 8;
        if (uVar2 == 1) {
            fcn.000222fc(CONCAT71(Var5,*0x43753));
        }
        else {
            if (uVar2 < 2) {
                return;
            }
            if (uVar2 < 4) {
                uVar4 = CONCAT71(Var5,*0x43753);
                fcn.000250a8(uVar4,CONCAT71(arg2 >> 8,(iVar3 == 2) + '\x02'));
                fcn.00016e30();
                *0x43753 = uVar1;
                fcn.00016ac0(CONCAT71(uVar4 >> 8,uVar1));
                return;
            }
            arg1 = arg1 & 0xffff;
            if (arg1 == 4) {
                fcn.00025220(auStack_4d,auStackX_8);
            }
            else {
                if (arg1 == 7) {
                    fcn.00017054();
                    return;
                }
                if (arg1 != 8) {
                    return;
                }
                fcn.000244b0(CONCAT71(Var5,*0x43753));
            }
        }
        fcn.00016e30();
    }
    return;
}


/* fcn.00017148 @ 0x17148 */

void fcn.00017148(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    ulong uVar4;
    uchar *arg1_00;
    uchar *arg2;
    uchar uVar5;
    uint16_t uVar6;
    uint8_t uVar7;
    uint8_t *puVar8;
    int64_t iVar9;
    uchar auStack_98 [89];
    uchar uStack_3f;
    int iStack_30;
    
    uVar4 = 0x36498;
    uVar5 = 1;
    fcn.00012d48(0x36498,0x36578,0x89,0x436e0);
    arg2 = auStack_98;
    arg1_00 = CONCAT71(uVar4 >> 8,arg1);
    fcn.000235b8(arg1_00,arg2);
    if (iStack_30 == 2) {
        arg1_00 = CONCAT71(arg1_00 >> 8,uStack_3f);
        uVar1 = fcn.000233d4(arg1_00);
        if (*((arg1 & 0xffU) + 0x4370d) == '\x01') {
            arg1_00 = *0x43703;
            *0x4375a = 0;
            *0x43709 = fcn.000236e8(*0x43703,0);
        }
        else {
            *0x4375a = 1;
            *0x43709 = uVar1;
        }
        arg2 = NULL;
        for (; uVar1 != 0; uVar1 = uVar1 >> 1) {
            if ((uVar1 & 1) != 0) {
                arg2[0x4370d] = *((arg1 & 0xffU) + 0x4370d);
                arg1_00 = arg2;
            }
            arg2 = arg2 + 1;
        }
    }
    else if (*((arg1 & 0xffU) + 0x4370d) == '\x01') {
        arg1_00 = *0x43703;
        uVar6 = 0;
        uVar2 = fcn.000236e8(*0x43703,0);
        for (uVar1 = uVar2; arg2 = uVar1, uVar1 != 0; uVar1 = uVar1 >> 1) {
            if (((uVar1 & 1) != 0) && (arg1_00 = uVar6, arg1_00[0x4370d] != '\x01')) goto code_r0x00017298;
            uVar6 = uVar6 + 1;
        }
        *0x43709 = uVar2;
    }
    else {
        uVar1 = fcn.00023360();
        uVar2 = 0;
        for (; uVar1 != 0; uVar1 = uVar1 >> 1) {
            arg2 = auStack_98;
            arg1_00 = CONCAT71(arg1_00 >> 8,uVar2);
            iVar3 = fcn.000235b8(arg1_00,arg2);
            if ((iVar3 == 0) && (iStack_30 == 2)) {
                *0x43709 = *0x43709 & ~(1 << (uVar2 & 0x1f));
                arg1_00 = *0x43709;
            }
            uVar2 = uVar2 + 1;
        }
    }
code_r0x00017298:
    if (*0x43703 == 0x10) {
        uVar5 = 0;
        *0x43759 = 0;
        uVar7 = 0;
        puVar8 = 0x4370d;
        iVar9 = 0x20;
        do {
            if ((*puVar8 - 4 & 0xfb) == 0) {
                uVar7 = uVar7 | *puVar8;
                uVar5 = 1;
                *0x43759 = uVar7;
            }
            puVar8 = puVar8 + 1;
            iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
    }
    fcn.0001754c();
    iVar3 = fcn.0001534c(CONCAT71(arg1_00 >> 8,1),CONCAT71(arg2 >> 8,uVar5));
    *0x43736 = iVar3 == 0;
    fcn.00016e70();
    return;
}


/* fcn.0001754c @ 0x1754c */

void fcn.0001754c(ulong param_1,ulong param_2,ulong param_3)

{
    uint16_t uVar1;
    int iVar2;
    uint64_t arg1;
    uint64_t arg2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    char *pcVar6;
    unkbyte7 Var7;
    uint8_t uVar8;
    uint32_t arg1_00;
    uchar auStack_98 [92];
    uint8_t uStack_3c;
    char cStack_38;
    int iStack_2c;
    
    Var7 = param_3 >> 8;
    arg1_00 = *0x43703;
    arg1 = arg1_00;
    *0x4372d = fcn.00023534(arg1_00);
    uVar8 = 0;
    uVar5 = 0;
    pcVar6 = 0x4370d;
    uVar4 = 0;
    uVar3 = 0;
    do {
        if (*pcVar6 != '\x01') {
            arg1 = CONCAT71(arg1 >> 8,uVar3);
            iVar2 = fcn.000235b8(arg1,auStack_98);
            if ((iVar2 == 0) && (iStack_2c == 0)) {
                if ((uStack_3c & 0x80) == 0) {
                    uVar5 = uVar5 + 1;
                }
                else {
                    uVar4 = uVar4 + 1;
                }
                if (cStack_38 != '\0') {
                    uVar8 = uVar8 + 1;
                }
            }
        }
        uVar3 = uVar3 + 1;
        pcVar6 = pcVar6 + 1;
    } while (uVar3 < 0x20);
    arg2 = arg1_00;
    if (uVar4 < uVar5) {
        uVar4 = uVar5;
    }
    iVar2 = fcn.00024100(CONCAT71(arg1 >> 8,uVar4),arg2);
    if (iVar2 == 0) {
        uVar1 = fcn.00022814(*0x43703,CONCAT71(arg2 >> 8,uVar4),CONCAT71(Var7,uVar8 == uVar4));
        *0x4372f = fcn.00023b10(uVar1);
    }
    else {
        *0x4372f = 8;
    }
    return;
}


/* fcn.000236e8 @ 0x236e8 */

//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_bp_10h

uint32_t fcn.000236e8(uint32_t arg1,uint32_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint in_register_0000000c;
    int64_t iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint8_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t *puVar12;
    uint32_t uStackX_18;
    uint32_t auStackX_20 [2];
    int32_t var_77h;
    int32_t var_7fh;
    int32_t var_83h;
    int64_t iStack_e8;
    int64_t aiStack_e0 [3];
    uchar auStack_c8 [40];
    uint32_t uStack_a0;
    int iStack_9c;
    int64_t var_69h;
    int iStack_60;
    int32_t var_41h;
    uint32_t var_3dh;
    int8_t var_bp_10h;
    int32_t var_dh;
    uint32_t var_1h;
    
    iVar6 = CONCAT44(in_register_0000000c,arg1);
    uVar10 = 0;
    uVar7 = 0;
    uStackX_18 = 0;
    uVar8 = 0;
    uVar11 = 0;
    uVar2 = **(*0x43c08 + 0x38);
    if ((arg1 == 0x10) && ((*(*0x43c08 + 0x38))[0x30] != 0)) {
        uVar7 = 0;
    }
    else {
        uVar9 = 0;
        iStack_e8 = 2;
        if (uVar2 != 0) {
            do {
                iVar6 = CONCAT71(iVar6 >> 8,uVar9);
                iVar4 = fcn.000235b8(iVar6,auStack_c8);
                if (((((iVar4 != 0xf) && (iStack_9c != -1)) && ((stack0xffffffffffffff94 & 4) == 0)) &&
                    (((stack0xffffffffffffff94 & 0x40) == 0 && ((uStack_a0 & 0x200) == 0)))) &&
                   (((stack0xffffffffffffff94 >> 0xb & 1) == 0 &&
                    (((stack0xffffffffffffff94 >> 0xe & 1) == 0 && ((stack0xffffffffffffff94 >> 0xf & 1) == 0)))))) {
                    if (iStack_60 == 2) {
                        if (arg2 == '\0') {
                            iVar6 = CONCAT71(iVar6 >> 8,var_69h._2_1_);
                            fcn.0002239c(iVar6,aiStack_e0);
                            iVar6 = CONCAT71(iVar6 >> 8,var_69h._2_1_);
                            cVar1 = fcn.00024038(iVar6,arg1);
                            if (cVar1 != '\0') {
                                uVar7 = uVar7 | 1 << (uVar9 & 0x1f);
                            }
                        }
                    }
                    else if (iStack_60 == 1) {
                        iVar6 = 0;
                        uVar5 = uVar9;
                        if (stack0xffffffffffffff94 < '\0') {
                            uVar11 = uVar11 | 1 << (uVar5 & 0x1f);
                        }
                        else {
                            uVar8 = uVar8 | 1 << (uVar5 & 0x1f);
                        }
                        if ((stack0xffffffffffffff94 & 8) != 0) {
                            uVar10 = uVar10 | 1 << (uVar5 & 0x1f);
                        }
                    }
                }
                uVar9 = uVar9 + 1;
            } while (uVar9 < uVar2);
            uStackX_18 = uVar10;
        }
        auStackX_20[0] = uVar8;
        auStackX_20[1] = uVar11;
        uVar2 = fcn.00024420(arg1);
        aiStack_e0[0] = fcn.0001f288();
        puVar12 = auStackX_20;
        do {
            uVar8 = *puVar12;
            uVar9 = fcn.0001cab4(uVar8 & ~uStackX_18);
            uVar3 = fcn.0001cab4(uVar8 & uStackX_18);
            if (uVar2 <= uVar9) {
                uVar7 = uVar7 | uVar8 & ~uStackX_18;
            }
            if (uVar2 <= uVar3) {
                uVar7 = uVar7 | uVar8 & uStackX_18;
            }
            if ((uVar2 <= uVar3 + uVar9) && ((arg1 == 0x10 || ((*(aiStack_e0[0] + 0x1e) & 1) == 0)))) {
                uVar7 = uVar7 | uVar8;
            }
            puVar12 = puVar12 + 1;
            iStack_e8 = iStack_e8 + -1;
        } while (iStack_e8 != 0);
    }
    return uVar7;
}


/* fcn.00016030 @ 0x16030 */

void fcn.00016030(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t arg2_00;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    
    uVar1 = arg2;
    uVar5 = arg1 & 0xffff;
    arg2_00 = 8;
    if (uVar5 == 1) {
        if (uVar1 == 1) {
            arg2_00 = 0x82;
            uVar4 = 0x83;
            uVar2 = 0x84;
            uVar3 = 0x85;
        }
        else if (uVar1 == 2) {
            arg2_00 = 0x86;
            uVar4 = 0x87;
            uVar2 = 0x88;
            uVar3 = 0x89;
        }
        else if (uVar1 == 3) {
            arg2_00 = 0x8a;
            uVar4 = 0x8b;
            uVar2 = 0x8c;
            uVar3 = 0x8d;
        }
        else if (uVar1 == 4) {
            arg2_00 = 0x92;
            uVar4 = 0x93;
            uVar2 = 0x95;
            uVar3 = 0x96;
        }
        else {
            uVar4 = 8;
            uVar2 = 8;
            uVar3 = 8;
            if (uVar1 == 8) {
                arg2_00 = 0x8e;
                uVar4 = 0x8f;
                uVar2 = 0x90;
                uVar3 = 0x91;
            }
        }
    }
    else {
        uVar4 = 8;
        uVar2 = 8;
        uVar3 = 8;
        if ((uVar5 == 3) && (uVar1 != 0)) {
            if (uVar1 < 3) {
                arg2_00 = 0xdd;
                uVar4 = 0xe0;
                uVar2 = 0xe4;
                uVar3 = 0xdc;
            }
            else {
                uVar4 = 8;
                uVar2 = 8;
                uVar3 = 8;
                if (uVar1 < 5) {
                    arg2_00 = 0xdf;
                    *0x43767 = uVar1 != 3;
                    uVar4 = 0xe1;
                    uVar2 = 0xe4;
                    uVar3 = 0xde;
                }
            }
        }
    }
    fcn.00017020(0x61,arg2_00);
    fcn.00017020(0x62,uVar4);
    fcn.00017020(99,uVar2);
    fcn.00017020(0x65,uVar3);
    fcn.00012e18(0x36498,0x36578,0x89,0x436e0);
    return;
}


/* fcn.00016ac0 @ 0x16ac0 */

void fcn.00016ac0(int64_t arg1)

{
    uchar uVar1;
    char cVar2;
    uint16_t uVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    uint32_t uVar7;
    ulong uVar8;
    uint64_t uVar9;
    int64_t in_R9;
    uchar auStack_f8 [24];
    int64_t iStack_e0;
    uchar uStack_c8;
    char cStack_b0;
    char cStack_a0;
    uint32_t uStack_9c;
    uint32_t uStack_98;
    uint32_t uStack_94;
    uint32_t uStack_90;
    uint32_t uStack_8c;
    uint uStack_88;
    uchar auStack_78 [112];
    
    uVar1 = arg1;
    iVar4 = fcn.00023d7c(arg1,auStack_f8);
    if (iVar4 == 0xe) {
        return;
    }
    *0x43737 = uStack_88;
    *0x43753 = uVar1;
    cVar2 = fcn.00024098(CONCAT71(arg1 >> 8,uStack_c8));
    if (cVar2 != '\0') {
        iVar6 = fcn.00023894();
        *0x43768 = 1;
        if (iVar6 == 0) goto code_r0x00016b2b;
    }
    *0x43768 = 0;
code_r0x00016b2b:
    fcn.00016f88(0x9b,auStack_f8);
    uVar3 = fcn.000159fc(uStack_98);
    fcn.00017020(0x9e,uVar3);
    uVar8 = 0;
    fcn.0001ba7c(auStack_78,0,100);
    fcn.0001c5f4(auStack_78,iStack_e0,CONCAT71(uVar8 >> 8,1),in_R9);
    fcn.00016f88(0xa3,auStack_78);
    uVar3 = fcn.000159fc(uStack_9c);
    uVar9 = uVar3;
    fcn.00017020(0xa6,uVar9);
    fcn.00017020(0xa9,CONCAT62(uVar9 >> 0x10,10 - (cStack_a0 != '\0')));
    if (cStack_b0 != '\0') {
        uVar3 = fcn.000159fc(uStack_90);
        fcn.00017020(0xac,uVar3);
        uVar3 = fcn.000159fc(uStack_8c);
        fcn.00017020(0xb4,uVar3);
    }
    uVar3 = fcn.000159fc(uStack_94);
    uVar8 = 0;
    fcn.00017020(0xa0,uVar3);
    uVar5 = fcn.00023cb8(CONCAT71(uVar8 >> 8,uVar1));
    *0x43745 = uVar5;
    if (uVar5 != 0) {
        uVar9 = 0;
        do {
            cVar2 = uVar9;
            if ((uVar5 & 1) != 0) {
                uVar7 = uVar9;
                if (uVar7 < 0x11) {
                    if (uVar7 == 0x10) {
                        uVar3 = 0xc9;
                    }
                    else if (uVar7 < 9) {
                        if (uVar7 == 8) {
                            uVar3 = 0xc1;
                        }
                        else if (cVar2 == '\0') {
                            uVar3 = 0xb9;
                        }
                        else if (uVar7 == 1) {
                            uVar3 = 0xba;
                            uVar9 = 0;
                        }
                        else if (uVar7 == 2) {
                            uVar3 = 0xbb;
                            uVar9 = 0;
                        }
                        else if (uVar7 == 3) {
                            uVar3 = 0xbc;
                            uVar9 = 0;
                        }
                        else if (uVar7 == 4) {
                            uVar3 = 0xbd;
                            uVar9 = 0;
                        }
                        else if (uVar7 == 5) {
                            uVar3 = 0xbe;
                            uVar9 = 0;
                        }
                        else {
                            uVar7 = uVar7 - 6;
                            uVar9 = uVar7;
                            if (uVar7 == 0) {
                                uVar3 = 0xbf;
                            }
                            else {
                                if (uVar7 != 1) goto code_r0x00016dba;
                                uVar3 = 0xc0;
                            }
                        }
                    }
                    else if (uVar7 == 9) {
                        uVar3 = 0xc2;
                        uVar9 = 0;
                    }
                    else if (uVar7 == 10) {
                        uVar3 = 0xc3;
                        uVar9 = 0;
                    }
                    else if (uVar7 == 0xb) {
                        uVar3 = 0xc4;
                        uVar9 = 0;
                    }
                    else if (uVar7 == 0xc) {
                        uVar3 = 0xc5;
                        uVar9 = 0;
                    }
                    else if (uVar7 == 0xd) {
                        uVar3 = 0xc6;
                        uVar9 = 0;
                    }
                    else {
                        uVar7 = uVar7 - 0xe;
                        uVar9 = uVar7;
                        if (uVar7 == 0) {
                            uVar3 = 199;
                        }
                        else {
                            if (uVar7 != 1) goto code_r0x00016dba;
                            uVar3 = 200;
                        }
                    }
                }
                else if (uVar7 < 0x19) {
                    if (uVar7 == 0x18) {
                        uVar3 = 0xd1;
                    }
                    else if (uVar7 == 0x11) {
                        uVar3 = 0xca;
                        uVar9 = 0;
                    }
                    else if (uVar7 == 0x12) {
                        uVar3 = 0xcb;
                        uVar9 = 0;
                    }
                    else if (uVar7 == 0x13) {
                        uVar3 = 0xcc;
                        uVar9 = 0;
                    }
                    else if (uVar7 == 0x14) {
                        uVar3 = 0xcd;
                        uVar9 = 0;
                    }
                    else if (uVar7 == 0x15) {
                        uVar3 = 0xce;
                        uVar9 = 0;
                    }
                    else {
                        uVar7 = uVar7 - 0x16;
                        uVar9 = uVar7;
                        if (uVar7 == 0) {
                            uVar3 = 0xcf;
                        }
                        else {
                            if (uVar7 != 1) goto code_r0x00016dba;
                            uVar3 = 0xd0;
                        }
                    }
                }
                else if (uVar7 == 0x19) {
                    uVar3 = 0xd2;
                    uVar9 = 0;
                }
                else if (uVar7 == 0x1a) {
                    uVar3 = 0xd3;
                    uVar9 = 0;
                }
                else if (uVar7 == 0x1b) {
                    uVar3 = 0xd4;
                    uVar9 = 0;
                }
                else if (uVar7 == 0x1c) {
                    uVar3 = 0xd5;
                    uVar9 = 0;
                }
                else if (uVar7 == 0x1d) {
                    uVar3 = 0xd6;
                    uVar9 = 0;
                }
                else {
                    uVar7 = uVar7 - 0x1e;
                    uVar9 = uVar7;
                    if (uVar7 == 0) {
                        uVar3 = 0xd7;
                    }
                    else if (uVar7 == 1) {
                        uVar3 = 0xd8;
                    }
                    else {
code_r0x00016dba:
                        uVar3 = 0;
                    }
                }
                iVar6 = fcn.00015904(CONCAT71(uVar9 >> 8,cVar2));
                fcn.00016f88(uVar3,iVar6);
            }
            uVar9 = cVar2 + 1;
            uVar5 = uVar5 >> 1;
        } while (uVar5 != 0);
    }
    fcn.00016e70();
    return;
}


/* fcn.0001615c @ 0x1615c */

void fcn.0001615c(int32_t arg_20h)

{
    int iVar1;
    ushort extraout_AX;
    ushort extraout_var;
    uint extraout_var_00;
    uint32_t uVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong uVar5;
    uint8_t uVar6;
    uint32_t uVar7;
    
    *0x43705 = fcn.00023360();
    *0x43701 = fcn.00023468();
    *0x43703 = fcn.00023550();
    *0x43731 = 0;
    uVar6 = 0;
    *0x4375a = 0;
    *0x43735 = 2;
    *0x43709 = fcn.000236e8(*0x43703,0);
    fcn.0001754c();
    uVar5 = 0;
    uVar3 = 0x4370d;
    fcn.0001ba7c(0x4370d,1,0x20);
    iVar1 = fcn.0001534c(CONCAT71(uVar3 >> 8,1),CONCAT71(uVar5 >> 8,1));
    *0x43736 = iVar1 == 0;
    fcn.00016e70();
    uVar7 = *0x43705;
    do {
        if (uVar7 == 0) {
            return;
        }
        if ((uVar7 & 1) != 0) {
            uVar4 = 0;
            if (uVar6 < 0x11) {
                if (uVar6 == 0x10) {
                    uVar2 = 0x115;
                }
                else {
                    uVar2 = uVar6;
                    if (uVar2 < 9) {
                        if (uVar2 == 8) {
                            uVar2 = 0x10d;
                        }
                        else if (uVar6 == 0) {
                            uVar2 = 0x105;
                        }
                        else if (uVar2 == 1) {
                            uVar2 = 0x106;
                            uVar4 = 0;
                        }
                        else if (uVar2 == 2) {
                            uVar2 = 0x107;
                            uVar4 = 0;
                        }
                        else if (uVar2 == 3) {
                            uVar2 = 0x108;
                            uVar4 = 0;
                        }
                        else if (uVar2 == 4) {
                            uVar2 = 0x109;
                            uVar4 = 0;
                        }
                        else if (uVar2 == 5) {
                            uVar2 = 0x10a;
                            uVar4 = 0;
                        }
                        else {
                            uVar2 = uVar2 - 6;
                            uVar4 = uVar2;
                            if (uVar2 == 0) {
                                uVar2 = 0x10b;
                            }
                            else {
                                if (uVar2 != 1) goto code_r0x000163a9;
                                uVar2 = 0x10c;
                            }
                        }
                    }
                    else if (uVar2 == 9) {
                        uVar2 = 0x10e;
                        uVar4 = 0;
                    }
                    else if (uVar2 == 10) {
                        uVar2 = 0x10f;
                        uVar4 = 0;
                    }
                    else if (uVar2 == 0xb) {
                        uVar2 = 0x110;
                        uVar4 = 0;
                    }
                    else if (uVar2 == 0xc) {
                        uVar2 = 0x111;
                        uVar4 = 0;
                    }
                    else if (uVar2 == 0xd) {
                        uVar2 = 0x112;
                        uVar4 = 0;
                    }
                    else {
                        uVar2 = uVar2 - 0xe;
                        uVar4 = uVar2;
                        if (uVar2 == 0) {
                            uVar2 = 0x113;
                        }
                        else {
                            if (uVar2 != 1) goto code_r0x000163a9;
                            uVar2 = 0x114;
                        }
                    }
                }
            }
            else {
                uVar2 = uVar6;
                if (uVar6 < 0x19) {
                    if (uVar6 == 0x18) {
                        uVar2 = 0x11d;
                    }
                    else if (uVar2 == 0x11) {
                        uVar2 = 0x116;
                        uVar4 = 0;
                    }
                    else if (uVar2 == 0x12) {
                        uVar2 = 0x117;
                        uVar4 = 0;
                    }
                    else if (uVar2 == 0x13) {
                        uVar2 = 0x118;
                        uVar4 = 0;
                    }
                    else if (uVar2 == 0x14) {
                        uVar2 = 0x119;
                        uVar4 = 0;
                    }
                    else if (uVar2 == 0x15) {
                        uVar2 = 0x11a;
                        uVar4 = 0;
                    }
                    else {
                        uVar2 = uVar2 - 0x16;
                        uVar4 = uVar2;
                        if (uVar2 == 0) {
                            uVar2 = 0x11b;
                        }
                        else {
                            if (uVar2 != 1) goto code_r0x000163a9;
                            uVar2 = 0x11c;
                        }
                    }
                }
                else if (uVar2 == 0x19) {
                    uVar2 = 0x11e;
                    uVar4 = 0;
                }
                else if (uVar2 == 0x1a) {
                    uVar2 = 0x11f;
                    uVar4 = 0;
                }
                else if (uVar2 == 0x1b) {
                    uVar2 = 0x120;
                    uVar4 = 0;
                }
                else if (uVar2 == 0x1c) {
                    uVar2 = 0x121;
                    uVar4 = 0;
                }
                else if (uVar2 == 0x1d) {
                    uVar2 = 0x122;
                    uVar4 = 0;
                }
                else {
                    uVar2 = uVar2 - 0x1e;
                    uVar4 = uVar2;
                    if (uVar2 == 0) {
                        uVar2 = 0x123;
                    }
                    else if (uVar2 == 1) {
                        uVar2 = 0x124;
                    }
                    else {
code_r0x000163a9:
                        uVar2 = 0;
                    }
                }
            }
            fcn.00015904(CONCAT71(uVar4 >> 8,uVar6));
            fcn.00016f88(uVar2,CONCAT44(extraout_var_00,CONCAT22(extraout_var,extraout_AX)));
        }
        uVar6 = uVar6 + 1;
        uVar7 = uVar7 >> 1;
    } while( true );
}


/* fcn.00016410 @ 0x16410 */

void fcn.00016410(int64_t arg1)

{
    uchar uVar1;
    char cVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    int iVar5;
    int64_t iVar6;
    ulong *puVar7;
    ulong uVar8;
    int64_t in_R9;
    uchar auStack_f8 [24];
    int64_t iStack_e0;
    uint32_t uStack_cc;
    uchar auStack_c8 [41];
    uchar uStack_9f;
    uint32_t uStack_94;
    uint uStack_88;
    uchar auStack_78 [112];
    
    uVar1 = arg1;
    iVar5 = fcn.000235b8(arg1,auStack_f8);
    if (iVar5 == 0xf) {
        return;
    }
    if (uStack_cc == 0xffffffff) {
        return;
    }
    *0x4374d = uStack_88;
    *0x43754 = uVar1;
    cVar2 = fcn.00024098(CONCAT71(arg1 >> 8,uStack_9f));
    if (cVar2 != '\0') {
        iVar6 = fcn.00023894();
        *0x43768 = 1;
        if (iVar6 == 0) goto code_r0x0001647e;
    }
    *0x43768 = 0;
code_r0x0001647e:
    fcn.0001ba7c(auStack_78,0,100);
    fcn.0001c5f4(auStack_78,iStack_e0,0,in_R9);
    fcn.00016f88(0xf0,auStack_78);
    fcn.00016f88(0xed,auStack_c8);
    fcn.00016f88(0xea,auStack_f8);
    fcn.0001ba7c(auStack_78,0,100);
    fcn.00018c8c(uStack_cc);
    uVar3 = fcn.00018ce0(uStack_cc);
    fcn.0001c0b4(auStack_78,100,0x365a8,uVar3);
    fcn.00016f88(0xe7,auStack_78);
    uVar4 = fcn.000159fc(uStack_94);
    fcn.00017020(0xf3,uVar4);
    puVar7 = fcn.00019138(uStack_cc);
    iVar6 = fcn.00018d4c(uStack_cc);
    uVar8 = 0;
    fcn.00016f88(0xf6,iVar6);
    if (puVar7 != NULL) {
        iVar6 = fcn.00018d90(CONCAT71(uVar8 >> 8,**puVar7),CONCAT71(iVar6 >> 8,(*puVar7)[4]));
        fcn.00016f88(0xf9,iVar6);
    }
    fcn.00016e70();
    return;
}


/* fcn.00023974 @ 0x23974 */

ulong fcn.00023974(int64_t arg1)

{
    int64_t iVar1;
    
    if ((arg1 != 0) && (iVar1 = fcn.00023894(), iVar1 != 0)) {
        *(arg1 + 8) = *(iVar1 + 0xc0);
        *(arg1 + 0xc) = *(iVar1 + 0xc4);
        *(arg1 + 0x10) = *(iVar1 + 200);
        *arg1 = *(iVar1 + 0x80);
        fcn.0001bb50(arg1 + 0x14,0x36520);
        return 0;
    }
    return 1;
}


/* fcn.0001c5f4 @ 0x1c5f4 */

uint64_t fcn.0001c5f4(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    char *arg1_00;
    uint64_t arg2_00;
    
    uVar1 = 0;
    if (arg3 == '\x01') {
        uVar1 = 5;
    }
    uVar2 = (((arg2 >> 0xb) * 100 >> 10) + uVar1) / 10;
    if (arg1 != 0) {
        arg2_00 = (uVar2 & 0xffffffff) / 10;
        if (arg2_00 >> 10 == 0) {
            arg1_00 = "%ld.%ldGB";
        }
        else {
            arg1_00 = "%ld.%ldTB";
            arg2_00 = arg2_00 >> 10;
        }
        fcn.0001c0b4(arg1,10,arg1_00,arg2_00);
    }
    return uVar2 & 0xffffffff;
}


/* fcn.00016f88 @ 0x16f88 */

void fcn.00016f88(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int64_t arg1_00;
    
    uVar1 = fcn.0001bb80(arg2);
    uVar2 = uVar1 * 2 + 2;
    arg1_00 = fcn.0001b9e4(uVar2);
    if (arg1_00 != 0) {
        fcn.0001ba7c(arg1_00,0,uVar2);
        fcn.0001bd54(arg1_00,uVar1,arg2);
        fcn.00012f50(*0x43590,arg1 & 0xffff,arg1_00,0);
        fcn.0001b9d8(arg1_00);
    }
    return;
}


/* fcn.00016e70 @ 0x16e70 */

void fcn.00016e70(void)

{
    fcn.00012e18(0x36498,0x36578,0x89,0x436e0);
    return;
}


/* fcn.00019138 @ 0x19138 */

int64_t fcn.00019138(uint32_t arg1)

{
    int64_t iVar1;
    
    iVar1 = *0x43838;
    while( true ) {
        if (iVar1 == 0) {
            return 0;
        }
        if (*(iVar1 + 9) == arg1) break;
        iVar1 = *(iVar1 + 0x10);
    }
    return iVar1;
}


/* fcn.00018d90 @ 0x18d90 */

char * fcn.00018d90(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    
    uVar1 = arg1 & 0xff;
    if (uVar1 == 1) {
        return "SATA";
    }
    if (uVar1 != 2) {
        return "UHOH";
    }
    uVar1 = arg2 & 0xff;
    if (uVar1 == 1) {
        return 0x36864;
    }
    if (uVar1 != 2) {
        if (uVar1 != 3) {
            return "PCIe";
        }
        return 0x3686c;
    }
    return 0x36868;
}


/* fcn.0001c0b4 @ 0x1c0b4 */

void fcn.0001c0b4(int64_t noname_0,int64_t noname_1,int64_t arg1,int64_t arg2)

{
    int64_t iStackX_20;
    
    iStackX_20 = arg2;
    fcn.0001c0d4(noname_0,noname_1,arg1,&iStackX_20);
    return;
}


/* fcn.0001c0d4 @ 0x1c0d4 */

uint64_t fcn.0001c0d4(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    char cVar2;
    int16_t iVar3;
    uint8_t *puVar4;
    uint16_t uVar5;
    uint16_t uVar6;
    uint64_t uVar7;
    uint16_t uVar8;
    uint8_t uVar9;
    char *pcVar10;
    uint64_t uVar11;
    uint8_t *puVar12;
    uint in_R8;
    uint16_t uVar13;
    uint16_t uVar14;
    int64_t *piVar15;
    
    puVar12 = CONCAT44(in_R8,arg3);
    uVar11 = 0;
    if (*puVar12 != 0) {
        piVar15 = arg4 + -8;
        do {
            if (arg2 - 1U <= uVar11) break;
            if (*puVar12 == 0x25) {
                uVar6 = 0;
                uVar7 = 0;
                uVar5 = uVar6;
                uVar13 = uVar6;
                while( true ) {
                    while( true ) {
                        while( true ) {
                            while( true ) {
                                uVar14 = uVar5;
                                puVar12 = puVar12 + 1;
                                uVar9 = *puVar12;
                                uVar5 = uVar14;
                                if (uVar9 != 0x2d) break;
                                uVar7 = uVar7 | 1;
                            }
                            if (uVar9 != 0x2e) break;
                            uVar7 = uVar7 | 0x10;
                        }
                        if (uVar9 != 0x30) break;
                        uVar7 = uVar7 | 4;
                    }
                    if (uVar9 < 0x31) break;
                    if (uVar9 < 0x3a) {
                        puVar4 = puVar12;
                        uVar8 = uVar6;
                        do {
                            puVar12 = puVar4;
                            uVar1 = puVar12[1];
                            uVar8 = uVar8 * 10 + -0x30 + uVar9;
                            if (uVar1 < 0x30) break;
                            puVar4 = puVar12 + 1;
                            uVar9 = uVar1;
                        } while (uVar1 < 0x3a);
                        uVar5 = uVar8;
                        if ((uVar7 & 0x10) != 0) {
                            uVar5 = uVar14;
                            uVar13 = uVar8;
                        }
                    }
                    else {
                        if (uVar9 != 0x6c) break;
                        uVar7 = uVar7 | 2;
                    }
                }
                uVar9 = *puVar12;
                if (uVar9 == 0x25) {
                    *(uVar11 + arg1) = 0x25;
code_r0x0001c3cd:
                    uVar11 = uVar11 + 1;
                }
                else {
                    if (uVar9 == 0x52) {
                        iVar3 = piVar15[1];
                        if (iVar3 == 1) {
                            pcVar10 = "Raid0";
                        }
                        else if (iVar3 == 2) {
                            pcVar10 = "Raid1";
                        }
                        else if (iVar3 == 4) {
                            pcVar10 = "Raid5";
                        }
                        else if (iVar3 == 8) {
                            pcVar10 = "Raid10";
                        }
                        else if (iVar3 == 0x10) {
                            pcVar10 = "RaidRRT";
                        }
                        else if (iVar3 == 0x20) {
                            pcVar10 = "RaidSDR0";
                        }
                        else {
                            pcVar10 = "RaidInvalidLevel";
                        }
                        uVar7 = fcn.0001c0b4(uVar11 + arg1,arg2,0x36554,pcVar10);
                    }
                    else {
                        if (uVar9 == 0x58) {
                            uVar7 = uVar7 | 4;
                        }
                        else {
                            if (uVar9 == 99) {
                                piVar15 = piVar15 + 1;
                                *(uVar11 + arg1) = *piVar15;
                                goto code_r0x0001c3cd;
                            }
                            if (uVar9 != 100) {
                                if (uVar9 == 0x72) {
                                    uVar7 = fcn.0001be24(piVar15[1],uVar11 + arg1,arg2);
                                    goto code_r0x0001c2d9;
                                }
                                if (uVar9 == 0x73) {
                                    piVar15 = piVar15 + 1;
                                    pcVar10 = "<null string>";
                                    if (*piVar15 != 0) {
                                        pcVar10 = *piVar15;
                                    }
                                    cVar2 = *pcVar10;
                                    for (; (cVar2 != '\0' &&
                                           (((uVar6 < uVar13 || (uVar13 == 0)) && (arg2 - uVar11 != 1))));
                                        uVar11 = uVar11 + 1) {
                                        if (cVar2 == '\n') {
                                            *(uVar11 + arg1) = 0xd;
                                            uVar11 = uVar11 + 1;
                                        }
                                        cVar2 = *pcVar10;
                                        uVar6 = uVar6 + 1;
                                        pcVar10 = pcVar10 + 1;
                                        *(uVar11 + arg1) = cVar2;
                                        cVar2 = *pcVar10;
                                    }
                                    for (; (uVar6 < uVar14 && (arg2 - uVar11 != 1)); uVar11 = uVar11 + 1) {
                                        *(uVar11 + arg1) = 0x20;
                                        uVar6 = uVar6 + 1;
                                    }
                                    goto code_r0x0001c3d8;
                                }
                                if (uVar9 == 0x75) {
                                    uVar7 = uVar7 | 8;
                                }
                                else if (uVar9 != 0x78) break;
                            }
                        }
                        uVar6 = fcn.0001c40c(uVar11 + arg1,*(piVar15 + 1),uVar7,uVar14);
                        uVar7 = uVar6;
                    }
code_r0x0001c2d9:
                    piVar15 = piVar15 + 1;
                    uVar11 = uVar11 + uVar7;
                }
            }
            else {
                if (*puVar12 == 10) {
                    *(uVar11 + arg1) = 0xd;
                    uVar11 = uVar11 + 1;
                }
                *(uVar11 + arg1) = *puVar12;
                uVar11 = uVar11 + 1;
            }
code_r0x0001c3d8:
            puVar12 = puVar12 + 1;
        } while (*puVar12 != 0);
    }
    *(uVar11 + arg1) = 0;
    return uVar11;
}


/* fcn.000152f0 @ 0x152f0 */

ulong fcn.000152f0(void)

{
    char cVar1;
    
    cVar1 = fcn.0001a604(0x42560);
    if ((((cVar1 != '\0') && (cVar1 = fcn.0001a604(0x428d8), cVar1 != '\0')) &&
        (cVar1 = fcn.0001a604(0x42878), cVar1 != '\0')) && (cVar1 = fcn.0001a604(0x42828), cVar1 != '\0')) {
        return 0;
    }
    return 0x800000000000000e;
}


/* fcn.0001a35c @ 0x1a35c */

ulong fcn.0001a35c(void)

{
    return *0x43860;
}


/* fcn.0001333c @ 0x1333c */

ulong fcn.0001333c(void)

{
    int64_t iVar1;
    int64_t in_R9;
    
    iVar1 = (**(*0x4af30 + 0x140))(0x42560,0,0x4af50);
    if (((*0x36e74 & 1) != 0) && (iVar1 < 0)) {
        if (((*0x36e74 & 2) != 0) && (*0x36e80 < 0)) {
            fcn.000102a0(0x80000000,0x38db0,iVar1,in_R9);
        }
        fcn.00010374(0x39160,0x52,0x38dd8);
    }
    iVar1 = (**(*0x4af30 + 0x140))(0x428d8,0,0x4af48);
    if (((*0x36e74 & 1) != 0) && (iVar1 < 0)) {
        if (((*0x36e74 & 2) != 0) && (*0x36e80 < 0)) {
            fcn.000102a0(0x80000000,0x38db0,iVar1,in_R9);
        }
        fcn.00010374(0x39160,0x58,0x38dd8);
    }
    iVar1 = (**(*0x4af30 + 0x140))(0x42878,0,0x4af40);
    if (((*0x36e74 & 1) != 0) && (iVar1 < 0)) {
        if (((*0x36e74 & 2) != 0) && (-(*0x36e80 >> 0x1f) != 0)) {
            fcn.000102a0(0x80000000,0x38db0,iVar1,-(*0x36e80 >> 0x1f));
        }
        fcn.00010374(0x39160,0x5e,0x38dd8);
    }
    (**(*0x4af30 + 0x140))(0x42550,0,0x4af58);
    (**(*0x4af30 + 0x140))(0x428e8,0,0x4af60);
    return 0;
}


/* fcn.00016ea0 @ 0x16ea0 */

void fcn.00016ea0(int64_t arg1)

{
    ulong uVar1;
    uchar uVar2;
    int iVar3;
    uint uVar4;
    uchar auStack_78 [16];
    uchar auStack_68 [32];
    uchar auStack_48 [16];
    int iStack_38;
    
    fcn.0001ba7c(arg1,0,0x89);
    *(arg1 + 0x73) = 0xffff;
    fcn.0001ba7c(auStack_48,0,0x38);
    iVar3 = fcn.00023974(auStack_48);
    if (iVar3 == 0) {
        *(arg1 + 0x7e) = 0;
        *(arg1 + 0x7d) = iStack_38 == 2;
        *(arg1 + 0x7c) = (iStack_38 == 2) * '\x02' | 1;
    }
    fcn.000239d4(arg1 + 0x7f,arg1 + 0x83);
    uVar2 = fcn.00022d4c();
    *arg1 = uVar2;
    uVar4 = fcn.00023c6c();
    *(arg1 + 0x69) = uVar4;
    uVar1 = fcn.000238e4();
    *(arg1 + 0x5d) = uVar1;
    fcn.0001ba7c(auStack_78,0,0x10);
    fcn.0001ba7c(auStack_68,0,0x20);
    fcn.00023274(auStack_78,0x10);
    fcn.0001bd54(auStack_68,0x10,auStack_78);
    fcn.0001ba1c(arg1 + 1,0x20,auStack_68,0x20);
    return;
}


/* fcn.000239d4 @ 0x239d4 */

void fcn.000239d4(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint8_t uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uchar uVar5;
    char cVar6;
    int64_t arg1_00;
    int64_t extraout_RAX;
    uint8_t uVar7;
    unkbyte7 Var8;
    uint8_t uVar9;
    
    Var8 = arg2 >> 8;
    uVar1 = **(*0x43c08 + 0x38);
    arg1_00 = fcn.00023894();
    *arg2 = 0;
    uVar9 = 0;
    *arg1 = 0;
    if (uVar1 != 0) {
        do {
            fcn.0002b5b0(*(*0x43c08 + 0x38) + 0x10,CONCAT71(Var8,uVar9));
            iVar3 = *(extraout_RAX + 0x28);
            if ((iVar3 != 0) && (uVar2 = *(iVar3 + 0x50), uVar2 != 0)) {
                uVar7 = 0;
                if (uVar2 != 0) {
                    do {
                        piVar4 = *(iVar3 + 0x58 + uVar7 * 8);
                        if ((piVar4 == NULL) || ((*(*piVar4 + 0x8c) & 0x200) == 0)) goto code_r0x00023a9a;
                        uVar7 = uVar7 + 1;
                    } while (uVar7 < uVar2);
                }
                if (arg1_00 != 0) {
                    uVar5 = fcn.0002ae7c(iVar3);
                    cVar6 = fcn.0002e364(arg1_00,CONCAT71(Var8,uVar5));
                    if (cVar6 != '\0') {
                        *arg1 = *arg1 | 1 << (uVar9 & 0x1f);
                        goto code_r0x00023a9a;
                    }
                }
                *arg2 = *arg2 | 1 << (uVar9 & 0x1f);
            }
code_r0x00023a9a:
            uVar9 = uVar9 + 1;
        } while (uVar9 < uVar1);
    }
    return;
}


/* fcn.00022d4c @ 0x22d4c */

bool fcn.00022d4c(void)

{
    int16_t iVar1;
    bool bVar2;
    
    if ((*(*(*0x43c08 + 0x38) + 0x30) < 4) && (*(*0x43c08 + 0x1edc) == '\0')) {
        iVar1 = fcn.00023468();
        bVar2 = iVar1 != 0;
    }
    else {
        bVar2 = false;
    }
    return bVar2;
}


/* fcn.00023c6c @ 0x23c6c */

uint32_t fcn.00023c6c(void)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint8_t uVar4;
    int64_t *piVar5;
    
    uVar4 = 0;
    uVar3 = 0;
    uVar1 = *(*(*0x43c08 + 0x38) + 0x30);
    if (uVar1 != 0) {
        piVar5 = *(*0x43c08 + 0x38) + 0x38;
        do {
            if ((*piVar5 != NULL) && ((iVar2 = **piVar5, iVar2 == 0 || ((*(iVar2 + 0x8c) & 0x200) == 0)))) {
                uVar3 = uVar3 | 1 << (uVar4 & 0x1f);
            }
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 1;
        } while (uVar4 < uVar1);
    }
    return uVar3;
}


/* fcn.000238e4 @ 0x238e4 */

uint64_t fcn.000238e4(ulong param_1,int64_t param_2)

{
    uint8_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint8_t uVar4;
    
    uVar2 = 0;
    uVar4 = 0;
    uVar1 = **(*0x43c08 + 0x38);
    if (uVar1 != 0) {
        uVar3 = 0;
        do {
            param_2 = fcn.0002b5b0(*(*0x43c08 + 0x38) + 0x10,CONCAT71(param_2 >> 8,uVar4));
            if (((param_2 != 0) && ((*(*(param_2 + 0x30) + 0xc0) >> 4 & 1) != 0)) && (*(param_2 + 0x28) == 0)) {
                uVar2 = uVar2 | 1LL << (uVar3 & 0x3f);
            }
            uVar4 = uVar4 + 1;
            uVar3 = uVar3 + 1;
        } while (uVar4 < uVar1);
    }
    return uVar2;
}


/* fcn.00023274 @ 0x23274 */

void fcn.00023274(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint8_t uVar2;
    int16_t iVar3;
    uchar *arg1_00;
    uint8_t uVar4;
    uint8_t uVar5;
    uchar auStack_88 [6];
    uchar auStack_82 [122];
    
    uVar5 = 0;
    uVar4 = 0;
    uVar1 = *(*(*0x43c08 + 0x38) + 0x30);
    arg1_00 = arg1;
    if (uVar1 != 0) {
        do {
            fcn.00023d7c(CONCAT71(arg1_00 >> 8,uVar4),auStack_88);
            arg1_00 = auStack_88;
            iVar3 = fcn.0001bb9c(arg1_00,0x429c4,6);
            if (iVar3 == 0) {
                uVar2 = fcn.00036358(auStack_82,0,0);
                arg1_00 = NULL;
                if (uVar5 < uVar2) {
                    uVar5 = uVar2;
                }
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
    }
    fcn.0001c0b4(arg1,arg2 & 0xffff,0x37020,0x429c4);
    return;
}


/* fcn.000129b4 @ 0x129b4 */

uint64_t fcn.000129b4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t arg1_00;
    int64_t *piVar6;
    int64_t iStackX_18;
    int64_t iStackX_20;
    uint64_t auStack_48 [2];
    
    iStackX_18 = arg3;
    iStackX_20 = arg4;
    if (((*0x36e74 & 1) != 0) && (arg1 == 0)) {
        fcn.00010374(0x38ee0,0x9a,0x38f28);
    }
    iVar3 = iStackX_18;
    if (iStackX_18 != 0) {
        piVar6 = &iStackX_18;
        iVar2 = iStackX_18;
        uVar5 = 0;
        do {
            iVar1 = fcn.00011db8(iVar2);
            piVar6 = piVar6 + 1;
            uVar4 = uVar5 + iVar1 + -4;
            uVar5 = uVar4;
            iVar2 = *piVar6;
        } while (iVar2 != 0);
        if (uVar4 != 0) {
            iVar2 = fcn.00012418(uVar4 + 0x18);
            if (iVar2 != 0) {
                fcn.00013578(iVar2,arg1);
                *(iVar2 + 0x10) = uVar4 + 0x18;
                arg1_00 = iVar2 + 0x14;
                piVar6 = &iStackX_18;
                do {
                    iVar1 = fcn.00011db8(iVar3);
                    fcn.000134cc(arg1_00,iVar3 + 4,iVar1 - 4U);
                    piVar6 = piVar6 + 1;
                    arg1_00 = arg1_00 + (iVar1 - 4U);
                    iVar3 = *piVar6;
                } while (iVar3 != 0);
                fcn.000134cc(arg1_00,0x39070,4);
                iVar3 = (***0x4af48)(*0x4af48,iVar2,arg2,auStack_48);
                if (iVar3 < 0) {
                    auStack_48[0] = 0;
                }
                fcn.000124cc(iVar2);
                return auStack_48[0];
            }
        }
    }
    return 0;
}


/* fcn.000165a8 @ 0x165a8 */

void fcn.000165a8(void)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint64_t arg1;
    uint32_t uVar3;
    ulong uVar4;
    uchar *puVar5;
    char *in_R9;
    char cVar6;
    uchar auStack_1b8 [16];
    uchar auStack_1a8 [24];
    uchar auStack_190 [40];
    uchar auStack_168 [144];
    uchar auStack_d8 [24];
    int64_t iStack_c0;
    uint32_t uStack_7c;
    uint32_t uStack_78;
    int64_t aiStack_58 [8];
    
    fcn.00016ea0(0x436e0);
    uVar4 = 0;
    fcn.0001ba7c(auStack_168,0,0x82);
    if (*0x4375c != '\0') {
        fcn.00023974(aiStack_58);
        fcn.0001c5f4(auStack_1b8,aiStack_58[0],CONCAT71(uVar4 >> 8,1),in_R9);
        in_R9 = "Intel Optane";
        fcn.0001c0b4(auStack_168,0x82,0x36530,0x36520);
        fcn.00016f88(0x37,auStack_168);
    }
    if (*0x43763 != 0) {
        in_R9 = "Incomplete Optane Volume";
        fcn.0001c0b4(auStack_168,0x82,0x36554,0x36538);
        fcn.00016f88(0x37,auStack_168);
    }
    arg1 = *0x4375f;
    if (*0x4375f != 0) {
        fcn.00017314(arg1);
    }
    if (*0x43763 != 0) {
        arg1 = *0x43763;
        fcn.00017314(arg1);
    }
    if (*0x43749 != 0) {
        cVar6 = '\0';
        uVar3 = *0x43749;
        do {
            if ((uVar3 & 1) != 0) {
                fcn.00023d7c(CONCAT71(arg1 >> 8,cVar6),auStack_d8);
                fcn.0001ba7c(auStack_190,0,0x22);
                fcn.0001ba7c(auStack_1a8,0,0x16);
                fcn.0001ba7c(auStack_1b8,0,0xb);
                puVar5 = auStack_d8;
                fcn.0001bd54(auStack_190,0x11,puVar5);
                fcn.0001c5f4(auStack_1b8,iStack_c0,CONCAT71(puVar5 >> 8,1),in_R9);
                fcn.0001bd54(auStack_1a8,0xb,auStack_1b8);
                uVar1 = fcn.000159fc(uStack_78);
                uVar2 = fcn.000159fc(uStack_7c);
                fcn.000130e0(*0x43590,uVar2,0);
                fcn.000130e0(*0x43590,uVar1,0);
                fcn.000104c0(auStack_168,0x82,0x36558,auStack_190);
                if (cVar6 == '\0') {
                    uVar1 = 0x39;
                }
                else if (cVar6 == '\x01') {
                    uVar1 = 0x3a;
                }
                else if (cVar6 == '\x02') {
                    uVar1 = 0x3b;
                }
                else if (cVar6 == '\x03') {
                    uVar1 = 0x3c;
                }
                else {
                    uVar1 = 0;
                }
                in_R9 = NULL;
                arg1 = *0x43590;
                fcn.00012f50(*0x43590,uVar1,auStack_168,0);
            }
            cVar6 = cVar6 + '\x01';
            uVar3 = uVar3 >> 1;
        } while (uVar3 != 0);
    }
    if (*0x4373d != 0) {
        fcn.00017314(*0x4373d);
    }
    fcn.00016e70();
    return;
}


/* fcn.00012af8 @ 0x12af8 */

void fcn.00012af8(int64_t arg1)

{
    int64_t arg3;
    int64_t in_R9;
    
    if (((*0x36e74 & 1) != 0) && (arg1 == 0)) {
        fcn.00010374(0x38ee0,0x100,0x38f48);
    }
    arg3 = (**(*0x4af48 + 8))(*0x4af48,arg1);
    if (((*0x36e74 & 1) != 0) && (arg3 < 0)) {
        if (((*0x36e74 & 2) != 0) && (*0x36e80 < 0)) {
            fcn.000102a0(0x80000000,0x38db0,arg3,in_R9);
        }
        fcn.00010374(0x38ee0,0x102,0x38dd8);
    }
    return;
}


/* fcn.000130e0 @ 0x130e0 */

int64_t fcn.000130e0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    char *arg2_00;
    uchar auStackX_20 [8];
    int64_t iStack_28;
    int64_t iStack_20;
    
    iVar3 = 0;
    arg2_00 = arg3;
    if ((*0x36e74 & 1) != 0) {
        if (arg1 == 0) {
            arg2_00 = "HiiHandle != ((void *) 0)";
            fcn.00010374(0x39080,0xe8,0x38f48);
        }
        if (((*0x36e74 & 1) != 0) && (arg2 == 0)) {
            arg2_00 = "StringId != 0";
            fcn.00010374(0x39080,0xe9,0x390d8);
        }
    }
    iStack_28 = 0;
    iVar1 = arg1;
    arg1_00 = fcn.00013290(arg1);
    if (arg1_00 != 0) {
        fcn.000138f4(iVar1,&iStack_28,arg2_00);
        iVar1 = 0x39102;
        if (iStack_28 != 0) {
            iVar1 = iStack_28;
        }
        iVar2 = 0x39102;
        if (arg3 != 0) {
            iVar2 = arg3;
        }
        iVar1 = fcn.00013a00(arg1_00,0,iVar2,iVar1);
        if (iVar1 != 0) {
            iStack_20 = 0;
            iVar2 = (**(*0x4af50 + 8))(*0x4af50,iVar1,arg1,arg2 & 0xffff,auStackX_20,&iStack_20,0);
            if (iVar2 == -0x7ffffffffffffffb) {
                iVar3 = fcn.00012418(iStack_20);
                if (iVar3 != 0) {
                    iVar2 = (**(*0x4af50 + 8))(*0x4af50,iVar1,arg1,arg2 & 0xffff,iVar3,&iStack_20,0);
                    if (iVar2 < 0) {
                        fcn.000124cc(iVar3);
                        iVar3 = 0;
                    }
                }
            }
        }
        fcn.000124cc(arg1_00);
        if (iStack_28 != 0) {
            fcn.000124cc(iStack_28);
        }
        if (iVar1 != 0) {
            fcn.000124cc(iVar1);
        }
    }
    return iVar3;
}


/* fcn.000125d8 @ 0x125d8 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Variable defined which should be unmapped: var_38h

void fcn.000125d8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg2_00;
    int64_t arg1_00;
    uint64_t uVar1;
    uint64_t uVar2;
    ushort *arg1_01;
    int64_t iVar3;
    ulong uVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iStackX_18;
    int64_t iStackX_20;
    uint64_t uStack_98;
    uint64_t uStack_90;
    int64_t *piStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    uchar auStack_68 [4];
    int iStack_64;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int32_t var_bp_20h;
    int32_t var_1ch;
    int32_t var_bp_18h;
    int8_t var_14h;
    int64_t var_bp_10h;
    
    uVar2 = 0;
    uVar6 = uVar2;
    iStackX_18 = arg3;
    iStackX_20 = arg4;
    if (arg3 != 0) {
        piVar5 = &iStackX_18;
        iVar3 = arg3;
        do {
            iVar7 = 0;
            uVar1 = fcn.00012530(iVar3,0,0,0);
            if (uVar2 <= uVar1 >> 1) {
                uVar2 = fcn.00012530(iVar3,0,0,iVar7);
                uVar2 = uVar2 >> 1;
            }
            piVar5 = piVar5 + 1;
            uVar6 = uVar6 + 1;
            iVar3 = *piVar5;
        } while (iVar3 != 0);
    }
    if ((*0x36e74 & 1) != 0) {
        if (uVar6 == 0) {
            fcn.00010374(0x38e48,0x1ad,0x38e30);
        }
        if (((*0x36e74 & 1) != 0) && (uVar2 == 0)) {
            fcn.00010374(0x38e48,0x1b2,0x38e88);
        }
    }
    iVar3 = *(*0x4af20 + 0x40);
    fcn.000134cc(auStack_68,*(iVar3 + 0x48),0x18);
    (**(iVar3 + 0x18))(iVar3,iStack_64,&iStack_78);
    (**(iVar3 + 0x40))(iVar3,0);
    (**(iVar3 + 0x28))(iVar3,arg1);
    uStack_98 = iStack_80 - 3U;
    if (uVar6 < iStack_80 - 3U) {
        uStack_98 = uVar6;
    }
    uVar6 = iStack_78 - 2U;
    if (uVar2 < iStack_78 - 2U) {
        uVar6 = uVar2;
    }
    uVar2 = (iStack_78 - uVar6) - 2 >> 1;
    uVar1 = (iStack_80 - uStack_98) - 3 >> 1;
    uStack_90 = uVar2;
    arg1_01 = fcn.00012418(uVar6 * 2 + 6);
    if (((*0x36e74 & 1) != 0) && (arg1_01 == NULL)) {
        fcn.00010374(0x38e48,0x1dd,0x38e98);
    }
    fcn.00013644(arg1_01,uVar6 * 2 + 4,0x2500);
    *arg1_01 = 0x250c;
    *(arg1_01 + uVar6 + 1) = 0x2510;
    (**(iVar3 + 0x38))(iVar3,uVar2,uVar1);
    iVar7 = uVar1 + 1;
    (**(iVar3 + 8))(iVar3,arg1_01);
    if (arg3 != 0) {
        piStack_88 = &iStackX_18;
        uVar1 = uStack_98;
        do {
            if (uVar1 == 0) break;
            fcn.00013644(arg1_01,uVar6 * 2 + 4,0x20);
            *arg1_01 = 0x2502;
            *(arg1_01 + uVar6 + 1) = 0x2502;
            (**(iVar3 + 0x38))(iVar3,uVar2);
            (**(iVar3 + 8))(iVar3);
            uVar4 = 0;
            uStack_98 = fcn.00012530(arg3,0,0,0);
            uStack_98 = uStack_98 >> 1;
            if (uVar6 < uStack_98) {
                fcn.00012530(arg3,CONCAT71(uVar4 >> 8,1),uVar6,&uStack_98);
                iStack_70 = fcn.00012418(uStack_98 * 2 + 2);
                if (((*0x36e74 & 1) != 0) && (iStack_70 == 0)) {
                    fcn.00010374(0x38e48,0x201,0x38eb0);
                }
                arg1_00 = iStack_70;
                arg2_00 = uStack_98 + 1;
                fcn.00011ee0(iStack_70,arg2_00,arg3,uStack_98 - 3);
                fcn.00012160(arg1_00,arg2_00);
                uVar2 = uStack_90;
                (**(iVar3 + 0x38))(iVar3,uStack_90 + 1,iVar7);
                (**(iVar3 + 8))(iVar3,arg1_00);
                fcn.000124cc(arg1_00);
            }
            else {
                (**(iVar3 + 0x38))(iVar3,(uVar6 - uStack_98 >> 1) + 1 + uVar2,iVar7);
                (**(iVar3 + 8))(iVar3,arg3);
            }
            uVar1 = uVar1 - 1;
            piStack_88 = piStack_88 + 1;
            iVar7 = iVar7 + 1;
            arg3 = *piStack_88;
        } while (arg3 != 0);
    }
    fcn.00013644(arg1_01,uVar6 * 2 + 4,0x2500);
    *arg1_01 = 0x2514;
    *(arg1_01 + uVar6 + 1) = 0x2518;
    (**(iVar3 + 0x38))(iVar3,uVar2,iVar7);
    (**(iVar3 + 8))(iVar3,arg1_01);
    fcn.000124cc(arg1_01);
    (**(iVar3 + 0x40))(iVar3,var_50h._4_1_);
    (**(iVar3 + 0x38))(iVar3,var_58h._4_4_,var_50h);
    (**(iVar3 + 0x28))(iVar3,var_58h);
    if (arg2 != 0) {
        while (iVar3 = (**(*(*0x4af20 + 0x30) + 8))(*(*0x4af20 + 0x30),arg2), iVar3 < 0) {
            if (iVar3 == -0x7ffffffffffffffa) {
                (**(*0x4af30 + 0x60))(1,*(*0x4af20 + 0x30) + 0x10,&var_48h);
            }
        }
    }
    return;
}


/* fcn.0001682c @ 0x1682c */

void fcn.0001682c(uint64_t param_1,int64_t param_2,int64_t param_3)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t arg1;
    uint8_t uVar5;
    
    *0x43755 = 0;
    uVar5 = 0;
    uVar1 = fcn.00023360();
    if (uVar1 != 0) {
        do {
            arg1 = 0x19;
            if ((uVar1 & 1) != 0) {
                param_1 = CONCAT71(param_1 >> 8,*0x43753);
                param_3 = CONCAT71(param_3 >> 8,1);
                param_2 = CONCAT71(param_2 >> 8,uVar5);
                iVar2 = fcn.000228ac(param_1,param_2,param_3);
                if (iVar2 == 0) {
                    uVar3 = uVar5;
                    uVar4 = uVar5;
                    if (uVar5 < 0x11) {
                        if (uVar5 == 0x10) {
                            arg1 = 0x1d;
                        }
                        else if (uVar4 < 9) {
                            if (uVar4 == 8) {
                                arg1 = 0x15;
                            }
                            else if (uVar5 == 0) {
                                arg1 = 0xd;
                                param_1 = 0;
                            }
                            else if (uVar3 == 1) {
                                arg1 = 0xe;
                                param_1 = 0;
                            }
                            else if (uVar3 == 2) {
                                arg1 = 0xf;
                                param_1 = 0;
                            }
                            else if (uVar3 == 3) {
                                arg1 = 0x10;
                                param_1 = 0;
                            }
                            else if (uVar3 == 4) {
                                arg1 = 0x11;
                                param_1 = 0;
                            }
                            else if (uVar3 == 5) {
                                arg1 = 0x12;
                                param_1 = 0;
                            }
                            else {
                                uVar3 = uVar3 - 6;
                                param_1 = uVar3;
                                if (uVar3 == 0) {
                                    arg1 = 0x13;
                                }
                                else {
                                    if (uVar3 != 1) goto code_r0x00016a35;
                                    arg1 = 0x14;
                                }
                            }
                        }
                        else if (uVar4 == 9) {
                            arg1 = 0x16;
                            param_1 = 0;
                        }
                        else if (uVar4 == 10) {
                            arg1 = 0x17;
                            param_1 = 0;
                        }
                        else if (uVar4 == 0xb) {
                            arg1 = 0x18;
                            param_1 = 0;
                        }
                        else {
                            param_1 = uVar4 - 0xc;
                            if (uVar4 - 0xc != 0) {
                                if (uVar4 == 0xd) {
                                    arg1 = 0x1a;
                                    param_1 = 0;
                                }
                                else {
                                    uVar3 = uVar4 - 0xe;
                                    param_1 = uVar3;
                                    if (uVar3 == 0) {
                                        arg1 = 0x1b;
                                    }
                                    else {
                                        if (uVar3 != 1) goto code_r0x00016a35;
                                        arg1 = uVar4 + 0xd;
                                    }
                                }
                            }
                        }
                    }
                    else if (uVar4 < 0x19) {
                        if (uVar4 == 0x18) {
                            arg1 = 0x25;
                        }
                        else if (uVar3 == 0x11) {
                            arg1 = 0x1e;
                            param_1 = 0;
                        }
                        else if (uVar3 == 0x12) {
                            arg1 = 0x1f;
                            param_1 = 0;
                        }
                        else if (uVar3 == 0x13) {
                            arg1 = 0x20;
                            param_1 = 0;
                        }
                        else if (uVar3 == 0x14) {
                            arg1 = 0x21;
                            param_1 = 0;
                        }
                        else if (uVar3 == 0x15) {
                            arg1 = 0x22;
                            param_1 = 0;
                        }
                        else {
                            uVar4 = uVar3 - 0x16;
                            param_1 = uVar4;
                            if (uVar4 == 0) {
                                arg1 = 0x23;
                            }
                            else {
                                if (uVar4 != 1) goto code_r0x00016a35;
                                arg1 = uVar3 + 0xd;
                            }
                        }
                    }
                    else if (uVar3 == 0x19) {
                        arg1 = 0x26;
                        param_1 = 0;
                    }
                    else if (uVar3 == 0x1a) {
                        arg1 = 0x27;
                        param_1 = 0;
                    }
                    else if (uVar3 == 0x1b) {
                        arg1 = 0x28;
                        param_1 = 0;
                    }
                    else if (uVar3 == 0x1c) {
                        arg1 = 0x29;
                        param_1 = 0;
                    }
                    else if (uVar3 == 0x1d) {
                        arg1 = 0x2a;
                        param_1 = 0;
                    }
                    else {
                        uVar3 = uVar3 - 0x1e;
                        param_1 = uVar3;
                        if (uVar3 == 0) {
                            arg1 = 0x2b;
                        }
                        else if (uVar3 == 1) {
                            arg1 = 0x2c;
                        }
                        else {
code_r0x00016a35:
                            arg1 = 0;
                        }
                    }
                    param_2 = fcn.00015904(CONCAT71(param_1 >> 8,uVar5));
                    fcn.00016f88(arg1,param_2);
                    param_1 = 0;
                    *0x43755 = *0x43755 | 1 << (uVar5 & 0x1f);
                }
            }
            uVar5 = uVar5 + 1;
            uVar1 = uVar1 >> 1;
        } while (uVar1 != 0);
    }
    fcn.00012e18(0x36498,0x36578,0x89,0x436e0);
    return;
}


/* fcn.00017020 @ 0x17020 */

//WARNING: Removing unreachable block (ram,0x00012fd7)

int16_t fcn.00017020(int64_t arg1,int64_t arg2)

{
    char cVar1;
    char *arg1_00;
    int64_t arg1_01;
    char *pcVar2;
    int64_t iVar3;
    int64_t iVar4;
    int16_t iVar5;
    char *pcVar6;
    int64_t iVar7;
    int16_t aiStackX_10 [4];
    
    iVar5 = arg1;
    iVar4 = fcn.000130e0(*0x43590,arg2,0);
    arg1_01 = *0x43590;
    aiStackX_10[0] = iVar5;
    if ((*0x36e74 & 1) != 0) {
        if (*0x43590 == 0) {
            fcn.00010374(0x39080,0x40,0x38f48);
        }
        if (((*0x36e74 & 1) != 0) && (iVar4 == 0)) {
            fcn.00010374(0x39080,0x41,0x38910);
        }
    }
    pcVar2 = fcn.00013290(arg1_01);
    if (pcVar2 == NULL) {
        iVar5 = 0;
    }
    else {
        iVar7 = -0x7ffffffffffffffe;
        cVar1 = *pcVar2;
        arg1_00 = pcVar2;
        while (cVar1 != '\0') {
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
            iVar3 = fcn.00011c08(0x390cc);
            iVar3 = fcn.00011c94(arg1_00,0x390cc,iVar3);
            if (iVar3 != 0) {
                if (aiStackX_10[0] == 0) {
                    iVar7 = (***0x4af50)(*0x4af50,arg1_01,aiStackX_10,arg1_00,0,iVar4,0);
                }
                else {
                    iVar7 = (*(*0x4af50)[2])(*0x4af50,arg1_01,aiStackX_10[0],arg1_00,iVar4,0);
                }
                if (iVar7 < 0) break;
            }
            arg1_00 = pcVar6;
            cVar1 = *pcVar6;
        }
        fcn.000124cc(pcVar2);
        iVar5 = 0;
        if (-1 < iVar7) {
            iVar5 = aiStackX_10[0];
        }
    }
    return iVar5;
}


/* fcn.00023d7c @ 0x23d7c */

ulong fcn.00023d7c(int64_t arg1,int64_t arg2)

{
    int64_t *arg1_00;
    int64_t arg1_01;
    int64_t iVar1;
    uchar uVar2;
    char cVar3;
    uint16_t uVar4;
    uint uVar5;
    int64_t iVar6;
    ulong uVar7;
    uint32_t arg1_02;
    uint8_t *puVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint8_t uVar11;
    
    arg1_00 = *(*(*0x43c08 + 0x38) + 0x38 + (arg1 & 0xffU) * 8);
    if ((arg1_00 == NULL) || (*(*0x43c08 + 0x20) <= arg1)) {
        uVar7 = 0xe;
    }
    else {
        iVar10 = arg1_00[7];
        arg1_01 = *arg1_00;
        iVar6 = arg1_00[1];
        iVar1 = *(iVar10 + 0x28);
        iVar9 = *(arg1_01 + 0xd8);
        arg1_02 = arg2;
        fcn.0001ba7c(arg1_02,0,0x78);
        fcn.0001ba1c(arg2,0x11,arg1_00 + 0x10,0x10);
        *(arg2 + 0x18) = arg1_00[5];
        *(arg2 + 0x2c) = *(iVar9 + 0xc);
        *(arg2 + 0x14) = *(iVar1 + 0xc);
        uVar2 = fcn.0002ae7c(iVar6);
        *(arg2 + 0x30) = uVar2;
        *(arg2 + 0x20) = *(iVar1 + 0x20) >> 1;
        *(arg2 + 0x22) = *(iVar1 + 0x10);
        uVar5 = fcn.0002c8b0(arg1_00);
        *(arg2 + 0x24) = uVar5;
        *(arg2 + 0x11) = *(*arg1_00 + 0xb9);
        iVar9 = arg1_01;
        fcn.00029010(*0x43c08,arg1_01,arg2 + 0x3b);
        *(arg2 + 0x44) = *(*(iVar6 + 0x68) + 0x20);
        if (*(arg2 + 0x24) == 3) {
            *(arg2 + 0x2c) = 0;
        }
        *(arg2 + 0x54) = *(iVar10 + 0xc);
        *(arg2 + 0x28) = *(iVar1 + 0x38);
        *(arg2 + 0x34) = arg1_00[6];
        *(arg2 + 0x4c) = arg1_00[0xb];
        *(arg2 + 0x49) = *(arg1_00 + 0x4d) & 1;
        cVar3 = *(arg1_00 + 0x4c);
        iVar10 = CONCAT71(iVar9 >> 8,cVar3);
        *(arg2 + 0x48) = cVar3;
        *(arg2 + 0x50) = (*(*0x429d0 + 0x1a6) & 0x1fffffff) >> 7;
        if ((*(arg2 + 0x14) == 0x20) && (cVar3 != '\0')) {
            uVar11 = 0;
            puVar8 = *(*0x43c08 + 0x38);
            if (*puVar8 != 0) {
                do {
                    iVar10 = CONCAT71(iVar10 >> 8,uVar11);
                    iVar6 = fcn.0002b5b0(puVar8 + 0x10,iVar10);
                    cVar3 = fcn.0002ae7c(*(iVar6 + 0x28));
                    if (cVar3 == *(arg2 + 0x30)) {
                        iVar10 = 0;
                        fcn.0001c0b4(arg2,0x10,0x37000,*(*(iVar6 + 0x30) + 0x88));
                        break;
                    }
                    uVar11 = uVar11 + 1;
                    puVar8 = *(*0x43c08 + 0x38);
                } while (uVar11 < *puVar8);
            }
        }
        if ((*(arg1_01 + 0x8c) & 0x200) != 0) {
            iVar10 = 0;
            fcn.0001c0b4(arg2,0x10,0x36554,0x37010);
        }
        if (*(arg2 + 0x14) == 0x10) {
            uVar4 = fcn.0002c140(*arg1_00);
            *(arg2 + 0x38) = uVar4;
            iVar10 = 0;
            if ((*(arg2 + 0x24) == 2) && ((*(*(*(iVar1 + 0x40 + *(iVar1 + 0x39) * 8) + 0x30) + 0xc0) >> 4 & 1) == 0)) {
                *(arg2 + 0x38) = 0;
                if (uVar4 >> 8 == 1) {
                    *(arg2 + 0x3a) = *(arg2 + 0x3a) | uVar4 >> 8;
                }
                else {
                    *(arg2 + 0x3a) = *(arg2 + 0x3a) | 2;
                }
            }
        }
        else {
            *(arg2 + 0x38) = 0xffff;
        }
        *(arg2 + 0x58) = 1;
        uVar2 = *(arg2 + 0x58);
        if (*(arg2 + 0x24) == 3) {
            uVar2 = 0;
        }
        if ((*(arg2 + 0x34) & 0x2000) != 0) {
            uVar2 = 0;
        }
        if ((*(arg2 + 0x34) & 0x4000) != 0) {
            uVar2 = 0;
        }
        if (*(arg2 + 0x48) - 10U < 2) {
            uVar2 = 0;
        }
        *(arg2 + 0x58) = uVar2;
        fcn.000247dc(arg1_02);
        fcn.00024768(arg2);
        fcn.000249c0(arg1_02);
        fcn.000246c4(arg2);
        *(arg2 + 0x6c) = 0x4c - (*(arg2 + 0x49) != '\0');
        fcn.00024548(arg1_02,CONCAT71(iVar10 >> 8,arg1));
        uVar7 = 0;
    }
    return uVar7;
}


/* fcn.000244b0 @ 0x244b0 */

int fcn.000244b0(int64_t arg1)

{
    int iVar1;
    unkbyte7 Var2;
    char acStackX_10 [24];
    
    Var2 = arg1 >> 8;
    iVar1 = fcn.00023ac0(arg1,acStackX_10);
    if ((iVar1 == 0) && (acStackX_10[0] != -1)) {
        fcn.00021838(CONCAT71(Var2,arg1));
        fcn.00024d74(CONCAT71(Var2,acStackX_10[0]));
    }
    return iVar1;
}


/* fcn.00023ac0 @ 0x23ac0 */

uint fcn.00023ac0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uchar uVar2;
    uint uVar3;
    
    if (arg2 == 0) {
        uVar3 = 1;
    }
    else {
        iVar1 = **(*(*0x43c08 + 0x38) + 0x38 + (arg1 & 0xffU) * 8);
        if (iVar1 == 0) {
            uVar3 = 0xe;
        }
        else {
            uVar2 = fcn.0002a4e8(*(*(iVar1 + 0xd8) + 0x10));
            *arg2 = uVar2;
            uVar3 = 0;
        }
    }
    return uVar3;
}


/* fcn.00021838 @ 0x21838 */

uint fcn.00021838(int64_t arg1)

{
    int64_t arg1_00;
    uint uVar1;
    
    arg1_00 = **(*(*0x43c08 + 0x38) + 0x38 + (arg1 & 0xffU) * 8);
    if (arg1_00 == 0) {
        uVar1 = 0xe;
    }
    else {
        fcn.0002c43c(arg1_00,0);
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00024d74 @ 0x24d74 */

uint fcn.00024d74(int64_t arg1)

{
    int64_t arg1_00;
    uint uVar1;
    int64_t extraout_RAX;
    ulong *puVar2;
    unkbyte7 in_RDX;
    
    fcn.0002b5b0(*(*0x43c08 + 0x38) + 0x10,CONCAT71(in_RDX,arg1));
    if (extraout_RAX == 0) {
        uVar1 = 0xf;
    }
    else {
        arg1_00 = *(extraout_RAX + 0x30);
        if ((*(arg1_00 + 0xc0) & 0x84) != 0) {
            *(arg1_00 + 0xc0) = *(arg1_00 + 0xc0) & 0xffffff7b;
            fcn.000277c4(arg1_00);
        }
        if (*(extraout_RAX + 0x28) == 0) {
            puVar2 = *(extraout_RAX + 0x40);
        }
        else {
            puVar2 = *(*(extraout_RAX + 0x28) + 0x68);
        }
        (***puVar2)(puVar2,1);
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00017054 @ 0x17054 */

void fcn.00017054(void)

{
    bool bVar1;
    uchar uVar2;
    uint64_t uVar3;
    int16_t iVar4;
    uint32_t uVar5;
    ulong uVar6;
    uint64_t arg1;
    int64_t arg2;
    int iVar7;
    uint32_t uVar8;
    uchar auStack_98 [59];
    uchar auStack_5d [29];
    ulong uStack_40;
    
    uVar6 = 0x36498;
    fcn.00012d48(0x36498,0x36578,0x89,0x436e0);
    uVar2 = *0x43753;
    bVar1 = false;
    uVar5 = fcn.0002289c();
    arg1 = CONCAT71(uVar6 >> 8,1);
    fcn.00025eb0(arg1);
    uVar3 = 0;
    if (uVar5 != 0) {
        do {
            arg1 = uVar3;
            iVar7 = arg1;
            iVar4 = fcn.00022364(arg1);
            if (iVar4 != 0) {
                bVar1 = true;
            }
            uVar8 = iVar7 + 0x200;
            uVar3 = uVar8;
        } while (uVar8 < uVar5);
        if (bVar1) {
            arg2 = 0x174;
            goto code_r0x00016e70;
        }
    }
    fcn.00023d7c(CONCAT71(arg1 >> 8,*0x43753),auStack_98);
    fcn.00022374(auStack_5d);
    arg2 = 0x173;
code_r0x00016e70:
    fcn.00017020(0x170,arg2);
    fcn.00017020(0x16d,0x16c);
    fcn.00016e30();
    *0x4375b = 100;
    uStack_40 = 0x16e9a;
    *0x43753 = uVar2;
    fcn.00012e18(0x36498,0x36578,0x89,0x436e0);
    return;
}


/* fcn.00025220 @ 0x25220 */

int fcn.00025220(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int64_t iVar1;
    int iVar2;
    
    arg1_00 = *(*0x43c08 + 0x38);
    iVar1 = fcn.00028f9c(*0x43c08,arg1);
    if (iVar1 == 0) {
        *arg2 = 0;
        iVar2 = 0xe;
    }
    else {
        iVar2 = fcn.0002de64(arg1_00,*(iVar1 + 0xc0),arg2);
        if (iVar2 == 0) {
            fcn.000287ec(*0x43c08);
        }
    }
    return iVar2;
}


/* fcn.000250a8 @ 0x250a8 */

ulong fcn.000250a8(uint32_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int64_t *piVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t arg1_00;
    int64_t iVar6;
    ulong *puVar7;
    int *arg2_00;
    ulong uVar8;
    uint8_t uVar9;
    uint32_t auStackX_8 [2];
    int aiStackX_18 [4];
    
    uVar3 = arg1;
    if (*(*(*0x43c08 + 0x38) + 0x30) <= uVar3) {
        return 0xe;
    }
    piVar2 = *(*(*0x43c08 + 0x38) + 0x38 + uVar3 * 8);
    if (piVar2 == NULL) {
        return 0;
    }
    aiStackX_18[0] = 0;
    arg2_00 = aiStackX_18;
    auStackX_8[0] = 0;
    fcn.0002bf3c(*piVar2,arg2_00,auStackX_8);
    uVar1 = *(piVar2 + 9);
    iVar6 = CONCAT71(arg2_00 >> 8,uVar1);
    uVar9 = uVar1 ^ 1;
    if (arg2 != '\x02') {
        if (arg2 != '\x03') {
            return 0x14;
        }
        if (auStackX_8[0] == 0) {
            uVar5 = 0;
            if (aiStackX_18[0] == 2) {
                *(*piVar2 + 0xf8) = 5;
                *(piVar2[7] + 0x3c) = 1;
            }
        }
        else {
            uVar5 = auStackX_8[0] - 1;
            if (auStackX_8[0] - 1 != 0) {
                uVar4 = auStackX_8[0] - 3;
                uVar5 = uVar4;
                if (uVar4 != 0) {
                    if (uVar4 == 2) {
                        *(*piVar2 + 0xf8) = 5;
                    }
                    goto code_r0x000251aa;
                }
            }
            *(*piVar2 + 0xf8) = 3;
        }
code_r0x000251aa:
        aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,piVar2[8]);
        auStackX_8[0] = CONCAT31(auStackX_8[0]._1_3_,*(piVar2 + 0x44));
        goto code_r0x000251bb;
    }
    uVar5 = auStackX_8[0];
    if (auStackX_8[0] == 0) {
code_r0x0002512e:
        *(*piVar2 + 0xf8) = 0;
    }
    else {
        uVar5 = auStackX_8[0] - 1;
        if (auStackX_8[0] - 1 != 0) {
            uVar4 = auStackX_8[0] - 3;
            uVar5 = uVar4;
            if (uVar4 != 0) {
                if (uVar4 == 2) goto code_r0x0002512e;
                goto code_r0x00025138;
            }
        }
        *(*piVar2 + 0xf8) = 3;
    }
code_r0x00025138:
    uVar9 = uVar1;
code_r0x000251bb:
    *(piVar2 + 6) = *(piVar2 + 6) | 0x800;
    arg1_00 = CONCAT71(uVar5 >> 8,uVar3);
    fcn.000214cc(arg1_00,iVar6);
    uVar5 = CONCAT71(iVar6 >> 8,uVar1) ^ 1;
    iVar6 = CONCAT71(arg1_00 >> 8,uVar3);
    fcn.000214cc(iVar6,uVar5);
    uVar5 = CONCAT71(uVar5 >> 8,uVar9) ^ 1;
    fcn.00024f58(CONCAT71(iVar6 >> 8,uVar3),uVar5);
    uVar8 = CONCAT71(uVar5 >> 8,1);
    puVar7 = *(piVar2[1] + 0x68);
    (***puVar7)(puVar7,uVar8);
    if ((auStackX_8[0] - 1 & 0xfffffffd) != 0) {
        fcn.0002141c(CONCAT71(puVar7 >> 8,uVar3),CONCAT71(uVar8 >> 8,uVar9));
    }
    return 0;
}


/* fcn.000222fc @ 0x222fc */

int fcn.000222fc(int64_t arg1)

{
    int64_t arg1_00;
    int64_t arg2;
    int iVar1;
    
    arg1_00 = *(*0x43c08 + 0x38);
    if ((arg1 < *(arg1_00 + 0x30)) && (arg2 = *(arg1_00 + 0x38 + (arg1 & 0xffU) * 8), arg2 != 0)) {
        iVar1 = fcn.0002d8d0(arg1_00,arg2);
        if (((iVar1 == 0) && (*(arg2 + 0x4c) != '\0')) || ((*(arg2 + 0x30) >> 0xe & 1) != 0)) {
            fcn.000287ec(*0x43c08);
        }
    }
    else {
        iVar1 = 0xe;
    }
    return iVar1;
}


/* fcn.00023468 @ 0x23468 */

uint16_t fcn.00023468(void)

{
    char cVar1;
    int iVar2;
    uint16_t uVar3;
    int32_t var_4h;
    int32_t var_4h_2;
    
    uVar3 = 0;
    cVar1 = fcn.000291a0(1);
    if (cVar1 != '\0') {
        iVar2 = fcn.000236e8(1,0);
        if (iVar2 != 0) {
            uVar3 = 1;
        }
    }
    cVar1 = fcn.000291a0(2);
    if (cVar1 != '\0') {
        iVar2 = fcn.000236e8(2,0);
        if (iVar2 != 0) {
            uVar3 = uVar3 | 2;
        }
    }
    cVar1 = fcn.000291a0(8);
    if (cVar1 != '\0') {
        iVar2 = fcn.000236e8(4,0);
        if (iVar2 != 0) {
            uVar3 = uVar3 | 4;
        }
    }
    cVar1 = fcn.000291a0(4);
    if (cVar1 != '\0') {
        iVar2 = fcn.000236e8(8,0);
        if (iVar2 != 0) {
            uVar3 = uVar3 | 8;
        }
    }
    cVar1 = fcn.000291a0(0x10);
    if (cVar1 != '\0') {
        iVar2 = fcn.000236e8(0x10,0);
        if (iVar2 != 0) {
            uVar3 = uVar3 | 0x10;
        }
    }
    return uVar3;
}


/* fcn.00023550 @ 0x23550 */

uint32_t fcn.00023550(void)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00023468();
    if ((uVar1 & 1) == 0) {
        if ((uVar1 & 2) == 0) {
            if ((uVar1 & 4) == 0) {
                if ((uVar1 & 8) == 0) {
                    uVar1 = uVar1 & 0x10;
                }
                else {
                    uVar1 = 8;
                }
            }
            else {
                uVar1 = 4;
            }
        }
        else {
            uVar1 = 2;
        }
    }
    else {
        uVar1 = 1;
    }
    return uVar1;
}


/* fcn.00015904 @ 0x15904 */

ulong fcn.00015904(int64_t arg1)

{
    ulong *puVar1;
    int64_t arg2;
    int64_t in_R9;
    uchar auStack_98 [16];
    uchar auStack_88 [24];
    int64_t iStack_70;
    uint32_t uStack_5c;
    
    fcn.000235b8(arg1,auStack_88);
    fcn.0001ba7c(0x43770,0,0x50);
    fcn.0001ba7c(auStack_98,0,0xb);
    fcn.0001c5f4(auStack_98,iStack_70,0,in_R9);
    puVar1 = fcn.00019138(uStack_5c);
    if (puVar1 != NULL) {
        arg2 = fcn.00018d90(CONCAT71(puVar1 >> 8,**puVar1),CONCAT71(0x365,(*puVar1)[4]));
        fcn.0001c0b4(0x43770,0x50,0x365c0,arg2);
    }
    return 0x43770;
}


/* fcn.00024098 @ 0x24098 */

uchar fcn.00024098(int64_t arg1)

{
    char cVar1;
    uchar uVar2;
    
    uVar2 = 0;
    if (((*(*0x429d0 + 0x238) != 0) && (cVar1 = fcn.0002ae7c(*(*(*0x429d0 + 0x238) + 200)), cVar1 == arg1)) ||
       ((*(*0x429d0 + 0x240) != 0 && (cVar1 = fcn.0002ae7c(*(*(*0x429d0 + 0x240) + 200)), cVar1 == arg1)))) {
        uVar2 = 1;
    }
    return uVar2;
}


/* fcn.00023894 @ 0x23894 */

uint64_t fcn.00023894(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    uVar2 = *(*(*0x43c08 + 0x38) + 0x80);
    if (uVar2 != 0) {
        uVar2 = uVar2 - 8;
    }
    while( true ) {
        if (uVar2 == 0) {
            return 0;
        }
        if (*(uVar2 + 0xa0) == 3) break;
        iVar1 = *(-(uVar2 != 0) & uVar2 + 8);
        uVar2 = -(iVar1 != 0) & iVar1 - 8U;
    }
    return uVar2;
}


/* fcn.00018c8c @ 0x18c8c */

uchar fcn.00018c8c(uint32_t arg1)

{
    uchar uVar1;
    int64_t iVar2;
    
    iVar2 = fcn.00019138(arg1);
    if ((iVar2 == 0) || (*(iVar2 + 10) == '\0')) {
        uVar1 = 0xff;
    }
    else {
        uVar1 = *(iVar2 + 8);
    }
    return uVar1;
}


/* fcn.00018ce0 @ 0x18ce0 */

uchar fcn.00018ce0(uint32_t arg1)

{
    uchar uVar1;
    int64_t *piVar2;
    
    piVar2 = fcn.00019138(arg1);
    if ((piVar2 == NULL) || (*(piVar2 + 10) == '\0')) {
        uVar1 = 0xff;
    }
    else {
        uVar1 = *(*piVar2 + 8);
    }
    return uVar1;
}


/* fcn.000159fc @ 0x159fc */

ulong fcn.000159fc(uint32_t arg1)

{
    //switch table (77 cases) at 0x15bbc
    switch(arg1) {
    case 0:
        return 0x13f;
    case 1:
        return 0x140;
    case 2:
        return 0x141;
    case 3:
        return 0x142;
    case 4:
        return 0x143;
    case 5:
        return 0x144;
    case 6:
        return 0x145;
    case 7:
        return 0x146;
    case 8:
        return 0x147;
    case 9:
        return 0x148;
    case 10:
        return 0x149;
    case 0xb:
        return 0x14a;
    case 0xc:
        return 0x14b;
    case 0xd:
        return 0x14c;
    case 0xe:
        return 0x14d;
    case 0xf:
        return 0x14e;
    case 0x10:
        return 0x14f;
    case 0x11:
        return 0x150;
    default:
        return 0x152;
    case 0x13:
        return 0x151;
    case 0x15:
        return 0x153;
    case 0x16:
        return 0x154;
    case 0x17:
        return 0x155;
    case 0x18:
        return 0x156;
    case 0x19:
        return 0x157;
    case 0x1a:
        return 0x158;
    case 0x1b:
        return 0x159;
    case 0x1c:
        return 0x15a;
    case 0x1d:
        return 0x15b;
    case 0x1e:
        return 0x15c;
    case 0x1f:
        return 0x15d;
    case 0x20:
        return 0x15e;
    case 0x21:
        return 0x15f;
    case 0x22:
        return 0x160;
    case 0x23:
        return 0x161;
    case 0x24:
        return 0x162;
    case 0x25:
        return 0x163;
    case 0x26:
        return 0x164;
    case 0x27:
        return 0x165;
    case 0x28:
        return 0x166;
    case 0x29:
        return 0x167;
    case 0x2a:
        return 0x169;
    case 0x2b:
        return 0x16a;
    case 0x2c:
        return 0x16b;
    case 0x2d:
        return 0x168;
    case 0x2e:
        return 0x128;
    case 0x2f:
        return 0x129;
    case 0x30:
        return 0x12a;
    case 0x31:
        return 299;
    case 0x32:
        return 300;
    case 0x33:
        return 0x12d;
    case 0x34:
        return 0x12e;
    case 0x35:
        return 0x12f;
    case 0x36:
        return 0x130;
    case 0x37:
        return 0x131;
    case 0x38:
        return 0x132;
    case 0x39:
        return 0x133;
    case 0x3a:
        return 0x134;
    case 0x3b:
        return 0x135;
    case 0x3c:
        return 0x136;
    case 0x3d:
        return 0x137;
    case 0x3e:
        return 0x138;
    case 0x40:
    case 0x41:
    case 0x43:
    case 0x45:
    case 0x46:
        return 0xb1;
    case 0x42:
        return 0xad;
    case 0x44:
        return 0xae;
    case 0x47:
        return 0xaf;
    case 0x49:
    case 0x4a:
        return 0xb0;
    case 0x4b:
        return 0xb6;
    case 0x4c:
        return 0xb5;
    }
}


/* fcn.00018d4c @ 0x18d4c */

char * fcn.00018d4c(uint32_t arg1)

{
    ulong *puVar1;
    
    puVar1 = fcn.00019138(arg1);
    if ((puVar1 != NULL) && (*(puVar1 + 10) != '\0')) {
        if (**puVar1 == 1) {
            return "AHCI";
        }
        if (**puVar1 == 2) {
            return "NVMe";
        }
    }
    return "UNKNOWN";
}


/* fcn.00017314 @ 0x17314 */

void fcn.00017314(int64_t arg1)

{
    int64_t arg2;
    uint32_t uVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    char cVar4;
    
    if (arg1 != 0) {
        uVar2 = 0;
        do {
            cVar4 = uVar2;
            if ((arg1 & 1U) != 0) {
                uVar3 = uVar2;
                if (uVar3 < 0x11) {
                    if (uVar3 == 0x10) {
                        uVar3 = 0x4e;
                    }
                    else if (uVar3 < 9) {
                        if (uVar3 == 8) {
                            uVar3 = 0x46;
                        }
                        else if (cVar4 == '\0') {
                            uVar3 = 0x3e;
                        }
                        else if (uVar3 == 1) {
                            uVar3 = 0x3f;
                            uVar2 = 0;
                        }
                        else if (uVar3 == 2) {
                            uVar3 = 0x40;
                            uVar2 = 0;
                        }
                        else if (uVar3 == 3) {
                            uVar3 = 0x41;
                            uVar2 = 0;
                        }
                        else if (uVar3 == 4) {
                            uVar3 = 0x42;
                            uVar2 = 0;
                        }
                        else if (uVar3 == 5) {
                            uVar3 = 0x43;
                            uVar2 = 0;
                        }
                        else {
                            uVar1 = uVar3 - 6;
                            uVar2 = uVar1;
                            if (uVar1 == 0) {
                                uVar3 = 0x44;
                            }
                            else {
                                if (uVar1 != 1) goto code_r0x000174e3;
                                uVar3 = uVar3 + 0x3e;
                            }
                        }
                    }
                    else if (uVar3 == 9) {
                        uVar3 = 0x47;
                        uVar2 = 0;
                    }
                    else if (uVar3 == 10) {
                        uVar3 = 0x48;
                        uVar2 = 0;
                    }
                    else if (uVar3 == 0xb) {
                        uVar3 = 0x49;
                        uVar2 = 0;
                    }
                    else if (uVar3 == 0xc) {
                        uVar3 = 0x4a;
                        uVar2 = 0;
                    }
                    else if (uVar3 == 0xd) {
                        uVar3 = 0x4b;
                        uVar2 = 0;
                    }
                    else {
                        uVar1 = uVar3 - 0xe;
                        uVar2 = uVar1;
                        if (uVar1 == 0) {
                            uVar3 = 0x4c;
                        }
                        else {
                            if (uVar1 != 1) goto code_r0x000174e3;
                            uVar3 = uVar3 + 0x3e;
                        }
                    }
                }
                else if (uVar3 < 0x19) {
                    if (uVar3 == 0x18) {
                        uVar3 = 0x56;
                    }
                    else if (uVar3 == 0x11) {
                        uVar3 = 0x4f;
                        uVar2 = 0;
                    }
                    else if (uVar3 == 0x12) {
                        uVar3 = 0x50;
                        uVar2 = 0;
                    }
                    else if (uVar3 == 0x13) {
                        uVar3 = 0x51;
                        uVar2 = 0;
                    }
                    else if (uVar3 == 0x14) {
                        uVar3 = 0x52;
                        uVar2 = 0;
                    }
                    else if (uVar3 == 0x15) {
                        uVar3 = 0x53;
                        uVar2 = 0;
                    }
                    else {
                        uVar1 = uVar3 - 0x16;
                        uVar2 = uVar1;
                        if (uVar1 == 0) {
                            uVar3 = 0x54;
                        }
                        else {
                            if (uVar1 != 1) goto code_r0x000174e3;
                            uVar3 = uVar3 + 0x3e;
                        }
                    }
                }
                else if (uVar3 == 0x19) {
                    uVar3 = 0x57;
                    uVar2 = 0;
                }
                else if (uVar3 == 0x1a) {
                    uVar3 = 0x58;
                    uVar2 = 0;
                }
                else if (uVar3 == 0x1b) {
                    uVar3 = 0x59;
                    uVar2 = 0;
                }
                else if (uVar3 == 0x1c) {
                    uVar3 = 0x5a;
                    uVar2 = 0;
                }
                else if (uVar3 == 0x1d) {
                    uVar3 = 0x5b;
                    uVar2 = 0;
                }
                else {
                    uVar3 = uVar3 - 0x1e;
                    uVar2 = uVar3;
                    if (uVar3 == 0) {
                        uVar3 = 0x5c;
                    }
                    else if (uVar3 == 1) {
                        uVar3 = 0x5d;
                    }
                    else {
code_r0x000174e3:
                        uVar3 = 0;
                    }
                }
                arg2 = fcn.00015904(CONCAT71(uVar2 >> 8,cVar4));
                fcn.00016f88(uVar3,arg2);
            }
            uVar2 = cVar4 + 1;
            arg1 = arg1 >> 1;
        } while (arg1 != 0);
    }
    return;
}


/* fcn.00023cb8 @ 0x23cb8 */

uint32_t fcn.00023cb8(int64_t arg1)

{
    uint8_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint8_t *puVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    int64_t *piVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    
    uVar8 = 0;
    puVar4 = *(*0x43c08 + 0x38);
    uVar1 = *puVar4;
    uVar5 = *(*(*(puVar4 + (arg1 & 0xffU) * 8 + 0x38) + 8) + 0x14);
    if (uVar5 != 0) {
        piVar7 = *(*(puVar4 + (arg1 & 0xffU) * 8 + 0x38) + 8) + 0x18;
        uVar9 = uVar5;
        do {
            iVar2 = *piVar7;
            if (((iVar2 != 0) && ((*(*(iVar2 + 0x30) + 0xc0) >> 4 & 1) != 0)) && (uVar6 = 0, uVar1 != 0)) {
                do {
                    iVar3 = fcn.0002b5b0(*(*0x43c08 + 0x38) + 0x10,CONCAT71(puVar4 >> 8,uVar6));
                    puVar4 = *(iVar3 + 0x30);
                    if (*(puVar4 + 0x88) == *(*(iVar2 + 0x30) + 0x88)) {
                        uVar8 = uVar8 | 1 << (uVar6 & 0x1f);
                    }
                    uVar5 = uVar6 + 1;
                    uVar6 = uVar5;
                } while (uVar5 < uVar1);
            }
            piVar7 = piVar7 + 1;
            uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
    }
    return uVar8;
}


/* fcn.00012e18 @ 0x12e18 */

bool fcn.00012e18(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    char16_t *arg3_00;
    int64_t in_stack_00000028;
    
    if (((*0x36e74 & 1) != 0) && (arg4 == 0)) {
        fcn.00010374(0x38ee0,0xb4b,0x37ea8);
    }
    iVar1 = fcn.00011b48(0x39000);
    if (in_stack_00000028 == 0) {
        iVar1 = iVar1 * 2 + 0x42;
        iVar2 = fcn.00012418(iVar1);
        arg3_00 = L"%s&OFFSET=0&WIDTH=%016LX";
    }
    else {
        iVar2 = fcn.00011b48(in_stack_00000028);
        iVar1 = iVar1 * 2 + iVar2 * 2;
        iVar2 = fcn.00012418(iVar1 + 2);
        arg3_00 = L"%s%s";
        iVar1 = iVar1 + 2;
    }
    fcn.000104c0(iVar2,iVar1,arg3_00,0x39000);
    if (iVar2 != 0) {
        iVar1 = fcn.00012b8c(iVar2,arg4,arg3);
        fcn.000124cc(iVar2);
        if (iVar1 != 0) {
            iVar2 = fcn.00011b48(0x39000);
            iVar2 = fcn.00012c48(arg1,arg2,iVar1 + (iVar2 + 1) * 2);
            fcn.000124cc(iVar1);
            return iVar2 != 0;
        }
    }
    return false;
}


/* fcn.0002289c @ 0x2289c */

uint fcn.0002289c(void)

{
    return *(*0x429d0 + 0x1a6);
}


/* fcn.00025eb0 @ 0x25eb0 */

int16_t fcn.00025eb0(int64_t arg1)

{
    uint32_t uVar1;
    int16_t iVar2;
    int iVar3;
    int64_t arg2;
    uchar uVar4;
    uint32_t *puVar5;
    uint32_t uVar6;
    uchar auStackX_10 [8];
    uchar auStackX_18 [8];
    uchar auStackX_20 [8];
    int64_t var_2858h;
    int64_t var_2860h;
    uint32_t *puStack_2918;
    uint uStack_2910;
    uint32_t *puStack_2908;
    ulong uStack_2900;
    uint32_t uStack_28f4;
    uchar uStack_28ec;
    uint64_t uStack_28e8;
    uint32_t *puStack_28e0;
    uint uStack_28d4;
    int16_t iStack_28ce;
    uchar uStack_28cc;
    uchar auStack_28c8 [64];
    uchar auStack_2888 [10312];
    
    if (*0x43b68 == '\0') {
        iVar2 = 1;
        uVar4 = 0;
        if (*(*0x429d0 + 0x1ce) - 1U < 2) {
            uVar6 = *(*0x429d0 + 0x1ca);
            if (uVar6 != 0) {
                puStack_2918 = NULL;
                uStack_2910._0_2_ = uStack_2910 & 0xff00;
                uStack_2910 = CONCAT22(1,uStack_2910);
                fcn.0002fdc8(&puStack_2918,uVar6);
                if (puStack_2918 != NULL) {
                    uStack_28cc = 0x28;
                    uStack_28d4 = 0x200;
                    puStack_28e0 = puStack_2918;
                    uStack_28e8 = uVar6;
                    (****(*0x429d0 + 0x240))(*(*0x429d0 + 0x240),&uStack_28e8);
                    if (iStack_28ce == 0) {
                        uVar1 = *puStack_2918;
                        if (uVar1 < 0x1000) {
                            fcn.0002fca4(puStack_2918);
                            fcn.0002fe1c(auStack_28c8,0x200,uVar6,uVar1 + 1);
                            fcn.00030070(auStack_28c8,1);
                            fcn.0002ff5c(auStack_28c8,auStackX_20,auStackX_18,auStackX_10);
                            do {
                                iVar3 = fcn.00030068(auStack_28c8);
                                if (iVar3 == 0) {
                                    *0x43b68 = uVar4;
                                    fcn.0002fca4(auStack_28c8._0_8_);
                                    return 0;
                                }
                                arg2 = fcn.0002ff88(auStack_28c8);
                                fcn.00030724(&puStack_2918,arg2);
                                puVar5 = puStack_2918;
                                uVar6 = uStack_2910 << 9;
                                fcn.0002593c(*0x429d0,puStack_2918,uStack_2910);
                                if ((arg1 != '\0') || (2 < uVar1)) {
                                    uVar4 = 1;
                                    do {
                                        uStack_2900 = 0;
                                        uStack_28ec = 0x28;
                                        uStack_28f4 = uVar6;
                                        if (0x400000 < uVar6) {
                                            uStack_28f4 = 0x400000;
                                        }
                                        puStack_2908 = puVar5;
                                        fcn.0002ef0c(auStack_2888,&puStack_2908,0);
                                        iVar2 = fcn.0002f490(auStack_2888);
                                        if (iVar2 == 0) {
                                            fcn.0002f6c0(auStack_2888);
                                        }
                                        puVar5 = puVar5 + (uStack_28f4 >> 9);
                                        uVar6 = uVar6 - uStack_28f4;
                                    } while (uVar6 != 0);
                                }
                                iVar2 = fcn.0002ff9c(auStack_28c8);
                            } while (iVar2 == 0);
                            fcn.0002fca4(auStack_28c8._0_8_);
                            return iVar2;
                        }
                    }
                    else {
                        iVar2 = iStack_28ce;
                    }
                }
                fcn.0002fca4(puStack_2918);
                return iVar2;
            }
        }
    }
    return 0;
}


/* fcn.00022364 @ 0x22364 */

int16_t fcn.00022364(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    char cVar3;
    int16_t iVar4;
    int16_t iVar5;
    uint64_t arg1_00;
    uchar auStackX_18 [6];
    uint8_t uStackX_1e;
    uint32_t auStack_68 [16];
    
    iVar2 = *0x429d0;
    arg1_00 = arg1 & 0xffffffff;
    cVar3 = fcn.000259a0(*0x429d0);
    if (cVar3 == '\0') {
        iVar4 = 0;
    }
    else {
        if (*(*0x429d0 + 0x156) == 0) {
            uVar1 = *(*0x429d0 + 0x152);
        }
        else {
            uVar1 = *(*0x429d0 + 0x14e);
        }
        fcn.0002fe1c(auStack_68,0x200,uVar1,*(*0x429d0 + 0x1a6));
        iVar5 = 0;
        do {
            if (*(iVar2 + 0x1a6) <= arg1_00) break;
            iVar4 = fcn.000300fc(auStack_68,arg1_00,auStackX_18);
            if (iVar4 != 0) goto code_r0x00025c0c;
            if ((uStackX_1e & 2) != 0) {
                iVar4 = fcn.0002ec94(arg1_00,auStackX_18,*(iVar2 + 0x238));
                if (iVar4 != 0) goto code_r0x00025c0c;
                iVar4 = fcn.0003013c(auStack_68,arg1_00,auStackX_18);
                if (iVar4 != 0) goto code_r0x00025c0c;
            }
            iVar5 = iVar5 + 1;
            arg1_00 = arg1_00 + 1;
        } while (iVar5 < 0x200);
        iVar4 = fcn.0002ff20(auStack_68);
        if (iVar4 == 0) {
            iVar4 = 0;
        }
code_r0x00025c0c:
        fcn.0002fca4(auStack_68[0]);
    }
    return iVar4;
}


/* fcn.00022374 @ 0x22374 */

void fcn.00022374(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00028f9c(*0x43c08,arg1);
    if (arg1_00 != 0) {
        fcn.0002c454(arg1_00,0);
    }
    return;
}


/* fcn.00028f9c @ 0x28f9c */

ulong fcn.00028f9c(uint32_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int16_t iVar1;
    uint in_register_0000000c;
    int64_t noname_0;
    uint8_t uVar2;
    uchar auStackX_8 [8];
    
    noname_0 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = 0;
    if (*(noname_0 + 0x20) != '\0') {
        do {
            arg1_00 = *(noname_0 + uVar2 * 8);
            if (arg1_00 != 0xfffe89ab) {
                fcn.00029010(noname_0,arg1_00,auStackX_8);
                iVar1 = fcn.0001bb9c(auStackX_8,arg2,6);
                if (iVar1 == 0) {
                    return *(noname_0 + uVar2 * 8);
                }
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(noname_0 + 0x20));
    }
    return 0;
}


/* fcn.0002c454 @ 0x2c454 */

ulong fcn.0002c454(int64_t arg1,int64_t arg2)

{
    uint8_t *puVar1;
    ulong *puVar2;
    uint16_t uVar3;
    uint64_t uVar4;
    uint32_t *puVar5;
    uint uVar6;
    int64_t iVar7;
    int64_t iStack_38;
    ulong uStack_30;
    uint64_t uStack_28;
    int64_t iStack_20;
    uint uStack_14;
    uchar uStack_c;
    
    iVar7 = *(arg1 + 0xc0);
    puVar1 = iVar7 + 0x4d;
    *puVar1 = *puVar1 & 0xfe;
    puVar1 = iVar7 + 0x4d;
    *puVar1 = *puVar1 | arg2 & 0xffffffffffffff01U;
    puVar2 = *(*(arg1 + 200) + 0x68);
    uStack_30 = 0x2c480;
    (***puVar2)(puVar2,CONCAT71((arg2 & 0xffffffffffffff01U) >> 8,1));
    uStack_30 = 0x2c48c;
    fcn.00025e3c(*0x429d0);
    puVar5 = *0x429d0;
    iVar7 = *(arg1 + 0xc0);
    uStack_30 = 0x26fa5;
    uVar6 = fcn.0002c914(iVar7);
    *(puVar5 + 0xca) = uVar6;
    *(puVar5 + 0x2d) = *(iVar7 + 0x4c);
    *(puVar5 + 0xc6) = *(puVar5 + 0xc6) ^ (*(iVar7 + 0x4d) ^ *(puVar5 + 0xc6)) & 1;
    iStack_38 = 0;
    uVar4 = uStack_30 >> 0x20;
    uVar3 = uStack_30;
    uStack_30._0_4_ = CONCAT22(1,uVar3 & 0xff00);
    uStack_30 = CONCAT44(uVar4,uStack_30);
    fcn.0002fdc8(&stack0xffffffffffffffc8,0);
    if (iStack_38 != 0) {
        *(puVar5 + 9) = 6;
        fcn.0001ba1c(iStack_38,0x1ec,puVar5 + 4,0x1ec);
        uStack_28 = *puVar5;
        iVar7 = 2;
        iStack_20 = iStack_38;
        uStack_14 = 0x200;
        uStack_c = 0x2a;
        do {
            (****(*0x429d0 + 0x90))(*(*0x429d0 + 0x90),&stack0xffffffffffffffd8);
            uStack_28 = uStack_28 + 0x10;
            iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
    }
    fcn.0002fca4(iStack_38);
    return 1;
}


/* fcn.0002c914 @ 0x2c914 */

uint fcn.0002c914(int64_t arg1)

{
    return *(*(*(arg1 + 8) + 0x68) + 0x20);
}


/* fcn.0002fdc8 @ 0x2fdc8 */

void fcn.0002fdc8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    
    if (*arg1 != 0) {
        fcn.0002fca4(*arg1);
    }
    *(arg1 + 8) = 0;
    iVar1 = fcn.0002fc78(*(arg1 + 10),arg2 & 0xffffffff);
    *arg1 = iVar1;
    if (iVar1 == 0) {
        uVar2 = fcn.0002fd0c(*(arg1 + 10),arg2 & 0xffffffff);
        *arg1 = uVar2;
    }
    else {
        *(arg1 + 8) = 1;
    }
    return;
}


/* fcn.0002fca4 @ 0x2fca4 */

void fcn.0002fca4(uint32_t arg1)

{
    uint32_t *puVar1;
    uint in_register_0000000c;
    uint16_t uVar2;
    uint16_t uVar3;
    
    uVar2 = 0;
    uVar3 = 0;
    do {
        if (*(uVar3 * 0x10 + 0x4a288) == CONCAT44(in_register_0000000c,arg1)) {
            puVar1 = uVar3 * 0x10 + 0x4a280;
            *puVar1 = *puVar1 & 0x7fffffff;
            return;
        }
        uVar3 = uVar3 + 1;
    } while (uVar3 < 3);
    do {
        if (*(uVar2 * 0x10 + 0x4a258) == CONCAT44(in_register_0000000c,arg1)) {
            puVar1 = uVar2 * 0x10 + 0x4a250;
            *puVar1 = *puVar1 & 0x7fffffff;
            return;
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 3);
    return;
}


/* fcn.00025e3c @ 0x25e3c */

void fcn.00025e3c(int64_t arg1)

{
    *(arg1 + 0x1ba) = *(arg1 + 0x1ba) + 1;
    return;
}


/* fcn.000233d4 @ 0x233d4 */

uint32_t fcn.000233d4(int64_t arg1)

{
    uint8_t uVar1;
    char cVar2;
    int iVar3;
    int64_t iVar4;
    uchar *arg2;
    uint8_t uVar5;
    uint32_t uVar6;
    uchar auStack_18 [16];
    
    arg2 = auStack_18;
    iVar3 = fcn.0002239c(arg1,arg2);
    if (iVar3 == 0) {
        uVar6 = 0;
        uVar5 = 0;
        uVar1 = **(*0x43c08 + 0x38);
        if (uVar1 != 0) {
            do {
                arg2 = CONCAT71(arg2 >> 8,uVar5);
                iVar4 = fcn.0002b5b0(*(*0x43c08 + 0x38) + 0x10,arg2);
                if (((iVar4 != 0) && (*(iVar4 + 0x28) != 0)) && (cVar2 = fcn.0002ae7c(*(iVar4 + 0x28)), cVar2 == arg1))
                {
                    uVar6 = uVar6 | 1 << (uVar5 & 0x1f);
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < uVar1);
        }
    }
    else {
        uVar6 = 0;
    }
    return uVar6;
}


/* fcn.00023534 @ 0x23534 */

ulong fcn.00023534(uint32_t arg1)

{
    if (arg1 == 4) {
        return 0x78;
    }
    if (arg1 != 8) {
        return 0x7e;
    }
    return 0x3e;
}


/* fcn.00024100 @ 0x24100 */

ulong fcn.00024100(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint8_t uVar2;
    ulong uVar3;
    uint8_t uVar4;
    
    uVar4 = arg1;
    uVar1 = fcn.00024420(arg2);
    uVar2 = fcn.00024388(arg2);
    if ((uVar1 <= uVar4) && (uVar4 <= uVar2)) {
        return 0;
    }
    if (uVar1 == uVar2) {
        if (uVar1 == 2) {
            return 0x24;
        }
        if (uVar1 == 4) {
            return 0x25;
        }
    }
    if (uVar2 < uVar4) {
        uVar3 = 0x23;
        if (uVar2 != 4) {
            uVar3 = 10;
        }
    }
    else if (uVar1 == 1) {
        uVar3 = 0x20;
    }
    else if (uVar1 == 2) {
        uVar3 = 0x21;
    }
    else if (uVar1 == 3) {
        uVar3 = 0x22;
    }
    else {
        uVar3 = 9;
    }
    return uVar3;
}


/* fcn.00022814 @ 0x22814 */

ushort fcn.00022814(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    
    uVar1 = 0;
    while ((*(uVar1 * 0xc + 0x36f60) != arg1 || (*(uVar1 * 0xc + 0x36f64) != arg2))) {
        uVar1 = uVar1 + 1;
        if (0xc < uVar1) {
            return 0x80;
        }
    }
    if (arg3 != '\0') {
        return *(uVar1 * 0xc + 0x36f66);
    }
    return *(uVar1 * 0xc + 0x36f68);
}


/* fcn.00023b10 @ 0x23b10 */

ulong fcn.00023b10(int64_t arg1)

{
    ulong uVar1;
    uint32_t uVar2;
    
    uVar2 = arg1 & 0xffff;
    uVar1 = 0x100;
    if (uVar2 < 0x101) {
        if (uVar2 == 0x100) {
            return 0x80;
        }
        uVar1 = 2;
        if (uVar2 == 2) {
            return 1;
        }
        if ((((uVar2 != 4) && (uVar1 = 4, uVar2 != 8)) && (uVar1 = 8, uVar2 != 0x10)) &&
           ((uVar1 = 0x10, uVar2 != 0x20 && (uVar1 = 0x20, uVar2 != 0x40)))) {
            if (uVar2 != 0x80) {
                return 0;
            }
            return 0x40;
        }
    }
    else if (uVar2 != 0x200) {
        if (uVar2 == 0x400) {
            uVar1 = 0x200;
        }
        else {
            uVar1 = 0x800;
            if (uVar2 == 0x800) {
                return 0x400;
            }
            if (uVar2 != 0x1000) {
                uVar1 = 0x2000;
                if (uVar2 == 0x2000) {
                    return 0x1000;
                }
                if (uVar2 != 0x3fdc) {
                    if (uVar2 != 0x8000) {
                        return 0;
                    }
                    return 0x4000;
                }
            }
        }
    }
    return uVar1;
}


/* fcn.0001e87c @ 0x1e87c */

ulong fcn.0001e87c(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong uVar2;
    
    if ((arg1 == 0) || (arg3 == 0)) {
        uVar2 = 1;
    }
    else if (arg2 < 8) {
        uVar1 = fcn.0001d068(arg1,(arg2 & 0xff) * 0x80 + 0x118);
        *arg3 = uVar1 >> 0x15 & 1;
        uVar2 = 0;
    }
    else {
        uVar2 = 9;
    }
    return uVar2;
}


/* fcn.0001e8d0 @ 0x1e8d0 */

ulong fcn.0001e8d0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong extraout_RAX;
    unkbyte7 in_R9;
    uchar auStack_48 [12];
    uint uStack_3c;
    uint8_t uStack_38;
    uchar uStack_25;
    uchar uStack_24;
    ushort uStack_22;
    
    if (arg1 == 0) {
        uVar2 = 1;
    }
    else if (arg2 < 8) {
        uVar1 = *(arg1 + 0x10 + ((arg2 & 0xffU) + 2) * 0x18);
        if ((uVar1 & 4) == 0) {
            uVar2 = 8;
        }
        else if ((uVar1 & 1) == 0) {
            fcn.0001ba7c(auStack_48,0,0x35);
            uStack_3c = 0;
            uStack_25 = 0xb0;
            uStack_22 = 0xc24f;
            uStack_38 = arg2;
            uStack_24 = arg3;
            fcn.0001d764(arg1,auStack_48,60000000,CONCAT71(in_R9,1));
            uVar2 = extraout_RAX;
            if (extraout_RAX == 0) {
                if (uStack_22 == 'O') {
                    if (uStack_22._1_1_ == -0x3e) {
                        return 0;
                    }
                }
                else if ((uStack_22 == -0xc) && (uStack_22._1_1_ == ',')) {
                    return 3;
                }
                uVar2 = 2;
            }
        }
        else {
            uVar2 = 7;
        }
    }
    else {
        uVar2 = 9;
    }
    return uVar2;
}


/* fcn.000211a0 @ 0x211a0 */

uint32_t fcn.000211a0(int64_t arg1)

{
    return *(arg1 + 0x8c) >> 7 & 0xffffff01;
}


/* fcn.00021180 @ 0x21180 */

uint fcn.00021180(int64_t arg1)

{
    return *(arg1 + 0x94);
}


/* fcn.00021188 @ 0x21188 */

ulong fcn.00021188(int64_t arg1)

{
    return *(arg1 + 0x98);
}


/* fcn.00021190 @ 0x21190 */

void fcn.00021190(int64_t arg1)

{
    //WARNING: Could not recover jumptable at 0x00021193. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*arg1 + 0x10))();
    return;
}


/* fcn.00020fa4 @ 0x20fa4 */

void fcn.00020fa4(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint16_t uVar2;
    uint32_t arg1_00;
    uint in_register_0000000c;
    int64_t iVar3;
    char *arg2_00;
    ulong uVar4;
    int64_t in_R9;
    uchar uStack_18;
    ulong uStack_17;
    uint uStack_f;
    ushort uStack_b;
    uchar uStack_9;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (arg2 == 0) {
        return;
    }
    if (arg3 == 0) {
        return;
    }
    uStack_18 = 0;
    uStack_17 = 0;
    uStack_f = 0;
    uStack_b = 0;
    uStack_9 = 0;
    arg1_00 = arg3;
    if (*(iVar3 + 0xa0) != '\x02') {
        uVar4 = 0;
        if (*(iVar3 + 0xa0) != '\x03') {
            fcn.0001bbd0(arg2,iVar3 + 0x2d,0x29);
            fcn.0001bbd0(arg3,iVar3 + 0x1c,0x11);
            return;
        }
        fcn.0001bbd0(arg2,0x36520,0x29);
        fcn.0001c5f4(arg3,*(iVar3 + 0x80),CONCAT71(uVar4 >> 8,1),in_R9);
        goto code_r0x000210fe;
    }
    iVar1 = *(*(*(iVar3 + 0xd8) + 0x10) + 0x28);
    if (iVar1 == 1) {
        arg2_00 = "(RAID 0)";
code_r0x0002108d:
        fcn.0001bbd0(&uStack_18,arg2_00,0x10);
    }
    else {
        if (iVar1 == 2) {
            arg2_00 = "(RAID 1)";
            goto code_r0x0002108d;
        }
        if (iVar1 == 4) {
            arg2_00 = "(RAID 5)";
            goto code_r0x0002108d;
        }
        if (iVar1 == 8) {
            arg2_00 = "(RAID 10)";
            goto code_r0x0002108d;
        }
        uStack_18 = 0;
    }
    uVar4 = 0;
    fcn.0001bbd0(arg2,iVar3 + 0x2d,0x29);
    fcn.0001c5f4(arg3,*(iVar3 + 0x80),CONCAT71(uVar4 >> 8,1),in_R9);
    uVar2 = fcn.0001bb80(arg1_00);
    fcn.0001bbd0(uVar2 + arg3,0x36f54,0x11);
    uVar2 = fcn.0001bb80(arg1_00);
    fcn.0001bbd0(uVar2 + arg3,&uStack_18,0x11);
code_r0x000210fe:
    uVar2 = fcn.0001bb80(arg2);
    *(uVar2 + 1 + arg2) = 0;
    uVar2 = fcn.0001bb80(arg1_00);
    *(uVar2 + 1 + arg3) = 0;
    return;
}


/* fcn.0001a0ac @ 0x1a0ac */

void fcn.0001a0ac(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    
    uVar1 = fcn.0001cab4(arg2 & 0xffffffff);
    if (uVar1 < 2) {
        if (*(arg1 + 1) == '\x12') {
            *(arg1 + 8) = 0xffff;
        }
        else if (*(arg1 + 1) == '\x17') {
            *(arg1 + 8) = 0xffffffffffffffff;
        }
    }
    return;
}


/* fcn.00021178 @ 0x21178 */

uint fcn.00021178(int64_t arg1)

{
    return *(arg1 + 0x90);
}


/* fcn.0001516c @ 0x1516c */

void fcn.0001516c(int64_t arg1)

{
    char cVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    
    *0x42ee3 = *0x42ee3 + 1;
    if (*0x42ee0 != 0) {
        if (*0x42ee1 == '\0') {
            cVar1 = fcn.0001522c(arg1);
            *0x42ee0 = -(cVar1 != '\0') & *0x42ee0;
        }
        if ((*0x42ee0 != 0) && (*0x42ee1 != '\0')) {
            uVar3 = 0;
            if (*0x42ef5 != 0) {
                do {
                    cVar1 = fcn.00015118(arg1,uVar3 * 0x31 + 0x43518);
                    if (cVar1 != '\0') {
                        *0x42ee4 = *0x42ee4 + 1;
                        break;
                    }
                    uVar2 = uVar3 + 1;
                    uVar3 = uVar2;
                } while (uVar2 < *0x42ef5);
            }
            if ((*0x42ee4 != *0x42ef5) || (*0x42ee5 = 1, *0x42ee4 != *0x42ee3)) {
                *0x42ee5 = 0;
            }
        }
    }
    return;
}


/* fcn.0001a1ec @ 0x1a1ec */

int64_t fcn.0001a1ec(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    
    if ((arg2 & 8U) == 0) {
        iVar2 = 0;
    }
    else {
        iVar1 = fcn.0001b164(arg1,0);
        if (iVar1 == 0) {
            iVar2 = -0x7ffffffffffffff2;
        }
        else {
            *(iVar1 + 200) = 0x1b83c;
            *(iVar1 + 0xd0) = 0x1b8b4;
            iVar2 = (**(*0x4af30 + 0x148))(iVar1 + 8,0x427e8,iVar1 + 200,0);
            if (-1 < iVar2) {
                *(iVar1 + 0xd8) = 1;
                *(iVar1 + 0xdb) = 1;
            }
        }
    }
    return iVar2;
}


/* fcn.00021274 @ 0x21274 */

bool fcn.00021274(int64_t arg1,int64_t arg2)

{
    ulong uStack_28;
    ulong uStack_20;
    int iStack_14;
    int16_t iStack_10;
    char cStack_c;
    
    fcn.00025abc(*0x429d0);
    uStack_28 = *arg2;
    uStack_20 = *(arg2 + 8);
    iStack_14 = *(arg2 + 0x10) << 9;
    cStack_c = (-(*(arg2 + 0x14) != '\0') & 2U) + 0x28;
    (***arg1)(arg1,&uStack_28);
    return iStack_10 != 0;
}


/* fcn.00025abc @ 0x25abc */

void fcn.00025abc(int64_t arg1)

{
    char cVar1;
    
    cVar1 = fcn.000259a0(arg1);
    if (((cVar1 != '\0') && (*(arg1 + 0x1f2) == '\0')) &&
       (*(arg1 + 0x1f0) = *(arg1 + 0x1f0) + 1, 100 < *(arg1 + 0x1f0))) {
        *(arg1 + 0x1d0) = *(arg1 + 0x1d0) | 2;
        *(arg1 + 0x1f2) = 1;
        fcn.00026fe4(arg1);
    }
    return;
}


/* fcn.000259a0 @ 0x259a0 */

uint64_t fcn.000259a0(uint32_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint64_t in_RAX;
    uint64_t uVar3;
    uint in_register_0000000c;
    uchar uVar4;
    
    uVar4 = 0;
    if (((*(CONCAT44(in_register_0000000c,arg1) + 0x238) == 0) ||
        (*(CONCAT44(in_register_0000000c,arg1) + 0x240) == 0)) ||
       ((*(CONCAT44(in_register_0000000c,arg1) + 0x1d0) & 0x80) == 0)) {
        return in_RAX & 0xffffffffffffff00;
    }
    uVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0xb4);
    uVar3 = uVar1;
    if (uVar1 < 3) goto code_r0x000259df;
    if (uVar1 != 3) {
        uVar2 = uVar1;
        if (uVar2 < 5) goto code_r0x000259df;
        if (8 < uVar2) {
            uVar3 = uVar2 - 10;
            goto code_r0x000259df;
        }
    }
    uVar4 = 1;
code_r0x000259df:
    return CONCAT71(uVar3 >> 8,uVar4);
}


/* fcn.00026fe4 @ 0x26fe4 */

ulong fcn.00026fe4(int64_t arg1)

{
    int64_t iVar1;
    int64_t var_30h;
    int8_t var_28h;
    int16_t var_26h;
    int64_t var_20h;
    int64_t var_18h;
    int32_t var_ch;
    int8_t var_4h;
    
    var_30h = 0;
    var_28h = 0;
    var_26h = 1;
    fcn.0002fdc8(&var_30h,0);
    if (var_30h != 0) {
        *(arg1 + 0x24) = 6;
        fcn.0001ba1c(var_30h,0x1ec,arg1 + 4,0x1ec);
        var_20h = *arg1;
        iVar1 = 2;
        var_18h = var_30h;
        var_ch = 0x200;
        var_4h = 0x2a;
        do {
            (****(*0x429d0 + 0x240))(*(*0x429d0 + 0x240),&var_20h);
            var_20h = var_20h + 0x10;
            iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
    }
    fcn.0002fca4(var_30h);
    return 1;
}


/* fcn.000204f0 @ 0x204f0 */

uint64_t fcn.000204f0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    code *pcVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t arg2_00;
    int64_t iStackX_20;
    uint32_t in_stack_00000028;
    int in_stack_00000030;
    uint32_t uStack_48;
    
    uVar5 = arg2;
    if (in_stack_00000030 == 2) {
        uVar2 = fcn.0001ff58(arg1,arg2);
        return uVar2;
    }
    pcVar3 = 0x20774;
    if (in_stack_00000030 == 0) {
        pcVar3 = 0x203cc;
    }
    if ((uVar5 != 0) && (uVar5 <= *(arg1 + 200))) {
        iVar4 = 0;
        if (((arg3 & 3U) == 0) ||
           (iVar4 = fcn.0001b9e4(*(arg1 + 0xd8 + (uVar5 - 1) * 0x18) * *(arg1 + 0x118) + 4), iVar4 != 0)) {
            uVar2 = 0;
            uStack_48 = 1;
            if (iVar4 != 0) {
                uVar2 = iVar4 + 4U & 0xfffffffc;
            }
            iStackX_20 = arg4;
            do {
                if (in_stack_00000028 == 0) break;
                uVar1 = in_stack_00000028;
                if (*(arg1 + 0x118) < in_stack_00000028) {
                    uVar1 = *(arg1 + 0x118);
                }
                arg2_00 = *(arg1 + 0xd8 + (uVar5 - 1) * 0x18) * uVar1;
                if ((iVar4 != 0) && (in_stack_00000030 == 1)) {
                    fcn.0001ba1c(uVar2,arg2_00,arg3,arg2_00);
                }
                uVar6 = arg3;
                if (iVar4 != 0) {
                    uVar6 = uVar2;
                }
                uStack_48 = (*pcVar3)(arg1,arg2 & 0xffffffff,uVar6,iStackX_20,uVar1);
                if ((iVar4 != 0) && (in_stack_00000030 == 0)) {
                    fcn.0001ba1c(arg3,arg2_00,uVar2,arg2_00);
                }
                arg3 = arg3 + arg2_00;
                iStackX_20 = iStackX_20 + uVar1;
                in_stack_00000028 = in_stack_00000028 - uVar1;
            } while (uStack_48 == 1);
            if (iVar4 != 0) {
                fcn.0001b9d8(iVar4);
            }
            uVar2 = uStack_48;
            goto code_r0x00020688;
        }
    }
    uVar2 = 0;
code_r0x00020688:
    return uVar2;
}


/* fcn.00017a44 @ 0x17a44 */

char fcn.00017a44(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    ulong uStack_28;
    ulong uStack_20;
    uint uStack_18;
    int iStack_14;
    int iStack_10;
    
    piVar1 = *arg1;
    if (*piVar1 == 1) {
        uStack_28 = *arg2;
        cVar3 = '\0';
        uStack_18 = *(arg2 + 0x10);
        uStack_20 = *(arg2 + 8);
        if (*(arg2 + 0x14) == '\0') {
            iStack_14 = 1;
        }
        else {
            iStack_14 = (*(arg2 + 0x14) != '\x01') + 2;
        }
        iVar2 = fcn.0001d93c(*(piVar1 + 4),CONCAT71(arg2 >> 8,*(arg1 + 8)),&uStack_28,0);
        if (iVar2 != 0) {
            cVar3 = (iVar2 == 3) + '\x01';
        }
        return cVar3;
    }
    if (*piVar1 != 2) {
        return '\x01';
    }
    iStack_10 = 0;
    cVar3 = '\x01';
    if (*(arg2 + 0x14) != '\0') {
        iStack_10 = (*(arg2 + 0x14) != '\x01') + 1;
    }
    uStack_18 = *(arg2 + 0x10);
    iVar2 = fcn.000204f0(*(piVar1 + 4),*(arg1 + 8) + 1,*(arg2 + 8),*arg2);
    if (iVar2 == 1) {
        cVar3 = '\0';
    }
    else if (iVar2 == 2) {
        cVar3 = '\x03';
    }
    else if (iVar2 == 3) {
        cVar3 = '\x04';
    }
    return cVar3;
}


/* fcn.00014dcc @ 0x14dcc */

void fcn.00014dcc(void)

{
    *0x42ee0 = 0;
    *0x42ee1 = 0;
    *0x42ee2 = 0;
    *0x42ee3 = 0;
    *0x42ee4 = 0;
    *0x42ee5 = 0;
    *0x42ee6 = 0;
    return;
}


/* fcn.000206a4 @ 0x206a4 */

ulong fcn.000206a4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    uint32_t auStack_48 [10];
    uint32_t uStack_20;
    uint uStack_1c;
    
    if ((*(arg1 + 0x11c) & 1) == 0) {
        uVar1 = 0;
    }
    else {
        fcn.0001ba7c(auStack_48,0,0x40);
        uStack_1c = in_stack_00000030;
        auStack_48[0] = (arg2 != 0) + 0x81 | auStack_48[0] & 0xffffff00;
        uStack_20 = ((arg3 & 0xff) << 0x10 | arg4) << 8 | uStack_20;
        uVar1 = fcn.0001fa44(arg1,auStack_48,in_stack_00000028,in_stack_00000030);
    }
    return uVar1;
}


/* fcn.0001db38 @ 0x1db38 */

uint fcn.0001db38(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar uVar1;
    uint uVar2;
    int64_t noname_5;
    uint64_t arg1_00;
    uint32_t arg4_00;
    uint64_t uVar3;
    int64_t arg1_01;
    int64_t unaff_R13;
    int64_t unaff_R14;
    ushort in_stack_00000028;
    int64_t in_stack_00000030;
    uint64_t in_stack_00000038;
    int64_t in_stack_00000040;
    unkbyte6 in_stack_ffffffffffffffca;
    
    arg1_01 = 0;
    uVar1 = arg4;
    arg1_00 = 0;
    arg4_00 = in_stack_00000038;
    uVar3 = arg4_00 & 0x1ff;
    if ((in_stack_00000038 & 0x1ff) != 0) {
        arg1_00 = (in_stack_00000038 - uVar3) + 0x200;
        arg1_01 = fcn.0001b9e4(arg1_00);
        if (arg1_01 == 0) {
            return 2;
        }
        fcn.0001ba7c(arg1_01,0,arg1_00);
        if (arg3 == 0) {
            arg4 = in_stack_00000038;
            fcn.0001ba1c(arg1_01,arg1_00,in_stack_00000030,arg4_00);
        }
    }
    noname_5 = in_stack_00000030;
    if (uVar3 != 0) {
        noname_5 = arg1_01;
        in_stack_00000038 = arg1_00;
    }
    uVar2 = fcn.0001d42c(arg1,CONCAT71(in_stack_00000038 >> 8,arg2),arg3 & 0xffffffff,CONCAT71(arg4 >> 8,uVar1),
                         CONCAT62(in_stack_ffffffffffffffca,in_stack_00000028),noname_5,in_stack_00000038,
                         in_stack_00000040,unaff_R14,unaff_R13);
    if ((uVar3 != 0) && (arg1_01 != 0)) {
        if (arg3 == 1) {
            fcn.0001ba1c(in_stack_00000030,arg1_00,arg1_01,arg4_00);
        }
        fcn.0001b9d8(arg1_01);
    }
    return uVar2;
}


/* fcn.000236b8 @ 0x236b8 */

uint32_t fcn.000236b8(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    
    iVar2 = fcn.0002ceb0(*0x43c08 + 0x48,arg1);
    uVar1 = 0;
    if (iVar2 != 0) {
        uVar1 = *(iVar2 + 0x8c) >> 6 & 1;
    }
    return uVar1;
}


/* fcn.0002ceb0 @ 0x2ceb0 */

int64_t fcn.0002ceb0(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint in_register_00000014;
    uint8_t uVar2;
    
    uVar2 = 0;
    if (*(arg1 + 0x1b00) != 0) {
        do {
            iVar1 = uVar2 * 0xd8 + arg1;
            if ((*(iVar1 + 0xd0) == '\0') && (*(iVar1 + 0xb8) == CONCAT44(in_register_00000014,arg2))) {
                return iVar1;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(arg1 + 0x1b00));
    }
    return 0;
}


/* fcn.0001c9c4 @ 0x1c9c4 */

uint64_t fcn.0001c9c4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t arg3_00;
    int64_t arg4;
    uchar auStack_208 [512];
    
    uVar3 = 0x200;
    fcn.0001ba7c(auStack_208,0,0x200);
    arg4 = 1;
    arg3_00 = CONCAT71(uVar3 >> 8,1);
    uVar2 = fcn.000185c8(arg1,1,arg3_00,1);
    if ((uVar2 == 0) && (uVar2 = fcn.0001c698(auStack_208,2,arg3_00,arg4), uVar2 != 0)) {
        if (arg2 == 0) {
            uVar1 = *(uVar2 + 4) >> 2;
        }
        else {
            if (arg2 != 1) goto code_r0x0001ca4d;
            uVar1 = *(uVar2 + 4) >> 4;
        }
        return CONCAT71(uVar2 >> 8,uVar1) & 0xffffffffffffff01;
    }
code_r0x0001ca4d:
    return uVar2 & 0xffffffffffffff00;
}


/* fcn.00024674 @ 0x24674 */

ulong fcn.00024674(int64_t arg1)

{
    int64_t arg1_00;
    ulong uVar1;
    
    arg1_00 = fcn.0002ceb0(*0x43c08 + 0x48,arg1);
    if (arg1_00 == 0) {
        uVar1 = 1;
    }
    else {
        *(arg1_00 + 0x8c) = *(arg1_00 + 0x8c) & 0xffffffbf;
        if ((*(arg1_00 + 0xc0) & 0x40) == 0) {
            *(arg1_00 + 0xc0) = *(arg1_00 + 0xc0) | 0x40;
            fcn.000277c4(arg1_00);
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00024624 @ 0x24624 */

ulong fcn.00024624(int64_t arg1)

{
    int64_t arg1_00;
    ulong uVar1;
    
    arg1_00 = fcn.0002ceb0(*0x43c08 + 0x48,arg1);
    if (arg1_00 == 0) {
        uVar1 = 1;
    }
    else {
        *(arg1_00 + 0x8c) = *(arg1_00 + 0x8c) | 0x40;
        if ((*(arg1_00 + 0xc0) & 0x1000000) == 0) {
            *(arg1_00 + 0xc0) = *(arg1_00 + 0xc0) | 0x1000000;
            fcn.000277c4(arg1_00);
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00023590 @ 0x23590 */

uint fcn.00023590(int64_t arg1)

{
    uint uVar1;
    int64_t iVar2;
    
    iVar2 = fcn.0002ceb0(*0x43c08 + 0x48,arg1);
    uVar1 = 0;
    if (iVar2 != 0) {
        uVar1 = *(iVar2 + 0x94);
    }
    return uVar1;
}


/* fcn.0001a9e8 @ 0x1a9e8 */

void fcn.0001a9e8(int64_t arg1)

{
    char cVar1;
    uint8_t uVar2;
    int64_t arg1_00;
    ulong *puVar3;
    uint32_t uVar4;
    int64_t iVar5;
    
    if (arg1 != 0) {
        uVar4 = 0;
        for (iVar5 = *0x43868; iVar5 != 0; iVar5 = *(iVar5 + 0x20)) {
            for (puVar3 = *(iVar5 + 0x10); puVar3 != NULL; puVar3 = *puVar3) {
                arg1_00 = fcn.0001ca6c(puVar3[0x11]);
                if (arg1_00 != 0) {
                    cVar1 = fcn.000116c4(arg1_00);
                    if (cVar1 == '\x03') {
                        if (*(arg1_00 + 1) == '\x12') {
                            uVar4 = *(arg1_00 + 4);
                        }
                        else {
                            if (*(arg1_00 + 1) != '\x17') {
                                return;
                            }
                            uVar4 = *(arg1_00 + 4);
                        }
                    }
                    uVar2 = fcn.0001cab4(uVar4);
                    if ((1 < uVar2) && ((arg1 & uVar4) != 0)) {
                        if (*(puVar3 + 0xd9) == '\0') {
                            return;
                        }
                        (**(*0x4af30 + 0x150))(puVar3[1],0x42728,puVar3 + 5,0);
                        return;
                    }
                }
            }
        }
    }
    return;
}


/* fcn.00020204 @ 0x20204 */

uchar fcn.00020204(int64_t arg1)

{
    return *(arg1 + 0x122);
}


/* fcn.000201f4 @ 0x201f4 */

uchar fcn.000201f4(int64_t arg1)

{
    return *(arg1 + 0x123);
}


/* fcn.0002020c @ 0x2020c */

uchar fcn.0002020c(int64_t arg1)

{
    return *(arg1 + 0x124);
}


/* fcn.00020060 @ 0x20060 */

void fcn.00020060(int64_t arg1,int64_t arg2)

{
    uint32_t auStack_48 [10];
    uint32_t uStack_20;
    uint uStack_1c;
    
    fcn.0001ba7c(auStack_48,0,0x40);
    auStack_48[1] = 0;
    auStack_48[0] = auStack_48[0] & 0xffffff82 | 0x82;
    uStack_20 = uStack_20 | 0xef000000;
    uStack_1c = 0x10;
    fcn.0001fa44(arg1,auStack_48,arg2,0x10);
    return;
}


/* fcn.0001fa44 @ 0x1fa44 */

//WARNING: Removing unreachable block (ram,0x0001fc0e)

uint fcn.0001fa44(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    char cVar2;
    uint uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iStackX_18;
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    int64_t in_stack_00000038;
    
    iVar1 = in_stack_00000028;
    iVar4 = *(in_stack_00000028 + 0x48) * 0x40 + *(in_stack_00000028 + 8);
    iVar5 = *(in_stack_00000028 + 0x4c) * 0x10 + *(in_stack_00000028 + 0x10);
    iStackX_18 = arg3;
    fcn.0001ba1c(iVar4,0x40,arg2,0x40);
    *(iVar4 + 2) = *(in_stack_00000028 + 0x52);
    *(in_stack_00000028 + 0x52) = *(in_stack_00000028 + 0x52) + 1;
    if ((arg3 != 0) && (arg4 != 0)) {
        cVar2 = fcn.0001a03c();
        if (cVar2 != '\0') {
            cVar2 = fcn.0001fc50(arg1,arg2,&iStackX_18);
            if (cVar2 == '\0') {
                return 0;
            }
            arg3 = iStackX_18;
        }
        fcn.000208e4(arg1,iVar4 + 0x18,iVar4 + 0x20,arg3);
    }
    fcn.0001ba7c(iVar5,-(*(in_stack_00000028 + 0x50) != '\0') & 0xff,0x10);
    uVar3 = 1;
    *(in_stack_00000028 + 0x48) = *(in_stack_00000028 + 2) - 1U & *(in_stack_00000028 + 0x48) + 1U;
    iVar4 = *(in_stack_00000028 + 0x40) + *(arg1 + 8);
    fcn.00019c78(*arg1,iVar4,*(in_stack_00000028 + 0x48));
    in_stack_00000028 = fcn.0001bc9c(in_stack_00000038,iVar4);
    do {
        if ((*(iVar5 + 0xc) >> 0x10 & 1) != *(iVar1 + 0x50)) {
            if (in_stack_00000030 != 0) {
                fcn.0001ba1c(in_stack_00000030,0x10,iVar5,0x10);
            }
            if (((*(iVar5 + 0xc) & 0xe000000) != 0) || ((*(iVar5 + 0xc) & 0x1fe0000) != 0)) {
                uVar3 = 0;
            }
            *(iVar1 + 0x4c) = *(iVar1 + 4) - 1U & *(iVar1 + 0x4c) + 1U;
            fcn.00019c78(*arg1,*(iVar1 + 0x44) + *(arg1 + 8),*(iVar1 + 0x4c));
            if (*(iVar1 + 0x4c) == 0) {
                *(iVar1 + 0x50) = *(iVar1 + 0x50) ^ 1;
            }
            return uVar3;
        }
        cVar2 = fcn.0001bcfc(&stack0x00000028,iVar4);
    } while (cVar2 == '\0');
    fcn.00020858(arg1);
    return 3;
}


/* fcn.00035828 @ 0x35828 */

int64_t fcn.00035828(void)

{
    unkuint7 Var1;
    
    Var1 = *0x42df0 >> 8;
    if ((((*0x42df0 != -1) && (*0x42df0 != 0x28c0)) && (*0x42df0 != -0x75cb)) &&
       ((*0x42df0 != -0x65f5 && (*0x42df0 != 0x4c3d)))) {
        return CONCAT71(Var1,1);
    }
    return Var1 << 8;
}


/* fcn.00020d50 @ 0x20d50 */

void fcn.00020d50(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    char cVar4;
    uchar uVar5;
    uint32_t uVar6;
    int64_t arg1_01;
    uint32_t uVar7;
    uint64_t arg3;
    
    iVar3 = *0x43c08;
    arg1_00 = *0x43c08 + 0x48;
    uVar6 = arg1_00;
    cVar4 = fcn.0002cf20(uVar6);
    uVar5 = 0;
    if (cVar4 != '\0') {
        return;
    }
    if (0x1f < *(iVar3 + 0x1b48)) {
        return;
    }
    uVar1 = *(arg2 + 0xc);
    uVar7 = (uVar1 & 2) << 9;
    uVar2 = uVar7 | 0x1008038;
    if ((uVar1 & 0x44) == 0) {
        uVar2 = uVar7 | 0x8038;
    }
    uVar7 = uVar2 | 0x2000040;
    if ((uVar1 & 0x8000) == 0) {
        uVar7 = uVar2;
    }
    arg3 = uVar7;
    arg1_01 = fcn.0002ce30(uVar6,arg2 + 0x3d);
    if (arg1_01 == 0) {
        arg1_01 = fcn.0002cce4(arg1_00,arg2 + 0x3d,arg3,*arg2);
    }
    fcn.000273a8(arg1_01,arg1,arg2,arg3);
    uVar6 = *(arg1_01 + 0xc0);
    if ((uVar6 & 0x84) == 0) {
        if (-1 < uVar6) goto code_r0x00028cda;
        uVar6 = uVar6 & 0xffffff7f;
    }
    else {
        uVar6 = uVar6 & 0xffffff7b;
    }
    *(arg1_01 + 0xc0) = uVar6;
    fcn.000277c4(arg1_01);
code_r0x00028cda:
    if ((*(arg1_01 + 0xc3) & 1) == 0) {
        uVar5 = fcn.00027568(arg1_01);
    }
    fcn.000178c4(arg1,*(arg1_01 + 0x94),arg2,CONCAT71(arg3 >> 8,uVar5));
    fcn.0002dffc(*(iVar3 + 0x38),arg1_01);
    return;
}


/* fcn.000183b8 @ 0x183b8 */

ulong fcn.000183b8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    char cVar2;
    char cVar3;
    uint32_t uVar4;
    uint uVar5;
    int64_t iVar6;
    int64_t *piVar7;
    
    uVar1 = **(arg3 + 0x28);
    cVar2 = fcn.00019420(arg2 & 0xffffffff,2);
    cVar3 = *(arg3 + 0x24);
    if (cVar2 == '\0') {
        if (cVar3 == '\x01') {
code_r0x000183fe:
            if (uVar1 - 3 < 0x7d) {
                return 0x8000000000000003;
            }
            goto code_r0x00018439;
        }
    }
    else if (cVar3 == '\x01') {
        if (uVar1 == 1) {
            return 0x8000000000000003;
        }
        goto code_r0x000183fe;
    }
    if (((cVar3 == '\0') && (((0x14 < uVar1 || ((0x130644U >> (uVar1 & 0x1f) & 1) == 0)) && (2 < uVar1 + 0x80)))) &&
       ((uVar1 != 0x84 && (uVar1 < 0xc0)))) {
        return 0x8000000000000003;
    }
code_r0x00018439:
    if ((*(*(arg3 + 0x28) + 8) - 1U < 0xfffffffe) &&
       (((uVar1 < 0x16 && ((0x202644U >> (uVar1 & 0x1f) & 1) != 0)) ||
        ((uVar1 + 0x80 < 3 || ((cVar3 == '\x01' && (uVar1 < 0x80)))))))) {
        iVar6 = fcn.00019138(arg2);
        if (iVar6 == 0) {
            return 0x8000000000000002;
        }
        *(*(arg3 + 0x28) + 8) = *(iVar6 + 0xc);
    }
    if ((((*(arg3 + 8) % *(*arg1 + 4) != 0) || (*(arg3 + 0x18) % *(*arg1 + 4) != 0)) ||
        (piVar7 = fcn.00019138(arg2), piVar7 == NULL)) || ((**piVar7 != 2 || (1 < *(arg3 + 0x24))))) {
        return 0x8000000000000002;
    }
    cVar3 = fcn.000201fc(*(*piVar7 + 4));
    if (cVar3 == '\x01') {
        return 0x8000000000000007;
    }
    uVar4 = fcn.000200ec(*(*piVar7 + 0x10));
    if (*(arg3 + 0x10) <= uVar4) {
        return 0;
    }
    uVar5 = fcn.000200ec(*(*piVar7 + 0x10));
    *(arg3 + 0x10) = uVar5;
    return 0x8000000000000004;
}


/* fcn.000204e4 @ 0x204e4 */

bool fcn.000204e4(uint32_t arg1)

{
    uint in_register_0000000c;
    
    return *(CONCAT44(in_register_0000000c,arg1) + 0x11e) != '\0';
}


/* fcn.00020214 @ 0x20214 */

ulong fcn.00020214(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    char in_stack_00000028;
    
    if ((in_stack_00000028 == '\0') || (in_stack_00000028 == '\x01')) {
        uVar1 = fcn.0001fa44(arg1,arg2,arg3,arg4);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.000204b0 @ 0x204b0 */

ulong fcn.000204b0(uint32_t arg1)

{
    if (arg1 == 1) {
        return 0;
    }
    if (arg1 != 2) {
        if (arg1 != 3) {
            return 0x8000000000000007;
        }
        return 0x8000000000000012;
    }
    return 0x8000000000000003;
}


/* fcn.00019788 @ 0x19788 */

ulong fcn.00019788(uint32_t arg1,int64_t arg2)

{
    char cVar1;
    ulong uVar2;
    uint in_register_0000000c;
    ulong *arg1_00;
    int64_t arg3;
    
    if (**(arg2 + 0x28) == -0x7e) {
        arg1_00 = *0x43838;
        if (*0x43838 != NULL) {
            do {
                if ((**arg1_00 == 2) && (*(*arg1_00 + 4) == CONCAT44(in_register_0000000c,arg1))) break;
                arg1_00 = arg1_00[2];
            } while (arg1_00 != NULL);
            if (arg1_00 != NULL) {
                cVar1 = fcn.000236b8(arg1_00);
                if (cVar1 != '\0') {
                    arg3 = 10000000;
                    if (10000000 < *arg2) {
                        arg3 = *arg2;
                    }
                    cVar1 = fcn.0001c9c4(arg1_00,0,arg3);
                    if (cVar1 == '\0') {
                        cVar1 = fcn.00018be0(0);
                        if (cVar1 == '\0') {
                            return 0x8000000000000007;
                        }
                        fcn.00015e58();
                    }
                }
                goto code_r0x0001979e;
            }
        }
        uVar2 = 0x800000000000000e;
    }
    else {
code_r0x0001979e:
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.000201fc @ 0x201fc */

uchar fcn.000201fc(int64_t arg1)

{
    return *(arg1 + 0x121);
}


/* fcn.000200ec @ 0x200ec */

ulong fcn.000200ec(int64_t arg1)

{
    return *(arg1 + 0x110);
}


/* fcn.00019188 @ 0x19188 */

ulong fcn.00019188(int64_t arg1)

{
    ulong *puVar1;
    ulong *puVar2;
    
    if (*0x43818 != 0) {
        for (puVar2 = *(*0x43818 + 0x68); puVar2 != NULL; puVar2 = *puVar2) {
            for (puVar1 = puVar2[9]; puVar1 != NULL; puVar1 = *puVar1) {
                if (((*(puVar1 + 0x19) == (arg1 & 0xffffffffU) >> 0x18) && (*(puVar1 + 0xc9) == arg1 >> 0x10)) &&
                   (*(puVar1 + 0xca) == (arg1 & 0xffffffffU) >> 8)) {
                    return puVar1[2];
                }
            }
        }
    }
    return 0;
}


/* fcn.00019208 @ 0x19208 */

int64_t fcn.00019208(int64_t arg1)

{
    ulong *puVar1;
    int64_t iVar2;
    ulong *puVar3;
    
    if (*0x43818 != 0) {
        for (puVar3 = *(*0x43818 + 0x68); puVar3 != NULL; puVar3 = *puVar3) {
            for (puVar1 = puVar3[9]; puVar1 != NULL; puVar1 = *puVar1) {
                if (((*(puVar1 + 0x19) == (arg1 & 0xffffffffU) >> 0x18) && (*(puVar1 + 0xc9) == arg1 >> 0x10)) &&
                   (*(puVar1 + 0xca) == (arg1 & 0xffffffffU) >> 8)) {
                    iVar2 = puVar3[7];
                    return CONCAT21(CONCAT11(*(iVar2 + 200),*(iVar2 + 0xc9)),*(iVar2 + 0xca)) << 8;
                }
            }
        }
    }
    return 0;
}


/* fcn.00015cf0 @ 0x15cf0 */

ulong fcn.00015cf0(void)

{
    return *0x43590;
}


/* fcn.0002407c @ 0x2407c */

ulong fcn.0002407c(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if ((*(*0x43c08 + 0x1ed8) == 0) && (*(*0x43c08 + 0x1ed4) == 0)) {
        uVar1 = 1;
    }
    return uVar1;
}


/* fcn.00023350 @ 0x23350 */

uint fcn.00023350(void)

{
    return *(*0x43c08 + 0x1ed8);
}


/* fcn.00023340 @ 0x23340 */

uint fcn.00023340(void)

{
    return *(*0x43c08 + 0x1ed4);
}


/* fcn.00019d88 @ 0x19d88 */

uint64_t fcn.00019d88(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    
    uVar2 = fcn.00019b18(arg1,(arg2 + '\x04') * '\x04');
    if ((uVar2 & 1) == 0) {
        uVar1 = uVar2 >> 1 & 3;
        if (uVar1 == 2) {
            if ((arg2 & 0xff) + 1 < 6) {
                uVar1 = fcn.00019b18(arg1,((arg2 & 0xff) + 5) * 4);
                return (uVar1 << 0x20) + (uVar2 & 0xfffffff0);
            }
        }
        else if ((uVar1 == 0) && ((uVar2 & 0xfffffff0) != 0)) {
            return uVar2 & 0xfffffff0;
        }
    }
    return 0;
}


/* fcn.00020278 @ 0x20278 */

int64_t * fcn.00020278(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    int iVar5;
    int64_t *arg1_00;
    int64_t *piStackX_10;
    
    uVar2 = fcn.00019ae0(arg1,0);
    uVar3 = fcn.00019ae0(arg1,2);
    uVar4 = fcn.00019ae0(arg1,0x2e);
    if (((arg2 != 0) && ((arg2 & 0x3fffU) == 0)) && (arg1_00 = fcn.0001b9e4(0x128), arg1_00 != NULL)) {
        piStackX_10 = arg1_00;
        fcn.0001ba7c(arg1_00,0,0x128);
        *arg1_00 = arg1;
        arg1_00[1] = arg2;
        iVar5 = fcn.0001f290(arg1_00);
        if (iVar5 != 0) {
            uVar1 = fcn.00020c10(uVar2,uVar3,uVar4,0);
            *(arg1_00 + 0x11f) = uVar1;
            uVar1 = fcn.00020c10(uVar2,uVar3,uVar4,1);
            *(arg1_00 + 0x122) = uVar1;
            uVar1 = fcn.00020c10(uVar2,uVar3,uVar4,2);
            *(arg1_00 + 0x123) = uVar1;
            if ((uVar2 == 0x8086) && (uVar3 - 0x9c0 < 0x40)) {
                *(arg1_00 + 0x124) = 1;
            }
            uVar1 = fcn.00020c10(uVar2,uVar3,uVar4,3);
            *(arg1_00 + 0x11e) = uVar1;
            return arg1_00;
        }
        fcn.0001ffd4(&piStackX_10);
    }
    return NULL;
}


/* fcn.00019ae0 @ 0x19ae0 */

ushort fcn.00019ae0(int64_t arg1,int64_t arg2)

{
    ushort auStackX_10 [12];
    
    auStackX_10[0] = 0;
    (**(arg1 + 0x30))(arg1,1,arg2 & 0xffff,1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.0001e9a8 @ 0x1e9a8 */

int64_t * fcn.0001e9a8(int64_t arg1)

{
    char cVar1;
    int16_t iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong uVar7;
    
    iVar2 = fcn.00019ae0(arg1,10);
    uVar7 = 0;
    cVar1 = fcn.00019b80(arg1,9);
    if ((((iVar2 == 0x104) || ((iVar2 == 0x106 && (cVar1 == '\x01')))) &&
        (iVar3 = fcn.00019d88(arg1,CONCAT71(uVar7 >> 8,5)), iVar3 != 0)) &&
       (piVar4 = fcn.0001b9e4(0x130), piVar4 != NULL)) {
        fcn.0001ba7c(piVar4,0,0x130);
        piVar4[1] = iVar3;
        *piVar4 = arg1;
        *(piVar4 + 0x21) = 0x200;
        *(piVar4 + 0x10c) = 0x110;
        *(piVar4 + 0x22) = 0x420;
        iVar3 = fcn.00019ea0(arg1,2,0x200,piVar4 + 0x1e);
        iVar5 = fcn.00019ea0(*piVar4,2,*(piVar4 + 0x10c),piVar4 + 0x1f);
        iVar6 = fcn.00019ea0(*piVar4,2,*(piVar4 + 0x22),piVar4 + 0x20);
        if (((iVar3 != 0) && (iVar5 != 0)) && (iVar6 != 0)) {
            piVar4[0x20] = iVar6;
            piVar4[0x1e] = iVar3;
            piVar4[0x1f] = iVar5;
            return piVar4;
        }
        fcn.0001b9d8(piVar4);
    }
    return NULL;
}


/* fcn.0001a628 @ 0x1a628 */

void fcn.0001a628(uint32_t arg1)

{
    int64_t *piVar1;
    uint in_register_0000000c;
    ulong *puVar2;
    
    for (piVar1 = *0x43868; (piVar1 != NULL && (*piVar1 != CONCAT44(in_register_0000000c,arg1))); piVar1 = piVar1[4]) {
    }
    if (piVar1 != NULL) {
        for (puVar2 = piVar1[2]; puVar2 != NULL; puVar2 = *puVar2) {
            *(puVar2 + 0xda) = 0;
        }
    }
    return;
}


/* fcn.000211b4 @ 0x211b4 */

ulong fcn.000211b4(void)

{
    char cVar1;
    int64_t arg1;
    int64_t arg1_00;
    
    if ((*0x43900 != 0) || (*0x43900 = fcn.0001b9e4(0x9e19), *0x43900 != 0)) {
        fcn.0001ba7c(*0x43900,0,0x9e19);
        *0x43b88 = 0;
        *0x43b90 = *0x43900;
        *0x43b70 = *0x43900 + 0x9e19;
        arg1 = fcn.00027170(0x1ee0);
        arg1_00 = 0;
        if (arg1 != 0) {
            arg1_00 = fcn.00020ca0(arg1);
        }
        *0x43c08 = arg1_00;
        fcn.0002906c(arg1_00);
        cVar1 = fcn.00029630(*0x42dc8);
        if (cVar1 != '\0') {
            fcn.000291fc();
            return 0;
        }
    }
    return 1;
}


/* fcn.0001e50c @ 0x1e50c */

uint fcn.0001e50c(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    char cVar3;
    uint8_t uVar4;
    char cVar5;
    uint uVar6;
    int iVar7;
    int64_t iVar8;
    uint8_t *puVar9;
    ulong uVar10;
    uint64_t in_R9;
    uint32_t auStackX_8 [2];
    int64_t iStackX_18;
    int16_t var_50h;
    uint32_t var_1d0h;
    int64_t var_1e0h;
    unkbyte7 in_stack_fffffffffffffd59;
    int64_t in_stack_fffffffffffffd60;
    int8_t in_stack_fffffffffffffd68;
    uint8_t auStack_288 [40];
    int32_t in_stack_fffffffffffffda0;
    int32_t in_stack_fffffffffffffdb0;
    uint8_t auStack_228 [176];
    uint16_t uStack_178;
    int64_t var_60h;
    
    if (arg1 == 0) {
        uVar6 = 1;
    }
    else {
        fcn.0001ba7c(arg1 + 0x30,0,0xc0);
        cVar1 = fcn.0001dc74(arg1);
        if (cVar1 == '\0') {
            uVar6 = 2;
        }
        else {
            puVar9 = NULL;
            iVar8 = arg1;
            uVar2 = fcn.0001d068(arg1,0xc);
            cVar1 = fcn.00013c68();
            cVar3 = fcn.00013c60();
            if (cVar1 != '\0') {
                if (cVar3 == '\0') {
                    fcn.000140d4(CONCAT71(iVar8 >> 8,uVar2));
                }
                else {
                    uVar4 = fcn.00013c70();
                    if (uVar4 != uVar2) {
                        fcn.00013c08();
                        cVar1 = '\0';
                    }
                }
            }
            uVar4 = 0;
            do {
                if ((uVar2 >> (uVar4 & 0x1f) & 1) != 0) {
                    iVar8 = CONCAT71(puVar9 >> 8,uVar4);
                    fcn.0001def4(arg1,iVar8,in_stack_fffffffffffffda0);
                    auStackX_8[0] = auStackX_8[0] & 0xffffff00;
                    puVar9 = CONCAT71(iVar8 >> 8,uVar4);
                    cVar5 = fcn.0001e190(arg1,puVar9,auStackX_8,in_stack_fffffffffffffdb0);
                    if (cVar5 != '\0') {
                        if (auStackX_8[0] == '\0') {
                            uVar10 = 0x200;
                            fcn.0001ba7c(auStack_228,0,0x200);
                            in_R9 = CONCAT71(in_R9 >> 8,1);
                            puVar9 = auStack_228;
                            iVar8 = CONCAT71(uVar10 >> 8,uVar4);
                            iVar7 = fcn.0001dd74(arg1,puVar9,iVar8,in_R9);
                            if (iVar7 == 0) {
                                if ((auStack_228[0] >> 2 & 1) != 0) {
                                    iVar8 = CONCAT71(iVar8 >> 8,uVar4);
                                    puVar9 = auStack_228;
                                    iVar7 = fcn.0001ddf0(arg1,puVar9,iVar8);
                                    if (iVar7 != 0) goto code_r0x0001e710;
                                }
                                if ((cVar1 == '\0') || (cVar3 == '\0')) {
                                    iVar8 = CONCAT71(iVar8 >> 8,uVar4);
                                    fcn.0001dffc(arg1,uStack_178,iVar8);
                                }
                                uVar10 = CONCAT71(iVar8 >> 8,uVar4);
                                puVar9 = auStack_228;
                                fcn.0001e088(arg1,puVar9,uVar10);
                                if ((cVar1 != '\0') && (cVar3 == '\0')) {
                                    fcn.00014030(auStack_228,CONCAT71(puVar9 >> 8,uVar4));
                                }
                                puVar9 = auStack_228;
                                in_R9 = arg2;
                                fcn.00013ec8(arg1,puVar9,CONCAT71(uVar10 >> 8,uVar4));
                            }
                        }
                        else {
                            uVar10 = 0;
                            fcn.0001ba7c(auStack_288,0,0x60);
                            puVar9 = auStack_288;
                            iVar7 = fcn.0001f0e0(arg1,puVar9,CONCAT71(uVar10 >> 8,uVar4));
                            if (iVar7 == 0) {
                                iStackX_18 = 0;
                                auStackX_8[0] = 0x800;
                                iVar7 = fcn.0001eee8(arg1,CONCAT71(puVar9 >> 8,uVar4),&iStackX_18,auStackX_8,
                                                     CONCAT71(in_stack_fffffffffffffd59,1),in_stack_fffffffffffffd60,
                                                     in_stack_fffffffffffffd68);
                                puVar9 = auStack_288;
                                in_R9 = auStackX_8[0];
                                in_stack_fffffffffffffd68 = iVar7 == 0;
                                in_stack_fffffffffffffd60 = arg2;
                                fcn.00013c78(arg1,puVar9,iStackX_18 + 1,auStackX_8[0]);
                            }
                        }
                    }
                }
code_r0x0001e710:
                uVar4 = uVar4 + 1;
            } while (uVar4 < 8);
            uVar6 = 0;
        }
    }
    return uVar6;
}


/* fcn.0001fcdc @ 0x1fcdc */

ulong fcn.0001fcdc(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint uVar5;
    uint64_t arg2;
    uint32_t uVar6;
    uint64_t arg2_00;
    ulong *arg3;
    uchar auStack_20b8 [20];
    uchar uStack_20a4;
    uchar auStack_20a0 [40];
    uchar uStack_2078;
    uchar auStack_2070 [56];
    uchar auStack_2038 [4];
    uchar auStack_2034 [4108];
    uchar auStack_1028 [4];
    uchar auStack_1024 [4108];
    
    fcn.0001ba7c(auStack_2038,0,0x1004);
    arg2 = auStack_2034 & 0xfffffffc;
    iVar1 = fcn.000200f4(arg1,arg2);
    if (iVar1 == 1) {
        *(arg1 + 0x11c) = *(arg2 + 0x100);
        *(arg1 + 0x120) = *(arg2 + 0xccf) & 1;
        uVar6 = *(arg2 + 0x204);
        *(arg1 + 200) = uVar6;
        if (*(arg1 + 0x121) == '\0') {
            if (1 < uVar6) {
                *(arg1 + 200) = 1;
            }
            fcn.0001ba7c(auStack_1028,0,0x1004);
            arg2_00 = 1;
            arg3 = auStack_1024 & 0xfffffffc;
            if (*(arg1 + 200) != 0) {
                do {
                    uVar6 = arg2_00;
                    if ((uVar6 == 0) || (*(arg1 + 200) < uVar6)) goto code_r0x0001fd3b;
                    uVar2 = uVar6 - 1;
                    iVar1 = fcn.0002016c(arg1,arg2_00,arg3);
                    if (iVar1 == 1) {
                        *(arg1 + 0xd0 + uVar2 * 0x18) = *arg3;
                        *(arg1 + 0xd8 + uVar2 * 0x18) = 1 << (*(arg3 + (*(arg3 + 0x1a) & 0xf) * 4 + 0x82) & 0x1f);
                        uVar3 = fcn.0001f98c(arg2,arg3);
                        *(arg1 + 0xe0 + uVar2 * 0x18) = uVar3;
                        uVar2 = *(arg1 + 0xd8 + uVar2 * 0x18);
                        uVar4 = ((*(arg1 + 0x110) & 0xffffffff00000000) + *(arg1 + 0x110)) / uVar2;
                        uVar2 = 0x1000000 / uVar2;
                        uVar5 = uVar2;
                        if (uVar4 < uVar2) {
                            uVar5 = uVar4;
                        }
                        *(arg1 + 0x118) = uVar5;
                        fcn.0001ba1c(auStack_20b8,0x15,arg2 + 4,0x14);
                        uStack_20a4 = 0;
                        fcn.0001bc04(auStack_20b8);
                        fcn.0001ba1c(auStack_20a0,0x29,arg2 + 0x18,0x28);
                        uStack_2078 = 0;
                        fcn.0001bc04(auStack_20a0);
                        fcn.0001f7ac(auStack_2070,arg2,arg3,arg2_00);
                        fcn.00017e1c(arg1,arg2_00,auStack_20a0,auStack_20b8);
                    }
                    arg2_00 = uVar6 + 1;
                } while (uVar6 + 1 <= *(arg1 + 200));
            }
        }
        else {
            fcn.00017dbc(arg1);
        }
        uVar3 = 1;
    }
    else {
code_r0x0001fd3b:
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.0002116c @ 0x2116c */

void fcn.0002116c(void)

{
    int64_t arg1;
    char cVar1;
    int64_t iVar2;
    int64_t arg2;
    
    arg1 = *0x43c08;
    fcn.00025e44(*0x429d0);
    if (*0x43908 == '\0') {
        fcn.00017c08(0x43909,0x4390a,0x43910);
    }
    if (*(arg1 + 0x1b50) == '\0') {
        fcn.00032d7c(*(arg1 + 0x30));
        *(arg1 + 0x1b50) = 1;
        fcn.00032fcc(*(arg1 + 0x30));
        fcn.00025694(*0x429d0);
        fcn.000296e4(*0x42dc8);
        fcn.00028b08(arg1);
        iVar2 = *0x429d0;
        cVar1 = fcn.000259a0(*0x429d0);
        if (cVar1 == '\0') {
            arg2 = 0;
            iVar2 = 0;
        }
        else {
            iVar2 = CONCAT71(iVar2 >> 8,1);
            arg2 = *(*(*(*(*0x429d0 + 0x240) + 0xd8) + 0x10) + 0x20) + 0xf;
        }
        fcn.00017dac(iVar2,arg2);
        fcn.0002e3d8(*(arg1 + 0x38));
        fcn.0002d940(*(arg1 + 0x38));
    }
    return;
}


/* fcn.0001ab04 @ 0x1ab04 */

void fcn.0001ab04(uint32_t arg1)

{
    ulong *puVar1;
    uint64_t uVar2;
    uint in_register_0000000c;
    int64_t *arg1_00;
    uint64_t uVar3;
    ulong *arg2;
    
    for (arg1_00 = *0x43868; (arg1_00 != NULL && (*arg1_00 != CONCAT44(in_register_0000000c,arg1)));
        arg1_00 = arg1_00[4]) {
    }
    if (arg1_00 != NULL) {
        uVar3 = 0;
        arg2 = arg1_00[2];
        while (arg2 != NULL) {
            if ((*(arg2 + 0xda) == '\0') && (*(arg2 + 0xdb) == '\0')) {
                puVar1 = *arg2;
                uVar2 = fcn.0001b2c4(arg1_00,arg2);
                uVar2 = uVar2 | uVar3;
                uVar3 = 0;
                arg2 = puVar1;
                if (-1 < uVar2) {
                    uVar3 = uVar2;
                }
            }
            else {
                arg2 = *arg2;
            }
        }
    }
    return;
}


/* fcn.00013b4c @ 0x13b4c */

int64_t fcn.00013b4c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar auVar1 [16];
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t in_stack_00000030;
    uint32_t in_stack_00000038;
    uchar auStack_28 [16];
    uint uStack_18;
    int iStack_14;
    
    iStack_14 = 2 - (arg4 != '\0');
    auVar1._8_8_ = 0;
    auVar1._0_8_ = in_stack_00000030;
    uStack_18 = SUB164(auVar1 / ZEXT416(in_stack_00000038),0);
    uVar2 = fcn.0001d93c(arg1,CONCAT71(SUB167(auVar1 % ZEXT416(in_stack_00000038),1),arg3),auStack_28,arg2);
    iVar3 = fcn.0001eb20(uVar2);
    if (iVar3 == -0x7fffffffffffffee) {
        iVar3 = -0x7ffffffffffffff9;
    }
    return iVar3;
}


/* fcn.00017ba4 @ 0x17ba4 */

uint64_t fcn.00017ba4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint32_t in_stack_00000028;
    int64_t aiStack_28 [2];
    uint uStack_18;
    uchar uStack_14;
    
    uStack_14 = arg2 == '\0';
    uStack_18 = arg4 / in_stack_00000028;
    aiStack_28[0] = arg3;
    iVar1 = fcn.00017a44(arg1,aiStack_28);
    return -(iVar1 != 0) & 0x8000000000000007;
}


/* fcn.00017af0 @ 0x17af0 */

uint64_t fcn.00017af0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint32_t in_stack_00000028;
    int64_t aiStack_28 [2];
    uint uStack_18;
    uchar uStack_14;
    
    uStack_14 = arg2 == '\0';
    uStack_18 = arg4 / in_stack_00000028;
    aiStack_28[0] = arg3;
    iVar1 = fcn.00021274(arg1,aiStack_28);
    return -(iVar1 != 0) & 0x8000000000000007;
}


/* fcn.0001e818 @ 0x1e818 */

void fcn.0001e818(int64_t arg1,int64_t arg2,int64_t arg3)

{
    unkbyte7 in_R9;
    int64_t iStack_48;
    uint uStack_40;
    uint uStack_3c;
    uchar uStack_38;
    uchar uStack_25;
    
    fcn.0001ba7c(&iStack_48,0,0x35);
    uStack_3c = 1;
    uStack_25 = 0xec;
    uStack_40 = 0x200;
    iStack_48 = arg2;
    uStack_38 = arg3;
    fcn.0001d764(arg1,&iStack_48,60000000,CONCAT71(in_R9,1));
    return;
}


/* fcn.00019a68 @ 0x19a68 */

ulong fcn.00019a68(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    uint64_t uStackX_20;
    
    if (arg3 == 0) {
        (**(arg1 + 0x78))(arg1,0,0,arg2);
        uStackX_20 = 0;
        (**(arg1 + 0x78))(arg1,4,0,&uStackX_20);
        if ((uStackX_20 & 0x600) != 0x600) {
            return 0;
        }
        iVar1 = (**(arg1 + 0x78))(arg1,2);
    }
    else {
        if (arg3 != 1) {
            return 0;
        }
        iVar1 = (**(arg1 + 0x78))(arg1,1,*arg2);
    }
    if (iVar1 < 0) {
        return 0;
    }
    return 1;
}


/* fcn.00019198 @ 0x19198 */

int64_t fcn.00019198(int64_t arg1)

{
    int64_t iVar1;
    int iStackX_10;
    uint uStackX_14;
    ulong auStackX_18 [2];
    
    iStackX_10 = 0;
    auStackX_18[0] = 8;
    uStackX_14 = 0;
    iVar1 = (**(*0x4af18 + 0x48))(L"IntelRstFeatures",0x3a4e0,0,auStackX_18,&iStackX_10);
    if (-1 < iVar1) {
        if (iStackX_10 != 1) {
            return -0x7fffffffffffffe7;
        }
        *arg1 = uStackX_14;
    }
    return iVar1;
}


/* fcn.0003606c @ 0x3606c */

int64_t * fcn.0003606c(int64_t arg1)

{
    uchar uVar1;
    uint uVar2;
    uint32_t uVar3;
    int64_t *piVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t arg2;
    
    piVar4 = fcn.0001b9e4(0x70);
    if (piVar4 != NULL) {
        fcn.0001ba7c(piVar4,0,0x70);
        uVar6 = 0;
        *0x4af10 = arg1;
        *piVar4 = arg1;
        iVar5 = fcn.00019b4c(arg1,0x10);
        piVar4[1] = iVar5;
        uVar1 = fcn.00035dd8(arg1,CONCAT71(uVar6 >> 8,0x4c));
        *(piVar4 + 2) = uVar1;
        iVar5 = fcn.00019b4c(arg1,0x18);
        uVar6 = 0;
        piVar4[3] = iVar5;
        iVar5 = fcn.00019b4c(arg1,0x20);
        arg2 = CONCAT71(uVar6 >> 8,0x4d);
        piVar4[4] = iVar5;
        uVar1 = fcn.00035dd8(arg1,arg2);
        *(piVar4 + 5) = uVar1;
        uVar1 = fcn.00035dd8(arg1,CONCAT71(arg2 >> 8,0x4e));
        *(piVar4 + 0x29) = uVar1;
        uVar2 = fcn.00019b18(arg1,0x48);
        *(piVar4 + 0x2c) = uVar2;
        uVar2 = fcn.00019b18(arg1,0x40);
        *(piVar4 + 6) = uVar2;
        uVar2 = fcn.00019b18(arg1,0x44);
        *(piVar4 + 0x34) = uVar2;
        uVar2 = fcn.00019b18(arg1,0x50);
        *(piVar4 + 7) = uVar2;
        uVar2 = fcn.00019b18(arg1,0x54);
        *(piVar4 + 0x3c) = uVar2;
        uVar2 = fcn.00019b18(arg1,0x58);
        *(piVar4 + 8) = uVar2;
        uVar2 = fcn.00019b18(arg1,0x5c);
        *(piVar4 + 0x44) = uVar2;
        uVar2 = fcn.00019b18(arg1,0x60);
        *(piVar4 + 9) = uVar2;
        uVar2 = fcn.00019b18(arg1,100);
        *(piVar4 + 0x4c) = uVar2;
        uVar2 = fcn.00019b18(arg1,0x68);
        *(piVar4 + 10) = uVar2;
        uVar2 = fcn.00019b18(arg1,0x6c);
        piVar4[3] = piVar4[3] & 0xfffffffffffffff0;
        piVar4[4] = piVar4[4] & 0xfffffffffffffff0;
        piVar4[1] = piVar4[1] & 0xfffffffffffffff0;
        *(piVar4 + 0x54) = uVar2;
        if ((*(piVar4 + 6) & 1) == 0) {
            *(piVar4 + 0x61) = 0xff01;
        }
        else {
            uVar3 = *(piVar4 + 0x34) >> 8 & 3;
            if (uVar3 == 0) {
                *(piVar4 + 0x61) = 0x7f01;
            }
            else if (uVar3 == 1) {
                *(piVar4 + 0x61) = 0xff81;
            }
            else {
                *(piVar4 + 0x61) = 0xffe1;
            }
        }
        piVar4[0xb] = piVar4[3];
        *(piVar4 + 99) = *(piVar4 + 0x61) + -1;
        *(piVar4 + 0xc) = 1;
        if (((piVar4[1] != 0) && (piVar4[3] != 0)) && (piVar4[4] != 0)) {
            return piVar4;
        }
        fcn.0001b9d8(piVar4);
    }
    return NULL;
}


/* fcn.00035e48 @ 0x35e48 */

void fcn.00035e48(int64_t arg1)

{
    ulong uVar1;
    int64_t arg2;
    int64_t iVar2;
    int64_t *piVar3;
    ulong *puVar4;
    
    arg2 = fcn.0001b9e4(0x50);
    if (arg2 != 0) {
        fcn.0001ba7c(arg2,0,0x50);
    }
    iVar2 = fcn.000362c8();
    if (arg2 != 0) {
        if (iVar2 != 0) {
            uVar1 = *(arg1 + 8);
            *(arg2 + 10) = 0;
            *(arg2 + 0x10) = uVar1;
            *(arg2 + 8) = 0;
            *(arg2 + 0xc) = 0;
            *(arg2 + 0x38) = iVar2;
            *(iVar2 + 0x10) = uVar1;
            *(iVar2 + 0xd0) = arg2;
            piVar3 = *(arg1 + 0x68);
            if (*(arg1 + 0x68) == NULL) {
                *(arg1 + 0x68) = arg2;
            }
            else {
                while (*piVar3 != NULL) {
                    piVar3 = *piVar3;
                }
                *piVar3 = arg2;
            }
            fcn.000359f0(arg1,arg2);
            goto code_r0x00035ef2;
        }
        fcn.0001b9d8(arg2);
    }
    if (iVar2 != 0) {
        fcn.0001b9d8(iVar2);
    }
code_r0x00035ef2:
    fcn.0003548c(arg1);
    puVar4 = *(arg1 + 0x68);
    do {
        while( true ) {
            if (puVar4 == NULL) {
                return;
            }
            piVar3 = puVar4[9];
            if (piVar3 != NULL) break;
            puVar4 = *puVar4;
        }
        do {
            fcn.00018a40(*(piVar3 + 1),piVar3 + 5,
                         *(piVar3 + 0x19) << 0x18 | *(piVar3 + 0xc9) << 0x10 | *(piVar3 + 0xca) << 8);
            piVar3 = *piVar3;
        } while (piVar3 != NULL);
        puVar4 = *puVar4;
    } while (puVar4 != NULL);
    return;
}


/* fcn.0001ab80 @ 0x1ab80 */

void fcn.0001ab80(uint32_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t arg1_00;
    uint in_register_0000000c;
    int64_t *piVar2;
    
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (arg2 != 0)) {
        for (piVar2 = *0x43868; piVar2 != NULL; piVar2 = piVar2[4]) {
            if (*piVar2 == CONCAT44(in_register_0000000c,arg1)) goto code_r0x0001abc1;
        }
        piVar2 = NULL;
code_r0x0001abc1:
        if (piVar2 != NULL) {
            if (piVar2[3] != 0) {
                fcn.0001b9d8();
            }
            uVar1 = fcn.0001bb80(arg2);
            arg1_00 = fcn.0001b9e4((uVar1 + 1) * 2);
            piVar2[3] = arg1_00;
            if (arg1_00 != 0) {
                fcn.0001bd54(arg1_00,uVar1,arg2);
                *(piVar2[3] + uVar1 * 2) = 0;
            }
        }
    }
    return;
}


/* fcn.0001a354 @ 0x1a354 */

void fcn.0001a354(int64_t arg1)

{
    (**(*0x4af30 + 0x118))();
    return;
}


/* fcn.00019ff8 @ 0x19ff8 */

void fcn.00019ff8(void)

{
    int64_t iVar1;
    ulong auStackX_8 [4];
    
    auStackX_8[0] = 0;
    iVar1 = (**(*0x4af30 + 0x140))(0x42868,0,auStackX_8);
    if (iVar1 == 0) {
        *0x43858 = 1;
    }
    return;
}


/* fcn.00018fcc @ 0x18fcc */

ulong fcn.00018fcc(void)

{
    char cVar1;
    int64_t iVar2;
    
    *0x43821 = 0;
    cVar1 = fcn.00019a68(*0x43848,0x43850,0);
    if (cVar1 != '\0') {
        iVar2 = fcn.00019198(0x437c0);
        if (iVar2 != 0) {
            *0x437c0 = 0;
        }
        *0x43818 = fcn.0003606c(*0x43848);
        if (*0x43818 != 0) {
            fcn.00035e48(*0x43818);
            fcn.0001ab80(*0x43830,0x367e0);
            return 0;
        }
    }
    return 0x8000000000000007;
}


/* fcn.00019950 @ 0x19950 */

uint64_t fcn.00019950(void)

{
    char cVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    
    cVar1 = fcn.00018be0(0);
    if (cVar1 == '\0') {
        fcn.00019a00();
        uVar2 = 0x8000000000000007;
    }
    else {
        fcn.00014dfc();
        fcn.00014f70();
        iVar3 = fcn.00015cf8();
        if (-1 < iVar3) {
            *0x43820 = 1;
        }
        fcn.000193c0(0x3a4d0,0x36808,0x367f8,0x367d8);
        uVar4 = fcn.000140f0(0x43830);
        uVar5 = fcn.00014a88(0x43830);
        uVar6 = fcn.0001853c(0x43830);
        uVar2 = fcn.000187bc(0x43830);
        uVar2 = uVar2 | uVar4 | uVar5 | uVar6;
    }
    return uVar2;
}


/* fcn.00036238 @ 0x36238 */

ushort fcn.00036238(int64_t arg1)

{
    int16_t iVar1;
    
    iVar1 = fcn.00019ae0(arg1,0);
    if (((iVar1 == -0x7f7a) && (iVar1 = fcn.00019ae0(arg1,10), iVar1 == 0x104)) &&
       (((iVar1 = fcn.00019ae0(arg1,2), iVar1 == 0x28c0 ||
         (((iVar1 == -0x75cb || (iVar1 == -0x65f5)) || (iVar1 == 0x4c3d)))) || ((iVar1 == 0x467f || (iVar1 == -0x5881)))
        ))) {
        *0x42df0 = iVar1;
        return 1;
    }
    return 0;
}


/* fcn.00025594 @ 0x25594 */

void fcn.00025594(int64_t arg1)

{
    *0x43918 = arg1;
    return;
}


/* fcn.0001f254 @ 0x1f254 */

void fcn.0001f254(void)

{
    char cVar1;
    
    *0x42947 = 0;
    cVar1 = fcn.0001bd3c("$VER\x02\x02\x13",0x26);
    *0x42947 = -cVar1;
    return;
}


/* fcn.000189b8 @ 0x189b8 */

void fcn.000189b8(void)

{
    ulong auStackX_8 [4];
    
    *0x43808 = 1;
    *0x43810 = 0x18824;
    auStackX_8[0] = fcn.0001a35c();
    (**(*0x4af30 + 0x148))(auStackX_8,0x42918,0x43808,0);
    return;
}


/* fcn.00019218 @ 0x19218 */

ulong fcn.00019218(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint16_t uVar2;
    ulong uVar3;
    int64_t *piVar4;
    uint32_t arg1_00;
    int64_t var_60h;
    int8_t var_58h;
    int8_t var_57h;
    int64_t var_56h;
    int32_t var_44h;
    int64_t var_3ch;
    uint uStack_3c;
    uint uStack_38;
    int16_t var_2ch;
    int64_t var_2ah;
    int64_t iStack_2a;
    int64_t var_1ah;
    int64_t iStack_1a;
    int32_t var_ah;
    int16_t var_6h;
    
    arg1_00 = arg2;
    uVar2 = fcn.0001bb80(arg1_00);
    if (uVar2 < 9) {
        fcn.0001ba7c(&var_60h,0,0x5c);
        var_60h._0_4_ = 0x49464555;
        var_60h._4_4_ = 0x5c;
        var_58h = 1;
        fcn.0001ba1c(&var_56h,6,0x36490,5);
        uVar2 = fcn.0001bb80(arg1_00);
        fcn.0001ba1c(&var_56h + 6,8,arg1_00,uVar2);
        var_3ch._0_4_ = *arg1;
        var_3ch._4_4_ = *(arg1 + 4);
        uStack_3c = *(arg1 + 8);
        uStack_38 = *(arg1 + 0xc);
        var_44h = 0x4c544e49;
        var_2ch = 0x36;
        piVar4 = fcn.0001f288();
        var_2ah = *piVar4;
        iStack_2a = piVar4[1];
        var_1ah = piVar4[2];
        iStack_1a = piVar4[3];
        var_ah = piVar4[4];
        var_6h = *(piVar4 + 0x24);
        cVar1 = fcn.0001bd3c(&var_60h,0x5c);
        var_57h = -cVar1;
        uVar3 = fcn.0001a518(&var_60h,0x5c,0x43828,0xe);
    }
    else {
        uVar3 = 0x8000000000000002;
    }
    return uVar3;
}


/* fcn.00019690 @ 0x19690 */

void fcn.00019690(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    
    iVar1 = *0x4af18;
    uVar2 = fcn.0001f288();
    (**(iVar1 + 0x58))(arg1,0x3a4f0,6,0x26,uVar2);
    return;
}


/* fcn.00019370 @ 0x19370 */

int64_t fcn.00019370(void)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    auStackX_10[0] = fcn.0001a35c();
    iVar1 = (**(*0x4af30 + 0x148))(auStackX_10,0x42928,0x365f0,0);
    if (-1 < iVar1) {
        fcn.00025594(0x365f0);
    }
    return iVar1;
}


/* fcn.000227f4 @ 0x227f4 */

ulong fcn.000227f4(void)

{
    return CONCAT71(*0x43c08 >> 8,**(*0x43c08 + 0x38));
}


/* fcn.000212f4 @ 0x212f4 */

void fcn.000212f4(int64_t arg1)

{
    //WARNING: Could not recover jumptable at 0x00021301. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*arg1 + 8))();
    return;
}


/* fcn.00017c34 @ 0x17c34 */

int fcn.00017c34(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int *piVar1;
    char cVar2;
    char cVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    int iVar7;
    int64_t arg3_00;
    uint16_t in_stack_00000028;
    
    piVar1 = *arg1;
    iVar5 = arg2;
    if (*piVar1 == 1) {
        iVar4 = fcn.0001db38(*(piVar1 + 4),CONCAT71(arg2 >> 8,*(arg1 + 8)),iVar5 != 1,arg4);
        if (iVar4 != 0) {
            return (iVar4 == 3) + 1;
        }
    }
    else {
        if (*piVar1 != 2) {
            return 1;
        }
        iVar7 = 1;
        iVar4 = fcn.000206a4(*(piVar1 + 4),iVar5 != 1,CONCAT71(arg3 >> 8,arg4),in_stack_00000028);
        if (iVar4 != 1) {
            if (iVar4 == 1) {
                iVar7 = 0;
            }
            else if (iVar4 == 2) {
                iVar7 = 3;
            }
            else if (iVar4 == 3) {
                iVar7 = 4;
            }
            return iVar7;
        }
    }
    if (iVar5 == 0) {
        cVar2 = fcn.000236b8(arg1);
        arg3_00 = 10000000;
        if (10000000 < arg3) {
            arg3_00 = arg3;
        }
        cVar3 = fcn.0001c9c4(arg1,0,arg3_00);
        if (cVar2 != cVar3) {
            if (cVar2 == '\0') {
                iVar5 = fcn.00024624(arg1);
                uVar6 = fcn.00023590(arg1);
                arg1 = uVar6;
                fcn.0001a9e8(arg1);
            }
            else {
                iVar5 = fcn.00024674(arg1);
            }
            if (iVar5 != 0) {
                return iVar5;
            }
            fcn.00018be0(CONCAT71(arg1 >> 8,1));
            return 5;
        }
    }
    return 0;
}


/* fcn.00018a08 @ 0x18a08 */

void fcn.00018a08(void)

{
    int64_t iVar1;
    ulong uVar2;
    
    iVar1 = *0x4af30;
    uVar2 = fcn.0001a35c();
    //WARNING: Could not recover jumptable at 0x00018a3a. Too many branches
    //WARNING: Treating indirect jump as call
    (**(iVar1 + 0x150))(uVar2,0x42918,0x43808,0);
    return;
}


/* fcn.000196fc @ 0x196fc */

void fcn.000196fc(void)

{
    int64_t iVar1;
    ulong uVar2;
    
    iVar1 = *0x4af30;
    uVar2 = fcn.0001a35c();
    //WARNING: Could not recover jumptable at 0x0001972e. Too many branches
    //WARNING: Treating indirect jump as call
    (**(iVar1 + 0x150))(uVar2,0x42928,0x365f0,0);
    return;
}


/* fcn.000196d0 @ 0x196d0 */

void fcn.000196d0(void)

{
    if (*0x43828 != 0) {
        fcn.0001ac3c(0x43828,0xe);
        *0x43828 = 0;
    }
    return;
}


/* fcn.00015290 @ 0x15290 */

void fcn.00015290(void)

{
    if (*0x43580 != 0) {
        fcn.0001ac3c(0x43580,0xe);
        *0x43580 = 0;
    }
    return;
}


/* fcn.00014388 @ 0x14388 */

void fcn.00014388(int64_t arg1)

{
    //WARNING: Could not recover jumptable at 0x000143a3. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x4af30 + 0x150))(*arg1,0x42658,0x42e10,0);
    return;
}


/* fcn.00014da8 @ 0x14da8 */

void fcn.00014da8(int64_t arg1)

{
    //WARNING: Could not recover jumptable at 0x00014dc3. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x4af30 + 0x150))(*arg1,0x42638,0x42e70,0);
    return;
}


/* fcn.000185a4 @ 0x185a4 */

void fcn.000185a4(int64_t arg1)

{
    //WARNING: Could not recover jumptable at 0x000185bf. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x4af30 + 0x150))(*arg1,0x426f8,0x437c8,0);
    return;
}


/* fcn.00018800 @ 0x18800 */

void fcn.00018800(int64_t arg1)

{
    //WARNING: Could not recover jumptable at 0x0001881b. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x4af30 + 0x150))(*arg1,0x3a4c0,0x437f0,0);
    return;
}


/* fcn.00015e04 @ 0x15e04 */

void fcn.00015e04(void)

{
    int64_t iVar1;
    ulong uVar2;
    
    fcn.00012af8(*0x43590);
    iVar1 = *0x4af30;
    uVar2 = fcn.0001a35c();
    (**(iVar1 + 0x150))(uVar2,0x42858,0x43598,0x42688,0x3a498,0);
    return;
}


/* fcn.00019734 @ 0x19734 */

ulong fcn.00019734(int64_t arg1,int64_t arg2)

{
    uchar *puVar1;
    int64_t iVar2;
    
    fcn.00018a08();
    fcn.0001a334(arg2,0x3a4f0);
    fcn.000196fc();
    fcn.0001a334(arg1,0x3a4f0);
    fcn.000196d0();
    fcn.00015290();
    fcn.0001a334(L"RstVmdFastEnumVar");
    iVar2 = 0x68a;
    puVar1 = 0x42ef0;
    do {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return 0x42ef0;
}


/* fcn.0001a988 @ 0x1a988 */

int64_t * fcn.0001a988(uint32_t arg1)

{
    int64_t *piVar1;
    uint in_register_0000000c;
    int64_t *arg1_00;
    
    piVar1 = NULL;
    for (arg1_00 = *0x43868; arg1_00 != NULL; arg1_00 = arg1_00[4]) {
        if (*arg1_00 == CONCAT44(in_register_0000000c,arg1)) goto code_r0x0001a9b0;
    }
    arg1_00 = piVar1;
code_r0x0001a9b0:
    if (arg1_00 == NULL) {
        piVar1 = 0x800000000000000e;
    }
    else {
        while (arg1_00[2] != 0) {
            piVar1 = fcn.0001b2c4(arg1_00,arg1_00[2]);
            if (piVar1 < 0) {
                piVar1 = NULL;
            }
        }
    }
    return piVar1;
}


/* fcn.00019a00 @ 0x19a00 */

void fcn.00019a00(void)

{
    char cVar1;
    int *piVar2;
    
    for (piVar2 = *0x43840; piVar2 != NULL; piVar2 = *(piVar2 + 6)) {
        if (*piVar2 == 1) {
            fcn.0001e73c(piVar2 + 4);
        }
        else if (*piVar2 == 2) {
            fcn.0001ffd4(piVar2 + 4);
        }
        else {
            cVar1 = fcn.00010410();
            if (cVar1 != '\0') {
                fcn.00010374(0x36820,0x229,0x37ec0);
            }
        }
    }
    return;
}


/* fcn.00035f14 @ 0x35f14 */

void fcn.00035f14(int64_t arg1)

{
    ulong *puVar1;
    ulong *puVar2;
    
    for (puVar2 = *(arg1 + 0x68); puVar2 != NULL; puVar2 = *puVar2) {
        puVar1 = puVar2[9];
        while (puVar1 != NULL) {
            puVar1 = *puVar1;
            fcn.0001b9d8();
        }
        puVar2[9] = 0;
        fcn.0001b9d8(puVar2[7]);
        puVar2[7] = 0;
    }
    puVar2 = *(arg1 + 0x68);
    while (puVar2 != NULL) {
        puVar2 = *puVar2;
        fcn.0001b9d8();
    }
    *(arg1 + 0x68) = 0;
    return;
}


/* fcn.00021130 @ 0x21130 */

void fcn.00021130(void)

{
    fcn.000295b4(*0x42dc8);
    *0x43b70 = 0;
    *0x43b90 = 0;
    fcn.0001b9d8(*0x43900);
    *0x43900 = 0;
    return;
}


/* fcn.000295b4 @ 0x295b4 */

void fcn.000295b4(int64_t arg1)

{
    if (*(arg1 + 0x10) != 0) {
        fcn.0001b9d8();
        *(arg1 + 0x10) = 0;
    }
    if (*arg1 != 0) {
        fcn.0001b9d8();
        *arg1 = 0;
    }
    if (*(arg1 + 8) != 0) {
        fcn.0001b9d8();
        *(arg1 + 8) = 0;
    }
    *(arg1 + 0x18) = 0;
    *(arg1 + 0x34) = 0;
    return;
}


/* fcn.00014dfc @ 0x14dfc */

void fcn.00014dfc(void)

{
    int64_t iVar1;
    
    if (((*0x42ee0 == '\0') || (*0x42ee1 == '\0')) || (*0x42ee5 != '\0')) {
        if ((*0x42ef4 == 1) && (*0x430ba != 1)) {
            *0x42ee2 = '\0';
        }
        if (((*0x42ee0 != '\0') && (*0x42ef4 == 1)) && (*0x430ba == 1)) {
            iVar1 = fcn.0001f288();
            *(iVar1 + 0x1e) = *(iVar1 + 0x1e) & 0xffef;
            *0x42ee2 = '\x01';
        }
        if (*0x42ef5 != '\x01') {
            iVar1 = fcn.0001f288();
            *(iVar1 + 0x1e) = *(iVar1 + 0x1e) & 0xffef;
            *0x42ee2 = '\0';
        }
        if ((*0x42ee0 == '\0') || (*0x42ee2 == '\0')) {
            if (*0x42ee1 != '\0') {
                fcn.00014f40();
            }
            iVar1 = fcn.0001f288();
            *(iVar1 + 0x1e) = *(iVar1 + 0x1e) & 0xffef;
        }
        else {
            if (*0x42ee1 == '\0') {
                *0x42ef0 = 1;
                fcn.000152bc(0x42ef0);
            }
            if (1 < *0x42ef4) {
                *0x42ee6 = 1;
            }
        }
    }
    else {
        fcn.00014f40();
        *0x42ee0 = '\0';
        *0x42ee1 = '\0';
        *0x42ee2 = '\0';
        iVar1 = fcn.0001f288();
        *(iVar1 + 0x1e) = *(iVar1 + 0x1e) & 0xffef;
        fcn.00018be0(0);
    }
    return;
}


/* fcn.00014f70 @ 0x14f70 */

void fcn.00014f70(void)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    uint16_t uVar5;
    ulong *puVar6;
    int64_t iVar7;
    ulong *puVar8;
    int64_t iVar9;
    uint8_t uVar10;
    uint uStack_648;
    uint uStack_644;
    uchar uStack_640;
    char cStack_63f;
    uchar auStack_63e [6];
    uchar auStack_638 [12];
    uint uStack_62c;
    ulong uStack_624;
    ulong uStack_61c;
    ushort uStack_614;
    uint8_t uStack_612;
    uchar uStack_611;
    ulong auStack_610 [193];
    
    uVar5 = fcn.0001bb80(0x36488);
    if (uVar5 < 9) {
        fcn.0001ba7c(&uStack_648,0,0x63a);
        uStack_648 = 0x49464555;
        uStack_644 = 0x63a;
        uStack_640 = 1;
        fcn.0001ba1c(auStack_63e,6,0x36490,5);
        uVar5 = fcn.0001bb80(0x36488);
        fcn.0001ba1c(auStack_638,8,0x36488,uVar5);
        uVar10 = 0;
        uStack_62c = 0x4c544e49;
        uStack_624 = *0x3a488;
        uStack_61c = *0x3a490;
        uStack_614 = 0x36;
        if ((*0x42ee6 != '\0') && (uStack_612 = *0x42ef4, *0x42ef4 != 0)) {
            do {
                iVar7 = uVar10 * 0x201;
                iVar9 = uVar10 * 0x208;
                *(auStack_610 + iVar7 + -1) = *(iVar9 + 0x42f00);
                puVar8 = iVar9 + 0x42f08;
                iVar9 = 4;
                puVar6 = auStack_610 + iVar7;
                do {
                    uVar1 = puVar8[1];
                    uVar2 = puVar8[2];
                    uVar3 = puVar8[3];
                    *puVar6 = *puVar8;
                    puVar6[1] = uVar1;
                    uVar1 = puVar8[4];
                    uVar4 = puVar8[5];
                    puVar6[2] = uVar2;
                    puVar6[3] = uVar3;
                    uVar2 = puVar8[6];
                    uVar3 = puVar8[7];
                    puVar6[4] = uVar1;
                    puVar6[5] = uVar4;
                    uVar1 = puVar8[8];
                    uVar4 = puVar8[9];
                    puVar6[6] = uVar2;
                    puVar6[7] = uVar3;
                    uVar2 = puVar8[10];
                    uVar3 = puVar8[0xb];
                    puVar6[8] = uVar1;
                    puVar6[9] = uVar4;
                    uVar1 = puVar8[0xc];
                    uVar4 = puVar8[0xd];
                    puVar6[10] = uVar2;
                    puVar6[0xb] = uVar3;
                    uVar2 = puVar8[0xe];
                    uVar3 = puVar8[0xf];
                    puVar8 = puVar8 + 0x10;
                    puVar6[0xc] = uVar1;
                    puVar6[0xd] = uVar4;
                    puVar6[0xe] = uVar2;
                    puVar6[0xf] = uVar3;
                    iVar9 = iVar9 + -1;
                    puVar6 = puVar6 + 0x10;
                } while (iVar9 != 0);
                uVar10 = uVar10 + 1;
            } while (uVar10 < *0x42ef4);
        }
        cStack_63f = fcn.0001bd3c(&uStack_648,0x63a);
        cStack_63f = -cStack_63f;
        fcn.0001a518(&uStack_648,0x63a,0x43580,0xe);
    }
    return;
}


/* fcn.00015cf8 @ 0x15cf8 */

int64_t fcn.00015cf8(void)

{
    int16_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong auStackX_8 [4];
    
    iVar2 = fcn.000152f0();
    if (-1 < iVar2) {
        uVar3 = fcn.0001a35c();
        fcn.0001333c(uVar3,*0x4af20);
        *0x43598 = 0x158c0;
        *0x435a0 = 0x16e58;
        *0x435a8 = 0x15574;
        auStackX_8[0] = fcn.0001a35c();
        (**(*0x4af30 + 0x148))(auStackX_8,0x42858,0x43598,0x42688,0x3a498,0);
        fcn.00016ea0(0x436e0);
        iVar2 = fcn.0001a35c();
        *0x43590 = fcn.000129b4(0x36498,iVar2,0x3a500,0x3d510);
        if ((*0x43590 != 0) && (iVar1 = fcn.00012f50(*0x43590,5,0x364d0,0), iVar1 != 0)) {
            fcn.000165a8();
            return 0;
        }
        iVar2 = -0x7ffffffffffffff7;
    }
    return iVar2;
}


/* fcn.000193c0 @ 0x193c0 */

void fcn.000193c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    fcn.0001f254();
    fcn.000189b8();
    fcn.00019218(arg1,arg2);
    fcn.00019690(arg3);
    fcn.00019370(arg4);
    (**(*0x4af18 + 0x58))(L"RstVmdD",0x3a4f0,2,4,&stack0x00000008);
    return;
}


/* fcn.000140f0 @ 0x140f0 */

void fcn.000140f0(ulong param_1)

{
    *0x42e50 = 1;
    *0x42e10 = 0x42e50;
    *0x42e54 = 2;
    *0x42e18 = 0x14774;
    *0x42e20 = 0x146c0;
    *0x42e28 = 0x14630;
    *0x42e30 = 0x14544;
    *0x42e38 = 0x18114;
    *0x42e40 = 0x18114;
    *0x42e48 = 0x18114;
    *0x3a480 = 0xffff;
    *0x42e00 = 0;
    //WARNING: Could not recover jumptable at 0x000141a1. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x4af30 + 0x148))(param_1,0x42658,0x42e10,0);
    return;
}


/* fcn.00014a88 @ 0x14a88 */

void fcn.00014a88(int64_t arg1)

{
    fcn.0001ba7c(0x42ec0,0xff,0x10);
    fcn.0001ba7c(0x42ed0,0xff,0x10);
    *0x42e60 = 0;
    *0x42eb0 = 0;
    *0x42e70 = 0x42eb0;
    *0x42eb4 = 3;
    *0x42e78 = 0x14b7c;
    *0x42eb8 = 2;
    *0x42e80 = fcn.00014970;
    *0x42e88 = 0x18114;
    *0x42e90 = 0x18114;
    *0x42e98 = 0x18114;
    *0x42ea0 = 0x18114;
    *0x42ea8 = 0x14950;
    //WARNING: Could not recover jumptable at 0x00014b72. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x4af30 + 0x148))(arg1,0x42638,0x42e70,0);
    return;
}


/* fcn.0001853c @ 0x1853c */

void fcn.0001853c(ulong param_1)

{
    *0x437c8 = 0x3a4b0;
    *0x437d0 = 0x181dc;
    *0x437e8 = 0x18114;
    *0x437d8 = 0x18120;
    *0x437e0 = 0x18114;
    //WARNING: Could not recover jumptable at 0x0001859a. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x4af30 + 0x148))(param_1,0x426f8,0x437c8,0);
    return;
}


/* fcn.000187bc @ 0x187bc */

void fcn.000187bc(ulong param_1)

{
    *0x437f0 = 1;
    *0x437f8 = 0x186b4;
    *0x43800 = 0x18718;
    //WARNING: Could not recover jumptable at 0x000187f7. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x4af30 + 0x148))(param_1,0x3a4c0,0x437f0,0);
    return;
}


/* fcn.0001e73c @ 0x1e73c */

void fcn.0001e73c(int64_t arg1)

{
    ulong *puVar1;
    
    if ((arg1 != 0) && (puVar1 = *arg1, puVar1 != NULL)) {
        if (puVar1[0x1e] != 0) {
            fcn.0001a09c(*puVar1,puVar1[0x23]);
            fcn.00019fbc(*puVar1,*(puVar1 + 0x21),puVar1[0x1e]);
            puVar1[0x1e] = 0;
        }
        if (puVar1[0x1f] != 0) {
            fcn.0001a09c(*puVar1,puVar1[0x24]);
            fcn.00019fbc(*puVar1,*(puVar1 + 0x10c),puVar1[0x1f]);
            puVar1[0x1f] = 0;
        }
        if (puVar1[0x20] != 0) {
            fcn.0001a09c(*puVar1,puVar1[0x25]);
            fcn.00019fbc(*puVar1,*(puVar1 + 0x22),puVar1[0x20]);
            puVar1[0x20] = 0;
        }
        fcn.0001b9d8(*arg1);
        *arg1 = 0;
    }
    return;
}


/* fcn.0001ffd4 @ 0x1ffd4 */

uint fcn.0001ffd4(int64_t arg1)

{
    int64_t *arg1_00;
    uint uVar1;
    
    if ((arg1 == 0) || (arg1_00 = *arg1, arg1_00 == NULL)) {
        uVar1 = 0;
    }
    else {
        uVar1 = fcn.0001f6a0(arg1_00,0,5000000);
        fcn.0001f744(*arg1_00,arg1_00 + 0x70);
        fcn.0001f744(*arg1_00,arg1_00 + 0x18);
        if (arg1_00[0x20] != 0) {
            fcn.00019fbc(*arg1_00,arg1_00[0x1f],arg1_00[0x1d]);
        }
        fcn.0001b9d8(arg1_00);
        *arg1 = 0;
    }
    return uVar1;
}


/* fcn.00010410 @ 0x10410 */

uint8_t fcn.00010410(void)

{
    return *0x36e74 & 1;
}


/* fcn.00019b18 @ 0x19b18 */

uint fcn.00019b18(int64_t arg1,int64_t arg2)

{
    uint auStackX_10 [6];
    
    auStackX_10[0] = 0;
    (**(arg1 + 0x30))(arg1,2,arg2 & 0xffff,1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.00019c1c @ 0x19c1c */

void fcn.00019c1c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint auStackX_10 [6];
    
    auStackX_10[0] = arg3;
    (**(arg1 + 0x38))(arg1,2,arg2 & 0xffff,1,auStackX_10);
    return;
}


/* fcn.00019f2c @ 0x19f2c */

int64_t fcn.00019f2c(int64_t noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_18 [2];
    
    aiStackX_18[0] = 0;
    iVar1 = 0;
    if (*0x43858 == '\0') {
        aiStackX_18[0] = fcn.0001b9e4(arg1);
    }
    else {
        iVar1 = (**(noname_0 + 0x58))(noname_0,0,4,((arg1 & 0xfffU) != 0) + (arg1 >> 0xc),aiStackX_18,0);
    }
    if ((iVar1 < 0) || (aiStackX_18[0] == 0)) {
        aiStackX_18[0] = 0;
    }
    else {
        fcn.0001ba7c(aiStackX_18[0],0,arg1);
    }
    return aiStackX_18[0];
}


/* fcn.0001a044 @ 0x1a044 */

//WARNING: Removing unreachable block (ram,0x0001a08f)

ulong fcn.0001a044(int64_t arg1)

{
    ulong uVar1;
    int64_t in_RCX;
    
    if (*0x43858 == '\0') {
        uVar1 = 0;
    }
    else {
        uVar1 = (**(in_RCX + 0x48))();
    }
    return uVar1;
}


/* fcn.00019fbc @ 0x19fbc */

ulong fcn.00019fbc(int64_t noname_0,int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x43858 == '\0') {
        fcn.0001b9d8(arg2);
    }
    else {
        uVar1 = (**(noname_0 + 0x60))(noname_0,(arg1 >> 0xc) + ((arg1 & 0xfffU) != 0));
    }
    return uVar1;
}


/* fcn.0001cab4 @ 0x1cab4 */

char fcn.0001cab4(int64_t arg1)

{
    char cVar1;
    char cVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    
    uVar3 = arg1;
    uVar4 = arg1 & 0xffffffff;
    cVar2 = '\0';
    while (uVar3 != 0) {
        cVar1 = cVar2 + '\x01';
        if ((uVar4 & 1) == 0) {
            cVar1 = cVar2;
        }
        uVar3 = uVar4 >> 1;
        uVar4 = uVar3;
        cVar2 = cVar1;
    }
    return cVar2;
}


/* fcn.00018fb4 @ 0x18fb4 */

ulong fcn.00018fb4(int64_t arg1)

{
    if (arg1 != 0) {
        fcn.0001b9d8();
    }
    return 0;
}


/* fcn.00011a84 @ 0x11a84 */

ulong fcn.00011a84(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    ulong uVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    uVar1 = 0;
    if (arg2 == 0) {
        iVar2 = 0x38908;
        if (arg1 != 0) {
            iVar2 = arg1;
        }
        iVar3 = iVar2;
        arg1_00 = fcn.0001194c(iVar2);
        if (arg1_00 != 0) {
            uVar1 = fcn.00012440(iVar3,arg1_00,iVar2);
        }
    }
    else {
        iVar2 = fcn.00011734(arg2);
        iVar3 = fcn.000123e8();
        if (iVar3 != 0) {
            iVar2 = fcn.000134cc(iVar3,arg2,iVar2);
            iVar3 = fcn.00011778(iVar2);
            fcn.00011900(iVar3);
            uVar1 = fcn.000119ac(arg1,iVar2);
            fcn.000124cc(iVar2);
        }
    }
    return uVar1;
}


/* fcn.0001b2c4 @ 0x1b2c4 */

uint64_t fcn.0001b2c4(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *puVar4;
    ulong *puVar5;
    
    uVar2 = fcn.00018fb4(*(arg2 + 0x10));
    uVar3 = (**(*0x4af30 + 0x120))(*arg1,0x42818,*0x43860,*(arg2 + 8));
    uVar2 = uVar2 | uVar3;
    if (*(arg2 + 0x88) != 0) {
        uVar3 = (**(*0x4af30 + 0x150))(*(arg2 + 8),0x42688,*(arg2 + 0x88),0);
        uVar2 = uVar2 | uVar3;
    }
    if (*(arg2 + 0xd9) != '\0') {
        uVar3 = (**(*0x4af30 + 0x150))(*(arg2 + 8),0x42728,arg2 + 0x28,0);
        uVar2 = uVar2 | uVar3;
    }
    if (*(arg2 + 0xc0) != '\0') {
        uVar3 = (**(*0x4af30 + 0x150))(*(arg2 + 8),0x42738,arg2 + 0x90,0);
        uVar2 = uVar2 | uVar3;
    }
    if (*(arg2 + 0xd8) != '\0') {
        uVar3 = (**(*0x4af30 + 0x150))(*(arg2 + 8),0x427e8,arg2 + 200,0);
        uVar2 = uVar2 | uVar3;
    }
    fcn.0001b9d8(*(arg2 + 0x18));
    fcn.0001b9d8(*(arg2 + 0x20));
    (**(*0x4af30 + 0x48))();
    puVar1 = *(arg1 + 0x10);
    puVar5 = NULL;
    do {
        puVar4 = puVar1;
        if (puVar4 == NULL) {
code_r0x0001b40b:
            fcn.0001b9d8(arg2);
            return uVar2;
        }
        if (puVar4 == arg2) {
            if (puVar4 == *(arg1 + 0x10)) {
                *(arg1 + 0x10) = *puVar4;
            }
            else {
                *puVar5 = *puVar4;
            }
            goto code_r0x0001b40b;
        }
        puVar1 = *puVar4;
        puVar5 = puVar4;
    } while( true );
}


/* fcn.0001ca6c @ 0x1ca6c */

int64_t fcn.0001ca6c(int64_t arg1)

{
    char cVar1;
    int64_t arg1_00;
    int64_t iVar2;
    
    iVar2 = 0;
    if (arg1 != 0) {
        while (arg1_00 = arg1, cVar1 = fcn.000117fc(arg1_00), cVar1 == '\0') {
            arg1 = fcn.00011778(arg1_00);
            if (arg1_00 == arg1) {
                return arg1_00;
            }
            iVar2 = arg1_00;
            if (arg1 == 0) {
                return arg1_00;
            }
        }
    }
    return iVar2;
}


/* fcn.0001a65c @ 0x1a65c */

void fcn.0001a65c(int64_t arg1)

{
    (**(*0x4af30 + 0x118))();
    return;
}


/* fcn.0001905c @ 0x1905c */

int64_t fcn.0001905c(int64_t arg1)

{
    int64_t iVar1;
    
    if (*0x43830 != 0) {
        return -0x7fffffffffffffec;
    }
    *0x43830 = arg1;
    iVar1 = fcn.0001a354(arg1);
    if (-1 < iVar1) {
        fcn.00019ff8();
        iVar1 = fcn.00018fcc();
        if (-1 < iVar1) {
            iVar1 = fcn.00019950();
        }
    }
    return iVar1;
}


/* fcn.0001b240 @ 0x1b240 */

void fcn.0001b240(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    
    (**(*0x4af30 + 0x120))(*arg1,0x42688,*0x43860);
    fcn.0001a988(arg1);
    iVar1 = 0;
    iVar2 = *0x43868;
    do {
        if (iVar2 == 0) {
code_r0x0001b2ac:
            fcn.0001b9d8(*(arg1 + 0x18));
    //WARNING: Could not recover jumptable at 0x0001b9df. Too many branches
    //WARNING: Treating indirect jump as call
            (**(*0x4af30 + 0x48))(arg1);
            return;
        }
        if (iVar2 == arg1) {
            if (iVar2 == *0x43868) {
                *0x43868 = *(iVar2 + 0x20);
            }
            else {
                *(iVar1 + 0x20) = *(iVar2 + 0x20);
            }
            goto code_r0x0001b2ac;
        }
        iVar1 = iVar2;
        iVar2 = *(iVar2 + 0x20);
    } while( true );
}


/* fcn.00018f9c @ 0x18f9c */

uint64_t fcn.00018f9c(uint32_t arg1)

{
    int64_t iVar1;
    char cVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint in_register_0000000c;
    int64_t iStackX_8;
    
    iStackX_8 = CONCAT44(in_register_0000000c,arg1);
    if (iStackX_8 == *0x43830) {
        uVar3 = fcn.00014388(&iStackX_8);
        uVar4 = fcn.00014da8(&iStackX_8);
        uVar5 = fcn.000185a4(&iStackX_8);
        uVar6 = fcn.00018800(&iStackX_8);
        uVar6 = uVar3 | uVar4 | uVar5 | uVar6;
        if (*0x43820 != '\0') {
            uVar3 = fcn.00015e04();
            uVar6 = uVar6 | uVar3;
            *0x43820 = '\0';
        }
        fcn.00019734(0x367f8,0x36810);
        uVar3 = fcn.0001a988(*0x43830);
        uVar6 = uVar6 | uVar3;
        fcn.00019a00();
        iVar1 = *0x43838;
        while (iVar1 != 0) {
            iVar1 = *(iVar1 + 0x10);
            fcn.0001b9d8();
        }
        *0x43838 = 0;
        iVar1 = *0x43840;
        while (iVar1 != 0) {
            iVar1 = *(iVar1 + 0x18);
            fcn.0001b9d8();
        }
        *0x43840 = 0;
        fcn.00035f14(*0x43818);
        fcn.00021130();
        cVar2 = fcn.00019a68(*0x43848,0x43850,1);
        if (cVar2 == '\0') {
            uVar6 = uVar6 | 0x8000000000000003;
        }
        fcn.0001b9d8(*0x43818);
        *0x43830 = 0;
        return uVar6;
    }
    return 0x8000000000000002;
}


/* fcn.0001a5d0 @ 0x1a5d0 */

bool fcn.0001a5d0(int64_t arg1)

{
    int64_t iVar1;
    ulong in_RDX;
    
    iVar1 = (**(*0x4af30 + 0x118))(arg1,in_RDX,0,*0x43860,arg1,4);
    return -1 < iVar1;
}


/* fcn.000190b4 @ 0x190b4 */

uint64_t fcn.000190b4(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iStackX_18;
    
    iVar2 = fcn.0001a364(arg1);
    if ((iVar2 < 0) || (iStackX_18 == 0)) {
        uVar3 = 0x8000000000000003;
    }
    else {
        cVar1 = fcn.00036238(iStackX_18);
        uVar3 = ~-(cVar1 != '\0') & 0x8000000000000003;
    }
    return uVar3;
}


/* fcn.0001bd78 @ 0x1bd78 */

ulong fcn.0001bd78(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    ulong uVar2;
    int64_t arg1_00;
    
    if (arg3 == 0) {
        uVar2 = 0x8000000000000002;
    }
    else {
        arg1_00 = *arg2;
        while (arg1_00 != 0) {
            iVar1 = fcn.0001bb9c(arg1_00,arg1,0xffff);
            if (iVar1 == 0) {
                *arg3 = *(arg2 + 8);
                return 0;
            }
            arg2 = arg2 + 0x10;
            arg1_00 = *arg2;
        }
        uVar2 = 0x8000000000000003;
    }
    return uVar2;
}


/* fcn.0001b428 @ 0x1b428 */

uint64_t fcn.0001b428(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_register_0000000c;
    int *piVar1;
    int64_t in_stack_00000028;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    if (*(piVar1 + 5) == '\0') {
        return 0x800000000000000c;
    }
    if (arg2 != *piVar1) {
        return 0x800000000000000d;
    }
    if ((in_stack_00000028 != 0) && (arg3 <= *(piVar1 + 6))) {
        if (arg4 % piVar1[3] != 0) {
            return 0x8000000000000004;
        }
        return -((*(piVar1 + 6) - arg3) + 1 < arg4 / piVar1[3]) & 0x8000000000000002;
    }
    return 0x8000000000000002;
}


/* fcn.00018de4 @ 0x18de4 */

ulong fcn.00018de4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    ulong uVar2;
    unkbyte7 Var3;
    uchar uVar4;
    int64_t in_stack_00000028;
    
    Var3 = arg2 >> 8;
    uVar4 = arg3;
    if (arg1 == 0) {
        uVar2 = 0x8000000000000002;
    }
    else {
        iVar1 = *arg1;
        if (iVar1 == 0) {
            uVar2 = fcn.00017af0(*(arg1 + 8),CONCAT71(Var3,uVar4),arg4,in_stack_00000028);
        }
        else if (iVar1 == 1) {
            uVar2 = fcn.00017ba4(*(arg1 + 8),CONCAT71(Var3,uVar4),arg4,in_stack_00000028);
        }
        else if (iVar1 == 2) {
            uVar2 = fcn.00013b4c(*(arg1 + 8),arg2,CONCAT71(arg3 >> 8,*(arg1 + 0x10)),CONCAT71(arg4 >> 8,uVar4));
        }
        else {
            uVar2 = 0x8000000000000007;
        }
    }
    return uVar2;
}


/* fcn.00018ea8 @ 0x18ea8 */

ulong fcn.00018ea8(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    ulong *puVar1;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    uint in_register_0000000c;
    int *piVar5;
    uint in_R8;
    uint32_t *puVar6;
    int64_t iStack_48;
    uint32_t auStack_40 [2];
    uchar uStack_38;
    ulong uStack_30;
    uchar uStack_25;
    
    puVar6 = CONCAT44(in_R8,arg3);
    piVar5 = CONCAT44(in_register_0000000c,arg1);
    if (((piVar5 == NULL) || (arg2 == 0)) || (puVar6 == NULL)) {
code_r0x00018f29:
        uVar4 = 0x8000000000000007;
    }
    else {
        if (*puVar6 < 0x200) {
            return 0x8000000000000005;
        }
        if (*piVar5 == 1) {
            puVar1 = *(piVar5 + 2);
            if (puVar1 == NULL) goto code_r0x00018f29;
            if (**puVar1 == 1) {
                uStack_30 = 0x18f12;
                iVar2 = fcn.0001e818(*(*puVar1 + 4),arg2,CONCAT71(puVar6 >> 8,*(puVar1 + 1)));
                if (iVar2 < 8) {
                    if (iVar2 != 7) {
                        if (iVar2 == 0) {
                            return 0;
                        }
                        if (iVar2 == 1) {
                            return 0x8000000000000002;
                        }
                        if (((iVar2 != 2) && (iVar2 != 4)) && (iVar2 == 6)) {
                            return 0x8000000000000002;
                        }
                    }
                }
                else {
                    if (iVar2 < 10) {
                        return 0x8000000000000002;
                    }
                    if (iVar2 == 10) {
                        return 0x800000000000000d;
                    }
                    if (iVar2 == 0xb) {
                        return 0x8000000000000012;
                    }
                    if (iVar2 == 0xc) {
                        return 0x800000000000000c;
                    }
                }
                return 0x8000000000000007;
            }
        }
        else if (*piVar5 == 2) {
            uVar3 = *puVar6;
            fcn.0001ba7c(&stack0xffffffffffffffc0,0,0x2d);
            uStack_38 = piVar5[4];
            auStack_40[1] = 1;
            uStack_25 = 0xa1;
            iStack_48 = arg2;
            auStack_40[0] = uVar3;
            uVar3 = fcn.0001d764(*(piVar5 + 2),&stack0xffffffffffffffb8,60000000,0);
            uVar4 = fcn.0001eb20(uVar3);
            return uVar4;
        }
        uVar4 = 0x8000000000000003;
    }
    return uVar4;
}


/* fcn.0001babc @ 0x1babc */

void fcn.0001babc(int64_t noname_0,uint32_t arg1)

{
    uint32_t uVar1;
    int64_t in_R8;
    uint64_t uVar2;
    
    uVar2 = 0;
    if (arg1 != 0) {
        do {
            uVar1 = uVar2 + 1;
            *(uVar2 + noname_0) = *(uVar1 + in_R8);
            *(uVar1 + noname_0) = *(uVar2 + in_R8);
            if (*(uVar2 + in_R8) == '\0') {
                return;
            }
            uVar1 = uVar2 + 2;
            uVar2 = uVar1;
        } while (uVar1 < arg1);
    }
    return;
}


/* fcn.0001baec @ 0x1baec */

void fcn.0001baec(int64_t noname_0,uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_00000014;
    uint32_t uVar2;
    
    uVar2 = 0;
    if (CONCAT44(in_register_00000014,arg1) != 0) {
        uVar1 = 0;
        do {
            if (*(uVar1 + noname_0) == '\0') {
                *(uVar1 + noname_0) = 0x20;
            }
            uVar2 = uVar2 + 1;
            uVar1 = uVar2;
        } while (uVar1 < CONCAT44(in_register_00000014,arg1));
    }
    return;
}


/* fcn.0001bb6c @ 0x1bb6c */

int16_t fcn.0001bb6c(uint32_t arg1)

{
    int16_t iVar1;
    uint in_register_0000000c;
    int16_t *piVar2;
    
    iVar1 = 0;
    for (piVar2 = CONCAT44(in_register_0000000c,arg1); *piVar2 != 0; piVar2 = piVar2 + 1) {
        iVar1 = iVar1 + 1;
    }
    return iVar1;
}


/* fcn.00018f38 @ 0x18f38 */

ulong fcn.00018f38(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        return 0x8000000000000007;
    }
    if (*arg1 == 1) {
        puVar1 = *(arg1 + 8);
        if (puVar1 == NULL) {
            return 0x8000000000000007;
        }
        if (**puVar1 != 1) {
            return 0x8000000000000003;
        }
        *arg2 = *(puVar1 + 1);
    }
    else {
        if (*arg1 != 2) {
            return 0x8000000000000003;
        }
        *arg2 = *(arg1 + 0x10);
    }
    *arg3 = 0xffff;
    return 0;
}


/* fcn.00019548 @ 0x19548 */

ulong fcn.00019548(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int iVar2;
    int64_t arg3_00;
    unkbyte7 Var3;
    ulong in_stack_00000030;
    ulong *in_stack_00000040;
    
    Var3 = arg4 >> 8;
    cVar1 = arg2;
    iVar2 = 1;
    if (arg1 == 0) {
        return 0x8000000000000002;
    }
    if (in_stack_00000040 != NULL) {
        *in_stack_00000040 = 0;
    }
    arg3_00 = fcn.0001bcc4(arg3,arg2);
    if (*arg1 == 0) {
        iVar2 = fcn.000212f4(*(arg1 + 8));
        if ((cVar1 != '\0') || (in_stack_00000040 == NULL)) goto code_r0x00019637;
        *in_stack_00000040 = in_stack_00000030;
    }
    else {
        if (*arg1 == 1) {
            iVar2 = fcn.00017c34(*(arg1 + 8),cVar1 != '\0',arg3_00,CONCAT71(Var3,arg4));
        }
        if (cVar1 != '\0') goto code_r0x00019637;
    }
    if (in_stack_00000040 != NULL) {
        *in_stack_00000040 = in_stack_00000030;
    }
code_r0x00019637:
    if (iVar2 != 0) {
        if (iVar2 == 3) {
            return 0x8000000000000003;
        }
        if (iVar2 == 4) {
            return 0x8000000000000012;
        }
        if (iVar2 != 5) {
            return 0x8000000000000007;
        }
        fcn.00015e58();
    }
    return 0;
}


/* fcn.0001b930 @ 0x1b930 */

uint fcn.0001b930(int64_t arg1)

{
    uint uVar1;
    int64_t iVar2;
    ulong auStackX_10 [3];
    
    *0x438d8 = (arg1 & 0xffffU) << 8;
    auStackX_10[0] = 0xffffffff;
    iVar2 = (**(*0x4af30 + 0x28))(1,4,*0x438d8,auStackX_10);
    uVar1 = 0;
    if (-1 < iVar2) {
        uVar1 = auStackX_10[0];
    }
    return uVar1;
}


/* fcn.0001be24 @ 0x1be24 */

void fcn.0001be24(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    uint32_t arg3_00;
    char *pcStackX_20;
    
    pcStackX_20 = CONCAT44(in_register_0000000c,arg1);
    if (pcStackX_20 < 0x800000000000000b) {
        if (pcStackX_20 == 0x800000000000000a) {
            pcStackX_20 = "EFI_VOLUME_CORRUPTED";
        }
        else if (pcStackX_20 < 0x8000000000000004) {
            if (pcStackX_20 == 0x8000000000000003) {
                pcStackX_20 = "EFI_UNSUPPORTED";
            }
            else if (pcStackX_20 == NULL) {
                pcStackX_20 = "EFI_SUCCESS";
            }
            else if (pcStackX_20 == 0x1) {
                pcStackX_20 = "EFI_WARN_UNKNOWN_GLYPH";
            }
            else if (pcStackX_20 == 0x2) {
                pcStackX_20 = "EFI_WARN_DELETE_FAILURE";
            }
            else if (pcStackX_20 == 0x3) {
                pcStackX_20 = "EFI_WARN_WRITE_FAILURE";
            }
            else if (pcStackX_20 == 0x4) {
                pcStackX_20 = "EFI_WARN_BUFFER_TOO_SMALL";
            }
            else if (pcStackX_20 == 0x8000000000000001) {
                pcStackX_20 = "EFI_LOAD_ERROR";
            }
            else {
                if (pcStackX_20 != 0x8000000000000002) goto code_r0x0001c064;
                pcStackX_20 = "EFI_INVALID_PARAMETER";
            }
        }
        else if (pcStackX_20 == 0x8000000000000004) {
            pcStackX_20 = "EFI_BAD_BUFFER_SIZE";
        }
        else if (pcStackX_20 == 0x8000000000000005) {
            pcStackX_20 = "EFI_BUFFER_TOO_SMALL";
        }
        else if (pcStackX_20 == 0x8000000000000006) {
            pcStackX_20 = "EFI_NOT_READY";
        }
        else if (pcStackX_20 == 0x8000000000000007) {
            pcStackX_20 = "EFI_DEVICE_ERROR";
        }
        else if (pcStackX_20 == 0x8000000000000008) {
            pcStackX_20 = "EFI_WRITE_PROTECTED";
        }
        else {
            if (pcStackX_20 != 0x8000000000000009) goto code_r0x0001c064;
            pcStackX_20 = "EFI_OUT_OF_RESOURCES";
        }
    }
    else {
    //switch table (14 cases) at 0x1c07c
        switch(pcStackX_20) {
        case 0x800000000000000b:
            pcStackX_20 = "EFI_VOLUME_FULL";
            break;
        case 0x800000000000000c:
            pcStackX_20 = "EFI_NO_MEDIA";
            break;
        case 0x800000000000000d:
            pcStackX_20 = "EFI_MEDIA_CHANGED";
            break;
        case 0x800000000000000e:
            pcStackX_20 = "EFI_NOT_FOUND";
            break;
        case 0x800000000000000f:
            pcStackX_20 = "EFI_ACCESS_DENIED";
            break;
        case 0x8000000000000010:
            pcStackX_20 = "EFI_NO_RESPONSE";
            break;
        case 0x8000000000000011:
            pcStackX_20 = "EFI_NO_MAPPING";
            break;
        case 0x8000000000000012:
            pcStackX_20 = "EFI_TIMEOUT";
            break;
        case 0x8000000000000013:
            pcStackX_20 = "EFI_NOT_STARTED";
            break;
        case 0x8000000000000014:
            pcStackX_20 = "EFI_ALREADY_STARTED";
            break;
        case 0x8000000000000015:
            pcStackX_20 = "EFI_ABORTED";
            break;
        case 0x8000000000000016:
            pcStackX_20 = "EFI_ICMP_ERROR";
            break;
        case 0x8000000000000017:
            pcStackX_20 = "EFI_TFTP_ERROR";
            break;
        case 0x8000000000000018:
            pcStackX_20 = "EFI_PROTOCOL_ERROR";
            break;
        default:
code_r0x0001c064:
            arg3_00 = 0x36b24;
            goto code_r0x0001c06e;
        }
    }
    arg3_00 = 0x36554;
code_r0x0001c06e:
    fcn.0001c0d4(arg2,arg3,arg3_00,&pcStackX_20);
    return;
}


/* fcn.0001c40c @ 0x1c40c */

uint64_t fcn.0001c40c(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint64_t uVar1;
    bool bVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uint16_t uVar5;
    uint64_t uVar6;
    uint16_t uVar7;
    char cVar8;
    uint16_t uVar9;
    uint16_t uVar10;
    char *pcVar11;
    char *pcVar12;
    uint16_t in_stack_00000028;
    uint16_t in_stack_00000030;
    uint16_t in_stack_00000038;
    char acStack_38 [32];
    
    uVar6 = arg2 & 0xffffffff;
    bVar2 = false;
    uVar4 = 0;
    if (0x10 < in_stack_00000038) {
        return 0;
    }
    if (((in_stack_00000038 == 10) && (0x7fffffff < arg2)) && ((arg3 & 8U) == 0)) {
        bVar2 = true;
        uVar6 = -arg2;
    }
    pcVar12 = acStack_38;
    uVar7 = uVar4;
    do {
        uVar5 = uVar7;
        pcVar11 = pcVar12;
        uVar1 = uVar6 / in_stack_00000038;
        uVar7 = uVar5 + 1;
        *pcVar11 = "0123456789ABCDEF"[uVar6 % in_stack_00000038];
        pcVar12 = pcVar11 + 1;
        uVar6 = uVar1;
    } while (uVar1 != 0);
    if (bVar2) {
        *pcVar12 = '-';
        pcVar12 = pcVar11 + 2;
        uVar7 = uVar5 + 2;
    }
    uVar5 = arg4;
    if (((arg3 & 5) == 4) || ((uVar5 < in_stack_00000028 && ((arg3 & 0x10U) != 0)))) {
        cVar8 = '0';
    }
    else {
        cVar8 = ' ';
    }
    uVar9 = in_stack_00000028;
    if (in_stack_00000028 < uVar5) {
        uVar9 = uVar5;
    }
    if (((arg3 & 1U) == 0) || (uVar9 <= in_stack_00000028)) {
        uVar10 = -(uVar7 < uVar9) & uVar9 - uVar7;
        uVar3 = 0;
        pcVar11 = arg1;
        uVar5 = in_stack_00000030;
        uVar9 = 0;
        if (uVar10 != 0) {
            do {
                uVar3 = uVar9;
                if (uVar5 == 0) goto code_r0x0001c595;
                *pcVar11 = cVar8;
                uVar5 = uVar5 - 1;
                pcVar11 = pcVar11 + 1;
                uVar3 = uVar3 + 1;
                uVar9 = uVar3;
            } while (uVar3 < uVar10);
        }
        if (uVar5 == 0) {
code_r0x0001c595:
            *(uVar3 + arg1) = 0;
code_r0x0001c54a:
            return in_stack_00000030;
        }
        if (uVar7 != 0) {
            do {
                if (uVar5 == 0) break;
                pcVar12 = pcVar12 + -1;
                uVar5 = uVar5 - 1;
                uVar4 = uVar4 + 1;
                *pcVar11 = *pcVar12;
                pcVar11 = pcVar11 + 1;
            } while (uVar4 < uVar7);
        }
        uVar6 = uVar10 + uVar4;
        *((uVar10 + uVar4) + arg1) = 0;
    }
    else {
        uVar6 = 0;
        pcVar11 = arg1;
        uVar4 = in_stack_00000030;
        if (uVar7 != 0) {
            do {
                if (uVar4 == 0) goto code_r0x0001c519;
                pcVar12 = pcVar12 + -1;
                uVar4 = uVar4 - 1;
                uVar5 = uVar6 + 1;
                uVar6 = uVar5;
                *pcVar11 = *pcVar12;
                pcVar11 = pcVar11 + 1;
            } while (uVar5 < uVar7);
        }
        if (uVar4 != 0) {
            for (; uVar6 < uVar9; uVar6 = uVar6 + 1) {
                if (uVar4 == 0) goto code_r0x0001c543;
                *pcVar11 = cVar8;
                uVar4 = uVar4 - 1;
                pcVar11 = pcVar11 + 1;
            }
            if (uVar4 == 0) {
code_r0x0001c543:
                *(uVar6 + arg1) = 0;
                goto code_r0x0001c54a;
            }
        }
code_r0x0001c519:
        *(uVar6 + arg1) = 0;
    }
    return uVar6 & 0xffff;
}


/* fcn.0001cc28 @ 0x1cc28 */

void fcn.0001cc28(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    uchar auStack_108 [264];
    
    iStackX_10 = arg2;
    iStackX_18 = arg3;
    iStackX_20 = arg4;
    fcn.0001c0d4(auStack_108,0x100,arg1,&iStackX_10);
    fcn.0001cb2c(*0x438e4,auStack_108);
    return;
}


/* fcn.0001cb2c @ 0x1cb2c */

//WARNING: Variable defined which should be unmapped: var_1h

void fcn.0001cb2c(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint16_t uVar2;
    uint8_t uVar3;
    int32_t var_1h;
    
    uVar2 = 0;
    if ((*0x438e4 != -1) && (arg2 != 0)) {
        cVar1 = *arg2;
        while (cVar1 != '\0') {
            if (*(uVar2 + arg2) == -0x10) {
                uVar3 = *((uVar2 + 1) + arg2);
                fcn.0001cc74(arg1 & 0xffff,arg2,uVar2);
                if ((uVar3 & 0xf0) == 0xe0) {
                    uVar3 = (uVar3 ^ *0x42542) & 0xf ^ *0x42542;
                }
                arg2 = arg2 + (uVar2 + 2);
                uVar2 = 0;
                *0x42542 = uVar3;
            }
            else {
                uVar2 = uVar2 + 1;
            }
            cVar1 = *(uVar2 + arg2);
        }
        fcn.0001cc74(arg1 & 0xffff,arg2,uVar2);
    }
    return;
}


/* fcn.0001cd64 @ 0x1cd64 */

uint fcn.0001cd64(int64_t arg1)

{
    uint uStackX_8;
    
    uStackX_8 = CONCAT13(arg1,CONCAT12(arg1 >> 8,CONCAT11(arg1 >> 0x10,arg1 >> 0x18)));
    return uStackX_8;
}


/* fcn.0001c7a4 @ 0x1c7a4 */

void fcn.0001c7a4(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint16_t uVar2;
    char *pcVar3;
    uint64_t arg2_00;
    uint64_t uStackX_10;
    uint64_t uStackX_18;
    int64_t iStackX_20;
    uchar auStack_108 [216];
    ulong uStack_30;
    
    arg2_00 = *arg1 << 8 | *arg1 >> 8;
    uStack_30 = 0x1c7cb;
    fcn.0001cc28(0x36b98,arg2_00,arg2,arg3);
    uVar2 = *arg1 << 8 | *arg1 >> 8;
    if (uVar2 == 1) {
        uStack_30 = 0x1c8ec;
        fcn.0001cc28(0x36ba8,arg2_00,arg2,arg3);
        uStack_30 = 0x1c8f8;
        fcn.0001cc28(0x36bb8,arg2_00,arg2,arg3);
        uStack_30 = 0x1c917;
        fcn.0001cc28(0x36bd8,0x36bc8,*(arg1 + 4) & 1,arg3);
        uStack_30 = 0x1c932;
        fcn.0001cc28(0x36bd8,0x36be8,*(arg1 + 4) >> 1 & 1,arg3);
        uStack_30 = 0x1c94e;
        fcn.0001cc28(0x36bd8,0x36bf8,*(arg1 + 4) >> 2 & 1,arg3);
        uStack_30 = 0x1c96a;
        fcn.0001cc28(0x36bd8,0x36c10,*(arg1 + 4) >> 3 & 1,arg3);
        uStack_30 = 0x1c986;
        fcn.0001cc28(0x36bd8,0x36c28,*(arg1 + 4) >> 4 & 1,arg3);
        pcVar3 = "ComID Mgmt Supported";
        uVar1 = *(arg1 + 4) >> 6;
    }
    else {
        if (uVar2 != 2) {
            if (uVar2 == 3) {
                pcVar3 = "Geometry Reporting feature";
            }
            else if (uVar2 == 0x200) {
                pcVar3 = "Opal SSC V1.00 feature";
            }
            else if (uVar2 == 0x203) {
                pcVar3 = "Opal SSC V2.00 feature";
            }
            else {
                pcVar3 = "unknown feature";
            }
            uStack_30 = 0x1c820;
            fcn.0001cc28(pcVar3,arg2_00,arg2,arg3);
            goto code_r0x0001c9a2;
        }
        uStack_30 = 0x1c831;
        fcn.0001cc28(0x36c58,arg2_00,arg2,arg3);
        uStack_30 = 0x1c83d;
        fcn.0001cc28(0x36c70,arg2_00,arg2,arg3);
        uStack_30 = 0x1c85c;
        fcn.0001cc28(0x36bd8,0x36c88,*(arg1 + 4) & 1,arg3);
        uStack_30 = 0x1c877;
        fcn.0001cc28(0x36bd8,0x36ca0,*(arg1 + 4) >> 1 & 1,arg3);
        uStack_30 = 0x1c893;
        fcn.0001cc28(0x36bd8,0x36cb0,*(arg1 + 4) >> 2 & 1,arg3);
        uStack_30 = 0x1c8af;
        fcn.0001cc28(0x36bd8,0x36cb8,*(arg1 + 4) >> 3 & 1,arg3);
        uStack_30 = 0x1c8cb;
        fcn.0001cc28(0x36bd8,0x36cd0,*(arg1 + 4) >> 4 & 1,arg3);
        pcVar3 = "MBR Done";
        uVar1 = *(arg1 + 4) >> 5;
    }
    uStack_30 = 0x1c9a2;
    fcn.0001cc28(0x36bd8,pcVar3,uVar1 & 1,arg3);
code_r0x0001c9a2:
    uStackX_18 = *(arg1 + 3);
    uStackX_10 = *(arg1 + 2) >> 4;
    iStackX_20 = arg3;
    fcn.0001c0d4(&stack0xfffffffffffffef8,0x100,0x36d50,&stack0x00000010);
    fcn.0001cb2c(*0x438e4,&stack0xfffffffffffffef8);
    return;
}


/* fcn.000185c8 @ 0x185c8 */

bool fcn.000185c8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int *piVar1;
    int iVar2;
    bool bVar3;
    
    piVar1 = *arg1;
    if (*piVar1 == 1) {
        iVar2 = fcn.0001db38(*(piVar1 + 4),CONCAT71(arg2 >> 8,*(arg1 + 8)),arg2 == 1,
                             CONCAT62(arg4 >> 0x10,CONCAT11(arg4 >> 8,arg3)));
        bVar3 = iVar2 != 0;
    }
    else if (*piVar1 == 2) {
        iVar2 = fcn.000206a4(*(piVar1 + 4),arg2 == 1,arg3,arg4);
        bVar3 = iVar2 != 1;
    }
    else {
        bVar3 = true;
    }
    return bVar3;
}


/* fcn.0001c698 @ 0x1c698 */

uint16_t * fcn.0001c698(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    uint16_t *arg1_00;
    
    uVar3 = arg2;
    if (uVar3 == 0) {
        fcn.0001cc28(0x36d70,arg2,arg3,arg4);
        fcn.0001cc28(0x36d88,arg2,arg3,arg4);
        uVar1 = fcn.0001cd64(*arg1);
        fcn.0001cc28(0x36da0,uVar1,arg3,arg4);
        arg2 = *(arg1 + 4) << 8 | *(arg1 + 4) >> 8;
        arg3 = *(arg1 + 6) << 8 | *(arg1 + 6) >> 8;
        fcn.0001cc28(0x36dc0,arg2,arg3,arg4);
        fcn.0001cc28(0x36de8,arg2,arg3,arg4);
    }
    iVar2 = fcn.0001cd64(*arg1);
    if (iVar2 != 0) {
        arg1_00 = arg1 + 0x30;
        for (uVar1 = iVar2 - 0x2c; (4 < uVar1 && (uVar4 = *(arg1_00 + 3) + 4, uVar4 <= uVar1)); uVar1 = uVar1 - uVar4)
        {
            if (uVar3 == 0) {
                if ((*arg1_00 & 0xff) != 0 || *arg1_00 >> 8 != 0) {
                    fcn.0001c7a4(arg1_00,arg2,arg3,arg4);
                }
            }
            else if (uVar3 == (*arg1_00 << 8 | *arg1_00 >> 8)) {
                return arg1_00;
            }
            arg1_00 = arg1_00 + uVar4;
        }
    }
    return NULL;
}


/* fcn.0001cc74 @ 0x1cc74 */

void fcn.0001cc74(ulong noname_0,int64_t arg1,uint32_t arg2)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint16_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint16_t uVar6;
    uint16_t auStack_208 [256];
    
    uVar6 = 0x1ff;
    if (arg2 < 0x1ff) {
        uVar6 = arg2;
    }
    if (uVar6 < 0x100) {
        uVar4 = 0;
        uVar5 = uVar4;
        if (uVar6 != 0) {
            do {
                uVar5 = uVar4;
                if (*arg1 == 0) break;
                uVar1 = *arg1;
                arg1 = arg1 + 1;
                uVar3 = uVar4 + 1;
                uVar5 = uVar3;
                auStack_208[uVar4] = uVar1;
                uVar4 = uVar5;
            } while (uVar3 < uVar6);
        }
        auStack_208[uVar5] = 0;
        iVar2 = *(*0x4af20 + 0x40);
        if ((iVar2 == 0) && (*0x438e8 == 0)) {
            (**(*0x4af30 + 0x140))(0x42768,0,0x438e8);
        }
        else if (iVar2 != 0) {
            *0x438e8 = iVar2;
        }
        if (*0x438e8 != 0) {
            (**(*0x438e8 + 0x28))(*0x438e8,*0x42542);
            (**(*0x438e8 + 8))(*0x438e8,auStack_208);
            (**(*0x438e8 + 0x28))(*0x438e8,7);
        }
    }
    return;
}


/* fcn.0001cae8 @ 0x1cae8 */

uint64_t fcn.0001cae8(int64_t arg1)

{
    uint64_t uVar1;
    ushort uStackX_10;
    ushort uStackX_12;
    
    uVar1 = (**(*(*0x4af20 + 0x30) + 8))(*(*0x4af20 + 0x30),&uStackX_10);
    if (uVar1 < 0) {
        uVar1 = uVar1 & 0xffffffffffffff00;
    }
    else {
        uVar1 = CONCAT71(uStackX_12 >> 8,1);
        *arg1 = CONCAT22(uStackX_10,uStackX_12);
    }
    return uVar1;
}


/* fcn.0001d398 @ 0x1d398 */

ulong fcn.0001d398(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint32_t uVar2;
    int64_t arg2_00;
    uint64_t uVar3;
    ulong uStackX_8;
    
    uVar3 = ((arg2 & 0xff) + 2) * 0x80 + 0x18;
    uVar2 = fcn.00019bb0(*arg1,*(arg1 + 8) + uVar3);
    arg2_00 = *(arg1 + 8) + uVar3;
    fcn.00019c78(*arg1,arg2_00,uVar2 & 0xfffffffe);
    uStackX_8 = fcn.0001bc9c(500000,arg2_00);
    do {
        cVar1 = fcn.0001bcfc(&uStackX_8,arg2_00);
        if (cVar1 != '\0') {
            return 0;
        }
        arg2_00 = *(arg1 + 8) + uVar3;
        uVar2 = fcn.00019bb0(*arg1,arg2_00);
    } while ((uVar2 >> 0xf & 1) != 0);
    return 1;
}


/* fcn.00019bb0 @ 0x19bb0 */

uint fcn.00019bb0(int64_t arg1,int64_t arg2)

{
    uint auStackX_8 [8];
    
    auStackX_8[0] = 0;
    (**(arg1 + 0x10))(arg1,2,0xff,arg2,1,auStackX_8);
    return auStackX_8[0];
}


/* fcn.00019c78 @ 0x19c78 */

void fcn.00019c78(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint auStackX_18 [4];
    
    auStackX_18[0] = arg3;
    (**(arg1 + 0x18))(arg1,2,0xff,arg2,1,auStackX_18);
    return;
}


/* fcn.0001bc9c @ 0x1bc9c */

int64_t fcn.0001bc9c(int64_t arg1,int64_t arg2)

{
    int64_t aiStackX_8 [4];
    
    fcn.0001cae0(aiStackX_8,arg2);
    return *0x438e0 * arg1 + aiStackX_8[0];
}


/* fcn.0001bcfc @ 0x1bcfc */

ulong fcn.0001bcfc(int64_t arg1,int64_t arg2)

{
    uint64_t auStackX_8 [4];
    
    fcn.0001cae0(auStackX_8,arg2);
    return CONCAT71(*arg1 >> 8,*arg1 <= auStackX_8[0]);
}


/* fcn.0001cddc @ 0x1cddc */

void fcn.0001cddc(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t auStackX_18 [4];
    
    fcn.0001d398(arg1,arg2);
    iVar2 = (arg2 & 0xffU) * 0x80;
    uVar1 = fcn.00019bb0(*arg1,*(arg1 + 8) + 300 + iVar2);
    fcn.00019c78(*arg1,*(arg1 + 8) + 300 + iVar2,*(arg1 + 0x10 + (arg2 & 0xffU) * 4) & 0xf0 | uVar1 & 0xffffff01 | 1);
    (**(*0x4af30 + 0xf8))(5000);
    auStackX_18[0] = fcn.00019bb0(*arg1,*(arg1 + 8) + 300 + iVar2);
    auStackX_18[0] = auStackX_18[0] & 0xfffffff0;
    (**(*arg1 + 0x18))(*arg1,2,CONCAT71(auStackX_18[0] >> 8,0xff),*(arg1 + 8) + 300 + iVar2,1,auStackX_18);
    return;
}


/* fcn.0001d278 @ 0x1d278 */

ulong fcn.0001d278(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int16_t iVar5;
    uint64_t uVar6;
    
    iVar5 = ((arg2 & 0xff) + 2) * 0x80;
    uVar6 = iVar5 + 0x18;
    uVar4 = fcn.00019bb0(*arg1,*(arg1 + 8) + uVar6);
    if ((uVar4 & 1) == 0) {
        uVar1 = fcn.00019bb0(*arg1,*(arg1 + 8) + uVar6);
        fcn.00019c78(*arg1,*(arg1 + 8) + uVar6,uVar1 | 0x10);
        uVar1 = fcn.00019bb0(*arg1,*(arg1 + 8) + uVar6);
        uVar2 = fcn.00019bb0(*arg1,iVar5 + 0x20 + *(arg1 + 8));
        uVar3 = fcn.00019bb0(*arg1,iVar5 + 0x28 + *(arg1 + 8));
        if (((((uVar1 >> 0xf & 1) != 0) || ((uVar1 & 0x10) == 0)) || ((uVar2 & 8) != 0)) ||
           (((uVar2 & 0x80) != 0 || (((uVar3 & 0xf) != 3 && (((uVar3 >> 8 & 0xf) - 2 & 0xfffffffb) != 0)))))) {
            return 0;
        }
        fcn.00019c78(*arg1,uVar6 + *(arg1 + 8),uVar1 | 1);
    }
    return 1;
}


/* fcn.0001d078 @ 0x1d078 */

void fcn.0001d078(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    uint auStackX_18 [4];
    
    uVar2 = *(arg1 + 0x100) + 0x400;
    uVar3 = ((arg2 & 0xff) + 2) * 0x80;
    fcn.00019c78(*arg1,uVar3 + *(arg1 + 8),uVar2 & 0xfffffc00);
    iVar1 = uVar3;
    fcn.00019c78(*arg1,iVar1 + 4 + *(arg1 + 8),uVar2 >> 0x20);
    uVar2 = *(arg1 + 0xf0) + 0x100;
    fcn.00019c78(*arg1,iVar1 + 8 + *(arg1 + 8),uVar2 & 0xffffff00);
    auStackX_18[0] = uVar2 >> 0x20;
    (**(*arg1 + 0x18))(*arg1,2,CONCAT71(uVar2 >> 0x28,0xff),iVar1 + 0xc + *(arg1 + 8),1,auStackX_18);
    return;
}


/* fcn.00013c68 @ 0x13c68 */

uchar fcn.00013c68(void)

{
    return *0x42ee0;
}


/* fcn.00013c60 @ 0x13c60 */

uchar fcn.00013c60(void)

{
    return *0x42ee1;
}


/* fcn.0001e460 @ 0x1e460 */

uchar fcn.0001e460(int64_t arg1,int64_t arg2,ulong noname_2,ulong noname_3,int32_t arg_30h)

{
    uint32_t arg2_00;
    char cVar1;
    uint32_t uVar2;
    uint64_t arg2_01;
    int iVar3;
    ulong uStackX_18;
    uint32_t uStackX_20;
    
    iVar3 = ((arg2 & 0xff) + 2) * 0x80;
    uStackX_18 = fcn.0001bc9c(31000000,arg2);
    cVar1 = fcn.0001bcfc(&uStackX_18,arg2);
    if (cVar1 == '\0') {
        do {
            uStackX_20 = fcn.0001d068(arg1,iVar3 + 0x20);
            if (((uStackX_20 & 0x80) == 0) && ((uStackX_20 & 9) == 0)) {
                return 1;
            }
            arg2_00 = iVar3 + 0x30;
            uVar2 = fcn.0001d068(arg1,arg2_00);
            arg2_01 = uVar2;
            fcn.0001d6e0(arg1,arg2_01,arg2_00);
            cVar1 = fcn.0001bcfc(&uStackX_18,arg2_01);
        } while (cVar1 == '\0');
    }
    return 0;
}


/* fcn.00013c18 @ 0x13c18 */

ulong fcn.00013c18(int64_t arg1,uint32_t arg2)

{
    uint8_t uVar1;
    
    uVar1 = 0;
    if (*0x42ef4 != 0) {
        do {
            if (*(uVar1 * 0x208 + 0x42f00) == (arg2 & 0xff)) {
                *arg1 = uVar1 * 0x208 + 0x42f08;
                return 0;
            }
            uVar1 = uVar1 + 1;
        } while (uVar1 < *0x42ef4);
    }
    return 2;
}


/* fcn.0001dd74 @ 0x1dd74 */

void fcn.0001dd74(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    unkbyte7 Var1;
    int64_t iStack_48;
    uint uStack_40;
    uint uStack_3c;
    uchar uStack_38;
    uchar uStack_25;
    
    Var1 = arg4 >> 8;
    fcn.0001ba7c(&iStack_48,0,0x35);
    uStack_3c = 1;
    uStack_25 = 0xec;
    uStack_40 = 0x200;
    iStack_48 = arg2;
    uStack_38 = arg3;
    fcn.0001d764(arg1,&iStack_48,60000000,CONCAT71(Var1,arg4));
    return;
}


/* fcn.0001ddf0 @ 0x1ddf0 */

ulong fcn.0001ddf0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int8_t iVar2;
    ulong uVar3;
    ulong uVar4;
    ulong in_R9;
    int64_t iVar5;
    int64_t var_40h;
    int32_t var_38h;
    int32_t var_34h;
    int8_t var_30h;
    int16_t var_1dh;
    int32_t var_1bh;
    int16_t var_13h;
    
    iVar2 = arg3;
    fcn.0001ba7c(&var_40h,0,0x35);
    var_34h = 0;
    iVar5 = CONCAT71(in_R9 >> 8,1);
    uVar3 = 60000000;
    var_1dh = 0x7ef;
    var_30h = iVar2;
    iVar1 = fcn.0001d764(arg1,&var_40h,60000000,iVar5);
    if (iVar1 == 0) {
        iVar5 = 0;
        uVar3 = fcn.0001dd74(arg1,arg2,CONCAT71(uVar3 >> 8,iVar2),0);
        if ((uVar3 == 0) && ((*arg2 >> 2 & 1) == 0)) {
            return uVar3;
        }
    }
    fcn.0001ba7c(&var_40h,0,0x35);
    iVar5 = CONCAT71(iVar5 >> 8,1);
    var_1dh = CONCAT11(var_1dh._1_1_,200);
    uVar4 = 60000000;
    var_34h = 1;
    var_1bh = 0x40000000;
    var_13h = 1;
    var_38h = 0x200;
    var_40h = arg2;
    var_30h = iVar2;
    uVar3 = fcn.0001d764(arg1,&var_40h,60000000,iVar5);
    if (uVar3 == 0) {
        iVar1 = fcn.0001dd74(arg1,arg2,CONCAT71(uVar4 >> 8,iVar2),CONCAT71(iVar5 >> 8,1));
        if ((iVar1 == 0) && ((*arg2 >> 2 & 1) == 0)) {
            uVar3 = 0;
        }
        else {
            uVar3 = 2;
        }
    }
    return uVar3;
}


/* fcn.0001dffc @ 0x1dffc */

void fcn.0001dffc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint8_t uVar2;
    unkbyte7 in_R9;
    uchar auStack_48 [12];
    uint uStack_3c;
    uchar uStack_38;
    ushort uStack_25;
    uint8_t uStack_1b;
    
    uVar2 = 0;
    fcn.0001ba7c(auStack_48,0,0x35);
    uVar1 = 6;
    do {
        if ((arg2 >> (uVar1 & 0x1f) & 1) != 0) {
            uVar2 = uVar1;
            break;
        }
        uVar1 = uVar1 - 1;
    } while (-1 < uVar1);
    uStack_3c = 0;
    uStack_1b = uVar2 & 7 | 0x40;
    uStack_25 = 0x3ef;
    uStack_38 = arg3;
    fcn.0001d764(arg1,auStack_48,60000000,CONCAT71(in_R9,1));
    return;
}


/* fcn.00013c10 @ 0x13c10 */

void fcn.00013c10(void)

{
    *0x42ee2 = 0;
    return;
}


/* fcn.00013c00 @ 0x13c00 */

ulong fcn.00013c00(void)

{
    uchar *puVar1;
    int64_t iVar2;
    
    fcn.0001a334(L"RstVmdFastEnumVar");
    iVar2 = 0x68a;
    puVar1 = 0x42ef0;
    do {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return 0x42ef0;
}


/* fcn.0001a03c @ 0x1a03c */

uchar fcn.0001a03c(void)

{
    return *0x43858;
}


/* fcn.0001ce98 @ 0x1ce98 */

bool fcn.0001ce98(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uStackX_8;
    
    *arg3 = 0;
    iVar1 = fcn.0001a044(*(arg2 + 8));
    if (-1 < iVar1) {
        *arg2 = uStackX_8;
    }
    return -1 < iVar1;
}


/* fcn.0001d520 @ 0x1d520 */

ulong fcn.0001d520(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    char cVar2;
    char cVar3;
    int16_t iVar4;
    int16_t iVar5;
    int iVar6;
    ulong uVar7;
    int64_t iVar8;
    uint8_t uVar9;
    ulong in_R8;
    ulong in_R9;
    ulong uStackX_18;
    uint8_t uVar10;
    int32_t in_stack_fffffffffffffde8;
    uchar auStack_204 [34];
    uchar auStack_1e2 [122];
    uint16_t uStack_168;
    
    iVar8 = arg2;
    cVar2 = fcn.00013c68();
    cVar3 = fcn.00013c60();
    if (cVar3 == '\0') {
        return 0;
    }
    uVar9 = arg2;
    if ((*0x438f1 >> (uVar9 & 0x1f) & 1) != 0) {
        return 2;
    }
    if ((*0x438f0 >> (uVar9 & 0x1f) & 1) != 0) {
        return 0;
    }
    iVar8 = CONCAT71(iVar8 >> 8,uVar9);
    cVar3 = fcn.0001e460(arg1,iVar8,in_R8,in_R9,in_stack_fffffffffffffde8);
    uVar10 = in_stack_fffffffffffffde8;
    uVar1 = arg2;
    *0x438f0 = *0x438f0 | 1 << (uVar1 & 0x1f);
    if (cVar2 == '\0') {
        if (cVar3 != '\0') {
            return 0;
        }
    }
    else if (cVar3 != '\0') {
        uStackX_18 = 0;
        uVar7 = fcn.00013c18(&uStackX_18,CONCAT71(iVar8 >> 8,uVar9));
        if (uVar7 != 0) {
            *0x438f1 = *0x438f1 | 1 << (uVar1 & 0x1f);
            return uVar7;
        }
        uVar7 = 0x200;
        fcn.0001ba7c(&stack0xfffffffffffffde8,0,0x200);
        iVar8 = CONCAT71(uVar7 >> 8,uVar9);
        iVar6 = fcn.0001dd74(arg1,&stack0xfffffffffffffde8,iVar8,0);
        if ((iVar6 == 0) && ((uVar10 >> 2 & 1) != 0)) {
            iVar6 = fcn.0001ddf0(arg1,&stack0xfffffffffffffde8,CONCAT71(iVar8 >> 8,uVar9));
        }
        iVar4 = fcn.0001ba94(uStackX_18 + 0x14,auStack_204,0x14);
        uVar7 = 0;
        iVar5 = fcn.0001ba94(uStackX_18 + 0x36,auStack_1e2,0x28);
        if (((iVar6 == 0) && (iVar4 == 0)) && (iVar5 == 0)) {
            fcn.0001dffc(arg1,uStack_168,CONCAT71(uVar7 >> 8,uVar9));
            return 0;
        }
        fcn.00013c10();
        uVar7 = 2;
        *0x438f1 = *0x438f1 | 1 << (uVar1 & 0x1f);
        goto code_r0x0001d6d4;
    }
    uVar7 = 4;
code_r0x0001d6d4:
    fcn.00013c00();
    return uVar7;
}


/* fcn.0001d134 @ 0x1d134 */

//WARNING: Variable defined which should be unmapped: var_fh

int64_t fcn.0001d134(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    ulong *puVar5;
    uint32_t *puVar6;
    int32_t var_fh;
    
    fcn.0001d078(arg1,CONCAT71(arg2 >> 8,*(arg2 + 0x10)));
    puVar6 = (*(arg1 + 0x100) + 0x400U & 0xfffffffffffffc00) + (arg3 & 0xffU) * 0x20;
    fcn.0001ba7c(puVar6,0,0x20);
    uVar4 = *(arg1 + 0xf8) + 0x80;
    puVar5 = uVar4 & 0xffffffffffffff80;
    fcn.0001ba7c(puVar5,0,0x80);
    puVar6[2] = puVar5;
    puVar6[3] = uVar4 >> 0x20;
    uVar1 = *puVar6;
    uVar3 = uVar1 & 0xffff0fff | 0x80;
    *puVar6 = uVar3;
    if (*(arg2 + 0xc) == 2) {
        uVar3 = uVar1 & 0xffff0fff | 0xc0;
        *puVar6 = uVar3;
    }
    if (*(arg2 + 0x23) == -0x60) {
        *puVar6 = *puVar6 | 0x20;
        uVar2 = *(arg2 + 0x19);
        puVar5[8] = *(arg2 + 0x11);
        puVar5[9] = uVar2;
    }
    if (*(arg2 + 0xc) != 0) {
        if (((*arg2 & 1) != 0) || ((*(arg2 + 8) & 1) != 0)) {
            return (uVar3 >> 8) << 8;
        }
        fcn.0001ba7c(puVar5 + 0x10,0,0x10);
        *(puVar5 + 0x10) = *arg2;
        *(puVar5 + 0x84) = *arg2 >> 0x20;
        uVar3 = (*(arg2 + 8) - 1U ^ *(puVar5 + 0x8c)) & 0x3fffff;
        *(puVar5 + 0x8c) = *(puVar5 + 0x8c) ^ uVar3;
        *(puVar6 + 2) = 1;
    }
    *puVar6 = *puVar6 & 0xffffffe5;
    *puVar6 = *puVar6 | 5;
    uVar2 = *(arg2 + 0x29);
    *puVar5 = *(arg2 + 0x21);
    puVar5[1] = uVar2;
    *(puVar5 + 2) = *(arg2 + 0x31);
    *(puVar5 + 1) = *(puVar5 + 1) & 0xf0;
    *(puVar5 + 1) = *(puVar5 + 1) | 0x80;
    *puVar5 = 0x27;
    return CONCAT71(uVar3 >> 8,1);
}


/* fcn.0001cee8 @ 0x1cee8 */

uint8_t fcn.0001cee8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    char cVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int64_t iVar6;
    uchar uVar7;
    int16_t iVar8;
    ulong uStackX_8;
    
    cVar1 = '\0';
    iVar8 = ((arg2 & 0xffU) + 2) * 0x80;
    iVar6 = arg2;
    uStackX_8 = fcn.0001bc9c(arg4,arg2);
    cVar2 = fcn.0001bcfc(&uStackX_8,iVar6);
    if (cVar2 == '\0') {
        do {
            uVar4 = fcn.00019bb0(*arg1,*(arg1 + 8) + iVar8 + 0x38);
            iVar6 = *(arg1 + 8) + iVar8 + 0x10;
            uVar5 = fcn.00019bb0(*arg1,iVar6);
            if (((uVar5 >> 0x1b & 1) != 0) || ((uVar5 >> 0x1e & 1) != 0)) break;
            if ((arg3 & uVar4) == 0) {
                cVar1 = '\x01';
                break;
            }
            cVar2 = fcn.0001bcfc(&uStackX_8,iVar6);
        } while (cVar2 == '\0');
    }
    uVar4 = fcn.00019bb0(*arg1,*(arg1 + 8) + iVar8 + 0x10);
    iVar6 = iVar8 + 0x20 + *(arg1 + 8);
    uVar3 = fcn.00019bb0(*arg1,iVar6);
    if ((uVar4 & 0x78000000) == 0) {
        if ((uVar3 & 1) == 0) {
            return ~-cVar1 & 0xb;
        }
    }
    else {
        uVar7 = arg2;
        fcn.0001d398(arg1,CONCAT71(iVar6 >> 8,uVar7));
        fcn.00019c78(*arg1,*(arg1 + 8) + 0x130 + (arg2 & 0xffU) * 0x80,0xffffffff);
        iVar6 = iVar8 + 0x10 + *(arg1 + 8);
        fcn.00019c78(*arg1,iVar6,uVar4);
        if ((uVar3 < '\0') || ((uVar3 & 8) != 0)) {
            iVar6 = CONCAT71(iVar6 >> 8,uVar7);
            fcn.0001cddc(arg1,iVar6);
        }
        fcn.0001d278(arg1,CONCAT71(iVar6 >> 8,uVar7));
    }
    return 2;
}


/* fcn.0001a09c @ 0x1a09c */

ulong fcn.0001a09c(int64_t param_1)

{
    ulong uVar1;
    
    if (*0x43858 == '\0') {
        return 0;
    }
    //WARNING: Could not recover jumptable at 0x0001a0a8. Too many branches
    //WARNING: Treating indirect jump as call
    uVar1 = (**(param_1 + 0x50))();
    return uVar1;
}


/* fcn.0001ec3c @ 0x1ec3c */

//WARNING: Variable defined which should be unmapped: var_fh
//WARNING: Variable defined which should be unmapped: var_17h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_27h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

uint64_t fcn.0001ec3c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h)

{
    uint32_t uVar1;
    uchar uVar2;
    unkuint7 Var3;
    uint uVar4;
    ulong uVar5;
    int iVar6;
    int iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uchar *arg2_00;
    uint32_t uVar10;
    int64_t arg3_00;
    uint64_t uVar11;
    uint32_t uVar12;
    uint32_t auStackX_10 [4];
    uint64_t uStackX_20;
    int64_t in_stack_00000028;
    int32_t var_48h;
    int64_t var_58h;
    uint64_t in_stack_ffffffffffffff78;
    uint in_stack_ffffffffffffff80;
    uint in_stack_ffffffffffffff84;
    int8_t in_stack_ffffffffffffff88;
    int8_t arg_40h;
    uint64_t uStack_68;
    uchar uStack_60;
    ulong uStack_5f;
    uint uStack_57;
    ushort uStack_53;
    uchar uStack_51;
    uchar uStack_50;
    ulong uStack_4f;
    ulong uStack_47;
    uchar uStack_3f;
    int64_t var_30h;
    int8_t var_28h;
    int64_t var_27h;
    int32_t var_1fh;
    int16_t var_1bh;
    int8_t var_19h;
    int8_t var_18h;
    int64_t var_17h;
    int64_t var_fh;
    int8_t var_7h;
    
    uVar10 = *(arg2 + 0x10);
    uVar9 = *arg2;
    uStack_60 = 0;
    uVar2 = arg3;
    uVar11 = *(arg2 + 8);
    uVar8 = 2;
    uStack_5f = 0;
    uStack_57 = 0;
    uStack_53 = 0;
    uStack_51 = 0;
    if ((*(arg4 + 0x10) & 0x10) == 0) {
        uStackX_20 = 0;
        auStackX_10[0] = 0x800;
        uStack_68 = uVar11;
        uVar8 = fcn.0001eee8(arg1,CONCAT71(uVar9 >> 8,uVar2),&uStackX_20,auStackX_10,
                             in_stack_ffffffffffffff78 & 0xffffffffffffff00,
                             CONCAT44(in_stack_ffffffffffffff84,in_stack_ffffffffffffff80),in_stack_ffffffffffffff88);
        if (uVar8 == 0) {
            uVar9 = uStackX_20;
            uVar10 = auStackX_10[0];
code_r0x0001ecc6:
            fcn.000140dc(arg1,in_stack_00000028,uVar9,uVar10);
            uVar8 = 10;
        }
    }
    else {
        uVar1 = auStackX_10[0];
        if (uVar10 != 0) {
            do {
                auStackX_10[0] = uVar1;
                uVar5 = uStack_5f;
                uVar12 = *(arg4 + 0xc);
                uVar1 = *(arg2 + 0x14);
                if (uVar10 < *(arg4 + 0xc)) {
                    uVar12 = uVar10 & 0xffff;
                }
                uVar10 = uVar10 - uVar12;
                if (uVar1 == 1) {
                    uStack_60 = 0x28;
                }
                else {
                    if (uVar1 != 2) {
                        return 2;
                    }
                    uStack_60 = 0x2a;
                }
                arg_40h = 0;
                uStack_5f._4_4_ = SUB84(uVar5,4);
                uStack_5f._0_4_ = CONCAT13(uVar9 >> 8,CONCAT12(uVar9 >> 0x10,CONCAT11(uVar9 >> 0x18,uStack_5f)));
                uVar4 = uStack_5f;
                uStack_5f._0_7_ = CONCAT16(uVar12 >> 8,uStack_5f);
                iVar6 = uVar12 * *(arg4 + 8);
                Var3 = uStack_5f >> 0x28;
                uStack_5f._0_5_ = CONCAT14(uVar9,uVar4);
                uStack_5f = CONCAT17(uVar12,CONCAT25(Var3,uStack_5f));
                arg3_00 = CONCAT71(uVar11 >> 8,uVar2);
                uStackX_20 = uVar9;
                uStack_68 = uVar11;
                auStackX_10[0] = fcn.0001f1c8(arg1,&uStack_60,arg3_00,uVar1);
                if (auStackX_10[0] != 0) {
                    uStack_50 = 0;
                    uStack_4f = 0;
                    arg2_00 = &uStack_50;
                    uStack_47 = 0;
                    uStack_3f = 0;
                    iVar7 = fcn.0001f17c(arg1,arg2_00,CONCAT71(arg3_00 >> 8,uVar2));
                    if (iVar7 == 0) {
                        uStack_68 = 0;
                        uStackX_20 = CONCAT44(uStackX_20._4_4_,0x800);
                        if ((uStack_4f._1_1_ & 0xf) == 2) {
                            if ((uStack_47._3_1_ == '\x04') && (uStack_47._4_1_ == '\x01')) {
                                fcn.0001eee8(arg1,CONCAT71(arg2_00 >> 8,uVar2),&uStack_68,&uStackX_20,
                                             uVar11 & 0xffffffffffffff00,CONCAT44(in_stack_ffffffffffffff84,iVar6),
                                             arg_40h);
                                uVar9 = uStack_68;
                                uVar10 = uStackX_20;
                                goto code_r0x0001ecc6;
                            }
                            if (uStack_47._3_1_ == ':') {
                                *(arg4 + 0x10) = *(arg4 + 0x10) & 0xffffffef;
                                fcn.000140dc(arg1,in_stack_00000028,0,0x800);
                                return 0xc;
                            }
                        }
                    }
                    break;
                }
                uVar9 = uStackX_20 + uVar12;
                uVar11 = uStack_68 + uVar12 * *(arg4 + 8);
                uVar1 = 0;
            } while (uVar10 != 0);
            uVar8 = auStackX_10[0];
        }
    }
    return uVar8;
}


/* fcn.0001d42c @ 0x1d42c */

ulong fcn.0001d42c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,ulong noname_4,ulong noname_5,
                  int16_t arg_40h,int64_t arg_48h,int64_t arg_50h,int64_t arg_58h)

{
    uint64_t uVar1;
    ulong uVar2;
    ulong extraout_RAX;
    uint64_t uVar3;
    int iVar4;
    unkbyte7 Var5;
    unkbyte6 in_stack_0000003a;
    ulong uStack_58;
    uint uStack_50;
    int iStack_4c;
    int64_t var_40h;
    int32_t var_38h;
    int32_t var_34h;
    int8_t var_30h;
    char cStack_35;
    uchar uStack_34;
    uchar uStack_33;
    uchar uStack_32;
    uchar uStack_31;
    uint8_t uStack_30;
    uchar uStack_2b;
    int8_t var_1dh;
    int8_t var_1ch;
    int8_t var_1bh;
    int8_t var_1ah;
    int8_t var_19h;
    int8_t var_18h;
    int8_t var_13h;
    
    Var5 = arg4 >> 8;
    uVar1 = CONCAT62(in_stack_0000003a,arg_40h);
    uVar3 = uVar1 >> 9;
    if (uVar3 < 0x10000) {
        fcn.0001ba7c(&uStack_58,0,0x35);
        iVar4 = arg3;
        if (uVar1 == 0) {
            iStack_4c = 0;
            cStack_35 = '[';
            if (iVar4 == 1) {
                uStack_30 = 1;
            }
        }
        else {
            uStack_2b = uVar3;
            uStack_50 = uVar1;
            uStack_33 = uVar3 >> 8;
            cStack_35 = (-(iVar4 != 0) & 0xfeU) + 0x5e;
            iStack_4c = 2 - (iVar4 != 0);
            uStack_58 = noname_5;
        }
        uStack_30 = uStack_30 | 0x40;
        uStack_32 = noname_4;
        uStack_31 = noname_4 >> 8;
        var_40h._0_1_ = arg2;
        uStack_34 = arg4;
        fcn.0001d764(arg1,&uStack_58,arg_48h,CONCAT71(Var5,1));
        uVar2 = extraout_RAX;
    }
    else {
        uVar2 = 2;
    }
    return uVar2;
}


/* fcn.0001d068 @ 0x1d068 */

uint fcn.0001d068(int64_t arg1,uint32_t arg2)

{
    uint auStackX_8 [8];
    
    auStackX_8[0] = 0;
    (**(*arg1 + 0x10))(*arg1,2,0xff,arg2 + *(arg1 + 8),1,auStackX_8);
    return auStackX_8[0];
}


/* fcn.0001d6e0 @ 0x1d6e0 */

void fcn.0001d6e0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint auStackX_18 [4];
    
    auStackX_18[0] = arg2;
    (**(*arg1 + 0x18))(*arg1,2,CONCAT71(arg2 >> 8,0xff),(arg3 & 0xffffU) + *(arg1 + 8),1,auStackX_18);
    return;
}


/* fcn.0001cdb8 @ 0x1cdb8 */

void fcn.0001cdb8(int64_t arg1,int64_t arg2)

{
    uint auStackX_18 [4];
    
    auStackX_18[0] = 0xffffffff;
    (**(*arg1 + 0x18))(*arg1,2,0xffffffff,*(arg1 + 8) + 0x130 + (arg2 & 0xffU) * 0x80,1,auStackX_18);
    return;
}


/* fcn.0001e354 @ 0x1e354 */

char fcn.0001e354(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    int64_t arg2_00;
    uint64_t arg2_01;
    char cVar4;
    uint16_t uVar5;
    char cVar6;
    ulong uStackX_18;
    
    cVar4 = '\0';
    cVar6 = '\0';
    arg2_00 = arg2;
    uStackX_18 = fcn.0001bc9c(15000,arg2);
    cVar1 = fcn.0001bcfc(&uStackX_18,arg2_00);
    if (cVar1 == '\0') {
        uVar5 = ((arg2 & 0xff) + 2) * 0x80 + 0x28;
        do {
            arg2_01 = uVar5;
            uVar3 = fcn.0001d068(arg1,uVar5);
            if ((((uVar3 & 0xf) - 1 & 0xfffffffd) == 0) && (cVar6 = '\x01', (uVar3 & 0xf) == 3)) {
                arg2_01 = CONCAT71(arg2_01 >> 8,arg2);
                cVar4 = '\x01';
                fcn.0001cdb8(arg1,arg2_01);
                break;
            }
            cVar1 = fcn.0001bcfc(&uStackX_18,arg2_01);
        } while (cVar1 == '\0');
        if ((cVar6 != '\0') && ((uVar3 & 0xf) != 3)) {
            uStackX_18 = fcn.0001bc9c(5000,arg2_01);
            do {
                cVar1 = fcn.0001bcfc(&uStackX_18,arg2_01);
                if (cVar1 != '\0') {
                    return cVar4;
                }
                arg2_01 = uVar5;
                uVar2 = fcn.0001d068(arg1,uVar5);
            } while ((uVar2 & 0xf) != 3);
            fcn.0001cdb8(arg1,CONCAT71(arg2_01 >> 8,arg2));
            return '\x01';
        }
    }
    return cVar6;
}


/* fcn.00013bc8 @ 0x13bc8 */

uint64_t fcn.00013bc8(uint32_t arg1)

{
    uint64_t in_RAX;
    uint8_t uVar1;
    
    uVar1 = 0;
    if (*0x42ef4 != 0) {
        do {
            in_RAX = 0x42f00;
            if (*(uVar1 * 0x208 + 0x42f00) == (arg1 & 0xff)) {
                return 0x42f01;
            }
            uVar1 = uVar1 + 1;
        } while (uVar1 < *0x42ef4);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.0001dc74 @ 0x1dc74 */

ulong fcn.0001dc74(int64_t arg1)

{
    uint32_t *puVar1;
    uint8_t uVar2;
    char cVar3;
    uint32_t uVar4;
    ulong uVar5;
    int64_t arg2;
    uint64_t uVar6;
    ulong uStackX_8;
    
    if (arg1 == 0) {
code_r0x0001dd36:
        uVar5 = 0;
    }
    else {
        uVar2 = fcn.0001d068(arg1,0xc);
        uVar6 = 0;
        for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
            if ((uVar2 & 1) != 0) {
                uVar4 = fcn.0001d068(arg1,uVar6 * 0x80 + 300);
                if ((uVar4 & 0xf0) < 0x31) {
                    puVar1 = arg1 + 0x10 + uVar6 * 4;
                    *puVar1 = *puVar1 & 0xffffff0f;
                    puVar1 = arg1 + 0x10 + uVar6 * 4;
                    *puVar1 = *puVar1 | uVar4 & 0xf0;
                }
                else {
                    puVar1 = arg1 + 0x10 + uVar6 * 4;
                    *puVar1 = *puVar1 & 0xffffff0f;
                }
            }
            uVar6 = uVar6 + 1;
        }
        arg2 = 0x80000001;
        fcn.0001d6e0(arg1,0x80000001,4);
        uStackX_8 = fcn.0001bc9c(1000000,arg2);
        do {
            cVar3 = fcn.0001bcfc(&uStackX_8,arg2);
            if (cVar3 != '\0') goto code_r0x0001dd36;
            arg2 = 4;
            uVar4 = fcn.0001d068(arg1,4);
        } while ((uVar4 & 1) != 0);
        fcn.0001d6e0(arg1,uVar4 & 0xfffffffd | 0x80000000,4);
        fcn.0001d6e0(arg1,0xffffffff,8);
        uVar5 = 1;
    }
    return uVar5;
}


/* fcn.00013c70 @ 0x13c70 */

uchar fcn.00013c70(void)

{
    return *0x42ef6;
}


/* fcn.00013c08 @ 0x13c08 */

void fcn.00013c08(void)

{
    *0x42ee0 = 0;
    return;
}


/* fcn.000140d4 @ 0x140d4 */

void fcn.000140d4(int64_t arg1)

{
    *0x42ef6 = arg1;
    return;
}


/* fcn.0001def4 @ 0x1def4 */

ulong fcn.0001def4(int64_t arg1,int64_t arg2,int32_t arg_18h)

{
    uint32_t arg2_00;
    char cVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int iVar4;
    uchar uVar5;
    ulong uStackX_18;
    
    iVar4 = ((arg2 & 0xff) + 2) * 0x80;
    arg2_00 = iVar4 + 0x18;
    uVar3 = arg2_00;
    uVar2 = fcn.0001d068(arg1,arg2_00);
    uVar5 = arg2;
    if ((uVar2 & 0xc011) != 0) {
        uVar3 = CONCAT71(uVar3 >> 8,uVar5);
        cVar1 = fcn.0001d398(arg1,uVar3);
        if (cVar1 == '\0') {
            return 0;
        }
        if ((uVar2 & 0x10) != 0) {
            uVar3 = uVar2 & 0xffffffef;
            fcn.0001d6e0(arg1,uVar3,arg2_00);
            uStackX_18 = fcn.0001bc9c(500000,uVar3);
            do {
                cVar1 = fcn.0001bcfc(&uStackX_18,uVar3);
                if (cVar1 != '\0') {
                    return 0;
                }
                uVar3 = arg2_00;
                uVar2 = fcn.0001d068(arg1,arg2_00);
            } while ((uVar2 >> 0xe & 1) != 0);
        }
    }
    fcn.0001d078(arg1,CONCAT71(uVar3 >> 8,uVar5));
    uVar3 = uVar2 | 0x10;
    fcn.0001d6e0(arg1,uVar3,arg2_00);
    fcn.0001cdb8(arg1,CONCAT71(uVar3 >> 8,uVar5));
    fcn.0001d6e0(arg1,0,iVar4 + 0x10);
    fcn.0001d6e0(arg1,0,iVar4 + 0x14);
    return 1;
}


/* fcn.0001e190 @ 0x1e190 */

//WARNING: Variable defined which should be unmapped: var_24h

bool fcn.0001e190(int64_t arg1,int64_t arg2,int64_t arg3,int32_t arg_18h)

{
    char cVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint16_t uVar8;
    int iVar9;
    uint64_t arg3_00;
    uint32_t uVar10;
    uint64_t noname_3;
    uchar uVar11;
    int32_t unaff_R15D;
    bool bVar12;
    int32_t var_24h;
    int32_t var_28h;
    
    bVar12 = false;
    uVar10 = (arg2 & 0xff) + 2;
    noname_3 = uVar10;
    iVar9 = uVar10 * 0x80;
    uVar10 = iVar9 + 0x18;
    uVar3 = fcn.0001d068(arg1,uVar10);
    uVar6 = 0;
    uVar4 = fcn.0001d068(arg1,0);
    if (((uVar4 >> 0x1c & 1) == 0) || (uVar6 = 0x82000, (uVar3 & 0x82000) != 0x82000)) {
        uVar11 = arg2;
        if (((uVar4 >> 0x1b & 1) == 0) || ((uVar3 & 2) != 0)) {
            uVar7 = CONCAT71(uVar6 >> 8,uVar11);
            fcn.0001cddc(arg1,uVar7);
        }
        else {
            uVar7 = uVar3 | 2;
            fcn.0001d6e0(arg1,uVar7,uVar10);
        }
        iVar5 = CONCAT71(uVar7 >> 8,uVar11);
        cVar1 = fcn.0001e354(arg1,iVar5);
        if (cVar1 != '\0') {
code_r0x0001e28e:
            fcn.0001cdb8(arg1,CONCAT71(iVar5 >> 8,uVar11));
            uVar3 = fcn.0001d068(arg1,uVar10);
            arg3_00 = uVar10;
            uVar7 = uVar3 & 0xfffdffff;
            iVar5 = arg1;
            fcn.0001d6e0(arg1,uVar7,arg3_00);
            *arg3 = 0;
            cVar1 = fcn.00013c68();
            if (((cVar1 != '\0') && (cVar1 = fcn.00013c60(), cVar1 != '\0')) &&
               (cVar1 = fcn.00013bc8(CONCAT71(iVar5 >> 8,uVar11)), cVar1 != '\0')) {
                return true;
            }
            cVar1 = fcn.0001e460(arg1,CONCAT71(uVar7 >> 8,uVar11),arg3_00,noname_3,unaff_R15D);
            if (cVar1 != '\0') {
                iVar9 = fcn.0001d068(arg1,iVar9 + 0x24);
                if (iVar9 == -0x14ebfeff) {
                    uVar3 = fcn.0001d068(arg1,uVar10);
                    bVar12 = true;
                    *arg3 = 1;
                    fcn.0001d6e0(arg1,uVar3 | 0x3000000,uVar10);
                }
                else {
                    bVar12 = iVar9 == 0x101;
                }
            }
            return bVar12;
        }
        uVar7 = iVar9 + 0x28U;
        uVar2 = fcn.0001d068(arg1,iVar9 + 0x28U);
        if ((uVar2 & 0xf) == 1) {
            iVar5 = CONCAT71(uVar7 >> 8,uVar11);
            fcn.0001cddc(arg1,iVar5);
            iVar5 = CONCAT71(iVar5 >> 8,uVar11);
            cVar1 = fcn.0001e354(arg1,iVar5);
            if (cVar1 != '\0') goto code_r0x0001e28e;
        }
    }
    else if ((uVar3 & 1) == 0) {
        uVar8 = iVar9 + 0x2c;
        uVar10 = fcn.0001d068(arg1,uVar8);
        fcn.0001d6e0(arg1,uVar10 & 0xfffffff4 | 4,uVar8);
    }
    return false;
}


/* fcn.0001f0e0 @ 0x1f0e0 */

void fcn.0001f0e0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uStack_18;
    ulong uStack_17;
    uint uStack_f;
    ushort uStack_b;
    uchar uStack_9;
    
    uStack_f = 0;
    uStack_b = 0;
    uStack_9 = 0;
    uStack_18 = 0x12;
    uStack_17 = 0x60000000;
    fcn.0001f1c8(arg1,&uStack_18,arg3,1);
    return;
}


/* fcn.0001eee8 @ 0x1eee8 */

//WARNING: Variable defined which should be unmapped: var_17h

int fcn.0001eee8(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t *arg4,ulong noname_4,ulong noname_5,
                int8_t arg_40h)

{
    int iVar1;
    int64_t arg3_00;
    uint32_t *puVar2;
    uchar uStack_30;
    ulong uStack_2f;
    int8_t var_20h;
    int32_t var_1fh;
    int16_t var_1bh;
    int8_t var_19h;
    int8_t var_18h;
    int64_t var_17h;
    int32_t var_fh;
    int16_t var_bh;
    int8_t var_9h;
    
    uStack_30 = 0;
    uStack_2f = 0;
    arg3_00 = CONCAT71(arg3 >> 8,noname_4);
    var_1fh = 0;
    var_1bh = 0;
    var_19h = 0;
    puVar2 = arg4;
    iVar1 = fcn.0001ee78(arg1,arg2,arg3_00);
    if (iVar1 == 0) {
        iVar1 = 0xc;
    }
    else if (iVar1 == 4) {
        iVar1 = 0xb;
    }
    else {
        puVar2 = NULL;
        uStack_30 = 0x25;
        iVar1 = fcn.0001f1c8(arg1,&uStack_30,CONCAT71(arg3_00 >> 8,arg2),1);
        if (iVar1 == 0) {
            *arg3 = 0;
            *arg4 = 0;
        }
    }
    fcn.0001f12c(arg1,*arg3,*arg4,CONCAT71(puVar2 >> 8,arg2));
    return iVar1;
}


/* fcn.00013c78 @ 0x13c78 */

void fcn.00013c78(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint8_t uVar1;
    char cVar2;
    uint16_t uVar3;
    uint *arg1_00;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t *piVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uchar in_stack_00000028;
    uchar uStack_88;
    uint64_t uStack_87;
    ulong uStack_7f;
    ulong uStack_77;
    uchar uStack_6f;
    ushort auStack_68 [2];
    int16_t iStack_64;
    uint uStack_62;
    
    if ((*0x43822 < 0x20) && (arg1_00 = fcn.0001b9e4(0x18), arg1_00 != NULL)) {
        *arg1_00 = 2;
        *(arg1_00 + 4) = in_stack_00000028;
        *(arg1_00 + 0x11) = *0x43822;
        *(arg1_00 + 2) = arg1;
        uVar1 = *0x43822;
        fcn.0001ba7c(auStack_68,0,0x3c);
        auStack_68[0] = 0x1203;
        fcn.00011858(auStack_68,10);
        uStack_62 = 0xffff;
        uStack_88 = 0;
        iStack_64 = 1 << (uVar1 & 0x1f);
        uStack_87 = 0;
        uStack_7f = 0;
        uStack_77 = 0;
        uStack_6f = 0;
        fcn.0001ba1c(&uStack_88,0x1a,arg2 + 8,8);
        uStack_87 = uStack_87 & 0xffffffffffffff;
        fcn.0001bc04(&uStack_88);
        uVar3 = fcn.0001bb80(&uStack_88);
        (&uStack_88)[uVar3] = 0x20;
        fcn.0001ba1c(&uStack_87 + uVar3,0x1a,arg2 + 0x10,0x10);
        uStack_6f = 0;
        fcn.0001bc04(&uStack_88);
        piVar4 = fcn.0001b9e4(0x18);
        if (piVar4 == NULL) {
            fcn.0001b9d8(arg1_00);
        }
        else {
            fcn.0001ba7c(piVar4,0,0x18);
            *(piVar4 + 1) = in_stack_00000028;
            *(piVar4 + 10) = 1;
            *(piVar4 + 9) = *0x43822;
            *0x43822 = *0x43822 + 1;
            iVar5 = fcn.00019104(arg1,1);
            if (iVar5 != 0) {
                *piVar4 = iVar5;
            }
            piVar6 = *0x43838;
            if (*0x43838 == NULL) {
                *0x43838 = piVar4;
            }
            else {
                while (piVar6[2] != NULL) {
                    piVar6 = piVar6[2];
                }
                piVar6[2] = piVar4;
            }
            cVar2 = fcn.0001a26c(auStack_68,arg1_00,0,0);
            if (cVar2 == '\0') {
                uVar7 = fcn.0001a688(*0x43830,auStack_68,&uStack_88,0);
                if (-1 < uVar7) {
                    uVar8 = fcn.0001a0e4(auStack_68,arg4,1,arg3);
                    if ((-1 < (uVar7 | uVar8)) && (uVar9 = fcn.0001a8ec(auStack_68), -1 < (uVar7 | uVar8 | uVar9))) {
                        fcn.0001ac20(auStack_68);
                        return;
                    }
                }
                fcn.0001aabc(*0x43830,auStack_68);
            }
        }
    }
    return;
}


/* fcn.0001e088 @ 0x1e088 */

void fcn.0001e088(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ushort uVar4;
    
    if (arg3 < 8) {
        iVar3 = (arg3 & 0xff) + 2;
        puVar1 = arg1 + 0x10 + iVar3 * 0x18;
        *puVar1 = *puVar1 | 4;
        uVar2 = *(arg1 + 0x10 + iVar3 * 0x18);
        if (((*(arg2 + 0xa6) & 0x400) == 0) || ((*(arg2 + 0xac) & 0x400) == 0)) {
            *(arg1 + iVar3 * 0x18) = *(arg2 + 0x78) & 0xfffffff;
            *(arg1 + 0x10 + iVar3 * 0x18) = uVar2 & 0xfffffffd;
        }
        else {
            *(arg1 + iVar3 * 0x18) = *(arg2 + 200);
            *(arg1 + 0x10 + iVar3 * 0x18) = uVar2 | 2;
        }
        if ((((*(arg2 + 0x100) & 7) == 7) && ((*(arg2 + 0xa4) & 2) != 0)) && ((*(arg2 + 0xaa) & 2) != 0)) {
            uVar2 = 1;
        }
        else {
            uVar2 = 0;
        }
        puVar1 = arg1 + 0x10 + iVar3 * 0x18;
        *puVar1 = *puVar1 & 0xfffffffe;
        puVar1 = arg1 + 0x10 + iVar3 * 0x18;
        *puVar1 = *puVar1 | uVar2;
        if (((*(arg2 + 0xd4) & 0xc000) == 0x4000) && ((*(arg2 + 0xd4) & 0x1000) != 0)) {
            uVar2 = *(arg2 + 0xea) * 2;
        }
        else {
            uVar2 = 0x200;
        }
        *(arg1 + 8 + iVar3 * 0x18) = uVar2;
        if ((*(arg1 + 0x10 + iVar3 * 0x18) & 2) == 0) {
            uVar4 = 0x100;
        }
        else {
            uVar4 = 0x400000 / uVar2;
        }
        *(arg1 + 0xc + iVar3 * 0x18) = uVar4;
    }
    return;
}


/* fcn.00014030 @ 0x14030 */

void fcn.00014030(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    ulong uVar2;
    ulong *puVar3;
    int64_t iVar4;
    
    if (2 < *0x42ef4) {
        *0x42ee0 = 0;
        return;
    }
    *(*0x42ef4 * 0x208 + 0x42f00) = arg2 & 0xff;
    iVar4 = 4;
    puVar3 = *0x42ef4 * 0x208 + 0x42f08;
    do {
        uVar2 = *(arg1 + 8);
        *puVar3 = *arg1;
        puVar3[1] = uVar2;
        uVar2 = *(arg1 + 0x18);
        puVar3[2] = *(arg1 + 0x10);
        puVar3[3] = uVar2;
        uVar2 = *(arg1 + 0x28);
        puVar3[4] = *(arg1 + 0x20);
        puVar3[5] = uVar2;
        uVar2 = *(arg1 + 0x38);
        puVar3[6] = *(arg1 + 0x30);
        puVar3[7] = uVar2;
        uVar2 = *(arg1 + 0x48);
        puVar3[8] = *(arg1 + 0x40);
        puVar3[9] = uVar2;
        uVar2 = *(arg1 + 0x58);
        puVar3[10] = *(arg1 + 0x50);
        puVar3[0xb] = uVar2;
        uVar2 = *(arg1 + 0x68);
        puVar3[0xc] = *(arg1 + 0x60);
        puVar3[0xd] = uVar2;
        puVar1 = arg1 + 0x70;
        uVar2 = *(arg1 + 0x78);
        arg1 = arg1 + 0x80;
        puVar3[0xe] = *puVar1;
        puVar3[0xf] = uVar2;
        iVar4 = iVar4 + -1;
        puVar3 = puVar3 + 0x10;
    } while (iVar4 != 0);
    *0x42ef4 = *0x42ef4 + 1;
    return;
}


/* fcn.00013ec8 @ 0x13ec8 */

void fcn.00013ec8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    char cVar2;
    int iVar3;
    int64_t iVar4;
    int64_t *arg1_00;
    int64_t *piVar5;
    int iVar6;
    uchar uStack_28;
    ulong uStack_27;
    ulong uStack_1f;
    
    if (*0x43822 < 0x20) {
        uVar1 = *(arg2 + 0xd4);
        iVar3 = 0x200;
        if ((uVar1 >> 0xe == 1) && ((uVar1 & 0x1000) != 0)) {
            iVar6 = *(arg2 + 0xea) * 2;
        }
        else {
            iVar6 = 0x200;
        }
        if (iVar6 != 0x200) {
            if ((uVar1 >> 0xe == 1) && ((uVar1 & 0x1000) != 0)) {
                iVar3 = *(arg2 + 0xea) * 2;
            }
            if (iVar3 != 0x1000) {
                return;
            }
        }
        uStack_28 = 0;
        uStack_27 = 0;
        uStack_1f = 0;
        fcn.00021390(&uStack_28,arg2 + 0x14,0x11,0x14);
        cVar2 = fcn.00021258(&uStack_28);
        if (((cVar2 == '\0') && (iVar4 = fcn.00019104(arg1,1), iVar4 != 0)) &&
           (arg1_00 = fcn.0001b9e4(0x18), arg1_00 != NULL)) {
            fcn.0001ba7c(arg1_00,0,0x18);
            *(arg1_00 + 10) = 1;
            *(arg1_00 + 1) = arg3;
            *(arg1_00 + 9) = *0x43822;
            *arg1_00 = iVar4;
            *0x43822 = *0x43822 + 1;
            fcn.00020d64(arg1_00,arg2,*(arg1_00 + 9));
            piVar5 = *0x43838;
            if (*0x43838 == NULL) {
                *0x43838 = arg1_00;
            }
            else {
                while (piVar5[2] != NULL) {
                    piVar5 = piVar5[2];
                }
                piVar5[2] = arg1_00;
            }
        }
    }
    return;
}


/* fcn.00019b80 @ 0x19b80 */

uchar fcn.00019b80(int64_t arg1,int64_t arg2)

{
    uchar auStackX_10 [24];
    
    auStackX_10[0] = 0;
    (**(arg1 + 0x30))(arg1,0,arg2 & 0xffff,1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.00019ea0 @ 0x19ea0 */

int64_t fcn.00019ea0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg2_00;
    int64_t iVar1;
    
    arg2_00 = fcn.00019f2c(arg1,arg3);
    if (arg2_00 != 0) {
        iVar1 = fcn.0001a044(arg3);
        if (-1 < iVar1) {
            return arg2_00;
        }
        fcn.00019fbc(arg1,arg3,arg2_00);
    }
    return 0;
}


/* fcn.000140dc @ 0x140dc */

void fcn.000140dc(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar in_stack_00000028;
    
    *arg1 = *arg1 + 1;
    *(arg1 + 5) = in_stack_00000028;
    *(arg1 + 0x18) = arg2;
    *(arg1 + 0xc) = arg3;
    return;
}


/* fcn.0001f018 @ 0x1f018 */

ulong fcn.0001f018(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    unkbyte7 in_R8;
    uchar var_30h;
    int64_t var_2fh;
    int32_t var_27h;
    int16_t var_23h;
    int8_t var_21h;
    int8_t var_20h;
    int64_t var_1fh;
    int64_t var_17h;
    int8_t var_fh;
    
    uVar2 = 2;
    var_2fh = 0;
    var_27h = 0;
    var_23h = 0;
    var_21h = 0;
    var_20h = 0;
    var_1fh = 0;
    var_17h = 0;
    var_fh = 0;
    var_30h = 0;
    iVar1 = fcn.0001f1c8(arg1,&var_30h,CONCAT71(in_R8,arg2),1);
    if (iVar1 != 0) {
        iVar1 = fcn.0001f17c(arg1,&var_20h,CONCAT71(in_R8,arg2));
        if (iVar1 == 0) {
            if ((((var_1fh & 0xf00U) != 0) || (var_17h._3_1_ != '\0')) || (var_17h._4_1_ != '\0')) {
                if (((var_1fh._1_1_ & 0xf) == 2) && (var_17h._3_1_ == ':')) {
                    uVar2 = 0;
                }
                else if (((var_1fh._1_1_ & 0xf) != 6) || (uVar2 = 3, var_17h._3_1_ != '(')) {
                    uVar2 = 1;
                }
            }
        }
    }
    return uVar2;
}


/* fcn.0001ee78 @ 0x1ee78 */

uint64_t fcn.0001ee78(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    char cVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    ulong uStackX_20;
    
    uVar1 = arg2;
    uStackX_20 = fcn.0001bc9c(30000000,arg2);
    do {
        cVar2 = fcn.0001bcfc(&uStackX_20,arg2);
        if (cVar2 != '\0') {
            return 4;
        }
        uVar3 = fcn.0001f018(arg1,CONCAT71(arg2 >> 8,uVar1));
        if (uVar3 == 0) {
            return uVar3;
        }
        uVar4 = uVar3 - 2;
        arg2 = uVar4;
        if (uVar4 == 0) {
            return uVar3;
        }
    } while ((uVar4 != 1) || (arg3 != '\0'));
    return uVar3 & 0xffffffff;
}


/* fcn.0001f12c @ 0x1f12c */

void fcn.0001f12c(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int64_t iVar1;
    uint8_t in_stack_00000028;
    
    iVar1 = (arg4 & 0xff) + 2;
    if (arg4 < 8) {
        *(arg1 + 8 + iVar1 * 0x18) = arg3;
        *(arg1 + iVar1 * 0x18) = arg2 + 1;
        *(arg1 + 0x10 + iVar1 * 0x18) =
             (in_stack_00000028 << 4 ^ *(arg1 + 0x10 + iVar1 * 0x18)) & 0x10 ^ *(arg1 + 0x10 + iVar1 * 0x18) | 0xc;
        *(arg1 + 0xc + iVar1 * 0x18) = 0x20000 / (arg3 & 0xffffffffU);
    }
    return;
}


/* fcn.0001f6a0 @ 0x1f6a0 */

ulong fcn.0001f6a0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    char cVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong uStackX_8;
    
    uVar3 = fcn.00019bb0(*arg1,*(arg1 + 8) + 0x14);
    uVar1 = arg2 != '\0';
    iVar4 = *(arg1 + 8) + 0x14;
    fcn.00019c78(*arg1,iVar4,uVar3 & 0xfffffffe | uVar1);
    uStackX_8 = fcn.0001bc9c(arg3 & 0xffffffff,iVar4);
    do {
        iVar4 = *(arg1 + 8) + 0x1c;
        uVar3 = fcn.00019bb0(*arg1,iVar4);
        if ((uVar3 & 1) == uVar1) {
            return 1;
        }
        cVar2 = fcn.0001bcfc(&uStackX_8,iVar4);
    } while (cVar2 == '\0');
    return 0;
}


/* fcn.000209fc @ 0x209fc */

//WARNING: Variable defined which should be unmapped: var_1h

ulong fcn.000209fc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    int32_t var_1h;
    
    *arg2 = arg3;
    *(arg2 + 2) = 0x20002;
    uVar2 = arg3 & 0xffff;
    *(arg2 + 0x40) = uVar2 * *(arg1 + 0x14) * 2 + 0x1000;
    iVar1 = *(arg1 + 0x14);
    *(arg2 + 0x3c) = 0x1020;
    *(arg2 + 0x38) = 0x1080;
    *(arg2 + 0x44) = (uVar2 * 2 + 1) * iVar1 + 0x1000;
    iVar3 = fcn.00019ea0(*arg1,2,0x1020,arg2 + 0x20);
    iVar4 = fcn.00019ea0(*arg1,2,*(arg2 + 0x38),arg2 + 0x18);
    if ((iVar3 == 0) || (iVar4 == 0)) {
        fcn.0001f744(*arg1,arg2);
        uVar5 = 0;
    }
    else {
        *(arg2 + 0x18) = iVar4;
        *(arg2 + 0x20) = iVar3;
        *(arg2 + 0x10) = iVar3 + 0x1000U & 0xfffffffffffff000;
        *(arg2 + 8) = iVar4 + 0x1000U & 0xfffffffffffff000;
        uVar5 = 1;
    }
    return uVar5;
}


/* fcn.000200f4 @ 0x200f4 */

void fcn.000200f4(int64_t arg1,int64_t arg2)

{
    uint32_t auStack_48 [10];
    uint32_t uStack_20;
    
    fcn.0001ba7c(auStack_48,0,0x40);
    uStack_20 = uStack_20 | 1;
    auStack_48[0] = auStack_48[0] & 0xffffff06 | 6;
    fcn.0001fa44(arg1,auStack_48,arg2,0x1000);
    return;
}


/* fcn.00020af8 @ 0x20af8 */

ulong fcn.00020af8(int64_t arg1)

{
    ulong uVar1;
    uint8_t auStack_98 [16];
    uint32_t auStack_88 [10];
    uint32_t uStack_60;
    uint32_t uStack_5c;
    uint32_t auStack_48 [10];
    uint32_t uStack_20;
    
    fcn.0001ba7c(auStack_48,0,0x40);
    auStack_48[0] = auStack_48[0] & 0xffffff0a | 10;
    uStack_20 = uStack_20 & 0xffffff80 | 0x80;
    fcn.0001ba7c(auStack_98,0,0x10);
    uVar1 = fcn.0001fa44(arg1,auStack_48,0,0);
    if (uVar1 == 1) {
        if (auStack_98[0] != 0xff) {
            fcn.0001ba7c(auStack_88,0,0x40);
            auStack_88[0] = auStack_88[0] & 0xffffff09 | 9;
            uStack_60 = uStack_60 & 0xffffff80 | 0x80;
            uStack_5c = uStack_5c ^ (auStack_98[0] + 1 ^ uStack_5c) & 0xff;
            uVar1 = fcn.0001fa44(arg1,auStack_88,0,0);
            if (uVar1 != 1) {
                return uVar1;
            }
        }
        uVar1 = 1;
    }
    return uVar1;
}


/* fcn.0001f570 @ 0x1f570 */

ulong fcn.0001f570(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    int64_t var_40h;
    int32_t var_18h;
    int32_t var_14h;
    
    uVar2 = fcn.000209fc(arg1,arg1 + 0x70,1);
    if (uVar2 == 1) {
        fcn.0001ba7c(&var_40h,0,0x40);
        var_14h = var_14h | 1;
        var_40h._0_4_ = var_40h & 0xffffff05 | 5;
        var_18h = 0x10001;
        iVar1 = fcn.0001fa44(arg1,&var_40h,*(arg1 + 0x80),0x20);
        if (iVar1 == 1) {
            fcn.0001ba7c(&var_40h,0,0x40);
            var_40h._0_4_ = var_40h & 0xffffff01 | 1;
            var_18h = 0x10001;
            var_14h = var_14h & 0xfff8U | 0x10001;
            iVar1 = fcn.0001fa44(arg1,&var_40h,*(arg1 + 0x78),0x80);
            if (iVar1 == 1) {
                return 1;
            }
        }
        fcn.0001f744(*arg1,arg1 + 0x70);
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001f744 @ 0x1f744 */

void fcn.0001f744(int64_t arg1,uint32_t arg2)

{
    uint in_register_00000014;
    int64_t iVar1;
    
    iVar1 = CONCAT44(in_register_00000014,arg2);
    if (*(iVar1 + 0x20) != 0) {
        fcn.0001a09c(arg1,*(iVar1 + 0x30));
        fcn.00019fbc(arg1,*(iVar1 + 0x3c),*(iVar1 + 0x20));
    }
    if (*(iVar1 + 0x18) != 0) {
        fcn.0001a09c(arg1,*(iVar1 + 0x28));
        fcn.00019fbc(arg1,*(iVar1 + 0x38),*(iVar1 + 0x18));
    }
    *(iVar1 + 0x20) = 0;
    *(iVar1 + 0x18) = 0;
    return;
}


/* fcn.0001b98c @ 0x1b98c */

uint64_t fcn.0001b98c(uint32_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint in_register_0000000c;
    char *pcVar3;
    
    pcVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = 0;
    if (arg2 != 0) {
        do {
            if (*pcVar3 != '\0') {
                return CONCAT71(uVar2 >> 8,1);
            }
            uVar1 = uVar2 + 1;
            uVar2 = uVar1;
            pcVar3 = pcVar3 + 1;
        } while (uVar1 < arg2);
    }
    return uVar2 & 0xffffffffffffff00;
}


/* fcn.0001fc50 @ 0x1fc50 */

ulong fcn.0001fc50(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t in_R9;
    int16_t *in_stack_00000028;
    ulong *in_stack_00000030;
    
    if ((*in_stack_00000028 != 0) || ((*arg2 - 1 & 0xfffffffb) != 0)) {
        *in_stack_00000030 = 0;
        uVar1 = *arg2 & 3;
        if ((uVar1 == 0) || (((uVar1 != 1 && (uVar1 != 2)) || (iVar2 = fcn.0001a044(in_R9), iVar2 < 0)))) {
            return 0;
        }
        *arg3 = in_stack_00000028;
    }
    return 1;
}


/* fcn.000208e4 @ 0x208e4 */

void fcn.000208e4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t in_stack_00000028;
    
    uVar2 = *(arg1 + 0x10);
    uVar7 = uVar2;
    *arg2 = arg4;
    uVar3 = uVar2 - 1;
    uVar5 = uVar3 & arg4;
    uVar9 = uVar5 + in_stack_00000028;
    if (uVar2 < uVar9) {
        if (uVar2 * 2 < uVar9) {
            *arg3 = *(arg1 + 0x100);
            uVar9 = 1;
            **(arg1 + 0x100) = *arg2 + uVar7 & ~uVar3;
            uVar8 = in_stack_00000028 - ((uVar2 - uVar5) + uVar7);
            if (uVar8 != 0) {
                uVar6 = 0;
                do {
                    uVar4 = uVar9;
                    if (uVar9 % (uVar2 >> 3) == 0) {
                        uVar4 = uVar9 + 1;
                        *(*(arg1 + 0x100) + uVar9 * 8) = *(*(arg1 + 0x100) + uVar6 * 8);
                        *(*(arg1 + 0x100) + uVar6 * 8) = *(arg1 + 0x100) + uVar9 * 8;
                        uVar6 = uVar6 + 1;
                    }
                    uVar9 = uVar4 + 1;
                    iVar1 = uVar6 * 8;
                    uVar6 = uVar6 + 1;
                    *(*(arg1 + 0x100) + uVar4 * 8) = *(*(arg1 + 0x100) + iVar1) + uVar7;
                } while ((uVar7 <= uVar8) && (uVar8 = uVar8 - uVar7, uVar8 != 0));
            }
        }
        else {
            *arg3 = *arg2 + (arg4 & 0xffffffff00000000U) + uVar2 & ~uVar3;
        }
    }
    return;
}


/* fcn.00020858 @ 0x20858 */

ulong fcn.00020858(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    
    if (*0x438f8 < 5) {
        *0x438f8 = *0x438f8 + 1;
        iVar1 = arg1;
        fcn.0001ba7c(iVar1 + 0x18,0,0x58);
        fcn.0001ba7c(iVar1 + 0x70,0,0x58);
        fcn.0001f744(*arg1,iVar1 + 0x70);
        fcn.0001f744(*arg1,iVar1 + 0x18);
        iVar1 = fcn.0001f290(arg1);
        if (iVar1 != 1) {
            return 0;
        }
        uVar2 = 1;
    }
    else {
        uVar2 = 0;
    }
    *0x438f8 = 0;
    return uVar2;
}


/* fcn.00017dbc @ 0x17dbc */

void fcn.00017dbc(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    
    piVar1 = fcn.0001b9e4(0x18);
    if (piVar1 != NULL) {
        fcn.0001ba7c(piVar1,0,0x18);
        *(piVar1 + 0xc) = 0;
        *(piVar1 + 1) = 0;
        *(piVar1 + 10) = 1;
        *0x43822 = *0x43822 + '\x01';
        iVar2 = fcn.00019104(arg1,2);
        if (iVar2 != 0) {
            *piVar1 = iVar2;
        }
    }
    return;
}


/* fcn.0002016c @ 0x2016c */

void fcn.0002016c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uStack_48;
    uint uStack_44;
    uint32_t uStack_20;
    
    fcn.0001ba7c(&uStack_48,0,0x40);
    uStack_20 = uStack_20 & 0xfffffffe;
    uStack_48 = uStack_48 & 0xffffff06 | 6;
    uStack_44 = arg2;
    fcn.0001fa44(arg1,&uStack_48,arg3,0x1000);
    return;
}


/* fcn.0001f98c @ 0x1f98c */

//WARNING: Variable defined which should be unmapped: var_28h

ulong fcn.0001f98c(int64_t arg1,int64_t arg2)

{
    int iVar1;
    char cVar2;
    uint32_t arg3;
    uchar uStackX_10;
    uint uStackX_11;
    ushort uStackX_15;
    uchar uStackX_17;
    ulong uStackX_18;
    int8_t var_28h;
    int32_t var_29h;
    int16_t var_2dh;
    int8_t var_2fh;
    int64_t var_30h;
    
    uStackX_18 = 0;
    iVar1 = arg2;
    cVar2 = fcn.0001b98c(iVar1 + 0x78,8);
    if (cVar2 == '\0') {
        cVar2 = fcn.0001b98c(iVar1 + 0x68,0x10);
        if (cVar2 == '\0') {
            uStackX_10 = 0;
            uStackX_11 = 0;
            uStackX_15 = 0;
            uStackX_17 = 0;
            fcn.0001ba1c(&uStackX_10,2,arg1,2);
            fcn.0001ba1c(&uStackX_11 + 1,6,arg1 + 0x12,6);
            arg3 = &uStackX_10;
        }
        else {
            arg3 = iVar1 + 0x70;
        }
    }
    else {
        arg3 = iVar1 + 0x78;
    }
    fcn.0001ba1c(&uStackX_18,8,arg3,8);
    return uStackX_18;
}


/* fcn.0001f7ac @ 0x1f7ac */

void fcn.0001f7ac(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t *puVar1;
    char cVar2;
    
    fcn.0001ba7c(arg1,0,0x29);
    cVar2 = fcn.0001b98c(arg3 + 0x68,0x10);
    if (cVar2 == '\0') {
        puVar1 = arg3 + 0x78;
        if ((((*puVar1 == *(arg2 + 0x4b)) && (*(arg3 + 0x79) == *(arg2 + 0x4a))) && (*(arg3 + 0x7a) == *(arg2 + 0x49)))
           && (cVar2 = fcn.0001b98c(puVar1,8), cVar2 != '\0')) {
            fcn.0001c0b4(arg1,0x29,0x36ee0,*puVar1);
            return;
        }
        fcn.0001c0b4(arg1,0x29,0x36f08,arg2 + 4);
    }
    else {
        fcn.0001c0b4(arg1,0x29,0x36e90,*(arg3 + 0x68));
    }
    return;
}


/* fcn.00017e1c @ 0x17e1c */

void fcn.00017e1c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    char cVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    int64_t *arg1_00;
    int64_t *piVar7;
    uint64_t arg2_00;
    int in_stack_00000030;
    char in_stack_00000040;
    uint8_t in_stack_00000048;
    char in_stack_00000050;
    int64_t in_stack_00000058;
    ulong uStack_b7;
    ulong uStack_af;
    ushort uStack_a7;
    uchar uStack_a5;
    uchar auStack_98 [8];
    uint32_t uStack_90;
    uint32_t uStack_8c;
    uchar auStack_84 [41];
    uchar auStack_5b [17];
    uchar auStack_4a [50];
    
    if (*0x43822 < 0x20) {
        if ((in_stack_00000030 == 0x200) || (in_stack_00000030 == 0x1000)) {
            fcn.0001ba7c(auStack_98,0,0x80);
            uStack_8c = (in_stack_00000048 << 8 ^ uStack_8c) & 0x100 ^ uStack_8c | 0x10;
            uVar1 = fcn.00020204(arg1);
            uStack_8c = uStack_8c ^ (uVar1 << 0xb ^ uStack_8c) & 0x800;
            uVar1 = fcn.000201f4(arg1);
            uStack_8c = uStack_8c ^ (uVar1 << 0xc ^ uStack_8c) & 0x1000;
            uVar1 = fcn.0002020c(arg1);
            uVar4 = (uVar1 << 0xe ^ uStack_8c) & 0x4000 ^ uStack_8c;
            uStack_8c = uVar4 | 0x80;
            if (in_stack_00000030 == 0x1000) {
                uStack_8c = uVar4 | 0x8080;
            }
            if (in_stack_00000050 != '\0') {
                uStack_8c = uStack_8c | 0x400;
                uStack_b7 = 0;
                uStack_af = 0;
                uStack_a7 = 0;
                uStack_a5 = 0;
                arg2_00 = &uStack_b7 + 3U & 0xfffffffc;
                iVar5 = fcn.00020060(arg1,arg2_00);
                if (iVar5 == 1) {
                    if ((*(arg2_00 + 9) & 4) == 0) {
                        uStack_8c = uStack_8c & 0xfffffffb;
                    }
                    else {
                        uStack_8c = uStack_8c | 4;
                    }
                }
            }
            fcn.0001bbd0(auStack_84,arg3,0x28);
            uVar3 = fcn.0001bb80(arg4);
            fcn.00021390(auStack_5b,arg4,0x11,uVar3);
            cVar2 = fcn.00021258(auStack_5b);
            if (cVar2 == '\0') {
                fcn.0001bbd0(auStack_4a,in_stack_00000058,0x28);
                iVar6 = fcn.00019104(arg1,2);
                if (iVar6 != 0) {
                    arg1_00 = fcn.0001b9e4(0x18);
                    if (arg1_00 != NULL) {
                        fcn.0001ba7c(arg1_00,0,0x18);
                        *(arg1_00 + 10) = 1;
                        *(arg1_00 + 1) = arg2 + -1;
                        *(arg1_00 + 9) = *0x43822;
                        *(arg1_00 + 0xc) = arg2;
                        *arg1_00 = iVar6;
                        *0x43822 = *0x43822 + 1;
                        if (in_stack_00000040 != '\0') {
                            uStack_8c = uStack_8c | 0x20;
                            cVar2 = fcn.0001c9c4(arg1_00,0,10000000);
                            if (cVar2 != '\0') {
                                uStack_8c = uStack_8c | 0x40;
                            }
                            cVar2 = fcn.0001c9c4(arg1_00,1,10000000);
                            if (cVar2 != '\0') {
                                cVar2 = fcn.00035828();
                                if (cVar2 != '\0') {
                                    uStack_8c = uStack_8c | 0x2000;
                                }
                            }
                        }
                        uStack_90 = *(arg1_00 + 9);
                        if ((*0x42ee0 != '\0') && (*0x42ef4 < 3)) {
                            *(*0x42ef4 * 0x208 + 0x42f00) = 0xff;
                            fcn.0001ba7c(*0x42ef4 * 0x208 + 0x42f08,0,0x200);
                            *0x42ef4 = *0x42ef4 + 1;
                        }
                        fcn.00020d50(arg1_00,auStack_98);
                        piVar7 = *0x43838;
                        if (*0x43838 == NULL) {
                            *0x43838 = arg1_00;
                        }
                        else {
                            while (piVar7[2] != NULL) {
                                piVar7 = piVar7[2];
                            }
                            piVar7[2] = arg1_00;
                        }
                    }
                }
            }
        }
    }
    return;
}


/* fcn.0001f290 @ 0x1f290 */

bool fcn.0001f290(int64_t arg1)

{
    int16_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t arg2;
    uint64_t uVar8;
    uchar auStack_1028 [4];
    uchar auStack_1024 [4108];
    
    uVar2 = fcn.00019bb0(*arg1,*(arg1 + 8));
    uVar3 = fcn.00019bb0(*arg1,*(arg1 + 8) + 4);
    uVar2 = (uVar2 >> 0x18) * 500000;
    if (uVar2 == 0) {
        uVar2 = 5000000;
    }
    iVar4 = fcn.0001f6a0(arg1,0,uVar2);
    if (iVar4 != 1) {
        return false;
    }
    *(arg1 + 0x14) = 1 << (uVar3 & 0xf) + 2;
    iVar4 = fcn.000209fc(arg1,arg1 + 0x18,0);
    if (iVar4 != 1) {
        return false;
    }
    fcn.00019c78(*arg1,*(arg1 + 8) + 0x24,0x10001);
    fcn.00019c78(*arg1,*(arg1 + 8) + 0x28,*(arg1 + 0x20));
    fcn.00019c78(*arg1,*(arg1 + 8) + 0x2c,*(arg1 + 0x20) >> 0x20);
    fcn.00019c78(*arg1,*(arg1 + 8) + 0x30,*(arg1 + 0x28));
    fcn.00019c78(*arg1,*(arg1 + 8) + 0x34,*(arg1 + 0x28) >> 0x20);
    uVar5 = fcn.00019bb0(*arg1,*(arg1 + 8) + 0x14);
    iVar6 = *(arg1 + 8) + 0x14;
    uVar5 = uVar5 & 0xff46000f | (uVar3 & 0xf0000 | 0x8c0001ff) >> 9;
    fcn.00019c78(*arg1,iVar6,uVar5);
    *(arg1 + 0x10) = 1 << (uVar5 >> 7) + 0xc;
    iVar4 = fcn.0001f6a0(arg1,CONCAT71(iVar6 >> 8,1),uVar2);
    if (iVar4 != 1) {
        return false;
    }
    fcn.0001ba7c(auStack_1028,0,0x1004);
    arg2 = auStack_1024 & 0xfffffffc;
    iVar4 = fcn.000200f4(arg1,arg2);
    if (iVar4 != 1) {
        return false;
    }
    iVar1 = fcn.00019ae0(*arg1,2);
    if ((iVar1 == 0x2522) && (*(arg2 + 0x204) == 0)) {
        *(arg1 + 0x121) = 1;
        return true;
    }
    if (*(arg2 + 0x4d) != '\0') {
        uVar2 = uVar3 >> 0x10 & 0xf;
        uVar3 = 1 << uVar2 + 0xc;
        if (0x1000000 < uVar3) {
            return false;
        }
        if (*(arg2 + 0x4d) + 0xc + uVar2 < 0x41) {
            uVar7 = (1LL << (*(arg2 + 0x4d) & 0x3f)) * uVar3;
            uVar2 = 0x1000000;
            if (uVar7 < 0x1000000) {
                uVar2 = uVar7;
            }
            *(arg1 + 0x110) = uVar2;
            goto code_r0x0001f4b2;
        }
    }
    *(arg1 + 0x110) = 0x1000000;
code_r0x0001f4b2:
    uVar8 = *(arg1 + 0x10);
    uVar7 = (uVar8 - 8 >> 3) * uVar8;
    iVar6 = ((*(arg1 + 0x110) + -1 + uVar7) / uVar7) * uVar8;
    *(arg1 + 0x108) = iVar6;
    iVar6 = iVar6 + 0x1000;
    *(arg1 + 0xf8) = iVar6;
    iVar6 = fcn.00019ea0(*arg1,2,iVar6,arg1 + 0xe8);
    if (iVar6 != 0) {
        *(arg1 + 0xe8) = iVar6;
        *(arg1 + 0x100) = iVar6 + 0x1000U & 0xfffff000;
        fcn.00020af8(arg1);
        if (*(arg2 + 0x204) != 0) {
            iVar4 = fcn.0001f570(arg1);
            return iVar4 == 1;
        }
    }
    return false;
}


/* fcn.00020c10 @ 0x20c10 */

uint64_t fcn.00020c10(int64_t arg1,uint32_t arg2,uint32_t arg3,int64_t arg4)

{
    uint16_t *in_RAX;
    int64_t iVar1;
    int iVar2;
    int iVar3;
    
    iVar3 = 0;
    iVar2 = arg4;
    if (iVar2 == 0) {
        iVar2 = 3;
        iVar1 = 0x42960;
    }
    else if (iVar2 == 1) {
        iVar2 = 6;
        iVar1 = 0x42978;
    }
    else if (iVar2 == 2) {
        iVar2 = 2;
        iVar1 = 0x429a8;
    }
    else {
        if (iVar2 != 3) goto code_r0x00020c98;
        iVar1 = 0x429b8;
        iVar2 = 1;
    }
    in_RAX = iVar1 + 4;
    do {
        if (((in_RAX[-2] == arg1) && (in_RAX[-1] == arg2)) &&
           ((*in_RAX == 0xffff || ((*in_RAX <= arg3 && (arg3 <= in_RAX[1])))))) {
            return CONCAT71(in_RAX >> 8,1);
        }
        in_RAX = in_RAX + 4;
        iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
code_r0x00020c98:
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.0001ff58 @ 0x1ff58 */

ulong fcn.0001ff58(uint32_t arg1,int64_t arg2)

{
    ulong uVar1;
    uint in_register_0000000c;
    uint32_t uVar2;
    uint32_t uStack_48;
    uint32_t uStack_44;
    
    uVar2 = arg2;
    if ((uVar2 == 0) || (*(CONCAT44(in_register_0000000c,arg1) + 200) < uVar2)) {
        uVar1 = 0;
    }
    else {
        fcn.0001ba7c(&uStack_48,0,0x40);
        uStack_48 = uStack_48 & 0xffffff00;
        uStack_44 = uVar2;
        uVar1 = fcn.0001fa44(CONCAT44(in_register_0000000c,arg1),&uStack_48,0,0);
    }
    return uVar1;
}


/* fcn.000272b0 @ 0x272b0 */

int64_t fcn.000272b0(int64_t arg1)

{
    fcn.00030b80(arg1 + 0xa8);
    fcn.00030aa8(arg1);
    *(arg1 + 0xc0) = 0;
    *arg1 = 0x37b00;
    *(arg1 + 0xa0) = 1;
    return arg1;
}


/* fcn.00030b80 @ 0x30b80 */

int64_t fcn.00030b80(int64_t arg1)

{
    *(arg1 + 2) = 0;
    *(arg1 + 6) = 0;
    *(arg1 + 8) = 0;
    return arg1;
}


/* fcn.00030aa8 @ 0x30aa8 */

int64_t fcn.00030aa8(int64_t arg1)

{
    *(arg1 + 0x10) = 0;
    *(arg1 + 8) = 0;
    *arg1 = 0x37d10;
    *(arg1 + 0x18) = 0;
    *(arg1 + 0x1c) = 0;
    *(arg1 + 0x2d) = 0;
    *(arg1 + 0x80) = 0;
    *(arg1 + 0x88) = 0;
    *(arg1 + 0x90) = 0;
    return arg1;
}


/* fcn.00027a98 @ 0x27a98 */

int64_t fcn.00027a98(int64_t arg1)

{
    *(arg1 + 8) = 0;
    *arg1 = 0;
    *(arg1 + 0x58) = 0;
    *(arg1 + 0x50) = 0;
    *(arg1 + 0xf0) = 0;
    *(arg1 + 0xe8) = 0;
    *(arg1 + 0x10) = 0;
    *(arg1 + 0x70) = arg1;
    *(arg1 + 0x108) = arg1;
    return arg1;
}


/* fcn.00028430 @ 0x28430 */

int64_t fcn.00028430(int64_t arg1)

{
    *(arg1 + 8) = 0;
    *arg1 = 0;
    *(arg1 + 0x58) = 0;
    *(arg1 + 0x50) = 0;
    *(arg1 + 0x70) = arg1;
    return arg1;
}


/* fcn.00027808 @ 0x27808 */

int64_t fcn.00027808(int64_t arg1)

{
    *(arg1 + 0x28) = 0;
    *(arg1 + 0x20) = 0;
    *(arg1 + 0x48) = 0;
    return arg1;
}


/* fcn.00027170 @ 0x27170 */

uint64_t fcn.00027170(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    uint64_t uVar3;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*0x43b88 == 1) {
        iVar1 = *(*0x43c08 + 0x28);
        uVar3 = *(iVar1 + 8);
        *(iVar1 + 0x10) = *(iVar1 + 0x10) - iVar2;
        *(iVar1 + 8) = iVar2 + uVar3;
    }
    else {
        uVar3 = 0;
        if (iVar2 + *0x43b90 < *0x43b70) {
            *0x43b78 = *0x43b78 + iVar2;
            uVar3 = *0x43b90;
            *0x43b90 = iVar2 + *0x43b90;
        }
    }
    return uVar3;
}


/* fcn.000270d4 @ 0x270d4 */

int64_t fcn.000270d4(int64_t arg1)

{
    ulong *puVar1;
    int64_t iVar2;
    
    *0x43b78 = 0;
    *0x43b80 = 0;
    *0x43b88 = 0;
    puVar1 = fcn.00027170(8);
    if (puVar1 != NULL) {
        *puVar1 = 0;
    }
    *arg1 = puVar1;
    iVar2 = 4;
    do {
        puVar1 = fcn.00027170(0x368);
        if (puVar1 == NULL) {
            puVar1 = NULL;
        }
        else {
            fcn.0001ba7c(puVar1,0,0x368);
            puVar1[1] = 0;
            *puVar1 = 0;
        }
        fcn.0002b5c8(*arg1,puVar1);
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(arg1 + 0x10) = 0;
    return arg1;
}


/* fcn.00017644 @ 0x17644 */

uchar fcn.00017644(int64_t arg1)

{
    int iVar1;
    uint in_EDX;
    uchar uVar2;
    char acStackX_8 [32];
    
    uVar2 = 1;
    acStackX_8[0] = '\0';
    if (**arg1 == 1) {
        iVar1 = fcn.0001e87c(*(*arg1 + 4),CONCAT31(in_EDX >> 8,*(arg1 + 8)),acStackX_8);
        if ((iVar1 != 0) || (acStackX_8[0] == '\0')) {
            uVar2 = 0;
        }
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00017698 @ 0x17698 */

//WARNING: Removing unreachable block (ram,0x0001ca36)
//WARNING: Removing unreachable block (ram,0x0001ca3b)

uint64_t fcn.00017698(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t arg4;
    uchar auStack_208 [512];
    
    uVar3 = 0x200;
    fcn.0001ba7c(auStack_208,0,0x200);
    arg4 = 1;
    iVar2 = CONCAT71(uVar3 >> 8,1);
    uVar1 = fcn.000185c8(arg1,1,iVar2,1);
    if ((uVar1 == 0) && (iVar2 = fcn.0001c698(auStack_208,2,iVar2,arg4), uVar1 = 0, iVar2 != 0)) {
        uVar1 = CONCAT71(iVar2 >> 8,*(iVar2 + 4) >> 2) & 0xffffffffffffff01;
    }
    else {
        uVar1 = uVar1 & 0xffffffffffffff00;
    }
    return uVar1;
}


/* fcn.000176a4 @ 0x176a4 */

//WARNING: Removing unreachable block (ram,0x0001ca43)

uint64_t fcn.000176a4(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t arg4;
    uchar auStack_208 [512];
    
    uVar3 = 0x200;
    fcn.0001ba7c(auStack_208,0,0x200);
    arg4 = 1;
    iVar2 = CONCAT71(uVar3 >> 8,1);
    uVar1 = fcn.000185c8(arg1,1,iVar2,1);
    if ((uVar1 == 0) && (iVar2 = fcn.0001c698(auStack_208,2,iVar2,arg4), uVar1 = 0, iVar2 != 0)) {
        uVar1 = CONCAT71(iVar2 >> 8,*(iVar2 + 4) >> 4) & 0xffffffffffffff01;
    }
    else {
        uVar1 = uVar1 & 0xffffffffffffff00;
    }
    return uVar1;
}


/* fcn.000176cc @ 0x176cc */

int64_t fcn.000176cc(void)

{
    unkuint7 Var1;
    
    Var1 = *0x42df0 >> 8;
    if ((((*0x42df0 != -1) && (*0x42df0 != 0x28c0)) && (*0x42df0 != -0x75cb)) &&
       ((*0x42df0 != -0x65f5 && (*0x42df0 != 0x4c3d)))) {
        return CONCAT71(Var1,1);
    }
    return Var1 << 8;
}


/* fcn.00017684 @ 0x17684 */

uint64_t fcn.00017684(int64_t arg1)

{
    uint64_t in_RAX;
    
    if (arg1 == 0) {
        return in_RAX & 0xffffffffffffff00;
    }
    return CONCAT71(*arg1 >> 8,**arg1 == 2);
}


/* fcn.000176b4 @ 0x176b4 */

int64_t fcn.000176b4(int64_t arg1)

{
    int *piVar1;
    unkuint7 Var2;
    
    piVar1 = *arg1;
    Var2 = piVar1 >> 8;
    if ((*piVar1 == 2) && (*(piVar1 + 4) != 0)) {
        return CONCAT71(Var2,*(*(piVar1 + 4) + 0x122));
    }
    return Var2 << 8;
}


/* fcn.00011b38 @ 0x11b38 */

uint32_t fcn.00011b38(int64_t arg1)

{
    return (arg1 & 0xffffU) >> 8 | (arg1 & 0xffffU) << 8;
}


/* fcn.00028bf8 @ 0x28bf8 */

void fcn.00028bf8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    char cVar3;
    uchar uVar4;
    uint32_t uVar5;
    int64_t arg1_00;
    uint32_t uVar6;
    uint64_t arg3_00;
    
    uVar5 = arg1 + 0x48;
    cVar3 = fcn.0002cf20(uVar5);
    uVar4 = 0;
    if (cVar3 != '\0') {
        return;
    }
    if (0x1f < *(arg1 + 0x1b48)) {
        return;
    }
    uVar1 = *(arg3 + 0xc);
    uVar6 = (uVar1 & 2) << 9;
    uVar2 = uVar6 | 0x1008038;
    if ((uVar1 & 0x44) == 0) {
        uVar2 = uVar6 | 0x8038;
    }
    uVar6 = uVar2 | 0x2000040;
    if ((uVar1 & 0x8000) == 0) {
        uVar6 = uVar2;
    }
    arg3_00 = uVar6;
    arg1_00 = fcn.0002ce30(uVar5,arg3 + 0x3d);
    if (arg1_00 == 0) {
        arg1_00 = fcn.0002cce4(arg1 + 0x48,arg3 + 0x3d,arg3_00,*arg3);
    }
    fcn.000273a8(arg1_00,arg2,arg3,arg3_00);
    uVar5 = *(arg1_00 + 0xc0);
    if ((uVar5 & 0x84) == 0) {
        if (-1 < uVar5) goto code_r0x00028cda;
        uVar5 = uVar5 & 0xffffff7f;
    }
    else {
        uVar5 = uVar5 & 0xffffff7b;
    }
    *(arg1_00 + 0xc0) = uVar5;
    fcn.000277c4(arg1_00);
code_r0x00028cda:
    if ((*(arg1_00 + 0xc3) & 1) == 0) {
        uVar4 = fcn.00027568(arg1_00);
    }
    fcn.000178c4(arg2,*(arg1_00 + 0x94),arg3,CONCAT71(arg3_00 >> 8,uVar4));
    fcn.0002dffc(*(arg1 + 0x38),arg1_00);
    return;
}


/* fcn.00020ca0 @ 0x20ca0 */

int64_t fcn.00020ca0(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar2 = arg1 + 0x48;
    iVar3 = 0x20;
    uVar1 = 0;
    do {
        fcn.000272b0(iVar2);
        iVar2 = iVar2 + 0xd8;
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(arg1 + 0x1b48) = 0;
    fcn.00027a98(arg1 + 7000);
    fcn.00028430(arg1 + 0x1d28);
    fcn.00027808(arg1 + 0x1e30);
    fcn.00027808(arg1 + 0x1e80);
    iVar2 = fcn.00027170(0x18);
    if (iVar2 != 0) {
        uVar1 = fcn.000270d4(iVar2);
    }
    *(arg1 + 0x28) = uVar1;
    return arg1;
}


/* fcn.0002906c @ 0x2906c */

void fcn.0002906c(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int32_t in_stack_00000078;
    
    *(arg1 + 0x20) = 0;
    *arg1 = 0xfffe89ab;
    *(arg1 + 0x1b50) = 0;
    fcn.0002fd38();
    *(arg1 + 0x1ed0) = 0;
    iVar1 = fcn.00027170(0x58);
    uVar2 = 0;
    if (iVar1 != 0) {
        uVar2 = fcn.00032f90(iVar1);
    }
    *(arg1 + 0x30) = uVar2;
    iVar1 = fcn.00027170(0xb8);
    uVar2 = 0;
    if (iVar1 != 0) {
        uVar2 = fcn.0002d040(iVar1,in_stack_00000078);
    }
    *(arg1 + 0x38) = uVar2;
    fcn.0002ceec(arg1 + 0x48);
    *0x43b70 = *0x43b90;
    *(arg1 + 0x1edc) = 0;
    return;
}


/* fcn.00029630 @ 0x29630 */

uint64_t fcn.00029630(uint32_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint in_register_0000000c;
    int64_t *arg1_00;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg1_00 + 0x34) != '\0') {
        fcn.000295b4(arg1_00);
    }
    *(arg1_00 + 0x34) = 0;
    fcn.0001ba7c(arg1,0,0x48);
    iVar1 = fcn.0001b9e4(0x20000);
    arg1_00[2] = iVar1;
    iVar1 = fcn.0001b9e4(0x8004);
    *arg1_00 = iVar1;
    iVar1 = fcn.0001b9e4(0x4004);
    arg1_00[1] = iVar1;
    if (((arg1_00[2] == 0) || (*arg1_00 == 0)) || (iVar1 == 0)) {
        uVar2 = fcn.000295b4(arg1_00);
        uVar2 = uVar2 & 0xffffffffffffff00;
    }
    else {
        fcn.0001ba7c(arg1_00[2],0,0x20000);
        fcn.0001ba7c(*arg1_00,0,0x8004);
        fcn.0001ba7c(arg1_00[1],0,0x4004);
        arg1_00[3] = arg1_00[2];
        uVar2 = CONCAT71(arg1_00[2] >> 8,1);
        *(arg1_00 + 0x34) = 1;
    }
    return uVar2;
}


/* fcn.000291fc @ 0x291fc */

void fcn.000291fc(void)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    uint32_t uStackX_c;
    
    iVar3 = fcn.0001f288();
    puVar4 = fcn.0001f280();
    uStackX_c = 0;
    fcn.00017638(&uStackX_c);
    uVar1 = fcn.000294a8();
    uVar2 = fcn.0002943c(uStackX_c << 0x20);
    *puVar4 = uVar2 & uVar1 & 0x800063df;
    uVar1 = *(iVar3 + 0x22);
    *(iVar3 + 0x22) = uVar1 | 0x610;
    if ((*puVar4 & 1) == 0) {
        *(iVar3 + 0x10) = *(iVar3 + 0x10) & 0xfffe;
        *(iVar3 + 0x1a) = *(iVar3 + 0x1a) & 0xfffffffe;
    }
    else {
        *(iVar3 + 0x10) = *(iVar3 + 0x10) | 1;
        *(iVar3 + 0x1a) = *(iVar3 + 0x1a) | 1;
    }
    if ((*puVar4 & 2) == 0) {
        *(iVar3 + 0x10) = *(iVar3 + 0x10) & 0xfffd;
        *(iVar3 + 0x1a) = *(iVar3 + 0x1a) & 0xfffffffd;
    }
    else {
        *(iVar3 + 0x10) = *(iVar3 + 0x10) | 2;
        *(iVar3 + 0x1a) = *(iVar3 + 0x1a) | 2;
    }
    if ((*puVar4 & 4) == 0) {
        *(iVar3 + 0x10) = *(iVar3 + 0x10) & 0xfffb;
        *(iVar3 + 0x1a) = *(iVar3 + 0x1a) & 0xfffffffb;
    }
    else {
        *(iVar3 + 0x10) = *(iVar3 + 0x10) | 4;
        *(iVar3 + 0x1a) = *(iVar3 + 0x1a) | 4;
    }
    if ((*puVar4 & 8) == 0) {
        *(iVar3 + 0x10) = *(iVar3 + 0x10) & 0xffef;
        *(iVar3 + 0x1a) = *(iVar3 + 0x1a) & 0xffffffef;
    }
    else {
        *(iVar3 + 0x10) = *(iVar3 + 0x10) | 0x10;
        *(iVar3 + 0x1a) = *(iVar3 + 0x1a) | 0x10;
    }
    if ((*puVar4 & 0x10) == 0) {
        *(iVar3 + 0x10) = *(iVar3 + 0x10) & 0xffdf;
        *(iVar3 + 0x1a) = *(iVar3 + 0x1a) & 0xffffffdf;
    }
    else {
        *(iVar3 + 0x10) = *(iVar3 + 0x10) | 0x20;
        *(iVar3 + 0x1a) = *(iVar3 + 0x1a) | 0x20;
    }
    if ((*puVar4 & 0x40) == 0) {
        uVar1 = uVar1 & 0xfffffffe | 0x610;
    }
    else {
        uVar1 = uVar1 | 0x611;
    }
    *(iVar3 + 0x22) = uVar1;
    if ((*puVar4 & 0x80) == 0) {
        *(iVar3 + 0x22) = *(iVar3 + 0x22) & 0xfffffffd;
    }
    else {
        *(iVar3 + 0x22) = *(iVar3 + 0x22) | 2;
    }
    if ((*puVar4 & 0x100) == 0) {
        *(iVar3 + 0x1e) = *(iVar3 + 0x1e) & 0xfffe;
    }
    else {
        *(iVar3 + 0x1e) = *(iVar3 + 0x1e) | 1;
    }
    if ((*puVar4 & 0x200) == 0) {
        *(iVar3 + 0x1a) = *(iVar3 + 0x1a) & 0xfdffffff;
        *(iVar3 + 0x1e) = *(iVar3 + 0x1e) & 0xffdf;
    }
    else {
        *(iVar3 + 0x1a) = *(iVar3 + 0x1a) | 0x2000000;
        *(iVar3 + 0x1e) = *(iVar3 + 0x1e) | 0x20;
    }
    if ((*puVar4 & 0x2000) == 0) {
        *(iVar3 + 0x1a) = *(iVar3 + 0x1a) & 0xfeffffff;
        *(iVar3 + 0x22) = *(iVar3 + 0x22) & 0xfffff7ff;
    }
    else {
        *(iVar3 + 0x1a) = *(iVar3 + 0x1a) | 0x1000000;
        *(iVar3 + 0x22) = *(iVar3 + 0x22) | 0x800;
    }
    if ((*puVar4 & 0x4000) == 0) {
        *(iVar3 + 0x22) = *(iVar3 + 0x22) & 0xffffefff;
    }
    else {
        *(iVar3 + 0x22) = *(iVar3 + 0x22) | 0x1000;
    }
    uVar1 = *(iVar3 + 0x22);
    *(iVar3 + 0x21) = 2;
    *(iVar3 + 0x22) = uVar1 & 0xffffefff | 0xc000;
    if ((*0x43bac & 1) == 0) {
        if ((*0x43bac & 2) == 0) {
            *(iVar3 + 0x22) = uVar1 & 0xffffefdf | 0xc000;
        }
        if ((*0x43bac & 1) == 0) {
            *(iVar3 + 0x22) = *(iVar3 + 0x22) | 0x20000;
            goto code_r0x000293d2;
        }
    }
    *(iVar3 + 0x22) = *(iVar3 + 0x22) & 0xfffdffff;
code_r0x000293d2:
    if ((*0x43bac & 2) == 0) {
        *(iVar3 + 0x22) = *(iVar3 + 0x22) | 0x10000;
    }
    else {
        *(iVar3 + 0x22) = *(iVar3 + 0x22) & 0xfffeffff;
    }
    fcn.000294e4();
    return;
}


/* fcn.0002a010 @ 0x2a010 */

void fcn.0002a010(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    int64_t iVar1;
    uint64_t uVar2;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = arg2 & 0xff;
    if (*(iVar1 + 0x78 + uVar2 * 0x10) == '\0') {
        *(iVar1 + 0x78 + uVar2 * 0x10) = 1;
        fcn.0002ac18(*(*(*(iVar1 + 0x10) + 0x20) + 200),*(iVar1 + (uVar2 + 7) * 0x10));
    }
    if ((*(iVar1 + 0x28) & 0x21) == 0) {
        if (*(iVar1 + 8) < 2) {
            *(iVar1 + 0x5c) = arg2;
            *(iVar1 + 8) = 2;
            if (*(iVar1 + 0x28) == 0x10) {
                fcn.0002b8c0(*(iVar1 + 0x10));
            }
        }
    }
    else if (*(iVar1 + 0x5c) == -1) {
        *(iVar1 + 0x5c) = arg2;
    }
    return;
}


/* fcn.0002a208 @ 0x2a208 */

void fcn.0002a208(uint32_t arg1,uint32_t arg2)

{
    uint in_register_0000000c;
    int64_t iVar1;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if (((0xf8 < arg2 - 6U) && (*(iVar1 + 8) != 3)) && (*(iVar1 + 8) = 3, arg2 != -1)) {
        *(iVar1 + 0x78 + (arg2 & 0xff) * 0x10) = 1;
        fcn.0002ac18(*(*(*(iVar1 + 0x10) + 0x20) + 200),*(iVar1 + ((arg2 & 0xff) + 7) * 0x10));
    }
    return;
}


/* fcn.0002ac18 @ 0x2ac18 */

void fcn.0002ac18(uint32_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    uint in_register_0000000c;
    int64_t iVar1;
    uint8_t uVar2;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    arg1_00 = fcn.0002da78(*(*0x43c08 + 0x38),arg2 + 0x1c);
    uVar2 = 0;
    if (arg1_00 != 0) {
        fcn.00030ce0(arg1_00);
        if (*(iVar1 + 0x50) != '\0') {
            do {
                fcn.0002bcf4(*(**(iVar1 + 0x58 + uVar2 * 8) + 0xd8),arg2);
                uVar2 = uVar2 + 1;
            } while (uVar2 < *(iVar1 + 0x50));
        }
        (****(iVar1 + 0x68))(*(iVar1 + 0x68),1);
    }
    return;
}


/* fcn.000277c4 @ 0x277c4 */

void fcn.000277c4(int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = *(arg1 + 0xc0);
    if (((uVar1 & 0x1008d0) == 0x10) && (*(arg1 + 0xac) < 0xb)) {
        uVar1 = uVar1 | 8;
    }
    else {
        uVar1 = uVar1 & 0xfffffff7;
    }
    *(arg1 + 0xc0) = uVar1;
    if ((uVar1 >> 0x18 & 1) != 0) {
        *(arg1 + 0xc0) = uVar1 & 0xfffffff7;
    }
    return;
}


/* fcn.00028f2c @ 0x28f2c */

ulong fcn.00028f2c(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int16_t iVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    uint8_t uVar4;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar4 = 0;
    if (*(iVar3 + 0x20) != '\0') {
        do {
            if (3 < uVar4) {
                return 0;
            }
            iVar1 = *(iVar3 + uVar4 * 8);
            if ((iVar1 != 0xfffe89ab) && (iVar2 = fcn.0001bb9c(iVar1 + 0xa8,arg2,0xffff), iVar2 == 0)) {
                return *(iVar3 + uVar4 * 8);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(iVar3 + 0x20));
    }
    return 0;
}


/* fcn.00028ee4 @ 0x28ee4 */

int64_t fcn.00028ee4(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    char cVar3;
    char cVar4;
    uint8_t uVar5;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar5 = 0;
    cVar3 = arg2;
    if (*(iVar2 + 0x20) != '\0') {
        do {
            if (3 < uVar5) {
                return 0;
            }
            iVar1 = *(iVar2 + uVar5 * 8);
            cVar4 = cVar3;
            if ((iVar1 != 0xfffe89ab) && (cVar4 = cVar3 + -1, cVar3 == '\0')) {
                return iVar1;
            }
            uVar5 = uVar5 + 1;
            cVar3 = cVar4;
        } while (uVar5 < *(iVar2 + 0x20));
    }
    return 0;
}


/* fcn.0002cba0 @ 0x2cba0 */

ulong fcn.0002cba0(int64_t arg1)

{
    return CONCAT71(*(arg1 + 0x38) >> 8,*(*(*(arg1 + 0x38) + 0x28) + 0xc) == 0x20);
}


/* fcn.0002b334 @ 0x2b334 */

ulong fcn.0002b334(uint32_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    ulong uVar2;
    uint in_register_0000000c;
    
    uVar1 = *arg2;
    if (uVar1 < *(CONCAT44(in_register_0000000c,arg1) + 0x14)) {
        uVar2 = *(CONCAT44(in_register_0000000c,arg1) + 0x18 + uVar1 * 8);
        *arg2 = uVar1 + 1;
        return uVar2;
    }
    return 0;
}


/* fcn.00025a70 @ 0x25a70 */

void fcn.00025a70(uint32_t arg1)

{
    uint in_register_0000000c;
    
    if (*(CONCAT44(in_register_0000000c,arg1) + 0x240) != 0) {
        fcn.0001ba7c(arg1 + 4,0,0x1ec);
        fcn.00026fe4(CONCAT44(in_register_0000000c,arg1));
    }
    return;
}


/* fcn.0002c43c @ 0x2c43c */

void fcn.0002c43c(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    
    if (arg2 != '\0') {
        puVar1 = *(arg1 + 0xc0) + 0x30;
        *puVar1 = *puVar1 | 0x10;
        return;
    }
    puVar1 = *(arg1 + 0xc0) + 0x30;
    *puVar1 = *puVar1 & 0xffffffef;
    return;
}


/* fcn.000291bc @ 0x291bc */

bool fcn.000291bc(uint32_t arg1)

{
    uint8_t uVar1;
    
    if (arg1 == 0) {
        return *0x43bac != 0;
    }
    if (arg1 == 1) {
        uVar1 = *0x43bac;
    }
    else if (arg1 == 2) {
        uVar1 = *0x43bac >> 1;
    }
    else {
        if (arg1 != 3) {
            return false;
        }
        uVar1 = *0x43bac >> 5;
    }
    return uVar1 & 1;
}


/* fcn.000225b4 @ 0x225b4 */

//WARNING: Variable defined which should be unmapped: var_17h
//WARNING: Variable defined which should be unmapped: var_27h
//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_dh

ulong fcn.000225b4(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    int iVar3;
    uint8_t uVar4;
    int64_t var_17h;
    uchar auStackX_18 [7];
    int64_t var_27h;
    uint32_t var_2fh;
    int64_t var_37h;
    int8_t var_6fh;
    int8_t var_77h;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int iStack_6c;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    uchar auStack_48 [7];
    int64_t var_39h;
    uchar auStack_38 [7];
    int64_t var_29h;
    uchar auStack_28 [7];
    int64_t var_19h;
    uint32_t var_dh;
    int64_t var_9h;
    
    uVar4 = 0;
    auStackX_18[0] = 0;
    var_17h._1_1_ = 0;
    fcn.0001ba7c(&uStack_98,0,0x78);
    if (arg2 != 0) {
        cVar1 = fcn.00022500(arg1,auStackX_18,&var_17h + 1);
        if (cVar1 == '\x01') {
            iVar3 = (**(*0x43918 + 0x188))(auStackX_18[0],var_17h._1_1_);
            if (iVar3 != -1) {
                uVar2 = (**(*0x43918 + 0x88))();
                if (uVar2 != 0) {
                    do {
                        (**(*0x43918 + 0x20))(uVar4,&uStack_98);
                        if ((var_29h._1_4_ == 1) && (iStack_6c == iVar3)) {
                            *arg2 = uStack_98;
                            *(arg2 + 8) = uStack_90;
                            *(arg2 + 0x10) = uStack_88;
                            *(arg2 + 0x18) = uStack_80;
                            *(arg2 + 0x20) = uStack_78;
                            *(arg2 + 0x28) = CONCAT44(iStack_6c,uStack_70);
                            *(arg2 + 0x30) = uStack_68;
                            *(arg2 + 0x38) = uStack_60;
                            *(arg2 + 0x40) = uStack_58;
                            *(arg2 + 0x48) = uStack_50;
                            *(arg2 + 0x50) = _auStack_48;
                            *(arg2 + 0x58) = stack0xffffffffffffffc0;
                            *(arg2 + 0x60) = _auStack_38;
                            *(arg2 + 0x68) = CONCAT44(stack0xffffffffffffffd4,1);
                            *(arg2 + 0x70) = _auStack_28;
                            return 1;
                        }
                        uVar4 = uVar4 + 1;
                    } while (uVar4 < uVar2);
                }
            }
        }
    }
    return 0;
}


/* fcn.000217e0 @ 0x217e0 */

bool fcn.000217e0(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint16_t uVar2;
    int16_t iVar3;
    bool bVar4;
    
    uVar1 = fcn.0001bb80(arg1);
    uVar2 = fcn.0001bb80(arg2);
    if (uVar1 == uVar2) {
        iVar3 = fcn.0001bb9c(arg1,arg2,uVar1 - 1);
        bVar4 = iVar3 == 0;
    }
    else {
        bVar4 = false;
    }
    return bVar4;
}


/* fcn.00022404 @ 0x22404 */

uint32_t fcn.00022404(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t auStack_14 [5];
    
    if (arg2 == '\0') {
        uVar2 = 0x35a8;
        auStack_14[0] = 0x5000;
        auStack_14[1] = 0xa000;
        uVar4 = arg1;
        if (0x35a7 < uVar4) {
            iVar3 = 1;
            puVar1 = auStack_14;
            do {
                if (uVar4 < *puVar1) break;
                uVar2 = *puVar1;
                iVar3 = iVar3 + 1;
                puVar1 = puVar1 + 1;
            } while (iVar3 < 3);
            if (0x7ff < uVar4 - uVar2) {
                return uVar2;
            }
            return 0xffffffff;
        }
    }
    return 0xffffffff;
}


/* fcn.00021de8 @ 0x21de8 */

bool fcn.00021de8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    ulong uVar2;
    ulong uVar3;
    uchar uVar4;
    uint8_t uVar5;
    ushort uVar6;
    int iVar7;
    uint8_t uVar8;
    uint32_t uVar9;
    uchar uVar10;
    uchar uVar11;
    int64_t iStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    uchar auStack_a8 [44];
    int iStack_7c;
    uchar uStack_4f;
    uchar uStack_48;
    int iStack_40;
    
    uVar5 = (**(*0x43918 + 0x88))();
    uVar11 = 0;
    bVar1 = false;
    uVar8 = 0;
    uVar10 = 0xff;
    if (uVar5 != 0) {
        do {
            (**(*0x43918 + 0x20))(uVar8,auStack_a8);
            (**(*0x43918 + 0x38))(uVar8,0,0);
            uVar4 = uStack_48;
            if (*(arg1 + 0x2c) == iStack_7c) {
                (**(*0x43918 + 0x38))(uVar8,1);
                bVar1 = true;
                uVar11 = uVar4;
                if (iStack_40 == 2) {
                    uVar10 = uStack_4f;
                }
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < uVar5);
        if (bVar1) {
            uStack_c0 = 0;
            uStack_b8 = 0;
            iStack_c8 = arg3;
            uVar6 = (**(*0x43918 + 0x148))(0x20,1,uVar11);
            uVar2 = uStack_b8;
            uStack_b8 = CONCAT44(uStack_b8._4_4_,0x20);
            uVar3 = uStack_b8;
            uVar9 = arg2;
            uStack_c0 = CONCAT44(CONCAT22(uStack_c0._6_2_,uVar6),uVar9);
            uStack_b8._6_2_ = SUB82(uVar2,6);
            uStack_b8._0_6_ = CONCAT15(1,uVar3);
            iVar7 = (**(*0x43918 + 0x28))(&iStack_c8,uVar10,0,0);
            if ((iVar7 == 0) && ((uVar9 == 0xffffffff || (uVar9 <= uStack_c0)))) {
                iVar7 = (**(*0x43918 + 0x28))(&iStack_c8,uVar10,1,0);
                return iVar7 == 0;
            }
        }
    }
    return false;
}


/* fcn.00024ef4 @ 0x24ef4 */

void fcn.00024ef4(int64_t arg1)

{
    uint32_t *puVar1;
    int64_t iVar2;
    ulong *puVar3;
    int64_t iVar4;
    
    if ((arg1 != 0) && (iVar4 = fcn.00028f2c(*0x43c08,arg1), iVar4 != 0)) {
        puVar1 = *(iVar4 + 0xc0) + 0x30;
        *puVar1 = *puVar1 | 0x10000;
        iVar2 = *(*(iVar4 + 200) + 0x18);
        puVar1 = *(iVar2 + 0x30) + 0x8c;
        *puVar1 = *puVar1 | 0x200;
        puVar3 = *(*(iVar4 + 200) + 0x68);
        (***puVar3)(puVar3,CONCAT71(iVar2 >> 8,1));
        *(iVar4 + 0x8c) = *(iVar4 + 0x8c) | 0x200;
    }
    return;
}


/* fcn.00021564 @ 0x21564 */

ulong fcn.00021564(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t arg1_00;
    int64_t iVar2;
    ulong *puVar3;
    char cVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong uVar8;
    uint32_t uVar9;
    uint8_t uVar10;
    uchar auStackX_20 [8];
    
    iVar5 = fcn.00028f2c(*0x43c08,arg2);
    iVar6 = fcn.00028f2c(*0x43c08,arg1);
    if ((iVar6 == 0) || (iVar5 == 0)) {
        uVar8 = 0xe;
    }
    else {
        uVar10 = 0;
        arg1_00 = *(iVar5 + 0xc0);
        iVar2 = *(iVar6 + 0xc0);
        if (*(*0x43c08 + 0x20) != '\0') {
            do {
                iVar7 = fcn.00028ee4(*0x43c08,CONCAT71(arg1 >> 8,uVar10));
                if (iVar7 == 0) {
                    return 1;
                }
                uVar9 = *(*(iVar7 + 0xc0) + 0x30) >> 0xe;
                arg1 = uVar9;
                if ((uVar9 & 1) != 0) {
                    return 0x18;
                }
                if (*(iVar7 + 0xfd) != '\0') {
                    return 0x17;
                }
                uVar10 = uVar10 + 1;
            } while (uVar10 < *(*0x43c08 + 0x20));
        }
        cVar4 = fcn.0002cba0(arg1_00);
        if (((cVar4 == '\0') || ((*(*(*(*(*(arg1_00 + 0x38) + 0x28) + 0x40) + 0x30) + 0x8c) >> 4 & 1) == 0)) ||
           ((*(*(*(*(arg1_00 + 8) + 0x18) + 0x30) + 0x8c) & 8) != 0)) {
            uVar8 = 0x19;
        }
        else if (((*(arg1_00 + 0x28) >> 0x20 == 0) &&
                 ((-((*(iVar5 + 0x8c) & 0x200) != 0) & 0xfe635000) + 0x1dcb000 <= *(arg1_00 + 0x28))) &&
                (*(arg1_00 + 0x28) < 0x8000001)) {
            iVar6 = *(iVar6 + 200);
            if (*(iVar6 + 0x50) < 2) {
                uVar9 = *(*(*(*(arg1_00 + 8) + 0x18) + 0x30) + 0x8c);
                auStackX_20[0] = 0;
                do {
                    iVar7 = fcn.0002b334(iVar6,auStackX_20);
                    if (iVar7 == 0) {
                        *(iVar2 + 0x4d) = 0;
                        *(iVar2 + 0x4c) = arg3;
                        *(iVar2 + 0x50) = *(*(*(iVar5 + 200) + 0x68) + 0x1c);
                        *(iVar2 + 0x54) = *(*(iVar5 + 0xc0) + 0x4a);
                        *(arg1_00 + 0x4c) = 0;
                        *(arg1_00 + 0x30) = *(arg1_00 + 0x30) & 0xfffffff3 | 0x4020;
                        puVar3 = *(*(iVar2 + 8) + 0x68);
                        (***puVar3)(puVar3,1);
                        puVar3 = *(*(arg1_00 + 8) + 0x68);
                        (***puVar3)(puVar3,1);
                        *(*0x429d0 + 0x240) = iVar5;
                        fcn.00025a70(*0x429d0);
                        return 0;
                    }
                    uVar1 = *(*(iVar7 + 0x30) + 0x8c);
                } while ((((uVar1 & 0x1800) != 0) || ((uVar1 >> 7 & 1) == 0)) &&
                        (((uVar1 >> 4 & 1) == 0 || ((uVar9 >> 7 & 1) != 0))));
            }
            uVar8 = 0x1a;
        }
        else {
            uVar8 = 0x1b;
        }
    }
    return uVar8;
}


/* fcn.00021b7c @ 0x21b7c */

int16_t fcn.00021b7c(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    char cVar2;
    uint uVar3;
    ulong *arg1_00;
    ulong *arg1_01;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t arg1_02;
    int16_t iVar7;
    char in_stack_00000028;
    uchar auStack_40 [24];
    int16_t iStack_28;
    uchar uStack_24;
    
    arg1_00 = fcn.000226c0(noname_0);
    arg1_01 = fcn.000226c0(arg1);
    uVar5 = 0;
    if (arg1_00 == NULL) {
        return 7;
    }
    if (arg1_01 == NULL) {
        return 8;
    }
    if (*(arg1_00 + 0x14) == 2) {
        if (*(arg1_00[0x19] + 0x14) != '\x01') {
            return 0xc;
        }
        uVar1 = *(*(*(arg1_00[0x19] + 0x18) + 0x30) + 0x8c) & 0x100;
    }
    else {
        if (*(arg1_00 + 0x14) != 1) {
            return 0xc;
        }
        uVar1 = *(arg1_00 + 0x8c) >> 8 & 1;
    }
    if (uVar1 == 0) {
        return 0xc;
    }
    uVar4 = fcn.0002e358((arg3 & 0xffffffffU) << 0xb);
    if (in_stack_00000028 != '\0') {
code_r0x00021c79:
        arg1_02 = fcn.0001b9e4(0x1000);
        if (arg1_02 == 0) {
            return 0xe;
        }
        fcn.0001ba7c(auStack_40,0,0x20);
        fcn.0001ba7c(arg1_02,0,0x1000);
        *(arg1_02 + 0x78) = uVar5;
        *(arg1_02 + 0x68) = arg2 & 0xffffffffU;
        *(arg1_02 + 0x80) = 2;
        *(arg1_02 + 0x8c) = 0;
        *(arg1_02 + 0x60) = (arg2 & 0xffffffffU) + uVar5;
        *(arg1_02 + 0x84) = 2;
        fcn.0001ba1c(arg1_02 + 0xc,0x29,arg1_00 + 0x56,0x29);
        fcn.0001ba1c(arg1_02 + 0x35,0x29,arg1_01 + 0x56,0x29);
        fcn.0001ba1c(arg1_02,8,0x37028,8);
        *(arg1_02 + 0x90) = 1;
        *(arg1_02 + 8) = 4;
        uVar3 = fcn.0001bd20(arg1_02,0x194);
        *(arg1_02 + 0x194) = uVar3;
        iVar7 = 0;
        cVar2 = fcn.0002ebe4(arg1_00,arg1_02);
        if (cVar2 == '\0') {
            iVar7 = 1;
        }
        else {
            cVar2 = fcn.0002ebe4(arg1_01,arg1_02);
            if (cVar2 == '\0') {
                iVar7 = 2;
            }
        }
        fcn.0001b9d8(arg1_02);
        if (iVar7 == 0) {
            cVar2 = fcn.0002186c(arg1_01);
            if (cVar2 == '\0') {
                return 2;
            }
            fcn.0001ba7c(auStack_40,0,0x20);
            uStack_24 = 0xe7;
            (***arg1_00)(arg1_00,auStack_40);
            if (iStack_28 != 0) {
                return 3;
            }
            (***arg1_01)(arg1_01,auStack_40);
            if (iStack_28 != 0) {
                return 4;
            }
        }
        return iVar7;
    }
    uVar5 = fcn.0002e358(arg1_00[0x10]);
    if (uVar4 <= uVar5) {
        uVar6 = fcn.0002e358(arg1_01[0x10]);
        uVar5 = uVar4;
        if (uVar4 <= uVar6) goto code_r0x00021c79;
    }
    return 10;
}


/* fcn.000226c0 @ 0x226c0 */

uint64_t fcn.000226c0(int64_t arg1)

{
    char cVar1;
    uint32_t arg2;
    uint64_t uVar2;
    uint64_t uVar3;
    uchar auStackX_10 [8];
    uchar auStackX_18 [16];
    
    auStackX_18[0] = 0;
    auStackX_10[0] = 0;
    uVar3 = 0;
    cVar1 = fcn.00022500(arg1,auStackX_18,auStackX_10);
    if (cVar1 == '\x01') {
        arg2 = (**(*0x43918 + 0x188))(auStackX_18[0],auStackX_10[0]);
        if (arg2 != 0xffffffff) {
            uVar2 = fcn.0002cdf4(*0x43c08 + 0x48,arg2);
            uVar3 = 0;
            if (uVar2 != 0) {
                uVar3 = uVar2 & -((*(uVar2 + 0xc0) >> 6 & 1) != 0);
            }
        }
    }
    else {
        uVar3 = fcn.0002ce30(*0x43c08 + 0x48,arg1);
        if ((uVar3 == 0) || ((*(uVar3 + 0xc0) >> 6 & 1) == 0)) {
            uVar3 = fcn.00028f2c(*0x43c08,arg1);
        }
    }
    return uVar3;
}


/* fcn.0002e358 @ 0x2e358 */

uint64_t fcn.0002e358(int64_t arg1)

{
    return arg1 - 8U & 0xfffffffffffffff0;
}


/* fcn.0001bd20 @ 0x1bd20 */

uint64_t fcn.0001bd20(int64_t noname_0,uint32_t arg1)

{
    uint8_t *puVar1;
    uint64_t uVar2;
    uint in_register_00000014;
    uint64_t uVar3;
    
    uVar2 = 0;
    uVar3 = uVar2;
    if (CONCAT44(in_register_00000014,arg1) != 0) {
        do {
            puVar1 = uVar3 + noname_0;
            uVar3 = uVar3 + 1;
            uVar2 = uVar2 + *puVar1;
        } while (uVar3 < CONCAT44(in_register_00000014,arg1));
    }
    return uVar2;
}


/* fcn.0002ebe4 @ 0x2ebe4 */

//WARNING: Variable defined which should be unmapped: var_20h

BADSPACEBASE * fcn.0002ebe4(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int32_t var_20h;
    uint64_t uStack_28;
    int64_t iStack_20;
    uint uStack_14;
    int16_t iStack_10;
    uchar uStack_c;
    
    if ((arg1 != 0) && (uVar1 = *(arg1 + 0x80), 7 < uVar1)) {
        fcn.0001ba7c(&uStack_28,0,0x20);
        uStack_14 = 0x200;
        uStack_28 = uVar1 - 8 & 0xfffffffffffffff0;
        uStack_c = 0x2a;
        iStack_20 = arg2;
        (***arg1)(arg1,&uStack_28);
        *0x20 = iStack_10 == 0;
    }
    return *0x20;
}


/* fcn.0002db5c @ 0x2db5c */

uint64_t fcn.0002db5c(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int16_t iVar2;
    int64_t arg1_00;
    int64_t arg1_01;
    uchar uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t *arg1_02;
    int64_t iVar7;
    uint64_t uVar8;
    uint32_t arg1_03;
    uint64_t uVar9;
    int64_t iVar10;
    
    uVar8 = *(arg1 + 0x30);
    iVar2 = *(arg1 + 0xa8);
    uVar4 = *(arg1 + 0xac);
    arg1_00 = *(arg1 + 0x38 + uVar8 * 8);
    arg1_01 = *(*(arg1_00 + 0x38) + 0x28);
    if (3 < *(arg1 + 0x30)) {
        return 2;
    }
    iVar10 = arg1_00 + 0x10;
    arg1_03 = arg1;
    iVar5 = fcn.0002da04(arg1_03,iVar10);
    if (iVar5 != 0) {
        return 6;
    }
    *(arg1 + 0xa1) = *(arg1 + 0xa0);
    uVar6 = fcn.0002d238(arg1_03,CONCAT71(iVar10 >> 8,arg2));
    if (uVar6 != 0) {
        return uVar6;
    }
    uVar6 = 2;
    if (1 < *(*(arg1 + 0x90) + 0x50)) goto code_r0x0002dd6d;
    fcn.0002c894(arg1_00,*(arg1 + 0xa4));
    uVar3 = fcn.00021308(*(arg1 + 0xa4));
    *(arg1_01 + 0x38) = uVar3;
    *(arg1_01 + 0x20) = iVar2 * 2;
    uVar6 = fcn.0002a99c(*(arg1 + 0x90),*(arg1 + 0xa4));
    if ((uVar4 != 0xffffffff) && (uVar9 = uVar4 << 0xb, uVar9 < uVar6)) {
        uVar6 = uVar9;
    }
    if (0x7ff < uVar6) {
        uVar4 = uVar6 >> 0xb;
        iVar10 = (uVar6 >> 0xb & 0xffffffff) << 0xb;
        *(arg1 + 0xac) = uVar4;
        if (*(arg1 + 0xa4) == 0x10) {
            if (0x150000 < uVar4) {
                uVar6 = 0x16;
                goto code_r0x0002dd6d;
            }
            cVar1 = *(arg1 + 0x30);
        }
        else {
            cVar1 = *(*0x43c08 + 0x1edc);
        }
        if (cVar1 != '\0') {
            return 2;
        }
        iVar5 = *(arg1 + 0x90);
        uVar3 = fcn.0002ae44(iVar5);
        uVar4 = fcn.00033040(arg1_01,iVar5 + 0x18,CONCAT71(uVar8 >> 8,uVar3),iVar10);
        uVar6 = uVar4;
        if (uVar4 != 0) goto code_r0x0002dd6d;
        iVar5 = fcn.000333a4(arg1_01);
        arg1_02 = fcn.0002a918(*(arg1 + 0x90),iVar5);
        if (arg1_02 != NULL) {
            iVar5 = *arg1_02;
            if (iVar5 != 0) {
                iVar7 = fcn.000333a4(arg1_01);
                uVar8 = fcn.0003348c(arg1_02);
                if (iVar7 + 0x1000U <= uVar8) {
                    iVar5 = iVar5 + 0x1000;
                }
            }
            fcn.0002cc78(arg1_00,iVar10);
            *(arg1_00 + 0x30) = *(arg1_00 + 0x30) | *(arg1 + 0xb0);
            *(arg1_00 + 0x4d) = *(arg1_00 + 0x4d) & 0xfe;
            *(arg1_00 + 0x4c) = 0;
            *(arg1_00 + 0x50) = 0;
            *(arg1_00 + 0x54) = 0;
            *(arg1_01 + 8) = (*(arg1 + 0xa4) & 0x21) == 0;
            fcn.00033404(arg1_01,iVar5);
            *(arg1_01 + 0x39) = 0xff;
            uVar6 = 0;
            goto code_r0x0002dd6d;
        }
    }
    uVar6 = 0xc;
code_r0x0002dd6d:
    fcn.0002d1ec(arg1_03);
    return uVar6;
}


/* fcn.0002d610 @ 0x2d610 */

ulong fcn.0002d610(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t arg1_00;
    int64_t iVar2;
    ulong uVar3;
    uint in_register_0000000c;
    uint8_t *arg1_01;
    int64_t *arg2_00;
    uint8_t uVar4;
    
    arg1_01 = CONCAT44(in_register_0000000c,arg1);
    uVar4 = 0;
    *0x429c0 = arg2;
    if (*arg1_01 != 0) {
        do {
            arg2 = CONCAT71(arg2 >> 8,uVar4);
            iVar2 = fcn.0002b5b0(arg1_01 + 0x10,arg2);
            if (*(iVar2 + 0x38) != '\0') {
                arg1_00 = *(iVar2 + 0x30);
                uVar1 = *(arg1_00 + 0xc0);
                arg2 = uVar1;
                if ((uVar1 & 0x40) != 0) {
                    arg2 = uVar1 & 0xffffffbf;
                    *(arg1_00 + 0xc0) = uVar1 & 0xffffffbf;
                    fcn.000277c4(arg1_00);
                }
                iVar2 = *(iVar2 + 0x30);
                if ((*(iVar2 + 0xc0) & 0x20) == 0) {
                    *(iVar2 + 0xc0) = *(iVar2 + 0xc0) | 0x20;
                    fcn.000277c4(iVar2);
                }
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *arg1_01);
    }
    uVar3 = fcn.0002d588(arg1_01);
    if (uVar3 == 0) {
        arg2_00 = *(arg1_01 + (arg1_01[0x30] - 1) * 8 + 0x38);
        if ((*(*(arg2_00[7] + 0x28) + 0xc) == 4) && (4 < *(*(arg2_00[7] + 0x28) + 0x10))) {
            fcn.0002bdf8(*(*arg2_00 + 0xd8),0);
        }
        (****(arg2_00[1] + 0x68))(*(arg2_00[1] + 0x68),1);
        fcn.0002dae0(arg1_01,arg2_00);
        if ((*(arg1_01 + 0xa4) == 0x10) && ((*(arg1_01 + 0xb0) & 0x800) != 0)) {
            fcn.0002141c(0,CONCAT71(arg2_00 >> 8,*(*(arg1_01 + 0x38) + 0x48)) ^ 1);
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.0002d8d0 @ 0x2d8d0 */

ulong fcn.0002d8d0(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    char cVar1;
    
    arg1_00 = *arg2;
    cVar1 = fcn.0002cc80(arg2);
    if (cVar1 != '\0') {
        fcn.0002d15c(arg1,arg1_00,0);
    }
    cVar1 = fcn.00025aa4(*0x429d0,arg1_00);
    if (cVar1 != '\0') {
        fcn.00025a70(*0x429d0);
    }
    fcn.000289c8(*0x43c08,arg1_00);
    fcn.0002d7f4(arg1);
    return 0;
}


/* fcn.000287ec @ 0x287ec */

void fcn.000287ec(int64_t arg1)

{
    int64_t iVar1;
    int64_t arg3;
    uchar auStack_208 [512];
    
    iVar1 = *0x429d0;
    if (*(*0x429d0 + 0x240) != 0) {
        fcn.0001ba7c(auStack_208,0,0x200);
        iVar1 = *(iVar1 + 0x240);
        arg3 = CONCAT71(iVar1 >> 8,0x2a);
        fcn.0002910c(arg1,*(*(*(iVar1 + 200) + 0x18) + 0x30),arg3,*(*(*(iVar1 + 0xd8) + 0x10) + 0x20) + 0xf);
        fcn.0002910c(arg1,*(*(*(*(*0x429d0 + 0x240) + 200) + 0x18) + 0x30),CONCAT71(arg3 >> 8,0x2a),
                     *(*(*(*(*0x429d0 + 0x240) + 0xd8) + 0x10) + 0x20) + 0x1f);
    }
    return;
}


/* fcn.0002910c @ 0x2910c */

void fcn.0002910c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    unkbyte7 Var1;
    uchar auStack_58 [80];
    
    Var1 = arg3 >> 8;
    if ((*(arg2 + 0xc0) >> 3 & 1) == 0) {
        *(arg1 + 0x40) = 0x40005;
    }
    else {
        fcn.00027808(auStack_58);
        fcn.0002781c(auStack_58,arg2,CONCAT71(Var1,arg3),arg4);
        fcn.00030910(arg2,auStack_58);
        fcn.000279b4(auStack_58);
    }
    return;
}


/* fcn.0002db1c @ 0x2db1c */

void fcn.0002db1c(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    char cVar2;
    
    puVar1 = *(arg1 + 0x68);
    for (cVar2 = arg2; (puVar1 != NULL && (cVar2 != '\0')); cVar2 = cVar2 + -1) {
        puVar1 = *puVar1;
    }
    return;
}


/* fcn.0002ad9c @ 0x2ad9c */

uint64_t fcn.0002ad9c(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    uint8_t uVar2;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = 0;
    if (*(iVar1 + 0x50) != '\0') {
        uVar2 = *(*(*(*(iVar1 + 0x58) + 0x38) + 0x28) + 0x10);
    }
    iVar1 = fcn.0002b158(iVar1);
    return iVar1 * uVar2 >> 0xb;
}


/* fcn.0002b158 @ 0x2b158 */

uint64_t fcn.0002b158(int64_t arg1)

{
    uint64_t uVar1;
    ulong uVar2;
    int64_t arg1_00;
    uint8_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    
    fcn.0002aa48(arg1);
    *(arg1 + 0x70) = 0xffffffffffffffff;
    uVar5 = 0;
    uVar4 = 0;
    if (*(arg1 + 0x88) != '\0') {
        do {
            arg1_00 = (uVar4 + 9) * 0x10 + arg1;
            uVar1 = fcn.0003348c(arg1_00);
            if (uVar5 < uVar1) {
                uVar2 = fcn.000334a4(arg1_00);
                *(arg1 + 0x70) = uVar2;
                uVar5 = uVar1;
            }
            uVar3 = uVar4 + 1;
            uVar4 = uVar3;
        } while (uVar3 < *(arg1 + 0x88));
    }
    return uVar5;
}


/* fcn.0002af28 @ 0x2af28 */

uint fcn.0002af28(uint32_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    uint8_t uVar5;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar5 = 0;
    *(iVar4 + 0x10) = 0;
    if (*(iVar4 + 0x50) != '\0') {
        do {
            iVar2 = **(iVar4 + 0x58 + uVar5 * 8);
            iVar3 = *(iVar2 + 0xd8);
            if (*(iVar3 + 0xc) == 1) {
                iVar1 = *(iVar2 + 0xd4);
                if (iVar1 == 0) {
code_r0x0002afb1:
                    *(iVar4 + 0x10) = 5;
                    return 5;
                }
                if (iVar1 == 1) {
                    if ((*(*(iVar3 + 0x18) + 8) < 2) && (*(iVar3 + 0x44) != 0)) {
                        *(iVar4 + 0x10) = 6;
                    }
                    else {
                        *(iVar4 + 0x10) = 2;
                    }
                    return *(iVar4 + 0x10);
                }
                if (iVar1 == 2) goto code_r0x0002afb1;
                if (iVar1 == 3) {
                    *(iVar4 + 0x10) = 1;
                    return 1;
                }
                if (iVar1 == 4) goto code_r0x0002afb1;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(iVar4 + 0x50));
    }
    return 0;
}


/* fcn.0002afbc @ 0x2afbc */

uint64_t fcn.0002afbc(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    uint8_t uVar2;
    uint32_t in_R8D;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = 0;
    if (*(iVar1 + 0x50) != '\0') {
        uVar2 = *(*(*(*(iVar1 + 0x58) + 0x38) + 0x28) + 0x10);
    }
    iVar1 = fcn.0002ad54(arg1,iVar1,in_R8D);
    return (iVar1 + -0x1a1) * uVar2 >> 0xb;
}


/* fcn.0002ad54 @ 0x2ad54 */

uint64_t fcn.0002ad54(uint32_t arg1,ulong noname_1,uint32_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    uint8_t uVar3;
    uint64_t uVar4;
    
    uVar4 = 0xffffffffffffffff;
    uVar3 = 0;
    if (*(CONCAT44(in_register_0000000c,arg1) + 0x14) == '\0') goto code_r0x0002ad8f;
    iVar2 = *(CONCAT44(in_register_0000000c,arg1) + 0x18);
    uVar3 = 1;
    while (iVar2 != 0) {
        uVar1 = *(*(iVar2 + 0x30) + 0x80);
        if ((uVar1 != 0) && (uVar1 < uVar4)) {
            uVar4 = uVar1;
        }
        if (uVar3 < *(CONCAT44(in_register_0000000c,arg1) + 0x14)) {
            uVar1 = uVar3;
            uVar3 = uVar3 + 1;
            iVar2 = *(CONCAT44(in_register_0000000c,arg1) + 0x18 + uVar1 * 8);
        }
        else {
code_r0x0002ad8f:
            iVar2 = 0;
        }
    }
    return uVar4;
}


/* fcn.0002c0fc @ 0x2c0fc */

ulong fcn.0002c0fc(int64_t arg1)

{
    return *(*(*(arg1 + 0xd8) + 0x10) + (*(arg1 + 0xfc) + 7) * 0x10);
}


/* fcn.0002c11c @ 0x2c11c */

ulong fcn.0002c11c(int64_t arg1)

{
    return *(*(*(arg1 + 0xd8) + 0x10) + ((*(arg1 + 0xfc) ^ 1) + 7) * 0x10);
}


/* fcn.0001bb0c @ 0x1bb0c */

char * fcn.0001bb0c(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    char *pcVar2;
    uint16_t uVar3;
    uint64_t uVar4;
    
    uVar4 = 0;
    if (arg1 != 0) {
        uVar3 = 0;
        cVar1 = *arg1;
        pcVar2 = arg1;
        while (cVar1 != '\0') {
            pcVar2 = pcVar2 + 1;
            uVar3 = uVar3 + 1;
            cVar1 = *pcVar2;
        }
        for (; uVar4 < uVar3; uVar4 = uVar4 + 1) {
            if (*(uVar4 + arg1) == arg2) {
                return uVar4 + arg1;
            }
        }
    }
    return NULL;
}


/* fcn.00036358 @ 0x36358 */

int64_t fcn.00036358(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    uint8_t *puVar4;
    uint in_register_0000000c;
    uint8_t *puVar5;
    uint16_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    
    puVar5 = CONCAT44(in_register_0000000c,arg1);
    uVar6 = arg3;
    iVar7 = 0;
    if (puVar5 == NULL) {
        return 0;
    }
    for (; (*puVar5 == 0x20 || (*puVar5 == 9)); puVar5 = puVar5 + 1) {
    }
    uVar1 = *puVar5;
    if (uVar1 == 0x2d) {
        puVar5 = puVar5 + 1;
    }
    puVar4 = puVar5 + 1;
    if (*puVar5 != 0x2b) {
        puVar4 = puVar5;
    }
    puVar5 = puVar4;
    iVar8 = iVar7;
    if (uVar6 == 0x10) {
        iVar8 = 0;
        if ((*puVar4 != 0x30) || (puVar5 = puVar4 + 1, (puVar4[1] + 0xa8 & 0xdf) != 0)) goto code_r0x0003642e;
    }
    else {
        if (((uVar6 != 0) || (uVar6 = 10, *puVar4 != 0x30)) || (puVar5 = puVar4 + 1, (*puVar5 + 0xa8 & 0xdf) != 0))
        goto code_r0x0003642e;
        uVar6 = 0x10;
    }
    puVar5 = puVar4 + 2;
    iVar8 = iVar7;
code_r0x0003642e:
    for (; uVar2 = *puVar5, uVar2 != 0; puVar5 = puVar5 + 1) {
        if (uVar2 - 0x30 < 10) {
            uVar3 = uVar2 - 0x30;
        }
        else if (uVar2 + 0xbf < 0x1a) {
            uVar3 = uVar2 - 0x37;
        }
        else {
            if (0x19 < uVar2 + 0x9f) break;
            uVar3 = uVar2 - 0x57;
        }
        if (uVar6 <= uVar3) break;
        iVar8 = uVar3 + uVar6 * iVar8;
    }
    iVar7 = -iVar8;
    if (uVar1 != 0x2d) {
        iVar7 = iVar8;
    }
    if (arg2 != 0) {
        *arg2 = puVar5;
    }
    return iVar7;
}


/* fcn.00022500 @ 0x22500 */

ulong fcn.00022500(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uint16_t uVar2;
    int64_t iVar3;
    char *pcVar4;
    int iVar5;
    
    iVar3 = arg2;
    uVar2 = fcn.0001bb80(arg1);
    if (uVar2 < 6) {
        *arg2 = 0;
        *arg3 = 0;
        iVar3 = fcn.0001bb0c(arg1,CONCAT71(iVar3 >> 8,0x2e));
        if (((iVar3 != 0) && (*(iVar3 + 1) != '\0')) && (iVar3 != arg1)) {
            iVar5 = 0;
            if (*arg1 != '\0') {
                pcVar4 = arg1;
                do {
                    if ((iVar5 + arg1 != iVar3) && (9 < *pcVar4 - 0x30U)) {
                        return 0;
                    }
                    pcVar4 = pcVar4 + 1;
                    iVar5 = iVar5 + 1;
                } while (*pcVar4 != '\0');
            }
            uVar1 = fcn.00036358(arg1,0,0);
            *arg2 = uVar1;
            uVar1 = fcn.00036358(iVar3 + 1,0,0);
            *arg3 = uVar1;
            return 1;
        }
    }
    return 0;
}


/* fcn.0002cdf4 @ 0x2cdf4 */

int64_t fcn.0002cdf4(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint8_t uVar2;
    
    uVar2 = 0;
    if (*(arg1 + 0x1b00) != 0) {
        do {
            iVar1 = uVar2 * 0xd8 + arg1;
            if ((*(iVar1 + 0xd0) == '\0') && (*(iVar1 + 0x88) == arg2)) {
                return iVar1;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(arg1 + 0x1b00));
    }
    return 0;
}


/* fcn.0002add4 @ 0x2add4 */

int64_t fcn.0002add4(uint32_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    uVar6 = 0;
    uVar7 = uVar3;
    if (*(iVar4 + 0x50) != '\0') {
        do {
            iVar2 = fcn.0002c920(*(iVar4 + 0x58 + uVar6 * 8),0);
            iVar1 = *(iVar2 + 0x18);
            iVar2 = fcn.000333a4(iVar2);
            uVar3 = iVar2 + iVar1;
            uVar5 = uVar6 + 1;
            uVar6 = uVar5;
            if (uVar3 <= uVar7) {
                uVar3 = uVar7;
            }
            uVar7 = uVar3;
        } while (uVar5 < *(iVar4 + 0x50));
    }
    return uVar3 + 0x11a1;
}


/* fcn.0002134c @ 0x2134c */

uint64_t fcn.0002134c(int64_t arg1)

{
    uint16_t uVar1;
    uint64_t uVar2;
    unkbyte7 Var3;
    char *pcVar4;
    
    uVar1 = fcn.0001bb80(arg1);
    pcVar4 = arg1 + -1 + uVar1;
    uVar2 = CONCAT11(uVar1 >> 8,*pcVar4);
    if (*pcVar4 != ':') {
        while( true ) {
            Var3 = uVar2 >> 8;
            if (((uVar2 < 0x30) || (0x39 < uVar2)) || (pcVar4 <= arg1)) break;
            pcVar4 = pcVar4 + -1;
            uVar2 = CONCAT71(Var3,*pcVar4);
        }
        if (*pcVar4 == ':') {
            return CONCAT71(Var3,pcVar4 - arg1);
        }
    }
    return uVar2 & 0xffffffffffffff00;
}


/* fcn.000291a0 @ 0x291a0 */

bool fcn.000291a0(int64_t arg1)

{
    uint32_t *puVar1;
    
    puVar1 = fcn.0001f280();
    return (arg1 & *puVar1) == arg1;
}


/* fcn.0001f280 @ 0x1f280 */

ulong fcn.0001f280(void)

{
    return 0x438f4;
}


/* fcn.0002a2ec @ 0x2a2ec */

int64_t fcn.0002a2ec(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    uint8_t uVar3;
    int64_t *piVar4;
    
    iVar2 = 0;
    uVar3 = 0;
    if (*(CONCAT44(in_register_0000000c,arg1) + 0x2c) != '\0') {
        piVar4 = CONCAT44(in_register_0000000c,arg1) + 0x70;
        do {
            iVar1 = *piVar4;
            if ((*(iVar1 + 0xc0) >> 4 & 1) == 0) {
                *(CONCAT44(in_register_0000000c,arg1) + 0x5c) = uVar3;
                iVar2 = iVar1;
            }
            uVar3 = uVar3 + 1;
            piVar4 = piVar4 + 2;
        } while (uVar3 < *(CONCAT44(in_register_0000000c,arg1) + 0x2c));
    }
    return iVar2;
}


/* fcn.0002bbbc @ 0x2bbbc */

void fcn.0002bbbc(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    
    uVar1 = *(*(arg1 + 0x10) + 0x5c);
    fcn.00029ffc(*(arg1 + 0x18),*(arg1 + 0x10));
    if (((*(*(arg1 + 0x10) + 0x28) & 0x21) == 0) || (arg2 != *(*(arg1 + 0x10) + (uVar1 + 7) * 0x10))) {
        *(arg1 + 0xc) = 1;
        *(arg1 + 0x30) = 1;
        *(arg1 + 0x40) = 1;
        *(arg1 + 0x38) = 0;
        *(*(arg1 + 0x20) + 0xd4) = 1;
        *(*(arg1 + 0x10) + 8) = 0;
        *(*(arg1 + 0x10) + 0x78 + uVar1 * 0x10) = 0;
        *(*(arg1 + 0x10) + (uVar1 + 7) * 0x10) = arg2;
        (****(arg1 + 0x10))();
    }
    return;
}


/* fcn.0001bce4 @ 0x1bce4 */

uint fcn.0001bce4(ulong noname_0,int64_t arg1)

{
    uint auStackX_8 [8];
    
    fcn.0001cae0(auStackX_8,arg1);
    return auStackX_8[0];
}


/* fcn.00028d84 @ 0x28d84 */

void fcn.00028d84(int64_t arg1)

{
    int64_t iVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    uVar3 = arg1;
    if (uVar3 != 0) {
        *0x43b98 = uVar3;
        iVar1 = fcn.0001f288();
        *0x43b9c = *(iVar1 + 0x1a);
        *(iVar1 + 0x1a) = *(iVar1 + 0x1a) | uVar3;
        uVar4 = uVar3 & 1 | 2;
        if ((arg1 & 2U) == 0) {
            uVar4 = uVar3 & 1;
        }
        uVar3 = uVar4 | 4;
        if ((arg1 & 4U) == 0) {
            uVar3 = uVar4;
        }
        uVar4 = uVar3 | 8;
        if ((arg1 & 0x10U) == 0) {
            uVar4 = uVar3;
        }
        uVar3 = uVar4 | 0x10;
        if ((arg1 & 0x20U) == 0) {
            uVar3 = uVar4;
        }
        *0x43ba0 = uVar3 | 0x200;
        if ((arg1 & 0x2000000U) == 0) {
            *0x43ba0 = uVar3;
        }
        puVar2 = fcn.0001f280();
        *0x43ba4 = *puVar2;
        *puVar2 = *puVar2 | *0x43ba0;
    }
    return;
}


/* fcn.000218e0 @ 0x218e0 */

ulong fcn.000218e0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    int64_t in_stack_00000038;
    uint *in_stack_00000040;
    uchar auStack_128 [24];
    uint64_t uStack_110;
    uint32_t uStack_cc;
    uchar auStack_a8 [24];
    uint64_t uStack_90;
    uint32_t uStack_4c;
    
    iVar5 = fcn.0001f288();
    *in_stack_00000040 = 0;
    cVar1 = fcn.000291bc(3);
    if ((cVar1 == '\0') || ((*(iVar5 + 0x1a) & 0x1000000) == 0)) {
        uVar6 = 0xd;
    }
    else {
        cVar1 = fcn.000225b4(arg1,auStack_128);
        if (cVar1 == '\0') {
            uVar6 = 7;
        }
        else if ((uStack_cc & 0x100) == 0) {
            uVar6 = 0xc;
        }
        else {
            cVar1 = fcn.000225b4(arg2,auStack_a8);
            if (cVar1 == '\0') {
                uVar6 = 8;
            }
            else if (uStack_90 < uStack_110) {
                uVar6 = 5;
            }
            else if (((uStack_cc & 0x2000) == 0) && ((uStack_4c & 0x2000) == 0)) {
                uVar2 = uStack_cc >> 0xb & 1;
                if ((uVar2 != 0) || ((uStack_4c & 0x800) != 0)) {
                    if ((uVar2 == 0) || ((uStack_4c & 0x800) == 0)) {
                        return 0x11;
                    }
                    cVar1 = fcn.000217e0(auStack_a8,auStack_128);
                    if (cVar1 == '\0') {
                        return 0x10;
                    }
                }
                fcn.0001bbd0(in_stack_00000028,0x37030,0x10);
                *(in_stack_00000028 + 0x10) = 0;
                fcn.0001bbd0(in_stack_00000030,0x37040,0x10);
                *(in_stack_00000030 + 0x10) = 0;
                fcn.0001bbd0(in_stack_00000038,auStack_a8,0x10);
                *(in_stack_00000038 + 0x10) = 0;
                iVar4 = uStack_110 >> 0xb;
                uVar2 = iVar4 - 2;
                if (uVar2 < 0x800) {
                    uVar6 = 6;
                }
                else {
                    iVar3 = fcn.00022404(uVar2,uStack_cc >> 0xb & 1);
                    uVar2 = (iVar4 - iVar3) - 1;
                    if (iVar3 == -1) {
                        uVar2 = 1;
                    }
                    cVar1 = fcn.00021de8(auStack_128,uVar2,in_stack_00000030);
                    if (cVar1 != '\0') {
                        *in_stack_00000040 = 1;
                        cVar1 = fcn.00021de8(auStack_128,0xffffffff,in_stack_00000028);
                        if (cVar1 != '\0') {
                            *in_stack_00000040 = 2;
                            cVar1 = fcn.00021de8(auStack_a8,0xffffffff,in_stack_00000038);
                            iVar5 = *0x43918;
                            if (cVar1 != '\0') {
                                *in_stack_00000040 = 3;
                                (**(iVar5 + 0xf8))(0);
                                fcn.00024ef4(in_stack_00000030);
                                fcn.00024ef4(in_stack_00000028);
                                fcn.00024ef4(in_stack_00000038);
                                iVar4 = fcn.00021564(in_stack_00000038,in_stack_00000028,5);
                                if (iVar4 == 0) {
                                    *in_stack_00000040 = 4;
                                    uVar6 = fcn.00021b7c(in_stack_00000030,in_stack_00000038,arg3 & 0xffffffff,uVar2)
                                    ;
                                    return uVar6;
                                }
                            }
                        }
                    }
                    uVar6 = 0xe;
                }
            }
            else {
                uVar6 = 0x12;
            }
        }
    }
    return uVar6;
}


/* fcn.0002543c @ 0x2543c */

void fcn.0002543c(uint32_t *arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    
    iVar1 = arg4;
    (**(*0x43918 + 0xf8))(0);
    if ((3 < iVar1) && (arg3 != 0)) {
        fcn.00025378(arg3,0);
    }
    if ((2 < iVar1) && (arg3 != 0)) {
        fcn.000254cc(arg3);
    }
    if ((1 < iVar1) && (arg1 != NULL)) {
        fcn.000254cc(arg1);
    }
    if ((0 < iVar1) && (arg2 != 0)) {
        fcn.000254cc(arg2);
    }
    return;
}


/* fcn.00028bbc @ 0x28bbc */

void fcn.00028bbc(void)

{
    int64_t iVar1;
    uint *puVar2;
    
    if (*0x43b98 != 0) {
        *0x43b98 = 0;
        iVar1 = fcn.0001f288();
        *(iVar1 + 0x1a) = *0x43b9c;
        *0x43ba0 = 0;
        puVar2 = fcn.0001f280();
        *puVar2 = *0x43ba4;
    }
    return;
}


/* fcn.00022f10 @ 0x22f10 */

//WARNING: Variable defined which should be unmapped: var_bp_30h

int16_t fcn.00022f10(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    char cVar2;
    int16_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    char cVar6;
    ulong uVar7;
    uint64_t uVar8;
    int16_t iVar9;
    uint32_t uVar10;
    uint64_t arg2_00;
    uint64_t uVar11;
    uint64_t uVar12;
    int iVar13;
    int iVar14;
    bool bVar15;
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t var_1b0h;
    int64_t var_1b8h;
    uint64_t auStack_278 [2];
    char acStack_268 [32];
    uchar auStack_248 [12];
    uchar auStack_23c [116];
    int iStack_1c8;
    int32_t var_bp_30h;
    
    cVar6 = arg1;
    uVar11 = 0;
    auStack_278[0] = 0;
    auStack_278[1] = 0;
    iVar9 = 0;
    iVar14 = 2;
    iStackX_18 = 0;
    iStackX_20 = 0;
    cVar2 = fcn.000290f0(*0x43c08);
    if (cVar2 != '\0') {
        fcn.000290f8(*0x43c08);
        (**(*0x43918 + 0xf8))(0);
    }
    iVar4 = fcn.00023894();
    acStack_268[0] = '\0';
    bVar15 = false;
    if ((iVar4 == 0) || (cVar6 == '\0')) goto code_r0x00023058;
    iVar5 = fcn.00022870(*(iVar4 + 0xb8));
    if (iVar5 != 0) {
        fcn.0001bb50(acStack_268,iVar5);
    }
    iVar5 = *(iVar4 + 0xa8);
    bVar15 = iVar5 == 0;
    if (iVar5 == 0) {
        puVar1 = *(iVar4 + 0xb8) + 0x8c;
        *puVar1 = *puVar1 & 0xfffffdff;
    }
    uVar7 = 0;
    fcn.0002eb3c(iVar4,2,-1);
    fcn.00025378(*(iVar4 + 0xb8) + 0xa8,CONCAT71(uVar7 >> 8,1));
    (**(*0x43918 + 0xf8))(0);
    iVar4 = fcn.00023894();
    if (iVar4 == 0) {
        iVar9 = 0;
        if (iVar5 == 0) goto code_r0x00023058;
    }
    else {
        if (*(iVar4 + 0xa8) == 0) goto code_r0x00023058;
        cVar2 = fcn.0002e6e8(iVar4,arg2);
        iVar9 = 0;
        if (cVar2 != '\0') goto code_r0x00023058;
    }
    iVar9 = 0xf;
code_r0x00023058:
    uVar8 = 0;
    if (iVar4 == 0) {
        uVar12 = uVar11;
        if (!bVar15) {
            iVar4 = *(*(*0x43c08 + 0x38) + 0x80);
            if (iVar4 == 0) {
                arg2_00 = uVar8;
            }
            else {
                arg2_00 = iVar4 - 8;
            }
            uVar12 = 0;
            if (arg2_00 != 0) {
                do {
                    if (1 < uVar8) break;
                    cVar2 = fcn.0002e928(auStack_248,arg2_00);
                    uVar11 = 0;
                    if (cVar2 != '\0') {
                        uVar12 = uVar11;
                        do {
                            iVar13 = uVar12;
                            iVar3 = fcn.0001bb9c(arg2_00 + 0x1c,auStack_23c + iVar13 * 0x29,0x29);
                            if ((iVar3 == 0) && (auStack_278[uVar11] == 0)) {
                                auStack_278[uVar11] = arg2_00;
                                if (iVar13 == 0) {
                                    iVar14 = iStack_1c8;
                                }
                                uVar8 = uVar8 + 1;
                                break;
                            }
                            uVar12 = iVar13 + 1U;
                            uVar11 = uVar11 + 1;
                        } while (iVar13 + 1U < 2);
                    }
                    iVar4 = *(-(arg2_00 != 0) & arg2_00 + 8);
                    arg2_00 = -(iVar4 != 0) & iVar4 - 8U;
                } while (arg2_00 != 0);
                uVar12 = auStack_278[1];
                uVar11 = auStack_278[0];
            }
        }
    }
    else {
        auStack_278[0] = *(iVar4 + 0xa8);
        bVar15 = auStack_278[0] == 0;
        iVar14 = *(iVar4 + 0xc0);
        auStack_278[1] = *(iVar4 + 0xb8);
        uVar12 = *(iVar4 + 0xb8);
        uVar11 = auStack_278[0];
    }
    iVar4 = 0;
    if (((uVar11 != 0) || (uVar12 != 0)) || (bVar15)) {
        do {
            if (bVar15) break;
            uVar8 = auStack_278[iVar4];
            if (uVar8 != 0) {
                fcn.0001ba7c(auStack_248,0,0x200);
                fcn.0002ebe4(uVar8,auStack_248);
            }
            iVar4 = iVar4 + 1;
        } while (iVar4 < 2);
        if (((uVar11 != 0) && (*(uVar11 + 0xa0) == 2)) &&
           ((iStackX_18 = uVar11 + 0xa8, cVar6 == '\0' || (iVar14 != 1)))) {
            fcn.0002186c(uVar11);
        }
        uVar10 = 3;
        if ((uVar12 != 0) && (*(uVar12 + 0xa0) == 2)) {
            iStackX_20 = uVar12 + 0xa8;
            uVar10 = 3;
            if (acStack_268[0] == '\0') {
                uVar10 = 4;
                iVar4 = fcn.00022870(uVar12);
                if (iVar4 != 0) {
                    fcn.0001bb50(acStack_268,iVar4);
                }
            }
            if ((cVar6 == '\0') || (iVar14 == 1)) {
                fcn.0002186c(uVar12);
            }
        }
        fcn.0002543c(acStack_268,iStackX_18,iStackX_20,uVar10);
    }
    else if (iVar9 == 0) {
        iVar9 = 9;
    }
    return iVar9;
}


/* fcn.000290f0 @ 0x290f0 */

uchar fcn.000290f0(void)

{
    return *0x43909;
}


/* fcn.000290f8 @ 0x290f8 */

void fcn.000290f8(void)

{
    *0x43908 = 1;
    *0x43909 = 0;
    fcn.00014dcc();
    if (*0x43580 != 0) {
        fcn.0001ac3c(0x43580,0xe);
        *0x43580 = 0;
    }
    return;
}


/* fcn.00022870 @ 0x22870 */

int64_t fcn.00022870(uint32_t arg1)

{
    uint in_register_0000000c;
    
    if (((CONCAT44(in_register_0000000c,arg1) != 0) && (*(CONCAT44(in_register_0000000c,arg1) + 0xfd) != '\0')) &&
       (*(*0x429d0 + 0x240) != 0)) {
        return *(*0x429d0 + 0x240) + 0xa8;
    }
    return 0;
}


/* fcn.0001bb50 @ 0x1bb50 */

void fcn.0001bb50(uint32_t *arg1,int64_t arg2)

{
    char cVar1;
    
    cVar1 = *arg2;
    if (cVar1 != '\0') {
        arg2 = arg2 - arg1;
        do {
            *arg1 = cVar1;
            arg1 = arg1 + 1;
            cVar1 = *(arg2 + arg1);
        } while (cVar1 != '\0');
    }
    *arg1 = '\0';
    return;
}


/* fcn.0002eb3c @ 0x2eb3c */

void fcn.0002eb3c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uchar auStack_208 [96];
    int64_t iStack_1a8;
    uint uStack_17c;
    int iStack_178;
    uint uStack_74;
    
    if (*(arg1 + 0xa8) != 0) {
        cVar1 = fcn.0002e928(auStack_208,*(arg1 + 0xa8));
        if (cVar1 != '\0') {
            uStack_17c = arg2;
            if (arg3 != -1) {
                iStack_1a8 = arg3;
            }
            iStack_178 = iStack_178 + 1;
            uStack_74 = fcn.0001bd20(auStack_208,0x194);
            fcn.0002ebe4(*(arg1 + 0xa8),auStack_208);
            fcn.0002ebe4(*(arg1 + 0xb8),auStack_208);
        }
    }
    return;
}


/* fcn.0002e928 @ 0x2e928 */

//WARNING: Variable defined which should be unmapped: var_20h

BADSPACEBASE * fcn.0002e928(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int16_t iVar2;
    int32_t var_8h;
    int32_t var_20h;
    uint64_t uStack_28;
    int64_t iStack_20;
    uint uStack_14;
    uchar uStack_c;
    
    if ((arg2 != 0) && (uVar1 = *(arg2 + 0x80), 7 < uVar1)) {
        fcn.0001ba7c(&uStack_28,0,0x20);
        uStack_14 = 0x200;
        uStack_28 = uVar1 - 8 & 0xfffffffffffffff0;
        uStack_c = 0x28;
        iStack_20 = arg1;
        (***arg2)(arg2,&uStack_28);
        iVar2 = fcn.0001bb9c(arg1,0x37028,8);
        *0x20 = iVar2 == 0;
    }
    return *0x20;
}


/* fcn.00025378 @ 0x25378 */

void fcn.00025378(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int16_t iVar2;
    int64_t arg1_00;
    uint32_t uVar3;
    uchar auStackX_18 [8];
    uchar auStackX_20 [8];
    
    arg1_00 = fcn.00028f2c(*0x43c08,arg1);
    if ((arg1_00 != 0) && (*(arg1_00 + 0xfd) != '\0')) {
        fcn.00029010(*0x43c08,arg1_00,auStackX_20);
        if (((*(*(arg1_00 + 0xc0) + 0x4d) & 1) != 0) && (arg2 != '\0')) {
            uVar3 = 0;
            uVar1 = *(*0x429d0 + 0x1a6);
            if (uVar1 != 0) {
                do {
                    iVar2 = fcn.00025b04(*0x429d0,uVar3);
                    if (iVar2 != 0) {
                        if (uVar3 < uVar1) goto code_r0x00025416;
                        break;
                    }
                    uVar3 = uVar3 + 0x200;
                } while (uVar3 < uVar1);
            }
            fcn.00022374(auStackX_20);
        }
code_r0x00025416:
        auStackX_18[0] = 0;
        fcn.00025220(auStackX_20,auStackX_18);
    }
    return;
}


/* fcn.0002e6e8 @ 0x2e6e8 */

uint64_t fcn.0002e6e8(uint32_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t arg3;
    char cVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t *puVar9;
    char cStackX_8;
    uint64_t uStackX_18;
    uint64_t uStack_58;
    int64_t iStack_50;
    int iStack_44;
    int16_t iStack_40;
    uchar uStack_3c;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if ((((*(arg1_00 + 0xc0) == 1) || (*(arg1_00 + 200) != 2)) || (uVar4 = 0, *(arg1_00 + 0xa8) == 0)) ||
       (*(arg1_00 + 0xb8) == 0)) {
        return 0;
    }
    uVar3 = 0;
    if (*(arg1_00 + 0x1d8) != 0) {
        do {
            if (*(uVar3 * 0x20 + 0xf0 + arg1_00) != '\0') {
                puVar9 = arg1_00 + 0xd8 + uVar3 * 0x20;
                if (puVar9 != NULL) {
                    iVar2 = fcn.0001b9e4(0x20000);
                    if (iVar2 == 0) {
                        return 0;
                    }
                    uVar3 = puVar9[1];
                    uVar7 = uVar3 - *puVar9;
                    uStackX_18 = puVar9[2] + uVar7;
                    cStackX_8 = '\0';
                    fcn.0001ba7c(&uStack_58,0,0x20);
                    uVar8 = uVar4;
                    iStack_50 = iVar2;
                    goto code_r0x0002e7dd;
                }
                break;
            }
            uVar1 = uVar3 + 1;
            uVar3 = uVar1;
        } while (uVar1 < *(arg1_00 + 0x1d8));
    }
    if (arg2 != 0) {
        (**arg2)(*(arg2 + 8),100);
    }
    return 1;
code_r0x0002e7dd:
    uVar5 = uVar3;
    if (uVar3 < 0x100) {
        uVar5 = 0x100;
    }
    arg3 = uVar5 - 0x100;
    if (uVar5 - 0x100 < *puVar9) {
        arg3 = *puVar9;
    }
    if (uStackX_18 < 0x100) {
        uStackX_18 = 0x100;
    }
    uStackX_18 = uStackX_18 - 0x100;
    if (uStackX_18 < puVar9[2]) {
        uStackX_18 = puVar9[2];
    }
    if (uVar3 == arg3) {
        uVar4 = 1;
        fcn.0002eb3c(arg1_00,0,arg3);
        goto code_r0x0002e901;
    }
    iStack_44 = (uVar3 - arg3) * 0x200;
    uStack_3c = 0x28;
    uStack_58 = uStackX_18;
    (****(arg1_00 + 0xa8))(*(arg1_00 + 0xa8),&uStack_58);
    if (iStack_40 != 0) {
code_r0x0002e8e2:
        if (arg2 != 0) {
            (**arg2)(*(arg2 + 8),0xffffffff);
        }
code_r0x0002e901:
        fcn.0001b9d8(iVar2);
        return uVar4;
    }
    uStack_3c = 0x2a;
    uStack_58 = arg3;
    (****(arg1_00 + 0xb8))();
    if (iStack_40 != 0) goto code_r0x0002e8e2;
    if ((uVar8 == 0) || (0x1fff < uVar8 - arg3)) {
        fcn.0002eb3c(arg1_00,2,arg3);
        uVar8 = arg3;
    }
    uVar3 = ((puVar9[1] - arg3) * 100) / uVar7;
    cVar6 = uVar3;
    if ((arg2 != 0) && (cStackX_8 != cVar6)) {
        (**arg2)(*(arg2 + 8),uVar3 & 0xff);
    }
    uVar3 = arg3;
    cStackX_8 = cVar6;
    goto code_r0x0002e7dd;
}


/* fcn.0002239c @ 0x2239c */

uint fcn.0002239c(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int64_t extraout_RAX;
    uint32_t arg1_00;
    
    fcn.0002db1c(*(*0x43c08 + 0x38),CONCAT71(arg2 >> 8,arg1));
    if (extraout_RAX == 0) {
        uVar1 = 0x13;
    }
    else {
        arg1_00 = extraout_RAX;
        uVar1 = fcn.0002ad9c(arg1_00);
        *(arg2 + 4) = uVar1;
        *arg2 = *(extraout_RAX + 0x14);
        *(arg2 + 1) = *(extraout_RAX + 0x50);
        uVar1 = fcn.0002af28(arg1_00);
        *(arg2 + 8) = uVar1;
        uVar1 = fcn.0002afbc(arg1_00);
        *(arg2 + 0xc) = uVar1;
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.0002ae7c @ 0x2ae7c */

uint64_t fcn.0002ae7c(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    ulong *puVar2;
    
    uVar1 = *0x43c08 & 0xffffffffffffff00;
    for (puVar2 = *(*(*0x43c08 + 0x38) + 0x68); (puVar2 != NULL && (puVar2 != CONCAT44(in_register_0000000c,arg1)));
        puVar2 = *puVar2) {
        uVar1 = CONCAT71(uVar1 >> 8,uVar1 + '\x01');
    }
    return uVar1;
}


/* fcn.00024abc @ 0x24abc */

void fcn.00024abc(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    char cVar2;
    uint32_t auStackX_8 [2];
    uint auStackX_18 [2];
    
    uVar1 = *(arg1 + 0x28);
    if ((uVar1 >> 0x18 & 1) != 0) {
        if ((*(arg1 + 0x5c) & 4) != 0) {
            *(arg1 + 0x6c) = 0;
            *(arg1 + 0x68) = 1;
            *(arg1 + 100) = 3;
            return;
        }
        if ((*(arg1 + 0x5c) & 0x40) != 0) {
            *(arg1 + 0x6c) = 0;
            *(arg1 + 0x68) = 1;
            *(arg1 + 100) = 4;
            return;
        }
    }
    cVar2 = fcn.00022af0(arg1);
    if (cVar2 != '\0') {
        *(arg1 + 0x68) = 2;
        *(arg1 + 0x6c) = 9;
        *(arg1 + 100) = 5;
        return;
    }
    cVar2 = fcn.00022bd8(arg1);
    if (cVar2 == '\0') {
        cVar2 = fcn.00022b6c(arg1);
        if (cVar2 != '\0') {
            auStackX_18[0] = 0;
            auStackX_8[0] = 0;
            *(arg1 + 0x68) = 2;
            fcn.000239d4(auStackX_18,auStackX_8);
            if ((auStackX_8[0] >> (arg2 & 0x1f) & 1) == 0) {
                *(arg1 + 0x6c) = 0;
                *(arg1 + 100) = 0xd;
                return;
            }
code_r0x00024b91:
            *(arg1 + 0x6c) = 2;
            *(arg1 + 100) = 10;
            return;
        }
        if ((uVar1 >> 0x10 & 1) != 0) {
            *(arg1 + 0x68) = 0;
            *(arg1 + 0x6c) = 4;
            *(arg1 + 100) = 0xc;
            return;
        }
        if ((uVar1 >> 0x19 & 1) != 0) {
            *(arg1 + 0x6c) = 0;
            *(arg1 + 0x68) = 1;
            *(arg1 + 100) = 0x13;
            return;
        }
        if ((uVar1 & 0x40) == 0) {
            if ((uVar1 & 2) == 0) {
                if ((uVar1 & 1) != 0) {
                    *(arg1 + 0x6c) = 0;
                    *(arg1 + 0x68) = 3;
                    *(arg1 + 100) = 9;
                    return;
                }
                if ((uVar1 & 0x20) == 0) {
                    *(arg1 + 0x68) = 5;
code_r0x00024d52:
                    *(arg1 + 100) = 0x14;
                    *(arg1 + 0x6c) = 0xb;
                    return;
                }
                *(arg1 + 0x68) = 4;
                if ((uVar1 >> 9 & 1) == 0) {
                    *(arg1 + 0x6c) = 10;
                    *(arg1 + 100) = 0x12;
                    return;
                }
            }
            else {
                if ((uVar1 >> 0xf & 1) != 0) {
                    *(arg1 + 0x68) = 6;
                    *(arg1 + 0x6c) = 2;
                    *(arg1 + 100) = 0xb;
                    return;
                }
                *(arg1 + 0x68) = 2;
                *(arg1 + 100) = 6;
                if (uVar1 < '\0') goto code_r0x00024b91;
                if ((uVar1 & 0x10) == 0) {
                    *(arg1 + 0x6c) = 3;
                    *(arg1 + 100) = 0xe;
                    return;
                }
                if ((uVar1 >> 0xb & 1) != 0) {
                    if ((uVar1 >> 0xc & 1) != 0) {
                        *(arg1 + 0x6c) = 6;
                        *(arg1 + 100) = 0xf;
                        return;
                    }
                    if ((uVar1 >> 0xd & 1) == 0) {
                        *(arg1 + 0x6c) = 8;
                        *(arg1 + 100) = 0x11;
                        return;
                    }
                    if ((uVar1 >> 0x12 & 1) == 0) {
                        *(arg1 + 0x6c) = 7;
                        *(arg1 + 100) = 0x10;
                        return;
                    }
                    goto code_r0x00024d52;
                }
                if ((uVar1 & 4) != 0) {
                    *(arg1 + 0x6c) = 1;
                    *(arg1 + 100) = 2;
                    return;
                }
                if ((uVar1 >> 9 & 1) == 0) {
                    *(arg1 + 0x6c) = 0;
                    if (*(arg1 + 0x5a) == '\x01') {
                        *(arg1 + 100) = 7;
                        return;
                    }
                    if (*(arg1 + 0x5a) == '\x02') {
                        *(arg1 + 100) = 8;
                        return;
                    }
                    *(arg1 + 100) = 6;
                    return;
                }
            }
        }
        else {
            *(arg1 + 0x68) = 1;
            if ((uVar1 >> 9 & 1) == 0) goto code_r0x00024b4b;
        }
        *(arg1 + 0x6c) = 5;
        *(arg1 + 100) = 1;
    }
    else {
        *(arg1 + 0x68) = 2;
code_r0x00024b4b:
        *(arg1 + 0x6c) = 0;
        *(arg1 + 100) = 0;
    }
    return;
}


/* fcn.000244f4 @ 0x244f4 */

void fcn.000244f4(int64_t arg1)

{
    char cVar1;
    uint uVar2;
    int64_t arg1_00;
    unkbyte7 in_RDX;
    
    *(arg1 + 0x70) = 0;
    if (*(arg1 + 0x68) != 1) {
        uVar2 = *(arg1 + 0x70);
        if (*(arg1 + 0x6c) != 3) {
            uVar2 = 1;
        }
        *(arg1 + 0x70) = uVar2;
    }
    if ((*(arg1 + 0x5c) & 0x200) != 0) {
        *(arg1 + 0x70) = *(arg1 + 0x70) & 0xfffffffe;
        arg1_00 = fcn.00023894();
        if ((arg1_00 != 0) && (cVar1 = fcn.0002e364(arg1_00,CONCAT71(in_RDX,*(arg1 + 0x59))), cVar1 != '\0')) {
            return;
        }
        *(arg1 + 0x70) = *(arg1 + 0x70) | 2;
    }
    return;
}


/* fcn.00024038 @ 0x24038 */

uchar fcn.00024038(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    uchar uVar3;
    
    iVar2 = fcn.0002db1c(*(*0x43c08 + 0x38),CONCAT71(arg2 >> 8,arg1));
    uVar3 = 0;
    if (iVar2 != 0) {
        cVar1 = fcn.0002b080(iVar2,arg2 & 0xffffffff);
        if (cVar1 != '\0') {
            uVar3 = 1;
        }
    }
    return uVar3;
}


/* fcn.0002b080 @ 0x2b080 */

ulong fcn.0002b080(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    uint8_t uVar4;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint8_t uVar5;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg1_00 + 0x50) < 2) {
        iVar2 = fcn.00024100(CONCAT71(arg1_00 >> 8,*(arg1_00 + 0x14)),arg2);
        uVar5 = 0;
        if ((iVar2 == 0) && (uVar3 = fcn.0002a99c(arg1_00,arg2 & 0xffffffff), 0x65 < uVar3 >> 0xb)) {
            uVar4 = 0;
            if (*(arg1_00 + 0x50) != '\0') {
                do {
                    iVar1 = *(arg1_00 + 0x58 + uVar4 * 8);
                    if (*(iVar1 + 0x4c) != '\0') {
                        return 0;
                    }
                    if ((*(iVar1 + 0x30) >> 0xe & 1) != 0) {
                        return 0;
                    }
                    iVar1 = *(*(iVar1 + 0x38) + 0x28);
                    if (*(iVar1 + 0xc) == 0x10) {
                        return 0;
                    }
                    if (*(iVar1 + 8) - 2U < 2) {
                        return 0;
                    }
                    uVar4 = uVar4 + 1;
                } while (uVar4 < *(arg1_00 + 0x50));
            }
            iVar2 = fcn.0002af28(arg1);
            if ((iVar2 == 0) || (iVar2 == 5)) {
                if (*(arg1_00 + 0x14) != '\0') {
                    do {
                        if (6 < uVar5) {
                            return 0;
                        }
                        if ((*(*(*(arg1_00 + 0x18 + uVar5 * 8) + 0x30) + 0xc0) >> 9 & 1) != 0) {
                            return 0;
                        }
                        uVar5 = uVar5 + 1;
                    } while (uVar5 < *(arg1_00 + 0x14));
                }
                return 1;
            }
        }
    }
    return 0;
}


/* fcn.00024420 @ 0x24420 */

uchar fcn.00024420(uint32_t arg1)

{
    int64_t iVar1;
    uint8_t uVar2;
    
    if (arg1 == 1) {
        iVar1 = fcn.0001f288();
        uVar2 = *(iVar1 + 0x1a);
    }
    else {
        if (arg1 == 0x20) {
            iVar1 = fcn.0001f288();
            if ((*(iVar1 + 0x1a) >> 0x19 & 1) == 0) {
                return 0xff;
            }
            return 1;
        }
        if (arg1 == 2) {
            iVar1 = fcn.0001f288();
            uVar2 = *(iVar1 + 0x1a) >> 1;
        }
        else {
            if (arg1 != 0x10) {
                if (arg1 == 4) {
                    iVar1 = fcn.0001f288();
                    if ((*(iVar1 + 0x1a) >> 4 & 1) == 0) {
                        return 0xff;
                    }
                    return 3;
                }
                if (arg1 != 8) {
                    return 0xff;
                }
                iVar1 = fcn.0001f288();
                if ((*(iVar1 + 0x1a) >> 2 & 1) == 0) {
                    return 0xff;
                }
                return 4;
            }
            iVar1 = fcn.0001f288();
            uVar2 = *(iVar1 + 0x1a) >> 5;
        }
    }
    if ((uVar2 & 1) == 0) {
        return 0xff;
    }
    return 2;
}


/* fcn.0002e364 @ 0x2e364 */

ulong fcn.0002e364(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char cVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    int64_t aiStack_18 [2];
    
    aiStack_18[0] = *(arg1 + 0xa8);
    if (aiStack_18[0] == 0) {
        aiStack_18[0] = *(arg1 + 0xb0);
    }
    uVar4 = 0;
    aiStack_18[1] = *(arg1 + 0xb8);
    while( true ) {
        iVar1 = aiStack_18[uVar4];
        if (((iVar1 != 0) && (*(iVar1 + 0xa0) == 2)) && (cVar2 = fcn.0002ae7c(*(iVar1 + 200)), cVar2 == arg2)) break;
        uVar3 = uVar4 + 1;
        uVar4 = uVar3;
        if (1 < uVar3) {
            return 0;
        }
    }
    return 1;
}


/* fcn.0002a4e8 @ 0x2a4e8 */

uint8_t fcn.0002a4e8(uint32_t arg1)

{
    int64_t iVar1;
    uint8_t uVar2;
    char cVar3;
    uint32_t uVar4;
    uint in_register_0000000c;
    int64_t iVar5;
    uint8_t uVar6;
    uint8_t uVar7;
    
    iVar5 = CONCAT44(in_register_0000000c,arg1);
    uVar7 = 0;
    uVar2 = 0xff;
    uVar6 = 0xff;
    if (*(iVar5 + 0x2c) != '\0') {
        do {
            iVar1 = *(iVar5 + (uVar7 + 7) * 0x10);
            uVar4 = *(iVar1 + 0xc0);
            uVar2 = uVar6;
            if ((uVar4 >> 4 & 1) != 0) {
                if ((uVar4 >> 2 & 1) == 0) {
                    if ((*(iVar5 + 0x28) == 4) && (cVar3 = fcn.0002c5f4(*(iVar5 + 0x18)), cVar3 != '\0')) {
                        uVar2 = uVar7;
                    }
                }
                else if (*(iVar5 + 0x5c) != uVar7) {
                    iVar5 = *(*0x43c08 + 0x38);
                    uVar4 = fcn.0002dac8(iVar5,iVar1);
                    uVar2 = fcn.0002db34(iVar5,uVar4);
                    return uVar2;
                }
            }
            uVar7 = uVar7 + 1;
            uVar6 = uVar2;
        } while (uVar7 < *(iVar5 + 0x2c));
    }
    return uVar2;
}


/* fcn.0002dac8 @ 0x2dac8 */

void fcn.0002dac8(int64_t arg1,uint32_t arg2)

{
    ulong *puVar1;
    uint in_register_00000014;
    
    for (puVar1 = *(arg1 + 0x10); (puVar1 != NULL && (puVar1[6] != CONCAT44(in_register_00000014,arg2)));
        puVar1 = *puVar1) {
    }
    return;
}


/* fcn.0002db34 @ 0x2db34 */

ulong fcn.0002db34(int64_t arg1,uint32_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    char cVar3;
    uint in_register_00000014;
    
    piVar2 = *(arg1 + 0x10);
    if ((CONCAT44(in_register_00000014,arg2) != 0) && (piVar2 != NULL)) {
        cVar3 = '\0';
        piVar1 = piVar2;
        do {
            if (piVar1 == CONCAT44(in_register_00000014,arg2)) {
                return CONCAT71(piVar1 >> 8,cVar3);
            }
            piVar1 = *piVar1;
            cVar3 = cVar3 + '\x01';
            piVar2 = NULL;
        } while (piVar1 != NULL);
    }
    return CONCAT71(piVar2 >> 8,0xff);
}


/* fcn.0002c5f4 @ 0x2c5f4 */

uint32_t fcn.0002c5f4(int64_t arg1)

{
    return *(*(arg1 + 0xc0) + 0x30) >> 4 & 0xffffff01;
}


/* fcn.0002c8b0 @ 0x2c8b0 */

int fcn.0002c8b0(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    unkbyte7 in_RDX;
    uchar uVar4;
    
    uVar4 = *(arg1 + 0x30) >> 4;
    iVar1 = *(*arg1 + 0xd8);
    iVar2 = fcn.0002a25c(*(iVar1 + 0x10),CONCAT71(in_RDX,uVar4) & 0xffffffffffffff01);
    iVar3 = fcn.0002a25c(*(iVar1 + 0x18),CONCAT71(in_RDX,uVar4) & 0xffffffffffffff01);
    if (iVar2 < iVar3) {
        iVar2 = fcn.0002a25c(*(iVar1 + 0x18),CONCAT71(in_RDX,uVar4) & 0xffffffffffffff01);
    }
    return iVar2;
}


/* fcn.0002a25c @ 0x2a25c */

uint fcn.0002a25c(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    
    if ((*(CONCAT44(in_register_0000000c,arg1) + 0x28) & 0x21) == 0) {
        if (*(CONCAT44(in_register_0000000c,arg1) + 8) == 1) {
            return 0;
        }
        if (((*(CONCAT44(in_register_0000000c,arg1) + 8) == 2) && (*(CONCAT44(in_register_0000000c,arg1) + 0x28) == 4)
            ) && (arg2 != '\0')) {
            return 3;
        }
    }
    return *(CONCAT44(in_register_0000000c,arg1) + 8);
}


/* fcn.00029010 @ 0x29010 */

void fcn.00029010(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ushort auStackX_10 [4];
    uint auStackX_18 [4];
    
    auStackX_18[0] = *(*(*(arg1 + 200) + 0x68) + 0x1c);
    auStackX_10[0] = *(*(arg1 + 0xc0) + 0x4a);
    fcn.0001ba1c(arg2,4,auStackX_18,4);
    fcn.0001ba1c(arg2 + 4,2,auStackX_10,2);
    return;
}


/* fcn.0002c140 @ 0x2c140 */

ushort fcn.0002c140(int64_t param_1)

{
    uint auStackX_10 [2];
    uint auStackX_18 [4];
    
    auStackX_10[0] = 0;
    auStackX_18[0] = 0;
    fcn.0002bf3c(param_1,auStackX_10,auStackX_18);
    return CONCAT11(auStackX_10[0],auStackX_18[0]);
}


/* fcn.0002bf3c @ 0x2bf3c */

void fcn.0002bf3c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    
    iVar2 = fcn.0002c19c(arg1);
    if (iVar2 != 2) {
        iVar3 = *(arg1 + 0xd8);
        if ((((*(iVar3 + 0xc) == 1) && (*(iVar3 + 0x40) == 3)) && (*(*(iVar3 + 0x10) + 0x28) == 0x10)) &&
           (*(*(iVar3 + 0x18) + 0x28) == 0x20)) {
            *arg2 = 1;
            *arg3 = 1;
        }
        goto code_r0x0002c032;
    }
    iVar3 = *(arg1 + 0xd8);
    if (*(iVar3 + 0xc) == 1) {
        iVar3 = *(iVar3 + 0x18);
    }
    else {
        iVar3 = *(iVar3 + 0x10);
    }
    iVar2 = (*(iVar3 + 0x5c) == *(arg1 + 0xfc)) + 1;
    *arg2 = iVar2;
    iVar3 = *(arg1 + 0xd8);
    if ((*(iVar3 + 0xc) == 1) && (*(iVar3 + 0x40) == 1)) {
        *arg3 = 1;
    }
    else {
        iVar1 = *(arg1 + 0xf8);
        if (iVar1 == 2) {
            if (iVar2 == 2) goto code_r0x0002bfc8;
            if (iVar2 == 1) {
                if (*(iVar3 + 0x54) != 1) {
                    *(arg1 + 0xf8) = 0;
                    *arg3 = 0;
                    goto code_r0x0002c032;
                }
                *(arg1 + 0xf8) = 5;
                *arg3 = 5;
            }
            else {
code_r0x0002c032:
                if (*arg3 == 1) goto code_r0x0002c040;
            }
        }
        else {
            if ((iVar1 != 5) || (iVar2 != 2)) {
                *arg3 = iVar1;
                goto code_r0x0002c032;
            }
code_r0x0002bfc8:
            *(arg1 + 0xf8) = 0;
            *arg3 = 0;
        }
        if (*(arg1 + 0xf8) != 1) goto code_r0x0002c091;
    }
code_r0x0002c040:
    iVar3 = *(*(arg1 + 0xd8) + 0x10);
    if (((*(*(iVar3 + (*(arg1 + 0xfc) + 7) * 0x10) + 0xc0) >> 4 & 1) == 0) ||
       ((*(*(iVar3 + ((*(arg1 + 0xfc) ^ 1) + 7) * 0x10) + 0xc0) >> 4 & 1) == 0)) {
        *arg3 = 3;
        *(arg1 + 0xf8) = 3;
    }
code_r0x0002c091:
    if ((*arg2 == 1) && (*(*(arg1 + 0xd8) + 0x54) == 1)) {
        *(arg1 + 0xf8) = 5;
    }
    return;
}


/* fcn.000247dc @ 0x247dc */

void fcn.000247dc(uint32_t arg1)

{
    uint16_t uVar1;
    int iVar2;
    int iVar3;
    char cVar4;
    uint32_t uVar5;
    uint in_register_0000000c;
    int64_t iVar6;
    
    iVar6 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = *(iVar6 + 0x24);
    iVar3 = *(iVar6 + 0x54);
    uVar1 = *(iVar6 + 0x38);
    if ((*(iVar6 + 0x34) >> 0xd & 1) != 0) {
        *(iVar6 + 0x5c) = 0x1f;
        return;
    }
    uVar5 = *(iVar6 + 0x34) >> 0xe;
    if (((uVar5 & 1) != 0) && (*(iVar6 + 0x4c) == 4)) {
        *(iVar6 + 0x5c) = 0x20;
        return;
    }
    if (((uVar5 & 1) == 0) || (*(iVar6 + 0x4c) != 5)) {
        if ((*(iVar6 + 0x48) - 10U < 2) ||
           (((uVar5 & 1) != 0 &&
            (((*(*0x43c08 + 0x1ed0) == '\0' || (cVar4 = fcn.00022464(), cVar4 == '\n')) ||
             (cVar4 = fcn.00022464(), cVar4 == '\v')))))) {
            *(iVar6 + 0x5c) = 0x1e;
            return;
        }
        if (iVar2 == 0) {
            if (*(iVar6 + 0x2c) != 0) {
code_r0x00024947:
                if (uVar1 == '\x01') {
                    *(iVar6 + 0x5c) = 0x1d;
                    return;
                }
                if (iVar3 == 0) {
                    *(iVar6 + 0x5c) = 0x22;
                    return;
                }
                if (iVar3 == 1) {
                    *(iVar6 + 0x5c) = 0x18;
                    return;
                }
                if (iVar3 != 2) {
                    if (iVar3 == 3) {
                        *(iVar6 + 0x5c) = 0x24;
                        return;
                    }
                    if (iVar3 != 4) {
                        return;
                    }
                    *(iVar6 + 0x5c) = 0x25;
                    return;
                }
                *(iVar6 + 0x5c) = 0x23;
                return;
            }
            if ((iVar3 == 0) && (uVar1 == 0)) goto code_r0x000248a0;
        }
        else if (*(iVar6 + 0x2c) != 0) goto code_r0x00024947;
        if (iVar2 == 0) {
            if ((*(iVar6 + 0x14) == 0x10) && ((uVar1 & 0xff00) == 0)) {
                *(iVar6 + 0x5c) = 0x21;
                return;
            }
code_r0x000248a0:
            *(iVar6 + 0x5c) = 0x15;
            return;
        }
        if (iVar2 == 1) {
            *(iVar6 + 0x5c) = 0x19;
            return;
        }
        if (iVar2 == 2) {
            if ((uVar1 >> 8) - 1 < 2) {
                *(iVar6 + 0x5c) = 0x1a;
            }
            else {
                *(iVar6 + 0x5c) = 0x17;
            }
            if ((*(iVar6 + 0x3a) & 2) != 0) {
                *(iVar6 + 0x5c) = 0x1b;
                return;
            }
            if ((*(iVar6 + 0x3a) & 1) == 0) {
                return;
            }
            *(iVar6 + 0x5c) = 0x1c;
            return;
        }
        if (iVar2 != 3) {
            *(iVar6 + 0x5c) = 0x26;
            return;
        }
    }
    *(iVar6 + 0x5c) = 0x16;
    return;
}


/* fcn.00024768 @ 0x24768 */

uint64_t fcn.00024768(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    uint64_t in_RAX;
    uint64_t uVar3;
    
    iVar1 = *(arg1 + 0x14);
    if (iVar1 != 1) {
        if (iVar1 == 2) {
            *(arg1 + 0x60) = 0x2a;
            return in_RAX;
        }
        if (iVar1 == 4) {
            *(arg1 + 0x60) = 0x2b;
            return in_RAX;
        }
        if (iVar1 == 8) {
            *(arg1 + 0x60) = 0x2c;
            return in_RAX;
        }
        if (iVar1 == 0x10) {
            uVar2 = *(arg1 + 0x34) & 0x800;
            *(arg1 + 0x60) = (uVar2 != 0) + 0x27;
            return -uVar2;
        }
        if (iVar1 != 0x20) {
            return in_RAX;
        }
    }
    *(arg1 + 0x60) = 0x29;
    uVar3 = *(arg1 + 0x60);
    if ((*(arg1 + 0x34) >> 0xe & 1) != 0) {
        uVar3 = 0x2d;
    }
    *(arg1 + 0x60) = uVar3;
    return uVar3;
}


/* fcn.000249c0 @ 0x249c0 */

void fcn.000249c0(uint32_t arg1)

{
    uint16_t uVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if ((*(iVar2 + 0x14) & 0x12) != 0) {
        *(iVar2 + 100) = 0x2e;
        return;
    }
    uVar1 = *(iVar2 + 0x20);
    if (uVar1 < 0x101) {
        if (uVar1 == 0x100) {
            *(iVar2 + 100) = 0x36;
            return;
        }
        if (uVar1 == 2) {
            *(iVar2 + 100) = 0x2f;
            return;
        }
        if (uVar1 == 4) {
            *(iVar2 + 100) = 0x30;
            return;
        }
        if (uVar1 == 8) {
            *(iVar2 + 100) = 0x31;
            return;
        }
        if (uVar1 == 0x10) {
            *(iVar2 + 100) = 0x32;
            return;
        }
        if (uVar1 == 0x20) {
            *(iVar2 + 100) = 0x33;
            return;
        }
        if (uVar1 == 0x40) {
            *(iVar2 + 100) = 0x34;
            return;
        }
        if (uVar1 == 0x80) {
            *(iVar2 + 100) = 0x35;
            return;
        }
    }
    else {
        if (uVar1 == 0x200) {
            *(iVar2 + 100) = 0x37;
            return;
        }
        if (uVar1 == 0x400) {
            *(iVar2 + 100) = 0x38;
            return;
        }
        if (uVar1 == 0x800) {
            *(iVar2 + 100) = 0x39;
            return;
        }
        if (uVar1 == 0x1000) {
            *(iVar2 + 100) = 0x3a;
            return;
        }
        if (uVar1 == 0x2000) {
            *(iVar2 + 100) = 0x3b;
            return;
        }
        if (uVar1 == 0x4000) {
            *(iVar2 + 100) = 0x3c;
            return;
        }
        if (uVar1 == 0x8000) {
            *(iVar2 + 100) = 0x3d;
            return;
        }
    }
    *(iVar2 + 100) = 0x2e;
    return;
}


/* fcn.000246c4 @ 0x246c4 */

void fcn.000246c4(int64_t arg1)

{
    uint8_t uVar1;
    
    uVar1 = *(arg1 + 0x48);
    if (uVar1 < 7) {
        if (uVar1 == 6) {
            *(arg1 + 0x68) = 0x45;
            return;
        }
        if (uVar1 != 0) {
            if (uVar1 == 1) {
                *(arg1 + 0x68) = 0x40;
                return;
            }
            if (uVar1 == 2) {
                *(arg1 + 0x68) = 0x41;
                return;
            }
            if (uVar1 == 3) {
                *(arg1 + 0x68) = 0x42;
                return;
            }
            if (uVar1 == 4) {
                *(arg1 + 0x68) = 0x43;
                return;
            }
            if (uVar1 == 5) {
                *(arg1 + 0x68) = 0x44;
                return;
            }
        }
    }
    else {
        if (uVar1 == 7) {
            *(arg1 + 0x68) = 0x46;
            return;
        }
        if (uVar1 == 8) {
            *(arg1 + 0x68) = 0x47;
            return;
        }
        if (uVar1 == 9) {
            *(arg1 + 0x68) = 0x48;
            return;
        }
        if (uVar1 == 10) {
            *(arg1 + 0x68) = 0x49;
            return;
        }
        if (uVar1 == 0xb) {
            *(arg1 + 0x68) = 0x4a;
            return;
        }
    }
    *(arg1 + 0x68) = 0x3f;
    return;
}


/* fcn.00024548 @ 0x24548 */

void fcn.00024548(uint32_t arg1,int64_t arg2)

{
    uchar uVar1;
    char cVar2;
    int iVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    uint8_t *arg1_00;
    int64_t arg1_01;
    ulong uVar5;
    unkbyte7 Var6;
    uint8_t uVar7;
    unkbyte7 in_R8;
    
    Var6 = arg2 >> 8;
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar1 = arg2;
    if (*(iVar4 + 0x14) != 0x20) {
        *(iVar4 + 0x70) = 1;
    }
    if ((*(iVar4 + 0x34) & 0x2000) == 0) {
        uVar7 = 0;
        arg1_00 = *(*0x43c08 + 0x38);
        if (*arg1_00 != 0) {
            do {
                arg1_00 = CONCAT71(arg1_00 >> 8,uVar1);
                iVar3 = fcn.000228ac(arg1_00,CONCAT71(Var6,uVar7),CONCAT71(in_R8,1));
                if (iVar3 == 0) {
                    *(iVar4 + 0x70) = *(iVar4 + 0x70) | 0x20;
                    break;
                }
                uVar7 = uVar7 + 1;
                arg1_00 = *(*0x43c08 + 0x38);
            } while (uVar7 < *arg1_00);
        }
        arg1_01 = CONCAT71(arg1_00 >> 8,uVar1);
        cVar2 = fcn.00024324(arg1_01);
        if (cVar2 != '\0') {
            *(iVar4 + 0x70) = *(iVar4 + 0x70) | 0x40;
        }
        if (*(iVar4 + 0x48) != '\0') {
            *(iVar4 + 0x70) = *(iVar4 + 0x70) | 8;
            if (*(iVar4 + 0x14) == 0x20) {
                *(iVar4 + 0x70) = *(iVar4 + 0x70) & 0xfffffffe;
            }
            if (((1 < *(iVar4 + 0x48) - 10U) && (*(iVar4 + 0x49) != '\0')) && (*(iVar4 + 0x24) != 3)) {
                *(iVar4 + 0x70) = *(iVar4 + 0x70) | 0x10;
            }
        }
        uVar5 = CONCAT71(arg1_01 >> 8,uVar1);
        cVar2 = fcn.000241a8(uVar5,CONCAT71(Var6,2));
        if (cVar2 != '\0') {
            *(iVar4 + 0x70) = *(iVar4 + 0x70) | 4;
        }
        cVar2 = fcn.000241a8(CONCAT71(uVar5 >> 8,uVar1),CONCAT71(Var6,3));
        if (cVar2 != '\0') {
            *(iVar4 + 0x70) = *(iVar4 + 0x70) | 2;
        }
    }
    return;
}


/* fcn.00024388 @ 0x24388 */

uchar fcn.00024388(uint32_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    
    if (arg1 == 1) {
        iVar1 = fcn.0001f288();
        uVar2 = *(iVar1 + 0x1a);
code_r0x00024399:
        if ((uVar2 & 1) != 0) {
            iVar1 = fcn.0001f288();
            return *(iVar1 + 0x14);
        }
    }
    else {
        if (arg1 == 0x20) {
            iVar1 = fcn.0001f288();
            if ((*(iVar1 + 0x1a) >> 0x19 & 1) == 0) {
                return 0;
            }
            return 1;
        }
        if (arg1 == 2) {
            iVar1 = fcn.0001f288();
            uVar2 = *(iVar1 + 0x1a) >> 1;
        }
        else {
            if (arg1 != 0x10) {
                if (arg1 != 4) {
                    if (arg1 != 8) {
                        return 0;
                    }
                    iVar1 = fcn.0001f288();
                    if ((*(iVar1 + 0x1a) >> 2 & 1) == 0) {
                        return 0;
                    }
                    return 4;
                }
                iVar1 = fcn.0001f288();
                uVar2 = *(iVar1 + 0x1a) >> 4;
                goto code_r0x00024399;
            }
            iVar1 = fcn.0001f288();
            uVar2 = *(iVar1 + 0x1a) >> 5;
        }
        if ((uVar2 & 1) != 0) {
            return 2;
        }
    }
    return 0;
}


/* fcn.00022490 @ 0x22490 */

uint fcn.00022490(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int64_t iVar1;
    
    fcn.00028ee4(*0x43c08,CONCAT62(arg2 >> 0x10,CONCAT11(arg2 >> 8,arg1)));
    if (arg1_00 != 0) {
        if (arg2 == 1) {
            iVar1 = fcn.0002c0fc(arg1_00);
            if (iVar1 != 0) {
                iVar1 = fcn.0002c0fc(arg1_00);
code_r0x000224ce:
                return *(iVar1 + 0xc0);
            }
        }
        else if ((arg2 == 2) && (iVar1 = fcn.0002c11c(arg1_00), iVar1 != 0)) {
            iVar1 = fcn.0002c11c(arg1_00);
            goto code_r0x000224ce;
        }
    }
    return 0;
}


/* fcn.00024324 @ 0x24324 */

ulong fcn.00024324(int64_t arg1)

{
    int64_t arg1_00;
    int iVar1;
    int64_t iVar2;
    char acStackX_8 [8];
    
    arg1_00 = *(*(*0x43c08 + 0x38) + 0x38 + (arg1 & 0xffU) * 8);
    iVar2 = arg1_00;
    iVar1 = fcn.0002c8b0(arg1_00);
    if ((((iVar1 == 3) && (*(*(*(arg1_00 + 0x38) + 0x28) + 0xc) != 1)) &&
        (iVar1 = fcn.00023ac0(CONCAT71(iVar2 >> 8,arg1),acStackX_8), iVar1 == 0)) && (acStackX_8[0] != -1)) {
        return 1;
    }
    return 0;
}


/* fcn.000241a8 @ 0x241a8 */

ulong fcn.000241a8(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong *arg1_00;
    int64_t iVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint8_t uVar7;
    bool bVar8;
    
    uVar6 = arg2 & 0xff;
    if (arg1 < *(*(*0x43c08 + 0x38) + 0x30)) {
        arg1_00 = *(*(*0x43c08 + 0x38) + 0x38 + arg1 * 8);
        uVar1 = *(arg1_00 + 6);
        iVar2 = *(arg1_00[7] + 0x28);
        iVar5 = fcn.0002c8b0(arg1_00);
        if (*(iVar2 + 0xc) != 0x10) {
            return 0;
        }
        if (iVar5 == 3) {
            return 0;
        }
        if ((uVar1 >> 0xd & 1) != 0) {
            return 0;
        }
        uVar4 = fcn.0002c140(*arg1_00);
        uVar7 = 0;
        bVar8 = false;
        uVar3 = uVar4 >> 8;
        if ((iVar5 == 2) && ((*(*(*(iVar2 + 0x40 + *(iVar2 + 0x39) * 8) + 0x30) + 0xc0) >> 4 & 1) == 0)) {
            uVar7 = (uVar3 != 1) + 1;
            bVar8 = uVar3 == 1;
        }
        if (uVar6 == 2) {
            if (bVar8) {
                return 0;
            }
            uVar6 = fcn.00022490(arg1 & 0xff,2);
            if ((uVar6 & 0x84) == 4) {
                return 0;
            }
            if ((uVar6 >> 0x18 & 1) != 0) {
                return 0;
            }
            if ((uVar3 == 1) && ((uVar4 - 1 & 0xfffffffd) == 0)) {
                return 0;
            }
            if ((uVar1 >> 0xb & 1) == 0) {
                return 1;
            }
            bVar8 = uVar3 == 2;
        }
        else {
            if (uVar6 != 3) {
                return 0;
            }
            if ((uVar7 & 2) != 0) {
                return 0;
            }
            uVar6 = fcn.00022490(arg1 & 0xff,1);
            if ((uVar6 & 0x84) == 4) {
                return 0;
            }
            if ((uVar6 >> 0x18 & 1) != 0) {
                return 0;
            }
            if ((uVar3 == 2) && ((uVar4 - 1 & 0xfffffffd) == 0)) {
                return 0;
            }
            if ((uVar1 >> 0xb & 1) == 0) {
                return 1;
            }
            bVar8 = uVar3 == 1;
        }
        if (!bVar8) {
            return 1;
        }
    }
    return 0;
}


/* fcn.00022464 @ 0x22464 */

uint64_t fcn.00022464(void)

{
    int64_t iVar1;
    
    if (*(*0x43c08 + 0x1ed0) != '\0') {
        iVar1 = *(*(*0x429d0 + 0x238) + 0xc0);
        return CONCAT71(iVar1 >> 8,*(iVar1 + 0x4c));
    }
    return *0x43c08 & 0xffffffffffffff00;
}


/* fcn.00022af0 @ 0x22af0 */

bool fcn.00022af0(int64_t arg1)

{
    int64_t iVar1;
    uint8_t uVar2;
    uchar auStack_88 [48];
    char cStack_58;
    char cStack_40;
    
    uVar2 = 0;
    iVar1 = arg1;
    if (*(*(*0x43c08 + 0x38) + 0x30) != '\0') {
        do {
            fcn.00023d7c(CONCAT71(iVar1 >> 8,uVar2),auStack_88);
            if (cStack_58 == *(arg1 + 0x59)) {
                return cStack_40 - 10U < 2;
            }
            uVar2 = uVar2 + 1;
            iVar1 = *(*0x43c08 + 0x38);
        } while (uVar2 < *(iVar1 + 0x30));
    }
    return false;
}


/* fcn.00022bd8 @ 0x22bd8 */

ulong fcn.00022bd8(int64_t arg1)

{
    int64_t iVar1;
    uint8_t uVar2;
    uchar auStack_88 [20];
    int iStack_74;
    char cStack_58;
    char cStack_40;
    
    uVar2 = 0;
    iVar1 = arg1;
    if (*(*(*0x43c08 + 0x38) + 0x30) != '\0') {
        do {
            fcn.00023d7c(CONCAT71(iVar1 >> 8,uVar2),auStack_88);
            if (cStack_58 == *(arg1 + 0x59)) {
                if (iStack_74 != 0x20) {
                    return 0;
                }
                if (cStack_40 == '\0') {
                    return 0;
                }
                return 1;
            }
            uVar2 = uVar2 + 1;
            iVar1 = *(*0x43c08 + 0x38);
        } while (uVar2 < *(iVar1 + 0x30));
    }
    return 0;
}


/* fcn.00022b6c @ 0x22b6c */

uint64_t fcn.00022b6c(int64_t arg1)

{
    int64_t iVar1;
    uint8_t uVar2;
    uchar auStack_88 [48];
    char cStack_58;
    uint32_t uStack_54;
    
    uVar2 = 0;
    iVar1 = arg1;
    if (*(*(*0x43c08 + 0x38) + 0x30) != '\0') {
        do {
            fcn.00023d7c(CONCAT71(iVar1 >> 8,uVar2),auStack_88);
            if ((cStack_58 == *(arg1 + 0x59)) && ((uStack_54 >> 0xe & 1) != 0)) {
                return CONCAT71(uStack_54 >> 0x16,1);
            }
            uVar2 = uVar2 + 1;
            iVar1 = *(*0x43c08 + 0x38);
        } while (uVar2 < *(iVar1 + 0x30));
    }
    return *0x43c08 & 0xffffffffffffff00;
}


/* fcn.00025280 @ 0x25280 */

bool fcn.00025280(int64_t arg1)

{
    int64_t *piVar1;
    char cVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uchar auStack_208 [512];
    
    if (arg1 != 0) {
        iVar4 = *(arg1 + 0x30);
        if ((*(iVar4 + 0xc0) >> 4 & 1) != 0) {
            if ((((*(iVar4 + 0xc0) >> 6 & 1) == 0) || (iVar4 == 0)) ||
               (cVar2 = fcn.0002e928(auStack_208,iVar4), cVar2 == '\0')) {
                if ((*(*(arg1 + 0x30) + 0xc0) >> 8 & 1) != 0) {
                    iVar4 = *(arg1 + 0x28);
                    uVar3 = 0;
                    if (iVar4 != 0) {
                        for (; uVar3 < *(iVar4 + 0x50); uVar3 = uVar3 + 1) {
                            piVar1 = *(iVar4 + 0x58 + uVar3 * 8);
                            if (((piVar1 != NULL) && (*piVar1 != 0)) &&
                               (cVar2 = fcn.0002e928(auStack_208,*piVar1), cVar2 != '\0')) {
                                iVar4 = *piVar1;
                                goto code_r0x0002532d;
                            }
                        }
                    }
                }
            }
            else {
                iVar4 = *(arg1 + 0x30);
code_r0x0002532d:
                if (iVar4 != 0) {
                    fcn.0001ba7c(auStack_208,0,0x200);
                    cVar2 = fcn.0002ebe4(iVar4,auStack_208);
                    return cVar2 == '\0';
                }
            }
        }
    }
    return false;
}


/* fcn.0002cc80 @ 0x2cc80 */

int64_t fcn.0002cc80(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    
    iVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x38);
    if (((*(*(iVar1 + 0x28) + 0xc) & 0x32) == 0) ||
       ((iVar1 = 0, *(CONCAT44(in_register_0000000c,arg1) + 0x4c) != '\0' &&
        ((*(CONCAT44(in_register_0000000c,arg1) + 0x4d) & 1) != 0)))) {
        iVar1 = CONCAT71(iVar1 >> 8,1);
    }
    return iVar1;
}


/* fcn.0002d15c @ 0x2d15c */

void fcn.0002d15c(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    uchar auStack_258 [80];
    uchar auStack_208 [512];
    
    uVar1 = 0;
    fcn.0001ba7c(auStack_208,0,0x200);
    fcn.00027808(auStack_258);
    fcn.000287c8(*0x43c08,CONCAT71(uVar1 >> 8,0x2a),0,0x200);
    if (arg1 == 0) {
        fcn.00030910(arg2,auStack_258);
    }
    else {
        (***arg1)(arg1);
    }
    return;
}


/* fcn.00025aa4 @ 0x25aa4 */

bool fcn.00025aa4(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    
    return arg2 == *(CONCAT44(in_register_0000000c,arg1) + 0x238);
}


/* fcn.000214cc @ 0x214cc */

uint fcn.000214cc(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t arg1_00;
    uint32_t uVar2;
    uint uVar3;
    
    iVar1 = *(*(*(*(*0x43c08 + 0x38) + 0x38 + (arg1 & 0xffU) * 8) + 8) + 0x18 + (arg2 & 0xffU) * 8);
    if (iVar1 == 0) {
        return 0xf;
    }
    arg1_00 = *(iVar1 + 0x30);
    uVar2 = *(arg1_00 + 0xc0);
    if (((uVar2 >> 2 & 1) == 0) || ((uVar2 >> 7 & 1) != 0)) {
        if ((uVar2 & 0x84) == 0) {
            if ((uVar2 >> 4 & 1) != 0) goto code_r0x00021559;
            if (*(arg1_00 + 0xc0) < '\0') {
                uVar2 = *(arg1_00 + 0xc0) & 0xffffff7f;
                goto code_r0x00021524;
            }
        }
        else {
            uVar2 = uVar2 & 0xffffff7b;
code_r0x00021524:
            *(arg1_00 + 0xc0) = uVar2;
            fcn.000277c4(arg1_00);
        }
        (****(iVar1 + 0x40))(*(iVar1 + 0x40),1);
        uVar3 = 0;
    }
    else {
code_r0x00021559:
        uVar3 = 0x10;
    }
    return uVar3;
}


/* fcn.00024f58 @ 0x24f58 */

uint fcn.00024f58(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint uVar5;
    int64_t iVar6;
    int64_t iVar7;
    
    iVar6 = fcn.00028ee4(*0x43c08,CONCAT71(arg2 >> 8,arg1));
    if (iVar6 == 0) {
        uVar5 = 0xe;
    }
    else {
        iVar1 = *(iVar6 + 200);
        if (iVar1 == 0) {
            uVar5 = 0x13;
        }
        else {
            iVar2 = *(iVar1 + 0x18 + (arg2 & 0xffU) * 8);
            if (iVar2 == 0) {
                uVar5 = 0xf;
            }
            else {
                iVar7 = (arg2 & 0xffU) + 7;
                iVar3 = *(*(*0x43c08 + 0x38) + 0x38 + (arg1 & 0xffU) * 8);
                iVar4 = *(*(iVar6 + 0xd8) + 0x10);
                *(iVar4 + 8) = 0;
                if (*(iVar4 + 8 + iVar7 * 0x10) != '\0') {
                    *(iVar4 + 8 + iVar7 * 0x10) = 0;
                    iVar4 = *(iVar2 + 0x30);
                    if (((*(iVar4 + 0xc0) >> 7 & 1) != 0) && ((*(iVar4 + 0xc0) & 0x84) != 0)) {
                        *(iVar4 + 0xc0) = *(iVar4 + 0xc0) & 0xffffff7b;
                        fcn.000277c4(iVar4);
                    }
                }
                iVar6 = *(*(iVar6 + 0xd8) + 0x18);
                *(iVar6 + 8) = 0;
                if (*(iVar6 + 8 + iVar7 * 0x10) != '\0') {
                    *(iVar6 + 8 + iVar7 * 0x10) = 0;
                    iVar6 = *(iVar2 + 0x30);
                    if (((*(iVar6 + 0xc0) >> 7 & 1) != 0) && ((*(iVar6 + 0xc0) & 0x84) != 0)) {
                        *(iVar6 + 0xc0) = *(iVar6 + 0xc0) & 0xffffff7b;
                        fcn.000277c4(iVar6);
                    }
                }
                *(*(*(iVar3 + 0x38) + 0x30) + 8) = 0;
                *(*(*(iVar3 + 0x38) + 0x28) + 8) = 0;
                (****(iVar1 + 0x68))(*(iVar1 + 0x68),1);
                uVar5 = 0;
            }
        }
    }
    return uVar5;
}


/* fcn.0002141c @ 0x2141c */

uint fcn.0002141c(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint uVar5;
    
    iVar2 = *(*(*(*0x43c08 + 0x38) + 0x38 + (arg1 & 0xffU) * 8) + 8);
    if (iVar2 == 0) {
        uVar5 = 0x13;
    }
    else {
        iVar3 = *(iVar2 + 0x18 + (arg2 & 0xffU) * 8);
        if (iVar3 == 0) {
            uVar5 = 0xf;
        }
        else {
            iVar4 = *(iVar3 + 0x30);
            uVar1 = *(iVar4 + 0xc0);
            if (((uVar1 >> 4 & 1) == 0) || ((uVar1 & 0xc4) != 0)) {
                uVar5 = 0x10;
            }
            else {
                if ((uVar1 & 0x84) != 0x84) {
                    *(iVar4 + 0xc0) = uVar1 | 0x84;
                    fcn.000277c4(iVar4);
                }
                iVar4 = *(iVar3 + 0x30);
                if ((*(iVar4 + 0xc0) & 1) != 0) {
                    *(iVar4 + 0xc0) = *(iVar4 + 0xc0) & 0xfffffffe;
                    fcn.000277c4(iVar4);
                }
                fcn.0002ac18(iVar2,*(iVar3 + 0x30));
                uVar5 = 0;
            }
        }
    }
    return uVar5;
}


/* fcn.0002de64 @ 0x2de64 */

ulong fcn.0002de64(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    char cVar2;
    
    *arg3 = 0;
    cVar2 = fcn.00025aa4(*0x429d0,*arg2);
    if (cVar2 != '\0') {
        fcn.00025a70(*0x429d0);
    }
    cVar2 = fcn.0002cba0(arg2);
    if (((cVar2 == '\0') || (*(arg2 + 0x4c) == '\0')) || ((*(*arg2 + 0x8c) & 0x200) != 0)) {
        *(arg2 + 0x4c) = 0;
        *(arg2 + 0x50) = 0;
        *(arg2 + 0x54) = 0;
        puVar1 = *(*(arg2 + 8) + 0x68);
        (***puVar1)(puVar1,1);
    }
    else {
        fcn.0002d8d0(arg1,arg2);
        *arg3 = 1;
    }
    return 0;
}


/* fcn.00025b04 @ 0x25b04 */

int16_t fcn.00025b04(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    char cVar2;
    int16_t iVar3;
    int16_t iVar4;
    uint64_t arg1_00;
    uchar auStackX_18 [6];
    uint8_t uStackX_1e;
    uint32_t auStack_68 [16];
    
    arg1_00 = arg2 & 0xffffffff;
    cVar2 = fcn.000259a0(arg1);
    if (cVar2 == '\0') {
        iVar3 = 0;
    }
    else {
        if (*(*0x429d0 + 0x156) == 0) {
            uVar1 = *(*0x429d0 + 0x152);
        }
        else {
            uVar1 = *(*0x429d0 + 0x14e);
        }
        fcn.0002fe1c(auStack_68,0x200,uVar1,*(*0x429d0 + 0x1a6));
        iVar4 = 0;
        do {
            if (*(arg1 + 0x1a6) <= arg1_00) break;
            iVar3 = fcn.000300fc(auStack_68,arg1_00,auStackX_18);
            if (iVar3 != 0) goto code_r0x00025c0c;
            if ((uStackX_1e & 2) != 0) {
                iVar3 = fcn.0002ec94(arg1_00,auStackX_18,*(arg1 + 0x238));
                if (iVar3 != 0) goto code_r0x00025c0c;
                iVar3 = fcn.0003013c(auStack_68,arg1_00,auStackX_18);
                if (iVar3 != 0) goto code_r0x00025c0c;
            }
            iVar4 = iVar4 + 1;
            arg1_00 = arg1_00 + 1;
        } while (iVar4 < 0x200);
        iVar3 = fcn.0002ff20(auStack_68);
        if (iVar3 == 0) {
            iVar3 = 0;
        }
code_r0x00025c0c:
        fcn.0002fca4(auStack_68[0]);
    }
    return iVar3;
}


/* fcn.000254cc @ 0x254cc */

bool fcn.000254cc(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint8_t *arg1_00;
    uint8_t uVar4;
    
    iVar2 = fcn.00028f2c(*0x43c08,arg1);
    if (iVar2 != 0) {
        uVar4 = 0;
        iVar2 = *(*(iVar2 + 200) + 0x18);
        arg1_00 = *(*0x43c08 + 0x38);
        if (*arg1_00 != 0) {
            do {
                arg1_00 = arg1_00 + 0x10;
                arg1 = CONCAT71(arg1 >> 8,uVar4);
                iVar3 = fcn.0002b5b0(arg1_00,arg1);
                if (iVar2 == iVar3) break;
                arg1_00 = *(*0x43c08 + 0x38);
                uVar4 = uVar4 + 1;
            } while (uVar4 < *arg1_00);
        }
        if (uVar4 != **(*0x43c08 + 0x38)) {
            iVar1 = fcn.00024de0(CONCAT71(arg1_00 >> 8,uVar4));
            return iVar1 == 0;
        }
    }
    return false;
}


/* fcn.00026888 @ 0x26888 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_ch

uchar fcn.00026888(int64_t arg1)

{
    int64_t iVar1;
    uchar uVar2;
    int16_t iVar3;
    int64_t iStack_48;
    uchar uStack_40;
    ushort uStack_3e;
    int64_t var_30h;
    int8_t var_28h;
    int16_t var_26h;
    int64_t var_20h;
    int64_t var_bp_18h;
    int32_t var_ch;
    uint32_t var_bp_8h;
    int8_t var_4h;
    
    uVar2 = 0;
    iStack_48 = 0;
    uStack_40 = 0;
    uStack_3e = 1;
    fcn.0002fdc8(&iStack_48,0);
    iVar1 = iStack_48;
    if (iStack_48 != 0) {
        var_20h._4_4_ = 0x200;
        iVar3 = 0;
        _var_28h = iStack_48;
        var_bp_18h._4_1_ = 0x28;
        do {
            var_30h = iVar3 * 0x10 + *arg1;
            (****(*0x429d0 + 0x240))(*(*0x429d0 + 0x240),&var_30h);
            if (var_bp_18h == 0) {
                fcn.0001ba1c(arg1 + 4,0x1ec,iVar1,0x1ec);
                uVar2 = 1;
                break;
            }
            iVar3 = iVar3 + 1;
            uVar2 = 0;
        } while (iVar3 < 2);
    }
    fcn.0002fca4(iStack_48);
    return uVar2;
}


/* fcn.0002c7e4 @ 0x2c7e4 */

void fcn.0002c7e4(int64_t arg1)

{
    uint8_t uVar1;
    
    uVar1 = *(arg1 + 0x4c);
    if ((uVar1 == 1) || ((uVar1 != 2 && (((uVar1 == 3 || (uVar1 < 5)) || ((7 < uVar1 && (uVar1 != 10)))))))) {
        *(arg1 + 0x4c) = 0xb;
    }
    else {
        *(arg1 + 0x4c) = 10;
    }
    *(*arg1 + 0x8c) = *(*arg1 + 0x8c) | 0x80000000;
    //WARNING: Could not recover jumptable at 0x0002c821. Too many branches
    //WARNING: Treating indirect jump as call
    (****(*(arg1 + 8) + 0x68))();
    return;
}


/* fcn.0002c824 @ 0x2c824 */

void fcn.0002c824(int64_t arg1)

{
    ulong *puVar1;
    int iVar2;
    
    iVar2 = *(arg1 + 0x4c) - 10;
    if (iVar2 == 0) {
        *(arg1 + 0x4c) = 5;
    }
    else {
        if (iVar2 != 1) {
            return;
        }
        *(arg1 + 0x4c) = 3;
    }
    *(*arg1 + 0x8c) = *(*arg1 + 0x8c) & 0x7fffffff;
    puVar1 = *(*(arg1 + 8) + 0x68);
    (***puVar1)(puVar1,CONCAT71(iVar2 >> 8,1));
    return;
}


/* fcn.000259e8 @ 0x259e8 */

ulong fcn.000259e8(int64_t arg1)

{
    int16_t iVar1;
    int64_t iVar2;
    int64_t in_RDX;
    int64_t in_R8;
    int64_t in_R9;
    
    iVar2 = arg1;
    if ((((*(arg1 + 0x1d0) & 0x19) == 0x19) || (iVar1 = fcn.00026954(arg1,in_RDX,in_R8,in_R9), iVar1 == 0)) &&
       (iVar1 = fcn.00025eb0(CONCAT71(iVar2 >> 8,1)), iVar1 == 0)) {
        fcn.0001ba7c(arg1 + 0x1d4,0,8);
        fcn.0002f974(*0x42dd8);
        *(arg1 + 0x1d0) = *(arg1 + 0x1d0) | 0x40;
        fcn.00026fe4(arg1);
        if (*(arg1 + 500) != 0) {
            fcn.0001b978(*(arg1 + 500));
            *(arg1 + 500) = 0;
        }
        return 1;
    }
    return 0;
}


/* fcn.00026f7c @ 0x26f7c */

ulong fcn.00026f7c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uint16_t uVar2;
    uint64_t uVar3;
    uint uVar4;
    int64_t iVar5;
    int64_t iStack_38;
    ulong uStack_30;
    uint64_t uStack_28;
    int64_t iStack_20;
    uint uStack_14;
    uchar uStack_c;
    
    iVar5 = (arg3 & 0xffffU) * 0xa0;
    uStack_30 = 0x26fa5;
    uVar4 = fcn.0002c914(arg2);
    *(iVar5 + 0xca + arg1) = uVar4;
    *(iVar5 + 0xb4 + arg1) = *(arg2 + 0x4c);
    puVar1 = iVar5 + 0xc6 + arg1;
    *puVar1 = *puVar1 ^ (*(arg2 + 0x4d) ^ *(iVar5 + 0xc6 + arg1)) & 1;
    iStack_38 = 0;
    uVar3 = uStack_30 >> 0x20;
    uVar2 = uStack_30;
    uStack_30._0_4_ = CONCAT22(1,uVar2 & 0xff00);
    uStack_30 = CONCAT44(uVar3,uStack_30);
    fcn.0002fdc8(&stack0xffffffffffffffc8,0);
    if (iStack_38 != 0) {
        *(arg1 + 0x24) = 6;
        fcn.0001ba1c(iStack_38,0x1ec,arg1 + 4,0x1ec);
        uStack_28 = *arg1;
        iVar5 = 2;
        iStack_20 = iStack_38;
        uStack_14 = 0x200;
        uStack_c = 0x2a;
        do {
            (****(*0x429d0 + 0x240))(*(*0x429d0 + 0x240),&stack0xffffffffffffffd8);
            uStack_28 = uStack_28 + 0x10;
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
    }
    fcn.0002fca4(iStack_38);
    return 1;
}


/* fcn.00026954 @ 0x26954 */

ulong fcn.00026954(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t noname_0;
    
    fcn.0001cc28(0x37190,arg2,arg3,arg4);
    noname_0 = arg1;
    uVar1 = fcn.000269d8(arg1);
    if (uVar1 == 0) {
        *(arg1 + 0x1d0) = *(arg1 + 0x1d0) & 0xffffffd3 | 1;
        uVar1 = fcn.00030298(noname_0,arg2,arg3,arg4);
        if (uVar1 == 0) {
            *(arg1 + 0x1d0) = *(arg1 + 0x1d0) & 0xffffffef | 8;
            if ((*(arg1 + 0x1d0) & 0x10) == 0) {
                uVar1 = fcn.00030144();
                if (uVar1 != 0) {
                    return uVar1;
                }
                *(arg1 + 0x1d0) = *(arg1 + 0x1d0) | 0x10;
            }
            uVar1 = 0;
        }
    }
    return uVar1;
}


/* fcn.0002f974 @ 0x2f974 */

//WARNING: Removing unreachable block (ram,0x0002f92d)

void fcn.0002f974(int64_t arg1)

{
    int iVar1;
    int iVar2;
    ulong uVar3;
    uint64_t uStack_28;
    ulong uStack_20;
    uint uStack_14;
    uchar uStack_c;
    
    if ((*0x42de0 == '\0') && (*(arg1 + 8) != 0)) {
        fcn.0002fca4(*(arg1 + 8));
    }
    *0x42de0 = 0;
    uVar3 = fcn.0002fd0c(1,*(*0x429d0 + 0x1c2));
    *(arg1 + 8) = uVar3;
    iVar1 = *(*0x429d0 + 0x1c2);
    *arg1 = iVar1;
    iVar2 = *(*0x429d0 + 0x1c6);
    *(arg1 + 0x18) = 0;
    *(arg1 + 0x10) = iVar2 + iVar1;
    fcn.0001ba7c(*(arg1 + 8),0,0x200);
    uStack_20 = *(arg1 + 8);
    uStack_28 = *arg1;
    uStack_14 = 0x200;
    uStack_c = 0x2a;
    (****(*0x429d0 + 0x240))(*(*0x429d0 + 0x240),&uStack_28);
    *(arg1 + 0x14) = 0;
    return;
}


/* fcn.0001b978 @ 0x1b978 */

void fcn.0001b978(int64_t arg1)

{
    //WARNING: Could not recover jumptable at 0x0001b988. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x4af30 + 0x30))(arg1 & 0xffffffff,*0x438d8);
    return;
}


/* fcn.0002fe1c @ 0x2fe1c */

int64_t fcn.0002fe1c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t in_stack_00000028;
    
    *arg1 = 0;
    *(arg1 + 8) = 0;
    *(arg1 + 10) = arg2 >> 9;
    *(arg1 + 0x2c) = 0;
    *(arg1 + 0x28) = 0;
    *(arg1 + 0x30) = 0;
    *(arg1 + 0x18) = in_stack_00000028;
    *(arg1 + 0x10) = arg2;
    *(arg1 + 0x1c) = arg3;
    *(arg1 + 0x14) = arg4;
    *(arg1 + 0x24) = arg3;
    *(arg1 + 0x20) = (arg2 & 0xffffffffU) / in_stack_00000028;
    return arg1;
}


/* fcn.000300fc @ 0x300fc */

ulong fcn.000300fc(int64_t noname_0,ulong noname_1,int64_t arg1)

{
    ulong uVar1;
    
    uVar1 = fcn.00030014(noname_0,noname_1,arg1);
    if (uVar1 == 0) {
        if (*(*0x429d0 + 0x1b6) < *(*0x429d0 + 0x1b2)) {
            *(arg1 + 4) = 0xffff;
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00030014 @ 0x30014 */

ulong fcn.00030014(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uint16_t uVar1;
    ulong uVar2;
    
    uVar2 = fcn.00030070(arg1,noname_1);
    if (uVar2 == 0) {
        uVar1 = *(arg1 + 0x18);
        fcn.0001ba1c(arg2,uVar1,(*(arg1 + 0x2c) - *(arg1 + 0x28)) * uVar1 + *arg1,uVar1);
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00030070 @ 0x30070 */

ulong fcn.00030070(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    
    *(arg1 + 0x2c) = arg2;
    uVar1 = fcn.0002fed8(arg1);
    if (uVar1 == 0) {
        uVar1 = fcn.0002ffbc(arg1);
        if (uVar1 == 0) {
            uVar1 = 0;
        }
    }
    return uVar1;
}


/* fcn.0002fed8 @ 0x2fed8 */

ulong fcn.0002fed8(uint32_t arg1)

{
    ulong uVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if ((*(iVar2 + 0x30) != '\0') &&
       ((*(iVar2 + 0x2c) < *(iVar2 + 0x28) || (*(iVar2 + 0x28) + *(iVar2 + 0x20) <= *(iVar2 + 0x2c))))) {
        uVar1 = fcn.0002ff20(arg1);
        if (uVar1 != 0) {
            return uVar1;
        }
        *(iVar2 + 0x30) = 0;
    }
    return 0;
}


/* fcn.0002ffbc @ 0x2ffbc */

ulong fcn.0002ffbc(uint32_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong extraout_RAX;
    uint in_register_0000000c;
    int iVar3;
    
    if (*(CONCAT44(in_register_0000000c,arg1) + 0x30) == '\0') {
        uVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x20);
        uVar2 = *(CONCAT44(in_register_0000000c,arg1) + 0x2c) / uVar1;
        iVar3 = (*(CONCAT44(in_register_0000000c,arg1) + 0x10) >> 9) * uVar2 +
                *(CONCAT44(in_register_0000000c,arg1) + 0x1c);
        *(CONCAT44(in_register_0000000c,arg1) + 0x24) = iVar3;
        *(CONCAT44(in_register_0000000c,arg1) + 0x28) = uVar1 * uVar2;
        fcn.0002fe6c(CONCAT44(in_register_0000000c,arg1),CONCAT71(iVar3 >> 8,0x28));
        if (extraout_RAX != 0) {
            return extraout_RAX;
        }
        *(CONCAT44(in_register_0000000c,arg1) + 0x30) = 1;
    }
    return 0;
}


/* fcn.0002fe6c @ 0x2fe6c */

ushort fcn.0002fe6c(int64_t arg1,int64_t arg2)

{
    ushort uVar1;
    uint64_t uStack_28;
    ulong uStack_20;
    uint uStack_14;
    ushort uStack_e;
    char cStack_c;
    
    fcn.0002fdc8(arg1,*(arg1 + 0x24));
    if ((*(arg1 + 8) == '\0') || (uVar1 = 0, arg2 == '*')) {
        uStack_28 = *(arg1 + 0x24);
        uStack_20 = *arg1;
        uStack_14 = *(arg1 + 0x10);
        cStack_c = arg2;
        (****(*0x429d0 + 0x240))(*(*0x429d0 + 0x240),&uStack_28);
        uVar1 = uStack_e;
    }
    return uVar1;
}


/* fcn.0002ec94 @ 0x2ec94 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_10h

int16_t fcn.0002ec94(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg2_00;
    int16_t iVar1;
    uint16_t uVar2;
    int16_t iVar3;
    ulong in_R9;
    int64_t arg4;
    uint uStackX_20;
    int32_t var_48h;
    int16_t var_58h;
    int16_t var_5ah;
    int64_t iStack_48;
    uchar uStack_40;
    ushort uStack_3e;
    int64_t var_10h;
    int8_t var_bp_8h;
    int16_t var_6h;
    
    iStack_48 = 0;
    uStack_40 = 0;
    uStack_3e = 0x10;
    fcn.0002fdc8(&iStack_48,0);
    arg2_00 = iStack_48;
    if ((*(arg2 + 6) & 2) != 0) {
        if (*(arg2 + 4) == 0) {
            iVar1 = fcn.0002ee8c(arg1 & 0xffffffffU,iStack_48,0x100000,CONCAT71(in_R9 >> 8,0x28));
            if ((iVar1 != 0) || (iVar1 = fcn.0002ee34(arg3,*arg2,arg2_00,0x100000), iVar1 != 0))
            goto code_r0x0002ed2a;
        }
        else {
            if (*(arg2 + 4) == -1) {
                iVar1 = 0;
                goto code_r0x0002ed2a;
            }
            arg4 = 0x100000;
            iVar1 = fcn.0002ee34(arg3,*arg2,iStack_48,0x100000);
            if (iVar1 != 0) goto code_r0x0002ed2a;
            iVar3 = 0;
            uVar2 = 1;
            do {
                if ((uVar2 & ~*(arg2 + 4)) != 0) {
                    arg4 = CONCAT71(arg4 >> 8,0x28);
                    uStackX_20 = CONCAT22(1,iVar3);
                    iVar1 = fcn.0002ee8c(arg1 & 0xffffffffU,(iVar3 << 9) + arg2_00,uStackX_20,arg4);
                    if (iVar1 != 0) goto code_r0x0002ed2a;
                }
                uVar2 = uVar2 * 2;
                iVar3 = iVar3 + 1;
            } while (iVar3 < 0x10);
            iVar1 = fcn.0002ee34(arg3,*arg2,arg2_00,0x100000);
            if (iVar1 != 0) goto code_r0x0002ed2a;
        }
        *(arg2 + 6) = *(arg2 + 6) & 0xfd;
    }
    iVar1 = 0;
code_r0x0002ed2a:
    fcn.0002fca4(iStack_48);
    return iVar1;
}


/* fcn.0003013c @ 0x3013c */

ulong fcn.0003013c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    ulong uVar2;
    
    uVar2 = fcn.00030070(arg1,arg2);
    if (uVar2 == 0) {
        uVar1 = *(arg1 + 0x18);
        *(arg1 + 0x31) = 1;
        fcn.0001ba1c((*(arg1 + 0x2c) - *(arg1 + 0x28)) * uVar1 + *arg1,uVar1,arg3,uVar1);
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0002ff20 @ 0x2ff20 */

ulong fcn.0002ff20(uint32_t arg1)

{
    ulong extraout_RAX;
    uint in_register_0000000c;
    unkbyte7 in_RDX;
    
    if ((*(CONCAT44(in_register_0000000c,arg1) + 0x30) != '\0') &&
       (*(CONCAT44(in_register_0000000c,arg1) + 0x31) != '\0')) {
        fcn.0002fe6c(CONCAT44(in_register_0000000c,arg1),CONCAT71(in_RDX,0x2a));
        if (extraout_RAX != 0) {
            return extraout_RAX;
        }
        *(CONCAT44(in_register_0000000c,arg1) + 0x31) = 0;
    }
    return 0;
}


/* fcn.0002ef0c @ 0x2ef0c */

int64_t fcn.0002ef0c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint16_t uVar2;
    uint64_t uVar3;
    
    *(arg1 + 0x2828) = arg3;
    *(arg1 + 0x2818) = arg2;
    uVar3 = *(*0x429d0 + 0x1ae) + *arg2 >> 4;
    *(arg1 + 0x2824) = uVar3;
    uVar2 = *(*0x429d0 + 0x1ae) + uVar3 * -0x10 + *arg2;
    uVar1 = (*(arg2 + 0x14) >> 9) + uVar2;
    *(arg1 + 0x2820) = ((uVar1 & 0xf) != 0) + (uVar1 >> 4);
    fcn.0002f604(arg1,uVar2,*(arg2 + 0x14));
    return arg1;
}


/* fcn.0002f604 @ 0x2f604 */

void fcn.0002f604(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int16_t iVar2;
    int16_t iVar3;
    int16_t iVar4;
    
    iVar3 = arg3 >> 9;
    iVar2 = arg2;
    *(arg1 + 0xc) = iVar2;
    iVar4 = 0x10 - iVar2;
    if (iVar3 < 0x10 - iVar2) {
        iVar4 = iVar3;
    }
    iVar2 = 1;
    iVar3 = iVar3 - iVar4;
    *(arg1 + 0xe) = iVar4;
    if (1 < *(arg1 + 0x2820) + -1) {
        do {
            iVar1 = iVar2;
            iVar3 = iVar3 + -0x10;
            iVar2 = iVar2 + 1;
            *(arg1 + 0xc + iVar1 * 0x14) = 0x100000;
        } while (iVar2 < *(arg1 + 0x2820) + -1);
    }
    if (1 < *(arg1 + 0x2820)) {
        *(arg1 + 0xc + (*(arg1 + 0x2820) + -1) * 0x14) = 0;
        *(arg1 + 0xe + (*(arg1 + 0x2820) + -1) * 0x14) = iVar3;
    }
    return;
}


/* fcn.0002f490 @ 0x2f490 */

uint64_t fcn.0002f490(int64_t arg1)

{
    int64_t arg1_00;
    uint32_t uVar1;
    uint16_t uVar2;
    uint64_t uVar3;
    int16_t iVar4;
    uint32_t auStack_48 [16];
    
    uVar3 = fcn.000307a4(*(arg1 + 0x2824),*(arg1 + 0x2820),0x2f80c,arg1);
    if (uVar3 == 0) {
        if (*(*0x429d0 + 0x156) == 0) {
            uVar1 = *(*0x429d0 + 0x152);
        }
        else {
            uVar1 = *(*0x429d0 + 0x14e);
        }
        fcn.0002fe1c(auStack_48,0x200,uVar1,*(*0x429d0 + 0x1a6));
        iVar4 = 0;
        if (0 < *(arg1 + 0x2820)) {
            do {
                arg1_00 = arg1 + iVar4 * 0x14;
                if (*(arg1_00 + 0x10) != '\0') {
                    uVar2 = fcn.000300fc(auStack_48,*(arg1_00 + 8),arg1_00);
                    if (uVar2 != 0) goto code_r0x0002f563;
                }
                iVar4 = iVar4 + 1;
            } while (iVar4 < *(arg1 + 0x2820));
        }
        uVar2 = fcn.0002ff20(auStack_48);
        if (uVar2 == 0) {
            uVar2 = 0;
        }
code_r0x0002f563:
        fcn.0002fca4(auStack_48[0]);
        uVar3 = uVar2;
    }
    return uVar3;
}


/* fcn.0002f084 @ 0x2f084 */

int16_t fcn.0002f084(int64_t arg1)

{
    int64_t arg2;
    uint32_t uVar1;
    int16_t iVar2;
    int16_t iVar3;
    uint32_t auStack_48 [16];
    
    if (*(*0x429d0 + 0x156) == 0) {
        uVar1 = *(*0x429d0 + 0x152);
    }
    else {
        uVar1 = *(*0x429d0 + 0x14e);
    }
    fcn.0002fe1c(auStack_48,0x200,uVar1,*(*0x429d0 + 0x1a6));
    iVar3 = 0;
    if (0 < *(arg1 + 0x2820)) {
        do {
            arg2 = arg1 + iVar3 * 0x14;
            if ((*(arg2 + 0x10) != '\0') && ((*(arg2 + 6) & 2) != 0)) {
                iVar2 = fcn.0002ec94(*(arg2 + 8),arg2,*(arg1 + 0x2828));
                if (iVar2 != 0) goto code_r0x0002f159;
                iVar2 = fcn.0003013c(auStack_48,*(arg2 + 8),arg2);
                if (iVar2 != 0) goto code_r0x0002f159;
            }
            iVar3 = iVar3 + 1;
        } while (iVar3 < *(arg1 + 0x2820));
    }
    iVar2 = fcn.0002ff20(auStack_48);
    if (iVar2 == 0) {
        iVar2 = 0;
    }
code_r0x0002f159:
    fcn.0002fca4(auStack_48[0]);
    return iVar2;
}


/* fcn.00026dd0 @ 0x26dd0 */

uint16_t fcn.00026dd0(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int iVar1;
    uint in_register_00000014;
    uint16_t uVar2;
    
    uVar2 = 0;
    iVar1 = (arg3 & 0xffff) - 1;
    if (0 < iVar1) {
        do {
            if (arg1 < *(CONCAT44(in_register_00000014,arg2) + 4 + uVar2 * 4)) {
                return uVar2;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < iVar1);
    }
    return uVar2;
}


/* fcn.0002ff5c @ 0x2ff5c */

void fcn.0002ff5c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    *arg2 = *arg1;
    *arg3 = *(arg1 + 0x28);
    if (*(arg1 + 0x14) < *(arg1 + 0x20) + *(arg1 + 0x28)) {
        *arg4 = *(arg1 + 0x14) - *(arg1 + 0x28);
        return;
    }
    *arg4 = *(arg1 + 0x20);
    return;
}


/* fcn.0002ff88 @ 0x2ff88 */

int64_t fcn.0002ff88(int64_t arg1)

{
    return *(arg1 + 0x18) * (*(arg1 + 0x2c) - *(arg1 + 0x28)) + *arg1;
}


/* fcn.00030724 @ 0x30724 */

int64_t fcn.00030724(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    
    uVar1 = *arg2;
    *(arg1 + 8) = uVar1 >> 0x28;
    *arg1 = uVar1 & 0xffffffffff;
    return arg1;
}


/* fcn.0002593c @ 0x2593c */

void fcn.0002593c(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    int16_t iVar3;
    int16_t iVar4;
    uint32_t *puVar5;
    
    iVar3 = 0;
    iVar4 = 1;
    puVar5 = arg1 + 0x220;
    do {
        uVar2 = *puVar5;
        puVar5 = puVar5 + 4;
        if (uVar2 < *(arg1 + (iVar3 + 0x21) * 0x10)) {
            iVar3 = iVar4;
        }
        iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    iVar1 = iVar3 + 0x21;
    if (*(arg1 + iVar1 * 0x10) < arg3) {
        *(arg1 + iVar1 * 0x10) = arg3;
        *(arg1 + 0x208 + iVar3 * 0x10) = arg2;
    }
    return;
}


/* fcn.0002f6c0 @ 0x2f6c0 */

int16_t fcn.0002f6c0(int64_t arg1)

{
    int64_t arg1_00;
    uint32_t uVar1;
    char cVar2;
    int16_t iVar3;
    int16_t iVar4;
    uint64_t arg2;
    uint32_t auStack_48 [16];
    
    if (*(*0x429d0 + 0x156) == 0) {
        uVar1 = *(*0x429d0 + 0x152);
    }
    else {
        uVar1 = *(*0x429d0 + 0x14e);
    }
    fcn.0002fe1c(auStack_48,0x200,uVar1,*(*0x429d0 + 0x1a6));
    arg2 = 0;
    if (0 < *(arg1 + 0x2820)) {
        do {
            iVar4 = arg2;
            if (*(arg1 + 0x10 + iVar4 * 0x14) != '\0') {
                cVar2 = fcn.0002f5c8(arg1,arg2);
                if (cVar2 != '\0') {
                    arg1_00 = arg1 + iVar4 * 0x14;
                    iVar3 = fcn.0002ee00(*(arg1_00 + 8),arg1_00,*(arg1_00 + 0xc));
                    if (iVar3 != 0) goto code_r0x0002f79f;
                    iVar3 = fcn.0003013c(auStack_48,*(arg1_00 + 8),arg1_00);
                    if (iVar3 != 0) goto code_r0x0002f79f;
                }
            }
            arg2 = iVar4 + 1U;
        } while (iVar4 + 1U < *(arg1 + 0x2820));
    }
    iVar3 = fcn.0002ff20(auStack_48);
    if (iVar3 == 0) {
        iVar3 = 0;
    }
code_r0x0002f79f:
    fcn.0002fca4(auStack_48[0]);
    return iVar3;
}


/* fcn.0002ff9c @ 0x2ff9c */

ulong fcn.0002ff9c(int64_t arg1)

{
    ulong uVar1;
    
    uVar1 = fcn.00030070(arg1,*(arg1 + 0x2c) + 1);
    if (uVar1 == 0) {
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00030068 @ 0x30068 */

int fcn.00030068(int64_t arg1)

{
    return *(arg1 + 0x14) - *(arg1 + 0x2c);
}


/* fcn.0002ee00 @ 0x2ee00 */

ulong fcn.0002ee00(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint auStackX_18 [4];
    
    auStackX_18[0] = arg2;
    uVar1 = fcn.0002ec70(auStackX_18);
    *(arg1 + 4) = *(arg1 + 4) | uVar1;
    if (*(arg1 + 4) == -1) {
        *(arg1 + 6) = *(arg1 + 6) & 0xfd;
    }
    return 0;
}


/* fcn.0002ec70 @ 0x2ec70 */

int16_t fcn.0002ec70(int64_t arg1)

{
    int16_t iVar1;
    
    iVar1 = 0;
    if (*(arg1 + 2) != 0) {
        iVar1 = (1 << (*(arg1 + 2) & 0x1f)) + -1 << (*arg1 & 0x1f);
    }
    return iVar1;
}


/* fcn.000307a4 @ 0x307a4 */

uint64_t fcn.000307a4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    int16_t iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint32_t *puVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint64_t arg1_00;
    uint32_t uVar8;
    uint uVar9;
    uint32_t uStack_78;
    uint16_t auStack_74 [2];
    int aiStack_70 [2];
    int64_t iStack_68;
    uint32_t auStack_60 [2];
    int64_t var_50h;
    int64_t var_40h;
    int64_t var_38h;
    
    arg1_00 = arg1 & 0xffffffff;
    uVar4 = fcn.00025cf4(arg1,&uStack_78);
    if (uVar4 == 0) {
        fcn.0002fe1c(auStack_60,0x2000,*(*0x429d0 + 0x16a),*(*0x429d0 + 0x1a6));
        uVar1 = fcn.00030070(auStack_60,uStack_78);
        uVar4 = uVar1;
        if (uVar1 == 0) {
            fcn.0002ff5c(auStack_60,&iStack_68,aiStack_70,auStack_74);
            iVar2 = fcn.00030748(arg1_00,iStack_68,auStack_74[0]);
            uVar1 = fcn.00030070(auStack_60,iVar2 + aiStack_70[0]);
            uVar4 = uVar1;
            if (uVar1 == 0) {
                fcn.0002ff88(auStack_60);
                uVar8 = 0;
                if (arg2 == 0) {
code_r0x000308de:
                    uVar4 = 0;
                }
                else {
                    do {
                        while( true ) {
                            puVar5 = fcn.0002ff88(auStack_60);
                            uVar7 = arg1_00;
                            if ((*puVar5 < uVar7) && (uVar3 = fcn.00030068(auStack_60), 1 < uVar3)) break;
                            puVar5 = fcn.0002ff88(auStack_60);
                            uVar3 = *puVar5;
                            if (*puVar5 == uVar7) {
                                iVar6 = fcn.0002ff88(auStack_60);
                                uVar9 = *(iVar6 + 4);
                            }
                            else {
                                uVar9 = 0;
                            }
                            (*arg3)(arg1_00,uVar3 == uVar7,uVar9,arg4);
                            uVar8 = uVar8 + 1;
                            arg1_00 = uVar7 + 1;
                            if (arg2 <= uVar8) goto code_r0x000308de;
                        }
                        uVar1 = fcn.0002ff9c(auStack_60);
                        uVar4 = uVar1;
                    } while (uVar1 == 0);
                }
            }
        }
        fcn.0002fca4(auStack_60[0]);
    }
    return uVar4;
}


/* fcn.0002ef98 @ 0x2ef98 */

ulong fcn.0002ef98(int64_t arg1)

{
    bool bVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    char cVar5;
    ulong uVar6;
    uint16_t uVar7;
    
    bVar1 = false;
    bVar2 = false;
    uVar7 = 0;
    *(arg1 + 0x2830) = 1;
    bVar3 = false;
    bVar4 = false;
    if (0 < *(arg1 + 0x2820)) {
        do {
            bVar2 = bVar4;
            bVar1 = bVar3;
            if (*(arg1 + 0x10 + uVar7 * 0x14) == '\0') {
                bVar1 = true;
            }
            else {
                cVar5 = fcn.0002f588(arg1,uVar7);
                if (cVar5 == '\0') {
                    bVar2 = true;
                }
                if ((*(arg1 + 6 + uVar7 * 0x14) & 2) != 0) {
                    *(arg1 + 0x2830) = 0;
                }
            }
            uVar7 = uVar7 + 1;
            bVar3 = bVar1;
            bVar4 = bVar2;
        } while (uVar7 < *(arg1 + 0x2820));
    }
    if (*(*(arg1 + 0x2818) + 0x1c) == '(') {
        if ((bVar1) || (bVar2)) {
            uVar6 = 0;
        }
        else {
            uVar6 = 2;
        }
    }
    else if (*(*(arg1 + 0x2818) + 0x1c) == '*') {
        if ((bVar1) || (bVar2)) {
            uVar6 = 1;
        }
        else {
            uVar6 = 3;
        }
    }
    else {
        uVar6 = 4;
    }
    return uVar6;
}


/* fcn.0002fa14 @ 0x2fa14 */

void fcn.0002fa14(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t *puVar1;
    int16_t iVar2;
    uint in_register_0000000c;
    uint32_t *arg1_00;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if ((*(arg1_00 + 2) == 0) && (fcn.0002f974(arg1_00), *(arg1_00 + 2) == 0)) {
        return;
    }
    if (*arg1_00 < arg1_00[4]) {
        if (arg3 == '\0') {
            arg1_00[5] = arg1_00[5] + 1;
            arg1_00[6] = arg1_00[6] + 1;
            iVar2 = fcn.0002f86c(arg1_00,arg2);
            if (iVar2 != 1) {
                puVar1 = *(arg1_00 + 2);
                puVar1[(*puVar1 + 1) * 3] = *(arg2 + 0x2820) << 2 | puVar1[(*puVar1 + 1) * 3] & 3;
                *(*(arg1_00 + 2) + **(arg1_00 + 2) * 3 + 1) = *(arg2 + 0x2824);
                puVar1 = *(arg1_00 + 2);
                puVar1[(*puVar1 + 1) * 3] = *(*(arg2 + 0x2818) + 0x1c) == '*' | puVar1[(*puVar1 + 1) * 3] & 0xfffe;
                **(arg1_00 + 2) = **(arg1_00 + 2) + 1;
            }
        }
        if (((0x32 < arg1_00[5]) || (*(*(arg2 + 0x2818) + 0x1c) == '*')) || (arg1_00[6] < 0x15)) {
            fcn.0002f920(arg1,0);
        }
        if (**(arg1_00 + 2) == 0x55) {
            fcn.0002f920(arg1,0);
            *arg1_00 = *arg1_00 + 1;
            if (*arg1_00 < arg1_00[4]) {
                fcn.0002f9e8(arg1_00);
            }
        }
    }
    return;
}


/* fcn.0002f278 @ 0x2f278 */

int16_t fcn.0002f278(int64_t arg1,int64_t arg2)

{
    int64_t arg3;
    uint8_t uVar1;
    bool bVar2;
    char cVar3;
    int16_t iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint16_t uVar8;
    bool bVar9;
    uint64_t uStack_78;
    uchar uStack_70;
    ushort uStack_6e;
    uint32_t auStack_68 [16];
    
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_6e = 0x10;
    if (*(*0x429d0 + 0x156) == 0) {
        uVar5 = *(*0x429d0 + 0x152);
    }
    else {
        uVar5 = *(*0x429d0 + 0x14e);
    }
    fcn.0002fe1c(auStack_68,0x200,uVar5,*(*0x429d0 + 0x1a6));
    bVar2 = false;
    uVar8 = 0;
    uVar7 = *(*(arg1 + 0x2818) + 8);
    if (0 < *(arg1 + 0x2820)) {
        do {
            cVar3 = fcn.0002f7c8(arg1,uVar8);
            bVar9 = cVar3 != '\0';
            if ((arg2 != 3) &&
               (uVar1 = *(arg1 + 6 + uVar8 * 0x14), *(arg1 + 6 + uVar8 * 0x14) = uVar1 | 2, (uVar1 >> 1 & 1) != 1)) {
                bVar9 = true;
                bVar2 = true;
            }
            if ((uVar7 & 3) == 0) {
                uVar6 = uVar7;
            }
            else {
                fcn.0002fdc8(&uStack_78,0);
                uVar6 = uStack_78;
                uVar5 = *(arg1 + 0xe + uVar8 * 0x14) << 9;
                fcn.0001ba1c(uStack_78,uVar5,uVar7,uVar5);
            }
            arg3 = arg1 + uVar8 * 0x14;
            iVar4 = fcn.0002eef8(*(arg1 + 8 + uVar8 * 0x14),uVar6,*(arg3 + 0xc));
            if (iVar4 != 0) goto code_r0x0002f457;
            if (bVar9) {
                uVar6 = *(arg3 + 8);
                iVar4 = fcn.0003013c(auStack_68,uVar6,arg3);
                if (iVar4 != 0) goto code_r0x0002f457;
                if (((bVar2) && (*(*0x429d0 + 0x238) != 0)) &&
                   (cVar3 = fcn.0002c180(*(*0x429d0 + 0x238)), cVar3 == '\0')) {
                    fcn.0002c454(*(*0x429d0 + 0x238),CONCAT71(uVar6 >> 8,1));
                }
            }
            uVar8 = uVar8 + 1;
            uVar7 = uVar7 + (*(arg3 + 0xe) << 9);
        } while (uVar8 < *(arg1 + 0x2820));
    }
    iVar4 = fcn.0002ff20(auStack_68);
    if (iVar4 == 0) {
        iVar4 = 0;
    }
code_r0x0002f457:
    fcn.0002fca4(auStack_68[0]);
    fcn.0002fca4(uStack_78);
    return iVar4;
}


/* fcn.0002f184 @ 0x2f184 */

int16_t fcn.0002f184(int64_t arg1)

{
    int16_t iVar1;
    uint32_t arg4;
    int64_t iVar2;
    int16_t iVar3;
    uint64_t arg1_00;
    uint64_t arg2;
    uint64_t uStack_38;
    uchar uStack_30;
    ushort uStack_2e;
    
    iVar3 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_2e = 0x10;
    arg1_00 = *(*(arg1 + 0x2818) + 8);
    if (0 < *(arg1 + 0x2820)) {
        do {
            if ((arg1_00 & 3) == 0) {
                arg2 = arg1_00;
            }
            else {
                fcn.0002fdc8(&uStack_38,0);
                arg2 = uStack_38;
            }
            iVar2 = iVar3;
            iVar1 = fcn.0002eee4(*(arg1 + 8 + iVar2 * 0x14),arg2,*(arg1 + 0xc + iVar2 * 0x14));
            if (iVar1 != 0) goto code_r0x0002f24d;
            if ((arg1_00 & 3) != 0) {
                arg4 = *(arg1 + 0xe + iVar2 * 0x14) << 9;
                fcn.0001ba1c(arg1_00,arg4,arg2,arg4);
            }
            iVar3 = iVar3 + 1;
            arg1_00 = arg1_00 + (*(arg1 + 0xe + iVar2 * 0x14) << 9);
        } while (iVar3 < *(arg1 + 0x2820));
    }
    iVar1 = 0;
code_r0x0002f24d:
    fcn.0002fca4(uStack_38);
    return iVar1;
}


/* fcn.0002f854 @ 0x2f854 */

ulong fcn.0002f854(int64_t arg1)

{
    ulong uVar1;
    
    uVar1 = fcn.0002f6c0(arg1);
    if (uVar1 == 0) {
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.0002f83c @ 0x2f83c */

ulong fcn.0002f83c(int64_t arg1)

{
    ulong uVar1;
    
    uVar1 = fcn.0002f084(arg1);
    if (uVar1 == 0) {
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.000269d8 @ 0x269d8 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_ch
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

uint64_t * fcn.000269d8(int64_t arg1)

{
    char cVar1;
    int iVar2;
    char *pcVar3;
    uint64_t uVar4;
    uint64_t *in_RDX;
    uint64_t *puVar5;
    uint64_t *puVar6;
    uint32_t uVar7;
    uint64_t in_R8;
    uint64_t uVar8;
    uint64_t in_R9;
    uint8_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uchar uStackX_8;
    uint32_t uStackX_10;
    uint64_t uStackX_18;
    int8_t var_40h;
    int32_t var_48h;
    int64_t var_50h;
    uint32_t uStack_74;
    uint64_t uStack_68;
    uchar uStack_60;
    ushort uStack_5e;
    uint64_t uStack_58;
    uint64_t uStack_50;
    uint32_t var_3ch;
    int16_t iStack_40;
    uchar uStack_3c;
    int64_t var_30h;
    int8_t var_28h;
    int16_t var_26h;
    int64_t var_bp_20h;
    int64_t var_18h;
    int32_t var_ch;
    uint32_t var_8h;
    int8_t var_4h;
    
    puVar6 = NULL;
    *(arg1 + 500) = 0;
    iVar2 = fcn.0001b930(0x82);
    if (iVar2 == 0) {
        pcVar3 = "Failed to allocate extended memory for rebuilding metadata!\n";
        fcn.0001cc28(0x37050,in_RDX,in_R8,in_R9);
        fcn.0001cbf8(pcVar3,in_RDX,in_R8,in_R9);
        return 0x1;
    }
    uVar11 = *(arg1 + 0x15a);
    *(arg1 + 500) = iVar2;
    uStack_50 = iVar2 + 0x12000U;
    *(arg1 + 0x1f8) = iVar2 + 0x12000U;
    uStack_3c = 0x28;
    if ((*(arg1 + 0x1d0) & 1) == 0) {
        if (*(arg1 + 0x156) == 0) goto code_r0x00026aff;
    }
    else if (*(arg1 + 0x156) != 0) {
code_r0x00026aff:
        uVar10 = *(arg1 + 0x14e);
        goto code_r0x00026a66;
    }
    uVar10 = *(arg1 + 0x152);
code_r0x00026a66:
    uStack_58 = uVar10;
    fcn.0001cc28(0x37090,in_RDX,in_R8,in_R9);
    uVar9 = 0;
    for (; uVar11 != 0; uVar11 = uVar11 - uVar10) {
        in_RDX = &uStack_58;
        uVar10 = 0x10000;
        if (uVar11 < 0x10000) {
            uVar10 = uVar11;
        }
        var_3ch = uVar10;
        (****(*0x429d0 + 0x240))();
        if (iStack_40 != 0) {
            if (uVar9 < 3) {
                in_RDX = &uStack_58;
                (****(*0x429d0 + 0x240))();
                uVar9 = uVar9 + 1;
            }
            if (iStack_40 != 0) {
                pcVar3 = "\nFailed to read packed metadata!\n";
                fcn.0001cc28(0x370b8,in_RDX,in_R8,in_R9);
                fcn.0001cbf8(pcVar3,in_RDX,in_R8,in_R9);
                return 0x1;
            }
        }
        uStack_58 = uStack_58 + (uVar10 >> 9);
        uStack_50 = uStack_50 + uVar10;
    }
    fcn.0001cc28(0x370dc,in_RDX,in_R8,in_R9);
    if ((*(arg1 + 0x1d0) & 1) == 0) {
        uStack_68 = 0;
        uStack_5e = 0x10;
        uStack_60 = 0;
        fcn.0002fdc8(&uStack_68,0);
        if (uStack_68 == 0) {
code_r0x00026d31:
            puVar6 = 0x1;
        }
        else {
            uVar11 = *(arg1 + 0x1e0);
            uStack_58 = uVar11;
            in_R9 = in_R9 & 0xffffffffffffff00;
            uVar10 = *(arg1 + 0x19e);
            puVar5 = uVar10;
            *(arg1 + 0x1fc) = *(arg1 + 0x1dc);
            uStack_50 = uStack_68;
            uStackX_10 = 0;
            uStackX_8 = 0;
            if (uVar10 != 0) {
                do {
                    if (in_R9 != '\0') break;
                    uVar12 = 0x2000;
                    if (uVar10 < 0x2000) {
                        uVar12 = uVar10;
                    }
                    uVar7 = *(arg1 + 0x19a) + (puVar5 >> 9);
                    in_R8 = uVar7;
                    if (uVar7 < (uVar12 >> 9) + uVar11) {
                        uVar12 = (uVar7 - uVar11) * 0x200;
                    }
                    puVar5 = &uStack_58;
                    var_3ch = uVar12;
                    (****(*0x429d0 + 0x240))();
                    if (iStack_40 != 0) {
                        pcVar3 = "\nFailed to read Delta Log\n";
                        goto code_r0x00026d27;
                    }
                    uStackX_18 = uStack_68;
                    if (uVar12 >> 9 != 0) {
                        in_R9 = uStackX_10;
                        puVar5 = puVar6;
                        do {
                            fcn.0001cc28(0x37108,in_R9,in_R8,in_R9);
                            in_R8 = uStackX_18;
                            cVar1 = fcn.0002628c(arg1,uStackX_10,uStackX_18);
                            if (cVar1 == '\0') {
                                in_R9 = CONCAT71(in_R9 >> 8,1);
                                uStackX_8 = 1;
                                goto code_r0x00026c5a;
                            }
                            uVar11 = puVar5 + 1;
                            puVar5 = uVar11;
                            uStackX_18 = uStackX_18 + 0x200;
                            uStackX_10 = uStackX_10 + 1;
                            in_R9 = uStackX_10;
                        } while (uVar11 < uVar12 >> 9);
                    }
                    in_R9 = CONCAT71(in_R9 >> 8,uStackX_8);
code_r0x00026c5a:
                    puVar5 = *(arg1 + 0x19e);
                    uVar10 = uVar10 - uVar12;
                    uVar7 = *(arg1 + 0x19a);
                    in_R8 = uVar7;
                    uStack_58 = uStack_58 + (uVar12 >> 9);
                    uVar11 = uStack_58;
                    if (uStack_58 == (*(arg1 + 0x19e) >> 9) + uVar7) {
                        uVar11 = uVar7;
                        uStack_58 = in_R8;
                    }
                } while (uVar10 != 0);
            }
            fcn.0001cc28(0x37134,puVar5,in_R8,in_R9);
            if ((*(*(arg1 + 0x238) + 0xfd) == '\x05') && (*(arg1 + 0x1a6) != 0)) {
                uVar8 = *(arg1 + 0x1a6);
                puVar5 = puVar6;
                do {
                    uVar4 = *(arg1 + 0x1f8) + puVar5;
                    uStack_74 = *(uVar4 + 4);
                    if (uStack_74 != -1) {
                        uStack_74 = uStack_74 | 0x20000;
                        *(uVar4 + 4) = uStack_74;
                    }
                    puVar5 = puVar5 + 8;
                    uVar8 = uVar8 - 1;
                    in_R8 = 0;
                } while (uVar8 != 0);
            }
            fcn.0001cc28(0x37138,puVar5,in_R8,in_R9);
            uStack_50 = *(arg1 + 0x1f8);
            uStack_3c = 0x2a;
            if (*(arg1 + 0x156) == 0) {
                uVar11 = *(arg1 + 0x152);
            }
            else {
                uVar11 = *(arg1 + 0x14e);
            }
            uStack_58 = uVar11;
            for (uVar11 = *(arg1 + 0x15a); uVar11 != 0; uVar11 = uVar11 - uVar10) {
                puVar5 = &uStack_58;
                uVar10 = 0x10000;
                if (uVar11 < 0x10000) {
                    uVar10 = uVar11;
                }
                var_3ch = uVar10;
                (****(*0x429d0 + 0x240))();
                if (iStack_40 != 0) {
                    pcVar3 = "\nFailed to write packed metadata!\n";
code_r0x00026d27:
                    fcn.0001cc28(pcVar3,puVar5,in_R8,in_R9);
                    fcn.0001cbf8(pcVar3,puVar5,in_R8,in_R9);
                    goto code_r0x00026d31;
                }
                uStack_58 = uStack_58 + (uVar10 >> 9);
                uStack_50 = uStack_50 + uVar10;
                iStack_40 = 0;
            }
            fcn.0001cc28(0x370dc,puVar5,in_R8,in_R9);
        }
        fcn.0002fca4(uStack_68);
    }
    return puVar6;
}


/* fcn.00030298 @ 0x30298 */

ulong fcn.00030298(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    char *noname_0_00;
    int64_t arg2_00;
    uint64_t *arg2_01;
    uint32_t uVar2;
    uint32_t uVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    bool bVar7;
    uint64_t uStack_38;
    uint64_t uStack_30;
    uint32_t uStack_24;
    int16_t iStack_20;
    uchar uStack_1c;
    
    uVar4 = 0;
    uVar6 = *(*0x429d0 + 0x1a6) / 100;
    fcn.0001cc28(0x37bf8,0,arg2,arg3);
    uVar2 = 0;
    uVar3 = *(*0x429d0 + 0x1f8);
    uVar5 = uVar6;
    if (*(*0x429d0 + 0x1a6) != 0) {
        do {
            bVar7 = uVar5 == 0;
            uVar5 = uVar5 - 1;
            if (bVar7) {
                uVar4 = uVar4 + 1;
                fcn.0001cc28(0x37bf8,uVar4,arg2,arg3);
                uVar5 = uVar6;
            }
            uVar1 = uVar3;
            uVar3 = uVar3 + 8;
            *(uVar1 + 4) = uVar2;
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(*0x429d0 + 0x1a6));
    }
    arg2_00 = 100;
    fcn.0001cc28(0x37bf8,100,arg2,arg3);
    fcn.0001cc28(0x37134,arg2_00,arg2,arg3);
    fcn.0001cc28(0x37c28,uVar2,arg2,arg3);
    arg2_01 = uVar2;
    fcn.000304a8(*(*0x429d0 + 0x1f8),arg2_01);
    fcn.0001cc28(0x37c58,arg2_01,arg2,arg3);
    uStack_38 = *(*0x429d0 + 0x16a);
    uStack_30 = *(*0x429d0 + 0x1f8);
    uStack_1c = 0x2a;
    uVar3 = *(*0x429d0 + 0x1a6) * 8 + 0x1ffU & 0xfffffe00;
    while( true ) {
        if (uVar3 == 0) {
            fcn.0001cc28(0x370dc,arg2_01,arg2,arg3);
            return 0;
        }
        arg2_01 = &uStack_38;
        uVar5 = 0x10000;
        if (uVar3 < 0x10000) {
            uVar5 = uVar3;
        }
        uStack_24 = uVar5;
        (****(*0x429d0 + 0x240))();
        if (iStack_20 != 0) break;
        uStack_38 = uStack_38 + (uVar5 >> 9);
        uStack_30 = uStack_30 + uVar5;
        uVar3 = uVar3 - uVar5;
        iStack_20 = 0;
    }
    noname_0_00 = "\nFailed to write sorted Segment/Index list\n";
    fcn.0001cc28(0x37c80,arg2_01,arg2,arg3);
    fcn.0001cbf8(noname_0_00,arg2_01,arg2,arg3);
    return 1;
}


/* fcn.00030144 @ 0x30144 */

int16_t fcn.00030144(void)

{
    uint uVar1;
    uint16_t uVar2;
    uint *puVar3;
    char *arg1;
    uint64_t arg2;
    uint64_t *arg2_00;
    uint32_t uVar4;
    uint32_t uVar5;
    uint *arg3;
    uint64_t arg4;
    uint32_t uVar6;
    uint16_t uVar7;
    uint64_t uStack_28;
    uint64_t uStack_20;
    uint32_t uStack_14;
    int16_t iStack_e;
    uchar uStack_c;
    
    fcn.0001ba7c(*0x429d0 + 0x176,0xff,0x24);
    arg4 = 0;
    uVar7 = 0;
    uVar5 = *(*0x429d0 + 0x1f8);
    uVar4 = *(*0x429d0 + 500);
    uVar6 = uVar5 + *(*0x429d0 + 0x1a6) * 8;
    for (; arg3 = uVar5, uVar5 < uVar6; uVar5 = uVar5 + 0x2000) {
        uVar1 = *arg3;
        *uVar4 = uVar1;
        *(*0x429d0 + 0x176 + arg4 * 4) = uVar1;
        uVar2 = arg4 + 1;
        if ((uVar7 & 0x7ff) != 0) {
            uVar2 = arg4;
        }
        uVar4 = uVar4 + 4;
        uVar7 = uVar7 + 1;
        arg4 = uVar2;
    }
    arg2 = uVar4 - *(*0x429d0 + 500);
    fcn.0001cc28(0x37cb0,arg2,arg3,arg4);
    for (uStack_14 = uVar4 - *(*0x429d0 + 500); (uStack_14 & 0x1fff) != 0; uStack_14 = uStack_14 + 4) {
        puVar3 = uVar4;
        uVar4 = uVar4 + 4;
        *puVar3 = 0xffffffff;
    }
    fcn.0001cc28(0x37ce0,arg2,arg3,arg4);
    arg2_00 = &uStack_28;
    uStack_c = 0x2a;
    uStack_20 = *(*0x429d0 + 500);
    uStack_28 = *(*0x429d0 + 0x16e);
    (****(*0x429d0 + 0x240))();
    arg1 = "FAIL\n";
    if (iStack_e == 0) {
        arg1 = "Done\n";
    }
    fcn.0001cc28(arg1,arg2_00,arg3,arg4);
    return iStack_e;
}


/* fcn.0001cbf8 @ 0x1cbf8 */

void fcn.0001cbf8(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int aiStackX_8 [8];
    
    fcn.0001cc28(0x36e00,arg1,arg2,arg3);
    do {
        do {
            cVar1 = fcn.0001cae8(aiStackX_8);
        } while (cVar1 == '\0');
    } while (aiStackX_8[0] != 0x170000);
    return;
}


/* fcn.0002628c @ 0x2628c */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_2ch

ulong fcn.0002628c(uint32_t arg1,ulong noname_1,uint32_t arg2)

{
    int16_t *piVar1;
    char cVar2;
    uint32_t uVar3;
    ulong uVar4;
    uint32_t uVar5;
    uint in_register_0000000c;
    int64_t iVar6;
    uint32_t *puVar7;
    int16_t iVar8;
    uint32_t *puVar9;
    uint32_t uVar10;
    uint in_R8;
    uint32_t *puVar11;
    uint64_t uVar12;
    int iVar13;
    uint32_t uVar14;
    uint32_t uStackX_20;
    int64_t var_50h;
    int32_t var_58h;
    uint32_t uStack_78;
    uint uStack_74;
    uint uStack_64;
    int64_t iStack_58;
    uint32_t uStack_50;
    int iStack_4c;
    int32_t var_40h;
    int16_t var_3ch;
    int8_t var_3ah;
    int8_t var_39h;
    int32_t var_2ch;
    int64_t var_20h;
    int32_t var_18h;
    int32_t var_14h;
    int16_t var_10h;
    int16_t var_eh;
    
    puVar11 = CONCAT44(in_R8,arg2);
    iVar6 = CONCAT44(in_register_0000000c,arg1);
    uVar10 = *puVar11;
    if ((uVar10 == puVar11[0x7f]) && (*(iVar6 + 0x1fc) <= uVar10)) {
        uVar5 = *(iVar6 + 0x1fc) + 1;
        if (uVar10 == uVar5) {
            *(iVar6 + 0x1fc) = uVar5;
        }
        uVar10 = 0;
        puVar9 = puVar11 + 3;
        uStackX_20 = 0;
        if (puVar11[1] != 0) {
            do {
                cVar2 = *puVar9;
                if (cVar2 == '\0') {
                    uStack_78 = puVar9[2];
                    uStack_74 = CONCAT12(*(puVar9 + 1),*(puVar9 + 2));
                    puVar7 = *(iVar6 + 0x1f8) + puVar9[1] * 8;
                    *puVar7 = uStack_78;
                    puVar7[1] = uStack_74;
                    goto code_r0x00026655;
                }
                if (cVar2 == '\x01') {
                    uVar5 = *(iVar6 + 0x1f8) + puVar9[1] * 8;
                    puVar7 = uVar5;
                    uStack_78 = *uVar5;
                    uStack_74._3_1_ = puVar7[1] >> 0x18;
                    uStack_74 = CONCAT22(CONCAT11(uStack_74._3_1_,*(puVar9 + 1)),*(puVar9 + 2));
                    *puVar7 = uStack_78;
                    puVar7[1] = uStack_74;
code_r0x00026620:
                    puVar9 = puVar9 + 2;
                }
                else {
                    if (cVar2 == '\x02') {
                        if ((*(iVar6 + 0x1ba) - 1U <= puVar9[1]) && (uVar5 = 0, *(iVar6 + 0x1a6) != 0)) {
                            iVar13 = 0;
                            do {
                                uVar5 = uVar5 + 1;
                                uVar14 = *(iVar6 + 0x1f8) + iVar13;
                                iVar13 = iVar13 + 8;
                                uStack_78 = *uVar14;
                                uStack_74 = uVar14[1] & 0xfffdffff;
                                *uVar14 = uStack_78;
                                uVar14[1] = uStack_74;
                            } while (uVar5 < *(iVar6 + 0x1a6));
                        }
                        goto code_r0x00026620;
                    }
                    if (cVar2 == '\x03') {
                        iVar8 = 0x10 - puVar9[3];
                        while (*(puVar9 + 2) != 0) {
                            if ((puVar9[3] == '\0') && (0xf < *(puVar9 + 2))) {
                                uStack_74._0_2_ = 0;
                            }
                            else {
                                uStack_74._0_2_ = *(*(iVar6 + 0x1f8) + puVar9[2] * 8 + 4);
                                uStack_74._0_2_ =
                                     uStack_74 & ~((0xffff >> (0x10U - iVar8 & 0x1f)) << (puVar9[3] & 0x1f));
                            }
                            uStack_78 = puVar9[1];
                            uStack_74._0_3_ = CONCAT12(*(puVar9 + 1),uStack_74);
                            uStack_74 = uStack_74;
                            puVar7 = *(iVar6 + 0x1f8) + puVar9[2] * 8;
                            *puVar7 = uStack_78;
                            puVar7[1] = uStack_74;
                            puVar9[1] = puVar9[1] + 1;
                            puVar9[2] = puVar9[2] + 1;
                            *(puVar9 + 2) = *(puVar9 + 2) - iVar8;
                            *(puVar9 + 3) = '\0';
                            if (*(puVar9 + 2) < 0x10) {
                                iVar8 = *(puVar9 + 2);
                            }
                            else {
                                iVar8 = 0x10;
                            }
                        }
                        puVar9 = puVar9 + 4;
                    }
                    else {
                        if (cVar2 == '\x04') {
                            iVar8 = 0x10 - puVar9[2];
                            while (*(puVar9 + 2) != 0) {
                                uVar5 = *(iVar6 + 0x1f8) + puVar9[1] * 8;
                                uStack_78 = *uVar5;
                                uVar14 = uVar5[1];
                                uStack_74._2_2_ = uVar14 >> 0x10;
                                if ((puVar9[2] == '\0') && (0xf < *(puVar9 + 2))) {
                                    uStack_74 = uStack_74._2_2_ << 0x10;
                                }
                                else {
                                    uStack_74._0_2_ = uVar14;
                                    uStack_74 = CONCAT22(uStack_74._2_2_,
                                                         uStack_74 &
                                                         ~((0xffff >> (0x10U - iVar8 & 0x1f)) << (puVar9[2] & 0x1f)));
                                }
                                uStack_74._0_3_ = CONCAT12(*(puVar9 + 1),uStack_74);
                                *uVar5 = uStack_78;
                                uVar5[1] = uStack_74;
                                puVar9[1] = puVar9[1] + 1;
                                *(puVar9 + 2) = *(puVar9 + 2) - iVar8;
                                *(puVar9 + 2) = '\0';
                                if (*(puVar9 + 2) < 0x10) {
                                    iVar8 = *(puVar9 + 2);
                                }
                                else {
                                    iVar8 = 0x10;
                                }
                            }
                        }
                        else {
                            if (cVar2 == '\x05') {
                                iVar8 = *(puVar9 + 2);
                                while (iVar8 != 0) {
                                    uVar5 = puVar9[1];
                                    puVar9[1] = uVar5 + 1;
                                    puVar7 = *(iVar6 + 0x1f8) + uVar5 * 8;
                                    uStack_64._3_1_ = puVar7[1] >> 0x18;
                                    uStack_64 = CONCAT13(uStack_64._3_1_,0x14ffff);
                                    puVar7[1] = uStack_64;
                                    *puVar7 = ~uVar5;
                                    piVar1 = puVar9 + 2;
                                    *piVar1 = *piVar1 + -1;
                                    iVar8 = *piVar1;
                                }
                                goto code_r0x00026620;
                            }
                            if (cVar2 == '\x06') {
                                uVar14 = 0;
                                uVar5 = puVar9[1];
                                if (*(puVar9 + 2) != 0) {
                                    iVar13 = uVar5 << 3;
                                    do {
                                        uVar3 = *(iVar6 + 0x1f8) + iVar13;
                                        uStack_78 = *uVar3;
                                        uStack_74 = *(uVar3 + 4);
                                        fcn.0002ee00(uVar5,&uStack_78,0x100000);
                                        uVar14 = uVar14 + 1;
                                        puVar7 = *(iVar6 + 0x1f8) + iVar13;
                                        uVar5 = uVar5 + 1;
                                        iVar13 = iVar13 + 8;
                                        *puVar7 = uStack_78;
                                        puVar7[1] = uStack_74;
                                    } while (uVar14 < *(puVar9 + 2));
                                }
                                puVar9 = puVar9 + 2;
                                goto code_r0x00026659;
                            }
                            if (cVar2 != '\a') goto code_r0x000262b7;
                            if (puVar9[2] != 0) {
                                uStack_50 = puVar9[1];
                                var_40h._0_2_ = *(puVar9 + 3);
                                uVar12 = (puVar9[2] - 1) + uStack_50 * 0x10 + *(puVar9 + 3);
                                var_40h._2_2_ = uVar12 & 0xf;
                                iStack_4c = uVar12 >> 4;
                                iStack_58 = iVar6;
                                fcn.000307a4(uStack_50,(iStack_4c - uStack_50) + 1,0x261f0,&iStack_58);
                            }
                        }
code_r0x00026655:
                        puVar9 = puVar9 + 3;
                    }
                }
code_r0x00026659:
                uStackX_20 = uStackX_20 + 1;
            } while (uStackX_20 < puVar11[1]);
        }
        puVar9 = puVar11 + 0x7f;
        if (puVar11[2] != 0) {
            do {
                puVar9 = puVar9 + -1;
                uVar10 = uVar10 + 1;
                uVar5 = *(iVar6 + 0x1f8) + *puVar9 * 8;
                *uVar5 = ~*puVar9;
                uStack_64._3_1_ = uVar5[1] >> 0x18;
                uStack_64 = CONCAT13(uStack_64._3_1_,0x14ffff);
                *(uVar5 + 4) = uStack_64;
            } while (uVar10 < puVar11[2]);
        }
        uVar4 = 1;
    }
    else {
code_r0x000262b7:
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.000266d0 @ 0x266d0 */

bool fcn.000266d0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    int16_t iVar2;
    int iVar3;
    uint32_t arg1_00;
    unkbyte7 Var4;
    uchar auStack_2848 [10288];
    char cStack_18;
    
    uVar1 = *(arg1 + 0xb4);
    fcn.0002ef0c(auStack_2848,arg3,arg2);
    iVar2 = fcn.0002f490(auStack_2848);
    if (iVar2 == 0) {
        iVar3 = fcn.0002ef98(auStack_2848);
        arg1_00 = *0x42dd8;
        if (iVar3 == 0) {
            fcn.0002fa14(arg1_00,auStack_2848,0);
            iVar2 = fcn.0002f83c(auStack_2848);
            if (iVar2 == 0) {
                return false;
            }
            if (cStack_18 != '\0') {
                return false;
            }
code_r0x00026871:
            *(arg3 + 0x1a) = iVar2;
            *(arg3 + 0x18) = 5;
            return true;
        }
        if (iVar3 == 1) {
            fcn.0002fa14(arg1_00,auStack_2848,0);
            iVar2 = fcn.0002f854(auStack_2848);
            if (iVar2 == 0) {
                return false;
            }
            if (uVar1 != 3) goto code_r0x00026871;
            goto code_r0x0002672a;
        }
        Var4 = arg2 >> 8;
        if (iVar3 == 2) {
            fcn.0002fa14(arg1_00,auStack_2848,CONCAT71(Var4,1));
            iVar2 = fcn.0002f184(auStack_2848);
            if (iVar2 == 0) {
                *(arg3 + 0x10) = *(arg3 + 0x14);
                *(arg3 + 0x18) = 0;
                return true;
            }
            if (cStack_18 != '\0') {
                return false;
            }
            goto code_r0x0002674f;
        }
        if (iVar3 != 3) {
            return false;
        }
        fcn.0002fa14(arg1_00,auStack_2848,CONCAT71(Var4,1));
        iVar2 = fcn.0002f278(auStack_2848,uVar1);
        if (iVar2 == 0) {
            return uVar1 != 3;
        }
    }
    if (uVar1 != 3) {
code_r0x0002674f:
        *(arg3 + 0x1a) = iVar2;
        *(arg3 + 0x18) = 5;
        return true;
    }
code_r0x0002672a:
    *(arg1 + 0x1b2) = *(arg1 + 0x1b2) + 1;
    return false;
}


/* fcn.0002f920 @ 0x2f920 */

void fcn.0002f920(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    uint32_t *puVar1;
    uint64_t uStack_28;
    ulong uStack_20;
    uint uStack_14;
    uchar uStack_c;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    if ((arg2 != '\0') || (puVar1[5] != 0)) {
        uStack_20 = *(puVar1 + 2);
        uStack_28 = *puVar1;
        uStack_14 = 0x200;
        uStack_c = 0x2a;
        (****(*0x429d0 + 0x240))(*(*0x429d0 + 0x240),&uStack_28);
        puVar1[5] = 0;
    }
    return;
}


/* fcn.00025c34 @ 0x25c34 */

ulong fcn.00025c34(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iStack_2868;
    int64_t iStack_2860;
    ulong uStack_2858;
    ulong uStack_2850;
    uchar auStack_2848 [10304];
    
    iStack_2868 = *arg2;
    iStack_2860 = *(arg2 + 8);
    uVar3 = *(arg2 + 0x14);
    uStack_2858 = *(arg2 + 0x10);
    uStack_2850 = *(arg2 + 0x18);
    while( true ) {
        if (uVar3 == 0) {
            return 1;
        }
        uVar2 = uVar3;
        if (0x400000 < uVar3) {
            uVar2 = 0x400000;
        }
        uStack_2858 = CONCAT44(uVar2,uStack_2858);
        fcn.0002ef0c(auStack_2848,&iStack_2868,arg1);
        iVar1 = fcn.0002f490(auStack_2848);
        if ((iVar1 != 0) || (iVar1 = fcn.0002f084(auStack_2848), iVar1 != 0)) break;
        iStack_2860 = iStack_2860 + uStack_2858._4_4_;
        iStack_2868 = iStack_2868 + (uStack_2858._4_4_ >> 9);
        uVar3 = uVar3 - uStack_2858._4_4_;
    }
    return 0;
}


/* fcn.0002b5c8 @ 0x2b5c8 */

void fcn.0002b5c8(int64_t arg1,int64_t arg2)

{
    *arg2 = *arg1;
    *arg1 = arg2;
    return;
}


/* fcn.0002b5a0 @ 0x2b5a0 */

void fcn.0002b5a0(int64_t arg1)

{
    if (*arg1 != NULL) {
        *arg1 = **arg1;
    }
    return;
}


/* fcn.00030a7c @ 0x30a7c */

int64_t fcn.00030a7c(int64_t arg1)

{
    int64_t in_RDX;
    
    *(arg1 + 0x10) = 0;
    *(arg1 + 8) = 0;
    *arg1 = 0x37d10;
    fcn.00030af8(arg1,in_RDX);
    return arg1;
}


/* fcn.00030af8 @ 0x30af8 */

//WARNING: Removing unreachable block (ram,0x0001ba30)
//WARNING: Removing unreachable block (ram,0x0001ba35)
//WARNING: Removing unreachable block (ram,0x0001ba41)

ulong fcn.00030af8(int64_t arg1,int64_t arg2)

{
    uchar *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    *(arg1 + 0x18) = *(arg2 + 0x18);
    *(arg1 + 0x80) = *(arg2 + 0x80);
    *(arg1 + 0x88) = *(arg2 + 0x88);
    *(arg1 + 0x8c) = *(arg2 + 0x8c);
    *(arg1 + 0x90) = *(arg2 + 0x90);
    *(arg1 + 0x94) = *(arg2 + 0x94);
    fcn.0001ba1c(arg1 + 0x1c,0x11,arg2 + 0x1c,0x11);
    iVar2 = 0x29;
    iVar3 = 0x29;
    puVar1 = arg1 + 0x2d;
    if (puVar1 != NULL) {
        if (arg2 + 0x2d != 0) {
            iVar2 = (arg2 + 0x2d) - puVar1;
            do {
                *puVar1 = puVar1[iVar2];
                puVar1 = puVar1 + 1;
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            return 0;
        }
        do {
            *puVar1 = 0;
            puVar1 = puVar1 + 1;
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
    }
    return 0x8000000000000002;
}


/* fcn.00030ae0 @ 0x30ae0 */

int64_t fcn.00030ae0(int64_t arg1,int64_t arg2)

{
    fcn.00030af8(arg1,arg2);
    return arg1;
}


/* fcn.0002da78 @ 0x2da78 */

ulong * fcn.0002da78(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    ulong *puVar2;
    ulong *puVar3;
    
    puVar2 = *(arg1 + 0x10);
    puVar3 = puVar2;
    if (arg2 != 0) {
        for (; puVar3 = NULL, puVar2 != NULL; puVar2 = *puVar2) {
            iVar1 = fcn.0001bb9c(arg2,puVar2 + 0x11,0x10);
            if (iVar1 == 0) {
                return puVar2;
            }
        }
    }
    return puVar3;
}


/* fcn.0002affc @ 0x2affc */

uint64_t fcn.0002affc(uint32_t arg1)

{
    uint64_t in_RAX;
    uint in_register_0000000c;
    int64_t iVar1;
    uint8_t uVar2;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = 0;
    if (*(iVar1 + 0x50) != '\0') {
        do {
            in_RAX = *(*(iVar1 + 0x58 + uVar2 * 8) + 0x38);
            if ((*(*(in_RAX + 0x28) + 0xc) & 1) != 0) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(iVar1 + 0x50));
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00030910 @ 0x30910 */

void fcn.00030910(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    uint in_register_00000014;
    int64_t iVar3;
    int64_t arg1_00;
    uint32_t uVar4;
    int64_t iStack_268;
    uchar *puStack_260;
    int iStack_258;
    uint uStack_254;
    uchar auStack_248 [32];
    uchar auStack_228 [512];
    
    iVar3 = CONCAT44(in_register_00000014,arg2);
    *(iVar3 + 0x18) = 0x80005;
    if ((*(iVar3 + 0x1c) == -0x19) || ((*(iVar3 + 8) & 1) == 0)) {
        fcn.00030a50(auStack_248,arg2);
        iVar2 = fcn.00017a44(*(arg1 + 0xb8),auStack_248);
        if (iVar2 != 0) {
            return;
        }
    }
    else {
        uVar1 = *(iVar3 + 0x14);
        fcn.0001ba1c(&iStack_268,0x20,arg2,0x20);
        arg1_00 = *(iVar3 + 8);
        puStack_260 = auStack_228;
        uVar4 = 0;
        uStack_254 = 0x200;
        if (uVar1 >> 9 != 0) {
            do {
                if (*(iVar3 + 0x1c) == '*') {
                    fcn.0001ba1c(auStack_228,0x200,arg1_00,0x200);
                }
                fcn.00030a50(auStack_248,&iStack_268);
                iVar2 = fcn.00017a44(*(arg1 + 0xb8),auStack_248);
                if (iVar2 != 0) {
                    return;
                }
                if (*(iVar3 + 0x1c) == '(') {
                    fcn.0001ba1c(arg1_00,0x200,auStack_228,0x200);
                }
                arg1_00 = arg1_00 + 0x200;
                *(iVar3 + 0x10) = *(iVar3 + 0x10) + iStack_258;
                uVar4 = uVar4 + 1;
                iStack_268 = iStack_268 + 1;
            } while (uVar4 < uVar1 >> 9);
        }
    }
    *(iVar3 + 0x18) = 0;
    return;
}


/* fcn.00030b90 @ 0x30b90 */

void fcn.00030b90(int64_t arg1)

{
    *(arg1 + 2) = 0;
    *(arg1 + 6) = 0;
    *(arg1 + 8) = 0;
    return;
}


/* fcn.00027778 @ 0x27778 */

void fcn.00027778(int64_t arg1,int64_t arg2)

{
    ulong in_R8;
    int64_t in_R9;
    uchar auStack_e8 [224];
    
    fcn.00027220(auStack_e8,arg1,in_R8,in_R9);
    fcn.000272f4(arg1,arg2,in_R8,in_R9);
    fcn.000272f4(arg2,auStack_e8,in_R8,in_R9);
    return;
}


/* fcn.00027220 @ 0x27220 */

int64_t fcn.00027220(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    ulong *puVar1;
    
    puVar1 = -(arg2 != 0) & arg2 + 0xa8U;
    *(arg1 + 0xa8) = *puVar1;
    *(arg1 + 0xb0) = *(puVar1 + 1);
    fcn.00030a7c(arg1);
    *arg1 = 0x37b00;
    *(arg1 + 0xb8) = *(arg2 + 0xb8);
    *(arg1 + 0xc0) = *(arg2 + 0xc0);
    *(arg1 + 200) = *(arg2 + 200);
    *(arg1 + 0xd0) = *(arg2 + 0xd0);
    return arg1;
}


/* fcn.000272f4 @ 0x272f4 */

int64_t fcn.000272f4(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    ulong *puVar1;
    
    puVar1 = -(arg2 != 0) & arg2 + 0xa8U;
    *(arg1 + 0xa8) = *puVar1;
    *(arg1 + 0xb0) = *(puVar1 + 1);
    fcn.00030ae0(arg1,arg2);
    *(arg1 + 0xb8) = *(arg2 + 0xb8);
    *(arg1 + 0xc0) = *(arg2 + 0xc0);
    *(arg1 + 200) = *(arg2 + 200);
    *(arg1 + 0xd0) = *(arg2 + 0xd0);
    return arg1;
}


/* fcn.0002d720 @ 0x2d720 */

uchar fcn.0002d720(int64_t arg1,int64_t arg2)

{
    fcn.00027378(*(arg2 + 0x30));
    fcn.0002b5d4(arg1 + 0x10,arg2);
    fcn.0002b550(arg1 + 0x20,arg2);
    *arg1 = *arg1 + -1;
    return 1;
}


/* fcn.00027378 @ 0x27378 */

void fcn.00027378(int64_t arg1)

{
    *(arg1 + 0xc0) = 0;
    *(arg1 + 0x1c) = 0;
    *(arg1 + 0xd0) = 1;
    return;
}


/* fcn.0002b5d4 @ 0x2b5d4 */

int64_t fcn.0002b5d4(int64_t arg1,uint32_t arg2)

{
    ulong *puVar1;
    uint in_register_00000014;
    
    if (CONCAT44(in_register_00000014,arg2) == *arg1) {
        *arg1 = **arg1;
    }
    if (CONCAT44(in_register_00000014,arg2) == *(arg1 + 8)) {
        *(arg1 + 8) = *(*(arg1 + 8) + 8);
    }
    if (*CONCAT44(in_register_00000014,arg2) != 0) {
        *(*CONCAT44(in_register_00000014,arg2) + 8) = *(CONCAT44(in_register_00000014,arg2) + 8);
    }
    puVar1 = *(CONCAT44(in_register_00000014,arg2) + 8);
    if (puVar1 != NULL) {
        *puVar1 = *CONCAT44(in_register_00000014,arg2);
    }
    return arg1;
}


/* fcn.0002b550 @ 0x2b550 */

int64_t fcn.0002b550(int64_t arg1,int64_t arg2)

{
    if (*(arg1 + 8) == NULL) {
        *arg1 = arg2;
        *(arg2 + 8) = 0;
    }
    else {
        **(arg1 + 8) = arg2;
        *(arg2 + 8) = *(arg1 + 8);
    }
    *arg2 = 0;
    *(arg1 + 8) = arg2;
    return arg1;
}


/* fcn.00028d44 @ 0x28d44 */

uint64_t fcn.00028d44(int64_t arg1,uint32_t arg2)

{
    int64_t *piVar1;
    uint in_register_00000014;
    int64_t iVar2;
    
    piVar1 = *(arg1 + 0x38);
    iVar2 = piVar1[2];
    piVar1[1] = iVar2;
    while( true ) {
        if (iVar2 == 0) {
            return piVar1 & 0xffffffffffffff00;
        }
        if ((*(iVar2 + 0x30) == CONCAT44(in_register_00000014,arg2)) && (*(*(*(iVar2 + 0x28) + 0x68) + 0x28) != 0))
        break;
        piVar1 = *(*(arg1 + 0x38) + 8);
        iVar2 = *piVar1;
        *(*(arg1 + 0x38) + 8) = iVar2;
    }
    return CONCAT71(*(iVar2 + 0x28) >> 8,1);
}


/* fcn.000314f0 @ 0x314f0 */

void fcn.000314f0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    bool bVar2;
    char cVar3;
    int64_t iVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    int64_t arg2_00;
    uint64_t arg3;
    
    uVar1 = *(arg2 + 0xc0);
    arg3 = uVar1;
    if (((uVar1 >> 0x19 & 1) != 0) || ((uVar1 >> 0x18 & 1) != 0)) {
        if ((uVar1 & 0xc28387) == 0) {
            return;
        }
        *(arg2 + 0xc0) = uVar1 & 0xff3d7c78;
        fcn.000277c4(arg2);
        return;
    }
    bVar2 = true;
    if ((((*0x43909 != '\0') && (*0x4390a != '\0')) && ((*(arg2 + 0x8c) >> 4 & 1) == 0)) &&
       (uVar6 = 0, iVar4 = *0x43c08, *(*0x43c08 + 0x1b48) != '\0')) {
        do {
            arg3 = iVar4 + 0x48;
            if (uVar6 < *(iVar4 + 0x1b48)) {
                arg2_00 = uVar6 * 0xd8 + arg3;
            }
            else {
                arg2_00 = 0;
            }
            if ((arg2_00 != 0) && ((*(arg2_00 + 0x8c) >> 4 & 1) != 0)) {
                arg3 = CONCAT71(arg3 >> 8,0x28);
                fcn.0002910c(iVar4,arg2_00,arg3,*0x43910);
                if (*(*0x43c08 + 0x40) != 0) {
                    arg3 = CONCAT71(arg3 >> 8,0x28);
                    fcn.0002910c(*0x43c08,arg2_00,arg3,*0x43910 + 0x1f);
                }
                cVar3 = fcn.00031348(*(arg1 + 8));
                iVar4 = *0x43c08;
                if (cVar3 == '\0') {
                    *0x4390a = '\0';
                    bVar2 = true;
                }
                else {
                    bVar2 = false;
                }
            }
            uVar5 = uVar6 + 1;
            uVar6 = uVar5;
        } while (uVar5 < *(iVar4 + 0x1b48));
        if (!bVar2) goto code_r0x0003168b;
    }
    iVar4 = fcn.0002739c(arg2);
    fcn.0002910c(*0x43c08,arg2,CONCAT71(arg3 >> 8,0x28),iVar4);
code_r0x0003168b:
    fcn.000316b4(arg1,arg2);
    return;
}


/* fcn.00030e44 @ 0x30e44 */

int * fcn.00030e44(uint32_t arg1)

{
    int *piVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    int *piVar3;
    uint8_t uVar4;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar4 = 0;
    piVar1 = iVar2 + 0xd8 + *(iVar2 + 0x38) * 0x30;
    if (*(iVar2 + 0x39) != '\0') {
        do {
            piVar1 = fcn.00034e44(piVar1 + 0x50,0);
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(iVar2 + 0x39));
    }
    piVar3 = NULL;
    if (*piVar1 == -0x54524ef4) {
        piVar3 = piVar1;
    }
    return piVar3;
}


/* fcn.00027638 @ 0x27638 */

void fcn.00027638(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    *(arg1 + 0xaa) = *(arg1 + 0xaa) + 1;
    *(arg1 + 0xae) = arg3;
    *(arg1 + 0xb0) = arg2;
    if (arg3 == 3) {
        *(arg1 + 0xac) = *(arg1 + 0xac) + 1;
        fcn.000277c4(arg1);
    }
    return;
}


/* fcn.0002783c @ 0x2783c */

uchar fcn.0002783c(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int16_t iVar2;
    int64_t iVar3;
    uint16_t uVar4;
    uchar uVar5;
    uint8_t uVar6;
    uint8_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    bool bVar11;
    
    uVar5 = 0;
    iVar3 = *(*(*0x43c08 + 0x30) + 8);
    cVar1 = fcn.00028d44(*0x43c08,arg2);
    if (cVar1 != '\0') {
        uVar9 = 0;
        if (*(iVar3 + 0x38) != '\0') {
            do {
                iVar2 = fcn.0001bb9c(uVar9 * 0x30 + 0xd8 + iVar3,arg2 + 0x1c,0x10);
                if (iVar2 == 0) goto code_r0x000278d6;
                uVar6 = uVar9 + 1;
                uVar9 = uVar6;
            } while (uVar6 < *(iVar3 + 0x38));
        }
        fcn.000314f0(*(*0x43c08 + 0x30),arg2);
code_r0x000278d6:
        if (*(iVar3 + 0x48) == 0) goto code_r0x00027994;
        uVar8 = 0;
        uVar6 = 0xff;
        if (*(iVar3 + 0x38) != '\0') {
            do {
                uVar6 = uVar8;
                if ((arg2 + 0x1c != 0) &&
                   (iVar2 = fcn.0001bb9c(arg2 + 0x1c,iVar3 + 0xd8 + uVar8 * 0x30,0x10), iVar2 == 0)) break;
                uVar7 = uVar6 + 1;
                uVar8 = uVar7;
                uVar6 = 0xff;
            } while (uVar7 < *(iVar3 + 0x38));
        }
        iVar3 = fcn.00030e44(iVar3);
        if (iVar3 != 0) {
            uVar4 = 0;
            bVar11 = *(iVar3 + 4) != 0;
            while (bVar11) {
                uVar9 = uVar4;
                uVar7 = *(iVar3 + 9 + uVar9 * 8);
                if (uVar6 < uVar7) break;
                if (((uVar7 == uVar6) &&
                    (uVar10 = CONCAT24(*(iVar3 + 0xe + uVar9 * 8),*(iVar3 + 10 + uVar9 * 8)),
                    *arg1 <= *(iVar3 + 8 + uVar9 * 8) + uVar10)) && (uVar10 <= ((*(arg1 + 0x14) >> 9) - 1) + *arg1)) {
                    uVar5 = 1;
                    break;
                }
                uVar4 = uVar4 + 1;
                bVar11 = uVar4 < *(iVar3 + 4);
            }
            goto code_r0x00027994;
        }
    }
    uVar5 = 0;
code_r0x00027994:
    return uVar5;
}


/* fcn.0002a0a8 @ 0x2a0a8 */

void fcn.0002a0a8(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint in_register_00000014;
    uint8_t uVar2;
    
    uVar2 = 0;
    iVar1 = CONCAT44(in_register_00000014,arg2);
    if (*(CONCAT44(in_register_00000014,arg2) + 0x43) != '\0') {
        do {
            arg2 = CONCAT31(arg2 >> 8,*(uVar2 + 0x44 + iVar1));
            fcn.0002a010(arg1,CONCAT44(in_register_00000014,arg2));
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(iVar1 + 0x43));
    }
    return;
}


/* fcn.00031cdc @ 0x31cdc */

void fcn.00031cdc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t arg2_00;
    int64_t *piVar2;
    int64_t iStackX_8;
    uint8_t auStackX_10 [8];
    uint in_stack_00000028;
    ulong in_stack_00000030;
    uchar in_stack_00000038;
    uchar auStack_68 [56];
    int64_t iStack_30;
    
    fcn.00027808(auStack_68);
    iVar1 = *(*(arg1 + 0x20) + 0x20);
    *(arg1 + 0x40) = in_stack_00000028;
    *(arg1 + 0x60) = in_stack_00000030;
    *(arg1 + 0x48) = in_stack_00000038;
    *(arg1 + 0x50) = auStack_68;
    *(arg1 + 0x30) = arg2;
    *(arg1 + 0x28) = iVar1;
    *(arg1 + 0x18) = arg3;
    *(arg1 + 0x38) = arg4;
    *(arg1 + 0x4a) = 0;
    *(arg1 + 0x44) = 0;
    iStack_30 = arg1;
    fcn.0002a5d4(iVar1,arg3 & 0xffffffff,arg4,auStackX_10);
    *(arg1 + 0x10) = 0;
    *(arg1 + 0x68 + auStackX_10[0] * 8) = *(arg1 + 0x50);
    iVar1 = *(arg1 + 0x68 + auStackX_10[0] * 8);
    piVar2 = (auStackX_10[0] + 7) * 0x10 + *(arg1 + 0x28);
    arg2_00 = *piVar2;
    fcn.0002781c(iVar1,arg2_00,CONCAT71(arg4 >> 8,*(arg1 + 0x30)),iStackX_8);
    *(iVar1 + 0x48) = auStackX_10[0];
    *(iVar1 + 0x30) = piVar2;
    fcn.000279f8(iVar1,CONCAT71(arg2_00 >> 8,*(arg1 + 0x30)));
    fcn.00031c60(arg1,iVar1);
    return;
}


/* fcn.0002a5d4 @ 0x2a5d4 */

void fcn.0002a5d4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong in_stack_00000028;
    
    if (arg2 == 0) {
        (**(*arg1 + 0x18))(arg1,arg3,arg4,in_stack_00000028);
    }
    else if (arg2 == 1) {
    //WARNING: Could not recover jumptable at 0x0002a5f9. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*arg1 + 0x20))(arg1,arg3,arg4,in_stack_00000028);
        return;
    }
    return;
}


/* fcn.0002781c @ 0x2781c */

void fcn.0002781c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_stack_00000028;
    ulong in_stack_00000030;
    
    *(arg1 + 0x14) = in_stack_00000028;
    *(arg1 + 8) = in_stack_00000030;
    *(arg1 + 0x1c) = arg3;
    *(arg1 + 0x40) = arg4;
    *arg1 = arg4;
    *(arg1 + 0x30) = arg2;
    return;
}


/* fcn.000279f8 @ 0x279f8 */

void fcn.000279f8(uint32_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t arg2_00;
    int64_t iVar2;
    char cVar3;
    uint in_register_0000000c;
    int64_t *arg1_00;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    piVar1 = arg1_00[6];
    arg2_00 = *piVar1;
    *(arg1_00 + 0x1c) = arg2;
    iVar2 = *(arg1_00[7] + 0x20);
    *arg1_00 = *(iVar2 + 0x38) + *(iVar2 + 0x30) + arg1_00[8];
    if (((piVar1[1] == '\0') && (((*(*piVar1 + 0xc0) >> 0x18 & 1) != 0 || ((*(*piVar1 + 0xc0) & 0xc) == 8)))) ||
       (((*(arg2_00 + 0xc0) >> 3 & 1) != 0 && ((*(*(arg1_00[7] + 0x28) + 0x28) & 0x21) != 0)))) {
        cVar3 = fcn.0002783c(arg1_00,arg2_00);
        if (cVar3 == '\0') {
            fcn.00030910(arg2_00,arg1);
        }
        else {
            *(arg1_00 + 3) = 0x20005;
        }
    }
    else {
        *(arg1_00 + 3) = 0x30005;
    }
    return;
}


/* fcn.00031c60 @ 0x31c60 */

void fcn.00031c60(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t *piVar2;
    uint64_t in_R8;
    int64_t arg3;
    uint64_t arg4;
    
    piVar2 = *(arg2 + 0x30);
    if (piVar2[1] == '\0') {
        uVar1 = *(*piVar2 + 0xc0);
        in_R8 = uVar1;
        if (((uVar1 >> 0x18 & 1) == 0) && (in_R8 = uVar1 & 0xffffffffffffff0c, in_R8 != '\b')) goto code_r0x00031c91;
    }
    else {
code_r0x00031c91:
        if (((*(*piVar2 + 0xc0) >> 3 & 1) == 0) || ((*(*(arg1 + 0x28) + 0x28) & 0x21) == 0)) {
            arg4 = 0;
            arg3 = 0;
            goto code_r0x00031ccc;
        }
    }
    arg3 = CONCAT71(in_R8 >> 8,*(arg2 + 0x18));
    if (*(arg2 + 0x18) == '\0') {
        return;
    }
    arg4 = *(arg2 + 0x1a);
code_r0x00031ccc:
    fcn.00031b98(arg1,arg2,arg3,arg4);
    return;
}


/* fcn.00029fcc @ 0x29fcc */

void fcn.00029fcc(int64_t arg1,int64_t arg2)

{
    int16_t *piVar1;
    int64_t iVar2;
    
    iVar2 = *(arg1 + ((arg2 & 0xffU) + 7) * 0x10);
    piVar1 = iVar2 + 0xa8;
    *piVar1 = *piVar1 + 1;
    if (1 < *(iVar2 + 0xa8)) {
        fcn.0002a010(arg1,arg2);
    }
    return;
}


/* fcn.0002a398 @ 0x2a398 */

bool fcn.0002a398(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t arg3_00;
    uint8_t uVar3;
    
    arg3_00 = fcn.0002a460(arg1,*arg2,CONCAT71(arg3 >> 8,*arg3));
    uVar3 = 0;
    if (0 < *(arg1 + 100) - 1) {
        do {
            uVar2 = (*(arg1 + 0x68) + 1) % *(arg1 + 100);
            *(arg1 + 0x68) = uVar2;
            fcn.0002a5d4(arg1,uVar2 & 0xffffffff,arg3_00,arg3);
            if ((*(arg1 + 8 + (*arg3 + 7) * 0x10) == '\0') &&
               ((uVar1 = *(*(arg1 + (*arg3 + 7) * 0x10) + 0xc0), (uVar1 >> 0x18 & 1) != 0 || ((uVar1 & 0xc) == 8))))
            break;
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(arg1 + 100) - 1);
    }
    return uVar3 != *(arg1 + 100) - 1;
}


/* fcn.00027cf4 @ 0x27cf4 */

//WARNING: Possible PIC construction at 0x00027e19: Changing call to branch
//WARNING: Removing unreachable block (ram,0x00027e1e)

void fcn.00027cf4(uint32_t arg1)

{
    uchar uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t arg4;
    char cVar4;
    ushort uVar5;
    uint in_register_0000000c;
    int64_t iVar6;
    int64_t in_RDX;
    int64_t unaff_RBX;
    ulong *puVar7;
    
    iVar6 = CONCAT44(in_register_0000000c,arg1);
    while (*(iVar6 + 0x60) == 0) {
        uVar5 = 0;
        if (*(iVar6 + 0x43) == '\0') {
            *(iVar6 + 0x42) = 0;
code_r0x00027d3a:
            *(iVar6 + 0x40) = uVar5;
            return;
        }
        if (*(*(iVar6 + 0x20) + 8) == 3) {
            *(iVar6 + 0x42) = 6;
            uVar5 = 7;
            goto code_r0x00027d3a;
        }
        in_RDX = iVar6;
        if (*(*(*(iVar6 + 0x28) + 0x10) + 0x1a) == 2) {
            *(iVar6 + 0x42) = 5;
            *(iVar6 + 0x40) = 2;
            return;
        }
    }
    *(iVar6 + 0x1c8) = 0;
    *(iVar6 + 0x28) = iVar6 + 0x50;
    while( true ) {
        *(*0x20 + -8) = unaff_RBX;
        *(iVar6 + 0x43) = 0;
        iVar3 = *(*(iVar6 + 0x28) + 0x10);
        *(*0x20 + 0x10) = *(iVar3 + 0x40);
        uVar1 = *(iVar3 + 0x48);
        *(*0x20 + 8) = uVar1;
        if (*(iVar3 + 0x1a) != 2) {
            iVar3 = *(iVar6 + 0x20);
            *(*0x20 + -0x50) = 0x27d9b;
            fcn.00029fcc(iVar3,CONCAT71(in_RDX >> 8,uVar1));
        }
        iVar3 = *(iVar6 + 0x20);
        if (*(iVar3 + 100) - 1 <= *(iVar6 + 0x1c8)) break;
        *(*0x20 + -0x50) = 0x27dbe;
        cVar4 = fcn.0002a398(iVar3,*0x20 + 0x10,*0x20 + 8);
        if (cVar4 == '\0') break;
        iVar3 = *(iVar6 + 0x20);
        arg4 = *(iVar6 + 0x1a8);
        *(*0x20 + -0x18) = *(*0x20 + 8);
        uVar2 = *(iVar3 + 0x68);
        in_RDX = CONCAT71(iVar3 >> 8,0x28);
        *(*0x20 + -0x20) = *(iVar6 + 0x1c0);
        *(*0x20 + -0x28) = *(iVar6 + 0x1b8);
        *(*0x20 + -0x50) = 0x27dfd;
        fcn.00031cdc(iVar6 + 0xe8,in_RDX,uVar2,arg4);
        if (*(iVar6 + 0x43) == '\0') {
            *(iVar6 + 0x60) = 0;
            *(*0x20 + -0x50) = 0x27e10;
            fcn.00027cf4(arg1);
            return;
        }
        *(iVar6 + 0x1c8) = *(iVar6 + 0x1c8) + 1;
        puVar7 = *0x20 + -0x50;
        *0x20 = *0x20 + -0x50;
        *puVar7 = 0x27e1e;
        unaff_RBX = iVar6;
    }
    *(iVar6 + 0x42) = 6;
    *(iVar6 + 0x40) = 7;
    return;
}


/* fcn.0002b8e8 @ 0x2b8e8 */

void fcn.0002b8e8(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_20 [2];
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = *(iVar2 + 0x20);
    arg1_00 = *(iVar1 + 200);
    if (((*(*(*(*(iVar1 + 0xc0) + 0x38) + 0x28) + 0xc) == 0x10) && (*(iVar2 + 0x53) != '\0')) &&
       (*(iVar2 + 0x54) - 2U < 2)) {
        fcn.0002c0bc(iVar1,auStackX_20,auStackX_8);
        fcn.0002aea0(arg1_00);
        iVar1 = fcn.0002c0fc(iVar1);
        fcn.00033b50(*0x42de8,auStackX_20[0],auStackX_8[0],iVar1);
        fcn.00033b80(*0x42de8,arg2 & 0xffffffff,arg3 & 0xffffffff);
    }
    return;
}


/* fcn.0002c0bc @ 0x2c0bc */

void fcn.0002c0bc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    
    uVar1 = *(*(*(arg1 + 0xd8) + 0x10) + 0x50) * 2;
    *arg2 = uVar1;
    iVar2 = *(arg1 + 0xe0) / uVar1;
    *arg3 = iVar2;
    if (*arg2 * iVar2 < *(arg1 + 0xe0)) {
        *arg3 = iVar2 + 1;
    }
    return;
}


/* fcn.0002aea0 @ 0x2aea0 */

uint32_t fcn.0002aea0(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    int iVar4;
    int64_t noname_1;
    uint32_t uVar5;
    uint32_t in_R8D;
    
    noname_1 = *(*(arg1 + 0x58) + 0x38);
    iVar2 = *(noname_1 + 0x28);
    uVar5 = *(iVar2 + 0x20) * *(iVar2 + 0x30) * 2;
    iVar3 = fcn.00033b38(uVar5);
    uVar1 = *(iVar2 + 0x18);
    uVar5 = uVar1 + 0x108 + uVar5;
    iVar4 = fcn.0002ad54(arg1,noname_1,in_R8D);
    if (iVar4 - 0x1a1U < uVar5 + iVar3) {
        uVar5 = -iVar3 - 8U & uVar1;
    }
    return uVar5;
}


/* fcn.00033b50 @ 0x33b50 */

void fcn.00033b50(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_stack_00000028;
    
    *(arg1 + 0x1c) = 0xffffffff;
    *(arg1 + 0x20) = 0;
    *(arg1 + 0x10) = 0x4ab00;
    *(arg1 + 0x30) = in_stack_00000028;
    *(arg1 + 0x18) = 1;
    *(arg1 + 8) = arg2;
    *arg1 = arg3;
    *(arg1 + 0x28) = arg4;
    return;
}


/* fcn.00033b80 @ 0x33b80 */

void fcn.00033b80(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint8_t *puVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint8_t uVar7;
    
    uVar2 = *(arg1 + 8);
    uVar6 = (arg2 & 0xffffffffU) / *(arg1 + 8);
    uVar5 = uVar6;
    while (uVar5 <= (arg2 + -1 + (arg3 >> 9 & 0x7fffff)) / uVar2) {
        iVar3 = uVar6 >> 0xc;
        *(arg1 + 0x34) = iVar3;
        if (iVar3 != *(arg1 + 0x1c)) {
            if (*(arg1 + 0x20) != 0) {
                fcn.00033cf8(arg1,0x4ab00,*(arg1 + 0x28),*(arg1 + 0x30) + *(arg1 + 0x1c));
            }
            fcn.00033cac(arg1,0x4ab00,*(arg1 + 0x28),*(arg1 + 0x30) + *(arg1 + 0x34));
            *(arg1 + 0x20) = 0;
            *(arg1 + 0x1c) = *(arg1 + 0x34);
        }
        puVar4 = (uVar6 >> 3 & 0x1ff) + *(arg1 + 0x10);
        uVar7 = '\x01' << (uVar6 & 7);
        uVar1 = *puVar4;
        *puVar4 = uVar1 | uVar7;
        if ((uVar7 & uVar1) == 0) {
            *(arg1 + 0x20) = *(arg1 + 0x20) + 1;
        }
        uVar5 = uVar6 + 1;
        uVar6 = uVar5;
    }
    if (*(arg1 + 0x20) != 0) {
        fcn.00033cf8(arg1,0x4ab00,*(arg1 + 0x28),*(arg1 + 0x30) + *(arg1 + 0x1c));
        *(arg1 + 0x20) = 0;
    }
    return;
}


/* fcn.0002844c @ 0x2844c */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_20h

void fcn.0002844c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int32_t arg_50h,int8_t arg_58h,
                 int8_t arg_60h,int8_t arg_68h,int16_t arg_70h)

{
    int64_t iVar1;
    bool bVar2;
    uint64_t uVar3;
    int iVar4;
    int16_t iVar5;
    uint16_t uVar6;
    uint64_t arg2_00;
    uint in_stack_00000028;
    uint8_t in_stack_00000030;
    uint8_t in_stack_00000038;
    uint8_t in_stack_00000040;
    uint64_t uStack_38;
    uchar uStack_30;
    ushort uStack_2e;
    int64_t var_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    int8_t var_bp_8h;
    int16_t var_6h;
    
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_2e = 0x10;
    fcn.0002fdc8(&uStack_38,0);
    uVar3 = uStack_38;
    arg2_00 = 0;
    *(arg1 + 0x43) = 0;
    *(arg1 + 0x28) = *(arg2 + 0x28);
    *(arg1 + 0x44) = *(arg2 + 0x44);
    iVar1 = *(arg2 + 0x20);
    *(arg1 + 0xe8) = arg4;
    *(arg1 + 0xf0) = in_stack_00000028;
    *(arg1 + 0xf9) = in_stack_00000030;
    *(arg1 + 0x20) = iVar1;
    *(arg1 + 0xf8) = in_stack_00000040;
    *(arg1 + 0x42) = 0;
    *(arg1 + 0x40) = 0;
    *(arg1 + 0xf6) = 2;
    *(arg1 + 0xf4) = in_stack_00000038;
    if (in_stack_00000040 < in_stack_00000030) {
        in_stack_00000040 = in_stack_00000040 + *(iVar1 + 0x2c);
    }
    if (in_stack_00000040 < in_stack_00000030 + in_stack_00000038) {
        uVar6 = in_stack_00000038 - 1;
        arg2_00 = uVar6;
        *(arg1 + 0xf4) = uVar6;
    }
    iVar5 = *(arg1 + 0xf4);
    if (2 < iVar5) {
        iVar5 = 2;
    }
    *(arg1 + 0xfa) = iVar5;
    if (arg_50h < iVar5) {
        arg_50h._0_2_ = iVar5;
    }
    *(arg1 + 0xf6) = arg_50h;
    bVar2 = true;
    do {
        if (*(arg1 + 0xf4) < 1) {
code_r0x0002864d:
            fcn.0002fca4(uStack_38);
            return;
        }
        arg2_00 = CONCAT71(arg2_00 >> 8,0x28);
        fcn.00031a38(arg1 + 0x50,arg2_00,arg1 + 0xf9,*(arg1 + 0xfa));
        if (*(arg1 + 0x9a) != 0) {
            if (*(*(arg1 + 0x60) + 0x1a) == 2) {
                *(arg1 + 0x40) = 2;
            }
            else {
                *(arg1 + 0x40) = 7;
            }
            *(arg1 + 0x42) = 6;
            goto code_r0x0002864d;
        }
        if ((1 < *(arg1 + 0xfa)) || (!bVar2)) {
            arg2_00 = uVar3;
            fcn.00032100(*(arg1 + 0xf0),uVar3,arg3,arg3);
        }
        *(arg1 + 0xf4) = *(arg1 + 0xf4) - *(arg1 + 0xfa);
        iVar5 = *(arg1 + 0xf4);
        bVar2 = false;
        if (0 < iVar5) {
            iVar4 = *(arg1 + 0xf6) + -1;
            if (iVar4 < iVar5) {
                iVar5 = iVar4;
            }
            *(arg1 + 0xfa) = iVar5;
        }
    } while( true );
}


/* fcn.00032100 @ 0x32100 */

void fcn.00032100(int64_t arg1,uint32_t arg2,uint32_t arg3,uint32_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint in_register_00000014;
    int64_t iVar3;
    uint in_R8;
    int64_t iVar4;
    uint in_R9;
    uint32_t *puVar5;
    
    puVar5 = CONCAT44(in_R9,arg4);
    uVar2 = arg1 >> 2 & 0x3fffffff;
    if (uVar2 != 0) {
        iVar3 = CONCAT44(in_register_00000014,arg2) - puVar5;
        iVar4 = CONCAT44(in_R8,arg3) - puVar5;
        do {
            *puVar5 = *(iVar4 + puVar5) ^ *(iVar3 + puVar5);
            puVar5 = puVar5 + 1;
            uVar1 = uVar2 - 1;
            uVar2 = uVar1;
        } while (uVar1 != 0);
    }
    return;
}


/* fcn.000319fc @ 0x319fc */

void fcn.000319fc(int64_t noname_0,int64_t noname_1,int64_t arg1,int64_t arg2)

{
    uchar auStackX_18 [16];
    
    auStackX_18[0] = arg1;
    fcn.00031a38(noname_0,noname_1,auStackX_18,1);
    return;
}


/* fcn.00031a38 @ 0x31a38 */

void fcn.00031a38(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg2_00;
    int16_t iVar1;
    int16_t iVar2;
    uint64_t uVar3;
    char in_stack_00000028;
    int64_t in_stack_00000030;
    uchar auStack_78 [24];
    char cStack_60;
    int16_t iStack_5e;
    int64_t iStack_48;
    int64_t iStack_40;
    uint8_t uStack_30;
    
    iVar1 = arg4;
    uVar3 = arg3;
    fcn.00027808(auStack_78);
    *(arg1 + 0x28) = *(*(arg1 + 0x20) + 0x20);
    iVar2 = 0;
    *(arg1 + 0x44) = 0;
    *(arg1 + 0x4a) = 0;
    if (0 < iVar1) {
        iStack_40 = arg1;
        do {
            if (*arg3 != in_stack_00000028) {
                arg2_00 = *(*(arg1 + 0x28) + (*arg3 + 7) * 0x10);
                fcn.0002781c(auStack_78,arg2_00,CONCAT71(uVar3 >> 8,arg2),in_stack_00000030);
                uStack_30 = *arg3;
                iStack_48 = (uStack_30 + 7) * 0x10 + *(arg1 + 0x28);
                fcn.000279f8(auStack_78,CONCAT71(arg2_00 >> 8,arg2));
                fcn.00031c60(arg1,auStack_78);
                iVar1 = iVar1 + -1;
                if ((cStack_60 != '\0') && (iStack_5e != 2)) break;
                if (iStack_5e == 2) {
                    iVar2 = iVar2 + 1;
                }
            }
            uVar3 = *(*(arg1 + 0x28) + 0x2c);
            *arg3 = (*arg3 + 1) % uVar3;
        } while (0 < iVar1);
    }
    if ((0 < *(arg1 + 0x4a)) && (iVar2 == *(arg1 + 0x4a))) {
        *(*(arg1 + 0x10) + 0x1a) = 2;
    }
    return;
}


/* fcn.00032124 @ 0x32124 */

void fcn.00032124(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t in_stack_00000028;
    
    uVar2 = arg1 >> 2 & 0x3fffffff;
    if (uVar2 != 0) {
        arg2 = arg2 - arg3;
        iVar3 = in_stack_00000028 - arg3;
        arg4 = arg4 - arg3;
        do {
            *(iVar3 + arg3) = *(arg4 + arg3) ^ *(arg2 + arg3) ^ *arg3;
            arg3 = arg3 + 4;
            uVar1 = uVar2 - 1;
            uVar2 = uVar1;
        } while (uVar1 != 0);
    }
    return;
}


/* fcn.00028674 @ 0x28674 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_8h

void fcn.00028674(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int16_t unaff_DI;
    char *pcVar2;
    int64_t iVar3;
    char acStackX_8 [8];
    char acStackX_10 [8];
    uint32_t var_bp_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    uint32_t *puVar4;
    uint in_stack_ffffffffffffffc8;
    ushort uVar5;
    int8_t in_stack_ffffffffffffffd0;
    uint32_t arg1_00;
    int64_t arg3;
    int64_t iVar6;
    int8_t arg_68h;
    int64_t var_10h;
    int8_t var_8h;
    int16_t var_6h;
    
    uVar5 = in_stack_ffffffffffffffc8 >> 0x10;
    arg3 = 0;
    arg_68h = 0;
    *(arg1 + 0xfc) = *(arg2 + 0x44);
    puVar4 = &var_bp_20h;
    iVar3 = *(arg2 + 0x20);
    *(arg1 + 0x100) = arg2;
    *(arg1 + 0x20) = iVar3;
    fcn.0002a5d4(iVar3,0,*(arg2 + 0x1a8),acStackX_10);
    pcVar2 = acStackX_8;
    uVar1 = *(*(arg1 + 0x100) + 0x1a8);
    (**(**(arg1 + 0x20) + 0x20))(*(arg1 + 0x20),uVar1,pcVar2,&var_28h,puVar4);
    iVar3 = CONCAT71(pcVar2 >> 8,acStackX_10[0]);
    if (acStackX_10[0] == *(arg1 + 0xfc)) {
        fcn.0002fdc8(&stack0xffffffffffffffd8,0);
        fcn.0002844c(arg1,arg1,arg3,_var_bp_20h,CONCAT22(uVar5,1),in_stack_ffffffffffffffd0,arg3,arg_68h,
                     unaff_DI);
        uVar1 = *(arg2 + 0x1c0);
        iVar6 = arg3;
        fcn.00032100(*(arg1 + 0xf0),uVar1,arg3,arg3);
        iVar3 = CONCAT71(arg3 >> 8,acStackX_8[0]);
        arg3 = iVar6;
    }
    else {
        if (acStackX_8[0] != *(arg1 + 0xfc)) {
            fcn.000280e0(arg2);
            arg1_00 = arg3;
            goto code_r0x000287b5;
        }
        var_28h = _var_bp_20h;
    }
    arg1_00 = arg3;
    fcn.000319fc(arg1 + 0x50,CONCAT71(uVar1 >> 8,0x2a),iVar3,var_28h);
code_r0x000287b5:
    fcn.0002fca4(arg1_00);
    return;
}


/* fcn.000319b4 @ 0x319b4 */

void fcn.000319b4(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint in_register_00000014;
    int16_t iVar2;
    
    iVar2 = 0;
    iVar1 = CONCAT44(in_register_00000014,arg2);
    if (*(CONCAT44(in_register_00000014,arg2) + 0x43) != '\0') {
        do {
            arg2 = CONCAT31(arg2 >> 8,*(iVar2 + 0x44 + iVar1));
            fcn.00031984(arg1,arg2);
            iVar2 = iVar2 + 1;
        } while (iVar2 < *(iVar1 + 0x43));
    }
    return;
}


/* fcn.000280e0 @ 0x280e0 */

void fcn.000280e0(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t var_20h;
    int8_t var_bp_18h;
    int16_t var_16h;
    int64_t var_bp_10h;
    int8_t var_bp_8h;
    int16_t var_6h;
    
    var_bp_10h = 0;
    var_bp_8h = 0;
    var_20h = 0;
    var_bp_18h = 0;
    var_6h = 0x10;
    var_16h = 0x10;
    fcn.0002fdc8(&var_bp_10h,0);
    uVar3 = 0;
    fcn.0002fdc8(&var_20h,0);
    iVar1 = arg1 + 0x50;
    iVar2 = CONCAT71(uVar3 >> 8,0x28);
    *(arg1 + 0x42) = 0;
    *(arg1 + 0x40) = 0;
    fcn.00031cdc(iVar1,iVar2,0,*(arg1 + 0x1a8));
    iVar2 = CONCAT71(iVar2 >> 8,0x28);
    fcn.00031cdc(iVar1,iVar2,1,*(arg1 + 0x1a8));
    fcn.00031cdc(iVar1,CONCAT71(iVar2 >> 8,0x2a),0,*(arg1 + 0x1a8));
    iVar2 = *(arg1 + 0x1c0);
    fcn.00032124(*(arg1 + 0x1b8),iVar2,var_bp_10h,var_20h);
    fcn.00031cdc(iVar1,CONCAT71(iVar2 >> 8,0x2a),1,*(arg1 + 0x1a8));
    iVar1 = *0x43c08;
    if (*(arg1 + 0x43) != '\0') {
        if (*(arg1 + 0x43) == '\x01') {
            iVar2 = *0x43c08 + 0x1d28;
            *(*0x43c08 + 0x1d58) = *(arg1 + 0x30);
            *(iVar1 + 0x1d60) = *(arg1 + 0x38);
            *(iVar1 + 0x1e18) = *(arg1 + 0x1b8);
            fcn.00028674(iVar2,arg1);
        }
        else {
            fcn.0002a0a8(*(arg1 + 0x20),arg1);
            *(arg1 + 0x42) = 6;
            *(arg1 + 0x40) = 7;
        }
    }
    fcn.0002fca4(var_20h);
    fcn.0002fca4(var_bp_10h);
    return;
}


/* fcn.0002b350 @ 0x2b350 */

ulong fcn.0002b350(uint32_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    ulong uVar2;
    uint in_register_0000000c;
    
    uVar1 = *arg2;
    if (uVar1 < *(CONCAT44(in_register_0000000c,arg1) + 0x50)) {
        uVar2 = *(CONCAT44(in_register_0000000c,arg1) + 0x58 + uVar1 * 8);
        *arg2 = uVar1 + 1;
        return uVar2;
    }
    return 0;
}


/* fcn.000271c4 @ 0x271c4 */

int64_t fcn.000271c4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = fcn.0002b5a0(*arg1);
    if (iVar1 == 0) {
        *(arg1 + 0x10) = 0;
        iVar1 = 0;
    }
    else {
        iVar1 = iVar1 + 0x10;
        *0x43b88 = arg2;
        *(arg1 + 8) = iVar1;
        *(arg1 + 0x10) = 0x358;
    }
    return iVar1;
}


/* fcn.0002be80 @ 0x2be80 */

int64_t fcn.0002be80(int64_t arg1,int64_t arg2,int64_t arg3)

{
    fcn.00030aa8(arg1);
    *(arg1 + 0xb9) = arg2;
    *arg1 = 0x37b90;
    *(arg1 + 0xd8) = 0;
    *(arg1 + 0xf1) = 0;
    *(arg1 + 0xf0) = 0;
    fcn.0002c1f0(arg1,arg3);
    *(arg1 + 0xa0) = 2;
    return arg1;
}


/* fcn.0002c1f0 @ 0x2c1f0 */

int64_t fcn.0002c1f0(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    uint uVar2;
    ulong uVar3;
    int64_t iVar4;
    char *arg1_00;
    int64_t iVar5;
    int64_t iVar6;
    
    *(arg1 + 0xc0) = arg2;
    arg1_00 = arg1 + 0xa8;
    *arg2 = arg1;
    fcn.0001bbd0(arg1_00,arg2 + 0x10,0x10);
    *(arg1 + 0xb8) = 0;
    iVar4 = fcn.00027170(0x60);
    if (iVar4 == 0) {
        iVar4 = 0;
    }
    else {
        iVar4 = fcn.0002b618(iVar4,arg1,*(arg2 + 0x38),0);
    }
    *(arg1 + 0xd8) = iVar4;
    uVar3 = *(arg2 + 0x28);
    *(arg1 + 0xe0) = uVar3;
    *(arg1 + 0xe8) = uVar3;
    *(arg1 + 0xd0) = *(arg2 + 0x24);
    uVar2 = *(iVar4 + 0x40);
    *(arg1 + 0xf4) = 0;
    *(arg1 + 0xd4) = uVar2;
    *(arg1 + 0xf8) = *(arg2 + 0x44);
    *(arg1 + 0xfc) = *(arg2 + 0x48);
    *(arg1 + 0xfd) = *(arg2 + 0x4c);
    uVar1 = *(arg2 + 0x4d);
    *(arg1 + 0x80) = uVar3;
    *(arg1 + 0xfe) = uVar1;
    fcn.0001bbd0(arg1 + 0x2d,0x37ba8,6);
    arg1 = arg1 + 0x33;
    iVar5 = 0x11;
    iVar4 = 0;
    iVar6 = arg1 - arg1_00;
    do {
        if (*arg1_00 == '\0') break;
        arg1_00[iVar6] = *arg1_00;
        iVar4 = iVar4 + 1;
        arg1_00 = arg1_00 + 1;
        iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (iVar5 != 0) {
        *(iVar4 + arg1) = 0;
    }
    return arg1;
}


/* fcn.0002720c @ 0x2720c */

void fcn.0002720c(void)

{
    *0x43b88 = 0;
    return;
}


/* fcn.0002c4a8 @ 0x2c4a8 */

void fcn.0002c4a8(int64_t arg1)

{
    *(arg1 + 0xf3) = *(*(arg1 + 200) + 0x50) == '\x01';
    return;
}


/* fcn.0002df78 @ 0x2df78 */

void fcn.0002df78(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int64_t *piVar1;
    ulong *puVar2;
    uint8_t uVar3;
    
    arg1_00 = *(arg2 + 8);
    fcn.0002ab6c(arg1_00,arg2);
    *(arg1 + 0x30) = *(arg1 + 0x30) + -1;
    if ((arg2 != *(arg1 + 0x38 + *(arg1 + 0x30) * 8)) && (uVar3 = 0, *(arg1 + 0x30) != 0)) {
        do {
            if (arg2 == *(arg1 + 0x38 + uVar3 * 8)) {
                piVar1 = *(arg1 + 0x38 + *(arg1 + 0x30) * 8);
                *(arg1 + 0x38 + *(arg1 + 0x30) * 8) = arg2;
                *(arg1 + 0x38 + uVar3 * 8) = piVar1;
                if (*piVar1 != 0) {
                    *(*piVar1 + 0xc0) = piVar1;
                }
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(arg1 + 0x30));
    }
    puVar2 = *(arg1_00 + 0x68);
    //WARNING: Could not recover jumptable at 0x0002dff8. Too many branches
    //WARNING: Treating indirect jump as call
    (***puVar2)(puVar2,1);
    return;
}


/* fcn.00027214 @ 0x27214 */

void fcn.00027214(int64_t arg1,ulong noname_1,int64_t arg2)

{
    int64_t *piVar1;
    
    piVar1 = *arg1;
    *(arg2 + -0x10) = *piVar1;
    *piVar1 = arg2 + -0x10;
    return;
}


/* fcn.0002d7c0 @ 0x2d7c0 */

void fcn.0002d7c0(int64_t arg1,int64_t arg2)

{
    fcn.0002b5d4(arg1 + 0x68,arg2);
    fcn.0002b5c8(arg1 + 0x78,arg2);
    *(arg1 + 0x60) = *(arg1 + 0x60) + -1;
    return;
}


/* fcn.0002cf20 @ 0x2cf20 */

ulong fcn.0002cf20(uint32_t arg1)

{
    uint8_t uVar1;
    uint in_register_0000000c;
    uint8_t uVar2;
    
    uVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x1b00);
    if (uVar1 < 0x20) {
        return 0;
    }
    uVar2 = 0;
    if (uVar1 != 0) {
        do {
            if (*(uVar2 * 0xd8 + 0xd0 + CONCAT44(in_register_0000000c,arg1)) != '\0') {
                return 0;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < uVar1);
    }
    return 1;
}


/* fcn.0002cce4 @ 0x2cce4 */

int64_t fcn.0002cce4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    uint8_t uVar1;
    uint16_t uVar2;
    int16_t iVar3;
    uint8_t uVar4;
    uint32_t arg1_01;
    uint8_t uVar5;
    
    uVar1 = *(arg1 + 0x1b00);
    uVar5 = 0;
    uVar4 = uVar1;
    if (uVar1 != 0) {
        do {
            if (*(uVar5 * 0xd8 + 0xd0 + arg1) != '\0') {
                uVar4 = uVar5;
                break;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
    }
    if (uVar4 == uVar1) {
        if (uVar1 == 0x20) {
            return 0;
        }
        *(arg1 + 0x1b00) = uVar1 + 1;
    }
    arg1_00 = uVar4 * 0xd8 + arg1;
    fcn.0002766c(arg1_00);
    arg1_01 = arg2;
    uVar2 = fcn.0001bb80(arg1_01);
    iVar3 = 0x10;
    if (uVar2 < 0x11) {
        iVar3 = fcn.0001bb80(arg1_01);
    }
    uVar2 = fcn.0001bb80(arg1_01);
    fcn.0001bbd0(arg1_00 + 0x1c,(uVar2 - iVar3) + arg2,iVar3);
    *(iVar3 + uVar4 * 0xd8 + 0x1c + arg1) = 0;
    *(arg1_00 + 0xc0) = arg3;
    *(arg1_00 + 0x80) = arg4;
    *(arg1_00 + 0xd0) = 0;
    return arg1_00;
}


/* fcn.000273a8 @ 0x273a8 */

void fcn.000273a8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint uVar1;
    int iVar2;
    
    *(arg1 + 0xc0) = *(arg1 + 0xc0) | arg4;
    fcn.000277c4(arg1);
    *(arg1 + 0xb8) = arg2;
    iVar2 = arg3;
    *(arg1 + 0x80) = *arg3;
    fcn.0001ba1c(arg1 + 0x2d,0x29,iVar2 + 0x14,0x29);
    fcn.0001ba1c(arg1 + 0x1c,0x11,iVar2 + 0x3d,0x11);
    fcn.0001ba1c(arg1 + 0x56,0x29,iVar2 + 0x4e,0x29);
    *(arg1 + 0x90) = *(arg3 + 0x10);
    uVar1 = *(arg3 + 8);
    *(arg1 + 0x88) = uVar1;
    *(arg1 + 0x98) = *(arg3 + 0x78);
    *(arg1 + 0x8c) = *(arg3 + 0xc) & 0x7fffffff;
    *(arg1 + 200) = *(arg1 + 0x80) + -0x1a1;
    *(arg1 + 0x94) = 1 << (uVar1 & 0x1f);
    return;
}


/* fcn.00027568 @ 0x27568 */

bool fcn.00027568(int64_t arg1)

{
    int16_t iVar1;
    bool bVar2;
    int64_t iStack_228;
    uchar *puStack_220;
    ulong uStack_218;
    ulong uStack_210;
    uchar auStack_208 [512];
    
    if ((*(arg1 + 0x8c) >> 0xf & 1) == 0) {
        uStack_218 = 0;
        uStack_210 = 0;
        fcn.0001ba7c(auStack_208,0,0x200);
        iStack_228 = *(arg1 + 0x80) + -2;
        uStack_218 = CONCAT44(0x200,uStack_218);
        puStack_220 = auStack_208;
        uStack_210._0_5_ = CONCAT14(0x28,uStack_210);
        fcn.00030910(arg1,&iStack_228);
        iVar1 = fcn.0001bb9c(0x37b18,auStack_208,0x18);
        bVar2 = iVar1 == 0;
    }
    else {
        bVar2 = false;
    }
    return bVar2;
}


/* fcn.000178c4 @ 0x178c4 */

void fcn.000178c4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    char cVar2;
    uint *arg1_00;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    ushort auStack_58 [2];
    ushort uStack_54;
    ushort uStack_52;
    ushort uStack_50;
    unkbyte6 Stack_4e;
    int64_t var_40h;
    
    cVar2 = arg4;
    if ((((*(arg3 + 0xc) & 0x20) != 0) || (cVar2 == '\0')) && (arg1_00 = fcn.0001b9e4(0x18), arg1_00 != NULL)) {
        *arg1_00 = 1;
        *(arg1_00 + 2) = arg1;
        fcn.0001ba7c(auStack_58,0,0x3c);
        if ((*(arg3 + 0xc) & 0x80) == 0) {
            auStack_58[0] = 0x1203;
            fcn.00011858(auStack_58,10);
            uStack_52 = 0xffff;
            uStack_50 = 0;
        }
        else {
            auStack_58[0] = 0x1703;
            fcn.00011858(auStack_58,0x10);
            uStack_50 = *(arg3 + 0x78);
            Stack_4e = *(arg3 + 0x78) >> 0x10;
            uStack_52 = arg2 >> 0x10;
        }
        uVar6 = (*(arg3 + 0xc) & 0x20 | 0x10) >> 2;
        uVar1 = uVar6 | 0x10;
        if ((*(arg3 + 0xc) & 0x44) == 0) {
            uVar1 = uVar6;
        }
        uVar6 = uVar1 | 0x20;
        if (cVar2 == '\0') {
            uVar6 = uVar1;
        }
        uStack_54 = arg2;
        cVar2 = fcn.0001a26c(auStack_58,arg1_00,arg3 + 0x3d,CONCAT71(arg4 >> 8,cVar2));
        if (cVar2 == '\0') {
            uVar3 = fcn.0001a688(*0x43830,auStack_58,arg3 + 0x14,arg3 + 0x3d);
            if (-1 < uVar3) {
                uVar4 = fcn.0001a0e4(auStack_58,*(arg3 + 0x10),1,*arg3);
                if (-1 < (uVar3 | uVar4)) {
                    uVar5 = fcn.0001a8ec(auStack_58);
                    uVar5 = uVar3 | uVar4 | uVar5;
                    if ((-1 < uVar5) && (uVar3 = fcn.0001a1ec(auStack_58,uVar6), -1 < (uVar5 | uVar3))) {
                        fcn.0001ac20(auStack_58);
                        return;
                    }
                }
            }
            fcn.0001aabc(*0x43830,auStack_58);
        }
    }
    return;
}


/* fcn.0002dffc @ 0x2dffc */

int64_t fcn.0002dffc(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    int64_t arg1_00;
    
    arg2_00 = arg2 + 0x1c;
    arg1_00 = fcn.0002da78(arg1,arg2_00);
    if (arg1_00 == 0) {
        arg1_00 = fcn.0002ddec(arg1,*(arg2 + 0x88));
        if (arg1_00 != 0) {
            fcn.00030d08(arg1_00,arg2_00,arg2);
            fcn.00030d78(arg1_00,0);
        }
    }
    else {
        fcn.00030d08(arg1_00,arg2_00,arg2);
    }
    return arg1_00;
}


/* fcn.00025e44 @ 0x25e44 */

void fcn.00025e44(int64_t arg1)

{
    *(arg1 + 0x1f0) = 0;
    *(arg1 + 0x1f2) = 0;
    *(arg1 + 0x240) = 0;
    *(arg1 + 0x238) = 0;
    *(arg1 + 500) = 0;
    *arg1 = 0;
    fcn.0001ba7c(arg1 + 4,0,0x1ec);
    fcn.0001ba7c(arg1 + 0x208,0,0x30);
    *(arg1 + 0x200) = 0;
    return;
}


/* fcn.00017c08 @ 0x17c08 */

void fcn.00017c08(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    
    *arg1 = *0x42ee0;
    uVar1 = 0;
    if ((*0x42ee0 != '\0') && (*0x42ee1 != '\0')) {
        uVar1 = 1;
    }
    *arg2 = uVar1;
    *arg3 = *0x42ef8;
    return;
}


/* fcn.00032d7c @ 0x32d7c */

void fcn.00032d7c(int64_t arg1)

{
    int64_t iVar1;
    uint8_t uVar2;
    
    *(arg1 + 0x40) = 1;
    fcn.00032ef0(arg1);
    *(arg1 + 0x41) = 0;
    if (*(*(arg1 + 0x50) + 0x310) != '\0') {
        do {
            iVar1 = *(arg1 + 0x41) * 0x30 + *(*(arg1 + 0x50) + 0x308);
            if ((*(iVar1 + 0x18) >> 0x13 & 1) != 0) {
                iVar1 = fcn.0002ce30(*0x43c08 + 0x48,iVar1);
                *(arg1 + 0x48) = iVar1;
                if (iVar1 == 0) {
                    return;
                }
                fcn.000314f0(arg1,iVar1);
                fcn.00032c5c(arg1);
            }
            *(arg1 + 0x41) = *(arg1 + 0x41) + '\x01';
        } while (*(arg1 + 0x41) < *(*(arg1 + 0x50) + 0x310));
    }
    uVar2 = 0;
    iVar1 = *(*0x43c08 + 0x38);
    if (*(*(arg1 + 0x50) + 0x310) != '\0') {
        do {
            fcn.0002d41c(iVar1,uVar2 * 0x30 + *(*(arg1 + 0x50) + 0x308));
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(*(arg1 + 0x50) + 0x310));
    }
    iVar1 = fcn.00034fe8(*(arg1 + 0x50));
    if (iVar1 == 0) {
        fcn.0003137c(*(arg1 + 8));
    }
    else {
        do {
            fcn.000314f0(arg1,iVar1);
            if ((((*(iVar1 + 0xc0) >> 8 & 1) != 0) && (*(*(arg1 + 8) + 0x39) + *(*0x43c08 + 0x20) < 5)) &&
               (iVar1 = fcn.00034f58(*(arg1 + 0x50),iVar1 + 0x1c), iVar1 != 0)) {
                fcn.0003226c(arg1,*(iVar1 + 0x1c));
            }
            iVar1 = fcn.00034fe8(*(arg1 + 0x50));
        } while (iVar1 != 0);
    }
    *(arg1 + 0x40) = 0;
    fcn.000328f4(arg1);
    return;
}


/* fcn.00032fcc @ 0x32fcc */

void fcn.00032fcc(void)

{
    ulong *puVar1;
    
    for (puVar1 = *(*(*0x43c08 + 0x38) + 0x68); puVar1 != NULL; puVar1 = *puVar1) {
        fcn.0002b1e4(puVar1);
    }
    return;
}


/* fcn.00025694 @ 0x25694 */

void fcn.00025694(uint32_t arg1)

{
    int64_t iVar1;
    bool bVar2;
    char cVar3;
    int16_t iVar4;
    int iVar5;
    uint in_register_0000000c;
    int64_t arg1_00;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    bVar2 = false;
    if (*(arg1_00 + 0x240) != 0) {
        cVar3 = fcn.00026888(arg1_00);
        if (cVar3 == '\0') {
            *(*(*(arg1_00 + 0x240) + 0xc0) + 0x58) = 5;
        }
        else {
            if (((*(arg1_00 + 0xae) == 0) && (*(arg1_00 + 0xb2) == 0)) &&
               (iVar4 = fcn.0001bb9c(arg1_00 + 4,0x37208,0x20), iVar4 != 0)) {
                *(*(*(arg1_00 + 0x240) + 0xc0) + 0x58) = 4;
                bVar2 = true;
            }
            iVar1 = *(arg1_00 + 0x238);
            if (iVar1 != 0) {
                if (*(iVar1 + 0xfd) == '\t') {
                    *(*(iVar1 + 0xc0) + 0x4c) = 5;
                }
                if (bVar2) {
                    iVar1 = *(*(arg1_00 + 0x238) + 0xc0);
                    if ((*(iVar1 + 0x50) == *(*(*(*(arg1_00 + 0x240) + 200) + 0x68) + 0x1c)) &&
                       (*(iVar1 + 0x54) == *(*(*(arg1_00 + 0x240) + 0xc0) + 0x4a))) {
                        fcn.0002c824(iVar1);
                        *(*(*(arg1_00 + 0x238) + 0xc0) + 0x58) = 3;
                        *(*(*(arg1_00 + 0x240) + 0xc0) + 0x58) = 0;
                        return;
                    }
                }
                else {
                    iVar4 = fcn.0001bb9c(arg1_00 + 4,0x37208,0x20);
                    if ((((iVar4 == 0) && (*(arg1_00 + 0x24) - 6U < 2)) &&
                        ((*(arg1_00 + 0x2c) == 1 &&
                         ((*(arg1_00 + 0xae) == *(*(*(*(arg1_00 + 0x238) + 200) + 0x68) + 0x1c) &&
                          (iVar1 = *(*(arg1_00 + 0x238) + 0xc0), *(arg1_00 + 0xb2) == *(iVar1 + 0x4a))))))) &&
                       ((*(iVar1 + 0x50) == *(*(*(*(arg1_00 + 0x240) + 200) + 0x68) + 0x1c) &&
                        ((*(iVar1 + 0x54) == *(*(*(arg1_00 + 0x240) + 0xc0) + 0x4a) &&
                         (cVar3 = fcn.000259e8(arg1_00), cVar3 != '\0')))))) {
                        iVar5 = fcn.0002c914(*(*(arg1_00 + 0x238) + 0xc0));
                        if (((1 < iVar5 - *(arg1_00 + 0xca)) || ((*(arg1_00 + 0x1d0) & 2) != 0)) &&
                           ((*(*(*(arg1_00 + 0x238) + 0xc0) + 0x4d) & 1) == 0)) {
                            *(arg1_00 + 0x1b2) = *(arg1_00 + 0x1b2) + 1;
                        }
                        *(*(*(arg1_00 + 0x238) + 0xc0) + 0x58) = 3;
                        fcn.0002c824(*(*(arg1_00 + 0x238) + 0xc0));
                        fcn.00026f7c(arg1_00,*(*(arg1_00 + 0x238) + 0xc0),0);
                        return;
                    }
                }
            }
        }
    }
    *(arg1_00 + 0x240) = 0;
    if (*(arg1_00 + 0x238) != 0) {
        fcn.0002c7e4(*(*(arg1_00 + 0x238) + 0xc0));
        *(*(*(arg1_00 + 0x238) + 0xc0) + 0x58) = 1;
    }
    return;
}


/* fcn.000296e4 @ 0x296e4 */

void fcn.000296e4(uint32_t arg1)

{
    char cVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t arg1_00;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if ((*(arg1_00 + 0x35) == '\0') && (*(arg1_00 + 0x34) != '\0')) {
        iVar2 = fcn.00029604();
        *(arg1_00 + 0x20) = iVar2;
        if (iVar2 != 0) {
            cVar1 = fcn.00029934(arg1_00,*(arg1_00 + 8));
            if (cVar1 != '\0') {
                cVar1 = fcn.000297bc(arg1_00);
                if (cVar1 != '\0') {
                    *(arg1_00 + 0x35) = cVar1;
                }
            }
        }
    }
    return;
}


/* fcn.00029604 @ 0x29604 */

ulong fcn.00029604(void)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.000259a0(*0x429d0);
    if (cVar1 == '\0') {
        uVar2 = 0;
    }
    else {
        uVar2 = *(*0x429d0 + 0x240);
    }
    return uVar2;
}


/* fcn.00029934 @ 0x29934 */

uchar fcn.00029934(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    
    uVar3 = 0;
    do {
        cVar1 = fcn.0002972c(arg1,uVar3 * 0x10 + **0x429d0,0x200,arg2);
        if (cVar1 != '\0') {
            return 1;
        }
        uVar2 = uVar3 + 1;
        uVar3 = uVar2;
    } while (uVar2 < 2);
    return 0;
}


/* fcn.000297bc @ 0x297bc */

uint64_t fcn.000297bc(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    int *piVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    
    *(arg1 + 0x28) = 0;
    uVar5 = *(arg1 + 8);
    iVar1 = *(uVar5 + 0x36);
    *(arg1 + 0x30) = iVar1;
    uVar2 = *(uVar5 + 0x2e);
    if (uVar2 == 0) {
code_r0x00029904:
        uVar5 = CONCAT71(uVar5 >> 8,1);
        *(arg1 + 0x28) = *(arg1 + 0x18) + 0x1c;
    }
    else {
        if (iVar1 != 0) {
            uVar6 = *(uVar5 + 0x32) << 9;
            uVar5 = fcn.0002972c(arg1,uVar2,uVar6,*(arg1 + 0x18));
            if (uVar5 != '\0') {
                piVar3 = *(arg1 + 0x18);
                if ((((*piVar3 == -0x3501eeb0) && (uVar5 = piVar3[1] - 1U, piVar3[1] - 1U < 2)) && (piVar3[5] == 0x800)
                    ) && (uVar5 = piVar3[6], piVar3[uVar5 * 3 + 7] == -0x3501eeb0)) {
                    uVar5 = 0;
                    if (*(arg1 + 0x30) != 0) {
                        do {
                            fcn.000260e0(*0x429d0,*(*(arg1 + 0x18) + 0x24 + uVar5 * 0xc),
                                         *(*(arg1 + 0x18) + 0x1c + uVar5 * 0xc) >> 0x28);
                            uVar7 = uVar5 + 1;
                            uVar5 = uVar7;
                        } while (uVar7 < *(arg1 + 0x30));
                    }
                    iVar4 = *(arg1 + 0x18);
                    if (*(iVar4 + 4) != 1) {
                        *(arg1 + 0x38) = *(iVar4 + 0x1c) & 0xffffffffff;
                        uVar5 = *(iVar4 + 0x1c + (*(arg1 + 0x30) - 1) * 0xc) & 0xffffffffff;
                        *(arg1 + 0x40) = uVar5;
                        goto code_r0x00029904;
                    }
                    *(*(arg1 + 8) + 0x2e) = 0;
                    *(*(arg1 + 8) + 0x36) = 0;
                    *(*(arg1 + 8) + 0x32) = 0;
                    fcn.00029cdc(arg1,*(arg1 + 8));
                    fcn.0001ba7c(*(arg1 + 0x18),0,0x28);
                    uVar5 = fcn.00029c4c(arg1,uVar2,uVar6,*(arg1 + 0x18));
                }
                else {
                    *(arg1 + 0x18) = 0;
                }
            }
        }
        uVar5 = uVar5 & 0xffffffffffffff00;
    }
    return uVar5;
}


/* fcn.00028b08 @ 0x28b08 */

void fcn.00028b08(int64_t arg1)

{
    int iVar1;
    int64_t arg1_00;
    uint8_t uVar2;
    uchar auStack_108 [40];
    uint8_t uStack_e0;
    uint32_t uStack_a4;
    uchar auStack_88 [92];
    uint32_t uStack_2c;
    
    uVar2 = 0;
    arg1_00 = arg1;
    do {
        arg1_00 = CONCAT71(arg1_00 >> 8,uVar2);
        iVar1 = fcn.000235b8(arg1_00,auStack_108);
        if ((((iVar1 == 0) && ((uStack_e0 & 0x10) != 0)) && (uStack_a4 < 0x15)) &&
           (arg1_00 = 0x111826, (0x111826U >> (uStack_a4 & 0x1f) & 1) != 0)) {
            arg1_00 = CONCAT71(0x1118,uVar2);
            *(arg1 + 0x1ed4) = *(arg1 + 0x1ed4) | 1 << (uVar2 & 0x1f);
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 0x20);
    uVar2 = 0;
    do {
        arg1_00 = CONCAT71(arg1_00 >> 8,uVar2);
        iVar1 = fcn.00023d7c(arg1_00,auStack_88);
        if (((iVar1 == 0) && (uStack_2c < 0x27)) &&
           (arg1_00 = 0x40e3c00000, (0x40e3c00000U >> (uStack_2c & 0x3fU) & 1) != 0)) {
            arg1_00 = CONCAT71(0x40e3c000,uVar2);
            *(arg1 + 0x1ed8) = *(arg1 + 0x1ed8) | 1 << (uVar2 & 0x1f);
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 4);
    return;
}


/* fcn.00017dac @ 0x17dac */

void fcn.00017dac(int64_t arg1,int64_t arg2)

{
    *0x42ee2 = arg1;
    *0x42ef8 = arg2;
    return;
}


/* fcn.0002e3d8 @ 0x2e3d8 */

//WARNING: Variable defined which should be unmapped: var_30h

void fcn.0002e3d8(int64_t arg1)

{
    char cVar1;
    int16_t iVar2;
    int iVar3;
    int64_t iVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    uint64_t arg3;
    uint64_t uVar7;
    uint64_t uVar8;
    uint8_t uStackX_10;
    char acStackX_18 [8];
    uint32_t var_e4h;
    int64_t var_150h;
    int64_t var_185h;
    uint32_t var_2e4h;
    uint32_t var_7f8h;
    uint32_t var_800h;
    uint64_t auStack_8b8 [4];
    uchar auStack_898 [8];
    int iStack_890;
    uchar auStack_88c [41];
    uchar auStack_863 [75];
    uint uStack_818;
    int iStack_814;
    int iStack_704;
    uchar auStack_698 [53];
    uchar auStack_663 [351];
    int aiStack_504 [288];
    int64_t var_7bh;
    int32_t var_30h;
    uint32_t var_2ch;
    
    iVar4 = fcn.0001f288();
    arg3 = 0;
    uStackX_10 = 0;
    uVar6 = 0;
    cVar1 = fcn.000291bc(3);
    if ((cVar1 != '\0') && ((*(iVar4 + 0x1a) & 0x1000000) != 0)) {
        if (*(arg1 + 0x80) == 0) {
            uVar8 = arg3;
        }
        else {
            uVar8 = *(arg1 + 0x80) - 8;
        }
        if (uVar8 != 0) {
            do {
                iVar4 = *(-(uVar8 != 0) & uVar8 + 8);
                uVar7 = -(iVar4 != 0) & iVar4 - 8U;
                if ((*(uVar8 + 0xa0) == 2) && ((*(uVar8 + 0x8c) & 0x200) != 0)) {
                    fcn.0001ba7c(auStack_898,0,0x200);
                    cVar1 = fcn.0002e928(auStack_898,uVar8);
                    fcn.0002d760(arg1,uVar8);
                    if (cVar1 != '\0') {
                        if (((iStack_890 != 4) || (iVar3 = fcn.0001bd20(auStack_898,0x194), iStack_704 != iVar3)) ||
                           (iStack_814 != 2)) goto code_r0x0002e591;
                        cVar1 = '\0';
                        iVar2 = fcn.0001bb9c(uVar8 + 0x56,auStack_88c,0x29);
                        if (iVar2 == 0) {
                            cVar1 = '\x01';
                        }
                        else {
                            iVar2 = fcn.0001bb9c(uVar8 + 0x56,auStack_863,0x29);
                            if (iVar2 != 0) goto code_r0x0002e567;
                        }
                        acStackX_18[uVar6] = cVar1;
                        auStack_8b8[uVar6] = uVar8;
                        fcn.0001ba1c(auStack_698 + uVar6 * 0x198,0x198,auStack_898,0x198);
                        uVar6 = uVar6 + 1;
                    }
code_r0x0002e567:
                    if (((uVar8 == *(*0x429d0 + 0x238)) && (*(*0x429d0 + 0x240) != 0)) &&
                       ((*(uVar8 + 0x8c) & 0x200) != 0)) {
                        arg3 = *(*0x429d0 + 0x238);
                    }
                }
code_r0x0002e591:
                uVar8 = uVar7;
            } while (uVar7 != 0);
            uStackX_10 = uVar6;
        }
        iVar4 = 0;
        uVar8 = 0;
        do {
            if (uVar6 <= uVar8) break;
            if ((acStackX_18[uVar8] != '\0') && (uVar6 = 0, uStackX_10 != 0)) {
                do {
                    if (acStackX_18[uVar6] == '\0') {
                        iVar2 = fcn.0001bb9c(auStack_8b8[uVar6] + 0x56,auStack_663 + uVar8 * 0x198,0x29);
                        if ((iVar2 == 0) && (aiStack_504[uVar8 * 0x66] == aiStack_504[uVar6 * 0x66])) {
                            iVar4 = fcn.0002e2c0(arg1,auStack_8b8[uVar8],auStack_8b8[uVar6],
                                                 auStack_698 + uVar8 * 0x198);
                            break;
                        }
                    }
                    uVar5 = uVar6 + 1;
                    uVar6 = uVar5;
                } while (uVar5 < uStackX_10);
            }
            uVar6 = uStackX_10;
            uVar8 = uVar8 + 1;
        } while (iVar4 == 0);
        if ((iVar4 == 0) && (arg3 != 0)) {
            fcn.0001ba7c(auStack_898,0,0x198);
            uStack_818 = 2;
            iStack_814 = uStack_818;
            fcn.0002e2c0(arg1,0,arg3,auStack_898);
        }
    }
    return;
}


/* fcn.0002d940 @ 0x2d940 */

void fcn.0002d940(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    char cVar3;
    uint64_t arg1_00;
    
    arg1_00 = *(arg1 + 0x80);
    if (arg1_00 != 0) {
        arg1_00 = arg1_00 - 8;
    }
    while (arg1_00 != 0) {
        uVar1 = *(arg1_00 + 0x8c);
        if ((((((uVar1 & 0x44) == 0) && (uVar1 < 0x80000000)) &&
             (((uVar1 & 0x10) == 0 || ((*(arg1_00 + 0xa0) != 2 || (cVar3 = fcn.000291bc(1), cVar3 != '\0')))))) &&
            (((*(arg1_00 + 0x8c) & 0x80) == 0 || ((*(arg1_00 + 0xa0) != 2 || (cVar3 = fcn.000291bc(2), cVar3 != '\0')))
             ))) && (((*(arg1_00 + 0x8c) & 0x8000) == 0 && (cVar3 = fcn.00021268(arg1_00), cVar3 == '\0')))) {
            fcn.00017714(arg1_00);
            *(*0x43c08 + 0x1ed1) = 1;
        }
        iVar2 = *(-(arg1_00 != 0) & arg1_00 + 8);
        arg1_00 = -(iVar2 != 0) & iVar2 - 8U;
    }
    return;
}


/* fcn.0002fd38 @ 0x2fd38 */

void fcn.0002fd38(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    fcn.0001ba7c(0x43c40,0,0x6610);
    fcn.0001ba7c(0x4a280,0,0x30);
    fcn.0001ba7c(0x4a250,0,0x30);
    *0x4a2b0 = 0;
    iVar3 = 3;
    piVar2 = 0x4a288;
    iVar1 = 0x43c50;
    iVar4 = 3;
    do {
        *piVar2 = iVar1;
        iVar1 = iVar1 + 0x2000;
        piVar2 = piVar2 + 2;
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    piVar2 = 0x4a258;
    do {
        *piVar2 = iVar1;
        iVar1 = iVar1 + 0x200;
        piVar2 = piVar2 + 2;
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    return;
}


/* fcn.00032f90 @ 0x32f90 */

int64_t fcn.00032f90(int64_t arg1)

{
    int64_t arg1_00;
    
    fcn.00032154(arg1);
    *arg1 = 0x37d70;
    arg1_00 = fcn.0001b928(*(arg1 + 0x14));
    *(arg1 + 8) = arg1_00;
    fcn.0003137c(arg1_00);
    return arg1;
}


/* fcn.00032154 @ 0x32154 */

int64_t fcn.00032154(int64_t arg1)

{
    int64_t arg1_00;
    int64_t arg1_01;
    
    fcn.000313a4(arg1,0x1400);
    *arg1 = 0x37d70;
    arg1_00 = fcn.00027170(0x358);
    arg1_01 = 0;
    if (arg1_00 != 0) {
        arg1_01 = fcn.00034e74(arg1_00);
    }
    *(arg1 + 0x50) = arg1_01;
    fcn.0003507c(arg1_01);
    return arg1;
}


/* fcn.000313a4 @ 0x313a4 */

int64_t fcn.000313a4(int64_t arg1,int64_t arg2)

{
    *(arg1 + 0x14) = arg2;
    *arg1 = 0x37d70;
    *(arg1 + 0x18) = 0;
    *(arg1 + 0x38) = 0;
    *(arg1 + 0x24) = 0;
    *(arg1 + 0x20) = 0;
    *(arg1 + 0x28) = 0;
    *(arg1 + 0x30) = 0;
    return arg1;
}


/* fcn.00034e74 @ 0x34e74 */

int64_t fcn.00034e74(int64_t arg1)

{
    ulong uVar1;
    
    *(arg1 + 0x310) = 0;
    uVar1 = fcn.0001b928(0x1200);
    *(arg1 + 0x308) = uVar1;
    return arg1;
}


/* fcn.0001b928 @ 0x1b928 */

ulong fcn.0001b928(int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    iVar1 = (**(*0x4af30 + 0x40))(4,arg1,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.0003507c @ 0x3507c */

void fcn.0003507c(int64_t arg1)

{
    *(arg1 + 0x300) = 0;
    *(arg1 + 0x310) = 0;
    return;
}


/* fcn.0003137c @ 0x3137c */

uchar * fcn.0003137c(int64_t arg1)

{
    uchar *puVar1;
    int64_t iVar2;
    
    *(arg1 + 0x20) = 0;
    iVar2 = 0x88;
    *(arg1 + 0x38) = 0;
    *(arg1 + 0x28) = 0;
    *(arg1 + 0x40) = 0;
    *(arg1 + 0x3a) = 0;
    *(arg1 + 0x48) = 0;
    puVar1 = arg1 + 0x50;
    do {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return arg1 + 0x50;
}


/* fcn.0002d040 @ 0x2d040 */

int64_t fcn.0002d040(int64_t arg1,int32_t arg_60h)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    
    iVar2 = 0;
    *(arg1 + 0x18) = 0;
    *(arg1 + 0x10) = 0;
    *(arg1 + 0x28) = 0;
    *(arg1 + 0x20) = 0;
    iVar3 = 0x60;
    *(arg1 + 0x70) = 0;
    *(arg1 + 0x68) = 0;
    *(arg1 + 0x78) = 0;
    *(arg1 + 0x88) = 0;
    *(arg1 + 0x80) = 0;
    *arg1 = 0;
    do {
        iVar1 = fcn.00027170(0x50);
        if (iVar1 == 0) {
            iVar1 = iVar2;
        }
        else {
            iVar1 = fcn.00030ba0(iVar1);
        }
        fcn.0002b550(arg1 + 0x20,iVar1);
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(arg1 + 0x30) = 0;
    piVar4 = arg1 + 0x38;
    iVar3 = 5;
    do {
        iVar1 = fcn.00027170(0x60);
        if (iVar1 == 0) {
            iVar1 = iVar2;
        }
        else {
            iVar1 = fcn.0002c604(iVar1);
        }
        *piVar4 = iVar1;
        piVar4 = piVar4 + 1;
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(arg1 + 0x60) = 0;
    iVar3 = 4;
    do {
        iVar1 = fcn.00027170(0x148);
        if (iVar1 == 0) {
            iVar1 = iVar2;
        }
        else {
            iVar1 = fcn.0002a788(iVar1);
        }
        fcn.0002b5c8(arg1 + 0x78,iVar1);
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(arg1 + 0x98) = 0;
    *(arg1 + 0x88) = 0;
    *(arg1 + 0x80) = 0;
    return arg1;
}


/* fcn.0002ceec @ 0x2ceec */

void fcn.0002ceec(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = 0x20;
    do {
        fcn.0002766c(arg1);
        arg1 = arg1 + 0xd8;
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
}


/* fcn.0002766c @ 0x2766c */

void fcn.0002766c(int64_t arg1)

{
    fcn.00030b90(arg1 + 0xa8);
    *(arg1 + 0x2d) = 0;
    return;
}


/* fcn.000279b4 @ 0x279b4 */

void fcn.000279b4(uint32_t arg1)

{
    ushort uVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    
    iVar2 = *0x43c08;
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar1 = *(iVar3 + 0x1a);
    *(*0x43c08 + 0x40) = *(iVar3 + 0x18);
    *(iVar2 + 0x42) = uVar1;
    if ((*(iVar3 + 0x30) != 0) && (*(iVar3 + 0x18) != 0)) {
        fcn.00027638(*(iVar3 + 0x30),CONCAT71(iVar2 >> 8,*(iVar3 + 0x18)),*(iVar3 + 0x1a));
    }
    return;
}


/* fcn.00017638 @ 0x17638 */

ulong fcn.00017638(int64_t arg1)

{
    *arg1 = *0x437c0;
    return 0;
}


/* fcn.000294a8 @ 0x294a8 */

uint32_t fcn.000294a8(void)

{
    uint16_t uVar1;
    uint32_t uVar2;
    
    uVar1 = fcn.00019d1c();
    *0x43bac = fcn.00029404(uVar1);
    uVar2 = *0x43bac << 8 | 0xffffdfff;
    if (((*0x43bac & 1) == 0) && ((*0x43bac & 2) == 0)) {
        uVar2 = uVar2 & 0xfffffde0;
    }
    return uVar2;
}


/* fcn.00019d1c @ 0x19d1c */

ushort fcn.00019d1c(void)

{
    int64_t iVar1;
    ushort auStackX_8 [4];
    int64_t aiStackX_10 [3];
    
    auStackX_8[0] = 0;
    iVar1 = (**(*0x4af30 + 0x140))(0x425d0,0,aiStackX_10);
    if ((-1 < iVar1) && (aiStackX_10[0] != 0)) {
        (**(aiStackX_10[0] + 0x38))(aiStackX_10[0],1,0x1f0002,2,auStackX_8);
    }
    return auStackX_8[0];
}


/* fcn.00029404 @ 0x29404 */

uint64_t fcn.00029404(uint32_t arg1)

{
    uint8_t uVar1;
    uint16_t uVar2;
    
    uVar2 = 0;
    do {
        uVar1 = uVar2 >> 8;
        if (*(uVar2 * 3 + 0x37b38) == arg1) {
            return CONCAT11(uVar1,*(uVar2 * 3 + 0x37b3a));
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 0x10);
    return CONCAT71(uVar1,0x23);
}


/* fcn.0002943c @ 0x2943c */

uint32_t fcn.0002943c(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar2 = (arg1 >> 0x20 & 1) - 2;
    uVar1 = uVar2 & 0xfffffffd;
    if ((arg1 & 0x200000000U) != 0) {
        uVar1 = uVar2;
    }
    uVar2 = uVar1 & 0xfffffffb;
    if ((arg1 & 0x800000000U) != 0) {
        uVar2 = uVar1;
    }
    uVar1 = uVar2 & 0xfffffff7;
    if ((arg1 & 0x400000000U) != 0) {
        uVar1 = uVar2;
    }
    uVar2 = uVar1 & 0xffffffef;
    if ((arg1 & 0x1000000000U) != 0) {
        uVar2 = uVar1;
    }
    uVar1 = uVar2 & 0xfffffeff;
    if ((arg1 & 0x2000000000U) != 0) {
        uVar1 = uVar2;
    }
    uVar2 = uVar1 & 0xffffdfff;
    if ((arg1 & 0x4000000000U) != 0) {
        uVar2 = uVar1;
    }
    return uVar2 | 0x2c0;
}


/* fcn.000294e4 @ 0x294e4 */

void fcn.000294e4(void)

{
    char cVar1;
    int64_t iVar2;
    uint32_t *puVar3;
    uint32_t *puVar4;
    
    iVar2 = fcn.0001f288();
    puVar3 = fcn.0001f280();
    puVar4 = fcn.0001f280();
    if ((*puVar4 >> 9 & 1) != 0) {
        cVar1 = fcn.0001b9a8();
        if (cVar1 == '\0') {
            *(iVar2 + 0x1a) = *(iVar2 + 0x1a) & 0xfdffffff;
            *(iVar2 + 0x1e) = *(iVar2 + 0x1e) & 0xffdf;
            *puVar3 = *puVar3 & 0xfffffdff;
        }
    }
    if (*0x43b98 != 0) {
        fcn.00028d84(*0x43b98);
    }
    *0x42947 = 0;
    cVar1 = fcn.0001bd3c("$VER\x02\x02\x13",0x26);
    *0x42947 = -cVar1;
    return;
}


/* fcn.0001b9a8 @ 0x1b9a8 */

bool fcn.0001b9a8(void)

{
    int iVar1;
    
    iVar1 = fcn.0001b930(0x82);
    if (iVar1 != 0) {
        (**(*0x4af30 + 0x30))(iVar1,*0x438d8);
    }
    return iVar1 != 0;
}


/* fcn.00029a9c @ 0x29a9c */

uchar * fcn.00029a9c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t *puVar2;
    uint64_t *puVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint64_t *puVar7;
    uchar uVar8;
    uint32_t uVar9;
    int iVar10;
    int iVar11;
    uint32_t *in_stack_00000028;
    
    *arg4 = 0;
    uVar9 = arg3;
    *in_stack_00000028 = uVar9;
    iVar4 = *(arg1 + 0x18);
    if ((iVar4 == 0) || (*(arg1 + 0x30) == 0)) {
        return &stack0x00000000;
    }
    puVar2 = iVar4 + 0x1c;
    uVar6 = *puVar2 & 0xffffffffff;
    iVar11 = arg2;
    uVar5 = uVar9;
    if (arg2 < uVar6) {
        iVar10 = *puVar2;
code_r0x00029b03:
        uVar5 = iVar10 - iVar11;
        uVar8 = 0;
    }
    else {
        uVar1 = *(arg1 + 0x30) - 1;
        puVar3 = iVar4 + (uVar1 * 2 + 7 + uVar1) * 4;
        uVar6 = *puVar3 >> 0x28;
        uVar8 = 0;
        if (uVar6 + (*puVar3 & 0xffffffffff) <= arg2) goto code_r0x00029c22;
        puVar7 = *(arg1 + 0x28);
        uVar6 = *puVar7 & 0xffffffffff;
        uVar8 = 0;
        if (arg2 < uVar6) {
            do {
                if (puVar7 <= puVar2) break;
                *(arg1 + 0x28) = *(arg1 + 0x28) + -0xc;
                puVar7 = *(arg1 + 0x28);
            } while (arg2 < (*puVar7 & 0xffffffffff));
            puVar7 = *(arg1 + 0x28);
            uVar6 = *puVar7;
            if ((arg2 < (uVar6 & 0xffffffffff)) || (uVar6 = (uVar6 >> 0x28) + (uVar6 & 0xffffffffff), uVar6 <= arg2)) {
                if (puVar7 == puVar2) goto code_r0x00029bed;
                if (puVar3 <= puVar7) goto code_r0x00029c22;
                iVar10 = *(puVar7 + 0xc);
                goto code_r0x00029b03;
            }
        }
        else if ((*puVar7 >> 0x28) + uVar6 <= arg2) {
            do {
                if (puVar3 <= puVar7) break;
                *(arg1 + 0x28) = *(arg1 + 0x28) + 0xc;
                puVar7 = *(arg1 + 0x28);
            } while ((*puVar7 >> 0x28) + (*puVar7 & 0xffffffffff) <= arg2);
            puVar7 = *(arg1 + 0x28);
            uVar6 = *puVar7;
            if ((arg2 < (uVar6 & 0xffffffffff)) || (uVar6 = (uVar6 >> 0x28) + (uVar6 & 0xffffffffff), uVar6 <= arg2)) {
                if (puVar3 <= puVar7) goto code_r0x00029c22;
code_r0x00029bed:
                iVar10 = *puVar7;
                goto code_r0x00029b03;
            }
        }
        uVar5 = (puVar7[1] - *puVar7) + iVar11;
        uVar6 = uVar5;
        *arg4 = uVar5;
        uVar5 = ((**(arg1 + 0x28) >> 0x28) - iVar11) + **(arg1 + 0x28);
        uVar8 = 1;
    }
code_r0x00029c22:
    if (uVar9 < uVar5) {
        uVar5 = uVar9;
    }
    *in_stack_00000028 = uVar5;
    return CONCAT71(uVar6 >> 8,uVar8);
}


/* fcn.0002be20 @ 0x2be20 */

void fcn.0002be20(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t arg1_00;
    
    iVar1 = *0x43c08;
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg1_00 + 0xc) == 0) {
        fcn.0002a0ec(*(arg1_00 + 0x10),*0x43c08 + 7000,arg2);
    }
    else {
        fcn.0002b7a8(arg1_00,*0x43c08 + 7000,arg2);
    }
    fcn.0002c428(*(arg1_00 + 0x20),*(iVar1 + 0x1b70),*(iVar1 + 0x1b9a),*(iVar1 + 0x1b98));
    return;
}


/* fcn.0002972c @ 0x2972c */

BADSPACEBASE * fcn.0002972c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uStack_28;
    int64_t iStack_20;
    uint uStack_14;
    int16_t iStack_10;
    uchar uStack_c;
    
    if (arg4 != 0) {
        fcn.0001ba7c(&uStack_28,0,0x20);
        uStack_14 = arg3;
        uStack_c = 0x28;
        uStack_28 = arg2 & 0xffffffff;
        iStack_20 = arg4;
        fcn.0002be20(*(*(arg1 + 0x20) + 0xd8),&uStack_28);
        *0x20 = iStack_10 == 0;
    }
    return *0x20;
}


/* fcn.000260e0 @ 0x260e0 */

void fcn.000260e0(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint64_t arg2_00;
    uint32_t uVar4;
    uchar auStackX_8 [8];
    uint32_t uStackX_10;
    uint32_t auStack_58 [16];
    
    if ((*(CONCAT44(in_register_0000000c,arg1) + 0x166) <= arg2) && (arg3 != 0)) {
        if (*(*0x429d0 + 0x156) == 0) {
            uVar3 = *(*0x429d0 + 0x152);
        }
        else {
            uVar3 = *(*0x429d0 + 0x14e);
        }
        fcn.0002fe1c(auStack_58,0x200,uVar3,*(*0x429d0 + 0x1a6));
        uVar4 = arg2 - *(CONCAT44(in_register_0000000c,arg1) + 0x166);
        uVar3 = uVar4 >> 4;
        uVar2 = uVar4 + arg3;
        for (; arg2_00 = uVar3, uVar4 < uVar2; uVar4 = uVar4 + iVar1) {
            iVar1 = 0x10 - (uVar4 & 0xf);
            if (uVar2 <= uVar4 + iVar1) {
                iVar1 = uVar2 - uVar4;
            }
            uStackX_10 = CONCAT22(iVar1,uVar4) & 0xffff000f;
            fcn.000300fc(auStack_58,arg2_00,auStackX_8);
            fcn.0002ee00(arg2_00,auStackX_8,uStackX_10);
            fcn.0003013c(auStack_58,arg2_00,auStackX_8);
            uVar3 = uVar3 + 1;
        }
        fcn.0002ff20(auStack_58);
        fcn.0002fca4(auStack_58[0]);
    }
    return;
}


/* fcn.00029cdc @ 0x29cdc */

bool fcn.00029cdc(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    char cVar4;
    
    cVar4 = '\0';
    uVar3 = 0;
    do {
        cVar1 = fcn.00029c4c(arg1,uVar3 * 0x10 + **0x429d0,0x200,arg2);
        if (cVar1 != '\0') {
            cVar4 = cVar4 + '\x01';
        }
        uVar2 = uVar3 + 1;
        uVar3 = uVar2;
    } while (uVar2 < 2);
    return cVar4 != '\0';
}


/* fcn.00029c4c @ 0x29c4c */

BADSPACEBASE * fcn.00029c4c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uStack_28;
    int64_t iStack_20;
    uint uStack_14;
    int16_t iStack_10;
    uchar uStack_c;
    
    if (arg4 != 0) {
        fcn.0001ba7c(&uStack_28,0,0x20);
        uStack_14 = arg3;
        uStack_c = 0x2a;
        uStack_28 = arg2 & 0xffffffff;
        iStack_20 = arg4;
        fcn.0002be20(*(*(arg1 + 0x20) + 0xd8),&uStack_28);
        *0x20 = iStack_10 == 0;
    }
    return *0x20;
}


/* fcn.000333a4 @ 0x333a4 */

ulong fcn.000333a4(int64_t arg1)

{
    return *(arg1 + 0x28);
}


/* fcn.00032ffc @ 0x32ffc */

void fcn.00032ffc(int64_t arg1,int64_t arg2)

{
    *arg1 = arg2;
    *(arg1 + 8) = 0;
    return;
}


/* fcn.0002a324 @ 0x2a324 */

char fcn.0002a324(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    char cVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    char cVar4;
    uint16_t uVar5;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    cVar4 = '\0';
    uVar5 = 0;
    if (*(iVar3 + 0x2c) != '\0') {
        do {
            uVar1 = *(*(iVar3 + (uVar5 + 7) * 0x10) + 0xc0);
            cVar2 = cVar4 + '\x01';
            if ((uVar1 & 0x1000014) == 0x10) {
                cVar2 = cVar4;
            }
            cVar4 = cVar2;
            if ((uVar1 & 0x1000010) == 0x1000010) {
                *arg2 = 1;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(iVar3 + 0x2c));
    }
    return cVar4;
}


/* fcn.0002a284 @ 0x2a284 */

int64_t fcn.0002a284(uint32_t arg1)

{
    uint32_t uVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    int64_t iVar3;
    uint8_t uVar4;
    int64_t iVar5;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    iVar5 = 0;
    uVar4 = 0;
    if (*(iVar2 + 0x2c) != '\0') {
        do {
            iVar3 = uVar4 + 7;
            if ((*(iVar2 + 8 + iVar3 * 0x10) != '\0') ||
               ((uVar1 = *(*(iVar2 + iVar3 * 0x10) + 0xc0), (uVar1 & 0x1000000) == 0 && ((uVar1 & 0xc) != 8)))) {
                iVar5 = *(iVar2 + iVar3 * 0x10);
                *(iVar2 + 0x5c) = uVar4;
                if ((*(iVar5 + 0xc0) & 0x1000000) != 0) {
                    return iVar5;
                }
                if ((*(iVar5 + 0xc0) & 0xc) == 8) {
                    return iVar5;
                }
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(iVar2 + 0x2c));
    }
    return iVar5;
}


/* fcn.0002b8c0 @ 0x2b8c0 */

void fcn.0002b8c0(int64_t arg1)

{
    char cVar1;
    int64_t in_RDX;
    uint32_t in_R8D;
    
    cVar1 = fcn.0002b774(arg1,in_RDX,in_R8D);
    if ((cVar1 != '\0') && (*(arg1 + 0x54) != 2)) {
        *(arg1 + 0x54) = 2;
    }
    return;
}


/* fcn.0002b774 @ 0x2b774 */

uint64_t fcn.0002b774(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    uint64_t in_RAX;
    uint in_register_0000000c;
    int64_t iVar1;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if ((((*(iVar1 + 0xc) != 1) || ((*(iVar1 + 0x40) == 1 && (*(iVar1 + 0x58) == arg2)))) && (*(iVar1 + 0x53) != '\0'))
       && (*(iVar1 + 0x54) != 1)) {
        return CONCAT71(*(iVar1 + 0x20) >> 8,arg3 != *(*(iVar1 + 0x20) + 0xfc));
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00027b98 @ 0x27b98 */

void fcn.00027b98(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    ulong uVar2;
    uint64_t uVar3;
    
    *(arg1 + 0x20) = arg2;
    uVar2 = *(arg2 + 0x20);
    *(arg1 + 0x180) = 0;
    *(arg1 + 0x30) = uVar2;
    *(arg1 + 0x1a4) = arg3;
    *(arg1 + 0x43) = 0;
    *(arg1 + 0x1b8) = *(arg4 + 0x14);
    *(arg1 + 0x1c0) = *(arg4 + 8);
    uVar3 = *arg4;
    *(arg1 + 0x1b0) = uVar3;
    uVar1 = *(arg2 + 0x54);
    *(arg1 + 0x1a8) = uVar3 % uVar1;
    *(arg1 + 0x38) = *(arg2 + 0x58) * (uVar3 / uVar1);
    return;
}


/* fcn.00027acc @ 0x27acc */

void fcn.00027acc(uint32_t arg1)

{
    int *piVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    uint uVar4;
    uint in_register_0000000c;
    
    if (*(CONCAT44(in_register_0000000c,arg1) + 0x180) != 0) {
        uVar3 = *(CONCAT44(in_register_0000000c,arg1) + 400);
        piVar1 = CONCAT44(in_register_0000000c,arg1) + 0x184;
        *piVar1 = *piVar1 - uVar3;
        uVar4 = *(CONCAT44(in_register_0000000c,arg1) + 0x184);
        if ((*piVar1 != 0) && (*(CONCAT44(in_register_0000000c,arg1) + 0x42) == '\0')) {
            piVar2 = CONCAT44(in_register_0000000c,arg1) + 0x188;
            *piVar2 = *piVar2 + (uVar3 >> 9);
            *(CONCAT44(in_register_0000000c,arg1) + 0x1a8) = *(CONCAT44(in_register_0000000c,arg1) + 0x188);
            *(CONCAT44(in_register_0000000c,arg1) + 0x43) = 0;
            *(CONCAT44(in_register_0000000c,arg1) + 400) = uVar4;
            *(CONCAT44(in_register_0000000c,arg1) + 0x1b8) = uVar4;
            *(CONCAT44(in_register_0000000c,arg1) + 0x1c0) = 0;
            return;
        }
        *(CONCAT44(in_register_0000000c,arg1) + 0x180) = 0;
    }
    return;
}


/* fcn.0002a460 @ 0x2a460 */

int64_t fcn.0002a460(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    
    iVar1 = *(arg1 + 0x4a);
    if (iVar1 == 0) {
        uVar3 = arg2 / *(arg1 + 0x48);
    }
    else {
        uVar3 = arg2 >> (iVar1 & 0x3f);
    }
    uVar3 = *(arg1 + 0x2c) * uVar3 + (arg3 & 0xffU);
    uVar2 = uVar3 / *(arg1 + 100);
    *(arg1 + 0x68) = uVar3 % *(arg1 + 100);
    if (iVar1 == 0) {
        iVar4 = uVar2 * *(arg1 + 0x48);
        uVar3 = arg2 % *(arg1 + 0x48);
    }
    else {
        iVar4 = uVar2 << (iVar1 & 0x3f);
        uVar3 = *(arg1 + 0x4c) & arg2;
    }
    return uVar3 + iVar4;
}


/* fcn.00027614 @ 0x27614 */

void fcn.00027614(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    
    if (arg2 == '\0') {
        *(arg1 + 0xc0) = *(arg1 + 0xc0) & 0xfffffffb;
        *(arg1 + 0xac) = 0;
    }
    else {
        *(arg1 + 0xc0) = *(arg1 + 0xc0) | 4;
    }
    uVar1 = *(arg1 + 0xc0);
    if (((uVar1 & 0x1008d0) == 0x10) && (*(arg1 + 0xac) < 0xb)) {
        uVar1 = uVar1 | 8;
    }
    else {
        uVar1 = uVar1 & 0xfffffff7;
    }
    *(arg1 + 0xc0) = uVar1;
    if ((uVar1 >> 0x18 & 1) != 0) {
        *(arg1 + 0xc0) = uVar1 & 0xfffffff7;
    }
    return;
}


/* fcn.000283cc @ 0x283cc */

void fcn.000283cc(uint32_t arg1,uint32_t arg2)

{
    uint uVar1;
    ulong uVar2;
    uint32_t uVar3;
    uint in_register_0000000c;
    
    if (*(CONCAT44(in_register_0000000c,arg1) + 0x180) == 0) {
        uVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x1b8);
        *(CONCAT44(in_register_0000000c,arg1) + 0x188) = *(CONCAT44(in_register_0000000c,arg1) + 0x1a8);
        uVar2 = *(CONCAT44(in_register_0000000c,arg1) + 0x1c0);
        *(CONCAT44(in_register_0000000c,arg1) + 0x1c0) = 0;
        *(CONCAT44(in_register_0000000c,arg1) + 0x198) = uVar2;
        *(CONCAT44(in_register_0000000c,arg1) + 0x180) = 1;
        *(CONCAT44(in_register_0000000c,arg1) + 0x184) = uVar1;
        *(CONCAT44(in_register_0000000c,arg1) + 0x1a0) = uVar1;
    }
    uVar3 = *(CONCAT44(in_register_0000000c,arg1) + 0x184);
    if (arg2 < uVar3) {
        uVar3 = arg2;
    }
    *(CONCAT44(in_register_0000000c,arg1) + 400) = uVar3;
    *(CONCAT44(in_register_0000000c,arg1) + 0x1b8) = uVar3;
    return;
}


/* fcn.000334d8 @ 0x334d8 */

int64_t fcn.000334d8(int64_t arg1,int64_t arg2)

{
    fcn.000313a4(arg1,0x1400);
    *(arg1 + 0x40) = arg2;
    *arg1 = 0x37db0;
    *(arg1 + 8) = *(*(*0x43c08 + 0x30) + 8);
    return arg1;
}


/* fcn.0002b030 @ 0x2b030 */

void fcn.0002b030(int64_t arg1)

{
    int64_t iVar1;
    
    *(arg1 + 0x14) = 0;
    fcn.0001ba7c(arg1 + 0x18,0,0x38);
    *(arg1 + 0x50) = 0;
    *(arg1 + 0x58) = 0;
    *(arg1 + 0x60) = 0;
    *(arg1 + 0x70) = 0;
    iVar1 = *(arg1 + 0x68);
    *(arg1 + 0x88) = 0;
    *(arg1 + 0xe0) = 0;
    *(arg1 + 0x78) = 0;
    *(iVar1 + 0x18) = 0;
    *(iVar1 + 0x38) = 0;
    *(iVar1 + 0x24) = 0;
    *(iVar1 + 0x20) = 0;
    *(iVar1 + 0x28) = 0;
    *(iVar1 + 0x30) = 0;
    return;
}


/* fcn.00030d78 @ 0x30d78 */

void fcn.00030d78(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint in_register_00000014;
    
    if (CONCAT44(in_register_00000014,arg2) == 0) {
        *(arg1 + 0x28) = *(arg1 + 0x28) & CONCAT44(in_register_00000014,arg2);
        iVar1 = *(arg1 + 0x30);
        if ((*(iVar1 + 0xc0) & 2) != 0) {
            *(iVar1 + 0xc0) = *(iVar1 + 0xc0) & 0xfffffffd;
            fcn.000277c4(iVar1);
        }
    }
    else {
        iVar1 = *(arg1 + 0x30);
        if ((*(iVar1 + 0xc0) & 2) == 0) {
            *(iVar1 + 0xc0) = *(iVar1 + 0xc0) | 2;
            fcn.000277c4(iVar1);
        }
        iVar1 = *(arg1 + 0x30);
        if ((*(iVar1 + 0xc0) & 1) != 0) {
            *(iVar1 + 0xc0) = *(iVar1 + 0xc0) & 0xfffffffe;
            fcn.000277c4(iVar1);
        }
        *(arg1 + 0x28) = CONCAT44(in_register_00000014,arg2);
    }
    return;
}


/* fcn.0002aa48 @ 0x2aa48 */

void fcn.0002aa48(int64_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong in_RDX;
    uint64_t uVar4;
    uint64_t arg2;
    uint32_t in_R8D;
    uint8_t uVar5;
    uint64_t uVar6;
    
    fcn.0002b36c(arg1);
    arg2 = 0;
    *(arg1 + 0x88) = 0;
    iVar3 = fcn.0002ad54(arg1,in_RDX,in_R8D);
    uVar4 = iVar3 - 0x1a1;
    if (uVar4 == 0) {
        if (*(arg1 + 0xe0) == '\0') {
            return;
        }
        uVar4 = *(arg1 + 0xe0) - 1;
        uVar4 = *(arg1 + 0xf8 + uVar4 * 0x18) + *(arg1 + 0xf0 + uVar4 * 0x18);
    }
    uVar6 = 0;
    if (*(arg1 + 0xe0) != '\0') {
        do {
            uVar2 = *(arg1 + 0xf0 + uVar6 * 0x18);
            uVar1 = uVar2 + *(arg1 + 0xf8 + uVar6 * 0x18);
            if (uVar1 <= uVar4) {
                if (uVar1 == uVar4) break;
                if ((arg2 <= uVar2) && (uVar2 != arg2)) {
                    uVar5 = *(arg1 + 0x88);
                    if (3 < uVar5) break;
                    *(arg1 + 0x88) = uVar5 + 1;
                    fcn.000334b8((uVar5 + 9) * 0x10 + arg1,arg2,uVar2 - arg2);
                }
                arg2 = uVar1;
            }
            uVar5 = uVar6 + 1;
            uVar6 = uVar5;
        } while (uVar5 < *(arg1 + 0xe0));
    }
    uVar5 = *(arg1 + 0x88);
    if ((uVar5 < 5) && (arg2 < uVar4)) {
        *(arg1 + 0x88) = uVar5 + 1;
        fcn.000334b8((uVar5 + 9) * 0x10 + arg1,arg2,uVar4 - arg2);
    }
    return;
}


/* fcn.0002accc @ 0x2accc */

int64_t * fcn.0002accc(uint32_t arg1,uint32_t arg2,uint32_t arg3,uint32_t arg4)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    int64_t *piVar3;
    uint in_register_00000014;
    uint8_t uVar4;
    uint64_t uVar5;
    uint in_R8;
    uint in_R9;
    int64_t *piVar6;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    piVar3 = NULL;
    uVar5 = 0;
    piVar6 = piVar3;
    if (*(iVar2 + 0xe0) != '\0') {
        do {
            if ((*(iVar2 + 0xf0 + uVar5 * 0x18) < CONCAT44(in_R9,arg4)) &&
               (iVar1 = iVar2 + uVar5 * 0x18, CONCAT44(in_R8,arg3) < *(iVar1 + 0xf8) + *(iVar1 + 0xf0))) {
                return iVar1 + 0xe8;
            }
            piVar3 = iVar2 + uVar5 * 0x18 + 0xe8;
            if (*piVar3 != CONCAT44(in_register_00000014,arg2)) {
                piVar3 = piVar6;
            }
            uVar4 = uVar5 + 1;
            uVar5 = uVar4;
            piVar6 = piVar3;
        } while (uVar4 < *(iVar2 + 0xe0));
    }
    return piVar3;
}


/* fcn.000334cc @ 0x334cc */

void fcn.000334cc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    *(arg1 + 8) = arg2;
    *(arg1 + 0x10) = arg3;
    return;
}


/* fcn.0002b2f4 @ 0x2b2f4 */

void fcn.0002b2f4(int64_t arg1)

{
    uint8_t uVar1;
    int64_t in_RDX;
    int64_t in_R8;
    int64_t in_R9;
    
    uVar1 = *(arg1 + 0xe0);
    if (uVar1 < 4) {
        *(arg1 + 0xe0) = uVar1 + 1;
        fcn.000334c0(arg1 + uVar1 * 0x18 + 0xe8,in_RDX,in_R8,in_R9);
    }
    return;
}


/* fcn.000334c0 @ 0x334c0 */

void fcn.000334c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    *arg1 = arg2;
    *(arg1 + 8) = arg3;
    *(arg1 + 0x10) = arg4;
    return;
}


/* fcn.0003348c @ 0x3348c */

int64_t fcn.0003348c(int64_t arg1)

{
    uint64_t uVar1;
    
    uVar1 = 0;
    if ((-*arg1 & 0xff) <= *(arg1 + 8)) {
        uVar1 = -*arg1 & 0xffffffff000000ff;
    }
    return *(arg1 + 8) - uVar1;
}


/* fcn.0002ae44 @ 0x2ae44 */

uchar fcn.0002ae44(int64_t arg1)

{
    int iVar1;
    uchar uVar2;
    
    uVar2 = *(arg1 + 0x14);
    iVar1 = fcn.0002af28(arg1);
    if (iVar1 == 2) {
        uVar2 = *(*(*(*(arg1 + 0x58) + 0x38) + 0x28) + 0x10);
    }
    return uVar2;
}


/* fcn.00021308 @ 0x21308 */

char fcn.00021308(int64_t arg1)

{
    if (arg1 == 0) {
        return '\0';
    }
    return ((arg1 & 0x1aU) != 0) + '\x01';
}


/* fcn.0002b36c @ 0x2b36c */

void fcn.0002b36c(int64_t arg1)

{
    ulong *puVar1;
    ulong *puVar2;
    ulong uVar3;
    uint8_t uVar4;
    ulong uVar5;
    ulong uVar6;
    ulong uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint8_t uVar10;
    uint64_t *puVar11;
    uint8_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    
    uVar4 = *(arg1 + 0xe0);
    if ((1 < uVar4) && (uVar13 = 0, 0 < uVar4 - 1)) {
        do {
            uVar14 = uVar13 + 1;
            uVar12 = uVar14;
            if (uVar12 < uVar4) {
                puVar11 = arg1 + ((uVar14 & 0xff) + 10) * 0x18;
                uVar10 = uVar13;
                do {
                    uVar8 = *puVar11;
                    puVar11 = puVar11 + 3;
                    if (uVar8 < *(arg1 + (uVar10 + 10) * 0x18)) {
                        uVar10 = uVar12;
                    }
                    uVar12 = uVar12 + 1;
                } while (uVar12 < uVar4);
                if (uVar10 != uVar13) {
                    uVar8 = uVar13;
                    uVar9 = uVar10;
                    puVar1 = arg1 + 0xe8 + uVar8 * 0x18;
                    uVar5 = *puVar1;
                    uVar6 = puVar1[1];
                    uVar3 = *(arg1 + 0xf8 + uVar8 * 0x18);
                    puVar1 = arg1 + 0xe8 + uVar9 * 0x18;
                    uVar7 = puVar1[1];
                    puVar2 = arg1 + 0xe8 + uVar8 * 0x18;
                    *puVar2 = *puVar1;
                    puVar2[1] = uVar7;
                    *(arg1 + 0xf8 + uVar8 * 0x18) = *(arg1 + 0xf8 + uVar9 * 0x18);
                    puVar1 = arg1 + 0xe8 + uVar9 * 0x18;
                    *puVar1 = uVar5;
                    puVar1[1] = uVar6;
                    *(arg1 + 0xf8 + uVar9 * 0x18) = uVar3;
                }
            }
            uVar4 = *(arg1 + 0xe0);
            uVar13 = uVar14 & 0xff;
        } while (uVar13 < uVar4 - 1);
    }
    return;
}


/* fcn.000334b8 @ 0x334b8 */

void fcn.000334b8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    *arg1 = arg2;
    *(arg1 + 8) = arg3;
    return;
}


/* fcn.0002ac94 @ 0x2ac94 */

int64_t * fcn.0002ac94(int64_t arg1,uint32_t arg2)

{
    int64_t *piVar1;
    uint in_register_00000014;
    uint8_t uVar2;
    
    uVar2 = 0;
    if (*(arg1 + 0xe0) != 0) {
        do {
            if (3 < uVar2) {
                return NULL;
            }
            piVar1 = arg1 + (uVar2 * 3 + 0x1d) * 8;
            if (*piVar1 == CONCAT44(in_register_00000014,arg2)) {
                return piVar1;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(arg1 + 0xe0));
    }
    return NULL;
}


/* fcn.00030ce0 @ 0x30ce0 */

void fcn.00030ce0(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = *(arg1 + 0x30);
    if ((*(arg1_00 + 0xc0) & 4) == 0) {
        *(arg1_00 + 0xc0) = *(arg1_00 + 0xc0) | 4;
        fcn.000277c4(arg1_00);
    }
    return;
}


/* fcn.0002bcf4 @ 0x2bcf4 */

void fcn.0002bcf4(int64_t arg1,int64_t arg2)

{
    fcn.0002a614(*(arg1 + 0x10),arg2);
    if (*(arg1 + 0xc) == 1) {
        fcn.0002a614(*(arg1 + 0x18),arg2);
    }
    return;
}


/* fcn.0002a614 @ 0x2a614 */

void fcn.0002a614(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    unkbyte7 Var2;
    
    Var2 = arg2 >> 8;
    fcn.00027614(arg2,CONCAT71(Var2,1));
    uVar1 = 0;
    if (*(arg1 + 0x2c) != '\0') {
        do {
            if (*(arg1 + (uVar1 + 7) * 0x10) == arg2) {
                fcn.0002a010(arg1,CONCAT71(Var2,uVar1));
                break;
            }
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(arg1 + 0x2c));
    }
    //WARNING: Could not recover jumptable at 0x0002a666. Too many branches
    //WARNING: Treating indirect jump as call
    (***arg1)(arg1);
    return;
}


/* fcn.0002c920 @ 0x2c920 */

ulong fcn.0002c920(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = *(arg1 + 0x38);
    if ((*(iVar1 + 8) != 0) && (arg2 != 0)) {
        return *(iVar1 + 0x30);
    }
    return *(iVar1 + 0x28);
}


/* fcn.00033b38 @ 0x33b38 */

int fcn.00033b38(int64_t arg1)

{
    return ((arg1 + 0xffU >> 8) + 0x7fff >> 0xf) << 3;
}


/* fcn.0002a99c @ 0x2a99c */

//WARNING: Variable defined which should be unmapped: var_1h

int64_t fcn.0002a99c(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    char cVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    uint16_t uVar5;
    uint64_t uVar6;
    int32_t var_1h;
    
    uVar1 = fcn.0002ae44(arg1);
    uVar4 = fcn.0002b158(arg1);
    if (0x1107 < uVar4) {
        uVar6 = uVar4 - 0x1108;
        if (*(arg1 + 0x70) != 0) {
            if (uVar6 < 0x1000) {
                return 0;
            }
            uVar6 = uVar4 - 0x2108;
        }
        cVar2 = fcn.00021308(arg2 & 0xffffffff);
        if (cVar2 != '\0') {
            uVar3 = fcn.00021308(arg2 & 0xffffffff);
            uVar5 = uVar1 - 1;
            if (arg2 != 4) {
                uVar5 = uVar1;
            }
            uVar6 = ((uVar6 >> 8) / uVar3) * uVar5;
            uVar4 = 0x7fffffff;
            if (uVar6 < 0x7fffffff) {
                uVar4 = uVar6;
            }
            return uVar4 << 8;
        }
    }
    return 0;
}


/* fcn.000334a4 @ 0x334a4 */

int64_t fcn.000334a4(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    uint64_t uVar2;
    
    uVar2 = -*CONCAT44(in_register_0000000c,arg1) & 0xff;
    uVar1 = 0;
    if (uVar2 <= *(CONCAT44(in_register_0000000c,arg1) + 8)) {
        uVar1 = uVar2;
    }
    return uVar1 + *CONCAT44(in_register_0000000c,arg1);
}


/* fcn.0002c2f4 @ 0x2c2f4 */

void fcn.0002c2f4(int64_t arg1)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t iVar2;
    uint64_t arg3;
    uint64_t uVar3;
    uchar auStack_48 [64];
    
    *(arg1 + 0xf2) = 1;
    arg1_00 = *(arg1 + 0xd8);
    fcn.0002b988(arg1_00);
    iVar2 = *(arg1_00 + 0x10);
    iVar1 = iVar2;
    if (*(arg1_00 + 0xc) != 0) {
        iVar1 = *(arg1_00 + 0x18);
    }
    if ((1 < *(arg1_00 + 0x52)) &&
       (((*(iVar2 + 0x28) == 4 && (*(iVar2 + 8) == 2)) || ((*(iVar1 + 0x28) == 4 && (*(iVar1 + 8) == 2)))))) {
        arg3 = *(iVar2 + 0x48) * *(iVar2 + 0x38) + *(iVar2 + 0x20);
        uVar3 = *(iVar1 + 0x48) * *(iVar1 + 0x38) + *(iVar1 + 0x20);
        if (arg3 < uVar3) {
            arg3 = uVar3;
        }
        iVar2 = arg1_00;
        fcn.00034240(auStack_48,arg1_00,arg3);
        fcn.000342b0(auStack_48);
    }
    if (*(arg1_00 + 0x52) != '\0') {
        fcn.0002c43c(*(arg1_00 + 0x20),CONCAT71(iVar2 >> 8,1));
    }
    return;
}


/* fcn.0002a66c @ 0x2a66c */

void fcn.0002a66c(uint32_t arg1)

{
    int64_t arg1_00;
    uint in_register_0000000c;
    ulong *puVar1;
    uint64_t uVar2;
    uint8_t uVar3;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    if (*(puVar1 + 1) == 3) {
        uVar3 = 0;
        if (*(puVar1 + 0x2c) != '\0') {
            do {
                uVar2 = uVar3;
                arg1_00 = puVar1[(uVar2 + 7) * 2];
                if (((((*(arg1_00 + 0xc0) >> 2 & 1) == 0) && ((*(arg1_00 + 0xc0) >> 4 & 1) != 0)) &&
                    (*(puVar1 + uVar2 * 2 + 0xf) != '\0')) &&
                   (((*(puVar1 + 5) & 0x21) != 0 || (*(puVar1 + 0x5c) != uVar3)))) {
                    *(puVar1 + uVar2 * 2 + 0xf) = 0;
                    if ((*(arg1_00 + 0xc0) & 0x40) != 0) {
                        *(arg1_00 + 0xc0) = *(arg1_00 + 0xc0) & 0xffffffbf;
                        fcn.000277c4(arg1_00);
                    }
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < *(puVar1 + 0x2c));
        }
        *(puVar1 + 1) = 0;
        *(puVar1[2] + 0x52) = 0;
        (***puVar1)(puVar1);
        if (*(puVar1 + 1) != 3) {
            puVar1 = *(*(*(puVar1[2] + 0x20) + 200) + 0x68);
            (***puVar1)(puVar1,1);
        }
    }
    return;
}


/* fcn.00029efc @ 0x29efc */

uchar fcn.00029efc(int64_t arg1)

{
    uint8_t uVar1;
    uint16_t uVar2;
    int64_t iVar3;
    char acStackX_8 [8];
    
    acStackX_8[0] = '\0';
    uVar1 = fcn.0002a324(arg1,acStackX_8);
    if (*(arg1 + 0x28) == 8) {
        if ((uVar1 < 2) && (acStackX_8[0] == '\0')) {
            iVar3 = fcn.0002a284(arg1);
            if (iVar3 == 0) {
                return 1;
            }
            if ((*(iVar3 + 0xc0) >> 0x18 & 1) != 0) {
                return 1;
            }
            if ((*(iVar3 + 0xc0) & 0xc) == 8) {
                return 1;
            }
        }
    }
    else if (uVar1 == 0) {
        if (*(*(*(*(*(arg1 + 0x18) + 0xc0) + 0x38) + 0x28) + 0xc) != 0x10) {
            return 1;
        }
        uVar2 = fcn.0002c140();
        if (((uVar2 & 0xff) - 1 & 0xfffd) == 0) {
            return 1;
        }
        if (((*(*(*(arg1 + 0x18) + 0xc0) + 0x30) >> 0xb & 1) == 0) && ((uVar2 & 0xff00) != 0x200)) {
            return 1;
        }
    }
    return 0;
}


/* fcn.0002c860 @ 0x2c860 */

void fcn.0002c860(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    
    iVar1 = *(arg1 + 0x38);
    iVar2 = fcn.0003334c(*(iVar1 + 0x28));
    if (iVar2 == 0) {
        if (*(iVar1 + 8) == 0) {
            return;
        }
        fcn.0003334c(*(iVar1 + 0x30));
    }
    return;
}


/* fcn.0003334c @ 0x3334c */

int64_t fcn.0003334c(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    uint8_t uVar2;
    
    uVar2 = 0;
    if (*(CONCAT44(in_register_0000000c,arg1) + 0x10) != '\0') {
        do {
            iVar1 = *(*(CONCAT44(in_register_0000000c,arg1) + 0x40 + uVar2 * 8) + 0x28);
            if (iVar1 != 0) {
                return iVar1;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(CONCAT44(in_register_0000000c,arg1) + 0x10));
    }
    return 0;
}


/* fcn.0002c788 @ 0x2c788 */

void fcn.0002c788(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint uVar2;
    int64_t arg1_00;
    int64_t iVar3;
    ulong uVar4;
    
    if (*(*(*(arg1 + 0x38) + 0x28) + 0xc) == 0x10) {
        fcn.0002bf3c(arg2,arg1 + 0x40,arg1 + 0x44);
        *(arg1 + 0x48) = *(arg2 + 0xfc);
    }
    **(arg1 + 0x38) = arg1;
    arg1_00 = *(arg2 + 0xd8);
    iVar3 = *(arg1 + 0x38);
    *(iVar3 + 8) = *(arg1_00 + 0xc);
    *(iVar3 + 0xc) = *(arg1_00 + 0x40);
    *(iVar3 + 0x10) = *(arg1_00 + 0x52);
    uVar4 = fcn.0002b87c(arg1_00);
    *(iVar3 + 0x18) = uVar4;
    uVar2 = *(arg1_00 + 0x44);
    *(iVar3 + 0x3c) = 0;
    *(iVar3 + 0x20) = uVar2;
    cVar1 = *(arg1_00 + 0x53);
    *(iVar3 + 0x38) = cVar1;
    if (cVar1 != '\0') {
        *(iVar3 + 0x3c) = *(arg1_00 + 0x54);
    }
    fcn.00033290(*(iVar3 + 0x28),*(arg1_00 + 0x10));
    **(iVar3 + 0x28) = iVar3;
    if (*(iVar3 + 8) != 0) {
        fcn.00033290(*(iVar3 + 0x30),*(arg1_00 + 0x18));
        **(iVar3 + 0x30) = iVar3;
    }
    return;
}


/* fcn.0002cca0 @ 0x2cca0 */

void fcn.0002cca0(int64_t arg1)

{
    int64_t iVar1;
    
    fcn.0002c788(arg1,*arg1);
    iVar1 = *(arg1 + 0x38);
    fcn.0003340c(*(iVar1 + 0x28),arg1);
    if (*(iVar1 + 8) != 0) {
        fcn.0003340c(*(iVar1 + 0x30),arg1);
    }
    return;
}


/* fcn.0003340c @ 0x3340c */

void fcn.0003340c(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int64_t arg1_00;
    int64_t arg2_00;
    
    arg1_00 = *(arg2 + 8);
    fcn.0002a874(arg1_00,arg2,*(arg1 + 0x18),*(arg1 + 0x28));
    *(arg1 + 0x3b) = 0;
    if (*(arg1 + 0x10) == '\0') goto code_r0x00033478;
    arg2_00 = *(arg1 + 0x40);
    *(arg1 + 0x3b) = 1;
    while (arg2_00 != 0) {
        if (((*(*(arg2_00 + 0x30) + 0xc0) >> 1 & 1) == 0) || (*(arg2_00 + 0x28) == 0)) {
            fcn.0002a7d8(arg1_00,arg2_00);
        }
        uVar1 = *(arg1 + 0x3b);
        if (uVar1 < *(arg1 + 0x10)) {
            arg2_00 = *(arg1 + 0x40 + uVar1 * 8);
            *(arg1 + 0x3b) = uVar1 + 1;
        }
        else {
code_r0x00033478:
            arg2_00 = 0;
        }
    }
    return;
}


/* fcn.0002a804 @ 0x2a804 */

void fcn.0002a804(int64_t arg1)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    fcn.0002aa48(arg1);
    uVar5 = 0;
    if (*(arg1 + 0xe0) != '\0') {
        do {
            uVar1 = *(arg1 + 0x50);
            iVar2 = *(arg1 + 0xe8 + uVar5 * 0x18);
            uVar4 = 0;
            uVar3 = 0;
            if (uVar1 != 0) {
                do {
                    uVar3 = uVar4;
                    if (*(arg1 + 0x58 + uVar4 * 8) == iVar2) break;
                    uVar3 = uVar3 + 1;
                    uVar4 = uVar3;
                } while (uVar3 < uVar1);
            }
            if ((uVar3 == uVar1) && (uVar1 < 2)) {
                *(arg1 + 0x58 + uVar1 * 8) = iVar2;
                *(arg1 + 0x50) = *(arg1 + 0x50) + '\x01';
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(arg1 + 0xe0));
    }
    return;
}


/* fcn.0002bd2c @ 0x2bd2c */

ulong * fcn.0002bd2c(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *puVar3;
    
    iVar1 = *(arg2 + 0xc);
    if (iVar1 == 1) {
code_r0x0002bd64:
        iVar2 = fcn.00027170(0xe8);
        if (iVar2 != 0) {
            puVar3 = fcn.00033d44(iVar2);
            goto code_r0x0002bdc6;
        }
    }
    else {
        if (iVar1 != 2) {
            if (iVar1 == 4) {
                iVar2 = fcn.00027170(0xe8);
                if (iVar2 != 0) {
                    puVar3 = fcn.00031df8(iVar2);
                    goto code_r0x0002bdc6;
                }
                goto code_r0x0002bdc4;
            }
            if ((iVar1 != 8) && (iVar1 != 0x10)) {
                if (iVar1 != 0x20) {
                    return NULL;
                }
                goto code_r0x0002bd64;
            }
        }
        iVar2 = fcn.00027170(0xe8);
        if (iVar2 != 0) {
            puVar3 = fcn.00033ed8(iVar2,arg1,arg2);
            goto code_r0x0002bdc6;
        }
    }
code_r0x0002bdc4:
    puVar3 = NULL;
code_r0x0002bdc6:
    if (puVar3 != NULL) {
        (***puVar3)(puVar3);
        if ((*(arg2 + 8) < 2) && (*(puVar3 + 1) == 3)) {
            *(puVar3 + 0x5c) = *(arg2 + 0x39);
        }
        return puVar3;
    }
    return NULL;
}


/* fcn.0002a0ec @ 0x2a0ec */

void fcn.0002a0ec(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    char cVar2;
    int64_t iVar3;
    ulong *puVar4;
    bool bVar5;
    
    *(arg2 + 0x18) = arg3;
    *(arg2 + 0x43) = 0;
    fcn.00027b98(arg2,arg1,CONCAT71(arg3 >> 8,*(arg3 + 0x1c)),arg3);
    iVar3 = *(arg1 + 0x10);
    cVar2 = *(iVar3 + 0x52);
    if ((((*(arg3 + 0x1c) == '*') && (cVar2 == '\0')) &&
        ((*(*(iVar3 + 0x10) + 0x28) == 4 || ((*(iVar3 + 0xc) == 1 && (*(*(iVar3 + 0x18) + 0x28) == 4)))))) &&
       (*(arg1 + 8) < 2)) {
        bVar5 = true;
        *(iVar3 + 0x52) = 1;
        puVar4 = *(*(*(arg1 + 0x18) + 200) + 0x68);
        (***puVar4)(puVar4,1);
    }
    else {
        bVar5 = false;
    }
    do {
        if (*(arg3 + 0x1c) == '(') {
            (**(*arg1 + 8))(arg1);
        }
        else {
            pcVar1 = *(*(arg1 + 0x10) + 0x20) + 0xf5;
            *pcVar1 = *pcVar1 + '\x01';
            (**(*arg1 + 0x10))(arg1,arg2);
            pcVar1 = *(*(arg1 + 0x10) + 0x20) + 0xf5;
            *pcVar1 = *pcVar1 + -1;
        }
        fcn.00027acc(arg2);
    } while (*(arg2 + 0x180) != 0);
    if (bVar5) {
        *(*(arg1 + 0x10) + 0x52) = cVar2;
        puVar4 = *(*(*(arg1 + 0x18) + 200) + 0x68);
        (***puVar4)(puVar4,1);
    }
    return;
}


/* fcn.0002c190 @ 0x2c190 */

uint fcn.0002c190(int64_t arg1)

{
    return *(*(arg1 + 0xd8) + 0xc);
}


/* fcn.00027390 @ 0x27390 */

int64_t fcn.00027390(int64_t arg1)

{
    return *(arg1 + 0x80) + -1;
}


/* fcn.000345d4 @ 0x345d4 */

ulong fcn.000345d4(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint in_register_00000014;
    int64_t iVar2;
    uint8_t uVar3;
    
    iVar2 = CONCAT44(in_register_00000014,arg2);
    uVar3 = 0;
    if (*(iVar2 + 0x2c) != '\0') {
        do {
            iVar1 = *(iVar2 + (uVar3 + 7) * 0x10);
            if ((*(iVar1 + 0xc0) >> 4 & 1) != 0) {
                if (*(iVar1 + 0x80) >> 0x20 != 0) {
                    return 0;
                }
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(iVar2 + 0x2c));
    }
    *(arg1 + 0x34) = 0;
    *(arg1 + 0x30) = 0;
    return 1;
}


/* fcn.00034628 @ 0x34628 */

void fcn.00034628(uint32_t *arg1,int64_t arg2)

{
    uint32_t *puVar1;
    int64_t arg1_00;
    int64_t iVar2;
    int64_t arg2_00;
    int64_t arg4;
    int64_t arg4_00;
    unkbyte7 in_R8;
    uint8_t uVar3;
    uint64_t uVar4;
    uint16_t uVar5;
    
    arg1_00 = *(arg2 + 0x10);
    arg4_00 = CONCAT44(arg1[0xd],arg1[6]);
    arg4 = CONCAT44(arg1[0xe],arg1[7]);
    if ((arg1[5] & 0x7fffff) != 0) {
        uVar4 = (arg1[5] * 0x200 - 1 >> 9) + 1;
        do {
            uVar5 = *(arg1_00 + 0x2c);
            uVar3 = 0;
            if (*(arg1_00 + 0x2c) != 0) {
                do {
                    arg2_00 = *(arg1_00 + (uVar3 + 7) * 0x10);
                    iVar2 = arg2_00;
                    fcn.0002910c(*0x43c08,arg2_00,CONCAT71(in_R8,0x28),arg4_00);
                    fcn.00021318(arg1_00,CONCAT71(iVar2 >> 8,uVar3));
                    fcn.0002910c(*0x43c08,arg2_00,CONCAT71(in_R8,0x2a),arg4);
                    fcn.00021318(arg1_00,CONCAT71(arg2_00 >> 8,uVar3));
                    uVar3 = uVar3 + 1;
                    uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
            }
            arg4_00 = arg4_00 + 1;
            arg4 = arg4 + 1;
            uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
    }
    if (arg1[3] == 0) {
        arg1[1] = arg1[1] - 1;
        if (arg1[1] == 0xffffffff) {
            arg1[0xc] = arg1[0xc] - 1;
        }
    }
    else {
        puVar1 = arg1 + 1;
        *puVar1 = *puVar1 + 1;
        if (*puVar1 == 0) {
            arg1[0xc] = arg1[0xc] + 1;
        }
    }
    return;
}


/* fcn.00021318 @ 0x21318 */

void fcn.00021318(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    
    uVar1 = arg2;
    if (*(*0x43c08 + 0x40) != 0) {
        fcn.0002a010(arg1,arg2);
        if ((*(arg1 + 0x28) & 0x21) != 0) {
            fcn.0002a208(arg1,CONCAT31(uVar1 >> 8,0xff));
        }
    }
    return;
}


/* fcn.00029ffc @ 0x29ffc */

//WARNING: Removing unreachable block (ram,0x0001ba30)
//WARNING: Removing unreachable block (ram,0x0001ba35)
//WARNING: Removing unreachable block (ram,0x0001ba41)

ulong fcn.00029ffc(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    
    iVar2 = 0xe8;
    iVar1 = 0xe8;
    if (arg1 != 0) {
        if (arg2 != 0) {
            arg2 = arg2 - arg1;
            do {
                *arg1 = *(arg1 + arg2);
                arg1 = arg1 + 1;
                iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            return 0;
        }
        do {
            *arg1 = 0;
            arg1 = arg1 + 1;
            iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
    }
    return 0x8000000000000002;
}


/* fcn.0002b988 @ 0x2b988 */

void fcn.0002b988(int64_t arg1)

{
    uint16_t uVar1;
    char cVar2;
    int iVar3;
    int64_t iVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t in_RDX;
    uint8_t uVar8;
    int64_t in_R8;
    ulong uStack_218;
    int iStack_210;
    char cStack_20c;
    uint32_t uStack_208;
    uint uStack_1e8;
    
    iVar3 = fcn.0002af28(*(*(arg1 + 0x20) + 200));
    if (*(arg1 + 0xc) != 0) {
        if ((*(arg1 + 0x40) == 3) || (iVar3 == 6)) {
            uVar8 = 0;
            while( true ) {
                iVar7 = *(arg1 + 0x10);
                uVar5 = 2;
                if (*(iVar7 + 0x2c) < 3) {
                    uVar5 = *(iVar7 + 0x2c);
                }
                if (uVar5 <= uVar8) break;
                iVar7 = *(iVar7 + (uVar8 + 7) * 0x10);
                if ((*(iVar7 + 0xc0) >> 3 & 1) != 0) {
                    iVar4 = fcn.00027390(iVar7);
                    in_R8 = CONCAT71(in_R8 >> 8,0x28);
                    in_RDX = iVar7;
                    fcn.0002910c(*0x43c08,iVar7,in_R8,iVar4);
                    if (*(*0x43c08 + 0x40) == 0) {
                        cVar2 = fcn.000345d4(&uStack_218,*(arg1 + 0x10));
                        if (iVar3 == 6) {
                            if (cVar2 == '\0') {
                                uVar6 = (&uStack_218)[*(arg1 + 0x44)];
                            }
                            else {
                                uVar6 = *(&uStack_218 + *(arg1 + 0x44) * 4);
                            }
                            *(arg1 + 0x38) = uVar6;
                            uVar8 = *(*(arg1 + 0x10) + 0x5d);
                            uVar1 = *(*(arg1 + 0x10) + 0x48);
                            *(arg1 + 0x30) = 1;
                            *(arg1 + 0x28) = uVar8 * uVar1 * *(arg1 + 0x38);
                            return;
                        }
                        if (((iStack_210 == *(*(*(*(arg1 + 0x20) + 200) + 0x68) + 0x18)) || (iStack_210 == -0x54301127))
                           && (uStack_218 == 1)) {
                            fcn.00034628(&uStack_218,arg1);
                            uStack_218._0_4_ = 0;
                            iVar4 = fcn.00027390(iVar7);
                            fcn.0002910c(*0x43c08,iVar7,CONCAT71(in_R8 >> 8,0x2a),iVar4);
                            fcn.00021318(*(arg1 + 0x10),CONCAT71(iVar7 >> 8,uVar8));
                        }
                        iVar7 = uStack_208 * CONCAT44(uStack_1e8,uStack_218._4_4_);
                        *(arg1 + 0x38) = CONCAT44(uStack_1e8,uStack_218._4_4_);
                        *(arg1 + 0x28) = iVar7;
                        *(arg1 + 0x30) = cStack_20c;
                        if (cStack_20c == '\0') {
                            *(arg1 + 0x28) = iVar7 + uStack_208;
                            return;
                        }
                        return;
                    }
                }
                uVar8 = uVar8 + 1;
            }
            fcn.0002a208(iVar7,CONCAT71(in_RDX >> 8,0xff));
        }
        else {
            iVar7 = *(arg1 + 0x10);
            uVar8 = *(iVar7 + 0x5d);
            uVar1 = *(iVar7 + 0x48);
            *(arg1 + 0x30) = 1;
            *(arg1 + 0x28) = uVar8 * uVar1 * *(arg1 + 0x38);
            if (*(iVar7 + 8) < 2) {
                return;
            }
            if (*(arg1 + 0x40) != 0) {
                return;
            }
        }
        *(arg1 + 0xc) = 0;
    }
    return;
}


/* fcn.00034240 @ 0x34240 */

void fcn.00034240(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    
    *arg1 = arg2;
    *(arg1 + 0x10) = arg3;
    iVar2 = *(*(arg2 + 0x10) + 0x70);
    *(arg1 + 8) = iVar2;
    uVar1 = *(iVar2 + 0xc0);
    if (((uVar1 >> 3 & 1) == 0) || ((uVar1 >> 2 & 1) != 0)) {
        *(arg1 + 8) = *(*(arg2 + 0x10) + 0x80);
    }
    return;
}


/* fcn.000342b0 @ 0x342b0 */

void fcn.000342b0(int64_t arg1)

{
    int *piVar1;
    int iVar2;
    ulong *puVar3;
    int16_t iVar4;
    uint64_t uVar5;
    uint uVar6;
    int64_t iVar7;
    ulong in_R8;
    uint64_t arg3;
    bool bVar8;
    int64_t iStack_228;
    uchar uStack_220;
    ushort uStack_21e;
    int64_t iStack_218;
    uchar uStack_210;
    ushort uStack_20e;
    int aiStack_208 [2];
    int64_t iStack_200;
    uint32_t uStack_1f8;
    ulong uStack_1f0;
    uint8_t auStack_1e8 [4];
    uint8_t auStack_1e4 [476];
    
    iStack_218 = 0;
    uStack_210 = 0;
    iStack_228 = 0;
    uStack_220 = 0;
    uStack_20e = 0x10;
    uStack_21e = 0x10;
    fcn.0002fdc8(&iStack_218,0);
    fcn.0002fdc8(&iStack_228,0);
    if ((iStack_218 != 0) && (iStack_228 != 0)) {
        iVar7 = *(arg1 + 8);
        fcn.0002910c(*0x43c08,iVar7,CONCAT71(in_R8 >> 8,0x28),*(arg1 + 0x10) + 1);
        bVar8 = false;
        if (*(*0x43c08 + 0x40) == 0) {
            iVar7 = *(*(*(*arg1 + 0x20) + 200) + 0x68);
            if (aiStack_208[0] == *(iVar7 + 0x18)) {
                iVar7 = *(arg1 + 8);
                fcn.0002910c(*0x43c08,iVar7,0x28,iStack_200);
                bVar8 = false;
                if (*(*0x43c08 + 0x40) == 0) {
                    iVar7 = iStack_228;
                    iVar4 = fcn.0001ba94(aiStack_208,iStack_228,0x200);
                    if (iVar4 == 0) {
                        arg3 = uStack_1f8;
                        *(arg1 + 0x20) = 0;
                        *(arg1 + 0x18) = *(arg1 + 0x10) + 2;
                        if (uStack_1f8 != 0) {
                            do {
                                iVar2 = *(auStack_1e4 + *(arg1 + 0x20) * 0x10 + -4);
                                *(arg1 + 0x30) = iVar2;
                                *(arg1 + 0x28) = (&uStack_1f0)[*(arg1 + 0x20) * 2];
                                if (iVar2 != 0) {
                                    do {
                                        iVar7 = CONCAT71(arg3 >> 8,0x28);
                                        uVar6 = 0x2000;
                                        if (*(arg1 + 0x30) < 0x2000) {
                                            uVar6 = *(arg1 + 0x30);
                                        }
                                        *(arg1 + 0x24) = uVar6;
                                        fcn.0002910c(*0x43c08,*(arg1 + 8),iVar7,*(arg1 + 0x18));
                                        if (*(*0x43c08 + 0x40) != 0) {
code_r0x0003456a:
                                            *(*arg1 + 0x52) = 1;
                                            puVar3 = *(*(*(*arg1 + 0x20) + 200) + 0x68);
                                            (***puVar3)(puVar3,1);
                                            goto code_r0x000345a8;
                                        }
                                        fcn.0002910c(*0x43c08,
                                                     *(*(*arg1 + 0x10) + (auStack_1e4[*(arg1 + 0x20) * 0x10] + 7) * 0x10
                                                      ),CONCAT71(iVar7 >> 8,0x28),*(arg1 + 0x28));
                                        if (*(*0x43c08 + 0x40) != 0) goto code_r0x0003456a;
                                        iVar7 = iStack_218;
                                        fcn.00032100(*(arg1 + 0x24),iStack_228,iStack_218,iStack_218);
                                        arg3 = CONCAT71(iVar7 >> 8,0x2a);
                                        fcn.0002910c(*0x43c08,
                                                     *(*(*arg1 + 0x10) +
                                                      (auStack_1e4[*(arg1 + 0x20) * 0x10 + 1] + 7) * 0x10),arg3,
                                                     *(arg1 + 0x28));
                                        if (*(*0x43c08 + 0x40) != 0) goto code_r0x0003456a;
                                        uVar5 = *(arg1 + 0x24) >> 9;
                                        *(arg1 + 0x18) = *(arg1 + 0x18) + uVar5;
                                        *(arg1 + 0x28) = *(arg1 + 0x28) + uVar5;
                                        piVar1 = arg1 + 0x30;
                                        *piVar1 = *piVar1 - *(arg1 + 0x24);
                                    } while (*piVar1 != 0);
                                    arg3 = uStack_1f8;
                                }
                                *(arg1 + 0x20) = *(arg1 + 0x20) + 1;
                            } while (*(arg1 + 0x20) < arg3);
                        }
                        *(*arg1 + 0x52) = 0;
                        uStack_1f8 = 0;
                        fcn.0002910c(*0x43c08,*(arg1 + 8),CONCAT71(arg3 >> 8,0x2a),*(arg1 + 0x10) + 1);
                        goto code_r0x000345a8;
                    }
                    bVar8 = *(*0x43c08 + 0x40) == 0;
                }
            }
            else {
                bVar8 = true;
            }
        }
        fcn.00034284(arg1,CONCAT71(iVar7 >> 8,bVar8));
    }
code_r0x000345a8:
    fcn.0002fca4(iStack_228);
    fcn.0002fca4(iStack_218);
    return;
}


/* fcn.00033d44 @ 0x33d44 */

int64_t fcn.00033d44(int64_t arg1)

{
    int64_t in_RDX;
    int64_t in_R8;
    
    fcn.00029d44(arg1,in_RDX,in_R8);
    *(arg1 + 0x60) = 0;
    *arg1 = 0x37dc0;
    *(arg1 + 0x5d) = *(arg1 + 0x2c);
    return arg1;
}


/* fcn.00029d44 @ 0x29d44 */

int64_t fcn.00029d44(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    ulong uVar4;
    int64_t arg2_00;
    uint16_t uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    char cVar8;
    uint64_t uVar9;
    uint8_t uVar10;
    
    *(arg1 + 0x10) = arg2;
    *arg1 = 0x37b68;
    *(arg1 + 0x18) = *(arg2 + 0x20);
    *(arg1 + 0x28) = *(arg3 + 0xc);
    *(arg1 + 100) = *(arg3 + 0x38);
    *(arg1 + 8) = *(arg3 + 8);
    *(arg1 + 0x30) = *(arg3 + 0x20) << 9;
    uVar4 = fcn.000333a4(arg3);
    *(arg1 + 0x40) = uVar4;
    cVar8 = *(arg3 + 0x10);
    uVar9 = 0;
    *(arg1 + 0x2c) = cVar8;
    *(arg1 + 0x38) = *(arg3 + 0x30);
    *(arg1 + 0x20) = *(arg3 + 0x18);
    *(arg1 + 0x5c) = *(arg3 + 0x39);
    if (cVar8 != '\0') {
        do {
            cVar8 = uVar9;
            arg2_00 = fcn.0002ce30(*0x43c08 + 0x48,*(arg3 + 0x40 + uVar9 * 8) + 0x11);
            if (arg2_00 == 0) {
                return arg1;
            }
            iVar7 = arg2_00;
            fcn.00032ffc(arg1 + 0x70 + uVar9 * 0x10,arg2_00);
            if (((((*(arg2_00 + 0xc0) >> 0x18 & 1) == 0) && ((*(arg2_00 + 0xc0) & 0xc) != 8)) ||
                ((*(arg1 + 8) == 2 && (cVar8 == *(arg1 + 0x5c))))) || (*(uVar9 + 0x70 + arg3) != '\0')) {
                *(arg1 + 0x78 + uVar9 * 0x10) = 1;
                fcn.0002a010(arg1,CONCAT71(iVar7 >> 8,cVar8));
            }
            uVar9 = cVar8 + 1U;
        } while (cVar8 + 1U < *(arg1 + 0x2c));
    }
    iVar1 = *(arg1 + 0x28);
    if (iVar1 < 1) {
code_r0x00029e71:
        *(arg1 + 0x34) = 0;
        goto code_r0x00029e74;
    }
    if (iVar1 < 3) {
code_r0x00029eca:
        uVar3 = *(arg1 + 0x2c);
    }
    else {
        if (iVar1 != 4) {
            if (((iVar1 - 8U & 0xffffffe7) != 0) || (iVar1 == 0x18)) goto code_r0x00029e71;
            goto code_r0x00029eca;
        }
        uVar3 = *(arg1 + 0x2c) - 1;
    }
    *(arg1 + 0x34) = uVar3 * *(arg1 + 0x30);
code_r0x00029e74:
    *(arg1 + 0x2d) = *(arg1 + 0x2c) + -1;
    uVar3 = *(arg1 + 0x34) >> 9;
    uVar6 = *(arg1 + 0x30) >> 9;
    *(arg1 + 0x50) = uVar3;
    *(arg1 + 0x54) = uVar3;
    *(arg1 + 0x58) = uVar6 & 0xffff;
    uVar2 = uVar6;
    *(arg1 + 0x48) = uVar2;
    *(arg1 + 0x4c) = uVar2 - 1;
    uVar5 = 0;
    if ((uVar2 & uVar2 - 1) == 0) {
        do {
            uVar2 = uVar5;
            uVar5 = uVar6 >> 1;
            uVar6 = uVar5;
            if (uVar5 == 0) break;
            uVar10 = uVar2 + 1;
            uVar2 = uVar10;
            uVar5 = uVar10;
        } while (uVar10 < 0x20);
        *(arg1 + 0x4a) = uVar2;
    }
    else {
        *(arg1 + 0x4a) = 0;
    }
    return arg1;
}


/* fcn.00031df8 @ 0x31df8 */

int64_t fcn.00031df8(int64_t arg1)

{
    fcn.00033d44(arg1);
    *arg1 = 0x37d80;
    *(arg1 + 0x5d) = *(arg1 + 0x2d);
    *(arg1 + 0x60) = 1;
    *(arg1 + 0x54) = *(arg1 + 0x54) * *(arg1 + 0x2c);
    *(arg1 + 0x58) = *(arg1 + 0x58) * *(arg1 + 0x2c);
    return arg1;
}


/* fcn.00033ed8 @ 0x33ed8 */

int64_t fcn.00033ed8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    fcn.00029d44(arg1,arg2,arg3);
    *arg1 = 0x37de8;
    *(arg1 + 0x60) = 0;
    *(arg1 + 0x5d) = *(arg1 + 0x2c);
    *(arg1 + 0x6c) = 0;
    *(arg1 + 0x58) = *(arg1 + 0x58) * *(arg1 + 100);
    *(arg1 + 0x6e) = *(arg1 + 0x2c) != *(arg1 + 100);
    return arg1;
}


/* fcn.0002b7a8 @ 0x2b7a8 */

void fcn.0002b7a8(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint64_t uVar1;
    int64_t arg1_00;
    int64_t arg1_01;
    uint in_R8;
    uint64_t *arg3_00;
    uint64_t uStack_28;
    uint64_t uStack_20;
    ulong uStack_18;
    uint64_t uStack_10;
    
    arg3_00 = CONCAT44(in_R8,arg3);
    uVar1 = *arg3_00;
    if (*(arg1 + 0x30) == '\0') {
        arg1_00 = *(arg1 + 0x18);
        arg1_01 = *(arg1 + 0x10);
    }
    else {
        arg1_00 = *(arg1 + 0x10);
        arg1_01 = *(arg1 + 0x18);
    }
    if (*(arg1 + 0x28) <= ((*(arg3_00 + 0x14) >> 9) - 1) + uVar1) {
        if (uVar1 < *(arg1 + 0x28)) {
            uStack_28 = *arg3_00;
            uStack_20 = arg3_00[1];
            uStack_18 = arg3_00[2];
            uStack_10 = arg3_00[3];
            *(arg3_00 + 0x14) = (*(arg1 + 0x28) - uVar1) * 0x200;
            fcn.0002a0ec(arg1_00,arg2,arg3_00);
            if (*(arg2 + 0x42) == '\0') {
                uStack_28 = *(arg1 + 0x28);
                uStack_18 = CONCAT44(uStack_18._4_4_ - *(arg3_00 + 0x14),uStack_18);
                uStack_20 = uStack_20 + *(arg3_00 + 0x14);
                fcn.0002a0ec(arg1_01,arg2,&uStack_28);
            }
            *(arg3_00 + 0x14) = *(arg3_00 + 0x14) + uStack_18._4_4_;
            return;
        }
        arg1_00 = arg1_01;
    }
    fcn.0002a0ec(arg1_00,arg2,arg3_00);
    return;
}


/* fcn.0002c428 @ 0x2c428 */

void fcn.0002c428(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    *(arg1 + 0x10) = *(arg1 + 0x14);
    *(arg1 + 0x1a) = arg3;
    *(arg1 + 0x18) = arg2;
    return;
}


/* fcn.0002c19c @ 0x2c19c */

//WARNING: Possible PIC construction at 0x0002c1b5: Changing call to branch
//WARNING: Removing unreachable block (ram,0x0002c1ba)
//WARNING: Removing unreachable block (ram,0x0002c1dc)
//WARNING: Removing unreachable block (ram,0x0002c1d5)
//WARNING: Removing unreachable block (ram,0x0002c1de)

uint fcn.0002c19c(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    
    iVar2 = *(arg1 + 0xd8);
    iVar1 = fcn.0002c190(*(iVar2 + 0x20));
    if (iVar1 == 0) {
        iVar2 = *(iVar2 + 0x10);
    }
    else {
        iVar2 = *(iVar2 + 0x18);
    }
    return *(iVar2 + 8);
}


/* fcn.0002b618 @ 0x2b618 */

int64_t fcn.0002b618(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    fcn.00030b80(arg1);
    *(arg1 + 0x20) = arg2;
    *(arg1 + 0x4a) = 0;
    *(arg1 + 0x4e) = 0x200020;
    *(arg1 + 0x52) = *(arg3 + 0x10);
    *(arg1 + 0x38) = *(arg3 + 0x18);
    *(arg1 + 0x44) = *(arg3 + 0x20);
    *(arg1 + 0xc) = *(arg3 + 8);
    *(arg1 + 0x40) = *(arg3 + 0xc);
    if (*(arg3 + 0x38) == '\0') {
        *(arg1 + 0x53) = 0;
        *(arg1 + 0x54) = 0;
    }
    else {
        *(arg1 + 0x53) = 1;
        *(arg1 + 0x54) = *(arg3 + 0x3c);
    }
    if (arg4 == 0) {
        iVar3 = *(arg3 + 0x28);
    }
    else {
        iVar3 = *(arg3 + 0x30);
    }
    iVar2 = fcn.0002bd2c(arg1,iVar3);
    *(arg1 + 0x10) = iVar2;
    if (iVar2 != 0) {
        *(arg1 + 0x48) = 1 << (*(iVar2 + 0x60) & 0x1f);
        if (*(arg1 + 0xc) == 0) {
            iVar3 = fcn.0002bd2c(arg1,iVar3);
            *(arg1 + 0x18) = iVar3;
            if (iVar3 == 0) {
                return arg1;
            }
        }
        else {
            iVar3 = fcn.0002bd2c(arg1,*(arg3 + 0x30));
            *(arg1 + 0x18) = iVar3;
            if (iVar3 == 0) {
                return arg1;
            }
            *(arg1 + 0x48) = *(arg1 + 0x48) | 1 << (*(iVar3 + 0x60) & 0x1f);
        }
        if (*(arg1 + 0xc) == 1) {
            if ((*(*(arg1 + 0x18) + 8) == 3) && (*(*(arg1 + 0x10) + 8) != 3)) {
                *(*(arg1 + 0x10) + 8) = 3;
                *(*(arg1 + 0x10) + 0x5c) = *(*(arg1 + 0x18) + 0x5c);
            }
            if ((((*(arg1 + 0xc) == 1) && (*(arg1 + 0x40) < 2)) && (*(*(arg1 + 0x10) + 8) == 2)) &&
               (cVar1 = fcn.00029efc(*(arg1 + 0x10)), cVar1 == '\0')) {
                *(arg1 + 0xc) = 0;
            }
        }
    }
    return arg1;
}


/* fcn.00026dfc @ 0x26dfc */

//WARNING: Variable defined which should be unmapped: var_6h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_20h

char fcn.00026dfc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    char cVar2;
    char cVar3;
    uint32_t uVar4;
    int16_t iVar5;
    uint32_t uVar6;
    int64_t iStack_48;
    int64_t iStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t var_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    int16_t var_6h;
    
    cVar2 = fcn.000259a0(arg1);
    if ((cVar2 == '\0') || (arg2 != *(arg1 + 0x238))) {
        return '\0';
    }
    uVar6 = *(arg3 + 0x14);
    iVar5 = 0;
    do {
        uVar1 = *(iVar5 * 0x10 + 0x208 + arg1);
        if ((uVar1 <= *arg3) && ((uVar6 >> 9) + *arg3 <= *(arg1 + (iVar5 + 0x21) * 0x10) + uVar1)) {
            if (*(arg3 + 0x1c) != '*') {
                return '\0';
            }
            fcn.0002f920(*0x42dd8,0);
            return '\0';
        }
        iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
    cVar2 = '\x01';
    iStack_48 = *arg3;
    iStack_40 = *(arg3 + 8);
    uStack_38 = *(arg3 + 0x10);
    uStack_30 = *(arg3 + 0x18);
    if (uVar6 != 0) {
        do {
            uVar4 = uVar6;
            if (0x400000 < uVar6) {
                uVar4 = 0x400000;
            }
            uStack_38 = CONCAT44(uVar4,uStack_38);
            cVar3 = fcn.000266d0(arg1,arg2,&iStack_48);
            if (((cVar2 == '\0') || (cVar2 = '\x01', cVar3 == '\0')) && (cVar2 = '\0', cVar3 == '\0')) {
                cVar2 = fcn.00025c34(arg1,arg2,arg3);
                if (cVar2 != '\0') {
                    return '\0';
                }
                *(arg3 + 0x1a) = uStack_30._2_2_;
code_r0x00026f52:
                *(arg3 + 0x18) = 5;
                return '\x01';
            }
            if (uStack_30 == 5) {
                *(arg3 + 0x1a) = uStack_30._2_2_;
                goto code_r0x00026f52;
            }
            iStack_40 = iStack_40 + uStack_38._4_4_;
            iStack_48 = iStack_48 + (uStack_38._4_4_ >> 9);
            uVar6 = uVar6 - uStack_38._4_4_;
        } while (uVar6 != 0);
        if (cVar2 == '\0') {
            return '\0';
        }
    }
    *(arg3 + 0x10) = *(arg3 + 0x14);
    *(arg3 + 0x18) = 0;
    return cVar2;
}


/* fcn.000295a4 @ 0x295a4 */

int fcn.000295a4(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int iVar2;
    int64_t arg2_00;
    uint32_t uVar3;
    uint32_t uStackX_18;
    uchar auStackX_20 [8];
    
    arg2_00 = *arg2;
    iVar2 = 0;
    for (uVar3 = *(arg2 + 0x14) >> 9; uVar3 != 0; uVar3 = uVar3 - uStackX_18) {
        cVar1 = fcn.00029a9c(arg1,arg2_00,uVar3,auStackX_20);
        if (cVar1 != '\0') {
            iVar2 = iVar2 + uStackX_18;
        }
        arg2_00 = arg2_00 + uStackX_18;
    }
    return iVar2;
}


/* fcn.0002998c @ 0x2998c */

void fcn.0002998c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    char cVar2;
    int64_t arg2_00;
    uint32_t uVar3;
    uchar uVar4;
    uint32_t uStackX_10;
    uint32_t auStack_38 [4];
    
    iVar1 = *arg2;
    uVar3 = *(arg2 + 0x14) >> 9;
    arg2_00 = iVar1;
    do {
        if (uVar3 == 0) {
            return;
        }
        uVar4 = 0;
        cVar2 = fcn.00029a9c(arg1,arg2_00,uVar3,auStack_38);
        if (cVar2 != '\0') {
            if (*(arg2 + 0x1c) == '(') {
                cVar2 = fcn.0002972c(arg1,auStack_38[0],uStackX_10 << 9,(arg2_00 - iVar1) * 0x200 + *(arg2 + 8));
code_r0x00029a3d:
                if (cVar2 == '\0') goto code_r0x00029a7b;
            }
            else if (*(arg2 + 0x1c) == '*') {
                cVar2 = fcn.00029c4c(arg1,auStack_38[0],uStackX_10 << 9,(arg2_00 - iVar1) * 0x200 + *(arg2 + 8));
                goto code_r0x00029a3d;
            }
            uVar4 = 1;
        }
        if ((arg3 != 0) && (cVar2 = (*arg3)(uVar4,arg2_00,uStackX_10,arg2,arg4), cVar2 == '\0')) {
code_r0x00029a7b:
            *(arg1 + 0x36) = 0;
            return;
        }
        arg2_00 = arg2_00 + uStackX_10;
        uVar3 = uVar3 - uStackX_10;
    } while( true );
}


/* fcn.0003477c @ 0x3477c */

void fcn.0003477c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    *(arg1 + 0x18) = arg2;
    *(arg1 + 0x1a) = arg3;
    *(arg1 + 0x10) = arg4;
    return;
}


/* fcn.00025ab0 @ 0x25ab0 */

void fcn.00025ab0(int64_t arg1)

{
    *(arg1 + 0x18) = 0;
    *(arg1 + 0x10) = *(arg1 + 0x14);
    return;
}


/* fcn.0002c4c0 @ 0x2c4c0 */

ulong fcn.0002c4c0(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int iVar2;
    
    *(*0x42dc8 + 0x36) = 1;
    if (((*(*0x42dc8 + 0x35) != '\0') && (cVar1 = fcn.00025aa4(*0x429d0,arg1), cVar1 != '\0')) &&
       (iVar2 = fcn.000295a4(*0x42dc8,arg2), iVar2 != 0)) {
        fcn.0002998c(*0x42dc8,arg2,0x2c308,arg1);
        if (*(*0x42dc8 + 0x36) == '\0') {
            fcn.0003477c(arg2,5,8,0);
        }
        else {
            fcn.00025ab0(arg2);
        }
        return 1;
    }
    return 0;
}


/* fcn.00034904 @ 0x34904 */

int64_t fcn.00034904(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    
    iVar1 = fcn.00027170(0x78);
    uVar2 = 0;
    if (iVar1 != 0) {
        uVar2 = fcn.00033004(iVar1);
    }
    *(arg1 + 0x28) = uVar2;
    iVar1 = fcn.00027170(0x78);
    uVar2 = 0;
    if (iVar1 != 0) {
        uVar2 = fcn.00033004(iVar1);
    }
    *arg1 = 0;
    *(arg1 + 8) = 0;
    *(arg1 + 0xc) = 0;
    *(arg1 + 0x18) = 0;
    *(arg1 + 0x20) = 0;
    *(arg1 + 0x30) = uVar2;
    *(arg1 + 0x10) = 0;
    *(arg1 + 0x38) = 0;
    return arg1;
}


/* fcn.000348b8 @ 0x348b8 */

char fcn.000348b8(uint32_t arg1,int64_t arg2)

{
    char cVar1;
    char cVar2;
    uint in_register_0000000c;
    
    cVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0xf);
    if (cVar1 == '\0') {
        cVar2 = '\x01';
        if (*(CONCAT44(in_register_0000000c,arg1) + 0x10) == '\x01') {
            cVar2 = ' ';
        }
    }
    else {
        if (cVar1 == '\x01') {
            if (3 < *(CONCAT44(in_register_0000000c,arg1) + 0x10)) {
                return '\b';
            }
            return (-((arg2 & 0x400U) != 0) & 0xeU) + 2;
        }
        cVar2 = '\x04';
        if (cVar1 != '\x05') {
            return '\0';
        }
    }
    return cVar2;
}


/* fcn.00034ae4 @ 0x34ae4 */

//WARNING: Possible PIC construction at 0x00034b07: Changing call to branch
//WARNING: Removing unreachable block (ram,0x00034b0c)

void fcn.00034ae4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uchar uVar2;
    
    *(arg1 + 8) = 0;
    *(arg1 + 0x10) = 0;
    *(arg1 + 0x18) = 0;
    *(arg1 + 0x20) = 0;
    iVar1 = *(arg1 + 0x28);
    *(iVar1 + 0xc) = arg2;
    uVar2 = fcn.00021308(arg2 & 0xffffffff);
    *(iVar1 + 0x38) = uVar2;
    *(iVar1 + 0x10) = 0;
    *(iVar1 + 0x18) = 0;
    *(iVar1 + 0x20) = 0;
    *(iVar1 + 8) = 1;
    return;
}


/* fcn.0003496c @ 0x3496c */

void fcn.0003496c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t arg2_00;
    bool bVar2;
    
    *(arg1 + 8) = *(arg2 + 8);
    *(arg1 + 0xc) = *(arg2 + 9);
    *(arg1 + 0x10) = *(arg2 + 10);
    uVar1 = fcn.00034e34(arg2);
    *(arg1 + 0x18) = uVar1;
    arg2_00 = arg2 + 0x20;
    *(arg1 + 0x20) = *(arg2 + 4);
    *(arg1 + 0x24) = *(arg2 + 0xc);
    *(arg1 + 0x26) = *(arg2 + 0xe);
    **(arg1 + 0x28) = arg1;
    **(arg1 + 0x30) = arg1;
    fcn.00033198(*(arg1 + 0x28),arg2_00,arg3);
    if ((arg4 != '\0') || (*(arg1 + 8) != 0)) {
        arg2_00 = *(arg2 + 0x30) * 4 + 0x30 + arg2_00;
    }
    fcn.00033198(*(arg1 + 0x30),arg2_00,arg3);
    if (*(*(*(*arg1 + 0x38) + 0x28) + 0xc) == 0x10) {
        bVar2 = *(arg2 + 0xb) != -1;
        *(arg1 + 0x38) = bVar2;
        if (bVar2) {
            *(arg1 + 0x3c) = *(arg2 + 0xb);
            return;
        }
    }
    else {
        *(arg1 + 0x38) = 0;
    }
    *(arg1 + 0x3c) = 0;
    return;
}


/* fcn.00027600 @ 0x27600 */

uint fcn.00027600(int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = *(arg1 + 0xc0) & 0x108f4;
    return CONCAT31(uVar1 >> 8,uVar1 == 0xb4);
}


/* fcn.0002ddac @ 0x2ddac */

int64_t fcn.0002ddac(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0002b5a0(arg1 + 0x78);
    fcn.0002b030(arg1_00);
    *(arg1 + 0x60) = *(arg1 + 0x60) + '\x01';
    fcn.0002b550(arg1 + 0x68,arg1_00);
    return arg1_00;
}


/* fcn.00027474 @ 0x27474 */

ulong fcn.00027474(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint8_t uVar2;
    char cVar3;
    int16_t iVar4;
    int64_t iVar5;
    uint16_t uVar6;
    
    uVar2 = fcn.0002134c(arg1 + 0x1c);
    uVar6 = uVar2;
    if (((uVar2 != 0) && (uVar1 = *(arg2 + 0xc0), (uVar1 >> 4 & 1) != 0)) &&
       (((uVar1 & 0x10043) == 0 || ((uVar1 >> 0x18 & 1) != 0)))) {
        iVar4 = fcn.0001bb80(arg2 + 0x1c);
        do {
            iVar4 = iVar4 + -1;
            uVar6 = uVar6 - 1;
            if (*(uVar6 + 0x1c + arg1) != *(iVar4 + 0x1c + arg2)) {
                return 0;
            }
        } while (0 < uVar6);
        iVar5 = fcn.0002da78(*(*0x43c08 + 0x38),arg1 + 0x1c);
        iVar5 = *(iVar5 + 0x28);
        if (iVar5 == 0) {
            if (arg3 != '\0') {
                return 1;
            }
        }
        else {
            if (arg3 != '\0') {
                return 1;
            }
            if ((*(arg2 + 0xc0) >> 2 & 1) == 0) {
                return 1;
            }
            cVar3 = fcn.0002affc(iVar5);
            if (cVar3 != '\0') {
                return 1;
            }
            if (*(*(*(*(iVar5 + 0x58) + 0x38) + 0x28) + 0xc) == 0x10) {
                return 1;
            }
        }
    }
    return 0;
}


/* fcn.0002768c @ 0x2768c */

void fcn.0002768c(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    char cVar1;
    int64_t arg1_01;
    int64_t arg2_00;
    uint32_t uVar2;
    
    arg1_00 = *(*0x43c08 + 0x38);
    if ((*(arg1 + 0xc0) & 4) != 0) {
        *(arg1 + 0xc0) = *(arg1 + 0xc0) & 0xfffffffb;
        fcn.000277c4(arg1);
    }
    uVar2 = *(arg1 + 0xc0) | 0x100;
    if ((*(arg2 + 0xc0) & uVar2) != uVar2) {
        *(arg2 + 0xc0) = *(arg2 + 0xc0) | uVar2;
        fcn.000277c4(arg2);
    }
    arg1_01 = fcn.0002da78(arg1_00,arg1 + 0x1c);
    arg2_00 = fcn.0002da78(arg1_00,arg2 + 0x1c);
    fcn.00027778(arg2,arg1);
    if (arg2_00 != 0) {
        fcn.0002d720(arg1_00,arg2_00);
    }
    *(arg1_01 + 0x38) = 0;
    fcn.0001bbd0(arg1_01 + 0x11,arg1 + 0x1c,0x10);
    *(arg1_01 + 0x21) = 0;
    *(arg1_01 + 0x30) = arg1;
    if (*(arg1_01 + 0x28) != 0) {
        cVar1 = fcn.0002dd94(*(*0x43c08 + 0x38),*(arg1_01 + 0x28));
        if (cVar1 == '\0') {
            fcn.00030d78(arg1_01,0);
        }
    }
    return;
}


/* fcn.00030ba0 @ 0x30ba0 */

int64_t fcn.00030ba0(int64_t arg1)

{
    int64_t arg1_00;
    ulong uVar1;
    
    uVar1 = 0;
    *(arg1 + 8) = 0;
    *arg1 = 0;
    *(arg1 + 0x28) = 0;
    arg1_00 = fcn.00027170(0x48);
    if (arg1_00 != 0) {
        uVar1 = fcn.00034c1c(arg1_00,arg1);
    }
    *(arg1 + 0x40) = uVar1;
    return arg1;
}


/* fcn.00034c1c @ 0x34c1c */

int64_t fcn.00034c1c(int64_t arg1,int64_t arg2)

{
    fcn.000313a4(arg1,0x200);
    *(arg1 + 0x40) = arg2;
    *arg1 = 0x37e10;
    *(arg1 + 8) = *(*(*0x43c08 + 0x30) + 8);
    return arg1;
}


/* fcn.0002c604 @ 0x2c604 */

int64_t fcn.0002c604(int64_t arg1)

{
    int64_t arg1_00;
    ulong uVar1;
    
    arg1_00 = fcn.00027170(0x40);
    uVar1 = 0;
    if (arg1_00 != 0) {
        uVar1 = fcn.00034904(arg1_00);
    }
    *(arg1 + 0x38) = uVar1;
    fcn.0001bbd0(arg1 + 0x10,0x39102,0x10);
    *(arg1 + 0x20) = 0;
    *arg1 = 0;
    *(arg1 + 0x24) = 0;
    *(arg1 + 0x34) = 0;
    *(arg1 + 0x30) = 0xc;
    return arg1;
}


/* fcn.0002a788 @ 0x2a788 */

int64_t fcn.0002a788(int64_t arg1)

{
    int64_t arg1_00;
    ulong uVar1;
    
    uVar1 = 0;
    *(arg1 + 8) = 0;
    *arg1 = 0;
    *(arg1 + 0x10) = 0;
    arg1_00 = fcn.00027170(0x48);
    if (arg1_00 != 0) {
        uVar1 = fcn.000334d8(arg1_00,arg1);
    }
    *(arg1 + 0x68) = uVar1;
    fcn.0002b030(arg1);
    return arg1;
}


/* fcn.000287c8 @ 0x287c8 */

void fcn.000287c8(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint in_stack_00000028;
    uint in_stack_0000002c;
    int64_t *in_stack_00000030;
    
    *(in_stack_00000030 + 0x14) = arg3;
    in_stack_00000030[1] = CONCAT44(in_stack_0000002c,in_stack_00000028);
    *(in_stack_00000030 + 0x1c) = arg1;
    in_stack_00000030[8] = arg2;
    *in_stack_00000030 = arg2;
    in_stack_00000030[6] = 0;
    return;
}


/* fcn.0002a7d8 @ 0x2a7d8 */

void fcn.0002a7d8(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    int64_t iVar1;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar1 + 0x14) < 7) {
        *(iVar1 + 0x18 + *(iVar1 + 0x14) * 8) = arg2;
        *(iVar1 + 0x14) = *(iVar1 + 0x14) + '\x01';
        fcn.00030d78(arg2,arg1);
    }
    return;
}


/* fcn.0002ddec @ 0x2ddec */

int64_t fcn.0002ddec(int64_t arg1,int64_t arg2)

{
    ulong *arg1_00;
    int64_t arg1_01;
    ulong *arg3;
    
    arg1_01 = fcn.0002b57c(arg1 + 0x20);
    if (arg1_01 != 0) {
        fcn.00030d70(arg1_01);
        arg1_00 = arg1 + 0x10;
        for (arg3 = *arg1_00; arg3 != NULL; arg3 = *arg3) {
            if (arg2 < *(arg3[6] + 0x88)) {
                fcn.0002b52c(arg1_00,arg1_01,arg3);
                goto code_r0x0002de41;
            }
        }
        fcn.0002b550(arg1_00,arg1_01);
code_r0x0002de41:
        *arg1 = *arg1 + '\x01';
    }
    return arg1_01;
}


/* fcn.00030be8 @ 0x30be8 */

void fcn.00030be8(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int64_t iVar1;
    char cVar2;
    int64_t iVar3;
    ulong uVar4;
    uint32_t uVar5;
    
    arg1_00 = arg1 + 0x11;
    uVar5 = *(arg2 + 0x18) & 0xc20287;
    fcn.0001bbd0(arg1_00,arg2,0x10);
    *(arg1 + 0x21) = 0;
    iVar3 = fcn.0002ce30(*0x43c08 + 0x48,arg1_00);
    *(arg1 + 0x30) = iVar3;
    iVar1 = *0x43c08;
    if (iVar3 == 0) {
        iVar3 = fcn.00034c0c(arg2);
        uVar4 = fcn.0002cce4(iVar1 + 0x48,arg1_00,uVar5,iVar3);
        *(arg1 + 0x30) = uVar4;
    }
    else if ((*(iVar3 + 0xc0) & uVar5) != uVar5) {
        *(iVar3 + 0xc0) = *(iVar3 + 0xc0) | uVar5;
        fcn.000277c4(iVar3);
    }
    uVar4 = *(arg1 + 0x30);
    *(arg1 + 0x38) = 0;
    fcn.0001bbd0(arg1 + 0x11,arg1_00,0x10);
    *(arg1 + 0x21) = 0;
    *(arg1 + 0x30) = uVar4;
    if (*(arg1 + 0x28) != 0) {
        cVar2 = fcn.0002dd94(*(*0x43c08 + 0x38),*(arg1 + 0x28));
        if (cVar2 == '\0') {
            fcn.00030d78(arg1,0);
        }
    }
    return;
}


/* fcn.0002c678 @ 0x2c678 */

void fcn.0002c678(int64_t arg1,int64_t arg2,int64_t arg3,int32_t arg_10h)

{
    uint32_t uVar1;
    
    uVar1 = fcn.000348b8(arg2 + 0x70,*(arg2 + 0x18));
    *arg1 = 0;
    *(arg1 + 0x24) = 0;
    *(arg1 + 0x34) = 0;
    *(arg1 + 0x30) = 0xc;
    fcn.00034ae4(*(arg1 + 0x38),uVar1);
    fcn.0001bbd0(arg1 + 0x10,arg2,0x10);
    *(arg1 + 0x20) = 0;
    *(arg1 + 0x24) = *(arg2 + 0x20);
    *(arg1 + 0x28) = *(arg2 + 0x10);
    *(arg1 + 0x30) = *(arg2 + 0x18);
    *(arg1 + 0x40) = *(arg2 + 0x26);
    *(arg1 + 0x44) = *(arg2 + 0x27);
    *(arg1 + 0x48) = *(arg2 + 0x23);
    *(arg1 + 0x4a) = *(arg2 + 0x28);
    *(arg1 + 0x4c) = *(arg2 + 0x2a);
    *(arg1 + 0x4d) = *(arg2 + 0x2b);
    *(arg1 + 0x50) = *(arg2 + 0x2c);
    *(arg1 + 0x54) = *(arg2 + 0x30);
    *(arg1 + 0x58) = 0;
    *(arg1 + 0x34) = *(arg2 + 0x24);
    **(arg1 + 0x38) = arg1;
    fcn.0003496c(*(arg1 + 0x38),arg2 + 0x50,arg3,0);
    *(arg1 + 8) = 0;
    *(arg1 + 0x5c) = *(arg2 + 0x22);
    return;
}


/* fcn.000288c8 @ 0x288c8 */

ulong fcn.000288c8(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    uint8_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong uVar5;
    uint8_t uVar6;
    uint64_t uVar7;
    uchar auStackX_8 [8];
    
    uVar4 = 0;
    iVar3 = *(*(arg1 + 0x38) + 0x68);
    uVar6 = 0;
    if ((*(*(*(arg2 + 0x38) + 0x28) + 0xc) != 0x10) || (*(*(arg1 + 0x38) + 0x30) == '\0')) {
        if (iVar3 != 0) {
            auStackX_8[0] = 0;
            iVar3 = fcn.0002b350(iVar3,auStackX_8);
            if ((iVar3 != 0) && (*(*(*(iVar3 + 0x38) + 0x28) + 0xc) == 0x10)) {
                return 0;
            }
        }
        uVar2 = *(arg1 + 0x20);
        uVar7 = 0;
        if (uVar2 != 0) {
            do {
                uVar6 = uVar7;
                if (*(arg1 + uVar7 * 8) == 0xfffe89ab) break;
                uVar6 = uVar6 + 1;
                uVar7 = uVar6;
            } while (uVar6 < uVar2);
        }
        if (uVar6 == uVar2) {
            if (3 < uVar6) {
                return 0;
            }
            *(arg1 + 0x20) = uVar2 + 1;
        }
        uVar5 = 0;
        pcVar1 = *(arg1 + 0x38) + 0x30;
        *pcVar1 = *pcVar1 + '\x01';
        iVar3 = fcn.000271c4(*(arg1 + 0x28),1);
        if (iVar3 != 0) {
            iVar3 = fcn.00027170(0x108);
            if (iVar3 != 0) {
                uVar4 = fcn.0002be80(iVar3,CONCAT71(uVar5 >> 8,uVar6),arg2);
            }
            *(arg1 + uVar6 * 8) = uVar4;
            fcn.0002720c(*(arg1 + 0x28));
            return uVar4;
        }
    }
    return 0;
}


/* fcn.0002cbb0 @ 0x2cbb0 */

void fcn.0002cbb0(int64_t arg1)

{
    uint32_t *puVar1;
    int64_t iVar2;
    ulong uVar3;
    
    iVar2 = fcn.0002c860(arg1);
    *(arg1 + 8) = iVar2;
    if (iVar2 == 0) {
        uVar3 = fcn.0002ddac(*(*0x43c08 + 0x38));
        *(arg1 + 8) = uVar3;
    }
    fcn.0002cca0(arg1);
    fcn.0002a804(*(arg1 + 8));
    *(*arg1 + 200) = *(arg1 + 8);
    if (*(*(arg1 + 8) + 0x14) != '\0') {
        fcn.0001bbd0(*arg1 + 0x1c,*(*(arg1 + 8) + 0x18) + 0x11,0x10);
        *(*arg1 + 0x2c) = 0;
        iVar2 = *(*(*(arg1 + 8) + 0x18) + 0x30);
        fcn.0001bbd0(*arg1 + 0x56,iVar2 + 0x56,0x28);
        *(*arg1 + 0x7e) = 0;
        puVar1 = *arg1 + 0x8c;
        *puVar1 = *puVar1 ^ (*(iVar2 + 0x8c) ^ *(*arg1 + 0x8c)) & 0x200;
    }
    return;
}


/* fcn.0002bef8 @ 0x2bef8 */

void fcn.0002bef8(int64_t arg1,ulong noname_1,uint32_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    
    iVar2 = *(arg1 + 200);
    uVar4 = 0xffffffff;
    uVar3 = 0;
    *(arg1 + 0x18) = 0xffffffff;
    if (*(iVar2 + 0x14) != '\0') {
        do {
            uVar1 = *(*(*(iVar2 + 0x18 + uVar3 * 8) + 0x30) + 0x88);
            if (uVar1 < uVar4) {
                *(arg1 + 0x18) = uVar1;
                uVar4 = uVar1;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(iVar2 + 0x14));
    }
    return;
}


/* fcn.0002df08 @ 0x2df08 */

uint64_t * fcn.0002df08(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    int64_t iVar2;
    ulong *puVar3;
    uint64_t *puVar4;
    uint64_t uVar5;
    
    puVar1 = arg1 + 0x80;
    uVar5 = *puVar1;
    if (uVar5 != 0) {
        uVar5 = uVar5 - 8;
    }
    if (uVar5 != 0) {
        do {
            if (*(arg2 + 0x18) < *(uVar5 + 0x18)) {
                puVar4 = arg2 + 8;
                uVar5 = -(uVar5 != 0) & uVar5 + 8;
                if (*puVar1 == uVar5) {
                    *puVar1 = puVar4;
                }
                else {
                    **(uVar5 + 8) = puVar4;
                }
                *puVar4 = uVar5;
                *(arg2 + 0x10) = *(uVar5 + 8);
                *(uVar5 + 8) = puVar4;
                return puVar1;
            }
            iVar2 = *(-(uVar5 != 0) & uVar5 + 8);
            uVar5 = -(iVar2 != 0) & iVar2 - 8U;
        } while (uVar5 != 0);
    }
    puVar3 = -(arg2 != 0) & arg2 + 8U;
    if (*(arg1 + 0x88) == NULL) {
        *puVar1 = puVar3;
        puVar3[1] = 0;
    }
    else {
        **(arg1 + 0x88) = puVar3;
        puVar3[1] = *(arg1 + 0x88);
    }
    *puVar3 = 0;
    *(arg1 + 0x88) = puVar3;
    return puVar1;
}


/* fcn.0002cb78 @ 0x2cb78 */

void fcn.0002cb78(int64_t arg1)

{
    int64_t iVar1;
    
    *(arg1 + 0x40) = 0;
    *(arg1 + 0x44) = 0;
    iVar1 = *(arg1 + 0x38);
    *(arg1 + 0x48) = *(*(*(iVar1 + 0x28) + 0x40) + 0x39) != '\x01';
    *(iVar1 + 0x3c) = 0;
    *(iVar1 + 0x38) = 1;
    return;
}


/* fcn.0002d588 @ 0x2d588 */

uint fcn.0002d588(int64_t arg1)

{
    int16_t *piVar1;
    int64_t arg1_00;
    uint uVar2;
    int64_t iVar3;
    
    arg1_00 = *(arg1 + 0x38 + *(arg1 + 0x30) * 8);
    if (*(*(*(arg1_00 + 0x38) + 0x28) + 0xc) == 0x10) {
        fcn.0002cb78(arg1_00);
    }
    iVar3 = fcn.000288c8(*0x43c08,arg1_00);
    if (iVar3 == 0) {
        uVar2 = 2;
    }
    else {
        fcn.0002cbb0(arg1_00);
        iVar3 = *(iVar3 + 200);
        if (*(iVar3 + 0x50) == '\x01') {
            *(*(*(iVar3 + 0x68) + 8) + 0x3a) = 0;
        }
        piVar1 = *(iVar3 + 0x68) + 0x24;
        *piVar1 = *piVar1 + 1;
        uVar2 = 0;
        *(arg1_00 + 0x4a) = *(*(iVar3 + 0x68) + 0x24);
    }
    return uVar2;
}


/* fcn.0002bdf8 @ 0x2bdf8 */

void fcn.0002bdf8(int64_t arg1,int64_t arg2)

{
    *(arg1 + 0x38) = 0;
    *(arg1 + 0xc) = 1;
    *(arg1 + 0x30) = 1;
    *(arg1 + 0x40) = arg2;
    *(*(arg1 + 0x20) + 0xd4) = arg2;
    *(*(arg1 + 0x10) + 8) = 0;
    return;
}


/* fcn.0002dae0 @ 0x2dae0 */

void fcn.0002dae0(int64_t arg1,int64_t arg2)

{
    arg2 = *arg2;
    fcn.0002c2f4(arg2);
    if (*0x429c0 == '\x01') {
        fcn.0002d15c(arg1,arg2,0);
    }
    return;
}


/* fcn.000176d4 @ 0x176d4 */

char fcn.000176d4(int64_t arg1,int64_t arg2)

{
    int iVar1;
    char cVar2;
    unkbyte7 in_R8;
    
    cVar2 = '\0';
    if ((arg1 == 0) || (**arg1 != 1)) {
        cVar2 = '\x01';
    }
    else {
        iVar1 = fcn.0001e8d0(*(*arg1 + 4),CONCAT71(arg2 >> 8,*(arg1 + 8)),CONCAT71(in_R8,arg2));
        if (iVar1 != 0) {
            cVar2 = (iVar1 == 3) + '\x01';
        }
    }
    return cVar2;
}


/* fcn.000289c8 @ 0x289c8 */

void fcn.000289c8(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int64_t iVar2;
    int64_t arg1_00;
    uint64_t uVar3;
    int64_t *piVar4;
    
    iVar2 = *(arg2 + 200);
    uVar1 = *(iVar2 + 0x14);
    *(*(*(arg2 + 0xd8) + 0x10) + 8) = 3;
    fcn.0002c4a8(arg2);
    *(arg2 + 0xf1) = 1;
    if ((*(arg2 + 0xf3) != '\0') && (uVar1 != 0)) {
        piVar4 = iVar2 + 0x18;
        uVar3 = uVar1;
        do {
            arg1_00 = *(*piVar4 + 0x30);
            if ((*(arg1_00 + 0xc0) & 0xc202a7) != 0) {
                *(arg1_00 + 0xc0) = *(arg1_00 + 0xc0) & 0xff3dfd58;
                fcn.000277c4(arg1_00);
            }
            piVar4 = piVar4 + 1;
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
    }
    fcn.0002df78(*(arg1 + 0x38),*(arg2 + 0xc0));
    if ((*(arg2 + 0xf3) != '\0') && (uVar1 != 0)) {
        piVar4 = iVar2 + 0x18;
        uVar3 = uVar1;
        do {
            iVar2 = *(*piVar4 + 0x30);
            if (((*(iVar2 + 0xc0) >> 4 & 1) != 0) && ((*(iVar2 + 0xc0) & 0x40) == 0)) {
                *(iVar2 + 0xc0) = *(iVar2 + 0xc0) | 0x40;
                fcn.000277c4(iVar2);
            }
            piVar4 = piVar4 + 1;
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
    }
    fcn.00027214(*(arg1 + 0x28),1,arg2);
    *(arg1 + *(arg2 + 0xb9) * 8) = 0xfffe89ab;
    if (*(arg2 + 0xf3) != '\0') {
        fcn.0002d7c0(*(arg1 + 0x38),*(arg2 + 200));
    }
    return;
}


/* fcn.0002d7f4 @ 0x2d7f4 */

void fcn.0002d7f4(int64_t arg1)

{
    uint32_t uVar1;
    int64_t arg1_00;
    ulong *puVar2;
    int iVar3;
    ulong *puVar4;
    
    puVar2 = *(arg1 + 0x10);
    while (puVar4 = puVar2, puVar4 != NULL) {
        arg1_00 = puVar4[6];
        puVar2 = *puVar4;
        uVar1 = *(arg1_00 + 0xc0);
        if ((uVar1 >> 4 & 1) == 0) {
            if ((((uVar1 >> 1 & 1) == 0) || (puVar4[5] == 0)) && ((uVar1 >> 6 & 1) == 0)) {
                fcn.0002d720(arg1,puVar4);
            }
        }
        else if (((uVar1 >> 10 & 1) != 0) && (*0x4390a == '\0')) {
            iVar3 = fcn.000176d4(*(arg1_00 + 0xb8),CONCAT71(uVar1 >> 0x12,0xda));
            if (iVar3 == 2) {
                if ((*(arg1_00 + 0xc0) >> 9 & 1) == 0) {
                    *(arg1_00 + 0xc0) = *(arg1_00 + 0xc0) | 0x200;
                    fcn.000277c4(arg1_00);
                }
                if (puVar4[5] == 0) {
                    puVar4 = puVar4[8];
                }
                else {
                    puVar4 = *(puVar4[5] + 0x68);
                }
                (***puVar4)(puVar4,1);
            }
        }
    }
    return;
}


/* fcn.00021268 @ 0x21268 */

bool fcn.00021268(uint32_t arg1)

{
    uint in_register_0000000c;
    
    return *(CONCAT44(in_register_0000000c,arg1) + 0xa0) == 1;
}


/* fcn.00017714 @ 0x17714 */

void fcn.00017714(int64_t arg1)

{
    char cVar1;
    uint8_t uVar2;
    ushort uVar3;
    uint32_t uVar4;
    uint *arg1_00;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong in_R9;
    uchar uStack_98;
    ulong uStack_97;
    ulong uStack_8f;
    ushort auStack_80 [2];
    uint uStack_7c;
    ulong uStack_78;
    uchar auStack_40 [56];
    
    arg1_00 = fcn.0001b9e4(0x18);
    if (arg1_00 != NULL) {
        *arg1_00 = 0;
        *(arg1_00 + 2) = arg1;
        fcn.0001ba7c(auStack_80,0,0x3c);
        cVar1 = fcn.000211a0(arg1);
        if (cVar1 == '\0') {
            auStack_80[0] = 0x1203;
            uVar2 = fcn.00021190(arg1);
            uStack_78 = CONCAT62(uStack_78._2_6_,uVar2);
            uVar3 = fcn.00021180(arg1);
            iVar8 = 10;
            uStack_7c = CONCAT22(0xffff,uVar3);
        }
        else {
            auStack_80[0] = 0x1703;
            uStack_7c = fcn.00021180(arg1);
            uStack_78 = fcn.00021188(arg1);
            iVar8 = 0x10;
        }
        fcn.00011858(auStack_80,iVar8);
        fcn.0001ba7c(auStack_40,0,0x29);
        uStack_98 = 0;
        uStack_97 = 0;
        uStack_8f = 0;
        fcn.00020fa4(arg1,auStack_40,&uStack_98);
        uVar4 = fcn.00021180(arg1);
        fcn.0001a0ac(auStack_80,uVar4);
        cVar1 = fcn.0001a26c(auStack_80,arg1_00,&uStack_98,CONCAT71(in_R9 >> 8,1));
        if (cVar1 == '\0') {
            uVar5 = fcn.0001a688(*0x43830,auStack_80,auStack_40,&uStack_98);
            if (-1 < uVar5) {
                iVar8 = fcn.000211ac(arg1);
                uVar4 = fcn.00021178(arg1);
                uVar6 = fcn.0001a0e4(auStack_80,uVar4,1,iVar8);
                if ((-1 < (uVar5 | uVar6)) && (uVar7 = fcn.0001a8ec(auStack_80), -1 < (uVar5 | uVar6 | uVar7))) {
                    fcn.0001ac20(auStack_80);
                    fcn.0001516c(arg1);
                    return;
                }
            }
            fcn.0001aabc(*0x43830,auStack_80);
        }
    }
    return;
}


/* fcn.0002da04 @ 0x2da04 */

ulong fcn.0002da04(uint32_t arg1,int64_t arg2)

{
    int16_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    uint8_t uVar3;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    if (*(iVar2 + 0x30) != '\0') {
        do {
            if ((arg2 != 0) && (iVar1 = fcn.0001bb9c(arg2,*(iVar2 + 0x38 + uVar3 * 8) + 0x10,0x10), iVar1 == 0)) {
                return *(iVar2 + 0x38 + uVar3 * 8);
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(iVar2 + 0x30));
    }
    return 0;
}


/* fcn.0002d238 @ 0x2d238 */

uint fcn.0002d238(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    bool bVar2;
    bool bVar3;
    uint8_t uVar4;
    char cVar5;
    uint uVar6;
    uint in_register_0000000c;
    int64_t iVar7;
    ulong *puVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int64_t *piVar11;
    uint64_t uVar12;
    uint8_t uVar13;
    int64_t aiStack_48 [6];
    
    iVar7 = CONCAT44(in_register_0000000c,arg1);
    uVar4 = *(iVar7 + 0xa0);
    bVar2 = false;
    bVar3 = false;
    *(iVar7 + 0xb6) = 0;
    uVar13 = 0;
    if (uVar4 == 0xff) {
        if (4 < *(iVar7 + 0x60) + 1) {
            return 3;
        }
        *(iVar7 + 0xa0) = *(iVar7 + 0x60);
        *(iVar7 + 0x90) = *(iVar7 + 0x78);
        fcn.0002b030(*(iVar7 + 0x78));
        iVar9 = *(iVar7 + 0x10);
        *(iVar7 + 8) = iVar9;
        uVar12 = 0;
        if (iVar9 != 0) {
            do {
                uVar10 = uVar12;
                if (*(iVar9 + 0x38) != '\0') {
                    if ((*(*(iVar9 + 0x30) + 0xc0) & 3) != 0) {
                        return 0x12;
                    }
                    uVar1 = *(*(iVar9 + 0x30) + 0x8c);
                    uVar10 = uVar12 + 1;
                    aiStack_48[uVar12] = iVar9;
                    uVar4 = uVar13 + 1;
                    if ((uVar1 >> 4 & 1) == 0) {
                        uVar4 = uVar13;
                    }
                    uVar13 = uVar4;
                    if ((uVar1 & 8) == 0) {
                        bVar2 = true;
                    }
                    else {
                        bVar3 = true;
                    }
                }
                iVar9 = **(iVar7 + 8);
                *(iVar7 + 8) = iVar9;
                uVar12 = uVar10;
            } while (iVar9 != 0);
            uVar4 = uVar10;
            if (uVar4 != 0) {
                if (6 < uVar4) {
                    return 10;
                }
                cVar5 = fcn.000291a0(0x100);
                if (cVar5 == '\0') {
                    if (((*(iVar7 + 0xa4) == 0x10) && (*(aiStack_48[0] + 0x39) == '\x02')) &&
                       (*(aiStack_48[1] + 0x39) == '\x02')) {
                        *(aiStack_48[0] + 0x39) = 1;
                    }
                }
                else if (((*(iVar7 + 0xa4) != 0x10) && (bVar2)) && ((bVar3 && (arg2 != '\0')))) {
                    return 0x15;
                }
                if (uVar4 != 0) {
                    piVar11 = aiStack_48;
                    do {
                        fcn.0002a7d8(*(iVar7 + 0x90),*piVar11);
                        piVar11 = piVar11 + 1;
                        uVar10 = uVar10 - 1;
                    } while (uVar10 != 0);
                }
                if (uVar13 == uVar4) goto code_r0x0002d3f2;
                goto code_r0x0002d3f9;
            }
        }
        uVar6 = 8;
    }
    else {
        if (*(iVar7 + 0x60) <= uVar4) {
            return 0x13;
        }
        puVar8 = *(iVar7 + 0x68);
        for (; (puVar8 != NULL && (uVar4 != 0)); uVar4 = uVar4 - 1) {
            puVar8 = *puVar8;
        }
        *(iVar7 + 0x90) = puVar8;
        cVar5 = fcn.0002b080(puVar8,*(iVar7 + 0xa4));
        if (cVar5 == '\0') {
            return 0xb;
        }
code_r0x0002d3f2:
        *(iVar7 + 0xb6) = 1;
code_r0x0002d3f9:
        uVar6 = 0;
    }
    return uVar6;
}


/* fcn.0002c894 @ 0x2c894 */

//WARNING: Possible PIC construction at 0x00034b07: Changing call to branch
//WARNING: Removing unreachable block (ram,0x00034b0c)

void fcn.0002c894(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uchar uVar2;
    
    *(arg1 + 0x30) = 0xc;
    *arg1 = 0;
    *(arg1 + 0x24) = 0;
    *(arg1 + 0x34) = 0;
    iVar1 = *(arg1 + 0x38);
    *(iVar1 + 8) = 0;
    *(iVar1 + 0x10) = 0;
    *(iVar1 + 0x18) = 0;
    *(iVar1 + 0x20) = 0;
    iVar1 = *(iVar1 + 0x28);
    *(iVar1 + 0xc) = arg2;
    uVar2 = fcn.00021308(arg2 & 0xffffffff);
    *(iVar1 + 0x38) = uVar2;
    *(iVar1 + 0x10) = 0;
    *(iVar1 + 0x18) = 0;
    *(iVar1 + 0x20) = 0;
    *(iVar1 + 8) = 1;
    return;
}


/* fcn.00033040 @ 0x33040 */

ulong fcn.00033040(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    ulong uVar7;
    ulong in_stack_00000028;
    uint16_t in_stack_00000030;
    
    *(arg1 + 0x28) = 0;
    iVar1 = *(arg1 + 0xc);
    uVar4 = arg3 & 0xff;
    uVar5 = arg3;
    if (iVar1 != 1) {
        if (iVar1 != 2) {
            if (iVar1 == 4) {
                uVar2 = fcn.00024420(4);
                if (uVar5 < uVar2) {
                    return 9;
                }
                uVar3 = (arg3 & 0xff) * 0x100 - 0x100;
                goto code_r0x000330d6;
            }
            if ((iVar1 != 8) && (iVar1 != 0x10)) {
                if (iVar1 != 0x20) {
                    return 0x11;
                }
                goto code_r0x000330c5;
            }
        }
        if (uVar5 < *(arg1 + 0x38)) {
            return 9;
        }
        if (uVar5 == *(arg1 + 0x38)) {
            *(arg1 + 0x28) = arg4;
        }
    }
code_r0x000330c5:
    uVar3 = uVar4 << 8;
    if (uVar5 == 1) {
        *(arg1 + 0x28) = arg4;
    }
code_r0x000330d6:
    uVar6 = (((uVar3 - 1) + arg4) / uVar3) * *(arg1 + 0x38) * (0x100 / in_stack_00000030);
    *(arg1 + 0x30) = uVar6 / *(arg1 + 0x38);
    if (*(arg1 + 0x28) == 0) {
        *(arg1 + 0x28) = in_stack_00000030 * uVar6;
    }
    *(arg1 + 0x28) = *(arg1 + 0x28) + 0x108;
    uVar7 = *arg2;
    *(arg1 + 0x20) = in_stack_00000030;
    *(arg1 + 0x18) = in_stack_00000028;
    *(arg1 + 0x10) = 0;
    if (uVar5 != 0) {
        uVar6 = 1;
        do {
            if (*(arg1 + 0x10) < 6) {
                *(*(arg1 + 0x10) + 0x70 + arg1) = 0;
                *(arg1 + 0x40 + *(arg1 + 0x10) * 8) = uVar7;
                *(arg1 + 0x10) = *(arg1 + 0x10) + '\x01';
            }
            uVar7 = *(arg2 + uVar6 * 8);
            uVar4 = uVar4 - 1;
            uVar6 = uVar6 + 1;
        } while (uVar4 != 0);
    }
    return 0;
}


/* fcn.0002a918 @ 0x2a918 */

int64_t fcn.0002a918(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t arg1_00;
    
    fcn.0002aa48(arg1);
    iVar5 = 0;
    uVar4 = 0xffffffffffffffff;
    uVar3 = 0;
    if (*(arg1 + 0x88) != '\0') {
        do {
            arg1_00 = (uVar3 + 9) * 0x10 + arg1;
            uVar1 = fcn.0003348c(arg1_00);
            if ((arg2 <= uVar1) && (uVar1 < uVar4)) {
                uVar4 = uVar1;
                iVar5 = arg1_00;
            }
            uVar2 = uVar3 + 1;
            uVar3 = uVar2;
        } while (uVar2 < *(arg1 + 0x88));
    }
    return iVar5;
}


/* fcn.0002cc78 @ 0x2cc78 */

void fcn.0002cc78(int64_t arg1,int64_t arg2)

{
    *(arg1 + 0x28) = arg2;
    return;
}


/* fcn.00033404 @ 0x33404 */

void fcn.00033404(int64_t arg1,int64_t arg2)

{
    *(arg1 + 0x18) = arg2;
    return;
}


/* fcn.0002d1ec @ 0x2d1ec */

void fcn.0002d1ec(uint32_t arg1)

{
    int64_t arg1_00;
    uint in_register_0000000c;
    int64_t iVar1;
    ulong uVar2;
    uchar auStackX_8 [32];
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar1 + 0xa1) != *(iVar1 + 0xa0)) {
        uVar2 = *(iVar1 + 0x90);
        auStackX_8[0] = 0;
        while( true ) {
            arg1_00 = fcn.0002b334(uVar2,auStackX_8);
            if (arg1_00 == 0) break;
            fcn.00030d78(arg1_00,0);
            uVar2 = *(iVar1 + 0x90);
        }
    }
    return;
}


/* fcn.0002b57c @ 0x2b57c */

void fcn.0002b57c(uint32_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    
    piVar1 = *CONCAT44(in_register_0000000c,arg1);
    if (piVar1 != NULL) {
        if (piVar1 == *(CONCAT44(in_register_0000000c,arg1) + 8)) {
            *(CONCAT44(in_register_0000000c,arg1) + 8) = 0;
        }
        iVar2 = *piVar1;
        *CONCAT44(in_register_0000000c,arg1) = iVar2;
        if (iVar2 != 0) {
            *(iVar2 + 8) = 0;
        }
    }
    return;
}


/* fcn.00030d70 @ 0x30d70 */

void fcn.00030d70(int64_t arg1)

{
    *(arg1 + 0x38) = 0;
    return;
}


/* fcn.0002b52c @ 0x2b52c */

ulong fcn.0002b52c(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    
    if (*CONCAT44(in_register_0000000c,arg1) == arg3) {
        *CONCAT44(in_register_0000000c,arg1) = arg2;
    }
    else {
        **(arg3 + 8) = arg2;
    }
    *arg2 = arg3;
    *(arg2 + 8) = *(arg3 + 8);
    *(arg3 + 8) = arg2;
    return CONCAT44(in_register_0000000c,arg1);
}


/* fcn.0002ab6c @ 0x2ab6c */

void fcn.0002ab6c(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    ulong uVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    uint8_t uVar6;
    
    puVar3 = fcn.0002ac94(arg1,arg2);
    uVar6 = 0;
    while ((puVar3 != NULL && (*(arg1 + 0xe0) < 4))) {
        uVar5 = *(arg1 + 0xe0) - 1;
        *(arg1 + 0xe0) = uVar5;
        puVar1 = arg1 + 0xe8 + uVar5 * 0x18;
        uVar2 = puVar1[1];
        *puVar3 = *puVar1;
        puVar3[1] = uVar2;
        puVar3[2] = *(arg1 + 0xf8 + uVar5 * 0x18);
        puVar3 = fcn.0002ac94(arg1,arg2);
    }
    if (*(arg1 + 0x50) != '\0') {
        do {
            uVar4 = uVar6;
            uVar6 = uVar6 + 1;
            if (arg2 == *(arg1 + 0x58 + uVar4 * 8)) {
                for (; uVar6 < *(arg1 + 0x50); uVar6 = uVar6 + 1) {
                    *(arg1 + 0x58 + (uVar6 - 1) * 8) = *(arg1 + 0x58 + uVar6 * 8);
                }
                *(arg1 + 0x50) = *(arg1 + 0x50) + -1;
                return;
            }
        } while (uVar6 < *(arg1 + 0x50));
    }
    return;
}


/* fcn.00030d08 @ 0x30d08 */

void fcn.00030d08(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    
    *(arg1 + 0x38) = 0;
    fcn.0001bbd0(arg1 + 0x11,arg2,0x10);
    *(arg1 + 0x21) = 0;
    *(arg1 + 0x30) = arg3;
    if (*(arg1 + 0x28) != 0) {
        cVar1 = fcn.0002dd94(*(*0x43c08 + 0x38),*(arg1 + 0x28));
        if (cVar1 == '\0') {
            fcn.00030d78(arg1,0);
        }
    }
    return;
}


/* fcn.0002e080 @ 0x2e080 */

int64_t fcn.0002e080(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint uVar2;
    ulong uVar3;
    ulong uVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t in_stack_00000028;
    
    fcn.00030aa8(arg1);
    *(arg1 + 0xa8) = arg2;
    *arg1 = 0x37bb0;
    *(arg1 + 0x1d8) = 0;
    *(arg1 + 0xa0) = 3;
    *(arg1 + 0xb8) = arg3;
    *(arg1 + 0xc0) = *(arg4 + 0x80);
    *(arg1 + 0xc4) = *(arg4 + 0x8c);
    *(arg1 + 200) = *(arg4 + 0x84);
    uVar2 = *(arg3 + 0x90);
    *(arg1 + 0x80) = 0;
    *(arg1 + 0x90) = uVar2;
    uVar6 = *(arg4 + 0x78) + *(arg4 + 0x68);
    *(arg1 + 0xd0) = uVar6;
    iVar7 = *(*0x429d0 + 0x240);
    *(arg1 + 0xb0) = iVar7;
    if (arg2 == 0) {
        arg2 = iVar7;
    }
    if ((uVar6 < *(arg4 + 0x60)) || (*(arg2 + 0x80) < uVar6)) {
        *(arg1 + 0xd0) = *(arg4 + 0x60);
    }
    *(arg1 + 0x80) = *(arg3 + 0x80) - 8U & 0xfffffffffffffff0;
    if (*(arg1 + 0xc4) == 1) {
        uVar6 = *(in_stack_00000028 + 0x60);
        if (*(arg4 + 0x60) < *(in_stack_00000028 + 0x60)) {
            uVar6 = *(arg4 + 0x60);
        }
    }
    else {
        if (*(arg1 + 0xc4) != 2) goto code_r0x0002e19d;
        uVar6 = *(in_stack_00000028 + 0x60);
        if (*(in_stack_00000028 + 0x60) < *(arg4 + 0x60)) {
            uVar6 = *(arg4 + 0x60);
        }
    }
    *(arg1 + 0xd0) = uVar6;
code_r0x0002e19d:
    iVar7 = *(arg4 + 0x68);
    if (iVar7 != 0) {
        *(arg1 + 0x1d8) = 1;
        *(arg1 + 0xd8) = 0;
        *(arg1 + 0xe8) = 0;
        *(arg1 + 0xe0) = iVar7;
        *(arg1 + 0xf0) = 0;
    }
    uVar1 = *(arg1 + 0x1d8);
    uVar3 = *(arg4 + 0x60);
    uVar4 = *(arg4 + 0x68);
    *(arg1 + 0x1d8) = uVar1 + 1;
    iVar7 = uVar1 * 0x20;
    *(iVar7 + 0xe8 + arg1) = 0;
    *(iVar7 + 0xd8 + arg1) = uVar4;
    *(iVar7 + 0xe0 + arg1) = uVar3;
    *(iVar7 + 0xf0 + arg1) = 1;
    uVar3 = *(arg4 + 0x60);
    iVar7 = *(arg1 + 0x1d8) * 0x20;
    *(arg1 + 0x1d8) = *(arg1 + 0x1d8) + 1;
    *(iVar7 + 0xe0 + arg1) = *(arg1 + 0x80);
    *(iVar7 + 0xd8 + arg1) = uVar3;
    *(iVar7 + 0xe8 + arg1) = uVar3;
    *(iVar7 + 0xf0 + arg1) = 0;
    fcn.0001ba1c(arg1 + 0x2d,0x29,arg2 + 0x2d,0x29);
    fcn.0001ba1c(arg1 + 0x1c,0x11,arg2 + 0x1c,0x11);
    *(arg1 + 0x94) = *(arg2 + 0x94) | *(arg3 + 0x94);
    uVar5 = *(arg3 + 0x88);
    if (*(arg2 + 0x88) < *(arg3 + 0x88)) {
        uVar5 = *(arg2 + 0x88);
    }
    *(arg1 + 0x8c) = 0;
    *(arg1 + 0x88) = uVar5;
    *(arg1 + 0x18) = uVar5;
    return arg1;
}


/* fcn.0002d760 @ 0x2d760 */

ulong fcn.0002d760(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint in_register_00000014;
    uint64_t uVar2;
    
    uVar2 = *(arg1 + 0x80);
    if (uVar2 != 0) {
        uVar2 = uVar2 - 8;
    }
    while( true ) {
        if (uVar2 == 0) {
            return 0;
        }
        if (uVar2 == CONCAT44(in_register_00000014,arg2)) break;
        iVar1 = *(-(uVar2 != 0) & uVar2 + 8);
        uVar2 = -(iVar1 != 0) & iVar1 - 8U;
    }
    fcn.0002b5d4(arg1 + 0x80,-(CONCAT44(in_register_00000014,arg2) != 0) & arg2 + 8);
    return 1;
}


/* fcn.0002e2c0 @ 0x2e2c0 */

int64_t fcn.0002e2c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    uchar auStack_1e8 [480];
    
    fcn.0002e080(auStack_1e8,arg2,arg3,arg4);
    arg1_00 = fcn.0001b9e4(0x1e0);
    if (arg1_00 != 0) {
        fcn.0001ba1c(arg1_00,0x1e0,auStack_1e8,0x1e0);
        fcn.0002df08(arg1,arg1_00);
    }
    return arg1_00;
}


/* fcn.0002ee8c @ 0x2ee8c */

ushort fcn.0002ee8c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uStack_28;
    int64_t iStack_20;
    int iStack_14;
    ushort uStack_e;
    uchar uStack_c;
    
    uStack_c = arg4;
    uStack_28 = arg3 + *(*0x429d0 + 0x166) + arg1 * 0x10;
    iStack_14 = (arg3 >> 0x10) << 9;
    iStack_20 = arg2;
    (****(*0x429d0 + 0x240))(*(*0x429d0 + 0x240),&uStack_28);
    return uStack_e;
}


/* fcn.0002ee34 @ 0x2ee34 */

ushort fcn.0002ee34(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iStack_28;
    int64_t iStack_20;
    int iStack_14;
    ushort uStack_e;
    
    iStack_28 = ((arg1 & 0xffffffffU) * 0x10 - *(*0x429d0 + 0x1ae)) + arg3;
    iStack_14 = (arg3 >> 0x10) << 9;
    iStack_20 = arg2;
    fcn.0002beec(noname_0,&iStack_28);
    return uStack_e;
}


/* fcn.0002beec @ 0x2beec */

void fcn.0002beec(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int64_t iVar1;
    
    iVar1 = *0x43c08;
    arg1_00 = *(arg1 + 0xd8);
    if (*(arg1_00 + 0xc) == 0) {
        fcn.0002a0ec(*(arg1_00 + 0x10),*0x43c08 + 7000,arg2);
    }
    else {
        fcn.0002b7a8(arg1_00,*0x43c08 + 7000,arg2);
    }
    fcn.0002c428(*(arg1_00 + 0x20),*(iVar1 + 0x1b70),*(iVar1 + 0x1b9a),*(iVar1 + 0x1b98));
    return;
}


/* fcn.0002f588 @ 0x2f588 */

bool fcn.0002f588(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    
    uVar1 = fcn.0002ec70(arg1 + 0xc + arg2 * 0x14);
    return (~*(arg1 + 4 + arg2 * 0x14) & uVar1) == uVar1;
}


/* fcn.0002eee4 @ 0x2eee4 */

void fcn.0002eee4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    unkbyte7 in_R9;
    
    fcn.0002ee8c(arg1,arg2,arg3,CONCAT71(in_R9,0x28));
    return;
}


/* fcn.0002f7c8 @ 0x2f7c8 */

ulong fcn.0002f7c8(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint16_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    
    iVar3 = arg2;
    uVar4 = fcn.0002ec70(arg1 + 0xc + iVar3 * 0x14);
    uVar1 = *(arg1 + 4 + iVar3 * 0x14);
    uVar2 = ~uVar4 & uVar1;
    *(arg1 + 4 + iVar3 * 0x14) = uVar2;
    return CONCAT71(CONCAT62(uVar4 >> 0x10,uVar2) >> 8,uVar2 != uVar1);
}


/* fcn.0002eef8 @ 0x2eef8 */

void fcn.0002eef8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    unkbyte7 in_R9;
    
    fcn.0002ee8c(arg1,arg2,arg3,CONCAT71(in_R9,0x2a));
    return;
}


/* fcn.0002c180 @ 0x2c180 */

uint64_t fcn.0002c180(int64_t arg1)

{
    return CONCAT71(*(arg1 + 0xc0) >> 8,*(*(arg1 + 0xc0) + 0x4d)) & 0xffffffffffffff01;
}


/* fcn.0002f5c8 @ 0x2f5c8 */

bool fcn.0002f5c8(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    
    uVar1 = fcn.0002ec70(arg1 + 0xc + arg2 * 0x14);
    return (uVar1 & ~*(arg1 + 4 + arg2 * 0x14)) != 0;
}


/* fcn.0002fd0c @ 0x2fd0c */

int64_t fcn.0002fd0c(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t *puVar2;
    uint16_t uVar3;
    uint64_t uVar4;
    int64_t arg1_00;
    uint32_t uVar5;
    uint16_t uVar6;
    
    if (arg1 == 0x10) {
        arg1_00 = 0x4a280;
    }
    else {
        if (arg1 != 1) {
            return 0;
        }
        arg1_00 = 0x4a250;
    }
    iVar1 = fcn.0002fb60(arg1_00,3,arg2);
    if (iVar1 == 0) {
        uVar6 = 0;
        uVar5 = 0xffffffff;
        puVar2 = arg1_00 + 4;
        uVar3 = uVar6;
        do {
            if ((-1 < puVar2[-1]) && (*puVar2 < uVar5)) {
                uVar5 = *puVar2;
                uVar6 = uVar3;
            }
            uVar3 = uVar3 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar3 < 3);
        if (uVar5 == 0xffffffff) {
            iVar1 = 0;
        }
        else {
            uVar4 = uVar6;
            *0x4a2b0 = *0x4a2b0 + 1;
            *(arg1_00 + 4 + uVar4 * 0x10) = *0x4a2b0;
            iVar1 = *(arg1_00 + 8 + uVar4 * 0x10);
            *(arg1_00 + uVar4 * 0x10) = arg2 | 0x80000000;
        }
    }
    return iVar1;
}


/* fcn.0002f86c @ 0x2f86c */

ulong fcn.0002f86c(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int16_t *piVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    
    piVar3 = *(arg1 + 8);
    if (*piVar3 != 0) {
        iVar5 = *piVar3 + -1;
        uVar1 = piVar3[iVar5 * 3 + 3];
        if ((uVar1 & 1) == (*(*(arg2 + 0x2818) + 0x1c) == '*')) {
            uVar2 = *(piVar3 + iVar5 * 3 + 1);
            uVar6 = *(arg2 + 0x2824);
            uVar4 = (uVar1 >> 2) + uVar2;
            if ((uVar2 <= uVar6) && (uVar6 <= uVar4)) {
                uVar6 = *(arg2 + 0x2820) + uVar6;
                if (uVar6 < uVar4) {
                    uVar6 = uVar4;
                }
                if (uVar6 - uVar2 < 0x2000) {
                    piVar3[iVar5 * 3 + 3] = uVar1 & 3 | uVar6 - uVar2 << 2;
                    return 1;
                }
            }
        }
    }
    return 0;
}


/* fcn.0002f9e8 @ 0x2f9e8 */

//WARNING: Removing unreachable block (ram,0x0002f92d)

void fcn.0002f9e8(int64_t arg1)

{
    uint64_t uStack_28;
    ulong uStack_20;
    uint uStack_14;
    uchar uStack_c;
    
    fcn.0001ba7c(*(arg1 + 8),0,0x200);
    uStack_20 = *(arg1 + 8);
    uStack_28 = *arg1;
    uStack_14 = 0x200;
    uStack_c = 0x2a;
    (****(*0x429d0 + 0x240))(*(*0x429d0 + 0x240),&uStack_28);
    *(arg1 + 0x14) = 0;
    return;
}


/* fcn.0002fb60 @ 0x2fb60 */

ulong fcn.0002fb60(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    uint16_t uVar2;
    uint64_t uVar3;
    
    uVar3 = 0;
    if ((arg3 != 0) && (arg2 != 0)) {
        do {
            uVar1 = *(arg1 + uVar3 * 0x10);
            if ((uVar1 & 0x7fffffff) == (arg3 & 0x7fffffff)) {
                *0x4a2b0 = *0x4a2b0 + 1;
                *(arg1 + 4 + uVar3 * 0x10) = *0x4a2b0;
                *(arg1 + uVar3 * 0x10) = uVar1 | 0x80000000;
                return *(arg1 + 8 + uVar3 * 0x10);
            }
            uVar2 = uVar3 + 1;
            uVar3 = uVar2;
        } while (uVar2 < arg2);
    }
    return 0;
}


/* fcn.0002fc78 @ 0x2fc78 */

ulong fcn.0002fc78(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint16_t uVar3;
    uint64_t uVar4;
    
    if (arg1 == 0x10) {
        iVar2 = 0x4a280;
    }
    else {
        if (arg1 != 1) {
            return 0;
        }
        iVar2 = 0x4a250;
    }
    uVar4 = 0;
    if (arg2 != 0) {
        do {
            uVar1 = *(iVar2 + uVar4 * 0x10);
            if ((uVar1 & 0x7fffffff) == (arg2 & 0x7fffffff)) {
                *0x4a2b0 = *0x4a2b0 + 1;
                *(iVar2 + 4 + uVar4 * 0x10) = *0x4a2b0;
                *(iVar2 + uVar4 * 0x10) = uVar1 | 0x80000000;
                return *(iVar2 + 8 + uVar4 * 0x10);
            }
            uVar3 = uVar4 + 1;
            uVar4 = uVar3;
        } while (uVar3 < 3);
    }
    return 0;
}


/* fcn.000304a8 @ 0x304a8 */

void fcn.000304a8(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *puVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint64_t arg2_00;
    int64_t arg3;
    int64_t in_R9;
    uint16_t uVar8;
    int iVar9;
    int iVar10;
    ulong *arg1_00;
    uint16_t uVar11;
    bool bVar12;
    int64_t iStack_38;
    uchar uStack_30;
    ushort uStack_2e;
    
    arg1_00 = arg1 & 0xffffffff;
    iStack_38 = 0;
    uStack_30 = 0;
    uStack_2e = 0x10;
    fcn.0002fdc8(&iStack_38,0);
    iVar5 = iStack_38;
    if (iStack_38 != 0) {
        arg2_00 = arg2 >> 1 & 0x7fffffff;
        uVar8 = 0;
        iVar9 = arg2_00 / 100;
        fcn.0001cc28(0x37bc8,1,0,in_R9);
        uVar7 = arg2_00;
        uVar11 = uVar8;
        iVar10 = iVar9;
        while (uVar7 != 0) {
            uVar7 = arg2_00 - 1;
            arg2_00 = uVar7;
            bVar12 = iVar10 == 0;
            iVar10 = iVar10 + -1;
            if (bVar12) {
                uVar11 = uVar11 + 1;
                fcn.0001cc28(0x37bc8,1,uVar11,in_R9);
                iVar10 = iVar9;
            }
            fcn.0003068c(arg1_00,arg2_00,arg2);
        }
        arg3 = 100;
        iVar3 = 1;
        fcn.0001cc28(0x37bc8,1,100,in_R9);
        fcn.0001cc28(0x37134,iVar3,arg3,in_R9);
        puVar4 = 0x2;
        iVar10 = (arg2 & 0xffffffffU) / 100;
        fcn.0001cc28(0x37bc8,2,0,in_R9);
        uVar7 = arg2 - 1;
        if (uVar7 != 0) {
            uVar6 = arg1 + uVar7 * 8;
            iVar9 = iVar10;
            do {
                puVar4 = uVar6;
                bVar12 = iVar9 == 0;
                iVar9 = iVar9 + -1;
                if (bVar12) {
                    uVar8 = uVar8 + 1;
                    fcn.0001cc28(0x37bc8,2,uVar8,in_R9);
                    iVar9 = iVar10;
                }
                uVar1 = *arg1_00;
                *arg1_00 = *puVar4;
                iVar3 = 0;
                *puVar4 = uVar1;
                fcn.0003068c(arg1_00,0,uVar7);
                iVar2 = fcn.0003044c(uVar7,iVar3);
                if (-1 < iVar2) {
                    *(iVar5 + iVar2 * 4) = *puVar4;
                }
                uVar6 = uVar6 - 8;
                uVar7 = uVar7 - 1;
                puVar4 = arg1_00;
            } while (uVar7 != 0);
        }
        iVar10 = fcn.0003044c(0,puVar4);
        if (-1 < iVar10) {
            *(iVar5 + iVar10 * 4) = *arg1_00;
        }
        iVar5 = 2;
        iVar3 = 100;
        fcn.0001cc28(0x37bc8,2,100,in_R9);
        fcn.0001cc28(0x37134,iVar5,iVar3,in_R9);
    }
    fcn.0002fca4(iStack_38);
    return;
}


/* fcn.0003068c @ 0x3068c */

void fcn.0003068c(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t *puVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    
    uVar10 = arg2 & 0xffffffff;
    uVar8 = arg1 & 0xffffffff;
    uVar9 = arg2;
    uVar2 = *(uVar8 + uVar10 * 8);
    uVar3 = *(uVar8 + 4 + uVar10 * 8);
    while( true ) {
        iVar4 = uVar9 * 2;
        uVar9 = iVar4 + 1;
        if (arg3 <= uVar9) break;
        uVar5 = arg1 + uVar9 * 8;
        uVar7 = *uVar5;
        puVar6 = uVar5 + 8;
        uVar1 = iVar4 + 2;
        if ((uVar1 < arg3) && (uVar7 < *puVar6)) {
            uVar7 = *puVar6;
            uVar5 = puVar6[1];
            uVar9 = uVar1;
        }
        else {
            uVar5 = *(uVar5 + 4);
        }
        if (uVar7 <= uVar2) break;
        *(uVar8 + uVar10 * 8) = uVar7;
        *(uVar8 + 4 + uVar10 * 8) = uVar5;
        uVar10 = uVar9;
    }
    *(uVar8 + uVar10 * 8) = uVar2;
    *(uVar8 + 4 + uVar10 * 8) = uVar3;
    return;
}


/* fcn.0003044c @ 0x3044c */

int fcn.0003044c(int arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    iVar4 = 0;
    iVar2 = 0;
    iVar3 = *(*0x429d0 + 0x1a6) + -1;
    if (-1 < iVar3) {
        do {
            if (0x7ff < iVar2) {
                return -1;
            }
            iVar1 = (iVar3 + iVar4) / 2;
            if (iVar1 == arg1) {
                return iVar2;
            }
            if (arg1 < iVar1) {
                iVar3 = iVar1 + -1;
                iVar2 = iVar2 * 2 + 1;
            }
            else {
                iVar4 = iVar1 + 1;
                iVar2 = iVar2 * 2 + 2;
            }
        } while (iVar4 <= iVar3);
    }
    return -1;
}


/* fcn.00025cf4 @ 0x25cf4 */

//WARNING: Variable defined which should be unmapped: var_6h
//WARNING: Variable defined which should be unmapped: var_ch

int16_t fcn.00025cf4(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint16_t uVar2;
    int64_t iVar3;
    int16_t iVar4;
    uint64_t uVar5;
    int iVar6;
    int64_t iStack_48;
    char cStack_40;
    ushort uStack_3e;
    int64_t var_30h;
    uint32_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int32_t var_ch;
    int16_t var_6h;
    int8_t var_4h;
    
    uVar5 = 0;
    if (*(*0x429d0 + 0x176) <= arg1) {
        do {
            iVar4 = uVar5;
            if ((*(*0x429d0 + 0x176 + uVar5 * 4) <= arg1) && (arg1 < *(*0x429d0 + 0x176 + (uVar5 + 1U & 0xffff) * 4)))
            goto code_r0x00025d64;
            uVar5 = iVar4 + 1U;
        } while (iVar4 + 1U < 8);
    }
    iVar4 = -1;
code_r0x00025d64:
    iVar6 = 0;
    if (iVar4 != -1) {
        iVar6 = iVar4;
    }
    var_30h = (iVar6 << 4) + *(*0x429d0 + 0x16e);
    iStack_48 = 0;
    cStack_40 = '\0';
    uStack_3e = 0x10;
    fcn.0002fdc8(&iStack_48,var_30h & 0xffffffff);
    iVar1 = iStack_48;
    iVar3 = iStack_48;
    iVar4 = 1;
    if (iStack_48 != 0) {
        if (cStack_40 == '\0') {
            var_20h._4_4_ = 0x2000;
            _var_28h = iStack_48;
            var_18h._4_1_ = 0x28;
            (****(*0x429d0 + 0x240))(*(*0x429d0 + 0x240),&var_30h);
            if (var_18h._2_2_ != 0) {
                iVar3 = iStack_48;
                iVar4 = var_18h._2_2_;
                goto code_r0x00025e12;
            }
        }
        iVar3 = iStack_48;
        uVar2 = fcn.00026dd0(arg1,iVar1,0x800);
        iVar4 = 0;
        *arg2 = (uVar2 + iVar6 * 0x800) * 0x400;
    }
code_r0x00025e12:
    fcn.0002fca4(iVar3);
    return iVar4;
}


/* fcn.00030748 @ 0x30748 */

uint32_t fcn.00030748(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    int iVar5;
    
    uVar3 = arg3 - 1;
    uVar4 = uVar3;
    iVar5 = 0;
    uVar2 = 0;
    if (-1 < uVar3) {
        do {
            uVar2 = (uVar4 + iVar5) / 2;
            uVar1 = *(arg2 + uVar2 * 8);
            if (uVar1 == arg1) {
                return uVar2;
            }
            if (arg1 < uVar1) {
                uVar4 = uVar2 - 1;
                uVar2 = uVar4 & 0xffff;
            }
            else {
                iVar5 = uVar2 + 1;
            }
        } while (iVar5 <= uVar4);
    }
    if (uVar2 < 0) {
        uVar2 = uVar2 & 0xffff0000;
    }
    return uVar2;
}


/* fcn.00030a50 @ 0x30a50 */

void fcn.00030a50(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    uint in_register_00000014;
    
    *(arg1 + 8) = *(CONCAT44(in_register_00000014,arg2) + 8);
    cVar1 = '\0';
    if (*(CONCAT44(in_register_00000014,arg2) + 0x1c) != '(') {
        cVar1 = (*(CONCAT44(in_register_00000014,arg2) + 0x1c) != '*') + '\x01';
    }
    *(arg1 + 0x14) = cVar1;
    *(arg1 + 0x10) = *(CONCAT44(in_register_00000014,arg2) + 0x14) >> 9;
    *arg1 = *CONCAT44(in_register_00000014,arg2);
    return;
}


/* fcn.00034c0c @ 0x34c0c */

ulong fcn.00034c0c(int64_t arg1)

{
    return CONCAT44(*(arg1 + 0x20),*(arg1 + 0x10));
}


/* fcn.0002dd94 @ 0x2dd94 */

ulong fcn.0002dd94(int64_t arg1,uint32_t arg2)

{
    ulong *puVar1;
    uint in_register_00000014;
    
    puVar1 = *(arg1 + 0x68);
    while( true ) {
        if (puVar1 == NULL) {
            return 0;
        }
        if (puVar1 == CONCAT44(in_register_00000014,arg2)) break;
        puVar1 = *puVar1;
    }
    return CONCAT71(puVar1 >> 8,1);
}


/* fcn.00034e44 @ 0x34e44 */

int64_t fcn.00034e44(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = iVar2 + (*(iVar2 + 0x30) + 0x14) * 4;
    if ((arg2 != '\0') || (*(iVar2 + 8) != '\0')) {
        iVar1 = iVar1 + *(iVar1 + 0x10) * 4 + 0x30;
    }
    return iVar1;
}


/* fcn.00031348 @ 0x31348 */

bool fcn.00031348(int64_t arg1)

{
    int16_t iVar1;
    bool bVar2;
    
    if (*0x4a2b4 == '\0') {
        iVar1 = fcn.0001bb9c(0x37b18,arg1,0x18);
        bVar2 = iVar1 == 0;
    }
    else {
        bVar2 = false;
    }
    return bVar2;
}


/* fcn.00030e1c @ 0x30e1c */

void fcn.00030e1c(int64_t arg1)

{
    int *piVar1;
    int iVar2;
    uint64_t uVar3;
    
    piVar1 = arg1 + 0x20;
    iVar2 = 0;
    *piVar1 = 0;
    if (*(arg1 + 0x24) >> 2 != 0) {
        uVar3 = *(arg1 + 0x24) >> 2;
        do {
            iVar2 = iVar2 + *arg1;
            arg1 = arg1 + 4;
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
    }
    *piVar1 = iVar2;
    return;
}


/* fcn.0002739c @ 0x2739c */

int64_t fcn.0002739c(int64_t arg1)

{
    return *(arg1 + 0x80) + -2;
}


/* fcn.000316b4 @ 0x316b4 */

void fcn.000316b4(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int64_t iVar1;
    char cVar2;
    int16_t iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong in_R8;
    
    if (*(*0x43c08 + 0x40) != 0) {
        return;
    }
    cVar2 = fcn.00031100(*(arg1 + 8));
    if ((cVar2 == '\0') || (0x1400 < *(*(arg1 + 8) + 0x24))) {
        cVar2 = fcn.00031348(*(arg1 + 8));
        if (cVar2 == '\0') {
            if ((*(arg2 + 0xc0) & 0xc28387) == 0) {
                return;
            }
            uVar4 = *(arg2 + 0xc0) & 0xff3d7c78;
            goto code_r0x000318a0;
        }
    }
    else {
        if ((*(arg2 + 0xc0) & 0x100) == 0) {
            *(arg2 + 0xc0) = *(arg2 + 0xc0) | 0x100;
            fcn.000277c4(arg2);
        }
        uVar4 = *(*(arg1 + 8) + 0x24);
        if (0x200 < uVar4) {
            iVar5 = fcn.0002739c(arg2);
            fcn.0002910c(*0x43c08,arg2,CONCAT71(in_R8 >> 8,0x28),iVar5 - ((uVar4 + 0x1ff >> 9) - 1));
            if ((*(*0x43c08 + 0x40) != 0) && ((*(arg2 + 0xc0) & 0x100) != 0)) {
                *(arg2 + 0xc0) = *(arg2 + 0xc0) & 0xfffffeff;
                fcn.000277c4(arg2);
            }
        }
        if ((*(*(arg1 + 8) + 0x34) & 0x1000000) != 0) {
            *(arg2 + 0x8c) = *(arg2 + 0x8c) | 0x200;
        }
        cVar2 = fcn.00030f40(*(arg1 + 8));
        if (cVar2 != '\0') {
            iVar5 = *(arg1 + 8);
            if (*(iVar5 + 0x38) != '\x01') {
                return;
            }
            if ((*(iVar5 + 0x34) & 0x2000000) == 0) {
                return;
            }
            arg1_00 = arg2 + 0x1c;
            iVar5 = iVar5 + 0xd8;
            if ((arg1_00 != 0) && (iVar3 = fcn.0001bb9c(arg1_00,iVar5,0x10), iVar3 == 0)) {
                return;
            }
            iVar1 = *(arg2 + 0x80);
            iVar6 = fcn.00034c0c(iVar5);
            if (iVar6 != iVar1) {
                return;
            }
            fcn.0001bbd0(iVar5,arg1_00,0x10);
            fcn.00030e1c(*(arg1 + 8));
            return;
        }
    }
    if ((*(arg2 + 0xc0) & 0x10100) != 0x10100) {
        *(arg2 + 0xc0) = *(arg2 + 0xc0) | 0x10100;
        fcn.000277c4(arg2);
    }
    if ((*(arg2 + 0xc0) & 0xc20287) == 0) {
        return;
    }
    uVar4 = *(arg2 + 0xc0) & 0xff3dfd78;
code_r0x000318a0:
    *(arg2 + 0xc0) = uVar4;
    fcn.000277c4(arg2);
    return;
}


/* fcn.00031100 @ 0x31100 */

ulong fcn.00031100(int64_t arg1)

{
    char cVar1;
    int16_t iVar2;
    int64_t iVar3;
    uint32_t arg2;
    uint32_t uVar4;
    
    iVar3 = fcn.0001f288();
    cVar1 = fcn.00031348(arg1);
    if (cVar1 == '\0') {
        return 0;
    }
    uVar4 = 0;
    if ((*(arg1 + 0x34) & 0x1000000) != 0) {
        uVar4 = 0;
        if ((*(iVar3 + 0x1a) & 0x1000000) != 0) {
            uVar4 = 0x2000001;
        }
    }
    cVar1 = fcn.000291a0(1);
    if ((cVar1 == '\0') || (iVar2 = fcn.0001bb9c(0x37d28,arg1 + 0x18,0xffff), iVar2 != 0)) {
        arg2 = arg1 + 0x18;
        iVar2 = fcn.0001bb9c(0x37d28,arg2,0xffff);
        if (((((iVar2 != 0) || ((*(arg1 + 0x38) != '\x01' || (*(arg1 + 0x39) != '\0')))) &&
             ((cVar1 = fcn.000291a0(0x200), cVar1 == '\0' ||
              ((iVar2 = fcn.0001bb9c(0x37d28,arg2,0xffff), iVar2 != 0 || (*(arg1 + 0x38) != '\x01')))))) &&
            ((((cVar1 = fcn.000291a0(2), cVar1 == '\0' || (iVar2 = fcn.0001bb9c(0x37d30,arg2,0xffff), iVar2 != 0))
              && (iVar2 = fcn.0001bb9c(0x37d38,arg2,0xffff), iVar2 != 0)) &&
             (((cVar1 = fcn.000291a0(8), cVar1 == '\0' || (iVar2 = fcn.0001bb9c(0x37d40,arg2,0xffff), iVar2 != 0))
              && ((cVar1 = fcn.000291a0(0x10), cVar1 == '\0' ||
                  (iVar2 = fcn.0001bb9c(0x37d48,arg2,0xffff), iVar2 != 0)))))))) &&
           (((iVar2 = fcn.0001bb9c(0x37d50,arg2,0xffff), iVar2 != 0 || (*(iVar3 + 0x14) < 5)) &&
            ((iVar2 = fcn.0001bb9c(0x37d58,arg2,0xffff), iVar2 != 0 || (*(iVar3 + 0x14) < 3)))))) {
            iVar2 = fcn.0001bb9c(0x37d60,arg2,0xffff);
            if (((iVar2 == 0) || (iVar2 = fcn.0001bb9c(0x37d68,arg2,0xffff), iVar2 == 0)) &&
               (uVar4 = uVar4 | *(iVar3 + 0x1a), ((uVar4 | 1) & *(arg1 + 0x34)) == *(arg1 + 0x34))) {
                cVar1 = fcn.000291a0(0x200);
                if (cVar1 != '\0') {
                    if ((*(arg1 + 0x34) & 1) == 0) {
                        return 1;
                    }
                    if (*(arg1 + 0x38) == '\x01') {
                        return 1;
                    }
                }
                if ((*(arg1 + 0x34) & 1) == 0) {
                    return 1;
                }
                if ((uVar4 & 1) != 0) {
                    return 1;
                }
            }
            return 0;
        }
    }
    return 1;
}


/* fcn.00030f40 @ 0x30f40 */

ulong fcn.00030f40(int64_t arg1)

{
    char cVar1;
    int iVar2;
    bool bVar3;
    bool bVar4;
    char cVar5;
    uint32_t uVar6;
    int iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint8_t uStackX_8;
    
    bVar4 = false;
    iVar8 = fcn.0001f288();
    iVar7 = 0;
    uStackX_8 = 0;
    iVar9 = arg1 + 0xd8 + *(arg1 + 0x38) * 0x30;
    if (*(arg1 + 0x39) != '\0') {
        do {
            iVar2 = iVar9;
            uVar6 = fcn.000348b8(iVar2 + 0x70,*(iVar9 + 0x18));
            if (((*(iVar8 + 0x1a) & 0x1000000) == 0) || ((*(arg1 + 0x34) & 0x1000000) == 0)) {
                bVar3 = false;
            }
            else {
                bVar3 = true;
            }
            cVar1 = *(iVar9 + 0x58);
            if (cVar1 == '\x01') {
                iVar7 = fcn.000348b8(iVar2 + *(iVar9 + 0x80) * 4 + 0xa0,*(iVar9 + 0x18));
            }
            if ((uVar6 == 0) || ((cVar1 == '\x01' && (iVar7 == 0)))) {
                bVar4 = true;
            }
            if (((*(iVar8 + 0x1a) & 1) == 0) && (!bVar3)) {
                if ((uVar6 & 0x21) == 0) {
                    if ((cVar1 == '\x01') && (iVar7 == 1)) {
                        bVar4 = true;
                    }
                }
                else {
                    bVar4 = true;
                    cVar5 = fcn.000291a0(0x200);
                    if ((cVar5 != '\0') && (uVar6 == 0x20)) {
                        bVar4 = false;
                    }
                }
            }
            if (((*(iVar8 + 0x1a) & 4) == 0) && (uVar6 == 8)) {
                bVar4 = true;
            }
            if (((*(iVar8 + 0x1a) & 2) == 0) && ((uVar6 == 2 || ((cVar1 == '\x01' && (iVar7 == 2)))))) {
                bVar4 = true;
            }
            if (((*(iVar8 + 0x1a) & 0x10) == 0) && ((uVar6 == 4 || ((cVar1 == '\x01' && (iVar7 == 4)))))) {
                bVar4 = true;
            }
            if ((*(iVar8 + 0x14) < *(iVar9 + 0x80)) ||
               ((cVar1 == '\x01' && (*(iVar8 + 0x14) < *(iVar9 + 0xb0 + *(iVar9 + 0x80) * 4))))) {
                bVar4 = true;
            }
            if (bVar4) {
                return 0;
            }
            iVar9 = fcn.00034e44(iVar2 + 0x50,0);
            uStackX_8 = uStackX_8 + 1;
        } while (uStackX_8 < *(arg1 + 0x39));
    }
    return 1;
}


/* fcn.00031984 @ 0x31984 */

void fcn.00031984(int64_t arg1,uint32_t arg2)

{
    uint8_t uVar1;
    int16_t iVar2;
    
    uVar1 = *(arg1 + 0x43);
    iVar2 = 0;
    if (uVar1 != 0) {
        do {
            if (*(iVar2 + 0x44 + arg1) == arg2) {
                return;
            }
            iVar2 = iVar2 + 1;
        } while (iVar2 < uVar1);
    }
    *(uVar1 + 0x44 + arg1) = arg2;
    *(arg1 + 0x43) = *(arg1 + 0x43) + '\x01';
    return;
}


/* fcn.00031b98 @ 0x31b98 */

void fcn.00031b98(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *puVar3;
    uint uVar4;
    char in_stack_00000028;
    
    uVar4 = arg2;
    if (in_stack_00000028 != '\0') {
        uVar4 = CONCAT31(arg2 >> 8,arg3);
        fcn.00027638(**(arg2 + 0x30),CONCAT44(arg2 >> 0x20,uVar4),arg4 & 0xffff);
    }
    *(arg1 + 0x4a) = *(arg1 + 0x4a) + 1;
    *(arg2 + 0x1a) = arg4;
    *(arg2 + 0x18) = arg3 & 0xff;
    *(*(arg1 + 0x20) + 0x28) = arg1;
    fcn.00031984(*(arg1 + 0x20),CONCAT31(uVar4 >> 8,*(arg2 + 0x48)));
    if (*(arg1 + 0x10) == 0) {
        iVar2 = *0x43c08 + 0x1e30;
        *(*0x43c08 + 0x1e68) = arg1;
        *(arg1 + 0x50) = iVar2;
        iVar2 = *0x43c08;
        puVar3 = *0x43c08 + 0x1e80;
        *(arg1 + 0x10) = puVar3;
        uVar1 = *(arg2 + 8);
        *puVar3 = *arg2;
        *(iVar2 + 0x1e88) = uVar1;
        uVar1 = *(arg2 + 0x18);
        *(iVar2 + 0x1e90) = *(arg2 + 0x10);
        *(iVar2 + 0x1e98) = uVar1;
        uVar1 = *(arg2 + 0x28);
        *(iVar2 + 0x1ea0) = *(arg2 + 0x20);
        *(iVar2 + 0x1ea8) = uVar1;
        uVar1 = *(arg2 + 0x38);
        *(iVar2 + 0x1eb0) = *(arg2 + 0x30);
        *(iVar2 + 0x1eb8) = uVar1;
        uVar1 = *(arg2 + 0x48);
        *(iVar2 + 0x1ec0) = *(arg2 + 0x40);
        *(iVar2 + 0x1ec8) = uVar1;
    }
    return;
}


/* fcn.00031e60 @ 0x31e60 */

void fcn.00031e60(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    int64_t *in_stack_00000028;
    
    uVar4 = *(arg1 + 0x2d);
    uVar3 = *(arg1 + 0x4a);
    uVar1 = *arg2 >> (uVar3 & 0x3f);
    uVar2 = uVar1 / uVar4;
    *in_stack_00000028 = (*(arg1 + 0x4c) & *arg2) + (uVar2 << (uVar3 & 0x3f));
    *arg4 = *(arg1 + 0x2d) - uVar2 % *(arg1 + 0x2c);
    uVar4 = uVar1 % uVar4;
    *arg3 = uVar4;
    if (*arg4 <= uVar4) {
        *arg3 = uVar4 + 1;
    }
    return;
}


/* fcn.0002a734 @ 0x2a734 */

void fcn.0002a734(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    uint32_t uVar3;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar2 + 0x4a) == 0) {
        uVar3 = *(arg2 + 0x1a8) % *(iVar2 + 0x48);
    }
    else {
        uVar3 = *(iVar2 + 0x4c) & *(arg2 + 0x1a8);
    }
    uVar3 = *(iVar2 + 0x30) + uVar3 * -0x200;
    if (uVar3 < *(arg2 + 0x1b8)) {
        fcn.000283cc(arg2,uVar3);
    }
    if ((*(arg2 + 0x180) != 0) && (*(arg2 + 0x1c0) == 0)) {
        uVar3 = *(arg2 + 0x1a0);
        uVar1 = *(arg2 + 400);
        if (uVar3 < *(arg2 + 400)) {
            uVar1 = uVar3;
        }
        *(arg2 + 0x1c0) = *(arg2 + 0x198);
        *(arg2 + 0x1b8) = uVar1;
        *(arg2 + 0x198) = uVar1 + *(arg2 + 0x198);
        *(arg2 + 0x1a0) = uVar3 - uVar1;
    }
    return;
}


/* fcn.0002807c @ 0x2807c */

void fcn.0002807c(int64_t arg1)

{
    int64_t iVar1;
    ushort uVar2;
    int64_t iVar3;
    int64_t arg4;
    uint32_t uVar4;
    int64_t arg1_00;
    ulong unaff_R12;
    ulong unaff_R14;
    int64_t arg3;
    uint32_t uVar5;
    ulong unaff_R15;
    int32_t in_stack_ffffffffffffffd8;
    int8_t in_stack_ffffffffffffffe0;
    
    iVar1 = *0x43c08;
    if (*(arg1 + 0x43) == '\0') {
        *(arg1 + 0x42) = 0;
        *(arg1 + 0x40) = 0;
    }
    else {
        if (*(arg1 + 0x43) == '\x01') {
            uVar2 = 2;
            if (*(*(*(arg1 + 0x28) + 0x10) + 0x1a) != 2) {
                arg1_00 = *0x43c08 + 0x1d28;
                *(*0x43c08 + 0x1d58) = *(arg1 + 0x30);
                *(iVar1 + 0x1d60) = *(arg1 + 0x38);
                *(iVar1 + 0x1e18) = *(arg1 + 0x1b8);
                arg3 = *(arg1 + 0x1c0);
                iVar3 = *(*(arg1 + 0x28) + 0x10);
                arg4 = *(iVar3 + 0x40);
                for (uVar4 = *(iVar3 + 0x14); uVar4 != 0; uVar4 = uVar4 - uVar5) {
                    in_stack_ffffffffffffffd8 = CONCAT22(in_stack_ffffffffffffffd8 >> 0x10,1);
                    uVar5 = 0x2000;
                    if (uVar4 < 0x2000) {
                        uVar5 = uVar4;
                    }
                    iVar3 = arg1;
                    fcn.0002844c(arg1_00,arg1,arg3,arg4,in_stack_ffffffffffffffd8,in_stack_ffffffffffffffe0,
                                 unaff_R15,unaff_R14,unaff_R12);
                    if (*(iVar1 + 0x1d6b) != '\0') break;
                    arg4 = arg4 + (uVar5 >> 9);
                    arg3 = arg3 + uVar5;
                }
                if ((*(iVar1 + 0x1d6b) == '\0') && (*(*(arg1 + 0x20) + 8) != 2)) {
                    fcn.00029fcc(*(arg1 + 0x20),CONCAT71(iVar3 >> 8,*(arg1 + 0x44)));
                }
                else if (*(iVar1 + 0x1d68) != 2) {
                    fcn.000319b4(arg1,arg1_00);
                    fcn.0002a0a8(*(arg1 + 0x20),arg1);
                }
                *(arg1 + 0x42) = *(iVar1 + 0x1d6a);
                *(arg1 + 0x40) = *(iVar1 + 0x1d68);
                return;
            }
            *(arg1 + 0x42) = 5;
        }
        else {
            fcn.0002a0a8(*(arg1 + 0x20),arg1);
            uVar2 = 7;
            *(arg1 + 0x42) = 6;
        }
        *(arg1 + 0x40) = uVar2;
    }
    return;
}


/* fcn.0002a5b0 @ 0x2a5b0 */

uint64_t fcn.0002a5b0(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    int64_t iVar1;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar1 + 0x4a) != 0) {
        return *(iVar1 + 0x4c) & arg2;
    }
    return arg2 % *(iVar1 + 0x48);
}


/* fcn.00027b40 @ 0x27b40 */

void fcn.00027b40(uint32_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if ((*(iVar3 + 0x180) != 0) && (*(iVar3 + 0x1c0) == 0)) {
        uVar1 = *(iVar3 + 0x1a0);
        uVar2 = *(iVar3 + 400);
        if (uVar1 < *(iVar3 + 400)) {
            uVar2 = uVar1;
        }
        *(iVar3 + 0x1c0) = *(iVar3 + 0x198);
        *(iVar3 + 0x1b8) = uVar2;
        *(iVar3 + 0x198) = uVar2 + *(iVar3 + 0x198);
        *(iVar3 + 0x1a0) = uVar1 - uVar2;
    }
    return;
}


/* fcn.00027b30 @ 0x27b30 */

void fcn.00027b30(int64_t arg1)

{
    *(arg1 + 0x42) = 6;
    *(arg1 + 0x40) = 7;
    return;
}


/* fcn.00027bf8 @ 0x27bf8 */

void fcn.00027bf8(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x30) = *(arg1 + 0x30);
    *(arg2 + 0x38) = *(arg1 + 0x38);
    *(arg2 + 0xf0) = *(arg1 + 0x1b8);
    return;
}


/* fcn.00027efc @ 0x27efc */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

void fcn.00027efc(int64_t arg1)

{
    int64_t arg1_00;
    ulong uVar1;
    int64_t iVar2;
    int16_t unaff_R14W;
    uchar auStackX_8 [8];
    uchar auStackX_10 [8];
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    uint in_stack_ffffffffffffffb8;
    ushort uVar3;
    int8_t in_stack_ffffffffffffffc0;
    uint32_t arg1_01;
    int64_t arg3;
    int8_t arg_68h;
    int64_t var_10h;
    int8_t var_8h;
    int16_t var_6h;
    
    uVar3 = in_stack_ffffffffffffffb8 >> 0x10;
    arg3 = 0;
    arg_68h = 0;
    fcn.0002fdc8(&stack0xffffffffffffffc8,0);
    *(arg1 + 0x42) = 0;
    *(arg1 + 0x40) = 0;
    (**(**(arg1 + 0x20) + 0x18))(*(arg1 + 0x20),*(arg1 + 0x1a8),auStackX_8,&iStackX_18);
    (**(**(arg1 + 0x20) + 0x20))(*(arg1 + 0x20),*(arg1 + 0x1a8),auStackX_10,&iStackX_20);
    iVar2 = *0x43c08;
    arg1_00 = *0x43c08 + 0x1d28;
    *(*0x43c08 + 0x1d58) = *(arg1 + 0x30);
    *(iVar2 + 0x1d60) = *(arg1 + 0x38);
    *(iVar2 + 0x1e18) = *(arg1 + 0x1b8);
    fcn.0002844c(arg1_00,arg1,arg3,iStackX_18,CONCAT22(uVar3,1),in_stack_ffffffffffffffc0,arg3,arg_68h,
                 unaff_R14W);
    uVar1 = *(arg1 + 0x1c0);
    iVar2 = arg3;
    fcn.00032100(*(arg1 + 0x1b8),uVar1,arg3,arg3);
    arg1_01 = iVar2;
    uVar1 = CONCAT71(uVar1 >> 8,0x2a);
    iVar2 = CONCAT71(arg3 >> 8,auStackX_8[0]);
    fcn.000319fc(arg1 + 0x50,uVar1,iVar2,iStackX_18);
    fcn.000319fc(arg1 + 0x50,CONCAT71(uVar1 >> 8,0x2a),CONCAT71(iVar2 >> 8,auStackX_10[0]),iStackX_20);
    if (*(arg1 + 0x43) != '\0') {
        fcn.0002a0a8(*(arg1 + 0x20),arg1);
        if (1 < *(arg1 + 0x43)) {
            *(arg1 + 0x42) = 6;
            *(arg1 + 0x40) = 7;
        }
    }
    fcn.0002fca4(arg1_01);
    return;
}


/* fcn.0002a590 @ 0x2a590 */

uint64_t fcn.0002a590(int64_t arg1,int64_t arg2)

{
    if (*(arg1 + 0x4a) != 0) {
        return arg2 >> (*(arg1 + 0x4a) & 0x3f);
    }
    return arg2 / *(arg1 + 0x48);
}


/* fcn.00032694 @ 0x32694 */

int64_t fcn.00032694(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    char cVar2;
    int64_t arg1_00;
    int64_t iVar3;
    int64_t arg2_00;
    uint8_t uVar4;
    int iVar5;
    uint uVar6;
    uint uVar7;
    
    iVar1 = *0x43c08;
    iVar5 = arg3;
    uVar4 = 0;
    iVar3 = *0x43c08 + 0x48;
    if (*(*0x43c08 + 0x1b48) != '\0') {
        if (*(*0x43c08 + 0x1b48) == '\0') {
            arg2_00 = 0;
            goto code_r0x000326e4;
        }
        do {
            arg2_00 = uVar4 * 0xd8 + iVar3;
code_r0x000326e4:
            arg1_00 = fcn.0002ce30(iVar3,arg2);
            uVar7 = arg3 >> 0x20;
            uVar6 = CONCAT31(arg3 >> 8,1);
            cVar2 = fcn.00027474(arg1_00,arg2_00,CONCAT44(uVar7,uVar6));
            arg3 = CONCAT44(uVar7,uVar6);
            if (cVar2 != '\0') {
                iVar3 = fcn.00034f58(*(arg1 + 0x50),arg2_00 + 0x1c);
                if (iVar3 == 0) {
                    return 0;
                }
                if (*(iVar3 + 0x1c) != iVar5) {
                    return 0;
                }
                return arg2_00;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(iVar1 + 0x1b48));
    }
    return 0;
}


/* fcn.00034f58 @ 0x34f58 */

int64_t fcn.00034f58(uint32_t arg1,int64_t arg2)

{
    int16_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    uint8_t uVar3;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    if (*(iVar2 + 0x310) != '\0') {
        do {
            if ((arg2 != 0) && (iVar1 = fcn.0001bb9c(arg2,*(iVar2 + 0x308) + uVar3 * 0x30,0x10), iVar1 == 0)) {
                return *(iVar2 + 0x308) + uVar3 * 0x30;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(iVar2 + 0x310));
    }
    return 0;
}


/* fcn.00030df8 @ 0x30df8 */

bool fcn.00030df8(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    
    iVar1 = fcn.0001bb9c(arg2,arg1 + 0x18,0xffff);
    return iVar1 == 0;
}


/* fcn.000321a0 @ 0x321a0 */

void fcn.000321a0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    int16_t iVar2;
    int16_t iVar3;
    uchar auStack_18 [16];
    
    fcn.0001c0b4(auStack_18,10,0x37da8,arg3);
    uVar1 = fcn.0001bb80(auStack_18);
    iVar2 = 0;
    do {
        if (*(iVar2 + arg2) == '\0') break;
        iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
    if (uVar1 + iVar2 < 0x10) {
        fcn.0001bb50(arg1,arg2);
        fcn.0001bb50(iVar2 + arg1,auStack_18);
    }
    else {
        iVar3 = 0x10 - uVar1;
        fcn.0001bbd0(arg1,(iVar2 - iVar3) + arg2,iVar3);
        fcn.0001bbd0(iVar3 + arg1,auStack_18,uVar1);
    }
    return;
}


/* fcn.0002d470 @ 0x2d470 */

int64_t * fcn.0002d470(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int iVar2;
    int64_t iVar3;
    int64_t *noname_1;
    int64_t *arg1_00;
    uint32_t arg2_00;
    int32_t in_stack_00000028;
    
    *(arg1 + 0xb4) = 0x100;
    iVar3 = fcn.00028f2c(*0x43c08,arg2);
    if (iVar3 == 0) {
        arg1_00 = *(arg1 + 0x38 + *(arg1 + 0x30) * 8);
    }
    else {
        arg1_00 = *(iVar3 + 0xc0);
    }
    fcn.0002c678(arg1_00,arg2,arg3,in_stack_00000028);
    arg2_00 = arg3;
    if (((*(arg1 + 0xb4) != '\0') && (*(arg1 + 0xb5) != '\0')) &&
       (noname_1 = arg1_00, iVar3 = fcn.000288c8(*0x43c08,arg1_00), iVar3 != 0)) {
        *(iVar3 + 0x90) = 0x200;
        fcn.0002cbb0(arg1_00);
        fcn.0002bef8(iVar3,noname_1,arg2_00);
        if (((*(arg1_00 + 6) >> 5 & 1) == 0) && (iVar2 = fcn.0002c8b0(arg1_00), iVar2 != 3)) {
            cVar1 = fcn.0002cba0(arg1_00);
            if ((cVar1 != '\0') && (*(arg1_00 + 0x4c) != '\0')) {
                fcn.0001bbd0(*arg1_00 + 0x2d,*(*(arg1_00[1] + 0x18) + 0x30) + 0x2d,0x29);
            }
            fcn.0002df08(arg1,iVar3);
        }
        return arg1_00;
    }
    return NULL;
}


/* fcn.000318d0 @ 0x318d0 */

void fcn.000318d0(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t arg4;
    uint in_register_0000000c;
    int64_t iVar1;
    uint in_register_00000014;
    int64_t iVar2;
    
    iVar2 = CONCAT44(in_register_00000014,arg2);
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    *(iVar1 + 0x18) = *(iVar2 + 0x28);
    *(iVar1 + 0x1c) = *(iVar2 + 0x40);
    *(iVar1 + 0x38) = *(iVar2 + 0x2c);
    *(iVar1 + 0x24) = *(iVar2 + 0x4c);
    *(iVar1 + 0x20) = *(iVar2 + 0x44);
    *(iVar1 + 0x28) = *(iVar2 + 0x48);
    *(iVar1 + 0x30) = arg3;
    if (*(iVar1 + 8) != iVar2) {
        arg4 = *(iVar1 + 0x14);
        if (*(iVar2 + 0x24) < *(iVar1 + 0x14)) {
            arg4 = *(iVar2 + 0x24);
        }
        *(iVar1 + 0x10) = arg4;
        fcn.0001ba1c(*(iVar1 + 8),0x108,arg2,arg4);
        *(*(iVar1 + 8) + 0x24) = *(iVar1 + 0x10);
    }
    return;
}


/* fcn.00035330 @ 0x35330 */

void fcn.00035330(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    uint8_t uVar3;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    if (*(iVar2 + 0x350) != '\0') {
        do {
            uVar1 = uVar3;
            uVar3 = uVar3 + 1;
            *(*(iVar2 + 0x318 + uVar1 * 8) + 0x1c) = *(iVar2 + 0x311) - 1;
        } while (uVar3 < *(iVar2 + 0x350));
    }
    return;
}


/* fcn.00030cb0 @ 0x30cb0 */

void fcn.00030cb0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    
    iVar1 = *(arg1 + 0x30);
    uVar2 = arg2 & 0xfffffffe;
    if ((arg2 & 4U) == 0) {
        uVar2 = arg2;
    }
    *(iVar1 + 0xc0) = uVar2 & arg3 | ~arg3 & *(iVar1 + 0xc0);
    uVar2 = *(iVar1 + 0xc0);
    if (((uVar2 & 0x1008d0) == 0x10) && (*(iVar1 + 0xac) < 0xb)) {
        uVar2 = uVar2 | 8;
    }
    else {
        uVar2 = uVar2 & 0xfffffff7;
    }
    *(iVar1 + 0xc0) = uVar2;
    if ((uVar2 >> 0x18 & 1) != 0) {
        *(iVar1 + 0xc0) = uVar2 & 0xfffffff7;
    }
    return;
}


/* fcn.00034ee0 @ 0x34ee0 */

int64_t fcn.00034ee0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    uint8_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t uVar5;
    
    if (*(arg1 + 0x310) < 0x60) {
        uVar4 = *(arg2 + 8);
        uVar5 = *(arg1 + 0x310);
        iVar3 = *(arg1 + 0x308);
        puVar1 = iVar3 + uVar5 * 0x30;
        *puVar1 = *arg2;
        puVar1[1] = uVar4;
        uVar4 = *(arg2 + 0x18);
        puVar1 = iVar3 + 0x10 + uVar5 * 0x30;
        *puVar1 = *(arg2 + 0x10);
        puVar1[1] = uVar4;
        uVar4 = *(arg2 + 0x28);
        puVar1 = iVar3 + 0x20 + uVar5 * 0x30;
        *puVar1 = *(arg2 + 0x20);
        puVar1[1] = uVar4;
        *(*(arg1 + 0x308) + 0x1c + *(arg1 + 0x310) * 0x30) = arg3;
        uVar2 = *(arg1 + 0x310);
        *(arg1 + 0x310) = uVar2 + 1;
        return uVar2 * 0x30 + *(arg1 + 0x308);
    }
    return 0;
}


/* fcn.0002d41c @ 0x2d41c */

int64_t fcn.0002d41c(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0002da78(arg1,arg2);
    if (arg1_00 == 0) {
        arg1_00 = fcn.0002ddec(arg1,*(arg2 + 0x14));
        if (arg1_00 != 0) {
            fcn.00030be8(arg1_00,arg2);
        }
    }
    return arg1_00;
}


/* fcn.00034ea8 @ 0x34ea8 */

void fcn.00034ea8(uint32_t arg1,int64_t arg2)

{
    char *pcVar1;
    uint8_t uVar2;
    uint in_register_0000000c;
    uint8_t uVar3;
    
    uVar2 = *(CONCAT44(in_register_0000000c,arg1) + 0x350);
    uVar3 = 0;
    if (uVar2 != 0) {
        do {
            if (*(CONCAT44(in_register_0000000c,arg1) + 0x318 + uVar3 * 8) == arg2) {
                return;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < uVar2);
    }
    *(CONCAT44(in_register_0000000c,arg1) + 0x318 + uVar2 * 8) = arg2;
    pcVar1 = CONCAT44(in_register_0000000c,arg1) + 0x350;
    *pcVar1 = *pcVar1 + '\x01';
    return;
}


/* fcn.0002cf5c @ 0x2cf5c */

char fcn.0002cf5c(int64_t arg1)

{
    int64_t arg1_00;
    char cVar1;
    char cVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    int64_t arg1_01;
    char cVar7;
    int64_t arg2;
    
    uVar3 = *(arg1 + 0x1b00);
    cVar2 = '\0';
    uVar6 = 0;
    if (uVar3 != 0) {
        do {
            arg2 = uVar6 * 0xd8 + arg1;
            if (*(arg2 + 0xd0) == '\0') {
                arg1_01 = 0;
                cVar7 = '\0';
                uVar4 = 0;
                if (uVar3 != 0) {
                    do {
                        if ((*(arg1 + 0xd0 + uVar4 * 0xd8) == '\0') && (uVar6 != uVar4)) {
                            arg1_00 = uVar4 * 0xd8 + arg1;
                            cVar1 = fcn.00027474(arg1_00,arg2,0);
                            if (cVar1 != '\0') {
                                cVar7 = cVar7 + '\x01';
                                arg1_01 = arg1_00;
                            }
                        }
                        uVar3 = uVar4 + 1;
                        uVar4 = uVar3;
                    } while (uVar3 < *(arg1 + 0x1b00));
                    if (cVar7 == '\x01') {
                        fcn.0002768c(arg1_01,arg2);
                        cVar2 = cVar2 + '\x01';
                    }
                }
            }
            uVar3 = *(arg1 + 0x1b00);
            uVar5 = uVar6 + 1;
            uVar6 = uVar5;
        } while (uVar5 < uVar3);
    }
    return cVar2;
}


/* fcn.0002c938 @ 0x2c938 */

void fcn.0002c938(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *puVar3;
    ulong *puVar4;
    uint8_t uVar5;
    int64_t *piVar6;
    uint8_t uVar7;
    char cVar8;
    char *pcVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint8_t uVar12;
    bool bVar13;
    bool bVar14;
    char acStackX_8 [8];
    int64_t aiStack_28 [2];
    
    pcVar9 = acStackX_8;
    piVar6 = aiStack_28;
    acStackX_8[1] = '\0';
    cVar8 = '\0';
    iVar1 = *(*(arg1 + 0x38) + 0x28);
    iVar10 = 2;
    aiStack_28[0] = 0;
    aiStack_28[1] = 0;
    do {
        iVar2 = *((iVar1 - aiStack_28) + 0x40 + piVar6);
        *piVar6 = iVar2;
        if ((iVar2 != 0) && ((*(*(iVar2 + 0x30) + 0xc0) & 0x30) == 0x30)) {
            *pcVar9 = '\x01';
            cVar8 = cVar8 + '\x01';
        }
        piVar6 = piVar6 + 1;
        pcVar9 = pcVar9 + 1;
        iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    uVar12 = 0xff;
    if (*(iVar1 + 8) - 2U < 2) {
        uVar12 = *(iVar1 + 0x39);
    }
    if (cVar8 == '\x01') {
        uVar7 = acStackX_8[1] != '\0';
    }
    else {
        if ((cVar8 != '\x02') || (*(iVar1 + 8) != 3)) goto code_r0x0002cb4f;
        uVar7 = uVar12 ^ 1;
        if (1 < uVar7) {
            return;
        }
        cVar8 = fcn.00027600(*(aiStack_28[uVar7] + 0x30));
        if ((cVar8 == '\0') && (uVar7 = uVar12, *(arg1 + 0x44) == 2)) {
            iVar10 = *(aiStack_28[uVar12] + 0x30);
            if ((*(iVar10 + 0xc0) & 0x84) != 0x84) {
                *(iVar10 + 0xc0) = *(iVar10 + 0xc0) | 0x84;
                fcn.000277c4(iVar10);
            }
        }
    }
    uVar11 = uVar7;
    iVar10 = aiStack_28[uVar11];
    cVar8 = fcn.00027600(*(iVar10 + 0x30));
    if (cVar8 == '\0') {
        if (((uVar12 != uVar7) || ((*(*(iVar10 + 0x30) + 0xc0) >> 2 & 1) != 0)) ||
           (((*(arg1 + 0x44) - 1U & 0xfffffffc) == 0 && (*(arg1 + 0x44) != 2)))) goto code_r0x0002cb4f;
    }
    else {
        iVar10 = *(iVar10 + 0x30);
        if ((*(iVar10 + 0xc0) & 0x84) != 0) {
            *(iVar10 + 0xc0) = *(iVar10 + 0xc0) & 0xffffff7b;
            fcn.000277c4(iVar10);
        }
    }
    puVar3 = *(*(*arg1 + 0xd8) + 0x10);
    puVar4 = *(*(*arg1 + 0xd8) + 0x18);
    if (uVar12 == uVar7) {
        uVar5 = uVar7 ^ 1;
        *(iVar1 + 0x39) = uVar5;
        *(puVar3 + 0x5c) = uVar5;
        *(puVar4 + 0x5c) = uVar5;
    }
    bVar13 = *(iVar1 + 8) == 3;
    if (bVar13) {
        *(iVar1 + 8) = 2;
        *(puVar3 + 1) = 2;
        *(puVar4 + 1) = 2;
    }
    if (5 < uVar7) {
        return;
    }
    bVar14 = *(uVar11 + 0x70 + iVar1) != '\0';
    if (bVar14) {
        *(uVar11 + 0x70 + iVar1) = 0;
        *(puVar3 + uVar11 * 2 + 0xf) = 0;
        (***puVar3)(puVar3);
        *(puVar4 + uVar11 * 2 + 0xf) = 0;
        (***puVar4)(puVar4);
    }
    if (bVar14 || (bVar13 || uVar12 == uVar7)) {
        *(*(arg1 + 0x38) + 0x3c) = 1;
        *(*(*arg1 + 0xd8) + 0x54) = 1;
    }
code_r0x0002cb4f:
    fcn.0002bf3c(*arg1,arg1 + 0x40,arg1 + 0x44);
    return;
}


/* fcn.0003508c @ 0x3508c */

void fcn.0003508c(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    int16_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint32_t uVar4;
    uint32_t uVar5;
    uint in_R8;
    int64_t iVar6;
    int64_t iVar7;
    uint8_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    
    iVar6 = CONCAT44(in_R8,arg3);
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = 0;
    uVar9 = 0;
    if (*(iVar3 + 0x300) != 0) {
        do {
            if (*(iVar3 + 0xc + uVar9 * 0x18) == *(iVar6 + 0x28)) {
                if (*(iVar3 + 8 + uVar9 * 0x18) != *(iVar6 + 0x20)) {
                    if (*(iVar6 + 0x2c) <= *(iVar3 + 0x10 + uVar9 * 0x18)) {
                        uVar10 = 0;
                        if (*(iVar6 + 0x38) != '\0') {
                            do {
                                iVar2 = iVar6 + 0xd8 + uVar10 * 0x30;
                                if (iVar2 == 0) {
                                    return;
                                }
                                if ((arg2 + 0x1c != 0) && (iVar1 = fcn.0001bb9c(arg2 + 0x1c,iVar2,0x10), iVar1 == 0))
                                {
                                    uVar5 = *(iVar2 + 0x18) & 0x400004;
                                    if ((*(arg2 + 0xc0) & uVar5) != uVar5) {
                                        *(arg2 + 0xc0) = *(arg2 + 0xc0) | uVar5;
                                        fcn.000277c4(arg2);
                                    }
                                }
                                uVar8 = uVar10 + 1;
                                uVar10 = uVar8;
                            } while (uVar8 < *(iVar6 + 0x38));
                        }
                        iVar3 = fcn.00034f58(arg1,arg2 + 0x1c);
                        if (iVar3 == 0) {
                            return;
                        }
                        if (iVar2 == 0) {
                            return;
                        }
                        *(iVar3 + 0x1c) = uVar9;
                        *(iVar3 + 0x18) = *(iVar3 + 0x18) | *(iVar2 + 0x18) & 2;
                        return;
                    }
                    iVar2 = fcn.00034f58(arg1,*(iVar3 + uVar9 * 0x18) + 0x1c);
                    if (iVar2 != 0) {
                        iVar7 = *(iVar3 + uVar9 * 0x18);
                        uVar5 = *(iVar2 + 0x18) & 0x400004;
                        if ((*(iVar7 + 0xc0) & uVar5) != uVar5) {
                            *(iVar7 + 0xc0) = *(iVar7 + 0xc0) | uVar5;
                            fcn.000277c4(iVar7);
                        }
                    }
                }
                break;
            }
            uVar8 = uVar9 + 1;
            uVar9 = uVar8;
        } while (uVar8 < *(iVar3 + 0x300));
    }
    *(iVar3 + uVar9 * 0x18) = arg2;
    *(iVar3 + 8 + uVar9 * 0x18) = *(iVar6 + 0x20);
    *(iVar3 + 0xc + uVar9 * 0x18) = *(iVar6 + 0x28);
    *(iVar3 + 0x10 + uVar9 * 0x18) = *(iVar6 + 0x2c);
    if (uVar9 == *(iVar3 + 0x300)) {
        *(iVar3 + 0x300) = *(iVar3 + 0x300) + '\x01';
    }
    uVar10 = 0;
    if (*(iVar6 + 0x38) != '\0') {
        do {
            iVar7 = uVar10 * 0x30 + iVar6;
            iVar2 = fcn.00034f58(arg1,iVar7 + 0xd8);
            if (iVar2 == 0) {
                iVar2 = fcn.00034ee0(iVar3,iVar7 + 0xd8,0xffffffff);
                if (iVar2 == 0) {
                    return;
                }
            }
            else {
                uVar4 = *(iVar7 + 0xf0) | *(iVar2 + 0x18);
                uVar5 = uVar4 & 0xffffff78;
                if ((uVar4 & 0x40) == 0) {
                    uVar5 = uVar4;
                }
                uVar4 = uVar5 & 0xfffffffe;
                if ((uVar5 & 0x86) == 0) {
                    uVar4 = uVar5;
                }
                *(iVar2 + 0x18) = *(iVar2 + 0x18) ^ (uVar4 ^ *(iVar2 + 0x18)) & 0xc20287;
            }
            if ((arg2 + 0x1c != 0) && (iVar1 = fcn.0001bb9c(arg2 + 0x1c,iVar2,0x10), iVar1 == 0)) {
                *(iVar2 + 0x18) = *(iVar2 + 0x18) ^ (*(iVar7 + 0xf0) ^ *(iVar2 + 0x18)) & 0xc20287;
                *(iVar2 + 0x1c) = uVar9;
                *(arg2 + 0xc0) = *(arg2 + 0xc0) ^ (*(arg2 + 0xc0) ^ *(iVar2 + 0x18)) & 0x201;
                fcn.000277c4(arg2);
            }
            uVar8 = uVar10 + 1;
            uVar10 = uVar8;
        } while (uVar8 < *(iVar6 + 0x38));
    }
    return;
}


/* fcn.00032ef0 @ 0x32ef0 */

void fcn.00032ef0(int64_t arg1)

{
    ulong *puVar1;
    
    for (puVar1 = *(*(*0x43c08 + 0x38) + 0x10); puVar1 != NULL; puVar1 = *puVar1) {
        if ((*(puVar1[6] + 0xc0) >> 0xf & 1) != 0) {
            fcn.00032f3c(arg1,puVar1[6]);
        }
    }
    return;
}


/* fcn.00032c5c @ 0x32c5c */

void fcn.00032c5c(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    int iVar4;
    
    uVar1 = *(*(arg1 + 0x48) + 0xc0);
    if (((uVar1 >> 8 & 1) != 0) && ((uVar1 >> 0x10 & 1) == 0)) {
        iVar3 = *(arg1 + 8);
        iVar2 = *(iVar3 + 0x20);
        if (*(iVar3 + 0x34) < 0) {
            iVar4 = fcn.00030e1c(iVar3);
            if (iVar2 != iVar4) {
                iVar3 = *(arg1 + 0x48);
                if ((*(iVar3 + 0xc0) & 0x80100) != 0) {
                    *(iVar3 + 0xc0) = *(iVar3 + 0xc0) & 0xfff7feff;
                    fcn.000277c4(iVar3);
                }
                goto code_r0x00032cce;
            }
        }
        fcn.0003508c(*(arg1 + 0x50),*(arg1 + 0x48),*(arg1 + 8));
    }
code_r0x00032cce:
    if ((*(*(arg1 + 0x48) + 0xc0) & 0x1000100) == 0) {
        *(*(arg1 + 0x48) + 0x90) = 0x200;
        if ((*(*(arg1 + 0x48) + 0xc0) >> 0x19 & 1) != 0) {
            *(*(arg1 + 0x48) + 0x90) = 0x1000;
        }
        *(*(arg1 + 0x48) + 0x18) = *(*(arg1 + 0x48) + 0x88);
        fcn.0002df08(*(*0x43c08 + 0x38),*(arg1 + 0x48));
        iVar3 = *(arg1 + 0x48);
        if (((*(iVar3 + 0x8c) & 0x40) == 0) && ((*(iVar3 + 0xc0) & 0x40) == 0)) {
            *(iVar3 + 0xc0) = *(iVar3 + 0xc0) | 0x40;
            fcn.000277c4(iVar3);
        }
        iVar3 = *(arg1 + 0x48);
        if ((*(iVar3 + 0xc0) & 0x80023) != 0) {
            *(iVar3 + 0xc0) = *(iVar3 + 0xc0) & 0xfff7ffdc;
            fcn.000277c4(iVar3);
        }
    }
    return;
}


/* fcn.00034fe8 @ 0x34fe8 */

int64_t fcn.00034fe8(uint32_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    bool bVar4;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    bVar4 = *(iVar3 + 0x311) < *(iVar3 + 0x300);
    while( true ) {
        if (!bVar4) {
            return 0;
        }
        iVar1 = *(iVar3 + *(iVar3 + 0x311) * 0x18);
        *(iVar3 + 0x311) = *(iVar3 + 0x311) + 1;
        iVar2 = fcn.00034f58(arg1,iVar1 + 0x1c);
        if (iVar1 == 0) {
            return 0;
        }
        if (iVar2 == 0) {
            return 0;
        }
        if ((((*(iVar1 + 0xc0) >> 6 & 1) == 0) && ((*(iVar2 + 0x18) >> 0x13 & 1) != 0)) &&
           (*(iVar2 + 0x1c) == *(iVar3 + 0x311) - 1)) break;
        bVar4 = *(iVar3 + 0x311) < *(iVar3 + 0x300);
    }
    return iVar1;
}


/* fcn.0003226c @ 0x3226c */

void fcn.0003226c(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int64_t arg1_00;
    bool bVar2;
    uint8_t uVar3;
    bool bVar4;
    uint8_t uVar5;
    char cVar6;
    int iVar7;
    int64_t iVar8;
    ulong *puVar9;
    uint8_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint8_t uVar13;
    uint16_t uVar14;
    int64_t iVar15;
    uchar auStack_58 [16];
    uchar uStack_48;
    
    uVar10 = 0;
    arg1_00 = *(*0x43c08 + 0x38);
    iVar11 = *(arg1 + 8) + 0xd8 + *(*(arg1 + 8) + 0x38) * 0x30;
    cVar6 = fcn.000291a0(0x100);
    if (cVar6 != '\0') {
        iVar15 = *(arg1 + 8);
        uVar12 = 0;
        uVar1 = 0;
        uVar3 = uVar10;
        uVar5 = 0;
        if (*(iVar15 + 0x38) != '\0') {
            do {
                uVar3 = uVar5;
                uVar10 = uVar1;
                iVar15 = iVar15 + 0xd8 + uVar12 * 0x30;
                cVar6 = fcn.0002134c(iVar15);
                if (cVar6 == '\0') {
                    iVar15 = fcn.0002ce30(*0x43c08 + 0x48,iVar15);
                    if (((iVar15 != 0) && ((*(iVar15 + 0xc0) >> 4 & 1) != 0)) &&
                       ((iVar8 = fcn.00034f58(*(arg1 + 0x50),iVar15 + 0x1c), iVar8 == 0 || (*(iVar8 + 0x1c) == arg2)))
                       ) {
                        uVar1 = *(iVar15 + 0x8c);
                        goto code_r0x00032370;
                    }
                }
                else {
                    iVar15 = fcn.00032694(arg1,iVar15,arg2 & 0xffffffffU);
                    if (iVar15 != 0) {
                        uVar1 = *(iVar15 + 0x8c);
code_r0x00032370:
                        if ((uVar1 & 8) == 0) {
                            uVar3 = 1;
                        }
                        else {
                            uVar10 = 1;
                        }
                    }
                }
                iVar15 = *(arg1 + 8);
                uVar13 = uVar12 + 1;
                uVar12 = uVar13;
                uVar1 = uVar10;
                uVar5 = uVar3;
            } while (uVar13 < *(iVar15 + 0x38));
        }
        if ((uVar3 & uVar10) && (iVar7 = fcn.000348b8(iVar11 + 0x70,*(iVar11 + 0x18)), iVar7 != 0x10)) {
            iVar11 = *(arg1 + 8);
            uVar12 = 0;
            if (*(iVar11 + 0x38) == '\0') {
                return;
            }
            do {
                iVar11 = iVar11 + 0xd8 + uVar12 * 0x30;
                cVar6 = fcn.0002134c(iVar11);
                if ((cVar6 != '\0') && (iVar15 = fcn.00032694(arg1,iVar11,arg2 & 0xffffffffU), iVar15 != 0)) {
                    iVar15 = fcn.0002da78(arg1_00,iVar15 + 0x1c);
                    iVar15 = *(iVar15 + 0x30);
                    if (((*(iVar15 + 0xc0) & 0x100) != 0) && ((*(iVar15 + 0xc0) & 0x10000) == 0)) {
                        *(iVar15 + 0xc0) = *(iVar15 + 0xc0) | 0x10000;
                        fcn.000277c4(iVar15);
                    }
                }
                iVar15 = fcn.00034f58(*(arg1 + 0x50),iVar11);
                if ((((iVar15 != 0) && (arg2 == *(iVar15 + 0x1c))) &&
                    (iVar11 = fcn.0002da78(arg1_00,iVar11), iVar11 != 0)) &&
                   ((iVar11 = *(iVar11 + 0x30), (*(iVar11 + 0xc0) & 0x100) != 0 && ((*(iVar11 + 0xc0) & 0x10000) == 0))
                   )) {
                    *(iVar11 + 0xc0) = *(iVar11 + 0xc0) | 0x10000;
                    fcn.000277c4(iVar11);
                }
                iVar11 = *(arg1 + 8);
                uVar10 = uVar12 + 1;
                uVar12 = uVar10;
            } while (uVar10 < *(iVar11 + 0x38));
            return;
        }
    }
    bVar4 = false;
    bVar2 = false;
    iVar15 = *(arg1 + 8);
    uVar10 = 0;
    if (*(iVar15 + 0x39) != '\0') {
        do {
            cVar6 = fcn.00030df8(iVar15,0x37d60);
            if (((cVar6 == '\0') && (cVar6 = fcn.00030df8(*(arg1 + 8),0x37d68), cVar6 == '\0')) ||
               ((*(*(arg1 + 8) + 0x34) & 0x2000000) == 0)) {
                *(iVar11 + 0x2a) = 0;
                *(iVar11 + 0x18) = *(iVar11 + 0x18) & 0xffffbfff;
                *(iVar11 + 0x2c) = 0;
                *(iVar11 + 0x30) = 0;
            }
            if ((*(iVar11 + 0x18) & 0x4000) != 0) {
                if (*(*0x429d0 + 0x240) != 0) {
                    return;
                }
                bVar4 = true;
            }
            if (*(iVar11 + 0x2a) != '\0') {
                if (*(*0x429d0 + 0x238) != 0) {
                    return;
                }
                bVar2 = true;
                *(*0x43c08 + 0x1ed0) = 1;
            }
            fcn.0001bbd0(auStack_58,iVar11,0x10);
            uStack_48 = 0;
            uVar14 = 1;
            iVar15 = fcn.00028f2c(*0x43c08,iVar11);
            while (iVar15 != 0) {
                fcn.000321a0(iVar11,auStack_58,uVar14);
                uVar14 = uVar14 + 1;
                iVar15 = fcn.00028f2c(*0x43c08,iVar11);
            }
            *(*(arg1 + 0x50) + 0x350) = 0;
            *(*(arg1 + 0x50) + 0x351) = *(*(arg1 + 0x50) + 0x310);
            puVar9 = fcn.0002d470(arg1_00,iVar11,arg1);
            if (puVar9 != NULL) {
                fcn.000318d0(*(puVar9[1] + 0x68),*(arg1 + 8),
                             *(*(arg1 + 0x50) + (*(*(arg1 + 0x50) + 0x311) - 1) * 0x18));
                fcn.00035330(*(arg1 + 0x50));
                if (bVar4) {
                    bVar4 = false;
                    *(*0x429d0 + 0x240) = *puVar9;
                }
                if (bVar2) {
                    bVar2 = false;
                    *(*0x429d0 + 0x238) = *puVar9;
                }
            }
            iVar11 = fcn.00034e44(iVar11 + 0x50,0);
            iVar15 = *(arg1 + 8);
            uVar10 = uVar10 + 1;
        } while (uVar10 < *(iVar15 + 0x39));
    }
    return;
}


/* fcn.000328f4 @ 0x328f4 */

void fcn.000328f4(uint32_t arg1)

{
    uint32_t *puVar1;
    bool bVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    uint32_t uVar5;
    ulong *puVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint8_t uVar11;
    int64_t *piVar12;
    int64_t *piVar13;
    uint32_t uVar14;
    uint8_t uVar15;
    uint32_t uStackX_8;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar4 + 0x40) == '\0') {
        puVar6 = *(*(*0x43c08 + 0x38) + 0x68);
        fcn.0002cf5c(*0x43c08 + 0x48);
        for (; puVar6 != NULL; puVar6 = *puVar6) {
            uVar10 = 0;
            if (*(puVar6 + 10) != '\0') {
                do {
                    uVar15 = 0;
                    uVar11 = 0;
                    uVar5 = 0;
                    uVar9 = 0;
                    piVar12 = puVar6[uVar10 + 0xb];
                    iVar3 = piVar12[1];
                    if (*(iVar3 + 0x14) != '\0') {
                        uVar8 = *(iVar3 + 0x14);
                        piVar13 = iVar3 + 0x18;
                        do {
                            iVar3 = *piVar13;
                            piVar13 = piVar13 + 1;
                            uVar5 = *(*(iVar3 + 0x30) + 0x8c);
                            uVar9 = uVar9 ^ *(*(iVar3 + 0x30) + 0x98);
                            uVar15 = uVar15 | uVar5 >> 4 & 1;
                            uVar11 = uVar11 | uVar5 >> 7 & 1;
                            uVar5 = uVar11;
                            uVar8 = uVar8 - 1;
                        } while (uVar8 != 0);
                    }
                    uVar11 = uVar10 + 1;
                    uVar10 = uVar11;
                    puVar1 = *piVar12 + 0x8c;
                    *puVar1 = *puVar1 ^ (uVar15 << 4 ^ *(*piVar12 + 0x8c)) & 0x10;
                    puVar1 = *piVar12 + 0x8c;
                    *puVar1 = *puVar1 ^ (uVar5 << 7 ^ *(*piVar12 + 0x8c)) & 0x80;
                    *(*piVar12 + 0x98) = *(*piVar12 + 0xb9) ^ uVar9;
                } while (uVar11 < *(puVar6 + 10));
            }
            bVar2 = false;
            uVar14 = 0;
            uVar5 = 0;
            if (*(puVar6 + 0x14) != '\0') {
                piVar12 = puVar6 + 3;
                do {
                    if ((*(*(*piVar12 + 0x30) + 0xc3) & 1) != 0) {
                        uVar14 = uVar14 & 0xff | 1 << (uVar5 & 0x1f);
                    }
                    uVar11 = uVar5 + 1;
                    uVar5 = uVar11;
                    piVar12 = piVar12 + 1;
                } while (uVar11 < *(puVar6 + 0x14));
                if ((uVar14 != 0) && (uVar10 = 0, *(puVar6 + 10) != '\0')) {
                    do {
                        piVar12 = puVar6[uVar10 + 0xb];
                        uVar5 = *(*(piVar12[7] + 0x28) + 8);
                        if (uVar5 - 2 < 2) {
                            if ((uVar14 & ~('\x01' << (*(*(piVar12[7] + 0x28) + 0x39) & 0x1f))) != 0)
                            goto code_r0x00032a66;
                        }
                        else if (uVar5 < 2) {
code_r0x00032a66:
                            bVar2 = true;
                            *(piVar12 + 6) = *(piVar12 + 6) | 0x2000;
                            *(*piVar12 + 0x8c) = *(*piVar12 + 0x8c) | 4;
                            *(*piVar12 + 0x8c) = *(*piVar12 + 0x8c) | 0x40;
                        }
                        uVar11 = uVar10 + 1;
                        uVar10 = uVar11;
                    } while (uVar11 < *(puVar6 + 10));
                }
            }
            uVar10 = 0;
            if (*(puVar6 + 0x14) != '\0') {
                do {
                    iVar3 = puVar6[uVar10 + 3];
                    iVar7 = *(iVar3 + 0x30);
                    if ((*(iVar7 + 0xc3) & 1) == 0) {
                        if ((*(iVar7 + 0xc0) >> 0xf & 1) != 0) {
                            *(iVar7 + 0xc0) = *(iVar7 + 0xc0) & 0xffff7fff;
                            fcn.000277c4(iVar7);
                        }
                        if (bVar2) {
                            iVar3 = *(iVar3 + 0x30);
                            if (-1 < *(iVar3 + 0xc0)) {
                                *(iVar3 + 0xc0) = *(iVar3 + 0xc0) | 0x80;
                                fcn.000277c4(iVar3);
                            }
                        }
                    }
                    uVar11 = uVar10 + 1;
                    uVar10 = uVar11;
                } while (uVar11 < *(puVar6 + 0x14));
            }
            uVar10 = 0;
            if (*(puVar6 + 10) != '\0') {
                do {
                    iVar3 = puVar6[uVar10 + 0xb];
                    if (*(*(*(iVar3 + 0x38) + 0x28) + 0xc) == 0x10) {
                        fcn.0002c938(iVar3);
                        *(*0x43c08 + 0x1edc) = 1;
                        uVar11 = *(iVar3 + 0x48);
                        *(puVar6[uVar11 + 3] + 0x39) = 1;
                        if ((uVar11 ^ 1) < 7) {
                            *(puVar6[(uVar11 ^ 1) + 3] + 0x39) = 2;
                        }
                        if ((*(iVar3 + 0x30) & 0x800) != 0) {
                            uStackX_8 = *(iVar3 + 0x44);
                            if ((uStackX_8 - 1 & 0xfffffffd) != 0) {
                                uVar11 = *(iVar3 + 0x48);
                                if (*(iVar3 + 0x40) == '\x01') {
                                    uVar11 = uVar11 ^ 1;
                                }
                                fcn.0002141c(uVar10,uVar11);
                            }
                        }
                    }
                    uVar11 = uVar10 + 1;
                    uVar10 = uVar11;
                } while (uVar11 < *(puVar6 + 10));
            }
            (***puVar6[0xd])();
        }
        *0x42dd0 = 0;
        fcn.0002d7f4(*(*0x43c08 + 0x38));
    }
    iVar3 = *(iVar4 + 0x50);
    uVar11 = 0;
    if (*(iVar3 + 0x310) != '\0') {
        do {
            iVar7 = uVar11 * 0x30 + *(iVar3 + 0x308);
            iVar3 = fcn.0002ce30(*0x43c08 + 0x48,iVar7);
            if (((((*(iVar7 + 0x18) >> 1 & 1) != 0) && (iVar3 != 0)) &&
                (uVar5 = *(iVar3 + 0xc0), (uVar5 & 0x10011) == 0x10)) && ((uVar5 & 0x42) == 0)) {
                *(iVar3 + 0xc0) = uVar5 | 2;
                fcn.000277c4(iVar3);
            }
            iVar3 = *(iVar4 + 0x50);
            uVar11 = uVar11 + 1;
        } while (uVar11 < *(iVar3 + 0x310));
    }
    return;
}


/* fcn.00032f3c @ 0x32f3c */

void fcn.00032f3c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uchar auStack_38 [24];
    uint32_t uStack_20;
    
    iVar1 = fcn.00034f58(*(arg1 + 0x50),arg2 + 0x1c);
    if (iVar1 == 0) {
        fcn.00034ba4(auStack_38,arg2);
        uStack_20 = uStack_20 | 0x80000;
        fcn.00034ee0(*(arg1 + 0x50),auStack_38,0xffffffff);
    }
    return;
}


/* fcn.00034ba4 @ 0x34ba4 */

uchar * fcn.00034ba4(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    uchar *puVar2;
    int64_t iVar3;
    
    fcn.0001bbd0(arg1,arg2 + 0x1c,0x10);
    *(arg1 + 0x10) = *(arg2 + 0x80);
    *(arg1 + 0x20) = *(arg2 + 0x80) >> 0x20;
    iVar3 = 0xc;
    *(arg1 + 0x14) = *(arg2 + 0x88);
    uVar1 = *(arg2 + 0xc0);
    *(arg1 + 0x1c) = 0xffffffff;
    *(arg1 + 0x18) = uVar1;
    puVar2 = arg1 + 0x24;
    do {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    return arg1 + 0x24;
}


/* fcn.0002b1e4 @ 0x2b1e4 */

uint fcn.0002b1e4(uint32_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    char cVar4;
    int64_t iVar5;
    uint in_register_0000000c;
    int64_t iVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    uint8_t uVar9;
    uint32_t uVar10;
    
    iVar6 = CONCAT44(in_register_0000000c,arg1);
    uVar9 = 0;
    if (*(iVar6 + 0x50) != '\0') {
        do {
            uVar10 = 0;
            iVar2 = **(iVar6 + 0x58 + uVar9 * 8);
            fcn.0002c2f4(iVar2);
            iVar3 = *(iVar2 + 0xd8);
            if ((*(*(iVar6 + 0x58 + uVar9 * 8) + 0x30) >> 9 & 1) == 0) {
                fcn.0002a66c(*(iVar3 + 0x10));
                fcn.0002a66c(*(iVar3 + 0x18));
            }
            iVar5 = *(iVar3 + 0x10);
            if ((*(iVar5 + 8) == 2) && (*(iVar3 + 0xc) != 1)) {
                cVar4 = fcn.00029efc(iVar5);
                if (cVar4 != '\0') {
                    iVar5 = fcn.0002a284(iVar5);
                    if (iVar5 != 0) {
                        fcn.0002bbbc(iVar3,iVar5);
                        (****(iVar6 + 0x68))(*(iVar6 + 0x68),1);
                    }
                }
            }
            if (*(iVar6 + 0x14) != 0) {
                piVar7 = iVar6 + 0x18;
                uVar8 = *(iVar6 + 0x14);
                do {
                    if ((*(*(*piVar7 + 0x30) + 0xc0) >> 4 & 1) != 0) {
                        uVar10 = uVar10 | *(*(*piVar7 + 0x30) + 0x94);
                    }
                    piVar7 = piVar7 + 1;
                    uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
            }
            uVar9 = uVar9 + 1;
            *(iVar2 + 0x94) = uVar10;
        } while (uVar9 < *(iVar6 + 0x50));
    }
    uVar8 = 0;
    *(iVar6 + 0x10) = 0;
    if (*(iVar6 + 0x50) != '\0') {
        do {
            iVar2 = **(iVar6 + 0x58 + uVar8 * 8);
            iVar3 = *(iVar2 + 0xd8);
            if (*(iVar3 + 0xc) == 1) {
                iVar1 = *(iVar2 + 0xd4);
                if (iVar1 == 0) {
code_r0x0002afb1:
                    *(iVar6 + 0x10) = 5;
                    return 5;
                }
                if (iVar1 == 1) {
                    if ((*(*(iVar3 + 0x18) + 8) < 2) && (*(iVar3 + 0x44) != 0)) {
                        *(iVar6 + 0x10) = 6;
                    }
                    else {
                        *(iVar6 + 0x10) = 2;
                    }
                    return *(iVar6 + 0x10);
                }
                if (iVar1 == 2) goto code_r0x0002afb1;
                if (iVar1 == 3) {
                    *(iVar6 + 0x10) = 1;
                    return 1;
                }
                if (iVar1 == 4) goto code_r0x0002afb1;
            }
            uVar9 = uVar8 + 1;
            uVar8 = uVar9;
        } while (uVar9 < *(iVar6 + 0x50));
    }
    return 0;
}


/* fcn.00034888 @ 0x34888 */

ulong fcn.00034888(int64_t arg1)

{
    return CONCAT44(*(arg1 + 0x18),*(arg1 + 4));
}


/* fcn.00034898 @ 0x34898 */

ulong fcn.00034898(int64_t arg1)

{
    return CONCAT44(*(arg1 + 0x1c),*(arg1 + 8));
}


/* fcn.000348a8 @ 0x348a8 */

ulong fcn.000348a8(int64_t arg1)

{
    return CONCAT44(*(arg1 + 0x14),*arg1);
}


/* fcn.00032748 @ 0x32748 */

int64_t fcn.00032748(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    bool bVar1;
    char cVar2;
    int64_t iVar3;
    int64_t arg1_01;
    uint8_t uVar4;
    int64_t arg2_00;
    uint8_t uVar5;
    uchar auStack_38 [16];
    uchar uStack_28;
    
    arg1_01 = 0;
    arg1_00 = *(*0x43c08 + 0x38);
    uVar5 = *(*(arg1 + 0x50) + 0x311) - 1;
    arg2_00 = *(arg1 + 8) + 0xd8 + (arg2 & 0xffffffffU) * 0x30;
    iVar3 = fcn.00034f58(*(arg1 + 0x50),arg2_00);
    if (iVar3 == 0) goto code_r0x000328c8;
    arg1_01 = fcn.0002da78(arg1_00,iVar3);
    if ((*(iVar3 + 0x1c) == uVar5) || (*(iVar3 + 0x1c) == -1)) {
        bVar1 = true;
    }
    else {
        bVar1 = false;
    }
    if ((arg1_01 == 0) || ((*(*(arg1_01 + 0x30) + 0xc0) & 0x10050) != 0x10)) {
        fcn.0001bbd0(auStack_38,arg2_00,0x10);
        uStack_28 = 0;
        cVar2 = fcn.0002134c(auStack_38);
        if (cVar2 == '\0') {
            uVar4 = uVar5;
            do {
                fcn.000321a0(arg2_00,auStack_38,uVar4);
                uVar4 = uVar4 + 1;
                iVar3 = fcn.00034f58(*(arg1 + 0x50),arg2_00);
            } while (iVar3 != 0);
            iVar3 = fcn.00034ee0(*(arg1 + 0x50),arg2_00,uVar5);
            arg1_01 = fcn.0002d41c(arg1_00,arg2_00);
            if (arg1_01 == 0) {
                return 0;
            }
        }
        else if ((arg1_01 == 0) && (arg1_01 = fcn.0002d41c(arg1_00,arg2_00), arg1_01 == 0)) goto code_r0x000328ae;
        if (*(arg1_01 + 0x30) != 0) {
            *(*(arg1_01 + 0x30) + 0x88) = 0xffffffff;
        }
    }
    else {
        fcn.00030cb0(arg1_01,*(arg2_00 + 0x18),0xc20287);
        if (!bVar1) {
            *(arg1_00 + 0xb5) = 0;
        }
    }
code_r0x000328ae:
    fcn.00034ea8(*(arg1 + 0x50),iVar3);
    if ((arg1_01 != 0) && ((*(arg2_00 + 0x18) >> 1 & 1) != 0)) {
        return arg1_01;
    }
code_r0x000328c8:
    *(arg1_00 + 0xb5) = 0;
    return arg1_01;
}


/* fcn.0002a874 @ 0x2a874 */

void fcn.0002a874(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t arg1_00;
    uint64_t uVar3;
    
    uVar1 = arg3 + arg4;
    arg1_00 = fcn.0002accc(arg1,arg2,arg3,uVar1);
    if (arg1_00 != 0) {
        uVar2 = *(arg1_00 + 8);
        uVar3 = *(arg1_00 + 0x10) + uVar2;
        if ((*(arg1_00 + 0x10) == arg4) && (uVar2 == arg3)) {
            return;
        }
        if ((arg3 < uVar3) && (uVar2 < uVar1)) {
            if (uVar2 < arg3) {
                arg3 = uVar2;
            }
            if (uVar3 < uVar1) {
                uVar3 = uVar1;
            }
            fcn.000334cc(arg1_00,arg3,uVar3 - arg3);
            return;
        }
    }
    fcn.0002b2f4(arg1);
    return;
}


/* fcn.0002b474 @ 0x2b474 */

void fcn.0002b474(uint32_t arg1)

{
    int64_t arg1_00;
    int64_t *arg1_01;
    uint in_register_0000000c;
    int64_t arg1_02;
    uint8_t uVar1;
    uint64_t uVar2;
    
    arg1_02 = CONCAT44(in_register_0000000c,arg1);
    uVar1 = 0;
    if (*(arg1_02 + 0x14) != '\0') {
        do {
            arg1_00 = *(*(arg1_02 + 0x18 + uVar1 * 8) + 0x30);
            if ((*(arg1_00 + 0xc0) & 0x8002) != 0) {
                *(arg1_00 + 0xc0) = *(arg1_00 + 0xc0) & 0xffff7ffd;
                fcn.000277c4(arg1_00);
            }
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(arg1_02 + 0x14));
    }
    if (*(arg1_02 + 0x50) != '\0') {
        *(arg1_02 + 0x70) = 0;
        uVar2 = 0;
        *(arg1_02 + 0x14) = 0;
        *(arg1_02 + 0x88) = 0;
        *(arg1_02 + 0xe0) = 0;
        if (*(arg1_02 + 0x50) != '\0') {
            do {
                arg1_01 = *(arg1_02 + 0x58 + uVar2 * 8);
                fcn.0002c860(arg1_01);
                fcn.0002c788(arg1_01,*arg1_01);
                fcn.0002cca0(arg1_01);
                uVar1 = uVar2 + 1;
                uVar2 = uVar1;
            } while (uVar1 < *(arg1_02 + 0x50));
        }
        *(arg1_02 + 0x50) = 0;
        fcn.0002a804(arg1_02);
    }
    return;
}


/* fcn.00033660 @ 0x33660 */

void fcn.00033660(uint32_t arg1)

{
    uint32_t *puVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    char cVar5;
    int16_t iVar6;
    uint32_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint32_t uVar10;
    uint in_register_0000000c;
    int64_t arg1_00;
    char *pcVar11;
    int64_t arg1_01;
    char cVar12;
    uchar auStackX_8 [8];
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg1_00 + 0x28) != 0) {
        fcn.000314f0(arg1_00,*(arg1_00 + 0x30));
        uVar4 = *(*(arg1_00 + 8) + 0x48);
        uVar7 = fcn.00030e44(*(arg1_00 + 8));
        fcn.0001ba1c(0x4a2c0,0x7f8,uVar7,uVar4);
    }
    cVar5 = '\0';
    if ((*(*(arg1_00 + 0x40) + 0x14) == '\0') ||
       (cVar12 = '\x01', (*(*(*(*(arg1_00 + 0x40) + 0x18) + 0x30) + 0x8c) & 0x200) == 0)) {
        cVar12 = cVar5;
    }
    fcn.00031488(arg1_00);
    arg1_01 = *(arg1_00 + 8) + 0xd8;
    auStackX_8[0] = 0;
    while (iVar8 = fcn.0002b334(*(arg1_00 + 0x40),auStackX_8), iVar8 != 0) {
        *(iVar8 + 0x10) = cVar5;
        fcn.00034b30(arg1_01,iVar8);
        cVar5 = cVar5 + '\x01';
        arg1_01 = arg1_01 + 0x30;
    }
    *(*(arg1_00 + 8) + 0x38) = cVar5;
    auStackX_8[0] = 0;
    while( true ) {
        iVar8 = fcn.0002b350(*(arg1_00 + 0x40),auStackX_8);
        if (iVar8 == 0) break;
        iVar9 = fcn.00028f2c(*0x43c08,iVar8 + 0x10);
        if (iVar9 != 0) {
            iVar9 = fcn.0002c920(iVar8,0);
            uVar7 = *(iVar9 + 0xc);
            uVar2 = *(*(arg1_00 + 0x40) + 0x50);
            uVar3 = *(iVar9 + 0x10);
            cVar5 = fcn.000333ac(iVar9);
            if (cVar5 != '\0') {
                puVar1 = *(arg1_00 + 8) + 0x34;
                *puVar1 = *puVar1 | 0x4000000;
            }
            if (*(iVar8 + 0x28) >> 0x20 != 0) {
                puVar1 = *(arg1_00 + 8) + 0x34;
                *puVar1 = *puVar1 | 0x20000000;
            }
            if (*(arg1_00 + 0x28) != 0) {
                puVar1 = *(arg1_00 + 8) + 0x34;
                *puVar1 = *puVar1 | 0x8000000;
            }
            if ((*(iVar8 + 0x4c) != '\0') || ((*(iVar8 + 0x30) >> 0xe & 1) != 0)) {
                puVar1 = *(arg1_00 + 8) + 0x34;
                *puVar1 = *puVar1 | 0x2000000;
            }
            puVar1 = *(arg1_00 + 8) + 0x34;
            *puVar1 = *puVar1 | -(cVar12 != '\0') & 0x1000000;
            if ((uVar2 < 2) && (*(*(arg1_00 + 8) + 0x34) == -0x80000000)) {
                pcVar11 = "1.0.00";
                if (uVar7 == 2) {
                    pcVar11 = "1.1.00";
                }
                if (2 < uVar3) {
                    pcVar11 = "1.2.01";
                }
                if (uVar7 == 4) {
                    pcVar11 = "1.2.02";
                }
                if (uVar7 == 0x10) {
                    pcVar11 = "1.2.06";
                }
                if (4 < uVar3) {
                    pcVar11 = "1.2.04";
                }
                if (cVar12 != '\0') {
                    pcVar11 = "1.4.01";
                }
            }
            else {
                pcVar11 = "1.4.01";
                if (cVar12 == '\0') {
                    pcVar11 = "1.3.00";
                }
                if ((uVar7 & 0x21) != 0) {
                    puVar1 = *(arg1_00 + 8) + 0x34;
                    *puVar1 = *puVar1 | 1;
                }
                if (uVar7 == 2) {
                    puVar1 = *(arg1_00 + 8) + 0x34;
                    *puVar1 = *puVar1 | 2;
                }
                if (uVar7 == 8) {
                    puVar1 = *(arg1_00 + 8) + 0x34;
                    *puVar1 = *puVar1 | 4;
                }
                if (uVar7 == 4) {
                    puVar1 = *(arg1_00 + 8) + 0x34;
                    *puVar1 = *puVar1 | 0x10;
                }
                if (uVar7 == 0x10) {
                    puVar1 = *(arg1_00 + 8) + 0x34;
                    *puVar1 = *puVar1 | 0x20;
                }
            }
            iVar9 = *(arg1_00 + 8);
            iVar6 = fcn.0001bb9c(pcVar11,iVar9 + 0x18,0xffff);
            if (0 < iVar6) {
                fcn.0001bb50(iVar9 + 0x18,pcVar11);
            }
            fcn.00035368(arg1_01,iVar8);
            arg1_01 = fcn.00034e44(arg1_01 + 0x50,0);
            pcVar11 = *(arg1_00 + 8) + 0x39;
            *pcVar11 = *pcVar11 + '\x01';
        }
    }
    *(arg1_00 + 0x10) = arg1_01 - *(arg1_00 + 8);
    *(*(arg1_00 + 8) + 0x48) = *(arg1_00 + 0x28);
    *(arg1_00 + 0x10) = *(arg1_00 + 0x10) + *(*(arg1_00 + 8) + 0x48);
    if (*(arg1_00 + 0x28) != 0) {
        fcn.0001ba1c(arg1_01,0xa4,0x4a2c0,*(*(arg1_00 + 8) + 0x48));
    }
    *(*(arg1_00 + 8) + 0x24) = *(arg1_00 + 0x10);
    fcn.000313cc(arg1_00);
    uVar10 = *(arg1_00 + 0x10) + 0x1ffU & 0xfffffe00;
    uVar7 = 0x1400;
    if (uVar10 < 0x1400) {
        uVar7 = uVar10;
    }
    *(arg1_00 + 0x10) = uVar7;
    fcn.00033a88(arg1_00);
    fcn.00033600(arg1_00);
    fcn.00033524(arg1_00);
    return;
}


/* fcn.00030ea8 @ 0x30ea8 */

int64_t fcn.00030ea8(uint32_t arg1,int64_t arg2)

{
    int16_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    int64_t iVar3;
    uint8_t uVar4;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if (arg2 != 0) {
        uVar4 = 0;
        iVar3 = iVar2 + 0xd8 + *(iVar2 + 0x38) * 0x30;
        if (*(iVar2 + 0x39) != '\0') {
            do {
                iVar1 = fcn.0001bb9c(arg2,iVar3,0x10);
                if (iVar1 == 0) {
                    return iVar3;
                }
                iVar3 = fcn.00034e44(iVar3 + 0x50,0);
                uVar4 = uVar4 + 1;
            } while (uVar4 < *(iVar2 + 0x39));
        }
    }
    return 0;
}


/* fcn.00036450 @ 0x36450 */

void fcn.00036450(void)

{
    return;
}


/* fcn.00031488 @ 0x31488 */

uchar * fcn.00031488(int64_t arg1)

{
    uchar *puVar1;
    uchar *puVar2;
    int64_t iVar3;
    
    fcn.0001bb50(*(arg1 + 8),0x37b18);
    fcn.0001bb50(*(arg1 + 8) + 0x18,0x37d28);
    iVar3 = 0;
    do {
        *(iVar3 + 0x38 + *(arg1 + 8)) = 0;
        iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    iVar3 = 0x88;
    *(*(arg1 + 8) + 0x34) = 0x80000000;
    puVar2 = *(arg1 + 8) + 0x50;
    puVar1 = puVar2;
    do {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    return puVar2;
}


/* fcn.00034b30 @ 0x34b30 */

uchar * fcn.00034b30(int64_t arg1,int64_t arg2)

{
    uchar *puVar1;
    int64_t iVar2;
    
    fcn.0001bbd0(arg1,arg2 + 0x11,0x10);
    *(arg1 + 0x10) = *(*(arg2 + 0x30) + 0x80);
    *(arg1 + 0x20) = *(*(arg2 + 0x30) + 0x80) >> 0x20;
    iVar2 = 0xc;
    *(arg1 + 0x14) = *(*(arg2 + 0x30) + 0x88);
    *(arg1 + 0x18) = *(*(arg2 + 0x30) + 0xc0);
    puVar1 = arg1 + 0x24;
    do {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return arg1 + 0x24;
}


/* fcn.000333ac @ 0x333ac */

ulong fcn.000333ac(uint32_t arg1)

{
    uint8_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    
    *(CONCAT44(in_register_0000000c,arg1) + 0x3b) = 0;
    if (*(CONCAT44(in_register_0000000c,arg1) + 0x10) == '\0') goto code_r0x000333c0;
    iVar3 = *(CONCAT44(in_register_0000000c,arg1) + 0x40);
    *(CONCAT44(in_register_0000000c,arg1) + 0x3b) = 1;
    while( true ) {
        if (iVar3 == 0) {
            return 0;
        }
        if (((*(*(iVar3 + 0x30) + 0xc0) >> 4 & 1) != 0) && (uVar2 = *(*(iVar3 + 0x30) + 0x80), uVar2 >> 0x20 != 0))
        break;
        uVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x3b);
        if (uVar1 < *(CONCAT44(in_register_0000000c,arg1) + 0x10)) {
            iVar3 = *(CONCAT44(in_register_0000000c,arg1) + 0x40 + uVar1 * 8);
            *(CONCAT44(in_register_0000000c,arg1) + 0x3b) = uVar1 + 1;
        }
        else {
code_r0x000333c0:
            iVar3 = 0;
        }
    }
    return CONCAT71(uVar2 >> 0x28,1);
}


/* fcn.00035368 @ 0x35368 */

void fcn.00035368(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int64_t arg1_00;
    int64_t iVar2;
    
    iVar2 = fcn.00028f2c(*0x43c08,arg2 + 0x10);
    if (iVar2 != 0) {
        fcn.0001bbd0(arg1,arg2 + 0x10,0x10);
        *(arg1 + 0x20) = *(arg2 + 0x24);
        *(arg1 + 0x14) = *(arg2 + 0x28) >> 0x20;
        *(arg1 + 0x10) = *(arg2 + 0x28);
        uVar1 = *(arg2 + 0x30);
        *(arg1 + 0x1c) = 0;
        *(arg1 + 0x18) = uVar1;
        *(arg1 + 0x24) = *(arg2 + 0x34);
        fcn.0001ba7c(arg1 + 0x34,0,0x1c);
        *(arg1 + 0x26) = *(arg2 + 0x40);
        *(arg1 + 0x27) = *(arg2 + 0x44);
        *(arg1 + 0x23) = *(arg2 + 0x48);
        *(arg1 + 0x28) = *(arg2 + 0x4a);
        *(arg1 + 0x2a) = *(arg2 + 0x4c);
        *(arg1 + 0x2b) = *(arg2 + 0x4d);
        *(arg1 + 0x2c) = *(arg2 + 0x50);
        *(arg1 + 0x30) = *(arg2 + 0x54);
        *(arg1 + 0x22) = *(arg2 + 0x5c);
        fcn.00034d78(arg1 + 0x50,*(arg2 + 0x38),0);
        arg1_00 = *(iVar2 + 0xd8);
        if ((*(iVar2 + 0xf2) == '\0') || (*(iVar2 + 0xf5) != '\0')) {
            *(arg1_00 + 0x52) = *(arg1 + 0x5a);
            *(arg1 + 0x5a) = *(arg1 + 0x5a);
        }
        else {
            *(arg1 + 0x5a) = 0;
            *(arg1_00 + 0x52) = 0;
        }
        iVar2 = fcn.0002b87c(arg1_00);
        fcn.00034e68(arg1 + 0x50,iVar2);
        *(arg1 + 0x21) = 0;
    }
    return;
}


/* fcn.000313cc @ 0x313cc */

void fcn.000313cc(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int64_t arg1_00;
    int64_t arg1_01;
    
    *(arg1 + 0x38) = *(arg1 + 0x38) + 1;
    *(*(arg1 + 8) + 0x28) = *(arg1 + 0x18);
    *(*(arg1 + 8) + 0x40) = *(arg1 + 0x1c);
    arg1_01 = *(arg1 + 8);
    *(arg1_01 + 0x2c) = *(arg1 + 0x38);
    *(*(arg1 + 8) + 0x4c) = *(arg1 + 0x24);
    if (*0x42dd0 != '\0') {
        *(arg1 + 0x20) = *(arg1 + 0x20) + 1;
    }
    *(*(arg1 + 8) + 0x44) = *(arg1 + 0x20);
    arg1_00 = *(arg1 + 8);
    fcn.00030e1c(arg1_00);
    if (*(arg1 + 0x18) == 0) {
        *(arg1 + 0x38) = 0;
        *(*(arg1 + 8) + 0x2c) = 0;
        iVar1 = *(arg1 + 8);
        iVar2 = fcn.0001bce4(arg1_00,arg1_01);
        iVar2 = *(iVar1 + 0x20) + iVar2;
        *(arg1 + 0x18) = iVar2;
        *(iVar1 + 0x28) = iVar2;
        *(*(arg1 + 8) + 0x40) = *(arg1 + 0x18);
        *(arg1 + 0x1c) = *(arg1 + 0x18);
        fcn.00030e1c(*(arg1 + 8));
    }
    return;
}


/* fcn.00033a88 @ 0x33a88 */

void fcn.00033a88(int64_t arg1)

{
    int64_t arg1_00;
    int64_t iVar1;
    uint8_t uVar2;
    
    iVar1 = *(arg1 + 8);
    uVar2 = 0;
    arg1_00 = *(*0x43c08 + 0x38);
    if (*(iVar1 + 0x38) != '\0') {
        do {
            iVar1 = fcn.0002da78(arg1_00,iVar1 + uVar2 * 0x30 + 0xd8);
            if ((iVar1 != 0) && (iVar1 = *(iVar1 + 0x30), (*(iVar1 + 0xc0) & 10) == 10)) {
                fcn.00033994(arg1,iVar1);
                if ((*(iVar1 + 0xc0) >> 8 & 1) == 0) {
                    *(iVar1 + 0xc0) = *(iVar1 + 0xc0) | 0x100;
                    fcn.000277c4(iVar1);
                }
            }
            iVar1 = *(arg1 + 8);
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(iVar1 + 0x38));
    }
    return;
}


/* fcn.00033600 @ 0x33600 */

void fcn.00033600(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    uchar auStackX_8 [8];
    
    auStackX_8[0] = 0;
    uVar3 = *(arg1 + 0x40);
    while( true ) {
        piVar2 = fcn.0002b350(uVar3,auStackX_8);
        if (piVar2 == NULL) break;
        iVar1 = fcn.00030ea8(*(arg1 + 8),piVar2 + 2);
        *(*(*piVar2 + 0xd8) + 0x52) = *(iVar1 + 0x5a);
        uVar3 = *(arg1 + 0x40);
    }
    fcn.00036450(arg1);
    return;
}


/* fcn.00033524 @ 0x33524 */

void fcn.00033524(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t arg1_00;
    
    iVar2 = *(*0x43c08 + 0x38);
    arg1_00 = *(iVar2 + 0x10);
    while (*(iVar2 + 8) = arg1_00, arg1_00 != 0) {
        if ((*(arg1_00 + 0x28) == *(arg1 + 0x40)) && (uVar1 = *(*(arg1_00 + 0x30) + 0xc0), (uVar1 >> 1 & 1) == 0)) {
            if ((uVar1 >> 3 & 1) != 0) {
                (****(arg1_00 + 0x40))();
            }
            fcn.00030d78(arg1_00,0);
        }
        arg1_00 = **(iVar2 + 8);
    }
    return;
}


/* fcn.00033994 @ 0x33994 */

void fcn.00033994(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uchar *puVar3;
    uchar auStack_58 [80];
    
    if ((*0x43909 == '\0') || (*0x4390a == '\0')) {
        puVar3 = arg2;
        fcn.00027808(auStack_58);
        uVar1 = *(arg1 + 0x10);
        if (0x200 < uVar1) {
            iVar2 = fcn.0002739c(arg2);
            fcn.000287c8(*0x43c08,CONCAT71(puVar3 >> 8,0x2a),iVar2 - ((*(arg1 + 0x10) >> 9) - 1),uVar1 - 0x200);
            puVar3 = auStack_58;
            fcn.00030910(arg2,puVar3);
        }
        iVar2 = fcn.0002739c(arg2);
        fcn.000287c8(*0x43c08,CONCAT71(puVar3 >> 8,0x2a),iVar2,0x200);
        fcn.00030910(arg2,auStack_58);
    }
    return;
}


/* fcn.00033cf8 @ 0x33cf8 */

void fcn.00033cf8(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    if ((arg2 != 0) && (((*(arg2 + 0xc0) >> 0x18 & 1) != 0 || ((*(arg2 + 0xc0) & 0xc) == 8)))) {
        fcn.0002910c(*0x43c08,arg2,CONCAT71(arg2 >> 8,0x2a),arg3 & 0xffffffff);
    }
    return;
}


/* fcn.00033cac @ 0x33cac */

void fcn.00033cac(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    if ((arg2 != 0) && (((*(arg2 + 0xc0) >> 0x18 & 1) != 0 || ((*(arg2 + 0xc0) & 0xc) == 8)))) {
        fcn.0002910c(*0x43c08,arg2,CONCAT71(arg2 >> 8,0x28),arg3 & 0xffffffff);
    }
    return;
}


/* fcn.00027cac @ 0x27cac */

//WARNING: Possible PIC construction at 0x00027e19: Changing call to branch
//WARNING: Removing unreachable block (ram,0x00027e1e)

void fcn.00027cac(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    char cVar4;
    ushort uVar5;
    int64_t iVar6;
    int64_t unaff_RBX;
    ulong *puVar7;
    
    fcn.00031cdc(arg1 + 0x50,CONCAT71(arg2 >> 8,0x28),arg2,*(arg1 + 0x1a8));
    do {
        uVar5 = 0;
        if (*(arg1 + 0x43) == '\0') {
            *(arg1 + 0x42) = 0;
code_r0x00027d3a:
            *(arg1 + 0x40) = uVar5;
            return;
        }
        if (*(*(arg1 + 0x20) + 8) == 3) {
            *(arg1 + 0x42) = 6;
            uVar5 = 7;
            goto code_r0x00027d3a;
        }
        if (*(*(*(arg1 + 0x28) + 0x10) + 0x1a) == 2) {
            *(arg1 + 0x42) = 5;
            *(arg1 + 0x40) = 2;
            return;
        }
    } while (*(arg1 + 0x60) == 0);
    *(arg1 + 0x1c8) = 0;
    *(arg1 + 0x28) = arg1 + 0x50;
    iVar6 = arg1;
    while( true ) {
        *(*0x20 + -8) = unaff_RBX;
        *(arg1 + 0x43) = 0;
        iVar3 = *(*(arg1 + 0x28) + 0x10);
        *(*0x20 + 0x10) = *(iVar3 + 0x40);
        uVar1 = *(iVar3 + 0x48);
        *(*0x20 + 8) = uVar1;
        if (*(iVar3 + 0x1a) != 2) {
            iVar3 = *(arg1 + 0x20);
            *(*0x20 + -0x50) = 0x27d9b;
            fcn.00029fcc(iVar3,CONCAT71(iVar6 >> 8,uVar1));
        }
        iVar6 = *(arg1 + 0x20);
        if (*(iVar6 + 100) - 1 <= *(arg1 + 0x1c8)) break;
        *(*0x20 + -0x50) = 0x27dbe;
        cVar4 = fcn.0002a398(iVar6,*0x20 + 0x10,*0x20 + 8);
        if (cVar4 == '\0') break;
        iVar6 = *(arg1 + 0x20);
        iVar3 = *(arg1 + 0x1a8);
        *(*0x20 + -0x18) = *(*0x20 + 8);
        uVar2 = *(iVar6 + 0x68);
        iVar6 = CONCAT71(iVar6 >> 8,0x28);
        *(*0x20 + -0x20) = *(arg1 + 0x1c0);
        *(*0x20 + -0x28) = *(arg1 + 0x1b8);
        *(*0x20 + -0x50) = 0x27dfd;
        fcn.00031cdc(arg1 + 0xe8,iVar6,uVar2,iVar3);
        if (*(arg1 + 0x43) == '\0') {
            *(arg1 + 0x60) = 0;
            *(*0x20 + -0x50) = 0x27e10;
            fcn.00027cf4(arg1);
            return;
        }
        *(arg1 + 0x1c8) = *(arg1 + 0x1c8) + 1;
        puVar7 = *0x20 + -0x50;
        *0x20 = *0x20 + -0x50;
        *puVar7 = 0x27e1e;
        unaff_RBX = arg1;
    }
    *(arg1 + 0x42) = 6;
    *(arg1 + 0x40) = 7;
    return;
}


/* fcn.00034284 @ 0x34284 */

void fcn.00034284(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    
    if (arg2 != '\0') {
        *(*arg1 + 0x52) = 0;
        return;
    }
    *(*arg1 + 0x52) = 1;
    puVar1 = *(*(*(*arg1 + 0x20) + 200) + 0x68);
    //WARNING: Could not recover jumptable at 0x000342ab. Too many branches
    //WARNING: Treating indirect jump as call
    (***puVar1)(puVar1,1);
    return;
}


/* fcn.00033004 @ 0x33004 */

int64_t fcn.00033004(int64_t arg1)

{
    uchar *puVar1;
    ulong *puVar2;
    int64_t iVar3;
    
    puVar1 = arg1 + 0x70;
    *(arg1 + 8) = 0;
    puVar2 = arg1 + 0x40;
    *(arg1 + 0x20) = 0;
    *(arg1 + 0x28) = 0;
    iVar3 = 6;
    *(arg1 + 0x10) = 0;
    do {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *arg1 = 0;
    return arg1;
}


/* fcn.00034e34 @ 0x34e34 */

ulong fcn.00034e34(int64_t arg1)

{
    return CONCAT44(*(arg1 + 0x10),*arg1);
}


/* fcn.00033198 @ 0x33198 */

void fcn.00033198(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    int64_t iVar2;
    uchar uVar3;
    uint32_t uVar4;
    ulong uVar5;
    int64_t iVar6;
    uint8_t uVar7;
    uint64_t uVar8;
    
    iVar2 = *(*0x43c08 + 0x38);
    *(arg1 + 8) = *(arg2 + 0xe);
    *(arg1 + 0x20) = *(arg2 + 0xc);
    uVar5 = fcn.00034888(arg2);
    *(arg1 + 0x28) = uVar5;
    *(arg1 + 0x10) = *(arg2 + 0x10);
    uVar5 = fcn.00034898(arg2);
    *(arg1 + 0x30) = uVar5;
    uVar5 = fcn.000348a8(arg2);
    *(arg1 + 0x18) = uVar5;
    *(arg1 + 0x39) = *(arg2 + 0x12);
    uVar4 = fcn.000348b8(arg2,*(**arg1 + 0x30));
    *(arg1 + 0xc) = uVar4;
    uVar3 = fcn.00021308(uVar4);
    uVar7 = 0;
    *(arg1 + 0x38) = uVar3;
    if (*(arg1 + 0x10) != '\0') {
        do {
            uVar8 = uVar7;
            iVar6 = fcn.00032748(arg3,*(arg2 + 0x30 + uVar8 * 4) & 0xfff);
            if ((iVar6 != 0) && ((*(*(iVar6 + 0x30) + 0xc0) >> 4 & 1) != 0)) {
                pcVar1 = iVar2 + 0xb4;
                *pcVar1 = *pcVar1 + '\x01';
            }
            *(arg1 + 0x40 + uVar8 * 8) = iVar6;
            uVar7 = uVar7 + 1;
            *(arg1 + 0x70 + uVar8) = *(arg2 + 0x33 + uVar8 * 4);
        } while (uVar7 < *(arg1 + 0x10));
    }
    return;
}


/* fcn.0002b87c @ 0x2b87c */

ulong fcn.0002b87c(int64_t arg1)

{
    return *(arg1 + 0x38);
}


/* fcn.00033290 @ 0x33290 */

void fcn.00033290(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t arg1_00;
    ulong uVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    
    *(arg1 + 8) = *(arg2 + 8);
    *(arg1 + 0xc) = *(arg2 + 0x28);
    cVar1 = *(arg2 + 0x2c);
    *(arg1 + 0x10) = cVar1;
    *(arg1 + 0x18) = *(arg2 + 0x20);
    *(arg1 + 0x20) = *(arg2 + 0x48);
    *(arg1 + 0x28) = *(arg2 + 0x40);
    *(arg1 + 0x30) = *(arg2 + 0x38);
    *(arg1 + 0x39) = *(arg2 + 0x5c);
    *(arg1 + 0x38) = *(arg2 + 100);
    arg1_00 = *(*0x43c08 + 0x38);
    uVar4 = 0;
    if (cVar1 != '\0') {
        do {
            uVar2 = fcn.0002da78(arg1_00,*(arg2 + (uVar4 + 7) * 0x10) + 0x1c);
            *(arg1 + 0x40 + uVar4 * 8) = uVar2;
            uVar3 = uVar4 + 1;
            *(arg1 + 0x70 + uVar4) = *(arg2 + 8 + (uVar4 + 7) * 0x10);
            uVar4 = uVar3;
        } while (uVar3 < *(arg1 + 0x10));
    }
    return;
}


/* fcn.0003193c @ 0x3193c */

void fcn.0003193c(int64_t arg1,int64_t arg2)

{
    int64_t arg4;
    unkbyte7 in_R8;
    
    arg4 = fcn.0002739c(arg2);
    fcn.0002910c(*0x43c08,arg2,CONCAT71(in_R8,0x2a),arg4);
    return;
}


/* fcn.0003478c @ 0x3478c */

void fcn.0003478c(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint uVar2;
    uint extraout_var;
    uint8_t uVar3;
    uint64_t uVar4;
    
    *(arg1 + 0xe) = *(arg2 + 8);
    *(arg1 + 0x10) = *(arg2 + 0x10);
    *(arg1 + 0xc) = *(arg2 + 0x20);
    *arg1 = *(arg2 + 0x18);
    *(arg1 + 0x14) = *(arg2 + 0x18) >> 0x20;
    uVar2 = fcn.000333a4(arg2);
    *(arg1 + 4) = uVar2;
    fcn.000333a4(arg2);
    *(arg1 + 0x18) = extraout_var;
    *(arg1 + 8) = *(arg2 + 0x30);
    *(arg1 + 0x1c) = *(arg2 + 0x30) >> 0x20;
    *(arg1 + 0x11) = *(arg2 + 0x38);
    *(arg1 + 0x12) = *(arg2 + 0x39);
    *(arg1 + 0x13) = 1;
    iVar1 = *(arg2 + 0xc);
    if (iVar1 == 1) {
code_r0x0003483c:
        *(arg1 + 0xf) = 0;
    }
    else {
        if (iVar1 != 2) {
            if (iVar1 == 4) {
                *(arg1 + 0xf) = 5;
                goto code_r0x00034840;
            }
            if ((iVar1 != 8) && (iVar1 != 0x10)) {
                if (iVar1 != 0x20) {
                    *(arg1 + 0xf) = 0xff;
                    goto code_r0x00034840;
                }
                goto code_r0x0003483c;
            }
        }
        *(arg1 + 0xf) = 1;
    }
code_r0x00034840:
    fcn.0001ba7c(arg1 + 0x20,0,0x10);
    uVar4 = 0;
    if (*(arg1 + 0x10) != '\0') {
        do {
            uVar3 = uVar4 + 1;
            *(arg1 + 0x30 + uVar4 * 4) = *(*(arg2 + 0x40 + uVar4 * 8) + 0x10) | *(arg2 + 0x70 + uVar4) << 0x18;
            uVar4 = uVar3;
        } while (uVar3 < *(arg1 + 0x10));
    }
    return;
}


/* fcn.00034d78 @ 0x34d78 */

void fcn.00034d78(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uchar uVar1;
    uint in_register_00000014;
    int64_t iVar2;
    
    iVar2 = CONCAT44(in_register_00000014,arg2);
    *(arg1 + 8) = *(iVar2 + 8);
    *(arg1 + 9) = *(iVar2 + 0xc);
    *(arg1 + 10) = *(iVar2 + 0x10);
    *arg1 = *(iVar2 + 0x18);
    *(arg1 + 0x10) = *(iVar2 + 0x18) >> 0x20;
    *(arg1 + 4) = *(iVar2 + 0x20);
    *(arg1 + 0xc) = *(iVar2 + 0x24);
    *(arg1 + 0xe) = *(iVar2 + 0x26);
    if (*(iVar2 + 0x38) == '\0') {
        uVar1 = 0xff;
    }
    else {
        uVar1 = *(iVar2 + 0x3c);
    }
    *(arg1 + 0xb) = uVar1;
    fcn.0001ba7c(arg1 + 0x14,0,0xc);
    fcn.0003478c(arg1 + 0x20,*(iVar2 + 0x28));
    if ((arg3 != '\0') || (*(arg1 + 8) != '\0')) {
        fcn.0003478c(arg1 + 0x20 + (*(arg1 + 0x30) + 0xc) * 4,*(iVar2 + 0x30));
    }
    return;
}


/* fcn.00034e68 @ 0x34e68 */

void fcn.00034e68(int64_t arg1,int64_t arg2)

{
    *arg1 = arg2;
    *(arg1 + 0x10) = arg2 >> 0x20;
    return;
}


/* fcn.000357e8 @ 0x357e8 */

uint64_t fcn.000357e8(int64_t arg1,uint32_t arg2)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint in_register_00000014;
    
    if (*(arg1 + 0x60) == '\x01') {
        uVar1 = (1LL << (*(arg1 + 0x28) & 0x3f)) + *(arg1 + 0x18);
    }
    else {
        if (*(arg1 + 0x60) != '\x02') {
            return in_RAX & 0xffffffffffffff00;
        }
        uVar1 = (1LL << (*(arg1 + 0x29) & 0x3f)) + *(arg1 + 0x20);
    }
    return CONCAT71(uVar1 >> 8,
                    CONCAT44(in_register_00000014,arg2) < uVar1 || CONCAT44(in_register_00000014,arg2) == uVar1);
}


/* fcn.00035638 @ 0x35638 */

void fcn.00035638(int64_t arg1)

{
    if (0xfffff < *(arg1 + 0x18) - *(arg1 + 0x20)) {
        *(arg1 + 0x28) = *(arg1 + 0x18) >> 0x10 & 0xfff0;
        *(arg1 + 0x2c) = 0xfff0;
        *(arg1 + 0x2a) =
             ((*(arg1 + 0x20) - *(arg1 + 0x18) >> 0x14 & 0xff) + 0xfff) * 0x100000 + *(arg1 + 0x18) >> 0x10 & 0xfff0;
        *(arg1 + 0x34) = 0;
    }
    return;
}


/* fcn.000356f4 @ 0x356f4 */

void fcn.000356f4(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t iVar1;
    int64_t arg1_00;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar1 + 8) != '\0') {
        arg1_00 = *(iVar1 + 0x38) + 0x28;
        fcn.00019bec(arg1_00,0x20,*(iVar1 + 0x28));
        fcn.00019bec(arg1_00,0x22,*(iVar1 + 0x2a));
        fcn.00019b18(arg1_00,0x20);
        fcn.00019bec(arg1_00,0x24,*(iVar1 + 0x2c));
        fcn.00019bec(arg1_00,0x26,*(iVar1 + 0x2e));
        fcn.00019c1c(arg1_00,0x28,*(iVar1 + 0x30));
        fcn.00019c1c(arg1_00,0x2c,*(iVar1 + 0x34));
    }
    return;
}


/* fcn.00019bec @ 0x19bec */

void fcn.00019bec(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ushort auStackX_10 [12];
    
    auStackX_10[0] = arg3;
    (**(arg1 + 0x38))(arg1,1,arg2 & 0xffff,1,auStackX_10);
    return;
}


/* fcn.00019e14 @ 0x19e14 */

ulong fcn.00019e14(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong uVar2;
    uint16_t uVar3;
    
    uVar1 = fcn.00019b18(arg1,(arg3 + '\x04') * '\x04');
    if ((uVar1 & 1) == 0) {
        if ((uVar1 >> 1 & 3) == 2) {
            if (5 < (arg3 & 0xff) + 1) goto code_r0x00019e8e;
            uVar3 = (arg3 & 0xff) << 2;
            fcn.00019c1c(arg1,uVar3 + 0x14,arg2 >> 0x20);
            uVar1 = uVar3 + 0x10;
        }
        else {
            if ((uVar1 >> 1 & 3) != 0) goto code_r0x00019e8e;
            uVar1 = ((arg3 & 0xff) + 4) * 4;
        }
        fcn.00019c1c(arg1,uVar1,arg2 & 0xffffffff);
        uVar2 = 1;
    }
    else {
code_r0x00019e8e:
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00019c4c @ 0x19c4c */

void fcn.00019c4c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar auStackX_18 [16];
    
    auStackX_18[0] = arg3;
    (**(arg1 + 0x38))(arg1,0,arg2 & 0xffff,1,auStackX_18);
    return;
}


/* fcn.00018a40 @ 0x18a40 */

void fcn.00018a40(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int16_t iVar2;
    int64_t iVar3;
    uint *arg1_00;
    uint *puVar4;
    
    if (arg1 == 1) {
        arg1_00 = fcn.0001e9a8(arg2);
        if (arg1_00 == NULL) {
            return;
        }
        puVar4 = fcn.0001b9e4(0x20);
        if (puVar4 != NULL) {
            fcn.0001ba7c(puVar4,0,0x20);
            *(puVar4 + 2) = *0x43821;
            *puVar4 = 1;
            *(puVar4 + 4) = arg1_00;
            puVar4[3] = arg3;
            *0x43821 = *0x43821 + '\x01';
            iVar3 = *0x43840;
            if (*0x43840 == NULL) {
                *0x43840 = puVar4;
                return;
            }
            while (*(iVar3 + 0x18) != 0) {
                iVar3 = *(iVar3 + 0x18);
            }
            goto code_r0x00018bbf;
        }
    }
    else {
        if (arg1 != 2) {
            return;
        }
        iVar3 = fcn.00019d88(arg2,0);
        arg1_00 = fcn.00020278(arg2,iVar3);
        if (arg1_00 == NULL) {
            return;
        }
        puVar4 = fcn.0001b9e4(0x20);
        if (puVar4 != NULL) {
            fcn.0001ba7c(puVar4,0,0x20);
            cVar1 = *0x43821;
            puVar4[1] = 0;
            *(puVar4 + 2) = cVar1;
            *puVar4 = 2;
            cVar1 = fcn.00020204(arg1_00);
            if (cVar1 != '\0') {
                iVar2 = fcn.00019ae0(arg2,2);
                if (iVar2 == 0x975) {
                    puVar4[1] = 1;
                }
                else if (iVar2 == 0x9ac) {
                    puVar4[1] = 2;
                }
                else {
                    if (iVar2 != 0x9ad) {
                        fcn.0001b9d8(arg1_00);
                        goto code_r0x00018b6b;
                    }
                    puVar4[1] = 3;
                }
            }
            *(puVar4 + 4) = arg1_00;
            puVar4[3] = arg3;
            *0x43821 = *0x43821 + '\x01';
            iVar3 = *0x43840;
            if (*0x43840 == NULL) {
                *0x43840 = puVar4;
                return;
            }
            while (*(iVar3 + 0x18) != 0) {
                iVar3 = *(iVar3 + 0x18);
            }
code_r0x00018bbf:
            *(iVar3 + 0x18) = puVar4;
            return;
        }
    }
    puVar4 = arg1_00;
code_r0x00018b6b:
    fcn.0001b9d8(puVar4);
    return;
}


/* fcn.000362c8 @ 0x362c8 */

int64_t fcn.000362c8(void)

{
    int64_t iVar1;
    
    iVar1 = fcn.0001b9e4(0xd8);
    if (iVar1 != 0) {
        fcn.0001ba7c(iVar1,0,0xd8);
        *(iVar1 + 0x58) = 0x35878;
        *(iVar1 + 0x60) = 0x358dc;
        *(iVar1 + 0x38) = 0x35944;
        *(iVar1 + 0x40) = 0x35958;
        *(iVar1 + 0x80) = 0x35868;
        *(iVar1 + 0x88) = 0x35924;
        *(iVar1 + 0x70) = 0x35934;
        *(iVar1 + 0x78) = 0x3596c;
    }
    return iVar1;
}


/* fcn.00035794 @ 0x35794 */

bool fcn.00035794(int64_t arg1)

{
    uint16_t uVar1;
    uint16_t uVar2;
    
    uVar1 = fcn.00019ae0(arg1,4);
    fcn.00019bec(arg1,4,uVar1 | 6);
    uVar2 = fcn.00019ae0(arg1,4);
    return uVar2 == (uVar1 | 6);
}


/* fcn.0003568c @ 0x3568c */

void fcn.0003568c(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t iVar1;
    int64_t arg1_00;
    unkbyte7 in_R8;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar1 + 8) != '\0') {
        arg1_00 = *(iVar1 + 0x38) + 0x28;
        fcn.00019c4c(arg1_00,0x18,CONCAT71(in_R8,*(iVar1 + 10)));
        fcn.00019c4c(arg1_00,0x19,CONCAT71(in_R8,*(iVar1 + 0xb)));
        fcn.00019c4c(arg1_00,0x1a,CONCAT71(in_R8,*(iVar1 + 0xc)));
        fcn.00019b18(arg1_00,0x18);
    }
    return;
}


/* fcn.000359f0 @ 0x359f0 */

void fcn.000359f0(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    uchar uVar1;
    char cVar2;
    int16_t iVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    int64_t arg2_00;
    int64_t *piVar7;
    uint64_t uVar8;
    ulong uVar9;
    uint8_t uVar10;
    uint16_t uVar11;
    uint8_t uVar12;
    uint64_t uVar13;
    uint8_t uStackX_18;
    uint8_t uStackX_20;
    uint16_t auStack_38 [4];
    uint64_t uStack_30;
    int16_t *piStack_28;
    uint uStack_20;
    uint32_t uStack_1c;
    
    uVar8 = 0;
    uStackX_20 = 0;
    do {
        uVar13 = 0;
        uStackX_18 = 0;
        uStack_30 = uVar8;
        do {
            uVar12 = uVar13;
            uVar10 = *(arg2 + 8);
            if (uVar10 != 0) {
                uVar10 = uVar10 + ('\x01' - *(arg1 + 0x61));
            }
            piStack_28 = ((uVar10 << 5 | uVar8) << 3 | uVar13) * 0x1000 + *(arg1 + 8);
            if ((((piStack_28 == NULL) || (piStack_28 < *(arg1 + 8))) ||
                ((1LL << (*(arg1 + 0x10) & 0x3f)) + *(arg1 + 8) <= piStack_28)) || ((*piStack_28 + 1U & 0xfffe) == 0)) {
                uStackX_18 = uVar12;
                if (uVar12 == 0) break;
code_r0x00035d73:
            }
            else {
                iVar6 = fcn.000362c8();
                if (iVar6 == 0) {
                    return;
                }
                uVar9 = 0;
                *(iVar6 + 0x10) = piStack_28;
                *(iVar6 + 0xca) = uVar12;
                arg1_00 = iVar6 + 0x28;
                *(iVar6 + 0xd0) = arg2;
                *(iVar6 + 0xc9) = uStackX_20;
                *(iVar6 + 200) = uVar10;
                uVar10 = fcn.00019b80(arg1_00,0xe);
                if ((uVar10 & 0x7f) == 1) {
                    uVar4 = 3;
                }
                else {
                    iVar3 = fcn.00019ae0(arg1_00,10);
                    uVar9 = 0;
                    cVar2 = fcn.00019b80(arg1_00,9);
                    if (iVar3 == 0x106) {
                        if (cVar2 != '\x01') goto code_r0x00035b42;
                        uVar4 = 1;
                    }
                    else if ((iVar3 == 0x108) && (cVar2 == '\x02')) {
                        uVar4 = 2;
                    }
                    else {
code_r0x00035b42:
                        uVar4 = 0;
                    }
                }
                *(iVar6 + 8) = uVar4;
                if (uVar4 == 0) {
code_r0x00035d61:
                    fcn.0001b9d8(iVar6);
code_r0x00035c39:
                    uVar8 = uStack_30;
                    goto code_r0x00035d73;
                }
                if (2 < uVar4) {
                    if (uVar4 != 3) goto code_r0x00035d61;
                    arg2_00 = fcn.0001b9e4(0x50);
                    if (arg2_00 == 0) goto code_r0x00035dc3;
                    fcn.0001ba7c(arg2_00,0,0x50);
                    uVar10 = *(arg1 + 0x62);
                    if (*(arg1 + 99) + 1 <= uVar10) {
                        uVar10 = *(arg1 + 99) + 1;
                        *(arg1 + 99) = uVar10;
                    }
                    *(arg2_00 + 8) = uVar10;
                    if (uVar10 < *(arg1 + 0x62)) {
                        *(arg2_00 + 0x10) = *(iVar6 + 0x10);
                        uVar1 = *(arg2 + 0xb);
                        *(arg2_00 + 0x40) = arg2;
                        *(arg2_00 + 10) = uVar1;
                        *(arg2_00 + 0xb) = uVar10;
                        *(arg2_00 + 0xc) = uVar10;
                        *(arg2_00 + 0x38) = iVar6;
                        cVar2 = fcn.00035794(arg1_00);
                        if (cVar2 != '\0') {
                            iVar6 = *(arg2_00 + 0x40);
                            if (*(iVar6 + 0xc) != *(arg2_00 + 0xc)) {
                                for (; iVar6 != 0; iVar6 = *(iVar6 + 0x40)) {
                                    *(iVar6 + 0xc) = *(arg2_00 + 0xc);
                                    fcn.0003568c(iVar6);
                                }
                            }
                            fcn.0003568c(arg2_00);
                            piVar7 = *(arg1 + 0x68);
                            if (*(arg1 + 0x68) == NULL) {
                                *(arg1 + 0x68) = arg2_00;
                            }
                            else {
                                for (; *piVar7 != NULL; piVar7 = *piVar7) {
                                }
                                *piVar7 = arg2_00;
                            }
                            fcn.000359f0(arg1,arg2_00);
                            goto code_r0x00035c39;
                        }
                    }
                    fcn.0001b9d8(iVar6);
                    iVar6 = arg2_00;
code_r0x00035dc3:
                    fcn.0001b9d8(iVar6);
                    return;
                }
                cVar2 = fcn.00035794(arg1_00);
                if (cVar2 == '\0') goto code_r0x00035dc3;
                auStack_38[0] = 0;
                cVar2 = fcn.00019cac(arg1_00,CONCAT71(uVar9 >> 8,0x18),auStack_38);
                if (cVar2 != '\0') {
                    uStack_20 = fcn.00019b18(arg1_00,auStack_38[0]);
                    uVar4 = fcn.00019b18(arg1_00,auStack_38[0] + 4);
                    uStack_1c = uVar4 & 0xf003f003 | 0x10031003;
                    fcn.00019c1c(arg1_00,auStack_38[0] + 4,uStack_1c);
                    fcn.00019b18(arg1_00,auStack_38[0] + 4);
                }
                if (*(iVar6 + 8) == 1) {
                    iVar3 = 5;
code_r0x00035ce2:
                    uVar8 = fcn.00019b18(arg1_00,(iVar3 + '\x04') * '\x04');
                    if ((uVar8 & 1) != 0) goto code_r0x00035cfa;
                    uVar11 = (iVar3 + 4) * 4;
                    fcn.00019c1c(arg1_00,uVar11,0xffffffff);
                    uVar4 = fcn.00019b18(arg1_00,uVar11);
                    iVar5 = ~(uVar4 & 0xfffffff0) + 1;
                }
                else {
                    if (*(iVar6 + 8) == 2) {
                        iVar3 = 0;
                        goto code_r0x00035ce2;
                    }
code_r0x00035cfa:
                    iVar5 = 0;
                }
                *(iVar6 + 0x18) = iVar5;
                piVar7 = *(arg2 + 0x48);
                if (*(arg2 + 0x48) == NULL) {
                    *(arg2 + 0x48) = iVar6;
                }
                else {
                    for (; *piVar7 != NULL; piVar7 = *piVar7) {
                    }
                    *piVar7 = iVar6;
                }
                uVar8 = uStack_30;
            }
            uStackX_18 = uStackX_18 + 1;
            uVar13 = uStackX_18;
        } while (uStackX_18 < 8);
        uStackX_20 = uStackX_20 + 1;
        uVar8 = uStackX_20;
        if (0x1f < uStackX_20) {
            return;
        }
    } while( true );
}


/* fcn.00019cac @ 0x19cac */

ulong fcn.00019cac(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t arg2_00;
    
    arg2_00 = 0x100;
    while( true ) {
        uVar2 = fcn.00019b18(arg1,arg2_00);
        uVar1 = uVar2;
        if (uVar1 == 0xffffffff) {
            return 0;
        }
        if ((uVar1 & 0xffff) == (arg2 & 0xff)) break;
        arg2_00 = uVar2 >> 0x14 & 0xfff;
        if (uVar1 >> 0x14 == 0) {
            return 0;
        }
    }
    *arg3 = arg2_00;
    return 1;
}


/* fcn.0003548c @ 0x3548c */

void fcn.0003548c(int64_t arg1)

{
    uint32_t uVar1;
    char cVar2;
    uint64_t uVar3;
    ulong *puVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *puVar7;
    int64_t *piVar8;
    int64_t arg1_00;
    int64_t in_R8;
    
    puVar7 = *(arg1 + 0x68);
    do {
        if (puVar7 == NULL) {
code_r0x000355bd:
            for (puVar7 = *(arg1 + 0x68); puVar7 != NULL; puVar7 = *puVar7) {
                if (puVar7[9] != 0) {
                    for (arg1_00 = puVar7[8]; arg1_00 != 0; arg1_00 = *(arg1_00 + 0x40)) {
                        uVar6 = *(arg1_00 + 0x18);
                        if (uVar6 == 0) {
                            uVar6 = puVar7[3];
                        }
                        else if (puVar7[3] < uVar6) {
                            uVar6 = puVar7[3];
                        }
                        uVar3 = puVar7[4];
                        *(arg1_00 + 0x18) = uVar6;
                        if (uVar3 < *(arg1_00 + 0x20)) {
                            uVar3 = *(arg1_00 + 0x20);
                        }
                        *(arg1_00 + 0x20) = uVar3;
                        iVar5 = arg1_00;
                        fcn.00035638(arg1_00);
                        fcn.000356f4(iVar5);
                    }
                }
            }
            return;
        }
        piVar8 = puVar7[9];
        if (piVar8 != NULL) {
            uVar6 = *(arg1 + 0x58) + 0x100000U & 0xfffffffffff00000;
            cVar2 = fcn.000357e8(arg1,uVar6);
            if (cVar2 == '\0') {
                *(arg1 + 0x60) = 2;
                uVar6 = *(arg1 + 0x20) + 0x101004U & 0xfffffffffff00000;
                *(arg1 + 0x58) = uVar6;
                uVar6 = uVar6 + 0x100000;
                cVar2 = fcn.000357e8(arg1,uVar6);
                if (cVar2 != '\0') goto code_r0x00035511;
            }
            else {
code_r0x00035511:
                puVar7[3] = *(arg1 + 0x58);
                puVar7[4] = uVar6;
                puVar4 = puVar7;
                fcn.00035638(puVar7);
                fcn.000356f4(puVar4);
            }
            do {
                uVar6 = *(arg1 + 0x58);
                uVar1 = *(piVar8 + 3);
                if (uVar6 % uVar1 != 0) {
                    uVar6 = uVar6 + uVar1 & -uVar1;
                }
                piVar8[4] = uVar6;
                uVar3 = uVar6;
                cVar2 = fcn.000357e8(arg1,uVar6);
                if (cVar2 == '\0') goto code_r0x000355bd;
                if (puVar7[4] < uVar3) {
                    piVar8[4] = 0;
                    goto code_r0x000355bd;
                }
                if (piVar8[1] == 1) {
                    in_R8 = CONCAT71(in_R8 >> 8,5);
code_r0x00035576:
                    cVar2 = fcn.00019e14(piVar8 + 5,uVar6,in_R8);
                    if (cVar2 != '\0') {
                        *(arg1 + 0x58) = *(piVar8 + 3) + piVar8[4];
                    }
                }
                else if (piVar8[1] == 2) {
                    in_R8 = 0;
                    goto code_r0x00035576;
                }
                piVar8 = *piVar8;
            } while (piVar8 != NULL);
            *(arg1 + 0x58) = *(arg1 + 0x58) + 0x100000U & 0xfffffffffff00000;
        }
        puVar7 = *puVar7;
    } while( true );
}


/* fcn.00019b4c @ 0x19b4c */

ulong fcn.00019b4c(int64_t arg1,int64_t arg2)

{
    ulong auStackX_8 [4];
    
    auStackX_8[0] = 0;
    (**(arg1 + 0x30))(arg1,3,arg2 & 0xffff,1,auStackX_8);
    return auStackX_8[0];
}


/* fcn.00035dd8 @ 0x35dd8 */

uint64_t fcn.00035dd8(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int iVar2;
    uint64_t uVar3;
    
    uVar1 = fcn.00019b80(arg1,arg2 & 0xffU);
    uVar3 = uVar1;
    iVar2 = arg2 & 0xffU;
    if (iVar2 == 0x4c) {
        if (uVar1 < 0x14) {
            uVar1 = 0x14;
            uVar3 = 0;
        }
        else {
            if (0x1c < uVar1) {
                uVar3 = 0x1c;
            }
            uVar1 = uVar3;
        }
    }
    else {
        if (iVar2 == 0x4d) {
            if (uVar1 < 0xc) {
                return 0xc;
            }
            if (uVar1 < 0x21) {
                return uVar3;
            }
            return 0x20;
        }
        uVar3 = iVar2 - 0x4eU;
        if (iVar2 - 0x4eU == 0) {
            if (uVar1 < 0xd) {
                uVar1 = 0xd;
            }
            else if (0x20 < uVar1) {
                uVar1 = 0x20;
            }
        }
    }
    return CONCAT71(uVar3 >> 8,uVar1);
}


