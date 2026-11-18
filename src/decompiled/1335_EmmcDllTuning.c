// decompiled by r2ghidra: 1335_EmmcDllTuning.pe32
// functions: 52

/* entry0 @ 0x10304 */

ulong entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong unaff_RDI;
    int64_t iStackX_10;
    int64_t iStackX_18;
    
    fcn.00010330(arg1,arg2);
    iStackX_10 = 0;
    iStackX_18 = 0;
    iVar1 = (**(*(arg2 + 0x60) + 0x118))(arg1,str.61_u,&iStackX_10,arg1,0,2,unaff_RDI);
    if (iVar1 < 0) {
        iVar1 = (**(*(arg2 + 0x60) + 0x118))(arg1,0x140b0,&iStackX_18,arg1,0,2);
        if (iVar1 < 0) {
            return 0xffffffffffffffff;
        }
        iVar1 = *(iStackX_18 + 0x18);
    }
    else {
        iVar1 = *(iStackX_10 + 8);
    }
    uVar2 = fcn.00011400(iVar1);
    return uVar2;
}


/* fcn.00010330 @ 0x10330 */

void fcn.00010330(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x1a458 = *(arg1 + 0x60);
    *0x1a450 = arg1;
    fcn.000104a4();
    puVar4 = fcn.000104a4();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x00010384:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010300();
                fcn.000102f0();
                uVar2 = in(0x1808);
                fcn.000102d0(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    fcn.000102c0();
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
            if ((*0x140c0 == *(puVar4 + 4)) && (*0x140c8 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x00010384;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.000104a4 @ 0x104a4 */

int64_t fcn.000104a4(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x1a460 == 0) {
        *0x1a460 = 0;
        if (*(*0x1a450 + 0x68) != 0) {
            piVar2 = *(*0x1a450 + 0x70);
            do {
                if ((*0x140a0 == *piVar2) && (*0x140a8 == piVar2[1])) {
                    *0x1a460 = (*(*0x1a450 + 0x70))[uVar1 * 3 + 2];
                    return *0x1a460;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x1a450 + 0x68));
        }
    }
    return *0x1a460;
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


/* fcn.00011400 @ 0x11400 */

ulong fcn.00011400(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    uint64_t arg2;
    int64_t in_RDX;
    int64_t in_R8;
    int64_t arg4;
    int64_t in_R9;
    uint64_t uStackX_8;
    int64_t aiStackX_10 [3];
    
    fcn.000132c0(88000,in_RDX,in_R8,in_R9);
    iVar1 = arg1;
    fcn.000132c0(0x15840,arg1,in_R8,in_R9);
    if (arg1 != 1) {
        fcn.000132c0(0x140d0,iVar1,in_R8,in_R9);
        fcn.000132c0(0x140e8,iVar1,in_R8,in_R9);
        fcn.000132c0(0x14120,iVar1,in_R8,in_R9);
        fcn.000132c0(0x141b8,iVar1,in_R8,in_R9);
        return 0x8000000000000002;
    }
    aiStackX_10[0] = 0;
    fcn.000132c0(0x15670,iVar1,in_R8,in_R9);
    iVar1 = fcn.00011474(aiStackX_10,&uStackX_8,in_R8,in_R9);
    if (((iVar1 < 0) || (aiStackX_10[0] == 0)) || (uStackX_8 == 0)) {
        fcn.000132c0(0x156a0,iVar1,in_R8,in_R9);
        uVar2 = 0x800000000000000e;
    }
    else {
        iVar1 = 0x10000000;
        arg4 = 0xc0000000;
        if (*((uStackX_8 >> 4 & 0x10000000 | uStackX_8 & 0xffffffff) + 0xc0000000) == -1) {
            fcn.000132c0(0x15710,uStackX_8,0x10000000,0xc0000000);
            uVar2 = 0x8000000000000003;
        }
        else {
            arg2 = *((uStackX_8 + 0x10 >> 4 & 0x10000000 | uStackX_8 + 0x10 & 0xffffffff) + 0xc0000000) & 0xfffff000 |
                   *((uStackX_8 + 0x14 >> 4 & 0x10000000 | uStackX_8 + 0x14 & 0xffffffff) + 0xc0000000) << 0x20;
            iVar3 = fcn.000110fc(aiStackX_10[0],arg2,0x10000000);
            if (-1 < iVar3) {
                fcn.000132c0(0x15770,arg2,iVar1,arg4);
            }
            fcn.000132c0(0x15798,arg2,iVar1,arg4);
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.000132c0 @ 0x132c0 */

void fcn.000132c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iStackX_10 = arg2;
    iStackX_18 = arg3;
    iStackX_20 = arg4;
    fcn.0001323c(arg1,*(*0x1a450 + 0x40),&iStackX_10);
    return;
}


/* fcn.0001323c @ 0x1323c */

int64_t fcn.0001323c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t iVar2;
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    arg1_00 = fcn.00013204(arg1,arg2);
    iVar1 = fcn.00013324(arg1_00,0x141,0x140,arg1,in_stack_00000038,in_stack_00000040);
    if ((arg2 != 0) && (iVar1 != 0)) {
        iVar2 = (**(arg2 + 8))(arg2,arg1_00);
        if (iVar2 < 0) {
            iVar1 = 0;
        }
    }
    (**(*0x1a458 + 0x48))(arg1_00);
    return iVar1;
}


/* fcn.00013204 @ 0x13204 */

int64_t fcn.00013204(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_10 [3];
    
    aiStackX_10[0] = arg1;
    iVar1 = (**(*0x1a458 + 0x40))(4,0x282,aiStackX_10);
    if (iVar1 < 0) {
        aiStackX_10[0] = 0;
    }
    return aiStackX_10[0];
}


/* fcn.00013324 @ 0x13324 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00013324(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x0001337f;
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
code_r0x0001337f:
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
        uVar5 = fcn.000131e0(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        iVar13 = 1;
        uStack_90 = 0xff;
    }
    else {
        uVar5 = fcn.000131b4(arg4);
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
            pcVar9 = 0x1a0ac;
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
code_r0x00013709:
                puVar22 = arg4 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puVar22[1] << 8;
                }
                uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                if (uStack_a8 == 10) {
                    pcVar9 = 0x1a0ac;
                }
                else {
                    pcVar9 = 0x1a0b0;
                    puVar22 = arg4;
                }
            }
            else {
                puStackX_20 = arg4;
                if (uStack_a8 == 0x25) {
                    puVar14 = puStack_b0;
                    puVar19 = in_stack_00000028;
code_r0x000134c8:
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
                            goto code_r0x0001366b;
                        }
                        if (uStack_a8 == 0x30) {
                            if ((uVar5 & 0x800) == 0) {
                                uVar5 = uVar5 | 0x20;
                                uStackX_18 = uVar5;
                            }
                        }
                        else {
                            if (uStack_a8 < 0x31) goto code_r0x00013682;
                            if (0x39 < uStack_a8) {
                                if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                    uVar5 = uVar5 | 0x10;
                                    goto code_r0x0001366b;
                                }
                                goto code_r0x00013682;
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
code_r0x0001366b:
                        arg4 = puStackX_20;
                        uStackX_18 = uVar5;
                        goto code_r0x000134c8;
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
                                goto code_r0x000134c8;
                            }
                            if (uStack_a8 == 0x2b) {
                                uVar5 = uVar5 | 2;
                            }
                            else {
                                if (uStack_a8 != 0x2c) goto code_r0x00013682;
                                uVar5 = uVar5 | 8;
                            }
                        }
                        goto code_r0x0001366b;
                    }
                    uVar18 = 0;
                    uStack_b8 = 0;
                    puStackX_20 = arg4;
code_r0x00013682:
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
                                fcn.00014050(&var_68h_2,0x26,0,0x1a040);
                                pcVar9 = &var_68h_2;
                                uVar6 = uStack_c0;
                                cVar15 = cStack0000000000000030;
                            }
                            uVar18 = uStack_b8;
                        }
                        else {
                            if (uStack_a8 != 10) {
                                arg4 = puStackX_20;
                                if (uStack_a8 == 0xd) goto code_r0x00013709;
                                if (uStack_a8 == 0x53) goto code_r0x00013918;
                                if (uStack_a8 == 0x58) goto code_r0x00013a0e;
                                if (uStack_a8 == 0x61) goto code_r0x00013921;
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
                                    goto code_r0x000134ad;
                                }
                                if (uStack_a8 != 100) goto code_r0x000134a9;
                                goto code_r0x00013a25;
                            }
                            puVar22 = puStackX_20 + var_78h;
                            pcVar9 = 0x1a0ac;
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
                        goto code_r0x00013c20;
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
                                    iVar13 = 0x1a14b;
                                    goto code_r0x000139d5;
                                }
                            }
                            else if (uVar11 < 6) {
                                iVar13 = uVar11 * 0x19;
                                pcVar9 = "Success";
code_r0x000139d5:
                                pcVar9 = pcVar9 + iVar13;
                                if (pcVar9 != &var_68h_2) goto code_r0x00013c20;
                            }
                            fcn.00014050(&var_68h_2,0x26,0,0x1a0a4);
                        }
                        else {
                            if (uStack_a8 == 0x73) {
code_r0x00013918:
                                uVar5 = uVar5 | 0x400;
                                uStackX_18 = uVar5;
code_r0x00013921:
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
                                goto code_r0x00013c20;
                            }
                            if (uStack_a8 != 0x74) {
                                if (uStack_a8 != 0x75) {
                                    if (uStack_a8 != 0x78) goto code_r0x000134a9;
                                    goto code_r0x00013a12;
                                }
                                goto code_r0x00013a17;
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
                                goto code_r0x00013c20;
                            }
                            fcn.00014050(&var_68h_2,0x26,0,0x1a088);
                            pcVar9 = &var_68h_2;
                        }
                        uVar6 = uStack_c0;
                        goto code_r0x00013c20;
                    }
                    uVar5 = uVar5 & 0xffffffffffffffd9 | 0x10;
code_r0x00013a0e:
                    uVar5 = uVar5 | 0x20;
code_r0x00013a12:
                    uVar5 = uVar5 | 0x80;
code_r0x00013a17:
                    if (-1 < uVar5) {
                        uVar5 = uVar5 & 0xfffffffffffffffd | 0x4000;
                    }
code_r0x00013a25:
                    if ((uVar5 & 0x10) == 0) {
                        if (puVar14 != NULL) {
                            uVar6 = *puVar14;
                            goto code_r0x00013a67;
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
code_r0x00013a67:
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
code_r0x00013aef:
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
                            if ((uVar5 & 0x4010) == 0x4000) goto code_r0x00013aef;
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
code_r0x000134a9:
                    pcVar9 = &uStack_a8;
code_r0x000134ad:
                    uVar5 = uVar5 | 0x400;
                    uStackX_18 = uVar5;
                    puVar22 = puStackX_20;
                }
            }
        }
code_r0x00013c20:
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
                arg1 = fcn.000132f0(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        uVar7 = uVar20;
        if (cVar15 == '\0') {
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.000132f0(arg1,pcVar16,uVar18 - uVar6,(uVar17 & 0x2000) + 0x20);
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
                arg1 = fcn.000132f0(arg1,pcStack_d8,uVar18 - uVar6,(uVar17 & 0x2000) + 0x30);
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
                arg1 = fcn.000132f0(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
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


/* fcn.00011474 @ 0x11474 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h

int64_t fcn.00011474(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg2_00;
    uint64_t *puVar1;
    char16_t *arg1_00;
    uint64_t uVar2;
    int64_t *arg3_00;
    uint64_t arg3_01;
    uint64_t *arg4_00;
    uint8_t auStackX_18 [8];
    uint32_t auStackX_20 [2];
    int64_t var_40h;
    int64_t var_48h;
    uint32_t auStack_58 [2];
    uint64_t uStack_50;
    uint64_t uStack_48;
    int64_t iStack_40;
    int64_t var_30h;
    uint32_t var_28h;
    int64_t var_bp_20h;
    uint32_t var_18h;
    int64_t var_10h;
    
    fcn.000132c0(0x15890,arg2,arg3,arg4);
    arg3_00 = NULL;
    arg4_00 = &uStack_50;
    arg2_00 = (**(*0x1a458 + 0x138))(2,0x14080,0,arg4_00,&iStack_40);
    if (((arg2_00 < 0) || (iStack_40 == 0)) || (uStack_50 == 0)) {
        arg1_00 = L"EmmcTune: LocateHandleBuffer Fail, Status = %r\n";
code_r0x00011669:
        fcn.000132c0(arg1_00,arg2_00,arg3_00,arg4_00);
    }
    else {
        fcn.000132c0(0x158e0,arg2_00,arg3_00,arg4_00);
        uVar2 = 0;
        if (uStack_50 != 0) {
            do {
                arg3_00 = &var_30h;
                arg2_00 = (**(*0x1a458 + 0x98))(*(iStack_40 + uVar2 * 8),0x14080);
                if (arg2_00 < 0) {
                    arg1_00 = L"EmmcTune: Handle Pcio Protocol Fail, Status = %r\n";
                    goto code_r0x00011669;
                }
                (**(var_30h + 0x70))(var_30h,&uStack_48,auStackX_18,auStackX_20,auStack_58);
                arg3_01 = auStack_58[0] & 7;
                arg4_00 = auStackX_18[0];
                if (uStack_48 == 0) {
                    puVar1 = arg4_00;
                }
                else {
                    puVar1 = (uStack_48 & 0xffff) << 0xc | arg4_00;
                }
                if (*((puVar1 << 0x10 & 0x10000000 |
                      (((puVar1 & 0xfff) << 5 | auStackX_20[0] & 0x1f) << 3 | arg3_01) << 0xc | 0xb) + 0xc0000000) ==
                    '\b') {
                    if (uStack_48 == 0) {
                        puVar1 = arg4_00;
                    }
                    else {
                        puVar1 = (uStack_48 & 0xffff) << 0xc | arg4_00;
                    }
                    if (*((puVar1 << 0x10 & 0x10000000 |
                          (((puVar1 & 0xfff) << 5 | auStackX_20[0] & 0x1f) << 3 | arg3_01) << 0xc | 10) + 0xc0000000) ==
                        '\x05') {
                        fcn.000132c0(0x159c0,arg2_00,arg3_01,arg4_00);
                        *arg1 = var_30h;
                        if (uStack_48 == 0) {
                            uVar2 = auStackX_18[0];
                        }
                        else {
                            uVar2 = (uStack_48 & 0xffff) << 0xc | auStackX_18[0];
                        }
                        *arg2 = ((uVar2 << 5 | auStackX_20[0] & 0x1f) << 3 | auStack_58[0] & 7) << 0xc;
                        return arg2_00;
                    }
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < uStack_50);
        }
    }
    return arg2_00;
}


/* fcn.000110fc @ 0x110fc */

int64_t fcn.000110fc(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t arg2_00;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint64_t arg2_01;
    uint8_t uVar3;
    uint64_t arg3_00;
    uint64_t *arg3_01;
    int64_t in_R9;
    uint32_t *arg4;
    bool bVar4;
    uint64_t uStackX_18;
    uint32_t auStackX_20 [2];
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uStackX_18 = arg3 & 0xffffffffffffff00;
    iVar2 = arg2;
    fcn.000105a4(arg2,arg2,arg3,in_R9);
    iVar2 = CONCAT71(iVar2 >> 8,1);
    arg2_00 = fcn.000120c4(arg2,iVar2);
    if (arg2_00 < 0) {
        iVar2 = arg2_00;
        fcn.000132c0(0x19f20,arg2_00,arg3,in_R9);
    }
    else {
        if ((*(arg2 + 0x24) >> 0x10 & 1) == 0) {
            fcn.000132c0(0x19f98,iVar2,arg3,in_R9);
            arg2_00 = -0x7ffffffffffffff2;
            goto code_r0x000111ae;
        }
        iVar2 = 400000;
        *(arg2 + 0x34) = 3;
        *(arg2 + 0x36) = 0xffff;
        *(arg2 + 0x2e) = 0xe;
        arg2_00 = fcn.00012984(arg2,400000,arg3,in_R9);
        if (arg2_00 < 0) {
            fcn.000132c0(0x19fd0,iVar2,arg3,in_R9);
        }
        else {
            *(arg2 + 0x29) = 0xb;
            arg2_00 = 0;
        }
    }
    if (-1 < arg2_00) {
        arg4 = auStackX_20;
        arg3_01 = &uStackX_18;
        arg2_01 = arg2;
        iVar2 = fcn.00012e34(arg1_00,arg2,arg3_01,arg4);
        if (iVar2 < 0) {
            fcn.000132c0(0x15580,arg2_01,arg3_01,arg4);
            return iVar2;
        }
        uVar3 = 4;
        do {
            if (uVar3 == 0) {
                if (uStackX_18 == 0) {
                    bVar4 = false;
                    goto code_r0x0001124f;
                }
code_r0x00011264:
                arg3_00 = auStackX_20[0];
                iVar2 = fcn.00012c34(arg2,CONCAT71(arg2_01 >> 8,uVar3),arg3_00);
                cVar1 = fcn.000125f8(arg1_00,arg2,arg3_00,arg4);
                if (cVar1 != '\0') {
                    return -0x7ffffffffffffffd;
                }
                arg3_01 = CONCAT71(arg3_00 >> 8,uVar3);
                arg2_01 = arg2;
                cVar1 = fcn.00010ef0(arg1_00,arg2,arg3_01,arg4);
                if (cVar1 == '\0') {
                    fcn.000132c0(0x155d0,arg2_01,arg3_01,arg4);
                    return -0x7ffffffffffffffd;
                }
            }
            else {
                if (uVar3 == 1) {
                    bVar4 = uStackX_18 < 2;
code_r0x00011241:
                    bVar4 = !bVar4;
code_r0x0001124f:
                    if (bVar4) goto code_r0x00011264;
                }
                else {
                    if (uVar3 == 2) {
                        bVar4 = uStackX_18 < 4;
                        goto code_r0x00011241;
                    }
                    if (uVar3 == 3) {
                        bVar4 = (uStackX_18 & 0xf0) != 0;
                        goto code_r0x0001124f;
                    }
                    if (uVar3 == 4) {
                        bVar4 = uStackX_18 < 0x40;
                        goto code_r0x00011241;
                    }
                    fcn.000132c0(0x19b10,arg2_01,arg3_01,arg4);
                }
                arg2_01 = uVar3;
                fcn.000132c0(0x15620,arg2_01,arg3_01,arg4);
            }
            if (uVar3 == 0) {
                fcn.000105a4(arg2,arg2_01,arg3_01,arg4);
                return iVar2;
            }
            uVar3 = uVar3 - 1;
        } while( true );
    }
code_r0x000111ae:
    fcn.000132c0(0x15530,iVar2,arg3,in_R9);
    return arg2_00;
}


/* fcn.000102c0 @ 0x102c0 */

void fcn.000102c0(void)

{
    return;
}


/* fcn.00010510 @ 0x10510 */

void fcn.00010510(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int iVar4;
    uint32_t uVar5;
    
    uVar3 = arg1 >> 0x16 & 0x3ff;
    uVar5 = arg1 & 0x3fffff;
    do {
        uVar1 = in(0x1808);
        iVar4 = (uVar1 & 0xffffff) + uVar5;
        uVar5 = 0x400000;
        while( true ) {
            iVar2 = in(0x1808);
            if ((iVar4 - iVar2 >> 0x17 & 1) != 0) break;
            fcn.000102c0();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.0001062c @ 0x1062c */

void fcn.0001062c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    if (arg3 == '\0') {
        fcn.000132c0(0x14470,arg2,arg3,arg4);
        *(arg1 + 0x820) = arg2;
    }
    else if (arg3 == '\x02') {
        fcn.000132c0(0x144e0,arg2,arg3,arg4);
        *(arg1 + 0x821) = arg2;
    }
    else {
        fcn.000132c0(0x14550,arg2,arg3,arg4);
    }
    return;
}


/* fcn.0001259c @ 0x1259c */

ulong fcn.0001259c(int64_t noname_0,int64_t arg1)

{
    ulong uVar1;
    int64_t arg3;
    int64_t arg4;
    uint32_t uStackX_10;
    
    uStackX_10 = CONCAT22(uStackX_10._2_2_,arg1);
    arg4 = 0;
    arg3 = 0x10000;
    uVar1 = fcn.000124fc(noname_0);
    if (arg1 < '\0') {
        fcn.000132c0(0x18a60,uStackX_10,arg3,arg4);
        uVar1 = 0x8000000000000007;
    }
    return uVar1;
}


/* fcn.000124fc @ 0x124fc */

//WARNING: Variable defined which should be unmapped: var_1h

int64_t fcn.000124fc(int64_t arg1)

{
    int64_t arg2;
    int64_t in_RDX;
    int64_t in_R8;
    int64_t in_R9;
    int in_stack_00000038;
    uint32_t *in_stack_00000040;
    int32_t var_1h;
    
    arg2 = fcn.000121dc(arg1,in_RDX,in_R8,in_R9);
    if (arg2 < 0) {
        fcn.000132c0(0x189d0,arg2,in_R8,in_R9);
    }
    else {
        if (1 < in_stack_00000038 - 1U) {
            return arg2;
        }
        if (in_stack_00000040 == NULL) {
            return -0x7ffffffffffffff0;
        }
        if ((*in_stack_00000040 & 0xfff9a080) == 0) {
            return arg2;
        }
    }
    fcn.000120c4(arg1,0);
    return arg2;
}


/* fcn.00010688 @ 0x10688 */

void fcn.00010688(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    int iVar2;
    uint32_t uVar3;
    
    uVar1 = arg2;
    if (arg3 == '\0') {
        fcn.000132c0(0x145d0,arg2,arg3,arg3 & 0xffU);
        *(arg1 + 0x828) = uVar1;
    }
    else {
        iVar2 = arg3 & 0xffU;
        if (iVar2 == 1) {
            fcn.000132c0(0x14640,arg2,arg3,0);
            *(arg1 + 0x829) = uVar1;
        }
        else if (iVar2 == 2) {
            fcn.000132c0(0x146a0,arg2,arg3,0);
            *(arg1 + 0x82a) = uVar1;
        }
        else {
            uVar3 = iVar2 - 3;
            if (uVar3 == 0) {
                fcn.000132c0(0x146f0,arg2,arg3,0);
                *(arg1 + 0x824) = uVar1;
            }
            else if (uVar3 == 1) {
                fcn.000132c0(0x14740,arg2,arg3,1);
                *(arg1 + 0x825) = uVar1;
            }
            else {
                fcn.000132c0(0x14790,arg2,arg3,uVar3);
            }
        }
    }
    return;
}


/* fcn.00010734 @ 0x10734 */

void fcn.00010734(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    int iVar2;
    uint32_t uVar3;
    
    uVar1 = arg2;
    if (arg3 == '\0') {
        fcn.000132c0(0x14810,arg2,arg3,arg3 & 0xffU);
        *(arg1 + 0x82c) = uVar1;
    }
    else {
        iVar2 = arg3 & 0xffU;
        if (iVar2 == 1) {
            fcn.000132c0(0x14880,arg2,arg3,0);
            *(arg1 + 0x82d) = uVar1;
        }
        else {
            uVar3 = iVar2 - 2;
            if (uVar3 == 0) {
                fcn.000132c0(0x148f0,arg2,arg3,0);
                *(arg1 + 0x82e) = uVar1;
            }
            else if (uVar3 == 1) {
                fcn.000132c0(0x14950,arg2,arg3,1);
                *(arg1 + 0x834) = uVar1;
            }
            else {
                fcn.000132c0(0x149b0,arg2,arg3,uVar3);
            }
        }
    }
    return;
}


/* fcn.00010928 @ 0x10928 */

ulong fcn.00010928(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    char cVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint8_t uVar6;
    uchar uVar7;
    unkbyte7 Var8;
    uint32_t uVar9;
    uint8_t uVar10;
    uint64_t arg3_00;
    uint8_t *in_stack_00000028;
    uchar *in_stack_00000030;
    char acStack_b8 [128];
    
    uVar7 = arg3;
    Var8 = arg3 >> 8;
    uVar3 = arg1;
    bVar1 = false;
    uVar4 = 0;
    uVar9 = 0;
    fcn.000132c0(0x14af0,arg1,arg2,arg3);
    arg3_00 = 0;
    do {
        fcn.000132c0(0x14b30,arg3 & 0xff,arg3_00,CONCAT71(Var8,uVar7));
        cVar2 = (**(arg2 + 0x20))(arg2,arg3_00);
        uVar7 = 1;
        uVar10 = arg3_00 + 1;
        acStack_b8[arg3_00] = cVar2;
        arg3_00 = uVar10;
    } while (uVar10 <= uVar3);
    uVar6 = 0;
    uVar10 = 0;
    uVar5 = 0;
    do {
        if (bVar1) {
            if (acStack_b8[uVar6] == '\0') {
                bVar1 = false;
                if (uVar5 - uVar10 < uVar9 - uVar4) goto code_r0x00010a13;
            }
            else {
                uVar9 = uVar6;
                if ((uVar6 == uVar3) && (uVar5 - uVar10 < uVar6 - uVar4)) {
code_r0x00010a13:
                    uVar5 = uVar9;
                    uVar10 = uVar4;
                    uVar9 = uVar5;
                }
            }
        }
        else if (acStack_b8[uVar6] != '\0') {
            bVar1 = true;
            uVar4 = uVar6;
        }
        uVar6 = uVar6 + 1;
        if (uVar3 < uVar6) {
            *in_stack_00000028 = uVar10;
            *in_stack_00000030 = uVar5;
            return 1;
        }
    } while( true );
}


/* fcn.00011688 @ 0x11688 */

int64_t fcn.00011688(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    char16_t *arg1_00;
    int64_t arg2_00;
    int64_t arg3_00;
    uchar *arg4_00;
    uint64_t *arg4_01;
    ulong *arg4_02;
    uint64_t uStackX_8;
    ulong uVar3;
    ulong uStack_38;
    int64_t iStack_30;
    uchar auStack_28 [16];
    
    fcn.000132c0(0x15ae0,arg2,arg3,arg4);
    uVar3 = 0;
    arg2_00 = 0;
    arg4_00 = 0x1;
    arg3_00 = 4;
    iVar2 = arg2;
    iVar1 = (**(arg1 + 0x58))(arg1);
    if (iVar1 < 0) {
        arg1_00 = L"EmmcAllocateBuffer: Failed to Allocate Buffer\n";
    }
    else {
        fcn.000132c0(0x15b80,*arg2,1,arg4_00);
        arg4_00 = auStack_28;
        arg3_00 = 0;
        arg2_00 = 0;
        iVar1 = (**(arg1 + 0x78))(arg1);
        if (-1 < iVar1) {
            iVar1 = 0;
            arg4_01 = &uStackX_8;
            iVar2 = (**(arg1 + 0x78))(arg1,4,0,arg4_01,iVar2,uVar3);
            if (-1 < iVar2) {
                fcn.000132c0(0x15c80,uStackX_8,iVar1,arg4_01);
                iVar1 = 0;
                uStackX_8 = uStackX_8 & 0x8700;
                iVar2 = (**(arg1 + 0x78))(arg1,2);
                if (-1 < iVar2) {
                    fcn.000132c0(0x15ce0,uStackX_8,iVar2,iVar1);
                }
            }
            arg2 = *arg2;
            arg4_02 = &uStack_38;
            iVar1 = 2;
            uStack_38 = 0x1000;
            iVar2 = (**(arg1 + 0x48))(arg1);
            if (-1 < iVar2) {
                *arg3 = iStack_30;
                fcn.000132c0(0x15d40,iStack_30,arg2,arg4_02);
                fcn.000132c0(0x15e10,iVar2,arg2,arg4_02);
                return 0;
            }
            fcn.000132c0(0x15dc0,iVar1,arg2,arg4_02);
            return iVar2;
        }
        arg1_00 = L"EmmcAllocateBuffer Get Attributes Failed\n";
    }
    fcn.000132c0(arg1_00,arg2_00,arg3_00,arg4_00);
    return iVar1;
}


/* fcn.000102a0 @ 0x102a0 */

ulong * fcn.000102a0(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = CONCAT44(in_register_0000000c,arg1);
    for (uVar1 = arg2 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
    }
    return CONCAT44(in_register_0000000c,arg1);
}


/* fcn.00010dc4 @ 0x10dc4 */

ulong fcn.00010dc4(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    char cVar1;
    ulong uVar2;
    char16_t *noname_0;
    int64_t iVar3;
    uint64_t arg2_00;
    uint8_t uVar4;
    int64_t *arg2_01;
    uint uVar5;
    uint in_R9;
    uint8_t uStackX_10;
    char cStackX_18;
    char in_stack_00000028;
    uint8_t *in_stack_00000030;
    int64_t aiStack_38 [2];
    uint uStack_28;
    ulong uStack_20;
    ulong uStack_18;
    
    uVar2 = CONCAT44(in_R9,arg4);
    noname_0 = L"EmmcTune: Start Rx Strobe tuning\n";
    iVar3 = arg2;
    fcn.000132c0(0x150e0,arg2,arg3,CONCAT44(in_R9,arg4));
    uVar5 = CONCAT31(arg4 >> 8,in_stack_00000028);
    uStack_18 = 0x10898;
    arg2_01 = aiStack_38;
    iVar3 = CONCAT71(iVar3 >> 8,0x27);
    aiStack_38[1] = 0x2000000;
    uStack_28 = 0x200;
    aiStack_38[0] = arg1;
    uStack_20 = uVar2;
    cVar1 = fcn.00010928(noname_0,iVar3,arg2_01,CONCAT44(in_R9,uVar5));
    if (cVar1 == '\0') {
        fcn.000132c0(0x15130,iVar3,arg2_01,CONCAT44(in_R9,uVar5));
        uVar2 = 0;
    }
    else {
        cStackX_18 = arg3;
        fcn.000132c0(0x151a0,arg3 & 0xff,arg2_01,CONCAT44(in_R9,uVar5));
        uStackX_10 = arg2;
        fcn.000132c0(0x151f0,arg2 & 0xff,arg2_01,CONCAT44(in_R9,uVar5));
        uVar4 = (uStackX_10 - (arg3 & 0xff)) / 2 + cStackX_18;
        arg2_00 = uVar4;
        fcn.000132c0(0x15240,arg2_00,arg2_01,CONCAT44(in_R9,uVar5));
        if (in_stack_00000028 == '\x04') {
            fcn.000132c0(0x14a20,arg2_00,arg2_01,CONCAT44(in_R9,uVar5));
            *(arg1 + 0x831) = uVar4;
            *(arg1 + 0x830) = uVar4;
        }
        else {
            fcn.000132c0(0x14a70,arg2_00,arg2_01,CONCAT44(in_R9,uVar5));
        }
        *in_stack_00000030 = uVar4;
        uVar2 = 1;
    }
    return uVar2;
}


/* fcn.00010cb8 @ 0x10cb8 */

bool fcn.00010cb8(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    ulong uVar1;
    char cVar2;
    char16_t *noname_0;
    int64_t iVar3;
    uint64_t arg2_00;
    uint8_t uVar4;
    int64_t *arg2_01;
    uint uVar5;
    uint in_R9;
    uint8_t uStackX_10;
    char cStackX_18;
    uchar in_stack_00000028;
    uint8_t *in_stack_00000030;
    int64_t aiStack_38 [2];
    uint uStack_28;
    ulong uStack_20;
    ulong uStack_18;
    
    uVar1 = CONCAT44(in_R9,arg4);
    noname_0 = L"EmmcTune: Start Rx tuning\n";
    iVar3 = arg2;
    fcn.000132c0(0x14f58,arg2,arg3,CONCAT44(in_R9,arg4));
    uVar5 = CONCAT31(arg4 >> 8,in_stack_00000028);
    uStack_18 = 0x10844;
    arg2_01 = aiStack_38;
    iVar3 = CONCAT71(iVar3 >> 8,0x77);
    aiStack_38[1] = 0x2000000;
    uStack_28 = 0x200;
    aiStack_38[0] = arg1;
    uStack_20 = uVar1;
    cVar2 = fcn.00010928(noname_0,iVar3,arg2_01,CONCAT44(in_R9,uVar5));
    if (cVar2 != '\0') {
        cStackX_18 = arg3;
        fcn.000132c0(0x15000,arg3 & 0xff,arg2_01,CONCAT44(in_R9,uVar5));
        uStackX_10 = arg2;
        fcn.000132c0(0x15050,arg2 & 0xff,arg2_01,CONCAT44(in_R9,uVar5));
        uVar4 = (uStackX_10 - (arg3 & 0xff)) / 2 + cStackX_18;
        arg2_00 = uVar4;
        fcn.000132c0(0x150a0,arg2_00,arg2_01,CONCAT44(in_R9,uVar5));
        fcn.00010734(arg1,CONCAT71(arg2_00 >> 8,uVar4),CONCAT71(arg2_01 >> 8,in_stack_00000028));
        *in_stack_00000030 = uVar4;
    }
    else {
        fcn.000132c0(0x14f90,iVar3,arg2_01,CONCAT44(in_R9,uVar5));
    }
    return cVar2 != '\0';
}


/* fcn.00010b60 @ 0x10b60 */

ulong fcn.00010b60(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    char cVar1;
    int64_t iVar2;
    int64_t noname_0;
    char16_t *arg1_00;
    int64_t arg1_01;
    uint64_t arg2_00;
    uint8_t uVar3;
    int64_t *arg2_01;
    uint in_R9;
    int64_t arg3_00;
    uint8_t uStackX_10;
    char cStackX_18;
    uchar in_stack_00000028;
    uint8_t *in_stack_00000030;
    int64_t aiStack_38 [2];
    uint uStack_28;
    int64_t iStack_20;
    ulong uStack_18;
    
    fcn.000132c0(0x14d50,arg2,arg3,CONCAT44(in_R9,arg4));
    arg1_01 = 0x11;
    arg2_01 = 0x2000000;
    arg3_00 = 1;
    noname_0 = arg1;
    iVar2 = fcn.000124fc(arg1);
    if (iVar2 < 0) {
        arg1_00 = L"EmmcTune: Failed to read tuning block during Tx tuning!\n";
    }
    else {
        arg3_00 = CONCAT71(arg3_00 >> 8,in_stack_00000028);
        uStack_18 = 0x107f0;
        arg2_01 = aiStack_38;
        arg1_01 = CONCAT71(arg1_01 >> 8,0x4f);
        aiStack_38[1] = 0x2000000;
        uStack_28 = 0x200;
        aiStack_38[0] = arg1;
        iStack_20 = CONCAT44(in_R9,arg4);
        cVar1 = fcn.00010928(noname_0,arg1_01,arg2_01,arg3_00);
        if (cVar1 != '\0') {
            cStackX_18 = arg3;
            fcn.000132c0(0x14e70,arg3 & 0xff,arg2_01,arg3_00);
            uStackX_10 = arg2;
            fcn.000132c0(0x14ec0,arg2 & 0xff,arg2_01,arg3_00);
            uVar3 = (uStackX_10 - (arg3 & 0xff)) / 2 + cStackX_18;
            arg2_00 = uVar3;
            fcn.000132c0(0x14f10,arg2_00,arg2_01,arg3_00);
            fcn.00010688(arg1,CONCAT71(arg2_00 >> 8,uVar3),CONCAT71(arg2_01 >> 8,in_stack_00000028));
            *in_stack_00000030 = uVar3;
            return 1;
        }
        arg1_00 = L"EmmcTune: Failed to get DLL for Tx Data DLL\n";
    }
    fcn.000132c0(arg1_00,arg1_01,arg2_01,arg3_00);
    return 0;
}


/* fcn.00010a54 @ 0x10a54 */

bool fcn.00010a54(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    ulong uVar1;
    char cVar2;
    char16_t *noname_0;
    int64_t iVar3;
    uint64_t arg2_00;
    uint8_t uVar4;
    int64_t *arg2_01;
    uint uVar5;
    uint in_R9;
    uint8_t uStackX_10;
    char cStackX_18;
    uchar in_stack_00000028;
    uint8_t *in_stack_00000030;
    int64_t aiStack_38 [2];
    uint uStack_28;
    ulong uStack_20;
    ulong uStack_18;
    
    uVar1 = CONCAT44(in_R9,arg4);
    noname_0 = L"EmmcTune: Start Tx Cmd tuning\n";
    iVar3 = arg2;
    fcn.000132c0(0x14bb0,arg2,arg3,CONCAT44(in_R9,arg4));
    uVar5 = CONCAT31(arg4 >> 8,in_stack_00000028);
    uStack_18 = 0x107c8;
    arg2_01 = aiStack_38;
    iVar3 = CONCAT71(iVar3 >> 8,0x27);
    aiStack_38[1] = 0x2000000;
    uStack_28 = 0x200;
    aiStack_38[0] = arg1;
    uStack_20 = uVar1;
    cVar2 = fcn.00010928(noname_0,iVar3,arg2_01,CONCAT44(in_R9,uVar5));
    if (cVar2 != '\0') {
        cStackX_18 = arg3;
        fcn.000132c0(0x14c60,arg3 & 0xff,arg2_01,CONCAT44(in_R9,uVar5));
        uStackX_10 = arg2;
        fcn.000132c0(0x14cb0,arg2 & 0xff,arg2_01,CONCAT44(in_R9,uVar5));
        uVar4 = (uStackX_10 - (arg3 & 0xff)) / 2 + cStackX_18;
        arg2_00 = uVar4;
        fcn.000132c0(0x14d00,arg2_00,arg2_01,CONCAT44(in_R9,uVar5));
        fcn.0001062c(arg1,CONCAT71(arg2_00 >> 8,uVar4),CONCAT71(arg2_01 >> 8,in_stack_00000028),
                     CONCAT44(in_R9,uVar5));
        *in_stack_00000030 = uVar4;
    }
    else {
        fcn.000132c0(0x14bf0,iVar3,arg2_01,CONCAT44(in_R9,uVar5));
    }
    return cVar2 != '\0';
}


/* fcn.000117fc @ 0x117fc */

int64_t fcn.000117fc(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int64_t arg2_00;
    int64_t iVar1;
    
    iVar1 = 0;
    if (arg1 == 0) {
        (**(*0x1a458 + 0x30))(arg2,1);
    }
    else {
        iVar1 = arg2;
        arg2_00 = (**(arg1 + 0x50))(arg1,arg3);
        fcn.000132c0(0x15e80,arg2_00,iVar1,arg3);
        iVar1 = (**(arg1 + 0x60))(arg1,1);
        fcn.000132c0(0x15ed0,iVar1,arg2,arg3);
    }
    return iVar1;
}


/* fcn.000105a4 @ 0x105a4 */

void fcn.000105a4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    fcn.000132c0(0x141e8,arg2,arg3,arg4);
    fcn.000132c0(0x14230,*(arg1 + 0x820),arg3,arg4);
    fcn.000132c0(0x14290,*(arg1 + 0x824),arg3,arg4);
    fcn.000132c0(0x142f0,*(arg1 + 0x828),arg3,arg4);
    fcn.000132c0(0x14350,*(arg1 + 0x82c),arg3,arg4);
    fcn.000132c0(0x143b0,*(arg1 + 0x834),arg3,arg4);
    uStackX_10 = *(arg1 + 0x830);
    iStackX_18 = arg3;
    iStackX_20 = arg4;
    fcn.0001323c(0x14410,*(*0x1a450 + 0x40),&uStackX_10);
    return;
}


/* fcn.000120c4 @ 0x120c4 */

ulong fcn.000120c4(int64_t arg1,int64_t arg2)

{
    ushort uVar1;
    ulong uVar2;
    char cVar3;
    unkbyte7 Var4;
    int iVar5;
    uint8_t uVar6;
    int64_t in_R8;
    int64_t in_R9;
    
    Var4 = arg2 >> 8;
    uVar1 = *(arg1 + 0x2c);
    cVar3 = -arg2;
    *(arg1 + 0x2c) = 0;
    uVar6 = (-(arg2 != '\0') & 0xfbU) + 6;
    fcn.00010570(0x32,CONCAT71(Var4,cVar3));
    *(arg1 + 0x2f) = uVar6;
    iVar5 = 1000;
    do {
        fcn.00010570(1000,CONCAT71(Var4,cVar3));
        iVar5 = iVar5 + -1;
        if ((*(arg1 + 0x2f) & uVar6) == 0) break;
    } while (iVar5 != 0);
    *(arg1 + 0x2c) = uVar1;
    if (iVar5 == 0) {
        fcn.000132c0(0x18570,CONCAT71(Var4,cVar3),in_R8,in_R9);
        uVar2 = 0x8000000000000012;
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00012984 @ 0x12984 */

ulong fcn.00012984(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint16_t uVar5;
    int iVar6;
    uint64_t arg3_00;
    uint64_t arg4_00;
    
    fcn.000132c0(0x18fa0,200,arg3,arg4);
    uVar2 = 200000000 / (arg2 & 0xffffffffU);
    uVar3 = uVar2;
    fcn.000132c0(0x19000,uVar2,arg3,arg4);
    uVar1 = uVar3 + 1;
    if (200000000 % (arg2 & 0xffffffffU) == 0) {
        uVar1 = uVar3;
    }
    uVar3 = 1;
    if (1 < uVar1) {
        do {
            uVar3 = uVar3 * 2;
        } while (uVar3 < uVar1);
        if (0x3ff < uVar3) {
            uVar3 = 0x200;
        }
    }
    uVar4 = uVar3 >> 1;
    fcn.000132c0(0x19050,uVar4,arg3,arg4);
    uVar1 = 200000;
    if (uVar3 >> 1 != 0) {
        uVar1 = 200000 / (uVar4 * 2);
    }
    arg4_00 = uVar1;
    uVar5 = uVar3 >> 3 & 0x3fc0 | uVar4 << 8;
    arg3_00 = uVar5;
    fcn.000132c0(0x190d0,200,arg3_00,arg4_00);
    uVar2 = uVar5;
    fcn.000132c0(0x19140,uVar2,arg3_00,arg4_00);
    *(arg1 + 0x2c) = uVar5;
    *(arg1 + 0x2c) = uVar5 | 1;
    iVar6 = 1000;
    do {
        uVar5 = *(arg1 + 0x2c);
        fcn.00010570(100,uVar2);
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) {
            fcn.000132c0(0x191a8,uVar2,arg3_00,arg4_00);
            return 0x8000000000000012;
        }
    } while ((uVar5 & 2) == 0);
    *(arg1 + 0x2c) = uVar5 | 4;
    return 0;
}


/* fcn.00012e34 @ 0x12e34 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_14h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.00012e34(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    char16_t *pcVar4;
    uint32_t uVar5;
    int64_t *arg2_00;
    int64_t arg2_01;
    uint64_t arg2_02;
    uint32_t *arg3_00;
    uint32_t *puVar6;
    int64_t arg3_01;
    int64_t *arg4_00;
    int64_t arg4_01;
    int iVar7;
    uint32_t uStack_48;
    uint uStack_44;
    uint32_t uStack_3c;
    int64_t iStack_38;
    int64_t iStack_30;
    int64_t var_20h;
    int32_t var_14h;
    int64_t var_10h;
    int64_t var_8h;
    
    arg2_00 = NULL;
    arg4_00 = NULL;
    arg3_00 = NULL;
    iVar7 = 5000;
    iVar2 = fcn.000124fc(arg2);
    if (iVar2 < 0) {
code_r0x00012f2a:
        if (-1 < iVar2) {
            iVar2 = fcn.000126fc(arg2);
            if (iVar2 < 0) {
                pcVar4 = L"EmmcTune: Fail card init at get CID\n";
            }
            else {
                arg2_00 = 0x3;
                arg4_00 = NULL;
                arg3_00 = 0x10000;
                iVar2 = fcn.000124fc(arg2);
                if (iVar2 < 0) {
                    pcVar4 = L"EmmcTune: Fail on set RCA\n";
                }
                else {
                    arg2_00 = 0x9;
                    arg4_00 = NULL;
                    arg3_00 = 0x10000;
                    iVar2 = fcn.000124fc(arg2);
                    if (iVar2 < 0) {
                        pcVar4 = L"EmmcTune: Failed to get CSD\n";
                    }
                    else {
                        fcn.00011984(&uStack_48,arg2_00,arg3_00,arg4_00);
                        if ((uStack_3c & 0x3c000000) < 0x10000000) {
                            fcn.000132c0(0x19c90,arg2_00,arg3_00,arg4_00);
                            return -0x7ffffffffffffffd;
                        }
                        arg2_00 = 0x7;
                        arg4_00 = NULL;
                        arg3_00 = 0x10000;
                        iVar2 = fcn.000124fc(arg2);
                        if (-1 < iVar2) {
                            if (arg1 == 0) {
                                fcn.000132c0(0x15a90,arg2_00,arg3_00,arg4_00);
                            }
                            else {
                                arg4_00 = &iStack_38;
                                arg3_00 = &uStack_48;
                                arg2_00 = &iStack_30;
                                iVar2 = fcn.00011688(arg1,arg2_00,arg3_00,arg4_00);
                                if ((-1 < iVar2) && (iVar2 = CONCAT44(uStack_44,uStack_48), iVar2 != 0)) {
                                    fcn.000102a0(uStack_48,0x200);
                                    arg2_01 = 8;
                                    arg3_01 = 0;
                                    arg4_01 = 1;
                                    iVar3 = fcn.000124fc(arg2);
                                    if (iVar3 < 0) {
                                        fcn.000132c0(0x19d90,arg2_01,arg3_01,arg4_01);
                                    }
                                    else {
                                        fcn.00011c3c(iVar2,arg2_01,arg3_01,arg4_01);
                                        uVar1 = *(iVar2 + 0xc4);
                                        if (uVar1 != 0) {
                                            *arg3 = uVar1;
                                            fcn.000132c0(0x19df0,uVar1,arg3_01,arg4_01);
                                            uVar5 = 2 - ((*(iVar2 + 0xc5) & 0xf0) != 0);
                                            arg2_02 = uVar5;
                                            *arg4 = uVar5;
                                            fcn.000132c0(0x19e40,arg2_02,arg3_01,arg4_01);
                                            fcn.000117fc(arg1,arg2_02,iStack_30,iStack_38);
                                            return 0;
                                        }
                                        arg2_01 = 0;
                                        fcn.000132c0(0x19e90,0,arg3_01,arg4_01);
                                    }
                                    fcn.000117fc(arg1,arg2_01,iStack_30,iStack_38);
                                    return -0x7ffffffffffffffd;
                                }
                            }
                            fcn.000132c0(0x19d30,arg2_00,arg3_00,arg4_00);
                            return -0x7ffffffffffffff7;
                        }
                        pcVar4 = L"EmmcTune: Failed to select card\n";
                    }
                }
            }
            goto code_r0x00012f36;
        }
    }
    else {
        arg4_00 = NULL;
        arg2_00 = 0x1;
        arg3_00 = 0x40ff8080;
        iVar2 = fcn.000124fc(arg2);
        puVar6 = arg3_00;
        if (iVar2 < 0) {
            pcVar4 = L"EmmcTune: failed to get first OCR\n";
code_r0x00012ed3:
            fcn.000132c0(pcVar4,arg2_00,arg3_00,arg4_00);
            goto code_r0x00012f2a;
        }
        do {
            arg3_00 = uStack_48;
            if (uStack_48 < 0) {
                iVar2 = 0;
                arg3_00 = puVar6;
                goto code_r0x00012f2a;
            }
            arg2_00 = 0x1;
            arg4_00 = NULL;
            iVar2 = fcn.000124fc(arg2);
            if (iVar2 < 0) {
                pcVar4 = L"EmmcTune: Failed to get OCR";
                goto code_r0x00012ed3;
            }
            fcn.00010570(1000,arg2_00);
            iVar7 = iVar7 + -1;
            puVar6 = arg3_00;
        } while (iVar7 != 0);
        fcn.000132c0(0x18ec0,arg2_00,arg3_00,arg4_00);
        iVar2 = -0x7fffffffffffffee;
    }
    pcVar4 = L"EmmcTune: Failed to power up the card\n";
code_r0x00012f36:
    fcn.000132c0(pcVar4,arg2_00,arg3_00,arg4_00);
    return iVar2;
}


/* fcn.00012c34 @ 0x12c34 */

int64_t fcn.00012c34(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    int64_t iVar2;
    char16_t *arg1_00;
    ulong uVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t arg4;
    
    arg4 = arg2 & 0xff;
    uVar5 = arg3;
    if (arg2 != '\0') {
        iVar4 = arg4;
        arg4 = iVar4 - 1U;
        if (iVar4 - 1U == 0) {
            fcn.000132c0(0x199b0,arg2,arg3,0);
            iVar2 = fcn.000128c4(arg1,0);
            if (iVar2 < 0) {
                arg1_00 = L"EmmcSwitchToHighSpeed: Failed to switch Bus Width, Status = %r\n";
                goto code_r0x00012dd3;
            }
            arg3 = 1;
            iVar2 = fcn.000127e8(arg1,uVar5,1);
            if (iVar2 < 0) {
                arg1_00 = L"EmmcSwitchToHighSpeed: Failed to switch Bus Timing, Status = %r\n";
                goto code_r0x00012dd3;
            }
            uVar1 = *(arg1 + 0x3e) & 0xfff9 | 1;
        }
        else {
            arg4 = iVar4 - 2U;
            if (iVar4 - 2U != 0) {
                uVar5 = iVar4 - 3;
                if (uVar5 == 0) {
                    fcn.000132c0(0x19a70,arg2,arg3,0);
                    iVar2 = fcn.00012aac(arg1,arg3 & 0xffffffffU);
                    return iVar2;
                }
                if (uVar5 == 1) {
                    fcn.000132c0(0x19ac0,arg2,arg3,1);
                    iVar2 = fcn.00012b38(arg1,arg3 & 0xffffffffU);
                    return iVar2;
                }
                fcn.000132c0(0x19b10,arg2,arg3,uVar5);
                return -0x7ffffffffffffffd;
            }
            fcn.000132c0(0x19a20,arg2,arg3,0);
            uVar3 = 50000000;
            iVar2 = fcn.00012984(arg1,50000000,arg3,arg4);
            if (iVar2 < 0) {
                arg1_00 = L"EmmcSwitchToDDR50: Failed to set clock frequency, Status = %r\n";
                goto code_r0x00012dd3;
            }
            iVar2 = fcn.000128c4(arg1,CONCAT71(uVar3 >> 8,1));
            if (iVar2 < 0) {
                arg1_00 = L"EmmcSwitchToDDR50: Failed to switch Bus Width, Status = %r\n";
                goto code_r0x00012dd3;
            }
            arg3 = 1;
            iVar2 = fcn.000127e8(arg1,uVar5,1);
            if (iVar2 < 0) {
                arg1_00 = L"EmmcSwitchToDDR50: Failed to switch Bus Timing, Status = %r\n";
                goto code_r0x00012dd3;
            }
            uVar1 = *(arg1 + 0x3e) & 0xfffc | 4;
        }
        iVar2 = 50000000;
code_r0x00012e0c:
        *(arg1 + 0x3e) = uVar1;
        iVar2 = fcn.00012984(arg1,iVar2,arg3,arg4);
        return iVar2;
    }
    fcn.000132c0(0x19940,arg2,arg3,arg4);
    iVar2 = fcn.000128c4(arg1,0);
    if (iVar2 < 0) {
        arg1_00 = L"EmmcSwitchToDefaultSpeed: Failed to switch Bus Width, Status = %r\n";
    }
    else {
        arg3 = 0;
        iVar2 = fcn.000127e8(arg1,uVar5,0);
        if (-1 < iVar2) {
            uVar1 = *(arg1 + 0x3e) & 0xfff8;
            iVar2 = 25000000;
            goto code_r0x00012e0c;
        }
        arg1_00 = L"EmmcSwitchToDefaultSpeed: Failed to switch Bus Timing, Status = %r\n";
    }
code_r0x00012dd3:
    fcn.000132c0(arg1_00,iVar2,arg3,arg4);
    return iVar2;
}


/* fcn.000125f8 @ 0x125f8 */

uchar fcn.000125f8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    char16_t *arg1_00;
    int64_t arg2_00;
    uchar uVar3;
    int64_t *arg3_00;
    int64_t arg3_01;
    int64_t arg4_00;
    int64_t iStackX_8;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    uVar3 = 0;
    iStackX_18 = arg3;
    if (arg1 == 0) {
        fcn.000132c0(0x15a90,arg2,arg3,arg4);
        iVar1 = -0x7ffffffffffffffe;
        arg3_00 = arg3;
code_r0x0001262c:
        fcn.000132c0(0x18b00,iVar1,arg3_00,arg4);
        return 0;
    }
    arg4 = &iStackX_8;
    arg3_00 = &iStackX_18;
    iVar1 = fcn.00011688(arg1,&iStackX_20,arg3_00,arg4);
    iVar2 = iStackX_18;
    if ((iVar1 < 0) || (iStackX_18 == 0)) goto code_r0x0001262c;
    fcn.000102a0(iStackX_18,8);
    arg2_00 = 0x1f;
    arg3_01 = 0x2000000;
    arg4_00 = 1;
    iVar1 = fcn.000124fc(arg2);
    if (iVar1 < 0) {
        arg1_00 = L"EmmcIsBlockWriteProtected: Failed to send write protect check\n";
    }
    else {
        if ((*(iVar2 + 7) & 3) == 0) goto code_r0x000126d2;
        arg1_00 = L"EmmcIsBlockWriteProtected: Tuning block is write protected\n";
    }
    fcn.000132c0(arg1_00,arg2_00,arg3_01,arg4_00);
    uVar3 = 1;
code_r0x000126d2:
    iVar2 = fcn.000117fc(arg1,arg2_00,iStackX_20,iStackX_8);
    if (iVar2 < 0) {
        fcn.000132c0(0x18ca0,arg2_00,iStackX_20,iStackX_8);
    }
    return uVar3;
}


/* fcn.00010ef0 @ 0x10ef0 */

char fcn.00010ef0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int64_t iVar2;
    int iVar3;
    int iVar4;
    char16_t *arg1_00;
    int64_t *arg2_00;
    uint64_t arg2_01;
    uint8_t uVar5;
    uint64_t arg3_00;
    int64_t **arg3_01;
    uint32_t arg4_00;
    uint64_t arg2_02;
    bool bVar6;
    int64_t *piStack_40;
    int64_t iStack_38;
    int64_t iStack_30;
    
    cVar1 = '\0';
    arg2_02 = arg3 & 0xff;
    if (arg1 == 0) {
        fcn.000132c0(0x15a90,arg2,arg3,arg4);
        arg2_00 = arg2;
        arg3_01 = arg3;
    }
    else {
        arg4 = &iStack_38;
        arg3_01 = &piStack_40;
        arg2_00 = &iStack_30;
        iVar2 = fcn.00011688(arg1,arg2_00,arg3_01,arg4);
        if ((-1 < iVar2) && (piStack_40 != NULL)) {
            arg3_00 = 0;
            do {
                arg2_01 = 0x200;
                fcn.000102a0(piStack_40,0x200);
                uVar5 = arg3_00;
                iVar3 = arg3_00;
                if (arg3 == '\0') {
                    if (uVar5 < 3) goto code_r0x00010fd7;
                }
                else {
                    iVar4 = arg2_02;
                    if (iVar4 == 1) {
code_r0x00010fbb:
                        bVar6 = uVar5 == 1;
                    }
                    else {
                        if (iVar4 != 2) {
                            if (iVar4 != 3) {
                                if ((iVar4 == 4) && ((iVar3 == 1 || (iVar3 == 3)))) goto code_r0x00010fd7;
                                goto code_r0x000110bd;
                            }
                            goto code_r0x00010fbb;
                        }
                        bVar6 = uVar5 < 2;
                    }
                    if (bVar6 || uVar5 == 2) {
code_r0x00010fd7:
                        arg2_01 = arg2_02;
                        fcn.000132c0(0x15310,arg2_02,arg3_00,arg4);
                        arg4_00 = piStack_40;
                        if (uVar5 == 0) {
                            arg4 = piStack_40;
                            cVar1 = fcn.00010a54(arg2,arg2_01,arg3_00,arg4_00);
                            if (cVar1 != '\0') goto code_r0x000110bd;
                            arg1_00 = L"EmmcTune: Failed to tune Tx Cmd lane\n";
                        }
                        else if (iVar3 == 1) {
                            arg4 = piStack_40;
                            cVar1 = fcn.00010b60(arg2,arg2_01,arg3_00,arg4_00);
                            if (cVar1 != '\0') goto code_r0x000110bd;
                            arg1_00 = L"EmmcTune: Failed to tune Tx Data lane\n";
                        }
                        else if (iVar3 == 2) {
                            arg4 = piStack_40;
                            cVar1 = fcn.00010cb8(arg2,arg2_01,arg3_00,arg4_00);
                            if (cVar1 != '\0') goto code_r0x000110bd;
                            arg1_00 = L"EmmcTune: Failed to tune Rx Cmd Data lane\n";
                        }
                        else if (iVar3 == 3) {
                            arg4 = piStack_40;
                            cVar1 = fcn.00010dc4(arg2,arg2_01,arg3_00,arg4_00);
                            if (cVar1 != '\0') goto code_r0x000110bd;
                            arg1_00 = L"EmmcTune: Failed to tune Rx Strobe lane\n";
                        }
                        else {
                            arg1_00 = L"EmmcTune: Invalid Parameter\n";
                        }
                        fcn.000132c0(arg1_00,arg2_01,arg3_00,arg4);
                        goto code_r0x000110e0;
                    }
                }
code_r0x000110bd:
                arg3_00 = uVar5 + 1;
                if (3 < uVar5 + 1) {
code_r0x000110e0:
                    fcn.000117fc(arg1,arg2_01,iStack_30,iStack_38);
                    return cVar1;
                }
            } while( true );
        }
    }
    fcn.000132c0(0x15290,arg2_00,arg3_01,arg4);
    return '\0';
}


/* fcn.00010570 @ 0x10570 */

int64_t fcn.00010570(int64_t arg1,int64_t arg2)

{
    fcn.00010510((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.00011874 @ 0x11874 */

ulong fcn.00011874(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    
    uVar1 = 0x8000000000000007;
    if ((arg1 & 1U) != 0) {
        uVar1 = 0x8000000000000012;
        fcn.000132c0(0x15f28,arg2,arg3,arg4);
    }
    if ((arg1 & 2U) != 0) {
        uVar1 = 0x800000000000001b;
        fcn.000132c0(0x15f58,arg2,arg3,arg4);
    }
    if ((arg1 & 4U) != 0) {
        fcn.000132c0(0x15f80,arg2,arg3,arg4);
    }
    if ((arg1 & 8U) != 0) {
        fcn.000132c0(0x15fb0,arg2,arg3,arg4);
    }
    if ((arg1 & 0x10U) != 0) {
        uVar1 = 0x8000000000000012;
        fcn.000132c0(0x15fd8,arg2,arg3,arg4);
    }
    if ((arg1 & 0x20U) != 0) {
        uVar1 = 0x800000000000001b;
        fcn.000132c0(0x16000,arg2,arg3,arg4);
    }
    if ((arg1 & 0x40U) != 0) {
        uVar1 = 0x800000000000001b;
        fcn.000132c0(0x16020,arg2,arg3,arg4);
    }
    if (arg1 < '\0') {
        fcn.000132c0(0x16048,arg2,arg3,arg4);
    }
    if ((arg1 & 0x100U) != 0) {
        fcn.000132c0(0x16070,arg2,arg3,arg4);
    }
    if ((arg1 & 0x200U) != 0) {
        fcn.000132c0(0x16098,arg2,arg3,arg4);
    }
    return uVar1;
}


/* fcn.00012160 @ 0x12160 */

ulong fcn.00012160(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint32_t uVar2;
    
    uVar2 = 1000;
    while( true ) {
        if ((*(arg1 + 0x32) & 0x13ff) != 0) {
            uVar1 = fcn.00011874(*(arg1 + 0x32),arg2,arg3,arg4);
            return uVar1;
        }
        if ((*(arg1 + 0x30) & 2) != 0) break;
        fcn.00010570(100,arg2);
        uVar2 = uVar2 - 1;
        if (uVar2 == 0) {
            return 0x8000000000000012;
        }
    }
    fcn.000132c0(0x18680,uVar2,arg3,arg4);
    *(arg1 + 0x30) = 2;
    return 0;
}


/* fcn.000121dc @ 0x121dc */

uint32_t * fcn.000121dc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint32_t *puVar3;
    char16_t *arg1_00;
    int16_t iVar4;
    int64_t arg2_00;
    uint64_t uVar5;
    uint16_t uVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t *arg3_00;
    int64_t arg3_01;
    uint32_t *arg3_02;
    uint32_t *arg4_00;
    uint64_t uVar9;
    uint32_t uVar10;
    uint64_t in_stack_00000028;
    uint32_t in_stack_00000030;
    int in_stack_00000038;
    uint32_t *in_stack_00000040;
    
    uVar10 = 1000;
    iVar7 = 1000;
    iVar4 = arg2;
    arg2_00 = arg2;
    arg3_01 = arg3;
    arg4_00 = arg4;
    while ((*(arg1 + 0x24) & 3) != 0) {
        fcn.00010570(100,arg2_00);
        iVar7 = iVar7 + -1;
        if (iVar7 == 0) {
            fcn.000132c0(0x18700,arg2_00,arg3_01,arg4_00);
            return 0x8000000000000007;
        }
    }
    *(arg1 + 0x30) = 0xffff;
    *(arg1 + 0x32) = 0xffff;
    uVar2 = 0;
    uVar8 = 1;
    if (in_stack_00000028 != 0) {
        uVar1 = 0x200;
        *arg1 = in_stack_00000028;
        if (in_stack_00000030 < 0x201) {
            uVar1 = in_stack_00000030;
        }
        else {
            uVar8 = in_stack_00000030 >> 9 & 0xffff;
        }
        arg4_00 = uVar8;
        *(arg1 + 4) = uVar1 | 0x7000;
        uVar2 = uVar8;
        *(arg1 + 6) = uVar2;
        fcn.000132c0(0x18750,in_stack_00000028 & 0xffffffff,uVar1 | 0x7000,arg4_00);
    }
    *(arg1 + 8) = arg3;
    uVar5 = *(arg1 + 0xc);
    fcn.000132c0(0x187e0,arg3 & 0xffffffff,uVar5,arg4_00);
    iVar7 = arg4;
    uVar1 = 0x10;
    arg3_00 = NULL;
    if (iVar7 != 1) {
        uVar1 = 0;
    }
    uVar6 = uVar1 | 1;
    if (iVar7 == 0) {
        uVar6 = uVar1;
    }
    if ((1 < uVar2) || (iVar4 == 8)) {
        uVar6 = uVar6 | 2;
    }
    fcn.000132c0(0x18830,uVar6,uVar5,arg4_00);
    *(arg1 + 0xc) = uVar6;
    if (in_stack_00000038 < 6) {
        if (3 < in_stack_00000038) {
            uVar2 = iVar4 << 8 | 2;
            goto code_r0x00012381;
        }
        if (in_stack_00000038 == 0) {
            uVar2 = iVar4 << 8;
            goto code_r0x00012381;
        }
        if (in_stack_00000038 != 1) {
            if (in_stack_00000038 != 2) {
                if (in_stack_00000038 != 3) {
                    return 0x8000000000000002;
                }
                uVar2 = iVar4 << 8 | 9;
                goto code_r0x00012381;
            }
            goto code_r0x00012369;
        }
    }
    else if (in_stack_00000038 != 6) {
        if (in_stack_00000038 == 7) {
code_r0x00012369:
            uVar2 = iVar4 << 8 | 0x1b;
            goto code_r0x00012381;
        }
        if (1 < in_stack_00000038 - 8U) {
            return 0x8000000000000002;
        }
    }
    uVar2 = iVar4 << 8 | 0x1a;
code_r0x00012381:
    uVar5 = arg2 & 0xffff;
    uVar1 = uVar2 | 0x20;
    if (iVar7 == 0) {
        uVar1 = uVar2;
    }
    arg3_02 = uVar1;
    fcn.000132c0(0x18850,uVar5,arg3_02,arg4_00);
    *(arg1 + 0xe) = uVar1;
    while( true ) {
        uVar2 = *(arg1 + 0x32);
        if ((uVar2 & 0x13ff) != 0) {
            uVar5 = uVar2;
            fcn.000132c0(0x185a0,uVar5,arg3_02,arg4_00);
            arg3_00 = fcn.00011874(uVar2,uVar5,arg3_02,arg4_00);
            goto code_r0x000124ea;
        }
        if ((*(arg1 + 0x30) & 1) != 0) break;
        fcn.00010570(100,uVar5);
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
            arg3_00 = 0x8000000000000012;
code_r0x000124ea:
            if (arg3_00 < 0) {
                arg1_00 = L"Command not complete! Status = %r\n";
            }
            else {
code_r0x000123fd:
                arg4_00 = in_stack_00000040;
                if (in_stack_00000038 != 0) {
                    arg3_02 = arg1 + 0x10;
                    uVar5 = 4;
                    if (in_stack_00000038 != 3) {
                        uVar5 = 1;
                    }
                    puVar3 = in_stack_00000040;
                    uVar9 = uVar5;
                    do {
                        uVar10 = *arg3_02;
                        arg3_02 = arg3_02 + 1;
                        *puVar3 = uVar10;
                        puVar3 = puVar3 + 1;
                        uVar9 = uVar9 - 1;
                    } while (uVar9 != 0);
                    if (in_stack_00000038 == 3) {
                        arg3_02 = 0x1;
                        uVar9 = uVar5;
                        do {
                            uVar10 = *arg4_00;
                            *arg4_00 = uVar10 << 8 | arg3_02;
                            arg4_00 = arg4_00 + 1;
                            arg3_02 = uVar10 >> 0x18;
                            uVar9 = uVar9 - 1;
                            uVar5 = 0;
                        } while (uVar9 != 0);
                    }
                }
                if ((in_stack_00000038 == 2) || (in_stack_00000038 == 7)) {
                    arg3_00 = fcn.00012160(arg1,uVar5,arg3_02,arg4_00);
                    uVar5 = *in_stack_00000040;
                    arg3_02 = arg3_00;
                    fcn.000132c0(0x188f0,uVar5,arg3_00,arg4_00);
                    if (arg3_00 < 0) {
                        return arg3_00;
                    }
                }
                if (in_stack_00000028 == 0) {
                    return arg3_00;
                }
                arg3_00 = fcn.00012160(arg1,uVar5,arg3_02,arg4_00);
                if (-1 < arg3_00) {
                    return arg3_00;
                }
                arg1_00 = L"Transfer not complete! Status = %r\n";
            }
            fcn.000132c0(arg1_00,arg3_00,arg3_02,arg4_00);
            return arg3_00;
        }
    }
    uVar5 = uVar10;
    fcn.000132c0(0x18600,uVar5,arg3_02,arg4_00);
    *(arg1 + 0x30) = 1;
    goto code_r0x000123fd;
}


/* fcn.000128c4 @ 0x128c4 */

int64_t fcn.000128c4(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    int64_t arg1_00;
    uint32_t uVar1;
    uint64_t arg3;
    int64_t arg4;
    uint32_t uStackX_10;
    
    uVar1 = uStackX_10 & 0xffff02ff | 0x200;
    if (arg2 != '\0') {
        uVar1 = uVar1 ^ ((uStackX_10 & 0xffff0200 | 0x200) + 0x400 ^ uVar1) & 0xff00;
    }
    arg3 = uVar1 & 0xffb7fff8 | 0x3b70000;
    arg1_00 = 6;
    arg4 = 0;
    arg2_00 = fcn.000124fc(arg1);
    if (-1 < arg2_00) {
        arg2_00 = fcn.0001259c(arg1,arg1_00);
        if (arg2_00 < 0) {
            fcn.000132c0(0x18f30,arg2_00,arg3,arg4);
        }
        else {
            arg2_00 = 0;
        }
        if (-1 < arg2_00) {
            *(arg1 + 0x28) = *(arg1 + 0x28) & 0xfffffffd | 0x20;
            arg2_00 = 0;
        }
    }
    return arg2_00;
}


/* fcn.000127e8 @ 0x127e8 */

ulong fcn.000127e8(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    ulong uVar1;
    
    if ((((arg3 == 0) || (arg3 == 1)) || (arg3 == 2)) || (arg3 == 3)) {
        uVar1 = fcn.000124fc(arg1);
    }
    else {
        uVar1 = 0x8000000000000002;
    }
    return uVar1;
}


/* fcn.00012aac @ 0x12aac */

int64_t fcn.00012aac(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char16_t *arg1_00;
    int64_t in_R8;
    int64_t in_R9;
    
    iVar1 = fcn.000128c4(arg1,0);
    if (iVar1 < 0) {
        arg1_00 = L"EmmcSwitchToHs200: Failed to switch Bus Width, Status = %r\n";
    }
    else {
        in_R8 = 2;
        iVar1 = fcn.000127e8(arg1,arg2,2);
        if (-1 < iVar1) {
            *(arg1 + 0x3e) = *(arg1 + 0x3e) & 0xfffb | 3;
            iVar1 = fcn.00012984(arg1,200000000,in_R8,in_R9);
            return iVar1;
        }
        arg1_00 = L"EmmcSwitchToHs200: Failed to switch Bus Timing, Status = %r\n";
    }
    fcn.000132c0(arg1_00,iVar1,in_R8,in_R9);
    return iVar1;
}


/* fcn.00012b38 @ 0x12b38 */

int64_t fcn.00012b38(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char16_t *arg1_00;
    ulong uVar2;
    int64_t in_R8;
    int64_t in_R9;
    
    iVar1 = fcn.00012aac(arg1,arg2);
    if (iVar1 < 0) {
        arg1_00 = L"EmmcSwitchToHs400: Failed to switch to HS200, Status = %r\n";
    }
    else {
        in_R8 = 1;
        iVar1 = fcn.000127e8(arg1,arg2,1);
        if (iVar1 < 0) {
            arg1_00 = L"EmmcSwitchToHs400: Failed to switch Bus Timing to HighSpeed, Status = %r\n";
        }
        else {
            uVar2 = 50000000;
            iVar1 = fcn.00012984(arg1,50000000,in_R8,in_R9);
            if (iVar1 < 0) {
                arg1_00 = L"EmmcSwitchToHs400: Failed to set clock frequency to DDR50, Status = %r\n";
            }
            else {
                *(arg1 + 0x3e) = *(arg1 + 0x3e) & 0xfffa | 2;
                iVar1 = fcn.000128c4(arg1,CONCAT71(uVar2 >> 8,1));
                if (iVar1 < 0) {
                    arg1_00 = L"EmmcSwitchToHs400: Failed to switch Bus Width, Status = %r\n";
                }
                else {
                    in_R8 = 3;
                    iVar1 = fcn.000127e8(arg1,arg2,3);
                    if (-1 < iVar1) {
                        *(arg1 + 0x3e) = *(arg1 + 0x3e) & 0xfffd | 5;
                        iVar1 = fcn.00012984(arg1,200000000,in_R8,in_R9);
                        return iVar1;
                    }
                    arg1_00 = L"EmmcSwitchToHs400: Failed to switch Bus Timing, Status = %r\n";
                }
            }
        }
    }
    fcn.000132c0(arg1_00,iVar1,in_R8,in_R9);
    return iVar1;
}


/* fcn.000126fc @ 0x126fc */

int64_t fcn.000126fc(int64_t arg1)

{
    int64_t iVar1;
    uint8_t *puVar2;
    uint8_t uVar3;
    uint64_t arg2;
    int64_t arg3;
    int64_t arg4;
    uint8_t uStack_18;
    uint8_t uStack_17;
    uint32_t uStack_16;
    uint8_t uStack_12;
    uint8_t auStack_11 [6];
    uint16_t uStack_b;
    uint8_t uStack_9;
    
    fcn.000102a0(&uStack_18,0x10);
    arg2 = 0;
    arg4 = 0;
    arg3 = 0;
    iVar1 = fcn.000124fc(arg1);
    if (-1 < iVar1) {
        fcn.000132c0(0x18d30,uStack_18,arg3,arg4);
        fcn.000132c0(0x18d88,uStack_17,arg3,arg4);
        fcn.000132c0(0x18da8,uStack_16,arg3,arg4);
        fcn.000132c0(0x18dc8,uStack_12,arg3,arg4);
        puVar2 = auStack_11;
        do {
            fcn.000132c0(0x18de8,arg2,*puVar2,arg4);
            uVar3 = arg2 + 1;
            arg2 = uVar3;
            puVar2 = puVar2 + 1;
        } while (uVar3 < 6);
        fcn.000132c0(0x18e10,uStack_b,uStack_9,arg4);
    }
    return iVar1;
}


/* fcn.00011984 @ 0x11984 */

ulong fcn.00011984(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    fcn.000132c0(0x160b0,arg2,arg3,arg4);
    fcn.000132c0(0x160f0,*arg1 >> 1 & 0x7f,arg3,arg4);
    fcn.000132c0(0x16160,*arg1 >> 8 & 3,arg3,arg4);
    fcn.000132c0(0x161d0,*arg1 >> 10 & 3,arg3,arg4);
    fcn.000132c0(0x16240,*arg1 >> 0xc & 1,arg3,arg4);
    fcn.000132c0(0x162b0,*arg1 >> 0xd & 1,arg3,arg4);
    fcn.000132c0(0x16320,*arg1 >> 0xe & 1,arg3,arg4);
    fcn.000132c0(0x16390,*arg1 >> 0xf & 1,arg3,arg4);
    fcn.000132c0(0x16400,*(arg1 + 2) & 1,arg3,arg4);
    fcn.000132c0(0x16470,*arg1 >> 0x15 & 1,arg3,arg4);
    fcn.000132c0(0x164e0,*arg1 >> 0x16 & 0xf,arg3,arg4);
    fcn.000132c0(0x16550,*arg1 >> 0x1a & 7,arg3,arg4);
    fcn.000132c0(0x165c0,*arg1 >> 0x1d & 3,arg3,arg4);
    fcn.000132c0(0x16630,*arg1 >> 0x1f,arg3,arg4);
    fcn.000132c0(0x166a0,*(arg1 + 4) & 0x1f,arg3,arg4);
    fcn.000132c0(0x16710,*(arg1 + 4) >> 5 & 0x1f,arg3,arg4);
    fcn.000132c0(0x16780,*(arg1 + 4) >> 10 & 0x1f,arg3,arg4);
    fcn.000132c0(0x167f0,*(arg1 + 4) >> 0xf & 7,arg3,arg4);
    fcn.000132c0(0x16860,*(arg1 + 4) >> 0x12 & 7,arg3,arg4);
    fcn.000132c0(0x168d0,*(arg1 + 4) >> 0x15 & 7,arg3,arg4);
    fcn.000132c0(0x16940,*(arg1 + 7) & 7,arg3,arg4);
    fcn.000132c0(0x169b0,*(arg1 + 4) >> 0x1b & 7,arg3,arg4);
    fcn.000132c0(0x16a20,*(arg1 + 4) >> 0x1e,arg3,arg4);
    fcn.000132c0(0x16a90,*(arg1 + 8) & 0x3ff,arg3,arg4);
    fcn.000132c0(0x16b00,*(arg1 + 8) >> 0xc & 1,arg3,arg4);
    fcn.000132c0(0x16b70,*(arg1 + 8) >> 0xd & 1,arg3,arg4);
    fcn.000132c0(0x16be0,*(arg1 + 8) >> 0xe & 1,arg3,arg4);
    fcn.000132c0(0x16c50,*(arg1 + 8) >> 0xf & 1,arg3,arg4);
    fcn.000132c0(0x16cc0,*(arg1 + 10) & 0xf,arg3,arg4);
    fcn.000132c0(0x16d30,*(arg1 + 8) >> 0x14,arg3,arg4);
    fcn.000132c0(0x16da0,*(arg1 + 0xc),arg3,arg4);
    fcn.000132c0(0x16e10,*(arg1 + 0xd),arg3,arg4);
    fcn.000132c0(0x16e80,*(arg1 + 0xe),arg3,arg4);
    fcn.000132c0(0x16ef0,*(arg1 + 0xc) >> 0x1a & 0xf,arg3,arg4);
    fcn.000132c0(0x16f60,*(arg1 + 0xc) >> 0x1e,arg3,arg4);
    return 0;
}


/* fcn.00011c3c @ 0x11c3c */

ulong fcn.00011c3c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint64_t uVar2;
    
    fcn.000132c0(0x16fd0,arg2,arg3,arg4);
    fcn.000132c0(0x17010,*(arg1 + 0xbf),arg3,arg4);
    fcn.000132c0(0x17070,*(arg1 + 0x1f7),arg3,arg4);
    fcn.000132c0(0x170d0,*(arg1 + 0x1f6),arg3,arg4);
    fcn.000132c0(0x17130,*(arg1 + 0xf6),arg3,arg4);
    fcn.000132c0(0x17190,*(arg1 + 0xf2),arg3,arg4);
    fcn.000132c0(0x171f0,*(arg1 + 0xf1),arg3,arg4);
    fcn.000132c0(0x17250,*(arg1 + 0xe8),arg3,arg4);
    fcn.000132c0(0x172b0,*(arg1 + 0xe7),arg3,arg4);
    fcn.000132c0(0x17310,*(arg1 + 0xe6),arg3,arg4);
    fcn.000132c0(0x17370,*(arg1 + 0xe5),arg3,arg4);
    fcn.000132c0(0x173d0,*(arg1 + 0xe4),arg3,arg4);
    fcn.000132c0(0x17430,*(arg1 + 0xe2),arg3,arg4);
    fcn.000132c0(0x17490,*(arg1 + 0xe1),arg3,arg4);
    fcn.000132c0(0x174f0,*(arg1 + 0xe0),arg3,arg4);
    fcn.000132c0(0x17550,*(arg1 + 0xdf),arg3,arg4);
    fcn.000132c0(0x175b0,*(arg1 + 0xde),arg3,arg4);
    fcn.000132c0(0x17610,*(arg1 + 0xdd),arg3,arg4);
    fcn.000132c0(0x17670,*(arg1 + 0xd9),arg3,arg4);
    fcn.000132c0(0x176d0,*(arg1 + 0xd4),arg3,arg4);
    fcn.000132c0(0x17730,*(arg1 + 199),arg3,arg4);
    fcn.000132c0(0x17790,*(arg1 + 0xc6),arg3,arg4);
    fcn.000132c0(0x177f0,*(arg1 + 0xc5),arg3,arg4);
    fcn.000132c0(0x17850,*(arg1 + 0xc4),arg3,arg4);
    fcn.000132c0(0x178b0,*(arg1 + 0xc2),arg3,arg4);
    fcn.000132c0(0x17910,*(arg1 + 0xc0),arg3,arg4);
    fcn.000132c0(0x17970,*(arg1 + 0xbf),arg3,arg4);
    fcn.000132c0(0x179d0,*(arg1 + 0xbd),arg3,arg4);
    fcn.000132c0(0x17a30,*(arg1 + 0xbb),arg3,arg4);
    fcn.000132c0(0x17a90,*(arg1 + 0xb9),arg3,arg4);
    fcn.000132c0(0x17af0,*(arg1 + 0xb7),arg3,arg4);
    fcn.000132c0(0x17b50,*(arg1 + 0xb5),arg3,arg4);
    fcn.000132c0(0x17bb0,*(arg1 + 0xb3),arg3,arg4);
    fcn.000132c0(0x17c10,*(arg1 + 0xb2),arg3,arg4);
    fcn.000132c0(0x17c70,*(arg1 + 0xb1),arg3,arg4);
    fcn.000132c0(0x17cd0,*(arg1 + 0xaf),arg3,arg4);
    fcn.000132c0(0x17d30,*(arg1 + 0xae),arg3,arg4);
    fcn.000132c0(0x17d90,*(arg1 + 0xad),arg3,arg4);
    fcn.000132c0(0x17df0,*(arg1 + 0xab),arg3,arg4);
    fcn.000132c0(0x17e50,*(arg1 + 0xa9),arg3,arg4);
    fcn.000132c0(0x17eb0,*(arg1 + 0xa8),arg3,arg4);
    fcn.000132c0(0x17f10,*(arg1 + 0xa2),arg3,arg4);
    fcn.000132c0(0x17f70,*(arg1 + 0xa0),arg3,arg4);
    uVar2 = *(arg1 + 0x9d);
    uVar1 = *(arg1 + 0x9e);
    fcn.000132c0(0x17fd0,*(arg1 + 0x9f),uVar1,uVar2);
    fcn.000132c0(0x18050,*(arg1 + 0x9c),uVar1,uVar2);
    fcn.000132c0(0x180b0,*(arg1 + 0x9b),uVar1,uVar2);
    fcn.000132c0(0x18110,*(arg1 + 0x91),*(arg1 + 0x90),*(arg1 + 0x8f));
    fcn.000132c0(0x18190,*(arg1 + 0x94),*(arg1 + 0x93),*(arg1 + 0x92));
    fcn.000132c0(0x18210,*(arg1 + 0x97),*(arg1 + 0x96),*(arg1 + 0x95));
    fcn.000132c0(0x18290,*(arg1 + 0x9a),*(arg1 + 0x99),*(arg1 + 0x98));
    uVar2 = *(arg1 + 0x8c);
    uVar1 = *(arg1 + 0x8d);
    fcn.000132c0(0x18310,*(arg1 + 0x8e),uVar1,uVar2);
    fcn.000132c0(0x18390,*(arg1 + 0x88),uVar1,uVar2);
    fcn.000132c0(0x183f0,*(arg1 + 0x86),uVar1,uVar2);
    fcn.000132c0(0x18450,*(arg1 + 0x3f),uVar1,uVar2);
    fcn.000132c0(0x184b0,*(arg1 + 0x3e),uVar1,uVar2);
    fcn.000132c0(0x18510,*(arg1 + 0x3d),uVar1,uVar2);
    return 0;
}


/* fcn.000131b4 @ 0x131b4 */

uint64_t fcn.000131b4(uint32_t arg1)

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


/* fcn.000131e0 @ 0x131e0 */

uint64_t fcn.000131e0(uint32_t arg1)

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


/* fcn.00014050 @ 0x14050 */

void fcn.00014050(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00013324(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.000132f0 @ 0x132f0 */

uchar * fcn.000132f0(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


