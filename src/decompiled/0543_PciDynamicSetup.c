// decompiled by r2ghidra: 0543_PciDynamicSetup.pe32
// functions: 86

/* entry0 @ 0x10390 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.000103bc(arg1,arg2);
    fcn.00012fb4(arg1,arg2);
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
    
    *0x18088 = *(arg1 + 0x60);
    *0x18090 = *(arg1 + 0x58);
    *0x18080 = arg1;
    fcn.00014400();
    puVar4 = fcn.00014400();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x0001041b:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010320();
                fcn.00010310();
                uVar2 = in(0x1808);
                fcn.000102f0(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x000102e0();
                }
                fcn.000102f0(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010310();
                }
                else {
                    fcn.00010300();
                }
code_r0x00010484:
                (**(*0x18088 + 0x140))(0x175b0,0,0x180d8);
                (**(*0x18088 + 0x140))(0x175a0,0,0x180f8);
                (**(*0x18088 + 0x140))(0x17580,0,0x180e8);
                (**(*0x18088 + 0x140))(0x175d0,0,0x180e0);
    //WARNING: Could not recover jumptable at 0x00010519. Too many branches
    //WARNING: Treating indirect jump as call
                (**(*0x18088 + 0x140))(0x17590,0,0x180f0);
                return;
            }
            if ((*0x17698 == *(puVar4 + 4)) && (*0x176a0 == *(puVar4 + 8))) goto code_r0x00010484;
        }
        else if (uVar1 == 4) goto code_r0x0001041b;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00012fb4 @ 0x12fb4 */

int64_t fcn.00012fb4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t arg2_00;
    ushort *puVar2;
    int64_t iVar3;
    int64_t iVar4;
    uchar *noname_0;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    ushort *arg3;
    int64_t arg3_00;
    uchar auStackX_18 [8];
    uint uVar8;
    uint uVar9;
    ushort auStack_c8 [8];
    uchar auStack_b8 [160];
    
    uVar6 = 0;
    if (*0x180b0 == 0) {
        *0x180a0 = *(arg2 + 0x60);
        *0x180a8 = *(arg2 + 0x58);
        *0x180b0 = arg2;
    }
    iVar1 = fcn.00016164();
    if (-1 < iVar1) {
        arg3_00 = 0;
        arg2_00 = 0x38;
        iVar3 = *0x180a0;
        (**(*0x180a0 + 0x168))(0x18140);
        if (*(*0x18100 + 0x18) != 0) {
            iVar4 = *0x18100;
            uVar7 = uVar6;
            do {
                iVar5 = iVar4 + 0x20 + uVar6;
                if ((*(iVar5 + 0x3d) & 0x10) != 0) {
                    arg2_00 = fcn.00014498(0xb0);
                    if (arg2_00 == 0) {
                        return -0x7ffffffffffffff7;
                    }
                    *(arg2_00 + 0x10) = iVar5;
                    *(arg2_00 + 0x18) = uVar7;
                    iVar1 = fcn.000160a8(0x18160,arg2_00);
                    if (iVar1 < 0) {
                        return iVar1;
                    }
                    iVar4 = *0x18100;
                }
                uVar7 = uVar7 + 1;
                uVar6 = uVar6 + 0x159;
            } while (uVar7 < *(iVar4 + 0x18));
        }
        fcn.00015da8(arg1,arg2_00,arg3_00,iVar3);
        *0x18070 = *0x17668;
        auStack_c8[0] = 0;
        puVar2 = fcn.00016328(*0x17668,5,arg3_00,iVar3);
        uVar9 = 0x1d;
        uVar8 = 1;
        arg3 = auStack_c8;
        if (puVar2 != NULL) {
            arg3 = puVar2;
        }
        noname_0 = auStack_b8;
        fcn.00013290(noname_0,0xa0,0x178c0,arg3);
        fcn.00016208(noname_0,0x43,auStack_b8);
        if ((arg3 != auStack_c8) && (arg3 != NULL)) {
            (**(*0x180a0 + 0x48))(arg3);
        }
        iVar3 = (**(*0x180a0 + 0x50))(0x200,8,0x12d64,0,0x18110,uVar8,uVar9);
        if (-1 < iVar3) {
            (**(*0x180a0 + 0xa8))(0x175f0,*0x18110,auStackX_18);
        }
    }
    return iVar1;
}


/* fcn.00014400 @ 0x14400 */

int64_t fcn.00014400(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x18098 == 0) {
        *0x18098 = 0;
        if (*(*0x18080 + 0x68) != 0) {
            piVar2 = *(*0x18080 + 0x70);
            do {
                if ((*0x175c0 == *piVar2) && (*0x175c8 == piVar2[1])) {
                    *0x18098 = (*(*0x18080 + 0x70))[uVar1 * 3 + 2];
                    return *0x18098;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x18080 + 0x68));
        }
    }
    return *0x18098;
}


/* fcn.00010320 @ 0x10320 */

uint64_t fcn.00010320(void)

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


/* fcn.00010310 @ 0x10310 */

void fcn.00010310(void)

{
    return;
}


/* fcn.000102f0 @ 0x102f0 */

uint64_t fcn.000102f0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102e2 @ 0x102e2 */

void fcn.000102e2(void)

{
    return;
}


/* fcn.00010300 @ 0x10300 */

void fcn.00010300(void)

{
    return;
}


/* fcn.00014498 @ 0x14498 */

int64_t fcn.00014498(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.0001446c(arg1);
    if (iVar1 != 0) {
        (**(*0x180a0 + 0x168))(iVar1,arg1,0);
    }
    return iVar1;
}


/* fcn.0001446c @ 0x1446c */

ulong fcn.0001446c(int64_t arg1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    (**(*0x180a0 + 0x40))(4,arg1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.00016328 @ 0x16328 */

int64_t fcn.00016328(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    char cVar2;
    char *arg1_00;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    char *pcVar7;
    int64_t iStackX_18;
    uchar auStackX_20 [8];
    int64_t aiStack_38 [2];
    
    auStackX_20[0] = arg4;
    aiStack_38[0] = 0;
    iVar5 = 0;
    iVar6 = arg1;
    iStackX_18 = arg3;
    arg1_00 = fcn.00016ef8(arg1);
    if (arg1_00 != NULL) {
        fcn.00014210(iVar6,aiStack_38,arg3);
        pcVar7 = arg1_00;
        iVar6 = aiStack_38[0];
        do {
            while( true ) {
                iVar3 = 0x17ebf;
                if (iVar6 != 0) {
                    iVar3 = iVar6;
                }
                iVar3 = fcn.000142cc(arg1_00,0,0x17ebf,iVar3);
                if (iVar3 == 0) goto code_r0x000164a4;
                iStackX_18 = 0;
                iVar4 = (**(*0x180d8 + 8))(*0x180d8,iVar3,arg1,arg2 & 0xffff,auStackX_20,&iStackX_18,0);
                if (iVar4 == -0x7ffffffffffffffb) {
                    iVar5 = fcn.000131d4(iStackX_18);
                    if ((iVar5 != 0) &&
                       (iVar4 = (**(*0x180d8 + 8))(*0x180d8,iVar3,arg1,arg2 & 0xffff,iVar5,&iStackX_18,0),
                       iVar4 < 0)) {
                        (**(*0x18088 + 0x48))(iVar5);
                        iVar5 = 0;
                    }
                    goto code_r0x000164a4;
                }
                if (iVar4 != -0x7fffffffffffffe0) goto code_r0x000164a4;
                if (iVar6 == 0) break;
                (**(*0x18088 + 0x48))(iVar6);
                iVar6 = 0;
            }
            for (; (*pcVar7 != '\0' && (*pcVar7 != ';')); pcVar7 = pcVar7 + 1) {
            }
            cVar2 = *pcVar7;
            pcVar1 = pcVar7 + 1;
            pcVar7 = NULL;
            if (cVar2 == ';') {
                pcVar7 = pcVar1;
            }
        } while (pcVar7 != NULL);
code_r0x000164a4:
        (**(*0x18088 + 0x48))(arg1_00);
        if (iVar6 != 0) {
            (**(*0x18088 + 0x48))(iVar6);
        }
        if (iVar3 != 0) {
            (**(*0x18088 + 0x48))(iVar3);
        }
    }
    return iVar5;
}


/* fcn.00013290 @ 0x13290 */

void fcn.00013290(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00013484(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00013484 @ 0x13484 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00013484(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x000134e3;
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
code_r0x000134e3:
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
        uVar21 = fcn.00017374(arg4,0xf4241);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.000171d0(arg4,0xf4241);
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
            pcVar8 = 0x179c4;
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
code_r0x0001389e:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x179c4;
            }
            else {
                pcVar8 = 0x179c8;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x00013635:
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
                    goto code_r0x000137d8;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x000137ef;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x000137d8;
                        }
                        goto code_r0x000137ef;
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
code_r0x000137d8:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x00013635;
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
                        goto code_r0x00013635;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x000137ef;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x000137d8;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x000137ef:
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
                        fcn.000141ec(&var_68h_2,0x26,0,0x17958);
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
                            goto code_r0x0001389e;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x00013a87;
                        if (uStack_a8 == 0x58) goto code_r0x00013b7c;
                        if (uStack_a8 == 0x61) goto code_r0x00013a90;
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
                            goto code_r0x00013616;
                        }
                        if (uStack_a8 != 100) goto code_r0x00013612;
                        goto code_r0x00013b93;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x179c4;
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
                goto code_r0x00013dc0;
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
                            iVar12 = 0x17a5b;
                            goto code_r0x00013b43;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x00013b43:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x00013dc0;
                    }
                    fcn.000141ec(&var_68h_2,0x26,0,0x179bc);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x00013a87:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x00013a90:
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
                            pcVar8 = 0x17938;
                            uStackX_18 = uVar21;
                        }
                        uVar22 = uVar22 & -((uVar21 & 0x800) != 0);
                        goto code_r0x00013dc0;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x00013612;
                            goto code_r0x00013b80;
                        }
                        goto code_r0x00013b85;
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
                        goto code_r0x00013dc0;
                    }
                    fcn.000141ec(&var_68h_2,0x26,0,0x179a0);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x00013dc0;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x00013b7c:
            uVar21 = uVar21 | 0x20;
code_r0x00013b80:
            uVar21 = uVar21 | 0x80;
code_r0x00013b85:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x00013b93:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x00013bd5;
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
code_r0x00013bd5:
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
code_r0x00013c5d:
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
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x00013c5d;
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
code_r0x00013612:
            pcVar8 = &uStack_a8;
