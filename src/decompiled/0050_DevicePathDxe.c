// decompiled by r2ghidra: 0050_DevicePathDxe.pe32
// functions: 36

/* entry0 @ 0x102e0 */

void entry0(int64_t arg1,int64_t arg2)

{
    ulong auStackX_8 [4];
    
    *0x19878 = *(arg2 + 0x60);
    auStackX_8[0] = 0;
    *0x19870 = arg2;
    (**(*0x19878 + 0x148))(auStackX_8,0x17260,0x17860,0x17250,0x17850,0x17270,0x178a0,0);
    return;
}


/* fcn.000109d4 @ 0x109d4 */

bool fcn.000109d4(uint32_t arg1)

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


/* fcn.0001034c @ 0x1034c */

char * fcn.0001034c(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.000109d4(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.00017114 @ 0x17114 */

void fcn.00017114(ulong noname_0,int64_t arg1,uint32_t arg2)

{
    int64_t arg1_00;
    uint in_R8;
    
    arg1_00 = fcn.000170e4();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != CONCAT44(in_R8,arg2))) {
        section..text(arg1_00,CONCAT44(in_R8,arg2),arg1);
    }
    return;
}


/* fcn.000170e4 @ 0x170e4 */

ulong fcn.000170e4(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x19878 + 0x40))(4,param_2,auStackX_18);
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
    
    //[00] -r-x section size 28544 named .text
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


/* fcn.0001039c @ 0x1039c */

ulong fcn.0001039c(int64_t arg1)

{
    int64_t arg1_00;
    ulong uVar1;
    int64_t noname_0;
    
    noname_0 = arg1;
    arg1_00 = fcn.0001034c(arg1);
    uVar1 = 0;
    if (arg1_00 != 0) {
        uVar1 = fcn.00017114(noname_0,arg1_00,arg1);
    }
    return uVar1;
}


/* fcn.000103c4 @ 0x103c4 */

int64_t fcn.000103c4(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t arg3;
    int64_t arg1_00;
    
    if (arg1 == 0) {
        arg1 = 0x178b0;
        if (arg2 != 0) {
            arg1 = arg2;
        }
    }
    else if (arg2 != 0) {
        cVar1 = fcn.000109d4(arg1);
        if ((cVar1 == '\0') || (cVar1 = fcn.000109d4(arg2), cVar1 == '\0')) {
            return 0;
        }
        iVar2 = fcn.0001034c(arg1);
        arg3 = fcn.0001034c(arg2);
        arg1_00 = fcn.000170e4();
        if (arg1_00 == 0) {
            return 0;
        }
        if ((iVar2 != 0) && (arg1_00 != arg1)) {
            arg1_00 = section..text(arg1_00,arg1,iVar2);
        }
        iVar2 = iVar2 + -4 + arg1_00;
        if (arg3 == 0) {
            return arg1_00;
        }
        if (iVar2 == arg2) {
            return arg1_00;
        }
        section..text(iVar2,arg2,arg3);
        return arg1_00;
    }
    iVar2 = fcn.0001039c(arg1);
    return iVar2;
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


/* fcn.00013fd4 @ 0x13fd4 */

ulong fcn.00013fd4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t arg2_00;
    int64_t iVar2;
    ulong uVar3;
    int64_t in_stack_00000028;
    int8_t in_stack_00000030;
    
    uVar3 = 0;
    iVar2 = fcn.00016358(0,0,0x2140,arg2,in_stack_00000028,in_stack_00000030);
    iVar1 = *(arg1 + 8);
    if (*(arg1 + 0x10) < (iVar1 + iVar2) * 2 + 2U) {
        arg2_00 = (iVar1 + 2 + iVar2 * 2) * 2;
        *(arg1 + 0x10) = arg2_00;
        uVar3 = fcn.00017154(uVar3,iVar1 * 2,arg2_00,*arg1);
        *arg1 = uVar3;
    }
    fcn.00016358(*(arg1 + 8) * 2 + *arg1,*(arg1 + 0x10) + *(arg1 + 8) * -2 >> 1,0x140,arg2,in_stack_00000028,
                 in_stack_00000030);
    *(arg1 + 8) = *(arg1 + 8) + iVar2;
    return *arg1;
}


