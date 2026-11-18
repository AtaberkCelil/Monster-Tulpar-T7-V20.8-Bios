// decompiled by r2ghidra: 0793_FboGroupForm.pe32
// functions: 62

/* entry0 @ 0x10370 */

void entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uStackX_8;
    int64_t var_bp_20h;
    int32_t var_bp_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.00010428(arg1,arg2);
    var_bp_10h = 0x7e07911a;
    var_ch = 0x4b0f4807;
    var_8h = 0x43f574a4;
    var_4h = -0x4bf856e4;
    if (*0x16440 == 0) {
        *0x16430 = *(arg2 + 0x60);
        *0x16438 = *(arg2 + 0x58);
        *0x16440 = arg2;
    }
    iVar1 = (**(*0x16430 + 0x50))(0x200,8,0x11ca0,arg1,&uStackX_8);
    if (-1 < iVar1) {
        (**(*0x16430 + 0xa8))(&var_bp_10h,uStackX_8,&var_bp_20h);
    }
    return;
}


/* fcn.00010428 @ 0x10428 */

void fcn.00010428(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x16420 = *(arg1 + 0x60);
    *0x16418 = arg1;
    fcn.000133e4();
    puVar4 = fcn.000133e4();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x0001047c:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010360();
                fcn.00010350();
                uVar2 = in(0x1808);
                fcn.00010330(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x00010320();
                }
                fcn.00010330(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010350();
                }
                else {
                    fcn.00010340();
                }
                return;
            }
            if ((*0x15af0 == *(puVar4 + 4)) && (*0x15af8 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x0001047c;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.000133e4 @ 0x133e4 */

int64_t fcn.000133e4(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x16428 == 0) {
        *0x16428 = 0;
        if (*(*0x16418 + 0x68) != 0) {
            piVar2 = *(*0x16418 + 0x70);
            do {
                if ((*0x15a70 == *piVar2) && (*0x15a78 == piVar2[1])) {
                    *0x16428 = (*(*0x16418 + 0x70))[uVar1 * 3 + 2];
                    return *0x16428;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x16418 + 0x68));
        }
    }
    return *0x16428;
}


/* fcn.00010360 @ 0x10360 */

uint64_t fcn.00010360(void)

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


/* fcn.00010350 @ 0x10350 */

void fcn.00010350(void)

{
    return;
}


/* fcn.00010330 @ 0x10330 */

uint64_t fcn.00010330(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010322 @ 0x10322 */

void fcn.00010322(void)

{
    return;
}


/* fcn.00010340 @ 0x10340 */

void fcn.00010340(void)

{
    return;
}


/* fcn.0001087c @ 0x1087c */

int64_t fcn.0001087c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t iVar2;
    char *pcVar3;
    int64_t iVar4;
    ulong uStackX_10;
    int64_t iStackX_20;
    uchar auStack_228 [528];
    
    uStackX_10 = 0x100;
    iVar2 = (**(*0x16430 + 0x140))(0x15a60,0,&iStackX_20);
    iVar4 = 0;
    if (-1 < iVar2) {
        cVar1 = *arg2;
        pcVar3 = arg2;
        while (cVar1 != '\0') {
            if (*pcVar3 == ';') {
                *pcVar3 = '\0';
                iVar2 = (**(iStackX_20 + 8))(iStackX_20,arg2,arg1,3,auStack_228,&uStackX_10,0);
                if (-1 < iVar2) {
                    cVar1 = *arg2;
                    iVar2 = iVar4;
                    while (cVar1 != '\0') {
                        iVar2 = iVar2 + 1;
                        cVar1 = *(arg2 + iVar2);
                    }
                    iVar2 = (**(*0x16430 + 0x40))(4,iVar2 + 1,arg3);
                    if (-1 < iVar2) {
                        cVar1 = *arg2;
                        iVar2 = iVar4;
                        while (cVar1 != '\0') {
                            iVar2 = iVar2 + 1;
                            cVar1 = *(arg2 + iVar2);
                        }
                        (**(*0x16430 + 0x160))(*arg3,arg2,iVar2 + 1);
                        iVar2 = iVar4;
                    }
                    *pcVar3 = ';';
                    return iVar2;
                }
                *pcVar3 = ';';
                arg2 = pcVar3 + 1;
            }
            pcVar3 = pcVar3 + 1;
            cVar1 = *pcVar3;
        }
        iVar2 = (**(iStackX_20 + 8))(iStackX_20,arg2,arg1,3,auStack_228,&uStackX_10,0);
        if (-1 < iVar2) {
            cVar1 = *arg2;
            iVar2 = iVar4;
            while (cVar1 != '\0') {
                iVar2 = iVar2 + 1;
                cVar1 = *(arg2 + iVar2);
            }
            iVar2 = (**(*0x16430 + 0x40))(4,iVar2 + 1,arg3);
            if (-1 < iVar2) {
                cVar1 = *arg2;
                while (cVar1 != '\0') {
                    iVar4 = iVar4 + 1;
                    cVar1 = *(arg2 + iVar4);
                }
                (**(*0x16430 + 0x160))(*arg3,arg2,iVar4 + 1);
                iVar2 = 0;
            }
        }
    }
    return iVar2;
}


/* fcn.00012464 @ 0x12464 */

void fcn.00012464(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00012658(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00012658 @ 0x12658 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00012658(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x000126b7;
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
code_r0x000126b7:
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
        uVar21 = fcn.0001589c(arg4,0xf4241);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.000156f8(arg4,0xf4241);
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
            pcVar8 = 0x15ec4;
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
code_r0x00012a72:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x15ec4;
            }
            else {
                pcVar8 = 0x15ec8;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x00012809:
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
                    goto code_r0x000129ac;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x000129c3;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x000129ac;
                        }
                        goto code_r0x000129c3;
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
code_r0x000129ac:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x00012809;
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
                        goto code_r0x00012809;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x000129c3;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x000129ac;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x000129c3:
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
                        fcn.000133c0(&var_68h_2,0x26,0,0x15e58);
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
                            goto code_r0x00012a72;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x00012c5b;
                        if (uStack_a8 == 0x58) goto code_r0x00012d50;
                        if (uStack_a8 == 0x61) goto code_r0x00012c64;
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
                            goto code_r0x000127ea;
                        }
                        if (uStack_a8 != 100) goto code_r0x000127e6;
                        goto code_r0x00012d67;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x15ec4;
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
                goto code_r0x00012f94;
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
                            iVar12 = 0x15f5b;
                            goto code_r0x00012d17;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x00012d17:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x00012f94;
                    }
                    fcn.000133c0(&var_68h_2,0x26,0,0x15ebc);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x00012c5b:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x00012c64:
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
                        goto code_r0x00012f94;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x000127e6;
                            goto code_r0x00012d54;
                        }
                        goto code_r0x00012d59;
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
                        goto code_r0x00012f94;
                    }
                    fcn.000133c0(&var_68h_2,0x26,0,0x15ea0);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x00012f94;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x00012d50:
            uVar21 = uVar21 | 0x20;
code_r0x00012d54:
            uVar21 = uVar21 | 0x80;
