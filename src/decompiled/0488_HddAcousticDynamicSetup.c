// decompiled by r2ghidra: 0488_HddAcousticDynamicSetup.pe32
// functions: 68

/* entry0 @ 0x10390 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.000103bc(arg1,arg2);
    fcn.00010518(arg1,arg2);
    return;
}


/* fcn.000103bc @ 0x103bc */

void fcn.000103bc(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x15f38 = *(arg1 + 0x60);
    *0x15f30 = arg1;
    fcn.00012dd4();
    puVar4 = fcn.00012dd4();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x00010410:
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
code_r0x00010479:
                (**(*0x15f38 + 0x140))(0x15530,0,0x15f48);
                (**(*0x15f38 + 0x140))(0x15520,0,0x15f68);
                (**(*0x15f38 + 0x140))(0x15500,0,0x15f58);
                (**(*0x15f38 + 0x140))(0x15580,0,0x15f50);
    //WARNING: Could not recover jumptable at 0x0001050e. Too many branches
    //WARNING: Treating indirect jump as call
                (**(*0x15f38 + 0x140))(0x15510,0,0x15f60);
                return;
            }
            if ((*0x155f8 == *(puVar4 + 4)) && (*0x15600 == *(puVar4 + 8))) goto code_r0x00010479;
        }
        else if (uVar1 == 4) goto code_r0x00010410;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010518 @ 0x10518 */

int64_t fcn.00010518(int64_t noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t in_R8;
    int64_t in_R9;
    int64_t var_20h;
    int64_t var_28h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_bp_8h;
    int32_t var_4h;
    
    var_10h = 0x71202eee;
    var_ch = 0x40d95f53;
    var_bp_8h = 0xc9e3dab;
    var_4h = 0x5766d926;
    if (*0x15f88 == 0) {
        *0x15f78 = *(arg1 + 0x60);
        *0x15f80 = *(arg1 + 0x58);
        *0x15f88 = arg1;
    }
    iVar1 = fcn.00014f40(noname_0,arg1,in_R8,in_R9);
    if (-1 < iVar1) {
        iVar2 = (**(*0x15f78 + 0x50))(0x200,8,0x119e0,0,&var_20h);
        if (-1 < iVar2) {
            (**(*0x15f78 + 0xa8))(&var_10h,var_20h,&var_28h);
        }
        *0x15ef8 = *0x155d8;
    }
    return iVar1;
}


/* fcn.00012dd4 @ 0x12dd4 */

int64_t fcn.00012dd4(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x15f40 == 0) {
        *0x15f40 = 0;
        if (*(*0x15f30 + 0x68) != 0) {
            piVar2 = *(*0x15f30 + 0x70);
            do {
                if ((*0x15540 == *piVar2) && (*0x15548 == piVar2[1])) {
                    *0x15f40 = (*(*0x15f30 + 0x70))[uVar1 * 3 + 2];
                    return *0x15f40;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x15f30 + 0x68));
        }
    }
    return *0x15f40;
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


/* fcn.00014f40 @ 0x14f40 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h

int64_t fcn.00014f40(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong **arg3_00;
    int64_t iStackX_10;
    int64_t iStackX_18;
    ulong *puStackX_20;
    int64_t *piVar5;
    ulong in_stack_ffffffffffffffb0;
    uint uVar7;
    int64_t *piVar6;
    int64_t iStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    ulong *puStack_30;
    int64_t var_bp_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    int64_t var_8h;
    
    uVar7 = in_stack_ffffffffffffffb0 >> 0x20;
    puStackX_20 = NULL;
    iStackX_10 = arg2;
    iStackX_18 = arg3;
    iVar1 = (**(*0x15f78 + 0x98))(arg1,0x15680,&iStack_38);
    if ((-1 < iVar1) &&
       (iVar1 = (**(*0x15f78 + 0x118))(arg1,0x156c0,&iStackX_10,arg1,0,CONCAT44(uVar7,2)), -1 < iVar1)) {
        arg3_00 = &puStack_30;
        iVar1 = (**(*0x15f78 + 0x140))(0x15620,0);
        if (-1 < iVar1) {
            iStackX_18 = 0;
            iStack_48 = 0;
            for (puVar4 = iStackX_10 + 0x14; (puVar4 < *(iStackX_10 + 0x10) + iStackX_10 && (*(puVar4 + 3) != '\x02'));
                puVar4 = puVar4 + (*puVar4 & 0xffffff)) {
            }
            piVar6 = &iStackX_18;
            piVar5 = &iStack_48;
            iVar2 = fcn.00014d90(iStack_38,puVar4 + 1,arg3_00,arg1);
            iVar1 = iStackX_18;
            if (-1 < iVar2) {
                if (*0x15f90 == '\0') {
                    *0x15fa0 = 0x15fa0;
                    *0x15fa8 = 0x15fa0;
                    *0x15f90 = '\x01';
                }
                iVar2 = (**puStack_30)(puStack_30,iStackX_10,iStackX_18,&uStack_40,piVar5,piVar6);
                if (iVar2 < 0) {
                    return iVar2;
                }
                iVar3 = (**(*0x15f78 + 0x40))(4,0x38,&puStackX_20);
                iVar2 = iStack_48;
                if (-1 < iVar3) {
                    puStackX_20[2] = *(iStack_48 + 8);
                    puStackX_20[3] = iVar1;
                    puStackX_20[4] = uStack_40;
                    (**(*0x15f78 + 0x160))(puStackX_20 + 5,puVar4 + 6,0x10);
                    *puStackX_20 = 0x15fa0;
                    puStackX_20[1] = *0x15fa8;
                    **0x15fa8 = puStackX_20;
                    *0x15fa8 = puStackX_20;
                }
                if (iVar2 != 0) {
                    *(iVar2 + 0x18) = uStack_40;
                }
            }
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.00011c8c @ 0x11c8c */

void fcn.00011c8c(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00011e80(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00011e80 @ 0x11e80 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00011e80(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x00011edf;
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
code_r0x00011edf:
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
        uVar21 = fcn.00012da8(arg4,0xf4241);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.00012c0c(arg4,0xf4241);
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
            pcVar8 = 0x15964;
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
code_r0x0001229a:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x15964;
            }
            else {
                pcVar8 = 0x15968;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x00012031:
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
                    goto code_r0x000121d4;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x000121eb;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x000121d4;
                        }
                        goto code_r0x000121eb;
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
code_r0x000121d4:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x00012031;
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
                        goto code_r0x00012031;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x000121eb;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x000121d4;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x000121eb:
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
                        fcn.00012be8(&var_68h_2,0x26,0,0x158f8);
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
                            goto code_r0x0001229a;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x00012483;
                        if (uStack_a8 == 0x58) goto code_r0x00012578;
                        if (uStack_a8 == 0x61) goto code_r0x0001248c;
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
                            goto code_r0x00012012;
                        }
                        if (uStack_a8 != 100) goto code_r0x0001200e;
                        goto code_r0x0001258f;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x15964;
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
                goto code_r0x000127bc;
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
                            iVar12 = 0x159fb;
                            goto code_r0x0001253f;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x0001253f:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x000127bc;
                    }
                    fcn.00012be8(&var_68h_2,0x26,0,0x1595c);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x00012483:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x0001248c:
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
                        goto code_r0x000127bc;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x0001200e;
                            goto code_r0x0001257c;
                        }
                        goto code_r0x00012581;
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
                        goto code_r0x000127bc;
                    }
                    fcn.00012be8(&var_68h_2,0x26,0,0x15940);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x000127bc;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x00012578:
            uVar21 = uVar21 | 0x20;
code_r0x0001257c:
            uVar21 = uVar21 | 0x80;
