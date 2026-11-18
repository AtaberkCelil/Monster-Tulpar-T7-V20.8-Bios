// decompiled by r2ghidra: 1900_MnpDxe.pe32
// functions: 64

/* entry0 @ 0x104e8 */

void entry0(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    int64_t aiStackX_8 [4];
    
    *0x167a0 = *(arg2 + 0x60);
    *0x167a8 = *(arg2 + 0x58);
    *0x16798 = arg2;
    (**(*0x167a0 + 0x140))(0x16120,0,0x167b8);
    arg2_00 = 0x16080;
    (**(*0x167a0 + 0x98))(arg1,0x16080,aiStackX_8);
    *(aiStackX_8[0] + 0x58) = 0x10364;
    fcn.00010560(arg1,arg2_00);
    return;
}


/* fcn.00010560 @ 0x10560 */

ulong fcn.00010560(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uStackX_10;
    char acStackX_18 [16];
    
    uStackX_10 = 8;
    iVar1 = (**(*0x167a8 + 0x48))(L"NetworkStackVar",0x16130,0,&uStackX_10,acStackX_18);
    if ((iVar1 == 0) && (acStackX_18[0] == '\0')) {
        uVar2 = 0x8000000000000003;
    }
    else {
        *0x16170 = arg1;
        *0x16178 = arg1;
        uVar2 = (**(*0x167a0 + 0x148))(0x16178,0x16100,0x16150,0x16110,0x16180,0x16090,0x16198,0);
    }
    return uVar2;
}


/* fcn.00014e10 @ 0x14e10 */

void fcn.00014e10(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00014de0(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.00010280(arg1_00,arg1);
    }
    return;
}


/* fcn.00014de0 @ 0x14de0 */

