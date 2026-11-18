// decompiled by r2ghidra: 0199_AsfDxe.pe32
// functions: 24

/* entry0 @ 0x1030c */

ulong entry0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong uVar6;
    int64_t iStackX_8;
    
    *0x120c8 = *(arg2 + 0x60);
    *0x120c0 = arg2;
    fcn.00010648();
    uVar6 = 0x11c20;
    iVar3 = fcn.000106b4(0x11c20);
    if (iVar3 == 0) {
        uVar4 = fcn.000102c0();
        fcn.000102b0();
        uVar1 = in(0x1808);
        fcn.00010290(uVar6,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            fcn.00010280();
        }
        fcn.00010290(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.000102b0();
        }
        else {
            fcn.000102a0();
        }
    }
    if (((*0xc00b0040 != -1) && (iStackX_8 = arg1, iVar3 = fcn.000106b4(0x11bd0), iVar3 != 0)) &&
       ((*(iVar3 + 0x34) & 0xf00) == 0x400)) {
        fcn.00010260(0x12250,0xd);
        iVar3 = fcn.00010428();
        if (-1 < iVar3) {
            uVar6 = (**(*0x120c8 + 0x148))(&iStackX_8,0x11c00,0x12250,0);
            return uVar6;
        }
    }
    return 0x8000000000000003;
}


/* fcn.00010648 @ 0x10648 */

int64_t fcn.00010648(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x120d0 == 0) {
        *0x120d0 = 0;
        if (*(*0x120c0 + 0x68) != 0) {
            piVar2 = *(*0x120c0 + 0x70);
            do {
                if ((*0x11bf0 == *piVar2) && (*0x11bf8 == piVar2[1])) {
                    *0x120d0 = (*(*0x120c0 + 0x70))[uVar1 * 3 + 2];
                    return *0x120d0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x120c0 + 0x68));
        }
    }
    return *0x120d0;
}


/* fcn.000106b4 @ 0x106b4 */

