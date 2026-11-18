// decompiled by r2ghidra: 1023_Fat.pe32
// functions: 86

/* entry0 @ 0x1035c */

void entry0(int64_t arg1,int64_t arg2)

{
    int64_t aiStackX_8 [4];
    
    *0x16310 = *(arg2 + 0x60);
    *0x16318 = *(arg2 + 0x58);
    *0x16308 = arg2;
    (**(*0x16310 + 0x98))(arg1,0x15fe0,aiStackX_8);
    *(aiStackX_8[0] + 0x58) = 0x10354;
    *0x160e0 = arg1;
    *0x160e8 = arg1;
    (**(*0x16310 + 0x148))(0x160e8,0x16090,0x160c0,0x160a0,0x16108,0x16010,0x160f0,0);
    return;
}


/* fcn.00015c18 @ 0x15c18 */

uint64_t fcn.00015c18(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t aiStackX_18 [2];
    
    aiStackX_18[0] = arg3;
    iVar1 = (**(*0x16310 + 0x118))(arg1,0x16030,aiStackX_18,arg2,arg1,0x10);
    if (iVar1 < 0) {
        uVar2 = -(iVar1 != -0x7fffffffffffffec) & 0x8000000000000003;
    }
    else {
        (**(*0x16310 + 0x120))(arg1,0x16030,arg2,arg1);
        uVar2 = 0x8000000000000003;
    }
    return uVar2;
}


/* fcn.000116b4 @ 0x116b4 */

int64_t fcn.000116b4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iStack_28;
    uint64_t uStack_20;
    int64_t iStack_18;
    int64_t iStack_10;
    
    iVar2 = 0;
    iVar1 = (**(*0x16310 + 0x138))(2,arg2,0,&uStack_20,&iStack_10);
    if (-1 < iVar1) {
        fcn.00015de0(arg3,&iStack_28,iVar2);
        uVar3 = 0;
        iVar1 = -0x7ffffffffffffffd;
        if (uStack_20 != 0) {
            do {
                iVar2 = (**(*0x16310 + 0x118))(*(iStack_10 + uVar3 * 8),arg2,&iStack_18,arg1,0,2);
                if (-1 < iVar2) {
                    iVar2 = iStack_28;
                    if (iStack_28 == 0) {
                        iVar2 = 0x1629c;
                    }
                    iVar2 = fcn.00015ea0(*(iStack_18 + 0x30),arg2 == 0x16060,iVar2,arg4);
                    if (iVar2 != 0) {
                        (**(*0x16310 + 0x48))(iVar2);
                        iVar1 = 0;
                        *0x16300 = iStack_18;
                        break;
                    }
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < uStack_20);
        }
        if (iStack_28 != 0) {
            (**(*0x16310 + 0x48))(iStack_28);
        }
        (**(*0x16310 + 0x48))(iStack_10);
    }
    return iVar1;
}


/* fcn.00011150 @ 0x11150 */

int64_t fcn.00011150(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    uchar uVar2;
    ulong *arg1_00;
    int64_t iVar3;
    
    arg1_00 = fcn.00015bac(0xfc8);
    if (arg1_00 != NULL) {
        *arg1_00 = 0x76746166;
        arg1_00[1] = arg1;
        arg1_00[6] = arg2;
        arg1_00[7] = arg3;
        arg1_00[5] = arg4;
        *(arg1_00 + 8) = **(arg4 + 8);
        uVar2 = *(*(arg4 + 8) + 7);
        arg1_00[4] = 0x11e54;
        puVar1 = arg1_00 + 0x69;
        *(arg1_00 + 0x44) = uVar2;
        arg1_00[3] = 0x10000;
        *puVar1 = puVar1;
        arg1_00[0x6a] = puVar1;
        puVar1 = arg1_00 + 0x6b;
        *puVar1 = puVar1;
        arg1_00[0x6c] = puVar1;
        arg1_00[0x5d] = arg1_00 + 0x67;
        *(arg1_00 + 0x323) = 0x10;
        iVar3 = fcn.0001135c(arg1_00);
        if (((iVar3 < 0) || (iVar3 = fcn.00011d24(arg1_00), iVar3 < 0)) ||
           (iVar3 = (**(*0x16310 + 0x148))(arg1_00 + 1,0x16050,arg1_00 + 3,0), iVar3 < 0)) {
            fcn.00010f18(arg1_00);
        }
        else {
            *(arg1_00 + 2) = 1;
        }
        return iVar3;
    }
    return -0x7ffffffffffffff7;
}


/* fcn.00011274 @ 0x11274 */

int64_t fcn.00011274(int64_t arg1)

{
    int64_t iVar1;
    char cVar2;
    
    if ((*(arg1 + 8) == 0) || (iVar1 = (**(*0x16310 + 0x150))(), -1 < iVar1)) {
        cVar2 = *0x16170 != 2;
        if (cVar2) {
            *0x16168 = (**(*0x16310 + 0x18))(*0x16160);
            *0x16170 = 2;
        }
        if (*(arg1 + 0x340) != 0) {
            fcn.00012474(*(arg1 + 0x340),(*(*(*(arg1 + 0x28) + 8) + 5) != '\0') + 0x800000000000000c);
        }
        *(arg1 + 0x10) = 0;
        if (cVar2 != '\0') {
            fcn.00012364(arg1,0,0,0);
            *0x16170 = 1;
            (**(*0x16310 + 0x20))(*0x16168);
        }
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00015cb0 @ 0x15cb0 */

ulong fcn.00015cb0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int64_t iVar2;
    char *pcVar3;
    char *arg1_00;
    int64_t iVar4;
    char in_stack_00000028;
    
    if ((arg1 == 0) || (arg4 == 0)) {
        return 0x8000000000000002;
    }
    if ((arg2 != 0) && (arg3 != 0)) {
        cVar1 = *arg2;
        while (cVar1 != '\0') {
            if (in_stack_00000028 == '\0') {
                iVar4 = 0;
                while ((cVar1 != '\0' && (cVar1 != ';'))) {
                    iVar4 = iVar4 + 1;
                    cVar1 = *(iVar4 + arg2);
                }
                iVar2 = fcn.000159bc(arg2,arg1,iVar4);
                if ((iVar2 == 0) && (*(iVar4 + arg1) == '\0')) {
code_r0x00015da9:
                    do {
                        arg1_00 = *arg3;
                        if (arg1_00 == NULL) {
                            return 0x8000000000000003;
                        }
code_r0x00015d9e:
                        cVar1 = *arg1_00;
                        if (cVar1 != '\0') {
                            iVar4 = 0;
                            while ((cVar1 != '\0' && (cVar1 != ';'))) {
                                iVar4 = iVar4 + 1;
                                cVar1 = arg1_00[iVar4];
                            }
                            iVar2 = fcn.000159bc(arg1_00,arg1,iVar4);
                            if (iVar2 == 0) {
                                *arg4 = *(arg3 + 8);
                                return 0;
                            }
                            arg1_00 = arg1_00 + iVar4;
                            if (*arg1_00 != '\0') {
                                cVar1 = *arg1_00;
                                pcVar3 = arg1_00;
                                do {
                                    if (cVar1 != ';') break;
                                    pcVar3 = pcVar3 + 1;
                                    cVar1 = *pcVar3;
                                } while (cVar1 != '\0');
                            }
                            goto code_r0x00015d9e;
                        }
                        arg3 = arg3 + 0x10;
                    } while( true );
                }
                arg2 = arg2 + iVar4;
                cVar1 = *arg2;
                if (cVar1 == '\0') {
                    return 0x8000000000000003;
                }
                do {
                    if (cVar1 != ';') break;
                    arg2 = arg2 + 1;
                    cVar1 = *arg2;
                } while (cVar1 != '\0');
            }
            else {
                if (((*arg1 ^ *arg2) & 0xffffff) == 0) goto code_r0x00015da9;
                arg2 = arg2 + 3;
            }
            cVar1 = *arg2;
        }
    }
    return 0x8000000000000003;
}


/* fcn.00015bac @ 0x15bac */

void fcn.00015bac(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00015b7c(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.00010280(arg1_00,arg1);
    }
    return;
}


/* fcn.00015b7c @ 0x15b7c */

ulong fcn.00015b7c(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x16310 + 0x40))(4,param_2,auStackX_18);
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
    //[00] -r-x section size 23904 named .text
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


/* fcn.00010aac @ 0x10aac */

ulong fcn.00010aac(int64_t arg1)

{
    ulong uVar1;
    
    (**(*0x16310 + 0x70))(*(arg1 + 8));
    *(*(arg1 + 0x40) + 8) = *(arg1 + 0x48);
    **(arg1 + 0x48) = *(arg1 + 0x40);
    uVar1 = *(arg1 + 0x40);
    (**(*0x16310 + 0x48))(arg1);
    return uVar1;
}


/* fcn.00011b00 @ 0x11b00 */

int64_t fcn.00011b00(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t arg3_00;
    uint64_t arg4_00;
    uint64_t in_stack_00000028;
    
    iVar2 = 0;
    arg3_00 = arg3 & 0xffffffff;
    iVar4 = arg2 * 0x628;
    uVar1 = *(iVar4 + 0x391 + arg1);
    uVar3 = arg4 - *(iVar4 + 0x378 + arg1);
    iVar4 = 1LL << (uVar1 & 0x3f);
    arg4_00 = uVar3 >> (uVar1 & 0x3f);
    uVar3 = iVar4 - 1U & uVar3;
    if (uVar3 != 0) {
        uVar3 = iVar4 - uVar3;
        if (in_stack_00000028 < uVar3) {
            uVar3 = in_stack_00000028;
        }
        iVar2 = fcn.000119e0(arg1,arg2 & 0xffffffff,arg3_00,arg4_00);
        if (iVar2 < 0) {
            return iVar2;
        }
        in_stack_00000028 = in_stack_00000028 - uVar3;
        arg4_00 = arg4_00 + 1;
    }
    uVar3 = in_stack_00000028 >> (uVar1 & 0x3f);
    if (uVar3 != 0) {
        iVar4 = uVar3 << (uVar1 & 0x3f);
        iVar2 = fcn.00010d3c(arg1,arg3_00,(arg4_00 << (uVar1 & 0x3f)) + *(arg1 + 0x58),iVar4);
        if (iVar2 < 0) {
            return iVar2;
        }
        fcn.00011804(arg1,arg3_00,arg4_00,uVar3 + arg4_00);
        in_stack_00000028 = in_stack_00000028 - iVar4;
    }
    if (in_stack_00000028 != 0) {
        iVar2 = fcn.000119e0(arg1,arg2 & 0xffffffff,arg3_00,uVar3 + arg4_00);
    }
    return iVar2;
}


/* fcn.00011e00 @ 0x11e00 */

void fcn.00011e00(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    
    piVar1 = arg1 + 0x18;
    while (*piVar1 != piVar1) {
        piVar2 = *piVar1;
        *(*piVar2 + 8) = piVar2[1];
        *piVar2[1] = *piVar2;
        fcn.00010ee8(piVar2 + -6);
    }
    //WARNING: Could not recover jumptable at 0x00011e4f. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x16310 + 0x48))(arg1);
    return;
}


/* fcn.00010f88 @ 0x10f88 */

void fcn.00010f88(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    
    uVar2 = *arg1;
    if (0x7bc < uVar2) {
        *(arg2 + 2) = *(arg2 + 2) & 0x1ff;
        *(arg2 + 2) = *(arg2 + 2) | (uVar2 - 0x3c) * 0x200;
    }
    if (0x83a < *arg1) {
        *(arg2 + 2) = *(arg2 + 2) | 0xfe00;
    }
    uVar2 = *(arg2 + 2);
    uVar3 = (*(arg1 + 2) & 0xf) << 5;
    *(arg2 + 2) = uVar3 | uVar2 & 0xfe1f;
    uVar1 = *arg2;
    *(arg2 + 2) = *(arg1 + 3) & 0x1f | uVar3 | uVar2 & 0xfe00;
    uVar2 = *(arg1 + 4) << 0xb;
    *arg2 = uVar2 | uVar1 & 0x7ff;
    uVar3 = (*(arg1 + 5) & 0x3f) << 5;
    *arg2 = uVar3 | uVar2 | uVar1 & 0x1f;
    *arg2 = *(arg1 + 6) >> 1 & 0x1f | uVar3 | uVar2;
    return;
}


/* fcn.0001135c @ 0x1135c */

int64_t fcn.0001135c(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int iVar5;
    int64_t iVar6;
    uint8_t uVar7;
    uint8_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint8_t uVar11;
    uchar auStack_88 [11];
    uint16_t uStack_7d;
    uint8_t uStack_7b;
    uint16_t uStack_7a;
    uint8_t uStack_78;
    uint16_t uStack_77;
    uint16_t uStack_75;
    char cStack_73;
    uint16_t uStack_72;
    uint32_t uStack_68;
    uint32_t uStack_64;
    uint8_t uStack_60;
    int16_t iStack_5e;
    uint32_t uStack_5c;
    uint16_t uStack_58;
    
    iVar1 = (**(*(arg1 + 0x30) + 8))(*(arg1 + 0x30),*(arg1 + 0x40),0,0x5a,auStack_88);
    if (iVar1 < 0) {
        return iVar1;
    }
    uVar4 = uStack_75;
    iVar5 = 3;
    if (uVar4 == 0) {
        uVar4 = uStack_68;
    }
    uVar9 = uStack_72;
    if (uVar9 == 0) {
        uVar9 = uStack_64;
        iVar5 = 2;
    }
    if (((uStack_7a != 0) && (uStack_78 != 0)) && (uVar4 != 0)) {
        uVar10 = uStack_7d;
        uVar2 = uStack_7d;
        if ((uVar2 & uStack_7d - 1) == 0) {
            uVar11 = 0x1f;
            if (uStack_7d == 0) {
                uVar7 = 0xff;
            }
            else {
                uVar7 = 0x1f;
                uVar8 = 0x1f;
                if (uStack_7d != 0) {
                    do {
                        uVar7 = uVar8 - 1;
                        uVar2 = uVar2 * 2;
                        uVar8 = uVar7;
                    } while (0 < uVar2);
                }
            }
            if (((uVar7 - 9 < 4) && (uVar2 = uStack_7b, (uStack_7b & uStack_7b - 1) == 0)) && (uStack_7b != 0)) {
                do {
                    uVar11 = uVar11 - 1;
                    uVar2 = uVar2 * 2;
                } while (0 < uVar2);
                if (((uVar11 < 8) && (0xed < cStack_73 - 2U)) && (6 < cStack_73 + 0xfU)) {
                    if (iVar5 == 2) {
                        if (uVar9 == 0) {
                            return -0x7ffffffffffffffd;
                        }
                        if (iStack_5e != 0) {
                            return -0x7ffffffffffffffd;
                        }
                        if ((uStack_60 & 0x80) != 0) {
                            return -0x7ffffffffffffffd;
                        }
                        *(arg1 + 0x2c0) = uStack_5c;
                    }
                    else {
                        if (uStack_77 == 0) {
                            return -0x7ffffffffffffffd;
                        }
                        *(arg1 + 0x2b8) = uStack_77;
                    }
                    *(arg1 + 0x2b0) = uStack_78;
                    iVar6 = uStack_78 * uVar9 + uStack_7a;
                    *(arg1 + 0x48) = uVar4 << (uVar7 & 0x3f);
                    iVar1 = iVar6 + ((uStack_7d - 1) + *(arg1 + 0x2b8) * 0x20) / uVar10;
                    *(arg1 + 0x68) = uVar10 * uVar9;
                    *(arg1 + 0x58) = iVar6 << (uVar7 & 0x3f);
                    iVar6 = uVar10 * uStack_7a;
                    *(arg1 + 0x50) = iVar6;
                    uVar4 = uVar4 - iVar1 >> (uVar11 & 0x3f);
                    *(arg1 + 0x60) = iVar1 << (uVar7 & 0x3f);
                    *(arg1 + 0x70) = uVar4;
                    *(arg1 + 0x80) = uVar11 + uVar7;
                    *(arg1 + 0x78) = 1LL << (uVar11 + uVar7 & 0x3f);
                    if (iVar5 == 2) {
                        if (0xfff4 < uVar4) {
                            *(arg1 + 0x90) = 4;
                            uVar3 = 0xf7ffffff;
                            uVar2 = 2;
                            goto code_r0x000115af;
                        }
                    }
                    else if (uVar4 < 0xfff5) {
                        *(arg1 + 0x90) = 2;
                        uVar3 = 0x7fff;
                        uVar2 = 0xff4 < uVar4;
code_r0x000115af:
                        if (uVar2 != 0) {
                            iVar1 = fcn.00010d3c(arg1,0,iVar6 + *(arg1 + 0x90),*(arg1 + 0x90));
                            if (iVar1 < 0) {
                                return iVar1;
                            }
                            *(arg1 + 0x2cc) = uVar3 & *(arg1 + 0x2d0);
                        }
                        if (uVar2 == 2) {
                            *(arg1 + 0x2a0) = uStack_58 * uStack_7d;
                            if ((((uStack_58 != 0) &&
                                 (fcn.00010d3c(arg1,0,uStack_58 * uStack_7d,0x200), *(arg1 + 0x9c) == 0x41615252))
                                && (*(arg1 + 0x280) == 0x61417272)) &&
                               ((*(arg1 + 0x298) == -0x55ab0000 && (*(arg1 + 0x284) <= *(arg1 + 0x70))))) {
                                *(arg1 + 0x2a8) = 1;
                            }
                        }
                        if ((*(arg1 + 0x288) < 2) || (*(arg1 + 0x70) + 1U < *(arg1 + 0x288))) {
                            *(arg1 + 0x288) = 2;
                        }
                        *(arg1 + 0x84) = uVar2;
                        return 0;
                    }
                    return -0x7ffffffffffffff6;
                }
            }
        }
    }
    return -0x7ffffffffffffffd;
}