code_r0x00012581:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x0001258f:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x000125d1;
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
code_r0x000125d1:
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
code_r0x00012659:
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
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x00012659;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar10 = uVar5;
            do {
                uVar6 = uVar10 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = "0123456789ABCDEFG"[uVar10 % uVar16];
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
code_r0x0001200e:
            pcVar8 = &uStack_a8;
code_r0x00012012:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x000127bc:
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
                arg1 = fcn.00011cbc(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00011cbc(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
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
                arg1 = fcn.00011cbc(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
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
                arg1 = fcn.00011cbc(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
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


/* fcn.000105d8 @ 0x105d8 */

int16_t fcn.000105d8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t var_28h;
    uint32_t var_bp_10h;
    int64_t var_bp_8h;
    
    var_bp_10h._0_2_ = 0;
    var_28h = 0;
    var_bp_8h = 0;
    if ((*0x15ee8 != NULL) || (iVar1 = (**(*0x15f78 + 0x140))(0x15530,0,0x15ee8), -1 < iVar1)) {
        if (*0x15eb0 == 0) {
            iVar1 = (*(*0x15ee8)[3])(*0x15ee8,arg1,var_28h,&var_bp_8h);
            if (iVar1 == -0x7ffffffffffffffb) {
                iVar1 = (**(*0x15f78 + 0x40))(4,var_bp_8h,&var_28h);
                if (iVar1 < 0) {
                    return 0;
                }
                iVar1 = (*(*0x15ee8)[3])(*0x15ee8,arg1,var_28h,&var_bp_8h);
                if (iVar1 < 0) {
                    return 0;
                }
            }
            *0x15eb0 = var_28h;
            iVar1 = var_28h;
        }
        else {
            var_28h = *0x15eb0;
            iVar1 = *0x15eb0;
        }
        do {
            for (; *var_28h != ';'; var_28h = var_28h + 1) {
                if (*var_28h == '\0') {
                    if (var_bp_10h == 0) {
                        iVar1 = (***0x15ee8)(*0x15ee8,arg1,&var_bp_10h,iVar1,0,arg2,0);
                    }
                    else {
                        iVar1 = (*(*0x15ee8)[2])(*0x15ee8,arg1,var_bp_10h,iVar1,arg2,0);
                    }
                    if (-1 < iVar1) {
                        return var_bp_10h;
                    }
                    return 0;
                }
            }
            *var_28h = 0;
            if (var_bp_10h == 0) {
                iVar2 = (***0x15ee8)(*0x15ee8,arg1,&var_bp_10h,iVar1,0,arg2,0);
            }
            else {
                iVar2 = (*(*0x15ee8)[2])(*0x15ee8,arg1,var_bp_10h,iVar1,arg2,0);
            }
            *var_28h = 0x3b;
            var_28h = var_28h + 1;
            iVar1 = var_28h;
        } while (-1 < iVar2);
    }
    return 0;
}


/* fcn.000108a8 @ 0x108a8 */

ulong fcn.000108a8(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    char *pcVar2;
    
    pcVar2 = *arg2;
    while( true ) {
        if (*pcVar2 == '\x7f') {
            return 0x800000000000000e;
        }
        if ((*pcVar2 == '\x01') && (pcVar2[1] == '\x01')) break;
        pcVar2 = pcVar2 + (pcVar2[2] + pcVar2[3] * 0x100);
    }
    //WARNING: Could not recover jumptable at 0x000108e6. Too many branches
    //WARNING: Treating indirect jump as call
    uVar1 = (**(*0x15f78 + 0xb8))(0x154f0,arg2,arg1);
    return uVar1;
}


/* fcn.000153b0 @ 0x153b0 */

int64_t fcn.000153b0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint *puVar4;
    
    uVar1 = arg2;
    puVar4 = arg1;
    if (3 < arg3) {
        if ((arg1 & 3U) != 0) {
            iVar3 = 4 - (arg1 & 3U);
            arg3 = arg3 - iVar3;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar4 = uVar1;
                puVar4 = puVar4 + 1;
            }
        }
        for (uVar2 = arg3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar4 = puVar4 + 1;
        }
        arg3 = arg3 & 3;
    }
    for (; arg3 != 0; arg3 = arg3 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
    }
    return arg1;
}


/* fcn.00012f50 @ 0x12f50 */

bool fcn.00012f50(int64_t noname_0,int64_t noname_1,int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int16_t *piVar2;
    int16_t *piVar3;
    char16_t *pcVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t aiStackX_18 [2];
    ulong auStack_28 [2];
    
    auStack_28[0] = 0x59;
    aiStackX_18[0] = arg1;
    piVar3 = fcn.00012e40(noname_0,noname_1,0);
    iVar6 = 0;
    if (piVar3 != NULL) {
        pcVar4 = L"GUID=00000000000000000000000000000000&NAME=0000&PATH=00";
        iVar5 = iVar6;
        do {
            pcVar4 = pcVar4 + 1;
            iVar5 = iVar5 + 1;
        } while (*pcVar4 != L'\0');
        iVar1 = *piVar3;
        piVar2 = piVar3;
        while (iVar1 != 0) {
            piVar2 = piVar2 + 1;
            iVar6 = iVar6 + 1;
            iVar1 = *piVar2;
        }
        iVar6 = iVar5 * 2 + iVar6 * 2;
        iVar5 = fcn.000152a0(iVar6 + 4);
        fcn.00011c8c(iVar5,iVar6 + 4,0x15d20,0x15d70);
        (**(*0x15f38 + 0x48))(piVar3);
        if (iVar5 != 0) {
            iVar6 = (**(*0x15f58 + 0x20))(*0x15f58,iVar5,arg2,auStack_28,aiStackX_18);
            (**(*0x15f38 + 0x48))(iVar5);
            return -1 < iVar6;
        }
    }
    return false;
}


/* fcn.00010844 @ 0x10844 */

int64_t fcn.00010844(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t iVar2;
    int aiStackX_18 [2];
    int aiStackX_20 [2];
    
    iVar2 = (**(*arg3 + 0x28))(*arg3,aiStackX_18,aiStackX_20);
    if (-1 < iVar2) {
        cVar1 = *((arg2 & 0xffU) + 0x17 + *0x15ef0);
        if (cVar1 == '\x01') {
            *arg1 = aiStackX_18[0];
        }
        else if (cVar1 == '\0') {
            *arg1 = aiStackX_18[0] + aiStackX_20[0] * 2;
        }
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.00010cb8 @ 0x10cb8 */

void fcn.00010cb8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint8_t in_stack_00000028;
    int64_t iStack_98;
    ulong uStack_90;
    uint uStack_88;
    uchar uStack_84;
    uchar uStack_83;
    uint16_t uStack_82;
    uint uStack_80;
    uint uStack_7c;
    uint uStack_78;
    uint uStack_74;
    uint uStack_70;
    uint uStack_6c;
    uint uStack_68;
    uint uStack_64;
    uchar uStack_60;
    uchar auStack_58 [16];
    ulong uStack_48;
    uint64_t uStack_40;
    uint uStack_38;
    uint uStack_34;
    uint uStack_30;
    uint uStack_2c;
    uint uStack_28;
    uint uStack_24;
    uint uStack_20;
    uint uStack_1c;
    uchar uStack_18;
    
    fcn.000153b0(&uStack_90,0,0x31);
    iVar1 = (**(*0x15f78 + 0x98))(arg2,0x15560,&iStack_98);
    if ((-1 < iVar1) && (arg3 == 1)) {
        iVar1 = (**(*0x15f78 + 0x118))(arg1,0x15570,auStack_58,0,arg1,2);
        if (-1 < iVar1) {
            uStack_7c = CONCAT13(0xef,uStack_7c);
            uStack_82 = in_stack_00000028;
            uStack_40 = CONCAT16(in_stack_00000028,CONCAT15(uStack_83,CONCAT14(arg4,uStack_88)));
            uStack_18 = uStack_60;
            uStack_48 = uStack_90;
            uStack_38 = uStack_80;
            uStack_34 = uStack_7c;
            uStack_30 = uStack_78;
            uStack_2c = uStack_74;
            uStack_28 = uStack_70;
            uStack_24 = uStack_6c;
            uStack_20 = uStack_68;
            uStack_1c = uStack_64;
            uStack_84 = arg4;
            (**(*(*(iStack_98 + 0x30) + 0x350) + 0xb0))(*(iStack_98 + 0x30),&uStack_48);
        }
    }
    return;
}


/* fcn.000152a0 @ 0x152a0 */

void fcn.000152a0(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00015270(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.00010300(arg1_00,arg1);
    }
    return;
}


/* fcn.00015270 @ 0x15270 */

ulong fcn.00015270(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x15f38 + 0x40))(4,param_2,auStackX_18);
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


/* fcn.00012e40 @ 0x12e40 */

int64_t fcn.00012e40(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iStackX_8;
    int64_t iStackX_10;
    
    iStackX_10 = arg2;
    if (*0x15f70 == 0) {
        iStackX_8 = arg1;
        iVar1 = (**(*0x15f38 + 0x140))(0x15550,0,0x15f70);
        if ((iVar1 < 0) || (*0x15f70 == 0)) {
            return 0;
        }
    }
    iStackX_8 = 0;
    if (arg3 == 0) {
        iVar1 = (**(*0x15f70 + 8))(*0x15f70,&iStackX_8,&iStackX_10,1,0x155a8,0x15740);
        if (-1 < iVar1) {
            iVar1 = fcn.000152a0(2);
            return iVar1;
        }
        if (iVar1 != -0x7ffffffffffffffb) {
            return 0;
        }
        iVar1 = fcn.000152a0(iStackX_8);
        if (iVar1 == 0) {
            return 0;
        }
    }
    else {
        iVar1 = arg3;
    }
    iVar2 = (**(*0x15f70 + 8))(*0x15f70,&iStackX_8,iVar1,arg3 == 0,0x155a8,0x15740);
    if (iVar2 < 0) {
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.0001304c @ 0x1304c */

int64_t * fcn.0001304c(ulong param_1)

{
    int64_t *piVar1;
    int64_t iVar2;
    
    piVar1 = fcn.00015270(param_1,0x18);
    if (piVar1 != NULL) {
        iVar2 = fcn.00015270();
        *piVar1 = iVar2;
        if (iVar2 != 0) {
            piVar1[2] = 0;
            piVar1[1] = 0x200;
            return piVar1;
        }
        (**(*0x15f38 + 0x48))(piVar1);
    }
    return NULL;
}


/* fcn.0001327c @ 0x1327c */

void fcn.0001327c(int64_t arg1)

{
    unkbyte7 in_R8;
    uchar auStack_28 [2];
    ulong uStack_26;
    ulong uStack_1e;
    
    fcn.00010300(auStack_28,0x12);
    uStack_26 = *0x154d0;
    uStack_1e = *0x154d8;
    fcn.0001312c(arg1,auStack_28,CONCAT71(in_R8,0x5f),0x12);
    return;
}


/* fcn.0001312c @ 0x1312c */

int64_t fcn.0001312c(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    uint8_t uVar1;
    char in_stack_00000028;
    char in_stack_00000030;
    
    *arg1 = arg2;
    uVar1 = in_stack_00000028 + arg3 & 0x7fU | in_stack_00000030 << 7;
    *(arg1 + 1) = uVar1;
    arg1_00 = fcn.000130d0(noname_0,uVar1 & 0x7f);
    if ((arg3 != 0) && (arg1_00 != arg1)) {
        section..text(arg1_00,arg1,arg3);
    }
    return arg1_00;
}


/* fcn.000130d0 @ 0x130d0 */

int64_t fcn.000130d0(int64_t arg1,int64_t arg2)

{
    uint64_t arg1_00;
    int64_t iVar1;
    ulong uVar2;
    
    arg1_00 = *(arg1 + 8);
    if (arg1_00 < *(arg1 + 0x10) + arg2) {
        uVar2 = fcn.000152cc(arg1,arg1_00,arg2 + 0x200 + arg1_00,*arg1);
        *arg1 = uVar2;
        *(arg1 + 8) = *(arg1 + 8) + arg2 + 0x200;
    }
    iVar1 = *(arg1 + 0x10);
    *(arg1 + 0x10) = iVar1 + arg2;
    return *arg1 + iVar1;
}


/* fcn.000152cc @ 0x152cc */

int64_t fcn.000152cc(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00015270(noname_0,arg2);
    if (arg1_00 != 0) {
        if (arg2 != 0) {
            arg1_00 = fcn.00010300(arg1_00,arg2);
        }
        if ((arg1_00 != 0) && (arg3 != 0)) {
            if (arg1 < arg2) {
                arg2 = arg1;
            }
            if ((arg2 != 0) && (arg1_00 != arg3)) {
                section..text(arg1_00,arg3,arg2);
            }
            (**(*0x15f38 + 0x48))(arg3);
        }
    }
    return arg1_00;
}


/* section..text @ 0x102c0 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 20992 named .text
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


/* fcn.000131fc @ 0x131fc */

void fcn.000131fc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    uchar auStack_28 [2];
    ushort uStack_26;
    uint8_t uStack_24;
    uchar uStack_23;
    uchar auStack_22 [26];
    
    fcn.00010300(auStack_28,0x1c);
    uStack_26 = arg2;
    uStack_24 = arg3 & 0x30;
    uStack_23 = 0;
    uVar1 = 0;
    section..text(auStack_22,&stack0x00000028,1);
    fcn.0001312c(arg1,auStack_28,CONCAT71(uVar1 >> 8,9),7);
    return;
}


/* fcn.000108f8 @ 0x108f8 */

//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h
//WARNING: Variable defined which should be unmapped: var_39h

ushort fcn.000108f8(int64_t arg1)

{
    char cVar1;
    uchar uVar2;
    ushort uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint8_t uVar8;
    uint64_t uVar9;
    uint16_t uVar10;
    uint64_t uVar11;
    uint8_t uVar12;
    int iVar13;
    int8_t var_9h;
    int64_t var_fh;
    int aiStackX_10 [2];
    int aiStackX_18 [2];
    uint auStackX_20 [2];
    int16_t var_6fh;
    int64_t var_77h;
    int32_t var_7fh;
    int64_t iStack_d8;
    int64_t iStack_d0;
    int64_t iStack_c8;
    int64_t iStack_c0;
    uint64_t uStack_b8;
    uchar auStack_b0 [8];
    ulong uStack_a8;
    int64_t iStack_a0;
    uint64_t uStack_98;
    uint64_t uStack_90;
    uchar auStack_88 [7];
    int64_t var_79h;
    uint32_t var_71h;
    int64_t var_69h;
    int64_t var_61h;
    uint32_t var_59h;
    int64_t var_51h;
    int64_t var_49h;
    int64_t var_41h;
    uint32_t var_39h;
    uint32_t var_31h;
    uint32_t var_29h;
    int64_t var_21h;
    
    uVar7 = 0;
    iStack_c8 = 0;
    iStack_d0 = 0;
    auStackX_20[0] = 0;
    iVar5 = (**(*0x15f78 + 0x138))(2,0x154c0,0,&uStack_b8,&iStack_d8);
    uVar12 = 0;
    if (iVar5 < 0) {
        uStack_b8 = uVar7;
    }
    uVar3 = aiStackX_10[0];
    if (uStack_b8 != 0) {
        iVar13 = aiStackX_10[0];
        do {
            iVar5 = (**(*0x15f78 + 0x98))(*(iStack_d8 + uVar7 * 8),0x154e0,auStack_b0);
            if ((((iVar5 < 0) || (iVar5 = fcn.000108a8(&uStack_a8,auStack_b0), iVar5 < 0)) ||
                (iVar5 = (**(*0x15f78 + 0x118))(uStack_a8,0x154f0,&iStack_a0,0,uStack_a8,2), iVar5 < 0)) ||
               (iVar5 = (**(iStack_a0 + 0x70))(iStack_a0,&var_49h + 1,&uStack_98,&uStack_90,auStack_88), iVar5 < 0)
               ) {
code_r0x00010c74:
                (**(*0x15f78 + 0x48))(iStack_d8);
code_r0x00010c7b:
                uVar3 = 0;
                goto code_r0x00010ca3;
            }
            uVar9 = 0;
            do {
                if (((*(uVar9 + 0x14 + *0x15ef0) != '\0') && (uStack_98 == *(uVar9 + 0x1a + *0x15ef0))) &&
                   ((uStack_90 == *(uVar9 + 0x1d + *0x15ef0) && (_auStack_88 == *(uVar9 + 0x20 + *0x15ef0))))) {
                    iVar5 = (**(*0x15f78 + 0x98))(*(iStack_d8 + uVar7 * 8),0x154c0,&iStack_c8);
                    if ((iVar5 < 0) || (iVar5 = (**(iStack_c8 + 0x28))(iStack_c8,aiStackX_10,aiStackX_18), iVar5 < 0)
                       ) {
                        (**(*0x15f78 + 0x48))(iStack_d8);
                        return 0;
                    }
                    cVar1 = *(uVar9 + 0x17 + *0x15ef0);
                    if (cVar1 == '\x01') {
                        iVar13 = aiStackX_10[0];
                    }
                    else if (cVar1 == '\0') {
                        iVar13 = aiStackX_10[0] + aiStackX_18[0] * 2;
                        aiStackX_18[0] = iVar13;
                    }
                    if ((arg1 & 0xff) == iVar13 + uVar9 * 6) {
                        iVar5 = (**(*0x15f78 + 0x40))(4,0x200,&iStack_d0);
                        if (iVar5 < 0) goto code_r0x00010c74;
                        (**(*0x15f78 + 0x168))(iStack_d0,0x200,0);
                        auStackX_20[0] = 0x200;
                        iVar5 = (**(iStack_c8 + 0x18))(iStack_c8,iStack_d0,auStackX_20);
                        if (iVar5 < 0) {
                            (**(*0x15f78 + 0x48))(iStack_d0);
                            goto code_r0x00010c74;
                        }
                        if (iStack_d0 != 0) {
                            (**(*0x15f78 + 0x168))(&var_79h + 1,0x2a,0x20);
                            (**(*0x15f78 + 0x160))(&var_79h + 3,iStack_d0 + 0x36,0x28);
                            uVar4 = 1;
                            uVar11 = 0;
                            do {
                                uVar6 = uVar4;
                                uVar10 = uVar11 + 2;
                                uVar2 = *(&var_79h + uVar11 + 3);
                                *(&var_79h + uVar11 + 3) = *(&var_79h + uVar6 + 3);
                                uVar4 = uVar10 + 1;
                                *(&var_79h + uVar6 + 3) = uVar2;
                                uVar11 = uVar10;
                            } while (uVar4 < 0x28);
                            var_51h._3_1_ = 0;
                            iVar5 = (**(*0x15f78 + 0x40))(4,100,&iStack_c0);
                            if (iVar5 < 0) {
                                (**(*0x15f78 + 0x48))(iStack_d0);
                                (**(*0x15f78 + 0x48))(iStack_d8);
                                goto code_r0x00010c7b;
                            }
                            fcn.00011c8c(iStack_c0,100,0x15738,&var_79h + 1);
                            uVar3 = fcn.000105d8(*0x15ef8,iStack_c0);
                            if (iStack_d0 != 0) {
                                (**(*0x15f78 + 0x48))();
                                iStack_d0 = 0;
                            }
                            (**(*0x15f78 + 0x48))(iStack_c0);
                        }
                    }
                }
                uVar8 = uVar9 + 1;
                uVar9 = uVar8;
            } while (uVar8 < 3);
            uVar12 = uVar12 + 1;
            uVar7 = uVar12;
        } while (uVar7 < uStack_b8);
    }
    (**(*0x15f78 + 0x48))(iStack_d8);
code_r0x00010ca3:
    return uVar3;
}


/* fcn.000132d8 @ 0x132d8 */

void fcn.000132d8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    unkbyte6 Var2;
    uchar auStack_18 [2];
    ushort uStack_16;
    ushort uStack_14;
    uchar uStack_12;
    
    uVar1 = arg3 >> 8;
    Var2 = arg3 >> 0x10;
    fcn.00010300(auStack_18,7);
    uStack_12 = 0;
    uStack_16 = arg2;
    uStack_14 = arg3;
    fcn.0001312c(arg1,auStack_18,CONCAT62(Var2,CONCAT11(uVar1,2)),7);
    return;
}


/* fcn.00013340 @ 0x13340 */

int64_t fcn.00013340(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    unkbyte7 Var2;
    int64_t in_stack_00000048;
    uchar auStack_38 [6];
    ushort uStack_32;
    ushort uStack_30;
    ushort uStack_2e;
    uchar uStack_2b;
    
    Var2 = noname_2 >> 8;
    fcn.00010300(auStack_38,0x26);
    iVar1 = *(arg1 + 0x10);
    uStack_30 = 0xddde;
    uStack_2b = 0;
    uStack_32 = arg2;
    uStack_2e = arg3;
    fcn.0001312c(arg1,auStack_38,CONCAT71(Var2,5),0x11);
    fcn.00013198(arg1,in_stack_00000048);
    fcn.000131d4(arg1);
    return *arg1 + iVar1;
}


/* fcn.00013198 @ 0x13198 */

void fcn.00013198(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    int64_t arg1_00;
    
    arg2_00 = *(arg2 + 0x10);
    arg2 = *arg2;
    arg1_00 = fcn.000130d0(arg1,arg2_00);
    if ((arg2_00 != 0) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg2_00);
    }
    return;
}


/* fcn.000131d4 @ 0x131d4 */

void fcn.000131d4(int64_t arg1)

{
    unkbyte7 in_R8;
    uchar auStackX_10 [24];
    
    fcn.0001312c(arg1,auStackX_10,CONCAT71(in_R8,0x29),2);
    return;
}


/* fcn.000136c0 @ 0x136c0 */

//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h

int64_t fcn.000136c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_68h)

