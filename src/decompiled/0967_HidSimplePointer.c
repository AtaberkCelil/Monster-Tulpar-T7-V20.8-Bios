// decompiled by r2ghidra: 0967_HidSimplePointer.pe32
// functions: 8

/* entry0 @ 0x10340 */

void entry0(int64_t arg1,int64_t arg2)

{
    *0x110b8 = *(arg2 + 0x60);
    *0x10ff0 = arg1;
    *0x10ff8 = arg1;
    *0x110b0 = arg2;
    (**(*0x110b8 + 0x148))(0x10ff8,0x10fb0,0x10fd0,0x10fc0,0x11018,0x10f80,0x11000,0);
    return;
}


/* fcn.00010e44 @ 0x10e44 */

ulong fcn.00010e44(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x110b8 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00010320 @ 0x10320 */

int64_t fcn.00010320(int64_t arg1,int64_t arg2)

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


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 3328 named .text
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


/* fcn.00010f08 @ 0x10f08 */

int64_t fcn.00010f08(int64_t arg1,int64_t arg2)

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


/* fcn.00010794 @ 0x10794 */

ulong fcn.00010794(ulong noname_0,int64_t arg1,ulong noname_2,uint32_t arg2)

{
    char cVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *puVar5;
    int64_t *piVar6;
    int *piVar7;
    int64_t *piVar8;
    int64_t *piVar9;
    int64_t *piVar10;
    uint in_R9;
    ulong *puVar11;
    int8_t var_ch;
    int64_t var_18h;
    int64_t in_stack_00000028;
    
    puVar11 = CONCAT44(in_R9,arg2);
    iVar3 = *(in_stack_00000028 + 0x18);
    cVar1 = *(in_stack_00000028 + 0xc);
    *(puVar11 + 0xf) = cVar1;
    piVar10 = NULL;
    for (puVar5 = *(iVar3 + 8); puVar5 != iVar3 + 8; puVar5 = *puVar5) {
        piVar8 = puVar5 + -1;
        if (*(puVar5 + 3) == cVar1) goto code_r0x000107de;
    }
    piVar8 = piVar10;
code_r0x000107de:
    piVar9 = iVar3 + 0x18;
    puVar11[0xc] = piVar8;
    piVar2 = *piVar9;
    if (piVar2 != piVar9) {
        do {
            piVar6 = piVar2 + -1;
            if (piVar2[3] == *(puVar11 + 0xf)) goto code_r0x00010807;
            piVar2 = *piVar2;
        } while (piVar2 != piVar9);
    }
    piVar6 = piVar10;
code_r0x00010807:
    piVar9 = iVar3 + 0x28;
    puVar11[0xd] = piVar6;
    piVar2 = *piVar9;
    if (piVar2 != piVar9) {
        do {
            piVar6 = piVar2 + -1;
            if (piVar2[3] == *(puVar11 + 0xf)) goto code_r0x00010830;
            piVar2 = *piVar2;
        } while (piVar2 != piVar9);
    }
    piVar6 = piVar10;
code_r0x00010830:
    puVar11[0xe] = piVar6;
    var_18h = arg1;
    iVar3 = fcn.00010f08(piVar8,0x10030);
    puVar11[0x10] = iVar3;
    if (iVar3 != 0) {
        if (*(iVar3 + 0x30) != NULL) {
            piVar7 = *(iVar3 + 0x38);
            piVar9 = piVar10;
            do {
                if (*piVar7 == 0x10030) {
                    piVar9 = *(iVar3 + 0x14) * piVar9 + *(iVar3 + 0x10);
                    goto code_r0x00010887;
                }
                piVar9 = piVar9 + 1;
                piVar7 = piVar7 + 1;
            } while (piVar9 < *(iVar3 + 0x30));
        }
        piVar9 = piVar10;
code_r0x00010887:
        puVar11[0x14] = piVar9;
        iVar3 = fcn.00010f08(piVar8,0x10031);
        puVar11[0x11] = iVar3;
        if (iVar3 != 0) {
            if (*(iVar3 + 0x30) != NULL) {
                piVar7 = *(iVar3 + 0x38);
                piVar9 = piVar10;
                do {
                    if (*piVar7 == 0x10031) {
                        piVar9 = *(iVar3 + 0x14) * piVar9 + *(iVar3 + 0x10);
                        goto code_r0x000108d2;
                    }
                    piVar9 = piVar9 + 1;
                    piVar7 = piVar7 + 1;
                } while (piVar9 < *(iVar3 + 0x30));
            }
            piVar9 = piVar10;
code_r0x000108d2:
            puVar11[0x15] = piVar9;
            iVar3 = fcn.00010f08(piVar8,0x10038);
            puVar11[0x12] = iVar3;
            if (iVar3 != 0) {
                if (*(iVar3 + 0x30) != NULL) {
                    piVar7 = *(iVar3 + 0x38);
                    piVar9 = piVar10;
                    do {
                        if (*piVar7 == 0x10038) {
                            piVar9 = *(iVar3 + 0x14) * piVar9 + *(iVar3 + 0x10);
                            goto code_r0x00010919;
                        }
                        piVar9 = piVar9 + 1;
                        piVar7 = piVar7 + 1;
                    } while (piVar9 < *(iVar3 + 0x30));
                }
                piVar9 = piVar10;
code_r0x00010919:
                puVar11[0x16] = piVar9;
            }
            iVar3 = fcn.00010f08(piVar8,0x90001);
            puVar11[0x13] = iVar3;
            if (iVar3 != 0) {
                if (*(iVar3 + 0x30) != NULL) {
                    piVar7 = *(iVar3 + 0x38);
                    piVar8 = piVar10;
                    do {
                        if (*piVar7 == 0x90001) {
                            piVar10 = *(iVar3 + 0x14) * piVar8 + *(iVar3 + 0x10);
                            break;
                        }
                        piVar8 = piVar8 + 1;
                        piVar7 = piVar7 + 1;
                    } while (piVar8 < *(iVar3 + 0x30));
                }
                puVar11[0x17] = piVar10;
                puVar11[5] = puVar11 + 8;
                *puVar11 = 0x53444948;
                puVar11[8] = 2;
                puVar11[9] = 2;
                puVar5 = puVar11 + 6;
                puVar11[1] = in_stack_00000028;
                puVar11[2] = 0x1057c;
                puVar11[10] = 1;
                puVar11[3] = 0x105c0;
                *(puVar11 + 0xb) = 0x101;
                *puVar5 = puVar5;
                puVar11[7] = puVar5;
                uVar4 = (**(*0x110b8 + 0x148))(&var_18h,0x10f90,puVar11 + 2,0);
                return uVar4;
            }
        }
    }
    return 0x8000000000000002;
}


/* fcn.00010e74 @ 0x10e74 */

ulong fcn.00010e74(int64_t arg1,int64_t arg2)

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
code_r0x00010ed4:
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
            if (*pcVar2 == *pcVar1) goto code_r0x00010ed4;
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