/* fcn.00011d24 @ 0x11d24 */

ulong fcn.00011d24(uint32_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar3 + 0x84) == 0) {
        iVar4 = 1;
        *(iVar3 + 0x391) = 0xd;
        *(iVar3 + 0x9b9) = 0xd;
    }
    else {
        iVar4 = 0x10;
        *(iVar3 + 0x391) = 0xf;
        *(iVar3 + 0x9b9) = 0x10;
    }
    *(iVar3 + 0x9c0) = 0x3f;
    *(iVar3 + 0x9a0) = *(iVar3 + 0x58);
    *(iVar3 + 0x9a8) = *(iVar3 + 0x48);
    *(iVar3 + 0x398) = iVar4 + -1;
    *(iVar3 + 0x378) = *(iVar3 + 0x50);
    *(iVar3 + 0x380) = *(iVar3 + 0x68) + *(iVar3 + 0x50);
    iVar4 = iVar4 << (*(iVar3 + 0x391) & 0x3f);
    iVar1 = fcn.00015bac((0x40 << (*(iVar3 + 0x9b9) & 0x1f)) + iVar4);
    if (iVar1 == 0) {
        uVar2 = 0x8000000000000009;
    }
    else {
        *(iVar3 + 0x370) = iVar1;
        *(iVar3 + 0x388) = iVar1;
        *(iVar3 + 0x9b0) = iVar1 + iVar4;
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00010f18 @ 0x10f18 */

void fcn.00010f18(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    
    if (*(arg1 + 0x370) != 0) {
        (**(*0x16310 + 0x48))();
    }
    iVar1 = *(arg1 + 0x368);
    while (iVar1 != 0) {
        piVar2 = *(arg1 + 0x360);
        *(*piVar2 + 8) = piVar2[1];
        *piVar2[1] = *piVar2;
        fcn.00011e00(piVar2 + -6);
        piVar2 = arg1 + 0x368;
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2;
    }
    //WARNING: Could not recover jumptable at 0x00010f81. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x16310 + 0x48))(arg1);
    return;
}


/* fcn.00012474 @ 0x12474 */

void fcn.00012474(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    int64_t iVar1;
    ulong *puVar2;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if (-1 < *(iVar1 + 0x10)) {
        *(iVar1 + 0x10) = arg2;
    }
    for (puVar2 = *(iVar1 + 0x78); puVar2 != iVar1 + 0x78; puVar2 = *puVar2) {
        fcn.00012474(puVar2 - 0x88,arg2);
    }
    return;
}


/* fcn.00012364 @ 0x12364 */

int64_t fcn.00012364(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    
    if (arg2 != 0) {
        fcn.00012474(arg2,arg3);
    }
    fcn.000121b8(arg1);
    if (*(arg1 + 0x10) == '\0') goto code_r0x00012447;
    if (*(arg1 + 0x2a8) == '\0') {
code_r0x000123ec:
        if ((*(arg1 + 0x2c8) != '\0') && (*(arg1 + 0x84) != 0)) {
            *(arg1 + 0x2c8) = 0;
            iVar1 = fcn.00010d3c(arg1,3,*(arg1 + 0x50) + *(arg1 + 0x90),*(arg1 + 0x90));
            if (iVar1 < 0) {
                return iVar1;
            }
        }
    }
    else if (*(arg1 + 0x2c8) != '\0') {
        if ((*(arg1 + 0x2a0) != 0) && (iVar1 = fcn.00010d3c(arg1,1,*(arg1 + 0x2a0),0x200), iVar1 < 0)) {
            return iVar1;
        }
        goto code_r0x000123ec;
    }
    iVar1 = fcn.00011c78(arg1,arg4);
    if (iVar1 < 0) {
        return iVar1;
    }
code_r0x00012447:
    if ((*(arg1 + 0x340) == 0) && (*(arg1 + 0x10) == '\0')) {
        fcn.00010f18(arg1);
    }
    return arg3;
}


/* fcn.00010d3c @ 0x10d3c */

int64_t fcn.00010d3c(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint in_R8;
    int64_t arg4_00;
    code *pcVar6;
    ulong in_stack_00000028;
    int64_t in_stack_00000030;
    
    arg4_00 = CONCAT44(in_R8,arg3);
    uVar4 = arg2;
    iVar5 = -0x7ffffffffffffff6;
    if (arg4_00 + arg4 <= *(arg1 + 0x48)) {
        if (uVar4 < 2) {
            if (in_stack_00000030 == 0) {
                iVar5 = *(arg1 + 0x30);
                if (uVar4 == 0) {
                    pcVar6 = *(iVar5 + 8);
                }
                else {
                    pcVar6 = *(iVar5 + 0x10);
                }
                iVar5 = (*pcVar6)(iVar5,*(arg1 + 0x40));
            }
            else {
                puVar3 = fcn.00015bac(0x50);
                if (puVar3 == NULL) {
                    iVar5 = -0x7ffffffffffffff7;
                    goto code_r0x00010e93;
                }
                *puVar3 = 0x53746166;
                puVar3[3] = in_stack_00000030;
                puVar3[5] = arg4_00;
                puVar3[7] = arg4;
                *(puVar3 + 4) = uVar4 == 1;
                puVar3[6] = in_stack_00000028;
                iVar5 = (**(*0x16310 + 0x50))(0x200,0x10,0x10cb8,puVar3,puVar3 + 1);
                if (iVar5 < 0) {
                    (**(*0x16310 + 0x48))(puVar3);
                }
                else {
                    piVar1 = puVar3 + 8;
                    *piVar1 = in_stack_00000030 + 0x18;
                    puVar2 = *(in_stack_00000030 + 0x20);
                    puVar3[9] = puVar2;
                    *puVar2 = piVar1;
                    *(in_stack_00000030 + 0x20) = piVar1;
                }
            }
        }
        else {
            iVar5 = fcn.00011b00(arg1,uVar4 >> 2,uVar4 & 1,arg4_00);
        }
        if (-1 < iVar5) {
            return iVar5;
        }
    }
code_r0x00010e93:
    *(arg1 + 0x11) = 1;
    return iVar5;
}


/* fcn.00015de0 @ 0x15de0 */

int64_t fcn.00015de0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    auStackX_18[0] = 0;
    *arg2 = 0;
    iVar1 = (**(*0x16318 + 0x48))(arg1,0x15ff0,0,auStackX_18,0);
    if (iVar1 == -0x7ffffffffffffffb) {
        iVar1 = fcn.00015b7c();
        *arg2 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x16318 + 0x48))(arg1,0x15ff0,0,auStackX_18,iVar1);
            if (iVar1 < 0) {
                (**(*0x16310 + 0x48))(*arg2);
                *arg2 = 0;
            }
        }
    }
    return iVar1;
}


/* fcn.00015ea0 @ 0x15ea0 */

uint32_t * fcn.00015ea0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    char cVar2;
    int64_t iVar3;
    uint32_t *arg1_00;
    uint64_t uVar4;
    uint32_t *puVar5;
    int64_t *piVar6;
    uint64_t arg3_00;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iStackX_20 = arg4;
    if (arg3 != 0) {
        piVar6 = &iStackX_18;
        iStackX_18 = arg3;
        do {
            cVar2 = *arg3;
            uVar4 = 0;
            arg3_00 = 3;
            if (cVar2 == '\0') {
code_r0x00015ef0:
                uVar4 = 0;
                cVar1 = cVar2;
                while (cVar1 != '\0') {
                    uVar4 = uVar4 + 1;
                    cVar1 = *(arg3 + uVar4);
                }
            }
            else {
                do {
                    uVar4 = uVar4 + 1;
                } while (*(arg3 + uVar4) != '\0');
                if (uVar4 < 4) goto code_r0x00015ef0;
                uVar4 = 3;
            }
            if (arg2 == 0) {
                uVar4 = 0;
                if (cVar2 != '\0') {
                    do {
                        if (cVar2 == ';') break;
                        uVar4 = uVar4 + 1;
                        cVar2 = *(arg3 + uVar4);
                    } while (cVar2 != '\0');
                    goto code_r0x00015f8b;
                }
            }
            else {
code_r0x00015f8b:
                if (uVar4 != 0) {
                    cVar2 = *arg1;
                    puVar5 = arg1;
                    while (cVar2 != '\0') {
                        if (arg2 == 0) {
                            for (; (*puVar5 != '\0' && (*puVar5 == ';')); puVar5 = puVar5 + 1) {
                            }
                            arg3_00 = 0;
                            cVar2 = *puVar5;
                            while ((cVar2 != '\0' && (cVar2 != ';'))) {
                                arg3_00 = arg3_00 + 1;
                                cVar2 = *(puVar5 + arg3_00);
                            }
                            if (uVar4 <= arg3_00) goto code_r0x00015f58;
                        }
                        else {
code_r0x00015f58:
                            iVar3 = fcn.000159bc(puVar5,arg3,uVar4);
                            if (iVar3 == 0) {
                                arg1_00 = fcn.00015bac(arg3_00 + 1);
                                if (arg1_00 == NULL) {
                                    return NULL;
                                }
                                if (arg3_00 != 0) {
                                    if (arg1_00 != puVar5) {
                                        puVar5 = fcn.000102a0(arg1_00,puVar5,arg3_00);
                                        return puVar5;
                                    }
                                    return arg1_00;
                                }
                                return arg1_00;
                            }
                        }
                        puVar5 = puVar5 + arg3_00;
                        cVar2 = *puVar5;
                    }
                    if ((arg2 != 0) || (uVar4 = uVar4 - 1, uVar4 == 0)) goto code_r0x00015f90;
                    do {
                        if (*(arg3 + uVar4) == '-') break;
                        uVar4 = uVar4 - 1;
                    } while (uVar4 != 0);
                    goto code_r0x00015f8b;
                }
            }
code_r0x00015f90:
            piVar6 = piVar6 + 1;
            arg3 = *piVar6;
        } while (arg3 != NULL);
    }
    return NULL;
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,uint32_t *arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint32_t *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    uVar5 = 0;
    puVar2 = arg2 + arg3 + -1;
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
            puVar2 = puVar2 + 2;
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


/* fcn.000118ec @ 0x118ec */

int64_t fcn.000118ec(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t arg4_00;
    int64_t iVar4;
    int64_t iVar5;
    
    iVar5 = arg2 * 0x628;
    uVar1 = *(iVar5 + 0x391 + arg1);
    iVar4 = (*arg4 << (uVar1 & 0x3f)) + *(iVar5 + 0x378 + arg1);
    arg4_00 = *(arg4 + 8);
    if (arg3 == 0) {
        arg4_00 = 1LL << (uVar1 & 0x3f);
        uVar2 = *(iVar5 + 0x380 + arg1) - iVar4;
        if (uVar2 < arg4_00) {
            arg4_00 = uVar2;
        }
    }
    iVar5 = 1;
    if ((arg2 == 0) && (arg3 == 1)) {
        iVar5 = *(arg1 + 0x2b0);
    }
    do {
        iVar3 = fcn.00010d3c(arg1,arg3 & 0xffffffff,iVar4,arg4_00);
        if (iVar3 < 0) {
            return iVar3;
        }
        iVar4 = iVar4 + *(arg1 + 0x68);
        iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *(arg4 + 0x10) = 0;
    *(arg4 + 8) = arg4_00;
    return 0;
}


/* fcn.000119e0 @ 0x119e0 */

int64_t fcn.000119e0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t *arg1_00;
    uint64_t uVar2;
    uint32_t *arg2_00;
    int64_t iVar3;
    int64_t iVar4;
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    uint32_t *in_stack_00000038;
    
    iVar3 = arg1 + 0x378 + arg2 * 0x628;
    uVar2 = *(iVar3 + 0x20) & arg4;
    iVar4 = uVar2 * 0x18 + iVar3;
    if (*(iVar4 + 0x30) == 0) {
code_r0x00011a6d:
        *(iVar4 + 0x28) = arg4;
        iVar1 = fcn.000118ec(arg1,arg2 & 0xffffffff,0,iVar4 + 0x28);
    }
    else {
        if (*(iVar4 + 0x28) == arg4) {
            iVar1 = 0;
            goto code_r0x00011a91;
        }
        if (((*(iVar4 + 0x30) == 0) || (*(iVar4 + 0x38) == '\0')) ||
           (iVar1 = fcn.000118ec(arg1,arg2 & 0xffffffff,1,iVar4 + 0x28), -1 < iVar1)) goto code_r0x00011a6d;
    }
    if (iVar1 < 0) {
        return iVar1;
    }
code_r0x00011a91:
    arg2_00 = (uVar2 << (*(iVar3 + 0x19) & 0x3f)) + *(iVar3 + 0x10) + in_stack_00000028;
    arg1_00 = in_stack_00000038;
    if (arg3 != 0) {
        *(iVar4 + 0x38) = 1;
        *(iVar3 + 0x18) = 1;
        arg1_00 = arg2_00;
        arg2_00 = in_stack_00000038;
    }
    if ((in_stack_00000030 != 0) && (arg1_00 != arg2_00)) {
        fcn.000102a0(arg1_00,arg2_00,in_stack_00000030);
    }
    return iVar1;
}


/* fcn.00011804 @ 0x11804 */

