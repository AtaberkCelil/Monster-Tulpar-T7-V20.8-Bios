// decompiled by r2ghidra: 2481_NvramPei.te
// functions: 53

/* fcn.00000901 @ 0x901 */

int __fastcall fcn.00000901(uint param_1,int *param_2)

{
    uint16_t uVar1;
    uint *puVar2;
    char cVar3;
    int iVar4;
    int iVar5;
    uint *puVar6;
    uint uVar7;
    uint extraout_ECX;
    uint32_t uVar8;
    int *piVar9;
    uint *puVar10;
    uint *puVar11;
    int *piVar12;
    bool bVar13;
    char cStack_f5;
    uint32_t uStack_f4;
    char cStack_ed;
    int iStack_ec;
    uint16_t *puStack_e8;
    int iStack_e4;
    uint uStack_e0;
    uint *puStack_dc;
    int iStack_d8;
    uint32_t uStack_d4;
    int iStack_d0;
    int *piStack_cc;
    int aiStack_c8 [10];
    uint auStack_a0 [4];
    int aiStack_90 [35];
    
    uStack_e0 = 0;
    bVar13 = false;
    uStack_d4 = 0;
    iStack_ec = 0;
    puStack_e8 = NULL;
    uStack_f4 = 4;
    piStack_cc = param_2;
    iVar4 = (**(*param_2 + 0x74))(param_1);
    if (iVar4 == -0x7fffffec) {
        fcn.00000899();
        return 0;
    }
    iVar5 = fcn.0000075f(&iStack_d8,aiStack_c8 + 1);
    iVar4 = aiStack_c8[0];
    if (iVar5 < 0) {
        return iVar5;
    }
    iStack_d0 = iStack_d8;
    cVar3 = fcn.000018f6(&cStack_ed);
    if (cVar3 == '\0') {
        if (cStack_ed == '\0') {
            bVar13 = true;
        }
        else {
            iStack_d0 = iVar4;
            aiStack_c8[0] = iStack_d8;
        }
    }
    iStack_d8 = fcn.0000188d();
    if (iStack_d8 != 0) {
        iStack_d8 = iStack_d8 + 0x18;
    }
    fcn.000015d4(1,extraout_ECX);
    iVar4 = fcn.00001277(&iStack_ec,aiStack_c8);
    if (iVar4 == 0) {
        uStack_f4 = 4;
        fcn.000013a6(0,&uStack_f4,&uStack_d4,aiStack_c8);
code_r0x00000a15:
        iStack_ec = 0;
    }
    else {
        puStack_e8 = fcn.00000f1d(&uStack_f4,aiStack_c8);
        if (puStack_e8 == NULL) goto code_r0x00000a15;
        iStack_ec = *puStack_e8 << 2;
    }
    iVar4 = (**(*param_2 + 0x4c))(param_2,iStack_ec + 0xac,&puStack_dc);
    puVar2 = puStack_dc;
    if (iVar4 < 0) {
        return iVar4;
    }
    *puStack_dc = *0xffd550a8;
    puStack_dc[1] = *0xffd550ac;
    puStack_dc[2] = *0xffd550b0;
    puStack_dc[3] = *0xffd550b4;
    puStack_dc[4] = *0xffd550b8;
    puStack_dc[5] = *0xffd550bc;
    puVar10 = puStack_dc + 6;
    puStack_dc[2] = puVar10;
    *puVar10 = *0xffd54fec;
    uVar7 = *0xffd54ff0;
    puStack_dc[8] = 0;
    puStack_dc[9] = 0;
    puStack_dc[0x2a] = 0;
    puStack_dc[7] = uVar7;
    *(puStack_dc + 0x29) = 0xffff;
    if (bVar13) {
        uStack_e0 = 2;
        iVar5 = fcn.000007b7();
        iVar4 = iStack_ec;
        if (-1 < iVar5) {
code_r0x00000aac:
            puVar2[8] = puVar2[8] + 1;
        }
code_r0x00000c30:
        if (iVar4 != 0) {
            puVar2[0x2a] = puStack_e8 + 1;
            puVar2[0x28] = uStack_f4;
            uVar1 = *puStack_e8;
            *(puVar2 + 0x29) = uVar1;
            (**(*param_2 + 0x54))(puVar2 + 0x2b,uVar1 << 2,0);
            puStack_e8 = NULL;
            if (puVar2[8] != 0) {
                uVar8 = 0;
                puVar10 = puVar2;
                do {
                    puVar10 = puVar10 + 10;
                    iVar4 = fcn.0000107a();
                    while (iVar4 != 0) {
                        puStack_e8 = puVar2[0x2a];
                        uStack_f4 = 0;
                        bVar13 = *(puVar2 + 0x29) != 0;
                        while (bVar13) {
                            if ((puVar2[uStack_f4 + 0x2b] == 0) &&
                               (cVar3 = fcn.000011bd(puStack_e8 + 1,0,puVar10), cVar3 != '\0')) {
                                uVar7 = fcn.00000e6d();
                                puVar2[uStack_f4 + 0x2b] = uVar7;
                                break;
                            }
                            puStack_e8 = puStack_e8 + *puStack_e8 + 0x12;
                            uStack_f4 = uStack_f4 + 1;
                            bVar13 = uStack_f4 < *(puVar2 + 0x29);
                        }
                        iVar4 = fcn.00001001();
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < puVar2[8]);
                param_2 = piStack_cc;
            }
            goto code_r0x00000d39;
        }
    }
    else {
        puVar6 = puVar10;
        puVar11 = auStack_a0;
        for (iVar4 = 0x25; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar11 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar11 = puVar11 + 1;
        }
        piVar9 = aiStack_c8;
        piVar12 = aiStack_90;
        for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar12 = *piVar9;
            piVar9 = piVar9 + 1;
            piVar12 = piVar12 + 1;
        }
        auStack_a0[2] = 1;
        cStack_f5 = '\0';
        if (*0xffd55190 == 0) {
code_r0x00000b36:
            cVar3 = '\0';
            if (*0xffd55198 != 0) {
                piVar9 = 0xffd55198;
                do {
                    if (cVar3 != '\0') goto code_r0x00000b60;
                    cVar3 = (**piVar9)(param_2,auStack_a0);
                    piVar9 = piVar9 + 1;
                } while (*piVar9 != 0);
                if (cVar3 != '\0') goto code_r0x00000b60;
            }
            piVar9 = aiStack_c8;
            piVar12 = puVar2 + puVar2[8] * 10 + 10;
            for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
                *piVar12 = *piVar9;
                piVar9 = piVar9 + 1;
                piVar12 = piVar12 + 1;
            }
            puVar2[8] = puVar2[8] + 1;
            puVar6 = puVar2 + puVar2[8] * 10 + 10;
            iVar4 = fcn.0000162c(puVar6);
            if (iVar4 == 0) {
                puVar6 = fcn.00000868();
            }
            if (puVar6 != NULL) goto code_r0x00000bf9;
        }
        else {
            piVar9 = 0xffd55190;
            do {
                if (cStack_f5 != '\0') goto code_r0x00000b60;
                cStack_f5 = (**piVar9)(param_2,auStack_a0);
                piVar9 = piVar9 + 1;
            } while (*piVar9 != 0);
            if (cStack_f5 == '\0') goto code_r0x00000b36;
code_r0x00000b60:
            puVar6 = puVar2 + puVar2[8] * 10 + 10;
            iVar4 = fcn.0000162c(puVar6);
            if (iVar4 == 0) {
                puVar6 = fcn.00000868();
            }
            if (puVar6 != NULL) {
                puVar2[8] = puVar2[8] + 1;
            }
            if (cStack_f5 == '\0') {
                uStack_e0 = 4;
                piVar9 = aiStack_c8;
                piVar12 = puVar2 + puVar2[8] * 10 + 10;
                for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *piVar12 = *piVar9;
                    piVar9 = piVar9 + 1;
                    piVar12 = piVar12 + 1;
                }
code_r0x00000bf9:
                puVar2[8] = puVar2[8] + 1;
            }
            else {
                uStack_e0 = 2;
            }
        }
        cVar3 = fcn.0000018d(param_2,puVar10);
        if (cVar3 != '\0') {
            iVar4 = iStack_ec;
            goto code_r0x00000c30;
        }
        puVar2[8] = 0;
        iVar4 = 0;
        uStack_d4 = 0;
        iVar5 = fcn.000007b7();
        if (-1 < iVar5) goto code_r0x00000aac;
    }
    puVar2[0x28] = 0;
    if (2 < uStack_d4) {
        *(puVar2 + 0x29) = 0;
    }