{
    bool bVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    uint64_t *arg2_00;
    uint64_t *puVar5;
    uint64_t *puVar6;
    int64_t iVar7;
    uint64_t *arg1_00;
    uint32_t uVar8;
    uint64_t uVar9;
    uint64_t *arg1_01;
    int64_t unaff_R15;
    uint64_t uStackX_10;
    uint16_t uStackX_18;
    int64_t iStackX_20;
    uint32_t var_48h;
    int64_t var_50h;
    int16_t var_58h;
    int64_t var_60h;
    uint64_t *puStackY_68;
    uint64_t *puStackY_60;
    ulong uStackY_58;
    int64_t in_stack_ffffffffffffffb8;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    
    uVar3 = *0x15ef8;
    uStackX_18 = arg3;
    puVar5 = NULL;
    uStackY_58 = *0x15ef8;
    puStackY_68 = NULL;
    puVar6 = NULL;
    uStackX_10 = arg2;
    iStackX_20 = arg4;
    iVar4 = (**(*0x15f68 + 0x20))(*0x15f68,*0x15ef8,&puStackY_68,0);
    if (iVar4 != -0x7ffffffffffffffb) {
        return iVar4;
    }
    arg2_00 = fcn.00015270(0x8000000000000005,puStackY_68);
    if (arg2_00 == NULL) {
        return -0x7ffffffffffffff7;
    }
    iVar4 = (**(*0x15f68 + 0x20))(*0x15f68,uVar3,&puStackY_68,arg2_00);
    if (-1 < iVar4) {
        puStackY_68 = puStackY_68 + *(arg4 + 0x10);
        puVar5 = fcn.000152a0(puStackY_68);
        puStackY_60 = puVar5;
        if ((puVar5 == NULL) || (arg1_00 = puStackY_68, puVar6 = fcn.000152a0(puStackY_68), puVar6 == NULL)) {
            iVar4 = -0x7ffffffffffffff7;
        }
        else {
            uVar9 = 0x14;
            if (puVar5 != arg2_00) {
                arg1_00 = puVar5;
                section..text(puVar5,arg2_00,0x14);
            }
            iVar4 = iStackX_20;
            uVar2 = arg2_00[2];
            arg1_01 = puVar5 + 0x14;
            bVar1 = false;
            if (0x14 < uVar2) {
                do {
                    puVar5 = uVar9 + arg2_00;
                    if (&uStackX_10 != puVar5) {
                        arg1_00 = &uStackX_10;
                        section..text(arg1_00,puVar5,4);
                    }
                    uVar8 = uVar9 + (*puVar5 & 0xffffff);
                    uVar9 = uVar8;
                    if ((*(puVar5 + 3) == '\x02') &&
                       (iVar7 = fcn.000133fc(arg1_00,uStackX_18,puVar5,iVar4,in_stack_ffffffffffffffb8,unaff_R15),
                       -1 < iVar7)) {
                        bVar1 = true;
                        puVar5 = puVar6;
                    }
                    if (&uStackX_10 != puVar5) {
                        arg1_00 = &uStackX_10;
                        section..text(arg1_00,puVar5,4);
                    }
                    if (((uStackX_10 & 0xffffff) != 0) && (arg1_01 != puVar5)) {
                        arg1_00 = arg1_01;
                        section..text(arg1_01,puVar5,uStackX_10 & 0xffffff);
                    }
                    puVar5 = puStackY_60;
                    arg1_01 = arg1_01 + (uStackX_10 & 0xffffff);
                } while (uVar8 < uVar2);
                if (bVar1) {
                    puStackY_68 = arg1_01 - puStackY_60;
                    *(puStackY_60 + 2) = puStackY_68;
                    iVar4 = (**(*0x15f68 + 0x10))(*0x15f68,uStackY_58,puStackY_60);
                    goto code_r0x000138b8;
                }
            }
            iVar4 = -0x7ffffffffffffff2;
        }
    }
code_r0x000138b8:
    (**(*0x15f38 + 0x48))(arg2_00);
    if (puVar5 != NULL) {
        (**(*0x15f38 + 0x48))(puVar5);
    }
    if (puVar6 != NULL) {
        (**(*0x15f38 + 0x48))(puVar6);
    }
    return iVar4;
}