code_r0x00013616:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x00013dc0:
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
                arg1 = fcn.000132c0(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.000132c0(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
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
                arg1 = fcn.000132c0(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
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
                arg1 = fcn.000132c0(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
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


/* fcn.00016208 @ 0x16208 */

int16_t fcn.00016208(ulong noname_0,int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    char cVar2;
    char *arg1_00;
    int64_t iVar3;
    int16_t iVar4;
    char *pcVar5;
    int64_t iVar6;
    char *pcVar7;
    int64_t iVar8;
    int64_t iVar9;
    int16_t aiStackX_10 [4];
    
    iVar3 = *0x18070;
    aiStackX_10[0] = arg1;
    pcVar5 = fcn.00016ef8(*0x18070);
    if (pcVar5 == NULL) {
        iVar4 = 0;
    }
    else {
        iVar8 = -0x7ffffffffffffffe;
        cVar2 = *pcVar5;
        arg1_00 = pcVar5;
        while (cVar2 != '\0') {
            pcVar7 = arg1_00;
            if (*arg1_00 != '\0') {
                do {
                    if (*pcVar7 == ';') break;
                    pcVar7 = pcVar7 + 1;
                } while (*pcVar7 != '\0');
                if (*pcVar7 != '\0') {
                    *pcVar7 = '\0';
                    pcVar7 = pcVar7 + 1;
                }
            }
            iVar6 = 0;
            do {
                iVar9 = iVar6 + 1;
                pcVar1 = iVar6 + 0x17eb9;
                iVar6 = iVar9;
            } while (*pcVar1 != '\0');
            iVar6 = fcn.000173a0(arg1_00,0x17eb8,iVar9);
            if (iVar6 != 0) {
                if (aiStackX_10[0] == 0) {
                    iVar8 = (***0x180d8)(*0x180d8,iVar3,aiStackX_10);
                }
                else {
                    iVar8 = (*(*0x180d8)[2])(*0x180d8,iVar3);
                }
                if (iVar8 < 0) break;
            }
            arg1_00 = pcVar7;
            cVar2 = *pcVar7;
        }
        (**(*0x18088 + 0x48))(pcVar5);
        iVar4 = 0;
        if (-1 < iVar8) {
            iVar4 = aiStackX_10[0];
        }
    }
    return iVar4;
}


/* fcn.000166a4 @ 0x166a4 */

void fcn.000166a4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t arg3_00;
    uchar auStack_28 [2];
    ushort uStack_26;
    uint8_t uStack_24;
    uchar uStack_23;
    uchar auStack_22 [26];
    
    fcn.000102c0(auStack_28,0x1c);
    uStack_24 = arg3 & 0x30;
    arg3_00 = *((arg4 & 0xffU) + 0x17ec0);
    uStack_23 = arg4;
    uStack_26 = arg2;
    if (arg3_00 != 0) {
        fcn.00010330(auStack_22,&stack0x00000028,arg3_00);
    }
    fcn.000165d4(arg1,auStack_28,CONCAT71(arg3_00 >> 8,9),*((arg4 & 0xffU) + 0x17ec0) + 6);
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
    //[00] -r-x section size 29312 named .text
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


/* fcn.00010330 @ 0x10330 */

int64_t fcn.00010330(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
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


/* fcn.000165d4 @ 0x165d4 */

int64_t fcn.000165d4(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    uint8_t uVar1;
    char in_stack_00000028;
    char in_stack_00000030;
    
    *arg1 = arg2;
    uVar1 = in_stack_00000028 + arg3 & 0x7fU | in_stack_00000030 << 7;
    *(arg1 + 1) = uVar1;
    arg1_00 = fcn.00016578(noname_0,uVar1 & 0x7f);
    if ((arg3 != 0) && (arg1_00 != arg1)) {
        fcn.00010330(arg1_00,arg1,arg3);
    }
    return arg1_00;
}


/* fcn.00016578 @ 0x16578 */

int64_t fcn.00016578(int64_t arg1,int64_t arg2)

{
    uint64_t arg1_00;
    int64_t iVar1;
    ulong uVar2;
    
    arg1_00 = *(arg1 + 8);
    if (arg1_00 < *(arg1 + 0x10) + arg2) {
        uVar2 = fcn.00013200(arg1,arg1_00,arg2 + 0x200 + arg1_00,*arg1);
        *arg1 = uVar2;
        *(arg1 + 8) = *(arg1 + 8) + arg2 + 0x200;
    }
    iVar1 = *(arg1 + 0x10);
    *(arg1 + 0x10) = iVar1 + arg2;
    return *arg1 + iVar1;
}


/* fcn.00013200 @ 0x13200 */

int64_t fcn.00013200(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000131a4(noname_0,arg2);
    if (arg1_00 != 0) {
        if (arg2 != 0) {
            arg1_00 = fcn.000102c0(arg1_00,arg2);
        }
        if ((arg1_00 != 0) && (arg3 != 0)) {
            if (arg1 < arg2) {
                arg2 = arg1;
            }
            if ((arg2 != 0) && (arg1_00 != arg3)) {
                fcn.00010330(arg1_00,arg3,arg2);
            }
            (**(*0x18088 + 0x48))(arg3);
        }
    }
    return arg1_00;
}


/* fcn.000131d4 @ 0x131d4 */

void fcn.000131d4(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000131a4(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
}


/* fcn.000131a4 @ 0x131a4 */

ulong fcn.000131a4(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x18088 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00016548 @ 0x16548 */

void fcn.00016548(int64_t arg1)

{
    if (*arg1 != 0) {
        (**(*0x18088 + 0x48))();
    }
    //WARNING: Could not recover jumptable at 0x00016572. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x18088 + 0x48))(arg1);
    return;
}


/* fcn.000164f4 @ 0x164f4 */

int64_t * fcn.000164f4(ulong param_1)

{
    int64_t *piVar1;
    int64_t iVar2;
    
    piVar1 = fcn.000131a4(param_1,0x18);
    if (piVar1 != NULL) {
        iVar2 = fcn.000131a4();
        *piVar1 = iVar2;
        if (iVar2 != 0) {
            piVar1[2] = 0;
            piVar1[1] = 0x200;
            return piVar1;
        }
        (**(*0x18088 + 0x48))(piVar1);
    }
    return NULL;
}


/* fcn.00016744 @ 0x16744 */

void fcn.00016744(int64_t arg1)

{
    unkbyte7 in_R8;
    uchar auStack_28 [2];
    ulong uStack_26;
    ulong uStack_1e;
    
    fcn.000102c0(auStack_28,0x12);
    uStack_26 = *0x175e0;
    uStack_1e = *0x175e8;
    fcn.000165d4(arg1,auStack_28,CONCAT71(in_R8,0x5f),0x12);
    return;
}


/* fcn.000167a0 @ 0x167a0 */

void fcn.000167a0(int64_t arg1,int64_t arg2)

{
    unkbyte7 in_R8;
    uchar auStack_18 [2];
    ushort uStack_16;
    ushort uStack_14;
    uchar uStack_12;
    
    fcn.000102c0(auStack_18,7);
    uStack_14 = 2;
    uStack_12 = 0;
    uStack_16 = arg2;
    fcn.000165d4(arg1,auStack_18,CONCAT71(in_R8,2),7);
    return;
}


/* fcn.00010908 @ 0x10908 */

void fcn.00010908(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint64_t arg4;
    int64_t iVar6;
    
    uVar5 = arg2 & 0xff;
    iVar6 = 0;
    uVar4 = 0;
    if (uVar5 == 1) {
        iVar6 = 0x17600;
        uVar4 = 0xb;
        arg4 = 0;
        uVar3 = arg3;
code_r0x000109da:
        uVar2 = 0;
        if (uVar4 == 0) {
            return;
        }
    }
    else {
        if (uVar5 == 2) {
            uVar1 = 0;
            for (uVar4 = arg3 >> 0xc; uVar4 != 0; uVar4 = uVar4 >> 1) {
                uVar1 = uVar1 + 1;
            }
            iVar6 = 0x17618;
            uVar4 = 5;
            arg4 = 0;
        }
        else {
            uVar5 = uVar5 - 3;
            arg4 = uVar5;
            if (uVar5 != 0) {
                if (uVar5 == 1) {
                    uVar1 = 0;
                    for (uVar4 = arg3 >> 0x14; uVar4 != 0; uVar4 = uVar4 >> 1) {
                        uVar1 = uVar1 + 1;
                    }
                    iVar6 = 0x17628;
                    uVar4 = 0xf;
                    arg3 = 0;
                    uVar3 = uVar1;
                }
                else {
                    uVar3 = 0;
                }
                goto code_r0x000109da;
            }
            uVar1 = 0;
            for (uVar4 = arg3 >> 0x14; uVar4 != 0; uVar4 = uVar4 >> 1) {
                uVar1 = uVar1 + 1;
            }
            iVar6 = 0x17628;
            uVar4 = 0xb;
        }
        arg3 = 0;
        uVar3 = uVar1;
        uVar2 = 0;
    }
    do {
        arg4 = CONCAT71(arg4 >> 8,3);
        arg3 = CONCAT71(arg3 >> 8,(uVar2 != uVar3) + -1) & 0xffffffffffffff30;
        fcn.000166a4(arg1,*(iVar6 + uVar2 * 2),arg3,arg4);
        uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
    return;
}


/* fcn.0001691c @ 0x1691c */

int64_t fcn.0001691c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ushort uVar2;
    uint8_t in_stack_00000040;
    int64_t *in_stack_00000048;
    uchar auStack_38 [6];
    ushort uStack_32;
    ushort uStack_30;
    ushort uStack_2e;
    uchar uStack_2c;
    
    uVar2 = arg3;
    fcn.000102c0(auStack_38,0x26);
    iVar1 = *(arg1 + 0x10);
    uStack_2c = 0x10;
    uStack_32 = arg2;
    uStack_30 = uVar2;
    uStack_2e = arg4;
    fcn.000165d4(arg1,auStack_38,CONCAT71(arg3 >> 8,5),(3 << (in_stack_00000040 & 3)) + 0xe);
    fcn.00016640(arg1,*in_stack_00000048,in_stack_00000048[2]);
    fcn.0001667c(arg1);
    return *arg1 + iVar1;
}


/* fcn.00016640 @ 0x16640 */

void fcn.00016640(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00016578(arg1,arg3);
    if ((arg3 != 0) && (arg1_00 != arg2)) {
        fcn.00010330(arg1_00,arg2,arg3);
    }
    return;
}


/* fcn.0001667c @ 0x1667c */

void fcn.0001667c(int64_t arg1)

{
    unkbyte7 in_R8;
    uchar auStackX_10 [24];
    
    fcn.000165d4(arg1,auStackX_10,CONCAT71(in_R8,0x29),2);
    return;
}


/* fcn.00017050 @ 0x17050 */

void fcn.00017050(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *arg1_00;
    char acStack_18 [4];
    ushort uStack_14;
    ushort uStack_12;
    
    uStack_14 = arg2;
    acStack_18[2] = 0x12;
    uStack_12 = arg3;
    acStack_18[0] = (-(arg4 != '\0') & 0xf1U) + 0x19;
    acStack_18[1] = 0x82;
    acStack_18[3] = 6;
    arg1_00 = fcn.00016578(arg1,8);
    if (arg1_00 != acStack_18) {
        fcn.00010330(arg1_00,acStack_18,8);
    }
    return;
}


/* fcn.000170b8 @ 0x170b8 */

void fcn.000170b8(int64_t arg1)

{
    ushort *arg1_00;
    ushort auStackX_10 [12];
    
    auStackX_10[0] = 0x229;
    arg1_00 = fcn.00016578(arg1,2);
    if (arg1_00 != auStackX_10) {
        fcn.00010330(arg1_00,auStackX_10,2);
    }
    return;
}


/* fcn.00016cb8 @ 0x16cb8 */

//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h

int64_t fcn.00016cb8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_68h)

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
    
    uVar3 = *0x18070;
    uStackX_18 = arg3;
    puVar5 = NULL;
    uStackY_58 = *0x18070;
    puStackY_68 = NULL;
    puVar6 = NULL;
    uStackX_10 = arg2;
    iStackX_20 = arg4;
    iVar4 = (**(*0x180f8 + 0x20))(*0x180f8,*0x18070,&puStackY_68,0);
    if (iVar4 != -0x7ffffffffffffffb) {
        return iVar4;
    }
    arg2_00 = fcn.000131a4(0x8000000000000005,puStackY_68);
    if (arg2_00 == NULL) {
        return -0x7ffffffffffffff7;
    }
    iVar4 = (**(*0x180f8 + 0x20))(*0x180f8,uVar3,&puStackY_68,arg2_00);
    if (-1 < iVar4) {
        puStackY_68 = puStackY_68 + *(arg4 + 0x10);
        puVar5 = fcn.000131d4(puStackY_68);
        puStackY_60 = puVar5;
        if ((puVar5 == NULL) || (arg1_00 = puStackY_68, puVar6 = fcn.000131d4(puStackY_68), puVar6 == NULL)) {
            iVar4 = -0x7ffffffffffffff7;
        }
        else {
            uVar9 = 0x14;
            if (puVar5 != arg2_00) {
                arg1_00 = puVar5;
                fcn.00010330(puVar5,arg2_00,0x14);
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
                        fcn.00010330(arg1_00,puVar5,4);
                    }
                    uVar8 = uVar9 + (*puVar5 & 0xffffff);
                    uVar9 = uVar8;
                    if ((*(puVar5 + 3) == '\x02') &&
                       (iVar7 = fcn.000169f4(arg1_00,uStackX_18,puVar5,iVar4,in_stack_ffffffffffffffb8,unaff_R15),
                       -1 < iVar7)) {
                        bVar1 = true;
                        puVar5 = puVar6;
                    }
                    if (&uStackX_10 != puVar5) {
                        arg1_00 = &uStackX_10;
                        fcn.00010330(arg1_00,puVar5,4);
                    }
                    if (((uStackX_10 & 0xffffff) != 0) && (arg1_01 != puVar5)) {
                        arg1_00 = arg1_01;
                        fcn.00010330(arg1_01,puVar5,uStackX_10 & 0xffffff);
                    }
                    puVar5 = puStackY_60;
                    arg1_01 = arg1_01 + (uStackX_10 & 0xffffff);
                } while (uVar8 < uVar2);
                if (bVar1) {
                    puStackY_68 = arg1_01 - puStackY_60;
                    *(puStackY_60 + 2) = puStackY_68;
                    iVar4 = (**(*0x180f8 + 0x10))(*0x180f8,uStackY_58,puStackY_60);
                    goto code_r0x00016eb0;
                }
            }
            iVar4 = -0x7ffffffffffffff2;
        }
    }
code_r0x00016eb0:
    (**(*0x18088 + 0x48))(arg2_00);
    if (puVar5 != NULL) {
        (**(*0x18088 + 0x48))(puVar5);
    }
    if (puVar6 != NULL) {
        (**(*0x18088 + 0x48))(puVar6);
    }
    return iVar4;
}


/* fcn.00016880 @ 0x16880 */

void fcn.00016880(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar uVar1;
    unkbyte6 Var2;
    uchar auStack_18 [6];
    ushort uStack_12;
    ushort uStack_10;
    ushort uStack_e;
    uchar uStack_c;
    
    uVar1 = arg3 >> 8;
    Var2 = arg3 >> 0x10;
    fcn.000102c0(auStack_18,0xe);
    uStack_c = 0x14;
    uStack_12 = arg2;
    uStack_10 = arg3;
    uStack_e = arg4;
    fcn.000165d4(arg1,auStack_18,CONCAT62(Var2,CONCAT11(uVar1,6)),0xe);
    return;
}


/* fcn.000108a8 @ 0x108a8 */

void fcn.000108a8(int64_t arg1)

{
    uint64_t uVar1;
    ulong in_R8;
    
    fcn.000166a4(arg1,4,CONCAT71(in_R8 >> 8,0x30),0);
    uVar1 = 0;
    do {
        fcn.000166a4(arg1,L"cdefgh"[uVar1],0,0);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 6);
    return;
}


/* fcn.00010ce0 @ 0x10ce0 */

ulong fcn.00010ce0(void)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    uint16_t uVar5;
    int64_t unaff_retaddr;
    
    iVar2 = *0x18078;
    if (*0x18020 != 0) {
        fcn.00016548(*0x18020);
        fcn.00016548(*0x18028);
        fcn.00016548(*0x18040);
        fcn.00016548(*0x18048);
        fcn.00016548(*0x18050);
        fcn.00016548(*0x18058);
        fcn.00016548(*0x18060);
    }
    *0x18020 = fcn.000164f4();
    *0x18028 = fcn.000164f4();
    *0x18040 = fcn.000164f4();
    *0x18048 = fcn.000164f4();
    *0x18050 = fcn.000164f4();
    *0x18058 = fcn.000164f4();
    *0x18060 = fcn.000164f4();
    *0x18030 = fcn.00016744(*0x18020);
    iVar4 = *0x18028;
    *(*0x18030 + 0x12) = 0;
    iVar1 = fcn.00016744(iVar4);
    iVar4 = *0x18030;
    *0x18038 = iVar1;
    *(iVar1 + 0x12) = 0;
    *(iVar4 + 0x13) = 0x501;
    *(iVar1 + 0x13) = 0x502;
    uVar3 = 0;
    uVar5 = *(iVar2 + 0x18) & 0xfff | 0xb000;
    fcn.000167a0(*0x18020,0x1f);
    fcn.00010908(*0x18040,CONCAT71(uVar3 >> 8,1),*(*(*(iVar2 + 8) + 0x300) + 0x10d));
    uVar3 = 0x7022;
    fcn.0001691c(*0x18020,0x7022,uVar5,0);
    fcn.00010908(*0x18048,CONCAT71(uVar3 >> 8,2),*(*(*(iVar2 + 8) + 0x300) + 0x115));
    uVar3 = 0x7023;
    fcn.0001691c(*0x18020,0x7023,uVar5,8);
    fcn.00010908(*0x18050,CONCAT71(uVar3 >> 8,3),*(*(*(iVar2 + 8) + 0x300) + 0x125));
    uVar3 = 0x7024;
    fcn.0001691c(*0x18020,0x7024,uVar5,0x18);
    fcn.00010908(*0x18058,CONCAT71(uVar3 >> 8,3),*(*(*(iVar2 + 8) + 0x300) + 0x12d));
    uVar3 = 0;
    fcn.0001691c(*0x18020,0x7025,uVar5,0x20);
    iVar4 = CONCAT71(uVar3 >> 8,1);
    fcn.00017050(*0x18020,0x7006,0,iVar4);
    uVar3 = 0x7009;
    fcn.00017050(*0x18020,0x7009,1,CONCAT71(iVar4 >> 8,1));
    fcn.00010908(*0x18060,CONCAT71(uVar3 >> 8,4),*(*(*(iVar2 + 8) + 0x300) + 0x13d));
    fcn.0001691c(*0x18020,0x7025,uVar5,0x30);
    fcn.000167a0(*0x18020,2);
    iVar4 = 0xcf;
    fcn.000167a0(*0x18020,0xcf);
    fcn.000170b8(*0x18020);
    iVar2 = *0x18020;
    fcn.000170b8(*0x18020);
    fcn.00016cb8(iVar2,iVar4,5,*0x18020,unaff_retaddr);
    return 0;
}


/* fcn.00011074 @ 0x11074 */

ulong fcn.00011074(ulong param_1,ulong param_2,uint64_t param_3)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint16_t uVar5;
    int64_t unaff_R14;
    
    piVar1 = *0x18078;
    if (*0x17ff0 != 0) {
        fcn.00016548(*0x17ff0);
        fcn.00016548(*0x17ff8);
        fcn.00016548(*0x18010);
        fcn.00016548(*0x18018);
    }
    *0x17ff0 = fcn.000164f4();
    *0x17ff8 = fcn.000164f4();
    *0x18010 = fcn.000164f4();
    *0x18018 = fcn.000164f4();
    *0x18000 = fcn.00016744(*0x17ff0);
    iVar3 = *0x17ff8;
    *(*0x18000 + 0x12) = 0;
    iVar2 = fcn.00016744(iVar3);
    iVar3 = *0x18000;
    *0x18008 = iVar2;
    *(iVar2 + 0x12) = 0;
    *(iVar3 + 0x13) = 0x401;
    *(iVar2 + 0x13) = 0x402;
    uVar4 = 0;
    uVar5 = *(piVar1 + 3) & 0xfff | 0xa000;
    iVar3 = *0x17ff0;
    fcn.000167a0(*0x17ff0,0x4a);
    uVar4 = uVar4 & 0xffffffffffffff00;
    if (piVar1[1] != 0) {
        uVar4 = 0;
        iVar3 = *(*(piVar1[1] + 0x2d0) + 0x20);
        if (*(iVar3 + 0x10) == -2) {
            uVar4 = 1;
        }
    }
    if (*piVar1 != 0) {
        uVar4 = uVar4 & 0xff;
        iVar3 = *(*(*piVar1 + 0x2d0) + 0x20);
        if (*(iVar3 + 0x10) == -2) {
            uVar4 = 1;
        }
    }
    if (uVar4 == '\0') {
        fcn.000166a4(*0x18010,0xac,CONCAT71(param_3 >> 8,0x30),0);
        fcn.000166a4(*0x18010,0xca,0,0);
        fcn.000166a4(*0x18010,0xcb,0,0);
        fcn.000166a4(*0x18010,3,0,0);
        uVar4 = 0x7016;
        param_3 = uVar5;
        iVar3 = *0x17ff0;
        fcn.0001691c(*0x17ff0,0x7016,param_3,0);
    }
    uVar4 = uVar4 & 0xffffffffffffff00;
    if (piVar1[1] != 0) {
        uVar4 = 0;
        iVar3 = *(*(piVar1[1] + 0x2d0) + 0x20);
        if (*(iVar3 + 0x11) == -2) {
            uVar4 = 1;
        }
    }
    if (*piVar1 != 0) {
        uVar4 = uVar4 & 0xff;
        iVar3 = *(*(*piVar1 + 0x2d0) + 0x20);
        if (*(iVar3 + 0x11) == -2) {
            uVar4 = 1;
        }
    }
    if (uVar4 == '\0') {
        uVar4 = 0x7017;
        param_3 = uVar5;
        iVar3 = *0x17ff0;
        fcn.00016880(*0x17ff0,0x7017,param_3,1);
    }
    uVar4 = uVar4 & 0xffffffffffffff00;
    if (piVar1[1] != 0) {
        uVar4 = 0;
        iVar3 = *(*(piVar1[1] + 0x2d0) + 0x20);
        if (*(iVar3 + 0x12) == -2) {
            uVar4 = 1;
        }
    }
    if (*piVar1 != 0) {
        uVar4 = uVar4 & 0xff;
        iVar3 = *(*(*piVar1 + 0x2d0) + 0x20);
        if (*(iVar3 + 0x12) == -2) {
            uVar4 = 1;
        }
    }
    if (uVar4 == '\0') {
        uVar4 = 0x7018;
        param_3 = uVar5;
        iVar3 = *0x17ff0;
        fcn.00016880(*0x17ff0,0x7018,param_3,2);
    }
    uVar4 = uVar4 & 0xffffffffffffff00;
    if (piVar1[1] != 0) {
        uVar4 = 0;
        iVar3 = *(*(piVar1[1] + 0x2d0) + 0x20);
        if (*(iVar3 + 0x13) == -2) {
            uVar4 = 1;
        }
    }
    if (*piVar1 != 0) {
        uVar4 = uVar4 & 0xff;
        iVar3 = *(*(*piVar1 + 0x2d0) + 0x20);
        if (*(iVar3 + 0x13) == -2) {
            uVar4 = 1;
        }
    }
    if (uVar4 == '\0') {
        uVar4 = 0x7019;
        param_3 = uVar5;
        iVar3 = *0x17ff0;
        fcn.00016880(*0x17ff0,0x7019,param_3,3);
    }
    uVar4 = uVar4 & 0xffffffffffffff00;
    if (piVar1[1] != 0) {
        uVar4 = 0;
        iVar3 = *(*(piVar1[1] + 0x2d0) + 0x20);
        if (*(iVar3 + 0x14) == -2) {
            uVar4 = 1;
        }
    }
    if (*piVar1 != 0) {
        uVar4 = uVar4 & 0xff;
        iVar3 = *(*(*piVar1 + 0x2d0) + 0x20);
        if (*(iVar3 + 0x14) == -2) {
            uVar4 = 1;
        }
    }
    if (uVar4 == '\0') {
        uVar4 = 0x701a;
        param_3 = uVar5;
        iVar3 = *0x17ff0;
        fcn.00016880(*0x17ff0,0x701a,param_3,4);
    }
    uVar4 = uVar4 & 0xffffffffffffff00;
    if (piVar1[1] != 0) {
        uVar4 = 0;
        iVar3 = *(*(piVar1[1] + 0x2d0) + 0x20);
        if (*(iVar3 + 0x15) == -2) {
            uVar4 = 1;
        }
    }
    if (*piVar1 != 0) {
        uVar4 = uVar4 & 0xff;
        iVar3 = *(*(*piVar1 + 0x2d0) + 0x20);
        if (*(iVar3 + 0x15) == -2) {
            uVar4 = 1;
        }
    }
    if (uVar4 == '\0') {
        uVar4 = 0x701b;
        param_3 = uVar5;
        iVar3 = *0x17ff0;
        fcn.00016880(*0x17ff0,0x701b,param_3,5);
    }
    uVar4 = uVar4 & 0xffffffffffffff00;
    if (piVar1[1] != 0) {
        uVar4 = 0;
        iVar3 = *(*(piVar1[1] + 0x2d0) + 0x20);
        if (*(iVar3 + 0x16) == -2) {
            uVar4 = 1;
        }
    }
    if (*piVar1 != 0) {
        uVar4 = uVar4 & 0xff;
        iVar3 = *(*(*piVar1 + 0x2d0) + 0x20);
        if (*(iVar3 + 0x16) == -2) {
            uVar4 = 1;
        }
    }
    if (uVar4 == '\0') {
        uVar4 = 0x701c;
        param_3 = uVar5;
        iVar3 = *0x17ff0;
        fcn.00016880(*0x17ff0,0x701c,param_3,6);
    }
    uVar4 = uVar4 & 0xffffffffffffff00;
    if (piVar1[1] != 0) {
        uVar4 = 0;
        iVar3 = *(*(piVar1[1] + 0x2d0) + 0x20);
        if (*(iVar3 + 0x17) == -2) {
            uVar4 = 1;
        }
    }
    if (*piVar1 != 0) {
        uVar4 = uVar4 & 0xff;
        iVar3 = *(*(*piVar1 + 0x2d0) + 0x20);
        if (*(iVar3 + 0x17) == -2) {
            uVar4 = 1;
        }
    }
    if (uVar4 == '\0') {
        uVar4 = 0x701d;
        param_3 = uVar5;
        iVar3 = *0x17ff0;
        fcn.00016880(*0x17ff0,0x701d,param_3,7);
    }
    if (*0x18068 == '\0') {
        fcn.000167a0(*0x17ff0,2);
        uVar4 = 0;
        iVar3 = *0x17ff0;
        fcn.000167a0(*0x17ff0,0x4c);
        uVar4 = uVar4 & 0xffffffffffffff00;
        if (piVar1[1] != 0) {
            uVar4 = 0;
            iVar3 = *(*(piVar1[1] + 0x2d0) + 0x20);
            if (*(iVar3 + 0x18) == -2) {
                uVar4 = 1;
            }
        }
        if (*piVar1 != 0) {
            uVar4 = uVar4 & 0xff;
            iVar3 = *(*(*piVar1 + 0x2d0) + 0x20);
            if (*(iVar3 + 0x18) == -2) {
                uVar4 = 1;
            }
        }
        if (uVar4 == '\0') {
            fcn.000166a4(*0x18018,4,CONCAT71(param_3 >> 8,0x30),0);
            fcn.000166a4(*0x18018,0xc3,0,0);
            fcn.000166a4(*0x18018,0xc4,0,0);
            fcn.000166a4(*0x18018,0xc5,0,0);
            fcn.000166a4(*0x18018,0xc6,0,0);
            fcn.000166a4(*0x18018,199,0,0);
            uVar4 = 0x701e;
            iVar3 = *0x17ff0;
            fcn.0001691c(*0x17ff0,0x701e,uVar5,8);
        }
        uVar4 = uVar4 & 0xffffffffffffff00;
        if (piVar1[1] != 0) {
            uVar4 = 0;
            iVar3 = *(*(piVar1[1] + 0x2d0) + 0x20);
            if (*(iVar3 + 0x19) == -2) {
                uVar4 = 1;
            }
        }
        if (*piVar1 != 0) {
            uVar4 = uVar4 & 0xff;
            iVar3 = *(*(*piVar1 + 0x2d0) + 0x20);
            if (*(iVar3 + 0x19) == -2) {
                uVar4 = 1;
            }
        }
        if (uVar4 == '\0') {
            uVar4 = 0x701f;
            iVar3 = *0x17ff0;
            fcn.00016880(*0x17ff0,0x701f,uVar5,9);
        }
        uVar4 = uVar4 & 0xffffffffffffff00;
        if (piVar1[1] != 0) {
            uVar4 = 0;
            iVar3 = *(*(piVar1[1] + 0x2d0) + 0x20);
            if (*(iVar3 + 0x1a) == -2) {
                uVar4 = 1;
            }
        }
        if (*piVar1 != 0) {
            uVar4 = uVar4 & 0xff;
            iVar3 = *(*(*piVar1 + 0x2d0) + 0x20);
            if (*(iVar3 + 0x1a) == -2) {
                uVar4 = 1;
            }
        }
        if (uVar4 == '\0') {
            uVar4 = 0x7020;
            iVar3 = *0x17ff0;
            fcn.00016880(*0x17ff0,0x7020,uVar5,10);
        }
        uVar4 = uVar4 & 0xffffffffffffff00;
        if (piVar1[1] != 0) {
            uVar4 = 0;
            iVar3 = *(*(piVar1[1] + 0x2d0) + 0x20);
            if (*(iVar3 + 0x1b) == -2) {
                uVar4 = 1;
            }
        }
        if (*piVar1 != 0) {
            uVar4 = uVar4 & 0xff;
            iVar3 = *(*(*piVar1 + 0x2d0) + 0x20);
            if (*(iVar3 + 0x1b) == -2) {
                uVar4 = 1;
            }
        }
        if (uVar4 == '\0') {
            uVar4 = 0x7021;
            iVar3 = *0x17ff0;
            fcn.00016880(*0x17ff0,0x7021,uVar5,0xb);
        }
    }
    fcn.00016cb8(iVar3,uVar4,4,*0x17ff0,unaff_R14);
    return 0;
}


/* fcn.000118a4 @ 0x118a4 */

//WARNING: Variable defined which should be unmapped: var_bp_20h

ulong fcn.000118a4(ulong param_1,ulong param_2,uint64_t param_3)

{
    bool bVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t noname_0;
    uchar *arg1;
    uint16_t uVar6;
    ulong uVar7;
    uchar auStackY_58 [2];
    ushort uStackY_56;
    uint uStackY_54;
    uint16_t in_stack_ffffffffffffffb0;
    ushort in_stack_ffffffffffffffb2;
    uint in_stack_ffffffffffffffb4;
    int64_t var_30h;
    int16_t var_bp_28h;
    int16_t var_26h;
    int32_t var_24h;
    int32_t var_bp_20h;
    
    piVar3 = *0x18078;
    if (*0x17fb0 != 0) {
        fcn.00016548(*0x17fb0);
        fcn.00016548(*0x17fb8);
        fcn.00016548(*0x17fd0);
        fcn.00016548(*0x17fd8);
        fcn.00016548(*0x17fe0);
        fcn.00016548(*0x17fe8);
    }
    *0x17fb0 = fcn.000164f4();
    *0x17fb8 = fcn.000164f4();
    *0x17fd0 = fcn.000164f4();
    *0x17fd8 = fcn.000164f4();
    *0x17fe0 = fcn.000164f4();
    *0x17fe8 = fcn.000164f4();
    *0x17fc0 = fcn.00016744(*0x17fb0);
    iVar2 = *0x17fb8;
    *(*0x17fc0 + 0x12) = 0;
    iVar4 = fcn.00016744(iVar2);
    iVar2 = *0x17fc0;
    *0x17fc8 = iVar4;
    *(iVar4 + 0x12) = 0;
    *(iVar2 + 0x13) = 0x301;
    *(iVar4 + 0x13) = 0x302;
    uVar6 = *(piVar3 + 3) & 0xfff | 0x9000;
    fcn.000167a0(*0x17fb0,0x49);
    bVar1 = false;
    if ((piVar3[1] != 0) && (bVar1 = false, *(*(piVar3[1] + 0x2d0) + 0x80) == -2)) {
        bVar1 = true;
    }
    if ((*piVar3 != 0) && (*(*(*piVar3 + 0x2d0) + 0x80) == -2)) {
        bVar1 = true;
    }
    if (!bVar1) {
        param_3 = uVar6;
        fcn.00016880(*0x17fb0,0x700e,param_3,0);
    }
    bVar1 = false;
    if ((piVar3[1] != 0) && (bVar1 = false, *(*(piVar3[1] + 0x2d0) + 0x81) == -2)) {
        bVar1 = true;
    }
    if ((*piVar3 != 0) && (*(*(*piVar3 + 0x2d0) + 0x81) == -2)) {
        bVar1 = true;
    }
    if (!bVar1) {
        param_3 = uVar6;
        fcn.00016880(*0x17fb0,0x700f,param_3,1);
    }
    bVar1 = false;
    if ((piVar3[1] != 0) && (bVar1 = false, *(*(piVar3[1] + 0x2d0) + 0x82) == -2)) {
        bVar1 = true;
    }
    if ((*piVar3 != 0) && (*(*(*piVar3 + 0x2d0) + 0x82) == -2)) {
        bVar1 = true;
    }
    if (!bVar1) {
        param_3 = uVar6;
        fcn.00016880(*0x17fb0,0x7010,param_3,2);
    }
    bVar1 = false;
    if ((piVar3[1] != 0) && (bVar1 = false, *(*(piVar3[1] + 0x2d0) + 0x83) == -2)) {
        bVar1 = true;
    }
    if ((*piVar3 != 0) && (*(*(*piVar3 + 0x2d0) + 0x83) == -2)) {
        bVar1 = true;
    }
    if (!bVar1) {
        fcn.000108a8(*0x17fd0);
        param_3 = uVar6;
        fcn.0001691c(*0x17fb0,0x700a,param_3,3);
    }
    bVar1 = false;
    if ((piVar3[1] != 0) && (bVar1 = false, *(*(piVar3[1] + 0x2d0) + 0x84) == -2)) {
        bVar1 = true;
    }
    if ((*piVar3 != 0) && (*(*(*piVar3 + 0x2d0) + 0x84) == -2)) {
        bVar1 = true;
    }
    if (!bVar1) {
        fcn.000108a8(*0x17fd8);
        param_3 = uVar6;
        fcn.0001691c(*0x17fb0,0x700b,param_3,4);
    }
    if (*0x18068 == '\0') {
        fcn.000167a0(*0x17fb0,2);
        arg1 = 0x4b;
        uVar5 = *0x17fb0;
        fcn.000167a0(*0x17fb0,0x4b);
        uVar5 = uVar5 & 0xffffffffffffff00;
        if ((piVar3[1] != 0) && (uVar5 = 0, *(*(piVar3[1] + 0x2d0) + 0x85) == -2)) {
            uVar5 = 1;
        }
        if ((*piVar3 != 0) && (uVar5 = uVar5 & 0xff, *(*(*piVar3 + 0x2d0) + 0x85) == -2)) {
            uVar5 = 1;
        }
        if (uVar5 == '\0') {
            fcn.000166a4(*0x17fe0,3,CONCAT71(param_3 >> 8,0x30),0);
            fcn.000166a4(*0x17fe0,4,0,0);
            fcn.000166a4(*0x17fe0,0x6d,0,0);
            arg1 = 0x700c;
            param_3 = uVar6;
            uVar5 = *0x17fb0;
            fcn.0001691c(*0x17fb0,0x700c,param_3,5);
        }
        uVar5 = uVar5 & 0xffffffffffffff00;
        if ((piVar3[1] != 0) && (uVar5 = 0, *(*(piVar3[1] + 0x2d0) + 0x86) == -2)) {
            uVar5 = 1;
        }
        if ((*piVar3 != 0) && (uVar5 = uVar5 & 0xff, *(*(*piVar3 + 0x2d0) + 0x86) == -2)) {
            uVar5 = 1;
        }
        if (uVar5 == '\0') {
            arg1 = 0x7011;
            param_3 = uVar6;
            uVar5 = *0x17fb0;
            fcn.00016880(*0x17fb0,0x7011,param_3,6);
        }
        uVar5 = uVar5 & 0xffffffffffffff00;
        if ((piVar3[1] != 0) && (uVar5 = 0, *(*(piVar3[1] + 0x2d0) + 0x87) == -2)) {
            uVar5 = 1;
        }
        if ((*piVar3 != 0) && (uVar5 = uVar5 & 0xff, *(*(*piVar3 + 0x2d0) + 0x87) == -2)) {
            uVar5 = 1;
        }
        if (uVar5 == '\0') {
            arg1 = 0x7012;
            param_3 = uVar6;
            uVar5 = *0x17fb0;
            fcn.00016880(*0x17fb0,0x7012,param_3,7);
        }
        uVar5 = uVar5 & 0xffffffffffffff00;
        if ((piVar3[1] != 0) && (uVar5 = 0, *(*(piVar3[1] + 0x2d0) + 0x88) == -2)) {
            uVar5 = 1;
        }
        if ((*piVar3 != 0) && (uVar5 = uVar5 & 0xff, *(*(*piVar3 + 0x2d0) + 0x88) == -2)) {
            uVar5 = 1;
        }
        if (uVar5 == '\0') {
            fcn.000166a4(*0x17fe8,3,0,0);
            fcn.000166a4(*0x17fe8,0x7b,0,0);
            uVar7 = 0;
            fcn.000166a4(*0x17fe8,0x7c,0,0);
            fcn.000166a4(*0x17fe8,0x7e,CONCAT71(uVar7 >> 8,0x30),0);
            arg1 = 0x7013;
            param_3 = uVar6;
            uVar5 = *0x17fb0;
            fcn.0001691c(*0x17fb0,0x7013,param_3,8);
        }
        noname_0 = *0x17fb0;
        uVar5 = uVar5 & 0xffffffffffffff00;
        if ((piVar3[1] != 0) && (uVar5 = 0, *(*(piVar3[1] + 0x2d0) + 0x89) == 0xfe)) {
            uVar5 = 1;
        }
        if ((*piVar3 != 0) && (uVar5 = uVar5 & 0xff, *(*(*piVar3 + 0x2d0) + 0x89) == 0xfe)) {
            uVar5 = 1;
        }
        if (uVar5 == '\0') {
            fcn.000102c0(auStackY_58,0x26);
            in_stack_ffffffffffffffb2 = 9;
            arg1 = auStackY_58;
            uStackY_54 = 0x701400a9;
            uStackY_56 = 0xa8;
            in_stack_ffffffffffffffb4 = 0xa0114;
            in_stack_ffffffffffffffb0 = uVar6;
            fcn.000165d4(noname_0,arg1,CONCAT71(param_3 >> 8,7),0x14);
            uVar5 = noname_0;
        }
        uVar5 = uVar5 & 0xffffffffffffff00;
        if ((piVar3[1] != 0) && (uVar5 = 0, *(*(piVar3[1] + 0x2d0) + 0x8b) == -2)) {
            uVar5 = 1;
        }
        if ((*piVar3 != 0) && (uVar5 = uVar5 & 0xff, *(*(*piVar3 + 0x2d0) + 0x8b) == -2)) {
            uVar5 = 1;
        }
        if (uVar5 == '\0') {
            arg1 = 0x7015;
            uVar5 = *0x17fb0;
            fcn.00016880(*0x17fb0,0x7015,uVar6,0xb);
        }
        uVar5 = uVar5 & 0xffffffffffffff00;
        if ((piVar3[1] != 0) && (uVar5 = 0, *(*(piVar3[1] + 0x2d0) + 0x85) == -2)) {
            uVar5 = 1;
        }
        if ((*piVar3 != 0) && (uVar5 = uVar5 & 0xff, *(*(*piVar3 + 0x2d0) + 0x85) == -2)) {
            uVar5 = 1;
        }
        if (uVar5 != '\0') goto code_r0x000120c3;
        fcn.000167a0(*0x17fb0,2);
        fcn.000167a0(*0x17fb0,0x6b);
        arg1 = 0x6c;
    }
    else {
        fcn.000167a0(*0x17fb0,2);
        arg1 = 0xd0;
    }
    uVar5 = *0x17fb0;
    fcn.000167a0(*0x17fb0,arg1);
code_r0x000120c3:
    fcn.00016cb8(uVar5,arg1,3,*0x17fb0,
                 CONCAT44(in_stack_ffffffffffffffb4,CONCAT22(in_stack_ffffffffffffffb2,in_stack_ffffffffffffffb0)));
    return 0;
}


/* fcn.00010a40 @ 0x10a40 */

void fcn.00010a40(int64_t arg1,uint32_t arg2,int64_t arg3,uint32_t arg4)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint in_R9;
    uint64_t arg3_00;
    
    iVar4 = CONCAT44(in_R9,arg4);
    iVar3 = 0;
    if (*arg1 == 0) {
        if (*(arg1 + 8) == 0) {
            iVar3 = *0x18070;
            iVar2 = fcn.00016328(*0x18070,0x24,arg3,iVar4);
            iVar5 = iVar2;
            fcn.00016208(iVar3,0x22,iVar2);
            if (iVar2 != 0) {
                (**(*0x18088 + 0x48))(iVar2);
            }
            iVar2 = *0x18070;
            iVar3 = fcn.00016328(*0x18070,0x25,iVar5,iVar4);
            arg3 = iVar3;
            fcn.00016208(iVar2,0x23,iVar3);
        }
        if ((*arg1 == 0) && (*(arg1 + 8) == 0)) goto code_r0x00010cb6;
    }
    iVar3 = fcn.000131d4(200);
    if (iVar3 == 0) {
        return;
    }
    iVar4 = fcn.00016328(*0x18070,0x26,arg3,iVar4);
    if (*arg1 == 0) {
        uVar1 = *(*(*(arg1 + 8) + 0xb8) + 0x90);
    }
    else {
        uVar1 = *(*(*arg1 + 0xb8) + 0x90);
    }
    arg3_00 = uVar1;
    iVar5 = iVar3;
    fcn.00013290(iVar3,200,iVar4,arg3_00);
    iVar2 = iVar3;
    fcn.00016208(iVar5,0x22,iVar3);
    if (iVar4 != 0) {
        (**(*0x18088 + 0x48))(iVar4);
    }
    fcn.000102c0(iVar3,200);
    iVar4 = 0x178bc;
    if (arg2 != '\0') {
        iVar4 = 0x178b8;
    }
    iVar2 = fcn.00016328(*0x18070,0x27,iVar2,arg3_00);
    iVar5 = iVar3;
    fcn.00013290(iVar3,200,iVar2,iVar4);
    fcn.00016208(iVar5,0x23,iVar3);
    if (iVar2 != 0) {
        (**(*0x18088 + 0x48))(iVar2);
    }
code_r0x00010cb6:
    if (iVar3 != 0) {
        (**(*0x18088 + 0x48))(iVar3);
    }
    return;
}


