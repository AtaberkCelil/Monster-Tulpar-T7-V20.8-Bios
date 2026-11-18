// decompiled by r2ghidra: 1235_NvmeSmm.pe32
// functions: 31

/* entry0 @ 0x11284 */

int64_t entry0(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t arg1;
    
    fcn.00011300(param_1,param_2);
    arg1 = 0x142a0;
    *0x143a0 = -0x7fffffffffffffff;
    iVar1 = fcn.00011060(0x142a0);
    if (iVar1 == 0) {
        iVar1 = fcn.000122ec(arg1,param_2);
        if ((-1 < iVar1) || (*0x143a0 < 0)) {
            *0x143a0 = iVar1;
        }
        fcn.00011130(0x142a0,-1);
    }
    iVar1 = *0x143a0;
    if (*0x143a0 < 0) {
        fcn.000125b8(*0x143b0);
    }
    return iVar1;
}


/* fcn.00012500 @ 0x12500 */

void fcn.00012500(void)

{
    return;
}


/* fcn.00011300 @ 0x11300 */

void fcn.00011300(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint64_t noname_0;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    
    *0x14280 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x14278 = arg2;
    uStackX_8 = arg1;
    (**(*0x14280 + 0x140))(0x140a0,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x14288);
    (**(*0x14280 + 0x140))(0x140b0,0,aiStackX_18);
    uStackX_8 = 0;
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,0);
    *0x143b0 = fcn.00012548();
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,*0x143b0);
    *0x143a8 = uStackX_8 >> 5;
    fcn.000125f0();
    puVar4 = fcn.000125f0();
    do {
        uVar1 = *puVar4;
        noname_0 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000113eb:
            if (puVar4 == NULL) {
                uVar5 = fcn.00011280();
                fcn.00011270();
                uVar2 = in(0x1808);
                fcn.00011250(noname_0,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar7 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar7 >> 0x17 & 1) != 0) break;
                    fcn.00011240();
                }
                fcn.00011250(uVar7,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00011270();
                }
                else {
                    fcn.00011260();
                }
code_r0x00011454:
                iVar6 = (**(*0x14288 + 0xd0))(82000,0,0x14298);
                if (iVar6 < 0) {
                    *0x14298 = NULL;
                }
                return;
            }
            if ((*0x140d0 == *(puVar4 + 4)) && (*0x140d8 == *(puVar4 + 8))) goto code_r0x00011454;
        }
        else if (uVar1 == 4) goto code_r0x000113eb;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00011060 @ 0x11060 */