/* fcn.000130a0 @ 0x130a0 */

void fcn.000130a0(int64_t arg1)

{
    if (*arg1 != 0) {
        (**(*0x15f38 + 0x48))();
    }
    //WARNING: Could not recover jumptable at 0x000130ca. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x15f38 + 0x48))(arg1);
    return;
}


/* fcn.00010798 @ 0x10798 */

ushort fcn.00010798(int64_t arg1)

{
    ushort uVar1;
    int64_t iVar2;
    int64_t aiStackX_10 [3];
    
    iVar2 = (**(*0x15f78 + 0x40))(4,100,aiStackX_10);
    if (iVar2 < 0) {
        uVar1 = 0;
    }
    else {
        fcn.00011c8c(aiStackX_10[0],100,0x156d0,arg1 & 0xff);
        uVar1 = fcn.000105d8(*0x15ef8,aiStackX_10[0]);
        if (aiStackX_10[0] != 0) {
            (**(*0x15f78 + 0x48))();
        }
    }
    return uVar1;
}


/* fcn.00011708 @ 0x11708 */

//WARNING: Variable defined which should be unmapped: var_4h
//WARNING: Variable defined which should be unmapped: var_10h

void fcn.00011708(void)

{
    bool bVar1;
    int16_t iVar2;
    int64_t arg1;
    int64_t arg1_00;
    int64_t arg1_01;
    int64_t iVar3;
    int64_t iVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    uchar *arg2;
    ulong uVar7;
    char16_t *arg2_00;
    int64_t in_R9;
    int16_t *piVar8;
    int64_t iVar9;
    int64_t iStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    uchar auStackY_48 [2];
    int16_t iStackY_46;
    int16_t iStackY_44;
    int16_t iStackY_42;
    uint in_stack_ffffffffffffffc0;
    uchar in_stack_ffffffffffffffc4;
    ushort in_stack_ffffffffffffffc5;
    uchar in_stack_ffffffffffffffc7;
    int64_t var_10h;
    int8_t var_4h;
    int16_t var_3h;
    
    iVar9 = 0;
    iStackX_8 = 0;
    bVar1 = false;
    arg1 = fcn.0001304c();
    arg1_00 = fcn.0001304c();
    iStackX_10 = arg1_00;
    arg1_01 = fcn.0001304c();
    iStackX_18 = arg1_01;
    iVar3 = fcn.0001327c(arg1);
    iVar4 = fcn.0001327c(arg1_00);
    if ((iVar3 != 0) && (iVar4 != 0)) {
        *(iVar3 + 0x12) = 0;
        *(iVar4 + 0x12) = 0;
        *(iVar3 + 0x13) = 0x1000;
        *(iVar4 + 0x13) = 0x1001;
        uVar6 = 0;
        do {
            if (*(uVar6 + 0x14 + *0x15ef0) != '\0') {
                bVar1 = true;
                break;
            }
            uVar5 = uVar6 + 1;
            uVar6 = uVar5;
        } while (uVar5 < 3);
        fcn.000132d8(arg1,4,3);
        uVar7 = 0;
        fcn.000132d8(arg1,*0x15eb8,3);
        if (bVar1) {
            fcn.000131fc(arg1_01,9,CONCAT71(uVar7 >> 8,0x30));
            uVar7 = 0;
            fcn.000131fc(arg1_01,8,0);
            fcn.00013340(arg1,*0x15590,uVar7,0);
            arg2_00 = &iStackX_8;
            arg2 = 0x32;
            iVar3 = 4;
            iVar4 = (**(*0x15f78 + 0x40))(4,0x32,arg2_00);
            if (-1 < iVar4) {
                uVar6 = 0;
                piVar8 = 0x15f24;
                do {
                    if (*(iVar9 + 0x14 + *0x15ef0) != '\0') {
                        iVar2 = *piVar8;
                        if (iVar2 == 0) {
                            iVar2 = fcn.00010798(CONCAT71(iVar3 >> 8,uVar6));
                            *piVar8 = iVar2;
                            if (iVar2 == 0) {
                                arg2_00 = L"SATA Controller %d";
                                fcn.00011c8c(iStackX_8,0x32,0x15890,uVar6);
                                iVar2 = fcn.000105d8(*0x15ef8,iStackX_8);
                                *piVar8 = iVar2;
                            }
                        }
                        fcn.00010300(auStackY_48,0xf);
                        arg2 = auStackY_48;
                        iStackY_42 = uVar6 + 0x200;
                        arg2_00 = CONCAT71(arg2_00 >> 8,0xf);
                        in_stack_ffffffffffffffc4 = 4;
                        in_stack_ffffffffffffffc5 = 2;
                        iVar3 = arg1;
                        iStackY_46 = iVar2;
                        iStackY_44 = iVar2;
                        fcn.0001312c(arg1,arg2,arg2_00,0xf);
                    }
                    uVar5 = uVar6 + 1;
                    uVar6 = uVar5;
                    iVar9 = iVar9 + 1;
                    piVar8 = piVar8 + 1;
                } while (uVar5 < 3);
                iVar3 = iStackX_8;
                (**(*0x15f78 + 0x48))();
                arg1_00 = iStackX_10;
                arg1_01 = iStackX_18;
            }
        }
        else {
            (**(*0x15f78 + 0x40))(4,0x32,&iStackX_8);
            fcn.00011c8c(iStackX_8,0x32,0x158b8,in_R9);
            *0x15eb8 = fcn.000105d8(*0x15ef8,iStackX_8);
            arg2 = *0x15eb8;
            fcn.000132d8(arg1,arg2,3);
            iVar3 = iStackX_8;
            if (iStackX_8 != 0) {
                (**(*0x15f78 + 0x48))();
            }
        }
        fcn.000136c0(iVar3,arg2,1,arg1,
                     CONCAT17(in_stack_ffffffffffffffc7,
                              CONCAT25(in_stack_ffffffffffffffc5,
                                       CONCAT14(in_stack_ffffffffffffffc4,in_stack_ffffffffffffffc0))));
        if (arg1 != 0) {
            fcn.000130a0(arg1);
            fcn.000130a0(arg1_00);
            fcn.000130a0(arg1_01);
        }
    }
    return;
}