code_r0x00000d39:
    iVar4 = (**(*param_2 + 0x34))(param_2,4,0x38,&iStack_e4);
    if (-1 < iVar4) {
        *(iStack_e4 + 8) = *0xffd550d8;
        *(iStack_e4 + 0xc) = *0xffd550dc;
        *(iStack_e4 + 0x10) = *0xffd550e0;
        *(iStack_e4 + 0x14) = *0xffd550e4;
        *(iStack_e4 + 0x18) = aiStack_c8[0];
        *(iStack_e4 + 0x1c) = 0;
        *(iStack_e4 + 0x20) = iStack_d0;
        *(iStack_e4 + 0x24) = 0;
        *(iStack_e4 + 0x28) = aiStack_c8[1];
        *(iStack_e4 + 0x30) = uStack_e0;
        *(iStack_e4 + 0x2c) = iStack_d8;
    }
    iVar4 = (**(*param_2 + 0x18))(param_2,puStack_dc);
    return iVar4;
}


/* entry0 @ 0x180 */

int entry0(uint param_1,int *param_2)

{
    uint16_t uVar1;
    uint *puVar2;
    char cVar3;
    int iVar4;
    int iVar5;
    uint *puVar6;
    uint uVar7;
    uint extraout_ECX;
    uint32_t uVar8;
    int *piVar9;
    uint *puVar10;
    uint *puVar11;
    int *piVar12;
    bool bVar13;
    char cStack_f5;
    uint32_t uStack_f4;
    char cStack_ed;
    int iStack_ec;
    uint16_t *puStack_e8;
    int iStack_e4;
    uint uStack_e0;
    uint *puStack_dc;
    int iStack_d8;
    uint32_t uStack_d4;
    int iStack_d0;
    int *piStack_cc;
    int aiStack_c8 [10];
    uint auStack_a0 [4];
    int aiStack_90 [35];
    
    piStack_cc = param_2;
    uStack_e0 = 0;
    bVar13 = false;
    uStack_d4 = 0;
    iStack_ec = 0;
    puStack_e8 = NULL;
    uStack_f4 = 4;
    iVar4 = (**(*param_2 + 0x74))(param_1);
    if (iVar4 == -0x7fffffec) {
        fcn.00000899();
        return 0;
    }
    iVar5 = fcn.0000075f(&iStack_d8,aiStack_c8 + 1);
    iVar4 = aiStack_c8[0];
    if (iVar5 < 0) {
        return iVar5;
    }
    iStack_d0 = iStack_d8;
    cVar3 = fcn.000018f6(&cStack_ed);
    if (cVar3 == '\0') {
        if (cStack_ed == '\0') {
            bVar13 = true;
        }
        else {
            iStack_d0 = iVar4;
            aiStack_c8[0] = iStack_d8;
        }
    }
    iStack_d8 = fcn.0000188d();
    if (iStack_d8 != 0) {
        iStack_d8 = iStack_d8 + 0x18;
    }
    fcn.000015d4(1,extraout_ECX);
    iVar4 = fcn.00001277(&iStack_ec,aiStack_c8);
    if (iVar4 == 0) {
        uStack_f4 = 4;
        fcn.000013a6(0,&uStack_f4,&uStack_d4,aiStack_c8);
code_r0x00000a15:
        iStack_ec = 0;
    }
    else {
        puStack_e8 = fcn.00000f1d(&uStack_f4,aiStack_c8);
        if (puStack_e8 == NULL) goto code_r0x00000a15;
        iStack_ec = *puStack_e8 << 2;
    }
    iVar4 = (**(*param_2 + 0x4c))(param_2,iStack_ec + 0xac,&puStack_dc);
    puVar2 = puStack_dc;
    if (iVar4 < 0) {
        return iVar4;
    }
    *puStack_dc = *0xffd550a8;
    puStack_dc[1] = *0xffd550ac;
    puStack_dc[2] = *0xffd550b0;
    puStack_dc[3] = *0xffd550b4;
    puStack_dc[4] = *0xffd550b8;
    puStack_dc[5] = *0xffd550bc;
    puVar10 = puStack_dc + 6;
    puStack_dc[2] = puVar10;
    *puVar10 = *0xffd54fec;
    uVar7 = *0xffd54ff0;
    puStack_dc[8] = 0;
    puStack_dc[9] = 0;
    puStack_dc[0x2a] = 0;
    puStack_dc[7] = uVar7;
    *(puStack_dc + 0x29) = 0xffff;
    if (bVar13) {
        uStack_e0 = 2;
        iVar5 = fcn.000007b7();
        iVar4 = iStack_ec;
        if (-1 < iVar5) {
code_r0x00000aac:
            puVar2[8] = puVar2[8] + 1;
        }
code_r0x00000c30:
        if (iVar4 != 0) {
            puVar2[0x2a] = puStack_e8 + 1;
            puVar2[0x28] = uStack_f4;
            uVar1 = *puStack_e8;
            *(puVar2 + 0x29) = uVar1;
            (**(*param_2 + 0x54))(puVar2 + 0x2b,uVar1 << 2,0);
            puStack_e8 = NULL;
            if (puVar2[8] != 0) {
                uVar8 = 0;
                puVar10 = puVar2;
                do {
                    puVar10 = puVar10 + 10;
                    iVar4 = fcn.0000107a();
                    while (iVar4 != 0) {
                        puStack_e8 = puVar2[0x2a];
                        uStack_f4 = 0;
                        bVar13 = *(puVar2 + 0x29) != 0;
                        while (bVar13) {
                            if ((puVar2[uStack_f4 + 0x2b] == 0) &&
                               (cVar3 = fcn.000011bd(puStack_e8 + 1,0,puVar10), cVar3 != '\0')) {
                                uVar7 = fcn.00000e6d();
                                puVar2[uStack_f4 + 0x2b] = uVar7;
                                break;
                            }
                            puStack_e8 = puStack_e8 + *puStack_e8 + 0x12;
                            uStack_f4 = uStack_f4 + 1;
                            bVar13 = uStack_f4 < *(puVar2 + 0x29);
                        }
                        iVar4 = fcn.00001001();
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < puVar2[8]);
                param_2 = piStack_cc;
            }
            goto code_r0x00000d39;
        }
    }
    else {
        puVar6 = puVar10;
        puVar11 = auStack_a0;
        for (iVar4 = 0x25; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar11 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar11 = puVar11 + 1;
        }
        piVar9 = aiStack_c8;
        piVar12 = aiStack_90;
        for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar12 = *piVar9;
            piVar9 = piVar9 + 1;
            piVar12 = piVar12 + 1;
        }
        auStack_a0[2] = 1;
        cStack_f5 = '\0';
        if (*0xffd55190 == 0) {
code_r0x00000b36:
            cVar3 = '\0';
            if (*0xffd55198 != 0) {
                piVar9 = 0xffd55198;
                do {
                    if (cVar3 != '\0') goto code_r0x00000b60;
                    cVar3 = (**piVar9)(param_2,auStack_a0);
                    piVar9 = piVar9 + 1;
                } while (*piVar9 != 0);
                if (cVar3 != '\0') goto code_r0x00000b60;
            }
            piVar9 = aiStack_c8;
            piVar12 = puVar2 + puVar2[8] * 10 + 10;
            for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
                *piVar12 = *piVar9;
                piVar9 = piVar9 + 1;
                piVar12 = piVar12 + 1;
            }
            puVar2[8] = puVar2[8] + 1;
            puVar6 = puVar2 + puVar2[8] * 10 + 10;
            iVar4 = fcn.0000162c(puVar6);
            if (iVar4 == 0) {
                puVar6 = fcn.00000868();
            }
            if (puVar6 != NULL) goto code_r0x00000bf9;
        }
        else {
            piVar9 = 0xffd55190;
            do {
                if (cStack_f5 != '\0') goto code_r0x00000b60;
                cStack_f5 = (**piVar9)(param_2,auStack_a0);
                piVar9 = piVar9 + 1;
            } while (*piVar9 != 0);
            if (cStack_f5 == '\0') goto code_r0x00000b36;
code_r0x00000b60:
            puVar6 = puVar2 + puVar2[8] * 10 + 10;
            iVar4 = fcn.0000162c(puVar6);
            if (iVar4 == 0) {
                puVar6 = fcn.00000868();
            }
            if (puVar6 != NULL) {
                puVar2[8] = puVar2[8] + 1;
            }
            if (cStack_f5 == '\0') {
                uStack_e0 = 4;
                piVar9 = aiStack_c8;
                piVar12 = puVar2 + puVar2[8] * 10 + 10;
                for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *piVar12 = *piVar9;
                    piVar9 = piVar9 + 1;
                    piVar12 = piVar12 + 1;
                }
code_r0x00000bf9:
                puVar2[8] = puVar2[8] + 1;
            }
            else {
                uStack_e0 = 2;
            }
        }
        cVar3 = fcn.0000018d(param_2,puVar10);
        if (cVar3 != '\0') {
            iVar4 = iStack_ec;
            goto code_r0x00000c30;
        }
        puVar2[8] = 0;
        iVar4 = 0;
        uStack_d4 = 0;
        iVar5 = fcn.000007b7();
        if (-1 < iVar5) goto code_r0x00000aac;
    }
    puVar2[0x28] = 0;
    if (2 < uStack_d4) {
        *(puVar2 + 0x29) = 0;
    }