ulong fcn.00014de0(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x167a0 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00010280 @ 0x10280 */

int64_t fcn.00010280(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 24064 named .text
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


/* fcn.0001141c @ 0x1141c */

int64_t fcn.0001141c(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint *puVar1;
    int64_t iVar2;
    ulong uVar3;
    uint in_register_0000000c;
    uint *arg1_00;
    int64_t iStackX_8;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    *(arg1_00 + 4) = arg2;
    *arg1_00 = 0x44706e4d;
    *(arg1_00 + 2) = arg3;
    if (arg1_00 + 6 != 0x16238) {
        fcn.000102a0(arg1_00 + 6,0x16238,0x18);
    }
    iVar2 = (**(*0x167a0 + 0x118))(arg3,0x160d0,&iStackX_8,arg2,arg3,0x10);
    if (-1 < iVar2) {
        iVar2 = *(iStackX_8 + 0x78);
        *(arg1_00 + 0x10) = iStackX_8;
        puVar1 = arg1_00 + 0x12;
        *puVar1 = puVar1;
        *(arg1_00 + 0x14) = puVar1;
        puVar1 = arg1_00 + 0x18;
        *puVar1 = puVar1;
        *(arg1_00 + 0x1a) = puVar1;
        arg1_00[0x44] = *(iVar2 + 0xc) + *(iVar2 + 8) + 8;
        arg1_00[0x45] = (-*(iVar2 + 8) & 3U) + 4;
        iVar2 = fcn.000157dc(arg3,iVar2,arg1_00 + 0xe);
        if (-1 < iVar2) {
            arg1_00[0x28] = 0x7571626e;
            puVar1 = arg1_00 + 0x2c;
            *(arg1_00 + 0x2a) = 1;
            *puVar1 = puVar1;
            *(arg1_00 + 0x2e) = puVar1;
            puVar1 = arg1_00 + 0x30;
            *puVar1 = puVar1;
            *(arg1_00 + 0x32) = puVar1;
            arg1_00[0x34] = 0;
            arg1_00[0x35] = 0;
            iVar2 = fcn.0001113c(arg1_00,0x200);
            if (-1 < iVar2) {
                uVar3 = fcn.00011214(arg1_00);
                *(arg1_00 + 0x46) = uVar3;
                fcn.00015c28(uVar3,arg1_00[0x44],0);
                puVar1 = arg1_00 + 0x1e;
                *puVar1 = puVar1;
                *(arg1_00 + 0x20) = puVar1;
                puVar1 = arg1_00 + 0x22;
                *puVar1 = puVar1;
                *(arg1_00 + 0x24) = puVar1;
                arg1_00[0x26] = 0;
                iVar2 = (**(*0x167a0 + 0x50))(0x80000200,8,0x13634,arg1_00,arg1_00 + 0x38);
                if (((-1 < iVar2) &&
                    (iVar2 = (**(*0x167a0 + 0x50))(0x80000200,8,0x13530,arg1_00,arg1_00 + 0x3c), -1 < iVar2)) &&
                   (iVar2 = (**(*0x167a0 + 0x50))(0x80000200,8,0x13608,arg1_00,arg1_00 + 0x3e), -1 < iVar2)) {
                    return iVar2;
                }
            }
        }
        if (*(arg1_00 + 0xe) != 0) {
            (**(*0x167a0 + 0x48))();
        }
        if (*(arg1_00 + 0x3c) != 0) {
            (**(*0x167a0 + 0x70))();
        }
        if (*(arg1_00 + 0x3e) != 0) {
            (**(*0x167a0 + 0x70))();
        }
        if (*(arg1_00 + 0x38) != 0) {
            (**(*0x167a0 + 0x70))();
        }
        if (*(arg1_00 + 0x46) != 0) {
            fcn.000112c4(arg1_00,*(arg1_00 + 0x46));
        }
        if (arg1_00[0x35] != 0) {
            fcn.00015f8c(arg1_00 + 0x28);
        }
        (**(*0x167a0 + 0x120))(arg3,0x160d0,arg2,arg3);
        return iVar2;
    }
    return -0x7ffffffffffffffd;
}


/* fcn.000117ec @ 0x117ec */

uint * fcn.000117ec(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint *arg1_00;
    uint *puVar2;
    ulong *puVar3;
    int iVar4;
    uint *arg1_01;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iStackX_20;
    uchar auStack_38 [16];
    
    arg1_01 = fcn.00014e10(0x60);
    if (arg1_01 == NULL) {
        return NULL;
    }
    piVar1 = arg1_01 + 2;
    *piVar1 = arg1 + 0x48;
    arg1_00 = arg1_01 + 10;
    puVar3 = *(arg1 + 0x50);
    *(arg1_01 + 4) = puVar3;
    *puVar3 = piVar1;
    *(arg1 + 0x50) = piVar1;
    *arg1_01 = 0x53706e4d;
    *(arg1_01 + 6) = arg1;
    if (arg1_00 != 0x161d0) {
        fcn.000102a0(arg1_00,0x161d0,0x10);
    }
    puVar2 = arg1_01 + 0x10;
    *puVar2 = puVar2;
    *(arg1_01 + 0x12) = puVar2;
    iVar6 = *(*(arg1 + 0x40) + 0x78);
    if (arg2 == 0) {
        iStackX_20 = *(arg1 + 8);
        iVar4 = *(iVar6 + 0xc);
    }
    else {
        iStackX_20 = fcn.000121ec(*(arg1 + 0x10),*(arg1 + 8),arg2 & 0xffff,arg1_01 + 0xe);
        if (iStackX_20 == 0) {
            return NULL;
        }
        iVar5 = (**(*0x167a0 + 0x118))(*(arg1 + 8),0x160b0,auStack_38,*(arg1 + 0x10),iStackX_20,8);
        if (iVar5 < 0) goto code_r0x0001192f;
        iVar4 = *(iVar6 + 0xc) + -4;
    }
    arg1_01[0x16] = iVar4;
    *(arg1_01 + 8) = iStackX_20;
    iVar6 = *0x167a0;
    *(arg1_01 + 0x17) = arg2;
    *(arg1_01 + 0x5e) = arg3;
    iVar6 = (**(iVar6 + 0x148))(&iStackX_20,0x160f0,arg1_00,0);
    if (-1 < iVar6) {
        return arg1_01;
    }
code_r0x0001192f:
    fcn.00011954(arg1_01);
    return NULL;
}


/* fcn.0001249c @ 0x1249c */

int64_t fcn.0001249c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uStackX_8;
    ulong uStackX_20;
    
    uStackX_8 = 0;
    iVar1 = (**(*0x167a8 + 0x48))(*(arg1 + 0x38),0x160b0,0,&uStackX_8,0);
    if (iVar1 == -0x7ffffffffffffffb) {
        iVar1 = fcn.00014e10(uStackX_8);
        if (iVar1 == 0) {
            iVar2 = -0x7ffffffffffffff7;
        }
        else {
            iVar2 = (**(*0x167a8 + 0x48))(*(arg1 + 0x38),0x160b0,0,&uStackX_8,iVar1);
            if (iVar2 < 0) {
                (**(*0x167a0 + 0x48))(iVar1);
            }
            else {
                iVar2 = fcn.0001237c(arg1,iVar1,uStackX_8 >> 1,&uStackX_20);
                if (-1 < iVar2) {
                    *arg2 = uStackX_20;
                    *arg3 = iVar1;
                }
            }
        }
    }
    else {
        iVar2 = -0x7ffffffffffffff2;
    }
    return iVar2;
}


/* fcn.00011954 @ 0x11954 */

int64_t fcn.00011954(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = (**(*0x167a0 + 0x150))(*(arg1 + 0x20),0x160f0,arg1 + 0x28,0);
    if (iVar1 < 0) {
        return iVar1;
    }
    if (*(arg1 + 0x5c) != 0) {
        iVar1 = (**(*0x167a0 + 0x120))(*(*(arg1 + 0x18) + 8),0x160b0,*(*(arg1 + 0x18) + 0x10),*(arg1 + 0x20));
        if (iVar1 < 0) {
            return iVar1;
        }
        iVar1 = (**(*0x167a0 + 0x150))(*(arg1 + 0x20),0x160c0,*(arg1 + 0x38),0);
        if (iVar1 < 0) {
            return iVar1;
        }
        if (*(arg1 + 0x38) != 0) {
            (**(*0x167a0 + 0x48))();
        }
    }
    *(*(arg1 + 8) + 8) = *(arg1 + 0x10);
    **(arg1 + 0x10) = *(arg1 + 8);
    (**(*0x167a0 + 0x48))(arg1);
    return iVar1;
}


/* fcn.000116ec @ 0x116ec */

void fcn.000116ec(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    
    if (*(arg1 + 0x38) != 0) {
        (**(*0x167a0 + 0x48))();
    }
    (**(*0x167a0 + 0x70))(*(arg1 + 0xf0));
    (**(*0x167a0 + 0x70))(*(arg1 + 0xf8));
    (**(*0x167a0 + 0x70))(*(arg1 + 0xe0));
    piVar1 = *(arg1 + 0x88);
    piVar2 = *piVar1;
    while (piVar1 != arg1 + 0x88) {
        *(*piVar1 + 8) = piVar1[1];
        *piVar1[1] = *piVar1;
        (**(*0x167a0 + 0x48))(piVar1 + -3);
        *(arg1 + 0x98) = *(arg1 + 0x98) + -1;
        piVar1 = piVar2;
        piVar2 = *piVar2;
    }
    fcn.000112c4(arg1,*(arg1 + 0x118));
    *(arg1 + 0xd8) = *(arg1 + 0xd8) - *(arg1 + 0xd4);
    fcn.00015f8c(arg1 + 0xa0);
    //WARNING: Could not recover jumptable at 0x000117e3. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x167a0 + 0x120))(*(arg1 + 8),0x160d0,arg2,*(arg1 + 8));
    return;
}


/* fcn.000155a8 @ 0x155a8 */

int64_t fcn.000155a8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong *puVar2;
    int64_t iVar3;
    ulong *puVar4;
    bool bVar5;
    
    if (arg2 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = 0;
code_r0x000155e2:
        do {
            for (puVar4 = *arg1; puVar4 != arg1; puVar4 = *puVar4) {
                iVar3 = (*arg2)(puVar4,arg3);
                if (iVar3 < 0) {
                    return iVar3;
                }
                for (puVar2 = *arg1; puVar2 != arg1; puVar2 = *puVar2) {
                    if (puVar2 == puVar4) goto code_r0x00015616;
                }
                if (puVar2 != puVar4) goto code_r0x000155e2;
code_r0x00015616:
            }
            iVar3 = 0;
            for (puVar4 = *arg1; puVar4 != arg1; puVar4 = *puVar4) {
                iVar3 = iVar3 + 1;
            }
            bVar5 = iVar3 != iVar1;
            iVar1 = iVar3;
        } while (bVar5);
        if (arg4 != 0) {
            *arg4 = iVar3;
        }
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00015530 @ 0x15530 */

ulong fcn.00015530(void)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    
    piVar1 = *0x16790;
    if (*0x16790 != NULL) {
        iVar2 = 0;
        if (**0x16790 != 0) {
            piVar3 = *0x16790;
            do {
                (**(*0x167a0 + 0x48))(*piVar3);
                if (piVar3[1] != 0) {
                    (**(*0x167a0 + 0x48))();
                }
                iVar2 = iVar2 + 1;
                piVar3 = piVar1 + iVar2 * 2;
            } while (*piVar3 != 0);
        }
        (**(*0x167a0 + 0x48))(piVar1);
    }
    return 0;
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00011c58 @ 0x11c58 */

void fcn.00011c58(int64_t arg1)

{
    int64_t *piVar1;
    ulong uVar2;
    
    uVar2 = (**(*0x167a0 + 0x18))();
    piVar1 = arg1 + 0xb8;
    while (*piVar1 != piVar1) {
        fcn.00012f8c(0,*piVar1);
        *(arg1 + 200) = *(arg1 + 200) + -1;
    }
    //WARNING: Could not recover jumptable at 0x00011cb4. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x167a0 + 0x20))(uVar2);
    return;
}


/* fcn.000151bc @ 0x151bc */

ulong fcn.000151bc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    uint64_t uVar2;
    char cVar3;
    ulong uVar4;
    int64_t iVar5;
    char cVar6;
    char *pcVar7;
    char *pcVar8;
    uint64_t uVar9;
    char in_stack_00000028;
    
    if ((arg1 == 0) || (arg4 == 0)) {
        uVar4 = 0x8000000000000002;
    }
    else {
        if ((arg2 != 0) && (arg3 != 0)) {
            if (in_stack_00000028 == '\0') {
                iVar5 = fcn.00015128(arg2,arg1);
                if (iVar5 == 0) {
code_r0x000152c1:
                    for (; pcVar8 = *arg3, pcVar8 != NULL; arg3 = arg3 + 0x10) {
code_r0x000152b7:
                        cVar3 = *pcVar8;
                        if (cVar3 != '\0') {
                            uVar9 = 0;
                            if (cVar3 != '\0') {
                                cVar6 = cVar3;
                                do {
                                    if (cVar6 == ';') break;
                                    uVar9 = uVar9 + 1;
                                    cVar6 = pcVar8[uVar9];
                                } while (cVar6 != '\0');
                            }
                            pcVar7 = arg1;
                            pcVar1 = pcVar8;
                            uVar2 = uVar9;
                            if (uVar9 == 0) {
code_r0x000152cf:
                                *arg4 = *(arg3 + 8);
                                return 0;
                            }
                            for (; (((cVar3 != '\0' && (*pcVar7 != '\0')) && (*pcVar1 == *pcVar7)) && (1 < uVar2));
                                uVar2 = uVar2 - 1) {
                                cVar3 = pcVar1[1];
                                pcVar7 = pcVar7 + 1;
                                pcVar1 = pcVar1 + 1;
                            }
                            if (*pcVar1 == *pcVar7) goto code_r0x000152cf;
                            pcVar8 = pcVar8 + uVar9;
                            if (*pcVar8 != '\0') {
                                cVar3 = *pcVar8;
                                pcVar7 = pcVar8;
                                do {
                                    if (cVar3 != ';') break;
                                    pcVar7 = pcVar7 + 1;
                                    cVar3 = *pcVar7;
                                } while (cVar3 != '\0');
                            }
                            goto code_r0x000152b7;
                        }
                    }
                }
            }
            else if (*arg2 != '\0') {
                do {
                    if ((*arg1 & 0xffffff) == (*arg2 & 0xffffff)) goto code_r0x000152c1;
                    arg2 = arg2 + 3;
                } while (*arg2 != '\0');
            }
        }
        uVar4 = 0x8000000000000003;
    }
    return uVar4;
}


/* fcn.00013e60 @ 0x13e60 */

void fcn.00013e60(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00014054(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00014054 @ 0x14054 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00014054(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

{
    uint16_t uVar1;
    uint32_t uVar2;
    char cVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    char *pcVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    char cVar13;
    uint64_t uVar14;
    char *pcVar15;
    uint32_t uVar16;
    uint64_t *puVar17;
    uint64_t *puVar18;
    int64_t *piVar19;
    uint8_t *puVar20;
    uint64_t uVar21;
    uint64_t uVar22;
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
    uint64_t uStack_98;
    int64_t iStack_90;
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
    
    puVar17 = NULL;
    puStack_b0 = NULL;
    if (arg2 == 0) {
        uVar22 = arg3 & 0x2000;
        if ((arg3 & 0x2000U) == 0) goto code_r0x000140b3;
    }
    else {
        uVar22 = arg3 & 0x2000;
        if (((arg3 & 0x2000U) == 0) && (arg1 == 0)) {
            return 0;
        }
    }
    if (arg4 == 0) {
        return 0;
    }
code_r0x000140b3:
    uVar5 = 1;
    if ((arg3 & 0x40U) == 0) {
        if (1000000 < arg2) {
            return 0;
        }
        uVar14 = uVar5;
    }
    else {
        if (1000000 < arg2) {
            return 0;
        }
        uVar14 = 2;
    }
    if ((arg3 >> 8 & 1) == 0) {
        uVar21 = fcn.00016044(arg4);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.00016010(arg4,0xf4241);
        if (1000000 < uVar5) {
            return 0;
        }
        puVar17 = NULL;
        uStack_98 = 0xffff;
        uVar5 = 2;
    }
    var_78h = uVar5;
    if (uVar22 == 0) {
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
        pcStack_d8 = arg1 + (arg2 + -1) * uVar14;
    }
    if (uVar5 == 1) {
        iVar4 = 0;
    }
    else {
        iVar4 = *(arg4 + 1) << 8;
    }
    uStack_a8 = (*arg4 | iVar4) & uStack_98;
    puStackX_20 = arg4;
    while( true ) {
        uVar22 = 1;
        if ((uStack_a8 == 0) || ((arg1 != NULL && (pcStack_d8 <= arg1)))) break;
        uStack_a0 = 0;
        uVar5 = 0;
        iStack_90 = 0;
        cVar3 = '\0';
        uVar21 = arg3 & 0x2140;
        uStack_b8 = 1;
        cVar13 = '\0';
        bVar23 = false;
        _cStack0000000000000030 = _cStack0000000000000030 & 0xffffffffffffff00;
        uStack_c0 = 0;
        uStackX_18 = uVar21;
        if (uStack_a8 == 10) {
            puVar20 = puStackX_20 + var_78h;
            pcVar8 = 0x163c4;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar20[1] << 8;
            }
            uStack_a8 = (iVar4 | *puVar20) & uStack_98;
            if (uStack_a8 != 0xd) {
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0xd) {
            puVar20 = puStackX_20 + var_78h;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar20[1] << 8;
            }
            uVar10 = iVar4 | *puVar20;
code_r0x0001446e:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x163c4;
            }
            else {
                pcVar8 = 0x163c8;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x00014205:
            while( true ) {
                puStackX_20 = puVar20 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puStackX_20[1] << 8;
                }
                uStack_a8 = (*puStackX_20 | iVar4) & uStack_98;
                if (uStack_a8 < 0x2e) break;
                if (uStack_a8 == 0x2e) {
                    uVar21 = uVar21 | 0x800;
                    goto code_r0x000143a8;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x000143bf;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x000143a8;
                        }
                        goto code_r0x000143bf;
                    }
                }
                uVar5 = 0;
                uStack_c0 = 0;
                if (0x2f < uStack_a8) {
                    do {
                        if (0x39 < uStack_a8) break;
                        puStackX_20 = puStackX_20 + var_78h;
                        uVar5 = uStack_a8 + (uVar5 * 5 + -0x18) * 2;
                        if (var_78h == 1) {
                            iVar4 = 0;
                        }
                        else {
                            iVar4 = puStackX_20[1] << 8;
                        }
                        uStack_a8 = (*puStackX_20 | iVar4) & uStack_98;
                    } while (0x2f < uStack_a8);
                    uStack_c0 = uVar5;
                }
                puVar20 = puStackX_20 + -var_78h;
                uVar5 = uStack_c0;
                if ((uVar21 & 0x800) == 0) {
                    uVar21 = uVar21 | 0x200;
                    uStack_a0 = uStack_c0;
                    uStackX_18 = uVar21;
                }
                else {
                    uVar22 = uStack_c0;
                    uStack_b8 = uStack_c0;
                }
            }
            if (uStack_a8 == 0x2d) {
                uVar21 = uVar21 | 1;
code_r0x000143a8:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x00014205;
            }
            if (uStack_a8 != 0) {
                if (uStack_a8 == 0x20) {
                    uVar21 = uVar21 | 4;
                }
                else {
                    if (uStack_a8 == 0x2a) {
                        if ((uVar21 & 0x800) == 0) {
                            uVar21 = uVar21 | 0x200;
                            if (puVar17 == NULL) {
                                uStack_a0 = *puVar18;
                                puVar18 = puVar18 + 1;
                                in_stack_00000028 = puVar18;
                            }
                            else {
                                uStack_a0 = *puVar17;
                                puVar17 = puVar17 + 1;
                                puStack_b0 = puVar17;
                            }
                            puVar20 = puStackX_20;
                            uStackX_18 = uVar21;
                        }
                        else {
                            if (puVar17 == NULL) {
                                uStack_b8 = *puVar18;
                                puVar18 = puVar18 + 1;
                                in_stack_00000028 = puVar18;
                            }
                            else {
                                uStack_b8 = *puVar17;
                                puVar17 = puVar17 + 1;
                                puStack_b0 = puVar17;
                            }
                            puVar20 = puStackX_20;
                            uVar22 = uStack_b8;
                        }
                        goto code_r0x00014205;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x000143bf;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x000143a8;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x000143bf:
            puVar20 = puStackX_20;
            if (uStack_a8 < 0x68) {
                if (uStack_a8 == 0x67) {
                    if (puVar17 == NULL) {
                        uVar22 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        uVar22 = *puVar17;
                        puStack_b0 = puVar17 + 1;
                    }
                    if (uVar22 == 0) {
                        pcVar8 = "<null guid>";
                    }
                    else {
                        fcn.00014dbc(&var_68h_2,0x26,0,0x16358);
                        pcVar8 = &var_68h_2;
                        uVar5 = uStack_c0;
                        cVar13 = cStack0000000000000030;
                    }
                    uVar22 = uStack_b8;
                }
                else {
                    if (uStack_a8 != 10) {
                        if (uStack_a8 == 0xd) {
                            puVar20 = puStackX_20 + var_78h;
                            if (var_78h == 1) {
                                iVar4 = 0;
                            }
                            else {
                                iVar4 = puVar20[1] << 8;
                            }
                            uVar10 = iVar4 | *puVar20;
                            goto code_r0x0001446e;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x00014657;
                        if (uStack_a8 == 0x58) goto code_r0x0001474c;
                        if (uStack_a8 == 0x61) goto code_r0x00014660;
                        if (uStack_a8 == 99) {
                            if (puVar17 == NULL) {
                                uVar1 = *puVar18;
                                in_stack_00000028 = puVar18 + 1;
                            }
                            else {
                                uVar1 = *puVar17;
                                puStack_b0 = puVar17 + 1;
                            }
                            var_80h = uVar1;
                            pcVar8 = &var_80h;
                            goto code_r0x000141e6;
                        }
                        if (uStack_a8 != 100) goto code_r0x000141e2;
                        goto code_r0x00014763;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x163c4;
                    if (var_78h == 1) {
                        iVar4 = 0;
                    }
                    else {
                        iVar4 = puVar20[1] << 8;
                    }
                    uStack_a8 = (iVar4 | *puVar20) & uStack_98;
                    if (uStack_a8 != 0xd) {
                        puVar20 = puStackX_20;
                    }
                }
                goto code_r0x00014990;
            }
            if (uStack_a8 != 0x70) {
                if (uStack_a8 == 0x72) {
                    if (puVar17 == NULL) {
                        uVar10 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        uVar10 = *puVar17;
                        puStack_b0 = puVar17 + 1;
                    }
                    pcVar8 = &var_68h_2;
                    if (uVar10 < 0) {
                        if ((uVar10 & 0x7fffffffffffffff) - 1 < 0x21) {
                            pcVar8 = (uVar10 & 0x7fffffffffffffff) * 0x15;
                            iVar12 = 0x1645b;
                            goto code_r0x00014713;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x00014713:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x00014990;
                    }
                    fcn.00014dbc(&var_68h_2,0x26,0,0x163bc);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x00014657:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x00014660:
                        if (puVar17 == NULL) {
                            pcVar8 = *puVar18;
                            in_stack_00000028 = puVar18 + 1;
                        }
                        else {
                            pcVar8 = *puVar17;
                            puStack_b0 = puVar17 + 1;
                        }
                        if (pcVar8 == NULL) {
                            uVar21 = uVar21 & 0xfffffffffffffbff;
                            pcVar8 = "<null string>";
                            uStackX_18 = uVar21;
                        }
                        uVar22 = uVar22 & -((uVar21 & 0x800) != 0);
                        goto code_r0x00014990;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x000141e2;
                            goto code_r0x00014750;
                        }
                        goto code_r0x00014755;
                    }
                    if (puVar17 == NULL) {
                        uVar10 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        puStack_b0 = puVar17 + 1;
                        uVar10 = *puVar17;
                    }
                    if (uVar10 == 0) {
                        pcVar8 = "<null time>";
                        goto code_r0x00014990;
                    }
                    fcn.00014dbc(&var_68h_2,0x26,0,0x163a0);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x00014990;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x0001474c:
            uVar21 = uVar21 | 0x20;
code_r0x00014750:
            uVar21 = uVar21 | 0x80;
code_r0x00014755:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x00014763:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x000147a5;
                }
                uVar5 = *puVar18;
                in_stack_00000028 = puVar18 + 1;
            }
            else if (puVar17 == NULL) {
                uVar5 = *puVar18;
                in_stack_00000028 = puVar18 + 1;
            }
            else {
                uVar5 = *puVar17;
code_r0x000147a5:
                puStack_b0 = puVar17 + 1;
            }
            cVar3 = (uVar21 & 4) << 3;
            if ((uVar21 & 2) != 0) {
                cVar3 = '+';
            }
            bVar23 = (uVar21 & 8) != 0;
            if (uVar21 < '\0') {
                uVar16 = 0x10;
                bVar23 = false;
                if (((uVar21 & 0x10) == 0) && (uVar2 = 0x10, uVar5 < 0)) {
code_r0x0001482d:
                    uVar16 = uVar2;
                    uVar5 = uVar5 & 0xffffffff;
                }
            }
            else {
                uVar16 = 10;
                if ((uVar21 & 8) != 0) {
                    uVar21 = uVar21 & 0xffffffffffffffdf;
                    uVar22 = 1;
                }
                if ((uVar5 < 0) && (uVar21 >> 0xe == 0)) {
                    cVar3 = '-';
                    uVar5 = -uVar5;
                }
                else {
                    uVar2 = 10;
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x0001482d;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar10 = uVar5;
            do {
                uVar6 = uVar10 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = str.0123456789ABCDEF[uVar10 % uVar16];
                uVar10 = uVar6;
            } while (uVar6 != 0);
            uStack_c0 = piVar19 - &var_68h_2;
            if (uVar5 == 0) {
                uStack_c0 = uStack_c0 & -(uVar22 != 0);
            }
            pcVar8 = &var_68h_2 + uStack_c0;
            iStack_90 = 3 - uStack_c0 % 3;
            if (uStack_c0 % 3 == 0) {
                iStack_90 = 0;
            }
            if ((bVar23) && (uStack_c0 != 0)) {
                uStack_c0 = uStack_c0 + (uStack_c0 - 1) / 3;
            }
            if (cVar3 != '\0') {
                uStack_c0 = uStack_c0 + 1;
                uVar22 = uVar22 + 1;
            }
            uVar21 = uVar21 | 0x1000;
            cVar13 = '\x01';
            uVar5 = uStack_c0;
            uStackX_18 = uVar21;
            if ((uVar21 & 0xa21) == 0x220) {
                uVar22 = uStack_a0;
            }
        }
        else {
code_r0x000141e2:
            pcVar8 = &uStack_a8;
code_r0x000141e6:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x00014990:
        puStackX_20 = puVar20;
        uVar16 = uVar21;
        iVar12 = ((uVar21 & 0x400) != 0) + 1;
        _cStack0000000000000030 = (-((uVar21 & 0x400) != 0) & 0xff00) + 0xff;
        if ((uVar21 >> 0xc & 1) == 0) {
            uVar5 = 0;
            pcVar15 = pcVar8 + 1;
            while ((((pcVar15[-1] != '\0' || (((uVar21 & 0x400) != 0 && (*pcVar15 != '\0')))) &&
                    ((uVar5 < uVar22 || ((uVar21 >> 0xb & 1) == 0)))) &&
                   ((_cStack0000000000000030 & (*pcVar15 << 8 | pcVar15[-1])) != 0))) {
                uVar5 = uVar5 + 1;
                pcVar15 = pcVar15 + iVar12;
            }
            uStack_c0 = uVar5;
        }
        else {
            iVar12 = -iVar12;
        }
        if (uVar22 < uVar5) {
            uVar22 = uVar5;
        }
        uVar10 = uVar16 & 0x201;
        var_40h = uVar10;
        pcVar15 = pcStack_d8;
        if (uVar10 == 0x200) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar22) * uVar14;
            if (((uVar21 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00013e90(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00013e90(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
            }
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar6, (uVar21 & 0x2000) == 0)) && (arg1 != NULL)) {
                iVar9 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar6 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar6;
                    iVar9 = iVar9 + 1;
                } while (iVar9 < 1);
            }
        }
        else {
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar14, (uVar21 >> 0xd & 1) == 0)) && (arg1 != NULL)) {
                iVar9 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar14 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar14;
                    iVar9 = iVar9 + 1;
                } while (iVar9 < 1);
            }
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00013e90(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
            }
        }
        arg3 = uVar21;
        if ((cVar3 != '\0') < uStack_c0) {
            uVar5 = cVar3 != '\0';
            iVar9 = iStack_90;
            do {
                if ((*pcVar8 == '\0') && ((iVar12 < 2 || (*(pcVar8 + 1) == '\0')))) break;
                uStack_d0 = uStack_d0 + uVar6;
                uVar10 = *pcVar8 & _cStack0000000000000030;
                if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                    iVar11 = 0;
                    do {
                        if (pcStack_d8 <= arg1) break;
                        *arg1 = uVar10;
                        if (uVar6 != 1) {
                            *(arg1 + 1) = uVar10 >> 8;
                        }
                        arg1 = arg1 + uVar6;
                        iVar11 = iVar11 + 1;
                    } while (iVar11 < 1);
                }
                pcVar8 = pcVar8 + iVar12;
                uVar10 = uVar5 + 1;
                if ((bVar23) && (iVar9 = iVar9 + 1, iVar9 == 3)) {
                    iVar11 = 0;
                    uVar10 = uVar5 + 2;
                    if (uStack_c0 <= uVar10) break;
                    uStack_d0 = uStack_d0 + uVar6;
                    iVar9 = iVar11;
                    if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                        iVar7 = 0;
                        do {
                            iVar9 = iVar11;
                            if (pcStack_d8 <= arg1) break;
                            *arg1 = ',';
                            if (uVar6 != 1) {
                                *(arg1 + 1) = '\0';
                            }
                            arg1 = arg1 + uVar6;
                            iVar7 = iVar7 + 1;
                            iVar9 = 0;
                        } while (iVar7 < 1);
                    }
                }
                uVar5 = uVar10;
            } while (uVar10 < uStack_c0);
            arg3 = uStackX_18;
            uVar10 = var_40h;
        }
        if (uVar10 == 0x201) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar22) * uVar6;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00013e90(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        puStackX_20 = puStackX_20 + var_78h;
        if (var_78h == 1) {
            iVar4 = 0;
        }
        else {
            iVar4 = puStackX_20[1] << 8;
        }
        uStack_a8 = (iVar4 | *puStackX_20) & uStack_98;
        puVar17 = puStack_b0;
    }
    iVar12 = 0;
    if ((arg3 >> 0xd & 1) != 0) {
        return uStack_d0 / uVar14;
    }
    pcVar8 = arg1;
    do {
        if (pcStack_d8 + uVar14 <= pcVar8) break;
        *pcVar8 = '\0';
        if (uVar14 != 1) {
            pcVar8[1] = '\0';
        }
        pcVar8 = pcVar8 + uVar14;
        iVar12 = iVar12 + 1;
    } while (iVar12 < 1);
    return (arg1 - _var_70h) / uVar14;
}


