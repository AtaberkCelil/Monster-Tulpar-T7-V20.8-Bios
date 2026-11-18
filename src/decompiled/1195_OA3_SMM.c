// decompiled by r2ghidra: 1195_OA3_SMM.pe32
// functions: 7

/* entry0 @ 0x111bc */

void entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t arg2_00;
    int64_t aiStackX_8 [4];
    
    *0x120a8 = *(arg2 + 0x60);
    aiStackX_8[0] = 0;
    *0x120a0 = arg2;
    (**(*0x120a8 + 0x140))(0x12030,0,aiStackX_8);
    (**(aiStackX_8[0] + 8))(aiStackX_8[0]);
    arg2_00 = 0;
    iVar1 = (**(*0x120b0 + 0xd0))(0x12010,0,0x120b8);
    if (iVar1 < 0) {
        *0x120b8 = 0;
    }
    fcn.00011244(*0x120b8,arg2_00);
    return;
}


/* fcn.00011244 @ 0x11244 */

int64_t fcn.00011244(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_8;
    ulong *puStackX_10;
    ulong auStackX_18 [2];
    
    *0x121c0 = -0x7fffffffffffffff;
    iStackX_8 = arg1;
    puStackX_10 = arg2;
    iVar1 = section..text(0x120c0);
    if (iVar1 != 0) {
        return *0x121c0;
    }
    iStackX_8 = 0;
    puStackX_10 = NULL;
    iVar1 = (**(*0x120b0 + 0xd0))(0x12040,0,&puStackX_10);
    if (iVar1 < 0) {
code_r0x000112c7:
        if (-1 < *0x121c0) goto code_r0x000112d8;
    }
    else {
        auStackX_18[0] = 0xdf;
        iVar1 = (**puStackX_10)(puStackX_10,0x1153c,auStackX_18,&iStackX_8);
        if (iVar1 < 0) goto code_r0x000112c7;
    }
    *0x121c0 = iVar1;
code_r0x000112d8:
    fcn.000110d0(0x120c0,-1);
    return *0x121c0;
}


/* fcn.000115a0 @ 0x115a0 */

void fcn.000115a0(void)

{
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
    fcn.000115a0();
    *(arg1 + 0xf8) = 0;
    if ((*0x12050 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.000110d0 @ 0x110d0 */

void fcn.000110d0(int64_t arg1,int64_t arg2)

{
    *0x1094 = *(arg1 + 0x50);
    //WARNING: Could not recover jumptable at 0x00011179. Too many branches
    //WARNING: Treating indirect jump as call
    (**(arg1 + 0x48))(arg1,arg2);
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


/* fcn.000112f4 @ 0x112f4 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.000112f4(int64_t arg1)

{
    int *piVar1;
    int *piVar2;
    char cVar3;
    char cVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    uint32_t uVar9;
    ulong uStackX_8;
    ulong *puStackX_10;
    int64_t var_30h_2;
    int64_t var_38h;
    uint uStack_58;
    uint uStack_54;
    uint uStack_50;
    uint uStack_4c;
    int *piStack_48;
    int *piStack_40;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int64_t var_20h;
    uint32_t var_bp_18h;
    int64_t var_10h;
    
    piStack_48 = NULL;
    piStack_40 = NULL;
    _var_30h = 0;
    uStack_58 = 0x1368881;
    uStack_54 = 0x4b1dc4ad;
    uStack_50 = 0x7ad531b6;
    uStack_4c = 0x6bdbc88e;
    uStackX_8 = 0x18;
    if (arg1 == 0) {
code_r0x0001147a:
        iVar5 = -0x7ffffffffffffffe;
    }
    else {
        if (*0x120b8 != NULL) {
            iVar5 = (***0x120b8)(arg1,0x31);
            if (iVar5 < 0) {
                return iVar5;
            }
            (**(*0x120b0 + 0xd0))(0x12000,0,&puStackX_10);
            iVar5 = (**puStackX_10)(L"OA3MSDMvariable",&uStack_58,0,&uStackX_8,&piStack_48);
            if (iVar5 < 0) {
                return iVar5;
            }
            if ((piStack_48 == NULL) || (piStack_40 == NULL)) goto code_r0x0001147a;
            if (*0x120b8 != NULL) {
                iVar5 = (***0x120b8)(piStack_48,0x24);
                if (iVar5 < 0) {
                    return iVar5;
                }
                if (*0x120b8 != NULL) {
                    iVar5 = (***0x120b8)(piStack_40,0x55);
                    piVar2 = piStack_40;
                    piVar1 = piStack_48;
                    if (iVar5 < 0) {
                        return iVar5;
                    }
                    if ((*piStack_40 == 0x4d44534d) && (*piStack_48 == 0x54445358)) {
                        uVar9 = piStack_48[1];
                        uVar7 = uVar9;
                        if (0x23 < uVar9) {
                            if (*0x120b8 != NULL) {
                                iVar5 = (***0x120b8)(piStack_48,uVar9);
                                if (iVar5 < 0) {
                                    return iVar5;
                                }
                                cVar4 = *(piVar1 + 9);
                                cVar3 = *piVar1;
                                uVar6 = 1;
                                *(piVar1 + 9) = 0;
                                if (1 < uVar7) {
                                    do {
                                        cVar3 = cVar3 + *(uVar6 + piVar1);
                                        uVar6 = uVar6 + 1;
                                    } while (uVar6 < uVar7);
                                }
                                *(piVar1 + 9) = -cVar3;
                                if (-cVar4 != cVar3) {
                                    *(piVar1 + 9) = cVar4;
                                    goto code_r0x0001147a;
                                }
                                if (piVar2 + 9 != 0xff060000) {
                                    fcn.00011180(piVar2 + 9,0xff060000,0x31);
                                }
                                cVar4 = *piVar2;
                                uVar6 = 1;
                                *(piVar2 + 9) = 0;
                                do {
                                    cVar4 = cVar4 + *(uVar6 + piVar2);
                                    uVar6 = uVar6 + 1;
                                } while (uVar6 < 0x55);
                                piVar8 = uVar7 + piVar1;
                                *(piVar2 + 9) = -cVar4;
                                if (piVar8[-1] == piVar2) {
                                    return 0;
                                }
                                if (*0x120b8 != NULL) {
                                    iVar5 = (***0x120b8)(piVar8,8);
                                    if (iVar5 < 0) {
                                        return iVar5;
                                    }
                                    if (*piVar8 == 0) {
                                        uVar9 = uVar9 + 8;
                                        *piVar8 = piVar2;
                                        cVar4 = *piVar1;
                                        uVar7 = 1;
                                        piVar1[1] = uVar9;
                                        *(piVar1 + 9) = 0;
                                        if (1 < uVar9) {
                                            do {
                                                cVar4 = cVar4 + *(uVar7 + piVar1);
                                                uVar7 = uVar7 + 1;
                                            } while (uVar7 < uVar9);
                                        }
                                        *(piVar1 + 9) = -cVar4;
                                        return 0;
                                    }
                                    return -0x7fffffffffffffe6;
                                }
                            }
                            goto code_r0x0001134f;
                        }
                    }
                    goto code_r0x0001147a;
                }
            }
        }
code_r0x0001134f:
        iVar5 = -0x7ffffffffffffff1;
    }
    return iVar5;
}