/* fcn.000112cc @ 0x112cc */

//WARNING: Variable defined which should be unmapped: var_18h

void fcn.000112cc(int64_t arg1)

{
    char cVar1;
    ushort uVar2;
    uint16_t uVar3;
    int64_t iVar4;
    int64_t arg1_00;
    int64_t arg1_01;
    int64_t iVar5;
    int64_t iVar6;
    ulong noname_0;
    ulong noname_1;
    int64_t arg2;
    uint64_t uVar7;
    char cVar8;
    uint64_t arg3;
    char **arg1_02;
    char16_t *arg2_00;
    uint64_t arg3_00;
    uint32_t uVar9;
    int64_t iStackX_10;
    char *pcStackX_18;
    int64_t iStackX_20;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t in_stack_ffffffffffffffb0;
    int64_t var_18h;
    
    arg1_02 = &pcStackX_18;
    iStackX_10 = 0;
    pcStackX_18 = NULL;
    noname_0 = 4;
    noname_1 = 0x59;
    iVar4 = (**(*0x15f78 + 0x40))();
    if (-1 < iVar4) {
        fcn.00012f50(noname_0,noname_1,arg1_02,pcStackX_18);
        arg1_00 = fcn.0001304c();
        arg1_01 = fcn.0001304c();
        iVar4 = fcn.0001304c();
        iStackX_20 = iVar4;
        iVar5 = fcn.0001327c(arg1_00);
        iVar6 = fcn.0001327c(arg1_01);
        if ((iVar5 != 0) && (iVar6 != 0)) {
            *(iVar5 + 0x12) = 0;
            *(iVar6 + 0x12) = 0;
            *(iVar5 + 0x13) = 0x2000;
            iVar5 = CONCAT71(arg1_02 >> 8,0x14);
            *(iVar6 + 0x13) = 0x2001;
            fcn.000131fc(iVar4,0xb,iVar5);
            iVar5 = CONCAT71(iVar5 >> 8,4);
            fcn.000131fc(iVar4,0xc,iVar5);
            fcn.000131fc(iVar4,0xd,CONCAT71(iVar5 >> 8,4));
            arg2 = 0x46;
            iVar5 = 4;
            iVar6 = (**(*0x15f78 + 0x40))();
            if (-1 < iVar6) {
                arg3 = 0;
                do {
                    uVar9 = arg3 + arg1 * '\x06';
                    uVar7 = uVar9 & 0xff;
                    cVar8 = arg3;
                    if (*(uVar7 + 0x35 + *0x15ef0) != '\0') {
                        if (*(uVar7 * 2 + 0x15f00) == 0) {
                            uVar2 = fcn.000108f8(CONCAT71(iVar5 >> 8,uVar9));
                            *(uVar7 * 2 + 0x15f00) = uVar2;
                        }
                        arg3_00 = 0x10000;
                        cVar1 = *((arg1 & 0xffU) + 0x17 + *0x15ef0);
                        if (cVar1 == '\0') {
                            uVar3 = *(arg3 * 2 + 0x15ed8);
                            if (uVar3 == 0) {
                                if (cVar8 == '\0') {
                                    arg2_00 = L"Primary Master";
code_r0x000114a5:
                                    fcn.00011c8c(0,0x46,arg2_00,0x10000);
                                }
                                else {
                                    if (cVar8 == '\x01') {
                                        arg2_00 = L"Secondary Master";
                                        goto code_r0x000114a5;
                                    }
                                    if (cVar8 == '\x02') {
                                        arg2_00 = L"Primary Slave";
                                        goto code_r0x000114a5;
                                    }
                                    if (cVar8 == '\x03') {
                                        arg2_00 = L"Secondary Slave";
                                        goto code_r0x000114a5;
                                    }
                                }
                                uVar3 = fcn.000105d8(*0x15ef8,0);
                                *(arg3 * 2 + 0x15ed8) = uVar3;
                            }
code_r0x00011525:
                            fcn.000132d8(arg1_00,uVar3,3);
                        }
                        else if (cVar1 == '\x01') {
                            uVar3 = *(arg3 * 2 + 0x15ec8);
                            if (uVar3 == 0) {
                                arg3_00 = arg3;
                                fcn.00011c8c(0,0x46,0x157e8,arg3);
                                uVar3 = fcn.000105d8(*0x15ef8,0);
                                *(arg3 * 2 + 0x15ec8) = uVar3;
                            }
                            goto code_r0x00011525;
                        }
                        uVar3 = *(uVar7 * 2 + 0x15f00);
                        if (uVar3 == 0) {
                            fcn.00011c8c(0,0x46,0x157f8,arg3_00);
                            uVar3 = fcn.000105d8(*0x15ef8,0);
                            *(uVar7 * 2 + 0x15f00) = uVar3;
                        }
                        fcn.000132d8(arg1_00,uVar3,3);
                        if (*pcStackX_18 == '\0') {
                            uVar3 = *0x15ec0;
                            if (*0x15ec0 == 0) {
                                fcn.00011c8c(0,0x46,0x15818,arg3_00);
                                uVar3 = fcn.000105d8(*0x15ef8,0);
                                *0x15ec0 = uVar3;
                            }
code_r0x0001165d:
                            fcn.000132d8(arg1_00,uVar3,uVar3);
                        }
                        else {
                            if (*(uVar7 + 0x23 + *0x15ef0) != '\x01') {
                                uVar3 = *0x15ebc;
                                if (*0x15ebc == 0) {
                                    fcn.00011c8c(0,0x46,0x15858,arg3_00);
                                    uVar3 = fcn.000105d8(*0x15ef8,0);
                                    *0x15ebc = uVar3;
                                }
                                goto code_r0x0001165d;
                            }
                            fcn.00013340(arg1_00,(uVar9 & 0xff) + 0x300,0xe,(uVar9 & 0xff) + 2);
                        }
                        arg2 = 3;
                        iVar5 = arg1_00;
                        fcn.000132d8(arg1_00,3,3);
                    }
                    arg3 = cVar8 + 1U;
                } while (cVar8 + 1U < 6);
                (**(*0x15f78 + 0x48))();
                iVar5 = iStackX_10;
                iVar4 = iStackX_20;
            }
            fcn.000136c0(iVar5,arg2,2,arg1_00,in_stack_ffffffffffffffb0);
            if (arg1_00 != 0) {
                fcn.000130a0(arg1_00);
                fcn.000130a0(arg1_01);
                fcn.000130a0(iVar4);
            }
            if (pcStackX_18 != NULL) {
                (**(*0x15f78 + 0x48))();
            }
        }
    }
    return;
}


/* fcn.000110d8 @ 0x110d8 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

int64_t fcn.000110d8(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint8_t uVar6;
    uint64_t uVar7;
    uint64_t *puVar8;
    int aiStackX_10 [2];
    uchar uStackX_18;
    int64_t var_48h;
    uint32_t var_50h;
    int64_t aiStack_78 [3];
    uchar auStack_60 [8];
    uint64_t uStack_58;
    uint64_t uStack_50;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    uint32_t var_bp_20h;
    uint32_t var_18h;
    uint32_t var_10h;
    int64_t var_bp_8h;
    
    aiStack_78[0] = 0;
    uVar6 = 0;
    uStackX_18 = arg3;
    if (arg2 == 0) {
        return 0;
    }
    uVar7 = 0;
    do {
        iVar1 = (**(*0x15f78 + 0x98))(*(arg1 + uVar7 * 8),0x154e0,auStack_60);
        if (((-1 < iVar1) && (iVar1 = fcn.000108a8(aiStack_78 + 2,auStack_60), -1 < iVar1)) &&
           (iVar1 = (**(*0x15f78 + 0x118))(aiStack_78[2],0x154f0,aiStack_78,0,aiStack_78[2],2), -1 < iVar1)) {
            puVar8 = &uStack_50;
            iVar1 = (**(aiStack_78[0] + 0x70))(aiStack_78[0],&var_38h,&uStack_58,puVar8,&var_40h);
            if (-1 < iVar1) {
                uVar4 = arg4 / 6;
                uVar5 = uVar4;
                uVar3 = uVar4;
                while (uVar3 < 3) {
                    if (((*(uVar5 + 0x14 + *0x15ef0) != '\0') && (uStack_58 == *(uVar5 + 0x1a + *0x15ef0))) &&
                       ((uStack_50 == *(uVar5 + 0x1d + *0x15ef0) && (var_40h == *(uVar5 + 0x20 + *0x15ef0))))) {
                        uVar2 = 0x154c0;
                        aiStack_78[1] = 0;
                        iVar1 = (**(*0x15f78 + 0x98))(*(arg1 + uVar7 * 8),0x154c0,aiStack_78 + 1);
                        if (((-1 < iVar1) &&
                            (iVar1 = fcn.00010844(aiStackX_10,CONCAT71(uVar2 >> 8,uVar5),aiStack_78 + 1), -1 < iVar1
                            )) && ((arg4 == aiStackX_10[0] + uVar5 * 6 &&
                                   ((*((arg4 & 0xffU) + 0x23 + *0x15ef0) != '\0' &&
                                    (iVar1 = fcn.00010cb8(aiStack_78[2],*(arg1 + uVar7 * 8),*(uVar5 + 0x17 + *0x15ef0)
                                                          ,CONCAT71(puVar8 >> 8,0x42)), -1 < iVar1)))))) {
                            return iVar1;
                        }
                        break;
                    }
                    uVar3 = uVar5 + 1;
                    uVar5 = uVar3;
                }
            }
        }
        uVar6 = uVar6 + 1;
        uVar7 = uVar6;
        if (arg2 <= uVar7) {
            return 0;
        }
    } while( true );
}


/* fcn.00010dac @ 0x10dac */

