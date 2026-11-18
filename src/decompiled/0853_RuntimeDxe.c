// decompiled by r2ghidra: 0853_RuntimeDxe.pe32
// functions: 26

/* entry0 @ 0x11164 */

int64_t entry0(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t in_RDX;
    int64_t aiStackX_18 [2];
    
    fcn.00011208(arg1,in_RDX);
    (**(*0x13978 + 0x98))(arg1,0x13000,aiStackX_18);
    iVar2 = *0x13978;
    *0x13b60 = *(aiStackX_18[0] + 0x40);
    *(*0x13978 + 0x158) = fcn.00011768;
    iVar1 = *0x13980;
    *(*0x13980 + 0x38) = 0x11504;
    *(iVar1 + 0x40) = fcn.00011478;
    iVar2 = (**(iVar2 + 0x148))(0x13960,0x13020,0x13070,0);
    if (iVar2 < 0) {
        fcn.00011408();
    }
    return iVar2;
}


/* fcn.00011208 @ 0x11208 */

void fcn.00011208(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x13980 = *(arg1 + 0x58);
    *0x13978 = *(arg1 + 0x60);
    *0x13970 = arg1;
    *0x13988 = *0x13980;
    *0x139a0 = *0x13978;
    (**(*0x13978 + 0x50))(0x201,8,0x117d0,0,0x13990);
    (**(*0x139a0 + 0x50))(0x60000202,8,0x117dc,0,0x13998);
    fcn.00011804();
    puVar4 = fcn.00011804();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000112c1:
            if (puVar4 == NULL) {
                uVar5 = fcn.00011160();
                fcn.00011150();
                uVar2 = in(0x1808);
                fcn.000110d0(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x000110c0();
                }
                fcn.000110d0(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00011150();
                }
                else {
                    fcn.00011140();
                }
code_r0x0001132a:
                *0x13b50 = *0x13980;
                (**(*0x13978 + 0x50))(0x60000202,0x10,0x11874,0,0x13b48);
                (**(*0x13978 + 0x50))(0x201,0x10,0x11870,0,0x13b58);
                fcn.00011888();
                (**(*0x13978 + 0x170))(0x200,0x10,0x118e8,0,0x13050,0x13b38);
                (**(*0x13978 + 0x170))(0x200,0x10,0x11910,0,0x13040,0x13b40);
                return;
            }
            if ((*0x130c0 == *(puVar4 + 4)) && (*0x130c8 == *(puVar4 + 8))) goto code_r0x0001132a;
        }
        else if (uVar1 == 4) goto code_r0x000112c1;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00011408 @ 0x11408 */

void fcn.00011408(void)

{
    (**(*0x13978 + 0x70))(*0x13b38);
    (**(*0x13978 + 0x70))(*0x13b40);
    (**(*0x13978 + 0x70))(*0x13b48);
    (**(*0x13978 + 0x70))(*0x13b58);
    (**(*0x139a0 + 0x70))(*0x13990);
    //WARNING: Could not recover jumptable at 0x00011473. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x139a0 + 0x70))(*0x13998);
    return;
}


/* fcn.00011804 @ 0x11804 */

int64_t fcn.00011804(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x139b0 == 0) {
        *0x139b0 = 0;
        if (*(*0x13970 + 0x68) != 0) {
            piVar2 = *(*0x13970 + 0x70);
            do {
                if ((*0x13030 == *piVar2) && (*0x13038 == piVar2[1])) {
                    *0x139b0 = (*(*0x13970 + 0x70))[uVar1 * 3 + 2];
                    return *0x139b0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x13970 + 0x68));
        }
    }
    return *0x139b0;
}


/* fcn.00011160 @ 0x11160 */

uint64_t fcn.00011160(void)

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


/* fcn.00011150 @ 0x11150 */

void fcn.00011150(void)

{
    return;
}


/* fcn.000110d0 @ 0x110d0 */

uint64_t fcn.000110d0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000110c2 @ 0x110c2 */

void fcn.000110c2(void)

{
    return;
}


