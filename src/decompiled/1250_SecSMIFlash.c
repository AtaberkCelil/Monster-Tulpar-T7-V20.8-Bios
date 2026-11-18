// decompiled by r2ghidra: 1250_SecSMIFlash.pe32
// functions: 48

/* entry0 @ 0x11340 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.000113c8(arg1,arg2);
    *0x15940 = -0x7fffffffffffffff;
    iVar1 = section..text(0x15840);
    if (iVar1 == 0) {
        iVar1 = fcn.000127ec(arg1,arg2);
        if ((-1 < iVar1) || (*0x15940 < 0)) {
            *0x15940 = iVar1;
        }
        fcn.000110d0(0x15840,-1);
    }
    iVar1 = *0x15940;
    if (*0x15940 < 0) {
        fcn.000142a4();
    }
    return iVar1;
}


/* fcn.000131d4 @ 0x131d4 */

void fcn.000131d4(void)

{
    return;
}


/* fcn.000113c8 @ 0x113c8 */

void fcn.000113c8(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    uint32_t uVar6;
    ulong noname_0;
    uint64_t uVar7;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    
    *0x157a8 = *(arg2 + 0x60);
    *0x157b0 = *(arg2 + 0x58);
    iStackX_10 = 0;
    *0x157a0 = arg2;
    uStackX_8 = arg1;
    (**(*0x157a8 + 0x140))(0x15130,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x157b8);
    (**(*0x157a8 + 0x140))(0x15160,0,aiStackX_18);
    uStackX_8 = 0;
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,0);
    *0x15998 = fcn.00014274();
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,*0x15998);
    *0x15990 = uStackX_8 >> 5;
    fcn.000142e0();
    noname_0 = 0x15250;
    iVar4 = fcn.0001434c(0x15250);
    if (iVar4 == 0) {
        cVar1 = fcn.000144c0();
        uVar2 = in(0x1808);
        fcn.00011250(noname_0,0x1808);
        while( true ) {
            iVar3 = in(0x1808);
            uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
            if ((uVar6 >> 0x17 & 1) != 0) break;
            func_0x00011240();
        }
        fcn.00011250(uVar6,0x1808);
        if (cVar1 == '\0') {
            fcn.00011280();
        }
        else {
            fcn.00011270();
        }
    }
    if (*(*0x157b8 + 0x98) != 0) {
        piVar5 = *(*0x157b8 + 0xa0);
        uVar7 = 0;
        do {
            if ((*0x150b0 == *piVar5) && (*0x150b8 == piVar5[1])) {
                iVar4 = (*(*0x157b8 + 0xa0))[uVar7 * 3 + 2];
                if (iVar4 != 0) {
                    *0x157b0 = iVar4;
                }
                break;
            }
            uVar7 = uVar7 + 1;
            piVar5 = piVar5 + 3;
        } while (uVar7 < *(*0x157b8 + 0x98));
    }
    if ((*0x15820 != NULL) || (iVar4 = (**(*0x157a8 + 0x140))(0x15130,0,0x15820), -1 < iVar4)) {
        (***0x15820)(*0x15820,0x15828);
    }
    iVar4 = (**(*0x157b8 + 0xd0))(0x150d0,0,0x15830);
    if (iVar4 < 0) {
        *0x15830 = 0;
    }
    return;
}


/* section..text @ 0x11000 */

ulong section..text(int64_t arg1)

{
    ulong unaff_RBX;
    ulong unaff_RBP;
    ulong unaff_RSI;
    ulong unaff_RDI;
    ulong unaff_R12;
    ulong unaff_R13;
    ulong unaff_R14;
    ulong unaff_R15;
    uint32_t in_CR4;
    int64_t in_SSP;
    ulong unaff_XMM6_Qa;
    ulong unaff_XMM6_Qb;
    ulong unaff_XMM7_Qa;
    ulong unaff_XMM7_Qb;
    ulong unaff_XMM8_Qa;
    ulong unaff_XMM8_Qb;
    ulong unaff_XMM9_Qa;
    ulong unaff_XMM9_Qb;
    ulong unaff_XMM10_Qa;
    ulong unaff_XMM10_Qb;
    ulong unaff_XMM11_Qa;
    ulong unaff_XMM11_Qb;
    ulong unaff_XMM12_Qa;
    ulong unaff_XMM12_Qb;
    ulong unaff_XMM13_Qa;
    ulong unaff_XMM13_Qb;
    ulong unaff_XMM14_Qa;
    ulong unaff_XMM14_Qb;
    ulong unaff_XMM15_Qa;
    ulong unaff_XMM15_Qb;
    ulong unaff_retaddr;
    uchar auStackX_8 [32];
    
    //[00] -r-x section size 16384 named .text
    fcn.000131d4();
    *(arg1 + 0xf8) = 0;
    if ((*0x15270 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
        *(arg1 + 0xf8) = in_SSP + 8;
    }
    *arg1 = unaff_RBX;
    *(arg1 + 8) = auStackX_8;
    *(arg1 + 0x10) = unaff_RBP;
    *(arg1 + 0x18) = unaff_RDI;
    *(arg1 + 0x20) = unaff_RSI;
    *(arg1 + 0x28) = unaff_R12;
    *(arg1 + 0x30) = unaff_R13;
    *(arg1 + 0x38) = unaff_R14;
    *(arg1 + 0x40) = unaff_R15;
    *(arg1 + 0x48) = unaff_retaddr;
    *(arg1 + 0x50) = *0x1094;
    *(arg1 + 0x58) = unaff_XMM6_Qa;
    *(arg1 + 0x60) = unaff_XMM6_Qb;
    *(arg1 + 0x68) = unaff_XMM7_Qa;
    *(arg1 + 0x70) = unaff_XMM7_Qb;
    *(arg1 + 0x78) = unaff_XMM8_Qa;
    *(arg1 + 0x80) = unaff_XMM8_Qb;
    *(arg1 + 0x88) = unaff_XMM9_Qa;
    *(arg1 + 0x90) = unaff_XMM9_Qb;
    *(arg1 + 0x98) = unaff_XMM10_Qa;
    *(arg1 + 0xa0) = unaff_XMM10_Qb;
    *(arg1 + 0xa8) = unaff_XMM11_Qa;
    *(arg1 + 0xb0) = unaff_XMM11_Qb;
    *(arg1 + 0xb8) = unaff_XMM12_Qa;
    *(arg1 + 0xc0) = unaff_XMM12_Qb;
    *(arg1 + 200) = unaff_XMM13_Qa;
    *(arg1 + 0xd0) = unaff_XMM13_Qb;
    *(arg1 + 0xd8) = unaff_XMM14_Qa;
    *(arg1 + 0xe0) = unaff_XMM14_Qb;
    *(arg1 + 0xe8) = unaff_XMM15_Qa;
    *(arg1 + 0xf0) = unaff_XMM15_Qb;
    //WARNING: Treating indirect jump as return
    return 0;
}


/* fcn.000127ec @ 0x127ec */

int64_t fcn.000127ec(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char acStackX_18 [16];
    
    if (*0x157d8 == 0) {
        *0x157c0 = *(arg2 + 0x60);
        *0x157c8 = *(arg2 + 0x58);
        *0x157d8 = arg2;
    }
    acStackX_18[0] = '\0';
    if (*0x157d8 == 0) {
        *0x157c0 = *(arg2 + 0x60);
        *0x157c8 = *(arg2 + 0x58);
        *0x157d8 = arg2;
    }
    iVar1 = (**(*0x157c0 + 0x140))(0x15230,0,0x15808);
    if (((-1 < iVar1) && ((***0x15808)(*0x15808,acStackX_18), acStackX_18[0] != '\0')) &&
       (iVar1 = (*(*0x15808)[1])(*0x15808,0x157d0), -1 < iVar1)) {
        iVar1 = fcn.00014158();
        *0x157e0 = 1;
        if (iVar1 != 0) {
            *0x157c8 = iVar1;
        }
        *0x157f0 = 0;
        fcn.00013fec();
        fcn.00014074();
        *0x157f0 = 1;
        iVar1 = fcn.000123a8(arg1,arg2);
    }
    return iVar1;
}


/* fcn.000110d0 @ 0x110d0 */

void fcn.000110d0(int64_t arg1,int64_t arg2)

{
    *0x1094 = *(arg1 + 0x50);
    //WARNING: Could not recover jumptable at 0x00011179. Too many branches
    //WARNING: Treating indirect jump as call
    (**(arg1 + 0x48))(arg1,arg2);
    return;
}


/* fcn.000142a4 @ 0x142a4 */

void fcn.000142a4(void)

{
    char cVar1;
    
    cVar1 = fcn.00014230(*0x15998);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x000142ca. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x157b8 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x000142d9. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x157a8 + 0x48))(*0x15998);
    return;
}