/* fcn.0001081c @ 0x1081c */

void fcn.0001081c(int64_t arg1)

{
    uchar uVar1;
    uint64_t uVar2;
    unkbyte7 in_R8;
    
    uVar2 = 0;
    do {
        uVar1 = 0;
        if ((arg1 == *0x17fa0) && (uVar2 == 0)) {
            uVar1 = 0x30;
        }
        if ((arg1 == *0x17fa8) && (uVar2 == 1)) {
            uVar1 = 0x30;
        }
        fcn.000166a4(arg1,*("S" + uVar2 * 2),CONCAT71(in_R8,uVar1),0);
        uVar2 = uVar2 + 1;
    } while (uVar2 < 8);
    return;
}


/* fcn.000167fc @ 0x167fc */

void fcn.000167fc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar uVar1;
    unkbyte6 Var2;
    uchar auStack_18 [2];
    ushort uStack_16;
    ushort uStack_14;
    uchar uStack_c;
    ushort uStack_b;
    
    uVar1 = arg3 >> 8;
    Var2 = arg3 >> 0x10;
    fcn.000102c0(auStack_18,0xf);
    uStack_c = 4;
    uStack_16 = arg3;
    uStack_14 = arg4;
    uStack_b = arg2;
    fcn.000165d4(arg1,auStack_18,CONCAT62(Var2,CONCAT11(uVar1,0xf)),0xf);
    return;
}


