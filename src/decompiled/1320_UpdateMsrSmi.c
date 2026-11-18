// decompiled by r2ghidra: 1320_UpdateMsrSmi.pe32
// functions: 21

/* entry0 @ 0x112e0 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.00011368(arg1,arg2);
    *0x12290 = -0x7fffffffffffffff;
    iVar1 = section..text(0x12190);
    if (iVar1 == 0) {
        iVar1 = fcn.000116e8(arg1,arg2);
        if ((-1 < iVar1) || (*0x12290 < 0)) {
            *0x12290 = iVar1;
        }
        fcn.00011130(0x12190,-1);
    }
    iVar1 = *0x12290;
    if (*0x12290 < 0) {
        fcn.00011ab4();
    }
    return iVar1;
}


/* fcn.00011808 @ 0x11808 */

void fcn.00011808(void)

{
    return;
}


/* fcn.00011368 @ 0x11368 */

void fcn.00011368(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    int64_t *piVar6;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    
    *0x12108 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x12100 = arg2;
    uStackX_8 = arg1;
    (**(*0x12108 + 0x140))(0x12040,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,74000);
    (**(*0x12108 + 0x140))(0x12050,0,&iStackX_18);
    uStackX_8 = 0;
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,0);
    *0x122a0 = fcn.00011a84();
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8);
    *0x12298 = uStackX_8 >> 5;
    fcn.00011af0();
    iVar3 = fcn.00011b5c();
    if (iVar3 == 0) {
        uVar4 = fcn.00011280();
        fcn.00011270();
        uVar1 = in(0x1808);
        fcn.00011250(iStackX_18,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x00011240();
        }
        fcn.00011250(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00011270();
        }
        else {
            fcn.00011260();
        }
    }
    uVar4 = 0;
    piVar6 = *(*0x12110 + 0xa0);
    if (*(*0x12110 + 0x98) != 0) {
        do {
            if ((*0x12020 == *piVar6) && (*0x12028 == piVar6[1])) break;
            uVar4 = uVar4 + 1;
            piVar6 = piVar6 + 3;
        } while (uVar4 < *(*0x12110 + 0x98));
    }
    if ((*0x12178 != NULL) || (iVar3 = (**(*0x12108 + 0x140))(0x12040,0,0x12178), -1 < iVar3)) {
        (***0x12178)(*0x12178,0x12180);
    }
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
    
    //[00] -r-x section size 4096 named .text
    fcn.00011808();
    *(arg1 + 0xf8) = 0;
    if ((*0x120d0 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.000116e8 @ 0x116e8 */

int64_t fcn.000116e8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char acStackX_18 [16];
    
    if (*0x12168 == 0) {
        *0x12148 = *(arg2 + 0x60);
        *0x12150 = *(arg2 + 0x58);
        *0x12168 = arg2;
    }
    acStackX_18[0] = '\0';
    if (*0x12168 == 0) {
        *0x12148 = *(arg2 + 0x60);
        *0x12150 = *(arg2 + 0x58);
        *0x12168 = arg2;
    }
    iVar1 = (**(*0x12148 + 0x140))(0x120a0,0,0x12158);
    if (((-1 < iVar1) && ((***0x12158)(*0x12158,acStackX_18), acStackX_18[0] != '\0')) &&
       (iVar1 = (*(*0x12158)[1])(*0x12158,0x12118), -1 < iVar1)) {
        iVar1 = fcn.00011978();
        *0x12120 = 1;
        if (iVar1 != 0) {
            *0x12150 = iVar1;
        }
        *0x12130 = 0;
        fcn.0001180c();
        fcn.00011894();
        *0x12130 = 1;
        iVar1 = fcn.000115c0(arg1,arg2);
    }
    return iVar1;
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


/* fcn.00011ab4 @ 0x11ab4 */

void fcn.00011ab4(void)

{
    char cVar1;
    
    cVar1 = fcn.00011a40(*0x122a0);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x00011ada. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x12110 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00011ae9. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x12108 + 0x48))(*0x122a0);
    return;
}


/* fcn.00011a40 @ 0x11a40 */

uint64_t fcn.00011a40(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x12298 != 0) {
        puVar2 = *0x122a0 + 8;
        in_RAX = *0x122a0;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x12298);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00011a84 @ 0x11a84 */