/* fcn.000152f4 @ 0x152f4 */

ulong fcn.000152f4(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int16_t *piVar2;
    char cVar3;
    ulong uVar4;
    ulong *puVar5;
    char *pcVar6;
    int64_t iVar7;
    char *pcVar8;
    char *pcVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint in_R8;
    int16_t *arg2_00;
    uint32_t *puVar13;
    uint64_t uVar14;
    
    arg2_00 = CONCAT44(in_R8,arg3);
    uVar11 = 0;
    if (arg2_00 == NULL) {
code_r0x00015513:
        uVar4 = 0x8000000000000002;
    }
    else {
        if (arg2 != 0) {
            if (*arg2_00 == 0) goto code_r0x00015513;
            if (arg4 == '\0') {
                iVar7 = fcn.00015128(arg2,arg1);
                if (iVar7 == 0) {
code_r0x00015375:
                    uVar12 = uVar11;
                    puVar5 = *0x16790;
                    if (*0x16790 != NULL) {
                        for (; pcVar9 = *puVar5, pcVar9 != NULL; puVar5 = puVar5 + 2) {
code_r0x0001541b:
                            cVar3 = *pcVar9;
                            if (cVar3 != '\0') {
                                uVar10 = uVar11;
                                while ((cVar3 != '\0' && (cVar3 != ';'))) {
                                    uVar10 = uVar10 + 1;
                                    cVar3 = pcVar9[uVar10];
                                }
                                if (uVar10 == 0) {
                                    return 0x8000000000000014;
                                }
                                cVar3 = *arg1;
                                pcVar8 = arg1;
                                pcVar6 = pcVar9;
                                for (uVar14 = uVar10;
                                    (((cVar3 != '\0' && (*pcVar6 != '\0')) && (*pcVar8 == *pcVar6)) && (1 < uVar14));
                                    uVar14 = uVar14 - 1) {
                                    pcVar8 = pcVar8 + 1;
                                    pcVar6 = pcVar6 + 1;
                                    cVar3 = *pcVar8;
                                }
                                arg2 = *pcVar8 - *pcVar6;
                                if (*pcVar8 - *pcVar6 == 0) {
                                    return 0x8000000000000014;
                                }
                                pcVar9 = pcVar9 + uVar10;
                                cVar3 = *pcVar9;
                                if (cVar3 == '\0') goto code_r0x00015421;
                                do {
                                    if (cVar3 != ';') break;
                                    pcVar9 = pcVar9 + 1;
                                    cVar3 = *pcVar9;
                                } while (cVar3 != '\0');
                                goto code_r0x0001541b;
                            }
code_r0x00015421:
                            uVar12 = uVar12 + 1;
                        }
                    }
                    puVar5 = fcn.00014de0();
                    if (puVar5 != NULL) {
                        if (((*0x16790 != NULL) && (uVar12 << 4 != 0)) && (puVar5 != *0x16790)) {
                            arg2 = puVar5;
                            fcn.000102a0(puVar5,*0x16790,uVar12 << 4);
                        }
                        cVar3 = *arg1;
                        uVar10 = uVar11;
                        while (cVar3 != '\0') {
                            uVar10 = uVar10 + 1;
                            cVar3 = *(uVar10 + arg1);
                        }
                        iVar7 = fcn.00014e3c(arg2,uVar10 + 1,arg1);
                        puVar5[uVar12 * 2] = iVar7;
                        if (iVar7 != 0) {
                            iVar1 = *arg2_00;
                            piVar2 = arg2_00;
                            while (iVar1 != 0) {
                                piVar2 = piVar2 + 1;
                                uVar11 = uVar11 + 1;
                                iVar1 = *piVar2;
                            }
                            iVar7 = fcn.00014e3c(arg2,uVar11 * 2 + 2,arg2_00);
                            puVar5[uVar12 * 2 + 1] = iVar7;
                            if (iVar7 != 0) {
                                puVar5[uVar12 * 2 + 2] = 0;
                                puVar5[uVar12 * 2 + 3] = 0;
                                if (*0x16790 != NULL) {
                                    (**(*0x167a0 + 0x48))();
                                }
                                *0x16790 = puVar5;
                                return 0;
                            }
                            (**(*0x167a0 + 0x48))(puVar5[uVar12 * 2]);
                        }
                        (**(*0x167a0 + 0x48))(puVar5);
                    }
                    return 0x8000000000000009;
                }
            }
            else if (*arg2 != '\0') {
                puVar13 = arg2;
                do {
                    arg2 = *arg1 & 0xffffff;
                    if ((*arg1 & 0xffffff) == (*puVar13 & 0xffffff)) goto code_r0x00015375;
                    puVar13 = puVar13 + 3;
                } while (*puVar13 != '\0');
            }
        }
        uVar4 = 0x8000000000000003;
    }
    return uVar4;
}


/* fcn.00010e30 @ 0x10e30 */

int64_t fcn.00010e30(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t in_R9;
    uint64_t uVar3;
    uchar auStack_358 [8];
    uint16_t uStack_350;
    uchar auStack_338 [160];
    uchar auStack_298 [4];
    uint32_t uStack_294;
    uint8_t auStack_70 [104];
    
    if (arg1 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = (**arg1)(arg1,auStack_358,auStack_298);
        if (iVar1 < 0) {
            if (iVar1 != -0x7fffffffffffffed) {
                return iVar1;
            }
            fcn.00013e60(auStack_338,0xa0,0x16310,in_R9);
        }
        else {
            iVar1 = fcn.00013e60(auStack_338,0xa0,0x162a8,in_R9);
            uVar3 = 0;
            if (uStack_294 != 0) {
                do {
                    iVar2 = fcn.00013e60(auStack_338 + iVar1 * 2,iVar1 * -2 + 0xa0,0x162c0,auStack_70[uVar3]);
                    iVar1 = iVar1 + iVar2;
                    uVar3 = uVar3 + 1;
                } while (uVar3 < uStack_294);
            }
            in_R9 = uStack_350;
            fcn.00013e60(auStack_338 + (iVar1 + -1) * 2,(iVar1 + -1) * -2 + 0xa0,0x162d0,in_R9);
        }
        if (*0x16790 != 0) {
            fcn.00015530();
            *0x16790 = 0;
        }
        iVar1 = fcn.000152f4(0x16260,*0x16190,auStack_338,CONCAT71(in_R9 >> 8,1));
        if (-1 < iVar1) {
            iVar1 = fcn.000152f4(0x16264,*0x161a8,auStack_338,0);
        }
    }
    return iVar1;
}


/* fcn.00015acc @ 0x15acc */