void fcn.000106b4(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00010648();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x000106e2:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x000106e2;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.000102c0 @ 0x102c0 */

uint64_t fcn.000102c0(void)

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


/* fcn.000102b0 @ 0x102b0 */

void fcn.000102b0(void)

{
    return;
}


/* fcn.00010290 @ 0x10290 */

uint64_t fcn.00010290(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010282 @ 0x10282 */

void fcn.00010282(void)

{
    return;
}


/* fcn.000102a0 @ 0x102a0 */

void fcn.000102a0(void)

{
    return;
}


/* fcn.00010260 @ 0x10260 */

int64_t fcn.00010260(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 6496 named .text
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


/* fcn.00010428 @ 0x10428 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.00010428(ulong param_1,ulong param_2,int64_t param_3,int64_t param_4)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t *arg3;
    uchar uVar3;
    unkbyte7 Var4;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [2];
    int aiStackX_18 [2];
    uint auStackX_20 [2];
    uint32_t var_30h_2;
    int64_t var_38h;
    uint32_t var_40h;
    int32_t var_48h;
    int64_t aiStack_58 [2];
    int64_t iStack_48;
    uint32_t uStack_40;
    uchar uStack_3c;
    int64_t var_30h;
    int64_t var_20h;
    int32_t var_18h;
    int8_t var_14h;
    int64_t var_10h;
    
    Var4 = param_4 >> 8;
    uVar3 = param_4;
    out(0x80,0xe09);
    fcn.00010760(0x11c30,0xe09,param_3,param_4);
    arg3 = aiStack_58;
    iVar1 = (**(*0x120c8 + 0x140))(0x11bc0,0);
    if (iVar1 < 0) {
        uVar2 = 0xe89;
code_r0x0001047f:
        out(0x80,uVar2);
        fcn.00010760(0x11c30,uVar2,arg3,CONCAT71(Var4,uVar3));
    }
    else {
        *0x12250 = '\x17';
        *0x12251 = 0x10;
        (**(aiStack_58[0] + 0x38))(auStackX_10);
        (**(aiStack_58[0] + 0x40))(aiStackX_18);
        if (((auStackX_10[0] & 0x100) != 0) && (aiStackX_18[0] == 0)) {
            uVar2 = 0;
            do {
                (**(aiStack_58[0] + 0x38))(auStackX_8);
                if ((auStackX_8[0] & 0x80) != 0) {
                    iVar1 = fcn.00010834(0x12250);
                    if (iVar1 < 0) {
                        uVar2 = 0xee9;
                        goto code_r0x0001047f;
                    }
                    if (*0x12250 == '\x16') {
                        if (*0x12256 + 0x3eU < 2) {
                            arg3 = &var_30h;
                            iVar1 = (**(*0x120c8 + 0x140))(0x11be0,0);
                            if (-1 < iVar1) {
                                iStack_48 = CONCAT17(*0x12257,
                                                     CONCAT16(*0x12256,CONCAT42(*0x12252,CONCAT11(*0x12251,*0x12250))
                                                             ));
                                uStack_40 = *0x12258;
                                uStack_3c = *0x1225c;
                                (**(var_30h + 0x18))(&iStack_48);
                            }
                        }
                        if ((*0x12256 == -0x3f) && (((*0x12258 & 0x40) != 0 || ((*0x12258 & 0x80) != 0)))) {
                            *0x12258 = *0x12258 & 0x10000e0;
                        }
                        else {
                            arg3 = &iStack_48;
                            auStackX_20[0] = 0x10150203;
                            iVar1 = (**(*0x120c8 + 0x140))(0x11bc0,0);
                            if (-1 < iVar1) {
                                iVar1 = (**(iStack_48 + 0x40))(auStackX_8);
                                if ((iVar1 < 0) || (auStackX_8[0] != 0)) {
                                    iVar1 = -0x7ffffffffffffffd;
                                }
                                else {
                                    uVar3 = 1;
                                    arg3 = 0x4;
                                    iVar1 = (**(iStack_48 + 0x10))(0,auStackX_20,4,1,2);
                                }
                            }
                            if (iVar1 < 0) {
                                uVar2 = 0xec9;
                                goto code_r0x0001047f;
                            }
                        }
                    }
                    break;
                }
                fcn.00010700(0x57642);
                uVar2 = uVar2 + 1;
            } while (uVar2 < 0x97);
        }
        out(0x80,0xe29);
        fcn.00010760(0x11c30,0xe29,arg3,CONCAT71(Var4,uVar3));
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00010760 @ 0x10760 */

void fcn.00010760(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    char cVar2;
    uint64_t uVar3;
    uint32_t *arg1_00;
    int64_t iVar5;
    int64_t iVar4;
    char cStackY_108;
    char acStackY_107 [47];
    int64_t in_stack_ffffffffffffff28;
    int8_t in_stack_ffffffffffffff30;
    
    fcn.00010934(&cStackY_108,0x100,0,arg1,in_stack_ffffffffffffff28,in_stack_ffffffffffffff30);
    uVar3 = fcn.000102c0();
    fcn.000102b0();
    out(0x72,3);
    cVar2 = in(0x73);
    if ((uVar3 >> 9 & 1) != 0) {
        fcn.000102a0();
    }
    if ((cVar2 == '\x01') && (iVar5 = 0, cStackY_108 != '\0')) {
        do {
            iVar4 = iVar5 + 1;
            pcVar1 = acStackY_107 + iVar5;
            iVar5 = iVar4;
        } while (*pcVar1 != '\0');
        if ((((iVar4 != 0) && (*0xfe1000e8 != 0xff)) && ((*0xfe1000e8 & 1) != 0)) &&
           (((*0xfe1000e8 >> 1 & 3) - 2 < 2 && (arg1_00 = fcn.00011704(), arg1_00 != NULL)))) {
            fcn.000117e4(arg1_00);
        }
    }
    return;
}


/* fcn.00010700 @ 0x10700 */

void fcn.00010700(int64_t arg1)

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
            fcn.00010280();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00010834 @ 0x10834 */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00010834(int64_t arg1)

{
    int64_t iVar1;
    int aiStackX_10 [2];
    uint auStackX_18 [2];
    uint32_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    uint uStack_28;
    int64_t var_10h;
    
    iVar1 = (**(*0x120c8 + 0x140))(0x11bc0,0,&var_28h);
    if (-1 < iVar1) {
        iVar1 = (*_var_28h[8])(aiStackX_10);
        if ((iVar1 < 0) || (aiStackX_10[0] != 0)) {
            iVar1 = -0x7ffffffffffffffd;
        }
        else if (arg1 == 0) {
            iVar1 = -0x7ffffffffffffffe;
        }
        else {
            fcn.00010260(&uStack_28,0xf);
            uStack_28 = 0x10160203;
            auStackX_18[0] = 0xf;
            iVar1 = (**_var_28h)(0,&uStack_28,4,auStackX_18,1,2);
            if ((-1 < iVar1) && (arg1 != &uStack_28 + 2)) {
                fcn.000102d0(arg1,&uStack_28 + 2,0xd);
            }
        }
    }
    return iVar1;
}


/* fcn.00010280 @ 0x10280 */

void fcn.00010280(void)

{
    return;
}


/* fcn.00010934 @ 0x10934 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00010934(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x0001098f;
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
code_r0x0001098f:
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
        uVar5 = fcn.000116b0(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        iVar13 = 1;
        uStack_90 = 0xff;
    }
    else {
        uVar5 = fcn.00011684(arg4);
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
            pcVar9 = 0x11cd4;
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
code_r0x00010d19:
                puVar22 = arg4 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puVar22[1] << 8;
                }
                uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                if (uStack_a8 == 10) {
                    pcVar9 = 0x11cd4;
                }
                else {
                    pcVar9 = 0x11cd8;
                    puVar22 = arg4;
                }
            }
            else {
                puStackX_20 = arg4;
                if (uStack_a8 == 0x25) {
                    puVar14 = puStack_b0;
                    puVar19 = in_stack_00000028;
code_r0x00010ad8:
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
                            goto code_r0x00010c7b;
                        }
                        if (uStack_a8 == 0x30) {
                            if ((uVar5 & 0x800) == 0) {
                                uVar5 = uVar5 | 0x20;
                                uStackX_18 = uVar5;
                            }
                        }
                        else {
                            if (uStack_a8 < 0x31) goto code_r0x00010c92;
                            if (0x39 < uStack_a8) {
                                if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                    uVar5 = uVar5 | 0x10;
                                    goto code_r0x00010c7b;
                                }
                                goto code_r0x00010c92;
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
code_r0x00010c7b:
                        arg4 = puStackX_20;
                        uStackX_18 = uVar5;
                        goto code_r0x00010ad8;
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
                                goto code_r0x00010ad8;
                            }
                            if (uStack_a8 == 0x2b) {
                                uVar5 = uVar5 | 2;
                            }
                            else {
                                if (uStack_a8 != 0x2c) goto code_r0x00010c92;
                                uVar5 = uVar5 | 8;
                            }
                        }
                        goto code_r0x00010c7b;
                    }
                    uVar18 = 0;
                    uStack_b8 = 0;
                    puStackX_20 = arg4;
code_r0x00010c92:
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
                                fcn.00011660(&var_68h_2,0x26,0,0x11c68);
                                pcVar9 = &var_68h_2;
                                uVar6 = uStack_c0;
                                cVar15 = cStack0000000000000030;
                            }
                            uVar18 = uStack_b8;
                        }
                        else {
                            if (uStack_a8 != 10) {
                                arg4 = puStackX_20;
                                if (uStack_a8 == 0xd) goto code_r0x00010d19;
                                if (uStack_a8 == 0x53) goto code_r0x00010f28;
                                if (uStack_a8 == 0x58) goto code_r0x0001101e;
                                if (uStack_a8 == 0x61) goto code_r0x00010f31;
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
                                    goto code_r0x00010abd;
                                }
                                if (uStack_a8 != 100) goto code_r0x00010ab9;
                                goto code_r0x00011035;
                            }
                            puVar22 = puStackX_20 + var_78h;
                            pcVar9 = 0x11cd4;
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
                        goto code_r0x00011230;
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
                                    iVar13 = 0x11d6b;
                                    goto code_r0x00010fe5;
                                }
                            }
                            else if (uVar11 < 6) {
                                iVar13 = uVar11 * 0x19;
                                pcVar9 = "Success";
code_r0x00010fe5:
                                pcVar9 = pcVar9 + iVar13;
                                if (pcVar9 != &var_68h_2) goto code_r0x00011230;
                            }
                            fcn.00011660(&var_68h_2,0x26,0,0x11ccc);
                        }
                        else {
                            if (uStack_a8 == 0x73) {
code_r0x00010f28:
                                uVar5 = uVar5 | 0x400;
                                uStackX_18 = uVar5;
code_r0x00010f31:
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
                                goto code_r0x00011230;
                            }
                            if (uStack_a8 != 0x74) {
                                if (uStack_a8 != 0x75) {
                                    if (uStack_a8 != 0x78) goto code_r0x00010ab9;
                                    goto code_r0x00011022;
                                }
                                goto code_r0x00011027;
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
                                goto code_r0x00011230;
                            }
                            fcn.00011660(&var_68h_2,0x26,0,0x11cb0);
                            pcVar9 = &var_68h_2;
                        }
                        uVar6 = uStack_c0;
                        goto code_r0x00011230;
                    }
                    uVar5 = uVar5 & 0xffffffffffffffd9 | 0x10;
code_r0x0001101e:
                    uVar5 = uVar5 | 0x20;
code_r0x00011022:
                    uVar5 = uVar5 | 0x80;
code_r0x00011027:
                    if (-1 < uVar5) {
                        uVar5 = uVar5 & 0xfffffffffffffffd | 0x4000;
                    }
code_r0x00011035:
                    if ((uVar5 & 0x10) == 0) {
                        if (puVar14 != NULL) {
                            uVar6 = *puVar14;
                            goto code_r0x00011077;
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
code_r0x00011077:
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
code_r0x000110ff:
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
                            if ((uVar5 & 0x4010) == 0x4000) goto code_r0x000110ff;
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
code_r0x00010ab9:
                    pcVar9 = &uStack_a8;
code_r0x00010abd:
                    uVar5 = uVar5 | 0x400;
                    uStackX_18 = uVar5;
                    puVar22 = puStackX_20;
                }
            }
        }
code_r0x00011230:
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
                arg1 = fcn.00010900(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        uVar7 = uVar20;
        if (cVar15 == '\0') {
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00010900(arg1,pcVar16,uVar18 - uVar6,(uVar17 & 0x2000) + 0x20);
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
                arg1 = fcn.00010900(arg1,pcStack_d8,uVar18 - uVar6,(uVar17 & 0x2000) + 0x30);
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
                arg1 = fcn.00010900(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
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


/* fcn.00011704 @ 0x11704 */

uint64_t fcn.00011704(ulong param_1)

{
    int64_t iVar1;
    int64_t *arg1;
    int64_t iVar2;
    uint uVar3;
    uint uStack_18;
    uint uStack_14;
    
    arg1 = *0x120d8;
    if (*0x120d8 == NULL) {
        uStack_18 = 0x48;
        uStack_14 = 0xe;
        iVar1 = fcn.000116d4(param_1,0x68);
        uVar3 = fcn.00011918(iVar1);
        arg1 = fcn.000116d4(uVar3,0x78);
        if (arg1 == NULL) {
            arg1 = 0x120e0;
        }
        else {
            iVar2 = 0x121e0;
            if (iVar1 != 0) {
                iVar2 = iVar1;
            }
            if (arg1 != 0x12160) {
                fcn.000102d0(arg1,0x12160,0x78);
            }
            *(arg1 + 1) = *(arg1 + 1) | 1;
            *(arg1 + 4) = 0;
            *arg1 = iVar2;
            if (*(iVar2 + 8) != NULL) {
                (**(iVar2 + 8))(arg1,&uStack_18);
            }
        }
        *0x120d8 = arg1;
        *(arg1 + 0xc) = *(arg1 + 0xc) & 0xffff0fff | 0xff0000;
        iVar1 = *0x11c18;
        arg1[2] = *0x11c10;
        arg1[3] = iVar1;
    }
    return -(arg1[0xe] != 0) & arg1;
}


/* fcn.000117e4 @ 0x117e4 */

//WARNING: Variable defined which should be unmapped: var_5h
//WARNING: Variable defined which should be unmapped: var_1fh

void fcn.000117e4(uint32_t *arg1)

{
    char cVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    uint *puVar4;
    int32_t var_bh;
    int16_t var_1fh;
    int8_t var_27h;
    int16_t in_stack_00000028;
    int64_t in_stack_00000030;
    uint uStack_88;
    int16_t aiStack_82 [21];
    uint32_t uStack_58;
    ulong uStack_54;
    ulong uStack_4c;
    uchar auStack_44 [3];
    int64_t var_39h;
    char acStack_28 [23];
    int32_t var_9h;
    int64_t var_5h;
    
    if (arg1 != 0x120e0) {
        puVar4 = &uStack_88;
        uVar2 = arg1[3] & 0xffff80;
        uStack_58 = uVar2 | 0x1000042;
        if ((arg1[3] & 0xff0000) == 0xff0000) {
            uStack_54 = *(arg1 + 4);
            uStack_4c = *(arg1 + 6);
            puVar4 = &stack0xffffffffffffff7c;
            uStack_88 = *0x12050;
        }
        if (uStack_58 < '\0') {
            _auStack_44 = arg1[8];
            arg1[8] = _auStack_44 + 1;
            *puVar4 = *0x12054;
            puVar4 = puVar4 + 1;
        }
        if (in_stack_00000028 == 0) {
            uVar3 = 0;
            do {
                cVar1 = *(uVar3 + in_stack_00000030);
                acStack_28[uVar3] = cVar1;
                if (cVar1 == '\0') break;
                uVar3 = uVar3 + 1;
            } while (uVar3 < 0x18);
            if ((uVar3 < 0x18) && (0x18 - uVar3 != 0)) {
                fcn.00010260(acStack_28 + uVar3,0x18 - uVar3);
            }
            *puVar4 = *0x12068;
        }
        else {
            uStack_58 = uVar2 | 0x1000242;
            *puVar4 = *0x12064;
            puVar4[1] = *0x1206c;
            *(puVar4 + 6) = in_stack_00000028;
            puVar4 = puVar4 + 1;
        }
        puVar4[1] = *0x12090;
        (**(*arg1 + 0x18))(arg1,&uStack_88,&uStack_58);
    }
    return;
}


/* fcn.000102d0 @ 0x102d0 */

int64_t fcn.000102d0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00011684 @ 0x11684 */

uint64_t fcn.00011684(uint32_t arg1)

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


/* fcn.000116b0 @ 0x116b0 */

uint64_t fcn.000116b0(uint32_t arg1)

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


/* fcn.00011660 @ 0x11660 */

void fcn.00011660(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00010934(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00010900 @ 0x10900 */

uchar * fcn.00010900(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.000116d4 @ 0x116d4 */

ulong fcn.000116d4(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x120c8 + 0x40))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00011918 @ 0x11918 */

void fcn.00011918(int64_t arg1)

{
    uint *arg1_00;
    
    arg1_00 = 0x121e0;
    if (arg1 != 0) {
        arg1_00 = arg1;
    }
    if (arg1_00 != 0x12160) {
        fcn.000102d0(arg1_00,0x12160,0x68);
    }
    arg1_00[1] = 0xffffffff;
    *(arg1_00 + 6) = 0x11a50;
    *arg1_00 = 0x10900;
    *(arg1_00 + 0x18) = 0;
    *(arg1_00 + 2) = 0x1196c;
    *(arg1_00 + 4) = 0x11994;
    *(arg1_00 + 8) = 0x11a14;
    *(arg1_00 + 10) = 0x11a0c;
    *(arg1_00 + 0xc) = 0x11a1c;
    *(arg1_00 + 0xe) = 0x11a24;
    *(arg1_00 + 0x10) = 0x11a2c;
    *(arg1_00 + 0x12) = 0x11a34;
    *(arg1_00 + 0x14) = 0x11a48;
    *(arg1_00 + 0x16) = 0x11a3c;
    return;
}