ulong fcn.00011060(int64_t arg1)

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
    
    fcn.00012500();
    *(arg1 + 0xf8) = 0;
    if ((*0x140e0 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.000122ec @ 0x122ec */

int64_t fcn.000122ec(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong *puVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uStackX_8;
    ulong uStackX_10;
    ulong uStackX_18;
    ulong uStackX_20;
    
    uStackX_10 = 0;
    uStackX_8 = 0;
    uStackX_18 = 0;
    uStackX_20 = 0;
    iVar4 = (**(*0x14280 + 0x140))(0x140a0,0,0x143c8);
    if ((-1 < iVar4) && (iVar4 = (**(*0x143c8 + 8))(*0x143c8,0x143d8), -1 < iVar4)) {
        iVar4 = (**(*0x143d8 + 0x50))(6,0x22d28,0x143c0);
        if (iVar4 < 0) {
            return iVar4;
        }
        fcn.00011040(*0x143c0,0x22d28);
        iVar4 = (**(*0x143d8 + 0xe0))(0x11c40,0x14040,0x143b8);
        if (iVar4 < 0) {
            return iVar4;
        }
        iVar4 = (**(*0x143d8 + 0xc0))(0x14090,0x121f4,&uStackX_8);
        if (iVar4 < 0) {
            return iVar4;
        }
        iVar4 = (**(*0x143d8 + 0xc0))(0x14080,0x12268,&uStackX_18);
        if (iVar4 < 0) {
            return iVar4;
        }
        iVar4 = (**(*0x143d8 + 0xc0))(0x14010,0x1225c,&uStackX_20);
        if (iVar4 < 0) {
            return iVar4;
        }
        iVar4 = fcn.00012548();
        if ((iVar4 != 0) && (iVar4 = fcn.00011040(iVar4,0x1c8), iVar4 != 0)) {
            *(iVar4 + 0x160) = 1;
            *(iVar4 + 0x100) = 0x118d8;
            *(iVar4 + 0x108) = 0x117cc;
            (**(*0x143d8 + 0xa8))(&uStackX_10,0x14000,0,iVar4);
            iVar1 = iVar4 + 400;
            *iVar1 = iVar1;
            *(iVar4 + 0x198) = iVar1;
            iVar5 = fcn.00012548();
            if ((iVar5 != 0) && (iVar5 = fcn.00011040(iVar5,0x1168), iVar5 != 0)) {
                *(iVar4 + 0x18) = uStackX_10;
                *(iVar5 + 8) = uStackX_10;
                piVar2 = iVar5 + 0x1108;
                *piVar2 = iVar1;
                puVar3 = *(iVar4 + 0x198);
                *(iVar5 + 0x1110) = puVar3;
                *puVar3 = piVar2;
                *(iVar4 + 0x198) = piVar2;
            }
        }
    }
    return 0;
}


/* fcn.00011040 @ 0x11040 */

int64_t fcn.00011040(int64_t arg1,int64_t arg2)

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


/* fcn.00012548 @ 0x12548 */

ulong fcn.00012548(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x14288 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00011130 @ 0x11130 */

void fcn.00011130(int64_t arg1,int64_t arg2)

{
    *0x1094 = *(arg1 + 0x50);
    //WARNING: Could not recover jumptable at 0x000111d9. Too many branches
    //WARNING: Treating indirect jump as call
    (**(arg1 + 0x48))(arg1,arg2);
    return;
}


/* fcn.000125b8 @ 0x125b8 */

void fcn.000125b8(int64_t arg1)

{
    char cVar1;
    
    cVar1 = fcn.00012504(arg1);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x000125d9. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x14288 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x000125e9. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x14280 + 0x48))(arg1);
    return;
}


/* fcn.00012504 @ 0x12504 */

uint64_t fcn.00012504(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x143a8 != 0) {
        puVar2 = *0x143b0 + 8;
        in_RAX = *0x143b0;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x143a8);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.000125f0 @ 0x125f0 */

int64_t fcn.000125f0(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x14290 == 0) {
        *0x14290 = 0;
        if (*(*0x14278 + 0x68) != 0) {
            piVar2 = *(*0x14278 + 0x70);
            do {
                if ((*0x14060 == *piVar2) && (*0x14068 == piVar2[1])) {
                    *0x14290 = (*(*0x14278 + 0x70))[uVar1 * 3 + 2];
                    return *0x14290;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x14278 + 0x68));
        }
    }
    return *0x14290;
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


/* fcn.00011260 @ 0x11260 */

void fcn.00011260(void)

{
    return;
}


/* fcn.00011490 @ 0x11490 */

void fcn.00011490(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    uint8_t uVar4;
    
    uVar4 = 0;
    do {
        iVar1 = *(uVar4 * 8 + 0x14170);
        if ((iVar1 != 0) && (piVar3 = iVar1 + 400, *piVar3 != piVar3)) {
            for (piVar2 = *piVar3; piVar2 != piVar3; piVar2 = *piVar2) {
                *arg2 = piVar2 + -0x221;
                if (piVar2[-0xb] == arg1) {
                    return;
                }
            }
        }
        uVar4 = uVar4 + 1;
    } while (uVar4 < 0x20);
    *arg2 = 0;
    return;
}


/* fcn.00012a7c @ 0x12a7c */

//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h
//WARNING: Variable defined which should be unmapped: var_39h

int64_t fcn.00012a7c(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    char *arg1_00;
    uchar auVar4 [16];
    uint32_t *puVar5;
    uint32_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong uVar10;
    uint32_t uVar11;
    int64_t iVar12;
    uint64_t uVar13;
    int64_t arg2_00;
    uint64_t uVar14;
    uint32_t *puVar15;
    uint64_t uVar16;
    uint16_t uVar17;
    uint64_t uStackX_8;
    uint16_t uStackX_10;
    int64_t iStackX_18;
    uint64_t uStackX_20;
    uint64_t in_stack_00000028;
    uint32_t *puStack0000000000000030;
    char in_stack_00000038;
    int64_t var_4fh;
    int16_t var_57h;
    uint64_t uStack_98;
    int64_t iStack_90;
    uint64_t uVar18;
    int64_t in_stack_ffffffffffffff90;
    int64_t iStack_68;
    int64_t var_51h;
    int64_t var_49h;
    int64_t var_41h;
    int64_t var_39h;
    int64_t var_31h;
    int64_t var_29h;
    int64_t var_21h;
    int64_t var_19h;
    int64_t var_11h;
    
    iVar7 = *(arg1 + 0x18);
    puVar15 = *(arg1 + 0x1040);
    uVar18 = 0;
    iStack_90 = 0;
    iVar3 = *(iVar7 + 0x158);
    arg1_00 = *(iVar7 + 0x40);
    if (*puVar15 == arg2) {
        if (arg4 == 0) {
            iVar7 = 0;
        }
        else {
            if ((puVar15[4] < 2) || (in_stack_00000028 % puVar15[4] == 0)) {
                if (arg4 % puVar15[3] != 0) {
                    return -0x7ffffffffffffffc;
                }
                if ((arg3 <= *(puVar15 + 6)) && (arg4 / puVar15[3] + arg3 <= *(puVar15 + 6) + 1)) {
                    uVar17 = *(arg1 + 0xb8 + (*(arg1 + 0x52) & 0xf) * 4);
                    uStackX_8 = arg4;
                    uStackX_10 = uVar17;
                    iStackX_18 = arg3;
                    uStackX_20 = arg4;
                    puStack0000000000000030 = puVar15;
                    iVar12 = iVar7;
                    if (*(iVar7 + 0x160) == '\0') {
                        if (*(arg1 + 0x1140) != 0) {
                            *(arg1 + 0x1160) = *(arg1 + 0x1158);
                            iVar8 = (**(*(iVar7 + 0x10) + 0x48))
                                              (*(iVar7 + 0x10),2,*(arg1 + 0x1140),arg1 + 0x1160,arg1 + 0x1148,
                                               arg1 + 0x1150);
                            if (iVar8 < 0) {
                                return iVar8;
                            }
                        }
                        if (*(arg1 + 0x1118) != 0) {
                            *(arg1 + 0x1138) = *(arg1 + 0x1130);
                            iVar8 = (**(*(iVar7 + 0x10) + 0x48))
                                              (*(iVar7 + 0x10),2,*(arg1 + 0x1118),arg1 + 0x1138,arg1 + 0x1120,
                                               arg1 + 0x1128);
                            if (iVar8 < 0) {
                                return iVar8;
                            }
                        }
                    }
                    do {
                        uVar1 = *(*(iVar7 + 0x168) + 0x4d);
                        if (uVar1 == 0) {
                            uVar13 = puVar15[3] << 10;
                        }
                        else {
                            uVar13 = (1LL << (uVar1 & 0x3f)) * *(iVar7 + 0x34);
                        }
                        if (uVar13 < uStackX_8) {
                            uStackX_8 = uVar13;
                        }
                        if (*(arg1 + 0x1118) == 0) {
                            uStack_98 = in_stack_00000028;
                            uVar13 = uVar18;
                            if (*(arg1 + 0x1140) != 0) {
                                if (*(arg1 + 0x1160) < uStackX_8) {
                                    uStackX_8 = *(arg1 + 0x1160);
                                }
                                goto code_r0x00012cb8;
                            }
                        }
                        else {
                            iStack_90 = (uStackX_8 / puVar15[3]) * uVar17;
                            uVar18 = uStackX_8 + iStack_90;
                            if (*(arg1 + 0x1138) < uStackX_8 + iStack_90) {
                                uVar18 = *(arg1 + 0x1138);
                            }
                            uStack_98 = *(arg1 + 0x1120);
                            uStackX_8 = uVar18;
                            uVar18 = in_stack_00000028;
code_r0x00012cb8:
                            uVar13 = uVar18;
                        }
                        if (((*(iVar7 + 0x160) == '\0') && (*(arg1 + 0x1118) == 0)) &&
                           (iVar8 = (**(*(iVar7 + 0x10) + 0x48))
                                              (*(iVar7 + 0x10),in_stack_00000038 == '\x02',in_stack_00000028,
                                               &uStackX_8,&uStack_98,&stack0xffffffffffffff90), iVar8 < 0)) {
                            return iVar8;
                        }
                        fcn.000111e0(arg1_00,0x48,0);
                        *arg1_00 = in_stack_00000038;
                        arg1_00[0x40] = '\0';
                        iVar8 = fcn.000128b0(iVar7,arg1_00,uStackX_8,uStack_98,uVar13,iVar12,
                                             in_stack_ffffffffffffff90);
                        puVar5 = puStack0000000000000030;
                        if (iVar8 < 0) goto code_r0x00012fe0;
                        uVar11 = puVar15[3];
                        auVar4._8_8_ = 0;
                        auVar4._0_8_ = iStack_68 - iStack_90;
                        uVar9 = SUB168(auVar4 / ZEXT416(uVar11),0);
                        if (in_stack_00000038 == '\x01') {
                            uVar18 = uVar13;
                            if (*(arg1 + 0x1118) == 0) {
                                if ((*(arg1 + 0x1140) != 0) && (uVar9 != 0)) {
                                    uVar14 = uStackX_10;
                                    iVar8 = 0;
                                    uVar13 = uVar9;
                                    do {
                                        if (uVar14 != 0) {
                                            fcn.000111e0(*(arg1 + 0x1140) + iVar8,uVar14,0);
                                        }
                                        iVar8 = iVar8 + uVar14;
                                        uVar13 = uVar13 - 1;
                                    } while (uVar13 != 0);
                                    goto code_r0x00012e37;
                                }
                            }
                            else {
                                uVar14 = 0;
                                if (uVar9 != 0) {
                                    uVar6 = uStackX_10;
                                    iVar7 = iVar12;
                                    do {
                                        uVar2 = puVar5[3];
                                        uVar16 = uVar2;
                                        iVar8 = uVar16 * uVar14 + uVar13;
                                        iVar12 = (uVar2 + uVar6) * uVar14 + *(arg1 + 0x1118);
                                        if ((uVar16 != 0) && (iVar12 != iVar8)) {
                                            section..text(iVar12,iVar8,uVar16);
                                        }
                                        if (uVar6 != 0) {
                                            uVar2 = puVar5[3];
                                            fcn.000111e0((uVar2 + uVar6) * uVar14 + uVar2 + *(arg1 + 0x1118),uVar6,0);
                                        }
                                        uVar14 = uVar14 + 1;
                                    } while (uVar14 < uVar9);
                                    iVar12 = iVar7;
code_r0x00012e37:
                                    arg3 = iStackX_18;
                                }
                                puVar15 = puStack0000000000000030;
                                uVar13 = uVar18;
                            }
                        }
                        arg1_00[1] = arg1_00[1] & 0x3c;
                        *(arg1_00 + 2) = *(iVar3 + 2);
                        *(arg1_00 + 4) = *(arg1 + 0x14);
                        if (*(arg1 + 0x1140) == 0) {
                            uVar10 = 0;
                        }
                        else {
                            uVar10 = *(arg1 + 0x1148);
                        }
                        arg1_00[0x34] = '\0';
                        arg1_00[0x35] = '\0';
                        arg1_00[0x36] = '\0';
                        arg1_00[0x37] = '\0';
                        uVar11 = SUB164(auVar4 / ZEXT416(uVar11),0) + 0x7fffffff;
                        arg1_00[0x38] = '\0';
                        arg1_00[0x39] = '\0';
                        arg1_00[0x3a] = '\0';
                        arg1_00[0x3b] = '\0';
                        *(arg1_00 + 0x10) = uVar10;
                        *(arg1_00 + 0x2c) = arg3 >> 0x20;
                        *(arg1_00 + 0x28) = arg3;
                        *(arg1_00 + 0x30) = uVar11;
                        *(arg1_00 + 0x42) = *(iVar7 + 0xa4);
                        arg1_00[0x44] = -0x18;
                        arg1_00[0x45] = '\x03';
                        arg1_00[0x46] = '\0';
                        arg1_00[0x47] = '\0';
                        if ((*(arg1 + 0x55) & 7) != 0) {
                            *(arg1_00 + 0x30) = uVar11 | 0x20000000;
                        }
                        iVar8 = fcn.00013038(iVar7,arg1_00,&var_51h + 1);
                        puVar5 = puStack0000000000000030;
                        uVar17 = uStackX_10;
                        if (iVar8 < 0) {
                            if (*(iVar7 + 0x160) != '\0') {
                                return iVar8;
                            }
                            if (*(arg1 + 0x1118) == 0) {
                                (**(*(iVar7 + 0x10) + 0x50))(*(iVar7 + 0x10),in_stack_ffffffffffffff90);
                            }
code_r0x00012fe0:
                            if (*(iVar7 + 0x160) == '\0') {
                                if (*(arg1 + 0x1140) != 0) {
                                    (**(*(iVar7 + 0x10) + 0x50))(*(iVar7 + 0x10),*(arg1 + 0x1150));
                                }
                                if (*(arg1 + 0x1118) != 0) {
                                    (**(*(iVar7 + 0x10) + 0x50))(*(iVar7 + 0x10),*(arg1 + 0x1128));
                                }
                            }
                            return iVar8;
                        }
                        uVar18 = uVar13;
                        if (*(arg1 + 0x1118) != 0) {
                            uStackX_8 = uStackX_8 - iStack_90;
                            if (in_stack_00000038 == '\x02') {
                                uVar14 = 0;
                                if (uVar9 != 0) {
                                    do {
                                        iVar7 = iVar12;
                                        uVar16 = puVar5[3];
                                        iVar12 = uVar16 * uVar14 + uVar13;
                                        arg2_00 = (puVar5[3] + uVar17) * uVar14 + *(arg1 + 0x1118);
                                        if ((uVar16 != 0) && (iVar12 != arg2_00)) {
                                            section..text(iVar12,arg2_00,uVar16);
                                        }
                                        uVar14 = uVar14 + 1;
                                        iVar12 = iVar7;
                                    } while (uVar14 < uVar9);
                                    arg3 = iStackX_18;
                                }
                                puVar15 = puStack0000000000000030;
                            }
                        }
                        arg3 = arg3 + uVar9;
                        uStackX_8 = uStackX_8 - puVar15[3] * uVar9;
                        uStackX_20 = uStackX_20 - puVar15[3] * uVar9;
                        in_stack_00000028 = in_stack_00000028 + puVar15[3] * uVar9;
                        if (uStackX_8 == 0) {
                            uStackX_8 = uStackX_20;
                        }
                        iStackX_18 = arg3;
                        if ((*(iVar7 + 0x160) == '\0') && (*(arg1 + 0x1118) == 0)) {
                            (**(*(iVar7 + 0x10) + 0x50))(*(iVar7 + 0x10),in_stack_ffffffffffffff90);
                        }
                        if (uStackX_8 == 0) goto code_r0x00012fe0;
                        uVar17 = uStackX_10;
                    } while( true );
                }
            }
            iVar7 = -0x7ffffffffffffffe;
        }
    }
    else {
        iVar7 = -0x7ffffffffffffff3;
    }
    return iVar7;
}


/* section..text @ 0x11000 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 12288 named .text
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


/* fcn.00013668 @ 0x13668 */

uint fcn.00013668(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    uint auStackX_8 [8];
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    auStackX_8[0] = 0;
    if (iVar2 == 0) {
        auStackX_8[0] = 0;
    }
    else if ((*(iVar2 + 0x160) == '\0') && (iVar1 = *(iVar2 + 0x10), iVar1 != 0)) {
        (**(iVar1 + 0x10))(iVar1,2,0,arg2,1,auStackX_8);
    }
    else {
        auStackX_8[0] = *(arg2 + *(iVar2 + 8));
    }
    return auStackX_8[0];
}


/* fcn.000136c4 @ 0x136c4 */

void fcn.000136c4(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    int64_t aiStackX_18 [2];
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if (iVar2 != 0) {
        if ((*(iVar2 + 0x160) == '\0') && (iVar1 = *(iVar2 + 0x10), iVar1 != 0)) {
            aiStackX_18[0] = arg3;
            (**(iVar1 + 0x18))(iVar1,2,0,arg2,1,aiStackX_18);
        }
        else {
            *(arg2 + *(iVar2 + 8)) = arg3;
        }
    }
    return;
}


/* fcn.000126bc @ 0x126bc */

int64_t fcn.000126bc(int64_t arg1,int64_t arg2)

{
    fcn.0001265c((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.0001265c @ 0x1265c */

void fcn.0001265c(int64_t arg1)

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
            fcn.00011240();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00012578 @ 0x12578 */

void fcn.00012578(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00012548(arg1,arg1);
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00011240 @ 0x11240 */

void fcn.00011240(void)

{
    return;
}


/* fcn.00013038 @ 0x13038 */

int64_t fcn.00013038(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    ushort *puVar1;
    ushort uVar2;
    uint16_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint in_register_0000000c;
    int64_t arg1_00;
    char cVar6;
    int64_t iVar7;
    bool bVar8;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    puVar1 = *(arg1_00 + 0x158);
    cVar6 = '\0';
    if (*(arg1_00 + 0x48) == 1) {
        return -0x7ffffffffffffff9;
    }
    while( true ) {
        iVar7 = -0x7ffffffffffffff9;
        if (*(arg2 + 0x40) == '\0') {
            uVar2 = puVar1[1];
        }
        else {
            uVar2 = *puVar1;
        }
        *(arg2 + 2) = uVar2;
        iVar5 = *(arg1_00 + 0x158);
        if (*(arg2 + 0x40) == '\0') {
            if (*(iVar5 + 0x12) == 0) {
                bVar8 = *(iVar5 + 0x14) == *(arg1_00 + 0xf8);
            }
            else {
                bVar8 = *(iVar5 + 0x14) - 1 == *(iVar5 + 0x12);
            }
            if ((bVar8) && (iVar4 = fcn.00013434(arg1), iVar4 < 0)) {
                return -0x7ffffffffffffff7;
            }
            iVar4 = *(iVar5 + 0x14) * 0x40 + *(arg1_00 + 0xb8);
            if (iVar4 != arg2) {
                section..text(iVar4,arg2,0x40);
            }
            *(iVar5 + 0x14) = *(iVar5 + 0x14) + 1;
            if (*(arg1_00 + 0xf8) < *(iVar5 + 0x14)) {
                *(iVar5 + 0x14) = 0;
            }
        }
        else {
            if (*(iVar5 + 8) == 0) {
                bVar8 = *(iVar5 + 10) == *(arg1_00 + 0xa0);
            }
            else {
                bVar8 = *(iVar5 + 10) - 1 == *(iVar5 + 8);
            }
            if ((bVar8) && (iVar4 = fcn.00013434(arg1), iVar4 < 0)) {
                return -0x7ffffffffffffff7;
            }
            iVar4 = *(iVar5 + 10) * 0x40 + *(arg1_00 + 0x58);
            if (iVar4 != arg2) {
                section..text(iVar4,arg2,0x40);
            }
            *(iVar5 + 10) = *(iVar5 + 10) + 1;
            if (*(arg1_00 + 0xa0) < *(iVar5 + 10)) {
                *(iVar5 + 10) = 0;
            }
        }
        if (*(arg2 + 0x40) == '\0') {
            uVar3 = puVar1[10];
        }
        else {
            uVar3 = puVar1[5];
        }
        fcn.000136c4(arg1,(4 << (*(arg1_00 + 0x2f) & 0x1f)) * *(arg2 + 0x42) * 2 + 0x1000,uVar3);
        if (*arg2 == '\f') {
            return 0;
        }
        iVar5 = fcn.00013268(arg1_00,arg2,arg3);
        if (((iVar5 == -0x7fffffffffffffeb) || (iVar5 == -0x7fffffffffffffee)) && (*(arg1_00 + 0x48) == 0)) {
            iVar7 = fcn.00013434(arg1);
            *(arg1_00 + 0x48) = iVar7 < 0;
        }
        if (-1 < iVar5) break;
        if (iVar7 < 0) {
            return iVar5;
        }
        bVar8 = cVar6 == '\0';
        cVar6 = cVar6 + -1;
        if (bVar8) {
            return iVar5;
        }
    }
    return iVar5;
}


/* fcn.000111e0 @ 0x111e0 */

int64_t fcn.000111e0(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.000128b0 @ 0x128b0 */

int64_t fcn.000128b0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h,int64_t arg_68h,
                    int64_t arg_78h)

{
    ulong uVar1;
    char cVar2;
    int64_t iVar3;
    uint64_t uVar4;
    char cVar5;
    int64_t *piVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    char cVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    ulong uStackX_8;
    uint64_t uStackX_10;
    char acStackX_18 [8];
    int64_t in_stack_00000028;
    ulong *in_stack_00000030;
    int32_t var_40h;
    int8_t var_44h;
    int32_t var_48h;
    int8_t var_4ch;
    int32_t var_50h;
    int8_t var_54h;
    
    uVar7 = 0;
    *(arg2 + 0x18) = arg4;
    uVar4 = *(arg1 + 0x3c);
    uVar8 = uVar4 - (uVar4 - 1 & arg4);
    if (arg3 <= uVar8) {
        uVar8 = arg3;
    }
    uVar9 = arg3 - uVar8;
    uVar12 = uVar7;
    if (uVar9 != 0) {
        if (uVar4 < uVar9) {
            cVar11 = '\n';
            cVar5 = '\t';
            uStackX_10 = CONCAT35(uStackX_10._5_3_,0xff00000000);
            cVar2 = '\x06';
            acStackX_18[4] = 0xff;
            uStackX_8 = CONCAT35(uStackX_8._5_3_,0xff00000000);
            uStackX_10 = CONCAT44(uStackX_10._4_4_,0x8281020a);
            acStackX_18[0] = '\t';
            acStackX_18[1] = '\x11';
            acStackX_18[2] = '\r';
            acStackX_18[3] = '\x15';
            uStackX_8 = CONCAT44(uStackX_8._4_4_,0xd150906);
            if (*(arg2 + 0x40) != '\0') {
                uVar13 = 0;
                do {
                    if (*arg2 == cVar2) goto code_r0x000129e1;
                    uVar13 = uVar13 + 1;
                    cVar2 = *(&uStackX_8 + uVar13);
                } while (cVar2 != -1);
            }
            if (*(arg1 + 0x1a0) < 0x10101) {
                uVar13 = 0;
                if (*(arg2 + 0x40) == '\0') {
                    do {
                        if (*arg2 == cVar5) goto code_r0x000129e1;
                        uVar13 = uVar13 + 1;
                        cVar5 = acStackX_18[uVar13];
                    } while (cVar5 != -1);
                }
                else {
                    do {
                        if (*arg2 == cVar11) {
code_r0x000129e1:
                            *_var_48h = uVar4 + uVar8;
                            return -0x7ffffffffffffffc;
                        }
                        uVar13 = uVar13 + 1;
                        cVar11 = acStackX_18[uVar13 - 8];
                    } while (cVar11 != -1);
                }
            }
            if (in_stack_00000028 == 0) {
                uVar1 = *(*(arg1 + 0x1c0) + 0x50);
                *in_stack_00000030 = uVar1;
                uStackX_10 = uVar4;
                iVar3 = (**(*(arg1 + 0x10) + 0x48))(*(arg1 + 0x10),2,uVar1,&uStackX_10,&uStackX_8,0);
                if (iVar3 < 0) {
                    return iVar3;
                }
            }
            else {
                *in_stack_00000030 = *(in_stack_00000028 + 0x20);
                uStackX_8 = *(in_stack_00000028 + 0x28);
            }
            uVar4 = *(arg1 + 0x3c);
            arg4 = uVar8 + arg4;
            piVar6 = *in_stack_00000030;
            uVar13 = *(arg1 + 0x3c) >> 3;
            do {
                *piVar6 = arg4;
                piVar6 = piVar6 + 1;
                if (uVar9 < uVar4) {
                    uVar14 = uVar9 & 0xffffffff;
                    uVar10 = uVar7;
                }
                else {
                    uVar10 = uVar9 - uVar4;
                    uVar14 = uVar4;
                    uVar9 = uVar4;
                }
                arg4 = arg4 + uVar9;
                uVar12 = uVar12 + uVar14;
                uVar13 = uVar13 - 1;
            } while ((uVar13 != 0) && (uVar9 = uVar10, uVar10 != 0));
            *(arg2 + 0x20) = uStackX_8;
        }
        else {
            *(arg2 + 0x20) = uVar8 + arg4;
            uVar12 = uVar9;
        }
    }
    *_var_48h = uVar12 + uVar8;
    return 0;
}


/* fcn.00013434 @ 0x13434 */

int64_t fcn.00013434(uint32_t arg1)

{
    uint8_t *puVar1;
    ushort *puVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint in_register_0000000c;
    int64_t arg1_00;
    int64_t iVar7;
    int iVar8;
    uchar auStack_78 [16];
    uchar auStack_68 [2];
    ushort uStack_66;
    uint uStack_40;
    uint uStack_3c;
    uchar uStack_28;
    ushort uStack_26;
    uint uStack_24;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar6 = *(arg1_00 + 0x158);
    iVar5 = 0;
    if ((*(arg1_00 + 0x160) == '\0') && (*(arg1_00 + 0x48) != 2)) {
        *(arg1_00 + 0x48) = 2;
        uVar4 = fcn.00013668(arg1,0x14);
        iVar8 = *(arg1_00 + 0x2e) * 500;
        uVar3 = fcn.00013668(arg1,0x14);
        if ((uVar3 & 1) != 0) {
            fcn.000136c4(arg1,0x14,0);
            do {
                iVar7 = 0x1c;
                uVar3 = fcn.00013668(arg1,0x1c);
                if ((uVar3 & 1) == 0) break;
                fcn.000126bc(1000,iVar7);
                iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
        }
        if (iVar8 != 0) {
            fcn.000136c4(arg1,0x24,*(arg1_00 + 0xa0));
            fcn.000136c4(arg1,0x28,*(arg1_00 + 0x60));
            fcn.000136c4(arg1,0x2c,*(arg1_00 + 0x60) >> 0x20);
            fcn.000136c4(arg1,0x30,*(arg1_00 + 0x88));
            fcn.000136c4(arg1,0x34,*(arg1_00 + 0x88) >> 0x20);
            fcn.000136c4(arg1,0x14,uVar4 | 1);
            iVar8 = *(arg1_00 + 0x2e) * 500;
            do {
                iVar7 = 0x1c;
                uVar3 = fcn.00013668(arg1,0x1c);
                if ((uVar3 & 1) != 0) break;
                fcn.000126bc(1000,iVar7);
                iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
            if (iVar8 != 0) {
                puVar1 = iVar6 + 0xc;
                *puVar1 = *puVar1 & 0xfe;
                *(iVar6 + 4) = 0;
                puVar2 = *(arg1_00 + 0x158);
                if ((*(arg1_00 + 0x48) != 2) || (*(arg1_00 + 0x4c) == '\0')) {
                    *(arg1_00 + 0x4c) = 1;
                    fcn.00011040(auStack_68,0x48);
                    auStack_68[0] = 9;
                    uStack_66 = *puVar2;
                    uStack_40 = 7;
                    uStack_3c = 0x10001;
                    uStack_28 = 1;
                    uStack_26 = 0;
                    uStack_24 = 1000;
                    iVar5 = fcn.00013038(arg1,auStack_68,auStack_78);
                    *(arg1_00 + 0x4c) = 0;
                    if (iVar5 < 0) {
                        return iVar5;
                    }
                }
                if (*(arg1_00 + 0xa4) == 1) {
                    iVar6 = fcn.000126f0(arg1_00,auStack_68,1,*(arg1_00 + 0xf8));
                    return iVar6;
                }
                return iVar5;
            }
        }
    }
    return -0x7ffffffffffffff9;
}


/* fcn.00013268 @ 0x13268 */

ulong fcn.00013268(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int16_t iVar2;
    int16_t *piVar3;
    uint64_t uVar4;
    uint16_t uVar5;
    int64_t arg2_00;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    
    uVar6 = 0;
    piVar3 = *(arg1 + 0x158);
    iVar8 = *(arg2 + 0x44) * 100;
    if (*(arg2 + 0x40) == '\0') {
        iVar2 = piVar3[1];
        iVar7 = *(arg1 + 0xe0);
        uVar5 = piVar3[7];
    }
    else {
        iVar2 = *piVar3;
        iVar7 = *(arg1 + 0x80);
        uVar5 = piVar3[2];
    }
    if (uVar5 == 0) {
        if (*(arg2 + 0x40) == '\0') {
            *(piVar3 + 0xb) = *(piVar3 + 0xb) ^ (~*(piVar3 + 0xb) ^ *(piVar3 + 0xb)) & 1;
        }
        else {
            *(piVar3 + 6) = *(piVar3 + 6) ^ (~*(piVar3 + 6) ^ *(piVar3 + 6)) & 1;
        }
    }
    iVar7 = uVar5 * 0x10 + iVar7;
    do {
        if ((*(iVar7 + 0xc) == iVar2) && (*(iVar7 + 10) == *(arg2 + 0x42))) {
            if (*(arg2 + 0x40) == '\0') {
                uVar1 = *(piVar3 + 0xb);
            }
            else {
                uVar1 = *(piVar3 + 6);
            }
            if ((*(iVar7 + 0xe) & 1) == (uVar1 & 1)) {
                if (iVar8 == 0) {
                    return 0x8000000000000012;
                }
                uVar5 = *(iVar7 + 8);
                if (*(arg2 + 0x40) == '\0') {
                    piVar3[9] = uVar5;
                    piVar3[7] = uVar5;
                }
                else {
                    piVar3[4] = uVar5;
                    piVar3[2] = uVar5;
                }
                fcn.000136c4(arg1,(4 << (*(arg1 + 0x2f) & 0x1f)) * (*(arg2 + 0x42) * 2 + 1) + 0x1000,uVar5);
                if (((*(iVar7 + 0xe) & 0x1fe) != 0) || ((*(iVar7 + 0xe) & 0xe00) != 0)) {
                    uVar6 = 0x8000000000000007;
                }
                if (arg3 != iVar7) {
                    section..text(arg3,iVar7,0x10);
                }
                if (*(arg2 + 0x40) == '\0') {
                    piVar3[1] = piVar3[1] + 1;
                }
                else {
                    *piVar3 = *piVar3 + 1;
                }
                return uVar6;
            }
        }
        arg2_00 = 0x1c;
        uVar4 = fcn.00013668(arg1,0x1c);
        if ((uVar4 & 2) != 0) {
            return 0x8000000000000015;
        }
        fcn.000126bc(10,arg2_00);
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    return 0x8000000000000012;
}


/* fcn.000126f0 @ 0x126f0 */

int64_t fcn.000126f0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ushort *puVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int iVar4;
    uchar auStack_28 [16];
    
    puVar1 = *(arg1 + 0x158);
    iVar2 = 0;
    if ((*(arg1 + 0xe0) == 0) || (*(arg1 + 0xb8) == 0)) {
        iVar2 = -0x7ffffffffffffff7;
    }
    else {
        fcn.00011040(arg2,0x48);
        uVar3 = *(arg1 + 0xfc) + 1;
        if (uVar3 != 0) {
            fcn.00011040(*(arg1 + 0xe0),uVar3 << 4);
        }
        if ((*(arg1 + 0x48) != 2) || (*(arg1 + 0x4d) == '\0')) {
            *(arg1 + 0x4d) = 1;
            *(arg2 + 1) = *(arg2 + 1) & 0x3c;
            *arg2 = 5;
            *(arg2 + 2) = *puVar1;
            *(arg2 + 4) = 0;
            iVar4 = arg4 * 0x10000 + arg3;
            *(arg2 + 0x18) = *(arg1 + 0xe8);
            *(arg2 + 0x20) = 0;
            *(arg2 + 0x28) = iVar4;
            *(arg2 + 0x2c) = 1;
            *(arg2 + 0x40) = 1;
            *(arg2 + 0x42) = 0;
            *(arg2 + 0x44) = 1000;
            iVar2 = fcn.00013038(arg1,arg2,auStack_28);
            *(arg1 + 0x4d) = 0;
            if (-1 < iVar2) {
                fcn.00011040(arg2,0x48);
                uVar3 = *(arg1 + 0xf8) + 1;
                if (uVar3 != 0) {
                    fcn.00011040(*(arg1 + 0xb8),uVar3 << 6);
                }
                if ((*(arg1 + 0x48) != 2) || (*(arg1 + 0x4e) == '\0')) {
                    *(arg1 + 0x4e) = 1;
                    *(arg2 + 1) = *(arg2 + 1) & 0x3c;
                    *arg2 = 1;
                    *(arg2 + 2) = *puVar1;
                    *(arg2 + 4) = 0;
                    *(arg2 + 0x18) = *(arg1 + 0xc0);
                    *(arg2 + 0x20) = 0;
                    *(arg2 + 0x28) = iVar4;
                    *(arg2 + 0x2c) = ((arg3 & 0xffffU) << 0x10) + 1;
                    *(arg2 + 0x40) = 1;
                    *(arg2 + 0x42) = 0;
                    *(arg2 + 0x44) = 1000;
                    iVar2 = fcn.00013038(arg1,arg2,auStack_28);
                    *(arg1 + 0x4e) = 0;
                }
            }
        }
        *(puVar1 + 0xb) = *(puVar1 + 0xb) & 0xfe;
        *(puVar1 + 7) = 0;
    }
    return iVar2;
}