int64_t fcn.00015acc(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar2 = fcn.00015a50();
    if (iVar2 != 0) {
        iVar3 = fcn.00014de0();
        if (iVar3 != 0) {
            iVar1 = *(iVar2 + 0x78);
            *(iVar1 + 0x24) = arg1;
            *(iVar1 + 0x38) = iVar3;
            *(iVar1 + 0x30) = arg1;
            *(iVar2 + 0xa8) = 0;
            *(iVar2 + 0x90) = (arg1 & 0xffffffffU) + iVar3;
            *(iVar2 + 0x88) = iVar3;
            *(iVar2 + 0x98) = iVar3;
            *(iVar2 + 0xa0) = iVar3;
            return iVar2;
        }
        (**(*0x167a0 + 0x48))(iVar2);
    }
    return 0;
}


/* fcn.00015c28 @ 0x15c28 */

int64_t fcn.00015c28(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint32_t auStackX_18 [4];
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar6 = 0;
    uVar5 = arg2 & 0xffffffff;
    auStackX_18[0] = 0;
    iVar4 = arg2;
    if (arg3 == '\0') {
        if (*(iVar3 + 0x84) != 0) {
            fcn.00015bcc(arg1,*(iVar3 + 0x84) - 1,auStackX_18);
            uVar6 = auStackX_18[0];
            if ((*(iVar3 + 0x90 + uVar6 * 0x28) - *(iVar3 + 0xa0 + uVar6 * 0x28) < uVar5) &&
               (auStackX_18[0] < *(iVar3 + 0x80) - 1U)) {
                uVar6 = auStackX_18[0] + 1;
            }
        }
        iVar2 = *(iVar3 + 0xa0 + uVar6 * 0x28);
        if (uVar5 <= *(iVar3 + 0x90 + uVar6 * 0x28) - iVar2) {
            piVar1 = iVar3 + 0xa8 + uVar6 * 0x28;
            *piVar1 = *piVar1 + iVar4;
            *(iVar3 + 0xa0 + uVar6 * 0x28) = uVar5 + iVar2;
            *(iVar3 + 0x84) = *(iVar3 + 0x84) + iVar4;
            return iVar2;
        }
    }
    else {
        if (*(iVar3 + 0x84) != 0) {
            fcn.00015bcc(arg1,0,auStackX_18);
            uVar6 = auStackX_18[0];
            if ((auStackX_18[0] != 0) && (*(iVar3 + 0x98 + uVar6 * 0x28) - *(iVar3 + 0x88 + uVar6 * 0x28) < uVar5)) {
                uVar6 = auStackX_18[0] - 1;
            }
        }
        iVar2 = *(iVar3 + 0x98 + uVar6 * 0x28);
        if (uVar5 <= iVar2 - *(iVar3 + 0x88 + uVar6 * 0x28)) {
            piVar1 = iVar3 + 0xa8 + uVar6 * 0x28;
            *piVar1 = *piVar1 + iVar4;
            *(iVar3 + 0x98 + uVar6 * 0x28) = iVar2 - uVar5;
            *(iVar3 + 0x84) = *(iVar3 + 0x84) + iVar4;
            return *(iVar3 + 0x98 + uVar6 * 0x28);
        }
    }
    return 0;
}


/* fcn.00015d68 @ 0x15d68 */

int fcn.00015d68(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    char cVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int iVar8;
    
    cVar5 = arg3;
    uVar3 = *(arg1 + 0x84);
    uVar7 = arg2 & 0xffffffff;
    if (uVar3 == 0) {
        return 0;
    }
    if (uVar3 < arg2) {
        uVar7 = uVar3;
    }
    iVar8 = 0;
    *(arg1 + 0x84) = uVar3 - uVar7;
    if (cVar5 == '\0') {
        uVar4 = *(arg1 + 0x80) - 1;
    }
    else {
        uVar4 = 0;
        iVar8 = 0;
    }
    do {
        uVar3 = *(arg1 + 0xa8 + uVar4 * 0x28);
        if (uVar3 != 0) {
            uVar6 = uVar7;
            if (uVar6 <= uVar3) {
                piVar1 = arg1 + 0xa8 + uVar4 * 0x28;
                *piVar1 = *piVar1 - uVar6;
                if (cVar5 == '\0') {
                    piVar2 = arg1 + 0xa0 + uVar4 * 0x28;
                    *piVar2 = *piVar2 - uVar7;
                }
                else {
                    piVar2 = arg1 + 0x98 + uVar4 * 0x28;
                    *piVar2 = *piVar2 + uVar7;
                }
                return iVar8 + uVar6;
            }
            piVar1 = arg1 + 0xa8 + uVar4 * 0x28;
            *piVar1 = *piVar1 - uVar3;
            uVar7 = uVar6 - uVar3;
            iVar8 = iVar8 + uVar3;
            if (cVar5 == '\0') {
                piVar2 = arg1 + 0xa0 + uVar4 * 0x28;
                *piVar2 = *piVar2 - uVar3;
            }
            else {
                piVar2 = arg1 + 0x98 + uVar4 * 0x28;
                *piVar2 = *piVar2 + uVar3;
            }
        }
        uVar4 = uVar4 + ((-(cVar5 != '\0') & 2) - 1);
    } while( true );
}


/* fcn.0001113c @ 0x1113c */

uint64_t fcn.0001113c(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t arg1_00;
    uint64_t uVar3;
    uint64_t uVar4;
    ulong uVar5;
    
    uVar4 = 0;
    uVar3 = uVar4;
    if (arg2 != 0) {
        do {
            arg1_00 = fcn.00015acc(*(arg1 + 0x110) + *(arg1 + 0x114));
            if (arg1_00 == 0) {
                uVar4 = 0x8000000000000009;
                break;
            }
            if (*(arg1 + 0x114) != 0) {
                uVar5 = 0;
                fcn.00015c28(arg1_00,*(arg1 + 0x114),0);
                if (*(arg1 + 0x114) != 0) {
                    fcn.00015d68(arg1_00,*(arg1 + 0x114),CONCAT71(uVar5 >> 8,1));
                }
            }
            piVar1 = arg1_00 + 0x10;
            uVar3 = uVar3 + 1;
            *piVar1 = arg1 + 0xc0;
            piVar2 = *(arg1 + 200);
            *(arg1_00 + 0x18) = piVar2;
            *piVar2 = piVar1;
            *(arg1 + 200) = piVar1;
            *(arg1 + 0xd0) = *(arg1 + 0xd0) + *(arg1_00 + 0x84);
            *(arg1 + 0xd4) = *(arg1 + 0xd4) + 1;
        } while (uVar3 < arg2);
    }
    *(arg1 + 0xd8) = *(arg1 + 0xd8) + uVar3;
    return uVar4;
}


/* fcn.000157dc @ 0x157dc */

int64_t fcn.000157dc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    ushort *puVar3;
    int64_t iVar4;
    char *pcVar5;
    uint64_t uVar6;
    ulong **arg3_00;
    ushort *puVar7;
    ulong **ppuVar8;
    uint64_t auStackX_10 [2];
    ulong *puStackX_20;
    int64_t var_248h;
    int64_t iStack_2f8;
    ulong *puStack_2f0;
    ulong *apuStack_2e8 [4];
    ulong *apuStack_2c8 [82];
    
    iStack_2f8 = 0;
    arg3_00 = arg3;
    auStackX_10[0] = arg2;
    iVar2 = fcn.00015714(arg1,&iStack_2f8);
    if (iVar2 == 0) {
        arg3_00 = &puStackX_20;
        auStackX_10[0] = 0;
        iVar2 = (**(*0x167a0 + 0x98))(arg1,0x160f0);
        if ((-1 < iVar2) && (iVar2 = (**puStackX_20)(puStackX_20,auStackX_10), -1 < iVar2)) {
            arg3_00 = &puStack_2f0;
            iVar2 = (**(*0x167a0 + 0x98))(auStackX_10[0],0x16140);
            if (-1 < iVar2) {
                arg3_00 = apuStack_2c8;
                iVar2 = (**puStack_2f0)(puStack_2f0,0);
                if ((-1 < iVar2) || (iVar2 == -0x7fffffffffffffed)) {
                    ppuVar8 = apuStack_2c8;
                    (*puStackX_20[1])(puStackX_20,auStackX_10[0]);
                    goto code_r0x000158fe;
                }
            }
            (*puStackX_20[1])(puStackX_20,auStackX_10[0]);
        }
        uVar6 = auStackX_10[0];
    }
    else {
        ppuVar8 = *(iStack_2f8 + 0x78);
code_r0x000158fe:
        uVar1 = *(ppuVar8 + 4);
        if ((uVar1 != 0) && (apuStack_2e8 != ppuVar8 + 0x45)) {
            arg3_00 = uVar1;
            fcn.000102a0(apuStack_2e8,ppuVar8 + 0x45,arg3_00);
        }
        iVar2 = 0;
        uVar6 = uVar1;
    }
    if (-1 < iVar2) {
        iVar2 = uVar6 * 4 + 0xc;
        puVar3 = fcn.00014e10(iVar2);
        if (puVar3 == NULL) {
            iVar2 = -0x7ffffffffffffff7;
        }
        else {
            *arg3 = puVar3;
            ppuVar8 = apuStack_2e8;
            if (uVar6 != 0) {
                puVar7 = puVar3;
                do {
                    fcn.00013ec4(puVar3,puVar7 + (iVar2 - puVar3),arg3_00,*ppuVar8);
                    puVar7 = *arg3;
                    ppuVar8 = ppuVar8 + 1;
                    iVar4 = fcn.00016010(puVar3,puVar7 + (iVar2 - puVar3) >> 1);
                    puVar3 = puVar3 + iVar4;
                    uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
            }
            pcVar5 = fcn.000150f4(arg1);
            if (pcVar5 != NULL) {
                while( true ) {
                    if ((*pcVar5 == '\x7f') && (pcVar5[1] == -1)) {
                        uVar6 = 0;
                        goto code_r0x000159e5;
                    }
                    if ((*pcVar5 == '\x03') && (pcVar5[1] == '\x14')) break;
                    pcVar5 = pcVar5 + *(pcVar5 + 2);
                }
                uVar6 = *(pcVar5 + 4);
code_r0x000159e5:
                if (uVar6 != 0) {
                    *puVar3 = 0x5c;
                    puVar3 = puVar3 + 1;
                    fcn.00013ec4(puVar3,(*arg3 - puVar3) + iVar2,arg3_00,uVar6);
                    iVar2 = fcn.00016010(puVar3,(*arg3 - puVar3) + iVar2 >> 1);
                    puVar3 = puVar3 + iVar2;
                }
            }
            *puVar3 = 0;
            iVar2 = 0;
        }
    }
    return iVar2;
}


/* fcn.00011214 @ 0x11214 */

int64_t fcn.00011214(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ulong uVar4;
    int64_t iVar5;
    
    uVar4 = (**(*0x167a0 + 0x18))(0x10);
    iVar5 = 0;
    if (*(arg1 + 0xd4) == 0) {
        if (0x10000 < *(arg1 + 0xd8) + 0x40) goto code_r0x000112a2;
        fcn.0001113c(arg1,0x40);
        if (*(arg1 + 0xd4) == 0) goto code_r0x000112a2;
    }
    piVar1 = arg1 + 0xc0;
    iVar2 = *piVar1;
    piVar3 = *piVar1;
    iVar5 = iVar2 + -0x10;
    if (piVar3 != piVar1) {
        *piVar1 = *piVar3;
        *(*piVar3 + 8) = piVar1;
    }
    *(arg1 + 0xd0) = *(arg1 + 0xd0) - *(iVar2 + 0x74);
    *(arg1 + 0xd4) = *(arg1 + 0xd4) + -1;
    *(iVar2 + -8) = *(iVar2 + -8) + 1;
code_r0x000112a2:
    (**(*0x167a0 + 0x20))(uVar4);
    return iVar5;
}


/* fcn.000112c4 @ 0x112c4 */

void fcn.000112c4(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong in_R8;
    
    uVar3 = (**(*0x167a0 + 0x18))(0x10);
    *(arg2 + 8) = *(arg2 + 8) + -1;
    if (*(arg2 + 8) == 1) {
        if (*(arg2 + 0x84) != 0) {
            in_R8 = 0;
            fcn.00015d68(arg2,*(arg2 + 0x84),0);
        }
        iVar4 = fcn.00015c28(arg2,4,CONCAT71(in_R8 >> 8,1));
        if (iVar4 != 0) {
            fcn.00015d68(arg2,4,0);
        }
        piVar1 = arg2 + 0x10;
        *piVar1 = arg1 + 0xc0;
        piVar2 = *(arg1 + 200);
        *(arg2 + 0x18) = piVar2;
        *piVar2 = piVar1;
        *(arg1 + 200) = piVar1;
        *(arg1 + 0xd0) = *(arg1 + 0xd0) + *(arg2 + 0x84);
        *(arg1 + 0xd4) = *(arg1 + 0xd4) + 1;
    }
    //WARNING: Could not recover jumptable at 0x00011377. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x167a0 + 0x20))(uVar3);
    return;
}


/* fcn.00015f8c @ 0x15f8c */

