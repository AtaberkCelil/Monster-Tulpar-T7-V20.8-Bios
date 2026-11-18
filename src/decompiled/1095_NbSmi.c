// decompiled by r2ghidra: 1095_NbSmi.pe32
// functions: 21

/* entry0 @ 0x11230 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.000112b8(arg1,arg2);
    *0x122e0 = -0x7fffffffffffffff;
    iVar1 = section..text(0x121e0);
    if (iVar1 == 0) {
        iVar1 = fcn.000116c4(arg1,arg2);
        if ((-1 < iVar1) || (*0x122e0 < 0)) {
            *0x122e0 = iVar1;
        }
        fcn.000110d0(0x121e0,-1);
    }
    iVar1 = *0x122e0;
    if (*0x122e0 < 0) {
        fcn.00011898();
    }
    return iVar1;
}


/* fcn.000117e4 @ 0x117e4 */

void fcn.000117e4(void)

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
    
    *0x12168 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x12160 = arg2;
    uStackX_8 = arg1;
    (**(*0x12168 + 0x140))(0x12070,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x12170);
    (**(*0x12168 + 0x140))(0x12090,0,&iStackX_18);
    uStackX_8 = 0;
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,0);
    *0x122f0 = fcn.00011868();
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,*0x122f0);
    *0x122e8 = uStackX_8 >> 5;
    fcn.000118d4();
    puVar4 = fcn.000118d4();
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
            if ((*0x120a0 == *(puVar4 + 4)) && (*0x120a8 == *(puVar4 + 8))) {
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
    fcn.000117e4();
    *(arg1 + 0xf8) = 0;
    if ((*0x120f0 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.000116c4 @ 0x116c4 */

int64_t fcn.000116c4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char acStackX_18 [16];
    
    if (*0x121d8 == 0) {
        *0x121c0 = *(arg2 + 0x60);
        *0x12188 = *(arg2 + 0x58);
        *0x121d8 = arg2;
    }
    acStackX_18[0] = '\0';
    if (*0x121d8 == 0) {
        *0x121c0 = *(arg2 + 0x60);
        *0x12188 = *(arg2 + 0x58);
        *0x121d8 = arg2;
    }
    iVar1 = (**(*0x121c0 + 0x140))(0x120d0,0,0x121c8);
    if (((-1 < iVar1) && ((***0x121c8)(*0x121c8,acStackX_18), acStackX_18[0] != '\0')) &&
       (iVar1 = (*(*0x121c8)[1])(*0x121c8,0x12190), -1 < iVar1)) {
        iVar1 = fcn.00011aac();
        *0x12198 = 1;
        if (iVar1 != 0) {
            *0x12188 = iVar1;
        }
        *0x121a8 = 0;
        fcn.00011940();
        fcn.000119c8();
        *0x121a8 = 1;
        iVar1 = fcn.0001141c(arg1,arg2);
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


/* fcn.00011898 @ 0x11898 */

void fcn.00011898(void)

{
    char cVar1;
    
    cVar1 = fcn.00011824(*0x122f0);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x000118be. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x12170 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x000118cd. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x12168 + 0x48))(*0x122f0);
    return;
}


/* fcn.00011824 @ 0x11824 */

uint64_t fcn.00011824(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x122e8 != 0) {
        puVar2 = *0x122f0 + 8;
        in_RAX = *0x122f0;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x122e8);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00011868 @ 0x11868 */

ulong fcn.00011868(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x12170 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000118d4 @ 0x118d4 */

int64_t fcn.000118d4(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x12180 == 0) {
        *0x12180 = 0;
        if (*(*0x12160 + 0x68) != 0) {
            piVar2 = *(*0x12160 + 0x70);
            do {
                if ((*0x12050 == *piVar2) && (*0x12058 == piVar2[1])) {
                    *0x12180 = (*(*0x12160 + 0x70))[uVar1 * 3 + 2];
                    return *0x12180;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x12160 + 0x68));
        }
    }
    return *0x12180;
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


/* fcn.00011aac @ 0x11aac */

ulong fcn.00011aac(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    if (*0x12190 != 0) {
        iVar3 = *(*0x12190 + 0xa0);
        for (iVar2 = *(*0x12190 + 0x98); iVar2 != 0; iVar2 = iVar2 + -1) {
            iVar1 = fcn.00011af8(iVar3);
            if (iVar1 == 0) {
                return *(iVar3 + 0x10);
            }
            iVar3 = iVar3 + 0x18;
        }
    }
    return 0;
}


/* fcn.00011940 @ 0x11940 */

ulong fcn.00011940(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x12198 == '\0') {
        if (*0x121b8 == 0) {
            if (*0x121a8 != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x121c0 + 0x140))(0x120b0,0,0x121b8);
        }
    }
    else if (*0x121a0 == 0) {
        if ((*0x121a8 == '\0') && (*0x12190 != 0)) {
    //WARNING: Could not recover jumptable at 0x0001197f. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x12190 + 0xd0))(0x120c0,0,0x121a0);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.000119c8 @ 0x119c8 */

int64_t fcn.000119c8(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    if (*0x12198 == '\0') {
        if (*0x121d0 == 0) {
            if (*0x121a8 == '\x01') {
                return -0x7ffffffffffffffd;
            }
            uVar2 = (**(*0x121c0 + 0x18))(0x1f);
            (**(*0x121c0 + 0x20))(uVar2);
            if (0x10 < uVar2) {
                return -0x7ffffffffffffffd;
            }
            iVar1 = (**(*0x121c0 + 0x140))(str.6_6v,0,0x121d0);
            if (iVar1 < 0) {
                *0x121d0 = 0;
            }
            return iVar1;
        }
    }
    else if (*0x121b0 == 0) {
        if (*0x12190 == 0) {
            return -0x7ffffffffffffffd;
        }
        iVar1 = (**(*0x12190 + 0xd0))(0x12020,0,0x121b0);
        if (iVar1 < 0) {
            *0x121b0 = 0;
        }
        return iVar1;
    }
    return 0;
}


/* fcn.000117e8 @ 0x117e8 */

int64_t fcn.000117e8(void)

{
    if (*0x12178 == 0) {
        (**(*0x12168 + 0x140))(0x12030,0,0x12178);
    }
    return *0x12178;
}


/* fcn.0001141c @ 0x1141c */

//WARNING: Variable defined which should be unmapped: var_fh
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_17h

int64_t fcn.0001141c(ulong noname_0,int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    int64_t var_fh;
    int64_t var_17h;
    int64_t var_1fh;
    int64_t var_27h;
    int64_t var_2fh;
    int64_t var_3fh;
    int32_t var_4fh;
    uint32_t var_77h;
    int64_t var_7fh;
    uint uStack_68;
    uint uStack_64;
    uint uStack_60;
    uint uStack_5c;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong *puStack_40;
    uchar auStack_38 [8];
    char16_t acStack_30 [2];
    char16_t acStack_2c [2];
    char16_t acStack_28 [2];
    char16_t acStack_24 [2];
    char16_t acStack_20 [2];
    char16_t acStack_1c [2];
    char16_t acStack_18 [2];
    char16_t cStack_14;
    int32_t var_9h;
    int32_t var_5h;
    int32_t var_1h;
    int32_t var_3h;
    
    iVar2 = 0;
    uStack_50 = 3;
    acStack_30 = str.NbAslBufferPtrVar._0_4_;
    acStack_2c = str.NbAslBufferPtrVar._4_4_;
    acStack_28 = str.NbAslBufferPtrVar._8_4_;
    acStack_24 = str.NbAslBufferPtrVar._12_4_;
    uStack_68 = 0x30bc0b91;
    acStack_20 = str.NbAslBufferPtrVar._16_4_;
    acStack_1c = str.NbAslBufferPtrVar._20_4_;
    acStack_18 = str.NbAslBufferPtrVar._24_4_;
    _cStack_14 = str.NbAslBufferPtrVar._28_4_;
    uStack_64 = 0x4f6b8106;
    uStack_60 = 0x47225db8;
    uStack_5c = 0x38950d35;
    stack0xfffffffffffffff0 = str.NbAslBufferPtrVar._32_4_;
    uStack_48 = 4;
    uStack_58 = 0xca9;
    if (*0x121d8 == 0) {
        *0x121c0 = *(arg1 + 0x60);
        *0x12188 = *(arg1 + 0x58);
        *0x121d8 = arg1;
    }
    if ((((*0x121c8 != NULL) || (iVar2 = (**(*0x121c0 + 0x140))(0x120d0,0,0x121c8), -1 < iVar2)) &&
        ((***0x121c8)(*0x121c8,&var_1fh + 1), var_1fh._1_1_ != '\0')) &&
       (iVar2 = (*(*0x121c8)[1])(*0x121c8,0x12190), -1 < iVar2)) {
        iVar2 = fcn.00011aac();
        *0x12198 = 1;
        if (iVar2 != 0) {
            *0x12188 = iVar2;
        }
        *0x121a8 = 0;
        fcn.00011940();
        iVar2 = fcn.000119c8();
        *0x121a8 = 1;
    }
    if (-1 < iVar2) {
        (**(*0x12188 + 0x48))(acStack_30,&uStack_68,0,&uStack_48,&var_27h + 1);
        (**(*0x12190 + 0x50))(6,uStack_58,0x12158);
        *(*0x12158 + 0x2c) = 0;
        *(*0x12158 + 0x2d) = 0;
        *(*0x12158 + 0x2a) = 0;
        *(*0x12158 + 0x2b) = 0;
        *(*0x12158 + 0x2f) = 0;
        *(*0x12158 + 0x31) = 0;
        *(*0x12158 + 0x32) = 0;
        *(*0x12158 + 0xb1) = 0;
        *(*0x12158 + 0x3c) = 0;
        uStack_58 = 0x578;
        iVar2 = (**(*0x12188 + 0x48))(L"SaSetup",0x12060,0,&uStack_58,*0x12158);
        if ((-1 < iVar2) && (iVar2 = (**(*0x12190 + 0xd0))(0x12010,0,0x12150), -1 < iVar2)) {
            iVar2 = fcn.000117e8();
            cVar1 = (**(iVar2 + 0x30))(0x12040,0x1100000);
            if ((cVar1 != '\0') && (iVar2 = (**(*0x12190 + 0xd0))(str.Y_mEK,0,&puStack_40), -1 < iVar2)) {
                (**puStack_40)(puStack_40,0x11418,&uStack_50,auStack_38);
            }
            iVar2 = 0;
        }
    }
    return iVar2;
}


/* fcn.00011af8 @ 0x11af8 */

int64_t fcn.00011af8(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    piVar3 = 0x120e0;
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


