// decompiled by r2ghidra: 1200_SmiVariable.pe32
// functions: 28

/* entry0 @ 0x11230 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.000112c0(arg1,arg2);
    *0x132a0 = -0x7fffffffffffffff;
    iVar1 = section..text(0x131a0);
    if (iVar1 == 0) {
        iVar1 = fcn.00011cd4(arg1,arg2);
        if ((-1 < iVar1) || (*0x132a0 < 0)) {
            *0x132a0 = iVar1;
        }
        fcn.000110d0(0x131a0,-1);
    }
    iVar1 = *0x132a0;
    if (*0x132a0 < 0) {
        fcn.00011f80(*0x132b0);
    }
    return iVar1;
}


/* fcn.00011ec8 @ 0x11ec8 */

void fcn.00011ec8(void)

{
    return;
}


/* fcn.000112c0 @ 0x112c0 */

void fcn.000112c0(int64_t arg1,int64_t arg2)

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
    
    *0x13128 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x13120 = arg2;
    uStackX_8 = arg1;
    (**(*0x13128 + 0x140))(0x13050,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x13130);
    (**(*0x13128 + 0x140))(0x13060,0,aiStackX_18);
    uStackX_8 = 0;
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,0);
    *0x132b0 = fcn.00011f10();
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,*0x132b0);
    *0x132a8 = uStackX_8 >> 5;
    fcn.00011fb8();
    puVar4 = fcn.00011fb8();
    do {
        uVar1 = *puVar4;
        noname_0 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000113ab:
            if (puVar4 == NULL) {
                uVar5 = fcn.00011220();
                fcn.00011210();
                uVar2 = in(0x1808);
                fcn.000111f0(noname_0,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar7 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar7 >> 0x17 & 1) != 0) break;
                    func_0x000111e0();
                }
                fcn.000111f0(uVar7,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00011210();
                }
                else {
                    fcn.00011200();
                }
