// decompiled by r2ghidra: 0259_BdatAccessHandler.pe32
// functions: 8

/* entry0 @ 0x102c0 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong noname_0;
    int64_t arg1_00;
    int64_t arg3;
    int64_t iStackX_8;
    uchar auStackX_10 [24];
    
    iVar1 = *(arg2 + 0x60);
    *0x10860 = *(arg2 + 0x58);
    *0x10850 = arg2;
    *0x10858 = iVar1;
    iStackX_8 = arg1;
    if (*0x10868 == 0) {
        fcn.0001071c(arg1,0x10868);
    }
    noname_0 = 0x107c0;
    (**(iVar1 + 0x140))(0x107c0,0,auStackX_10);
    iVar1 = fcn.0001071c(noname_0,&iStackX_8);
    if (iVar1 < 0) {
        iVar1 = -0x7ffffffffffffffd;
    }
    else {
        arg3 = 0x10870;
        arg1_00 = 0x107d0;
        iVar1 = (**(*0x10858 + 0x140))(0x107d0,0);
        if ((*0x10870 == 0) || (iVar1 < 0)) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            fcn.00010440(arg1_00,iStackX_8,arg3);
        }
    }
    return iVar1;
}


/* fcn.0001071c @ 0x1071c */

ulong fcn.0001071c(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x10850;
    uVar4 = 0;
    *arg1 = 0;
    uVar1 = *(iVar3 + 0x68);
    if (uVar1 != 0) {
        piVar2 = *(iVar3 + 0x70);
        piVar5 = piVar2;
        do {
            if ((*0x107e0 == *piVar5) && (*0x107e8 == piVar5[1])) {
                *arg1 = piVar2[uVar4 * 3 + 2];
                return 0;
            }
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 3;
        } while (uVar4 < uVar1);
    }
    return 0x800000000000000e;
}


/* fcn.00010440 @ 0x10440 */

ulong fcn.00010440(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    ulong *puVar2;
    uint8_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong uVar6;
    uint8_t *puVar7;
    uint32_t arg2_00;
    uint8_t *puVar8;
    uint8_t uVar9;
    uint32_t uVar10;
    int iVar11;
    uint32_t uVar12;
    uint16_t uVar13;
    uint16_t uVar14;
    int64_t iVar15;
    int16_t iVar16;
    uint64_t uVar17;
    int64_t *piVar18;
    uint32_t uVar19;
    bool bVar20;
    uint8_t uStackX_18;
    ulong uStackX_20;
    ulong auStack_98 [2];
    int64_t aiStack_88 [10];
    
    puVar2 = *0x10870;
    iVar4 = fcn.00010778(0x107f0,arg2);
    iVar11 = 0;
    if (iVar4 != 0) {
        uVar9 = 0;
        uVar17 = 0;
        if (*(iVar4 + 0x18) != 0) {
            do {
                iVar16 = uVar17;
                aiStack_88[uVar17] = 0;
                puVar7 = iVar4 + 0x1c + uVar17 * 0x10;
                if (puVar7 != NULL) {
                    uVar3 = 0;
                    iVar15 = 0x10;
                    puVar8 = puVar7;
                    do {
                        uVar3 = uVar3 | *puVar8;
                        puVar8 = puVar8 + 1;
                        iVar15 = iVar15 + -1;
                    } while (iVar15 != 0);
                    if (uVar3 == 0) break;
                    iVar15 = fcn.00010778(puVar7,arg2);
                    aiStack_88[uVar17] = iVar15;
                    if (iVar15 != 0) {
                        iVar11 = iVar11 + (*(iVar15 + 2) - 0x18);
                        uVar9 = uVar9 + 1;
                    }
                }
                uVar17 = iVar16 + 1U;
            } while (iVar16 + 1U < *(iVar4 + 0x18));
            if (uVar9 != 0) {
                uVar19 = uVar9 * 4 + 0x2c;
                uVar12 = iVar11 + uVar19;
                bVar20 = (uVar12 & 0xfff) != 0;
                puVar7 = fcn.000106e0(bVar20,(uVar12 >> 0xc) + bVar20);
                if (puVar7 == NULL) {
                    return 0x8000000000000009;
                }
                if (uVar12 != 0) {
                    fcn.000102a0(puVar7,uVar12);
                }
                puVar8 = puVar7 + uVar19;
                arg2_00 = puVar7;
                fcn.0001037c(uVar9,arg2_00);
                if (uVar9 != 0) {
                    uStackX_18 = 0;
                    piVar18 = aiStack_88;
                    uVar17 = uVar9;
                    do {
                        iVar4 = *piVar18;
                        if (iVar4 != 0) {
                            uVar10 = *(iVar4 + 2) - 0x18;
                            if ((uVar10 != 0) && (puVar8 != iVar4 + 0x18)) {
                                section..text(puVar8,iVar4 + 0x18,uVar10);
                            }
                            uVar5 = uStackX_18;
                            iVar11 = puVar8;
                            uStackX_18 = uStackX_18 + 1;
                            puVar8 = puVar8 + uVar10;
                            *(puVar7 + uVar5 * 4 + 0x2c) = iVar11 - arg2_00;
                        }
                        piVar18 = piVar18 + 1;
                        uVar17 = uVar17 - 1;
                    } while (uVar17 != 0);
                }
                uVar17 = uVar19;
                *(puVar7 + 8) = uVar12;
                uVar13 = 0;
                puVar8 = puVar7;
                uVar14 = 0;
                if (uVar19 != 0) {
                    do {
                        iVar4 = 8;
                        uVar13 = uVar14 ^ *puVar8 << 8;
                        puVar8 = puVar8 + 1;
                        do {
                            uVar14 = uVar13 * 2;
                            uVar1 = uVar13 & 0x8000;
                            uVar13 = uVar14;
                            if (uVar1 != 0) {
                                uVar13 = uVar14 ^ 0x1021;
                            }
                            iVar4 = iVar4 + -1;
                        } while (iVar4 != 0);
                        uVar17 = uVar17 - 1;
                        uVar14 = uVar13;
                    } while (uVar17 != 0);
                }
                *(puVar7 + 0xc) = uVar13;
                uStackX_20 = 0x4c45544e49;
                section..text(0x1080a,&uStackX_20,6);
                *0x1081c = 0x4c544e49;
                *0x10810 = 0x5450572d574442;
                *0x10820 = 0x20090903;
                *0x10818 = 0x1000;
                *0x10828 = puVar7;
                auStack_98[0] = 0;
                uVar6 = (**puVar2)(puVar2,0x10800,0x30,auStack_98);
                *((*0xc0000048 & 0xfffffffe) + 0x5430) = arg2_00;
                return uVar6;
            }
        }
    }
    return 0x8000000000000003;
}


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 1376 named .text
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