/* fcn.00010520 @ 0x10520 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.00010520(uint32_t arg1)

{
    ushort uVar1;
    int64_t arg2;
    ushort *puVar2;
    ushort *puVar3;
    uint64_t uVar4;
    ushort *puVar5;
    ushort *puVar6;
    uint16_t uVar7;
    uint in_register_0000000c;
    int64_t *piVar8;
    int64_t iVar9;
    int64_t in_R8;
    char16_t *arg2_00;
    int64_t in_R9;
    ushort *arg3;
    ushort auStack_38 [8];
    int16_t var_bp_10h;
    
    piVar8 = CONCAT44(in_register_0000000c,arg1);
    puVar2 = NULL;
    auStack_38[0] = 0;
    if (((*(piVar8[2] + 0x3b) & 1) != 0) && (*piVar8 == 0)) {
        return 0;
    }
    arg2 = fcn.00014498(0xa0);
    if (arg2 == 0) {
        return 0x8000000000000009;
    }
    iVar9 = arg2;
    if ((*(piVar8[2] + 0x3b) & 1) == 0) {
        puVar6 = fcn.00016328(*0x18070,0x29,in_R8,in_R9);
        arg3 = auStack_38;
        if (puVar6 != NULL) {
            arg3 = puVar6;
        }
        if (*piVar8 == 0) {
            puVar3 = fcn.00016328(*0x18070,0x2c,in_R8,in_R9);
            puVar6 = auStack_38;
            if (puVar3 != NULL) {
                puVar6 = puVar3;
            }
            if (piVar8[1] != 0) {
                fcn.00013290(arg2,0xa0,0x17850,arg3);
                goto code_r0x00010783;
            }
            puVar3 = fcn.00016328(*0x18070,0x2d,in_R8,in_R9);
            arg2_00 = L"%s #%2d %s [FROM BRG (%s)]";
        }
        else {
            puVar2 = fcn.00016328(*0x18070,0x2b,in_R8,in_R9);
            if (*piVar8 == 0) {
code_r0x00010722:
                uVar7 = 0x2d;
            }
            else {
                uVar4 = *(*piVar8 + 0xef);
                if (uVar4 == 0xff) {
                    uVar7 = 0x42;
                }
                else {
                    if (0x13 < uVar4) goto code_r0x00010722;
                    uVar7 = *(uVar4 * 2 + 0x17910);
                }
            }
            puVar3 = fcn.00016328(*0x18070,uVar7,in_R8,in_R9);
            arg2_00 = L"%s #%2d %s [%s]";
            puVar6 = auStack_38;
            if (puVar2 != NULL) {
                puVar6 = puVar2;
            }
        }
        puVar2 = auStack_38;
        if (puVar3 != NULL) {
            puVar2 = puVar3;
        }
        fcn.00013290(arg2,0xa0,arg2_00,arg3);
        goto code_r0x00010783;
    }
    puVar2 = fcn.00016328(*0x18070,0x2a,in_R8,in_R9);
    puVar3 = fcn.00016328(*0x18070,0x28,in_R8,in_R9);
    if (*piVar8 == 0) {
code_r0x000105df:
        uVar7 = 0x2d;
    }
    else {
        uVar4 = *(*piVar8 + 0xef);
        if (uVar4 == 0xff) {
            uVar7 = 0x42;
        }
        else {
            if (0x13 < uVar4) goto code_r0x000105df;
            uVar7 = *(uVar4 * 2 + 0x17910);
        }
    }
    puVar5 = fcn.00016328(*0x18070,uVar7,in_R8,in_R9);
    arg3 = auStack_38;
    if (puVar2 != NULL) {
        arg3 = puVar2;
    }
    puVar6 = auStack_38;
    if (puVar3 != NULL) {
        puVar6 = puVar3;
    }
    puVar2 = auStack_38;
    if (puVar5 != NULL) {
        puVar2 = puVar5;
    }
    fcn.00013290(arg2,0xa0,0x17800,arg3);
code_r0x00010783:
    uVar1 = fcn.00016208(iVar9,0,arg2);
    *(piVar8 + 4) = uVar1;
    *(piVar8 + 0x22) = 0x20;
    *(piVar8 + 0x26) = 1;
    if ((arg3 != NULL) && (arg3 != auStack_38)) {
        (**(*0x180a0 + 0x48))(arg3);
    }
    if ((puVar6 != NULL) && (puVar6 != auStack_38)) {
        (**(*0x180a0 + 0x48))(puVar6);
    }
    if ((puVar2 != NULL) && (puVar2 != auStack_38)) {
        (**(*0x180a0 + 0x48))(puVar2);
    }
    (**(*0x180a0 + 0x48))(arg2);
    return 0;
}


/* fcn.00012df0 @ 0x12df0 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

void fcn.00012df0(void)

{
    int64_t *arg2;
    int64_t iVar1;
    int64_t iVar3;
    int64_t iVar2;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    var_28h = 0;
    iVar7 = 0;
    uStack_48 = 0;
    uVar5 = 0;
    uVar8 = 0;
    var_20h = 0;
    iVar6 = 0;
    var_bp_18h = 0;
    var_30h = 0;
    uStack_40 = 0;
code_r0x00012f1a:
    iVar2 = *0x18168;
    do {
        if (iVar2 == 0) {
            uVar4 = 0;
            if (uVar5 != 0) {
                do {
                    fcn.000160a8(0x18160,*(iVar7 + uVar4 * 8));
                    uVar4 = uVar4 + 1;
                } while (uVar4 < uVar5);
            }
            uVar5 = 0;
            if (uVar8 != 0) {
                do {
                    fcn.000160a8(0x18160,*(iVar6 + uVar5 * 8));
                    uVar5 = uVar5 + 1;
                } while (uVar5 < uVar8);
            }
            if (iVar6 != 0) {
                (**(*0x180a0 + 0x48))(iVar6);
            }
            if (iVar7 == 0) {
                return;
            }
            (**(*0x180a0 + 0x48))(iVar7);
            return;
        }
        arg2 = **0x18170;
        iVar1 = arg2[2];
        if (iVar2 != 0) {
            uVar4 = 0;
            iVar3 = 1;
            if (iVar2 != 1) {
                do {
                    (*0x18170)[uVar4] = (*0x18170)[uVar4 + 1];
                    uVar4 = uVar4 + 1;
                    iVar3 = *0x18168;
                } while (uVar4 < *0x18168 - 1U);
            }
            iVar2 = iVar3 + -1;
            *0x18168 = iVar2;
        }
        if ((*(iVar1 + 0x3b) & 1) != 0) {
            uVar4 = 0;
            if (uVar8 == 0) goto code_r0x00012eba;
            goto code_r0x00012e92;
        }
    } while (*arg2 == 0);
    uVar4 = 0;
    if (uVar5 != 0) {
        do {
            if (*(iVar1 + 0x31) < *(*(*(iVar7 + uVar4 * 8) + 0x10) + 0x31)) {
                iVar2 = fcn.00016028(&var_28h,arg2,uVar4);
                goto code_r0x00012f0d;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
    }
    iVar2 = fcn.000160a8(&var_28h,arg2);
code_r0x00012f0d:
    iVar7 = var_bp_18h;
    uVar5 = var_20h;
    goto code_r0x00012f15;
    while( true ) {
        iVar2 = **(iVar6 + uVar4 * 8);
        if ((iVar2 != 0) && (*(*arg2 + 0xef) < *(iVar2 + 0xef))) {
            iVar2 = fcn.00016028(&uStack_48,arg2,uVar4);
            goto code_r0x00012ec3;
        }
        uVar4 = uVar4 + 1;
        if (uVar8 <= uVar4) break;
code_r0x00012e92:
        if (*arg2 == 0) break;
    }
code_r0x00012eba:
    iVar2 = fcn.000160a8(&uStack_48,arg2);
code_r0x00012ec3:
    iVar6 = var_30h;
    uVar8 = uStack_40;
code_r0x00012f15:
    if (iVar2 < 0) {
        return;
    }
    goto code_r0x00012f1a;
}


/* fcn.000161ac @ 0x161ac */

