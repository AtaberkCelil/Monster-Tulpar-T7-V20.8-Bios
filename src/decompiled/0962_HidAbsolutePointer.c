// decompiled by r2ghidra: 0962_HidAbsolutePointer.pe32
// functions: 10

/* entry0 @ 0x10334 */

void entry0(int64_t arg1,int64_t arg2)

{
    *0x11248 = *(arg2 + 0x60);
    *0x11170 = arg1;
    *0x11178 = arg1;
    *0x11240 = arg2;
    (**(*0x11248 + 0x148))(0x11178,0x11120,0x11150,0x11130,0x11180,0x11100,0x11198,0);
    return;
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 3712 named .text
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


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,int64_t arg2)

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


/* fcn.00010fc4 @ 0x10fc4 */

void fcn.00010fc4(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00010f94(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
}


/* fcn.00010f94 @ 0x10f94 */

ulong fcn.00010f94(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x11248 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00011084 @ 0x11084 */

int64_t fcn.00011084(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int *piVar4;
    int64_t *piVar5;
    
    if (arg1 != 0) {
        uVar3 = 0;
        if (*(arg1 + 0x2c) != 0) {
            piVar5 = arg1 + 0x30;
            do {
                iVar1 = *piVar5;
                piVar4 = *(iVar1 + 0x38);
                if (*(piVar4 + 2) == (arg2 >> 0x10 & 0xffff)) {
                    uVar2 = 0;
                    if (*(iVar1 + 0x30) != 0) {
                        do {
                            if (*piVar4 == arg2) {
                                return iVar1;
                            }
                            uVar2 = uVar2 + 1;
                            piVar4 = piVar4 + 1;
                        } while (uVar2 < *(iVar1 + 0x30));
                    }
                }
                uVar3 = uVar3 + 1;
                piVar5 = piVar5 + 1;
            } while (uVar3 < *(arg1 + 0x2c));
        }
    }
    return 0;
}


/* fcn.00010924 @ 0x10924 */

ulong fcn.00010924(ulong noname_0,int64_t arg1,ulong noname_2,uint32_t arg2)

{
    int64_t *piVar1;
    char cVar2;
    int iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *puVar7;
    int64_t *piVar8;
    int *piVar9;
    uint64_t uVar10;
    ulong *arg1_00;
    uint in_R9;
    ulong *puVar11;
    int64_t iStackX_10;
    int64_t in_stack_00000028;
    
    puVar11 = CONCAT44(in_R9,arg2);
    iVar5 = *(in_stack_00000028 + 0x18);
    cVar2 = *(in_stack_00000028 + 0xc);
    *(puVar11 + 0x54) = cVar2;
    for (puVar7 = *(iVar5 + 8); puVar7 != iVar5 + 8; puVar7 = *puVar7) {
        arg1_00 = puVar7 + -1;
        if (*(puVar7 + 3) == cVar2) goto code_r0x0001096a;
    }
    arg1_00 = NULL;
code_r0x0001096a:
    piVar1 = iVar5 + 0x18;
    puVar11[0x51] = arg1_00;
    piVar4 = *piVar1;
    if (piVar4 != piVar1) {
        do {
            piVar8 = piVar4 + -1;
            if (piVar4[3] == *(puVar11 + 0x54)) goto code_r0x00010999;
            piVar4 = *piVar4;
        } while (piVar4 != piVar1);
    }
    piVar8 = NULL;
code_r0x00010999:
    piVar1 = iVar5 + 0x28;
    puVar11[0x52] = piVar8;
    piVar4 = *piVar1;
    if (piVar4 != piVar1) {
        do {
            piVar8 = piVar4 + -1;
            if (piVar4[3] == *(puVar11 + 0x54)) goto code_r0x000109c7;
            piVar4 = *piVar4;
        } while (piVar4 != piVar1);
    }
    piVar8 = NULL;
code_r0x000109c7:
    puVar11[0x53] = piVar8;
    iStackX_10 = arg1;
    iVar5 = fcn.00011084(arg1_00,0x10030);
    puVar11[0x56] = iVar5;
    if (iVar5 != 0) {
        uVar10 = 0;
        if (*(iVar5 + 0x30) != 0) {
            piVar9 = *(iVar5 + 0x38);
            do {
                if (*piVar9 == 0x10030) {
                    iVar5 = *(iVar5 + 0x14) * uVar10 + *(iVar5 + 0x10);
                    goto code_r0x00010a1f;
                }
                uVar10 = uVar10 + 1;
                piVar9 = piVar9 + 1;
            } while (uVar10 < *(iVar5 + 0x30));
        }
        iVar5 = 0;
code_r0x00010a1f:
        puVar11[0x59] = iVar5;
        iVar5 = fcn.00011084(arg1_00,0x10031);
        puVar11[0x57] = iVar5;
        if (iVar5 != 0) {
            uVar10 = 0;
            if (*(iVar5 + 0x30) != 0) {
                piVar9 = *(iVar5 + 0x38);
                do {
                    if (*piVar9 == 0x10031) {
                        iVar5 = *(iVar5 + 0x14) * uVar10 + *(iVar5 + 0x10);
                        goto code_r0x00010a68;
                    }
                    uVar10 = uVar10 + 1;
                    piVar9 = piVar9 + 1;
                } while (uVar10 < *(iVar5 + 0x30));
            }
            iVar5 = 0;
code_r0x00010a68:
            puVar11[0x5a] = iVar5;
            iVar5 = fcn.00011084(arg1_00,0xd0042);
            puVar11[0x55] = iVar5;
            if (iVar5 != 0) {
                uVar10 = 0;
                if (*(iVar5 + 0x30) != 0) {
                    piVar9 = *(iVar5 + 0x38);
                    do {
                        if (*piVar9 == 0xd0042) {
                            iVar5 = *(iVar5 + 0x14) * uVar10 + *(iVar5 + 0x10);
                            goto code_r0x00010ab5;
                        }
                        uVar10 = uVar10 + 1;
                        piVar9 = piVar9 + 1;
                    } while (uVar10 < *(iVar5 + 0x30));
                }
                iVar5 = 0;
code_r0x00010ab5:
                puVar11[0x58] = iVar5;
                *puVar11 = 0x41444948;
                puVar11[1] = in_stack_00000028;
                *(puVar11 + 0x50) = 2;
                puVar11[0x4a] = *(puVar11[0x56] + 0x18);
                puVar11[0x4d] = *(puVar11[0x56] + 0x1c);
                puVar11[0x4b] = *(puVar11[0x57] + 0x18);
                iVar3 = *(puVar11[0x57] + 0x1c);
                puVar11[0x4c] = 0;
                puVar11[0x4f] = 0;
                puVar11[2] = 0x10510;
                puVar11[3] = 0x10544;
                iVar5 = *0x11248;
                puVar11[0x4e] = iVar3;
                puVar11[5] = puVar11 + 0x4a;
                uVar6 = (**(iVar5 + 0x148))(&iStackX_10,0x11140,puVar11 + 2,0);
                return uVar6;
            }
        }
    }
    return 0x8000000000000002;
}


/* fcn.0001078c @ 0x1078c */

int64_t fcn.0001078c(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t uVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    
    iVar4 = 0;
    piVar7 = *(arg2 + 0x18) + 0x28;
    piVar6 = *piVar7;
    if (piVar6 != piVar7) {
        do {
            if ((piVar6[2] == 0xd000e) && (iVar2 = fcn.00011084(piVar6 + -1,0xd0052), iVar2 != 0)) {
                uVar5 = *(piVar6 + 4);
                if (uVar5 < 8) {
                    uVar5 = 1;
                }
                else if ((uVar5 & 7) == 0) {
                    uVar5 = uVar5 >> 3;
                }
                else {
                    uVar5 = (uVar5 >> 3) + 1;
                }
                iVar3 = fcn.00010fc4(uVar5 & 0xffff);
                if (iVar3 == 0) {
                    return -0x7ffffffffffffff7;
                }
                iVar4 = (**(arg1 + 0x850))(arg1,3,piVar6[3],iVar3,uVar5);
                if (iVar4 < 0) {
code_r0x00010902:
                    if (iVar3 != 0) {
                        (**(*0x11248 + 0x48))(iVar3);
                        return iVar4;
                    }
                    return iVar4;
                }
                uVar1 = *(iVar2 + 0x10);
                iVar2 = 1LL << (*(iVar2 + 0x16) * *(iVar2 + 0x14) & 0x3fU);
                if ((iVar2 - 1U & *((uVar1 >> 3) + iVar3) >> (uVar1 & 7)) != 0) {
                    *((uVar1 >> 3) + iVar3) = *((uVar1 >> 3) + iVar3) >> (uVar1 & 7) & ~(iVar2 - 1U);
                    iVar4 = (**(arg1 + 0x858))(arg1,3,CONCAT31(uVar1 >> 0xb,piVar6[3]),iVar3,uVar5);
                    if (iVar4 < 0) goto code_r0x00010902;
                }
                (**(*0x11248 + 0x48))(iVar3);
            }
            piVar6 = *piVar6;
        } while (piVar6 != piVar7);
    }
    return iVar4;
}


/* fcn.000106b0 @ 0x106b0 */

int64_t fcn.000106b0(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    ulong *puVar5;
    
    iVar3 = 0;
    puVar5 = *(arg2 + 0x18) + 0x28;
    puVar1 = *puVar5;
    do {
        if (puVar1 == puVar5) {
            return iVar3;
        }
        if (*(puVar1 + 0x14) == 2) {
            uVar4 = *(puVar1 + 4);
            if (uVar4 < 8) {
                uVar4 = 1;
            }
            else if ((uVar4 & 7) == 0) {
                uVar4 = uVar4 >> 3;
            }
            else {
                uVar4 = (uVar4 >> 3) + 1;
            }
            iVar2 = fcn.00010fc4(uVar4 & 0xffff);
            if (iVar2 == 0) {
                return -0x7ffffffffffffff7;
            }
            iVar3 = (**(arg1 + 0x850))(arg1,3,*(puVar1 + 3),iVar2,uVar4);
            if (iVar3 < 0) {
                if (iVar2 == 0) {
                    return iVar3;
                }
                (**(*0x11248 + 0x48))(iVar2);
                return iVar3;
            }
            (**(*0x11248 + 0x48))(iVar2);
        }
        puVar1 = *puVar1;
    } while( true );
}


/* fcn.00010ff0 @ 0x10ff0 */

ulong fcn.00010ff0(int64_t arg1,int64_t arg2)

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
code_r0x00011050:
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
            if (*pcVar2 == *pcVar1) goto code_r0x00011050;
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