code_r0x00012d59:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x00012d67:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x00012da9;
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
code_r0x00012da9:
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
code_r0x00012e31:
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
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x00012e31;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar10 = uVar5;
            do {
                uVar6 = uVar10 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = "0123456789ABCDEFen-US"[uVar10 % uVar16];
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
code_r0x000127e6:
            pcVar8 = &uStack_a8;
code_r0x000127ea:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x00012f94:
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
                arg1 = fcn.00012494(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00012494(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
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
                arg1 = fcn.00012494(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
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
                arg1 = fcn.00012494(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
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


/* fcn.00014f14 @ 0x14f14 */

int64_t fcn.00014f14(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t arg1_00;
    int64_t noname_1;
    int64_t iVar2;
    
    if ((*0x16470 != 0) || (iVar1 = (**(*0x16430 + 0x140))(0x15b68,0,0x16470), -1 < iVar1)) {
        iVar1 = fcn.00013768();
        arg1_00 = fcn.00014d90(arg1);
        if (arg1_00 != 0) {
            iVar1 = fcn.00014c70(arg1_00,iVar1,0x16240,0x16240);
            if (iVar1 == 0) {
                iVar2 = -0x7ffffffffffffff2;
            }
            else {
                iVar2 = (**(*0x16470 + 8))(*0x16470,iVar1,arg1,arg2 & 0xffff,arg4,arg3,0);
                noname_1 = *0x16430;
                (**(*0x16430 + 0x48))(iVar1);
                if (iVar2 == -0x7fffffffffffffe0) {
                    iVar2 = fcn.00014e50(arg1_00,noname_1,arg1,arg2 & 0xffff);
                }
            }
            (**(*0x16430 + 0x48))(arg1_00);
            return iVar2;
        }
    }
    return -0x7ffffffffffffff2;
}


/* fcn.000106b8 @ 0x106b8 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.000106b8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    bool bVar2;
    bool bVar3;
    int64_t iVar4;
    uint64_t uVar5;
    char *pcStackX_20;
    int64_t var_48h;
    int64_t iStack_48;
    uint64_t uStack_40;
    ulong *puStack_38;
    char *pcStack_30;
    int64_t var_20h;
    uint32_t var_bp_18h;
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    pcStackX_20 = NULL;
    uStack_40 = 0;
    iStack_48 = 0;
    bVar2 = false;
    iVar4 = (**(*0x16430 + 0x140))(0x15a60,0,&puStack_38);
    if ((((-1 < iVar4) &&
         (iVar4 = (*puStack_38[3])(puStack_38,arg1,pcStackX_20,&uStack_40), iVar4 == -0x7ffffffffffffffb)) &&
        (iVar4 = (**(*0x16430 + 0x40))(4,uStack_40,&pcStackX_20), -1 < iVar4)) &&
       ((iVar4 = (*puStack_38[3])(puStack_38,arg1,pcStackX_20,&uStack_40), -1 < iVar4 &&
        (iVar4 = (**(*0x16430 + 0x40))(4,uStack_40,&iStack_48), -1 < iVar4)))) {
        pcStack_30 = pcStackX_20;
        bVar3 = true;
        do {
            for (uVar5 = 0; ((cVar1 = *pcStackX_20, cVar1 != ';' && (cVar1 != '\0')) && (uVar5 < uStack_40));
                uVar5 = uVar5 + 1) {
                *(uVar5 + iStack_48) = cVar1;
                pcStackX_20 = pcStackX_20 + 1;
            }
            *(uVar5 + iStack_48) = 0;
            if (*pcStackX_20 == '\0') {
                bVar2 = true;
            }
            if (bVar3) {
                iVar4 = (**puStack_38)(puStack_38,arg1,arg2,iStack_48,0,arg3,0);
                bVar3 = false;
            }
            else {
                iVar4 = (*puStack_38[2])(puStack_38,arg1,*arg2,iStack_48,arg3,0);
            }
            pcStackX_20 = pcStackX_20 + 1;
        } while (!bVar2);
        (**(*0x16430 + 0x48))(iStack_48);
        (**(*0x16430 + 0x48))(pcStack_30);
    }
    return iVar4;
}


/* fcn.0001230c @ 0x1230c */

void fcn.0001230c(int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_10 [3];
    
    iVar1 = (**(*0x16430 + 0x140))(0x15a50,0,aiStackX_10);
    if (-1 < iVar1) {
        *0x16410 = fcn.0001347c(*0x15ae8);
        iVar1 = (**(aiStackX_10[0] + 0x20))(aiStackX_10[0],arg1,0x15ae8,*0x16410);
        if (iVar1 == -0x7ffffffffffffffb) {
            (**(*0x16430 + 0x48))(*0x16410);
            *0x16410 = fcn.0001347c(*0x15ae8);
            if (*0x16410 != 0) {
                (**(aiStackX_10[0] + 0x20))(aiStackX_10[0],arg1,0x15ae8,*0x16410);
            }
        }
    }
    return;
}


/* fcn.0001347c @ 0x1347c */

int64_t fcn.0001347c(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.00013450(arg1);
    if (iVar1 != 0) {
        (**(*0x16430 + 0x168))(iVar1,arg1,0);
    }
    return iVar1;
}


/* fcn.00013450 @ 0x13450 */

ulong fcn.00013450(int64_t arg1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    (**(*0x16430 + 0x40))(4,arg1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.000123b8 @ 0x123b8 */

ushort fcn.000123b8(void)

{
    uint8_t *puVar1;
    uint32_t *puVar2;
    char *pcVar3;
    uint32_t uVar4;
    char *pcVar5;
    uint32_t *puVar6;
    char cVar7;
    uint32_t uVar8;
    
    uVar8 = 0;
    if ((*0x16410 != 0) && (uVar4 = 0x14, 0x14 < *(*0x16410 + 0x10))) {
        do {
            puVar2 = uVar4 + *0x16410;
            if (*(puVar2 + 3) == '\x02') {
                puVar6 = puVar2 + 1;
                do {
                    if (*puVar6 == '$') {
                        pcVar3 = puVar6 + 0x16;
                        cVar7 = 'F';
                        pcVar5 = 0x15ca8;
                        do {
                            if (cVar7 != *pcVar3) break;
                            pcVar5 = pcVar5 + 1;
                            pcVar3 = pcVar3 + 1;
                            cVar7 = *pcVar5;
                        } while (cVar7 != '\0');
                        if (*pcVar5 == *pcVar3) {
                            return *(puVar6 + 0x12);
                        }
                    }
                    puVar1 = puVar6 + 1;
                    puVar6 = puVar6 + (*puVar1 & 0x7f);
                    uVar8 = uVar8 + (*puVar1 & 0x7f);
                    if ((*puVar6 & 0x7f00) == 0) {
                        return 0;
                    }
                    if ((*puVar2 & 0xffffff) <= uVar8) {
                        return 0;
                    }
                } while( true );
            }
        } while ((*(puVar2 + 3) != -0x21) && (uVar4 = uVar4 + (*puVar2 & 0xffffff), uVar4 < *(*0x16410 + 0x10)));
    }
    return 0;
}


/* fcn.00013630 @ 0x13630 */

int64_t fcn.00013630(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t *in_stack_00000028;
    
    if (*in_stack_00000028 == 0) {
        *arg4 = 0;
    }
    iVar1 = (**(*0x16438 + 0x48))();
    if ((iVar1 < 0) && (iVar1 == -0x7ffffffffffffffb)) {
        if (*in_stack_00000028 != 0) {
            (**(*0x16430 + 0x48))();
        }
        iVar1 = fcn.00013450(*arg4);
        *in_stack_00000028 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x16438 + 0x48))(arg1,arg2,arg3,arg4,iVar1);
        }
    }
    return iVar1;
}


/* fcn.00015980 @ 0x15980 */

int64_t fcn.00015980(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00010ddc @ 0x10ddc */

//WARNING: Variable defined which should be unmapped: var_10h

void fcn.00010ddc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint16_t uVar3;
    uint64_t uVar4;
    int64_t aiStackX_10 [2];
    ulong uStackX_20;
    ushort in_stack_00000028;
    unkbyte6 in_stack_0000002a;
    int64_t var_48h;
    int64_t var_58h;
    int64_t var_10h;
    
    uVar4 = CONCAT62(in_stack_0000002a,in_stack_00000028) + arg2;
    for (; arg2 < uVar4; arg2 = arg2 + *(arg2 + 4) + 4) {
        uVar3 = 0;
        if ((*(arg2 + 4) - 2 & 0xfffffffffffffffe) != 0) {
            uVar2 = 0;
            do {
                in_stack_00000028 = 0;
                uStackX_20 = 0;
                aiStackX_10[0] = 0;
                iVar1 = fcn.00014f14(arg1,*(arg2 + 6U + uVar2 * 2),&uStackX_20,0);
                if ((((iVar1 != -0x7ffffffffffffffb) ||
                     ((iVar1 = (**(*0x16430 + 0x40))(4,uStackX_20,aiStackX_10), -1 < iVar1 &&
                      (iVar1 = fcn.00014f14(arg1,*(arg2 + 6U + uVar2 * 2),&uStackX_20,aiStackX_10[0]), -1 < iVar1)))
                     ) && (-1 < iVar1)) &&
                   ((iVar1 = fcn.000106b8(arg3,&stack0x00000028,aiStackX_10[0]), -1 < iVar1 &&
                    (*(arg4 + 6 + uVar2 * 2) = in_stack_00000028, aiStackX_10[0] != 0)))) {
                    (**(*0x16430 + 0x48))();
                }
                uVar3 = uVar3 + 1;
                uVar2 = uVar3;
            } while (uVar2 < *(arg2 + 4) - 2 >> 1);
        }
        arg4 = arg4 + 4 + *(arg4 + 4);
    }
    return;
}


/* fcn.000104f0 @ 0x104f0 */

uint16_t fcn.000104f0(int64_t arg1)

{
    uint16_t uVar1;
    uint16_t uVar2;
    
    uVar2 = 0;
    if (**0x163e8 != 0) {
        uVar1 = **0x163e8;
        do {
            if (uVar1 == arg1) {
                return uVar2;
            }
            uVar2 = uVar2 + 1;
            uVar1 = (*0x163e8)[uVar2 * 5];
        } while (uVar1 != 0);
    }
    return 0xffff;
}


/* fcn.00010a2c @ 0x10a2c */

int16_t fcn.00010a2c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    bool bVar2;
    char *arg2_00;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int16_t aiStackX_18 [4];
    char *pcStackX_20;
    int64_t var_180h;
    int64_t var_390h;
    int16_t var_5f0h;
    int64_t var_5f8h;
    ulong *puStack_698;
    char *pcStack_690;
    uint64_t auStack_688 [4];
    uchar auStack_668 [528];
    uchar auStack_458 [528];
    uchar auStack_248 [528];
    
    pcStackX_20 = NULL;
    pcStack_690 = NULL;
    auStack_688[0] = 0;
    aiStackX_18[0] = 0;
    bVar2 = false;
    auStack_688[1] = 0;
    iVar3 = (**(*0x16430 + 0x140))(0x15a60,0,&puStack_698);
    if ((((-1 < iVar3) &&
         (iVar3 = (*puStack_698[3])(puStack_698,arg1,pcStackX_20,auStack_688), iVar3 == -0x7ffffffffffffffb)) &&
        (iVar3 = (**(*0x16430 + 0x40))(4,auStack_688[0],&pcStackX_20), -1 < iVar3)) &&
       (iVar3 = (*puStack_698[3])(puStack_698,arg1,pcStackX_20,auStack_688), -1 < iVar3)) {
        iVar3 = (**(*0x16430 + 0x40))(4,auStack_688[0],&pcStack_690);
        arg2_00 = pcStackX_20;
        if (-1 < iVar3) {
            do {
                uVar4 = 0;
                for (uVar5 = 0; ((cVar1 = *pcStackX_20, cVar1 != ';' && (cVar1 != '\0')) && (uVar5 < auStack_688[0]));
                    uVar5 = uVar5 + 1) {
                    pcStack_690[uVar4] = cVar1;
                    uVar4 = uVar4 + 1;
                    pcStackX_20 = pcStackX_20 + 1;
                }
                pcStack_690[uVar4] = '\0';
                if (*pcStackX_20 == '\0') {
                    bVar2 = true;
                }
                if ((*pcStack_690 == 'x') && (pcStack_690[1] == '-')) {
code_r0x00010ba8:
                    pcStackX_20 = pcStackX_20 + 1;
                }
                else {
                    auStack_688[1] = 0x100;
                    iVar3 = (*puStack_698[1])(puStack_698,pcStack_690,arg1,3,auStack_668,auStack_688 + 1,0);
                    if (iVar3 < 0) {
                        auStack_688[2] = 0;
                        iVar3 = fcn.0001087c(arg1,arg2_00,auStack_688 + 2);
                        if (-1 < iVar3) {
                            iVar3 = (*puStack_698[1])(puStack_698,auStack_688[2],arg1,3,auStack_668,auStack_688 + 1
                                                      ,0);
                            (**(*0x16430 + 0x48))(auStack_688[2]);
                            if (-1 < iVar3) goto code_r0x00010c6b;
                        }
                        goto code_r0x00010ba8;
                    }
code_r0x00010c6b:
                    fcn.00012464(auStack_458,0x202,auStack_668,arg2 & 0xffff);
                    if (aiStackX_18[0] == 0) {
                        iVar3 = (**puStack_698)(puStack_698,arg1,aiStackX_18,pcStack_690,0,auStack_458,0);
                    }
                    else {
                        iVar3 = (*puStack_698[2])(puStack_698,arg1,aiStackX_18[0],pcStack_690,auStack_458,0);
                    }
                    pcStackX_20 = pcStackX_20 + 1;
                    if (iVar3 < 0) {
                        (**(*0x16430 + 0x48))(arg2_00);
                        goto code_r0x00010dbb;
                    }
                }
            } while (!bVar2);
            fcn.00012464(auStack_248,0x202,0x15c80,(arg3 & 0xffffU) + 400);
            iVar3 = (*puStack_698[2])(puStack_698,arg1,aiStackX_18[0],0x15c90,auStack_248,0);
            if (iVar3 < 0) {
                (*puStack_698[2])(puStack_698,arg1,aiStackX_18[0],0x15c98,auStack_248,0);
            }
            if (arg2_00 != NULL) {
                (**(*0x16430 + 0x48))(arg2_00);
            }
            if (pcStack_690 != NULL) {
                (**(*0x16430 + 0x48))();
            }
            goto code_r0x00010dbf;
        }
    }
code_r0x00010dbb:
    aiStackX_18[0] = 0;
code_r0x00010dbf:
    return aiStackX_18[0];
}


/* fcn.00012250 @ 0x12250 */

ulong fcn.00012250(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int16_t arg_30h)

{
    ushort var_30h;
    int16_t var_2eh;
    int16_t var_2ch;
    ushort var_2ah;
    int16_t var_28h;
    int16_t var_26h;
    int16_t var_24h;
    int64_t var_22h;
    int64_t var_1ah;
    int64_t var_12h;
    
    var_2ah = arg4;
    var_2eh = arg_30h;
    var_2ch = 4;
    var_26h = arg3;
    var_22h = 0;
    var_1ah = 0;
    var_12h = 0;
    var_28h = arg2;
    var_30h = 0xa605;
    var_24h = 0x1004;
    (**(*0x16430 + 0x160))(*arg1,&var_30h,0x26);
    *arg1 = *arg1 + 0x26;
    return 0;
}


/* fcn.000122c4 @ 0x122c4 */

ulong fcn.000122c4(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    ushort uStack_28;
    ushort uStack_26;
    ushort uStack_24;
    uchar uStack_22;
    
    uStack_26 = arg3;
    uStack_24 = 0;
    uStack_22 = arg2;
    uStack_28 = 0x1c09;
    (**(*0x16430 + 0x160))(*arg1,&uStack_28,0x1c);
    *arg1 = *arg1 + 0x1c;
    return 0;
}


/* fcn.00011fb4 @ 0x11fb4 */

int64_t fcn.00011fb4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    bool bVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint32_t uVar6;
    int64_t iVar7;
    int iVar8;
    uint32_t uStackY_84;
    int iStackY_80;
    int64_t iVar9;
    uint32_t uVar10;
    uint32_t in_stack_ffffffffffffff94;
    uint32_t in_stack_ffffffffffffff98;
    uint32_t arg_70h;
    int64_t iStack_60;
    ulong uStack_58;
    int64_t iStack_50;
    
    (**(*0x16430 + 0x140))(0x15a50,0,&iStack_60);
    iVar9 = 0;
    iVar3 = (**(iStack_60 + 0x20))(iStack_60,arg1,&stack0xffffffffffffff88,0);
    iVar7 = 0;
    if (iVar3 == -0x7ffffffffffffffb) {
        iVar3 = fcn.0001347c(iVar9);
        iVar4 = (**(iStack_60 + 0x20))(iStack_60,arg1,&stack0xffffffffffffff88,iVar3);
        iVar7 = iVar3;
        if (iVar4 < 0) goto code_r0x0001222f;
    }
    iVar9 = iVar9 + *(arg4 + 4);
    iVar3 = fcn.0001347c(iVar9);
    if (iVar3 == 0) {
        return -0x7ffffffffffffff7;
    }
    iStack_50 = iVar3;
    (**(*0x16430 + 0x160))(iVar3,iVar7,0x14);
    iStackY_80 = 0;
    iVar3 = iVar3 + 0x14;
    bVar1 = false;
    while( true ) {
        uVar10 = 0;
        iVar8 = 0;
        uVar6 = 0x14;
        (**(*0x16430 + 0x160))(&uStackY_84,iVar7 + 0x10,4);
        iVar2 = iStackY_80;
        arg_70h = in_stack_ffffffffffffff98;
        if (uStackY_84 < 0x15) break;
        do {
            iVar4 = uVar6 + iVar7;
            (**(*0x16430 + 0x160))(&stack0xffffffffffffff90,iVar4,4);
            if (iVar8 == iVar2) break;
            iVar8 = iVar8 + 1;
            uVar6 = uVar6 + (uVar10 & 0xffffff);
        } while (uVar6 < uStackY_84);
        if (uStackY_84 <= uVar6) break;
        uVar6 = uVar10 & 0xffffff;
        (**(*0x16430 + 0x160))(&stack0xffffffffffffff94,iVar4,4);
        in_stack_ffffffffffffff98 = arg_70h;
        if (((in_stack_ffffffffffffff94 & 0xff000000) != 0x2000000) || (bVar1)) {
code_r0x000121c1:
            (**(*0x16430 + 0x160))(iVar3,iVar4,uVar6);
        }
        else {
            iVar5 = fcn.00011ce0(arg2 & 0xffff,iVar4,uVar6,arg3 & 0xffff,iVar9,
                                 CONCAT44(in_stack_ffffffffffffff94,uVar10),arg_70h);
            in_stack_ffffffffffffff98 = arg_70h;
            if (iVar5 < 0) goto code_r0x000121c1;
            bVar1 = true;
            (**(*0x16430 + 0x160))(iVar3,uStack_58,arg_70h);
            (**(*0x16430 + 0x48))(uStack_58);
            uVar6 = arg_70h;
        }
        iVar3 = iVar3 + uVar6;
        iStackY_80 = iStackY_80 + 1;
    }
    iVar3 = iStack_50;
    (**(*0x16430 + 0x160))(iStack_50 + 0x10,&stack0xffffffffffffff88,4);
    (**(*0x16430 + 0x48))(iVar7);
    iVar4 = (**(iStack_60 + 0x10))(iStack_60,arg1,iVar3);
code_r0x0001222f:
    (**(*0x16430 + 0x48))(iVar3);
    return iVar4;
}


/* fcn.00010f28 @ 0x10f28 */

//WARNING: Variable defined which should be unmapped: var_fh
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h

int64_t fcn.00010f28(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    int16_t arg_30h;
    int64_t iVar4;
    uint32_t *arg1_00;
    uint32_t *puVar5;
    uint64_t arg2_00;
    int iVar6;
    uint32_t *puVar7;
    uint16_t *puVar8;
    int16_t iVar9;
    uint64_t uVar10;
    uint16_t uVar11;
    uint32_t *puVar12;
    uint32_t *puVar13;
    int64_t var_fh;
    int64_t var_17h;
    ushort auStackX_18 [8];
    int64_t var_77h;
    int64_t iStack_90;
    int64_t in_stack_ffffffffffffff78;
    uint32_t *puVar14;
    uint64_t uStack_80;
    uint32_t *puStack_78;
    int64_t iStack_70;
    uint32_t *puStack_68;
    uint32_t *puStack_60;
    int64_t iStack_58;
    uchar auStack_50 [4];
    int iStack_4c;
    uchar auStack_48 [7];
    int16_t var_39h;
    int64_t var_31h;
    int64_t var_29h;
    uint32_t var_21h;
    int64_t var_19h;
    int64_t var_11h;
    int64_t var_9h;
    int64_t var_1h;
    
    arg1_00 = NULL;
    iStack_90 = 0;
    uStack_80 = 0;
    puStack_78 = NULL;
    iStack_70 = 0;
    fcn.0001230c(arg2);
    uVar2 = fcn.000123b8();
    if (uVar2 != 0xffff) {
        if (*0x16410 != 0) {
            (**(*0x16430 + 0x48))();
        }
        if ((*0x163e8 != 0) && (*0x163e0 != NULL)) {
            iVar4 = fcn.00013630(0x15cb8,0x15a80,0,&iStack_90);
            puVar5 = arg1_00;
            puVar12 = arg1_00;
            if (-1 < iVar4) {
                iVar4 = fcn.00013630(0x15ce8,0x15a80,0,&uStack_80);
                if (-1 < iVar4) {
                    arg1_00 = NULL;
                    puVar5 = NULL;
                    if (6 < uStack_80) {
                        arg1_00 = fcn.0001347c(iStack_90);
                        puStack_68 = arg1_00;
                        puVar5 = fcn.0001347c(0x2838);
                        puStack_60 = puVar5;
                        if ((puVar5 != NULL) && (arg1_00 != NULL)) {
                            fcn.00015980(arg1_00,iStack_70,iStack_90);
                            fcn.00010ddc(arg1,iStack_70,arg2,arg1_00,in_stack_ffffffffffffff78);
                            puVar12 = puStack_78;
                            if (puStack_78 < uStack_80 + puStack_78) {
                                puVar8 = *0x163e0;
                                puVar13 = puStack_78;
code_r0x0001109f:
                                uVar1 = *puVar13;
                                if (uVar1 != 0xff) {
                                    uVar3 = fcn.000104f0(uVar1 & 0xffff);
                                    if (uVar3 != 0xffff) {
                                        iStack_58 = uVar3 * 5;
                                        uVar11 = 0;
                                        if (*(*0x163e8 + 4 + uVar3 * 10) != 0) {
                                            puVar7 = arg1_00;
                                            if (arg1_00 < arg1_00 + iStack_90) {
                                                do {
                                                    if (*puVar7 == uVar1) break;
                                                    puVar7 = puVar7 + puVar7[1] + 4;
                                                } while (puVar7 < arg1_00 + iStack_90);
                                            }
                                            if (puVar7 < arg1_00 + iStack_90 * 2) {
                                                uVar10 = 0;
                                                if (*puVar8 != 0) {
                                                    uVar3 = *puVar8;
                                                    do {
                                                        iVar9 = uVar10;
                                                        if (uVar3 == *puVar7) {
                                                            if (iVar9 != -1) {
                                                                puVar14 = puVar5;
                                                                _auStack_48 = puVar5;
                                                                if ((puVar13[1] - 2 & 0xfffffffffffffffe) != 0)
                                                                goto code_r0x0001118a;
                                                                goto code_r0x00011295;
                                                            }
                                                            break;
                                                        }
                                                        uVar10 = iVar9 + 1;
                                                        uVar3 = *(uVar10 * 7 + puVar8);
                                                    } while (uVar3 != 0);
                                                }
                                            }
                                        }
                                    }
                                }
                                goto code_r0x000112eb;
                            }
                            goto code_r0x0001130d;
                        }
                    }
                }
                puVar12 = puStack_78;
            }
code_r0x0001130d:
            (**(*0x16430 + 0x48))(puVar5);
            (**(*0x16430 + 0x48))(puVar12);
            (**(*0x16430 + 0x48))(iStack_70);
            (**(*0x16430 + 0x48))(arg1_00);
            return iVar4;
        }
    }
    return -0x7ffffffffffffff2;
code_r0x0001118a:
    do {
        puVar14 = puVar5;
        if (0x11 < uVar11) break;
        iVar6 = (iVar9 << 3) + uVar10;
        uVar3 = iVar6 * 2 + uVar11;
        uVar11 = uVar11 + 1;
        arg_30h = fcn.00010a2c(arg2,uVar11,uVar3);
        arg2_00 = uVar2;
        fcn.00012250(&stack0xffffffffffffff78,arg2_00,uVar3,CONCAT22(iVar6 >> 0x10,uVar3) + 0x2200,arg_30h);
        uVar3 = 0;
        if ((puVar7[1] - 2 & 0xfffffffffffffffe) != 0) {
            do {
                if (0x11 < uVar3) break;
                fcn.000122c4(&stack0xffffffffffffff78,arg2_00,uVar3,*(puVar7 + uVar3 * 2 + 6));
                uVar3 = uVar3 + 1;
            } while (uVar3 < puVar7[1] - 2 >> 1);
        }
        fcn.000122c4(&stack0xffffffffffffff78,arg2_00,0x12,2);
        auStackX_18[0] = 0x229;
        (**(*0x16430 + 0x160))(puVar5,auStackX_18,2);
        puVar5 = puVar5 + 2;
        puVar14 = puVar5;
    } while (uVar11 < puVar13[1] - 2 >> 1);
    arg1_00 = puStack_68;
    puVar5 = puStack_60;
    puVar12 = puStack_78;
code_r0x00011295:
    iStack_4c = puVar14 - puVar5;
    iVar4 = fcn.00011fb4(arg2,*(*0x163e8 + 4 + iStack_58 * 2),*(*0x163e8 + 6 + iStack_58 * 2),auStack_50);
    (**(*0x16438 + 0x58))(L"FixedGfHiiLegacyDevData",0x15a80,2,iStack_90,arg1_00);
    puVar8 = *0x163e0;
code_r0x000112eb:
    puVar13 = puVar13 + puVar13[1] + 4;
    if (uStack_80 + puVar12 <= puVar13) goto code_r0x0001130d;
    goto code_r0x0001109f;
}


/* fcn.0001136c @ 0x1136c */

//WARNING: Variable defined which should be unmapped: var_fh
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h

int64_t fcn.0001136c(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint16_t uVar2;
    int16_t arg_30h;
    uint32_t uVar3;
    int64_t iVar4;
    uint32_t *arg1_00;
    uint32_t *puVar5;
    uint64_t uVar6;
    int16_t iVar7;
    uint32_t *puVar8;
    int iVar9;
    uint16_t *puVar10;
    int16_t iVar11;
    uint64_t uVar12;
    uint32_t *puVar13;
    uint32_t *puVar14;
    int64_t var_fh;
    int64_t var_17h;
    ushort auStackX_18 [4];
    uint16_t uStackX_20;
    int64_t var_77h;
    int16_t var_7fh;
    int64_t iStack_90;
    int64_t in_stack_ffffffffffffff78;
    uint32_t *puVar15;
    uint64_t uStack_80;
    uint32_t *puStack_78;
    int64_t iStack_70;
    uint32_t *puStack_68;
    uint32_t *puStack_60;
    int64_t iStack_58;
    uchar auStack_50 [4];
    int iStack_4c;
    uchar auStack_48 [7];
    int16_t var_39h;
    int64_t var_31h;
    int64_t var_29h;
    uint32_t var_21h;
    int64_t var_19h;
    int64_t var_11h;
    int64_t var_9h;
    int64_t var_1h;
    
    arg1_00 = NULL;
    iStack_90 = 0;
    uStack_80 = 0;
    puStack_78 = NULL;
    iStack_70 = 0;
    fcn.0001230c(arg2);
    uVar1 = fcn.000123b8();
    if (uVar1 != 0xffff) {
        if (*0x16410 != 0) {
            (**(*0x16430 + 0x48))();
        }
        if ((*0x163e8 != 0) && (*0x163f8 != NULL)) {
            iVar4 = fcn.00013630(0x15d40,0x15a80,0,&iStack_90);
            puVar5 = arg1_00;
            puVar13 = arg1_00;
            if (-1 < iVar4) {
                iVar4 = fcn.00013630(0x15d68,0x15a80,0,&uStack_80);
                if ((-1 < iVar4) && (arg1_00 = NULL, puVar5 = NULL, 6 < uStack_80)) {
                    arg1_00 = fcn.0001347c(iStack_90);
                    puStack_68 = arg1_00;
                    puVar5 = fcn.0001347c(0x2838);
                    puStack_60 = puVar5;
                    if ((puVar5 != NULL) && (arg1_00 != NULL)) {
                        fcn.00015980(arg1_00,iStack_70,iStack_90);
                        fcn.00010ddc(arg1,iStack_70,arg2,arg1_00,in_stack_ffffffffffffff78);
                        puVar13 = puStack_78;
                        if (puStack_78 < uStack_80 + puStack_78) {
                            puVar10 = *0x163f8;
                            puVar14 = puStack_78;
code_r0x000114e3:
                            uVar3 = *puVar14;
                            uVar2 = fcn.000104f0(uVar3);
                            if ((uVar2 != 0xffff) && (iStack_58 = uVar2 * 5, *(*0x163e8 + 4 + uVar2 * 10) != 0)) {
                                for (puVar8 = arg1_00; (puVar8 < arg1_00 + iStack_90 && (*puVar8 != uVar3));
                                    puVar8 = puVar8 + puVar8[1] + 4) {
                                }
                                if ((puVar8 < arg1_00 + iStack_90) && (uVar12 = 0, *puVar10 != 0)) {
                                    uVar2 = *puVar10;
                                    do {
                                        iVar11 = uVar12;
                                        if (uVar2 == *puVar8) {
                                            if (iVar11 != -1) {
                                                puVar15 = puVar5;
                                                _auStack_48 = puVar5;
                                                if ((puVar14[1] - 2 & 0xfffffffffffffffc) == 0) goto code_r0x000116ec;
                                                uVar6 = 0;
                                                goto code_r0x000115b8;
                                            }
                                            break;
                                        }
                                        uVar12 = iVar11 + 1;
                                        uVar2 = *(uVar12 * 7 + puVar10);
                                    } while (uVar2 != 0);
                                }
                            }
                            goto code_r0x00011742;
                        }
                        goto code_r0x00011764;
                    }
                }
                puVar13 = puStack_78;
            }
code_r0x00011764:
            (**(*0x16430 + 0x48))(puVar5);
            (**(*0x16430 + 0x48))(puVar13);
            (**(*0x16430 + 0x48))(iStack_70);
            (**(*0x16430 + 0x48))(arg1_00);
            return iVar4;
        }
    }
    return -0x7ffffffffffffff2;
code_r0x000115b8:
    do {
        uVar2 = uVar6;
        puVar15 = puVar5;
        if (0x11 < uVar2) break;
        iVar7 = iVar11 * 0x12 + uVar2;
        uVar3 = uVar6 + 1;
        uStackX_20 = uVar3;
        arg_30h = fcn.00010a2c(arg2,uVar3 & 0xffff,iVar7 + 0x144);
        iVar9 = uVar12 + 0x12;
        uVar6 = uVar1;
        fcn.00012250(&stack0xffffffffffffff78,uVar6,CONCAT22(iVar9 >> 0x10,iVar9 * 0x12 + uVar2),iVar7 + 0x2344,
                     arg_30h);
        uVar2 = 0;
        if ((puVar8[1] - 2 & 0xfffffffffffffffe) != 0) {
            do {
                if (0x11 < uVar2) break;
                fcn.000122c4(&stack0xffffffffffffff78,uVar6,uVar2,*(puVar8 + uVar2 * 2 + 6));
                uVar2 = uVar2 + 1;
            } while (uVar2 < puVar8[1] - 2 >> 1);
        }
        fcn.000122c4(&stack0xffffffffffffff78,uVar6,0x12,2);
        auStackX_18[0] = 0x229;
        (**(*0x16430 + 0x160))(puVar5,auStackX_18,2);
        puVar5 = puVar5 + 2;
        uVar6 = uStackX_20;
        puVar15 = puVar5;
    } while (uVar6 < puVar14[1] - 2 >> 2);
    arg1_00 = puStack_68;
    puVar5 = puStack_60;
    puVar13 = puStack_78;
code_r0x000116ec:
    iStack_4c = puVar15 - puVar5;
    iVar4 = fcn.00011fb4(arg2,*(*0x163e8 + 4 + iStack_58 * 2),*(*0x163e8 + 6 + iStack_58 * 2),auStack_50);
    (**(*0x16438 + 0x58))(L"FixedGfHiiUefiDevData",0x15a80,2,iStack_90,arg1_00);
    puVar10 = *0x163f8;
code_r0x00011742:
    puVar14 = puVar14 + puVar14[1] + 4;
    if (uStack_80 + puVar13 <= puVar14) goto code_r0x00011764;
    goto code_r0x000114e3;
}


/* fcn.00015058 @ 0x15058 */

int64_t fcn.00015058(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t noname_0;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iStackX_20 = 0;
    iStackX_18 = arg3;
    if (((*0x16450 == 0) && (iVar1 = (**(*0x16430 + 0x140))(0x15b98,0,0x16450), iVar1 < 0)) ||
       ((*0x16458 == 0 && (iVar1 = (**(*0x16430 + 0x140))(0x15b78,0,0x16458), iVar1 < 0)))) {
        iVar2 = -0x7ffffffffffffff2;
    }
    else {
        iVar2 = (**(*0x16450 + 8))(*0x16450,&iStackX_20,0,1,0x15ac8,0x15e00);
        iVar1 = iStackX_20;
        if (iVar2 == -0x7ffffffffffffffb) {
            noname_0 = fcn.00013450(iStackX_20 + 0x70);
            iVar1 = fcn.00012464(noname_0,iVar1 + 0x70,0x16360,0x15bc0);
            iVar2 = (**(*0x16450 + 8))(*0x16450,&iStackX_20,noname_0 + iVar1 * 2,1,0x15ac8,0x15e00);
            if (-1 < iVar2) {
                iStackX_20 = *arg1;
                iVar2 = (**(*0x16458 + 0x20))(*0x16458,noname_0,arg2,arg1,&iStackX_18);
                *arg1 = iStackX_20;
            }
            (**(*0x16430 + 0x48))(noname_0);
        }
    }
    return iVar2;
}


/* fcn.00010534 @ 0x10534 */

ulong fcn.00010534(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    bool bVar2;
    int iVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    char *pcVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    
    uVar4 = arg3 & 0xff;
    bVar2 = false;
    uVar9 = arg4 & 0xff;
    uVar1 = *(uVar4 + arg2);
    uVar5 = *(uVar4 + arg1);
    if (uVar1 == 0x12) {
        if (uVar5 != 0) {
            uVar6 = (arg4 & 0xff) - 1;
            if ((uVar5 == uVar6) && (uVar7 = uVar6, uVar7 != 0)) {
                do {
                    uVar10 = 0;
                    if (uVar9 != 0) {
                        do {
                            if ((uVar10 != uVar4) && (uVar7 == *(uVar10 + arg1))) {
                                bVar2 = true;
                                break;
                            }
                            uVar10 = uVar10 + 1;
                        } while (uVar10 < uVar9);
                    }
                } while ((uVar10 != uVar9) && (uVar7 = uVar7 - 1, uVar7 != 0));
                goto code_r0x000105f6;
            }
            goto code_r0x00010602;
        }
        uVar7 = 0;
        iVar3 = (arg4 & 0xff) - 1;
        if (iVar3 != 0) {
            do {
                uVar10 = 0;
                if (uVar9 != 0) {
                    do {
                        if ((uVar10 != uVar4) && (uVar7 == *(uVar10 + arg1))) {
                            bVar2 = true;
                            break;
                        }
                        uVar10 = uVar10 + 1;
                    } while (uVar10 < uVar9);
                }
            } while ((uVar10 != uVar9) && (uVar7 = uVar7 + 1, uVar7 < iVar3));
code_r0x000105f6:
            if (bVar2) {
                uVar5 = uVar7;
                *(uVar4 + arg1) = uVar5;
            }
            goto code_r0x00010602;
        }
    }
    else {
code_r0x00010602:
        if (uVar1 == uVar5) {
            return 0;
        }
        if (uVar1 != 0x12) {
            uVar7 = uVar4;
            if (uVar5 == 0x12) {
                while (uVar4 = uVar4 + 1, uVar4 < uVar9) {
                    if (*(uVar4 + arg1) != '\x12') {
                        *(uVar7 + arg1) = *(uVar4 + arg1);
                        *(uVar4 + arg1) = 0x12;
                        uVar7 = uVar4;
                    }
                }
            }
            else {
                uVar7 = 0;
                if (uVar9 == 0) {
                    return 0;
                }
                do {
                    if ((uVar7 != uVar4) && (uVar5 == *(uVar7 + arg1))) {
                        *(uVar7 + arg1) = uVar1;
                    }
                    uVar7 = uVar7 + 1;
                } while (uVar7 < uVar9);
            }
            goto code_r0x0001068b;
        }
    }
    uVar7 = 0;
    if (uVar4 != 0) {
        pcVar8 = arg1;
        do {
            if (pcVar8[arg2 - arg1] == uVar5) {
code_r0x0001063d:
                *(uVar4 + arg1) = 0x12;
                break;
            }
            if (*pcVar8 == '\x12') {
                *(uVar7 + arg1) = uVar5;
                goto code_r0x0001063d;
            }
            uVar7 = uVar7 + 1;
            pcVar8 = pcVar8 + 1;
        } while (uVar7 < uVar4);
    }
code_r0x0001068b:
    if (uVar9 != 0) {
        arg1 = arg1 - arg2;
        do {
            *arg2 = *(arg2 + arg1);
            arg2 = arg2 + 1;
            uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
    }
    return 0;
}


/* fcn.000151dc @ 0x151dc */

int64_t fcn.000151dc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int16_t *piVar2;
    int64_t iVar3;
    int64_t arg1_00;
    uint32_t uVar4;
    int16_t *piStackX_18;
    uint64_t uStackX_20;
    uchar auStack_48 [16];
    
    uStackX_20 = 0;
    piStackX_18 = arg3;
    if (((*0x16450 == 0) && (iVar3 = (**(*0x16430 + 0x140))(0x15b98,0,0x16450), iVar3 < 0)) ||
       ((*0x16458 == 0 && (iVar3 = (**(*0x16430 + 0x140))(0x15b78,0,0x16458), iVar3 < 0)))) {
        iVar3 = -0x7ffffffffffffff2;
    }
    else {
        iVar3 = (**(*0x16450 + 8))(*0x16450,&uStackX_20,0,1,0x15ac8,0x15e00);
        if (iVar3 == -0x7ffffffffffffffb) {
            iVar3 = uStackX_20 + 0x70;
            arg1_00 = fcn.00013450(iVar3);
            iVar3 = fcn.00012464(arg1_00,iVar3,0x16360,0x15bc0);
            iVar3 = (**(*0x16450 + 8))(*0x16450,&uStackX_20,arg1_00 + iVar3 * 2,1,0x15ac8,0x15e00);
            if (iVar3 < 0) {
                (**(*0x16430 + 0x48))();
            }
            else {
                fcn.00013b70(arg1_00);
                iVar3 = (**(*0x16458 + 0x18))(*0x16458,arg1_00,arg2,arg1,&piStackX_18,auStack_48);
                if (-1 < iVar3) {
                    uVar4 = 2;
                    iVar1 = *piStackX_18;
                    piVar2 = piStackX_18;
                    while (iVar1 != 0) {
                        piVar2 = piVar2 + 1;
                        uVar4 = uVar4 + 2;
                        iVar1 = *piVar2;
                    }
                    uStackX_20 = uVar4;
                    iVar3 = (**(*0x16450 + 8))(*0x16450,&uStackX_20,piStackX_18,0,0x15ac8,0x15e00);
                    (**(*0x16430 + 0x48))(piStackX_18);
                }
                (**(*0x16430 + 0x48))(arg1_00);
            }
        }
    }
    return iVar3;
}


/* fcn.000153f8 @ 0x153f8 */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.000153f8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    int64_t *arg3_00;
    int64_t iStackX_10;
    int64_t var_28h_2;
    int64_t var_38h;
    int64_t *piVar5;
    ulong in_stack_ffffffffffffffb0;
    uint uVar7;
    ulong *puVar6;
    ulong uStack_48;
    int64_t iStack_40;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    uVar7 = in_stack_ffffffffffffffb0 >> 0x20;
    var_28h_2 = 0;
    iStackX_10 = arg2;
    iVar2 = (**(*0x16430 + 0x98))(arg1,89000,&var_28h);
    if ((-1 < iVar2) &&
       (iVar2 = (**(*0x16430 + 0x118))(arg1,0x15c68,&iStack_40,arg1,0,CONCAT44(uVar7,2)), -1 < iVar2)) {
        arg3_00 = &var_bp_20h;
        iVar2 = (**(*0x16430 + 0x140))(0x15b18,0);
        if (-1 < iVar2) {
            uStack_48 = 0;
            var_30h = 0;
            for (puVar4 = iStack_40 + 0x14; (puVar4 < *(iStack_40 + 0x10) + iStack_40 && (*(puVar4 + 3) != '\x02'));
                puVar4 = puVar4 + (*puVar4 & 0xffffff)) {
            }
            puVar6 = &uStack_48;
            piVar5 = &var_30h;
            iVar2 = fcn.00014ac8(var_28h,puVar4 + 1,arg3_00,arg3);
            uVar1 = uStack_48;
            if (-1 < iVar2) {
                if (*0x16448 == '\0') {
                    *0x16480 = 0x16480;
                    *0x16488 = 0x16480;
                    *0x16448 = '\x01';
                }
                iVar2 = (**var_bp_20h)(var_bp_20h,iStack_40,uStack_48,&iStackX_10,piVar5,puVar6);
                if (iVar2 < 0) {
                    return iVar2;
                }
                iVar3 = (**(*0x16430 + 0x40))(4,0x38,&var_28h_2);
                iVar2 = var_30h;
                if (-1 < iVar3) {
                    *(var_28h_2 + 0x10) = *(var_30h + 8);
                    *(var_28h_2 + 0x18) = uVar1;
                    *(var_28h_2 + 0x20) = iStackX_10;
                    (**(*0x16430 + 0x160))(var_28h_2 + 0x28,puVar4 + 6,0x10);
                    *var_28h_2 = 0x16480;
                    *(var_28h_2 + 8) = *0x16488;
                    **0x16488 = var_28h_2;
                    *0x16488 = var_28h_2;
                }
                if (iVar2 != 0) {
                    *(iVar2 + 0x18) = iStackX_10;
                }
                fcn.000117c4(iStackX_10,iVar2);
            }
            iVar2 = 0;
        }
    }
    return iVar2;
}


/* fcn.000136f0 @ 0x136f0 */

int64_t fcn.000136f0(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t *piVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    uint in_R8;
    int64_t iVar3;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    piVar1 = piVar2 + CONCAT44(in_R8,arg3);
    if (7 < CONCAT44(in_R8,arg3)) {
        arg1 = arg1 & 7;
        if ((arg1 != 0) && (arg1 == (arg2 & 7))) {
            iVar3 = 8 - arg1;
            for (; (iVar3 != 0 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
                arg2 = arg2 + 1;
                iVar3 = iVar3 + -1;
            }
        }
        for (; (piVar2 <= piVar1 + -1 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
            arg2 = arg2 + 8;
        }
    }
    while( true ) {
        if (piVar1 <= piVar2) {
            return 0;
        }
        if (*piVar2 != *arg2) break;
        piVar2 = piVar2 + 1;
        arg2 = arg2 + 1;
    }
    return *piVar2 - *arg2;
}


/* fcn.00011ce0 @ 0x11ce0 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h

ulong fcn.00011ce0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h,int64_t arg_68h,
                  uint32_t arg_70h)

{
    uint8_t *puVar1;
    uint8_t uVar2;
    char cVar3;
    uint32_t *puVar4;
    bool bVar5;
    bool bVar6;
    ulong uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint32_t uVar10;
    char *pcVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    bool bVar14;
    ushort auStackX_8 [4];
    int64_t in_stack_00000028;
    int64_t *in_stack_00000030;
    uchar in_stack_00000038;
    unkbyte7 in_stack_00000039;
    int16_t aiStack_54 [2];
    uint32_t auStack_50 [2];
    int64_t iStack_48;
    uint32_t var_bp_20h;
    uint32_t var_1ch;
    int64_t var_18h;
    int64_t var_bp_10h;
    
    auStackX_8[0] = arg1;
    puVar4 = CONCAT71(in_stack_00000039,in_stack_00000038);
    if (puVar4 == NULL) {
        uVar7 = 0x8000000000000002;
    }
    else {
        *puVar4 = arg3;
        if (in_stack_00000028 != 0) {
            *puVar4 = *(in_stack_00000028 + 4) + arg3;
        }
        iVar8 = fcn.0001347c(*puVar4);
        *in_stack_00000030 = iVar8;
        if (iVar8 == 0) {
            uVar7 = 0x8000000000000009;
        }
        else {
            (**(*0x16430 + 0x160))(iVar8,arg2,4);
            iVar9 = *0x16430;
            iVar8 = *in_stack_00000030;
            uVar13 = 4;
            *puVar4 = 4;
            iVar8 = iVar8 + 4;
            (**(iVar9 + 0x160))(auStack_50,arg2,4);
            pcVar11 = arg2 + 4;
            bVar14 = false;
            bVar5 = false;
            bVar6 = false;
            while (uVar13 < (auStack_50[0] & 0xffffff)) {
                (**(*0x16430 + 0x160))(iVar8,pcVar11,pcVar11[1] & 0x7f);
                uVar2 = pcVar11[1];
                *puVar4 = *puVar4 + (uVar2 & 0x7f);
                cVar3 = *pcVar11;
                iVar8 = iVar8 + (uVar2 & 0x7f);
                iStack_48 = iVar8;
                if (cVar3 == '\x01') {
                    iVar9 = fcn.000136f0(pcVar11 + 2,auStackX_8,2);
                    bVar14 = iVar9 == 0;
                }
                else if (((((cVar3 != '\x0e') && (cVar3 == '_')) && (bVar14)) &&
                         ((iVar9 = fcn.000136f0(pcVar11 + 2,0x15ad8,0x10), iVar9 == 0 &&
                          (cVar3 = pcVar11[0x12], (**(*0x16430 + 0x160))(aiStack_54,pcVar11 + 0x13,2),
                          uVar10 = auStack_50[0], bVar5 = bVar6, cVar3 == '\0')))) && (aiStack_54[0] == arg4)) {
                    uVar12 = auStack_50[0] & 0xffffff;
                    do {
                        uVar13 = uVar13 + (pcVar11[1] & 0x7f);
                        if (uVar12 <= uVar13) goto code_r0x00011f75;
                        pcVar11 = pcVar11 + (pcVar11[1] & 0x7f);
                    } while (((*pcVar11 != '_') ||
                             (iVar9 = fcn.000136f0(pcVar11 + 2,0x15ad8,0x10), iVar8 = iStack_48, iVar9 != 0)) ||
                            (pcVar11[0x12] != '\0'));
                    if (in_stack_00000028 != 0) {
                        (**(*0x16430 + 0x160))(iStack_48,*(in_stack_00000028 + 8),*(in_stack_00000028 + 4));
                        iVar8 = iVar8 + *(in_stack_00000028 + 4);
                        *puVar4 = *puVar4 + *(in_stack_00000028 + 4);
                        uVar10 = auStack_50[0];
                    }
                    (**(*0x16430 + 0x160))(iVar8,pcVar11,(uVar10 & 0xffffff) - uVar13);
                    bVar6 = true;
                    *puVar4 = *puVar4 + ((auStack_50[0] & 0xffffff) - uVar13);
                    bVar5 = true;
                }
                puVar1 = pcVar11 + 1;
                pcVar11 = pcVar11 + (*puVar1 & 0x7f);
                uVar13 = uVar13 + (*puVar1 & 0x7f);
                if (bVar5) break;
            }
            auStack_50[0] = auStack_50[0] ^ (*puVar4 ^ auStack_50[0]) & 0xffffff;
            (**(*0x16430 + 0x160))(*in_stack_00000030,auStack_50,4);
code_r0x00011f75:
            if (bVar6) {
                uVar7 = 0;
            }
            else {
                (**(*0x16430 + 0x48))(*in_stack_00000030);
                *puVar4 = 0;
                uVar7 = 0x800000000000000e;
            }
        }
    }
    return uVar7;
}


/* fcn.00012494 @ 0x12494 */

uchar * fcn.00012494(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.000156f8 @ 0x156f8 */

uint64_t fcn.000156f8(uint32_t arg1,int64_t arg2)

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


/* fcn.0001589c @ 0x1589c */

uint64_t fcn.0001589c(uint32_t arg1,int64_t arg2)

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


/* fcn.000133c0 @ 0x133c0 */

void fcn.000133c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00012658(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.000135e8 @ 0x135e8 */

int64_t fcn.000135e8(int64_t arg1)

{
    int64_t arg1_00;
    int64_t arg1_01;
    
    arg1_00 = fcn.000134bc(arg1);
    arg1_01 = fcn.00013450(arg1_00);
    fcn.00015980(arg1_01,arg1,arg1_00);
    return arg1_01;
}


/* fcn.000134bc @ 0x134bc */

int64_t fcn.000134bc(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    
    if (arg1 == 0) {
        return 0;
    }
    iVar2 = 0;
    while( true ) {
        if ((*arg1 == '\x7f') && (*(arg1 + 1) == -1)) {
            return iVar2 + 4;
        }
        uVar1 = *(arg1 + 3) * 0x100 + *(arg1 + 2);
        if ((*arg1 == '\0') || (uVar1 == 0)) break;
        iVar2 = iVar2 + uVar1;
        arg1 = arg1 + *(arg1 + 3) * 0x100 + *(arg1 + 2);
    }
    return iVar2;
}


/* fcn.00013988 @ 0x13988 */

void fcn.00013988(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint8_t uVar2;
    char cVar3;
    uint64_t uVar4;
    
    uVar4 = 0;
    if (arg2 != 0) {
        do {
            if (uVar4 == arg2 - 1U) {
                cVar1 = *(arg1 + uVar4 * 2);
                cVar3 = '\0';
            }
            else {
                cVar3 = *(arg1 + uVar4 * 2);
                if (cVar3 - 0x30U < 10) {
                    cVar3 = cVar3 + -0x30;
                }
                else if (cVar3 + 0xbfU < 6) {
                    cVar3 = cVar3 + -0x37;
                }
                else {
                    cVar3 = cVar3 + -0x57;
                }
                cVar1 = *(arg1 + 2 + uVar4 * 2);
            }
            if (cVar1 - 0x30U < 10) {
                uVar2 = cVar1 - 0x30;
            }
            else if (cVar1 + 0xbfU < 6) {
                uVar2 = cVar1 - 0x37;
            }
            else {
                uVar2 = cVar1 + 0xa9;
            }
            uVar4 = uVar4 + 2;
            *arg3 = cVar3 << 4 | uVar2;
            arg3 = arg3 + 1;
        } while (uVar4 < arg2);
    }
    return;
}


/* fcn.0001564c @ 0x1564c */

char * fcn.0001564c(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.000155f0(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.000156cc @ 0x156cc */

void fcn.000156cc(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0001569c(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.00010300(arg1_00,arg1);
    }
    return;
}


/* fcn.0001569c @ 0x1569c */

ulong fcn.0001569c(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x16420 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00010300 @ 0x10300 */

int64_t fcn.00010300(int64_t arg1,int64_t arg2)

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


/* fcn.0001572c @ 0x1572c */

ulong fcn.0001572c(int64_t arg1,uint32_t arg2)

{
    char16_t cVar1;
    uint64_t extraout_RAX;
    char16_t *pcVar2;
    int64_t iVar3;
    uint in_register_00000014;
    char16_t cVar4;
    
    cVar4 = L'\0';
    if (((arg1 == 0) || (1000000 < CONCAT44(in_register_00000014,arg2))) || (CONCAT44(in_register_00000014,arg2) == 0)
       ) {
        return 0x8000000000000002;
    }
    pcVar2 = L"GUID=";
    fcn.000156f8(0x16248,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (pcVar2 <= arg1) {
        if (arg1 < pcVar2 + extraout_RAX + 1) {
            return 0x800000000000000f;
        }
        if (pcVar2 < arg1) goto code_r0x0001579d;
    }
    if (pcVar2 < arg1 + CONCAT44(in_register_00000014,arg2) * 2) {
        return 0x800000000000000f;
    }
code_r0x0001579d:
    if (str.GUID[0] != L'\0') {
        iVar3 = pcVar2 - arg1;
        cVar1 = str.GUID[0];
        do {
            *arg1 = cVar1;
            arg1 = arg1 + 2;
            cVar1 = *(iVar3 + arg1);
        } while (cVar1 != L'\0');
    }
    *arg1 = cVar4;
    return 0;
}


/* fcn.000124c8 @ 0x124c8 */

ulong fcn.000124c8(uint32_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    char cVar1;
    uchar auVar2 [16];
    ulong uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    char *pcVar6;
    uint in_register_0000000c;
    int64_t iVar7;
    char *pcVar8;
    uint64_t uVar9;
    char *pcVar10;
    int64_t iVar11;
    bool bVar12;
    uint64_t in_stack_00000028;
    char cStack_38;
    char acStack_37 [47];
    
    pcVar6 = CONCAT44(in_register_0000000c,arg1);
    if (((pcVar6 == NULL) || (0x1e8481 < arg2)) || (0x25 < in_stack_00000028)) {
        uVar3 = 0x8000000000000002;
    }
    else {
        bVar12 = in_stack_00000028 != 0;
        uVar9 = 0x25;
        if (bVar12) {
            uVar9 = in_stack_00000028;
        }
        else {
            pcVar10 = &cStack_38;
            uVar5 = arg3;
            do {
                uVar4 = uVar5 / 0x10;
                pcVar10 = pcVar10 + 1;
                *pcVar10 = "0123456789ABCDEFen-US"[uVar5 % 0x10];
                uVar5 = uVar4;
            } while (uVar4 != 0);
            in_stack_00000028 = pcVar10 - &cStack_38;
        }
        if (in_stack_00000028 < uVar9) {
            uVar9 = in_stack_00000028;
        }
        if (arg2 < uVar9 * 2 + 2) {
            uVar3 = 0x8000000000000005;
        }
        else {
            pcVar10 = pcVar6 + uVar9 * 2;
            cStack_38 = '\0';
            pcVar8 = &cStack_38;
            do {
                auVar2._8_8_ = 0;
                auVar2._0_8_ = arg3;
                uVar5 = SUB168(auVar2 / ZEXT816(0x10),0);
                pcVar8 = pcVar8 + 1;
                *pcVar8 = "0123456789ABCDEFen-US"[arg3 % 0x10];
                arg3 = uVar5;
            } while (uVar5 != 0);
            iVar11 = pcVar8 - &cStack_38;
            if (bVar12) {
                pcVar6 = fcn.00012494(arg1,pcVar10,uVar9 - iVar11,SUB164(auVar2 / ZEXT816(0x10),0) + 0x30);
            }
            for (; iVar11 != 0; iVar11 = iVar11 + -1) {
                cVar1 = *pcVar8;
                iVar7 = 0;
                do {
                    if (pcVar10 <= pcVar6) break;
                    *pcVar6 = cVar1;
                    iVar7 = iVar7 + 1;
                    pcVar6[1] = cVar1 >> 7;
                    pcVar6 = pcVar6 + 2;
                } while (iVar7 < 1);
                pcVar8 = pcVar8 + -1;
            }
            iVar11 = 0;
            do {
                if (pcVar10 + 2 <= pcVar6) break;
                pcVar6[0] = '\0';
                pcVar6[1] = '\0';
                iVar11 = iVar11 + 1;
                pcVar6 = pcVar6 + 2;
            } while (iVar11 < 1);
            uVar3 = 0;
        }
    }
    return uVar3;
}


/* fcn.000157cc @ 0x157cc */

ulong fcn.000157cc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    int16_t *piVar3;
    int64_t iVar4;
    uint64_t arg2_00;
    
    iVar4 = arg2;
    piVar3 = arg1;
    iVar1 = fcn.000156f8(arg1,arg2);
    arg2_00 = iVar4 - iVar1;
    if ((((arg1 == 0) || (arg3 == NULL)) || (1000000 < arg2)) || (arg2 == 0)) {
        return 0x8000000000000002;
    }
    if (arg2_00 == 0) {
        return 0x8000000000000004;
    }
    uVar2 = fcn.000156f8(arg3,arg2_00);
    if (arg2_00 <= uVar2) {
        return 0x8000000000000005;
    }
    if (arg3 <= piVar3) {
        if (piVar3 < arg3 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < piVar3) goto code_r0x0001586d;
    }
    if (arg3 < piVar3 + arg2) {
        return 0x800000000000000f;
    }
code_r0x0001586d:
    piVar3 = piVar3 + iVar1;
    for (; *arg3 != 0; arg3 = arg3 + 2) {
        *piVar3 = *arg3;
        piVar3 = piVar3 + 1;
    }
    *piVar3 = 0;
    return 0;
}


/* section..text @ 0x102c0 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 22400 named .text
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


/* fcn.00013c50 @ 0x13c50 */

int16_t * fcn.00013c50(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    int16_t iVar2;
    bool bVar3;
    uint16_t *puVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int16_t *arg1_00;
    int64_t iVar7;
    int16_t *piVar8;
    uint64_t uVar9;
    uint in_register_00000014;
    uint16_t *puVar10;
    uint64_t uVar11;
    uint64_t arg1_01;
    int16_t *piVar12;
    uint64_t *noname_2;
    char16_t *pcVar13;
    uint64_t auStackX_18 [2];
    
    puVar10 = CONCAT44(in_register_00000014,arg2);
    uVar9 = 0;
    uVar11 = uVar9;
    if (puVar10 != NULL) {
        uVar1 = *puVar10;
        uVar11 = 0;
        puVar4 = puVar10;
        while (uVar1 != 0) {
            puVar4 = puVar4 + 1;
            uVar11 = uVar11 + 1;
            uVar1 = *puVar4;
        }
    }
    noname_2 = NULL;
    arg1_01 = uVar9;
    uVar6 = uVar9;
    if (arg3 != 0) {
        noname_2 = auStackX_18;
        iVar5 = (**(*0x16420 + 0x98))(arg3,0x15a40);
        arg1_01 = auStackX_18[0];
        if (iVar5 < 0) {
            arg1_01 = uVar9;
        }
        if (arg1_01 == 0) {
            return NULL;
        }
        auStackX_18[0] = arg1_01;
        uVar6 = fcn.0001564c(arg1_01);
    }
    iVar5 = (uVar6 + uVar11 * 2) * 2 + 0x32;
    arg1_00 = fcn.000156cc(iVar5 * 2);
    if (arg1_00 != NULL) {
        fcn.0001572c(arg1_00,iVar5);
        iVar2 = *arg1_00;
        piVar12 = arg1_00;
        while (iVar2 != 0) {
            piVar12 = piVar12 + 1;
            uVar9 = uVar9 + 1;
            iVar2 = *piVar12;
        }
        piVar12 = arg1_00 + uVar9;
        if (arg1 != 0) {
            uVar11 = 0;
            do {
                fcn.000124c8(piVar12,(iVar5 * 2 - piVar12) + arg1_00,noname_2,*(uVar11 + arg1));
                iVar7 = fcn.000156f8(piVar12,iVar5 - (piVar12 - arg1_00 >> 1));
                uVar11 = uVar11 + 1;
                piVar12 = piVar12 + iVar7;
            } while (uVar11 < 0x10);
        }
        pcVar13 = L"&NAME=";
        fcn.000157cc(arg1_00,iVar5,0x162b8);
        uVar9 = 0;
        iVar2 = *piVar12;
        piVar8 = piVar12;
        uVar11 = uVar9;
        while (iVar2 != 0) {
            piVar8 = piVar8 + 1;
            uVar11 = uVar11 + 1;
            iVar2 = *piVar8;
        }
        piVar12 = piVar12 + uVar11;
        if (puVar10 != NULL) {
            for (; *puVar10 != 0; puVar10 = puVar10 + 1) {
                fcn.000124c8(piVar12,(iVar5 * 2 - piVar12) + arg1_00,pcVar13,*puVar10);
                iVar7 = fcn.000156f8(piVar12,iVar5 - (piVar12 - arg1_00 >> 1));
                piVar12 = piVar12 + iVar7;
            }
        }
        pcVar13 = L"&PATH=";
        fcn.000157cc(arg1_00,iVar5,0x162c8);
        iVar2 = *piVar12;
        piVar8 = piVar12;
        uVar11 = uVar9;
        while (iVar2 != 0) {
            piVar8 = piVar8 + 1;
            uVar11 = uVar11 + 1;
            iVar2 = *piVar8;
        }
        piVar12 = piVar12 + uVar11;
        if (uVar6 != 0) {
            do {
                fcn.000124c8(piVar12,(iVar5 * 2 - piVar12) + arg1_00,pcVar13,*(uVar9 + arg1_01));
                iVar7 = fcn.000156f8(piVar12,iVar5 - (piVar12 - arg1_00 >> 1));
                uVar9 = uVar9 + 1;
                piVar12 = piVar12 + iVar7;
            } while (uVar9 < uVar6);
        }
        *piVar12 = 0;
        bVar3 = false;
        iVar2 = *arg1_00;
        piVar12 = arg1_00;
        while (iVar2 != 0) {
            iVar2 = *piVar12;
            if (iVar2 == 0x3d) {
                bVar3 = true;
            }
            else if (iVar2 == 0x26) {
                bVar3 = false;
            }
            else if ((bVar3) && (iVar2 - 0x41U < 6)) {
                *piVar12 = iVar2 + 0x20;
            }
            piVar12 = piVar12 + 1;
            iVar2 = *piVar12;
        }
        return arg1_00;
    }
    return NULL;
}


/* fcn.00013edc @ 0x13edc */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00013edc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h)

{
    uint64_t arg2_00;
    uint8_t uVar1;
    int16_t iVar2;
    int16_t *piVar3;
    uint64_t uVar4;
    uint16_t *puVar5;
    int16_t *arg3_00;
    int64_t iVar6;
    uint16_t *puVar7;
    int64_t iVar8;
    uint16_t *puVar9;
    uint16_t uVar10;
    uint64_t uVar11;
    int64_t iStackX_18;
    int64_t iStackX_20;
    ulong *in_stack_00000028;
    int64_t var_50h;
    uchar auStack_48 [16];
    int64_t var_bp_10h;
    
    puVar7 = arg3 + 0x16;
    uVar11 = 0;
    iStackX_18 = 0;
    uVar1 = *puVar7;
    uVar4 = 0;
    while (uVar1 != 0) {
        uVar4 = uVar4 + 1;
        uVar1 = *(puVar7 + uVar4);
    }
    arg2_00 = uVar4 + 1;
    iStackX_20 = arg4;
    puVar5 = fcn.000156cc(arg2_00 * 2);
    uVar10 = 0;
    if (puVar5 == NULL) {
        return -0x7ffffffffffffff7;
    }
    if (((puVar7 == NULL) || (999999 < uVar4)) ||
       (puVar9 = puVar5, uVar4 = fcn.0001589c(puVar7,arg2_00), arg2_00 <= uVar4)) goto code_r0x00013fa4;
    if (puVar5 < puVar7) {
code_r0x00013f81:
        if (puVar7 < puVar5 + arg2_00) goto code_r0x00013fa4;
    }
    else {
        if (puVar5 < uVar4 + 1 + puVar7) goto code_r0x00013fa4;
        if (puVar5 <= puVar7) goto code_r0x00013f81;
    }
    for (; *puVar7 != 0; puVar7 = puVar7 + 1) {
        *puVar9 = *puVar7;
        puVar9 = puVar9 + 1;
    }
    *puVar9 = uVar10;
code_r0x00013fa4:
    if (auStack_48 != arg3 + 2) {
        section..text(auStack_48,arg3 + 2,0x10);
    }
    arg3_00 = fcn.00013c50(auStack_48,puVar5,arg2);
    iVar6 = 0;
    iVar2 = *arg3_00;
    piVar3 = arg3_00;
    while (iVar2 != 0) {
        piVar3 = piVar3 + 1;
        iVar6 = iVar6 + 1;
        iVar2 = *piVar3;
    }
    iStackX_18 = iVar6 * 2 + 0x42;
    iVar6 = fcn.000156cc(iStackX_18);
    if (iVar6 == 0) {
        iVar8 = -0x7ffffffffffffff7;
        *in_stack_00000028 = 0;
        uVar11 = 0;
    }
    else {
        fcn.00012464(iVar6,iStackX_18,0x162d8,arg3_00);
        iStackX_18 = 0;
        iVar8 = (**(*0x16438 + 0x48))(puVar5,auStack_48,0,&iStackX_18,0);
        if (iVar8 == -0x7ffffffffffffffb) {
            uVar11 = fcn.000156cc(iStackX_18);
            iVar8 = (**(*0x16438 + 0x48))(puVar5,auStack_48,0,&iStackX_18,uVar11);
            if (-1 < iVar8) {
                iVar8 = (**(arg1 + 0x18))(arg1,iVar6,uVar11,*(arg3 + 0x14),iStackX_20,in_stack_00000028);
            }
        }
    }
    (**(*0x16420 + 0x48))(puVar5);
    if (uVar11 != 0) {
        (**(*0x16420 + 0x48))(uVar11);
    }
    (**(*0x16420 + 0x48))(arg3_00);
    if (iVar6 != 0) {
        (**(*0x16420 + 0x48))(iVar6);
    }
    return iVar8;
}


/* fcn.00014124 @ 0x14124 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

uint64_t fcn.00014124(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h)

{
    bool bVar1;
    bool bVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    int64_t iVar6;
    int64_t iVar7;
    int16_t *piVar8;
    char *arg3_00;
    uint32_t *puVar9;
    uint32_t uVar10;
    int64_t *piVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    uint32_t uVar14;
    int64_t *in_stack_00000028;
    int16_t *piStack_70;
    int64_t *piStack_68;
    int64_t iStack_60;
    int64_t iStack_50;
    int8_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_bp_18h;
    uint32_t var_bp_10h;
    int64_t var_bp_8h;
    
    uVar13 = 0;
    iStack_50 = 0;
    piStack_70 = NULL;
    bVar2 = false;
    uVar3 = (**(*0x16430 + 0x140))(0x15b18,0,0x16468);
    if (uVar3 < 0) {
        return uVar3;
    }
    uVar3 = (**(*0x16430 + 0x140))(0x15b78,0,&iStack_50);
    if (uVar3 < 0) {
        return uVar3;
    }
    iStack_60 = 0;
    iVar4 = (**(*0x16468 + 0x18))(*0x16468,0,0,&iStack_60,&var_38h);
    if ((iVar4 == -0x7ffffffffffffffb) && (piVar5 = fcn.000156cc(iStack_60 + 8), piVar5 != NULL)) {
        iVar4 = (**(*0x16468 + 0x18))(*0x16468,0,0,&iStack_60,piVar5);
        if (iVar4 < 0) {
            iVar4 = *0x16420;
        }
        else {
            bVar1 = false;
            if (*piVar5 != 0) {
                piVar11 = piVar5;
                do {
                    (**(*0x16468 + 0x50))(*0x16468,*piVar11,&var_40h);
                    if ((_var_40h == arg2) && (*piVar11 == arg1)) {
                        bVar1 = true;
                        break;
                    }
                    uVar13 = uVar13 + 1;
                    piVar11 = piVar5 + uVar13;
                    bVar1 = false;
                } while (*piVar11 != 0);
            }
            (**(*0x16430 + 0x48))(piVar5);
            if (!bVar1) {
                return 0x800000000000000e;
            }
            iVar4 = 0;
            piStack_68 = NULL;
            uVar3 = (**(*0x16468 + 0x20))(*0x16468,arg1,&stack0xffffffffffffffa8,0);
            if ((uVar3 < 0) && (uVar3 != 0x8000000000000005)) {
                return uVar3;
            }
            (**(*0x16430 + 0x40))(4,iVar4,&piStack_68);
            if (piStack_68 == NULL) {
                return 0x8000000000000009;
            }
            (**(*0x16468 + 0x20))(*0x16468,arg1,&stack0xffffffffffffffa8);
            piVar5 = piStack_68;
            uVar3 = 0x14;
            bVar1 = false;
            if (0x14 < *(piStack_68 + 2)) {
                do {
                    bVar1 = bVar2;
                    if (bVar2) break;
                    puVar9 = uVar3 + piVar5;
                    uVar10 = *puVar9 & 0xffffff;
                    uVar14 = uVar3 + uVar10;
                    uVar3 = uVar14;
                    if ((*(puVar9 + 3) == '\x02') && (uVar13 = 4, 4 < uVar10)) {
                        do {
                            _var_40h = uVar13 + puVar9;
                            uVar12 = uVar13 + (_var_40h[1] & 0x7f);
                            uVar13 = uVar12;
                            if ((*_var_40h == '\x0e') && (iVar6 = fcn.000136f0(_var_40h + 2,arg3,0x10), iVar6 == 0))
                            {
                                bVar2 = true;
                                break;
                            }
                        } while (uVar12 < uVar10);
                    }
                    bVar1 = bVar2;
                } while (uVar14 < *(piVar5 + 2));
            }
            *arg4 = 0;
            *in_stack_00000028 = 0;
            if (bVar1) {
                do {
                    iVar6 = 0;
                    arg3_00 = _var_40h + (_var_40h[1] & 0x7f);
                    if (((*arg3_00 == '$') &&
                        (iVar7 = fcn.00013edc(iStack_50,arg2,arg3_00,&piStack_70,iVar4), -1 < iVar7)) &&
                       (piStack_70 != NULL)) {
                        piVar8 = *arg4;
                        if (piVar8 == NULL) {
                            *arg4 = piStack_70;
                        }
                        else {
                            iVar7 = iVar6;
                            for (; *piVar8 != 0; piVar8 = piVar8 + 1) {
                                iVar7 = iVar7 + 1;
                            }
                            for (piVar8 = piStack_70; *piVar8 != 0; piVar8 = piVar8 + 1) {
                                iVar6 = iVar6 + 1;
                            }
                            uVar3 = (iVar6 + iVar7) * 2 + 8;
                            iVar6 = fcn.000156cc(uVar3);
                            if (iVar6 == 0) {
                                return 0x8000000000000009;
                            }
                            uVar3 = uVar3 >> 1;
                            fcn.000157cc(iVar6,uVar3,*arg4);
                            fcn.000157cc(iVar6,uVar3,0x1630c);
                            fcn.000157cc(iVar6,uVar3,piStack_70);
                            (**(*0x16430 + 0x48))(*arg4);
                            (**(*0x16430 + 0x48))(piStack_70);
                            *arg4 = iVar6;
                            *in_stack_00000028 = iVar6;
                            piStack_70 = NULL;
                        }
                    }
                    _var_40h = arg3_00;
                    if (*arg3_00 == ')') {
                        if (piStack_68 != NULL) {
                            (**(*0x16430 + 0x48))();
                        }
                        return ~-(*arg4 != 0) & 0x800000000000000e;
                    }
                } while( true );
            }
            iVar4 = *0x16430;
        }
        (**(iVar4 + 0x48))(piVar5);
    }
    return 0x800000000000000e;
}


/* fcn.000137dc @ 0x137dc */

void fcn.000137dc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int16_t iVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    uint64_t uVar5;
    int16_t *piVar6;
    
    piVar6 = arg1 + 4;
    for (uVar5 = 0;
        ((((iVar2 = piVar6[-2], iVar2 - 0x30U < 0x37 && (6 < iVar2 - 0x3aU)) && (0x19 < iVar2 - 0x47U)) &&
         (((iVar2 = piVar6[-1], iVar2 - 0x30U < 0x37 && (6 < iVar2 - 0x3aU)) &&
          ((0x19 < iVar2 - 0x47U && ((iVar2 = *piVar6, iVar2 - 0x30U < 0x37 && (6 < iVar2 - 0x3aU)))))))) &&
        ((0x19 < iVar2 - 0x47U &&
         ((((iVar2 = piVar6[1], iVar2 - 0x30U < 0x37 && (6 < iVar2 - 0x3aU)) && (0x19 < iVar2 - 0x47U)) &&
          (uVar5 < *arg2 - 1U)))))); uVar5 = uVar5 + 1) {
        cVar1 = piVar6[-2];
        if (cVar1 - 0x30U < 10) {
            uVar3 = cVar1 - 0x30;
        }
        else if (cVar1 + 0xbfU < 6) {
            uVar3 = cVar1 - 0x37;
        }
        else {
            uVar3 = cVar1 + 0xa9;
        }
        uVar4 = (uVar3 & 0xf) << 4;
        *(arg3 + uVar5 * 2) = uVar4;
        cVar1 = piVar6[-1];
        if (cVar1 - 0x30U < 10) {
            uVar3 = cVar1 - 0x30;
        }
        else if (cVar1 + 0xbfU < 6) {
            uVar3 = cVar1 - 0x37;
        }
        else {
            uVar3 = cVar1 + 0xa9;
        }
        uVar4 = (uVar3 | uVar4) << 4;
        *(arg3 + uVar5 * 2) = uVar4;
        cVar1 = *piVar6;
        if (cVar1 - 0x30U < 10) {
            uVar3 = cVar1 - 0x30;
        }
        else if (cVar1 + 0xbfU < 6) {
            uVar3 = cVar1 - 0x37;
        }
        else {
            uVar3 = cVar1 + 0xa9;
        }
        uVar4 = (uVar3 | uVar4) << 4;
        *(arg3 + uVar5 * 2) = uVar4;
        cVar1 = piVar6[1];
        if (cVar1 - 0x30U < 10) {
            uVar3 = cVar1 - 0x30;
        }
        else if (cVar1 + 0xbfU < 6) {
            uVar3 = cVar1 - 0x37;
        }
        else {
            uVar3 = cVar1 + 0xa9;
        }
        piVar6 = piVar6 + 4;
        *(arg3 + uVar5 * 2) = uVar3 | uVar4;
    }
    *arg2 = uVar5;
    *(arg3 + uVar5 * 2) = 0;
    return;
}


/* fcn.00013a08 @ 0x13a08 */

uint64_t fcn.00013a08(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int16_t *piVar5;
    uint64_t uVar6;
    char *pcVar7;
    char *pcStackX_8;
    char *pcStackX_18;
    
    uVar4 = 0;
    pcStackX_8 = NULL;
    uVar6 = uVar4;
    piVar5 = arg1;
    while( true ) {
        iVar1 = *piVar5;
        while ((iVar1 != 0x26 && (iVar1 != 0))) {
            uVar6 = uVar6 + 1;
            iVar1 = *(arg1 + uVar6 * 2);
        }
        if (*(arg1 + uVar6 * 2) == 0) break;
        uVar6 = uVar6 + 1;
        piVar5 = arg1 + uVar6 * 2;
        iVar2 = fcn.000136f0(piVar5,*0x163a0,10);
        if (iVar2 == 0) {
            arg1 = arg1 + uVar6 * 2;
            uVar6 = uVar4;
            for (piVar5 = arg1 + 10;
                ((iVar1 = *piVar5, iVar1 - 0x30U < 0x37 && (6 < iVar1 - 0x3aU)) && (0x19 < iVar1 - 0x47U));
                piVar5 = piVar5 + 1) {
                uVar6 = uVar6 + 1;
            }
            pcVar7 = uVar6 >> 1;
            uVar3 = (**(*0x16430 + 0x40))(4,pcVar7,&pcStackX_8);
            if (uVar3 < 0) {
                uVar4 = uVar3;
                pcVar7 = pcStackX_8;
            }
            else {
                fcn.00013988(arg1 + 10,uVar6,pcStackX_8);
            }
            if (-1 < uVar4) {
                if (((pcStackX_8 == NULL) || (pcVar7 < 0x4)) ||
                   ((pcVar7 < *(pcStackX_8 + 2) || ((4 < *pcStackX_8 - 1U && (*pcStackX_8 != '\x7f')))))) {
                    uVar4 = 0x800000000000000e;
                }
                else {
                    pcStackX_18 = pcStackX_8;
                    uVar4 = (**(*0x16430 + 0xb8))(0x15c58,&pcStackX_18,arg2);
                }
                (**(*0x16430 + 0x48))(pcStackX_8);
            }
            return uVar4;
        }
    }
    return 0x800000000000000e;
}


/* fcn.00013510 @ 0x13510 */

int64_t fcn.00013510(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t arg1_01;
    
    if (arg2 == 0) {
        if (arg1 == 0) {
            arg1 = 0x15b00;
        }
        arg1_00 = fcn.000135e8(arg1);
    }
    else {
        if (arg1 == 0) {
            iVar1 = 0;
        }
        else {
            iVar1 = fcn.000134bc(arg1);
            iVar1 = iVar1 + -4;
        }
        arg1_00 = fcn.00013450(*(arg2 + 2) + 4 + *(arg2 + 3) * 0x100 + iVar1);
        arg1_01 = arg1_00;
        if (iVar1 != 0) {
            fcn.00015980(arg1_00,arg1,iVar1);
            arg1_01 = arg1_00 + iVar1;
        }
        fcn.00015980(arg1_01,arg2,*(arg2 + 2));
        *(*(arg2 + 2) + *(arg2 + 3) * 0x100 + arg1_01) = *0x15b00;
    }
    return arg1_00;
}


/* fcn.00013768 @ 0x13768 */

int64_t fcn.00013768(void)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    if (*0x16460 == 0x16240) {
        *0x16460 = 0;
    }
    iVar1 = fcn.00013630(0x16298,0x15b28,0,auStackX_10);
    iVar2 = 0x16240;
    if (-1 < iVar1) {
        iVar2 = *0x16460;
    }
    *0x16460 = iVar2;
    return iVar2;
}


/* fcn.00014d90 @ 0x14d90 */

ulong fcn.00014d90(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iStackX_8;
    
    iStackX_8 = 0;
    if ((arg1 != 0) &&
       (((*0x16470 != 0 || (iVar1 = (**(*0x16430 + 0x140))(0x15b68,0,0x16470), -1 < iVar1)) &&
        (iVar1 = (**(*0x16470 + 0x18))(*0x16470,arg1,0,&iStackX_8), iVar1 == -0x7ffffffffffffffb)))) {
        uVar2 = fcn.00013450(iStackX_8);
        iVar1 = (**(*0x16470 + 0x18))(*0x16470,arg1,uVar2,&iStackX_8);
        if (-1 < iVar1) {
            return uVar2;
        }
        (**(*0x16430 + 0x48))(uVar2);
    }
    return 0;
}


/* fcn.00014c70 @ 0x14c70 */

int64_t fcn.00014c70(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    bool bVar1;
    char cVar2;
    char *pcVar3;
    int64_t arg1_00;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    int64_t arg3_00;
    char *arg2_00;
    char *pcVar7;
    int64_t *piVar8;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    
    aiStackX_18[0] = arg3;
    aiStackX_18[1] = arg4;
    pcVar6 = NULL;
    if ((arg1 != 0) && (arg2 != 0)) {
        piVar8 = &iStackX_10;
        pcVar5 = arg2;
        do {
            arg2_00 = NULL;
            pcVar3 = arg1;
            do {
                bVar1 = false;
                pcVar4 = pcVar3;
                pcVar7 = pcVar5;
                if (*pcVar5 != '\0') {
                    cVar2 = *pcVar5;
                    do {
                        if (cVar2 == ';') break;
                        if (cVar2 == '-') {
                            bVar1 = true;
                        }
                        if (cVar2 != *pcVar4) break;
                        if (*pcVar4 == '\0') goto code_r0x00014cfc;
                        if (*pcVar4 == ';') break;
                        pcVar7 = pcVar7 + 1;
                        pcVar4 = pcVar4 + 1;
                        cVar2 = *pcVar7;
                    } while (cVar2 != '\0');
                }
                for (; (*pcVar4 != '\0' && (*pcVar4 != ';')); pcVar4 = pcVar4 + 1) {
                }
code_r0x00014cfc:
                if ((((bVar1) || (*pcVar7 == '\0')) || (*pcVar7 == ';')) && (pcVar7 != pcVar5 && -1 < pcVar7 - pcVar5))
                {
                    pcVar6 = pcVar4;
                    arg2_00 = pcVar3;
                }
                pcVar3 = pcVar4 + 1;
                if (*pcVar4 != ';') {
                    pcVar3 = pcVar4;
                }
            } while (((*pcVar3 != '\0') && (*pcVar7 != '\0')) && (*pcVar7 != ';'));
            if (arg2_00 != NULL) {
                if (pcVar6 == NULL) {
                    return 0;
                }
                arg3_00 = pcVar6 - arg2_00;
                iStackX_10 = arg2;
                arg1_00 = fcn.00013450(arg3_00 + 1);
                if (arg1_00 == 0) {
                    return 0;
                }
                fcn.00015980(arg1_00,arg2_00,arg3_00);
                *(arg3_00 + arg1_00) = 0;
                return arg1_00;
            }
            piVar8 = piVar8 + 1;
            pcVar5 = *piVar8;
        } while (pcVar5 != NULL);
    }
    return 0;
}


/* fcn.00014e50 @ 0x14e50 */

int64_t fcn.00014e50(uint32_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    char *pcVar4;
    char *pcVar5;
    
    iVar2 = *0x16470;
    pcVar4 = CONCAT44(in_register_0000000c,arg1);
    cVar1 = *pcVar4;
    iVar3 = -0x7ffffffffffffffe;
    while( true ) {
        if (cVar1 == '\0') {
            return iVar3;
        }
        cVar1 = *pcVar4;
        pcVar5 = pcVar4;
        while ((cVar1 != ';' && (*pcVar5 != '\0'))) {
            pcVar5 = pcVar5 + 1;
            cVar1 = *pcVar5;
        }
        cVar1 = *pcVar5;
        *pcVar5 = '\0';
        iVar3 = (**(iVar2 + 8))(iVar2,pcVar4,arg2,arg3 & 0xffff);
        if (iVar3 != -0x7fffffffffffffe0) break;
        if (cVar1 == '\0') {
            return -0x7fffffffffffffe0;
        }
        pcVar4 = pcVar5 + 1;
        cVar1 = *pcVar4;
        iVar3 = -0x7fffffffffffffe0;
    }
    return iVar3;
}


/* fcn.00013b70 @ 0x13b70 */

void fcn.00013b70(int64_t arg1)

{
    int64_t iVar1;
    int16_t *piVar2;
    int64_t iVar3;
    ulong in_RDX;
    int64_t iVar4;
    int16_t iVar5;
    int64_t aiStackX_18 [2];
    
    iVar4 = 0;
    iVar1 = (**(*0x16430 + 0x40))(4,in_RDX,aiStackX_18);
    if (-1 < iVar1) {
        iVar5 = *arg1;
        iVar1 = iVar4;
        if (iVar5 != 0) {
            piVar2 = arg1;
            do {
                if ((iVar5 == 0x26) && (iVar3 = fcn.000136f0(piVar2 + 2,*0x163b0,0xc), iVar3 == 0)) {
                    do {
                        iVar4 = iVar4 + 1;
                        iVar5 = *(arg1 + iVar4 * 2);
                        if (iVar5 == 0x26) break;
                    } while (iVar5 != 0);
                    iVar5 = *(arg1 + iVar4 * 2);
                    if (iVar5 == 0) break;
                }
                iVar4 = iVar4 + 1;
                *(aiStackX_18[0] + iVar1 * 2) = iVar5;
                piVar2 = arg1 + iVar4 * 2;
                iVar5 = *piVar2;
                iVar1 = iVar1 + 1;
            } while (iVar5 != 0);
        }
        *(aiStackX_18[0] + iVar1 * 2) = 0;
        fcn.00015980(arg1,aiStackX_18[0],iVar1 * 2 + 2);
        (**(*0x16430 + 0x48))(aiStackX_18[0]);
    }
    return;
}


/* fcn.00014ac8 @ 0x14ac8 */

int64_t fcn.00014ac8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t *piVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uStackX_8;
    int64_t iStackX_18;
    int64_t *in_stack_00000028;
    ulong *in_stack_00000030;
    
    iVar5 = 0;
    uStackX_8 = 0;
    piVar3 = arg4;
    iVar4 = iVar5;
    iStackX_18 = arg3;
    do {
        if (*piVar3 != 0) {
            iVar1 = fcn.000136f0(arg2 + 2,*piVar3,0x10);
            if (iVar1 == 0) break;
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 4;
    } while (iVar4 == 0);
    if (iVar4 == 1) {
        arg4 = 0x15c38;
    }
    else {
        arg4 = iVar4 * 0x20 + arg4;
        piVar3 = *(arg4 + 8);
        if (piVar3 == NULL) {
            *(arg4 + 8) = 0x15b38;
        }
        else {
            if (*piVar3 == 0) {
                *piVar3 = 0x144e0;
            }
            if (*(*(arg4 + 8) + 8) == 0) {
                *(*(arg4 + 8) + 8) = 0x14860;
            }
            if (*(*(arg4 + 8) + 0x10) == 0) {
                *(*(arg4 + 8) + 0x10) = 0x14abc;
            }
        }
    }
    iVar4 = (**(*0x16430 + 0x98))(*(arg1 + 0x18),0x15b08,&iStackX_18);
    if (iVar4 < 0) {
        iStackX_18 = iVar5;
    }
    iStackX_18 = fcn.00013510(iStackX_18,*(arg1 + 0x20));
    *0x15b54 = *(arg2 + 2);
    *0x15b5c = *(arg2 + 10);
    uVar2 = fcn.00013510(iStackX_18,0x15b50);
    (**(*0x16430 + 0x48))(iStackX_18);
    iVar4 = (**(*0x16430 + 0x148))(&uStackX_8,0x15b08,uVar2,0x15b88,*(arg4 + 8),0);
    if (-1 < iVar4) {
        if (in_stack_00000030 != NULL) {
            *in_stack_00000030 = uStackX_8;
        }
        if (in_stack_00000028 != NULL) {
            if (arg4 == 0x15c38) {
                arg4 = iVar5;
            }
            *in_stack_00000028 = arg4;
        }
        iVar4 = 0;
    }
    return iVar4;
}


/* fcn.000117c4 @ 0x117c4 */

void fcn.000117c4(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint in_register_00000014;
    int64_t iStackX_8;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_10h;
    int64_t var_bp_8h;
    
    iVar1 = CONCAT44(in_register_00000014,arg2);
    if (iVar1 != 0) {
        var_10h = 0;
        var_bp_8h = 0;
        var_28h = 8;
        if (((*(iVar1 + 0x18) != 0) && (*(iVar1 + 0x10) == 0x10)) &&
           (iStackX_8 = arg1, iVar1 = (**(*0x16438 + 0x48))(L"FixedBootOrderHii",0x15a80,0,&var_28h,&var_20h),
           -1 < iVar1)) {
            iVar1 = (**(*0x16430 + 0x140))(0x15a80,0);
            if (-1 < iVar1) {
                *0x163e0 = (**(var_18h + 0x28))();
                *0x163f8 = (**(var_18h + 0x30))();
                *0x163e8 = (**(var_18h + 0x40))();
            }
            iVar1 = fcn.00013630(0x15de0,0x15a80,0,&var_10h);
            if ((-1 < iVar1) && (iVar1 = fcn.00013630(0x15e00,0x15ac8,0,&var_bp_8h), -1 < iVar1)) {
                fcn.00010f28(var_20h,iStackX_8);
                fcn.0001136c(var_20h,iStackX_8);
                (**(*0x16438 + 0x58))(L"FboGfHiiHandle",0x15a80,2,8,&iStackX_8);
            }
        }
    }
    return;
}


/* fcn.000155f0 @ 0x155f0 */

bool fcn.000155f0(uint32_t arg1)

{
    uint in_register_0000000c;
    char *pcVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    pcVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    if (pcVar1 != NULL) {
        while( true ) {
            if ((*pcVar1 == '\x7f') && (pcVar1[1] == -1)) {
                return *(pcVar1 + 2) == 4;
            }
            uVar2 = *(pcVar1 + 2);
            if ((((uVar2 < 4) || (~uVar3 < uVar2)) || (uVar3 = uVar3 + uVar2, 0xfffffffffffffffb < uVar3)) ||
               (((*pcVar1 == '\x04' && (pcVar1[1] == '\x04')) && (*(pcVar1 + (uVar2 - 2)) != 0)))) break;
            pcVar1 = pcVar1 + uVar2;
        }
    }
    return false;
}


