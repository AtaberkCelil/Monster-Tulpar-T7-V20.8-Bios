// decompiled by r2ghidra: 1265_TcgSmm.pe32
// functions: 12

/* entry0 @ 0x11200 */

int64_t entry0(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t arg1;
    
    fcn.00011274(param_1,param_2);
    arg1 = 0x121f0;
    *0x122f0 = -0x7fffffffffffffff;
    iVar1 = fcn.00011020(0x121f0);
    if (iVar1 == 0) {
        iVar1 = fcn.000119d4(arg1,param_2);
        if ((-1 < iVar1) || (*0x122f0 < 0)) {
            *0x122f0 = iVar1;
        }
        fcn.000110f0(0x121f0,-1);
    }
    iVar1 = *0x122f0;
    if (*0x122f0 < 0) {
        fcn.00011bc4();
    }
    return iVar1;
}


/* fcn.00011b4c @ 0x11b4c */

void fcn.00011b4c(void)

{
    return;
}


/* fcn.00011274 @ 0x11274 */

void fcn.00011274(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    
    *0x121d8 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x121d0 = arg2;
    uStackX_8 = arg1;
    (**(*0x121d8 + 0x140))(0x12060,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x121e0);
    (**(*0x121d8 + 0x140))(0x12080,0,aiStackX_18);
    uStackX_8 = 0;
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,0);
    *0x12300 = fcn.00011b94();
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,*0x12300);
    *0x122f8 = uStackX_8 >> 5;
    iVar1 = (**(*0x121e0 + 0xd0))(0x12050,0,0x121e8);
    if (iVar1 < 0) {
        *0x121e8 = 0;
    }
    return;
}


/* fcn.00011b94 @ 0x11b94 */

ulong fcn.00011b94(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x121e0 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00011020 @ 0x11020 */

ulong fcn.00011020(int64_t arg1)

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
    
    fcn.00011b4c();
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


/* fcn.000119d4 @ 0x119d4 */

int64_t fcn.000119d4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uStackX_8;
    uint64_t auStackX_10 [2];
    ulong *puStackX_20;
    int64_t var_c30h;
    int64_t var_c38h;
    uchar auStack_ce8 [16];
    uchar auStack_cd8 [21];
    char cStack_cc3;
    uchar uStack_cbc;
    
    iVar3 = 0;
    uStackX_8 = 0xca9;
    auStackX_10[0] = arg2 & 0xffffffff00000000;
    iVar1 = (**(*0x121e0 + 0xd0))(0x12090,0,&puStackX_20);
    if ((-1 < iVar1) && (iVar1 = (**(*0x121e0 + 0xd0))(0x12020,0,0x121c0), -1 < iVar1)) {
        if (*0x121e0 == 0) {
            *0x121b8 = 0;
        }
        else {
            iVar1 = *(*0x121e0 + 0xa0);
            for (iVar4 = *(*0x121e0 + 0x98); iVar4 != 0; iVar4 = iVar4 + -1) {
                if ((iVar1 == 0x12070) || (iVar2 = fcn.00011000(iVar1,0x12070,0x10), iVar2 == 0)) {
                    iVar3 = *(iVar1 + 0x10);
                    break;
                }
                iVar1 = iVar1 + 0x18;
            }
            *0x121b8 = iVar3;
            if (iVar3 != 0) {
                iVar3 = (**(iVar3 + 0x48))(L"Setup",0x12030,auStackX_10,&uStackX_8,auStack_cd8);
                if ((-1 < iVar3) && (cStack_cc3 != '\0')) {
                    *0x121c9 = uStack_cbc;
                    auStackX_10[1] = 0x35;
                    iVar3 = (**puStackX_20)(puStackX_20,0x11758,auStackX_10 + 1,auStack_ce8);
                    if (iVar3 < 0) {
                        return 0;
                    }
                    return iVar3;
                }
                return 0;
            }
        }
        iVar1 = -0x7ffffffffffffff2;
    }
    return iVar1;
}