/* fcn.00016358 @ 0x16358 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00016358(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x000163b7;
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
code_r0x000163b7:
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
        uVar21 = fcn.000162d0(arg4);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.00015ba4(arg4,0xf4241);
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
            pcVar8 = 0x194cc;
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
code_r0x00016772:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x194cc;
            }
            else {
                pcVar8 = 0x194d0;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x00016509:
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
                    goto code_r0x000166ac;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x000166c3;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x000166ac;
                        }
                        goto code_r0x000166c3;
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
code_r0x000166ac:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x00016509;
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
                        goto code_r0x00016509;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x000166c3;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x000166ac;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x000166c3:
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
                        fcn.000170c0(&var_68h_2,0x26,0,0x19460);
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
                            goto code_r0x00016772;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x0001695b;
                        if (uStack_a8 == 0x58) goto code_r0x00016a50;
                        if (uStack_a8 == 0x61) goto code_r0x00016964;
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
                            goto code_r0x000164ea;
                        }
                        if (uStack_a8 != 100) goto code_r0x000164e6;
                        goto code_r0x00016a67;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x194cc;
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
                goto code_r0x00016c94;
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
                            iVar12 = 0x1956b;
                            goto code_r0x00016a17;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x00016a17:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x00016c94;
                    }
                    fcn.000170c0(&var_68h_2,0x26,0,0x194c4);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x0001695b:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x00016964:
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
                        goto code_r0x00016c94;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x000164e6;
                            goto code_r0x00016a54;
                        }
                        goto code_r0x00016a59;
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
                        goto code_r0x00016c94;
                    }
                    fcn.000170c0(&var_68h_2,0x26,0,0x194a8);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x00016c94;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x00016a50:
            uVar21 = uVar21 | 0x20;
code_r0x00016a54:
            uVar21 = uVar21 | 0x80;
code_r0x00016a59:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x00016a67:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x00016aa9;
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
code_r0x00016aa9:
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
code_r0x00016b31:
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
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x00016b31;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar10 = uVar5;
            do {
                uVar6 = uVar10 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = "0123456789ABCDEF"[uVar10 % uVar16];
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
code_r0x000164e6:
            pcVar8 = &uStack_a8;
code_r0x000164ea:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x00016c94:
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
                arg1 = fcn.00016324(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00016324(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
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
                arg1 = fcn.00016324(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
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
                arg1 = fcn.00016324(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
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


/* fcn.00017154 @ 0x17154 */

int64_t fcn.00017154(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000170e4(noname_0,arg2);
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
            (**(*0x19878 + 0x48))(arg3);
        }
    }
    return arg1_00;
}


/* fcn.00015cbc @ 0x15cbc */

ulong fcn.00015cbc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint16_t uVar3;
    int16_t iVar4;
    int64_t iVar5;
    uint16_t *puVar6;
    
    if (((arg1 != 0) && (arg3 != 0)) && (puVar6 = arg1, uVar1 = fcn.00015ba4(arg1,0xf4241), uVar1 < 0xf4241)) {
        if (arg2 != NULL) {
            *arg2 = arg1;
        }
        for (; (*puVar6 == 0x20 || (*puVar6 == 9)); puVar6 = puVar6 + 1) {
        }
        iVar4 = 0x30;
        for (; *puVar6 == 0x30; puVar6 = puVar6 + 1) {
        }
        uVar3 = *puVar6;
        if (uVar3 - 0x61 < 0x1a) {
            uVar3 = uVar3 - 0x20;
        }
        if (uVar3 == 0x58) {
            if (puVar6[-1] != 0x30) {
                *arg3 = 0;
                return 0;
            }
            puVar6 = puVar6 + 1;
        }
        *arg3 = 0;
        iVar5 = -1;
        for (; ((*puVar6 - iVar4 < 10 || (*puVar6 - 0x41 < 6)) || (*puVar6 - 0x61 < 6)); puVar6 = puVar6 + 1) {
            iVar2 = fcn.00015a9c(*puVar6);
            if (iVar5 - iVar2 >> 4 < *arg3) {
                *arg3 = iVar5;
                if (arg2 != NULL) {
                    *arg2 = puVar6;
                }
                return 0x8000000000000003;
            }
            *arg3 = *arg3 * 0x10 + iVar2;
        }
        if (arg2 != NULL) {
            *arg2 = puVar6;
        }
        return 0;
    }
    return 0x8000000000000002;
}


/* fcn.00015bd8 @ 0x15bd8 */