void fcn.00015f8c(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    
    piVar3 = *(arg1 + 0x20);
    piVar1 = *piVar3;
    while (piVar2 = piVar1, piVar3 != arg1 + 0x20) {
        *(*piVar3 + 8) = piVar3[1];
        *piVar3[1] = *piVar3;
        piVar1 = piVar3 + -1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
            fcn.00015b58(piVar3[0xd]);
            (**(*0x167a0 + 0x48))(piVar3 + -2);
        }
        piVar1 = *piVar2;
        piVar3 = piVar2;
    }
    *(arg1 + 0x34) = 0;
    *(arg1 + 0x30) = 0;
    return;
}


/* fcn.000121ec @ 0x121ec */

ulong fcn.000121ec(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uchar auStack_28 [4];
    ushort uStack_24;
    ulong uStack_20;
    int64_t aiStack_18 [2];
    
    iVar1 = (**(*0x167a0 + 0x118))(arg2,0x160c0,aiStack_18,arg1,arg2,2);
    if (-1 < iVar1) {
        fcn.000102a0(auStack_28,0x16250,6);
        uStack_24 = arg3;
        iVar1 = fcn.00014fbc(aiStack_18[0],auStack_28);
        if (iVar1 != 0) {
            uStack_20 = 0;
            iVar2 = (**(*0x167a0 + 0x148))(&uStack_20,0x160c0,iVar1,0);
            if (-1 < iVar2) {
                if (arg4 != 0) {
                    *arg4 = iVar1;
                }
                return uStack_20;
            }
            (**(*0x167a0 + 0x48))(iVar1);
        }
    }
    return 0;
}


/* fcn.00013e24 @ 0x13e24 */

int64_t fcn.00013e24(void)

{
    if (*0x167b0 == 0) {
        (**(*0x167a0 + 0x140))(0x160e0,0,0x167b0);
    }
    return *0x167b0;
}


/* fcn.00011eac @ 0x11eac */

ulong fcn.00011eac(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *arg1_00;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *puVar10;
    uint32_t uVar11;
    uchar uStackX_8;
    
    iVar3 = *(arg1 + 0x40);
    uStackX_8 = 1;
    iVar4 = *(iVar3 + 0x78);
    uVar1 = *(iVar4 + 0x18);
    uVar5 = *(arg1 + 0x100) != 0;
    uVar8 = uVar5 | 4;
    if (*(arg1 + 0x104) == 0) {
        uVar8 = uVar5;
    }
    uVar11 = 0;
    iVar6 = 0;
    uVar5 = 0;
    if ((*(arg1 + 0x108) != 0) && (uVar2 = *(arg1 + 0x70), uVar5 = uVar11, uVar2 != 0)) {
        uStackX_8 = 0;
        if (*(iVar4 + 0x20) < uVar2) {
            iVar6 = 0;
            if ((uVar1 & 0x10) == 0) {
                uVar8 = uVar8 | 8;
            }
            else {
                uVar8 = uVar8 | 0x10;
            }
        }
        else {
            uVar8 = uVar8 | 2;
            iVar6 = fcn.00014de0(iVar4,uVar2 << 5);
            if (iVar6 == 0) {
                return 0x8000000000000009;
            }
            uVar9 = 0;
            for (puVar10 = *(arg1 + 0x60); uVar5 = uVar2, puVar10 != arg1 + 0x60; puVar10 = *puVar10) {
                arg1_00 = uVar9 * 0x20 + iVar6;
                if (arg1_00 != puVar10 + 2) {
                    fcn.000102a0(arg1_00,puVar10 + 2,0x20);
                }
                uVar9 = uVar9 + 1;
            }
        }
    }
    uVar11 = uVar8 | 8;
    if (*(arg1 + 0x10c) == 0) {
        uVar11 = uVar8;
    }
    uVar7 = (**(iVar3 + 0x30))(iVar3,uVar11,uVar11 ^ uVar1,uStackX_8,uVar5,iVar6);
    if (iVar6 != 0) {
        (**(*0x167a0 + 0x48))(iVar6);
    }
    return uVar7;
}


/* fcn.00012f8c @ 0x12f8c */

void fcn.00012f8c(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    
    fcn.000112c4(*(*(*(arg1 + 0x10) + 8) + 0x18),*(arg1 + 0x68));
    iVar1 = *0x167a0;
    *(arg1 + 0x68) = 0;
    (**(iVar1 + 0x70))(*(arg1 + 0x28));
    *(*arg1 + 8) = *(arg1 + 8);
    **(arg1 + 8) = *arg1;
    //WARNING: Could not recover jumptable at 0x00012fe1. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x167a0 + 0x48))(arg1);
    return;
}


/* fcn.0001205c @ 0x1205c */

ulong fcn.0001205c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    int64_t iVar1;
    uint8_t uVar2;
    char cVar3;
    int64_t *piVar4;
    ulong *puVar5;
    ulong *puVar6;
    ulong uVar7;
    ulong *puVar8;
    int64_t *piVar9;
    uint64_t arg3_00;
    
    arg1_00 = *(*(arg1 + 8) + 0x18);
    iVar1 = *(*(arg1_00 + 0x40) + 0x78);
    if (arg2 == '\0') {
        if (arg3 == 0) {
            cVar3 = '\0';
            puVar6 = *(arg1 + 0x70);
            puVar8 = *puVar6;
            while (puVar6 != arg1 + 0x70) {
                cVar3 = fcn.00011fe4(arg1,puVar6);
                puVar6 = puVar8;
                puVar8 = *puVar8;
            }
        }
        else {
            cVar3 = fcn.00011fe4(arg1,arg4);
        }
        if (cVar3 == '\0') {
            return 0;
        }
    }
    else {
        uVar2 = 0;
        piVar4 = fcn.00014de0(arg1,0x18);
        if (piVar4 == NULL) {
            return 0x8000000000000009;
        }
        puVar8 = NULL;
        for (puVar6 = *(arg1_00 + 0x60); puVar6 != arg1_00 + 0x60; puVar6 = *puVar6) {
            arg3_00 = *(iVar1 + 4);
            if ((arg3_00 == 0) || (arg3 == puVar6 + 2)) {
                puVar5 = NULL;
            }
            else {
                puVar5 = fcn.000102e0(arg3,puVar6 + 2,arg3_00);
            }
            puVar8 = puVar6;
            if (puVar5 == NULL) {
                uVar2 = 1;
                break;
            }
        }
        iVar1 = *(*(arg1 + 8) + 0x18);
        piVar9 = -uVar2 & puVar8;
        if (piVar9 == NULL) {
            piVar9 = fcn.00014de0();
            if (piVar9 == NULL) {
                return 0x8000000000000009;
            }
            if (piVar9 + 2 != arg3) {
                fcn.000102a0(piVar9 + 2,arg3,0x20);
            }
            piVar9[6] = 0;
            *piVar9 = iVar1 + 0x60;
            puVar6 = *(iVar1 + 0x68);
            piVar9[1] = puVar6;
            *puVar6 = piVar9;
            *(iVar1 + 0x68) = piVar9;
            *(iVar1 + 0x70) = *(iVar1 + 0x70) + 1;
        }
        piVar9[6] = piVar9[6] + 1;
        piVar4[2] = piVar9;
        *piVar4 = arg1 + 0x70;
        puVar6 = *(arg1 + 0x78);
        piVar4[1] = puVar6;
        *puVar6 = piVar4;
        *(arg1 + 0x78) = piVar4;
    }
    uVar7 = fcn.00011eac(arg1_00);
    return uVar7;
}


/* fcn.00011b1c @ 0x11b1c */

int64_t fcn.00011b1c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    char cVar5;
    uchar auStackX_10 [8];
    
    iVar4 = *(arg1 + 0x18);
    cVar5 = arg3;
    if ((arg2 == '\0') && (*(iVar4 + 0x58) = *(iVar4 + 0x58) + 1, *(iVar4 + 0x58) == 1)) {
        iVar3 = *(iVar4 + 0x40);
        iVar2 = (**(iVar3 + 8))(iVar3);
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar3 = (**(iVar3 + 0x18))(iVar3,0,0);
        if (iVar3 < 0) {
            return iVar3;
        }
        iVar3 = (**(*0x167a0 + 0x58))(*(iVar4 + 0xf0),1,500000);
        if (iVar3 < 0) {
            return iVar3;
        }
        iVar3 = fcn.00013e24();
        cVar1 = (**(iVar3 + 8))(0x160a0,0x10004);
        if (cVar1 == '\x01') {
            iVar3 = *(*(arg1 + 0x18) + 0x40);
            (**(iVar3 + 0x58))(iVar3,auStackX_10,0);
            if (*(*(iVar3 + 0x78) + 0x28c) == '\0') {
                return -0x7ffffffffffffffa;
            }
        }
        iVar3 = (**(*0x167a0 + 0x58))(*(iVar4 + 0xf8),1,5000000);
        if (iVar3 < 0) {
            return iVar3;
        }
    }
    if (*(iVar4 + 0xe8) != cVar5) {
        iVar3 = (**(*0x167a0 + 0x58))(*(iVar4 + 0xe0),cVar5 != '\0',100000);
        if (iVar3 < 0) {
            return iVar3;
        }
        *(iVar4 + 0xe8) = cVar5;
    }
    iVar4 = fcn.00011eac(iVar4);
    return iVar4;
}


/* fcn.0001137c @ 0x1137c */

int64_t fcn.0001137c(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t iStackX_8;
    
    iVar2 = *(arg1 + 0x40);
    while( true ) {
        iStackX_8 = 0;
        iVar5 = (**(iVar2 + 0x58))(iVar2,0,&iStackX_8);
        iVar4 = iStackX_8;
        if (iVar5 < 0) {
            return iVar5;
        }
        if (iStackX_8 == 0) break;
        if ((*(iStackX_8 + -0x29) == 0x5742544d) && (*(iStackX_8 + -1) != '\0')) {
            uVar6 = (**(*0x167a0 + 0x18))(8);
            piVar1 = iVar4 + -0x21;
            *piVar1 = arg1 + 0x78;
            piVar3 = *(arg1 + 0x80);
            *(iVar4 + -0x19) = piVar3;
            *piVar3 = piVar1;
            iVar5 = *0x167a0;
            *(arg1 + 0x80) = piVar1;
            *(iVar4 + -1) = 0;
            (**(iVar5 + 0x20))(uVar6);
        }
        if (iStackX_8 == 0) {
            return 0;
        }
    }
    return 0;
}


/* fcn.000102e0 @ 0x102e0 */

int64_t fcn.000102e0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00011fe4 @ 0x11fe4 */

bool fcn.00011fe4(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int *piVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    
    piVar4 = *(arg2 + 0x10);
    iVar5 = *(*(arg1 + 8) + 0x18);
    *(*arg2 + 8) = *(arg2 + 8);
    **(arg2 + 8) = *arg2;
    (**(*0x167a0 + 0x48))(arg2);
    piVar1 = piVar4 + 6;
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    if (iVar3 == 0) {
        piVar2 = iVar5 + 0x70;
        *piVar2 = *piVar2 + -1;
        *(*piVar4 + 8) = piVar4[1];
        *piVar4[1] = *piVar4;
        (**(*0x167a0 + 0x48))(piVar4);
    }
    return iVar3 == 0;
}


/* fcn.00014fbc @ 0x14fbc */

ulong fcn.00014fbc(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t arg1_00;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    uVar2 = 0;
    if (arg2 == 0) {
        iVar3 = 0x16740;
        if (arg1 != 0) {
            iVar3 = arg1;
        }
        iVar4 = iVar3;
        arg1_00 = fcn.00014e7c(iVar3);
        if (arg1_00 != 0) {
            uVar2 = fcn.00014e3c(iVar4,arg1_00,iVar3);
        }
    }
    else {
        uVar1 = *(arg2 + 2);
        iVar3 = fcn.00014de0(arg1,uVar1 + 4);
        if (iVar3 != 0) {
            if ((uVar1 != 0) && (iVar3 != arg2)) {
                iVar3 = fcn.000102a0(iVar3,arg2,uVar1);
            }
            iVar4 = *(iVar3 + 2) + iVar3;
            if (iVar4 != 0x16740) {
                fcn.000102a0(iVar4,0x16740,4);
            }
            uVar2 = fcn.00014ecc(arg1,iVar3);
            (**(*0x167a0 + 0x48))(iVar3);
        }
    }
    return uVar2;
}


/* fcn.0001237c @ 0x1237c */

