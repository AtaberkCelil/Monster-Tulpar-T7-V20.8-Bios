// decompiled by r2ghidra: 1315_RTCWakeup.pe32
// functions: 25

/* entry0 @ 0x11230 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.000112b8(arg1,arg2);
    *0x132a0 = -0x7fffffffffffffff;
    iVar1 = section..text(0x131a0);
    if (iVar1 == 0) {
        iVar1 = fcn.00011a34(arg1,arg2);
        if ((-1 < iVar1) || (*0x132a0 < 0)) {
            *0x132a0 = iVar1;
        }
        fcn.000110d0(0x131a0,-1);
    }
    iVar1 = *0x132a0;
    if (*0x132a0 < 0) {
        fcn.00011c50();
    }
    return iVar1;
}


/* fcn.00011bd8 @ 0x11bd8 */

void fcn.00011bd8(void)

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
    
    *0x13130 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x13128 = arg2;
    uStackX_8 = arg1;
    (**(*0x13130 + 0x140))(0x13040,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x13138);
    (**(*0x13130 + 0x140))(0x13060,0,&iStackX_18);
    uStackX_8 = 0;
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,0);
    *0x132b0 = fcn.00011c20();
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,*0x132b0);
    *0x132a8 = uStackX_8 >> 5;
    fcn.00011c8c();
    puVar4 = fcn.00011c8c();
    do {
        uVar1 = *puVar4;
        noname_0 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000113a4:
            if (puVar4 == NULL) {
                uVar5 = fcn.00011220();
                fcn.00011210();
                uVar2 = in(0x1808);
                fcn.000111f0(noname_0,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x000111e0();
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
            if ((*0x13080 == *(puVar4 + 4)) && (*0x13088 == *(puVar4 + 8))) {
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
    
    //[00] -r-x section size 8192 named .text
    fcn.00011bd8();
    *(arg1 + 0xf8) = 0;
    if ((*0x130d0 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.00011a34 @ 0x11a34 */

int64_t fcn.00011a34(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong noname_2;
    ulong *arg3;
    char acStackX_18 [8];
    ulong uStackX_20;
    
    iVar1 = 0;
    uStackX_20 = 0xca9;
    if (*0x13198 == 0) {
        *0x13148 = *(arg2 + 0x60);
        *0x13150 = *(arg2 + 0x58);
        *0x13198 = arg2;
    }
    if ((((*0x13188 != NULL) || (iVar1 = (**(*0x13148 + 0x140))(78000,0), -1 < iVar1)) &&
        ((***0x13188)(*0x13188,acStackX_18), acStackX_18[0] != '\0')) &&
       (iVar1 = (*(*0x13188)[1])(*0x13188,0x13180), -1 < iVar1)) {
        iVar1 = fcn.00011e64();
        *0x13158 = 1;
        if (iVar1 != 0) {
            *0x13150 = iVar1;
        }
        *0x13168 = 0;
        fcn.00011cf8();
        iVar1 = fcn.00011d80();
        *0x13168 = 1;
    }
    if (-1 < iVar1) {
        noname_2 = 0;
        arg3 = &uStackX_20;
        iVar1 = (**(*0x13150 + 0x48))(L"Setup",0x13070,0,arg3,0x132c0);
        if ((iVar1 < 0) || (*0x13120 = *0x13f0c, *0x13f0c == '\0')) {
            iVar1 = -0x7ffffffffffffff2;
        }
        else {
            if (*0x13f0c == '\x01') {
                *0x132bb = *0x13f0d;
                *0x132b9 = *0x13f0e;
                *0x132ba = *0x13f0f;
            }
            else if (*0x13f0c == '\x02') {
                *0x132b8 = *0x13f10;
            }
            iVar1 = fcn.00011eb0(arg1,arg2,noname_2,arg3);
        }
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


/* fcn.00011c50 @ 0x11c50 */

void fcn.00011c50(void)

{
    char cVar1;
    
    cVar1 = fcn.00011bdc(*0x132b0);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x00011c76. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x13138 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00011c85. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x13130 + 0x48))(*0x132b0);
    return;
}


/* fcn.00011bdc @ 0x11bdc */

uint64_t fcn.00011bdc(int64_t arg1)

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


/* fcn.00011c20 @ 0x11c20 */

ulong fcn.00011c20(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x13138 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00011c8c @ 0x11c8c */

int64_t fcn.00011c8c(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x13140 == 0) {
        *0x13140 = 0;
        if (*(*0x13128 + 0x68) != 0) {
            piVar2 = *(*0x13128 + 0x70);
            do {
                if ((*0x13030 == *piVar2) && (*0x13038 == piVar2[1])) {
                    *0x13140 = (*(*0x13128 + 0x70))[uVar1 * 3 + 2];
                    return *0x13140;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x13128 + 0x68));
        }
    }
    return *0x13140;
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


/* fcn.00011418 @ 0x11418 */

ulong fcn.00011418(uint32_t arg1)

{
    uint32_t uVar1;
    char cVar2;
    ulong in_RAX;
    unkbyte7 Var4;
    uint64_t uVar3;
    uint8_t uStackX_8;
    
    do {
        Var4 = in_RAX >> 8;
        out(0x70,0x8a);
        cVar2 = in(0x71);
        in_RAX = CONCAT71(Var4,cVar2);
    } while (cVar2 < '\0');
    out(0x70,arg1 | 0x80);
    uStackX_8 = in(0x71);
    uVar3 = CONCAT71(Var4,uStackX_8);
    if (arg1 < 10) {
        uVar1 = (uStackX_8 & 0xf) + ((uStackX_8 >> 4) + (uStackX_8 >> 4) * 4) * 2;
        uVar3 = uVar1;
        uStackX_8 = uVar1;
    }
    return CONCAT71(uVar3 >> 8,uStackX_8);
}


/* fcn.000114b0 @ 0x114b0 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

uint8_t fcn.000114b0(void)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    char cVar6;
    int iVar7;
    ulong uVar8;
    int iVar9;
    int64_t iVar10;
    uint32_t uVar11;
    int64_t iVar12;
    uint64_t uVar13;
    uint8_t uVar14;
    uint64_t uVar15;
    int64_t iVar16;
    uint8_t auStack_38 [16];
    int32_t var_bp_10h;
    int32_t var_ch;
    int32_t var_bp_8h;
    
    uVar8 = 0;
    auStack_38[0] = 0x1f;
    auStack_38[1] = 0x1c;
    auStack_38[2] = 0x1f;
    auStack_38[3] = 0x1e;
    auStack_38[4] = 0x1f;
    auStack_38[5] = 0x1e;
    auStack_38[6] = 0x1f;
    auStack_38[7] = 0x1f;
    iVar9 = 0;
    auStack_38[8] = 0x1e;
    auStack_38[9] = 0x1f;
    auStack_38[10] = 0x1e;
    auStack_38[0xb] = 0x1f;
    uVar1 = fcn.00011418(0);
    uVar8 = CONCAT71(uVar8 >> 8,2);
    uVar2 = fcn.00011418(uVar8);
    uVar8 = CONCAT71(uVar8 >> 8,4);
    uVar3 = fcn.00011418(uVar8);
    uVar8 = CONCAT71(uVar8 >> 8,7);
    uVar4 = fcn.00011418(uVar8);
    uVar8 = CONCAT71(uVar8 >> 8,8);
    uVar13 = uVar4;
    uVar4 = fcn.00011418(uVar8);
    uVar5 = fcn.00011418(CONCAT71(uVar8 >> 8,9));
    iVar10 = uVar4 - 2;
    uVar15 = uVar5;
    if (uVar4 - 2 < 1) {
        iVar10 = iVar10 + 0xc;
        uVar15 = uVar15 - 1;
    }
    iVar12 = uVar15 + SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(uVar15),8);
    iVar12 = (iVar12 >> 6) - (iVar12 >> 0x3f);
    iVar16 = uVar15 + iVar12 * -100;
    iVar10 = (iVar10 * 0xd + -1) / 5 + (iVar12 + (iVar12 >> 0x3f & 3) >> 2) + iVar16 + iVar12 * 5 +
             (iVar16 + (iVar16 >> 0x3f & 3) >> 2) + (uVar13 & 0xff);
    iVar7 = (iVar10 / 7 & 0xff) * 7;
    uVar14 = iVar10 - iVar7;
    if ((uVar4 == 2) &&
       ((uVar11 = uVar5 + 2000, uVar11 == (uVar11 / 400) * 400 ||
        (((uVar11 & 3) == 0 && (uVar11 != (uVar11 / 100) * 100)))))) {
        iVar9 = 1;
    }
    if (*0x13f11 == 8) {
        uVar1 = fcn.00011418(CONCAT71(iVar7 >> 8,0xd));
        out(0x70,0x8d);
        out(0x71,uVar1 & 0xc0);
        return uVar1 & 0xc0;
    }
    if (uVar14 < *0x13f11) {
        cVar6 = *0x13f11 - uVar14;
    }
    else {
        if (uVar14 == *0x13f11) {
            if ((*0x132bb * 0x3c + *0x132b9) * 0x3c + *0x132ba < (uVar3 * 0x3c + uVar2) * 0x3c + uVar1) {
                uVar13 = uVar13 + 7;
            }
            goto code_r0x00011684;
        }
        cVar6 = (*0x13f11 - uVar14) + '\a';
    }
    uVar13 = uVar13 + cVar6;
code_r0x00011684:
    uVar11 = iVar9 + auStack_38[uVar4 - 1];
    uVar1 = (uVar13 & 0xff) % uVar11;
    if (uVar1 == 0) {
        uVar1 = iVar9 + auStack_38[uVar4 - 1];
    }
    uVar3 = uVar1 / 10;
    uVar1 = uVar1 % 10;
    uVar2 = fcn.00011418(CONCAT71(uVar11 >> 8,0xd));
    uVar1 = uVar2 & 0xc0 | uVar3 * '\x10' + uVar1;
    out(0x70,0x8d);
    out(0x71,uVar1);
    return uVar1;
}


/* fcn.00011470 @ 0x11470 */

ulong fcn.00011470(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong in_RAX;
    uint64_t uVar2;
    char cVar3;
    
    cVar3 = arg2;
    uVar2 = CONCAT71(in_RAX >> 8,arg1) | 0x80;
    out(0x70,uVar2);
    if (arg1 < 10) {
        uVar1 = (arg2 & 0xffU) / 10;
        uVar2 = uVar1 * 10;
        cVar3 = cVar3 + uVar1 * '\x06';
    }
    out(0x71,cVar3);
    return CONCAT71(uVar2 >> 8,cVar3);
}


/* fcn.00011728 @ 0x11728 */

ulong fcn.00011728(void)

{
    uint8_t uVar1;
    uint16_t uVar2;
    int64_t iVar3;
    char16_t *pcVar4;
    ulong uVar5;
    int16_t iVar6;
    int32_t *piVar7;
    uchar uVar8;
    int64_t var_40h;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    uint32_t var_28h;
    
    var_38h = -0x68bdce2b;
    var_34h = 0x44d1ed4b;
    var_30h = 0x51ce7088;
    var_2ch = 0x684dc15c;
    var_40h = 0x1d;
    if ((*0x13f0c != '\0') && (*0x13f11 != '\a')) {
        piVar7 = &var_38h;
        pcVar4 = L"AmiFlashUpd";
        iVar3 = (**(*0x13150 + 0x48))(L"AmiFlashUpd",piVar7,0,&var_40h,&var_28h);
        if ((iVar3 < 0) || (var_28h != '\x02')) {
            fcn.000114b0();
            if (*0x13120 == '\x02') {
                uVar5 = CONCAT71(pcVar4 >> 8,4);
                *0x132bb = fcn.00011418(uVar5);
                *0x132b9 = fcn.00011418(CONCAT71(uVar5 >> 8,2));
                pcVar4 = NULL;
                *0x132ba = fcn.00011418(0);
                *0x132b9 = *0x132b9 + *0x132b8;
                if (0x3b < *0x132b9) {
                    *0x132b9 = 0;
                    pcVar4 = *0x132bb + 1U;
                    if (*0x132bb + 1U == 0x18) {
                        pcVar4 = NULL;
                    }
                    *0x132bb = pcVar4;
                }
            }
            iVar3 = CONCAT71(piVar7 >> 8,*0x132bb);
            uVar5 = CONCAT71(pcVar4 >> 8,5);
            uVar8 = *0x132ba;
            uVar1 = *0x132b9;
            fcn.00011470(uVar5,iVar3);
            iVar3 = CONCAT71(iVar3 >> 8,uVar1);
            uVar5 = CONCAT71(uVar5 >> 8,3);
            fcn.00011470(uVar5,iVar3);
            uVar5 = CONCAT71(uVar5 >> 8,1);
            fcn.00011470(uVar5,CONCAT71(iVar3 >> 8,uVar8));
            uVar5 = CONCAT71(uVar5 >> 8,0xb);
            uVar1 = fcn.00011418(uVar5);
            out(0x70,0x8b);
            iVar6 = 0x71;
            out(0x71,uVar1 | 0x20);
            uVar1 = fcn.00011418(CONCAT71(uVar5 >> 8,0xd));
            out(iVar6 + -1,0x8d);
            out(iVar6,uVar1 & 0x80);
            uVar2 = in(0x1800);
            out(0x1800,uVar2 | 0x400);
            uVar2 = in(0x1802);
            out(0x1802,uVar2 | 0x400);
        }
    }
    return 0;
}


/* fcn.00011e64 @ 0x11e64 */

ulong fcn.00011e64(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    if (*0x13180 != 0) {
        iVar3 = *(*0x13180 + 0xa0);
        for (iVar2 = *(*0x13180 + 0x98); iVar2 != 0; iVar2 = iVar2 + -1) {
            iVar1 = fcn.00011fa8(iVar3);
            if (iVar1 == 0) {
                return *(iVar3 + 0x10);
            }
            iVar3 = iVar3 + 0x18;
        }
    }
    return 0;
}


/* fcn.00011cf8 @ 0x11cf8 */

ulong fcn.00011cf8(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x13158 == '\0') {
        if (*0x13178 == 0) {
            if (*0x13168 != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x13148 + 0x140))(0x13090,0,0x13178);
        }
    }
    else if (*0x13160 == 0) {
        if ((*0x13168 == '\0') && (*0x13180 != 0)) {
    //WARNING: Could not recover jumptable at 0x00011d37. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x13180 + 0xd0))(0x130a0,0,0x13160);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.00011d80 @ 0x11d80 */

int64_t fcn.00011d80(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    if (*0x13158 == '\0') {
        if (*0x13190 == 0) {
            if (*0x13168 == '\x01') {
                return -0x7ffffffffffffffd;
            }
            uVar2 = (**(*0x13148 + 0x18))(0x1f);
            (**(*0x13148 + 0x20))(uVar2);
            if (0x10 < uVar2) {
                return -0x7ffffffffffffffd;
            }
            iVar1 = (**(*0x13148 + 0x140))(str.6_6v,0,0x13190);
            if (iVar1 < 0) {
                *0x13190 = 0;
            }
            return iVar1;
        }
    }
    else if (*0x13170 == 0) {
        if (*0x13180 == 0) {
            return -0x7ffffffffffffffd;
        }
        iVar1 = (**(*0x13180 + 0xd0))(0x13010,0,0x13170);
        if (iVar1 < 0) {
            *0x13170 = 0;
        }
        return iVar1;
    }
    return 0;
}


/* fcn.00011eb0 @ 0x11eb0 */

int64_t fcn.00011eb0(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uStackX_20;
    
    uStackX_20 = arg3 & 0xffffffffffffff00;
    if (*0x13198 == 0) {
        *0x13148 = *(arg2 + 0x60);
        *0x13150 = *(arg2 + 0x58);
        *0x13198 = arg2;
    }
    iVar1 = (**(*0x13148 + 0x140))(78000,0,0x13188);
    if (-1 < iVar1) {
        (***0x13188)(*0x13188,&uStackX_20);
        if (uStackX_20 != '\0') {
            iVar1 = (*(*0x13188)[1])(*0x13188,0x13180);
            if (-1 < iVar1) {
                iVar1 = fcn.00011e64();
                *0x13158 = 1;
                if (iVar1 != 0) {
                    *0x13150 = iVar1;
                }
                *0x13168 = 0;
                fcn.00011cf8();
                fcn.00011d80();
                *0x13168 = 1;
                iVar1 = fcn.00011900(arg1,arg2);
                return iVar1;
            }
            return iVar1;
        }
    }
    return iVar1;
}


/* fcn.00011fa8 @ 0x11fa8 */

int64_t fcn.00011fa8(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    piVar3 = 0x130c0;
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


/* fcn.00011900 @ 0x11900 */

void fcn.00011900(ulong param_1)

{
    uint8_t uVar1;
    uint16_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    int32_t var_20h;
    int64_t var_28h_2;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h_2;
    int64_t var_18h;
    int64_t var_10h;
    
    uVar4 = CONCAT71(param_1 >> 8,0xb);
    var_28h = 0;
    var_30h = 0;
    var_20h = 0;
    uVar1 = fcn.00011418(uVar4);
    out(0x70,0x8b);
    out(0x71,uVar1 & 0xdf);
    fcn.00011418(CONCAT71(uVar4 >> 8,0xc));
    uVar2 = in(0x1800);
    out(0x1800,uVar2 | 0x400);
    iVar3 = (**(*0x13148 + 0x140))(0x13040,0,&var_28h);
    if (-1 < iVar3) {
        iVar3 = (**(var_28h + 8))(var_28h,&var_30h);
        if (-1 < iVar3) {
            iVar3 = (**(var_30h + 0xd0))(str.Y_mEK,0,&var_20h_2);
            if (-1 < iVar3) {
                var_28h_2 = 4;
                (**var_20h_2)(var_20h_2,fcn.00011728,&var_28h_2,&var_10h);
                var_28h_2 = 5;
                (**var_20h_2)(var_20h_2,fcn.00011728,&var_28h_2,&var_10h);
                iVar3 = (**(var_30h + 0xd0))(0x13020,0,&var_18h);
                if (iVar3 < 0) {
                    var_18h = NULL;
                }
                if (var_18h != NULL) {
                    (**var_18h)(var_18h,0x118b8,&var_20h,&var_10h);
                }
            }
        }
    }
    return;
}