/* fcn.00011140 @ 0x11140 */

void fcn.00011140(void)

{
    return;
}


/* fcn.00011888 @ 0x11888 */

void fcn.00011888(void)

{
    int64_t iVar1;
    
    if ((((*0x139c0 == 0) && (*0x139b8 == '\0')) && (*0x13978 != 0)) && (*(*0x13978 + 0x140) != NULL)) {
        iVar1 = (**(*0x13978 + 0x140))(0x13010,0,0x139c0);
        if (iVar1 < 0) {
            *0x139c0 = 0;
        }
    }
    return;
}


/* fcn.00011928 @ 0x11928 */

ulong fcn.00011928(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    
    fcn.00011888();
    if (*0x139c0 == NULL) {
        uVar1 = 0x8000000000000003;
    }
    else {
        uVar1 = (***0x139c0)(1,arg1 & 0xffffffff,0,0x13060,0);
    }
    return uVar1;
}


/* fcn.00011478 @ 0x11478 */

uint64_t fcn.00011478(int64_t arg1,uint32_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint in_register_00000014;
    uint64_t uVar3;
    
    if (CONCAT44(in_register_00000014,arg2) == 0) {
        return 0x8000000000000002;
    }
    if (*CONCAT44(in_register_00000014,arg2) == 0) {
        return ~-((arg1 & 1U) != 0) & 0x8000000000000002;
    }
    uVar3 = 0;
    iVar2 = *0x13968;
    if (*0x13b70 != 0) {
        do {
            if (((*(iVar2 + 0x20) < 0) && (uVar1 = *(iVar2 + 8), uVar1 <= *CONCAT44(in_register_00000014,arg2))) &&
               (*CONCAT44(in_register_00000014,arg2) < *(iVar2 + 0x18) * 0x1000 + uVar1)) {
                *CONCAT44(in_register_00000014,arg2) =
                     *CONCAT44(in_register_00000014,arg2) + (*(iVar2 + 0x10) - uVar1);
                return 0;
            }
            iVar2 = iVar2 + *0x13b68;
            uVar3 = uVar3 + 1;
        } while (uVar3 < *0x13b70);
    }
    return 0x800000000000000e;
}


/* fcn.0001196c @ 0x1196c */