ulong fcn.00015bd8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    uint64_t uVar2;
    uint16_t *puVar3;
    
    if (((arg1 == 0) || (arg3 == 0)) || (puVar3 = arg1, uVar2 = fcn.00015ba4(arg1,0xf4241), 1000000 < uVar2)) {
        uVar1 = 0x8000000000000002;
    }
    else {
        if (arg2 != NULL) {
            *arg2 = arg1;
        }
        for (; (*puVar3 == 0x20 || (*puVar3 == 9)); puVar3 = puVar3 + 1) {
        }
        for (; *puVar3 == 0x30; puVar3 = puVar3 + 1) {
        }
        *arg3 = 0;
        for (; *puVar3 - 0x30 < 10; puVar3 = puVar3 + 1) {
            if (~(*puVar3 - 0x30) / 10 < *arg3) {
                *arg3 = 0xffffffffffffffff;
                if (arg2 != NULL) {
                    *arg2 = puVar3;
                }
                return 0x8000000000000003;
            }
            *arg3 = (*puVar3 - 0x30) + *arg3 * 10;
        }
        if (arg2 != NULL) {
            *arg2 = puVar3;
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00015acc @ 0x15acc */

uint64_t fcn.00015acc(int64_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint16_t uVar3;
    int16_t iVar4;
    uint64_t uVar5;
    uint64_t uStackX_8;
    
    uVar5 = 0;
    if ((arg1 != 0) && (uVar1 = fcn.00015ba4(arg1,0xf4241), uVar1 < 0xf4241)) {
        for (; (*arg1 == 0x20 || (*arg1 == 9)); arg1 = arg1 + 2) {
        }
        iVar4 = 0x30;
        for (; *arg1 == 0x30; arg1 = arg1 + 2) {
        }
        uVar3 = *arg1;
        if (uVar3 - 0x61 < 0x1a) {
            uVar3 = uVar3 - 0x20;
        }
        if (uVar3 == 0x58) {
            if (*(arg1 + -2) != 0x30) {
                return uVar5;
            }
            arg1 = arg1 + 2;
        }
        uVar1 = 0xffffffffffffffff;
        for (; ((*arg1 - iVar4 < 10 || (*arg1 - 0x41 < 6)) || (*arg1 - 0x61 < 6)); arg1 = arg1 + 2) {
            iVar2 = fcn.00015a9c(*arg1);
            if (uVar1 - iVar2 >> 4 < uVar5) {
                return uVar1;
            }
            uVar5 = uVar5 * 0x10 + iVar2;
        }
        return uVar5;
    }
    return uStackX_8;
}


/* fcn.00015ba4 @ 0x15ba4 */

uint64_t fcn.00015ba4(uint32_t arg1,int64_t arg2)

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


/* fcn.00010a30 @ 0x10a30 */

void fcn.00010a30(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = *arg1;
    if (*piVar1 != 0) {
        do {
            if (*piVar1 == 0x2c) goto code_r0x00010a55;
            piVar1 = piVar1 + 1;
        } while (*piVar1 != 0);
        if (*piVar1 == 0x2c) {
code_r0x00010a55:
            *piVar1 = 0;
            piVar1 = piVar1 + 1;
        }
        *arg1 = piVar1;
    }
    return;
}


/* fcn.00010a64 @ 0x10a64 */

ulong fcn.00010a64(int64_t arg1)

{
    int16_t iVar1;
    int16_t *piVar2;
    ulong auStackX_8 [4];
    
    iVar1 = *arg1;
    piVar2 = arg1;
    while ((iVar1 != 0 && (iVar1 == 0x20))) {
        piVar2 = piVar2 + 1;
        iVar1 = *piVar2;
    }
    for (; (*piVar2 != 0 && (*piVar2 == 0x30)); piVar2 = piVar2 + 1) {
    }
    if ((*piVar2 - 0x58U & 0xffdf) == 0) {
        fcn.00015cbc(arg1,0,auStackX_8);
    }
    else {
        fcn.00015bd8(arg1,0,auStackX_8);
    }
    return auStackX_8[0];
}


/* fcn.00010704 @ 0x10704 */

uchar * fcn.00010704(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uchar *arg1_00;
    uint32_t uVar1;
    
    uVar1 = arg3 & 0xffff;
    if (arg3 < 4) {
        arg1_00 = NULL;
    }
    else {
        arg1_00 = fcn.000170e4(arg1,uVar1);
        if (arg1_00 != NULL) {
            if (uVar1 != 0) {
                arg1_00 = fcn.000102c0(arg1_00,uVar1);
            }
            if (arg1_00 != NULL) {
                *arg1_00 = arg1;
                arg1_00[1] = arg2;
                *(arg1_00 + 2) = arg3;
            }
        }
    }
    return arg1_00;
}


/* fcn.000161f0 @ 0x161f0 */

ulong fcn.000161f0(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int16_t iVar1;
    char cVar2;
    uint8_t uVar3;
    ulong uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint in_R9;
    uint64_t uVar7;
    
    uVar7 = 0;
    if ((((arg1 == 0) || (arg3 == 0)) || (1000000 < arg2)) || ((arg2 & 1U) != 0)) {
        uVar4 = 0x8000000000000002;
    }
    else if (CONCAT44(in_R9,arg4) < arg2 >> 1) {
        uVar4 = 0x8000000000000005;
    }
    else {
        uVar5 = uVar7;
        if (arg2 != 0) {
            do {
                iVar1 = *(arg1 + uVar5 * 2);
                if (((9 < iVar1 - 0x30U) && (5 < iVar1 - 0x41U)) && (5 < iVar1 - 0x61U)) break;
                uVar5 = uVar5 + 1;
            } while (uVar5 < arg2);
        }
        if (uVar5 == arg2) {
            if (arg2 != 0) {
                do {
                    uVar5 = *(arg1 + uVar7 * 2);
                    if ((uVar7 & 1) == 0) {
                        cVar2 = fcn.00015a9c(uVar5);
                        *((uVar7 >> 1) + arg3) = cVar2 << 4;
                    }
                    else {
                        uVar6 = uVar7 >> 1;
                        uVar3 = fcn.00015a9c(uVar5);
                        *(uVar6 + arg3) = *(uVar6 + arg3) | uVar3;
                    }
                    uVar7 = uVar7 + 1;
                } while (uVar7 < arg2);
            }
            uVar4 = 0;
        }
        else {
            uVar4 = 0x8000000000000003;
        }
    }
    return uVar4;
}


/* fcn.00010acc @ 0x10acc */

uint64_t fcn.00010acc(uint32_t arg1,int64_t arg2)

{
    uchar auVar1 [16];
    uint16_t *puVar2;
    uint64_t uVar3;
    uint16_t uVar4;
    uint in_register_0000000c;
    uint16_t *arg1_00;
    uint64_t uVar5;
    uint64_t uStackX_8;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar5 = 0;
    uVar4 = *arg1_00;
    puVar2 = arg1_00;
    while ((uVar4 != 0 && (uVar4 == 0x20))) {
        puVar2 = puVar2 + 1;
        uVar4 = *puVar2;
    }
    for (; (*puVar2 != 0 && (*puVar2 == 0x30)); puVar2 = puVar2 + 1) {
    }
    if ((*puVar2 - 0x58 & 0xffdf) == 0) {
        uVar3 = fcn.00015acc(arg1_00);
        *arg2 = uVar3;
    }
    else {
        uVar3 = fcn.00015ba4(arg1,0xf4241);
        if (uVar3 < 0xf4241) {
            for (; (*arg1_00 == 0x20 || (*arg1_00 == 9)); arg1_00 = arg1_00 + 1) {
            }
            for (; uStackX_8 = uVar5, *arg1_00 == 0x30; arg1_00 = arg1_00 + 1) {
            }
            for (; uVar3 = *arg1_00 - 0x30, *arg1_00 - 0x30 < 10; arg1_00 = arg1_00 + 1) {
                uVar5 = ~(*arg1_00 - 0x30);
                auVar1._8_8_ = 0;
                auVar1._0_8_ = uVar5;
                uVar3 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar1,0);
                if (uVar5 / 10 < uStackX_8) {
                    uStackX_8 = 0xffffffffffffffff;
                    break;
                }
                uStackX_8 = (*arg1_00 - 0x30) + uStackX_8 * 10;
            }
        }
        *arg2 = uStackX_8;
    }
    return uVar3;
}


/* fcn.000160c0 @ 0x160c0 */

ulong fcn.000160c0(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint16_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    uint32_t arg4;
    int64_t var_bp_10h;
    ulong var_bp_8h;
    
    if ((arg1 == 0) || (arg2 == 0)) {
        uVar3 = 0x8000000000000002;
    }
    else {
        iVar4 = fcn.000161f0(arg1,8,&var_bp_10h,4);
        if ((-1 < iVar4) && (*(arg1 + 0x10) == 0x2d)) {
            arg4 = 2;
            uVar1 = var_bp_10h._2_2_ << 8;
            uVar2 = var_bp_10h._2_2_ >> 8;
            var_bp_10h._2_2_ = var_bp_10h << 8 | var_bp_10h >> 8;
            var_bp_10h._0_2_ = uVar1 | uVar2;
            iVar4 = fcn.000161f0(arg1 + 0x12,4,&var_bp_10h + 4,2);
            if ((-1 < iVar4) && (*(arg1 + 0x1a) == 0x2d)) {
                var_bp_10h._4_2_ = var_bp_10h._4_2_ << 8 | var_bp_10h._4_2_ >> 8;
                iVar4 = fcn.000161f0(arg1 + 0x1c,4,&var_bp_10h + 6,arg4);
                if ((-1 < iVar4) && (*(arg1 + 0x24) == 0x2d)) {
                    var_bp_10h._6_2_ = var_bp_10h._6_2_ << 8 | var_bp_10h._6_2_ >> 8;
                    iVar4 = fcn.000161f0(arg1 + 0x26,4,&var_bp_8h,arg4);
                    if ((-1 < iVar4) &&
                       ((*(arg1 + 0x2e) == 0x2d &&
                        (iVar4 = fcn.000161f0(arg1 + 0x30,0xc,&var_bp_8h + 2,6), -1 < iVar4)))) {
                        *arg2 = CONCAT26(var_bp_10h._6_2_,
                                         CONCAT24(var_bp_10h._4_2_,CONCAT22(var_bp_10h._2_2_,var_bp_10h)));
                        *(arg2 + 8) = var_bp_8h;
                        return 0;
                    }
                }
            }
        }
        uVar3 = 0x8000000000000003;
    }
    return uVar3;
}


/* fcn.00010f34 @ 0x10f34 */

int fcn.00010f34(int64_t arg1)

{
    int64_t aiStackX_8 [4];
    
    fcn.00015cbc(arg1 + 6,0,aiStackX_8);
    return (*(arg1 + 2) & 0x1f) * 0x20 + (*arg1 & 0x1f) * 0x400 + (*(arg1 + 4) & 0x1f) + (aiStackX_8[0] << 0x10);
}


/* fcn.00015fe4 @ 0x15fe4 */

ulong fcn.00015fe4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uStackX_8;
    int16_t *piStackX_10;
    uint32_t var_bp_20h;
    int64_t iStackX_20;
    
    if ((arg1 == 0) || (arg3 == 0)) {
        return 0x8000000000000002;
    }
    uVar2 = 0;
    iStackX_20 = arg4;
    do {
        piStackX_10 = arg1;
code_r0x0001601a:
        if (9 < *piStackX_10 - 0x30U) goto code_r0x00016095;
        iVar1 = fcn.00015bd8(piStackX_10,&piStackX_10,&uStackX_8);
        if (iVar1 < 0) {
            return 0x8000000000000003;
        }
        if (uVar2 == 4) {
            if (0x20 < uStackX_8) {
                return 0x8000000000000003;
            }
        }
        else {
            if (0xff < uStackX_8) {
                return 0x8000000000000003;
            }
            *(&iStackX_20 + uVar2) = uStackX_8;
            uVar2 = uVar2 + 1;
            if (uVar2 != 4) break;
        }
        if (*piStackX_10 != 0x2f) {
code_r0x0001609b:
            if (arg3 != &iStackX_20) {
                section..text(arg3,&iStackX_20,4);
            }
            return 0;
        }
        arg1 = piStackX_10 + 1;
    } while( true );
    if (uVar2 < 4) {
        if (*piStackX_10 != 0x2e) {
            return 0x8000000000000003;
        }
        piStackX_10 = piStackX_10 + 1;
    }
    if (4 < uVar2) {
code_r0x00016095:
        if (uVar2 < 4) {
            return 0x8000000000000003;
        }
        goto code_r0x0001609b;
    }
    goto code_r0x0001601a;
}