int64_t fcn.000161ac(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = fcn.00016164();
    if (-1 < iVar1) {
        if ((arg2 == 0) || (*(*0x18100 + 0x18) <= arg1)) {
            iVar1 = -0x7ffffffffffffffe;
        }
        else {
            *arg2 = *0x18100 + 0x20 + arg1 * 0x159;
        }
    }
    return iVar1;
}


/* fcn.00015b90 @ 0x15b90 */

int64_t fcn.00015b90(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int16_t *piVar2;
    int64_t iVar3;
    int64_t arg1_00;
    uint32_t uVar4;
    uint64_t uStackX_18;
    int16_t *piStack_38;
    uchar auStack_30 [8];
    
    uStackX_18 = 0;
    if (((*0x180c0 == 0) && (iVar3 = (**(*0x180a0 + 0x140))(0x17720,0,0x180c0), iVar3 < 0)) ||
       ((*0x180c8 == 0 && (iVar3 = (**(*0x180a0 + 0x140))(96000,0,0x180c8), iVar3 < 0)))) {
        iVar3 = -0x7ffffffffffffff2;
    }
    else {
        iVar3 = (**(*0x180c0 + 8))(*0x180c0,&uStackX_18,0,1,0x17670,arg4);
        if (iVar3 == -0x7ffffffffffffffb) {
            iVar3 = uStackX_18 + 0x70;
            arg1_00 = fcn.0001446c(iVar3);
            iVar3 = fcn.00013290(arg1_00,iVar3,0x17e60,0x17740);
            iVar3 = (**(*0x180c0 + 8))(*0x180c0,&uStackX_18,arg1_00 + iVar3 * 2,1,0x17670,arg4);
            if (iVar3 < 0) {
                (**(*0x180a0 + 0x48))();
            }
            else {
                fcn.00014aa0(arg1_00);
                iVar3 = (**(*0x180c8 + 0x18))(*0x180c8,arg1_00,arg2,arg1,&piStack_38,auStack_30);
                if (-1 < iVar3) {
                    uVar4 = 2;
                    iVar1 = *piStack_38;
                    piVar2 = piStack_38;
                    while (iVar1 != 0) {
                        piVar2 = piVar2 + 1;
                        uVar4 = uVar4 + 2;
                        iVar1 = *piVar2;
                    }
                    uStackX_18 = uVar4;
                    iVar3 = (**(*0x180c0 + 8))(*0x180c0,&uStackX_18,piStack_38,0,0x17670,arg4);
                    (**(*0x180a0 + 0x48))(piStack_38);
                }
                (**(*0x180a0 + 0x48))(arg1_00);
            }
        }
    }
    return iVar3;
}


/* fcn.00016f84 @ 0x16f84 */

int64_t fcn.00016f84(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int16_t iVar1;
    int16_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    int iVar5;
    char16_t *arg2_00;
    uint uStack_58;
    
    iVar4 = 0;
    iVar5 = 0;
    if (arg1 == 0) {
code_r0x00016f95:
        iVar3 = 0;
    }
    else {
        if (arg3 == 1) {
            arg2_00 = L"PCI_DEV_%X_PCI";
        }
        else if (arg3 == 2) {
            arg2_00 = L"PCI_DEV_%X_PX1";
        }
        else if (arg3 == 3) {
            arg2_00 = L"PCI_DEV_%X_PX2";
        }
        else {
            if (arg3 != 4) goto code_r0x00016f95;
            arg2_00 = L"PCI_DEV_%X_HTP";
        }
        fcn.00013290(&uStack_58,0x50,arg2_00,arg2);
        piVar2 = &uStack_58;
        iVar3 = iVar4;
        iVar1 = uStack_58;
        while (iVar1 != 0) {
            piVar2 = piVar2 + 1;
            iVar3 = iVar3 + 1;
            iVar1 = *piVar2;
        }
        iVar3 = fcn.00014498(iVar3 * 2 + 2);
        piVar2 = &uStack_58;
        while (uStack_58 != 0) {
            piVar2 = piVar2 + 1;
            iVar4 = iVar4 + 1;
            iVar5 = iVar4;
            uStack_58._0_2_ = *piVar2;
        }
        fcn.00017204(iVar3,iVar5 + 1,&uStack_58);
    }
    return iVar3;
}


/* fcn.00012b9c @ 0x12b9c */

void fcn.00012b9c(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    bool bVar3;
    bool bVar4;
    ulong auStackX_10 [3];
    
    piVar1 = *(*0x18170 + (arg1 & 0x9fffU) * 8);
    auStackX_10[0] = 9;
    iVar2 = fcn.00016f84(piVar1[2],piVar1[3],1);
    piVar1[5] = iVar2;
    (**(*0x180a8 + 0x48))(iVar2,0x17670,0,auStackX_10,piVar1 + 9);
    iVar2 = *piVar1;
    if ((iVar2 == 0) && (iVar2 = piVar1[1], iVar2 == 0)) {
        bVar4 = *(piVar1[2] + 0x3b) >> 1 & 1;
        bVar3 = bVar4;
    }
    else {
        iVar2 = *(iVar2 + 0x2d0);
        bVar4 = iVar2 != 0;
        if ((iVar2 == 0) || (*(iVar2 + 0x20) == 0)) {
            bVar3 = false;
        }
        else {
            bVar3 = true;
        }
    }
    if (bVar4 != false) {
        *(piVar1 + 0xa7) = 1;
        auStackX_10[0] = 0x10;
        iVar2 = fcn.00016f84(piVar1[2],piVar1[3],2);
        piVar1[6] = iVar2;
        (**(*0x180a8 + 0x48))(iVar2,0x17670,0,auStackX_10,piVar1 + 0x51);
    }
    if (bVar3 != false) {
        *(piVar1 + 0x15) = 1;
        auStackX_10[0] = 0xe;
        iVar2 = fcn.00016f84(piVar1[2],piVar1[3],3);
        piVar1[7] = iVar2;
        (**(*0x180a8 + 0x48))(iVar2,0x17670,0,auStackX_10,piVar1 + 0x61);
    }
    return;
}


/* fcn.00012104 @ 0x12104 */

ulong fcn.00012104(uint32_t arg1,ulong noname_1,ulong noname_2,int64_t arg2)