code_r0x00000d39:
    iVar4 = (**(*param_2 + 0x34))(param_2,4,0x38,&iStack_e4);
    if (-1 < iVar4) {
        *(iStack_e4 + 8) = *0xffd550d8;
        *(iStack_e4 + 0xc) = *0xffd550dc;
        *(iStack_e4 + 0x10) = *0xffd550e0;
        *(iStack_e4 + 0x14) = *0xffd550e4;
        *(iStack_e4 + 0x18) = aiStack_c8[0];
        *(iStack_e4 + 0x1c) = 0;
        *(iStack_e4 + 0x20) = iStack_d0;
        *(iStack_e4 + 0x24) = 0;
        *(iStack_e4 + 0x28) = aiStack_c8[1];
        *(iStack_e4 + 0x30) = uStack_e0;
        *(iStack_e4 + 0x2c) = iStack_d8;
    }
    iVar4 = (**(*param_2 + 0x18))(param_2,puStack_dc);
    return iVar4;
}


/* fcn.000019f4 @ 0x19f4 */

int __fastcall fcn.000019f4(int *param_1,int *param_2)

{
    int iVar1;
    uint32_t uVar2;
    int *piVar3;
    
    uVar2 = param_1 & 3;
    piVar3 = param_1;
    if ((uVar2 != 0) && (uVar2 == (param_2 & 3))) {
        iVar1 = 4 - uVar2;
        for (; (iVar1 != 0 && (*piVar3 == *param_2)); piVar3 = piVar3 + 1) {
            param_2 = param_2 + 1;
            iVar1 = iVar1 + -1;
        }
    }
    for (; (piVar3 <= param_1 + 3 && (*piVar3 == *param_2)); piVar3 = piVar3 + 1) {
        param_2 = param_2 + 1;
    }
    while( true ) {
        if (param_1 + 4 <= piVar3) {
            return 0;
        }
        if (*piVar3 != *param_2) break;
        piVar3 = piVar3 + 1;
        param_2 = param_2 + 1;
    }
    return *piVar3 - *param_2;
}


/* fcn.00001965 @ 0x1965 */

int __fastcall fcn.00001965(int16_t *param_1)

{
    int iVar1;
    
    iVar1 = 0;
    for (; *param_1 != 0; param_1 = param_1 + 1) {
        iVar1 = iVar1 + 1;
    }
    return iVar1 * 2 + 2;
}


/* fcn.00001a8a @ 0x1a8a */

int __fastcall fcn.00001a8a(int param_1,uint *param_2)