/* fcn.00012298 @ 0x12298 */

ulong fcn.00012298(int64_t arg1)

{
    int16_t *piVar1;
    int16_t *piVar2;
    int16_t iVar3;
    int16_t iVar4;
    ulong auStackX_8 [4];
    
    iVar3 = *arg1;
    piVar2 = 0x179d8;
    piVar1 = arg1;
    if (iVar3 != 0) {
        iVar4 = iVar3;
        do {
            if (iVar4 != *piVar2) break;
            piVar1 = piVar1 + 1;
            piVar2 = piVar2 + 1;
            iVar4 = *piVar1;
        } while (iVar4 != 0);
    }
    if (*piVar1 == *piVar2) {
        return 0x11;
    }
    piVar2 = 0x179e0;
    piVar1 = arg1;
    while ((iVar3 != 0 && (iVar3 == *piVar2))) {
        piVar1 = piVar1 + 1;
        piVar2 = piVar2 + 1;
        iVar3 = *piVar1;
    }
    if (*piVar1 != *piVar2) {
        iVar3 = *arg1;
        piVar1 = arg1;
        while ((iVar3 != 0 && (iVar3 == 0x20))) {
            piVar1 = piVar1 + 1;
            iVar3 = *piVar1;
        }
        for (; (*piVar1 != 0 && (*piVar1 == 0x30)); piVar1 = piVar1 + 1) {
        }
        if ((*piVar1 - 0x58U & 0xffdf) == 0) {
            fcn.00015cbc(arg1,0,auStackX_8);
        }
        else {
            fcn.00015bd8(arg1,0,auStackX_8);
        }
        return auStackX_8[0];
    }
    return 6;
}