int64_t fcn.00010dac(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    char16_t *pcVar2;
    int64_t arg1_00;
    int64_t iVar3;
    int64_t iVar4;
    ulong noname_1;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint8_t uVar8;
    char16_t *pcVar9;
    int64_t *arg1_01;
    unkbyte7 Var10;
    uint64_t *arg4_00;
    uint64_t uVar11;
    uint64_t uVar12;
    uint8_t uStack_a8;
    int64_t iStack_a0;
    char acStack_98 [8];
    ulong uStack_90;
    int64_t iStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    uint64_t uStack_70;
    uint64_t uStack_68;
    uint64_t uStack_60;
    uchar auStack_58 [24];
    
    arg1_01 = &iStack_a0;
    uVar11 = 0;
    iStack_80 = 0;
    iStack_a0 = 0;
    noname_1 = 0x59;
    uVar5 = 4;
    iVar1 = (**(*0x15f78 + 0x40))();
    if (-1 < iVar1) {
        fcn.00012f50(uVar5,noname_1,arg1_01,iStack_a0);
        uStack_a8 = 0;
        if (arg2 != 0) {
            do {
                uVar12 = 0;
                iVar1 = (**(*0x15f78 + 0x98))(*(arg1 + uVar11 * 8),0x154e0,&iStack_88);
                if (-1 < iVar1) {
                    iVar1 = fcn.000108a8(&iStack_78,&iStack_88);
                }
                if ((-1 < iVar1) &&
                   (iVar1 = (**(*0x15f78 + 0x118))(iStack_78,0x154f0,&iStack_80,0,iStack_78,2), -1 < iVar1)) {
                    arg4_00 = &uStack_68;
                    iVar1 = (**(iStack_80 + 0x70))(iStack_80,auStack_58,&uStack_70,arg4_00,&uStack_60);
                    if (-1 < iVar1) {
                        uVar8 = 0;
                        do {
                            if ((((*(uVar12 + 0x14 + *0x15ef0) != '\0') && (uStack_70 == *(uVar12 + 0x1a + *0x15ef0)))
                                && (uStack_68 == *(uVar12 + 0x1d + *0x15ef0))) &&
                               (uStack_60 == *(uVar12 + 0x20 + *0x15ef0))) {
                                uVar5 = 0x154c0;
                                uStack_90 = 0;
                                iVar1 = (**(*0x15f78 + 0x98))(*(arg1 + uVar11 * 8),0x154c0,&uStack_90);
                                if (-1 < iVar1) {
                                    iVar1 = fcn.00010844(acStack_98,CONCAT71(uVar5 >> 8,uVar12),&uStack_90);
                                }
                                if (iVar1 < 0) break;
                                if (*(uVar8 + acStack_98[0] + 0x23 + *0x15ef0) != '\0') {
                                    Var10 = arg4_00 >> 8;
                                    if (arg4 == '\0') {
                                        arg4_00 = CONCAT71(Var10,0x42);
                                        *(uVar8 + acStack_98[0] + 2 + iStack_a0) = 0xff;
                                    }
                                    else {
                                        arg4_00 = CONCAT71(Var10,0xc2);
                                    }
                                    iVar1 = fcn.00010cb8(iStack_78,*(arg1 + uVar11 * 8),*(uVar12 + 0x17 + *0x15ef0),
                                                         arg4_00);
                                    if (iVar1 < 0) break;
                                }
                            }
                            uVar12 = uVar12 + 1;
                            uVar8 = uVar8 + 6;
                        } while (uVar8 < 0x12);
                    }
                }
                uStack_a8 = uStack_a8 + 1;
                uVar11 = uStack_a8;
            } while (uVar11 < arg2);
        }
        iVar7 = iStack_a0;
        iVar6 = 0;
        pcVar9 = L"GUID=00000000000000000000000000000000&NAME=0000&PATH=00";
        pcVar2 = L"GUID=00000000000000000000000000000000&NAME=0000&PATH=00";
        do {
            pcVar2 = pcVar2 + 1;
            iVar6 = iVar6 + 1;
        } while (*pcVar2 != L'\0');
        iVar6 = iVar6 * 2 + 0x42;
        arg1_00 = fcn.000152a0(iVar6);
        fcn.00011c8c(arg1_00,iVar6,0x15d30,0x15d70);
        if (arg1_00 != 0) {
            iVar6 = arg1_00;
            iVar3 = (**(*0x15f58 + 0x18))(*0x15f58,arg1_00,iVar7,0x59,&iStack_88,&uStack_90);
            iVar7 = iStack_88;
            if (iVar3 < 0) {
                iVar7 = 0;
            }
            (**(*0x15f38 + 0x48))();
            if (iVar7 != 0) {
                iVar3 = 0;
                do {
                    iVar4 = iVar3;
                    pcVar9 = pcVar9 + 1;
                    iVar3 = iVar4 + 1;
                } while (*pcVar9 != L'\0');
                fcn.00012e40(arg1_00,iVar6,iVar7 + (iVar4 + 2) * 2);
                (**(*0x15f38 + 0x48))(iVar7);
            }
        }
        if (iStack_a0 != 0) {
            (**(*0x15f78 + 0x48))();
        }
    }
    return iVar1;
}


/* fcn.00011cbc @ 0x11cbc */