{
    uint uVar1;
    int iVar2;
    uint extraout_ECX;
    int32_t var_4h;
    
    if ((param_1 == 0) || (param_2 == NULL)) {
        iVar2 = -0x7ffffffe;
    }
    else {
        uVar1 = *param_2;
        do {
            iVar2 = fcn.00001a53();
            if (iVar2 < 0) {
                return iVar2;
            }
            iVar2 = fcn.000019f4(extraout_ECX);
        } while (iVar2 != 0);
        *param_2 = uVar1;
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.00001fe0 @ 0x1fe0 */

uint32_t __cdecl fcn.00001fe0(uint32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    bool bVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint *puVar4;
    uint8_t uVar5;
    
    uVar5 = 0;
    bVar1 = false;
    uVar2 = arg_ch - arg_8h;
    puVar4 = arg_8h;
    if (arg_ch < arg_8h) {
        uVar2 = -uVar2;
        if (arg_8h <= arg_10h + arg_ch) {
            puVar4 = arg_10h + arg_8h;
            bVar1 = true;
            uVar5 = 1;
            arg_ch = arg_10h + arg_ch;
        }
    }
    if ((3 < arg_10h) && (3 < uVar2)) {
        uVar2 = arg_ch & 3;
        uVar3 = puVar4 & 3;
        if (bVar1) {
            arg_ch = arg_ch + -1;
            puVar4 = puVar4 + -1;
        }
        if ((uVar2 == uVar3) && (uVar2 != 0)) {
            if (!bVar1) {
                uVar2 = 4 - uVar2;
            }
            arg_10h = arg_10h - uVar2;
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                *puVar4 = *arg_ch;
                arg_ch = arg_ch + uVar5 * -2 + 1;
                puVar4 = puVar4 + uVar5 * -2 + 1;
            }
        }
        if (bVar1) {
            arg_ch = arg_ch + -3;
            puVar4 = puVar4 + -3;
        }
        for (uVar2 = arg_10h >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *arg_ch;
            arg_ch = arg_ch + (uVar5 * -2 + 1) * 4;
            puVar4 = puVar4 + uVar5 * -2 + 1;
        }
        arg_10h = arg_10h & 3;
        if (arg_10h == 0) {
            return arg_8h;
        }
        if (bVar1) {
            arg_ch = arg_ch + 4;
            puVar4 = puVar4 + 1;
        }
    }
    if (bVar1) {
        arg_ch = arg_ch + -1;
        puVar4 = puVar4 + -1;
    }
    for (; arg_10h != 0; arg_10h = arg_10h - 1) {
        *puVar4 = *arg_ch;
        arg_ch = arg_ch + uVar5 * -2 + 1;
        puVar4 = puVar4 + uVar5 * -2 + 1;
    }
    return arg_8h;
}


/* fcn.0000197c @ 0x197c */

int __fastcall fcn.0000197c(uint16_t *param_1,uint16_t *param_2)

{
    for (; (*param_1 != 0 && (*param_1 == *param_2)); param_1 = param_1 + 1) {
        param_2 = param_2 + 1;
    }
    return *param_1 - *param_2;
}


/* fcn.00000dfa @ 0xdfa */

uint32_t __fastcall fcn.00000dfa(uint param_1,char param_2)

{
    int iVar1;
    int iVar2;
    int extraout_ECX;
    int iVar3;
    
    iVar2 = fcn.00000dc8();
    if (param_2 == '\0') {
        if ((*(extraout_ECX + 2) != -1) && (iVar3 = *(extraout_ECX + 0xc), iVar3 != -1)) {
            iVar1 = *(extraout_ECX + 8);
            goto code_r0x00000e2f;
        }
    }
    else if ((*(extraout_ECX + 2) != -1) && (iVar3 = *(extraout_ECX + 0x28), iVar3 != -1)) {
        iVar1 = *(extraout_ECX + 0x24);
code_r0x00000e2f:
        if ((iVar1 != -1) && (*(extraout_ECX + 4) != -1)) goto code_r0x00000e39;
    }
    iVar3 = 0;
code_r0x00000e39:
    return ((param_2 != '\0') - 1 & 0xffffffe4) + iVar2 + 0x3f + iVar3 + extraout_ECX & 0xfffffffc;
}


/* fcn.00000dc8 @ 0xdc8 */

int __fastcall fcn.00000dc8(int param_1,char param_2)

{
    int iVar1;
    
    if (param_2 == '\0') {
        if (*(param_1 + 2) == -1) {
            return 0;
        }
        if (*(param_1 + 0xc) == -1) {
            return 0;
        }
        iVar1 = *(param_1 + 8);
    }
    else {
        if (*(param_1 + 2) == -1) {
            return 0;
        }
        if (*(param_1 + 0x28) == -1) {
            return 0;
        }
        iVar1 = *(param_1 + 0x24);
    }
    if ((iVar1 != -1) && (*(param_1 + 4) != -1)) {
        return iVar1;
    }
    return 0;
}


/* fcn.0000167b @ 0x167b */

int __fastcall
fcn.0000167b(int param_1,int param_2,int32_t param_3,int *param_4,uint32_t param_5,uint32_t param_6,int param_7)

{
    int iVar1;
    uint32_t uVar2;
    
    if ((((param_1 == 0) || (param_2 == 0)) || (param_4 == NULL)) || ((uVar2 = 0, param_5 == 0 && (*param_4 != 0)))) {
        iVar1 = -0x7ffffffe;
    }
    else {
        if (param_6 != 0) {
            do {
                iVar1 = fcn.000013a6(param_3,param_4,param_5,param_7);
                if (iVar1 != -0x7ffffff2) {
                    return iVar1;
                }
                uVar2 = uVar2 + 1;
                param_7 = param_7 + 0x28;
            } while (uVar2 < param_6);
        }
        iVar1 = -0x7ffffff2;
    }
    return iVar1;
}


/* fcn.000016ec @ 0x16ec */

uint32_t __cdecl fcn.000016ec(uint32_t arg_8h,uint32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    uint16_t uVar1;
    char cVar2;
    uint32_t uVar3;
    int iVar4;
    int iVar5;
    int in_ECX;
    int32_t extraout_ECX;
    int32_t extraout_ECX_00;
    uint16_t *in_EDX;
    int32_t iVar6;
    uint32_t uVar7;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    if (((in_ECX == 0) || (in_EDX == NULL)) || (arg_8h == 0)) {
        uVar3 = 0x80000002;
    }
    else {
        uVar1 = *in_EDX;
        uVar3 = uVar1;
        if (arg_14h == 0) {
            uVar7 = 0;
        }
        else {
            if (uVar1 == 0) {
                *arg_14h = 0;
            }
            uVar7 = *arg_14h;
            uVar3 = 0x80000002;
        }
        for (; uVar7 < arg_ch; uVar7 = uVar7 + 1) {
            iVar4 = uVar7 * 0x28 + arg_10h;
            uVar3 = fcn.00001537(iVar4,&var_4h,&var_4h);
            if (-1 < uVar3) {
                var_14h = extraout_ECX;
                if ((*(iVar4 + 0x1c) & 4) != 0) {
                    if (var_4h != 0) {
                        do {
                            var_14h = 0;
                            if (uVar7 != 0) {
                                iVar6 = arg_10h;
                                do {
                                    iVar5 = fcn.0000107a();
                                    while (iVar5 != 0) {
                                        cVar2 = fcn.000010b1(iVar5,iVar6);
                                        if (cVar2 != '\0') goto code_r0x000017bf;
                                        iVar5 = fcn.00001001();
                                    }
                                    iVar5 = 0;
code_r0x000017bf:
                                    if (iVar5 != 0) break;
                                    var_14h = var_14h + 1;
                                    iVar6 = iVar6 + 0x28;
                                } while (var_14h < uVar7);
                            }
                            if (var_14h == uVar7) break;
                            var_4h = fcn.00001001();
                            var_14h = extraout_ECX_00;
                        } while (var_4h != 0);
                        if (var_4h != 0) goto code_r0x00001808;
                    }
                    uVar3 = 0x8000000e;
                    *(iVar4 + 0x18) = 0;
                }
code_r0x00001808:
                if (-1 < uVar3) {
                    uVar3 = fcn.000014f9(in_ECX,arg_8h,iVar4,var_14h);
                    if (uVar3 != 0x8000000e) {
                        if (uVar3 < 0) {
                            *in_EDX = uVar1;
                        }
                        if (arg_14h != 0) {
                            *arg_14h = uVar7;
                        }
                        goto code_r0x00001886;
                    }
                    *(iVar4 + 0x18) = 0;
                }
            }
            if (uVar3 == 0x8000000e) {
                *in_EDX = 0;
            }
            else if (((arg_14h != 0) && (uVar7 != 0)) && (uVar7 == *arg_14h)) {
                uVar7 = 0xffffffff;
                *arg_14h = 0;
            }
        }
        if (arg_14h != 0) {
            *arg_14h = 0;
        }
    }
code_r0x00001886:
    return uVar3;
}


/* fcn.00001c57 @ 0x1c57 */

uint __fastcall fcn.00001c57(int param_1)

{
    char cVar1;
    int iVar2;
    uint extraout_ECX;
    
    if (param_1 != 0) {
        iVar2 = fcn.00001bdc();
        while (iVar2 != 0) {
            cVar1 = fcn.000019b3();
            if (cVar1 != '\0') {
                return extraout_ECX;
            }
            iVar2 = fcn.00001c16();
        }
    }
    return 0;
}


/* fcn.000015d4 @ 0x15d4 */

void __fastcall fcn.000015d4(int *param_1,int param_2,uchar param_3)

{
    char cVar1;
    int iVar2;
    int iVar3;
    
    param_1[9] = 0;
    iVar2 = param_1[1] + *param_1;
    *(param_1 + 7) = param_3;
    iVar3 = *param_1 + param_2;
    param_1[8] = param_2;
    param_1[4] = iVar3;
    param_1[3] = iVar2;
    param_1[2] = iVar2 + -0x10;
    param_1[6] = 0;
    param_1[5] = 0;
    iVar2 = fcn.0000107a();
    if (iVar3 != iVar2) {
        if (iVar2 == 0) {
            cVar1 = fcn.00000f7f();
            if (cVar1 == '\0') {
                param_1[3] = iVar3;
            }
        }
        else {
            param_1[4] = iVar2;
        }
    }
    return;
}


/* fcn.0000162c @ 0x162c */

int32_t __cdecl fcn.0000162c(int32_t arg_8h)

{
    int iVar1;
    uint in_EDX;
    int32_t var_4h;
    
    iVar1 = fcn.00001277(&var_4h);
    if (iVar1 != 0) {
        iVar1 = fcn.00000f1d(arg_8h + 4);
        *arg_8h = iVar1;
        if (iVar1 != 0) {
            fcn.000015d4(7,in_EDX);
            return arg_8h;
        }
    }
    return 0;
}


/* fcn.000007b7 @ 0x7b7 */

int __fastcall fcn.000007b7(int *param_1,int param_2)

{
    int iVar1;
    int iVar2;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar2 = 0;
    do {
        do {
            var_4h = 0;
            iVar1 = (**(*param_1 + 0x38))(param_1,iVar2,&var_4h);
            iVar2 = iVar2 + 1;
            if (iVar1 < 0) {
                return iVar1;
            }
            var_8h = 0;
            iVar1 = (**(*param_1 + 0x68))(0xffd54fd4,var_4h,&var_8h);
        } while ((iVar1 < 0) || (iVar1 = (**(*param_1 + 0x40))(param_1,0x19,var_8h,&var_ch), iVar1 < 0));
        fcn.000015d4(7,var_ch);
        iVar1 = fcn.0000162c(param_2);
    } while (iVar1 == 0);
    *(param_2 + 0x1c) = *(param_2 + 0x1c) | 8;
    return 0;
}


/* fcn.00000899 @ 0x899 */

void __fastcall fcn.00000899(int *param_1)

{
    int iVar1;
    uint32_t uVar2;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar2 = 0;
    iVar1 = (**(*param_1 + 0x20))(param_1,0xffd54f44,0,&var_8h,&var_4h);
    if (-1 < iVar1) {
        *var_4h = *0xffd54fec;
        *(var_4h + 4) = *0xffd54ff0;
        if (*(var_4h + 8) != 0) {
            do {
                if ((*(uVar2 * 0x28 + 0x2c + var_4h) & 8) != 0) {
                    fcn.000007b7();
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < *(var_4h + 8));
        }
    }
    return;
}


/* fcn.0000075f @ 0x75f */

uint __fastcall fcn.0000075f(uint param_1,uint *param_2,uint *param_3,uint *param_4)

{
    int iVar1;
    
    iVar1 = fcn.00001c57();
    if (iVar1 == 0) {
        *param_2 = 0xff000000;
        *param_4 = 0x30000;
    }
    else {
        *param_2 = *(iVar1 + 0x10);
        *param_4 = *(iVar1 + 0x1c);
    }
    iVar1 = fcn.00001c57();
    if (iVar1 == 0) {
        *param_3 = 0xff030000;
    }
    else {
        *param_3 = *(iVar1 + 0x10);
    }
    return 0;
}


/* fcn.000018f6 @ 0x18f6 */

uint8_t __fastcall fcn.000018f6(uint param_1,int param_2,char *param_3)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    char cVar4;
    
    uVar1 = fcn.000018d7();
    if (param_2 == 0) {
        uVar2 = 0x20;
    }
    else {
        uVar2 = fcn.000018d7();
    }
    uVar3 = 1;
    if (((uVar1 & 4) == 0) || ((uVar1 & 0xe0) != 0)) {
        uVar3 = 0;
    }
    if (((uVar2 & 4) == 0) || ((uVar2 & 0xe0) != 0)) {
        cVar4 = '\0';
    }
    else {
        cVar4 = '\x01';
    }
    if (param_3 != NULL) {
        *param_3 = cVar4;
    }
    if ((uVar3 != 0) && (cVar4 != '\0')) {
        if ((uVar2 & 0x10) != 0) {
            return 1;
        }
        if ((uVar1 & 0x10) != 0) {
            return 0;
        }
        if ((uVar1 & 8) != 0) {
            return uVar2 >> 3 & 1;
        }
    }
    return uVar3;
}


/* fcn.0000188d @ 0x188d */

int __fastcall fcn.0000188d(int param_1)

{
    int iVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    
    if ((*(param_1 + 0x28) == 0x4856465f) && (*(param_1 + 0x30) == 0x48)) {
        uVar2 = *(param_1 + 0x34);
        if (uVar2 == 0) {
            return 0x48;
        }
        if ((((0x47 < uVar2) && (uVar2 < 0xd5)) && (uVar3 = *(uVar2 + 0x10 + param_1), 0x13 < uVar3)) && (uVar3 < 0xa1)
           ) {
            iVar1 = uVar2 + uVar3;
            return (-iVar1 & 7U) + iVar1;
        }
    }
    return 0;
}


/* fcn.00001277 @ 0x1277 */

int __fastcall fcn.00001277(uint param_1,uint param_2,uint param_3,uint param_4)

{
    char cVar1;
    int iVar2;
    
    iVar2 = fcn.0000107a();
    while ((iVar2 != 0 && (cVar1 = fcn.000011bd(param_2,param_3,param_4), cVar1 == '\0'))) {
        iVar2 = fcn.00001001();
    }
    return iVar2;
}


/* fcn.000013a6 @ 0x13a6 */

uint __cdecl fcn.000013a6(int32_t arg_8h,int32_t arg_ch,uint32_t arg_10h,int32_t arg_14h)

{
    uint uVar1;
    int in_ECX;
    int in_EDX;
    int32_t var_4h;
    
    if ((((in_ECX == 0) || (in_EDX == 0)) || (arg_ch == 0)) || ((arg_10h == 0 && (*arg_ch != 0)))) {
        uVar1 = 0x80000002;
    }
    else {
        fcn.00001277(&var_4h,arg_14h);
        uVar1 = fcn.0000132a(arg_8h,arg_ch,arg_10h,arg_14h);
    }
    return uVar1;
}


/* fcn.00000f1d @ 0xf1d */

int __fastcall fcn.00000f1d(uint param_1,int param_2,int *param_3)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    
    iVar1 = fcn.00000e6d();
    if (iVar1 != 0) {
        iVar2 = 10;
        if ((*(iVar1 + 6) & 0x8000000) == 0) {
            iVar2 = (-((*(iVar1 + 6) & 0x4000000) != 0) & 0xf) + 0xb + param_2;
        }
        if (param_3 != NULL) {
            if ((*(iVar1 + 6) & 0x10000000) == 0) {
                uVar3 = 0;
            }
            else {
                uVar3 = *((*(iVar1 + 4) - 2) + iVar1);
            }
            *param_3 = (*(iVar1 + 4) - uVar3) - iVar2;
        }
        iVar1 = iVar2 + iVar1;
    }
    return iVar1;
}


