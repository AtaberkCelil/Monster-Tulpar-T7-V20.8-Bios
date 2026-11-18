// decompiled by r2ghidra: 1120_TcoSmi.pe32
// functions: 20

/* entry0 @ 0x11230 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.000112b8(arg1,arg2);
    *0x12260 = -0x7fffffffffffffff;
    iVar1 = section..text(0x12160);
    if (iVar1 == 0) {
        iVar1 = fcn.0001159c(arg1,arg2);
        if ((-1 < iVar1) || (*0x12260 < 0)) {
            *0x12260 = iVar1;
        }
        fcn.000110d0(0x12160,-1);
    }
    iVar1 = *0x12260;
    if (*0x12260 < 0) {
        fcn.00011734();
    }
    return iVar1;
}


/* fcn.000116bc @ 0x116bc */

void fcn.000116bc(void)

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
    
    *0x120e8 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x120e0 = arg2;
    uStackX_8 = arg1;
    (**(*0x120e8 + 0x140))(0x12030,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x120f0);
    (**(*0x120e8 + 0x140))(0x12040,0,&iStackX_18);
    uStackX_8 = 0;
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,0);
    *0x12270 = fcn.00011704();
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,*0x12270);
    *0x12268 = uStackX_8 >> 5;
    fcn.00011770();
    puVar4 = fcn.00011770();
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
            if ((*0x12060 == *(puVar4 + 4)) && (*0x12068 == *(puVar4 + 8))) {
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
    
    //[00] -r-x section size 4096 named .text
    fcn.000116bc();
    *(arg1 + 0xf8) = 0;
    if ((*0x120b0 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.0001159c @ 0x1159c */

int64_t fcn.0001159c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char acStackX_18 [16];
    
    if (*0x12150 == 0) {
        *0x12128 = *(arg2 + 0x60);
        *0x12130 = *(arg2 + 0x58);
        *0x12150 = arg2;
    }
    acStackX_18[0] = '\0';
    if (*0x12150 == 0) {
        *0x12128 = *(arg2 + 0x60);
        *0x12130 = *(arg2 + 0x58);
        *0x12150 = arg2;
    }
    iVar1 = (**(*0x12128 + 0x140))(0x12090,0,0x12140);
    if (((-1 < iVar1) && ((***0x12140)(*0x12140,acStackX_18), acStackX_18[0] != '\0')) &&
       (iVar1 = (*(*0x12140)[1])(*0x12140,0x12138), -1 < iVar1)) {
        iVar1 = fcn.00011948();
        *0x12100 = 1;
        if (iVar1 != 0) {
            *0x12130 = iVar1;
        }
        *0x12110 = 0;
        fcn.000117dc();
        fcn.00011864();
        *0x12110 = 1;
        iVar1 = fcn.00011474(arg1,arg2);
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


/* fcn.00011734 @ 0x11734 */

void fcn.00011734(void)

{
    char cVar1;
    
    cVar1 = fcn.000116c0(*0x12270);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x0001175a. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x120f0 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00011769. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x120e8 + 0x48))(*0x12270);
    return;
}


/* fcn.000116c0 @ 0x116c0 */

uint64_t fcn.000116c0(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x12268 != 0) {
        puVar2 = *0x12270 + 8;
        in_RAX = *0x12270;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x12268);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00011704 @ 0x11704 */

ulong fcn.00011704(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x120f0 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00011770 @ 0x11770 */

int64_t fcn.00011770(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x120f8 == 0) {
        *0x120f8 = 0;
        if (*(*0x120e0 + 0x68) != 0) {
            piVar2 = *(*0x120e0 + 0x70);
            do {
                if ((*0x12020 == *piVar2) && (*0x12028 == piVar2[1])) {
                    *0x120f8 = (*(*0x120e0 + 0x70))[uVar1 * 3 + 2];
                    return *0x120f8;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x120e0 + 0x68));
        }
    }
    return *0x120f8;
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


/* fcn.00011948 @ 0x11948 */

ulong fcn.00011948(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    if (*0x12138 != 0) {
        iVar3 = *(*0x12138 + 0xa0);
        for (iVar2 = *(*0x12138 + 0x98); iVar2 != 0; iVar2 = iVar2 + -1) {
            iVar1 = fcn.00011994(iVar3);
            if (iVar1 == 0) {
                return *(iVar3 + 0x10);
            }
            iVar3 = iVar3 + 0x18;
        }
    }
    return 0;
}


/* fcn.000117dc @ 0x117dc */

ulong fcn.000117dc(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x12100 == '\0') {
        if (*0x12120 == 0) {
            if (*0x12110 != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x12128 + 0x140))(0x12070,0,0x12120);
        }
    }
    else if (*0x12108 == 0) {
        if ((*0x12110 == '\0') && (*0x12138 != 0)) {
    //WARNING: Could not recover jumptable at 0x0001181b. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x12138 + 0xd0))(0x12080,0,0x12108);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.00011864 @ 0x11864 */

int64_t fcn.00011864(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    if (*0x12100 == '\0') {
        if (*0x12148 == 0) {
            if (*0x12110 == '\x01') {
                return -0x7ffffffffffffffd;
            }
            uVar2 = (**(*0x12128 + 0x18))(0x1f);
            (**(*0x12128 + 0x20))(uVar2);
            if (0x10 < uVar2) {
                return -0x7ffffffffffffffd;
            }
            iVar1 = (**(*0x12128 + 0x140))(str.6_6v,0,0x12148);
            if (iVar1 < 0) {
                *0x12148 = 0;
            }
            return iVar1;
        }
    }
    else if (*0x12118 == 0) {
        if (*0x12138 == 0) {
            return -0x7ffffffffffffffd;
        }
        iVar1 = (**(*0x12138 + 0xd0))(0x12010,0,0x12118);
        if (iVar1 < 0) {
            *0x12118 = 0;
        }
        return iVar1;
    }
    return 0;
}


/* fcn.00011474 @ 0x11474 */

int64_t fcn.00011474(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    char acStackX_18 [8];
    int64_t iStackX_20;
    ulong auStack_18 [2];
    
    iVar1 = 0;
    if (*0x12150 == 0) {
        *0x12128 = *(arg1 + 0x60);
        *0x12130 = *(arg1 + 0x58);
        *0x12150 = arg1;
    }
    if ((((*0x12140 != NULL) || (iVar1 = (**(*0x12128 + 0x140))(0x12090,0,0x12140), -1 < iVar1)) &&
        ((***0x12140)(*0x12140,acStackX_18), acStackX_18[0] != '\0')) &&
       (iVar1 = (*(*0x12140)[1])(*0x12140,0x12138), -1 < iVar1)) {
        iVar1 = fcn.00011948();
        *0x12100 = 1;
        if (iVar1 != 0) {
            *0x12130 = iVar1;
        }
        *0x12110 = 0;
        fcn.000117dc();
        iVar1 = fcn.00011864();
        *0x12110 = 1;
    }
    if (-1 < iVar1) {
        iStackX_20 = 0;
        iVar1 = (**(*0x120f0 + 0xd0))(0x12050,0,&iStackX_20);
        if (-1 < iVar1) {
            auStack_18[0] = 0;
            iVar1 = (**(iStackX_20 + 0x48))(iStackX_20,0x11418,auStack_18);
        }
    }
    return iVar1;
}


/* fcn.00011994 @ 0x11994 */

int64_t fcn.00011994(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    piVar3 = 0x120a0;
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