/* fcn.000110f0 @ 0x110f0 */

void fcn.000110f0(int64_t arg1,int64_t arg2)

{
    *0x1094 = *(arg1 + 0x50);
    //WARNING: Could not recover jumptable at 0x00011199. Too many branches
    //WARNING: Treating indirect jump as call
    (**(arg1 + 0x48))(arg1,arg2);
    return;
}


/* fcn.00011bc4 @ 0x11bc4 */

void fcn.00011bc4(void)

{
    char cVar1;
    
    cVar1 = fcn.00011b50(*0x12300);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x00011bea. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x121e0 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00011bf9. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x121d8 + 0x48))(*0x12300);
    return;
}


/* fcn.00011b50 @ 0x11b50 */

uint64_t fcn.00011b50(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x122f8 != 0) {
        puVar2 = *0x12300 + 8;
        in_RAX = *0x12300;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x122f8);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00011500 @ 0x11500 */

uint64_t fcn.00011500(void)

{
    uint32_t uVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint auStackX_8 [2];
    char cStackX_10;
    char cStackX_11;
    uint8_t uStackX_14;
    ulong uStackX_18;
    int64_t var_28h_2;
    uint32_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    uchar auStack_48 [24];
    int64_t var_28h;
    
    puVar2 = *0x121a0;
    var_28h_2 = 6;
    uStackX_18 = 0x18;
    uVar3 = **0x121a0;
    auStackX_8[0] = 0;
    uVar4 = (***0x121c0)(L"AMITCGPPIVAR",0x12000,auStackX_8,&uStackX_18,auStack_48);
    if (-1 < uVar4) {
        auStackX_8[0] = 0;
        uVar4 = (***0x121c0)(L"TPMPERBIOSFLAGS",0x12010,auStackX_8,&var_28h_2,&cStackX_10);
        if (-1 < uVar4) {
            if (uVar3 < 0x80) {
                if (uVar3 == 0) goto code_r0x000115ae;
                uVar4 = uVar3 - 0x23;
                if (((((0x3c < uVar3 - 0x23) && (uVar4 = uVar3 - 0x66, 0x19 < uVar3 - 0x66)) &&
                     ((uVar3 != 0xc || (*0x121c9 != '\x01')))) &&
                    ((uVar3 != 0xd && ((uVar3 != 0x13 || (*0x121c9 != '\x01')))))) &&
                   (((uVar3 != 0x14 || (*0x121c9 != '\x01')) && (uVar3 != 0x18)))) {
                    uVar1 = uVar3 - 0x1b;
                    uVar4 = uVar1;
                    if ((((7 < uVar1) &&
                         ((uVar4 = CONCAT31(uVar1 >> 8,*0x121c8), uVar3 != 0x60 || (*0x121c8 != '\0')))) &&
                        ((uVar3 != 0x61 || (*0x121c8 != '\0')))) &&
                       (((((uVar3 != 0x62 || (*0x121c8 != '\0')) && ((uVar3 != 99 || (*0x121c8 != '\0')))) &&
                         ((uVar3 != 100 || (*0x121c8 != '\0')))) && ((uVar3 != 0x65 || (*0x121c8 != '\0')))))) {
                        if ((uVar3 - 5 & 0xffffffef) == 0) {
code_r0x00011720:
                            uVar3 = 4 - (cStackX_11 != '\x01');
                            puVar2[6] = uVar3;
                            return uVar3;
                        }
                        uVar4 = uVar3 - 0xe;
                        if ((uVar3 - 0xe & 0xfffffff7) == 0) {
                            if ((cStackX_11 != '\x01') || (cStackX_10 != '\x01')) goto code_r0x0001173e;
                        }
                        else if (uVar3 != 0xf) {
                            cStackX_11 = *0x121c9;
                            if (uVar3 == 0x10) goto code_r0x00011720;
                            if (uVar3 != 0x11) {
                                if (uVar3 == 0x12) {
code_r0x0001173e:
                                    puVar2[6] = 3;
                                    return uVar4;
                                }
                                if (uVar3 != 0x13) {
                                    if ((uVar3 == 0x14) || (uVar3 == 0x19)) goto code_r0x0001173e;
                                    if (uVar3 != 0x1a) {
                                        if (uVar3 == 0x17) {
                                            uStackX_14 = uStackX_14 & 0x10;
                                        }
                                        else if (uVar3 == 0x60) {
                                            uStackX_14 = uStackX_14 & 0x20;
                                        }
                                        else {
                                            if (uVar3 != 0x61) {
                                                if (uVar3 != 0x62) {
                                                    if (uVar3 != 99) {
                                                        if (uVar3 == 100) goto code_r0x000115ae;
                                                        cStackX_11 = cStackX_10;
                                                        if (uVar3 != 0x65) goto code_r0x00011720;
                                                    }
                                                    goto code_r0x0001173e;
                                                }
                                                goto code_r0x000115ae;
                                            }
                                            uStackX_14 = uStackX_14 & 0x40;
                                        }
                                        puVar2[6] = 4 - (uStackX_14 != 0);
                                        return -uStackX_14;
                                    }
                                }
                            }
                        }
code_r0x000115ae:
                        puVar2[6] = 4;
                        return uVar4;
                    }
                }
            }
            puVar2[6] = 0;
            return uVar4;
        }
    }
    puVar2[6] = 2;
    return uVar4;
}