/* fcn.00014230 @ 0x14230 */

uint64_t fcn.00014230(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x15990 != 0) {
        puVar2 = *0x15998 + 8;
        in_RAX = *0x15998;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x15990);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00014274 @ 0x14274 */

ulong fcn.00014274(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x157b8 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000142e0 @ 0x142e0 */

int64_t fcn.000142e0(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x15818 == 0) {
        *0x15818 = 0;
        if (*(*0x157a0 + 0x68) != 0) {
            piVar2 = *(*0x157a0 + 0x70);
            do {
                if ((*0x150e0 == *piVar2) && (*0x150e8 == piVar2[1])) {
                    *0x15818 = (*(*0x157a0 + 0x70))[uVar1 * 3 + 2];
                    return *0x15818;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x157a0 + 0x68));
        }
    }
    return *0x15818;
}


/* fcn.0001434c @ 0x1434c */

void fcn.0001434c(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000142e0();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x0001437a:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x0001437a;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.000144c0 @ 0x144c0 */

uint8_t fcn.000144c0(void)

{
    unkuint7 extraout_RAX;
    
    fcn.00011290();
    fcn.00011280();
    return (extraout_RAX & 0xfffffe) >> 1 & 1;
}


/* fcn.00011290 @ 0x11290 */

uint64_t fcn.00011290(void)

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


/* fcn.00011280 @ 0x11280 */

void fcn.00011280(void)

{
    return;
}


/* fcn.00011250 @ 0x11250 */

uint64_t fcn.00011250(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00011242 @ 0x11242 */

void fcn.00011242(void)

{
    return;
}


/* fcn.00011270 @ 0x11270 */

void fcn.00011270(void)

{
    return;
}


/* fcn.000131d8 @ 0x131d8 */

void fcn.000131d8(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.0001323c(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.0001323c @ 0x1323c */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.0001323c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x00013297;
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
code_r0x00013297:
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
        uVar5 = fcn.0001449c(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        iVar13 = 1;
        uStack_90 = 0xff;
    }
    else {
        uVar5 = fcn.00014470(arg4);
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
            pcVar9 = 0x1538c;
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
code_r0x00013621:
                puVar22 = arg4 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puVar22[1] << 8;
                }
                uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                if (uStack_a8 == 10) {
                    pcVar9 = 0x1538c;
                }
                else {
                    pcVar9 = 0x15390;
                    puVar22 = arg4;
                }
            }
            else {
                puStackX_20 = arg4;
                if (uStack_a8 == 0x25) {
                    puVar14 = puStack_b0;
                    puVar19 = in_stack_00000028;
code_r0x000133e0:
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
                            goto code_r0x00013583;
                        }
                        if (uStack_a8 == 0x30) {
                            if ((uVar5 & 0x800) == 0) {
                                uVar5 = uVar5 | 0x20;
                                uStackX_18 = uVar5;
                            }
                        }
                        else {
                            if (uStack_a8 < 0x31) goto code_r0x0001359a;
                            if (0x39 < uStack_a8) {
                                if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                    uVar5 = uVar5 | 0x10;
                                    goto code_r0x00013583;
                                }
                                goto code_r0x0001359a;
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
code_r0x00013583:
                        arg4 = puStackX_20;
                        uStackX_18 = uVar5;
                        goto code_r0x000133e0;
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
                                goto code_r0x000133e0;
                            }
                            if (uStack_a8 == 0x2b) {
                                uVar5 = uVar5 | 2;
                            }
                            else {
                                if (uStack_a8 != 0x2c) goto code_r0x0001359a;
                                uVar5 = uVar5 | 8;
                            }
                        }
                        goto code_r0x00013583;
                    }
                    uVar18 = 0;
                    uStack_b8 = 0;
                    puStackX_20 = arg4;
code_r0x0001359a:
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
                                fcn.00013f68(&var_68h_2,0x26,0,0x15320);
                                pcVar9 = &var_68h_2;
                                uVar6 = uStack_c0;
                                cVar15 = cStack0000000000000030;
                            }
                            uVar18 = uStack_b8;
                        }
                        else {
                            if (uStack_a8 != 10) {
                                arg4 = puStackX_20;
                                if (uStack_a8 == 0xd) goto code_r0x00013621;
                                if (uStack_a8 == 0x53) goto code_r0x00013830;
                                if (uStack_a8 == 0x58) goto code_r0x00013926;
                                if (uStack_a8 == 0x61) goto code_r0x00013839;
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
                                    goto code_r0x000133c5;
                                }
                                if (uStack_a8 != 100) goto code_r0x000133c1;
                                goto code_r0x0001393d;
                            }
                            puVar22 = puStackX_20 + var_78h;
                            pcVar9 = 0x1538c;
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
                        goto code_r0x00013b38;
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
                                    iVar13 = 0x1542b;
                                    goto code_r0x000138ed;
                                }
                            }
                            else if (uVar11 < 6) {
                                iVar13 = uVar11 * 0x19;
                                pcVar9 = "Success";
code_r0x000138ed:
                                pcVar9 = pcVar9 + iVar13;
                                if (pcVar9 != &var_68h_2) goto code_r0x00013b38;
                            }
                            fcn.00013f68(&var_68h_2,0x26,0,0x15384);
                        }
                        else {
                            if (uStack_a8 == 0x73) {
code_r0x00013830:
                                uVar5 = uVar5 | 0x400;
                                uStackX_18 = uVar5;
code_r0x00013839:
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
                                goto code_r0x00013b38;
                            }
                            if (uStack_a8 != 0x74) {
                                if (uStack_a8 != 0x75) {
                                    if (uStack_a8 != 0x78) goto code_r0x000133c1;
                                    goto code_r0x0001392a;
                                }
                                goto code_r0x0001392f;
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
                                goto code_r0x00013b38;
                            }
                            fcn.00013f68(&var_68h_2,0x26,0,0x15368);
                            pcVar9 = &var_68h_2;
                        }
                        uVar6 = uStack_c0;
                        goto code_r0x00013b38;
                    }
                    uVar5 = uVar5 & 0xffffffffffffffd9 | 0x10;
