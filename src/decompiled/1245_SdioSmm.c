// decompiled by r2ghidra: 1245_SdioSmm.pe32
// functions: 33

/* entry0 @ 0x11224 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.00011254(arg1,arg2);
    iVar1 = fcn.000113e4(arg1,arg2);
    if (iVar1 < 0) {
        fcn.00011be8(*0x13240);
    }
    return iVar1;
}


/* fcn.00011254 @ 0x11254 */

void fcn.00011254(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t uVar7;
    char **argv;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    
    *0x13108 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x13100 = arg2;
    uStackX_8 = arg1;
    (**(*0x13108 + 0x140))(0x13040,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x13110);
    (**(*0x13108 + 0x140))(0x13050,0,aiStackX_18);
    uStackX_8 = 0;
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,0);
    *0x13240 = fcn.00011b78();
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,*0x13240);
    *0x13238 = uStackX_8 >> 5;
    fcn.00011c20();
    puVar4 = fcn.00011c20();
    do {
        uVar1 = *puVar4;
        argv = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x0001133f:
            if (puVar4 == NULL) {
                uVar5 = fcn.00011220();
                fcn.00011210();
                uVar2 = in(0x1808);
                main(argv);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar7 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar7 >> 0x17 & 1) != 0) break;
                    fcn.000111e0();
                }
                main(uVar7);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00011210();
                }
                else {
                    fcn.00011200();
                }
code_r0x000113a8:
                iVar6 = (**(*0x13110 + 0xd0))(0x13010,0,0x13128);
                if (iVar6 < 0) {
                    *0x13128 = NULL;
                }
                return;
            }
            if ((*0x13080 == *(puVar4 + 4)) && (*0x13088 == *(puVar4 + 8))) goto code_r0x000113a8;
        }
        else if (uVar1 == 4) goto code_r0x0001133f;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.000113e4 @ 0x113e4 */

ulong fcn.000113e4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_8;
    int64_t aiStackX_10 [3];
    
    *0x13230 = 0x8000000000000001;
    iStackX_8 = arg1;
    aiStackX_10[0] = arg2;
    iVar1 = fcn.00011040(0x13130);
    if (iVar1 == 0) {
        aiStackX_10[0] = 0;
        iVar1 = (**(*0x13108 + 0x140))(0x13040,0,0x13248);
        if (-1 < iVar1) {
            iVar1 = (**(*0x13248 + 8))(*0x13248);
            if (-1 < iVar1) {
                (**(*0x13250 + 0xe0))(0x114bc,0x13070,aiStackX_10);
                (**(*0x13250 + 0xc0))(0x13030,0x1171c,&iStackX_8);
            }
        }
        *0x13230 = 0;
        fcn.00011110(0x13130,-1);
    }
    return *0x13230;
}


/* fcn.00011040 @ 0x11040 */

ulong fcn.00011040(int64_t arg1)

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
    
    fcn.00011b30();
    *(arg1 + 0xf8) = 0;
    if ((*0x13090 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.00011110 @ 0x11110 */

void fcn.00011110(int64_t arg1,int64_t arg2)

{
    *0x1094 = *(arg1 + 0x50);
    //WARNING: Could not recover jumptable at 0x000111b9. Too many branches
    //WARNING: Treating indirect jump as call
    (**(arg1 + 0x48))(arg1,arg2);
    return;
}


/* fcn.00011be8 @ 0x11be8 */

void fcn.00011be8(int64_t arg1)

{
    char cVar1;
    
    cVar1 = fcn.00011b34(arg1);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x00011c09. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x13110 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00011c19. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x13108 + 0x48))(arg1);
    return;
}


/* fcn.00011b34 @ 0x11b34 */

uint64_t fcn.00011b34(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x13238 != 0) {
        puVar2 = *0x13240 + 8;
        in_RAX = *0x13240;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x13238);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* main @ 0x111f0 */

uint64_t main(char **argv)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00011b30 @ 0x11b30 */

void fcn.00011b30(void)

{
    return;
}


/* fcn.00011b78 @ 0x11b78 */