/* fcn.00015dd4 @ 0x15dd4 */

//WARNING: Variable defined which should be unmapped: var_10h

ulong fcn.00015dd4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    bool bVar1;
    int64_t iVar2;
    uchar *arg1_00;
    uint64_t arg3_00;
    uint64_t uVar3;
    int16_t *arg1_01;
    uint64_t uStackX_10;
    int16_t *piStackX_20;
    uint32_t var_38h;
    uint32_t var_48h;
    uchar auStack_38 [16];
    int64_t var_10h;
    
    bVar1 = false;
    arg3_00 = 0x10;
    if ((arg1 == 0) || (arg3 == 0)) {
        return 0x8000000000000002;
    }
    uVar3 = 0;
    uStackX_10 = arg2;
    piStackX_20 = arg4;
    do {
        arg1_01 = arg1;
        if (((9 < *arg1 - 0x30U) && (5 < *arg1 - 0x41U)) && (5 < *arg1 - 0x61U)) {
            if (*arg1 != 0x3a) {
                return 0x8000000000000003;
            }
            if (bVar1) {
                return 0x8000000000000003;
            }
            if (arg3_00 != 0x10) {
                return 0x8000000000000003;
            }
            if (uVar3 == 0x10) {
                return 0x8000000000000003;
            }
            arg1_01 = arg1 + 2;
            arg3_00 = uVar3;
            if (uVar3 == 0) {
                if (*arg1_01 != 0x3a) {
                    return 0x8000000000000003;
                }
                arg1_01 = arg1 + 4;
            }
        }
        if (((*arg1_01 - 0x30U < 10) || (*arg1_01 - 0x41U < 6)) || (*arg1_01 - 0x61U < 6)) {
            if (bVar1) {
                iVar2 = fcn.00015bd8(arg1_01,&piStackX_20,&uStackX_10);
                if (iVar2 < 0) {
                    return 0x8000000000000003;
                }
                if (piStackX_20 == arg1_01) {
                    return 0x8000000000000003;
                }
                if (0x80 < uStackX_10) {
                    return 0x8000000000000003;
                }
                break;
            }
            iVar2 = fcn.00015cbc(arg1_01,&piStackX_20,&uStackX_10);
            if (iVar2 < 0) {
                return 0x8000000000000003;
            }
            if (8 < (piStackX_20 - arg1_01 & 0xfffffffffffffffeU)) {
                return 0x8000000000000003;
            }
            auStack_38[uVar3] = uStackX_10 >> 8;
            auStack_38[uVar3 + 1] = uStackX_10;
            uVar3 = uVar3 + 2;
            arg1_01 = piStackX_20;
        }
        else {
            if (*arg1_01 != 0x2f) break;
            if (arg3_00 != uVar3) {
                return 0x8000000000000003;
            }
        }
        if (*arg1_01 == 0x2f) {
            bVar1 = true;
        }
        else {
            if (*arg1_01 != 0x3a) break;
            if (uVar3 == 0x10) goto code_r0x00015f6b;
        }
        arg1 = arg1_01 + 1;
    } while (uVar3 < 0x11);
    if (uVar3 == 0x10) {
code_r0x00015f6b:
        if (arg3_00 != 0x10) {
            return 0x8000000000000003;
        }
        if (uVar3 != 0x10) goto code_r0x00015f79;
    }
    else {
code_r0x00015f79:
        if (arg3_00 == 0x10) {
            return 0x8000000000000003;
        }
        if (arg3_00 == 0) goto code_r0x00015f9f;
    }
    if (arg3 != auStack_38) {
        section..text(arg3,auStack_38,arg3_00);
    }