/* fcn.0001135c @ 0x1135c */

void fcn.0001135c(void)

{
    uint32_t *puVar1;
    int64_t iVar2;
    uint32_t uStack_28;
    uint32_t uStack_24;
    uint uStack_20;
    uint uStack_1c;
    uint uStack_18;
    uint32_t uStack_14;
    
    puVar1 = *0x121a0;
    uStack_28 = **0x121a0;
    if (((((((uStack_28 - 0x23 < 0x3d) || (uStack_28 - 0x66 < 0x1a)) || ((uStack_28 == 0xc && (*0x121c9 == '\x01')))) ||
          ((uStack_28 == 0xd || ((uStack_28 == 0x13 && (*0x121c9 == '\x01')))))) ||
         (((uStack_28 == 0x14 && (*0x121c9 == '\x01')) || ((uStack_28 == 0x18 || (uStack_28 - 0x1b < 8)))))) ||
        ((uStack_28 == 0x60 && (*0x121c8 == '\0')))) ||
       ((((uStack_28 == 0x61 && (*0x121c8 == '\0')) || ((uStack_28 == 0x62 && (*0x121c8 == '\0')))) ||
        ((((uStack_28 == 99 && (*0x121c8 == '\0')) || ((uStack_28 == 100 && (*0x121c8 == '\0')))) ||
         (((uStack_28 == 0x65 && (*0x121c8 == '\0')) || (0x7f < uStack_28)))))))) {
        (*0x121a0)[6] = 1;
        return;
    }
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = (*0x121a0)[5];
    uStack_24 = uStack_28;
    iVar2 = (**(*0x121c0 + 0x10))(L"AMITCGPPIVAR",0x12000,7,0x18,&uStack_28);
    if (iVar2 == -0x7ffffffffffffffe) {
        iVar2 = (**(*0x121c0 + 0x10))(L"AMITCGPPIVAR",0x12000,0,0,0);
        if (iVar2 < 0) goto code_r0x000114b5;
        iVar2 = (**(*0x121c0 + 0x10))(L"AMITCGPPIVAR",0x12000,7,0x18,&uStack_28);
    }
    if (-1 < iVar2) {
        return;
    }
code_r0x000114b5:
    puVar1[6] = 2;
    return;
}


/* fcn.00011000 @ 0x11000 */

int64_t fcn.00011000(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    char cVar2;
    char *pcVar3;
    char *pcVar4;
    
    //[00] -r-x section size 4096 named .text
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