uchar * fcn.00011cbc(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00012c0c @ 0x12c0c */

uint64_t fcn.00012c0c(uint32_t arg1,int64_t arg2)

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


/* fcn.00012da8 @ 0x12da8 */

uint64_t fcn.00012da8(uint32_t arg1,int64_t arg2)

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


/* fcn.00012be8 @ 0x12be8 */

void fcn.00012be8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00011e80(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00010370 @ 0x10370 */

int64_t fcn.00010370(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.000133fc @ 0x133fc */

ulong fcn.000133fc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h,int64_t arg_68h)

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
            if ((*(arg2_00 + 2) == *0x15598) && (*(arg2_00 + 10) == *0x155a0)) {
                bVar2 = true;
            }
            else {
                bVar2 = false;
            }
        }
        else if ((*arg2_00 == '\x01') || (*arg2_00 == ']')) {
            if (arg2_00 + 2 != auStackX_10) {
                iVar6 = fcn.00010370(arg2_00 + 2,auStackX_10,2);
                uVar5 = iStackX_8;
                if (iVar6 != 0) {
                    bVar3 = false;
                    goto code_r0x00013508;
                }
            }
            bVar3 = true;
        }
code_r0x00013508:
        if (((bVar2) && (bVar3)) && (pcVar1 = *arg4, ((arg2_00[1] ^ pcVar1[1]) & 0x7fU) == 0)) {
            if (((pcVar1[1] & 0x7fU) == 0) || (arg2_00 == pcVar1)) {
                iVar6 = 0;
            }
            else {
                iVar6 = fcn.00010370(arg2_00,pcVar1,pcVar1[1] & 0x7f);
                uVar5 = iStackX_8;
            }
            if (iVar6 == 0) {
                if (in_stack_00000028 == NULL) goto code_r0x000135d1;
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
            iVar6 = fcn.00010370(arg2_00,pcVar1,pcVar1[1] & 0x7f);
            uVar5 = iStackX_8;
        }
        if (iVar6 == 0) break;
        do {
            uVar10 = uVar10 + (arg2_00[1] & 0x7f);
            arg2_00 = arg2_00 + (arg2_00[1] & 0x7f);
            if ((uVar5 & 0xffffff) <= uVar10) goto code_r0x000135c3;
        } while (((arg2_00[1] ^ pcVar1[1]) & 0x7fU) != 0);
    }
code_r0x000135c3:
    if ((uVar5 & 0xffffff) <= uVar10) {
        return 0x800000000000000e;
    }
code_r0x000135d1:
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


/* fcn.00013900 @ 0x13900 */

ulong fcn.00013900(int64_t arg1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    (**(*0x15f78 + 0x40))(4,arg1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.00013a98 @ 0x13a98 */

int64_t fcn.00013a98(int64_t arg1)

{
    int64_t arg1_00;
    int64_t arg1_01;
    
    arg1_00 = fcn.0001396c(arg1);
    arg1_01 = fcn.00013900(arg1_00);
    fcn.00015410(arg1_01,arg1,arg1_00);
    return arg1_01;
}


/* fcn.0001396c @ 0x1396c */

int64_t fcn.0001396c(int64_t arg1)

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


/* fcn.00015410 @ 0x15410 */

int64_t fcn.00015410(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00015118 @ 0x15118 */

int64_t fcn.00015118(uint32_t arg1,int64_t arg2,uint32_t arg3)

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


/* fcn.00013d4c @ 0x13d4c */

void fcn.00013d4c(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.000151ec @ 0x151ec */

ulong fcn.000151ec(ulong param_1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x15f38 + 0x98))(param_1,0x154e0,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.00015220 @ 0x15220 */

char * fcn.00015220(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.00015190(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.00012c40 @ 0x12c40 */

ulong fcn.00012c40(int64_t arg1,uint32_t arg2)

{
    int16_t iVar1;
    uint64_t extraout_RAX;
    int16_t *piVar2;
    int64_t iVar3;
    uint in_register_00000014;
    int16_t iVar4;
    
    iVar4 = 0;
    if (((arg1 == 0) || (1000000 < CONCAT44(in_register_00000014,arg2))) || (CONCAT44(in_register_00000014,arg2) == 0)
       ) {
        return 0x8000000000000002;
    }
    piVar2 = 0x15ce0;
    fcn.00012c0c(0x15ce0,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (piVar2 <= arg1) {
        if (arg1 < piVar2 + extraout_RAX + 1) {
            return 0x800000000000000f;
        }
        if (piVar2 < arg1) goto code_r0x00012cb1;
    }
    if (piVar2 < arg1 + CONCAT44(in_register_00000014,arg2) * 2) {
        return 0x800000000000000f;
    }
code_r0x00012cb1:
    iVar1 = 0x47;
    iVar3 = piVar2 - arg1;
    do {
        *arg1 = iVar1;
        arg1 = arg1 + 2;
        iVar1 = *(iVar3 + arg1);
    } while (iVar1 != 0);
    *arg1 = iVar4;
    return 0;
}


/* fcn.00011cf0 @ 0x11cf0 */

ulong fcn.00011cf0(uint32_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

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
                *pcVar10 = "0123456789ABCDEFG"[uVar5 % 0x10];
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
                *pcVar8 = "0123456789ABCDEFG"[arg3 % 0x10];
                arg3 = uVar5;
            } while (uVar5 != 0);
            iVar11 = pcVar8 - &cStack_38;
            if (bVar12) {
                pcVar6 = fcn.00011cbc(arg1,pcVar10,uVar9 - iVar11,SUB164(auVar2 / ZEXT816(0x10),0) + 0x30);
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


/* fcn.00012cd8 @ 0x12cd8 */

ulong fcn.00012cd8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    int16_t *piVar3;
    int64_t iVar4;
    uint64_t arg2_00;
    
    iVar4 = arg2;
    piVar3 = arg1;
    iVar1 = fcn.00012c0c(arg1,arg2);
    arg2_00 = iVar4 - iVar1;
    if ((((arg1 == 0) || (arg3 == NULL)) || (1000000 < arg2)) || (arg2 == 0)) {
        return 0x8000000000000002;
    }
    if (arg2_00 == 0) {
        return 0x8000000000000004;
    }
    uVar2 = fcn.00012c0c(arg3,arg2_00);
    if (arg2_00 <= uVar2) {
        return 0x8000000000000005;
    }
    if (arg3 <= piVar3) {
        if (piVar3 < arg3 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < piVar3) goto code_r0x00012d79;
    }
    if (arg3 < piVar3 + arg2) {
        return 0x800000000000000f;
    }
code_r0x00012d79:
    piVar3 = piVar3 + iVar1;
    for (; *arg3 != 0; arg3 = arg3 + 2) {
        *piVar3 = *arg3;
        piVar3 = piVar3 + 1;
    }
    *piVar3 = 0;
    return 0;
}


/* fcn.00013f34 @ 0x13f34 */

int16_t * fcn.00013f34(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t arg2_00;
    uint16_t uVar1;
    int16_t iVar2;
    bool bVar3;
    uint16_t *puVar4;
    uint64_t arg1_00;
    uint64_t uVar5;
    int16_t *arg1_01;
    int64_t iVar6;
    int16_t *piVar7;
    uint64_t uVar8;
    uint in_register_00000014;
    uint16_t *puVar9;
    uint64_t uVar10;
    int16_t *piVar11;
    ulong uVar12;
    
    puVar9 = CONCAT44(in_register_00000014,arg2);
    uVar8 = 0;
    uVar10 = uVar8;
    if (puVar9 != NULL) {
        uVar1 = *puVar9;
        uVar10 = 0;
        puVar4 = puVar9;
        while (uVar1 != 0) {
            puVar4 = puVar4 + 1;
            uVar10 = uVar10 + 1;
            uVar1 = *puVar4;
        }
    }
    arg1_00 = uVar8;
    uVar5 = uVar8;
    if (arg3 != 0) {
        arg1_00 = fcn.000151ec(arg3);
        if (arg1_00 == 0) {
            return NULL;
        }
        uVar5 = fcn.00015220(arg1_00);
    }
    arg2_00 = (uVar5 + uVar10 * 2) * 2 + 0x32;
    arg1_01 = fcn.000152a0(arg2_00 * 2);
    if (arg1_01 != NULL) {
        fcn.00012c40(arg1_01,arg2_00);
        iVar2 = *arg1_01;
        piVar11 = arg1_01;
        while (iVar2 != 0) {
            piVar11 = piVar11 + 1;
            uVar8 = uVar8 + 1;
            iVar2 = *piVar11;
        }
        piVar11 = arg1_01 + uVar8;
        if (arg1 != 0) {
            uVar10 = 0;
            do {
                fcn.00011cf0(piVar11,(arg2_00 * 2 - piVar11) + arg1_01,arg3,*(uVar10 + arg1));
                iVar6 = fcn.00012c0c(piVar11,arg2_00 - (piVar11 - arg1_01 >> 1));
                uVar10 = uVar10 + 1;
                piVar11 = piVar11 + iVar6;
            } while (uVar10 < 0x10);
        }
        uVar12 = 0x15cf0;
        fcn.00012cd8(arg1_01,arg2_00,0x15cf0);
        uVar8 = 0;
        iVar2 = *piVar11;
        piVar7 = piVar11;
        uVar10 = uVar8;
        while (iVar2 != 0) {
            piVar7 = piVar7 + 1;
            uVar10 = uVar10 + 1;
            iVar2 = *piVar7;
        }
        piVar11 = piVar11 + uVar10;
        if (puVar9 != NULL) {
            for (; *puVar9 != 0; puVar9 = puVar9 + 1) {
                fcn.00011cf0(piVar11,(arg2_00 * 2 - piVar11) + arg1_01,uVar12,*puVar9);
                iVar6 = fcn.00012c0c(piVar11,arg2_00 - (piVar11 - arg1_01 >> 1));
                piVar11 = piVar11 + iVar6;
            }
        }
        uVar12 = 0x15d00;
        fcn.00012cd8(arg1_01,arg2_00,0x15d00);
        iVar2 = *piVar11;
        piVar7 = piVar11;
        uVar10 = uVar8;
        while (iVar2 != 0) {
            piVar7 = piVar7 + 1;
            uVar10 = uVar10 + 1;
            iVar2 = *piVar7;
        }
        piVar11 = piVar11 + uVar10;
        if (uVar5 != 0) {
            do {
                fcn.00011cf0(piVar11,(arg2_00 * 2 - piVar11) + arg1_01,uVar12,*(uVar8 + arg1_00));
                iVar6 = fcn.00012c0c(piVar11,arg2_00 - (piVar11 - arg1_01 >> 1));
                uVar8 = uVar8 + 1;
                piVar11 = piVar11 + iVar6;
            } while (uVar8 < uVar5);
        }
        *piVar11 = 0;
        bVar3 = false;
        iVar2 = *arg1_01;
        piVar11 = arg1_01;
        while (iVar2 != 0) {
            iVar2 = *piVar11;
            if (iVar2 == 0x3d) {
                bVar3 = true;
            }
            else if (iVar2 == 0x26) {
                bVar3 = false;
            }
            else if ((bVar3) && (iVar2 - 0x41U < 6)) {
                *piVar11 = iVar2 + 0x20;
            }
            piVar11 = piVar11 + 1;
            iVar2 = *piVar11;
        }
        return arg1_01;
    }
    return NULL;
}


/* fcn.000141a4 @ 0x141a4 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.000141a4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h)

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
    puVar5 = fcn.000152a0(arg2_00 * 2);
    uVar10 = 0;
    if (puVar5 == NULL) {
        return -0x7ffffffffffffff7;
    }
    if (((puVar7 == NULL) || (999999 < uVar4)) ||
       (puVar9 = puVar5, uVar4 = fcn.00012da8(puVar7,arg2_00), arg2_00 <= uVar4)) goto code_r0x0001426c;
    if (puVar5 < puVar7) {
code_r0x00014249:
        if (puVar7 < puVar5 + arg2_00) goto code_r0x0001426c;
    }
    else {
        if (puVar5 < uVar4 + 1 + puVar7) goto code_r0x0001426c;
        if (puVar5 <= puVar7) goto code_r0x00014249;
    }
    for (; *puVar7 != 0; puVar7 = puVar7 + 1) {
        *puVar9 = *puVar7;
        puVar9 = puVar9 + 1;
    }
    *puVar9 = uVar10;
code_r0x0001426c:
    if (auStack_48 != arg3 + 2) {
        section..text(auStack_48,arg3 + 2,0x10);
    }
    arg3_00 = fcn.00013f34(auStack_48,puVar5,arg2);
    iVar6 = 0;
    iVar2 = *arg3_00;
    piVar3 = arg3_00;
    while (iVar2 != 0) {
        piVar3 = piVar3 + 1;
        iVar6 = iVar6 + 1;
        iVar2 = *piVar3;
    }
    iStackX_18 = iVar6 * 2 + 0x42;
    iVar6 = fcn.000152a0(iStackX_18);
    if (iVar6 == 0) {
        iVar8 = -0x7ffffffffffffff7;
        *in_stack_00000028 = 0;
        uVar11 = 0;
    }
    else {
        fcn.00011c8c(iVar6,iStackX_18,0x15d30,arg3_00);
        iStackX_18 = 0;
        iVar8 = (**(*0x15f80 + 0x48))(puVar5,auStack_48,0,&iStackX_18,0);
        if (iVar8 == -0x7ffffffffffffffb) {
            uVar11 = fcn.000152a0(iStackX_18);
            iVar8 = (**(*0x15f80 + 0x48))(puVar5,auStack_48,0,&iStackX_18,uVar11);
            if (-1 < iVar8) {
                iVar8 = (**(arg1 + 0x18))(arg1,iVar6,uVar11,*(arg3 + 0x14),iStackX_20,in_stack_00000028);
            }
        }
    }
    (**(*0x15f38 + 0x48))(puVar5);
    if (uVar11 != 0) {
        (**(*0x15f38 + 0x48))(uVar11);
    }
    (**(*0x15f38 + 0x48))(arg3_00);
    if (iVar6 != 0) {
        (**(*0x15f38 + 0x48))(iVar6);
    }
    return iVar8;
}


/* fcn.000143ec @ 0x143ec */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

uint64_t fcn.000143ec(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h)

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
    uVar3 = (**(*0x15f78 + 0x140))(0x15620,0,0x15f98);
    if (uVar3 < 0) {
        return uVar3;
    }
    uVar3 = (**(*0x15f78 + 0x140))(0x15660,0,&iStack_50);
    if (uVar3 < 0) {
        return uVar3;
    }
    iStack_60 = 0;
    iVar4 = (**(*0x15f98 + 0x18))(*0x15f98,0,0,&iStack_60,&var_38h);
    if ((iVar4 == -0x7ffffffffffffffb) && (piVar5 = fcn.000152a0(iStack_60 + 8), piVar5 != NULL)) {
        iVar4 = (**(*0x15f98 + 0x18))(*0x15f98,0,0,&iStack_60,piVar5);
        if (iVar4 < 0) {
            iVar4 = *0x15f38;
        }
        else {
            bVar1 = false;
            if (*piVar5 != 0) {
                piVar11 = piVar5;
                do {
                    (**(*0x15f98 + 0x50))(*0x15f98,*piVar11,&var_40h);
                    if ((_var_40h == arg2) && (*piVar11 == arg1)) {
                        bVar1 = true;
                        break;
                    }
                    uVar13 = uVar13 + 1;
                    piVar11 = piVar5 + uVar13;
                    bVar1 = false;
                } while (*piVar11 != 0);
            }
            (**(*0x15f78 + 0x48))(piVar5);
            if (!bVar1) {
                return 0x800000000000000e;
            }
            iVar4 = 0;
            piStack_68 = NULL;
            uVar3 = (**(*0x15f98 + 0x20))(*0x15f98,arg1,&stack0xffffffffffffffa8,0);
            if ((uVar3 < 0) && (uVar3 != 0x8000000000000005)) {
                return uVar3;
            }
            (**(*0x15f78 + 0x40))(4,iVar4,&piStack_68);
            if (piStack_68 == NULL) {
                return 0x8000000000000009;
            }
            (**(*0x15f98 + 0x20))(*0x15f98,arg1,&stack0xffffffffffffffa8);
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
                            if ((*_var_40h == '\x0e') && (iVar6 = fcn.00015118(_var_40h + 2,arg3,0x10), iVar6 == 0))
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
                        (iVar7 = fcn.000141a4(iStack_50,arg2,arg3_00,&piStack_70,iVar4), -1 < iVar7)) &&
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
                            iVar6 = fcn.000152a0(uVar3);
                            if (iVar6 == 0) {
                                return 0x8000000000000009;
                            }
                            uVar3 = uVar3 >> 1;
                            fcn.00012cd8(iVar6,uVar3,*arg4);
                            fcn.00012cd8(iVar6,uVar3,0x15d1c);
                            fcn.00012cd8(iVar6,uVar3,piStack_70);
                            (**(*0x15f78 + 0x48))(*arg4);
                            (**(*0x15f78 + 0x48))(piStack_70);
                            *arg4 = iVar6;
                            *in_stack_00000028 = iVar6;
                            piStack_70 = NULL;
                        }
                    }
                    _var_40h = arg3_00;
                    if (*arg3_00 == ')') {
                        if (piStack_68 != NULL) {
                            (**(*0x15f78 + 0x48))();
                        }
                        return ~-(*arg4 != 0) & 0x800000000000000e;
                    }
                } while( true );
            }
            iVar4 = *0x15f78;
        }
        (**(iVar4 + 0x48))(piVar5);
    }
    return 0x800000000000000e;
}


/* fcn.00013ba0 @ 0x13ba0 */

void fcn.00013ba0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00013ae0 @ 0x13ae0 */

int64_t fcn.00013ae0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t *in_stack_00000028;
    
    if (*in_stack_00000028 == 0) {
        *arg4 = 0;
    }
    iVar1 = (**(*0x15f80 + 0x48))();
    if ((iVar1 < 0) && (iVar1 == -0x7ffffffffffffffb)) {
        if (*in_stack_00000028 != 0) {
            (**(*0x15f78 + 0x48))();
        }
        iVar1 = fcn.00013900(*arg4);
        *in_stack_00000028 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x15f80 + 0x48))(arg1,arg2,arg3,arg4,iVar1);
        }
    }
    return iVar1;
}


