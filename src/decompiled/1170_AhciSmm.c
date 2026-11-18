// decompiled by r2ghidra: 1170_AhciSmm.pe32
// functions: 37

/* entry0 @ 0x11230 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.000112b8(arg1,arg2);
    *0x14270 = -0x7fffffffffffffff;
    iVar1 = section..text(0x14170);
    if (iVar1 == 0) {
        iVar1 = fcn.00012cc8(arg1,arg2);
        if ((-1 < iVar1) || (*0x14270 < 0)) {
            *0x14270 = iVar1;
        }
        fcn.000110d0(0x14170,-1);
    }
    iVar1 = *0x14270;
    if (*0x14270 < 0) {
        fcn.00012e60();
    }
    return iVar1;
}


/* fcn.00012de8 @ 0x12de8 */

void fcn.00012de8(void)

{
    return;
}


/* fcn.000112b8 @ 0x112b8 */

void fcn.000112b8(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    
    *0x140f8 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x140f0 = arg2;
    uStackX_8 = arg1;
    (**(*0x140f8 + 0x140))(0x14040,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x14100);
    (**(*0x140f8 + 0x140))(82000,0,&iStackX_18);
    uStackX_8 = 0;
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,0);
    *0x14280 = fcn.00012e30();
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,*0x14280);
    *0x14278 = uStackX_8 >> 5;
    fcn.00012e9c();
    puVar4 = fcn.00012e9c();
    do {
        uVar1 = *puVar4;
        noname_0 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000113a4:
            if (puVar4 == NULL) {
                uVar5 = fcn.000111c0();
                fcn.000111b0();
                uVar2 = in(0x1808);
                fcn.00011190(noname_0,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x00011180();
                }
                fcn.00011190(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.000111b0();
                }
                else {
                    fcn.000111a0();
                }
                return;
            }
            if ((*0x14060 == *(puVar4 + 4)) && (*0x14068 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x000113a4;
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
    
    //[00] -r-x section size 12288 named .text
    fcn.00012de8();
    *(arg1 + 0xf8) = 0;
    if ((*0x140b0 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.00012cc8 @ 0x12cc8 */

int64_t fcn.00012cc8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char acStackX_18 [16];
    
    if (*0x14160 == 0) {
        *0x14110 = *(arg2 + 0x60);
        *0x14148 = *(arg2 + 0x58);
        *0x14160 = arg2;
    }
    acStackX_18[0] = '\0';
    if (*0x14160 == 0) {
        *0x14110 = *(arg2 + 0x60);
        *0x14148 = *(arg2 + 0x58);
        *0x14160 = arg2;
    }
    iVar1 = (**(*0x14110 + 0x140))(0x14090,0,0x14118);
    if (((-1 < iVar1) && ((***0x14118)(*0x14118,acStackX_18), acStackX_18[0] != '\0')) &&
       (iVar1 = (*(*0x14118)[1])(*0x14118,0x14150), -1 < iVar1)) {
        iVar1 = fcn.00013074();
        *0x14120 = 1;
        if (iVar1 != 0) {
            *0x14148 = iVar1;
        }
        *0x14130 = 0;
        fcn.00012f08();
        fcn.00012f90();
        *0x14130 = 1;
        iVar1 = fcn.00012b68(arg1,arg2);
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


/* fcn.00012e60 @ 0x12e60 */

void fcn.00012e60(void)

{
    char cVar1;
    
    cVar1 = fcn.00012dec(*0x14280);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x00012e86. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x14100 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00012e95. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x140f8 + 0x48))(*0x14280);
    return;
}


/* fcn.00012dec @ 0x12dec */

uint64_t fcn.00012dec(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x14278 != 0) {
        puVar2 = *0x14280 + 8;
        in_RAX = *0x14280;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x14278);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00012e30 @ 0x12e30 */

ulong fcn.00012e30(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x14100 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00012e9c @ 0x12e9c */

int64_t fcn.00012e9c(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x14108 == 0) {
        *0x14108 = 0;
        if (*(*0x140f0 + 0x68) != 0) {
            piVar2 = *(*0x140f0 + 0x70);
            do {
                if ((*0x14030 == *piVar2) && (*0x14038 == piVar2[1])) {
                    *0x14108 = (*(*0x140f0 + 0x70))[uVar1 * 3 + 2];
                    return *0x14108;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x140f0 + 0x68));
        }
    }
    return *0x14108;
}


/* fcn.000111c0 @ 0x111c0 */

uint64_t fcn.000111c0(void)

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


/* fcn.000111b0 @ 0x111b0 */

void fcn.000111b0(void)

{
    return;
}


/* fcn.00011190 @ 0x11190 */

uint64_t fcn.00011190(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00011182 @ 0x11182 */

void fcn.00011182(void)

{
    return;
}


/* fcn.000111a0 @ 0x111a0 */

void fcn.000111a0(void)

{
    return;
}


/* fcn.00011418 @ 0x11418 */

void fcn.00011418(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    
    uVar4 = (arg1 * 10) / 3;
    if (arg1 * 10 != uVar4 * 3) {
        uVar4 = uVar4 + 1;
    }
    uVar3 = 0;
    if (uVar4 != 0) {
        uVar1 = in(0x1808);
        do {
            uVar2 = in(0x1808);
            if (uVar1 <= uVar2) {
                uVar3 = uVar3 + (uVar2 - uVar1);
            }
            uVar1 = uVar2;
        } while (uVar3 < uVar4);
    }
    return;
}


/* fcn.00013190 @ 0x13190 */

int64_t fcn.00013190(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint *puVar4;
    
    uVar1 = arg2;
    puVar4 = arg1;
    if (3 < arg3) {
        if ((arg1 & 3U) != 0) {
            iVar3 = 4 - (arg1 & 3U);
            arg3 = arg3 - iVar3;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar4 = uVar1;
                puVar4 = puVar4 + 1;
            }
        }
        for (uVar2 = arg3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar4 = puVar4 + 1;
        }
        arg3 = arg3 & 3;
    }
    for (; arg3 != 0; arg3 = arg3 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
    }
    return arg1;
}


/* fcn.00011ef8 @ 0x11ef8 */

int64_t fcn.00011ef8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint uVar1;
    int64_t iVar2;
    uint32_t *arg2_00;
    int64_t arg4_00;
    int64_t iVar3;
    ulong uVar4;
    char in_stack_00000028;
    ulong uStack_a8;
    uint uStack_a0;
    uchar uStack_9c;
    uchar uStack_9b;
    uint16_t uStack_9a;
    uchar uStack_98;
    uchar uStack_97;
    uchar uStack_96;
    uchar uStack_95;
    uchar uStack_94;
    uchar uStack_93;
    uchar uStack_92;
    uchar uStack_91;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    uchar uStack_78;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    uchar uStack_38;
    
    iVar2 = *(arg1 + 0x18);
    arg2_00 = *(arg1 + 0x10);
    uVar4 = 0;
    arg4_00 = *(arg1 + 8);
    fcn.00013190(&uStack_a8,0,0x31);
    uStack_91 = 0xe4;
    if (in_stack_00000028 != '\0') {
        uStack_9a = *arg4 & 0xff;
        uStack_91 = 0xe8;
        uVar1 = *arg4;
        uStack_98 = uVar1 >> 8;
        uStack_94 = uVar1 >> 0x18;
        uStack_96 = uVar1 >> 0x10;
    }
    uStack_9c = arg3;
    uStack_92 = arg2;
    iVar3 = fcn.00011b2c(arg1,CONCAT71(uVar4 >> 8,1));
    if (-1 < iVar3) {
        iVar3 = fcn.00011c98(arg1);
        if (iVar3 < 0) {
            fcn.00011b2c(arg1,0);
        }
        else {
            iVar3 = arg1;
            fcn.00011d00(arg1,arg2_00,*(arg1 + 0x28));
            uStack_60 = CONCAT26(uStack_9a,CONCAT15(uStack_9b,CONCAT14(uStack_9c,uStack_a0)));
            uStack_58 = CONCAT17(uStack_91,
                                 CONCAT16(uStack_92,
                                          CONCAT15(uStack_93,
                                                   CONCAT14(uStack_94,
                                                            CONCAT13(uStack_95,
                                                                     CONCAT12(uStack_96,CONCAT11(uStack_97,uStack_98))
                                                                    )))));
            uStack_68 = uStack_a8;
            uStack_38 = uStack_78;
            uStack_50 = uStack_90;
            uStack_48 = uStack_88;
            uStack_40 = uStack_80;
            fcn.00011e40(iVar3,&uStack_68,arg2_00,arg4_00);
            *arg2_00 = *arg2_00 & 0xffffffbf;
            *(arg4_00 + 1) = *(arg4_00 + 1) | 0x80;
            *arg2_00 = *arg2_00 | 0xf000;
            *(arg4_00 + 1) = *(arg4_00 + 1) | 0xf;
            fcn.0001168c(arg1);
            iVar3 = fcn.00011554(arg1,0,1000);
            fcn.00011b2c(arg1,0);
            if ((in_stack_00000028 == '\0') && (*arg4 = 0, -1 < iVar3)) {
                *arg4 = CONCAT31(*(iVar2 + 0x44),*(iVar2 + 0x4c));
            }
        }
    }
    return iVar3;
}


/* fcn.00011468 @ 0x11468 */

ulong fcn.00011468(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar uVar1;
    unkbyte7 Var2;
    char cVar3;
    uint32_t in_stack_00000028;
    int in_stack_00000030;
    
    uVar1 = arg2;
    Var2 = arg2 >> 8;
    do {
        cVar3 = '\n';
        do {
            if ((*(((arg2 & 0xff) + 2) * 0x80 + (arg1 & 0xffffffffU) + (arg3 & 0xffU)) & arg4) == in_stack_00000028) {
                return 0;
            }
            fcn.00011418(100,CONCAT71(Var2,uVar1));
            cVar3 = cVar3 + -1;
        } while (cVar3 != '\0');
        in_stack_00000030 = in_stack_00000030 + -1;
    } while (in_stack_00000030 != 0);
    return 0x8000000000000007;
}


/* fcn.000114e0 @ 0x114e0 */

ulong fcn.000114e0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar uVar1;
    unkbyte7 Var2;
    char cVar3;
    int in_stack_00000028;
    
    uVar1 = arg2;
    Var2 = arg2 >> 8;
    do {
        cVar3 = '\n';
        do {
            if ((arg4 & *(((arg2 & 0xff) + 2) * 0x80 + (arg1 & 0xffffffffU) + (arg3 & 0xffU))) == 0) {
                return 0;
            }
            fcn.00011418(100,CONCAT71(Var2,uVar1));
            cVar3 = cVar3 + -1;
        } while (cVar3 != '\0');
        in_stack_00000028 = in_stack_00000028 + -1;
    } while (in_stack_00000028 != 0);
    return 0x8000000000000007;
}


/* fcn.00011708 @ 0x11708 */

uint64_t fcn.00011708(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    char cVar6;
    int iVar7;
    int64_t iVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_20 [2];
    uint auStack_48 [2];
    uint32_t uStack_40;
    
    uVar9 = *arg1;
    uVar3 = 0;
    cVar6 = arg3;
    uVar10 = arg2 & 0xff;
    uVar2 = arg2;
    uVar1 = uVar3;
    uStack_40 = uVar9;
    while( true ) {
        auStackX_8[0] = 0;
        if (cVar6 == -1) {
            auStackX_8[0] = *(uVar10 * 0x80 + 0x128 + *arg1);
        }
        else {
            arg3 = 0;
            uVar2 = CONCAT71(uVar2 >> 8,cVar6);
            fcn.00011ef8(arg1,uVar2,0,auStackX_8);
        }
        if (((auStackX_8[0] & 0xf) - 1 & 0xfffffffd) == 0) break;
        fcn.00011418(1000,uVar2);
        uVar5 = uVar1 + 1;
        uVar1 = uVar5;
        if (9 < uVar5) {
            return 0x8000000000000007;
        }
    }
    if (cVar6 == -1) {
        arg3 = CONCAT71(arg3 >> 8,0x30);
        uVar2 = CONCAT71(uVar2 >> 8,arg2);
        uVar1 = fcn.00011468(uVar9,uVar2,arg3,0x4000000);
    }
    else {
        iVar7 = 30000;
        auStackX_20[0] = 0;
        do {
            arg3 = CONCAT71(arg3 >> 8,1);
            uVar2 = CONCAT71(uVar2 >> 8,cVar6);
            fcn.00011ef8(arg1,uVar2,arg3,auStackX_20);
            if ((auStackX_20[0] & 0x4000000) != 0) {
                uVar1 = uVar3;
                goto code_r0x00011828;
            }
            fcn.00011418(1000,uVar2);
            iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        uVar1 = 0x8000000000000007;
    }
code_r0x00011828:
    iVar8 = *(arg1 + 0x18);
    uVar4 = uVar3;
    do {
        auStack_48[0] = 0x7ff0f03;
        if (cVar6 == -1) {
            arg3 = (uVar10 + 2) * 0x80;
            uVar2 = *(*arg1 + 0x30 + arg3) | 0x7ff0f03;
            *(*arg1 + 0x30 + arg3) = uVar2;
        }
        else {
            arg3 = CONCAT71(arg3 >> 8,1);
            uVar2 = CONCAT71(uVar2 >> 8,cVar6);
            fcn.00011ef8(arg1,uVar2,arg3,auStack_48);
        }
        if (*(iVar8 + 0x40) == '4') break;
        fcn.00011418(1000,uVar2);
        iVar7 = 1;
        if (cVar6 != -1) {
            iVar7 = 100;
        }
        uVar9 = uVar4 + iVar7;
        uVar4 = uVar9;
    } while (uVar9 < 30000);
    uVar4 = uStack_40;
    iVar8 = (uVar10 + 2) * 0x80;
    do {
        if ((-1 < *(iVar8 + 0x20 + uVar4)) || ((*(iVar8 + 0x10 + uVar4) & 0x7c000000) != 0)) break;
        fcn.00011418(1000,uVar2);
        uVar9 = uVar3 + 1;
        uVar3 = uVar9;
    } while (uVar9 < 300000);
    uVar9 = *(iVar8 + 0x10 + uVar4);
    if ((*(iVar8 + 0x20 + uVar4) & 0x81) != 0) {
        uVar1 = 0x8000000000000007;
    }
    *(iVar8 + 0x10 + uVar4) = *(iVar8 + 0x10 + uVar4) | 0xffc000ff;
    uVar2 = 0x8000000000000007;
    if ((uVar9 & 0x7c000000) == 0) {
        uVar2 = uVar1;
    }
    return uVar2;
}


/* fcn.0001192c @ 0x1192c */

ulong fcn.0001192c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong uVar3;
    uint64_t arg1_00;
    int64_t arg2_00;
    uint64_t arg2_01;
    int64_t iVar4;
    int iVar5;
    int64_t iVar6;
    char cVar7;
    unkbyte7 Var8;
    uchar uVar9;
    int aiStackX_8 [2];
    uint8_t in_stack_00000028;
    
    cVar7 = arg3;
    Var8 = arg3 >> 8;
    uVar3 = 0;
    arg1_00 = *arg1;
    uVar2 = arg4 & 0xff;
    iVar4 = *(arg1 + 0x18);
    if (iVar4 == 0) {
        uVar3 = 0x8000000000000007;
    }
    else if (*0x140e0 == '\0') {
        *0x140e0 = 1;
        uVar9 = arg2;
        iVar6 = ((arg2 & 0xffU) + 2) * 0x80;
        arg2_00 = CONCAT71(0xffffff,uVar9);
        *(iVar6 + 0x18 + arg1_00) = *(iVar6 + 0x18 + arg1_00) & 0xfffffffe;
        fcn.000114e0(arg1_00,arg2_00,CONCAT71(Var8,0x18),0x8000);
        *(iVar6 + 0x30 + arg1_00) = *(iVar6 + 0x30 + arg1_00) | 0x7ff0f03;
        if (cVar7 != -1) {
            aiStackX_8[0] = 0x7ff0f03;
            fcn.00011ef8(arg1,CONCAT71(arg2_00 >> 8,cVar7),CONCAT71(Var8,1),aiStackX_8);
        }
        *(iVar6 + 0x10 + arg1_00) = *(iVar6 + 0x10 + arg1_00) | 0xffc000ff;
        uVar1 = *(iVar6 + 0x18 + arg1_00);
        *(iVar6 + 0x18 + arg1_00) = uVar1 | 0x10;
        arg2_01 = CONCAT31(uVar1 >> 8,uVar9);
        fcn.00011468(arg1_00,arg2_01,CONCAT71(Var8,0x18),0x4000);
        *(iVar4 + 0x40) = 0;
        if (cVar7 == -1) {
            iVar4 = 0xfffff000;
            *(iVar6 + 0x2c + arg1_00) =
                 (in_stack_00000028 * 0x10 + uVar2) * 0x10 + 1 | *(iVar6 + 0x2c + arg1_00) & 0xfffff000;
            fcn.00011418(1000,0xfffff000);
            *(iVar6 + 0x2c + arg1_00) = *(iVar6 + 0x2c + arg1_00) & 0xfffffff0;
        }
        else {
            iVar4 = CONCAT71(arg2_01 >> 8,cVar7);
            iVar5 = uVar2 * 0x10 + in_stack_00000028 * 0x100;
            aiStackX_8[0] = iVar5 + 1;
            fcn.00011ef8(arg1,iVar4,CONCAT71(Var8,2),aiStackX_8);
            fcn.00011418(1000,iVar4);
            iVar4 = CONCAT71(iVar4 >> 8,cVar7);
            aiStackX_8[0] = iVar5;
            fcn.00011ef8(arg1,iVar4,CONCAT71(Var8,2),aiStackX_8);
        }
        iVar4 = fcn.00011708(arg1,CONCAT71(iVar4 >> 8,uVar9),CONCAT71(Var8,cVar7));
        *0x140e0 = '\0';
        if (iVar4 < 0) {
            uVar3 = 0x8000000000000007;
        }
    }
    else {
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00011b2c @ 0x11b2c */

int64_t fcn.00011b2c(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uchar uVar2;
    ulong uVar3;
    uint32_t uVar4;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t arg2_00;
    uint64_t uVar7;
    unkbyte7 in_R8;
    uint64_t arg1_00;
    
    uVar1 = *(arg1 + 0x38);
    uVar2 = *(arg1 + 0x39);
    arg1_00 = *arg1;
    if (arg2 != '\0') {
        uVar4 = (uVar1 + 2) * 0x80;
        uVar5 = uVar4;
        *0x14288 = CONCAT44(*(uVar4 + 4 + arg1_00),*(uVar4 + arg1_00));
        *0x14290 = CONCAT44(*(uVar5 + 0xc + arg1_00),*(uVar5 + 8 + arg1_00));
        *(uVar5 + 4 + arg1_00) = *(arg1 + 0x20) >> 0x20;
        *(uVar5 + arg1_00) = *(arg1 + 0x20);
        *(uVar5 + 0xc + arg1_00) = *(arg1 + 0x30) >> 0x20;
        *(uVar5 + 8 + arg1_00) = *(arg1 + 0x30);
    }
    iVar6 = uVar1 * 0x80;
    *(iVar6 + 0x118 + arg1_00) = *(iVar6 + 0x118 + arg1_00) & 0xfffffffe;
    arg2_00 = CONCAT71(iVar6 >> 8,uVar1);
    fcn.000114e0(arg1_00,arg2_00,CONCAT71(in_R8,0x18),0x8000);
    iVar6 = extraout_RAX;
    if (extraout_RAX < 0) {
        fcn.0001192c(arg1,CONCAT71(arg2_00 >> 8,uVar1),CONCAT71(in_R8,uVar2),0);
        iVar6 = extraout_RAX_00;
    }
    uVar4 = (uVar1 + 2) * 0x80;
    uVar5 = uVar4;
    uVar7 = uVar4;
    *(uVar5 + 0x30 + arg1_00) = *(uVar5 + 0x30 + arg1_00) | 0x7ff0f03;
    *(uVar7 + 0x10 + arg1_00) = *(uVar5 + 0x10 + arg1_00) | 0xffc000ff;
    uVar3 = *0x14288;
    if (arg2 == '\0') {
        *(uVar7 + 4 + arg1_00) = *0x14288 >> 0x20;
        *(uVar7 + arg1_00) = uVar3;
        uVar3 = *0x14290;
        *(uVar7 + 0xc + arg1_00) = *0x14290 >> 0x20;
        *(uVar7 + 8 + arg1_00) = uVar3;
    }
    return iVar6;
}


/* fcn.00011c98 @ 0x11c98 */

int64_t fcn.00011c98(int64_t arg1)

{
    uint8_t uVar1;
    int64_t extraout_RAX;
    int64_t iVar2;
    unkbyte7 in_R8;
    unkbyte7 in_R9;
    
    uVar1 = *(arg1 + 0x38);
    iVar2 = 0;
    if (((*(uVar1 * 0x80 + 0x120 + *arg1) & 0x88) != 0) &&
       (fcn.0001192c(arg1,uVar1,CONCAT71(in_R8,*(arg1 + 0x39)),
                     CONCAT71(in_R9,(*(uVar1 * 0x80 + 300 + *arg1) & 0xff0) >> 4) & 0xffffffffffffff0f),
       iVar2 = extraout_RAX, extraout_RAX < 0)) {
        return extraout_RAX;
    }
    return iVar2;
}


/* fcn.00011d00 @ 0x11d00 */

ulong fcn.00011d00(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint32_t uVar2;
    
    cVar1 = *(arg1 + 0x39);
    *arg2 = 0;
    *(arg2 + 8) = 0;
    *(arg2 + 0x10) = 0;
    *(arg2 + 0x18) = 0;
    *arg2 = *arg2 & 0xfffff47f;
    uVar2 = 0;
    if (cVar1 != -1) {
        uVar2 = *(arg1 + 0x39);
    }
    *(arg2 + 8) = arg3;
    *arg2 = *arg2 ^ (uVar2 << 0xc ^ *arg2) & 0xf000;
    *(arg2 + 2) = 0;
    *(arg2 + 4) = 0;
    *(arg2 + 0xc) = arg3 >> 0x20;
    return 0;
}


/* fcn.00011e40 @ 0x11e40 */

ulong fcn.00011e40(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    
    fcn.00013190(arg4,0,0x90);
    *arg4 = 0x27;
    if (*(arg1 + 0x39) == -1) {
        uVar1 = 0;
    }
    else {
        uVar1 = *(arg1 + 0x39);
    }
    *(arg4 + 1) = *(arg4 + 1) & 0xf0;
    *(arg4 + 1) = *(arg4 + 1) | uVar1 & 0xf;
    *(arg4 + 2) = *(arg2 + 0x17);
    *(arg4 + 3) = *(arg2 + 0xc);
    *(arg4 + 0xb) = *(arg2 + 0xd);
    *(arg4 + 4) = *(arg2 + 0x10);
    *(arg4 + 8) = *(arg2 + 0x11);
    *(arg4 + 5) = *(arg2 + 0x12);
    *(arg4 + 9) = *(arg2 + 0x13);
    *(arg4 + 6) = *(arg2 + 0x14);
    *(arg4 + 10) = *(arg2 + 0x15);
    *(arg4 + 0xc) = *(arg2 + 0xe);
    *(arg4 + 0xd) = *(arg2 + 0xf);
    *(arg4 + 7) = *(arg2 + 0x16);
    *(arg4 + 0xf) = *(arg2 + 0x18);
    *arg3 = *arg3 & 0xffffffe5;
    *arg3 = *arg3 | 5;
    return 0;
}


/* fcn.0001168c @ 0x1168c */

ulong fcn.0001168c(int64_t arg1)

{
    uint8_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    
    uVar1 = *(arg1 + 0x38);
    uVar2 = *arg1;
    iVar3 = (uVar1 + 2) * 0x80;
    *(iVar3 + 0x30 + uVar2) = *(iVar3 + 0x30 + uVar2) | 0x7ff0f03;
    *(iVar3 + 0x10 + uVar2) = *(iVar3 + 0x10 + uVar2) | 0xffc000ff;
    fcn.00013190(*(arg1 + 0x18),0,0x100);
    iVar3 = (uVar1 + 2) * 0x80;
    *(iVar3 + 0x18 + uVar2) = *(iVar3 + 0x18 + uVar2) | 1;
    *(iVar3 + 0x38 + uVar2) = *(iVar3 + 0x38 + uVar2) | 1;
    return 0;
}


/* fcn.00011554 @ 0x11554 */

//WARNING: Variable defined which should be unmapped: var_5h

uint64_t fcn.00011554(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint32_t uVar2;
    bool bVar3;
    uint64_t arg2_00;
    uint64_t uVar4;
    int iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int32_t var_5h;
    
    uVar1 = *(arg1 + 0x38);
    iVar8 = *(arg1 + 0x18);
    uVar4 = 0;
    uVar2 = *arg1;
    arg2_00 = uVar2;
    bVar3 = false;
    if (arg3 * 2 != 0) {
        uVar6 = uVar2;
        iVar7 = (uVar1 + 2) * 0x80;
        uVar9 = uVar4;
        do {
            if (((*(iVar7 + 0x30 + uVar6) & 0x7fa0f00) != 0) || ((*(iVar7 + 0x10 + uVar6) & 0xf9800050) != 0)) {
                *(iVar7 + 0x30 + uVar6) = *(iVar7 + 0x30 + uVar6) | 0x7ff0f03;
                *(iVar7 + 0x10 + uVar6) = *(iVar7 + 0x10 + uVar6) | 0xffc000ff;
                return 0x8000000000000007;
            }
            iVar5 = arg2;
            if ((0 < iVar5) && (((iVar5 < 3 || (iVar5 - 5U < 2)) && (*(iVar8 + 0x20) == '_')))) {
                *(iVar8 + 0x20) = 0;
                bVar3 = true;
            }
            if ((*(iVar8 + 0x40) == '4') || (((iVar5 == 1 && (bVar3)) && ((*(iVar7 + 0x20 + uVar6) & 0x88) == 0))))
            break;
            uVar9 = uVar9 + 1;
            fcn.00011418(500,arg2_00);
        } while (uVar9 < arg3 * 2);
    }
    iVar8 = (uVar1 + 2) * 0x80;
    if (*(iVar8 + 0x38 + uVar2) != 0) {
        uVar4 = 0x8000000000000012;
    }
    if ((*(iVar8 + 0x20 + uVar2) & 9) != 0) {
        uVar4 = 0x8000000000000007;
    }
    return uVar4;
}


/* fcn.00011d4c @ 0x11d4c */

ulong fcn.00011d4c(ulong noname_0,int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uchar *puVar1;
    uint in_R9;
    int64_t iVar2;
    int64_t iVar3;
    uchar *puVar4;
    
    iVar3 = 0x10;
    puVar1 = CONCAT44(in_R9,arg3) + 0x40;
    if (arg1 + 0x21U < puVar1) {
        puVar4 = CONCAT44(in_R9,arg3) + 0x4f;
        puVar1 = puVar4 + (1 - puVar1);
        do {
            *puVar4 = puVar1[arg1 + 0x20];
            puVar4 = puVar4 + -1;
            puVar1 = puVar1 + -1;
        } while (puVar1 != NULL);
    }
    else {
        iVar2 = (arg1 + 0x21U) - puVar1;
        do {
            *puVar1 = puVar1[iVar2];
            puVar1 = puVar1 + 1;
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
    }
    if (*(CONCAT44(in_R9,arg3) + 2) == -0x60) {
        *arg2 = *arg2 | 0x20;
    }
    return 0;
}


/* fcn.00011da0 @ 0x11da0 */

ulong fcn.00011da0(ulong noname_0,int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint in_R9;
    uint *puVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    
    puVar3 = CONCAT44(in_R9,arg3) + 0x80;
    uVar4 = 0;
    for (uVar5 = *(arg1 + 8); uVar5 != 0; uVar5 = uVar5 + (-1 - (uVar2 & 0x3fffff))) {
        puVar3[3] = puVar3[3] & 0xffc00000;
        *puVar3 = *arg1;
        uVar2 = uVar5 - 1;
        if (0x3fffff < uVar5) {
            uVar2 = 0x3fffff;
        }
        uVar4 = uVar4 + 0x10;
        puVar3[3] = puVar3[3] | uVar2 & 0x3fffff;
        uVar2 = puVar3[3];
        puVar3[3] = puVar3[3] & 0x7fffffff;
        puVar1 = puVar3 + 3;
        puVar3 = puVar3 + 4;
        *arg1 = *arg1 + (*puVar1 & 0x3fffff) + 1;
    }
    puVar3[-1] = puVar3[-1] | 0x80000000;
    *(arg2 + 2) = uVar4 >> 4;
    return 0;
}


/* fcn.0001282c @ 0x1282c */

int64_t fcn.0001282c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint32_t *arg2_00;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t *arg2_01;
    int64_t iVar5;
    uchar in_stack_00000028;
    uint in_stack_00000030;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    uchar uStack_b8;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    uchar uStack_78;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    uchar uStack_38;
    
    uVar1 = *(arg1 + 0x38);
    arg2_00 = *(arg1 + 0x10);
    iVar4 = *(arg1 + 8);
    uVar2 = *arg1;
    *(arg1 + 0x39) = in_stack_00000028;
    *(arg1 + 0x3c) = in_stack_00000030;
    *(arg1 + 0x38) = arg4;
    *(arg2 + 0x12) = *(arg2 + 8);
    *(arg2 + 0x14) = *(arg2 + 8) >> 8;
    *(arg2 + 0x17) = 0xa0;
    iVar3 = fcn.00011b2c(arg1,CONCAT71(arg2 >> 8,1));
    if (-1 < iVar3) {
        iVar3 = fcn.00011c98(arg1);
        if (-1 < iVar3) {
            iVar3 = arg1;
            fcn.00011d00(arg1,arg2_00,*(arg1 + 0x28));
            uStack_e8 = *arg2;
            uStack_e0 = *(arg2 + 8);
            uStack_b8 = *(arg2 + 0x30);
            uStack_d8 = *(arg2 + 0x10);
            uStack_d0 = *(arg2 + 0x18);
            uStack_c8 = *(arg2 + 0x20);
            uStack_c0 = *(arg2 + 0x28);
            fcn.00011e40(iVar3,&uStack_e8,arg2_00,iVar4);
            uStack_a8 = *arg2;
            uStack_a0 = *(arg2 + 8);
            uStack_78 = *(arg2 + 0x30);
            uStack_98 = *(arg2 + 0x10);
            uStack_90 = *(arg2 + 0x18);
            uStack_88 = *(arg2 + 0x20);
            uStack_80 = *(arg2 + 0x28);
            arg2_01 = arg2_00;
            iVar5 = iVar4;
            fcn.00011d4c(iVar3,&uStack_a8,arg2_00,iVar4);
            uStack_68 = *arg2;
            uStack_60 = *(arg2 + 8);
            uStack_38 = *(arg2 + 0x30);
            uStack_58 = *(arg2 + 0x10);
            uStack_50 = *(arg2 + 0x18);
            uStack_48 = *(arg2 + 0x20);
            uStack_40 = *(arg2 + 0x28);
            fcn.00011da0(iVar3,&uStack_68,arg2_01,iVar5);
            if (arg3 == '\0') {
                *arg2_00 = *arg2_00 & 0xffffffbf;
            }
            else {
                *arg2_00 = *arg2_00 | 0x40;
            }
            *(iVar4 + 1) = *(iVar4 + 1) | 0x80;
            fcn.0001168c(arg1);
            iVar3 = fcn.00011554(arg1,1,30000);
            if (((iVar3 < 0) && (*(arg1 + 0x3c) == 1)) && ((*(uVar1 * 0x80 + 0x120 + uVar2) & 1) != 0)) {
                iVar4 = fcn.00012670(arg1);
                return iVar4;
            }
            *(arg1 + 0x4f) = 0;
            *(arg2 + 8) = arg2_00[1];
        }
        fcn.00011b2c(arg1,0);
    }
    return iVar3;
}


/* fcn.00012670 @ 0x12670 */

int64_t fcn.00012670(int64_t arg1)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uchar uVar3;
    int64_t iVar4;
    uint8_t uVar5;
    ulong in_R9;
    char *pcStack_48;
    uint uStack_40;
    uchar uStack_27;
    uchar uStack_23;
    
    uVar2 = *arg1;
    uVar1 = *(arg1 + 0x38);
    *(arg1 + 0x4f) = 4;
    uVar5 = 0;
    fcn.00013190(*0x140e8,0,0x100);
    fcn.00013190(&pcStack_48,0,0x31);
    pcStack_48 = *0x140e8;
    uStack_27 = 3;
    uStack_23 = 0xff;
    uStack_40 = 0x100;
    iVar4 = fcn.0001282c(arg1,&pcStack_48,0,CONCAT71(in_R9 >> 8,uVar1));
    if (iVar4 < 0) {
        uVar5 = *(uVar1 * 0x80 + 0x120 + uVar2);
    }
    if (((uVar5 & 0x21) == 0) && (-1 < iVar4)) {
        *(arg1 + 0x4f) = 4;
        iVar4 = -0x7ffffffffffffff9;
        if ((((*0x140e8)[2] & 0xfU) == 2) && ((*0x140e8)[0xc] == ':')) {
            *(arg1 + 0x4f) = 1;
            iVar4 = -0x7ffffffffffffff4;
        }
        if (((((*0x140e8)[2] & 0xfU) == 2) && ((*0x140e8)[0xc] == '\x04')) && ((*0x140e8)[0xd] == '\x01')) {
            *(arg1 + 0x4f) = 2;
            iVar4 = -0x7ffffffffffffff3;
        }
        if ((((*0x140e8)[2] & 0xfU) == 6) && ((*0x140e8)[0xc] == '(')) {
            *(arg1 + 0x4f) = 3;
            iVar4 = -0x7ffffffffffffff3;
        }
        if ((((*0x140e8)[2] & 0xfU) == 7) && ((*0x140e8)[0xc] == '\'')) {
            *(arg1 + 0x4f) = 5;
            iVar4 = -0x7ffffffffffffff8;
        }
        if (((*0x140e8)[2] & 0xfU) == 6) {
            uVar3 = *(arg1 + 0x4f);
            if ((*0x140e8)[0xc] == ')') {
                uVar3 = 6;
            }
            *(arg1 + 0x4f) = uVar3;
        }
        if (((*0x140e8)[2] & 0xfU) == 5) {
            uVar3 = *(arg1 + 0x4f);
            if (**0x140e8 == 'p') {
                uVar3 = 7;
            }
            *(arg1 + 0x4f) = uVar3;
        }
    }
    return iVar4;
}


/* fcn.00013074 @ 0x13074 */

ulong fcn.00013074(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    if (*0x14150 != 0) {
        iVar3 = *(*0x14150 + 0xa0);
        for (iVar2 = *(*0x14150 + 0x98); iVar2 != 0; iVar2 = iVar2 + -1) {
            iVar1 = fcn.000130c0(iVar3);
            if (iVar1 == 0) {
                return *(iVar3 + 0x10);
            }
            iVar3 = iVar3 + 0x18;
        }
    }
    return 0;
}


/* fcn.00012f08 @ 0x12f08 */

ulong fcn.00012f08(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x14120 == '\0') {
        if (*0x14140 == 0) {
            if (*0x14130 != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x14110 + 0x140))(0x14070,0,0x14140);
        }
    }
    else if (*0x14128 == 0) {
        if ((*0x14130 == '\0') && (*0x14150 != 0)) {
    //WARNING: Could not recover jumptable at 0x00012f47. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x14150 + 0xd0))(0x14080,0,0x14128);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.00012f90 @ 0x12f90 */

int64_t fcn.00012f90(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    if (*0x14120 == '\0') {
        if (*0x14158 == 0) {
            if (*0x14130 == '\x01') {
                return -0x7ffffffffffffffd;
            }
            uVar2 = (**(*0x14110 + 0x18))(0x1f);
            (**(*0x14110 + 0x20))(uVar2);
            if (0x10 < uVar2) {
                return -0x7ffffffffffffffd;
            }
            iVar1 = (**(*0x14110 + 0x140))(str.6_6v,0,0x14158);
            if (iVar1 < 0) {
                *0x14158 = 0;
            }
            return iVar1;
        }
    }
    else if (*0x14138 == 0) {
        if (*0x14150 == 0) {
            return -0x7ffffffffffffffd;
        }
        iVar1 = (**(*0x14150 + 0xd0))(0x14010,0,0x14138);
        if (iVar1 < 0) {
            *0x14138 = 0;
        }
        return iVar1;
    }
    return 0;
}


/* fcn.00012b68 @ 0x12b68 */

void fcn.00012b68(void)

{
    int64_t iVar1;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iStackX_18 = 0;
    *0x142a0 = 0;
    iVar1 = (**(*0x14110 + 0x28))(0,0,1,&iStackX_18);
    if (-1 < iVar1) {
        fcn.00013190(iStackX_18,0,0x1000);
        *0x142d0 = iStackX_18;
        *0x142b8 = iStackX_18;
        iStackX_18 = iStackX_18 + 0x100;
        *0x142b0 = (-iStackX_18 & 0x3ff) + iStackX_18;
        *0x142a8 = *0x142b0 + 0x80;
        *0x142c0 = *0x142b0;
        *0x142c8 = *0x142a8;
        (**(*0x14110 + 0x40))(0,0x100,0x140e8);
        *0x14308 = 0x129d4;
        *0x14310 = 0x12434;
        *0x14318 = 0x122bc;
        *0x14320 = 0x12588;
        *0x14328 = fcn.0001282c;
        *0x14338 = 0x12b60;
        *0x14330 = 0x12b18;
        iVar1 = (**(*0x14110 + 0x140))(0x14040,0,0x14118);
        if (-1 < iVar1) {
            (**(*0x14118 + 8))(*0x14118,&iStackX_20);
            (**(iStackX_20 + 0x28))(iStackX_20,0x14020,0x142a0,0xa0);
        }
    }
    return;
}


/* fcn.000130c0 @ 0x130c0 */

int64_t fcn.000130c0(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    piVar3 = 0x140a0;
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


