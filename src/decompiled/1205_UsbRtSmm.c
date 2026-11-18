// decompiled by r2ghidra: 1205_UsbRtSmm.pe32
// functions: 250

/* entry0 @ 0x112a4 */

int64_t entry0(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t arg1;
    
    fcn.00011318(param_1,param_2);
    arg1 = 0x2e8a0;
    *0x2e9a0 = -0x7fffffffffffffff;
    iVar1 = fcn.000110e0(0x2e8a0);
    if (iVar1 == 0) {
        iVar1 = fcn.0002c520(arg1,param_2);
        if ((-1 < iVar1) || (*0x2e9a0 < 0)) {
            *0x2e9a0 = iVar1;
        }
        fcn.000111b0(0x2e8a0,-1);
    }
    iVar1 = *0x2e9a0;
    if (*0x2e9a0 < 0) {
        fcn.0002bacc();
    }
    return iVar1;
}


/* fcn.0002ba54 @ 0x2ba54 */

void fcn.0002ba54(void)

{
    return;
}


/* fcn.00011318 @ 0x11318 */

void fcn.00011318(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint16_t *puVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint64_t noname_0;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    
    *0x2e818 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x2e810 = arg2;
    uStackX_8 = arg1;
    (**(*0x2e818 + 0x140))(0x2e0b0,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x2e820);
    (**(*0x2e818 + 0x140))(0x2e0c0,0,aiStackX_18);
    uStackX_8 = 0;
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,0);
    *0x38db8 = fcn.0002ba9c();
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,*0x38db8);
    *0x38db0 = uStackX_8 >> 5;
    fcn.0002bb08();
    iVar4 = (**(*0x2e820 + 0xd0))(0x2e070,0,0x2e830);
    if (iVar4 < 0) {
        *0x2e830 = NULL;
    }
    puVar5 = fcn.0002bb08();
    do {
        uVar1 = *puVar5;
        noname_0 = uVar1;
        if (uVar1 == 0xffff) {
            puVar5 = NULL;
code_r0x00011435:
            if (puVar5 == NULL) {
                uVar6 = fcn.000112a0();
                fcn.00011290();
                uVar2 = in(0x1808);
                fcn.00011270(noname_0,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar7 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar7 >> 0x17 & 1) != 0) break;
                    func_0x00011260();
                }
                fcn.00011270(uVar7,0x1808);
                if ((uVar6 >> 9 & 1) == 0) {
                    fcn.00011290();
                }
                else {
                    fcn.00011280();
                }
                return;
            }
            if ((*0x2e478 == *(puVar5 + 4)) && (*0x2e480 == *(puVar5 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x00011435;
        puVar5 = puVar5 + puVar5[1];
    } while( true );
}


/* fcn.000110e0 @ 0x110e0 */

ulong fcn.000110e0(int64_t arg1)

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
    
    fcn.0002ba54();
    *(arg1 + 0xf8) = 0;
    if ((*0x2e550 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.0002c520 @ 0x2c520 */

void fcn.0002c520(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uStackX_8;
    ulong *puStackX_10;
    uint64_t uStackX_18;
    ulong *puStackX_20;
    ulong uStack_18;
    uchar auStack_10 [8];
    
    uStackX_8 = 0;
    uVar1 = 0;
    uStack_18 = 0;
    puStackX_10 = arg2;
    fcn.00011040(0x2ea00,0x18);
    iVar2 = (**(*0x2e818 + 0x140))(0x2e030,0,&puStackX_10);
    if (-1 < iVar2) {
        *0x39420 = *puStackX_10;
    }
    fcn.000114f8();
    iVar2 = (**(*0x2e820 + 0xd0))(0x2e0a0,0,0x2e7b0);
    if (iVar2 < 0) {
        (**(*0x2e820 + 0xc0))(0x2e0a0,0x2c9f0,auStack_10);
    }
    if (*(*0x39420 + 0x6c6) == '\0') {
        (**(*0x2e820 + 0xd0))(0x2e010,0,0x2e7c8);
        iVar2 = (**(*0x2e820 + 0xd0))(0x2e020,0,0x2e7a0);
        if (iVar2 == 0) {
            **0x39420 = **0x39420 | 8;
            if (*0x2e7b0 != 0) {
                uVar1 = (**(*0x2e7b0 + 0x10))(*0x2e7b0);
            }
            if ((uVar1 & 1) != 0) {
                **0x39420 = **0x39420 | 0x100;
            }
            goto code_r0x0002c65a;
        }
    }
    *0x2e7a0 = 0x2e240;
    *0x2e7c8 = 0x2e260;
code_r0x0002c65a:
    if (((*(*0x39420 + 0x6c9) & 0x4000) == 0) && (iVar2 = fcn.0002d72c(), iVar2 < 0)) {
        return;
    }
    iVar2 = (**(*0x2e820 + 0xd0))(0x2e0d0,0,&puStackX_20);
    if (-1 < iVar2) {
        uStackX_18 = *(*0x39420 + 0x71a);
        (**puStackX_20)(puStackX_20,0x2c71c,&uStackX_18,&uStackX_8);
        *0x2ea00 = fcn.00012898;
        *0x2ea08 = 0x2e170;
        *0x2ea10 = 0x2e0f0;
        (**(*0x2e820 + 0xa8))(&uStack_18,0x2e040,0,0x2ea00);
    }
    return;
}


/* fcn.000111b0 @ 0x111b0 */

void fcn.000111b0(int64_t arg1,int64_t arg2)

{
    *0x1094 = *(arg1 + 0x50);
    //WARNING: Could not recover jumptable at 0x00011259. Too many branches
    //WARNING: Treating indirect jump as call
    (**(arg1 + 0x48))(arg1,arg2);
    return;
}


/* fcn.0002bacc @ 0x2bacc */

void fcn.0002bacc(void)

{
    char cVar1;
    
    cVar1 = fcn.0002ba58(*0x38db8);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x0002baf2. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x2e820 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x0002bb01. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x2e818 + 0x48))(*0x38db8);
    return;
}


/* fcn.0002ba58 @ 0x2ba58 */

uint64_t fcn.0002ba58(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x38db0 != 0) {
        puVar2 = *0x38db8 + 8;
        in_RAX = *0x38db8;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x38db0);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.0002ba9c @ 0x2ba9c */

ulong fcn.0002ba9c(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x2e820 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.0002bb08 @ 0x2bb08 */

int64_t fcn.0002bb08(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x2e828 == 0) {
        *0x2e828 = 0;
        if (*(*0x2e810 + 0x68) != 0) {
            piVar2 = *(*0x2e810 + 0x70);
            do {
                if ((*0x2e080 == *piVar2) && (*0x2e088 == piVar2[1])) {
                    *0x2e828 = (*(*0x2e810 + 0x70))[uVar1 * 3 + 2];
                    return *0x2e828;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x2e810 + 0x68));
        }
    }
    return *0x2e828;
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


/* fcn.00011270 @ 0x11270 */

uint64_t fcn.00011270(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00011262 @ 0x11262 */

void fcn.00011262(void)

{
    return;
}


/* fcn.00011280 @ 0x11280 */

void fcn.00011280(void)

{
    return;
}


/* fcn.00014184 @ 0x14184 */

int64_t fcn.00014184(int64_t arg1)

{
    uint32_t *puVar1;
    uint64_t uVar2;
    bool bVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    uint16_t uVar6;
    uint16_t uVar7;
    uint16_t uVar8;
    uint8_t uVar9;
    uint16_t uVar10;
    uint64_t uVar11;
    uint16_t uVar12;
    uint16_t uVar13;
    uint32_t uVar14;
    
    uVar7 = 0;
    uVar9 = 0;
    bVar3 = false;
    uVar12 = 0;
    uVar10 = 0;
    if (arg1 != 0) {
        uVar11 = arg1 + 1;
        if ((arg1 & 1U) == 0) {
            uVar11 = arg1 & 0xffff;
        }
        uVar5 = *(*0x39420 + 0x5ae);
        uVar2 = (*(*0x39420 + 0x5b2) >> 2) / uVar5;
        if (uVar5 != 0) {
            uVar6 = uVar12;
            uVar13 = uVar12;
            do {
                if (bVar3) goto code_r0x000142bf;
                if (uVar11 < 0x81) {
                    uVar10 = 0;
                }
                uVar8 = 0;
                uVar14 = uVar2;
                if (uVar14 != 0) {
                    uVar4 = uVar7;
                    do {
                        uVar6 = uVar4;
                        uVar9 = 0;
                        do {
                            uVar12 = uVar12 + 1;
                            if ((*(*(*0x2e7c0 + 0x1a) + uVar6 * 4) & 1LL << (uVar9 & 0x3f)) == 0) {
                                uVar10 = 0;
                            }
                            else {
                                uVar10 = uVar10 + 1;
                                if (uVar10 == uVar11) {
                                    uVar12 = uVar12 - uVar10;
                                    bVar3 = true;
                                    goto code_r0x0001429a;
                                }
                            }
                            uVar9 = uVar9 + 1;
                        } while (uVar9 < 0x20);
                        uVar8 = uVar8 + 1;
                        uVar4 = uVar6 + 1;
                    } while (uVar8 < uVar14);
                }
code_r0x0001429a:
                uVar13 = uVar13 + 1;
                uVar7 = uVar7 + uVar2;
            } while (uVar13 < uVar5);
            if (bVar3) {
code_r0x000142bf:
                do {
                    uVar10 = uVar9 + 1;
                    if ((uVar11 & 0xffff) - 1 <= uVar9) {
                        uVar10 = uVar11;
                    }
                    uVar9 = (uVar9 - uVar10) + 1;
                    uVar5 = -(uVar10 + uVar9 < 0x20) & -1 << (uVar10 + uVar9 & 0x1f);
                    if (uVar9 != 0) {
                        uVar5 = uVar5 | ~(-1 << (uVar9 & 0x1f));
                    }
                    uVar9 = 0x1f;
                    puVar1 = *(*0x2e7c0 + 0x1a) + uVar6 * 4;
                    *puVar1 = *puVar1 & uVar5;
                    uVar6 = uVar6 - 1;
                    uVar10 = uVar11 - uVar10;
                    uVar11 = uVar10;
                } while (uVar10 != 0);
                return uVar12 * 0x20 + *(*0x2e7c0 + 0x12);
            }
        }
    }
    return 0;
}


/* fcn.00014358 @ 0x14358 */

ulong fcn.00014358(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    uint64_t arg1_00;
    int16_t iVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint8_t uVar5;
    uint16_t uVar6;
    uint16_t uVar7;
    uint64_t uVar8;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar8 = arg2 + 1;
    if ((arg2 & 1U) == 0) {
        uVar8 = arg2 & 0xffff;
    }
    iVar1 = uVar8;
    if (((arg1_00 != 0) && (*(*0x2e7c0 + 0x12) <= arg1_00)) &&
       (uVar4 = *(*0x39420 + 0x5ae) * 0x80, arg1_00 <= (uVar4 + 1) * 0x20 + *(*0x2e7c0 + 0x12))) {
        uVar6 = arg1 - *(*0x2e7c0 + 0x12);
        uVar7 = uVar6 >> 5;
        if (uVar7 < uVar4) {
            uVar2 = 0;
            uVar6 = uVar6 >> 10;
            uVar5 = uVar7 & 0x1f;
            do {
                uVar3 = uVar2 + 1;
                *(*(*0x2e7c0 + 0x1a) + uVar6 * 4) = *(*(*0x2e7c0 + 0x1a) + uVar6 * 4) | 1 << (uVar2 + uVar5 & 0x1f);
                iVar1 = iVar1 + -1;
                uVar2 = uVar3;
                if ((uVar3 + uVar5 != 0) && ((uVar3 + uVar5 & 0x1f) == 0)) {
                    uVar6 = uVar6 + 1;
                    uVar2 = 0;
                    uVar5 = 0;
                }
            } while (iVar1 != 0);
            if ((uVar8 & 0xffff) != 0) {
                fcn.00011040(arg1_00,(uVar8 & 0xffff) << 5);
            }
            return 0;
        }
    }
    return 0xff;
}


/* fcn.0001dcf8 @ 0x1dcf8 */

uint64_t fcn.0001dcf8(void)

{
    uint64_t uVar1;
    
    *0x38f88 = 0x1de78;
    *0x38f90 = 0x1e088;
    *0x38f98 = 0x1e198;
    *0x38fa0 = fcn.0001e29c;
    *0x38fa8 = 0x14f7c;
    *0x38fb0 = 0x1e2d0;
    *0x38fb8 = 0x1e3b4;
    *0x38fc0 = 0x1e480;
    *0x38fc8 = 0x1e4c8;
    *0x38fd0 = 0x1e744;
    *0x38fd8 = 0x1ec28;
    *0x38fe0 = 0x15bb4;
    *0x38fe8 = 0x1ef84;
    *0x38ff0 = 0x1f1c0;
    *0x38ff8 = 0x1f2e8;
    *0x39008 = 0x1f51c;
    *0x39010 = 0x1f5e0;
    *0x39000 = 0x14f7c;
    *0x39018 = 0x14f7c;
    *0x39020 = 0x14f7c;
    *0x39028 = 0x14f7c;
    *0x39030 = 0x14f7c;
    *0x39038 = 0x1e584;
    *0x39040 = 0x1e64c;
    fcn.00014478(0x20268);
    fcn.00014478(0x20210);
    uVar1 = fcn.00014478(0x20048);
    return uVar1 & 0xffffffffffffff00;
}


/* fcn.00014478 @ 0x14478 */

int fcn.00014478(uint32_t arg1)

{
    uint in_register_0000000c;
    uint8_t uVar1;
    unkbyte7 in_RDX;
    unkbyte7 in_R8;
    
    uVar1 = 0;
    do {
        if (*(uVar1 * 8 + 0x38de0) == 0) break;
        if (*(uVar1 * 8 + 0x38de0) == CONCAT44(in_register_0000000c,arg1)) goto code_r0x000144ab;
        uVar1 = uVar1 + 1;
    } while (uVar1 < 0x32);
    if (uVar1 == 0x32) {
        return 0;
    }
    *(uVar1 * 8 + 0x38de0) = CONCAT44(in_register_0000000c,arg1);
code_r0x000144ab:
    return CONCAT71(in_R8,1) + CONCAT71(in_RDX,uVar1);
}


/* fcn.00015a8c @ 0x15a8c */

ulong fcn.00015a8c(int64_t arg1)

{
    *(arg1 + 8) = 0x14f7c;
    *(arg1 + 0x10) = 0x14f7c;
    *(arg1 + 0x18) = 0x14f7c;
    *(arg1 + 0x20) = 0x14f7c;
    *(arg1 + 0x28) = 0x14f7c;
    *(arg1 + 0x30) = 0x14f7c;
    *(arg1 + 0x38) = 0x15bb4;
    *(arg1 + 0x40) = 0x14f7c;
    *(arg1 + 0x48) = 0x14f7c;
    *(arg1 + 0x50) = 0x15bb4;
    *(arg1 + 0x58) = 0x15bb4;
    *(arg1 + 0x60) = 0x15bb4;
    *(arg1 + 0x68) = 0x15bb4;
    *(arg1 + 0x70) = 0x14f7c;
    *(arg1 + 0x78) = 0x14f7c;
    *(arg1 + 0x88) = 0x14f7c;
    *(arg1 + 0x90) = 0x14f7c;
    *(arg1 + 0x80) = 0x14f7c;
    *(arg1 + 0x98) = 0x14f7c;
    *(arg1 + 0xa0) = 0x14f7c;
    *(arg1 + 0xa8) = 0x14f7c;
    *(arg1 + 0xb0) = 0x14f7c;
    *(arg1 + 0xb8) = 0x14f7c;
    *(arg1 + 0xc0) = 0x14f7c;
    return 0x14f00;
}


/* fcn.000180c0 @ 0x180c0 */

uint64_t fcn.000180c0(int64_t arg1)

{
    uint64_t uVar1;
    
    *(arg1 + 8) = fcn.00018220;
    *(arg1 + 0x10) = fcn.00018438;
    *(arg1 + 0x18) = 0x19bb0;
    *(arg1 + 0x20) = fcn.00018630;
    *(arg1 + 0x28) = 0x18670;
    *(arg1 + 0x30) = fcn.000186c0;
    *(arg1 + 0x38) = 0x189a4;
    *(arg1 + 0x40) = 0x18ae8;
    *(arg1 + 0x48) = 0x14f7c;
    *(arg1 + 0x50) = 0x18d08;
    *(arg1 + 0x58) = 0x19060;
    *(arg1 + 0x60) = 0x15bb4;
    *(arg1 + 0x68) = 0x19404;
    *(arg1 + 0x70) = 0x197fc;
    *(arg1 + 0x78) = 0x1964c;
    *(arg1 + 0x88) = 0x19a54;
    *(arg1 + 0x90) = 0x19af0;
    *(arg1 + 0x80) = 0x14f7c;
    *(arg1 + 0x98) = 0x14f7c;
    *(arg1 + 0xa0) = 0x14f7c;
    *(arg1 + 0xa8) = 0x18b30;
    *(arg1 + 0xb0) = 0x14f7c;
    *(arg1 + 0xb8) = 0x18c08;
    *(arg1 + 0xc0) = 0x18c90;
    fcn.00014478(0x1a1c0);
    fcn.00014478(0x1a1b8);
    fcn.00014478(0x198f8);
    uVar1 = fcn.00014478(0x18570);
    return uVar1 & 0xffffffffffffff00;
}


/* fcn.00025668 @ 0x25668 */

uint64_t fcn.00025668(int64_t arg1)

{
    uint64_t uVar1;
    
    *(arg1 + 8) = fcn.00025864;
    *(arg1 + 0x10) = fcn.00025ee0;
    *(arg1 + 0x18) = fcn.00025d0c;
    *(arg1 + 0x20) = 0x261d8;
    *(arg1 + 0x28) = 0x26218;
    *(arg1 + 0x30) = fcn.00026258;
    *(arg1 + 0x38) = 0x26738;
    *(arg1 + 0x40) = 0x2690c;
    *(arg1 + 0x48) = 0x14f7c;
    *(arg1 + 0x50) = 0x26e8c;
    *(arg1 + 0x58) = 0x27270;
    *(arg1 + 0x60) = 0x27c00;
    *(arg1 + 0x68) = 0x27e44;
    *(arg1 + 0x70) = 0x28130;
    *(arg1 + 0x78) = 0x28238;
    *(arg1 + 0x88) = 0x28444;
    *(arg1 + 0x90) = 0x284ec;
    *(arg1 + 0x80) = 0x14f7c;
    *(arg1 + 0x98) = 0x14f7c;
    *(arg1 + 0xa0) = 0x14f7c;
    *(arg1 + 0xa8) = 0x269b0;
    *(arg1 + 0xb0) = 0x14f7c;
    *(arg1 + 0xb8) = 0x26be4;
    *(arg1 + 0xc0) = 0x26b90;
    fcn.00014478(0x294b0);
    uVar1 = fcn.00014478(0x292f4);
    return uVar1 & 0xffffffffffffff00;
}


/* fcn.00020494 @ 0x20494 */

ulong fcn.00020494(int64_t arg1)

{
    *(arg1 + 8) = fcn.000205bc;
    *(arg1 + 0x10) = fcn.00020bd0;
    *(arg1 + 0x18) = fcn.00020e40;
    *(arg1 + 0x20) = 0x14f7c;
    *(arg1 + 0x28) = 0x14f7c;
    *(arg1 + 0x30) = fcn.00021d68;
    *(arg1 + 0x38) = fcn.0002270c;
    *(arg1 + 0x40) = 0x22ac0;
    *(arg1 + 0x48) = 0x14f7c;
    *(arg1 + 0x50) = 0x23178;
    *(arg1 + 0x58) = 0x235c8;
    *(arg1 + 0x60) = 0x23b50;
    *(arg1 + 0x68) = 0x23eec;
    *(arg1 + 0x70) = 0x241c0;
    *(arg1 + 0x78) = 0x24384;
    *(arg1 + 0x88) = 0x2455c;
    *(arg1 + 0x90) = 0x24604;
    *(arg1 + 0x80) = 0x24734;
    *(arg1 + 0x98) = 0x24cd4;
    *(arg1 + 0xa0) = 0x24e04;
    *(arg1 + 0xa8) = 0x22cfc;
    *(arg1 + 0xb0) = fcn.00024fcc;
    *(arg1 + 0xb8) = 0x22d64;
    *(arg1 + 0xc0) = 0x22f38;
    return 0x22f00;
}


/* fcn.00012e58 @ 0x12e58 */

void fcn.00012e58(int64_t arg1)

{
    int64_t arg1_00;
    uint8_t uVar1;
    int64_t iVar2;
    
    uVar1 = 0;
    iVar2 = *0x2e7c0;
    if (*(*0x2e7c0 + 0x10) != '\0') {
        do {
            arg1_00 = *(*0x2e7e0 + uVar1 * 8);
            if (((arg1_00 != 0) && (*(arg1_00 + 1) == arg1)) && ((*(arg1_00 + 0x58) & 1) != 0)) {
                fcn.0002be30(arg1_00);
                iVar2 = *0x2e7c0;
            }
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(iVar2 + 0x10));
    }
    return;
}


/* fcn.0002c23c @ 0x2c23c */

ulong fcn.0002c23c(void)

{
    ulong *puVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *puVar4;
    int64_t arg1;
    int64_t arg1_00;
    uint64_t uVar5;
    int64_t iVar6;
    char in_stack_00000028;
    
    if ((in_stack_00000028 == '\x01') && ((*0x38bf8 & 3) != 3)) {
        uVar5 = 0;
        if (*0x2e840 == 0) {
            *0x2e840 = *0x39420;
        }
        if (*0x2e850 == 0) {
            *0x2e850 = *0x2e7c0;
        }
        if (*0x2e838 == 0) {
            *0x2e838 = *0x2e7e0;
        }
        iVar6 = 0x2e7e0;
        if (*0x2e858 != 0) {
            iVar6 = *0x2e858;
        }
        *0x2e858 = iVar6;
        if (*0x2e7c0 != 0x352e0) {
            section..text(0x352e0,*0x2e7c0,0x3da);
        }
        *0x2e7c0 = 0x352e0;
        if (*0x39420 != 0x38100) {
            section..text(0x38100,*0x39420,0x92f);
        }
        iVar6 = 0x14;
        *0x38856 = 0x38856;
        puVar4 = 0x38871;
        *0x3885e = 0x38856;
        do {
            if ((*(puVar4 + 1) != 0) && (*(puVar4 + 10) != 0)) {
                puVar1 = puVar4 + -1;
                *puVar1 = 0x38856;
                *puVar4 = *0x3885e;
                **0x3885e = puVar1;
                *0x3885e = puVar1;
            }
            puVar4 = puVar4 + 0x16;
            iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        *(*0x2e7c0 + 0x52) = 0x38794;
        *(*0x2e7c0 + 0x5a) = 0x38794;
        fcn.00011080(0x386e6,0x80,0);
        *(*0x2e7c0 + 0x22) = 0x386e6;
        *(*0x2e7c0 + 0x2a) = 0x386e6;
        fcn.00011080(0x386d6,0x10,0);
        *(*0x2e7c0 + 0x32) = 0x386d6;
        fcn.00011040(0x386c6,0x10);
        fcn.00011040(0x386b6,0x10);
        fcn.00011040(0x38774,0x10);
        *0x38100 = *0x38100 & 0xfffffffd;
        *0x39420 = 0x38100;
        *0x38be8 = 0x38100;
        if (*(*0x2e7c0 + 0x10) != '\0') {
            arg1_00 = 0x2ea20;
            puVar4 = 0x38a40;
            arg1 = 0x356c0;
            iVar6 = *0x2e7c0;
            do {
                iVar2 = *(*(iVar6 + 8) + uVar5 * 8);
                if (arg1 != iVar2) {
                    section..text(arg1,iVar2,0xd8);
                    iVar6 = *0x2e7c0;
                }
                *(uVar5 * 8 + 0x38c20) = arg1;
                iVar2 = *(arg1 + 0x60);
                if (iVar2 != 0) {
                    if (arg1_00 != iVar2) {
                        section..text(arg1_00,iVar2,0x218);
                    }
                    iVar6 = *(uVar5 * 8 + 0x38c20);
                    uVar3 = *(iVar6 + 0x60);
                    *(iVar6 + 0x60) = arg1_00;
                    iVar6 = *0x2e7c0;
                    *puVar4 = uVar3;
                    puVar4 = puVar4 + 1;
                    arg1_00 = arg1_00 + 0x218;
                }
                uVar5 = uVar5 + 1;
                arg1 = arg1 + 0xd8;
            } while (uVar5 < *(iVar6 + 0x10));
        }
        *0x38bf8 = *0x38bf8 | 3;
        *0x2e7e0 = 0x38c20;
        *0x352e8 = 0x38c20;
        *0x38bf0 = 0x38c20;
        *0x387a1 = 0x352e0;
        *0x2e7a8 = 1;
    }
    return 0;
}


/* fcn.0001467c @ 0x1467c */

uint64_t fcn.0001467c(uint32_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int64_t iVar1;
    bool bVar2;
    char cVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    char cVar7;
    uint8_t uVar8;
    bool bVar9;
    
    bVar2 = false;
    uVar5 = 0;
    cVar3 = arg1;
    cVar7 = arg3;
    if (cVar3 == -0x80) {
        if (arg2 == 0) {
            if (cVar7 == '~') {
                return *0x39420 + 0x65;
            }
            if (cVar7 == '}') {
                return *0x39420 + 0x225;
            }
            if (cVar7 == '\x7f') {
                return *0x39420 + 0x3e5;
            }
            if (cVar7 != '\0') {
                return (arg3 & 0xff) * 0x1c0 + *(*0x2e7c0 + 0x42);
            }
        }
        else {
            uVar5 = 1;
            if (1 < *(*0x39420 + 0x716)) {
                do {
                    if (uVar5 * 0x1c0 + *(*0x2e7c0 + 0x42) == arg2) {
                        return uVar5;
                    }
                    uVar8 = uVar5 + 1;
                    uVar5 = uVar8;
                } while (uVar8 < *(*0x39420 + 0x716));
            }
        }
    }
    else {
        uVar6 = 1;
        if (1 < *(*0x39420 + 0x716)) {
            do {
                iVar4 = uVar6 * 0x1c0;
                if (arg2 == 0) {
                    iVar1 = *(*0x2e7c0 + 0x42);
                    if (cVar3 == '1') {
                        if ((*(iVar4 + 0x57 + iVar1) == cVar7) &&
                           (((arg4 == 0 || (*(iVar4 + 0xb + iVar1) == *arg4)) && ((*(iVar4 + iVar1) & 2) != 0)))) {
                            uVar5 = uVar5 + 1;
                        }
                    }
                    else {
                        if ((*(iVar1 + iVar4) & 3) == 3) {
                            if (cVar3 == '\x10') {
                                if (*(iVar1 + 10 + iVar4) == cVar7) {
                                    if (arg4 != 0) goto code_r0x00014834;
                                    goto code_r0x00014843;
                                }
                            }
                            else {
                                if (cVar3 == ' ') {
                                    bVar9 = *(iVar1 + 4 + iVar4) == cVar7;
                                }
                                else {
                                    if (cVar3 == '0') {
                                        if ((*(iVar1 + 4 + iVar4) == cVar7) &&
                                           ((arg4 == 0 || (*(iVar1 + 0xb + iVar4) == *arg4)))) {
                                            uVar5 = uVar5 + 1;
                                        }
                                        goto code_r0x00014846;
                                    }
                                    if (cVar3 != '@') {
                                        return 0;
                                    }
                                    if (arg4 == 0) {
                                        return 0;
                                    }
code_r0x00014834:
                                    bVar9 = *(*0x2e7e0 + (*(iVar1 + 0xb + iVar4) - 1) * 8) == arg4;
                                }
                                if (bVar9) {
code_r0x00014843:
                                    bVar2 = true;
                                }
                            }
                        }
code_r0x00014846:
                        if (bVar2) {
                            return iVar4 + iVar1;
                        }
                    }
                }
                else if (iVar4 + *(*0x2e7c0 + 0x42) == arg2) {
                    arg2 = 0;
                }
                uVar8 = uVar6 + 1;
                uVar6 = uVar8;
            } while (uVar8 < *(*0x39420 + 0x716));
        }
        if (cVar3 - 0x30U < 2) {
            return uVar5;
        }
    }
    return 0;
}


/* fcn.0001ac4c @ 0x1ac4c */

int64_t fcn.0001ac4c(int64_t arg1)

{
    char cVar1;
    int iVar2;
    uchar *puVar3;
    int64_t iVar4;
    uint8_t uVar5;
    
    uVar5 = 0;
    do {
        puVar3 = fcn.00014184(1);
        if (puVar3 != NULL) {
            if (*0x2e7a9 != '\0') {
                iVar4 = fcn.0002bd04(*(*0x2e7c0 + 0x62) + 0x40,0xb);
                if ((iVar4 < 0) && (iVar4 != -0x7fffffffffffffeb)) goto code_r0x0001ad4e;
                *0x2e7a9 = '\0';
            }
            *puVar3 = 0x12;
            puVar3[4] = 0x24;
            iVar2 = fcn.0001abe0(arg1);
            fcn.00014358(puVar3,1);
            if (iVar2 == 0) {
                iVar4 = 0;
            }
            else {
                iVar4 = *(*0x2e7c0 + 0x62) + 0x40;
            }
            if (iVar4 != 0) {
                *(arg1 + 0x5e) = 0xffff;
                cVar1 = fcn.0001b9ac(arg1,iVar4);
                if (cVar1 == -1) {
                    iVar4 = 0;
                }
                return iVar4;
            }
        }
code_r0x0001ad4e:
        if (((*(*0x39420 + 0x6c2) & 1) == 0) || (uVar5 = uVar5 + 1, 1 < uVar5)) {
            return 0;
        }
    } while( true );
}


/* fcn.0001cef4 @ 0x1cef4 */

ulong fcn.0001cef4(uint32_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint in_register_0000000c;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    
    uVar1 = *(*0x2e7c0 + 0x12);
    uVar3 = (*(*0x39420 + 0x5ae) << 0xc) + uVar1;
    if (CONCAT44(in_register_0000000c,arg1) != 0) {
        uVar4 = *(*0x39420 + 0x716);
        uVar2 = 0;
        if (uVar4 != 0) {
            iVar5 = *(*0x2e7c0 + 0x42);
            do {
                if (CONCAT44(in_register_0000000c,arg1) == iVar5) break;
                uVar2 = uVar2 + 1;
                iVar5 = iVar5 + 0x1c0;
            } while (uVar2 < uVar4);
        }
        if ((uVar2 != uVar4) &&
           ((*(*0x39420 + 0x6cf) == '\0' ||
            ((((uVar2 = *(CONCAT44(in_register_0000000c,arg1) + 0x28), uVar2 == 0 ||
               ((uVar1 <= uVar2 && (uVar2 + 0x20 <= uVar3)))) &&
              ((uVar2 = *(CONCAT44(in_register_0000000c,arg1) + 0x20), uVar2 == 0 ||
               ((uVar1 <= uVar2 && (uVar2 + 0x20 <= uVar3)))))) &&
             ((uVar2 = *(CONCAT44(in_register_0000000c,arg1) + 0x108), uVar2 == 0 ||
              ((uVar1 <= uVar2 && (*(CONCAT44(in_register_0000000c,arg1) + 0x132) + uVar2 <= uVar3)))))))))) {
            return 0;
        }
    }
    return 0x800000000000000f;
}


/* fcn.0002bd04 @ 0x2bd04 */

int64_t fcn.0002bd04(void)

{
    int64_t iVar1;
    int64_t iVar2;
    
    if (*0x2e830 == NULL) {
        iVar1 = -0x7ffffffffffffff1;
    }
    else {
        iVar1 = (***0x2e830)();
    }
    iVar2 = -0x7ffffffffffffff1;
    if (iVar1 != -0x7fffffffffffffeb) {
        iVar2 = iVar1;
    }
    return iVar2;
}


/* fcn.0001abe0 @ 0x1abe0 */

uint64_t fcn.0001abe0(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t in_RDX;
    
    if (*(arg1 + 0x59) < 2) {
        uVar2 = fcn.0001cc80(arg1,in_RDX);
    }
    else if (*(arg1 + 0x59) == 0x50) {
        *(*0x39420 + 0x6c4) = 0;
        uVar1 = fcn.0001ca14(arg1,in_RDX);
        uVar2 = uVar1;
        *(*0x39420 + 0x6c4) = 1;
        fcn.0002bec8(*(*0x2e7e0 + (*(arg1 + 0xb) - 1) * 8));
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001ada8 @ 0x1ada8 */

uchar fcn.0001ada8(int64_t arg1)

{
    uint8_t uVar1;
    uchar uVar2;
    int64_t arg1_00;
    uint in_R8D;
    
    arg1_00 = fcn.0001467c(CONCAT71(arg1 >> 8,0x80),0,CONCAT31(in_R8D >> 8,*arg1),0);
    if (arg1_00 == 0) {
        uVar2 = 0xff;
    }
    else {
        uVar1 = *(arg1_00 + 0xa0);
        fcn.0001c47c(arg1_00);
        if (((*(arg1_00 + 0xa0) ^ uVar1) & 1) != 0) {
            *(arg1_00 + 0xa0) = *(arg1_00 + 0xa0) | 2;
        }
        *(arg1 + 1) = *(arg1_00 + 0xa0);
        if ((*(arg1_00 + 0xa0) & 2) != 0) {
            *(arg1_00 + 0xa0) = *(arg1_00 + 0xa0) & 0xfd;
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001c184 @ 0x1c184 */

ulong fcn.0001c184(int64_t arg1)

{
    uchar *puVar1;
    ulong uVar2;
    
    if ((*(arg1 + 0x7c) & 0x20) == 0) {
        puVar1 = fcn.00014184(1);
        if (puVar1 == NULL) {
            uVar2 = 0xff;
        }
        else {
            *puVar1 = 0x1b;
            puVar1[4] = 1;
            *(*0x39420 + 0x6ae) = 10000;
            fcn.0001abe0(arg1);
            fcn.00014358(puVar1,1);
            uVar2 = fcn.0001c364(arg1);
        }
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00012df0 @ 0x12df0 */

uint64_t fcn.00012df0(uint32_t arg1)

{
    unkuint3 Var1;
    uint16_t uVar2;
    char cVar3;
    unkuint7 Var5;
    uint64_t uVar4;
    char cVar6;
    
    uVar4 = arg1 >> 8;
    cVar3 = arg1 >> 8;
    uVar2 = arg1 >> 0x10;
    Var5 = uVar2;
    if (cVar3 == '(') {
        return CONCAT71(Var5,0xaa);
    }
    if (arg1 == '\a') {
        return CONCAT71(Var5,3);
    }
    cVar6 = arg1 >> 0x10;
    Var1 = uVar2;
    if ((cVar6 == -0x80) && (cVar3 == -0x80)) {
        return CONCAT21(uVar2,0x80);
    }
    if (cVar3 == '\x18') {
        return CONCAT71(Var5,0x11);
    }
    if (cVar3 == '\x06') {
        if (cVar6 == '\0') {
            return CONCAT71(Var5,2);
        }
    }
    else if (cVar3 == ':') {
        if (cVar6 == '\0') {
            return CONCAT71(Var5,0x31);
        }
    }
    else if (cVar3 == '\x11') {
        if (cVar6 == '\0') {
            return CONCAT71(Var5,4);
        }
        if (cVar6 == '\x06') {
            return CONCAT71(Var1,0x10);
        }
    }
    else {
        if (cVar3 == '0') {
            return CONCAT71(Var1,10);
        }
        uVar4 = CONCAT71(Var1,7);
        if (cVar3 - 0x20U < 7) {
            return uVar4;
        }
    }
    return CONCAT71(uVar4 >> 8,0x20);
}


/* fcn.00011e7c @ 0x11e7c */

void fcn.00011e7c(int64_t arg1)

{
    char *arg3;
    uint32_t *puVar1;
    uchar uVar2;
    int16_t iVar3;
    uint32_t arg1_00;
    uint8_t *arg1_01;
    ulong uVar4;
    uint64_t uVar5;
    ulong in_R8;
    
    puVar1 = *0x39420;
    arg3 = arg1 + 3;
    if ((((*arg3 != '~') || ((**0x39420 & 0x200) != 0)) && ((*arg3 != '}' || ((**0x39420 & 0x400) != 0)))) &&
       ((*arg3 != '\x7f' || ((**0x39420 & 0x800) != 0)))) {
        uVar4 = 0;
        arg1_01 = fcn.0001467c(CONCAT71(arg1 >> 8,0x80),0,CONCAT71(in_R8 >> 8,*arg3),0);
        if ((arg1_01 != NULL) && ((*arg1_01 & 2) != 0)) {
            if (((*(puVar1 + 0x6c9) & 0x400000) == 0) || (arg1_00 = fcn.0001c47c(arg1_01), arg1_00 == 0)) {
                uVar5 = CONCAT71(uVar4 >> 8,-((*(arg1_01 + 0x60) & 0xffffffff00000000) != 0)) & 0xffffffffffffff60;
                iVar3 = fcn.0001be14(arg1_01,CONCAT71(uVar5 >> 8,uVar5 + '('),arg3);
                if (iVar3 != 0) {
                    *(arg1 + 2) = 0;
                    return;
                }
                arg1_00 = *(arg1 + 4);
            }
            else {
                *(arg1 + 4) = arg1_00;
            }
            uVar2 = fcn.00012df0(arg1_00);
            *(arg1 + 2) = uVar2;
            return;
        }
        *(arg1 + 2) = 0x80;
        return;
    }
    *(arg1 + 2) = 0xaa;
    return;
}


/* fcn.0001c47c @ 0x1c47c */

uint32_t fcn.0001c47c(int64_t arg1)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uchar *puVar3;
    int64_t arg1_00;
    int64_t arg2;
    int16_t iVar4;
    char cVar5;
    char cVar6;
    char cVar7;
    
    uVar2 = 0;
    cVar5 = '\x03';
    cVar7 = '\x03';
    cVar6 = *(*0x39420 + 0x6ad);
    do {
        if (cVar6 == '\0') {
            return uVar2;
        }
        if ((*(arg1 + 0x7c) & 8) != 0) {
code_r0x0001c5ea:
            if (cVar6 == '\0') {
                return uVar2;
            }
            uVar1 = fcn.0001c834(arg1);
            return uVar1;
        }
        puVar3 = fcn.00014184(1);
        if (puVar3 == NULL) {
            return 0xff;
        }
        *puVar3 = 0;
        uVar2 = fcn.0001abe0(arg1);
        arg2 = 1;
        fcn.00014358(puVar3,1);
        if ((uVar2 == 0xff) || (*(arg1 + 0x59) < 2)) {
            uVar2 = fcn.0001c364(arg1);
        }
        if (uVar2 == '\0') goto code_r0x0001c5ea;
        iVar4 = uVar2;
        if (iVar4 == 0x2806) {
            if (*(arg1 + 0x58) == '\x04') {
code_r0x0001c555:
                fcn.0001c184(arg1);
            }
code_r0x0001c55d:
            arg1_00 = 100000;
        }
        else if (iVar4 == 0x3a02) {
            cVar5 = cVar5 + -1;
            if (cVar5 == '\0') {
                return uVar2;
            }
code_r0x0001c573:
            arg1_00 = 20000;
        }
        else {
            if (uVar2 == 0x20402) goto code_r0x0001c555;
            if (iVar4 == 0x1103) goto code_r0x0001c55d;
            if (uVar2 != 0x10402) {
                if (uVar2 == '\a') goto code_r0x0001c5ea;
                if ((uVar2 - 2 & 0xfb) != 0) {
                    return uVar2;
                }
            }
            if (uVar2 == 2) {
                cVar7 = cVar7 + -1;
                if (cVar7 == '\0') {
                    return 2;
                }
                goto code_r0x0001c573;
            }
            arg1_00 = 1000000;
        }
        fcn.0002bb74(arg1_00,arg2);
        cVar6 = cVar6 + -1;
    } while( true );
}


/* fcn.0001be14 @ 0x1be14 */

uint32_t fcn.0001be14(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int16_t *piVar1;
    bool bVar2;
    uint8_t *puVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    uint8_t *arg1_00;
    uint64_t uVar7;
    uint8_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    uint8_t uVar12;
    
    uVar8 = arg2;
    uVar11 = 0;
    if ((uVar8 == 0x8f) || (bVar2 = true, uVar8 == 0x2f)) {
        bVar2 = false;
    }
    if (*0x2e7a9 != '\0') {
        if (((bVar2) && (iVar6 = fcn.0002bd04(*(arg3 + 0x13),*(arg1 + 0x5e) * *(arg3 + 0xd)), iVar6 < 0)) &&
           (iVar6 != -0x7fffffffffffffeb)) {
            return 0;
        }
        *0x2e7a9 = '\0';
    }
    *(arg3 + 1) = 0;
    arg1_00 = fcn.00014184(1);
    if (arg1_00 == NULL) {
        return 0;
    }
    uVar12 = 0;
    do {
        *arg1_00 = uVar8;
        uVar7 = *(arg1 + 0x60) - *(arg3 + 0xd);
        uVar10 = *(arg3 + 5);
        if (uVar7 < *(arg3 + 5)) {
            uVar10 = uVar7;
        }
        if ((*(arg1 + 0x74) == '\x04') && ((**0x39420 & 2) == 0)) {
            uVar10 = uVar10 + *(arg1 + 0x5c);
        }
        if (*(arg1 + 0x5e) != -1) {
            uVar9 = uVar10;
            if ((uVar8 < 0x30) && ((0x850000000000U >> (uVar8 & 0x3f) & 1) != 0)) {
                *(arg1_00 + 2) =
                     (uVar9 & 0xff0000 | uVar10 >> 0x10 & 0xffff) >> 8 | (uVar9 & 0xff00 | uVar9 << 0x10) << 8;
                *(arg1_00 + 7) = *(arg3 + 0xd) * 0x100 + (*(arg3 + 0xd) >> 8);
            }
            else {
                uVar4 = uVar10 >> 0x20;
                *(arg1_00 + 2) =
                     ((((uVar9 << 0x10 | uVar9 & 0xff00) << 8) << 8 | uVar10 & 0xff0000) << 0x10 | uVar10 & 0xff000000)
                     << 8 | (uVar4 << 0x10 | uVar4 & 0xff00) << 8 | (uVar10 >> 0x20 & 0xff0000 | uVar10 >> 0x30) >> 8;
                *(arg1_00 + 10) = (*(arg3 + 0xd) & 0xff00) << 8 | *(arg3 + 0xd) << 0x18;
            }
            puVar3 = *0x39420;
            puVar3[0x6ae] = 0;
            puVar3[0x6af] = 0;
            uVar9 = 0;
            if ((uVar8 != 0x2f) && (uVar8 != 0x8f)) {
                puVar3 = *0x39420;
                puVar3[0x6ae] = 0x20;
                puVar3[0x6af] = 0x4e;
                uVar9 = *(arg3 + 0xd) * *(arg1 + 0x5e);
            }
            uVar4 = fcn.0001abe0(arg1);
            if ((uVar4 != 0) && ((uVar12 != 0 || (uVar4 == uVar9)))) {
                if (0xffff < uVar4) {
                    uVar4 = 0xffff;
                }
                if ((((*(arg1 + 0x74) == '\x04') && (uVar8 == 0x28)) && (*(arg3 + 5) == 0)) && ((**0x39420 & 2) == 0)) {
                    *(*(arg3 + 0x13) + 0x1c) = 0;
                    iVar6 = *(arg3 + 0x13);
                    if (((*(iVar6 + 3) == 0x65657246) && (*(iVar6 + 7) == 0x20534f44)) &&
                       (*(iVar6 + 0x3a) != 0x20202032)) {
                        *(iVar6 + 0x42) = *(iVar6 + 0x42) - *(arg1 + 0x5c);
                        piVar1 = *(arg3 + 0x13) + 0x46;
                        *piVar1 = *piVar1 - *(arg1 + 0x5c);
                        piVar1 = *(arg3 + 0x13) + 0x4a;
                        *piVar1 = *piVar1 - *(arg1 + 0x5c);
                    }
                    iVar6 = *(arg3 + 0x13);
                    if (*(iVar6 + 0x52) == 0x33544146) {
                        *(iVar6 + 0x40) = 0;
                    }
                    else {
                        *(iVar6 + 0x24) = 0;
                    }
                }
                break;
            }
            iVar5 = fcn.0001c364(arg1);
            *(arg3 + 1) = iVar5;
            uVar4 = uVar11;
            if (iVar5 == '\a') break;
            if (((uVar8 == 0x2f) || (uVar8 == 0x8f)) && (iVar5 == 0)) {
                uVar4 = 0xffff;
                break;
            }
        }
        iVar5 = fcn.0001c47c(arg1);
        *(arg3 + 1) = iVar5;
        uVar4 = uVar11;
        if (iVar5 != 0) break;
        fcn.00011040(arg1_00,0x10);
        uVar12 = uVar12 + 1;
    } while (uVar12 < 2);
    fcn.00014358(arg1_00,1);
    return uVar4 & 0xffff;
}


/* fcn.00011fcc @ 0x11fcc */

void fcn.00011fcc(int64_t arg1)

{
    char *arg3;
    uint32_t *puVar1;
    uchar uVar2;
    int16_t iVar3;
    uint32_t arg1_00;
    uint8_t *arg1_01;
    ulong uVar4;
    uint64_t uVar5;
    ulong in_R8;
    
    puVar1 = *0x39420;
    arg3 = arg1 + 3;
    if ((((*arg3 != '~') || ((**0x39420 & 0x200) != 0)) && ((*arg3 != '}' || ((**0x39420 & 0x400) != 0)))) &&
       ((*arg3 != '\x7f' || ((**0x39420 & 0x800) != 0)))) {
        uVar4 = 0;
        arg1_01 = fcn.0001467c(CONCAT71(arg1 >> 8,0x80),0,CONCAT71(in_R8 >> 8,*arg3),0);
        if ((arg1_01 != NULL) && ((*arg1_01 & 2) != 0)) {
            if (((*(puVar1 + 0x6c9) & 0x400000) == 0) || (arg1_00 = fcn.0001c47c(arg1_01), arg1_00 == 0)) {
                uVar5 = CONCAT71(uVar4 >> 8,-((*(arg1_01 + 0x60) & 0xffffffff00000000) != 0)) & 0xffffffffffffff60;
                iVar3 = fcn.0001be14(arg1_01,CONCAT71(uVar5 >> 8,uVar5 + '*'),arg3);
                if (iVar3 != 0) {
                    *(arg1 + 2) = 0;
                    return;
                }
                arg1_00 = *(arg1 + 4);
            }
            else {
                *(arg1 + 4) = arg1_00;
            }
            uVar2 = fcn.00012df0(arg1_00);
            *(arg1 + 2) = uVar2;
            return;
        }
        *(arg1 + 2) = 0x80;
        return;
    }
    *(arg1 + 2) = 0xaa;
    return;
}


/* fcn.0001211c @ 0x1211c */

void fcn.0001211c(int64_t arg1)

{
    char *arg3;
    uint32_t *puVar1;
    uchar uVar2;
    int16_t iVar3;
    uint32_t arg1_00;
    uint8_t *arg1_01;
    ulong uVar4;
    uint64_t uVar5;
    ulong in_R8;
    
    puVar1 = *0x39420;
    arg3 = arg1 + 3;
    if ((((*arg3 != '~') || ((**0x39420 & 0x200) != 0)) && ((*arg3 != '}' || ((**0x39420 & 0x400) != 0)))) &&
       ((*arg3 != '\x7f' || ((**0x39420 & 0x800) != 0)))) {
        uVar4 = 0;
        arg1_01 = fcn.0001467c(CONCAT71(arg1 >> 8,0x80),0,CONCAT71(in_R8 >> 8,*arg3),0);
        if ((arg1_01 != NULL) && ((*arg1_01 & 2) != 0)) {
            if (((*(puVar1 + 0x6c9) & 0x400000) == 0) || (arg1_00 = fcn.0001c47c(arg1_01), arg1_00 == 0)) {
                uVar5 = CONCAT71(uVar4 >> 8,-((*(arg1_01 + 0x60) & 0xffffffff00000000) != 0)) & 0xffffffffffffff60;
                iVar3 = fcn.0001be14(arg1_01,CONCAT71(uVar5 >> 8,uVar5 + '/'),arg3);
                if (iVar3 != 0) {
                    *(arg1 + 2) = 0;
                    return;
                }
                arg1_00 = *(arg1 + 4);
            }
            else {
                *(arg1 + 4) = arg1_00;
            }
            uVar2 = fcn.00012df0(arg1_00);
            *(arg1 + 2) = uVar2;
            return;
        }
        *(arg1 + 2) = 0x80;
        return;
    }
    *(arg1 + 2) = 0xaa;
    return;
}


/* fcn.0001ae28 @ 0x1ae28 */

ulong fcn.0001ae28(int64_t arg1)

{
    ushort uVar1;
    uint uVar2;
    uint8_t *arg1_00;
    uchar *puVar3;
    uchar *puVar4;
    uchar *puVar5;
    uint32_t uVar6;
    uint8_t uVar7;
    uint in_R8D;
    
    arg1_00 = fcn.0001467c(CONCAT71(arg1 >> 8,0x80),0,CONCAT31(in_R8D >> 8,*arg1),0);
    if ((arg1_00 != NULL) && ((*arg1_00 & 2) != 0)) {
        uVar6 = *(arg1 + 9) + 0x1f >> 5;
        fcn.0001c47c(arg1_00);
        puVar3 = fcn.00014184((uVar6 & 0xff) + 0x1f >> 5);
        if (puVar3 != NULL) {
            puVar4 = *(arg1 + 5);
            uVar7 = 0;
            puVar5 = puVar3;
            if (*(arg1 + 9) != 0) {
                do {
                    uVar7 = uVar7 + 1;
                    *puVar5 = *puVar4;
                    puVar4 = puVar4 + 1;
                    puVar5 = puVar5 + 1;
                } while (uVar7 < *(arg1 + 9));
            }
            uVar1 = fcn.0001abe0(arg1_00);
            *(arg1 + 0xf) = uVar1;
            uVar2 = fcn.0001c364(arg1_00);
            *(arg1 + 1) = uVar2;
            fcn.00014358(puVar3,(uVar6 & 0xff) + 0x1f >> 5);
            return 0;
        }
    }
    return 0xff;
}


/* fcn.00017ac0 @ 0x17ac0 */

uint8_t fcn.00017ac0(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t arg1_00;
    uint64_t uVar2;
    int64_t iVar3;
    int16_t iVar4;
    uint8_t *puVar5;
    uint8_t uVar6;
    uint64_t uVar7;
    uint8_t uVar8;
    uint16_t uVar9;
    int64_t iVar10;
    ushort uVar11;
    uint64_t uVar12;
    ushort uStackX_8;
    uint16_t uStackX_a;
    uint16_t uStackX_c;
    ushort uStackX_e;
    
    uVar9 = 0;
    arg1_00 = *(*0x2e7e0 + (*(arg1 + 0xb) - 1) * 8);
    iVar10 = 0;
    uVar12 = (*(*0x39420 + 0x5ae) << 0xc) + *(*0x2e7c0 + 0x12);
    fcn.00011080(&uStackX_8,8,0);
    if (((*(arg1 + 0x110) & 9) == 1) || (puVar5 = fcn.00014184(1), puVar5 == NULL)) {
        return 0xff;
    }
    uVar8 = arg2 & 7;
    *puVar5 = uVar8;
    uVar11 = 1;
    if ((*(arg1 + 0x110) & 1) != 0) {
        iVar10 = *(arg1 + 0x120);
        if (iVar10 == 0) {
code_r0x00017b72:
            fcn.00014358(puVar5,1);
            return 0xff;
        }
        uVar7 = 0;
        uVar11 = 1;
        if (*(arg1 + 0x118) != 0) {
            do {
                uVar2 = *(iVar10 + uVar7 * 8);
                if ((uVar2 < *(*0x2e7c0 + 0x12)) || (uVar12 < uVar2 + 0x30)) goto code_r0x00017b72;
                if (((*(uVar2 + 2) == 8) && (*(uVar2 + 1) != '\0')) && (**(uVar2 + 0x20) == 1)) {
                    iVar3 = *(iVar10 + uVar7 * 8);
                    uVar7 = *(iVar3 + 0x20);
                    if ((uVar7 < *(*0x2e7c0 + 0x12)) || (uVar12 < uVar7 + 2)) {
                        uVar8 = 0xff;
                        goto code_r0x00017c9b;
                    }
                    uVar6 = *(iVar3 + 1);
                    uVar9 = uVar6;
                    uVar11 = 2;
                    *puVar5 = uVar6;
                    puVar5[1] = uVar8;
                    break;
                }
                uVar6 = uVar7 + 1;
                uVar7 = uVar6;
            } while (uVar6 < *(arg1 + 0x118));
        }
    }
    cVar1 = *(arg1 + 0x54);
    if (cVar1 == '\0') {
        uStackX_8 = 0x921;
        uStackX_a = uVar9 | 0x200;
        uStackX_c = *(arg1 + 0x13);
        uStackX_e = uVar11;
        uVar8 = fcn.00015a00(arg1_00,arg1,
                             CONCAT26(uVar11,CONCAT14(*(arg1 + 0x13),CONCAT22(uVar9,0x921))) | 0x2000000,100);
    }
    else {
        uVar9 = *(arg1 + 0x52);
        uVar11 = *(*0x39420 + 0x6c0);
        *(*0x39420 + 0x6c0) = 100;
        iVar4 = fcn.0002bfb4(arg1_00,arg1,CONCAT71(iVar10 >> 8,cVar1),uVar9);
        *(*0x39420 + 0x6c0) = uVar11;
        uVar8 = ~-(iVar4 != 0);
    }
code_r0x00017c9b:
    fcn.00014358(puVar5,1);
    return uVar8;
}


/* fcn.00016dfc @ 0x16dfc */

void fcn.00016dfc(void)

{
    uint8_t uVar1;
    int64_t arg1;
    uint8_t uVar2;
    int64_t iVar3;
    
    uVar2 = 0;
    *(*0x39420 + 0x66a) = *(*0x39420 + 0x66a) | 1;
    uVar1 = *(*0x39420 + 0x667);
    iVar3 = *0x39420;
    if (*(*0x39420 + 0x717) != '\0') {
        do {
            arg1 = *(*(*0x2e7c0 + 0x4a) + uVar2 * 8);
            if (arg1 != 0) {
                fcn.00017ac0(arg1,uVar1 >> 4 & 7);
                iVar3 = *0x39420;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(iVar3 + 0x717));
    }
    *(iVar3 + 0x66a) = *(iVar3 + 0x66a) & 0xfe;
    return;
}


/* fcn.0002d210 @ 0x2d210 */

uint64_t fcn.0002d210(void)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    int64_t *piVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    char *pcVar12;
    
    uVar10 = 0;
    piVar9 = 0x39420;
    if (*0x2e860 != NULL) {
        piVar9 = *0x2e860;
    }
    pcVar12 = 0x2e7a8;
    if (*0x2e870 != NULL) {
        pcVar12 = *0x2e870;
    }
    iVar5 = *piVar9;
    piVar6 = 0x2e7c0;
    if (*0x2e868 != NULL) {
        piVar6 = *0x2e868;
    }
    piVar1 = iVar5 + 0x756;
    iVar2 = *piVar6;
    piVar7 = *piVar1;
    if (piVar7 != piVar1) {
        do {
            if (piVar7 < iVar5 + 0x769U) {
                *0x2e860 = piVar9;
                *0x2e868 = piVar6;
                *0x2e870 = pcVar12;
                return 0x800000000000000f;
            }
            if (iVar5 + 0x90bU < piVar7) {
                *0x2e860 = piVar9;
                *0x2e868 = piVar6;
                *0x2e870 = pcVar12;
                return 0x800000000000000f;
            }
            piVar7 = *piVar7;
        } while (piVar7 != piVar1);
    }
    if ((((iVar5 + 0x694U <= *(iVar2 + 0x52)) && (*(iVar2 + 0x52) <= iVar5 + 0x6a0U)) &&
        (iVar5 + 0x694U <= *(iVar2 + 0x5a))) && (*(iVar2 + 0x5a) <= iVar5 + 0x6a0U)) {
        uVar11 = iVar5 + 0x5e6;
        if ((((uVar11 <= *(iVar2 + 0x22)) && (*(iVar2 + 0x22) <= iVar5 + 0x666U)) &&
            ((uVar11 <= *(iVar2 + 0x2a) && ((*(iVar2 + 0x2a) <= iVar5 + 0x666U && (iVar5 + 0x5d6U <= *(iVar2 + 0x32)))))
            )) && (*(iVar2 + 0x32) <= uVar11)) {
            uVar11 = *(iVar2 + 0x42);
            uVar8 = *(iVar5 + 0x716) * 0x1c0 + uVar11;
            if ((*(iVar2 + 0x3a) == 0) || ((uVar11 <= *(iVar2 + 0x3a) && (*(iVar2 + 0x3a) <= uVar8)))) {
                if (*(iVar5 + 0x717) != 0) {
                    iVar3 = *(iVar2 + 0x4a);
                    uVar4 = uVar10;
                    do {
                        if (*(iVar3 + uVar4 * 8) != 0) {
                            if (*(iVar3 + uVar4 * 8) < uVar11) {
                                *0x2e860 = piVar9;
                                *0x2e868 = piVar6;
                                *0x2e870 = pcVar12;
                                return 0x800000000000000f;
                            }
                            if (uVar8 < *(iVar3 + uVar4 * 8)) {
                                *0x2e860 = piVar9;
                                *0x2e868 = piVar6;
                                *0x2e870 = pcVar12;
                                return 0x800000000000000f;
                            }
                        }
                        uVar4 = uVar4 + 1;
                    } while (uVar4 < *(iVar5 + 0x717));
                }
                *0x2e860 = piVar9;
                *0x2e868 = piVar6;
                *0x2e870 = pcVar12;
                if (*(iVar2 + 0x10) != '\0') {
                    if (*pcVar12 == '\0') {
                        if (*0x2e830 == NULL) {
                            return 0x800000000000000f;
                        }
                        iVar5 = (***0x2e830)(*(iVar2 + 8));
                        if (iVar5 < 0) {
                            return 0x800000000000000f;
                        }
                    }
                    else {
                        if (*0x2e830 == NULL) {
                            return 0x800000000000000f;
                        }
                        uVar11 = (*(*0x2e830)[2])(*(iVar2 + 8),*(iVar2 + 0x10) << 3);
                        if (uVar11 < 0) {
                            return uVar11;
                        }
                    }
                    uVar11 = uVar10;
                    if (*(iVar2 + 0x10) != '\0') {
                        do {
                            iVar5 = *(*(iVar2 + 8) + uVar11 * 8);
                            if (((iVar5 != 0) && (*(iVar5 + 1) != '\x10')) && (*(iVar5 + 0x18) != 0)) {
                                if (*0x2e830 == NULL) {
                                    return 0x800000000000000f;
                                }
                                iVar5 = (*(*0x2e830)[1])(*(iVar5 + 0x18),*(iVar5 + 0x20));
                                if (iVar5 < 0) {
                                    return 0x800000000000000f;
                                }
                            }
                            uVar11 = uVar11 + 1;
                        } while (uVar11 < *(iVar2 + 0x10));
                    }
                }
                iVar5 = fcn.0002cc28();
                if (iVar5 < 0) {
                    uVar10 = 0x800000000000000f;
                }
                return uVar10;
            }
        }
    }
    *0x2e870 = pcVar12;
    *0x2e868 = piVar6;
    *0x2e860 = piVar9;
    return 0x800000000000000f;
}


/* fcn.00014c7c @ 0x14c7c */

void fcn.00014c7c(uint32_t arg1,uint32_t arg2)

{
    char *pcVar1;
    int64_t iVar2;
    code *pcVar3;
    char cVar4;
    int64_t iVar5;
    uint in_register_0000000c;
    char *pcVar6;
    uint64_t uVar7;
    uint8_t uVar8;
    
    pcVar6 = CONCAT44(in_register_0000000c,arg1);
    while( true ) {
        cVar4 = *0x2e7e8;
        arg2 = arg2 & 0xff;
        if (arg2 == 0) {
            if (*0x2e7e8 != '\0') {
                return;
            }
            if (pcVar6 != NULL) {
                *(*0x39420 + 0x686) = *pcVar6;
                return;
            }
            return;
        }
        if (arg2 == 1) {
            if (*0x2e7e8 == '\0') {
                return;
            }
            if ((((*(*0x39420 + 0x6cd) == '\0') && ((*(*0x39420 + 0x6c9) & 0x400) != 0)) &&
                (*(*0x39420 + 0x6cf) != '\0')) && (uVar7 = 0, *(*0x2e7c0 + 0x10) != '\0')) {
                do {
                    if ((*(*(*0x2e7e0 + uVar7 * 8) + 0x58) & 0x11) == 0x11) {
                        *0x2e7e8 = 0;
                        return;
                    }
                    uVar8 = uVar7 + 1;
                    uVar7 = uVar8;
                } while (uVar8 < *(*0x2e7c0 + 0x10));
            }
            if ((*(*0x39420 + 0x6c9) & 0x800000) == 0) {
                if (*(*0x39420 + 0x686) != 0) {
                    iVar2 = *(*0x2e7e0 + (*(*0x39420 + 0x686) - 1) * 8);
                    iVar5 = fcn.0002bd84();
                    if ((-1 < iVar5) &&
                       (pcVar3 = *((*(iVar2 + 1) - 0x10 >> 4 & 3) * 200 + 0x88 + *0x2e848), pcVar3 != NULL)) {
                        (*pcVar3)(iVar2);
                    }
                }
            }
            else {
                iVar2 = *(*0x2e7c0 + 0x3a);
                if (iVar2 != 0) {
                    fcn.0002bf14(*(*0x2e7e0 + (*(iVar2 + 0xb) - 1) * 8),iVar2,0xa21,*(iVar2 + 0x13));
                }
            }
            *0x2e7e8 = 0;
            return;
        }
        if (arg2 == 2) {
            if (*0x2e7e8 != '\0') {
                return;
            }
            if (((*(*0x39420 + 0x6cd) == '\0') && ((*(*0x39420 + 0x6c9) & 0x400) != 0)) &&
               ((*(*0x39420 + 0x6cf) != '\0' && (uVar7 = 0, *(*0x2e7c0 + 0x10) != '\0')))) {
                do {
                    if ((*(*(*0x2e7e0 + uVar7 * 8) + 0x58) & 0x11) == 0x11) {
                        *0x2e7e8 = 1;
                        return;
                    }
                    uVar8 = uVar7 + 1;
                    uVar7 = uVar8;
                } while (uVar8 < *(*0x2e7c0 + 0x10));
            }
            if ((*(*0x39420 + 0x6c9) & 0x800000) == 0) {
                if (*(*0x39420 + 0x686) != 0) {
                    iVar2 = *(*0x2e7e0 + (*(*0x39420 + 0x686) - 1) * 8);
                    iVar5 = fcn.0002bd84();
                    if ((-1 < iVar5) &&
                       (pcVar3 = *((*(iVar2 + 1) - 0x10 >> 4 & 3) * 200 + 0x90 + *0x2e848), pcVar3 != NULL)) {
                        (*pcVar3)(iVar2);
                    }
                }
            }
            else {
                iVar2 = *(*0x2e7c0 + 0x3a);
                if (iVar2 != 0) {
                    fcn.0002bf14(*(*0x2e7e0 + (*(iVar2 + 0xb) - 1) * 8),iVar2,0xa21,*(iVar2 + 0x13));
                }
            }
            *0x2e7e8 = 1;
            return;
        }
        if (arg2 != 3) {
            return;
        }
        if (pcVar6 == NULL) {
            return;
        }
        if (*(*0x39420 + 0x686) != *pcVar6) {
            return;
        }
        *(*0x39420 + 0x686) = 0;
        uVar7 = 0;
        while( true ) {
            if (*(*0x2e7c0 + 0x10) <= uVar7) {
                return;
            }
            pcVar1 = *(*0x2e7e0 + uVar7 * 8);
            if ((((pcVar1 != NULL) && (pcVar1 != pcVar6)) && (*(pcVar1 + 0x90) != 0)) && ((pcVar1[0x58] & 1U) != 0))
            break;
            uVar7 = uVar7 + 1;
        }
        *(*0x39420 + 0x686) = **(*0x2e7e0 + uVar7 * 8);
        if (cVar4 == '\0') break;
        *0x2e7e8 = '\0';
        arg2 = 2;
        pcVar6 = NULL;
    }
    return;
}


/* fcn.00011040 @ 0x11040 */

int64_t fcn.00011040(int64_t arg1,int64_t arg2)

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


/* fcn.00013de8 @ 0x13de8 */

ulong fcn.00013de8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uchar uVar2;
    int64_t iVar3;
    uint32_t *arg2_00;
    uint8_t uVar4;
    uint64_t uVar5;
    
    uVar5 = 1;
    uVar2 = 0xff;
    uVar1 = 0xff;
    if (1 < *(*0x39420 + 0x716)) {
        do {
            uVar2 = uVar1;
            arg2_00 = uVar5 * 0x1c0 + *(*0x2e7c0 + 0x42);
            if ((((*arg2_00 & 0x21) == 1) && (arg2_00[3] == arg2)) && (*(arg2_00 + 0xd) == arg3)) {
                iVar3 = fcn.000144b0(*(arg2_00 + 0x26));
                if ((iVar3 == 0) || (*(iVar3 + 0x20) == NULL)) {
                    if (arg2_00[0x14] != '\0') {
                        fcn.0002c10c(arg1,arg2_00);
                        *(arg2_00 + 0x14) = 0;
                    }
                }
                else {
                    (**(iVar3 + 0x20))(arg2_00);
                    arg2_00[0x26] = 0xffffffff;
                    arg2_00[0x27] = 0;
                }
                uVar2 = fcn.0002c1e0(arg1,arg2_00);
                *arg2_00 = *arg2_00 & 0xffffff7f;
                if (*(arg2_00 + 10) != '\0') {
                    *(*0x39420 + 0x5a5) = *(*0x39420 + 0x5a5) | 1LL << (*(arg2_00 + 10) & 0x3f);
                    *(arg2_00 + 10) = 0;
                }
                if ((*(arg2_00 + 0xc) != 0) && (arg2_00[0xe] != 0)) {
                    fcn.00014358(*(arg2_00 + 0xc),arg2_00[0xe] + 0x1f >> 5);
                }
                *arg2_00 = *arg2_00 & 0xfffffffd;
                if ((*arg2_00 & 0x44) == 0) {
                    *arg2_00 = *arg2_00 & 0xfffffffe;
                }
            }
            if (((((*arg2_00 & 0x21) == 0x21) && (arg2_00[3] == arg2)) && (*(arg2_00 + 0xd) == arg3)) &&
               (*(arg2_00 + 0x2a) != 0)) {
                *arg2_00 = *arg2_00 | 0x1000;
            }
            uVar4 = uVar5 + 1;
            uVar5 = uVar4;
            uVar1 = uVar2;
        } while (uVar4 < *(*0x39420 + 0x716));
    }
    return CONCAT71(*0x39420 >> 8,uVar2);
}


/* fcn.00012578 @ 0x12578 */

void fcn.00012578(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    uint *puVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    
    uVar3 = 1;
    arg1_00 = arg1;
    iVar4 = *0x39420;
    if (1 < *(*0x39420 + 0x716)) {
        do {
            puVar1 = uVar3 * 0x1c0 + *(*0x2e7c0 + 0x42);
            if ((*puVar1 & 3) == 3) {
                arg1_00 = *(*0x2e7e0 + (*(puVar1 + 0xb) - 1) * 8);
                fcn.00013de8(arg1_00,CONCAT71(puVar1 >> 8,*(puVar1 + 3)),CONCAT71(iVar4 >> 8,*(puVar1 + 0xd)));
                iVar4 = *0x39420;
            }
            uVar2 = uVar3 + 1;
            uVar3 = uVar2;
        } while (uVar2 < *(iVar4 + 0x716));
    }
    if ((*(iVar4 + 0x6c9) & 8) != 0) {
        arg1_00 = CONCAT71(arg1_00 >> 8,0x40);
        fcn.00012e58(arg1_00);
        iVar4 = *0x39420;
    }
    if ((*(iVar4 + 0x6c9) & 4) != 0) {
        arg1_00 = CONCAT71(arg1_00 >> 8,0x30);
        fcn.00012e58(arg1_00);
        iVar4 = *0x39420;
    }
    if ((*(iVar4 + 0x6c9) & 1) != 0) {
        arg1_00 = CONCAT71(arg1_00 >> 8,0x10);
        fcn.00012e58(arg1_00);
        iVar4 = *0x39420;
    }
    if ((*(iVar4 + 0x6c9) & 2) != 0) {
        fcn.00012e58(CONCAT71(arg1_00 >> 8,0x20));
    }
    *(arg1 + 2) = 0;
    return;
}


/* fcn.00016f04 @ 0x16f04 */

void fcn.00016f04(int64_t arg1)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    char cVar4;
    char cVar5;
    uint32_t uVar6;
    
    cVar4 = (*0x39420 - arg1) + -0x3b;
    uVar1 = 0;
    cVar5 = cVar4;
    do {
        uVar3 = uVar1 + 1;
        *(uVar1 + arg1) = *(uVar3 + arg1);
        cVar5 = cVar5 + -1;
        uVar1 = uVar3;
    } while (cVar5 != '\0');
    uVar2 = (arg1 - *0x39420) - 0x5b6;
    cVar5 = cVar4;
    uVar6 = uVar2;
    do {
        uVar6 = uVar6 + 1;
        *(uVar2 + 0x5c6 + *0x39420) = *(uVar6 + 0x5c6 + *0x39420);
        uVar2 = uVar2 + 1;
        cVar5 = cVar5 + -1;
    } while (cVar5 != '\0');
    uVar2 = (arg1 - *0x39420) - 0x5b6;
    uVar6 = uVar2;
    do {
        uVar6 = uVar6 + 1;
        *(uVar2 + 0x5d6 + *0x39420) = *(uVar6 + 0x5d6 + *0x39420);
        uVar2 = uVar2 + 1;
        cVar4 = cVar4 + -1;
    } while (cVar4 != '\0');
    return;
}


/* fcn.00012eb4 @ 0x12eb4 */

void fcn.00012eb4(int64_t arg1)

{
    int64_t arg1_00;
    uint8_t uVar1;
    int64_t iVar2;
    
    uVar1 = 0;
    iVar2 = *0x2e7c0;
    if (*(*0x2e7c0 + 0x10) != '\0') {
        do {
            arg1_00 = *(*0x2e7e0 + uVar1 * 8);
            if (((arg1_00 != 0) && ((*(arg1_00 + 0x58) & 0xc) == 0xc)) && (*(arg1_00 + 1) == arg1)) {
                fcn.0002bde4(arg1_00);
                iVar2 = *0x2e7c0;
            }
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(iVar2 + 0x10));
    }
    return;
}


/* fcn.000131bc @ 0x131bc */

uint64_t fcn.000131bc(int64_t arg1)

{
    int64_t arg1_00;
    uint64_t in_RAX;
    uint8_t uVar1;
    int64_t iVar2;
    
    uVar1 = 0;
    iVar2 = *0x2e7c0;
    if (*(*0x2e7c0 + 0x10) != '\0') {
        do {
            arg1_00 = *(*0x2e7e0 + uVar1 * 8);
            in_RAX = *0x2e7e0;
            if (((arg1_00 != 0) && (*(arg1_00 + 1) == arg1)) && ((*(arg1_00 + 0x58) & 1) != 0)) {
                in_RAX = fcn.0002be7c(arg1_00);
                iVar2 = *0x2e7c0;
            }
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(iVar2 + 0x10));
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.0002be30 @ 0x2be30 */

ulong fcn.0002be30(int64_t arg1)

{
    code *UNRECOVERED_JUMPTABLE;
    int64_t iVar1;
    ulong uVar2;
    
    iVar1 = fcn.0002bd84();
    if (-1 < iVar1) {
        UNRECOVERED_JUMPTABLE = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0x10 + *0x2e848);
        if (UNRECOVERED_JUMPTABLE != NULL) {
    //WARNING: Could not recover jumptable at 0x0002be79. Too many branches
    //WARNING: Treating indirect jump as call
            uVar2 = (*UNRECOVERED_JUMPTABLE)(arg1);
            return uVar2;
        }
    }
    return 0xff;
}


/* fcn.000144b0 @ 0x144b0 */

int64_t fcn.000144b0(uint32_t arg1)

{
    uint in_register_0000000c;
    uint64_t uVar1;
    int64_t iVar2;
    
    uVar1 = CONCAT44(in_register_0000000c,arg1);
    if (uVar1 == 0xffffffff) {
        return 0;
    }
    if ((arg1 & 0x80000000) == 0) {
        iVar2 = 0x39440;
    }
    else {
        uVar1 = arg1 & 0x7fffffff;
        iVar2 = 0x392c0;
    }
    return uVar1 * 0x30 + iVar2;
}


/* fcn.00012f14 @ 0x12f14 */

uint64_t fcn.00012f14(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    if ((*(*0x2e7c0 + 0x10) != '\0') && (uVar2 = 0, *(*0x2e7c0 + 0x10) != '\0')) {
        do {
            iVar1 = *(*0x2e7e0 + uVar2 * 8);
            if ((iVar1 != 0) && ((*(*0x39420 + 0x6c9) & 0x4000) == 0)) {
                if (*(*0x39420 + 0x766) == '\0') {
code_r0x00012f7c:
                    if (*(*0x2e7d0 + 3) != '\x01') goto code_r0x00012fce;
                }
                else if (*(*0x2e7d0 + 3) != '\x02') {
                    if (*(*0x39420 + 0x766) != '\0') goto code_r0x00012fce;
                    goto code_r0x00012f7c;
                }
                if ((*(iVar1 + 0x58) & 0x80) == 0) {
                    if ((*(iVar1 + 0x58) & 0x10) == 0) {
                        fcn.0002c8f0(iVar1);
                    }
                    if (*(iVar1 + 0x90) == 0) {
                        if ((*(iVar1 + 1) != '@') || (*(*0x39420 + 0x6cd) != '\x01')) {
                            fcn.0002d5a4();
                        }
                    }
                    else {
                        fcn.00014c7c(iVar1,0);
                    }
                }
            }
code_r0x00012fce:
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(*0x2e7c0 + 0x10));
    }
    return *0x2e7c0 & 0xffffffffffffff00;
}


/* fcn.00012ff4 @ 0x12ff4 */

uint64_t fcn.00012ff4(int64_t arg1)

{
    uint16_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint8_t uVar7;
    uint8_t uVar8;
    uint64_t in_RDX;
    
    uVar7 = 0;
    uVar8 = *(*0x2e7c0 + 0x10);
    uVar6 = *0x2e7c0;
    uVar4 = 0;
    if (uVar8 != 0) {
        do {
            uVar6 = uVar4;
            uVar7 = uVar6;
            in_RDX = *(*0x2e7e0 + uVar6 * 8);
            if (((in_RDX != 0) && (arg1 != in_RDX)) &&
               (((uVar6 = *(arg1 + 0x10), uVar6 != 0 && (uVar6 == *(in_RDX + 0x10))) ||
                (((uVar6 = *(arg1 + 0x60), uVar6 != 0 && (uVar6 == *(in_RDX + 0x60))) ||
                 ((*(*0x39420 + 0x6cf) != '\0' &&
                  ((uVar6 = *(in_RDX + 0x2a), *(arg1 + 0x2a) == *(in_RDX + 0x2a) &&
                   (uVar6 = *(in_RDX + 0x30), *(arg1 + 0x30) == uVar6)))))))))) break;
            uVar7 = uVar7 + 1;
            uVar4 = uVar7;
        } while (uVar7 < uVar8);
    }
    if (uVar7 == uVar8) {
        *(arg1 + 0x58) = *(arg1 + 0x58) | 8;
        fcn.0002bde4(arg1);
        if ((*(arg1 + 0x58) & 1) != 0) {
            in_RDX = in_RDX & 0xffffffffffffff00;
            iVar2 = *(*0x2e7c0 + 0x3a2);
            while( true ) {
                uVar6 = in_RDX & 0xff;
                if ((*(iVar2 + 0x1c + uVar6 * 6) == 0) && (*(iVar2 + 0x1e + uVar6 * 6) == 0)) goto code_r0x00013116;
                if ((*(iVar2 + 0x1c + uVar6 * 6) == *(arg1 + 0x88)) && (*(iVar2 + 0x1e + uVar6 * 6) == *(arg1 + 0x8a)))
                break;
                uVar8 = in_RDX + 1;
                in_RDX = CONCAT71(in_RDX >> 8,uVar8);
                if (2 < uVar8) {
code_r0x00013116:
                    fcn.0002be7c(arg1);
                    uVar6 = *0x39420;
                    if ((((*(*0x39420 + 0x6cf) == '\x02') && ((*(*0x39420 + 0x921) & 0x10) == 0)) &&
                        (uVar6 = fcn.0002bd84(), -1 < uVar6)) &&
                       (pcVar3 = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0xc0 + *0x2e848), uVar6 = *0x2e848,
                       pcVar3 != NULL)) {
                        uVar6 = (*pcVar3)(arg1,0);
                    }
                    return uVar6 & 0xffffffffffffff00;
                }
            }
            uVar1 = *(iVar2 + 0x20 + (in_RDX & 0xff) * 6);
            if (uVar1 != 0) {
                fcn.0002bb74(uVar1 * 1000,in_RDX);
            }
            goto code_r0x00013116;
        }
        uVar5 = *(arg1 + 0x58) & 0xfffffff7;
        uVar6 = uVar5;
        *(arg1 + 0x58) = uVar5;
    }
    return CONCAT71(uVar6 >> 8,0xff);
}


/* section..text @ 0x11000 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 118784 named .text
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


/* fcn.00012bb8 @ 0x12bb8 */

ulong fcn.00012bb8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong uVar2;
    int64_t iStackX_8;
    code *pcStackX_10;
    
    iStackX_8 = arg1;
    section..text(&pcStackX_10,&iStackX_8,8);
    uVar1 = (arg3 & 0xffffffffU) >> 3;
    if (uVar1 == 0) {
        uVar2 = (*pcStackX_10)();
    }
    else if (uVar1 == 1) {
        uVar2 = (*pcStackX_10)(*arg2);
    }
    else if (uVar1 == 2) {
        uVar2 = (*pcStackX_10)(*arg2,*(arg2 + 8));
    }
    else if (uVar1 == 3) {
        uVar2 = (*pcStackX_10)(*arg2,*(arg2 + 8),*(arg2 + 0x10));
    }
    else if (uVar1 == 4) {
        uVar2 = (*pcStackX_10)(*arg2,*(arg2 + 8),*(arg2 + 0x10),*(arg2 + 0x18));
    }
    else if (uVar1 == 5) {
        uVar2 = (*pcStackX_10)(*arg2,*(arg2 + 8),*(arg2 + 0x10),*(arg2 + 0x18),*(arg2 + 0x20));
    }
    else if (uVar1 == 6) {
        uVar2 = (*pcStackX_10)(*arg2,*(arg2 + 8),*(arg2 + 0x10),*(arg2 + 0x18),*(arg2 + 0x20),*(arg2 + 0x28));
    }
    else if (uVar1 == 7) {
        uVar2 = (*pcStackX_10)(*arg2,*(arg2 + 8),*(arg2 + 0x10),*(arg2 + 0x18),*(arg2 + 0x20),*(arg2 + 0x28),
                               *(arg2 + 0x30));
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0002bde4 @ 0x2bde4 */

ulong fcn.0002bde4(int64_t arg1)

{
    code *UNRECOVERED_JUMPTABLE;
    int64_t iVar1;
    ulong uVar2;
    
    iVar1 = fcn.0002bd84();
    if (-1 < iVar1) {
        UNRECOVERED_JUMPTABLE = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 8 + *0x2e848);
        if (UNRECOVERED_JUMPTABLE != NULL) {
    //WARNING: Could not recover jumptable at 0x0002be2d. Too many branches
    //WARNING: Treating indirect jump as call
            uVar2 = (*UNRECOVERED_JUMPTABLE)(arg1);
            return uVar2;
        }
    }
    return 0xff;
}


/* fcn.0002c8f0 @ 0x2c8f0 */

int64_t fcn.0002c8f0(uint32_t arg1)

{
    char cVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    ulong uVar4;
    ulong uStackX_8;
    ulong *apuStackX_10 [3];
    uint auStack_18 [2];
    ulong uStack_10;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    uStackX_8 = 0;
    if (*(iVar3 + 0x90) != 0) {
        return 0;
    }
    iVar2 = (**(*0x2e820 + 0xd0))(0x2e000,0,apuStackX_10);
    if (-1 < iVar2) {
        cVar1 = *(iVar3 + 1);
        if (cVar1 == '\x10') {
            if ((*(*0x39420 + 0x6c9) & 1) == 0) {
                return -0x7ffffffffffffffd;
            }
            uVar4 = 0x2c8a0;
        }
        else if (cVar1 == ' ') {
            if ((*(*0x39420 + 0x6c9) & 2) == 0) {
                return -0x7ffffffffffffffd;
            }
            uVar4 = 0x2c8b4;
        }
        else if (cVar1 == '0') {
            if ((*(*0x39420 + 0x6c9) & 4) == 0) {
                return -0x7ffffffffffffffd;
            }
            uVar4 = 0x2c8c8;
        }
        else {
            if ((cVar1 != '@') || ((*(*0x39420 + 0x6c9) & 8) == 0)) {
                return -0x7ffffffffffffffd;
            }
            uVar4 = 0x2c8dc;
        }
        uStack_10 = *(iVar3 + 0x70);
        auStack_18[0] = 0;
        iVar2 = (**apuStackX_10[0])(apuStackX_10[0],uVar4,auStack_18,&uStackX_8);
        if (-1 < iVar2) {
            *(iVar3 + 0x90) = uStackX_8;
        }
        return iVar2;
    }
    return iVar2;
}


/* fcn.0002d5a4 @ 0x2d5a4 */

int64_t fcn.0002d5a4(void)

{
    bool bVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t *puStackX_8;
    ulong uStack_18;
    uint64_t uStack_10;
    
    if (*0x2e878 == '\0') {
        *0x2e878 = '\x01';
        iVar3 = (**(*0x2e820 + 0xd0))(0x2e090,0,0x2e880);
        if (-1 < iVar3) {
            puStackX_8 = NULL;
            uStack_18 = 160000;
            uStack_10 = 160000;
            uVar2 = in(0x1830);
            bVar1 = false;
            if ((uVar2 & 0x40) == 0) {
                bVar1 = true;
            }
            do {
                iVar3 = (*(*0x2e880)[2])(*0x2e880,&puStackX_8);
                if ((iVar3 < 0) || (puStackX_8 == NULL)) goto code_r0x0002d65b;
            } while (uStack_10 < *puStackX_8);
            uStack_10 = *puStackX_8;
code_r0x0002d65b:
            (***0x2e880)(*0x2e880,0x2d464,&uStack_18,0x2e890);
            if (bVar1) {
                uVar2 = in(0x1830);
                out(0x1830,uVar2 & 0xffffffbf);
            }
        }
    }
    else {
        iVar3 = 0;
    }
    return iVar3;
}


/* fcn.0002bb74 @ 0x2bb74 */

void fcn.0002bb74(int64_t arg1,int64_t arg2)

{
    uchar auVar1 [16];
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    
    auVar1._8_8_ = 0;
    auVar1._0_8_ = arg1 * 2;
    iVar4 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar1,8);
    uVar6 = ((arg1 * 2 - iVar4 >> 1) + iVar4 >> 4) + (arg1 >> 1) + arg1 * 3;
    if (uVar6 != 0) {
        uVar5 = 0;
        if ((*(*0x39420 + 0x92d) != 0) && (uVar2 = in(*(*0x39420 + 0x92d) + 8), uVar6 != 0)) {
            do {
                uVar3 = in(*(*0x39420 + 0x92d) + 8);
                if (uVar2 <= uVar3) {
                    uVar5 = uVar5 + (uVar3 - uVar2);
                }
                uVar2 = uVar3;
            } while (uVar5 < uVar6);
        }
    }
    return;
}


/* fcn.0002be7c @ 0x2be7c */

ulong fcn.0002be7c(int64_t arg1)

{
    code *UNRECOVERED_JUMPTABLE;
    int64_t iVar1;
    ulong uVar2;
    
    iVar1 = fcn.0002bd84();
    if (-1 < iVar1) {
        UNRECOVERED_JUMPTABLE = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0x18 + *0x2e848);
        if (UNRECOVERED_JUMPTABLE != NULL) {
    //WARNING: Could not recover jumptable at 0x0002bec5. Too many branches
    //WARNING: Treating indirect jump as call
            uVar2 = (*UNRECOVERED_JUMPTABLE)(arg1);
            return uVar2;
        }
    }
    return 0xff;
}


/* fcn.0002bd84 @ 0x2bd84 */

ulong fcn.0002bd84(void)

{
    int64_t iVar1;
    int64_t *apiStackX_8 [4];
    
    if (*0x2e848 == 0) {
        iVar1 = (**(*0x2e820 + 0xd0))(0x2e060,0,apiStackX_8);
        if (-1 < iVar1) {
            *0x2e848 = *apiStackX_8[0];
        }
        if (*0x2e848 == 0) {
            return 0x8000000000000003;
        }
    }
    return 0;
}


/* fcn.0001d4c4 @ 0x1d4c4 */

uint32_t fcn.0001d4c4(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint16_t *arg2_00;
    char cVar1;
    int64_t arg2_01;
    uint16_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    char cVar6;
    uint8_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    uint16_t *arg2_02;
    uint32_t uVar10;
    uint8_t uVar11;
    uint16_t uVar12;
    uint32_t uStack_38;
    
    uVar12 = arg3;
    uVar8 = CONCAT71(arg3 >> 8,arg2);
    uStack_38 = 0x40;
    arg2_00 = *(*0x2e7c0 + 0x3b2);
    uVar10 = 0x10;
    arg2_01 = fcn.0001467c(CONCAT71(arg1 >> 8,0x10),0,uVar8,arg1);
    uVar11 = 0;
    if ((arg2_01 == 0) || ((cVar6 = arg3, (*(arg2_01 + 0x7c) & 0x800) != 0 && (cVar6 == *(arg1 + 0x5d))))) {
        return 0;
    }
    iVar5 = CONCAT71(uVar8 >> 8,cVar6);
    iVar9 = arg2_01;
    arg2_02 = arg2_00;
    cVar1 = fcn.0001dc70(arg1,arg2_01,iVar5,arg2_00);
    if (cVar1 == -1) {
        return 0xff;
    }
    if ((*(arg2_01 + 0xe) != '\x04') && (*(arg2_01 + 0xe) != '@')) {
        iVar9 = 0x200;
        uVar2 = *(arg2_01 + 0x134);
        uVar3 = (arg2_00[1] & 1 | 4) << 4;
        if ((*arg2_00 & 1) == 0) {
            *(arg2_01 + 0x134) = uVar2 & ~(1 << (uVar12 & 0xf));
        }
        else {
            if ((uVar2 >> (uVar12 & 0xf) & 1) == 0) {
                uVar3 = uVar3 | 0x10;
                *(arg2_01 + 0x134) = uVar2 | 1 << (uVar12 & 0xf);
            }
            uVar12 = *arg2_00;
            uVar4 = uVar3 | 1;
            if ((uVar12 & 0x200) == 0) {
                if ((uVar12 & 0x400) == 0) {
                    uVar4 = uVar3 | 5;
                }
            }
            else {
                uVar4 = uVar3 | 3;
            }
            uVar3 = uVar4 | 0x20;
            if ((uVar12 & 2) == 0) {
                uVar3 = uVar4;
            }
        }
        uVar4 = uVar3 | 0x100;
        if ((*arg2_00 & 4) == 0) {
            uVar4 = uVar3;
        }
        uVar3 = uVar4 | 0x200;
        if ((*arg2_00 & 8) == 0) {
            uVar3 = uVar4;
        }
        uVar4 = uVar3 | 0x400;
        if ((*arg2_00 & 0x10) == 0) {
            uVar4 = uVar3;
        }
        uVar3 = uVar4 | 0x800;
        if ((*arg2_00 & 0x100) == 0) {
            uVar3 = uVar4;
        }
        if (((arg2_00[1] & 8) != 0) && ((*arg2_00 & 0x108) == 0)) {
            iVar9 = CONCAT71(2,cVar6);
            iVar5 = arg2_01;
            fcn.0001dcbc(arg1,arg2_01,iVar9,8);
            fcn.0002bb74(*(arg2_01 + 0x3b) * 2000,iVar5);
        }
        uVar4 = uVar3 | 0x1000;
        if ((arg2_00[1] & 2) == 0) {
            uVar4 = uVar3;
        }
        uVar3 = uVar4 | 0x2000;
        if ((arg2_00[1] & 4) == 0) {
            uVar3 = uVar4;
        }
        if ((arg2_00[1] & 0x10) != 0) {
            uVar3 = uVar3 | 0x8000;
        }
        goto code_r0x0001d8d3;
    }
    uVar7 = 0;
    do {
        if ((*arg2_00 & 0x10) == 0) break;
        fcn.0002bb74(10000,iVar9);
        iVar5 = CONCAT71(iVar5 >> 8,cVar6);
        arg2_02 = *(*0x2e7c0 + 0x3b2);
        iVar9 = arg2_01;
        fcn.0001dc70(arg1,arg2_01,iVar5,arg2_02);
        uVar7 = uVar7 + 1;
    } while (uVar7 < 0x14);
    uVar2 = *arg2_00 >> 5 & 0xf;
    if ((*arg2_00 >> 5 & 0xf) != 0) {
        if (uVar2 == 3) {
            uStack_38 = 0x140;
        }
        else if (uVar2 != 5) {
            if (uVar2 == 6) {
code_r0x0001d79e:
                fcn.0002bb74(12000,iVar9);
                iVar5 = CONCAT71(iVar5 >> 8,cVar6);
                arg2_02 = *(*0x2e7c0 + 0x3b2);
                fcn.0001dc70(arg1,arg2_01,iVar5,arg2_02);
                if ((*arg2_00 & 0x1e0) != 0xa0) {
code_r0x0001d7d0:
                    iVar9 = CONCAT71(iVar5 >> 8,cVar6);
                    fcn.0001da38(arg1,arg2_01,iVar9,CONCAT71(arg2_02 >> 8,1));
                    iVar5 = CONCAT71(iVar9 >> 8,cVar6);
                    fcn.0001dc70(arg1,arg2_01,iVar5,*(*0x2e7c0 + 0x3b2));
                }
            }
            else if (uVar2 == 7) {
                do {
                    fcn.0002bb74(10000,iVar9);
                    iVar5 = CONCAT71(iVar5 >> 8,cVar6);
                    iVar9 = arg2_01;
                    fcn.0001dc70(arg1,arg2_01,iVar5,*(*0x2e7c0 + 0x3b2));
                    if ((*arg2_00 & 0x1e0) != 0xe0) break;
                    uVar11 = uVar11 + 1;
                } while (uVar11 < 0x32);
                if (((*arg2_00 & 0x1e0) != 0) && ((*arg2_00 & 0x1e0) != 0xa0)) goto code_r0x0001d79e;
            }
            else if (uVar2 == 8) {
                do {
                    fcn.0002bb74(10000,iVar9);
                    iVar5 = CONCAT71(iVar5 >> 8,cVar6);
                    iVar9 = arg2_01;
                    fcn.0001dc70(arg1,arg2_01,iVar5,*(*0x2e7c0 + 0x3b2));
                    if ((*arg2_00 & 0x1e0) != 0x100) break;
                    uVar11 = uVar11 + 1;
                } while (uVar11 < 0x14);
            }
            else {
                if (uVar2 == 10) goto code_r0x0001d7d0;
                uStack_38 = 0x41;
            }
        }
    }
    uVar3 = uStack_38 | 0x10;
    if ((arg2_00[1] & 1) == 0) {
        uVar3 = uStack_38;
    }
    uVar2 = *(arg2_01 + 0x134);
    if ((*arg2_00 & 1) == 0) {
        *(arg2_01 + 0x134) = uVar2 & ~(1 << (uVar12 & 0xf));
    }
    else {
        if ((uVar2 >> (uVar12 & 0xf) & 1) == 0) {
            uVar3 = uVar3 | 0x10;
            *(arg2_01 + 0x134) = uVar2 | 1 << (uVar12 & 0xf);
        }
        uVar4 = uVar3 | 0x8019;
        if ((arg2_00[1] & 0x30) == 0) {
            uVar4 = uVar3 | 9;
        }
        uVar3 = uVar4 | 0x20;
        if ((*arg2_00 & 2) == 0) {
            uVar3 = uVar4;
        }
    }
    if (((arg2_00[1] & 8) != 0) && (uVar3 = uVar3 | 0x4000, (*arg2_00 & 0x208) == 0)) {
        iVar9 = arg2_01;
        fcn.0001dcbc(arg1,arg2_01,CONCAT71(iVar5 >> 8,cVar6),8);
        fcn.0002bb74(*(arg2_01 + 0x3b) * 2000,iVar9);
    }
    iVar9 = 0x200;
    uVar4 = uVar3 | 0x200;
    if ((*arg2_00 & 8) == 0) {
        uVar4 = uVar3;
    }
    uVar3 = uVar4 | 0x400;
    if ((*arg2_00 & 0x10) == 0) {
        uVar3 = uVar4;
    }
    if ((*arg2_00 & 0x200) != 0) {
        uVar3 = uVar3 | 0x800;
    }
code_r0x0001d8d3:
    if (arg4 == '\x01') {
        uVar12 = arg2_00[1];
        do {
            if ((uVar12 & 1) != 0) {
                iVar9 = CONCAT71(iVar9 >> 8,cVar6);
                fcn.0001dbe4(arg1,arg2_01,iVar9,uVar10);
            }
            uVar12 = uVar12 >> 1;
            uVar10 = uVar10 + 1;
        } while (uVar10 < 0x15);
        if ((*(arg2_01 + 0xe) == '\x04') || (*(arg2_01 + 0xe) == '@')) {
            if ((arg2_00[1] & 0x40) != 0) {
                iVar9 = CONCAT71(iVar9 >> 8,cVar6);
                fcn.0001dbe4(arg1,arg2_01,iVar9,0x19);
            }
            if ((arg2_00[1] & 0x80) != 0) {
                iVar9 = CONCAT71(iVar9 >> 8,cVar6);
                fcn.0001dbe4(arg1,arg2_01,iVar9,0x1a);
            }
            if ((arg2_00[1] & 0x20) != 0) {
                fcn.0001dbe4(arg1,arg2_01,CONCAT71(iVar9 >> 8,cVar6),0x1d);
            }
        }
    }
    return uVar3;
}


/* fcn.0001dc70 @ 0x1dc70 */

ulong fcn.0001dc70(ulong noname_0,int64_t noname_1,int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    
    if (arg2 == 0) {
        uVar1 = 0xff;
    }
    else {
        *arg2 = 0;
        uVar1 = fcn.00015a00(noname_0,noname_1,CONCAT26(4,CONCAT24(arg1,0xa3) & 0xffffffffff),0x96);
    }
    return uVar1;
}


/* fcn.0001dbe4 @ 0x1dbe4 */

void fcn.0001dbe4(ulong noname_0,int64_t noname_1,int64_t arg1,int64_t arg2)

{
    fcn.00015a00(noname_0,noname_1,CONCAT24(arg1,CONCAT22(arg2,0x123)) & 0xffffffffff,0x32);
    return;
}


/* fcn.00015a00 @ 0x15a00 */

ulong fcn.00015a00(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    ushort uVar1;
    int16_t iVar2;
    ulong uVar3;
    int16_t iStackX_1e;
    
    uVar1 = *(*0x39420 + 0x6c0);
    *(*0x39420 + 0x6c0) = arg3;
    iVar2 = fcn.0002bf14(noname_0,arg1,arg2 & 0xffff,arg2 >> 0x20);
    uVar3 = 0;
    *(*0x39420 + 0x6c0) = uVar1;
    iStackX_1e = arg2 >> 0x30;
    if ((iStackX_1e != 0) && (iVar2 == 0)) {
        uVar3 = 0xff;
    }
    return uVar3;
}


/* fcn.0002bf14 @ 0x2bf14 */

ulong fcn.0002bf14(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    ushort in_stack_00000028;
    ulong in_stack_00000030;
    ushort in_stack_00000038;
    
    iVar2 = fcn.0002bd84();
    if ((iVar2 < 0) || (pcVar1 = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0x50 + *0x2e848), pcVar1 == NULL)) {
        uVar3 = 0;
    }
    else {
        uVar3 = (*pcVar1)(arg1,arg2,arg3 & 0xffff,arg4 & 0xffff,in_stack_00000028,in_stack_00000030,
                          in_stack_00000038);
    }
    return uVar3;
}


/* fcn.000144ec @ 0x144ec */

int64_t fcn.000144ec(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int64_t iVar2;
    uint8_t uVar3;
    
    iVar2 = fcn.0001ce98(arg1);
    if ((-1 < iVar2) && (iVar2 = fcn.0001cef4(arg2), -1 < iVar2)) {
        if (*0x2e7a9 != '\0') {
            iVar2 = fcn.0002bd04(arg3,arg4 & 0xffff);
            if ((iVar2 < 0) && (iVar2 != -0x7fffffffffffffeb)) {
                return 0;
            }
            *0x2e7a9 = '\0';
        }
        uVar3 = 0;
        do {
            iVar2 = arg2;
            iVar1 = fcn.0002bf14(arg1,arg2,0x680,0);
            if (iVar1 != 0) {
                return arg3;
            }
            if ((*(arg2 + 0x1bc) & 0x40) != 0) {
                return 0;
            }
            fcn.0002bb74(10000,iVar2);
            uVar3 = uVar3 + 1;
        } while (uVar3 < 5);
    }
    return 0;
}


/* fcn.0001da38 @ 0x1da38 */

ulong fcn.0001da38(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t *puVar1;
    char cVar2;
    char extraout_AL;
    int64_t arg1_00;
    int64_t iVar3;
    uint32_t uVar4;
    uchar uVar5;
    unkbyte7 Var6;
    
    uVar5 = arg3;
    Var6 = arg3 >> 8;
    puVar1 = *(*0x2e7c0 + 0x3b2);
    if ((arg4 == '\0') || ((*(arg2 + 0xe) != '\x04' && (*(arg2 + 0xe) != '@')))) {
        iVar3 = arg2;
        cVar2 = fcn.0001dcbc(arg1,arg2,arg3,4);
        if (cVar2 == '\0') {
            fcn.0002bb74(20000,iVar3);
            uVar4 = 0;
            while (iVar3 = arg2, cVar2 = fcn.0001dc70(arg1,arg2,CONCAT71(Var6,uVar5),*(*0x2e7c0 + 0x3b2)),
                  cVar2 == '\0') {
                if ((puVar1[1] >> 4 & 1) != 0) {
                    if ((puVar1[1] >> 4 & 1) == 0) {
                        return 0xff;
                    }
                    iVar3 = arg2;
                    cVar2 = fcn.0001dbe4(arg1,arg2,CONCAT71(Var6,uVar5),0x14);
                    if (cVar2 != '\0') {
                        return 0xff;
                    }
                    if (*(arg2 + 0xe) == '\x04') {
                        return 0;
                    }
                    if (*(arg2 + 0xe) != '@') {
                        if ((*(arg2 + 0x7c) & 0x800) == 0) {
                            arg1_00 = 20000;
                        }
                        else {
                            if ((*puVar1 & 0x200) == 0) {
                                return 0;
                            }
                            arg1_00 = 1000;
                        }
                        fcn.0002bb74(arg1_00,iVar3);
                        return 0;
                    }
                    return 0;
                }
                fcn.0002bb74(5000,iVar3);
                uVar4 = uVar4 + 1;
                if (9 < uVar4) {
                    return 0xff;
                }
            }
        }
    }
    else {
        iVar3 = arg2;
        cVar2 = fcn.0001dcbc(arg1,arg2,arg3,0x1c);
        if (cVar2 == '\0') {
            uVar4 = 0;
            do {
                fcn.0002bb74(10000,iVar3);
                iVar3 = arg2;
                fcn.0001dc70(arg1,arg2,CONCAT71(Var6,uVar5),*(*0x2e7c0 + 0x3b2));
                if (extraout_AL != '\0') {
                    return 0xff;
                }
                if ((puVar1[1] & 0x20) != 0) goto code_r0x0001dad3;
                uVar4 = uVar4 + 1;
            } while (uVar4 < 0x32);
            if ((puVar1[1] & 0x20) != 0) {
code_r0x0001dad3:
                cVar2 = fcn.0001dbe4(arg1,arg2,CONCAT71(Var6,uVar5),0x1d);
                if ((cVar2 == '\0') && (cVar2 = fcn.0001dbe4(arg1,arg2,CONCAT71(Var6,uVar5),0x14), cVar2 == '\0'))
                {
                    return 0;
                }
            }
        }
    }
    return 0xff;
}


/* fcn.0002c164 @ 0x2c164 */

ulong fcn.0002c164(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    
    iVar2 = fcn.0002bd84();
    if ((-1 < iVar2) && (pcVar1 = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0x98 + *0x2e848), pcVar1 != NULL)) {
        uVar3 = (*pcVar1)(arg1,arg2,arg3 & 0xffffffff,arg4);
        return uVar3;
    }
    return 0xff;
}


/* fcn.0001d028 @ 0x1d028 */

uint8_t * fcn.0001d028(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint8_t *puVar2;
    
    puVar2 = *0x39420;
    if (((*(*0x39420 + 0x6c9) & 0x200000) != 0) && ((**0x39420 & 1) != 0)) {
        out(0x43,0xb6);
        out(0x42,arg1);
        out(0x42,arg1);
        uVar1 = in(0x61);
        out(0x61,uVar1 | 3);
        fcn.0002bb74((arg2 & 0xffffU) * 0xf,0x61);
        puVar2 = uVar1;
        out(0x61,uVar1);
    }
    return puVar2;
}


/* fcn.000145f4 @ 0x145f4 */

ulong fcn.000145f4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    
    uVar1 = 0;
    do {
        fcn.0002bf14(arg1,arg2,0x500,0);
        if ((*(*0x39420 + 0x6c2) & 4) == 0) {
            return 0;
        }
        uVar1 = uVar1 + 1;
    } while (uVar1 < 5);
    return 0xff;
}


/* fcn.00013418 @ 0x13418 */

ulong fcn.00013418(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    
    iVar2 = fcn.00014184(1);
    if (iVar2 == 0) {
code_r0x00013444:
        uVar3 = 0x8000000000000004;
    }
    else {
        iVar4 = fcn.000144ec(arg1,arg2,iVar2,8);
        if (iVar4 != 0) {
            uVar1 = *(iVar4 + 2);
            fcn.00014358(iVar2,1);
            iVar2 = fcn.00014184(uVar1 + 0x1f >> 5);
            if (iVar2 == 0) goto code_r0x00013444;
            iVar4 = fcn.000144ec(arg1,arg2,iVar2,uVar1);
            if (iVar4 != 0) {
                *(arg2 + 0x30) = iVar2;
                *(arg2 + 0x38) = *(iVar4 + 2);
                return 0;
            }
        }
        uVar3 = 0x8000000000000003;
    }
    return uVar3;
}


/* fcn.0002c048 @ 0x2c048 */

ulong fcn.0002c048(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    
    iVar2 = fcn.0002bd84();
    if ((-1 < iVar2) && (pcVar1 = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0x80 + *0x2e848), pcVar1 != NULL)) {
        uVar3 = (*pcVar1)(arg1,arg2,arg3);
        return uVar3;
    }
    return 0xff;
}


/* fcn.00014ba4 @ 0x14ba4 */

void fcn.00014ba4(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    int16_t iVar2;
    int16_t *piVar3;
    uint64_t uVar4;
    
    piVar3 = 0x2e4a0;
    arg2 = (arg3 & 0xffffU) + arg2;
    uVar4 = *0x2e4a2;
    iVar2 = *0x2e4a0;
    do {
        if (iVar2 == 0 && uVar4 == 0) {
code_r0x00014c10:
            piVar3 = *0x39420 + 0x6e4;
            while( true ) {
                iVar2 = *piVar3;
                iVar1 = piVar3[1];
                if (iVar2 == 0 && iVar1 == 0) {
                    return;
                }
                if ((iVar1 == 0) && (iVar2 == 0)) break;
                if ((iVar1 == *(arg1 + 8)) && (iVar2 == *(arg1 + 6))) {
                    *(arg1 + 0x7c) = *(piVar3 + 7);
                    if (piVar3[2] != '\0') {
                        *(arg2 + 5) = piVar3[2];
                    }
                    if (*(piVar3 + 5) != '\0') {
                        *(arg2 + 6) = *(piVar3 + 5);
                    }
                    if (piVar3[3] != '\0') {
                        *(arg2 + 7) = piVar3[3];
                    }
                    return;
                }
                piVar3 = piVar3 + 9;
            }
            return;
        }
        if ((uVar4 == *(arg1 + 8)) && (*piVar3 == *(arg1 + 6))) {
            *(arg1 + 0x7c) = *(piVar3 + 7);
            if (piVar3[2] != '\0') {
                *(arg2 + 5) = piVar3[2];
            }
            if (*(piVar3 + 5) != '\0') {
                *(arg2 + 6) = *(piVar3 + 5);
            }
            if (piVar3[3] != '\0') {
                *(arg2 + 7) = piVar3[3];
            }
            goto code_r0x00014c10;
        }
        uVar4 = *(piVar3 + 0xb);
        piVar3 = piVar3 + 9;
        iVar2 = *piVar3;
    } while( true );
}


/* fcn.0002d9a0 @ 0x2d9a0 */

uint64_t fcn.0002d9a0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    char cVar2;
    char cVar3;
    unkbyte7 Var5;
    uint64_t uVar4;
    uchar uVar6;
    uint32_t uVar7;
    int16_t iVar8;
    uint64_t uVar9;
    char *pcVar10;
    uint16_t uVar11;
    uint16_t uVar12;
    int16_t iVar13;
    uint8_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    bool bVar17;
    char in_stack_00000028;
    uint8_t uStack_48;
    
    iVar13 = arg3;
    uVar6 = arg1;
    cVar3 = arg4;
    pcVar10 = *(*0x2e7c0 + 0x39a);
    uVar4 = *0x2e7c0;
    if ((pcVar10 != NULL) &&
       (((iVar8 = *(pcVar10 + 2), iVar8 != 0 || (pcVar10[0xc] != '\0')) && (uStack_48 = 1, iVar8 != 0)))) {
        uVar1 = *(*0x39420 + 0x767);
        Var5 = *0x39420 >> 8;
        uVar9 = arg2;
        while( true ) {
            uVar4 = CONCAT71(Var5,uVar1);
            uVar15 = 0;
            if (uVar1 <= uStack_48) break;
            uVar16 = *(pcVar10 + 8);
            uVar11 = 1;
            uVar4 = uVar16;
            uVar12 = uVar11;
            do {
                if (uVar4 == 0) break;
                uVar12 = uVar12 + 1;
                uVar4 = uVar4 >> 4;
            } while (uVar12 < 5);
            arg3 = CONCAT71(arg3 >> 8,arg1);
            uVar9 = uVar9 & 0xff;
            do {
                uVar14 = uVar9;
                if (arg3 < '\0') break;
                arg1 = CONCAT71(arg1 >> 8,0x10);
                uVar15 = uVar15 << 4 | uVar9;
                uVar4 = fcn.0001467c(arg1,0,arg3,0);
                if (uVar4 == 0) break;
                arg3 = CONCAT71(arg3 >> 8,*(uVar4 + 0xc));
                uVar11 = uVar11 + 1;
                uVar14 = *(uVar4 + 0xd);
                uVar9 = uVar14;
            } while (uVar11 < 5);
            if (*pcVar10 == '\x01') {
                if (pcVar10[1] == '\x02') {
                    bVar17 = uVar12 == uVar11;
code_r0x0002da93:
                    if (!bVar17) goto code_r0x0002db9e;
                }
code_r0x0002da99:
                cVar2 = pcVar10[0xc];
                uVar4 = CONCAT71(uVar4 >> 8,cVar2);
                if ((cVar2 == '\0') || (cVar2 == cVar3)) {
code_r0x0002daa9:
                    return CONCAT71(uVar4 >> 8,1);
                }
            }
            else if (iVar8 == iVar13) {
                if (pcVar10[4] == '\0') goto code_r0x0002da99;
                if (pcVar10[1] == '\x03') {
                    uVar7 = (8 - uVar12) * 4;
                    arg1 = uVar7;
                    uVar15 = (0xffffffffU >> (uVar7 & 0x1f)) >> 4 & uVar15;
                    uVar4 = uVar15;
                    if (uVar15 == uVar16) {
                        bVar17 = uVar14 == pcVar10[4];
                        goto code_r0x0002da93;
                    }
                }
                else if (uVar12 == uVar11) {
                    if (pcVar10[1] == '\x02') {
                        cVar2 = pcVar10[0xc];
                        uVar4 = CONCAT71(uVar4 >> 8,cVar2);
                        if ((cVar2 == '\0') || (cVar2 == cVar3)) goto code_r0x0002daa9;
                    }
                    if (uVar12 != 0) {
                        arg3 = uVar12 - 1;
                        uVar9 = 0;
                        do {
                            uVar4 = uVar9;
                            iVar8 = uVar4;
                            if (uVar4 == uVar12 - 1) {
                                Var5 = uVar4 >> 8;
                                if (pcVar10[1] == 0) {
                                    arg1 = 0;
                                    if ((uVar15 == uVar16) && (uVar14 == pcVar10[4])) {
                                        cVar2 = pcVar10[0xc];
                                        uVar4 = CONCAT71(Var5,cVar2);
                                        if ((cVar2 == '\0') || (cVar2 == cVar3)) goto code_r0x0002daa9;
                                    }
                                }
                                else {
                                    uVar7 = pcVar10[1] - 1;
                                    arg1 = uVar7;
                                    if ((uVar7 == 0) && (uVar14 == pcVar10[4])) {
                                        if (uVar15 != uVar16) goto code_r0x0002daa9;
                                        cVar2 = pcVar10[0xc];
                                        uVar4 = CONCAT71(Var5,cVar2);
                                        if (((cVar2 != '\0') && (in_stack_00000028 == '\x01')) && (cVar2 != cVar3))
                                        goto code_r0x0002daa9;
                                    }
                                }
                            }
                            else {
                                uVar4 = uVar15 ^ uVar16;
                                if (((uVar15 ^ uVar16) & 0xf) != 0) break;
                            }
                            uVar11 = iVar8 + 1;
                            uVar15 = uVar15 >> 4;
                            uVar16 = uVar16 >> 4;
                            uVar9 = uVar11;
                        } while (uVar11 < uVar12);
                    }
                }
            }
code_r0x0002db9e:
            uStack_48 = uStack_48 + 1;
            iVar8 = *(pcVar10 + 0x12);
            if (iVar8 == 0) break;
            Var5 = uVar4 >> 8;
            uVar9 = arg2 & 0xff;
            arg1 = CONCAT71(arg1 >> 8,uVar6);
            pcVar10 = pcVar10 + 0x10;
        }
    }
    return uVar4 & 0xffffffffffffff00;
}


/* fcn.000149a8 @ 0x149a8 */

uint32_t * fcn.000149a8(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    char cVar2;
    uint32_t *arg2_00;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar4 = arg2;
    arg2_00 = fcn.000148c8(arg2,0);
    if (arg2_00 == NULL) {
code_r0x000149db:
        arg2_00 = NULL;
    }
    else {
        uVar1 = *arg2_00;
        if ((uVar1 & 1) == 0) {
            cVar2 = fcn.00015980(CONCAT71(iVar4 >> 8,*(arg2 + 0x57)));
            if (cVar2 == '\x01') goto code_r0x000149db;
        }
        else {
            *arg2 = *arg2 | uVar1;
            *(arg2 + 0x128) = *(arg2_00 + 0x4a);
            arg2_00[0x12] = 0;
            iVar4 = *(*0x2e7e0 + (*(arg2_00 + 0xb) - 1) * 8);
            iVar3 = fcn.000144b0(*(arg2_00 + 0x26));
            if ((iVar3 == 0) || (*(iVar3 + 0x20) == NULL)) {
                if (arg2_00[0x14] != '\0') {
                    fcn.0002c10c(iVar4,arg2_00);
                    *(arg2_00 + 0x14) = 0;
                }
            }
            else {
                (**(iVar3 + 0x20))(arg2_00);
                arg2_00[0x26] = 0xffffffff;
                arg2_00[0x27] = 0;
            }
            if ((*(arg2_00 + 0x3e) != 0) && (*(arg2_00 + 0x3e) != *(arg2 + 0xf8))) {
                fcn.0002c1e0(iVar4,arg2_00);
            }
            if (((*arg2_00 & 2) != 0) && (*(arg2_00 + 10) != 0)) {
                *(*0x39420 + 0x5a5) = *(*0x39420 + 0x5a5) | 1LL << (*(arg2_00 + 10) & 0x3f);
                *(arg2_00 + 10) = 0;
            }
        }
        if ((*arg2_00 & 4) == 0) {
            *(arg2 + 0x110) = arg2_00[0x44];
            if (arg2_00 != arg2) {
                section..text(arg2_00,arg2,0x1c0);
            }
            *arg2_00 = *arg2_00 & 0x347;
            if ((uVar1 & 0x800) != 0) {
                *arg2_00 = *arg2_00 | 0x800;
            }
        }
        else {
            *(arg2_00 + 0xb) = *(arg2 + 0xb);
            *(arg2_00 + 3) = *(arg2 + 0xc);
            *(arg2_00 + 0xd) = *(arg2 + 0xd);
            *(arg2_00 + 0xe) = *(arg2 + 0xe);
            *(arg2_00 + 4) = *(arg2 + 0x10);
            *(arg2_00 + 0x3e) = *(arg2 + 0xf8);
            *(arg2_00 + 10) = *(arg2 + 10);
        }
        *arg2_00 = *arg2_00 | 3;
        if (((*arg2 & 8) == 0) && (fcn.0002bf14(arg1,arg2_00,0x900,0), (*arg2 & 0x200) != 0)) {
            fcn.0002bf14(arg1,arg2_00,0xb01,0);
        }
    }
    return arg2_00;
}


/* fcn.0002c1e0 @ 0x2c1e0 */

ulong fcn.0002c1e0(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    
    iVar2 = fcn.0002bd84();
    if ((-1 < iVar2) && (pcVar1 = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0xa0 + *0x2e848), pcVar1 != NULL)) {
        uVar3 = (*pcVar1)(arg1,arg2);
        return uVar3;
    }
    return 0xff;
}


/* fcn.000132a8 @ 0x132a8 */

uint64_t fcn.000132a8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    code *pcVar2;
    uint8_t *arg2_00;
    char cVar3;
    uint64_t uVar4;
    int64_t noname_1;
    ulong uVar5;
    int64_t arg1_00;
    
    cVar3 = arg3;
    if (arg2 < '\0') {
        uVar4 = fcn.0002bd84();
        if (-1 < uVar4) {
            pcVar2 = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0x40 + *0x2e848);
            uVar4 = *0x2e848;
            if (pcVar2 != NULL) {
                uVar4 = (*pcVar2)(arg1,arg3 & 0xff);
            }
        }
    }
    else {
        uVar4 = *0x39420;
        if ((*(*0x39420 + 0x711) & 4) != 0) {
            uVar5 = CONCAT71(arg3 >> 8,arg2);
            arg2_00 = *(*0x2e7c0 + 0x3b2);
            noname_1 = fcn.0001467c(CONCAT71(arg1 >> 8,0x10),0,uVar5,arg1);
            uVar4 = 0;
            if ((noname_1 != 0) && ((uVar4 = 0x800, (*(noname_1 + 0x7c) & 0x800) == 0 || (cVar3 != *(arg1 + 0x5d))))) {
                cVar1 = *(noname_1 + 0xe);
                uVar4 = CONCAT71(8,cVar1);
                if ((cVar1 != '\x04') && (cVar1 != '@')) {
                    arg1_00 = CONCAT71(uVar5 >> 8,cVar3);
                    uVar4 = fcn.0001dc70(arg1,noname_1,arg1_00,arg2_00);
                    if ((*arg2_00 & 2) != 0) {
                        uVar4 = fcn.0001dbe4(arg1,noname_1,CONCAT71(arg1_00 >> 8,cVar3),1);
                    }
                }
            }
        }
    }
    return uVar4 & 0xffffffffffffff00;
}


/* fcn.0002c10c @ 0x2c10c */

ulong fcn.0002c10c(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    
    iVar2 = fcn.0002bd84();
    if ((-1 < iVar2) && (pcVar1 = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0x70 + *0x2e848), pcVar1 != NULL)) {
        uVar3 = (*pcVar1)(arg1,arg2);
        return uVar3;
    }
    return 0xff;
}


/* fcn.00013218 @ 0x13218 */

ulong fcn.00013218(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong extraout_RAX;
    
    if (arg2 < '\0') {
        iVar2 = fcn.0002bd84();
        if ((iVar2 < 0) || (pcVar1 = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0x38 + *0x2e848), pcVar1 == NULL)) {
            uVar3 = 0xff;
        }
        else {
            uVar3 = (*pcVar1)(arg1,arg3,arg4);
        }
    }
    else if ((*(*0x39420 + 0x711) & 4) == 0) {
        uVar3 = 0;
    }
    else {
        fcn.0001d4c4(arg1,arg2,arg3,arg4);
        uVar3 = extraout_RAX;
    }
    return uVar3;
}


/* fcn.000134ec @ 0x134ec */

uchar fcn.000134ec(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    uchar uVar2;
    int64_t iVar3;
    ulong uVar4;
    
    if (arg2 < '\0') {
        iVar3 = fcn.0002bd84();
        if ((iVar3 < 0) || (pcVar1 = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0xa8 + *0x2e848), pcVar1 == NULL)) {
            return 0xff;
        }
        uVar2 = (*pcVar1)(arg1,arg3 & 0xff);
    }
    else {
        if ((*(*0x39420 + 0x711) & 4) == 0) {
            return 0xff;
        }
        uVar4 = CONCAT71(arg3 >> 8,arg2);
        iVar3 = fcn.0001467c(CONCAT71(arg1 >> 8,0x10),0,uVar4,arg1);
        if (iVar3 == 0) {
            return 0xff;
        }
        if (((*(iVar3 + 0x7c) & 0x800) != 0) && (arg3 == *(arg1 + 0x5d))) {
            return 0;
        }
        uVar2 = fcn.0001da38(arg1,iVar3,CONCAT71(uVar4 >> 8,arg3),0);
    }
    return uVar2;
}


/* fcn.0001339c @ 0x1339c */

uint8_t fcn.0001339c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint8_t uVar2;
    int64_t iVar3;
    
    if (arg2 < '\0') {
        iVar3 = fcn.0002bd84();
        if ((iVar3 < 0) || (pcVar1 = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0x48 + *0x2e848), pcVar1 == NULL)) {
            uVar2 = 0xff;
        }
        else {
            uVar2 = (*pcVar1)(arg1,arg3);
        }
        return uVar2;
    }
    return ~-((*(*0x39420 + 0x711) & 4) != 0);
}


/* fcn.000135a8 @ 0x135a8 */

uint64_t fcn.000135a8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int16_t iVar2;
    bool bVar3;
    bool bVar4;
    char cVar5;
    uint16_t uVar6;
    ulong uVar7;
    uint32_t *puVar8;
    uint8_t *arg3_00;
    int64_t iVar9;
    uint8_t *arg3_01;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint32_t uVar12;
    uint32_t *puVar13;
    uint32_t *arg1_00;
    unkbyte7 Var14;
    uint8_t uVar15;
    uint64_t uVar16;
    uint8_t uVar17;
    uint64_t uVar18;
    uint8_t *puVar19;
    ulong uVar20;
    uint64_t uVar21;
    ulong *puVar22;
    char cStackX_10;
    uint8_t uStackX_20;
    ushort uVar23;
    uint16_t uStack_88;
    int64_t iStack_78;
    uint64_t uStack_70;
    ulong uStack_68;
    uint8_t *puStack_60;
    char *pcStack_58;
    
    uStack_68 = 0;
    bVar4 = false;
    uVar16 = 1;
    bVar3 = false;
    puVar13 = *(*0x2e7c0 + 0x42);
    *puVar13 = 1;
    *(puVar13 + 10) = 0;
    *(puVar13 + 1) = 0;
    *(puVar13 + 0x1f) = 0;
    puVar13[0x3e] = 0;
    puVar13[0x3f] = 0;
    *(puVar13 + 3) = arg2;
    *(puVar13 + 0xd) = arg3;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    *(puVar13 + 0xe) = 0;
    iVar9 = arg1;
    if (((*(*0x39420 + 0x921) & 4) != 0) && ((**0x39420 & 0x4000000) == 0)) {
        uVar7 = fcn.00011270(arg1,arg2);
        *(puVar13 + 0x20) = uVar7;
    }
    uVar18 = (arg4 & 0xffffffffU) >> 1;
    uVar15 = uVar18 & 0x47;
    *(puVar13 + 0xe) = uVar15;
    if ((*(*0x39420 + 0x6c9) & 0x20000000) != 0) {
        uVar17 = 0;
        puVar8 = puVar13;
        while (arg3 = CONCAT71(arg3 >> 8,puVar8[3]), -1 < puVar8[3]) {
            iVar9 = CONCAT71(iVar9 >> 8,0x10);
            puVar8 = fcn.0001467c(iVar9,0,arg3,0);
            if ((puVar8 == NULL) || (uVar17 = uVar17 + 1, 4 < uVar17)) break;
        }
    }
    puVar19 = NULL;
    if ((uVar18 & 0x47) == 0) {
        *(puVar13 + 4) = 0x40;
    }
    else if (uVar15 < 3) {
        *(puVar13 + 4) = 8;
    }
    else if ((uVar15 == 4) || (uVar15 == 0x40)) {
        *(puVar13 + 4) = 0x200;
    }
    *(puVar13 + 0xb) = *arg1;
    cStackX_10 = '\0';
    arg3_00 = fcn.00014184(0x40);
    puStack_60 = arg3_00;
    if (arg3_00 != NULL) {
        uStack_70 = 2;
        cVar5 = fcn.0002c164(arg1,puVar13,arg4 & 0xffffffff,&uStack_68);
        if (cVar5 == '\0') {
            *(puVar13 + 0x3e) = uStack_68;
            uVar12 = (*0x39420)[0x1b0];
            *(*0x39420 + 0x1b0) = 1000;
            puVar8 = puVar13;
            puVar19 = arg3_00;
            iVar9 = fcn.000144ec(arg1,puVar13,arg3_00,8);
            *(*0x39420 + 0x1b0) = uVar12;
            if (iVar9 != 0) {
                uStack_70 = 3;
                if (*(iVar9 + 2) < 0x300) {
                    if (*(iVar9 + 7) == '\0') {
                        uVar6 = 0x40;
                    }
                    else {
                        uVar6 = *(iVar9 + 7);
                    }
                }
                else {
                    uVar6 = 1 << (*(iVar9 + 7) & 0x1f);
                }
                *(puVar13 + 4) = uVar6;
                if (*(puVar13 + 0xe) < 3) {
                    fcn.0002bb74(10000,puVar8);
                }
                uVar16 = 1;
                do {
                    uVar15 = uVar16;
                    if ((*(*0x39420 + 0x5a5) >> (uVar16 & 0x3f) & 1) != 0) break;
                    uVar15 = uVar15 + 1;
                    uVar16 = uVar15;
                } while (uVar15 < 0x40);
                if (uVar15 != 0x40) {
                    puVar19 = CONCAT71(puVar19 >> 8,uVar15);
                    cVar5 = fcn.000145f4(arg1,puVar13,puVar19);
                    puVar8 = *0x39420;
                    if (cVar5 != -1) {
                        *(*0x39420 + 0x5a5) = *(*0x39420 + 0x5a5) & ~(1LL << (uVar15 & 0x3f));
                        *(puVar13 + 10) = uVar15;
                        fcn.0002bb74(2000,puVar8);
                        puVar19 = arg3_00;
                        puVar8 = fcn.000144ec(arg1,puVar13,arg3_00,0x12);
                        if ((puVar8 != NULL) && (0x11 < *puVar8)) {
                            if (*(puVar8 + 0x11) == '\0') {
                                *(puVar8 + 0x11) = 1;
                            }
                            if (puVar13 + 0x66 != puVar8) {
                                section..text(puVar13 + 0x66,puVar8,0x12);
                            }
                            uVar12 = puVar8[2];
                            *(puVar13 + 6) = uVar12;
                            iVar2 = *(puVar8 + 10);
                            *(puVar13 + 2) = iVar2;
                            uStack_70 = 5;
                            uStackX_20 = 0;
                            for (puVar22 = *(*0x39420 + 0x756); puVar22 != *0x39420 + 0x756; puVar22 = *puVar22) {
                                if ((*(puVar22 + 2) == uVar12) && (*(puVar22 + 0x12) == iVar2)) {
                                    uStackX_20 = *(puVar22 + 0x14) - 1;
                                    break;
                                }
                            }
                            if (*(puVar13 + 0xe) == '\x02') {
                                fcn.0002bb74(100,*0x39420);
                            }
                            if (((*(*0x39420 + 0x921) & 1) != 0) && (0x2ff < *(puVar13 + 0x19a))) {
                                fcn.00013418(arg1,puVar13);
                            }
                            while( true ) {
                                puVar8 = puVar13;
                                puVar19 = arg3_00;
                                arg3_01 = fcn.000144ec(arg1,puVar13,arg3_00,0xff);
                                if (arg3_01 == NULL) break;
                                uVar6 = *(arg3_01 + 2);
                                if (0xff < uVar6) {
                                    if (0x7ff < uVar6) {
                                        uVar6 = 0x7ff;
                                    }
                                    puVar8 = puVar13;
                                    puVar19 = arg3_00;
                                    arg3_01 = fcn.000144ec(arg1,puVar13,arg3_00,uVar6);
                                    if (arg3_01 == NULL) break;
                                }
                                if (*(puVar13 + 0xe) == '\x02') {
                                    fcn.0002bb74(100,puVar8);
                                }
                                if (arg3_01[1] == 2) {
                                    if (*arg3_01 == 0) {
                                        *arg3_01 = 9;
                                    }
                                    puVar8 = arg1;
                                    puVar19 = arg3_01;
                                    fcn.0002c048(arg1,puVar13,arg3_01);
                                    arg1_00 = *arg3_01;
                                    *(puVar13 + 0x12) = arg3_01[5];
                                    while( true ) {
                                        if (((uVar6 <= arg1_00) || (puVar19 = arg1_00 + arg3_01, *puVar19 == 0)) ||
                                           (uVar12 = *puVar19 + arg1_00, puVar8 = uVar12, uVar6 < uVar12))
                                        goto code_r0x000139e5;
                                        if ((puVar19[1] == 4) && (puVar19[3] != 0)) break;
                                        arg1_00 = arg1_00 + *puVar19;
                                    }
                                    *puVar13 = *puVar13 | 0x200;
code_r0x000139e5:
                                    uVar16 = *arg3_01;
                                    uStack_88 = *arg3_01;
                                    if (uStack_88 < uVar6) {
                                        while ((arg3_01[uVar16] != 0 &&
                                               (uVar12 = arg3_01[uVar16] + uVar16, puVar8 = uVar12, uVar12 <= uVar6)))
                                        {
                                            uVar18 = uVar16;
                                            if ((arg3_01[uVar16 + 1] == 4) && (arg3_01[uVar16 + 3] == 0)) {
                                                *(puVar13 + 0x13) = arg3_01[uVar16 + 2];
                                                *(puVar13 + 5) = 0;
                                                if (((bVar3) && ((*(*0x39420 + 0x921) & 4) != 0)) &&
                                                   ((**0x39420 & 0x4000000) == 0)) {
                                                    uVar7 = fcn.00011270(puVar8,arg1_00);
                                                    *(puVar13 + 0x20) = uVar7;
                                                }
                                                arg1_00 = puVar13;
                                                puVar19 = arg3_01;
                                                uVar21 = uVar16;
                                                fcn.00014ba4(puVar8,puVar13,arg3_01,uVar16);
                                                if ((puVar13[0x1f] & 4) == 0) {
                                                    uVar15 = arg3_01[uVar16 + 5];
                                                    puVar19 = *(arg1 + 0x2a);
                                                    arg1_00 = CONCAT71(arg1_00 >> 8,*(puVar13 + 0xd));
                                                    puVar8 = CONCAT71(puVar8 >> 8,puVar13[3]);
                                                    uVar23 = 1;
                                                    cVar5 = fcn.0002d9a0(puVar8,arg1_00,puVar19,
                                                                         CONCAT71(uVar21 >> 8,uVar15));
                                                    if (cVar5 != '\0') goto code_r0x00013c65;
                                                    uVar17 = arg3_01[uVar16 + 6];
                                                    Var14 = arg1_00 >> 8;
                                                    puVar22 = 0x39450;
                                                    uVar1 = arg3_01[uVar16 + 7];
                                                    puVar19 = CONCAT71(puVar19 >> 8,uVar1);
                                                    cVar5 = -1;
                                                    iStack_78 = 0;
                                                    uVar18 = 0;
                                                    do {
                                                        pcStack_58 = puVar22 + -2;
                                                        if (*pcStack_58 != '\0') {
                                                            if (*puVar22 == NULL) {
                                                                if (((*(puVar22 + -0xf) == uVar15) ||
                                                                    (*(puVar22 + -0xe) == uVar17)) ||
                                                                   (*(puVar22 + -0xd) == puVar19)) {
                                                                    cVar5 = *pcStack_58;
                                                                    if (cVar5 != -1) goto code_r0x00013b56;
                                                                    break;
                                                                }
                                                            }
                                                            else {
                                                                uVar20 = CONCAT71(puVar19 >> 8,uVar17);
                                                                uVar7 = CONCAT71(Var14,uVar15);
                                                                cVar5 = (**puVar22)(puVar13,uVar7,uVar20,
                                                                                    CONCAT71(iStack_78 >> 8,puVar19),
                                                                                    uVar23);
                                                                Var14 = uVar7 >> 8;
                                                                puVar19 = CONCAT71(uVar20 >> 8,uVar1);
                                                                if (cVar5 != -1) {
code_r0x00013b56:
                                                                    *(puVar13 + 1) = cVar5;
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                        iStack_78 = iStack_78 + 1;
                                                        uVar18 = uVar18 + 0x30;
                                                        puVar22 = puVar22 + 6;
                                                    } while (uVar18 < 0x150);
                                                    *(puVar13 + 0x16) = uVar17;
                                                    *(puVar13 + 0x57) = uVar15;
                                                    *(puVar13 + 0x59) = puVar19;
                                                    puVar8 = arg1;
                                                    arg1_00 = puVar13;
                                                    puVar10 = fcn.000149a8(arg1,puVar13);
                                                    puVar11 = puVar10;
                                                    if (cVar5 != -1) {
                                                        if (puVar10 != NULL) {
                                                            *(puVar10 + 0x26) = iStack_78;
                                                            puVar8 = arg1;
                                                            puVar19 = arg3_01;
                                                            puVar11 = (**(pcStack_58 + 0x18))
                                                                                (arg1,puVar10,arg3_01,uStack_88,
                                                                                 uVar6);
                                                            arg1_00 = puVar10;
                                                            if ((puVar11 != NULL) && ((*puVar11 & 1) != 0))
                                                            goto code_r0x00013bd0;
                                                        }
code_r0x00013c60:
                                                        uVar18 = uStack_88;
                                                        goto code_r0x00013c65;
                                                    }
code_r0x00013bd0:
                                                    if (puVar11 == NULL) goto code_r0x00013c60;
                                                    bVar3 = true;
                                                    puVar13 = *0x39420;
                                                    if (((*(*0x39420 + 0x921) & 4) != 0) &&
                                                       ((**0x39420 & 0x4000000) == 0)) {
                                                        uVar7 = fcn.00011270(*0x39420,arg1_00);
                                                        *(puVar11 + 0x22) = uVar7;
                                                    }
                                                    puVar8 = CONCAT71(puVar13 >> 8,1);
                                                    cStackX_10 = '\x01';
                                                    if (((**0x39420 & 0x10000) != 0) && (*(puVar11 + 0x57) == '\b')) {
                                                        bVar4 = true;
                                                    }
                                                    uVar18 = uStack_88;
                                                    puVar13 = puVar11;
                                                }
                                                else {
code_r0x00013c65:
                                                    puVar8 = CONCAT71(puVar8 >> 8,cStackX_10);
                                                }
                                                if ((1 < arg3_01[4]) && (puVar8 != '\0')) {
                                                    puVar8 = *(*0x2e7c0 + 0x42);
                                                    *puVar8 = *puVar8 | 8;
                                                }
                                            }
                                            if ((arg3_01[uVar16] == 0) ||
                                               ((arg3_01[uVar16 + 1] == 4 && (arg3_01[uVar16 + 5] == 9)))) break;
                                            uStack_88 = uVar18 + arg3_01[uVar16];
                                            uVar16 = uStack_88;
                                            if (uVar6 <= uStack_88) break;
                                            puVar13 = *(*0x2e7c0 + 0x42);
                                        }
                                        arg3_00 = puStack_60;
                                        if (cStackX_10 != '\0') {
                                            uStack_70 = *(*0x2e7c0 + 0x42);
                                            if (!bVar4) {
                                                fcn.0001d028(CONCAT71(puVar8 >> 8,4),0x1000);
                                            }
                                            goto code_r0x00013dc4;
                                        }
                                    }
                                }
                                uStackX_20 = uStackX_20 + 1;
                                if (*(puVar13 + 0x1a9) <= uStackX_20) break;
                            }
                        }
                    }
                }
            }
            puVar8 = *0x39420;
            if ((*0x39420)[0x19] < 0x30) {
                *(*0x39420 + (*0x39420)[0x19] * 2 + 4) = uStack_70;
                *(*0x39420 + 0x19) = (*0x39420)[0x19] + '\x01';
            }
            fcn.0001d028(CONCAT71(puVar8 >> 8,8),0x2000);
            puVar8 = puVar13;
            fcn.0002c1e0(arg1,puVar13);
            if ((*(puVar13 + 0xc) != 0) && (puVar13[0xe] != 0)) {
                puVar8 = puVar13[0xe] + 0x1f >> 5;
                fcn.00014358(*(puVar13 + 0xc),puVar8);
            }
            if (4 < uStack_70) {
                fcn.000132a8(arg1,CONCAT71(puVar8 >> 8,puVar13[3]),CONCAT71(puVar19 >> 8,*(puVar13 + 0xd)));
                uStack_70 = 0;
            }
            if (*(puVar13 + 10) != '\0') {
                *(*0x39420 + 0x5a5) = *(*0x39420 + 0x5a5) | 1LL << (*(puVar13 + 10) & 0x3f);
            }
code_r0x00013dc4:
            fcn.00014358(puStack_60,0x40);
            return uStack_70;
        }
        fcn.00014358(arg3_00,0x40);
        uVar16 = 2;
        puVar19 = arg3_00;
    }
    fcn.0001d028(CONCAT71(puVar19 >> 8,8),0x2000);
    return uVar16;
}


/* fcn.00013f6c @ 0x13f6c */

uchar fcn.00013f6c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    unkbyte7 Var1;
    unkbyte7 Var2;
    
    Var2 = arg3 >> 8;
    Var1 = arg2 >> 8;
    fcn.000132a8(arg1,arg2,arg3);
    fcn.00013de8(arg1,CONCAT71(Var1,arg2),CONCAT71(Var2,arg3));
    return 0;
}


/* fcn.0001ce98 @ 0x1ce98 */

uint64_t fcn.0001ce98(int64_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    
    uVar2 = 0;
    if (arg1 != 0) {
        uVar1 = *(*0x2e7c0 + 0x10);
        if (uVar1 != 0) {
            do {
                if (arg1 == *(*0x2e7e0 + uVar2 * 8)) break;
                uVar2 = uVar2 + 1;
            } while (uVar2 < uVar1);
        }
        if (uVar2 != uVar1) {
            return -((*(arg1 + 0x58) & 0xc) != 0xc) & 0x800000000000000f;
        }
    }
    return 0x800000000000000f;
}


/* fcn.000148c8 @ 0x148c8 */

uint32_t * fcn.000148c8(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    int64_t iVar1;
    uint32_t *puVar2;
    uint32_t *puVar3;
    uint8_t uVar4;
    bool bVar5;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    puVar3 = NULL;
    uVar4 = 1;
    if (1 < (*0x39420)[0x716]) {
        do {
            puVar2 = uVar4 * 0x1c0 + *(*0x2e7c0 + 0x42);
            if ((*puVar2 & 0x20) == 0) {
                if ((*puVar2 & 1) == 0) {
                    if (puVar3 != NULL) {
                        puVar2 = puVar3;
                    }
                    puVar3 = puVar2;
                }
                else if (((*puVar2 & 2) == 0) || ((puVar2[3] == *(iVar1 + 0xc) && (*(puVar2 + 0xd) == *(iVar1 + 0xd)))))
                {
                    if ((**0x39420 & 2) == 0) {
                        if ((*(puVar2 + 6) == *(iVar1 + 6)) && (puVar2[2] == *(iVar1 + 8))) {
                            bVar5 = *(puVar2 + 0x13) == *(iVar1 + 0x13);
                            goto code_r0x0001497d;
                        }
                    }
                    else if (((*(puVar2 + 6) == *(iVar1 + 6)) && (puVar2[2] == *(iVar1 + 8))) &&
                            (*(puVar2 + 0x13) == *(iVar1 + 0x13))) {
                        bVar5 = *(puVar2 + 0xe) == *(iVar1 + 0xe);
code_r0x0001497d:
                        if ((bVar5) && (*(puVar2 + 0xf) == arg2)) {
                            *puVar2 = *puVar2 | 0x800;
                            return puVar2;
                        }
                    }
                }
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < (*0x39420)[0x716]);
    }
    return puVar3;
}


/* fcn.00015980 @ 0x15980 */

ulong fcn.00015980(int64_t arg1)

{
    char cVar1;
    char cVar2;
    uint in_R8D;
    
    cVar2 = arg1;
    cVar1 = fcn.0001467c(CONCAT71(arg1 >> 8,0x31),0,CONCAT31(in_R8D >> 8,cVar2),0);
    if (cVar1 != '\0') {
        if (cVar2 == '\x03') {
            cVar2 = *(*0x39420 + 0x717);
        }
        else if (cVar2 == '\t') {
            cVar2 = *(*0x39420 + 0x718);
        }
        else {
            if (cVar2 != '\b') {
                return 0;
            }
            cVar2 = *(*0x39420 + 0x719);
        }
        if ((cVar2 == '\0') || (cVar1 == cVar2)) {
            return 1;
        }
    }
    return 0;
}


/* fcn.000151e8 @ 0x151e8 */

ulong fcn.000151e8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    char cVar2;
    char cVar3;
    char cVar4;
    int64_t iVar5;
    int64_t iVar6;
    unkbyte7 Var8;
    ulong uVar7;
    ulong *puVar9;
    uint64_t uVar10;
    int64_t iStack_40;
    char *pcStack_38;
    
    iStack_40 = 0;
    pcStack_38 = NULL;
    iVar5 = fcn.0001ce98(arg1);
    if ((-1 < iVar5) && (iVar5 = arg2, iVar6 = fcn.0001cef4(arg2), -1 < iVar6)) {
        if (*0x2e7a9 != '\0') {
            iVar6 = fcn.0002bd04(arg3,9);
            iVar5 = -0x7fffffffffffffeb;
            if (iVar6 != -0x7fffffffffffffeb) {
                if (iVar6 < 0) {
                    return 0xff;
                }
                iVar5 = fcn.0002bd04(arg3,*(arg3 + 2));
                if (iVar5 < 0) {
                    return 0xff;
                }
                iVar5 = arg4;
                iVar6 = fcn.0002bd04(arg4,9);
                if (iVar6 < 0) {
                    return 0xff;
                }
            }
            *0x2e7a9 = '\0';
        }
        iVar6 = arg2;
        fcn.00014ba4(iVar5,arg2,arg3,*arg3);
        if ((*(arg2 + 0x7c) & 4) == 0) {
            cVar1 = *(arg4 + 7);
            Var8 = iVar6 >> 8;
            puVar9 = 0x392d0;
            cVar2 = *(arg4 + 5);
            iVar5 = 0;
            cVar3 = *(arg4 + 6);
            uVar10 = 0;
            cVar4 = -1;
            do {
                if (cVar4 != -1) goto code_r0x0001533f;
                pcStack_38 = puVar9 + -2;
                if (*pcStack_38 != '\0') {
                    if (*puVar9 == NULL) {
                        if (((*(puVar9 + -0xf) == cVar2) && (*(puVar9 + -0xe) == cVar3)) && (*(puVar9 + -0xd) == cVar1))
                        {
                            cVar4 = *pcStack_38;
                        }
                    }
                    else {
                        uVar7 = CONCAT71(Var8,cVar2);
                        cVar4 = (**puVar9)(arg2,uVar7,CONCAT71(pcStack_38 >> 8,cVar3),cVar1);
                        Var8 = uVar7 >> 8;
                        if (cVar4 != -1) {
                            iStack_40 = iVar5;
                        }
                    }
                }
                iVar5 = iVar5 + 1;
                uVar10 = uVar10 + 0x30;
                puVar9 = puVar9 + 6;
            } while (uVar10 < 0x150);
            if (cVar4 != -1) {
code_r0x0001533f:
                *(arg2 + 4) = cVar4;
                *(arg2 + 0x98) = iStack_40 + 0x80000000;
                iVar5 = (**(pcStack_38 + 0x18))(arg1,arg2,arg3,arg4 - arg3,*(arg3 + 2));
                if ((iVar5 != 0) && (*(arg2 + 0x98) == iStack_40 + 0x80000000)) {
                    return 0;
                }
            }
        }
    }
    return 0xff;
}


/* fcn.00012650 @ 0x12650 */

void fcn.00012650(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    ulong *arg1_00;
    uint8_t uVar3;
    
    cVar1 = *(arg1 + 1);
    *0x2e7a9 = 0;
    uVar3 = (*(*0x2e7c0 + 0x32) - *0x39420) + 0x2a;
    arg1_00 = arg1;
    if (cVar1 == '\0') {
        fcn.00012578(arg1,arg2);
        arg1_00 = *0x2e7b0;
        for (; *0x2e7b0 = arg1_00, uVar3 != 0; uVar3 = uVar3 - 1) {
            fcn.00016f04((uVar3 - 1) + *0x39420 + 0x5b6);
            arg1_00 = *0x2e7b0;
        }
        if (arg1_00 == NULL) {
            return;
        }
        (*arg1_00[1])(arg1_00);
    }
    if (cVar1 == '\x01') {
        *(*0x39420 + 0x6c5) = 0;
        if ((*(*0x39420 + 0x6c9) & 8) != 0) {
            iVar2 = CONCAT71(arg1_00 >> 8,0x40);
            fcn.00012eb4(iVar2);
            arg1_00 = CONCAT71(iVar2 >> 8,0x40);
            fcn.000131bc(arg1_00);
        }
        if ((*(*0x39420 + 0x6c9) & 4) != 0) {
            iVar2 = CONCAT71(arg1_00 >> 8,0x30);
            fcn.00012eb4(iVar2);
            arg1_00 = CONCAT71(iVar2 >> 8,0x30);
            fcn.000131bc(arg1_00);
        }
        if ((*(*0x39420 + 0x6c9) & 1) != 0) {
            iVar2 = CONCAT71(arg1_00 >> 8,0x10);
            fcn.00012eb4(iVar2);
            arg1_00 = CONCAT71(iVar2 >> 8,0x10);
            fcn.000131bc(arg1_00);
        }
        if ((*(*0x39420 + 0x6c9) & 2) != 0) {
            iVar2 = CONCAT71(arg1_00 >> 8,0x20);
            fcn.00012eb4(iVar2);
            fcn.000131bc(CONCAT71(iVar2 >> 8,0x20));
        }
        *(arg1 + 2) = 0;
        if (*0x2e7b0 != NULL) {
            (***0x2e7b0)(*0x2e7b0);
        }
    }
    return;
}


/* fcn.00014ffc @ 0x14ffc */

uint fcn.00014ffc(int64_t arg1,int64_t arg2)

{
    ushort uVar1;
    uint uVar2;
    int64_t iVar3;
    uint8_t *arg3;
    uint16_t uVar4;
    int64_t arg2_00;
    uint8_t uVar5;
    uint8_t *arg4;
    
    iVar3 = fcn.0001ce98(arg1);
    if ((-1 < iVar3) && (iVar3 = fcn.0001cef4(arg2), -1 < iVar3)) {
        *0x2e7a9 = 0;
        if ((*(arg2 + 4) != '\0') && (*(arg2 + 4) != '\x06')) {
            *0x2e7a9 = 0;
            return 0;
        }
        iVar3 = fcn.00014184(0x40);
        if (iVar3 != 0) {
            uVar5 = 0;
            uVar2 = 0xff;
            if (*(arg2 + 0x1a9) != '\0') {
                do {
                    uVar1 = *(*0x39420 + 0x6c0);
                    *(*0x39420 + 0x6c0) = 500;
                    arg2_00 = arg2;
                    arg3 = fcn.000144ec(arg1,arg2,iVar3,0xff);
                    if (arg3 == NULL) {
                        *(*0x39420 + 0x6c0) = uVar1;
                        break;
                    }
                    uVar4 = *(arg3 + 2);
                    if (0xff < uVar4) {
                        if (0x7ff < uVar4) {
                            uVar4 = 0x7ff;
                        }
                        arg2_00 = arg2;
                        arg3 = fcn.000144ec(arg1,arg2,iVar3,uVar4);
                        if (arg3 != NULL) goto code_r0x000150fd;
                        *(*0x39420 + 0x6c0) = uVar1;
code_r0x0001514f:
                        if (arg3 != NULL) {
                            if (0x7ff < *(arg3 + 2)) {
                                arg3[2] = 0xff;
                                arg3[3] = 7;
                            }
                            uVar4 = *arg3;
                            goto code_r0x00015164;
                        }
                        break;
                    }
code_r0x000150fd:
                    *(*0x39420 + 0x6c0) = uVar1;
                    if (*(arg2 + 0xe) == '\x02') {
                        fcn.0002bb74(1000,arg2_00);
                    }
                    if (((arg3 != NULL) && (arg3[1] == 2)) && (*(arg2 + 0x12) == arg3[5])) goto code_r0x0001514f;
                    uVar5 = uVar5 + 1;
                } while (uVar5 < *(arg2 + 0x1a9));
            }
code_r0x000151ba:
            fcn.00014358(iVar3,0x40);
            return uVar2;
        }
    }
    return 0xff;
code_r0x00015164:
    if (*(arg3 + 2) <= uVar4) goto code_r0x000151ba;
    arg4 = arg3 + uVar4;
    if (*arg4 == 0) goto code_r0x000151ba;
    if (((arg4[1] == 4) && (*(arg2 + 0x13) == arg4[2])) && (*(arg2 + 0x14) == arg4[3])) {
        uVar2 = fcn.000151e8(arg1,arg2,arg3,arg4);
        goto code_r0x000151ba;
    }
    uVar4 = uVar4 + *arg4;
    goto code_r0x00015164;
}


/* fcn.00015ca0 @ 0x15ca0 */

char fcn.00015ca0(void)

{
    uint8_t uVar1;
    int16_t iVar2;
    char cVar3;
    
    cVar3 = '\x10';
    iVar2 = -1;
    do {
        while( true ) {
            uVar1 = in(100);
            uVar1 = uVar1 & 2;
            if ((uVar1 == 0) || (iVar2 == 0)) break;
            iVar2 = iVar2 + -1;
        }
        cVar3 = cVar3 + -1;
    } while ((cVar3 != '\0') && (uVar1 != 0));
    return -(uVar1 != 0);
}


/* fcn.00015cd4 @ 0x15cd4 */

uint8_t fcn.00015cd4(void)

{
    uint8_t uVar1;
    int16_t iVar2;
    char cVar3;
    
    cVar3 = '\x10';
    iVar2 = -1;
    do {
        while( true ) {
            uVar1 = in(100);
            uVar1 = uVar1 & 1;
            if ((uVar1 != 0) || (iVar2 == 0)) break;
            iVar2 = iVar2 + -1;
        }
        cVar3 = cVar3 + -1;
    } while ((cVar3 != '\0') && (uVar1 == 0));
    return ~-(uVar1 != 0);
}


/* fcn.00015d08 @ 0x15d08 */

char fcn.00015d08(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    char cVar2;
    uchar uVar3;
    int16_t iVar4;
    uchar uVar5;
    
    uVar5 = arg2;
    uVar3 = arg1;
    cVar2 = fcn.00015ca0();
    if (cVar2 == '\0') {
        cVar2 = fcn.00015ca0();
        if (cVar2 == '\0') {
            out(100,uVar3);
        }
        cVar2 = fcn.00015ca0();
        if (cVar2 == '\0') {
            out(0x60,uVar5);
        }
    }
    cVar2 = '\x10';
    iVar4 = -1;
    do {
        while( true ) {
            uVar1 = in(100);
            uVar1 = uVar1 & 2;
            if ((uVar1 == 0) || (iVar4 == 0)) break;
            iVar4 = iVar4 + -1;
        }
        cVar2 = cVar2 + -1;
    } while ((cVar2 != '\0') && (uVar1 != 0));
    return -(uVar1 != 0);
}


/* fcn.00015f40 @ 0x15f40 */

ulong fcn.00015f40(void)

{
    uchar uVar1;
    uint64_t uVar2;
    
    uVar1 = **(*0x2e7c0 + 0x5a);
    uVar2 = *0x2e7c0 >> 8;
    **(*0x2e7c0 + 0x5a) = 0;
    *(*0x2e7c0 + 0x5a) = *(*0x2e7c0 + 0x5a) + 1;
    if (*(*0x2e7c0 + 0x5a) == *0x39420 + 0x6a0) {
        *(*0x2e7c0 + 0x5a) = *0x39420 + 0x694;
    }
    return CONCAT71(uVar2,uVar1);
}


/* fcn.00015df0 @ 0x15df0 */

ulong fcn.00015df0(void)

{
    uchar uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    
    iVar2 = fcn.0002bd04(0x40e,4);
    iVar7 = 0;
    if ((-1 < iVar2) || (iVar2 == -0x7fffffffffffffeb)) {
        iVar6 = *0x40e * 0x10;
        iVar4 = iVar6;
        iVar3 = fcn.0002bd04(iVar6,0x100);
        iVar2 = *0x2e7c0;
        if ((-1 < iVar3) || (iVar3 == -0x7fffffffffffffeb)) {
            uVar5 = CONCAT71(iVar4 >> 8,*(iVar6 + 0x27)) & 0xffffffffffffff07;
            if (*(*0x2e7c0 + 0x52) != *(*0x2e7c0 + 0x5a)) {
                if ((*(*0x39420 + 0x684) & 0x22) == 2) {
                    *(iVar6 + 0x26) = *(iVar6 + 0x26) & 0xf8;
                    if (((*(*0x39420 + 0x6c9) & 0x20000) != 0) && (uVar5 != '\0')) {
                        uVar8 = *(iVar6 + 0x27) & 7;
                        do {
                            uVar1 = fcn.00015f40();
                            *(iVar7 + 0x28 + iVar6) = uVar1;
                            iVar7 = iVar7 + 1;
                            *(iVar6 + 0x26) = *(iVar6 + 0x26) + '\x01';
                            uVar8 = uVar8 - 1;
                        } while (uVar8 != 0);
                    }
                    uVar1 = fcn.00015f40();
                    fcn.00015d08(CONCAT71(uVar5 >> 8,0xd3),CONCAT71(iVar2 >> 8,uVar1));
                    fcn.00015cd4();
                    return 0xff;
                }
                *(*0x2e7c0 + 0x52) = *0x39420 + 0x694;
                *(*0x2e7c0 + 0x5a) = *0x39420 + 0x694;
            }
        }
    }
    return 0;
}


/* fcn.00015f84 @ 0x15f84 */

ulong fcn.00015f84(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    char cVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    char cVar5;
    uint32_t arg2;
    char *pcVar6;
    uchar uVar7;
    uint16_t uVar8;
    bool bVar9;
    uchar uStackX_8;
    
    cVar5 = '\0';
    if (*(*0x39420 + 0x754) != '\0') {
        return 0x8000000000000006;
    }
    if ((*0x2e7b0 != NULL) && (cVar2 = (*(*0x2e7b0)[1])(), cVar2 == '\0')) goto code_r0x000161f8;
    param_2 = 0;
    out(0x20,0xb);
    uVar3 = in(0x20);
    if ((uVar3 & 2) != 0) goto code_r0x000161f8;
    param_2 = 0;
    out(0xa0,0xb);
    uVar3 = in(0xa0);
    if ((uVar3 & 0x10) != 0) goto code_r0x000161f8;
    param_2 = 0;
    uVar3 = in(100);
    if ((uVar3 & 1) != 0) goto code_r0x000161f8;
    uVar8 = 0xc000;
    param_2 = *0x39420;
    if ((*(*0x39420 + 0x66e) & 0xc000) == 0x8000) {
        uVar3 = 0xd2;
        if (*(*0x2e7c0 + 0x22) != *(*0x2e7c0 + 0x2a)) goto code_r0x0001608e;
        if ((*(*0x39420 + 0x711) & 2) != 0) {
            uVar3 = 0xd3;
            bVar9 = *(*0x2e7c0 + 0x52) == *(*0x2e7c0 + 0x5a);
            goto code_r0x0001605a;
        }
code_r0x0001605c:
        if (*(*0x2e7c0 + 0x32) != *0x39420 + 0x5d6) goto code_r0x000161f8;
        arg2 = CONCAT71(*0x39420 >> 8,1);
code_r0x0001606f:
        fcn.00014c7c(0,arg2);
code_r0x00016076:
        if (*0x2e7b0 != NULL) {
            (***0x2e7b0)(*0x2e7b0);
        }
        return 0;
    }
    if (((*(*0x39420 + 0x711) & 2) == 0) || (uVar3 = 0xd3, *(*0x2e7c0 + 0x52) == *(*0x2e7c0 + 0x5a))) {
        uVar3 = 0xd2;
        bVar9 = *(*0x2e7c0 + 0x22) == *(*0x2e7c0 + 0x2a);
code_r0x0001605a:
        if (bVar9) goto code_r0x0001605c;
    }
code_r0x0001608e:
    cVar2 = fcn.00015ca0();
    if (cVar2 != '\0') goto code_r0x000161f8;
    out(100,*(*0x39420 + 0x715));
    do {
        param_2 = 0;
        uVar4 = in(100);
        if ((uVar4 & 1) != 0) {
            uVar7 = 0xae;
            if ((uVar4 & 0x20) == 0) goto code_r0x000161e4;
            goto code_r0x000161f8;
        }
    } while ((uVar4 & 2) != 0);
    *(*0x39420 + 0x66e) = *(*0x39420 + 0x66e) + 0x4000;
    if ((uVar8 & *(*0x39420 + 0x66e)) == 0) {
        param_2 = 0x3fff;
        *(*0x39420 + 0x66e) = *(*0x39420 + 0x66e) & 0x3fff;
    }
    if (((*0x2e7b0 == NULL) || ((*(*0x39420 + 0x684) & 0x22) != 2)) || ((uVar3 & 1) == 0)) {
        cVar2 = fcn.00015ca0();
        if (cVar2 == '\0') {
            param_2 = 0;
            out(100,0x20);
        }
        cVar2 = fcn.00015ca0();
        if (cVar2 != '\0') goto code_r0x000161f8;
        cVar2 = fcn.00015cd4();
        if (cVar2 == '\0') {
            param_2 = 0;
            uStackX_8 = in(0x60);
        }
        *(*0x39420 + 0x684) = uStackX_8;
        iVar1 = *0x39420;
        if ((uVar3 & 1) != 0) goto code_r0x000161c0;
        if ((*(*0x39420 + 0x684) & 0x10) == 0) {
            if ((*(*0x39420 + 0x66e) & 0x400) == 0) {
                cVar5 = **(*0x2e7c0 + 0x2a);
                pcVar6 = *(*0x2e7c0 + 0x2a) + 1;
                if (pcVar6 == *0x39420 + 0x666) {
                    pcVar6 = *0x39420 + 0x5e6;
                }
                *(*0x2e7c0 + 0x2a) = pcVar6;
                if (cVar5 == -1) goto code_r0x000161f8;
            }
            param_2 = CONCAT71(param_2 >> 8,cVar5);
            fcn.00015d08(CONCAT71(iVar1 >> 8,uVar3),param_2);
            fcn.00015cd4();
            goto code_r0x000161b9;
        }
    }
    else {
code_r0x000161c0:
        if ((*(*0x39420 + 0x711) & 2) != 0) {
            cVar5 = fcn.00015df0();
            if (cVar5 == '\0') goto code_r0x00016076;
code_r0x000161b9:
            arg2 = CONCAT71(param_2 >> 8,2);
            goto code_r0x0001606f;
        }
    }
    uVar7 = 0xff;
code_r0x000161e4:
    cVar5 = fcn.00015ca0();
    if (cVar5 == '\0') {
        param_2 = 0;
        out(100,uVar7);
    }
    fcn.00015ca0();
code_r0x000161f8:
    fcn.00014c7c(0,CONCAT71(param_2 >> 8,2));
    if (*0x2e7b0 != NULL) {
        (***0x2e7b0)(*0x2e7b0);
    }
    return 0x8000000000000006;
}


/* fcn.00015d48 @ 0x15d48 */

void fcn.00015d48(ulong *param_1)

{
    ulong *puVar1;
    uint8_t uVar2;
    uchar uVar3;
    char cVar4;
    uchar uVar5;
    ulong uVar6;
    uint8_t uVar7;
    
    uVar3 = 0;
    if (*0x2e7b0 != NULL) {
        param_1 = *0x2e7b0;
        (*(*0x2e7b0)[1])(*0x2e7b0);
    }
    uVar2 = in(100);
    uVar7 = uVar2 & 1;
    if (uVar7 != 0) {
        uVar3 = in(0x60);
    }
    uVar6 = 0;
    cVar4 = fcn.00015ca0();
    if (cVar4 == '\0') {
        cVar4 = fcn.00015ca0();
        if (cVar4 == '\0') {
            uVar6 = 0;
            out(100,0x20);
        }
        cVar4 = fcn.00015ca0();
        if (cVar4 == '\0') {
            cVar4 = fcn.00015cd4();
            puVar1 = *0x39420;
            if (cVar4 == '\0') {
                uVar6 = 0;
                uVar5 = in(0x60);
                *(*0x39420 + 0x684) = uVar5;
                param_1 = puVar1;
            }
        }
    }
    if (uVar7 != 0) {
        fcn.00015d08(CONCAT71(param_1 >> 8,uVar2 >> 5) & 0xffffffffffffff01 | 0xd2,CONCAT71(uVar6 >> 8,uVar3));
    }
    if (*0x2e7b0 != NULL) {
        (***0x2e7b0)(*0x2e7b0);
    }
    return;
}


/* fcn.00016fb8 @ 0x16fb8 */

//WARNING: Removing unreachable block (ram,0x00014f56)
//WARNING: Removing unreachable block (ram,0x00014f5b)
//WARNING: Removing unreachable block (ram,0x00014e55)
//WARNING: Removing unreachable block (ram,0x00014e5e)
//WARNING: Removing unreachable block (ram,0x00014e7c)
//WARNING: Removing unreachable block (ram,0x00014e8b)
//WARNING: Removing unreachable block (ram,0x00014e94)
//WARNING: Removing unreachable block (ram,0x00014e9d)
//WARNING: Removing unreachable block (ram,0x00014eb3)
//WARNING: Removing unreachable block (ram,0x00014ebc)
//WARNING: Removing unreachable block (ram,0x00014eff)
//WARNING: Removing unreachable block (ram,0x00014f09)
//WARNING: Removing unreachable block (ram,0x00014f1e)
//WARNING: Removing unreachable block (ram,0x00014f47)
//WARNING: Removing unreachable block (ram,0x00014ec8)
//WARNING: Removing unreachable block (ram,0x00014ed1)
//WARNING: Removing unreachable block (ram,0x00014f4d)
//WARNING: Removing unreachable block (ram,0x00014cac)
//WARNING: Removing unreachable block (ram,0x00014cb5)
//WARNING: Removing unreachable block (ram,0x00014cbe)
//WARNING: Removing unreachable block (ram,0x00014cd3)
//WARNING: Removing unreachable block (ram,0x00014cef)
//WARNING: Removing unreachable block (ram,0x00014cf8)
//WARNING: Removing unreachable block (ram,0x00014d04)
//WARNING: Removing unreachable block (ram,0x00014d09)
//WARNING: Removing unreachable block (ram,0x00014d12)
//WARNING: Removing unreachable block (ram,0x00014d1d)
//WARNING: Removing unreachable block (ram,0x00014d3c)
//WARNING: Removing unreachable block (ram,0x00014d19)
//WARNING: Removing unreachable block (ram,0x00014f60)

void fcn.00016fb8(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    int64_t iVar3;
    uchar *puVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    uchar *puVar7;
    
    puVar4 = *0x39420 + 0x666;
    puVar7 = *(*0x2e7c0 + 0x22);
    *puVar7 = arg1;
    puVar7 = puVar7 + 1;
    if (puVar7 == puVar4) {
        puVar7 = *0x39420 + 0x5e6;
    }
    *(*0x2e7c0 + 0x22) = puVar7;
    if (*0x2e7e8 == '\0') {
        if ((((*(*0x39420 + 0x6cd) == '\0') && ((*(*0x39420 + 0x6c9) & 0x400) != 0)) && (*(*0x39420 + 0x6cf) != '\0'))
           && (uVar6 = 0, *(*0x2e7c0 + 0x10) != '\0')) {
            do {
                if ((*(*(*0x2e7e0 + uVar6 * 8) + 0x58) & 0x11) == 0x11) goto code_r0x00014e49;
                uVar5 = uVar6 + 1;
                uVar6 = uVar5;
            } while (uVar5 < *(*0x2e7c0 + 0x10));
        }
        if ((*(*0x39420 + 0x6c9) & 0x800000) == 0) {
            if (*(*0x39420 + 0x686) != 0) {
                iVar1 = *(*0x2e7e0 + (*(*0x39420 + 0x686) - 1) * 8);
                iVar3 = fcn.0002bd84();
                if ((-1 < iVar3) &&
                   (pcVar2 = *((*(iVar1 + 1) - 0x10 >> 4 & 3) * 200 + 0x90 + *0x2e848), pcVar2 != NULL)) {
                    (*pcVar2)(iVar1);
                }
            }
        }
        else {
            iVar1 = *(*0x2e7c0 + 0x3a);
            if (iVar1 != 0) {
                fcn.0002bf14(*(*0x2e7e0 + (*(iVar1 + 0xb) - 1) * 8),iVar1,0xa21,*(iVar1 + 0x13));
            }
        }
code_r0x00014e49:
        *0x2e7e8 = '\x01';
    }
    return;
}


/* fcn.000165f8 @ 0x165f8 */

uint64_t fcn.000165f8(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    int16_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    char cVar6;
    int16_t iVar7;
    uint16_t uVar8;
    uint8_t *puVar9;
    ulong uVar10;
    uint8_t uVar11;
    int64_t iVar12;
    uint16_t uVar13;
    int16_t iVar14;
    uint16_t uVar15;
    int64_t iVar16;
    uint8_t uVar17;
    
    uVar5 = 0;
    uVar17 = 0;
    *(*0x39420 + 0x66e) = *(*0x39420 + 0x66e) & 0xdfff;
    if (arg1 != ' ') {
        *(*0x39420 + 0x66e) = *(*0x39420 + 0x66e) | 0x2000;
    }
    *(*0x39420 + 0x666) = arg2;
    cVar6 = *((arg2 & 0xffU) + 0x2e5f0);
    *(*0x39420 + 0x66b) = cVar6;
    iVar7 = 2;
    uVar8 = 0;
    if (cVar6 != '\x12') {
        iVar7 = 0;
    }
    if (cVar6 == 'Y') {
        iVar7 = 1;
    }
    if (cVar6 == '\x14') {
        iVar7 = 4;
    }
    iVar14 = 0x94;
    if (cVar6 != '\x14') {
        iVar14 = 0;
    }
    if (cVar6 == -0x6c) {
        iVar14 = 0x14;
    }
    iVar2 = 4;
    if (cVar6 != -0x6c) {
        iVar2 = iVar7;
    }
    if (cVar6 == '\x11') {
        iVar2 = 8;
        iVar14 = 0x91;
    }
    if (cVar6 == -0x6f) {
        iVar14 = 0x11;
    }
    iVar7 = 8;
    if (cVar6 != -0x6f) {
        iVar7 = iVar2;
    }
    uVar3 = 0xff;
    uVar13 = iVar7 * 0x100 + iVar14;
    if (uVar13 >> 8 != 0) {
        uVar11 = uVar13 >> 8;
        if ((*(*0x39420 + 0x66e) & 0x2000) == 0) {
            *(*0x39420 + 0x667) = *(*0x39420 + 0x667) | uVar11;
        }
        else {
            uVar15 = uVar13 >> 8 & 3;
            if (uVar15 == 0) {
                puVar9 = *(*0x2e7c0 + 0x32);
                if (puVar9 != *0x39420 + 0x5d6) {
                    do {
                        puVar9 = puVar9 + -1;
                        uVar17 = *(*puVar9 + 0x2e5f0);
                        if ((uVar13 & 0xff) == 0) break;
                    } while (puVar9 != *0x39420 + 0x5d6);
                }
            }
            uVar3 = uVar17;
            if ((uVar17 != uVar13) || (uVar15 != 0)) {
                uVar11 = ~uVar11;
                *(*0x39420 + 0x667) = *(*0x39420 + 0x667) & uVar11;
                uVar3 = *0x39420;
                puVar9 = (arg3 & 0xffffU) + 0x5b6 + *0x39420;
                *puVar9 = *puVar9 & uVar11;
            }
        }
    }
    uVar17 = *(*0x39420 + 0x66b);
    if (uVar17 == 0xfe) {
        if ((*(*0x39420 + 0x66e) & 0x2000) != 0) {
            return uVar3;
        }
        uVar3 = 0;
        uVar8 = (*(*0x2e7c0 + 0x32) - *0x39420) + 0x2a;
        if (uVar8 != 0) {
            do {
                if (((*(uVar3 + 0x5c6 + *0x39420) & *(*0x39420 + 0x66d)) != 0) &&
                   (cVar6 = *(uVar3 + 0x5d6 + *0x39420), *(*0x39420 + 0x666) == cVar6)) {
                    return CONCAT71(uVar3 >> 8,cVar6);
                }
                uVar13 = uVar3 + 1;
                uVar3 = uVar13;
            } while (uVar13 < uVar8);
        }
        uVar11 = *(*0x39420 + 0x667) & 4;
        iVar4 = 0x2e2f8;
        iVar16 = 0x2e25c;
code_r0x000168df:
        if (uVar11 != 0) {
            iVar16 = iVar4;
        }
    }
    else {
        if (uVar17 == 0xfc) {
            if ((*(*0x39420 + 0x667) & 8) == 0) {
                iVar16 = 0x2e258;
                if ((*(*0x39420 + 0x667) & 7) == 0) {
                    iVar16 = 0x2e23c;
                }
                goto code_r0x00016978;
            }
        }
        else {
            uVar3 = 0;
            do {
                if (*(uVar3 + 0x2e5d8) == uVar17) {
                    uVar11 = *(*0x39420 + 0x667);
                    if (((uVar11 & 0x13) == 0) || ((uVar11 & 0x11) == 0x11 || (uVar11 & 0x12) == 0x12))
                    goto code_r0x00016971;
                    if ((uVar11 & 0x10) == 0) {
                        iVar16 = 0x2e238;
                        goto code_r0x00016978;
                    }
                    iVar16 = 0x2e23c;
                    if (((*(*0x39420 + 0x66e) & 0x2000) != 0) ||
                       (uVar13 = (*(*0x2e7c0 + 0x32) - *0x39420) + 0x2a, uVar13 == 0)) goto code_r0x00016978;
                    goto code_r0x0001693f;
                }
                uVar11 = uVar3 + 1;
                uVar3 = uVar11;
            } while (uVar11 < 10);
            uVar3 = 0;
            do {
                if (*(uVar3 + 0x2e6f0) == uVar17) goto code_r0x00016971;
                uVar11 = uVar3 + 1;
                uVar3 = uVar11;
            } while (uVar11 < 6);
            if (uVar17 == 0xca) {
                uVar11 = *(*0x39420 + 0x667) & 3;
                iVar4 = 0x2e238;
                iVar16 = 0x2e258;
                goto code_r0x000168df;
            }
        }
        iVar16 = 0x2e2fc;
    }
    goto code_r0x00016978;
code_r0x00016971:
    iVar16 = 0x2e258;
    goto code_r0x00016978;
    while (uVar13 = uVar5 + 1, uVar5 = uVar13, uVar13 < uVar8) {
code_r0x00016c23:
        if (((*(uVar5 + 0x5c6 + *0x39420) & *(*0x39420 + 0x66d)) != 0) &&
           (*(*0x39420 + 0x666) == *(uVar5 + 0x5d6 + *0x39420))) goto code_r0x00016a86;
    }
    goto code_r0x00016c4d;
    while (uVar8 = uVar8 + 1, uVar8 < uVar13) {
code_r0x0001693f:
        if (((*(uVar8 + 0x5c6 + *0x39420) & *(*0x39420 + 0x66d)) != 0) &&
           (*(*0x39420 + 0x666) == *(uVar8 + 0x5d6 + *0x39420))) goto code_r0x00016971;
    }
code_r0x00016978:
    iVar12 = *(*0x2e7c0 + 0x22);
    uVar11 = *(*0x39420 + 0x66e) >> 0xc & 2;
    iVar4 = iVar12 + 0x80;
    uVar3 = uVar11 + 1;
    if ((*(*0x39420 + 0x684) & 0x40) != 0) {
        uVar3 = uVar11;
    }
    cVar6 = *(uVar3 + iVar16) + '\x01';
    do {
        iVar12 = iVar12 + 1;
        if (iVar12 == iVar4) {
            iVar12 = *0x39420 + 0x5e6;
        }
        if (iVar12 == *(*0x2e7c0 + 0x2a)) {
            return uVar3;
        }
        cVar6 = cVar6 + -1;
    } while (cVar6 != '\0');
    if (uVar17 == 0xfe) {
        if ((*(*0x39420 + 0x667) & 4) == 0) {
            uVar10 = 0;
            fcn.00016fb8(0xe1);
            *(*0x39420 + 0x66b) = 0x14;
            fcn.00016e7c();
            *(*0x39420 + 0x66b) = 0x77;
            fcn.00016e7c();
            fcn.00016fb8(CONCAT71(uVar10 >> 8,0xe1));
            *(*0x39420 + 0x66b) = 0x14;
            fcn.00016eb4();
            *(*0x39420 + 0x66b) = 0x77;
        }
        else {
            iVar16 = 0;
            *(*0x39420 + 0x66b) = 0x7e;
            fcn.00016fb8(0xe0);
            fcn.00016e7c();
code_r0x00016a52:
            fcn.00016fb8(CONCAT71(iVar16 >> 8,0xe0));
        }
code_r0x00016a59:
        uVar5 = fcn.00016eb4();
    }
    else {
        if (uVar17 == 0xfc) {
            *(*0x39420 + 0x66b) = 0x7c;
            if ((*(*0x39420 + 0x667) & 8) == 0) {
                if ((*(*0x39420 + 0x667) & 7) == 0) {
code_r0x00016c4d:
                    if ((*(*0x39420 + 0x66e) & 0x2000) == 0) {
                        uVar1 = *(*0x39420 + 0x66b);
                        iVar16 = 0;
                        *(*0x39420 + 0x66b) = 0x12;
                        fcn.00016fb8(0xe0);
                        fcn.00016e7c();
                        *(*0x39420 + 0x66b) = uVar1;
                        goto code_r0x00016a90;
                    }
code_r0x00016c82:
                    iVar16 = 0;
                    fcn.00016fb8(0xe0);
                    fcn.00016eb4();
                    *(*0x39420 + 0x66b) = 0x12;
                }
                else {
code_r0x00016a86:
                    iVar16 = 0;
                    if ((*(*0x39420 + 0x66e) & 0x2000) == 0) goto code_r0x00016a90;
                }
                goto code_r0x00016a52;
            }
            *(*0x39420 + 0x66b) = 0x84;
code_r0x00016b0a:
            if ((*(*0x39420 + 0x66e) & 0x2000) != 0) goto code_r0x00016a59;
        }
        else {
            uVar3 = 0;
            do {
                if (*(uVar3 + 0x2e5d8) == uVar17) {
                    *(*0x39420 + 0x66b) = uVar17 & 0x7f;
                    uVar17 = *(*0x39420 + 0x667);
                    if (((uVar17 & 0x13) == 0) || ((uVar17 & 0x11) == 0x11 || (uVar17 & 0x12) == 0x12))
                    goto code_r0x00016a86;
                    if ((uVar17 & 0x10) == 0) goto code_r0x00016b35;
                    if ((*(*0x39420 + 0x66e) & 0x2000) != 0) goto code_r0x00016c82;
                    uVar8 = (*(*0x2e7c0 + 0x32) - *0x39420) + 0x2a;
                    if (uVar8 == 0) goto code_r0x00016c4d;
                    goto code_r0x00016c23;
                }
                uVar11 = uVar3 + 1;
                uVar3 = uVar11;
            } while (uVar11 < 10);
            do {
                if (*(uVar5 + 0x2e6f0) == uVar17) {
                    *(*0x39420 + 0x66b) = uVar17 & 0x7f;
                    goto code_r0x00016a86;
                }
                uVar11 = uVar5 + 1;
                uVar5 = uVar11;
            } while (uVar11 < 6);
            if (uVar17 != 0xca) goto code_r0x00016b0a;
            *(*0x39420 + 0x66b) = 0x4a;
            if ((*(*0x39420 + 0x66e) & 3) == 0) goto code_r0x00016a86;
code_r0x00016b35:
            iVar16 = 0;
            if ((*(*0x39420 + 0x66e) & 0x2000) == 0) {
                uVar1 = *(*0x39420 + 0x66b);
                if ((*(*0x39420 + 0x667) & 2) != 0) {
                    iVar16 = 0;
                    *(*0x39420 + 0x66b) = 0x12;
                    fcn.00016fb8(0xe0);
                    fcn.00016eb4();
                }
                if ((*(*0x39420 + 0x667) & 1) != 0) {
                    iVar16 = CONCAT71(iVar16 >> 8,0xe0);
                    *(*0x39420 + 0x66b) = 0x59;
                    fcn.00016fb8(iVar16);
                    fcn.00016eb4();
                }
                *(*0x39420 + 0x66b) = uVar1;
            }
            else {
                iVar16 = 0;
                fcn.00016fb8(0xe0);
                fcn.00016eb4();
                if ((*(*0x39420 + 0x667) & 1) != 0) {
                    iVar16 = CONCAT71(iVar16 >> 8,0xe0);
                    *(*0x39420 + 0x66b) = 0x59;
                    fcn.00016fb8(iVar16);
                    fcn.00016e7c();
                }
                if ((*(*0x39420 + 0x667) & 2) == 0) {
                    return *0x39420;
                }
                *(*0x39420 + 0x66b) = 0x12;
            }
code_r0x00016a90:
            fcn.00016fb8(CONCAT71(iVar16 >> 8,0xe0));
        }
        uVar5 = fcn.00016e7c();
    }
    return uVar5;
}


/* fcn.00016e7c @ 0x16e7c */

//WARNING: Removing unreachable block (ram,0x00014f56)
//WARNING: Removing unreachable block (ram,0x00014f5b)
//WARNING: Removing unreachable block (ram,0x00014e55)
//WARNING: Removing unreachable block (ram,0x00014e5e)
//WARNING: Removing unreachable block (ram,0x00014e7c)
//WARNING: Removing unreachable block (ram,0x00014e8b)
//WARNING: Removing unreachable block (ram,0x00014e94)
//WARNING: Removing unreachable block (ram,0x00014e9d)
//WARNING: Removing unreachable block (ram,0x00014eb3)
//WARNING: Removing unreachable block (ram,0x00014ebc)
//WARNING: Removing unreachable block (ram,0x00014eff)
//WARNING: Removing unreachable block (ram,0x00014f09)
//WARNING: Removing unreachable block (ram,0x00014f1e)
//WARNING: Removing unreachable block (ram,0x00014f47)
//WARNING: Removing unreachable block (ram,0x00014ec8)
//WARNING: Removing unreachable block (ram,0x00014ed1)
//WARNING: Removing unreachable block (ram,0x00014f4d)
//WARNING: Removing unreachable block (ram,0x00014cac)
//WARNING: Removing unreachable block (ram,0x00014cb5)
//WARNING: Removing unreachable block (ram,0x00014cbe)
//WARNING: Removing unreachable block (ram,0x00014cd3)
//WARNING: Removing unreachable block (ram,0x00014cef)
//WARNING: Removing unreachable block (ram,0x00014cf8)
//WARNING: Removing unreachable block (ram,0x00014d04)
//WARNING: Removing unreachable block (ram,0x00014d09)
//WARNING: Removing unreachable block (ram,0x00014d12)
//WARNING: Removing unreachable block (ram,0x00014d1d)
//WARNING: Removing unreachable block (ram,0x00014d3c)
//WARNING: Removing unreachable block (ram,0x00014d19)
//WARNING: Removing unreachable block (ram,0x00014f60)

void fcn.00016e7c(void)

{
    int64_t iVar1;
    code *pcVar2;
    int64_t iVar3;
    uint8_t *puVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    uint8_t *puVar7;
    
    if ((*(*0x39420 + 0x684) & 0x40) == 0) {
        uVar5 = *(*0x39420 + 0x66b);
    }
    else {
        uVar5 = *(*(*0x39420 + 0x66b) + 0x2e270);
        uVar5 = uVar5 << 4 | uVar5 >> 4;
        uVar5 = ~(uVar5 << 1 | uVar5 < '\0');
    }
    puVar4 = *0x39420 + 0x666;
    puVar7 = *(*0x2e7c0 + 0x22);
    *puVar7 = uVar5;
    puVar7 = puVar7 + 1;
    if (puVar7 == puVar4) {
        puVar7 = *0x39420 + 0x5e6;
    }
    *(*0x2e7c0 + 0x22) = puVar7;
    if (*0x2e7e8 == '\0') {
        if ((((*(*0x39420 + 0x6cd) == '\0') && ((*(*0x39420 + 0x6c9) & 0x400) != 0)) && (*(*0x39420 + 0x6cf) != '\0'))
           && (uVar6 = 0, *(*0x2e7c0 + 0x10) != '\0')) {
            do {
                if ((*(*(*0x2e7e0 + uVar6 * 8) + 0x58) & 0x11) == 0x11) goto code_r0x00014e49;
                uVar5 = uVar6 + 1;
                uVar6 = uVar5;
            } while (uVar5 < *(*0x2e7c0 + 0x10));
        }
        if ((*(*0x39420 + 0x6c9) & 0x800000) == 0) {
            if (*(*0x39420 + 0x686) != 0) {
                iVar1 = *(*0x2e7e0 + (*(*0x39420 + 0x686) - 1) * 8);
                iVar3 = fcn.0002bd84();
                if ((-1 < iVar3) &&
                   (pcVar2 = *((*(iVar1 + 1) - 0x10 >> 4 & 3) * 200 + 0x90 + *0x2e848), pcVar2 != NULL)) {
                    (*pcVar2)(iVar1);
                }
            }
        }
        else {
            iVar1 = *(*0x2e7c0 + 0x3a);
            if (iVar1 != 0) {
                fcn.0002bf14(*(*0x2e7e0 + (*(iVar1 + 0xb) - 1) * 8),iVar1,0xa21,*(iVar1 + 0x13));
            }
        }
code_r0x00014e49:
        *0x2e7e8 = '\x01';
    }
    return;
}


/* fcn.00016eb4 @ 0x16eb4 */

//WARNING: Removing unreachable block (ram,0x00014f56)
//WARNING: Removing unreachable block (ram,0x00014f5b)
//WARNING: Removing unreachable block (ram,0x00014e55)
//WARNING: Removing unreachable block (ram,0x00014e5e)
//WARNING: Removing unreachable block (ram,0x00014e7c)
//WARNING: Removing unreachable block (ram,0x00014e8b)
//WARNING: Removing unreachable block (ram,0x00014e94)
//WARNING: Removing unreachable block (ram,0x00014e9d)
//WARNING: Removing unreachable block (ram,0x00014eb3)
//WARNING: Removing unreachable block (ram,0x00014ebc)
//WARNING: Removing unreachable block (ram,0x00014eff)
//WARNING: Removing unreachable block (ram,0x00014f09)
//WARNING: Removing unreachable block (ram,0x00014f1e)
//WARNING: Removing unreachable block (ram,0x00014f47)
//WARNING: Removing unreachable block (ram,0x00014ec8)
//WARNING: Removing unreachable block (ram,0x00014ed1)
//WARNING: Removing unreachable block (ram,0x00014f4d)
//WARNING: Removing unreachable block (ram,0x00014cac)
//WARNING: Removing unreachable block (ram,0x00014cb5)
//WARNING: Removing unreachable block (ram,0x00014cbe)
//WARNING: Removing unreachable block (ram,0x00014cd3)
//WARNING: Removing unreachable block (ram,0x00014cef)
//WARNING: Removing unreachable block (ram,0x00014cf8)
//WARNING: Removing unreachable block (ram,0x00014d04)
//WARNING: Removing unreachable block (ram,0x00014d09)
//WARNING: Removing unreachable block (ram,0x00014d12)
//WARNING: Removing unreachable block (ram,0x00014d1d)
//WARNING: Removing unreachable block (ram,0x00014d3c)
//WARNING: Removing unreachable block (ram,0x00014d19)
//WARNING: Removing unreachable block (ram,0x00014f60)

void fcn.00016eb4(ulong param_1)

{
    int64_t iVar1;
    code *pcVar2;
    int64_t iVar3;
    uint8_t *puVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    uint8_t *puVar7;
    
    if ((*(*0x39420 + 0x684) & 0x40) == 0) {
        fcn.00016fb8(CONCAT71(param_1 >> 8,0xf0));
        uVar5 = *(*0x39420 + 0x66b);
    }
    else {
        uVar5 = *(*(*0x39420 + 0x66b) + 0x2e270);
        uVar5 = uVar5 << 4 | uVar5 >> 4;
        uVar5 = ~(uVar5 << 1 | uVar5 < '\0') | 0x80;
    }
    puVar4 = *0x39420 + 0x666;
    puVar7 = *(*0x2e7c0 + 0x22);
    *puVar7 = uVar5;
    puVar7 = puVar7 + 1;
    if (puVar7 == puVar4) {
        puVar7 = *0x39420 + 0x5e6;
    }
    *(*0x2e7c0 + 0x22) = puVar7;
    if (*0x2e7e8 == '\0') {
        if ((((*(*0x39420 + 0x6cd) == '\0') && ((*(*0x39420 + 0x6c9) & 0x400) != 0)) && (*(*0x39420 + 0x6cf) != '\0'))
           && (uVar6 = 0, *(*0x2e7c0 + 0x10) != '\0')) {
            do {
                if ((*(*(*0x2e7e0 + uVar6 * 8) + 0x58) & 0x11) == 0x11) goto code_r0x00014e49;
                uVar5 = uVar6 + 1;
                uVar6 = uVar5;
            } while (uVar5 < *(*0x2e7c0 + 0x10));
        }
        if ((*(*0x39420 + 0x6c9) & 0x800000) == 0) {
            if (*(*0x39420 + 0x686) != 0) {
                iVar1 = *(*0x2e7e0 + (*(*0x39420 + 0x686) - 1) * 8);
                iVar3 = fcn.0002bd84();
                if ((-1 < iVar3) &&
                   (pcVar2 = *((*(iVar1 + 1) - 0x10 >> 4 & 3) * 200 + 0x90 + *0x2e848), pcVar2 != NULL)) {
                    (*pcVar2)(iVar1);
                }
            }
        }
        else {
            iVar1 = *(*0x2e7c0 + 0x3a);
            if (iVar1 != 0) {
                fcn.0002bf14(*(*0x2e7e0 + (*(iVar1 + 0xb) - 1) * 8),iVar1,0xa21,*(iVar1 + 0x13));
            }
        }
code_r0x00014e49:
        *0x2e7e8 = '\x01';
    }
    return;
}


/* fcn.00016cf0 @ 0x16cf0 */

void fcn.00016cf0(void)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint8_t uVar3;
    
    iVar2 = fcn.0002bd04(0x417,1);
    if ((iVar2 < 0) && (iVar2 != -0x7fffffffffffffeb)) {
        return;
    }
    uVar3 = (*0x39420)[0x668];
    if ((uVar3 & 1) == 0) {
        uVar1 = (uVar3 & 7) >> 1;
    }
    else {
        uVar1 = 4;
    }
    (*0x39420)[0x668] = uVar3 & 0xf8;
    (*0x39420)[0x668] = (*0x39420)[0x668] | uVar1;
    if ((*(*0x39420 + 0x66e) & 0x400) == 0) {
        if ((**0x39420 & 0x10) == 0) {
            uVar1 = *0x417 >> 1 & 0x38;
            uVar3 = uVar1 ^ 0x48;
            if ((*0x417 >> 1 & 8) == 0) {
                uVar3 = uVar1;
            }
            if (uVar3 == ((*0x39420)[0x667] & 0x70)) {
                return;
            }
            (*0x39420)[0x667] = (*0x39420)[0x667] & 0x8f;
            (*0x39420)[0x667] = (*0x39420)[0x667] | uVar3;
            goto code_r0x00016df0;
        }
        uVar3 = (*0x39420)[0x669] & 0x70;
    }
    else {
        uVar3 = ((*0x39420)[0x668] & 7) << 4;
    }
    if (((*0x39420)[0x667] & 0x70) == uVar3) {
        return;
    }
    (*0x39420)[0x667] = (*0x39420)[0x667] & 0x8f;
    (*0x39420)[0x667] = (*0x39420)[0x667] | uVar3;
code_r0x00016df0:
    fcn.00016dfc();
    return;
}


/* fcn.00016294 @ 0x16294 */

void fcn.00016294(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    char *pcVar2;
    uint8_t uVar3;
    char cVar4;
    char *pcVar5;
    char *pcVar6;
    uint8_t uVar7;
    uint16_t uVar8;
    int16_t iVar9;
    uint8_t *puVar10;
    uint64_t uVar11;
    int16_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    uint64_t uVar15;
    char *pcVar16;
    uint8_t *puVar17;
    
    iVar14 = *0x39420;
    *(*0x39420 + 0x66d) = '\x01' << (*(arg1 + 10) - 1U & 0x1f);
    puVar17 = iVar14 + 0x674;
    uVar7 = *arg2;
    uVar3 = 0xe0;
    do {
        cVar4 = '\x01';
        if ((uVar7 & 1) != 0) {
            *puVar17 = uVar3;
            puVar17 = puVar17 + 1;
        }
        uVar7 = uVar7 >> 1;
        uVar3 = uVar3 + 1;
    } while (uVar3 < 0xe8);
    puVar10 = arg2 + 2;
    iVar12 = 6;
    while( true ) {
        uVar7 = *puVar10;
        if (uVar7 != 0) {
            if (uVar7 == 1) {
                iVar13 = *(*0x2e7c0 + 0x22);
                iVar14 = iVar13 + 0x80;
                while( true ) {
                    iVar13 = iVar13 + 1;
                    if (iVar13 == iVar14) {
                        iVar13 = *0x39420 + 0x5e6;
                    }
                    if (iVar13 == *(*0x2e7c0 + 0x2a)) break;
                    cVar4 = cVar4 + -1;
                    if (cVar4 == '\0') {
                        fcn.00016fb8(CONCAT71(puVar10 >> 8,0xff));
                        return;
                    }
                }
                return;
            }
            *puVar17 = uVar7;
            puVar17 = puVar17 + 1;
        }
        iVar12 = iVar12 + -1;
        if (iVar12 == 0) break;
        puVar10 = puVar10 + 1;
    }
    *puVar17 = 0;
    iVar12 = (puVar17 - *0x39420) + -0x673;
    pcVar5 = *0x39420 + 0x674;
    if (iVar12 != 0) {
        do {
            if (*pcVar5 != '\0') break;
            pcVar5 = pcVar5 + 1;
            iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        if (iVar12 != 0) goto code_r0x000163b1;
    }
    *(*0x39420 + 0x66c) = *(*0x39420 + 0x66c) | *(*0x39420 + 0x66d);
code_r0x000163b1:
    pcVar5 = *0x39420 + 0x674;
code_r0x000163be:
    cVar4 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    iVar12 = *0x39420;
    if (cVar4 != '\0') {
        uVar15 = 0;
        uVar8 = (*(*0x2e7c0 + 0x32) - iVar12) - 0x5d6;
        uVar11 = uVar8;
        if (uVar8 != 0) goto code_r0x000163e4;
        goto code_r0x00016409;
    }
code_r0x000164c8:
    iVar14 = *0x39420;
    pcVar2 = *0x39420 + 0x5d6;
code_r0x000165b8:
    do {
        pcVar16 = pcVar2;
        if (*(*0x2e7c0 + 0x32) <= pcVar16) {
            *(iVar14 + 0x66c) = *(iVar14 + 0x66c) & ~*(iVar14 + 0x66d);
            return;
        }
        pcVar6 = iVar14 + 0x674;
        for (iVar9 = (pcVar5 - iVar12) + -0x675; pcVar2 = pcVar16 + 1, iVar9 != 0; iVar9 = iVar9 + -1) {
            if (*pcVar16 == *pcVar6) goto code_r0x000165b8;
            pcVar6 = pcVar6 + 1;
        }
        uVar11 = (pcVar16 - iVar14) - 0x5d6;
        puVar17 = uVar11 + 0x5c6 + iVar14;
        *puVar17 = *puVar17 & ~*(iVar14 + 0x66d);
        iVar14 = *0x39420;
        if (*(uVar11 + 0x5c6 + *0x39420) == '\0') {
            uVar1 = *(uVar11 + 0x5b6 + *0x39420);
            *(uVar11 + 0x5b6 + *0x39420) = *(*0x39420 + 0x667);
            *(*0x39420 + 0x667) = uVar1;
            fcn.000165f8(0x30,CONCAT71(iVar14 >> 8,*pcVar16),uVar11);
            uVar1 = *(uVar11 + 0x5b6 + *0x39420);
            *(uVar11 + 0x5b6 + *0x39420) = *(*0x39420 + 0x667);
            *(*0x39420 + 0x667) = uVar1;
            fcn.00016f04(*0x39420 + 0x5b6 + uVar11);
            *(*0x2e7c0 + 0x32) = *(*0x2e7c0 + 0x32) + -1;
            iVar14 = *0x39420;
            pcVar2 = pcVar16;
        }
        else {
        }
    } while( true );
code_r0x000163e4:
    do {
        if (cVar4 == *(uVar15 + 0x5d6 + *0x39420)) {
            puVar17 = uVar15 + 0x5c6 + *0x39420;
            *puVar17 = *puVar17 | *(*0x39420 + 0x66d);
            goto code_r0x000163be;
        }
        uVar7 = uVar15 + 1;
        uVar15 = uVar7;
        uVar8 = uVar11 - 1;
        uVar11 = uVar8;
    } while (uVar8 != 0);
    uVar11 = 0;
    if (0xf < uVar7) goto code_r0x000164c8;
code_r0x00016409:
    fcn.000165f8(CONCAT71(uVar11 >> 8,0x20),CONCAT71(*0x39420 >> 8,cVar4),0);
    *(uVar15 + 0x5d6 + *0x39420) = cVar4;
    *(uVar15 + 0x5c6 + *0x39420) = *(*0x39420 + 0x66d);
    *(uVar15 + 0x5b6 + *0x39420) = *(*0x39420 + 0x667);
    *(*0x2e7c0 + 0x32) = *(*0x2e7c0 + 0x32) + 1;
    if (*(*0x39420 + 0x6c7) == '\0') {
        uVar8 = *(*0x39420 + 0x66e) >> 6 & 7;
    }
    else {
        uVar8 = *(*0x39420 + 0x66e) >> 4 & 5;
    }
    *(*0x39420 + 0x672) = *(uVar8 + 0x2e6f8);
    *(*0x39420 + 0x670) = 0;
    goto code_r0x000163be;
}


/* fcn.00017000 @ 0x17000 */

void fcn.00017000(ulong param_1,ulong param_2)

{
    uint32_t uVar1;
    int iVar2;
    uint8_t uVar3;
    
    uVar3 = (*(*0x2e7c0 + 0x32) - *0x39420) + 0x2a;
    if (uVar3 != 0) {
        *(*0x39420 + 0x670) = *(*0x39420 + 0x670) + 1;
        if (*(*0x39420 + 0x672) <= *(*0x39420 + 0x670)) {
            if (*(*0x39420 + 0x6c7) == '\0') {
                uVar1 = *(*0x39420 + 0x66e) >> 2 & 7;
            }
            else {
                uVar1 = *(*0x39420 + 0x66e) >> 1 & 5;
            }
            *(*0x39420 + 0x672) = *(uVar1 + 0x2e6f8);
            *(*0x39420 + 0x670) = 0;
            if (*(*0x2e7c0 + 0x22) == *(*0x2e7c0 + 0x2a)) {
                iVar2 = uVar3 - 1;
                fcn.000165f8(CONCAT71(iVar2 >> 8,0x20),CONCAT71(param_2 >> 8,*(iVar2 + 0x5d6 + *0x39420)),0);
            }
        }
    }
    return;
}


/* fcn.00011080 @ 0x11080 */

int64_t fcn.00011080(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.000172fc @ 0x172fc */

uint16_t fcn.000172fc(uint32_t arg1)

{
    uint in_register_0000000c;
    uint16_t uVar1;
    
    uVar1 = 0;
    if (*(*0x39420 + 0x717) != 0) {
        do {
            if (*(*(*0x2e7c0 + 0x4a) + uVar1 * 8) == CONCAT44(in_register_0000000c,arg1)) {
                return uVar1;
            }
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(*0x39420 + 0x717));
    }
    return 0xffff;
}


/* fcn.0002aefc @ 0x2aefc */

void fcn.0002aefc(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    char *pcVar3;
    char *pcVar4;
    uint32_t arg2;
    char *pcVar5;
    uint8_t uVar6;
    uint8_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    
    iVar2 = fcn.0002bd04(0x417,1);
    if ((-1 < iVar2) || (iVar2 == -0x7fffffffffffffeb)) {
        pcVar5 = arg1 + 2;
        *0x38dc0 = *pcVar5;
        pcVar4 = 0x38dc0;
        *0x38dc4 = *(arg1 + 6);
        iVar2 = 6;
        uVar7 = *0x417 >> 4;
        iVar9 = 6;
        do {
            if (*pcVar4 != '\0') {
                iVar8 = 6;
                pcVar3 = pcVar5;
                do {
                    if ((*pcVar3 != '\0') && (*pcVar3 == *pcVar4)) {
                        *pcVar3 = '\0';
                    }
                    pcVar3 = pcVar3 + 1;
                    iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
            }
            pcVar4 = pcVar4 + 1;
            iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        uVar7 = uVar7 & 7;
        uVar6 = *0x38dc6 & 7;
        if (uVar7 != uVar6) {
            *0x38dc6 = *0x38dc6 & 0xf8 | uVar7;
            fcn.0002ac48();
            uVar6 = *0x38dc6 & 7;
        }
        iVar9 = 6;
        pcVar4 = pcVar5;
        do {
            if (*pcVar4 == '9') {
                *0x417 = *0x417 ^ 0x40;
                uVar7 = 4;
code_r0x0002b026:
                *0x38dc6 = *0x38dc6 ^ uVar7;
            }
            else {
                if (*pcVar4 == 'G') {
                    *0x417 = *0x417 ^ 0x10;
                    uVar7 = 1;
                    goto code_r0x0002b026;
                }
                if (*pcVar4 == 'S') {
                    *0x417 = *0x417 ^ 0x20;
                    uVar7 = 2;
                    goto code_r0x0002b026;
                }
            }
            pcVar4 = pcVar4 + 1;
            iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        fcn.0002ad10(arg1);
        do {
            arg1 = CONCAT71(arg1 >> 8,*pcVar5);
            if (*pcVar5 != '\0') {
                fcn.0002ae28(arg1);
            }
            pcVar5 = pcVar5 + 1;
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        if (uVar6 != (*0x38dc6 & 7)) {
            fcn.0002ac48();
        }
        if (*(*0x39420 + 0x6c7) == '\0') {
            uVar1 = *(*0x39420 + 0x66e) >> 6 & 7;
        }
        else {
            uVar1 = *(*0x39420 + 0x66e) >> 4 & 5;
        }
        arg2 = 0x2e601;
        *(*0x39420 + 0x672) = *(uVar1 + 0x2e6f8);
        *(*0x39420 + 0x670) = 0;
        if (*0x38dc0 != '\0') {
            arg2 = 0x2e602;
        }
        fcn.00014c7c(0,arg2);
    }
    return;
}


/* fcn.00017a8c @ 0x17a8c */

//WARNING: Removing unreachable block (ram,0x00014cbe)
//WARNING: Removing unreachable block (ram,0x00014cd3)
//WARNING: Removing unreachable block (ram,0x00014cef)
//WARNING: Removing unreachable block (ram,0x00014cf8)
//WARNING: Removing unreachable block (ram,0x00014d04)
//WARNING: Removing unreachable block (ram,0x00014d09)
//WARNING: Removing unreachable block (ram,0x00014d12)
//WARNING: Removing unreachable block (ram,0x00014d1d)
//WARNING: Removing unreachable block (ram,0x00014d3c)
//WARNING: Removing unreachable block (ram,0x00014d19)
//WARNING: Removing unreachable block (ram,0x00014f60)
//WARNING: Removing unreachable block (ram,0x00014cb5)
//WARNING: Removing unreachable block (ram,0x00014ca3)
//WARNING: Removing unreachable block (ram,0x00014cac)
//WARNING: Removing unreachable block (ram,0x00014d50)
//WARNING: Removing unreachable block (ram,0x00014d59)
//WARNING: Removing unreachable block (ram,0x00014d7d)
//WARNING: Removing unreachable block (ram,0x00014d86)
//WARNING: Removing unreachable block (ram,0x00014d8f)
//WARNING: Removing unreachable block (ram,0x00014d98)
//WARNING: Removing unreachable block (ram,0x00014dae)
//WARNING: Removing unreachable block (ram,0x00014db7)
//WARNING: Removing unreachable block (ram,0x00014dfb)
//WARNING: Removing unreachable block (ram,0x00014e05)
//WARNING: Removing unreachable block (ram,0x00014e1a)
//WARNING: Removing unreachable block (ram,0x00014e43)
//WARNING: Removing unreachable block (ram,0x00014dc3)
//WARNING: Removing unreachable block (ram,0x00014dcc)
//WARNING: Removing unreachable block (ram,0x00014e49)
//WARNING: Removing unreachable block (ram,0x00014f56)
//WARNING: Removing unreachable block (ram,0x00014f5b)

void fcn.00017a8c(int64_t arg1)

{
    code *pcVar1;
    int *piVar2;
    uint32_t *puVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uchar *puVar9;
    char cVar10;
    int *piVar11;
    unkbyte7 Var13;
    ulong uVar12;
    uint64_t uVar14;
    ulong in_R8;
    uchar uStackX_10;
    uchar uStackX_11;
    uchar uStackX_12;
    int aiStackX_18 [4];
    
    if ((**0x39420 & 2) != 0) {
        if (*0x2e7e8 != '\0') {
            if ((((*(*0x39420 + 0x6cd) == '\0') && ((*(*0x39420 + 0x6c9) & 0x400) != 0)) &&
                (*(*0x39420 + 0x6cf) != '\0')) && (uVar14 = 0, (*0x2e7c0)[4] != '\0')) {
                do {
                    if ((*(*(*0x2e7e0 + uVar14 * 8) + 0x58) & 0x11) == 0x11) goto code_r0x00014f4d;
                    uVar4 = uVar14 + 1;
                    uVar14 = uVar4;
                } while (uVar4 < *(*0x2e7c0 + 4));
            }
            if ((*(*0x39420 + 0x6c9) & 0x800000) == 0) {
                if (*(*0x39420 + 0x686) != 0) {
                    iVar8 = *(*0x2e7e0 + (*(*0x39420 + 0x686) - 1) * 8);
                    iVar7 = fcn.0002bd84();
                    if ((-1 < iVar7) &&
                       (pcVar1 = *((*(iVar8 + 1) - 0x10 >> 4 & 3) * 200 + 0x88 + *0x2e848), pcVar1 != NULL)) {
                        (*pcVar1)(iVar8);
                    }
                }
            }
            else {
                iVar8 = *(*0x2e7c0 + 0x3a);
                if (iVar8 != 0) {
                    fcn.0002bf14(*(*0x2e7e0 + (*(iVar8 + 0xb) - 1) * 8),iVar8,0xa21,*(iVar8 + 0x13));
                }
            }
code_r0x00014f4d:
            *0x2e7e8 = '\0';
        }
        return;
    }
    if ((*(*0x39420 + 0x6c6) == '\0') && ((**0x39420 & 0x108) != 0x108)) {
        uVar12 = 0;
        iVar8 = fcn.0002bd04(0x417,1);
        uVar4 = *0x417;
        if ((-1 < iVar8) || (iVar8 == -0x7fffffffffffffeb)) {
            *(*0x39420 + 0x19c) = (*0x39420)[0x19c] + 1;
            if (*(*0x39420 + 0x672) <= (*0x39420)[0x19c]) {
                if (*(*0x39420 + 0x6c7) == '\0') {
                    uVar5 = *(*0x39420 + 0x66e) >> 2 & 7;
                }
                else {
                    uVar5 = *(*0x39420 + 0x66e) >> 1 & 5;
                }
                uVar12 = CONCAT71(uVar12 >> 8,6);
                *(*0x39420 + 0x672) = *(uVar5 + 0x2e6f8);
                *(*0x39420 + 0x19c) = 0;
                do {
                    if (*(((uVar12 & 0xff) - 1) + 0x38dc0) != '\0') break;
                    cVar10 = uVar12 + -1;
                    uVar12 = CONCAT71(uVar12 >> 8,cVar10);
                } while (cVar10 != '\0');
                if (uVar12 != '\0') {
                    iVar6 = (uVar12 & 0xff) - 1;
                    cVar10 = *(iVar6 + 0x38dc0);
                    if (cVar10 == *0x38dc7) {
                        fcn.0002ae28(CONCAT71(iVar6 >> 8,*0x38dc7));
                    }
                    else {
                        *0x38dc7 = cVar10;
                    }
                    fcn.00014c7c(0,CONCAT71(uVar12 >> 8,2));
                }
            }
            uVar4 = uVar4 >> 4 & 7;
            if (uVar4 != (*0x38dc6 & 7)) {
                *0x38dc6 = *0x38dc6 & 0xf8 | uVar4;
                fcn.0002ac48();
            }
        }
        return;
    }
    iVar8 = arg1;
    fcn.00016cf0();
    puVar3 = *0x39420;
    uVar4 = (*0x39420)[0x19b];
    if (uVar4 != 0) {
        uVar12 = CONCAT71(in_R8 >> 8,1);
        uVar5 = uVar12;
        for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1) {
            uVar12 = CONCAT71(uVar12 >> 8,uVar12 + '\x01');
            uVar5 = uVar12;
        }
        iVar8 = fcn.0001467c(CONCAT71(iVar8 >> 8,0x10),0,uVar5,arg1);
        if (iVar8 == 0) {
            return;
        }
        *(puVar3 + 0x19d) = 0;
        fcn.00016294(iVar8,puVar3 + 0x19d);
    }
    fcn.00017000();
    if (*(*0x2e7c0 + 0x2a) == *(*0x2e7c0 + 0x22)) {
        if (*(*0x2e7c0 + 0x52) == *(*0x2e7c0 + 0x5a)) {
            Var13 = *0x2e7c0 >> 8;
            uVar5 = CONCAT71(Var13,2);
            if (*(*0x2e7c0 + 0x32) == *0x39420 + 0x5d6) {
                uVar5 = CONCAT71(Var13,1);
            }
            goto code_r0x0001724b;
        }
        uStackX_10 = **(*0x2e7c0 + 0x5a);
        uStackX_11 = *(*(*0x2e7c0 + 0x5a) + 1);
        uStackX_12 = *(*(*0x2e7c0 + 0x5a) + 2);
        piVar11 = &uStackX_10;
        if (**0x2e7c8 == 0x16250) {
            (*0x16250)();
        }
        else {
            iVar8 = (***0x2e7c8)(*0x2e7c8,piVar11);
            if (-1 < iVar8) {
                fcn.00015f40();
                fcn.00015f40();
                fcn.00015f40();
            }
        }
    }
    else {
        *0x2e9b0 = **(*0x2e7c0 + 0x2a);
        piVar11 = 0x2e9b0;
        if (**0x2e7a0 == 0x16228) {
            (*0x16228)();
        }
        else {
            iVar8 = (***0x2e7a0)(*0x2e7a0,0x2e9b0,1);
            piVar2 = *0x2e7c0;
            if (-1 < iVar8) {
                *0x2e9b0 = **(*0x2e7c0 + 0x2a);
                puVar9 = *(*0x2e7c0 + 0x2a) + 1;
                if (puVar9 == *0x39420 + 0x666) {
                    puVar9 = *0x39420 + 0x5e6;
                }
                *(*0x2e7c0 + 0x2a) = puVar9;
                piVar11 = piVar2;
            }
        }
        if (*0x2e7a0 != NULL) {
            piVar11 = aiStackX_18;
            (*(*0x2e7a0)[1])(*0x2e7a0,piVar11);
            *(*0x39420 + 0x1a1) = (aiStackX_18[0] != 1) - 1U & 0x40;
        }
    }
    uVar5 = CONCAT71(piVar11 >> 8,2);
code_r0x0001724b:
    fcn.00014c7c(0,uVar5);
    return;
}


/* fcn.00017d20 @ 0x17d20 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.00017d20(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    int64_t arg1_00;
    uint8_t *arg1_01;
    uint64_t uVar2;
    int64_t iVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    uint32_t arg1_02;
    uint64_t uVar6;
    uint64_t *puVar7;
    uint8_t uVar8;
    uint64_t uVar9;
    uint8_t *puVar10;
    uint64_t uVar11;
    bool bVar12;
    uint8_t auStackX_8 [8];
    int64_t var_30h;
    uint8_t auStack_38 [16];
    uint32_t var_bp_10h;
    
    puVar10 = NULL;
    uVar11 = (*(*0x39420 + 0x5ae) << 0xc) + *(*0x2e7c0 + 0x12);
    fcn.00011080(auStack_38,0x10,0);
    uVar6 = 2;
    fcn.00011080(auStackX_8,2,0);
    puVar1 = arg1 + 0x148;
    if (((((*puVar1 == 0) || (puVar7 = arg1 + 0x138, *puVar7 == 0)) || (*puVar1 < *(*0x2e7c0 + 0x12))) ||
        ((uVar11 < *puVar1 || (*puVar7 < *(*0x2e7c0 + 0x12))))) || (uVar11 < *puVar7)) {
        return 0xff;
    }
    uVar11 = *arg2;
    uVar4 = 0xe0;
    uVar2 = 0;
    do {
        uVar9 = uVar2;
        if ((uVar11 & 1) != 0) {
            uVar9 = uVar2 + 1;
            auStack_38[uVar2] = uVar4;
        }
        uVar4 = uVar4 + 1;
        uVar11 = uVar11 >> 1;
        uVar2 = uVar9;
    } while (uVar4 < 0xe8);
    do {
        uVar4 = *(uVar6 + arg2);
        arg1_02 = puVar1;
        uVar11 = uVar9;
        if (uVar4 == 0) break;
        if (uVar4 == 1) {
            auStackX_8[1] = 1;
            auStackX_8[0] = *(uVar6 + arg2);
            if (puVar1 != NULL) {
                fcn.00017cc8(arg1_02,auStackX_8);
                return 0;
            }
            return 0;
        }
        uVar8 = uVar6 + 1;
        uVar6 = uVar8;
        uVar11 = uVar9 + 1;
        auStack_38[uVar9] = uVar4;
        uVar9 = uVar11;
    } while (uVar8 < 8);
code_r0x00017e25:
    bVar12 = false;
    uVar4 = uVar11;
    if ((puVar7 == NULL) || (uVar6 = *puVar7, uVar6 == 0)) {
        puVar10 = NULL;
    }
    else {
        uVar2 = *(arg1 + 0x141);
        uVar8 = *(arg1 + 0x140);
        if (*(arg1 + 0x141) != uVar8) {
            do {
                if ((puVar10 == NULL) || (bVar12)) goto code_r0x00017eb8;
                bVar12 = *(uVar6 + uVar2 * 8) == puVar10;
                uVar2 = (uVar2 + 1) % *(arg1 + 0x142);
            } while (uVar2 != uVar8);
            if (bVar12) goto code_r0x00017fc7;
        }
        if (*(arg1 + 0x141) == uVar8) goto code_r0x00017fc7;
        uVar2 = *(arg1 + 0x141);
code_r0x00017eb8:
        puVar10 = *(uVar6 + uVar2 * 8);
    }
    if (puVar10 == NULL) goto code_r0x00017fc7;
    uVar8 = *puVar10;
    uVar6 = 0;
    uVar5 = 0;
    if (uVar4 != 0) {
        do {
            uVar5 = uVar6;
            if (uVar8 == auStack_38[uVar6]) break;
            uVar5 = uVar5 + 1;
            uVar6 = uVar5;
        } while (uVar5 < uVar4);
    }
    if (uVar5 == uVar4) {
        if (((puVar7 != NULL) && (*puVar7 != 0)) && (uVar6 = *(arg1 + 0x141), *(arg1 + 0x141) != *(arg1 + 0x140))) {
            do {
                if (*(*puVar7 + uVar6 * 8) == puVar10) break;
                uVar6 = (uVar6 + 1) % *(arg1 + 0x142);
            } while (uVar6 != *(arg1 + 0x140));
            if (uVar6 != *(arg1 + 0x140)) {
                if (uVar6 != *(arg1 + 0x141)) {
                    do {
                        iVar3 = *(*puVar7 + (((*(arg1 + 0x142) - 1) + uVar6) % *(arg1 + 0x142) & 0xffU) * 8);
                        arg1_00 = *(*puVar7 + uVar6 * 8);
                        if ((*(arg1 + 0x144) != 0) && (arg1_00 != iVar3)) {
                            section..text(arg1_00,iVar3,*(arg1 + 0x144));
                        }
                        uVar2 = ((*(arg1 + 0x142) - 1) + uVar6) % *(arg1 + 0x142);
                        uVar6 = uVar2 & 0xff;
                    } while (uVar2 != *(arg1 + 0x141));
                }
                *(arg1 + 0x141) = (*(arg1 + 0x141) + 1) % *(arg1 + 0x142);
            }
        }
        auStackX_8[1] = 0;
        auStackX_8[0] = uVar8;
        if (puVar1 != NULL) {
            fcn.00017cc8(arg1_02,auStackX_8);
        }
    }
    goto code_r0x00017e25;
code_r0x00017fc7:
    uVar6 = 0;
    if (uVar4 != 0) {
        do {
            puVar10 = auStack_38 + uVar6;
            if (*puVar10 == 0) {
                return 0;
            }
            if (((puVar7 == NULL) || (*puVar7 == 0)) || (puVar10 == NULL)) {
                iVar3 = 0;
code_r0x00018058:
                if (iVar3 == 0) goto code_r0x0001805d;
            }
            else {
                uVar11 = *(arg1 + 0x141);
                if (*(arg1 + 0x141) != *(arg1 + 0x140)) {
                    do {
                        arg1_01 = *(*puVar7 + uVar11 * 8);
                        if ((*(arg1 + 0x144) == 0) || (arg1_01 == puVar10)) {
                            iVar3 = 0;
                        }
                        else {
                            iVar3 = fcn.00011060(arg1_01,puVar10,*(arg1 + 0x144));
                        }
                        if (iVar3 == 0) {
                            iVar3 = *(*puVar7 + uVar11 * 8);
                            goto code_r0x00018058;
                        }
                        uVar11 = (uVar11 + 1) % *(arg1 + 0x142);
                    } while (uVar11 != *(arg1 + 0x140));
                }
code_r0x0001805d:
                if (puVar7 != NULL) {
                    fcn.00017cc8(puVar7,puVar10);
                }
                auStackX_8[0] = *puVar10;
                auStackX_8[1] = 1;
                if (puVar1 != NULL) {
                    fcn.00017cc8(arg1_02,auStackX_8);
                }
            }
            uVar8 = uVar6 + 1;
            uVar6 = uVar8;
        } while (uVar8 < uVar4);
    }
    return 0;
}


/* fcn.0002bfb4 @ 0x2bfb4 */

ulong fcn.0002bfb4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong in_stack_00000028;
    ushort in_stack_00000030;
    
    iVar2 = fcn.0002bd84();
    if ((iVar2 < 0) || (pcVar1 = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0x68 + *0x2e848), pcVar1 == NULL)) {
        uVar3 = 0;
    }
    else {
        uVar3 = (*pcVar1)(arg1,arg2,arg3,arg4 & 0xffff,in_stack_00000028,in_stack_00000030);
    }
    return uVar3;
}


/* fcn.00017cc8 @ 0x17cc8 */

void fcn.00017cc8(uint32_t arg1,uint32_t arg2)

{
    int64_t arg1_00;
    char cVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    uint in_register_00000014;
    int64_t arg2_00;
    
    arg2_00 = CONCAT44(in_register_00000014,arg2);
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if ((*piVar2 != 0) && (arg2_00 != 0)) {
        arg1_00 = *(*piVar2 + *(piVar2 + 1) * 8);
        if ((*(piVar2 + 0xc) != 0) && (arg1_00 != arg2_00)) {
            section..text(arg1_00,arg2_00,*(piVar2 + 0xc));
        }
        cVar1 = (*(piVar2 + 1) + 1) % *(piVar2 + 10);
        *(piVar2 + 1) = cVar1;
        if (cVar1 == *(piVar2 + 9)) {
            *(piVar2 + 9) = (*(piVar2 + 9) + 1) % *(piVar2 + 10);
        }
    }
    return;
}


/* fcn.00011060 @ 0x11060 */

int64_t fcn.00011060(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.0002bbf4 @ 0x2bbf4 */

uint32_t fcn.0002bbf4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = *(*0x39420 + 0x74a);
    if (*(arg1 + 0x30) != 0) {
        iVar1 = *(arg1 + 0x30);
    }
    return *(iVar1 + (arg2 & 0xfc | *(arg1 + 0x2a) << 0xc)) >> ((arg2 & 3) << 3);
}


/* fcn.0002bd44 @ 0x2bd44 */

int64_t fcn.0002bd44(void)

{
    int64_t iVar1;
    int64_t iVar2;
    
    if (*0x2e830 == 0) {
        iVar1 = -0x7ffffffffffffff1;
    }
    else {
        iVar1 = (**(*0x2e830 + 8))();
    }
    iVar2 = -0x7ffffffffffffff1;
    if (iVar1 != -0x7fffffffffffffeb) {
        iVar2 = iVar1;
    }
    return iVar2;
}


/* fcn.00019ee0 @ 0x19ee0 */

uint64_t fcn.00019ee0(int64_t arg1)

{
    uchar uVar1;
    int64_t *piVar2;
    uint *puVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t arg1_00;
    int64_t *piVar7;
    int64_t iVar8;
    
    piVar2 = fcn.00014184(3);
    if (piVar2 != NULL) {
        *(arg1 + 0x40) = piVar2;
        puVar3 = fcn.00014184(1);
        if (puVar3 != NULL) {
            *piVar2 = puVar3;
            *puVar3 = 0x4000;
            *(*piVar2 + 0xc) = 0;
            *(*piVar2 + 0x10) = 1;
            arg1_00 = arg1;
            fcn.00019cbc(arg1_00,*piVar2);
            iVar4 = fcn.00014184(6);
            if (iVar4 != 0) {
                piVar7 = piVar2 + 3;
                iVar8 = 4;
                do {
                    iVar5 = iVar4;
                    *piVar7 = iVar5;
                    piVar7 = piVar7 + 1;
                    iVar8 = iVar8 + -1;
                    iVar4 = iVar5 + 0x20;
                } while (iVar8 != 0);
                piVar2[9] = iVar5 + 0x20;
                uVar6 = iVar5 + 0x40;
                piVar2[10] = uVar6;
                if ((*(arg1 + 0x58) & 0x10) == 0) {
                    iVar4 = fcn.00014184(1);
                    piVar2[1] = iVar4;
                    iVar4 = fcn.00014184(1);
                    piVar2[2] = iVar4;
                    *piVar2[1] = *(*0x39420 + 0x716) + 1 | 0x85000;
                    *(piVar2[1] + 8) = piVar2[2];
                    *(piVar2[1] + 0xc) = 0;
                    *(piVar2[1] + 4) = 0;
                    if (*(*0x39420 + 0x6c7) == '\0') {
                        *(piVar2[1] + 0x10) = 8;
                    }
                    else {
                        *(piVar2[1] + 0x10) = 0x10;
                    }
                    *piVar2[2] = 0xf8140000;
                    *(piVar2[2] + 0x10) = 0xf8140000;
                    *(piVar2[2] + 4) = piVar2[2] + 0x18;
                    *(piVar2[2] + 0xc) = piVar2[2] + 0x18;
                    *(piVar2[2] + 8) = 0;
                    uVar1 = fcn.00014478(0x18570);
                    *(piVar2[2] + 0x14) = uVar1;
                    *(piVar2[2] + 0x15) = 0;
                    fcn.00019cbc(arg1_00,piVar2[1]);
                    uVar6 = fcn.00014c7c(arg1_00,0);
                }
                return uVar6 & 0xffffffffffffff00;
            }
        }
    }
    return 0xff;
}


/* fcn.00018630 @ 0x18630 */

ulong fcn.00018630(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    
    iVar1 = fcn.0001ce98(arg1);
    if (iVar1 < 0) {
        uVar2 = 0xff;
    }
    else {
        if (0x17 < *(arg1 + 0x20)) {
            *(*(arg1 + 0x18) + 0x14) = 0x80000000;
        }
        if (7 < *(arg1 + 0x20)) {
            *(*(arg1 + 0x18) + 4) = 0x3c;
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00013180 @ 0x13180 */

void fcn.00013180(void)

{
    int64_t iVar1;
    uint8_t uVar2;
    
    uVar2 = 0;
    if (*(*0x2e7c0 + 0x10) != 0) {
        do {
            iVar1 = *(*0x2e7e0 + uVar2 * 8);
            if ((iVar1 != 0) && ((*(iVar1 + 0x58) & 1) != 0)) {
                return;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(*0x2e7c0 + 0x10));
    }
    **0x39420 = **0x39420 & 0xffffff7f;
    return;
}


/* fcn.00018438 @ 0x18438 */

ulong fcn.00018438(int64_t arg1)

{
    ulong *puVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint16_t uVar5;
    uint64_t in_RDX;
    uint8_t uVar6;
    unkbyte7 in_R8;
    
    iVar2 = fcn.0001ce98(arg1);
    if ((iVar2 < 0) || (uVar6 = 1, (*(arg1 + 0x58) & 1) == 0)) {
        uVar3 = 0xff;
    }
    else {
        if (*(arg1 + 0x28) != '\0') {
            do {
                in_RDX = CONCAT71(in_RDX >> 8,*arg1) | 0x80;
                fcn.00013f6c(arg1,in_RDX,CONCAT71(in_R8,uVar6));
                uVar6 = uVar6 + 1;
            } while (uVar6 <= *(arg1 + 0x28));
        }
        if (7 < *(arg1 + 0x20)) {
            *(*(arg1 + 0x18) + 4) = 0;
        }
        fcn.0002bb74(*(*(*0x2e7c0 + 0x3a2) + 10) * 1000,in_RDX);
        if (0x17 < *(arg1 + 0x20)) {
            *(*(arg1 + 0x18) + 0x14) = 0xffffffff;
        }
        if (0x103 < *(arg1 + 0x20)) {
            *(*(arg1 + 0x18) + 0x100) = 0;
        }
        uVar5 = 0;
        iVar2 = *(arg1 + 0x10);
        if (*(arg1 + 0x48) != 0) {
            do {
                uVar4 = uVar5;
                uVar5 = uVar5 + 1;
                *(iVar2 + uVar4 * 4) = 0;
            } while (uVar5 < *(arg1 + 0x48));
        }
        puVar1 = *(arg1 + 0x40);
        fcn.00014358(*puVar1,1);
        if (puVar1[1] != 0) {
            fcn.00014358(puVar1[1],1);
        }
        if (puVar1[2] != 0) {
            fcn.00014358(puVar1[2],1);
        }
        fcn.00014358(puVar1[3],6);
        uVar3 = 0;
        fcn.00014358(puVar1,3);
        fcn.00014c7c(arg1,CONCAT71(uVar3 >> 8,3));
        *(arg1 + 0x58) = *(arg1 + 0x58) & 0xfffffffe;
        fcn.00013180();
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00018220 @ 0x18220 */

ulong fcn.00018220(int64_t arg1)

{
    uchar uVar1;
    char cVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint16_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int iVar8;
    uint8_t uVar9;
    uint64_t uVar10;
    
    iVar4 = fcn.0001ce98(arg1);
    if (-1 < iVar4) {
        iVar8 = 8;
        uVar3 = fcn.0002bbf4(arg1,8);
        if ((uVar3 & 0xffffff00) == 0xc031000) {
            *(arg1 + 0x4c) = 0x1000;
            *(arg1 + 0x48) = iVar8 + 0x18;
            uVar3 = fcn.0002bbf4(arg1,iVar8 + 8);
            uVar3 = uVar3 & 0xfffffff0;
            iVar4 = fcn.0002bd44(uVar3,*(arg1 + 0x20));
            if (((-1 < iVar4) || (iVar4 == -0x7fffffffffffffeb)) &&
               ((iVar4 = fcn.0002bd04(*(arg1 + 0x10),0x100), -1 < iVar4 || (iVar4 == -0x7fffffffffffffeb)))) {
                uVar1 = 0;
                *(arg1 + 0x18) = uVar3;
                if (0x47 < *(arg1 + 0x20)) {
                    uVar1 = *(uVar3 + 0x48);
                }
                iVar4 = *(arg1 + 0x10);
                *(arg1 + 0x28) = uVar1;
                uVar7 = 0;
                if (*(arg1 + 0x48) != 0) {
                    do {
                        uVar5 = uVar7 + 1;
                        *(iVar4 + uVar7 * 4) = 0;
                        uVar7 = uVar5;
                    } while (uVar5 < *(arg1 + 0x48));
                }
                cVar2 = fcn.00019ee0(arg1);
                if ((cVar2 != -1) && (cVar2 = fcn.00018630(arg1), cVar2 != -1)) {
                    if (*(arg1 + 0x20) < 0x34) {
                        uVar3 = 0;
                    }
                    else {
                        uVar3 = *(*(arg1 + 0x18) + 0x34);
                    }
                    uVar6 = (uVar3 & 0x3fff) * 6 - 0x4ec;
                    uVar7 = uVar6 * 0x24924925 >> 0x20;
                    uVar10 = uVar3 & 0x3fff | (uVar6 / 7 & 0x7fff) << 0x10;
                    if (0xb < *(arg1 + 0x20)) {
                        *(*(arg1 + 0x18) + 8) = 1;
                    }
                    uVar9 = 0;
                    do {
                        fcn.0002bb74(1,uVar7);
                        if (*(arg1 + 0x20) < 8) {
                            uVar3 = 0;
                        }
                        else {
                            uVar3 = *(*(arg1 + 0x18) + 8);
                        }
                        if ((uVar3 & 1) == 0) {
                            if (0x37 < *(arg1 + 0x20)) {
                                *(*(arg1 + 0x18) + 0x34) = uVar10;
                            }
                            if (0x1b < *(arg1 + 0x20)) {
                                *(*(arg1 + 0x18) + 0x18) = *(arg1 + 0x10);
                            }
                            if (0x43 < *(arg1 + 0x20)) {
                                *(*(arg1 + 0x18) + 0x40) = ((uVar10 & 0x3fff) * 9) / 10 & 0x3fff;
                            }
                            if (7 < *(arg1 + 0x20)) {
                                *(*(arg1 + 0x18) + 4) = (-((*(arg1 + 0x58) & 0x10) != 0) & 0xffffff00) + 0x1b4;
                            }
                            if (0x13 < *(arg1 + 0x20)) {
                                *(*(arg1 + 0x18) + 0x10) = 0xc0000042;
                            }
                            *(arg1 + 0x58) = *(arg1 + 0x58) | 1;
                            if (-1 < **0x39420) {
                                **0x39420 = **0x39420 | 0x80;
                            }
                            return 0;
                        }
                        uVar9 = uVar9 + 1;
                    } while (uVar9 < 100);
                }
            }
        }
    }
    return 0xff;
}


/* fcn.0001a05c @ 0x1a05c */

ulong fcn.0001a05c(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    ulong uVar2;
    unkbyte7 Var3;
    uint8_t uVar4;
    unkbyte7 in_R8;
    
    Var3 = arg2 >> 8;
    if (*(*0x39420 + 0x5ad) == '\x01') {
        uVar2 = 0xff;
    }
    else {
        fcn.0002bb74(100000,arg2);
        *(*0x39420 + 0x5ad) = 1;
        if (0x17 < *(arg1 + 0x20)) {
            *(*(arg1 + 0x18) + 0x14) = 0x80000000;
        }
        uVar1 = *arg1;
        uVar4 = 1;
        if (*(arg1 + 0x28) != '\0') {
            do {
                fcn.00013fac(arg1,CONCAT71(Var3,uVar1) | 0x80,CONCAT71(in_R8,uVar4));
                uVar4 = uVar4 + 1;
            } while (uVar4 <= *(arg1 + 0x28));
        }
        if (0xf < *(arg1 + 0x20)) {
            *(*(arg1 + 0x18) + 0xc) = 0x40;
        }
        if (0x13 < *(arg1 + 0x20)) {
            *(*(arg1 + 0x18) + 0x10) = 0x80000000;
        }
        *(*0x39420 + 0x5ad) = 0;
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0002bca0 @ 0x2bca0 */

uint64_t fcn.0002bca0(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint32_t *in_RAX;
    uint64_t uVar2;
    uint in_register_00000014;
    
    if (*0x2e7c0 == 0) {
        *arg3 = CONCAT44(in_register_00000014,arg2);
    }
    else {
        in_RAX = *0x39420;
        if (((((**0x39420 & 0x1000000) == 0) || (*(arg1 + 200) == 0)) ||
            (uVar1 = *(*0x2e7c0 + 0x12), CONCAT44(in_register_00000014,arg2) < uVar1)) ||
           (in_RAX = *(*0x39420 + 0x5ae) << 0xc, uVar2 = uVar1 + 0x103ff + in_RAX,
           uVar2 <= CONCAT44(in_register_00000014,arg2) && CONCAT44(in_register_00000014,arg2) != uVar2)) {
            *arg3 = CONCAT44(in_register_00000014,arg2);
        }
        else {
            *arg3 = (*(arg1 + 200) - uVar1) + CONCAT44(in_register_00000014,arg2);
        }
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.0001a120 @ 0x1a120 */

char fcn.0001a120(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    int64_t arg2_00;
    uint32_t uVar2;
    
    uVar1 = *(*0x39420 + 0x6c0);
    uVar2 = 0;
    arg2_00 = arg2;
    while( true ) {
        if ((uVar1 != 0) && (uVar1 << 4 <= uVar2)) {
            *arg2 = *arg2 | 0x4000;
            fcn.000186c0(arg1);
            return -(*(arg3 + 0x15) != '\0');
        }
        fcn.000186c0(arg1);
        if (*(arg3 + 0x15) == '\0') {
            return '\0';
        }
        if ((*arg4 & 3) == 0) break;
        fcn.0002bb74(0x3c,arg2_00);
        uVar2 = uVar2 + 1;
    }
    return -1;
}


/* fcn.00015bb8 @ 0x15bb8 */

uint64_t fcn.00015bb8(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    
    iVar2 = *(arg1 + 0x40);
    if (iVar2 != 0) {
        uVar1 = fcn.0001cef4(iVar2);
        arg1 = iVar2;
        if (uVar1 < 0) {
            return uVar1 & 0xffffffffffffff00;
        }
    }
    iVar2 = 0x4a;
    if (arg2 < '\0') {
        iVar2 = 0x48;
    }
    return *(iVar2 + arg1) >> ((arg2 & 0xf) - 1 & 0x1f) & 0xffffffffffffff01;
}


/* fcn.00015c1c @ 0x15c1c */

void fcn.00015c1c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint8_t uVar4;
    
    iVar3 = *(arg1 + 0x40);
    uVar4 = (arg2 & 0xf) - 1;
    if (iVar3 == 0) {
        iVar3 = arg1;
    }
    else {
        iVar2 = fcn.0001cef4(iVar3);
        if (iVar2 < 0) {
            return;
        }
    }
    uVar1 = 0x4a;
    if (arg2 < '\0') {
        uVar1 = 0x48;
    }
    *(uVar1 + iVar3) = (arg3 & 0xff) << (uVar4 & 0x1f) | *(uVar1 + iVar3) & ~(1 << (uVar4 & 0xf));
    return;
}


/* fcn.00019cbc @ 0x19cbc */

ulong fcn.00019cbc(uint32_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    uint in_register_00000014;
    uint64_t uVar5;
    uint16_t uVar6;
    uint32_t *puVar7;
    uint64_t uVar8;
    
    uVar5 = CONCAT44(in_register_00000014,arg2);
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar6 = 0;
    if ((uVar5 == 0) || (*(uVar5 + 0x10) == '\0')) {
code_r0x00019d70:
        uVar3 = 0xff;
    }
    else {
        if (*(iVar4 + 0x48) != 0) {
            do {
                puVar7 = *(iVar4 + 0x10) + uVar6 * 4;
                while( true ) {
                    uVar1 = *puVar7;
                    uVar8 = uVar1;
                    if (uVar8 == 0) break;
                    iVar2 = fcn.0002bd04(uVar8,0x20);
                    if ((iVar2 < 0) && (iVar2 != -0x7fffffffffffffeb)) goto code_r0x00019d70;
                    if (*(uVar8 + 0x10) <= *(uVar5 + 0x10)) break;
                    puVar7 = uVar8 + 0xc;
                }
                if (uVar8 != uVar5) {
                    *(uVar5 + 0xc) = uVar1;
                    iVar2 = fcn.0002bd04(puVar7,4);
                    if ((iVar2 < 0) && (iVar2 != -0x7fffffffffffffeb)) goto code_r0x00019d70;
                    *puVar7 = arg2;
                }
                uVar6 = uVar6 + *(uVar5 + 0x10);
            } while (uVar6 < *(iVar4 + 0x48));
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00019d94 @ 0x19d94 */

ulong fcn.00019d94(uint32_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    uint in_register_00000014;
    uint32_t *puVar5;
    uint32_t *arg2_00;
    uint16_t uVar6;
    uint32_t *puVar7;
    uint32_t *puVar8;
    
    puVar5 = CONCAT44(in_register_00000014,arg2);
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    if ((puVar5 == NULL) || (puVar5[4] == '\0')) {
code_r0x00019ebe:
        uVar3 = 0xff;
    }
    else {
        *puVar5 = *puVar5 | 0x4000;
        uVar6 = 0;
        arg2_00 = puVar5;
        if (*(iVar4 + 0x48) != 0) {
            do {
                puVar8 = *(iVar4 + 0x10) + uVar6 * 4;
                puVar7 = *puVar8;
                if (puVar7 != NULL) {
                    do {
                        arg2_00 = 0x20;
                        iVar2 = fcn.0002bd04(puVar7);
                        if ((iVar2 < 0) && (iVar2 != -0x7fffffffffffffeb)) goto code_r0x00019ebe;
                        if (puVar7 == puVar5) break;
                        puVar8 = puVar7 + 3;
                        puVar7 = *puVar8;
                    } while (puVar7 != NULL);
                    if (puVar7 != NULL) {
                        arg2_00 = 0x4;
                        iVar2 = fcn.0002bd04(puVar8);
                        if ((iVar2 < 0) && (iVar2 != -0x7fffffffffffffeb)) goto code_r0x00019ebe;
                        *puVar8 = puVar5[3];
                    }
                }
                uVar6 = uVar6 + puVar5[4];
            } while (uVar6 < *(iVar4 + 0x48));
        }
        if (0xf < *(iVar4 + 0x20)) {
            *(*(iVar4 + 0x18) + 0xc) = 4;
        }
        if (0x13 < *(iVar4 + 0x20)) {
            *(*(iVar4 + 0x18) + 0x10) = 4;
        }
        uVar6 = 0;
        do {
            if (*(iVar4 + 0x20) < 0xc) {
                uVar1 = 0;
            }
            else {
                uVar1 = *(*(iVar4 + 0x18) + 0xc);
            }
            if ((uVar1 & 4) != 0) break;
            fcn.0002bb74(10,arg2_00);
            uVar6 = uVar6 + 1;
        } while (uVar6 < 100);
        if (0x17 < *(iVar4 + 0x20)) {
            *(*(iVar4 + 0x18) + 0x14) = 4;
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00013fac @ 0x13fac */

ulong fcn.00013fac(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    uchar uVar6;
    int64_t iVar7;
    unkbyte7 Var8;
    uchar uVar9;
    unkbyte7 Var10;
    uint64_t in_R9;
    uint8_t uVar11;
    
    uVar9 = arg3;
    uVar6 = arg2;
    uVar11 = 0;
    do {
        iVar7 = CONCAT71(arg2 >> 8,uVar6);
        iVar5 = arg1;
        uVar2 = fcn.00013218(arg1,iVar7,CONCAT71(arg3 >> 8,uVar9),CONCAT71(in_R9 >> 8,1));
        if ((((uVar2 >> 9 & 1) != 0) || ((uVar2 >> 0xe & 1) != 0)) || (uVar2 == 0xff)) goto code_r0x00014120;
        if ((uVar2 & 0x40) == 0) goto code_r0x0001417e;
        arg3 = *(arg1 + 0x2a);
        uVar4 = 0;
        arg2 = CONCAT71(iVar7 >> 8,uVar9);
        cVar1 = fcn.0002d9a0(CONCAT71(iVar5 >> 8,uVar6),arg2,arg3,0);
        if ((cVar1 != '\0') || ((uVar11 == 0 && ((uVar2 & 0x10) == 0)))) goto code_r0x0001417e;
        Var10 = arg3 >> 8;
        Var8 = arg2 >> 8;
        if ((uVar2 & 1) == 0) {
            fcn.00013f6c(arg1,CONCAT71(Var8,uVar6),CONCAT71(Var10,uVar9));
            fcn.0001d028(CONCAT71(arg1 >> 8,8),0x1000);
            goto code_r0x0001417e;
        }
        if (*(*0x39420 + 0x6c5) != '\0') {
            fcn.000132a8(arg1,CONCAT71(Var8,uVar6),CONCAT71(Var10,uVar9));
            goto code_r0x0001417e;
        }
        if (((uVar11 == 0) && ((uVar2 & 0x20) != 0)) && ((*(*0x39420 + 0x6c9) & 0x8000) == 0)) {
code_r0x000140b8:
            in_R9 = uVar2;
            arg3 = CONCAT71(arg3 >> 8,uVar9);
            arg2 = CONCAT71(arg2 >> 8,uVar6);
            uVar3 = fcn.000135a8(arg1,arg2,arg3,in_R9);
            if (2 < uVar3 - 2) {
                if (uVar3 == 0) goto code_r0x00014120;
                if (5 < uVar3) goto code_r0x0001417e;
                fcn.0001d028(CONCAT71(uVar3 >> 8,0x10),0x4000);
                goto code_r0x00014120;
            }
            if (2 < uVar11) {
                arg3 = CONCAT71(arg3 >> 8,uVar9);
                arg2 = CONCAT71(arg2 >> 8,uVar6);
                fcn.000132a8(arg1,arg2,arg3);
            }
        }
        else {
            iVar5 = CONCAT71(Var10,uVar9);
            iVar7 = CONCAT71(Var8,uVar6);
            fcn.000134ec(arg1,iVar7,iVar5);
            iVar5 = CONCAT71(iVar5 >> 8,uVar9);
            iVar7 = CONCAT71(iVar7 >> 8,uVar6);
            fcn.0001339c(arg1,iVar7,iVar5);
            in_R9 = CONCAT71(uVar4 >> 8,1);
            arg3 = CONCAT71(iVar5 >> 8,uVar9);
            arg2 = CONCAT71(iVar7 >> 8,uVar6);
            uVar2 = fcn.00013218(arg1,arg2,arg3,in_R9);
            if (uVar2 == 0xff) goto code_r0x00014120;
            if ((uVar2 & 0x40) == 0) goto code_r0x0001417e;
            if (((uVar2 & 1) != 0) && ((uVar2 & 0x20) != 0)) goto code_r0x000140b8;
        }
        fcn.0002bb74(100000,arg2);
        uVar11 = uVar11 + 1;
    } while (uVar11 < 6);
    if (uVar11 == 6) {
        iVar5 = CONCAT71(arg3 >> 8,uVar9);
        iVar7 = CONCAT71(arg2 >> 8,uVar6);
        fcn.000132a8(arg1,iVar7,iVar5);
        fcn.00013218(arg1,CONCAT71(iVar7 >> 8,uVar6),CONCAT71(iVar5 >> 8,uVar9),CONCAT71(in_R9 >> 8,1));
code_r0x00014120:
        uVar4 = 0xff;
    }
    else {
code_r0x0001417e:
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.000186c0 @ 0x186c0 */

ulong fcn.000186c0(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    
    iVar6 = fcn.0001ce98(arg1);
    uVar9 = 0;
    uVar5 = 0;
    if ((-1 < iVar6) && (uVar3 = fcn.0002bbf4(arg1,4), (uVar3 & 6) == 6)) {
        uVar7 = 0x10;
        uVar4 = fcn.0002bbf4(arg1,0x10);
        if ((uVar4 & 0xffffff80) == *(arg1 + 0x18)) {
            if (*(arg1 + 0x20) < 0xc) {
                uVar4 = uVar9;
            }
            else {
                uVar4 = *(*(arg1 + 0x18) + 0xc);
            }
            if ((uVar4 & 0x40000000) != 0) {
                if (uVar7 <= *(arg1 + 0x20)) {
                    *(*(arg1 + 0x18) + 0xc) = 0x40000000;
                }
                if (0x17 < *(arg1 + 0x20)) {
                    uVar5 = *(*(arg1 + 0x18) + 0x18);
                }
                if (uVar5 == *(arg1 + 0x10)) {
                    **0x39420 = **0x39420 & 0xfffffffe;
                    if (*(*(*0x2e7c0 + 0x3aa) + 2) != '\0') {
                        uVar7 = 0;
                        iVar6 = *0x2e7c0;
                        if (*(*0x2e7c0 + 0x10) != '\0') {
                            do {
                                iVar1 = *(*0x2e7e0 + uVar7 * 8);
                                if ((((iVar1 != 0) && ((*(iVar1 + 0x58) & 5) == 5)) && (*(iVar1 + 1) == '0')) &&
                                   (((*(iVar1 + 0x2a) ^ *(arg1 + 0x2a)) & 0xfff8) == 0)) {
                                    *(*0x39420 + 0x6c5) = 1;
                                    fcn.0002be30(*(*0x2e7e0 + uVar7 * 8));
                                    iVar6 = *0x2e7c0;
                                }
                                uVar3 = uVar7 + 1;
                                uVar7 = uVar3;
                            } while (uVar3 < *(iVar6 + 0x10));
                        }
                    }
                    fcn.00018438(arg1);
                }
                else {
                    *(*0x39420 + 0x6c5) = 0;
                    **0x39420 = **0x39420 | 1;
                    fcn.00018220(arg1);
                }
                return 0;
            }
            if ((*(arg1 + 0x58) & 1) != 0) {
                if (*(arg1 + 0x20) < 4) {
                    uVar4 = uVar9;
                }
                else {
                    uVar4 = *(*(arg1 + 0x18) + 4);
                }
                if ((uVar4 & 0xc0) == 0x80) {
                    if (0x17 < *(arg1 + 0x20)) {
                        uVar5 = *(*(arg1 + 0x18) + 0x18);
                    }
                    if ((uVar5 & 0xffffff00) == *(arg1 + 0x10)) {
                        if (*(arg1 + 0x20) < 0xc) {
                            uVar5 = uVar9;
                        }
                        else {
                            uVar5 = *(*(arg1 + 0x18) + 0xc);
                        }
                        if ((uVar5 & 0x40) != 0) {
                            if ((3 < *(arg1 + 0x20)) && (7 < *(arg1 + 0x20))) {
                                *(*(arg1 + 0x18) + 4) = *(*(arg1 + 0x18) + 4) & 0xfffffffb;
                            }
                            fcn.0001a05c(arg1,uVar7);
                            if ((3 < *(arg1 + 0x20)) && (7 < *(arg1 + 0x20))) {
                                *(*(arg1 + 0x18) + 4) = *(*(arg1 + 0x18) + 4) | 4;
                            }
                        }
                        if (0xb < *(arg1 + 0x20)) {
                            uVar9 = *(*(arg1 + 0x18) + 0xc);
                        }
                        if ((uVar9 & 2) != 0) {
                            while( true ) {
                                uVar7 = *(*(arg1 + 0x10) + 0x84);
                                *(*(arg1 + 0x10) + 0x84) = 0;
                                if (0xf < *(arg1 + 0x20)) {
                                    *(*(arg1 + 0x18) + 0xc) = 2;
                                }
                                if (uVar7 == 0) break;
                                do {
                                    uVar8 = uVar7 & 0xfffffff0;
                                    iVar6 = fcn.0002bd04(uVar8,0x20);
                                    if ((iVar6 < 0) && (iVar6 != -0x7fffffffffffffeb)) {
                                        return 0xff;
                                    }
                                    uVar7 = *(uVar8 + 8);
                                    if (((*(uVar8 + 0x15) == '\x01') && (*(uVar8 + 0x14) - 1U < 0x32)) &&
                                       (pcVar2 = *((*(uVar8 + 0x14) - 1) * 8 + 0x38de0), pcVar2 != NULL)) {
                                        (*pcVar2)(arg1,0,uVar8,0,0);
                                    }
                                } while ((uVar8 != uVar7) && (uVar7 != 0));
                            }
                            return 0;
                        }
                        return 0;
                    }
                }
                else {
                    if (0xb < *(arg1 + 0x20)) {
                        uVar5 = *(*(arg1 + 0x18) + 0xc);
                    }
                    if (uVar7 <= *(arg1 + 0x20)) {
                        *(*(arg1 + 0x18) + 0xc) = uVar5;
                    }
                }
            }
        }
    }
    return 0xff;
}


/* fcn.0001a2d4 @ 0x1a2d4 */

void fcn.0001a2d4(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint32_t *puVar3;
    uint8_t uVar4;
    char cVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    char cVar10;
    uint8_t uVar11;
    int32_t var_20h;
    int8_t var_24h;
    int32_t var_28h;
    int16_t var_2ch;
    uint32_t var_40h;
    
    uVar11 = 0;
    uVar6 = 0;
    do {
        if (*(uVar6 + 0xb8 + arg1) != '\0') {
            return;
        }
        uVar4 = uVar6 + 1;
        uVar6 = uVar4;
    } while (uVar4 < 0x40);
    uVar9 = 0;
    iVar2 = 0x20;
    do {
        if (*arg2 == '\0') {
            arg2 = arg2 + 1;
            uVar9 = uVar9 + 1;
        }
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    cVar5 = *(*0x39420 + 0x6ce);
    if (cVar5 != '\0') {
        if (cVar5 == '\x01') {
            uVar4 = 0x18;
            goto code_r0x0001a348;
        }
        if (cVar5 == '\x02') {
            uVar4 = 8;
            goto code_r0x0001a348;
        }
    }
    uVar4 = 0x1c;
code_r0x0001a348:
    uVar6 = 0;
    if (0 < 0x20 - uVar9) {
        do {
            cVar5 = uVar6;
            if (uVar4 <= uVar11) break;
            if ((((cVar5 == '\0') || (*(uVar6 + -1 + 0xb8 + arg1) != ' ')) || (*(arg2 + uVar11) != ' ')) &&
               ((uVar1 = *(arg2 + uVar11), 0x1e < uVar1 - 1 && (uVar1 < 0x7f)))) {
                *(uVar6 + 0xb8 + arg1) = uVar1;
            }
            else {
                cVar5 = cVar5 + -1;
            }
            uVar6 = cVar5 + 1U;
            uVar11 = uVar11 + 1;
        } while (cVar5 + 1U < 0x20 - uVar9);
    }
    if ((*(*0x39420 + 0x6c9) & 0x100) != 0) {
        var_20h = 0x2d0055;
        cVar10 = 'U';
        var_24h = 0;
        var_28h = 0x2d000055;
        var_2ch = 0;
        cVar5 = *(arg1 + 0xb8);
        uVar6 = 0;
        while (cVar5 != '\0') {
            uVar7 = uVar6 + 1;
            *(&var_40h + uVar6) = *(arg1 + 0xb8 + uVar6);
            uVar6 = uVar7;
            cVar5 = *(uVar7 + 0xb8 + arg1);
        }
        *(&var_40h + uVar6) = 0;
        if (*0x2e54b < 10) {
            var_20h = CONCAT22(0x2d,CONCAT11(*0x2e54b + 0x30,0x55));
            uVar6 = 0;
            do {
                uVar7 = uVar6 + 1;
                *(arg1 + 0xb8 + uVar6) = cVar10;
                cVar10 = *(&var_20h + uVar7);
                uVar6 = uVar7;
            } while (cVar10 != '\0');
        }
        else {
            var_28h = CONCAT13(0x2d,CONCAT12(*0x2e54b % 10 + 0x30,CONCAT11(*0x2e54b / 10 + 0x30,0x55)));
            uVar6 = 0;
            do {
                uVar7 = uVar6 + 1;
                *(arg1 + 0xb8 + uVar6) = cVar10;
                cVar10 = *(&var_28h + uVar7);
                uVar6 = uVar7;
            } while (cVar10 != '\0');
        }
        uVar6 = 0;
        if (var_40h != '\0') {
            puVar3 = &var_40h;
            uVar8 = uVar7;
            do {
                uVar6 = uVar6 + 1;
                uVar7 = uVar8 + 1;
                *(uVar8 + 0xb8 + arg1) = *puVar3;
                puVar3 = &var_40h + uVar6;
                uVar8 = uVar7;
            } while (*puVar3 != '\0');
        }
        *0x2e54b = *0x2e54b + 1;
        *(uVar7 + 0xb8 + arg1) = 0;
    }
    return;
}


/* fcn.0001b3b0 @ 0x1b3b0 */

uint8_t fcn.0001b3b0(int64_t arg1)

{
    int iVar1;
    uchar *puVar2;
    int64_t iVar3;
    
    puVar2 = fcn.00014184(1);
    if ((puVar2 != NULL) && (iVar3 = fcn.00014184(1), iVar3 != 0)) {
        *(puVar2 + 7) = 0x800;
        *puVar2 = 0x46;
        iVar1 = fcn.0001abe0(arg1);
        fcn.00014358(iVar3,1);
        fcn.00014358(puVar2,1);
        return ~-(iVar1 != 0);
    }
    return 0xff;
}


/* fcn.0001ca14 @ 0x1ca14 */

uint32_t fcn.0001ca14(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    uint *arg3;
    uint8_t uVar2;
    char cVar3;
    int16_t iVar4;
    uint32_t uVar5;
    uchar *puVar6;
    uchar *puVar7;
    int64_t arg2_00;
    int64_t iVar8;
    uint64_t uVar9;
    
    uVar2 = *(arg2 + 8);
    uVar9 = uVar2;
    arg3 = *arg2;
    puVar6 = arg3 + (uVar9 - 1);
    puVar7 = puVar6 + 0xf;
    if (uVar2 != 0) {
        do {
            uVar1 = *puVar6;
            puVar6 = puVar6 + -1;
            *puVar7 = uVar1;
            puVar7 = puVar7 + -1;
            uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
    }
    *arg3 = 0x43425355;
    iVar8 = *0x39420;
    arg2_00 = 0;
    *(*0x39420 + 0x6a9) = *(*0x39420 + 0x6a9) + 1;
    arg3[1] = *(iVar8 + 0x6a9);
    arg3[2] = *(arg2 + 0x12);
    *(arg3 + 3) = *(arg2 + 9);
    uVar1 = *(arg1 + 0xf);
    *(arg3 + 0xe) = uVar2;
    *(arg3 + 0xd) = uVar1;
    iVar4 = fcn.0001cdf8(arg1,0,arg3,0x1f);
    if (iVar4 == 0) {
        if ((*(*0x39420 + 0x6c2) & 3) == 0) {
            return 0;
        }
    }
    else {
        if (*(arg2 + 0x12) == 0) {
            if (*(*0x39420 + 0x6ae) != 0) {
                fcn.0002bb74(100000,arg2_00);
                *(*0x39420 + 0x6ae) = 0;
            }
            uVar2 = fcn.0001cb70(arg1,arg2);
            return uVar2;
        }
        iVar8 = arg2;
        uVar5 = fcn.0001bbe0(arg1,arg2);
        if ((*(*0x39420 + 0x6c2) & 3) == 0) {
            cVar3 = fcn.0001cb70(arg1,arg2);
            if (cVar3 == -1) {
                return 0;
            }
            if ((*(*0x39420 + 0x6c2) & 2) != 0) {
                return 0;
            }
            return uVar5;
        }
        if ((*(*0x39420 + 0x6c2) & 2) == 0) {
            fcn.0001aaf8(arg1,CONCAT71(iVar8 >> 8,*(arg2 + 9)));
            fcn.0001cb70(arg1,arg2);
            return uVar5;
        }
    }
    fcn.0001cc24(arg1);
    return 0;
}


/* fcn.0002bec8 @ 0x2bec8 */

ulong fcn.0002bec8(int64_t arg1)

{
    code *UNRECOVERED_JUMPTABLE;
    int64_t iVar1;
    ulong uVar2;
    
    iVar1 = fcn.0002bd84();
    if (-1 < iVar1) {
        UNRECOVERED_JUMPTABLE = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0x30 + *0x2e848);
        if (UNRECOVERED_JUMPTABLE != NULL) {
    //WARNING: Could not recover jumptable at 0x0002bf11. Too many branches
    //WARNING: Treating indirect jump as call
            uVar2 = (*UNRECOVERED_JUMPTABLE)(arg1);
            return uVar2;
        }
    }
    return 0xff;
}


/* fcn.0001cc80 @ 0x1cc80 */

int fcn.0001cc80(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int iVar2;
    int64_t iVar3;
    
    iVar2 = 0;
    iVar1 = fcn.0002bf14(*(*0x2e7e0 + (*(arg1 + 0xb) - 1) * 8),arg1,0x21,*(arg1 + 0x13));
    if (iVar1 == 0) {
code_r0x0001cce0:
        iVar2 = 0;
    }
    else {
        if (*(arg2 + 0x12) != 0) {
            iVar3 = arg2;
            iVar2 = fcn.0001bbe0(arg1,arg2);
            if ((iVar2 == 0) && ((*(*0x39420 + 0x6c2) & 1) != 0)) {
                fcn.0001aaf8(arg1,CONCAT71(iVar3 >> 8,*(arg2 + 9)));
                goto code_r0x0001cce0;
            }
        }
        if ((*(arg1 + 0x59) != '\x01') && (*(arg1 + 0x50) != '\0')) {
            fcn.0001cd44(arg1);
        }
    }
    return iVar2;
}


/* fcn.0001b9ac @ 0x1b9ac */

ulong fcn.0001b9ac(uint32_t arg1,int arg2)

{
    uint8_t uVar1;
    char cVar2;
    int16_t iVar3;
    int iVar4;
    uint in_register_0000000c;
    uint8_t *arg1_00;
    uint in_register_00000014;
    char *arg2_00;
    uint8_t uVar5;
    int16_t iVar6;
    int16_t iVar7;
    int16_t aiStackX_8 [4];
    
    arg2_00 = CONCAT44(in_register_00000014,arg2);
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar7 = 0;
    uVar5 = 0;
    if (*arg2_00 == '\0') {
        if (arg1_00[0x58] == 4) {
            arg1_00[0x75] = 4;
        }
        else {
            uVar1 = (arg2_00[1] | 0x40U) >> 6;
code_r0x0001ba07:
            arg1_00[0x75] = uVar1;
        }
    }
    else if (*arg2_00 == '\x05') {
        arg1_00[0x75] = 2;
    }
    else {
        if (*arg2_00 != '\a') {
            uVar1 = (*arg2_00 != '\x0e') - 1U & 3;
            goto code_r0x0001ba07;
        }
        arg1_00[0x75] = 5;
    }
    if (((*arg1_00 & 0x10) == 0) || (*(arg1_00 + 0x5a) != 0)) {
        iVar7 = *(*(arg1_00 + 0x5a) * 2 + 0x2e700);
    }
    if (((*(*0x39420 + 0x6c9) & 0x2000) == 0) || (arg2_00[1] < '\0')) {
        arg1_00[0xa0] = arg1_00[0xa0] | 8;
    }
    arg1_00[0xa0] = arg1_00[0xa0] | 1;
    if (*arg2_00 == '\x05') {
        arg1_00[0x5e] = 0;
        arg1_00[0x5f] = 8;
        iVar6 = 0x302;
        goto code_r0x0001bbaf;
    }
    if ((*(*0x39420 + 0x6c9) & 0x100000) != 0) {
        fcn.0001c184(arg1_00);
    }
    if (arg1_00[0x58] == 4) {
        iVar6 = 0x103;
        aiStackX_8[0] = 0x103;
    }
    else {
        iVar6 = 0x201;
        aiStackX_8[0] = 0x201;
    }
    fcn.0002bb74(*(*(*0x2e7c0 + 0x3a2) + 0x18) * 1000,arg2_00);
    if (arg1_00[0x58] != 4) {
        do {
            if (((*arg1_00 & 3) == 0) || (cVar2 = fcn.0001b0c4(arg1_00), cVar2 == '\0')) break;
            uVar1 = *(*0x39420 + 0x6c2);
            iVar3 = fcn.0001c364(arg1_00);
            if (iVar3 == 0x3a02) break;
            if (((*(*0x39420 + 0x6c2) & 2) != 0) && ((uVar1 & 2) != 0)) {
                return 0xff;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x1e);
    }
    iVar4 = fcn.0001c47c(arg1_00);
    if ((iVar4 == 0x3a02) && ((arg1_00[0x7c] & 0x40) == 0)) {
        fcn.0001b24c(arg1_00);
        if (*(arg1_00 + 0x60) - 1U < 0xb40) {
            iVar6 = 0x103;
            goto code_r0x0001bbaf;
        }
        if ((**0x39420 & 0x40000) != 0) goto code_r0x0001bbaf;
    }
    else {
        if (iVar4 != 0) goto code_r0x0001bbaf;
        cVar2 = fcn.0001b6a8(arg1_00,*(arg1_00 + 0x60),aiStackX_8);
        if ((cVar2 != -1) ||
           (((*(*0x39420 + 0x71b) <= *(arg1_00 + 0x60) >> 0xb && ((**0x39420 & 0x1000) == 0)) || (arg1_00[0x58] == 4))))
        {
            iVar6 = aiStackX_8[0];
            goto code_r0x0001bbaf;
        }
    }
    iVar6 = 0x403;
code_r0x0001bbaf:
    if (iVar7 != 0) {
        iVar6 = iVar7;
    }
    arg1_00[0x4c] = iVar6;
    arg1_00[0x74] = iVar6 >> 8;
    return 0;
}


/* fcn.0001c364 @ 0x1c364 */

int fcn.0001c364(int64_t arg1)

{
    int iVar1;
    uchar *puVar2;
    int64_t iVar3;
    
    puVar2 = fcn.00014184(1);
    if ((puVar2 == NULL) || (iVar3 = fcn.00014184(1), iVar3 == 0)) {
        iVar1 = 0xff;
    }
    else {
        *puVar2 = 3;
        puVar2[4] = 0x12;
        iVar1 = fcn.0001abe0(arg1);
        if (iVar1 == 0) {
            iVar1 = 0xff;
        }
        else {
            iVar1 = *(iVar3 + 0xd) * 0x10000 + *(iVar3 + 0xc) * 0x100 + *(iVar3 + 2);
            if (iVar1 == 0x3a02) {
                *(arg1 + 0xa0) = *(arg1 + 0xa0) & 0xfe;
            }
            if (iVar1 == 0x2806) {
                *(arg1 + 0xa0) = *(arg1 + 0xa0) | 3;
            }
            if (iVar1 == 0) {
                *(arg1 + 0xa0) = *(arg1 + 0xa0) | 1;
            }
        }
        fcn.00014358(puVar2,1);
        fcn.00014358(iVar3,1);
    }
    return iVar1;
}


/* fcn.0001af48 @ 0x1af48 */

ulong fcn.0001af48(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    ushort *puVar3;
    uint32_t uVar4;
    
    if (((*arg1 & 3) != 0) && (puVar3 = fcn.00014184(1), puVar3 != NULL)) {
        *puVar3 = 0x109e;
        *(puVar3 + 5) = 0xc000000;
        *(*0x39420 + 0x6ae) = 10000;
        iVar2 = fcn.0001abe0(arg1);
        *(*0x39420 + 0x6ae) = 0;
        if (iVar2 != 0) {
            uVar1 = *(*(*0x2e7c0 + 0x62) + 8);
            uVar4 = uVar1 & 0xff0000 | uVar1 >> 0x10;
            if (uVar4 >> 8 != 0 || ((uVar1 & 0xff00) != 0 || (uVar1 & 0xff) != 0)) {
                *(arg1 + 0x5e) = uVar4 >> 8;
                uVar1 = **(*0x2e7c0 + 0x62);
                *(arg1 + 0x60) =
                     ((((uVar1 & 0xff00 | uVar1 << 0x10) << 8) << 8 | uVar1 & 0xff0000) << 0x10 |
                     uVar1 & 0xffffffffff000000) << 8;
                uVar1 = *(*(*0x2e7c0 + 0x62) + 4);
                *(arg1 + 0x60) =
                     *(arg1 + 0x60) | (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8;
                return 0;
            }
        }
        fcn.00014358(puVar3,1);
    }
    return 0xff;
}


/* fcn.0001b460 @ 0x1b460 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_20h

uchar fcn.0001b460(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uchar *arg1_00;
    uchar uVar2;
    char cVar3;
    uint32_t uVar4;
    bool bVar5;
    int64_t var_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    int32_t var_bp_8h;
    
    uVar2 = 0xff;
    arg1_00 = fcn.00014184(1);
    if (arg1_00 != NULL) {
        uVar4 = arg2;
        cVar3 = '\n';
        do {
            *arg1_00 = 0x28;
            *(arg1_00 + 7) = 0x100;
            *(arg1_00 + 2) = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
            iVar1 = fcn.0001abe0(arg1);
            if (iVar1 != 0) {
                uVar2 = 0;
                break;
            }
            iVar1 = fcn.0001c47c(arg1);
            uVar2 = 0xff;
            if (iVar1 != 0) break;
            fcn.00011040(arg1_00,0xc);
            bVar5 = cVar3 != '\0';
            cVar3 = cVar3 + -1;
        } while (bVar5);
        fcn.00014358(arg1_00,1);
    }
    return uVar2;
}


/* fcn.0001b908 @ 0x1b908 */

uint64_t fcn.0001b908(uint32_t arg1,int64_t arg2)

{
    ushort uVar1;
    uint64_t uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar3 + 0x58) == '\x04') {
        uVar1 = 2;
        *(iVar3 + 0x6a) = 0x12;
        *(iVar3 + 0x70) = 0x12;
    }
    else {
        *(iVar3 + 0x6a) = 0x3f;
        *(iVar3 + 0x70) = 0x3f;
        if (arg2 < 0x1f7821) {
            uVar1 = 0x20;
        }
        else if (arg2 < 0x3ef041) {
            uVar1 = 0x40;
        }
        else {
            uVar1 = 0x80;
            if (0x7de080 < arg2) {
                uVar1 = 0xff;
            }
        }
    }
    *(iVar3 + 0x68) = uVar1;
    *(iVar3 + 0x6e) = uVar1;
    uVar2 = 0;
    if ((*(iVar3 + 0x6a) != '\0') && (*(iVar3 + 0x68) != 0)) {
        uVar2 = arg2 / (*(iVar3 + 0x68) * *(iVar3 + 0x6a));
    }
    if (uVar2 < 2) {
        uVar2 = uVar2 + 1;
    }
    if (0xffff < uVar2) {
        uVar2 = 0xffff;
    }
    *(iVar3 + 0x6c) = uVar2;
    *(iVar3 + 0x72) = uVar2;
    return uVar2 & 0xffffffffffffff00;
}


/* fcn.0001b560 @ 0x1b560 */

//WARNING: Variable defined which should be unmapped: var_10h

ulong fcn.0001b560(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint16_t uVar1;
    uint64_t uVar2;
    uint in_R8;
    int64_t iVar3;
    uint32_t auStackX_18 [2];
    int aiStackX_20 [2];
    int32_t var_40h;
    uint32_t var_48h;
    int aiStack_38 [4];
    uint32_t var_10h;
    
    iVar3 = CONCAT44(in_R8,arg3);
    uVar2 = 0;
    auStackX_18[0] = 0;
    aiStackX_20[0] = 0;
    aiStack_38[0] = 0;
    if (*(iVar3 + 0x1fe) != -0x55ab) {
        return 0xff;
    }
    if ((auStackX_18 == iVar3 + 3) ||
       (((section..text(auStackX_18,iVar3 + 3,4), auStackX_18[0] != 0x4f44534d && (auStackX_18[0] != 0x4957534d)) &&
        (auStackX_18[0] != 0x5346544e)))) {
        *(iVar3 + 0x39) = 0x20;
        if (aiStackX_20 != iVar3 + 0x36) {
            section..text(aiStackX_20,iVar3 + 0x36,4);
        }
        if (aiStack_38 != iVar3 + 0x52) {
            section..text(aiStack_38,iVar3 + 0x52,4);
        }
        if ((aiStackX_20[0] != 0x20544146) && (aiStack_38[0] != 0x33544146)) {
            return 0xff;
        }
    }
    if (*(iVar3 + 0x18) != 0) {
        *(arg1 + 0x6a) = *(iVar3 + 0x18);
        *(arg1 + 0x70) = *(iVar3 + 0x18);
        uVar1 = *(iVar3 + 0x1a);
        if (uVar1 != 0) {
            *(arg1 + 0x68) = uVar1;
            *(arg1 + 0x6e) = *(iVar3 + 0x1a);
            *(arg1 + 0x136) = *(iVar3 + 0x15);
            if ((*(arg1 + 0x6a) != '\0') && (uVar1 != 0)) {
                uVar2 = arg2 / (uVar1 * *(arg1 + 0x6a));
            }
            if (uVar2 < 2) {
                uVar2 = uVar2 + 1;
            }
            if (0xffff < uVar2) {
                uVar2 = 0xffff;
            }
            *(arg1 + 0x6c) = uVar2;
            *(arg1 + 0x72) = uVar2;
            return 0;
        }
    }
    return 0xff;
}


/* fcn.0001b0c4 @ 0x1b0c4 */

ulong fcn.0001b0c4(int64_t arg1)

{
    int iVar1;
    uchar *puVar2;
    uint32_t arg1_00;
    uint32_t uVar3;
    uint32_t uVar4;
    ulong uVar5;
    int32_t var_bh;
    
    if ((*arg1 & 3) != 0) {
        if ((*(arg1 + 0x60) & 0xffffffff00000000) != 0) {
code_r0x0001b0f7:
            fcn.0001af48(arg1);
            return 0;
        }
        puVar2 = fcn.00014184(1);
        uVar5 = 0;
        if (puVar2 != NULL) {
            *puVar2 = 0x25;
            *(*0x39420 + 0x6ae) = 10000;
            iVar1 = fcn.0001abe0(arg1);
            *(*0x39420 + 0x6ae) = 0;
            arg1_00 = puVar2;
            if (iVar1 != 0) {
                if (**(*0x2e7c0 + 0x62) == -1) {
                    fcn.00014358(arg1_00,1);
                    goto code_r0x0001b0f7;
                }
                uVar3 = (*(*0x2e7c0 + 0x62))[1];
                uVar4 = uVar3 & 0xff0000 | uVar3 >> 0x10;
                if (uVar4 >> 8 != 0 || ((uVar3 & 0xff00) != 0 || (uVar3 & 0xff) != 0)) {
                    *(arg1 + 0x5e) = uVar4 >> 8;
                    uVar3 = **(*0x2e7c0 + 0x62);
                    uVar3 = (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8 | (uVar3 & 0xff00 | uVar3 << 0x10) << 8;
                    if (uVar3 == 0) {
                        uVar5 = 0xff;
                    }
                    else {
                        *(arg1 + 0x60) = uVar3 + 1;
                    }
                    fcn.00014358(arg1_00,1);
                    return uVar5;
                }
            }
            fcn.00014358(arg1_00,1);
        }
    }
    return 0xff;
}


/* fcn.0001b24c @ 0x1b24c */

//WARNING: Variable defined which should be unmapped: var_2h

ulong fcn.0001b24c(int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uchar *puVar3;
    char *pcVar4;
    int32_t var_ah;
    int32_t var_50h;
    int32_t var_2h;
    
    puVar3 = fcn.00014184(1);
    if ((puVar3 != NULL) && (pcVar4 = fcn.00014184(8), pcVar4 != NULL)) {
        *(puVar3 + 7) = 0xfc00;
        *puVar3 = 0x23;
        uVar2 = fcn.0001abe0(arg1);
        if (((0xb < uVar2) && (((*pcVar4 == '\0' && (pcVar4[1] == '\0')) && (pcVar4[2] == '\0')))) &&
           ((7 < pcVar4[3] && (uVar1 = *(pcVar4 + 10), uVar1 != 0)))) {
            *(arg1 + 0x5e) = uVar1 * 0x100 + (uVar1 >> 8);
            uVar2 = *(pcVar4 + 4);
            if (uVar2 != 0) {
                uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
                *(arg1 + 0x60) = uVar2;
                if (uVar2 == 0xb40) {
                    *(arg1 + 0x6c) = 0x20050;
                    *(arg1 + 0x68) = 2;
                    *(arg1 + 0x72) = 0x50;
                    *(arg1 + 0x6a) = 0x12;
                    *(arg1 + 0x70) = 0x12;
                    *(arg1 + 0x76) = 0x94;
                }
                fcn.00014358(pcVar4,8);
                fcn.00014358(puVar3,1);
                return 0;
            }
        }
        fcn.00014358(pcVar4,8);
        fcn.00014358(puVar3,1);
    }
    return 0xff;
}


/* fcn.0001b6a8 @ 0x1b6a8 */

ulong fcn.0001b6a8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg3_00;
    int64_t iVar1;
    char cVar2;
    ushort uVar3;
    uint8_t uVar4;
    uint32_t arg1_00;
    uint64_t uVar5;
    uint8_t uVar6;
    uchar *arg2_00;
    uchar auStack_18 [8];
    uint32_t uStack_10;
    
    fcn.00011040(auStack_18,0x10);
    arg3_00 = *(*0x2e7c0 + 0x6a);
    cVar2 = fcn.0001b460(arg1,0,arg3_00);
    if (cVar2 == -1) {
        return 0xff;
    }
    *(arg1 + 0x5c) = 0;
    iVar1 = *(*0x2e7c0 + 0x6a);
    arg1_00 = arg1;
    if (*(iVar1 + 0x1fe) != -0x55ab) {
        fcn.0001b908(arg1_00,arg2);
        return 0xff;
    }
    uVar6 = 0;
    if ((((*(iVar1 + 0x1ca) == 0) && (*(iVar1 + 0x1da) == 0)) && (*(iVar1 + 0x1ea) == 0)) && (*(iVar1 + 0x1fa) == 0)) {
code_r0x0001b866:
        uVar3 = 0x403;
        if (*(arg1 + 0x58) == '\x04') {
            uVar3 = 0x103;
        }
        *arg3 = uVar3;
        cVar2 = fcn.0001b560(arg1,arg2,iVar1);
        if (cVar2 != '\0') {
            fcn.0001b908(arg1_00,arg2);
            if (arg2 >> 0xb < *(*0x39420 + 0x71b)) {
                return 0;
            }
            if ((**0x39420 & 0x1000) != 0) {
                return 0;
            }
            if (*(arg1 + 0x58) != '\x04') {
                *arg3 = 0x201;
            }
            *(arg1 + 0x5c) = 0;
            return 0;
        }
        if ((**0x39420 & 0x20000) == 0) {
            return 0;
        }
        if (*(arg1 + 0x58) == '\x04') {
            return 0;
        }
        if (arg2 >> 0xb < *(*0x39420 + 0x71b)) {
            return 0;
        }
        uVar3 = 0x201;
    }
    else {
        uVar5 = 0;
        do {
            uVar4 = *(iVar1 + 0x1be + uVar5 * 0x10);
            if (((uVar4 & 0x7f) != 0) || (arg2 < *(iVar1 + 0x1c6 + uVar5 * 0x10))) goto code_r0x0001b866;
            if (uVar4 < '\0') {
                uVar6 = uVar5;
            }
            uVar4 = uVar5 + 1;
            uVar5 = uVar4;
        } while (uVar4 < 4);
        arg2_00 = iVar1 + 0x1be + uVar6 * 0x10;
        if (auStack_18 != arg2_00) {
            section..text(auStack_18,arg2_00,0x10);
        }
        *(arg1 + 0x5c) = uStack_10;
        cVar2 = fcn.0001b460(arg1,uStack_10,arg3_00);
        if (cVar2 == -1) {
            return 0xff;
        }
        cVar2 = fcn.0001b560(arg1,arg2,*(*0x2e7c0 + 0x6a));
        if (cVar2 == '\0') {
            if (*(*0x39420 + 0x71b) <= arg2 >> 0xb) {
                return 0;
            }
            if ((**0x39420 & 0x1000) != 0) {
                return 0;
            }
            if (*(arg1 + 0x58) == '\x04') {
                return 0;
            }
        }
        else {
            fcn.0001b908(arg1_00,arg2);
            *(arg1 + 0x5c) = 0;
            if ((**0x39420 & 0x20000) == 0) {
                return 0;
            }
            if (*(arg1 + 0x58) == '\x04') {
                return 0;
            }
            if (*(*0x39420 + 0x71b) <= arg2 >> 0xb) {
                return 0;
            }
        }
        uVar3 = 0x403;
    }
    *arg3 = uVar3;
    return 0;
}


/* fcn.0001cdf8 @ 0x1cdf8 */

uint fcn.0001cdf8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    code *pcVar2;
    uint uVar3;
    int64_t iVar4;
    
    iVar1 = *(*0x2e7e0 + (*(arg1 + 0xb) - 1) * 8);
    iVar4 = fcn.0002bd84();
    uVar3 = 0;
    if ((-1 < iVar4) && (pcVar2 = *((*(iVar1 + 1) - 0x10 >> 4 & 3) * 200 + 0x58 + *0x2e848), pcVar2 != NULL)) {
        uVar3 = (*pcVar2)(iVar1,arg1,arg2,arg3,arg4);
    }
    return uVar3;
}


/* fcn.0001c834 @ 0x1c834 */

ulong fcn.0001c834(uint32_t arg1)

{
    uint8_t uVar1;
    uint64_t uVar2;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint16_t uVar3;
    char cVar4;
    uint64_t uVar5;
    uint8_t uVar6;
    uint64_t uVar7;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (((((*(arg1_00 + 0x68) != 0) && (*(arg1_00 + 0x6a) != '\0')) && (*(arg1_00 + 0x6c) != 0)) &&
        (uVar6 = *(arg1_00 + 0xa0), (uVar6 & 2) == 0)) &&
       ((((uVar6 & 4) == 0 || (*(arg1_00 + 0x58) != '\x04')) &&
        (*(arg1_00 + 0xa0) = uVar6 & 0xfb, *(arg1_00 + 0x5e) - 1U < 0xfffe)))) {
        return 0;
    }
    *(arg1_00 + 0xa0) = *(arg1_00 + 0xa0) & 0xfb;
    *(*0x39420 + 0x6bf) = 0xf0;
    *(*0x39420 + 0x6b0) = *(*0x39420 + 0x6b0) & 0xfc;
    if (*(arg1_00 + 0x58) == '\x04') {
        fcn.0001c5fc(arg1);
    }
    fcn.0001c704(arg1_00);
    if ((*(*0x39420 + 0x6b0) & 3) != 0) {
        if ((*(*0x39420 + 0x6b0) & 2) == 0) {
            *(arg1_00 + 0x5e) = *(*0x39420 + 0x6b5);
            *(arg1_00 + 0x60) = *(*0x39420 + 0x6b7);
        }
        if (((*(arg1_00 + 0x68) == 0) || (*(arg1_00 + 0x6a) == '\0')) || (*(arg1_00 + 0x6c) == 0)) {
            *(arg1_00 + 0x76) = *(*0x39420 + 0x6bf);
            uVar3 = *(*0x39420 + 0x6b3);
            uVar6 = *(*0x39420 + 0x6b1);
            uVar1 = *(*0x39420 + 0x6b2);
            if (uVar3 * uVar6 * uVar1 == 0) {
                uVar1 = *(*0x39420 + 0x6bc);
                uVar6 = *(*0x39420 + 0x6bb);
                uVar3 = *(*0x39420 + 0x6bd);
            }
            uVar7 = uVar6;
            uVar5 = uVar1;
            uVar2 = *(arg1_00 + 0x60);
            *(arg1_00 + 0x68) = uVar1;
            *(arg1_00 + 0x6a) = uVar6;
            *(arg1_00 + 0x6c) = uVar3;
            if (*(arg1_00 + 0x4c) < 2) {
                if (0xfbfff < uVar2) {
                    uVar7 = 0x3f;
                    uVar5 = 0x20;
                    if (((0x1f7fff < uVar2) && (uVar5 = 0x40, 0x3effff < uVar2)) && (uVar5 = 0x80, 0x7dffff < uVar2))
                    {
                        uVar5 = 0xff;
                    }
                }
                uVar6 = uVar7;
                while( true ) {
                    cVar4 = uVar5;
                    if ((uVar6 == 0) || (cVar4 == '\0')) {
                        uVar3 = 0;
                    }
                    else {
                        uVar3 = uVar2 / (uVar7 * uVar5);
                    }
                    if ((uVar3 < 0x401) || (uVar3 = 0x400, cVar4 == -1)) break;
                    uVar5 = cVar4 * '\x02';
                    if (cVar4 * '\x02' == 0) {
                        uVar5 = 0xff;
                    }
                }
            }
            *(arg1_00 + 0x6e) = uVar5;
            *(arg1_00 + 0x70) = uVar6;
            *(arg1_00 + 0x72) = uVar3;
        }
        return 0;
    }
    return 0xff;
}


/* fcn.0001c224 @ 0x1c224 */

uchar fcn.0001c224(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint16_t uVar2;
    int64_t iVar3;
    int iVar4;
    uint uVar5;
    uchar *puVar6;
    uchar uVar7;
    uint64_t uVar8;
    
    uVar7 = 0xff;
    puVar6 = fcn.00014184(1);
    if (puVar6 != NULL) {
        *puVar6 = 0x5a;
        *(puVar6 + 7) = 0x2800;
        puVar6[2] = 5;
        iVar4 = fcn.0001abe0(arg1);
        uVar7 = 0xff;
        if (iVar4 == 0) {
            fcn.0001c364(arg1);
        }
        else {
            iVar3 = *(*0x2e7c0 + 0x62);
            uVar8 = *(iVar3 + 6);
            *(arg2 + 0xb) = *(iVar3 + 2);
            if (*(uVar8 + 8 + iVar3) == '\x05') {
                uVar1 = *(uVar8 + 0xe + iVar3);
                *(arg2 + 5) = *(uVar8 + 0xc + iVar3);
                uVar7 = *(uVar8 + 0xd + iVar3);
                uVar2 = *(uVar8 + 0x10 + iVar3);
                *(arg2 + 9) = uVar1 * 0x100 + (uVar1 >> 8);
                *(arg2 + 8) = uVar7;
                *(arg2 + 6) = uVar2 * 0x100 + (uVar2 >> 8);
                uVar7 = 0;
            }
            uVar5 = fcn.0001c364(arg1);
            *(arg2 + 1) = uVar5;
        }
        fcn.00014358(puVar6,1);
    }
    return uVar7;
}


/* fcn.0001c5fc @ 0x1c5fc */

ulong fcn.0001c5fc(uint32_t arg1)

{
    char cVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t arg1_00;
    uchar auStack_18 [5];
    uint8_t uStack_13;
    uint16_t uStack_12;
    uint8_t uStack_10;
    ushort uStack_f;
    uchar uStack_d;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    *(*0x39420 + 0x6b1) = 0;
    *(*0x39420 + 0x6b2) = 0;
    *(*0x39420 + 0x6b3) = 0;
    if ((*(arg1_00 + 0x7c) & 1) == 0) {
        if (*(arg1_00 + 0x4c) != '\x02') {
            cVar1 = fcn.0001c224(arg1_00,auStack_18);
            if (cVar1 == '\0') {
                *(*0x39420 + 0x6b3) = uStack_12;
                *(*0x39420 + 0x6b2) = uStack_13;
                *(*0x39420 + 0x6b1) = uStack_10;
                *(*0x39420 + 0x6b5) = uStack_f;
                *(*0x39420 + 0x6bf) = uStack_d;
                if (*(arg1_00 + 0x4c) == '\x01') {
                    *(*0x39420 + 0x6bf) = 0xf0;
                }
                *(*0x39420 + 0x6b7) = uStack_10 * uStack_13 * uStack_12;
                *(*0x39420 + 0x6b0) = *(*0x39420 + 0x6b0) | 1;
                goto code_r0x0001c6f7;
            }
        }
        uVar2 = 0xff;
    }
    else {
code_r0x0001c6f7:
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001c704 @ 0x1c704 */

ulong fcn.0001c704(int64_t arg1)

{
    uint64_t uVar1;
    char cVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    
    cVar2 = fcn.0001b0c4(arg1);
    if (cVar2 != '\0') {
        return 0xff;
    }
    *(*0x39420 + 0x6b0) = *(*0x39420 + 0x6b0) | 2;
    uVar1 = *(arg1 + 0x60);
    if (uVar1 < 0x4000) {
        if (uVar1 == 0x5a0) {
            *(*0x39420 + 0x6bc) = 2;
            *(*0x39420 + 0x6bb) = 9;
            *(*0x39420 + 0x6bd) = 0x50;
            *(*0x39420 + 0x6bf) = 0x1e;
            return 0;
        }
        if (uVar1 == 0xb40) {
            *(*0x39420 + 0x6bc) = 2;
            *(*0x39420 + 0x6bb) = 0x12;
            *(*0x39420 + 0x6bd) = 0x50;
            *(*0x39420 + 0x6bf) = 0x94;
            return 0;
        }
    }
    if (uVar1 < 0x400) {
        uVar4 = 1;
        uVar3 = 1;
    }
    else if (uVar1 < 0x200000) {
        uVar4 = 0x20;
        uVar3 = 0x40;
    }
    else {
        uVar4 = 0x3f;
        uVar3 = 0xff;
    }
    *(*0x39420 + 0x6bb) = uVar4;
    *(*0x39420 + 0x6bc) = uVar3;
    *(*0x39420 + 0x6bd) = *(arg1 + 0x60) / (uVar3 * uVar4);
    return 0;
}


/* fcn.0001cc24 @ 0x1cc24 */

//WARNING: Removing unreachable block (ram,0x0001ab76)
//WARNING: Removing unreachable block (ram,0x0001aba8)

void fcn.0001cc24(int64_t arg1)

{
    uint8_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint16_t uVar4;
    
    iVar3 = arg1;
    fcn.0002bf14(*(*0x2e7e0 + (*(arg1 + 0xb) - 1) * 8),arg1,0xff21,*(arg1 + 0x13));
    fcn.0001aaf8(arg1,CONCAT71(iVar3 >> 8,0x80));
    uVar1 = *(arg1 + 0x56);
    fcn.0002bf14(*(*0x2e7e0 + (*(arg1 + 0xb) - 1) * 8),arg1,0x102,uVar1);
    uVar4 = (uVar1 & 0xf) - 1;
    *(arg1 + 0x4a) = *(arg1 + 0x4a) & ~(1 << (uVar4 & 0xf));
    iVar3 = *(arg1 + 0x40);
    if ((iVar3 != 0) && (iVar2 = fcn.0001cef4(iVar3), -1 < iVar2)) {
        *(iVar3 + 0x4a) = *(iVar3 + 0x4a) & ~(1 << (uVar4 & 0xf));
    }
    return;
}


/* fcn.0001cb70 @ 0x1cb70 */

ulong fcn.0001cb70(int64_t arg1,int64_t arg2)

{
    int *arg3;
    int16_t extraout_AX;
    int16_t extraout_AX_00;
    unkbyte7 Var1;
    
    Var1 = arg2 >> 8;
    arg3 = *arg2;
    fcn.0001cdf8(arg1,CONCAT71(Var1,0x80),arg3,0xd);
    if (extraout_AX != 0xd) {
        if ((*(*0x39420 + 0x6c2) & 1) != 0) {
            fcn.0001aaf8(arg1,CONCAT71(Var1,0x80));
        }
        fcn.0001cdf8(arg1,CONCAT71(Var1,0x80),arg3,0xd);
        if ((*(*0x39420 + 0x6c2) & 1) != 0) goto code_r0x0001cbd6;
        if (extraout_AX_00 != 0xd) {
            return 0xff;
        }
    }
    if (*arg3 != 0x53425355) {
        return 0xff;
    }
    if (arg3[1] != *(*0x39420 + 0x6a9)) {
        return 0xff;
    }
    if (*(arg3 + 3) == 0) {
        return 0;
    }
    if (*(arg3 + 3) < 2) {
        return 0xff;
    }
code_r0x0001cbd6:
    fcn.0001cc24(arg1);
    return 0xff;
}


/* fcn.0001bbe0 @ 0x1bbe0 */

uint32_t fcn.0001bbe0(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint in_register_00000014;
    uint64_t uVar6;
    uint64_t uVar7;
    uint16_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    
    uVar6 = CONCAT44(in_register_00000014,arg2);
    if (*(uVar6 + 0x12) == 0) {
        uVar2 = 0;
    }
    else {
        uVar1 = (*0x39420)[0x1b0];
        if (*(*0x39420 + 0x6ae) != 0) {
            *(*0x39420 + 0x1b0) = *(*0x39420 + 0x6ae);
        }
        if ((*(uVar6 + 0x16) == 0) && (*(uVar6 + 0x18) == 0)) {
            if ((**0x39420 & 0x1000000) == 0) {
                uVar2 = fcn.0001cdf8(arg1,CONCAT71(uVar6 >> 8,*(uVar6 + 9)),*(uVar6 + 10),*(uVar6 + 0x12));
            }
            else {
                uVar10 = *(uVar6 + 10);
                uVar7 = uVar6;
                if (uVar10 < 0x100000) {
                    uVar5 = *(*0x2e7c0 + 0x6a);
                    if (((*(uVar6 + 9) != -0x80) && (*(uVar6 + 0x12) != 0)) && (uVar5 != uVar10)) {
                        section..text(uVar5,uVar10,*(uVar6 + 0x12));
                        uVar7 = uVar10;
                    }
                }
                else {
                    uVar5 = uVar10;
                }
                uVar2 = fcn.0001cdf8(arg1,CONCAT71(uVar7 >> 8,*(uVar6 + 9)),uVar5,*(uVar6 + 0x12));
                if (((uVar2 != 0) && (uVar10 = *(uVar6 + 10), uVar10 < 0x100000)) && (*(uVar6 + 9) == -0x80)) {
                    if ((*(uVar6 + 0x12) != 0) && (uVar10 != *(*0x2e7c0 + 0x6a))) {
                        section..text(uVar10,*(*0x2e7c0 + 0x6a),*(uVar6 + 0x12));
                    }
                }
            }
        }
        else {
            uVar7 = uVar6;
            uVar5 = fcn.00014184(*(arg1 + 0x5e) + 0x1f >> 5);
            uVar9 = *(uVar6 + 0x12);
            uVar2 = 0;
            uVar8 = *(uVar6 + 0x16);
            uVar10 = *(uVar6 + 10);
            uVar11 = (uVar9 - *(uVar6 + 0x18)) - uVar8;
            if (uVar9 != 0) {
                do {
                    uVar7 = CONCAT71(uVar7 >> 8,*(uVar6 + 9));
                    if (*(arg1 + 0x5e) <= uVar9) {
                        uVar9 = *(arg1 + 0x5e);
                    }
                    iVar3 = fcn.0001cdf8(arg1,uVar7,uVar5,uVar9);
                    if (iVar3 == 0) {
                        uVar2 = 0;
                        break;
                    }
                    uVar2 = uVar2 + uVar9;
                    if (uVar11 != 0) {
                        uVar7 = uVar5;
                        if (uVar8 != 0) {
                            uVar4 = uVar8;
                            if (uVar9 <= uVar4) {
                                uVar8 = uVar8 - uVar9;
                                goto code_r0x0001bdb6;
                            }
                            uVar7 = uVar8;
                            uVar8 = 0;
                            uVar7 = uVar7 + uVar5;
                            uVar9 = uVar9 - uVar4;
                        }
                        if (uVar11 < uVar9) {
                            uVar9 = uVar11;
                        }
                        if ((uVar9 != 0) && (uVar10 != uVar7)) {
                            section..text(uVar10,uVar7,uVar9);
                        }
                        uVar10 = uVar10 + uVar9;
                        uVar11 = uVar11 - uVar9;
                    }
code_r0x0001bdb6:
                    uVar9 = *(uVar6 + 0x12);
                } while (uVar2 < uVar9);
            }
            fcn.00014358(uVar5,*(arg1 + 0x5e) + 0x1f >> 5);
        }
        *(*0x39420 + 0x1b0) = uVar1;
        *(*0x39420 + 0x6ae) = 0;
    }
    return uVar2;
}


/* fcn.0001aaf8 @ 0x1aaf8 */

void fcn.0001aaf8(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint16_t uVar4;
    
    uVar1 = *(arg1 + 0x55) | 0x80;
    if ((arg2 & 0x80U) == 0) {
        uVar1 = *(arg1 + 0x56);
    }
    fcn.0002bf14(*(*0x2e7e0 + (*(arg1 + 0xb) - 1) * 8),arg1,0x102,uVar1);
    uVar4 = (uVar1 & 0xf) - 1;
    if ((arg2 & 0x80U) == 0) {
        *(arg1 + 0x4a) = *(arg1 + 0x4a) & ~(1 << (uVar4 & 0xf));
    }
    else {
        *(arg1 + 0x48) = *(arg1 + 0x48) & ~(1 << (uVar4 & 0xf));
    }
    iVar3 = *(arg1 + 0x40);
    if (iVar3 != 0) {
        iVar2 = fcn.0001cef4(iVar3);
        if (-1 < iVar2) {
            if (arg2 < '\0') {
                *(iVar3 + 0x48) = *(iVar3 + 0x48) & ~(1 << (uVar4 & 0xf));
            }
            else {
                *(iVar3 + 0x4a) = *(iVar3 + 0x4a) & ~(1 << (uVar4 & 0xf));
            }
        }
    }
    return;
}


/* fcn.0001cd44 @ 0x1cd44 */

ushort fcn.0001cd44(int64_t arg1)

{
    int64_t *piVar1;
    ulong uVar2;
    unkbyte7 in_R8;
    
    piVar1 = *0x2e7c0 + 0x3ba;
    if (*piVar1 == 0) {
        uVar2 = fcn.00014184(1);
        *(*0x2e7c0 + 0x3ba) = uVar2;
        piVar1 = *0x2e7c0 + 0x3ba;
        if (*piVar1 == 0) {
            return 0;
        }
    }
    **piVar1 = 0;
    fcn.0002bfb4(*(*0x2e7e0 + (*(arg1 + 0xb) - 1) * 8),arg1,CONCAT71(in_R8,*(arg1 + 0x50)),*(arg1 + 0x4e));
    return **(*0x2e7c0 + 0x3ba);
}


/* fcn.0001dc20 @ 0x1dc20 */

void fcn.0001dc20(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ushort uVar1;
    
    if ((*(arg2 + 0xe) == '\x04') || (uVar1 = 0x2900, *(arg2 + 0xe) == '@')) {
        uVar1 = 0x2a00;
    }
    fcn.00015a00(arg1,arg2,CONCAT44(0x200000,CONCAT22(uVar1,0x6a0)),0x96);
    return;
}


/* fcn.0001dcbc @ 0x1dcbc */

void fcn.0001dcbc(int64_t arg1,int64_t noname_1,int64_t arg2,int64_t arg3)

{
    fcn.00015a00(arg1,noname_1,CONCAT24(arg2,CONCAT22(arg3,0x323)) & 0xffffffffff,100);
    return;
}


/* fcn.0002c0b4 @ 0x2c0b4 */

ulong fcn.0002c0b4(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    
    iVar2 = fcn.0002bd84();
    if ((-1 < iVar2) && (pcVar1 = *((*(arg1 + 1) - 0x10 >> 4 & 3) * 200 + 0x78 + *0x2e848), pcVar1 != NULL)) {
        uVar3 = (*pcVar1)(arg1,arg2);
        return uVar3;
    }
    return 0xff;
}


/* fcn.0002bc6c @ 0x2bc6c */

void fcn.0002bc6c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    iVar1 = *(*0x39420 + 0x74a);
    if (*(arg1 + 0x30) != 0) {
        iVar1 = *(arg1 + 0x30);
    }
    *(iVar1 + (*(arg1 + 0x2a) << 0xc | arg2 & 0xffU)) = arg3;
    return;
}


/* fcn.0001e29c @ 0x1e29c */

uchar fcn.0001e29c(int64_t arg1)

{
    uchar uVar1;
    uint8_t uVar2;
    unkint7 extraout_RAX;
    
    fcn.0001ce98(arg1);
    if (extraout_RAX < 0) {
        uVar1 = 0xff;
    }
    else {
        uVar2 = in(*(arg1 + 0x18) + 4);
        out(*(arg1 + 0x18) + 4,uVar2 & 0xfb);
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.0001f90c @ 0x1f90c */

uint64_t fcn.0001f90c(int64_t arg1)

{
    ulong *puVar1;
    uint8_t uVar2;
    uint *puVar3;
    uchar uVar4;
    int64_t *piVar5;
    uint *puVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint32_t arg1_00;
    
    piVar5 = fcn.00014184(1);
    if (piVar5 != NULL) {
        *(arg1 + 0x40) = piVar5;
        puVar6 = fcn.00014184(2);
        *piVar5 = puVar6;
        if (puVar6 != NULL) {
            *puVar6 = 1;
            puVar6[1] = 1;
            *(puVar6 + 2) = 0;
            *(puVar6 + 4) = 0;
            *(puVar6 + 0x11) = 0;
            *(puVar6 + 0x15) = 0;
            *(puVar6 + 0x1a) = 0;
            *(puVar6 + 0x22) = 0;
            *(puVar6 + 9) = 0;
            *(puVar6 + 0x25) = 0;
            *(*piVar5 + 0x16) = 2;
            *(*piVar5 + 0x22) = 1;
            arg1_00 = arg1;
            uVar7 = fcn.0001f6a8(arg1_00,*piVar5);
            if ((*(arg1 + 0x58) & 0x10) != 0) {
code_r0x0001fb75:
                return uVar7 & 0xffffffffffffff00;
            }
            iVar8 = fcn.00014184(3);
            piVar5[2] = iVar8;
            if (iVar8 != 0) {
                puVar6 = iVar8 + 0x40;
                *puVar6 = 1;
                *(iVar8 + 0x44) = 0x8000000;
                uVar2 = *(*0x39420 + 0x716);
                *(iVar8 + 0x4c) = puVar6 + 0x18;
                *(iVar8 + 0x50) = 0x8000000;
                *(iVar8 + 0x55) = 0;
                *(iVar8 + 0x48) = (uVar2 + 1) * 0x100 | 0xe00069;
                puVar3 = piVar5[2];
                *puVar3 = 1;
                puVar3[1] = 1;
                *(puVar3 + 2) = 0;
                *(puVar3 + 4) = 0;
                *(puVar3 + 0x11) = 0;
                *(puVar3 + 0x15) = 0;
                *(puVar3 + 0x1a) = 0;
                *(puVar3 + 0x22) = 0;
                *(puVar3 + 9) = 0;
                *(puVar3 + 0x25) = 0;
                *(piVar5[2] + 0x16) = 2;
                *(piVar5[2] + 0x1a) = puVar6;
                if (*(*0x39420 + 0x6c7) == '\0') {
                    *(piVar5[2] + 0x22) = 8;
                }
                else {
                    *(piVar5[2] + 0x22) = 0x10;
                }
                uVar4 = fcn.00014478(0x20210);
                *(piVar5[2] + 0x23) = uVar4;
                *(piVar5[2] + 0x24) = 0;
                fcn.0001f6a8(arg1_00,piVar5[2]);
                fcn.00014c7c(arg1_00,0);
                iVar8 = fcn.00014184(3);
                piVar5[1] = iVar8;
                if (iVar8 != 0) {
                    puVar1 = iVar8 + 0x40;
                    *puVar1 = 1;
                    uVar2 = *(*0x39420 + 0x716);
                    *(iVar8 + 0x4c) = puVar1 + 0x18;
                    *(iVar8 + 0x50) = 0;
                    *(iVar8 + 0x55) = 0;
                    *(iVar8 + 0x48) = (uVar2 + 1) * 0x100 | 0xe00069;
                    puVar6 = piVar5[1];
                    *puVar6 = 1;
                    puVar6[1] = 1;
                    *(puVar6 + 2) = 0;
                    *(puVar6 + 4) = 0;
                    *(puVar6 + 0x11) = 0;
                    *(puVar6 + 0x15) = 0;
                    *(puVar6 + 0x1a) = 0;
                    *(puVar6 + 0x22) = 0;
                    *(puVar6 + 9) = 0;
                    *(puVar6 + 0x25) = 0;
                    *(piVar5[1] + 0x16) = 2;
                    *(piVar5[1] + 0x1a) = puVar1;
                    *(piVar5[1] + 0x22) = 0x80;
                    uVar4 = fcn.00014478(0x20048);
                    *(piVar5[1] + 0x23) = uVar4;
                    *(piVar5[1] + 0x24) = 0;
                    fcn.0001f6a8(arg1_00,piVar5[1]);
                    uVar7 = *0x2e7c0;
                    if (*(*0x2e7c0 + 0x72) == 0) {
                        *(iVar8 + 0x55) = 1;
                        *(iVar8 + 0x50) = 0x9800000;
                        *(iVar8 + 0x44) = 0x9800000;
                        *(piVar5[1] + 4) = puVar1;
                        *(piVar5[1] + 8) = puVar1;
                        *(piVar5[1] + 0x24) = 1;
                        uVar7 = *0x2e7c0;
                        *(*0x2e7c0 + 0x72) = arg1;
                    }
                    goto code_r0x0001fb75;
                }
            }
        }
    }
    return 0xff;
}


/* fcn.0001fb94 @ 0x1fb94 */

uint64_t fcn.0001fb94(int64_t arg1)

{
    uint64_t *puVar1;
    uint64_t *puVar2;
    char *pcVar3;
    uint64_t *puVar4;
    uint64_t *puVar5;
    uint64_t uVar6;
    ulong uVar7;
    uint64_t *puVar8;
    uint8_t uVar9;
    uint64_t *puVar10;
    
    puVar10 = *(arg1 + 0x40);
    puVar1 = *(*0x2e7c0 + 0x12);
    puVar8 = (*(*0x39420 + 0x5ae) << 0xc) + puVar1;
    puVar5 = *0x39420;
    if (((((puVar10 == NULL) || (puVar10 < puVar1)) || (puVar5 = puVar10 + 3, puVar8 < puVar5)) ||
        (((puVar2 = *puVar10, puVar2 < puVar1 || (puVar5 = puVar2 + 8, puVar8 < puVar5)) ||
         ((puVar5 = puVar10[1], puVar5 < puVar1 ||
          ((puVar5 = puVar5 + 8, puVar8 < puVar5 || (puVar5 = puVar10[2], puVar5 < puVar1)))))))) ||
       (puVar5 = puVar5 + 8, puVar8 < puVar5)) {
code_r0x0001fdb5:
        uVar6 = CONCAT71(puVar5 >> 8,0xff);
    }
    else {
        fcn.00014358(puVar2,2);
        if (puVar10[1] != 0) {
            fcn.00014358(puVar10[1],3);
        }
        if (puVar10[2] != 0) {
            fcn.00014358(puVar10[2],3);
        }
        uVar7 = 0;
        fcn.00014358(puVar10,1);
        fcn.00014c7c(arg1,CONCAT71(uVar7 >> 8,3));
        puVar5 = *0x2e7c0;
        if (*(*0x2e7c0 + 0x72) == arg1) {
            *(*0x2e7c0 + 0x72) = 0;
            uVar9 = 0;
            puVar10 = *0x2e7c0;
            if ((*0x2e7c0)[2] != '\0') {
                do {
                    pcVar3 = (*0x2e7e0)[uVar9];
                    puVar5 = *0x2e7e0;
                    if ((((pcVar3 != NULL) && (*pcVar3 != '\0')) && (pcVar3[1] == '\x10')) &&
                       (((pcVar3[0x58] & 1U) != 0 && (arg1 != pcVar3)))) {
                        puVar1 = *(pcVar3 + 0x40);
                        puVar10 = *(puVar10 + 0x12);
                        if ((((puVar1 < puVar10) ||
                             ((puVar5 = puVar1 + 3, puVar8 < puVar5 || (puVar2 = puVar1[1], puVar2 < puVar10)))) ||
                            (puVar5 = puVar2 + 8, puVar8 < puVar5)) ||
                           ((((puVar4 = *(puVar2 + 0x1a), puVar4 < puVar10 || (puVar5 = puVar4 + 4, puVar8 < puVar5))
                             || (puVar5 = puVar2[1], puVar5 < puVar10)) || (puVar5 = puVar5 + 4, puVar8 < puVar5))))
                        goto code_r0x0001fdb5;
                        *(puVar4 + 2) = 0x9800000;
                        *(*(puVar1[1] + 0x1a) + 0x15) = 1;
                        *(*(puVar1[1] + 0x1a) + 4) = *(*(puVar1[1] + 0x1a) + 0x10);
                        *(puVar1[1] + 4) = *(puVar1[1] + 0x1a);
                        *(puVar1[1] + 8) = *(puVar1[1] + 0x1a);
                        *(puVar1[1] + 0x24) = 1;
                        puVar5 = *0x2e7c0;
                        *(*0x2e7c0 + 0x72) = (*0x2e7e0)[uVar9];
                        puVar10 = *0x2e7c0;
                    }
                    uVar9 = uVar9 + 1;
                } while (uVar9 < puVar10[2]);
            }
        }
        uVar6 = puVar5 & 0xffffffffffffff00;
    }
    return uVar6;
}


/* fcn.0001ff28 @ 0x1ff28 */

ulong fcn.0001ff28(int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    
    uVar1 = **(arg1 + 0x10);
    do {
        if ((uVar1 & 1) != 0) {
            return 0;
        }
        uVar5 = uVar1;
        if ((uVar1 & 2) == 0) {
            uVar4 = uVar5;
            iVar3 = fcn.0002bd04(uVar5);
            if ((iVar3 < 0) && (iVar3 != -0x7fffffffffffffeb)) {
                return 0xff;
            }
            uVar6 = uVar5 & 0xfffffff0;
            if (((((uVar1 & 0xfffffff0) != 0) && (*(uVar6 + 0x15) != '\0')) && ((*(uVar6 + 4) & 0x800000) == 0)) &&
               (*(uVar6 + 0x15) = 0, *(uVar6 + 0x14) - 1U < 0x32)) {
                iVar3 = fcn.0001467c(CONCAT71(uVar4 >> 8,0x10),0,*(uVar6 + 8) >> 8 & 0xffffff7f,arg1);
                pcVar2 = *((*(uVar6 + 0x14) - 1) * 8 + 0x38de0);
                if ((pcVar2 != NULL) && (iVar3 != 0)) {
                    (*pcVar2)(arg1,iVar3,uVar6,0,0);
                }
            }
        }
        else {
            iVar3 = fcn.0002bd04(uVar5,0x40);
            if ((iVar3 < 0) && (iVar3 != -0x7fffffffffffffeb)) {
                return 0xff;
            }
            fcn.0001fdc8(arg1,uVar1 & 0xfffffff0);
        }
        uVar1 = *(uVar5 & 0xfffffff0);
    } while( true );
}


/* fcn.00020048 @ 0x20048 */

uint64_t fcn.00020048(int64_t arg1,ulong noname_1,int64_t arg2)

{
    uchar *arg1_00;
    char cVar1;
    ushort uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint16_t uVar5;
    int64_t iVar6;
    uint8_t uVar7;
    ulong uVar8;
    
    iVar6 = 0;
    if (arg2 != 0) {
        *(*(arg2 + 0x1a) + 0x15) = 0;
        iVar6 = arg2;
    }
    uVar7 = 0;
    if (*(*0x2e7c0 + 0x10) != '\0') {
        do {
            uVar8 = 0;
            arg1_00 = *(*0x2e7e0 + uVar7 * 8);
            if ((((arg1_00 != NULL) && (arg1_00[1] == '\x10')) && ((arg1_00[0x58] & 1) != 0)) &&
               (((uVar3 = in(*(arg1 + 0x18) + 8), (uVar3 & 0xfffff000) == *(arg1_00 + 0x10) &&
                 (cVar1 = in(*(arg1 + 0x18)), cVar1 != -1)) && (*(*0x39420 + 0x5ad) == '\0')))) {
                *(*0x39420 + 0x5ad) = 1;
                out(*(arg1 + 0x18) + 4,0);
                uVar5 = *(arg1 + 0x18) + 0x10;
                uVar4 = uVar5;
                uVar5 = in(uVar5);
                if ((uVar5 & 2) != 0) {
                    if ((uVar5 & 1) != 0) {
                        fcn.0002bb74(100000,uVar4);
                    }
                    fcn.00013fac(arg1_00,CONCAT71(uVar4 >> 8,*arg1_00) | 0x80,CONCAT71(uVar8 >> 8,1));
                    uVar2 = in(*(arg1 + 0x18) + 0x10);
                    out(*(arg1 + 0x18) + 0x10,uVar2);
                }
                uVar8 = 0;
                uVar5 = *(arg1 + 0x18) + 0x12;
                uVar4 = uVar5;
                uVar5 = in(uVar5);
                if ((uVar5 & 2) != 0) {
                    if ((uVar5 & 1) != 0) {
                        fcn.0002bb74(100000,uVar4);
                    }
                    fcn.00013fac(arg1_00,CONCAT71(uVar4 >> 8,*arg1_00) | 0x80,CONCAT71(uVar8 >> 8,2));
                    uVar2 = in(*(arg1 + 0x18) + 0x12);
                    out(*(arg1 + 0x18) + 0x12,uVar2);
                }
                out(*(arg1 + 0x18) + 4,4);
                *(*0x39420 + 0x5ad) = 0;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < *(*0x2e7c0 + 0x10));
    }
    uVar4 = *0x2e7c0;
    if (arg2 != 0) {
        *(*(iVar6 + 0x1a) + 4) = *(*(iVar6 + 0x1a) + 0x10);
        *(*(iVar6 + 0x1a) + 0x15) = 1;
        *(iVar6 + 4) = *(iVar6 + 0x1a);
        uVar4 = *(iVar6 + 0x1a);
        *(iVar6 + 8) = uVar4;
        *(iVar6 + 0x24) = 1;
    }
    return uVar4 & 0xffffffffffffff00;
}


/* fcn.0001f6a8 @ 0x1f6a8 */

ulong fcn.0001f6a8(uint32_t arg1,uint32_t arg2)

{
    int iVar1;
    bool bVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    ulong uVar5;
    int64_t iVar6;
    uint in_register_0000000c;
    int64_t iVar7;
    uint in_register_00000014;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint16_t uVar11;
    bool bVar12;
    
    puVar8 = CONCAT44(in_register_00000014,arg2);
    iVar7 = CONCAT44(in_register_0000000c,arg1);
    puVar10 = NULL;
    if (((puVar8 == NULL) || (iVar1 = *(puVar8 + 0x16), iVar1 < 0)) ||
       ((bVar2 = false, 1 < iVar1 && ((iVar1 != 2 || (bVar2 = true, *(puVar8 + 0x22) == '\0')))))) {
code_r0x0001f6f0:
        uVar5 = 0xff;
    }
    else {
        uVar11 = 0;
        bVar12 = *(iVar7 + 0x48) != 0;
        while (bVar12) {
            puVar9 = *(iVar7 + 0x10) + uVar11 * 4;
            uVar4 = *puVar9;
            while ((uVar4 & 1) == 0) {
                puVar10 = uVar4 & 0xfffffff0;
                iVar6 = fcn.0002bd04(puVar10,0x40);
                if ((iVar6 < 0) && (iVar6 != -0x7fffffffffffffeb)) goto code_r0x0001f6f0;
                if ((*(puVar10 + 0x16) <= *(puVar8 + 0x16)) && ((!bVar2 || (*(puVar10 + 0x22) <= *(puVar8 + 0x22)))))
                break;
                puVar9 = puVar10;
                uVar4 = *puVar10;
            }
            if (puVar10 != puVar8) {
                iVar6 = fcn.0002bd04(puVar9,4);
                if ((iVar6 < 0) && (iVar6 != -0x7fffffffffffffeb)) goto code_r0x0001f6f0;
                *puVar8 = *puVar9;
                *puVar9 = arg2 | 2;
            }
            if (bVar2) {
                uVar3 = *(puVar8 + 0x22);
            }
            else {
                uVar3 = 1;
            }
            uVar11 = uVar11 + uVar3;
            bVar12 = uVar11 < *(iVar7 + 0x48);
        }
        uVar5 = 0;
    }
    return uVar5;
}


/* fcn.0001fdc8 @ 0x1fdc8 */

ulong fcn.0001fdc8(int64_t arg1,uint32_t arg2)

{
    uint8_t uVar1;
    code *pcVar2;
    ulong uVar3;
    int64_t iVar4;
    uint32_t *puVar5;
    uint32_t uVar6;
    uint in_register_00000014;
    int64_t iVar7;
    bool bVar8;
    
    iVar7 = CONCAT44(in_register_00000014,arg2);
    if (iVar7 == 0) {
code_r0x0001fde9:
        uVar3 = 0xff;
    }
    else {
        if ((*(iVar7 + 0x24) != '\0') && (*(iVar7 + 0x1a) != 0)) {
            if (*(iVar7 + 8) == 0) {
                *(iVar7 + 8) = *(iVar7 + 0x1a);
            }
            puVar5 = *(iVar7 + 8);
            while (puVar5 != NULL) {
                *(iVar7 + 8) = puVar5;
                *(iVar7 + 0x10) = puVar5[2] >> 0x13 & 1;
                if ((puVar5[1] & 0x800000) != 0) goto code_r0x0001fde9;
                uVar6 = puVar5[1] + 1U & 0x7ff;
                *(iVar7 + 0x11) = *(iVar7 + 0x11) + uVar6;
                if ((puVar5[1] & 0xfe0000) != 0) break;
                *(iVar7 + 0x10) = *(iVar7 + 0x10) ^ 1;
                bVar8 = uVar6 < ((puVar5[2] >> 0x15) + 1 & 0x7ff);
                *(iVar7 + 0x15) = bVar8;
                if (bVar8) {
                    if (*(iVar7 + 0x16) != 1) break;
                    for (; (*puVar5 & 1) == 0; puVar5 = *puVar5 & 0xfffffff0) {
                    }
                    *(iVar7 + 4) = puVar5;
                }
                else {
                    if ((*puVar5 & 1) != 0) break;
                    puVar5 = *puVar5 & 0xfffffff0;
                }
            }
            uVar1 = *(iVar7 + 0x23);
            *(iVar7 + 0x24) = 0;
            if (((uVar1 != 0) && (uVar1 < 0x33)) && (pcVar2 = *((uVar1 - 1) * 8 + 0x38de0), pcVar2 != NULL)) {
                if (((pcVar2 != 0x20210) && (pcVar2 != fcn.00020048)) &&
                   (iVar4 = fcn.0001cef4(*(iVar7 + 0x25)), iVar4 < 0)) goto code_r0x0001fde9;
                (*pcVar2)(arg1,*(iVar7 + 0x25),iVar7,0,0);
            }
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.0001f7d8 @ 0x1f7d8 */

ulong fcn.0001f7d8(uint32_t arg1,uint32_t arg2)

{
    int iVar1;
    bool bVar2;
    uint16_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    uint in_register_0000000c;
    int64_t iVar6;
    uint in_register_00000014;
    uint32_t *puVar7;
    uint16_t uVar8;
    uint32_t *puVar9;
    uint32_t uVar10;
    uint32_t *puVar11;
    
    puVar7 = CONCAT44(in_register_00000014,arg2);
    iVar6 = CONCAT44(in_register_0000000c,arg1);
    uVar8 = 0;
    if ((puVar7 == NULL) || (iVar1 = *(puVar7 + 0x16), iVar1 < 0)) {
code_r0x0001f81c:
        uVar4 = 0xff;
    }
    else {
        if (iVar1 < 2) {
            bVar2 = false;
        }
        else if ((iVar1 != 2) || (bVar2 = true, *(puVar7 + 0x22) == '\0')) goto code_r0x0001f81c;
        puVar7[1] = 1;
        if (*(iVar6 + 0x48) != 0) {
            do {
                puVar11 = *(iVar6 + 0x10) + uVar8 * 4;
                uVar10 = *puVar11;
                if ((uVar10 & 1) == 0) {
                    do {
                        puVar9 = uVar10 & 0xfffffff0;
                        iVar5 = fcn.0002bd04(puVar9,0x40);
                        if ((iVar5 < 0) && (iVar5 != -0x7fffffffffffffeb)) goto code_r0x0001f81c;
                    } while ((puVar9 != puVar7) && (uVar10 = *puVar9, puVar11 = puVar9, (uVar10 & 1) == 0));
                    if ((uVar10 & 1) == 0) {
                        iVar5 = fcn.0002bd04(puVar11,4);
                        if ((iVar5 < 0) && (iVar5 != -0x7fffffffffffffeb)) goto code_r0x0001f81c;
                        *puVar11 = *puVar7;
                    }
                }
                if (bVar2) {
                    uVar3 = *(puVar7 + 0x22);
                }
                else {
                    uVar3 = 1;
                }
                uVar8 = uVar8 + uVar3;
            } while (uVar8 < *(iVar6 + 0x48));
        }
        *puVar7 = 1;
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.0001e6b4 @ 0x1e6b4 */

uint fcn.0001e6b4(int64_t arg1,int64_t arg2)

{
    uint32_t arg2_00;
    int64_t arg2_01;
    int iVar1;
    int iVar2;
    bool bVar3;
    
    iVar1 = *(*0x39420 + 0x6c0) * 100;
    *(arg2 + 0x24) = 1;
    arg2_00 = arg2;
    fcn.0001f6a8(arg1,arg2_00);
    iVar2 = iVar1;
    do {
        if (iVar1 != 0) {
            bVar3 = iVar2 == 0;
            iVar2 = iVar2 + -1;
            if (bVar3) {
code_r0x0001e715:
                fcn.0001f7d8(arg1,arg2_00);
                fcn.0001fdc8(arg1,arg2_00);
                return *(arg2 + 0x11);
            }
        }
        arg2_01 = arg2;
        fcn.0001fdc8(arg1,arg2_00);
        if (*(arg2 + 0x24) == '\0') goto code_r0x0001e715;
        fcn.0002bb74(10,arg2_01);
    } while( true );
}


/* fcn.0001eb34 @ 0x1eb34 */

int64_t fcn.0001eb34(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    bool bVar2;
    uint32_t uVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int iVar7;
    uint8_t uVar8;
    uint8_t *in_stack_00000028;
    uint32_t *in_stack_00000030;
    uint16_t in_stack_00000038;
    
    iVar7 = *arg4;
    bVar2 = false;
    uVar4 = 0;
    uVar8 = *in_stack_00000028;
    if (in_stack_00000038 != 0) {
        uVar5 = arg2 & 0xffff;
        do {
            uVar1 = *in_stack_00000030;
            if (uVar5 < uVar1) {
                uVar6 = uVar5;
            }
            else {
                bVar2 = true;
                uVar6 = uVar1;
            }
            uVar3 = (uVar6 - 1) * 0x200000 | *(arg1 + 8) & 0x17ffff;
            *(arg1 + 8) = uVar3;
            if (uVar8 == 1) {
                *(arg1 + 8) = uVar3 | 0x80000;
            }
            *(arg1 + 4) = arg3 | 0x18800000;
            if (*(arg1 + 8) == 'i') {
                *(arg1 + 4) = arg3 | 0x38800000;
            }
            *(arg1 + 0xc) = iVar7;
            iVar7 = iVar7 + uVar5;
            *in_stack_00000030 = uVar1 - uVar6;
            arg1 = arg1 + 0x20;
            uVar8 = uVar8 ^ 1;
        } while ((!bVar2) && (uVar4 = uVar4 + 1, uVar4 < in_stack_00000038));
    }
    *(arg1 + -0x20) = 1;
    *in_stack_00000028 = uVar8;
    *arg4 = iVar7;
    return arg1 + -0x20;
}


/* fcn.0002033c @ 0x2033c */

uint32_t * fcn.0002033c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint32_t *puVar3;
    uint32_t *puVar4;
    uint32_t uVar5;
    uint16_t in_stack_00000028;
    int64_t *in_stack_00000030;
    uint *in_stack_00000038;
    uint8_t *in_stack_00000040;
    int64_t in_stack_00000048;
    uint32_t in_stack_00000050;
    uint8_t in_stack_00000058;
    
    uVar1 = in_stack_00000050 / in_stack_00000028;
    if (in_stack_00000050 % in_stack_00000028 != 0) {
        uVar1 = uVar1 + 1;
    }
    puVar3 = fcn.00014184(uVar1 * 0x20 + 0x1f >> 5);
    if (puVar3 != NULL) {
        puVar4 = puVar3;
        while( true ) {
            *puVar4 = 1;
            uVar5 = in_stack_00000050 & 0xffff;
            if (in_stack_00000028 < in_stack_00000050) {
                uVar5 = in_stack_00000028;
            }
            uVar2 = (((uVar5 - 1) * 0x40 | arg4) << 7 | arg1) << 8 | arg3;
            puVar4[2] = uVar2;
            if (in_stack_00000058 != 0) {
                puVar4[2] = uVar2 | 0x80000;
            }
            puVar4[4] = 0x18800000;
            uVar2 = puVar4[4];
            if (arg2 != '\0') {
                uVar2 = 0x1c800000;
            }
            puVar4[3] = in_stack_00000048;
            puVar4[4] = uVar2;
            in_stack_00000058 = in_stack_00000058 ^ 1;
            puVar4[4] = puVar4[4] | 0x20000000;
            in_stack_00000048 = in_stack_00000048 + uVar5;
            puVar4[1] = puVar4[4];
            *(puVar4 + 0x15) = 1;
            in_stack_00000050 = in_stack_00000050 - uVar5;
            if (in_stack_00000050 == 0) break;
            uVar5 = puVar4 + 0x20U | 4;
            *puVar4 = uVar5;
            puVar4 = uVar5 & 0xfffffff0;
        }
        uVar5 = puVar4[4] | 0x1000000;
        puVar4[4] = uVar5;
        puVar4[1] = uVar5;
        *in_stack_00000038 = 0;
        *in_stack_00000030 = in_stack_00000048;
        *in_stack_00000040 = in_stack_00000058;
    }
    return puVar3;
}


/* fcn.0001cfec @ 0x1cfec */

void fcn.0001cfec(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint in_register_0000000c;
    uint32_t uVar2;
    uint64_t uVar3;
    
    uVar3 = *(CONCAT44(in_register_0000000c,arg1) + 0x4a) + arg2;
    if (*(CONCAT44(in_register_0000000c,arg1) + 0x20) < uVar3) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(uVar3 + *(CONCAT44(in_register_0000000c,arg1) + 0x18));
    }
    uVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x4a) + arg2;
    if (uVar1 + 4 <= *(CONCAT44(in_register_0000000c,arg1) + 0x20)) {
        *(uVar1 + *(CONCAT44(in_register_0000000c,arg1) + 0x18)) = ~arg3 & uVar2;
    }
    return;
}


/* fcn.00022b94 @ 0x22b94 */

ulong fcn.00022b94(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar uVar1;
    char cVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uchar uVar5;
    unkbyte7 Var6;
    int iVar7;
    uint32_t uVar8;
    
    uVar5 = arg3;
    Var6 = arg2 >> 8;
    iVar7 = ((arg3 & 0xff) + 0x3f) * 0x10;
    uVar1 = arg2;
    if ((arg4 == '\0') || (cVar2 = fcn.00025594(arg2,CONCAT71(Var6,uVar5)), uVar1 = uVar5, cVar2 == '\0')) {
        uVar5 = uVar1;
        uVar3 = *(arg1 + 0x4a) + iVar7;
        if (uVar3 + 4 <= *(arg1 + 0x20)) {
            *(uVar3 + *(arg1 + 0x18)) = 0x210;
        }
        uVar3 = 0;
        do {
            uVar4 = *(arg1 + 0x4a) + iVar7;
            if (*(arg1 + 0x20) < uVar4) {
                uVar8 = 0;
            }
            else {
                uVar8 = *(uVar4 + *(arg1 + 0x18));
            }
            if ((uVar8 & 0x200000) != 0) goto code_r0x00022cbe;
            fcn.0002bb74(100,CONCAT71(Var6,uVar5));
            uVar3 = uVar3 + 1;
        } while (uVar3 < 3000);
        if ((uVar8 & 0x200000) != 0) goto code_r0x00022cbe;
    }
    else {
        uVar3 = *(arg1 + 0x4a) + iVar7;
        if (uVar3 + 4 <= *(arg1 + 0x20)) {
            *(uVar3 + *(arg1 + 0x18)) = 0x80000200;
        }
        uVar3 = 0;
        do {
            uVar4 = *(arg1 + 0x4a) + iVar7;
            if (*(arg1 + 0x20) < uVar4) {
                uVar4 = 0;
            }
            else {
                uVar4 = *(uVar4 + *(arg1 + 0x18));
            }
            if ((uVar4 & 0x280000) != 0) goto code_r0x00022c3b;
            fcn.0002bb74(100,CONCAT71(Var6,uVar5));
            uVar3 = uVar3 + 1;
        } while (uVar3 < 6000);
        if ((uVar4 & 0x280000) != 0) {
code_r0x00022c3b:
            if ((*(arg2 + 100) == 0x1b6f) && (*(arg2 + 0x66) == 0x7023)) {
                fcn.0002bb74(20000,CONCAT71(Var6,uVar5));
            }
code_r0x00022cbe:
            uVar3 = *(arg1 + 0x4a) + iVar7;
            if (uVar3 + 4 <= *(arg1 + 0x20)) {
                *(uVar3 + *(arg1 + 0x18)) = 0x280200;
            }
            fcn.0002bb74(10000,CONCAT71(Var6,uVar5));
            return 0;
        }
    }
    return 0xff;
}


/* fcn.00022fc0 @ 0x22fc0 */

uint64_t fcn.00022fc0(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t arg2;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    
    uVar4 = 0;
    uVar6 = 0;
    if (((*(*0x39420 + 0x6c9) & 0x10000) != 0) && (*(arg1 + 0x4a) <= *(arg1 + 0x20))) {
        uVar6 = *(*(arg1 + 0x4a) + *(arg1 + 0x18));
    }
    iVar1 = *(*(arg1 + 0x60) + 0x60);
    if (((iVar1 == 0) || (uVar3 = iVar1 + 0x20, *(arg1 + 0x20) < uVar3)) ||
       (uVar5 = *(uVar3 + *(arg1 + 0x18)), uVar3 = uVar5, -1 < uVar5)) {
        arg2 = 0;
        fcn.0001cfb0(arg1,0,2);
        fcn.0002bb74(1000,arg2);
        uVar5 = 0;
        do {
            if (*(arg1 + 0x20) < *(arg1 + 0x4a)) {
                uVar2 = 0;
            }
            else {
                uVar2 = *(*(arg1 + 0x4a) + *(arg1 + 0x18));
            }
            if ((uVar2 & 2) == 0) break;
            fcn.0002bb74(100,arg2);
            uVar5 = uVar5 + 1;
        } while (uVar5 < 8000);
        uVar3 = *(arg1 + 0x4a);
        if (uVar3 <= *(arg1 + 0x20)) {
            uVar3 = *(arg1 + 0x18);
            uVar4 = *(*(arg1 + 0x4a) + uVar3);
        }
        if ((uVar4 & 2) != 0) {
            return CONCAT71(uVar3 >> 8,0xff);
        }
        uVar3 = *0x39420;
        if (((*(*0x39420 + 0x6c9) & 0x10000) != 0) && ((uVar6 & 8) != 0)) {
            uVar3 = fcn.0001cfb0(arg1,0,8);
        }
    }
    return uVar3 & 0xffffffffffffff00;
}


/* fcn.000254d0 @ 0x254d0 */

int64_t fcn.000254d0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    char in_stack_00000028;
    
    iVar3 = (arg3 - *(arg1 + 0x80)) + *(arg1 + 0x88);
    *arg2 = iVar3;
    *(arg2 + 8) = arg4;
    iVar1 = (arg4 & 0xffffffffU) * 0x10;
    *(arg2 + 0x1c) = 1;
    *(arg2 + 0x14) = iVar3;
    *(arg2 + 0xc) = iVar1 + -0x10 + iVar3;
    if ((arg4 & 0xffffffffU) != 0) {
        fcn.00011080(arg3,iVar1,0);
    }
    if (in_stack_00000028 != '\0') {
        piVar2 = (*(arg1 + 0x80) - *(arg1 + 0x88)) + *(arg2 + 0xc);
        iVar1 = fcn.0002bd04(piVar2,0x10);
        if ((iVar1 < 0) && (iVar1 != -0x7fffffffffffffeb)) {
            return iVar1;
        }
        *piVar2 = iVar3;
        *(piVar2 + 0xc) = *(piVar2 + 0xc) & 0xffff1bff | 0x1802;
    }
    return 0;
}


/* fcn.0001cfb0 @ 0x1cfb0 */

void fcn.0001cfb0(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint in_register_0000000c;
    uint32_t uVar2;
    uint64_t uVar3;
    
    uVar3 = *(CONCAT44(in_register_0000000c,arg1) + 0x4a) + arg2;
    if (*(CONCAT44(in_register_0000000c,arg1) + 0x20) < uVar3) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(uVar3 + *(CONCAT44(in_register_0000000c,arg1) + 0x18));
    }
    uVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x4a) + arg2;
    if (uVar1 + 4 <= *(CONCAT44(in_register_0000000c,arg1) + 0x20)) {
        *(uVar1 + *(CONCAT44(in_register_0000000c,arg1) + 0x18)) = uVar2 | arg3;
    }
    return;
}


/* fcn.00021078 @ 0x21078 */

char fcn.00021078(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    int64_t iVar3;
    bool bVar4;
    int64_t iVar5;
    int64_t *piVar6;
    uint64_t arg2_00;
    char cVar7;
    int64_t *piVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint8_t uVar11;
    uint8_t in_stack_00000028;
    char *in_stack_00000030;
    uint16_t in_stack_00000038;
    uint32_t *in_stack_00000040;
    
    uVar9 = arg3;
    bVar4 = false;
    iVar3 = *(arg1 + 0x60);
    cVar7 = '\x10';
    for (uVar10 = 0; (in_stack_00000038 * 100 == 0 || (uVar10 < in_stack_00000038 * 100)); uVar10 = uVar10 + 1) {
        piVar8 = (*(iVar3 + 0xcc) - *(iVar3 + 0x88)) + *(iVar3 + 0x80);
        uVar11 = *(iVar3 + 0xd4);
        do {
            iVar5 = fcn.0002bd04(piVar8,0x10);
            if ((iVar5 < 0) && (iVar5 != -0x7fffffffffffffeb)) goto code_r0x000212d5;
            uVar2 = *(piVar8 + 0xc);
            arg2_00 = uVar2;
            if ((uVar2 & 1) != uVar11) goto code_r0x000212ae;
            if ((uVar2 >> 10 & 0x3f) == uVar9) {
                if (uVar9 == 0x20) {
                    if ((*(piVar8 + 0xf) == arg4) && ((uVar2 >> 0x10 & 0x1f) == in_stack_00000028)) {
                        if ((in_stack_00000040 != NULL) &&
                           (*in_stack_00000040 = *(piVar8 + 1) & 0xffffff, *(piVar8 + 0xb) == '\r')) {
                            piVar6 = (*piVar8 - *(iVar3 + 0x88)) + *(iVar3 + 0x80);
                            while (*(piVar6 + 0xc) = *(piVar6 + 0xc) & 0xffffffdb, (*(piVar6 + 0xc) & 0x10) != 0) {
                                puVar1 = piVar6 + 0x1c;
                                piVar6 = piVar6 + 2;
                                if ((*puVar1 & 0xfc00) == 0x1800) {
                                    piVar6 = (*(iVar3 + 0x80) - *(iVar3 + 0x88)) + *piVar6;
                                }
                                *in_stack_00000040 = *in_stack_00000040 + (*(piVar6 + 1) & 0x1ffff);
                            }
                        }
                        cVar7 = *(piVar8 + 0xb);
                        *in_stack_00000030 = cVar7;
                        if ((cVar7 == '\x01') || (cVar7 == '\r')) {
                            cVar7 = '\0';
                        }
                        else {
                            cVar7 = -1;
                        }
                        bVar4 = true;
                    }
                }
                else if (uVar9 == 0x21) {
                    if (arg2 == 0) {
                        if ((*in_stack_00000030 != '\0') && (*(piVar8 + 0xb) == *in_stack_00000030)) {
                            cVar7 = '\0';
                            goto code_r0x000212d7;
                        }
                    }
                    else if (*piVar8 == (arg2 - *(iVar3 + 0x80)) + *(iVar3 + 0x88)) {
                        if (in_stack_00000040 != NULL) {
                            *in_stack_00000040 = *(piVar8 + 0xf);
                        }
                        cVar7 = *(piVar8 + 0xb);
                        *in_stack_00000030 = cVar7;
                        cVar7 = -(cVar7 != '\x01');
                        goto code_r0x000212d7;
                    }
                }
            }
            if (bVar4) goto code_r0x000212cc;
            iVar5 = *(iVar3 + 0x88);
            arg2_00 = *(iVar3 + 0x80);
            if (piVar8 == (*(iVar3 + 0xc4) - iVar5) + arg2_00) {
                piVar8 = (*(iVar3 + 0xb8) - iVar5) + arg2_00;
                uVar11 = uVar11 ^ 1;
            }
            else {
                piVar8 = piVar8 + 2;
            }
        } while (piVar8 != (*(iVar3 + 0xcc) - iVar5) + arg2_00);
        *in_stack_00000030 = '\x15';
        cVar7 = -1;
code_r0x000212ae:
        if (bVar4) break;
        fcn.0002bb74(10,arg2_00);
    }
code_r0x000212cc:
    if (!bVar4) {
        *in_stack_00000030 = -1;
code_r0x000212d5:
        cVar7 = -1;
    }
code_r0x000212d7:
    fcn.00021d68(arg1);
    return cVar7;
}


/* fcn.00021d68 @ 0x21d68 */

ulong fcn.00021d68(int64_t arg1)

{
    code *pcVar1;
    uchar auVar2 [16];
    uint8_t uVar3;
    uint8_t uVar4;
    uint16_t uVar5;
    uint32_t uVar6;
    uint uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    ulong *puVar14;
    int iVar15;
    uint64_t uVar16;
    uint8_t uVar17;
    uint32_t uVar18;
    uint32_t uVar19;
    uint64_t uVar20;
    bool bVar21;
    uint8_t uStackX_10;
    
    iVar10 = fcn.0001ce98(arg1);
    uVar11 = 0;
    uVar8 = 0;
    uVar9 = 0;
    if (iVar10 < 0) {
        return 0xff;
    }
    iVar10 = *(arg1 + 0x60);
    uVar5 = fcn.0002bbf4(arg1,4);
    if (uVar5 == 0xff) {
        return 0;
    }
    uVar18 = 0;
    uVar17 = 0;
    if ((uVar5 & 2) == 0) {
        if ((**0x39420 & 0x10) == 0) {
            return 0;
        }
        uVar11 = fcn.0002bbf4(arg1,0x10);
        uVar20 = uVar11 & 0xffffffff;
        if ((uVar11 & 6) == 4) {
            iVar12 = fcn.0002bbf4(arg1,0x14);
            uVar20 = uVar20 | iVar12 << 0x20;
        }
        if ((uVar20 & 0xffffffffffffff80) == *(arg1 + 0x18)) {
            if (*(iVar10 + 0x38) != 0) {
                iVar10 = arg1;
                fcn.0002bc6c(arg1,4,6);
                fcn.00020bd0(iVar10);
                if (((*(*(*0x2e7c0 + 0x3aa) + 0x2b) == '\0') && (*0x2e7b0 != NULL)) && ((**0x39420 & 2) == 0)) {
                    (*(*0x2e7b0)[1])(*0x2e7b0);
                }
                fcn.0002bc6c(arg1,4,uVar5);
                return 0;
            }
            return 0;
        }
        return 0;
    }
    uVar6 = fcn.0002bbf4(arg1,0x10);
    uVar20 = uVar6;
    if ((uVar6 & 6) == 4) {
        uVar7 = fcn.0002bbf4(arg1,0x14);
        uVar20 = CONCAT44(uVar7,uVar6);
    }
    uVar20 = uVar20 & 0xffffffffffffff80;
    if (uVar20 != *(arg1 + 0x18)) {
        iVar12 = fcn.0002bd44(uVar20,*(arg1 + 0x20));
        if ((iVar12 < 0) && (iVar12 != -0x7fffffffffffffeb)) {
            return 0xff;
        }
        *(arg1 + 0x18) = uVar20;
        *(iVar10 + 0x28) = *(iVar10 + 8) + uVar20;
        *(iVar10 + 0x30) = *(iVar10 + 0x20) + uVar20;
    }
    uVar20 = *(arg1 + 0x4a) + 8;
    if (*(arg1 + 0x20) < uVar20) {
        uVar20 = uVar11;
    }
    else {
        uVar20 = *(uVar20 + *(arg1 + 0x18));
    }
    if (uVar20 != *(iVar10 + 0x70)) {
        return 0;
    }
    if (*(iVar10 + 0x38) != 0) {
        uVar20 = *(iVar10 + 0x38) + 4;
        if (*(arg1 + 0x20) < uVar20) {
            uVar6 = uVar18;
        }
        else {
            uVar6 = *(uVar20 + *(arg1 + 0x18));
        }
        if ((uVar6 & 0x20002000) == 0x20002000) {
            uVar20 = *(iVar10 + 0x38) + 4;
            if ((uVar20 <= *(arg1 + 0x20)) && (uVar20 + 4 <= *(arg1 + 0x20))) {
                *(uVar20 + *(arg1 + 0x18)) = *(uVar20 + *(arg1 + 0x18)) | 0x20000000;
            }
            if (*(iVar10 + 0x38) <= *(arg1 + 0x20)) {
                uVar11 = *(*(iVar10 + 0x38) + *(arg1 + 0x18));
            }
            if ((uVar11 >> 0x18 & 1) == 0) {
                if ((*(arg1 + 0x58) & 1) != 0) {
                    return 0;
                }
                **0x39420 = **0x39420 | 1;
                fcn.000205bc(arg1);
                fcn.00020e40(arg1);
                if (*(*(*0x2e7c0 + 0x3aa) + 0x2b) != '\0') {
                    return 0;
                }
                if (*0x2e7b0 == NULL) {
                    return 0;
                }
                if ((**0x39420 & 2) == 0) {
                    (***0x2e7b0)(*0x2e7b0);
                    return 0;
                }
                return 0;
            }
            if ((*(arg1 + 0x58) & 1) == 0) {
                return 0;
            }
            **0x39420 = **0x39420 & 0xfffffffe;
            fcn.00020bd0(arg1);
            if (*(*(*0x2e7c0 + 0x3aa) + 0x2b) != '\0') {
                return 0;
            }
            if (*0x2e7b0 == NULL) {
                return 0;
            }
            if ((**0x39420 & 2) == 0) {
                (*(*0x2e7b0)[1])(*0x2e7b0);
                return 0;
            }
            return 0;
        }
    }
    if ((*(arg1 + 0x58) & 1) == 0) {
        return 0;
    }
    uVar20 = *(arg1 + 0x4a) + 4;
    if (*(arg1 + 0x20) < uVar20) {
        uVar20 = uVar11;
    }
    else {
        uVar20 = *(uVar20 + *(arg1 + 0x18));
    }
    if ((uVar20 & 1) != 0) {
        return 0xff;
    }
    iVar12 = *(iVar10 + 0x28);
    if (*(arg1 + 0x20) < ((iVar12 + 0x30) - *(arg1 + 0x18)) + 8) {
        uVar20 = uVar11;
    }
    else if ((*(iVar10 + 0x18) & 1) == 0) {
        uVar20 = *(iVar12 + 0x30);
    }
    else {
        uVar20 = *(iVar12 + 0x30);
    }
    if (uVar20 != *(iVar10 + 0x88)) {
        return 0;
    }
    if ((*0x39420)[0x1b1] == '\x01') {
        uVar20 = 0;
        uStackX_10 = 0;
        do {
            iVar12 = (uVar20 + 0x10) * 0x10;
            puVar14 = *(iVar12 + iVar10);
            if ((((puVar14 != NULL) && (iVar13 = fcn.0002560c(*puVar14,0x18), iVar13 != 0)) &&
                (*(iVar12 + iVar10) = 0, *(iVar13 + 0x15) - 1U < 0x32)) && (*(iVar13 + 0x20) != 0)) {
                pcVar1 = *((*(iVar13 + 0x15) - 1) * 8 + 0x38de0);
                if (pcVar1 != NULL) {
                    (*pcVar1)(arg1,iVar13,0,*(iVar13 + 0x20),*(iVar10 + 0x108 + uVar20 * 0x10));
                }
                if (*(iVar13 + 0x50) != '\0') {
                    uVar20 = *(iVar13 + 0xf8);
                    uVar16 = *(iVar10 + 0xe8);
                    if ((uVar16 <= uVar20) && (uVar20 <= *(iVar10 + 0xc) * *(iVar10 + 0x79) * 0x20 + uVar16)) {
                        auVar2._8_8_ = 0;
                        auVar2._0_8_ = uVar20 - uVar16;
                        uVar4 = (*(iVar13 + 0x50) & 0xf) * '\x02';
                        uVar3 = uVar4 + 1;
                        if (-1 < *(iVar13 + 0x50)) {
                            uVar3 = uVar4;
                        }
                        uVar20 = *(arg1 + 0x4a) + 4;
                        if (*(arg1 + 0x20) < uVar20) {
                            uVar20 = uVar11;
                        }
                        else {
                            uVar20 = *(uVar20 + *(arg1 + 0x18));
                        }
                        if ((uVar20 & 1) != 0) {
                            return 0xff;
                        }
                        iVar15 = *(iVar10 + 0x1c);
                        uVar6 = SUB161(auVar2 / (ZEXT416(*(iVar10 + 0x79)) << 5),0) + 1;
                        iVar12 = (uVar6 * 0x20 + -0x20 + (uVar3 - 1)) * 0x20 + *(iVar10 + 0xd8);
                        puVar14 = fcn.00020fdc(arg1,iVar12);
                        if (puVar14 != NULL) {
                            *(puVar14 + 0xc) = *(puVar14 + 0xc) & 0xffff07ff;
                            *(puVar14 + 0xc) = *(puVar14 + 0xc) | 0x400;
                            uVar19 = *(puVar14 + 0xc) | 0x24;
                            *puVar14 = *(iVar13 + 0x18);
                            uVar5 = *(iVar13 + 0x132);
                            *(puVar14 + 0xc) = uVar19;
                            *(puVar14 + 1) = uVar5 | *(puVar14 + 1) & 0xfffe0000;
                            uVar20 = iVar15 + uVar6 * 4;
                            *(puVar14 + 0xc) = (*(iVar12 + 0x1c) ^ uVar19) & 1 ^ uVar19;
                            if (uVar20 + 4 <= *(arg1 + 0x20)) {
                                *(uVar20 + *(arg1 + 0x18)) = uVar3;
                            }
                        }
                    }
                }
            }
            uStackX_10 = uStackX_10 + 1;
            uVar20 = uStackX_10;
        } while (uStackX_10 < 0x10);
    }
    uVar20 = *(arg1 + 0x4a) + 4;
    if (*(arg1 + 0x20) < uVar20) {
        uVar20 = uVar11;
    }
    else {
        uVar20 = *(uVar20 + *(arg1 + 0x18));
    }
    if ((uVar20 & 0x10) != 0) {
        fcn.00021578(arg1,iVar10);
    }
    uVar20 = *(arg1 + 0x4a) + 4;
    if (uVar20 <= *(arg1 + 0x20)) {
        uVar17 = *(uVar20 + *(arg1 + 0x18));
    }
    if ((uVar17 & 8) != 0) {
        if (*(arg1 + 0x4a) + 8 <= *(arg1 + 0x20)) {
            *(*(arg1 + 0x4a) + 4 + *(arg1 + 0x18)) = 8;
        }
        if ((*(*0x39420 + 0x686) == *arg1) && ((*0x39420)[0x1b1] == '\x01')) {
            uVar20 = (*(iVar10 + 0x30) - *(arg1 + 0x18)) + 0x24;
            if (*(arg1 + 0x20) < uVar20) {
                uVar6 = uVar9;
            }
            else {
                uVar6 = *(uVar20 + *(arg1 + 0x18));
            }
            if (*(*0x39420 + 0x6c7) == '\0') {
                bVar21 = (uVar6 & 32000) == 32000;
            }
            else {
                bVar21 = (uVar6 & 64000) == 64000;
            }
            if (bVar21) {
                fcn.00017a8c(arg1);
            }
        }
    }
    if ((*((*(iVar10 + 0xcc) - *(iVar10 + 0x88)) + 0xc + *(iVar10 + 0x80)) & 1) != *(iVar10 + 0xd4)) {
        iVar15 = *(iVar10 + 0x30);
        if (*(*0x39420 + 0x686) == *arg1) {
            uVar11 = (iVar15 - *(arg1 + 0x18)) + 0x24;
            if (uVar11 <= *(arg1 + 0x20)) {
                uVar8 = *(uVar11 + *(arg1 + 0x18));
            }
            if ((((uVar8 & 64000) == 64000) && (*(*0x39420 + 0x6c7) == '\x01')) ||
               (((uVar8 & 32000) == 32000 && (*(*0x39420 + 0x6c7) == '\0')))) {
                uVar11 = (*(iVar10 + 0x30) - *(arg1 + 0x18)) + 0x20;
                if ((uVar11 <= *(arg1 + 0x20)) && (uVar11 + 4 <= *(arg1 + 0x20))) {
                    *(uVar11 + *(arg1 + 0x18)) = *(uVar11 + *(arg1 + 0x18)) | 1;
                }
                iVar12 = *(iVar10 + 0x30);
                if (((iVar12 + 0x38) - *(arg1 + 0x18)) + 8 <= *(arg1 + 0x20)) {
                    if ((*(iVar10 + 0x18) & 1) == 0) {
                        *(iVar12 + 0x38) = 8;
                        *(iVar12 + 0x3c) = 0;
                        return 0;
                    }
                    *(iVar12 + 0x38) = 8;
                    return 0;
                }
                return 0;
            }
            iVar15 = *(iVar10 + 0x30);
        }
        uVar11 = (iVar15 - *(arg1 + 0x18)) + 0x20;
        if ((uVar11 <= *(arg1 + 0x20)) && (uVar11 + 4 <= *(arg1 + 0x20))) {
            *(uVar11 + *(arg1 + 0x18)) = *(uVar11 + *(arg1 + 0x18)) | 1;
        }
        iVar12 = *(iVar10 + 0x30);
        uVar11 = *(iVar10 + 0xcc);
        uVar20 = uVar11 | 8;
        if (((iVar12 + 0x38) - *(arg1 + 0x18)) + 8 <= *(arg1 + 0x20)) {
            if ((*(iVar10 + 0x18) & 1) == 0) {
                *(iVar12 + 0x38) = uVar20;
                *(iVar12 + 0x3c) = uVar11 >> 0x20;
                return 0;
            }
            *(iVar12 + 0x38) = uVar20;
            return 0;
        }
        return 0;
    }
    while( true ) {
        iVar13 = (*(iVar10 + 0xcc) - *(iVar10 + 0x88)) + *(iVar10 + 0x80);
        iVar12 = fcn.0002bd04(iVar13,0x10);
        if (((iVar12 < 0) && (iVar12 != -0x7fffffffffffffeb)) || ((*(iVar13 + 0xc) & 1) != *(iVar10 + 0xd4))) break;
        if (*(iVar10 + 0xcc) == *(iVar10 + 0xc4)) {
            iVar12 = *(iVar10 + 0xb8);
            *(iVar10 + 0xd4) = *(iVar10 + 0xd4) ^ 1;
        }
        else {
            iVar12 = *(iVar10 + 0xcc) + 0x10;
        }
        *(iVar10 + 0xcc) = iVar12;
        uVar8 = *(iVar13 + 0xc) >> 10 & 0x3f;
        if (uVar8 == 0x20) {
            fcn.00021a00(iVar10,arg1,iVar13);
        }
        else if ((uVar8 != 0x21) && (uVar8 == 0x22)) {
            fcn.00021ca0(iVar10,arg1,iVar13);
        }
    }
    if (*(*0x39420 + 0x686) == *arg1) {
        uVar20 = (*(iVar10 + 0x30) - *(arg1 + 0x18)) + 0x24;
        if (uVar20 <= *(arg1 + 0x20)) {
            uVar9 = *(uVar20 + *(arg1 + 0x18));
        }
        if (((uVar9 & 64000) != 64000) || (*(*0x39420 + 0x6c7) != '\x01')) {
            uVar20 = (*(iVar10 + 0x30) - *(arg1 + 0x18)) + 0x24;
            if (uVar20 <= *(arg1 + 0x20)) {
                uVar18 = *(uVar20 + *(arg1 + 0x18));
            }
            if (((uVar18 & 32000) != 32000) || (*(*0x39420 + 0x6c7) != '\0')) goto code_r0x0002266f;
        }
        uVar20 = (*(iVar10 + 0x30) - *(arg1 + 0x18)) + 0x20;
        if ((uVar20 <= *(arg1 + 0x20)) && (uVar20 + 4 <= *(arg1 + 0x20))) {
            *(uVar20 + *(arg1 + 0x18)) = *(uVar20 + *(arg1 + 0x18)) | 1;
        }
        iVar12 = *(iVar10 + 0x30);
        if (((iVar12 + 0x38) - *(arg1 + 0x18)) + 8 <= *(arg1 + 0x20)) {
            if ((*(iVar10 + 0x18) & 1) == 0) {
                *(iVar12 + 0x38) = 8;
                *(iVar12 + 0x3c) = 0;
            }
            else {
                *(iVar12 + 0x38) = 8;
            }
        }
    }
    else {
code_r0x0002266f:
        uVar20 = (*(iVar10 + 0x30) - *(arg1 + 0x18)) + 0x20;
        if ((uVar20 <= *(arg1 + 0x20)) && (uVar20 + 4 <= *(arg1 + 0x20))) {
            *(uVar20 + *(arg1 + 0x18)) = *(uVar20 + *(arg1 + 0x18)) | 1;
        }
        iVar12 = *(iVar10 + 0x30);
        uVar20 = *(iVar10 + 0xcc);
        uVar16 = uVar20 | 8;
        if (((iVar12 + 0x38) - *(arg1 + 0x18)) + 8 <= *(arg1 + 0x20)) {
            if ((*(iVar10 + 0x18) & 1) == 0) {
                *(iVar12 + 0x38) = uVar16;
                *(iVar12 + 0x3c) = uVar20 >> 0x20;
            }
            else {
                *(iVar12 + 0x38) = uVar16;
            }
        }
    }
    uVar20 = *(arg1 + 0x4a) + 4;
    if (uVar20 <= *(arg1 + 0x20)) {
        uVar11 = *(uVar20 + *(arg1 + 0x18));
    }
    if ((uVar11 & 0x10) != 0) {
        fcn.00021578(arg1,iVar10);
    }
    return 0;
}


/* fcn.00020fdc @ 0x20fdc */

ulong * fcn.00020fdc(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *puVar2;
    
    iVar1 = *(arg1 + 0x60);
    puVar2 = (*(arg2 + 0x14) - *(iVar1 + 0x88)) + *(iVar1 + 0x80);
    if ((*(puVar2 + 0xc) & 0xfc00) == 0x1800) {
        *(puVar2 + 0xc) = *(puVar2 + 0xc) ^ (*(arg2 + 0x1c) ^ *(puVar2 + 0xc)) & 1;
        *(arg2 + 0x1c) = *(arg2 + 0x1c) ^ 1;
        *(arg2 + 0x14) = *arg2;
        puVar2 = (*arg2 - *(iVar1 + 0x88)) + *(iVar1 + 0x80);
    }
    iVar1 = fcn.0002bd04(puVar2);
    if ((iVar1 < 0) && (iVar1 != -0x7fffffffffffffeb)) {
        puVar2 = NULL;
    }
    else {
        *(puVar2 + 0xc) = *(puVar2 + 0xc) & 1;
        *puVar2 = 0;
        *(puVar2 + 1) = 0;
        *(arg2 + 0x14) = *(arg2 + 0x14) + 0x10;
    }
    return puVar2;
}


/* fcn.0002270c @ 0x2270c */

uint32_t fcn.0002270c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    char cVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint8_t uVar6;
    uint64_t arg2_00;
    int64_t arg2_01;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    unkbyte7 in_R9;
    uint32_t uVar10;
    bool bVar11;
    
    cVar1 = arg3;
    iVar7 = ((arg2 & 0xff) + 0x3f) * 0x10;
    iVar3 = fcn.0001ce98(arg1);
    uVar4 = 0;
    if (iVar3 < 0) {
        return 0xff;
    }
    iVar3 = *(arg1 + 0x60);
    uVar5 = *(arg1 + 0x4a) + 4;
    if (*(arg1 + 0x20) < uVar5) {
        uVar8 = 0;
    }
    else {
        uVar8 = *(uVar5 + *(arg1 + 0x18));
    }
    if ((uVar8 & 1) != 0) {
        return 0xff;
    }
    uVar5 = *(arg1 + 0x4a) + iVar7;
    if (*(arg1 + 0x20) < uVar5) {
        uVar5 = 0;
    }
    else {
        uVar5 = *(uVar5 + *(arg1 + 0x18));
    }
    uVar8 = (-((uVar5 & 8) != 0) & 0x200) + 0x40;
    bVar11 = (uVar5 >> 0x14 & 1) != 0;
    if (bVar11) {
        uVar8 = uVar8 | 0x4000;
    }
    if (bVar11 || (uVar5 & 8) != 0) {
        if (*(arg1 + 0x4a) + 8 <= *(arg1 + 0x20)) {
            *(*(arg1 + 0x4a) + 4 + *(arg1 + 0x18)) = 0x10;
        }
        if (((uVar5 & 0x20000) != 0) && (uVar4 = *(arg1 + 0x4a) + iVar7, uVar4 + 4 <= *(arg1 + 0x20))) {
            *(uVar4 + *(arg1 + 0x18)) = 0x20000;
        }
        return uVar8;
    }
    uVar10 = 0;
    do {
        if ((uVar5 & 0x10) == 0) break;
        fcn.0002bb74(1000,uVar5);
        uVar5 = *(arg1 + 0x4a) + iVar7;
        if (*(arg1 + 0x20) < uVar5) {
            uVar5 = 0;
        }
        else {
            uVar5 = *(uVar5 + *(arg1 + 0x18));
        }
        uVar10 = uVar10 + 1;
    } while (uVar10 < 200);
    uVar5 = uVar5 >> 5;
    uVar6 = uVar5 & 0xf;
    arg2_00 = uVar5 & 0x7ffff0f;
    if ((uVar5 & 0xf) != 0) {
        if (uVar6 == 3) {
            uVar8 = uVar8 | 0x100;
        }
        else if (uVar6 != 5) {
            if (uVar6 == 6) {
                uVar10 = 0;
                do {
                    fcn.0002bb74(1000,arg2_00);
                    uVar5 = *(arg1 + 0x4a) + iVar7;
                    if (*(arg1 + 0x20) < uVar5) {
                        uVar9 = 0;
                    }
                    else {
                        uVar9 = *(uVar5 + *(arg1 + 0x18));
                    }
                    uVar6 = uVar9 >> 5 & 0xf;
                } while ((uVar6 == 6) && (uVar10 = uVar10 + 1, uVar10 < 0xc));
code_r0x00022912:
                if (uVar6 != 5) {
code_r0x00022916:
                    fcn.00022b94(arg1,iVar3,CONCAT71(arg3 >> 8,arg2),CONCAT71(in_R9,1));
                }
            }
            else if (uVar6 == 7) {
                arg2_01 = CONCAT71(arg2_00 >> 8,arg2);
                cVar2 = fcn.00025594(iVar3,arg2_01);
                if (cVar2 != '\0') {
                    uVar10 = 0;
                    do {
                        fcn.0002bb74(1000,arg2_01);
                        uVar5 = *(arg1 + 0x4a) + iVar7;
                        if (*(arg1 + 0x20) < uVar5) {
                            uVar9 = 0;
                        }
                        else {
                            uVar9 = *(uVar5 + *(arg1 + 0x18));
                        }
                        uVar6 = uVar9 >> 5 & 0xf;
                    } while ((uVar6 == 7) && (uVar10 = uVar10 + 1, uVar10 < 500));
                    if ((uVar9 >> 5 & 0xf) != 0) goto code_r0x00022912;
                }
            }
            else if (uVar6 == 8) {
                uVar10 = 0;
                do {
                    fcn.0002bb74(1000,arg2_00);
                    uVar5 = *(arg1 + 0x4a) + iVar7;
                    if (*(arg1 + 0x20) < uVar5) {
                        uVar9 = 0;
                    }
                    else {
                        uVar9 = *(uVar5 + *(arg1 + 0x18));
                    }
                } while (((uVar9 >> 5 & 0xf) == 8) && (uVar10 = uVar10 + 1, uVar10 < 200));
            }
            else {
                if (uVar6 == 10) goto code_r0x00022916;
                uVar8 = uVar8 | 1;
            }
        }
    }
    uVar5 = *(arg1 + 0x4a) + iVar7;
    if (*(arg1 + 0x20) < uVar5) {
        uVar5 = 0;
    }
    else {
        uVar5 = *(uVar5 + *(arg1 + 0x18));
    }
    if ((uVar5 & 1) != 0) {
        uVar9 = uVar8 | 1;
        uVar10 = uVar5 >> 10 & 0xf;
        if ((uVar5 >> 10 & 0xf) != 0) {
            if (uVar10 == 1) {
                uVar9 = uVar8 | 5;
            }
            else if (uVar10 == 2) {
                uVar9 = uVar8 | 3;
            }
            else if (uVar10 != 3) {
                if (uVar10 == 4) {
code_r0x000229c3:
                    uVar9 = uVar8 | 9;
                }
                else {
                    if (uVar10 != 5) {
                        if (uVar10 == 6) goto code_r0x000229c3;
                        if (uVar10 != 7) goto code_r0x000229d0;
                    }
                    uVar9 = uVar8 | 0x81;
                }
            }
        }
code_r0x000229d0:
        uVar8 = uVar9 | 0x10;
        if (*(*0x39420 + 0x6c3) != '\x01') {
            uVar8 = uVar9;
        }
        if ((uVar5 & 2) != 0) {
            uVar8 = uVar8 | 0x20;
        }
    }
    uVar10 = uVar8 | 0x400;
    if ((uVar5 & 0x80000010) == 0) {
        uVar10 = uVar8;
    }
    uVar8 = uVar10 | 0x800;
    if ((uVar5 & 0x200) == 0) {
        uVar8 = uVar10;
    }
    uVar10 = uVar8 | 0x1000;
    if ((uVar5 & 0x40000) == 0) {
        uVar10 = uVar8;
    }
    uVar8 = uVar10 | 0x8000;
    if ((uVar5 & 0x280000) == 0) {
        uVar8 = uVar10;
    }
    if ((uVar5 & 0x20000) != 0) {
        uVar8 = uVar8 | 0x10;
        if (cVar1 != '\x01') {
            return uVar8;
        }
        if (((uVar5 >> 0x14 & 1) != 0) || (uVar10 = *(arg1 + 0x4a) + iVar7, *(arg1 + 0x20) < uVar10 + 4))
        goto code_r0x00022a70;
        *(uVar10 + *(arg1 + 0x18)) = 0x20200;
    }
    if (cVar1 != '\x01') {
        return uVar8;
    }
code_r0x00022a70:
    uVar5 = *(arg1 + 0x4a) + iVar7;
    if (uVar5 <= *(arg1 + 0x20)) {
        uVar4 = *(uVar5 + *(arg1 + 0x18));
    }
    uVar5 = *(arg1 + 0x4a) + iVar7;
    if (uVar5 + 4 <= *(arg1 + 0x20)) {
        *(uVar5 + *(arg1 + 0x18)) = uVar4 & 0xfffffffd;
    }
    return uVar8;
}


/* fcn.000212f4 @ 0x212f4 */

//WARNING: Removing unreachable block (ram,0x000214ca)
//WARNING: Removing unreachable block (ram,0x000214de)
//WARNING: Removing unreachable block (ram,0x000214ee)
//WARNING: Removing unreachable block (ram,0x000214e4)
//WARNING: Removing unreachable block (ram,0x000214fc)

ulong fcn.000212f4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uchar uVar2;
    char cVar3;
    uint32_t uVar4;
    int64_t *arg2_00;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uchar uStackX_20;
    
    iVar1 = *(arg1 + 0x60);
    arg2_00 = fcn.00020fdc(arg1,iVar1 + 0x98);
    if (arg2_00 == NULL) {
        return 0xff;
    }
    iVar5 = fcn.0002bd04(arg2_00,0x10);
    if ((iVar5 < 0) && (iVar5 != -0x7fffffffffffffeb)) {
        return 0xff;
    }
    uVar6 = *(arg1 + 0x4a) + 4;
    if (*(arg1 + 0x20) < uVar6) {
        uVar4 = 0;
    }
    else {
        uVar4 = *(uVar6 + *(arg1 + 0x18));
    }
    if ((uVar4 & 1) != 0) {
        return 0xff;
    }
    *(arg2_00 + 0xc) = *(arg2_00 + 0xc) & 0xffff03ff;
    uVar7 = arg2;
    *(arg2_00 + 0xc) = *(arg2_00 + 0xc) | (uVar7 & 0x3f) << 10;
    uVar4 = *(arg2_00 + 0xc);
    if (uVar7 == 10) {
        uVar2 = *arg3;
code_r0x0002145a:
        *(arg2_00 + 0xf) = uVar2;
    }
    else {
        if (uVar7 == 0xb) {
            *arg2_00 = (*(iVar1 + 0xf0) - *(iVar1 + 0x80)) + *(iVar1 + 0x88);
            *(arg2_00 + 0xf) = *arg3;
            uVar4 = (*(arg3 + 1) << 9 ^ *(arg2_00 + 0xc)) & 0x200;
        }
        else {
            if (uVar7 < 0xc) goto code_r0x0002145d;
            if (uVar7 < 0xe) {
                *arg2_00 = (*(iVar1 + 0xf0) - *(iVar1 + 0x80)) + *(iVar1 + 0x88);
                *(arg2_00 + 0xf) = *arg3;
                *(arg2_00 + 0xc) = *(arg2_00 + 0xc) & 0xfffffdff;
                goto code_r0x0002145d;
            }
            if (uVar7 == 0xe) {
                *(arg2_00 + 0xc) = uVar4 & 0xfffffdff;
            }
            else if (uVar7 != 0xf) {
                if (uVar7 != 0x10) goto code_r0x0002145d;
                *arg2_00 = *arg3;
                *(arg2_00 + 0xc) = (uVar4 ^ *(arg3 + 0xc)) & 0x1f0000 ^ uVar4;
                uVar2 = *(arg3 + 0xf);
                goto code_r0x0002145a;
            }
            *(arg2_00 + 0xf) = *arg3;
            uVar4 = (*(arg3 + 1) << 0x10 ^ *(arg2_00 + 0xc)) & 0x1f0000;
        }
        *(arg2_00 + 0xc) = *(arg2_00 + 0xc) ^ uVar4;
    }
code_r0x0002145d:
    *(arg2_00 + 0xc) = *(arg2_00 + 0xc) ^ (*(iVar1 + 0xb4) ^ *(arg2_00 + 0xc)) & 1;
    if (*(iVar1 + 0x1c) + 4 <= *(arg1 + 0x20)) {
        *(*(iVar1 + 0x1c) + *(arg1 + 0x18)) = 0;
    }
    cVar3 = fcn.00021078(arg1,arg2_00,0x21,0);
    if (cVar3 == -1) {
        return 0xff;
    }
    if (uVar7 == 9) {
        *arg3 = uStackX_20;
    }
    else if ((((uVar7 != 10) && (uVar7 != 0xc)) && (uVar7 != 0xd)) && (uVar7 == 0xe)) {
        fcn.0002bb74(10000,arg2_00);
    }
    return 0;
}


/* fcn.0002560c @ 0x2560c */

uint * fcn.0002560c(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    uint *puVar1;
    uint8_t uVar2;
    
    if (CONCAT44(in_register_0000000c,arg1) != 0) {
        uVar2 = 1;
        if (1 < *(*0x39420 + 0x716)) {
            do {
                puVar1 = uVar2 * 0x1c0 + *(*0x2e7c0 + 0x42);
                if ((((*puVar1 & 3) == 3) && (*(puVar1 + arg2) != 0)) &&
                   (*(puVar1 + arg2) == CONCAT44(in_register_0000000c,arg1))) {
                    return puVar1;
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < *(*0x39420 + 0x716));
        }
    }
    return NULL;
}


/* fcn.00021850 @ 0x21850 */

void fcn.00021850(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint32_t uVar6;
    int64_t *piVar7;
    int64_t *piVar8;
    int64_t iVar9;
    int *piVar10;
    uint8_t in_stack_00000028;
    
    iVar3 = fcn.0002560c(*arg3,400);
    if (iVar3 != 0) {
        iVar5 = *(iVar3 + 0x180);
        piVar10 = *(iVar3 + 0x170);
        iVar4 = fcn.0002bd04(iVar5,0x10);
        if ((-1 < iVar4) || (iVar4 == -0x7fffffffffffffeb)) {
            iVar4 = *(arg1 + 0x88);
            uVar6 = 0;
            iVar9 = *(arg1 + 0x80);
            uVar1 = *(arg1 + 0xc0);
            piVar7 = (*(arg1 + 0xb8) - iVar4) + iVar9;
            if (uVar1 != 0) {
                do {
                    if ((*piVar7 - iVar4) + iVar9 == iVar5) break;
                    uVar6 = uVar6 + 1;
                    piVar7 = piVar7 + 2;
                } while (uVar6 < uVar1);
            }
            uVar6 = 0;
            if (uVar1 != 0) {
                do {
                    piVar8 = piVar7;
                    if ((*(piVar7 + 0xf) == arg4) && ((*(piVar7 + 0xe) & 0x1f) == in_stack_00000028)) {
                        uVar1 = *((*piVar7 - iVar4) + 8 + iVar9);
                        uVar2 = *(piVar7 + 1);
                        iVar5 = fcn.0002bd04(piVar10,4);
                        if ((iVar5 < 0) && (iVar5 != -0x7fffffffffffffeb)) {
                            return;
                        }
                        *piVar10 = (uVar1 & 0x1ffff) - (uVar2 & 0xffffff);
                        piVar10 = piVar10 + 1;
                        if (piVar7 == arg2) break;
                        iVar4 = *(arg1 + 0x88);
                        piVar8 = piVar7 + 2;
                        iVar9 = *(arg1 + 0x80);
                        if (piVar7 == (*(arg1 + 0xc4) - iVar4) + iVar9) {
                            piVar8 = (*(arg1 + 0xb8) - iVar4) + iVar9;
                        }
                    }
                    uVar6 = uVar6 + 1;
                    piVar7 = piVar8;
                } while (uVar6 < *(arg1 + 0xc0));
            }
            iVar5 = fcn.0002bd04(*(iVar3 + 0x178),1);
            if ((-1 < iVar5) || (iVar5 == -0x7fffffffffffffeb)) {
                **(iVar3 + 0x178) = 1;
            }
        }
    }
    return;
}


/* fcn.00021758 @ 0x21758 */

uint64_t fcn.00021758(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    uint64_t uVar5;
    int16_t aiStackX_18 [8];
    int64_t iStack_28;
    uint32_t uStack_1c;
    
    uVar5 = arg3 & 0xff;
    puVar4 = ((uVar5 - 1) * *(arg1 + 0x79) * 0x20 & 0xffffffff) + (arg4 & 0xffU) * *(arg1 + 0x79) + *(arg1 + 0xe8);
    if ((*puVar4 & 7) == 2) {
        aiStackX_18[0] = arg4 * 0x100 + uVar5;
        fcn.000212f4(arg2,0xe,aiStackX_18);
    }
    uVar1 = (*puVar4 & 7) - 3;
    uVar2 = uVar1;
    if (uVar1 < 2) {
        iVar3 = (uVar5 * 0x20 + -0x20 + ((arg4 & 0xffU) - 1U & 0xff)) * 0x20 + *(arg1 + 0xd8);
        iStack_28 = *(iVar3 + 0x1c) + *(iVar3 + 0x14);
        uStack_1c = (arg4 & 0x1f | uVar5 << 8) << 0x10 | uStack_1c & 0xe0ffff;
        uVar2 = fcn.000212f4(arg2,0x10,&iStack_28);
    }
    return uVar2 & 0xffffffffffffff00;
}


/* fcn.00020bd0 @ 0x20bd0 */

ulong fcn.00020bd0(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    uint32_t arg1_00;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t in_RDX;
    uint8_t uVar7;
    int64_t in_R8;
    uint32_t uVar8;
    
    iVar1 = *(arg1 + 0x60);
    iVar3 = fcn.0001ce98(arg1);
    if ((iVar3 < 0) || ((*(arg1 + 0x58) & 1) == 0)) {
        uVar4 = 0xff;
    }
    else {
        uVar7 = 1;
        *(*0x39420 + 0x5ad) = 1;
        if (*(iVar1 + 0xf) != '\0') {
            do {
                in_R8 = CONCAT71(in_R8 >> 8,uVar7);
                in_RDX = CONCAT71(in_RDX >> 8,*arg1) | 0x80;
                fcn.00013f6c(arg1,in_RDX,in_R8);
                uVar7 = uVar7 + 1;
            } while (uVar7 <= *(iVar1 + 0xf));
        }
        iVar3 = *(iVar1 + 0x28);
        if (*(arg1 + 0x20) < ((iVar3 + 0x18) - *(arg1 + 0x18)) + 8) {
            uVar5 = 0;
        }
        else if ((*(iVar1 + 0x18) & 1) == 0) {
            uVar5 = *(iVar3 + 0x18);
        }
        else {
            uVar5 = *(iVar3 + 0x18);
        }
        if ((uVar5 & 8) != 0) {
            iVar3 = *(iVar1 + 0x28);
            if (((iVar3 + 0x18) - *(arg1 + 0x18)) + 8 <= *(arg1 + 0x20)) {
                if ((*(iVar1 + 0x18) & 1) == 0) {
                    *(iVar3 + 0x18) = 2;
                    *(iVar3 + 0x1c) = 0;
                }
                else {
                    *(iVar3 + 0x18) = 2;
                }
            }
            fcn.00021078(arg1,0,0x21,0);
        }
        fcn.00021d68(arg1);
        *(*0x39420 + 0x5ad) = 0;
        arg1_00 = arg1;
        if ((((*(arg1 + 0x58) & 0x10) == 0) || (*(*0x39420 + 0x6cd) != '\0')) && ((*(arg1 + 0x58) & 0x80) == 0)) {
            fcn.0001cfec(arg1_00,0,4);
        }
        uVar5 = (*(iVar1 + 0x30) - *(arg1 + 0x18)) + 0x20;
        if ((uVar5 <= *(arg1 + 0x20)) && (uVar5 + 4 <= *(arg1 + 0x20))) {
            *(uVar5 + *(arg1 + 0x18)) = *(uVar5 + *(arg1 + 0x18)) & 0xfffffffd;
        }
        uVar5 = 0;
        fcn.0001cfec(arg1_00,0,1);
        uVar8 = 0;
        do {
            uVar6 = *(arg1 + 0x4a) + 4;
            if (*(arg1 + 0x20) < uVar6) {
                uVar2 = 0;
            }
            else {
                uVar2 = *(uVar6 + *(arg1 + 0x18));
            }
            if ((uVar2 & 1) != 0) break;
            fcn.0002bb74(100,uVar5);
            uVar8 = uVar8 + 1;
        } while (uVar8 < 0x140);
        if (*(iVar1 + 0x38) != 0) {
            uVar5 = *(iVar1 + 0x38);
            if ((uVar5 <= *(arg1 + 0x20)) && (uVar5 + 4 <= *(arg1 + 0x20))) {
                *(uVar5 + *(arg1 + 0x18)) = *(uVar5 + *(arg1 + 0x18)) & 0xfffeffff;
            }
            uVar5 = *(arg1 + 0x60);
            if (((((*(arg1 + 0x58) & 0x10) == 0) || (*(*0x39420 + 0x6cd) != '\0')) && (*(*0x39420 + 0x6cf) != '\0')) &&
               ((*(arg1 + 0x58) & 0x80) == 0)) {
                uVar6 = *(uVar5 + 0x38) + 4;
                if (*(arg1 + 0x20) < uVar6) {
                    uVar8 = 0;
                }
                else {
                    uVar8 = *(uVar6 + *(arg1 + 0x18));
                }
                uVar2 = *(uVar5 + 0x38) + 4;
                uVar5 = uVar2;
                if (uVar2 + 4 <= *(arg1 + 0x20)) {
                    *(uVar5 + *(arg1 + 0x18)) = uVar8 & 0xfffffffe | 0xe0000000;
                }
            }
        }
        if (*(arg1 + 0x90) != 0) {
            fcn.00014c7c(arg1_00,CONCAT71(uVar5 >> 8,3));
        }
        *(arg1 + 0x58) = *(arg1 + 0x58) & 0xfffffffe;
        fcn.00013180();
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.000205bc @ 0x205bc */

ulong fcn.000205bc(int64_t arg1)

{
    ulong *puVar1;
    int64_t *piVar2;
    ulong uVar3;
    char cVar4;
    uint32_t uVar5;
    uint uVar6;
    uint32_t uVar7;
    int64_t iVar8;
    uint32_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    uint8_t uVar13;
    uint64_t uVar14;
    uint8_t uVar15;
    int64_t in_R8;
    uint8_t uVar16;
    
    iVar12 = *(arg1 + 0x60);
    uVar15 = 0;
    iVar8 = fcn.0001ce98(arg1);
    if (((-1 < iVar8) && (iVar12 != 0)) && (uVar5 = fcn.0002bbf4(arg1,8), (uVar5 & 0xffffff00) == 0xc033000)) {
        uVar5 = fcn.0002bbf4(arg1,0x10);
        uVar14 = uVar5;
        if ((uVar5 & 6) == 4) {
            uVar6 = fcn.0002bbf4(arg1,0x14);
            uVar14 = CONCAT44(uVar6,uVar5);
        }
        uVar14 = uVar14 & 0xffffffffffffff80;
        iVar8 = fcn.0002bd44(uVar14,*(arg1 + 0x20));
        if ((-1 < iVar8) || (iVar8 == -0x7fffffffffffffeb)) {
            *(arg1 + 0x18) = uVar14;
            uVar11 = *(iVar12 + 0x28);
            if ((uVar14 <= uVar11) && (uVar11 + 0x3c <= *(arg1 + 0x20) + uVar14)) {
                uVar5 = 0;
                iVar8 = 0;
                do {
                    uVar14 = *(arg1 + 0x4a) + 4;
                    if (*(arg1 + 0x20) < uVar14) {
                        uVar9 = 0;
                    }
                    else {
                        uVar9 = *(uVar14 + *(arg1 + 0x18));
                    }
                    if ((uVar9 & 0x800) == 0) break;
                    fcn.0002bb74(100,uVar11);
                    uVar5 = uVar5 + 1;
                } while (uVar5 < 1000);
                uVar14 = *(arg1 + 0x4a) + 4;
                if (*(arg1 + 0x20) < uVar14) {
                    uVar5 = 0;
                }
                else {
                    uVar5 = *(uVar14 + *(arg1 + 0x18));
                }
                if ((uVar5 & 0x800) == 0) {
                    uVar14 = *(arg1 + 0x4a) + 4;
                    if (*(arg1 + 0x20) < uVar14) {
                        uVar5 = 0;
                    }
                    else {
                        uVar5 = *(uVar14 + *(arg1 + 0x18));
                    }
                    uVar16 = 1;
                    uVar9 = arg1;
                    if ((uVar5 & 1) == 0) {
                        iVar10 = 0;
                        fcn.0001cfec(uVar9,0,1);
                        uVar5 = 0;
                        do {
                            uVar14 = *(arg1 + 0x4a) + 4;
                            if (*(arg1 + 0x20) < uVar14) {
                                uVar7 = 0;
                            }
                            else {
                                uVar7 = *(uVar14 + *(arg1 + 0x18));
                            }
                            if ((uVar7 & 1) != 0) break;
                            fcn.0002bb74(100,iVar10);
                            uVar5 = uVar5 + 1;
                        } while (uVar5 < 0x140);
                        uVar14 = *(arg1 + 0x4a) + 4;
                        if (*(arg1 + 0x20) < uVar14) {
                            uVar5 = 0;
                        }
                        else {
                            uVar5 = *(uVar14 + *(arg1 + 0x18));
                        }
                        in_R8 = iVar8;
                        if ((uVar5 & 1) == 0) {
                            return 0xff;
                        }
                    }
                    if (((*(*0x39420 + 0x6c9) & 0x10000000) != 0) && (uVar13 = uVar16, *(iVar12 + 0xf) != '\0')) {
                        do {
                            uVar5 = (uVar13 + 0x3f) * 0x10 + *(arg1 + 0x4a);
                            if (*(arg1 + 0x20) < uVar5) {
                                uVar5 = 0;
                            }
                            else {
                                uVar5 = *(uVar5 + *(arg1 + 0x18));
                            }
                            if ((uVar5 & 0x1e0) == 0x140) {
                                in_R8 = CONCAT71(in_R8 >> 8,uVar13);
                                fcn.00022b94(arg1,iVar12,in_R8,0);
                            }
                            uVar13 = uVar13 + 1;
                        } while (uVar13 <= *(iVar12 + 0xf));
                    }
                    if ((*(arg1 + 0x58) >> 8 & 1) == 0) {
                        cVar4 = fcn.00022fc0(arg1);
                        if (cVar4 == -1) {
                            return 0xff;
                        }
                    }
                    else {
                        *(arg1 + 0x58) = *(arg1 + 0x58) & 0xfffffeff;
                    }
                    if (((*(iVar12 + 0xc) >> 8 & 0x7ff) + 1) * 0x20 + *(iVar12 + 0x20) <= *(arg1 + 0x20)) {
                        *(iVar12 + 0x30) = *(iVar12 + 0x20) + *(arg1 + 0x18);
                        if (*(arg1 + 0x4a) + 0x3c <= *(arg1 + 0x20)) {
                            *(*(arg1 + 0x4a) + 0x38 + *(arg1 + 0x18)) = *(iVar12 + 0xc) & 0xff;
                        }
                        iVar8 = *(iVar12 + 0x28);
                        uVar3 = *(iVar12 + 0x88);
                        if (((iVar8 + 0x30) - *(arg1 + 0x18)) + 8 <= *(arg1 + 0x20)) {
                            if ((*(iVar12 + 0x18) & 1) == 0) {
                                *(iVar8 + 0x30) = uVar3;
                                *(iVar8 + 0x34) = uVar3 >> 0x20;
                            }
                            else {
                                *(iVar8 + 0x30) = uVar3;
                            }
                        }
                        if ((*(iVar12 + 0x18) & 1) != 0) {
                            if (*(arg1 + 0x20) < ((*(iVar12 + 0x28) + 0x30) - *(arg1 + 0x18)) + 8) {
                                iVar8 = 0;
                            }
                            else {
                                iVar8 = *(*(iVar12 + 0x28) + 0x30);
                            }
                            iVar10 = *(iVar12 + 0x88);
                            if (iVar8 != iVar10) {
                                *(iVar12 + 0x18) = *(iVar12 + 0x18) & 0xfffffffe;
                                iVar8 = *(iVar12 + 0x28);
                                if (((iVar8 + 0x30) - *(arg1 + 0x18)) + 8 <= *(arg1 + 0x20)) {
                                    if ((*(iVar12 + 0x18) & 1) == 0) {
                                        *(iVar8 + 0x30) = iVar10;
                                        *(iVar8 + 0x34) = iVar10 >> 0x20;
                                    }
                                    else {
                                        *(iVar8 + 0x30) = iVar10;
                                    }
                                }
                            }
                        }
                        fcn.000254d0(iVar12,iVar12 + 0x98,*(iVar12 + 0x80) + 0x2000,0x40);
                        iVar8 = *(iVar12 + 0x28);
                        iVar10 = *(iVar12 + 0x98) + 1;
                        if (((iVar8 + 0x18) - *(arg1 + 0x18)) + 8 <= *(arg1 + 0x20)) {
                            if ((*(iVar12 + 0x18) & 1) == 0) {
                                *(iVar8 + 0x18) = iVar10;
                            }
                            else {
                                *(iVar8 + 0x18) = iVar10;
                            }
                        }
                        fcn.000254d0(iVar12,iVar12 + 0xb8,*(iVar12 + 0x80) + 0x2400,0x400);
                        iVar8 = *(iVar12 + 0x80);
                        *(iVar8 + 0x1200) = *(iVar12 + 0xb8);
                        *(iVar8 + 0x1208) = 0x400;
                        iVar8 = *(iVar12 + 0x30);
                        uVar5 = (iVar8 - *(arg1 + 0x18)) + 0x28;
                        if (uVar5 + 4 <= *(arg1 + 0x20)) {
                            *(uVar5 + *(arg1 + 0x18)) = 1;
                        }
                        uVar3 = *(iVar12 + 0xcc);
                        puVar1 = iVar8 + 0x38;
                        if ((puVar1 - *(arg1 + 0x18)) + 8 <= *(arg1 + 0x20)) {
                            if ((*(iVar12 + 0x18) & 1) == 0) {
                                *puVar1 = uVar3;
                                *(iVar8 + 0x3c) = uVar3 >> 0x20;
                            }
                            else {
                                *puVar1 = uVar3;
                            }
                        }
                        piVar2 = iVar8 + 0x30;
                        iVar8 = *(iVar12 + 0x88) + 0x1200;
                        if ((piVar2 - *(arg1 + 0x18)) + 8 <= *(arg1 + 0x20)) {
                            if ((*(iVar12 + 0x18) & 1) == 0) {
                                *piVar2 = iVar8;
                            }
                            else {
                                *piVar2 = iVar8;
                            }
                        }
                        uVar5 = (*(iVar12 + 0x30) - *(arg1 + 0x18)) + 0x24;
                        if (uVar5 + 4 <= *(arg1 + 0x20)) {
                            *(uVar5 + *(arg1 + 0x18)) = 4000;
                        }
                        if ((((*(arg1 + 0x58) & 0x10) == 0) || (*(*0x39420 + 0x6cd) != 0)) &&
                           ((*(arg1 + 0x58) & 0x80) == 0)) {
                            fcn.0001cfb0(uVar9,0,4);
                        }
                        uVar14 = (*(iVar12 + 0x30) - *(arg1 + 0x18)) + 0x20;
                        if ((uVar14 <= *(arg1 + 0x20)) && (uVar14 + 4 <= *(arg1 + 0x20))) {
                            *(uVar14 + *(arg1 + 0x18)) = *(uVar14 + *(arg1 + 0x18)) | 2;
                        }
                        if (((*(iVar12 + 0x18) & 8) != 0) && (*(iVar12 + 0xf) != '\0')) {
                            iVar8 = 0x200;
                            uVar13 = uVar16;
                            do {
                                uVar5 = (uVar13 + 0x3f) * 0x10;
                                uVar11 = uVar5;
                                uVar14 = *(arg1 + 0x4a) + uVar5;
                                if (*(arg1 + 0x20) < uVar14) {
                                    uVar5 = 0;
                                }
                                else {
                                    uVar5 = *(uVar14 + *(arg1 + 0x18));
                                }
                                if ((iVar8 & uVar5) == 0) {
                                    fcn.0001cfb0(uVar9,uVar11,iVar8);
                                    uVar15 = uVar16;
                                }
                                uVar13 = uVar13 + 1;
                            } while (uVar13 <= *(iVar12 + 0xf));
                            if (uVar15 != 0) {
                                fcn.0002bb74(20000,uVar11);
                            }
                        }
                        if (*(iVar12 + 0x38) != 0) {
                            uVar14 = *(iVar12 + 0x38);
                            if ((uVar14 <= *(arg1 + 0x20)) && (uVar14 + 4 <= *(arg1 + 0x20))) {
                                *(uVar14 + *(arg1 + 0x18)) = *(uVar14 + *(arg1 + 0x18)) | 0x10000;
                            }
                            if (((**0x39420 & 2) == 0) &&
                               (((((*(arg1 + 0x58) & 0x10) == 0 || (*(*0x39420 + 0x6cd) != 0)) &&
                                 ((*(arg1 + 0x58) & 0x80) == 0)) &&
                                ((uVar14 = *(*(arg1 + 0x60) + 0x38) + 4, uVar14 <= *(arg1 + 0x20) &&
                                 (uVar14 + 4 <= *(arg1 + 0x20))))))) {
                                *(uVar14 + *(arg1 + 0x18)) = *(uVar14 + *(arg1 + 0x18)) | 0xe0002001;
                            }
                        }
                        iVar12 = 0;
                        fcn.0001cfb0(uVar9,0,1);
                        uVar5 = 0;
                        do {
                            uVar14 = *(arg1 + 0x4a) + 4;
                            if (*(arg1 + 0x20) < uVar14) {
                                uVar7 = 0;
                            }
                            else {
                                uVar7 = *(uVar14 + *(arg1 + 0x18));
                            }
                            if ((uVar7 & 1) == 0) break;
                            fcn.0002bb74(100,iVar12);
                            uVar5 = uVar5 + 1;
                        } while (uVar5 < 100);
                        if ((*(*0x39420 + 0x6c9) & 0x10000) != 0) {
                            fcn.0001cfb0(uVar9,0,8);
                        }
                        *(arg1 + 0x58) = *(arg1 + 0x58) | 1;
                        if ((**0x39420 & 0x80) == 0) {
                            **0x39420 = **0x39420 | 0x80;
                        }
                        return 0;
                    }
                }
            }
        }
    }
    return 0xff;
}


/* fcn.00020e40 @ 0x20e40 */

ulong fcn.00020e40(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint64_t in_RDX;
    uint8_t uVar5;
    char cVar6;
    uint64_t uVar7;
    unkbyte7 in_R8;
    int64_t iVar8;
    
    if (*(*0x39420 + 0x5ad) == '\x01') {
code_r0x00020fc0:
        uVar3 = 0;
    }
    else {
        iVar8 = *0x39420;
        iVar2 = fcn.0001ce98(arg1);
        if ((-1 < iVar2) && ((*(arg1 + 0x58) & 1) != 0)) {
            uVar4 = *(arg1 + 0x4a) + 4;
            if (*(arg1 + 0x20) < uVar4) {
                uVar1 = 0;
            }
            else {
                uVar1 = *(uVar4 + *(arg1 + 0x18));
                iVar8 = *0x39420;
            }
            if ((uVar1 & 1) == 0) {
                uVar4 = *(arg1 + 0x60);
                *(iVar8 + 0x6c3) = 1;
                *(*0x39420 + 0x5ad) = 1;
                if ((*(uVar4 + 0x45) != '\0') && (uVar5 = 0, *(uVar4 + 0x45) != '\0')) {
                    do {
                        in_RDX = CONCAT71(in_RDX >> 8,*arg1) | 0x80;
                        fcn.00013fac(arg1,in_RDX,CONCAT71(in_R8,*(uVar4 + 0x44) + uVar5));
                        uVar5 = uVar5 + 1;
                    } while (uVar5 < *(uVar4 + 0x45));
                }
                if ((*(uVar4 + 0x51) != '\0') && (uVar5 = 0, *(uVar4 + 0x51) != '\0')) {
                    do {
                        cVar6 = *(uVar4 + 0x50) + uVar5;
                        if ((*(uVar4 + 100) == 0x1106) && (*(uVar4 + 0x66) == 0x3432)) {
                            iVar8 = CONCAT71(iVar8 >> 8,1);
                            in_RDX = uVar4;
                            fcn.00022b94(arg1,uVar4,CONCAT71(in_R8,cVar6),iVar8);
                        }
                        in_RDX = CONCAT71(in_RDX >> 8,*arg1) | 0x80;
                        fcn.00013fac(arg1,in_RDX,CONCAT71(in_R8,cVar6));
                        uVar5 = uVar5 + 1;
                    } while (uVar5 < *(uVar4 + 0x51));
                }
                if ((*(uVar4 + 0x200) != '\0') && (uVar7 = 0, *(uVar4 + 0x200) != '\0')) {
                    do {
                        iVar8 = *(uVar4 + 0x58);
                        cVar6 = *(iVar8 + 9 + uVar7 * 0xc);
                        if ((cVar6 != '\0') && (uVar5 = 0, cVar6 != '\0')) {
                            do {
                                in_RDX = CONCAT71(in_RDX >> 8,*arg1) | 0x80;
                                fcn.00013fac(arg1,in_RDX,CONCAT71(in_R8,*(iVar8 + 8 + uVar7 * 0xc) + uVar5));
                                uVar5 = uVar5 + 1;
                            } while (uVar5 < *(iVar8 + 9 + uVar7 * 0xc));
                        }
                        uVar5 = uVar7 + 1;
                        uVar7 = uVar5;
                    } while (uVar5 < *(uVar4 + 0x200));
                }
                *(*0x39420 + 0x6c3) = 0;
                *(*0x39420 + 0x5ad) = 0;
                fcn.00021d68(arg1);
                goto code_r0x00020fc0;
            }
        }
        uVar3 = 0xff;
    }
    return uVar3;
}


/* fcn.00021578 @ 0x21578 */

uint64_t fcn.00021578(uint32_t arg1,int64_t arg2)

{
    unkbyte3 Var1;
    bool bVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint in_register_0000000c;
    uchar *arg1_00;
    uint8_t uVar6;
    uint8_t uVar7;
    int64_t in_R8;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar4 = *0x39420;
    if (*(*0x39420 + 0x5ad) == '\x01') goto code_r0x000216ba;
    *(*0x39420 + 0x5ad) = 1;
    if (*(arg1_00 + 0x20) < arg1_00[0x4a] + 4) {
        uVar4 = 0;
    }
    else {
        uVar4 = *(arg1_00[0x4a] + 4 + *(arg1_00 + 0x18));
    }
    if ((uVar4 & 1) != 0) {
        return CONCAT71(uVar4 >> 8,0xff);
    }
    fcn.0002bb74(100000,arg2);
    do {
        uVar6 = 0;
        uVar7 = 1;
        if (*(arg2 + 0xf) == '\0') break;
        do {
            uVar5 = (uVar7 + 0x3f) * 0x10 + arg1_00[0x4a];
            if (*(arg1_00 + 0x20) < uVar5) {
                uVar3 = 0;
            }
            else {
                uVar3 = *(uVar5 + *(arg1_00 + 0x18));
            }
            Var1 = uVar5 >> 8;
            if ((uVar3 >> 0x11 & 1) == 0) {
                in_R8 = 0;
                fcn.0002270c(arg1_00,CONCAT31(Var1,uVar7),0);
            }
            else {
                in_R8 = CONCAT71(in_R8 >> 8,uVar7);
                fcn.00013fac(arg1_00,CONCAT31(Var1,*arg1_00) | 0x80,in_R8);
                uVar6 = 1;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 <= *(arg2 + 0xf));
    } while (uVar6 != 0);
    bVar2 = false;
    uVar5 = 1;
    if (*(arg2 + 0xf) == '\0') {
code_r0x00021690:
        if (arg1_00[0x4a] + 8 <= *(arg1_00 + 0x20)) {
            *(arg1_00[0x4a] + 4 + *(arg1_00 + 0x18)) = 0x10;
        }
    }
    else {
        do {
            uVar3 = (uVar5 + 0x3f) * 0x10 + arg1_00[0x4a];
            if (*(arg1_00 + 0x20) < uVar3) {
                uVar3 = 0;
            }
            else {
                uVar3 = *(uVar3 + *(arg1_00 + 0x18));
            }
            if ((uVar3 >> 0x11 & 1) != 0) {
                bVar2 = true;
            }
            uVar7 = uVar5 + 1;
            uVar5 = uVar7;
        } while (uVar7 <= *(arg2 + 0xf));
        if (!bVar2) goto code_r0x00021690;
    }
    uVar4 = *0x39420;
    *(*0x39420 + 0x5ad) = 0;
code_r0x000216ba:
    return uVar4 & 0xffffffffffffff00;
}


/* fcn.00021ca0 @ 0x21ca0 */

void fcn.00021ca0(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t *puVar5;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (((*(iVar3 + 100) == 0x1b73) && ((*(iVar3 + 0x66) == 0x1000 || (*(iVar3 + 0x66) == 0x1009)))) ||
       (*(iVar3 + 100) == -0x7f7a)) {
        uVar2 = (*(arg3 + 3) + 0x3f) * 0x10 + *(arg2 + 0x4a);
        if (*(arg2 + 0x20) < uVar2) {
            uVar2 = 0;
        }
        else {
            uVar2 = *(uVar2 + *(arg2 + 0x18));
        }
        if ((uVar2 & 1) == 0) {
            uVar4 = 1;
            iVar3 = *0x39420;
            if (1 < *(*0x39420 + 0x716)) {
                do {
                    puVar5 = uVar4 * 0x1c0 + *(*0x2e7c0 + 0x42);
                    uVar2 = *puVar5;
                    if (((((uVar2 & 3) == 3) && (puVar5[3] == (*arg2 | 0x80))) && (*(puVar5 + 0xd) == *(arg3 + 3))) &&
                       ((uVar2 & 0x20) == 0)) {
                        *puVar5 = uVar2 | 0x80;
                        iVar3 = *0x39420;
                    }
                    uVar1 = uVar4 + 1;
                    uVar4 = uVar1;
                } while (uVar1 < *(iVar3 + 0x716));
            }
        }
    }
    return;
}


/* fcn.00021a00 @ 0x21a00 */

void fcn.00021a00(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    int iVar5;
    code *pcVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    int64_t iVar9;
    int64_t arg2_00;
    int64_t *piVar10;
    uint64_t uVar11;
    int64_t iVar12;
    ulong in_R9;
    ulong uVar13;
    uint8_t uVar14;
    ulong *puVar15;
    
    if (*(arg3 + 0xb) - 0xbU < 2) {
        return;
    }
    uVar7 = 0x20;
    uVar1 = *(arg3 + 0xf);
    iVar5 = *(arg1 + 0x1c);
    uVar2 = *(arg3 + 0xe);
    puVar15 = (*(arg1 + 0x80) - *(arg1 + 0x88)) + *arg3;
    uVar14 = uVar2 & 0x1f;
    arg2_00 = (uVar1 * 0x20 + -0x20 + (uVar14 - 1)) * 0x20 + *(arg1 + 0xd8);
    if ((*(puVar15 + 0xc) & 0xfc00) == 0x1400) {
        fcn.00021850(arg1,arg3,puVar15,CONCAT71(in_R9 >> 8,uVar1));
        return;
    }
    iVar12 = arg3;
    iVar9 = fcn.0002560c(*puVar15,0x18);
    uVar8 = 0;
    if (iVar9 == 0) {
        return;
    }
    uVar3 = *(arg3 + 0xb);
    if (uVar3 == 1) {
code_r0x00021b39:
        if (((*(iVar9 + 0x15) - 1U < 0x32) && (*(iVar9 + 0x20) != 0)) &&
           (pcVar6 = *((*(iVar9 + 0x15) - 1) * 8 + 0x38de0), pcVar6 != NULL)) {
            if (*(*0x39420 + 0x6c4) == '\0') {
                piVar10 = arg1 + 0x100;
                do {
                    if (*piVar10 == 0) break;
                    uVar8 = uVar8 + 1;
                    piVar10 = piVar10 + 2;
                } while (uVar8 < 0x10);
                if (uVar8 != 0x10) {
                    *(arg1 + (uVar8 + 0x10) * 0x10) = puVar15;
                    *(arg1 + 0x108 + uVar8 * 0x10) = *(iVar9 + 0x132) - *(arg3 + 8);
                    return;
                }
            }
            (*pcVar6)(arg2,iVar9,0,*(iVar9 + 0x20),*(iVar9 + 0x132) - *(arg3 + 8));
        }
    }
    else {
        if (uVar3 < 3) goto code_r0x00021bdf;
        if ((4 < uVar3) && (uVar3 != 6)) {
            if (uVar3 == 0xd) goto code_r0x00021b39;
            if (uVar3 != 0x24) goto code_r0x00021bdf;
        }
        iVar12 = CONCAT71(iVar12 >> 8,*(iVar9 + 0xd));
        uVar13 = 0;
        uVar7 = fcn.00013218(arg2,*(iVar9 + 0xc),iVar12,0);
        if (uVar7 == 0xff) {
            uVar7 = 0;
        }
        if ((uVar7 & 0x20) == 0) {
            return;
        }
        fcn.00021758(arg1,arg2,CONCAT71(iVar12 >> 8,uVar1),CONCAT71(uVar13 >> 8,uVar2) & 0xffffffffffffff1f);
    }
code_r0x00021bdf:
    uVar8 = 0;
    if (((uVar7 & 0x20) != 0) && (*(iVar9 + 0x20) != 0)) {
        uVar11 = *(arg2 + 0x4a) + 4;
        if (uVar11 <= *(arg2 + 0x20)) {
            uVar8 = *(uVar11 + *(arg2 + 0x18));
        }
        if (((uVar8 & 1) == 0) && (puVar15 = fcn.00020fdc(arg2,arg2_00), puVar15 != NULL)) {
            *(puVar15 + 0xc) = *(puVar15 + 0xc) & 0xffff07ff;
            *(puVar15 + 0xc) = *(puVar15 + 0xc) | 0x400;
            uVar7 = *(puVar15 + 0xc) | 0x24;
            *puVar15 = *(iVar9 + 0x18);
            uVar4 = *(iVar9 + 0x132);
            *(puVar15 + 0xc) = uVar7;
            *(puVar15 + 1) = uVar4 | *(puVar15 + 1) & 0xfffe0000;
            uVar11 = iVar5 + uVar1 * 4;
            *(puVar15 + 0xc) = (*(arg2_00 + 0x1c) ^ uVar7) & 1 ^ uVar7;
            if (uVar11 + 4 <= *(arg2 + 0x20)) {
                *(uVar11 + *(arg2 + 0x18)) = uVar14;
            }
        }
    }
    return;
}


/* fcn.00025594 @ 0x25594 */

uint64_t fcn.00025594(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint8_t uVar2;
    ulong in_RAX;
    uint64_t uVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    
    uVar1 = *(arg1 + 0x51);
    uVar3 = CONCAT71(in_RAX >> 8,uVar1);
    if (uVar1 != 0) {
        uVar5 = *(arg1 + 0x50) & 0xff;
        uVar6 = arg2 & 0xff;
        if ((uVar5 <= uVar6) && (uVar5 = uVar1 + uVar5, uVar3 = uVar5, uVar6 < uVar5)) {
code_r0x000255ba:
            return CONCAT71(uVar3 >> 8,1);
        }
    }
    uVar1 = *(arg1 + 0x200);
    if ((uVar1 != 0) && (uVar4 = 0, uVar1 != 0)) {
        do {
            uVar2 = *(*(arg1 + 0x58) + 9 + uVar4 * 0xc);
            uVar3 = 0;
            if (uVar2 != 0) {
                uVar5 = *(*(arg1 + 0x58) + 8 + uVar4 * 0xc) & 0xff;
                uVar6 = arg2 & 0xff;
                if ((uVar5 <= uVar6) && (uVar5 = uVar2 + uVar5, uVar3 = uVar5, uVar6 < uVar5)) goto code_r0x000255ba;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
    }
    return uVar3 & 0xffffffffffffff00;
}


/* fcn.00025154 @ 0x25154 */

char fcn.00025154(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    int64_t arg1_01;
    uint32_t *puVar1;
    uchar auVar2 [16];
    uchar auVar3 [16];
    uchar uVar4;
    char cVar5;
    int64_t iVar6;
    uint8_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint32_t *puVar12;
    uint8_t uVar13;
    uint64_t uVar14;
    int64_t iVar15;
    uint64_t uVar16;
    uint16_t auStackX_8 [4];
    uint8_t auStackX_18 [16];
    
    uVar13 = arg3;
    arg1_00 = *(arg1 + 0x60);
    uVar16 = arg3 & 0xff;
    uVar14 = *(arg1_00 + 0x79);
    arg1_01 = *(arg1_00 + 0xf0);
    iVar15 = ((uVar16 - 1) * uVar14 * 0x20 & 0xffffffff) + *(arg1_00 + 0xe8);
    if ((*(iVar15 + 0xc) & 0xf8000000) < 0x10000000) {
        uVar8 = *(arg1_00 + 0x79) * 0x21;
        uVar10 = uVar8;
        auStackX_18[0] = uVar13;
        if (uVar8 != 0) {
            fcn.00011040(arg1_01,uVar10);
        }
        *(arg1_01 + 4) = 3;
        puVar12 = *(arg1_00 + 0x79) + arg1_01;
        *puVar12 = *puVar12 & 0x7f00000;
        *puVar12 = *puVar12 | 0x8000000;
        uVar8 = *puVar12;
        uVar4 = fcn.00024c78(arg2,uVar10,uVar14);
        *(puVar12 + 6) = uVar4;
        if (*(arg2 + 0xe) == 0) {
            uVar8 = uVar8 & 0xff3fffff | 0x300000;
            uVar10 = 0;
code_r0x00025246:
            *puVar12 = uVar8;
        }
        else {
            uVar9 = *(arg2 + 0xe);
            if (uVar9 == 1) {
                uVar8 = uVar8 & 0xff2fffff | 0x200000;
                uVar10 = 0;
                goto code_r0x00025246;
            }
            if (uVar9 == 2) {
                uVar8 = uVar8 & 0xff1fffff | 0x100000;
                uVar10 = 0;
                goto code_r0x00025246;
            }
            uVar9 = uVar9 - 4;
            uVar10 = uVar9;
            if (uVar9 == 0) {
                uVar8 = uVar8 & 0xff4fffff | 0x400000;
                goto code_r0x00025246;
            }
            if (uVar9 == 0x3c) {
                uVar8 = uVar8 & 0xff5fffff | 0x500000;
                goto code_r0x00025246;
            }
        }
        uVar11 = 0;
        iVar6 = fcn.0001467c(CONCAT71(uVar10 >> 8,0x10),0,CONCAT71(uVar14 >> 8,*(arg2 + 0xc)),0);
        if (iVar6 == 0) {
code_r0x00025327:
            uVar8 = *(*(arg1_00 + 0x79) + iVar15) & 7;
            if (uVar8 == 0) {
                iVar6 = fcn.000246d0(arg1_00,CONCAT71(uVar11 >> 8,uVar13),0);
            }
            else {
                if ((uVar8 != 1) && (uVar8 != 3)) goto code_r0x000251ad;
                iVar6 = (uVar16 * 0x20 + -0x20) * 0x20 + *(arg1_00 + 0xd8);
            }
            if (iVar6 == 0) goto code_r0x000251ad;
            uVar10 = *(arg1_00 + 0x79);
            puVar1 = arg1_01 + 4 + uVar10 * 2;
            *puVar1 = *puVar1 & 0xffffffe7;
            puVar1 = arg1_01 + 4 + uVar10 * 2;
            *puVar1 = *puVar1 | 0x20;
            *(arg1_01 + 6 + uVar10 * 2) = *(arg2 + 0x10);
            uVar13 = *(iVar6 + 0x1c);
            uVar14 = *(iVar6 + 0x14);
            puVar1 = arg1_01 + 4 + uVar10 * 2;
            *puVar1 = *puVar1 | 6;
            *(arg1_01 + 8 + uVar10 * 2) = uVar13 | uVar14;
            *(arg1_01 + 0x10 + uVar10 * 2) = 8;
            if ((((*puVar12 & 0xf00000) - 0x400000 & 0xffefffff) == 0) || (0x7ffffff < *(iVar15 + 0xc))) {
                auStackX_8[0] = 0;
            }
            else {
                auStackX_8[0] = 0x100;
            }
            auStackX_8[0] = uVar16 | auStackX_8[0];
            cVar5 = fcn.000212f4(arg1,0xb,auStackX_8);
            if (cVar5 != '\0') {
                fcn.000212f4(arg1,10,auStackX_18);
                *(*(arg1_00 + 0x80) + 8 + (auStackX_18[0] - 1) * 8) = 0;
                return cVar5;
            }
        }
        else {
            puVar1 = *(iVar6 + 0xf8);
            if ((*(arg1_00 + 0xe8) <= puVar1) &&
               (puVar1 <= *(arg1_00 + 0xc) * *(arg1_00 + 0x79) * 0x20 + *(arg1_00 + 0xe8))) {
                uVar7 = *(arg2 + 0xd);
                if (0xf < *(arg2 + 0xd)) {
                    uVar7 = 0xf;
                }
                uVar8 = ((uVar7 << ((*(iVar6 + 0x100) & 7) << 2) | *puVar1) ^ *puVar12) & 0xfffff;
                uVar11 = uVar8;
                *puVar12 = *puVar12 ^ uVar8;
                if (((*puVar12 & 0xf00000) - 0x100000 & 0xffefffff) == 0) {
                    if ((*puVar1 & 0xf00000) == 0x300000) {
                        auVar2 = ZEXT116(*(arg1_00 + 0x79)) << 5;
                        auVar3._8_8_ = 0;
                        auVar3._0_8_ = *(iVar6 + 0xf8) - *(arg1_00 + 0xe8);
                        uVar11 = SUB168(auVar3 % auVar2,0);
                        *(puVar12 + 2) = SUB161(auVar3 / auVar2,0) + '\x01';
                        uVar4 = *(arg2 + 0xd);
                    }
                    else {
                        *(puVar12 + 2) = puVar1[2];
                        uVar4 = puVar1[2] >> 8;
                    }
                    *(puVar12 + 9) = uVar4;
                    *puVar12 = *puVar12 ^ (*puVar1 ^ *puVar12) & 0x2000000;
                }
                goto code_r0x00025327;
            }
        }
        cVar5 = '\0';
    }
    else {
code_r0x000251ad:
        cVar5 = -1;
    }
    return cVar5;
}


/* fcn.00025438 @ 0x25438 */

ulong fcn.00025438(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint64_t uVar2;
    uint64_t extraout_RAX;
    uint in_register_00000014;
    uchar *puVar3;
    uint32_t uVar4;
    
    uVar4 = *(arg1 + 0x1c) + arg3 * 4;
    uVar2 = uVar4 + 4;
    if (uVar2 <= *(CONCAT44(in_register_00000014,arg2) + 0x20)) {
        uVar2 = *(CONCAT44(in_register_00000014,arg2) + 0x18);
        *(uVar4 + uVar2) = arg4 & 0xff;
    }
    uVar4 = 0;
    if (arg3 == 0) {
        uVar1 = CONCAT71(uVar2 >> 8,0xff);
    }
    else {
        uVar2 = (arg4 & 0xffU) * *(arg1 + 0x79);
        puVar3 = (((arg3 & 0xffU) - 1) * *(arg1 + 0x79) * 0x20 & 0xffffffff) + uVar2 + *(arg1 + 0xe8);
        do {
            uVar2 = CONCAT71(uVar2 >> 8,*puVar3) & 0xffffffffffffff07;
            if (uVar2 == '\x01') break;
            fcn.0002bb74(1,CONCAT44(in_register_00000014,arg2));
            uVar4 = uVar4 + 1;
            uVar2 = extraout_RAX;
        } while (uVar4 < 10000);
        uVar2 = CONCAT71(uVar2 >> 8,*puVar3) & 0xffffffffffffff07;
        uVar1 = CONCAT71(uVar2 >> 8,-(uVar2 != '\x01'));
    }
    return uVar1;
}


/* fcn.00024fcc @ 0x24fcc */

uchar fcn.00024fcc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uchar auVar2 [16];
    uchar uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint8_t uVar7;
    uint32_t *puVar8;
    uint8_t uVar9;
    int16_t aiStackX_20 [4];
    int64_t iStack_28;
    uint32_t uStack_1c;
    
    uVar7 = arg3;
    uVar5 = 0;
    iVar4 = fcn.0001ce98(arg1);
    uVar3 = uVar5;
    if ((-1 < iVar4) && ((*(arg1 + 0x58) & 1) != 0)) {
        uVar6 = *(arg1 + 0x4a) + 4;
        if (*(arg1 + 0x20) < uVar6) {
            uVar5 = uVar5 & 0xffffffff;
        }
        else {
            uVar5 = *(uVar6 + *(arg1 + 0x18));
        }
        if ((uVar5 & 1) == 0) {
            iVar4 = *(arg1 + 0x60);
            uVar5 = *(arg2 + 0xf8);
            uVar6 = *(iVar4 + 0xe8);
            if (uVar6 <= uVar5) {
                uVar1 = *(iVar4 + 0x79);
                if (uVar5 <= *(iVar4 + 0xc) * uVar1 * 0x20 + uVar6) {
                    auVar2._8_8_ = 0;
                    auVar2._0_8_ = uVar5 - uVar6;
                    uVar9 = SUB161(auVar2 / (ZEXT116(uVar1) << 5),0) + 1;
                    if (uVar7 == 0) {
                        uVar7 = 1;
                    }
                    else {
                        uVar7 = (uVar7 & 0xf) * '\x02' - (uVar7 >> 7);
                    }
                    puVar8 = uVar7 * uVar1 + uVar5;
                    if ((*puVar8 & 7) == 1) {
                        aiStackX_20[0] = uVar7 * 0x100 + uVar9;
                        uVar3 = fcn.000212f4(arg1,0xf,aiStackX_20);
                    }
                    if ((*puVar8 & 7) - 3 < 2) {
                        iVar4 = (uVar9 * 0x20 + -0x20 + (uVar7 - 1)) * 0x20 + *(iVar4 + 0xd8);
                        iStack_28 = *(iVar4 + 0x1c) + *(iVar4 + 0x14);
                        uStack_1c = CONCAT11(uVar9,uVar7) << 0x10 | uStack_1c & 0xe0ffff;
                        uVar3 = fcn.000212f4(arg1,0x10,&iStack_28);
                    }
                    return uVar3;
                }
            }
        }
    }
    return 0xff;
}


/* fcn.000230c0 @ 0x230c0 */

void fcn.000230c0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint16_t uVar3;
    uint32_t *puVar4;
    ushort auStackX_10 [4];
    
    iVar2 = *(arg1 + 0x60);
    uVar1 = *(iVar2 + 0x79);
    puVar4 = (((arg2 & 0xffU) - 1) * uVar1 * 0x20 & 0xffffffff) + *(iVar2 + 0xe8);
    if (((*puVar4 & 0xf00000) == 0x100000) && (uVar3 = arg3 & 0xff, *(uVar1 + 6 + puVar4) != uVar3)) {
        if (uVar1 * 0x21 != 0) {
            fcn.00011040(*(iVar2 + 0xf0),uVar1 * 0x21);
        }
        *(*(iVar2 + 0xf0) + 4) = 2;
        *(*(iVar2 + 0xf0) + 6 + *(iVar2 + 0x79) * 2) = uVar3;
        auStackX_10[0] = arg2 & 0xffU;
        fcn.000212f4(arg1,0xd,auStackX_10);
    }
    return;
}


/* fcn.000216d8 @ 0x216d8 */

uchar fcn.000216d8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar uVar1;
    int16_t aiStackX_18 [8];
    
    uVar1 = 0;
    if ((*((((arg3 & 0xffU) - 1) * *(arg1 + 0x79) * 0x20 & 0xffffffff) + (arg4 & 0xffU) * *(arg1 + 0x79) +
          *(arg1 + 0xe8)) & 7) == 2) {
        aiStackX_18[0] = arg4 * 0x100 + (arg3 & 0xff);
        uVar1 = fcn.000212f4(arg2,0xe,aiStackX_18);
    }
    return uVar1;
}


/* fcn.00023aac @ 0x23aac */

void fcn.00023aac(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint in_register_0000000c;
    uint32_t uVar3;
    ulong in_stack_00000028;
    uint16_t in_stack_00000030;
    uint32_t *in_stack_00000038;
    
    *(arg2 + 8) = *(arg2 + 8) & 0xfffe0000;
    *(arg2 + 0xc) = *(arg2 + 0xc) & 0xfffffffe;
    uVar3 = arg3 & 0xffff;
    *(arg2 + 0xc) = *(arg2 + 0xc) | arg4 & 1;
    *(arg2 + 8) = *(arg2 + 8) | uVar3;
    uVar1 = *(arg2 + 8);
    *arg2 = in_stack_00000028;
    if (*(CONCAT44(in_register_0000000c,arg1) + 10) < 0x100) {
        uVar2 = *in_stack_00000038 >> 10;
        if (0x1f < uVar2) {
            uVar2 = 0x1f;
        }
        *in_stack_00000038 = *in_stack_00000038 - uVar3;
    }
    else {
        *in_stack_00000038 = *in_stack_00000038 - uVar3;
        uVar2 = *in_stack_00000038 / in_stack_00000030;
        if (0x1f < uVar2) {
            uVar2 = 0x1f;
        }
        *(arg2 + 0xc) = *(arg2 + 0xc) | 0x200;
    }
    *(arg2 + 8) = (uVar2 << 0x11 ^ uVar1) & 0x3e0000 ^ uVar1;
    return;
}


/* fcn.000246d0 @ 0x246d0 */

int64_t fcn.000246d0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg2_00;
    int iVar1;
    
    iVar1 = (arg2 & 0xff) * 0x20;
    arg2_00 = (iVar1 + -0x20 + (arg3 & 0xffU)) * 0x20 + *(arg1 + 0xd8);
    fcn.000254d0(arg1,arg2_00,(((arg3 & 0xff) - 0x20) + iVar1) * 0x40 * 0x10 + *(arg1 + 0xe0),0x40);
    return arg2_00;
}


/* fcn.00024c78 @ 0x24c78 */

uchar fcn.00024c78(int64_t arg1,ulong noname_1,int64_t arg2)

{
    int64_t iVar1;
    uint8_t uVar2;
    char cVar3;
    
    cVar3 = *(arg1 + 0xc);
    if (-1 < cVar3) {
        do {
            uVar2 = 1;
            while( true ) {
                if (*(*0x39420 + 0x716) <= uVar2) {
                    return 0;
                }
                iVar1 = *(*0x2e7c0 + 0x42);
                arg1 = uVar2 * 0x1c0;
                if (((*(iVar1 + arg1) & 3) == 3) && (*(iVar1 + 10 + arg1) == cVar3)) break;
                uVar2 = uVar2 + 1;
            }
            arg1 = arg1 + iVar1;
            cVar3 = *(arg1 + 0xc);
        } while (-1 < cVar3);
    }
    return *(arg1 + 0xd);
}


/* fcn.000257b0 @ 0x257b0 */

void fcn.000257b0(int64_t arg1)

{
    char cVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint8_t auStackX_8 [32];
    
    *(arg1 + 0x5d) = 0;
    uVar4 = *(arg1 + 0x50) >> 0x14;
    uVar3 = uVar4 & 0xf;
    if ((((uVar4 & 0xf) != 0) && (uVar3 <= (*(arg1 + 0x50) & 0xf))) &&
       (uVar4 = fcn.0002bbf4(arg1,4), (uVar4 >> 0x14 & 1) != 0)) {
        uVar4 = fcn.0002bbf4(arg1,0x34);
        cVar1 = uVar4;
        while (uVar5 = uVar4, cVar1 != '\0') {
            uVar2 = fcn.0002bbf4(arg1,uVar5 & 0xff);
            uVar5 = uVar2;
            if (uVar2 == '\n') break;
            uVar4 = uVar2 >> 8;
            cVar1 = uVar2 >> 8;
        }
        if (uVar5 != '\0') {
            auStackX_8[0] = 0x10;
            auStackX_8[1] = 0x14;
            auStackX_8[2] = 0x18;
            auStackX_8[3] = 0x1c;
            auStackX_8[4] = 0x20;
            auStackX_8[5] = 0x24;
            uVar4 = fcn.0002bbf4(arg1,auStackX_8[(uVar5 >> 0x1d) - 1]);
            if ((*((uVar5 >> 0x10 & 0x1fff) + uVar4) >> 0x1c & 1) != 0) {
                *(arg1 + 0x5d) = uVar3;
            }
        }
    }
    return;
}


/* fcn.00028664 @ 0x28664 */

uint64_t fcn.00028664(uint32_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    int64_t arg2;
    uint16_t uVar3;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar2 + 0x5d) == '\0') {
        uVar1 = *(iVar2 + 0x4a) + 4;
        if (*(iVar2 + 0x20) < uVar1) {
            uVar1 = 0;
        }
        else {
            uVar1 = *(uVar1 + *(iVar2 + 0x18));
        }
        if ((uVar1 >> 0xc & 1) != 0) {
            arg2 = 0;
            fcn.0001cfb0(arg1,0,2);
            uVar3 = 0;
            do {
                if (*(iVar2 + 0x20) < *(iVar2 + 0x4a)) {
                    in_RAX = 0;
                }
                else {
                    in_RAX = *(*(iVar2 + 0x4a) + *(iVar2 + 0x18));
                }
                if ((in_RAX & 2) == 0) goto code_r0x00028679;
                fcn.0002bb74(100,arg2);
                uVar1 = 500;
                uVar3 = uVar3 + 1;
            } while (uVar3 < 500);
        }
        if (*(*0x39420 + 100) < 0x30) {
            *(*0x39420 + 4 + *(*0x39420 + 100) * 2) = 0x24;
            uVar1 = *0x39420;
            *(*0x39420 + 100) = *(*0x39420 + 100) + '\x01';
        }
        uVar1 = CONCAT71(uVar1 >> 8,0xff);
    }
    else {
code_r0x00028679:
        uVar1 = in_RAX & 0xffffffffffffff00;
    }
    return uVar1;
}


/* fcn.00028714 @ 0x28714 */

uint64_t fcn.00028714(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint64_t uVar3;
    
    piVar1 = fcn.00014184(1);
    if (piVar1 != NULL) {
        *(arg1 + 0x40) = piVar1;
        fcn.00028ab4(arg1);
        iVar2 = fcn.00014184(4);
        if (iVar2 != 0) {
            *piVar1 = iVar2;
            *(iVar2 + 0xc) = 0;
            *(iVar2 + 0x18) = 0;
            *(iVar2 + 4) = 0;
            *(iVar2 + 0x1c) = 0;
            *(iVar2 + 0x20) = 0;
            *(iVar2 + 0x24) = 0;
            *(iVar2 + 0x28) = 0;
            *(iVar2 + 0x2c) = 0;
            *(iVar2 + 0x10) = 1;
            *(iVar2 + 0x14) = 1;
            *(iVar2 + 8) = 0x40000000;
            *(iVar2 + 0x5a) = 0;
            *(*piVar1 + 0x10) = 1;
            *(*piVar1 + 0x14) = 1;
            *(*piVar1 + 4) = 0x402000;
            **piVar1 = 1;
            *(*piVar1 + 0x18) = 0x40;
            *(*piVar1 + 0x6f) = 1;
            uVar3 = fcn.00028b88(arg1,*piVar1);
            return uVar3 & 0xffffffffffffff00;
        }
    }
    return 0xff;
}


/* fcn.0002cac0 @ 0x2cac0 */

ulong fcn.0002cac0(int64_t arg1)

{
    uint8_t uVar1;
    int64_t iVar2;
    uchar uVar3;
    uint *arg2;
    uint *puVar4;
    uint *puVar5;
    uint64_t uVar6;
    uint *arg1_00;
    uint uVar7;
    uint *puStackX_8;
    uint *puStackX_10;
    
    puStackX_8 = NULL;
    puStackX_10 = NULL;
    if (((*(arg1 + 0x58) & 0x10) == 0) && ((*(arg1 + 0x50) & 0xf000) == 0)) {
        arg2 = fcn.00014184(6);
        if (arg2 == NULL) {
            return 0xff;
        }
        iVar2 = *(arg1 + 0x40);
        uVar6 = arg2 & 0xffffffff;
        arg1_00 = uVar6 + 0x80;
        *(iVar2 + 8) = arg2;
        *(iVar2 + 0x10) = arg1_00;
        if ((**0x39420 & 0x1000000) == 0) {
            puVar5 = arg1_00;
        }
        else {
            fcn.00029608(arg1,arg1_00,&puStackX_8);
            puVar5 = puStackX_8;
        }
        puVar4 = arg2;
        if ((**0x39420 & 0x1000000) != 0) {
            fcn.00029608(arg1,arg2,&puStackX_10);
            puVar4 = puStackX_10;
        }
        uVar7 = 1;
        *(arg2 + 0x51) = arg1_00;
        arg2[5] = 1;
        *arg2 = 1;
        arg2[4] = puVar5;
        uVar1 = *(*0x39420 + 0x716);
        arg2[2] = 0x40000001;
        arg2[1] = arg2[1] | uVar1 + 1 | 0x402000;
        if (*(*0x39420 + 0x6c7) == '\0') {
            *(arg2 + 0x6f) = 8;
        }
        else {
            *(arg2 + 0x6f) = 0x10;
        }
        *(arg2 + 0x6b) = 0x80500;
        *(uVar6 + 0x88) = 0x80500;
        fcn.00028ec0(arg1_00,puVar4 + 99,8);
        *arg1_00 = uVar7;
        *(uVar6 + 0x84) = uVar7;
        fcn.00028b88(arg1,arg2);
        uVar3 = fcn.00014478(0x294b0);
        *(arg2 + 0x14) = uVar3;
        *(arg2 + 0x59) = 0;
        fcn.00014c7c(arg1,0);
    }
    return 0;
}


/* fcn.00025ca0 @ 0x25ca0 */

uchar fcn.00025ca0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uchar uVar2;
    uint32_t uVar3;
    char cVar4;
    int64_t iVar5;
    
    cVar4 = arg2;
    uVar2 = 0;
    if (*(arg1 + 0x5c) != 0) {
        uVar3 = fcn.0002bbf4(arg1,*(arg1 + 0x5c));
        uVar1 = uVar3 & 0xfffeffff | 0x10000;
        if (cVar4 == '\0') {
            uVar1 = uVar3 & 0xfffeffff;
        }
        uVar3 = uVar1 & 0xfeffffff;
        if ((**0x39420 & 2) == 0) {
            uVar3 = uVar1;
        }
        iVar5 = arg1;
        fcn.0002bc38(arg1,*(arg1 + 0x5c),uVar3);
        fcn.0002bc38(arg1,*(iVar5 + 0x5c) + 4,0xe0002000);
        uVar2 = *(iVar5 + 0x5c);
    }
    return uVar2;
}


/* fcn.0002bc38 @ 0x2bc38 */

void fcn.0002bc38(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    iVar1 = *(*0x39420 + 0x74a);
    if (*(arg1 + 0x30) != 0) {
        iVar1 = *(arg1 + 0x30);
    }
    *(iVar1 + (*(arg1 + 0x2a) << 0xc | arg2 & 0xffU)) = arg3;
    return;
}


/* fcn.00025e34 @ 0x25e34 */

uint64_t fcn.00025e34(uint32_t arg1)

{
    uint8_t uVar1;
    uint64_t uVar2;
    uint in_register_0000000c;
    uint64_t uVar3;
    uint64_t uVar4;
    bool bVar5;
    
    uVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x4a);
    uVar3 = 0;
    if (*(CONCAT44(in_register_0000000c,arg1) + 0x20) < uVar1) {
        uVar4 = uVar3;
    }
    else {
        uVar4 = *(uVar1 + *(CONCAT44(in_register_0000000c,arg1) + 0x18));
    }
    uVar2 = *(CONCAT44(in_register_0000000c,arg1) + 0x4a) + 4;
    if (*(CONCAT44(in_register_0000000c,arg1) + 0x20) < uVar2) {
        uVar2 = uVar3;
    }
    else {
        uVar2 = *(uVar2 + *(CONCAT44(in_register_0000000c,arg1) + 0x18));
    }
    if (((uVar4 & 0x10) == 0) || ((uVar2 >> 0xe & 1) != 0)) {
        if ((*(CONCAT44(in_register_0000000c,arg1) + 0xa8) == 0) ||
           (*(CONCAT44(in_register_0000000c,arg1) + 0xb0) == 0)) {
            uVar4 = *(CONCAT44(in_register_0000000c,arg1) + 0x4a) + 0x14;
            if (uVar4 <= *(CONCAT44(in_register_0000000c,arg1) + 0x20)) {
                uVar3 = *(uVar4 + *(CONCAT44(in_register_0000000c,arg1) + 0x18));
            }
            uVar2 = uVar3 & 0xfffff000;
            bVar5 = *(CONCAT44(in_register_0000000c,arg1) + 0x10) == uVar2;
        }
        else {
            uVar4 = *(CONCAT44(in_register_0000000c,arg1) + 0x4a) + 0x14;
            if (uVar4 <= *(CONCAT44(in_register_0000000c,arg1) + 0x20)) {
                uVar3 = *(uVar4 + *(CONCAT44(in_register_0000000c,arg1) + 0x18));
            }
            uVar2 = uVar3 & 0xfffff000;
            bVar5 = *(CONCAT44(in_register_0000000c,arg1) + 0xa8) == uVar2;
        }
        if (!bVar5) {
            return CONCAT71(uVar2 >> 8,0xff);
        }
    }
    return uVar2 & 0xffffffffffffff00;
}


/* fcn.000289b8 @ 0x289b8 */

ulong fcn.000289b8(uint32_t arg1)

{
    uint32_t uVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint16_t uVar5;
    uint16_t uVar6;
    uint32_t uVar7;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar7 = 0;
    uVar3 = *(iVar2 + 0x4a) + 4;
    if (*(iVar2 + 0x20) < uVar3) {
        uVar1 = uVar7;
    }
    else {
        uVar1 = *(uVar3 + *(iVar2 + 0x18));
    }
    if ((uVar1 >> 0xf & 1) != 0) {
        iVar4 = 0;
        fcn.0001cfec(arg1,0,0x20);
        uVar6 = 0;
        uVar5 = uVar6;
        do {
            uVar3 = *(iVar2 + 0x4a) + 4;
            if (*(iVar2 + 0x20) < uVar3) {
                uVar1 = 0;
            }
            else {
                uVar1 = *(uVar3 + *(iVar2 + 0x18));
            }
            if ((uVar1 >> 0xf & 1) == 0) break;
            fcn.0002bb74(10,iVar4);
            uVar5 = uVar5 + 1;
        } while (uVar5 < 1000);
        uVar3 = *(iVar2 + 0x4a) + 4;
        if (*(iVar2 + 0x20) < uVar3) {
            uVar1 = uVar7;
        }
        else {
            uVar1 = *(uVar3 + *(iVar2 + 0x18));
        }
        if ((uVar1 >> 0xf & 1) != 0) {
            iVar4 = 0;
            fcn.0001cfec(iVar2,0,1);
            while( true ) {
                uVar3 = *(iVar2 + 0x4a) + 4;
                if (*(iVar2 + 0x20) < uVar3) {
                    uVar1 = uVar7;
                }
                else {
                    uVar1 = *(uVar3 + *(iVar2 + 0x18));
                }
                if ((uVar1 >> 0xc & 1) != 0) break;
                fcn.0002bb74(0x7d,iVar4);
                uVar6 = uVar6 + 1;
                if (0xf < uVar6) {
                    return 0xff;
                }
            }
            return 0xff;
        }
    }
    return 0;
}


/* fcn.00028860 @ 0x28860 */

ulong fcn.00028860(int64_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t arg2;
    uint16_t uVar3;
    uint32_t uVar4;
    
    arg2 = 0;
    fcn.0001cfec(arg1,0,0x10);
    uVar2 = 0;
    uVar3 = 0;
    do {
        uVar4 = uVar2;
        uVar1 = *(arg1 + 0x4a) + 4;
        if (*(arg1 + 0x20) < uVar1) {
            uVar1 = uVar2 & 0xffffffff;
        }
        else {
            uVar1 = *(uVar1 + *(arg1 + 0x18));
        }
        if ((uVar1 >> 0xe & 1) == 0) break;
        fcn.0002bb74(10,arg2);
        uVar4 = uVar2;
        uVar1 = 1000;
        uVar3 = uVar3 + 1;
    } while (uVar3 < 1000);
    uVar2 = *(arg1 + 0x4a) + 4;
    if (uVar2 <= *(arg1 + 0x20)) {
        uVar1 = *(arg1 + 0x18);
        uVar4 = *(uVar2 + uVar1);
    }
    return CONCAT71(uVar1 >> 8,-((uVar4 & 0x4000) != 0));
}


/* fcn.000288e4 @ 0x288e4 */

ulong fcn.000288e4(int64_t arg1)

{
    uint32_t uVar1;
    ulong uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint16_t uVar5;
    
    iVar4 = 0;
    fcn.0001cfb0(arg1,0,0x20);
    uVar5 = 0;
    do {
        uVar3 = *(arg1 + 0x4a) + 4;
        if (*(arg1 + 0x20) < uVar3) {
            uVar1 = 0;
        }
        else {
            uVar1 = *(uVar3 + *(arg1 + 0x18));
        }
        if ((uVar1 >> 0xf & 1) != 0) break;
        fcn.0002bb74(10,iVar4);
        uVar5 = uVar5 + 1;
    } while (uVar5 < 1000);
    uVar3 = *(arg1 + 0x4a) + 4;
    if (*(arg1 + 0x20) < uVar3) {
        uVar1 = 0;
    }
    else {
        uVar1 = *(uVar3 + *(arg1 + 0x18));
    }
    if ((uVar1 >> 0xf & 1) == 0) {
        iVar4 = 0;
        fcn.0001cfec(arg1,0,1);
        uVar5 = 0;
        do {
            uVar3 = *(arg1 + 0x4a) + 4;
            if (*(arg1 + 0x20) < uVar3) {
                uVar1 = 0;
            }
            else {
                uVar1 = *(uVar3 + *(arg1 + 0x18));
            }
            if ((uVar1 >> 0xc & 1) != 0) break;
            fcn.0002bb74(0x7d,iVar4);
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x10);
        uVar2 = 0xff;
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.000287dc @ 0x287dc */

ulong fcn.000287dc(int64_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t arg2;
    uint16_t uVar3;
    uint32_t uVar4;
    
    arg2 = 0;
    fcn.0001cfb0(arg1,0,0x10);
    uVar2 = 0;
    uVar3 = 0;
    do {
        uVar4 = uVar2;
        uVar1 = *(arg1 + 0x4a) + 4;
        if (*(arg1 + 0x20) < uVar1) {
            uVar1 = uVar2 & 0xffffffff;
        }
        else {
            uVar1 = *(uVar1 + *(arg1 + 0x18));
        }
        if ((uVar1 >> 0xe & 1) != 0) break;
        fcn.0002bb74(10,arg2);
        uVar4 = uVar2;
        uVar1 = 1000;
        uVar3 = uVar3 + 1;
    } while (uVar3 < 1000);
    uVar2 = *(arg1 + 0x4a) + 4;
    if (uVar2 <= *(arg1 + 0x20)) {
        uVar1 = *(arg1 + 0x18);
        uVar4 = *(uVar2 + uVar1);
    }
    return CONCAT71(uVar1 >> 8,~-((uVar4 & 0x4000) != 0));
}


/* fcn.000265a4 @ 0x265a4 */

void fcn.000265a4(int64_t arg1)

{
    int64_t arg1_00;
    uint32_t uVar1;
    uint8_t *puVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    uint32_t *puVar5;
    
    if (*(arg1 + 0x5c) == 0) {
        uVar1 = 0xffffffff;
    }
    else {
        uVar1 = fcn.0002bbf4(arg1,*(arg1 + 0x5c));
    }
    *(arg1 + 0x58) = *(arg1 + 0x58) | 0x20;
    if ((uVar1 >> 0x18 & 1) == 0) {
        **0x39420 = **0x39420 | 1;
        uVar4 = 1;
        puVar5 = *0x39420;
        if (1 < *(*0x39420 + 0x716)) {
            do {
                puVar2 = uVar4 * 0x1c0 + *(*0x2e7c0 + 0x42);
                if (((((*puVar2 & 3) == 3) && (arg1_00 = *(*0x2e7e0 + (puVar2[0xb] - 1) * 8), *(arg1_00 + 1) == '\x10')
                     ) && ((*puVar2 & 1) != 0)) && (((*(arg1_00 + 0x2a) ^ *(arg1 + 0x2a)) & 0xfff8) == 0)) {
                    fcn.00013de8(arg1_00,CONCAT71(puVar2 >> 8,puVar2[0xc]),CONCAT71(puVar5 >> 8,puVar2[0xd]));
                    puVar5 = *0x39420;
                }
                uVar3 = uVar4 + 1;
                uVar4 = uVar3;
            } while (uVar3 < *(puVar5 + 0x716));
        }
        fcn.00025864(arg1);
    }
    else {
        **0x39420 = **0x39420 & 0xfffffffe;
        fcn.00025ee0(arg1);
    }
    *(arg1 + 0x58) = *(arg1 + 0x58) & 0xffffffdf;
    return;
}


/* fcn.00025864 @ 0x25864 */

ulong fcn.00025864(int64_t arg1)

{
    bool bVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    char cVar4;
    ushort uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint16_t uVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    int iVar13;
    uint32_t uVar14;
    int16_t iVar15;
    uint32_t uVar16;
    uint64_t uVar17;
    
    uVar12 = 0;
    bVar1 = false;
    iVar8 = fcn.0001ce98(arg1);
    if (iVar8 < 0) {
        return 0xff;
    }
    uVar6 = fcn.0002bbf4(arg1,8);
    if ((uVar6 & 0xffffff00) != 0xc032000) {
        return 0xff;
    }
    uVar6 = fcn.0002bbf4(arg1,0x10);
    *(arg1 + 0x18) = uVar6 & 0xfffffff0;
    iVar8 = fcn.0002bd44(uVar6 & 0xfffffff0,*(arg1 + 0x20));
    if ((iVar8 < 0) && (iVar8 != -0x7fffffffffffffeb)) {
        return 0xff;
    }
    iVar8 = fcn.0002bd04(*(arg1 + 0x10));
    if ((iVar8 < 0) && (iVar8 != -0x7fffffffffffffeb)) {
        return 0xff;
    }
    uVar14 = 0;
    uVar6 = uVar14;
    if (3 < *(arg1 + 0x20)) {
        uVar6 = *(*(arg1 + 0x18) + 4);
    }
    *(arg1 + 0x50) = uVar6;
    *(arg1 + 0x28) = uVar6 & 0xf;
    fcn.000257b0(arg1);
    *(arg1 + 0x4a) = **(arg1 + 0x18);
    if (*(arg1 + 0x20) < 8) {
        uVar6 = uVar14;
    }
    else {
        uVar6 = *(*(arg1 + 0x18) + 8);
    }
    *(arg1 + 0x54) = uVar6;
    if (((*(arg1 + 0x58) & 0x80) == 0) && ((*(arg1 + 0x58) & 0x10) == 0)) {
        uVar3 = *(arg1 + 0x55);
        if (uVar3 == 0) goto code_r0x00025958;
        uVar2 = fcn.0002bbf4(arg1,uVar3);
        uVar3 = -((uVar2 & 1) != 0) & uVar3;
    }
    else {
code_r0x00025958:
        uVar3 = 0;
    }
    *(arg1 + 0x5c) = uVar3;
    uVar6 = arg1;
    if (((*(*0x39420 + 0x6c9) >> 0x12 & 1) == 0) && ((*(arg1 + 0x54) & 1) != 0)) {
        if ((*0x39420)[0x19] < 0x30) {
            *(*0x39420 + (*0x39420)[0x19] * 2 + 4) = 0x8105;
            *(*0x39420 + 0x19) = (*0x39420)[0x19] + '\x01';
        }
code_r0x000259bd:
        fcn.0001cfec(uVar6,0x40,1);
        return 0xff;
    }
    if (((*(*0x39420 + 0x6c9) & 0x200) == 0) &&
       ((*(*(*0x2e7c0 + 0x3aa) + 0x2e) == '\0' && ((*(arg1 + 0x50) & 0xf000) != 0)))) goto code_r0x000259bd;
    uVar11 = *(arg1 + 0x4a) + 4;
    uVar16 = uVar14;
    if (uVar11 <= *(arg1 + 0x20)) {
        uVar16 = *(uVar11 + *(arg1 + 0x18));
    }
    if ((uVar16 & 0x1000) == 0) {
        iVar8 = 0;
        fcn.0001cfec(uVar6,0,1);
        uVar16 = uVar12;
        do {
            uVar11 = *(arg1 + 0x4a) + 4;
            uVar7 = uVar14;
            if (uVar11 <= *(arg1 + 0x20)) {
                uVar7 = *(uVar11 + *(arg1 + 0x18));
            }
            if ((uVar7 & 0x1000) != 0) break;
            fcn.0002bb74(0x7d,iVar8);
            uVar16 = uVar16 + 1;
        } while (uVar16 < 0x10);
    }
    cVar4 = fcn.00028664(uVar6);
    if (cVar4 == -1) {
        return 0xff;
    }
    uVar16 = uVar14;
    if (*(arg1 + 0x4a) <= *(arg1 + 0x20)) {
        uVar16 = *(*(arg1 + 0x4a) + *(arg1 + 0x18));
    }
    uVar16 = uVar16 >> 2 & 3;
    if (uVar16 == 0) {
        uVar5 = 0x400;
code_r0x00025aa5:
        *(arg1 + 0x48) = uVar5;
    }
    else {
        if (uVar16 != 1) {
            if (uVar16 != 2) {
                return 0xff;
            }
            uVar5 = 0x100;
            goto code_r0x00025aa5;
        }
        *(arg1 + 0x48) = 0x200;
    }
    uVar10 = 0;
    uVar11 = *(arg1 + 0x10);
    *(arg1 + 0x4c) = 0x4000;
    if (*(arg1 + 0x48) != 0) {
        do {
            uVar9 = uVar10;
            uVar10 = uVar10 + 1;
            *(uVar11 + uVar9 * 4) = 1;
        } while (uVar10 < *(arg1 + 0x48));
    }
    if ((*(arg1 + 0xa8) == 0) || (*(arg1 + 0xb0) == 0)) {
        uVar3 = *(arg1 + 0x4a);
        if (*(arg1 + 0x20) < uVar3 + 0x18) goto code_r0x00025b0f;
        uVar16 = *(arg1 + 0x10);
    }
    else {
        uVar3 = *(arg1 + 0x4a);
        if (*(arg1 + 0x20) < uVar3 + 0x18) goto code_r0x00025b0f;
        uVar16 = *(arg1 + 0xa8);
    }
    uVar11 = uVar16;
    *(uVar3 + 0x14 + *(arg1 + 0x18)) = uVar16;
code_r0x00025b0f:
    fcn.00028714(arg1);
    fcn.0002cac0(arg1);
    if (*(arg1 + 0x4a) + 8 <= *(arg1 + 0x20)) {
        *(*(arg1 + 0x4a) + 4 + *(arg1 + 0x18)) = 0x3f;
    }
    if (*(arg1 + 0x5c) != '\0') {
        fcn.00025ca0(arg1,CONCAT71(uVar11 >> 8,1));
        fcn.0002bc38(arg1,*(arg1 + 0x5c) + 4,0x2005);
    }
    uVar11 = 0;
    iVar13 = 0x11;
    fcn.0001cfb0(uVar6,0,0x11);
    uVar9 = iVar13 + 0x53;
    uVar16 = uVar12;
    do {
        uVar17 = *(arg1 + 0x4a) + 4;
        uVar7 = uVar14;
        if (uVar17 <= *(arg1 + 0x20)) {
            uVar7 = *(uVar17 + *(arg1 + 0x18));
        }
        if ((uVar7 & 0x1000) == 0) break;
        fcn.0002bb74(uVar9,uVar11);
        uVar16 = uVar16 + 1;
    } while (uVar16 < 0x14);
    if ((*(arg1 + 0x50) & 0x10) != 0) {
        uVar14 = 1;
        uVar17 = 0x44;
        if (*(arg1 + 0x28) != '\0') {
            do {
                iVar15 = uVar17;
                if ((*(arg1 + 0x5d) == 0) || (*(arg1 + 0x5d) != uVar14)) {
                    uVar11 = *(arg1 + 0x4a) + uVar17;
                    if (*(arg1 + 0x20) < uVar11) {
                        uVar16 = 0;
                    }
                    else {
                        uVar16 = *(uVar11 + *(arg1 + 0x18));
                    }
                    uVar11 = uVar17;
                    if ((uVar16 & 0x1000) == 0) {
                        fcn.0001cfb0(uVar6,uVar17,0x1000);
                        bVar1 = true;
                        uVar11 = uVar17;
                    }
                }
                uVar14 = uVar14 + 1;
                uVar17 = iVar15 + 4;
            } while (uVar14 <= *(arg1 + 0x28));
            if (bVar1) {
                fcn.0002bb74(20000,uVar11);
            }
        }
    }
    *(arg1 + 0x58) = *(arg1 + 0x58) | 1;
    if (-1 < **0x39420) {
        **0x39420 = **0x39420 | 0x80;
    }
    iVar8 = 0x40;
    fcn.0001cfb0(uVar6,0x40,1);
    if ((*(arg1 + 0x58) & 0x40) == 0) {
        fcn.0002bb74(uVar9,iVar8);
    }
    else {
        uVar6 = uVar12;
        do {
            uVar11 = *(arg1 + 0x4a) + 4;
            if (*(arg1 + 0x20) < uVar11) {
                uVar14 = uVar12;
            }
            else {
                uVar14 = *(uVar11 + *(arg1 + 0x18));
            }
            if ((uVar14 & 4) != 0) {
                return 0;
            }
            fcn.0002bb74(uVar9,iVar8);
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x32);
    }
    return 0;
}


/* fcn.00025d0c @ 0x25d0c */

ulong fcn.00025d0c(int64_t arg1)

{
    uchar uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    unkbyte7 in_RDX;
    uint8_t uVar5;
    unkbyte7 in_R8;
    
    iVar3 = fcn.0001ce98(arg1);
    if ((-1 < iVar3) && ((*(arg1 + 0x58) & 1) != 0)) {
        uVar4 = *(arg1 + 0x4a) + 4;
        if (*(arg1 + 0x20) < uVar4) {
            uVar2 = 0;
        }
        else {
            uVar2 = *(uVar4 + *(arg1 + 0x18));
        }
        if ((uVar2 >> 0xc & 1) == 0) {
            uVar1 = *arg1;
            if (*(*0x39420 + 0x5ad) == '\0') {
                *(*0x39420 + 0x6c3) = 1;
                *(*0x39420 + 0x5ad) = 1;
                do {
                    if (*(arg1 + 0x4a) + 8 <= *(arg1 + 0x20)) {
                        *(*(arg1 + 0x4a) + 4 + *(arg1 + 0x18)) = 4;
                    }
                    uVar5 = 1;
                    if (*(arg1 + 0x28) != '\0') {
                        do {
                            if ((*(arg1 + 0x5d) == 0) || (*(arg1 + 0x5d) != uVar5)) {
                                fcn.00013fac(arg1,CONCAT71(in_RDX,uVar1) | 0x80,CONCAT71(in_R8,uVar5));
                            }
                            uVar5 = uVar5 + 1;
                        } while (uVar5 <= *(arg1 + 0x28));
                    }
                    uVar4 = *(arg1 + 0x4a) + 4;
                    if (*(arg1 + 0x20) < uVar4) {
                        uVar2 = 0;
                    }
                    else {
                        uVar2 = *(uVar4 + *(arg1 + 0x18));
                    }
                } while ((uVar2 & 4) != 0);
                *(*0x39420 + 0x6c3) = 0;
                *(*0x39420 + 0x5ad) = 0;
            }
            if (*(arg1 + 0x4a) + 0xc <= *(arg1 + 0x20)) {
                *(*(arg1 + 0x4a) + 8 + *(arg1 + 0x18)) = 5;
            }
            return 0;
        }
    }
    return 0xff;
}


/* fcn.00029038 @ 0x29038 */

void fcn.00029038(uint32_t arg1)

{
    uint32_t *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint in_register_0000000c;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint8_t uVar9;
    uint16_t uVar10;
    int64_t iVar11;
    uint32_t uVar12;
    uint *puVar13;
    uint64_t uStackX_8;
    int64_t var_30h;
    
    iVar5 = CONCAT44(in_register_0000000c,arg1);
    puVar13 = NULL;
    uVar12 = 0;
    uVar8 = *(iVar5 + 0x4a) + 0xc;
    uStackX_8 = 0;
    if (uVar8 <= *(iVar5 + 0x20)) {
        uVar12 = *(uVar8 + *(iVar5 + 0x18));
    }
    iVar4 = *(iVar5 + 0x10);
    uVar10 = uVar12 >> 3 & *(iVar5 + 0x48) - 1U;
    iVar11 = -0x7ffffffffffffffe;
    uVar8 = *(iVar4 + uVar10 * 4) & 0xffffffe0;
    uVar12 = **0x39420 & 0x1000000;
    if (uVar12 == 0) {
        uStackX_8 = uVar8;
    }
    else {
        iVar3 = iVar5;
        uVar7 = uVar8;
        iVar2 = fcn.000296d0(iVar5,uVar8,&uStackX_8);
        if (iVar2 == iVar11) {
            fcn.0002966c(iVar3,uVar7,&uStackX_8);
            iVar11 = -0x7ffffffffffffffe;
        }
    }
    uVar7 = 0;
    do {
        if ((*(uStackX_8 + 4 + uVar7 * 4) & 0x8000) != 0) break;
        uVar9 = uVar7 + 1;
        uVar7 = uVar9;
    } while (uVar9 < 8);
    if (uVar7 == '\b') {
        if (uVar10 == 0) {
            uVar10 = *(iVar5 + 0x48);
        }
        uVar10 = uVar10 - 1;
        uVar8 = *(iVar4 + uVar10 * 4) & 0xffffffe0;
        if (uVar12 == 0) {
            uStackX_8 = uVar8;
        }
        else {
            iVar4 = iVar5;
            uVar7 = uVar8;
            iVar3 = fcn.000296d0(iVar5,uVar8,&uStackX_8);
            if (iVar3 == iVar11) {
                fcn.0002966c(iVar4,uVar7,&uStackX_8);
            }
        }
        uVar7 = 0;
        do {
            if ((*(uStackX_8 + 4 + uVar7 * 4) & 0x8000) != 0) break;
            uVar9 = uVar7 + 1;
            uVar7 = uVar9;
        } while (uVar9 < 8);
        if (uVar7 == '\b') {
            return;
        }
    }
    if (uVar12 == 0) {
        uVar6 = uVar8;
    }
    else {
        uVar6 = uVar8;
        iVar4 = fcn.000296d0(iVar5,uVar8,&uStackX_8);
        if (iVar4 == -0x7ffffffffffffffe) {
            fcn.0002966c(iVar5,uVar6,&uStackX_8);
        }
        uVar6 = uStackX_8;
    }
    iVar4 = fcn.0002bd04(uVar6,0x80);
    if ((-1 < iVar4) || (iVar4 == -0x7fffffffffffffeb)) {
        uVar9 = *(*0x39420 + 0x716);
        if ((**0x39420 & 0x1000000) != 0) {
            uVar8 = uVar6;
        }
        uVar6 = 1;
        uVar12 = 1;
        if (1 < uVar9) {
            do {
                uVar12 = uVar6;
                puVar13 = uVar6 * 0x1c0 + *(*0x2e7c0 + 0x42);
                if (((*puVar13 & 3) == 3) && (*(puVar13 + 100) == uVar8)) break;
                uVar12 = uVar12 + 1;
                uVar6 = uVar12;
            } while (uVar12 < uVar9);
        }
        if (uVar12 != uVar9) {
            puVar1 = uVar8 + 4 + uVar7 * 4;
            *puVar1 = *puVar1 & 0xffff7fff;
            if (uVar10 < *(puVar13 + 0x60)) {
                uVar10 = uVar10 + *(iVar5 + 0x48);
            }
            uVar10 = (uVar10 - *(puVar13 + 0x60)) * 8 + uVar7 + 1;
            iVar4 = fcn.0002bd04(*(puVar13 + 0x5c),uVar10 << 2);
            if ((-1 < iVar4) || (iVar4 == -0x7fffffffffffffeb)) {
                fcn.00027ad0(iVar5,*(puVar13 + 0x60),uVar10,*(puVar13 + 0x5c));
                iVar5 = fcn.0002bd04(*(puVar13 + 0x5e),1);
                if ((-1 < iVar5) || (iVar5 == -0x7fffffffffffffeb)) {
                    **(puVar13 + 0x5e) = 1;
                }
            }
        }
    }
    return;
}


/* fcn.0002966c @ 0x2966c */

ulong fcn.0002966c(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint in_register_00000014;
    
    uVar1 = *(arg1 + 200);
    if ((uVar1 <= CONCAT44(in_register_00000014,arg2)) &&
       (uVar2 = uVar1 + 0x103ff + (*(*0x39420 + 0x5ae) << 0xc),
       CONCAT44(in_register_00000014,arg2) < uVar2 || CONCAT44(in_register_00000014,arg2) == uVar2)) {
        if (((**0x39420 & 0x1000000) == 0) || (uVar1 == 0)) {
            *arg3 = CONCAT44(in_register_00000014,arg2);
        }
        else {
            *arg3 = (*(*0x2e7c0 + 0x12) - uVar1) + CONCAT44(in_register_00000014,arg2);
        }
        return 0;
    }
    return 0x8000000000000002;
}


/* fcn.000296d0 @ 0x296d0 */

ulong fcn.000296d0(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_00000014;
    
    uVar1 = *(arg1 + 0xa8);
    if ((uVar1 <= CONCAT44(in_register_00000014,arg2)) &&
       (CONCAT44(in_register_00000014,arg2) < uVar1 + 0x20fff ||
        CONCAT44(in_register_00000014,arg2) == uVar1 + 0x20fff)) {
        if (((**0x39420 & 0x1000000) == 0) || (uVar1 == 0)) {
            *arg3 = CONCAT44(in_register_00000014,arg2);
        }
        else {
            *arg3 = (*(arg1 + 0x10) - uVar1) + CONCAT44(in_register_00000014,arg2);
        }
        return 0;
    }
    return 0x8000000000000002;
}


/* fcn.00028f1c @ 0x28f1c */

ulong fcn.00028f1c(int64_t arg1,int64_t arg2)

{
    uint32_t arg2_00;
    code *pcVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    uint32_t *puStackX_10;
    
    puVar4 = *(arg2 + 0x51);
    while( true ) {
        if ((puVar4 == NULL) ||
           (((iVar3 = fcn.0002bd04(puVar4,0x40), iVar3 < 0 && (iVar3 != -0x7fffffffffffffeb)) ||
            ((puVar4[2] & 0x80) != 0)))) {
            return 0xff;
        }
        if ((puVar4[2] & 0x40) != 0) break;
        arg2_00 = *puVar4;
        if ((arg2_00 & 1) != 0) {
            *(arg2 + 0x59) = 0;
            goto code_r0x00028fba;
        }
        puVar4 = arg2_00;
        puStackX_10 = arg2_00;
        if ((**0x39420 & 0x1000000) != 0) {
            fcn.0002966c(arg1,arg2_00,&puStackX_10);
            puVar4 = puStackX_10;
        }
    }
    *(arg2 + 0x59) = 0x4000;
code_r0x00028fba:
    if ((*(arg2 + 0x50) - 1U < 0x32) && (pcVar1 = *((*(arg2 + 0x50) - 1) * 8 + 0x38de0), pcVar1 != NULL)) {
        uVar2 = *(arg2 + 0x5b);
        iVar3 = 0;
        if ((uVar2 != 0) && (iVar3 = 0, uVar2 < *(*0x39420 + 0x716))) {
            iVar3 = uVar2 * 0x1c0 + *(*0x2e7c0 + 0x42);
        }
        (*pcVar1)(arg1,iVar3,arg2,0,0);
    }
    return 0;
}


/* fcn.00025ee0 @ 0x25ee0 */

ulong fcn.00025ee0(int64_t arg1)

{
    ulong *puVar1;
    char cVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint16_t uVar5;
    uint32_t arg1_00;
    uint64_t uVar6;
    uint uVar7;
    ulong *arg2;
    ulong uVar8;
    uint8_t uVar9;
    ulong *arg3;
    uint8_t uVar10;
    
    iVar4 = fcn.0001ce98(arg1);
    if ((-1 < iVar4) && (uVar9 = 1, (*(arg1 + 0x58) & 1) != 0)) {
        puVar1 = *(arg1 + 0x40);
        arg3 = *(*0x2e7c0 + 0x12);
        if (arg3 <= puVar1) {
            arg2 = (*(*0x39420 + 0x5ae) << 0xc) + arg3;
            if (puVar1 + 3 <= arg2) {
                arg1_00 = arg1;
                iVar4 = arg1;
                cVar2 = fcn.00025e34(arg1_00);
                if (cVar2 == '\0') {
                    uVar10 = 0;
                    if (((*(*0x39420 + 0x6c9) & 0x4000000) == 0) || ((*(arg1 + 0x58) & 0x20) == 0)) {
                        if (*(arg1 + 0x28) != '\0') {
                            do {
                                arg3 = CONCAT71(arg3 >> 8,uVar9);
                                arg2 = CONCAT71(arg2 >> 8,*arg1) | 0x80;
                                fcn.00013f6c(arg1,arg2,arg3);
                                uVar9 = uVar9 + 1;
                            } while (uVar9 <= *(arg1 + 0x28));
                        }
                        if (*(arg1 + 0x5d) == '\0') {
                            iVar4 = 0;
                            fcn.0001cfec(arg1_00,0,1);
                            do {
                                uVar6 = *(arg1 + 0x4a) + 4;
                                if (*(arg1 + 0x20) < uVar6) {
                                    uVar3 = 0;
                                }
                                else {
                                    uVar3 = *(uVar6 + *(arg1 + 0x18));
                                }
                                if ((uVar3 >> 0xc & 1) != 0) break;
                                fcn.0002bb74(0x7d,iVar4);
                                uVar10 = uVar10 + 1;
                            } while (uVar10 < 0x10);
                            fcn.00028664(arg1_00);
                        }
                    }
                    else {
                        if (*(arg1 + 0x28) != '\0') {
                            do {
                                arg3 = CONCAT71(arg3 >> 8,uVar9);
                                arg2 = CONCAT71(arg2 >> 8,*arg1) | 0x80;
                                fcn.00013de8(arg1,arg2,arg3);
                                uVar9 = uVar9 + 1;
                            } while (uVar9 <= *(arg1 + 0x28));
                        }
                        fcn.000289b8(arg1_00);
                        fcn.00028860(arg1);
                        iVar4 = CONCAT71(arg2 >> 8,1);
                        if (*(arg1 + 0x28) != '\0') {
                            do {
                                uVar5 = ((iVar4 & 0xff) + 0x10) * 4;
                                uVar6 = *(arg1 + 0x4a) + uVar5;
                                if (*(arg1 + 0x20) < uVar6) {
                                    uVar3 = 0;
                                }
                                else {
                                    uVar3 = *(uVar6 + *(arg1 + 0x18));
                                }
                                if (((uVar3 & 4) != 0) && (uVar5 + 4 + *(arg1 + 0x4a) <= *(arg1 + 0x20))) {
                                    *(uVar5 + *(arg1 + 0x4a) + *(arg1 + 0x18)) = uVar3 | 0x80;
                                }
                                uVar9 = iVar4 + 1;
                                iVar4 = CONCAT71(iVar4 >> 8,uVar9);
                            } while (uVar9 <= *(arg1 + 0x28));
                        }
                        fcn.0002bb74(0xfa,iVar4);
                        iVar4 = 0;
                        fcn.0001cfec(arg1_00,0,1);
                        do {
                            uVar6 = *(arg1 + 0x4a) + 4;
                            if (*(arg1 + 0x20) < uVar6) {
                                uVar3 = 0;
                            }
                            else {
                                uVar3 = *(uVar6 + *(arg1 + 0x18));
                            }
                            if ((uVar3 >> 0xc & 1) != 0) break;
                            fcn.0002bb74(0x7d,iVar4);
                            uVar10 = uVar10 + 1;
                        } while (uVar10 < 0x10);
                        if (*(arg1 + 0x5c) != 0) {
                            uVar3 = fcn.0002bbf4(arg1,*(arg1 + 0x5c) + 4);
                            fcn.0002bc38(arg1,*(arg1 + 0x5c) + 4,uVar3 & 0xffffffc0);
                        }
                        uVar6 = *(arg1 + 0x4a) + 4;
                        if (*(arg1 + 0x20) < uVar6) {
                            uVar7 = 0;
                        }
                        else {
                            uVar7 = *(uVar6 + *(arg1 + 0x18));
                        }
                        if (*(arg1 + 0x4a) + 8 <= *(arg1 + 0x20)) {
                            *(*(arg1 + 0x4a) + 4 + *(arg1 + 0x18)) = uVar7;
                        }
                        fcn.0001cfec(arg1_00,0x40,1);
                    }
                    fcn.00025ca0(arg1,0);
                    iVar4 = *(arg1 + 0x10);
                    uVar6 = 0;
                    if (*(arg1 + 0x48) != 0) {
                        do {
                            uVar5 = uVar6 + 1;
                            *(iVar4 + uVar6 * 4) = 1;
                            uVar6 = uVar5;
                        } while (uVar5 < *(arg1 + 0x48));
                    }
                    if (puVar1[1] != 0) {
                        fcn.00014358(puVar1[1],6);
                    }
                    fcn.00014358(*puVar1,4);
                    uVar8 = 0;
                    fcn.00014358(puVar1,1);
                    fcn.00014c7c(arg1_00,CONCAT71(uVar8 >> 8,3));
                }
                else {
                    fcn.00025ca0(iVar4,0);
                }
                *(arg1 + 0x58) = *(arg1 + 0x58) & 0xfffffffe;
                fcn.00013180();
                return 0;
            }
        }
    }
    return 0xff;
}


/* fcn.00026684 @ 0x26684 */

uint64_t fcn.00026684(uint32_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    uint16_t uVar5;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar1 = ((arg2 & 0xff) + 0x10) * 4;
    uVar3 = uVar1;
    if ((*(iVar4 + 0x50) & 0xf000) != 0) {
        uVar3 = *(iVar4 + 0x4a) + uVar1;
        if (*(iVar4 + 0x20) < uVar3) {
            uVar3 = 0;
        }
        else {
            uVar3 = *(uVar3 + *(iVar4 + 0x18));
        }
        if ((uVar3 & 1) == 0) {
            return CONCAT71(uVar3 >> 8,0xff);
        }
        uVar3 = uVar1;
        fcn.0001cfb0(arg1,uVar3,0x2000);
        uVar5 = 0;
        do {
            uVar2 = *(iVar4 + 0x4a) + uVar1;
            if (*(iVar4 + 0x20) < uVar2) {
                uVar2 = 0;
            }
            else {
                uVar2 = *(uVar2 + *(iVar4 + 0x18));
            }
            if ((uVar2 & 2) != 0) break;
            fcn.0002bb74(100,uVar3);
            uVar5 = uVar5 + 1;
        } while (uVar5 < 200);
        uVar3 = fcn.0001cfb0(iVar4,uVar1,2);
    }
    return uVar3 & 0xffffffffffffff00;
}


/* fcn.00029608 @ 0x29608 */

ulong fcn.00029608(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_00000014;
    uint64_t uVar2;
    
    uVar1 = *(*0x2e7c0 + 0x12);
    if ((uVar1 <= CONCAT44(in_register_00000014,arg2)) &&
       (uVar2 = uVar1 + 0x103ff + (*(*0x39420 + 0x5ae) << 0xc),
       CONCAT44(in_register_00000014,arg2) < uVar2 || CONCAT44(in_register_00000014,arg2) == uVar2)) {
        if (((**0x39420 & 0x1000000) == 0) || (*(arg1 + 200) == 0)) {
            *arg3 = CONCAT44(in_register_00000014,arg2);
        }
        else {
            *arg3 = (*(arg1 + 200) - uVar1) + CONCAT44(in_register_00000014,arg2);
        }
        return 0;
    }
    return 0x8000000000000002;
}


/* fcn.00026258 @ 0x26258 */

ulong fcn.00026258(int64_t arg1)

{
    uint32_t *puVar1;
    char cVar2;
    uint uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint8_t uVar7;
    uint32_t *puVar8;
    uint uVar9;
    uint32_t **in_R8;
    uint16_t uVar10;
    uint32_t *puStackX_10;
    
    iVar5 = fcn.0001ce98(arg1);
    uVar9 = 0;
    if (iVar5 < 0) {
        return 0xff;
    }
    if (*(arg1 + 0x5c) != '\0') {
        uVar3 = fcn.0002bbf4(arg1,*(arg1 + 0x5c) + 4);
        uVar10 = uVar3 >> 0x10 & uVar3;
        uVar4 = uVar10;
        if ((uVar10 & 0x2000) != 0) {
            if (*(arg1 + 0x5c) != '\0') {
                uVar10 = fcn.0002bbf4(arg1,*(arg1 + 0x5c) + 4);
                fcn.0002bc38(arg1,*(arg1 + 0x5c) + 4,uVar10 | uVar4 << 0x10);
            }
            fcn.000265a4(arg1);
            return 0;
        }
    }
    iVar5 = arg1;
    cVar2 = fcn.00025e34(arg1);
    if (cVar2 == -1) {
        if (*(arg1 + 0x5c) != '\0') {
            uVar4 = fcn.0002bbf4(iVar5,*(arg1 + 0x5c) + 4);
            fcn.0002bc38(arg1,*(arg1 + 0x5c) + 4,uVar4 & 0xe0002000);
        }
    }
    else if ((*(arg1 + 0x58) & 1) != 0) {
code_r0x0002633c:
        do {
            do {
                do {
                    while( true ) {
                        while( true ) {
                            uVar6 = *(arg1 + 0x4a) + 4;
                            if (*(arg1 + 0x20) < uVar6) {
                                uVar6 = 0;
                            }
                            else {
                                uVar6 = *(uVar6 + *(arg1 + 0x18));
                            }
                            if ((uVar6 & 0x10) == 0) break;
                            **0x39420 = **0x39420 & 0xfffffffe;
                            fcn.00025864(arg1);
                            fcn.00025d0c(arg1);
                            **0x39420 = **0x39420 | 1;
                        }
                        if ((uVar6 >> 0xc & 1) != 0) {
                            uVar6 = *(arg1 + 0x4a) + 4;
                            if (uVar6 <= *(arg1 + 0x20)) {
                                uVar9 = *(uVar6 + *(arg1 + 0x18));
                            }
                            if (*(arg1 + 0x4a) + 8 <= *(arg1 + 0x20)) {
                                *(*(arg1 + 0x4a) + 4 + *(arg1 + 0x18)) = uVar9;
                                return 0;
                            }
                            return 0;
                        }
                        if (((*0x39420)[0x1b1] == '\x01') && ((uVar6 & 1) != 0)) break;
                        if ((uVar6 & 4) == 0) {
                            return 0;
                        }
                        if (*(*0x39420 + 0x5ad) == '\x01') {
                            return 0;
                        }
                        fcn.0002bb74(100000,uVar6);
                        if (*(arg1 + 0x4a) + 8 <= *(arg1 + 0x20)) {
                            *(*(arg1 + 0x4a) + 4 + *(arg1 + 0x18)) = 4;
                        }
                        uVar7 = 1;
                        *(*0x39420 + 0x5ad) = 1;
                        if (*(arg1 + 0x28) != '\0') {
                            do {
                                if ((*(arg1 + 0x5d) == '\0') || (*(arg1 + 0x5d) != uVar7)) {
                                    in_R8 = CONCAT71(in_R8 >> 8,uVar7);
                                    uVar6 = CONCAT71(uVar6 >> 8,*arg1) | 0x80;
                                    fcn.00013fac(arg1,uVar6,in_R8);
                                }
                                uVar7 = uVar7 + 1;
                            } while (uVar7 <= *(arg1 + 0x28));
                        }
                        *(*0x39420 + 0x5ad) = 0;
                    }
                    if (*(arg1 + 0x4a) + 8 <= *(arg1 + 0x20)) {
                        *(*(arg1 + 0x4a) + 4 + *(arg1 + 0x18)) = 1;
                    }
                } while ((uVar6 >> 0xe & 1) == 0);
                if (*(arg1 + 0x20) < *(arg1 + 0x4a)) {
                    uVar6 = 0;
                }
                else {
                    uVar6 = *(*(arg1 + 0x4a) + *(arg1 + 0x18));
                }
            } while ((uVar6 & 0x10) == 0);
            if (*(arg1 + 0xa0) != 0) {
                fcn.00029038(arg1);
            }
            uVar10 = 0;
            do {
                puVar1 = *(arg1 + 0x10) + uVar10 * 4;
                uVar4 = *puVar1;
                while ((uVar4 & 1) == 0) {
                    puVar8 = uVar4 & 0xffffffe0;
                    if ((**0x39420 & 0x1000000) == 0) {
                        puStackX_10 = puVar8;
                    }
                    else {
                        in_R8 = &puStackX_10;
                        iVar5 = fcn.0002966c(arg1,puVar8,in_R8);
                        if (iVar5 == -0x7ffffffffffffffe) {
                            in_R8 = &puStackX_10;
                            fcn.000296d0(arg1,puVar8,in_R8);
                        }
                    }
                    puVar8 = puStackX_10;
                    iVar5 = fcn.0002bd04(puStackX_10,0x80);
                    if ((iVar5 < 0) && (iVar5 != -0x7fffffffffffffeb)) goto code_r0x0002633c;
                    uVar4 = *puVar8;
                    if (((uVar4 & 6) == 2) && (*(puVar8 + 0x59) == '\x01')) {
                        fcn.00028f1c(arg1,puVar8);
                        if (*puVar8 != uVar4) {
                            puVar8 = puVar1;
                        }
                    }
                    uVar4 = *puVar8;
                }
                uVar10 = uVar10 + 1;
            } while (uVar10 < 8);
        } while( true );
    }
    return 0;
}


/* fcn.00026d2c @ 0x26d2c */

uint16_t fcn.00026d2c(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint in_R8D;
    uint32_t arg3;
    
    if ((*arg1 & 3) != 0) {
        arg3 = CONCAT31(in_R8D >> 8,*(arg1 + 0xc));
        uVar3 = CONCAT71(arg1 >> 8,0x10);
        iVar1 = fcn.0001467c(uVar3,0,arg3,0);
        while (iVar2 = iVar1, iVar2 != 0) {
            if ((*(iVar2 + 0xe) & 0x47) == 0) {
                return *(arg1 + 0xd) << 7 | *(arg1 + 0xc);
            }
            arg3 = CONCAT31(arg3 >> 8,*(iVar2 + 0xc));
            uVar3 = CONCAT71(uVar3 >> 8,0x10);
            iVar1 = fcn.0001467c(uVar3,0,arg3,0);
            arg1 = iVar2;
        }
    }
    return 0;
}


/* fcn.00028ec0 @ 0x28ec0 */

void fcn.00028ec0(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint16_t uVar1;
    uint *puVar2;
    
    *(arg1 + 4) = 1;
    *(arg1 + 0x10) = 0;
    puVar2 = arg1 + 0xc;
    *puVar2 = 0;
    *(arg1 + 0x18) = 0;
    if (arg3 != 0) {
        if (0x4000 < arg3) {
            arg3 = 0x4000;
        }
        while( true ) {
            *puVar2 = arg2;
            uVar1 = (arg2 + 0x1000U & 0xf000) - arg2;
            if (arg3 <= uVar1) break;
            arg3 = arg3 - uVar1;
            puVar2 = puVar2 + 1;
            arg2 = arg2 + uVar1;
        }
    }
    return;
}


/* fcn.00026d94 @ 0x26d94 */

char fcn.00026d94(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iStackX_8;
    
    iStackX_8 = 0;
    uVar4 = (*0x39420)[0x1b0] * 100;
    iVar2 = arg1;
    if ((**0x39420 & 0x1000000) == 0) {
        iStackX_8 = arg2;
    }
    else {
        fcn.00029608(arg1,arg2,&iStackX_8);
    }
    if (*(iVar2 + 0x4a) + 0x1c <= *(arg1 + 0x20)) {
        *(*(iVar2 + 0x4a) + 0x18 + *(arg1 + 0x18)) = iStackX_8;
    }
    *(arg2 + 0x59) = 1;
    *arg2 = iStackX_8 | 2;
    cVar1 = fcn.000288e4(arg1);
    if (cVar1 == -1) {
        cVar1 = -1;
    }
    else {
        for (uVar3 = 0; (uVar4 == 0 || (uVar3 < uVar4)); uVar3 = uVar3 + 1) {
            iVar2 = arg2;
            fcn.00028f1c(arg1,arg2);
            if (*(arg2 + 0x59) == '\0') break;
            fcn.0002bb74(10,iVar2);
        }
        fcn.000289b8(arg1);
        if (*(arg2 + 0x59) == '\x01') {
            *(arg2 + 0x59) = 0;
            cVar1 = -1;
        }
        fcn.00026258(arg1);
    }
    return cVar1;
}


/* fcn.00027748 @ 0x27748 */

ulong fcn.00027748(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    
    iVar4 = 8;
    do {
        uVar1 = *arg2;
        uVar3 = uVar1 & 0xfff;
        *arg1 = uVar1;
        *(arg1 + 4) = 0x3ff < uVar3;
        *arg2 = uVar1 + 0xc00;
        iVar4 = iVar4 + -1;
        arg1 = arg1 + 8;
    } while (iVar4 != 0);
    uVar2 = 0;
    if ((0x3ff < uVar3) && (uVar3 != 0x400)) {
        uVar2 = 0x8000000000000002;
    }
    return uVar2;
}


/* fcn.00027798 @ 0x27798 */

int16_t fcn.00027798(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint16_t uVar7;
    uint64_t uVar8;
    uint8_t uVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    int16_t iVar12;
    uint16_t uVar13;
    uint16_t uStackX_20;
    uint32_t in_stack_00000028;
    char in_stack_00000030;
    uint in_stack_00000038;
    uint in_stack_0000003c;
    int iStack_a8;
    uint32_t uStack_a4;
    uint64_t uStack_a0;
    int iStack_98;
    uint32_t uStack_94;
    uint32_t uStack_88;
    char acStack_84 [4];
    uint32_t auStack_80 [16];
    
    iStack_a8 = arg4;
    iVar4 = CONCAT44(in_stack_0000003c,in_stack_00000038);
    uVar6 = 0;
    uStack_a0 = 0;
    iVar12 = 1;
    uStack_a4 = 0;
    uStackX_20 = 0;
    uVar8 = arg3 & 0xffff;
    uVar2 = *(arg2 + 0x168);
    uVar7 = *(arg1 + 0x48);
    iStack_98 = *(arg2 + 0x16c) * *(arg2 + 0x16a);
    if (uVar7 != 0) {
        do {
            iVar5 = fcn.00027748(&uStack_88,&iStack_a8);
            if (iVar5 < 0) {
                iStack_a8 = (uStack_88 & 0xfffff000) + 0x1000;
                fcn.00027748(&uStack_88,&iStack_a8);
            }
            uVar10 = 0;
            uVar13 = uVar8 + 1;
            uVar3 = *(*(arg1 + 0x10) + uVar8 * 4);
            uVar6 = uVar3;
            uVar11 = **0x39420 & 0x1000000;
            if (uVar11 == 0) {
                uStack_a0 = uVar6;
            }
            else {
                iVar5 = fcn.0002966c(arg1,uVar3,&uStack_a0);
                if (iVar5 == -0x7ffffffffffffffe) {
                    fcn.000296d0(arg1,uVar6,&uStack_a0);
                }
            }
            uStack_94 = 0;
            if (uVar11 != 0) {
                uVar6 = uStack_a0;
            }
            uVar9 = 0;
            if (uVar13 != uVar7) {
                uStack_94 = uVar13;
            }
            *(uVar6 + 0x24) = uStack_88 & 0xfffff000;
            do {
                uVar8 = uVar9;
                uVar3 = *(acStack_84 + uVar8 * 8 + -4);
                *(uVar6 + 4 + uVar8 * 4) = 0xc000000;
                *(uVar6 + 4 + uVar8 * 4) = uVar3 & 0xfff | *(uVar6 + 4 + uVar8 * 4);
                *(uVar6 + 4 + uVar8 * 4) = uVar10 << 0xc | *(uVar6 + 4 + uVar8 * 4);
                if (iVar4 != 0) {
                    puVar1 = uVar6 + 4 + uVar8 * 4;
                    *puVar1 = *puVar1 | 0x8000;
                }
                if ((acStack_84[uVar8 * 8] != '\0') && (uVar9 != 7)) {
                    uVar10 = uVar10 + 1;
                    *(uVar6 + 0x24 + uVar10 * 4) = auStack_80[uVar8 * 2] & 0xfffff000;
                }
                uStack_a4 = uStack_a4 + iStack_98;
                if (in_stack_00000028 <= uStack_a4) break;
                uVar9 = uVar9 + 1;
                iVar12 = iVar12 + 1;
            } while (uVar9 < 8);
            uVar8 = uStack_94;
            *(uVar6 + 0x24) = *(arg2 + 10) | *(uVar6 + 0x24) | (uVar2 & 0xf) << 8;
            *(uVar6 + 0x28) = *(uVar6 + 0x28) | *(arg2 + 0x16a);
            *(uVar6 + 0x2c) = *(uVar6 + 0x2c) | *(arg2 + 0x16c);
            if (in_stack_00000030 != '\0') {
                *(uVar6 + 0x28) = *(uVar6 + 0x28) | 0x800;
            }
            if (in_stack_00000028 <= uStack_a4) break;
            uStackX_20 = uStackX_20 + 1;
            uVar7 = *(arg1 + 0x48);
        } while (uStackX_20 < uVar7);
        arg3 = arg3 & 0xffff;
    }
    *(arg2 + 0x178) = iVar4;
    if (iVar4 != 0) {
        *(arg2 + 0x180) = arg3 & 0xffff;
        *(arg2 + 400) = uVar6;
    }
    return iVar12;
}


/* fcn.000279fc @ 0x279fc */

uint64_t fcn.000279fc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint32_t *puVar2;
    uint32_t arg2_00;
    int64_t iVar3;
    uint8_t uVar4;
    uint16_t uVar5;
    uint16_t uVar6;
    uint64_t uStackX_8;
    char in_stack_00000028;
    
    uVar5 = arg2;
    uVar6 = 0;
    do {
        arg2_00 = *(*(arg1 + 0x10) + uVar5 * 4);
        uStackX_8 = arg2_00;
        uVar1 = uVar5 + 1;
        uVar5 = 0;
        if (uVar1 != *(arg1 + 0x48)) {
            uVar5 = uVar1;
        }
        if (((**0x39420 & 0x1000000) != 0) &&
           (iVar3 = fcn.000296d0(arg1,arg2_00,&uStackX_8), iVar3 == -0x7ffffffffffffffe)) {
            fcn.0002966c(arg1,uStackX_8,&uStackX_8);
        }
        uVar4 = 0;
        do {
            if (in_stack_00000028 == '\0') {
                puVar2 = uStackX_8 + 4 + uVar4 * 4;
                *puVar2 = *puVar2 & 0x7fffffff;
            }
            else {
                puVar2 = uStackX_8 + 4 + uVar4 * 4;
                *puVar2 = *puVar2 | 0x80000000;
            }
            uVar6 = uVar6 + 1;
            if (uVar6 == arg3) {
                if (arg4 != NULL) {
                    *arg4 = uVar4;
                }
                return uStackX_8;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < 8);
    } while( true );
}


/* fcn.00027ad0 @ 0x27ad0 */

uint64_t fcn.00027ad0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint16_t uVar7;
    uint16_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint8_t uVar11;
    uint16_t uVar12;
    uint64_t uVar13;
    uint64_t uStackX_8;
    
    uVar12 = *(arg1 + 0x48);
    uVar13 = arg2 & 0xffff;
    uVar7 = 0;
    uVar9 = 0;
    uVar8 = uVar7;
    if (uVar12 != 0) {
        do {
            uVar5 = *(*(arg1 + 0x10) + uVar13 * 4);
            uVar6 = uVar5;
            uVar3 = uVar13 + 1;
            uVar13 = 0;
            if (uVar3 != uVar12) {
                uVar13 = uVar3;
            }
            uVar2 = **0x39420;
            if ((uVar2 & 0x1000000) == 0) {
                uStackX_8 = uVar6;
            }
            else {
                iVar4 = fcn.0002966c(arg1,uVar5,&uStackX_8);
                if (iVar4 == -0x7ffffffffffffffe) {
                    fcn.000296d0(arg1,uVar6,&uStackX_8);
                }
            }
            uVar11 = 0;
            if ((uVar2 & 0x1000000) != 0) {
                uVar6 = uStackX_8;
            }
            do {
                uVar10 = uVar11;
                if (*(uVar6 + 4 + uVar10 * 4) < 0) {
                    puVar1 = uVar6 + 4 + uVar10 * 4;
                    *puVar1 = *puVar1 & 0x7fffffff;
                    uVar5 = 0;
                }
                else {
                    uVar5 = *(uVar6 + 4 + uVar10 * 4) >> 0x10 & 0xfff;
                    uVar9 = uVar9 + uVar5;
                }
                uVar7 = uVar7 + 1;
                if (arg4 != NULL) {
                    *arg4 = uVar5;
                    arg4 = arg4 + 4;
                }
                if (uVar7 == arg3) {
                    return uVar9;
                }
                uVar11 = uVar11 + 1;
            } while (uVar11 < 8);
            uVar12 = *(arg1 + 0x48);
            uVar8 = uVar8 + 1;
        } while (uVar8 < uVar12);
    }
    return 0;
}


/* fcn.000295b8 @ 0x295b8 */

uint32_t fcn.000295b8(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    
    if (arg1 == '\0') {
        uVar5 = 1;
        uVar4 = (1 << (arg2 - 1U & 0x1f)) >> 3;
        if (uVar4 != 0) {
            uVar5 = uVar4 & 0xffff;
        }
    }
    else {
        if (arg2 == '\0') {
            return 1;
        }
        uVar1 = 0;
        do {
            uVar2 = uVar1;
            uVar3 = arg2 >> 1;
            arg2 = uVar3;
            uVar1 = uVar2 + 1;
        } while (uVar3 != 0);
        uVar5 = 1 << (uVar2 & 0x1f);
    }
    return uVar5 & 0xffff;
}


/* fcn.00028b88 @ 0x28b88 */

ulong fcn.00028b88(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    uint32_t *puVar3;
    uint32_t *puVar4;
    uint16_t uVar5;
    uint32_t *puVar6;
    uint32_t uVar7;
    bool bVar8;
    uint32_t *puStackX_10;
    uint32_t *apuStackX_18 [2];
    int64_t var_48h;
    int64_t var_50h;
    
    puVar3 = NULL;
    apuStackX_18[0] = NULL;
    puStackX_10 = NULL;
    if ((arg2 == 0) || (*(arg2 + 0x6f) == 0)) {
code_r0x00028d44:
        uVar2 = 0xff;
    }
    else {
        iVar1 = arg1;
        if ((**0x39420 & 0x1000000) == 0) {
            puVar6 = arg2;
        }
        else {
            fcn.00029608(arg1,arg2,&puStackX_10);
            puVar6 = puStackX_10;
        }
        uVar5 = *(iVar1 + 0x98);
        bVar8 = uVar5 < *(iVar1 + 0x48);
        while (bVar8) {
            puVar4 = *(arg1 + 0x10) + uVar5 * 4;
            if (*(arg1 + 0xa0) != 0) {
                uVar7 = *puVar4;
                puStackX_10 = uVar7;
                puVar4 = puStackX_10;
                if (((uVar7 & 1) == 0) && ((**0x39420 & 0x1000000) != 0)) {
                    iVar1 = fcn.000296d0(arg1,uVar7,&puStackX_10);
                    if (iVar1 == -0x7ffffffffffffffe) {
                        fcn.0002966c(arg1,puStackX_10,&puStackX_10);
                    }
                    puVar4 = puStackX_10;
                }
            }
            uVar7 = *puVar4;
            while ((uVar7 & 1) == 0) {
                if ((**0x39420 & 0x1000000) == 0) {
                    apuStackX_18[0] = uVar7 & 0xffffffe0;
                }
                else {
                    fcn.0002966c(arg1,uVar7 & 0xffffffe0,apuStackX_18);
                }
                puVar3 = apuStackX_18[0];
                iVar1 = fcn.0002bd04(apuStackX_18[0]);
                if ((iVar1 < 0) && (iVar1 != -0x7fffffffffffffeb)) goto code_r0x00028d44;
                if (*(puVar3 + 0x6f) <= *(arg2 + 0x6f)) break;
                puVar4 = puVar3;
                uVar7 = *puVar3;
            }
            if (((uVar7 & 1) != 0) || (puVar3 != arg2)) {
                iVar1 = fcn.0002bd04(puVar4);
                if ((iVar1 < 0) && (iVar1 != -0x7fffffffffffffeb)) goto code_r0x00028d44;
                *arg2 = *puVar4;
                *puVar4 = puVar6 | 2;
            }
            uVar5 = uVar5 + *(arg2 + 0x6f);
            bVar8 = uVar5 < *(arg1 + 0x48);
        }
        if (*(arg1 + 0x98) == 7) {
            *(arg1 + 0x98) = 0;
        }
        else {
            *(arg1 + 0x98) = *(arg1 + 0x98) + 1;
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00028d5c @ 0x28d5c */

ulong fcn.00028d5c(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    uint in_register_00000014;
    uint32_t *puVar3;
    uint32_t *puVar4;
    uint32_t uVar5;
    uint16_t uVar6;
    uint64_t uVar7;
    uint32_t *puVar8;
    uint32_t *puStackX_10;
    
    puVar3 = CONCAT44(in_register_00000014,arg2);
    if ((puVar3 == NULL) || (*(puVar3 + 0x6f) == 0)) {
code_r0x00028e9e:
        uVar2 = 0xff;
    }
    else {
        fcn.00028860(arg1);
        uVar7 = 0;
        if (*(arg1 + 0x48) != 0) {
            do {
                puVar8 = *(arg1 + 0x10) + uVar7 * 4;
                uVar5 = *puVar8;
                if ((uVar5 & 1) == 0) {
                    do {
                        puVar4 = uVar5 & 0xffffffe0;
                        if ((**0x39420 & 0x1000000) == 0) {
                            puStackX_10 = puVar4;
                        }
                        else {
                            iVar1 = fcn.0002966c(arg1,puVar4,&puStackX_10);
                            if (iVar1 == -0x7ffffffffffffffe) {
                                fcn.000296d0(arg1,puVar4,&puStackX_10);
                            }
                        }
                        puVar4 = puStackX_10;
                        iVar1 = fcn.0002bd04(puStackX_10,0x80);
                        if ((iVar1 < 0) && (iVar1 != -0x7fffffffffffffeb)) goto code_r0x00028e9e;
                        if (puVar4 == puVar3) break;
                        uVar5 = *puVar4;
                        puVar8 = puVar4;
                    } while ((uVar5 & 1) == 0);
                    if ((uVar5 & 1) == 0) {
                        iVar1 = fcn.0002bd04(puVar8,4);
                        if ((iVar1 < 0) && (iVar1 != -0x7fffffffffffffeb)) goto code_r0x00028e9e;
                        *puVar8 = *puVar3;
                    }
                }
                uVar6 = uVar7 + 1;
                uVar7 = uVar6;
            } while (uVar6 < *(arg1 + 0x48));
        }
        *puVar3 = 1;
        fcn.000287dc(arg1);
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00028ab4 @ 0x28ab4 */

void fcn.00028ab4(uint32_t arg1)

{
    int64_t iVar1;
    uint *puVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint *puVar4;
    uint16_t uVar5;
    uint *puStackX_8;
    
    puVar4 = *(CONCAT44(in_register_0000000c,arg1) + 0xa0);
    uVar5 = 0;
    if (puVar4 != NULL) {
        if ((**0x39420 & 0x1000000) != 0) {
            fcn.000296d0(CONCAT44(in_register_0000000c,arg1),puVar4,&puStackX_8);
            puVar4 = puStackX_8;
        }
        if (*(CONCAT44(in_register_0000000c,arg1) + 0x48) != 0) {
            do {
                iVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x10);
                *puVar4 = *(iVar1 + uVar5 * 4);
                if ((**0x39420 & 0x1000000) == 0) {
code_r0x00028b1b:
                    puStackX_8 = puVar4;
                }
                else {
                    puVar2 = *(CONCAT44(in_register_0000000c,arg1) + 0x10);
                    if ((puVar4 < puVar2) || (puVar2 + 0x20fffU < puVar4)) {
                        fcn.00029608(CONCAT44(in_register_0000000c,arg1),puVar4,&puStackX_8);
                    }
                    else {
                        iVar3 = *(CONCAT44(in_register_0000000c,arg1) + 0xa8);
                        if (iVar3 == 0) goto code_r0x00028b1b;
                        puStackX_8 = (iVar3 - puVar2) + puVar4;
                    }
                }
                puVar4 = puVar4 + 0x20;
                *(iVar1 + uVar5 * 4) = puStackX_8;
                uVar5 = uVar5 + 1;
            } while (uVar5 < *(CONCAT44(in_register_0000000c,arg1) + 0x48));
        }
    }
    return;
}


/* fcn.0002a44c @ 0x2a44c */

void fcn.0002a44c(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint64_t uVar2;
    uint8_t *arg2_00;
    uint8_t *puVar3;
    uint8_t auStackX_8 [8];
    uint8_t uStackX_10;
    uint8_t uStackX_11;
    uint8_t uStackX_12;
    uint8_t auStackX_14 [4];
    int32_t var_570h;
    int64_t var_578h;
    uchar auStack_648 [32];
    uchar *puStack_628;
    ushort uStack_620;
    uchar auStack_618 [1536];
    
    puVar3 = *(arg1 + 0x116) + arg2;
    auStackX_8[0] = 0;
    auStackX_8[1] = 1;
    auStackX_8[2] = 2;
    auStackX_8[3] = 4;
    fcn.00011080(auStack_618,0x600,0);
    fcn.00011080(auStack_648,0x30,0);
    fcn.00011080(&uStackX_10,8,0);
    puStack_628 = auStack_618;
    uStack_620 = 0x300;
    while( true ) {
        if (puVar3 <= arg2) {
            return;
        }
        uVar1 = *arg2;
        arg2_00 = arg2 + 1;
        uStackX_12 = uVar1 >> 4;
        uStackX_11 = uVar1 >> 2 & 3;
        uStackX_10 = auStackX_8[uVar1 & 3];
        uVar2 = uStackX_10;
        if (puVar3 < arg2_00 + uVar2) break;
        if ((uVar2 != 0) && (auStackX_14 != arg2_00)) {
            section..text(auStackX_14,arg2_00,uStackX_10);
            uVar2 = uStackX_10;
        }
        arg2 = arg2_00 + uVar2;
        (**(uStackX_11 * 8 + 0x2e710))(arg1,auStack_648,&uStackX_10);
    }
    return;
}


/* fcn.0002a578 @ 0x2a578 */

uint16_t fcn.0002a578(int64_t arg1)

{
    uint8_t *puVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint16_t *puVar4;
    uint16_t uVar5;
    ulong *puVar6;
    uint64_t uVar7;
    uint16_t auStack_208 [256];
    
    uVar5 = 0;
    fcn.00011080(auStack_208,0x200,0);
    if (*(arg1 + 0x118) != 0) {
        puVar6 = *(arg1 + 0x120);
        uVar7 = *(arg1 + 0x118);
        do {
            puVar1 = *puVar6;
            if ((*puVar1 & 0x10) != 0) {
                auStack_208[puVar1[1]] = auStack_208[puVar1[1]] + puVar1[8] * *(puVar1 + 4);
            }
            puVar6 = puVar6 + 1;
            uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
    }
    puVar4 = auStack_208;
    uVar2 = uVar5;
    do {
        if (*puVar4 != 0) {
            uVar3 = *puVar4 + 7 >> 3;
            if (uVar2 != 0) {
                uVar3 = uVar3 + 1;
            }
            if (uVar5 < uVar3) {
                uVar5 = uVar3;
            }
        }
        uVar2 = uVar2 + 1;
        puVar4 = puVar4 + 1;
    } while (uVar2 < 0x100);
    return uVar5;
}


/* fcn.00017260 @ 0x17260 */

ulong fcn.00017260(int64_t arg1,ulong noname_1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    uint32_t uVar3;
    int64_t noname_1_00;
    uint64_t uVar4;
    
    iVar1 = fcn.00014184((arg2 + 8) * 0x20 + 0x1f >> 5);
    if (iVar1 == 0) {
        uVar2 = 0xff;
    }
    else {
        *(arg1 + 0xc) = arg2;
        *arg1 = iVar1;
        *(arg1 + 10) = 0x20;
        noname_1_00 = (arg2 & 0xffffU) * 0x20 + 0x100;
        if (noname_1_00 != 0) {
            fcn.00011080(iVar1,noname_1_00,0);
        }
        uVar4 = 0;
        iVar1 = iVar1 + *(arg1 + 10) * 8;
        if (*(arg1 + 10) != 0) {
            do {
                *(*arg1 + uVar4 * 8) = iVar1;
                uVar3 = uVar4 + 1;
                uVar4 = uVar3;
                iVar1 = iVar1 + *(arg1 + 0xc);
            } while (uVar3 < *(arg1 + 10));
        }
        *(arg1 + 8) = 0;
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001733c @ 0x1733c */

uint64_t fcn.0001733c(int64_t arg1)

{
    uint64_t *puVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint8_t uVar7;
    uint8_t uVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    
    uVar5 = 0;
    uVar7 = (*(*0x2e7c0 + 0x32) - *0x39420) + 0x2a;
    uVar11 = (*(*0x39420 + 0x5ae) << 0xc) + *(*0x2e7c0 + 0x12);
    iVar6 = arg1;
    iVar9 = *0x39420;
    iVar10 = *0x2e7c0;
    uVar3 = fcn.000172fc(arg1);
    iVar4 = 0xffff;
    if (uVar3 == 0xffff) {
        if (*(iVar9 + 100) < 0x30) {
            *(iVar9 + 4 + *(iVar9 + 100) * 2) = 0x23;
            iVar4 = *0x39420;
            *(*0x39420 + 100) = *(*0x39420 + 100) + '\x01';
        }
        uVar5 = CONCAT71(iVar4 >> 8,0xff);
    }
    else {
        uVar8 = '\x01' << (*(iVar6 + 10) - 1U & 0x1f);
        if (uVar7 != 0) {
            do {
                if (uVar7 == 0) break;
                uVar2 = *(uVar5 + 0x5c6 + iVar9);
                if ((uVar8 & uVar2) == 0) {
code_r0x00017450:
                    uVar5 = uVar5 + 1;
                }
                else {
                    *(uVar5 + 0x5c6 + iVar9) = ~uVar8 & uVar2;
                    iVar9 = *0x39420;
                    if (*(uVar5 + 0x5c6 + *0x39420) != '\0') goto code_r0x00017450;
                    if ((*(uVar5 + 0x5d6 + *0x39420) + 0x1fU & 0xfb) == 0) {
                        *(*0x39420 + 0x667) = *(*0x39420 + 0x667) & 0xfc;
                    }
                    fcn.00016f04(uVar5 + *0x39420 + 0x5b6);
                    *(*0x2e7c0 + 0x32) = *(*0x2e7c0 + 0x32) + -1;
                    uVar7 = uVar7 - 1;
                    iVar9 = *0x39420;
                }
            } while (uVar5 < uVar7);
            iVar10 = *0x2e7c0;
        }
        puVar1 = arg1 + 0x148;
        uVar5 = *puVar1;
        if ((((*(iVar10 + 0x12) < uVar5) && (uVar5 < uVar11)) && (puVar1 != NULL)) && (uVar5 != 0)) {
            fcn.00014358(uVar5,10);
            fcn.00011080(puVar1,0x10,0);
            iVar10 = *0x2e7c0;
        }
        puVar1 = arg1 + 0x138;
        uVar5 = *puVar1;
        if (((*(iVar10 + 0x12) < uVar5) && (uVar5 < uVar11)) && ((puVar1 != NULL && (uVar5 != 0)))) {
            fcn.00014358(uVar5,9);
            fcn.00011080(puVar1,0x10,0);
            iVar10 = *0x2e7c0;
        }
        uVar5 = *(iVar10 + 0x4a);
        *(uVar5 + uVar3 * 8) = 0;
        uVar5 = uVar5 & 0xffffffffffffff00;
    }
    return uVar5;
}


/* fcn.0002a788 @ 0x2a788 */

void fcn.0002a788(int64_t arg1,int64_t arg2)

{
    ulong noname_0;
    uint16_t uVar1;
    uchar *puVar2;
    bool bVar3;
    ushort uStackX_8;
    uint16_t uStackX_a;
    uint16_t uStackX_c;
    ushort uStackX_e;
    
    noname_0 = *(*0x2e7e0 + (*(arg1 + 0xb) - 1) * 8);
    fcn.00011080(&uStackX_8,8,0);
    bVar3 = *(arg2 + 0x1e) != 0;
    uVar1 = 0;
    do {
        if (!bVar3) {
            return;
        }
        if (*(arg2 + 2) == 0xd) {
            if ((*(*(arg2 + 0x20) + uVar1 * 2) == 0x52) && (*(*(arg2 + 0x20) + 2 + uVar1 * 2) == 0x53)) {
                uStackX_8 = 0x921;
                uStackX_a = *(arg2 + 1) | 0x300;
                uStackX_c = *(arg1 + 0x13);
                uStackX_e = 3;
                puVar2 = fcn.00014184(1);
                if (puVar2 == NULL) {
                    return;
                }
                *puVar2 = *(arg2 + 1);
                *(puVar2 + 1) = 2;
                fcn.00015a00(noname_0,arg1,CONCAT26(uStackX_e,CONCAT24(uStackX_c,CONCAT22(uStackX_a,uStackX_8))),
                             100);
                fcn.00014358(puVar2,1);
                return;
            }
        }
        uVar1 = uVar1 + 1;
        bVar3 = uVar1 < *(arg2 + 0x1e);
    } while( true );
}


/* fcn.00029eb8 @ 0x29eb8 */

void fcn.00029eb8(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    
    uVar1 = *arg1;
    if (arg3 < *arg1) {
        uVar1 = arg3;
    }
    if (arg3 != 0) {
        fcn.00011040(arg2,arg3);
    }
    if ((uVar1 != 0) && (arg2 != arg1 + 4)) {
        section..text(arg2,arg1 + 4,uVar1);
    }
    return;
}


/* fcn.00029f10 @ 0x29f10 */

void fcn.00029f10(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    uint8_t *arg1_00;
    int64_t iVar1;
    uint16_t uVar2;
    
    arg1_00 = fcn.00014184(2);
    if (arg1_00 != NULL) {
        if (*(arg2 + 1) != '\0') {
            *arg1 = *arg1 | 2;
        }
        if (arg1_00 != arg2) {
            section..text(arg1_00,arg2,0x30);
        }
        arg1_00[0x20] = 0;
        arg1_00[0x21] = 0;
        arg1_00[0x22] = 0;
        arg1_00[0x23] = 0;
        arg1_00[0x24] = 0;
        arg1_00[0x25] = 0;
        arg1_00[0x26] = 0;
        arg1_00[0x27] = 0;
        uVar2 = 0;
        if (*(arg1_00 + 0x1e) != 0) {
            iVar1 = fcn.00014184(*(arg1_00 + 0x1e) * 2 + 0x1f >> 5);
            *(arg1_00 + 0x20) = iVar1;
            if (iVar1 == 0) {
                return;
            }
            if ((*(arg1_00 + 0x1e) != 0) && (iVar1 != *(arg2 + 0x20))) {
                section..text(iVar1,*(arg2 + 0x20),*(arg1_00 + 0x1e) * 2);
            }
            if (*(arg1_00 + 0x1e) != 0) {
                do {
                    if (*(arg1_00 + 2) == 1) {
                        if (*(*(arg1_00 + 0x20) + uVar2 * 2) == 0x30) {
                            if ((*arg1_00 & 4) == 0) {
                                *arg1 = *arg1 | 0x20;
                            }
                            else {
                                *arg1 = *arg1 | 0x10;
                            }
                            *(arg1 + 2) = *(arg1_00 + 0x10);
                        }
                        if ((*(arg1_00 + 2) == 1) && (*(*(arg1_00 + 0x20) + uVar2 * 2) == 0x31)) {
                            *(arg1 + 4) = *(arg1_00 + 0x10);
                        }
                    }
                    uVar2 = uVar2 + 1;
                } while (uVar2 < *(arg1_00 + 0x1e));
            }
        }
        iVar1 = fcn.00014184(*(arg1 + 8) * 8 + 0x27 >> 5);
        if (iVar1 != 0) {
            arg2_00 = *(arg1 + 0x10);
            if (arg2_00 != 0) {
                if ((*(arg1 + 8) != 0) && (iVar1 != arg2_00)) {
                    section..text(iVar1,arg2_00,*(arg1 + 8) << 3);
                }
                fcn.00014358(*(arg1 + 0x10),*(arg1 + 8) * 8 + 0x1f >> 5);
            }
            *(arg1 + 0x10) = iVar1;
            *(iVar1 + *(arg1 + 8) * 8) = arg1_00;
            *(arg1 + 8) = *(arg1 + 8) + '\x01';
        }
    }
    return;
}


/* fcn.0002b0dc @ 0x2b0dc */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h

uint64_t fcn.0002b0dc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int8_t arg_68h)

{
    uint8_t uVar1;
    uint8_t *puVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    uint8_t *puVar6;
    char cVar7;
    char cVar8;
    uint8_t uVar9;
    uint16_t uVar10;
    int64_t arg3_00;
    uint8_t uVar11;
    uint8_t uVar12;
    uint64_t uVar13;
    char cVar14;
    char cStack0000000000000028;
    uint32_t var_48h;
    int64_t var_50h;
    int8_t var_58h;
    int64_t var_60h;
    ushort uStack_56;
    uint16_t uStack_54;
    uint8_t auStack_50 [2];
    uint uStack_4e;
    int8_t var_18h;
    int16_t var_16h;
    int16_t var_14h;
    int8_t var_10h;
    int32_t var_eh;
    
    uStack_56 = 0;
    uVar9 = 0;
    uStack_54 = 0;
    cVar14 = '\0';
    cVar8 = '\0';
    uVar13 = 0;
    cStack0000000000000028 = '\0';
    bVar3 = false;
    bVar4 = false;
    uStack_4e = 0;
    auStack_50[0] = 0;
    uVar12 = 0;
    puVar6 = NULL;
    if (*(arg2 + 0x118) != '\0') {
        do {
            puVar6 = *(arg2 + 0x120);
            uVar11 = uVar13;
            puVar2 = *(puVar6 + uVar13 * 8);
            if ((*puVar2 & 0x10) != 0) {
                uVar1 = puVar2[1];
                puVar6 = CONCAT71(puVar6 >> 8,uVar1);
                if ((uVar1 == 0) || (uVar1 == *arg4)) {
                    if ((*puVar2 & 1) == 0) {
                        if (*(puVar2 + 2) == 0xd) {
                            if (*(puVar2 + 0x1e) != 0) {
                                uVar10 = 0;
                                if (*(puVar2 + 0x1e) != 0) {
                                    do {
                                        if (*(*(puVar2 + 0x20) + uVar10 * 2) == 0x42) {
                                            if (cVar8 == '\x01') break;
                                            cVar8 = cVar14 + '\b';
                                            if (puVar2[1] == 0) {
                                                cVar8 = cVar14;
                                            }
                                            fcn.0002b438(arg4,auStack_50,CONCAT71(0xff,cVar8),
                                                         CONCAT31(puVar2[8] * puVar2[4] >> 8,
                                                                  puVar2[8] * puVar2[4] + cVar8));
                                            cVar8 = '\x01';
                                            uVar9 = auStack_50[0] & 3;
                                            auStack_50[0] = uVar9;
                                        }
                                        uVar10 = uVar10 + 1;
                                    } while (uVar10 < *(puVar2 + 0x1e));
                                    uVar11 = uVar12;
                                    cStack0000000000000028 = cVar8;
                                }
                            }
                        }
                        arg3_00 = 0xffff;
                        if ((*(puVar2 + 2) == 9) && (*(puVar2 + 0x1e) != 0)) {
                            puVar6 = *(puVar2 + 0x20);
                            if (*puVar6 == 1) {
                                if (cVar8 == '\x01') break;
                                cVar8 = cVar14 + '\b';
                                if (puVar2[1] == 0) {
                                    cVar8 = cVar14;
                                }
                                arg3_00 = CONCAT71(0xff,cVar8);
                                fcn.0002b438(arg4,auStack_50,arg3_00,
                                             CONCAT31(puVar2[8] * puVar2[4] >> 8,puVar2[8] * puVar2[4] + cVar8));
                                cVar8 = '\x01';
                                cStack0000000000000028 = '\x01';
                                uVar9 = auStack_50[0];
                            }
                        }
                        if (*(puVar2 + 2) == 1) {
                            if (*(puVar2 + 0x1e) != 0) {
                                uVar10 = 0;
                                if (*(puVar2 + 0x1e) != 0) {
                                    bVar5 = bVar4;
                                    do {
                                        if (*(*(puVar2 + 0x20) + uVar10 * 2) == 0x30) {
                                            if (bVar3) break;
                                            cVar7 = puVar2[8] * uVar10 + cVar14;
                                            cVar8 = cVar7 + '\b';
                                            if (puVar2[1] == 0) {
                                                cVar8 = cVar7;
                                            }
                                            arg3_00 = CONCAT71(arg3_00 >> 8,cVar8);
                                            fcn.0002b438(arg4,&uStack_4e,arg3_00,cVar8 + puVar2[8]);
                                            uStack_56 = *(puVar2 + 0x10);
                                            bVar3 = true;
                                        }
                                        if (*(*(puVar2 + 0x20) + uVar10 * 2) == 0x31) {
                                            if (bVar4) break;
                                            uStack_54 = *(puVar2 + 0x10);
                                            cVar7 = puVar2[8] * uVar10 + cVar14;
                                            cVar8 = cVar7 + '\b';
                                            if (puVar2[1] == 0) {
                                                cVar8 = cVar7;
                                            }
                                            arg3_00 = CONCAT71(arg3_00 >> 8,cVar8);
                                            fcn.0002b438(arg4,&uStack_4e + 2,arg3_00,cVar8 + puVar2[8]);
                                            bVar4 = true;
                                            bVar5 = true;
                                        }
                                        uVar10 = uVar10 + 1;
                                    } while (uVar10 < *(puVar2 + 0x1e));
                                    bVar4 = bVar5;
                                    cVar8 = cStack0000000000000028;
                                    uVar9 = auStack_50[0];
                                    uVar11 = uVar12;
                                }
                            }
                        }
                    }
                    puVar6 = NULL;
                    cVar14 = cVar14 + puVar2[8] * puVar2[4];
                }
            }
            uVar12 = uVar11 + 1;
            uVar13 = uVar12;
        } while (uVar12 < *(arg2 + 0x118));
        if ((((uVar9 != 0) || (uStack_4e != 0)) || (uStack_4e._2_2_ != 0)) && (puVar6 = *0x39420, (**0x39420 & 2) != 0)
           ) {
            *(arg2 + 0x160) = uStack_56;
            puVar6 = uStack_54;
            *(arg2 + 0x162) = uStack_54;
            *(arg2 + 0x159) = uVar9;
            *(arg2 + 0x15a) = uStack_4e;
            *(arg2 + 0x15c) = uStack_4e._2_2_;
            *(arg2 + 0x15e) = 0;
        }
    }
    return puVar6 & 0xffffffffffffff00;
}


/* fcn.0002b4ec @ 0x2b4ec */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

uint64_t fcn.0002b4ec(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int8_t arg_60h)

{
    bool bVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    uint8_t *puVar6;
    char cVar7;
    char cVar8;
    uint32_t uVar9;
    uint8_t *puVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    uint32_t uVar14;
    uint8_t *puVar15;
    int64_t arg3_00;
    uint8_t uVar16;
    uint8_t uVar17;
    char cVar18;
    uint8_t uVar19;
    char cVar20;
    uint16_t uVar21;
    char cStack0000000000000028;
    int8_t var_40h;
    int64_t var_48h;
    int8_t var_50h;
    uint8_t uStack_50;
    uchar uStack_4f;
    uchar uStack_4e;
    uchar uStack_4d;
    int16_t iStack_4c;
    int16_t iStack_4a;
    uchar uStack_48;
    int8_t var_20h;
    int8_t var_1fh;
    int64_t var_18h;
    int8_t var_10h;
    
    puVar6 = fcn.0002bd04(0x410,4);
    if ((puVar6 < 0) && (puVar6 != 0x8000000000000015)) goto code_r0x0002b924;
    bVar1 = false;
    bVar2 = false;
    bVar4 = false;
    cVar18 = '\0';
    bVar3 = false;
    uVar11 = 0;
    cStack0000000000000028 = '\0';
    puVar6 = *0x39420;
    if ((*0x39420)[0x754] != 0) goto code_r0x0002b924;
    puVar10 = &uStack_50;
    fcn.00011040(puVar10,10);
    if ((*(arg2 + 0x110) & 1) == 0) {
        iStack_4c = *(arg4 + 1);
        puVar6 = *(arg4 + 2);
        iStack_4a = *(arg4 + 2);
    }
    else {
        uVar19 = 0;
        puVar6 = NULL;
        bVar4 = false;
        bVar5 = false;
        if (*(arg2 + 0x118) != '\0') {
            do {
                bVar2 = bVar5;
                bVar1 = bVar4;
                puVar10 = puVar6;
                iVar13 = 0;
                arg3_00 = 0;
                uVar16 = puVar10;
                puVar6 = *(*(arg2 + 0x120) + puVar10 * 8);
                if (((*puVar6 & 0x10) != 0) && ((uVar17 = puVar6[1], uVar17 == 0 || (uVar17 == *arg4)))) {
                    cVar20 = uVar11;
                    if ((*puVar6 & 1) == 0) {
                        if (((*(puVar6 + 2) == 9) && (*(puVar6 + 0x1e) != 0)) && (**(puVar6 + 0x20) == 1)) {
                            bVar1 = true;
                            uVar12 = uVar11 + 8U & 0xff;
                            if (uVar17 == 0) {
                                uVar12 = uVar11;
                            }
                            uStack_50 = *((uVar12 >> 3) + arg4);
                        }
                        if (*(puVar6 + 2) == 1) {
                            if (*(puVar6 + 0x1e) != 0) {
                                uVar11 = 0;
                                if (*(puVar6 + 0x1e) != 0) {
                                    do {
                                        cVar18 = uVar11;
                                        if (*(*(puVar6 + 0x20) + uVar11 * 2) == 0x30) {
                                            bVar2 = true;
                                            cVar7 = puVar6[8] * cVar18 + cVar20;
                                            cVar8 = cVar7 + '\b';
                                            if (puVar6[1] == 0) {
                                                cVar8 = cVar7;
                                            }
                                            arg3_00 = CONCAT71(arg3_00 >> 8,cVar8);
                                            iVar13 = CONCAT71(iVar13 >> 8,cVar8 + puVar6[8]);
                                            uStack_48 = 0x30;
                                            fcn.0002b940(arg4,&uStack_50,arg3_00,iVar13);
                                        }
                                        if (*(*(puVar6 + 0x20) + uVar11 * 2) == 0x31) {
                                            bVar3 = true;
                                            cVar7 = puVar6[8] * cVar18 + cVar20;
                                            cVar8 = cVar7 + '\b';
                                            if (puVar6[1] == 0) {
                                                cVar8 = cVar7;
                                            }
                                            arg3_00 = CONCAT71(arg3_00 >> 8,cVar8);
                                            iVar13 = CONCAT71(iVar13 >> 8,cVar8 + puVar6[8]);
                                            uStack_48 = 0x31;
                                            fcn.0002b940(arg4,&uStack_50,arg3_00,iVar13);
                                        }
                                        if (*(*(puVar6 + 0x20) + uVar11 * 2) == 0x38) {
                                            cStack0000000000000028 = '\x01';
                                            uVar14 = puVar6[8] * cVar18 + cVar20 >> 3;
                                            uVar9 = uVar14 + 1;
                                            if (puVar6[1] == 0) {
                                                uVar9 = uVar14;
                                            }
                                            uStack_4d = *(uVar9 + arg4);
                                        }
                                        uVar21 = uVar11 + 1;
                                        uVar11 = uVar21;
                                    } while (uVar21 < *(puVar6 + 0x1e));
                                    cVar18 = cStack0000000000000028;
                                    uVar16 = uVar19;
                                }
                            }
                        }
                    }
                    puVar10 = puVar6[8] * puVar6[4];
                    uVar11 = cVar20 + puVar6[8] * puVar6[4];
                }
                uVar19 = uVar16 + 1;
                puVar6 = uVar19;
                bVar4 = bVar1;
                bVar5 = bVar2;
            } while (uVar19 < *(arg2 + 0x118));
        }
        *arg4 = 0;
        puVar6 = *0x39420;
        if (bVar1) {
            *arg4 = uStack_50;
            puVar6 = *0x39420;
            (*0x39420)[0x755] = uStack_50;
        }
        else {
            *arg4 = (*0x39420)[0x755];
        }
        puVar10 = puVar10 & 0xffffffffffffff00;
        if (bVar2) {
            puVar6 = CONCAT71(puVar6 >> 8,uStack_4f);
            *(arg4 + 1) = uStack_4f;
        }
        if (bVar3) {
            puVar6 = CONCAT71(puVar6 >> 8,uStack_4e);
            *(arg4 + 2) = uStack_4e;
        }
        bVar4 = bVar3;
        if (cVar18 == '\x01') {
            puVar6 = CONCAT71(puVar6 >> 8,uStack_4d);
            *(arg4 + 3) = uStack_4d;
        }
    }
    if (((*(arg2 + 0x110) & 1) == 0) && (puVar6 = 0x2000, (*(arg2 + 0x7c) & 0x2000) != 0)) {
        arg4 = arg4 + 1;
    }
    if ((((*(*0x39420 + 0x6c9) & 0x1000000) == 0) && (-1 < *(arg2 + 0x7c))) &&
       ((!bVar1 && (((!bVar2 && (!bVar4)) && (cVar18 == '\0')))))) goto code_r0x0002b924;
    if ((**0x39420 & 2) != 0) {
        (*0x39420)[0x687] = *arg4;
        *(*0x39420 + 0x688) = *(*0x39420 + 0x688) + iStack_4c;
        *(*0x39420 + 0x68c) = *(*0x39420 + 0x68c) + iStack_4a;
        puVar6 = *(arg4 + 3);
        *(*0x39420 + 0x690) = *(*0x39420 + 0x690) + *(arg4 + 3);
        goto code_r0x0002b924;
    }
    puVar6 = 0x410;
    if (((*0x410 & 4) == 0) || (*0x2e7c8 == 0)) goto code_r0x0002b924;
    uVar11 = CONCAT71(puVar10 >> 8,*arg4) & 0xffffffffffffff07;
    uVar19 = *(arg4 + 1);
    uVar12 = uVar11 | 8;
    uVar16 = -*(arg4 + 2);
    if (0x7f < uVar19) {
        uVar12 = CONCAT71(uVar11 >> 8,uVar12) | 0x10;
    }
    if (0x7f < uVar16) {
        uVar12 = uVar12 | 0x20;
    }
    if (((*0x39420)[0x6c6] == 0) && ((**0x39420 & 8) == 0)) goto code_r0x0002b924;
    puVar6 = *(*0x2e7c0 + 0x52);
    uVar17 = (((*0x39420)[0x6a0] & 0x10) != 0) + 3;
    puVar10 = *(*0x2e7c0 + 0x5a);
    puVar15 = *0x39420;
    if (puVar10 == puVar6) {
code_r0x0002b8ee:
        fcn.00015f00(uVar12);
        iVar13 = CONCAT71(uVar12 >> 8,uVar19);
        fcn.00015f00(iVar13);
        fcn.00015f00(CONCAT71(iVar13 >> 8,uVar16));
        if (((*0x39420)[0x6a0] & 0x10) != 0) {
            fcn.00015f00(0);
        }
    }
    else {
        if (*0x39420 + 0x6a0 < puVar6 + uVar17) {
            puVar6 = *0x39420 + 0x694;
        }
        if ((puVar10 < puVar6) || (puVar6 + uVar17 < puVar10)) goto code_r0x0002b8ee;
    }
    puVar6 = fcn.00014c7c(0,CONCAT71(puVar15 >> 8,2));
code_r0x0002b924:
    return puVar6 & 0xffffffffffffff00;
}


/* fcn.00017510 @ 0x17510 */

uint64_t fcn.00017510(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    bool bVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t *puVar4;
    int64_t *piVar5;
    uint8_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uchar *puVar9;
    char *pcVar10;
    int iVar11;
    int64_t iVar12;
    int64_t iVar13;
    char cVar14;
    uint8_t *puVar15;
    uint8_t uVar16;
    int16_t iVar17;
    uint64_t uVar18;
    uint16_t uVar19;
    int16_t iVar20;
    uint32_t *puVar21;
    int64_t iVar22;
    uint32_t *puVar23;
    char cStack0000000000000028;
    unkbyte3 Stack0000000000000029;
    uint8_t auStack_58 [32];
    
    _cStack0000000000000028 = _cStack0000000000000028 & 0xffffff00;
    iVar11 = 0;
    uVar18 = 0;
    puVar21 = (*(*0x39420 + 0x5ae) << 0xc) + *(*0x2e7c0 + 0x12);
    puVar4 = fcn.00011080(auStack_58,0x20,0);
    iVar13 = 8;
    if ((*(arg2 + 0x110) & 1) != 0) {
        uVar6 = *(arg2 + 0x118);
        puVar23 = NULL;
        if (uVar6 == 0) goto code_r0x00017a70;
        iVar12 = *(arg2 + 0x120);
        do {
            uVar3 = 0;
            puVar15 = *(iVar12 + puVar23 * 8);
            puVar4 = puVar23;
            if (puVar15 < *(*0x2e7c0 + 0x12)) goto code_r0x00017a70;
            puVar4 = puVar15 + 0x30;
            if (puVar21 < puVar4) goto code_r0x00017a70;
            if ((*puVar15 & 0x10) != 0) {
                uVar16 = puVar15[1];
                if ((uVar16 == 0) || (uVar16 == *arg4)) {
                    if (((*puVar15 & 1) == 0) && (*(puVar15 + 2) == 7)) {
                        _cStack0000000000000028 = CONCAT31(Stack0000000000000029,1);
                        uVar19 = 0;
                        iVar2 = iVar11 + 8;
                        if (uVar16 == 0) {
                            iVar2 = iVar11;
                        }
                        iVar11 = iVar2;
                        if (*(puVar15 + 4) != 0) {
                            do {
                                uVar3 = uVar3 * puVar15[8] + iVar11;
                                uVar16 = *((uVar3 >> 3) + arg4) >> (uVar3 & 7) & ('\x01' << (puVar15[8] & 0x1f)) - 1U;
                                if ((*(puVar15 + 0xc) <= uVar16) &&
                                   (uVar16 < *(puVar15 + 0x10) || uVar16 == *(puVar15 + 0x10))) {
                                    uVar7 = *(puVar15 + 0x20);
                                    if ((uVar7 != 0) &&
                                       ((puVar4 = *0x2e7c0, uVar7 < *(*0x2e7c0 + 0x12) ||
                                        (puVar4 = uVar7 + 2, puVar21 < puVar4)))) goto code_r0x00017a70;
                                    if ((*puVar15 & 2) == 0) {
                                        if (uVar7 != 0) {
                                            uVar16 = *(uVar7 + (uVar16 - *(puVar15 + 0xc)) * 2);
                                        }
                                    }
                                    else {
                                        if (uVar16 == 0) goto code_r0x000176e7;
                                        if (uVar7 != 0) {
                                            uVar16 = *(uVar7 + uVar19 * 2);
                                        }
                                    }
                                    if ((uVar16 != 0) && (uVar18 < 0x20)) {
                                        auStack_58[uVar18] = uVar16;
                                        uVar18 = uVar18 + 1;
                                    }
                                }
code_r0x000176e7:
                                uVar19 = uVar19 + 1;
                                uVar3 = uVar19;
                            } while (uVar19 < *(puVar15 + 4));
                        }
                        if (puVar15[1] != 0) {
                            iVar11 = iVar11 + -8;
                        }
                    }
                    puVar4 = puVar15[8] * *(puVar15 + 4);
                    iVar11 = iVar11 + puVar15[8] * *(puVar15 + 4);
                }
                iVar12 = *(arg2 + 0x120);
            }
            uVar16 = puVar23 + 1;
            puVar23 = uVar16;
        } while (uVar16 < uVar6);
        puVar4 = CONCAT71(puVar4 >> 8,cStack0000000000000028);
        if (cStack0000000000000028 == '\0') goto code_r0x00017a70;
        fcn.00011040(arg4,8);
        if (uVar18 != 0) {
            puVar15 = auStack_58;
            uVar7 = 0;
            do {
                uVar6 = *puVar15;
                uVar8 = uVar7;
                if (uVar6 + 0x20 < 8) {
                    *arg4 = *arg4 | 1 << (uVar6 - 0xe0 & 0x1f);
                }
                else if (uVar7 < 6) {
                    uVar8 = uVar7 + 1;
                    *(uVar7 + 2 + arg4) = uVar6;
                }
                puVar15 = puVar15 + 1;
                uVar18 = uVar18 - 1;
                uVar7 = uVar8;
            } while (uVar18 != 0);
        }
    }
    bVar1 = false;
    iVar22 = 6;
    iVar12 = 0;
    if (*0x2e7f0 != 0) {
        piVar5 = 0x2e7f0;
        do {
            puVar4 = (**piVar5)(arg2,arg4);
            if (puVar4 != '\0') goto code_r0x00017a70;
            iVar12 = iVar12 + 1;
            piVar5 = iVar12 * 8 + 0x2e7f0;
        } while (*piVar5 != 0);
    }
    if ((*0x39420)[0x1d5] != 0) {
        puVar4 = *0x39420;
        if (((**0x39420 & 2) == 0) || (*(*0x39420 + 0x752) == 0)) goto code_r0x00017a70;
        fcn.00011040(arg4,8);
    }
    uVar18 = 0;
    cVar14 = '\b';
    *(*0x2e7c0 + 0x3a) = arg2;
    do {
        if (*(uVar18 + arg4) != '\0') break;
        uVar6 = uVar18 + 1;
        uVar18 = uVar6;
        cVar14 = cVar14 + -1;
    } while (uVar6 < 8);
    if ((**0x39420 & 2) == 0) {
        if (cVar14 != '\0') {
            *(*0x39420 + 0x753) = 1;
            goto code_r0x00017896;
        }
code_r0x0001787f:
        *(*0x39420 + 0x753) = 0;
    }
    else {
        if (cVar14 != '\0') {
            *(*0x39420 + 0x752) = 1;
            goto code_r0x0001787f;
        }
code_r0x00017896:
        *(*0x39420 + 0x752) = 0;
    }
    puVar4 = *0x39420;
    iVar20 = 0;
    iVar12 = 8;
    puVar15 = arg4;
    iVar17 = iVar20;
    do {
        uVar6 = *puVar15;
        puVar15 = puVar15 + 1;
        iVar17 = iVar17 + uVar6;
        iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    puVar9 = 0x38dc8;
    iVar12 = 8;
    puVar15 = 0x38dc8;
    do {
        uVar6 = *puVar15;
        puVar15 = puVar15 + 1;
        iVar20 = iVar20 + uVar6;
        iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    uVar18 = 0;
    do {
        uVar6 = uVar18;
        if (*(uVar18 + arg4) != *(uVar18 + 0x38dc8)) break;
        uVar6 = uVar6 + 1;
        uVar18 = uVar6;
    } while (uVar6 < 8);
    if ((((uVar6 != 8) && (iVar17 != 0)) && (iVar20 != 0)) && ((*0x38dc8 != *arg4 && (*0x38dca == *(arg4 + 2))))) {
        bVar1 = true;
    }
    if ((((*(*0x39420 + 0x6c9) & 0x800000) == 0) || (uVar6 != 8)) || (*0x2e7e8 == '\0')) {
        do {
            *puVar9 = puVar9[arg4 + -0x38dc8];
            puVar9 = puVar9 + 1;
            iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        if (bVar1) {
            *(arg4 + 2) = 0;
            *(arg4 + 6) = 0;
            puVar4 = *0x39420;
        }
        if ((((*puVar4 & 2) != 0) && (*(puVar4 + 0x753) == 0)) || (*(puVar4 + 0x752) != 0)) {
            if (cVar14 == '\0') {
                *(puVar4 + 0x752) = 0;
            }
            puVar4 = fcn.00017d20(arg2,arg4);
            goto code_r0x00017a70;
        }
        if (cVar14 == '\0') {
            *(puVar4 + 0x753) = 0;
            puVar4 = *0x39420;
        }
        if ((*(puVar4 + 0x6c6) == 0) && ((*puVar4 & 0x108) != 0x108)) {
            fcn.0002aefc(arg4);
        }
        else {
            if (*0x2e7a0 != 0) {
                (**(*0x2e7a0 + 8))(*0x2e7a0,&stack0x00000028);
                *(*0x39420 + 0x1a1) = (_cStack0000000000000028 != 1) - 1U & 0x40;
            }
            fcn.00016294(arg2,arg4);
            if ((**0x39420 & 0x10) != 0) {
                pcVar10 = arg4 + 2;
                puVar4 = *0x39420;
                do {
                    if (*pcVar10 == '9') {
                        *(puVar4 + 0x669) = *(puVar4 + 0x669) ^ 0x20;
code_r0x00017a36:
                        puVar4 = *0x39420;
                    }
                    else {
                        if (*pcVar10 == 'G') {
                            *(puVar4 + 0x669) = *(puVar4 + 0x669) ^ 0x40;
                            goto code_r0x00017a36;
                        }
                        if (*pcVar10 == 'S') {
                            *(puVar4 + 0x669) = *(puVar4 + 0x669) ^ 0x10;
                            goto code_r0x00017a36;
                        }
                    }
                    pcVar10 = pcVar10 + 1;
                    iVar22 = iVar22 + -1;
                } while (iVar22 != 0);
            }
            fcn.00016cf0();
        }
    }
    puVar4 = fcn.00017a8c(arg1);
code_r0x00017a70:
    return puVar4 & 0xffffffffffffff00;
}


/* fcn.0002ae28 @ 0x2ae28 */

void fcn.0002ae28(uint32_t arg1)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uint16_t uVar5;
    uint8_t *puVar6;
    int64_t iVar7;
    uint8_t uVar8;
    uint in_register_0000000c;
    
    uVar8 = arg1;
    if (uVar8 == 0x2c) {
        uVar5 = 0x3920;
    }
    else {
        puVar6 = 0x2e350;
        iVar7 = *0x2e358;
        while (iVar7 != 0) {
            if ((*puVar6 <= uVar8) && (uVar8 <= puVar6[1])) {
                uVar5 = (**(puVar6 + 8))(CONCAT71(CONCAT44(in_register_0000000c,arg1) >> 8,uVar8 - *puVar6));
                if ((*0x38dc6 & 0x10) != 0) {
                    uVar5 = uVar5 & 0xff00;
                }
                goto code_r0x0002ae81;
            }
            iVar7 = *(puVar6 + 0x18);
            puVar6 = puVar6 + 0x10;
        }
        uVar5 = 0;
code_r0x0002ae81:
        if (uVar5 == 0) {
            return;
        }
    }
    iVar7 = fcn.0002bd04(0x400,0x100);
    uVar4 = *0x482;
    uVar3 = *0x480;
    uVar2 = *0x41c;
    uVar1 = *0x41a;
    if ((-1 < iVar7) || (iVar7 == -0x7fffffffffffffeb)) {
        *(*0x41c + 0x400) = uVar5;
        uVar5 = uVar2 + 2;
        if (uVar4 <= uVar2 + 2) {
            uVar5 = uVar3;
        }
        if (uVar5 != uVar1) {
            *0x41c = uVar5;
        }
    }
    return;
}


/* fcn.0002ac48 @ 0x2ac48 */

void fcn.0002ac48(void)

{
    int64_t arg1;
    int64_t iVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    
    iVar1 = fcn.0002bd04(0x497,1);
    if ((-1 < iVar1) || (iVar1 == -0x7fffffffffffffeb)) {
        uVar2 = *0x38dc6 >> 1 & 1;
        if ((*0x38dc6 & 4) != 0) {
            uVar2 = uVar2 | 2;
        }
        if ((*0x38dc6 & 1) != 0) {
            uVar2 = uVar2 | 4;
        }
        uVar3 = 0;
        *0x497 = (*0x497 ^ *0x38dc6) & 7 ^ *0x497;
        iVar1 = *0x39420;
        if (*(*0x39420 + 0x717) != '\0') {
            do {
                arg1 = *(*(*0x2e7c0 + 0x4a) + uVar3 * 8);
                if (arg1 != 0) {
                    fcn.00017ac0(arg1,uVar2);
                    iVar1 = *0x39420;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < *(iVar1 + 0x717));
        }
    }
    return;
}


/* fcn.0002ad10 @ 0x2ad10 */

void fcn.0002ad10(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    uint8_t uVar7;
    
    uVar7 = ((*arg1 & 0x11) != 0) << 3;
    uVar3 = ((*arg1 & 0x44) != 0) << 4;
    *0x38dc6 = uVar3 | ((*arg1 & 0x22) != 0) << 5 | uVar7 | *0x38dc6 & 199;
    if ((uVar3 | uVar7) == 0x18) {
        uVar5 = 2;
        do {
            if (((*(uVar5 + arg1) == 'L') || (*(uVar5 + arg1) == 'c')) && ((**0x39420 & 2) == 0)) {
                uVar4 = 0;
                uVar5 = *(*0x2e820 + 0x98);
                if (uVar5 == 0) goto code_r0x0002adec;
                piVar6 = *(*0x2e820 + 0xa0);
                goto code_r0x0002add5;
            }
            uVar3 = uVar5 + 1;
            uVar5 = uVar3;
        } while (uVar3 < 6);
    }
    return;
    while( true ) {
        uVar4 = uVar4 + 1;
        piVar6 = piVar6 + 3;
        if (uVar5 <= uVar4) break;
code_r0x0002add5:
        if ((*piVar6 == 0x413e287f395c33fe) && (piVar6[1] == 0x3ed4e1c0888055a0)) break;
    }
code_r0x0002adec:
    if (((uVar4 != uVar5) && (iVar1 = *(*(*0x2e820 + 0xa0) + 0x10 + uVar4 * 0x18), iVar1 != 0)) &&
       (pcVar2 = *(iVar1 + 0x68), pcVar2 != NULL)) {
        (*pcVar2)(1,0,0,0);
    }
    out(0xcf9,6);
    do {
    //WARNING: Do nothing block with infinite loop
    } while( true );
}


/* fcn.0002b438 @ 0x2b438 */

void fcn.0002b438(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint32_t *arg2_00;
    uint8_t uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint32_t auStackX_18 [4];
    uint16_t in_stack_00000028;
    
    auStackX_18[0] = 0;
    uVar3 = arg4 - arg3;
    uVar1 = uVar3 >> 3;
    uVar2 = uVar1 + 1;
    if ((uVar3 & 7) == 0) {
        uVar2 = uVar1;
    }
    if (uVar2 - 1 < 4) {
        arg2_00 = ((arg3 & 0xffU) >> 3) + arg1;
        uVar4 = 0;
        if ((uVar2 != 0) && (uVar4 = 0, auStackX_18 != arg2_00)) {
            section..text(auStackX_18,arg2_00,uVar2);
            uVar4 = auStackX_18[0];
        }
        uVar2 = arg4 & 7;
        if ((arg3 & 7U) != 0) {
            uVar4 = uVar4 >> (arg3 & 7);
        }
        if ((arg4 & 7U) != 0) {
            uVar4 = (uVar4 << uVar2) >> uVar2;
        }
        if (in_stack_00000028 < uVar4) {
            uVar4 = uVar4 & in_stack_00000028;
        }
        *arg2 = uVar4;
    }
    return;
}


/* fcn.0002b940 @ 0x2b940 */

void fcn.0002b940(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint16_t *arg2_00;
    uint8_t uVar3;
    uint16_t uVar4;
    uint16_t auStackX_18 [4];
    int64_t in_stack_00000028;
    
    auStackX_18[0] = 0;
    if ((*(in_stack_00000028 + 0x14) == 0) && (*(in_stack_00000028 + 0x18) == 0)) {
        *(in_stack_00000028 + 0x14) = *(in_stack_00000028 + 0x10);
        *(in_stack_00000028 + 0x18) = *(in_stack_00000028 + 0xc);
    }
    uVar2 = arg4 - arg3;
    uVar1 = (uVar2 >> 3) + 1;
    if ((uVar2 & 7) == 0) {
        uVar1 = uVar2 >> 3;
    }
    if (uVar1 == '\x01' || uVar1 == '\x02') {
        arg2_00 = ((arg3 & 0xffU) >> 3) + arg1;
        uVar4 = 0;
        if ((uVar1 != 0) && (auStackX_18 != arg2_00)) {
            section..text(auStackX_18,arg2_00,uVar1);
            uVar4 = auStackX_18[0];
        }
        uVar3 = arg4 & 7;
        if ((arg3 & 7U) != 0) {
            uVar4 = uVar4 >> (arg3 & 7);
        }
        if ((arg4 & 7U) != 0) {
            uVar4 = (uVar4 << uVar3) >> uVar3;
        }
        if (*(in_stack_00000028 + 0x10) < uVar4) {
            uVar4 = uVar4 | -1LL << (uVar2 & 0x3f);
        }
        if (*(arg2 + 8) == '0') {
            *(arg2 + 4) = uVar4;
            *(arg2 + 1) = uVar4;
        }
        if (*(arg2 + 8) == '1') {
            *(arg2 + 6) = uVar4;
            *(arg2 + 2) = uVar4;
        }
    }
    return;
}


/* fcn.00015f00 @ 0x15f00 */

void fcn.00015f00(int64_t arg1)

{
    **(*0x2e7c0 + 0x52) = arg1;
    *(*0x2e7c0 + 0x52) = *(*0x2e7c0 + 0x52) + 1;
    if (*(*0x2e7c0 + 0x52) == *0x39420 + 0x6a0) {
        *(*0x2e7c0 + 0x52) = *0x39420 + 0x694;
    }
    return;
}


/* fcn.000114f8 @ 0x114f8 */

ulong fcn.000114f8(void)

{
    char *pcVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ulong uVar4;
    ulong uStackX_8;
    
    uVar4 = 0x38f80;
    if ((*(*0x39420 + 0x6c9) & 1) == 0) {
        iVar2 = *0x39420;
        fcn.00015a8c(0x38f80);
    }
    else {
        fcn.0001dcf8();
        iVar2 = *0x39420;
    }
    if ((*(iVar2 + 0x6c9) & 2) == 0) {
        fcn.00015a8c(0x39048);
    }
    else {
        fcn.000180c0(0x39048);
    }
    if ((*(iVar2 + 0x6c9) & 4) == 0) {
        fcn.00015a8c(0x39110);
    }
    else {
        fcn.00025668(0x39110);
    }
    if ((*(iVar2 + 0x6c9) & 8) == 0) {
        fcn.00015a8c(0x391d8);
    }
    else {
        fcn.00020494(0x391d8);
    }
    uStackX_8 = 0;
    *0x38bf8 = 0;
    *0x39410 = 0x114a8;
    *0x39418 = 0x114d8;
    *0x38be8 = 0x39420;
    *0x38bf0 = 0x2e7e0;
    *0x38c00 = 0x39410;
    *0x2e848 = uVar4;
    *0x38be0 = uVar4;
    (**(*0x2e820 + 0xa8))(&uStackX_8,0x2e060,0,0x38be0);
    if (*0x39420 == 0) {
        uVar4 = 0x8000000000000003;
    }
    else {
        if (*(*0x39420 + 0x6a1) != 0) {
            if (**(*0x39420 + 0x6a1) != 0) {
                *0x2e7d0 = **(*0x39420 + 0x6a1);
            }
            *0x2e7c0 = *(*0x39420 + 0x6a1);
        }
        if (*(*0x2e7c0 + 8) != 0) {
            *0x2e7e0 = *(*0x2e7c0 + 8);
        }
        piVar3 = 0x2e560;
        iVar2 = 0;
        pcVar1 = 0x392c0;
        do {
            if (iVar2 == 0x150) break;
            (**piVar3)(pcVar1);
            if (*(pcVar1 + 8) != NULL) {
                (**(pcVar1 + 8))();
            }
            if (*pcVar1 != '\0') {
                iVar2 = iVar2 + 0x30;
                pcVar1 = pcVar1 + 0x30;
                piVar3 = piVar3 + 1;
            }
        } while (*piVar3 != 0);
        piVar3 = 0x2e5b0;
        iVar2 = 0;
        pcVar1 = 0x39440;
        do {
            if (iVar2 == 0x150) break;
            (**piVar3)(pcVar1);
            if (*(pcVar1 + 8) != NULL) {
                (**(pcVar1 + 8))();
            }
            if (*pcVar1 != '\0') {
                iVar2 = iVar2 + 0x30;
                pcVar1 = pcVar1 + 0x30;
                piVar3 = piVar3 + 1;
            }
        } while (*piVar3 != 0);
        *(*0x39420 + 0x5ad) = 0;
        if (*0x2e7c0 != 0) {
            if (*(*0x2e7c0 + 0x3b2) == 0) {
                uVar4 = fcn.00014184(1);
                *(*0x2e7c0 + 0x3b2) = uVar4;
            }
            if (*(*0x2e7c0 + 0x3ba) == 0) {
                uVar4 = fcn.00014184(1);
                *(*0x2e7c0 + 0x3ba) = uVar4;
            }
        }
        *0x392a0 = 0x1e;
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.0002d72c @ 0x2d72c */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h

int64_t fcn.0002d72c(void)

{
    char *pcVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint8_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iStackX_8;
    ulong uStackX_10;
    uint64_t uStackX_18;
    int64_t var_28h_2;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    ulong *puStack_48;
    ulong uStack_40;
    uint auStack_38 [2];
    int64_t var_28h;
    int64_t var_20h;
    int32_t var_18h;
    int64_t var_10h;
    
    iVar3 = 0;
    uStackX_10 = 0;
    if ((*(*0x39420 + 0x6c9) & 0x1400) == 0x1400) {
        fcn.0002d5a4();
    }
    iVar2 = (**(*0x2e820 + 0xd0))(0x2e000,0,&puStack_48);
    if ((-1 < iVar2) && (iVar2 = (**(*0x2e818 + 0x140))(0x2e0e0,0,&iStackX_8), -1 < iVar2)) {
        uVar5 = 0;
        *(*0x39420 + 0x766) = *(iStackX_8 + 0x20);
        if (*(iStackX_8 + 8) != '\0') {
            iVar2 = *0x39420;
            iVar6 = iStackX_8;
            do {
                pcVar1 = *(*(iVar6 + 0x10) + uVar5 * 8);
                if (*pcVar1 == '\x10') {
                    if ((*(iVar2 + 0x6c9) & 1) != 0) {
                        iVar3 = 0x2c8a0;
                    }
code_r0x0002d83c:
                    if (iVar3 != 0) {
                        auStack_38[0] = 0;
                        var_28h = *(pcVar1 + 8);
                        iVar2 = (**puStack_48)(puStack_48,iVar3,auStack_38,&uStackX_10);
                        if (-1 < iVar2) {
                            *(pcVar1 + 0x10) = uStackX_10;
                        }
                        iVar2 = *0x39420;
                        iVar6 = iStackX_8;
                    }
                }
                else {
                    if (*pcVar1 == ' ') {
                        if ((*(iVar2 + 0x6c9) & 2) != 0) {
                            iVar3 = 0x2c8b4;
                        }
                        goto code_r0x0002d83c;
                    }
                    if (*pcVar1 == '0') {
                        if ((*(iVar2 + 0x6c9) & 4) != 0) {
                            iVar3 = 0x2c8c8;
                        }
                        goto code_r0x0002d83c;
                    }
                    if (*pcVar1 == '@') {
                        if ((*(iVar2 + 0x6c9) & 8) != 0) {
                            iVar3 = 0x2c8dc;
                        }
                        goto code_r0x0002d83c;
                    }
                    iVar3 = 0;
                }
                uVar4 = uVar5 + 1;
                uVar5 = uVar4;
            } while (uVar4 < *(iVar6 + 8));
            goto code_r0x0002d88f;
        }
    }
    iVar2 = *0x39420;
code_r0x0002d88f:
    uStack_40 = 0;
    var_28h_2 = 0;
    if (((((*(iVar2 + 0x6c9) & 8) != 0) && (*0x2e888 == '\0')) && (*0x2e888 = '\x01', *(iVar2 + 0x6cd) != '\0')) &&
       (iVar3 = (**(*0x2e820 + 0xd0))(0x2e050,0,&var_28h_2), -1 < iVar3)) {
        iVar2 = 0x6d8;
        iVar6 = 3;
        iVar3 = *0x39420;
        do {
            if (*(iVar2 + iVar3) != -1) {
                if ((*(iVar3 + 0x6c9) & 0x10) == 0) {
                    uStackX_18 = *(iVar2 + iVar3);
                }
                else {
                    uStackX_18 = 1LL << (*(iVar2 + iVar3) & 0x3f);
                }
                (**var_28h_2)(var_28h_2,0x2c8dc,&uStackX_18,&uStack_40);
                iVar3 = *0x39420;
            }
            iVar2 = iVar2 + 4;
            iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
    }
    iVar3 = (**(*0x2e820 + 0xd0))(0x2e488,0,&uStackX_18);
    if (iVar3 < 0) {
        iVar3 = (**(*0x2e820 + 0xc0))(0x2e488,fcn.0002d6e0,&var_28h_2);
    }
    else {
        fcn.0002d6e0(0,0,0);
    }
    return iVar3;
}


/* fcn.0002c820 @ 0x2c820 */

void fcn.0002c820(int64_t arg1)

{
    int64_t arg1_00;
    int64_t iVar1;
    uint8_t uVar2;
    
    if (*0x2e7b8 != '\x01') {
        iVar1 = fcn.0002d210();
        if (iVar1 < 0) {
            *0x2e7b8 = '\x01';
            *0x2e7d8 = 1;
        }
        else {
            uVar2 = 0;
            iVar1 = *0x2e7c0;
            if (*(*0x2e7c0 + 0x10) != '\0') {
                do {
                    arg1_00 = *(*0x2e7e0 + uVar2 * 8);
                    if (((arg1_00 != 0) && ((*(arg1_00 + 0x58) & 0xc) == 0xc)) && (*(arg1_00 + 1) == arg1)) {
                        fcn.0002bec8(arg1_00);
                        iVar1 = *0x2e7c0;
                    }
                    uVar2 = uVar2 + 1;
                } while (uVar2 < *(iVar1 + 0x10));
            }
        }
    }
    return;
}


/* fcn.0002cc28 @ 0x2cc28 */

int64_t fcn.0002cc28(void)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint16_t uVar5;
    uint16_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    
    uVar7 = 0;
    iVar2 = **0x2e868;
    iVar4 = **0x2e860;
    if (**0x2e870 == '\0') {
        if (*0x2e830 == NULL) {
            return -0x7ffffffffffffff1;
        }
        iVar3 = (***0x2e830)(iVar4,0x92f);
    }
    else {
        if (*0x2e830 == NULL) {
            return -0x7ffffffffffffff1;
        }
        iVar3 = (*(*0x2e830)[2])(iVar4,0x92f);
    }
    if (iVar3 < 0) {
        return iVar3;
    }
    if (**0x2e870 == '\0') {
        if (*0x2e830 == NULL) {
            return -0x7ffffffffffffff1;
        }
        iVar3 = (***0x2e830)(iVar2,0x3da);
    }
    else {
        if (*0x2e830 == NULL) {
            return -0x7ffffffffffffff1;
        }
        iVar3 = (*(*0x2e830)[2])(iVar2,0x3da);
    }
    if (iVar3 < 0) {
        return iVar3;
    }
    if (*0x2e830 != NULL) {
        iVar3 = (***0x2e830)(*(iVar2 + 0x12),*(iVar4 + 0x5ae) << 0xc);
        if (iVar3 < 0) {
            return iVar3;
        }
        if (*0x2e830 != NULL) {
            iVar3 = (***0x2e830)(*(iVar2 + 0x1a),(*(iVar4 + 0x5ae) & 0xfffff) << 4);
            if (iVar3 < 0) {
                return iVar3;
            }
            if (*0x2e830 != NULL) {
                iVar3 = (***0x2e830)(*(iVar2 + 0x62),0x400);
                if (iVar3 < 0) {
                    return iVar3;
                }
                if (*0x2e830 != NULL) {
                    iVar3 = (***0x2e830)(*(iVar2 + 0x6a),0x10000);
                    if (iVar3 < 0) {
                        return iVar3;
                    }
                    if (*0x2e830 != NULL) {
                        iVar3 = (***0x2e830)(*(iVar2 + 0x3a2),0x2e);
                        if (iVar3 < 0) {
                            return iVar3;
                        }
                        if (*0x2e830 != NULL) {
                            iVar3 = (***0x2e830)(*(iVar2 + 0x3aa),0x31);
                            if (iVar3 < 0) {
                                return iVar3;
                            }
                            if (*0x2e830 != NULL) {
                                iVar3 = (***0x2e830)(*(iVar2 + 0x39a),*(iVar4 + 0x767) << 4);
                                if (iVar3 < 0) {
                                    return iVar3;
                                }
                                if (*0x2e830 != NULL) {
                                    iVar3 = (***0x2e830)(*(iVar2 + 0x42),*(iVar4 + 0x716) * 0x1c0);
                                    if (iVar3 < 0) {
                                        return iVar3;
                                    }
                                    if (*0x2e830 != NULL) {
                                        iVar4 = (***0x2e830)(*(iVar2 + 0x4a),*(iVar4 + 0x717) << 3);
                                        if (iVar4 < 0) {
                                            return iVar4;
                                        }
                                        if (*(iVar2 + 0x3b2) != 0) {
                                            if (*0x2e830 == NULL) {
                                                return -0x7ffffffffffffff1;
                                            }
                                            iVar4 = (***0x2e830)(*(iVar2 + 0x3b2),4);
                                            if (iVar4 < 0) {
                                                return iVar4;
                                            }
                                        }
                                        if (*(iVar2 + 0x3ba) != 0) {
                                            if (*0x2e830 == NULL) {
                                                return -0x7ffffffffffffff1;
                                            }
                                            iVar4 = (***0x2e830)(*(iVar2 + 0x3ba),4);
                                            if (iVar4 < 0) {
                                                return iVar4;
                                            }
                                        }
                                        uVar8 = uVar7;
                                        uVar9 = uVar7;
                                        if (*(iVar2 + 0x10) != '\0') {
                                            do {
                                                iVar4 = *(*(iVar2 + 8) + uVar9 * 8);
                                                if (iVar4 != 0) {
                                                    if (**0x2e870 == '\0') {
                                                        if (*0x2e830 == NULL) {
                                                            return -0x7ffffffffffffff1;
                                                        }
                                                        iVar3 = (***0x2e830)(iVar4,0xd8);
                                                    }
                                                    else {
                                                        if (*0x2e830 == NULL) {
                                                            return -0x7ffffffffffffff1;
                                                        }
                                                        iVar3 = (*(*0x2e830)[2])(iVar4,0xd8);
                                                    }
                                                    if (iVar3 < 0) {
                                                        return iVar3;
                                                    }
                                                    if ((*(iVar4 + 0x58) & 9) != 0) {
                                                        cVar1 = *(iVar4 + 1);
                                                        if (cVar1 == '\x10') {
                                                            uVar8 = 0x1000;
code_r0x0002cf5a:
                                                            if (uVar8 != 0) goto code_r0x0002cf5f;
                                                        }
                                                        else {
                                                            if (cVar1 == ' ') {
                                                                uVar8 = 0x100;
                                                            }
                                                            else {
                                                                if (cVar1 != '0') {
                                                                    if (cVar1 != '@') goto code_r0x0002cf5a;
                                                                    uVar8 = uVar7;
                                                                    goto code_r0x0002cf7d;
                                                                }
                                                                uVar8 = 0x1000;
                                                            }
code_r0x0002cf5f:
                                                            if (*0x2e830 == NULL) {
                                                                return -0x7ffffffffffffff1;
                                                            }
                                                            iVar3 = (***0x2e830)(*(iVar4 + 0x10),uVar8);
                                                            if (iVar3 < 0) {
                                                                return iVar3;
                                                            }
                                                        }
code_r0x0002cf7d:
                                                        iVar3 = *(iVar4 + 0xa0);
                                                        if (iVar3 != 0) {
                                                            if (((**0x39420 & 0x1000000) == 0) || (*(iVar4 + 0xa8) == 0)
                                                               ) {
                                                                if (*0x2e830 == NULL) {
                                                                    return -0x7ffffffffffffff1;
                                                                }
                                                            }
                                                            else {
                                                                iVar3 = (*(iVar4 + 0x10) - *(iVar4 + 0xa8)) + iVar3;
                                                                if (*0x2e830 == NULL) {
                                                                    return -0x7ffffffffffffff1;
                                                                }
                                                            }
                                                            iVar3 = (***0x2e830)(iVar3,0x20000);
                                                            if (iVar3 < 0) {
                                                                return iVar3;
                                                            }
                                                        }
                                                        iVar4 = *(iVar4 + 0x60);
                                                        if (iVar4 != 0) {
                                                            if (**0x2e870 == '\0') {
                                                                if (*0x2e830 == NULL) {
                                                                    return -0x7ffffffffffffff1;
                                                                }
                                                                iVar3 = (***0x2e830)(iVar4,0x218);
                                                            }
                                                            else {
                                                                if (*0x2e830 == NULL) {
                                                                    return -0x7ffffffffffffff1;
                                                                }
                                                                iVar3 = (*(*0x2e830)[2])(iVar4,0x218);
                                                            }
                                                            if (iVar3 < 0) {
                                                                return iVar3;
                                                            }
                                                            if (*0x2e830 == NULL) {
                                                                return -0x7ffffffffffffff1;
                                                            }
                                                            iVar3 = (*(*0x2e830)[1])(*(iVar4 + 0x28),0x3c);
                                                            if (iVar3 < 0) {
                                                                return iVar3;
                                                            }
                                                            if (*0x2e830 == NULL) {
                                                                return -0x7ffffffffffffff1;
                                                            }
                                                            iVar3 = (*(*0x2e830)[1])(*(iVar4 + 0x30),0x40);
                                                            if (iVar3 < 0) {
                                                                return iVar3;
                                                            }
                                                            if (*(iVar4 + 0x200) != 0) {
                                                                if (*0x2e830 == NULL) {
                                                                    return -0x7ffffffffffffff1;
                                                                }
                                                                iVar3 = (***0x2e830)(*(iVar4 + 0x58),
                                                                                     *(iVar4 + 0x200) * 0xc);
                                                                if (iVar3 < 0) {
                                                                    return iVar3;
                                                                }
                                                            }
                                                            if (*0x2e830 == NULL) {
                                                                return -0x7ffffffffffffff1;
                                                            }
                                                            iVar3 = (***0x2e830)(*(iVar4 + 0x80),0x6400);
                                                            if (iVar3 < 0) {
                                                                return iVar3;
                                                            }
                                                            if (*0x2e830 == NULL) {
                                                                return -0x7ffffffffffffff1;
                                                            }
                                                            iVar3 = (***0x2e830)(*(iVar4 + 0xd8),*(iVar4 + 0xc) << 10);
                                                            if (iVar3 < 0) {
                                                                return iVar3;
                                                            }
                                                            if (*0x2e830 == NULL) {
                                                                return -0x7ffffffffffffff1;
                                                            }
                                                            iVar3 = (***0x2e830)(*(iVar4 + 0xe8),
                                                                                 *(iVar4 + 0x79) * *(iVar4 + 0xc) * 0x20
                                                                                );
                                                            if (iVar3 < 0) {
                                                                return iVar3;
                                                            }
                                                            if (*(iVar4 + 0xf0) != *(iVar4 + 0x80) + 0x940) {
                                                                return -0x7ffffffffffffff1;
                                                            }
                                                            uVar6 = *(iVar4 + 0x10) >> 0x10;
                                                            uVar6 = (uVar6 >> 5 & 0x1f) * 0x20 + (uVar6 >> 0xb);
                                                            if ((uVar6 != 0) && (*(iVar4 + 0xf8) != 0)) {
                                                                if (*0x2e830 == NULL) {
                                                                    return -0x7ffffffffffffff1;
                                                                }
                                                                iVar3 = (***0x2e830)(*(iVar4 + 0xf8),uVar6 << 3);
                                                                if (iVar3 < 0) {
                                                                    return iVar3;
                                                                }
                                                                uVar5 = 0;
                                                                if (uVar6 != 0) {
                                                                    do {
                                                                        if (*0x2e830 == NULL) {
                                                                            return -0x7ffffffffffffff1;
                                                                        }
                                                                        iVar3 = (***0x2e830)((*(*(iVar4 + 0xf8) +
                                                                                               uVar5 * 8) -
                                                                                             *(iVar4 + 0x88)) +
                                                                                             *(iVar4 + 0x80),
                                                                                             *(iVar4 + 0x70) << 0xc);
                                                                        if (iVar3 < 0) {
                                                                            return iVar3;
                                                                        }
                                                                        uVar5 = uVar5 + 1;
                                                                    } while (uVar5 < uVar6);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                uVar9 = uVar9 + 1;
                                            } while (uVar9 < *(iVar2 + 0x10));
                                        }
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return -0x7ffffffffffffff1;
}


/* fcn.00012898 @ 0x12898 */

void fcn.00012898(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    
    iVar2 = fcn.0002d210();
    iVar3 = *0x2e7c0;
    if (iVar2 != -0x7fffffffffffffeb) {
        if (iVar2 < 0) {
            *0x2e7b8 = 1;
            *0x2e7d8 = 1;
            return;
        }
        uVar4 = 0;
        if (*(*0x2e7c0 + 0x10) != '\0') {
            do {
                iVar1 = *(*0x2e7e0 + uVar4 * 8);
                if ((((iVar1 != 0) && (*(iVar1 + 0x90) == 0)) &&
                    ((*(iVar1 + 1) != '@' || ((*(iVar1 + 0x58) & 0x10) != 0)))) && ((*(iVar1 + 0x58) & 1) != 0)) {
                    fcn.0002be30(iVar1);
                    iVar3 = *0x2e7c0;
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < *(iVar3 + 0x10));
        }
    }
    if ((*(*(iVar3 + 0x3aa) + 0x2b) != '\0') && ((*(*0x39420 + 0x6c9) & 8) != 0)) {
        fcn.00012e58(CONCAT71(*0x39420 >> 8,0x40));
        iVar3 = *0x2e7c0;
    }
    iVar1 = *0x39420;
    if ((*(*(iVar3 + 0x3aa) + 2) != '\0') && ((*(*0x39420 + 0x6c9) & 4) != 0)) {
        *(*0x39420 + 0x6c5) = 1;
        fcn.00012e58(CONCAT71(iVar1 >> 8,0x30));
        iVar3 = *0x2e7c0;
    }
    if ((*(*(iVar3 + 0x3aa) + 3) != '\0') && ((*(*0x39420 + 0x6c9) & 2) != 0)) {
        fcn.00012e58(CONCAT71(*0x39420 >> 8,0x20));
        iVar3 = *0x2e7c0;
    }
    if (iVar2 != -0x7fffffffffffffeb) {
        uVar4 = *(iVar3 + 0x10);
        uVar5 = 0;
        if (uVar4 != 0) {
            do {
                iVar3 = *(*0x2e7e0 + uVar5 * 8);
                if (((iVar3 != 0) && (*(iVar3 + 1) == '@')) && ((*(iVar3 + 0x58) & 1) != 0)) break;
                uVar5 = uVar5 + 1;
            } while (uVar5 < uVar4);
        }
        if ((uVar5 == uVar4) && (*0x2e7b0 != 0)) {
            (**(*0x2e7b0 + 8))(*0x2e7b0);
        }
    }
    return;
}


/* fcn.0002d6e0 @ 0x2d6e0 */

void fcn.0002d6e0(void)

{
    int64_t iVar1;
    ulong uStackX_20;
    ulong *apuStack_18 [3];
    
    iVar1 = (**(*0x2e820 + 0xd0))(0x2e488,0,apuStack_18);
    if (-1 < iVar1) {
        uStackX_20 = 0xff555342;
        (**apuStack_18[0])(apuStack_18[0],0x2d6a4,&uStackX_20);
    }
    return;
}