uint64_t fcn.0001237c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint16_t *arg2_00;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint16_t *arg1_00;
    
    uVar2 = 0;
    uVar4 = uVar2;
    uVar5 = uVar2;
    if (arg3 != 0) {
        do {
            uVar1 = uVar4 + 1;
            if (uVar1 < arg3) {
                arg1_00 = uVar4 * 2 + arg2;
                uVar3 = uVar1;
                do {
                    if ((*arg1_00 & 0xfff) == (*(arg2 + uVar3 * 2) & 0xfff)) {
                        uVar5 = uVar5 + 1;
                        if (uVar1 < arg3) {
                            arg2_00 = uVar1 * 2 + arg2;
                            iVar6 = arg3 - uVar1;
                            uVar4 = uVar4 + iVar6;
                            do {
                                if (arg1_00 != arg2_00) {
                                    fcn.000102a0(arg1_00,arg2_00,2);
                                }
                                arg1_00 = arg1_00 + 1;
                                arg2_00 = arg2_00 + 1;
                                iVar6 = iVar6 + -1;
                            } while (iVar6 != 0);
                        }
                        break;
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 < arg3);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < arg3);
    }
    *arg4 = arg3 - uVar5;
    if (uVar5 != 0) {
        uVar2 = (**(*0x167a8 + 0x58))(*(arg1 + 0x38),0x160b0,3,(arg3 - uVar5) * 2,arg2);
    }
    return uVar2;
}


/* fcn.00011a44 @ 0x11a44 */

ulong fcn.00011a44(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t aiStackX_8 [4];
    
    if (arg1 + 0x40 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = fcn.000155a8(arg1 + 0x40,0x11a34,arg1 + 0x28,aiStackX_8);
    }
    if ((iVar1 < 0) || (aiStackX_8[0] != 0)) {
        uVar2 = 0x8000000000000007;
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.000122bc @ 0x122bc */

void fcn.000122bc(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    int64_t iVar2;
    uint16_t uVar3;
    uint in_register_00000014;
    uint64_t uVar4;
    int *in_stack_00000028;
    
    iVar2 = *(*(*(arg1 + 0x18) + 0x40) + 0x78);
    *arg3 = 0x8100;
    *in_stack_00000028 = *in_stack_00000028 + 4;
    *arg4 = *arg4 + -4;
    arg4 = *arg4;
    uVar4 = *(iVar2 + 8);
    if (*(CONCAT44(in_register_00000014,arg2) + 0x18) == 0) {
        uVar1 = *(CONCAT44(in_register_00000014,arg2) + 0x10);
        *(uVar4 + 2 + arg4) = uVar1 << 8 | uVar1 >> 8;
    }
    else {
        if ((uVar4 - 2 != 0) && (arg4 != arg4 + 4)) {
            fcn.000102a0(arg4,arg4 + 4,uVar4 - 2);
        }
        *((uVar4 - 2) + arg4) = 0x81;
    }
    uVar1 = *(arg1 + 0x5c);
    uVar3 = uVar1 & 0xfff;
    *(uVar4 + arg4) = uVar3 | *(uVar4 + arg4) & 0xe000;
    *(uVar4 + arg4) = uVar1 << 8 | (*(arg1 + 0x5e) << 0xd | uVar3) >> 8;
    return;
}


/* fcn.00015e1c @ 0x15e1c */

uint32_t fcn.00015e1c(int64_t arg1,ulong noname_1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int *piVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    
    if ((arg2 == 0) || (uVar3 = *(arg1 + 0x84), uVar3 == 0)) {
        uVar3 = 0;
    }
    else {
        if (uVar3 < arg2) {
            arg2 = uVar3;
        }
        uVar5 = 0;
        if (*(arg1 + 0x80) != 0) {
            piVar2 = arg1 + 0xa8;
            do {
                if ((*piVar2 != 0) && (*piVar2 != 0)) break;
                uVar3 = uVar5 + 1;
                uVar5 = uVar3;
                piVar2 = piVar2 + 10;
            } while (uVar3 < *(arg1 + 0x80));
        }
        uVar3 = *(arg1 + 0xa8 + uVar5 * 0x28);
        iVar1 = *(arg1 + 0x98 + uVar5 * 0x28);
        if (uVar3 < arg2) {
            if ((uVar3 != 0) && (arg3 != iVar1)) {
                fcn.000102a0(arg3,iVar1,uVar3);
            }
            arg3 = arg3 + uVar3;
            arg2 = arg2 - uVar3;
            while (uVar4 = uVar5 + 1, uVar5 = uVar4, uVar4 < *(arg1 + 0x80)) {
                uVar4 = *(arg1 + 0xa8 + uVar5 * 0x28);
                if (arg2 <= uVar4) {
                    uVar3 = uVar3 + arg2;
                    iVar1 = *(arg1 + 0x98 + uVar5 * 0x28);
                    if ((arg2 != 0) && (arg3 != iVar1)) {
                        fcn.000102a0(arg3,iVar1,arg2);
                    }
                    break;
                }
                iVar1 = *(arg1 + 0x98 + uVar5 * 0x28);
                arg2 = arg2 - uVar4;
                uVar3 = uVar3 + uVar4;
                if ((uVar4 != 0) && (arg3 != iVar1)) {
                    fcn.000102a0(arg3,iVar1,uVar4);
                }
                arg3 = arg3 + *(arg1 + 0xa8 + uVar5 * 0x28);
            }
        }
        else {
            if ((arg2 != 0) && (arg3 != iVar1)) {
                fcn.000102a0(arg3,iVar1,arg2);
            }
            uVar3 = arg2;
        }
    }
    return uVar3;
}


/* fcn.00015bcc @ 0x15bcc */

int64_t fcn.00015bcc(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    uint64_t uVar4;
    int *piVar5;
    uint32_t uVar6;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (arg2 < *(iVar3 + 0x84)) {
        uVar4 = 0;
        if (*(iVar3 + 0x80) != 0) {
            piVar5 = iVar3 + 0xa8;
            uVar6 = 0;
            do {
                iVar1 = *piVar5;
                if (arg2 < iVar1 + uVar6) {
                    if (arg3 != 0) {
                        *arg3 = uVar4;
                    }
                    return (arg2 - uVar6) + *(iVar3 + 0x98 + uVar4 * 0x28);
                }
                uVar2 = uVar4 + 1;
                uVar4 = uVar2;
                piVar5 = piVar5 + 10;
                uVar6 = iVar1 + uVar6;
            } while (uVar2 < *(iVar3 + 0x80));
        }
    }
    return 0;
}


/* fcn.00012fe8 @ 0x12fe8 */

//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

void fcn.00012fe8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint8_t *arg2_00;
    int64_t iVar2;
    int64_t iVar3;
    ulong *puVar4;
    int64_t *piVar5;
    int64_t iVar6;
    ulong *puVar7;
    uint8_t uStackX_8;
    ulong *puStackX_18;
    int8_t var_40h;
    int64_t var_50h;
    int64_t aiStack_88 [3];
    int iStack_70;
    int iStack_6c;
    uint uStack_68;
    int iStack_64;
    uchar uStack_60;
    char cStack_5f;
    char cStack_5e;
    uint16_t uStack_5c;
    int64_t var_50h_2;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int16_t var_28h;
    uint32_t var_26h;
    
    iVar6 = *(arg1 + 0x18);
    puStackX_18 = NULL;
    iVar1 = *(*(iVar6 + 0x40) + 0x78);
    arg2_00 = fcn.00015bcc(arg2,0,0);
    iVar2 = 0;
    uStackX_8 = 1;
    uStack_60 = 0;
    cStack_5f = '\0';
    cStack_5e = '\0';
    if ((*(iVar1 + 4) != 0) && (iVar1 + 0x228 != arg2_00)) {
        iVar2 = fcn.000102e0(iVar1 + 0x228,arg2_00,*(iVar1 + 4));
    }
    iVar3 = 0;
    if (iVar2 == 0) {
code_r0x0001310a:
        fcn.00010280(aiStack_88,0x10);
        iStack_70 = *(arg2 + 0x84);
        iStack_6c = *(iVar1 + 8);
        iStack_64 = iStack_70 - iStack_6c;
        uStack_68 = *(iVar1 + 4);
        uStack_5c = *(arg2_00 + *(iVar1 + 4) * 2) << 8 | *(arg2_00 + *(iVar1 + 4) * 2) >> 8;
        if (cStack_5e == '\0') goto code_r0x00013162;
    }
    else {
        uStackX_8 = 0;
        if ((*(iVar1 + 4) != 0) && (iVar1 + 0x248 != arg2_00)) {
            iVar3 = fcn.000102e0(iVar1 + 0x248,arg2_00,*(iVar1 + 4));
        }
        if (iVar3 == 0) {
            uStack_60 = 1;
            uStackX_8 = 2;
            goto code_r0x0001310a;
        }
        if ((*arg2_00 & 1) == 0) {
            cStack_5e = '\x01';
            goto code_r0x0001310a;
        }
        puVar7 = *(iVar6 + 0x60);
        while( true ) {
            iVar2 = 0;
            if (puVar7 == iVar6 + 0x60) break;
            if ((*(iVar1 + 4) != 0) && (arg2_00 != puVar7 + 2)) {
                iVar2 = fcn.000102e0(arg2_00,puVar7 + 2,*(iVar1 + 4));
            }
            puStackX_18 = puVar7;
            if (iVar2 == 0) {
                cStack_5f = '\x01';
                break;
            }
            puVar7 = *puVar7;
        }
        if (cStack_5f != '\0') goto code_r0x0001310a;
        cStack_5e = '\x01';
        uStackX_8 = 0;
        puStackX_18 = NULL;
        if (*(iVar6 + 0x10c) != 0) goto code_r0x0001310a;
    }
    if (*(*(arg1 + 0x18) + 0x10c) == 0) {
        return;
    }
code_r0x00013162:
    puVar7 = *(arg1 + 0x40);
    do {
        if (puVar7 == arg1 + 0x40) {
            return;
        }
        if ((*(puVar7 + 10) != '\0') && ((*(puVar7 + 0x18) == 0 || (*(puVar7 + 0x18) == uStack_5c)))) {
            if ((*(puVar7 + 0xc5) == '\0') && ((*(puVar7 + 0xcc) & uStackX_8) == 0)) {
                if ((*(puVar7 + 0xc3) != '\0') && (cStack_5f != '\0')) {
                    for (puVar4 = puVar7[0xb]; puVar4 != puVar7 + 0xb; puVar4 = *puVar4) {
                        if (puVar4[2] == puStackX_18) goto code_r0x000131df;
                    }
                }
            }
            else {
code_r0x000131df:
                piVar5 = fcn.00014de0();
                if (piVar5 != NULL) {
                    piVar5[2] = puVar7 + -3;
                    if (piVar5 + 3 != aiStack_88) {
                        fcn.000102a0(piVar5 + 3,aiStack_88,0x50);
                    }
                    iVar6 = (**(*0x167a0 + 0x50))(0x200,0x10,fcn.00012f8c,piVar5,piVar5 + 5);
                    if (iVar6 < 0) {
                        (**(*0x167a0 + 0x48))(piVar5);
                    }
                    else {
                        piVar5[0xd] = arg2;
                        *(arg2 + 8) = *(arg2 + 8) + 1;
                        if (puVar7[0x16] == 0x100) {
                            fcn.00012f8c(0,puVar7[0x14]);
                            puVar7[0x16] = puVar7[0x16] + -1;
                        }
                        piVar5[0xe] = *(puVar7 + 0x17);
                        *piVar5 = puVar7 + 0x14;
                        puVar4 = puVar7[0x15];
                        piVar5[1] = puVar4;
                        *puVar4 = piVar5;
                        puVar7[0x15] = piVar5;
                        puVar7[0x16] = puVar7[0x16] + 1;
                    }
                }
            }
        }
        puVar7 = *puVar7;
    } while( true );
}


/* fcn.00012df4 @ 0x12df4 */

ulong fcn.00012df4(uint32_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t arg1_00;
    int64_t *piVar4;
    ulong *puVar5;
    int64_t iVar6;
    int64_t arg3;
    uint in_register_0000000c;
    int64_t iVar7;
    uint64_t uVar8;
    
    iVar7 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = *(*(iVar7 + 8) + 0x18);
    if ((*(iVar7 + 0xa0) != 0) && (piVar1 = iVar7 + 0xb8, *piVar1 != piVar1)) {
        piVar3 = *piVar1;
        if (2 < *(piVar3[0xd] + 8)) {
            iVar6 = fcn.00011214(iVar2);
            if (iVar6 == 0) {
                return 0x8000000000000009;
            }
            arg1_00 = piVar3[0xd];
            if (iVar6 + 0x38 != arg1_00 + 0x38) {
                fcn.000102a0(iVar6 + 0x38,arg1_00 + 0x38,0x40);
            }
            uVar8 = *(arg1_00 + 0x84);
            arg3 = fcn.00015c28(iVar6,uVar8,0);
            fcn.00015e1c(arg1_00,uVar8,*(arg1_00 + 0x84),arg3);
            fcn.000112c4(iVar2,piVar3[0xd]);
            piVar3[0xd] = iVar6;
        }
        piVar4 = *piVar1;
        if (piVar4 != piVar1) {
            *piVar1 = *piVar4;
            *(*piVar4 + 8) = piVar1;
        }
        *(iVar7 + 200) = *(iVar7 + 200) + -1;
        uVar8 = 0;
        iVar2 = *(*(iVar2 + 0x40) + 0x78);
        iVar6 = fcn.00015bcc(piVar3[0xd],0,0);
        piVar3[0xb] = iVar6;
        piVar3[9] = iVar6;
        piVar3[10] = *(iVar2 + 4) + iVar6;
        piVar3[0xc] = *(iVar2 + 8) + iVar6;
        *piVar3 = iVar7 + 0xa8;
        puVar5 = *(iVar7 + 0xb0);
        piVar3[1] = puVar5;
        *puVar5 = piVar3;
        *(iVar7 + 0xb0) = piVar3;
        piVar4 = *(iVar7 + 0x80);
        *(*piVar4 + 8) = piVar4[1];
        *piVar4[1] = *piVar4;
        piVar1 = iVar7 + 0x90;
        *(iVar7 + 0xa0) = *(iVar7 + 0xa0) + -1;
        iVar2 = *piVar1;
        *piVar4 = iVar2;
        piVar4[1] = piVar1;
        *(iVar2 + 8) = piVar4;
        iVar2 = *0x167a0;
        *piVar1 = piVar4;
        puVar5 = piVar4[2];
        puVar5[1] = puVar5[1] & uVar8;
        puVar5[2] = piVar3 + 3;
        (**(iVar2 + 0x68))(*puVar5);
    }
    return 0;
}


/* fcn.000132d8 @ 0x132d8 */

int64_t fcn.000132d8(uint32_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *puVar8;
    uint32_t arg1_00;
    uint in_register_0000000c;
    int64_t arg1_01;
    uint64_t *puVar9;
    uint64_t uVar10;
    uint64_t *arg1_02;
    uint16_t uVar11;
    uint64_t uStackX_8;
    uint64_t uStackX_10;
    
    arg1_01 = CONCAT44(in_register_0000000c,arg1);
    iVar7 = *(arg1_01 + 0x40);
    if (**(iVar7 + 0x78) != 2) {
        return -0x7fffffffffffffed;
    }
    if (*(arg1_01 + 0x118) == 0) {
        iVar4 = fcn.00011214(arg1_01);
        *(arg1_01 + 0x118) = iVar4;
        if (iVar4 == 0) {
            return -0x7ffffffffffffff9;
        }
        fcn.00015c28(iVar4,*(arg1_01 + 0x110),0);
    }
    iVar4 = *(arg1_01 + 0x118);
    uStackX_8 = *(iVar4 + 0x84);
    arg1_00 = iVar4;
    uVar5 = fcn.00015bcc(arg1_00,0,0);
    puVar9 = &uStackX_8;
    iVar6 = (**(iVar7 + 0x68))(iVar7,&uStackX_10,puVar9,uVar5,0,0,0);
    if (iVar6 < 0) {
        return iVar6;
    }
    if (uStackX_10 != *(*(iVar7 + 0x78) + 8)) {
        return -0x7ffffffffffffff9;
    }
    if (uStackX_8 < uStackX_10) {
        return -0x7ffffffffffffff9;
    }
    uVar3 = 0;
    if ((*(iVar4 + 0x84) != uStackX_8) && (uVar2 = *(iVar4 + 0x84) - uStackX_8, uVar2 != 0)) {
        puVar9 = NULL;
        uVar3 = fcn.00015d68(iVar4,uVar2,0);
    }
    if (*(arg1_01 + 0x30) != 0) {
        puVar9 = NULL;
        uVar2 = *(*(*(arg1_01 + 0x40) + 0x78) + 4) * 2;
        uVar10 = uVar2;
        iVar7 = fcn.00015bcc(arg1_00,0,0);
        if ((*(iVar7 + uVar10) << 8 | *(iVar7 + uVar10) >> 8) == 0x8100) {
            uVar11 = *(iVar7 + 2 + uVar10);
            uVar11 = (uVar11 & 0xf) << 8 | uVar11 >> 8;
            if ((uVar10 != 0) && (iVar7 + 4 != iVar7)) {
                puVar9 = uVar2;
                fcn.000102a0(iVar7 + 4,iVar7,puVar9);
            }
            puVar9 = CONCAT71(puVar9 >> 8,1);
            fcn.00015d68(iVar4,4,puVar9);
            puVar1 = puVar9;
            goto code_r0x0001345e;
        }
    }
    uVar11 = 0;
    puVar1 = NULL;
code_r0x0001345e:
    for (puVar8 = *(arg1_01 + 0x48); puVar8 != arg1_01 + 0x48; puVar8 = *puVar8) {
        arg1_02 = puVar8 + -1;
        if (*(puVar8 + 0x54) == uVar11) goto code_r0x0001347d;
    }
    arg1_02 = NULL;
code_r0x0001347d:
    if ((arg1_02 == NULL) || (fcn.00012fe8(arg1_02,iVar4), *(iVar4 + 8) < 3)) {
        if (uVar3 != 0) {
            puVar9 = NULL;
            fcn.00015c28(arg1_00,uVar3,0);
        }
        if (puVar1 != '\0') {
            fcn.00015c28(arg1_00,4,CONCAT71(puVar9 >> 8,1));
        }
    }
    else {
        fcn.000112c4(arg1_01,iVar4);
        iVar7 = fcn.00011214(arg1_01);
        *(arg1_01 + 0x118) = iVar7;
        if (iVar7 == 0) {
            return -0x7ffffffffffffff9;
        }
        fcn.00015c28(iVar7,*(arg1_01 + 0x110),0);
        for (puVar9 = arg1_02[8]; puVar9 != arg1_02 + 8; puVar9 = *puVar9) {
            fcn.00012df4(puVar9 - 0x18);
        }
    }
    return iVar6;
}


/* fcn.00011cb8 @ 0x11cb8 */

int64_t fcn.00011cb8(uint32_t arg1,uint32_t arg2)

{
    int64_t *piVar1;
    int64_t arg1_00;
    int64_t iVar2;
    uint in_register_0000000c;
    uint in_register_00000014;
    int64_t iVar3;
    int64_t iVar4;
    int64_t arg2_00;
    ulong in_R8;
    uchar uVar5;
    
    iVar3 = CONCAT44(in_register_00000014,arg2);
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if ((iVar3 != 0) && (*(iVar3 + 0xf) != '\0')) {
        return -0x7ffffffffffffffd;
    }
    arg1_00 = *(iVar2 + 8);
    iVar4 = *(arg1_00 + 0x18);
    if ((*(iVar2 + 0x68) == '\0') || (uVar5 = 1, iVar3 == 0)) {
        uVar5 = 0;
    }
    *(iVar2 + 0xe4) = 0;
    arg2_00 = 0x16220;
    if (iVar3 != 0) {
        arg2_00 = iVar3;
    }
    if (*(iVar2 + 0xda) != '\0') {
        *(iVar4 + 0x100) = *(iVar4 + 0x100) + -1;
    }
    if (*(iVar2 + 0xdb) != '\0') {
        *(iVar4 + 0x108) = *(iVar4 + 0x108) + -1;
    }
    if (*(iVar2 + 0xdc) != '\0') {
        *(iVar4 + 0x104) = *(iVar4 + 0x104) + -1;
    }
    if (*(iVar2 + 0xdd) != '\0') {
        *(iVar4 + 0x10c) = *(iVar4 + 0x10c) + -1;
    }
    if (*(arg2_00 + 10) != '\0') {
        *(iVar4 + 0x100) = *(iVar4 + 0x100) + 1;
        *(iVar2 + 0xe4) = *(iVar2 + 0xe4) | 1;
    }
    if (*(arg2_00 + 0xb) != '\0') {
        *(iVar4 + 0x108) = *(iVar4 + 0x108) + 1;
    }
    if (*(arg2_00 + 0xc) != '\0') {
        *(iVar4 + 0x104) = *(iVar4 + 0x104) + 1;
        *(iVar2 + 0xe4) = *(iVar2 + 0xe4) | 2;
    }
    if (*(arg2_00 + 0xd) != '\0') {
        *(iVar4 + 0x10c) = *(iVar4 + 0x10c) + 1;
    }
    iVar4 = iVar3;
    if (*(iVar2 + 0xde) != '\0') {
        fcn.00011c58(iVar2);
    }
    if (iVar3 == 0) {
        iVar4 = 0;
        (**(iVar2 + 0x58))(iVar2 + 0x28);
    }
    if (*(arg2_00 + 0xb) == '\0') {
        in_R8 = 0;
        iVar4 = 0;
        fcn.0001205c(iVar2,0,0,0);
    }
    if (iVar2 + 0xd0 != arg2_00) {
        in_R8 = 0;
        iVar4 = arg2_00;
        fcn.000102a0(iVar2 + 0xd0,arg2_00,0x14);
    }
    *(iVar2 + 0x68) = iVar3 != 0;
    if (iVar3 != 0) {
        iVar2 = fcn.00011b1c(arg1_00,CONCAT71(iVar4 >> 8,uVar5),CONCAT71(in_R8 >> 8,*(arg2_00 + 0x10) == '\0'));
    }
    else {
        iVar2 = *(arg1_00 + 0x18);
        fcn.00011eac(iVar2);
        piVar1 = iVar2 + 0x58;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
            return 0;
        }
        if (*(iVar2 + 0xe8) != '\0') {
            (**(*0x167a0 + 0x58))(*(iVar2 + 0xe0),0,0);
            *(iVar2 + 0xe8) = 0;
        }
        (**(*0x167a0 + 0x58))(*(iVar2 + 0xf0),0,0);
        (**(*0x167a0 + 0x58))(*(iVar2 + 0xf8),0,0);
        iVar3 = *(iVar2 + 0x40);
        iVar2 = fcn.0001137c(iVar2);
        if ((-1 < iVar2) && (iVar2 = (**(iVar3 + 0x28))(iVar3), -1 < iVar2)) {
            iVar2 = (**(iVar3 + 0x10))(iVar3);
        }
    }
    return iVar2;
}


/* fcn.00012a7c @ 0x12a7c */

ulong fcn.00012a7c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong *puVar4;
    ulong uVar5;
    int64_t iVar6;
    uint *puVar7;
    uint32_t uVar8;
    uint16_t uVar9;
    uint64_t arg3_00;
    
    iVar3 = *(arg1 + 0x18);
    uVar5 = (**(*0x167a0 + 0x18))(8);
    piVar1 = iVar3 + 0x78;
    uVar8 = 0;
    if (*piVar1 == piVar1) {
        iVar6 = fcn.0001137c(iVar3);
        if (-1 < iVar6) {
            if (*piVar1 != piVar1) goto code_r0x00012b6f;
            if (*(iVar3 + 0x98) + 0x20U < 0x10001) {
                do {
                    puVar7 = fcn.00014de0();
                    if (puVar7 == NULL) break;
                    *puVar7 = 0x5742544d;
                    piVar2 = puVar7 + 2;
                    *(puVar7 + 10) = 0;
                    uVar8 = uVar8 + 1;
                    *piVar2 = piVar1;
                    puVar4 = *(iVar3 + 0x80);
                    *(puVar7 + 4) = puVar4;
                    *puVar4 = piVar2;
                    *(iVar3 + 0x80) = piVar2;
                    piVar2 = puVar7 + 6;
                    *piVar2 = iVar3 + 0x88;
                    puVar4 = *(iVar3 + 0x90);
                    *(puVar7 + 8) = puVar4;
                    *puVar4 = piVar2;
                    *(iVar3 + 0x90) = piVar2;
                } while (uVar8 < 0x20);
                *(iVar3 + 0x98) = *(iVar3 + 0x98) + uVar8;
                if (*piVar1 != piVar1) goto code_r0x00012b6f;
            }
        }
        iVar6 = 0;
    }
    else {
code_r0x00012b6f:
        piVar1 = *piVar1;
        iVar6 = piVar1 + 0x21;
        *(*piVar1 + 8) = piVar1[1];
        *piVar1[1] = *piVar1;
        *(piVar1 + 4) = 1;
    }
    (**(*0x167a0 + 0x20))(uVar5);
    if (iVar6 == 0) {
        uVar5 = 0x8000000000000009;
    }
    else {
        uVar9 = 0;
        if (*(arg1 + 0x5c) == 0) {
            *arg3 = iVar6;
        }
        else {
            *arg3 = iVar6 + 4;
        }
        if ((*arg2 == 0) && (*(arg2 + 0x1a) == 1)) {
            if ((*(arg2 + 0x20) != 0) && (*arg3 != *(arg2 + 0x28))) {
                fcn.000102a0(*arg3,*(arg2 + 0x28),*(arg2 + 0x20));
            }
            *arg4 = *(arg2 + 0x20);
        }
        else {
            iVar3 = *(iVar3 + 0x40);
            arg3 = *arg3;
            *arg4 = 0;
            if (*arg2 != 0) {
                uVar8 = *(*(iVar3 + 0x78) + 8);
                arg3 = arg3 + uVar8;
                *arg4 = uVar8;
            }
            if (*(arg2 + 0x1a) != 0) {
                do {
                    iVar3 = uVar9 + 2;
                    iVar6 = *(arg2 + 0x28 + uVar9 * 0x10);
                    arg3_00 = *(arg2 + iVar3 * 0x10);
                    if ((arg3_00 != 0) && (arg3 != iVar6)) {
                        fcn.000102a0(arg3,iVar6,arg3_00);
                    }
                    uVar9 = uVar9 + 1;
                    arg3 = arg3 + *(arg2 + iVar3 * 0x10);
                } while (uVar9 < *(arg2 + 0x1a));
            }
            *arg4 = *arg4 + *(arg2 + 0x18) + *(arg2 + 0x14);
        }
        uVar5 = 0;
    }
    return uVar5;
}