code_r0x00015f9f:
    if (0x10 - uVar3 != 0) {
        fcn.000102c0(arg3_00 + arg3,0x10 - uVar3);
    }
    if (arg3_00 < uVar3) {
        arg1_00 = arg3 + 0x10 + (arg3_00 - uVar3);
        if ((uVar3 - arg3_00 != 0) && (arg1_00 != auStack_38 + arg3_00)) {
            section..text(arg1_00,auStack_38 + arg3_00,uVar3 - arg3_00);
        }
    }
    return 0;
}


/* fcn.000127e4 @ 0x127e4 */

int64_t fcn.000127e4(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    ushort uVar2;
    int64_t extraout_RAX;
    int16_t *arg1_00;
    int16_t *arg1_01;
    int16_t *piVar3;
    int64_t iStackX_8;
    
    iStackX_8 = arg1;
    fcn.00010704(CONCAT71(arg1 >> 8,3),CONCAT71(arg2 >> 8,0xf),0xb);
    arg1_00 = fcn.00010a30(&iStackX_8);
    arg1_01 = fcn.00010a30(&iStackX_8);
    if (*arg2 == '\0') {
        uVar1 = *(arg2 + 1);
code_r0x00012852:
        *(extraout_RAX + 8) = uVar1;
    }
    else {
        piVar3 = fcn.00010a30(&iStackX_8);
        if (*piVar3 != 0) {
            uVar1 = fcn.00010a64(piVar3);
            goto code_r0x00012852;
        }
        *(extraout_RAX + 8) = 0xff;
    }
    if (*(arg2 + 2) == '\0') {
        uVar1 = *(arg2 + 3);
    }
    else {
        piVar3 = fcn.00010a30(&iStackX_8);
        if (*piVar3 == 0) {
            *(extraout_RAX + 9) = 0xff;
            goto code_r0x00012881;
        }
        uVar1 = fcn.00010a64(piVar3);
    }
    *(extraout_RAX + 9) = uVar1;
code_r0x00012881:
    piVar3 = fcn.00010a30(&iStackX_8);
    if (*arg1_00 == 0) {
        *(extraout_RAX + 4) = 0xffff;
    }
    else {
        uVar2 = fcn.00010a64(arg1_00);
        *(extraout_RAX + 4) = uVar2;
    }
    if (*arg1_01 == 0) {
        *(extraout_RAX + 6) = 0xffff;
    }
    else {
        uVar2 = fcn.00010a64(arg1_01);
        *(extraout_RAX + 6) = uVar2;
    }
    if (*piVar3 == 0) {
        *(extraout_RAX + 10) = 0xff;
    }
    else {
        uVar1 = fcn.00010a64(piVar3);
        *(extraout_RAX + 10) = uVar1;
    }
    return extraout_RAX;
}