ulong fcn.00011a84(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x12110 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00011af0 @ 0x11af0 */

int64_t fcn.00011af0(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x12170 == 0) {
        *0x12170 = 0;
        if (*(*0x12100 + 0x68) != 0) {
            piVar2 = *(*0x12100 + 0x70);
            do {
                if ((*0x12030 == *piVar2) && (*0x12038 == piVar2[1])) {
                    *0x12170 = (*(*0x12100 + 0x70))[uVar1 * 3 + 2];
                    return *0x12170;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x12100 + 0x68));
        }
    }
    return *0x12170;
}


/* fcn.00011b5c @ 0x11b5c */

void fcn.00011b5c(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00011af0();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00011b93:
            if ((piVar1 == NULL) || ((*0x120c0 == *(piVar1 + 4) && (*0x120c8 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00011b93;
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


/* fcn.00011978 @ 0x11978 */

ulong fcn.00011978(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    if (*0x12118 != 0) {
        iVar3 = *(*0x12118 + 0xa0);
        for (iVar2 = *(*0x12118 + 0x98); iVar2 != 0; iVar2 = iVar2 + -1) {
            iVar1 = fcn.000119c4(iVar3);
            if (iVar1 == 0) {
                return *(iVar3 + 0x10);
            }
            iVar3 = iVar3 + 0x18;
        }
    }
    return 0;
}


/* fcn.0001180c @ 0x1180c */

ulong fcn.0001180c(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x12120 == '\0') {
        if (*0x12140 == 0) {
            if (*0x12130 != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x12148 + 0x140))(0x12080,0,0x12140);
        }
    }
    else if (*0x12128 == 0) {
        if ((*0x12130 == '\0') && (*0x12118 != 0)) {
    //WARNING: Could not recover jumptable at 0x0001184b. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x12118 + 0xd0))(0x12090,0,0x12128);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.00011894 @ 0x11894 */

int64_t fcn.00011894(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    if (*0x12120 == '\0') {
        if (*0x12160 == 0) {
            if (*0x12130 == '\x01') {
                return -0x7ffffffffffffffd;
            }
            uVar2 = (**(*0x12148 + 0x18))(0x1f);
            (**(*0x12148 + 0x20))(uVar2);
            if (0x10 < uVar2) {
                return -0x7ffffffffffffffd;
            }
            iVar1 = (**(*0x12148 + 0x140))(str.6_6v,0,0x12160);
            if (iVar1 < 0) {
                *0x12160 = 0;
            }
            return iVar1;
        }
    }
    else if (*0x12138 == 0) {
        if (*0x12118 == 0) {
            return -0x7ffffffffffffffd;
        }
        iVar1 = (**(*0x12118 + 0xd0))(0x12010,0,0x12138);
        if (iVar1 < 0) {
            *0x12138 = 0;
        }
        return iVar1;
    }
    return 0;
}


/* fcn.000115c0 @ 0x115c0 */

int64_t fcn.000115c0(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    char acStackX_18 [8];
    ulong uStackX_20;
    ulong *puStack_18;
    uchar auStack_10 [8];
    
    iVar1 = 0;
    uStackX_20 = 0x99;
    if (*0x12168 == 0) {
        *0x12148 = *(arg1 + 0x60);
        *0x12150 = *(arg1 + 0x58);
        *0x12168 = arg1;
    }
    if ((((*0x12158 != NULL) || (iVar1 = (**(*0x12148 + 0x140))(0x120a0,0,0x12158), -1 < iVar1)) &&
        ((***0x12158)(*0x12158,acStackX_18), acStackX_18[0] != '\0')) &&
       (iVar1 = (*(*0x12158)[1])(*0x12158,0x12118), -1 < iVar1)) {
        iVar1 = fcn.00011978();
        *0x12120 = 1;
        if (iVar1 != 0) {
            *0x12150 = iVar1;
        }
        *0x12130 = 0;
        fcn.0001180c();
        iVar1 = fcn.00011894();
        *0x12130 = 1;
    }
    if (-1 < iVar1) {
        iVar1 = (**(*0x12118 + 0xd0))(0x12060,0,&puStack_18);
        if (-1 < iVar1) {
            (**puStack_18)(puStack_18,0x11510,&uStackX_20,auStack_10);
        }
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.000119c4 @ 0x119c4 */

int64_t fcn.000119c4(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    piVar3 = 0x120b0;
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