void fcn.0001196c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    uint32_t *puVar2;
    uint16_t uVar3;
    int16_t iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint64_t uVar11;
    int64_t *piVar12;
    int64_t *piVar13;
    int *piVar14;
    
    if (((arg4 != 0) && (arg1 != 0)) && (arg2 != 0)) {
        arg2 = arg2 - arg1;
        if (*arg1 == 0x5a4d) {
            piVar14 = *(arg1 + 0x3c) + arg1;
        }
        else {
            piVar14 = arg1;
        }
        if (*piVar14 == 0x4550) {
            if (piVar14[6] == 0x10b) {
                uVar5 = piVar14[0x1d];
                iVar6 = 0xa0;
            }
            else {
                uVar5 = piVar14[0x21];
                iVar6 = 0xb0;
            }
            if (((5 < uVar5) && (puVar1 = iVar6 + piVar14, puVar1 != NULL)) && (puVar1[1] != 0)) {
                uVar5 = *puVar1;
                if (uVar5 < arg3) {
                    puVar7 = uVar5 + arg1;
                }
                else {
                    puVar7 = NULL;
                }
                uVar5 = uVar5 + (puVar1[1] - 1);
                if (uVar5 < arg3) {
                    puVar9 = uVar5 + arg1;
                }
                else {
                    puVar9 = NULL;
                }
                if (((puVar7 != NULL) && (puVar9 != NULL)) &&
                   ((puVar7 <= puVar9 && ((arg2 != 0 && (puVar8 = puVar7, puVar7 < puVar9)))))) {
                    while( true ) {
                        uVar5 = puVar8[1];
                        if ((uVar5 == 0) || (puVar1[1] < uVar5)) break;
                        puVar2 = puVar8 + uVar5;
                        puVar10 = puVar8 + 2;
                        if (puVar1[1] + puVar7 < puVar2) {
                            return;
                        }
                        if (arg3 <= *puVar8) {
                            return;
                        }
                        if (*puVar8 + arg1 == 0) {
                            return;
                        }
                        for (; puVar10 < puVar2; puVar10 = puVar10 + 2) {
                            uVar11 = (*puVar10 & 0xfff) + *puVar8;
                            if (arg3 <= uVar11) {
                                return;
                            }
                            piVar12 = uVar11 + arg1;
                            if (piVar12 == NULL) {
                                return;
                            }
                            uVar3 = *puVar10 >> 0xc;
                            if (uVar3 != 0) {
                                if (uVar3 == 1) {
                                    if (*arg4 == *piVar12) {
                                        iVar4 = (arg2 >> 0x10) + *piVar12;
code_r0x00011b49:
                                        *piVar12 = iVar4;
                                    }
                                }
                                else {
                                    if (uVar3 != 2) {
                                        if (uVar3 == 3) {
                                            piVar14 = arg4 + (-arg4 & 3);
                                            if (*piVar14 == *piVar12) {
                                                *piVar12 = *piVar12 + arg2;
                                            }
                                            arg4 = piVar14 + 1;
                                        }
                                        else {
                                            if (uVar3 != 10) {
                                                return;
                                            }
                                            piVar13 = arg4 + (-arg4 & 7);
                                            if (*piVar13 == *piVar12) {
                                                *piVar12 = *piVar12 + arg2;
                                            }
                                            arg4 = piVar13 + 1;
                                        }
                                        goto code_r0x00011b51;
                                    }
                                    if (*arg4 == *piVar12) {
                                        iVar4 = *piVar12 + arg2;
                                        goto code_r0x00011b49;
                                    }
                                }
                                arg4 = arg4 + 2;
                            }
code_r0x00011b51:
                        }
                        puVar8 = puVar2;
                        if (puVar9 <= puVar2) {
                            return;
                        }
                    }
                }
            }
        }
    }
    return;
}


/* fcn.00011768 @ 0x11768 */

ulong fcn.00011768(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t *puVar1;
    ulong uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    
    uVar5 = 0;
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar4 = 0xffffffff;
        uVar3 = 0xffffffff;
        if (arg2 != 0) {
            do {
                puVar1 = uVar5 + arg1;
                uVar5 = uVar5 + 1;
                uVar3 = *((*puVar1 ^ uVar4 & 0xff) * 4 + 0x130d0) ^ uVar4 >> 8;
                uVar4 = uVar3;
            } while (uVar5 < arg2);
        }
        uVar2 = 0;
        *arg3 = ~uVar3;
    }
    return uVar2;
}


/* fcn.00011b84 @ 0x11b84 */

//WARNING: Type propagation algorithm not settling

void fcn.00011b84(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    char cVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint uStackY_108;
    int64_t in_stack_ffffffffffffff28;
    int8_t in_stack_ffffffffffffff30;
    
    fcn.00011c54(&uStackY_108,0x100,0,arg1,in_stack_ffffffffffffff28,in_stack_ffffffffffffff30);
    uVar3 = fcn.00011160();
    fcn.00011150();
    out(0x72,3);
    cVar2 = in(0x73);
    if ((uVar3 >> 9 & 1) != 0) {
        fcn.00011140();
    }
    if ((cVar2 == '\x01') && (uVar3 = 0, uStackY_108 != '\0')) {
        do {
            uVar4 = uVar3 + 1;
            uVar1 = uVar3 + 1;
            uVar3 = uVar4;
        } while (*(&uStackY_108 + uVar1) != '\0');
        if (uVar4 != 0) {
            fcn.000129f4(&uStackY_108,uVar4 & 0xffff);
        }
    }
    return;
}