/* fcn.00013418 @ 0x13418 */

int64_t fcn.00013418(uint32_t arg1)

{
    uint16_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint16_t *puVar4;
    uint16_t *puVar5;
    ulong in_RDX;
    uint64_t uVar6;
    uint64_t arg2;
    int64_t iVar7;
    
    uVar6 = 0;
    puVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = uVar6;
    for (puVar5 = puVar4; *puVar5 != 0; puVar5 = puVar5 + 1) {
        uVar2 = uVar2 + 1;
    }
    iVar3 = fcn.00010704(CONCAT71(puVar5 >> 8,4),CONCAT71(in_RDX >> 8,4),CONCAT62(uVar2 >> 0x10,uVar2 + 3) * 2);
    uVar1 = *puVar4;
    uVar2 = uVar1;
    puVar5 = puVar4;
    while (uVar1 != 0) {
        puVar5 = puVar5 + 1;
        uVar6 = uVar6 + 1;
        uVar1 = *puVar5;
    }
    arg2 = uVar6 + 1;
    puVar5 = iVar3 + 4;
    if (puVar5 == NULL) {
        return iVar3;
    }
    if (999999 < uVar6) {
        return iVar3;
    }
    uVar6 = fcn.00015ba4(arg1,arg2);
    if (arg2 <= uVar6) {
        return iVar3;
    }
    if (puVar4 <= puVar5) {
        if (puVar5 < puVar4 + uVar6 + 1) {
            return iVar3;
        }
        if (puVar4 < puVar5) goto code_r0x000134b0;
    }
    if (puVar4 < puVar5 + arg2) {
        return iVar3;
    }
code_r0x000134b0:
    if (uVar2 != 0) {
        iVar7 = puVar4 - puVar5;
        do {
            *puVar5 = uVar2;
            puVar5 = puVar5 + 1;
            uVar1 = *(iVar7 + puVar5);
            uVar2 = uVar1;
        } while (uVar1 != 0);
    }
    *puVar5 = 0;
    return iVar3;
}


/* fcn.00013c58 @ 0x13c58 */

ulong fcn.00013c58(uint32_t arg1)