{
    int64_t *arg1_00;
    int64_t arg2_00;
    int64_t iVar1;
    ulong uVar2;
    bool bVar3;
    uint16_t uVar4;
    int64_t iVar5;
    bool bVar6;
    bool bVar7;
    bool bVar8;
    int64_t unaff_R14;
    bool bVar9;
    
    if (arg1 < 0x6ff1) {
        bVar3 = false;
        bVar7 = false;
        *0x18068 = false;
        arg1_00 = *(*0x18170 + (arg1 & 0xffffffffffff9fff) * 8);
        iVar5 = 1;
        bVar6 = bVar3;
        if (*arg1_00 == 0) {
            if (arg1_00[1] == 0) {
                bVar9 = (*(arg1_00[2] + 0x3b) & 2) != 0;
                bVar7 = bVar9;
            }
            else {
                iVar1 = *(arg1_00[1] + 0x2d0);
                bVar9 = iVar1 != 0;
                if ((iVar1 != 0) && (*(iVar1 + 0x20) != 0)) {
                    bVar6 = *(iVar1 + 0x28) != 0;
                    bVar7 = true;
                }
            }
        }
        else {
            iVar1 = *(*arg1_00 + 0x2d0);
            bVar9 = iVar1 != 0;
            if (iVar1 != 0) {
                bVar6 = false;
                if ((*(iVar1 + 0x20) != 0) && (bVar7 = true, bVar6 = false, *(iVar1 + 0x28) != 0)) {
                    bVar6 = true;
                }
                *0x18068 = ((*(iVar1 + 2) & 0xf0) - 0x90 & 0xffef) == 0;
            }
        }
        *0x18078 = arg1_00;
        if (*0x17f80 != 0) {
            fcn.00016548(*0x17f80);
            fcn.00016548(*0x17f88);
            fcn.00016548(*0x17fa0);
            fcn.00016548(*0x17fa8);
        }
        iVar1 = *0x18070;
        arg2_00 = fcn.00016328(*0x18070,*(arg1_00 + 4),iVar5,arg2);
        uVar2 = 0;
        iVar5 = arg2_00;
        fcn.00016208(iVar1,0x21,arg2_00);
        fcn.00010a40(arg1_00,CONCAT71(uVar2 >> 8,bVar9),CONCAT71(iVar5 >> 8,bVar7),CONCAT71(arg2 >> 8,bVar6));
        *0x17f80 = fcn.000164f4();
        *0x17f88 = fcn.000164f4();
        *0x17fa0 = fcn.000164f4();
        *0x17fa8 = fcn.000164f4();
        *0x17f90 = fcn.00016744(*0x17f80);
        iVar5 = *0x17f88;
        *(*0x17f90 + 0x12) = 0;
        iVar1 = fcn.00016744(iVar5);
        iVar5 = *0x17f90;
        *0x17f98 = iVar1;
        *(iVar1 + 0x12) = 0;
        *(iVar5 + 0x13) = 0x201;
        *(iVar1 + 0x13) = 0x202;
        uVar4 = *(arg1_00 + 3) & 0xfff | 0x8000;
        bVar6 = false;
        if ((arg1_00[1] != 0) && (bVar6 = false, *(arg1_00[1] + 0x390) == -2)) {
            bVar6 = true;
        }
        if ((*arg1_00 == 0) || (*(*arg1_00 + 0x390) == -2)) {
            bVar6 = true;
        }
        if (!bVar6) {
            fcn.0001081c(*0x17fa0);
            fcn.0001691c(*0x17f80,0x7001,uVar4,0);
        }
        bVar6 = false;
        if ((arg1_00[1] != 0) && (bVar6 = false, *(arg1_00[1] + 0x391) == -2)) {
            bVar6 = true;
        }
        if ((*arg1_00 == 0) || (*(*arg1_00 + 0x391) == -2)) {
            bVar6 = true;
        }
        if (!bVar6) {
            fcn.0001081c(*0x17fa8);
            fcn.0001691c(*0x17f80,0x7002,uVar4,1);
        }
        bVar6 = false;
        if ((arg1_00[1] != 0) && (bVar6 = false, *(arg1_00[1] + 0x392) == -2)) {
            bVar6 = true;
        }
        if ((*arg1_00 == 0) || (*(*arg1_00 + 0x392) == -2)) {
            bVar6 = true;
        }
        if (!bVar6) {
            fcn.00016880(*0x17f80,0x7005,uVar4,2);
        }
        bVar6 = false;
        if ((arg1_00[1] != 0) && (bVar6 = false, *(arg1_00[1] + 0x393) == -2)) {
            bVar6 = true;
        }
        if ((*arg1_00 == 0) || (*(*arg1_00 + 0x393) == -2)) {
            bVar6 = true;
        }
        if (!bVar6) {
            fcn.00016880(*0x17f80,0x7003,uVar4,3);
        }
        bVar6 = false;
        if ((arg1_00[1] != 0) && (bVar6 = false, *(arg1_00[1] + 0x394) == -2)) {
            bVar6 = true;
        }
        if ((*arg1_00 == 0) || (*(*arg1_00 + 0x394) == -2)) {
            bVar6 = true;
        }
        if (!bVar6) {
            fcn.00016880(*0x17f80,0x7004,uVar4,4);
        }
        fcn.000167a0(*0x17f80,2);
        bVar6 = false;
        if ((arg1_00[1] != 0) && (bVar6 = false, *(arg1_00[1] + 0x396) == -2)) {
            bVar6 = true;
        }
        if ((*arg1_00 == 0) || (*(*arg1_00 + 0x396) == -2)) {
            bVar6 = true;
        }
        bVar8 = false;
        if ((!bVar6) && (bVar3 = bVar9, bVar8 = bVar7, bVar9 != false)) {
            fcn.00016880(*0x17f80,0x7027,uVar4,6);
            bVar6 = false;
            if ((arg1_00[1] != 0) && (bVar6 = false, *(arg1_00[1] + 0x397) == -2)) {
                bVar6 = true;
            }
            if ((*arg1_00 == 0) || (*(*arg1_00 + 0x397) == -2)) {
                bVar6 = true;
            }
            bVar8 = false;
            if ((!bVar6) && (bVar8 = bVar7, bVar7 != false)) {
                fcn.00017050(*0x17f80,0x7027,1,0);
                fcn.00016880(*0x17f80,0x7028,uVar4,7);
                fcn.000170b8(*0x17f80);
            }
        }
        iVar1 = 2;
        iVar5 = *0x17f80;
        fcn.000167a0(*0x17f80,2);
        if (bVar3 != false) {
            fcn.00017050(*0x17f80,0x7027,1,0);
            iVar1 = 3;
            fcn.000167fc(*0x17f80,3,0x1b,0x44);
            if (bVar8 != false) {
                fcn.00017050(*0x17f80,0x7028,1,0);
                iVar1 = 4;
                fcn.000167fc(*0x17f80,4,0x1c,0x45);
                fcn.000170b8(*0x17f80);
            }
            iVar5 = *0x17f80;
            fcn.000170b8(*0x17f80);
        }
        fcn.00016cb8(iVar5,iVar1,2,*0x17f80,unaff_R14);
        if (arg2_00 != 0) {
            (**(*0x180a0 + 0x48))();
        }
    }
    else if (*0x18078 != NULL) {
        arg1 = arg1 & 0xffff;
        if (arg1 == 0x6ff1) {
            fcn.000118a4();
        }
        else if (arg1 == 0x6ff2) {
            fcn.00011074();
        }
        else if (arg1 == 0x6ff3) {
            fcn.00010ce0();
        }
    }
    return 0;
}


/* fcn.00012a88 @ 0x12a88 */

void fcn.00012a88(uint32_t arg1,ulong noname_1,int64_t arg2)

{
    int64_t iVar1;
    int64_t arg3;
    
    iVar1 = *(*0x18170 + (arg1 & 0xffffffffffff9fff) * 8);
    if ((iVar1 != 0) && (arg1 < 0x6ff1)) {
        *(iVar1 + 0x48) = 0x20;
        *(iVar1 + 0x4c) = 0;
        *(iVar1 + 0x49) = 0x40;
        *(iVar1 + 0x4b) = 0;
        *(iVar1 + 0x4e) = 0;
        *(iVar1 + 0x50) = 0;
        fcn.00015b90(9,iVar1 + 0x48,arg2,*(iVar1 + 0x28));
        if (*(iVar1 + 0xa7) != '\0') {
            *(iVar1 + 0x51) = 1;
            *(iVar1 + 0x5a) = 1000;
            *(iVar1 + 0x52) = 0x37370100;
            *(iVar1 + 0x57) = 0;
            *(iVar1 + 0x5c) = 0;
            *(iVar1 + 0x59) = 5;
            *(iVar1 + 0x56) = 0;
            fcn.00015b90(0x10,iVar1 + 0x51,arg2,*(iVar1 + 0x30));
        }
        if (*(iVar1 + 0xa8) != '\0') {
            *(iVar1 + 0x61) = 0xff;
            *(iVar1 + 0x66) = 0x37000000;
            *(iVar1 + 0x62) = 0;
            *(iVar1 + 0x6a) = 0;
            *(iVar1 + 0x6c) = 0;
            fcn.00015b90(0xe,iVar1 + 0x61,arg2,*(iVar1 + 0x38));
        }
        if (*(iVar1 + 0xa9) != '\0') {
            arg3 = 0x38;
            (**(*0x180a0 + 0x160))(iVar1 + 0x6f,*(*(iVar1 + 8) + 0x300) + 0x10d);
            fcn.00015b90(0x38,iVar1 + 0x6f,arg3,*(iVar1 + 0x40));
        }
    }
    return;
}


/* fcn.000127ec @ 0x127ec */

int64_t fcn.000127ec(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t iStackX_8;
    uint64_t uStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    uint32_t var_48h;
    int64_t var_50h;
    uint32_t var_58h;
    
    iStackX_8 = 0;
    *0x18140 = fcn.000164f4();
    *0x18148 = fcn.000164f4();
    *0x18150 = fcn.00016744(*0x18140);
    *(*0x18150 + 0x12) = 0;
    *0x18158 = fcn.00016744(*0x18148);
    *(*0x18158 + 0x12) = 0;
    *(*0x18150 + 0x13) = 0x101;
    *(*0x18158 + 0x13) = 0x102;
    iVar5 = (**(*0x180a0 + 0x138))(2,0x17560,0,&uStackX_10,&iStackX_8);
    if ((iVar5 < 0) || (iStackX_8 == 0)) {
code_r0x00012a6e:
        iVar5 = -0x7ffffffffffffff2;
    }
    else {
        uVar7 = 0;
        if (*0x18168 != 0) {
            do {
                uVar8 = 0;
                iVar1 = *(*(*0x18170 + uVar7 * 8) + 0x10);
                if (uStackX_10 != 0) {
                    do {
                        iVar5 = (**(*0x180a0 + 0x98))(*(iStackX_8 + uVar8 * 8),0x17560,&iStackX_18);
                        iVar4 = iStackX_18;
                        if ((*(iVar1 + 0x3b) & 1) == 0) {
                            if (*(iStackX_18 + 0x338) == 0) {
code_r0x0001292c:
                                if ((*(iStackX_18 + 0x340) == 0) && (*(iStackX_18 + 0x348) == 0)) goto code_r0x00012948;
                            }
                            else {
                                if ((*(iStackX_18 + 0x340) != 0) || (*(iStackX_18 + 0x348) != 0)) goto code_r0x00012948;
                                if (*(iStackX_18 + 0x338) == 0) goto code_r0x0001292c;
                            }
                        }
                        else {
code_r0x00012948:
                            if (*(iStackX_18 + 0x2f0) != 0x24494350494d4124) goto code_r0x00012a6e;
                            iVar2 = *(iStackX_18 + 0x308);
                            if (iVar2 != 0) {
                                if (iVar2 == 1) {
                                    if (iVar1 == *(iStackX_18 + 0x300)) {
                                        **(*0x18170 + uVar7 * 8) = iStackX_18;
                                        *(*(*0x18170 + uVar7 * 8) + 8) = *(iStackX_18 + 0xc0);
                                        break;
                                    }
                                }
                                else {
                                    uVar6 = 0;
                                    if (iVar2 != 0) {
                                        do {
                                            iVar5 = fcn.000161ac(*(*(iVar4 + 0x310) + uVar6 * 8),&iStackX_20);
                                            if (iVar1 == iStackX_20) {
                                                **(*0x18170 + uVar7 * 8) = iVar4;
                                                *(*(*0x18170 + uVar7 * 8) + 8) = *(iVar4 + 0xc0);
                                                break;
                                            }
                                            uVar6 = uVar6 + 1;
                                        } while (uVar6 < *(iVar4 + 0x308));
                                    }
                                    piVar3 = *(*0x18170 + uVar7 * 8);
                                    if ((*piVar3 != 0) && (piVar3[1] != 0)) break;
                                }
                            }
                        }
                        uVar8 = uVar8 + 1;
                    } while (uVar8 < uStackX_10);
                }
                fcn.00010520(*(*0x18170 + uVar7 * 8));
                uVar7 = uVar7 + 1;
            } while (uVar7 < *0x18168);
        }
        if (iStackX_8 != 0) {
            (**(*0x180a0 + 0x48))();
        }
        fcn.00012df0();
    }
    return iVar5;
}


/* fcn.000160a8 @ 0x160a8 */