code_r0x00013926:
                    uVar5 = uVar5 | 0x20;
code_r0x0001392a:
                    uVar5 = uVar5 | 0x80;
code_r0x0001392f:
                    if (-1 < uVar5) {
                        uVar5 = uVar5 & 0xfffffffffffffffd | 0x4000;
                    }
code_r0x0001393d:
                    if ((uVar5 & 0x10) == 0) {
                        if (puVar14 != NULL) {
                            uVar6 = *puVar14;
                            goto code_r0x0001397f;
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
code_r0x0001397f:
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
code_r0x00013a07:
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
                            if ((uVar5 & 0x4010) == 0x4000) goto code_r0x00013a07;
                        }
                    }
                    var_68h_2._0_1_ = 0;
                    piVar21 = &var_68h_2;
                    uVar11 = uVar6;
                    do {
                        uVar7 = uVar11 / uVar17;
                        piVar21 = piVar21 + 1;
                        *piVar21 = "0123456789ABCDEFS"[uVar11 % uVar17];
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
code_r0x000133c1:
                    pcVar9 = &uStack_a8;
code_r0x000133c5:
                    uVar5 = uVar5 | 0x400;
                    uStackX_18 = uVar5;
                    puVar22 = puStackX_20;
                }
            }
        }
code_r0x00013b38:
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
                arg1 = fcn.00013208(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        uVar7 = uVar20;
        if (cVar15 == '\0') {
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00013208(arg1,pcVar16,uVar18 - uVar6,(uVar17 & 0x2000) + 0x20);
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
                arg1 = fcn.00013208(arg1,pcStack_d8,uVar18 - uVar6,(uVar17 & 0x2000) + 0x30);
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
                arg1 = fcn.00013208(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
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


/* fcn.000115c8 @ 0x115c8 */

ulong fcn.000115c8(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t aiStackX_8 [4];
    
    iVar2 = 0;
    aiStackX_8[0] = 0;
    fcn.000131d8(0x15950,0x3c,0x1529c,0x15278);
    do {
        if (iVar2 != 0) {
            fcn.000131d8(0x15950,0x3c,0x152a8,0x15278);
        }
        aiStackX_8[1] = 8;
        iVar1 = (**(*0x157c8 + 0x48))(0x15950,0x15140,0,aiStackX_8 + 1,aiStackX_8);
    } while (((iVar1 < 0) || (aiStackX_8[0] != *0x15798)) && (iVar2 = iVar2 + 1, -1 < iVar1));
    return 0x15950;
}


/* fcn.000141b8 @ 0x141b8 */

int64_t fcn.000141b8(uint32_t arg1,int64_t arg2,uint32_t arg3)

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


/* fcn.00014398 @ 0x14398 */

void fcn.00014398(void)

{
    int64_t iVar1;
    int32_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_40h;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int64_t var_20h_2;
    uint uStack_20;
    uint uStack_1c;
    int64_t var_10h_2;
    int32_t var_8h;
    int16_t var_4h;
    
    var_8h = *0x15728;
    var_4h = *0x1572c;
    var_40h._0_4_ = 0x711c703f;
    var_40h._4_4_ = 0x4b10c285;
    var_38h = -0x13c94f5d;
    var_34h = -0x1d74c343;
    var_18h = 8;
    var_30h = -0x4735057c;
    var_2ch = 0x4aa94593;
    var_28h = 0x688ef7ae;
    var_24h = 0x2073b06e;
    var_20h_2._0_4_ = *0x15710;
    var_20h_2._4_4_ = *0x15714;
    uStack_20 = *0x15718;
    uStack_1c = *0x1571c;
    var_10h = 0x49735752;
    var_10h_2 = *0x15720;
    iVar1 = (**(*0x157b0 + 0x48))(L"CapsuleUpdateData",&var_40h,0,&var_18h,&var_20h);
    if (iVar1 == 0) {
        (**(*0x157b0 + 0x58))(&var_20h_2,&var_30h,7,4,&var_10h);
        fcn.00011260();
    }
    return;
}


/* fcn.00011260 @ 0x11260 */

void fcn.00011260(void)

{
    return;
}


/* fcn.000145a0 @ 0x145a0 */

int64_t fcn.000145a0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.0001454e @ 0x1454e */

int64_t fcn.0001454e(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint *puVar4;
    
    uVar1 = arg3;
    puVar4 = arg1;
    if (3 < arg2) {
        if ((arg1 & 3U) != 0) {
            iVar3 = 4 - (arg1 & 3U);
            arg2 = arg2 - iVar3;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar4 = uVar1;
                puVar4 = puVar4 + 1;
            }
        }
        for (uVar2 = arg2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar4 = puVar4 + 1;
        }
        arg2 = arg2 & 3;
    }
    for (; arg2 != 0; arg2 = arg2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
    }
    return arg1;
}


/* fcn.00013080 @ 0x13080 */

int64_t fcn.00013080(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    uint64_t arg1_00;
    uint64_t uVar3;
    uint64_t arg1_01;
    uint64_t uStackX_8;
    
    if ((arg1 != 0) && (arg1_01 = *arg1, arg1_01 != 0)) {
        uStackX_8 = arg1_01;
        iVar2 = fcn.000141b8(arg1_01,0x150a0,0x10);
        if (iVar2 == 0) {
            uVar3 = *(arg1_01 + 0x1c) + arg1_01;
            if (uVar3 < arg1_01) {
                return -0x7fffffffffffffe6;
            }
            *arg1 = uVar3;
            arg1_00 = arg1_01;
            arg1_01 = uVar3;
        }
        else {
            iVar2 = fcn.00012a4c(arg1_01,0x1000000,&uStackX_8);
            if (iVar2 < 0) {
                return -0x7fffffffffffffe6;
            }
            arg1_00 = uStackX_8;
        }
        cVar1 = fcn.000129f8(arg1_00);
        if ((cVar1 != '\0') && (uVar3 = *(arg1_00 + 0x18) - *(arg1_00 + 0x1c), uVar3 < 0x1004001)) {
            if (arg2 != 0) {
                *arg2 = arg1_00;
            }
            if ((*0x15830 != 0) && (iVar2 = (**(*0x15830 + 0x10))(*0x15a18,*0x15a10), -1 < iVar2)) {
                if (**0x15a18 == 0x44414224) {
                    return -0x7fffffffffffffe7;
                }
                iVar2 = fcn.000141b8(arg1_00 + 0x28,0x15050,0x10);
                if (iVar2 == 0) {
                    iVar2 = fcn.00012cd0(arg1_00,arg1_01,uVar3);
                }
                else {
                    iVar2 = fcn.00012e9c(arg1_00,arg1_01,uVar3);
                }
                if (-1 < iVar2) {
                    iVar2 = fcn.0001290c(arg1_00,arg1_01);
                    return iVar2;
                }
                return iVar2;
            }
        }
    }
    return -0x7fffffffffffffe6;
}


/* fcn.00012174 @ 0x12174 */

int64_t fcn.00012174(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        if (*arg1 != 0) {
            (**(*0x157d0 + 0x58))();
            *arg1 = 0;
        }
        iVar1 = (**(*0x157d0 + 0x50))(6,arg3);
        if (-1 < iVar1) {
            fcn.0001454e(*arg1,arg3,0);
            fcn.000145a0(*arg1,arg2,arg3);
        }
    }
    return iVar1;
}


/* fcn.00011788 @ 0x11788 */

ulong fcn.00011788(int64_t arg1)

{
    uint64_t *puVar1;
    ulong uVar2;
    int64_t iVar3;
    
    if (((*0x15180 & 2) == 0) && ((*0x15181 & 2) == 0)) {
        uVar2 = 0x8000000000000003;
    }
    else {
        if ((arg1 != 0) && (iVar3 = fcn.000141b8(arg1,0x150a0,0x10), puVar1 = *0x15798, iVar3 == 0)) {
            **0x15798 = *(arg1 + 0x10);
            puVar1[1] = arg1;
            puVar1[2] = *(arg1 + 0x18) - *(arg1 + 0x10);
            puVar1[3] = *0x151d0;
            puVar1[4] = 0;
            puVar1[5] = 0;
            uVar2 = fcn.000115c8();
            (**(*0x157c8 + 0x58))(uVar2,0x15140,0,0,0);
            iVar3 = (**(*0x157c8 + 0x58))(uVar2,0x15140,7,8,0x15798);
            uVar2 = 0x8000000000000007;
            if (-1 < iVar3) {
                uVar2 = 0;
            }
            return uVar2;
        }
        uVar2 = 0x8000000000000007;
    }
    return uVar2;
}


/* fcn.00011884 @ 0x11884 */

ulong fcn.00011884(uint32_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    uint uVar3;
    uint in_register_0000000c;
    char *pcVar4;
    uint auStackX_8 [2];
    ulong uStackX_10;
    
    pcVar4 = CONCAT44(in_register_0000000c,arg1);
    if ((*pcVar4 == '\x01') && (pcVar4[5] == '\0')) {
        uVar1 = 0x8000000000000007;
    }
    else {
        auStackX_8[0] = 0;
        uStackX_10 = 4;
        iVar2 = (**(*0x157c8 + 0x48))(L"MonotonicCounter",0x15170,0,&uStackX_10,auStackX_8);
        uVar3 = auStackX_8[0];
        auStackX_8[0] = 7;
        if (iVar2 < 0) {
            uVar3 = 0xffffffff;
        }
        *(pcVar4 + 0x19) = uVar3;
        (**(*0x157c8 + 0x58))(L"AmiFlashUpd",0x15198,0,0,0);
        iVar2 = (**(*0x157c8 + 0x58))(L"AmiFlashUpd",0x15198,auStackX_8[0],0x1d,pcVar4);
        uVar1 = 0x8000000000000007;
        if (-1 < iVar2) {
            uVar1 = 0;
        }
    }
    return uVar1;
}


/* fcn.000119fc @ 0x119fc */

int64_t fcn.000119fc(int64_t arg1)

{
    uint8_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    
    *0x151e8 = 0;
    *0x151d0 = 0;
    *0x151d8 = 0;
    uVar4 = *(arg1 + 1) & 1;
    if ((uVar4 == 0) || (uVar1 = *arg1, (*0x15181 & uVar1) == 0)) {
        if (uVar4 != 0) {
            *0x151d0 = 0;
            *0x151d8 = 0;
            *0x151e8 = 0;
            return -0x7ffffffffffffff9;
        }
        uVar1 = *arg1;
        if ((*0x15180 & uVar1) == 0) {
            *0x151d0 = 0;
            *0x151d8 = 0;
            *0x151e8 = 0;
            return -0x7ffffffffffffff9;
        }
    }
    if (uVar1 != 1) {
        if ((uVar1 != 2) && (uVar1 != 4)) {
            *0x151d0 = 0;
            *0x151d8 = 0;
            *0x151e8 = 0;
            return -0x7ffffffffffffff9;
        }
        *0x151d0 = *0x15778;
        if (*(arg1 + 5) != 0) {
            if (*0x15830 == NULL) {
                *0x151d0 = 0;
                *0x151d8 = 0;
                *0x151e8 = 0;
                return -0x7ffffffffffffff9;
            }
            iVar2 = (***0x15830)(*(arg1 + 5),*(arg1 + 0x15));
            if (iVar2 < 0) {
                *0x151d0 = 0;
                *0x151d8 = 0;
                *0x151e8 = 0;
                return -0x7ffffffffffffff9;
            }
            if (*0x151d0 == 0) {
                *0x151d0 = *(arg1 + 5);
            }
            else {
                if (0x1004000 < *(arg1 + 0x15)) {
                    *0x151d0 = 0;
                    *0x151d8 = 0;
                    *0x151e8 = 0;
                    return -0x7ffffffffffffff9;
                }
                fcn.000145a0(*0x151d0,*(arg1 + 5),*(arg1 + 0x15));
            }
        }
        if (*0x151d0 == 0) {
            *0x151d0 = 0;
            *0x151d8 = 0;
            *0x151e8 = 0;
            return -0x7ffffffffffffff9;
        }
        iStackX_10 = 0;
        iVar3 = fcn.00013080(0x151d0,&iStackX_10);
        iVar2 = iStackX_10;
        if (iVar3 < 0) {
            if (iVar3 == -0x7fffffffffffffe7) {
                if (*arg1 != '\x02') {
                    if (*0x15182 == '\0') {
                        *0x151d0 = 0;
                        *0x151d8 = 0;
                        *0x151e8 = 0;
                        return -0x7fffffffffffffe7;
                    }
                    if (*0x15770 == '\0') {
                        *0x151d0 = 0;
                        *0x151d8 = 0;
                        *0x151e8 = 0;
                        return -0x7fffffffffffffe7;
                    }
                }
                iVar3 = 0;
            }
            if (iVar3 < 0) {
                *0x151d0 = 0;
                *0x151d8 = 0;
                *0x151e8 = 0;
                return iVar3;
            }
        }
        if (iStackX_10 == 0) goto code_r0x00011c46;
        if (*arg1 == '\x04') {
            uVar6 = 0;
            iStackX_8 = *0x151d0;
            iStackX_18 = 0x1000;
            uVar7 = *(iStackX_10 + 0x18) - *(iStackX_10 + 0x1c) >> 0xc;
            if (uVar7 != 0) {
                uVar5 = 0;
                do {
                    if ((0x1ffff < uVar5) ||
                       (iVar3 = (**(*0x159e0 + 0x10))(*0x159e0,0x15030,1,&iStackX_8,&iStackX_18,*0x15768 + uVar5),
                       iVar3 < 0)) break;
                    uVar6 = uVar6 + 1;
                    iStackX_8 = iStackX_8 + iStackX_18;
                    uVar5 = uVar5 + 0x20;
                } while (uVar6 < uVar7);
            }
            iVar3 = fcn.00012174(0x15780,*(iVar2 + 0x1e) + iVar2,*(iVar2 + 0x1c) - *(iVar2 + 0x1e));
            if (iVar3 < 0) {
                *0x151d0 = 0;
                *0x151d8 = 0;
                *0x151e8 = 0;
                return iVar3;
            }
            *0x151d8 = *0x15780;
            *0x151e8 = **0x15768;
            goto code_r0x00011c46;
        }
        *(arg1 + 0x15) = *(iStackX_10 + 0x18);
        *(arg1 + 5) = *0x15798;
        iVar3 = fcn.00011788(iStackX_10);
        if (iVar3 < 0) goto code_r0x00011c46;
    }
    iVar3 = fcn.00011884(arg1);
code_r0x00011c46:
    if (iVar3 < 0) {
        *0x151e8 = 0;
        *0x151d8 = 0;
        *0x151d0 = 0;
        return iVar3;
    }
    return iVar3;
}


/* fcn.00011dcc @ 0x11dcc */

ulong fcn.00011dcc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t *puVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uStack_38;
    int64_t iStack_30;
    
    if ((((*0x151d0 == 0) || (*0x151e8 == 0)) || (*0x151e8 != **0x15768)) || (**0x15768 == -0x24242425)) {
        return 0x8000000000000008;
    }
    puVar3 = *0x151d8;
    do {
        if (puVar3 == NULL) {
            return 0x8000000000000008;
        }
        if (*(puVar3 + 0xc) == 0) {
            return 0x8000000000000008;
        }
        if (arg1 < *puVar3) {
code_r0x00011e59:
            if (*puVar3 < arg1 + arg2) {
code_r0x00011e68:
                if ((*(puVar3 + 0x14) & 0x200) == 0) {
                    if (arg4 == 0) {
                        return 0;
                    }
                    if ((*(arg4 + 0x14) & 0x200) == 0) {
                        return 0;
                    }
                }
                if (*(puVar3 + 0xc) == 0) {
                    return 0x8000000000000008;
                }
                iStack_30 = 0x1000;
                uVar2 = (puVar3[1] - *puVar3) + arg1;
                uVar7 = uVar2 >> 0xc;
                uStack_38 = uVar7 * 0x1000 + *0x151d0;
                iVar6 = *0x151d0 + uVar2;
                iVar5 = (arg2 % 0x1000 != 0) + arg2 / 0x1000;
                if (iVar5 != 0) {
                    iVar4 = uVar7 << 5;
                    do {
                        iVar5 = iVar5 + -1;
                        if (0xfff < uVar7) {
                            return 0x8000000000000008;
                        }
                        if (iVar6 + arg2 <= uStack_38) {
                            return 0x8000000000000008;
                        }
                        iVar1 = (**(*0x159e0 + 0x10))(*0x159e0,0x15030,1,&uStack_38,&iStack_30,0x159a0);
                        if (iVar1 < 0) {
                            return 0x8000000000000008;
                        }
                        iVar1 = fcn.000141b8(0x159a0,*0x15768 + iVar4,0x20);
                        if (iVar1 != 0) {
                            return 0x8000000000000008;
                        }
                        uVar7 = uVar7 + 1;
                        uStack_38 = uStack_38 + iStack_30;
                        iVar4 = iVar4 + 0x20;
                    } while (iVar5 != 0);
                }
                if (arg3 != 0) {
                    *arg3 = iVar6;
                }
                return 0;
            }
        }
        else {
            if (arg1 < *(puVar3 + 0xc) + *puVar3) goto code_r0x00011e68;
            if (arg1 <= *puVar3) goto code_r0x00011e59;
        }
        puVar3 = puVar3 + 3;
    } while( true );
}