/* fcn.0001392c @ 0x1392c */

int64_t fcn.0001392c(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.00013900(arg1);
    if (iVar1 != 0) {
        (**(*0x15f78 + 0x168))(iVar1,arg1,0);
    }
    return iVar1;
}


/* fcn.00013dcc @ 0x13dcc */

uint64_t fcn.00013dcc(int64_t arg1,int64_t arg2)

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
        iVar2 = fcn.00015118(piVar5,*0x15e88,10);
        if (iVar2 == 0) {
            arg1 = arg1 + uVar6 * 2;
            uVar6 = uVar4;
            for (piVar5 = arg1 + 10;
                ((iVar1 = *piVar5, iVar1 - 0x30U < 0x37 && (6 < iVar1 - 0x3aU)) && (0x19 < iVar1 - 0x47U));
                piVar5 = piVar5 + 1) {
                uVar6 = uVar6 + 1;
            }
            pcVar7 = uVar6 >> 1;
            uVar3 = (**(*0x15f78 + 0x40))(4,pcVar7,&pcStackX_8);
            if (uVar3 < 0) {
                uVar4 = uVar3;
                pcVar7 = pcStackX_8;
            }
            else {
                fcn.00013d4c(arg1 + 10,uVar6,pcStackX_8);
            }
            if (-1 < uVar4) {
                if (((pcStackX_8 == NULL) || (pcVar7 < 0x4)) ||
                   ((pcVar7 < *(pcStackX_8 + 2) || ((4 < *pcStackX_8 - 1U && (*pcStackX_8 != '\x7f')))))) {
                    uVar4 = 0x800000000000000e;
                }
                else {
                    pcStackX_18 = pcStackX_8;
                    uVar4 = (**(*0x15f78 + 0xb8))(0x156b0,&pcStackX_18,arg2);
                }
                (**(*0x15f78 + 0x48))(pcStackX_8);
            }
            return uVar4;
        }
    }
    return 0x800000000000000e;
}


/* fcn.000139c0 @ 0x139c0 */

int64_t fcn.000139c0(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t arg1_01;
    
    if (arg2 == 0) {
        if (arg1 == 0) {
            arg1 = 0x15608;
        }
        arg1_00 = fcn.00013a98(arg1);
    }
    else {
        if (arg1 == 0) {
            iVar1 = 0;
        }
        else {
            iVar1 = fcn.0001396c(arg1);
            iVar1 = iVar1 + -4;
        }
        arg1_00 = fcn.00013900(*(arg2 + 2) + 4 + *(arg2 + 3) * 0x100 + iVar1);
        arg1_01 = arg1_00;
        if (iVar1 != 0) {
            fcn.00015410(arg1_00,arg1,iVar1);
            arg1_01 = arg1_00 + iVar1;
        }
        fcn.00015410(arg1_01,arg2,*(arg2 + 2));
        *(*(arg2 + 2) + *(arg2 + 3) * 0x100 + arg1_01) = *0x15608;
    }
    return arg1_00;
}


/* fcn.00014d90 @ 0x14d90 */

int64_t fcn.00014d90(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t *piVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uStackX_18;
    int64_t iStackX_20;
    int64_t *in_stack_00000028;
    ulong *in_stack_00000030;
    
    iVar5 = 0;
    uStackX_18 = 0;
    piVar3 = 0x155c0;
    iVar4 = iVar5;
    iStackX_20 = arg4;
    do {
        if (*piVar3 != 0) {
            iVar1 = fcn.00015118(arg2 + 2,*piVar3,0x10);
            if (iVar1 == 0) break;
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 4;
    } while (iVar4 == 0);
    if (iVar4 == 1) {
        iVar1 = 0x15690;
    }
    else {
        iVar4 = iVar4 * 0x20;
        iVar1 = iVar4 + 0x155c0;
        piVar3 = *(iVar4 + 0x155c8);
        if (piVar3 == NULL) {
            *(iVar4 + 0x155c8) = 0x15630;
        }
        else {
            if (*piVar3 == 0) {
                *piVar3 = 0x147a8;
            }
            if (*(*(iVar4 + 0x155c8) + 8) == 0) {
                *(*(iVar4 + 0x155c8) + 8) = 0x14b28;
            }
            if (*(*(iVar4 + 0x155c8) + 0x10) == 0) {
                *(*(iVar4 + 0x155c8) + 0x10) = 0x14d84;
            }
        }
    }
    iVar4 = (**(*0x15f78 + 0x98))(*(arg1 + 0x18),0x15610,&iStackX_20);
    if (iVar4 < 0) {
        iStackX_20 = iVar5;
    }
    iStackX_20 = fcn.000139c0(iStackX_20,*(arg1 + 0x20));
    *0x1564c = *(arg2 + 2);
    *0x15654 = *(arg2 + 10);
    uVar2 = fcn.000139c0(iStackX_20,0x15648);
    (**(*0x15f78 + 0x48))(iStackX_20);
    iVar4 = (**(*0x15f78 + 0x148))(&uStackX_18,0x15610,uVar2,0x15670,*(iVar1 + 8),0);
    if (-1 < iVar4) {
        if (in_stack_00000030 != NULL) {
            *in_stack_00000030 = uStackX_18;
        }
        if (in_stack_00000028 != NULL) {
            if (iVar1 == 0x15690) {
                iVar1 = iVar5;
            }
            *in_stack_00000028 = iVar1;
        }
        iVar4 = 0;
    }
    return iVar4;
}


/* fcn.00015190 @ 0x15190 */

bool fcn.00015190(uint32_t arg1)

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


