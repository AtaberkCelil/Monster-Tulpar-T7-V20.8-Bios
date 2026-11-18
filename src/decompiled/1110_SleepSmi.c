// decompiled by r2ghidra: 1110_SleepSmi.pe32
// functions: 23

/* entry0 @ 0x112a0 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.00011328(arg1,arg2);
    *0x122c0 = -0x7fffffffffffffff;
    iVar1 = section..text(0x121c0);
    if (iVar1 == 0) {
        iVar1 = fcn.0001167c(arg1,arg2);
        if ((-1 < iVar1) || (*0x122c0 < 0)) {
            *0x122c0 = iVar1;
        }
        fcn.000110d0(0x121c0,-1);
    }
    iVar1 = *0x122c0;
    if (*0x122c0 < 0) {
        fcn.000118b4();
    }
    return iVar1;
}


/* fcn.00011774 @ 0x11774 */

void fcn.00011774(void)

{
    return;
}


/* fcn.00011328 @ 0x11328 */

void fcn.00011328(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    char cVar2;
    uint32_t uVar3;
    int iVar4;
    uint16_t *puVar5;
    uint32_t uVar6;
    uint64_t noname_0;
    int64_t *piVar7;
    uint16_t *puVar8;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    
    *0x12138 = *(arg2 + 0x60);
    puVar8 = NULL;
    iStackX_10 = 0;
    *0x12130 = arg2;
    uStackX_8 = arg1;
    (**(*0x12138 + 0x140))(0x12070,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x12140);
    (**(*0x12138 + 0x140))(0x120a0,0,aiStackX_18);
    uStackX_8 = 0;
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,0);
    *0x122d0 = fcn.00011884();
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,*0x122d0);
    *0x122c8 = uStackX_8 >> 5;
    fcn.000118f0();
    puVar5 = fcn.000118f0();
    do {
        uVar1 = *puVar5;
        noname_0 = uVar1;
        if (uVar1 == 0xffff) {
            puVar5 = puVar8;
code_r0x00011413:
            if (puVar5 == NULL) {
                cVar2 = fcn.00011b90();
                uVar3 = in(0x1808);
                fcn.00011190(noname_0,0x1808);
                while( true ) {
                    iVar4 = in(0x1808);
                    uVar6 = ((uVar3 & 0xffffff) + 0x16b) - iVar4;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x00011180();
                }
                fcn.00011190(uVar6,0x1808);
                if (cVar2 == '\0') {
                    fcn.000111b0();
                }
                else {
                    fcn.000111a0();
                }
code_r0x00011472:
                piVar7 = *(*0x12140 + 0xa0);
                if (*(*0x12140 + 0x98) != NULL) {
                    do {
                        if ((*0x12030 == *piVar7) && (*0x12038 == piVar7[1])) {
                            return;
                        }
                        puVar8 = puVar8 + 1;
                        piVar7 = piVar7 + 3;
                    } while (puVar8 < *(*0x12140 + 0x98));
                }
                return;
            }
            if ((*0x120b0 == *(puVar5 + 4)) && (*0x120b8 == *(puVar5 + 8))) goto code_r0x00011472;
        }
        else if (uVar1 == 4) goto code_r0x00011413;
        puVar5 = puVar5 + puVar5[1];
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
    fcn.00011774();
    *(arg1 + 0xf8) = 0;
    if ((*0x12100 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.0001167c @ 0x1167c */

int64_t fcn.0001167c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char acStackX_18 [16];
    
    acStackX_18[0] = '\0';
    if (*0x121b8 == 0) {
        *0x12198 = *(arg2 + 0x60);
        *0x121a0 = *(arg2 + 0x58);
        *0x121b8 = arg2;
    }
    iVar1 = (**(*0x12198 + 0x140))(0x120e0,0,0x121a8);
    if (((-1 < iVar1) && ((***0x121a8)(*0x121a8,acStackX_18), acStackX_18[0] != '\0')) &&
       (iVar1 = (*(*0x121a8)[1])(*0x121a8,0x12168), -1 < iVar1)) {
        iVar1 = fcn.00011ac8();
        *0x12170 = 1;
        if (iVar1 != 0) {
            *0x121a0 = iVar1;
        }
        *0x12180 = 0;
        fcn.0001195c();
        fcn.000119e4();
        *0x12180 = 1;
        iVar1 = fcn.000114e0(arg1,arg2);
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


/* fcn.000118b4 @ 0x118b4 */

void fcn.000118b4(void)

{
    char cVar1;
    
    cVar1 = fcn.00011840(*0x122d0);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x000118da. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x12140 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x000118e9. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x12138 + 0x48))(*0x122d0);
    return;
}


/* fcn.00011840 @ 0x11840 */

uint64_t fcn.00011840(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x122c8 != 0) {
        puVar2 = *0x122d0 + 8;
        in_RAX = *0x122d0;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x122c8);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00011884 @ 0x11884 */

ulong fcn.00011884(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x12140 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000118f0 @ 0x118f0 */

int64_t fcn.000118f0(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x12160 == 0) {
        *0x12160 = 0;
        if (*(*0x12130 + 0x68) != 0) {
            piVar2 = *(*0x12130 + 0x70);
            do {
                if ((*0x12060 == *piVar2) && (*0x12068 == piVar2[1])) {
                    *0x12160 = (*(*0x12130 + 0x70))[uVar1 * 3 + 2];
                    return *0x12160;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x12130 + 0x68));
        }
    }
    return *0x12160;
}


/* fcn.00011b90 @ 0x11b90 */

uint8_t fcn.00011b90(void)

{
    unkuint7 extraout_RAX;
    
    fcn.000111c0();
    fcn.000111b0();
    return (extraout_RAX & 0xfffffe) >> 1 & 1;
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


/* fcn.000117b4 @ 0x117b4 */

ulong fcn.000117b4(void)

{
    int64_t iVar1;
    ulong uVar2;
    
    if (*0x12150 == NULL) {
        iVar1 = (**(*0x12140 + 0xd0))(0x12000,0,0x12158);
        if ((iVar1 < 0) || (*0x12158 == NULL)) {
            *0x12150 = NULL;
        }
        else {
            *0x12150 = **0x12158;
        }
        if (*0x12150 == NULL) {
            return 0x8000000000000003;
        }
    }
    uVar2 = (**0x12150)(*0x12158,1,0x3078000,0,0x12090,0);
    return uVar2;
}


/* fcn.00011ac8 @ 0x11ac8 */

ulong fcn.00011ac8(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    if (*0x12168 != 0) {
        iVar3 = *(*0x12168 + 0xa0);
        for (iVar2 = *(*0x12168 + 0x98); iVar2 != 0; iVar2 = iVar2 + -1) {
            iVar1 = fcn.00011b14(iVar3);
            if (iVar1 == 0) {
                return *(iVar3 + 0x10);
            }
            iVar3 = iVar3 + 0x18;
        }
    }
    return 0;
}


/* fcn.0001195c @ 0x1195c */

ulong fcn.0001195c(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x12170 == '\0') {
        if (*0x12190 == 0) {
            if (*0x12180 != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x12198 + 0x140))(0x120c0,0,0x12190);
        }
    }
    else if (*0x12178 == 0) {
        if ((*0x12180 == '\0') && (*0x12168 != 0)) {
    //WARNING: Could not recover jumptable at 0x0001199b. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x12168 + 0xd0))(0x120d0,0,0x12178);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.000119e4 @ 0x119e4 */

int64_t fcn.000119e4(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    if (*0x12170 == '\0') {
        if (*0x121b0 == 0) {
            if (*0x12180 == '\x01') {
                return -0x7ffffffffffffffd;
            }
            uVar2 = (**(*0x12198 + 0x18))(0x1f);
            (**(*0x12198 + 0x20))(uVar2);
            if (0x10 < uVar2) {
                return -0x7ffffffffffffffd;
            }
            iVar1 = (**(*0x12198 + 0x140))(str.6_6v,0,0x121b0);
            if (iVar1 < 0) {
                *0x121b0 = 0;
            }
            return iVar1;
        }
    }
    else if (*0x12188 == 0) {
        if (*0x12168 == 0) {
            return -0x7ffffffffffffffd;
        }
        iVar1 = (**(*0x12168 + 0xd0))(0x12020,0,0x12188);
        if (iVar1 < 0) {
            *0x12188 = 0;
        }
        return iVar1;
    }
    return 0;
}


/* fcn.00011778 @ 0x11778 */

int64_t fcn.00011778(void)

{
    if (*0x12148 == 0) {
        (**(*0x12138 + 0x140))(0x12040,0,0x12148);
    }
    return *0x12148;
}


/* fcn.000114e0 @ 0x114e0 */

int64_t fcn.000114e0(ulong noname_0,int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    uint32_t var_20h_2;
    int64_t var_28h_2;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_bp_8h;
    
    var_2ch = 0;
    iVar2 = 0;
    var_24h = 0;
    var_1ch = 0;
    var_30h = 3;
    var_28h = 4;
    var_20h = 5;
    if (*0x121b8 == 0) {
        *0x12198 = *(arg1 + 0x60);
        *0x121a0 = *(arg1 + 0x58);
        *0x121b8 = arg1;
    }
    if ((((*0x121a8 != NULL) || (iVar2 = (**(*0x12198 + 0x140))(0x120e0,0,0x121a8), -1 < iVar2)) &&
        ((***0x121a8)(*0x121a8,&var_20h_2), var_20h_2 != '\0')) &&
       (iVar2 = (*(*0x121a8)[1])(*0x121a8,0x12168), -1 < iVar2)) {
        iVar2 = fcn.00011ac8();
        *0x12170 = 1;
        if (iVar2 != 0) {
            *0x121a0 = iVar2;
        }
        *0x12180 = 0;
        fcn.0001195c();
        iVar2 = fcn.000119e4();
        *0x12180 = 1;
    }
    if ((-1 < iVar2) && (iVar2 = (**(*0x12168 + 0xd0))(str.Y_mEK,0,&var_28h_2), -1 < iVar2)) {
        iVar2 = fcn.00011778();
        cVar1 = (**(iVar2 + 0x30))(0x12050,0x1100000);
        if (((cVar1 == '\0') || (iVar2 = (**var_28h_2)(var_28h_2,0x114bc,&var_30h,&var_18h), -1 < iVar2)) &&
           (iVar2 = (**var_28h_2)(var_28h_2,0x114cc,&var_28h,&var_10h), -1 < iVar2)) {
            iVar2 = (**var_28h_2)(var_28h_2,0x114d0,&var_20h,&var_bp_8h);
        }
    }
    return iVar2;
}


/* fcn.00011b14 @ 0x11b14 */

int64_t fcn.00011b14(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    piVar3 = 0x120f0;
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