/* fcn.00000868 @ 0x868 */

uint __fastcall fcn.00000868(uint param_1)

{
    int iVar1;
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    var_ch = InterruptDescriptorTableRegister();
    iVar1 = fcn.000007b7();
    if (iVar1 < 0) {
        param_1 = 0;
    }
    return param_1;
}


/* fcn.0000018d @ 0x18d */

bool __cdecl fcn.0000018d(uint noname_0,int32_t arg_ch)

{
    int iVar1;
    uint32_t var_4h;
    
    var_4h = 0;
    iVar1 = (**arg_ch)(arg_ch,0xffd55054,0xffd54ff4,0,&var_4h,0);
    return iVar1 != -0x7ffffffb || var_4h == 0xca9;
}


/* fcn.0000107a @ 0x107a */

uint32_t __fastcall fcn.0000107a(int param_1)

{
    char cVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint unaff_ESI;
    
    uVar3 = *(param_1 + 0x10);
    cVar1 = fcn.00000f7f();
    if (cVar1 == '\0') {
        uVar3 = 0;
    }
    else if ((-1 < *(uVar3 + 9)) || ((*(uVar3 + 6) & 0x8000000) != 0)) {
        do {
            if ((uVar3 == 0) || (*(param_1 + 0xc) <= uVar3)) {
                uVar3 = 0;
            }
            else {
                cVar1 = fcn.00000f7f(unaff_ESI);
                if ((cVar1 != '\0') && (uVar3 = uVar3 + *(uVar3 + 4), *(param_1 + 0xc) <= uVar3)) {
                    return 0;
                }
                while( true ) {
                    if (*(param_1 + 0xc) <= uVar3) {
                        return 0;
                    }
                    cVar1 = fcn.00000f7f(unaff_ESI);
                    if (cVar1 != '\0') break;
                    uVar2 = *(uVar3 + 4);
                    if (*(uVar3 + 4) == 0xffff) {
                        return 0;
                    }
                    if (uVar2 < 0xb) {
                        return 0;
                    }
                    if (*(param_1 + 0xc) - uVar3 < uVar2) {
                        return 0;
                    }
                    uVar3 = uVar3 + uVar2;
                }
            }
            if (uVar3 == 0) {
                return 0;
            }
            if ((*(uVar3 + 9) < '\0') && ((*(uVar3 + 6) & 0x8000000) == 0)) {
                return uVar3;
            }
        } while( true );
    }
    return uVar3;
}


