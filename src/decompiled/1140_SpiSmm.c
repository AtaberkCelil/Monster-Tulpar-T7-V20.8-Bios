// decompiled by r2ghidra: 1140_SpiSmm.pe32
// functions: 25

/* entry0 @ 0x112d4 */

int64_t entry0(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong noname_0;
    
    fcn.00011348(param_1,param_2);
    noname_0 = 0x130d0;
    *0x131d0 = -0x7fffffffffffffff;
    iVar1 = fcn.00011020(0x130d0);
    if (iVar1 == 0) {
        iVar1 = fcn.00011478(noname_0,param_2);
        if ((-1 < iVar1) || (*0x131d0 < 0)) {
            *0x131d0 = iVar1;
        }
        fcn.000110f0(0x130d0,-1);
    }
    iVar1 = *0x131d0;
    if (*0x131d0 < 0) {
        fcn.00011798();
    }
    return iVar1;
}


/* fcn.00011720 @ 0x11720 */

void fcn.00011720(void)

{
    return;
}


/* fcn.00011348 @ 0x11348 */

void fcn.00011348(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    
    *0x130b8 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x130b0 = arg2;
    uStackX_8 = arg1;
    (**(*0x130b8 + 0x140))(0x13040,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x130c0);
    (**(*0x130b8 + 0x140))(0x13050,0,&iStackX_18);
    uStackX_8 = 0;
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,0);
    *0x131e0 = fcn.00011768();
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,*0x131e0);
    *0x131d8 = uStackX_8 >> 5;
    fcn.000117d4();
    iVar3 = fcn.00011840();
    if (iVar3 == 0) {
        uVar4 = fcn.00011280();
        fcn.00011270();
        uVar1 = in(0x1808);
        fcn.000111f0(iStackX_18,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x000111e0();
        }
        fcn.000111f0(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00011270();
        }
        else {
            fcn.00011260();
        }
    }
    return;
}


/* fcn.00011020 @ 0x11020 */

ulong fcn.00011020(int64_t arg1)

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
    
    fcn.00011720();
    *(arg1 + 0xf8) = 0;
    if ((*0x13080 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.00011478 @ 0x11478 */

int64_t fcn.00011478(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_10 [3];
    
    *0x13204 = 0;
    *0x13200 = 0;
    *0x131f0 = 0xfe010000;
    *0x131f4 = 0;
    *0x131f5 = 0;
    aiStackX_10[0] = arg1;
    iVar1 = (**(*0x130c0 + 0x50))(6,0x98,0x131e8);
    if (-1 < iVar1) {
        if (*0x131e8 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = *0x131e8;
            fcn.00011000(*0x131e8,0x98);
            iVar1 = fcn.00011890(iVar1);
            if (-1 < iVar1) {
                iVar1 = (**(*0x130c0 + 0xc0))(0x13020,0x1146c,aiStackX_10);
                if (-1 < iVar1) {
                    iVar1 = (**(*0x130c0 + 0xa8))(*0x131e8 + 8,0x13000,0,*0x131e8 + 0x10);
                    if (iVar1 < 0) {
                        (**(*0x130c0 + 0x58))(*0x131e8);
                        iVar1 = -0x7ffffffffffffff9;
                    }
                    else {
                        iVar1 = 0;
                    }
                }
            }
        }
    }
    return iVar1;
}


/* fcn.000110f0 @ 0x110f0 */

void fcn.000110f0(int64_t arg1,int64_t arg2)

{
    *0x1094 = *(arg1 + 0x50);
    //WARNING: Could not recover jumptable at 0x00011199. Too many branches
    //WARNING: Treating indirect jump as call
    (**(arg1 + 0x48))(arg1,arg2);
    return;
}


/* fcn.00011798 @ 0x11798 */

void fcn.00011798(void)

{
    char cVar1;
    
    cVar1 = fcn.00011724(*0x131e0);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x000117be. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x130c0 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x000117cd. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x130b8 + 0x48))(*0x131e0);
    return;
}


/* fcn.00011724 @ 0x11724 */

