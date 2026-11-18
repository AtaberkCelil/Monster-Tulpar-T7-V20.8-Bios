// decompiled by r2ghidra: 1190_FirmwarePerformanceSmm.pe32
// functions: 21

/* entry0 @ 0x11224 */

int64_t entry0(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    
    fcn.000112c0(param_1,param_2);
    *0x12280 = -0x7fffffffffffffff;
    iVar1 = section..text(0x12180);
    if (iVar1 == 0) {
        (**(*0x12148 + 0xd0))(0x12010,0,0x12120);
        iVar1 = (***0x12120)(0x11600);
        if ((-1 < iVar1) || (*0x12280 < 0)) {
            *0x12280 = iVar1;
        }
        fcn.000110d0(0x12180,-1);
    }
    iVar1 = *0x12280;
    if (*0x12280 < 0) {
        fcn.00011558();
    }
    return iVar1;
}


/* fcn.000116b0 @ 0x116b0 */

void fcn.000116b0(void)

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
    int64_t iVar7;
    uint32_t uVar8;
    uint64_t noname_0;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    int64_t var_38h;
    int64_t var_40h;
    
    *0x12130 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x12128 = arg2;
    uStackX_8 = arg1;
    (**(*0x12130 + 0x140))(0x12090,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x12138);
    (**(*0x12130 + 0x140))(0x120b0,0,aiStackX_18);
    uStackX_8 = 0;
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,0);
    *0x122a8 = fcn.000116f8();
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,*0x122a8);
    *0x122a0 = uStackX_8 >> 5;
    fcn.00011764();
    uStackX_8 = 0;
    (**(*(arg2 + 0x60) + 0x140))(0x12030,0,&uStackX_8);
    (**(uStackX_8 + 8))(uStackX_8,0x12148);
    puVar4 = fcn.00011764();
    do {
        uVar1 = *puVar4;
        noname_0 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000113d6:
            if (puVar4 == NULL) goto code_r0x000113f9;
            if ((*0x120c0 == *(puVar4 + 4)) && (*0x120c8 == *(puVar4 + 8))) {
                if (puVar4 == NULL) {
code_r0x000113f9:
                    uVar5 = fcn.00011220();
                    fcn.00011210();
                    uVar2 = in(0x1808);
                    iVar7 = fcn.000111f0(noname_0,0x1808);
                    while( true ) {
                        iVar3 = in(0x1808);
                        uVar8 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                        if ((uVar8 >> 0x17 & 1) != 0) break;
                        func_0x000111e0();
                    }
                    iVar6 = fcn.000111f0(uVar8,0x1808);
                    if ((uVar5 >> 9 & 1) == 0) {
                        fcn.00011210();
                    }
                    else {
                        fcn.00011200();
                    }
                    *0x12150 = (iVar6 - iVar7) * 0x2685;
                }
                else {
                    *0x12150 = *(puVar4 + 0xc);
                }
                iVar7 = (**(*0x12138 + 0xd0))(0x12060,0,0x12158);
                if (iVar7 < 0) {
                    *0x12158 = NULL;
                }
                (**(*0x12148 + 0xc0))(0x12040,0x118fc,0x12168);
                (**(*0x12148 + 0xc0))(0x120a0,0x11900,0x12170);
                (**(*0x12148 + 0xc0))(0x12080,0x118fc,0x12160);
                iVar7 = fcn.000118a8();
                if (iVar7 == 0) {
                    *0x12290 = 0x34365f424b434f4c;
                    *0x12298 = 0x120d0;
                    (**(*0x12148 + 0x28))(*0x12148,0x12050,0x12290,0x10);
                    *0x12178 = 1;
                }
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x000113d6;
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
    
    //[00] -r-x section size 4096 named .text
    fcn.000116b0();
    *(arg1 + 0xf8) = 0;
    if ((*0x120e0 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.000110d0 @ 0x110d0 */

void fcn.000110d0(int64_t arg1,int64_t arg2)

{
    *0x1094 = *(arg1 + 0x50);
    //WARNING: Could not recover jumptable at 0x00011179. Too many branches
    //WARNING: Treating indirect jump as call
    (**(arg1 + 0x48))(arg1,arg2);
    return;
}


/* fcn.00011558 @ 0x11558 */

void fcn.00011558(void)

{
    char cVar1;
    
    if (*0x12178 != '\0') {
        (**(*0x12148 + 0x28))(*0x12148,0x12050,0,0);
    }
    if (*0x12168 != 0) {
        (**(*0x12148 + 0xc0))(0x12040,0,0x12168);
    }
    if (*0x12170 != 0) {
        (**(*0x12148 + 0xc0))(0x120a0,0,0x12170);
    }
    if (*0x12160 != 0) {
        (**(*0x12148 + 0xc0))(0x12080,0,0x12160);
    }
    cVar1 = fcn.000116b4(*0x122a8);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x0001174e. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x12138 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x0001175d. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x12130 + 0x48))(*0x122a8);
    return;
}


/* fcn.000116f8 @ 0x116f8 */

ulong fcn.000116f8(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x12138 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00011764 @ 0x11764 */

int64_t fcn.00011764(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x12140 == 0) {
        *0x12140 = 0;
        if (*(*0x12128 + 0x68) != 0) {
            piVar2 = *(*0x12128 + 0x70);
            do {
                if ((*0x12070 == *piVar2) && (*0x12078 == piVar2[1])) {
                    *0x12140 = (*(*0x12128 + 0x70))[uVar1 * 3 + 2];
                    return *0x12140;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x12128 + 0x68));
        }
    }
    return *0x12140;
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


/* fcn.000118a8 @ 0x118a8 */

int64_t fcn.000118a8(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*(*0x12148 + 0x98) != 0) {
        piVar2 = *(*0x12148 + 0xa0);
        do {
            if ((*piVar2 == *0x12050) && (piVar2[1] == *0x12058)) {
                return (*(*0x12148 + 0xa0))[uVar1 * 3 + 2];
            }
            uVar1 = uVar1 + 1;
            piVar2 = piVar2 + 3;
        } while (uVar1 < *(*0x12148 + 0x98));
    }
    return 0;
}


/* fcn.000117d0 @ 0x117d0 */

int64_t fcn.000117d0(int64_t arg1,ulong noname_1,int64_t arg2)

{
    uchar auVar1 [16];
    uchar auVar2 [16];
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint8_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    char cVar10;
    char cVar11;
    
    cVar11 = -1;
    cVar10 = -1;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = *0x12150;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = arg1;
    auVar2 = auVar2 % auVar1;
    uVar9 = auVar2._0_8_;
    uVar7 = 0;
    uVar8 = auVar2._0_4_;
    uVar4 = auVar2._4_4_;
    if (uVar9 == uVar8) {
        if (uVar8 == 0) {
            iVar5 = -1;
        }
        else {
            iVar5 = 0x1f;
            for (uVar3 = uVar8; 0 < uVar3; uVar3 = uVar3 * 2) {
                iVar5 = iVar5 + -1;
            }
        }
    }
    else {
        uVar6 = uVar9 >> 0x20;
        if (uVar4 == 0) {
            iVar5 = -1;
        }
        else {
            iVar5 = 0x1f;
            for (; 0 < uVar6; uVar6 = uVar6 * 2) {
                iVar5 = iVar5 + -1;
            }
        }
        iVar5 = iVar5 + 0x20;
    }
    if (-1 < iVar5 + -0x21) {
        if (uVar9 == uVar8) {
            uVar6 = uVar9 & 0xffffffff;
            if (uVar8 != 0) {
                cVar10 = '\x1f';
                while (0 < uVar8) {
                    cVar10 = cVar10 + -1;
                    uVar8 = uVar6 * 2;
                    uVar6 = uVar8;
                }
            }
        }
        else {
            uVar6 = uVar9 >> 0x20;
            if (uVar4 != 0) {
                cVar11 = '\x1f';
                while (0 < uVar4) {
                    cVar11 = cVar11 + -1;
                    uVar4 = uVar6 * 2;
                    uVar6 = uVar4;
                }
            }
            cVar10 = cVar11 + ' ';
        }
        uVar7 = cVar10 - 0x21;
    }
    return ((uVar9 >> (uVar7 & 0x3f)) * 1000000000) / (*0x12150 >> (uVar7 & 0x3f)) + (arg1 / *0x12150) * 1000000000;
}


/* fcn.000119a4 @ 0x119a4 */

//WARNING: Variable defined which should be unmapped: var_28h

ulong fcn.000119a4(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    ulong *puStackX_10;
    int64_t iStackX_18;
    int64_t var_28h;
    int64_t var_30h;
    
    iVar5 = 0;
    if (arg2 == 0) {
        uVar2 = 0x8000000000000002;
    }
    else {
        puStackX_10 = fcn.00011958();
        if (puStackX_10 == NULL) {
            iVar3 = (**(*0x12148 + 0x60))(0,6,1,&iStackX_18);
            if (-1 < iVar3) {
                iVar3 = (**(*0x12148 + 0x50))(6,0x48,&puStackX_10);
                if (-1 < iVar3) {
                    if (iStackX_18 != arg2) {
                        fcn.00011180(iStackX_18,arg2,0x14);
                    }
                    *puStackX_10 = 0x44584f424b434f4c;
                    if (puStackX_10 + 1 != arg1) {
                        fcn.00011180(puStackX_10 + 1,arg1,0x10);
                    }
                    puStackX_10[3] = arg2;
                    puStackX_10[4] = 0x14;
                    puStackX_10[5] = 0;
                    puStackX_10[6] = iStackX_18;
                    iVar3 = fcn.000118a8();
                    if (iVar3 != 0) {
                        iVar5 = *(iVar3 + 8);
                    }
                    piVar4 = puStackX_10 + 7;
                    *piVar4 = iVar5;
                    puVar1 = *(iVar5 + 8);
                    puStackX_10[8] = puVar1;
                    *puVar1 = piVar4;
                    *(iVar5 + 8) = piVar4;
                    return 0;
                }
                (**(*0x12148 + 0x68))(iStackX_18,1);
            }
            uVar2 = 0x8000000000000009;
        }
        else {
            uVar2 = 0x8000000000000014;
        }
    }
    return uVar2;
}


/* fcn.00011af8 @ 0x11af8 */

ulong fcn.00011af8(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iStackX_10;
    
    if (arg1 == 0) {
        uVar3 = 0x8000000000000002;
    }
    else {
        iVar2 = fcn.00011958();
        if (iVar2 == 0) {
            uVar3 = 0x800000000000000e;
        }
        else {
            uVar1 = *(iVar2 + 0x20);
            if (uVar1 < 0x14) {
                if ((*(iVar2 + 0x28) & 2) == 0) {
                    return 0x8000000000000005;
                }
                if (((uVar1 & 0xfff) != 0) * 0x1000 + (uVar1 & 0xfffffffffffff000) < 0x14) {
                    iVar4 = (**(*0x12148 + 0x60))(0,6,1,&iStackX_10);
                    if (iVar4 < 0) {
                        return 0x8000000000000009;
                    }
                    if ((*(iVar2 + 0x20) != 0) && (iStackX_10 != *(iVar2 + 0x30))) {
                        fcn.00011180(iStackX_10,*(iVar2 + 0x30),*(iVar2 + 0x20));
                    }
                    if (*(iVar2 + 0x20) != 0) {
                        fcn.000111c0(*(iVar2 + 0x30),*(iVar2 + 0x20));
                    }
                    (**(*0x12148 + 0x68))(*(iVar2 + 0x30),(*(iVar2 + 0x20) >> 0xc) + ((*(iVar2 + 0x20) & 0xfff) != 0));
                    *(iVar2 + 0x30) = iStackX_10;
                }
                *(iVar2 + 0x20) = 0x14;
            }
            if (*(iVar2 + 0x30) != arg1) {
                fcn.00011180(*(iVar2 + 0x30),arg1,0x14);
            }
            uVar3 = 0;
        }
    }
    return uVar3;
}


/* fcn.000116b4 @ 0x116b4 */

uint64_t fcn.000116b4(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x122a0 != 0) {
        puVar2 = *0x122a8 + 8;
        in_RAX = *0x122a8;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x122a0);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00011958 @ 0x11958 */

ulong * fcn.00011958(void)

{
    ulong *puVar1;
    int64_t iVar2;
    ulong *puVar3;
    
    iVar2 = fcn.000118a8();
    puVar3 = NULL;
    if (iVar2 != 0) {
        puVar3 = *(iVar2 + 8);
    }
    puVar1 = *puVar3;
    while( true ) {
        if (puVar1 == puVar3) {
            return NULL;
        }
        if ((puVar1[-6] == *0x12000) && (puVar1[-5] == *0x12008)) break;
        puVar1 = *puVar1;
    }
    return puVar1 + -7;
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