/* fcn.00000f7f @ 0xf7f */

uint __fastcall fcn.00000f7f(int *param_1,int param_2)

{
    char cVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint16_t *puVar4;
    uint32_t uVar5;
    
    uVar5 = *(param_1 + 1);
    if (((((*param_1 == 0x5241564e) && (*(param_1 + 9) != -1)) && (*(param_1 + 1) != 0xffff)) &&
        (((10 < uVar5 && (uVar3 = *(param_2 + 0xc) - param_1, uVar5 <= uVar3)) &&
         ((uVar2 = *(param_1 + 6) & 0xffffff, uVar2 == 0xffffff || ((uVar5 <= uVar2 && (uVar2 <= uVar3)))))))) &&
       (((*(param_1 + 6) & 0x10000000) == 0 ||
        (((puVar4 = param_1 + (uVar5 - 2), (*(puVar4 + (2 - *puVar4)) & 1) == 0 || (-1 < *(param_1 + 9))) ||
         (cVar1 = fcn.00000eaa(), cVar1 == '\0')))))) {
        return 1;
    }
    return 0;
}


/* fcn.000011bd @ 0x11bd */

uint __fastcall fcn.000011bd(int param_1,uint16_t *param_2,uint param_3,int *param_4)

{
    int iVar1;
    uint16_t *puVar2;
    uint16_t *puVar3;
    
    fcn.00000e53();
    puVar2 = (-((*(param_1 + 6) & 0x4000000) != 0) & 0xf) + 0xb + param_1;
    iVar1 = (*(param_1 + 4) - puVar2) + param_1;
    puVar3 = puVar2;
    if ((*(param_1 + 6) & 0x2000000) == 0) {
        for (; ((*puVar3 != 0 && (*puVar3 == *param_2)) && (0 < iVar1)); iVar1 = iVar1 + -2) {
            puVar3 = puVar3 + 1;
            param_2 = param_2 + 1;
        }
        if (*puVar3 != *param_2) {
            return 0;
        }
        if (iVar1 < 1) {
            return 0;
        }
        puVar3 = puVar3 + 1;
    }
    else {
        for (; ((*puVar3 != 0 && (*puVar3 == *param_2)) && (0 < iVar1)); iVar1 = iVar1 + -1) {
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
        }
        if (*puVar3 != *param_2) {
            return 0;
        }
        if (iVar1 < 1) {
            return 0;
        }
        puVar3 = puVar3 + 1;
    }
    iVar1 = fcn.000019f4(iVar1);
    if (iVar1 != 0) {
        return 0;
    }
    if (param_4 != NULL) {
        *param_4 = puVar3 - puVar2;
    }
    return 1;
}


/* fcn.00000e6d @ 0xe6d */

int __fastcall fcn.00000e6d(int param_1)

{
    int iVar1;
    char cVar2;
    uint32_t uVar3;
    
    cVar2 = fcn.00000f7f();
    iVar1 = 0;
    while( true ) {
        if (cVar2 == '\0') {
            return iVar1;
        }
        uVar3 = *(param_1 + 6) & 0xffffff;
        if (uVar3 == 0xffffff) break;
        cVar2 = fcn.00000f7f();
        iVar1 = param_1;
        param_1 = param_1 + uVar3;
    }
    return param_1;
}


/* fcn.00001001 @ 0x1001 */

uint32_t __fastcall fcn.00001001(uint32_t param_1,int param_2)

{
    char cVar1;
    uint32_t uVar2;
    
    do {
        if ((param_1 == 0) || (*(param_2 + 0xc) <= param_1)) {
            param_1 = 0;
        }
        else {
            cVar1 = fcn.00000f7f();
            if ((cVar1 != '\0') && (param_1 = param_1 + *(param_1 + 4), *(param_2 + 0xc) <= param_1)) {
                return 0;
            }
            while( true ) {
                if (*(param_2 + 0xc) <= param_1) {
                    return 0;
                }
                cVar1 = fcn.00000f7f();
                if (cVar1 != '\0') break;
                uVar2 = *(param_1 + 4);
                if (*(param_1 + 4) == 0xffff) {
                    return 0;
                }
                if (uVar2 < 0xb) {
                    return 0;
                }
                if (*(param_2 + 0xc) - param_1 < uVar2) {
                    return 0;
                }
                param_1 = param_1 + uVar2;
            }
        }
        if (param_1 == 0) {
            return 0;
        }
        if ((*(param_1 + 9) < '\0') && ((*(param_1 + 6) & 0x8000000) == 0)) {
            return param_1;
        }
    } while( true );
}


/* fcn.00000eaa @ 0xeaa */

uint32_t __fastcall fcn.00000eaa(int param_1)

{
    uint32_t in_EAX;
    uint32_t uVar1;
    uint16_t *puVar2;
    char *pcVar3;
    char cVar4;
    uint32_t uVar5;
    uint16_t *puVar6;
    
    cVar4 = '\0';
    if ((*(param_1 + 6) & 0x10000000) != 0) {
        puVar6 = param_1 + 4;
        puVar2 = param_1 + -2 + *puVar6;
        in_EAX = *puVar2;
        if ((*(puVar2 + (2 - in_EAX)) & 1) != 0) {
            pcVar3 = param_1 + 10;
            uVar5 = 0;
            uVar1 = ~-(pcVar3 + (*puVar6 - 10) < pcVar3) & (pcVar3 + (*puVar6 - 10)) - pcVar3;
            if (uVar1 != 0) {
                do {
                    cVar4 = cVar4 + *pcVar3;
                    pcVar3 = pcVar3 + 1;
                    uVar5 = uVar5 + 1;
                } while (uVar5 < uVar1);
            }
            puVar2 = param_1 + 6;
            uVar1 = -(puVar2 < puVar6) & 0xfffffffe;
            if (uVar1 != 0xfffffffe) {
                puVar2 = NULL;
                do {
                    cVar4 = cVar4 + *puVar6;
                    puVar6 = puVar6 + 1;
                    puVar2 = puVar2 + 1;
                } while (puVar2 < uVar1 + 2);
            }
            return CONCAT31(puVar2 >> 8,-(*(param_1 + 9) + cVar4));
        }
    }
    return in_EAX & 0xffffff00;
}


/* fcn.00000e53 @ 0xe53 */

int __fastcall fcn.00000e53(int param_1,int param_2)

{
    if ((*(param_1 + 6) & 0x4000000) != 0) {
        return param_1 + 10;
    }
    return *(param_2 + 8) + *(param_1 + 10) * -0x10;
}


/* fcn.000012bb @ 0x12bb */

uint __fastcall fcn.000012bb(int param_1,int param_2,uint32_t *param_3)

{
    uint16_t *puVar1;
    
    if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != NULL)) && ((*(param_1 + 6) & 0x8000000) == 0)) {
        *param_3 = 2;
        if ((*(param_1 + 6) & 0x1000000) != 0) {
            *param_3 = 6;
        }
        if ((*(param_2 + 0x1c) & 1) != 0) {
            *param_3 = *param_3 | 1;
        }
        if ((*(param_1 + 6) & 0x20000000) != 0) {
            *param_3 = *param_3 | 8;
        }
        if ((*(param_1 + 6) & 0x40000000) != 0) {
            puVar1 = param_1 + -2 + *(param_1 + 4);
            *param_3 = *param_3 | *(puVar1 + (2 - *puVar1)) & 0x30;
        }
        return 0;
    }
    return 0x80000002;
}