/* fcn.00011c54 @ 0x11c54 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00011c54(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x00011caf;
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
code_r0x00011caf:
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
        uVar5 = fcn.000129d0(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        iVar13 = 1;
        uStack_90 = 0xff;
    }
    else {
        uVar5 = fcn.000129a4(arg4);
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
            pcVar9 = 0x13574;
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
code_r0x00012039:
                puVar22 = arg4 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puVar22[1] << 8;
                }
                uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                if (uStack_a8 == 10) {
                    pcVar9 = 0x13574;
                }
                else {
                    pcVar9 = 0x13578;
                    puVar22 = arg4;
                }
            }
            else {
                puStackX_20 = arg4;
                if (uStack_a8 == 0x25) {
                    puVar14 = puStack_b0;
                    puVar19 = in_stack_00000028;
code_r0x00011df8:
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
                            goto code_r0x00011f9b;
                        }
                        if (uStack_a8 == 0x30) {
                            if ((uVar5 & 0x800) == 0) {
                                uVar5 = uVar5 | 0x20;
                                uStackX_18 = uVar5;
                            }
                        }
                        else {
                            if (uStack_a8 < 0x31) goto code_r0x00011fb2;
                            if (0x39 < uStack_a8) {
                                if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                    uVar5 = uVar5 | 0x10;
                                    goto code_r0x00011f9b;
                                }
                                goto code_r0x00011fb2;
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
code_r0x00011f9b:
                        arg4 = puStackX_20;
                        uStackX_18 = uVar5;
                        goto code_r0x00011df8;
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
                                goto code_r0x00011df8;
                            }
                            if (uStack_a8 == 0x2b) {
                                uVar5 = uVar5 | 2;
                            }
                            else {
                                if (uStack_a8 != 0x2c) goto code_r0x00011fb2;
                                uVar5 = uVar5 | 8;
                            }
                        }
                        goto code_r0x00011f9b;
                    }
                    uVar18 = 0;
                    uStack_b8 = 0;
                    puStackX_20 = arg4;
code_r0x00011fb2:
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
                                fcn.00012980(&var_68h_2,0x26,0,0x13508);
                                pcVar9 = &var_68h_2;
                                uVar6 = uStack_c0;
                                cVar15 = cStack0000000000000030;
                            }
                            uVar18 = uStack_b8;
                        }
                        else {
                            if (uStack_a8 != 10) {
                                arg4 = puStackX_20;
                                if (uStack_a8 == 0xd) goto code_r0x00012039;
                                if (uStack_a8 == 0x53) goto code_r0x00012248;
                                if (uStack_a8 == 0x58) goto code_r0x0001233e;
                                if (uStack_a8 == 0x61) goto code_r0x00012251;
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
                                    goto code_r0x00011ddd;
                                }
                                if (uStack_a8 != 100) goto code_r0x00011dd9;
                                goto code_r0x00012355;
                            }
                            puVar22 = puStackX_20 + var_78h;
                            pcVar9 = 0x13574;
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
                        goto code_r0x00012550;
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
                                    iVar13 = 0x1360b;
                                    goto code_r0x00012305;
                                }
                            }
                            else if (uVar11 < 6) {
                                iVar13 = uVar11 * 0x19;
                                pcVar9 = "Success";
code_r0x00012305:
                                pcVar9 = pcVar9 + iVar13;
                                if (pcVar9 != &var_68h_2) goto code_r0x00012550;
                            }
                            fcn.00012980(&var_68h_2,0x26,0,0x1356c);
                        }
                        else {
                            if (uStack_a8 == 0x73) {
code_r0x00012248:
                                uVar5 = uVar5 | 0x400;
                                uStackX_18 = uVar5;
code_r0x00012251:
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
                                goto code_r0x00012550;
                            }
                            if (uStack_a8 != 0x74) {
                                if (uStack_a8 != 0x75) {
                                    if (uStack_a8 != 0x78) goto code_r0x00011dd9;
                                    goto code_r0x00012342;
                                }
                                goto code_r0x00012347;
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
                                goto code_r0x00012550;
                            }
                            fcn.00012980(&var_68h_2,0x26,0,0x13550);
                            pcVar9 = &var_68h_2;
                        }
                        uVar6 = uStack_c0;
                        goto code_r0x00012550;
                    }
                    uVar5 = uVar5 & 0xffffffffffffffd9 | 0x10;
code_r0x0001233e:
                    uVar5 = uVar5 | 0x20;
code_r0x00012342:
                    uVar5 = uVar5 | 0x80;
code_r0x00012347:
                    if (-1 < uVar5) {
                        uVar5 = uVar5 & 0xfffffffffffffffd | 0x4000;
                    }
code_r0x00012355:
                    if ((uVar5 & 0x10) == 0) {
                        if (puVar14 != NULL) {
                            uVar6 = *puVar14;
                            goto code_r0x00012397;
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
code_r0x00012397:
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
code_r0x0001241f:
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
                            if ((uVar5 & 0x4010) == 0x4000) goto code_r0x0001241f;
                        }
                    }
                    var_68h_2._0_1_ = 0;
                    piVar21 = &var_68h_2;
                    uVar11 = uVar6;
                    do {
                        uVar7 = uVar11 / uVar17;
                        piVar21 = piVar21 + 1;
                        *piVar21 = "0123456789ABCDEF\b\x04\x02"[uVar11 % uVar17];
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
code_r0x00011dd9:
                    pcVar9 = &uStack_a8;
code_r0x00011ddd:
                    uVar5 = uVar5 | 0x400;
                    uStackX_18 = uVar5;
                    puVar22 = puStackX_20;
                }
            }
        }
code_r0x00012550:
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
                arg1 = fcn.00011c20(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        uVar7 = uVar20;
        if (cVar15 == '\0') {
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00011c20(arg1,pcVar16,uVar18 - uVar6,(uVar17 & 0x2000) + 0x20);
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
                arg1 = fcn.00011c20(arg1,pcStack_d8,uVar18 - uVar6,(uVar17 & 0x2000) + 0x30);
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
                arg1 = fcn.00011c20(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
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


/* fcn.000129f4 @ 0x129f4 */

