// decompiled by r2ghidra: 1125_AcpiModeEnable.pe32
// functions: 41

/* entry0 @ 0x11290 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.00011318(arg1,arg2);
    *0x13820 = -0x7fffffffffffffff;
    iVar1 = section..text(0x13720);
    if (iVar1 == 0) {
        iVar1 = fcn.000119e4(arg1,arg2);
        if ((-1 < iVar1) || (*0x13820 < 0)) {
            *0x13820 = iVar1;
        }
        fcn.000110d0(0x13720,-1);
    }
    iVar1 = *0x13820;
    if (*0x13820 < 0) {
        fcn.00011eb8();
    }
    return iVar1;
}


/* fcn.00011b04 @ 0x11b04 */

void fcn.00011b04(void)

{
    return;
}


/* fcn.00011318 @ 0x11318 */

void fcn.00011318(int64_t arg1,int64_t arg2)

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
    
    *0x136b0 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x136a8 = arg2;
    uStackX_8 = arg1;
    (**(*0x136b0 + 0x140))(0x13040,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x136b8);
    (**(*0x136b0 + 0x140))(0x13050,0,&iStackX_18);
    uStackX_8 = 0;
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,0);
    *0x13830 = fcn.00011e88();
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,*0x13830);
    *0x13828 = uStackX_8 >> 5;
    fcn.00011ef4();
    puVar4 = fcn.00011ef4();
    do {
        uVar1 = *puVar4;
        noname_0 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x00011404:
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
            if ((*0x135f0 == *(puVar4 + 4)) && (*0x135f8 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x00011404;
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
    fcn.00011b04();
    *(arg1 + 0xf8) = 0;
    if ((*0x13640 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.000119e4 @ 0x119e4 */

int64_t fcn.000119e4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char acStackX_18 [16];
    
    if (*0x13718 == 0) {
        *0x136f8 = *(arg2 + 0x60);
        *0x13700 = *(arg2 + 0x58);
        *0x13718 = arg2;
    }
    acStackX_18[0] = '\0';
    if (*0x13718 == 0) {
        *0x136f8 = *(arg2 + 0x60);
        *0x13700 = *(arg2 + 0x58);
        *0x13718 = arg2;
    }
    iVar1 = (**(*0x136f8 + 0x140))(0x13620,0,0x13708);
    if (((-1 < iVar1) && ((***0x13708)(*0x13708,acStackX_18), acStackX_18[0] != '\0')) &&
       (iVar1 = (*(*0x13708)[1])(*0x13708,0x136c8), -1 < iVar1)) {
        iVar1 = fcn.000120cc();
        *0x136d0 = 1;
        if (iVar1 != 0) {
            *0x13700 = iVar1;
        }
        *0x136e0 = 0;
        fcn.00011f60();
        fcn.00011fe8();
        *0x136e0 = 1;
        iVar1 = fcn.00011830(arg1,arg2);
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


/* fcn.00011eb8 @ 0x11eb8 */

void fcn.00011eb8(void)

{
    char cVar1;
    
    cVar1 = fcn.00011e44(*0x13830);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x00011ede. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x136b8 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00011eed. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x136b0 + 0x48))(*0x13830);
    return;
}


/* fcn.00011e44 @ 0x11e44 */

uint64_t fcn.00011e44(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x13828 != 0) {
        puVar2 = *0x13830 + 8;
        in_RAX = *0x13830;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x13828);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00011e88 @ 0x11e88 */

ulong fcn.00011e88(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x136b8 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00011ef4 @ 0x11ef4 */

int64_t fcn.00011ef4(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x136c0 == 0) {
        *0x136c0 = 0;
        if (*(*0x136a8 + 0x68) != 0) {
            piVar2 = *(*0x136a8 + 0x70);
            do {
                if ((*0x13030 == *piVar2) && (*0x13038 == piVar2[1])) {
                    *0x136c0 = (*(*0x136a8 + 0x70))[uVar1 * 3 + 2];
                    return *0x136c0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x136a8 + 0x68));
        }
    }
    return *0x136c0;
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


/* fcn.00011478 @ 0x11478 */

ulong * fcn.00011478(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *puStackX_20;
    
    iVar1 = (**(*0x136c8 + 0x50))(6,0x10,&puStackX_20);
    if (iVar1 == 0) {
        *puStackX_20 = 0;
        if (*arg1 == 0) {
            *arg2 = puStackX_20;
            *arg1 = puStackX_20;
        }
        else {
            **arg2 = puStackX_20;
            *arg2 = puStackX_20;
        }
    }
    else {
        puStackX_20 = NULL;
    }
    return puStackX_20;
}


/* fcn.000114e0 @ 0x114e0 */

ulong fcn.000114e0(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    ulong *puVar1;
    ulong uVar2;
    uint in_register_0000000c;
    ulong *puVar3;
    uint in_R8;
    ulong *puVar4;
    
    puVar3 = *arg2;
    if (puVar3 == CONCAT44(in_register_0000000c,arg1)) {
        if (puVar3 == *CONCAT44(in_R8,arg3)) {
            *CONCAT44(in_R8,arg3) = 0;
        }
        *arg2 = *puVar3;
code_r0x00011501:
        (**(*0x136c8 + 0x58))(puVar3);
        uVar2 = 1;
    }
    else {
        puVar1 = *puVar3;
        puVar4 = puVar3;
        while (puVar3 = puVar1, puVar3 != NULL) {
            if (puVar3 == CONCAT44(in_register_0000000c,arg1)) {
                if (puVar3 == *CONCAT44(in_R8,arg3)) {
                    *CONCAT44(in_R8,arg3) = puVar4;
                }
                *puVar4 = *puVar3;
                goto code_r0x00011501;
            }
            puVar4 = puVar3;
            puVar1 = *puVar3;
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00011e0c @ 0x11e0c */

ulong fcn.00011e0c(void)

{
    char cVar1;
    
    cVar1 = fcn.00011dd0();
    if ((((cVar1 != '\x02') && (cVar1 = fcn.00011dd0(), cVar1 != '\x05')) && (cVar1 = fcn.00011dd0(), cVar1 != '\x06')
        ) && (cVar1 = fcn.00011dd0(), cVar1 != '\x03')) {
        return 0;
    }
    return 1;
}


/* fcn.00011b5c @ 0x11b5c */

uint64_t fcn.00011b5c(int64_t arg1)

{
    uint16_t uVar1;
    char cVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t auStackX_8 [8];
    
    uVar5 = arg1 & 0xffffffff;
    cVar2 = fcn.00011e0c();
    uVar3 = 0;
    if (((arg1 >> 0x18 & 0xf) == (cVar2 != '\0') + 8) &&
       (uVar3 = fcn.00011b08(auStackX_8), (uVar5 >> 0x10 & 0x1f) < auStackX_8[0])) {
        iVar4 = fcn.00011b08(auStackX_8);
        uVar1 = *((uVar5 >> 0x10 & 0x1f) * 0x1e + 0x1c + iVar4);
        uVar3 = uVar1;
        if ((uVar5 & 0x1ff) < uVar1) {
            return CONCAT71(uVar1 >> 8,1);
        }
    }
    return uVar3 & 0xffffffffffffff00;
}


/* fcn.00011b38 @ 0x11b38 */

bool fcn.00011b38(int64_t param_1)

{
    unkint7 extraout_RAX;
    int aiStackX_10 [6];
    
    fcn.00012578(param_1,aiStackX_10);
    return -1 < extraout_RAX && aiStackX_10[0] == 0;
}


/* fcn.00011bcc @ 0x11bcc */

void fcn.00011bcc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    char cVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uStackX_8;
    uint32_t uStackX_10;
    uchar auStackX_18 [8];
    
    uStackX_10 = CONCAT31(uStackX_10._1_3_,arg2);
    uVar5 = ~arg3 | arg4;
    uVar8 = arg1;
    uVar1 = arg1 >> 0x10;
    uVar7 = 0;
    if ((uVar5 & 0xfffffffe) != 0) {
        cVar2 = fcn.00011b5c(arg1);
        uVar7 = 0;
        if (cVar2 != '\0') {
            uVar6 = uVar8 & 0x1ff;
            arg2 = uVar1 & 0xf1f;
            iVar3 = fcn.0001221c(6,arg2);
            if ((-1 < iVar3) && (uVar7 = uStackX_10 >> (uVar6 & 0x1f) & 1, uVar7 != 0)) {
                arg2 = uVar6 >> 5;
                fcn.000126d8(uVar1 & 0xf1f,arg2,1 << (uVar6 & 0x1f));
            }
        }
    }
    uVar6 = 0;
    if ((uVar5 & 1) != 0) {
        cVar2 = fcn.00011b5c(arg1 & 0xffffffff);
        uVar6 = 0;
        if (cVar2 != '\0') {
            uVar5 = uVar8 & 0x1ff;
            arg2 = uVar1 & 0xf1f;
            iVar3 = fcn.0001221c(7,arg2);
            if ((-1 < iVar3) && (uVar6 = uStackX_8 >> (uVar5 & 0x1f) & 1, uVar6 != 0)) {
                arg2 = uVar5 >> 5;
                fcn.00012780(uVar1 & 0xf1f,arg2,1 << (uVar5 & 0x1f));
            }
        }
    }
    iVar3 = fcn.00011b08(auStackX_18);
    uVar5 = fcn.00011d94(arg1 & 0xffffffff,arg2);
    puVar4 = *((uVar1 & 0x1f) * 0x1e + iVar3) << 0x10 | (uVar5 & 0xffff0000 | 0xfffd0000) << 8 | uVar5 & 0xffff;
    *puVar4 = *puVar4 & arg3 | arg4;
    if (uVar7 != 0) {
        fcn.0001272c(uVar1 & 0xf1f,(uVar8 & 0x1ff) >> 5,1 << (uVar8 & 0x1ff & 0x1f));
    }
    if (uVar6 != 0) {
        fcn.000127d4(uVar8 >> 0x10 & 0xf1f,(uVar8 & 0x1ff) >> 5,1 << (uVar8 & 0x1ff & 0x1f));
    }
    return;
}


/* fcn.0001233c @ 0x1233c */

ulong fcn.0001233c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    bool bVar1;
    int64_t iVar2;
    uint32_t *puVar3;
    uint32_t uVar4;
    uint8_t *puVar5;
    int iVar6;
    uint32_t auStackX_8 [2];
    uchar auStackX_10 [8];
    uint32_t in_stack_00000028;
    
    auStackX_8[0] = 0;
    iVar6 = arg1;
    uVar4 = arg2 & 0x1f;
    bVar1 = false;
    iVar2 = fcn.00011b08(auStackX_10);
    if (iVar6 == 0) {
        puVar5 = uVar4 * 0x1e + iVar2;
        uVar4 = *(puVar5 + 4);
    }
    else {
        if (iVar6 == 1) {
            puVar5 = uVar4 * 0x1e + iVar2;
            uVar4 = *(puVar5 + 0xc);
        }
        else {
            if (iVar6 == 2) {
                puVar5 = uVar4 * 0x1e + iVar2;
                uVar4 = *(puVar5 + 10);
                goto code_r0x000123ef;
            }
            if (iVar6 == 3) {
                puVar5 = uVar4 * 0x1e + iVar2;
                uVar4 = *(puVar5 + 0x10);
            }
            else {
                if (iVar6 == 4) {
                    puVar5 = uVar4 * 0x1e + iVar2;
                    uVar4 = *(puVar5 + 0xe);
                    goto code_r0x000123ef;
                }
                if (iVar6 != 5) {
                    return 0x8000000000000003;
                }
                puVar5 = uVar4 * 0x1e + iVar2;
                uVar4 = *(puVar5 + 0x14);
            }
        }
        bVar1 = true;
    }
code_r0x000123ef:
    if (uVar4 == 0xffff) {
        return 0x8000000000000003;
    }
    if (bVar1) {
        fcn.00012638(arg2 & 0xffffffffU,arg3 & 0xffffffffU,auStackX_8);
        if (auStackX_8[0] != 0) {
            if ((auStackX_8[0] & (~arg4 | in_stack_00000028)) == 0) {
                auStackX_8[0] = 0;
            }
            else {
                fcn.000126d8(arg2 & 0xffffffff,arg3 & 0xffffffff,auStackX_8[0]);
            }
        }
    }
    uVar4 = uVar4 + arg3 * 4;
    puVar3 = *puVar5 << 0x10 | (uVar4 & 0xffff0000 | 0xfffd0000) << 8 | uVar4 & 0xffff;
    *puVar3 = *puVar3 & arg4 | in_stack_00000028;
    if ((bVar1) && (auStackX_8[0] != 0)) {
        fcn.0001272c(arg2 & 0xffffffffU,arg3 & 0xffffffffU,auStackX_8[0]);
    }
    return 0;
}


/* fcn.000120cc @ 0x120cc */

ulong fcn.000120cc(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    if (*0x136c8 != 0) {
        iVar3 = *(*0x136c8 + 0xa0);
        for (iVar2 = *(*0x136c8 + 0x98); iVar2 != 0; iVar2 = iVar2 + -1) {
            iVar1 = fcn.00012118(iVar3);
            if (iVar1 == 0) {
                return *(iVar3 + 0x10);
            }
            iVar3 = iVar3 + 0x18;
        }
    }
    return 0;
}


/* fcn.00011f60 @ 0x11f60 */

ulong fcn.00011f60(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x136d0 == '\0') {
        if (*0x136f0 == 0) {
            if (*0x136e0 != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x136f8 + 0x140))(0x13600,0,0x136f0);
        }
    }
    else if (*0x136d8 == 0) {
        if ((*0x136e0 == '\0') && (*0x136c8 != 0)) {
    //WARNING: Could not recover jumptable at 0x00011f9f. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x136c8 + 0xd0))(0x13610,0,0x136d8);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.00011fe8 @ 0x11fe8 */

int64_t fcn.00011fe8(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    if (*0x136d0 == '\0') {
        if (*0x13710 == 0) {
            if (*0x136e0 == '\x01') {
                return -0x7ffffffffffffffd;
            }
            uVar2 = (**(*0x136f8 + 0x18))(0x1f);
            (**(*0x136f8 + 0x20))(uVar2);
            if (0x10 < uVar2) {
                return -0x7ffffffffffffffd;
            }
            iVar1 = (**(*0x136f8 + 0x140))(0x13010,0,0x13710);
            if (iVar1 < 0) {
                *0x13710 = 0;
            }
            return iVar1;
        }
    }
    else if (*0x136e8 == 0) {
        if (*0x136c8 == 0) {
            return -0x7ffffffffffffffd;
        }
        iVar1 = (**(*0x136c8 + 0xd0))(0x13020,0,0x136e8);
        if (iVar1 < 0) {
            *0x136e8 = 0;
        }
        return iVar1;
    }
    return 0;
}


/* fcn.00011830 @ 0x11830 */

int64_t fcn.00011830(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    uint32_t var_20h_2;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_bp_8h;
    
    var_20h = 0;
    iVar1 = 0;
    var_28h = 0;
    var_18h = 0;
    var_10h = 0xa0;
    var_bp_8h = 0xa1;
    if (*0x13718 == 0) {
        *0x136f8 = *(arg1 + 0x60);
        *0x13700 = *(arg1 + 0x58);
        *0x13718 = arg1;
    }
    if ((((*0x13708 != NULL) || (iVar1 = (**(*0x136f8 + 0x140))(0x13620,0,0x13708), -1 < iVar1)) &&
        ((***0x13708)(*0x13708,&var_20h_2), var_20h_2 != '\0')) &&
       (iVar1 = (*(*0x13708)[1])(*0x13708,0x136c8), -1 < iVar1)) {
        iVar1 = fcn.000120cc();
        *0x136d0 = 1;
        if (iVar1 != 0) {
            *0x13700 = iVar1;
        }
        *0x136e0 = 0;
        fcn.00011f60();
        iVar1 = fcn.00011fe8();
        *0x136e0 = 1;
    }
    if (((-1 < iVar1) && (iVar1 = (**(*0x136c8 + 0xd0))(0x13060,0,&var_28h), -1 < iVar1)) &&
       ((iVar1 = (**var_28h)(var_28h,0x11634,&var_10h,&var_20h), -1 < iVar1 &&
        ((iVar1 = (**(*0x136c8 + 0xa8))(&var_18h,0x13000,0,0x13090), -1 < iVar1 &&
         (iVar1 = (**var_28h)(var_28h,0x117ac,&var_bp_8h,&var_20h), -1 < iVar1)))))) {
        iVar1 = (**(*0x136c8 + 0xa8))(&var_18h,0x13070,0,0x13080);
    }
    return iVar1;
}


/* fcn.00012578 @ 0x12578 */

uint64_t fcn.00012578(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int8_t iVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uchar auStackX_18 [16];
    
    uVar2 = arg1 & 0xffffffff;
    cVar1 = fcn.00011b5c(arg1);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar7 = uVar2 & 0x1ff;
        uVar2 = uVar2 >> 0x10 & 0x1f;
        iVar3 = fcn.00011b08(auStackX_18);
        iVar5 = (uVar2 & 0xffffffff) * 0x1e;
        if (*(iVar5 + 2 + iVar3) == -1) {
            *arg2 = 0;
            uVar2 = 0x8000000000000003;
        }
        else {
            uVar6 = *(iVar5 + 2 + iVar3) + (uVar7 >> 3 & 0x1fffffff) * 4;
            iVar4 = (uVar7 & 7) << 2;
            *arg2 = (*((uVar6 & 0xffff0000 | 0xfffd0000) << 8 | *(iVar5 + iVar3) << 0x10 | uVar6 & 0xffff) & 3 << iVar4)
                    >> iVar4;
            uVar2 = 0 >> iVar4;
        }
    }
    return uVar2;
}


/* fcn.00011b08 @ 0x11b08 */

ulong fcn.00011b08(uint *param_1)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00011e0c();
    if (cVar1 == '\0') {
        *param_1 = 0x13;
        uVar2 = 0x13190;
    }
    else {
        *param_1 = 0x12;
        uVar2 = 0x133d0;
    }
    return uVar2;
}


/* fcn.0001221c @ 0x1221c */

ulong fcn.0001221c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint8_t *puVar4;
    int iVar5;
    int in_R8D;
    uint *in_R9;
    uchar auStackX_8 [8];
    
    uVar3 = arg2 & 0x1f;
    iVar1 = fcn.00011b08(auStackX_8);
    iVar5 = arg1;
    if (iVar5 == 0) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 4);
    }
    else if (iVar5 == 1) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0xc);
    }
    else if (iVar5 == 2) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 10);
    }
    else if (iVar5 == 3) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0x10);
    }
    else if (iVar5 == 4) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0xe);
    }
    else if (iVar5 == 5) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0x14);
    }
    else if (iVar5 == 6) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0x16);
    }
    else {
        if (iVar5 != 7) {
            return 0x8000000000000003;
        }
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0x18);
    }
    if (uVar2 == 0xffff) {
        return 0x8000000000000003;
    }
    if (iVar5 - 6U < 2) {
        in_R8D = in_R8D * 8;
    }
    else {
        in_R8D = in_R8D * 4;
    }
    *in_R9 = *(*puVar4 << 0x10 | (uVar2 + in_R8D & 0xffff0000 | 0xfffd0000) << 8 | uVar2 + in_R8D & 0xffff);
    return 0;
}