ulong fcn.000160a8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    
    iVar1 = fcn.00015f80(arg1);
    if (iVar1 < 0) {
        uVar2 = 0x8000000000000009;
    }
    else {
        *(*(arg1 + 0x10) + *(arg1 + 8) * 8) = arg2;
        *(arg1 + 8) = *(arg1 + 8) + 1;
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00016028 @ 0x16028 */

ulong fcn.00016028(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if ((*(iVar3 + 8) == 0) && (arg3 != 0)) {
        uVar1 = 0x8000000000000002;
    }
    else {
        iVar2 = fcn.00015f80(arg1);
        if (iVar2 < 0) {
            uVar1 = 0x8000000000000009;
        }
        else {
            iVar2 = *(iVar3 + 8);
            while (iVar2 = iVar2 + -1, arg3 <= iVar2) {
                *(*(iVar3 + 0x10) + 8 + iVar2 * 8) = *(*(iVar3 + 0x10) + iVar2 * 8);
            }
            *(*(iVar3 + 0x10) + arg3 * 8) = arg2;
            *(iVar3 + 8) = *(iVar3 + 8) + 1;
            uVar1 = 0;
        }
    }
    return uVar1;
}


/* fcn.00016164 @ 0x16164 */

void fcn.00016164(void)

{
    int64_t iVar1;
    
    if (*0x18108 == 0) {
        iVar1 = (**(*0x180a0 + 0x140))(0x17570,0,0x18108);
        if (-1 < iVar1) {
            *0x18100 = *(*0x18108 + 0x10);
        }
    }
    return;
}


/* fcn.00015da8 @ 0x15da8 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h

int64_t fcn.00015da8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
    iVar1 = (**(*0x180a0 + 0x98))(arg1,0x17730,&iStack_38);
    if ((-1 < iVar1) &&
       (iVar1 = (**(*0x180a0 + 0x118))(arg1,0x177e8,&iStackX_10,arg1,0,CONCAT44(uVar7,2)), -1 < iVar1)) {
        arg3_00 = &puStack_30;
        iVar1 = (**(*0x180a0 + 0x140))(0x176c0,0);
        if (-1 < iVar1) {
            iStackX_18 = 0;
            iStack_48 = 0;
            for (puVar4 = iStackX_10 + 0x14; (puVar4 < *(iStackX_10 + 0x10) + iStackX_10 && (*(puVar4 + 3) != '\x02'));
                puVar4 = puVar4 + (*puVar4 & 0xffffff)) {
            }
            piVar6 = &iStackX_18;
            piVar5 = &iStack_48;
            iVar2 = fcn.000159e0(iStack_38,puVar4 + 1,arg3_00,arg1);
            iVar1 = iStackX_18;
            if (-1 < iVar2) {
                if (*0x180b8 == '\0') {
                    *0x18120 = 0x18120;
                    *0x18128 = 0x18120;
                    *0x180b8 = '\x01';
                }
                iVar2 = (**puStack_30)(puStack_30,iStackX_10,iStackX_18,&uStack_40,piVar5,piVar6);
                if (iVar2 < 0) {
                    return iVar2;
                }
                iVar3 = (**(*0x180a0 + 0x40))(4,0x38,&puStackX_20);
                iVar2 = iStack_48;
                if (-1 < iVar3) {
                    puStackX_20[2] = *(iStack_48 + 8);
                    puStackX_20[3] = iVar1;
                    puStackX_20[4] = uStack_40;
                    (**(*0x180a0 + 0x160))(puStackX_20 + 5,puVar4 + 6,0x10);
                    *puStackX_20 = 0x18120;
                    puStackX_20[1] = *0x18128;
                    **0x18128 = puStackX_20;
                    *0x18128 = puStackX_20;
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


/* fcn.000132c0 @ 0x132c0 */

uchar * fcn.000132c0(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.000171d0 @ 0x171d0 */

uint64_t fcn.000171d0(uint32_t arg1,int64_t arg2)

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


/* fcn.00017374 @ 0x17374 */

uint64_t fcn.00017374(uint32_t arg1,int64_t arg2)

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


/* fcn.000141ec @ 0x141ec */

void fcn.000141ec(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00013484(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.000173a0 @ 0x173a0 */

int64_t fcn.000173a0(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint in_register_00000014;
    char *pcVar1;
    uint in_R8;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_R8,arg3);
    pcVar1 = CONCAT44(in_register_00000014,arg2);
    if (uVar2 == 0) {
        return 0;
    }
    for (; (((*arg1 != '\0' && (*pcVar1 != '\0')) && (*arg1 == *pcVar1)) && (1 < uVar2)); uVar2 = uVar2 - 1) {
        arg1 = arg1 + 1;
        pcVar1 = pcVar1 + 1;
    }
    return *arg1 - *pcVar1;
}


/* fcn.00014604 @ 0x14604 */

int64_t fcn.00014604(int64_t arg1)

{
    int64_t arg1_00;
    int64_t arg1_01;
    
    arg1_00 = fcn.000144d8(arg1);
    arg1_01 = fcn.0001446c(arg1_00);
    fcn.00017490(arg1_01,arg1,arg1_00);
    return arg1_01;
}


/* fcn.000144d8 @ 0x144d8 */

int64_t fcn.000144d8(int64_t arg1)

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


/* fcn.00017490 @ 0x17490 */

int64_t fcn.00017490(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.000160ec @ 0x160ec */

int64_t fcn.000160ec(uint32_t arg1,int64_t arg2,uint32_t arg3)

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


/* fcn.000148b8 @ 0x148b8 */

void fcn.000148b8(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.0001714c @ 0x1714c */

ulong fcn.0001714c(ulong param_1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x18088 + 0x98))(param_1,0x17550,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.00017180 @ 0x17180 */

char * fcn.00017180(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.000170f0(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.00017204 @ 0x17204 */

ulong fcn.00017204(int64_t arg1,uint32_t arg2,uint32_t *arg3)

{
    int16_t iVar1;
    uint64_t extraout_RAX;
    uint in_register_00000014;
    int64_t iVar2;
    
    if ((((arg1 == 0) || (arg3 == NULL)) || (1000000 < CONCAT44(in_register_00000014,arg2))) ||
       (CONCAT44(in_register_00000014,arg2) == 0)) {
        return 0x8000000000000002;
    }
    fcn.000171d0(arg3,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + (extraout_RAX + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x0001727a;
    }
    if (arg3 < arg1 + CONCAT44(in_register_00000014,arg2) * 2) {
        return 0x800000000000000f;
    }
code_r0x0001727a:
    iVar1 = *arg3;
    if (iVar1 != 0) {
        iVar2 = arg3 - arg1;
        do {
            *arg1 = iVar1;
            arg1 = arg1 + 2;
            iVar1 = *(iVar2 + arg1);
        } while (iVar1 != 0);
    }
    *arg1 = 0;
    return 0;
}


/* fcn.000132f4 @ 0x132f4 */

ulong fcn.000132f4(uint32_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

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
                pcVar6 = fcn.000132c0(arg1,pcVar10,uVar9 - iVar11,SUB164(auVar2 / ZEXT816(0x10),0) + 0x30);
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


/* fcn.000172a4 @ 0x172a4 */

ulong fcn.000172a4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    int16_t *piVar3;
    int64_t iVar4;
    uint64_t arg2_00;
    
    iVar4 = arg2;
    piVar3 = arg1;
    iVar1 = fcn.000171d0(arg1,arg2);
    arg2_00 = iVar4 - iVar1;
    if ((((arg1 == 0) || (arg3 == NULL)) || (1000000 < arg2)) || (arg2 == 0)) {
        return 0x8000000000000002;
    }
    if (arg2_00 == 0) {
        return 0x8000000000000004;
    }
    uVar2 = fcn.000171d0(arg3,arg2_00);
    if (arg2_00 <= uVar2) {
        return 0x8000000000000005;
    }
    if (arg3 <= piVar3) {
        if (piVar3 < arg3 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < piVar3) goto code_r0x00017345;
    }
    if (arg3 < piVar3 + arg2) {
        return 0x800000000000000f;
    }
code_r0x00017345:
    piVar3 = piVar3 + iVar1;
    for (; *arg3 != 0; arg3 = arg3 + 2) {
        *piVar3 = *arg3;
        piVar3 = piVar3 + 1;
    }
    *piVar3 = 0;
    return 0;
}


/* fcn.00014b80 @ 0x14b80 */

int16_t * fcn.00014b80(int64_t arg1,uint32_t arg2,int64_t arg3)

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
    ulong noname_2;
    char16_t *pcVar12;
    
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
        arg1_00 = fcn.0001714c(arg3);
        if (arg1_00 == 0) {
            return NULL;
        }
        uVar5 = fcn.00017180(arg1_00);
    }
    arg2_00 = (uVar5 + uVar10 * 2) * 2 + 0x32;
    arg1_01 = fcn.000131d4(arg2_00 * 2);
    if (arg1_01 != NULL) {
        noname_2 = 0x17d40;
        fcn.00017204(arg1_01,arg2_00,0x17d40);
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
                fcn.000132f4(piVar11,(arg2_00 * 2 - piVar11) + arg1_01,noname_2,*(uVar10 + arg1));
                iVar6 = fcn.000171d0(piVar11,arg2_00 - (piVar11 - arg1_01 >> 1));
                uVar10 = uVar10 + 1;
                piVar11 = piVar11 + iVar6;
            } while (uVar10 < 0x10);
        }
        pcVar12 = L"&NAME=";
        fcn.000172a4(arg1_01,arg2_00,0x17db0);
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
                fcn.000132f4(piVar11,(arg2_00 * 2 - piVar11) + arg1_01,pcVar12,*puVar9);
                iVar6 = fcn.000171d0(piVar11,arg2_00 - (piVar11 - arg1_01 >> 1));
                piVar11 = piVar11 + iVar6;
            }
        }
        pcVar12 = L"&PATH=";
        fcn.000172a4(arg1_01,arg2_00,0x17dc0);
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
                fcn.000132f4(piVar11,(arg2_00 * 2 - piVar11) + arg1_01,pcVar12,*(uVar8 + arg1_00));
                iVar6 = fcn.000171d0(piVar11,arg2_00 - (piVar11 - arg1_01 >> 1));
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


/* fcn.00014df4 @ 0x14df4 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00014df4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h)

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
    puVar5 = fcn.000131d4(arg2_00 * 2);
    uVar10 = 0;
    if (puVar5 == NULL) {
        return -0x7ffffffffffffff7;
    }
    if (((puVar7 == NULL) || (999999 < uVar4)) ||
       (puVar9 = puVar5, uVar4 = fcn.00017374(puVar7,arg2_00), arg2_00 <= uVar4)) goto code_r0x00014ebc;
    if (puVar5 < puVar7) {
code_r0x00014e99:
        if (puVar7 < puVar5 + arg2_00) goto code_r0x00014ebc;
    }
    else {
        if (puVar5 < uVar4 + 1 + puVar7) goto code_r0x00014ebc;
        if (puVar5 <= puVar7) goto code_r0x00014e99;
    }
    for (; *puVar7 != 0; puVar7 = puVar7 + 1) {
        *puVar9 = *puVar7;
        puVar9 = puVar9 + 1;
    }
    *puVar9 = uVar10;
code_r0x00014ebc:
    if (auStack_48 != arg3 + 2) {
        fcn.00010330(auStack_48,arg3 + 2,0x10);
    }
    arg3_00 = fcn.00014b80(auStack_48,puVar5,arg2);
    iVar6 = 0;
    iVar2 = *arg3_00;
    piVar3 = arg3_00;
    while (iVar2 != 0) {
        piVar3 = piVar3 + 1;
        iVar6 = iVar6 + 1;
        iVar2 = *piVar3;
    }
    iStackX_18 = iVar6 * 2 + 0x42;
    iVar6 = fcn.000131d4(iStackX_18);
    if (iVar6 == 0) {
        iVar8 = -0x7ffffffffffffff7;
        *in_stack_00000028 = 0;
        uVar11 = 0;
    }
    else {
        fcn.00013290(iVar6,iStackX_18,0x17dd0,arg3_00);
        iStackX_18 = 0;
        iVar8 = (**(*0x180a8 + 0x48))(puVar5,auStack_48,0,&iStackX_18,0);
        if (iVar8 == -0x7ffffffffffffffb) {
            uVar11 = fcn.000131d4(iStackX_18);
            iVar8 = (**(*0x180a8 + 0x48))(puVar5,auStack_48,0,&iStackX_18,uVar11);
            if (-1 < iVar8) {
                iVar8 = (**(arg1 + 0x18))(arg1,iVar6,uVar11,*(arg3 + 0x14),iStackX_20,in_stack_00000028);
            }
        }
    }
    (**(*0x18088 + 0x48))(puVar5);
    if (uVar11 != 0) {
        (**(*0x18088 + 0x48))(uVar11);
    }
    (**(*0x18088 + 0x48))(arg3_00);
    if (iVar6 != 0) {
        (**(*0x18088 + 0x48))(iVar6);
    }
    return iVar8;
}


/* fcn.0001503c @ 0x1503c */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

uint64_t fcn.0001503c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h)

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
    uVar3 = (**(*0x180a0 + 0x140))(0x176c0,0,0x180d0);
    if (uVar3 < 0) {
        return uVar3;
    }
    uVar3 = (**(*0x180a0 + 0x140))(96000,0,&iStack_50);
    if (uVar3 < 0) {
        return uVar3;
    }
    iStack_60 = 0;
    iVar4 = (**(*0x180d0 + 0x18))(*0x180d0,0,0,&iStack_60,&var_38h);
    if ((iVar4 == -0x7ffffffffffffffb) && (piVar5 = fcn.000131d4(iStack_60 + 8), piVar5 != NULL)) {
        iVar4 = (**(*0x180d0 + 0x18))(*0x180d0,0,0,&iStack_60,piVar5);
        if (iVar4 < 0) {
            iVar4 = *0x18088;
        }
        else {
            bVar1 = false;
            if (*piVar5 != 0) {
                piVar11 = piVar5;
                do {
                    (**(*0x180d0 + 0x50))(*0x180d0,*piVar11,&var_40h);
                    if ((_var_40h == arg2) && (*piVar11 == arg1)) {
                        bVar1 = true;
                        break;
                    }
                    uVar13 = uVar13 + 1;
                    piVar11 = piVar5 + uVar13;
                    bVar1 = false;
                } while (*piVar11 != 0);
            }
            (**(*0x180a0 + 0x48))(piVar5);
            if (!bVar1) {
                return 0x800000000000000e;
            }
            iVar4 = 0;
            piStack_68 = NULL;
            uVar3 = (**(*0x180d0 + 0x20))(*0x180d0,arg1,&stack0xffffffffffffffa8,0);
            if ((uVar3 < 0) && (uVar3 != 0x8000000000000005)) {
                return uVar3;
            }
            (**(*0x180a0 + 0x40))(4,iVar4,&piStack_68);
            if (piStack_68 == NULL) {
                return 0x8000000000000009;
            }
            (**(*0x180d0 + 0x20))(*0x180d0,arg1,&stack0xffffffffffffffa8);
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
                            if ((*_var_40h == '\x0e') && (iVar6 = fcn.000160ec(_var_40h + 2,arg3,0x10), iVar6 == 0))
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
                        (iVar7 = fcn.00014df4(iStack_50,arg2,arg3_00,&piStack_70,iVar4), -1 < iVar7)) &&
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
                            iVar6 = fcn.000131d4(uVar3);
                            if (iVar6 == 0) {
                                return 0x8000000000000009;
                            }
                            uVar3 = uVar3 >> 1;
                            fcn.000172a4(iVar6,uVar3,*arg4);
                            fcn.000172a4(iVar6,uVar3,0x17e04);
                            fcn.000172a4(iVar6,uVar3,piStack_70);
                            (**(*0x180a0 + 0x48))(*arg4);
                            (**(*0x180a0 + 0x48))(piStack_70);
                            *arg4 = iVar6;
                            *in_stack_00000028 = iVar6;
                            piStack_70 = NULL;
                        }
                    }
                    _var_40h = arg3_00;
                    if (*arg3_00 == ')') {
                        if (piStack_68 != NULL) {
                            (**(*0x180a0 + 0x48))();
                        }
                        return ~-(*arg4 != 0) & 0x800000000000000e;
                    }
                } while( true );
            }
            iVar4 = *0x180a0;
        }
        (**(iVar4 + 0x48))(piVar5);
    }
    return 0x800000000000000e;
}


/* fcn.0001470c @ 0x1470c */

void fcn.0001470c(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.0001464c @ 0x1464c */

int64_t fcn.0001464c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t *in_stack_00000028;
    
    if (*in_stack_00000028 == 0) {
        *arg4 = 0;
    }
    iVar1 = (**(*0x180a8 + 0x48))();
    if ((iVar1 < 0) && (iVar1 == -0x7ffffffffffffffb)) {
        if (*in_stack_00000028 != 0) {
            (**(*0x180a0 + 0x48))();
        }
        iVar1 = fcn.0001446c(*arg4);
        *in_stack_00000028 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x180a8 + 0x48))(arg1,arg2,arg3,arg4,iVar1);
        }
    }
    return iVar1;
}


/* fcn.00014938 @ 0x14938 */