void fcn.00011804(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint32_t *arg1_00;
    uint64_t uVar4;
    uint32_t *arg2_00;
    uint64_t uVar5;
    int64_t arg3_00;
    int64_t in_stack_00000028;
    
    uVar1 = *(arg1 + 0x9b9);
    iVar2 = *(arg1 + 0x9b0);
    uVar3 = *(arg1 + 0x9c0);
    arg3_00 = 1LL << (uVar1 & 0x3f);
    if (arg3 < arg4) {
        uVar5 = arg3;
        do {
            uVar4 = uVar5 & uVar3;
            if ((*(arg1 + 0x9d0 + uVar4 * 0x18) != 0) && (*(arg1 + 0x9c8 + uVar4 * 0x18) == uVar5)) {
                if (arg2 == 0) {
                    if (*(arg1 + 0x9d8 + uVar4 * 0x18) != arg2) {
                        arg2_00 = (uVar4 << (uVar1 & 0x3f)) + iVar2;
                        arg1_00 = (uVar5 - arg3 << (uVar1 & 0x3f)) + in_stack_00000028;
                        if ((arg3_00 != 0) && (arg1_00 != arg2_00)) {
                            fcn.000102a0(arg1_00,arg2_00,arg3_00);
                        }
                    }
                }
                else {
                    *(arg1 + 0x9d0 + uVar4 * 0x18) = 0;
                }
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < arg4);
    }
    return;
}


/* fcn.00010ee8 @ 0x10ee8 */

void fcn.00010ee8(int64_t arg1)

{
    if (*(arg1 + 0x10) != 0) {
        (**(*0x16310 + 0x48))();
    }
    //WARNING: Could not recover jumptable at 0x00010f13. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x16310 + 0x48))(arg1);
    return;
}


/* fcn.00010ebc @ 0x10ebc */

void fcn.00010ebc(void)

{
    *0x16168 = (**(*0x16310 + 0x18))(*0x16160);
    *0x16170 = 2;
    return;
}


/* fcn.0001498c @ 0x1498c */

ulong fcn.0001498c(int64_t arg1,uint32_t arg2)

{
    int64_t *piVar1;
    ulong *puVar2;
    ulong *puVar3;
    int16_t *piVar4;
    uint64_t arg2_00;
    int64_t *piVar5;
    int64_t *piVar6;
    uint in_register_00000014;
    int64_t iVar7;
    int64_t iVar8;
    int64_t arg1_00;
    int64_t iVar9;
    
    iVar7 = CONCAT44(in_register_00000014,arg2);
    iVar9 = 0;
    if (*(iVar7 + 0x18) == 0) {
        puVar2 = fcn.00015bac(0xb8);
        if (puVar2 == NULL) {
            return 0x8000000000000009;
        }
        *puVar2 = 0x6f746166;
        puVar3 = puVar2 + 3;
        *puVar3 = puVar3;
        puVar2[4] = puVar3;
        puVar3 = puVar2 + 0xf;
        *puVar3 = puVar3;
        puVar2[0x10] = puVar3;
        puVar2[0xd] = arg1;
        puVar2[0x14] = iVar7;
        if (arg1 == 0) {
            arg1_00 = iVar7 + -0x2d8;
            *(iVar7 + 0x68) = puVar2;
            puVar2[6] = *(iVar7 + -0x18);
            if (*(iVar7 + -0x254) != 2) {
                *(puVar2 + 0x49) = 1;
            }
        }
        else {
            arg1_00 = *(arg1 + 8);
            iVar8 = iVar9;
            for (piVar4 = *(iVar7 + 0x10); *piVar4 != 0; piVar4 = piVar4 + 1) {
                iVar8 = iVar8 + 1;
            }
            piVar1 = puVar2 + 0x11;
            puVar2[0xe] = iVar8 + *(arg1 + 0x70) + 1;
            puVar2[6] = *(iVar7 + 0x54) << 0x10 | *(iVar7 + 0x5a);
            *piVar1 = arg1 + 0x78;
            puVar3 = *(arg1 + 0x80);
            puVar2[0x12] = puVar3;
            *puVar3 = piVar1;
            *(arg1 + 0x80) = piVar1;
        }
        piVar1 = puVar2 + 0x15;
        puVar2[7] = puVar2[6];
        piVar5 = arg1_00 + 0x348;
        puVar2[1] = arg1_00;
        iVar8 = *piVar5;
        *piVar1 = iVar8;
        puVar2[0x16] = piVar5;
        *(iVar8 + 8) = piVar1;
        *piVar5 = piVar1;
        puVar2[5] = *(iVar7 + 0x5c);
        if ((*(iVar7 + 0x4b) & 0x10) != 0) {
            if (*(puVar2 + 0x49) == '\0') {
                arg2_00 = puVar2[6];
                iVar8 = iVar9;
                if (arg2_00 - 1 < 0xfffffffffffffff7) {
                    do {
                        if (0xfffffffffffffff5 < arg2_00 - 1) {
                            iVar8 = iVar9;
                            break;
                        }
                        iVar8 = iVar8 + *(arg1_00 + 0x78);
                        arg2_00 = fcn.00014ed8(arg1_00,arg2_00);
                    } while (arg2_00 < 0xfffffffffffffff8);
                }
                puVar2[5] = iVar8;
            }
            else {
                puVar2[5] = *(arg1_00 + 0x2b8) << 5;
            }
            iVar9 = puVar2[1];
            piVar1 = iVar9 + 0x358;
            for (piVar5 = *piVar1; piVar5 != piVar1; piVar5 = *piVar5) {
                piVar6 = piVar5 + -6;
                if (piVar5[2] == puVar2[6]) {
                    *(*piVar5 + 8) = piVar5[1];
                    *piVar5[1] = *piVar5;
                    piVar1 = iVar9 + 0x368;
                    *piVar1 = *piVar1 + -1;
                    goto code_r0x00014b65;
                }
            }
            piVar6 = fcn.00015bac(0x4048);
            if (piVar6 != NULL) {
                piVar1 = piVar6 + 3;
                *piVar6 = 0x64746166;
                *piVar1 = piVar1;
                piVar6[4] = piVar1;
                piVar6[2] = piVar1;
            }
code_r0x00014b65:
            puVar2[0x13] = piVar6;
            if (piVar6 == NULL) {
                return 0x8000000000000009;
            }
        }
        *(iVar7 + 0x18) = puVar2;
    }
    return 0;
}


/* fcn.00012b78 @ 0x12b78 */

ulong fcn.00012b78(int64_t arg1,int64_t arg2)

{
    int64_t *arg1_00;
    int64_t *piVar1;
    int64_t iVar2;
    ulong *puVar3;
    ulong *puVar4;
    ulong uVar5;
    
    puVar4 = fcn.00015bac(0xb8);
    if (puVar4 == NULL) {
        uVar5 = 0x8000000000000009;
    }
    else {
        arg1_00 = puVar4 + 1;
        *puVar4 = 0x69746166;
        if (arg1_00 != 0x161a0) {
            fcn.000102a0(arg1_00,0x161a0,0x78);
        }
        iVar2 = *(arg1 + 8);
        piVar1 = puVar4 + 0x15;
        *arg2 = puVar4;
        iVar2 = *(iVar2 + 0x38);
        puVar4[0x12] = arg1;
        *arg1_00 = (-(iVar2 != 0) & 0x10000) + 0x10000;
        *piVar1 = arg1 + 0x18;
        puVar3 = *(arg1 + 0x20);
        puVar4[0x16] = puVar3;
        *puVar3 = piVar1;
        puVar3 = puVar4 + 0x13;
        *(arg1 + 0x20) = piVar1;
        *puVar3 = puVar3;
        puVar4[0x14] = puVar3;
        uVar5 = 0;
    }
    return uVar5;
}


/* fcn.00010a4c @ 0x10a4c */

void fcn.00010a4c(int64_t arg1)

{
    int64_t *piVar1;
    
    do {
        *0x16180 = (**(*0x16310 + 0x18))(*0x16178);
        piVar1 = *(arg1 + 0x98);
        *0x16188 = 1;
        (**(*0x16310 + 0x20))(*0x16180);
    } while (piVar1 != arg1 + 0x98);
    return;
}


/* fcn.000120fc @ 0x120fc */

int64_t fcn.000120fc(int64_t arg1)

{
    int64_t arg1_00;
    int64_t iVar1;
    uchar auStackX_8 [2];
    uint32_t uStackX_a;
    
    do {
        if (*(arg1 + 0x10) < 0) {
            return *(arg1 + 0x10);
        }
        arg1_00 = *(arg1 + 0x68);
        iVar1 = *(arg1 + 0xa0);
        if (*(arg1 + 0x48) != '\0') {
            fcn.00011050(auStackX_8);
            if (iVar1 + 0x52 != &uStackX_a) {
                fcn.000102a0(iVar1 + 0x52,&uStackX_a,2);
            }
            if (*(arg1 + 0x4a) == '\0') {
                fcn.00011050(iVar1 + 0x56);
            }
            *(arg1 + 0x4a) = 0;
            if (*(arg1 + 0x4b) != '\0') {
                *(iVar1 + 0x4b) = *(iVar1 + 0x4b) | 0x20;
                *(arg1 + 0x4b) = 0;
            }
            if (((arg1_00 != 0) && (*(iVar1 + 0xb) == '\0')) && (iVar1 = fcn.00013938(arg1_00,iVar1), iVar1 < 0)) {
                return iVar1;
            }
            *(arg1 + 0x48) = 0;
        }
        arg1 = arg1_00;
        if (arg1_00 == 0) {
            return 0;
        }
    } while( true );
}


/* fcn.00010b00 @ 0x10b00 */

int64_t fcn.00010b00(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    int64_t *piVar6;
    
    piVar1 = arg2 + 0x18;
    if (*piVar1 == piVar1) {
        *(*(arg2 + 8) + 8) = 0;
        (**(*0x16310 + 0x68))(**(arg2 + 8));
        (**(*0x16310 + 0x48))(arg2);
        return 0;
    }
    *0x16180 = (**(*0x16310 + 0x18))(*0x16178);
    piVar2 = arg2 + 0x28;
    *piVar2 = arg1 + 0x98;
    piVar5 = *(arg1 + 0xa0);
    *(arg2 + 0x30) = piVar5;
    *piVar5 = piVar2;
    iVar4 = *0x16310;
    *(arg1 + 0xa0) = piVar2;
    *0x16188 = 1;
    (**(iVar4 + 0x20))(*0x16180);
    iVar4 = 0;
    piVar5 = *piVar1;
    piVar6 = **piVar1;
    while( true ) {
        if (piVar5 == piVar1) {
            return iVar4;
        }
        iVar4 = *(*(arg1 + 0x90) + 8);
        iVar3 = *(iVar4 + 0x38);
        if (piVar5[-4] == '\0') {
            iVar4 = (**(iVar3 + 0x10))(iVar3,*(iVar4 + 0x40),piVar5[-3],piVar5 + -7,piVar5[-1],piVar5[-2]);
        }
        else {
            iVar4 = (**(iVar3 + 0x18))();
        }
        if (iVar4 < 0) break;
        piVar5 = piVar6;
        piVar6 = *piVar6;
    }
    *0x16180 = (**(*0x16310 + 0x18))(*0x16178);
    *0x16188 = 2;
    for (; piVar5 != piVar1; piVar5 = fcn.00010aac(piVar5 + -8)) {
    }
    if (*piVar1 == piVar1) {
        *(*piVar2 + 8) = *(arg2 + 0x30);
        **(arg2 + 0x30) = *piVar2;
        (**(*0x16310 + 0x48))(arg2);
    }
    else {
        *(arg2 + 8) = 0;
    }
    *0x16188 = 1;
    (**(*0x16310 + 0x20))(*0x16180);
    return iVar4;
}


/* fcn.000109c0 @ 0x109c0 */

void fcn.000109c0(int64_t arg1,uint32_t arg2)

{
    ulong *puVar1;
    ulong *puVar2;
    uint in_register_00000014;
    
    puVar2 = fcn.00015bac(0x38);
    if (puVar2 != NULL) {
        *puVar2 = 0x54746166;
        puVar1 = puVar2 + 3;
        puVar2[2] = arg1;
        puVar2[1] = CONCAT44(in_register_00000014,arg2);
        *puVar1 = puVar1;
        puVar2[4] = puVar1;
        puVar1 = puVar2 + 5;
        *puVar1 = puVar1;
        puVar2[6] = puVar1;
    }
    return;
}


/* fcn.00010a10 @ 0x10a10 */

void fcn.00010a10(int64_t arg1)

{
    ulong *puVar1;
    
    for (puVar1 = *(arg1 + 0x18); puVar1 != arg1 + 0x18; puVar1 = fcn.00010aac(puVar1 + -8)) {
    }
    //WARNING: Could not recover jumptable at 0x00010a48. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x16310 + 0x48))(arg1);
    return;
}


/* fcn.00012070 @ 0x12070 */

ulong fcn.00012070(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    
    iVar2 = *(arg1 + 0x90);
    iVar3 = *(iVar2 + 8);
    fcn.00010a4c(arg1);
    piVar4 = iVar2 + 0xa8;
    *(*(arg1 + 0xa8) + 8) = *(arg1 + 0xb0);
    **(arg1 + 0xb0) = *(arg1 + 0xa8);
    if (*piVar4 == 0) {
        piVar1 = iVar3 + 0x348;
        iVar3 = *piVar1;
        *piVar4 = iVar3;
        *(iVar2 + 0xb0) = piVar1;
        *(iVar3 + 8) = piVar4;
        *piVar1 = piVar4;
    }
    (**(*0x16310 + 0x48))(arg1);
    return 0;
}


/* fcn.00011050 @ 0x11050 */

void fcn.00011050(int64_t arg1)

{
    int64_t iVar1;
    uint auStack_18 [4];
    
    iVar1 = (**(*0x16318 + 0x18))(auStack_18,0);
    if (iVar1 < 0) {
        fcn.00010280(auStack_18,0x10);
        auStack_18[0] = 0x10107bc;
    }
    fcn.00010f88(auStack_18,arg1);
    return;
}


/* fcn.00013938 @ 0x13938 */

int64_t fcn.00013938(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    uint32_t *arg2_00;
    uint8_t uVar3;
    uint8_t uVar4;
    char *arg4;
    uint64_t uVar5;
    uint64_t arg3;
    uint8_t uStack_258;
    uint32_t auStack_257 [2];
    ushort uStack_24d;
    uint8_t uStack_24b;
    uint32_t auStack_24a [3];
    ushort uStack_23e;
    uint32_t uStack_23c;
    uint32_t auStack_238 [132];
    
    arg3 = *(arg2 + 8);
    arg4 = arg2 + 0x40;
    cVar1 = *(arg2 + 10);
    uVar5 = arg3;
    iVar2 = fcn.000138f8(arg1,7,arg3,arg4);
    if (-1 < iVar2) {
        uVar3 = cVar1 - 1;
        if (uVar3 != 0) {
            if (uVar3 * 0x1a != 0) {
                fcn.00010300(auStack_238,uVar3 * 0x1a,CONCAT71(uVar5 >> 8,0xff));
            }
            iVar2 = fcn.00015a24(auStack_238,0x105,*(arg2 + 0x10));
            if (iVar2 < 0) {
                return iVar2;
            }
            arg2_00 = auStack_238;
            uStack_24d = 0xf;
            uStack_23e = 0;
            uStack_24b = 0;
            iVar2 = 0xb;
            do {
                uStack_24b = (uStack_24b >> 1) + uStack_24b * -0x80 + *arg4;
                arg4 = arg4 + 1;
                iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            uVar4 = 1;
            if (uVar3 != 0) {
                do {
                    uStack_258 = uVar4;
                    if (uVar4 == uVar3) {
                        uStack_258 = uVar4 | 0x40;
                    }
                    if (auStack_257 != arg2_00) {
                        fcn.000102a0(auStack_257,arg2_00,10);
                    }
                    if (auStack_24a != arg2_00 + 10) {
                        fcn.000102a0(auStack_24a,arg2_00 + 10,0xc);
                    }
                    if (&uStack_23c != arg2_00 + 0x16) {
                        fcn.000102a0(&uStack_23c,arg2_00 + 0x16,4);
                    }
                    arg3 = arg3 - 1;
                    arg2_00 = arg2_00 + 0x1a;
                    if (*(arg2 + 0xb) != '\0') {
                        uStack_258 = 0xe5;
                    }
                    iVar2 = fcn.000138f8(arg1,7,arg3,&uStack_258);
                    if (iVar2 < 0) {
                        return iVar2;
                    }
                    uVar4 = uVar4 + 1;
                } while (uVar4 <= uVar3);
            }
        }
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.000121b8 @ 0x121b8 */

void fcn.000121b8(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    int64_t *arg1_00;
    int64_t iVar8;
    
    piVar1 = arg1 + 0x348;
    do {
        do {
            if (*piVar1 == piVar1) {
                return;
            }
            iVar8 = *piVar1 + -0xa8;
        } while (*piVar1 + -0xa8 == 0);
        do {
            iVar3 = *(iVar8 + 0x68);
            if (*(iVar8 + 0xa8) != 0) {
                *(*(iVar8 + 0xa8) + 8) = *(iVar8 + 0xb0);
                **(iVar8 + 0xb0) = *(iVar8 + 0xa8);
                *(iVar8 + 0xa8) = 0;
            }
            fcn.000120fc(iVar8);
            if ((*(iVar8 + 0x18) != iVar8 + 0x18) || (*(iVar8 + 0x78) != iVar8 + 0x78)) break;
            iVar8 = *(iVar8 + 0xa0);
            iVar4 = *(iVar8 + 0x18);
            arg1_00 = *(iVar4 + 0x98);
            iVar5 = *(iVar4 + 8);
            if (arg1_00 != NULL) {
                if (*(*(iVar4 + 0xa0) + 0xb) == '\0') {
                    piVar2 = iVar5 + 0x358;
                    arg1_00[8] = *(iVar4 + 0x30);
                    piVar7 = arg1_00 + 6;
                    iVar6 = *piVar2;
                    *piVar7 = iVar6;
                    arg1_00[7] = piVar2;
                    *(iVar6 + 8) = piVar7;
                    *piVar2 = piVar7;
                    if (*(iVar5 + 0x368) == 8) {
                        piVar2 = *(iVar5 + 0x360);
                        arg1_00 = piVar2 + -6;
                        *(*piVar2 + 8) = piVar2[1];
                        *piVar2[1] = *piVar2;
                    }
                    else {
                        *(iVar5 + 0x368) = *(iVar5 + 0x368) + 1;
                        arg1_00 = NULL;
                    }
                }
                if (arg1_00 != NULL) {
                    fcn.00011e00(arg1_00);
                }
            }
            if (*(iVar4 + 0x68) == 0) {
                *(iVar5 + 0x340) = 0;
            }
            else {
                *(*(iVar4 + 0x88) + 8) = *(iVar4 + 0x90);
                **(iVar4 + 0x90) = *(iVar4 + 0x88);
            }
            (**(*0x16310 + 0x48))(iVar4);
            *(iVar8 + 0x18) = 0;
            if (*(iVar8 + 0xb) == '\x01') {
                fcn.00010ee8(iVar8);
            }
            iVar8 = iVar3;
        } while (iVar3 != 0);
    } while( true );
}


/* fcn.00011c78 @ 0x11c78 */

int64_t fcn.00011c78(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t *puVar2;
    uint64_t *puVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint64_t arg2_00;
    int64_t iStackX_18;
    
    puVar3 = arg1 + 0x398;
    arg2_00 = 0;
    do {
        if (puVar3[-1] != '\0') {
            uVar1 = *puVar3;
            uVar4 = 0;
            puVar2 = puVar3;
            do {
                if (((puVar2[2] != 0) && (puVar2[3] != '\0')) &&
                   (iStackX_18 = fcn.000118ec(arg1,arg2_00,1,puVar2 + 1), iStackX_18 < 0)) {
                    return iStackX_18;
                }
                uVar4 = uVar4 + 1;
                puVar2 = puVar2 + 3;
            } while (uVar4 <= uVar1);
            *(puVar3 + -1) = '\0';
        }
        uVar5 = arg2_00 + 1;
        arg2_00 = uVar5;
        puVar3 = puVar3 + 0xc5;
        if (1 < uVar5) {
            if (*0x16190 != '\0') {
                iStackX_18 = (**(*(arg1 + 0x28) + 0x28))(*(arg1 + 0x28));
            }
            return iStackX_18;
        }
    } while( true );
}


/* fcn.00014254 @ 0x14254 */

int64_t fcn.00014254(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uchar auStackX_8 [8];
    
    iVar1 = *(arg1 + 0x98);
    iVar4 = 0;
    if (((**(iVar1 + 0x10) == iVar1 + 0x18) && (*(iVar1 + 0x28) == '\0')) &&
       (iVar3 = fcn.00013de8(arg1,auStackX_8), iVar3 < 0)) {
        return iVar3;
    }
    if (**(iVar1 + 0x10) == iVar1 + 0x18) {
        iVar2 = *(iVar1 + 8);
    }
    else {
        iVar3 = **(iVar1 + 0x10);
        *(iVar1 + 0x10) = iVar3;
        iVar4 = iVar3 + -0x30;
        iVar2 = *(iVar3 + -0x28) + 1;
    }
    *(iVar1 + 0xc) = iVar2;
    *arg2 = iVar4;
    return 0;
}


/* fcn.00013efc @ 0x13efc */

int64_t fcn.00013efc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int64_t arg3_00;
    uint8_t uVar2;
    int16_t *piVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uchar auStackX_10 [2];
    uint32_t uStackX_12;
    
    iVar5 = 0;
    iVar6 = iVar5;
    for (piVar3 = *(arg2 + 0x10); *piVar3 != 0; piVar3 = piVar3 + 1) {
        iVar6 = iVar6 + 1;
    }
    arg3_00 = iVar6 * 2 + 2;
    uVar1 = iVar6 * 2 + 0x52;
    iVar6 = -0x7ffffffffffffffb;
    if (uVar1 <= *arg3) {
        *arg4 = uVar1;
        if ((*(arg2 + 0x4b) & 0x10) == 0) {
            *(arg4 + 8) = *(arg2 + 0x5c);
            uVar4 = *(arg1 + 0x78) - 1;
            *(arg4 + 0x10) = *(arg2 + 0x5c) + uVar4 & ~uVar4;
        }
        else {
            uVar4 = *(arg2 + 0x54) << 0x10 | *(arg2 + 0x5a);
            iVar6 = iVar5;
            if (uVar4 - 1 < 0xfffffffffffffff7) {
                do {
                    if (0xfffffffffffffff5 < uVar4 - 1) {
                        iVar6 = 0;
                        break;
                    }
                    iVar6 = iVar6 + *(arg1 + 0x78);
                    uVar4 = fcn.00014ed8(arg1,uVar4);
                } while (uVar4 < 0xfffffffffffffff8);
            }
            *(arg4 + 0x10) = iVar6;
            *(arg4 + 8) = iVar6;
        }
        fcn.00010280(auStackX_10,2);
        if (&uStackX_12 != arg2 + 0x52) {
            fcn.000102a0(&uStackX_12,arg2 + 0x52,2);
        }
        *(arg4 + 0x30) = 0;
        *(arg4 + 0x36) = 0;
        *(arg4 + 0x28) = (uStackX_12 >> 9) + 0x7bc;
        *(arg4 + 0x2b) = _auStackX_10 >> 0x10 & 0x1f;
        *(arg4 + 0x2a) = uStackX_12 >> 5 & 0xf;
        *(arg4 + 0x2c) = (_auStackX_10 >> 8) >> 3;
        *(arg4 + 0x2e) = (_auStackX_10 & 0x1f) * '\x02';
        *(arg4 + 0x2d) = _auStackX_10 >> 5 & 0x3f;
        *(arg4 + 0x34) = 0x7ff;
        *(arg4 + 0x18) = (*(arg2 + 0x50) >> 9) + 0x7bc;
        *(arg4 + 0x1a) = *(arg2 + 0x50) >> 5 & 0xf;
        *(arg4 + 0x1b) = *(arg2 + 0x50) & 0x1f;
        *(arg4 + 0x1c) = *(arg2 + 0x4e) >> 0xb;
        *(arg4 + 0x1d) = *(arg2 + 0x4e) >> 5 & 0x3f;
        uVar2 = *(arg2 + 0x4e);
        *(arg4 + 0x20) = 0;
        *(arg4 + 0x24) = 0x7ff;
        *(arg4 + 0x1e) = (uVar2 & 0x1f) * '\x02';
        *(arg4 + 0x26) = 0;
        *(arg4 + 0x38) = (*(arg2 + 0x58) >> 9) + 0x7bc;
        *(arg4 + 0x3a) = *(arg2 + 0x58) >> 5 & 0xf;
        *(arg4 + 0x3b) = *(arg2 + 0x58) & 0x1f;
        *(arg4 + 0x3c) = *(arg2 + 0x56) >> 0xb;
        *(arg4 + 0x3d) = *(arg2 + 0x56) >> 5 & 0x3f;
        uVar2 = *(arg2 + 0x56);
        *(arg4 + 0x40) = 0;
        *(arg4 + 0x3e) = (uVar2 & 0x1f) * '\x02';
        *(arg4 + 0x44) = 0x7ff;
        *(arg4 + 0x46) = 0;
        *(arg4 + 0x48) = *(arg2 + 0x4b) & 0x37;
        iVar6 = iVar5;
        if ((arg3_00 != 0) && (arg4 + 0x50 != *(arg2 + 0x10))) {
            fcn.000102a0(arg4 + 0x50,*(arg2 + 0x10),arg3_00);
            iVar6 = 0;
        }
    }
    *arg3 = uVar1;
    return iVar6;
}


/* fcn.00012598 @ 0x12598 */

int64_t fcn.00012598(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t iStackX_8;
    
    arg1_00 = *(arg1 + 0x90);
    uVar3 = *(arg1 + 0x80) >> 5;
    iVar1 = *(arg1_00 + 0x98);
    if (uVar3 < *(iVar1 + 0xc)) {
        *(iVar1 + 0xc) = 0;
        *(iVar1 + 0x10) = iVar1 + 0x18;
    }
    while( true ) {
        iVar2 = fcn.00014254(arg1_00,&iStackX_8);
        if ((iVar2 < 0) || (iStackX_8 == 0)) break;
        if (uVar3 < *(iVar1 + 0xc)) {
            iVar2 = fcn.00013efc(*(arg1_00 + 8),iStackX_8,arg2,arg3);
code_r0x0001261d:
            if (-1 < iVar2) {
                *(arg1 + 0x80) = *(iVar1 + 0xc) << 5;
            }
            return iVar2;
        }
    }
    *arg2 = 0;
    goto code_r0x0001261d;
}


/* fcn.000151ec @ 0x151ec */

ulong fcn.000151ec(int64_t arg1,uint32_t arg2)

{
    uint32_t arg2_00;
    int64_t arg1_00;
    ulong uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint in_register_00000014;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    
    uVar4 = CONCAT44(in_register_00000014,arg2);
    if (uVar4 < 0x100000000) {
        arg1_00 = *(arg1 + 8);
        uVar5 = *(arg1 + 0x28) >> (*(arg1_00 + 0x80) & 0x3f);
        uVar6 = *(arg1_00 + 0x78) - 1;
        uVar7 = uVar5 + 1;
        if ((*(arg1 + 0x28) & uVar6) == 0) {
            uVar7 = uVar5;
        }
        uVar2 = uVar4 >> (*(arg1_00 + 0x80) & 0x3f);
        uVar5 = uVar2 + 1;
        if ((uVar4 & uVar6) == 0) {
            uVar5 = uVar2;
        }
        if (uVar7 < uVar5) {
            uVar6 = *(arg1 + 0x30);
            if ((uVar6 != 0) && (*(arg1 + 0x40) == 0)) {
                uVar2 = 0;
                for (; uVar6 < 0xfffffffffffffff8; uVar6 = fcn.00014ed8(arg1_00,uVar6)) {
                    if ((uVar6 < 2) || (*(arg1_00 + 0x70) + 1U < uVar6)) goto code_r0x00015325;
                    *(arg1 + 0x40) = uVar6;
                    uVar2 = uVar2 + 1;
                }
                if (uVar2 != uVar7) {
code_r0x00015325:
                    uVar1 = 0x800000000000000a;
code_r0x000153e5:
                    fcn.000150d8(arg1);
                    return uVar1;
                }
            }
            uVar6 = *(arg1 + 0x40);
            do {
                if (*(arg1_00 + 0x11) != '\0') {
code_r0x000153c3:
                    if (uVar6 != 0) {
                        fcn.00014f80(arg1_00,uVar6,-1);
                        *(arg1 + 0x40) = uVar6;
                    }
                    uVar1 = 0x800000000000000b;
                    goto code_r0x000153e5;
                }
                while( true ) {
                    uVar2 = *(arg1_00 + 0x288);
                    if (*(arg1_00 + 0x70) + 1U < uVar2) {
                        if ((*(arg1_00 + 0x2a8) != '\0') && (0 < *(arg1_00 + 0x284))) {
                            *(arg1_00 + 0x2a8) = 0;
                        }
                        fcn.000153f4(arg1_00);
                        uVar2 = *(arg1_00 + 0x288);
                        if (*(arg1_00 + 0x70) + 1U < uVar2) goto code_r0x000153c3;
                    }
                    iVar3 = fcn.00014ed8(arg1_00,uVar2);
                    if (iVar3 == 0) break;
                    *(arg1_00 + 0x288) = *(arg1_00 + 0x288) + 1;
                }
                arg2_00 = *(arg1_00 + 0x288);
                uVar2 = arg2_00;
                *(arg1_00 + 0x288) = arg2_00 + 1;
                if (0xfffffffffffffff7 < uVar2) goto code_r0x000153c3;
                if ((uVar2 < 2) || (*(arg1_00 + 0x70) + 1U < uVar2)) goto code_r0x00015325;
                if (uVar6 == 0) {
                    *(arg1 + 0x30) = uVar2;
                    *(arg1 + 0x38) = uVar2;
                }
                else {
                    fcn.00014f80(arg1_00,uVar6,arg2_00);
                }
                uVar7 = uVar7 + 1;
                fcn.00014f80(arg1_00,arg2_00,-1);
                *(arg1 + 0x40) = uVar2;
                uVar6 = uVar2;
            } while (uVar7 < uVar5);
        }
        *(arg1 + 0x28) = uVar4;
        uVar1 = 0;
        *(arg1 + 0x48) = 1;
    }
    else {
        uVar1 = 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.00012914 @ 0x12914 */

int64_t fcn.00012914(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int64_t arg1_00;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t arg2_00;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    
    arg1_00 = *(arg1 + 8);
    uVar6 = *arg4;
    iVar5 = 0;
    do {
        if (uVar6 == 0) {
code_r0x00012a9c:
            *arg4 = *arg4 - uVar6;
            return iVar5;
        }
        iVar5 = *(arg1 + 8);
        iVar2 = *(iVar5 + 0x78);
        if (*(arg1 + 0x49) == '\0') {
            uVar4 = *(arg1 + 0x50);
            arg2_00 = *(arg1 + 0x38);
            if ((arg3 < uVar4) || (*(arg1 + 0x30) == arg2_00)) {
                arg2_00 = *(arg1 + 0x30);
                uVar4 = 0;
            }
            uVar7 = uVar4;
            while (uVar7 = uVar7 + iVar2, uVar7 <= arg3) {
                uVar4 = uVar4 + iVar2;
                if (0xfffffffffffffff5 < arg2_00 - 1) goto code_r0x00012a92;
                arg2_00 = fcn.00014ed8(iVar5,arg2_00);
            }
            if ((arg2_00 < 2) || (*(iVar5 + 0x70) + 1U < arg2_00)) {
code_r0x00012a92:
                iVar5 = -0x7ffffffffffffff6;
                goto code_r0x00012a9c;
            }
            uVar1 = *(iVar5 + 0x80);
            iVar3 = *(iVar5 + 0x60);
            *(arg1 + 0x50) = uVar4;
            *(arg1 + 0x38) = arg2_00;
            uVar7 = (uVar4 - arg3) + iVar2;
            *(arg1 + 0x58) = (((arg2_00 - 2 << (uVar1 & 0x3f)) + iVar3) - uVar4) + arg3;
            if (arg2_00 < 0xfffffffffffffff8) {
                while( true ) {
                    uVar4 = fcn.00014ed8(iVar5,arg2_00);
                    if ((uVar4 != arg2_00 + 1) || (uVar6 <= uVar7)) break;
                    uVar7 = uVar7 + iVar2;
                    arg2_00 = arg2_00 + 1;
                }
            }
        }
        else {
            *(arg1 + 0x58) = *(iVar5 + 0x58) + arg3;
            uVar7 = *(arg1 + 0x28) - arg3;
        }
        uVar4 = uVar6;
        if (uVar7 < uVar6) {
            uVar4 = uVar7;
        }
        *(arg1 + 0x60) = uVar7;
        iVar5 = fcn.00010d3c(arg1_00,arg2 & 0xffffffff,*(arg1 + 0x58),uVar4);
        if (iVar5 < 0) goto code_r0x00012a9c;
        arg3 = arg3 + uVar4;
        uVar6 = uVar6 - uVar4;
        if (arg2 == 7) {
            *(arg1 + 0x48) = 1;
            *(arg1 + 0x4b) = 1;
        }
    } while( true );
}


/* fcn.0001264c @ 0x1264c */

int64_t fcn.0001264c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    int64_t arg1_01;
    ulong uVar1;
    int64_t iVar2;
    int64_t arg1_02;
    int iVar3;
    uint64_t uVar4;
    int64_t arg1_03;
    int64_t in_stack_00000028;
    
    arg1_02 = 0;
    arg1_00 = arg1 + -8;
    arg1_03 = *(arg1 + 0x88);
    iVar3 = arg2;
    arg1_01 = *(arg1_03 + 8);
    if ((*(arg1_03 + 0x98) != 0) && (iVar3 == 7)) {
        return -0x7ffffffffffffffd;
    }
    if (*(arg1_03 + 0x10) == -0x7ffffffffffffff2) {
        return -0x7ffffffffffffff9;
    }
    if (iVar3 == 6) {
        if (*(arg1_03 + 0x28) < *(arg1 + 0x78)) {
            return -0x7ffffffffffffff9;
        }
    }
    else {
        if (*(arg1_01 + 0x44) != '\0') {
            return -0x7ffffffffffffff8;
        }
        if (*(arg1 + 0x80) != '\0') {
            return -0x7ffffffffffffff1;
        }
    }
    if (in_stack_00000028 == 0) {
        fcn.00010a4c(arg1_00);
    }
    else {
        if (*arg1 < 0x20000) {
            return -0x7ffffffffffffffd;
        }
        arg1_02 = fcn.000109c0(arg1_00,in_stack_00000028);
        if (arg1_02 == 0) {
            return -0x7ffffffffffffff7;
        }
    }
    fcn.00010ebc();
    iVar2 = *(arg1_03 + 0x10);
    if (-1 < iVar2) {
        if (*(arg1_03 + 0x98) == 0) {
            uVar4 = *(arg1 + 0x78) + *arg3;
            if (*(arg1_03 + 0x28) < uVar4) {
                if (iVar3 == 6) {
                    *arg3 = (*arg3 - uVar4) + *(arg1_03 + 0x28);
                }
                else {
                    iVar2 = fcn.000151ec(arg1_03,uVar4);
                    if (iVar2 < 0) {
                        *arg3 = 0;
                        fcn.000120fc(arg1_03);
                        arg1_03 = 0;
                        goto code_r0x00012843;
                    }
                    *(*(arg1_03 + 0xa0) + 0x5c) = *(arg1_03 + 0x28);
                    uVar1 = *(arg1_03 + 0x30);
                    iVar2 = *(arg1_03 + 0xa0);
                    *(iVar2 + 0x54) = uVar1 >> 0x10;
                    *(iVar2 + 0x5a) = uVar1;
                }
            }
            iVar2 = fcn.00012914(arg1_03,arg2 & 0xffffffff,*(arg1 + 0x78),arg3);
            *(arg1 + 0x78) = *(arg1 + 0x78) + *arg3;
        }
        else {
            iVar2 = fcn.00012598(arg1_00,arg3,arg4);
            arg1_03 = 0;
        }
    }
    if (in_stack_00000028 != 0) {
        if (iVar2 < 0) {
            fcn.00010a10(arg1_02);
        }
        else {
            iVar2 = fcn.00010b00(arg1_00,arg1_02);
        }
    }
code_r0x00012843:
    if (iVar2 < 0) {
        iVar2 = fcn.00012364(arg1_01,arg1_03,iVar2,0);
    }
    *0x16170 = 1;
    (**(*0x16310 + 0x20))(*0x16168);
    return iVar2;
}


/* fcn.00014ed8 @ 0x14ed8 */

uint64_t fcn.00014ed8(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    uint64_t uVar2;
    bool bVar3;
    
    puVar1 = fcn.00014e54(arg1,arg2);
    if (*(arg1 + 0x70) + 1U < arg2) {
        uVar2 = 0xffffffffffffffff;
    }
    else if (*(arg1 + 0x84) == 0) {
        uVar2 = *puVar1 & 0xfff;
        if ((arg2 & 1U) != 0) {
            uVar2 = *puVar1 >> 4;
        }
        uVar2 = uVar2 | ~-(uVar2 < 0xff7) & 0xfffffffffffffff0;
    }
    else {
        if (*(arg1 + 0x84) == 1) {
            uVar2 = *puVar1;
            bVar3 = uVar2 < 0xfff7;
        }
        else {
            uVar2 = *puVar1 & 0xfffffff;
            bVar3 = uVar2 < 0xffffff7;
        }
        uVar2 = uVar2 | ~-bVar3 & 0xfffffffffffffff0;
    }
    return uVar2;
}


/* fcn.00014bb8 @ 0x14bb8 */

int64_t fcn.00014bb8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    uint16_t uVar2;
    int16_t *piVar3;
    int16_t *piVar4;
    int64_t iVar5;
    int64_t iVar6;
    int16_t *piVar7;
    int16_t iVar8;
    uint16_t *puVar9;
    int64_t iVar10;
    int64_t iStackX_10;
    int16_t aiStack_238 [264];
    
    iVar10 = 0;
    iStackX_10 = 0;
    iVar1 = *arg2;
    piVar7 = arg2;
    while (iVar1 != 0) {
        piVar7 = piVar7 + 1;
        iVar10 = iVar10 + 1;
        iVar1 = *piVar7;
    }
    if (iVar10 != 0) {
        iVar6 = *arg1;
        iVar1 = *(arg2 + -2 + iVar10 * 2);
        if (*arg2 == 0x5c) {
            arg2 = arg2 + 2;
            iVar10 = iVar10 + -1;
            iVar6 = *(*(iVar6 + 8) + 0x340);
        }
        if (iVar10 + 4 + *(iVar6 + 0x70) < 0x105) {
code_r0x00014c49:
            do {
                do {
                    piVar7 = aiStack_238;
                    iVar8 = *arg2;
                    while ((iVar8 != 0 && (iVar8 != 0x5c))) {
                        *piVar7 = iVar8;
                        piVar7 = piVar7 + 1;
                        arg2 = arg2 + 2;
                        iVar8 = *arg2;
                    }
                    *piVar7 = 0;
                    for (; *arg2 == 0x5c; arg2 = arg2 + 2) {
                    }
                    if (aiStack_238[0] == 0) {
                        if ((iVar1 == 0x5c) && (*(iVar6 + 0x98) == 0)) {
                            return -0x7ffffffffffffff2;
                        }
                        *arg4 = 0;
code_r0x00014e2b:
                        *arg1 = iVar6;
                        return 0;
                    }
                    piVar3 = 0x162cc;
                    piVar7 = aiStack_238;
                    iVar8 = aiStack_238[0];
                    do {
                        if (iVar8 != *piVar3) break;
                        piVar7 = piVar7 + 1;
                        piVar3 = piVar3 + 1;
                        iVar8 = *piVar7;
                    } while (iVar8 != 0);
                } while (*piVar7 == *piVar3);
                piVar3 = 0x162d0;
                piVar7 = aiStack_238;
                iVar8 = aiStack_238[0];
                do {
                    if (iVar8 != *piVar3) break;
                    piVar7 = piVar7 + 1;
                    piVar3 = piVar3 + 1;
                    iVar8 = *piVar7;
                } while (iVar8 != 0);
                if (*piVar7 != *piVar3) {
                    piVar7 = aiStack_238;
                    iVar8 = aiStack_238[0];
                    while (iVar8 == 0x20) {
                        piVar7 = piVar7 + 1;
                        iVar8 = *piVar7;
                    }
                    iVar8 = *piVar7;
                    piVar3 = arg4;
                    if (iVar8 != 0) {
                        piVar4 = arg4;
                        do {
                            *piVar4 = iVar8;
                            piVar4 = piVar4 + 1;
                            iVar8 = *((piVar7 - arg4) + piVar4);
                        } while (iVar8 != 0);
                        do {
                            piVar3 = piVar4;
                            if (piVar3 <= arg4) break;
                            piVar4 = piVar3 + -1;
                        } while ((*piVar4 == 0x20) || (*piVar4 == 0x2e));
                    }
                    *piVar3 = 0;
                    if (0x1fe < (piVar3 - arg4 & 0xfffffffffffffffeU)) {
                        return -0x7ffffffffffffffe;
                    }
                    uVar2 = *arg4;
                    puVar9 = arg4;
                    do {
                        if ((uVar2 < 0x40) && ((0xd4008404ffffffffU >> (uVar2 & 0x3f) & 1) != 0)) {
                            return -0x7ffffffffffffffe;
                        }
                        if (uVar2 == 0x5c) {
                            return -0x7ffffffffffffffe;
                        }
                        if (uVar2 == 0x7c) {
                            return -0x7ffffffffffffffe;
                        }
                        puVar9 = puVar9 + 1;
                        uVar2 = *puVar9;
                    } while (uVar2 != 0);
                    if (*(iVar6 + 0x98) == 0) {
                        return -0x7ffffffffffffff2;
                    }
                    iVar5 = fcn.00014160(iVar6,arg4,&iStackX_10);
                    iVar10 = iStackX_10;
                    if (iVar5 < 0) {
                        return iVar5;
                    }
                    if (iStackX_10 == 0) {
                        if (*arg2 != 0) {
                            return -0x7ffffffffffffff2;
                        }
                        if ((iVar1 == 0x5c) && ((arg3 & 0x10U) == 0)) {
                            return -0x7ffffffffffffffe;
                        }
                        goto code_r0x00014e2b;
                    }
                    iVar6 = fcn.0001498c(iVar6,iStackX_10);
                    if (iVar6 < 0) {
                        return iVar6;
                    }
                    iVar6 = *(iVar10 + 0x18);
                    goto code_r0x00014c49;
                }
                iVar6 = *(iVar6 + 0x68);
                if (iVar6 == 0) {
                    return -0x7ffffffffffffffe;
                }
            } while( true );
        }
    }
    return -0x7ffffffffffffffe;
}


/* fcn.000147f4 @ 0x147f4 */

int64_t fcn.000147f4(int64_t arg1,uint32_t *arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    int16_t iVar2;
    ulong *arg2_00;
    int64_t iVar3;
    int64_t iVar4;
    ulong noname_0;
    
    iVar4 = *(arg1 + 0x98);
    noname_0 = 0x60;
    arg2_00 = fcn.00015bac(0x60);
    iVar3 = 0;
    if (arg2_00 == NULL) {
        iVar3 = -0x7ffffffffffffff7;
    }
    else {
        *arg2_00 = 0x65746166;
        iVar2 = *arg2;
        puVar1 = arg2;
        while (iVar2 != 0) {
            puVar1 = puVar1 + 2;
            iVar3 = iVar3 + 1;
            iVar2 = *puVar1;
        }
        iVar3 = fcn.00015bd8(noname_0,iVar3 * 2 + 2,arg2);
        arg2_00[2] = iVar3;
        if (iVar3 == 0) {
            iVar3 = -0x7ffffffffffffff7;
        }
        else {
            fcn.000142d4(arg1,arg2_00);
            iVar3 = fcn.000145b8(arg1,arg2_00);
            if (-1 < iVar3) {
                fcn.00013d50(iVar4,arg2_00);
                *(arg2_00 + 0x4b) = arg3;
                *arg4 = arg2_00;
                iVar4 = fcn.00013938(arg1,arg2_00);
                return iVar4;
            }
        }
        fcn.00010ee8(arg2_00);
    }
    return iVar3;
}


/* fcn.00012ab8 @ 0x12ab8 */

int64_t fcn.00012ab8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t arg1_00;
    uint64_t uStackX_8;
    
    uVar3 = *(arg1 + 0x28) - arg2;
    arg1_00 = uVar3;
    if (0xa00000 < uVar3) {
        arg1_00 = 0xa00000;
    }
    iVar1 = fcn.00015bac(arg1_00);
    if (iVar1 == 0) {
        iVar2 = -0x7ffffffffffffff7;
    }
    else {
        do {
            uStackX_8 = uVar3;
            if (arg1_00 < uVar3) {
                uStackX_8 = arg1_00;
            }
            uVar3 = uVar3 - uStackX_8;
            iVar2 = fcn.00012914(arg1,7,arg2,&uStackX_8);
        } while ((-1 < iVar2) && (arg2 = arg2 + uStackX_8, uVar3 != 0));
        (**(*0x16310 + 0x48))(iVar1);
    }
    return iVar2;
}


/* fcn.00012c40 @ 0x12c40 */

int64_t fcn.00012c40(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int8_t arg_180h)

{
    ulong uVar1;
    int64_t iVar2;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t iVar3;
    int64_t iVar4;
    int64_t extraout_RAX_01;
    int64_t extraout_RAX_02;
    unkbyte7 Var5;
    int64_t iStackX_8;
    int64_t iStackX_20;
    uchar in_stack_00000028;
    int64_t var_178h;
    uint32_t auStack_238 [132];
    
    Var5 = arg3 >> 8;
    iStackX_20 = 0;
    if ((*(*(arg1 + 8) + 0x44) == '\0') || ((arg4 & 2U) == 0)) {
        iVar2 = *(arg1 + 0x10);
        if ((-1 < iVar2) &&
           (iStackX_8 = arg1, fcn.00014bb8(&iStackX_8,arg3,CONCAT71(Var5,in_stack_00000028),auStack_238),
           iVar2 = extraout_RAX, -1 < extraout_RAX)) {
            if (auStack_238[0] == 0) {
                iVar3 = iStackX_8;
            }
            else {
                if ((arg4 & 0x8000000000000000U) == 0) {
                    return -0x7ffffffffffffff2;
                }
                fcn.000147f4(iStackX_8,auStack_238,CONCAT71(Var5,in_stack_00000028),&iStackX_20);
                iVar2 = iStackX_20;
                if (extraout_RAX_00 < 0) {
                    return extraout_RAX_00;
                }
                iVar3 = fcn.0001498c(iStackX_8,iStackX_20);
                if (iVar3 < 0) {
                    return iVar3;
                }
                iVar3 = *(iVar2 + 0x18);
                if (*(iVar3 + 0x98) != 0) {
                    iVar2 = *(iVar3 + 0x28);
                    iVar4 = fcn.000151ec(iVar3,*(*(iVar3 + 8) + 0x78) + iVar2);
                    if (iVar4 < 0) {
                        return iVar4;
                    }
                    iVar2 = fcn.00012ab8(iVar3,iVar2);
                    if (iVar2 < 0) {
                        return iVar2;
                    }
                    uVar1 = *(iVar3 + 0x30);
                    iVar2 = *(iVar3 + 0xa0);
                    *(iVar2 + 0x5a) = uVar1;
                    *(iVar2 + 0x54) = uVar1 >> 0x10;
                    fcn.000147f4(iVar3,0x162cc,CONCAT71(Var5,0x10),&iStackX_8);
                    if (extraout_RAX_01 < 0) {
                        return extraout_RAX_01;
                    }
                    fcn.000147f4(iVar3,0x162d0,CONCAT71(Var5,0x10),&iStackX_8);
                    if (extraout_RAX_02 < 0) {
                        return extraout_RAX_02;
                    }
                }
            }
            if (((*(*(iVar3 + 0xa0) + 0x4b) & 0x11) == 1) && ((arg4 & 2U) != 0)) {
                iVar2 = -0x7ffffffffffffff1;
            }
            else {
                iVar2 = fcn.00012b78(iVar3,arg2);
                if (-1 < iVar2) {
                    *(*arg2 + 0x88) = (arg4 & 2U) == 0;
                    iVar2 = fcn.000120fc(iVar3);
                }
            }
        }
    }
    else {
        iVar2 = -0x7ffffffffffffff8;
    }
    return iVar2;
}


/* fcn.00012e40 @ 0x12e40 */

int64_t fcn.00012e40(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int64_t arg1_00;
    int64_t arg1_01;
    int64_t iVar1;
    int64_t arg4_00;
    int in_R9;
    int64_t aiStackX_18 [2];
    uint64_t in_stack_00000028;
    int64_t in_stack_00000030;
    int8_t in_stack_00000118;
    
    iVar1 = CONCAT44(in_R9,arg4);
    if ((((arg3 == 0) || ((iVar1 - 1U & 0x7ffffffffffffffd) != 0)) || (iVar1 == -0x7fffffffffffffff)) ||
       ((in_R9 < 0 && ((in_stack_00000028 & 0xffffffffffffffc9) != 0)))) {
        return -0x7ffffffffffffffe;
    }
    arg4_00 = 0;
    arg1_00 = arg1 + -8;
    arg1_01 = *(arg1 + 0x88);
    if (in_stack_00000030 == 0) {
        fcn.00010a4c(arg1_00);
    }
    else {
        if (*arg1 < 0x20000) {
            return -0x7ffffffffffffffd;
        }
        arg4_00 = fcn.000109c0(arg1_00,in_stack_00000030);
        if (arg4_00 == 0) {
            return -0x7ffffffffffffff7;
        }
    }
    fcn.00010ebc();
    iVar1 = fcn.00012c40(arg1_01,aiStackX_18,arg3,iVar1,in_stack_00000118);
    if (-1 < iVar1) {
        *arg2 = aiStackX_18[0] + 8;
    }
    iVar1 = fcn.00012364(*(arg1_01 + 8),0,iVar1,arg4_00);
    *0x16170 = 1;
    (**(*0x16310 + 0x20))(*0x16168);
    if (in_stack_00000030 != 0) {
        if (iVar1 < 0) {
            fcn.00010a10(arg4_00);
        }
        else {
            iVar1 = fcn.00010b00(arg1_00,arg4_00);
        }
    }
    return iVar1;
}


/* fcn.000146b8 @ 0x146b8 */

int64_t fcn.000146b8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uchar auStack_68 [11];
    char cStack_5d;
    char acStack_29 [33];
    
    *arg2 = 0;
    iVar1 = fcn.00014488(*(arg1 + 0x340),auStack_68);
    if ((-1 < iVar1) && (cStack_5d == '\0')) {
        iVar2 = 0xb;
        do {
            if (acStack_29[iVar2] != ' ') break;
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        (**(*0x16300 + 0x20))(*0x16300,iVar2,acStack_29 + 1,arg2);
    }
    return iVar1;
}


/* fcn.000153f4 @ 0x153f4 */

void fcn.000153f4(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint64_t arg2;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg1_00 + 0x2a8) == '\0') {
        *(arg1_00 + 0x284) = 0;
        arg2 = *(arg1_00 + 0x70) + 1;
        *(arg1_00 + 0x2a8) = 1;
        while ((1 < arg2 && (*(arg1_00 + 0x11) == '\0'))) {
            iVar1 = fcn.00014ed8(arg1_00,arg2);
            if (iVar1 == 0) {
                *(arg1_00 + 0x284) = *(arg1_00 + 0x284) + 1;
                *(arg1_00 + 0x288) = arg2;
            }
            arg2 = arg2 - 1;
        }
        *(arg1_00 + 0x9c) = 0x41615252;
        *(arg1_00 + 0x280) = 0x61417272;
        *(arg1_00 + 0x298) = 0xaa550000;
    }
    return;
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


/* fcn.0001109c @ 0x1109c */

ulong fcn.0001109c(uint32_t arg1)

{
    uint8_t uVar1;
    uint16_t uVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    uint in_register_0000000c;
    uint16_t *puVar5;
    uchar uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    
    puVar5 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = *puVar5;
    uVar4 = 0x7bc;
    uVar6 = 1;
    if (0x7bb < uVar2) {
        uVar1 = puVar5[1];
        uVar4 = CONCAT71(7,uVar1 - 1);
        if (uVar1 - 1 < 0xc) {
            uVar3 = *(puVar5 + 3) - 1;
            uVar4 = CONCAT71(7,uVar3);
            if ((((uVar3 < 0x1f) && (puVar5[2] < 0x18)) && (*(puVar5 + 5) < 0x3c)) &&
               ((puVar5[3] < 0x3c && (*(puVar5 + 4) < 1000000000)))) {
                uVar8 = *((uVar1 - 1) + 0x16290);
                if (((uVar1 == 2) && ((uVar2 & 3) == 0)) &&
                   ((uVar7 = uVar2, uVar7 != (uVar2 / 100) * 100 || (uVar7 == (uVar7 / 400) * 400)))) {
                    uVar8 = uVar8 + 1;
                }
                uVar4 = *(puVar5 + 3);
                if (uVar4 <= uVar8) goto code_r0x0001114a;
            }
        }
    }
    uVar6 = 0;
code_r0x0001114a:
    return CONCAT71(uVar4 >> 8,uVar6);
}


/* fcn.000148f4 @ 0x148f4 */

int64_t fcn.000148f4(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    char cVar2;
    int64_t iVar3;
    ulong *puVar4;
    uint32_t *arg2_00;
    uint8_t uVar5;
    uint8_t uVar6;
    char *arg4;
    uint64_t uVar7;
    uint64_t arg3;
    uint8_t uStack_258;
    uint32_t auStack_257 [2];
    ushort uStack_24d;
    uint8_t uStack_24b;
    uint32_t auStack_24a [3];
    ushort uStack_23e;
    uint32_t uStack_23c;
    uint32_t auStack_238 [130];
    ulong uStack_30;
    
    iVar3 = *(arg1 + 0x98);
    piVar1 = arg2 + 0x30;
    if (*(iVar3 + 0x10) == piVar1) {
        *(iVar3 + 0x10) = (*(iVar3 + 0x10))[1];
    }
    *(*piVar1 + 8) = *(arg2 + 0x38);
    **(arg2 + 0x38) = *piVar1;
    uStack_30 = 0x1494b;
    puVar4 = fcn.00015940(iVar3,arg2 + 0x40);
    *puVar4 = *(arg2 + 0x20);
    uStack_30 = 0x1495e;
    puVar4 = fcn.000158e4(iVar3,*(arg2 + 0x10));
    *puVar4 = *(arg2 + 0x28);
    *(arg2 + 0x40) = 0xe5;
    *(arg2 + 0xb) = 1;
    arg3 = *(arg2 + 8);
    arg4 = arg2 + 0x40;
    cVar2 = *(arg2 + 10);
    uVar7 = arg3;
    iVar3 = fcn.000138f8(arg1,7,arg3,arg4);
    if (-1 < iVar3) {
        uVar5 = cVar2 - 1;
        if (uVar5 != 0) {
            if (uVar5 * 0x1a != 0) {
                fcn.00010300(&stack0xfffffffffffffdc8,uVar5 * 0x1a,CONCAT71(uVar7 >> 8,0xff));
            }
            iVar3 = fcn.00015a24(&stack0xfffffffffffffdc8,0x105,*(arg2 + 0x10));
            if (iVar3 < 0) {
                return iVar3;
            }
            arg2_00 = &stack0xfffffffffffffdc8;
            uStack_24d = 0xf;
            uStack_23e = 0;
            uStack_24b = 0;
            iVar3 = 0xb;
            do {
                uStack_24b = (uStack_24b >> 1) + uStack_24b * -0x80 + *arg4;
                arg4 = arg4 + 1;
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            uVar6 = 1;
            if (uVar5 != 0) {
                do {
                    uStack_258 = uVar6;
                    if (uVar6 == uVar5) {
                        uStack_258 = uVar6 | 0x40;
                    }
                    if (&stack0xfffffffffffffda9 != arg2_00) {
                        fcn.000102a0(&stack0xfffffffffffffda9,arg2_00,10);
                    }
                    if (&stack0xfffffffffffffdb6 != arg2_00 + 10) {
                        fcn.000102a0(&stack0xfffffffffffffdb6,arg2_00 + 10,0xc);
                    }
                    if (&stack0xfffffffffffffdc4 != arg2_00 + 0x16) {
                        fcn.000102a0(&stack0xfffffffffffffdc4,arg2_00 + 0x16,4);
                    }
                    arg3 = arg3 - 1;
                    arg2_00 = arg2_00 + 0x1a;
                    if (*(arg2 + 0xb) != '\0') {
                        uStack_258 = 0xe5;
                    }
                    iVar3 = fcn.000138f8(arg1,7,arg3,&stack0xfffffffffffffda8);
                    if (iVar3 < 0) {
                        return iVar3;
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 <= uVar5);
            }
        }
        iVar3 = 0;
    }
    return iVar3;
}


/* fcn.00015940 @ 0x15940 */

int64_t * fcn.00015940(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint32_t auStackX_8 [2];
    
    (**(*0x16310 + 0x158))(arg2,0xb,auStackX_8);
    for (piVar2 = arg1 + (auStackX_8[0] & 0x3ff) * 8 + 0x2048;
        (*piVar2 != 0 && (iVar1 = *piVar2 + 0x40, arg2 != iVar1)); piVar2 = *piVar2 + 0x20) {
        iVar1 = fcn.000102e0(arg2,iVar1,0xb);
        if (iVar1 == 0) {
            return piVar2;
        }
    }
    return piVar2;
}


/* fcn.000158e4 @ 0x158e4 */

int64_t * fcn.000158e4(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t *piVar3;
    
    uVar1 = fcn.000157e8(arg2);
    piVar3 = arg1 + uVar1 * 8 + 0x48;
    while( true ) {
        if (*piVar3 == 0) {
            return piVar3;
        }
        iVar2 = (***0x16300)(*0x16300,arg2,*(*piVar3 + 0x10));
        if (iVar2 == 0) break;
        piVar3 = *piVar3 + 0x28;
    }
    return piVar3;
}


/* fcn.00013ae8 @ 0x13ae8 */

int64_t fcn.00013ae8(int64_t arg1)

{
    int16_t *piVar1;
    int16_t *piVar2;
    int16_t iVar3;
    int16_t *piVar4;
    int16_t iVar5;
    
    piVar4 = *(arg1 + 0x10);
    piVar1 = 0x162cc;
    iVar3 = *piVar4;
    piVar2 = piVar4;
    if (iVar3 != 0) {
        iVar5 = iVar3;
        do {
            if (iVar5 != *piVar1) break;
            piVar2 = piVar2 + 1;
            piVar1 = piVar1 + 1;
            iVar5 = *piVar2;
        } while (iVar5 != 0);
    }
    iVar5 = *piVar1;
    if (*piVar2 != iVar5) {
        piVar2 = 0x162d0;
        while ((iVar3 != 0 && (iVar3 == *piVar2))) {
            piVar4 = piVar4 + 1;
            piVar2 = piVar2 + 1;
            iVar3 = *piVar4;
        }
        iVar5 = *piVar2;
        if (*piVar4 != iVar5) {
            return (iVar5 >> 8) << 8;
        }
    }
    return CONCAT71(iVar5 >> 8,1);
}


/* fcn.000150d8 @ 0x150d8 */

ulong fcn.000150d8(int64_t arg1)

{
    int64_t arg1_00;
    uint64_t arg2;
    uint64_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    arg1_00 = *(arg1 + 8);
    arg2 = *(arg1 + 0x30);
    uVar2 = *(arg1 + 0x28) >> (*(arg1_00 + 0x80) & 0x3f);
    uVar1 = uVar2 + 1;
    if ((*(arg1 + 0x28) & *(arg1_00 + 0x78) - 1U) == 0) {
        uVar1 = uVar2;
    }
    uVar2 = 0;
    if (uVar1 == 0) {
        if (arg2 == 0) {
            return 0;
        }
        *(arg1 + 0x30) = 0;
    }
    else {
        uVar3 = uVar2;
        do {
            uVar2 = arg2;
            if (0xfffffffffffffff5 < uVar2 - 1) {
                return 0x800000000000000a;
            }
            arg2 = fcn.00014ed8(arg1_00,uVar2);
            uVar3 = uVar3 + 1;
        } while (uVar3 < uVar1);
        fcn.00014f80(arg1_00,uVar2,-1);
    }
    *(arg1 + 0x38) = *(arg1 + 0x30);
    *(arg1 + 0x40) = uVar2;
    *(arg1 + 0x48) = 1;
    while( true ) {
        if (0xfffffffffffffff7 < arg2) {
            return 0;
        }
        if (0xfffffffffffffff5 < arg2 - 1) break;
        uVar1 = fcn.00014ed8(arg1_00,arg2);
        fcn.00014f80(arg1_00,arg2,0);
        arg2 = uVar1;
    }
    return 0x800000000000000a;
}


/* fcn.000130d8 @ 0x130d8 */

int64_t fcn.000130d8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t *puVar1;
    int64_t *piVar2;
    uint32_t *arg1_00;
    int64_t *piVar3;
    uint64_t arg2_00;
    ulong uVar4;
    bool bVar5;
    char cVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint32_t *arg2_01;
    uint8_t uVar11;
    uint64_t uVar12;
    int64_t iStackX_8;
    uint64_t *in_stack_00000028;
    uint64_t auStack_248 [2];
    int16_t aiStack_238 [264];
    
    iVar9 = arg3;
    iStackX_8 = arg1;
    fcn.00010280(auStack_248,0x10);
    iStackX_8 = *(arg3 + 0x68);
    iVar10 = *(arg3 + 0xa0);
    if (iStackX_8 != 0) {
        if ((arg4 < 0x52) || (arg4 < *in_stack_00000028)) {
            return -0x7ffffffffffffffc;
        }
        bVar5 = false;
        if ((*(arg2 + 0x88) != '\0') || ((*(iVar10 + 0x4b) & 1) != 0)) {
            bVar5 = true;
        }
        puVar1 = in_stack_00000028 + 3;
        if (auStack_248 != puVar1) {
            iVar9 = 0;
            iVar7 = fcn.000102e0(auStack_248,puVar1,0x10);
            if (iVar7 != 0) {
                cVar6 = fcn.0001109c(puVar1);
                if (cVar6 == '\0') {
                    return -0x7ffffffffffffffe;
                }
                if (!bVar5) {
                    fcn.00010f88(puVar1,iVar10 + 0x4e);
                }
            }
        }
        puVar1 = in_stack_00000028 + 7;
        if (auStack_248 != puVar1) {
            iVar9 = 0;
            iVar7 = fcn.000102e0(auStack_248,puVar1,0x10);
            if (iVar7 != 0) {
                cVar6 = fcn.0001109c(puVar1);
                if (cVar6 == '\0') {
                    return -0x7ffffffffffffffe;
                }
                if (!bVar5) {
                    fcn.00010f88(puVar1,iVar10 + 0x56);
                }
                *(arg3 + 0x4a) = 1;
            }
        }
        if ((in_stack_00000028[9] & 0xffffffffffffffc8) != 0) {
            return -0x7ffffffffffffffe;
        }
        if (((*(iVar10 + 0x4b) ^ in_stack_00000028[9]) & 0x10) == 0) {
            uVar12 = CONCAT71(iVar9 >> 8,*(iVar10 + 0x4b)) & 0xffffffffffffffc8;
            uVar11 = uVar12 | in_stack_00000028[9];
            iVar8 = CONCAT71(uVar12 >> 8,uVar11);
            *(iVar10 + 0x4b) = uVar11;
            iVar7 = fcn.00014bb8(&iStackX_8,in_stack_00000028 + 10,iVar8,aiStack_238);
            iVar9 = iStackX_8;
            if (iVar7 < 0) {
                return iVar7;
            }
            if (aiStack_238[0] == 0) {
                if (iStackX_8 != arg3) {
                    return -0x7ffffffffffffff1;
                }
            }
            else {
                if (*(arg3 + 0x78) != arg3 + 0x78) {
                    return -0x7ffffffffffffff1;
                }
                if (iStackX_8 == arg3) {
                    return -0x7ffffffffffffff1;
                }
                if (bVar5) {
                    return -0x7ffffffffffffff1;
                }
                iVar7 = fcn.000148f4(*(arg3 + 0x68),iVar10);
                if (iVar7 < 0) {
                    return iVar7;
                }
                iVar8 = fcn.000147f4(iVar9,aiStack_238,CONCAT71(iVar8 >> 8,*(iVar10 + 0x4b)),&iStackX_8);
                iVar7 = iStackX_8;
                if (iVar8 < 0) {
                    return iVar8;
                }
                if (iStackX_8 + 0x4d != iVar10 + 0x4d) {
                    fcn.000102a0(iStackX_8 + 0x4d,iVar10 + 0x4d,0x13);
                }
                fcn.00010ee8(iVar10);
                *(iVar7 + 0x18) = arg3;
                piVar3 = arg3 + 0x88;
                *(arg3 + 0xa0) = iVar7;
                *(arg3 + 0x68) = iVar9;
                *(*piVar3 + 8) = *(arg3 + 0x90);
                **(arg3 + 0x90) = *piVar3;
                piVar2 = iVar9 + 0x78;
                iVar10 = *piVar2;
                *piVar3 = iVar10;
                *(arg3 + 0x90) = piVar2;
                *(iVar10 + 8) = piVar3;
                *piVar2 = piVar3;
                iVar10 = *(arg3 + 0x98);
                iStackX_8 = iVar7;
                if (iVar10 != 0) {
                    *(iVar10 + 0xc) = 0;
                    *(iVar10 + 0x10) = iVar10 + 0x18;
                    iVar10 = arg3;
                    if (arg3 != *(*(arg3 + 0x68) + 0x68)) {
                        do {
                            iVar7 = fcn.00014254(arg3,&iStackX_8);
                            iVar9 = iStackX_8;
                            if (((iVar7 < 0) || (iStackX_8 == 0)) || (cVar6 = fcn.00013ae8(iStackX_8), cVar6 == '\0'))
                            {
                                return -0x7ffffffffffffff6;
                            }
                            arg1_00 = iVar9 + 0x4d;
                            arg2_01 = *(iVar10 + 0xa0) + 0x4d;
                            if (arg1_00 != arg2_01) {
                                fcn.000102a0(arg1_00,arg2_01,0x13);
                            }
                            iVar9 = fcn.00013938(arg3,iVar9);
                            if (iVar9 < 0) {
                                return iVar9;
                            }
                            iVar10 = *(iVar10 + 0x68);
                        } while (iVar10 != *(*(arg3 + 0x68) + 0x68));
                    }
                }
                *(arg3 + 0x4b) = 1;
            }
            uVar12 = in_stack_00000028[1];
            arg2_00 = *(arg3 + 0x28);
            if (uVar12 != arg2_00) {
                if (*(arg3 + 0x98) != 0) {
                    return -0x7ffffffffffffff1;
                }
                if (bVar5) {
                    return -0x7ffffffffffffff1;
                }
                if (arg2_00 < uVar12) {
                    iVar10 = fcn.000151ec(arg3,uVar12);
                    if (iVar10 < 0) {
                        return iVar10;
                    }
                    iVar10 = fcn.00012ab8(arg3,arg2_00);
                }
                else {
                    *(arg3 + 0x28) = uVar12;
                    iVar10 = fcn.000150d8(arg3);
                }
                if (iVar10 < 0) {
                    return iVar10;
                }
                *(*(arg3 + 0xa0) + 0x5c) = *(arg3 + 0x28);
                uVar4 = *(arg3 + 0x30);
                iVar10 = *(arg3 + 0xa0);
                *(iVar10 + 0x54) = uVar4 >> 0x10;
                *(iVar10 + 0x5a) = uVar4;
            }
            *(arg3 + 0x48) = 1;
            iVar10 = fcn.000120fc(arg3);
            return iVar10;
        }
    }
    return -0x7ffffffffffffff1;
}


/* fcn.00014730 @ 0x14730 */

int64_t fcn.00014730(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    char cVar1;
    int64_t iVar2;
    ulong in_R8;
    uchar auStack_68 [10];
    uchar uStack_5e;
    char cStack_5d;
    uchar auStack_28 [11];
    uchar uStack_1d;
    uchar auStack_12 [10];
    
    arg1_00 = *(arg1 + 0x340);
    iVar2 = fcn.00014488(arg1_00,auStack_68);
    if (-1 < iVar2) {
        if (cStack_5d != '\0') {
            fcn.00010280(auStack_68,0x60);
            uStack_5e = 1;
            iVar2 = fcn.000145b8(arg1_00,auStack_68);
            if (iVar2 < 0) {
                return iVar2;
            }
            uStack_1d = 8;
        }
        fcn.00010300(auStack_28,0xb,CONCAT71(in_R8 >> 8,0x20));
        cVar1 = (**(*0x16300 + 0x28))(*0x16300,arg2,0xb,auStack_28);
        if (cVar1 == '\0') {
            fcn.00011050(auStack_12);
            iVar2 = fcn.00013938(arg1_00,auStack_68);
        }
        else {
            iVar2 = -0x7ffffffffffffffd;
        }
    }
    return iVar2;
}


/* fcn.00012fdc @ 0x12fdc */

int64_t fcn.00012fdc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    int64_t arg3_00;
    uint8_t uVar2;
    int16_t *piVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint uStack_48;
    
    fcn.000146b8(arg1,&uStack_48);
    iVar5 = 0;
    piVar3 = &uStack_48;
    iVar4 = iVar5;
    while (uStack_48 != 0) {
        piVar3 = piVar3 + 1;
        iVar4 = iVar4 + 1;
        uStack_48._0_2_ = *piVar3;
    }
    uVar2 = *(arg1 + 0x80);
    arg3_00 = iVar4 * 2 + 2;
    uVar1 = iVar4 * 2 + 0x26;
    fcn.000153f4(arg1);
    iVar4 = -0x7ffffffffffffffb;
    if (uVar1 <= *arg2) {
        fcn.00010280(arg3,0x24);
        *arg3 = uVar1;
        *(arg3 + 8) = *(arg1 + 0x44);
        *(arg3 + 0x20) = *(arg1 + 0x78);
        *(arg3 + 0x10) = *(arg1 + 0x70) << (uVar2 & 0x3f);
        *(arg3 + 0x18) = *(arg1 + 0x284) << (uVar2 & 0x3f);
        iVar4 = iVar5;
        if ((arg3_00 != 0) && (arg3 + 0x24 != &uStack_48)) {
            fcn.000102a0(arg3 + 0x24,&uStack_48,arg3_00);
            iVar4 = 0;
        }
    }
    *arg2 = uVar1;
    return iVar4;
}


/* fcn.00013494 @ 0x13494 */

ulong fcn.00013494(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t arg3_00;
    int64_t arg1_00;
    int16_t *piVar1;
    ulong uVar2;
    int64_t arg1_01;
    int64_t arg3_01;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t *in_stack_00000028;
    ulong uStack_48;
    
    iVar3 = arg2 + -8;
    iVar4 = *(arg2 + 0x88);
    arg3_01 = *(iVar4 + 0x10);
    arg1_00 = *(iVar4 + 8);
    if (arg3_01 == -0x7ffffffffffffff2) {
        return 0x8000000000000007;
    }
    arg1_01 = iVar3;
    fcn.00010a4c(iVar3);
    fcn.00010ebc();
    if (arg3_01 < 0) {
code_r0x000135e9:
        if (arg1 != '\0') goto code_r0x000136f8;
    }
    else {
        arg3_01 = -0x7ffffffffffffffd;
        if (arg1 != '\0') {
            if ((*arg3 == *0x16040) && (*(arg3 + 8) == *0x16048)) {
                if (*(arg1_00 + 0x44) == '\0') {
                    arg3_01 = fcn.000130d8(arg1_01,iVar3,iVar4,*arg4);
                }
                else {
                    arg3_01 = -0x7ffffffffffffff8;
                }
            }
            if ((*arg3 == *0x16020) && (*(arg3 + 8) == *0x16028)) {
                if (*(arg1_00 + 0x44) == '\0') {
                    if ((*arg4 < 0x26) || (*arg4 < *in_stack_00000028)) {
                        arg3_01 = -0x7ffffffffffffffc;
                    }
                    else {
                        arg3_01 = fcn.00014730(arg1_00,in_stack_00000028 + 0x24);
                    }
                }
                else {
                    arg3_01 = -0x7ffffffffffffff8;
                }
            }
            if ((*arg3 == *0x16070) && (*(arg3 + 8) == *0x16078)) {
                if (*(arg1_00 + 0x44) == '\0') {
                    if (*arg4 < 2) {
                        arg3_01 = -0x7ffffffffffffffc;
                    }
                    else {
                        arg3_01 = fcn.00014730(arg1_00,in_stack_00000028);
                    }
                }
                else {
                    arg3_01 = -0x7ffffffffffffff8;
                }
            }
            goto code_r0x000135e9;
        }
        if ((*arg3 == *0x16040) && (*(arg3 + 8) == *0x16048)) {
            arg3_01 = fcn.00013efc(*(iVar4 + 8),*(iVar4 + 0xa0),arg4,in_stack_00000028);
        }
        if ((*arg3 == *0x16020) && (*(arg3 + 8) == *0x16028)) {
            arg3_01 = fcn.00012fdc(arg1_00,arg4,in_stack_00000028);
        }
        if ((*arg3 == *0x16070) && (*(arg3 + 8) == *0x16078)) {
            fcn.000146b8(arg1_00,&uStack_48);
            iVar4 = 0;
            piVar1 = &uStack_48;
            iVar3 = iVar4;
            while (uStack_48 != 0) {
                piVar1 = piVar1 + 1;
                iVar3 = iVar3 + 1;
                uStack_48._0_2_ = *piVar1;
            }
            arg3_00 = iVar3 * 2 + 2;
            arg3_01 = -0x7ffffffffffffffb;
            if (((arg3_00 <= *arg4) && (arg3_01 = iVar4, arg3_00 != 0)) && (in_stack_00000028 != &uStack_48)) {
                fcn.000102a0(in_stack_00000028,&uStack_48,arg3_00);
                arg3_01 = 0;
            }
            *arg4 = arg3_00;
            goto code_r0x000135e9;
        }
    }
    *0x16190 = 0;
code_r0x000136f8:
    uVar2 = fcn.00012364(arg1_00,0,arg3_01,0);
    *0x16190 = 1;
    *0x16170 = 1;
    (**(*0x16310 + 0x20))(*0x16168);
    return uVar2;
}


/* fcn.000138f8 @ 0x138f8 */

ulong fcn.000138f8(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    ulong extraout_RAX;
    uint in_register_0000000c;
    ulong auStackX_8 [4];
    
    if (arg3 << 5 < *(CONCAT44(in_register_0000000c,arg1) + 0x28)) {
        auStackX_8[0] = 0x20;
        fcn.00012914(CONCAT44(in_register_0000000c,arg1),arg2,arg3 << 5,auStackX_8);
        uVar1 = extraout_RAX;
    }
    else {
        *arg4 = 0;
        uVar1 = 0;
        *(arg4 + 0xb) = 0;
    }
    return uVar1;
}


/* fcn.00010300 @ 0x10300 */

int64_t fcn.00010300(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00015a24 @ 0x15a24 */

ulong fcn.00015a24(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int16_t iVar1;
    uint64_t extraout_RAX;
    uint in_register_00000014;
    
    if (((arg1 == 0) || (arg3 == 0)) || (1000000 < CONCAT44(in_register_00000014,arg2))) {
        return 0x8000000000000002;
    }
    fcn.000159f0(arg3,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + (extraout_RAX + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x00015a95;
    }
    if (arg3 < arg1 + CONCAT44(in_register_00000014,arg2) * 2) {
        return 0x800000000000000f;
    }
code_r0x00015a95:
    iVar1 = *arg3;
    if (iVar1 != 0) {
        arg3 = arg3 - arg1;
        do {
            *arg1 = iVar1;
            arg1 = arg1 + 2;
            iVar1 = *(arg3 + arg1);
        } while (iVar1 != 0);
    }
    *arg1 = 0;
    return 0;
}


/* fcn.000155ac @ 0x155ac */

void fcn.000155ac(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    for (; (arg2 != 0 && (*(arg1 + -1 + arg2) == ' ')); arg2 = arg2 + -1) {
    }
    (**(*0x16300 + 0x20))(*0x16300,arg2,arg1);
    if (arg3 != 0) {
        (**(*0x16300 + 0x10))(*0x16300,arg4);
    }
    return;
}


/* fcn.00015ac0 @ 0x15ac0 */

ulong fcn.00015ac0(int64_t arg1,ulong noname_1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    int16_t *piVar3;
    int64_t iVar4;
    uint64_t arg2_00;
    
    iVar4 = 0x105;
    piVar3 = arg1;
    iVar1 = fcn.000159f0(arg1,0x105);
    arg2_00 = iVar4 - iVar1;
    if ((arg1 == 0) || (arg2 == NULL)) {
        return 0x8000000000000002;
    }
    if (arg2_00 == 0) {
        return 0x8000000000000004;
    }
    uVar2 = fcn.000159f0(arg2,arg2_00);
    if (arg2_00 <= uVar2) {
        return 0x8000000000000005;
    }
    if (arg2 <= piVar3) {
        if (piVar3 < arg2 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg2 < piVar3) goto code_r0x00015b50;
    }
    if (arg2 < piVar3 + 0x105) {
        return 0x800000000000000f;
    }
code_r0x00015b50:
    piVar3 = piVar3 + iVar1;
    for (; *arg2 != 0; arg2 = arg2 + 2) {
        *piVar3 = *arg2;
        piVar3 = piVar3 + 1;
    }
    *piVar3 = 0;
    return 0;
}


/* fcn.00015bd8 @ 0x15bd8 */

void fcn.00015bd8(ulong noname_0,int64_t arg1,uint32_t *arg2)

{
    uint32_t *arg1_00;
    
    arg1_00 = fcn.00015b7c();
    if (((arg1_00 != NULL) && (arg1 != 0)) && (arg1_00 != arg2)) {
        fcn.000102a0(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.000157e8 @ 0x157e8 */

uint32_t fcn.000157e8(uint32_t arg1)

{
    int16_t iVar1;
    uint64_t uVar2;
    uint in_register_0000000c;
    int16_t *piVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int16_t *piVar6;
    uint32_t auStackX_8 [2];
    int64_t var_128h;
    int64_t var_140h;
    int16_t iStack_218;
    int16_t aiStack_216 [259];
    int16_t aiStack_10 [4];
    
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    iVar5 = 0;
    piVar6 = &iStack_218;
    if (piVar3 != NULL) {
        uVar4 = 0x103;
        uVar2 = fcn.000159f0(arg1,0x103);
        if (uVar4 < uVar2) {
            uVar2 = uVar4;
        }
        if (((&iStack_218 < piVar3) || (piVar3 + uVar2 + 1 <= &iStack_218)) &&
           ((piVar3 < &iStack_218 || (aiStack_10 <= piVar3)))) {
            if (uVar2 != 0) {
                do {
                    iVar1 = *((piVar3 - &iStack_218) + piVar6);
                    if (iVar1 == 0) break;
                    *piVar6 = iVar1;
                    piVar6 = piVar6 + 1;
                    uVar2 = uVar2 - 1;
                } while (uVar2 != 0);
            }
            *piVar6 = 0;
        }
    }
    (**(*0x16300 + 0x18))(*0x16300,&iStack_218);
    piVar6 = &iStack_218;
    while (iStack_218 != 0) {
        piVar6 = piVar6 + 1;
        iVar5 = iVar5 + 1;
        iStack_218 = *piVar6;
    }
    (**(*0x16310 + 0x158))(&iStack_218,iVar5 * 2 + 2,auStackX_8);
    return auStackX_8[0] & 0x3ff;
}


/* fcn.00013b58 @ 0x13b58 */

void fcn.00013b58(int64_t arg1,int64_t arg2)

{
    int16_t *piVar1;
    ulong uVar2;
    uint32_t *arg1_00;
    uint8_t uVar3;
    uint8_t uVar4;
    char *pcVar5;
    int64_t iVar6;
    uint64_t arg3;
    ushort uStack_268;
    int16_t aiStack_266 [7];
    uint8_t uStack_258;
    uint32_t auStack_257 [2];
    char cStack_24d;
    uint8_t uStack_24b;
    uint32_t auStack_24a [3];
    int16_t iStack_23e;
    uint32_t uStack_23c;
    uint uStack_238;
    
    arg3 = *(arg2 + 8);
    arg1_00 = &uStack_238;
    pcVar5 = arg2 + 0x40;
    uVar4 = 0;
    iVar6 = 0xb;
    do {
        uVar4 = (uVar4 >> 1) + uVar4 * -0x80 + *pcVar5;
        pcVar5 = pcVar5 + 1;
        iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    uVar3 = 1;
    do {
        if (arg3 == 0) {
code_r0x00013c8e:
            arg1_00 = &uStack_238;
            break;
        }
        arg3 = arg3 - 1;
        iVar6 = fcn.000138f8(arg1,6,arg3,&uStack_258);
        if ((((iVar6 < 0) || (cStack_24d != '\x0f')) || (iStack_23e != 0)) ||
           (((uStack_24b != uVar4 || ((uStack_258 & 0xbf) != uVar3)) || (0x14 < uVar3)))) goto code_r0x00013c8e;
        if (arg1_00 != auStack_257) {
            fcn.000102a0(arg1_00,auStack_257,10);
        }
        if (arg1_00 + 10 != auStack_24a) {
            fcn.000102a0(arg1_00 + 10,auStack_24a,0xc);
        }
        if (arg1_00 + 0x16 != &uStack_23c) {
            fcn.000102a0(arg1_00 + 0x16,&uStack_23c,4);
        }
        arg1_00 = arg1_00 + 0x1a;
        uVar3 = uVar3 + 1;
    } while ((uStack_258 & 0x40) == 0);
    *(arg2 + 10) = uVar3;
    *arg1_00 = 0;
    if (arg1_00 == &uStack_238) {
        uVar4 = *(arg2 + 0x4c);
        fcn.000155ac(arg2 + 0x40,8,uVar4 & 8,&uStack_238);
        uVar2 = 3;
        fcn.000155ac(arg2 + 0x48,3,uVar4 & 0x10,aiStack_266);
        if (aiStack_266[0] != 0) {
            uStack_268 = 0x2e;
            fcn.00015ac0(&uStack_238,uVar2,&uStack_268);
        }
    }
    iVar6 = 0;
    piVar1 = &uStack_238;
    while (uStack_238 != 0) {
        piVar1 = piVar1 + 1;
        iVar6 = iVar6 + 1;
        uStack_238._0_2_ = *piVar1;
    }
    uVar2 = fcn.00015bd8(0,iVar6 * 2 + 2,&uStack_238);
    *(arg2 + 0x10) = uVar2;
    return;
}


/* fcn.00013d50 @ 0x13d50 */

void fcn.00013d50(int64_t arg1,uint32_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint in_register_00000014;
    int64_t iVar6;
    uint32_t auStackX_8 [2];
    
    iVar6 = CONCAT44(in_register_00000014,arg2);
    if (*(iVar6 + 0x38) == 0) {
        *(iVar6 + 0x38) = arg1 + 0x18;
    }
    iVar2 = *(iVar6 + 0x38);
    piVar1 = iVar6 + 0x30;
    *piVar1 = iVar2;
    piVar3 = *(iVar2 + 8);
    *(iVar6 + 0x38) = piVar3;
    *piVar3 = piVar1;
    iVar4 = *0x16310;
    *(iVar2 + 8) = piVar1;
    (**(iVar4 + 0x158))(iVar6 + 0x40,0xb,auStackX_8);
    *(iVar6 + 0x20) = *(arg1 + 0x2048 + (auStackX_8[0] & 0x3ff) * 8);
    *(arg1 + 0x2048 + (auStackX_8[0] & 0x3ff) * 8) = iVar6;
    uVar5 = fcn.000157e8(*(iVar6 + 0x10));
    *(iVar6 + 0x28) = *(arg1 + 0x48 + uVar5 * 8);
    *(arg1 + 0x48 + uVar5 * 8) = iVar6;
    return;
}


/* fcn.00015478 @ 0x15478 */

uint8_t fcn.00015478(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int16_t *piVar2;
    uint8_t uVar3;
    int16_t iVar4;
    int16_t *piVar5;
    int16_t *piVar6;
    int16_t *piVar7;
    int16_t *piVar8;
    ulong in_R8;
    uint64_t uVar9;
    int16_t *piVar10;
    
    piVar10 = NULL;
    piVar7 = 0x1;
    fcn.00010300(arg2,0xb,CONCAT71(in_R8 >> 8,0x20));
    iVar4 = *arg1;
    piVar2 = arg1;
    piVar5 = piVar10;
    if (iVar4 != 0) {
        do {
            if (iVar4 == 0x2e) {
                piVar5 = piVar2;
            }
            piVar2 = piVar2 + 1;
            iVar4 = *piVar2;
        } while (iVar4 != 0);
        if (piVar5 != NULL) {
            uVar9 = piVar5 - arg1 >> 1;
            piVar6 = piVar5 + 1;
            piVar8 = piVar2 - (piVar5 + 1) >> 1;
            goto code_r0x00015512;
        }
    }
    uVar9 = piVar2 - arg1 >> 1;
    piVar6 = piVar2;
    piVar8 = piVar10;
code_r0x00015512:
    while( true ) {
        piVar2 = piVar2 + -1;
        if (piVar2 < arg1) break;
        if (((*piVar2 == 0x2e) || (*piVar2 == 0x20)) && (piVar2 != piVar5)) {
            piVar7 = piVar10;
        }
    }
    uVar3 = -(uVar9 != 0) & piVar7;
    if (8 < uVar9) {
        uVar9 = 8;
        uVar3 = 0;
    }
    if (piVar8 < 0x4) {
        piVar2 = uVar3;
    }
    else {
        piVar8 = 0x3;
        piVar2 = piVar10;
    }
    cVar1 = (**(*0x16300 + 0x28))(*0x16300,arg1,uVar9,arg2);
    if (cVar1 != '\0') {
        piVar2 = piVar10;
    }
    cVar1 = (**(*0x16300 + 0x28))(*0x16300,piVar6,piVar8,arg2 + 8);
    uVar3 = piVar2;
    if (cVar1 != '\0') {
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00013de8 @ 0x13de8 */

int64_t fcn.00013de8(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int64_t iVar1;
    ulong *arg2_00;
    char acStack_28 [11];
    uint8_t uStack_1d;
    ushort uStack_14;
    
    arg1_00 = *(arg1 + 0x98);
    arg2_00 = NULL;
    while( true ) {
        iVar1 = fcn.000138f8(arg1,6,*(arg1_00 + 8),acStack_28);
        if (iVar1 < 0) {
            return iVar1;
        }
        if ((acStack_28[0] != -0x1b) && ((uStack_1d & 8) == 0)) break;
        *(arg1_00 + 8) = *(arg1_00 + 8) + 1;
    }
    if (acStack_28[0] != '\0') {
        if (*(*(arg1 + 8) + 0x84) != 2) {
            uStack_14 = 0;
        }
        arg2_00 = fcn.00015bac(0x60);
        if (arg2_00 != NULL) {
            *arg2_00 = 0x65746166;
            *(arg2_00 + 1) = *(arg1_00 + 8);
            if (arg2_00 + 8 != acStack_28) {
                fcn.000102a0(arg2_00 + 8,acStack_28,0x20);
            }
            fcn.00013b58(arg1,arg2_00);
            if (arg2_00[2] != 0) {
                fcn.00013d50(arg1_00,arg2_00);
                *(arg1_00 + 8) = *(arg1_00 + 8) + 1;
                goto code_r0x00013ed9;
            }
            fcn.00010ee8(arg2_00);
        }
        return -0x7ffffffffffffff7;
    }
    *(arg1_00 + 0x28) = 1;
code_r0x00013ed9:
    *arg2 = arg2_00;
    return 0;
}


/* fcn.00015728 @ 0x15728 */

ushort fcn.00015728(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int16_t *piVar2;
    int16_t *piVar3;
    uint8_t uVar4;
    int16_t aiStack_28 [16];
    
    uVar4 = arg2;
    fcn.00015a24(aiStack_28,0xd,arg1);
    (**(*0x16300 + 0x10))(*0x16300,aiStack_28);
    piVar2 = aiStack_28;
    iVar1 = *arg1;
    piVar3 = arg1;
    while ((iVar1 != 0 && (iVar1 == *piVar2))) {
        piVar3 = piVar3 + 1;
        piVar2 = piVar2 + 1;
        iVar1 = *piVar3;
    }
    if (*piVar3 != *piVar2) {
        uVar4 = 1;
    }
    fcn.00015a24(aiStack_28,0xd,arg1);
    (**(*0x16300 + 0x18))(*0x16300,aiStack_28);
    piVar2 = aiStack_28;
    for (; (*arg1 != 0 && (*arg1 == *piVar2)); arg1 = arg1 + 2) {
        piVar2 = piVar2 + 1;
    }
    return CONCAT11(*piVar2 >> 8,-(*arg1 != *piVar2) & uVar4);
}


/* fcn.00015600 @ 0x15600 */

void fcn.00015600(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    int16_t iVar1;
    int16_t *piVar2;
    char *pcVar3;
    uint8_t uVar4;
    char cVar5;
    int64_t *piVar6;
    int16_t *piVar7;
    char *pcVar8;
    int64_t iVar9;
    char *pcVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint8_t auStackX_8 [8];
    
    arg2_00 = arg2 + 0x40;
    uVar12 = 8;
    do {
        if (*(arg2 + 0x3f + uVar12) != ' ') break;
        uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    if (6 < uVar12) {
        uVar12 = 6;
    }
    *(uVar12 + arg2_00) = 0x7e;
    pcVar10 = uVar12 + arg2_00 + 1;
    *pcVar10 = '1';
    piVar6 = fcn.00015940(*(arg1 + 0x98),arg2_00);
    if (*piVar6 != 0) {
        iVar11 = 0;
        do {
            *pcVar10 = *pcVar10 + '\x01';
            iVar11 = iVar11 + 1;
            if (iVar11 == 4) {
                piVar2 = *(arg2 + 0x10);
                iVar1 = *piVar2;
                piVar7 = piVar2;
                iVar9 = 0;
                while (iVar1 != 0) {
                    piVar7 = piVar7 + 1;
                    iVar9 = iVar9 + 1;
                    iVar1 = *piVar7;
                }
                (**(*0x16310 + 0x158))(piVar2,iVar9 * 2 + 2,auStackX_8);
                if (2 < uVar12) {
                    uVar12 = 2;
                }
                pcVar8 = uVar12 + arg2_00 + (-arg2_00 - uVar12);
                pcVar3 = uVar12 + arg2_00;
                do {
                    pcVar10 = pcVar3;
                    uVar4 = auStackX_8[pcVar8] & 0xf;
                    if (uVar4 < 10) {
                        cVar5 = uVar4 + 0x30;
                    }
                    else {
                        cVar5 = uVar4 + 0x37;
                    }
                    *pcVar10 = cVar5;
                    pcVar8 = pcVar8 + 1;
                    pcVar3 = pcVar10 + 1;
                } while (pcVar8 < 0x4);
                pcVar10[1] = '~';
                pcVar10 = pcVar10 + 2;
                *pcVar10 = '1';
            }
            piVar6 = fcn.00015940(*(arg1 + 0x98),arg2_00);
        } while (*piVar6 != 0);
    }
    return;
}


/* fcn.00014488 @ 0x14488 */

int64_t fcn.00014488(int64_t arg1,int64_t arg2)

{
    char *arg4;
    int64_t iVar1;
    int64_t arg3;
    
    *(arg2 + 0xb) = 1;
    arg4 = arg2 + 0x40;
    arg3 = 0;
    while( true ) {
        iVar1 = fcn.000138f8(arg1,6,arg3,arg4);
        if (iVar1 < 0) {
            return iVar1;
        }
        if ((*arg4 != -0x1b) && ((*(arg2 + 0x4b) & 0xdf) == 8)) break;
        arg3 = arg3 + 1;
        if (*arg4 == '\0') {
            return 0;
        }
    }
    *(arg2 + 8) = arg3;
    *(arg2 + 10) = 1;
    return 0;
}


/* fcn.00014500 @ 0x14500 */

int64_t fcn.00014500(uint32_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    ulong *puVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uchar auStack_68 [8];
    uint16_t uStack_60;
    char cStack_5d;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar7 = 0;
    if (*(iVar3 + 0x68) == 0) {
        iVar2 = fcn.00014488(iVar3,auStack_68);
        if (iVar2 < 0) {
            return iVar2;
        }
        if (cStack_5d == '\0') {
            uVar7 = uStack_60;
        }
    }
    puVar1 = *(iVar3 + 0x98) + 0x18;
    uVar5 = *(arg2 + 10);
    uVar6 = 0;
    for (puVar4 = *puVar1; puVar4 != puVar1; puVar4 = *puVar4) {
        uVar8 = *(puVar4 + -5);
        if ((*(puVar4 + -0x26) + uVar5 <= uVar8) && ((uVar5 < uVar7 || (uVar7 <= uVar6)))) goto code_r0x00014592;
        uVar5 = *(arg2 + 10) + uVar8;
        uVar6 = uVar8;
    }
    if (uVar5 < *(*(iVar3 + 0x98) + 8)) {
code_r0x00014592:
        *(arg2 + 8) = uVar5;
        iVar3 = 0;
        *(arg2 + 0x38) = puVar4;
    }
    else {
        iVar3 = -0x7ffffffffffffff5;
    }
    return iVar3;
}


/* fcn.000145b8 @ 0x145b8 */

int64_t fcn.000145b8(int64_t arg1,int64_t arg2)

{
    uint32_t *arg2_00;
    uint64_t arg2_01;
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uchar auStackX_8 [8];
    
    iVar1 = *(arg1 + 0x98);
    while (*(iVar1 + 0x28) == '\0') {
        iVar2 = fcn.00013de8(arg1,auStackX_8);
        if (iVar2 < 0) {
            return iVar2;
        }
    }
    arg2_00 = arg2 + 0x4e;
    fcn.00011050(arg2_00);
    if (arg2 + 0x56 != arg2_00) {
        fcn.000102a0(arg2 + 0x56,arg2_00,4);
    }
    if (arg2 + 0x52 != arg2 + 0x50) {
        fcn.000102a0(arg2 + 0x52,arg2 + 0x50,2);
    }
    uVar4 = *(arg2 + 10) + *(iVar1 + 8);
    arg2_01 = *(arg1 + 0x28);
    if (arg2_01 < uVar4 << 5) {
        if (*(arg1 + 0x49) == '\0') {
            uVar3 = 0xffff;
        }
        else {
            uVar3 = *(*(arg1 + 8) + 0x2b8);
        }
        if (uVar3 <= uVar4) {
            iVar1 = fcn.00014500(arg1,arg2);
            return iVar1;
        }
        iVar2 = fcn.000151ec(arg1,*(*(arg1 + 8) + 0x78) + arg2_01);
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = fcn.00012ab8(arg1,arg2_01);
        if (iVar2 < 0) {
            return iVar2;
        }
    }
    *(iVar1 + 8) = uVar4;
    *(arg2 + 8) = uVar4 + -1;
    return 0;
}


/* fcn.000142d4 @ 0x142d4 */

uint64_t fcn.000142d4(int64_t arg1,int64_t arg2)

{
    ushort *arg1_00;
    int16_t iVar1;
    int16_t *piVar2;
    uchar auVar3 [16];
    char cVar4;
    uint8_t uVar5;
    uint16_t *puVar6;
    uint64_t uVar7;
    uint16_t uVar8;
    uint16_t *puVar9;
    int16_t *piVar10;
    uint16_t uVar11;
    int64_t iVar12;
    int16_t *arg2_00;
    uint16_t *arg1_01;
    ulong in_R8;
    int16_t aiStack_28 [16];
    
    arg1_01 = *(arg2 + 0x10);
    arg1_00 = arg2 + 0x40;
    *(arg2 + 10) = 1;
    fcn.00010300(arg1_00,0xb,CONCAT71(in_R8 >> 8,0x20));
    uVar11 = *arg1_01;
    puVar6 = 0x162cc;
    piVar10 = NULL;
    puVar9 = arg1_01;
    if (uVar11 != 0) {
        uVar8 = uVar11;
        do {
            if (uVar8 != *puVar6) break;
            puVar9 = puVar9 + 1;
            puVar6 = puVar6 + 1;
            uVar8 = *puVar9;
        } while (uVar8 != 0);
    }
    uVar7 = *puVar6;
    if (*puVar9 == *puVar6) {
        *arg1_00 = 0x2e;
        iVar12 = *(arg1 + 0xa0);
    }
    else {
        puVar6 = 0x162d0;
        puVar9 = arg1_01;
        while ((uVar11 != 0 && (uVar11 == *puVar6))) {
            puVar9 = puVar9 + 1;
            puVar6 = puVar6 + 1;
            uVar11 = *puVar9;
        }
        if (*puVar9 != *puVar6) {
            cVar4 = fcn.00015478(arg1_01,arg1_00);
            if (cVar4 == '\0') {
                fcn.00015600(arg1,arg2);
                for (; *arg1_01 != 0; arg1_01 = arg1_01 + 1) {
                    piVar10 = piVar10 + 1;
                }
                auVar3._8_8_ = 0;
                auVar3._0_8_ = piVar10 + 6;
                *(arg2 + 10) = *(arg2 + 10) + (piVar10 + 6) / 0xd;
                return SUB168(ZEXT816(0x4ec4ec4ec4ec4ec5) * auVar3,0);
            }
            piVar2 = *(arg2 + 0x10);
            arg2_00 = aiStack_28;
            aiStack_28[0] = *piVar2;
            if (aiStack_28[0] != 0) {
                do {
                    if (*arg2_00 == 0x2e) {
                        piVar10 = arg2_00;
                    }
                    arg2_00 = arg2_00 + 1;
                    iVar1 = *((piVar2 - aiStack_28) + arg2_00);
                    *arg2_00 = iVar1;
                } while (iVar1 != 0);
            }
            uVar5 = 0;
            if (piVar10 != NULL) {
                *piVar10 = 0;
                arg2_00 = CONCAT71(arg2_00 >> 8,0x10);
                uVar5 = fcn.00015728(piVar10 + 1,arg2_00);
            }
            uVar7 = fcn.00015728(aiStack_28,CONCAT71(arg2_00 >> 8,8));
            uVar5 = uVar5 | uVar7;
            if ((uVar5 & 1) == 0) {
                *(arg2 + 0x4c) = uVar5;
                return uVar7;
            }
            *(arg2 + 10) = *(arg2 + 10) + '\x01';
            *(arg2 + 0x4c) = 0;
            return uVar7;
        }
        *arg1_00 = 0x2e2e;
        uVar7 = *(arg1 + 0x68);
        iVar12 = *(uVar7 + 0xa0);
    }
    if (arg2 + 0x4d != iVar12 + 0x4d) {
        uVar7 = fcn.000102a0(arg2 + 0x4d,iVar12 + 0x4d,0x13);
    }
    return uVar7;
}


/* fcn.00014160 @ 0x14160 */

int64_t fcn.00014160(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    char cVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iStackX_8;
    uchar auStack_28 [16];
    
    arg1_00 = *(arg1 + 0x98);
    cVar1 = fcn.00015478(arg2,auStack_28);
    piVar2 = fcn.000158e4(arg1_00,arg2);
    iVar4 = *piVar2;
    if (iVar4 == 0) {
        iStackX_8 = iVar4;
        if (cVar1 != '\0') {
            piVar2 = fcn.00015940(arg1_00,auStack_28);
            iVar4 = *piVar2;
            iStackX_8 = iVar4;
            if (iVar4 != 0) goto code_r0x00014234;
        }
        while (*(arg1_00 + 0x28) == '\0') {
            iVar3 = fcn.00013de8(arg1,&iStackX_8);
            iVar4 = iStackX_8;
            if (iVar3 < 0) {
                return iVar3;
            }
            if ((iStackX_8 != 0) &&
               ((iVar3 = (***0x16300)(*0x16300,arg2,*(iStackX_8 + 0x10)), iVar3 == 0 ||
                ((cVar1 != '\0' &&
                 ((auStack_28 == iVar4 + 0x40 || (iVar3 = fcn.000102e0(auStack_28,iVar4 + 0x40,0xb), iVar3 == 0))))))
               )) break;
        }
    }
code_r0x00014234:
    *arg3 = iVar4;
    return 0;
}


/* fcn.00014e54 @ 0x14e54 */

int64_t fcn.00014e54(int64_t arg1,uint32_t arg2)

{
    uint in_register_00000014;
    uint64_t uVar1;
    int64_t iVar2;
    
    uVar1 = CONCAT44(in_register_00000014,arg2);
    if (*(arg1 + 0x70) + 1U < uVar1) {
        *(arg1 + 0x98) = 0xffffffff;
    }
    else {
        if (*(arg1 + 0x84) == 0) {
            uVar1 = uVar1 * 3 >> 1;
        }
        else if (*(arg1 + 0x84) == 1) {
            uVar1 = uVar1 * 2;
        }
        else {
            uVar1 = uVar1 << 2;
        }
        iVar2 = *(arg1 + 0x50) + uVar1;
        *(arg1 + 0x88) = iVar2;
        iVar2 = fcn.00010d3c(arg1,2,iVar2,*(arg1 + 0x90));
        if (iVar2 < 0) {
            *(arg1 + 0x98) = 0xffffffff;
        }
    }
    return arg1 + 0x98;
}


/* fcn.00014f80 @ 0x14f80 */

ulong fcn.00014f80(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    ulong uVar1;
    int64_t iVar2;
    uint32_t *puVar3;
    uint32_t uVar4;
    uint in_register_00000014;
    uint64_t arg2_00;
    uint32_t uVar5;
    
    arg2_00 = CONCAT44(in_register_00000014,arg2);
    if (arg2_00 < 2) {
        uVar1 = 0x800000000000000a;
    }
    else {
        iVar2 = fcn.00014ed8(arg1,arg2_00);
        if (arg3 == 0) {
            if ((iVar2 != 0) && (*(arg1 + 0x284) = *(arg1 + 0x284) + 1, arg2_00 < *(arg1 + 0x288))) {
                *(arg1 + 0x288) = arg2;
            }
        }
        else if ((iVar2 == 0) && (*(arg1 + 0x284) != 0)) {
            *(arg1 + 0x284) = *(arg1 + 0x284) + -1;
        }
        puVar3 = fcn.00014e54(arg1,arg2);
        if (*(arg1 + 0x84) == 0) {
            uVar5 = arg3 & 0xfff;
            if ((arg2 & 1) == 0) {
                uVar4 = *puVar3 & 0xf000;
            }
            else {
                uVar4 = *puVar3 & 0xf;
                uVar5 = uVar5 << 4;
            }
            *puVar3 = uVar4 | uVar5;
            *(puVar3 + 1) = (uVar4 | uVar5) >> 8;
        }
        else if (*(arg1 + 0x84) == 1) {
            *puVar3 = arg3;
        }
        else {
            *puVar3 = *puVar3 & 0xf0000000;
            *puVar3 = *puVar3 | arg3 & 0xfffffff;
        }
        if ((*(arg1 + 0x2c8) == '\0') && (*(arg1 + 0x84) != 0)) {
            *(arg1 + 0x2c8) = 1;
            fcn.00010d3c(arg1,3,*(arg1 + 0x50) + *(arg1 + 0x90),*(arg1 + 0x90));
        }
        uVar1 = fcn.00010d3c(arg1,3,*(arg1 + 0x88),*(arg1 + 0x90));
    }
    return uVar1;
}


/* fcn.000159f0 @ 0x159f0 */

uint64_t fcn.000159f0(uint32_t arg1,int64_t arg2)

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


/* fcn.000159bc @ 0x159bc */

int64_t fcn.000159bc(int64_t arg1,uint32_t arg2,uint32_t arg3)

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


