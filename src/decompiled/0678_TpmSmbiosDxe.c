// decompiled by r2ghidra: 0678_TpmSmbiosDxe.pe32
// functions: 30

/* entry0 @ 0x103a4 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.000103c0(arg1,in_RDX);
    fcn.00010494(arg1,in_RDX);
    return;
}


/* fcn.000103c0 @ 0x103c0 */

void fcn.000103c0(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x129a8 = *(arg1 + 0x60);
    *0x129b0 = *(arg1 + 0x58);
    *0x129a0 = arg1;
    fcn.00012078();
    puVar4 = fcn.00012078();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x0001041f:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010340();
                fcn.00010330();
                uVar2 = in(0x1808);
                fcn.00010310(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x00010300();
                }
                fcn.00010310(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010330();
                }
                else {
                    fcn.00010320();
                }
                return;
            }
            if ((*0x123f0 == *(puVar4 + 4)) && (*0x123f8 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x0001041f;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010494 @ 0x10494 */

ulong fcn.00010494(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uStackX_8;
    int64_t aiStackX_10 [3];
    
    *0x12af0 = arg1;
    aiStackX_10[0] = arg2;
    iVar1 = (**(*0x129a8 + 0x140))(0x12250,0,0x12988);
    if (iVar1 < 0) {
        iVar1 = (**(*0x129a8 + 0x50))(0x200,8,fcn.00010ff4,0,aiStackX_10);
        if (iVar1 < 0) {
            return 0;
        }
        iVar1 = (**(*0x129a8 + 0xa8))(0x12250,aiStackX_10[0],0x12c00);
        if (iVar1 < 0) {
            return 0;
        }
    }
    else {
        fcn.00010ff4(0);
    }
    iVar1 = (**(*0x129a8 + 0x140))(0x122a0,0,0x12990);
    if (iVar1 < 0) {
        iVar1 = (**(*0x129a8 + 0x50))(0x200,8,fcn.00010d70,0,&uStackX_8);
        if (-1 < iVar1) {
            (**(*0x129a8 + 0xa8))(0x122a0,uStackX_8,0x12c10);
        }
    }
    else {
        fcn.00010d70(0);
    }
    return 0;
}


/* fcn.00012078 @ 0x12078 */

int64_t fcn.00012078(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x129c0 == 0) {
        *0x129c0 = 0;
        if (*(*0x129a0 + 0x68) != 0) {
            piVar2 = *(*0x129a0 + 0x70);
            do {
                if ((*0x12280 == *piVar2) && (*0x12288 == piVar2[1])) {
                    *0x129c0 = (*(*0x129a0 + 0x70))[uVar1 * 3 + 2];
                    return *0x129c0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x129a0 + 0x68));
        }
    }
    return *0x129c0;
}


/* fcn.00010340 @ 0x10340 */

uint64_t fcn.00010340(void)

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


/* fcn.00010330 @ 0x10330 */

void fcn.00010330(void)

{
    return;
}


/* fcn.00010310 @ 0x10310 */

uint64_t fcn.00010310(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010302 @ 0x10302 */

void fcn.00010302(void)

{
    return;
}


/* fcn.00010320 @ 0x10320 */

void fcn.00010320(void)

{
    return;
}


/* fcn.00010ff4 @ 0x10ff4 */

void fcn.00010ff4(int64_t arg1)

{
    char cVar1;
    uint16_t uVar2;
    int64_t iVar3;
    uchar uVar4;
    int64_t *arg3;
    int64_t aiStackX_8 [4];
    uchar auStack_28 [24];
    uint uStack_10;
    
    if (arg1 != 0) {
        (**(*0x129a8 + 0x70))();
    }
    if ((*0x12988 == NULL) && (iVar3 = (**(*0x129a8 + 0x140))(0x12250,0,0x12988), iVar3 < 0)) {
        return;
    }
    arg3 = aiStackX_8;
    iVar3 = (**(*0x129a8 + 0x140))(0x12270,0);
    if (-1 < iVar3) {
        if ((*0x12998 == 0) && (*0x12998 = fcn.000120e4(*(*0x129a0 + 0x68),*(*0x129a0 + 0x70),arg3), *0x12998 == 0))
        {
            return;
        }
        auStack_28[0] = 0x1c;
        iVar3 = (***0x12988)(*0x12988,auStack_28);
        if (-1 < iVar3) {
            *0x12ae2 = uStack_10;
            *0x12ad8 = 2;
            *0x12ada = *(*0x12998 + 3);
            *0x12ade = *(*0x12998 + 0xb);
            *0x12ae6 = *(aiStackX_8[0] + 0x18);
            iVar3 = fcn.00011234();
            cVar1 = (**(iVar3 + 0x30))(0x1e3);
            if (cVar1 == '\0') {
                iVar3 = fcn.00011234();
                cVar1 = (**(iVar3 + 0x30))(0x1e4);
                if (cVar1 == '\0') {
                    iVar3 = fcn.00011234();
                    cVar1 = (**(iVar3 + 0x30))(0x1e5);
                    uVar4 = *0x12ad9;
                    if (cVar1 != '\0') {
                        uVar4 = 2;
                    }
                    *0x12ad8 = CONCAT11(uVar4,*0x12ad8);
                }
                else {
                    *0x12ad8 = CONCAT11(3,*0x12ad8);
                }
            }
            else {
                *0x12ad8 = CONCAT11(1,*0x12ad8);
            }
            *0x12ad0 = 0x19;
            if ((*(aiStackX_8[0] + 0x15) != '\0') || (*0x12ae8 = 0, *(aiStackX_8[0] + 0x16) != '\0')) {
                *0x12ae8 = 1;
            }
            (**(*0x129a8 + 0x80))(0x12af0,0x122c0,0,0x122d0);
            cVar1 = fcn.000121ec();
            if (cVar1 == '\0') {
                *0x122e8 = 2;
                *0x122ea = *(*0x12998 + 3);
                *0x122ee = *(*0x12998 + 0xb);
                uVar2 = uStack_10 >> 0x10;
                *0x122e4 = CONCAT22(uStack_10 << 8 | uStack_10 >> 8,uVar2 << 8 | uVar2 >> 8);
                fcn.00010b30();
            }
        }
    }
    return;
}


/* fcn.00010d70 @ 0x10d70 */

void fcn.00010d70(int64_t arg1)

{
    uint uVar1;
    uint uVar2;
    char cVar3;
    int64_t iVar4;
    uint *puVar5;
    ushort uStack_88;
    uint uStack_86;
    uint uStack_82;
    uint uStack_7e;
    uint uStack_7a;
    uint uStack_76;
    uint uStack_68;
    ushort uStack_64;
    ushort uStack_62;
    ushort uStack_60;
    ushort uStack_5e;
    uint uStack_5c;
    uint uStack_58;
    uint uStack_54;
    ushort uStack_50;
    uchar uStack_4e;
    uchar auStack_48 [12];
    uint uStack_3c;
    uint uStack_38;
    uchar auStack_30 [16];
    char cStack_20;
    
    if (arg1 != 0) {
        (**(*0x129a8 + 0x70))();
    }
    if ((*0x12990 == 0) && (iVar4 = (**(*0x129a8 + 0x140))(0x122a0,0,0x12990), iVar4 < 0)) {
        return;
    }
    cVar3 = fcn.000121ec();
    if (cVar3 == '\0') {
        puVar5 = fcn.00010bb0(&uStack_88);
    }
    else {
        puVar5 = fcn.00010c90(&uStack_88);
    }
    uStack_68 = *puVar5;
    uStack_5c = puVar5[3];
    uStack_50 = *(puVar5 + 6);
    uStack_4e = *(puVar5 + 0x1a);
    uStack_64 = puVar5[1];
    uStack_62 = puVar5[1] >> 0x10;
    uStack_60 = puVar5[2];
    uStack_5e = puVar5[2] >> 0x10;
    uStack_58 = *(puVar5 + 4);
    uStack_54 = *(puVar5 + 4) >> 0x20;
    if (CONCAT22(uStack_60,uStack_62) == 0) {
        (**(*0x129a8 + 0x168))(0x12ad0,0x19);
        uVar1 = CONCAT13(uStack_4e,CONCAT21(uStack_50,uStack_54._3_1_));
        uStack_88 = 0xc100;
        uStack_86 = 0x16000000;
        iVar4 = *0x12990;
        *0x12ae2 = uVar1;
        cVar3 = fcn.000121ec();
        uStack_7e = 0x4000000;
        uStack_76 = 0x8010000;
        uStack_82 = 0x65800000;
        if (cVar3 == '\0') {
            uStack_82 = 0x65000000;
        }
        uStack_7a = 0x4000000;
        iVar4 = (**(iVar4 + 0x18))(iVar4,0x16,&uStack_88,0x24,auStack_30);
        if (-1 < iVar4) {
            *0x12ae8 = cStack_20 != '\x01';
            cVar3 = fcn.000121ec();
            uVar2 = uStack_58;
            *0x12ad9 = 0;
            *0x12ada = uStack_58;
            *0x12ade = 0;
            *0x12ad8 = (-(cVar3 != '\0') & 2U) + 1;
            cVar3 = fcn.000121ec();
            *0x12ae6 = 2;
            if (cVar3 == '\0') {
                *0x12ae6 = 1;
            }
            uStack_3c = uVar2;
            uStack_38 = uVar1;
            (**(*0x129b0 + 0x58))(L"Tpm12VersionInfo",0x122b0,3,0x14,auStack_48);
            iVar4 = fcn.00011234();
            cVar3 = (**(iVar4 + 0x30))(0x1e3);
            if (cVar3 == '\0') {
                iVar4 = fcn.00011234();
                cVar3 = (**(iVar4 + 0x30))(0x1e4);
                if (cVar3 == '\0') {
                    iVar4 = fcn.00011234();
                    cVar3 = (**(iVar4 + 0x30))(0x1e5);
                    if (cVar3 != '\0') {
                        *0x12ad9 = 2;
                    }
                }
                else {
                    *0x12ad9 = 3;
                }
            }
            else {
                *0x12ad9 = 1;
            }
            *0x12ad0 = 0x19;
            (**(*0x129a8 + 0x80))(0x12af0,0x122c0,0,0x122d0);
            cVar3 = fcn.000121ec();
            if (cVar3 == '\0') {
                *0x122ee = 0;
                *0x122e8 = 0x201;
                *0x122ea = uVar2;
                *0x122e4 = uVar1;
                fcn.00010b30();
            }
        }
    }
    return;
}


/* fcn.000112cc @ 0x112cc */

void fcn.000112cc(int64_t noname_0,int64_t noname_1,int64_t arg1,int64_t arg2)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00011328(noname_0,noname_1,0,arg1,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00011328 @ 0x11328 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00011328(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

{
    uint16_t uVar1;
    uint32_t uVar2;
    char cVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    char *pcVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    uint64_t *puVar14;
    char cVar15;
    char *pcVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    uint64_t *puVar19;
    uint64_t uVar20;
    int64_t *piVar21;
    uint8_t *puVar22;
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
    int64_t iStack_98;
    uint64_t uStack_90;
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
    
    puStack_b0 = NULL;
    if (arg2 == 0) {
        uVar6 = arg3 & 0x2000;
        if ((arg3 & 0x2000U) == 0) goto code_r0x00011383;
    }
    else {
        uVar6 = arg3 & 0x2000;
        if (((arg3 & 0x2000U) == 0) && (arg1 == 0)) {
            return 0;
        }
    }
    if (arg4 == 0) {
        return 0;
    }
code_r0x00011383:
    uVar18 = 1000000;
    iVar13 = 2;
    if ((arg3 & 0x40U) == 0) {
        if (1000000 < arg2) {
            return 0;
        }
        uVar20 = 1;
    }
    else {
        if (1000000 < arg2) {
            return 0;
        }
        uVar20 = 2;
    }
    uVar11 = uVar20;
    if ((arg3 >> 8 & 1) == 0) {
        uVar5 = fcn.00011210(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        iVar13 = 1;
        uStack_90 = 0xff;
    }
    else {
        uVar5 = fcn.000111e4(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        uStack_90 = 0xffff;
    }
    var_78h = iVar13;
    if (uVar6 == 0) {
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
        pcStack_d8 = arg1 + (arg2 + -1) * (uVar11 & 0xffffffff);
    }
    if (iVar13 == 1) {
        iVar4 = 0;
    }
    else {
        iVar4 = *(arg4 + 1) << 8;
    }
    uVar18 = *arg4;
    uVar6 = iVar4;
    while( true ) {
        uVar11 = 1;
        uStack_a8 = (uVar18 | uVar6) & uStack_90;
        if ((uStack_a8 == 0) || ((arg1 != NULL && (pcStack_d8 <= arg1)))) break;
        uStack_a0 = 0;
        uVar6 = 0;
        iStack_98 = 0;
        cVar3 = '\0';
        uVar5 = arg3 & 0x2140;
        uStack_b8 = 1;
        uVar18 = 1;
        cVar15 = '\0';
        bVar23 = false;
        _cStack0000000000000030 = _cStack0000000000000030 & 0xffffffffffffff00;
        uStack_c0 = 0;
        uStackX_18 = uVar5;
        if (uStack_a8 == 10) {
            puVar22 = arg4 + var_78h;
            pcVar9 = 0x125dc;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar22[1] << 8;
            }
            uStack_a8 = (iVar4 | *puVar22) & uStack_90;
            if (uStack_a8 != 0xd) {
                puVar22 = arg4;
            }
        }
        else {
            uVar18 = uVar11;
            if (uStack_a8 == 0xd) {
code_r0x0001170d:
                puVar22 = arg4 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puVar22[1] << 8;
                }
                uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                if (uStack_a8 == 10) {
                    pcVar9 = 0x125dc;
                }
                else {
                    pcVar9 = 0x125e0;
                    puVar22 = arg4;
                }
            }
            else {
                puStackX_20 = arg4;
                if (uStack_a8 == 0x25) {
                    puVar14 = puStack_b0;
                    puVar19 = in_stack_00000028;
code_r0x000114cc:
                    while( true ) {
                        puStackX_20 = arg4 + var_78h;
                        if (var_78h == 1) {
                            iVar4 = 0;
                        }
                        else {
                            iVar4 = puStackX_20[1] << 8;
                        }
                        uStack_a8 = (*puStackX_20 | iVar4) & uStack_90;
                        if (uStack_a8 < 0x2e) break;
                        if (uStack_a8 == 0x2e) {
                            uVar5 = uVar5 | 0x800;
                            goto code_r0x0001166f;
                        }
                        if (uStack_a8 == 0x30) {
                            if ((uVar5 & 0x800) == 0) {
                                uVar5 = uVar5 | 0x20;
                                uStackX_18 = uVar5;
                            }
                        }
                        else {
                            if (uStack_a8 < 0x31) goto code_r0x00011686;
                            if (0x39 < uStack_a8) {
                                if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                    uVar5 = uVar5 | 0x10;
                                    goto code_r0x0001166f;
                                }
                                goto code_r0x00011686;
                            }
                        }
                        uVar6 = 0;
                        uStack_c0 = 0;
                        if (0x2f < uStack_a8) {
                            do {
                                if (0x39 < uStack_a8) break;
                                puStackX_20 = puStackX_20 + var_78h;
                                uVar6 = uStack_a8 + (uVar6 * 5 + -0x18) * 2;
                                if (var_78h == 1) {
                                    iVar4 = 0;
                                }
                                else {
                                    iVar4 = puStackX_20[1] << 8;
                                }
                                uStack_a8 = (*puStackX_20 | iVar4) & uStack_90;
                            } while (0x2f < uStack_a8);
                            uStack_c0 = uVar6;
                        }
                        arg4 = puStackX_20 + -var_78h;
                        uVar6 = uStack_c0;
                        if ((uVar5 & 0x800) == 0) {
                            uVar5 = uVar5 | 0x200;
                            uStack_a0 = uStack_c0;
                            uStackX_18 = uVar5;
                        }
                        else {
                            uVar18 = uStack_c0;
                            uStack_b8 = uStack_c0;
                        }
                    }
                    if (uStack_a8 == 0x2d) {
                        uVar5 = uVar5 | 1;
code_r0x0001166f:
                        arg4 = puStackX_20;
                        uStackX_18 = uVar5;
                        goto code_r0x000114cc;
                    }
                    if (uStack_a8 != 0) {
                        if (uStack_a8 == 0x20) {
                            uVar5 = uVar5 | 4;
                        }
                        else {
                            if (uStack_a8 == 0x2a) {
                                if ((uVar5 & 0x800) == 0) {
                                    uVar5 = uVar5 | 0x200;
                                    if (puVar14 == NULL) {
                                        uStack_a0 = *puVar19;
                                        puVar19 = puVar19 + 1;
                                        in_stack_00000028 = puVar19;
                                    }
                                    else {
                                        uStack_a0 = *puVar14;
                                        puVar14 = puVar14 + 1;
                                        puStack_b0 = puVar14;
                                    }
                                    arg4 = puStackX_20;
                                    uStackX_18 = uVar5;
                                }
                                else {
                                    if (puVar14 == NULL) {
                                        uStack_b8 = *puVar19;
                                        puVar19 = puVar19 + 1;
                                        in_stack_00000028 = puVar19;
                                    }
                                    else {
                                        uStack_b8 = *puVar14;
                                        puVar14 = puVar14 + 1;
                                        puStack_b0 = puVar14;
                                    }
                                    arg4 = puStackX_20;
                                    uVar18 = uStack_b8;
                                }
                                goto code_r0x000114cc;
                            }
                            if (uStack_a8 == 0x2b) {
                                uVar5 = uVar5 | 2;
                            }
                            else {
                                if (uStack_a8 != 0x2c) goto code_r0x00011686;
                                uVar5 = uVar5 | 8;
                            }
                        }
                        goto code_r0x0001166f;
                    }
                    uVar18 = 0;
                    uStack_b8 = 0;
                    puStackX_20 = arg4;
code_r0x00011686:
                    puVar22 = puStackX_20;
                    if (uStack_a8 < 0x68) {
                        if (uStack_a8 == 0x67) {
                            if (puVar14 == NULL) {
                                uVar18 = *puVar19;
                                in_stack_00000028 = puVar19 + 1;
                            }
                            else {
                                uVar18 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            if (uVar18 == 0) {
                                pcVar9 = "<null guid>";
                            }
                            else {
                                fcn.00012054(&var_68h_2,0x26,0,0x12570);
                                pcVar9 = &var_68h_2;
                                uVar6 = uStack_c0;
                                cVar15 = cStack0000000000000030;
                            }
                            uVar18 = uStack_b8;
                        }
                        else {
                            if (uStack_a8 != 10) {
                                arg4 = puStackX_20;
                                if (uStack_a8 == 0xd) goto code_r0x0001170d;
                                if (uStack_a8 == 0x53) goto code_r0x0001191c;
                                if (uStack_a8 == 0x58) goto code_r0x00011a12;
                                if (uStack_a8 == 0x61) goto code_r0x00011925;
                                if (uStack_a8 == 99) {
                                    if (puVar14 == NULL) {
                                        uVar1 = *puVar19;
                                        in_stack_00000028 = puVar19 + 1;
                                    }
                                    else {
                                        uVar1 = *puVar14;
                                        puStack_b0 = puVar14 + 1;
                                    }
                                    var_80h = uVar1;
                                    pcVar9 = &var_80h;
                                    goto code_r0x000114b1;
                                }
                                if (uStack_a8 != 100) goto code_r0x000114ad;
                                goto code_r0x00011a29;
                            }
                            puVar22 = puStackX_20 + var_78h;
                            pcVar9 = 0x125dc;
                            if (var_78h == 1) {
                                iVar4 = 0;
                            }
                            else {
                                iVar4 = puVar22[1] << 8;
                            }
                            uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                            if (uStack_a8 != 0xd) {
                                puVar22 = puStackX_20;
                            }
                        }
                        goto code_r0x00011c24;
                    }
                    if (uStack_a8 != 0x70) {
                        if (uStack_a8 == 0x72) {
                            if (puVar14 == NULL) {
                                uVar11 = *puVar19;
                                in_stack_00000028 = puVar19 + 1;
                            }
                            else {
                                uVar11 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            pcVar9 = &var_68h_2;
                            if (uVar11 < 0) {
                                if ((uVar11 & 0x7fffffffffffffff) - 1 < 0x21) {
                                    pcVar9 = (uVar11 & 0x7fffffffffffffff) * 0x15;
                                    iVar13 = 0x1267b;
                                    goto code_r0x000119d9;
                                }
                            }
                            else if (uVar11 < 6) {
                                iVar13 = uVar11 * 0x19;
                                pcVar9 = "Success";
code_r0x000119d9:
                                pcVar9 = pcVar9 + iVar13;
                                if (pcVar9 != &var_68h_2) goto code_r0x00011c24;
                            }
                            fcn.00012054(&var_68h_2,0x26,0,0x125d4);
                        }
                        else {
                            if (uStack_a8 == 0x73) {
code_r0x0001191c:
                                uVar5 = uVar5 | 0x400;
                                uStackX_18 = uVar5;
code_r0x00011925:
                                if (puVar14 == NULL) {
                                    pcVar9 = *puVar19;
                                    in_stack_00000028 = puVar19 + 1;
                                }
                                else {
                                    puStack_b0 = puVar14 + 1;
                                    pcVar9 = *puVar14;
                                }
                                if (pcVar9 == NULL) {
                                    uVar5 = uVar5 & 0xfffffffffffffbff;
                                    pcVar9 = "<null string>";
                                    uStackX_18 = uVar5;
                                }
                                uVar18 = uVar18 & -((uVar5 & 0x800) != 0);
                                goto code_r0x00011c24;
                            }
                            if (uStack_a8 != 0x74) {
                                if (uStack_a8 != 0x75) {
                                    if (uStack_a8 != 0x78) goto code_r0x000114ad;
                                    goto code_r0x00011a16;
                                }
                                goto code_r0x00011a1b;
                            }
                            if (puVar14 == NULL) {
                                in_stack_00000028 = puVar19 + 1;
                                uVar11 = *puVar19;
                            }
                            else {
                                uVar11 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            if (uVar11 == 0) {
                                pcVar9 = "<null time>";
                                goto code_r0x00011c24;
                            }
                            fcn.00012054(&var_68h_2,0x26,0,0x125b8);
                            pcVar9 = &var_68h_2;
                        }
                        uVar6 = uStack_c0;
                        goto code_r0x00011c24;
                    }
                    uVar5 = uVar5 & 0xffffffffffffffd9 | 0x10;
code_r0x00011a12:
                    uVar5 = uVar5 | 0x20;
code_r0x00011a16:
                    uVar5 = uVar5 | 0x80;
code_r0x00011a1b:
                    if (-1 < uVar5) {
                        uVar5 = uVar5 & 0xfffffffffffffffd | 0x4000;
                    }
code_r0x00011a29:
                    if ((uVar5 & 0x10) == 0) {
                        if (puVar14 != NULL) {
                            uVar6 = *puVar14;
                            goto code_r0x00011a6b;
                        }
                        uVar6 = *puVar19;
                        in_stack_00000028 = puVar19 + 1;
                    }
                    else if (puVar14 == NULL) {
                        uVar6 = *puVar19;
                        in_stack_00000028 = puVar19 + 1;
                    }
                    else {
                        uVar6 = *puVar14;
code_r0x00011a6b:
                        puStack_b0 = puVar14 + 1;
                    }
                    cVar3 = (uVar5 & 4) << 3;
                    if ((uVar5 & 2) != 0) {
                        cVar3 = '+';
                    }
                    bVar23 = (uVar5 & 8) != 0;
                    if (uVar5 < '\0') {
                        uVar17 = 0x10;
                        bVar23 = false;
                        if (((uVar5 & 0x10) == 0) && (uVar2 = 0x10, uVar6 < 0)) {
code_r0x00011af3:
                            uVar17 = uVar2;
                            uVar6 = uVar6 & 0xffffffff;
                        }
                    }
                    else {
                        uVar17 = 10;
                        if ((uVar5 & 8) != 0) {
                            uVar5 = uVar5 & 0xffffffffffffffdf;
                            uVar18 = 1;
                        }
                        if ((uVar6 < 0) && (uVar5 >> 0xe == 0)) {
                            cVar3 = '-';
                            uVar6 = -uVar6;
                        }
                        else {
                            uVar2 = 10;
                            if ((uVar5 & 0x4010) == 0x4000) goto code_r0x00011af3;
                        }
                    }
                    var_68h_2._0_1_ = 0;
                    piVar21 = &var_68h_2;
                    uVar11 = uVar6;
                    do {
                        uVar7 = uVar11 / uVar17;
                        piVar21 = piVar21 + 1;
                        *piVar21 = "0123456789ABCDEF"[uVar11 % uVar17];
                        uVar11 = uVar7;
                    } while (uVar7 != 0);
                    uStack_c0 = piVar21 - &var_68h_2;
                    if (uVar6 == 0) {
                        uStack_c0 = uStack_c0 & -(uVar18 != 0);
                    }
                    pcVar9 = &var_68h_2 + uStack_c0;
                    iStack_98 = 3 - uStack_c0 % 3;
                    if (uStack_c0 % 3 == 0) {
                        iStack_98 = 0;
                    }
                    if ((bVar23) && (uStack_c0 != 0)) {
                        uStack_c0 = uStack_c0 + (uStack_c0 - 1) / 3;
                    }
                    if (cVar3 != '\0') {
                        uStack_c0 = uStack_c0 + 1;
                        uVar18 = uVar18 + 1;
                    }
                    uVar5 = uVar5 | 0x1000;
                    cVar15 = '\x01';
                    uVar6 = uStack_c0;
                    uStackX_18 = uVar5;
                    if ((uVar5 & 0xa21) == 0x220) {
                        uVar18 = uStack_a0;
                    }
                }
                else {
code_r0x000114ad:
                    pcVar9 = &uStack_a8;
code_r0x000114b1:
                    uVar5 = uVar5 | 0x400;
                    uStackX_18 = uVar5;
                    puVar22 = puStackX_20;
                }
            }
        }
code_r0x00011c24:
        puStackX_20 = puVar22;
        uVar17 = uVar5;
        iVar13 = ((uVar5 & 0x400) != 0) + 1;
        _cStack0000000000000030 = (-((uVar5 & 0x400) != 0) & 0xff00) + 0xff;
        if ((uVar5 >> 0xc & 1) == 0) {
            uVar6 = 0;
            pcVar16 = pcVar9 + 1;
            while ((((pcVar16[-1] != '\0' || (((uVar5 & 0x400) != 0 && (*pcVar16 != '\0')))) &&
                    ((uVar6 < uVar18 || ((uVar5 >> 0xb & 1) == 0)))) &&
                   ((_cStack0000000000000030 & (*pcVar16 << 8 | pcVar16[-1])) != 0))) {
                uVar6 = uVar6 + 1;
                pcVar16 = pcVar16 + iVar13;
            }
            uStack_c0 = uVar6;
        }
        else {
            iVar13 = -iVar13;
        }
        if (uVar18 < uVar6) {
            uVar18 = uVar6;
        }
        uVar11 = uVar17 & 0x201;
        var_40h = uVar11;
        pcVar16 = pcStack_d8;
        if (uVar11 == 0x200) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar18) * uVar20;
            if (((uVar5 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                arg1 = fcn.000112f4(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        uVar7 = uVar20;
        if (cVar15 == '\0') {
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.000112f4(arg1,pcVar16,uVar18 - uVar6,(uVar17 & 0x2000) + 0x20);
            }
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar7, (uVar5 & 0x2000) == 0)) && (arg1 != NULL)) {
                iVar10 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar7 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar7;
                    iVar10 = iVar10 + 1;
                } while (iVar10 < 1);
            }
        }
        else {
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar20, (uVar5 >> 0xd & 1) == 0)) && (arg1 != NULL)) {
                iVar10 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar20 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar20;
                    iVar10 = iVar10 + 1;
                } while (iVar10 < 1);
            }
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.000112f4(arg1,pcStack_d8,uVar18 - uVar6,(uVar17 & 0x2000) + 0x30);
            }
        }
        arg3 = uVar5;
        if ((cVar3 != '\0') < uStack_c0) {
            uVar6 = cVar3 != '\0';
            iVar10 = iStack_98;
            do {
                if ((*pcVar9 == '\0') && ((iVar13 < 2 || (*(pcVar9 + 1) == '\0')))) break;
                uStack_d0 = uStack_d0 + uVar7;
                uVar11 = *pcVar9 & _cStack0000000000000030;
                if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                    iVar12 = 0;
                    do {
                        if (pcStack_d8 <= arg1) break;
                        *arg1 = uVar11;
                        if (uVar7 != 1) {
                            *(arg1 + 1) = uVar11 >> 8;
                        }
                        arg1 = arg1 + uVar7;
                        iVar12 = iVar12 + 1;
                    } while (iVar12 < 1);
                }
                pcVar9 = pcVar9 + iVar13;
                uVar11 = uVar6 + 1;
                if ((bVar23) && (iVar10 = iVar10 + 1, iVar10 == 3)) {
                    iVar12 = 0;
                    uVar11 = uVar6 + 2;
                    if (uStack_c0 <= uVar11) break;
                    uStack_d0 = uStack_d0 + uVar7;
                    iVar10 = iVar12;
                    if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                        iVar8 = 0;
                        do {
                            iVar10 = iVar12;
                            if (pcStack_d8 <= arg1) break;
                            *arg1 = ',';
                            if (uVar7 != 1) {
                                *(arg1 + 1) = '\0';
                            }
                            arg1 = arg1 + uVar7;
                            iVar8 = iVar8 + 1;
                            iVar10 = 0;
                        } while (iVar8 < 1);
                    }
                }
                uVar6 = uVar11;
            } while (uVar11 < uStack_c0);
            arg3 = uStackX_18;
            uVar11 = var_40h;
        }
        if (uVar11 == 0x201) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar18) * uVar7;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.000112f4(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        arg4 = puStackX_20 + var_78h;
        if (var_78h == 1) {
            iVar4 = 0;
        }
        else {
            iVar4 = *(arg4 + 1) << 8;
        }
        uVar18 = iVar4;
        uVar6 = *arg4;
    }
    iVar13 = 0;
    if ((arg3 >> 0xd & 1) != 0) {
        return uStack_d0 / uVar20;
    }
    pcVar9 = arg1;
    do {
        if (pcStack_d8 + uVar20 <= pcVar9) break;
        *pcVar9 = '\0';
        if (uVar20 != 1) {
            pcVar9[1] = '\0';
        }
        pcVar9 = pcVar9 + uVar20;
        iVar13 = iVar13 + 1;
    } while (iVar13 < 1);
    return (arg1 - _var_70h) / uVar20;
}