/* fcn.0000132a @ 0x132a */

uint __cdecl fcn.0000132a(uint32_t arg_8h,int32_t arg_ch,uint32_t arg_10h,int32_t arg_14h)

{
    uint32_t uVar1;
    char cVar2;
    int arg_ch_00;
    int in_ECX;
    int32_t var_4h;
    
    if ((in_ECX == 0) || (var_4h = in_ECX, cVar2 = fcn.00000f7f(), cVar2 == '\0')) {
        return 0x8000000e;
    }
    if (arg_8h != 0) {
        fcn.000012bb(arg_8h);
    }
    arg_ch_00 = fcn.00000f1d(&var_4h,arg_14h);
    if (arg_ch_00 == 0) {
        return 0x80000015;
    }
    uVar1 = *arg_ch;
    *arg_ch = var_4h;
    if (uVar1 < var_4h) {
        return 0x80000005;
    }
    fcn.00001fe0(arg_10h,arg_ch_00,var_4h);
    return 0;
}


/* fcn.000013f7 @ 0x13f7 */

uint __fastcall fcn.000013f7(int param_1,uint16_t *param_2,uint32_t *param_3,uint32_t param_4,int param_5)

{
    uint8_t *puVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    bool bVar4;
    uint uVar5;
    int32_t arg_ch;
    uint8_t *puVar6;
    int iVar7;
    int iVar8;
    uint8_t *puVar9;
    
    if ((((param_1 == 0) || (param_3 == NULL)) || (param_2 == NULL)) || (param_4 == 0)) {
        uVar5 = 0x80000002;
    }
    else {
        puVar9 = (-((*(param_1 + 6) & 0x4000000) != 0) & 0xf) + 0xb + param_1;
        iVar7 = (*(param_1 + 4) - puVar9) + param_1;
        puVar6 = puVar9;
        if ((*(param_1 + 6) & 0x2000000) == 0) {
            for (; (*puVar6 != 0 || (puVar6[1] != 0)); puVar6 = puVar6 + 2) {
                if (iVar7 < 1) goto code_r0x00001460;
                iVar7 = iVar7 + -2;
            }
            if (0 < iVar7) {
                puVar6 = puVar6 + (2 - puVar9);
                goto code_r0x00001490;
            }
        }
        else {
            do {
                uVar2 = *puVar6;
                puVar6 = puVar6 + 1;
                iVar8 = iVar7;
                if (uVar2 == 0) break;
                iVar8 = iVar7 + -1;
                bVar4 = 0 < iVar7;
                iVar7 = iVar8;
            } while (bVar4);
            if (0 < iVar8) {
                puVar6 = (puVar6 - puVar9) * 2;
code_r0x00001490:
                puVar1 = *param_3;
                *param_3 = puVar6;
                if (puVar1 < puVar6) {
                    return 0x80000005;
                }
                arg_ch = fcn.00000e53();
                if ((*(param_1 + 6) & 0x2000000) == 0) {
                    iVar7 = puVar9 - param_2;
                    do {
                        uVar3 = *(iVar7 + param_2);
                        *param_2 = uVar3;
                        param_2 = param_2 + 1;
                    } while (uVar3 != 0);
                }
                else {
                    do {
                        uVar2 = *puVar9;
                        puVar9 = puVar9 + 1;
                        *param_2 = uVar2;
                        param_2 = param_2 + 1;
                    } while (uVar2 != 0);
                }
                fcn.00001fe0(param_4,arg_ch,0x10);
                *(param_5 + 0x18) = param_1;
                return 0;
            }
        }
code_r0x00001460:
        uVar5 = 0x8000000a;
    }
    return uVar5;
}


/* fcn.00001537 @ 0x1537 */

uint __fastcall fcn.00001537(int16_t *param_1,int param_2,int param_3,uint param_4,int *param_5)

{
    char cVar1;
    int iVar2;
    uint uVar3;
    int16_t *piStack_4;
    
    if ((param_1 == NULL) || (param_2 == 0)) {
code_r0x000015c9:
        uVar3 = 0x80000002;
    }
    else {
        piStack_4 = param_1;
        if (*param_1 == 0) {
            iVar2 = fcn.0000107a();
        }
        else {
            if ((((*(param_3 + 0x18) == 0) || (cVar1 = fcn.00000f7f(), cVar1 == '\0')) ||
                (cVar1 = fcn.000011bd(param_2,0,param_3), cVar1 == '\0')) &&
               (iVar2 = fcn.00001277(&piStack_4,param_3), iVar2 == 0)) goto code_r0x000015c9;
            iVar2 = fcn.00001001();
        }
        if (iVar2 == 0) {
            *(param_3 + 0x18) = 0;
            uVar3 = 0x8000000e;
        }
        else {
            if (param_5 != NULL) {
                *param_5 = iVar2;
            }
            uVar3 = 0;
        }
    }
    return uVar3;
}


/* fcn.000010b1 @ 0x10b1 */

uint32_t __fastcall fcn.000010b1(int param_1,int param_2,int param_3,int param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    unkbyte3 Var4;
    char cVar5;
    uint32_t uVar6;
    char *pcVar7;
    char *pcVar8;
    bool bVar9;
    
    uVar1 = *(param_1 + 6);
    uVar2 = *(param_3 + 6);
    uVar6 = uVar1 >> 0x18 & 0xffffff02;
    uVar3 = uVar2 >> 0x18 & 2;
    cVar5 = uVar6;
    if ((cVar5 == uVar3) && (uVar3 = 0, ((*(param_2 + 0x1c) ^ *(param_4 + 0x1c)) & 1) == 0)) {
        fcn.00000e53(uVar6);
        fcn.00000e53();
        uVar3 = fcn.000019f4();
        if (uVar3 == 0) {
            pcVar8 = (-((uVar1 & 0x4000000) != 0) & 0xf) + 0xb + param_1;
            param_1 = (*(param_1 + 4) - pcVar8) + param_1;
            pcVar7 = (-((uVar2 & 0x4000000) != 0) & 0xf) + 0xb + param_3;
            param_3 = (*(param_3 + 4) - pcVar7) + param_3;
            if (param_3 <= param_1) {
                param_1 = param_3;
            }
            if (cVar5 == '\0') {
                while( true ) {
                    cVar5 = *pcVar8;
                    Var4 = param_3 >> 8;
                    param_3 = CONCAT31(Var4,cVar5);
                    if (((cVar5 == '\0') && (pcVar8[1] == '\0')) ||
                       ((cVar5 != *pcVar7 ||
                        ((param_3 = CONCAT31(Var4,pcVar8[1]), pcVar8[1] != pcVar7[1] || (param_1 < 1)))))) break;
                    pcVar8 = pcVar8 + 2;
                    pcVar7 = pcVar7 + 2;
                    param_1 = param_1 + -2;
                }
                Var4 = param_3 >> 8;
                uVar3 = CONCAT31(Var4,*pcVar8);
                if (*pcVar8 != *pcVar7) goto code_r0x000011a2;
                uVar3 = CONCAT31(Var4,pcVar8[1]);
                bVar9 = pcVar8[1] == pcVar7[1];
            }
            else {
                while( true ) {
                    cVar5 = *pcVar8;
                    Var4 = param_3 >> 8;
                    param_3 = CONCAT31(Var4,cVar5);
                    if (((cVar5 == '\0') || (cVar5 != *pcVar7)) || (param_1 < 1)) break;
                    pcVar8 = pcVar8 + 1;
                    pcVar7 = pcVar7 + 1;
                    param_1 = param_1 + -1;
                }
                uVar3 = CONCAT31(Var4,*pcVar8);
                bVar9 = *pcVar8 == *pcVar7;
            }
            if ((bVar9) && (0 < param_1)) {
                return CONCAT31(uVar3 >> 8,1);
            }
        }
    }
code_r0x000011a2:
    return uVar3 & 0xffffff00;
}