/* fcn.000126d8 @ 0x126d8 */

ulong fcn.000126d8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00012194(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.0001249c(6,arg1 & 0xffffffff,arg2 & 0xffffffff,~arg3);
    }
    return uVar2;
}


/* fcn.00012780 @ 0x12780 */

ulong fcn.00012780(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00012194(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.0001249c(7,arg1 & 0xffffffff,arg2 & 0xffffffff,~arg3);
    }
    return uVar2;
}


/* fcn.00011d94 @ 0x11d94 */

int fcn.00011d94(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint auStackX_10 [6];
    
    auStackX_10[0] = arg2;
    uVar2 = arg1 & 0xffffffff;
    iVar1 = fcn.00011b08(auStackX_10);
    return *((uVar2 >> 0x10 & 0x1f) * 0x1e + 0x1a + iVar1) + (uVar2 & 0x1ff) * 0x10;
}


/* fcn.0001272c @ 0x1272c */

ulong fcn.0001272c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00012194(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.0001249c(6,arg1 & 0xffffffff,arg2 & 0xffffffff,0xffffffff);
    }
    return uVar2;
}


/* fcn.000127d4 @ 0x127d4 */

ulong fcn.000127d4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00012194(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.0001249c(7,arg1 & 0xffffffff,arg2 & 0xffffffff,0xffffffff);
    }
    return uVar2;
}