ulong fcn.000129f4(uint32_t *arg1,int64_t arg2)

{
    ulong uVar1;
    uint uStack_108;
    uint uStack_104;
    uchar auStack_f8 [12];
    uint32_t uStack_ec;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_88;
    uchar auStack_78 [32];
    uint32_t var_50h;
    int64_t var_40h;
    
    if (((*0xfe1000e8 == 0xff) || ((*0xfe1000e8 & 1) == 0)) || (1 < (*0xfe1000e8 >> 1 & 3) - 2)) {
        uVar1 = 0x8000000000000015;
    }
    else {
        uStack_108 = 0x48;
        uStack_104 = 0xe;
        fcn.00012c0c(auStack_78);
        if (&stack0x00000000 != 0xf8) {
            fcn.00012c60(auStack_78,auStack_f8,&uStack_108);
        }
        if (iStack_88 == 0) {
            uVar1 = 0x8000000000000007;
        }
        else {
            uStack_ec = uStack_ec & 0xffff0fff | 0xff0000;
            uStack_e8 = *0x13060;
            uStack_e0 = *0x13068;
            fcn.00012ad8(auStack_f8);
            uVar1 = 0;
        }
    }
    return uVar1;
}


/* fcn.000129a4 @ 0x129a4 */

uint64_t fcn.000129a4(uint32_t arg1)

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


/* fcn.000129d0 @ 0x129d0 */

uint64_t fcn.000129d0(uint32_t arg1)

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


/* fcn.00012980 @ 0x12980 */