/* fcn.00010778 @ 0x10778 */

int16_t * fcn.00010778(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    
    do {
        if (*arg2 == -1) {
            arg2 = 0;
code_r0x00010798:
            if ((arg2 == NULL) ||
               ((*CONCAT44(in_register_0000000c,arg1) == *(arg2 + 8) &&
                (*(CONCAT44(in_register_0000000c,arg1) + 8) == *(arg2 + 0x10))))) {
                return arg2;
            }
        }
        else if (*arg2 == 4) goto code_r0x00010798;
        arg2 = arg2 + *(arg2 + 2);
    } while( true );
}


/* fcn.000106e0 @ 0x106e0 */

ulong fcn.000106e0(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    if (arg1 == 0) {
        auStackX_10[0] = 0;
    }
    else {
        iVar1 = (**(*0x10858 + 0x28))(0,0,arg1,auStackX_10);
        if (iVar1 < 0) {
            auStackX_10[0] = 0;
        }
    }
    return auStackX_10[0];
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t arg2)

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


/* fcn.0001037c @ 0x1037c */

int64_t fcn.0001037c(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint in_register_00000014;
    int64_t *arg1_00;
    int64_t var_bp_18h;
    int64_t var_10h;
    
    arg1_00 = CONCAT44(in_register_00000014,arg2);
    var_bp_18h._0_4_ = 0x54414442;
    var_bp_18h._4_4_ = 0x44414548;
    if (arg1_00 != &var_bp_18h) {
        section..text(arg1_00,&var_bp_18h,8);
    }
    arg1_00[2] = 4;
    *(arg1_00 + 1) = arg1 * 4 + 0x2c;
    iVar1 = (**(*0x10860 + 0x18))(&var_10h,0);
    if (iVar1 < 0) {
        iVar1 = -0x7ffffffffffffffd;
    }
    else {
        *(arg1_00 + 5) = var_10h._4_1_;
        *(arg1_00 + 0x29) = var_10h._5_1_;
        *(arg1_00 + 0x2a) = var_10h._6_1_;
        *(arg1_00 + 0x24) = var_10h;
        *(arg1_00 + 0x26) = var_10h._2_1_;
        *(arg1_00 + 4) = arg1;
        *(arg1_00 + 0x27) = var_10h._3_1_;
    }
    return iVar1;
}