/* fcn.00012a4c @ 0x12a4c */

ulong fcn.00012a4c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar1 = *0x15188;
    if (arg1 != 0) {
        iVar3 = arg1 + -0x2c;
        while (arg1 < iVar3 + (arg2 & 0xffffffffU)) {
            if ((((*arg1 == iVar1) && (*(arg1 + 0x12) == '\x02')) &&
                (iVar2 = fcn.000141b8(0x15188,arg1,0x10), iVar2 == 0)) &&
               (iVar2 = fcn.000141b8(0x151f0,arg1 + 0x1c,0x10), iVar2 == 0)) {
                if ((*(arg1 + 0x14) & 0xffffff) < *(arg1 + 0x3c) + 0x2c) {
                    return 0x800000000000000e;
                }
                iVar3 = fcn.000141b8(arg1 + 0x2c,0x150a0,0x10);
                if (iVar3 != 0) {
                    return 0x800000000000000e;
                }
                if (arg3 != 0) {
                    *arg3 = arg1 + 0x2c;
                }
                return 0;
            }
            arg1 = arg1 + 4;
            if (arg1 == NULL) {
                return 0x800000000000000e;
            }
        }
    }
    return 0x800000000000000e;
}


/* fcn.00011f9c @ 0x11f9c */

ulong fcn.00011f9c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    uint64_t *arg4;
    ulong uStackX_20;
    
    uStackX_20 = 0;
    arg4 = *0x15760;
    if (*0x15760 == NULL) {
        arg4 = NULL;
code_r0x00011fcd:
        uVar2 = fcn.00011dcc(arg1,arg2,arg3,arg4);
    }
    else {
        while (*(arg4 + 0xc) != 0) {
            if (arg1 < *arg4) {
code_r0x00011fef:
                if (*arg4 < arg1 + arg2) {
code_r0x0001201d:
                    if (((*0x15948 == 0x12) || (*0x15948 == 0x20)) ||
                       (((uVar1 = *(arg4 + 0x14) & 0x400, uVar1 == 0 || ((*0x15181 & 4) != 0)) &&
                        ((uVar1 != 0 || ((*0x15180 & 4) != 0)))))) {
                        if (*0x15788 == '\0') {
                            iVar3 = arg1;
                            if (0xff00102c < arg1) {
                                iVar3 = arg1 + -0x102c;
                            }
                            iVar3 = fcn.00012a4c(iVar3,arg2 + 0x1000,&uStackX_20);
                            if (-1 < iVar3) {
                                *(arg4 + 0x14) = *(arg4 + 0x14) | 0x200;
                                *0x15788 = '\x01';
                            }
                        }
                        if (((*(arg4 + 0x14) & 0x200) == 0) && (*0x15780 == 0)) {
                            return 0;
                        }
                        if (*(arg4 + 0xc) != 0) goto code_r0x00011fcd;
                    }
                    break;
                }
            }
            else {
                if (arg1 < *(arg4 + 0xc) + *arg4) goto code_r0x0001201d;
                if (arg1 <= *arg4) goto code_r0x00011fef;
            }
            arg4 = arg4 + 3;
            if (arg4 == NULL) break;
        }
        uVar2 = 0x8000000000000008;
    }
    return uVar2;
}


