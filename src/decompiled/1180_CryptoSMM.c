// decompiled by r2ghidra: 1180_CryptoSMM.pe32
// functions: 146

/* entry0 @ 0x112b0 */

int64_t entry0(int64_t noname_0,int64_t arg1)

{
    int64_t iVar1;
    uint32_t arg1_00;
    
    fcn.00011328(noname_0,arg1);
    arg1_00 = 0x1eac0;
    *0x1ebc0 = -0x7fffffffffffffff;
    iVar1 = section..text(0x1eac0);
    if (iVar1 == 0) {
        iVar1 = fcn.00012234(arg1_00,arg1);
        if ((-1 < iVar1) || (*0x1ebc0 < 0)) {
            *0x1ebc0 = iVar1;
        }
        fcn.000110d0(0x1eac0,-1);
    }
    iVar1 = *0x1ebc0;
    if (*0x1ebc0 < 0) {
        fcn.000123b4();
    }
    return iVar1;
}


/* fcn.0001233c @ 0x1233c */

void fcn.0001233c(void)

{
    return;
}


/* fcn.00011328 @ 0x11328 */

void fcn.00011328(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint16_t uVar2;
    int64_t *piVar3;
    uint32_t uVar4;
    int iVar5;
    uint16_t *puVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    
    *0x1ea38 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x1ea30 = arg2;
    uStackX_8 = arg1;
    (**(*0x1ea38 + 0x140))(0x1e0d0,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x1ea40);
    (**(*0x1ea38 + 0x140))(0x1e0e0,0,&iStackX_18);
    uStackX_8 = 0;
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,0);
    *0x1ecd8 = fcn.00012384();
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,*0x1ecd8);
    *0x1ecd0 = uStackX_8 >> 5;
    fcn.000123f0();
    puVar6 = fcn.000123f0();
    do {
        uVar2 = *puVar6;
        uVar9 = uVar2;
        if (uVar2 == 0xffff) {
            puVar6 = NULL;
code_r0x00011414:
            if (puVar6 == NULL) {
                uVar7 = fcn.000111c0();
                fcn.000111b0();
                uVar4 = in(0x1808);
                fcn.00011190(uVar9,0x1808);
                while( true ) {
                    iVar5 = in(0x1808);
                    uVar8 = ((uVar4 & 0xffffff) + 0x16b) - iVar5;
                    if ((uVar8 >> 0x17 & 1) != 0) break;
                    func_0x00011180();
                }
                fcn.00011190(uVar8,0x1808);
                if ((uVar7 >> 9 & 1) == 0) {
                    fcn.000111b0();
                }
                else {
                    fcn.000111a0();
                }
code_r0x0001147d:
                *0x1eab0 = 0x10000;
                if ((*0x1eaa8 != NULL) ||
                   ((*0x1eaa8 = fcn.00012384(0x10000,0x10000), *0x1eaa8 != NULL && (0x37 < *0x1eab0)))) {
                    uVar9 = *0x1eab0;
                    piVar3 = *0x1eaa8;
                    piVar1 = *0x1eaa8 + 5;
                    iVar10 = *0x1eab0 - 0x28;
                    **0x1eaa8 = piVar1;
                    piVar3[1] = iVar10;
                    piVar3[2] = 0;
                    piVar3[3] = piVar3 + (uVar9 - 0x10);
                    piVar3[4] = piVar1;
                }
                return;
            }
            if ((*0x1e128 == *(puVar6 + 4)) && (*0x1e130 == *(puVar6 + 8))) goto code_r0x0001147d;
        }
        else if (uVar2 == 4) goto code_r0x00011414;
        puVar6 = puVar6 + puVar6[1];
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
    
    //[00] -r-x section size 53248 named .text
    fcn.0001233c();
    *(arg1 + 0xf8) = 0;
    if ((*0x1e190 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.00012234 @ 0x12234 */

void fcn.00012234(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    ulong auStackX_8 [2];
    ulong auStackX_18 [2];
    
    auStackX_8[0] = CONCAT44(in_register_0000000c,arg1);
    if (*0x1eaa0 == 0) {
        *0x1ea50 = *(arg2 + 0x60);
        *0x1ea88 = *(arg2 + 0x58);
        *0x1eaa0 = arg2;
    }
    if ((*0x1ea90 != NULL) || (iVar1 = (**(*0x1ea50 + 0x140))(0x1e158,0,0x1ea90), -1 < iVar1)) {
        (***0x1ea90)(*0x1ea90,auStackX_8);
        if ((auStackX_8[0] != '\0') && (iVar1 = (*(*0x1ea90)[1])(*0x1ea90,0x1ea58), -1 < iVar1)) {
            iVar1 = fcn.00012690();
            *0x1ea60 = 1;
            if (iVar1 != 0) {
                *0x1ea88 = iVar1;
            }
            *0x1ea70 = 0;
            fcn.00012524();
            fcn.000125ac();
            *0x1ea70 = 1;
        }
    }
    fcn.000121b4(arg2);
    auStackX_18[0] = 0;
    (**(*0x1ea58 + 0xa8))(auStackX_18,0x1e060,0,0x1e100);
    return;
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


/* fcn.000123b4 @ 0x123b4 */

void fcn.000123b4(void)

{
    char cVar1;
    
    cVar1 = fcn.00012340(*0x1ecd8);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x000123da. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x1ea40 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x000123e9. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x1ea38 + 0x48))(*0x1ecd8);
    return;
}


/* fcn.00012340 @ 0x12340 */

uint64_t fcn.00012340(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x1ecd0 != 0) {
        puVar2 = *0x1ecd8 + 8;
        in_RAX = *0x1ecd8;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x1ecd0);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00012384 @ 0x12384 */

ulong fcn.00012384(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x1ea40 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000123f0 @ 0x123f0 */

int64_t fcn.000123f0(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x1ea48 == 0) {
        *0x1ea48 = 0;
        if (*(*0x1ea30 + 0x68) != 0) {
            piVar2 = *(*0x1ea30 + 0x70);
            do {
                if ((*0x1e080 == *piVar2) && (*0x1e088 == piVar2[1])) {
                    *0x1ea48 = (*(*0x1ea30 + 0x70))[uVar1 * 3 + 2];
                    return *0x1ea48;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x1ea30 + 0x68));
        }
    }
    return *0x1ea48;
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


/* fcn.0001245c @ 0x1245c */

int64_t fcn.0001245c(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t *piVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    uint in_R8;
    int64_t iVar3;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    piVar1 = piVar2 + CONCAT44(in_R8,arg3);
    if (7 < CONCAT44(in_R8,arg3)) {
        arg1 = arg1 & 7;
        if ((arg1 != 0) && (arg1 == (arg2 & 7))) {
            iVar3 = 8 - arg1;
            for (; (iVar3 != 0 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
                arg2 = arg2 + 1;
                iVar3 = iVar3 + -1;
            }
        }
        for (; (piVar2 <= piVar1 + -1 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
            arg2 = arg2 + 8;
        }
    }
    while( true ) {
        if (piVar1 <= piVar2) {
            return 0;
        }
        if (*piVar2 != *arg2) break;
        piVar2 = piVar2 + 1;
        arg2 = arg2 + 1;
    }
    return *piVar2 - *arg2;
}


/* fcn.000183e4 @ 0x183e4 */

void fcn.000183e4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    uint32_t uStack_d0;
    uchar auStack_48 [64];
    
    uStack_118 = 0;
    uStack_110 = 0xcbbb9d5dc1059ed8;
    uStack_108 = 0x629a292a367cd507;
    uStack_100 = 0x9159015a3070dd17;
    uStack_f8 = 0x152fecd8f70e5939;
    uStack_f0 = 0x67332667ffc00b31;
    uStack_e8 = 0x8eb44a8768581511;
    uStack_e0 = 0xdb0c2e0d64f98fa7;
    uStack_d8 = 0x47b5481dbefa4fa4;
    uStack_d0 = 0;
    if (arg1 != 0) {
        arg3 = arg3 - arg2;
        do {
            fcn.00018d48(&uStack_118,*arg2,*(arg3 + arg2));
            arg2 = arg2 + 8;
            arg1 = arg1 + -1;
        } while (arg1 != 0);
    }
    if ((((arg4 != 0) && (uStack_d0 < 0x80)) && (iVar1 = fcn.00018e44(&uStack_118,auStack_48), iVar1 == 0)) &&
       (arg4 != auStack_48)) {
        fcn.000111d0(arg4,auStack_48,0x30);
    }
    return;
}


/* fcn.00018f68 @ 0x18f68 */

void fcn.00018f68(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    uint uStack_90;
    
    uStack_90 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0x6a09e667f3bcc908;
    uStack_c8 = 0xbb67ae8584caa73b;
    uStack_c0 = 0x3c6ef372fe94f82b;
    uStack_b8 = 0xa54ff53a5f1d36f1;
    uStack_b0 = 0x510e527fade682d1;
    uStack_a8 = 0x9b05688c2b3e6c1f;
    uStack_a0 = 0x1f83d9abfb41bd6b;
    uStack_98 = 0x5be0cd19137e2179;
    if (arg1 != 0) {
        arg3 = arg3 - arg2;
        do {
            fcn.00018d48(&uStack_d8,*arg2,*(arg3 + arg2));
            arg2 = arg2 + 8;
            arg1 = arg1 + -1;
        } while (arg1 != 0);
    }
    fcn.00018e44(&uStack_d8,arg4);
    return;
}


/* fcn.00016ff0 @ 0x16ff0 */

void fcn.00016ff0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uchar *puVar6;
    uchar auStackX_8 [8];
    int64_t var_30h;
    uint32_t auStack_88 [5];
    ulong uStack_74;
    uchar auStack_6c [4];
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_50h;
    int64_t var_4ch;
    int64_t var_44h;
    
    uVar3 = 0;
    auStack_88[0] = 0x67452301;
    auStack_88[1] = 0xefcdab89;
    auStack_88[2] = 0x98badcfe;
    auStack_88[3] = 0x10325476;
    auStack_88[4] = 0xc3d2e1f0;
    uStack_74 = 0;
    if (arg1 != 0) {
        arg3 = arg3 - arg2;
        do {
            fcn.00018304(auStack_88,*arg2,*(arg3 + arg2));
            arg2 = arg2 + 8;
            arg1 = arg1 + -1;
        } while (arg1 != 0);
    }
    puVar6 = auStackX_8;
    uVar5 = uVar3;
    do {
        uVar2 = uVar5;
        uVar1 = uVar5;
        uVar4 = uVar2 + 1;
        uVar5 = uVar4;
        *puVar6 = *(auStack_6c + ((-(uVar2 < 4) & 4) - 8)) >> (('\x03' - (uVar1 & 3)) * '\b' & 0x1f);
        puVar6 = puVar6 + 1;
    } while (uVar4 < 8);
    fcn.00018304(auStack_88,0x1e2e4,1);
    while ((uStack_74 & 0x1f8) != 0x1c0) {
        fcn.00018304(auStack_88,0x1e2e8,1);
    }
    fcn.00018304(auStack_88,auStackX_8,8);
    uVar5 = uVar3;
    do {
        uVar1 = uVar3;
        uVar2 = uVar3 + 1;
        uVar3 = uVar2;
        uVar1 = ('\x03' - (uVar1 & 3)) * '\b' & 0x1f;
        *arg4 = *(auStack_88 + (uVar5 & 0xfffffffffffffffc)) >> uVar1;
        arg4 = arg4 + 1;
        uVar5 = uVar5 + 1;
    } while (uVar2 < 0x14);
    uVar2 = 0 >> uVar1;
    fcn.00011250(auStack_6c,uVar2 + 0x40,uVar2);
    fcn.00011250(auStack_88,0x14,0);
    fcn.00011250(&uStack_74,8,0);
    fcn.00011250(auStackX_8,8,0);
    return;
}


/* fcn.00015120 @ 0x15120 */

void fcn.00015120(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar uVar1;
    uint uVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    uchar *puVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong uStackX_8;
    uchar auStack_a8 [8];
    uint uStack_a0;
    uint uStack_9c;
    uint uStack_98;
    uint uStack_94;
    uint uStack_90;
    uint uStack_8c;
    uint uStack_88;
    uint uStack_84;
    uint32_t uStack_80;
    uchar auStack_7c [56];
    uchar auStack_44 [12];
    
    uVar5 = 0;
    uStack_84 = 0x5be0cd19;
    uStack_80 = 0;
    auStack_a8 = 0x0;
    uStack_a0 = 0x6a09e667;
    uStack_9c = 0xbb67ae85;
    uStack_98 = 0x3c6ef372;
    iVar10 = 8;
    uStack_94 = 0xa54ff53a;
    uStack_90 = 0x510e527f;
    uStack_8c = 0x9b05688c;
    uStack_88 = 0x1f83d9ab;
    uVar9 = uVar5;
    uStackX_8 = arg1;
    if (arg1 != 0) {
        arg3 = arg3 - arg2;
        do {
            uVar7 = *(arg3 + arg2);
            puVar6 = *arg2;
            if ((uVar9 < 0x40) && (uVar7 != 0)) {
                do {
                    uVar8 = uVar9;
                    if ((uVar8 == 0) && (0x3f < uVar7)) {
                        if (auStack_7c != puVar6) {
                            fcn.000111d0(auStack_7c,puVar6,0x40);
                        }
                        iVar4 = fcn.00015388(auStack_a8,auStack_7c);
                        if (iVar4 < 0) {
code_r0x0001527e:
                            uVar9 = uStack_80;
                            break;
                        }
                        auStack_a8 = auStack_a8 + 0x200;
                        puVar6 = puVar6 + 0x40;
                        uVar9 = uStack_80;
                        uVar7 = uVar7 - 0x40;
                    }
                    else {
                        uVar3 = 0x40 - uVar8;
                        if (uVar7 < 0x40 - uVar8) {
                            uVar3 = uVar7;
                        }
                        if ((uVar3 != 0) && (auStack_7c + uVar9 != puVar6)) {
                            fcn.000111d0(auStack_7c + uVar9,puVar6,uVar3);
                            uVar8 = uStack_80;
                        }
                        uStack_80 = uVar8 + uVar3;
                        uVar9 = uStack_80;
                        puVar6 = puVar6 + uVar3;
                        uVar7 = uVar7 - uVar3;
                        if (uStack_80 == 0x40) {
                            iVar4 = fcn.00015388(auStack_a8,auStack_7c);
                            if (iVar4 < 0) goto code_r0x0001527e;
                            auStack_a8 = auStack_a8 + 0x200;
                            uVar9 = 0;
                            uStack_80 = 0;
                        }
                    }
                } while (uVar7 != 0);
            }
            arg2 = arg2 + 8;
            uStackX_8 = uStackX_8 + -1;
        } while (uStackX_8 != 0);
        uStackX_8 = 0;
        if (0x3f < uVar9) goto code_r0x0001535a;
        uStackX_8 = 0;
    }
    auStack_a8 = auStack_a8 + (uVar9 << 3);
    auStack_7c[uVar9] = 0x80;
    uStack_80 = uStack_80 + 1;
    uVar9 = uStack_80;
    if (uStack_80 < 0x39) goto code_r0x000152fb;
    while (uVar9 < 0x40) {
        auStack_7c[uVar9] = 0;
        uStack_80 = uStack_80 + 1;
        uVar9 = uStack_80;
    }
    fcn.00015388(auStack_a8,auStack_7c);
    uVar9 = uVar5;
    while( true ) {
        uStack_80 = uVar9;
code_r0x000152fb:
        if (0x37 < uStack_80) break;
        auStack_7c[uVar9] = 0;
        uVar9 = uStack_80 + 1;
    }
    puVar6 = &uStackX_8 + 7;
    uStackX_8 = auStack_a8;
    do {
        uVar1 = *puVar6;
        puVar6 = puVar6 + -1;
        auStack_44[uVar5] = uVar1;
        uVar5 = uVar5 + 1;
    } while (uVar5 < 8);
    fcn.00015388(auStack_a8,auStack_7c);
    puVar6 = arg4 + 2;
    do {
        uVar2 = *(puVar6 + auStack_a8 + (6 - arg4));
        puVar6[-2] = uVar2 >> 0x18;
        puVar6[-1] = uVar2 >> 0x10;
        *puVar6 = uVar2 >> 8;
        puVar6[1] = uVar2;
        puVar6 = puVar6 + 4;
        iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
code_r0x0001535a:
    fcn.00011250(auStack_a8,0x70,0);
    return;
}


/* fcn.000191d0 @ 0x191d0 */

void fcn.000191d0(void)

{
    int64_t *piVar1;
    int64_t iVar2;
    
    piVar1 = *0x1eaa8;
    if (*0x1eaa8 != NULL) {
        if ((*0x1eaa8)[1] != 0) {
            fcn.00011250(**0x1eaa8,(*0x1eaa8)[1],0);
        }
        piVar1[2] = piVar1[3];
        *piVar1[3] = *piVar1;
        iVar2 = 0;
        do {
            *(iVar2 + 8 + piVar1[2]) = 0;
            iVar2 = iVar2 + 1;
        } while (iVar2 < 2);
        piVar1[4] = *piVar1;
    }
    return;
}


/* fcn.00013c24 @ 0x13c24 */

//WARNING: Variable defined which should be unmapped: var_bp_29h
//WARNING: Variable defined which should be unmapped: var_31h
//WARNING: Variable defined which should be unmapped: var_39h

int64_t fcn.00013c24(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int iVar2;
    int iVar3;
    int64_t arg1_00;
    int64_t *piVar4;
    uint8_t *puVar5;
    uint8_t *puVar6;
    uint32_t arg2_00;
    uint64_t uVar7;
    uint8_t *puVar8;
    uint32_t uVar9;
    uint8_t *puVar10;
    int64_t iVar11;
    int64_t *piVar12;
    bool bVar13;
    uint8_t *puStackX_20;
    uint32_t var_77h;
    int64_t var_7fh;
    uint8_t *puStack_f8;
    char cStack_ef;
    int iStack_ec;
    uint32_t uStack_e8;
    uint8_t *puStack_e0;
    int64_t *piStack_d8;
    uchar auStack_d0 [40];
    int iStack_a8;
    int iStack_a4;
    int iStack_a0;
    int iStack_9c;
    int iStack_98;
    int iStack_94;
    int iStack_90;
    int iStack_8c;
    int iStack_88;
    uchar auStack_84 [3];
    int64_t var_79h;
    int64_t var_71h;
    uchar auStack_58 [7];
    uint32_t var_49h;
    uint32_t var_45h;
    uint32_t var_41h;
    uint32_t var_3dh;
    uint32_t var_39h;
    uint32_t var_35h;
    uint32_t var_31h;
    uint32_t var_2dh;
    uint32_t var_bp_29h;
    uint32_t var_25h;
    
    uVar9 = 0;
    piStack_d8 = NULL;
    bVar13 = false;
    arg1_00 = fcn.00019058(0x120);
    if (arg1_00 == 0) {
        return 0;
    }
    fcn.00011250(arg1_00,0x120,0);
    *(arg1_00 + 0xf0) = arg1;
    *(arg1_00 + 0xf8) = arg2;
    puVar8 = arg1 + arg2;
    iVar2 = fcn.0001c80c(arg1,arg2,&puStack_f8);
    puVar6 = puStack_f8;
    if (iVar2 < 0) {
        return 0;
    }
    if (cStack_ef != '\0') {
        return 0;
    }
    if (iStack_ec != 0x10) {
        return 0;
    }
    puVar5 = puStack_f8 + uStack_e8;
    puStack_e0 = puStack_f8;
    if (puVar8 < puVar5) {
        return 0;
    }
    puVar10 = puVar8;
    if (puVar5 < puVar8) {
        puVar10 = puVar5;
    }
    iVar2 = puVar10;
    iVar3 = fcn.0001c80c(puStack_f8,iVar2 - puStack_f8,auStack_d0);
    if (iVar3 < 0) {
        iVar3 = -1;
    }
    else {
        iVar3 = fcn.0001c9dc(&iStack_a8,&puStack_e0,auStack_d0);
        puVar6 = puStack_e0;
    }
    if ((((iVar3 == 0) && (iVar3 = fcn.00016870(&iStack_a8), iVar3 != 0)) && (_auStack_58 == 7)) &&
       ((iStack_94 == 7 && (iStack_90 == 2)))) {
        bVar13 = true;
        iVar2 = fcn.0001c80c(puVar6,iVar2 - puVar6,&puStack_f8);
        if (iVar2 < 0) {
            return 0;
        }
        if (cStack_ef != '\x02') {
            return 0;
        }
        iVar2 = fcn.0001c80c(puStack_f8,uStack_e8,&puStack_f8);
        if (iVar2 < 0) {
            return 0;
        }
        if (cStack_ef != '\0') {
            return 0;
        }
        if (iStack_ec != 0x10) {
            return 0;
        }
        iVar2 = uStack_e8 + puStack_f8;
        puVar6 = puStack_f8;
    }
    iVar3 = fcn.0001c80c(puVar6,iVar2 - puVar6,&puStack_f8);
    if (iVar3 < 0) {
        return 0;
    }
    if (cStack_ef != '\0') {
        return 0;
    }
    if (iStack_ec != 2) {
        return 0;
    }
    puVar6 = puStack_f8;
    for (uVar7 = uStack_e8; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        uVar9 = uVar9 << 8 | uVar1;
    }
    iVar3 = fcn.0001c80c(puVar6,iVar2 - puVar6,&puStack_f8);
    if (iVar3 < 0) {
        return 0;
    }
    if (cStack_ef != '\0') {
        return 0;
    }
    if (iStack_ec != 0x11) {
        return 0;
    }
    puVar5 = puStack_f8 + uStack_e8;
    iVar3 = fcn.0001c80c(puStack_f8,puVar5 - puStack_f8,&puStack_f8);
    puVar6 = puStack_f8;
    if (iVar3 < 0) {
        return 0;
    }
    if (cStack_ef != '\0') {
        return 0;
    }
    if (iStack_ec != 0x10) {
        return 0;
    }
    puVar10 = puStack_f8 + uStack_e8;
    puStackX_20 = puStack_f8;
    iVar3 = fcn.0001c80c(puStack_f8,puVar10 - puStack_f8,auStack_d0);
    if (iVar3 < 0) {
        iVar3 = -1;
    }
    else {
        iVar3 = fcn.0001c9dc(arg1_00 + 0x68,&puStackX_20,auStack_d0);
        puVar6 = puStackX_20;
    }
    if (iVar3 != 0) {
        return 0;
    }
    iVar11 = arg1_00 + 0x68;
    iVar3 = fcn.000168a8(iVar11);
    if (((iVar3 == 0) && ((iVar3 = fcn.000168dc(iVar11), iVar3 == 0 || (*(iVar11 + 0x20) != 1)))) &&
       ((iVar3 = fcn.000168dc(iVar11), iVar3 == 0 || (*(iVar11 + 0x20) != 2)))) {
        iVar3 = fcn.000168dc(iVar11);
        if (iVar3 == 0) {
            return 0;
        }
        if (*(iVar11 + 0x20) != 3) {
            return 0;
        }
    }
    iVar11 = puVar10 - puVar6;
    if (iVar11 != 0) {
        iVar3 = fcn.0001c80c(puVar6,iVar11,&puStack_f8);
        if (iVar3 < 0) {
            return 0;
        }
        if (cStack_ef != '\0') {
            return 0;
        }
        if (iStack_ec != 5) {
            return 0;
        }
        puVar5 = puStack_f8;
    }
    iVar2 = fcn.0001c80c(puVar5,iVar2 - puVar5,&puStack_f8);
    puVar6 = puStack_f8;
    if ((((iVar2 < 0) || (cStack_ef != '\0')) || (iStack_ec != 0x10)) && (bVar13)) {
        return 0;
    }
    puVar5 = puStack_f8 + uStack_e8;
    puStackX_20 = puStack_f8;
    iVar2 = puVar5;
    arg2_00 = iVar2 - puStack_f8;
    iVar3 = fcn.0001c80c(puStack_f8,arg2_00,auStack_d0);
    if (iVar3 < 0) {
        iVar3 = -1;
    }
    else {
        iVar3 = fcn.0001c9dc(&iStack_a8,&puStack_e0,auStack_d0);
    }
    if (iVar3 != 0) {
        return 0;
    }
    iVar3 = fcn.0001c80c(puVar6,arg2_00,auStack_d0);
    if (-1 < iVar3) {
        fcn.0001c9dc(arg1_00,&puStackX_20,auStack_d0);
        puVar6 = puStackX_20;
    }
    iVar3 = fcn.00016870(&iStack_a8);
    if ((iVar3 == 0) || (_auStack_58 != 7)) {
        if (6 < _auStack_58) goto code_r0x0001400d;
code_r0x0001406b:
        if (((((iVar3 == 0) || (_auStack_58 != 9)) || (iStack_94 != 9)) || ((iStack_90 != 0x10 || (iStack_8c != 1)))) ||
           (iStack_88 != 4)) {
            iVar3 = fcn.0001c80c(puVar6,iVar2 - puVar6,&puStack_f8);
            if (iVar3 < 0) {
                return 0;
            }
            if (cStack_ef != '\x02') {
                return 0;
            }
            iVar3 = fcn.0001c80c(puStack_f8,iVar2 - puStack_f8,&puStack_f8);
            if (iVar3 < 0) {
                return 0;
            }
            if (cStack_ef != '\0') {
                return 0;
            }
            if (iStack_ec != 0x10) {
                return 0;
            }
            *(arg1_00 + 0x58) = puStack_f8;
            *(arg1_00 + 0x60) = uStack_e8;
            goto code_r0x00014112;
        }
        if (uVar9 != 3) {
            return 0;
        }
        iVar3 = fcn.000137cc(puVar6,iVar2 - puVar6,arg1_00);
code_r0x00014067:
        bVar13 = iVar3 == 0;
    }
    else {
        if ((iStack_94 != 7) || (iStack_90 != 1)) {
code_r0x0001400d:
            if (((((iStack_a8 != 1) || (((iStack_a4 != 3 || (iStack_a0 != 6)) || (iStack_9c != 1)))) ||
                 (((iStack_98 != 4 || (iStack_94 != 1)) || (_auStack_58 != 10)))) ||
                ((iStack_90 != 0x137 || (iStack_8c != 2)))) || ((iStack_88 != 1 || (_auStack_84 != 4))))
            goto code_r0x0001406b;
            if (uVar9 != 1) {
                return 0;
            }
            iVar3 = fcn.00013610(puVar6,puVar5 - puVar6,arg1_00);
            goto code_r0x00014067;
        }
        bVar13 = uVar9 == 1;
    }
    if (!bVar13) {
        return 0;
    }
code_r0x00014112:
    iVar2 = fcn.0001c80c(puVar5,puVar8 - iVar2,&puStack_f8);
    puVar6 = puStack_f8;
    if ((-1 < iVar2) && (cStack_ef == '\x02')) {
        puVar5 = puStack_f8 + uStack_e8;
        iVar2 = fcn.0001c80c(puStack_f8,puVar8 - puStack_f8,&puStack_f8);
        if (-1 < iVar2) {
            piVar12 = 0;
            do {
                if (cStack_ef == '\x02') {
                    puVar6 = puVar8;
                    if (iStack_ec != 1) {
                        return 0;
                    }
                }
                else {
                    if (cStack_ef != '\0') {
                        return 0;
                    }
                    if (iStack_ec != 0x10) {
                        return 0;
                    }
                    puVar8 = puStack_f8 + uStack_e8;
                    piVar4 = fcn.0001691c(puVar6,puVar8 - puVar6);
                    if (piVar4 == NULL) {
                        return 0;
                    }
                    if (piVar12 == NULL) {
                        piVar12 = piVar4;
                    }
                    else if (piStack_d8 != NULL) {
                        *piStack_d8 = piVar4;
                    }
                    puVar6 = puVar8;
                    piStack_d8 = piVar4;
                }
                if (puVar5 <= puVar6) {
                    *(arg1_00 + 0xd8) = piVar12;
                    iVar2 = fcn.0001c80c(puVar6,(arg1 - puVar6) + arg2,&puStack_f8);
                    if (iVar2 < 0) {
                        return 0;
                    }
                    if (cStack_ef != '\0') {
                        return 0;
                    }
                    if (iStack_ec != 0x11) {
                        return 0;
                    }
                    iVar2 = fcn.00013560(puStack_f8,uStack_e8,arg1_00);
                    if (iVar2 != 0) {
                        arg1_00 = 0;
                    }
                    return arg1_00;
                }
                iVar2 = fcn.0001c80c(puVar6,puVar5 - puVar6,&puStack_f8);
                puVar8 = puVar5;
            } while (-1 < iVar2);
        }
    }
    return 0;
}


/* fcn.00014630 @ 0x14630 */

ulong fcn.00014630(int *noname_0,int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    
    if ((arg2 == 0) || (arg1 == 0)) {
code_r0x000146d7:
        uVar2 = 0xffffffff;
    }
    else {
        iVar1 = fcn.000168a8(noname_0);
        if (iVar1 == 0) {
            iVar1 = fcn.000168dc(noname_0);
            if (iVar1 == 0) {
code_r0x000146a2:
                if (((*(noname_0 + 0x14) < 5) || (((*(noname_0 + 0x14) < 4 || (*noname_0 != 1)) || (noname_0[1] != 2))))
                   || (((noname_0[2] != 0x348 || (noname_0[3] != 0x1bb8d)) || (noname_0[4] != 2))))
                goto code_r0x000146d7;
            }
            else if (noname_0[8] == 1) {
                *arg1 = 1;
                *arg2 = 0x20;
            }
            else {
                if (iVar1 == 0) goto code_r0x000146a2;
                if (noname_0[8] == 2) {
                    *arg1 = 2;
                    *arg2 = 0x30;
                }
                else {
                    if ((iVar1 == 0) || (noname_0[8] != 3)) goto code_r0x000146a2;
                    *arg1 = 3;
                    *arg2 = 0x40;
                }
            }
        }
        else {
            *arg1 = 0;
            *arg2 = 0x14;
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001691c @ 0x1691c */

int64_t fcn.0001691c(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    int iVar2;
    int64_t arg1_00;
    char *pcVar3;
    char *pcVar4;
    int64_t arg2_00;
    char *apcStackX_18 [2];
    int64_t var_30h_2;
    char *pcStack_48;
    char cStack_3f;
    int iStack_3c;
    int64_t var_30h;
    uchar uStack_30;
    uint32_t var_27h;
    uint32_t var_20h;
    int64_t var_18h;
    
    arg1_00 = fcn.00019058(0x440);
    fcn.00011250(arg1_00,0x440,0);
    if (arg1_00 != 0) {
        *(arg1_00 + 0x418) = arg1;
        pcVar4 = arg1 + arg2;
        iVar2 = fcn.0001c80c(arg1,arg2,&pcStack_48);
        pcVar1 = pcStack_48;
        if (((-1 < iVar2) && (cStack_3f == '\0')) && (iStack_3c == 0x10)) {
            apcStackX_18[0] = pcStack_48;
            *(arg1_00 + 0x420) = pcStack_48 + (var_30h - arg1);
            pcVar3 = pcStack_48 + var_30h;
            if (pcVar3 <= pcVar4) {
                if (pcVar3 < pcVar4) {
                    pcVar4 = pcVar3;
                }
                *(arg1_00 + 0x428) = pcStack_48 + (*(arg1_00 + 0x418) - arg1);
                iVar2 = fcn.0001656c(pcStack_48,pcVar4 - pcStack_48,arg1_00,apcStackX_18);
                pcVar3 = apcStackX_18[0];
                if (iVar2 == 0) {
                    arg2_00 = pcVar4 - apcStackX_18[0];
                    *(arg1_00 + 0x430) = apcStackX_18[0] - pcVar1;
                    iVar2 = fcn.0001c80c(apcStackX_18[0],arg2_00,&uStack_30);
                    if (iVar2 < 0) {
                        iVar2 = -1;
                    }
                    else {
                        iVar2 = fcn.000159bc(pcVar3,arg2_00,arg1_00 + 0x398,apcStackX_18);
                        pcVar3 = apcStackX_18[0];
                    }
                    if ((((iVar2 == 0) && (iVar2 = fcn.0001c80c(pcVar3,pcVar4 - pcVar3,&pcStack_48), -1 < iVar2)) &&
                        ((cStack_3f == '\0' && ((iStack_3c == 3 && (var_30h != 0)))))) && (*pcStack_48 == '\0')) {
                        *(arg1_00 + 0x3f0) = pcStack_48 + 1;
                        *(arg1_00 + 0x3f8) = var_30h - 1;
                        return arg1_00;
                    }
                }
            }
        }
    }
    return 0;
}


/* fcn.00016ec0 @ 0x16ec0 */

//WARNING: Variable defined which should be unmapped: var_1h

ulong fcn.00016ec0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    int iVar2;
    int64_t arg1_00;
    int64_t *arg1_01;
    uint32_t uVar3;
    uchar auStackX_10 [8];
    int32_t var_1h;
    
    bVar1 = false;
    *arg3 = 0;
    fcn.0001cc8c(auStackX_10);
    uVar3 = 0;
    if (arg2 != 0) {
        do {
            if (!bVar1) {
                if (*arg2 != 0) {
                    iVar2 = fcn.000158fc(arg2 + 0x88,*arg2 + 0x1d8);
                    if (iVar2 != 0) {
                        *arg3 = 5;
                        return 0xffffffff;
                    }
                    arg1_00 = *arg2;
                    iVar2 = fcn.00016e88(arg1_00);
                    if ((iVar2 < 0) ||
                       ((((*(arg1_00 + 0x400) & 2) != 0 && (*(arg1_00 + 0x408) < uVar3)) ||
                        (iVar2 = fcn.00016aa8(arg1_00,arg2), iVar2 < 0)))) goto code_r0x00016fc1;
                }
                arg1_01 = arg1;
                if (arg1 != 0) {
                    do {
                        iVar2 = fcn.000158fc(arg2 + 0x88,arg1_01 + 0x3b);
                        if (iVar2 == 0) break;
                        arg1_01 = *arg1_01;
                    } while (arg1_01 != NULL);
                    if (arg1_01 != NULL) {
                        iVar2 = fcn.00016aa8(arg1_01,arg2);
                        if (iVar2 < 0) {
code_r0x00016fc1:
                            *arg3 = 1;
                            return 0xffffffff;
                        }
                        *(arg2 + 0x438) = *(arg2 + 0x438) | 4;
                        bVar1 = true;
                    }
                }
            }
            arg2 = *arg2;
            uVar3 = uVar3 + 1;
        } while (arg2 != NULL);
        if (bVar1) {
            return 0;
        }
    }
    if (arg1 == 0) {
        return 0;
    }
    *arg3 = 6;
    return 0xffffffff;
}


/* fcn.00015e9c @ 0x15e9c */

void fcn.00015e9c(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uchar *puVar1;
    int iVar2;
    uint in_register_0000000c;
    int *piVar3;
    uchar *arg1_00;
    int *piVar4;
    char *arg4;
    uint64_t uVar5;
    
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    if (arg3 != 0) {
        uVar5 = 0;
        puVar1 = arg2 + arg3;
        arg1_00 = arg2;
        if (*(piVar3 + 0x50) != 0) {
            piVar4 = piVar3;
            do {
                iVar2 = *piVar4;
                if (iVar2 == 0) {
                    arg4 = "[N/A]";
                }
                else if (iVar2 == 1) {
                    arg4 = 0x1e2a8;
                }
                else if (iVar2 == 2) {
                    arg4 = 0x1e2ac;
                }
                else if (iVar2 == 3) {
                    arg4 = 0x1e2b0;
                }
                else if (iVar2 == 4) {
                    arg4 = 0x1e2b4;
                }
                else if (iVar2 == 5) {
                    arg4 = 0x1e2b8;
                }
                else if (iVar2 == 6) {
                    arg4 = 0x1e2bc;
                }
                else if (iVar2 == 7) {
                    arg4 = 0x1e2c0;
                }
                else {
                    arg4 = 0x1e2c4;
                }
                iVar2 = fcn.0001c7d0(arg1_00,puVar1 - arg1_00,0x1e2c8,arg4);
                if ((iVar2 < 0) || (puVar1 - arg1_00 <= iVar2)) goto code_r0x00015fee;
                arg1_00 = arg1_00 + iVar2;
                uVar5 = uVar5 + 1;
                piVar4 = piVar4 + 4;
            } while (uVar5 < *(piVar3 + 0x50));
        }
        if (((arg2 + 1 < arg1_00) && (arg1_00[-1] == ' ')) && (arg1_00[-2] == ',')) {
            arg1_00[-1] = 0;
            arg1_00 = arg1_00 + -2;
            *arg1_00 = 0;
        }
        if (*(piVar3 + 0x52) != 0) {
            iVar2 = fcn.0001c7d0(arg1_00,puVar1 - arg1_00,0x1e2d0,*(piVar3 + 0x52));
            if ((-1 < iVar2) && (iVar2 < puVar1 - arg1_00)) {
                arg1_00 = arg1_00 + iVar2;
            }
        }
code_r0x00015fee:
        if (arg1_00 < puVar1) {
            *arg1_00 = 0;
        }
        puVar1[-1] = 0;
    }
    return;
}


/* fcn.0001c7d0 @ 0x1c7d0 */

ulong fcn.0001c7d0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    if (((arg1 == 0) || (arg3 == 0)) || (arg2 == 0)) {
        uVar1 = 0;
    }
    else {
        uVar1 = fcn.0001cd3c(arg1,arg2,0,arg3,in_stack_00000038,in_stack_00000040);
    }
    return uVar1;
}


/* fcn.00014fc8 @ 0x14fc8 */

uint fcn.00014fc8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    char cVar2;
    int iVar3;
    uint32_t uVar4;
    char *arg1_00;
    uint uVar5;
    char *pcVar6;
    char *pcVar7;
    uint64_t arg3_00;
    int64_t *piVar8;
    
    iVar1 = *0x1ebc8;
    if (((*0x1ebc8 == 0) || (arg3 == 0)) || (arg4 == 0)) {
        uVar5 = 0xffffffff;
    }
    else {
        iVar3 = fcn.000142cc(*0x1ebc8,0,0,0);
        uVar5 = 0xffffffff;
        if (iVar3 != -1) {
            piVar8 = *(iVar1 + 0xd8);
            pcVar6 = NULL;
            pcVar7 = NULL;
            uVar4 = 1;
            cVar2 = '\x01';
            uVar5 = 0xffffffff;
            if (piVar8 != NULL) {
                do {
                    if (arg2 == '\0') {
                        if (piVar8[1] == 0) goto code_r0x00015069;
                    }
                    else if (piVar8[1] != 0) {
code_r0x00015069:
                        arg3_00 = uVar4;
                        arg1_00 = fcn.00019058(uVar4 + 0xc);
                        pcVar7 = pcVar6;
                        uVar5 = 0xffffffff;
                        if (arg1_00 == NULL) goto code_r0x000150ed;
                        if (pcVar6 != NULL) {
                            if ((uVar4 != 0) && (arg1_00 != pcVar6)) {
                                fcn.000111d0(arg1_00,pcVar6,arg3_00);
                            }
                            fcn.0001913c(pcVar6);
                            pcVar7 = NULL;
                        }
                        *(arg1_00 + arg3_00) = piVar8[0x84];
                        *(arg1_00 + arg3_00 + 4) = piVar8[0x83];
                        *arg1_00 = cVar2;
                        cVar2 = cVar2 + '\x01';
                        pcVar6 = arg1_00;
                        uVar4 = uVar4 + 0xc;
                    }
                    piVar8 = *piVar8;
                } while (piVar8 != NULL);
                uVar5 = 0xffffffff;
                if (pcVar6 != NULL) {
                    uVar5 = 0;
                    *arg3 = pcVar6;
                    *arg4 = uVar4;
                }
code_r0x000150ed:
                if (pcVar7 != NULL) {
                    fcn.0001913c(pcVar7);
                }
            }
        }
    }
    return uVar5;
}


/* fcn.0001dca0 @ 0x1dca0 */

int64_t fcn.0001dca0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00014f3c @ 0x14f3c */

void fcn.00014f3c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    ulong *in_stack_00000028;
    
    iVar1 = 0;
    if (*(arg1 + 0x100) == 0) {
        iVar1 = fcn.000142cc(arg1,0,0,0);
    }
    *arg3 = *(arg1 + 0x108);
    *in_stack_00000028 = *(arg1 + 0x118);
    if (iVar1 == 0) {
        *arg2 = *(arg1 + 0x100);
        *arg4 = *(arg1 + 0x110);
    }
    return;
}


/* fcn.00014e90 @ 0x14e90 */

ulong fcn.00014e90(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iStack_28;
    char cStack_1f;
    int iStack_1c;
    uint32_t uStack_18;
    
    if ((((((arg1 != 0) && (arg2 != 0)) && (arg3 != 0)) &&
         ((iVar1 = fcn.0001c80c(*(arg1 + 0x388),*(arg1 + 0x390),&iStack_28), -1 < iVar1 && (cStack_1f == '\0')))) &&
        ((iStack_1c == 0x10 &&
         ((iVar1 = fcn.0001c80c(iStack_28,uStack_18,&iStack_28), -1 < iVar1 && (cStack_1f == '\0')))))) &&
       (iStack_1c == 2)) {
        *arg2 = iStack_28;
        *arg3 = uStack_18;
        if (**arg2 == '\0') {
            if ((uStack_18 & 1) == 0) {
                return 0xffffffff;
            }
            *arg2 = *arg2 + 1;
            *arg3 = *arg3 + -1;
        }
        return 0;
    }
    return 0xffffffff;
}


/* fcn.000142cc @ 0x142cc */

ulong fcn.000142cc(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    bool bVar1;
    int *piVar2;
    int iVar3;
    int64_t *arg2_00;
    int64_t iVar4;
    unkbyte7 Var5;
    int64_t *arg1_00;
    int64_t *arg1_01;
    int64_t *arg2_01;
    uint in_R8;
    int64_t *piVar6;
    int64_t *piVar7;
    int iStack0000000000000028;
    uint uStack000000000000002c;
    uchar auStack_68 [64];
    
    piVar2 = _iStack0000000000000028;
    piVar6 = CONCAT44(in_R8,arg3);
    bVar1 = false;
    if (_iStack0000000000000028 == NULL) {
        return 0xffffffff;
    }
    if (arg1 != 0) {
        if (piVar6 == NULL) {
            if ((arg4 != 0) && (*arg4 == 0)) {
                return 0xffffffff;
            }
        }
        else if (arg4 != 0) {
            return 0xffffffff;
        }
        if ((arg2 != '\0') && (arg1 = *(arg1 + 0xe8), arg1 == 0)) {
            return 0xffffffff;
        }
        arg2_00 = fcn.00014248(arg1);
        if (arg2_00 != NULL) {
            arg2_00[1] = arg2_00;
            arg1_00 = &stack0x00000028;
            *(arg1 + 0x110) = arg2_00[0x83];
            *(arg1 + 0x118) = arg2_00[0x84];
            fcn.0001cc8c(arg1_00);
            iVar3 = 0;
            if (*piVar2 == -1) {
                iVar3 = 3;
            }
            *piVar2 = iVar3;
            do {
                for (arg2_01 = *(arg1 + 0xd8); arg2_01 != NULL; arg2_01 = *arg2_01) {
                    iVar3 = 0;
                    _iStack0000000000000028 = _iStack0000000000000028 & 0xffffffff00000000;
                    if ((arg2_00 == arg2_01) || (*piVar2 == 3)) {
code_r0x0001441b:
                        if (arg4 == 0) {
                            arg1_00 = piVar6;
                            arg1_01 = piVar6;
                            if (piVar6 != NULL) {
                                while (iVar3 == 0) {
code_r0x000144fb:
                                    arg1_00 = arg2_00 + 0x3b;
                                    iVar3 = fcn.000158fc(arg1_00,arg1_01 + 0x3b);
                                    if (iVar3 == 0) {
                                        piVar7 = arg2_00;
                                        goto code_r0x00014542;
                                    }
                                    arg1_00 = arg2_01 + 0x11;
                                    iVar3 = fcn.000158fc(arg1_00,arg1_01 + 0x3b);
                                    piVar7 = NULL;
                                    if (iVar3 == 0) goto code_r0x00014542;
                                    arg1_01 = *arg1_01;
                                    if (arg1_01 == NULL) goto code_r0x00014547;
                                    iVar3 = iStack0000000000000028;
                                }
                                arg1_00 = arg2_01 + 0x3b;
                                iVar3 = fcn.000158fc(arg1_00,arg1_01 + 0x3b);
                                if (iVar3 != 0) goto code_r0x000144fb;
                                piVar7 = arg2_01;
code_r0x00014542:
                                if (arg1_01 != NULL) {
                                    if ((piVar7 != NULL) && (piVar7[0x83] != arg1_01[0x83])) {
                                        arg1_00 = piVar7[0x85];
                                        if ((arg1_01[0x86] == 0) || (arg1_00 == arg1_01[0x85])) {
                                            iVar4 = 0;
                                        }
                                        else {
                                            iVar4 = fcn.00011230(arg1_00,arg1_01[0x85],arg1_01[0x86]);
                                        }
                                        if (iVar4 == 0) goto code_r0x000144bd;
                                    }
                                    iVar3 = fcn.00016aa8(arg1_01,arg2_01);
                                    arg1_00 = arg1_01;
                                    if (-1 < iVar3) goto code_r0x000144bd;
                                    goto code_r0x000145ba;
                                }
                            }
code_r0x00014547:
                            if (iStack0000000000000028 != 0) {
                                arg2_00 = arg2_01;
                            }
                        }
                        else {
                            _iStack0000000000000028 = *(arg4 + 8);
                            Var5 = arg1_00 >> 8;
                            if (_iStack0000000000000028 == 0x20) {
                                arg1_00 = CONCAT71(Var5,1);
                            }
                            else if (_iStack0000000000000028 == 0x30) {
                                arg1_00 = CONCAT71(Var5,2);
                            }
                            else {
                                if (_iStack0000000000000028 != 0x40) {
                                    return 0xffffffff;
                                }
                                arg1_00 = CONCAT71(Var5,3);
                            }
                            iVar3 = fcn.000146e0(arg1_00,arg2_01 + 0x85,arg2_01 + 0x86,auStack_68);
                            if (iVar3 != 0) {
                                return 0xffffffff;
                            }
                            if (_iStack0000000000000028 != *(arg4 + 8)) {
                                return 0xffffffff;
                            }
                            if ((_iStack0000000000000028 == NULL) || (*arg4 == auStack_68)) {
                                iVar4 = 0;
                            }
                            else {
                                arg1_00 = *arg4;
                                iVar4 = fcn.00011230(arg1_00,auStack_68,_iStack0000000000000028);
                            }
                            if (iVar4 == 0) {
code_r0x000144bd:
                                bVar1 = true;
                                break;
                            }
                        }
                    }
                    else {
                        arg1_00 = arg2_00 + 0x11;
                        iVar3 = fcn.000158fc(arg1_00,arg2_01 + 0x3b);
                        if (iVar3 == 0) {
                            arg1_00 = arg2_01;
                            iVar3 = fcn.00016e88(arg2_01);
                            if ((iVar3 < 0) || (iVar3 = fcn.00016aa8(arg1_00,arg2_00), iVar3 < 0)) {
code_r0x000145ba:
                                *piVar2 = 1;
                                return 0xffffffff;
                            }
                            *(arg1 + 0x100) = arg2_01[0x83];
                            *(arg1 + 0x108) = arg2_01[0x84];
                            iVar3 = 1;
                            arg2_00[1] = arg2_01;
                            _iStack0000000000000028 = CONCAT44(uStack000000000000002c,1);
                            arg2_01[1] = arg2_01;
                            goto code_r0x0001441b;
                        }
                    }
                }
                if (*piVar2 != 3) {
                    if (bVar1) goto code_r0x0001460b;
                    break;
                }
                if (bVar1) goto code_r0x0001460b;
                arg1 = *(arg1 + 0xe8);
            } while (arg1 != 0);
            if ((piVar6 != NULL) || (arg4 != 0)) {
                *piVar2 = 6;
                return 0xffffffff;
            }
code_r0x0001460b:
            *piVar2 = 0;
            return 0;
        }
    }
    *piVar2 = 5;
    return 0xffffffff;
}


/* fcn.00014af0 @ 0x14af0 */

uint fcn.00014af0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *arg2_00;
    uchar *arg2_01;
    int iVar1;
    uint uVar2;
    int64_t iVar3;
    int64_t arg2_02;
    uchar *arg1_00;
    int64_t iVar4;
    uchar uVar5;
    int64_t iStackX_8;
    uint64_t uStackX_10;
    int64_t var_40h;
    uchar auStack_78 [48];
    int64_t var_40h_2;
    
    uVar5 = 0;
    uStackX_10 = arg2 & 0xffffffffffffff00;
    iStackX_8 = 0;
    if (arg1 == 0) {
        return 0xffffffff;
    }
    uVar2 = 0xffffffff;
    arg1_00 = *(arg1 + 0xe0) + 0x178;
    if (arg1_00 == NULL) {
        iVar1 = -1;
    }
    else {
        iVar1 = fcn.00014630(arg1_00,&uStackX_10,&iStackX_8);
        uVar5 = uStackX_10;
    }
    if (iVar1 != 0) {
        return 0xffffffff;
    }
    arg2_00 = arg1 + 0x58;
    if (*arg2_00 != 0) {
        iVar3 = *(arg1 + 0xc0);
        if (((iVar3 != 0) && (arg3 != 0)) && (arg4 != 0)) {
            if (arg4 == *(arg1 + 200)) {
                if (arg3 != iVar3) goto code_r0x00014b96;
code_r0x00014ba3:
                iVar3 = 0;
            }
            else {
                if (arg4 != *(arg1 + 0x60)) {
                    return 0xffffffff;
                }
                if (arg3 == *arg2_00) goto code_r0x00014ba3;
                iVar3 = *arg2_00;
code_r0x00014b96:
                arg1_00 = arg3;
                iVar3 = fcn.00011230(arg3,iVar3,arg4);
            }
            if (iVar3 != 0) {
                return 0xffffffff;
            }
        }
        arg1_00 = CONCAT71(arg1_00 >> 8,uVar5);
        iVar1 = fcn.000146e0(arg1_00,arg2_00,arg1 + 0x60,auStack_78);
        if (iVar1 != 0) {
            return 0xffffffff;
        }
    }
    if (*(*(arg1 + 0xe0) + 0x1d0) == 0) goto code_r0x00014c80;
    arg2_01 = *(*(arg1 + 0xe0) + 0x238);
    if (arg2_01 == NULL) {
        return 0xffffffff;
    }
    if (*arg2_00 == 0) {
        if ((arg3 != 0) && (arg4 == iStackX_8)) {
            if ((arg4 == 0) || (arg3 == arg2_01)) goto code_r0x00014c3f;
            arg1_00 = arg3;
            iVar3 = arg4;
            goto code_r0x00014c1b;
        }
    }
    else {
        if ((iStackX_8 == 0) || (auStack_78 == arg2_01)) {
code_r0x00014c3f:
            iVar3 = 0;
        }
        else {
            arg1_00 = auStack_78;
            iVar3 = iStackX_8;
code_r0x00014c1b:
            iVar3 = fcn.00011230(arg1_00,arg2_01,iVar3);
        }
        if (iVar3 != 0) {
            return 0xffffffff;
        }
    }
    iVar1 = fcn.000146e0(CONCAT71(arg1_00 >> 8,uVar5),*(arg1 + 0xe0) + 0x1d0,*(arg1 + 0xe0) + 0x1d8,auStack_78);
    if (iVar1 != 0) {
        return 0xffffffff;
    }
code_r0x00014c80:
    iVar3 = iStackX_8;
    if ((*arg2_00 == 0) && (*(*(arg1 + 0xe0) + 0x1d0) == 0)) {
        if (arg3 == 0) {
            return 0xffffffff;
        }
        if (arg4 != iStackX_8) {
            return 0xffffffff;
        }
    }
    else {
        arg3 = auStack_78;
    }
    arg2_02 = fcn.00014248(arg1);
    if (arg2_02 != 0) {
        iVar4 = *(arg1 + 0xe0);
        iVar1 = fcn.00016870(iVar4 + 0x3d0);
        if (((iVar1 != 0) && (*(iVar4 + 0x420) == 7)) && (*(iVar4 + 0x3e4) == 1)) {
            iVar1 = *(iVar4 + 1000);
            if (iVar1 != 1) {
                if (iVar1 == 10) {
                    uVar2 = fcn.000149cc(arg1,arg2_02,arg3,iVar3);
                    return uVar2;
                }
                if (((iVar1 != 0xb) && (iVar1 != 0xc)) && (iVar1 != 0xd)) {
                    return 0xffffffff;
                }
            }
            uVar2 = fcn.000147b4(arg1,arg2_02,arg3,iVar3);
        }
    }
    return uVar2;
}


/* fcn.00014d68 @ 0x14d68 */

ulong fcn.00014d68(int64_t arg1,int64_t arg2)

{
    uchar *arg1_00;
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t arg1_01;
    uchar *arg2_00;
    int64_t iVar5;
    uint64_t uStackX_8;
    int64_t aiStackX_18 [2];
    uchar auStack_48 [64];
    
    iVar1 = *0x1ebc8;
    aiStackX_18[0] = 0;
    arg1_01 = arg1 & 0xffffffffffffff00;
    uStackX_8 = arg1 & 0xffffffffffffff00;
    if ((((*0x1ebc8 != 0) && (arg2 != 0)) && (*(*0x1ebc8 + 0xe8) != 0)) && (*(*0x1ebc8 + 0xd0) != 0)) {
        iVar5 = *(*0x1ebc8 + 0xe0);
        iVar3 = iVar5 + 0x178;
        if (iVar3 == 0) {
            iVar2 = -1;
        }
        else {
            iVar2 = fcn.00014630(iVar3,&uStackX_8,aiStackX_18);
            arg1_01 = CONCAT71(iVar3 >> 8,uStackX_8);
        }
        if (iVar2 == 0) {
            arg2_00 = iVar5 + 0x488;
            iVar2 = fcn.000146e0(arg1_01,arg2_00,iVar5 + 0x490,auStack_48);
            if ((iVar2 == 0) && (aiStackX_18[0] == *(*(iVar1 + 0xd0) + 0x240))) {
                arg1_00 = *(*(iVar1 + 0xd0) + 0x238);
                if ((aiStackX_18[0] == 0) || (arg1_00 == auStack_48)) {
                    iVar3 = 0;
                }
                else {
                    arg2_00 = auStack_48;
                    iVar3 = fcn.00011230(arg1_00,arg2_00,aiStackX_18[0]);
                }
                if (iVar3 == 0) {
                    *arg2 = *(*(iVar1 + 0xd0) + 0x248);
                    uVar4 = fcn.00014af0(*(iVar1 + 0xe8),arg2_00,0,0);
                    return uVar4;
                }
            }
        }
    }
    return 0xffffffff;
}


/* fcn.00014248 @ 0x14248 */

ulong * fcn.00014248(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    ulong *puVar3;
    int64_t iVar4;
    
    if (arg1 == 0) {
        puVar3 = NULL;
    }
    else {
        iVar1 = *(arg1 + 0xe0);
        for (puVar3 = *(arg1 + 0xd8); puVar3 != NULL; puVar3 = *puVar3) {
            iVar2 = fcn.000158fc(puVar3 + 0x11,iVar1 + 8);
            if (iVar2 == 0) {
                if ((*(iVar1 + 0x170) == 0) || (puVar3 + 0x14 == iVar1 + 0x158)) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = fcn.00011230(puVar3 + 0x14,iVar1 + 0x158,*(iVar1 + 0x170));
                }
                if (iVar4 == 0) break;
            }
        }
    }
    return puVar3;
}


/* fcn.000114e8 @ 0x114e8 */

ulong fcn.000114e8(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t arg1_00;
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    
    arg1_00 = arg1;
    iVar1 = fcn.0001245c(arg1_00,0x1e020,0x10);
    if ((iVar1 == 0) || (iVar1 = fcn.0001245c(arg1_00,0x1e010,0x10), iVar1 == 0)) {
        fcn.00015120(arg2,arg3,in_stack_00000028,in_stack_00000030);
    }
    else {
        iVar1 = fcn.0001245c(arg1_00,0x1e030,0x10);
        if ((iVar1 == 0) || (iVar1 = fcn.0001245c(arg1_00,0x1e0a0,0x10), iVar1 == 0)) {
            fcn.00016ff0(arg2,arg3,in_stack_00000028,in_stack_00000030);
        }
        else {
            iVar1 = fcn.0001245c(arg1_00,0x1e090,0x10);
            if (iVar1 == 0) {
                fcn.000183e4(arg2,arg3,in_stack_00000028,in_stack_00000030);
            }
            else {
                iVar1 = fcn.0001245c(arg1_00,0x1e0c0,0x10);
                if (iVar1 != 0) {
                    return 0x8000000000000003;
                }
                fcn.00018f68(arg2,arg3,in_stack_00000028,in_stack_00000030);
            }
        }
    }
    return 0;
}


/* fcn.000126f0 @ 0x126f0 */

int64_t fcn.000126f0(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uchar *arg2_00;
    int64_t arg1_00;
    ulong uVar2;
    int64_t iVar3;
    
    if (arg1 != 0) {
        arg2_00 = arg1;
        if ((*arg1 & 0x80) != 0) {
            arg2_00 = fcn.00019058(arg2 + 1);
            if (arg2_00 == NULL) {
                return 0;
            }
            if ((arg2 != 0) && (arg2_00 + 1 != arg1)) {
                fcn.000111d0(arg2_00 + 1,arg1,arg2);
            }
            *arg2_00 = 0;
            arg2 = arg2 + 1;
        }
        arg1_00 = fcn.00019058(0x18);
        if (arg1_00 != 0) {
            uVar2 = fcn.0001bce0();
            *(arg1_00 + 8) = uVar2;
            iVar3 = fcn.0001bce0();
            *(arg1_00 + 0x10) = iVar3;
            if ((((*(arg1_00 + 8) != 0) && (iVar3 != 0)) &&
                (iVar1 = fcn.0001bd18(*(arg1_00 + 8),arg2_00,arg2), -1 < iVar1)) &&
               (iVar1 = fcn.0001bd18(*(arg1_00 + 0x10),0x1e194,3), -1 < iVar1)) {
                return arg1_00;
            }
            if (arg2_00 != arg1) {
                fcn.0001913c(arg2_00);
            }
            fcn.00015778(arg1_00);
        }
    }
    return 0;
}


/* fcn.000155cc @ 0x155cc */

int fcn.000155cc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg2_00;
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t *arg1_00;
    uint32_t *arg1_01;
    uint32_t *arg2_01;
    int iVar4;
    uint64_t noname_1;
    uint32_t *arg3_00;
    int64_t in_stack_00000028;
    
    iVar2 = -1;
    arg1_00 = fcn.0001bce0();
    if (arg1_00 == NULL) {
        return -1;
    }
    iVar1 = fcn.0001bd18(arg1_00,arg1,arg2);
    iVar4 = -1;
    if (-1 < iVar1) {
        arg3_00 = *(in_stack_00000028 + 8);
        uVar3 = arg3_00[2];
        iVar4 = iVar2;
        if (uVar3 == arg1_00[2]) {
            if (uVar3 == 1) {
                arg1_01 = arg1_00;
                arg2_01 = arg3_00;
            }
            else {
                arg1_01 = arg3_00;
                arg2_01 = arg1_00;
            }
            iVar2 = fcn.00019780(arg1_01,arg2_01);
            if (iVar2 < 0) goto code_r0x00015746;
        }
        else if (uVar3 == 1) goto code_r0x00015746;
        arg2_00 = *(in_stack_00000028 + 0x10);
        if ((arg3_00[2] != 1) && (*(arg2_00 + 8) != 1)) {
            if ((*arg3_00 < 1) || ((**(arg3_00 + 4) & 1) == 0)) {
                iVar2 = fcn.0001a42c(arg1_00,arg2_00,arg3_00,arg1_00);
            }
            else {
                iVar2 = fcn.0001b50c(arg1_00,arg2_00,arg3_00,arg1_00);
            }
            if (iVar2 == 0) {
                uVar3 = fcn.00019dec(*(in_stack_00000028 + 8));
                noname_1 = ((uVar3 & 7) != 0) + (uVar3 + (uVar3 >> 0x1f & 7U) >> 3);
                if (*arg4 < noname_1) {
                    *arg4 = noname_1;
                }
                else {
                    uVar3 = fcn.00019dec(arg1_00);
                    if ((uVar3 + (uVar3 >> 0x1f & 7U) >> 3) + ((uVar3 & 7) != 0) <= noname_1) {
                        *arg4 = noname_1;
                        if (noname_1 != 0) {
                            fcn.00011250(arg3,noname_1,0);
                        }
                        uVar3 = fcn.00019dec(arg1_00);
                        iVar2 = fcn.000197d4(arg1_00,arg3 + (noname_1 -
                                                             ((uVar3 + (uVar3 >> 0x1f & 7U) >> 3) + ((uVar3 & 7) != 0)))
                                            );
                        iVar4 = -(iVar2 != 0);
                    }
                }
            }
        }
    }
code_r0x00015746:
    if (*(arg1_00 + 4) != 0) {
        fcn.000194c0(arg1_00);
    }
    fcn.0001913c(arg1_00);
    return iVar4;
}


/* fcn.00018944 @ 0x18944 */

uint fcn.00018944(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    int iVar2;
    int iVar3;
    uint uVar4;
    char *pcVar5;
    uint64_t uVar6;
    uint64_t uStackX_20;
    int64_t var_7fh;
    int64_t iStack_b8;
    char cStack_af;
    int iStack_ac;
    uint32_t uStack_a8;
    uchar auStack_a0 [24];
    uchar auStack_88 [39];
    int64_t var_59h;
    uint32_t var_50h;
    int32_t var_49h;
    int64_t var_41h;
    int64_t var_29h;
    
    uVar4 = 0;
    if (((*0x1ebd0 == '\0') && (*0x1ebd1 - 1U < 2)) && (*0x1ebd2 == -1)) {
        pcVar1 = (arg3 & 0xffffffffU) + 0x1ebd0;
        for (pcVar5 = 0x1ebd3; (pcVar5 < pcVar1 && (*pcVar5 == (*0x1ebd1 != '\x01') + -1)); pcVar5 = pcVar5 + 1) {
        }
        if (((7 < pcVar5 + -0x1ebd2) && (*pcVar5 == '\0')) &&
           ((iVar2 = fcn.0001c80c(pcVar5 + 1,(arg3 - (pcVar5 + 1)) + 0x1ebd0,&iStack_b8), -1 < iVar2 &&
            ((cStack_af == '\0' && (iStack_ac == 0x10)))))) {
            iVar2 = uStack_a8 + iStack_b8;
            iVar3 = fcn.0001c80c(iStack_b8,uStack_a8,&iStack_b8);
            if ((-1 < iVar3) && ((cStack_af == '\0' && (iStack_ac == 0x10)))) {
                uVar6 = uStack_a8 + iStack_b8;
                iVar3 = fcn.0001c80c(iStack_b8,uStack_a8,auStack_a0);
                if (iVar3 < 0) {
                    iVar3 = -1;
                }
                else {
                    iVar3 = fcn.0001c9dc(auStack_88,&uStackX_20,auStack_a0);
                }
                if ((iVar3 == 0) &&
                   ((((uVar6 <= uStackX_20 ||
                      ((((iVar3 = fcn.0001c80c(uStackX_20,uVar6 - uStackX_20,&iStack_b8), -1 < iVar3 &&
                         (cStack_af == '\0')) && (iStack_ac == 5)) && (uStack_a8 + iStack_b8 == uVar6)))) &&
                     (((iVar2 = fcn.0001c80c(uVar6,iVar2 - uVar6,&iStack_b8), -1 < iVar2 && (cStack_af == '\0')) &&
                      (iStack_ac == 4)))) && ((uVar6 = uStack_a8, uVar6 + iStack_b8 == pcVar1 && (uVar6 == arg2)))))) {
                    if ((uVar6 != 0) && (iStack_b8 != arg1)) {
                        uVar4 = fcn.00011230(iStack_b8,arg1,uVar6);
                    }
                    return uVar4;
                }
            }
        }
    }
    return 0xffffffff;
}


/* fcn.0001864c @ 0x1864c */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

uint32_t fcn.0001864c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int32_t arg_60h,int8_t arg_68h)

{
    uint8_t *arg1_00;
    int64_t arg3_00;
    int64_t iVar1;
    int64_t arg1_01;
    uint8_t *puVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    int iVar6;
    int iVar7;
    uint64_t arg3_01;
    uint32_t in_stack_00000028;
    char cStack0000000000000030;
    ulong uStack_68;
    uint64_t uStack_60;
    uint64_t uStack_58;
    int64_t iStack_50;
    uint32_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    uVar5 = (_cStack0000000000000030 >> 3) + ((_cStack0000000000000030 & 7) != 0);
    arg3_01 = arg2 & 0xffffffff;
    if (((uVar5 < in_stack_00000028) || (iVar7 = arg2, uVar5 < in_stack_00000028 + 2 + iVar7)) || (arg4 != uVar5)) {
        return 0x16;
    }
    arg1_00 = fcn.00019058(uVar5);
    arg3_00 = fcn.00019058(uVar5);
    iVar1 = fcn.00019058(uVar5);
    arg1_01 = fcn.00019058(uVar5);
    if (arg1_00 == NULL) {
code_r0x000188f2:
        if (arg3_00 != 0) {
            fcn.0001913c(arg3_00);
        }
        if (iVar1 != 0) {
            fcn.0001913c(iVar1);
        }
        if (arg1_01 != 0) {
            fcn.0001913c(arg1_01);
        }
        return 0xd;
    }
    if (((arg3_00 == 0) || (iVar1 == 0)) || (arg1_01 == 0)) {
        fcn.0001913c(arg1_00);
        goto code_r0x000188f2;
    }
    if (*((arg4 - 1) + arg3) == -0x44) {
        iVar6 = uVar5 - iVar7;
        uVar4 = iVar6 - 1U;
        if ((uVar4 != 0) && (arg1_00 != arg3)) {
            fcn.000111d0(arg1_00,arg3,iVar6 - 1U);
        }
        iVar3 = ((uVar5 - iVar7) - 1) + arg3;
        if ((iVar7 != 0) && (arg1_01 != iVar3)) {
            fcn.000111d0(arg1_01,iVar3,arg3_01);
        }
        _cStack0000000000000030 = 0xff >> ((uVar5 * '\b' - cStack0000000000000030) + 1U & 0x1f);
        if ((*arg3 & ~_cStack0000000000000030) == 0) {
            uVar5 = fcn.00018510(arg1_01,arg2 & 0xffffffff,arg3_00,iVar6 - 1U);
            if (uVar5 != 0) goto code_r0x000188c5;
            if (iVar6 - 1U != 0) {
                puVar2 = arg1_00;
                do {
                    *puVar2 = *puVar2 ^ puVar2[arg3_00 - arg1_00];
                    puVar2 = puVar2 + 1;
                    uVar4 = uVar4 - 1;
                } while (uVar4 != 0);
            }
            uVar4 = 0;
            *arg1_00 = *arg1_00 & _cStack0000000000000030;
            if (iVar6 - in_stack_00000028 != 2) {
                puVar2 = arg1_00;
                do {
                    if (*puVar2 != 0) goto code_r0x00018711;
                    uVar5 = uVar4 + 1;
                    uVar4 = uVar5;
                    puVar2 = puVar2 + 1;
                } while (uVar5 < (iVar6 - in_stack_00000028) - 2);
            }
            if (arg1_00[uVar4] == 1) {
                var_38h = arg1_00 + (uVar4 + 1);
                uStack_68 = 8;
                uStack_60 = arg3_01;
                uStack_58 = in_stack_00000028;
                iStack_50 = arg3_00;
                _var_40h = arg1;
                fcn.00011250(arg3_00,8,0);
                if (iVar7 == 0x14) {
                    fcn.00016ff0(3,&iStack_50,&uStack_68,arg3_00);
                }
                else if (iVar7 == 0x20) {
                    fcn.00015120(3,&iStack_50,&uStack_68,arg3_00);
                }
                else if (iVar7 == 0x30) {
                    fcn.000183e4(3,&iStack_50,&uStack_68,arg3_00);
                }
                else {
                    if (iVar7 != 0x40) {
                        uVar5 = 0xb;
                        goto code_r0x000188c5;
                    }
                    fcn.00018f68(3,&iStack_50,&uStack_68,arg3_00);
                }
                if ((iVar7 == 0) || (arg3_00 == arg1_01)) {
                    iVar3 = 0;
                }
                else {
                    iVar3 = fcn.00011230(arg3_00,arg1_01,arg3_01);
                }
                uVar5 = iVar3 != 0;
                goto code_r0x000188c5;
            }
        }
    }
code_r0x00018711:
    uVar5 = 7;
code_r0x000188c5:
    fcn.0001913c(arg1_01);
    fcn.0001913c(iVar1);
    fcn.0001913c(arg3_00);
    fcn.0001913c(arg1_00);
    return uVar5;
}


/* fcn.000124d4 @ 0x124d4 */

ulong fcn.000124d4(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar3 = *(arg1 + 0x68);
    iVar2 = *(arg1 + 0x70);
    while( true ) {
        if (iVar3 == 0) {
            return 0;
        }
        iVar1 = fcn.0001245c(iVar2,0x1e080,0x10);
        if (iVar1 == 0) break;
        iVar2 = iVar2 + 0x18;
        iVar3 = iVar3 + -1;
    }
    return *(iVar2 + 0x10);
}


/* fcn.00011ef8 @ 0x11ef8 */

ulong fcn.00011ef8(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    
    if ((arg2 == 0) || (arg1 == 0)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        iVar1 = fcn.0001245c(arg2,0x1e0b0,0x10);
        if (iVar1 == 0) {
            if ((*0x1ea28 == 0) || (*0x1ea20 == 0)) {
                uVar2 = 0x800000000000000e;
            }
            else {
                *(arg1 + 0x10) = *0x1ea20;
                *arg1 = *0x1ea10;
                *(arg1 + 8) = *0x1ea18;
                if (*(arg1 + 0x18) == 0) {
                    *(arg1 + 0x18) = *0x1ea28;
                }
                else {
                    if (arg3 < *0x1ea20) {
                        return 0x8000000000000005;
                    }
                    fcn.0001dca0(*(arg1 + 0x18),*0x1ea28,*0x1ea20);
                }
                uVar2 = 0;
            }
        }
        else {
            uVar2 = 0x8000000000000003;
        }
    }
    return uVar2;
}


/* fcn.00011e34 @ 0x11e34 */

ulong fcn.00011e34(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    ulong uVar2;
    int16_t *piVar3;
    int64_t iVar4;
    
    if (arg2 == 0) {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = 0x800000000000000e;
        piVar3 = fcn.000124d4(arg1);
        if (piVar3 != NULL) {
            do {
                iVar1 = *piVar3;
                while( true ) {
                    if (iVar1 == -1) goto code_r0x00011edb;
                    piVar3 = piVar3 + piVar3[1];
                    if (*piVar3 == 4) break;
                    iVar1 = *piVar3;
                }
                iVar4 = fcn.0001245c(piVar3 + 8,0x1e0b0,0x10);
            } while (iVar4 != 0);
            uVar2 = 0;
            *(arg2 + 0x18) = piVar3 + 0x1a;
            *(arg2 + 0x10) = *(piVar3 + 0x18);
            *arg2 = *(piVar3 + 0xc);
            *(arg2 + 8) = *(piVar3 + 0x10);
        }
    }
code_r0x00011edb:
    return uVar2;
}


/* fcn.00012690 @ 0x12690 */

ulong fcn.00012690(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    if (*0x1ea58 != 0) {
        iVar3 = *(*0x1ea58 + 0xa0);
        for (iVar2 = *(*0x1ea58 + 0x98); iVar2 != 0; iVar2 = iVar2 + -1) {
            iVar1 = fcn.0001245c(iVar3,0x1e168,0x10);
            if (iVar1 == 0) {
                return *(iVar3 + 0x10);
            }
            iVar3 = iVar3 + 0x18;
        }
    }
    return 0;
}


/* fcn.00012524 @ 0x12524 */

ulong fcn.00012524(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x1ea60 == '\0') {
        if (*0x1ea80 == 0) {
            if (*0x1ea70 != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x1ea50 + 0x140))(0x1e138,0,0x1ea80);
        }
    }
    else if (*0x1ea68 == 0) {
        if ((*0x1ea70 == '\0') && (*0x1ea58 != 0)) {
    //WARNING: Could not recover jumptable at 0x00012563. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x1ea58 + 0xd0))(0x1e148,0,0x1ea68);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.000125ac @ 0x125ac */

int64_t fcn.000125ac(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    if (*0x1ea60 == '\0') {
        if (*0x1ea98 == 0) {
            if (*0x1ea70 == '\x01') {
                return -0x7ffffffffffffffd;
            }
            uVar2 = (**(*0x1ea50 + 0x18))(0x1f);
            (**(*0x1ea50 + 0x20))(uVar2);
            if (0x10 < uVar2) {
                return -0x7ffffffffffffffd;
            }
            iVar1 = (**(*0x1ea50 + 0x140))(0x1e000,0,0x1ea98);
            if (iVar1 < 0) {
                *0x1ea98 = 0;
            }
            return iVar1;
        }
    }
    else if (*0x1ea78 == 0) {
        if (*0x1ea58 == 0) {
            return -0x7ffffffffffffffd;
        }
        iVar1 = (**(*0x1ea58 + 0xd0))(0x1e050,0,0x1ea78);
        if (iVar1 < 0) {
            *0x1ea78 = 0;
        }
        return iVar1;
    }
    return 0;
}


/* fcn.000121b4 @ 0x121b4 */

int64_t fcn.000121b4(int64_t arg1)

{
    int64_t iVar1;
    int64_t arg1_00;
    
    if (arg1 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        *0x1ea28 = 0;
        iVar1 = fcn.00011e34(arg1,0x1ea10);
        if ((-1 < iVar1) && (*0x1ea28 != 0)) {
            arg1_00 = fcn.00012384();
            if (arg1_00 != 0) {
                fcn.0001dca0(arg1_00,*0x1ea28,*0x1ea20);
                *0x1ea28 = arg1_00;
            }
        }
    }
    return iVar1;
}


/* fcn.00019058 @ 0x19058 */

int64_t fcn.00019058(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    int iVar3;
    int64_t iVar4;
    uint8_t *puVar5;
    int64_t *piVar6;
    uint32_t uVar7;
    
    iVar1 = *0x1eaa8;
    if (*0x1eaa8 != 0) {
        if (*(*0x1eaa8 + 0x10) == 0) {
            fcn.000191d0();
        }
        piVar2 = *(iVar1 + 0x10);
        uVar7 = ((arg1 & 0x7f) != 0) + (CONCAT44(in_register_0000000c,arg1) >> 7);
        if ((uVar7 < 0x100) && (iVar3 = 0, piVar2 <= *(iVar1 + 0x18))) {
            puVar5 = piVar2 + 1;
            do {
                if ((puVar5[1] == 0) && (uVar7 <= *puVar5)) {
                    *(piVar2 + iVar3 * 0x10 + 9) = 1;
                    return piVar2[iVar3 * 2];
                }
                iVar3 = iVar3 + 1;
                puVar5 = puVar5 + 0x10;
            } while (piVar2 + iVar3 * 2 <= *(iVar1 + 0x18));
            if (piVar2 <= *(iVar1 + 0x18)) {
                iVar4 = *(piVar2 + 1) * 0x80 + *piVar2;
                piVar6 = uVar7 * 0x80 + iVar4;
                if (iVar4 != *piVar2) {
                    piVar2 = piVar2 + -2;
                }
                if (*(iVar1 + 0x20) < piVar6) {
                    *(iVar1 + 0x20) = piVar6;
                }
                if (piVar6 < piVar2) {
                    *(iVar1 + 0x10) = piVar2;
                    *piVar2 = iVar4;
                    *(piVar2 + 1) = uVar7;
                    *(piVar2 + 9) = 1;
                    return iVar4;
                }
            }
        }
    }
    return 0;
}


/* fcn.000111d0 @ 0x111d0 */

int64_t fcn.000111d0(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_00000014;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    uVar5 = 0;
    puVar3 = CONCAT44(in_register_00000014,arg2);
    puVar2 = puVar3 + arg3 + -1;
    if ((puVar3 < arg1) && (arg1 <= puVar2)) {
        puVar3 = arg1 + -1 + arg3;
        uVar5 = 1;
        uVar4 = arg3;
    }
    else {
        uVar4 = arg3 & 7;
        puVar2 = puVar3;
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


/* fcn.0001bce0 @ 0x1bce0 */

int64_t fcn.0001bce0(void)

{
    int iVar1;
    int64_t arg1;
    
    arg1 = fcn.00019058(0x18);
    if ((arg1 != 0) && (iVar1 = fcn.00019420(arg1), iVar1 != 0)) {
        fcn.0001913c(arg1);
        arg1 = 0;
    }
    return arg1;
}


/* fcn.00019420 @ 0x19420 */

ulong fcn.00019420(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *arg1_00;
    ulong uVar2;
    int64_t iVar3;
    int iVar4;
    
    arg1_00 = fcn.00019058(0x80);
    piVar1 = arg1 + 0x10;
    *piVar1 = arg1_00;
    if (arg1_00 == NULL) {
        uVar2 = 0xfffffffe;
    }
    else {
        iVar4 = 0;
        if ((piVar1 < arg1_00) || (arg1_00 + 0x7cU < piVar1)) {
            iVar4 = 0x20;
            fcn.0001dc40(arg1_00,0,0x80);
        }
        if (iVar4 < 0x20) {
            iVar3 = iVar4 << 2;
            do {
                *(iVar3 + *piVar1) = 0;
                iVar3 = iVar3 + 4;
            } while (iVar3 < 0x80);
        }
        *arg1 = 0;
        *(arg1 + 8) = 0;
        uVar2 = 0;
        *(arg1 + 4) = 0x20;
    }
    return uVar2;
}


/* fcn.0001913c @ 0x1913c */

void fcn.0001913c(uint32_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    int64_t *piVar4;
    int iVar5;
    
    iVar3 = *0x1eaa8;
    iVar5 = 0;
    if (*0x1eaa8 != 0) {
        if (*(*0x1eaa8 + 0x10) == 0) {
            fcn.000191d0();
        }
        piVar1 = *(iVar3 + 0x10);
        piVar2 = *(iVar3 + 0x18);
        if (piVar1 <= piVar2) {
            piVar4 = piVar1;
            do {
                if ((*(piVar4 + 9) == '\x01') && (iVar3 = *piVar4, iVar3 == CONCAT44(in_register_0000000c,arg1))) {
                    *(piVar1 + iVar5 * 0x10 + 9) = 0;
                    if (*(piVar1 + iVar5 * 2 + 1) << 7 == 0) {
                        return;
                    }
                    fcn.00011250(iVar3,*(piVar1 + iVar5 * 2 + 1) << 7,0);
                    return;
                }
                iVar5 = iVar5 + 1;
                piVar4 = piVar4 + 2;
            } while (piVar1 + iVar5 * 2 <= piVar2);
        }
    }
    return;
}


/* fcn.0001bd18 @ 0x1bd18 */

int fcn.0001bd18(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int iVar2;
    
    if (*(arg1 + 4) < 2) {
        iVar2 = fcn.00019b74(arg1,2);
        if (iVar2 != 0) goto code_r0x0001bd7c;
    }
    fcn.00019a60(arg1);
    while (0 < arg3) {
        arg3 = arg3 - 1;
        iVar2 = fcn.00019c64(arg1,8,arg1);
        if (iVar2 != 0) goto code_r0x0001bd7c;
        uVar1 = *arg2;
        arg2 = arg2 + 1;
        **(arg1 + 0x10) = **(arg1 + 0x10) | uVar1;
        *arg1 = *arg1 + 1;
    }
    fcn.00019b48(arg1);
    iVar2 = 0;
code_r0x0001bd7c:
    return -(iVar2 != 0);
}


/* fcn.00015778 @ 0x15778 */

void fcn.00015778(int64_t arg1)

{
    uint32_t *puVar1;
    
    if (arg1 != 0) {
        puVar1 = *(arg1 + 8);
        if (puVar1 != NULL) {
            if (*(puVar1 + 4) != 0) {
                fcn.000194c0(puVar1);
            }
            fcn.0001913c(puVar1);
        }
        puVar1 = *(arg1 + 0x10);
        if (puVar1 != NULL) {
            if (*(puVar1 + 4) != 0) {
                fcn.000194c0(puVar1);
            }
            fcn.0001913c(puVar1);
        }
        fcn.0001913c(arg1);
    }
    return;
}


/* fcn.0001c80c @ 0x1c80c */

int fcn.0001c80c(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint8_t *puVar1;
    uint8_t uVar2;
    uint in_register_00000014;
    uint8_t *puVar3;
    int iVar4;
    
    fcn.00011250(arg3,0x18,0);
    puVar1 = arg1 + CONCAT44(in_register_00000014,arg2);
    if (arg1 < puVar1) {
        uVar2 = *arg1;
        puVar3 = arg1 + 1;
        *(arg3 + 8) = uVar2;
        iVar4 = 1;
        *(arg3 + 9) = uVar2 >> 6;
        *(arg3 + 10) = uVar2 >> 5 & 1;
        if ((uVar2 & 0x1f) == 0x1f) {
            *(arg3 + 0xc) = 0;
            do {
                if (puVar1 <= puVar3) {
                    return -1;
                }
                uVar2 = *puVar3;
                puVar3 = puVar3 + 1;
                *(arg3 + 0xc) = uVar2 & 0x7f | *(arg3 + 0xc) << 7;
            } while (uVar2 < '\0');
        }
        else {
            *(arg3 + 0xc) = uVar2 & 0x1f;
        }
        if (puVar3 < puVar1) {
            uVar2 = *puVar3;
            puVar3 = puVar3 + 1;
            if (uVar2 < '\0') {
                if (uVar2 == 0xff) {
                    return -1;
                }
                uVar2 = uVar2 & 0x7f;
                *(arg3 + 0x10) = 0;
                if (4 < uVar2) {
                    return -1;
                }
                while (uVar2 != 0) {
                    uVar2 = uVar2 - 1;
                    if (puVar1 <= puVar3) {
                        return -1;
                    }
                    *(arg3 + 0x10) = *(arg3 + 0x10) << 8 | *puVar3;
                    puVar3 = puVar3 + 1;
                }
            }
            else {
                *(arg3 + 0x10) = uVar2;
            }
            if ((puVar3 <= puVar1) && (*(arg3 + 0x10) <= puVar1 - puVar3)) {
                *arg3 = puVar3;
                if (((*(arg3 + 9) == '\0') && (*(arg3 + 0xc) == 1)) && ((*(arg3 + 0x10) != 1 || (*puVar3 - 1 < 0xfe))))
                {
                    iVar4 = 0;
                }
                return iVar4 + -1;
            }
        }
    }
    return -1;
}


/* fcn.00015574 @ 0x15574 */

int64_t fcn.00015574(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iStack_28;
    char cStack_1f;
    int iStack_1c;
    uint32_t uStack_18;
    
    if ((((arg1 != 0) && (iVar1 = fcn.0001c80c(arg1,arg2 - arg1,&iStack_28), -1 < iVar1)) && (cStack_1f == '\0')) &&
       ((iStack_1c == 2 && (iVar1 = fcn.0001bd18(arg3,iStack_28,uStack_18), -1 < iVar1)))) {
        return uStack_18 + iStack_28;
    }
    return 0;
}


/* fcn.00015b40 @ 0x15b40 */

ulong fcn.00015b40(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    char *pcVar5;
    char *pcVar6;
    uint64_t uVar7;
    uint uVar8;
    char *arg1_00;
    char *pcVar9;
    char *pcStack_b8;
    char cStack_af;
    int iStack_ac;
    uint32_t uStack_a8;
    char *pcStack_a0;
    int iStack_98;
    int iStack_94;
    int iStack_90;
    int iStack_8c;
    int iStack_88;
    int iStack_84;
    int iStack_80;
    int64_t iStack_48;
    uchar auStack_38 [32];
    
    iVar3 = fcn.0001c80c(arg1,arg2,&pcStack_b8);
    if ((((iVar3 < 0) || (cStack_af != '\0')) || (iStack_ac != 0x10)) ||
       (pcVar9 = pcStack_b8 + uStack_a8, arg1 + arg2 < pcVar9)) {
        return 0xffffffff;
    }
    *arg4 = pcVar9;
    cStack_af = '\0';
    iStack_ac = 0x10;
    arg1_00 = pcStack_b8;
joined_r0x00015bb2:
    do {
        if (pcVar9 <= arg1_00) {
            return 0;
        }
        iVar3 = fcn.0001c80c(arg1_00,pcVar9 - arg1_00,&pcStack_b8);
        if (iVar3 < 0) {
            return 0xffffffff;
        }
        if (cStack_af != '\0') {
            return 0xffffffff;
        }
        if (iStack_ac != 0x11) {
            return 0xffffffff;
        }
        arg1_00 = pcStack_b8 + uStack_a8;
        iVar3 = fcn.0001c80c(pcStack_b8,arg1_00 - pcStack_b8,&pcStack_b8);
        pcVar6 = pcStack_b8;
        if (iVar3 < 0) {
            return 0xffffffff;
        }
        if (cStack_af != '\0') {
            return 0xffffffff;
        }
        if (iStack_ac != 0x10) {
            return 0xffffffff;
        }
        iVar3 = uStack_a8 + pcStack_b8;
        pcStack_a0 = pcStack_b8;
        iVar4 = fcn.0001c80c(pcStack_b8,iVar3 - pcStack_b8,auStack_38);
        if (iVar4 < 0) {
            iVar4 = -1;
        }
        else {
            iVar4 = fcn.0001c9dc(&iStack_98,&pcStack_a0,auStack_38);
            pcVar6 = pcStack_a0;
        }
        if (iVar4 != 0) {
            return 0xffffffff;
        }
        iVar3 = fcn.0001c80c(pcVar6,iVar3 - pcVar6,&pcStack_b8);
        if (iVar3 < 0) {
            return 0xffffffff;
        }
        if (cStack_af != '\0') {
            return 0xffffffff;
        }
        if (iStack_48 != 4) goto code_r0x00015d0c;
    } while (((iStack_98 != 2) || (iStack_94 != 5)) || (iStack_90 != 4));
    if (iStack_8c == 3) {
        uVar8 = 2;
    }
    else if (iStack_8c == 6) {
        uVar8 = 3;
    }
    else if (iStack_8c == 7) {
        uVar8 = 4;
    }
    else if (iStack_8c == 8) {
        uVar8 = 5;
    }
    else {
        if (iStack_8c == 10) {
            uVar8 = 6;
            goto code_r0x00015df8;
        }
        if (iStack_8c != 0xb) goto joined_r0x00015bb2;
        uVar8 = 7;
    }
    goto code_r0x00015df8;
code_r0x00015d0c:
    if (iStack_48 != 7) goto joined_r0x00015bb2;
    if (iStack_98 == 1) {
        if ((((iStack_94 == 2) && (iStack_90 == 0x348)) &&
            ((iStack_8c == 0x1bb8d && ((iStack_88 == 1 && (iStack_84 == 9)))))) && (iStack_80 == 1)) {
            fcn.0001913c(*(arg3 + 0x148));
            pcVar6 = fcn.00019058(uStack_a8 + 1);
            *(arg3 + 0x148) = pcVar6;
            if (pcVar6 == NULL) {
                return 0xffffffff;
            }
            uVar7 = uStack_a8;
            if ((uStack_a8 != 0) && (pcVar6 != pcStack_b8)) {
                fcn.000111d0(pcVar6,pcStack_b8,uStack_a8);
                uVar7 = uStack_a8;
            }
            *(uVar7 + *(arg3 + 0x148)) = 0;
        }
        goto joined_r0x00015bb2;
    }
    if ((((iStack_98 != 0) || (iStack_94 != 9)) || (iStack_90 != 0x926)) ||
       (((iStack_8c != 0x124f92c || (iStack_88 != 100)) || ((iStack_84 != 1 || (iStack_80 != 0x19))))))
    goto joined_r0x00015bb2;
    uVar8 = 1;
code_r0x00015df8:
    if ((*(arg3 + 0x140) == 0x14) ||
       (pcVar5 = fcn.00019058(uStack_a8 + 1), pcVar6 = pcVar5, pcVar1 = pcStack_b8, uVar2 = uStack_a8,
       pcVar5 == NULL)) {
        return 0xffffffff;
    }
    while (uVar2 != 0) {
        if (*pcVar1 != '\0') {
            *pcVar6 = *pcVar1;
            pcVar6 = pcVar6 + 1;
        }
        pcVar1 = pcVar1 + 1;
        uVar2 = uVar2 - 1;
    }
    pcVar5[uStack_a8] = '\0';
    *(arg3 + *(arg3 + 0x140) * 0x10) = uVar8;
    *(arg3 + 8 + *(arg3 + 0x140) * 0x10) = pcVar5;
    *(arg3 + 0x140) = *(arg3 + 0x140) + 1;
    goto joined_r0x00015bb2;
}


/* fcn.0001c9dc @ 0x1c9dc */

ulong fcn.0001c9dc(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint8_t *puVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint8_t *puVar5;
    uint32_t uVar6;
    uint in_R8;
    ulong *puVar7;
    
    puVar7 = CONCAT44(in_R8,arg3);
    if (((*(puVar7 + 2) != 0) && (*(puVar7 + 9) == '\0')) && (*(puVar7 + 0xc) == 6)) {
        uVar6 = *(puVar7 + 2);
        puVar5 = *puVar7;
        *arg2 = puVar5 + uVar6;
        fcn.00011250(arg1,0x58,0);
        puVar1 = puVar5 + uVar6;
        while( true ) {
            if (puVar1 <= puVar5) {
                return 0;
            }
            uVar6 = 0;
            do {
                if (puVar1 <= puVar5) {
                    return 0xffffffff;
                }
                uVar2 = *puVar5;
                puVar5 = puVar5 + 1;
                uVar6 = uVar2 & 0x7f | uVar6 << 7;
            } while (uVar2 < '\0');
            uVar3 = *(arg1 + 0x50);
            if (0x13 < uVar3) break;
            if (uVar3 == 0) {
                uVar4 = uVar6 / 0x28;
                if (2 < uVar4) {
                    uVar4 = 2;
                }
                *arg1 = uVar4;
                *(arg1 + 4) = uVar6 + uVar4 * -0x28;
                *(arg1 + 0x50) = 2;
            }
            else {
                *(arg1 + uVar3 * 4) = uVar6;
                *(arg1 + 0x50) = *(arg1 + 0x50) + 1;
            }
        }
        return 0xffffffff;
    }
    return 0xffffffff;
}


/* fcn.000159bc @ 0x159bc */

int fcn.000159bc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    int iVar1;
    uint64_t uVar2;
    int64_t *in_stack_00000028;
    uchar auStack_28 [32];
    
    if ((*(in_stack_00000028 + 9) == '\0') && (*(in_stack_00000028 + 0xc) == 0x10)) {
        arg1_00 = *in_stack_00000028;
        uVar2 = *(in_stack_00000028 + 2) + arg1_00;
        if (uVar2 <= arg1 + arg2) {
            *arg4 = uVar2;
            iVar1 = fcn.0001c80c(arg1_00,uVar2 - arg1_00,auStack_28);
            if (iVar1 < 0) {
                iVar1 = -1;
            }
            else {
                iVar1 = fcn.0001c9dc(arg3,&stack0x00000028,auStack_28);
            }
            return -(iVar1 != 0);
        }
    }
    return -1;
}


/* fcn.00011250 @ 0x11250 */

int64_t fcn.00011250(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00012a60 @ 0x12a60 */

ulong fcn.00012a60(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    uint64_t arg3;
    int64_t in_R8;
    int64_t var_bp_10h;
    int64_t var_bp_20h;
    uint32_t var_17h;
    uint32_t uStack_18;
    
    if (arg1 != 0) {
        var_bp_10h = *arg2;
        *(arg1 + 0x148) = 0;
        iVar1 = var_bp_10h + in_R8;
        iVar2 = fcn.00015b40(var_bp_10h,iVar1 - var_bp_10h,arg1 + 8,&var_bp_10h);
        if ((((iVar2 == 0) && (iVar2 = fcn.0001c80c(var_bp_10h,iVar1 - var_bp_10h,&var_bp_20h), -1 < iVar2)) &&
            (var_17h == '\0')) && (stack0xffffffffffffffe4 == 2)) {
            for (; (arg3 = uStack_18, uStack_18 != 0 && (*var_bp_20h == '\0')); var_bp_20h = var_bp_20h + 1) {
                uStack_18 = uStack_18 - 1;
            }
            if ((uStack_18 != 0) && (arg1 + 0x158 != var_bp_20h)) {
                fcn.000111d0(arg1 + 0x158,var_bp_20h,arg3);
                arg3 = uStack_18;
            }
            *(arg1 + 0x170) = arg3;
            *arg2 = var_bp_20h + arg3;
            return 0;
        }
    }
    return 0xffffffff;
}


/* fcn.00016870 @ 0x16870 */

ulong fcn.00016870(uint32_t arg1)

{
    ulong uVar1;
    uint in_register_0000000c;
    
    if ((((*(CONCAT44(in_register_0000000c,arg1) + 0x50) < 5) || (*(CONCAT44(in_register_0000000c,arg1) + 0x50) < 4))
        || (uVar1 = 1, *CONCAT44(in_register_0000000c,arg1) != 1)) ||
       (((*(CONCAT44(in_register_0000000c,arg1) + 4) != 2 || (*(CONCAT44(in_register_0000000c,arg1) + 8) != 0x348)) ||
        ((*(CONCAT44(in_register_0000000c,arg1) + 0xc) != 0x1bb8d ||
         (*(CONCAT44(in_register_0000000c,arg1) + 0x10) != 1)))))) {
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00016014 @ 0x16014 */

//WARNING: Variable defined which should be unmapped: var_8h

ulong fcn.00016014(int64_t arg1,uint32_t arg2,uint32_t arg3,int64_t arg4)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    uint in_register_00000014;
    int64_t iVar4;
    uint32_t uVar5;
    uchar auStackX_8 [8];
    uint32_t auStackX_18 [4];
    int64_t var_30h;
    int64_t var_40h;
    uint32_t uStack_38;
    uint32_t uStack_34;
    uint32_t auStack_30 [2];
    int64_t var_8h;
    
    iVar4 = CONCAT44(in_register_00000014,arg2);
    uVar3 = arg1;
    if (arg3 == 0x17) {
        if (iVar4 != 0xd) {
            return 0xffffffff;
        }
        if (*(arg1 + 0xc) != 'Z') {
            return 0xffffffff;
        }
        iVar4 = 0;
        iVar2 = fcn.0001c76c(uVar3,2,auStackX_18);
        if (iVar2 == -1) {
            return 0xffffffff;
        }
        if (auStackX_18[0] < 0x32) {
            uVar5 = auStackX_18[0] + 2000;
        }
        else {
            uVar5 = auStackX_18[0] + 0x76c;
        }
        iVar2 = 2;
    }
    else {
        if ((arg3 != 0x18) || (*(arg1 + -1 + iVar4) != 'Z')) {
            return 0xffffffff;
        }
        iVar2 = 4;
        iVar4 = CONCAT71(iVar4 >> 8,4);
        iVar1 = fcn.0001c76c(uVar3,iVar4,auStackX_18);
        if (iVar1 == -1) {
            return 0xffffffff;
        }
        uVar5 = auStackX_18[0];
    }
    uVar3 = uVar3 + iVar2;
    iVar4 = CONCAT71(iVar4 >> 8,2);
    iVar2 = fcn.0001c76c(uVar3,iVar4,auStack_30);
    if (iVar2 != -1) {
        iVar4 = CONCAT71(iVar4 >> 8,2);
        iVar2 = fcn.0001c76c(uVar3 + 2,iVar4,&uStack_34);
        if (iVar2 != -1) {
            iVar4 = CONCAT71(iVar4 >> 8,2);
            iVar2 = fcn.0001c76c(uVar3 + 4,iVar4,&uStack_38);
            if (iVar2 != -1) {
                iVar4 = CONCAT71(iVar4 >> 8,2);
                iVar2 = fcn.0001c76c(uVar3 + 6,iVar4,auStackX_8);
                if ((iVar2 != -1) &&
                   (iVar2 = fcn.0001c76c(uVar3 + 8,CONCAT71(iVar4 >> 8,2),auStackX_18), iVar2 != -1)) {
                    *arg4 = 0;
                    if (uVar5 < 0x7b2) {
                        iVar2 = -1;
                    }
                    else {
                        iVar2 = fcn.0001cb10(uVar5,auStack_30[0],uStack_34,uStack_38);
                    }
                    if (iVar2 < 0) {
                        if (0x7b1 < uVar5) {
                            return 0xffffffff;
                        }
                        *arg4 = 0;
                    }
                    return 0;
                }
            }
        }
    }
    return 0xffffffff;
}


/* fcn.000129ac @ 0x129ac */

ulong fcn.000129ac(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t arg1_00;
    int64_t iStack_28;
    char cStack_1f;
    int iStack_1c;
    uint32_t uStack_18;
    
    if (((((arg3 != 0) && (arg4 != 0)) && (iVar1 = fcn.0001c80c(*arg1,arg2,&iStack_28), -1 < iVar1)) &&
        ((cStack_1f == '\0' && (iStack_1c == 4)))) && (uStack_18 != 0)) {
        fcn.0001913c(*arg3);
        arg1_00 = fcn.00019058(uStack_18);
        *arg3 = arg1_00;
        if (arg1_00 != 0) {
            if ((uStack_18 != 0) && (arg1_00 != iStack_28)) {
                fcn.000111d0(arg1_00,iStack_28,uStack_18);
            }
            *arg4 = uStack_18;
            *arg1 = uStack_18 + iStack_28;
            return 0;
        }
    }
    return 0xffffffff;
}


/* fcn.00012b40 @ 0x12b40 */

//WARNING: Variable defined which should be unmapped: var_20h

ulong fcn.00012b40(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int iVar2;
    int iVar3;
    uint8_t *puVar4;
    uint64_t uVar5;
    uint8_t *puVar6;
    uint64_t uVar7;
    int64_t arg2_00;
    uint8_t *puStack_68;
    uint8_t *puStack_60;
    char cStack_57;
    int iStack_54;
    uint32_t uStack_50;
    int64_t var_40h;
    int64_t var_38h;
    uint32_t var_2fh;
    uint32_t var_28h;
    int64_t var_20h;
    
    iVar2 = fcn.0001c80c(arg1,arg2,&puStack_60);
    puVar4 = puStack_60;
    uVar7 = 0;
    if (((-1 < iVar2) && (cStack_57 == '\0')) && (iStack_54 == 0x10)) {
        puVar6 = puStack_60 + uStack_50;
        puStack_68 = puStack_60;
        if (puVar6 <= arg1 + arg2) {
            *arg4 = puVar6;
            iVar2 = puVar6;
            iVar3 = fcn.0001c80c(puStack_60,iVar2 - puStack_60,&var_40h);
            if (iVar3 < 0) {
                iVar3 = -1;
            }
            else {
                iVar3 = fcn.0001c9dc(arg3,&puStack_68,&var_40h);
                puVar4 = puStack_68;
            }
            if (iVar3 == 0) {
                if (puVar6 <= puVar4) {
                    return 0;
                }
                iVar3 = fcn.0001c80c(puVar4,iVar2 - puVar4,&puStack_60);
                if (((iVar3 == 0) && (cStack_57 == '\0')) && (iStack_54 == 5)) {
                    return 0;
                }
                iVar3 = fcn.0001c80c(puVar4,arg2,&puStack_60);
                if (((-1 < iVar3) && (cStack_57 == '\0')) &&
                   ((iStack_54 == 0x10 &&
                    (((iVar3 = fcn.0001c80c(puStack_60,iVar2 - puStack_60,&puStack_60), puVar4 = puStack_60,
                      -1 < iVar3 && (cStack_57 == '\x02')) && (iStack_54 == 0)))))) {
                    puStack_68 = puStack_60;
                    arg2_00 = puVar6 - puStack_60;
                    iVar3 = fcn.0001c80c(puStack_60,arg2_00,&var_40h);
                    if (iVar3 < 0) {
                        iVar3 = -1;
                    }
                    else {
                        iVar3 = fcn.000159bc(puVar4,arg2_00,arg3 + 0x58,&puStack_68);
                        puVar4 = puStack_68;
                    }
                    if (iVar3 == 0) {
                        if (puVar4 < puVar6) {
                            iVar3 = fcn.0001c80c(puVar4,iVar2 - puVar4,&puStack_60);
                            if (iVar3 < 0) {
                                return 0xffffffff;
                            }
                            if (cStack_57 != '\x02') {
                                return 0xffffffff;
                            }
                            if (iStack_54 != 1) {
                                return 0xffffffff;
                            }
                            puVar4 = puStack_60 + uStack_50;
                            if (puVar4 <= puVar6) {
                                iVar3 = fcn.0001c80c(puVar4,iVar2 - puVar4,&puStack_60);
                                if (iVar3 < 0) {
                                    return 0xffffffff;
                                }
                                if (cStack_57 != '\x02') {
                                    return 0xffffffff;
                                }
                                if (iStack_54 != 2) {
                                    return 0xffffffff;
                                }
                                if (puVar6 < puStack_60 + uStack_50) {
                                    return 0xffffffff;
                                }
                                iVar2 = fcn.0001c80c(puStack_60,iVar2 - puStack_60,&puStack_60);
                                if (iVar2 < 0) {
                                    return 0xffffffff;
                                }
                                if (cStack_57 != '\0') {
                                    return 0xffffffff;
                                }
                                if (iStack_54 != 2) {
                                    return 0xffffffff;
                                }
                                if (1 < uStack_50) {
                                    return 0xffffffff;
                                }
                                for (uVar5 = uStack_50; uVar5 != 0; uVar5 = uVar5 - 1) {
                                    uVar1 = *puStack_60;
                                    puStack_60 = puStack_60 + 1;
                                    uVar7 = uVar7 << 8 | uVar1;
                                }
                                *(arg3 + 0xb0) = uVar7;
                            }
                        }
                        return 0;
                    }
                }
            }
            return 0xffffffff;
        }
    }
    return 0xffffffff;
}


/* fcn.00012db0 @ 0x12db0 */

//WARNING: Variable defined which should be unmapped: var_17h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_25h

uint32_t * fcn.00012db0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint32_t *arg1_00;
    uint8_t *puVar5;
    uint32_t arg2_00;
    int64_t iVar6;
    uint8_t *arg1_01;
    uint8_t *arg1_02;
    uint8_t *puVar7;
    uint8_t *arg1_03;
    uchar auStackX_8 [7];
    int64_t var_17h;
    uint *puStackX_18;
    int64_t var_67h;
    uint8_t *puStack_c8;
    char cStack_bf;
    uint32_t uStack_bc;
    uint32_t uStack_b8;
    uchar auStack_b0 [24];
    uchar auStack_98 [20];
    int iStack_84;
    int iStack_80;
    int iStack_7c;
    int iStack_78;
    int64_t var_69h;
    uint32_t var_60h;
    uint32_t var_59h;
    int64_t var_51h;
    uchar auStack_48 [7];
    int64_t var_39h;
    int32_t var_25h;
    int32_t var_21h;
    uint32_t var_1dh;
    uint32_t var_19h;
    
    if (arg1 != 0) {
        iVar6 = *arg1;
        *arg3 = 0xffffffff;
        puVar5 = iVar6 + arg2;
        puStackX_18 = arg3;
        arg1_00 = fcn.00019058(0x498);
        if (arg1_00 != NULL) {
            fcn.00011250(arg1_00,0x498,0);
            iVar3 = fcn.0001c80c(iVar6,arg2,&puStack_c8);
            if ((((-1 < iVar3) && (cStack_bf == '\0')) && (uStack_bc == 0x10)) && (puStack_c8 + uStack_b8 <= puVar5)) {
                iVar3 = puStack_c8 + uStack_b8;
                iVar4 = fcn.0001c80c(puStack_c8,iVar3 - puStack_c8,&puStack_c8);
                if (((-1 < iVar4) && (cStack_bf == '\0')) && ((uStack_bc == 2 && (uStack_b8 == 1)))) {
                    uVar1 = *puStack_c8;
                    *arg1_00 = uVar1;
                    if ((uVar1 == 1) &&
                       (iVar3 = fcn.0001c80c(puStack_c8 + 1,iVar3 - (puStack_c8 + 1),&puStack_c8), -1 < iVar3)) {
                        _auStackX_8 = puStack_c8;
                        iVar3 = fcn.00012a60(arg1_00,auStackX_8);
                        arg1_02 = _auStackX_8;
                        if (iVar3 == 0) {
                            iVar6 = puVar5 - _auStackX_8;
                            arg2_00 = iVar6;
                            iVar3 = fcn.0001c80c(_auStackX_8,arg2_00,&puStack_c8);
                            if (-1 < iVar3) {
                                iVar3 = fcn.0001c80c(arg1_02,arg2_00,auStack_b0);
                                if (iVar3 < 0) {
                                    iVar3 = -1;
                                }
                                else {
                                    iVar3 = fcn.000159bc(arg1_02,iVar6,arg1_00 + 0x5e,auStackX_8);
                                    arg1_02 = _auStackX_8;
                                }
                                if (iVar3 == 0) {
                                    iVar3 = fcn.0001c80c(arg1_02,puVar5 - arg1_02,&puStack_c8);
                                    if (-1 < iVar3) {
                                        if (cStack_bf == '\x02') {
                                            *(arg1_00 + 0x76) = puStack_c8 + (uStack_b8 - arg1_02);
                                            fcn.0001913c(*(arg1_00 + 0x74));
                                            puVar5 = fcn.00019058(*(arg1_00 + 0x76));
                                            *(arg1_00 + 0x74) = puVar5;
                                            if (puVar5 == NULL) {
                                                return arg1_00;
                                            }
                                            if ((*(arg1_00 + 0x76) != 0) && (puVar5 != arg1_02)) {
                                                fcn.000111d0(puVar5,arg1_02,*(arg1_00 + 0x76));
                                            }
                                            **(arg1_00 + 0x74) = 0x31;
                                            puVar5 = puStack_c8 + uStack_b8;
                                            arg1_02 = puStack_c8;
                                            while (_auStackX_8 = arg1_02, arg1_02 < puVar5) {
                                                iVar3 = fcn.0001c80c(arg1_02,puVar5 - arg1_02,&puStack_c8);
                                                arg1_01 = puStack_c8;
                                                if (iVar3 < 0) {
                                                    return arg1_00;
                                                }
                                                if (cStack_bf != '\0') {
                                                    return arg1_00;
                                                }
                                                if (uStack_bc != 0x10) {
                                                    return arg1_00;
                                                }
                                                arg1_02 = puStack_c8 + uStack_b8;
                                                _auStackX_8 = puStack_c8;
                                                iVar3 = fcn.0001c80c(puStack_c8,arg1_02 - puStack_c8,auStack_b0);
                                                if (iVar3 < 0) {
                                                    iVar3 = -1;
                                                }
                                                else {
                                                    iVar3 = fcn.0001c9dc(auStack_98,auStackX_8,auStack_b0);
                                                    arg1_01 = _auStackX_8;
                                                }
                                                if (iVar3 != 0) {
                                                    return arg1_00;
                                                }
                                                iVar3 = fcn.0001c80c(arg1_01,arg1_02 - arg1_01,&puStack_c8);
                                                if (iVar3 < 0) {
                                                    return arg1_00;
                                                }
                                                puVar7 = arg1_02;
                                                if ((cStack_bf == '\0') && (uStack_bc == 0x11)) {
                                                    puVar7 = puStack_c8 + uStack_b8;
                                                    _auStackX_8 = puStack_c8;
                                                    arg1_01 = puStack_c8;
                                                }
                                                arg1_03 = puStack_c8;
                                                iVar3 = fcn.00016870(auStack_98);
                                                if (iVar3 != 0) {
                                                    iVar4 = puVar7;
                                                    iVar2 = arg1_01;
                                                    if (((_auStack_48 == 7) && (iStack_84 == 9)) && (iStack_80 == 3)) {
                                                        iVar3 = fcn.0001c80c(arg1_01,iVar4 - iVar2,auStack_b0);
                                                        if (iVar3 < 0) {
                                                            iVar3 = -1;
                                                        }
                                                        else {
                                                            iVar3 = fcn.0001c9dc(auStack_98,auStackX_8,auStack_b0);
                                                        }
                                                        if (iVar3 != 0) {
                                                            return arg1_00;
                                                        }
                                                        iVar3 = fcn.0001c80c(arg1_01,iVar4 - iVar2,auStack_b0);
                                                        if (-1 < iVar3) {
                                                            fcn.0001c9dc(arg1_00 + 0x78,auStackX_8,auStack_b0);
                                                        }
                                                    }
                                                    else if (iVar3 != 0) {
                                                        if (((_auStack_48 == 7) && (iStack_84 == 9)) && (iStack_80 == 5)
                                                           ) {
                                                            iVar3 = fcn.0001c80c(arg1_01,iVar4 - iVar2,&puStack_c8);
                                                            if (iVar3 < 0) {
                                                                return arg1_00;
                                                            }
                                                            if (cStack_bf != '\0') {
                                                                return arg1_00;
                                                            }
                                                            iVar3 = fcn.00016014(puStack_c8,uStack_b8,uStack_bc,
                                                                                 arg1_00 + 0x92);
                                                            if (iVar3 < 0) {
                                                                return arg1_00;
                                                            }
                                                        }
                                                        else if (iVar3 != 0) {
                                                            if (((_auStack_48 == 7) && (iStack_84 == 9)) &&
                                                               (iStack_80 == 4)) {
                                                                iVar3 = fcn.000129ac(auStackX_8,iVar4 - iVar2,
                                                                                     arg1_00 + 0x8e,arg1_00 + 0x90);
                                                                if (iVar3 != 0) {
                                                                    return arg1_00;
                                                                }
                                                            }
                                                            else if (((((iVar3 != 0) && (_auStack_48 == 9)) &&
                                                                      (iStack_84 == 9)) &&
                                                                     ((iStack_80 == 0x10 && (iStack_7c == 2)))) &&
                                                                    (iStack_78 == 0xc)) {
                                                                iVar3 = fcn.0001c80c(arg1_03,uStack_b8,&puStack_c8);
                                                                if (iVar3 < 0) {
                                                                    return arg1_00;
                                                                }
                                                                if (cStack_bf != '\0') {
                                                                    return arg1_00;
                                                                }
                                                                if (uStack_bc != 0x10) {
                                                                    return arg1_00;
                                                                }
                                                                iVar3 = fcn.0001c80c(puStack_c8,uStack_b8,&puStack_c8)
                                                                ;
                                                                if (iVar3 < 0) {
                                                                    return arg1_00;
                                                                }
                                                                if (cStack_bf != '\0') {
                                                                    return arg1_00;
                                                                }
                                                                if (uStack_bc != 0x10) {
                                                                    return arg1_00;
                                                                }
                                                                iVar3 = fcn.0001c80c(puStack_c8,uStack_b8,&puStack_c8)
                                                                ;
                                                                if (iVar3 < 0) {
                                                                    return arg1_00;
                                                                }
                                                                if (cStack_bf != '\0') {
                                                                    return arg1_00;
                                                                }
                                                                if (uStack_bc != 0x10) {
                                                                    return arg1_00;
                                                                }
                                                                iVar3 = uStack_b8 + puStack_c8;
                                                                _auStackX_8 = puStack_c8;
                                                                iVar4 = fcn.000129ac(auStackX_8,iVar3 - puStack_c8,
                                                                                     arg1_00 + 0x94,arg1_00 + 0x96);
                                                                if (iVar4 != 0) {
                                                                    return arg1_00;
                                                                }
                                                                iVar3 = fcn.0001c80c(_auStackX_8,iVar3 - _auStackX_8,
                                                                                     &puStack_c8);
                                                                if (iVar3 < 0) {
                                                                    return arg1_00;
                                                                }
                                                                if (cStack_bf != '\0') {
                                                                    return arg1_00;
                                                                }
                                                                if (uStack_bc != 0x10) {
                                                                    return arg1_00;
                                                                }
                                                                iVar3 = fcn.0001c80c(puStack_c8,uStack_b8,&puStack_c8)
                                                                ;
                                                                if (iVar3 < 0) {
                                                                    return arg1_00;
                                                                }
                                                                if (cStack_bf != '\0') {
                                                                    return arg1_00;
                                                                }
                                                                if (uStack_bc != 0x10) {
                                                                    return arg1_00;
                                                                }
                                                                iVar3 = fcn.0001c80c(puStack_c8,uStack_b8,&puStack_c8)
                                                                ;
                                                                if (iVar3 < 0) {
                                                                    return arg1_00;
                                                                }
                                                                if (cStack_bf != '\x02') {
                                                                    return arg1_00;
                                                                }
                                                                if (uStack_bc != 4) {
                                                                    return arg1_00;
                                                                }
                                                                _auStackX_8 = puStack_c8;
                                                                fcn.00012a60(arg1_00,auStackX_8);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            if (*(arg1_00 + 0x8e) == 0) {
                                                return arg1_00;
                                            }
                                            arg3 = puStackX_18;
                                        }
                                        iVar6 = *arg1;
                                        iVar3 = fcn.00012b40(arg1_02,(iVar6 + arg2) - arg1_02,arg1_00 + 0xf4,
                                                             auStackX_8);
                                        if ((iVar3 == 0) &&
                                           (iVar3 = fcn.000129ac(auStackX_8,(iVar6 + arg2) - _auStackX_8,
                                                                 arg1_00 + 0x122,arg1_00 + 0x124), iVar3 == 0)) {
                                            *arg3 = 0;
                                            *arg1 = _auStackX_8;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            return arg1_00;
        }
    }
    return NULL;
}


/* fcn.000133cc @ 0x133cc */

//WARNING: Variable defined which should be unmapped: var_17h
//WARNING: Variable defined which should be unmapped: var_27h

ulong fcn.000133cc(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    uint in_register_00000014;
    ulong uVar4;
    ulong uVar5;
    uint32_t var_17h;
    int64_t var_27h;
    int64_t var_6fh;
    int64_t iStack_b8;
    char cStack_af;
    int iStack_ac;
    uint32_t uStack_a8;
    int iStack_98;
    int iStack_94;
    int iStack_90;
    int iStack_8c;
    int iStack_88;
    int iStack_84;
    int iStack_80;
    int iStack_7c;
    int iStack_78;
    int iStack_74;
    int64_t var_59h;
    uint32_t var_50h;
    int32_t var_49h;
    uchar auStack_48 [7];
    uint32_t var_39h;
    uint32_t var_35h;
    uint32_t var_31h;
    uint32_t var_2dh;
    uint32_t var_29h;
    uint32_t var_25h;
    uint32_t var_21h;
    uint32_t var_1dh;
    uint32_t var_19h;
    uint32_t var_15h;
    
    if ((((0xff < CONCAT44(in_register_00000014,arg2)) && (iVar1 = fcn.0001c80c(arg1,arg2,&iStack_b8), -1 < iVar1))
        && (cStack_af == '\x02')) && (iStack_ac == 1)) {
        iVar1 = uStack_a8 + iStack_b8;
        iVar2 = fcn.0001c80c(iStack_b8,iVar1 - iStack_b8,&iStack_b8);
        iVar3 = iStack_b8;
        if (((-1 < iVar2) && (cStack_af == '\0')) && (iStack_ac == 0x10)) {
            stack0x00000010 = iStack_b8;
            iVar2 = fcn.0001c80c(iStack_b8,iVar1 - iStack_b8,&var_31h + 1);
            uVar4 = 0xffffffff;
            if (iVar2 < 0) {
                iVar2 = -1;
            }
            else {
                iVar2 = fcn.0001c9dc(&iStack_98,&var_17h + 1,&var_31h + 1);
                iVar3 = stack0x00000010;
            }
            uVar5 = 0xffffffff;
            if ((((iVar2 == 0) && (uVar5 = uVar4, 6 < _auStack_48)) &&
                ((iStack_98 == 1 &&
                 ((((iStack_94 == 3 && (iStack_90 == 6)) && (iStack_8c == 1)) && ((iStack_88 == 4 && (iStack_84 == 1))))
                 )))) && (((_auStack_48 == 10 && ((iStack_80 == 0x137 && (iStack_7c == 3)))) &&
                          (((iStack_78 == 3 &&
                            (((iStack_74 == 1 && (iVar1 = fcn.0001c80c(iVar3,iVar1 - iVar3,&iStack_b8), -1 < iVar1))
                             && (cStack_af == '\0')))) &&
                           (((iStack_ac == 0x11 && (0xff < uStack_a8)) &&
                            (iVar3 = fcn.00013c24(iStack_b8,uStack_a8), iVar3 != 0)))))))) {
                *(arg3 + 0xe8) = iVar3;
                uVar5 = 0;
                *(arg3 + 0xd0) = *(iVar3 + 0xd0);
            }
            return uVar5;
        }
    }
    return 0xffffffff;
}


/* fcn.000168a8 @ 0x168a8 */

ulong fcn.000168a8(uint32_t arg1)

{
    ulong uVar1;
    uint in_register_0000000c;
    
    if ((((*(CONCAT44(in_register_0000000c,arg1) + 0x50) != 6) ||
         (uVar1 = 1, *CONCAT44(in_register_0000000c,arg1) != 1)) || (*(CONCAT44(in_register_0000000c,arg1) + 4) != 3)
        ) || (((*(CONCAT44(in_register_0000000c,arg1) + 8) != 0xe ||
               (*(CONCAT44(in_register_0000000c,arg1) + 0xc) != 3)) ||
              ((*(CONCAT44(in_register_0000000c,arg1) + 0x10) != 2 ||
               (*(CONCAT44(in_register_0000000c,arg1) + 0x14) != 0x1a)))))) {
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.000168dc @ 0x168dc */

ulong fcn.000168dc(uint32_t arg1)

{
    ulong uVar1;
    uint in_register_0000000c;
    
    if ((((((*(CONCAT44(in_register_0000000c,arg1) + 0x50) != 9) || (*CONCAT44(in_register_0000000c,arg1) != 2)) ||
          (*(CONCAT44(in_register_0000000c,arg1) + 4) != 0x10)) ||
         ((*(CONCAT44(in_register_0000000c,arg1) + 8) != 0x348 ||
          (uVar1 = 1, *(CONCAT44(in_register_0000000c,arg1) + 0xc) != 1)))) ||
        ((*(CONCAT44(in_register_0000000c,arg1) + 0x10) != 0x65 ||
         ((*(CONCAT44(in_register_0000000c,arg1) + 0x14) != 3 || (*(CONCAT44(in_register_0000000c,arg1) + 0x18) != 4))
         )))) || (*(CONCAT44(in_register_0000000c,arg1) + 0x1c) != 2)) {
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00013610 @ 0x13610 */

int fcn.00013610(int64_t arg1,ulong noname_1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    int64_t iStackX_8;
    int64_t iStack_98;
    char cStack_8f;
    int iStack_8c;
    uint32_t uStack_88;
    uchar auStack_80 [24];
    uchar auStack_68 [32];
    int iStack_48;
    
    iVar2 = arg1;
    noname_1._0_4_ = iVar2 + noname_1;
    iVar1 = fcn.0001c80c(arg1,noname_1 - iVar2,&iStack_98);
    if ((iVar1 < 0) || (cStack_8f != '\x02')) {
        return 0;
    }
    iVar1 = fcn.0001c80c(iStack_98,noname_1 - iStack_98,&iStack_98);
    if (((-1 < iVar1) && (cStack_8f == '\0')) && (iStack_8c == 0x10)) {
        *(arg2 + 0x58) = iStack_98;
        *(arg2 + 0x60) = uStack_88;
        iVar2 = fcn.0001c80c(iStack_98,(uStack_88 + iStack_98) - iVar2,&iStack_98);
        if (((((-1 < iVar2) && (cStack_8f == '\0')) &&
             ((iStack_8c == 0x10 &&
              ((iVar2 = fcn.0001c80c(uStack_88 + iStack_98,noname_1 - (uStack_88 + iStack_98),&iStack_98), -1 < iVar2
               && (cStack_8f == '\0')))))) && (iStack_8c == 0x10)) &&
           (((iVar2 = fcn.0001c80c(iStack_98,uStack_88,&iStack_98), -1 < iVar2 && (cStack_8f == '\0')) &&
            (iStack_8c == 0x10)))) {
            iVar2 = fcn.0001c80c(iStack_98,uStack_88,auStack_80);
            if (iVar2 < 0) {
                iVar2 = -1;
            }
            else {
                iVar2 = fcn.0001c9dc(auStack_68,&iStackX_8,auStack_80);
            }
            if ((iVar2 == 0) &&
               ((iVar2 = fcn.000168a8(auStack_68), iVar2 != 0 ||
                ((iVar2 = fcn.000168dc(auStack_68), iVar2 != 0 &&
                 ((iStack_48 == 1 || ((iVar2 != 0 && ((iStack_48 == 2 || ((iVar2 != 0 && (iStack_48 == 3)))))))))))))) {
                iStackX_8 = uStack_88 + iStack_98;
                iVar2 = fcn.000129ac(&iStackX_8,noname_1 - (uStack_88 + iStack_98),arg2 + 0xc0,arg2 + 200);
                return -(iVar2 != 0);
            }
        }
    }
    return -1;
}


/* fcn.000137cc @ 0x137cc */

ulong fcn.000137cc(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint8_t *puVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    uint32_t *arg1_00;
    uint64_t uVar6;
    ulong uVar7;
    uint32_t *puVar8;
    uint in_register_00000014;
    uint32_t *puVar9;
    int64_t arg2_00;
    uint8_t *puVar10;
    uint32_t *puStackX_10;
    uint32_t *puStack_b8;
    char cStack_af;
    uint32_t uStack_ac;
    uint32_t uStack_a8;
    uchar auStack_a0 [24];
    int iStack_88;
    int iStack_84;
    int iStack_80;
    int iStack_7c;
    int iStack_78;
    int iStack_74;
    int iStack_70;
    int iStack_6c;
    int iStack_68;
    int iStack_64;
    uint64_t uStack_38;
    
    if ((0xff < CONCAT44(in_register_00000014,arg2)) && (arg1_00 = fcn.00019058(0x498), arg1_00 != NULL)) {
        fcn.00011250(arg1_00,0x498,0);
        puVar1 = arg1 + CONCAT44(in_register_00000014,arg2);
        iVar5 = puVar1;
        iVar3 = fcn.0001c80c(arg1,iVar5 - arg1,&puStack_b8);
        if ((-1 < iVar3) &&
           ((((cStack_af == '\x02' && (uStack_ac == 0)) &&
             (iVar3 = fcn.0001c80c(puStack_b8,iVar5 - puStack_b8,&puStack_b8), -1 < iVar3)) &&
            ((cStack_af == '\0' && (uStack_ac == 4)))))) {
            *(arg3 + 0x58) = puStack_b8;
            *(arg3 + 0x60) = uStack_a8;
            iVar3 = fcn.0001c80c(puStack_b8,uStack_a8,&puStack_b8);
            if ((-1 < iVar3) && ((cStack_af == '\0' && (uStack_ac == 0x10)))) {
                iVar3 = uStack_a8 + puStack_b8;
                iVar4 = fcn.0001c80c(puStack_b8,iVar3 - puStack_b8,&puStack_b8);
                if ((-1 < iVar4) && (((cStack_af == '\0' && (uStack_ac == 2)) && (uStack_a8 == 1)))) {
                    uVar2 = *puStack_b8;
                    puVar9 = puStack_b8 + 1;
                    *arg1_00 = uVar2;
                    if (uVar2 == 1) {
                        puStackX_10 = puVar9;
                        iVar3 = fcn.0001c80c(puVar9,iVar3 - puVar9,auStack_a0);
                        if (iVar3 < 0) {
                            iVar3 = -1;
                        }
                        else {
                            iVar3 = fcn.0001c9dc(&iStack_88,&puStackX_10,auStack_a0);
                            puVar9 = puStackX_10;
                        }
                        if ((((((iVar3 == 0) && (6 < uStack_38)) &&
                              ((iStack_88 == 1 && ((iStack_84 == 3 && (iStack_80 == 6)))))) && (iStack_7c == 1)) &&
                            ((((iStack_78 == 4 && (iStack_74 == 1)) && (uStack_38 == 10)) &&
                             ((iStack_70 == 0x259 && (iStack_6c == 10)))))) &&
                           ((((iStack_68 == 3 &&
                              ((iStack_64 == 1 &&
                               (iVar3 = fcn.0001c80c(puVar9,iVar5 - puVar9,&puStack_b8), puVar9 = puStack_b8,
                               -1 < iVar3)))) && (cStack_af == '\0')) && (uStack_ac == 0x10)))) {
                            puVar10 = uStack_a8 + puStack_b8;
                            puStackX_10 = puStack_b8;
                            arg2_00 = puVar10 - puStack_b8;
                            iVar3 = fcn.0001c80c(puStack_b8,arg2_00,auStack_a0);
                            if (iVar3 < 0) {
                                iVar3 = -1;
                            }
                            else {
                                iVar3 = fcn.000159bc(puVar9,arg2_00,arg1_00 + 0x5e,&puStackX_10);
                                puVar9 = puStackX_10;
                            }
                            if (iVar3 == 0) {
                                puVar8 = arg1_00 + 0x5e;
                                iVar3 = fcn.000168a8(puVar8);
                                if (((((iVar3 != 0) || ((iVar3 = fcn.000168dc(puVar8), iVar3 != 0 && (puVar8[8] == 1)))
                                      ) || ((iVar3 = fcn.000168dc(puVar8), iVar3 != 0 && (puVar8[8] == 2)))) ||
                                    ((iVar3 = fcn.000168dc(puVar8), iVar3 != 0 && (puVar8[8] == 3)))) &&
                                   ((iVar3 = fcn.000129ac(&puStackX_10,puVar10 - puVar9,arg1_00 + 0x8e,arg1_00 + 0x90
                                                         ), iVar3 == 0 &&
                                    (((iVar3 = fcn.0001c80c(puStackX_10,iVar5 - puStackX_10,&puStack_b8), -1 < iVar3
                                      && (cStack_af == '\0')) && (uStack_ac == 2)))))) {
                                    uVar6 = uStack_a8;
                                    if ((uStack_a8 != 0) && (arg1_00 + 0x56 != puStack_b8)) {
                                        fcn.000111d0(arg1_00 + 0x56,puStack_b8,uStack_a8);
                                        uVar6 = uStack_a8;
                                    }
                                    *(arg1_00 + 0x5c) = uVar6;
                                    puVar10 = uStack_a8 + puStack_b8;
                                    if (((((puVar10 <= puVar1) &&
                                          (iVar3 = fcn.0001c80c(puVar10,iVar5 - puVar10,&puStack_b8), -1 < iVar3)) &&
                                         ((cStack_af == '\0' &&
                                          ((((iVar3 = fcn.00016014(puStack_b8,uStack_a8,uStack_ac,arg1_00 + 0x92),
                                             -1 < iVar3 &&
                                             (iVar3 = fcn.0001c80c(uStack_a8 + puStack_b8,
                                                                   iVar5 - (uStack_a8 + puStack_b8),&puStack_b8),
                                             -1 < iVar3)) && (cStack_af == '\0')) &&
                                           ((uStack_ac == 0x10 &&
                                            (iVar3 = fcn.0001c80c(uStack_a8 + puStack_b8,
                                                                  iVar5 - (uStack_a8 + puStack_b8),&puStack_b8),
                                            -1 < iVar3)))))))) &&
                                        ((cStack_af == '\x02' &&
                                         ((uStack_ac == 0 &&
                                          (iVar5 = fcn.0001c80c(puStack_b8,iVar5 - puStack_b8,&puStack_b8),
                                          -1 < iVar5)))))) && ((cStack_af == '\x02' && (uStack_ac == 4)))) {
                                        puStackX_10 = puStack_b8;
                                        uVar7 = fcn.00015b40(puStack_b8,puVar1 - puStack_b8,arg1_00 + 2,&puStackX_10)
                                        ;
                                        if (uVar7 == 0) {
                                            *(arg3 + 0xd0) = arg1_00;
                                            return uVar7;
                                        }
                                    }
                                }
                            }
                        }
                        return 0xffffffff;
                    }
                }
            }
        }
    }
    return 0xffffffff;
}


/* fcn.00013560 @ 0x13560 */

int fcn.00013560(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int *piVar3;
    int aiStackX_8 [2];
    int64_t iStackX_10;
    
    aiStackX_8[0] = -1;
    iStackX_10 = arg1;
    iVar1 = fcn.00012db0(&iStackX_10,arg2,aiStackX_8);
    if (aiStackX_8[0] == 0) {
        *(arg3 + 0xe0) = iVar1;
        if (((*(arg3 + 0x58) != 0) && (iVar1 != 0)) && (*(iVar1 + 0x1d0) != 0)) {
            iVar2 = *(arg3 + 0x50);
            if (((iVar2 != 0) && (iVar2 == *(iVar1 + 0x230))) && (iVar2 = iVar2, 0 < iVar2)) {
                piVar3 = iVar1 + 0x1e0 + iVar2 * 4;
                do {
                    if (*((arg3 - (iVar1 + 0x1e0)) + piVar3) != *piVar3) break;
                    iVar2 = iVar2 + -1;
                    piVar3 = piVar3 + -1;
                } while (0 < iVar2);
            }
        }
        fcn.000133cc(iStackX_10,(arg1 + arg2) - iStackX_10,arg3);
        aiStackX_8[0] = 0;
    }
    return aiStackX_8[0];
}


/* fcn.000158fc @ 0x158fc */

ulong fcn.000158fc(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    
    if (arg1 == 0) {
        if (arg2 == 0) {
            return 0;
        }
code_r0x00015925:
        uVar3 = 0xffffffff;
    }
    else {
        if (arg2 != 0) {
            uVar2 = *(arg1 + 0x140);
            if (uVar2 < *(arg2 + 0x140)) goto code_r0x00015925;
            if (uVar2 == *(arg2 + 0x140)) {
                uVar4 = 0;
                if (uVar2 != 0) {
                    piVar5 = arg1 + 8;
                    do {
                        iVar1 = *((arg2 - arg1) + -8 + piVar5);
                        if ((piVar5[-1] < iVar1) || (iVar1 < piVar5[-1])) goto code_r0x00015925;
                        uVar3 = fcn.00015844(*piVar5,*((arg2 - arg1) + piVar5));
                        if (uVar3 != 0) {
                            return uVar3;
                        }
                        uVar4 = uVar4 + 1;
                        piVar5 = piVar5 + 2;
                    } while (uVar4 < *(arg1 + 0x140));
                }
                uVar3 = fcn.00015844(*(arg1 + 0x148),*(arg2 + 0x148));
                return uVar3;
            }
        }
        uVar3 = 1;
    }
    return uVar3;
}


/* fcn.00011230 @ 0x11230 */

int64_t fcn.00011230(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.0001cc8c @ 0x1cc8c */

uint fcn.0001cc8c(int64_t arg1)

{
    uint uVar1;
    
    if (*0x1e178 < 0x7b2) {
        uVar1 = 0xffffffff;
    }
    else {
        uVar1 = fcn.0001cb10(*0x1e178,*0x1e17a,*0x1e17b,*0x1e17c);
    }
    *arg1 = 0;
    *(arg1 + 4) = 0;
    return uVar1;
}


/* fcn.00016e88 @ 0x16e88 */

ulong fcn.00016e88(uint32_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint in_register_0000000c;
    
    uVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x400);
    uVar2 = uVar1 & 1;
    if ((((uVar2 == 0) || (*(CONCAT44(in_register_0000000c,arg1) + 0x404) != 0)) &&
        ((*(CONCAT44(in_register_0000000c,arg1) + 0x10) != 2 || (uVar2 != 0)))) &&
       (((uVar1 & 4) == 0 || ((*(CONCAT44(in_register_0000000c,arg1) + 0x40c) & 0x20) != 0)))) {
        return 0;
    }
    return 0xffffffff;
}


/* fcn.00016aa8 @ 0x16aa8 */

ulong fcn.00016aa8(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    int64_t arg2_00;
    
    arg2_00 = arg2 + 0x30;
    iVar1 = fcn.00016870(arg2_00);
    if (((iVar1 == 0) || (*(arg2 + 0x80) != 7)) || (*(arg2 + 0x44) != 1)) {
        uVar2 = 0xffffffff;
    }
    else {
        uVar2 = fcn.00016b08(arg1,arg2_00,*(arg2 + 0x3f0),*(arg2 + 0x3f8));
    }
    return uVar2;
}


/* fcn.000146e0 @ 0x146e0 */

ulong fcn.000146e0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint32_t uVar2;
    int64_t *in_stack_00000028;
    
    uVar1 = 0;
    uVar2 = arg1 & 0xff;
    if (arg1 == '\0') {
        if (*in_stack_00000028 == 0x14) {
            fcn.00016ff0(1,arg2,arg3,arg4);
        }
        else {
            uVar1 = 0xffffffff;
            *in_stack_00000028 = 0x14;
        }
    }
    else if (uVar2 == 1) {
        if (*in_stack_00000028 == 0x20) {
            fcn.00015120(1,arg2,arg3,arg4);
        }
        else {
            uVar1 = 0xffffffff;
            *in_stack_00000028 = 0x20;
        }
    }
    else if (uVar2 == 2) {
        if (*in_stack_00000028 == 0x30) {
            fcn.000183e4(1,arg2,arg3,arg4);
        }
        else {
            uVar1 = 0xffffffff;
            *in_stack_00000028 = 0x30;
        }
    }
    else {
        if (uVar2 == 3) {
            if (*in_stack_00000028 == 0x40) {
                fcn.00018f68(1,arg2,arg3,arg4);
                return 0;
            }
            *in_stack_00000028 = 0x200;
        }
        else {
            if (uVar2 != 4) {
                *in_stack_00000028 = 0;
                return 0xffffffff;
            }
            if (*in_stack_00000028 == 0x10) {
                fcn.0001bd90(arg1,arg2,arg3,arg4);
                return 0;
            }
            *in_stack_00000028 = 0x10;
        }
        uVar1 = 0xffffffff;
    }
    return uVar1;
}


/* fcn.0001bd90 @ 0x1bd90 */

void fcn.0001bd90(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    int64_t var_48h;
    int32_t var_10h;
    int32_t var_ch;
    
    uVar3 = *arg2;
    piVar1 = *arg1;
    var_50h = uVar3 << 3;
    var_4ch = uVar3 >> 0x1d;
    var_60h = 0x67452301;
    var_5ch = -0x10325477;
    var_58h = -0x67452302;
    var_54h = 0x10325476;
    if (0x3f < uVar3) {
        uVar2 = uVar3 >> 6;
        do {
            if (&var_48h != piVar1) {
                fcn.000111d0(&var_48h,piVar1,0x40);
            }
            fcn.0001bf04(&var_60h,&var_48h);
            piVar1 = piVar1 + 8;
            uVar3 = uVar3 - 0x40;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    if ((uVar3 != 0) && (&var_48h != piVar1)) {
        fcn.000111d0(&var_48h,piVar1,uVar3);
    }
    uVar3 = var_50h >> 3 & 0x3f;
    uVar4 = -uVar3 + 0x3f;
    *(&var_48h + uVar3) = 0x80;
    piVar1 = &var_48h + uVar3 + 1;
    if (uVar4 < 8) {
        if (uVar4 != 0) {
            fcn.00011250(piVar1,uVar4,0);
        }
        fcn.0001bf04(&var_60h,&var_48h);
        uVar2 = 0x38;
        piVar1 = &var_48h;
    }
    else {
        uVar3 = -uVar3 + 0x37;
        uVar2 = uVar3;
        if (uVar3 == 0) goto code_r0x0001bea0;
    }
    fcn.00011250(piVar1,uVar2,0);
code_r0x0001bea0:
    var_10h = var_50h;
    var_ch = var_4ch;
    fcn.0001bf04(&var_60h,&var_48h);
    if (arg3 != &var_60h) {
        fcn.000111d0(arg3,&var_60h,0x10);
    }
    fcn.00011250(&var_60h,0x58,0);
    return;
}


/* fcn.000127dc @ 0x127dc */

uint * fcn.000127dc(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint *arg1_00;
    ulong uVar2;
    int64_t iVar3;
    int64_t arg2_00;
    int64_t iStack_28;
    char cStack_1f;
    int iStack_1c;
    uint32_t uStack_18;
    
    arg1_00 = fcn.00019058(0x18);
    if (arg1_00 != NULL) {
        *arg1_00 = 0;
        uVar2 = fcn.0001bce0();
        *(arg1_00 + 2) = uVar2;
        iVar3 = fcn.0001bce0();
        *(arg1_00 + 4) = iVar3;
        if ((((*(arg1_00 + 2) != 0) && (iVar3 != 0)) && (iVar1 = fcn.0001c80c(arg1,arg2,&iStack_28), -1 < iVar1)) &&
           ((cStack_1f == '\0' && (iStack_1c == 0x10)))) {
            arg2_00 = uStack_18 + iStack_28;
            iVar3 = fcn.00015574(iStack_28,arg2_00,*(arg1_00 + 2));
            iVar3 = fcn.00015574(iVar3,arg2_00,*(arg1_00 + 4));
            if ((iVar3 != 0) && (iVar3 == arg2_00)) {
                return arg1_00;
            }
        }
        fcn.00015778(arg1_00);
    }
    return NULL;
}


/* fcn.000128a0 @ 0x128a0 */

ulong fcn.000128a0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t *puVar1;
    int iVar2;
    char *pcVar3;
    char *pcVar4;
    uint64_t arg3_00;
    uint64_t *in_stack_00000028;
    
    puVar1 = in_stack_00000028;
    in_stack_00000028 = *in_stack_00000028;
    iVar2 = fcn.000155cc(arg2,arg3,arg4,&stack0x00000028);
    if ((((-1 < iVar2) && (0x1a < in_stack_00000028)) && (*arg4 == '\0')) && (*(arg4 + 1) < 2)) {
        pcVar4 = arg4 + 3;
        if (*(arg4 + 1) == 0) {
            if (*(arg4 + 2) != '\0') {
                return 0xffffffff;
            }
            for (pcVar3 = arg4 + 4; ((pcVar3 < in_stack_00000028 + arg4 && (*pcVar4 == '\0')) && (*pcVar3 == '\0'));
                pcVar3 = pcVar3 + 1) {
                pcVar4 = pcVar4 + 1;
            }
        }
        else {
            if (*(arg4 + 2) != -1) {
                return 0xffffffff;
            }
            for (; (pcVar4 < in_stack_00000028 + arg4 && (*pcVar4 == -1)); pcVar4 = pcVar4 + 1) {
            }
        }
        if (((7 < pcVar4 + (-2 - arg4)) && (pcVar4 + 0x10 < in_stack_00000028 + arg4)) && (*pcVar4 == '\0')) {
            pcVar4 = pcVar4 + 1;
            arg3_00 = in_stack_00000028 + (arg4 - pcVar4);
            if ((arg3_00 != 0) && (arg4 != pcVar4)) {
                fcn.000111d0(arg4,pcVar4,arg3_00);
            }
            *puVar1 = arg3_00;
            return 0;
        }
    }
    return 0xffffffff;
}


/* fcn.000147b4 @ 0x147b4 */

ulong fcn.000147b4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    int64_t arg4_00;
    uint64_t uVar5;
    uint64_t uStackX_8;
    int64_t iStack_b8;
    char cStack_af;
    int iStack_ac;
    uint32_t uStack_a8;
    uchar auStack_a0 [24];
    uchar auStack_88 [96];
    
    if ((((arg1 != 0) && (arg2 != 0)) && (arg3 != 0)) &&
       (iVar4 = fcn.000127dc(*(arg2 + 0x388),*(arg2 + 0x390)), iVar4 != 0)) {
        uVar1 = *(*(arg1 + 0xe0) + 0x490);
        uStackX_8 = uVar1;
        arg4_00 = fcn.00019058(uVar1);
        if (arg4_00 == 0) {
            fcn.00015778(iVar4);
        }
        else {
            iVar2 = fcn.000128a0(iVar4,*(*(arg1 + 0xe0) + 0x488),uVar1,arg4_00);
            if (iVar2 < 0) {
                fcn.00015778(iVar4);
                fcn.0001913c(arg4_00);
            }
            else {
                fcn.00015778(iVar4);
                uVar1 = uStackX_8;
                iVar2 = fcn.0001c80c(arg4_00,uStackX_8,&iStack_b8);
                if (((-1 < iVar2) && (cStack_af == '\0')) && (iStack_ac == 0x10)) {
                    iVar2 = uStack_a8 + iStack_b8;
                    iVar3 = fcn.0001c80c(iStack_b8,uStack_a8,&iStack_b8);
                    if (((-1 < iVar3) && (cStack_af == '\0')) && (iStack_ac == 0x10)) {
                        uVar5 = uStack_a8 + iStack_b8;
                        iVar3 = fcn.0001c80c(iStack_b8,uStack_a8,auStack_a0);
                        if (iVar3 < 0) {
                            iVar3 = -1;
                        }
                        else {
                            iVar3 = fcn.0001c9dc(auStack_88,&uStackX_8,auStack_a0);
                        }
                        if (((iVar3 == 0) &&
                            (((uVar5 <= uStackX_8 ||
                              ((((iVar3 = fcn.0001c80c(uStackX_8,uVar5 - uStackX_8,&iStack_b8), -1 < iVar3 &&
                                 (cStack_af == '\0')) && (iStack_ac == 5)) && (uStack_a8 + iStack_b8 == uVar5)))) &&
                             ((iVar2 = fcn.0001c80c(uVar5,iVar2 - uVar5,&iStack_b8), -1 < iVar2 &&
                              (cStack_af == '\0')))))) &&
                           ((iStack_ac == 4 &&
                            ((uVar5 = uStack_a8, arg4_00 + uVar1 <= uVar5 + iStack_b8 && (uVar5 == arg4)))))) {
                            if ((uVar5 == 0) || (iStack_b8 == arg3)) {
                                iVar4 = 0;
                            }
                            else {
                                iVar4 = fcn.00011230(iStack_b8,arg3,uVar5);
                            }
                            if (iVar4 == 0) {
                                fcn.0001913c(arg4_00);
                                return 0;
                            }
                        }
                        return 0xffffffff;
                    }
                }
            }
        }
    }
    return 0xffffffff;
}


/* fcn.000149cc @ 0x149cc */

ulong fcn.000149cc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t arg2_00;
    int iVar1;
    int64_t arg1_00;
    int64_t arg3_00;
    int8_t unaff_BL;
    uint64_t uVar2;
    
    if ((((arg1 != 0) && (arg2 != 0)) && (arg3 != 0)) &&
       (arg1_00 = fcn.000127dc(*(arg2 + 0x388),*(arg2 + 0x390)), arg1_00 != 0)) {
        arg2_00 = *(*(arg1 + 0xe0) + 0x490);
        uVar2 = arg2_00;
        arg3_00 = fcn.00019058(arg2_00);
        if (arg3_00 == 0) {
            fcn.00015778(arg1_00);
        }
        else {
            iVar1 = fcn.000155cc(*(*(arg1 + 0xe0) + 0x488),arg2_00,arg3_00,&stack0x00000008);
            if (iVar1 < 0) {
                fcn.00015778(arg1_00);
            }
            else {
                fcn.00015778(arg1_00);
                if ((*(*(arg1 + 0xe0) + 0x480) <= arg4) &&
                   (iVar1 = fcn.0001864c(arg3,arg4 & 0xffffffff,arg3_00,uVar2 & 0xffffffff,uVar2,unaff_BL),
                   iVar1 == 0)) {
                    fcn.0001913c(arg3_00);
                    return 0;
                }
            }
            fcn.0001913c(arg3_00);
        }
    }
    return 0xffffffff;
}


/* fcn.00015388 @ 0x15388 */

ulong fcn.00015388(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    int *piVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    int64_t iVar7;
    uint32_t uVar8;
    int iVar9;
    uchar *puVar10;
    int *piVar11;
    uint32_t uVar12;
    uint32_t *puVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    int aiStack_150 [2];
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    uchar auStack_130 [8];
    uint32_t auStack_128 [64];
    
    piVar11 = arg1 + 8;
    uVar3 = *piVar11;
    uVar4 = *(arg1 + 0x10);
    uVar5 = *(arg1 + 0x18);
    uVar6 = *(arg1 + 0x20);
    uStack_148 = uVar3;
    uStack_140 = uVar4;
    iVar7 = 0x10;
    uStack_138 = uVar5;
    auStack_130 = uVar6;
    puVar10 = arg2 + 2;
    do {
        *(puVar10 + 4 + auStack_130 + (2 - arg2)) =
             CONCAT11(puVar10[-1],*puVar10) << 8 | puVar10[-2] << 0x18 | puVar10[1];
        iVar7 = iVar7 + -1;
        puVar10 = puVar10 + 4;
    } while (iVar7 != 0);
    iVar7 = 0x30;
    puVar13 = auStack_128 + 0xe;
    do {
        uVar8 = puVar13[-0xd];
        uVar12 = *puVar13;
        puVar13[2] = ((uVar8 << 0xe | uVar8 >> 0x12) ^ (uVar8 >> 7 | uVar8 << 0x19) ^ uVar8 >> 3) +
                     ((uVar12 << 0xf | uVar12 >> 0x11) ^ (uVar12 << 0xd | uVar12 >> 0x13) ^ uVar12 >> 10) +
                     puVar13[-0xe] + puVar13[-5];
        iVar7 = iVar7 + -1;
        puVar13 = puVar13 + 1;
    } while (iVar7 != 0);
    auStack_130._4_4_ = uVar6 >> 0x20;
    iVar7 = 0;
    auStack_130._0_4_ = uVar6;
    uStack_138._4_4_ = uVar5 >> 0x20;
    uStack_138._0_4_ = uVar5;
    uStack_140._4_4_ = uVar4 >> 0x20;
    uStack_140._0_4_ = uVar4;
    uStack_148._4_4_ = uVar3 >> 0x20;
    uStack_148._0_4_ = uVar3;
    do {
        uVar12 = uStack_148;
        uVar17 = uStack_148._4_4_;
        uVar16 = uStack_140;
        uVar14 = uStack_138;
        uVar15 = uStack_138._4_4_;
        uVar8 = auStack_130._0_4_;
        piVar1 = iVar7 + 0x1e1a0;
        piVar2 = auStack_128 + iVar7;
        iVar7 = iVar7 + 4;
        iVar9 = ((uVar14 >> 0xb | uVar14 << 0x15) ^ (uVar14 << 7 | uVar14 >> 0x19) ^ (uVar14 >> 6 | uVar14 << 0x1a)) +
                ((uVar15 ^ uVar8) & uVar14 ^ uVar8) + *piVar1 + *piVar2 + auStack_130._4_4_;
        uStack_138._0_4_ = uStack_140._4_4_ + iVar9;
        uStack_148._0_4_ =
             ((uVar17 | uVar12) & uVar16 | uVar17 & uVar12) +
             iVar9 + ((uVar12 >> 0xd | uVar12 << 0x13) ^ (uVar12 << 10 | uVar12 >> 0x16) ^
                     (uVar12 >> 2 | uVar12 << 0x1e));
        auStack_130._4_4_ = uVar8;
        auStack_130._0_4_ = uVar15;
        uStack_138._4_4_ = uVar14;
        uStack_140._4_4_ = uVar16;
        uStack_140._0_4_ = uVar17;
        uStack_148._4_4_ = uVar12;
    } while (iVar7 < 0x100);
    iVar7 = 8;
    uStack_148 = CONCAT44(uVar12,uStack_148);
    uStack_138 = CONCAT44(uVar14,uStack_138);
    uStack_140 = CONCAT44(uVar16,uVar17);
    do {
        *piVar11 = *piVar11 + *((aiStack_150 - arg1) + piVar11);
        piVar11 = piVar11 + 1;
        iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    return 0;
}


/* fcn.00019780 @ 0x19780 */

ulong fcn.00019780(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t *puVar5;
    int64_t iVar6;
    
    iVar1 = *arg1;
    if (*arg2 < iVar1) {
        return 1;
    }
    if (iVar1 < *arg2) {
        return 0xffffffff;
    }
    puVar5 = *(arg1 + 0x10) + (iVar1 + -1) * 4;
    iVar4 = 0;
    if (0 < iVar1) {
        iVar6 = (*(arg2 + 0x10) + (iVar1 + -1) * 4) - puVar5;
        do {
            uVar2 = *(iVar6 + puVar5);
            uVar3 = *puVar5;
            if (uVar3 >= uVar2 && uVar3 != uVar2) {
                return 1;
            }
            if (uVar3 < uVar2) {
                return 0xffffffff;
            }
            iVar4 = iVar4 + 1;
            puVar5 = puVar5 + -1;
        } while (iVar4 < iVar1);
    }
    return 0;
}


/* fcn.0001b50c @ 0x1b50c */

uint64_t fcn.0001b50c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int8_t iVar1;
    ulong uVar2;
    ulong uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint32_t *puVar8;
    int64_t iVar9;
    int iVar10;
    int64_t iVar11;
    int iVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    int iStack0000000000000028;
    ulong uStack_1870;
    ulong uStack_1868;
    int64_t iStack_1860;
    int iStack_1858;
    uint32_t *puStack_1850;
    uint32_t uStack_1848;
    uint32_t auStack_1838 [6];
    uint32_t auStack_1820 [4];
    int64_t iStack_1810;
    
    iVar4 = fcn.00019dec(arg2);
    if (iVar4 < 8) {
        iVar4 = 2;
    }
    else if (iVar4 < 0x25) {
        iVar4 = 3;
    }
    else if (iVar4 < 0x8d) {
        iVar4 = 4;
    }
    else if (iVar4 < 0x1c3) {
        iVar4 = 5;
    }
    else if (iVar4 < 0x518) {
        iVar4 = 6;
    }
    else {
        iVar4 = (0xdc9 < iVar4) + 7;
    }
    uVar7 = fcn.00019420(auStack_1820);
    if (uVar7 != 0) {
        return uVar7;
    }
    iVar1 = iVar4;
    iVar12 = 1 << (iVar1 - 1U & 0x1f);
    uVar14 = 1 << iVar1;
    iVar10 = iVar12;
    iStack0000000000000028 = iVar12;
    if (iVar12 < uVar14) {
        do {
            uVar5 = fcn.00019420(auStack_1838 + iVar10 * 6);
            if (uVar5 != 0) {
                iVar9 = iVar12;
                if (iVar9 < iVar10) {
                    iVar11 = iVar10 - iVar9;
                    puVar8 = auStack_1838 + iVar9 * 6;
                    do {
                        if (*(puVar8 + 4) != 0) {
                            fcn.000194c0(puVar8);
                        }
                        puVar8 = puVar8 + 6;
                        iVar11 = iVar11 + -1;
                    } while (iVar11 != 0);
                }
                if (iStack_1810 != 0) {
                    fcn.000194c0(auStack_1820);
                }
                return uVar5;
            }
            iVar10 = iVar10 + 1;
        } while (iVar10 < uVar14);
    }
    uVar5 = **(arg3 + 0x10);
    if ((uVar5 & 1) != 0) {
        iVar10 = (uVar5 * 2 + 4 & 8) + uVar5;
        iVar10 = iVar10 * (2 - iVar10 * uVar5);
        iVar10 = (2 - iVar10 * uVar5) * iVar10;
        uVar5 = (iVar10 * uVar5 + -2) * iVar10 & 0xfffffff;
        if ((*arg3 * 2 < 0x1ff) && (*arg3 < 0x100)) {
            uVar6 = fcn.00019420(&uStack_1870);
            uVar7 = uVar6;
            if (uVar6 != 0) goto code_r0x0001ba3f;
            uVar6 = fcn.0001b3c4(&uStack_1870,arg3);
            uVar7 = uVar6;
            if (uVar6 == 0) {
                uVar6 = fcn.00019640(arg1,&uStack_1870,arg3,auStack_1820);
                uVar7 = uVar6;
                if (uVar6 == 0) {
                    puVar8 = auStack_1838 + iVar12 * 6;
                    uVar6 = fcn.00019a88(auStack_1820,puVar8);
                    uVar7 = uVar6;
                    if (uVar6 == 0) {
                        iVar12 = 0;
                        do {
                            uVar6 = fcn.0001a994(puVar8,puVar8);
                            uVar7 = uVar6;
                            if (uVar6 != 0) goto code_r0x0001ba1f;
                            uVar6 = fcn.0001b1e4(puVar8,arg3,uVar5);
                            uVar7 = uVar6;
                            if (uVar6 != 0) goto code_r0x0001ba1f;
                            iVar12 = iVar12 + 1;
                        } while (iVar12 < iVar4 + -1);
                        iVar12 = iStack0000000000000028 + 1;
                        if (iVar12 < uVar14) {
                            iVar10 = iStack0000000000000028;
                            do {
                                puStack_1850 = auStack_1838 + iVar12 * 6;
                                uVar6 = fcn.000195cc(auStack_1838 + iVar10 * 0x18,auStack_1820,puStack_1850);
                                uVar7 = uVar6;
                                if (uVar6 != 0) goto code_r0x0001ba1f;
                                uVar6 = fcn.0001b1e4(puStack_1850,arg3,uVar5);
                                uVar7 = uVar6;
                                if (uVar6 != 0) goto code_r0x0001ba1f;
                                iVar12 = iVar12 + 1;
                                iVar10 = iVar10 + 1;
                            } while (iVar12 < uVar14);
                        }
                        iVar10 = 0 << iVar1;
                        iVar12 = 0;
                        iStack_1858 = iVar10 + 1;
                        puStack_1850 = *arg2 + -1;
                        uVar13 = 0;
                        puVar8 = puStack_1850;
                        uVar6 = 0;
code_r0x0001b7fc:
                        iStack_1858 = iStack_1858 + -1;
                        if (iStack_1858 == 0) {
                            if (puVar8 == 0xffffffffffffffff) {
                                if (((iVar10 != 2) || (iVar12 < 1)) || (iVar4 = 0, iVar12 < 1)) goto code_r0x0001b9ce;
                                goto code_r0x0001b95d;
                            }
                            iStack_1858 = 0x1c;
                            uVar6 = *(*(arg2 + 0x10) + puVar8 * 4);
                            puVar8 = puVar8 + -1;
                            puStack_1850 = puVar8;
                        }
                        uStack_1848 = uVar6 * 2;
                        uVar6 = uVar6 >> 0x1b & 1;
                        if ((iVar10 == 0) && (uVar6 == 0)) goto code_r0x0001b7f5;
                        if ((iVar10 != 1) || (uVar6 != 0)) goto code_r0x0001b897;
                        uVar6 = fcn.0001a994(&uStack_1870,&uStack_1870);
                        uVar7 = uVar6;
                        if (uVar6 == 0) {
                            uVar6 = fcn.0001b1e4(&uStack_1870,arg3,uVar5);
                            uVar7 = uVar6;
                            if (uVar6 == 0) goto code_r0x0001b883;
                        }
                    }
code_r0x0001ba1f:
                    iVar12 = iStack0000000000000028;
                }
            }
            goto code_r0x0001ba26;
        }
    }
    uVar7 = 0xfffffffd;
    goto code_r0x0001ba3f;
code_r0x0001b897:
    iVar12 = iVar12 + 1;
    iVar10 = 2;
    uVar13 = uVar13 | uVar6 << (iVar1 - iVar12 & 0x1fU);
    puVar8 = puStack_1850;
    uVar6 = uStack_1848;
    if (iVar12 == iVar4) {
        iVar12 = 0;
        do {
            uVar6 = fcn.0001a994(&uStack_1870,&uStack_1870);
            uVar7 = uVar6;
            if (uVar6 != 0) goto code_r0x0001ba1f;
            uVar6 = fcn.0001b1e4(&uStack_1870,arg3,uVar5);
            uVar7 = uVar6;
            if (uVar6 != 0) goto code_r0x0001ba1f;
            iVar12 = iVar12 + 1;
        } while (iVar12 < iVar4);
        uVar6 = fcn.000195cc(&uStack_1870,auStack_1838 + uVar13 * 6,&uStack_1870);
        uVar7 = uVar6;
        if (uVar6 != 0) goto code_r0x0001ba1f;
        uVar6 = fcn.0001b1e4(&uStack_1870,arg3,uVar5);
        uVar7 = uVar6;
        if (uVar6 != 0) goto code_r0x0001ba1f;
        iVar12 = 0;
        iVar10 = 1;
        uVar13 = 0;
code_r0x0001b883:
        puVar8 = puStack_1850;
code_r0x0001b7f5:
        uVar6 = uStack_1848;
    }
    goto code_r0x0001b7fc;
    while( true ) {
        uVar6 = fcn.0001b1e4(&uStack_1870,arg3,uVar5);
        uVar7 = uVar6;
        if (uVar6 != 0) goto code_r0x0001ba1f;
        uVar13 = uVar13 * 2;
        if ((uVar13 & uVar14) != 0) {
            uVar6 = fcn.000195cc(&uStack_1870,auStack_1820,&uStack_1870);
            uVar7 = uVar6;
            if (uVar6 != 0) goto code_r0x0001ba1f;
            uVar6 = fcn.0001b1e4(&uStack_1870,arg3,uVar5);
            uVar7 = uVar6;
            if (uVar6 != 0) goto code_r0x0001ba1f;
        }
        iVar4 = iVar4 + 1;
        if (iVar12 <= iVar4) break;
code_r0x0001b95d:
        uVar6 = fcn.0001a994(&uStack_1870,&uStack_1870);
        uVar7 = uVar6;
        if (uVar6 != 0) goto code_r0x0001ba1f;
    }
code_r0x0001b9ce:
    uVar5 = fcn.0001b1e4(&uStack_1870,arg3,uVar5);
    uVar7 = uVar5;
    iVar12 = iStack0000000000000028;
    if (uVar5 == 0) {
        uVar2 = *arg4;
        uVar3 = *(arg4 + 8);
        iVar9 = *(arg4 + 0x10);
        *arg4 = uStack_1870;
        *(arg4 + 8) = uStack_1868;
        *(arg4 + 0x10) = iStack_1860;
        uStack_1870 = uVar2;
        uStack_1868 = uVar3;
        iStack_1860 = iVar9;
    }
code_r0x0001ba26:
    if (iStack_1860 != 0) {
        fcn.000194c0(&uStack_1870);
    }
code_r0x0001ba3f:
    if (iStack_1810 != 0) {
        fcn.000194c0(auStack_1820);
    }
    iVar9 = iVar12;
    if (iVar9 < uVar14) {
        iVar11 = uVar14 - iVar9;
        puVar8 = auStack_1838 + iVar9 * 6;
        do {
            if (*(puVar8 + 4) != 0) {
                fcn.000194c0(puVar8);
            }
            puVar8 = puVar8 + 6;
            iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
    }
    return uVar7;
}


/* fcn.0001a42c @ 0x1a42c */

uint64_t fcn.0001a42c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int *piVar1;
    ulong uVar2;
    ulong uVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int iVar8;
    uint32_t *puVar9;
    int64_t iVar10;
    uint32_t uVar11;
    int iVar12;
    uint32_t uVar13;
    int iStack0000000000000028;
    ulong uStack_1878;
    ulong uStack_1870;
    int *piStack_1868;
    int iStack_1860;
    uint32_t uStack_185c;
    int64_t iStack_1858;
    uint32_t auStack_1850 [4];
    int64_t iStack_1840;
    uint32_t auStack_1838 [6];
    uint32_t auStack_1820 [4];
    int64_t iStack_1810;
    
    iVar4 = fcn.00019dec(arg2);
    if (iVar4 < 8) {
        iVar4 = 2;
    }
    else if (iVar4 < 0x25) {
        iVar4 = 3;
    }
    else if (iVar4 < 0x8d) {
        iVar4 = 4;
    }
    else if (iVar4 < 0x1c3) {
        iVar4 = 5;
    }
    else if (iVar4 < 0x518) {
        iVar4 = 6;
    }
    else {
        iVar4 = (0xdc9 < iVar4) + 7;
    }
    uVar6 = fcn.00019420(auStack_1820);
    if (uVar6 != 0) {
        return uVar6;
    }
    iVar12 = 1 << (iVar4 + -1 & 0x1f);
    uVar11 = 1 << iVar4;
    iVar8 = iVar12;
    iStack0000000000000028 = iVar12;
    if (iVar12 < uVar11) {
        do {
            uVar5 = fcn.00019420(auStack_1838 + iVar8 * 6);
            if (uVar5 != 0) {
                iVar7 = iVar12;
                if (iVar7 < iVar8) {
                    iVar10 = iVar8 - iVar7;
                    puVar9 = auStack_1838 + iVar7 * 6;
                    do {
                        if (*(puVar9 + 4) != 0) {
                            fcn.000194c0(puVar9);
                        }
                        puVar9 = puVar9 + 6;
                        iVar10 = iVar10 + -1;
                    } while (iVar10 != 0);
                }
                if (iStack_1810 != 0) {
                    fcn.000194c0(auStack_1820);
                }
                return uVar5;
            }
            iVar8 = iVar8 + 1;
        } while (iVar8 < uVar11);
    }
    uVar5 = fcn.00019420(auStack_1850);
    uVar6 = uVar5;
    if (uVar5 != 0) goto code_r0x0001a92f;
    uVar5 = fcn.0001a9d0(auStack_1850,*arg3 * 0x38);
    if (uVar5 == 0) {
        uVar5 = fcn.00019ed4(auStack_1850,arg3,auStack_1850,0);
    }
    uVar6 = uVar5;
    if (uVar5 == 0) {
        uVar5 = fcn.000196c0(arg1,arg3,auStack_1820);
        uVar6 = uVar5;
        if (uVar5 == 0) {
            puVar9 = auStack_1838 + iVar12 * 6;
            uVar5 = fcn.00019a88(auStack_1820,puVar9);
            uVar6 = uVar5;
            if (uVar5 != 0) goto code_r0x0001a916;
            iVar12 = 0;
            do {
                uVar5 = fcn.0001a994(puVar9,puVar9);
                uVar6 = uVar5;
                if (uVar5 != 0) goto code_r0x0001a916;
                uVar5 = fcn.0001aa44(puVar9,arg3,auStack_1850);
                uVar6 = uVar5;
                if (uVar5 != 0) goto code_r0x0001a916;
                iVar12 = iVar12 + 1;
            } while (iVar12 < iVar4 + -1);
            iVar12 = iStack0000000000000028 + 1;
            if (iVar12 < uVar11) {
                iVar8 = iStack0000000000000028;
                do {
                    uVar5 = fcn.000195cc(auStack_1838 + iVar8 * 0x18,auStack_1820,auStack_1838 + iVar12 * 6);
                    uVar6 = uVar5;
                    if (uVar5 != 0) goto code_r0x0001a916;
                    uVar5 = fcn.0001aa44(auStack_1838 + iVar12 * 6,arg3,auStack_1850);
                    uVar6 = uVar5;
                    if (uVar5 != 0) goto code_r0x0001a916;
                    iVar12 = iVar12 + 1;
                    iVar8 = iVar8 + 1;
                } while (iVar12 < uVar11);
            }
            iVar12 = iStack0000000000000028;
            uVar5 = fcn.00019420(&uStack_1878);
            uVar6 = uVar5;
            if (uVar5 == 0) {
                fcn.00019a60(&uStack_1878);
                iStack_1860 = 1;
                *piStack_1868 = 1;
                uStack_1878 = CONCAT44(uStack_1878._4_4_,*piStack_1868 != 0);
                iVar8 = 0;
                iStack_1858 = *arg2 + -1;
                iVar12 = 0;
                uVar13 = 0;
                iVar7 = iStack_1858;
                uVar5 = 0;
code_r0x0001a702:
                iStack_1860 = iStack_1860 + -1;
                if (iStack_1860 == 0) {
                    if (iVar7 == -1) {
                        if (((iVar8 != 2) || (iVar12 < 1)) || (iVar4 = 0, iVar12 < 1)) goto code_r0x0001a8d5;
                        goto code_r0x0001a864;
                    }
                    iStack_1860 = 0x1c;
                    uVar5 = *(*(arg2 + 0x10) + iVar7 * 4);
                    iVar7 = iVar7 + -1;
                    iStack_1858 = iVar7;
                }
                uStack_185c = uVar5 * 2;
                uVar5 = uVar5 >> 0x1b & 1;
                if ((iVar8 == 0) && (uVar5 == 0)) goto code_r0x0001a6fb;
                if ((iVar8 != 1) || (uVar5 != 0)) goto code_r0x0001a79f;
                uVar5 = fcn.0001a994(&uStack_1878,&uStack_1878);
                uVar6 = uVar5;
                if (uVar5 == 0) {
                    uVar5 = fcn.0001aa44(&uStack_1878,arg3,auStack_1850);
                    uVar6 = uVar5;
                    if (uVar5 == 0) goto code_r0x0001a78b;
                }
                goto code_r0x0001a904;
            }
        }
    }
    goto code_r0x0001a91d;
code_r0x0001a79f:
    iVar12 = iVar12 + 1;
    iVar8 = 2;
    uVar13 = uVar13 | uVar5 << (iVar4 - iVar12 & 0x1fU);
    iVar7 = iStack_1858;
    uVar5 = uStack_185c;
    if (iVar12 == iVar4) {
        iVar12 = 0;
        do {
            uVar5 = fcn.0001a994(&uStack_1878,&uStack_1878);
            uVar6 = uVar5;
            if (uVar5 != 0) goto code_r0x0001a904;
            uVar5 = fcn.0001aa44(&uStack_1878,arg3,auStack_1850);
            uVar6 = uVar5;
            if (uVar5 != 0) goto code_r0x0001a904;
            iVar12 = iVar12 + 1;
        } while (iVar12 < iVar4);
        uVar5 = fcn.000195cc(&uStack_1878,auStack_1838 + uVar13 * 6,&uStack_1878);
        uVar6 = uVar5;
        if (uVar5 != 0) goto code_r0x0001a904;
        uVar5 = fcn.0001aa44(&uStack_1878,arg3,auStack_1850);
        uVar6 = uVar5;
        if (uVar5 != 0) goto code_r0x0001a904;
        iVar12 = 0;
        iVar8 = 1;
        uVar13 = 0;
code_r0x0001a78b:
        iVar7 = iStack_1858;
code_r0x0001a6fb:
        uVar5 = uStack_185c;
    }
    goto code_r0x0001a702;
    while( true ) {
        uVar5 = fcn.0001aa44(&uStack_1878,arg3,auStack_1850);
        uVar6 = uVar5;
        if (uVar5 != 0) goto code_r0x0001a904;
        uVar13 = uVar13 * 2;
        if ((uVar13 & uVar11) != 0) {
            uVar5 = fcn.000195cc(&uStack_1878,auStack_1820,&uStack_1878);
            uVar6 = uVar5;
            if (uVar5 != 0) goto code_r0x0001a904;
            uVar5 = fcn.0001aa44(&uStack_1878,arg3,auStack_1850);
            uVar6 = uVar5;
            if (uVar5 != 0) goto code_r0x0001a904;
        }
        iVar4 = iVar4 + 1;
        if (iVar12 <= iVar4) break;
code_r0x0001a864:
        uVar5 = fcn.0001a994(&uStack_1878,&uStack_1878);
        uVar6 = uVar5;
        if (uVar5 != 0) goto code_r0x0001a904;
    }
code_r0x0001a8d5:
    uVar6 = 0;
    uVar2 = *arg4;
    uVar3 = *(arg4 + 8);
    piVar1 = *(arg4 + 0x10);
    *arg4 = uStack_1878;
    *(arg4 + 8) = uStack_1870;
    *(arg4 + 0x10) = piStack_1868;
    uStack_1878 = uVar2;
    uStack_1870 = uVar3;
    piStack_1868 = piVar1;
code_r0x0001a904:
    if (piStack_1868 != NULL) {
        fcn.000194c0(&uStack_1878);
    }
code_r0x0001a916:
    iVar12 = iStack0000000000000028;
code_r0x0001a91d:
    if (iStack_1840 != 0) {
        fcn.000194c0(auStack_1850);
    }
code_r0x0001a92f:
    if (iStack_1810 != 0) {
        fcn.000194c0(auStack_1820);
    }
    iVar7 = iVar12;
    if (iVar7 < uVar11) {
        iVar10 = uVar11 - iVar7;
        puVar9 = auStack_1838 + iVar7 * 6;
        do {
            if (*(puVar9 + 4) != 0) {
                fcn.000194c0(puVar9);
            }
            puVar9 = puVar9 + 6;
            iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
    }
    return uVar6;
}


/* fcn.00019dec @ 0x19dec */

int fcn.00019dec(int64_t arg1)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    
    iVar1 = *arg1;
    if (iVar1 != 0) {
        iVar2 = iVar1 * 0x1c + -0x1c;
        for (uVar3 = *(*(arg1 + 0x10) + (iVar1 + -1) * 4); uVar3 != 0; uVar3 = uVar3 >> 1) {
            iVar2 = iVar2 + 1;
        }
        return iVar2;
    }
    return 0;
}


/* fcn.000197d4 @ 0x197d4 */

uint64_t fcn.000197d4(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int iVar4;
    int64_t iVar5;
    uchar *puVar6;
    uint32_t auStack_28 [4];
    uchar *puStack_18;
    
    uVar3 = fcn.00019420(auStack_28);
    if ((uVar3 == 0) && (uVar3 = fcn.00019a88(arg1,auStack_28), uVar3 == 0)) {
        iVar4 = 0;
        if (auStack_28[0] != 0) {
            puVar6 = arg2;
            do {
                iVar4 = iVar4 + 1;
                *puVar6 = *puStack_18;
                puVar6 = puVar6 + 1;
                uVar2 = fcn.000198bc(auStack_28,8,auStack_28,0);
                if (uVar2 != 0) {
                    if (puStack_18 != NULL) {
                        fcn.000194c0(auStack_28);
                    }
                    return uVar2;
                }
            } while (auStack_28[0] != 0);
        }
        if (0 < iVar4 + -1) {
            puVar6 = (iVar4 + -1) + arg2;
            iVar5 = -arg2;
            do {
                uVar1 = *arg2;
                *arg2 = *puVar6;
                arg2 = arg2 + 1;
                *puVar6 = uVar1;
                puVar6 = puVar6 + -1;
            } while (iVar5 + arg2 < iVar5 + puVar6);
        }
        if (puStack_18 != NULL) {
            fcn.000194c0(auStack_28);
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.000194c0 @ 0x194c0 */

void fcn.000194c0(uint32_t *arg1)

{
    int iVar1;
    int64_t iVar2;
    
    iVar1 = 0;
    if (0 < *arg1) {
        iVar2 = 0;
        do {
            iVar1 = iVar1 + 1;
            *(iVar2 + *(arg1 + 4)) = 0;
            iVar2 = iVar2 + 4;
        } while (iVar1 < *arg1);
    }
    fcn.0001913c(*(arg1 + 4));
    arg1[4] = 0;
    arg1[5] = 0;
    *arg1 = 0;
    arg1[1] = 0;
    arg1[2] = 0;
    return;
}


/* fcn.0001c6e8 @ 0x1c6e8 */

int64_t fcn.0001c6e8(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    int64_t arg1_00;
    char *pcVar3;
    uint32_t uVar4;
    uint32_t arg1_01;
    int64_t arg3;
    
    arg1_00 = 0;
    pcVar3 = arg1;
    uVar4 = 0;
    do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        arg1_01 = uVar4;
        if (cVar1 == '\0') break;
        arg1_01 = uVar4 + 1;
        bVar2 = uVar4 < 0x1000;
        uVar4 = arg1_01;
    } while (bVar2);
    if (arg1_01 < 0x1000) {
        arg3 = arg1_01;
        arg1_00 = fcn.00019058(arg1_01);
        if ((arg1_00 != 0) && (arg3 != 0)) {
            fcn.00011250(arg1_00,arg3,0);
            if ((arg3 != 0) && (arg1_00 != arg1)) {
                fcn.000111d0(arg1_00,arg1,arg3);
            }
        }
    }
    return arg1_00;
}


/* fcn.000157e0 @ 0x157e0 */

void fcn.000157e0(uint32_t arg1)

{
    char cVar1;
    bool bVar2;
    char *pcVar3;
    uint in_register_0000000c;
    char *pcVar4;
    
    bVar2 = true;
    pcVar3 = CONCAT44(in_register_0000000c,arg1);
    pcVar4 = CONCAT44(in_register_0000000c,arg1);
    cVar1 = *CONCAT44(in_register_0000000c,arg1);
    while (cVar1 != '\0') {
        if ((!bVar2) || ((*pcVar4 != '\t' && (*pcVar4 != ' ')))) {
            cVar1 = *pcVar4;
            if ((cVar1 == ' ') || (bVar2 = false, cVar1 == '\t')) {
                bVar2 = true;
            }
            *pcVar3 = cVar1;
            pcVar3 = pcVar3 + 1;
        }
        pcVar4 = pcVar4 + 1;
        cVar1 = *pcVar4;
    }
    *pcVar3 = '\0';
    pcVar3 = pcVar3 + -1;
    if ((CONCAT44(in_register_0000000c,arg1) < pcVar3) && ((*pcVar3 == ' ' || (*pcVar3 == '\t')))) {
        *pcVar3 = '\0';
    }
    return;
}


/* fcn.0001da8c @ 0x1da8c */

int64_t fcn.0001da8c(int64_t arg1,int64_t arg2)

{
    char cVar1;
    char cVar2;
    char cVar3;
    
    cVar3 = *arg1;
    if (*arg1 + 0x9fU < 0x1a) {
        cVar3 = cVar3 + -0x20;
    }
    cVar2 = *arg2;
    if (cVar2 + 0x9fU < 0x1a) {
        cVar1 = cVar2 + -0x20;
    }
    else {
        cVar1 = cVar2;
    }
    if (*arg1 != '\0') {
        arg1 = arg1 - arg2;
        do {
            if ((cVar2 == '\0') || (cVar3 != cVar1)) break;
            arg2 = arg2 + 1;
            cVar3 = *(arg2 + arg1);
            if (cVar3 + 0x9fU < 0x1a) {
                cVar3 = cVar3 + -0x20;
            }
            cVar2 = *arg2;
            cVar1 = cVar2;
            if (cVar2 + 0x9fU < 0x1a) {
                cVar1 = cVar2 + -0x20;
            }
        } while (*(arg2 + arg1) != '\0');
    }
    return cVar3 - cVar1;
}


/* fcn.00015844 @ 0x15844 */

uint64_t fcn.00015844(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int64_t arg2_00;
    uint64_t uVar1;
    uint32_t arg1_01;
    uint32_t arg1_02;
    
    if (arg1 == 0) {
        if (arg2 == 0) {
            uVar1 = 0;
        }
        else {
            uVar1 = 0xffffffff;
        }
    }
    else if (arg2 == 0) {
        uVar1 = 1;
    }
    else {
        arg1_00 = fcn.0001c6e8(arg1);
        arg2_00 = fcn.0001c6e8(arg2);
        arg1_01 = arg2_00;
        if (arg1_00 != 0) {
            arg1_02 = arg1_00;
            if (arg2_00 != 0) {
                fcn.000157e0(arg1_02);
                fcn.000157e0(arg1_01);
                uVar1 = fcn.0001da8c(arg1_00,arg2_00);
                fcn.0001913c(arg1_02);
                fcn.0001913c(arg1_01);
                return uVar1 & 0xffffffff;
            }
            fcn.0001913c(arg1_02);
        }
        if (arg2_00 != 0) {
            fcn.0001913c(arg1_01);
        }
        uVar1 = fcn.0001da8c(arg1,arg2);
    }
    return uVar1;
}


/* fcn.0001c76c @ 0x1c76c */

uint64_t fcn.0001c76c(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    uchar *puVar1;
    uchar *noname_1;
    uint64_t auStackX_18 [2];
    uchar auStack_18 [16];
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    noname_1 = arg2;
    if ((arg2 != '\0') && (auStack_18 != puVar1)) {
        fcn.000111d0(auStack_18,arg1,arg2 & 0xffU);
        noname_1 = puVar1;
    }
    auStack_18[arg2 & 0xffU] = 0;
    fcn.0001db54(auStack_18,noname_1,auStackX_18);
    *arg3 = auStackX_18[0];
    return auStackX_18[0] & 0xffffffff;
}


/* fcn.0001db54 @ 0x1db54 */

ulong fcn.0001db54(int64_t arg1,ulong noname_1,int64_t arg2)

{
    char cVar1;
    uint64_t uVar2;
    
    if (((arg1 != 0) && (arg2 != 0)) && (uVar2 = fcn.0001db30(arg1), uVar2 < 0xf4241)) {
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


/* fcn.0001cb10 @ 0x1cb10 */

int64_t fcn.0001cb10(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t in_stack_00000028;
    uint32_t in_stack_00000030;
    int *in_stack_00000038;
    
    iVar5 = 0xffffffff;
    uVar3 = arg1;
    iVar6 = 0xffffffff;
    if ((((arg2 - 1U < 0xc) && (iVar6 = iVar5, arg3 - 1U < 0x1f)) && (arg4 < 0x18)) &&
       ((in_stack_00000028 < 0x3c && (in_stack_00000030 < 0x3d)))) {
        iVar6 = 0;
        uVar4 = 0x7b2;
        *in_stack_00000038 = 0;
        iVar5 = 1;
        if (uVar3 != 0x7b2) {
            do {
                uVar1 = uVar4 & 0x80000003;
                if (uVar1 < 0) {
                    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
                }
                if ((uVar1 == 0) && ((uVar4 != (uVar4 / 100) * 100 || (uVar4 == (uVar4 / 400) * 400)))) {
                    iVar2 = iVar5;
                }
                else {
                    iVar2 = iVar6;
                }
                uVar4 = uVar4 + 1;
                *in_stack_00000038 = *in_stack_00000038 + *(iVar2 * 0x38 + 0x1e5a4) * 0x15180;
            } while (uVar4 != uVar3);
        }
        uVar4 = uVar3 & 0x80000003;
        if (uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
        }
        if ((uVar4 != 0) || ((uVar3 == (uVar3 / 100) * 100 && (uVar3 != (uVar3 / 400) * 400)))) {
            iVar5 = 0;
        }
        *in_stack_00000038 =
             *in_stack_00000038 +
             ((arg4 + (*((iVar5 * 0xe + arg2) * 4 + 0x1e570) + -1 + arg3) * 0x18) * 0x3c + in_stack_00000028) * 0x3c +
             in_stack_00000030;
    }
    return iVar6;
}


/* fcn.00016268 @ 0x16268 */

ulong fcn.00016268(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int iVar2;
    uint64_t arg1_00;
    uint64_t uVar3;
    uint32_t uVar4;
    int64_t var_20h;
    uint32_t var_17h;
    uint32_t var_bp_10h;
    
    iVar2 = fcn.0001c80c(arg2,arg3,&var_20h);
    uVar4 = 0;
    if (((-1 < iVar2) && (var_17h == '\0')) && (stack0xffffffffffffffe4 == 0x10)) {
        *(arg1 + 0x400) = *(arg1 + 0x400) | 1;
        if (var_bp_10h == 0) {
            return 0;
        }
        uVar3 = var_bp_10h + var_20h;
        iVar2 = fcn.0001c80c(var_20h,var_bp_10h,&var_20h);
        if ((-1 < iVar2) && (var_17h == '\0')) {
            if (stack0xffffffffffffffe4 == 1) {
                *(arg1 + 0x404) = *var_20h;
                arg1_00 = var_bp_10h + var_20h;
                if (uVar3 <= arg1_00) {
                    return 0;
                }
                iVar2 = fcn.0001c80c(arg1_00,uVar3 - arg1_00,&var_20h);
                if (iVar2 < 0) {
                    return 0xffffffff;
                }
                if (var_17h != '\0') {
                    return 0xffffffff;
                }
            }
            if (*NULL == 2) {
                for (uVar3 = var_bp_10h; uVar3 != 0; uVar3 = uVar3 - 1) {
                    uVar1 = *var_20h;
                    var_20h = var_20h + 1;
                    uVar4 = uVar4 << 8 | uVar1;
                }
                *(arg1 + 0x400) = *(arg1 + 0x400) | 2;
                *(arg1 + 0x408) = uVar4;
                return 0;
            }
        }
    }
    return 0xffffffff;
}


/* fcn.0001ca14 @ 0x1ca14 */

uint32_t fcn.0001ca14(int64_t arg1,uint32_t arg2)

{
    uint8_t uVar1;
    uint in_register_00000014;
    uint64_t uVar2;
    uint8_t uVar3;
    int64_t iVar4;
    uint8_t *puVar5;
    uint8_t uVar6;
    uint32_t uVar7;
    int64_t iVar8;
    
    uVar2 = CONCAT44(in_register_00000014,arg2);
    uVar7 = 0;
    puVar5 = arg1 + 1;
    iVar8 = 8;
    if (1 < uVar2) {
        uVar3 = 0;
        iVar4 = iVar8;
        uVar6 = *puVar5;
        do {
            uVar1 = uVar3 * '\x02';
            uVar3 = uVar1 | 1;
            if ((uVar6 & 1) == 0) {
                uVar3 = uVar1;
            }
            iVar4 = iVar4 + -1;
            uVar6 = uVar6 >> 1;
        } while (iVar4 != 0);
        uVar7 = uVar3;
        puVar5 = arg1 + 2;
    }
    if (2 < uVar2) {
        uVar6 = 0;
        iVar4 = iVar8;
        uVar3 = *puVar5;
        do {
            uVar1 = uVar6 * '\x02';
            uVar6 = uVar1 | 1;
            if ((uVar3 & 1) == 0) {
                uVar6 = uVar1;
            }
            iVar4 = iVar4 + -1;
            uVar3 = uVar3 >> 1;
        } while (iVar4 != 0);
        uVar7 = uVar7 | uVar6 << 8;
        puVar5 = puVar5 + 1;
    }
    if (3 < uVar2) {
        uVar6 = 0;
        iVar4 = iVar8;
        uVar3 = *puVar5;
        do {
            uVar1 = uVar6 * '\x02';
            uVar6 = uVar1 | 1;
            if ((uVar3 & 1) == 0) {
                uVar6 = uVar1;
            }
            iVar4 = iVar4 + -1;
            uVar3 = uVar3 >> 1;
        } while (iVar4 != 0);
        uVar7 = uVar7 | uVar6 << 0x10;
        puVar5 = puVar5 + 1;
    }
    if (4 < uVar2) {
        uVar6 = 0;
        uVar3 = *puVar5;
        do {
            uVar1 = uVar6 * '\x02';
            uVar6 = uVar1 | 1;
            if ((uVar3 & 1) == 0) {
                uVar6 = uVar1;
            }
            iVar8 = iVar8 + -1;
            uVar3 = uVar3 >> 1;
        } while (iVar8 != 0);
        uVar7 = uVar7 | uVar6 << 0x18;
    }
    return uVar7;
}


/* fcn.00016178 @ 0x16178 */

ulong fcn.00016178(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t var_20h;
    uint32_t var_17h;
    int32_t var_10h;
    
    iVar1 = fcn.0001c80c(arg1,arg2,&var_20h);
    if ((((-1 < iVar1) && (var_17h == '\0')) && (stack0xffffffffffffffe4 == 0x10)) &&
       (var_10h <= (arg1 - var_20h) + arg2)) {
        *arg4 = var_10h + var_20h;
        iVar1 = fcn.0001c80c(var_20h,var_10h,&var_20h);
        if ((((-1 < iVar1) && (var_17h == '\0')) &&
            ((iVar1 = fcn.00016014(var_20h,var_10h,stack0xffffffffffffffe4,arg3 + 0x328), -1 < iVar1 &&
             ((iVar1 = fcn.0001c80c(var_10h + var_20h,*arg4 - (var_10h + var_20h),&var_20h), -1 < iVar1 &&
              (var_17h == '\0')))))) &&
           (iVar1 = fcn.00016014(var_20h,var_10h,stack0xffffffffffffffe4,arg3 + 0x32c), -1 < iVar1)) {
            return 0;
        }
    }
    return 0xffffffff;
}


/* fcn.00015a28 @ 0x15a28 */

ulong fcn.00015a28(int64_t arg1,int64_t noname_1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint64_t uVar2;
    int64_t arg1_00;
    int64_t arg2_00;
    int64_t iStackX_8;
    int64_t iStack_48;
    char cStack_3f;
    int iStack_3c;
    int64_t var_30h;
    uchar uStack_30;
    uint32_t var_27h;
    int32_t var_bp_20h;
    int64_t var_bp_18h;
    
    iVar1 = fcn.0001c80c(arg1,(arg1 + noname_1) - arg1,&iStack_48);
    arg1_00 = iStack_48;
    if (((-1 < iVar1) && (cStack_3f == '\0')) && (iStack_3c == 0x10)) {
        uVar2 = var_30h + iStack_48;
        iStackX_8 = iStack_48;
        if (uVar2 <= arg1 + noname_1) {
            *arg3 = uVar2;
            arg2_00 = uVar2 - iStack_48;
            iVar1 = fcn.0001c80c(iStack_48,arg2_00,&uStack_30);
            if (iVar1 < 0) {
                iVar1 = -1;
            }
            else {
                iVar1 = fcn.000159bc(arg1_00,arg2_00,arg2 + 0x330,&iStackX_8);
                arg1_00 = iStackX_8;
            }
            if (((iVar1 == 0) && (iVar1 = fcn.0001c80c(arg1_00,uVar2 - arg1_00,&iStack_48), -1 < iVar1)) &&
               ((cStack_3f == '\0' && ((iStack_3c == 3 && (var_30h != 0)))))) {
                *(arg2 + 0x390) = var_30h - 1;
                *(arg2 + 0x388) = iStack_48 + 1;
                return 0;
            }
            return 0xffffffff;
        }
    }
    return 0xffffffff;
}


/* fcn.00016370 @ 0x16370 */

//WARNING: Variable defined which should be unmapped: var_11h

ulong fcn.00016370(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    int64_t arg1_00;
    uint64_t arg1_01;
    int64_t iStackX_20;
    uint32_t var_37h;
    int64_t var_7fh;
    int64_t iStack_d8;
    char cStack_cf;
    int iStack_cc;
    uint32_t uStack_c8;
    int64_t iStack_c0;
    char cStack_b7;
    int iStack_b4;
    uint32_t uStack_b0;
    uint64_t uStack_a8;
    char cStack_9f;
    int iStack_9c;
    uint32_t uStack_98;
    uchar auStack_90 [15];
    int64_t var_79h;
    uint32_t var_70h;
    uchar auStack_74 [3];
    int32_t var_69h;
    uchar auStack_6c [3];
    int64_t var_61h;
    uint32_t var_58h;
    uint32_t var_51h;
    int64_t var_49h;
    uint32_t var_40h;
    int32_t var_39h;
    int64_t var_31h;
    uchar auStack_28 [7];
    uint32_t var_19h;
    uint32_t var_15h;
    uint32_t var_11h;
    uint32_t var_dh;
    
    iVar1 = fcn.0001c80c(arg2,arg3,&uStack_a8);
    if (((-1 < iVar1) && (cStack_9f == '\0')) && (iStack_9c == 0x10)) {
        arg1_01 = uStack_a8;
code_r0x000163ca:
        do {
            if (uStack_98 + uStack_a8 <= arg1_01) {
                return 0;
            }
            iVar1 = fcn.0001c80c(arg1_01,(uStack_98 + uStack_a8) - arg1_01,&iStack_d8);
            arg1_00 = iStack_d8;
            if (((iVar1 < 0) || (cStack_cf != '\0')) || (iStack_cc != 0x10)) {
                iVar1 = -1;
            }
            else {
                arg1_01 = uStack_c8 + iStack_d8;
                iStackX_20 = iStack_d8;
                iVar1 = arg1_01;
                iVar2 = fcn.0001c80c(iStack_d8,iVar1 - iStack_d8,auStack_90);
                if (iVar2 < 0) {
                    iVar2 = -1;
                }
                else {
                    iVar2 = fcn.0001c9dc(&var_70h,&iStackX_20,auStack_90);
                    arg1_00 = iStackX_20;
                }
                if (iVar2 < 0) {
                    return 0xffffffff;
                }
                iVar2 = fcn.0001c80c(arg1_00,iVar1 - arg1_00,&iStack_d8);
                if (iVar2 < 0) {
                    return 0xffffffff;
                }
                if (cStack_cf != '\0') {
                    return 0xffffffff;
                }
                if (iStack_cc == 1) {
                    iVar1 = fcn.0001c80c(iStack_d8,iVar1 - iStack_d8,&iStack_d8);
                    if (iVar1 < 0) {
                        return 0xffffffff;
                    }
                    if ((cStack_cf != '\0') && (cStack_cf != '\x03')) {
                        return 0xffffffff;
                    }
                }
                if (iStack_cc != 4) {
                    return 0xffffffff;
                }
                if ((((_auStack_28 < 4) || (var_70h != 2)) || (_auStack_74 != 5)) || (stack0xffffffffffffff90 != 0x1d))
                goto code_r0x000163ca;
                if (_auStack_6c == 0xf) {
                    iVar1 = fcn.0001c80c(iStack_d8,uStack_c8,&iStack_c0);
                    if (((iVar1 < 0) || (cStack_b7 != '\0')) || ((iStack_b4 != 3 || (uStack_b0 == 0)))) {
                        iVar1 = -1;
                    }
                    else {
                        *(arg1 + 0x400) = *(arg1 + 0x400) | 4;
                        uVar3 = fcn.0001ca14(iStack_c0,uStack_b0);
                        *(arg1 + 0x40c) = uVar3;
                        iVar1 = 0;
                    }
                }
                else {
                    if (_auStack_6c != 0x13) goto code_r0x000163ca;
                    iVar1 = fcn.00016268(arg1,iStack_d8,uStack_c8);
                }
                if (-1 < iVar1) goto code_r0x000163ca;
            }
        } while (-1 < iVar1);
    }
    return 0xffffffff;
}


/* fcn.0001656c @ 0x1656c */

int fcn.0001656c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int iVar2;
    int iVar3;
    uint8_t *puVar4;
    uint8_t *puVar5;
    uint64_t arg3_00;
    uint8_t *puStack_58;
    uint8_t *puStack_50;
    int64_t var_40h;
    int64_t var_38h;
    uchar uStack_38;
    uint32_t var_2fh;
    uint32_t var_28h;
    int64_t var_20h;
    
    iVar2 = fcn.0001c80c(arg1,arg2,&puStack_50);
    if (((-1 < iVar2) && (var_40h._1_1_ == '\0')) && (var_40h._4_4_ == 0x10)) {
        puVar5 = puStack_50 + var_38h;
        *arg4 = puVar5;
        iVar2 = puVar5;
        iVar3 = fcn.0001c80c(puStack_50,iVar2 - puStack_50,&puStack_50);
        if (-1 < iVar3) {
            if (var_40h._1_1_ == '\x02') {
                iVar3 = fcn.0001c80c(puStack_50,iVar2 - puStack_50,&puStack_50);
                if (iVar3 < 0) {
                    return -1;
                }
                if (var_40h._1_1_ != '\0') {
                    return -1;
                }
                if (var_40h._4_4_ != 2) {
                    return -1;
                }
                if (var_38h != 1) {
                    return -1;
                }
                uVar1 = *puStack_50;
                *(arg3 + 0x10) = uVar1;
                if (2 < uVar1) {
                    return -1;
                }
                iVar3 = fcn.0001c80c(puStack_50 + 1,iVar2 - (puStack_50 + 1),&puStack_50);
                if (iVar3 < 0) {
                    return -1;
                }
            }
            else {
                *(arg3 + 0x10) = 0;
            }
            if (((var_40h._1_1_ == '\0') && (var_40h._4_4_ == 2)) && (arg3_00 = var_38h, var_38h - 1 < 0x14)) {
                puVar4 = puStack_50 + arg3_00;
                for (; (var_38h != 0 && (*puStack_50 == 0)); puStack_50 = puStack_50 + 1) {
                    var_38h._0_4_ = arg3_00 - 1;
                    arg3_00 = var_38h;
                }
                puStack_58 = puVar4;
                if ((arg3_00 != 0) && (arg3 + 0x14 != puStack_50)) {
                    fcn.000111d0(arg3 + 0x14,puStack_50,arg3_00);
                    arg3_00 = var_38h;
                }
                *(arg3 + 0x28) = arg3_00;
                iVar3 = fcn.0001c80c(puVar4,puVar5 - puVar4,&uStack_38);
                if (iVar3 < 0) {
                    iVar3 = -1;
                }
                else {
                    iVar3 = fcn.000159bc(puVar4,puVar5 - puVar4,arg3 + 0x30,&puStack_58);
                    puVar4 = puStack_58;
                }
                if ((((iVar3 == 0) &&
                     (iVar3 = fcn.00015b40(puVar4,puVar5 - puVar4,arg3 + 0x88,&puStack_58), iVar3 == 0)) &&
                    (iVar3 = fcn.00016178(puStack_58,puVar5 - puStack_58,arg3,&puStack_58), iVar3 == 0)) &&
                   ((iVar3 = fcn.00015b40(puStack_58,puVar5 - puStack_58,arg3 + 0x1d8,&puStack_58), iVar3 == 0 &&
                    (iVar3 = fcn.00015a28(puStack_58,puVar5 - puStack_58,arg3,&puStack_58), iVar3 == 0)))) {
                    if ((puStack_58 == puVar5) || (*(arg3 + 0x10) == 0)) {
                        return 0;
                    }
                    iVar3 = fcn.0001c80c(puStack_58,iVar2 - puStack_58,&puStack_50);
                    if ((-1 < iVar3) && (var_40h._1_1_ == '\x02')) {
                        if (var_40h._4_4_ == 1) {
                            puVar4 = puStack_50 + var_38h;
                            if (puVar4 == puVar5) {
                                return 0;
                            }
                            iVar3 = fcn.0001c80c(puVar4,iVar2 - puVar4,&puStack_50);
                            if (iVar3 < 0) {
                                return -1;
                            }
                            if (var_40h._1_1_ != '\x02') {
                                return -1;
                            }
                        }
                        if (var_40h._4_4_ == 2) {
                            puVar4 = puStack_50 + var_38h;
                            if (puVar4 == puVar5) {
                                return 0;
                            }
                            iVar2 = fcn.0001c80c(puVar4,iVar2 - puVar4,&puStack_50);
                            if (iVar2 < 0) {
                                return -1;
                            }
                            if (var_40h._1_1_ != '\x02') {
                                return -1;
                            }
                        }
                        if (var_40h._4_4_ != 3) {
                            return 0;
                        }
                        if (*(arg3 + 0x10) == 2) {
                            iVar2 = fcn.00016370(arg3,puStack_50,var_38h);
                            return (-1 < iVar2) - 1;
                        }
                    }
                }
                return -1;
            }
        }
    }
    return -1;
}


/* fcn.00016b08 @ 0x16b08 */

ulong fcn.00016b08(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar *puVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    int64_t arg4_00;
    uchar *puVar5;
    uint32_t arg1_00;
    uchar uVar6;
    uchar *puStackX_10;
    uchar *puStack_108;
    char cStack_ff;
    int iStack_fc;
    uint32_t uStack_f8;
    int iStack_e8;
    int iStack_e4;
    int iStack_e0;
    int iStack_dc;
    int iStack_d8;
    int iStack_d4;
    int iStack_c8;
    uint64_t uStack_98;
    uchar auStack_88 [32];
    uchar auStack_68 [64];
    
    iVar4 = arg2;
    iVar2 = fcn.00016870(arg2);
    if (iVar2 == 0) {
        return 0xffffffff;
    }
    if (*(iVar4 + 0x50) != 7) {
        return 0xffffffff;
    }
    uVar6 = 1;
    if (*(iVar4 + 0x14) != 1) {
        return 0xffffffff;
    }
    iVar4 = fcn.000127dc(*(arg1 + 0x388),*(arg1 + 0x390));
    if (iVar4 == 0) {
        return 0xffffffff;
    }
    puStackX_10 = arg4;
    arg4_00 = fcn.00019058(arg4);
    if (arg4_00 == 0) {
        fcn.00015778(iVar4);
        return 0xffffffff;
    }
    iVar2 = fcn.000128a0(iVar4,arg3,arg4,arg4_00);
    arg1_00 = arg4_00;
    if (iVar2 < 0) {
        fcn.00015778(iVar4);
code_r0x00016bb2:
        fcn.0001913c(arg1_00);
        return 0xffffffff;
    }
    fcn.00015778(iVar4);
    puVar1 = puStackX_10;
    iVar2 = fcn.0001c80c(arg4_00,puStackX_10,&puStack_108);
    if (((iVar2 < 0) || (cStack_ff != '\0')) || (iStack_fc != 0x10)) goto code_r0x00016bb2;
    iVar2 = uStack_f8 + puStack_108;
    iVar3 = fcn.0001c80c(puStack_108,uStack_f8,&puStack_108);
    if (((iVar3 < 0) || (cStack_ff != '\0')) || (iStack_fc != 0x10)) goto code_r0x00016bb2;
    puVar5 = puStack_108 + uStack_f8;
    iVar3 = fcn.0001c80c(puStack_108,uStack_f8,auStack_88);
    if (iVar3 < 0) {
        iVar3 = -1;
    }
    else {
        iVar3 = fcn.0001c9dc(&iStack_e8,&puStackX_10,auStack_88);
    }
    if ((iVar3 != 0) ||
       ((puStackX_10 < puVar5 &&
        (((iVar3 = fcn.0001c80c(puStackX_10,puVar5 - puStackX_10,&puStack_108), iVar3 < 0 || (cStack_ff != '\0')) ||
         ((iStack_fc != 5 || (puStack_108 + uStack_f8 != puVar5)))))))) goto code_r0x00016c6c;
    iVar3 = fcn.000168a8(&iStack_e8);
    if (iVar3 == 0) {
        iVar3 = fcn.000168dc(&iStack_e8);
        if (iVar3 == 0) {
code_r0x00016d46:
            if (((((uStack_98 < 5) || (uStack_98 < 4)) || (iStack_e8 != 1)) ||
                ((iStack_e4 != 2 || (iStack_e0 != 0x348)))) ||
               (((iStack_dc != 0x1bb8d || ((iStack_d8 != 2 || (iStack_d4 != 5)))) || (*(arg2 + 0x18) != 4))))
            goto code_r0x00016c6c;
            puStackX_10 = 0x10;
            uVar6 = 4;
        }
        else if (iStack_c8 == 1) {
            if (*(arg2 + 0x18) != 0xb) goto code_r0x00016c6c;
            puStackX_10 = 0x20;
        }
        else {
            if (iVar3 == 0) goto code_r0x00016d46;
            if (iStack_c8 == 2) {
                if (*(arg2 + 0x18) != 0xc) goto code_r0x00016c6c;
                puStackX_10 = 0x30;
                uVar6 = 2;
            }
            else {
                if ((iVar3 == 0) || (iStack_c8 != 3)) goto code_r0x00016d46;
                if (*(arg2 + 0x18) != 0xd) goto code_r0x00016c6c;
                puStackX_10 = 0x40;
                uVar6 = 3;
            }
        }
    }
    else {
        if (*(arg2 + 0x18) != 5) goto code_r0x00016c6c;
        puStackX_10 = 0x14;
        uVar6 = 0;
    }
    iVar2 = fcn.0001c80c(puVar5,iVar2 - puVar5,&puStack_108);
    if ((((-1 < iVar2) && (cStack_ff == '\0')) && (iStack_fc == 4)) && (puVar1 + arg4_00 <= puStack_108 + uStack_f8)) {
        iVar2 = fcn.000146e0(CONCAT71(puVar5 >> 8,uVar6),&stack0x00000028,&stack0x00000030,auStack_68);
        if (iVar2 != 0) {
            return 0xffffffff;
        }
        puVar5 = uStack_f8;
        if (puVar5 == puStackX_10) {
            if ((uStack_f8 == 0) || (puStack_108 == auStack_68)) {
                iVar4 = 0;
            }
            else {
                iVar4 = fcn.00011230(puStack_108,auStack_68,uStack_f8);
                puVar5 = uStack_f8;
            }
            if ((iVar4 == 0) && (puVar1 + arg4_00 <= puVar5 + puStack_108)) {
                fcn.0001913c(arg1_00);
                return 0;
            }
        }
    }
code_r0x00016c6c:
    fcn.0001913c(arg1_00);
    return 0xffffffff;
}


/* fcn.00018304 @ 0x18304 */

void fcn.00018304(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint32_t uVar5;
    
    uVar2 = *(arg1 + 0x14) >> 3 & 0x3f;
    uVar3 = uVar2;
    uVar1 = arg3;
    uVar5 = *(arg1 + 0x14) + uVar1 * 8;
    *(arg1 + 0x14) = uVar5;
    if (uVar5 < uVar1 << 3) {
        *(arg1 + 0x18) = *(arg1 + 0x18) + 1;
    }
    *(arg1 + 0x18) = *(arg1 + 0x18) + ((arg3 & 0xffffffffU) >> 0x1d);
    if (uVar2 + uVar1 < 0x40) {
        uVar5 = 0;
    }
    else {
        uVar5 = -uVar2 + 0x40;
        iVar4 = arg1 + 0x1c + uVar3;
        if ((uVar5 != 0) && (iVar4 != arg2)) {
            fcn.000111d0(iVar4,arg2,uVar5);
        }
        fcn.00017174(arg1,arg1 + 0x1c);
        for (uVar2 = -uVar2 + 0x7f; uVar2 < uVar1; uVar2 = uVar2 + 0x40) {
            fcn.00017174(arg1,uVar5 + arg2);
            uVar5 = uVar5 + 0x40;
        }
        uVar3 = 0;
    }
    iVar4 = arg1 + 0x1c + uVar3;
    if ((uVar1 - uVar5 != 0) && (iVar4 != uVar5 + arg2)) {
        fcn.000111d0(iVar4,uVar5 + arg2,uVar1 - uVar5);
    }
    return;
}


/* fcn.00017174 @ 0x17174 */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h
//WARNING: Variable defined which should be unmapped: var_39h

void fcn.00017174(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint in_register_00000014;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    uint32_t uVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    uint32_t uVar27;
    uint32_t uVar28;
    int32_t var_6fh;
    int32_t var_77h;
    int32_t var_7fh;
    uint32_t uStack_98;
    uint32_t uStack_94;
    uint32_t uStack_90;
    uint32_t uStack_8c;
    uint32_t uStack_88;
    uchar auStack_84 [3];
    int32_t var_79h;
    int32_t var_75h;
    int32_t var_71h;
    int32_t var_6dh;
    int32_t var_69h;
    int32_t var_65h;
    int32_t var_61h;
    int32_t var_5dh;
    int32_t var_59h;
    int32_t var_55h;
    int32_t var_51h;
    int32_t var_4dh;
    int32_t var_49h;
    int32_t var_45h;
    int64_t var_39h;
    int32_t var_31h;
    int32_t var_2dh;
    int32_t var_29h;
    int32_t var_25h;
    int32_t var_21h;
    int32_t var_1dh;
    int32_t var_19h;
    int32_t var_15h;
    int32_t var_11h;
    int32_t var_dh;
    int32_t var_9h;
    int32_t var_5h;
    int32_t var_1h;
    int32_t var_3h;
    
    if (&uStack_98 != CONCAT44(in_register_00000014,arg2)) {
        fcn.000111d0(&uStack_98,arg2,0x40);
    }
    uVar3 = *(arg1 + 8);
    uVar13 = *(arg1 + 0xc);
    uVar1 = uStack_98 >> 8 & 0xff00ff00 | uStack_98 << 0x18 | (uStack_98 & 0xff00) << 8 | uStack_98 >> 0x18;
    uVar11 = uVar1 + 0x5a827999 +
             ((uVar13 ^ uVar3) & *(arg1 + 4) ^ uVar13) + (*arg1 << 5 | *arg1 >> 0x1b) + *(arg1 + 0x10);
    uVar2 = *(arg1 + 4) >> 2 | *(arg1 + 4) << 0x1e;
    uVar8 = uStack_94 >> 8 & 0xff00ff00 | uStack_94 << 0x18 | (uStack_94 & 0xff00) << 8 | uStack_94 >> 0x18;
    uVar9 = *arg1 >> 2 | *arg1 << 0x1e;
    uVar13 = ((uVar3 ^ uVar2) & *arg1 ^ uVar3) + (uVar11 * 0x20 | uVar11 >> 0x1b) + uVar8 + uVar13 + 0x5a827999;
    uVar12 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar17 = uStack_90 >> 8 & 0xff00ff00 | uStack_90 << 0x18 | (uStack_90 & 0xff00) << 8 | uStack_90 >> 0x18;
    uVar18 = uVar17 + (uVar13 * 0x20 | uVar13 >> 0x1b) + ((uVar2 ^ uVar9) & uVar11 ^ uVar2) + uVar3 + 0x5a827999;
    uVar11 = uStack_8c >> 8 & 0xff00ff00 | uStack_8c << 0x18 | (uStack_8c & 0xff00) << 8 | uStack_8c >> 0x18;
    uVar3 = uVar2 + 0x5a827999 + ((uVar12 ^ uVar9) & uVar13 ^ uVar9) + (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar11;
    uVar14 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar4 = uStack_88 >> 8 & 0xff00ff00 | uStack_88 << 0x18 | (uStack_88 & 0xff00) << 8 | uStack_88 >> 0x18;
    uVar19 = uVar18 >> 2 | uVar18 * 0x40000000;
    uVar2 = uVar9 + 0x5a827999 + ((uVar12 ^ uVar14) & uVar18 ^ uVar12) + (uVar3 * 0x20 | uVar3 >> 0x1b) + uVar4;
    uVar9 = _auStack_84 >> 8 & 0xff00ff00 | _auStack_84 << 0x18 | (_auStack_84 & 0xff00) << 8 | _auStack_84 >> 0x18;
    uVar13 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar12 = uVar12 + ((uVar14 ^ uVar19) & uVar3 ^ uVar14) + (uVar2 * 0x20 | uVar2 >> 0x1b) + uVar9 + 0x5a827999;
    uVar18 = stack0xffffffffffffff80 >> 8 & 0xff00ff00 | stack0xffffffffffffff80 << 0x18 |
             (stack0xffffffffffffff80 & 0xff00) << 8 | stack0xffffffffffffff80 >> 0x18;
    uVar10 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar14 = uVar14 + ((uVar19 ^ uVar13) & uVar2 ^ uVar19) + (uVar12 * 0x20 | uVar12 >> 0x1b) + uVar18 + 0x5a827999;
    uVar5 = stack0xffffffffffffff84 >> 8 & 0xff00ff00 | stack0xffffffffffffff84 << 0x18 |
            (stack0xffffffffffffff84 & 0xff00) << 8 | stack0xffffffffffffff84 >> 0x18;
    uVar2 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar19 = uVar19 + ((uVar13 ^ uVar10) & uVar12 ^ uVar13) + (uVar14 * 0x20 | uVar14 >> 0x1b) + 0x5a827999 + uVar5;
    uVar6 = stack0xffffffffffffff88 >> 8 & 0xff00ff00 | stack0xffffffffffffff88 << 0x18 |
            (stack0xffffffffffffff88 & 0xff00) << 8 | stack0xffffffffffffff88 >> 0x18;
    uVar15 = uVar14 >> 2 | uVar14 * 0x40000000;
    uVar13 = uVar13 + ((uVar2 ^ uVar10) & uVar14 ^ uVar10) + (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x5a827999 + uVar6;
    uVar7 = stack0xffffffffffffff8c >> 8 & 0xff00ff00 | stack0xffffffffffffff8c << 0x18 |
            (stack0xffffffffffffff8c & 0xff00) << 8 | stack0xffffffffffffff8c >> 0x18;
    uVar20 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar10 = uVar10 + ((uVar2 ^ uVar15) & uVar19 ^ uVar2) + (uVar13 * 0x20 | uVar13 >> 0x1b) + 0x5a827999 + uVar7;
    uVar12 = stack0xffffffffffffff90 >> 8 & 0xff00ff00 | stack0xffffffffffffff90 << 0x18 |
             (stack0xffffffffffffff90 & 0xff00) << 8 | stack0xffffffffffffff90 >> 0x18;
    uVar3 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar13 = uVar12 + (uVar10 * 0x20 | uVar10 >> 0x1b) + ((uVar15 ^ uVar20) & uVar13 ^ uVar15) + uVar2 + 0x5a827999;
    uVar22 = stack0xffffffffffffff94 >> 8 & 0xff00ff00 | stack0xffffffffffffff94 << 0x18 |
             (stack0xffffffffffffff94 & 0xff00) << 8 | stack0xffffffffffffff94 >> 0x18;
    uVar14 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar2 = ((uVar20 ^ uVar3) & uVar10 ^ uVar20) + (uVar13 * 0x20 | uVar13 >> 0x1b) + uVar22 + uVar15 + 0x5a827999;
    uVar27 = stack0xffffffffffffff98 >> 8 & 0xff00ff00 | stack0xffffffffffffff98 << 0x18 |
             (stack0xffffffffffffff98 & 0xff00) << 8 | stack0xffffffffffffff98 >> 0x18;
    uVar10 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar13 = ((uVar3 ^ uVar14) & uVar13 ^ uVar3) + (uVar2 * 0x20 | uVar2 >> 0x1b) + uVar27 + uVar20 + 0x5a827999;
    uVar25 = stack0xffffffffffffff9c >> 8 & 0xff00ff00 | stack0xffffffffffffff9c << 0x18 |
             (stack0xffffffffffffff9c & 0xff00) << 8 | stack0xffffffffffffff9c >> 0x18;
    uVar19 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar20 = ((uVar10 ^ uVar14) & uVar2 ^ uVar14) + (uVar13 * 0x20 | uVar13 >> 0x1b) + uVar25 + uVar3 + 0x5a827999;
    uVar16 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar2 = stack0xffffffffffffffa0 >> 8 & 0xff00ff00 | stack0xffffffffffffffa0 << 0x18 |
            (stack0xffffffffffffffa0 & 0xff00) << 8 | stack0xffffffffffffffa0 >> 0x18;
    uVar3 = uVar2 + (uVar20 * 0x20 | uVar20 >> 0x1b) + ((uVar10 ^ uVar19) & uVar13 ^ uVar10) + uVar14 + 0x5a827999;
    uVar21 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar15 = stack0xffffffffffffffa4 >> 8 & 0xff00ff00 | stack0xffffffffffffffa4 << 0x18 |
             (stack0xffffffffffffffa4 & 0xff00) << 8 | stack0xffffffffffffffa4 >> 0x18;
    uVar1 = uVar25 ^ uVar6 ^ uVar17 ^ uVar1;
    uVar14 = uVar1 << 1 | uVar1 < 0;
    uVar13 = uVar15 + (uVar3 * 0x20 | uVar3 >> 0x1b) + ((uVar19 ^ uVar16) & uVar20 ^ uVar19) + uVar10 + 0x5a827999;
    uVar19 = uVar19 + ((uVar16 ^ uVar21) & uVar3 ^ uVar16) + (uVar13 * 0x20 | uVar13 >> 0x1b) + 0x5a827999 + uVar14;
    uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar8 = uVar2 ^ uVar7 ^ uVar11 ^ uVar8;
    uVar17 = uVar15 ^ uVar12 ^ uVar4 ^ uVar17;
    uVar8 = uVar8 << 1 | uVar8 < 0;
    uVar1 = uVar22 ^ uVar9 ^ uVar11 ^ uVar14;
    uVar11 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar17 = uVar17 << 1 | uVar17 < 0;
    uVar16 = uVar16 + ((uVar21 ^ uVar3) & uVar13 ^ uVar21) + (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x5a827999 + uVar8;
    uVar23 = uVar1 << 1 | uVar1 < 0;
    uVar20 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar21 = uVar21 + ((uVar11 ^ uVar3) & uVar19 ^ uVar3) + (uVar16 * 0x20 | uVar16 >> 0x1b) + 0x5a827999 + uVar17;
    uVar13 = uVar27 ^ uVar18 ^ uVar4 ^ uVar8;
    uVar4 = uVar13 << 1 | uVar13 < 0;
    uVar19 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar3 = uVar3 + ((uVar11 ^ uVar20) & uVar16 ^ uVar11) + (uVar21 * 0x20 | uVar21 >> 0x1b) + 0x5a827999 + uVar23;
    uVar13 = uVar25 ^ uVar5 ^ uVar9 ^ uVar17;
    uVar9 = uVar13 << 1 | uVar13 < 0;
    uVar16 = uVar21 >> 2 | uVar21 * 0x40000000;
    uVar11 = uVar11 + (uVar20 ^ uVar19 ^ uVar21) + (uVar3 * 0x20 | uVar3 >> 0x1b) + 0x6ed9eba1 + uVar4;
    uVar20 = uVar20 + (uVar19 ^ uVar16 ^ uVar3) + (uVar11 * 0x20 | uVar11 >> 0x1b) + 0x6ed9eba1 + uVar9;
    uVar1 = uVar12 ^ uVar6 ^ uVar9 ^ uVar14;
    uVar18 = uVar2 ^ uVar6 ^ uVar18 ^ uVar23;
    uVar5 = uVar15 ^ uVar7 ^ uVar5 ^ uVar4;
    uVar13 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar10 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar26 = uVar18 << 1 | uVar18 < 0;
    uVar28 = uVar5 << 1 | uVar5 < 0;
    uVar5 = uVar1 << 1 | uVar1 < 0;
    uVar19 = uVar19 + (uVar11 ^ uVar16 ^ uVar13) + (uVar20 * 0x20 | uVar20 >> 0x1b) + 0x6ed9eba1 + uVar26;
    uVar3 = uVar22 ^ uVar7 ^ uVar26 ^ uVar8;
    uVar24 = uVar3 << 1 | uVar3 < 0;
    uVar11 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar16 = uVar16 + (uVar10 ^ uVar20 ^ uVar13) + (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x6ed9eba1 + uVar28;
    uVar6 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar13 = uVar13 + (uVar10 ^ uVar11 ^ uVar19) + (uVar16 * 0x20 | uVar16 >> 0x1b) + 0x6ed9eba1 + uVar5;
    uVar7 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar10 = uVar10 + (uVar11 ^ uVar6 ^ uVar16) + (uVar13 * 0x20 | uVar13 >> 0x1b) + 0x6ed9eba1 + uVar24;
    uVar3 = uVar27 ^ uVar12 ^ uVar28 ^ uVar17;
    uVar3 = uVar3 << 1 | uVar3 < 0;
    uVar11 = uVar11 + (uVar6 ^ uVar7 ^ uVar13) + (uVar10 * 0x20 | uVar10 >> 0x1b) + uVar3 + 0x6ed9eba1;
    uVar1 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar13 = uVar25 ^ uVar22 ^ uVar5 ^ uVar23;
    uVar18 = uVar13 << 1 | uVar13 < 0;
    uVar19 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar6 = uVar6 + (uVar10 ^ uVar7 ^ uVar1) + (uVar11 * 0x20 | uVar11 >> 0x1b) + uVar18 + 0x6ed9eba1;
    uVar13 = uVar2 ^ uVar27 ^ uVar24 ^ uVar4;
    uVar12 = uVar13 << 1 | uVar13 < 0;
    uVar20 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar7 = uVar7 + (uVar19 ^ uVar11 ^ uVar1) + (uVar6 * 0x20 | uVar6 >> 0x1b) + uVar12 + 0x6ed9eba1;
    uVar13 = uVar15 ^ uVar25 ^ uVar3 ^ uVar9;
    uVar13 = uVar13 << 1 | uVar13 < 0;
    uVar21 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar1 = uVar1 + (uVar19 ^ uVar20 ^ uVar6) + (uVar7 * 0x20 | uVar7 >> 0x1b) + uVar13 + 0x6ed9eba1;
    uVar2 = uVar2 ^ uVar18 ^ uVar26 ^ uVar14;
    uVar10 = uVar2 << 1 | uVar2 < 0;
    uVar25 = uVar7 >> 2 | uVar7 * 0x40000000;
    uVar19 = uVar19 + (uVar20 ^ uVar21 ^ uVar7) + (uVar1 * 0x20 | uVar1 >> 0x1b) + uVar10 + 0x6ed9eba1;
    uVar2 = uVar15 ^ uVar12 ^ uVar28 ^ uVar8;
    uVar6 = uVar2 << 1 | uVar2 < 0;
    uVar20 = uVar20 + (uVar21 ^ uVar25 ^ uVar1) + (uVar19 * 0x20 | uVar19 >> 0x1b) + uVar6 + 0x6ed9eba1;
    uVar11 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar14 = uVar13 ^ uVar5 ^ uVar17 ^ uVar14;
    uVar7 = uVar14 << 1 | uVar14 < 0;
    uVar14 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar21 = uVar21 + (uVar19 ^ uVar25 ^ uVar11) + (uVar20 * 0x20 | uVar20 >> 0x1b) + uVar7 + 0x6ed9eba1;
    uVar8 = uVar10 ^ uVar24 ^ uVar23 ^ uVar8;
    uVar15 = uVar8 << 1 | uVar8 < 0;
    uVar16 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar25 = uVar25 + (uVar14 ^ uVar20 ^ uVar11) + (uVar21 * 0x20 | uVar21 >> 0x1b) + uVar15 + 0x6ed9eba1;
    uVar17 = uVar6 ^ uVar3 ^ uVar4 ^ uVar17;
    uVar17 = uVar17 << 1 | uVar17 < 0;
    uVar22 = uVar21 >> 2 | uVar21 * 0x40000000;
    uVar11 = uVar11 + (uVar14 ^ uVar16 ^ uVar21) + (uVar25 * 0x20 | uVar25 >> 0x1b) + 0x6ed9eba1 + uVar17;
    uVar1 = uVar18 ^ uVar9 ^ uVar23 ^ uVar7;
    uVar1 = uVar1 << 1 | uVar1 < 0;
    uVar23 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar14 = uVar14 + (uVar16 ^ uVar22 ^ uVar25) + (uVar11 * 0x20 | uVar11 >> 0x1b) + uVar1 + 0x6ed9eba1;
    uVar2 = uVar12 ^ uVar26 ^ uVar4 ^ uVar15;
    uVar2 = uVar2 << 1 | uVar2 < 0;
    uVar16 = uVar16 + (uVar22 ^ uVar23 ^ uVar11) + (uVar14 * 0x20 | uVar14 >> 0x1b) + 0x6ed9eba1 + uVar2;
    uVar4 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar19 = uVar14 >> 2 | uVar14 * 0x40000000;
    uVar11 = uVar13 ^ uVar28 ^ uVar9 ^ uVar17;
    uVar11 = uVar11 << 1 | uVar11 < 0;
    uVar22 = uVar22 + (uVar14 ^ uVar23 ^ uVar4) + (uVar16 * 0x20 | uVar16 >> 0x1b) + uVar11 + 0x6ed9eba1;
    uVar9 = uVar10 ^ uVar5 ^ uVar26 ^ uVar1;
    uVar8 = uVar9 << 1 | uVar9 < 0;
    uVar20 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar21 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar23 = uVar23 + (uVar19 ^ uVar16 ^ uVar4) + (uVar22 * 0x20 | uVar22 >> 0x1b) + uVar8 + 0x6ed9eba1;
    uVar9 = uVar6 ^ uVar24 ^ uVar28 ^ uVar2;
    uVar14 = uVar9 << 1 | uVar9 < 0;
    uVar9 = (uVar19 ^ uVar20 ^ uVar22) + (uVar23 * 0x20 | uVar23 >> 0x1b) + uVar14 + uVar4 + 0x6ed9eba1;
    uVar22 = uVar23 >> 2 | uVar23 * 0x40000000;
    uVar4 = uVar3 ^ uVar5 ^ uVar11 ^ uVar7;
    uVar26 = uVar4 << 1 | uVar4 < 0;
    uVar4 = uVar18 ^ uVar24 ^ uVar8 ^ uVar15;
    uVar4 = uVar4 << 1 | uVar4 < 0;
    uVar19 = (uVar9 * 0x20 | uVar9 >> 0x1b) + 0x8f1bbcdc +
             ((uVar21 | uVar23) & uVar20 | uVar21 & uVar23) + uVar26 + uVar19;
    uVar5 = uVar9 >> 2 | uVar9 * 0x40000000;
    uVar3 = uVar12 ^ uVar3 ^ uVar14 ^ uVar17;
    uVar16 = (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x8f1bbcdc +
             ((uVar22 | uVar9) & uVar21 | uVar22 & uVar9) + uVar4 + uVar20;
    uVar3 = uVar3 << 1 | uVar3 < 0;
    uVar20 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar9 = uVar13 ^ uVar18 ^ uVar26 ^ uVar1;
    uVar9 = uVar9 << 1 | uVar9 < 0;
    uVar19 = (uVar16 * 0x20 | uVar16 >> 0x1b) + 0x8f1bbcdc +
             ((uVar19 | uVar5) & uVar22 | uVar19 & uVar5) + uVar3 + uVar21;
    uVar21 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar16 = (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x8f1bbcdc +
             ((uVar20 | uVar16) & uVar5 | uVar20 & uVar16) + uVar9 + uVar22;
    uVar18 = uVar10 ^ uVar12 ^ uVar4 ^ uVar2;
    uVar18 = uVar18 << 1 | uVar18 < 0;
    uVar22 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar12 = (uVar16 * 0x20 | uVar16 >> 0x1b) + 0x8f1bbcdc +
             ((uVar21 | uVar19) & uVar20 | uVar21 & uVar19) + uVar18 + uVar5;
    uVar13 = uVar6 ^ uVar13 ^ uVar3 ^ uVar11;
    uVar13 = uVar13 << 1 | uVar13 < 0;
    uVar25 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar19 = (uVar12 * 0x20 | uVar12 >> 0x1b) + 0x8f1bbcdc +
             ((uVar22 | uVar16) & uVar21 | uVar22 & uVar16) + uVar13 + uVar20;
    uVar5 = uVar10 ^ uVar9 ^ uVar8 ^ uVar7;
    uVar5 = uVar5 << 1 | uVar5 < 0;
    uVar7 = uVar13 ^ uVar26 ^ uVar17 ^ uVar7;
    uVar7 = uVar7 << 1 | uVar7 < 0;
    uVar10 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar16 = (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x8f1bbcdc +
             ((uVar25 | uVar12) & uVar22 | uVar25 & uVar12) + uVar5 + uVar21;
    uVar12 = uVar6 ^ uVar18 ^ uVar14 ^ uVar15;
    uVar12 = uVar12 << 1 | uVar12 < 0;
    uVar20 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar21 = (uVar16 * 0x20 | uVar16 >> 0x1b) + 0x8f1bbcdc +
             ((uVar19 | uVar10) & uVar25 | uVar19 & uVar10) + uVar12 + uVar22;
    uVar19 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar22 = (uVar21 * 0x20 | uVar21 >> 0x1b) + 0x8f1bbcdc +
             ((uVar20 | uVar16) & uVar10 | uVar20 & uVar16) + uVar7 + uVar25;
    uVar15 = uVar5 ^ uVar4 ^ uVar1 ^ uVar15;
    uVar6 = uVar15 << 1 | uVar15 < 0;
    uVar10 = (uVar22 * 0x20 | uVar22 >> 0x1b) + 0x8f1bbcdc +
             ((uVar19 | uVar21) & uVar20 | uVar19 & uVar21) + uVar6 + uVar10;
    uVar17 = uVar12 ^ uVar3 ^ uVar2 ^ uVar17;
    uVar2 = uVar18 ^ uVar8 ^ uVar2 ^ uVar6;
    uVar17 = uVar17 << 1 | uVar17 < 0;
    uVar16 = uVar21 >> 2 | uVar21 * 0x40000000;
    uVar15 = uVar13 ^ uVar14 ^ uVar11 ^ uVar17;
    uVar25 = uVar2 << 1 | uVar2 < 0;
    uVar24 = uVar15 << 1 | uVar15 < 0;
    uVar21 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar2 = (uVar10 * 0x20 | uVar10 >> 0x1b) + 0x8f1bbcdc +
            ((uVar16 | uVar22) & uVar19 | uVar16 & uVar22) + uVar17 + uVar20;
    uVar1 = uVar9 ^ uVar11 ^ uVar1 ^ uVar7;
    uVar11 = uVar1 << 1 | uVar1 < 0;
    uVar1 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar15 = (uVar2 * 0x20 | uVar2 >> 0x1b) + 0x8f1bbcdc +
             ((uVar21 | uVar10) & uVar16 | uVar21 & uVar10) + uVar11 + uVar19;
    uVar10 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar20 = uVar16 + ((uVar2 | uVar1) & uVar21 | uVar2 & uVar1) + 0x8f1bbcdc + uVar25 +
             (uVar15 * 0x20 | uVar15 >> 0x1b);
    uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
    uVar2 = (uVar20 * 0x20 | uVar20 >> 0x1b) +
            ((uVar10 | uVar15) & uVar1 | uVar10 & uVar15) + uVar24 + uVar21 + 0x8f1bbcdc;
    uVar8 = uVar5 ^ uVar26 ^ uVar8 ^ uVar11;
    uVar16 = uVar8 << 1 | uVar8 < 0;
    uVar8 = uVar12 ^ uVar4 ^ uVar14 ^ uVar25;
    uVar22 = uVar8 << 1 | uVar8 < 0;
    uVar15 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar4 = uVar9 ^ uVar4 ^ uVar16 ^ uVar6;
    uVar21 = uVar4 << 1 | uVar4 < 0;
    uVar4 = (uVar2 * 0x20 | uVar2 >> 0x1b) +
            ((uVar19 | uVar20) & uVar10 | uVar19 & uVar20) + uVar16 + uVar1 + 0x8f1bbcdc;
    uVar8 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = (uVar4 * 0x20 | uVar4 >> 0x1b) + ((uVar15 | uVar2) & uVar19 | uVar15 & uVar2) + uVar22 + uVar10 + 0x8f1bbcdc
    ;
    uVar2 = uVar3 ^ uVar26 ^ uVar24 ^ uVar7;
    uVar14 = uVar2 << 1 | uVar2 < 0;
    uVar10 = uVar4 >> 2 | uVar4 * 0x40000000;
    uVar2 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar4 = uVar19 + ((uVar8 | uVar4) & uVar15 | uVar8 & uVar4) + 0x8f1bbcdc + uVar14 + (uVar1 * 0x20 | uVar1 >> 0x1b);
    uVar3 = uVar18 ^ uVar3 ^ uVar22 ^ uVar17;
    uVar1 = (uVar4 * 0x20 | uVar4 >> 0x1b) + ((uVar1 | uVar10) & uVar8 | uVar1 & uVar10) + uVar21 + uVar15 + 0x8f1bbcdc;
    uVar26 = uVar3 << 1 | uVar3 < 0;
    uVar15 = uVar4 >> 2 | uVar4 * 0x40000000;
    uVar8 = (uVar1 * 0x20 | uVar1 >> 0x1b) + ((uVar2 | uVar4) & uVar10 | uVar2 & uVar4) + uVar26 + uVar8 + 0x8f1bbcdc;
    uVar19 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar3 = uVar13 ^ uVar9 ^ uVar14 ^ uVar11;
    uVar20 = uVar3 << 1 | uVar3 < 0;
    uVar4 = uVar5 ^ uVar18 ^ uVar21 ^ uVar25;
    uVar3 = uVar5 ^ uVar20 ^ uVar16 ^ uVar7;
    uVar23 = uVar4 << 1 | uVar4 < 0;
    uVar18 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar1 = (uVar8 * 0x20 | uVar8 >> 0x1b) + ((uVar15 | uVar1) & uVar2 | uVar15 & uVar1) + uVar20 + uVar10 + 0x8f1bbcdc;
    uVar4 = uVar3 << 1 | uVar3 < 0;
    uVar3 = (uVar1 * 0x20 | uVar1 >> 0x1b) + (uVar15 ^ uVar19 ^ uVar8) + uVar23 + uVar2 + 0xca62c1d6;
    uVar13 = uVar12 ^ uVar13 ^ uVar26 ^ uVar24;
    uVar8 = uVar13 << 1 | uVar13 < 0;
    uVar2 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar9 = (uVar3 * 0x20 | uVar3 >> 0x1b) + 0xca62c1d6 + (uVar19 ^ uVar18 ^ uVar1) + uVar8 + uVar15;
    uVar5 = (uVar9 * 0x20 | uVar9 >> 0x1b) + 0xca62c1d6 + (uVar3 ^ uVar18 ^ uVar2) + uVar4 + uVar19;
    uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar13 = uVar12 ^ uVar23 ^ uVar22 ^ uVar6;
    uVar6 = uVar4 ^ uVar21 ^ uVar11 ^ uVar6;
    uVar1 = uVar13 << 1 | uVar13 < 0;
    uVar18 = (uVar5 * 0x20 | uVar5 >> 0x1b) + 0xca62c1d6 + (uVar3 ^ uVar9 ^ uVar2) + uVar1 + uVar18;
    uVar7 = uVar8 ^ uVar14 ^ uVar17 ^ uVar7;
    uVar17 = uVar1 ^ uVar26 ^ uVar25 ^ uVar17;
    uVar9 = uVar9 >> 2 | uVar9 * 0x40000000;
    uStack_98 = uVar7 << 1 | uVar7 < 0;
    uStack_94 = uVar6 << 1 | uVar6 < 0;
    uVar12 = uVar5 >> 2 | uVar5 * 0x40000000;
    uStack_90 = uVar17 << 1 | uVar17 < 0;
    uVar13 = uVar20 ^ uVar24 ^ uVar11 ^ uStack_98;
    uStack_8c = uVar13 << 1 | uVar13 < 0;
    uVar13 = (uVar18 * 0x20 | uVar18 >> 0x1b) + 0xca62c1d6 + (uVar3 ^ uVar9 ^ uVar5) + uStack_98 + uVar2;
    uVar5 = uVar18 >> 2 | uVar18 * 0x40000000;
    uVar3 = (uVar13 * 0x20 | uVar13 >> 0x1b) + 0xca62c1d6 + (uVar9 ^ uVar12 ^ uVar18) + uStack_94 + uVar3;
    uVar11 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar9 = (uVar3 * 0x20 | uVar3 >> 0x1b) + 0xca62c1d6 + (uVar12 ^ uVar5 ^ uVar13) + uStack_90 + uVar9;
    uVar12 = (uVar9 * 0x20 | uVar9 >> 0x1b) + 0xca62c1d6 + (uVar3 ^ uVar5 ^ uVar11) + uStack_8c + uVar12;
    uVar13 = uVar23 ^ uVar16 ^ uVar25 ^ uStack_94;
    uVar18 = uVar8 ^ uVar22 ^ uVar24 ^ uStack_90;
    uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar2 = uVar4 ^ uVar14 ^ uVar16 ^ uStack_8c;
    _auStack_84 = uVar18 << 1 | uVar18 < 0;
    uStack_88 = uVar13 << 1 | uVar13 < 0;
    uVar18 = uVar9 >> 2 | uVar9 * 0x40000000;
    *0x38 = uVar2 << 1 | uVar2 < 0;
    uVar13 = uVar1 ^ uVar21 ^ uVar22 ^ uStack_88;
    *0xa8 = uVar13 << 1 | uVar13 < 0;
    uVar9 = (uVar12 * 0x20 | uVar12 >> 0x1b) + 0xca62c1d6 + (uVar3 ^ uVar9 ^ uVar11) + uStack_88 + uVar5;
    uVar10 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar5 = uVar9 >> 2 | uVar9 * 0x40000000;
    uVar2 = uVar11 + (uVar3 ^ uVar18 ^ uVar12) + 0xca62c1d6 + _auStack_84 + (uVar9 * 0x20 | uVar9 >> 0x1b);
    uVar13 = uVar26 ^ uVar14 ^ _auStack_84 ^ uStack_98;
    uVar3 = (uVar2 * 0x20 | uVar2 >> 0x1b) + (uVar18 ^ uVar10 ^ uVar9) + *0x38 + uVar3 + 0xca62c1d6;
    *0x10 = uVar13 << 1 | uVar13 < 0;
    uVar11 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar9 = (uVar3 * 0x20 | uVar3 >> 0x1b) + (uVar10 ^ uVar5 ^ uVar2) + *0xa8 + uVar18 + 0xca62c1d6;
    uVar13 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar12 = (uVar9 * 0x20 | uVar9 >> 0x1b) + (uVar3 ^ uVar5 ^ uVar11) + *0x10 + uVar10 + 0xca62c1d6;
    uVar3 = uVar20 ^ uVar21 ^ *0x38 ^ uStack_94;
    *0x88 = uVar3 << 1 | uVar3 < 0;
    uVar18 = uVar9 >> 2 | uVar9 * 0x40000000;
    uVar3 = uVar23 ^ uVar26 ^ *0xa8 ^ uStack_90;
    *0x98 = uVar3 << 1 | uVar3 < 0;
    uVar2 = uVar4 ^ uVar23 ^ *0x88 ^ uStack_88;
    uVar3 = (uVar12 * 0x20 | uVar12 >> 0x1b) + (uVar13 ^ uVar9 ^ uVar11) + 0xca62c1d6 + *0x88 + uVar5;
    *0x90 = uVar2 << 1 | uVar2 < 0;
    uVar5 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar2 = uVar8 ^ uVar20 ^ *0x10 ^ uStack_8c;
    uVar9 = (uVar3 * 0x20 | uVar3 >> 0x1b) + (uVar13 ^ uVar18 ^ uVar12) + *0x98 + uVar11 + 0xca62c1d6;
    *0x80 = uVar2 << 1 | uVar2 < 0;
    uVar2 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar11 = (uVar9 * 0x20 | uVar9 >> 0x1b) + (uVar18 ^ uVar5 ^ uVar3) + *0x80 + uVar13 + 0xca62c1d6;
    uVar12 = uVar9 >> 2 | uVar9 * 0x40000000;
    uVar13 = (uVar11 * 0x20 | uVar11 >> 0x1b) + (uVar5 ^ uVar2 ^ uVar9) + *0x90 + uVar18 + 0xca62c1d6;
    uVar3 = uVar1 ^ uVar8 ^ *0x98 ^ _auStack_84;
    *0x10 = uVar3 << 1 | uVar3 < 0;
    uVar9 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar11 = (uVar13 * 0x20 | uVar13 >> 0x1b) + (uVar11 ^ uVar2 ^ uVar12) + *0x10 + 0xca62c1d6 + uVar5;
    uVar3 = uVar4 ^ *0x80 ^ *0x38 ^ uStack_98;
    uVar1 = uVar1 ^ *0x90 ^ *0xa8 ^ uStack_94;
    *0x10 = uVar3 << 1 | uVar3 < 0;
    uVar3 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar13 = (uVar11 * 0x20 | uVar11 >> 0x1b) + (uVar9 ^ uVar13 ^ uVar12) + *0x10 + 0xca62c1d6 + uVar2;
    *0xa0 = uVar1 << 1 | uVar1 < 0;
    *(arg1 + 4) = *(arg1 + 4) + uVar13;
    *(arg1 + 0xc) = *(arg1 + 0xc) + uVar3;
    *(arg1 + 0x10) = *(arg1 + 0x10) + uVar9;
    *(arg1 + 8) = *(arg1 + 8) + (uVar11 >> 2 | uVar11 * 0x40000000);
    *arg1 = (uVar9 ^ uVar3 ^ uVar11) + *arg1 + *0xa0 + (uVar13 * 0x20 | uVar13 >> 0x1b) + uVar12 + 0xca62c1d6;
    fcn.00011250(&uStack_98,0x40,0);
    return;
}


/* fcn.00018d48 @ 0x18d48 */

ulong fcn.00018d48(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    uint in_register_0000000c;
    int64_t *arg1_00;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    uint64_t uVar6;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar5 = arg3;
    uVar6 = arg3 & 0xffffffff;
    if ((arg2 == 0) || (0x80 < *(arg1_00 + 9))) {
        uVar1 = 0xffffffff;
    }
    else {
        while (uVar4 = uVar6, iVar5 != 0) {
            if ((arg1_00[9] == 0) && (0x7f < uVar4)) {
                iVar2 = arg1_00 + 0x4c;
                if (iVar2 != arg2) {
                    fcn.000111d0(iVar2,arg2,0x80);
                }
                uVar1 = fcn.00018b14(arg1_00,iVar2);
                if (uVar1 != 0) {
                    return uVar1;
                }
                *arg1_00 = *arg1_00 + 0x400;
                arg2 = arg2 + 0x80;
                uVar6 = uVar4 - 0x80;
            }
            else {
                uVar3 = 0x80 - arg1_00[9];
                if (uVar4 < uVar3) {
                    uVar3 = uVar4;
                }
                iVar2 = arg1_00 + *(arg1_00 + 9) + 0x4c;
                if ((uVar3 != 0) && (iVar2 != arg2)) {
                    fcn.000111d0(iVar2,arg2,uVar3);
                }
                *(arg1_00 + 9) = arg1_00[9] + uVar3;
                arg2 = arg2 + uVar3;
                uVar6 = uVar4 - uVar3;
                if (arg1_00[9] == 0x80) {
                    uVar1 = fcn.00018b14(arg1_00,arg1_00 + 0x4c);
                    if (uVar1 != 0) {
                        return uVar1;
                    }
                    *arg1_00 = *arg1_00 + 0x400;
                    *(arg1_00 + 9) = 0;
                }
            }
            iVar5 = uVar6;
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00018e44 @ 0x18e44 */

ulong fcn.00018e44(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t *arg1_00;
    uchar *puVar3;
    int64_t iVar4;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if ((arg2 == 0) || (0x7f < *(arg1_00 + 9))) {
        uVar2 = 0xffffffff;
    }
    else {
        *arg1_00 = *arg1_00 + *(arg1_00 + 9) * 8;
        *(*(arg1_00 + 9) + 0x4c + arg1_00) = 0x80;
        *(arg1_00 + 9) = arg1_00[9] + 1;
        uVar1 = *(arg1_00 + 9);
        if (0x70 < uVar1) {
            while (uVar1 < 0x80) {
                *(uVar1 + 0x4c + arg1_00) = 0;
                *(arg1_00 + 9) = arg1_00[9] + 1;
                uVar1 = *(arg1_00 + 9);
            }
            fcn.00018b14(arg1_00,arg1_00 + 0x4c);
            *(arg1_00 + 9) = 0;
        }
        while (*(arg1_00 + 9) < 0x78) {
            *(*(arg1_00 + 9) + 0x4c + arg1_00) = 0;
            *(arg1_00 + 9) = arg1_00[9] + 1;
        }
        *(arg1_00 + 0xc4) = *(arg1_00 + 7);
        *(arg1_00 + 0xc5) = *(arg1_00 + 6);
        *(arg1_00 + 0xc6) = *(arg1_00 + 5);
        *(arg1_00 + 199) = *(arg1_00 + 4);
        *(arg1_00 + 0x19) = *(arg1_00 + 3);
        *(arg1_00 + 0xc9) = *(arg1_00 + 2);
        *(arg1_00 + 0xca) = *(arg1_00 + 1);
        *(arg1_00 + 0xcb) = *arg1_00;
        fcn.00018b14(arg1_00,arg1_00 + 0x4c);
        puVar3 = arg1_00 + 0xe;
        arg2 = arg2 - arg1_00;
        iVar4 = 8;
        do {
            puVar3[arg2 + -0xe] = puVar3[1];
            puVar3[arg2 + -0xd] = *puVar3;
            puVar3[arg2 + -0xc] = puVar3[-1];
            puVar3[arg2 + -0xb] = puVar3[-2];
            puVar3[arg2 + -10] = puVar3[-3];
            puVar3[arg2 + -9] = puVar3[-4];
            puVar3[arg2 + -8] = puVar3[-5];
            puVar3[arg2 + -7] = puVar3[-6];
            puVar3 = puVar3 + 8;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00018510 @ 0x18510 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h

uint fcn.00018510(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint uVar1;
    uchar *arg4_00;
    uint32_t uVar2;
    uint32_t arg1_00;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int iVar6;
    int iVar7;
    int64_t var_30h;
    uint64_t auStack_58 [3];
    int64_t iStack_40;
    int64_t var_30h_2;
    int64_t var_28h;
    int64_t var_18h;
    int64_t var_10h;
    
    arg1_00 = arg2;
    uVar5 = arg4 & 0xffffffff;
    uVar4 = arg2 & 0xffffffff;
    arg4_00 = fcn.00019058(arg1_00);
    if (arg4_00 == NULL) {
        uVar1 = 0xd;
    }
    else {
        iVar6 = 0;
        while (uVar1 = 0, uVar5 != 0) {
            arg4_00[3] = iVar6;
            *arg4_00 = iVar6 >> 0x18;
            arg4_00[1] = iVar6 >> 0x10;
            iVar7 = iVar6 + 1;
            arg4_00[2] = iVar6 >> 8;
            auStack_58[1] = 4;
            auStack_58[0] = uVar4;
            iStack_40 = arg1;
            var_30h_2 = arg4_00;
            if (arg1_00 == 0x14) {
                fcn.00016ff0(2,&iStack_40,auStack_58,arg4_00);
            }
            else if (arg1_00 == 0x20) {
                fcn.00015120(2,&iStack_40,auStack_58,arg4_00);
            }
            else if (arg1_00 == 0x30) {
                fcn.000183e4(2,&iStack_40,auStack_58,arg4_00);
            }
            else {
                if (arg1_00 != 0x40) {
                    uVar1 = 0xb;
                    break;
                }
                fcn.00018f68(2,&iStack_40,auStack_58,arg4_00);
            }
            uVar2 = 0;
            iVar3 = arg4_00 - arg3;
            do {
                uVar1 = 0;
                if (uVar5 == 0) goto code_r0x00018623;
                uVar2 = uVar2 + 1;
                *arg3 = *(arg3 + iVar3);
                uVar5 = uVar5 - 1;
                arg3 = arg3 + 1;
                iVar6 = iVar7;
            } while (uVar2 < arg1_00);
        }
code_r0x00018623:
        fcn.0001913c(arg4_00);
    }
    return uVar1;
}


/* fcn.00018b14 @ 0x18b14 */

ulong fcn.00018b14(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uchar *puVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t *arg2_00;
    int64_t iVar6;
    uint64_t *puVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    int64_t aiStack_2f0 [4];
    uint64_t uStack_2d0;
    uint64_t uStack_2c8;
    uint64_t uStack_2c0;
    uint64_t uStack_2b8;
    uchar auStack_2b0 [8];
    uint64_t auStack_2a8 [80];
    
    arg2_00 = arg1 + 8;
    iVar5 = 0x40;
    fcn.0001dca0(aiStack_2f0 + 1,arg2_00,0x40);
    iVar6 = 0x10;
    puVar3 = arg2 + 2;
    do {
        *(puVar3 + 8 + auStack_2b0 + (-2 - arg2)) =
             CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(puVar3[-2],puVar3[-1]),*puVar3),puVar3[1]
                                                         ),puVar3[2]),puVar3[3]),puVar3[4]),puVar3[5]);
        iVar6 = iVar6 + -1;
        puVar3 = puVar3 + 8;
    } while (iVar6 != 0);
    puVar7 = auStack_2a8 + 0xe;
    do {
        uVar4 = puVar7[-0xd];
        uVar8 = *puVar7;
        puVar7[2] = ((uVar4 >> 8 | uVar4 << 0x38) ^ (uVar4 >> 1 | ((uVar4 & 1) != 0) << 0x3f) ^ uVar4 >> 7) +
                    ((uVar8 >> 0x13 | uVar8 << 0x2d) ^ (uVar8 << 3 | uVar8 >> 0x3d) ^ uVar8 >> 6) + puVar7[-0xe] +
                    puVar7[-5];
        iVar5 = iVar5 + -1;
        puVar7 = puVar7 + 1;
    } while (iVar5 != 0);
    iVar5 = 0;
    do {
        uVar10 = uStack_2c0;
        uVar9 = aiStack_2f0[3];
        uStack_2c0 = uStack_2c8;
        uVar8 = aiStack_2f0[1];
        aiStack_2f0[3] = aiStack_2f0[2];
        uVar4 = uStack_2b8;
        piVar1 = iVar5 + 0x1e2f0;
        piVar2 = auStack_2a8 + iVar5;
        iVar5 = iVar5 + 8;
        iVar6 = ((uStack_2c0 << 0x17 | uStack_2c0 >> 0x29) ^ (uStack_2c0 >> 0x12 | uStack_2c0 << 0x2e) ^
                (uStack_2c0 >> 0xe | uStack_2c0 << 0x32)) + ((uVar10 ^ uVar4) & uStack_2c0 ^ uVar4) + *piVar1 + *piVar2
                + auStack_2b0;
        uStack_2c8 = iVar6 + uStack_2d0;
        aiStack_2f0[1] =
             ((uVar8 << 0x1e | uVar8 >> 0x22) ^ (uVar8 >> 0x1c | uVar8 << 0x24) ^ (uVar8 << 0x19 | uVar8 >> 0x27)) +
             ((aiStack_2f0[3] | uVar8) & uVar9 | aiStack_2f0[3] & uVar8) + iVar6;
        auStack_2b0 = uVar4;
        uStack_2b8 = uVar10;
        aiStack_2f0[2] = uVar8;
        uStack_2d0 = uVar9;
    } while (iVar5 < 0x280);
    iVar5 = 8;
    do {
        *arg2_00 = *arg2_00 + *((aiStack_2f0 - arg1) + arg2_00);
        arg2_00 = arg2_00 + 1;
        iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    return 0;
}


/* fcn.00019b74 @ 0x19b74 */

uint fcn.00019b74(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t arg1_00;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t arg3;
    int iVar5;
    uint32_t uVar6;
    
    uVar2 = arg2;
    if (uVar2 <= *(arg1 + 4)) {
        return 0;
    }
    uVar6 = uVar2 & 0x8000001f;
    if (uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xffffffe0) + 1;
    }
    iVar4 = *(arg1 + 0x10);
    iVar5 = uVar2 + (0x40 - uVar6);
    arg3 = iVar5 << 2;
    if (iVar4 == 0) {
        arg1_00 = fcn.00019058(arg3);
    }
    else {
        uVar2 = iVar4;
        if (arg3 == 0) {
            fcn.0001913c(uVar2);
        }
        else {
            arg1_00 = fcn.00019058(arg3);
            if (arg1_00 != 0) {
                if (arg1_00 != iVar4) {
                    fcn.000111d0(arg1_00,uVar2,arg3);
                }
                fcn.0001913c(uVar2);
                goto code_r0x00019be7;
            }
        }
        arg1_00 = 0;
    }
code_r0x00019be7:
    if (arg1_00 != 0) {
        iVar1 = *(arg1 + 4);
        uVar3 = iVar1;
        *(arg1 + 0x10) = arg1_00;
        *(arg1 + 4) = iVar5;
        if (iVar1 < iVar5) {
            iVar4 = uVar3 << 2;
            do {
                uVar2 = uVar3 + 1;
                uVar3 = uVar2;
                *(iVar4 + *(arg1 + 0x10)) = 0;
                iVar4 = iVar4 + 4;
            } while (uVar2 < *(arg1 + 4));
        }
        return 0;
    }
    return 0xfffffffe;
}


/* fcn.0001dc40 @ 0x1dc40 */

int64_t fcn.0001dc40(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00019b48 @ 0x19b48 */

void fcn.00019b48(int64_t arg1)

{
    int iVar1;
    
    iVar1 = *arg1;
    if (0 < iVar1) {
        do {
            if (*(*(arg1 + 0x10) + (*arg1 + -1) * 4) != 0) break;
            *arg1 = *arg1 + -1;
        } while (0 < *arg1);
        iVar1 = *arg1;
    }
    if (iVar1 == 0) {
        *(arg1 + 8) = 0;
    }
    return;
}


/* fcn.00019228 @ 0x19228 */

ulong fcn.00019228(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    int *piVar6;
    ulong uVar7;
    int iVar8;
    int *piVar9;
    uint32_t uVar10;
    int *piVar11;
    int64_t iVar12;
    uint32_t *puVar13;
    
    if (*arg2 < *arg1) {
        piVar6 = arg2;
        piVar9 = arg1;
    }
    else {
        piVar6 = arg1;
        piVar9 = arg2;
    }
    iVar1 = *piVar9;
    uVar5 = 0;
    iVar2 = *piVar6;
    uVar10 = iVar1 + 1;
    if ((*(arg3 + 4) < uVar10) && (uVar7 = fcn.00019b74(arg3,uVar10), uVar7 != 0)) {
        return uVar7;
    }
    iVar3 = *arg3;
    iVar8 = 0;
    puVar13 = *(arg3 + 0x10);
    *arg3 = uVar10;
    piVar11 = *(arg1 + 0x10);
    piVar6 = *(arg2 + 0x10);
    if (0 < iVar2) {
        do {
            iVar4 = *piVar6;
            iVar8 = iVar8 + 1;
            piVar6 = piVar6 + 1;
            uVar5 = iVar4 + *piVar11 + uVar5;
            piVar11 = piVar11 + 1;
            *puVar13 = uVar5 & 0xfffffff;
            puVar13 = puVar13 + 1;
            uVar5 = uVar5 >> 0x1c;
        } while (iVar8 < iVar2);
    }
    if (iVar2 != iVar1) {
        for (iVar12 = iVar8; iVar12 < iVar1; iVar12 = iVar12 + 1) {
            uVar5 = uVar5 + *(*(piVar9 + 4) + iVar12 * 4);
            *puVar13 = uVar5;
            *puVar13 = *puVar13 & 0xfffffff;
            puVar13 = puVar13 + 1;
            uVar5 = uVar5 >> 0x1c;
        }
    }
    *puVar13 = uVar5;
    if (*arg3 < iVar3) {
        fcn.0001dc40(puVar13 + 1,0,iVar3 - *arg3 << 2);
    }
    fcn.00019b48(arg3);
    return 0;
}


/* fcn.00019338 @ 0x19338 */

ulong fcn.00019338(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    ulong uVar7;
    uint32_t *arg1_00;
    uint32_t uVar8;
    int *piVar9;
    int64_t iVar10;
    int *piVar11;
    uint64_t uVar12;
    
    uVar1 = *arg1;
    uVar6 = 0;
    uVar2 = *arg2;
    uVar12 = uVar2;
    if ((*(arg3 + 4) < uVar1) && (uVar7 = fcn.00019b74(arg3,uVar1), uVar7 != 0)) {
        return uVar7;
    }
    iVar3 = *arg3;
    arg1_00 = *(arg3 + 0x10);
    *arg3 = uVar1;
    piVar11 = *(arg2 + 0x10);
    piVar9 = *(arg1 + 0x10);
    uVar8 = 0;
    if (0 < uVar2) {
        do {
            iVar4 = *piVar9;
            piVar9 = piVar9 + 1;
            iVar5 = *piVar11;
            piVar11 = piVar11 + 1;
            uVar6 = (iVar4 - iVar5) - uVar6;
            *arg1_00 = uVar6 & 0xfffffff;
            arg1_00 = arg1_00 + 1;
            uVar6 = uVar6 >> 0x1f;
            uVar12 = uVar12 - 1;
            uVar8 = uVar2;
        } while (uVar12 != 0);
    }
    if (uVar8 < uVar1) {
        iVar10 = piVar9 - arg1_00;
        uVar12 = uVar1 - uVar8;
        do {
            uVar6 = *(iVar10 + arg1_00) - uVar6;
            *arg1_00 = uVar6;
            *arg1_00 = *arg1_00 & 0xfffffff;
            arg1_00 = arg1_00 + 1;
            uVar6 = uVar6 >> 0x1f;
            uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
    }
    if (*arg3 < iVar3) {
        fcn.0001dc40(arg1_00,0,iVar3 - *arg3 << 2);
    }
    fcn.00019b48(arg3);
    return 0;
}


/* fcn.0001ad40 @ 0x1ad40 */

ulong fcn.0001ad40(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int iVar4;
    ulong uVar5;
    uint32_t *puVar6;
    int iVar7;
    uint64_t uVar8;
    int iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    int iVar13;
    int iVar14;
    uint32_t uVar15;
    uint32_t *puVar16;
    uint32_t auStack_838 [512];
    
    uVar12 = 0;
    iVar13 = arg4;
    if ((iVar13 <= *(arg3 + 4)) || (uVar5 = fcn.00019b74(arg3,arg4 & 0xffffffff), uVar5 == 0)) {
        iVar9 = *arg1 + *arg2;
        if (iVar13 < *arg1 + *arg2) {
            iVar9 = iVar13;
        }
        fcn.00011250(auStack_838,0x800,0);
        if (0 < iVar9) {
            iVar13 = *arg2;
            iVar2 = *(arg1 + 0x10);
            iVar4 = *arg1;
            iVar3 = *(arg2 + 0x10);
            uVar10 = uVar12;
            uVar11 = uVar12;
            uVar8 = uVar12;
            do {
                iVar14 = uVar8;
                iVar7 = iVar14;
                if (iVar13 + -1 < iVar14) {
                    iVar7 = iVar13 + -1;
                }
                uVar15 = iVar4 - (iVar14 - iVar7);
                puVar16 = (iVar14 - iVar7) * 4 + iVar2;
                puVar6 = iVar3 + iVar7 * 4;
                if (iVar7 + 1U <= uVar15) {
                    uVar15 = iVar7 + 1U;
                }
                if (0 < uVar15) {
                    uVar8 = uVar15;
                    do {
                        uVar15 = *puVar6;
                        puVar6 = puVar6 + -1;
                        uVar1 = *puVar16;
                        puVar16 = puVar16 + 1;
                        uVar10 = uVar10 + uVar15 * uVar1;
                        uVar8 = uVar8 - 1;
                    } while (uVar8 != 0);
                }
                uVar8 = iVar14 + 1;
                uVar15 = uVar10;
                uVar10 = uVar10 >> 0x1c;
                auStack_838[uVar11] = uVar15 & 0xfffffff;
                uVar11 = uVar11 + 1;
            } while (uVar11 < iVar9);
        }
        iVar13 = *arg3;
        iVar4 = iVar9 + 1;
        puVar6 = *(arg3 + 0x10);
        *arg3 = iVar9;
        iVar9 = 0;
        if (0 < iVar4) {
            do {
                puVar16 = auStack_838 + uVar12;
                uVar12 = uVar12 + 1;
                *puVar6 = *puVar16;
                puVar6 = puVar6 + 1;
                iVar9 = iVar4;
            } while (uVar12 < iVar4);
        }
        if (iVar9 < iVar13) {
            fcn.0001dc40(puVar6,0,iVar13 - iVar9 << 2);
        }
        fcn.00019b48(arg3);
        uVar5 = 0;
    }
    return uVar5;
}


/* fcn.0001abd4 @ 0x1abd4 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

ulong fcn.0001abd4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong uVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    int iVar9;
    int iVar10;
    uint32_t uVar11;
    int *piVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint32_t *puVar17;
    int64_t var_bp_40h;
    ulong uStack_40;
    ulong uStack_38;
    int64_t iStack_30;
    int64_t var_20h;
    int64_t var_18h;
    uint32_t var_8h;
    
    iVar10 = arg4;
    if (iVar10 < 0x200) {
        piVar12 = arg2;
        if (*arg1 < *arg2) {
            piVar12 = arg1;
        }
        if (*piVar12 < 0x100) {
            uVar4 = fcn.0001ad40(arg1,arg2,arg3,arg4);
            return uVar4;
        }
    }
    uVar4 = fcn.0001aeb4(&uStack_40,arg4 & 0xffffffff);
    if (uVar4 == 0) {
        iVar1 = *arg1;
        iVar9 = 0;
        iVar7 = 0;
        uStack_40 = CONCAT44(uStack_40._4_4_,iVar10);
        if (0 < iVar1) {
            uVar16 = arg4 & 0xffffffff;
            do {
                uVar15 = 0;
                uVar14 = 0;
                uVar11 = uVar16;
                puVar8 = *(arg2 + 0x10);
                uVar5 = uVar11;
                if (*arg2 < uVar11) {
                    uVar5 = *arg2;
                }
                uVar2 = *(*(arg1 + 0x10) + iVar7 * 4);
                puVar17 = iStack_30 + iVar9 * 4;
                uVar13 = 0;
                if (0 < uVar5) {
                    uVar16 = uVar5;
                    do {
                        uVar14 = *puVar8;
                        puVar8 = puVar8 + 1;
                        uVar6 = uVar14 * uVar2 + *puVar17 + (uVar15 & 0xffffffff);
                        uVar15 = uVar6 >> 0x1c;
                        uVar14 = uVar15;
                        *puVar17 = uVar6 & 0xfffffff;
                        puVar17 = puVar17 + 1;
                        uVar16 = uVar16 - 1;
                    } while (uVar16 != 0);
                    uVar13 = uVar5;
                }
                if (uVar13 + iVar9 < iVar10) {
                    *puVar17 = uVar14;
                }
                iVar9 = iVar9 + 1;
                uVar16 = uVar11 - 1;
                iVar7 = iVar7 + 1;
            } while (iVar7 < iVar1);
        }
        fcn.00019b48(&uStack_40);
        uVar4 = *arg3;
        uVar3 = *(arg3 + 8);
        iVar7 = *(arg3 + 0x10);
        *arg3 = uStack_40;
        *(arg3 + 8) = uStack_38;
        *(arg3 + 0x10) = iStack_30;
        if (iVar7 != 0) {
            uStack_40 = uVar4;
            uStack_38 = uVar3;
            iStack_30 = iVar7;
            fcn.000194c0(&uStack_40);
        }
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.000195cc @ 0x195cc */

void fcn.000195cc(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    uint in_register_0000000c;
    uint32_t uVar4;
    
    iVar1 = *(arg2 + 8);
    iVar2 = *(CONCAT44(in_register_0000000c,arg1) + 8);
    uVar4 = *CONCAT44(in_register_0000000c,arg1) + 1 + *arg2;
    if (uVar4 < 0x200) {
        piVar3 = arg2;
        if (*CONCAT44(in_register_0000000c,arg1) < *arg2) {
            piVar3 = CONCAT44(in_register_0000000c,arg1);
        }
        if (*piVar3 < 0x101) {
            fcn.0001ad40(CONCAT44(in_register_0000000c,arg1),arg2,arg3,uVar4);
            goto code_r0x00019626;
        }
    }
    fcn.0001abd4(CONCAT44(in_register_0000000c,arg1),arg2,arg3,uVar4);
code_r0x00019626:
    uVar4 = 0;
    if (0 < *arg3) {
        uVar4 = iVar2 != iVar1;
    }
    *(arg3 + 8) = uVar4;
    return;
}


/* fcn.000196c0 @ 0x196c0 */

uint64_t fcn.000196c0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t var_20h;
    uint32_t var_bp_18h;
    uint32_t var_bp_10h;
    
    uVar5 = fcn.00019420(&var_20h);
    if (uVar5 == 0) {
        uVar4 = fcn.00019ed4(arg1,arg2,0,&var_20h);
        uVar5 = uVar4;
        if (uVar4 == 0) {
            if (var_bp_18h == *(arg2 + 8)) {
                iVar2 = *arg3;
                uVar3 = *(arg3 + 8);
                uVar5 = 0;
                iVar1 = *(arg3 + 0x10);
                *arg3 = var_20h;
                *(arg3 + 8) = _var_bp_18h;
                *(arg3 + 0x10) = _var_bp_10h;
                var_20h = iVar2;
                _var_bp_18h = uVar3;
                _var_bp_10h = iVar1;
            }
            else {
                uVar4 = fcn.00019504(arg2,&var_20h,arg3);
                uVar5 = uVar4;
            }
            if (_var_bp_10h != 0) {
                fcn.000194c0(&var_20h);
            }
        }
        else if (_var_bp_10h != 0) {
            fcn.000194c0(&var_20h);
        }
    }
    return uVar5;
}


/* fcn.00019ed4 @ 0x19ed4 */

//WARNING: Variable defined which should be unmapped: var_fh
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_31h

uint64_t fcn.00019ed4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int *piVar1;
    ulong uVar2;
    ulong uVar3;
    int iVar4;
    uint32_t uVar5;
    uint uVar6;
    int iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint32_t *arg1_00;
    uint32_t *puVar11;
    uint32_t uVar12;
    int64_t iVar13;
    int64_t iVar14;
    int iVar15;
    bool bVar16;
    int64_t var_fh;
    uint32_t var_1fh;
    int32_t var_6fh;
    int64_t iStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uint32_t uStack_c0;
    uint32_t auStack_b8 [2];
    int iStack_b0;
    int64_t iStack_a8;
    uint32_t uStack_a0;
    int64_t iStack_98;
    uint32_t auStack_90 [3];
    int64_t var_79h;
    uint32_t var_71h;
    uint32_t var_69h;
    int32_t iStack_6c;
    int32_t var_61h;
    int64_t var_59h;
    uint32_t var_51h;
    int64_t var_49h;
    int32_t var_41h;
    int64_t var_39h;
    int64_t var_31h;
    uint32_t var_21h;
    int32_t var_19h;
    int64_t var_11h;
    uint32_t var_1h;
    
    uVar10 = 0;
    if (*arg2 == 0) {
        return 0xfffffffd;
    }
    iVar13 = arg4;
    iVar4 = fcn.00019780(arg1,arg2);
    if (iVar4 == -1) {
        if (iVar13 != 0) {
            uVar5 = fcn.00019a88(arg1,iVar13);
            uVar10 = uVar5;
        }
        if (arg3 != 0) {
            fcn.00019a60(arg3);
        }
        return uVar10 & 0xffffffff;
    }
    uVar8 = fcn.0001aeb4(&var_69h + 1,*arg1 + 2);
    if (uVar8 != 0) {
        return uVar8;
    }
    stack0xffffffffffffff90 = CONCAT44(iStack_6c,*arg1 + 2);
    uVar5 = fcn.00019420(auStack_90);
    uVar8 = uVar5;
    if (uVar5 != 0) goto code_r0x0001a3fe;
    uVar5 = fcn.00019420(&var_49h + 1);
    uVar8 = uVar5;
    if (uVar5 == 0) {
        uVar5 = fcn.00019420(&iStack_d8);
        if (uVar5 == 0) {
            uVar5 = fcn.00019a88(arg1,&iStack_d8);
        }
        uVar8 = uVar5;
        if (uVar5 == 0) {
            uVar5 = fcn.00019420(auStack_b8);
            if (uVar5 == 0) {
                uVar5 = fcn.00019a88(arg2,auStack_b8);
            }
            uVar8 = uVar5;
            if (uVar5 == 0) {
                iStack_b0 = 0;
                uStack_d0 = uStack_d0 & 0xffffffff00000000;
                *0x8 = *(arg1 + 8) != *(arg2 + 8);
                iVar4 = fcn.00019dec(auStack_b8);
                if (iVar4 % 0x1c < 0x1b) {
                    uVar12 = 0x1b - iVar4 % 0x1c;
                    uStack_a0 = uVar12;
                    uVar5 = fcn.00019c64(&iStack_d8,uVar12,&iStack_d8);
                    uVar8 = uVar5;
                    if (uVar5 == 0) {
                        uVar5 = fcn.00019c64(auStack_b8,uVar12,auStack_b8);
                        uVar8 = uVar5;
                        if (uVar5 == 0) {
                            uVar10 = uStack_d0 & 0xffffffff;
                            goto code_r0x0001a067;
                        }
                    }
                }
                else {
                    uStack_a0 = 0;
code_r0x0001a067:
                    iVar15 = iStack_d8 - 1;
                    iVar4 = auStack_b8[0] - 1;
                    uVar12 = iVar15 - iVar4;
                    uVar5 = fcn.00019d5c(auStack_b8,uVar12);
                    uVar8 = uVar5;
                    if (uVar5 == 0) {
                        iStack_98 = iVar4;
                        iVar13 = iVar15;
                        while( true ) {
                            iVar7 = uVar10;
                            iVar14 = iStack_98;
                            if (iVar7 == iStack_b0) {
                                if (iVar7 == 1) {
                                    puVar11 = &iStack_d8;
                                    arg1_00 = auStack_b8;
                                }
                                else {
                                    puVar11 = auStack_b8;
                                    arg1_00 = &iStack_d8;
                                }
                                iVar7 = fcn.00019780(arg1_00,puVar11);
                                bVar16 = iVar7 == -1;
                            }
                            else {
                                bVar16 = iVar7 == 1;
                            }
                            if (bVar16) {
                                if (0 < uVar12) {
                                    fcn.00019af8(auStack_b8,uVar12);
                                    iVar14 = iStack_98;
                                }
                                iVar9 = auStack_b8[0];
                                unique0x10000769 = iVar9;
                                if (iVar9 <= iVar13) goto code_r0x0001a130;
                                goto code_r0x0001a32b;
                            }
                            piVar1 = stack0xffffffffffffffa0 + (iVar13 - iVar14) * 4;
                            *piVar1 = *piVar1 + 1;
                            uVar5 = fcn.0001956c(&iStack_d8,auStack_b8,&iStack_d8);
                            uVar8 = uVar5;
                            if (uVar5 != 0) break;
                            uVar10 = uStack_d0 & 0xffffffff;
                        }
                    }
                }
code_r0x0001a3c0:
                if (iStack_a8 != 0) {
                    fcn.000194c0(auStack_b8);
                }
            }
            if (iStack_c8 != 0) {
                fcn.000194c0(&iStack_d8);
            }
        }
        if (stack0xffffffffffffffc0 != NULL) {
            fcn.000194c0(&var_49h + 1);
        }
    }
    if (stack0xffffffffffffff80 != NULL) {
        fcn.000194c0(auStack_90);
    }
code_r0x0001a3fe:
    if (stack0xffffffffffffffa0 != 0) {
        fcn.000194c0(&var_69h + 1);
    }
    return uVar8;
code_r0x0001a130:
    if (iVar15 <= iStack_d8) {
        uVar5 = *(iStack_a8 + iVar14 * 4);
        if (*(iStack_c8 + iVar13 * 4) == uVar5) {
            puVar11 = stack0xffffffffffffffa0 + -4 + (iVar13 - iVar14) * 4;
            *puVar11 = 0xfffffff;
        }
        else {
            uVar10 = (*(iStack_c8 + -4 + iVar13 * 4) | *(iStack_c8 + iVar13 * 4) << 0x1c) / uVar5;
            if (0xfffffff < uVar10) {
                uVar10 = 0xfffffff;
            }
            puVar11 = stack0xffffffffffffffa0 + -4 + (iVar13 - iVar14) * 4;
            *puVar11 = uVar10 & 0xfffffff;
        }
        uStack_c0 = auStack_b8[0] - 2;
        *puVar11 = *puVar11 + 1 & 0xfffffff;
        do {
            *puVar11 = *puVar11 - 1 & 0xfffffff;
            uVar5 = uStack_c0;
            fcn.00019a60(auStack_90);
            if (uVar5 < 0) {
                uVar6 = 0;
            }
            else {
                uVar6 = *(iStack_a8 + -4 + iVar14 * 4);
            }
            auStack_90[0] = 2;
            *stack0xffffffffffffff80 = uVar6;
            stack0xffffffffffffff80[1] = *(iStack_a8 + iVar14 * 4);
            uVar5 = fcn.0001bc24(auStack_90,*puVar11,auStack_90);
            uVar8 = uVar5;
            if (uVar5 != 0) goto code_r0x0001a3c0;
            if (iVar15 + -2 < 0) {
                uVar6 = 0;
            }
            else {
                uVar6 = *(iStack_c8 + -8 + iVar13 * 4);
            }
            *stack0xffffffffffffffc0 = uVar6;
            if (iVar15 + -1 < 0) {
                uVar6 = 0;
            }
            else {
                uVar6 = *(iStack_c8 + -4 + iVar13 * 4);
            }
            stack0xffffffffffffffc0[1] = uVar6;
            var_49h._1_4_ = 3;
            stack0xffffffffffffffc0[2] = *(iStack_c8 + iVar13 * 4);
            iVar7 = fcn.00019780(auStack_90,&var_49h + 1);
            iVar14 = iStack_98;
        } while (iVar7 == 1);
        uVar5 = fcn.0001bc24(auStack_b8,*puVar11,auStack_90);
        uVar8 = uVar5;
        if (uVar5 != 0) goto code_r0x0001a3c0;
        uStack_c0 = (iVar15 - iVar4) - 1;
        uVar5 = fcn.00019d5c(auStack_90,uStack_c0);
        uVar8 = uVar5;
        if (uVar5 != 0) goto code_r0x0001a3c0;
        uVar5 = fcn.0001956c(&iStack_d8,auStack_90,&iStack_d8);
        uVar8 = uVar5;
        if (uVar5 != 0) goto code_r0x0001a3c0;
        if (uStack_d0 == 1) {
            uVar5 = fcn.00019a88(auStack_b8,auStack_90);
            uVar8 = uVar5;
            if (uVar5 != 0) goto code_r0x0001a3c0;
            uVar5 = fcn.00019d5c(auStack_90,uStack_c0);
            uVar8 = uVar5;
            if (uVar5 != 0) goto code_r0x0001a3c0;
            uVar5 = fcn.00019504(&iStack_d8,auStack_90,&iStack_d8);
            uVar8 = uVar5;
            if (uVar5 != 0) goto code_r0x0001a3c0;
            *puVar11 = *puVar11 - 1 & 0xfffffff;
        }
        iVar9 = stack0xffffffffffffffa8;
    }
    iVar15 = iVar15 + -1;
    iVar13 = iVar13 + -1;
    if (iVar13 < iVar9) goto code_r0x0001a32b;
    iVar14 = iStack_98;
    goto code_r0x0001a130;
code_r0x0001a32b:
    if (iStack_d8 == 0) {
        uStack_d0 = uStack_d0._4_4_ << 0x20;
    }
    else {
        uStack_d0 = CONCAT44(uStack_d0._4_4_,*(arg1 + 8));
    }
    if (arg3 != 0) {
        fcn.00019b48(&var_69h + 1);
        uVar2 = *arg3;
        uVar3 = *(arg3 + 8);
        iVar13 = *(arg3 + 0x10);
        *arg3 = stack0xffffffffffffff90;
        *(arg3 + 8) = stack0xffffffffffffff98;
        *(arg3 + 0x10) = stack0xffffffffffffffa0;
        *(arg3 + 8) = stack0xffffffffffffff88;
        unique0x10000741 = uVar2;
        unique0x10000751 = uVar3;
        unique0x10000761 = iVar13;
    }
    if (arg4 != 0) {
        fcn.000198bc(&iStack_d8,uStack_a0,&iStack_d8,0);
        iVar14 = *arg4;
        uVar10 = *(arg4 + 8);
        iVar13 = *(arg4 + 0x10);
        *arg4 = iStack_d8;
        *(arg4 + 8) = uStack_d0;
        *(arg4 + 0x10) = iStack_c8;
        iStack_d8 = iVar14;
        uStack_d0 = uVar10;
        iStack_c8 = iVar13;
    }
    uVar8 = 0;
    goto code_r0x0001a3c0;
}


/* fcn.00019504 @ 0x19504 */

void fcn.00019504(int64_t *arg1,int64_t arg2,int64_t *arg3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int64_t *arg1_00;
    
    iVar1 = arg1[1];
    iVar2 = *(arg2 + 8);
    if (iVar1 == iVar2) {
        *(arg3 + 1) = iVar1;
        fcn.00019228(arg1,arg2,arg3);
    }
    else {
        iVar3 = fcn.00019780(arg1,arg2);
        if (iVar3 == -1) {
            *(arg3 + 1) = iVar2;
            arg1_00 = arg2;
            arg2 = arg1;
        }
        else {
            *(arg3 + 1) = iVar1;
            arg1_00 = arg1;
        }
        fcn.00019338(arg1_00,arg2,arg3);
    }
    return;
}


/* fcn.00019a88 @ 0x19a88 */

ulong fcn.00019a88(uint32_t arg1,int64_t arg2)

{
    ulong uVar1;
    int iVar2;
    uint in_register_0000000c;
    uint32_t *puVar3;
    uint *puVar4;
    uint *puVar5;
    
    puVar3 = CONCAT44(in_register_0000000c,arg1);
    if (puVar3 != arg2) {
        if ((*(arg2 + 4) < *puVar3) && (uVar1 = fcn.00019b74(arg2,*puVar3), uVar1 != 0)) {
            return uVar1;
        }
        puVar5 = *(puVar3 + 4);
        iVar2 = 0;
        puVar4 = *(arg2 + 0x10);
        if (0 < *puVar3) {
            do {
                iVar2 = iVar2 + 1;
                *puVar4 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar4 = puVar4 + 1;
            } while (iVar2 < *puVar3);
        }
        for (; iVar2 < *arg2; iVar2 = iVar2 + 1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
        }
        *arg2 = *puVar3;
        *(arg2 + 8) = puVar3[2];
    }
    return 0;
}


/* fcn.000198bc @ 0x198bc */

//WARNING: Variable defined which should be unmapped: var_bp_10h

uint64_t fcn.000198bc(uint32_t *arg1,int64_t arg2,uint32_t *arg3,int64_t arg4)

{
    uint32_t *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    ulong uVar4;
    ulong uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint8_t uVar8;
    int iVar9;
    ulong uStack_38;
    ulong uStack_30;
    int64_t var_20h;
    uint32_t var_bp_10h;
    
    iVar9 = arg2;
    if (iVar9 < 1) {
        uVar6 = fcn.00019a88(arg1,arg3);
        uVar7 = uVar6;
        if (arg4 != 0) {
            fcn.00019a60(arg4);
        }
        uVar7 = uVar7 & 0xffffffff;
    }
    else {
        uVar7 = fcn.00019420(&uStack_38);
        if (uVar7 == 0) {
            if (arg4 != 0) {
                uVar6 = fcn.00019e18(arg1,arg2 & 0xffffffff,&uStack_38);
                if (uVar6 != 0) {
                    if (var_20h != 0) {
                        fcn.000194c0(&uStack_38);
                    }
                    return uVar6;
                }
            }
            uVar6 = fcn.00019a88(arg1,arg3);
            uVar7 = uVar6;
            if (uVar6 == 0) {
                if ((0x1b < iVar9) && (0 < iVar9 / 0x1c)) {
                    fcn.00019af8(arg3,iVar9 / 0x1c);
                }
                if (iVar9 % 0x1c != 0) {
                    uVar8 = iVar9 % 0x1c;
                    iVar9 = *arg3 - 1;
                    puVar1 = *(arg3 + 4) + iVar9 * 4;
                    uVar6 = 0;
                    for (; -1 < iVar9; iVar9 = iVar9 + -1) {
                        uVar3 = *puVar1;
                        *puVar1 = uVar3 >> (uVar8 & 0x1f) | uVar6 << (0x1c - uVar8 & 0x1f);
                        puVar1 = puVar1 + -1;
                        uVar6 = uVar3 & (1 << (uVar8 & 0x1f)) - 1U;
                    }
                }
                fcn.00019b48(arg3);
                if (arg4 != 0) {
                    uVar4 = *arg4;
                    uVar5 = *(arg4 + 8);
                    iVar2 = *(arg4 + 0x10);
                    *arg4 = uStack_38;
                    *(arg4 + 8) = uStack_30;
                    *(arg4 + 0x10) = var_20h;
                    uStack_38 = uVar4;
                    uStack_30 = uVar5;
                    var_20h = iVar2;
                }
                if (var_20h != 0) {
                    fcn.000194c0(&uStack_38);
                }
                uVar7 = 0;
            }
            else if (var_20h != 0) {
                fcn.000194c0(&uStack_38);
            }
        }
    }
    return uVar7;
}


/* fcn.00019a60 @ 0x19a60 */

void fcn.00019a60(int64_t arg1)

{
    uint *puVar1;
    int iVar2;
    
    puVar1 = *(arg1 + 0x10);
    iVar2 = 0;
    *(arg1 + 8) = 0;
    *arg1 = 0;
    if (0 < *(arg1 + 4)) {
        do {
            *puVar1 = 0;
            iVar2 = iVar2 + 1;
            puVar1 = puVar1 + 1;
        } while (iVar2 < *(arg1 + 4));
    }
    return;
}


/* fcn.00019e18 @ 0x19e18 */

ulong fcn.00019e18(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    int iVar2;
    ulong uVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    
    iVar5 = arg2;
    if (iVar5 < 1) {
        fcn.00019a60(arg3);
    }
    else {
        if (*arg1 * 0x1c <= iVar5) {
            uVar3 = fcn.00019a88(arg1,arg3);
            return uVar3;
        }
        uVar3 = fcn.00019a88(arg1,arg3);
        if (uVar3 != 0) {
            return uVar3;
        }
        iVar2 = iVar5 / 0x1c;
        iVar4 = (iVar5 != iVar2 * 0x1c) + iVar2;
        if (iVar4 < *arg3) {
            iVar6 = iVar4 << 2;
            do {
                iVar4 = iVar4 + 1;
                *(iVar6 + *(arg3 + 0x10)) = 0;
                iVar6 = iVar6 + 4;
            } while (iVar4 < *arg3);
        }
        iVar4 = (arg2 & 0xffffffffU) * 0x24924925 >> 0x20;
        puVar1 = *(arg3 + 0x10) + iVar2 * 4;
        *puVar1 = *puVar1 & (1 << (arg2 + ((iVar5 - iVar4 >> 1) + iVar4 >> 4) * -0x1c & 0x1fU)) - 1U;
        fcn.00019b48(arg3);
    }
    return 0;
}


/* fcn.00019af8 @ 0x19af8 */

void fcn.00019af8(int64_t arg1,int64_t arg2)

{
    uint *puVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    
    iVar2 = arg2;
    if (*arg1 <= iVar2) {
        puVar1 = *(arg1 + 0x10);
        iVar2 = 0;
        *(arg1 + 8) = 0;
        *arg1 = 0;
        if (0 < *(arg1 + 4)) {
            do {
                *puVar1 = 0;
                iVar2 = iVar2 + 1;
                puVar1 = puVar1 + 1;
            } while (iVar2 < *(arg1 + 4));
        }
        return;
    }
    puVar4 = *(arg1 + 0x10);
    iVar3 = 0;
    puVar1 = puVar4 + iVar2;
    if (0 < *arg1 - iVar2) {
        do {
            iVar3 = iVar3 + 1;
            *puVar4 = *puVar1;
            puVar1 = puVar1 + 1;
            puVar4 = puVar4 + 1;
        } while (iVar3 < *arg1 - iVar2);
    }
    for (; iVar3 < *arg1; iVar3 = iVar3 + 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
    }
    *arg1 = *arg1 - iVar2;
    return;
}


/* fcn.00019d5c @ 0x19d5c */

ulong fcn.00019d5c(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint uVar2;
    ulong uVar3;
    uint64_t uVar4;
    int iVar5;
    uint *puVar6;
    uint *puVar7;
    
    iVar5 = arg2;
    if (0 < iVar5) {
        if ((*(arg1 + 4) < *arg1 + iVar5) && (uVar3 = fcn.00019b74(arg1,*arg1 + iVar5), uVar3 != 0)) {
            return uVar3;
        }
        *arg1 = *arg1 + iVar5;
        iVar1 = *arg1;
        puVar6 = *(arg1 + 0x10) + -4 + iVar1 * 4;
        puVar7 = *(arg1 + 0x10) + -4 + (iVar1 - iVar5) * 4;
        if (iVar5 <= iVar1 + -1) {
            uVar4 = ((iVar1 + -1) - iVar5) + 1;
            do {
                uVar2 = *puVar7;
                puVar7 = puVar7 + -1;
                *puVar6 = uVar2;
                puVar6 = puVar6 + -1;
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
        }
        if (0 < iVar5) {
            fcn.0001dc40(*(arg1 + 0x10),0,(arg2 & 0xffffffffU) << 2);
        }
    }
    return 0;
}


/* fcn.0001aeb4 @ 0x1aeb4 */

ulong fcn.0001aeb4(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    ulong uVar1;
    int iVar2;
    uint32_t uVar3;
    
    uVar3 = arg2 & 0x8000001f;
    if (uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
    }
    iVar2 = arg2 + (0x40 - uVar3);
    arg1_00 = fcn.00019058(iVar2 << 2);
    *(arg1 + 0x10) = arg1_00;
    if (arg1_00 == 0) {
        uVar1 = 0xfffffffe;
    }
    else {
        *arg1 = 0;
        *(arg1 + 8) = 0;
        *(arg1 + 4) = iVar2;
        if (0 < iVar2) {
            fcn.0001dc40(arg1_00,0,iVar2 << 2);
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00019c64 @ 0x19c64 */

ulong fcn.00019c64(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    uint8_t uVar2;
    uint in_register_0000000c;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t *puVar5;
    int iVar6;
    
    if ((CONCAT44(in_register_0000000c,arg1) != arg3) && (uVar1 = fcn.00019a88(arg1,arg3), uVar1 != 0)) {
        return uVar1;
    }
    iVar6 = arg2;
    uVar3 = *arg3 + 1 + iVar6 / 0x1c;
    if ((*(arg3 + 4) < uVar3) && (uVar1 = fcn.00019b74(arg3,uVar3), uVar1 != 0)) {
        return uVar1;
    }
    if ((0x1b < iVar6) && (uVar1 = fcn.00019d5c(arg3,iVar6 / 0x1c), uVar1 != 0)) {
        return uVar1;
    }
    if (iVar6 % 0x1c != 0) {
        puVar5 = *(arg3 + 0x10);
        uVar2 = iVar6 % 0x1c;
        iVar6 = 0;
        uVar3 = 0;
        if (0 < *arg3) {
            do {
                iVar6 = iVar6 + 1;
                uVar4 = *puVar5 >> (0x1c - uVar2 & 0x1f) & (1 << (uVar2 & 0x1f)) - 1U;
                *puVar5 = (*puVar5 << (uVar2 & 0x1f) | uVar3) & 0xfffffff;
                puVar5 = puVar5 + 1;
                uVar3 = uVar4;
            } while (iVar6 < *arg3);
            if (uVar4 != 0) {
                *(*(arg3 + 0x10) + *arg3 * 4) = uVar4;
                *arg3 = *arg3 + 1;
            }
        }
    }
    fcn.00019b48(arg3);
    return 0;
}


/* fcn.0001956c @ 0x1956c */

void fcn.0001956c(int64_t *arg1,uint32_t arg2,int64_t *arg3)

{
    int iVar1;
    int iVar2;
    int64_t *arg1_00;
    uint in_register_00000014;
    int64_t *arg2_00;
    
    arg2_00 = CONCAT44(in_register_00000014,arg2);
    iVar1 = arg1[1];
    if (iVar1 == arg2_00[1]) {
        iVar2 = fcn.00019780(arg1,arg2_00);
        if (iVar2 == -1) {
            *(arg3 + 1) = iVar1 == 0;
            arg1_00 = arg2_00;
        }
        else {
            *(arg3 + 1) = iVar1;
            arg1_00 = arg1;
            arg1 = arg2_00;
        }
        fcn.00019338(arg1_00,arg1,arg3);
    }
    else {
        *(arg3 + 1) = iVar1;
        fcn.00019228(arg1,arg2_00,arg3);
    }
    return;
}


/* fcn.0001bc24 @ 0x1bc24 */

ulong fcn.0001bc24(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong uVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    
    uVar5 = 0;
    uVar4 = 0;
    if ((*arg1 + 1U <= *(arg3 + 4)) || (uVar2 = fcn.00019b74(arg3,*arg1 + 1U), uVar2 == 0)) {
        iVar1 = *arg3;
        puVar8 = *(arg3 + 0x10);
        *(arg3 + 8) = *(arg1 + 8);
        puVar9 = *(arg1 + 0x10);
        uVar7 = uVar5;
        uVar6 = uVar4;
        if (0 < *arg1) {
            do {
                uVar6 = *puVar9;
                uVar4 = uVar5 + 1;
                uVar5 = uVar4;
                puVar9 = puVar9 + 1;
                uVar3 = uVar6 * (arg2 & 0xffffffffU) + (uVar7 & 0xffffffff);
                uVar7 = uVar3 >> 0x1c;
                uVar6 = uVar7;
                *puVar8 = uVar3 & 0xfffffff;
                puVar8 = puVar8 + 1;
            } while (uVar4 < *arg1);
        }
        *puVar8 = uVar6;
        if (uVar4 + 1 < iVar1) {
            fcn.0001dc40(puVar8 + 1,0,iVar1 - (uVar4 + 1) << 2);
        }
        *arg3 = *arg1 + 1;
        fcn.00019b48(arg3);
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001a9d0 @ 0x1a9d0 */

ulong fcn.0001a9d0(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    int64_t arg1_00;
    
    arg1_00 = arg1;
    fcn.00019a60(arg1);
    iVar1 = arg2 / 0x1c;
    uVar2 = fcn.00019b74(arg1_00,iVar1 + 1U);
    if (uVar2 == 0) {
        *arg1 = iVar1 + 1U;
        *(*(arg1 + 0x10) + iVar1 * 4) = 1 << (arg2 + iVar1 * -0x1c & 0x1fU);
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001a994 @ 0x1a994 */

void fcn.0001a994(int64_t arg1,int64_t arg2)

{
    if ((*arg1 * 2 < 0x1ff) && (*arg1 < 0x80)) {
        fcn.0001baa4(arg1,arg2);
    }
    else {
        fcn.0001af38(arg1,arg2);
    }
    *(arg2 + 8) = 0;
    return;
}


/* fcn.0001aa44 @ 0x1aa44 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

uint64_t fcn.0001aa44(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t arg1_00;
    int64_t arg2_00;
    bool bVar5;
    uint32_t auStack_38 [4];
    int64_t var_20h;
    uint32_t var_bp_10h;
    
    uVar2 = *arg2;
    uVar4 = fcn.00019420(auStack_38);
    if ((uVar4 == 0) && (uVar4 = fcn.00019a88(arg1,auStack_38), uVar4 == 0)) {
        if (0 < uVar2 - 1) {
            fcn.00019af8(auStack_38,uVar2 - 1);
        }
        if (uVar2 < 0x8000001) {
            uVar1 = fcn.0001b0b0(auStack_38,arg3,auStack_38,uVar2);
        }
        else {
            uVar1 = fcn.000195cc(auStack_38,arg3,auStack_38);
        }
        uVar4 = uVar1;
        if (uVar1 == 0) {
            uVar1 = uVar2 + 1;
            if (0 < uVar1) {
                fcn.00019af8(auStack_38,uVar1);
            }
            uVar2 = fcn.00019e18(arg1,(uVar2 + 1) * 0x1c,arg1);
            uVar4 = uVar2;
            if (uVar2 == 0) {
                uVar2 = fcn.0001abd4(auStack_38,arg2,auStack_38,uVar1);
                uVar4 = uVar2;
                if (uVar2 == 0) {
                    uVar2 = fcn.0001956c(arg1,auStack_38,arg1);
                    uVar4 = uVar2;
                    if (uVar2 == 0) {
                        if (*(arg1 + 8) != 1) goto code_r0x0001ab6a;
                        fcn.00019a60(auStack_38);
                        *var_20h = 1;
                        auStack_38[0] = 1;
                        uVar2 = fcn.00019d5c(auStack_38,uVar1);
                        uVar4 = uVar2;
                        if (uVar2 == 0) {
                            uVar2 = fcn.00019504(arg1,auStack_38,arg1);
                            while (uVar4 = uVar2, uVar2 == 0) {
code_r0x0001ab6a:
                                iVar3 = *(arg1 + 8);
                                if (iVar3 == *(arg2 + 8)) {
                                    if (iVar3 == 1) {
                                        arg1_00 = arg2;
                                        arg2_00 = arg1;
                                    }
                                    else {
                                        arg1_00 = arg1;
                                        arg2_00 = arg2;
                                    }
                                    iVar3 = fcn.00019780(arg1_00,arg2_00);
                                    bVar5 = iVar3 == -1;
                                }
                                else {
                                    bVar5 = iVar3 == 1;
                                }
                                if (bVar5) break;
                                uVar2 = fcn.00019338(arg1,arg2,arg1);
                            }
                        }
                    }
                }
            }
        }
        if (var_20h != 0) {
            fcn.000194c0(auStack_38);
        }
    }
    return uVar4;
}


/* fcn.0001baa4 @ 0x1baa4 */

ulong fcn.0001baa4(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    ulong uVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int iVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    int iVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint32_t *puVar18;
    uint32_t *puVar19;
    uint32_t auStack_838 [512];
    
    uVar13 = 0;
    uVar4 = *arg1 * 2;
    if ((uVar4 <= *(arg2 + 4)) || (uVar5 = fcn.00019b74(arg2,uVar4), uVar5 == 0)) {
        iVar14 = uVar4;
        if (0 < uVar4) {
            iVar1 = *arg1;
            iVar3 = *(arg1 + 0x10);
            iVar2 = iVar1 + -1;
            uVar12 = uVar13;
            uVar16 = uVar13;
            uVar17 = uVar13;
            do {
                iVar15 = uVar16;
                iVar10 = iVar15;
                if (iVar2 < iVar15) {
                    iVar10 = iVar2;
                }
                iVar6 = iVar15 - iVar10;
                uVar7 = iVar1 - iVar6;
                puVar19 = iVar6 * 4 + iVar3;
                puVar18 = iVar10 * 4 + iVar3;
                if (iVar10 + 1U <= uVar7) {
                    uVar7 = iVar10 + 1U;
                }
                uVar11 = (iVar10 - iVar6) + 1 >> 1;
                if (uVar7 < uVar11) {
                    uVar11 = uVar7;
                }
                uVar9 = uVar13;
                if (0 < uVar11) {
                    uVar8 = uVar11;
                    do {
                        uVar7 = *puVar18;
                        puVar18 = puVar18 + -1;
                        uVar11 = *puVar19;
                        puVar19 = puVar19 + 1;
                        uVar9 = uVar9 + uVar7 * uVar11;
                        uVar8 = uVar8 - 1;
                    } while (uVar8 != 0);
                }
                uVar9 = uVar12 + uVar9 * 2;
                if ((uVar16 & 1) == 0) {
                    uVar12 = *(iVar3 + (iVar15 >> 1) * 4);
                    uVar9 = uVar9 + uVar12 * uVar12;
                }
                uVar16 = iVar15 + 1;
                uVar12 = uVar9 >> 0x1c;
                auStack_838[uVar17] = uVar9 & 0xfffffff;
                uVar17 = uVar17 + 1;
            } while (uVar17 < iVar14);
        }
        iVar2 = *arg2;
        puVar19 = *(arg2 + 0x10);
        *arg2 = *arg1 * 2;
        uVar7 = 0;
        if (0 < iVar14) {
            do {
                puVar18 = auStack_838 + uVar13;
                uVar13 = uVar13 + 1;
                *puVar19 = *puVar18 & 0xfffffff;
                puVar19 = puVar19 + 1;
                uVar7 = uVar4;
            } while (uVar13 < iVar14);
        }
        if (uVar7 < iVar2) {
            fcn.0001dc40(puVar19,0,iVar2 - uVar7 << 2);
        }
        fcn.00019b48(arg2);
        uVar5 = 0;
    }
    return uVar5;
}


/* fcn.0001af38 @ 0x1af38 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_20h

ulong fcn.0001af38(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t *puVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint32_t *puVar11;
    int iVar12;
    int64_t iVar13;
    int64_t iVar14;
    int64_t iVar15;
    int64_t var_38h;
    ulong uStack_48;
    ulong uStack_40;
    uint32_t *puStack_38;
    int64_t var_20h;
    uint32_t var_10h;
    
    iVar12 = *arg1;
    iVar7 = iVar12;
    uVar5 = iVar12 * 2 + 1;
    uVar3 = fcn.0001aeb4(&uStack_48,uVar5);
    if (uVar3 == 0) {
        uStack_48 = CONCAT44(uStack_48._4_4_,uVar5);
        if (0 < iVar12) {
            iVar12 = 1;
            iVar13 = 1;
            iVar8 = 0;
            puVar6 = puStack_38;
            iVar14 = iVar7;
            do {
                uVar10 = *(*(arg1 + 0x10) + iVar8);
                uVar9 = uVar10 * uVar10 + *puVar6;
                uVar10 = uVar9 >> 0x1c;
                *puVar6 = uVar9 & 0xfffffff;
                uVar5 = *(iVar8 + *(arg1 + 0x10));
                puVar11 = puStack_38 + iVar12;
                if (iVar13 < iVar7) {
                    iVar15 = iVar13;
                    do {
                        iVar1 = iVar15 * 4;
                        iVar15 = iVar15 + 1;
                        uVar9 = *puVar11 + *(*(arg1 + 0x10) + iVar1) * uVar5 * 2 + (uVar10 & 0xffffffff);
                        uVar10 = uVar9 >> 0x1c & 0xffffffff;
                        *puVar11 = uVar9 & 0xfffffff;
                        puVar11 = puVar11 + 1;
                    } while (iVar15 < iVar7);
                }
                iVar4 = uVar10;
                while (iVar4 != 0) {
                    uVar9 = *puVar11 + (uVar10 & 0xffffffff);
                    uVar10 = uVar9 >> 0x1c;
                    *puVar11 = uVar9 & 0xfffffff;
                    puVar11 = puVar11 + 1;
                    iVar4 = uVar10;
                }
                iVar12 = iVar12 + 2;
                puVar6 = puVar6 + 2;
                iVar8 = iVar8 + 4;
                iVar13 = iVar13 + 1;
                iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
        }
        fcn.00019b48(&uStack_48);
        uVar3 = *arg2;
        uVar2 = *(arg2 + 8);
        iVar7 = *(arg2 + 0x10);
        *arg2 = uStack_48;
        *(arg2 + 8) = uStack_40;
        *(arg2 + 0x10) = puStack_38;
        if (iVar7 != 0) {
            uStack_48 = uVar3;
            uStack_40 = uVar2;
            puStack_38 = iVar7;
            fcn.000194c0(&uStack_48);
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.0001b0b0 @ 0x1b0b0 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_20h

ulong fcn.0001b0b0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    ulong uVar5;
    ulong uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int iVar9;
    uint64_t uVar10;
    uint32_t *puVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    uint32_t *puVar14;
    int64_t var_bp_40h;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    int64_t var_20h;
    uint32_t var_10h;
    
    uVar10 = arg4;
    uVar6 = fcn.0001aeb4(&uStack_48,*arg2 + *arg1 + 1);
    if (uVar6 == 0) {
        iVar2 = *arg1;
        iVar8 = 0;
        iVar3 = *arg2;
        uStack_48 = CONCAT44(uStack_48._4_4_,iVar2 + 1 + iVar3);
        if (0 < iVar2) {
            puVar1 = iStack_38 + uVar10 * 4;
            do {
                uVar13 = 0;
                uVar12 = 0;
                iVar9 = uVar10;
                uVar4 = *(*(arg1 + 0x10) + iVar8 * 4);
                puVar14 = *(arg2 + 0x10) + iVar9 * 4;
                puVar11 = puVar1;
                if (iVar9 < iVar3) {
                    uVar10 = iVar3 - iVar9;
                    do {
                        uVar12 = *puVar14;
                        puVar14 = puVar14 + 1;
                        uVar7 = uVar12 * uVar4 + *puVar11 + (uVar13 & 0xffffffff);
                        uVar13 = uVar7 >> 0x1c;
                        uVar12 = uVar13;
                        *puVar11 = uVar7 & 0xfffffff;
                        puVar11 = puVar11 + 1;
                        uVar10 = uVar10 - 1;
                    } while (uVar10 != 0);
                }
                uVar10 = iVar9 - 1;
                *puVar11 = uVar12;
                iVar8 = iVar8 + 1;
            } while (iVar8 < iVar2);
        }
        fcn.00019b48(&uStack_48);
        uVar6 = *arg3;
        uVar5 = *(arg3 + 8);
        iVar8 = *(arg3 + 0x10);
        *arg3 = uStack_48;
        *(arg3 + 8) = uStack_40;
        *(arg3 + 0x10) = iStack_38;
        if (iVar8 != 0) {
            uStack_48 = uVar6;
            uStack_40 = uVar5;
            iStack_38 = iVar8;
            fcn.000194c0(&uStack_48);
        }
        uVar6 = 0;
    }
    return uVar6;
}


/* fcn.0001b3c4 @ 0x1b3c4 */

ulong fcn.0001b3c4(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    ulong uVar4;
    uint32_t *puVar5;
    uint32_t *puVar6;
    int iVar7;
    uint32_t uVar8;
    
    iVar2 = fcn.00019dec(arg2);
    iVar2 = iVar2 % 0x1c;
    if (*arg2 < 2) {
        fcn.00019a60(arg1);
        iVar2 = 1;
        **(arg1 + 0x10) = 1;
        *arg1 = **(arg1 + 0x10) != 0;
    }
    else {
        uVar4 = fcn.0001a9d0(arg1,*arg2 * 0x1c + -0x1d + iVar2);
        if (uVar4 != 0) {
            return uVar4;
        }
    }
    iVar2 = iVar2 + -1;
    while( true ) {
        if (0x1b < iVar2) {
            return 0;
        }
        if ((*(arg1 + 4) < *arg1 + 1U) && (uVar4 = fcn.00019b74(arg1,*arg1 + 1U), uVar4 != 0)) break;
        iVar3 = *arg1;
        puVar5 = *(arg1 + 0x10);
        iVar7 = 0;
        puVar6 = puVar5;
        uVar8 = 0;
        if (0 < iVar3) {
            do {
                uVar1 = *puVar6;
                iVar7 = iVar7 + 1;
                puVar6 = puVar6 + 1;
                *puVar5 = uVar1 * 2 & 0xfffffff | uVar8;
                puVar5 = puVar5 + 1;
                uVar8 = uVar1 >> 0x1b;
            } while (iVar7 < *arg1);
            if (uVar1 >> 0x1b != 0) {
                *puVar5 = 1;
                *arg1 = *arg1 + 1;
            }
        }
        if (*arg1 < iVar3) {
            fcn.0001dc40(*(arg1 + 0x10) + *arg1 * 4,0,iVar3 - *arg1 << 2);
        }
        iVar3 = fcn.00019780(arg1,arg2);
        if ((iVar3 != -1) && (uVar4 = fcn.00019338(arg1,arg2,arg1), uVar4 != 0)) {
            return uVar4;
        }
        iVar2 = iVar2 + 1;
    }
    return uVar4;
}


/* fcn.00019640 @ 0x19640 */

uint64_t fcn.00019640(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint32_t auStack_28 [4];
    int64_t iStack_18;
    
    uVar2 = fcn.00019420(auStack_28);
    if (uVar2 == 0) {
        uVar1 = fcn.000195cc(arg1,arg2,auStack_28);
        if (uVar1 == 0) {
            uVar1 = fcn.000196c0(auStack_28,arg3,arg4);
        }
        uVar2 = uVar1;
        if (iStack_18 != 0) {
            fcn.000194c0(auStack_28);
        }
    }
    return uVar2;
}


/* fcn.0001b1e4 @ 0x1b1e4 */

ulong fcn.0001b1e4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int iVar3;
    ulong uVar4;
    uint64_t *puVar5;
    uint64_t *puVar6;
    int64_t iVar7;
    uint32_t uVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    uint32_t *puVar12;
    uint64_t uVar13;
    uint64_t *puVar14;
    uint64_t uVar15;
    uint32_t *arg1_00;
    uint64_t auStack_1038 [512];
    
    iVar3 = *arg1;
    iVar9 = 0;
    if ((*arg2 + 1U <= *(arg1 + 4)) || (uVar4 = fcn.00019b74(arg1,*arg2 + 1U), uVar4 == 0)) {
        puVar6 = auStack_1038;
        arg1_00 = *(arg1 + 0x10);
        uVar8 = 0;
        if (0 < *arg1) {
            uVar8 = *arg1;
            uVar13 = uVar8;
            puVar12 = arg1_00;
            do {
                uVar1 = *puVar12;
                puVar12 = puVar12 + 1;
                *puVar6 = uVar1;
                puVar6 = puVar6 + 1;
                uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
        }
        uVar1 = *arg2;
        iVar10 = uVar1 * 2 + 1;
        if (uVar8 < iVar10) {
            fcn.0001dc40(puVar6,0,iVar10 - uVar8 << 3);
        }
        uVar8 = 0;
        if (0 < uVar1) {
            uVar13 = uVar1;
            puVar6 = auStack_1038;
            puVar14 = auStack_1038;
            do {
                uVar2 = *puVar6;
                puVar12 = *(arg2 + 0x10);
                if (0 < uVar1) {
                    uVar15 = uVar1;
                    puVar5 = puVar14;
                    do {
                        uVar8 = *puVar12;
                        puVar12 = puVar12 + 1;
                        *puVar5 = *puVar5 + uVar8 * (uVar2 * arg3 & 0xfffffff);
                        puVar5 = puVar5 + 1;
                        uVar15 = uVar15 - 1;
                    } while (uVar15 != 0);
                }
                puVar14 = puVar14 + 1;
                puVar6[1] = puVar6[1] + (*puVar6 >> 0x1c);
                puVar6 = puVar6 + 1;
                uVar13 = uVar13 - 1;
                uVar8 = uVar1;
            } while (uVar13 != 0);
        }
        iVar11 = uVar8 + 1;
        puVar6 = auStack_1038 + iVar11;
        if (iVar11 <= iVar10) {
            iVar7 = uVar8 * 8 - puVar6;
            uVar13 = (iVar10 - iVar11) + 1;
            do {
                *puVar6 = *puVar6 + (*(auStack_1038 + iVar7 + puVar6) >> 0x1c);
                puVar6 = puVar6 + 1;
                uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
        }
        puVar6 = auStack_1038 + uVar1;
        if (0 < uVar1 + 1) {
            do {
                uVar13 = *puVar6;
                iVar9 = iVar9 + 1;
                puVar6 = puVar6 + 1;
                *arg1_00 = uVar13 & 0xfffffff;
                arg1_00 = arg1_00 + 1;
            } while (iVar9 < *arg2 + 1);
        }
        if (iVar9 < iVar3) {
            fcn.0001dc40(arg1_00,0,iVar3 - iVar9 << 2);
        }
        *arg1 = *arg2 + 1;
        iVar7 = arg1;
        fcn.00019b48(arg1);
        iVar3 = fcn.00019780(iVar7,arg2);
        if (iVar3 == -1) {
            uVar4 = 0;
        }
        else {
            uVar4 = fcn.00019338(arg1,arg2,arg1);
        }
    }
    return uVar4;
}


/* fcn.0001bf04 @ 0x1bf04 */

void fcn.0001bf04(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    
    uVar20 = *(arg1 + 4);
    uVar19 = *(arg1 + 8);
    uVar18 = *(arg1 + 0xc);
    iVar1 = *arg2;
    iVar2 = *(arg2 + 0x14);
    iVar3 = *(arg2 + 4);
    uVar17 = *arg1 + -0x28955b88 + ((uVar18 ^ uVar19) & uVar20 ^ uVar18) + iVar1;
    uVar17 = (uVar17 * 0x80 | uVar17 >> 0x19) + uVar20;
    iVar4 = *(arg2 + 8);
    uVar18 = uVar18 + 0xe8c7b756 + ((uVar19 ^ uVar20) & uVar17 ^ uVar19) + iVar3;
    uVar18 = (uVar18 * 0x1000 | uVar18 >> 0x14) + uVar17;
    iVar5 = *(arg2 + 0xc);
    uVar19 = uVar19 + 0x242070db + ((uVar20 ^ uVar17) & uVar18 ^ uVar20) + iVar4;
    uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) + uVar18;
    iVar6 = *(arg2 + 0x10);
    uVar20 = uVar20 + 0xc1bdceee + ((uVar18 ^ uVar17) & uVar19 ^ uVar17) + iVar5;
    uVar21 = (uVar20 >> 10 | uVar20 * 0x400000) + uVar19;
    uVar20 = uVar17 + 0xf57c0faf + ((uVar18 ^ uVar19) & uVar21 ^ uVar18) + iVar6;
    iVar7 = *(arg2 + 0x18);
    uVar17 = (uVar20 * 0x80 | uVar20 >> 0x19) + uVar21;
    uVar20 = uVar18 + 0x4787c62a + ((uVar19 ^ uVar21) & uVar17 ^ uVar19) + iVar2;
    uVar20 = (uVar20 * 0x1000 | uVar20 >> 0x14) + uVar17;
    uVar19 = uVar19 + 0xa8304613 + ((uVar21 ^ uVar17) & uVar20 ^ uVar21) + iVar7;
    uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) + uVar20;
    iVar8 = *(arg2 + 0x1c);
    iVar9 = *(arg2 + 0x20);
    iVar10 = *(arg2 + 0x28);
    iVar11 = *(arg2 + 0x30);
    iVar12 = *(arg2 + 0x34);
    iVar13 = *(arg2 + 0x38);
    iVar14 = *(arg2 + 0x24);
    uVar18 = uVar21 + 0xfd469501 + ((uVar20 ^ uVar17) & uVar19 ^ uVar17) + iVar8;
    uVar18 = (uVar18 >> 10 | uVar18 * 0x400000) + uVar19;
    uVar17 = uVar17 + 0x698098d8 + ((uVar20 ^ uVar19) & uVar18 ^ uVar20) + iVar9;
    uVar21 = (uVar17 * 0x80 | uVar17 >> 0x19) + uVar18;
    uVar20 = uVar20 + 0x8b44f7af + ((uVar19 ^ uVar18) & uVar21 ^ uVar19) + iVar14;
    iVar15 = *(arg2 + 0x2c);
    uVar17 = (uVar20 * 0x1000 | uVar20 >> 0x14) + uVar21;
    uVar20 = (uVar19 - 0xa44f) + ((uVar18 ^ uVar21) & uVar17 ^ uVar18) + iVar10;
    uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) + uVar17;
    uVar19 = uVar18 + 0x895cd7be + ((uVar17 ^ uVar21) & uVar20 ^ uVar21) + iVar15;
    uVar19 = (uVar19 >> 10 | uVar19 * 0x400000) + uVar20;
    uVar18 = uVar21 + 0x6b901122 + ((uVar17 ^ uVar20) & uVar19 ^ uVar17) + iVar11;
    uVar18 = (uVar18 * 0x80 | uVar18 >> 0x19) + uVar19;
    uVar17 = ((uVar20 ^ uVar19) & uVar18 ^ uVar20) + 0xfd987193 + iVar12 + uVar17;
    uVar17 = (uVar17 * 0x1000 | uVar17 >> 0x14) + uVar18;
    uVar20 = uVar20 + 0xa679438e + ((uVar19 ^ uVar18) & uVar17 ^ uVar19) + iVar13;
    iVar16 = *(arg2 + 0x3c);
    uVar21 = (uVar20 >> 0xf | uVar20 * 0x20000) + uVar17;
    uVar19 = ((uVar17 ^ uVar18) & uVar21 ^ uVar18) + 0x49b40821 + iVar16 + uVar19;
    uVar20 = (uVar19 >> 10 | uVar19 * 0x400000) + uVar21;
    uVar18 = uVar18 + ((uVar21 ^ uVar20) & uVar17 ^ uVar21) + 0xf61e2562 + iVar3;
    uVar19 = (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar20;
    uVar17 = uVar17 + ((uVar20 ^ uVar19) & uVar21 ^ uVar20) + 0xc040b340 + iVar7;
    uVar18 = (uVar17 * 0x200 | uVar17 >> 0x17) + uVar19;
    uVar21 = uVar21 + ((uVar18 ^ uVar19) & uVar20 ^ uVar19) + 0x265e5a51 + iVar15;
    uVar17 = (uVar21 * 0x4000 | uVar21 >> 0x12) + uVar18;
    uVar20 = uVar20 + 0xe9b6c7aa + ((uVar18 ^ uVar17) & uVar19 ^ uVar18) + iVar1;
    uVar21 = (uVar20 >> 0xc | uVar20 * 0x100000) + uVar17;
    uVar20 = uVar19 + 0xd62f105d + ((uVar17 ^ uVar21) & uVar18 ^ uVar17) + iVar2;
    uVar20 = (uVar20 * 0x20 | uVar20 >> 0x1b) + uVar21;
    uVar19 = uVar18 + 0x2441453 + ((uVar21 ^ uVar20) & uVar17 ^ uVar21) + iVar10;
    uVar19 = (uVar19 * 0x200 | uVar19 >> 0x17) + uVar20;
    uVar18 = uVar17 + 0xd8a1e681 + ((uVar19 ^ uVar20) & uVar21 ^ uVar20) + iVar16;
    uVar18 = (uVar18 * 0x4000 | uVar18 >> 0x12) + uVar19;
    uVar17 = uVar21 + 0xe7d3fbc8 + ((uVar19 ^ uVar18) & uVar20 ^ uVar19) + iVar6;
    uVar17 = (uVar17 >> 0xc | uVar17 * 0x100000) + uVar18;
    uVar20 = uVar20 + 0x21e1cde6 + ((uVar18 ^ uVar17) & uVar19 ^ uVar18) + iVar14;
    uVar21 = (uVar20 * 0x20 | uVar20 >> 0x1b) + uVar17;
    uVar20 = uVar19 + 0xc33707d6 + ((uVar17 ^ uVar21) & uVar18 ^ uVar17) + iVar13;
    uVar20 = (uVar20 * 0x200 | uVar20 >> 0x17) + uVar21;
    uVar19 = uVar18 + 0xf4d50d87 + ((uVar20 ^ uVar21) & uVar17 ^ uVar21) + iVar5;
    uVar19 = (uVar19 * 0x4000 | uVar19 >> 0x12) + uVar20;
    uVar18 = uVar17 + 0x455a14ed + ((uVar20 ^ uVar19) & uVar21 ^ uVar20) + iVar9;
    uVar22 = (uVar18 >> 0xc | uVar18 * 0x100000) + uVar19;
    uVar18 = uVar21 + 0xa9e3e905 + ((uVar19 ^ uVar22) & uVar20 ^ uVar19) + iVar12;
    uVar18 = (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar22;
    uVar20 = uVar20 + 0xfcefa3f8 + ((uVar22 ^ uVar18) & uVar19 ^ uVar22) + iVar4;
    uVar17 = (uVar20 * 0x200 | uVar20 >> 0x17) + uVar18;
    uVar20 = uVar19 + 0x676f02d9 + ((uVar17 ^ uVar18) & uVar22 ^ uVar18) + iVar8;
    uVar21 = (uVar20 * 0x4000 | uVar20 >> 0x12) + uVar17;
    uVar20 = uVar22 + 0x8d2a4c8a + ((uVar17 ^ uVar21) & uVar18 ^ uVar17) + iVar11;
    uVar20 = (uVar20 >> 0xc | uVar20 * 0x100000) + uVar21;
    uVar18 = uVar18 + ((uVar17 ^ uVar21 ^ uVar20) - 0x5c6be) + iVar2;
    uVar19 = (uVar18 * 0x10 | uVar18 >> 0x1c) + uVar20;
    uVar17 = uVar17 + (uVar21 ^ uVar20 ^ uVar19) + 0x8771f681 + iVar9;
    uVar18 = (uVar17 * 0x800 | uVar17 >> 0x15) + uVar19;
    uVar21 = uVar21 + (uVar18 ^ uVar20 ^ uVar19) + 0x6d9d6122 + iVar15;
    uVar17 = (uVar21 * 0x10000 | uVar21 >> 0x10) + uVar18;
    uVar20 = uVar20 + 0xfde5380c + (uVar18 ^ uVar17 ^ uVar19) + iVar13;
    uVar21 = (uVar20 >> 9 | uVar20 * 0x800000) + uVar17;
    uVar20 = uVar19 + 0xa4beea44 + (uVar18 ^ uVar17 ^ uVar21) + iVar3;
    uVar20 = (uVar20 * 0x10 | uVar20 >> 0x1c) + uVar21;
    uVar19 = uVar18 + 0x4bdecfa9 + (uVar17 ^ uVar21 ^ uVar20) + iVar6;
    uVar19 = (uVar19 * 0x800 | uVar19 >> 0x15) + uVar20;
    uVar18 = uVar17 + 0xf6bb4b60 + (uVar19 ^ uVar21 ^ uVar20) + iVar8;
    uVar17 = (uVar18 * 0x10000 | uVar18 >> 0x10) + uVar19;
    uVar18 = uVar21 + 0xbebfbc70 + (uVar19 ^ uVar17 ^ uVar20) + iVar10;
    uVar21 = (uVar18 >> 9 | uVar18 * 0x800000) + uVar17;
    uVar20 = uVar20 + 0x289b7ec6 + (uVar19 ^ uVar17 ^ uVar21) + iVar12;
    uVar22 = (uVar20 * 0x10 | uVar20 >> 0x1c) + uVar21;
    uVar19 = uVar19 + (uVar17 ^ uVar21 ^ uVar22) + 0xeaa127fa + iVar1;
    uVar18 = (uVar19 * 0x800 | uVar19 >> 0x15) + uVar22;
    uVar17 = uVar17 + (uVar18 ^ uVar21 ^ uVar22) + 0xd4ef3085 + iVar5;
    uVar17 = (uVar17 * 0x10000 | uVar17 >> 0x10) + uVar18;
    uVar20 = uVar21 + 0x4881d05 + (uVar18 ^ uVar17 ^ uVar22) + iVar7;
    uVar19 = (uVar20 >> 9 | uVar20 * 0x800000) + uVar17;
    uVar22 = (uVar18 ^ uVar17 ^ uVar19) + iVar14 + -0x262b2fc7 + uVar22;
    uVar21 = (uVar22 * 0x10 | uVar22 >> 0x1c) + uVar19;
    uVar20 = uVar18 + 0xe6db99e5 + (uVar17 ^ uVar19 ^ uVar21) + iVar11;
    uVar20 = (uVar20 * 0x800 | uVar20 >> 0x15) + uVar21;
    uVar18 = uVar17 + 0x1fa27cf8 + (uVar20 ^ uVar19 ^ uVar21) + iVar16;
    uVar18 = (uVar18 * 0x10000 | uVar18 >> 0x10) + uVar20;
    uVar19 = uVar19 + 0xc4ac5665 + (uVar20 ^ uVar18 ^ uVar21) + iVar4;
    uVar17 = (uVar19 >> 9 | uVar19 * 0x800000) + uVar18;
    uVar19 = uVar21 + 0xf4292244 + ((~uVar20 | uVar17) ^ uVar18) + iVar1;
    uVar19 = (uVar19 * 0x40 | uVar19 >> 0x1a) + uVar17;
    uVar20 = uVar20 + 0x432aff97 + ((~uVar18 | uVar19) ^ uVar17) + iVar8;
    uVar21 = (uVar20 * 0x400 | uVar20 >> 0x16) + uVar19;
    uVar20 = uVar18 + 0xab9423a7 + ((~uVar17 | uVar21) ^ uVar19) + iVar13;
    uVar20 = (uVar20 * 0x8000 | uVar20 >> 0x11) + uVar21;
    uVar18 = uVar17 + 0xfc93a039 + ((~uVar19 | uVar20) ^ uVar21) + iVar2;
    uVar18 = (uVar18 >> 0xb | uVar18 * 0x200000) + uVar20;
    uVar19 = uVar19 + 0x655b59c3 + ((~uVar21 | uVar18) ^ uVar20) + iVar11;
    uVar17 = (uVar19 * 0x40 | uVar19 >> 0x1a) + uVar18;
    uVar19 = uVar21 + 0x8f0ccc92 + ((~uVar20 | uVar17) ^ uVar18) + iVar5;
    uVar19 = (uVar19 * 0x400 | uVar19 >> 0x16) + uVar17;
    uVar20 = (uVar20 - 0x100b83) + ((~uVar18 | uVar19) ^ uVar17) + iVar10;
    uVar21 = (uVar20 * 0x8000 | uVar20 >> 0x11) + uVar19;
    uVar20 = uVar18 + 0x85845dd1 + ((~uVar17 | uVar21) ^ uVar19) + iVar3;
    uVar20 = (uVar20 >> 0xb | uVar20 * 0x200000) + uVar21;
    uVar17 = ((~uVar19 | uVar20) ^ uVar21) + 0x6fa87e4f + iVar9 + uVar17;
    uVar18 = (uVar17 * 0x40 | uVar17 >> 0x1a) + uVar20;
    uVar19 = uVar19 + 0xfe2ce6e0 + ((~uVar21 | uVar18) ^ uVar20) + iVar16;
    uVar17 = (uVar19 * 0x400 | uVar19 >> 0x16) + uVar18;
    uVar19 = uVar21 + 0xa3014314 + ((~uVar20 | uVar17) ^ uVar18) + iVar7;
    uVar19 = (uVar19 * 0x8000 | uVar19 >> 0x11) + uVar17;
    uVar20 = ((~uVar18 | uVar19) ^ uVar17) + 0x4e0811a1 + iVar12 + uVar20;
    uVar21 = (uVar20 >> 0xb | uVar20 * 0x200000) + uVar19;
    uVar20 = uVar18 + 0xf7537e82 + ((~uVar17 | uVar21) ^ uVar19) + iVar6;
    uVar20 = (uVar20 * 0x40 | uVar20 >> 0x1a) + uVar21;
    uVar17 = ((~uVar19 | uVar20) ^ uVar21) + 0xbd3af235 + iVar15 + uVar17;
    uVar18 = (uVar17 * 0x400 | uVar17 >> 0x16) + uVar20;
    *arg1 = *arg1 + uVar20;
    uVar19 = uVar19 + ((~uVar21 | uVar18) ^ uVar20) + 0x2ad7d2bb + iVar4;
    uVar19 = (uVar19 * 0x8000 | uVar19 >> 0x11) + uVar18;
    *(arg1 + 8) = *(arg1 + 8) + uVar19;
    uVar20 = uVar21 + 0xeb86d391 + ((~uVar20 | uVar19) ^ uVar18) + iVar14;
    *(arg1 + 4) = *(arg1 + 4) + (uVar20 >> 0xb | uVar20 * 0x200000) + uVar19;
    *(arg1 + 0xc) = *(arg1 + 0xc) + uVar18;
    return;
}


/* fcn.0001cd3c @ 0x1cd3c */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.0001cd3c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

{
    uint16_t uVar1;
    uint32_t uVar2;
    char cVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    char *pcVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    uint64_t *puVar14;
    char cVar15;
    char *pcVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    uint64_t *puVar19;
    uint64_t uVar20;
    int64_t *piVar21;
    uint8_t *puVar22;
    bool bVar23;
    int64_t var_10h;
    uint64_t uStackX_18;
    uint8_t *puStackX_20;
    uint64_t *in_stack_00000028;
    char cStack0000000000000030;
    int8_t var_68h;
    int64_t var_70h_2;
    char *pcStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t *puStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    int64_t iStack_98;
    uint64_t uStack_90;
    int64_t var_80h;
    int64_t var_78h;
    int32_t var_70h;
    int32_t var_6ch;
    int64_t var_68h_2;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_bp_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int8_t var_18h;
    
    puStack_b0 = NULL;
    if (arg2 == 0) {
        uVar6 = arg3 & 0x2000;
        if ((arg3 & 0x2000U) == 0) goto code_r0x0001cd97;
    }
    else {
        uVar6 = arg3 & 0x2000;
        if (((arg3 & 0x2000U) == 0) && (arg1 == 0)) {
            return 0;
        }
    }
    if (arg4 == 0) {
        return 0;
    }
code_r0x0001cd97:
    uVar18 = 1000000;
    iVar13 = 2;
    if ((arg3 & 0x40U) == 0) {
        if (1000000 < arg2) {
            return 0;
        }
        uVar20 = 1;
    }
    else {
        if (1000000 < arg2) {
            return 0;
        }
        uVar20 = 2;
    }
    uVar11 = uVar20;
    if ((arg3 >> 8 & 1) == 0) {
        uVar5 = fcn.0001db30(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        iVar13 = 1;
        uStack_90 = 0xff;
    }
    else {
        uVar5 = fcn.0001db04(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        uStack_90 = 0xffff;
    }
    var_78h = iVar13;
    if (uVar6 == 0) {
        if (arg2 == 0) {
            return 0;
        }
    }
    else {
        arg1 = arg1 & -(arg2 != 0);
    }
    _var_70h = NULL;
    uStack_d0 = 0;
    pcStack_d8 = NULL;
    if (arg1 != NULL) {
        _var_70h = arg1;
        pcStack_d8 = arg1 + (arg2 + -1) * (uVar11 & 0xffffffff);
    }
    if (iVar13 == 1) {
        iVar4 = 0;
    }
    else {
        iVar4 = *(arg4 + 1) << 8;
    }
    uVar18 = *arg4;
    uVar6 = iVar4;
    while( true ) {
        uVar11 = 1;
        uStack_a8 = (uVar18 | uVar6) & uStack_90;
        if ((uStack_a8 == 0) || ((arg1 != NULL && (pcStack_d8 <= arg1)))) break;
        uStack_a0 = 0;
        uVar6 = 0;
        iStack_98 = 0;
        cVar3 = '\0';
        uVar5 = arg3 & 0x2140;
        uStack_b8 = 1;
        uVar18 = 1;
        cVar15 = '\0';
        bVar23 = false;
        _cStack0000000000000030 = _cStack0000000000000030 & 0xffffffffffffff00;
        uStack_c0 = 0;
        uStackX_18 = uVar5;
        if (uStack_a8 == 10) {
            puVar22 = arg4 + var_78h;
            pcVar9 = 0x1e66c;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar22[1] << 8;
            }
            uStack_a8 = (iVar4 | *puVar22) & uStack_90;
            if (uStack_a8 != 0xd) {
                puVar22 = arg4;
            }
        }
        else {
            uVar18 = uVar11;
            if (uStack_a8 == 0xd) {
code_r0x0001d121:
                puVar22 = arg4 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puVar22[1] << 8;
                }
                uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                if (uStack_a8 == 10) {
                    pcVar9 = 0x1e66c;
                }
                else {
                    pcVar9 = 0x1e670;
                    puVar22 = arg4;
                }
            }
            else {
                puStackX_20 = arg4;
                if (uStack_a8 == 0x25) {
                    puVar14 = puStack_b0;
                    puVar19 = in_stack_00000028;
code_r0x0001cee0:
                    while( true ) {
                        puStackX_20 = arg4 + var_78h;
                        if (var_78h == 1) {
                            iVar4 = 0;
                        }
                        else {
                            iVar4 = puStackX_20[1] << 8;
                        }
                        uStack_a8 = (*puStackX_20 | iVar4) & uStack_90;
                        if (uStack_a8 < 0x2e) break;
                        if (uStack_a8 == 0x2e) {
                            uVar5 = uVar5 | 0x800;
                            goto code_r0x0001d083;
                        }
                        if (uStack_a8 == 0x30) {
                            if ((uVar5 & 0x800) == 0) {
                                uVar5 = uVar5 | 0x20;
                                uStackX_18 = uVar5;
                            }
                        }
                        else {
                            if (uStack_a8 < 0x31) goto code_r0x0001d09a;
                            if (0x39 < uStack_a8) {
                                if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                    uVar5 = uVar5 | 0x10;
                                    goto code_r0x0001d083;
                                }
                                goto code_r0x0001d09a;
                            }
                        }
                        uVar6 = 0;
                        uStack_c0 = 0;
                        if (0x2f < uStack_a8) {
                            do {
                                if (0x39 < uStack_a8) break;
                                puStackX_20 = puStackX_20 + var_78h;
                                uVar6 = uStack_a8 + (uVar6 * 5 + -0x18) * 2;
                                if (var_78h == 1) {
                                    iVar4 = 0;
                                }
                                else {
                                    iVar4 = puStackX_20[1] << 8;
                                }
                                uStack_a8 = (*puStackX_20 | iVar4) & uStack_90;
                            } while (0x2f < uStack_a8);
                            uStack_c0 = uVar6;
                        }
                        arg4 = puStackX_20 + -var_78h;
                        uVar6 = uStack_c0;
                        if ((uVar5 & 0x800) == 0) {
                            uVar5 = uVar5 | 0x200;
                            uStack_a0 = uStack_c0;
                            uStackX_18 = uVar5;
                        }
                        else {
                            uVar18 = uStack_c0;
                            uStack_b8 = uStack_c0;
                        }
                    }
                    if (uStack_a8 == 0x2d) {
                        uVar5 = uVar5 | 1;
code_r0x0001d083:
                        arg4 = puStackX_20;
                        uStackX_18 = uVar5;
                        goto code_r0x0001cee0;
                    }
                    if (uStack_a8 != 0) {
                        if (uStack_a8 == 0x20) {
                            uVar5 = uVar5 | 4;
                        }
                        else {
                            if (uStack_a8 == 0x2a) {
                                if ((uVar5 & 0x800) == 0) {
                                    uVar5 = uVar5 | 0x200;
                                    if (puVar14 == NULL) {
                                        uStack_a0 = *puVar19;
                                        puVar19 = puVar19 + 1;
                                        in_stack_00000028 = puVar19;
                                    }
                                    else {
                                        uStack_a0 = *puVar14;
                                        puVar14 = puVar14 + 1;
                                        puStack_b0 = puVar14;
                                    }
                                    arg4 = puStackX_20;
                                    uStackX_18 = uVar5;
                                }
                                else {
                                    if (puVar14 == NULL) {
                                        uStack_b8 = *puVar19;
                                        puVar19 = puVar19 + 1;
                                        in_stack_00000028 = puVar19;
                                    }
                                    else {
                                        uStack_b8 = *puVar14;
                                        puVar14 = puVar14 + 1;
                                        puStack_b0 = puVar14;
                                    }
                                    arg4 = puStackX_20;
                                    uVar18 = uStack_b8;
                                }
                                goto code_r0x0001cee0;
                            }
                            if (uStack_a8 == 0x2b) {
                                uVar5 = uVar5 | 2;
                            }
                            else {
                                if (uStack_a8 != 0x2c) goto code_r0x0001d09a;
                                uVar5 = uVar5 | 8;
                            }
                        }
                        goto code_r0x0001d083;
                    }
                    uVar18 = 0;
                    uStack_b8 = 0;
                    puStackX_20 = arg4;
code_r0x0001d09a:
                    puVar22 = puStackX_20;
                    if (uStack_a8 < 0x68) {
                        if (uStack_a8 == 0x67) {
                            if (puVar14 == NULL) {
                                uVar18 = *puVar19;
                                in_stack_00000028 = puVar19 + 1;
                            }
                            else {
                                uVar18 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            if (uVar18 == 0) {
                                pcVar9 = "<null guid>";
                            }
                            else {
                                fcn.0001da68(&var_68h_2,0x26,0,0x1e600);
                                pcVar9 = &var_68h_2;
                                uVar6 = uStack_c0;
                                cVar15 = cStack0000000000000030;
                            }
                            uVar18 = uStack_b8;
                        }
                        else {
                            if (uStack_a8 != 10) {
                                arg4 = puStackX_20;
                                if (uStack_a8 == 0xd) goto code_r0x0001d121;
                                if (uStack_a8 == 0x53) goto code_r0x0001d330;
                                if (uStack_a8 == 0x58) goto code_r0x0001d426;
                                if (uStack_a8 == 0x61) goto code_r0x0001d339;
                                if (uStack_a8 == 99) {
                                    if (puVar14 == NULL) {
                                        uVar1 = *puVar19;
                                        in_stack_00000028 = puVar19 + 1;
                                    }
                                    else {
                                        uVar1 = *puVar14;
                                        puStack_b0 = puVar14 + 1;
                                    }
                                    var_80h = uVar1;
                                    pcVar9 = &var_80h;
                                    goto code_r0x0001cec5;
                                }
                                if (uStack_a8 != 100) goto code_r0x0001cec1;
                                goto code_r0x0001d43d;
                            }
                            puVar22 = puStackX_20 + var_78h;
                            pcVar9 = 0x1e66c;
                            if (var_78h == 1) {
                                iVar4 = 0;
                            }
                            else {
                                iVar4 = puVar22[1] << 8;
                            }
                            uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                            if (uStack_a8 != 0xd) {
                                puVar22 = puStackX_20;
                            }
                        }
                        goto code_r0x0001d638;
                    }
                    if (uStack_a8 != 0x70) {
                        if (uStack_a8 == 0x72) {
                            if (puVar14 == NULL) {
                                uVar11 = *puVar19;
                                in_stack_00000028 = puVar19 + 1;
                            }
                            else {
                                uVar11 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            pcVar9 = &var_68h_2;
                            if (uVar11 < 0) {
                                if ((uVar11 & 0x7fffffffffffffff) - 1 < 0x21) {
                                    pcVar9 = (uVar11 & 0x7fffffffffffffff) * 0x15;
                                    iVar13 = 0x1e70b;
                                    goto code_r0x0001d3ed;
                                }
                            }
                            else if (uVar11 < 6) {
                                iVar13 = uVar11 * 0x19;
                                pcVar9 = "Success";
code_r0x0001d3ed:
                                pcVar9 = pcVar9 + iVar13;
                                if (pcVar9 != &var_68h_2) goto code_r0x0001d638;
                            }
                            fcn.0001da68(&var_68h_2,0x26,0,0x1e664);
                        }
                        else {
                            if (uStack_a8 == 0x73) {
code_r0x0001d330:
                                uVar5 = uVar5 | 0x400;
                                uStackX_18 = uVar5;
code_r0x0001d339:
                                if (puVar14 == NULL) {
                                    pcVar9 = *puVar19;
                                    in_stack_00000028 = puVar19 + 1;
                                }
                                else {
                                    puStack_b0 = puVar14 + 1;
                                    pcVar9 = *puVar14;
                                }
                                if (pcVar9 == NULL) {
                                    uVar5 = uVar5 & 0xfffffffffffffbff;
                                    pcVar9 = "<null string>";
                                    uStackX_18 = uVar5;
                                }
                                uVar18 = uVar18 & -((uVar5 & 0x800) != 0);
                                goto code_r0x0001d638;
                            }
                            if (uStack_a8 != 0x74) {
                                if (uStack_a8 != 0x75) {
                                    if (uStack_a8 != 0x78) goto code_r0x0001cec1;
                                    goto code_r0x0001d42a;
                                }
                                goto code_r0x0001d42f;
                            }
                            if (puVar14 == NULL) {
                                in_stack_00000028 = puVar19 + 1;
                                uVar11 = *puVar19;
                            }
                            else {
                                uVar11 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            if (uVar11 == 0) {
                                pcVar9 = "<null time>";
                                goto code_r0x0001d638;
                            }
                            fcn.0001da68(&var_68h_2,0x26,0,0x1e648);
                            pcVar9 = &var_68h_2;
                        }
                        uVar6 = uStack_c0;
                        goto code_r0x0001d638;
                    }
                    uVar5 = uVar5 & 0xffffffffffffffd9 | 0x10;
code_r0x0001d426:
                    uVar5 = uVar5 | 0x20;
code_r0x0001d42a:
                    uVar5 = uVar5 | 0x80;
code_r0x0001d42f:
                    if (-1 < uVar5) {
                        uVar5 = uVar5 & 0xfffffffffffffffd | 0x4000;
                    }
code_r0x0001d43d:
                    if ((uVar5 & 0x10) == 0) {
                        if (puVar14 != NULL) {
                            uVar6 = *puVar14;
                            goto code_r0x0001d47f;
                        }
                        uVar6 = *puVar19;
                        in_stack_00000028 = puVar19 + 1;
                    }
                    else if (puVar14 == NULL) {
                        uVar6 = *puVar19;
                        in_stack_00000028 = puVar19 + 1;
                    }
                    else {
                        uVar6 = *puVar14;
code_r0x0001d47f:
                        puStack_b0 = puVar14 + 1;
                    }
                    cVar3 = (uVar5 & 4) << 3;
                    if ((uVar5 & 2) != 0) {
                        cVar3 = '+';
                    }
                    bVar23 = (uVar5 & 8) != 0;
                    if (uVar5 < '\0') {
                        uVar17 = 0x10;
                        bVar23 = false;
                        if (((uVar5 & 0x10) == 0) && (uVar2 = 0x10, uVar6 < 0)) {
code_r0x0001d507:
                            uVar17 = uVar2;
                            uVar6 = uVar6 & 0xffffffff;
                        }
                    }
                    else {
                        uVar17 = 10;
                        if ((uVar5 & 8) != 0) {
                            uVar5 = uVar5 & 0xffffffffffffffdf;
                            uVar18 = 1;
                        }
                        if ((uVar6 < 0) && (uVar5 >> 0xe == 0)) {
                            cVar3 = '-';
                            uVar6 = -uVar6;
                        }
                        else {
                            uVar2 = 10;
                            if ((uVar5 & 0x4010) == 0x4000) goto code_r0x0001d507;
                        }
                    }
                    var_68h_2._0_1_ = 0;
                    piVar21 = &var_68h_2;
                    uVar11 = uVar6;
                    do {
                        uVar7 = uVar11 / uVar17;
                        piVar21 = piVar21 + 1;
                        *piVar21 = "0123456789ABCDEF"[uVar11 % uVar17];
                        uVar11 = uVar7;
                    } while (uVar7 != 0);
                    uStack_c0 = piVar21 - &var_68h_2;
                    if (uVar6 == 0) {
                        uStack_c0 = uStack_c0 & -(uVar18 != 0);
                    }
                    pcVar9 = &var_68h_2 + uStack_c0;
                    iStack_98 = 3 - uStack_c0 % 3;
                    if (uStack_c0 % 3 == 0) {
                        iStack_98 = 0;
                    }
                    if ((bVar23) && (uStack_c0 != 0)) {
                        uStack_c0 = uStack_c0 + (uStack_c0 - 1) / 3;
                    }
                    if (cVar3 != '\0') {
                        uStack_c0 = uStack_c0 + 1;
                        uVar18 = uVar18 + 1;
                    }
                    uVar5 = uVar5 | 0x1000;
                    cVar15 = '\x01';
                    uVar6 = uStack_c0;
                    uStackX_18 = uVar5;
                    if ((uVar5 & 0xa21) == 0x220) {
                        uVar18 = uStack_a0;
                    }
                }
                else {
code_r0x0001cec1:
                    pcVar9 = &uStack_a8;
code_r0x0001cec5:
                    uVar5 = uVar5 | 0x400;
                    uStackX_18 = uVar5;
                    puVar22 = puStackX_20;
                }
            }
        }
code_r0x0001d638:
        puStackX_20 = puVar22;
        uVar17 = uVar5;
        iVar13 = ((uVar5 & 0x400) != 0) + 1;
        _cStack0000000000000030 = (-((uVar5 & 0x400) != 0) & 0xff00) + 0xff;
        if ((uVar5 >> 0xc & 1) == 0) {
            uVar6 = 0;
            pcVar16 = pcVar9 + 1;
            while ((((pcVar16[-1] != '\0' || (((uVar5 & 0x400) != 0 && (*pcVar16 != '\0')))) &&
                    ((uVar6 < uVar18 || ((uVar5 >> 0xb & 1) == 0)))) &&
                   ((_cStack0000000000000030 & (*pcVar16 << 8 | pcVar16[-1])) != 0))) {
                uVar6 = uVar6 + 1;
                pcVar16 = pcVar16 + iVar13;
            }
            uStack_c0 = uVar6;
        }
        else {
            iVar13 = -iVar13;
        }
        if (uVar18 < uVar6) {
            uVar18 = uVar6;
        }
        uVar11 = uVar17 & 0x201;
        var_40h = uVar11;
        pcVar16 = pcStack_d8;
        if (uVar11 == 0x200) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar18) * uVar20;
            if (((uVar5 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001cd08(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        uVar7 = uVar20;
        if (cVar15 == '\0') {
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001cd08(arg1,pcVar16,uVar18 - uVar6,(uVar17 & 0x2000) + 0x20);
            }
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar7, (uVar5 & 0x2000) == 0)) && (arg1 != NULL)) {
                iVar10 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar7 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar7;
                    iVar10 = iVar10 + 1;
                } while (iVar10 < 1);
            }
        }
        else {
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar20, (uVar5 >> 0xd & 1) == 0)) && (arg1 != NULL)) {
                iVar10 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar20 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar20;
                    iVar10 = iVar10 + 1;
                } while (iVar10 < 1);
            }
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001cd08(arg1,pcStack_d8,uVar18 - uVar6,(uVar17 & 0x2000) + 0x30);
            }
        }
        arg3 = uVar5;
        if ((cVar3 != '\0') < uStack_c0) {
            uVar6 = cVar3 != '\0';
            iVar10 = iStack_98;
            do {
                if ((*pcVar9 == '\0') && ((iVar13 < 2 || (*(pcVar9 + 1) == '\0')))) break;
                uStack_d0 = uStack_d0 + uVar7;
                uVar11 = *pcVar9 & _cStack0000000000000030;
                if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                    iVar12 = 0;
                    do {
                        if (pcStack_d8 <= arg1) break;
                        *arg1 = uVar11;
                        if (uVar7 != 1) {
                            *(arg1 + 1) = uVar11 >> 8;
                        }
                        arg1 = arg1 + uVar7;
                        iVar12 = iVar12 + 1;
                    } while (iVar12 < 1);
                }
                pcVar9 = pcVar9 + iVar13;
                uVar11 = uVar6 + 1;
                if ((bVar23) && (iVar10 = iVar10 + 1, iVar10 == 3)) {
                    iVar12 = 0;
                    uVar11 = uVar6 + 2;
                    if (uStack_c0 <= uVar11) break;
                    uStack_d0 = uStack_d0 + uVar7;
                    iVar10 = iVar12;
                    if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                        iVar8 = 0;
                        do {
                            iVar10 = iVar12;
                            if (pcStack_d8 <= arg1) break;
                            *arg1 = ',';
                            if (uVar7 != 1) {
                                *(arg1 + 1) = '\0';
                            }
                            arg1 = arg1 + uVar7;
                            iVar8 = iVar8 + 1;
                            iVar10 = 0;
                        } while (iVar8 < 1);
                    }
                }
                uVar6 = uVar11;
            } while (uVar11 < uStack_c0);
            arg3 = uStackX_18;
            uVar11 = var_40h;
        }
        if (uVar11 == 0x201) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar18) * uVar7;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001cd08(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        arg4 = puStackX_20 + var_78h;
        if (var_78h == 1) {
            iVar4 = 0;
        }
        else {
            iVar4 = *(arg4 + 1) << 8;
        }
        uVar18 = iVar4;
        uVar6 = *arg4;
    }
    iVar13 = 0;
    if ((arg3 >> 0xd & 1) != 0) {
        return uStack_d0 / uVar20;
    }
    pcVar9 = arg1;
    do {
        if (pcStack_d8 + uVar20 <= pcVar9) break;
        *pcVar9 = '\0';
        if (uVar20 != 1) {
            pcVar9[1] = '\0';
        }
        pcVar9 = pcVar9 + uVar20;
        iVar13 = iVar13 + 1;
    } while (iVar13 < 1);
    return (arg1 - _var_70h) / uVar20;
}


/* fcn.0001db04 @ 0x1db04 */

uint64_t fcn.0001db04(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
        do {
            if (999999 < uVar1) {
                return 0xf4241;
            }
            uVar1 = uVar1 + 1;
        } while (*(CONCAT44(in_register_0000000c,arg1) + uVar1 * 2) != 0);
        return uVar1;
    }
    return 0;
}


/* fcn.0001db30 @ 0x1db30 */

uint64_t fcn.0001db30(uint32_t arg1)

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


/* fcn.0001da68 @ 0x1da68 */

void fcn.0001da68(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.0001cd3c(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.0001cd08 @ 0x1cd08 */

uchar * fcn.0001cd08(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_register_0000000c;
    uchar *puVar1;
    int64_t iVar2;
    int64_t in_stack_00000028;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = 0;
    if (0 < arg3) {
        do {
            if (arg2 <= puVar1) {
                return puVar1;
            }
            *puVar1 = arg4;
            if (in_stack_00000028 != 1) {
                puVar1[1] = arg4 >> 8;
            }
            puVar1 = puVar1 + in_stack_00000028;
            iVar2 = iVar2 + 1;
        } while (iVar2 < arg3);
    }
    return puVar1;
}