/* fcn.00012c80 @ 0x12c80 */

ulong fcn.00012c80(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint uVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int iVar8;
    ushort auStackX_8 [4];
    int64_t iStackX_10;
    uint uStackX_18;
    
    uStackX_18 = arg3;
    iVar7 = *(arg1 + 0x18);
    puVar1 = *(arg4 + 0x10);
    iVar2 = *(iVar7 + 0x40);
    *(arg4 + 8) = 0;
    iVar3 = *(iVar2 + 0x78);
    iVar8 = *(iVar3 + 8) - *(puVar1 + 3);
    iStackX_10 = arg2;
    if ((*(iVar3 + 0x28b) == '\0') || (*(iVar3 + 0x28c) != '\0')) {
        if (*(arg1 + 0x5c) == 0) {
            auStackX_8[0] = *(puVar1 + 2);
        }
        else {
            fcn.000122bc(arg1,puVar1,auStackX_8,&iStackX_10);
        }
        uVar4 = uStackX_18;
        iVar3 = iStackX_10;
        iVar6 = (**(iVar2 + 0x60))(iVar2,iVar8,uStackX_18,iStackX_10,puVar1[1],*puVar1,auStackX_8);
        if (iVar6 == -0x7ffffffffffffffa) {
            iVar7 = fcn.0001137c(iVar7);
            if (-1 < iVar7) {
                iVar6 = (**(iVar2 + 0x60))(iVar2,iVar8,uVar4,iVar3,puVar1[1],*puVar1,auStackX_8);
                goto code_r0x00012daa;
            }
        }
        else {
code_r0x00012daa:
            if (-1 < iVar6) goto code_r0x00012dbd;
        }
        uVar5 = 0x8000000000000007;
    }
    else {
        uVar5 = 0x800000000000000c;
    }
    *(arg4 + 8) = uVar5;
code_r0x00012dbd:
    (**(*0x167a0 + 0x68))(*arg4);
    (**(*0x167b8 + 8))(*0x167b8);
    return 0;
}