ulong fcn.00011b78(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x13110 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00011c20 @ 0x11c20 */

int64_t fcn.00011c20(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x13118 == 0) {
        *0x13118 = 0;
        if (*(*0x13100 + 0x68) != 0) {
            piVar2 = *(*0x13100 + 0x70);
            do {
                if ((*0x13020 == *piVar2) && (*0x13028 == piVar2[1])) {
                    *0x13118 = (*(*0x13100 + 0x70))[uVar1 * 3 + 2];
                    return *0x13118;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x13100 + 0x68));
        }
    }
    return *0x13118;
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


/* fcn.00011ba8 @ 0x11ba8 */

void fcn.00011ba8(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00011b78(arg1,arg1);
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* section..text @ 0x11000 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 8192 named .text
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


/* fcn.00011798 @ 0x11798 */

uint8_t fcn.00011798(uint32_t arg1)

{
    uint8_t uVar1;
    
    uVar1 = 0;
    if (*0x130f0 != 0) {
        do {
            if ((*(uVar1 * 0x2e0 + 0x11 + *0x130f0) == arg1) && (*(uVar1 * 0x2e0 + 0x10 + *0x130f0) == '\x01')) {
                return uVar1;
            }
            uVar1 = uVar1 + 1;
        } while (uVar1 < 8);
    }
    return 0xff;
}


/* fcn.0001232c @ 0x1232c */

int64_t fcn.0001232c(uint32_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint64_t arg2_00;
    uint64_t arg2_01;
    int64_t iVar2;
    uint64_t in_stack_00000028;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    arg2_01 = arg3 & 0xffffffff;
    arg2_00 = 0xfff;
    if (((*(arg1_00 + 0x2d0) == '\0') &&
        ((((in_stack_00000028 & 0xffffffff00000000) != 0 || ((*(arg1_00 + 0xb0) == 2 && ((in_stack_00000028 & 3) != 0)))
          ) || ((*(arg1_00 + 0xb0) == 1 && ((in_stack_00000028 & 0xfff) != 0)))))) ||
       ((*(arg1_00 + 0x2d0) == '\x01' &&
        (((*(arg1_00 + 0xb0) == 2 && ((in_stack_00000028 & 7) != 0)) ||
         ((*(arg1_00 + 0xb0) == 1 && ((in_stack_00000028 & 0xfff) != 0)))))))) {
        *0x13120 = 0;
    }
    else {
        *0x13120 = *(arg1_00 + 0xb0);
    }
    iVar2 = *(arg1_00 + 0x2d8);
    iVar1 = fcn.00011fb8(arg1_00,0xfff);
    if ((iVar1 < 0) || (*(arg1_00 + 0x1d) != '\x04')) {
code_r0x000123d2:
        iVar2 = -0x7ffffffffffffff9;
    }
    else {
        if (*0x13120 == 2) {
            iVar2 = fcn.0001274c(arg1,arg2_01,in_stack_00000028,iVar2);
            arg2_00 = arg2_01;
            if (iVar2 < 0) goto code_r0x000123d2;
        }
        iVar2 = fcn.00012650(arg1_00,arg2_00,arg2,arg3);
        if (-1 < iVar2) {
            iVar2 = fcn.00012010(arg1_00,arg2_00,&stack0x00000028,*(arg1_00 + 100));
            if (iVar2 < 0) {
                fcn.000122d8(arg1_00,arg2_00);
            }
            else {
                iVar2 = fcn.000122d8(arg1_00,arg2_00);
                if (iVar2 < 0) {
                    iVar2 = -0x7ffffffffffffff9;
                }
            }
        }
    }
    return iVar2;
}


/* fcn.00012488 @ 0x12488 */

int64_t fcn.00012488(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t arg2_00;
    uint64_t arg2_01;
    int64_t iVar4;
    uint64_t in_stack_00000028;
    
    cVar1 = *(arg1 + 0x2d0);
    arg2_00 = CONCAT71(noname_1 >> 8,cVar1);
    iVar2 = *(arg1 + 8);
    arg2_01 = arg3 & 0xffffffff;
    if (((cVar1 == '\0') &&
        ((((in_stack_00000028 & 0xffffffff00000000) != 0 || ((*(arg1 + 0xb0) == 2 && ((in_stack_00000028 & 3) != 0))))
         || ((*(arg1 + 0xb0) == 1 && ((in_stack_00000028 & 0xfff) != 0)))))) ||
       ((cVar1 == '\x01' &&
        (((*(arg1 + 0xb0) == 2 && ((in_stack_00000028 & 7) != 0)) ||
         ((*(arg1 + 0xb0) == 1 && ((in_stack_00000028 & 0xfff) != 0)))))))) {
        *0x13120 = 0;
    }
    else {
        *0x13120 = *(arg1 + 0xb0);
    }
    iVar4 = *(arg1 + 0x2d8);
    *(iVar2 + 0x34) = *(iVar2 + 0x34) | 0x1ff;
    *(iVar2 + 0x36) = *(iVar2 + 0x36) | 0x3ff;
    *(iVar2 + 0x38) = *(iVar2 + 0x38) & 0xe000;
    *(iVar2 + 0x3a) = *(iVar2 + 0x3a) & 0xf000;
    iVar3 = fcn.00011fb8(arg1,arg2_00);
    if ((iVar3 < 0) || (*(arg1 + 0x1d) != '\x04')) {
code_r0x00012564:
        iVar4 = -0x7ffffffffffffff9;
    }
    else {
        if (*0x13120 == 2) {
            iVar4 = fcn.0001274c(arg1,arg2_01,in_stack_00000028,iVar4);
            arg2_00 = arg2_01;
            if (iVar4 < 0) goto code_r0x00012564;
        }
        iVar4 = fcn.00012650(arg1,arg2_00,arg2,arg3);
        if (-1 < iVar4) {
            iVar4 = fcn.00012010(arg1,arg2_00,&stack0x00000028,*(arg1 + 100));
            if (iVar4 < 0) {
                fcn.000122d8(arg1,arg2_00);
            }
            else {
                iVar4 = fcn.000122d8(arg1,arg2_00);
                if (iVar4 < 0) {
                    iVar4 = -0x7ffffffffffffff9;
                }
            }
        }
    }
    *(iVar2 + 0x34) = *(iVar2 + 0x34) | 0x1ff;
    *(iVar2 + 0x36) = *(iVar2 + 0x36) | 0x3ff;
    *(iVar2 + 0x38) = *(iVar2 + 0x38) | 0x1ff;
    *(iVar2 + 0x3a) = *(iVar2 + 0x3a) | 0x2ff;
    return iVar4;
}


/* fcn.00011d20 @ 0x11d20 */

uint64_t fcn.00011d20(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    unkbyte7 Var6;
    int iVar7;
    
    uVar4 = arg2;
    Var6 = arg2 >> 8;
    iVar2 = *(arg1 + 8);
    iVar7 = 50000;
    if ((arg2 & 0xf8U) == 0) {
        *(iVar2 + 0x2f) = uVar4;
        uVar5 = uVar4;
        do {
            uVar1 = *(iVar2 + 0x2f);
            fcn.00011cec(1,CONCAT71(Var6,uVar5));
            iVar7 = iVar7 + -1;
            if ((uVar4 & uVar1) == 0) break;
        } while (iVar7 != 0);
        uVar3 = ~-(iVar7 != 0) & 0x8000000000000012;
    }
    else {
        uVar3 = 0x8000000000000002;
    }
    return uVar3;
}


/* fcn.000111e0 @ 0x111e0 */

void fcn.000111e0(void)

{
    return;
}


/* fcn.00011c8c @ 0x11c8c */

void fcn.00011c8c(int64_t arg1)

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
            fcn.000111e0();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00011cec @ 0x11cec */

int64_t fcn.00011cec(int64_t arg1,int64_t arg2)

{
    fcn.00011c8c((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.00011e78 @ 0x11e78 */

int64_t fcn.00011e78(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    
    iVar1 = *(arg1 + 8);
    uVar4 = 0;
    while( true ) {
        if (0x20 < uVar4) {
            return -0x7fffffffffffffee;
        }
        fcn.00011cec(1000,arg2);
        arg2 = 0x8001;
        if ((*(iVar1 + 0x30) & 0x8001) == 1) break;
        if (*(iVar1 + 0x30) < 0) {
            uVar4 = *(iVar1 + 0x32);
            *(iVar1 + 0x32) = *(iVar1 + 0x32) | 0xfff;
            *(iVar1 + 0x30) = 0x8000;
            uVar2 = -((uVar4 & 0xf) != 0) & 2;
            uVar3 = uVar2 | 4;
            if ((uVar4 & 0x70) == 0) {
                uVar3 = uVar2;
            }
            fcn.00011d20(arg1,CONCAT71(0x80,uVar3));
            return (-((uVar4 & 0x62) != 0) & 0x14) + 0x8000000000000007;
        }
        uVar4 = uVar4 + 1;
    }
    if (0x20 < uVar4) {
        return -0x7fffffffffffffee;
    }
    if ((*(iVar1 + 0xe) & 3) == 3) {
        *(iVar1 + 0x30) = 3;
    }
    else {
        *(iVar1 + 0x30) = 1;
    }
    return 0;
}


/* fcn.00011d98 @ 0x11d98 */

ulong fcn.00011d98(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    int iVar4;
    int iVar5;
    
    iVar2 = *(arg1 + 8);
    iVar5 = 2000;
    iVar4 = 2000;
    do {
        uVar1 = *(iVar2 + 0x24);
        fcn.00011cec(1,arg2);
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) {
            return 0x8000000000000012;
        }
    } while ((uVar1 & 1) != 0);
    do {
        uVar1 = *(iVar2 + 0x24);
        fcn.00011cec(1,arg2);
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) {
            return 0x8000000000000012;
        }
    } while ((uVar1 & 2) != 0);
    *(iVar2 + 8) = arg4;
    *(iVar2 + 0xe) = arg3;
    if ((arg3 >> 8 & 0x3f) == 0x15) {
        uVar3 = 0;
    }
    else {
        uVar3 = fcn.00011e78(arg1,arg2);
        if ((arg3 & 0x1b) == 0x1b) {
            iVar4 = 50000;
            do {
                uVar1 = *(iVar2 + 0x24);
                fcn.00011cec(1,arg2);
                iVar4 = iVar4 + -1;
                if ((uVar1 >> 0x14 & 1) != 0) break;
            } while (iVar4 != 0);
            if (iVar4 == 0) {
                return 0x8000000000000012;
            }
        }
    }
    return uVar3;
}


/* fcn.00011f7c @ 0x11f7c */

uint64_t fcn.00011f7c(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    
    uVar1 = *(arg1 + 8);
    uVar2 = fcn.00011d98(arg1,arg2,0x341a,arg3);
    if (-1 < uVar2) {
        uVar2 = -((*(uVar1 + 0x10) & 0xcb00) != 0) & 0x8000000000000007;
    }
    return uVar2;
}


/* fcn.00011fb8 @ 0x11fb8 */

int64_t fcn.00011fb8(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar2 = *(arg1 + 8);
    *(iVar2 + 0xc) = 0;
    iVar3 = fcn.00011d98(arg1,arg2,0xd1a,*(arg1 + 0x34) << 0x10);
    if (-1 < iVar3) {
        uVar1 = *(iVar2 + 0x10);
        *(arg1 + 0xb4) = uVar1;
        *(arg1 + 0x1d) = uVar1 >> 9 & 0xf;
        iVar3 = 0;
    }
    return iVar3;
}


/* fcn.0001274c @ 0x1274c */

ulong fcn.0001274c(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t *puVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t *piVar4;
    int64_t iVar5;
    uint in_register_0000000c;
    uint64_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    
    iVar5 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = *(iVar5 + 8);
    uVar8 = *(iVar5 + 100) * (arg2 & 0xffffffffU);
    uVar9 = uVar8 & 0xffff;
    uVar7 = uVar8 >> 0x10;
    uVar10 = uVar7 + 1;
    if (uVar9 == 0) {
        uVar10 = uVar7;
    }
    if (uVar10 < 0x201) {
        if (*(iVar5 + 0x2d0) == '\x01') {
            uVar7 = 0;
            if (uVar10 != 0) {
                piVar4 = arg4 + 4;
                uVar6 = uVar10;
                do {
                    *piVar4 = arg3;
                    arg3 = arg3 + 0x10000;
                    *(piVar4 + 1) = 0;
                    *(piVar4 + -4) = 0x21;
                    piVar4 = piVar4 + 2;
                    uVar6 = uVar6 - 1;
                    uVar7 = uVar10;
                } while (uVar6 != 0);
            }
            if (uVar9 != 0) {
                *(arg4 + 2 + (uVar7 - 1) * 0x10) = uVar8;
            }
            puVar1 = arg4 + (uVar7 - 1) * 0x10;
            *puVar1 = *puVar1 | 2;
            *(iVar2 + 0x58) = arg4;
        }
        else {
            uVar7 = 0;
            if (uVar10 != 0) {
                iVar5 = arg4 + 1;
                uVar6 = uVar10;
                do {
                    *(iVar5 + 3) = arg3;
                    arg3 = arg3 + 0x10000;
                    *(iVar5 + -1) = 0x21;
                    iVar5 = iVar5 + 8;
                    uVar6 = uVar6 - 1;
                    uVar7 = uVar10;
                } while (uVar6 != 0);
            }
            if (uVar9 != 0) {
                *(arg4 + 2 + (uVar7 - 1) * 8) = uVar8;
            }
            puVar1 = arg4 + (uVar7 - 1) * 8;
            *puVar1 = *puVar1 | 2;
            *(iVar2 + 0x58) = arg4;
        }
        *(iVar2 + 0x36) = *(iVar2 + 0x36) | 0x3ff;
        *(iVar2 + 0x3a) = *(iVar2 + 0x3a) | 0x2ff;
        uVar3 = 0;
    }
    else {
        uVar3 = 0x8000000000000007;
    }
    return uVar3;
}


/* fcn.00012650 @ 0x12650 */

ulong fcn.00012650(int64_t arg1,ulong noname_1,uint32_t arg2,uint32_t arg3)

{
    uint *puVar1;
    int iVar2;
    ulong uVar3;
    ushort uVar4;
    int16_t iVar5;
    uint64_t arg2_00;
    uint in_R8;
    uint64_t uVar6;
    uint in_stack_00000028;
    char in_stack_00000030;
    
    iVar2 = *0x13120;
    uVar6 = CONCAT44(in_R8,arg2);
    arg2_00 = 0;
    puVar1 = *(arg1 + 8);
    uVar4 = 0;
    if (*0x13120 == 1) {
        *puVar1 = in_stack_00000028;
    }
    if ((*(arg1 + 0x1c) != '\x04') && (*(arg1 + 0x1c) != ' ')) {
        if (0x3fffff < uVar6) {
            return 0x8000000000000007;
        }
        uVar6 = uVar6 * *(arg1 + 100);
    }
    if ((*(arg1 + 0x1c) & 0x36) != 0) {
        uVar4 = *(arg1 + 100);
    }
    *(puVar1 + 1) = uVar4;
    if (arg3 == 0) {
        return 0x8000000000000007;
    }
    *(puVar1 + 6) = arg3;
    if (in_stack_00000030 == '\0') {
        if (arg3 == 1) {
            iVar5 = 0x1800;
        }
        else {
            arg2_00 = 0x26;
            iVar5 = 0x1900;
        }
    }
    else if (arg3 == 1) {
        arg2_00 = 0x10;
        iVar5 = 0x1100;
    }
    else {
        arg2_00 = 0x36;
        iVar5 = 0x1200;
    }
    if (iVar2 == 2) {
        *(puVar1 + 10) = *(puVar1 + 10) & 0xe7 | 0x10;
    }
    else if (iVar2 != 1) goto code_r0x00012723;
    arg2_00 = arg2_00 | 1;
code_r0x00012723:
    *(puVar1 + 3) = arg2_00;
    uVar3 = fcn.00011d98(arg1,arg2_00,iVar5 + 0x3a,uVar6);
    return uVar3;
}


/* fcn.00012010 @ 0x12010 */

ulong fcn.00012010(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ushort uVar1;
    uint16_t uVar2;
    int64_t iVar3;
    uint *puVar4;
    int64_t iVar5;
    uint8_t uVar6;
    uint8_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong uVar11;
    char in_stack_00000028;
    
    iVar3 = *(arg1 + 8);
    iVar10 = 2000;
    uVar11 = 0x8000000000000012;
    uVar1 = *(iVar3 + 0xe);
code_r0x00012058:
    do {
        if (iVar10 == 0) goto code_r0x000122ad;
        fcn.00011cec(1000,arg2);
        uVar2 = *(iVar3 + 0x30);
        iVar10 = iVar10 + -1;
        arg2 = 0x20;
        if ((((uVar1 >> 8 & 0x3f) == 0x15) && ((*(arg1 + 0x1c) - 0x10U & 0xef) == 0)) && ((uVar2 & 0x20) != 0)) {
            uVar8 = arg4 >> 2;
            *(iVar3 + 0x30) = 0x20;
            iVar10 = *(arg1 + 8);
            if (in_stack_00000028 == '\0') {
                do {
                    *(iVar10 + 0x20) = **arg3;
                    *arg3 = *arg3 + 4;
                    uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
            }
            else {
                do {
                    **arg3 = *(iVar10 + 0x20);
                    *arg3 = *arg3 + 4;
                    uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
            }
code_r0x000122aa:
            uVar11 = 0;
            goto code_r0x000122ad;
        }
        if ((uVar2 & 8) == 0) {
            if ((uVar2 & 0x20) == 0) {
                if ((uVar2 & 0x10) == 0) {
                    arg2 = 0x8002;
                    if ((uVar2 & 0x8002) == 2) {
                        *(iVar3 + 0x32) = *(iVar3 + 0x32) | 0xfff;
                        *(iVar3 + 0x30) = 0x8000;
                        goto code_r0x000122aa;
                    }
                    if (uVar2 < 0) {
                        uVar2 = *(iVar3 + 0x32);
                        uVar11 = 0x8000000000000007;
                        if ((uVar2 & 0x200) == 0) {
                            if (*(arg1 + 0x12) != '\0') {
                                fcn.00011f7c(arg1,0x8002,8,*(arg1 + 0x14) | 0x80000c00);
                            }
                            *(iVar3 + 0x32) = *(iVar3 + 0x32) | 0xfff;
                            *(iVar3 + 0x30) = 0x8000;
                            uVar6 = -((uVar2 & 0xf) != 0) & 2;
                            uVar7 = uVar6 | 4;
                            if ((uVar2 & 0x70) == 0) {
                                uVar7 = uVar6;
                            }
                            fcn.00011d20(arg1,CONCAT71(arg2 >> 8,uVar7));
                            if (((uVar2 & 0x22) != 0) || ((uVar2 & 0x40) != 0)) {
                                uVar11 = 0x800000000000001b;
                            }
                        }
                        else {
                            *(iVar3 + 0x32) = *(iVar3 + 0x32) | 0x200;
                            *(iVar3 + 0x30) = 0x8000;
                            iVar10 = fcn.00011d98(arg1,0x8002,0xcdb,0);
                            if (-1 < iVar10) {
                                fcn.00011d20(arg1,CONCAT71(arg2 >> 8,6));
                            }
                        }
code_r0x000122ad:
                        *(iVar3 + 0x30) = 0x3a;
                        return uVar11;
                    }
                }
                else {
                    *(iVar3 + 0x30) = 0x10;
                    iVar5 = *(arg1 + 8);
                    uVar9 = (arg4 & 0xffffffffU) >> 2;
                    if (in_stack_00000028 == '\0') {
                        do {
                            *(iVar5 + 0x20) = **arg3;
                            *arg3 = *arg3 + 4;
                            uVar8 = uVar9 - 1;
                            uVar9 = uVar8;
                        } while (uVar8 != 0);
                        arg2 = 0;
                    }
                    else {
                        do {
                            **arg3 = *(iVar5 + 0x20);
                            *arg3 = *arg3 + 4;
                            uVar8 = uVar9 - 1;
                            uVar9 = uVar8;
                        } while (uVar8 != 0);
                        arg2 = 0;
                    }
                }
            }
            else {
                *(iVar3 + 0x30) = 0x20;
                iVar5 = *(arg1 + 8);
                uVar9 = (arg4 & 0xffffffffU) >> 2;
                if (in_stack_00000028 == '\0') {
                    do {
                        *(iVar5 + 0x20) = **arg3;
                        *arg3 = *arg3 + 4;
                        uVar8 = uVar9 - 1;
                        uVar9 = uVar8;
                    } while (uVar8 != 0);
                    arg2 = 0;
                }
                else {
                    do {
                        **arg3 = *(iVar5 + 0x20);
                        *arg3 = *arg3 + 4;
                        uVar8 = uVar9 - 1;
                        uVar9 = uVar8;
                    } while (uVar8 != 0);
                    arg2 = 0;
                }
            }
            goto code_r0x00012058;
        }
        *(iVar3 + 0x30) = 8;
        puVar4 = *(arg1 + 8);
        *arg3 = *arg3 + 0x1000;
        if (*(arg1 + 0x2d0) == '\x01') {
            puVar4[0x16] = *arg3;
            puVar4[0x17] = *arg3 >> 0x20;
        }
        else {
            *puVar4 = *arg3;
        }
        *(puVar4 + 0xc) = 8;
    } while( true );
}


/* fcn.000122d8 @ 0x122d8 */

int64_t fcn.000122d8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    do {
        iVar1 = fcn.00011fb8(arg1,arg2);
        if (iVar1 < 0) {
            return iVar1;
        }
        if (*(arg1 + 0x1d) == '\x04') {
            return 0;
        }
        if (2 < *(arg1 + 0x1d) - 5U) {
            return -0x7ffffffffffffff9;
        }
        iVar1 = fcn.00011d98(arg1,arg2,0xc1b,0);
    } while (-1 < iVar1);
    return iVar1;
}