/* fcn.000129f8 @ 0x129f8 */

ulong fcn.000129f8(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t iVar1;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if ((((*(iVar1 + 0x26) == 0xef1) && (*(iVar1 + 0x18) < 0x1004001)) && (*(iVar1 + 0x10) < 0x4001)) &&
       (((*(iVar1 + 0x10) <= *(iVar1 + 0x18) && (*(iVar1 + 0x10) == *(iVar1 + 0x1c))) &&
        ((*(iVar1 + 0x1e) + 0x30 <= *(iVar1 + 0x1c) && (*(iVar1 + 0x20) + 0x20 <= *(iVar1 + 0x1e))))))) {
        return 1;
    }
    return 0;
}


/* fcn.00014158 @ 0x14158 */

ulong fcn.00014158(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    if (*0x157d0 != 0) {
        iVar3 = *(*0x157d0 + 0xa0);
        for (iVar2 = *(*0x157d0 + 0x98); iVar2 != 0; iVar2 = iVar2 + -1) {
            iVar1 = fcn.000141b8(iVar3,0x15240,0x10);
            if (iVar1 == 0) {
                return *(iVar3 + 0x10);
            }
            iVar3 = iVar3 + 0x18;
        }
    }
    return 0;
}


/* fcn.00013fec @ 0x13fec */