code_r0x00011414:
                iVar6 = (**(*0x13130 + 0xd0))(0x13020,0,0x13198);
                if (iVar6 < 0) {
                    *0x13198 = NULL;
                }
                return;
            }
            if ((*0x13070 == *(puVar4 + 4)) && (*0x13078 == *(puVar4 + 8))) goto code_r0x00011414;
        }
        else if (uVar1 == 4) goto code_r0x000113ab;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
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
    
    //[00] -r-x section size 8192 named .text
    fcn.00011ec8();
    *(arg1 + 0xf8) = 0;
    if ((*0x130c0 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.00011cd4 @ 0x11cd4 */

int64_t fcn.00011cd4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char acStackX_18 [16];
    
    if (*0x13190 == 0) {
        *0x13140 = *(arg2 + 0x60);
        *0x13148 = *(arg2 + 0x58);
        *0x13190 = arg2;
    }
    acStackX_18[0] = '\0';
    if (*0x13190 == 0) {
        *0x13140 = *(arg2 + 0x60);
        *0x13148 = *(arg2 + 0x58);
        *0x13190 = arg2;
    }
    iVar1 = (**(*0x13140 + 0x140))(0x130a0,0,0x13180);
    if (((-1 < iVar1) && ((***0x13180)(*0x13180,acStackX_18), acStackX_18[0] != '\0')) &&
       (iVar1 = (*(*0x13180)[1])(*0x13180,0x13150), -1 < iVar1)) {
        iVar1 = fcn.0001220c();
        *0x13158 = 1;
        if (iVar1 != 0) {
            *0x13148 = iVar1;
        }
        *0x13168 = 0;
        fcn.000120a0();
        fcn.00012128();
        *0x13168 = 1;
        iVar1 = fcn.00011b38(arg1,arg2);
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


/* fcn.00011f80 @ 0x11f80 */

void fcn.00011f80(int64_t arg1)

{
    char cVar1;
    
    cVar1 = fcn.00011ecc(arg1);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x00011fa1. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x13130 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00011fb1. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x13128 + 0x48))(arg1);
    return;
}


/* fcn.00011ecc @ 0x11ecc */

uint64_t fcn.00011ecc(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x132a8 != 0) {
        puVar2 = *0x132b0 + 8;
        in_RAX = *0x132b0;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x132a8);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00011f10 @ 0x11f10 */

ulong fcn.00011f10(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x13130 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00011fb8 @ 0x11fb8 */

int64_t fcn.00011fb8(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x13138 == 0) {
        *0x13138 = 0;
        if (*(*0x13120 + 0x68) != 0) {
            piVar2 = *(*0x13120 + 0x70);
            do {
                if ((*0x13030 == *piVar2) && (*0x13038 == piVar2[1])) {
                    *0x13138 = (*(*0x13120 + 0x70))[uVar1 * 3 + 2];
                    return *0x13138;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x13120 + 0x68));
        }
    }
    return *0x13138;
}


/* fcn.00011220 @ 0x11220 */

uint64_t fcn.00011220(void)

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


/* fcn.00011210 @ 0x11210 */

void fcn.00011210(void)

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


/* fcn.00011200 @ 0x11200 */

void fcn.00011200(void)

{
    return;
}


/* fcn.00012300 @ 0x12300 */

int64_t fcn.00012300(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00011500 @ 0x11500 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_10h

ulong fcn.00011500(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint64_t *puVar3;
    uint64_t uVar4;
    uchar auStackX_18 [8];
    ulong uStackX_20;
    int64_t var_30h;
    int64_t var_38h;
    uint uStack_28;
    uint uStack_24;
    uint uStack_20;
    uint uStack_1c;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_bp_8h;
    int32_t var_4h;
    
    uStack_28 = 0x1b838190;
    uVar4 = 0;
    uStack_24 = 0x4ead4625;
    uStack_20 = 0x5ecdc9ab;
    uStack_1c = 0xe08ff16a;
    uStackX_20 = 8;
    if (((*0x1311c != 0) && (*0x13118 != 0)) ||
       (iVar2 = (**(*0x13148 + 0x48))(L"HiiDB",&uStack_28,auStackX_18,&uStackX_20,0x13118), -1 < iVar2)) {
        if (*0x1311c == 0) {
            if (*0x13118 == 0) {
                return 0x8000000000000005;
            }
        }
        else if ((*0x13118 != 0) && (arg2 <= *0x13118)) {
            uVar1 = (arg1 & 0xffffffffU) + arg2;
            if (((((arg1 & 0xffffffffU) <= uVar1) && ((*0x1311c <= arg1 && (uVar1 <= *0x13118 + *0x1311c)))) &&
                (*0x13108 != 0)) && (*0x13100 != NULL)) {
                puVar3 = *0x13100;
                if (*0x13108 != 0) {
                    do {
                        uVar1 = *puVar3;
                        if (arg1 < uVar1) {
code_r0x000115fa:
                            if (uVar1 < arg1 + arg2) {
                                return 0x800000000000000f;
                            }
                        }
                        else {
                            if (arg1 < puVar3[1] + uVar1) {
                                return 0x800000000000000f;
                            }
                            if (arg1 < uVar1) goto code_r0x000115fa;
                        }
                        uVar4 = uVar4 + 1;
                        puVar3 = puVar3 + 2;
                    } while (uVar4 < *0x13108);
                }
                return 0;
            }
        }
    }
    return 0x800000000000000f;
}


/* fcn.00011450 @ 0x11450 */

int64_t fcn.00011450(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int16_t *piVar2;
    int16_t *piVar3;
    int16_t *piVar4;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = 0;
    if (piVar2 == NULL) {
code_r0x000114c9:
        *arg2 = 0;
    }
    else {
        piVar4 = piVar2 + 0x18000;
        piVar3 = piVar2;
        if (piVar4 < piVar2) {
            piVar4 = 0xffffffffffffffff;
        }
        for (; piVar3 < piVar4; piVar3 = piVar3 + 1) {
            if (*0x13198 == NULL) {
                iVar1 = -0x7ffffffffffffff1;
                goto code_r0x000114c9;
            }
            iVar1 = (***0x13198)(piVar3,2);
            if (iVar1 < 0) goto code_r0x000114c9;
            if (*piVar3 == 0) break;
        }
        *arg2 = (piVar3 - piVar2 >> 1) * 2 + 2;
    }
    return iVar1;
}


/* fcn.00011f40 @ 0x11f40 */

void fcn.00011f40(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00011f10(arg1,arg1);
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        fcn.00011180(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00011180 @ 0x11180 */

int64_t fcn.00011180(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.000111c0 @ 0x111c0 */

int64_t fcn.000111c0(int64_t arg1,int64_t arg2)

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


/* fcn.00011e28 @ 0x11e28 */

ulong fcn.00011e28(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int16_t iVar1;
    uint64_t extraout_RAX;
    uint in_register_00000014;
    
    if ((((arg1 == 0) || (arg3 == 0)) || (1000000 < CONCAT44(in_register_00000014,arg2))) ||
       (CONCAT44(in_register_00000014,arg2) == 0)) {
        return 0x8000000000000002;
    }
    fcn.00011df4(arg3,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + (extraout_RAX + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x00011e9e;
    }
    if (arg3 < arg1 + CONCAT44(in_register_00000014,arg2) * 2) {
        return 0x800000000000000f;
    }
code_r0x00011e9e:
    iVar1 = *arg3;
    if (iVar1 != 0) {
        arg3 = arg3 - arg1;
        do {
            *arg1 = iVar1;
            arg1 = arg1 + 2;
            iVar1 = *(arg3 + arg1);
        } while (iVar1 != 0);
    }
    *arg1 = 0;
    return 0;
}


/* fcn.0001220c @ 0x1220c */

ulong fcn.0001220c(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    if (*0x13150 != 0) {
        iVar3 = *(*0x13150 + 0xa0);
        for (iVar2 = *(*0x13150 + 0x98); iVar2 != 0; iVar2 = iVar2 + -1) {
            iVar1 = fcn.00012024(iVar3);
            if (iVar1 == 0) {
                return *(iVar3 + 0x10);
            }
            iVar3 = iVar3 + 0x18;
        }
    }
    return 0;
}


/* fcn.000120a0 @ 0x120a0 */

ulong fcn.000120a0(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x13158 == '\0') {
        if (*0x13178 == 0) {
            if (*0x13168 != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x13140 + 0x140))(0x13080,0,0x13178);
        }
    }
    else if (*0x13160 == 0) {
        if ((*0x13168 == '\0') && (*0x13150 != 0)) {
    //WARNING: Could not recover jumptable at 0x000120df. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x13150 + 0xd0))(0x13090,0,0x13160);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.00012128 @ 0x12128 */

int64_t fcn.00012128(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    if (*0x13158 == '\0') {
        if (*0x13188 == 0) {
            if (*0x13168 == '\x01') {
                return -0x7ffffffffffffffd;
            }
            uVar2 = (**(*0x13140 + 0x18))(0x1f);
            (**(*0x13140 + 0x20))(uVar2);
            if (0x10 < uVar2) {
                return -0x7ffffffffffffffd;
            }
            iVar1 = (**(*0x13140 + 0x140))(str.6_6v,0,0x13188);
            if (iVar1 < 0) {
                *0x13188 = 0;
            }
            return iVar1;
        }
    }
    else if (*0x13170 == 0) {
        if (*0x13150 == 0) {
            return -0x7ffffffffffffffd;
        }
        iVar1 = (**(*0x13150 + 0xd0))(0x13010,0,0x13170);
        if (iVar1 < 0) {
            *0x13170 = 0;
        }
        return iVar1;
    }
    return 0;
}


/* fcn.00011b38 @ 0x11b38 */

int64_t fcn.00011b38(void)

{
    ulong *puVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t var_20h_2;
    int64_t var_28h_2;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int32_t var_bp_10h;
    int32_t var_ch;
    int32_t var_bp_8h;
    int32_t var_4h;
    
    iVar4 = 0;
    var_bp_10h = 0x18a3c6dc;
    var_20h = 0;
    var_ch = 0x48c85eea;
    var_bp_8h = 0x33b5c1a1;
    var_4h = -0x66760677;
    var_30h = 0;
    iVar3 = (**(*0x13150 + 0xd0))(&var_bp_10h,0,&var_30h);
    if (-1 < iVar3) {
        var_18h = 0xef;
        iVar3 = (**var_30h)(var_30h,0x1162c,&var_18h,&var_20h);
        if (-1 < iVar3) {
            iVar3 = (**(*0x13140 + 0x140))(0x13060,0,&var_28h);
            if (-1 < iVar3) {
                var_28h_2 = 0;
                iVar3 = (**(var_28h + 0x18))(var_28h,&var_28h_2,0);
                if (iVar3 != -0x7ffffffffffffffb) {
                    return iVar3;
                }
                iVar3 = (**(*0x13140 + 0x40))(4,var_28h_2,&var_20h_2);
                if (-1 < iVar3) {
                    iVar3 = (**(var_28h + 0x18))(var_28h,&var_28h_2,var_20h_2);
                    if (-1 < iVar3) {
                        *0x13108 = var_28h_2 >> 5;
                        *0x13100 = fcn.00011f10();
                        puVar1 = *0x13100;
                        uVar2 = *0x13108;
                        if (*0x13100 == NULL) {
                            *0x13108 = 0;
                            iVar3 = iVar4;
                        }
                        else {
                            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                                *puVar1 = *(iVar4 + 8 + var_20h_2);
                                puVar1[1] = *(iVar4 + 0x10 + var_20h_2);
                                puVar1 = puVar1 + 2;
                                iVar4 = iVar4 + 0x20;
                            }
                        }
                        (**(*0x13140 + 0x48))(var_20h_2);
                        return iVar3;
                    }
                    (**(*0x13140 + 0x48))(var_20h_2);
                }
            }
            iVar3 = 0;
        }
    }
    return iVar3;
}


/* fcn.00011df4 @ 0x11df4 */

uint64_t fcn.00011df4(uint32_t arg1,int64_t arg2)

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


/* fcn.00012024 @ 0x12024 */

int64_t fcn.00012024(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    piVar3 = 0x130b0;
    piVar2 = piVar1;
    if (((arg1 & 7) != 0) && ((arg1 & 7) == 0)) {
        iVar4 = 8;
        do {
            if (*piVar2 != *piVar3) break;
            piVar2 = piVar2 + 1;
            piVar3 = piVar3 + 1;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
    }
    for (; (piVar2 <= piVar1 + 1 && (*piVar2 == *piVar3)); piVar2 = piVar2 + 1) {
        piVar3 = piVar3 + 1;
    }
    while( true ) {
        if (piVar1 + 2 <= piVar2) {
            return 0;
        }
        if (*piVar2 != *piVar3) break;
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
    }
    return *piVar2 - *piVar3;
}