/* fcn.000112a0 @ 0x112a0 */

void fcn.000112a0(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00011270(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
}


/* fcn.00011270 @ 0x11270 */

ulong fcn.00011270(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x129a8 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
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


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,uint32_t *arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint32_t *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 8128 named .text
    uVar5 = 0;
    puVar2 = arg2 + arg3 + -1;
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
            puVar2 = puVar2 + 2;
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


/* fcn.00011234 @ 0x11234 */

int64_t fcn.00011234(void)

{
    if (*0x129b8 == 0) {
        (**(*0x129a8 + 0x140))(0x12240,0,0x129b8);
    }
    return *0x129b8;
}


/* fcn.000105a8 @ 0x105a8 */

ulong fcn.000105a8(int64_t arg1)

{
    char *pcVar1;
    char cVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uint32_t *puVar5;
    uint32_t *puVar6;
    uint32_t *puVar7;
    ulong uVar8;
    uint64_t uVar9;
    char *pcVar10;
    uint32_t *puVar11;
    uint32_t *arg3;
    int64_t iVar12;
    ushort auStackX_8 [4];
    uint uStack_38;
    
    uVar9 = *0x12301;
    arg3 = NULL;
    puVar6 = arg3;
    do {
        puVar5 = puVar6 + 1;
        pcVar10 = puVar6 + 0x124d1;
        puVar6 = puVar5;
    } while (*pcVar10 != '\0');
    fcn.000112cc(&uStack_38,0x14,75000,*(arg1 + 10));
    puVar6 = arg3;
    cVar2 = uStack_38;
    while (cVar2 != '\0') {
        puVar6 = puVar6 + 1;
        cVar2 = *(&uStack_38 + puVar6);
    }
    puVar11 = arg3;
    do {
        puVar7 = puVar11;
        puVar11 = puVar7 + 1;
    } while (*(puVar7 + 0x124e1) != '\0');
    iVar12 = puVar7 + puVar6 + puVar5 + uVar9 + 4;
    uVar3 = *(arg1 + 4);
    puVar6 = arg3;
    puVar5 = arg3;
    while (uVar4 = *(arg1 + 4) >> 0x10, puVar6[0x48c8] != CONCAT22(uVar3 << 8 | uVar3 >> 8,uVar4 << 8 | uVar4 >> 8)) {
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 3;
        puVar11 = arg3;
        if (0xcb < puVar6) goto code_r0x0001069c;
    }
    puVar11 = *(puVar5 * 0xc + 0x12324);
    cVar2 = *puVar11;
    puVar6 = arg3;
    while (cVar2 != '\0') {
        puVar6 = puVar6 + 1;
        cVar2 = *(puVar6 + puVar11);
    }
    iVar12 = iVar12 + puVar6;
code_r0x0001069c:
    iVar12 = fcn.000112a0(iVar12 + 2);
    if (iVar12 == 0) {
        uVar8 = 0x8000000000000009;
    }
    else {
        if ((*0x12301 != 0) && (iVar12 != 0x12300)) {
            section..text(iVar12,0x12300,*0x12301);
        }
        pcVar10 = *(iVar12 + 1) + iVar12;
        *(iVar12 + 0x18) = *(arg1 + 2);
        puVar6 = arg3;
        do {
            puVar5 = puVar6 + 1;
            pcVar1 = puVar6 + 0x124d1;
            puVar6 = puVar5;
        } while (*pcVar1 != '\0');
        if ((puVar5 != NULL) && (pcVar10 != "TPM Firmware")) {
            section..text(pcVar10,"TPM Firmware",puVar5);
        }
        puVar6 = arg3;
        do {
            puVar5 = puVar6 + 1;
            pcVar1 = puVar6 + 0x124d1;
            puVar6 = puVar5;
        } while (*pcVar1 != '\0');
        *(iVar12 + 4) = 1;
        pcVar10 = pcVar10 + 1 + puVar5;
        puVar5 = arg3;
        puVar6 = arg3;
        if (uStack_38 != '\0') {
            do {
                puVar5 = puVar5 + 1;
            } while (*(&uStack_38 + puVar5) != '\0');
            if ((puVar5 != NULL) && (pcVar10 != &uStack_38)) {
                section..text(pcVar10,&uStack_38,puVar5);
            }
        }
        while (uStack_38 != '\0') {
            uStack_38._0_1_ = *(&uStack_38 + puVar6 + 1U);
            puVar6 = puVar6 + 1U;
        }
        *(iVar12 + 5) = 2;
        pcVar10 = pcVar10 + 1 + puVar6;
        puVar6 = arg3;
        do {
            puVar5 = puVar6 + 1;
            pcVar1 = puVar6 + 0x124e1;
            puVar6 = puVar5;
        } while (*pcVar1 != '\0');
        if ((puVar5 != NULL) && (pcVar10 != "2021-05-15T00:00:00Z")) {
            section..text(pcVar10,"2021-05-15T00:00:00Z",puVar5);
        }
        puVar6 = arg3;
        do {
            puVar5 = puVar6 + 1;
            pcVar1 = puVar6 + 0x124e1;
            puVar6 = puVar5;
        } while (*pcVar1 != '\0');
        *(iVar12 + 9) = 3;
        if (puVar11 != NULL) {
            if (*puVar11 != '\0') {
                do {
                    arg3 = arg3 + 1;
                } while (*(arg3 + puVar11) != '\0');
                if ((arg3 != NULL) && (pcVar10 + 1 + puVar5 != puVar11)) {
                    section..text(pcVar10 + 1 + puVar5,puVar11,arg3);
                }
            }
            *(iVar12 + 10) = 4;
        }
        auStackX_8[0] = 0xfffe;
        uVar8 = (***0x12980)(*0x12980,0,auStackX_8,iVar12);
        (**(*0x129a8 + 0x48))(iVar12);
    }
    return uVar8;
}


/* fcn.00010824 @ 0x10824 */

void fcn.00010824(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    uint32_t *puVar3;
    uint64_t uVar4;
    char *arg2;
    int64_t arg3;
    uint32_t *arg2_00;
    ushort auStackX_8 [4];
    char *pcStackX_18;
    int16_t var_30h;
    int64_t var_40h;
    
    if (arg1 != 0) {
        (**(*0x129a8 + 0x70))();
    }
    if (((*0x12980 != NULL) || (iVar2 = (**(*0x129a8 + 0x140))(0x12260,0,0x12980), -1 < iVar2)) &&
       ((3 < *(*0x12980 + 4) || (*(*0x12980 + 0x21) != '\0')))) {
        auStackX_8[0] = 0xfffe;
        do {
            iVar2 = (*(*0x12980)[3])(*0x12980,auStackX_8,0,&pcStackX_18,0);
            if (iVar2 < 0) goto code_r0x000108d6;
        } while (*pcStackX_18 != '+');
        (*(*0x12980)[2])(*0x12980);
code_r0x000108d6:
        iVar2 = fcn.00011234();
        cVar1 = (**(iVar2 + 0x30))(0x1e2);
        if (cVar1 != '\0') {
            *0x122f3 = *0x122f3 & 0xfffffffffffffffb;
        }
        iVar2 = fcn.00011234();
        cVar1 = (**(iVar2 + 0x30))(0x1e3);
        if (cVar1 != '\0') {
            *0x122f3 = *0x122f3 | 8;
        }
        iVar2 = fcn.00011234();
        cVar1 = (**(iVar2 + 0x30))(0x1e5);
        if (cVar1 != '\0') {
            *0x122f3 = *0x122f3 | 0x10;
        }
        iVar2 = fcn.00011234();
        cVar1 = (**(iVar2 + 0x30))(0x1e4);
        if (cVar1 != '\0') {
            *0x122f3 = *0x122f3 | 0x20;
        }
        iVar2 = fcn.00011234();
        str.ZZZZ._0_4_ = (**(iVar2 + 0x18))(0x1e6);
        arg2_00 = 0x12500;
        if (**0x12998 == '\0') {
            arg2 = "TPM 1.2";
        }
        else {
            arg2 = "TPM 2.0";
            if (**0x12998 != '\x01') {
                arg2 = 0x12500;
            }
        }
        iVar2 = 0;
        cVar1 = *arg2;
        while (cVar1 != '\0') {
            iVar2 = iVar2 + 1;
            cVar1 = *(iVar2 + arg2);
        }
        uVar4 = 0;
        do {
            if (*(uVar4 + 0x12320) == CONCAT22(*0x122e4 << 8 | *0x122e4 >> 8,*0x122e6 << 8 | *0x122e6 >> 8)) {
                arg2_00 = *(uVar4 + 0x12324);
            }
            uVar4 = uVar4 + 0xc;
        } while (uVar4 < 0xcc);
        arg3 = 0;
        cVar1 = *arg2_00;
        puVar3 = arg2_00;
        while (cVar1 != '\0') {
            puVar3 = puVar3 + 1;
            arg3 = arg3 + 1;
            cVar1 = *puVar3;
        }
        pcStackX_18 = fcn.000112a0(*0x122e1 + 3 + iVar2 + arg3);
        if (pcStackX_18 != NULL) {
            uVar4 = *0x122e1;
            if ((*0x122e1 != 0) && (pcStackX_18 != 0x122e0)) {
                section..text(pcStackX_18,0x122e0,*0x122e1);
                uVar4 = *0x122e1;
            }
            puVar3 = pcStackX_18 + uVar4;
            if (iVar2 != 0) {
                if (puVar3 != arg2) {
                    section..text(puVar3,arg2,iVar2);
                }
                puVar3 = puVar3 + iVar2 + 1;
            }
            if ((arg3 != 0) && (puVar3 != arg2_00)) {
                section..text(puVar3,arg2_00,arg3);
            }
            auStackX_8[0] = 0xfffe;
            (***0x12980)(*0x12980,0,auStackX_8,pcStackX_18);
            fcn.000105a8(pcStackX_18);
            (**(*0x129a8 + 0x48))(pcStackX_18);
        }
    }
    return;
}


/* fcn.000121ec @ 0x121ec */

int16_t fcn.000121ec(void)

{
    uint8_t uVar1;
    uint64_t uVar2;
    
    uVar2 = 0;
    while ((uVar1 = *0xfed40f00 >> 8, *(uVar2 + 0x12400) != *0xfed40f00 || (*(uVar2 + 0x12402) != *0xfed40f02))) {
        uVar2 = uVar2 + 4;
        if (0xb < uVar2) {
            return uVar1 << 8;
        }
    }
    return CONCAT11(uVar1,1);
}


/* fcn.00010c90 @ 0x10c90 */

int64_t fcn.00010c90(int64_t arg1)

{
    uint16_t uVar1;
    uint16_t uVar2;
    ulong uVar3;
    ulong uVar4;
    ushort uVar5;
    int64_t iVar6;
    ushort uStack_28;
    uint uStack_26;
    uint uStack_22;
    uint uStack_1e;
    uint uStack_1a;
    
    uStack_26 = 0x16000000;
    uStack_22 = 0x65800000;
    uStack_28 = 0xc100;
    uStack_1e = 0x1a000000;
    uStack_1a = 0x4000000;
    iVar6 = (**(*0x12990 + 0x18))(*0x12990,0x16,&uStack_28,0x100,0x129d0);
    uVar5 = *0x129e8;
    if ((-1 < iVar6) && (CONCAT22(*0x129d6 << 8 | *0x129d6 >> 8,*0x129d8 << 8 | *0x129d8 >> 8) == 0)) {
        uVar1 = *0x129e0 << 8;
        uVar2 = *0x129e0 >> 8;
        *0x129e0 = *0x129e2 << 8 | *0x129e2 >> 8;
        *0x129e2 = uVar1 | uVar2;
    }
    uVar3 = CONCAT62(*0x129da,*0x129d8);
    uVar4 = CONCAT44(*0x129e4,CONCAT22(*0x129e2,*0x129e0));
    *arg1 = CONCAT26(*0x129d6,*0x129d0);
    *(arg1 + 8) = uVar3;
    *(arg1 + 0x10) = uVar4;
    *(arg1 + 0x18) = uVar5;
    *(arg1 + 0x1a) = *0x129ea;
    return arg1;
}


/* fcn.00010bb0 @ 0x10bb0 */

int64_t fcn.00010bb0(int64_t arg1)

{
    uint16_t uVar1;
    uint16_t uVar2;
    ulong uVar3;
    ulong uVar4;
    ushort uVar5;
    int64_t iVar6;
    ushort uStack_28;
    uint uStack_26;
    uint uStack_22;
    uint uStack_1e;
    uint uStack_1a;
    
    uStack_26 = 0x16000000;
    uStack_22 = 0x65000000;
    uStack_28 = 0xc100;
    uStack_1e = 0x1a000000;
    uStack_1a = 0x4000000;
    iVar6 = (**(*0x12990 + 0x18))(*0x12990,0x16,&uStack_28,0x100,0x12b00);
    uVar5 = *0x12b18;
    if ((-1 < iVar6) && (CONCAT22(*0x12b06 << 8 | *0x12b06 >> 8,*0x12b08 << 8 | *0x12b08 >> 8) == 0)) {
        uVar1 = *0x12b10 << 8;
        uVar2 = *0x12b10 >> 8;
        *0x12b10 = *0x12b12 << 8 | *0x12b12 >> 8;
        *0x12b12 = uVar1 | uVar2;
    }
    uVar3 = CONCAT62(*0x12b0a,*0x12b08);
    uVar4 = CONCAT44(*0x12b14,CONCAT22(*0x12b12,*0x12b10));
    *arg1 = CONCAT26(*0x12b06,*0x12b00);
    *(arg1 + 8) = uVar3;
    *(arg1 + 0x10) = uVar4;
    *(arg1 + 0x18) = uVar5;
    *(arg1 + 0x1a) = *0x12b1a;
    return arg1;
}


/* fcn.00010b30 @ 0x10b30 */

void fcn.00010b30(void)

{
    int64_t iVar1;
    ulong auStackX_8 [4];
    
    iVar1 = (**(*0x129a8 + 0x140))(0x12260,0,0x12980);
    if (iVar1 < 0) {
        (**(*0x129a8 + 0x50))(0x200,8,fcn.00010824,0,auStackX_8);
        (**(*0x129a8 + 0xa8))(0x12260,auStackX_8[0],0x12c08);
    }
    else {
        fcn.00010824(0);
    }
    return;
}


/* fcn.000120e4 @ 0x120e4 */

int16_t * fcn.000120e4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    int64_t iVar2;
    int16_t *piVar3;
    int16_t *piVar4;
    int64_t arg1_00;
    int64_t iVar5;
    
    if (arg1 != 0) {
        iVar5 = arg2 + arg1 * 0x18;
        do {
            arg1 = arg1 + -1;
            arg1_00 = iVar5 + -0x18;
            if ((arg1_00 == 0x12280) || (iVar2 = fcn.000102e0(arg1_00,0x12280,0x10), iVar2 == 0)) {
                piVar3 = *(iVar5 + -8);
                iVar5 = -0x7ffffffffffffff2;
                while (iVar1 = *piVar3, iVar1 != -1) {
                    piVar4 = piVar3;
                    do {
                        if (iVar1 == 4) break;
                        piVar4 = piVar4 + piVar4[1];
                        iVar1 = *piVar4;
                    } while (iVar1 != -1);
                    if (*piVar4 == -1) {
                        piVar4 = piVar3;
                    }
                    if ((*piVar4 == 4) &&
                       ((piVar4 + 4 == 0x12290 || (iVar2 = fcn.000102e0(0x12290,piVar4 + 4,0x10), iVar2 == 0)))) {
                        iVar5 = 0;
                        arg3 = piVar4 + 0xc;
                    }
                    piVar3 = piVar4[1] + piVar4;
                    if (-1 < iVar5) {
                        return arg3;
                    }
                }
            }
            iVar5 = arg1_00;
        } while (arg1 != 0);
    }
    return NULL;
}


/* fcn.000111e4 @ 0x111e4 */

uint64_t fcn.000111e4(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
        do {
            if (999999 < uVar1) {
                return 0xf4241;
            }
            uVar1 = uVar1 + 1;
        } while (*(CONCAT44(in_register_0000000c,arg1) + uVar1 * 2) != 0);
        return uVar1;
    }
    return 0;
}


/* fcn.00011210 @ 0x11210 */

uint64_t fcn.00011210(uint32_t arg1)

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


/* fcn.00012054 @ 0x12054 */

void fcn.00012054(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00011328(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.000112f4 @ 0x112f4 */

uchar * fcn.000112f4(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