ulong fcn.00013fec(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x157e0 == '\0') {
        if (*0x15800 == 0) {
            if (*0x157f0 != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x157c0 + 0x140))(0x15210,0,0x15800);
        }
    }
    else if (*0x157e8 == 0) {
        if ((*0x157f0 == '\0') && (*0x157d0 != 0)) {
    //WARNING: Could not recover jumptable at 0x0001402b. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x157d0 + 0xd0))(0x15220,0,0x157e8);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.00014074 @ 0x14074 */

int64_t fcn.00014074(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    if (*0x157e0 == '\0') {
        if (*0x15810 == 0) {
            if (*0x157f0 == '\x01') {
                return -0x7ffffffffffffffd;
            }
            uVar2 = (**(*0x157c0 + 0x18))(0x1f);
            (**(*0x157c0 + 0x20))(uVar2);
            if (0x10 < uVar2) {
                return -0x7ffffffffffffffd;
            }
            iVar1 = (**(*0x157c0 + 0x140))(0x15010,0,0x15810);
            if (iVar1 < 0) {
                *0x15810 = 0;
            }
            return iVar1;
        }
    }
    else if (*0x157f8 == 0) {
        if (*0x157d0 == 0) {
            return -0x7ffffffffffffffd;
        }
        iVar1 = (**(*0x157d0 + 0xd0))(0x15060,0,0x157f8);
        if (iVar1 < 0) {
            *0x157f8 = 0;
        }
        return iVar1;
    }
    return 0;
}


/* fcn.00013f8c @ 0x13f8c */

ulong fcn.00013f8c(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar3 = *(*0x157d8 + 0x68);
    iVar2 = *(*0x157d8 + 0x70);
    while( true ) {
        if (iVar3 == 0) {
            return 0;
        }
        iVar1 = fcn.000141b8(iVar2,arg1,0x10);
        if (iVar1 == 0) break;
        iVar2 = iVar2 + 0x18;
        iVar3 = iVar3 + -1;
    }
    return *(iVar2 + 0x10);
}


/* fcn.00012214 @ 0x12214 */

//WARNING: Variable defined which should be unmapped: var_10h

ulong fcn.00012214(int64_t arg1)

{
    int64_t iVar1;
    char cVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    uint32_t arg1_00;
    uint64_t uVar6;
    int64_t iStackX_8;
    int64_t iStackX_10;
    uint64_t uStackX_18;
    int64_t var_28h;
    uint32_t var_30h;
    uint32_t var_38h;
    int64_t iStack_38;
    ulong uStack_30;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    uStack_30 = 0;
    iStackX_10 = 0;
    var_28h = 0;
    iStackX_8 = arg1;
    iVar3 = (**(*0x157c0 + 0x138))(2,0x15090,0,&uStackX_18,&iStack_38);
    if ((-1 < iVar3) && (uStackX_18 != 0)) {
        uVar6 = 0;
        if (uStackX_18 != 0) {
            do {
                iVar3 = (**(*0x157c0 + 0x98))(*(iStack_38 + uVar6 * 8),0x15090,&var_20h);
                if (-1 < iVar3) {
                    iVar3 = (**(var_20h + 0x18))(var_20h,0x15188,0x18,0,&iStackX_10,&var_28h,&iStackX_8);
                    if (iVar3 == 0) {
                        iVar3 = fcn.000141b8(0x151f0,iStackX_10,0x10);
                        if (iVar3 == 0) break;
                    }
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < uStackX_18);
        }
        (**(*0x157c0 + 0x48))(iStack_38);
        iVar3 = iStackX_10;
        if (uVar6 < uStackX_18) {
            iVar1 = iStackX_10 + 0x10;
            arg1_00 = iVar1;
            iVar4 = fcn.000141b8(arg1_00,0x150a0,0x10);
            if (iVar4 != 0) goto code_r0x00012359;
            cVar2 = fcn.000129f8(arg1_00);
            if (cVar2 == '\0') goto code_r0x00012359;
            var_28h = *(iVar3 + 0x2c) - *(iVar3 + 0x2e);
            fcn.00012174(&uStack_30,iVar1 + *(iVar3 + 0x2e),var_28h);
        }
    }
    iVar3 = iStackX_10;
code_r0x00012359:
    if (iVar3 != 0) {
        (**(*0x157c0 + 0x48))(iVar3);
    }
    if (var_28h < 0x18) {
        uVar5 = 0x800000000000000e;
    }
    else {
        *0x15760 = uStack_30;
        uVar5 = 0;
    }
    return uVar5;
}


/* fcn.000123a8 @ 0x123a8 */

int64_t fcn.000123a8(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong *puVar2;
    ulong *noname_0_00;
    char *arg1_00;
    ulong uVar3;
    uint32_t var_20h_2;
    int64_t var_28h_2;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_13h;
    
    var_50h = 5;
    var_28h = 0x7739f24c;
    var_24h = 0x11d493d7;
    var_20h = -0x6fffc566;
    var_1ch = 0x4dc13f27;
    var_40h = 0;
    var_38h = 0;
    if (*0x157d8 == 0) {
        *0x157c0 = *(arg1 + 0x60);
        *0x157c8 = *(arg1 + 0x58);
        *0x157d8 = arg1;
    }
    if (*0x15808 == NULL) {
        noname_0_00 = 0x15230;
        iVar1 = (**(*0x157c0 + 0x140))(0x15230,0,0x15808);
        if (-1 < iVar1) goto code_r0x00012444;
    }
    else {
code_r0x00012444:
        noname_0_00 = *0x15808;
        (***0x15808)(*0x15808,&var_20h_2);
        if (var_20h_2 != '\0') {
            noname_0_00 = *0x15808;
            iVar1 = (*(*0x15808)[1])(*0x15808,0x157d0);
            if (-1 < iVar1) {
                puVar2 = fcn.00014158();
                *0x157e0 = 1;
                noname_0_00 = *0x157c8;
                if (puVar2 != NULL) {
                    noname_0_00 = puVar2;
                }
                *0x157f0 = 0;
                *0x157c8 = noname_0_00;
                fcn.00013fec();
                fcn.00014074();
                *0x157f0 = 1;
            }
        }
    }
    iVar1 = fcn.00013f8c(noname_0_00,&var_28h);
    if (iVar1 == 0) {
        iVar1 = -0x7fffffffffffffff;
        goto code_r0x000127db;
    }
    *0x15948 = *(iVar1 + 0xc);
    iVar1 = (**(*0x157d0 + 0xd0))(0x15080,0,0x159e0);
    if ((iVar1 < 0) || (*0x159e0 == 0)) goto code_r0x000127db;
    *0x15a18 = 0;
    *0x15a10 = 0;
    iVar1 = (**(*0x159e0 + 0x18))(*0x159e0,0x15a00,0x15100,0,0);
    if ((iVar1 < 0) || (*0x15a18 == 0)) {
        if (iVar1 == -0x7ffffffffffffffb) {
            iVar1 = 0;
        }
        goto code_r0x000127db;
    }
    iVar1 = (**(*(*0x157d8 + 0x60) + 0x28))(0,0,0x1004,0x15778);
    if (iVar1 < 0) goto code_r0x000127db;
    fcn.0001454e(*0x15778,0x1004000,0);
    uVar3 = 0x15768;
    iVar1 = (**(*0x157d0 + 0x50))(6,0x20000,0x15768);
    if (iVar1 < 0) goto code_r0x000127db;
    fcn.0001454e(*0x15768,0x20000,CONCAT71(uVar3 >> 8,0xdb));
    *0x15790 = 0x5c;
    iVar1 = (**(*(*0x157d8 + 0x60) + 0x28))(0,0,1,0x15798);
    if (iVar1 < 0) goto code_r0x000127db;
    fcn.0001454e(*0x15798,*0x15790,0);
    arg1_00 = str.Y_mEK;
    iVar1 = (**(*0x157d0 + 0xd0))(str.Y_mEK,0,&var_48h);
    if (iVar1 < 0) goto code_r0x000127db;
    if ((var_48h == 0) || (((*0x15180 & 2) == 0 && ((*0x15181 & 2) == 0)))) {
code_r0x00012656:
        fcn.00012214(arg1_00);
        var_28h_2 = 0;
        iVar1 = (**(*0x157d0 + 0xd0))(0x15020,0,&var_28h_2);
        if (((-1 < iVar1) || (iVar1 = (**(*0x157c0 + 0x140))(0x15020,0,&var_28h_2), -1 < iVar1)) && (var_28h_2 != 0))
        {
            *0x15a30 = *(var_28h_2 + 0x10);
            *0x15a20 = *(var_28h_2 + 0x18);
            *0x15a28 = *(var_28h_2 + 8);
            *(var_28h_2 + 0x10) = 0x120c0;
            *(var_28h_2 + 0x18) = 0x12100;
            *(var_28h_2 + 8) = 0x12140;
            *0x151d0 = *0x15778;
            *0x151e0 = *0x15768;
            *0x151d8 = 0;
            *0x151e8 = 0;
            (**(*0x157d0 + 0xa8))(&var_38h,0x15070,0,0x151b0);
            *0x15770 = 0;
            if (((*0x15948 == 0x12) || (*0x15948 == 0x20)) &&
               ((iVar1 = fcn.0001434c(0x15000), iVar1 != 0 && (*(iVar1 + 0x20) == '\0')))) {
                uVar3 = *(iVar1 + 0x18);
                *0x15770 = *(iVar1 + 0x21) == 4;
                var_24h._1_3_ = uVar3;
                var_20h = uVar3 >> 0x18;
                var_1ch._0_1_ = uVar3 >> 0x38;
                var_13h = *(iVar1 + 0x25);
                var_24h = var_24h._1_3_ << 8;
                var_28h = 0x204;
                fcn.000119fc(&var_28h);
            }
            *0x15182 = 1;
            var_30h = 0;
            (**(*0x157d0 + 0xc0))(0x15110,0x12394,&var_30h);
        }
    }
    else {
        iVar1 = (**var_48h)(var_48h,0x11678,&var_50h,&var_40h);
        arg1_00 = var_48h;
        if (-1 < iVar1) goto code_r0x00012656;
    }
    iVar1 = 0;
code_r0x000127db:
    return iVar1;
}


/* fcn.00012b3c @ 0x12b3c */

ulong fcn.00012b3c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    uint32_t *puVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    uint64_t *puVar14;
    
    iVar4 = *0x15768;
    uVar10 = 0;
    iVar1 = arg1 + *(arg1 + 0x1e);
    uVar8 = (*(arg1 + 0x1c) - *(arg1 + 0x1e)) / 0x18;
    if (uVar8 != 0) {
        puVar7 = iVar1 + 0x14;
        iVar13 = 0;
        do {
            iVar5 = iVar13;
            if (puVar7[-2] == 0) break;
            uVar3 = *puVar7;
            puVar7 = puVar7 + 6;
            uVar10 = uVar10 + 1;
            iVar5 = iVar13 + 1;
            if ((uVar3 & 0x200) == 0) {
                iVar5 = iVar13;
            }
            iVar13 = iVar5;
        } while (uVar10 < uVar8);
        if (iVar5 != 0) {
            uVar11 = iVar5 + 2;
            uVar8 = 0;
            uVar12 = 0;
            puVar2 = *0x15768 + uVar11 * 8;
            if (uVar10 != 0) {
                puVar7 = iVar1 + 8;
                iVar13 = *0x15768 - puVar2;
                puVar14 = puVar2;
                do {
                    if (uVar11 <= uVar8) {
                        return 0x800000000000001a;
                    }
                    if (puVar7[1] == 0) break;
                    if ((puVar7[3] & 0x200) != 0) {
                        uVar9 = *puVar7;
                        if (arg3 < uVar9) {
                            return 0x800000000000001a;
                        }
                        if (arg3 < puVar7[1] + uVar9) {
                            return 0x800000000000001a;
                        }
                        uVar8 = uVar8 + 1;
                        *(iVar13 + puVar14) = uVar9 + arg2;
                        *puVar14 = puVar7[1];
                        puVar14 = puVar14 + 1;
                    }
                    uVar12 = uVar12 + 1;
                    puVar7 = puVar7 + 6;
                } while (uVar12 < uVar10);
            }
            if (uVar8 < uVar11) {
                if ((*(arg1 + 0x14) & 2) != 0) {
                    *(iVar4 + uVar8 * 8) = arg1;
                    puVar2[uVar8] = 0x38;
                    uVar8 = uVar8 + 1;
                    if (uVar11 <= uVar8) {
                        return 0x800000000000001a;
                    }
                }
                *(iVar4 + uVar8 * 8) = iVar1;
                puVar2[uVar8] = (uVar12 + 1) * 0x18;
                uVar6 = (**(*0x159e0 + 0x10))(*0x159e0,arg4,uVar8 + 1,iVar4,puVar2,0x159a0);
                return uVar6;
            }
        }
    }
    return 0x800000000000001a;
}


/* fcn.00012cd0 @ 0x12cd0 */

int64_t fcn.00012cd0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    uchar *puVar3;
    uint uVar4;
    char acStackX_20 [8];
    ulong uStack_78;
    ulong uStack_70;
    char *pcStack_68;
    ulong uStack_60;
    uchar auStack_58 [48];
    
    iVar2 = fcn.000141b8(0x15a00,0x15040,0x10);
    if (iVar2 == 0) {
        fcn.0001454e(auStack_58,0x30,0);
        fcn.000145a0(auStack_58,*0x15a18,0x20);
        puVar3 = auStack_58;
        uVar4 = 0x30;
code_r0x00012d73:
        uVar1 = *(arg1 + 0x20);
        uStack_70 = 0;
        uStack_60 = 0x159a0;
        pcStack_68 = acStackX_20;
        iVar2 = (**(*0x159e0 + 8))(*0x159e0,arg1 + 0x38,uVar1 - 0x18,0,0,&pcStack_68,&uStack_70,6,1);
        if (iVar2 < 0) {
            return iVar2;
        }
        if (acStackX_20[0] == '\x01') {
            iVar2 = 0x15030;
            uStack_78 = 0x20;
        }
        else if (acStackX_20[0] == '\x02') {
            iVar2 = 0x150f0;
            uStack_78 = 0x30;
        }
        else {
            if (acStackX_20[0] != '\x03') goto code_r0x00012e6e;
            iVar2 = 0x15120;
            uStack_78 = 0x40;
        }
        iVar2 = fcn.00012b3c(arg1,arg2,arg3,iVar2);
        if (-1 < iVar2) {
            iVar2 = (**(*0x159e0 + 8))(*0x159e0,arg1 + 0x38,uVar1 - 0x18,puVar3,uVar4,&uStack_60,&uStack_78,1,2)
            ;
        }
    }
    else {
        iVar2 = fcn.000141b8(0x15a00,0x150c0,0x10);
        if (iVar2 == 0) {
            puVar3 = *0x15a18;
            uVar4 = *0x15a10;
            goto code_r0x00012d73;
        }
code_r0x00012e6e:
        iVar2 = -0x7ffffffffffffffd;
    }
    return iVar2;
}


/* fcn.00012e9c @ 0x12e9c */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

int64_t fcn.00012e9c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uint32_t *puVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int iVar5;
    ulong uStackX_8;
    uint32_t *puStackX_20;
    int64_t var_40h_2;
    int64_t var_58h;
    ulong in_stack_ffffffffffffff80;
    uint uVar7;
    ulong uVar6;
    uint uStack_78;
    uint uStack_74;
    uint uStack_70;
    uint uStack_6c;
    uint uStack_68;
    uint32_t *puStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t var_40h;
    ulong uStack_40;
    int32_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int32_t var_bp_10h;
    int64_t var_8h;
    
    puVar1 = arg1 + 0x48;
    var_40h._0_4_ = 0x20;
    uStack_58 = *0x15030;
    uStack_50 = *0x15038;
    uStack_40 = 0x159a0;
    uStack_68 = 0x100;
    iVar5 = (*(arg1 + 0x14) & 1) + 1;
    uStack_78 = *0x15260;
    uStack_74 = *0x15264;
    uStack_70 = *0x15268;
    uStack_6c = *0x1526c;
    puStack_60 = puVar1;
    iVar3 = (*(*0x159e0)[4])(*0x159e0,0x15100,&uStack_78);
    uVar7 = in_stack_ffffffffffffff80 >> 0x20;
    if (iVar3 < 0) {
        puVar2 = arg1 + 0x20;
        uVar4 = arg1 + 0x248;
        if (uVar4 < arg1 + 0x20 + *puVar2) {
            do {
                uVar7 = in_stack_ffffffffffffff80 >> 0x20;
                if (*(uVar4 + 0x10) == '\0') break;
                puStack_60 = uVar4 + 0x10;
                iVar3 = (*(*0x159e0)[4])(*0x159e0,0x15100,&uStack_78);
                uVar7 = in_stack_ffffffffffffff80 >> 0x20;
                if (-1 < iVar3) {
                    if ((*(arg1 + 0x14) & 4) == 0) {
                        uStackX_8 = 0x228;
                        puStackX_20 = puVar2;
                    }
                    else {
                        uStackX_8 = 0x100;
                        puStackX_20 = puVar1;
                    }
                    uVar7 = 0;
                    iVar3 = (*(*0x159e0)[2])(*0x159e0,0x15030,1,&puStackX_20,&uStackX_8,0x159a0);
                    if (iVar3 < 0) {
                        return -0x7fffffffffffffe6;
                    }
                    uVar6 = CONCAT44(uVar7,iVar5);
                    iVar3 = (***0x159e0)(*0x159e0,&uStack_78,&uStack_58,uVar4 + 0x110,0x100,uVar6);
                    uVar7 = uVar6 >> 0x20;
                    break;
                }
                uVar4 = uVar4 + 0x210;
            } while (uVar4 < arg1 + 0x20 + *puVar2);
        }
        if (iVar3 < 0) {
            return -0x7fffffffffffffe6;
        }
    }
    iVar3 = fcn.00012b3c(arg1,arg2,arg3,0x15030);
    if (-1 < iVar3) {
        puStack_60 = puVar1;
        iVar3 = (***0x159e0)(*0x159e0,&uStack_78,&uStack_58,arg1 + 0x148,0x100,CONCAT44(uVar7,iVar5));
    }
    return iVar3;
}


