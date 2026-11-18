// decompiled by r2ghidra: 1300_OemServiceSmm.pe32
// functions: 123

/* entry0 @ 0x11380 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.00011408(arg1,arg2);
    *0x1e2b0 = -0x7fffffffffffffff;
    iVar1 = section..text(0x1e1b0);
    if (iVar1 == 0) {
        iVar1 = fcn.00011fa8(arg1,arg2);
        if ((-1 < iVar1) || (*0x1e2b0 < 0)) {
            *0x1e2b0 = iVar1;
        }
        fcn.000110d0(0x1e1b0,-1);
    }
    iVar1 = *0x1e2b0;
    if (*0x1e2b0 < 0) {
        fcn.000177ac();
    }
    return iVar1;
}


/* fcn.00016cf0 @ 0x16cf0 */

void fcn.00016cf0(void)

{
    return;
}


/* fcn.00011408 @ 0x11408 */

ulong fcn.00011408(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    char cVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    uint32_t uVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    ulong *puVar9;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    
    *0x1e0f8 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x1e0f0 = arg2;
    uStackX_8 = arg1;
    (**(*0x1e0f8 + 0x140))(0x1a080,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10);
    uVar8 = 0;
    piVar7 = *(*0x1e100 + 0xa0);
    if (*(*0x1e100 + 0x98) != 0) {
        do {
            if ((*0x1a050 == *piVar7) && (*0x1a058 == piVar7[1])) break;
            uVar8 = uVar8 + 1;
            piVar7 = piVar7 + 3;
        } while (uVar8 < *(*0x1e100 + 0x98));
    }
    (**(*0x1e0f8 + 0x140))(0x1a090,0,&iStackX_18);
    uStackX_8 = 0;
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,0);
    *0x1e318 = fcn.0001777c();
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,*0x1e318);
    *0x1e310 = uStackX_8 >> 5;
    fcn.000177e8();
    iVar5 = fcn.00017854();
    if (iVar5 == 0) {
        uVar8 = fcn.000112a0();
        fcn.00011290();
        uVar3 = in(0x1808);
        fcn.00011210(iStackX_18,0x1808);
        while( true ) {
            iVar4 = in(0x1808);
            uVar6 = ((uVar3 & 0xffffff) + 0x16b) - iVar4;
            if ((uVar6 >> 0x17 & 1) != 0) break;
            fcn.00011200();
        }
        fcn.00011210(uVar6,0x1808);
        if ((uVar8 >> 9 & 1) == 0) {
            fcn.00011290();
        }
        else {
            fcn.00011280();
        }
    }
    if ((*0x1e168 != NULL) || (iVar5 = (**(*0x1e0f8 + 0x140))(0x1a080,0,0x1e168), -1 < iVar5)) {
        (***0x1e168)(*0x1e168,0x1e170);
    }
    uVar1 = *0x1b170;
    puVar9 = 0x1dc00;
    do {
        if (*puVar9 == NULL) {
            return 0;
        }
        cVar2 = (**puVar9)(uVar1,0x1e178);
        puVar9 = puVar9 + 1;
    } while (cVar2 == '\0');
    return 0;
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
    
    //[00] -r-x section size 36864 named .text
    fcn.00016cf0();
    *(arg1 + 0xf8) = 0;
    if ((*0x1b290 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.00011fa8 @ 0x11fa8 */

int64_t fcn.00011fa8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char acStackX_18 [16];
    
    if (*0x1e158 == 0) {
        *0x1e108 = *(arg2 + 0x60);
        *0x1e140 = *(arg2 + 0x58);
        *0x1e158 = arg2;
    }
    acStackX_18[0] = '\0';
    if (*0x1e158 == 0) {
        *0x1e108 = *(arg2 + 0x60);
        *0x1e140 = *(arg2 + 0x58);
        *0x1e158 = arg2;
    }
    iVar1 = (**(*0x1e108 + 0x140))(0x1ac50,0,0x1e148);
    if (((-1 < iVar1) && ((***0x1e148)(*0x1e148,acStackX_18), acStackX_18[0] != '\0')) &&
       (iVar1 = (*(*0x1e148)[1])(*0x1e148,0x1e110), -1 < iVar1)) {
        iVar1 = fcn.00017058();
        *0x1e118 = 1;
        if (iVar1 != 0) {
            *0x1e140 = iVar1;
        }
        *0x1e128 = 0;
        fcn.00016eec();
        fcn.00016f74();
        *0x1e128 = 1;
        iVar1 = fcn.00011d9c(arg1,arg2);
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


/* fcn.000177ac @ 0x177ac */

void fcn.000177ac(void)

{
    char cVar1;
    
    cVar1 = fcn.00017738(*0x1e318);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x000177d2. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x1e100 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x000177e1. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x1e0f8 + 0x48))(*0x1e318);
    return;
}


/* fcn.00017738 @ 0x17738 */

uint64_t fcn.00017738(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x1e310 != 0) {
        puVar2 = *0x1e318 + 8;
        in_RAX = *0x1e318;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x1e310);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.0001777c @ 0x1777c */

ulong fcn.0001777c(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x1e100 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000177e8 @ 0x177e8 */

int64_t fcn.000177e8(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x1e160 == 0) {
        *0x1e160 = 0;
        if (*(*0x1e0f0 + 0x68) != 0) {
            piVar2 = *(*0x1e0f0 + 0x70);
            do {
                if ((*0x1a070 == *piVar2) && (*0x1a078 == piVar2[1])) {
                    *0x1e160 = (*(*0x1e0f0 + 0x70))[uVar1 * 3 + 2];
                    return *0x1e160;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x1e0f0 + 0x68));
        }
    }
    return *0x1e160;
}


/* fcn.00017854 @ 0x17854 */

void fcn.00017854(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000177e8();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x0001788b:
            if ((piVar1 == NULL) || ((*0x1b160 == *(piVar1 + 4) && (*0x1b168 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x0001788b;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.000112a0 @ 0x112a0 */

uint64_t fcn.000112a0(void)

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


/* fcn.00011290 @ 0x11290 */

void fcn.00011290(void)

{
    return;
}


/* fcn.00011210 @ 0x11210 */

uint64_t fcn.00011210(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00011202 @ 0x11202 */

void fcn.00011202(void)

{
    return;
}


/* fcn.00011280 @ 0x11280 */

void fcn.00011280(void)

{
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


/* fcn.00016cbc @ 0x16cbc */

int64_t fcn.00016cbc(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint in_register_00000014;
    char *pcVar1;
    uint in_R8;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_R8,arg3);
    pcVar1 = CONCAT44(in_register_00000014,arg2);
    if (uVar2 == 0) {
        return 0;
    }
    for (; (((*arg1 != '\0' && (*pcVar1 != '\0')) && (*arg1 == *pcVar1)) && (1 < uVar2)); uVar2 = uVar2 - 1) {
        arg1 = arg1 + 1;
        pcVar1 = pcVar1 + 1;
    }
    return *arg1 - *pcVar1;
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


/* fcn.00016dbc @ 0x16dbc */

ulong fcn.00016dbc(int64_t arg1,ulong noname_1,int64_t arg2)

{
    char cVar1;
    uint64_t uVar2;
    int64_t iVar3;
    char *pcVar4;
    char cVar5;
    
    if (((arg1 != 0) && (arg2 != 0)) && (pcVar4 = arg1, uVar2 = fcn.00016cf4(arg1), uVar2 < 0xf4241)) {
        for (; (*pcVar4 == ' ' || (*pcVar4 == '\t')); pcVar4 = pcVar4 + 1) {
        }
        cVar5 = '0';
        for (; *pcVar4 == '0'; pcVar4 = pcVar4 + 1) {
        }
        cVar1 = *pcVar4;
        if (*pcVar4 + 0x9fU < 0x1a) {
            cVar1 = cVar1 + -0x20;
        }
        if (cVar1 == 'X') {
            if (pcVar4[-1] != '0') {
                *arg2 = 0;
                return 0;
            }
            pcVar4 = pcVar4 + 1;
        }
        *arg2 = 0;
        uVar2 = 0xffffffffffffffff;
        for (; ((*pcVar4 - cVar5 < 10 || (*pcVar4 + 0xbfU < 6)) || (*pcVar4 + 0x9fU < 6)); pcVar4 = pcVar4 + 1) {
            iVar3 = fcn.00016c8c(CONCAT71(arg1 >> 8,*pcVar4));
            arg1 = uVar2 - iVar3 >> 4;
            if (arg1 < *arg2) {
                *arg2 = uVar2;
                return 0x8000000000000003;
            }
            *arg2 = *arg2 * 0x10 + iVar3;
        }
        return 0;
    }
    return 0x8000000000000002;
}


/* fcn.00016d18 @ 0x16d18 */

ulong fcn.00016d18(int64_t arg1,ulong noname_1,int64_t arg2)

{
    char cVar1;
    uint64_t uVar2;
    
    if (((arg1 != 0) && (arg2 != 0)) && (uVar2 = fcn.00016cf4(arg1), uVar2 < 0xf4241)) {
        for (; (*arg1 == ' ' || (*arg1 == '\t')); arg1 = arg1 + 1) {
        }
        for (; *arg1 == '0'; arg1 = arg1 + 1) {
        }
        *arg2 = 0;
        while( true ) {
            if (9 < *arg1 - 0x30U) {
                return 0;
            }
            cVar1 = *arg1;
            if (~(cVar1 + -0x30) / 10 < *arg2) break;
            arg1 = arg1 + 1;
            *arg2 = cVar1 + -0x30 + *arg2 * 10;
        }
        *arg2 = 0xffffffffffffffff;
        return 0x8000000000000003;
    }
    return 0x8000000000000002;
}


/* fcn.00011bcc @ 0x11bcc */

ulong fcn.00011bcc(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    
    pcVar3 = arg1 + 0x24;
    uVar4 = 0;
    do {
        *pcVar3 = '\x02';
        iVar6 = 0;
        pcVar2 = *(uVar4 + 0x1a0e0);
        pcVar3 = pcVar3 + 1;
        if (*pcVar2 != '\0') {
            do {
                iVar6 = iVar6 + 1;
            } while (pcVar2[iVar6] != '\0');
            if ((iVar6 != 0) && (pcVar3 != pcVar2)) {
                fcn.00011180(pcVar3,pcVar2,iVar6);
            }
        }
        iVar6 = 0;
        cVar1 = **(uVar4 + 0x1a0e0);
        while (cVar1 != '\0') {
            iVar6 = iVar6 + 1;
            cVar1 = (*(uVar4 + 0x1a0e0))[iVar6];
        }
        pcVar3 = pcVar3 + iVar6;
        *pcVar3 = '\x03';
        *(pcVar3 + 1) = *(uVar4 + 0x1a0f8);
        for (piVar5 = *(uVar4 + 0x1a0f0); *piVar5 != 0; piVar5 = piVar5 + 0xc) {
            pcVar3[5] = '\x02';
            iVar6 = 0;
            pcVar2 = *piVar5;
            pcVar3 = pcVar3 + 6;
            cVar1 = *pcVar2;
            while (cVar1 != '\0') {
                iVar6 = iVar6 + 1;
                cVar1 = pcVar2[iVar6];
            }
            if ((iVar6 != 0) && (pcVar3 != pcVar2)) {
                fcn.00011180(pcVar3,pcVar2,iVar6);
            }
            iVar6 = 0;
            cVar1 = **piVar5;
            while (cVar1 != '\0') {
                iVar6 = iVar6 + 1;
                cVar1 = (*piVar5)[iVar6];
            }
            pcVar3 = pcVar3 + iVar6;
            *pcVar3 = '\x03';
            *(pcVar3 + 1) = piVar5[1];
        }
        pcVar3[5] = '\n';
        uVar4 = uVar4 + 0x24;
        pcVar3 = pcVar3 + 6;
    } while (uVar4 < 0x33c);
    *(arg1 + 0x20) = (pcVar3 - arg1) + -0x24;
    *(arg1 + 0x14) = 0x17;
    return 0;
}


/* fcn.000115b4 @ 0x115b4 */

ulong fcn.000115b4(uint32_t arg1,uint32_t arg2)

{
    char cVar1;
    char *pcVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    uint in_register_00000014;
    int64_t iVar4;
    uchar *puVar5;
    char *arg1_00;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    pcVar2 = CONCAT44(in_register_00000014,arg2);
    if ((*0xfe4107a4 & 1) != 0) {
        if ((*(iVar3 + 0x20) == 0) || ((*(iVar3 + 0x14) & 2) == 0)) {
            puVar5 = iVar3 + 0x24;
        }
        else {
            iVar4 = *(iVar3 + 0x20) + iVar3;
            *(iVar4 + 0x24) = 10;
            puVar5 = iVar4 + 0x25;
        }
        *puVar5 = 2;
        iVar4 = 0;
        arg1_00 = puVar5 + 1;
        if (*CONCAT44(in_register_00000014,arg2) != '\0') {
            do {
                iVar4 = iVar4 + 1;
            } while (*(iVar4 + CONCAT44(in_register_00000014,arg2)) != '\0');
            if ((iVar4 != 0) && (arg1_00 != pcVar2)) {
                fcn.00011180(arg1_00,CONCAT44(in_register_00000014,arg2),iVar4);
            }
        }
        iVar4 = 0;
        cVar1 = *pcVar2;
        while (cVar1 != '\0') {
            iVar4 = iVar4 + 1;
            cVar1 = pcVar2[iVar4];
        }
        arg1_00[iVar4] = '\x03';
        *(iVar3 + 0x14) = *(iVar3 + 0x14) | 2;
        *(iVar3 + 0x20) = ((arg1_00 + iVar4) - arg1) + -0x23;
    }
    return 0;
}


/* fcn.00017058 @ 0x17058 */

ulong fcn.00017058(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    if (*0x1e110 != 0) {
        iVar3 = *(*0x1e110 + 0xa0);
        for (iVar2 = *(*0x1e110 + 0x98); iVar2 != 0; iVar2 = iVar2 + -1) {
            iVar1 = fcn.000176bc(iVar3);
            if (iVar1 == 0) {
                return *(iVar3 + 0x10);
            }
            iVar3 = iVar3 + 0x18;
        }
    }
    return 0;
}


/* fcn.00016eec @ 0x16eec */

ulong fcn.00016eec(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x1e118 == '\0') {
        if (*0x1e138 == 0) {
            if (*0x1e128 != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x1e108 + 0x140))(0x1ac30,0,0x1e138);
        }
    }
    else if (*0x1e120 == 0) {
        if ((*0x1e128 == '\0') && (*0x1e110 != 0)) {
    //WARNING: Could not recover jumptable at 0x00016f2b. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x1e110 + 0xd0))(0x1ac40,0,0x1e120);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.00016f74 @ 0x16f74 */

int64_t fcn.00016f74(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    if (*0x1e118 == '\0') {
        if (*0x1e150 == 0) {
            if (*0x1e128 == '\x01') {
                return -0x7ffffffffffffffd;
            }
            uVar2 = (**(*0x1e108 + 0x18))(0x1f);
            (**(*0x1e108 + 0x20))(uVar2);
            if (0x10 < uVar2) {
                return -0x7ffffffffffffffd;
            }
            iVar1 = (**(*0x1e108 + 0x140))(0x1a010,0,0x1e150);
            if (iVar1 < 0) {
                *0x1e150 = 0;
            }
            return iVar1;
        }
    }
    else if (*0x1e130 == 0) {
        if (*0x1e110 == 0) {
            return -0x7ffffffffffffffd;
        }
        iVar1 = (**(*0x1e110 + 0xd0))(0x1a030,0,0x1e130);
        if (iVar1 < 0) {
            *0x1e130 = 0;
        }
        return iVar1;
    }
    return 0;
}


/* fcn.00011d9c @ 0x11d9c */

uint64_t fcn.00011d9c(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint32_t *puVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint32_t var_20h;
    int64_t var_28h;
    int64_t var_20h_2;
    int64_t var_18h;
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    uVar5 = 0;
    var_bp_10h = 0;
    if (*0x1e158 == 0) {
        *0x1e108 = *(arg1 + 0x60);
        *0x1e140 = *(arg1 + 0x58);
        *0x1e158 = arg1;
    }
    uVar1 = uVar5;
    if ((((*0x1e148 != NULL) || (uVar1 = (**(*0x1e108 + 0x140))(0x1ac50,0,0x1e148), -1 < uVar1)) &&
        ((***0x1e148)(*0x1e148,&var_20h), var_20h != '\0')) &&
       (uVar1 = (*(*0x1e148)[1])(*0x1e148,0x1e110), -1 < uVar1)) {
        iVar2 = fcn.00017058();
        *0x1e118 = 1;
        if (iVar2 != 0) {
            *0x1e140 = iVar2;
        }
        *0x1e128 = 0;
        fcn.00016eec();
        uVar1 = fcn.00016f74();
        *0x1e128 = 1;
    }
    if (-1 < uVar1) {
        uVar1 = (**(*0x1e108 + 0x140))(0x1a020,0,0x1e0e8);
        if (uVar1 < 0) {
            *0x1e0e8 = 0;
        }
        else {
            uVar1 = (**(*0x1e108 + 0x140))(0x1a060,0,&var_20h_2);
            if ((-1 < uVar1) && (uVar1 = (**(*0x1e110 + 0xd0))(0x1a0a0,0,&var_18h), -1 < uVar1)) {
                var_28h = -1;
                uVar1 = (**var_18h)(var_18h,0x11cec,&var_28h,&var_bp_8h);
                if (-1 < uVar1) {
                    *var_20h_2 = var_28h;
                    puVar3 = 0x1a0f8;
                    *0x1e0e0 = *(var_20h_2 + 8);
                    do {
                        if (*puVar3 == -1) {
                            *puVar3 = 0;
                            *puVar3 = *puVar3 | uVar5 + 1U | 0x80000000;
                        }
                        uVar4 = uVar5 + 1;
                        uVar5 = uVar4;
                        puVar3 = puVar3 + 9;
                    } while (uVar4 < 0x17);
                    *0x1a0c0 = var_28h;
                    *0x1a0c8 = *(var_20h_2 + 8);
                    uVar1 = (**(*0x1e110 + 0xa8))(&var_bp_10h,0x1a000,0,0x1a0c0);
                }
            }
        }
    }
    return uVar1;
}


/* fcn.00016ec0 @ 0x16ec0 */

ulong fcn.00016ec0(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    uint in_register_0000000c;
    
    if (((arg2 & 0xffffffffU) != 0) && (CONCAT44(in_register_0000000c,arg1) != (arg3 | 0xfe410d00))) {
        fcn.00011180(CONCAT44(in_register_0000000c,arg1),arg3 | 0xfe410d00,arg2 & 0xffffffff);
    }
    return 0;
}


/* fcn.0001174c @ 0x1174c */

char * fcn.0001174c(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint32_t uVar2;
    char *pcVar3;
    uint64_t uVar4;
    int64_t iVar5;
    char *pcVar6;
    bool bVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    int iVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    char *pcStackX_8;
    
    uVar2 = *(arg1 + 0x20);
    uVar12 = 0;
    pcStackX_8 = NULL;
    if (uVar2 == 0) {
        return NULL;
    }
    pcVar6 = arg1 + 0x24;
    uVar9 = uVar12;
    uVar4 = uVar12;
    while( true ) {
        uVar8 = uVar9;
        iVar10 = uVar4;
        bVar7 = false;
        if (*pcVar6 == '\x02') {
            pcVar6 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar3 = pcVar6;
            uVar9 = uVar12;
            while (uVar11 = uVar9, cVar1 != '\x03') {
                pcVar3 = pcVar3 + 1;
                uVar9 = uVar11 + 1;
                cVar1 = *pcVar3;
            }
            cVar1 = *arg2;
            uVar4 = uVar12;
            while (cVar1 != '\0') {
                uVar4 = uVar4 + 1;
                cVar1 = *(uVar4 + arg2);
            }
            bVar7 = false;
            if (uVar4 == uVar9) {
                iVar5 = fcn.00016cbc(pcVar6,arg2,uVar11);
                bVar7 = false;
                if (iVar5 == 0) {
                    bVar7 = true;
                }
            }
            pcVar6 = pcVar6 + (uVar11 + 1);
            uVar11 = iVar10 + 2 + uVar11;
            uVar4 = uVar11;
            uVar9 = uVar8;
            if (uVar8 != 0) {
                uVar9 = uVar12;
            }
            if (*pcVar6 == '\x02') {
                uVar4 = uVar12;
                pcVar3 = pcVar6;
                while( true ) {
                    pcVar3 = pcVar3 + 1;
                    iVar10 = uVar4;
                    if (*pcVar3 == '\x03') break;
                    uVar4 = iVar10 + 1;
                }
                if (bVar7) {
                    uVar2 = iVar10 + 1;
                    iVar5 = (**(*0x1e110 + 0x50))(6,uVar2,&pcStackX_8);
                    if (iVar5 < 0) {
                        return NULL;
                    }
                    if (uVar2 != 0) {
                        fcn.000111c0(pcStackX_8,uVar2);
                    }
                    if (iVar10 != 0) {
                        if (pcStackX_8 != pcVar6 + 1) {
                            fcn.00011180(pcStackX_8,pcVar6 + 1,uVar4);
                            return pcStackX_8;
                        }
                        return pcStackX_8;
                    }
                    return pcStackX_8;
                }
                pcVar6 = pcVar6 + (iVar10 + 2);
                uVar4 = uVar11 + 2 + iVar10;
                if (uVar9 != 0) {
                    uVar9 = uVar12;
                }
            }
        }
        if (*pcVar6 == '\n') {
            if (bVar7) {
                return NULL;
            }
            pcVar6 = pcVar6 + 1;
            uVar4 = uVar4 + 1;
            uVar9 = uVar9 + 1;
        }
        if (uVar9 == 3) break;
        if (uVar2 <= uVar4) {
            return NULL;
        }
    }
    return NULL;
}


/* fcn.000119bc @ 0x119bc */

ulong fcn.000119bc(uint32_t arg1)

{
    uint8_t uVar1;
    bool bVar2;
    uint in_register_0000000c;
    uint8_t *puVar3;
    bool bVar4;
    bool bVar5;
    
    puVar3 = CONCAT44(in_register_0000000c,arg1);
    if (puVar3 != NULL) {
        if (*puVar3 == 0x2d) {
            puVar3 = puVar3 + 1;
        }
        if (puVar3 != NULL) {
            do {
                if (*puVar3 != 0x30) break;
                puVar3 = puVar3 + 1;
            } while (puVar3 != NULL);
            if ((puVar3 == NULL) || ((*puVar3 + 0xa8 & 0xdf) != 0)) {
                bVar2 = false;
            }
            else {
                if (puVar3[-1] != 0x30) {
                    return 0;
                }
                puVar3 = puVar3 + 1;
                bVar2 = true;
            }
            do {
                if ((puVar3 == NULL) || (uVar1 = *puVar3, (uVar1 & 0xdf) == 0)) {
                    return 1;
                }
                if (bVar2) {
                    if ((9 < uVar1 - 0x30) && (5 < uVar1 + 0xbf)) {
                        bVar4 = uVar1 + 0x9f < 5;
                        bVar5 = uVar1 + 0x9f == 5;
                        goto code_r0x00011a29;
                    }
                }
                else {
                    bVar4 = uVar1 - 0x30 < 9;
                    bVar5 = uVar1 - 0x30 == 9;
code_r0x00011a29:
                    if (!bVar4 && !bVar5) {
                        return 0;
                    }
                }
                puVar3 = puVar3 + 1;
            } while( true );
        }
    }
    return 0;
}


/* fcn.00011a38 @ 0x11a38 */

ulong fcn.00011a38(int64_t arg1)

{
    char *pcVar1;
    char cVar2;
    unkbyte7 in_RDX;
    ulong auStackX_8 [4];
    
    cVar2 = *arg1;
    pcVar1 = arg1;
    while ((cVar2 != '\0' && (cVar2 == ' '))) {
        pcVar1 = pcVar1 + 1;
        cVar2 = *pcVar1;
    }
    for (; (*pcVar1 != '\0' && (*pcVar1 == '0')); pcVar1 = pcVar1 + 1) {
    }
    if ((*pcVar1 + 0xa8U & 0xdf) == 0) {
        fcn.00016dbc(arg1,CONCAT71(in_RDX,cVar2),auStackX_8);
    }
    else {
        fcn.00016d18(arg1,CONCAT71(in_RDX,cVar2),auStackX_8);
    }
    return auStackX_8[0];
}


/* fcn.00011a8c @ 0x11a8c */

void fcn.00011a8c(int64_t arg1)

{
    if (*(arg1 + 0x20) != 0) {
        fcn.000111c0(arg1 + 0x24,*(arg1 + 0x20));
    }
    *(arg1 + 0x20) = 0;
    return;
}


/* fcn.00016e8c @ 0x16e8c */

ulong fcn.00016e8c(uint32_t *arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *arg1_00;
    
    arg1_00 = arg3 & 0xffffffffU | 0xfe410d00;
    if (((arg2 & 0xffffffffU) != 0) && (arg1_00 != arg1)) {
        fcn.00011180(arg1_00,arg1,arg2 & 0xffffffffU);
    }
    return 0;
}


/* fcn.0001769c @ 0x1769c */

void fcn.0001769c(int64_t noname_0,ulong noname_1,int64_t arg1,uint32_t arg2)

{
    uint in_R9;
    ulong uStackX_20;
    
    uStackX_20 = CONCAT44(in_R9,arg2);
    fcn.000172b4(noname_0,noname_1,arg1,&uStackX_20);
    return;
}


/* fcn.000172b4 @ 0x172b4 */

//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_9h

int64_t fcn.000172b4(int64_t arg1,uint32_t arg2,int64_t arg3,uint32_t *arg4)

{
    uint8_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    char *arg4_00;
    uint8_t *puVar4;
    uint64_t uVar5;
    uint in_register_00000014;
    uint8_t *puVar6;
    uint8_t uVar7;
    uint32_t arg3_00;
    uint8_t *puVar8;
    int64_t noname_1;
    uint8_t *noname_0;
    uint32_t *puStackX_18;
    int64_t var_77h;
    uint8_t *puStack_68;
    uint8_t *puStack_60;
    uint8_t auStack_58 [32];
    int64_t var_9h;
    int64_t var_1h;
    
    noname_1 = CONCAT44(in_register_00000014,arg2);
    if ((arg1 == 0) || (arg3 == 0)) {
        arg1 = -1;
    }
    else {
        noname_0 = arg1;
        if (noname_1 != 1) {
            puStackX_18 = arg4 + -2;
            arg4_00 = arg4;
            while (uVar7 = *arg3, uVar7 != 0) {
                puVar8 = arg3 + 1;
                if (uVar7 == 0x25) {
                    if (*puVar8 == 0x25) {
                        puVar8 = arg3 + 2;
                        *noname_0 = 0x25;
                        goto code_r0x00017320;
                    }
                    uVar7 = 0x20;
                    if (*puVar8 == 0x30) {
                        uVar7 = 0x30;
                        puVar8 = arg3 + 2;
                    }
                    if (*puVar8 == 0x2a) {
                        puStackX_18 = puStackX_18 + 2;
                        uVar2 = *puStackX_18;
                        puVar8 = puVar8 + 1;
                    }
                    else {
                        uVar2 = fcn.00017118(puVar8,&puStack_68);
                        puVar8 = puStack_68;
                    }
                    if ((*puVar8 == 0x73) || (*puVar8 == 0x61)) {
                        for (puVar6 = *(puStackX_18 + 2); *puVar6 != 0; puVar6 = puVar6 + 1) {
                            noname_1 = noname_1 + -1;
                            if (noname_1 == 0) goto code_r0x00017664;
                            *noname_0 = *puVar6;
                            noname_0 = noname_0 + 1;
                        }
code_r0x00017653:
                        puStackX_18 = puStackX_18 + 2;
                        puVar8 = puVar8 + 1;
                    }
                    else {
                        if (*puVar8 == 0x53) {
                            for (puVar6 = *(puStackX_18 + 2); *puVar6 != 0; puVar6 = puVar6 + 2) {
                                noname_1 = noname_1 + -1;
                                if (noname_1 == 0) goto code_r0x00017664;
                                *noname_0 = *puVar6;
                                noname_0 = noname_0 + 1;
                            }
                            goto code_r0x00017653;
                        }
                        if (*puVar8 == 99) {
                            *noname_0 = puStackX_18[2];
                            noname_0 = noname_0 + 1;
                            goto code_r0x00017653;
                        }
                        if ((*puVar8 & 0xdf) == 0x47) {
                            arg4_00 = **(puStackX_18 + 2);
                            puStack_60 = noname_0;
                            iVar3 = fcn.0001769c(noname_0,noname_1,0x1dbb8,**(puStackX_18 + 2));
                            noname_0 = noname_0 + iVar3;
                            if (*puVar8 == 0x47) {
                                for (puVar6 = puStack_60; *puVar6 != 0; puVar6 = puVar6 + 1) {
                                    if (*puVar6 + 0x9f < 0x1a) {
                                        *puVar6 = *puVar6 - 0x20;
                                    }
                                }
                            }
                            noname_1 = noname_1 - iVar3;
                            goto code_r0x00017653;
                        }
                        if (*puVar8 == 0x72) {
                            arg4_00 = fcn.000171ec(*(puStackX_18 + 2));
                            if (arg4_00 == NULL) {
                                arg4_00 = "Status Code";
                                iVar3 = fcn.0001769c(noname_0,noname_1,0x1dbec,0x1ada0);
                            }
                            else {
                                iVar3 = fcn.0001769c(noname_0,noname_1,0x1dbf4,arg4_00);
                            }
                            noname_0 = noname_0 + iVar3;
                            noname_1 = noname_1 - iVar3;
                            goto code_r0x00017653;
                        }
                        uVar1 = *puVar8;
                        if (uVar1 == 0x6c) {
                            puVar8 = puVar8 + 1;
                        }
                        if ((*puVar8 == 100) || (*puVar8 == 0x69)) {
                            arg3_00 = 10;
code_r0x0001754b:
                            puVar6 = auStack_58;
                            if (*puVar8 != 0x70 && uVar1 != 0x6c) {
                                arg4_00 = NULL;
                                puVar4 = fcn.000170a4(puStackX_18[2],auStack_58,arg3_00,0);
                                if (auStack_58 < puVar4) {
                                    do {
                                        uVar1 = *puVar6;
                                        *puVar6 = *puVar4;
                                        puVar6 = puVar6 + 1;
                                        *puVar4 = uVar1;
                                        puVar4 = puVar4 + -1;
                                    } while (puVar6 < puVar4);
                                }
                            }
                            else {
                                arg4_00 = CONCAT71(arg4_00 >> 8,1);
                                puVar4 = fcn.000170a4(*(puStackX_18 + 2),auStack_58,arg3_00,arg4_00);
                                if (auStack_58 < puVar4) {
                                    do {
                                        uVar1 = *puVar6;
                                        *puVar6 = *puVar4;
                                        puVar6 = puVar6 + 1;
                                        *puVar4 = uVar1;
                                        puVar4 = puVar4 + -1;
                                    } while (puVar6 < puVar4);
                                }
                            }
                            if ((*puVar8 == 0x58) || (*puVar8 == 0x70)) {
                                puVar6 = auStack_58;
                                uVar1 = auStack_58[0];
                                while (uVar1 != 0) {
                                    if (*puVar6 + 0x9f < 0x1a) {
                                        *puVar6 = *puVar6 - 0x20;
                                    }
                                    puVar6 = puVar6 + 1;
                                    uVar1 = *puVar6;
                                }
                            }
                            uVar5 = 0;
                            uVar1 = auStack_58[0];
                            while (uVar1 != 0) {
                                uVar1 = auStack_58[uVar5 + 1];
                                uVar5 = uVar5 + 1;
                            }
                            while (uVar5 < uVar2) {
                                uVar5 = uVar5 + 1;
                                noname_1 = noname_1 + -1;
                                if (noname_1 == 0) goto code_r0x00017664;
                                *noname_0 = uVar7;
                                noname_0 = noname_0 + 1;
                            }
                            puVar6 = auStack_58;
                            uVar7 = auStack_58[0];
                            while (uVar7 != 0) {
                                noname_1 = noname_1 + -1;
                                if (noname_1 == 0) goto code_r0x00017664;
                                uVar7 = *puVar6;
                                puVar6 = puVar6 + 1;
                                *noname_0 = uVar7;
                                noname_0 = noname_0 + 1;
                                uVar7 = *puVar6;
                            }
                            goto code_r0x00017653;
                        }
                        if (((*puVar8 & 0xdf) == 0x58) || (*puVar8 == 0x70)) {
                            arg3_00 = 0x10;
                            goto code_r0x0001754b;
                        }
                    }
                }
                else {
                    *noname_0 = uVar7;
code_r0x00017320:
                    noname_0 = noname_0 + 1;
                    noname_1 = noname_1 + -1;
                }
                if (noname_1 == 1) break;
                arg3 = puVar8;
            }
        }
        *noname_0 = 0;
        arg1 = noname_0 - arg1;
    }
code_r0x00017680:
    return arg1;
code_r0x00017664:
    *noname_0 = 0;
    arg1 = noname_0 - arg1;
    goto code_r0x00017680;
}


/* fcn.00011654 @ 0x11654 */

uint64_t fcn.00011654(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint32_t uVar2;
    uint64_t in_RAX;
    char *pcVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint32_t arg3;
    uint64_t uVar6;
    uint64_t uVar7;
    char *pcVar8;
    uint32_t uVar9;
    int iVar10;
    uint32_t uVar11;
    
    uVar2 = *(arg1 + 0x20);
    uVar7 = 0;
    if (uVar2 != 0) {
        pcVar8 = arg1 + 0x24;
        uVar6 = uVar7;
        uVar4 = uVar7;
        do {
            uVar9 = uVar6;
            iVar10 = uVar4;
            if (*pcVar8 == '\x02') {
                pcVar8 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar3 = pcVar8;
                uVar6 = uVar7;
                while (arg3 = uVar6, cVar1 != '\x03') {
                    pcVar3 = pcVar3 + 1;
                    uVar6 = arg3 + 1;
                    cVar1 = *pcVar3;
                }
                cVar1 = *arg2;
                uVar4 = uVar7;
                while (cVar1 != '\0') {
                    uVar4 = uVar4 + 1;
                    cVar1 = *(uVar4 + arg2);
                }
                if ((uVar4 == uVar6) && (iVar5 = fcn.00016cbc(pcVar8,arg2,arg3), iVar5 == 0)) {
                    return 1;
                }
                in_RAX = arg3 + 1;
                uVar11 = iVar10 + 2 + arg3;
                uVar4 = uVar11;
                pcVar8 = pcVar8 + (arg3 + 1);
                uVar6 = uVar9;
                if (uVar9 != 0) {
                    uVar6 = uVar7;
                }
                if (*pcVar8 == '\x02') {
                    uVar4 = uVar7;
                    pcVar3 = pcVar8;
                    while( true ) {
                        pcVar3 = pcVar3 + 1;
                        iVar10 = uVar4;
                        if (*pcVar3 == '\x03') break;
                        uVar4 = iVar10 + 1;
                    }
                    in_RAX = iVar10 + 2U;
                    uVar4 = uVar11 + 2 + iVar10;
                    pcVar8 = pcVar8 + (iVar10 + 2U);
                    if (uVar6 != 0) {
                        uVar6 = uVar7;
                    }
                }
            }
            if (*pcVar8 == '\n') {
                pcVar8 = pcVar8 + 1;
                uVar4 = uVar4 + 1;
                uVar6 = uVar6 + 1;
            }
        } while ((uVar6 != 3) && (uVar4 < uVar2));
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.000120c8 @ 0x120c8 */

//WARNING: Variable defined which should be unmapped: var_28h

void fcn.000120c8(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t arg1_00;
    uint32_t arg1_01;
    uint32_t arg2_00;
    int iVar2;
    uint32_t auStackX_10 [2];
    ushort uStackX_18;
    int8_t var_28h;
    int16_t var_30h;
    
    auStackX_10[0]._0_1_ = 0;
    uStackX_18 = 0;
    fcn.00016ec0(auStackX_10,1,0);
    uStackX_18._0_1_ = *0xfe410765;
    uStackX_18._1_1_ = *0xfe410766;
    iVar2 = arg2;
    if (iVar2 == 0) {
        auStackX_10[0]._0_1_ = 0;
        fcn.00016e8c(auStackX_10,1,0);
        fcn.00016e8c(auStackX_10,1,0x45);
code_r0x00012359:
        fcn.00016e8c(auStackX_10,1,0);
        *0xfe410765 = uStackX_18;
        *0xfe410766 = uStackX_18._1_1_;
        *0xfe410dff = 0x78;
    }
    else {
        arg1_01 = arg1;
        if (iVar2 == 1) {
            arg1_00 = fcn.0001174c(arg1,0x1b6cc);
            cVar1 = fcn.000119bc(arg1_00);
            if (cVar1 != '\0') {
                cVar1 = fcn.00011a38(arg1_00);
                if (cVar1 == '\x01') {
                    auStackX_10[0]._0_1_ = auStackX_10[0] | 8;
                }
                else {
                    if (cVar1 != '\0') {
                        (**(*0x1e110 + 0x58))(arg1_00);
                        fcn.00011a8c(arg1);
                        arg2_00 = 0x1b810;
                        goto code_r0x0001228a;
                    }
                    auStackX_10[0]._0_1_ = auStackX_10[0] & 0xf7;
                }
                uStackX_18._0_1_ = uStackX_18 | 0x40;
code_r0x00012241:
                (**(*0x1e110 + 0x58))(arg1_00);
                goto code_r0x00012359;
            }
            (**(*0x1e110 + 0x58))();
            fcn.00011a8c(arg1);
            fcn.000115b4(arg1_01,0x1b7a8);
            fcn.000115b4(arg1_01,0x1b7c8);
            arg2_00 = 0x1b7e8;
        }
        else if (iVar2 == 2) {
            arg1_00 = fcn.0001174c(arg1,0x1b6d0);
            cVar1 = fcn.000119bc(arg1_00);
            if (cVar1 != '\0') {
                cVar1 = fcn.00011a38(arg1_00);
                if (cVar1 == '\x01') {
                    auStackX_10[0]._0_1_ = auStackX_10[0] | 1;
                }
                else {
                    if (cVar1 != '\0') {
                        (**(*0x1e110 + 0x58))(arg1_00);
                        fcn.00011a8c(arg1);
                        arg2_00 = 0x1b770;
                        goto code_r0x0001228a;
                    }
                    auStackX_10[0]._0_1_ = auStackX_10[0] & 0xfe;
                }
                goto code_r0x00012241;
            }
            (**(*0x1e110 + 0x58))();
            fcn.00011a8c(arg1);
            fcn.000115b4(arg1_01,0x1b700);
            fcn.000115b4(arg1_01,0x1b720);
            arg2_00 = 0x1b748;
        }
        else {
            if (iVar2 != 3) goto code_r0x00012359;
            arg1_00 = fcn.0001174c(arg1,0x1b6d8);
            cVar1 = fcn.000119bc(arg1_00);
            if (cVar1 != '\0') {
                cVar1 = fcn.00011a38(arg1_00);
                if (cVar1 == '\x01') {
                    auStackX_10[0]._0_1_ = auStackX_10[0] | 4;
                    uStackX_18._1_1_ = uStackX_18._1_1_ | 0x10;
                }
                else {
                    if (cVar1 != '\0') {
                        (**(*0x1e110 + 0x58))(arg1_00);
                        fcn.00011a8c(arg1);
                        arg2_00 = 0x1b910;
                        goto code_r0x0001228a;
                    }
                    auStackX_10[0]._0_1_ = auStackX_10[0] & 0xfb;
                    uStackX_18._1_1_ = uStackX_18._1_1_ & 0xef;
                }
                goto code_r0x00012241;
            }
            (**(*0x1e110 + 0x58))();
            fcn.00011a8c(arg1);
            fcn.000115b4(arg1_01,0x1b848);
            fcn.000115b4(arg1_01,0x1b870);
            arg2_00 = 0x1b8c0;
        }
code_r0x0001228a:
        fcn.000115b4(arg1_01,arg2_00);
    }
    return;
}


/* fcn.000123a0 @ 0x123a0 */

void fcn.000123a0(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint32_t uVar2;
    int64_t arg1_00;
    uint32_t arg1_01;
    uint32_t auStackX_10 [2];
    uint32_t auStackX_18 [2];
    uint32_t auStackX_20 [2];
    int64_t var_6fh;
    int64_t var_77h;
    int64_t var_7fh;
    uchar auStack_a8 [87];
    int64_t var_49h;
    
    fcn.00016ec0(auStackX_20,1,1);
    fcn.00016ec0(auStackX_18,1,2);
    fcn.00016ec0(auStackX_10,1,3);
    arg1_01 = arg1;
    if (arg2 == 0) {
        auStackX_20[0]._0_1_ = 0;
        auStackX_18[0]._0_1_ = 0;
        auStackX_10[0]._0_1_ = 0;
        fcn.00016e8c(auStackX_20,1,1);
        fcn.00016e8c(auStackX_18,1,2);
        fcn.00016e8c(auStackX_10,1,3);
        *0xfe41076c = auStackX_20[0];
        *0xfe41076d = auStackX_18[0];
        *0xfe41076e = auStackX_10[0];
        *0xfe410dff = 0x78;
    }
    else if (arg2 == 1) {
        arg1_00 = fcn.0001174c(arg1,0x1b6f0);
        cVar1 = fcn.000119bc(arg1_00);
        if (cVar1 == '\0') {
            (**(*0x1e110 + 0x58))();
            fcn.00011a8c(arg1);
            fcn.000115b4(arg1_01,0x1b968);
            uVar2 = 0x1b980;
        }
        else {
            uVar2 = fcn.00011a38(arg1_00);
            auStackX_20[0]._0_1_ = uVar2 / 10000;
            auStackX_18[0]._0_1_ = (uVar2 + (uVar2 / 10000) * -10000) / 100;
            auStackX_10[0]._0_1_ = uVar2 + (uVar2 / 100) * -100;
            if (((auStackX_20[0] < 0x33) && (auStackX_18[0] < 0x33)) && (auStackX_10[0] < 0x33)) {
                fcn.00016e8c(auStackX_20,1,1);
                fcn.00016e8c(auStackX_18,1,2);
                fcn.00016e8c(auStackX_10,1,3);
                *0xfe41076c = auStackX_20[0];
                *0xfe41076d = auStackX_18[0];
                *0xfe41076e = auStackX_10[0];
                *0xfe410dff = 0x78;
                (**(*0x1e110 + 0x58))(arg1_00);
                goto code_r0x000125c5;
            }
            (**(*0x1e110 + 0x58))(arg1_00);
            fcn.00011a8c(arg1);
            uVar2 = 0x1ba20;
        }
        fcn.000115b4(arg1_01,uVar2);
        fcn.000115b4(arg1_01,0x1b9b0);
        uVar2 = 0x1b9e8;
        goto code_r0x000125fb;
    }
code_r0x000125c5:
    fcn.0001769c(auStack_a8,0x80,0x1ba68,auStackX_20[0]);
    fcn.00011a8c(arg1);
    uVar2 = auStack_a8;
code_r0x000125fb:
    fcn.000115b4(arg1_01,uVar2);
    return;
}


/* fcn.0001261c @ 0x1261c */

void fcn.0001261c(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    int64_t arg1_00;
    uint32_t arg1_01;
    uint32_t uVar3;
    uint in_register_00000014;
    uint32_t auStackX_10 [2];
    
    arg1_01 = arg1;
    if (arg2 == 0) {
        arg1_00 = fcn.0001174c(arg1,0x1b6f0);
        cVar1 = fcn.000119bc(arg1_00);
        if (cVar1 == '\0') {
            (**(*0x1e110 + 0x58))();
            fcn.00011a8c(arg1);
            fcn.000115b4(arg1_01,0x1ba98);
            fcn.000115b4(arg1_01,0x1bab8);
            uVar3 = 0x1bae0;
        }
        else {
            uVar2 = fcn.00011a38(arg1_00);
            (**(*0x1e110 + 0x58))(arg1_00);
            fcn.00011a8c(arg1);
            if (uVar2 < 2) {
                fcn.00016ec0(auStackX_10,1,0x45);
                if (uVar2 == 0) {
                    auStackX_10[0]._0_1_ = auStackX_10[0] & 0xef;
                    uVar3 = 0x1bae0;
                }
                else {
                    auStackX_10[0]._0_1_ = auStackX_10[0] | 0x10;
                    uVar3 = 0x1bab8;
                }
                fcn.000115b4(arg1_01,uVar3);
                fcn.00016e8c(auStackX_10,1,0x45);
                *0xfe410dff = 0x78;
                return;
            }
            uVar3 = 0x1bb08;
        }
    }
    else {
        if (arg2 != 1) {
            return;
        }
        fcn.00016ec0(auStackX_10,CONCAT44(in_register_00000014,arg2),0x45);
        if ((auStackX_10[0] & 0x10) == 0) {
            uVar3 = 0x1bb68;
        }
        else {
            uVar3 = 0x1bb40;
        }
    }
    fcn.000115b4(arg1_01,uVar3);
    return;
}


/* fcn.000129d8 @ 0x129d8 */

void fcn.000129d8(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    int64_t arg1_00;
    uint32_t arg1_01;
    uint32_t uVar2;
    uint in_register_00000014;
    uint32_t auStackX_10 [6];
    
    arg1_01 = arg1;
    if (arg2 == 0) {
        arg1_00 = fcn.0001174c(arg1,0x1b6f0);
        cVar1 = fcn.000119bc(arg1_00);
        if (cVar1 != '\0') {
            auStackX_10[0]._0_1_ = fcn.00011a38(arg1_00);
            (**(*0x1e110 + 0x58))(arg1_00);
            fcn.00011a8c(arg1);
            if (auStackX_10[0] == '\x01') {
                uVar2 = 0x1beb8;
            }
            else {
                if (auStackX_10[0] != '\0') {
                    uVar2 = 0x1bb08;
                    goto code_r0x00012ae5;
                }
                uVar2 = 0x1bee0;
            }
            fcn.000115b4(arg1_01,uVar2);
            fcn.00016e8c(auStackX_10,1,0x4a);
            *0xfe410dff = 0x78;
            return;
        }
        (**(*0x1e110 + 0x58))();
        fcn.00011a8c(arg1);
        fcn.000115b4(arg1_01,0x1be90);
        fcn.000115b4(arg1_01,0x1beb8);
        uVar2 = 0x1bee0;
    }
    else {
        if (arg2 != 1) {
            return;
        }
        fcn.00016ec0(auStackX_10,CONCAT44(in_register_00000014,arg2),0x4a);
        if (auStackX_10[0] == '\x01') {
            uVar2 = 0x1bf08;
        }
        else {
            uVar2 = 0x1bf30;
        }
    }
code_r0x00012ae5:
    fcn.000115b4(arg1_01,uVar2);
    return;
}


/* fcn.00012af8 @ 0x12af8 */

void fcn.00012af8(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    int64_t arg1_00;
    uint32_t arg2_00;
    uint in_register_00000014;
    uint32_t auStackX_10 [6];
    uchar auStack_88 [128];
    
    if (arg2 == 0) {
        arg1_00 = fcn.0001174c(arg1,0x1b6f0);
        cVar1 = fcn.000119bc(arg1_00);
        if (cVar1 == '\0') {
            (**(*0x1e110 + 0x58))();
            fcn.00011a8c(arg1);
            fcn.000115b4(arg1,0x1bf58);
            arg2_00 = 0x1bf80;
        }
        else {
            auStackX_10[0]._0_1_ = fcn.00011a38(arg1_00);
            (**(*0x1e110 + 0x58))(arg1_00);
            fcn.00011a8c(arg1);
            if (auStackX_10[0] < 0xfb) {
                fcn.00016e8c(auStackX_10,1,0x4b);
                *0xfe410dff = 0x78;
                fcn.0001769c(auStack_88,0x80,0x1bfa0,auStackX_10[0]);
                arg2_00 = auStack_88;
            }
            else {
                arg2_00 = 0x1bfd0;
            }
        }
    }
    else {
        if (arg2 != 1) {
            return;
        }
        fcn.00016ec0(auStackX_10,CONCAT44(in_register_00000014,arg2),0x4b);
        fcn.0001769c(auStack_88,0x80,0x1c018,auStackX_10[0]);
        if (auStackX_10[0] < 0xfb) {
            arg2_00 = auStack_88;
        }
        else {
            arg2_00 = 0x1c040;
        }
    }
    fcn.000115b4(arg1,arg2_00);
    return;
}


/* fcn.00012c40 @ 0x12c40 */

void fcn.00012c40(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    char *pcVar2;
    uint32_t uVar3;
    bool bVar4;
    uint16_t auStackX_10 [4];
    uchar auStack_88 [128];
    
    if (arg2 == 0) {
        pcVar2 = fcn.0001174c(arg1,0x1b6f0);
        bVar4 = *pcVar2 == '-';
        if (bVar4) {
            pcVar2 = pcVar2 + 1;
        }
        cVar1 = fcn.000119bc(pcVar2);
        if (cVar1 == '\0') {
            (**(*0x1e110 + 0x58))();
            fcn.00011a8c(arg1);
            fcn.000115b4(arg1,0x1c078);
            uVar3 = 0x1c0a0;
            goto code_r0x00012d93;
        }
        auStackX_10[0] = fcn.00011a38(pcVar2);
        (**(*0x1e110 + 0x58))(pcVar2);
        fcn.00011a8c(arg1);
        if (bVar4) {
            auStackX_10[0] = auStackX_10[0] | 0x8000;
        }
        fcn.00016e8c(auStackX_10,2,0x4c);
        pcVar2 = "Set dGPU VRAM Frequency Offset: -%d";
        uVar3 = auStackX_10[0] & 0x7fff;
        *0xfe410dff = 0x78;
        if (!bVar4) {
            pcVar2 = "Set dGPU VRAM Frequency Offset: %d";
        }
    }
    else {
        if (arg2 != 1) {
            return;
        }
        fcn.00016ec0(auStackX_10,2,0x4c);
        if ((auStackX_10[0] & 0x8000) == 0) {
            pcVar2 = "Current dGPU VRAM Frequency Offset: %d";
        }
        else {
            pcVar2 = "Current dGPU VRAM Frequency Offset: -%d";
            auStackX_10[0] = auStackX_10[0] & 0x7fff;
        }
        uVar3 = auStackX_10[0];
    }
    fcn.0001769c(auStack_88,0x80,pcVar2,uVar3);
    uVar3 = auStack_88;
code_r0x00012d93:
    fcn.000115b4(arg1,uVar3);
    return;
}


/* fcn.00012db4 @ 0x12db4 */

void fcn.00012db4(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    int64_t arg1_00;
    uint32_t arg1_01;
    uint32_t uVar3;
    uint in_register_00000014;
    uint32_t auStackX_10 [2];
    
    arg1_01 = arg1;
    if (arg2 == 0) {
        arg1_00 = fcn.0001174c(arg1,0x1b6f0);
        cVar1 = fcn.000119bc(arg1_00);
        if (cVar1 == '\0') {
            (**(*0x1e110 + 0x58))();
            fcn.00011a8c(arg1);
            fcn.000115b4(arg1_01,0x1c160);
            fcn.000115b4(arg1_01,0x1c180);
            uVar3 = 0x1c1a8;
        }
        else {
            uVar2 = fcn.00011a38(arg1_00);
            (**(*0x1e110 + 0x58))(arg1_00);
            fcn.00011a8c(arg1);
            if (uVar2 < 2) {
                fcn.00016ec0(auStackX_10,1,0x45);
                if (uVar2 == 0) {
                    auStackX_10[0]._0_1_ = auStackX_10[0] & 0xfb;
                    uVar3 = 0x1c1a8;
                }
                else {
                    auStackX_10[0]._0_1_ = auStackX_10[0] | 4;
                    uVar3 = 0x1c180;
                }
                fcn.000115b4(arg1_01,uVar3);
                fcn.00016e8c(auStackX_10,1,0x45);
                *0xfe410dff = 0x78;
                return;
            }
            uVar3 = 0x1bb08;
        }
    }
    else {
        if (arg2 != 1) {
            return;
        }
        fcn.00016ec0(auStackX_10,CONCAT44(in_register_00000014,arg2),0x45);
        if ((auStackX_10[0] & 4) == 0) {
            uVar3 = 0x1c1e8;
        }
        else {
            uVar3 = 0x1c1c8;
        }
    }
    fcn.000115b4(arg1_01,uVar3);
    return;
}


/* fcn.000132fc @ 0x132fc */

void fcn.000132fc(int64_t arg1)

{
    uint32_t arg1_00;
    int64_t iVar1;
    uint32_t *puVar2;
    uchar auStack_108 [256];
    
    fcn.00011a8c(arg1);
    arg1_00 = arg1;
    fcn.000115b4(arg1_00,0x1c298);
    fcn.000115b4(arg1_00,0x1c2c8);
    fcn.000115b4(arg1_00,0x1c2f8);
    puVar2 = 0x1a5e8;
    iVar1 = 4;
    do {
        fcn.0001769c(auStack_108,0x100,0x1c328,*puVar2);
        fcn.000115b4(arg1_00,auStack_108);
        puVar2 = puVar2 + 3;
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
}


/* fcn.000133a0 @ 0x133a0 */

void fcn.000133a0(int64_t arg1)

{
    uint8_t uVar1;
    uint32_t arg2;
    uint64_t uVar2;
    uint8_t auStackX_8 [32];
    uchar auStack_108 [256];
    
    fcn.00011a8c(arg1);
    *(arg1 + 0x14) = 2;
    fcn.00016ec0(auStackX_8,1,0x43);
    if (auStackX_8[0] == 0xff) {
        arg2 = 0x1c340;
    }
    else {
        if (auStackX_8[0] < 0x25) {
            uVar2 = 0;
            do {
                if (auStackX_8[0] == *(uVar2 * 0xc + 0x1a5e8)) {
                    fcn.0001769c(auStack_108,0x100,0x1c380,*(uVar2 * 0xc + 0x1a5e0));
                    arg2 = auStack_108;
                    goto code_r0x00013439;
                }
                uVar1 = uVar2 + 1;
                uVar2 = uVar1;
            } while (uVar1 < 0x25);
        }
        arg2 = 0x1c360;
    }
code_r0x00013439:
    fcn.000115b4(arg1,arg2);
    return;
}


/* fcn.0001344c @ 0x1344c */

void fcn.0001344c(int64_t arg1)

{
    uint8_t uVar1;
    char cVar2;
    int64_t iVar3;
    uint32_t arg1_00;
    uint32_t arg2;
    uint32_t *puVar4;
    uint8_t uVar5;
    int64_t iVar6;
    uint8_t auStackX_10 [8];
    uint auStackX_18 [2];
    ulong uStackX_20;
    int8_t var_148h;
    int32_t var_150h;
    int64_t var_158h;
    ulong *apuStack_208 [2];
    uchar auStack_1f8 [47];
    uchar uStack_1c9;
    uchar auStack_138 [256];
    
    iVar3 = fcn.0001174c(arg1,0x1c26c);
    cVar2 = fcn.000119bc(iVar3);
    iVar6 = 4;
    arg2 = auStack_138;
    arg1_00 = arg1;
    if (cVar2 == '\x01') {
        auStackX_10[0] = fcn.00011a38(iVar3);
        (**(*0x1e110 + 0x58))(iVar3);
        uVar5 = 0;
        do {
            if (auStackX_10[0] == *(uVar5 * 0xc + 0x1a5e8)) {
                fcn.00016e8c(auStackX_10,1,0x43);
                uVar1 = auStackX_10[0];
                uStackX_20 = 0xb4;
                auStackX_18[0] = 7;
                iVar3 = (**(*0x1e100 + 0xd0))(0x1a040,0,apuStack_208);
                if ((-1 < iVar3) &&
                   (iVar3 = (**apuStack_208[0])(L"UniWillVariable",0x1a0b0,auStackX_18,&uStackX_20,auStack_1f8),
                   -1 < iVar3)) {
                    uStack_1c9 = 0;
                    if ((uVar1 != 0x21) && ((uVar1 == 0x22 || ((uStack_1c9 = 0, uVar1 != 0x23 && (uVar1 == 0x24)))))) {
                        uStack_1c9 = 1;
                    }
                    (*apuStack_208[0][2])(L"UniWillVariable",0x1a0b0,auStackX_18[0],uStackX_20,auStack_1f8);
                }
                *0xfe410dff = 0x78;
                fcn.0001769c(auStack_138,0x100,0x1c3a0,*(uVar5 * 0xc + 0x1a5e0));
                fcn.00011a8c(arg1);
                fcn.000115b4(arg1_00,arg2);
                return;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 4);
    }
    fcn.00011a8c(arg1);
    *(arg1 + 0x18) = 0x8000000000000002;
    fcn.000115b4(arg1_00,0x1c3b8);
    puVar4 = 0x1a5e8;
    do {
        fcn.0001769c(auStack_138,0x100,0x1c328,*puVar4);
        fcn.000115b4(arg1_00,arg2);
        puVar4 = puVar4 + 3;
        iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    (**(*0x1e110 + 0x58))(iVar3);
    return;
}


/* fcn.000136f0 @ 0x136f0 */

void fcn.000136f0(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    int64_t arg1_00;
    uint32_t arg1_01;
    uint32_t arg2_00;
    uint8_t auStackX_10 [8];
    uchar auStack_88 [128];
    
    uVar2 = *0xfe41073c;
    arg1_01 = arg1;
    if (arg2 == 0) {
        if ((*0xfe41073c & 0xf9) == 1) {
            arg1_00 = fcn.0001174c(arg1,0x1c400);
            cVar1 = fcn.000119bc(arg1_00);
            if (cVar1 == '\0') {
                (**(*0x1e110 + 0x58))();
                fcn.00011a8c(arg1);
                fcn.000115b4(arg1_01,0x1c4b0);
                arg2_00 = 0x1c4d0;
            }
            else {
                uVar2 = fcn.00011a38(arg1_00);
                fcn.00011a8c(arg1);
                if (uVar2 - 1 < 3) {
                    fcn.00016ec0(auStackX_10,1,0);
                    if (uVar2 == 1) {
                        auStackX_10[0] = auStackX_10[0] & 0xfe | 0x10;
                    }
                    else if (uVar2 == 2) {
                        auStackX_10[0] = auStackX_10[0] & 0xef | 1;
                    }
                    else {
                        auStackX_10[0] = auStackX_10[0] & 0xee;
                    }
                    fcn.00016e8c(auStackX_10,1,0);
                    fcn.00011a8c(arg1);
                    fcn.0001769c(auStack_88,0x80,0x1c444,uVar2);
                    fcn.000115b4(arg1_01,auStack_88);
                    *0xfe410dff = 0x78;
                    (**(*0x1e110 + 0x58))(arg1_00);
                    return;
                }
                (**(*0x1e110 + 0x58))(arg1_00);
                fcn.00011a8c(arg1);
                fcn.000115b4(arg1_01,0x1c450);
                arg2_00 = 0x1c490;
            }
        }
        else {
            fcn.00011a8c(arg1);
            arg2_00 = 0x1c410;
        }
    }
    else {
        if (arg2 != 1) {
            return;
        }
        fcn.00011a8c(arg1);
        fcn.0001769c(auStack_88,0x80,0x1c508,uVar2);
        fcn.000115b4(arg1_01,auStack_88);
        fcn.0001769c(auStack_88,0x80,0x1c528,*0xfe41073d);
        arg2_00 = auStack_88;
    }
    fcn.000115b4(arg1_01,arg2_00);
    return;
}


/* fcn.000138dc @ 0x138dc */

ulong fcn.000138dc(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    uint32_t arg1_00;
    int64_t iVar3;
    uchar *puVar4;
    char *arg1_01;
    int64_t arg3;
    
    *(arg1 + 0x14) = 2;
    fcn.00011a8c(arg1);
    arg1_00 = arg1;
    fcn.000115b4(arg1_00,0x1c548);
    fcn.000115b4(arg1_00,0x1c570);
    fcn.000115b4(arg1_00,0x1c5a0);
    if ((*0xfe4107a4 & 1) != 0) {
        if ((*(arg1 + 0x20) == 0) || ((*(arg1 + 0x14) & 2) == 0)) {
            puVar4 = arg1 + 0x24;
        }
        else {
            iVar3 = *(arg1 + 0x20) + arg1;
            *(iVar3 + 0x24) = 10;
            puVar4 = iVar3 + 0x25;
        }
        *puVar4 = 2;
        arg1_01 = puVar4 + 1;
        iVar3 = 0;
        if (str._Your_setting_will_be_applied_after_restart._[0] != '\0') {
            do {
                arg3 = iVar3 + 1;
                iVar2 = iVar3 + 1;
                iVar3 = arg3;
            } while ("(Your setting will be applied after restart.)"[iVar2] != '\0');
            if ((arg3 != 0) && (arg1_01 != "(Your setting will be applied after restart.)")) {
                fcn.00011180(arg1_01,0x1c5e0,arg3);
            }
        }
        iVar3 = 0;
        cVar1 = str._Your_setting_will_be_applied_after_restart._[0];
        while (cVar1 != '\0') {
            cVar1 = "(Your setting will be applied after restart.)"[iVar3 + 1];
            iVar3 = iVar3 + 1;
        }
        arg1_01[iVar3] = '\x03';
        *(arg1 + 0x14) = *(arg1 + 0x14) | 2;
        *(arg1 + 0x20) = ((arg1_01 + iVar3) - arg1_00) + -0x23;
    }
    return 0;
}


/* fcn.00019ba0 @ 0x19ba0 */

int64_t fcn.00019ba0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.000139a4 @ 0x139a4 */

void fcn.000139a4(int64_t arg1)

{
    uint32_t arg1_00;
    uint8_t *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint8_t auStack_a8 [16];
    uchar auStack_98 [128];
    
    iVar3 = 8;
    puVar1 = auStack_a8;
    iVar2 = 8;
    do {
        fcn.00016ec0(puVar1,1,4);
        puVar1 = puVar1 + 1;
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    fcn.0001769c(auStack_98,0x80,0x1c610,auStack_a8[0]);
    arg1_00 = arg1;
    fcn.000115b4(arg1_00,auStack_98);
    puVar1 = auStack_a8;
    iVar2 = 8;
    do {
        fcn.00016ec0(puVar1,1,0xc);
        puVar1 = puVar1 + 1;
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    fcn.0001769c(auStack_98,0x80,0x1c638,auStack_a8[0]);
    fcn.000115b4(arg1_00,auStack_98);
    puVar1 = auStack_a8;
    do {
        fcn.00016ec0(puVar1,1,0x14);
        puVar1 = puVar1 + 1;
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    fcn.0001769c(auStack_98,0x80,0x1c610,auStack_a8[0]);
    fcn.000115b4(arg1_00,auStack_98);
    return;
}


/* fcn.00013b78 @ 0x13b78 */

void fcn.00013b78(int64_t arg1,uint32_t arg2)

{
    bool bVar1;
    char cVar2;
    uint32_t uVar3;
    char *pcVar4;
    uint32_t arg1_00;
    uchar *arg1_01;
    char *arg1_02;
    uint8_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint8_t uVar8;
    uint8_t auStackX_10 [8];
    uint auStackX_18 [2];
    uint8_t auStackX_20 [8];
    int8_t var_6fh;
    int32_t var_77h;
    int8_t var_7fh;
    ulong uStack_108;
    ulong *puStack_100;
    uchar auStack_f8 [15];
    uchar auStack_e9 [8];
    uchar auStack_e1 [169];
    
    bVar1 = false;
    if (arg2 == 0) goto code_r0x00013d8a;
    if (arg2 != 1) {
        return;
    }
    pcVar4 = fcn.0001174c(arg1,0x1c3f0);
    uVar8 = 0;
    uVar5 = auStackX_10[0];
    do {
        arg1_02 = pcVar4;
        pcVar4 = arg1_02;
        if (*arg1_02 != '\0') {
            do {
                if (*pcVar4 == ' ') goto code_r0x00013bde;
                pcVar4 = pcVar4 + 1;
            } while (*pcVar4 != '\0');
            if (*pcVar4 == ' ') {
code_r0x00013bde:
                *pcVar4 = '\0';
                pcVar4 = pcVar4 + 1;
            }
        }
        cVar2 = fcn.000119bc(arg1_02);
        arg1_00 = arg1;
        if (cVar2 == '\0') {
            (**(*0x1e110 + 0x58))();
            fcn.00011a8c(arg1);
            fcn.000115b4(arg1_00,0x1c668);
            fcn.000115b4(arg1_00,0x1c688);
            uVar3 = 0x1c6a8;
code_r0x00013de1:
            fcn.000115b4(arg1_00,uVar3);
            return;
        }
        uVar3 = fcn.00011a38(arg1_02);
        auStackX_10[0] = uVar3;
        if (uVar8 == 0) {
            if ((0x1a < auStackX_10[0]) || ((0x4100100U >> (uVar3 & 0x1f) & 1) == 0)) {
                (**(*0x1e110 + 0x58))(arg1_02);
                fcn.00011a8c(arg1);
                fcn.000115b4(arg1_00,0x1c668);
                fcn.000115b4(arg1_00,0x1c688);
                uVar3 = 0x1c6e8;
                goto code_r0x00013de1;
            }
            uVar5 = auStackX_10[0];
        }
        uVar6 = uVar8;
        auStackX_20[uVar6] = auStackX_10[0];
        if (uVar5 == 8) {
            iVar7 = uVar6 + 4;
code_r0x00013c5e:
            fcn.00016e8c(auStackX_10,1,iVar7);
        }
        else if (uVar5 == 0x14) {
            fcn.00016e8c(auStackX_10,1,uVar6 + 0xc);
            bVar1 = true;
        }
        else if (uVar5 == 0x1a) {
            iVar7 = uVar6 + 0x14;
            goto code_r0x00013c5e;
        }
        uVar8 = uVar8 + 1;
    } while (uVar8 < 8);
    uStack_108 = 0xb4;
    auStackX_18[0] = 7;
    iVar7 = (**(*0x1e100 + 0xd0))(0x1a040,0,&puStack_100);
    if (-1 < iVar7) {
        iVar7 = (**puStack_100)(L"UniWillVariable",0x1a0b0,auStackX_18,&uStack_108,auStack_f8);
        if (uVar5 == 0x1a) {
            if (-1 < iVar7) {
                arg1_01 = auStack_e9;
code_r0x00013d34:
                fcn.00019ba0(arg1_01,auStackX_20,8);
            }
        }
        else if ((uVar5 == 8) && (-1 < iVar7)) {
            arg1_01 = auStack_e1;
            goto code_r0x00013d34;
        }
        (*puStack_100[2])(L"UniWillVariable",0x1a0b0,auStackX_18[0],uStack_108,auStack_f8);
    }
    if (bVar1) {
        *0xfe410dff = 0x78;
    }
    (**(*0x1e110 + 0x58))(arg1_02);
code_r0x00013d8a:
    fcn.000139a4(arg1);
    return;
}


/* fcn.00013dec @ 0x13dec */

ulong fcn.00013dec(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    uint32_t arg1_00;
    int64_t iVar3;
    uchar *puVar4;
    char *arg1_01;
    int64_t arg3;
    
    *(arg1 + 0x14) = 2;
    fcn.00011a8c(arg1);
    arg1_00 = arg1;
    fcn.000115b4(arg1_00,0x1c728);
    fcn.000115b4(arg1_00,0x1c760);
    fcn.000115b4(arg1_00,0x1c7a0);
    if ((*0xfe4107a4 & 1) != 0) {
        if ((*(arg1 + 0x20) == 0) || ((*(arg1 + 0x14) & 2) == 0)) {
            puVar4 = arg1 + 0x24;
        }
        else {
            iVar3 = *(arg1 + 0x20) + arg1;
            *(iVar3 + 0x24) = 10;
            puVar4 = iVar3 + 0x25;
        }
        *puVar4 = 2;
        arg1_01 = puVar4 + 1;
        iVar3 = 0;
        if (str._Your_setting_will_be_applied_after_restart._[0] != '\0') {
            do {
                arg3 = iVar3 + 1;
                iVar2 = iVar3 + 1;
                iVar3 = arg3;
            } while ("(Your setting will be applied after restart.)"[iVar2] != '\0');
            if ((arg3 != 0) && (arg1_01 != "(Your setting will be applied after restart.)")) {
                fcn.00011180(arg1_01,0x1c5e0,arg3);
            }
        }
        iVar3 = 0;
        cVar1 = str._Your_setting_will_be_applied_after_restart._[0];
        while (cVar1 != '\0') {
            cVar1 = "(Your setting will be applied after restart.)"[iVar3 + 1];
            iVar3 = iVar3 + 1;
        }
        arg1_01[iVar3] = '\x03';
        *(arg1 + 0x14) = *(arg1 + 0x14) | 2;
        *(arg1 + 0x20) = ((arg1_01 + iVar3) - arg1_00) + -0x23;
    }
    return 0;
}


/* fcn.00013eb8 @ 0x13eb8 */

void fcn.00013eb8(int64_t arg1)

{
    uint32_t arg1_00;
    int64_t iVar1;
    uint32_t *puVar2;
    uchar auStack_108 [256];
    
    fcn.00011a8c(arg1);
    arg1_00 = arg1;
    fcn.000115b4(arg1_00,0x1c810);
    fcn.000115b4(arg1_00,0x1c840);
    fcn.000115b4(arg1_00,0x1c870);
    puVar2 = 0x1a838;
    iVar1 = 9;
    do {
        fcn.0001769c(auStack_108,0x100,0x1c8a0,*puVar2);
        fcn.000115b4(arg1_00,auStack_108);
        puVar2 = puVar2 + 3;
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
}


/* fcn.00013f5c @ 0x13f5c */

void fcn.00013f5c(int64_t arg1)

{
    uint32_t arg2;
    uint8_t uVar1;
    uint8_t auStackX_10 [24];
    uchar auStack_108 [256];
    
    uVar1 = 0;
    auStackX_10[0] = 0;
    fcn.00016ec0(auStackX_10,1,0x42);
    do {
        if (auStackX_10[0] == *(uVar1 * 0xc + 0x1a838)) {
            fcn.0001769c(auStack_108,0x100,0x1c8b0,*(uVar1 * 0xc + 0x1a830));
            fcn.00011a8c(arg1);
            arg2 = auStack_108;
            goto code_r0x00013ff6;
        }
        uVar1 = uVar1 + 1;
    } while (uVar1 < 9);
    *(arg1 + 0x18) = 0x8000000000000002;
    fcn.00011a8c(arg1);
    arg2 = 0x1c8d0;
code_r0x00013ff6:
    fcn.000115b4(arg1,arg2);
    return;
}


/* fcn.00014010 @ 0x14010 */

void fcn.00014010(int64_t arg1)

{
    char cVar1;
    int64_t arg1_00;
    uint32_t arg1_01;
    uint8_t uVar2;
    uint64_t uVar3;
    uint32_t *puVar4;
    int64_t iVar5;
    uint8_t auStackX_10 [8];
    uchar auStack_118 [256];
    
    arg1_00 = fcn.0001174c(arg1,0x1b6f0);
    cVar1 = fcn.000119bc(arg1_00);
    iVar5 = 9;
    arg1_01 = arg1;
    if (cVar1 == '\x01') {
        auStackX_10[0] = fcn.00011a38(arg1_00);
        (**(*0x1e110 + 0x58))(arg1_00);
        uVar3 = 0;
        do {
            if (auStackX_10[0] == *(uVar3 * 0xc + 0x1a838)) {
                fcn.00016e8c(auStackX_10,1,0x42);
                fcn.0001769c(auStack_118,0x100,0x1c8f0,*(uVar3 * 0xc + 0x1a830));
                fcn.00011a8c(arg1);
                fcn.000115b4(arg1_01,auStack_118);
                *0xfe410dff = 0x78;
                return;
            }
            uVar2 = uVar3 + 1;
            uVar3 = uVar2;
        } while (uVar2 < 9);
    }
    fcn.00011a8c(arg1);
    *(arg1 + 0x18) = 0x8000000000000002;
    fcn.000115b4(arg1_01,0x1c3b8);
    puVar4 = 0x1a838;
    do {
        fcn.0001769c(auStack_118,0x100,0x1c8a0,*puVar4);
        fcn.000115b4(arg1_01,auStack_118);
        puVar4 = puVar4 + 3;
        iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    (**(*0x1e110 + 0x58))(arg1_00);
    return;
}


/* fcn.000141f8 @ 0x141f8 */

void fcn.000141f8(int64_t arg1)

{
    uint32_t arg1_00;
    int64_t iVar1;
    uint32_t *puVar2;
    uchar auStack_108 [256];
    
    fcn.00011a8c(arg1);
    arg1_00 = arg1;
    fcn.000115b4(arg1_00,0x1c920);
    fcn.000115b4(arg1_00,0x1c958);
    fcn.000115b4(arg1_00,0x1c988);
    puVar2 = 0x1a8d8;
    iVar1 = 2;
    do {
        fcn.0001769c(auStack_108,0x100,0x1c8a0,*puVar2);
        fcn.000115b4(arg1_00,auStack_108);
        puVar2 = puVar2 + 3;
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
}


/* fcn.0001429c @ 0x1429c */

void fcn.0001429c(int64_t arg1)

{
    uint32_t arg2;
    uint8_t uVar1;
    uint8_t auStackX_10 [24];
    uchar auStack_108 [256];
    
    uVar1 = 0;
    auStackX_10[0] = 0;
    fcn.00016ec0(auStackX_10,1,0x45);
    if (auStackX_10[0] != 0xff) {
        do {
            if ((auStackX_10[0] >> 3 & 1) == *(uVar1 * 0xc + 0x1a8d8)) {
                fcn.0001769c(auStack_108,0x100,0x1c9b0,*(uVar1 * 0xc + 0x1a8d0));
                fcn.00011a8c(arg1);
                arg2 = auStack_108;
                goto code_r0x00014341;
            }
            uVar1 = uVar1 + 1;
        } while (uVar1 < 2);
        *(arg1 + 0x18) = 0x8000000000000002;
        fcn.00011a8c(arg1);
        arg2 = 0x1c9d0;
code_r0x00014341:
        fcn.000115b4(arg1,arg2);
    }
    return;
}


/* fcn.0001435c @ 0x1435c */

void fcn.0001435c(int64_t arg1)

{
    char cVar1;
    uint8_t uVar2;
    int64_t arg1_00;
    uint32_t arg1_01;
    int64_t iVar3;
    uint8_t uVar4;
    uint64_t uVar5;
    uint32_t *puVar6;
    uint32_t auStackX_10 [2];
    uchar auStack_118 [256];
    
    arg1_00 = fcn.0001174c(arg1,0x1b6f0);
    cVar1 = fcn.000119bc(arg1_00);
    iVar3 = 2;
    arg1_01 = arg1;
    if (cVar1 == '\x01') {
        uVar2 = fcn.00011a38(arg1_00);
        (**(*0x1e110 + 0x58))(arg1_00);
        uVar5 = 0;
        do {
            if (uVar2 == *(uVar5 * 0xc + 0x1a8d8)) {
                fcn.00016ec0(auStackX_10,1,0x45);
                if (uVar2 == 0) {
                    auStackX_10[0]._0_1_ = auStackX_10[0] & 0xf7;
                }
                else {
                    auStackX_10[0]._0_1_ = auStackX_10[0] | 8;
                }
                fcn.00016e8c(auStackX_10,1,0x45);
                fcn.0001769c(auStack_118,0x100,0x1c9f0,*(uVar5 * 0xc + 0x1a8d0));
                fcn.00011a8c(arg1);
                fcn.000115b4(arg1_01,auStack_118);
                *0xfe410dff = 0x78;
                return;
            }
            uVar4 = uVar5 + 1;
            uVar5 = uVar4;
        } while (uVar4 < 2);
    }
    fcn.00011a8c(arg1);
    *(arg1 + 0x18) = 0x8000000000000002;
    fcn.000115b4(arg1_01,0x1c3b8);
    puVar6 = 0x1a8d8;
    do {
        fcn.0001769c(auStack_118,0x100,0x1c8a0,*puVar6);
        fcn.000115b4(arg1_01,auStack_118);
        puVar6 = puVar6 + 3;
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    (**(*0x1e110 + 0x58))(arg1_00);
    return;
}


/* fcn.00014578 @ 0x14578 */

void fcn.00014578(int64_t arg1)

{
    uint32_t arg1_00;
    uint8_t *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint8_t auStack_a8 [16];
    uchar auStack_98 [128];
    
    iVar2 = 8;
    puVar1 = auStack_a8;
    iVar3 = 8;
    do {
        fcn.00016ec0(puVar1,1,(0x39 - auStack_a8) + puVar1);
        puVar1 = puVar1 + 1;
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    fcn.0001769c(auStack_98,0x80,0x1ca28,auStack_a8[0]);
    arg1_00 = arg1;
    fcn.000115b4(arg1_00,auStack_98);
    iVar3 = 8;
    puVar1 = auStack_a8;
    do {
        fcn.00016ec0(puVar1,1,(0x31 - auStack_a8) + puVar1);
        puVar1 = puVar1 + 1;
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    fcn.0001769c(auStack_98,0x80,0x1ca58,auStack_a8[0]);
    fcn.000115b4(arg1_00,auStack_98);
    puVar1 = auStack_a8;
    do {
        fcn.00016ec0(puVar1,1,(0x29 - auStack_a8) + puVar1);
        puVar1 = puVar1 + 1;
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    fcn.0001769c(auStack_98,0x80,0x1ca88,auStack_a8[0]);
    fcn.000115b4(arg1_00,auStack_98);
    return;
}


/* fcn.00014774 @ 0x14774 */

void fcn.00014774(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    char *pcVar4;
    int64_t iVar5;
    uint32_t arg1_00;
    char *arg1_01;
    uint64_t uVar6;
    uint8_t uVar7;
    uint auStackX_10 [2];
    uint32_t auStackX_18 [2];
    ulong uStackX_20;
    int8_t var_6fh;
    int8_t var_77h;
    int8_t var_7fh;
    ulong *apuStack_108 [2];
    uchar auStack_f8 [31];
    uchar auStack_d9 [8];
    uchar auStack_d1 [79];
    int64_t var_7ah;
    int64_t var_72h;
    
    if (arg2 == 0) {
        fcn.00014578(arg1);
        return;
    }
    if (arg2 != 1) {
        return;
    }
    pcVar4 = fcn.0001174c(arg1,0x1ca18);
    uVar6 = 0;
    uVar7 = auStackX_10[0];
    do {
        arg1_01 = pcVar4;
        pcVar4 = arg1_01;
        if (*arg1_01 != '\0') {
            do {
                if (*pcVar4 == ' ') goto code_r0x000147d1;
                pcVar4 = pcVar4 + 1;
            } while (*pcVar4 != '\0');
            if (*pcVar4 == ' ') {
code_r0x000147d1:
                *pcVar4 = '\0';
                pcVar4 = pcVar4 + 1;
            }
        }
        cVar1 = fcn.000119bc(arg1_01);
        arg1_00 = arg1;
        if (cVar1 == '\0') {
code_r0x000148c4:
            (**(*0x1e110 + 0x58))(arg1_01);
            fcn.00011a8c(arg1);
            fcn.000115b4(arg1_00,0x1cab8);
            fcn.000115b4(arg1_00,0x1caf0);
            fcn.000115b4(arg1_00,0x1cb40);
            uVar3 = 0x1cb90;
            goto code_r0x0001490a;
        }
        uVar3 = fcn.00011a38(arg1_01);
        uVar2 = uVar3;
        if (uVar6 == 0) {
            if ((0x1a < uVar2) || ((0x4100100U >> (uVar3 & 0x1f) & 1) == 0)) goto code_r0x000148c4;
            uVar7 = uVar2;
        }
        *(auStackX_18 + uVar6) = uVar2;
        if (uVar7 == 8) {
            *(&uStackX_20 + uVar6) = uVar2;
        }
        else if (uVar7 == 0x14) {
            *(&uStackX_20 + uVar6) = uVar2;
        }
        else if (uVar7 == 0x1a) {
            *(&uStackX_20 + uVar6) = uVar2;
        }
        uVar6 = uVar6 + 1;
    } while (uVar6 < 8);
    uStackX_20 = 0xb4;
    auStackX_10[0] = 7;
    iVar5 = (**(*0x1e100 + 0xd0))(0x1a040,0,apuStack_108);
    if (iVar5 < 0) goto code_r0x00014968;
    iVar5 = (**apuStack_108[0])(L"UniWillVariable",0x1a0b0,auStackX_10,&uStackX_20,auStack_f8);
    if (uVar7 == 0x1a) {
        if (-1 < iVar5) {
            fcn.00019ba0(auStack_d9,auStackX_18,8);
        }
        iVar5 = 0x39;
code_r0x00014934:
        fcn.00016e8c(auStackX_18,8,iVar5);
    }
    else if (uVar7 == 8) {
        if (-1 < iVar5) {
            fcn.00019ba0(auStack_d1,auStackX_18,8);
        }
        iVar5 = 0x29;
        goto code_r0x00014934;
    }
    (*apuStack_108[0][2])(L"UniWillVariable",0x1a0b0,auStackX_10[0],uStackX_20,auStack_f8);
code_r0x00014968:
    (**(*0x1e110 + 0x58))(arg1_01);
    uVar3 = 0x1c5e0;
    *0xfe410dff = 0x78;
code_r0x0001490a:
    fcn.000115b4(arg1_00,uVar3);
    return;
}


/* fcn.000149a0 @ 0x149a0 */

ulong fcn.000149a0(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    uint32_t arg1_00;
    int64_t iVar3;
    uchar *puVar4;
    char *arg1_01;
    int64_t arg3;
    
    *(arg1 + 0x14) = 2;
    fcn.00011a8c(arg1);
    arg1_00 = arg1;
    fcn.000115b4(arg1_00,0x1cbd8);
    fcn.000115b4(arg1_00,0x1cc20);
    fcn.000115b4(arg1_00,0x1cc68);
    fcn.000115b4(arg1_00,0x1cab8);
    fcn.000115b4(arg1_00,0x1caf0);
    fcn.000115b4(arg1_00,0x1cb40);
    fcn.000115b4(arg1_00,0x1cb90);
    if ((*0xfe4107a4 & 1) != 0) {
        if ((*(arg1 + 0x20) == 0) || ((*(arg1 + 0x14) & 2) == 0)) {
            puVar4 = arg1 + 0x24;
        }
        else {
            iVar3 = *(arg1 + 0x20) + arg1;
            *(iVar3 + 0x24) = 10;
            puVar4 = iVar3 + 0x25;
        }
        *puVar4 = 2;
        arg1_01 = puVar4 + 1;
        iVar3 = 0;
        if (str._Your_setting_will_be_applied_after_restart._[0] != '\0') {
            do {
                arg3 = iVar3 + 1;
                iVar2 = iVar3 + 1;
                iVar3 = arg3;
            } while ("(Your setting will be applied after restart.)"[iVar2] != '\0');
            if ((arg3 != 0) && (arg1_01 != "(Your setting will be applied after restart.)")) {
                fcn.00011180(arg1_01,0x1c5e0,arg3);
            }
        }
        iVar3 = 0;
        cVar1 = str._Your_setting_will_be_applied_after_restart._[0];
        while (cVar1 != '\0') {
            cVar1 = "(Your setting will be applied after restart.)"[iVar3 + 1];
            iVar3 = iVar3 + 1;
        }
        arg1_01[iVar3] = '\x03';
        *(arg1 + 0x14) = *(arg1 + 0x14) | 2;
        *(arg1 + 0x20) = ((arg1_01 + iVar3) - arg1_00) + -0x23;
    }
    return 0;
}


/* fcn.00013140 @ 0x13140 */

ulong fcn.00013140(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar *arg2_00;
    ulong uVar1;
    int64_t iVar2;
    uint64_t arg3_00;
    uchar *arg1_00;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t arg3_01;
    uchar auStack_1018 [4096];
    
    uVar6 = arg2 & 0xffffffff;
    uVar4 = arg3 & 0xfff;
    uVar3 = 0;
    if (*0x1e0e8 == NULL) {
        uVar1 = 0x8000000000000001;
    }
    else if (uVar6 + arg3 < 0xe0001) {
        (*(*0x1e0e8)[4])();
        if (arg2 != 0) {
            iVar5 = (arg3 - uVar4) + 0xff172000;
            do {
                iVar2 = (***0x1e0e8)(iVar5,0x1000,auStack_1018);
                if (iVar2 < 0) {
                    return 0x8000000000000007;
                }
                uVar7 = uVar4 & 0xfff;
                arg2_00 = uVar3 + arg1;
                arg3_00 = 0x1000 - uVar7;
                arg1_00 = auStack_1018 + uVar7;
                arg3_01 = uVar6 - uVar3;
                if (arg3_01 < arg3_00) {
                    if ((arg3_01 != 0) && (arg1_00 != arg2_00)) {
                        fcn.00011180(arg1_00,arg2_00,arg3_01);
                    }
                    uVar3 = uVar6;
                }
                else {
                    if ((arg3_00 != 0) && (arg1_00 != arg2_00)) {
                        fcn.00011180(arg1_00,arg2_00,arg3_00);
                    }
                    uVar3 = uVar3 + (0x1000 - uVar7);
                }
                iVar2 = (*(*0x1e0e8)[1])(iVar5,0x1000);
                if (iVar2 < 0) {
                    return 0x8000000000000007;
                }
                iVar2 = (*(*0x1e0e8)[2])(iVar5,0x1000,auStack_1018);
                if (iVar2 < 0) {
                    return 0x8000000000000007;
                }
                iVar5 = iVar5 + 0x1000;
                uVar4 = uVar4 + uVar3;
            } while (uVar6 != uVar3);
        }
        (*(*0x1e0e8)[5])();
        uVar1 = 0;
    }
    else {
        uVar1 = 0x8000000000000004;
    }
    return uVar1;
}


/* fcn.000118b4 @ 0x118b4 */

char * fcn.000118b4(int64_t arg1,int64_t arg2)

{
    uint64_t uVar2;
    uint64_t uVar1;
    char *pcVar3;
    int64_t iVar4;
    uint32_t arg3;
    char *arg2_00;
    uint64_t uVar5;
    uint64_t uVar6;
    int iVar7;
    uint64_t uVar8;
    char *pcStackX_8;
    
    uVar6 = *(arg1 + 0x20);
    arg2_00 = arg1 + 0x24;
    uVar5 = 0;
    pcStackX_8 = NULL;
    uVar2 = uVar5;
    uVar8 = uVar5;
    if (*(arg1 + 0x20) != 0) {
        do {
            iVar7 = uVar2;
            uVar8 = uVar8 + 1;
            if (*arg2_00 != '\n') {
                uVar8 = uVar5;
            }
            if (uVar8 == 3) {
                arg2_00 = arg2_00 + 1;
                iVar7 = iVar7 + 1;
                uVar2 = uVar5;
                do {
                    uVar1 = uVar2 + 1;
                    pcVar3 = uVar2 + 0x1b699;
                    uVar2 = uVar1;
                } while (*pcVar3 != '\0');
                arg3 = 0;
                if (arg2_00[-5 - uVar1] == '\x02') {
                    uVar2 = uVar5;
                    for (pcVar3 = arg2_00 + (-4 - uVar1); arg3 = uVar2, *pcVar3 != '\x03'; pcVar3 = pcVar3 + 1) {
                        uVar2 = arg3 + 1;
                    }
                }
                iVar4 = fcn.00016cbc(arg2_00 + (-4 - uVar1),0x1b698,arg3);
                if (iVar4 == 0) {
                    iVar7 = uVar6 - iVar7;
                    *arg2 = iVar7;
                    if (iVar7 == 0) {
                        return NULL;
                    }
                    iVar4 = (**(*0x1e110 + 0x50))(6,iVar7,&pcStackX_8);
                    if (iVar4 < 0) {
                        return NULL;
                    }
                    if (*arg2 != 0) {
                        fcn.000111c0(pcStackX_8,*arg2);
                    }
                    if (*arg2 != 0) {
                        if (pcStackX_8 != arg2_00) {
                            fcn.00011180(pcStackX_8,arg2_00,*arg2);
                            return pcStackX_8;
                        }
                        return pcStackX_8;
                    }
                    return pcStackX_8;
                }
            }
            arg2_00 = arg2_00 + 1;
            uVar2 = iVar7 + 1U;
        } while (iVar7 + 1U < uVar6);
    }
    return NULL;
}


/* fcn.00014aa8 @ 0x14aa8 */

ulong fcn.00014aa8(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    uint32_t arg1_00;
    int64_t iVar3;
    uchar *puVar4;
    char *arg1_01;
    int64_t arg3;
    
    *(arg1 + 0x14) = 2;
    fcn.00011a8c(arg1);
    arg1_00 = arg1;
    fcn.000115b4(arg1_00,0x1ccb8);
    fcn.000115b4(arg1_00,0x1ccc0);
    fcn.000115b4(arg1_00,0x1ccf0);
    if ((*0xfe4107a4 & 1) != 0) {
        if ((*(arg1 + 0x20) == 0) || ((*(arg1 + 0x14) & 2) == 0)) {
            puVar4 = arg1 + 0x24;
        }
        else {
            iVar3 = *(arg1 + 0x20) + arg1;
            *(iVar3 + 0x24) = 10;
            puVar4 = iVar3 + 0x25;
        }
        *puVar4 = 2;
        arg1_01 = puVar4 + 1;
        iVar3 = 0;
        if (str.RomLogo__Clean_:_Clean_RomLogo_area.[0] != '\0') {
            do {
                arg3 = iVar3 + 1;
                iVar2 = iVar3 + 1;
                iVar3 = arg3;
            } while ("RomLogo /Clean : Clean RomLogo area."[iVar2] != '\0');
            if ((arg3 != 0) && (arg1_01 != "RomLogo /Clean : Clean RomLogo area.")) {
                fcn.00011180(arg1_01,0x1cd30,arg3);
            }
        }
        iVar3 = 0;
        cVar1 = str.RomLogo__Clean_:_Clean_RomLogo_area.[0];
        while (cVar1 != '\0') {
            cVar1 = "RomLogo /Clean : Clean RomLogo area."[iVar3 + 1];
            iVar3 = iVar3 + 1;
        }
        arg1_01[iVar3] = '\x03';
        *(arg1 + 0x14) = *(arg1 + 0x14) | 2;
        *(arg1 + 0x20) = ((arg1_01 + iVar3) - arg1_00) + -0x23;
    }
    return 0;
}


/* fcn.00014dd0 @ 0x14dd0 */

void fcn.00014dd0(int64_t arg1)

{
    int64_t iVar1;
    uint auStackX_10 [2];
    ulong uStackX_18;
    ulong *puStackX_20;
    int32_t var_6fh;
    int64_t var_77h;
    int64_t var_7fh;
    uchar auStack_c8 [13];
    uchar uStack_bb;
    int64_t var_69h;
    int8_t var_5ch;
    
    uStackX_18 = 0xb4;
    auStackX_10[0] = 7;
    iVar1 = (**(*0x1e100 + 0xd0))(0x1a040,0,&puStackX_20);
    if (-1 < iVar1) {
        iVar1 = (**puStackX_20)(L"UniWillVariable",0x1a0b0,auStackX_10,&uStackX_18,auStack_c8);
        if (-1 < iVar1) {
            uStack_bb = arg1;
            (*puStackX_20[2])(L"UniWillVariable",0x1a0b0,auStackX_10[0],uStackX_18,auStack_c8);
        }
    }
    return;
}


/* fcn.00014ec0 @ 0x14ec0 */

void fcn.00014ec0(int64_t arg1)

{
    char cVar1;
    uint8_t uVar2;
    int64_t arg1_00;
    uint32_t arg1_01;
    uint32_t arg2;
    uint32_t auStackX_10 [2];
    uchar auStack_108 [256];
    
    arg1_00 = fcn.0001174c(arg1,0x1b6f0);
    cVar1 = fcn.000119bc(arg1_00);
    arg1_01 = arg1;
    if (cVar1 == '\0') {
        (**(*0x1e110 + 0x58))();
        fcn.00011a8c(arg1);
        fcn.000115b4(arg1_01,0x1ce28);
        fcn.000115b4(arg1_01,0x1ce70);
        arg2 = 0x1ceb8;
    }
    else {
        uVar2 = fcn.00011a38(arg1_00);
        if (uVar2 < 2) {
            (**(*0x1e110 + 0x58))(arg1_00);
            fcn.00016ec0(auStackX_10,1,0x45);
            if (uVar2 == 0) {
                auStackX_10[0]._0_1_ = auStackX_10[0] & 0xfd;
            }
            else {
                auStackX_10[0]._0_1_ = auStackX_10[0] | 2;
            }
            fcn.00016e8c(auStackX_10,1,0x45);
            fcn.00011a8c(arg1);
            fcn.0001769c(auStack_108,0x100,0x1cf20,uVar2);
            fcn.000115b4(arg1_01,auStack_108);
            fcn.00014dd0(CONCAT71(arg1 >> 8,uVar2));
            *0xfe410dff = 0x78;
            return;
        }
        (**(*0x1e110 + 0x58))();
        fcn.00011a8c(arg1);
        arg2 = 0x1cee8;
    }
    fcn.000115b4(arg1_01,arg2);
    return;
}


/* fcn.00014e78 @ 0x14e78 */

ulong fcn.00014e78(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    uint32_t arg1_00;
    int64_t iVar3;
    uchar *puVar4;
    char *arg1_01;
    int64_t arg3;
    
    *(arg1 + 0x14) = 2;
    fcn.00011a8c(arg1);
    arg1_00 = arg1;
    fcn.000115b4(arg1_00,0x1ce28);
    fcn.000115b4(arg1_00,0x1ce70);
    if ((*0xfe4107a4 & 1) != 0) {
        if ((*(arg1 + 0x20) == 0) || ((*(arg1 + 0x14) & 2) == 0)) {
            puVar4 = arg1 + 0x24;
        }
        else {
            iVar3 = *(arg1 + 0x20) + arg1;
            *(iVar3 + 0x24) = 10;
            puVar4 = iVar3 + 0x25;
        }
        *puVar4 = 2;
        arg1_01 = puVar4 + 1;
        iVar3 = 0;
        if (str._Get____:_Get_Color_Calibration_Support_Status[0] != '\0') {
            do {
                arg3 = iVar3 + 1;
                iVar2 = iVar3 + 1;
                iVar3 = arg3;
            } while ("/Get    : Get Color Calibration Support Status"[iVar2] != '\0');
            if ((arg3 != 0) && (arg1_01 != "/Get    : Get Color Calibration Support Status")) {
                fcn.00011180(arg1_01,0x1ceb8,arg3);
            }
        }
        iVar3 = 0;
        cVar1 = str._Get____:_Get_Color_Calibration_Support_Status[0];
        while (cVar1 != '\0') {
            cVar1 = "/Get    : Get Color Calibration Support Status"[iVar3 + 1];
            iVar3 = iVar3 + 1;
        }
        arg1_01[iVar3] = '\x03';
        *(arg1 + 0x14) = *(arg1 + 0x14) | 2;
        *(arg1 + 0x20) = ((arg1_01 + iVar3) - arg1_00) + -0x23;
    }
    return 0;
}


/* fcn.000150f0 @ 0x150f0 */

void fcn.000150f0(int64_t arg1)

{
    uint32_t arg1_00;
    int64_t iVar1;
    uint32_t *puVar2;
    uchar auStack_108 [256];
    
    fcn.00011a8c(arg1);
    arg1_00 = arg1;
    fcn.000115b4(arg1_00,0x1cfb0);
    fcn.000115b4(arg1_00,0x1cfe8);
    fcn.000115b4(arg1_00,0x1d020);
    puVar2 = 0x1a9c8;
    iVar1 = 3;
    do {
        fcn.0001769c(auStack_108,0x100,0x1c8a0,*puVar2);
        fcn.000115b4(arg1_00,auStack_108);
        puVar2 = puVar2 + 3;
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
}


/* fcn.00015194 @ 0x15194 */

void fcn.00015194(int64_t arg1)

{
    uint32_t arg2;
    uint8_t uVar1;
    uint8_t auStackX_10 [24];
    uchar auStack_108 [256];
    
    uVar1 = 0;
    auStackX_10[0] = 0;
    fcn.00016ec0(auStackX_10,1,0x48);
    do {
        if (auStackX_10[0] == *(uVar1 * 0xc + 0x1a9c8)) {
            fcn.0001769c(auStack_108,0x100,0x1d050,*(uVar1 * 0xc + 0x1a9c0));
            fcn.00011a8c(arg1);
            arg2 = auStack_108;
            goto code_r0x0001522e;
        }
        uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
    *(arg1 + 0x18) = 0x8000000000000002;
    fcn.00011a8c(arg1);
    arg2 = 0x1d070;
code_r0x0001522e:
    fcn.000115b4(arg1,arg2);
    return;
}


/* fcn.00015248 @ 0x15248 */

void fcn.00015248(int64_t arg1)

{
    char cVar1;
    int64_t arg1_00;
    uint32_t arg1_01;
    uint8_t uVar2;
    uint64_t uVar3;
    uint32_t *puVar4;
    int64_t iVar5;
    uint8_t auStackX_10 [8];
    uchar auStack_118 [256];
    
    arg1_00 = fcn.0001174c(arg1,0x1b6f0);
    cVar1 = fcn.000119bc(arg1_00);
    iVar5 = 3;
    arg1_01 = arg1;
    if (cVar1 == '\x01') {
        auStackX_10[0] = fcn.00011a38(arg1_00);
        (**(*0x1e110 + 0x58))(arg1_00);
        uVar3 = 0;
        do {
            if (auStackX_10[0] == *(uVar3 * 0xc + 0x1a9c8)) {
                fcn.00016e8c(auStackX_10,1,0x48);
                *0xfe410dff = 0x78;
                fcn.0001769c(auStack_118,0x100,0x1d090,*(uVar3 * 0xc + 0x1a9c0));
                fcn.00011a8c(arg1);
                fcn.000115b4(arg1_01,auStack_118);
                return;
            }
            uVar2 = uVar3 + 1;
            uVar3 = uVar2;
        } while (uVar2 < 3);
    }
    fcn.00011a8c(arg1);
    *(arg1 + 0x18) = 0x8000000000000002;
    fcn.000115b4(arg1_01,0x1c3b8);
    puVar4 = 0x1a9c8;
    do {
        fcn.0001769c(auStack_118,0x100,0x1c8a0,*puVar4);
        fcn.000115b4(arg1_01,auStack_118);
        puVar4 = puVar4 + 3;
        iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    (**(*0x1e110 + 0x58))(arg1_00);
    return;
}


/* fcn.00015430 @ 0x15430 */

void fcn.00015430(int64_t arg1)

{
    char *pcVar1;
    int64_t iVar2;
    char acStack_128 [9];
    uint64_t uStack_11f;
    uchar auStack_108 [256];
    
    acStack_128[0] = '\0';
    acStack_128[1] = '\0';
    acStack_128[2] = '\0';
    acStack_128[3] = '\0';
    acStack_128[4] = '\0';
    acStack_128[5] = '\0';
    acStack_128[6] = '\0';
    acStack_128[7] = '\0';
    acStack_128[8] = '\0';
    pcVar1 = acStack_128;
    uStack_11f = 0;
    iVar2 = 0x10;
    do {
        fcn.00016ec0(pcVar1,1,(0x50 - acStack_128) + pcVar1);
        pcVar1 = pcVar1 + 1;
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (acStack_128[0] - 1U < 0xfe) {
        uStack_11f = uStack_11f & 0xffffffffffffff;
        pcVar1 = "Current Sound Effect: %s";
    }
    else {
        pcVar1 = "Current Sound Effect: Not Set";
    }
    fcn.0001769c(auStack_108,0x100,pcVar1,acStack_128);
    fcn.00011a8c(arg1);
    fcn.000115b4(arg1,auStack_108);
    return;
}


/* fcn.000154fc @ 0x154fc */

void fcn.000154fc(int64_t arg1)

{
    uint32_t *arg1_00;
    int64_t iVar1;
    char *arg1_01;
    uint32_t arg2;
    ulong in_R9;
    int64_t iVar2;
    char acStack_138 [9];
    uint64_t uStack_12f;
    uchar auStack_118 [256];
    
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    uStack_12f = 0;
    arg1_00 = fcn.0001174c(arg1,0x1b6f0);
    arg2 = in_R9;
    iVar1 = 0;
    if (*arg1_00 == '\0') {
code_r0x000155d5:
        arg1_01 = "Set Sound Effect String Length is not equal 16";
    }
    else {
        do {
            iVar1 = iVar1 + 1;
        } while (*(iVar1 + arg1_00) != '\0');
        iVar2 = 0x10;
        if (iVar1 != 0x10) goto code_r0x000155d5;
        iVar1 = 0x50;
        do {
            fcn.00016e8c(arg1_00,1,iVar1);
            arg1_00 = arg1_00 + 1;
            fcn.00016ec0(acStack_138 + -0x50 + iVar1,1,iVar1);
            arg2 = in_R9;
            iVar1 = iVar1 + 1;
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        if (acStack_138[0] - 1U < 0xfe) {
            uStack_12f = uStack_12f & 0xffffffffffffff;
            fcn.0001769c(auStack_118,0x100,0x1d1c0,acStack_138);
            *0xfe410dff = 0x78;
            goto code_r0x000155eb;
        }
        arg1_01 = "Set Sound Effect Failed.";
    }
    fcn.0001769c(auStack_118,0x100,arg1_01,arg2);
code_r0x000155eb:
    (**(*0x1e110 + 0x58))(arg1_00);
    fcn.00011a8c(arg1);
    fcn.000115b4(arg1,auStack_118);
    return;
}


/* fcn.0001570c @ 0x1570c */

void fcn.0001570c(int64_t arg1)

{
    uint8_t *puVar1;
    int64_t iVar2;
    uint8_t auStack_138 [16];
    uchar auStack_128 [256];
    
    auStack_138[0] = 0;
    auStack_138[1] = 0;
    auStack_138[2] = 0;
    auStack_138[3] = 0;
    auStack_138[4] = 0;
    auStack_138[5] = 0;
    auStack_138[6] = 0;
    auStack_138[7] = 0;
    auStack_138[8] = 0;
    puVar1 = auStack_138;
    auStack_138[9] = 0;
    auStack_138[10] = 0;
    auStack_138[0xb] = 0;
    auStack_138[0xc] = 0;
    auStack_138[0xd] = 0;
    iVar2 = 0xe;
    do {
        *puVar1 = *(puVar1 + (0x70 - auStack_138) | 0xfe410700);
        puVar1 = puVar1 + 1;
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    fcn.0001769c(auStack_128,0x100,0x1d250,auStack_138[0]);
    fcn.00011a8c(arg1);
    fcn.000115b4(arg1,auStack_128);
    return;
}


/* fcn.00015848 @ 0x15848 */

void fcn.00015848(int64_t arg1)

{
    char cVar1;
    uint8_t uVar2;
    char *pcVar3;
    uint32_t arg2;
    char *pcVar4;
    uint8_t uVar5;
    char *arg1_00;
    uint8_t uVar6;
    uint64_t uVar7;
    uint8_t auStack_138 [16];
    uchar auStack_128 [256];
    
    auStack_138[1] = 0;
    auStack_138[2] = 0;
    auStack_138[3] = 0;
    auStack_138[4] = 0;
    auStack_138[5] = 0;
    auStack_138[6] = 0;
    auStack_138[7] = 0;
    auStack_138[8] = 0;
    uVar5 = 0;
    auStack_138[0] = 0;
    auStack_138[9] = 0;
    auStack_138[10] = 0;
    auStack_138[0xb] = 0;
    auStack_138[0xc] = 0;
    auStack_138[0xd] = 0;
    pcVar3 = fcn.0001174c(arg1,0x1b6f0);
    uVar7 = 0;
    do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4;
        if (*pcVar4 != '\0') {
            do {
                if (*pcVar3 == ' ') goto code_r0x000158bd;
                pcVar3 = pcVar3 + 1;
            } while (*pcVar3 != '\0');
            if (*pcVar3 == ' ') {
code_r0x000158bd:
                *pcVar3 = '\0';
                pcVar3 = pcVar3 + 1;
            }
        }
        if (*pcVar4 == '\0') break;
        arg1_00 = pcVar4;
        cVar1 = fcn.000119bc(pcVar4);
        if (cVar1 == '\0') {
            (**(*0x1e110 + 0x58))();
            fcn.00011a8c(arg1);
            fcn.000115b4(arg1,0x1d2c0);
            arg2 = 0x1d2f0;
            goto code_r0x00015a37;
        }
        uVar2 = fcn.00011a38(arg1_00);
        uVar5 = uVar5 + 1;
        uVar6 = uVar7 + 1;
        auStack_138[uVar7] = uVar2;
        *(uVar7 + 0x70U & 0xff | 0xfe410700) = uVar2;
        uVar7 = uVar6;
    } while (uVar6 < 0xe);
    if (uVar5 == 0xe) {
        *0xfe41077e = 0xa5;
        *0xfe41077f = 0x78;
        (**(*0x1e110 + 0x58))(pcVar4);
        fcn.0001769c(auStack_128,0x100,0x1d3b0,auStack_138[0]);
        fcn.00011a8c(arg1);
    }
    else {
        (**(*0x1e110 + 0x58))();
        fcn.00011a8c(arg1);
        fcn.0001769c(auStack_128,0x100,0x1d360,uVar5);
    }
    arg2 = auStack_128;
code_r0x00015a37:
    fcn.000115b4(arg1,arg2);
    return;
}


/* fcn.000111e0 @ 0x111e0 */

int64_t fcn.000111e0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    char cVar2;
    char *pcVar3;
    char *pcVar4;
    
    do {
        pcVar3 = arg1;
        pcVar4 = arg2;
        if (arg3 == 0) break;
        arg3 = arg3 + -1;
        pcVar4 = arg2 + 1;
        pcVar3 = arg1 + 1;
        cVar2 = *arg2;
        cVar1 = *arg1;
        arg1 = pcVar3;
        arg2 = pcVar4;
    } while (cVar1 == cVar2);
    return pcVar3[-1] - pcVar4[-1];
}


/* fcn.00015b40 @ 0x15b40 */

void fcn.00015b40(ulong noname_0,uint32_t arg1,ulong noname_2,int64_t arg2)

{
    int64_t iVar1;
    uint in_register_00000014;
    uint32_t *arg1_00;
    
    arg1_00 = CONCAT44(in_register_00000014,arg1);
    if (arg2 + 0xfe410000 == arg1_00) {
        iVar1 = 0;
    }
    else {
        iVar1 = fcn.000111e0(arg2 + 0xfe410000,arg1_00,1);
    }
    if (iVar1 != 0) {
        fcn.00016e8c(arg1_00,1,arg2);
    }
    return;
}


/* fcn.00015b8c @ 0x15b8c */

void fcn.00015b8c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint auStack_e8 [2];
    ulong uStack_e0;
    ulong *apuStack_d8 [2];
    uchar auStack_c8 [9];
    uchar uStack_bf;
    uchar uStack_be;
    uchar uStack_bd;
    uchar uStack_bc;
    
    uStack_e0 = 0xb4;
    auStack_e8[0] = 7;
    iVar1 = (**(*0x1e100 + 0xd0))(0x1a040,0,apuStack_d8);
    if (-1 < iVar1) {
        iVar1 = (**apuStack_d8[0])(L"UniWillVariable",0x1a0b0,auStack_e8,&uStack_e0,auStack_c8);
        if (-1 < iVar1) {
            uStack_bf = arg1;
            uStack_be = arg2;
            uStack_bd = arg3;
            uStack_bc = arg4;
            (*apuStack_d8[0][2])(L"UniWillVariable",0x1a0b0,auStack_e8[0],uStack_e0,auStack_c8);
        }
    }
    return;
}


/* fcn.00015c70 @ 0x15c70 */

ulong fcn.00015c70(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    uint32_t arg1_00;
    int64_t iVar3;
    uchar *puVar4;
    char *arg1_01;
    int64_t arg3;
    
    fcn.00011a8c(arg1);
    arg1_00 = arg1;
    fcn.000115b4(arg1_00,0x1ccb8);
    fcn.000115b4(arg1_00,0x1d438);
    fcn.000115b4(arg1_00,0x1d450);
    fcn.000115b4(arg1_00,0x1d468);
    fcn.000115b4(arg1_00,0x1d480);
    fcn.000115b4(arg1_00,0x1d498);
    fcn.000115b4(arg1_00,0x1d4a8);
    fcn.000115b4(arg1_00,0x1d4d0);
    fcn.000115b4(arg1_00,0x1d4e8);
    fcn.000115b4(arg1_00,0x1d510);
    fcn.000115b4(arg1_00,0x1d538);
    fcn.000115b4(arg1_00,0x1d570);
    fcn.000115b4(arg1_00,0x1d598);
    if ((*0xfe4107a4 & 1) != 0) {
        if ((*(arg1 + 0x20) == 0) || ((*(arg1 + 0x14) & 2) == 0)) {
            puVar4 = arg1 + 0x24;
        }
        else {
            iVar3 = *(arg1 + 0x20) + arg1;
            *(iVar3 + 0x24) = 10;
            puVar4 = iVar3 + 0x25;
        }
        *puVar4 = 2;
        arg1_01 = puVar4 + 1;
        iVar3 = 0;
        if (str._____Dump_Data[0] != '\0') {
            do {
                arg3 = iVar3 + 1;
                iVar2 = iVar3 + 1;
                iVar3 = arg3;
            } while ("     Dump Data"[iVar2] != '\0');
            if ((arg3 != 0) && (arg1_01 != "     Dump Data")) {
                fcn.00011180(arg1_01,0x1d5a0,arg3);
            }
        }
        iVar3 = 0;
        cVar1 = str._____Dump_Data[0];
        while (cVar1 != '\0') {
            cVar1 = "     Dump Data"[iVar3 + 1];
            iVar3 = iVar3 + 1;
        }
        arg1_01[iVar3] = '\x03';
        *(arg1 + 0x14) = *(arg1 + 0x14) | 2;
        *(arg1 + 0x20) = ((arg1_01 + iVar3) - arg1_00) + -0x23;
    }
    return 0;
}


/* fcn.00015d58 @ 0x15d58 */

void fcn.00015d58(int64_t arg1)

{
    char cVar1;
    uint8_t uVar2;
    int64_t iVar3;
    uint32_t arg1_00;
    uint32_t uVar4;
    uchar in_R8B;
    unkbyte7 in_R8;
    ulong uVar5;
    int64_t var_bp_18h;
    
    var_bp_18h = 0;
    iVar3 = fcn.0001174c(arg1,0x1ca18);
    cVar1 = fcn.000119bc(iVar3);
    arg1_00 = arg1;
    if (cVar1 == '\0') {
        (**(*0x1e110 + 0x58))();
        fcn.00011a8c(arg1);
        uVar4 = 0x1d5b0;
code_r0x00015daf:
        fcn.000115b4(arg1_00,uVar4);
    }
    else {
        uVar2 = fcn.00011a38(iVar3);
        var_bp_18h = CONCAT44(var_bp_18h._4_4_,uVar2);
        (**(*0x1e110 + 0x58))(iVar3);
        fcn.00011a8c(arg1);
        if (var_bp_18h == 0) {
code_r0x00015e7e:
            uVar4 = 0x1d5d8;
            if (var_bp_18h != 0xff) {
                uVar4 = 0x1d5f0;
            }
            fcn.000115b4(arg1_00,uVar4);
            var_bp_18h = var_bp_18h & 0xffffffff;
        }
        else if (var_bp_18h == 1) {
            fcn.000115b4(arg1_00,0x1d608);
            var_bp_18h = CONCAT44(0x80,var_bp_18h);
        }
        else if (var_bp_18h == 2) {
            fcn.000115b4(arg1_00,0x1d620);
            var_bp_18h = CONCAT44(0x24242400,var_bp_18h);
        }
        else {
            if (var_bp_18h != 3) {
                if (var_bp_18h == 0xfe) {
                    uVar4 = 0x1d640;
                    *(arg1 + 0x18) = 0x8000000000000003;
                }
                else {
                    if (var_bp_18h == 0xff) goto code_r0x00015e7e;
                    uVar4 = 0x1d668;
                    *(arg1 + 0x18) = 0x8000000000000002;
                }
                goto code_r0x00015daf;
            }
            fcn.000115b4(arg1_00,0x1d630);
            var_bp_18h = CONCAT44(0x2400,var_bp_18h);
        }
        fcn.00015b40(arg1,&var_bp_18h,CONCAT71(in_R8,in_R8B),0x20);
        fcn.00015b40(arg1,&var_bp_18h + 4,CONCAT71(in_R8,in_R8B),0x24);
        fcn.00015b40(arg1,&var_bp_18h + 5,CONCAT71(in_R8,in_R8B),0x21);
        fcn.00015b40(arg1,&var_bp_18h + 6,CONCAT71(in_R8,in_R8B),0x22);
        uVar5 = 0;
        iVar3 = &var_bp_18h + 7;
        fcn.00015b40(arg1,iVar3,CONCAT71(in_R8,in_R8B),0x23);
        fcn.00015b8c(CONCAT71(arg1 >> 8,var_bp_18h),CONCAT71(iVar3 >> 8,var_bp_18h._5_1_),
                     CONCAT71(in_R8,var_bp_18h._6_1_),CONCAT71(uVar5 >> 8,var_bp_18h._7_1_));
        *0xfe410dff = 0x78;
    }
    return;
}


/* fcn.00015f20 @ 0x15f20 */

void fcn.00015f20(int64_t arg1)

{
    char cVar1;
    uchar uVar2;
    int64_t arg1_00;
    uint32_t arg1_01;
    char *noname_2;
    uint uStackX_10;
    uint32_t auStackX_14 [5];
    uchar auStack_78 [112];
    
    uStackX_10 = 0;
    auStackX_14[0] = 0;
    arg1_00 = fcn.0001174c(arg1,0x1d420);
    cVar1 = fcn.000119bc(arg1_00);
    arg1_01 = arg1;
    if (cVar1 != '\0') {
        uStackX_10 = 0xfe;
        uVar2 = fcn.00011a38(arg1_00);
        auStackX_14[0] = CONCAT31(auStackX_14[0]._1_3_,uVar2);
        (**(*0x1e110 + 0x58))(arg1_00);
        if ((auStackX_14[0] & 0x7f) == 0) {
            fcn.00011a8c(arg1);
            fcn.000115b4(arg1_01,0x1d688);
            noname_2 = "Set Control value:0x%02x";
            fcn.0001769c(auStack_78,100,0x1d6a0,auStackX_14[0] & 0xff);
            fcn.000115b4(arg1_01,auStack_78);
            fcn.00015b40(arg1,&uStackX_10,noname_2,0x20);
            fcn.00015b40(arg1,auStackX_14,noname_2,0x24);
            *0xfe410dff = 0x78;
            return;
        }
    }
    (**(*0x1e110 + 0x58))(arg1_00);
    fcn.00011a8c(arg1);
    *(arg1 + 0x18) = 0x8000000000000002;
    fcn.000115b4(arg1_01,0x1c3b8);
    fcn.000115b4(arg1_01,0x1d6c0);
    fcn.000115b4(arg1_01,0x1d6f8);
    return;
}


/* fcn.00016064 @ 0x16064 */

void fcn.00016064(int64_t arg1)

{
    char cVar1;
    uint8_t uVar2;
    char *pcVar3;
    uint32_t arg1_00;
    uint32_t arg2;
    int64_t iVar4;
    char *pcVar5;
    uint64_t uVar6;
    ulong uVar7;
    ulong uStackX_10;
    int64_t var_6fh;
    uchar auStack_88 [87];
    int64_t var_29h;
    
    uStackX_10 = 0xfe;
    pcVar3 = fcn.0001174c(arg1,0x1d430);
    fcn.00011a8c(arg1);
    uVar6 = 0;
    do {
        pcVar5 = pcVar3;
        if (*pcVar3 != '\0') {
            do {
                if (*pcVar5 == ' ') goto code_r0x000160c0;
                pcVar5 = pcVar5 + 1;
            } while (*pcVar5 != '\0');
            if (*pcVar5 == ' ') {
code_r0x000160c0:
                *pcVar5 = '\0';
                pcVar5 = pcVar5 + 1;
            }
        }
        cVar1 = fcn.000119bc(pcVar3);
        arg1_00 = arg1;
        if (cVar1 == '\0') {
            arg2 = 0x1d730;
code_r0x0001620d:
            fcn.000115b4(arg1_00,arg2);
            return;
        }
        uVar2 = fcn.00011a38(pcVar3);
        if (200 < uVar2) {
            arg2 = 0x1d758;
            goto code_r0x0001620d;
        }
        if (uVar6 == 0) {
            uStackX_10._0_6_ = CONCAT15(uVar2,uStackX_10);
        }
        else if (uVar6 == 1) {
            uStackX_10._0_7_ = CONCAT16(uVar2,uStackX_10);
        }
        else if (uVar6 == 2) {
            uStackX_10 = CONCAT17(uVar2,uStackX_10);
        }
        else {
            fcn.0001769c(auStack_88,100,0x1d780,uVar6 + 1);
            fcn.000115b4(arg1_00,auStack_88);
        }
        uVar6 = uVar6 + 1;
        pcVar3 = pcVar5;
        if (2 < uVar6) {
            (**(*0x1e110 + 0x58))(pcVar5);
            fcn.000115b4(arg1_00,0x1d688);
            pcVar3 = "Set RGB: 0x%02x 0x%02x 0x%02x";
            fcn.0001769c(auStack_88,100,0x1d7a8,uStackX_10._5_1_);
            fcn.000115b4(arg1_00,auStack_88);
            fcn.00015b40(arg1,&uStackX_10,pcVar3,0x20);
            fcn.00015b40(arg1,&uStackX_10 + 4,pcVar3,0x24);
            fcn.00015b40(arg1,&uStackX_10 + 5,pcVar3,0x21);
            fcn.00015b40(arg1,&uStackX_10 + 6,pcVar3,0x22);
            uVar7 = 0;
            iVar4 = &uStackX_10 + 7;
            fcn.00015b40(arg1,iVar4,pcVar3,0x23);
            fcn.00015b8c(CONCAT71(arg1 >> 8,uStackX_10),CONCAT71(iVar4 >> 8,uStackX_10._5_1_),
                         CONCAT71(pcVar3 >> 8,uStackX_10._6_1_),CONCAT71(uVar7 >> 8,uStackX_10._7_1_));
            *0xfe410dff = 0x78;
            return;
        }
    } while( true );
}


/* fcn.00016230 @ 0x16230 */

//WARNING: Type propagation algorithm not settling

void fcn.00016230(int64_t arg1)

{
    uint32_t uStackX_10;
    uchar uStackX_15;
    uchar uStackX_16;
    uint uStackX_14;
    uchar uStackX_17;
    int32_t var_6fh;
    int32_t var_73h;
    uchar auStack_78 [87];
    int64_t var_19h;
    
    uStackX_10 = 0;
    uStackX_14 = 0;
    fcn.00016ec0(&uStackX_10,1,0x20);
    fcn.00016ec0(&stack0x00000014,1,0x24);
    fcn.00016ec0(&uStackX_15,1,0x21);
    fcn.00016ec0(&uStackX_16,1,0x22);
    fcn.00016ec0(&uStackX_17,1,0x23);
    fcn.00011a8c(arg1);
    fcn.0001769c(auStack_78,100,0x1d7d0,uStackX_10);
    fcn.000115b4(arg1,auStack_78);
    return;
}


/* fcn.000163bc @ 0x163bc */

void fcn.000163bc(int64_t arg1)

{
    uint32_t arg1_00;
    int64_t iVar1;
    uint32_t *puVar2;
    uchar auStack_108 [256];
    
    fcn.00011a8c(arg1);
    arg1_00 = arg1;
    fcn.000115b4(arg1_00,0x1d828);
    fcn.000115b4(arg1_00,0x1d858);
    fcn.000115b4(arg1_00,0x1d888);
    puVar2 = 0x1aae8;
    iVar1 = 2;
    do {
        fcn.0001769c(auStack_108,0x100,0x1c8a0,*puVar2);
        fcn.000115b4(arg1_00,auStack_108);
        puVar2 = puVar2 + 3;
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
}


/* fcn.00016460 @ 0x16460 */

void fcn.00016460(int64_t arg1)

{
    uint32_t arg2;
    uint8_t uVar1;
    uint8_t auStackX_10 [24];
    uchar auStack_108 [256];
    
    uVar1 = 0;
    auStackX_10[0] = 0;
    fcn.00016ec0(auStackX_10,1,0x44);
    do {
        if (auStackX_10[0] == *(uVar1 * 0xc + 0x1aae8)) {
            fcn.0001769c(auStack_108,0x100,0x1d8b0,*(uVar1 * 0xc + 0x1aae0));
            fcn.00011a8c(arg1);
            arg2 = auStack_108;
            goto code_r0x000164fa;
        }
        uVar1 = uVar1 + 1;
    } while (uVar1 < 2);
    *(arg1 + 0x18) = 0x8000000000000002;
    fcn.00011a8c(arg1);
    arg2 = 0x1d8c8;
code_r0x000164fa:
    fcn.000115b4(arg1,arg2);
    return;
}


/* fcn.00016514 @ 0x16514 */

void fcn.00016514(int64_t arg1)

{
    char cVar1;
    int64_t arg1_00;
    uint32_t arg1_01;
    uint8_t uVar2;
    uint64_t uVar3;
    uint32_t *puVar4;
    int64_t iVar5;
    uint8_t auStackX_10 [8];
    uchar auStack_118 [256];
    
    arg1_00 = fcn.0001174c(arg1,0x1b6f0);
    cVar1 = fcn.000119bc(arg1_00);
    iVar5 = 2;
    arg1_01 = arg1;
    if (cVar1 == '\x01') {
        auStackX_10[0] = fcn.00011a38(arg1_00);
        (**(*0x1e110 + 0x58))(arg1_00);
        uVar3 = 0;
        do {
            if (auStackX_10[0] == *(uVar3 * 0xc + 0x1aae8)) {
                fcn.00016e8c(auStackX_10,1,0x44);
                *0xfe410dff = 0x78;
                fcn.0001769c(auStack_118,0x100,0x1d8e8,*(uVar3 * 0xc + 0x1aae0));
                fcn.00011a8c(arg1);
                fcn.000115b4(arg1_01,auStack_118);
                return;
            }
            uVar2 = uVar3 + 1;
            uVar3 = uVar2;
        } while (uVar2 < 2);
    }
    fcn.00011a8c(arg1);
    *(arg1 + 0x18) = 0x8000000000000002;
    fcn.000115b4(arg1_01,0x1c3b8);
    puVar4 = 0x1aae8;
    do {
        fcn.0001769c(auStack_118,0x100,0x1c8a0,*puVar4);
        fcn.000115b4(arg1_01,auStack_118);
        puVar4 = puVar4 + 3;
        iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    (**(*0x1e110 + 0x58))(arg1_00);
    return;
}


/* fcn.00016744 @ 0x16744 */

void fcn.00016744(int64_t arg1)

{
    char cVar1;
    uint8_t uVar2;
    int64_t arg1_00;
    uint32_t arg1_01;
    uint32_t arg2;
    uint32_t auStackX_10 [2];
    uchar auStack_108 [256];
    
    arg1_00 = fcn.0001174c(arg1,0x1b6f0);
    cVar1 = fcn.000119bc(arg1_00);
    arg1_01 = arg1;
    if (cVar1 == '\0') {
        (**(*0x1e110 + 0x58))();
        fcn.00011a8c(arg1);
        fcn.000115b4(arg1_01,0x1d9c0);
        fcn.000115b4(arg1_01,0x1d9e8);
        arg2 = 0x1da10;
    }
    else {
        uVar2 = fcn.00011a38(arg1_00);
        if (uVar2 < 2) {
            (**(*0x1e110 + 0x58))(arg1_00);
            fcn.00016ec0(auStackX_10,1,0);
            if (uVar2 == 0) {
                auStackX_10[0]._0_1_ = auStackX_10[0] & 0xfd;
            }
            else {
                auStackX_10[0]._0_1_ = auStackX_10[0] | 2;
            }
            fcn.00016e8c(auStackX_10,1,0);
            fcn.00011a8c(arg1);
            fcn.0001769c(auStack_108,0x100,0x1da38,auStackX_10[0]);
            fcn.000115b4(arg1_01,auStack_108);
            *0xfe410dff = 0x78;
            return;
        }
        (**(*0x1e110 + 0x58))();
        fcn.00011a8c(arg1);
        arg2 = 0x1cee8;
    }
    fcn.000115b4(arg1_01,arg2);
    return;
}


/* fcn.000166fc @ 0x166fc */

ulong fcn.000166fc(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    uint32_t arg1_00;
    int64_t iVar3;
    uchar *puVar4;
    char *arg1_01;
    int64_t arg3;
    
    *(arg1 + 0x14) = 2;
    fcn.00011a8c(arg1);
    arg1_00 = arg1;
    fcn.000115b4(arg1_00,0x1d900);
    fcn.000115b4(arg1_00,0x1d940);
    if ((*0xfe4107a4 & 1) != 0) {
        if ((*(arg1 + 0x20) == 0) || ((*(arg1 + 0x14) & 2) == 0)) {
            puVar4 = arg1 + 0x24;
        }
        else {
            iVar3 = *(arg1 + 0x20) + arg1;
            *(iVar3 + 0x24) = 10;
            puVar4 = iVar3 + 0x25;
        }
        *puVar4 = 2;
        arg1_01 = puVar4 + 1;
        iVar3 = 0;
        if (str._Get____:_Get_KeyboardLight_Support_Status[0] != '\0') {
            do {
                arg3 = iVar3 + 1;
                iVar2 = iVar3 + 1;
                iVar3 = arg3;
            } while ("/Get    : Get KeyboardLight Support Status"[iVar2] != '\0');
            if ((arg3 != 0) && (arg1_01 != "/Get    : Get KeyboardLight Support Status")) {
                fcn.00011180(arg1_01,0x1d990,arg3);
            }
        }
        iVar3 = 0;
        cVar1 = str._Get____:_Get_KeyboardLight_Support_Status[0];
        while (cVar1 != '\0') {
            cVar1 = "/Get    : Get KeyboardLight Support Status"[iVar3 + 1];
            iVar3 = iVar3 + 1;
        }
        arg1_01[iVar3] = '\x03';
        *(arg1 + 0x14) = *(arg1 + 0x14) | 2;
        *(arg1 + 0x20) = ((arg1_01 + iVar3) - arg1_00) + -0x23;
    }
    return 0;
}


/* fcn.0001695c @ 0x1695c */

void fcn.0001695c(int64_t arg1)

{
    uint32_t arg1_00;
    int64_t iVar1;
    uint32_t *puVar2;
    uchar auStack_108 [256];
    
    fcn.00011a8c(arg1);
    arg1_00 = arg1;
    fcn.000115b4(arg1_00,0x1dad8);
    fcn.000115b4(arg1_00,0x1db08);
    fcn.000115b4(arg1_00,0x1db38);
    puVar2 = 0x1ab68;
    iVar1 = 0x11;
    do {
        fcn.0001769c(auStack_108,0x100,0x1c8a0,*puVar2);
        fcn.000115b4(arg1_00,auStack_108);
        puVar2 = puVar2 + 3;
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
}


/* fcn.00016a00 @ 0x16a00 */

void fcn.00016a00(int64_t arg1)

{
    uint32_t arg2;
    uint8_t uVar1;
    uint8_t auStackX_10 [24];
    uchar auStack_108 [256];
    
    uVar1 = 0;
    auStackX_10[0] = 0;
    fcn.00016ec0(auStackX_10,1,0x41);
    do {
        if (auStackX_10[0] == *(uVar1 * 0xc + 0x1ab68)) {
            fcn.0001769c(auStack_108,0x100,0x1db58,*(uVar1 * 0xc + 0x1ab60));
            fcn.00011a8c(arg1);
            arg2 = auStack_108;
            goto code_r0x00016a9a;
        }
        uVar1 = uVar1 + 1;
    } while (uVar1 < 0x11);
    *(arg1 + 0x18) = 0x8000000000000002;
    fcn.00011a8c(arg1);
    arg2 = 0x1db70;
code_r0x00016a9a:
    fcn.000115b4(arg1,arg2);
    return;
}


/* fcn.00016ab4 @ 0x16ab4 */

void fcn.00016ab4(int64_t arg1)

{
    char cVar1;
    int64_t arg1_00;
    uint32_t arg1_01;
    uint8_t uVar2;
    uint64_t uVar3;
    uint32_t *puVar4;
    int64_t iVar5;
    uint8_t auStackX_10 [8];
    uchar auStack_118 [256];
    
    arg1_00 = fcn.0001174c(arg1,0x1b6f0);
    cVar1 = fcn.000119bc(arg1_00);
    iVar5 = 0x11;
    arg1_01 = arg1;
    if (cVar1 == '\x01') {
        auStackX_10[0] = fcn.00011a38(arg1_00);
        (**(*0x1e110 + 0x58))(arg1_00);
        uVar3 = 0;
        do {
            if (auStackX_10[0] == *(uVar3 * 0xc + 0x1ab68)) {
                fcn.00016e8c(auStackX_10,1,0x41);
                *0xfe410dff = 0x78;
                fcn.0001769c(auStack_118,0x100,0x1db90,*(uVar3 * 0xc + 0x1ab60));
                fcn.00011a8c(arg1);
                fcn.000115b4(arg1_01,auStack_118);
                return;
            }
            uVar2 = uVar3 + 1;
            uVar3 = uVar2;
        } while (uVar2 < 0x11);
    }
    fcn.00011a8c(arg1);
    fcn.000115b4(arg1_01,0x1c3b8);
    puVar4 = 0x1ab68;
    do {
        fcn.0001769c(auStack_118,0x100,0x1c8a0,*puVar4);
        fcn.000115b4(arg1_01,auStack_118);
        puVar4 = puVar4 + 3;
        iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    (**(*0x1e110 + 0x58))(arg1_00);
    return;
}


/* fcn.00016cf4 @ 0x16cf4 */

uint64_t fcn.00016cf4(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != '\0')) {
        while (uVar1 < 1000000) {
            uVar1 = uVar1 + 1;
            if (*(uVar1 + CONCAT44(in_register_0000000c,arg1)) == '\0') {
                return uVar1;
            }
        }
        uVar1 = 0xf4241;
    }
    return uVar1;
}


/* fcn.00016c8c @ 0x16c8c */

int64_t fcn.00016c8c(int64_t arg1)

{
    char cVar1;
    int iVar2;
    
    cVar1 = arg1;
    if (cVar1 - 0x30U < 10) {
        iVar2 = cVar1 + -0x30;
    }
    else {
        if (cVar1 + 0x9fU < 0x1a) {
            cVar1 = cVar1 + -0x20;
        }
        iVar2 = cVar1 + -0x37;
    }
    return iVar2;
}


/* fcn.000176bc @ 0x176bc */

int64_t fcn.000176bc(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    piVar3 = 0x1ac60;
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


/* fcn.00017118 @ 0x17118 */

int fcn.00017118(uint32_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    bool bVar2;
    char cVar3;
    uint in_register_0000000c;
    uint8_t *puVar4;
    uint8_t *puVar5;
    uint32_t uVar6;
    char cVar7;
    
    bVar2 = false;
    cVar7 = '\x01';
    for (puVar4 = CONCAT44(in_register_0000000c,arg1); (*puVar4 == 0x20 || (*puVar4 == 9)); puVar4 = puVar4 + 1) {
    }
    if (*puVar4 == 0) {
        *arg2 = puVar4;
        return 0;
    }
    if (*puVar4 == 0x2d) {
        cVar7 = -1;
        puVar4 = puVar4 + 1;
    }
    puVar5 = puVar4 + 1;
    uVar6 = 0;
    if (*puVar4 != 0x2b) {
        puVar5 = puVar4;
        uVar6 = 0;
    }
    do {
        uVar1 = *puVar5;
        if (uVar1 - 0x30 < 10) {
            cVar3 = uVar1 - 0x30;
        }
        else {
            if (0x19 < (uVar1 & 0xdf) + 0xbf) {
code_r0x000171be:
                *arg2 = puVar5;
                if ((bVar2) && (uVar6 = 0x7fffffff, cVar7 == -1)) {
                    uVar6 = 0x80000000;
                }
                return cVar7 * uVar6;
            }
            cVar3 = (uVar1 & 0xdf) - 0x37;
        }
        if (9 < cVar3) goto code_r0x000171be;
        uVar6 = cVar3 + uVar6 * 10;
        if (cVar7 == '\x01') {
            if (0x7fffffff < uVar6) {
                bVar2 = true;
            }
        }
        else if (0x80000000 < uVar6) {
            bVar2 = true;
        }
        puVar5 = puVar5 + 1;
    } while( true );
}


/* fcn.000171ec @ 0x171ec */

char * fcn.000171ec(uint32_t arg1)

{
    int64_t iVar1;
    uint32_t in_register_0000000c;
    char *pcVar2;
    uint64_t uVar3;
    
    uVar3 = CONCAT44(in_register_0000000c,arg1);
    if (uVar3 == 0) {
        return "EFI_SUCCESS";
    }
    if (in_register_0000000c < 0) {
        uVar3 = uVar3 & 0x1fffffffffffffff;
        if ((in_register_0000000c & 0xa0000000) == 0xa0000000) {
            if (2 < uVar3) {
                return NULL;
            }
            iVar1 = uVar3 * 0x19;
            pcVar2 = "EFI_INTERRUPT_PENDING";
            goto code_r0x000172af;
        }
        if ((in_register_0000000c & 0xc0000000) == 0xc0000000) {
            if (2 < uVar3) {
                return NULL;
            }
            iVar1 = uVar3 * 0x19 + 0xad97;
        }
        else {
            if (0x23 < uVar3) {
                return NULL;
            }
            iVar1 = uVar3 * 0x19 + 0xadd7;
        }
    }
    else {
        if ((in_register_0000000c & 0x20000000) != 0) {
            if (1 < uVar3) {
                return NULL;
            }
            iVar1 = uVar3 * 0x23;
            pcVar2 = "EFI_WARN_INTERRUPT_SOURCE_PENDING";
            goto code_r0x000172af;
        }
        if (5 < uVar3) {
            return NULL;
        }
        iVar1 = uVar3 * 0x1a + 0xac56;
    }
    pcVar2 = 0x10000;
code_r0x000172af:
    return pcVar2 + iVar1;
}


/* fcn.000170a4 @ 0x170a4 */

char * fcn.000170a4(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uchar auVar1 [16];
    uchar auVar2 [16];
    uint64_t uVar3;
    char cVar4;
    
    uVar3 = arg1 & 0xffffffff;
    if (arg4 != '\0') {
        uVar3 = arg1;
    }
    if (arg3 == 10) {
        uVar3 = -arg1;
    }
    if (-1 < arg1) {
        uVar3 = arg1;
    }
    if (uVar3 == 0) {
        *arg2 = 0x30;
        arg2 = arg2 + 1;
    }
    else {
        do {
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg3;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar3;
            uVar3 = uVar3 / arg3;
            cVar4 = SUB161(auVar2 % auVar1,0);
            if (SUB168(auVar2 % auVar1,0) < 10) {
                cVar4 = cVar4 + '0';
            }
            else {
                cVar4 = cVar4 + 'W';
            }
            *arg2 = cVar4;
            arg2 = arg2 + 1;
        } while (uVar3 != 0);
    }
    if ((arg3 == 10) && (arg1 < 0)) {
        *arg2 = '-';
        arg2 = arg2 + 1;
    }
    *arg2 = '\0';
    return arg2 + -1;
}


/* fcn.00011200 @ 0x11200 */

void fcn.00011200(void)

{
    return;
}


/* fcn.000178a4 @ 0x178a4 */

void fcn.000178a4(int64_t arg1)

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
            fcn.00011200();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.000191a4 @ 0x191a4 */

bool fcn.000191a4(ulong noname_0,int64_t arg1)

{
    int64_t arg2;
    bool bVar1;
    
    bVar1 = (*0xc00fd010 & 0xfffff000) == *0x1b288;
    if (bVar1) {
        *(*0x1b288 + 8) = 0;
        arg2 = 0;
        *(*0x1b288 + 6) = 0x20d;
        fcn.00018910(0x201,0);
        fcn.00017904(arg2 + 10,arg2);
        *arg1 = *(*0x1b288 + 0x10) & 0xffffff;
    }
    return bVar1;
}


/* fcn.00019158 @ 0x19158 */

void fcn.00019158(int64_t arg1)

{
    int64_t iVar1;
    
    if ((*0xc00fd010 & 0xfffff000) == *0x1b288) {
        iVar1 = fcn.00018cac();
        if (iVar1 < 0) {
            fcn.00018db8(arg1);
        }
        fcn.00018fd4();
        fcn.000197d8(0);
        fcn.00019078();
    }
    return;
}


/* fcn.00018cac @ 0x18cac */

int64_t fcn.00018cac(void)

{
    uint uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t auStack_48 [16];
    
    puVar4 = auStack_48;
    iVar2 = 0x40;
    fcn.000112b0(puVar4,0x40,0);
    iVar2 = fcn.000187f8(puVar4,iVar2,0xefc,4);
    if ((-1 < iVar2) && (auStack_48[0] - 1 < 0xfffffffe)) {
        uVar8 = 0;
        uVar6 = auStack_48[0] >> 6 & 0x3fc;
        if (uVar6 != 0) {
            do {
                puVar4 = auStack_48;
                iVar2 = 0x40;
                fcn.000112b0(puVar4,0x40,0);
                uVar7 = uVar6 - uVar8;
                if (0x3f < uVar6 - uVar8) {
                    uVar7 = 0x40;
                }
                iVar2 = fcn.000187f8(puVar4,iVar2,uVar8 + (auStack_48[0] & 0xff) * 0x10,uVar7);
                if (iVar2 < 0) {
                    return iVar2;
                }
                uVar5 = 0;
                if (uVar7 != 0) {
                    do {
                        if (*(auStack_48 + uVar5) == *0x1b216) {
                            uVar1 = *(auStack_48 + uVar5 + 4);
                            *(*0x1b288 + 0xc4) = uVar1;
                            *(*0x1b288 + 200) = uVar1;
                            return 0;
                        }
                        uVar3 = uVar5 + 8;
                        uVar5 = uVar3;
                    } while (uVar3 < uVar7);
                }
                uVar8 = uVar8 + 0x40;
            } while (uVar8 < uVar6);
        }
        iVar2 = -0x7ffffffffffffff2;
    }
    return iVar2;
}


/* fcn.00018db8 @ 0x18db8 */

void fcn.00018db8(uint32_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint in_register_0000000c;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint16_t uStackX_8;
    uint32_t uStack_108;
    uchar uStack_104;
    char acStack_fe [246];
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = *(iVar4 + 4) << 8;
    if (*(iVar4 + 0x16) == 0x1000) {
        uVar3 = uVar3 | 1;
    }
    else if (*(iVar4 + 0x16) == 0x2000) {
        uVar3 = uVar3 | 2;
    }
    else if (*(iVar4 + 0x16) == 0x10000) {
        uVar3 = uVar3 | 3;
    }
    uVar1 = uVar3 | 4;
    if (*(iVar4 + 0x12) == 1) {
        uVar1 = uVar3;
    }
    uVar3 = uVar1 | 8;
    if (*(iVar4 + 0xe) != 'P') {
        uVar3 = uVar1;
    }
    uVar1 = uVar3 | 0x10;
    if (*(iVar4 + 0xe) != '9') {
        uVar1 = uVar3;
    }
    fcn.000112b0(&uStack_108,0x100,0);
    uVar3 = 0;
    do {
        iVar4 = 0;
        *(*0x1b288 + 8) = uVar3;
        *(*0x1b288 + 6) = 0x3f0b;
        fcn.00018910(0x3f01,0);
        fcn.00017904(iVar4 + 10,iVar4);
        iVar4 = 0;
        iVar5 = 0x40;
        do {
            *(&uStack_108 + iVar4 + uVar3) = *(iVar4 + 0x10 + *0x1b288);
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        uVar2 = uVar1;
        if ((uVar3 == 0) && (uStackX_8 = 0, uStack_108 != 0x50444653)) {
            uStackX_8 = 1;
            if (CONCAT13(uStack_104,uStack_108._1_3_) != 0x50444653) {
                *(*0x1b288 + 0xcc) = 0;
                fcn.00017904(1,iVar4);
                if (*(*0x1b288 + 0xd4) == 0x50444653) goto code_r0x00018f08;
                goto code_r0x00018f70;
            }
        }
        uVar3 = uVar3 + 0x40;
    } while (uVar3 < 0x100);
    uVar3 = *(&uStack_108 + uStackX_8 + 0xc) & 0xffffff;
    if ((((*(&uStack_108 + uStackX_8 + 5) == '\x01') && (acStack_fe[uStackX_8] == '\x01')) && (uVar3 + 0x10 < 0x101)) &&
       ((*(&uStack_108 + uVar3 + 1) & 0x600000) != 0)) {
code_r0x00018f08:
        uVar3 = *0x1b216 & 0xff;
        if (uVar3 != 0x1c) {
            if (uVar3 == 0x1f) {
                uVar2 = uVar1 | 0x10;
                if ((*0x1b216 & 0xf000) == 0x8000) {
                    uVar2 = uVar1 | 0x70;
                }
            }
            else if (uVar3 != 0x20) {
                if (uVar3 == 0x37) {
                    if (*0x1b216 >> 8 != '@') goto code_r0x00018f70;
                }
                else {
                    if (uVar3 == 0x8c) goto code_r0x00018f70;
                    if (uVar3 == 0xbf) {
                        uVar2 = uVar1 | 0x80;
                        goto code_r0x00018f70;
                    }
                    if (uVar3 == 0xc2) {
                        uVar2 = uVar1 | 0x40;
                        goto code_r0x00018f70;
                    }
                }
                uVar2 = uVar1 | 0x20;
            }
        }
    }
code_r0x00018f70:
    *(*0x1b288 + 0xc4) = uVar2;
    *(*0x1b288 + 200) = uVar2;
    return;
}


/* fcn.00018fd4 @ 0x18fd4 */

void fcn.00018fd4(ulong param_1,ulong param_2)

{
    uchar uVar1;
    uint8_t uVar2;
    
    if (*0x1b21b == '\x01') {
        uVar1 = *(*0x1b288 + 0xaf);
        uVar2 = *(*0x1b288 + 0xa7);
        *(*0x1b288 + 0xaf) = 0x98;
        if (*(*0x1b288 + 0xaf) == -0x68) {
            *(*0x1b288 + 0xa7) = uVar2 & 0x3f | 0x40;
            *(*0x1b288 + 0xa1) = 0x72;
            fcn.00018910(0,CONCAT71(param_2 >> 8,1));
            *(*0x1b288 + 0xaf) = uVar1;
            *(*0x1b288 + 0xa7) = uVar2;
        }
    }
    return;
}


/* fcn.00018910 @ 0x18910 */

void fcn.00018910(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar1 = 0;
    if (arg1 != '\0') {
        uVar2 = 0;
        do {
            if ((*(*0x1b288 + 4) & 0x21) != 0x20) break;
            uVar2 = uVar2 + 1;
        } while (uVar2 < 0x4000000);
        *(*0x1b288 + 4) = 7;
    }
    if (arg2 != '\0') {
        do {
            if ((*(*0x1b288 + 0xa0) & 5) != 1) break;
            uVar1 = uVar1 + 1;
        } while (uVar1 < 0x4000000);
        *(*0x1b288 + 0xa0) = 0x1c;
    }
    return;
}


/* fcn.000197d8 @ 0x197d8 */

void fcn.000197d8(int64_t arg1)

{
    uint8_t uVar1;
    uint64_t arg1_00;
    int64_t arg1_01;
    ulong in_RDX;
    uint8_t uVar2;
    uint32_t uVar3;
    bool bVar4;
    
    arg1_00 = arg1 & 0xffffffff;
    uVar1 = fcn.00018978(arg1);
    uVar3 = *0x1b216 & 0xff;
    uVar2 = 0x1c;
    if (uVar3 == 0x1f) {
        uVar2 = 0xc;
        goto code_r0x00019913;
    }
    if (uVar3 == 0x20) {
        uVar3 = *0x1b216 & 0xffff;
        if ((uVar3 != 0x3820) && (uVar3 != 0x4320)) {
            if (uVar3 == 0x5020) {
                bVar4 = *0x1b212 < 0x800000;
                goto code_r0x0001990b;
            }
            if ((uVar3 - 0x6020 & 0xffffefff) != 0) goto code_r0x00019913;
        }
    }
    else if (uVar3 == 0x9d) {
        if ((*0x1b216 & 0xffff) != 0x609d) {
            bVar4 = (*0x1b216 & 0xffff) == 0x709d;
code_r0x000198d6:
            if (!bVar4) goto code_r0x00019913;
        }
    }
    else {
        if (uVar3 == 0xbf) goto code_r0x00019913;
        if (uVar3 == 0xc2) {
            uVar3 = *0x1b216 & 0xffff;
            if (uVar3 != 0x20c2) {
                if (((uVar3 != 0x24c2) && (uVar3 != 0x25c2)) && (uVar3 != 0x28c2)) {
                    bVar4 = uVar3 == 0x75c2;
                    goto code_r0x000198d6;
                }
                goto code_r0x0001990d;
            }
            bVar4 = *0x1b212 < 0x400000;
        }
        else {
            if (uVar3 == 200) {
                uVar3 = *0x1b216 & 0xffff;
                if (((uVar3 == 0x40c8) || (uVar3 == 0x60c8)) || (uVar3 == 0x67c8)) {
                    uVar2 = 0x7c;
                }
                goto code_r0x00019913;
            }
            if ((uVar3 != 0xef) ||
               ((uVar3 = *0x1b216 & 0xffff, uVar3 != 0x40ef &&
                (((uVar3 - 0x60ef & 0xffffcfff) != 0 || (uVar3 == 0x90ef)))))) goto code_r0x00019913;
            bVar4 = *0x1b212 < 0x2000000;
        }
code_r0x0001990b:
        if (bVar4) goto code_r0x00019913;
    }
code_r0x0001990d:
    uVar2 = 0x3c;
code_r0x00019913:
    if ((uVar1 & uVar2) != 0) {
        uVar1 = fcn.00018978(arg1_00);
        arg1_01 = CONCAT71(arg1_00 >> 8,1);
        uVar1 = uVar1 & ~uVar2;
        fcn.00018910(arg1_01,CONCAT71(in_RDX >> 8,1));
        *(*0x1b288 + 0x10) = uVar1;
        *(*0x1b288 + 8) = arg1;
        if ((*(*0x1b288 + 4) & 0x800) == 0) {
            *(*0x1b288 + 6) = 0xf;
            fcn.00018910(CONCAT71(arg1_01 >> 8,1),0);
            fcn.000189b4();
        }
    }
    return;
}


/* fcn.00019078 @ 0x19078 */

void fcn.00019078(void)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    
    iVar1 = *0x1b288;
    *(*0x1b288 + 0xb4) = 0;
    if (*(iVar1 + 0xb8) == 0xff0a55a) {
        *(iVar1 + 0xb4) = 4;
        uVar4 = 0;
        *(iVar1 + 0xb4) = 0x1000;
        uVar5 = *(iVar1 + 0xb8);
        iVar3 = 0;
        uVar6 = *(iVar1 + 0xb8) >> 8 & 3;
        if (uVar6 != 0xffffffff) {
            do {
                uVar2 = uVar5 & 7;
                if (uVar2 == 0) {
                    iVar3 = iVar3 + 0x80000;
                }
                else if (uVar2 == 1) {
                    iVar3 = iVar3 + 0x100000;
                }
                else if (uVar2 == 2) {
                    iVar3 = iVar3 + 0x200000;
                }
                else if (uVar2 == 3) {
                    iVar3 = iVar3 + 0x400000;
                }
                else if (uVar2 == 4) {
                    iVar3 = iVar3 + 0x800000;
                }
                else if (uVar2 == 5) {
                    iVar3 = iVar3 + 0x1000000;
                }
                else if (uVar2 == 6) {
                    iVar3 = iVar3 + 0x2000000;
                }
                else if (uVar2 == 7) {
                    iVar3 = iVar3 + 0x4000000;
                }
                uVar4 = uVar4 + 1;
                uVar5 = uVar5 >> 4;
            } while (uVar4 < uVar6 + 1);
        }
        if (iVar3 != *0x1b212) {
            *0x1b212 = iVar3;
        }
    }
    return;
}


/* fcn.00017c2c @ 0x17c2c */

ulong fcn.00017c2c(int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = arg1 >> 0x10 & 0xff;
    if (0x19 < uVar1) {
        if (uVar1 == 0x1a) {
            return 0x4000000;
        }
        if (uVar1 != 0x1b) {
            if (uVar1 == 0x20) {
                return 0x4000000;
            }
            if (uVar1 != 0x21) {
                if (uVar1 == 0x36) {
                    return 0x400000;
                }
                if (uVar1 == 0x37) {
                    return 0x800000;
                }
                if (uVar1 != 0x38) {
                    if (uVar1 == 0x39) {
                        return 0x2000000;
                    }
                    if (uVar1 == 0x3a) {
                        return 0x4000000;
                    }
                }
                return 0x1000000;
            }
        }
        return 0x8000000;
    }
    if (uVar1 == 0x19) {
        return 0x2000000;
    }
    if (uVar1 == 0x10) {
        return 0x10000;
    }
    if (uVar1 == 0x11) {
        return 0x20000;
    }
    if (uVar1 != 0x12) {
        if (uVar1 == 0x13) {
            return 0x80000;
        }
        if (uVar1 == 0x14) {
            return 0x100000;
        }
        if (uVar1 == 0x15) {
            return 0x200000;
        }
        if (uVar1 == 0x16) {
            return 0x400000;
        }
        if (uVar1 == 0x17) {
            return 0x800000;
        }
        return 0x1000000;
    }
    return 0x40000;
}


/* fcn.00017cdc @ 0x17cdc */

ulong fcn.00017cdc(int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = arg1 >> 0x10 & 0xff;
    if (uVar1 == 0x12) {
        return 0x80000;
    }
    if (uVar1 == 0x13) {
        return 0x100000;
    }
    if (uVar1 == 0x14) {
        return 0x200000;
    }
    if (uVar1 == 0x15) {
        return 0x400000;
    }
    if (uVar1 == 0x16) {
        return 0x800000;
    }
    if (uVar1 != 0x17) {
        if (uVar1 == 0x20) {
            return 0x4000000;
        }
        if (uVar1 == 0x46) {
            return 0x400000;
        }
    }
    return 0x1000000;
}


/* fcn.00017d34 @ 0x17d34 */

ulong fcn.00017d34(int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = arg1 >> 0x10 & 0xff;
    if (uVar1 != 1) {
        if (uVar1 == 2) {
            return 0x400000;
        }
        if (uVar1 != 0x41) {
            if (uVar1 != 0x43) {
                if (uVar1 == 0x4a) {
                    return 0x400000;
                }
                if (uVar1 != 0x4b) {
                    if (uVar1 == 0x8c) {
                        return 0x40000;
                    }
                    if (uVar1 == 0x8d) {
                        return 0x80000;
                    }
                    if (uVar1 == 0x8e) {
                        return 0x100000;
                    }
                    return 0x1000000;
                }
            }
            return 0x800000;
        }
    }
    return 0x200000;
}


/* fcn.00018774 @ 0x18774 */

ulong fcn.00018774(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    
    iVar1 = arg1;
    if (iVar1 < 0xc) {
        if (iVar1 == 1) {
            if (**0x1b288 < 0) {
                uVar2 = (*0x1b288)[0x1b];
            }
            else {
                uVar2 = (*0x1b288)[0x16];
            }
        }
        else {
            uVar2 = (*0x1b288)[iVar1 + 0x15];
        }
    }
    else {
        if (0xf < iVar1) {
            return 0x8000000000000003;
        }
        uVar2 = (*0x1b288)[iVar1 + -0xc + 0x38];
    }
    if (uVar2 == 0x7fff) {
        return 0x8000000000000003;
    }
    if (arg2 != 0) {
        *arg2 = (uVar2 & 0xffff) << 0xc;
    }
    if (arg3 != 0) {
        *arg3 = (uVar2 | 0xfff0) >> 4;
    }
    return 0;
}


/* fcn.000196cc @ 0x196cc */

void fcn.000196cc(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint uVar1;
    int64_t iVar2;
    int16_t iVar3;
    int iVar4;
    uint *arg2_00;
    uint64_t uVar5;
    int64_t iVar6;
    uint16_t uVar7;
    uint32_t uVar8;
    uint auStack_28 [4];
    
    if ((*0xc00fd010 & 0xfffff000) == *0x1b288) {
        iVar6 = 0;
        if (arg4 == '\x01') {
            arg2_00 = auStack_28;
            iVar2 = fcn.00018b78(arg1,arg2_00);
            if (iVar2 < 0) {
                return;
            }
        }
        else {
            arg2_00 = arg2;
            auStack_28[0] = arg1;
        }
        uVar1 = auStack_28[0];
        uVar7 = 0x100 - (auStack_28[0] & 0xff);
        uVar8 = uVar7;
        if (0x40 < uVar7) {
            uVar8 = 0x40;
        }
        if (*arg3 < uVar8) {
            uVar8 = *arg3;
        }
        fcn.00018910(CONCAT71(arg1 >> 8,1),CONCAT71(arg2_00 >> 8,1));
        uVar7 = uVar8;
        iVar4 = (uVar8 & 0xffff) * 0x100;
        *(*0x1b288 + 8) = uVar1;
        iVar3 = iVar4 + -0xff;
        *(*0x1b288 + 6) = iVar3;
        fcn.00018910(CONCAT71(CONCAT22(iVar4 >> 0x10,iVar3) >> 8,1),0);
        if (uVar7 != 0) {
            uVar5 = uVar7;
            do {
                *(iVar6 + arg2) = *(iVar6 + 0x10 + *0x1b288);
                iVar6 = iVar6 + 1;
                uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
        }
        *arg3 = *arg3 - uVar7;
    }
    return;
}


/* fcn.000112b0 @ 0x112b0 */

int64_t fcn.000112b0(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.000187f8 @ 0x187f8 */

ulong fcn.000187f8(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int iVar5;
    uint32_t auStackX_10 [2];
    int64_t in_stack_00000028;
    int64_t iStack_28;
    int64_t iStack_20;
    uchar auStack_18 [16];
    
    auStackX_10[0] = arg1;
    uVar4 = arg2 & 0xffffffff;
    if ((*0xc00fd010 & 0xfffff000) == *0x1b288) {
        uVar3 = 0;
        iVar5 = 0xff0a55a;
        *(*0x1b288 + 0xb4) = 0;
        if ((((*(*0x1b288 + 0xb8) == 0xff0a55a) && (iVar1 = fcn.00018774(0,&iStack_28,&iStack_20), -1 < iVar1)) &&
            (uVar2 = arg3, (arg3 & 0xffffffffU) + iStack_28 <= iStack_20 + 1U)) &&
           ((*(*0x1b288 + 0xb4) = uVar3, *(*0x1b288 + 0xb8) == iVar5 &&
            (iVar1 = fcn.00018774(1,0,auStack_18), -1 < iVar1)))) {
            auStackX_10[0] = uVar2;
            if (uVar2 != 0) {
                do {
                    fcn.000196cc((uVar3 & 0xffffffff) + (uVar4 & 0xffffffff) + iStack_28,
                                 (uVar3 & 0xffffffff) + in_stack_00000028,auStackX_10,0);
                    uVar3 = uVar2 - auStackX_10[0];
                } while (uVar2 - auStackX_10[0] < uVar2);
            }
            return 0;
        }
    }
    return 0x8000000000000002;
}


/* fcn.00017904 @ 0x17904 */

int64_t fcn.00017904(int64_t arg1,int64_t arg2)

{
    fcn.000178a4((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.00018b78 @ 0x18b78 */

ulong fcn.00018b78(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int iVar6;
    uint64_t auStackX_8 [2];
    uint64_t uStackX_18;
    ulong uStackX_20;
    
    iVar6 = arg1;
    uStackX_20 = *0x1e190;
    uStackX_18 = *0x1e1a0;
    if (*0x1e1a0 != 0) goto code_r0x00018c70;
    *(*0x1b288 + 0xb4) = 0;
    if (*(*0x1b288 + 0xb8) == 0xff0a55a) {
        iVar2 = fcn.00018774(1,&uStackX_20,&uStackX_18);
        iVar6 = arg1;
        if (iVar2 < 0) goto code_r0x00018c48;
        uVar5 = 0;
        auStackX_8[0] = 0;
        uVar4 = 0;
        do {
            *(*0x1b288 + 0xb4) = 0;
            if (*(*0x1b288 + 0xb8) == 0xff0a55a) {
                iVar2 = fcn.00018774(uVar5 & 0xffffffff,0,auStackX_8);
                if ((-1 < iVar2) && (uVar4 < auStackX_8[0])) {
                    uVar4 = auStackX_8[0];
                }
            }
            iVar6 = arg1;
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x10);
    }
    else {
code_r0x00018c48:
        uVar4 = *0x1b212 - 1U;
        uStackX_18 = *0x1b212 - 1U;
    }
    *0x1e190 = uStackX_20;
    *0x1e188 = uVar4;
    *0x1e1a0 = uStackX_18;
code_r0x00018c70:
    if (*0x1e198 != '\0') {
        iVar6 = iVar6 + (-0x1000000 - *0x1b170);
    }
    uVar1 = *0x1e1a0 + 1 + iVar6;
    if (*0x1e188 < uVar1) {
        uVar3 = 0x8000000000000002;
    }
    else {
        *arg2 = uVar1;
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.000189f8 @ 0x189f8 */

ulong fcn.000189f8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,uint32_t arg_50h)

{
    uint8_t uVar1;
    int64_t iVar2;
    char cVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t arg4_00;
    uint32_t uVar9;
    uint32_t auStackX_20 [2];
    char in_stack_00000028;
    int32_t var_48h;
    char acStack_68 [32];
    uint32_t var_40h;
    
    arg4_00 = arg4;
    uVar7 = arg3;
    uVar1 = arg4;
    uVar5 = arg3 & 0xffffffff;
    if ((((uVar1 != 0) && (*0x1e1a0 != 0)) && (*0x1e198 == '\0')) && ((*0xc00fd0dc & *0xc00f80dc & 0x10) == 0)) {
        if (in_stack_00000028 == '\x01') {
            if ((*0x1e190 + (0xffffffff - *0x1e188) <= arg1) && (arg1 <= *0x1e1a0 + (0xffffffff - *0x1e188))) {
                uVar1 = 0;
            }
        }
        else if (*0x1e190 <= arg1) {
            uVar1 = -(*0x1e1a0 < arg1) & uVar1;
        }
    }
    uVar6 = 0;
    auStackX_20[0] = uVar7;
    if (uVar7 != 0) {
        do {
            fcn.000112b0(acStack_68,0x40,0);
            uVar9 = uVar5;
            if (uVar1 == 0) {
                if (uVar9 < 0x41) {
                    uVar5 = 0;
                }
                else {
                    uVar5 = uVar9 - 0x40;
                }
                auStackX_20[0] = uVar5;
                if ((uVar9 - auStackX_20[0] != 0) && (acStack_68 != uVar6 + arg1)) {
                    fcn.00011180(acStack_68,uVar6 + arg1,uVar9 - auStackX_20[0]);
                }
            }
            else {
                arg4_00 = CONCAT31(arg4_00 >> 8,in_stack_00000028);
                fcn.000196cc(uVar6 + arg1,acStack_68,auStackX_20,arg4_00);
                uVar5 = auStackX_20[0];
            }
            uVar8 = 0;
            uVar4 = uVar5;
            if (uVar9 != uVar4) {
                iVar2 = 0;
                do {
                    if (arg2 == 0) {
                        cVar3 = -1;
                    }
                    else {
                        cVar3 = *(uVar6 + iVar2 + arg2);
                    }
                    if (acStack_68[iVar2] != cVar3) {
                        return 0;
                    }
                    uVar8 = uVar8 + 1;
                    iVar2 = iVar2 + 1;
                } while (uVar8 < uVar9 - uVar4);
            }
            uVar6 = uVar7 - uVar4;
        } while (uVar7 - uVar4 < uVar7);
    }
    return 1;
}


/* fcn.000189b4 @ 0x189b4 */

void fcn.000189b4(void)

{
    int16_t iVar1;
    
    iVar1 = 0;
    do {
        *(*0x1b288 + 6) = 0x11;
        fcn.00018910(1,0);
        if ((*(*0x1b288 + 0x10) & 1) == 0) {
            return;
        }
        iVar1 = iVar1 + 1;
    } while (iVar1 != -1);
    return;
}


/* fcn.00019a60 @ 0x19a60 */

int64_t fcn.00019a60(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t arg1_00;
    uint64_t uVar2;
    uint32_t uStackX_18;
    uint32_t auStackX_20 [2];
    
    fcn.00011250(1,0,auStackX_20,0);
    if ((uStackX_18 & 0x80000) == 0) {
        fcn.00011350();
    }
    else {
        uVar2 = auStackX_20[0] >> 5 & 0x7f8;
        arg1_00 = ~(uVar2 - 1) & arg1;
        do {
            iVar1 = fcn.00011360(arg1_00);
            arg1_00 = uVar2 + iVar1;
        } while (arg1_00 != (arg2 + -1 + uVar2 + arg1 & ~(uVar2 - 1)));
    }
    return arg1;
}


/* fcn.00019210 @ 0x19210 */

ulong fcn.00019210(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t arg2_00;
    uint64_t arg2_01;
    uint32_t uVar5;
    uint32_t uVar6;
    uint16_t uVar7;
    uint64_t arg4;
    ushort uVar8;
    ulong unaff_R15;
    uint32_t auStackX_20 [2];
    int64_t iStackY_38;
    
    arg4 = *0xc00fd010 & 0xfffff000;
    if ((arg4 == *0x1b288) && (uVar6 = arg2, (arg2 & 0xffffffffU) % *(*0x1e178 + 0x54) == 0)) {
        uVar2 = *0x1b280;
        uVar5 = 0;
        if (*0x1b280 == 1) {
            uVar2 = *(*0x1b288 + 0xc4) >> 0x1d & 0xffffff01;
            *0x1b280 = uVar2;
        }
        if (uVar6 != 0) {
            uVar8 = auStackX_20[0];
            iStackY_38 = arg1;
            do {
                if (((uVar2 != '\x01') || (iStackY_38 != 0)) || (uVar2 = 0x10000, uVar6 - uVar5 < 0x10000)) {
                    uVar2 = 0x1000;
                }
                if (arg3 == '\x01') {
                    iVar4 = fcn.00018b78(iStackY_38,auStackX_20);
                    if (iVar4 < 0) goto code_r0x0001924a;
                }
                else {
                    auStackX_20[0] = iStackY_38;
                }
                arg4 = CONCAT71(arg4 >> 8,1);
                arg2_00 = 0;
                iVar4 = iStackY_38;
                cVar1 = fcn.000189f8(iStackY_38,0,uVar2,arg4,unaff_R15);
                if (cVar1 != '\x01') {
                    uVar7 = 0;
                    do {
                        iVar4 = CONCAT71(iVar4 >> 8,1);
                        fcn.00018910(iVar4,CONCAT71(arg2_00 >> 8,1));
                        *(*0x1b288 + 8) = auStackX_20[0];
                        if (uVar2 == 0x1000) {
                            uVar8 = 7;
                        }
                        if ((*(*0x1e178 + 0x54) == 0x10000) || (uVar2 == 0x10000)) {
                            uVar8 = 9;
                        }
                        *(*0x1b288 + 6) = uVar8;
                        fcn.00018910(CONCAT71(iVar4 >> 8,1),0);
                        fcn.000189b4();
                        if ((*0x1e190 <= auStackX_20[0]) && (auStackX_20[0] <= *0x1e1a0)) {
                            if (uVar2 == 0x10000) {
                                arg2_01 = 0x10000;
                            }
                            else {
                                arg2_01 = *(*0x1e178 + 0x54);
                                if (arg2_01 == 0) goto code_r0x000193cf;
                            }
                            fcn.00019a60((auStackX_20[0] - *0x1e1a0) + 0xffffffff,arg2_01);
                        }
code_r0x000193cf:
                        arg4 = CONCAT71(arg4 >> 8,1);
                        arg2_00 = 0;
                        iVar4 = iStackY_38;
                        cVar1 = fcn.000189f8(iStackY_38,0,uVar2,arg4,unaff_R15);
                    } while ((cVar1 != '\x01') && (uVar7 = uVar7 + 1, uVar7 < 3));
                    if (cVar1 == '\0') {
                        if (uVar2 != 0x10000) {
                            return 0x8000000000000007;
                        }
                        uVar2 = 0;
                        *0x1b280 = 0;
                    }
                    else {
                        fcn.00017904(10,arg2_00);
                    }
                }
                uVar5 = uVar5 + uVar2;
                iStackY_38 = uVar2 + iStackY_38;
                if (uVar6 <= uVar5) break;
                uVar2 = *0x1b280;
            } while( true );
        }
        uVar3 = 0;
    }
    else {
code_r0x0001924a:
        uVar3 = 0x8000000000000002;
    }
    return uVar3;
}


/* fcn.00018978 @ 0x18978 */

uchar fcn.00018978(int64_t arg1)

{
    if (arg1 != 0) {
        *(*0x1b288 + 8) = arg1;
    }
    *(*0x1b288 + 6) = 0x11;
    fcn.00018910(1,0);
    return *(*0x1b288 + 0x10);
}


/* fcn.00011250 @ 0x11250 */

uint64_t fcn.00011250(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint *in_stack_00000028;
    
    iVar5 = arg1;
    if (iVar5 == 0) {
        puVar1 = cpuid_basic_info(0);
    }
    else if (iVar5 == 1) {
        puVar1 = cpuid_Version_info(1);
    }
    else if (iVar5 == 2) {
        puVar1 = cpuid_cache_tlb_info(2);
    }
    else if (iVar5 == 3) {
        puVar1 = cpuid_serial_info(3);
    }
    else if (iVar5 == 4) {
        puVar1 = cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (iVar5 == 5) {
        puVar1 = cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (iVar5 == 6) {
        puVar1 = cpuid_Thermal_Power_Management_info(6);
    }
    else if (iVar5 == 7) {
        puVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (iVar5 == 9) {
        puVar1 = cpuid_Direct_Cache_Access_info(9);
    }
    else if (iVar5 == 10) {
        puVar1 = cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (iVar5 == 0xb) {
        puVar1 = cpuid_Extended_Topology_info(0xb);
    }
    else if (iVar5 == 0xd) {
        puVar1 = cpuid_Processor_Extended_States_info(0xd);
    }
    else if (iVar5 == 0xf) {
        puVar1 = cpuid_Quality_of_Service_info(0xf);
    }
    else if (iVar5 == -0x7ffffffe) {
        puVar1 = cpuid_brand_part1_info(0x80000002);
    }
    else if (iVar5 == -0x7ffffffd) {
        puVar1 = cpuid_brand_part2_info(0x80000003);
    }
    else if (iVar5 == -0x7ffffffc) {
        puVar1 = cpuid_brand_part3_info(0x80000004);
    }
    else {
        puVar1 = cpuid(iVar5);
    }
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    if (arg4 != 0) {
        *arg4 = puVar1[3];
    }
    if (arg2 != 0) {
        *arg2 = uVar2;
    }
    if (arg3 != 0) {
        *arg3 = uVar3;
    }
    if (in_stack_00000028 != NULL) {
        *in_stack_00000028 = uVar4;
    }
    return arg1 & 0xffffffff;
}


/* fcn.00011350 @ 0x11350 */

void fcn.00011350(void)

{
    return;
}


/* fcn.00011360 @ 0x11360 */

int64_t fcn.00011360(int64_t arg1)

{
    clflush(*arg1);
    return arg1;
}