/* fcn.000014f9 @ 0x14f9 */

int fcn.000014f9(uint param_1,uint param_2,uint param_3)

{
    int iVar1;
    
    do {
        iVar1 = fcn.000013f7(param_1,param_2,param_3);
        if (iVar1 != -0x7ffffff6) {
            return iVar1;
        }
        iVar1 = fcn.00001001();
    } while (iVar1 != 0);
    return -0x7ffffff2;
}


/* fcn.000018d7 @ 0x18d7 */

uint __fastcall fcn.000018d7(int param_1)

{
    int iVar1;
    uint8_t *puVar2;
    uint uVar3;
    
    iVar1 = fcn.0000188d();
    uVar3 = 0;
    if (((iVar1 == 0) || (puVar2 = iVar1 + 0x17 + param_1, uVar3 = 0, puVar2 == NULL)) ||
       (uVar3 = CONCAT31(puVar2 >> 8,~*puVar2), ~*puVar2 == 0)) {
        uVar3 = CONCAT31(uVar3 >> 8,0x20);
    }
    return uVar3;
}


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 8270 named .text
    uVar4 = 0;
    puVar2 = param_2 + (param_3 - 1);
    if ((param_2 < param_1) && (param_1 <= puVar2)) {
        puVar3 = param_1 + (param_3 - 1);
        uVar4 = 1;
        uVar1 = param_3;
    }
    else {
        uVar1 = param_3 & 3;
        puVar2 = param_2;
        puVar3 = param_1;
        for (param_3 = param_3 >> 2; param_3 != 0; param_3 = param_3 - 1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
        }
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + uVar4 * -2 + 1;
        puVar3 = puVar3 + uVar4 * -2 + 1;
    }
    return param_1;
}


/* fcn.00001a53 @ 0x1a53 */

uint __fastcall fcn.00001a53(uint param_1,uint *param_2)

{
    int16_t iVar1;
    int16_t *piVar2;
    
    if (param_2 == NULL) {
        return 0x80000002;
    }
    piVar2 = *param_2;
    iVar1 = *piVar2;
    do {
        if (iVar1 == -1) {
            return 0x8000000e;
        }
        piVar2 = piVar2 + piVar2[1];
        iVar1 = *piVar2;
    } while (iVar1 != 4);
    *param_2 = piVar2;
    return 0;
}


/* fcn.00001f29 @ 0x1f29 */

int fcn.00001f29(void)

{
    int iVar1;
    
    iVar1 = fcn.00001ef0();
    if (iVar1 != 0) {
        fcn.0000199a();
        iVar1 = iVar1 + 0x18;
    }
    return iVar1;
}


/* fcn.00001ef0 @ 0x1ef0 */

int32_t __fastcall fcn.00001ef0(uint param_1,uint param_2)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffee + -4) + 0x34))(*(stack0xffffffee + -4),4,param_2,&var_8h);
    if (iVar1 < 0) {
        var_8h = 0;
    }
    return var_8h;
}


/* fcn.0000199a @ 0x199a */

uint * __fastcall fcn.0000199a(uint *param_1,uint *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
}


/* fcn.000019d7 @ 0x19d7 */

int __fastcall fcn.000019d7(int param_1,int param_2,int param_3)

{
    int iVar1;
    
    if ((param_3 != 0) && (param_1 != param_2)) {
        iVar1 = section..text(param_1,param_2,param_3);
        return iVar1;
    }
    return param_1;
}


/* fcn.00001e6c @ 0x1e6c */

int32_t fcn.00001e6c(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00001eba @ 0x1eba */

int fcn.00001eba(void)

{
    char cVar1;
    int iVar2;
    
    do {
        iVar2 = fcn.00001e97();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.000019b3();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.00001ad7 @ 0x1ad7 */

int * fcn.00001ad7(void)

{
    int iVar1;
    int iVar2;
    uint *puVar3;
    int *piVar4;
    uint32_t uVar5;
    int *piVar6;
    uint uStack_14;
    int iStack_10;
    uchar *puStack_c;
    uchar auStack_8 [2];
    int iStack_6;
    
    puStack_c = auStack_8;
    uStack_14 = 0;
    iStack_10 = 0;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(iStack_6 + -4) + 0x38))(*(iStack_6 + -4),0,&uStack_14);
    if (-1 < iVar1) {
        puStack_c = auStack_8;
        InterruptDescriptorTableRegister();
        iVar2 = (**(**(iStack_6 + -4) + 0x68))(0xffd54f54,uStack_14,&iStack_10);
        iVar1 = iStack_10;
        if ((-1 < iVar2) && (piVar6 = iStack_10 + 0x2c, *piVar6 == 0x4c4d4f52)) {
            puVar3 = fcn.00001f29();
            if (puVar3 != NULL) {
                *puVar3 = *(iVar1 + 0x30);
                puVar3[1] = *(iVar1 + 0x34);
                puVar3[3] = 0;
                piVar4 = puVar3 + 4;
                puVar3[2] = 0x30;
                iVar2 = *(iVar1 + 0x34);
                uVar5 = iVar1 + 0x3c;
                if (uVar5 < *(iVar1 + 0x38) * iVar2 + 0x10 + piVar6) {
                    do {
                        fcn.000019d7(iVar2);
                        piVar4[1] = 0;
                        *piVar4 = (0x18 - puVar3) + piVar4;
                        piVar4 = piVar4 + 0xc;
                        iVar2 = *(iVar1 + 0x34);
                        uVar5 = uVar5 + iVar2;
                    } while (uVar5 < *(iVar1 + 0x38) * iVar2 + 0x10 + piVar6);
                }
            }
            return piVar6;
        }
    }
    return NULL;
}


/* fcn.000019b3 @ 0x19b3 */

uint32_t __fastcall fcn.000019b3(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00001bdc @ 0x1bdc */

uint32_t fcn.00001bdc(void)

{
    int iVar1;
    
    fcn.00001e6c();
    iVar1 = fcn.00001eba();
    if (iVar1 == 0) {
        fcn.00001ad7();
        fcn.00001e6c();
        iVar1 = fcn.00001eba();
    }
    return iVar1 + 0x30U & -(iVar1 != 0);
}


/* fcn.00001c16 @ 0x1c16 */

int __fastcall fcn.00001c16(int param_1)

{
    int *piVar1;
    uint32_t uVar2;
    int iVar3;
    char cVar4;
    uint32_t uVar5;
    
    if (param_1 != 0) {
        piVar1 = param_1 + -8;
        iVar3 = *piVar1;
        cVar4 = fcn.000019b3();
        if (cVar4 != '\0') {
            uVar5 = piVar1 + *(piVar1 + (0x20 - iVar3));
            uVar2 = piVar1 + (0x28 - iVar3);
            if ((uVar2 <= uVar5) && (uVar5 < (*(piVar1 + (2 - iVar3)) - 0x28) + uVar2)) {
                return uVar5 + 8;
            }
        }
    }
    return 0;
}


/* fcn.00001f68 @ 0x1f68 */

int32_t __fastcall fcn.00001f68(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.00001e3b(param_1,&var_4h);
    return var_4h;
}


/* fcn.00001e3b @ 0x1e3b */

void __cdecl fcn.00001e3b(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4),0xffd54f34,0,0,arg_ch);
    return;
}


/* fcn.00001e97 @ 0x1e97 */

int16_t * __fastcall fcn.00001e97(int16_t param_1,int16_t *param_2)

{
    while( true ) {
        if (*param_2 == -1) {
            return NULL;
        }
        if (*param_2 == param_1) break;
        param_2 = param_2 + param_2[1];
    }
    return param_2;
}