void fcn.00012980(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00011c54(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00011c20 @ 0x11c20 */

uchar * fcn.00011c20(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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

void fcn.00012c0c(int64_t arg1)

{
    uint *arg1_00;
    
    arg1_00 = 0x13ad0;
    if (arg1 != 0) {
        arg1_00 = arg1;
    }
    if (arg1_00 != 0x13a50) {
        fcn.00011020(arg1_00,0x13a50,0x68);
    }
    arg1_00[1] = 0xffffffff;
    *(arg1_00 + 6) = 0x12dac;
    *arg1_00 = 0x10900;
    *(arg1_00 + 0x18) = 0;
    *(arg1_00 + 2) = 0x12ccc;
    *(arg1_00 + 4) = 0x11870;
    *(arg1_00 + 8) = 0x12d70;
    *(arg1_00 + 10) = 0x12d68;
    *(arg1_00 + 0xc) = 0x12d78;
    *(arg1_00 + 0xe) = 0x12d80;
    *(arg1_00 + 0x10) = 0x12d88;
    *(arg1_00 + 0x12) = 0x12d90;
    *(arg1_00 + 0x14) = 0x12da4;
    *(arg1_00 + 0x16) = 0x12d98;
    return;
}


/* fcn.00012c60 @ 0x12c60 */

int64_t fcn.00012c60(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    iVar1 = 0x13ad0;
    if (arg1 != 0) {
        iVar1 = arg1;
    }
    if (arg2 != 0x13a50) {
        fcn.00011020(arg2,0x13a50,0x78);
    }
    *(arg2 + 8) = *(arg2 + 8) & 0xfffffffe;
    *(arg2 + 0x20) = 0;
    *arg2 = iVar1;
    if (*(iVar1 + 8) != NULL) {
        (**(iVar1 + 8))(arg2,arg3);
    }
    return arg2;
}


/* fcn.00012ad8 @ 0x12ad8 */

//WARNING: Variable defined which should be unmapped: var_5h
//WARNING: Variable defined which should be unmapped: var_1fh

void fcn.00012ad8(uint32_t arg1)

{
    char cVar1;
    uint32_t uVar2;
    uint in_register_0000000c;
    int64_t *piVar3;
    uint16_t uVar4;
    uint *puVar5;
    int32_t var_bh;
    int16_t var_1fh;
    int8_t var_27h;
    int16_t in_stack_00000028;
    int64_t in_stack_00000030;
    uint uStack_88;
    int16_t aiStack_82 [21];
    uint32_t uStack_58;
    int64_t iStack_54;
    int64_t iStack_4c;
    uchar auStack_44 [3];
    int64_t var_39h;
    char acStack_28 [23];
    int32_t var_9h;
    int64_t var_5h;
    
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    if (piVar3 != 0x139d0) {
        puVar5 = &uStack_88;
        uVar2 = *(piVar3 + 0xc) & 0xffff80;
        uStack_58 = uVar2 | 0x1000042;
        if ((*(piVar3 + 0xc) & 0xff0000) == 0xff0000) {
            iStack_54 = piVar3[2];
            iStack_4c = piVar3[3];
            puVar5 = &stack0xffffffffffffff7c;
            uStack_88 = *0x138f0;
        }
        if (uStack_58 < '\0') {
            _auStack_44 = piVar3[4];
            *(piVar3 + 4) = _auStack_44 + 1;
            *puVar5 = *0x138f4;
            puVar5 = puVar5 + 1;
        }
        if (in_stack_00000028 == 0) {
            uVar4 = 0;
            do {
                cVar1 = *(uVar4 + in_stack_00000030);
                acStack_28[uVar4] = cVar1;
                if (cVar1 == '\0') break;
                uVar4 = uVar4 + 1;
            } while (uVar4 < 0x18);
            if ((uVar4 < 0x18) && (0x18 - uVar4 != 0)) {
                fcn.00011060(acStack_28 + uVar4,0x18 - uVar4);
            }
            *puVar5 = *0x13908;
        }
        else {
            uStack_58 = uVar2 | 0x1000242;
            *puVar5 = *0x13904;
            puVar5[1] = *0x1390c;
            *(puVar5 + 6) = in_stack_00000028;
            puVar5 = puVar5 + 1;
        }
        puVar5[1] = *0x13930;
        (**(*piVar3 + 0x18))(piVar3,&uStack_88,&uStack_58);
    }
    return;
}


/* fcn.00011060 @ 0x11060 */

int64_t fcn.00011060(int64_t arg1,int64_t arg2)

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


/* fcn.00011020 @ 0x11020 */

int64_t fcn.00011020(int64_t arg1,int64_t arg2,int64_t arg3)

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