/* fcn.00015650 @ 0x15650 */

int64_t * fcn.00015650(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    
    piVar1 = arg1 + 0x10;
    if (*piVar1 == piVar1) {
        uVar3 = 0;
        do {
            piVar2 = fcn.00014de0(arg1,0x20);
            if (piVar2 == NULL) {
                if (uVar3 == 0) {
                    return NULL;
                }
                break;
            }
            arg1 = *piVar1;
            uVar3 = uVar3 + 1;
            *piVar2 = arg1;
            piVar2[1] = piVar1;
            *(arg1 + 8) = piVar2;
            *piVar1 = piVar2;
        } while (uVar3 < 0x40);
    }
    piVar2 = *piVar1;
    if (piVar2 != piVar1) {
        *piVar1 = *piVar2;
        *(*piVar2 + 8) = piVar1;
    }
    return piVar2;
}


/* fcn.000156b8 @ 0x156b8 */

int64_t fcn.000156b8(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t *piVar3;
    int64_t *piVar4;
    bool bVar5;
    
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    piVar1 = *piVar3;
    if (piVar1 != piVar3) {
        piVar4 = *piVar1;
        do {
            iVar2 = (*arg2)(piVar3,piVar1,arg3);
            if (iVar2 < 0) {
                return iVar2;
            }
            bVar5 = piVar4 != piVar3;
            piVar1 = piVar4;
            piVar4 = *piVar4;
        } while (bVar5);
    }
    return 0;
}


/* fcn.00013e90 @ 0x13e90 */

uchar * fcn.00013e90(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00016010 @ 0x16010 */

uint64_t fcn.00016010(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if (((CONCAT44(in_register_0000000c,arg1) != 0) && (arg2 != 0)) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
        do {
            if (arg2 - 1U <= uVar1) {
                return arg2;
            }
            uVar1 = uVar1 + 1;
        } while (*(CONCAT44(in_register_0000000c,arg1) + uVar1 * 2) != 0);
        return uVar1;
    }
    return 0;
}


/* fcn.00016044 @ 0x16044 */

uint64_t fcn.00016044(uint32_t arg1)

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


/* fcn.00014dbc @ 0x14dbc */

void fcn.00014dbc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00014054(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00015098 @ 0x15098 */

bool fcn.00015098(uint32_t arg1)

{
    uint in_register_0000000c;
    char *pcVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    pcVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    if (pcVar1 != NULL) {
        while( true ) {
            if ((*pcVar1 == '\x7f') && (pcVar1[1] == -1)) {
                return *(pcVar1 + 2) == 4;
            }
            uVar2 = *(pcVar1 + 2);
            if ((((uVar2 < 4) || (~uVar3 < uVar2)) || (uVar3 = uVar3 + uVar2, 0xfffffffffffffffb < uVar3)) ||
               (((*pcVar1 == '\x04' && (pcVar1[1] == '\x04')) && (*(pcVar1 + (uVar2 - 2)) != 0)))) break;
            pcVar1 = pcVar1 + uVar2;
        }
    }
    return false;
}


/* fcn.00014e7c @ 0x14e7c */

char * fcn.00014e7c(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.00015098(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.00014e3c @ 0x14e3c */

void fcn.00014e3c(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00014de0();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        fcn.000102a0(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00014ecc @ 0x14ecc */

int64_t fcn.00014ecc(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar3 = 0;
    if (arg1 == 0) {
        arg1 = 0x16740;
        if (arg2 != 0) {
            arg1 = arg2;
        }
    }
    else if (arg2 != 0) {
        cVar1 = fcn.00015098(arg1);
        if (cVar1 == '\0') {
            return 0;
        }
        cVar1 = fcn.00015098(arg2);
        if (cVar1 == '\0') {
            return 0;
        }
        iVar3 = fcn.00014e7c(arg1);
        iVar4 = fcn.00014e7c(arg2);
        iVar2 = fcn.00014de0();
        if (iVar2 != 0) {
            if ((iVar3 != 0) && (iVar2 != arg1)) {
                iVar2 = fcn.000102a0(iVar2,arg1,iVar3);
            }
            iVar3 = iVar3 + -4 + iVar2;
            if ((iVar4 != 0) && (iVar3 != arg2)) {
                fcn.000102a0(iVar3,arg2,iVar4);
            }
        }
        return iVar2;
    }
    iVar4 = arg1;
    iVar2 = fcn.00014e7c(arg1);
    if (iVar2 != 0) {
        iVar3 = fcn.00014e3c(iVar4,iVar2,arg1);
    }
    return iVar3;
}


/* fcn.00015128 @ 0x15128 */

ulong fcn.00015128(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    char *pcVar2;
    uint64_t uVar3;
    char cVar4;
    char cVar5;
    uint64_t uVar6;
    
    cVar4 = *arg1;
    do {
        if (cVar4 == '\0') {
            return 0x8000000000000003;
        }
        uVar6 = 0;
        if (cVar4 != '\0') {
            cVar5 = cVar4;
            do {
                if (cVar5 == ';') break;
                uVar6 = uVar6 + 1;
                cVar5 = *(arg1 + uVar6);
            } while (cVar5 != '\0');
        }
        pcVar1 = arg2;
        pcVar2 = arg1;
        uVar3 = uVar6;
        if (uVar6 == 0) {
code_r0x00015188:
            if (*(uVar6 + arg2) == '\0') {
                return 0;
            }
        }
        else {
            for (; (((cVar4 != '\0' && (*pcVar1 != '\0')) && (*pcVar2 == *pcVar1)) && (1 < uVar3)); uVar3 = uVar3 - 1) {
                cVar4 = pcVar2[1];
                pcVar1 = pcVar1 + 1;
                pcVar2 = pcVar2 + 1;
            }
            if (*pcVar2 == *pcVar1) goto code_r0x00015188;
        }
        arg1 = arg1 + uVar6;
        cVar4 = *arg1;
        if (cVar4 == '\0') {
            return 0x8000000000000003;
        }
        do {
            if (cVar4 != ';') break;
            arg1 = arg1 + 1;
            cVar4 = *arg1;
        } while (cVar4 != '\0');
        cVar4 = *arg1;
    } while( true );
}


/* fcn.000150f4 @ 0x150f4 */

ulong fcn.000150f4(ulong param_1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x167a0 + 0x98))(param_1,0x160c0,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.00015714 @ 0x15714 */

int64_t fcn.00015714(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uStackX_18;
    int64_t iStackX_20;
    int64_t aiStack_18 [2];
    
    uStackX_18 = 0;
    iVar1 = (**(*0x167a0 + 0x98))(arg1,0x160d0,&uStackX_18);
    if (iVar1 < 0) {
        aiStack_18[0] = fcn.000150f4(arg1);
        if (aiStack_18[0] != 0) {
            iStackX_20 = 0;
            iVar1 = (**(*0x167a0 + 0xb8))(0x160d0,aiStack_18,&iStackX_20);
            if ((-1 < iVar1) && (iVar1 = (**(*0x167a0 + 0x98))(iStackX_20,0x160d0,&uStackX_18), -1 < iVar1)) {
                if (arg2 != 0) {
                    *arg2 = uStackX_18;
                }
                return iStackX_20;
            }
        }
        arg1 = 0;
    }
    else if (arg2 != 0) {
        *arg2 = uStackX_18;
    }
    return arg1;
}


/* fcn.00013ec4 @ 0x13ec4 */

ulong fcn.00013ec4(uint32_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    char cVar1;
    uchar auVar2 [16];
    ulong uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    char *pcVar6;
    uint in_register_0000000c;
    int64_t iVar7;
    char *pcVar8;
    uint64_t uVar9;
    char *pcVar10;
    int64_t iVar11;
    bool bVar12;
    uint64_t in_stack_00000028;
    char cStack_38;
    char acStack_37 [47];
    
    pcVar6 = CONCAT44(in_register_0000000c,arg1);
    if (((pcVar6 == NULL) || (0x1e8481 < arg2)) || (0x25 < in_stack_00000028)) {
        uVar3 = 0x8000000000000002;
    }
    else {
        bVar12 = in_stack_00000028 != 0;
        uVar9 = 0x25;
        if (bVar12) {
            uVar9 = in_stack_00000028;
        }
        else {
            pcVar10 = &cStack_38;
            uVar5 = arg3;
            do {
                uVar4 = uVar5 / 0x10;
                pcVar10 = pcVar10 + 1;
                *pcVar10 = str.0123456789ABCDEF[uVar5 % 0x10];
                uVar5 = uVar4;
            } while (uVar4 != 0);
            in_stack_00000028 = pcVar10 - &cStack_38;
        }
        if (in_stack_00000028 < uVar9) {
            uVar9 = in_stack_00000028;
        }
        if (arg2 < uVar9 * 2 + 2) {
            uVar3 = 0x8000000000000005;
        }
        else {
            pcVar10 = pcVar6 + uVar9 * 2;
            cStack_38 = '\0';
            pcVar8 = &cStack_38;
            do {
                auVar2._8_8_ = 0;
                auVar2._0_8_ = arg3;
                uVar5 = SUB168(auVar2 / ZEXT816(0x10),0);
                pcVar8 = pcVar8 + 1;
                *pcVar8 = str.0123456789ABCDEF[arg3 % 0x10];
                arg3 = uVar5;
            } while (uVar5 != 0);
            iVar11 = pcVar8 - &cStack_38;
            if (bVar12) {
                pcVar6 = fcn.00013e90(arg1,pcVar10,uVar9 - iVar11,SUB164(auVar2 / ZEXT816(0x10),0) + 0x30);
            }
            for (; iVar11 != 0; iVar11 = iVar11 + -1) {
                cVar1 = *pcVar8;
                iVar7 = 0;
                do {
                    if (pcVar10 <= pcVar6) break;
                    *pcVar6 = cVar1;
                    iVar7 = iVar7 + 1;
                    pcVar6[1] = cVar1 >> 7;
                    pcVar6 = pcVar6 + 2;
                } while (iVar7 < 1);
                pcVar8 = pcVar8 + -1;
            }
            iVar11 = 0;
            do {
                if (pcVar10 + 2 <= pcVar6) break;
                pcVar6[0] = '\0';
                pcVar6[1] = '\0';
                iVar11 = iVar11 + 1;
                pcVar6 = pcVar6 + 2;
            } while (iVar11 < 1);
            uVar3 = 0;
        }
    }
    return uVar3;
}


/* fcn.00015a50 @ 0x15a50 */

uint * fcn.00015a50(void)

{
    uint *puVar1;
    uint *puVar2;
    
    puVar1 = fcn.00014e10(0xb0);
    if (puVar1 != NULL) {
        *puVar1 = 0x6675626e;
        *(puVar1 + 2) = 1;
        puVar1[0x20] = 1;
        puVar2 = puVar1 + 4;
        *puVar2 = puVar2;
        *(puVar1 + 6) = puVar2;
        puVar2 = fcn.00014e10(0x40);
        if (puVar2 != NULL) {
            *puVar2 = 0x6365766e;
            *(puVar2 + 2) = 1;
            puVar2[10] = 1;
            *(puVar1 + 0x1e) = puVar2;
            return puVar1;
        }
        (**(*0x167a0 + 0x48))(puVar1);
    }
    return NULL;
}


/* fcn.00015b58 @ 0x15b58 */

void fcn.00015b58(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    
    *(arg1 + 8) = *(arg1 + 8) + -1;
    uVar2 = 0;
    if (*(arg1 + 8) < 1) {
        if (*(arg1 + 0x10) == 0) {
            if (*(arg1 + 0x28) != 0) {
                do {
                    (**(*0x167a0 + 0x48))(*(arg1 + 0x38 + uVar2 * 0x10));
                    uVar1 = uVar2 + 1;
                    uVar2 = uVar1;
                } while (uVar1 < *(arg1 + 0x28));
            }
        }
        else {
            if ((*(arg1 + 0x20) & 1) != 0) {
                (**(*0x167a0 + 0x48))(*(arg1 + 0x38));
            }
            (**(arg1 + 0x10))(*(arg1 + 0x18));
        }
        (**(*0x167a0 + 0x48))(arg1);
    }
    return;
}