/* fcn.00011dd0 @ 0x11dd0 */

void fcn.00011dd0(void)

{
    if (*0x135ec == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x135ec = '\x05';
        }
        else {
            *0x135ec = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


/* fcn.00012118 @ 0x12118 */

int64_t fcn.00012118(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    piVar3 = 0x13630;
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


/* fcn.00012638 @ 0x12638 */

ulong fcn.00012638(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00012194(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.0001221c(6,arg1 & 0xffffffff);
    }
    return uVar2;
}


/* fcn.00012688 @ 0x12688 */

ulong fcn.00012688(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00012194(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.0001221c(7,arg1 & 0xffffffff);
    }
    return uVar2;
}


/* fcn.00012828 @ 0x12828 */

ulong fcn.00012828(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint16_t uVar2;
    ulong uVar3;
    uint8_t uVar4;
    int iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    int iVar8;
    uint *in_stack_00000048;
    uint8_t *in_stack_00000050;
    
    uVar7 = arg4;
    if ((uVar7 < 0x14) && ((0x800f3U >> (uVar7 & 0x1f) & 1) != 0)) {
        if (*((arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU) + 0xc0000000) == -1) {
            uVar3 = 0x8000000000000007;
        }
        else {
            uVar1 = arg1 + 0xd8;
            iVar8 = 0xfffffff;
            iVar5 = 0xfffffff;
            do {
                if ((*((uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff) + 0xc0000000) & 1) == 0) break;
                iVar5 = iVar5 + -1;
            } while (0 < iVar5);
            if (iVar5 != 0) {
                *in_stack_00000050 = 4;
                *((arg1 + 0xd0U >> 4 & 0x10000000 | arg1 + 0xd0U & 0xffffffff) + 0xc0000000) =
                     arg2 << 0x18 | arg3 & 0xffff;
                uVar6 = uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff;
                *((arg1 + 0xdcU >> 4 & 0x10000000 | arg1 + 0xdcU & 0xffffffff) + 0xc0000000) = arg3 >> 0x10;
                *(uVar6 + 0xc0000000) = arg4 << 8 | *(uVar6 + 0xc0000000) & 0x7f;
                *((arg1 + 0xdaU >> 4 & 0x10000000 | arg1 + 0xdaU & 0xffffffff) + 0xc0000000) = 0xf000;
                if ((((uVar7 == 1) || (uVar7 == 5)) || (uVar7 == 7)) || (uVar7 == 0x13)) {
                    *((arg1 + 0xd4U >> 4 & 0x10000000 | arg1 + 0xd4U & 0xffffffff) + 0xc0000000) = *in_stack_00000048;
                }
                else {
                    *((arg1 + 0xd4U >> 4 & 0x10000000 | arg1 + 0xd4U & 0xffffffff) + 0xc0000000) = 0;
                }
                uVar6 = uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff;
                *(uVar6 + 0xc0000000) = *(uVar6 + 0xc0000000) | 1;
                do {
                    uVar2 = *((uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff) + 0xc0000000);
                    if ((uVar2 & 1) == 0) break;
                    iVar8 = iVar8 + -1;
                } while (0 < iVar8);
                if (iVar8 != 0) {
                    uVar4 = uVar2 >> 1 & 3;
                    *in_stack_00000050 = uVar4;
                    if (uVar4 == 0) {
                        if (((arg4 & 0xfffffff9U) == 0) && (uVar7 != 2)) {
                            *in_stack_00000048 =
                                 *((arg1 + 0xd4U >> 4 & 0x10000000 | arg1 + 0xd4U & 0xffffffff) + 0xc0000000);
                        }
                        return 0;
                    }
                    if (uVar4 != 2) {
                        return 0x8000000000000007;
                    }
                    return 0x8000000000000010;
                }
            }
            uVar3 = 0x8000000000000012;
        }
    }
    else {
        uVar3 = 0x8000000000000002;
    }
    return uVar3;
}


/* fcn.00012194 @ 0x12194 */

uint64_t fcn.00012194(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iStackX_8;
    uint32_t auStackX_18 [4];
    
    uVar6 = arg1;
    uVar7 = arg2;
    iVar2 = fcn.00011b08(auStackX_18);
    uVar5 = uVar6 & 0x1f;
    uVar3 = fcn.00011e0c();
    uVar4 = uVar3 & 0xffffffffffffff00;
    if (((uVar3 != '\0') + 8) * 0x100 <= uVar6) {
        fcn.00011b08();
        cVar1 = fcn.00011e0c();
        uVar4 = iStackX_8 - 1U;
        if (((uVar6 <= (((cVar1 != '\0') + 8) * 0x100 | iStackX_8 - 1U)) && (uVar5 < auStackX_18[0])) &&
           (uVar4 = uVar5, uVar7 <= *(uVar4 * 0x1e + 0x1c + iVar2) - 1 >> 5)) {
            return CONCAT71(uVar5 >> 8,1);
        }
    }
    return uVar4 & 0xffffffffffffff00;
}


/* fcn.0001249c @ 0x1249c */

ulong fcn.0001249c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t arg2_00;
    uint32_t uVar4;
    uchar *puVar5;
    int iVar6;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [2];
    uint32_t in_stack_00000028;
    
    auStackX_8[0] = 0;
    iVar6 = arg1;
    uVar4 = arg2 & 0x1f;
    arg2_00 = arg3 & 0xffffffff;
    iVar2 = fcn.00011b08(auStackX_10);
    if (iVar6 == 6) {
        puVar5 = uVar4 * 0x1e + iVar2;
        uVar1 = *(puVar5 + 0x16);
        fcn.00012638(arg2 & 0xffffffffU,arg2_00,auStackX_8);
    }
    else {
        if (iVar6 != 7) {
            return 0x8000000000000003;
        }
        puVar5 = uVar4 * 0x1e + iVar2;
        uVar1 = *(puVar5 + 0x18);
        fcn.00012688(arg2 & 0xffffffffU,arg2_00,auStackX_8);
    }
    if (uVar1 == 0xffff) {
        return 0x8000000000000003;
    }
    auStackX_10[0] = auStackX_8[0] & arg4 | in_stack_00000028;
    uVar3 = fcn.00012828(0xf9000,CONCAT71(arg2_00 >> 8,*puVar5),uVar1 + arg3 * 8,0x13);
    return uVar3;
}