uint64_t fcn.00014938(int64_t arg1,int64_t arg2)

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
        iVar2 = fcn.000160ec(piVar5,*0x17ea0,10);
        if (iVar2 == 0) {
            arg1 = arg1 + uVar6 * 2;
            uVar6 = uVar4;
            for (piVar5 = arg1 + 10;
                ((iVar1 = *piVar5, iVar1 - 0x30U < 0x37 && (6 < iVar1 - 0x3aU)) && (0x19 < iVar1 - 0x47U));
                piVar5 = piVar5 + 1) {
                uVar6 = uVar6 + 1;
            }
            pcVar7 = uVar6 >> 1;
            uVar3 = (**(*0x180a0 + 0x40))(4,pcVar7,&pcStackX_8);
            if (uVar3 < 0) {
                uVar4 = uVar3;
                pcVar7 = pcStackX_8;
            }
            else {
                fcn.000148b8(arg1 + 10,uVar6,pcStackX_8);
            }
            if (-1 < uVar4) {
                if (((pcStackX_8 == NULL) || (pcVar7 < 0x4)) ||
                   ((pcVar7 < *(pcStackX_8 + 2) || ((4 < *pcStackX_8 - 1U && (*pcStackX_8 != '\x7f')))))) {
                    uVar4 = 0x800000000000000e;
                }
                else {
                    pcStackX_18 = pcStackX_8;
                    uVar4 = (**(*0x180a0 + 0xb8))(0x177d8,&pcStackX_18,arg2);
                }
                (**(*0x180a0 + 0x48))(pcStackX_8);
            }
            return uVar4;
        }
    }
    return 0x800000000000000e;
}


/* fcn.0001452c @ 0x1452c */

int64_t fcn.0001452c(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t arg1_01;
    
    if (arg2 == 0) {
        if (arg1 == 0) {
            arg1 = 0x176a8;
        }
        arg1_00 = fcn.00014604(arg1);
    }
    else {
        if (arg1 == 0) {
            iVar1 = 0;
        }
        else {
            iVar1 = fcn.000144d8(arg1);
            iVar1 = iVar1 + -4;
        }
        arg1_00 = fcn.0001446c(*(arg2 + 2) + 4 + *(arg2 + 3) * 0x100 + iVar1);
        arg1_01 = arg1_00;
        if (iVar1 != 0) {
            fcn.00017490(arg1_00,arg1,iVar1);
            arg1_01 = arg1_00 + iVar1;
        }
        fcn.00017490(arg1_01,arg2,*(arg2 + 2));
        *(*(arg2 + 2) + *(arg2 + 3) * 0x100 + arg1_01) = *0x176a8;
    }
    return arg1_00;
}


/* fcn.00014aa0 @ 0x14aa0 */

void fcn.00014aa0(int64_t arg1)

{
    int64_t iVar1;
    int16_t *piVar2;
    int64_t iVar3;
    ulong in_RDX;
    int64_t iVar4;
    int16_t iVar5;
    int64_t aiStackX_18 [2];
    
    iVar4 = 0;
    iVar1 = (**(*0x180a0 + 0x40))(4,in_RDX,aiStackX_18);
    if (-1 < iVar1) {
        iVar5 = *arg1;
        iVar1 = iVar4;
        if (iVar5 != 0) {
            piVar2 = arg1;
            do {
                if ((iVar5 == 0x26) && (iVar3 = fcn.000160ec(piVar2 + 2,*0x17eb0,0xc), iVar3 == 0)) {
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
        fcn.00017490(arg1,aiStackX_18[0],iVar1 * 2 + 2);
        (**(*0x180a0 + 0x48))(aiStackX_18[0]);
    }
    return;
}


/* fcn.000159e0 @ 0x159e0 */

int64_t fcn.000159e0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
    piVar3 = 0x17650;
    iVar4 = iVar5;
    iStackX_20 = arg4;
    do {
        if (*piVar3 != 0) {
            iVar1 = fcn.000160ec(arg2 + 2,*piVar3,0x10);
            if (iVar1 == 0) break;
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 4;
    } while (iVar4 == 0);
    if (iVar4 == 1) {
        iVar1 = 0x177b8;
    }
    else {
        iVar4 = iVar4 * 0x20;
        iVar1 = iVar4 + 0x17650;
        piVar3 = *(iVar4 + 0x17658);
        if (piVar3 == NULL) {
            *(iVar4 + 0x17658) = 0x176d0;
        }
        else {
            if (*piVar3 == 0) {
                *piVar3 = 0x153f8;
            }
            if (*(*(iVar4 + 0x17658) + 8) == 0) {
                *(*(iVar4 + 0x17658) + 8) = 0x15778;
            }
            if (*(*(iVar4 + 0x17658) + 0x10) == 0) {
                *(*(iVar4 + 0x17658) + 0x10) = 0x159d4;
            }
        }
    }
    iVar4 = (**(*0x180a0 + 0x98))(*(arg1 + 0x18),0x176b0,&iStackX_20);
    if (iVar4 < 0) {
        iStackX_20 = iVar5;
    }
    iStackX_20 = fcn.0001452c(iStackX_20,*(arg1 + 0x20));
    *0x176ec = *(arg2 + 2);
    *0x176f4 = *(arg2 + 10);
    uVar2 = fcn.0001452c(iStackX_20,0x176e8);
    (**(*0x180a0 + 0x48))(iStackX_20);
    iVar4 = (**(*0x180a0 + 0x148))(&uStackX_18,0x176b0,uVar2,0x17710,*(iVar1 + 8),0);
    if (-1 < iVar4) {
        if (in_stack_00000030 != NULL) {
            *in_stack_00000030 = uStackX_18;
        }
        if (in_stack_00000028 != NULL) {
            if (iVar1 == 0x177b8) {
                iVar1 = iVar5;
            }
            *in_stack_00000028 = iVar1;
        }
        iVar4 = 0;
    }
    return iVar4;
}


/* fcn.00015f80 @ 0x15f80 */

ulong fcn.00015f80(int arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    uint64_t *puVar2;
    uint64_t uVar3;
    
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = *puVar2;
    if (uVar3 == 0) {
        uVar3 = 0x50;
    }
    else {
        if (puVar2[2] == 0) {
            uVar3 = uVar3 << 3;
        }
        else {
            if (puVar2[1] <= uVar3 - 1) {
                return 0;
            }
            uVar3 = uVar3 * 8 + 0x50;
        }
        if (uVar3 == 0) {
            return 0;
        }
    }
    uVar1 = fcn.00014498(uVar3);
    if (uVar1 != 0) {
        (**(*0x180a0 + 0x160))(uVar1,puVar2[2],puVar2[1] << 3);
        (**(*0x180a0 + 0x48))(puVar2[2]);
        *puVar2 = uVar3 >> 3;
        puVar2[2] = uVar1;
        return 0;
    }
    return 0x8000000000000009;
}


/* fcn.00016ef8 @ 0x16ef8 */

int64_t fcn.00016ef8(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uchar auStackX_10 [8];
    int64_t aiStackX_18 [2];
    
    aiStackX_18[0] = 0;
    iVar1 = (**(*0x180d8 + 0x18))(*0x180d8,arg1,auStackX_10,aiStackX_18);
    if ((iVar1 == -0x7ffffffffffffffb) && (iVar1 = fcn.000131d4(aiStackX_18[0]), iVar1 != 0)) {
        iVar2 = (**(*0x180d8 + 0x18))(*0x180d8,arg1,iVar1,aiStackX_18);
        if (-1 < iVar2) {
            return iVar1;
        }
        (**(*0x18088 + 0x48))(iVar1);
    }
    return 0;
}


/* fcn.00014210 @ 0x14210 */

int64_t fcn.00014210(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    auStackX_18[0] = 0;
    *arg1 = 0;
    iVar1 = (**(*0x18090 + 0x48))(L"PlatformLang",0x17540,0,auStackX_18,0);
    if (iVar1 == -0x7ffffffffffffffb) {
        iVar1 = fcn.000131a4();
        *arg1 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x18090 + 0x48))(L"PlatformLang",0x17540,0,auStackX_18,iVar1);
            if (iVar1 < 0) {
                (**(*0x18088 + 0x48))(*arg1);
                *arg1 = 0;
            }
        }
    }
    return iVar1;
}


/* fcn.000142cc @ 0x142cc */

char * fcn.000142cc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    char cVar2;
    int64_t iVar3;
    char *arg1_00;
    uint64_t uVar4;
    char *pcVar5;
    int64_t *piVar6;
    uint64_t arg3_00;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iStackX_20 = arg4;
    if (arg3 != 0) {
        piVar6 = &iStackX_18;
        iStackX_18 = arg3;
        do {
            cVar2 = *arg3;
            uVar4 = 0;
            arg3_00 = 3;
            if (cVar2 == '\0') {
code_r0x0001431c:
                uVar4 = 0;
                cVar1 = cVar2;
                while (cVar1 != '\0') {
                    uVar4 = uVar4 + 1;
                    cVar1 = *(arg3 + uVar4);
                }
            }
            else {
                do {
                    uVar4 = uVar4 + 1;
                } while (*(arg3 + uVar4) != '\0');
                if (uVar4 < 4) goto code_r0x0001431c;
                uVar4 = 3;
            }
            if (arg2 == 0) {
                uVar4 = 0;
                if (cVar2 != '\0') {
                    do {
                        if (cVar2 == ';') break;
                        uVar4 = uVar4 + 1;
                        cVar2 = *(arg3 + uVar4);
                    } while (cVar2 != '\0');
                    goto code_r0x000143b7;
                }
            }
            else {
code_r0x000143b7:
                if (uVar4 != 0) {
                    cVar2 = *arg1;
                    pcVar5 = arg1;
                    while (cVar2 != '\0') {
                        if (arg2 == 0) {
                            for (; (*pcVar5 != '\0' && (*pcVar5 == ';')); pcVar5 = pcVar5 + 1) {
                            }
                            arg3_00 = 0;
                            cVar2 = *pcVar5;
                            while ((cVar2 != '\0' && (cVar2 != ';'))) {
                                arg3_00 = arg3_00 + 1;
                                cVar2 = pcVar5[arg3_00];
                            }
                            if (uVar4 <= arg3_00) goto code_r0x00014384;
                        }
                        else {
code_r0x00014384:
                            iVar3 = fcn.000173a0(pcVar5,arg3,uVar4);
                            if (iVar3 == 0) {
                                arg1_00 = fcn.000131d4(arg3_00 + 1);
                                if (arg1_00 == NULL) {
                                    return NULL;
                                }
                                if (arg3_00 != 0) {
                                    if (arg1_00 != pcVar5) {
                                        pcVar5 = fcn.00010330(arg1_00,pcVar5,arg3_00);
                                        return pcVar5;
                                    }
                                    return arg1_00;
                                }
                                return arg1_00;
                            }
                        }
                        pcVar5 = pcVar5 + arg3_00;
                        cVar2 = *pcVar5;
                    }
                    if ((arg2 != 0) || (uVar4 = uVar4 - 1, uVar4 == 0)) goto code_r0x000143bc;
                    do {
                        if (*(arg3 + uVar4) == '-') break;
                        uVar4 = uVar4 - 1;
                    } while (uVar4 != 0);
                    goto code_r0x000143b7;
                }
            }
code_r0x000143bc:
            piVar6 = piVar6 + 1;
            arg3 = *piVar6;
        } while (arg3 != NULL);
    }
    return NULL;
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


/* fcn.000169f4 @ 0x169f4 */

ulong fcn.000169f4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h,int64_t arg_68h)

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
        fcn.00010330(in_stack_00000030,arg3,4);
    }
    iVar9 = 4;
    pcVar7 = piVar4 + 4;
    if (&iStackX_8 != arg3) {
        fcn.00010330(&iStackX_8,arg3,4);
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
            fcn.00010330(pcVar7,arg2_00,arg2_00[1] & 0x7f);
            uVar5 = iStackX_8;
        }
        pcVar7 = pcVar7 + (arg2_00[1] & 0x7f);
        iVar9 = iVar9 + (arg2_00[1] & 0x7f);
        if (*arg2_00 == '\x0e') {
            if ((*(arg2_00 + 2) == *0x17670) && (*(arg2_00 + 10) == *0x17678)) {
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
                    goto code_r0x00016b00;
                }
            }
            bVar3 = true;
        }
code_r0x00016b00:
        if (((bVar2) && (bVar3)) && (pcVar1 = *arg4, ((arg2_00[1] ^ pcVar1[1]) & 0x7fU) == 0)) {
            if (((pcVar1[1] & 0x7fU) == 0) || (arg2_00 == pcVar1)) {
                iVar6 = 0;
            }
            else {
                iVar6 = fcn.00010370(arg2_00,pcVar1,pcVar1[1] & 0x7f);
                uVar5 = iStackX_8;
            }
            if (iVar6 == 0) {
                if (in_stack_00000028 == NULL) goto code_r0x00016bc9;
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
            if ((uVar5 & 0xffffff) <= uVar10) goto code_r0x00016bbb;
        } while (((arg2_00[1] ^ pcVar1[1]) & 0x7fU) != 0);
    }
code_r0x00016bbb:
    if ((uVar5 & 0xffffff) <= uVar10) {
        return 0x800000000000000e;
    }
code_r0x00016bc9:
    uVar11 = *(*arg4 + 1) & 0x7f;
    pcVar1 = *arg4 + uVar11;
    iVar6 = *(arg4 + 0x10) - uVar11;
    if ((iVar6 != 0) && (pcVar7 != pcVar1)) {
        fcn.00010330(pcVar7,pcVar1,iVar6);
        uVar5 = iStackX_8;
    }
    iVar6 = *(arg4 + 0x10) - uVar11;
    pcVar7 = pcVar7 + iVar6;
    iVar8 = iVar9 + iVar6;
    if (in_stack_00000028 != NULL) {
        if (((arg2_00[1] & 0x7fU) != 0) && (pcVar7 != arg2_00)) {
            fcn.00010330(pcVar7,arg2_00,arg2_00[1] & 0x7f);
            uVar5 = iStackX_8;
        }
        pcVar7 = pcVar7 + (arg2_00[1] & 0x7f);
        iVar8 = iVar8 + (arg2_00[1] & 0x7f);
    }
    iVar6 = uVar10 + (arg2_00[1] & 0x7f);
    iVar9 = (uVar5 & 0xffffff) - iVar6;
    if ((iVar9 != 0) && (pcVar7 != iVar6 + arg3)) {
        fcn.00010330(pcVar7,iVar6 + arg3,iVar9);
        uVar5 = iStackX_8;
    }
    iStackX_8 = CONCAT44(iStackX_8._4_4_,uVar5 ^ (iVar8 + ((uVar5 & 0xffffff) - iVar6) ^ uVar5) & 0xffffff);
    if (in_stack_00000030 != &iStackX_8) {
        fcn.00010330(in_stack_00000030,&iStackX_8,4);
    }
    return 0;
}


/* fcn.000170f0 @ 0x170f0 */

bool fcn.000170f0(uint32_t arg1)

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