uint64_t fcn.00011724(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x131d8 != 0) {
        puVar2 = *0x131e0 + 8;
        in_RAX = *0x131e0;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x131d8);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00011768 @ 0x11768 */

ulong fcn.00011768(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x130c0 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000117d4 @ 0x117d4 */

int64_t fcn.000117d4(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x130c8 == 0) {
        *0x130c8 = 0;
        if (*(*0x130b0 + 0x68) != 0) {
            piVar2 = *(*0x130b0 + 0x70);
            do {
                if ((*0x13030 == *piVar2) && (*0x13038 == piVar2[1])) {
                    *0x130c8 = (*(*0x130b0 + 0x70))[uVar1 * 3 + 2];
                    return *0x130c8;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x130b0 + 0x68));
        }
    }
    return *0x130c8;
}


/* fcn.00011840 @ 0x11840 */

void fcn.00011840(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000117d4();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00011877:
            if ((piVar1 == NULL) || ((*0x13060 == *(piVar1 + 4) && (*0x13068 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00011877;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00011280 @ 0x11280 */

uint64_t fcn.00011280(void)

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


/* fcn.00011270 @ 0x11270 */

void fcn.00011270(void)

{
    return;
}


/* fcn.000111f0 @ 0x111f0 */

uint64_t fcn.000111f0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000111e2 @ 0x111e2 */

void fcn.000111e2(void)

{
    return;
}


/* fcn.00011260 @ 0x11260 */

void fcn.00011260(void)

{
    return;
}


/* fcn.00011000 @ 0x11000 */

int64_t fcn.00011000(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 8192 named .text
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


/* fcn.00011890 @ 0x11890 */

ulong fcn.00011890(int64_t arg1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint *puVar3;
    uint16_t uVar4;
    uint16_t uVar5;
    int iVar6;
    uint64_t uVar7;
    
    puVar3 = *0x131e8;
    *(*0x131e8 + 2) = 0;
    *(puVar3 + 6) = 0x1226c;
    *(puVar3 + 8) = 0x12290;
    *(puVar3 + 10) = 0x122b8;
    *(puVar3 + 0xc) = 0x122dc;
    *(puVar3 + 0xe) = 0x12350;
    *(puVar3 + 0x10) = 0x123bc;
    *(puVar3 + 0x12) = 0x12408;
    *(puVar3 + 0x14) = fcn.00012454;
    *(puVar3 + 0x16) = 0x1252c;
    *(puVar3 + 0x18) = 0x12584;
    *(puVar3 + 0x1a) = 0x1800;
    *puVar3 = 0x49505350;
    *(puVar3 + 4) = 1;
    *(puVar3 + 0x1c) = 0xfd000;
    uVar7 = *0xc00fd010 & 0xfffff000;
    *(puVar3 + 0x1e) = *(uVar7 + 0x50);
    *(puVar3 + 0x79) = *(uVar7 + 0x50) >> 8;
    puVar3[0x1f] = *(uVar7 + 0xc4);
    puVar3[0x20] = *(uVar7 + 200);
    *(uVar7 + 0xb4) = *(uVar7 + 0xb4) & 0xffff8007 | 4;
    *(puVar3 + 0x23) = *(uVar7 + 0xb8) >> 8 & 3;
    *(uVar7 + 0xb4) = *(uVar7 + 0xb4) & 0xffff9003 | 0x1000;
    uVar1 = *(uVar7 + 0xb8);
    uVar2 = uVar1;
    if (*(puVar3 + 0x23) == '\0') {
        iVar6 = 0x80000 << (uVar2 & 0xf);
    }
    else {
        iVar6 = 0x80000 << (uVar2 & 0xf);
        puVar3[0x24] = iVar6;
        iVar6 = (0x80000 << (uVar1 >> 4 & 0xf)) + iVar6;
    }
    puVar3[0x25] = iVar6;
    *(uVar7 + 0xb4) = *(uVar7 + 0xb4) & 0xffff800b | 8;
    uVar1 = *(uVar7 + 0xb8);
    *(puVar3 + 0x21) = uVar1 >> 0xc & 0xff0;
    *(puVar3 + 0x86) = (uVar1 >> 0x18) << 2;
    *(uVar7 + 0xb4) = *(uVar7 + 0xb4) & 0xffff800f | 0xc;
    uVar1 = *(uVar7 + 0xb8);
    uVar4 = uVar1 >> 0x10;
    *(puVar3 + 0x8a) = (uVar4 & 0xff) << 2;
    uVar5 = uVar1 >> 2 & 0x3ff;
    *(puVar3 + 0x22) = uVar5;
    if (uVar5 != 0x300) {
        fcn.00011c24(puVar3 + 4,0x10,0,0xefc);
        *(puVar3 + 0x22) = *(puVar3 + 0x22) + (uVar4 >> 4 & 0xff0);
    }
    return 0;
}


/* fcn.00011c24 @ 0x11c24 */

//WARNING: Variable defined which should be unmapped: var_29h

int64_t fcn.00011c24(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uchar uVar2;
    uint32_t uVar3;
    char cVar4;
    int64_t iVar5;
    int64_t arg2_00;
    int64_t iVar6;
    uint *puVar7;
    uint32_t uVar8;
    uchar *puVar9;
    uchar *puVar10;
    uint32_t uVar11;
    int64_t iVar12;
    uint32_t *arg3_00;
    uint64_t uVar13;
    uint32_t uVar14;
    uint32_t uStackX_18;
    uint32_t in_stack_00000028;
    uchar *in_stack_00000030;
    uint32_t var_67h;
    uint8_t uStack_c8;
    uint32_t uStack_c4;
    int16_t iStack_c0;
    uint32_t uStack_bc;
    uint32_t uStack_b8;
    uint32_t uStack_b4;
    uint32_t uStack_b0;
    uint32_t uStack_ac;
    uint32_t uStack_a8;
    int64_t iStack_a0;
    uchar auStack_98 [8];
    uint64_t uStack_90;
    uchar auStack_88 [8];
    int8_t var_78h;
    int16_t var_71h;
    int32_t var_6dh;
    int32_t var_69h;
    int32_t var_65h;
    uint32_t var_61h;
    int32_t var_59h;
    int64_t var_51h;
    int64_t var_49h;
    int64_t var_41h;
    int64_t var_39h;
    int32_t var_29h;
    
    uVar14 = uStackX_18;
    uVar3 = arg3;
    if ((uVar3 - 1 < 2) &&
       (((*0x131f8 != NULL || ((**(*0x130c0 + 0xd0))(0x13010,0,0x131f8), *0x131f8 != NULL)) &&
        (uVar13 = 0, *(*0x130c0 + 0x80) != 0)))) {
        do {
            iVar5 = (***0x131f8)(*0x131f8,8,0x202,uVar13,auStack_88);
            if (iVar5 < 0) {
                return -0x7ffffffffffffff1;
            }
            uVar13 = uVar13 + 1;
        } while (uVar13 < *(*0x130c0 + 0x80));
    }
    iVar5 = arg1 + -0x10;
    uStackX_18 = uStackX_18 & 0xffffff00;
    iStack_c0 = *(arg1 + 0x58) + 0x30;
    uStack_a8 = in(iStack_c0);
    out(iStack_c0,uStack_a8 & 0xfffffffe);
    uVar13 = *(arg1 + 0x60) + 0xdc;
    uVar1 = *((uVar13 >> 4 & 0x10000000 | uVar13 & 0xffffffff) + 0xc0000000);
    iStack_a0 = iVar5;
    uStack_90 = uVar13;
    arg2_00 = fcn.00011570(iVar5);
    if (uVar3 - 1 < 2) {
        *0xc00fd0dd = *0xc00fd0dd | 1;
        if ((*0xc00fd0dc & 0x20) != 0) {
            if (*0x13070 != 0) {
                if (*0x13070 == 1) goto code_r0x00011dbc;
                *0x13070 = 0;
            }
            if (*0xfed30010 != -1) {
                wrmsr(0x1fe,*0xfed30880 | 1);
            }
        }
code_r0x00011dbc:
        uVar13 = uVar13 >> 4 & 0x10000000 | uVar13 & 0xffffffff;
        *0xc00fd0dc = *0xc00fd0dc | 1;
        *(uVar13 + 0xc0000000) = *(uVar13 + 0xc0000000) & 0xf7 | 4;
    }
    if (*0x131f5 == '\0') {
        uStack_b8 = uStackX_18;
        uStack_c8 = 0;
        uStack_bc = uVar14 & 0xffffff00;
        uStack_b4 = uStackX_18;
code_r0x00011e6a:
        cVar4 = fcn.00011b68(arg1,arg2_00,0);
        if (cVar4 == '\0') {
            iVar12 = -0x7ffffffffffffff9;
        }
        else if ((uVar3 == 5) && ((*(arg2_00 + 4) >> 0xb & 1) != 0)) {
            iVar12 = -0x7ffffffffffffff1;
        }
        else {
            arg3_00 = &uStack_c4;
            iVar12 = fcn.00012454(arg1,arg2 & 0xffffffff,arg3_00,&uStack_b0);
            if (-1 < iVar12) {
                uStack_c4 = uStack_c4 + arg4;
                if (uStack_b0 < arg4 + in_stack_00000028) {
code_r0x00011edd:
                    iVar12 = -0x7ffffffffffffffe;
                }
                else {
                    uVar14 = 0;
                    if (uVar3 != 0) {
                        if (uVar3 == 1) {
                            uVar14 = 0x40000;
                        }
                        else if (uVar3 == 2) {
                            uVar14 = 0;
                            if (((uStack_c4 | in_stack_00000028) & 0xfff) != 0) goto code_r0x00011edd;
                        }
                        else if (uVar3 == 3) {
                            uVar14 = 0xa0000;
                        }
                        else if (uVar3 == 4) {
                            uVar14 = 0xc0000;
                        }
                        else if (uVar3 == 5) {
                            uVar14 = 0xe0000;
                        }
                        else {
                            if (uVar3 != 6) goto code_r0x00011edd;
                            uVar14 = 0x100000;
                        }
                    }
                    do {
                        uVar11 = in_stack_00000028;
                        if ((arg3 & 0xfffffffcU) == 0) {
                            if (uVar3 != 2) {
                                uVar8 = uStack_c4 + 0x100 & 0xffffff00;
                                if (uVar8 < uStack_c4 + in_stack_00000028) {
                                    uVar11 = uVar8 - uStack_c4;
                                }
                                if (uVar11 < 0x40) {
                                    if ((uVar11 & 0xfffffff8) != 0) {
                                        uVar11 = uVar11 & 0xfffffff8;
                                    }
                                }
                                else {
                                    uVar11 = 0x40;
                                }
                                goto code_r0x00011f8b;
                            }
code_r0x00011f91:
                            if (((in_stack_00000028 & 0xffff0000) != 0) &&
                               (((uStack_c4 | in_stack_00000028) & 0xffff) == 0)) {
                                if ((*(iStack_a0 + 0x8c) == '\0') || (uStack_c4 < *(iStack_a0 + 0x90))) {
                                    uVar14 = *(iStack_a0 + 0x7c);
                                }
                                else {
                                    uVar14 = *(iStack_a0 + 0x80);
                                }
                                if ((uVar14 & 0x20000000) != 0) {
                                    uVar11 = 0x10000;
                                    uVar14 = 0x80000;
                                    goto code_r0x00011fe8;
                                }
                            }
                            uVar11 = 0x1000;
                            uVar14 = 0x60000;
                        }
                        else {
code_r0x00011f8b:
                            if (uVar3 == 2) goto code_r0x00011f91;
code_r0x00011fe8:
                            if ((uVar3 - 1 & 0xfffffffb) == 0) {
                                if ((uVar11 & 7) == 0) {
                                    arg3_00 = NULL;
                                    if (uVar11 != 0) {
                                        do {
                                            *(arg3_00 + arg2_00 + 0x10) = *(arg3_00 + in_stack_00000030);
                                            uVar8 = arg3_00 + 4;
                                            arg3_00 = uVar8;
                                        } while (uVar8 < uVar11);
                                    }
                                }
                                else if (uVar11 != 0) {
                                    uVar13 = uVar11;
                                    arg3_00 = arg2_00 + 0x10;
                                    puVar10 = in_stack_00000030;
                                    do {
                                        uVar2 = *puVar10;
                                        puVar10 = puVar10 + 1;
                                        *arg3_00 = uVar2;
                                        arg3_00 = arg3_00 + 1;
                                        uVar13 = uVar13 - 1;
                                    } while (uVar13 != 0);
                                }
                            }
                        }
                        *(arg2_00 + 8) = uStack_c4 & 0x7ffffff;
                        arg3_00 = CONCAT71(arg3_00 >> 8,1);
                        *(arg2_00 + 4) = (uVar11 - 1 & 0x3f) << 0x18 | *(arg2_00 + 4) & 0xc0e1ffff | uVar14 | 0x10000;
                        cVar4 = fcn.00011b68(arg1,arg2_00,arg3_00);
                        if (cVar4 == '\0') {
                            iVar12 = -0x7ffffffffffffff9;
                            break;
                        }
                        if ((uVar3 < 7) && ((0x59U >> (uVar3 & 0x1f) & 1) != 0)) {
                            if ((uVar11 & 7) == 0) {
                                uVar13 = 0;
                                if (uVar11 != 0) {
                                    do {
                                        *(in_stack_00000030 + uVar13) = *(uVar13 + 0x10 + arg2_00);
                                        uVar8 = uVar13 + 4;
                                        uVar13 = uVar8;
                                    } while (uVar8 < uVar11);
                                }
                            }
                            else if (uVar11 != 0) {
                                uVar13 = uVar11;
                                puVar10 = arg2_00 + 0x10;
                                puVar9 = in_stack_00000030;
                                do {
                                    uVar2 = *puVar10;
                                    puVar10 = puVar10 + 1;
                                    *puVar9 = uVar2;
                                    puVar9 = puVar9 + 1;
                                    uVar13 = uVar13 - 1;
                                } while (uVar13 != 0);
                                arg3_00 = NULL;
                            }
                        }
                        uStack_c4 = uStack_c4 + uVar11;
                        in_stack_00000030 = in_stack_00000030 + uVar11;
                        in_stack_00000028 = in_stack_00000028 - uVar11;
                    } while (in_stack_00000028 != 0);
                }
            }
        }
        iVar5 = 0x10;
        if (uStackX_18 != '\0') {
            if ((uStack_c8 != 0) && (iVar6 = fcn.00012454(arg1,1,&uStack_ac,auStack_98), -1 < iVar6)) {
                *(arg2_00 + 4) = 3;
                cVar4 = uStack_bc;
                if (cVar4 != '\0') {
                    puVar7 = arg2_00 + 0x10;
                    iVar6 = 0x10;
                    do {
                        *puVar7 = 0xffffffff;
                        puVar7 = puVar7 + 1;
                        iVar6 = iVar6 + -1;
                    } while (iVar6 != 0);
                }
                *(arg2_00 + 8) = uStack_ac & 0x7ffffff;
                *(arg2_00 + 4) = (-(cVar4 != '\0') & 0x3f) << 0x18 | 0x10000 | *(arg2_00 + 4) & 0xc0e1ffff;
                if (cVar4 != '\0') {
                    puVar7 = arg2_00 + 0x10;
                    iVar6 = 0x10;
                    do {
                        *puVar7 = 0;
                        puVar7 = puVar7 + 1;
                        iVar6 = iVar6 + -1;
                    } while (iVar6 != 0);
                }
                fcn.00011bd4(arg1,arg2_00);
            }
            *(arg2_00 + 4) = *(arg2_00 + 4) & 0xc0e1fea0 | uStack_b8;
            iVar6 = 0;
            *(arg2_00 + 8) = uStack_b4;
            do {
                *(arg2_00 + 0x10 + iVar6) = *(&var_71h + iVar6 + 1);
                iVar6 = iVar6 + 4;
                iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
        }
        iVar5 = iStack_a0;
    }
    else {
        cVar4 = fcn.00011bd4(arg1,arg2_00);
        if (cVar4 != '\0') {
            uStack_b8 = *(arg2_00 + 4);
            iVar12 = 0x10;
            uStack_c8 = uStack_b8 & 1;
            uStack_bc = CONCAT31(uStack_b8 >> 9,uStack_b8 >> 1) & 0xffffff01;
            uStack_b8 = uStack_b8 & 0x3f1e0000;
            uStack_b4 = *(arg2_00 + 8);
            iVar5 = 0;
            do {
                *(&var_71h + iVar5 + 1) = *(iVar5 + 0x10 + arg2_00);
                iVar12 = iVar12 + -1;
                iVar5 = iVar5 + 4;
            } while (iVar12 != 0);
            uStackX_18 = 1;
            goto code_r0x00011e6a;
        }
        iVar12 = -0x7ffffffffffffff9;
    }
    if (1 < uVar3 - 1) goto code_r0x0001223e;
    if ((*0xc00fd0dc & 0x20) != 0) {
        if (*0x13070 != 0) {
            if (*0x13070 == 1) goto code_r0x00012215;
            *0x13070 = 0;
        }
        if (*0xfed30010 != -1) {
            wrmsr(0x1fe,*0xfed30880 & 0xfffffffe);
        }
    }
code_r0x00012215:
    uVar13 = uStack_90 >> 4 & 0x10000000 | uStack_90 & 0xffffffff;
    *0xc00fd0dc = *0xc00fd0dc & 0xfe;
    *(uVar13 + 0xc0000000) = *(uVar13 + 0xc0000000) & 0xf3 | uVar1 & 0xc;
code_r0x0001223e:
    fcn.00011670(iVar5);
    out(iStack_c0,uStack_a8);
    return iVar12;
}


/* fcn.00011ae8 @ 0x11ae8 */

uint64_t fcn.00011ae8(int64_t arg1,int64_t arg2)

{
    uchar auVar1 [16];
    uint32_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int16_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    
    iVar5 = arg1 + 8;
    uVar2 = in(iVar5);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = arg2 * 0x166;
    iVar6 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar1,8);
    uVar3 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar1,0);
    uVar7 = (uVar2 & 0xffffff) + 1 + ((arg2 * 0x166 - iVar6 >> 1) + iVar6 >> 6);
    uVar4 = uVar7 >> 0x18;
    uVar8 = uVar2 & 0xffffff;
    while ((uVar4 != 0 || (uVar8 < (uVar7 & 0xffffff)))) {
        uVar2 = in(iVar5);
        uVar3 = uVar2;
        if ((uVar2 & 0xffffff) < uVar8) {
            if (uVar4 == 0) {
                return uVar3;
            }
            uVar4 = uVar4 - 1;
        }
        uVar8 = uVar2 & 0xffffff;
    }
    return uVar3;
}


/* fcn.00011570 @ 0x11570 */

uint32_t fcn.00011570(int64_t arg1)

{
    uint8_t uVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    
    uVar2 = *(arg1 + 0x70) + 0x10;
    uVar3 = *((uVar2 >> 4 & 0x10000000 | uVar2 & 0xffffffff) + 0xc0000000) & 0xfffff000;
    uVar2 = *(arg1 + 0x70) + 4;
    uVar1 = *((uVar2 >> 4 & 0x10000000 | uVar2 & 0xffffffff) + 0xc0000000);
    if ((uVar3 == *0x131f0) && ((uVar1 & 2) != 0)) {
        if (*0x13200 == 0) {
            *0x13204 = 0;
            *0x131f4 = 0;
        }
    }
    else {
        uVar2 = *(arg1 + 0x70) + 4;
        uVar2 = uVar2 >> 4 & 0x10000000 | uVar2 & 0xffffffff;
        *0x131f4 = uVar1;
        *0x13204 = uVar3;
        *(uVar2 + 0xc0000000) = *(uVar2 + 0xc0000000) & 0xfd;
        uVar2 = *(arg1 + 0x70) + 0x10;
        *((uVar2 >> 4 & 0x10000000 | uVar2 & 0xffffffff) + 0xc0000000) = *0x131f0;
        uVar2 = *(arg1 + 0x70) + 4;
        uVar2 = uVar2 >> 4 & 0x10000000 | uVar2 & 0xffffffff;
        *(uVar2 + 0xc0000000) = *(uVar2 + 0xc0000000) | 2;
    }
    *0x13200 = *0x13200 + 1;
    return *0x131f0;
}


/* fcn.00011bd4 @ 0x11bd4 */

uint64_t fcn.00011bd4(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    
    uVar2 = 0;
    do {
        if ((*(arg2 + 4) & 0x20) == 0) {
            return CONCAT71(*(arg2 + 4) >> 8,1);
        }
        uVar1 = fcn.00011ae8(*(arg1 + 0x58),10);
        uVar2 = uVar2 + 1;
    } while (uVar2 < 600000);
    return uVar1 & 0xffffffffffffff00;
}


/* fcn.00011b68 @ 0x11b68 */

uint64_t fcn.00011b68(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    uVar3 = 0;
    do {
        uVar1 = *(arg2 + 4);
        uVar2 = uVar1;
        if ((uVar1 & 0x20) == 0) {
            *(arg2 + 4) = 3;
            if (((uVar1 & 2) == 0) || (arg3 != '\x01')) {
                return CONCAT71(uVar1 >> 8,1);
            }
            break;
        }
        uVar2 = fcn.00011ae8(*(arg1 + 0x58),10);
        uVar3 = uVar3 + 1;
    } while (uVar3 < 600000);
    return uVar2 & 0xffffffffffffff00;
}


/* fcn.00012454 @ 0x12454 */

ulong fcn.00012454(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    ulong uVar2;
    int *piVar3;
    int iVar4;
    
    iVar4 = arg2;
    if (iVar4 < 0x11) {
        if (iVar4 == 0x10) {
            *arg3 = 0;
            *arg4 = *(arg1 + 0x84);
        }
        else {
            piVar3 = fcn.00011570(arg1 + -0x10);
            if ((*piVar3 < 0) && (iVar4 == 1)) {
                iVar4 = 6;
            }
            uVar1 = iVar4 * 4 + 0x54;
            if (0xb < iVar4) {
                uVar1 = iVar4 * 4 + 0xb0;
            }
            uVar1 = *(uVar1 + piVar3);
            fcn.00011670(arg1 + -0x10);
            if (uVar1 == 0x7fff) {
                return 0x8000000000000007;
            }
            *arg3 = (uVar1 & 0x7fff) * 0x1000;
            *arg4 = (uVar1 >> 4 & 0x7fff000) + (uVar1 & 0x7fff) * -0x1000 + 0x1000;
        }
        uVar2 = 0;
    }
    else {
        uVar2 = 0x8000000000000002;
    }
    return uVar2;
}


/* fcn.00011670 @ 0x11670 */

void fcn.00011670(int64_t arg1)

{
    uchar uVar1;
    int iVar2;
    uint64_t uVar3;
    
    if (*0x13200 < 2) {
        *0x13200 = 0;
        if (*0x13204 != 0) {
            uVar3 = *(arg1 + 0x70) + 4;
            uVar3 = uVar3 >> 4 & 0x10000000 | uVar3 & 0xffffffff;
            *(uVar3 + 0xc0000000) = *(uVar3 + 0xc0000000) & 0xfd;
            iVar2 = *0x13204;
            uVar3 = *(arg1 + 0x70) + 0x10;
            *0x13204 = 0;
            *((uVar3 >> 4 & 0x10000000 | uVar3 & 0xffffffff) + 0xc0000000) = iVar2;
            uVar1 = *0x131f4;
            uVar3 = *(arg1 + 0x70) + 4;
            *0x131f4 = 0;
            *((uVar3 >> 4 & 0x10000000 | uVar3 & 0xffffffff) + 0xc0000000) = uVar1;
            return;
        }
    }
    else {
        *0x13200 = *0x13200 - 1;
    }
    return;
}