{
    code *pcVar1;
    int16_t iVar2;
    int16_t *piVar3;
    int16_t *piVar4;
    int64_t iVar5;
    ulong uVar6;
    uint in_register_0000000c;
    uint64_t uVar7;
    uint64_t uVar8;
    int16_t *piVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    
    piVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar11 = 0;
    if ((piVar4 == NULL) || (*piVar4 == 0)) {
        uVar6 = 0;
    }
    else {
        piVar3 = piVar4;
        uVar8 = uVar11;
        do {
            piVar3 = piVar3 + 1;
            uVar8 = uVar8 + 1;
        } while (*piVar3 != 0);
        piVar4 = fcn.00017114(piVar4,uVar8 * 2 + 2,arg1);
        if (*0x172e8 != 0) {
            uVar8 = uVar11;
            uVar10 = uVar11;
            do {
                piVar9 = *(uVar8 + 0x172e0);
                iVar2 = *piVar9;
                piVar3 = piVar9;
                uVar8 = uVar11;
                while (iVar2 != 0) {
                    piVar3 = piVar3 + 1;
                    uVar8 = uVar8 + 1;
                    iVar2 = *piVar3;
                }
                if (uVar8 == 0) {
code_r0x00013d28:
                    if (piVar4[uVar8] == 0x28) {
                        piVar9 = piVar4 + uVar8 + 1;
                        iVar2 = *piVar9;
                        piVar3 = piVar9;
                        uVar8 = uVar11;
                        while ((iVar2 != 0 && (iVar2 != 0x29))) {
                            piVar3 = piVar3 + 1;
                            uVar8 = uVar8 + 1;
                            iVar2 = *piVar3;
                        }
                        if ((*piVar3 != 0) && (iVar5 = fcn.00017114(piVar3,uVar8 * 2 + 2,piVar9), iVar5 != 0)) {
                            *(iVar5 + uVar8 * 2) = 0;
                            pcVar1 = *(uVar10 * 0x10 + 0x172e8);
                            if (pcVar1 != NULL) {
                                uVar6 = (*pcVar1)(iVar5);
                                (**(*0x19878 + 0x48))(iVar5);
                                goto code_r0x00013d93;
                            }
                            break;
                        }
                    }
                }
                else {
                    iVar2 = *piVar4;
                    piVar3 = piVar4;
                    for (uVar7 = uVar8; (((iVar2 != 0 && (*piVar9 != 0)) && (*piVar3 == *piVar9)) && (1 < uVar7));
                        uVar7 = uVar7 - 1) {
                        piVar3 = piVar3 + 1;
                        piVar9 = piVar9 + 1;
                        iVar2 = *piVar3;
                    }
                    if (*piVar3 == *piVar9) goto code_r0x00013d28;
                }
                uVar10 = uVar10 + 1;
                uVar8 = uVar10 * 0x10;
            } while (*(uVar8 + 0x172e8) != 0);
        }
        uVar6 = fcn.00013418(piVar4);
code_r0x00013d93:
        (**(*0x19878 + 0x48))(piVar4);
    }
    return uVar6;
}


/* fcn.000104a0 @ 0x104a0 */

ulong fcn.000104a0(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t arg1_00;
    
    uVar2 = 0;
    if (arg2 == 0) {
        iVar3 = 0x178b0;
        if (arg1 != 0) {
            iVar3 = arg1;
        }
        uVar2 = fcn.0001039c(iVar3);
    }
    else {
        uVar1 = *(arg2 + 2);
        iVar3 = fcn.000170e4(arg1,uVar1 + 4);
        if (iVar3 != 0) {
            if ((uVar1 != 0) && (iVar3 != arg2)) {
                iVar3 = section..text(iVar3,arg2,uVar1);
            }
            arg1_00 = *(iVar3 + 2) + iVar3;
            if (arg1_00 != 0x178b0) {
                section..text(arg1_00,0x178b0,4);
            }
            uVar2 = fcn.000103c4(arg1,iVar3);
            (**(*0x19878 + 0x48))(iVar3);
        }
    }
    return uVar2;
}


/* fcn.000162f4 @ 0x162f4 */

void fcn.000162f4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00016358(arg1,arg2 >> 1,0x140,arg3,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00014e4c @ 0x14e4c */

void fcn.00014e4c(int64_t arg1,int64_t arg2)

{
    fcn.00013fd4(arg1,0x18a60,*arg2,*(arg2 + 1));
    return;
}


/* fcn.00015a9c @ 0x15a9c */

int64_t fcn.00015a9c(int64_t arg1)

{
    int iVar1;
    uint16_t uVar2;
    
    uVar2 = arg1;
    if (uVar2 - 0x30 < 10) {
        iVar1 = (arg1 & 0xffff) - 0x30;
    }
    else {
        if (uVar2 - 0x61 < 0x1a) {
            uVar2 = uVar2 - 0x20;
        }
        iVar1 = uVar2 - 0x37;
    }
    return iVar1;
}


/* fcn.000162d0 @ 0x162d0 */

uint64_t fcn.000162d0(uint32_t arg1)

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


/* fcn.000170c0 @ 0x170c0 */

void fcn.000170c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00016358(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00016324 @ 0x16324 */

uchar * fcn.00016324(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