/* fcn.0001290c @ 0x1290c */

uint64_t fcn.0001290c(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    int *arg2_00;
    uint32_t uVar4;
    uint32_t *puVar5;
    
    iVar2 = *0x15200;
    arg1 = *(arg1 + 0x1e) + arg1;
    uVar4 = *(arg1 + 0xc);
    if (uVar4 != 0) {
        puVar5 = arg1 + 8;
        do {
            if ((puVar5[3] >> 9 & 1) != 0 && (puVar5[3] & 10) != 0) {
                uVar1 = *puVar5;
                for (arg2_00 = uVar1 + arg2;
                    ((arg2_00 != NULL && (0x57 < uVar4)) && (arg2_00 <= uVar1 + arg2 + (uVar4 - 0x57)));
                    arg2_00 = arg2_00 + 1) {
                    if (((*arg2_00 == iVar2) && (iVar3 = fcn.000141b8(0x15200,arg2_00,0x10), iVar3 == 0)) &&
                       (arg2_00[4] == 0x44494624)) {
                        iVar3 = fcn.000141b8(0x152f8,arg2_00 + 0x17,7);
                        return -(iVar3 != 0) & 0x800000000000001a;
                    }
                }
            }
            uVar4 = puVar5[7];
            puVar5 = puVar5 + 6;
        } while (uVar4 != 0);
    }
    return 0x8000000000000019;
}


/* fcn.00014470 @ 0x14470 */

uint64_t fcn.00014470(uint32_t arg1)

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


/* fcn.0001449c @ 0x1449c */

uint64_t fcn.0001449c(uint32_t arg1)

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


/* fcn.00013f68 @ 0x13f68 */

void fcn.00013f68(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.0001323c(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00013208 @ 0x13208 */

uchar * fcn.00013208(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


