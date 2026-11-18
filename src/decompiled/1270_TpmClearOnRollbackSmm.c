// decompiled by r2ghidra: 1270_TpmClearOnRollbackSmm.pe32
// functions: 28

/* entry0 @ 0x11230 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.0001125c(arg1,arg2);
    iVar1 = fcn.000113bc(arg1,arg2);
    if (iVar1 < 0) {
        fcn.00011530();
    }
    return iVar1;
}


/* fcn.0001125c @ 0x1125c */

void fcn.0001125c(int64_t arg1,int64_t arg2)

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
    
    *0x130b8 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x130b0 = arg2;
    uStackX_8 = arg1;
    (**(*0x130b8 + 0x140))(0x13030,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x130c0);
    (**(*0x130b8 + 0x140))(0x13040,0,&iStackX_18);
    uStackX_8 = 0;
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,0);
    *0x13280 = fcn.00011500();
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,*0x13280);
    *0x13278 = uStackX_8 >> 5;
    fcn.0001156c();
    puVar4 = fcn.0001156c();
    do {
        uVar1 = *puVar4;
        noname_0 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x00011348:
            if (puVar4 == NULL) {
                uVar5 = fcn.00011220();
                fcn.00011210();
                uVar2 = in(0x1808);
                fcn.000111f0(noname_0,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    fcn.000111e0();
                }
                fcn.000111f0(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00011210();
                }
                else {
                    fcn.00011200();
                }
                return;
            }
            if ((*0x13050 == *(puVar4 + 4)) && (*0x13058 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x00011348;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.000113bc @ 0x113bc */

int64_t fcn.000113bc(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t arg1_00;
    int64_t aiStackX_8 [4];
    
    *0x131f0 = -0x7fffffffffffffff;
    aiStackX_8[0] = arg1;
    iVar1 = section..text(0x130f0);
    if (iVar1 != 0) {
        return *0x131f0;
    }
    aiStackX_8[0] = 0;
    if (*0x130e0 == 0) {
        *0x130d0 = *(arg2 + 0x60);
        *0x130d8 = *(arg2 + 0x58);
        *0x130e0 = arg2;
    }
    arg1_00 = 6;
    iVar1 = (**(*0x130c0 + 0x50))(6,8,0x13288);
    if (iVar1 < 0) {
code_r0x00011480:
        if (-1 < *0x131f0) goto code_r0x00011491;
    }
    else {
        if (*0x13288 != NULL) {
            fcn.00011638(arg1_00);
            **0x13288 = 0x114b0;
            iVar1 = (**(*0x130c0 + 0xa8))(aiStackX_8,0x13010,0,*0x13288);
        }
        if (iVar1 < 0) goto code_r0x00011480;
    }
    *0x131f0 = iVar1;
code_r0x00011491:
    fcn.000110d0(0x130f0,-1);
    return *0x131f0;
}


/* fcn.00011530 @ 0x11530 */

void fcn.00011530(void)

{
    char cVar1;
    
    cVar1 = fcn.000114bc(*0x13280);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x00011556. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x130c0 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00011565. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x130b8 + 0x48))(*0x13280);
    return;
}


/* fcn.000114bc @ 0x114bc */

uint64_t fcn.000114bc(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x13278 != 0) {
        puVar2 = *0x13280 + 8;
        in_RAX = *0x13280;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x13278);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.000114b8 @ 0x114b8 */

void fcn.000114b8(void)

{
    return;
}


/* fcn.00011500 @ 0x11500 */

ulong fcn.00011500(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x130c0 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.0001156c @ 0x1156c */

int64_t fcn.0001156c(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x130c8 == 0) {
        *0x130c8 = 0;
        if (*(*0x130b0 + 0x68) != 0) {
            piVar2 = *(*0x130b0 + 0x70);
            do {
                if ((*0x13020 == *piVar2) && (*0x13028 == piVar2[1])) {
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
    fcn.000114b8();
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


/* fcn.00011638 @ 0x11638 */

int64_t fcn.00011638(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iStackX_8;
    int64_t iStackX_10;
    int64_t var_bp_20h;
    int64_t var_28h;
    uint32_t var_30h;
    ulong uStack_28;
    int64_t var_18h;
    int64_t var_10h;
    
    iStackX_8 = arg1;
    iVar1 = (**(*0x130d0 + 0x138))(2,0x13000,0,&var_28h,&var_bp_20h);
    if (-1 < iVar1) {
        uVar2 = 0;
        if (var_28h != 0) {
            do {
                iVar1 = (**(*0x130d0 + 0x98))(*(var_bp_20h + uVar2 * 8),0x13000,&var_18h);
                if (-1 < iVar1) {
                    iStackX_10 = 0;
                    uStack_28 = 0;
                    iVar1 = (**(var_18h + 0x18))(var_18h,0x13060,0x18,0,&iStackX_10,&uStack_28,&iStackX_8);
                    if (-1 < iVar1) {
                        iStackX_10 = iStackX_10 + 0x10;
                        fcn.00012020(0x13200,iStackX_10,0x78);
                        iStackX_10 = iStackX_10 + -0x10;
                        (**(*0x130d0 + 0x48))(var_bp_20h);
                        (**(*0x130d0 + 0x48))(iStackX_10);
                        return 0;
                    }
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < var_28h);
        }
        (**(*0x130d0 + 0x48))(var_bp_20h);
        iVar1 = -0x7ffffffffffffff2;
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


/* fcn.000111e0 @ 0x111e0 */

void fcn.000111e0(void)

{
    return;
}


/* fcn.00012020 @ 0x12020 */

int64_t fcn.00012020(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00011cac @ 0x11cac */

ulong fcn.00011cac(ulong param_1,ulong param_2)

{
    char cVar1;
    ulong uVar2;
    int64_t iVar3;
    int iVar4;
    int64_t iVar5;
    
    cVar1 = fcn.00011bf4(0xfed40000,CONCAT71(param_2 >> 8,0x20));
    uVar2 = 0;
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000013;
    }
    else {
        iVar3 = 2;
        do {
            iVar5 = 30000;
            *0xfed40018 = 0x40;
            do {
                iVar5 = iVar5 + -1;
                iVar4 = 5;
                do {
                    fcn.000115d8(0x6b);
                    iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
            } while (((*0xfed40018 & 0x40) == 0) && (iVar5 != 0));
        } while ((iVar5 == 0) && (iVar3 = iVar3 + -1, iVar3 != 0));
        if (iVar5 == 0) {
            uVar2 = 0x8000000000000007;
        }
    }
    return uVar2;
}


/* fcn.00011d54 @ 0x11d54 */

uint64_t fcn.00011d54(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int16_t iVar2;
    unkbyte7 Var3;
    int64_t iVar4;
    
    cVar1 = arg3;
    Var3 = arg1 >> 8;
    iVar2 = 0;
    if (arg2 == 0) {
        return -(cVar1 != '\0') & 0x8000000000000002;
    }
    if ((*0xfed40000 & 0x20) != 0) {
        iVar4 = arg2 + -1;
        if (cVar1 == '\0') {
            iVar4 = arg2;
        }
        while (iVar4 != 0) {
            iVar2 = fcn.00011c50();
            if (iVar2 == 0) {
                return 0x8000000000000012;
            }
            for (; iVar2 != 0; iVar2 = iVar2 + -1) {
                if (iVar4 == 0) goto code_r0x00011df2;
                *0xfed40024 = *arg1;
                iVar4 = iVar4 + -1;
                arg1 = arg1 + 1;
            }
        }
code_r0x00011df2:
        if (cVar1 == '\0') {
            return 0;
        }
        if ((iVar2 == 0) && (iVar2 = fcn.00011c50(), iVar2 == 0)) {
            return 0x8000000000000012;
        }
        cVar1 = fcn.00011bf4(0xfed40018,CONCAT71(Var3,8));
        if (cVar1 != '\0') {
            *0xfed40024 = *arg1;
            cVar1 = fcn.00011bf4(0xfed40018,CONCAT71(Var3,8));
            if (cVar1 == '\0') {
                *0xfed40018 = 0x20;
                return 0;
            }
        }
    }
    return 0x8000000000000015;
}


/* fcn.00011bf4 @ 0x11bf4 */

uint8_t fcn.00011bf4(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    
    iVar2 = 30000;
    while( true ) {
        iVar1 = 5;
        do {
            fcn.000115d8(0x6b);
            iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        iVar2 = iVar2 + -1;
        if (iVar2 == 0) break;
        if (*arg1 < '\0') {
            return *arg1 & arg2;
        }
    }
    return 0;
}


/* fcn.00011e64 @ 0x11e64 */

uint64_t fcn.00011e64(ulong noname_0,uint32_t arg1,int64_t arg2)

{
    char cVar1;
    int16_t iVar2;
    uint in_register_00000014;
    uchar *puVar3;
    uchar *puVar4;
    
    puVar4 = *arg2 + CONCAT44(in_register_00000014,arg1);
    puVar3 = CONCAT44(in_register_00000014,arg1);
    if (CONCAT44(in_register_00000014,arg1) < puVar4) {
        while( true ) {
            arg1 = CONCAT31(arg1 >> 8,0x10);
            cVar1 = fcn.00011bf4(0xfed40018,CONCAT44(in_register_00000014,arg1));
            if (cVar1 == '\0') break;
            iVar2 = fcn.00011c50();
            if (iVar2 == 0) {
                return 0x8000000000000012;
            }
            do {
                if (puVar4 <= puVar3) goto code_r0x00011ede;
                arg1 = CONCAT31(arg1 >> 8,0x10);
                cVar1 = fcn.00011bf4(0xfed40018,CONCAT44(in_register_00000014,arg1));
                if (cVar1 == '\0') break;
                *puVar3 = *0xfed40024;
                puVar3 = puVar3 + 1;
                iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            if (puVar4 <= puVar3) break;
        }
    }
code_r0x00011ede:
    *arg2 = puVar3 + (*arg2 - puVar4);
    cVar1 = fcn.00011bf4(0xfed40018,CONCAT44(in_register_00000014,CONCAT31(arg1 >> 8,0x10)));
    return -(cVar1 != '\0') & 0x8000000000000005;
}


/* fcn.00011fce @ 0x11fce */

int64_t fcn.00011fce(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00011750 @ 0x11750 */

int64_t fcn.00011750(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    bool bVar1;
    bool bVar2;
    char cVar3;
    int64_t noname_0;
    int64_t iVar4;
    int64_t *piVar5;
    int64_t aiStack_28 [4];
    
    iVar4 = 1;
    aiStack_28[0] = arg1;
    aiStack_28[1] = arg2;
    aiStack_28[2] = arg3;
    aiStack_28[3] = arg4;
    noname_0 = fcn.00011cac();
    bVar2 = false;
    if (noname_0 < 0) {
        noname_0 = -0x7ffffffffffffff9;
    }
    else {
        piVar5 = aiStack_28;
        bVar1 = bVar2;
        do {
            if (bVar1) break;
            arg2 = *piVar5;
            iVar4 = iVar4 + -1;
            if (iVar4 == 0) {
                arg4 = CONCAT71(arg4 >> 8,1);
            }
            else {
                arg4 = 0;
            }
            noname_0 = fcn.00011d54(noname_0,arg2,piVar5[1],arg4);
            bVar1 = true;
            piVar5 = piVar5 + 2;
        } while (-1 < noname_0);
        if (-1 < noname_0) {
            do {
                arg2 = CONCAT71(arg2 >> 8,0x10);
                cVar3 = fcn.00011bf4(0xfed40018,arg2);
            } while (cVar3 == '\0');
            piVar5 = aiStack_28;
            noname_0 = -0x7ffffffffffffffb;
            do {
                piVar5 = piVar5 + 2;
                if (bVar2) break;
                noname_0 = fcn.00011e64(noname_0,*piVar5,piVar5 + 1);
                bVar2 = true;
            } while (noname_0 == -0x7ffffffffffffffb);
        }
        *0xfed40018 = 0x40;
    }
    return noname_0;
}


/* fcn.00011f28 @ 0x11f28 */

int16_t fcn.00011f28(void)

{
    uint8_t uVar1;
    uint64_t uVar2;
    
    uVar2 = 0;
    while ((uVar1 = *0xfed40f00 >> 8, *(uVar2 + 0x13070) != *0xfed40f00 || (*(uVar2 + 0x13072) != *0xfed40f02))) {
        uVar2 = uVar2 + 4;
        if (0xb < uVar2) {
            return uVar1 << 8;
        }
    }
    return CONCAT11(uVar1,1);
}


/* fcn.000115d8 @ 0x115d8 */

void fcn.000115d8(int64_t arg1)

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


/* fcn.0001183c @ 0x1183c */

ulong fcn.0001183c(void)

{
    int64_t iVar1;
    int64_t var_30h;
    int16_t var_20h;
    int32_t var_1eh;
    int32_t var_1ah;
    int16_t var_bp_10h;
    int32_t var_eh;
    int32_t var_ah;
    int8_t var_6h;
    
    var_1eh = 0xa000000;
    var_1ah = 0x6f000000;
    var_20h = -0x3f00;
    fcn.00011fce(&var_30h,10,0);
    iVar1 = fcn.00011750(&var_20h,10,&var_30h,10);
    if ((-1 < iVar1) && (stack0xffffffffffffffce == 0)) {
        var_bp_10h = -0x3f00;
        var_eh = 0xb000000;
        var_ah = 0x72000000;
        var_6h = 0;
        fcn.00011fce(&var_30h,10,0);
        fcn.00011750(&var_bp_10h,0xb,&var_30h,10);
        if (stack0xffffffffffffffce == 0) {
            return 0;
        }
    }
    return 0x800000000000001a;
}


/* fcn.00011c50 @ 0x11c50 */

void fcn.00011c50(void)

{
    int64_t iVar1;
    int iVar2;
    
    iVar1 = 0x1d4c;
    do {
        iVar2 = 5;
        do {
            fcn.000115d8(0x6b);
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        iVar1 = iVar1 + -1;
    } while ((*0xfed40019 == 0) && (iVar1 != 0));
    return;
}


