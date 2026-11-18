// decompiled by r2ghidra: 2290_5B94E419-C795-414D-A0D4-B80A877BE5FE.te
// functions: 147

/* entry0 @ 0x402 */

void entry0(void)

{
    do {
    //WARNING: Do nothing block with infinite loop
    } while( true );
}


/* fcn.000019c7 @ 0x19c7 */

void fcn.000019c7(void)

{
    char cVar1;
    int16_t iVar2;
    uint32_t uVar3;
    
    fcn.00001ec1(0xf9010,0);
    fcn.00001cf7(0xf9004,0);
    iVar2 = fcn.00001d91(0xfa000,0);
    if (iVar2 != -1) {
        fcn.00001e2d(0xfa004,0);
        fcn.00001f4a(0xfa010,0);
        fcn.00001e04(0xfa004,0);
    }
    cVar1 = fcn.0000613f();
    if (cVar1 == '\0') {
        cVar1 = fcn.00006150();
        iVar2 = 0x1100;
        if (cVar1 == '\0') {
            iVar2 = 0x1000;
        }
    }
    else {
        iVar2 = 0x1080;
    }
    fcn.00001c10(-0x2f9900,iVar2);
    fcn.0000227b();
    fcn.00001ec1(0xfc064,0);
    fcn.00001dc7(0xfc020,0);
    fcn.00001cf7(0xfc004,0);
    fcn.00001cf7(0xfc040,0);
    uVar3 = fcn.00002218();
    fcn.00002238(uVar3 | 4);
    return;
}


/* fcn.000018f0 @ 0x18f0 */

void fcn.000018f0(void)

{
    int iVar1;
    int32_t *piVar2;
    uchar uStack_4a;
    char cStack_49;
    int32_t aiStack_48 [7];
    char cStack_2c;
    uchar uStack_2b;
    uchar uStack_29;
    char cStack_28;
    char acStack_27 [35];
    
    fcn.00000c40(&cStack_28,0x20,0xffd07050);
    piVar2 = aiStack_48;
    fcn.00002c08(&uStack_4a,piVar2);
    uStack_2b = 0;
    uStack_29 = 0;
    if (cStack_49 == '\x01') {
        if (cStack_2c == '\x01') {
            piVar2 = NULL;
            fcn.0000274d(aiStack_48[0],0);
        }
        fcn.000030e8(piVar2);
        iVar1 = 0;
        while (cStack_28 != '\0') {
            cStack_28 = acStack_27[iVar1];
            iVar1 = iVar1 + 1;
        }
        fcn.0000245e(iVar1);
    }
    piVar2 = aiStack_48;
    fcn.00002cd0(&uStack_4a,piVar2);
    if (cStack_49 == '\x01') {
        if (cStack_2c == '\x01') {
            piVar2 = NULL;
            fcn.0000274d(aiStack_48[0],0);
        }
        fcn.000030e8(piVar2);
    }
    return;
}


/* fcn.00001881 @ 0x1881 */

void fcn.00001881(void)

{
    int64_t iVar1;
    uchar auStack_28 [4];
    char cStack_24;
    
    fcn.00002b57(auStack_28);
    if (cStack_24 != '\0') {
        iVar1 = fcn.0000200a();
        fcn.00001ec1(iVar1 + 0x10,iVar1 + 0x10 >> 0x20);
        fcn.00001ec1(iVar1 + 0x14,iVar1 + 0x14 >> 0x20);
        fcn.00002e39();
    }
    return;
}


/* fcn.00002b57 @ 0x2b57 */

void __fastcall fcn.00002b57(char *param_1,uchar *param_2,int *param_3)

{
    char *pcVar1;
    int iVar2;
    char *pcVar3;
    char *pcVar4;
    int *piVar5;
    
    iVar2 = fcn.00000c00();
    piVar5 = *(iVar2 + 4);
    if ((*piVar5 != 0x554c4441) || (piVar5[1] != 0x545f4450)) {
        iVar2 = fcn.00000c1f();
        piVar5 = *(iVar2 + 0x24) + *(iVar2 + 0x1c);
    }
    if (piVar5 == NULL) {
        *param_1 = '\0';
    }
    else {
        iVar2 = piVar5[0x2f];
        *param_1 = iVar2;
        if (iVar2 != '\0') {
            pcVar4 = param_1 + 8;
            iVar2 = piVar5[0x31];
            *param_2 = piVar5[0x30];
            *param_3 = iVar2;
            pcVar1 = param_1 + 4;
            param_1[1] = *(piVar5 + 0xbd);
            param_1[6] = *(piVar5 + 0xbe);
            param_1[7] = *(piVar5 + 0xbf);
            param_1[0x10] = '\0';
            param_1[0x11] = '\0';
            param_1[0x12] = '\0';
            param_1[0x13] = '\0';
            param_1[0x14] = '\0';
            param_1[0x15] = '\0';
            param_1[0x16] = '\0';
            param_1[0x17] = '\0';
            param_1[0x18] = '\0';
            param_1[0x19] = '\0';
            param_1[0x1a] = '\0';
            param_1[0x1b] = '\0';
            iVar2 = 2;
            pcVar3 = pcVar1;
            do {
                *pcVar3 = pcVar3[piVar5 + (0xba - pcVar1)];
                pcVar3[param_1 + (2 - pcVar1)] = pcVar3[piVar5 + (0xb8 - pcVar1)];
                pcVar4[0] = '\0';
                pcVar4[1] = '\0';
                pcVar4[2] = '\0';
                pcVar4[3] = '\0';
                pcVar3 = pcVar3 + 1;
                pcVar4 = pcVar4 + 4;
                iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
        }
    }
    return;
}


/* fcn.0000200a @ 0x200a */

int __fastcall fcn.0000200a(uint8_t param_1)

{
    char cVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    
    cVar1 = fcn.000062af();
    if (cVar1 != '\0') {
        return *(param_1 * 8 + -0x2f93f4);
    }
    uVar2 = fcn.0000204e();
    uVar3 = fcn.000020be();
    return (uVar3 & 7 | (uVar2 & 0x1f) << 3) << 0xc;
}


/* fcn.000062af @ 0x62af */

uint __fastcall fcn.000062af(uint32_t param_1)

{
    int16_t iVar1;
    char cVar2;
    uint32_t uVar3;
    
    param_1 = param_1 & 0xff;
    iVar1 = *(*(param_1 * 8 + -0x2f93f4) + 2);
    cVar2 = fcn.00006123();
    if (cVar2 == '\0') {
        cVar2 = fcn.000060e1();
        if (cVar2 == '\0') {
            cVar2 = fcn.0000613f();
            if (cVar2 == '\0') {
                uVar3 = *(param_1 * 2 + -0x2f8e1c);
            }
            else {
                uVar3 = *(param_1 * 2 + -0x2f8e2c);
            }
        }
        else {
            uVar3 = *(param_1 * 2 + -0x2f8e3c);
        }
    }
    else {
        uVar3 = *(param_1 * 2 + -0x2f8e0c);
    }
    return CONCAT31(uVar3 >> 8,iVar1 == uVar3);
}


/* fcn.0000204e @ 0x204e */

uint __fastcall fcn.0000204e(uint8_t param_1)

{
    char cVar1;
    
    if (param_1 < 7) {
        cVar1 = fcn.00006123();
        if (cVar1 == '\0') {
            if (param_1 == 0) {
                return 0x1e;
            }
            if (param_1 == 1) {
                return 0x1e;
            }
            if (param_1 == 2) {
                return 0x12;
            }
            if (param_1 == 3) {
                return 0x13;
            }
            if (param_1 == 4) {
                return 0x13;
            }
            if (param_1 == 5) {
                return 0x13;
            }
            if (param_1 == 6) {
                return 0x13;
            }
        }
        else {
            if ((param_1 == 0) || (param_1 == 1)) {
                return 0x1e;
            }
            if (param_1 == 2) {
                return 0x12;
            }
            if ((param_1 == 3) || (param_1 == 4)) {
                return 0x13;
            }
            if ((param_1 == 5) || (param_1 == 6)) {
                return 0x11;
            }
        }
    }
    return 0xff;
}


/* fcn.000020be @ 0x20be */

uint __fastcall fcn.000020be(uint8_t param_1)

{
    char cVar1;
    
    if (6 < param_1) {
        return 0xff;
    }
    cVar1 = fcn.00006123();
    if (cVar1 == '\0') {
        if (param_1 != 0) {
            if (param_1 != 1) {
                if (param_1 == 2) {
                    return 6;
                }
                if (param_1 == 3) {
                    return 0;
                }
                if (param_1 == 4) {
                    return 1;
                }
                if (param_1 == 5) {
                    return 2;
                }
                if (param_1 != 6) {
                    return 0xff;
                }
            }
            return 3;
        }
    }
    else if (param_1 != 0) {
        if (param_1 == 1) {
            return 3;
        }
        if (param_1 == 2) {
            return 6;
        }
        if (param_1 == 3) {
            return 0;
        }
        if (param_1 != 4) {
            if (param_1 == 5) {
                return 4;
            }
            if (param_1 != 6) {
                return 0xff;
            }
            return 5;
        }
        return 1;
    }
    return 2;
}


/* fcn.00001ec1 @ 0x1ec1 */

void __cdecl fcn.00001ec1(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.000064c2();
    return;
}


/* fcn.000064c2 @ 0x64c2 */

ulong __fastcall fcn.000064c2(uint32_t param_1,uint param_2)

{
    uint uVar1;
    
    uVar1 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    out(0xcfc,param_2);
    out(0xcf8,uVar1);
    return CONCAT44(0xcf8,param_2);
}


/* fcn.00002e39 @ 0x2e39 */

void __fastcall fcn.00002e39(uint8_t param_1,char *param_2)

{
    ushort uVar1;
    char cVar2;
    uint extraout_ECX;
    uint extraout_ECX_00;
    uint extraout_ECX_01;
    uint uVar3;
    int iVar4;
    ulong uVar5;
    uint64_t uVar6;
    int32_t iStack_18;
    uint uStack_14;
    int iStack_10;
    int iStack_c;
    uint uStack_4;
    
    iStack_10 = 0;
    iStack_c = 0;
    iStack_18 = 0;
    uStack_14 = 0;
    if (param_1 < 7) {
        uVar5 = fcn.00001ac1();
        fcn.0000349b(uVar5);
        uVar6 = fcn.00002138();
        fcn.00001efe(uVar6 + 0xa0);
        cVar2 = *param_2;
        if (cVar2 != '\0') {
            if (cVar2 == '\x01') {
                fcn.000035eb(uVar6);
                uVar5 = fcn.00001ac1();
                fcn.000034f0(uVar6,uVar6 >> 0x20,uVar5,uVar5 >> 0x20);
                iVar4 = iStack_10;
            }
            else {
                if (cVar2 != '\x02') {
                    return;
                }
                uVar1 = *(param_1 * 2 + -0x2f8dfc);
                uVar5 = fcn.00001ac1();
                fcn.000033b6(uVar6,uVar1,uVar5);
                uVar6 = *(param_1 * 8 + -0x2f93f4);
                iVar4 = 0;
            }
            cVar2 = fcn.00003544(uVar6,&stack0xffffffe8);
            uVar3 = extraout_ECX;
            if ((cVar2 != '\0') &&
               (fcn.00006522(iStack_18,uStack_14,param_2[7],param_2[5] * '\x02' | param_2[4],
                             param_2[3] * '\x02' | param_2[2]), uVar3 = extraout_ECX_00, *param_2 == '\x01')) {
                if (iVar4 == 0 && iStack_c == 0) {
                    fcn.0000617e(uVar6);
                    fcn.0000624e(uVar6);
                    uVar3 = extraout_ECX_01;
                }
                else {
                    uVar3 = uVar6 >> 0x20;
                    fcn.0000363a(uVar6);
                }
            }
            uStack_4 = CONCAT31(uVar3 >> 8,param_1);
            iStack_18 = 0x2d9f;
            fcn.00003739();
            iStack_18 = 0x2da9;
            fcn.00003975();
            iStack_18 = 0x2db2;
            fcn.0000574f();
            iStack_18 = 0x2dc2;
            fcn.00003739();
            iStack_18 = 0x2dcc;
            fcn.00003975();
            iStack_18 = 0x2dd5;
            fcn.0000574f();
            iStack_18 = 0x2de5;
            fcn.00003739();
            iStack_18 = 0x2def;
            fcn.00003975();
            iStack_18 = 0x2df8;
            fcn.0000574f();
            param_2 = param_2 + 4;
            iVar4 = 2;
            do {
                if (*param_2 != '\0') {
                    iStack_18 = 0x2e15;
                    fcn.00003739();
                    iStack_18 = 0x2e1e;
                    fcn.00003975();
                    iStack_18 = 0x2e27;
                    fcn.0000574f();
                }
                param_2 = param_2 + 1;
                iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            return;
        }
        fcn.0000617e(uVar6);
        uVar5 = fcn.00001ac1();
        fcn.00001b95(uVar5);
    }
    return;
}


/* fcn.00001880 @ 0x1880 */

void fcn.00001880(void)

{
    return;
}


/* fcn.00000b2f @ 0xb2f */

int fcn.00000b2f(void)

{
    return 0xb2f - *0xb20;
}


/* fcn.00006511 @ 0x6511 */

uint fcn.00006511(uint param_1)

{
    uint uVar1;
    
    uVar1 = *(*0xfed00148 + 8);
    *(*0xfed00148 + 8) = param_1;
    return uVar1;
}


/* fcn.00000c24 @ 0xc24 */

int fcn.00000c24(void)

{
    int unaff_retaddr;
    
    return (unaff_retaddr + -5) - *(unaff_retaddr + -0x14);
}


/* fcn.00000cdb @ 0xcdb */

uint32_t __cdecl fcn.00000cdb(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    uint16_t uVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    uint32_t in_ECX;
    int32_t *piVar4;
    int iVar5;
    uint32_t in_EDX;
    uint32_t uVar6;
    uint32_t uVar7;
    uint8_t *puVar8;
    uint32_t *puVar9;
    bool bVar10;
    bool bVar11;
    ulong uVar12;
    uint8_t uStack_7f;
    uint32_t uStack_7c;
    uint32_t *puStack_78;
    int iStack_74;
    uint32_t *puStack_70;
    uint32_t uStack_6c;
    uint32_t uStack_68;
    uint32_t uStack_64;
    uint32_t uStack_60;
    uint32_t uStack_5c;
    uint32_t uStack_58;
    uint32_t uStack_54;
    uint32_t uStack_50;
    uint32_t uStack_4c;
    uint32_t uStack_48;
    uint32_t uStack_44;
    uint32_t uStack_40;
    uint32_t uStack_3c;
    uint32_t uStack_38;
    uint32_t uStack_34;
    uint32_t auStack_30 [11];
    
    puStack_70 = NULL;
    if (in_EDX == 0) {
        if ((arg_8h & 0x2000U) != 0) goto code_r0x00000d19;
    }
    else {
        if (((arg_8h & 0x2000U) == 0) && (in_ECX == 0)) {
            return 0;
        }
code_r0x00000d19:
        if (arg_ch == 0) {
            return 0;
        }
    }
    if ((arg_8h & 0x40U) == 0) {
        if (1000000 < in_EDX) {
            return 0;
        }
        uStack_5c = 1;
    }
    else {
        if (1000000 < in_EDX) {
            return 0;
        }
        uStack_5c = 2;
    }
    if ((arg_8h & 0x100U) == 0) {
        uVar12 = fcn.00001844();
        if (uVar12 >> 0x20 < uVar12) {
            return 0;
        }
        iStack_74 = 1;
        uStack_54 = 0xff;
    }
    else {
        uVar3 = fcn.0000181f();
        if (1000000 < uVar3) {
            return 0;
        }
        iStack_74 = 2;
        uStack_54 = 0xffff;
    }
    if ((arg_8h & 0x2000U) == 0) {
        if (in_EDX == 0) {
            return 0;
        }
    }
    else {
        in_ECX = in_ECX & -(in_EDX != 0);
    }
    uStack_58 = 0;
    uStack_38 = 0;
    uStack_64 = 0;
    if (in_ECX != 0) {
        uStack_38 = in_ECX;
        uStack_58 = (in_EDX - 1) * uStack_5c + in_ECX;
    }
    if (iStack_74 == 1) {
        uVar3 = 0;
    }
    else {
        uVar3 = *(arg_ch + 1) << 8;
    }
    uStack_50 = (*arg_ch | uVar3) & uStack_54;
    uVar3 = 0;
    uStack_7c = in_ECX;
    if (uStack_50 != 0) {
code_r0x00000dfb:
        if ((uStack_7c == 0) || (uStack_7c < uStack_58)) {
            uStack_68 = 1;
            arg_8h = arg_8h & 0x2140;
            uStack_48 = 0;
            uStack_7f = 0;
            bVar11 = false;
            bVar10 = false;
            uStack_60 = 0;
            uStack_44 = 0;
            uStack_6c = arg_8h;
            if (uStack_50 == 10) goto code_r0x00001445;
            if (uStack_50 == 0xd) goto code_r0x0000108a;
            puVar8 = arg_ch;
            if (uStack_50 == 0x25) {
code_r0x00000e6b:
code_r0x00000e6f:
                arg_ch = puVar8 + iStack_74;
                if (iStack_74 == 1) {
                    uVar3 = 0;
                }
                else {
                    uVar3 = *(arg_ch + 1) << 8;
                }
                uStack_50 = (*arg_ch | uVar3) & uStack_54;
                if (uStack_50 < 0x2e) {
                    if (uStack_50 == 0x2d) {
                        arg_8h = arg_8h | 1;
                        goto code_r0x00000ff7;
                    }
                    if (uStack_50 == 0) {
                        uStack_68 = 0;
                        arg_ch = puVar8;
                        goto code_r0x0000100a;
                    }
                    if (uStack_50 == 0x20) {
                        arg_8h = arg_8h | 4;
                        goto code_r0x00000ff7;
                    }
                    if (uStack_50 != 0x2a) {
                        if (uStack_50 == 0x2b) {
                            arg_8h = arg_8h | 2;
                        }
                        else {
                            if (uStack_50 != 0x2c) goto code_r0x0000100a;
                            arg_8h = arg_8h | 8;
                        }
                        goto code_r0x00000ff7;
                    }
                    if ((arg_8h & 0x800U) == 0) {
                        arg_8h = arg_8h | 0x200;
                        if (puStack_70 == NULL) {
                            puVar9 = arg_10h + 4;
                            arg_10h = puVar9;
                        }
                        else {
                            puVar9 = puStack_70 + 1;
                            puStack_70 = puVar9;
                        }
                        uStack_48 = puVar9[-1];
                        puVar8 = arg_ch;
                        uStack_6c = arg_8h;
                    }
                    else {
                        if (puStack_70 == NULL) {
                            puVar9 = arg_10h + 4;
                            arg_10h = puVar9;
                        }
                        else {
                            puVar9 = puStack_70 + 1;
                            puStack_70 = puVar9;
                        }
                        uStack_68 = puVar9[-1];
                        puVar8 = arg_ch;
                    }
                    goto code_r0x00000e6b;
                }
                if (uStack_50 == 0x2e) {
                    arg_8h = arg_8h | 0x800;
                    goto code_r0x00000ff7;
                }
                if (uStack_50 == 0x30) {
                    if ((arg_8h & 0x800U) == 0) {
                        arg_8h = arg_8h | 0x20;
                        uStack_6c = arg_8h;
                    }
                }
                else {
                    if (uStack_50 < 0x31) goto code_r0x0000100a;
                    if (0x39 < uStack_50) goto code_r0x00000f5b;
                }
                uVar3 = 0;
                uStack_60 = 0;
                if (0x2f < uStack_50) {
                    do {
                        if (0x39 < uStack_50) break;
                        arg_ch = arg_ch + iStack_74;
                        uVar3 = (uStack_50 - 0x30) + uVar3 * 10;
                        if (iStack_74 == 1) {
                            uVar7 = 0;
                        }
                        else {
                            uVar7 = *(arg_ch + 1) << 8;
                        }
                        uStack_50 = (*arg_ch | uVar7) & uStack_54;
                    } while (0x2f < uStack_50);
                    arg_8h = uStack_6c;
                    uStack_60 = uVar3;
                }
                puVar8 = arg_ch + -iStack_74;
                if ((arg_8h & 0x800U) == 0) {
                    arg_8h = arg_8h | 0x200;
                    uStack_48 = uStack_60;
                    uStack_6c = arg_8h;
                }
                else {
                    uStack_68 = uStack_60;
                }
                goto code_r0x00000e6f;
            }
            goto code_r0x00000e54;
        }
        goto code_r0x000017bb;
    }
code_r0x000017bf:
    if ((arg_8h & 0x2000U) == 0) {
        fcn.00000c5d(1,0,uStack_5c);
        uVar3 = uStack_7c - uStack_38;
    }
    return uVar3 / uStack_5c;
code_r0x00000f5b:
    if ((uStack_50 != 0x4c) && (uStack_50 != 0x6c)) goto code_r0x0000100a;
    arg_8h = arg_8h | 0x10;
code_r0x00000ff7:
    puVar8 = arg_ch;
    uStack_6c = arg_8h;
    goto code_r0x00000e6b;
code_r0x0000100a:
    uVar3 = arg_8h;
    puVar8 = arg_ch;
    if (uStack_50 < 0x68) {
        if (uStack_50 == 0x67) {
            if (puStack_70 == NULL) {
                piVar4 = *arg_10h;
                arg_10h = arg_10h + 4;
            }
            else {
                piVar4 = *puStack_70;
                puStack_70 = puStack_70 + 1;
            }
            if (piVar4 == NULL) {
                puStack_78 = 0xffd06c6c;
            }
            else {
                fcn.00001800(auStack_30,0x26,0,-0x2f9388,*piVar4);
code_r0x0000113a:
                puStack_78 = auStack_30;
            }
code_r0x0000113e:
            puVar8 = arg_ch;
        }
        else if (uStack_50 == 10) {
code_r0x00001445:
            puVar8 = arg_ch + iStack_74;
            puStack_78 = 0xffd06cdc;
            if (iStack_74 == 1) {
                uVar3 = 0;
            }
            else {
                uVar3 = puVar8[1] << 8;
            }
            uStack_50 = (*puVar8 | uVar3) & uStack_54;
            if (uStack_50 != 0xd) {
                puVar8 = arg_ch;
            }
        }
        else {
            if (uStack_50 != 0xd) {
                if (uStack_50 == 0x53) goto code_r0x000011da;
                if (uStack_50 == 0x58) goto code_r0x000012b5;
                if (uStack_50 == 0x61) goto code_r0x000011e4;
                if (uStack_50 == 99) {
                    if (puStack_70 == NULL) {
                        uVar1 = *arg_10h;
                        arg_10h = arg_10h + 4;
                    }
                    else {
                        uVar1 = *puStack_70;
                        puStack_70 = puStack_70 + 1;
                    }
                    uStack_40 = uVar1;
                    puStack_78 = &uStack_40;
                    goto code_r0x00000e58;
                }
                if (uStack_50 != 100) goto code_r0x00000e54;
                goto code_r0x000012cb;
            }
code_r0x0000108a:
            puVar8 = arg_ch + iStack_74;
            if (iStack_74 == 1) {
                uVar3 = 0;
            }
            else {
                uVar3 = puVar8[1] << 8;
            }
            uStack_50 = (*puVar8 | uVar3) & uStack_54;
            if (uStack_50 == 10) {
                puStack_78 = 0xffd06cdc;
                arg_ch = puVar8;
                goto code_r0x0000113e;
            }
            puStack_78 = 0xffd06ce0;
            puVar8 = arg_ch;
        }
    }
    else {
        if (uStack_50 == 0x70) {
            arg_8h = arg_8h & 0xffffffc9;
code_r0x000012b5:
            arg_8h = arg_8h | 0x20;
code_r0x000012b8:
            uVar3 = arg_8h | 0x80;
        }
        else {
            if (uStack_50 == 0x72) {
                if (puStack_70 == NULL) {
                    uVar3 = *arg_10h;
                    arg_10h = arg_10h + 4;
                }
                else {
                    uVar3 = *puStack_70;
                    puStack_70 = puStack_70 + 1;
                }
                puStack_78 = auStack_30;
                if (uVar3 < 0) {
                    if ((uVar3 & 0x7fffffff) - 1 < 0x21) {
                        puStack_78 = (uVar3 & 0x7fffffff) * 0x15 + -0x2f9295;
                        goto code_r0x00001286;
                    }
                }
                else if (uVar3 < 6) {
                    puStack_78 = uVar3 * 0x19 + -0x2f9318;
code_r0x00001286:
                    if (puStack_78 != auStack_30) goto code_r0x00001482;
                }
                fcn.00001800(auStack_30,0x26,0,-0x2f932c,uVar3);
                goto code_r0x00001482;
            }
            if (uStack_50 == 0x73) {
code_r0x000011da:
                arg_8h = arg_8h | 0x400;
                uStack_6c = arg_8h;
code_r0x000011e4:
                if (puStack_70 == NULL) {
                    puStack_78 = *arg_10h;
                    arg_10h = arg_10h + 4;
                }
                else {
                    puStack_78 = *puStack_70;
                    puStack_70 = puStack_70 + 1;
                }
                if (puStack_78 == NULL) {
                    arg_8h = arg_8h & 0xfffffbff;
                    puStack_78 = 0xffd06c5c;
                    uStack_6c = arg_8h;
                }
                uStack_68 = uStack_68 & -((arg_8h & 0x800U) != 0);
                goto code_r0x00001482;
            }
            if (uStack_50 == 0x74) {
                if (puStack_70 == NULL) {
                    uVar3 = *arg_10h;
                    arg_10h = arg_10h + 4;
                }
                else {
                    uVar3 = *puStack_70;
                    puStack_70 = puStack_70 + 1;
                }
                if (uVar3 != 0) {
                    fcn.00001800(auStack_30,0x26,0,-0x2f9348,*(uVar3 + 2));
                    goto code_r0x0000113a;
                }
                puStack_78 = 0xffd06cac;
                goto code_r0x0000113e;
            }
            if (uStack_50 != 0x75) {
                if (uStack_50 != 0x78) {
code_r0x00000e54:
                    puStack_78 = &uStack_50;
code_r0x00000e58:
                    arg_8h = arg_8h | 0x400;
                    puVar8 = arg_ch;
                    uStack_6c = arg_8h;
                    goto code_r0x00001482;
                }
                goto code_r0x000012b8;
            }
        }
        if (-1 < uVar3) {
            uVar3 = uVar3 & 0xfffffffd | 0x4000;
        }
code_r0x000012cb:
        if ((uVar3 & 0x10) == 0) {
            if (puStack_70 == NULL) {
                uVar7 = *arg_10h;
                arg_10h = arg_10h + 4;
            }
            else {
                uVar7 = *puStack_70;
                puStack_70 = puStack_70 + 1;
            }
            uVar6 = uVar7 >> 0x1f;
        }
        else if (puStack_70 == NULL) {
            uVar7 = *arg_10h;
            uVar6 = *(arg_10h + 4);
            arg_10h = arg_10h + 8;
        }
        else {
            uVar7 = *puStack_70;
            uVar6 = puStack_70[1];
            puStack_70 = puStack_70 + 2;
        }
        uStack_7f = (uVar3 & 4) << 3;
        if ((uVar3 & 2) != 0) {
            uStack_7f = 0x2b;
        }
        bVar11 = (uVar3 & 8) != 0;
        if (uVar3 < '\0') {
            bVar11 = false;
            if ((((uVar3 & 0x10) == 0) && (uVar6 < 1)) && (uVar6 < 0)) {
code_r0x00001398:
                uVar6 = 0;
            }
        }
        else {
            if ((uVar3 & 8) != 0) {
                uVar3 = uVar3 & 0xffffffdf;
                uStack_68 = 1;
            }
            if (((uVar6 < 1) && (uVar6 < 0)) && ((uVar3 & 0x4000) == 0)) {
                uStack_7f = 0x2d;
                bVar10 = uVar7 != 0;
                uVar7 = -uVar7;
                uVar6 = -(uVar6 + bVar10);
            }
            else if ((uVar3 & 0x4010) == 0x4000) goto code_r0x00001398;
        }
        iVar5 = fcn.00000c91(uVar7,uVar6);
        uStack_60 = iVar5 - auStack_30;
        if (uVar7 == 0 && uVar6 == 0) {
            uStack_60 = uStack_60 & -(uStack_68 != 0);
        }
        puStack_78 = auStack_30 + uStack_60;
        uStack_44 = uStack_60 % 3;
        if (uStack_44 != 0) {
            uStack_44 = 3 - uStack_44;
        }
        if ((bVar11) && (uStack_60 != 0)) {
            uStack_60 = uStack_60 + (uStack_60 - 1) / 3;
        }
        if (uStack_7f != 0) {
            uStack_60 = uStack_60 + 1;
            uStack_68 = uStack_68 + 1;
        }
        arg_8h = uVar3 | 0x1000;
        bVar10 = true;
        uStack_6c = arg_8h;
        if ((uVar3 & 0xa21) == 0x220) {
            uStack_68 = uStack_48;
        }
    }
code_r0x00001482:
    arg_ch = puVar8;
    uVar3 = arg_8h & 0x400;
    uStack_4c = uVar3;
    uStack_4c = (uVar3 != 0) + 1;
    uStack_3c = (-(uVar3 != 0) & 0xff00) + 0xff;
    if ((arg_8h & 0x1000U) == 0) {
        uStack_60 = 0;
        puVar9 = puStack_78;
        while ((((*puVar9 != '\0' || ((uVar3 != 0 && (*(puVar9 + 1) != '\0')))) &&
                ((uStack_60 < uStack_68 || ((arg_8h & 0x800U) == 0)))) &&
               ((uStack_3c & CONCAT11(*(puVar9 + 1),*puVar9)) != 0))) {
            uStack_60 = uStack_60 + 1;
            puVar9 = puVar9 + uStack_4c;
        }
    }
    else {
        uStack_4c = -uStack_4c;
    }
    if (uStack_68 < uStack_60) {
        uStack_68 = uStack_60;
    }
    uStack_34 = arg_8h & 0x201U;
    if ((arg_8h & 0x201U) == 0x200) {
        uStack_64 = uStack_64 + (uStack_48 - uStack_68) * uStack_5c;
        if (((arg_8h & 0x2000U) == 0) && (uStack_7c != 0)) {
            uStack_7c = fcn.00000c5d(uStack_48 - uStack_68,0x20,uStack_5c);
        }
    }
    if (bVar10) {
        if (((uStack_7f != 0) && (uStack_64 = uStack_64 + uStack_5c, (arg_8h & 0x2000U) == 0)) && (uStack_7c != 0)) {
            uStack_7c = fcn.00000c5d(1,uStack_7f,uStack_5c);
        }
        iVar5 = uStack_68 - uStack_60;
        uStack_64 = uStack_64 + iVar5 * uStack_5c;
        if (((arg_8h & 0x2000U) != 0) || (uStack_7c == 0)) goto code_r0x00001659;
        uVar3 = 0x30;
    }
    else {
        uStack_64 = uStack_64 + (uStack_68 - uStack_60) * uStack_5c;
        if (((arg_8h & 0x2000U) == 0) && (uStack_7c != 0)) {
            uStack_7c = fcn.00000c5d(uStack_68 - uStack_60,0x20,uStack_5c);
        }
        if (((uStack_7f == 0) || (uStack_64 = uStack_64 + uStack_5c, (arg_8h & 0x2000U) != 0)) || (uStack_7c == 0))
        goto code_r0x00001659;
        uVar3 = uStack_7f;
        iVar5 = 1;
    }
    uStack_7c = fcn.00000c5d(iVar5,uVar3,uStack_5c);
code_r0x00001659:
    uVar3 = arg_8h & 0x2000;
    if ((uStack_7f != 0) < uStack_60) {
        uVar7 = uStack_4c;
        puVar9 = puStack_78;
        puStack_78 = uStack_7f != 0;
        do {
            if ((*puVar9 == '\0') && ((uVar7 < 2 || (*(puVar9 + 1) == '\0')))) break;
            uStack_64 = uStack_64 + uStack_5c;
            if ((uVar3 == 0) && (uStack_7c != 0)) {
                uStack_7c = fcn.00000c5d(1,CONCAT11(*(puVar9 + 1),*puVar9) & uStack_3c,uStack_5c);
            }
            uVar6 = uStack_4c;
            puVar9 = puVar9 + uVar7;
            puVar2 = puStack_78 + 1;
            if (bVar11) {
                uStack_44 = uStack_44 + 1;
                if (uStack_44 != 3) goto code_r0x0000173a;
                puStack_78 = puStack_78 + 2;
                uStack_44 = 0;
                if (uStack_60 <= puStack_78) break;
                uStack_64 = uStack_64 + uStack_5c;
                uVar7 = uStack_4c;
                if ((uVar3 == 0) && (uStack_7c != 0)) {
                    uStack_7c = fcn.00000c5d(1,0x2c,uStack_5c);
                    uVar7 = uVar6;
                    puVar2 = puStack_78;
                    goto code_r0x0000173a;
                }
            }
            else {
code_r0x0000173a:
                puStack_78 = puVar2;
            }
        } while (puStack_78 < uStack_60);
        arg_8h = uStack_6c;
    }
    if (uStack_34 == 0x201) {
        uStack_64 = uStack_64 + (uStack_48 - uStack_68) * uStack_5c;
        if ((uVar3 == 0) && (uStack_7c != 0)) {
            uStack_7c = fcn.00000c5d(uStack_48 - uStack_68,0x20,uStack_5c);
        }
    }
    arg_ch = arg_ch + iStack_74;
    if (iStack_74 == 1) {
        uVar3 = 0;
    }
    else {
        uVar3 = *(arg_ch + 1) << 8;
    }
    uStack_50 = (*arg_ch | uVar3) & uStack_54;
    if (uStack_50 == 0) goto code_r0x000017bb;
    goto code_r0x00000dfb;
code_r0x000017bb:
    uVar3 = uStack_64;
    goto code_r0x000017bf;
}


/* fcn.0000181f @ 0x181f */

uint32_t __fastcall fcn.0000181f(int16_t *param_1)

{
    uint32_t uVar1;
    
    if ((param_1 != NULL) && (uVar1 = 0, *param_1 != 0)) {
        do {
            if (999999 < uVar1) {
                return 0xf4241;
            }
            uVar1 = uVar1 + 1;
        } while (param_1[uVar1] != 0);
        return uVar1;
    }
    return 0;
}


/* fcn.00001844 @ 0x1844 */

uint32_t __fastcall fcn.00001844(char *param_1)

{
    uint32_t uVar1;
    
    uVar1 = 0;
    if ((param_1 != NULL) && (*param_1 != '\0')) {
        while (uVar1 < 1000000) {
            uVar1 = uVar1 + 1;
            if (param_1[uVar1] == '\0') {
                return uVar1;
            }
        }
        uVar1 = 0xf4241;
    }
    return uVar1;
}


/* fcn.00001800 @ 0x1800 */

void __cdecl fcn.00001800(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h)

{
    fcn.00000cdb(arg_10h,arg_14h,&arg_18h);
    return;
}


/* fcn.00000c91 @ 0xc91 */

uchar * __cdecl fcn.00000c91(int32_t arg_8h,int32_t arg_ch)

{
    uint64_t uVar1;
    uchar *in_ECX;
    int32_t in_EDX;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = &var_ch;
    *in_ECX = 0;
    var_4h = in_EDX;
    do {
        uVar1 = arg_ch;
        arg_ch = arg_ch / var_4h;
        uVar1 = uVar1 % var_4h << 0x20 | arg_8h;
        arg_8h = uVar1 / var_4h;
        if (var_8h != 0) {
            *var_8h = uVar1 % var_4h;
        }
        in_ECX = in_ECX + 1;
        *in_ECX = *(var_ch + -0x2f8fc0);
    } while (arg_8h != 0 || arg_ch != 0);
    return in_ECX;
}


/* fcn.00000c5d @ 0xc5d */

uchar * __cdecl fcn.00000c5d(int arg_8h,int32_t arg_ch,int arg_10h)

{
    uchar *in_ECX;
    uchar *in_EDX;
    int iVar1;
    
    iVar1 = 0;
    if (0 < arg_8h) {
        do {
            if (in_EDX <= in_ECX) {
                return in_ECX;
            }
            *in_ECX = arg_ch;
            if (arg_10h != 1) {
                in_ECX[1] = arg_ch >> 8;
            }
            in_ECX = in_ECX + arg_10h;
            iVar1 = iVar1 + 1;
        } while (iVar1 < arg_8h);
    }
    return in_ECX;
}


/* fcn.00000c40 @ 0xc40 */

void fcn.00000c40(uint param_1,uint param_2,int32_t param_3)

{
    fcn.00000cdb(0,param_3,&stack0x00000010);
    return;
}


/* fcn.00002c08 @ 0x2c08 */

void __fastcall fcn.00002c08(int *param_1,uchar *param_2,uchar *param_3,int *param_4)

{
    uchar uVar1;
    int iVar2;
    int *piVar3;
    
    iVar2 = fcn.00000c00();
    piVar3 = *(iVar2 + 4);
    if ((*piVar3 != 0x554c4441) || (piVar3[1] != 0x545f4450)) {
        iVar2 = fcn.00000c1f();
        piVar3 = *(iVar2 + 0x24) + *(iVar2 + 0x1c);
    }
    if (piVar3 == NULL) {
        *param_1 = 0x1c200;
        *(param_1 + 5) = 0x108;
        *(param_1 + 1) = 1;
        *param_4 = -0x1fca000;
        *(param_1 + 7) = 0;
        *param_2 = 0;
        param_1[2] = 0;
        *param_3 = 1;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        *(param_1 + 6) = 2;
    }
    else {
        uVar1 = *(piVar3 + 0x61);
        *param_2 = piVar3[0x18];
        *param_3 = uVar1;
        *param_4 = piVar3[0x22];
        *(param_1 + 6) = *(piVar3 + 0x62);
        *param_1 = piVar3[0x19];
        *(param_1 + 1) = piVar3[0x1d];
        *(param_1 + 5) = *(piVar3 + 0x75);
        *(param_1 + 6) = *(piVar3 + 0x76);
        *(param_1 + 7) = *(piVar3 + 0x77);
        param_1[2] = piVar3[0x1e];
        param_1[3] = piVar3[0x1f];
        param_1[4] = piVar3[0x20];
        param_1[5] = piVar3[0x21];
    }
    return;
}


/* fcn.0000274d @ 0x274d */

//WARNING: Removing unreachable block (ram,0x000027b5)

uint __cdecl fcn.0000274d(int32_t arg_8h,int32_t arg_ch)

{
    int16_t iVar1;
    uint uVar2;
    ulong uVar3;
    int64_t iVar4;
    
    uVar3 = fcn.000021e5();
    iVar1 = fcn.00001d91(uVar3,uVar3 >> 0x20);
    if (iVar1 == -1) {
        uVar2 = 0x80000003;
    }
    else {
        iVar4 = fcn.0000202c();
        fcn.0000617e(iVar4);
        fcn.0000623a(iVar4);
        fcn.00001ec1(iVar4 + 0x10,iVar4 + 0x10 >> 0x20);
        fcn.00001ec1(iVar4 + 0x14,iVar4 + 0x14 >> 0x20);
        fcn.000061c2(iVar4);
        fcn.00001e04(iVar4 + 4,0);
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.000030e8 @ 0x30e8 */

//WARNING: Possible PIC construction at 0x00003034: Changing call to branch
//WARNING: Possible PIC construction at 0x0000305b: Changing call to branch
//WARNING: Possible PIC construction at 0x00003088: Changing call to branch
//WARNING: Removing unreachable block (ram,0x00003060)
//WARNING: Removing unreachable block (ram,0x000030b9)
//WARNING: Removing unreachable block (ram,0x00003066)
//WARNING: Removing unreachable block (ram,0x0000307d)
//WARNING: Removing unreachable block (ram,0x00003084)
//WARNING: Removing unreachable block (ram,0x00003039)
//WARNING: Removing unreachable block (ram,0x00003050)
//WARNING: Removing unreachable block (ram,0x00003057)
//WARNING: Removing unreachable block (ram,0x0000308d)
//WARNING: Removing unreachable block (ram,0x000030a2)
//WARNING: Removing unreachable block (ram,0x000030ad)

uint8_t __fastcall fcn.000030e8(uint8_t param_1,uint *param_2)

{
    ushort uVar1;
    char cVar2;
    uint8_t uVar3;
    int iVar4;
    uint32_t uVar5;
    int32_t arg_ch;
    uint32_t uVar6;
    ulong uVar7;
    uint64_t uVar8;
    int32_t iVar9;
    uint uStack_18;
    int iStack_14;
    int iStack_10;
    int iStack_c;
    
    uVar3 = 0;
    uVar6 = param_1;
    iStack_10 = 0;
    iStack_c = 0;
    uStack_18 = 0;
    iStack_14 = 0;
    if (param_1 < 7) {
        uVar7 = fcn.00001b2b();
        fcn.0000349b(uVar7);
        uVar8 = fcn.000021e5();
        arg_ch = uVar8 >> 0x20;
        iVar9 = uVar8;
        cVar2 = fcn.00006101();
        if (cVar2 == -0x7f) {
            fcn.00001f24(uVar8 + 0xa0);
        }
        cVar2 = *(param_2 + 6);
        if (cVar2 != '\0') {
            if (cVar2 == '\x01') {
                fcn.000035eb(uVar8);
                uVar7 = fcn.00001b2b();
                fcn.000034f0(uVar8,arg_ch,uVar7,uVar7 >> 0x20);
                if (*(param_2 + 0x1a) == '\x01') {
                    fcn.00003331(uVar8);
                }
            }
            else {
                if (1 < cVar2 - 2U) {
                    return cVar2 - 2U;
                }
                uVar1 = *(uVar6 * 2 + -0x2f8e4c);
                uVar7 = fcn.00001b2b();
                fcn.000033b6(iVar9,arg_ch,uVar1,uVar7);
                uVar8 = *(uVar6 * 8 + -0x2f942c);
            }
            cVar2 = fcn.00003544(uVar8,&stack0xffffffe8);
            if (cVar2 != '\0') {
                fcn.00002721(uStack_18,iStack_14);
                if ((*(param_2 + 6) == '\x02') || (*(param_2 + 6) == '\x03')) {
                    uVar5 = fcn.00002218();
                    fcn.00002238(uVar5 | 1 << (uVar6 & 0x1f));
                    fcn.000026f8();
                }
                else {
                    fcn.000030bd();
                }
                fcn.0000255e(*param_2,0,*(param_2 + 5),*(param_2 + 6),*(param_2 + 7));
                if ((*(param_2 + 6) == '\x01') && (*(param_2 + 0x1a) != '\x01')) {
                    if (iStack_10 == 0 && iStack_c == 0) {
                        fcn.0000617e(uVar8);
                        fcn.0000624e(uVar8);
                    }
                    else {
                        fcn.0000363a(uVar8);
                    }
                }
            }
            iStack_10 = 0x3022;
            fcn.00003c14();
            iVar4 = param_2[2];
            if (iVar4 == 0) {
                iStack_10 = 0x3030;
                iVar4 = fcn.00003c56();
            }
            iStack_10 = 0x3039;
            uStack_18 = 0;
            iStack_14 = iVar4;
            fcn.00003aab(0xff7fffff);
            return 0;
        }
        fcn.000030bd();
        fcn.0000617e(uVar8);
        fcn.0000624e(uVar8);
        uVar7 = fcn.00001b2b();
        uVar3 = fcn.00001b95(uVar7);
    }
    return uVar3;
}


/* fcn.0000245e @ 0x245e */

uint32_t __fastcall fcn.0000245e(uint param_1,int param_2,uint32_t param_3)

{
    int iVar1;
    char cVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    int iVar7;
    int iStack_20;
    int iStack_1c;
    uint uStack_18;
    int iStack_14;
    int iStack_10;
    uint uStack_c;
    int iStack_8;
    
    iStack_1c = param_2;
    cVar2 = fcn.000028d1(&iStack_20);
    if ((cVar2 != '\0') && (param_2 != 0)) {
        if (iStack_20 == 1) {
            cVar2 = *(iStack_10 + 0x7c);
        }
        else {
            cVar2 = *(iStack_10 + 0x1f);
        }
        if (cVar2 != -1) {
            uVar5 = 0;
            iVar7 = 1000000;
            if (param_3 == 0) {
                return 0;
            }
            do {
                iVar6 = iStack_10;
                while( true ) {
                    iVar1 = iStack_10;
                    uStack_18 = CONCAT31(uStack_18._1_3_,*(iStack_1c + uVar5));
                    if (iStack_20 == 1) {
                        uVar4 = *(iVar6 + 0x7c);
                    }
                    else {
                        uVar4 = *(iVar6 + 0x1f);
                    }
                    if ((uVar4 & 2) == 0) break;
                    fcn.00002913(iStack_10,uStack_c,uStack_18);
                    uVar5 = uVar5 + 1;
                    iVar6 = iVar1;
                    if (param_3 <= uVar5) {
                        return param_3;
                    }
                }
                if (iVar7 == 0) {
                    cVar2 = fcn.000028d1(&iStack_14);
                    if (cVar2 == '\0') {
                        return 0;
                    }
                    if (iStack_14 == 1) {
                        uVar3 = *(iStack_8 + 0x10);
                    }
                    else {
                        uVar3 = *(iStack_8 + 4);
                    }
                    if ((uVar3 >> 5 & 1) == 0) {
                        return 0;
                    }
                    fcn.00002b00();
                    iVar7 = 1000000;
                }
                fcn.00002396();
                iVar7 = iVar7 + -10;
            } while( true );
        }
    }
    return 0;
}


/* fcn.00002cd0 @ 0x2cd0 */

void __fastcall fcn.00002cd0(char *param_1,int *param_2,uchar *param_3,int *param_4)

{
    int iVar1;
    int *piVar2;
    
    iVar1 = fcn.00000c00();
    piVar2 = *(iVar1 + 4);
    if ((*piVar2 != 0x554c4441) || (piVar2[1] != 0x545f4450)) {
        iVar1 = fcn.00000c1f();
        piVar2 = *(iVar1 + 0x24) + *(iVar1 + 0x1c);
    }
    if (piVar2 == NULL) {
        *param_1 = '\0';
    }
    else {
        iVar1 = piVar2[0x24];
        *param_1 = iVar1;
        if (iVar1 != '\0') {
            *param_3 = *(piVar2 + 0x91);
            *param_4 = piVar2[0x2b];
            *(param_2 + 6) = *(piVar2 + 0x92);
            *param_2 = piVar2[0x25];
            *(param_2 + 1) = piVar2[0x26];
            *(param_2 + 5) = *(piVar2 + 0x99);
            *(param_2 + 6) = *(piVar2 + 0x9a);
            *(param_2 + 7) = *(piVar2 + 0x9b);
            param_2[2] = piVar2[0x27];
            param_2[3] = piVar2[0x28];
            param_2[4] = piVar2[0x29];
            param_2[5] = piVar2[0x2a];
        }
    }
    return;
}


/* fcn.00001cf7 @ 0x1cf7 */

void __cdecl fcn.00001cf7(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.00001c84(arg_8h,arg_ch);
    fcn.00006366();
    return;
}


/* fcn.00001c84 @ 0x1c84 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_4h

void __cdecl fcn.00001c84(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.0000630e(0,arg_ch & 1);
    return;
}


/* fcn.0000630e @ 0x630e */

ulong __fastcall fcn.0000630e(uint32_t param_1)

{
    uchar uVar1;
    uint uVar2;
    
    uVar2 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    uVar1 = in((param_1 & 3) + 0xcfc);
    out(0xcf8,uVar2);
    return CONCAT44(0xcf8,CONCAT31(uVar2 >> 8,uVar1));
}


/* fcn.00006366 @ 0x6366 */

ulong __fastcall fcn.00006366(uint32_t param_1,uchar param_2)

{
    uint uVar1;
    
    uVar1 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    out((param_1 & 3) + 0xcfc,param_2);
    out(0xcf8,uVar1);
    return CONCAT44(0xcf8,CONCAT31(uVar1 >> 8,param_2));
}


/* fcn.00001d91 @ 0x1d91 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_4h

void __cdecl fcn.00001d91(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.000063c0(0,arg_ch & 1);
    return;
}


/* fcn.000063c0 @ 0x63c0 */

ulong __fastcall fcn.000063c0(uint32_t param_1)

{
    ushort uVar1;
    uint uVar2;
    
    uVar2 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    uVar1 = in((param_1 & 2) + 0xcfc);
    out(0xcf8,uVar2);
    return CONCAT44(0xcf8,CONCAT22(uVar2 >> 0x10,uVar1));
}


/* fcn.00001e2d @ 0x1e2d */

void fcn.00001e2d(int32_t param_1,int32_t param_2)

{
    fcn.00001d91(param_1,param_2);
    fcn.00001dc7(param_1,param_2);
    return;
}


/* fcn.00001dc7 @ 0x1dc7 */

void __cdecl fcn.00001dc7(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.00006419();
    return;
}


/* fcn.00006419 @ 0x6419 */

ulong __fastcall fcn.00006419(uint32_t param_1,ushort param_2)

{
    uint uVar1;
    
    uVar1 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    out((param_1 & 2) + 0xcfc,param_2);
    out(0xcf8,uVar1);
    return CONCAT44(0xcf8,CONCAT22(uVar1 >> 0x10,param_2));
}


/* fcn.00001f4a @ 0x1f4a */

void fcn.00001f4a(int32_t param_1,int32_t param_2)

{
    fcn.00001e8b(param_1,param_2);
    fcn.00001ec1(param_1,param_2);
    return;
}


/* fcn.00001e8b @ 0x1e8b */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_4h

void __cdecl fcn.00001e8b(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.00006477(0,arg_ch & 1);
    return;
}


/* fcn.00006477 @ 0x6477 */

ulong __fastcall fcn.00006477(uint32_t param_1)

{
    uint uVar1;
    uint uVar2;
    
    uVar1 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    uVar2 = in(0xcfc);
    out(0xcf8,uVar1);
    return CONCAT44(0xcf8,uVar2);
}


/* fcn.00001e04 @ 0x1e04 */

void fcn.00001e04(int32_t param_1,int32_t param_2)

{
    fcn.00001d91(param_1,param_2);
    fcn.00001dc7(param_1,param_2);
    return;
}


/* fcn.0000613f @ 0x613f */

bool __fastcall fcn.0000613f(uint param_1)

{
    char cVar1;
    
    cVar1 = fcn.000060a3(param_1);
    return cVar1 == '\x03';
}


/* fcn.000060a3 @ 0x60a3 */

char fcn.000060a3(void)

{
    uint32_t uVar1;
    char cVar2;
    
    cVar2 = -1;
    if (*0xffd06bcc == -1) {
        uVar1 = fcn.00006092();
        uVar1 = uVar1 & 0xffe0;
        if (uVar1 == 0x5180) {
            cVar2 = '\x05';
        }
        else if ((uVar1 == 0x7a00) || (uVar1 == 0x7a80)) {
            cVar2 = '\x04';
        }
        *0xffd06bcc = cVar2;
    }
    return *0xffd06bcc;
}


/* fcn.00006150 @ 0x6150 */

uint __fastcall fcn.00006150(uint param_1)

{
    char cVar1;
    
    cVar1 = fcn.000060a3(param_1);
    if (cVar1 != '\x02') {
        cVar1 = fcn.000060a3(param_1);
        if (cVar1 != '\x05') {
            cVar1 = fcn.000060a3(param_1);
            if (cVar1 != '\x06') {
                cVar1 = fcn.000060a3(param_1);
                if (cVar1 != '\x03') {
                    return 0;
                }
            }
        }
    }
    return 1;
}


/* fcn.00001c10 @ 0x1c10 */

void __cdecl fcn.00001c10(int32_t arg_8h,int16_t arg_ch)

{
    if ((arg_8h != 0) && (arg_ch != 0)) {
        (**(*arg_8h + 0x38))(*arg_8h,arg_ch + 0x1c,0xfffffffe,0);
        if (arg_8h != 0) {
            if (arg_ch != 0) {
                (**(*arg_8h + 0x38))(*arg_8h,arg_ch + 0x10,0,0x1800);
            }
            if ((arg_8h != 0) && (arg_ch != 0)) {
                (**(*arg_8h + 0x38))(*arg_8h,arg_ch + 0x1c,0xffffffff,1);
            }
        }
    }
    return;
}


/* fcn.0000227b @ 0x227b */

uint fcn.0000227b(void)

{
    char cVar1;
    int16_t iVar2;
    uint32_t uVar3;
    
    cVar1 = fcn.000036c2();
    if (cVar1 == '\0') {
        *0xfd882778 = 0x402;
        iVar2 = fcn.00001d91(0xfc000,0);
        if (iVar2 != -1) {
            uVar3 = fcn.00001c84(0xfc054,0);
            if ((uVar3 & 1) != 0) {
                return 0x80000007;
            }
            fcn.00001d49(0xfc055,0);
            fcn.00001e58(0xfc050,0);
            fcn.00001e04(0xfc054,0);
            return 0;
        }
    }
    return 0x80000003;
}


/* fcn.00002218 @ 0x2218 */

uint __fastcall fcn.00002218(uint32_t param_1,uint32_t param_2)

{
    return *(((param_1 & 0xff | 0xfffffd00) << 8 | param_2 & 0xffff0000) << 8 | param_2 & 0xffff);
}


/* fcn.00002238 @ 0x2238 */

void __fastcall fcn.00002238(uint32_t param_1,uint32_t param_2,uint param_3)

{
    *(((param_1 & 0xff | 0xfffffd00) << 8 | param_2 & 0xffff0000) << 8 | param_2 & 0xffff) = param_3;
    return;
}


/* fcn.00001cba @ 0x1cba */

void __cdecl fcn.00001cba(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.00006366();
    return;
}


/* fcn.00006292 @ 0x6292 */

bool __fastcall fcn.00006292(uint8_t param_1)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00002218();
    return (1 << (param_1 & 0x1f) & uVar1) != 0;
}


/* fcn.00006123 @ 0x6123 */

uint __fastcall fcn.00006123(uint param_1)

{
    char cVar1;
    
    cVar1 = fcn.000060a3(param_1);
    if (cVar1 != '\x01') {
        cVar1 = fcn.000060a3(param_1);
        if (cVar1 != '\x04') {
            return 0;
        }
    }
    return 1;
}


/* fcn.00002174 @ 0x2174 */

uint __fastcall fcn.00002174(uint8_t param_1)

{
    if (param_1 < 7) {
        if ((param_1 == 0) || (param_1 == 1)) {
            return 0x1e;
        }
        if (param_1 == 2) {
            return 0x19;
        }
        if ((((param_1 == 3) || (param_1 == 4)) || (param_1 == 5)) || (param_1 == 6)) {
            return 0x11;
        }
    }
    return 0xff;
}


/* fcn.000021ab @ 0x21ab */

uint __fastcall fcn.000021ab(uint8_t param_1)

{
    if (6 < param_1) {
        return 0xff;
    }
    if (param_1 == 0) {
        return 0;
    }
    if (param_1 == 1) {
        return 1;
    }
    if (param_1 != 2) {
        if (param_1 == 3) {
            return 0;
        }
        if (param_1 == 4) {
            return 1;
        }
        if (param_1 != 5) {
            if (param_1 != 6) {
                return 0xff;
            }
            return 3;
        }
    }
    return 2;
}


/* fcn.000036c2 @ 0x36c2 */

uint32_t fcn.000036c2(void)

{
    char cVar1;
    uint32_t uVar2;
    
    cVar1 = fcn.000060f2();
    if (cVar1 != '\0') {
        uVar2 = fcn.00002218();
        return uVar2 >> 0x17 & 1;
    }
    uVar2 = fcn.00002218();
    return uVar2 >> 0x1f;
}


/* fcn.000060f2 @ 0x60f2 */

bool fcn.000060f2(void)

{
    char cVar1;
    
    cVar1 = fcn.000060a3();
    return cVar1 == '\x04';
}


/* fcn.00001d49 @ 0x1d49 */

void fcn.00001d49(int32_t param_1,int32_t param_2)

{
    fcn.00001c84(param_1,param_2);
    fcn.00001cba(param_1,param_2);
    return;
}


/* fcn.00001e58 @ 0x1e58 */

void fcn.00001e58(int32_t param_1,int32_t param_2)

{
    fcn.00001d91(param_1,param_2);
    fcn.00001dc7(param_1,param_2);
    return;
}


/* fcn.000023d5 @ 0x23d5 */

//WARNING: Removing unreachable block (ram,0x000023ed)
//WARNING: Removing unreachable block (ram,0x0000240b)

uint __cdecl fcn.000023d5(int32_t arg_8h,int32_t arg_ch)

{
    uint *puVar1;
    uint uVar2;
    uint *in_EDX;
    uint uVar3;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    puVar1 = cpuid(0x15);
    uVar3 = puVar1[1];
    uVar2 = puVar1[3];
    if (in_EDX != NULL) {
        *in_EDX = *puVar1;
    }
    if (arg_8h != 0) {
        *arg_8h = uVar3;
    }
    if (arg_ch != 0) {
        *arg_ch = uVar2;
    }
    return 0x15;
}


/* fcn.000022fe @ 0x22fe */

ulong fcn.000022fe(void)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint uVar3;
    int32_t var_18h;
    int var_14h;
    int32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    
    fcn.000023d5(&var_8h,&var_ch);
    if ((var_4h == 0) || (var_8h == 0)) {
        uVar3 = 0;
        uVar2 = 0;
    }
    else {
        var_18h = 24000000;
        if (var_ch != 0) {
            var_18h = var_ch;
        }
        uVar1 = var_8h * var_18h + (var_4h >> 1);
        var_14h = uVar1 >> 0x20;
        uVar2 = var_14h / var_4h;
        uVar3 = (var_14h % var_4h << 0x20 | uVar1 & 0xffffffff) / var_4h;
    }
    return CONCAT44(uVar2,uVar3);
}


/* fcn.00002430 @ 0x2430 */

ulong __cdecl fcn.00002430(uint noname_0,uint noname_1,int32_t arg_10h,int arg_14h)

{
    int32_t var_8h;
    int var_4h;
    
    return CONCAT44((arg_10h * 10 >> 0x20) + arg_14h * 10,arg_10h * 10);
}


/* fcn.00002375 @ 0x2375 */

void fcn.00002375(uint32_t param_1,int param_2)

{
    ulong uVar1;
    ulong uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    uVar1 = rdtsc();
    uVar4 = (uVar1 >> 0x20) + param_2 + CARRY4(uVar1,param_1);
    do {
        uVar2 = rdtsc();
        uVar3 = uVar2 >> 0x20;
        if (uVar4 < uVar3) {
            return;
        }
    } while ((uVar3 < uVar4) || (uVar2 <= uVar1 + param_1));
    return;
}


/* fcn.00001863 @ 0x1863 */

ulong __cdecl fcn.00001863(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    uint64_t uVar1;
    
    uVar1 = arg_ch % arg_10h << 0x20 | arg_8h;
    if (arg_14h != 0) {
        *arg_14h = uVar1 % arg_10h;
    }
    return CONCAT44(arg_ch / arg_10h,uVar1 / arg_10h);
}


/* fcn.00000b50 @ 0xb50 */

uint64_t fcn.00000b50(uint32_t param_1,uint32_t param_2,uint32_t param_3,int *param_4,int *param_5)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int *piVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    bool bVar8;
    
    if (param_4 == NULL) {
        if (param_5 != NULL) {
            param_5[1] = 0;
            param_4 = param_5;
        }
        uVar1 = param_2 % param_3 << 0x20 | param_1;
        if (param_4 != NULL) {
            *param_4 = uVar1 % param_3;
        }
        return CONCAT44(param_2 / param_3,uVar1 / param_3);
    }
    uVar3 = param_1;
    piVar4 = param_4;
    uVar5 = param_2;
    uVar7 = param_3;
    do {
        uVar6 = uVar5 & 1;
        uVar5 = uVar5 >> 1;
        uVar3 = uVar3 >> 1 | (uVar6 != 0) << 0x1f;
        uVar7 = uVar7 >> 1 | piVar4 << 0x1f;
        piVar4 = piVar4 >> 1;
    } while (piVar4 != NULL);
    uVar1 = CONCAT44(uVar5,uVar3) / uVar7;
    uVar3 = uVar1;
    iVar2 = (uVar1 & 0xffffffff) * param_3;
    uVar7 = iVar2 >> 0x20;
    uVar5 = iVar2;
    uVar6 = uVar7 + param_4 * uVar3;
    if ((CARRY4(uVar7,param_4 * uVar3)) || ((param_2 <= uVar6 && ((param_2 < uVar6 || (param_1 < uVar5)))))) {
        uVar3 = uVar3 - 1;
        if (param_5 == NULL) goto code_r0x00000bc1;
        bVar8 = uVar5 < param_3;
        uVar5 = uVar5 - param_3;
        uVar6 = (uVar6 - param_4) - bVar8;
    }
    if (param_5 != NULL) {
        *param_5 = param_1 - uVar5;
        param_5[1] = (param_2 - uVar6) - (param_1 < uVar5);
    }
code_r0x00000bc1:
    return uVar3;
}


/* fcn.000028d1 @ 0x28d1 */

bool __fastcall fcn.000028d1(uint param_1,int *param_2,uint32_t *param_3)

{
    char cVar1;
    
    cVar1 = fcn.00006292();
    if (cVar1 == '\0') {
        cVar1 = fcn.00002856();
    }
    else {
        cVar1 = fcn.000027f1(param_2);
    }
    if (cVar1 != '\0') {
        *param_3 = *(*param_2 + 0xfc) == 0x44570110;
    }
    return cVar1 != '\0';
}


/* fcn.00002913 @ 0x2913 */

void __fastcall fcn.00002913(int param_1,int param_2,int param_3,uint param_4,uint8_t param_5)

{
    if (param_1 == 1) {
        *(param_3 + param_2 * 4) = param_5;
        return;
    }
    *(param_3 + param_2) = param_5;
    return;
}


/* fcn.00002b00 @ 0x2b00 */

void __fastcall fcn.00002b00(uint param_1,char param_2)

{
    char cVar1;
    uint8_t uVar2;
    int32_t var_10h;
    int32_t var_ch;
    uint32_t var_4h;
    
    cVar1 = fcn.000028d1(&var_4h);
    if (cVar1 != '\0') {
        if (var_4h == 1) {
            uVar2 = *(var_10h + 0x10);
        }
        else {
            uVar2 = *(var_10h + 4);
        }
        fcn.00002913(var_10h,var_ch,(param_2 != '\0') << 5 | uVar2 & 0xdf | 2);
    }
    return;
}


/* fcn.00002396 @ 0x2396 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_4h

uint __fastcall fcn.00002396(uint param_1)

{
    uint noname_0;
    uint32_t uVar1;
    ulong uVar2;
    uint64_t uVar3;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar2 = fcn.000022fe(param_1,param_1);
    uVar3 = fcn.00002430(noname_0,noname_0,uVar2,uVar2 >> 0x20);
    uVar1 = uVar3 >> 0x20;
    fcn.00002375((uVar1 % 1000000 << 0x20 | uVar3 & 0xffffffff) / 1000000,uVar1 / 1000000);
    return 10;
}


/* fcn.0000292d @ 0x292d */

void __cdecl fcn.0000292d(int32_t arg_8h,int arg_ch)

{
    char cVar1;
    uchar uVar2;
    uint8_t uVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_14h;
    int32_t var_ch;
    int32_t var_8h;
    uint32_t var_4h;
    
    iVar4 = 0x200;
    cVar1 = fcn.000028d1(&var_4h);
    if (cVar1 != '\0') {
        if (var_4h == 0) {
            iVar4 = 0x80;
        }
        var_8h = 1;
        if (arg_8h == 0 && arg_ch == 0) {
            arg_8h = 0x1c200;
            arg_ch = 0;
        }
        if ((arg_ch == 0) && (arg_8h < 0x5b8d81)) {
            uVar5 = 0xffff04b5;
            if (arg_8h < 0x1c200) {
                iVar6 = fcn.00002415(0x1c2000,0,arg_8h << 4,arg_8h >> 0x1c);
                if (iVar6 == 0) {
                    iVar6 = 1;
                }
                var_8h = iVar6;
                if (iVar6 >> 0x20 != 0) {
                    return;
                }
                if (0xffff < var_8h) {
                    return;
                }
            }
            if (0x1c200 < arg_8h) {
                uVar5 = fcn.00002415(arg_8h * 0x7fff0,100000000,0);
                uVar5 = (uVar5 & 0xffff) * 2 | 0xffff0001;
            }
            *(iVar4 + var_28h) = uVar5;
            *(iVar4 + var_28h) = *(iVar4 + var_28h) & 0x7fffffff;
            if (var_4h == 1) {
                uVar2 = *(var_28h + 0xc);
            }
            else {
                uVar2 = *(var_28h + 3);
            }
            var_1ch._1_3_ = var_28h >> 8;
            var_1ch = CONCAT31(var_1ch._1_3_,uVar2) | 0x80;
            fcn.00002913(var_28h,var_24h,var_1ch);
            fcn.00002913(var_28h,var_24h,(var_8h & 0xff00U) >> 8);
            fcn.00002913(var_28h,var_24h,var_8h);
            if (var_4h == 1) {
                uVar3 = *(var_28h + 0xc);
            }
            else {
                uVar3 = *(var_28h + 3);
            }
            fcn.00002913(var_28h,var_24h,uVar3 & 0x7f);
        }
    }
    return;
}


/* fcn.0000202c @ 0x202c */

int __fastcall fcn.0000202c(uint8_t param_1)

{
    char cVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    
    cVar1 = fcn.00006292();
    if (cVar1 != '\0') {
        return *(param_1 * 8 + -0x2f942c);
    }
    uVar2 = fcn.00002174();
    uVar3 = fcn.000021ab();
    return ((uVar2 & 0x1f) << 3 | uVar3 & 7) << 0xc;
}


/* fcn.00001f73 @ 0x1f73 */

//WARNING: Removing unreachable block (ram,0x00001fac)
//WARNING: Removing unreachable block (ram,0x00001fec)

uint64_t __cdecl fcn.00001f73(int32_t arg_8h,uint32_t arg_ch)

{
    uint uVar1;
    uint uVar2;
    
    if ((arg_ch == 0) && (arg_8h < 0xfe020000)) {
        uVar1 = fcn.00001e8b(arg_8h + 0x14,0);
        uVar2 = fcn.00001e8b(arg_8h + 0x10,0);
    }
    else {
        uVar2 = *(arg_8h + 0x10);
        uVar1 = *(arg_8h + 0x14);
    }
    return CONCAT44(uVar1,uVar2) & 0xfffffffffffff000;
}


/* fcn.000021e5 @ 0x21e5 */

int fcn.000021e5(void)

{
    uint8_t uVar1;
    uint8_t uVar2;
    
    uVar1 = fcn.00002174();
    uVar2 = fcn.000021ab();
    return ((uVar1 & 0x1f) << 3 | uVar2 & 7) << 0xc;
}


/* fcn.0000617e @ 0x617e */

uchar __thiscall fcn.0000617e(uint param_1,uint32_t param_2,int param_3)

{
    uchar uVar1;
    
    if ((param_3 == 0) && (param_2 < 0xfe020000)) {
        uVar1 = fcn.00001efe(param_2 + 0x84,0xffffff7b < param_2,param_1);
        return uVar1;
    }
    *(param_2 + 0x84) = *(param_2 + 0x84) | 3;
    return *(param_2 + 0x84);
}


/* fcn.0000623a @ 0x623a */

void __thiscall fcn.0000623a(uint param_1,int param_2)

{
    fcn.00001e2d(param_2 + 4,0,param_1);
    return;
}


/* fcn.000061c2 @ 0x61c2 */

uint __thiscall fcn.000061c2(uint param_1,uint32_t param_2,int param_3)

{
    uint uVar1;
    
    if ((param_3 == 0) && (param_2 < 0xfe020000)) {
        uVar1 = fcn.00001f24(param_2 + 0x84,0,param_1);
        return uVar1;
    }
    *(param_2 + 0x84) = *(param_2 + 0x84) & 0xfffffffc;
    return *(param_2 + 0x84);
}


/* fcn.00002721 @ 0x2721 */

void fcn.00002721(int param_1)

{
    uint32_t uVar1;
    
    uVar1 = (*(param_1 + 0xfc) != 0x44570110) - 1 & 0x183;
    *(uVar1 + 0x81 + param_1) = *(uVar1 + 0x81 + param_1) | 7;
    return;
}


/* fcn.00001d6d @ 0x1d6d */

void fcn.00001d6d(int32_t param_1,int32_t param_2)

{
    fcn.00001c84(param_1,param_2);
    fcn.00001cba(param_1,param_2);
    return;
}


/* fcn.000027f1 @ 0x27f1 */

uint __cdecl fcn.000027f1(int32_t arg_8h)

{
    int arg_8h_00;
    uint32_t uVar1;
    unkbyte3 Var3;
    unkbyte3 extraout_EAX;
    uint uVar2;
    uint32_t in_ECX;
    uint32_t uVar4;
    ulong uVar5;
    
    arg_8h_00 = *((in_ECX & 0xff) * 8 + -0x2f942c);
    uVar5 = fcn.00001f73(arg_8h_00,0);
    uVar4 = uVar5 >> 0x20;
    *arg_8h = uVar5;
    if ((uVar5 != 0xfffff000) || (uVar2 = 0xfffff000, uVar4 != 0xffffffff)) {
        uVar1 = uVar5 | uVar4;
        uVar2 = 0;
        if (uVar1 != 0) {
            Var3 = uVar1 >> 8;
            if ((*(arg_8h_00 + 0x84) & 3) != 0) {
                uVar2 = *arg_8h;
                *(arg_8h_00 + 0x84) = *(arg_8h_00 + 0x84) & 0xfc;
                fcn.00002721(uVar2,uVar4);
                Var3 = extraout_EAX;
            }
            uVar2 = CONCAT31(Var3,1);
        }
    }
    return uVar2;
}


/* fcn.00002856 @ 0x2856 */

uint fcn.00002856(int64_t *param_1)

{
    int arg_8h;
    uint32_t uVar1;
    uint uVar2;
    int64_t iVar3;
    
    arg_8h = fcn.000021e5();
    iVar3 = fcn.00001f73(arg_8h,0);
    *param_1 = iVar3;
    if ((iVar3 == -0x1000) || (iVar3 == 0)) {
        uVar2 = 0;
    }
    else {
        uVar1 = fcn.00001c84(arg_8h + 4,0);
        if ((uVar1 & 2) == 0) {
            fcn.00001cf7(arg_8h + 4,0);
            fcn.00001d6d(arg_8h + 0x84,0);
            fcn.00001c84(arg_8h + 0x84,0);
            fcn.00002721(*param_1,*(param_1 + 4));
        }
        uVar2 = 1;
    }
    return uVar2;
}


/* fcn.00002415 @ 0x2415 */

void fcn.00002415(uint param_1,uint param_2,uint param_3,uint param_4)

{
    fcn.00000b50(param_1,param_2,param_3,param_4,0);
    return;
}


/* fcn.00000c00 @ 0xc00 */

void fcn.00000c00(void)

{
    return;
}


/* fcn.00000c1f @ 0xc1f */

int fcn.00000c1f(void)

{
    return 0xc1f - *0xc10;
}


/* fcn.00003739 @ 0x3739 */

uint fcn.00003739(void)

{
    int iVar1;
    uint uVar2;
    
    iVar1 = fcn.00003975();
    if (iVar1 == 0) {
        uVar2 = 0x80000002;
    }
    else {
        iVar1 = fcn.0000392b();
        if ((-1 < iVar1) && (iVar1 = fcn.00003a2a(), -1 < iVar1)) {
            return 0;
        }
        uVar2 = 0x80000003;
    }
    return uVar2;
}


/* fcn.00003975 @ 0x3975 */

uint32_t __fastcall fcn.00003975(uint32_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar1 = fcn.00003c56();
    if (uVar1 == 0) {
        uVar1 = param_2;
    }
    uVar2 = (uVar1 >> 5 & 0x70000 | uVar1 & 0xfe00) >> 9;
    if ((uVar2 != (param_1 & 0xffff)) || (param_1 >> 0x10 < uVar2)) {
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.0000574f @ 0x574f */

uint __fastcall fcn.0000574f(uint param_1,int param_2)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.0000379f();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        cVar1 = fcn.0000377f();
        if (cVar1 == '\0') {
            uVar2 = 0x80000003;
        }
        else {
            fcn.000037fe(0xff7fffff,param_2 << 0x17);
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.00001ac1 @ 0x1ac1 */

ulong __fastcall fcn.00001ac1(uint32_t param_1)

{
    char cVar1;
    uint uVar2;
    int16_t var_4h;
    
    cVar1 = fcn.0000613f();
    if (cVar1 == '\0') {
        cVar1 = fcn.00006150();
        if (cVar1 == '\0') {
            if (param_1 < 7) {
                uVar2 = *(param_1 * 8 + -0x2f8f9c);
                _var_4h = *(param_1 * 8 + -0x2f8f98);
                goto code_r0x00001b26;
            }
        }
        else if (param_1 < 7) {
            uVar2 = *(param_1 * 8 + -0x2f8ef4);
            _var_4h = *(param_1 * 8 + -0x2f8ef0);
            goto code_r0x00001b26;
        }
    }
    else if (param_1 < 7) {
        uVar2 = *(param_1 * 8 + -0x2f8f64);
        _var_4h = *(param_1 * 8 + -0x2f8f60);
        goto code_r0x00001b26;
    }
    uVar2 = 0;
    _var_4h = _var_4h & 0xffff0000;
code_r0x00001b26:
    return CONCAT44(_var_4h,uVar2);
}


/* fcn.0000349b @ 0x349b */

void fcn.0000349b(int *param_1,uint16_t param_2)

{
    fcn.0000225c(0xfffffffc,0);
    if ((param_1 != NULL) && (param_2 != 0)) {
        (**(*param_1 + 0x38))(*param_1,param_2 + 0x38,0xfffffffe,0);
    }
    return;
}


/* fcn.0000225c @ 0x225c */

uint fcn.0000225c(uint32_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    uint32_t extraout_EDX;
    
    uVar1 = fcn.00002218();
    fcn.00002238(uVar1 & param_1 | param_2);
    return *((extraout_EDX & 0xffff0000 | 0xfffdcb00) << 8 | extraout_EDX & 0xffff);
}


/* fcn.00002138 @ 0x2138 */

int fcn.00002138(void)

{
    uint8_t uVar1;
    uint8_t uVar2;
    
    uVar1 = fcn.0000204e();
    uVar2 = fcn.000020be();
    return (uVar2 & 7 | (uVar1 & 0x1f) << 3) << 0xc;
}


/* fcn.00001efe @ 0x1efe */

void fcn.00001efe(int32_t param_1,int32_t param_2)

{
    fcn.00001e8b(param_1,param_2);
    fcn.00001ec1(param_1,param_2);
    return;
}


/* fcn.000033b6 @ 0x33b6 */

void fcn.000033b6(uint32_t param_1,int param_2,uint param_3,int *param_4,uint32_t param_5)

{
    fcn.0000617e(param_1,param_2);
    fcn.0000623a(param_1,param_2);
    fcn.0000225c(0xffffff7f,0);
    if ((param_4 != NULL) && (param_5 != 0)) {
        (**(*param_4 + 0x38))(*param_4,(param_5 & 0xffff) + 0x1c,0xfff3ffff,0);
    }
    fcn.00001ec1(param_1 + 0x10,param_2 + (0xffffffef < param_1));
    fcn.00001ec1(param_1 + 0x14,param_2 + (0xffffffeb < param_1));
    fcn.00001ec1(param_1 + 0x18,param_2 + (0xffffffe7 < param_1));
    fcn.00001ec1(param_1 + 0x1c,param_2 + (0xffffffe3 < param_1));
    fcn.000061c2(param_1,param_2);
    fcn.00001e04(param_1 + 4,0);
    fcn.0000225c(0xffffffff,3);
    fcn.00001bbf(param_4,param_5);
    return;
}


/* fcn.00001bbf @ 0x1bbf */

void fcn.00001bbf(int *param_1,uint16_t param_2)

{
    if ((param_1 != NULL) && (param_2 != 0)) {
        (**(*param_1 + 0x38))(*param_1,param_2 + 0x38,0xffffffff,1);
    }
    return;
}


/* fcn.000035eb @ 0x35eb */

void __thiscall fcn.000035eb(int64_t *param_1,int param_2,uint32_t param_3)

{
    uchar uVar1;
    int64_t iVar2;
    
    iVar2 = fcn.00001f73(param_2,param_3);
    *param_1 = iVar2;
    if (iVar2 != 0) {
        uVar1 = fcn.00001c84(param_2 + 0x84,0);
        *(param_1 + 9) = uVar1;
        uVar1 = fcn.00001c84(param_2 + 4,0);
        *(param_1 + 1) = uVar1;
        *(param_1 + 10) = *(*param_1 + 0x204);
    }
    return;
}


/* fcn.000034f0 @ 0x34f0 */

void __cdecl fcn.000034f0(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    fcn.00001ec1(arg_8h + 0x18,arg_ch + (0xffffffe7 < arg_8h));
    fcn.00001ec1(arg_8h + 0x1c,arg_ch + (0xffffffe3 < arg_8h));
    fcn.0000349b(arg_10h,arg_14h);
    fcn.000034d0(arg_10h,arg_14h);
    return;
}


/* fcn.000034d0 @ 0x34d0 */

void fcn.000034d0(uint param_1,uint param_2)

{
    fcn.0000225c(0xffffffff,0x80);
    fcn.00001be6(param_1,param_2);
    return;
}


/* fcn.00001be6 @ 0x1be6 */

void fcn.00001be6(int *param_1,uint16_t param_2)

{
    if ((param_1 != NULL) && (param_2 != 0)) {
        (**(*param_1 + 0x38))(*param_1,param_2 + 0x1c,0xffffffff,0xc0000);
    }
    return;
}


/* fcn.00003544 @ 0x3544 */

uint32_t __fastcall fcn.00003544(char param_1,char param_2,uint32_t param_3,uint32_t param_4,int64_t *param_5)

{
    uint32_t uVar1;
    int64_t iVar2;
    
    if (param_2 == '\0') {
        uVar1 = fcn.00001e8b(param_3,param_4);
        if (uVar1 == 0xffffffff) goto code_r0x00003564;
        if (param_1 == '\x01') {
            fcn.00001e2d(param_3 + 4,param_4 + (0xfffffffb < param_3));
            fcn.00001ec1(param_3 + 0x10,param_4 + (0xffffffef < param_3));
            fcn.00001ec1(param_3 + 0x14,param_4 + (0xffffffeb < param_3));
        }
        fcn.00006204(param_3,param_4);
    }
    fcn.000061c2(param_3,param_4);
    iVar2 = fcn.00001f73(param_3,param_4);
    *param_5 = iVar2;
    uVar1 = 0;
    if (iVar2 != 0) {
        uVar1 = *(*param_5 + 0x204);
        *(*param_5 + 0x204) = uVar1 | 7;
        return CONCAT31(uVar1 >> 8,1);
    }
code_r0x00003564:
    return uVar1 & 0xffffff00;
}


/* fcn.00006522 @ 0x6522 */

void __cdecl fcn.00006522(int32_t arg_8h,uint noname_1,int8_t arg_10h,int8_t arg_14h,int8_t arg_18h)

{
    uint32_t uVar1;
    uint8_t in_CL;
    uint32_t in_EDX;
    uint8_t uVar2;
    uint32_t uVar3;
    int8_t var_1h;
    
    uVar1 = (in_EDX & 0xff ^ *(arg_8h + 0x224)) & 1 ^ *(arg_8h + 0x224);
    uVar3 = arg_18h << 8;
    do {
        uVar2 = uVar3;
        if ((arg_14h & 1 << (uVar2 & 0x1f)) != 0) {
            if (uVar2 == 0) {
                uVar1 = uVar1 ^ ((uVar3 >> 8) << 0xc ^ uVar1) & 0x1000;
            }
            if (uVar2 == 1) {
                uVar1 = uVar1 & 0xffffdfff;
            }
            if (uVar2 == 2) {
                uVar1 = uVar1 & 0xffffbfff;
            }
            if (uVar2 == 3) {
                uVar1 = uVar1 & 0xffff7fff;
            }
        }
        uVar3 = CONCAT31(uVar3 >> 8,uVar2 + 1);
    } while (uVar2 + 1 < 2);
    *(arg_8h + 0x224) = ((in_CL & 3) << 7 | arg_10h & 1) * 2 | uVar1 & 0xfffffcfd;
    return;
}


/* fcn.0000624e @ 0x624e */

void __thiscall fcn.0000624e(char param_1,uint32_t param_2,int param_3)

{
    fcn.0000623a(param_2,param_3);
    if (param_1 == '\x01') {
        fcn.00001ec1(param_2 + 0x10,param_3 + (0xffffffef < param_2));
        fcn.00001ec1(param_2 + 0x14,param_3 + (0xffffffeb < param_2));
    }
    return;
}


/* fcn.0000363a @ 0x363a */

//WARNING: Removing unreachable block (ram,0x00003685)

void __cdecl fcn.0000363a(int32_t arg_8h)

{
    int *in_ECX;
    int32_t var_8h;
    int32_t var_4h;
    
    if (*in_ECX != 0 || in_ECX[1] != 0) {
        *(*in_ECX + 0x204) = *(in_ECX + 10);
        fcn.00001ec1(arg_8h + 0x10,0);
        fcn.00001ec1(arg_8h + 0x14,0);
        fcn.00001cba(arg_8h + 0x84,0);
        fcn.00001cba(arg_8h + 4,0);
    }
    return;
}


/* fcn.00001b95 @ 0x1b95 */

void fcn.00001b95(int *param_1,uint16_t param_2)

{
    if ((param_1 != NULL) && (param_2 != 0)) {
        (**(*param_1 + 0x38))(*param_1,param_2 + 0x1c,0xffffffff,0x100);
    }
    return;
}


/* fcn.00003c14 @ 0x3c14 */

uint __fastcall fcn.00003c14(uint param_1)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00003975(param_1);
    if (uVar1 == 0) {
        return 0x80000002;
    }
    fcn.00003aab(0xffffe3ff,(uVar1 >> 0x1c & 7) << 10);
    return 0;
}


/* fcn.00003aab @ 0x3aab */

//WARNING: Removing unreachable block (ram,0x00003b4e)
//WARNING: Removing unreachable block (ram,0x00003beb)

void __thiscall fcn.00003aab(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uStack_c;
    uint32_t uStack_8;
    uint32_t uStack_4;
    
    uStack_c = 0;
    if (((~param_2 | param_3) & 0xfffffffe) != 0) {
        uVar2 = param_1 & 0x1ff;
        uStack_4 = param_1 >> 0x10 & 0xf1f;
        iVar1 = fcn.000055cd(uVar2 >> 5,&uStack_8);
        if (-1 < iVar1) {
            uStack_c = uStack_8 >> (uVar2 & 0x1f) & 1;
            if (uStack_c != 0) {
                fcn.000056a5(uVar2 >> 5,~(1 << (uVar2 & 0x1f)),0);
            }
        }
    }
    if (((~param_2 | param_3) & 1) != 0) {
        fcn.000058bd();
    }
    fcn.00003713();
    fcn.000054fe();
    fcn.00005552(param_2,param_3);
    if (uStack_c != 0) {
        fcn.000056a5((param_1 & 0x1ff) >> 5,0xffffffff,1 << (param_1 & 0x1ff & 0x1f));
    }
    return;
}


/* fcn.00003c56 @ 0x3c56 */

//WARNING: Control flow encountered bad instruction data

uint __fastcall fcn.00003c56(uint32_t param_1)

{
    char cVar1;
    
    cVar1 = fcn.000060e1();
    if ((cVar1 == '\0') && (cVar1 = fcn.0000613f(), cVar1 == '\0')) {
        cVar1 = fcn.00006150();
        if (cVar1 == '\0') {
            if (0xfc00fc < param_1) {
                if (0x1710164 < param_1) {
                    if (0x1de01c1 < param_1) {
                        switch(param_1) {
                        case 0x1de01c2:
                        case 0x1de01c3:
                        case 0x1de01c4:
                        case 0x1de01c5:
                        case 0x1de01c6:
                        case 0x1de01c7:
                        case 0x1de01c8:
                        case 0x1de01c9:
                        case 0x1de01ca:
                        case 0x1de01cb:
                        case 0x1de01cc:
                        case 0x1de01cd:
                        case 0x1de01ce:
    //WARNING: Bad instruction - Truncating control flow here
                            halt_baddata();
                        default:
                            return 0;
                        }
                    }
                    if (param_1 == 0x1de01c1) {
                        return 0x18628207;
                    }
                    if (0x1be01a1 < param_1) {
                        if (param_1 == 0x1be01a2) {
                            return 0x186b4406;
                        }
                        if (param_1 == 0x1be01a3) {
                            return 0x186b4607;
                        }
                        if (param_1 == 0x1be01a4) {
                            return 0x186b4808;
                        }
                        if (param_1 != 0x1be01a5) {
                            if (param_1 == 0x1de01bf) {
                                return 0x18627e05;
                            }
                            if (param_1 != 0x1de01c0) {
                                return 0;
                            }
                            return 0x18628006;
                        }
                        return 0x186b4a09;
                    }
                    if (param_1 == 0x1be01a1) {
                        return 0x186b4205;
                    }
                    if (param_1 == 0x1710165) {
                        return 0x2845ca06;
                    }
                    if (param_1 == 0x1710166) {
                        return 0x2850cc0b;
                    }
                    if (param_1 != 0x1710167) {
                        if (param_1 == 0x1720172) {
                            return 0x2844e405;
                        }
                        if (param_1 == 0x1730173) {
                            return 0x3844e606;
                        }
                        if (param_1 == 0x1be019f) {
                            return 0x186a3e04;
                        }
                        if (param_1 != 0x1be01a0) {
                            return 0;
                        }
                        return 0x186a4005;
                    }
                    return 0x2850ce0d;
                }
                if (param_1 == 0x1710164) {
                    return 0x3845c803;
                }
                if (param_1 < 0x11d0113) {
                    if (param_1 == 0x11d0112) {
                        return 0x18502404;
                    }
                    if (0x1090106 < param_1) {
                        if (param_1 == 0x1090107) {
                            return 0x28460e04;
                        }
                        if (param_1 == 0x10d010a) {
                            return 0x28461402;
                        }
                        if (param_1 == 0x10d010b) {
                            return 0x28461603;
                        }
                        if (param_1 != 0x11d010f) {
                            if (param_1 == 0x11d0110) {
                                return 0x18502002;
                            }
                            if (param_1 != 0x11d0111) {
                                return 0;
                            }
                            return 0x18502203;
                        }
                        return 0x18501e01;
                    }
                    if (param_1 == 0x1090106) {
                        return 0x28460c06;
                    }
                    if (param_1 == 0xfd00fd) {
                        return 0x1821fa04;
                    }
                    if (param_1 == 0xfe00fe) {
                        return 0x1821fc01;
                    }
                    if (param_1 != 0xff00ff) {
                        if (param_1 == 0x1000100) {
                            return 0x18410003;
                        }
                        if (param_1 == 0x1010101) {
                            return 0x18410205;
                        }
                        if (param_1 == 0x1050102) {
                            return 0x28460407;
                        }
                        if (param_1 != 0x1050103) {
                            return 0;
                        }
                        return 0x28460605;
                    }
                    return 0x1821fe02;
                }
                if (0x1610153 < param_1) {
                    if (param_1 == 0x1610154) {
                        return 0x3845a804;
                    }
                    if (param_1 == 0x1610155) {
                        return 0x2845aa07;
                    }
                    if (param_1 == 0x1610156) {
                        return 0x2850ac0c;
                    }
                    if (param_1 != 0x1610157) {
                        if (param_1 == 0x1710162) {
                            return 0x1845c410;
                        }
                        if (param_1 != 0x1710163) {
                            return 0;
                        }
                        return 0x1845c612;
                    }
                    return 0x2850ae0e;
                }
                if (param_1 == 0x1610153) {
                    return 0x1845a613;
                }
                if (param_1 == 0x11d0116) {
                    return 0x184f2c06;
                }
                if (param_1 == 0x11d0117) {
                    return 0x184f2e07;
                }
                if (param_1 != 0x11d0118) {
                    if (param_1 == 0x121011e) {
                        return 0x184b3c13;
                    }
                    if (param_1 == 0x1250122) {
                        return 0x184b4414;
                    }
                    if (param_1 == 0x1290126) {
                        return 0x184b4c15;
                    }
                    if (param_1 != 0x1610152) {
                        return 0;
                    }
                    return 0x1845a411;
                }
                return 0x184f300a;
            }
            if (param_1 == 0xfc00fc) {
                return 0x1821f800;
            }
            if (param_1 < 0x470042) {
                if (param_1 == 0x470041) {
                    return 0x18028201;
                }
                if (0x270022 < param_1) {
                    if (0x370032 < param_1) {
                        if (param_1 == 0x370033) {
                            return 0x18046611;
                        }
                        if (param_1 == 0x470038) {
                            return 0x1802700f;
                        }
                        if (param_1 == 0x470039) {
                            return 0x18027213;
                        }
                        if (param_1 != 0x47003a) {
                            if (param_1 == 0x47003b) {
                                return 0x18047610;
                            }
                            if (param_1 != 0x470040) {
                                return 0;
                            }
                            return 0x18028000;
                        }
                        return 0x38077408;
                    }
                    if (param_1 == 0x370032) {
                        return 0x38076409;
                    }
                    if (param_1 == 0x270023) {
                        return 0x18044613;
                    }
                    if (param_1 == 0x2f0028) {
                        return 0x18025011;
                    }
                    if (param_1 != 0x2f0029) {
                        if (param_1 == 0x2f002a) {
                            return 0x3807540a;
                        }
                        if (param_1 == 0x2f002b) {
                            return 0x18045612;
                        }
                        if (param_1 == 0x370030) {
                            return 0x18026010;
                        }
                        if (param_1 != 0x370031) {
                            return 0;
                        }
                        return 0x18026214;
                    }
                    return 0x18025215;
                }
                if (param_1 == 0x270022) {
                    return 0x3807440b;
                }
                if (0x180013 < param_1) {
                    if (param_1 == 0x180014) {
                        return 0x18042816;
                    }
                    if (param_1 == 0x1f001a) {
                        return 0x1805340f;
                    }
                    if (param_1 == 0x1f001b) {
                        return 0x18053617;
                    }
                    if (param_1 != 0x1f001c) {
                        if (param_1 == 0x270020) {
                            return 0x18024012;
                        }
                        if (param_1 != 0x270021) {
                            return 0;
                        }
                        return 0x18024216;
                    }
                    return 0x18043817;
                }
                if (param_1 == 0x180013) {
                    return 0x18052616;
                }
                if (param_1 == 0x80002) {
                    return 0x1805040c;
                }
                if (param_1 == 0x80003) {
                    return 0x18050614;
                }
                if (param_1 != 0x80004) {
                    if (param_1 == 0x10000a) {
                        return 0x1805140d;
                    }
                    if (param_1 == 0x10000b) {
                        return 0x18051615;
                    }
                    if (param_1 == 0x10000c) {
                        return 0x18041815;
                    }
                    if (param_1 != 0x180012) {
                        return 0;
                    }
                    return 0x1805240e;
                }
                return 0x18040814;
            }
            if (0xa700a1 < param_1) {
                if (0xef00e9 < param_1) {
                    if (param_1 == 0xef00ea) {
                        return 0x1825d407;
                    }
                    if (param_1 == 0xf700f0) {
                        return 0x182de013;
                    }
                    if (param_1 == 0xf700f1) {
                        return 0x182de215;
                    }
                    if (param_1 != 0xf700f2) {
                        if (param_1 == 0xfb00f8) {
                            return 0x2824f008;
                        }
                        if (param_1 != 0xfb00f9) {
                            return 0;
                        }
                        return 0x2824f217;
                    }
                    return 0x1825e406;
                }
                if (param_1 == 0xef00e9) {
                    return 0x182dd216;
                }
                if (param_1 == 0xaf00a8) {
                    return 0x1824500c;
                }
                if (param_1 == 0xaf00a9) {
                    return 0x2825520f;
                }
                if (param_1 != 0xbf00b8) {
                    if (param_1 == 0xc700c0) {
                        return 0x1827800a;
                    }
                    if (param_1 == 0xcf00c8) {
                        return 0x18279009;
                    }
                    if (param_1 == 0xdf00d0) {
                        return 0x1827a008;
                    }
                    if (param_1 != 0xef00e8) {
                        return 0;
                    }
                    return 0x182dd014;
                }
                return 0x1827700b;
            }
            if (param_1 == 0xa700a1) {
                return 0x2825420e;
            }
            if (0x8f0056 < param_1) {
                if (param_1 == 0x8f0057) {
                    return 0x1801ae0d;
                }
                if (param_1 == 0x970090) {
                    return 0x18252003;
                }
                if (param_1 == 0x970091) {
                    return 0x2825220c;
                }
                if (param_1 != 0x9f0098) {
                    if (param_1 == 0x9f0099) {
                        return 0x2825320d;
                    }
                    if (param_1 != 0xa700a0) {
                        return 0;
                    }
                    return 0x1821400a;
                }
                return 0x18253004;
            }
            if (param_1 == 0x8f0056) {
                return 0x2801ac0b;
            }
            if (param_1 == 0x470042) {
                return 0x28008413;
            }
            if (param_1 == 0x8f0050) {
                return 0x1801a00e;
            }
            if (param_1 != 0x8f0051) {
                if (param_1 == 0x8f0052) {
                    return 0x1801a410;
                }
                if (param_1 == 0x8f0053) {
                    return 0x1801a611;
                }
                if (param_1 == 0x8f0054) {
                    return 0x1801a812;
                }
                if (param_1 != 0x8f0055) {
                    return 0;
                }
                return 0x1801aa13;
            }
            return 0x1801a20f;
        }
        if (0x9f0098 < param_1) {
            if (param_1 < 0x1250123) {
                if (param_1 == 0x1250122) {
                    return 0x194d4400;
                }
                if (0xfb00f9 < param_1) {
                    if (0x11d0110 < param_1) {
                        if (param_1 == 0x11d0111) {
                            return 0x2942220e;
                        }
                        if (param_1 == 0x11d0112) {
                            return 0x2942240f;
                        }
                        if (param_1 == 0x11d0116) {
                            return 0x194e2c0e;
                        }
                        if (param_1 != 0x11d0117) {
                            if (param_1 == 0x11d0118) {
                                return 0x19423011;
                            }
                            if (param_1 != 0x121011e) {
                                if (param_1 != 0x121011f) {
                                    return 0;
                                }
                                return 0x29423e11;
                            }
                            return 0x194d3c02;
                        }
                        return 0x19422e12;
                    }
                    if (param_1 == 0x11d0110) {
                        return 0x19422014;
                    }
                    if (param_1 == 0xfc00fc) {
                        return 0x1923f800;
                    }
                    if (param_1 == 0xfd00fd) {
                        return 0x1923fa04;
                    }
                    if (param_1 != 0xfe00fe) {
                        if (param_1 == 0xff00ff) {
                            return 0x1923fe02;
                        }
                        if (param_1 == 0x1000100) {
                            return 0x19430003;
                        }
                        if (param_1 == 0x1010101) {
                            return 0x19430205;
                        }
                        if (param_1 != 0x11d010f) {
                            return 0;
                        }
                        return 0x19421e13;
                    }
                    return 0x1923fc01;
                }
                if (param_1 == 0xfb00f9) {
                    return 0x392cf212;
                }
                if (0xdf00d0 < param_1) {
                    if (param_1 == 0xef00e8) {
                        return 0x1920d006;
                    }
                    if (param_1 == 0xef00e9) {
                        return 0x1920d208;
                    }
                    if (param_1 == 0xef00ea) {
                        return 0x2920d40a;
                    }
                    if (param_1 != 0xf700f0) {
                        if (param_1 == 0xf700f1) {
                            return 0x1920e207;
                        }
                        if (param_1 != 0xf700f2) {
                            if (param_1 != 0xfb00f8) {
                                return 0;
                            }
                            return 0x292ef011;
                        }
                        return 0x2920e409;
                    }
                    return 0x1920e005;
                }
                if (param_1 == 0xdf00d0) {
                    return 0x1928a009;
                }
                if (0xaf00a9 < param_1) {
                    if (param_1 == 0xbf00b8) {
                        return 0x1928700c;
                    }
                    if (param_1 != 0xc700c0) {
                        if (param_1 != 0xcf00c8) {
                            return 0;
                        }
                        return 0x1928900a;
                    }
                    return 0x1928800b;
                }
                if (param_1 == 0xaf00a9) {
                    return 0x292b520f;
                }
                if (param_1 == 0x9f0099) {
                    return 0x292b320d;
                }
code_r0x00004e57:
                if (param_1 == 0xa700a0) {
                    return 0x1928400f;
                }
                if (param_1 != 0xa700a1) {
                    if (param_1 != 0xaf00a8) {
                        return 0;
                    }
                    return 0x19285010;
                }
                return 0x292b420e;
            }
            if (0x1710167 < param_1) {
                if (0x1be01a0 < param_1) {
                    if (param_1 == 0x1de01bf) {
                        return 0x19687e05;
                    }
                    if (param_1 == 0x1de01c0) {
                        return 0x19688006;
                    }
                    if (param_1 == 0x1de01c1) {
                        return 0x19688207;
                    }
                    if (param_1 != 0x1de01c2) {
                        if (param_1 == 0x1de01c3) {
                            return 0x1967860a;
                        }
                        if (param_1 != 0x1de01c4) {
                            if (param_1 != 0x1de01c5) {
                                return 0;
                            }
                            return 0x196c8a13;
                        }
                        return 0x1967880b;
                    }
                    return 0x19688408;
                }
                if (param_1 == 0x1be01a0) {
                    return 0x196e4005;
                }
                if (param_1 == 0x1710168) {
                    return 0x1941d000;
                }
                if (param_1 == 0x1710169) {
                    return 0x1941d202;
                }
                if (param_1 != 0x18c018b) {
                    if (param_1 == 0x18c018c) {
                        return 0x396c1818;
                    }
                    if (param_1 == 0x1940191) {
                        return 0x296e220e;
                    }
                    if (param_1 == 0x1940192) {
                        return 0x29622412;
                    }
                    if (param_1 != 0x1be019f) {
                        return 0;
                    }
                    return 0x196e3e04;
                }
                return 0x296e1618;
            }
            if (param_1 == 0x1710167) {
                return 0x1940ce09;
            }
            if (0x1610157 < param_1) {
                if (param_1 == 0x1610158) {
                    return 0x1941b001;
                }
                if (param_1 == 0x1610159) {
                    return 0x1941b203;
                }
                if (param_1 == 0x1710162) {
                    return 0x194bc410;
                }
                if (param_1 == 0x1710163) {
                    return 0x194bc612;
                }
                if (param_1 == 0x1710164) {
                    return 0x1947c804;
                }
                if (param_1 == 0x1710165) {
                    return 0x1947ca06;
                }
                goto code_r0x0000510d;
            }
            if (param_1 == 0x1610157) {
                return 0x1940ae0a;
            }
            if (param_1 < 0x1610154) {
                if (param_1 == 0x1610153) {
                    return 0x194ba613;
                }
                if (param_1 == 0x1250123) {
                    return 0x29424615;
                }
                if (param_1 == 0x1290126) {
                    return 0x194d4c01;
                }
                if (param_1 != 0x1290127) {
                    if (param_1 != 0x1610152) {
                        return 0;
                    }
                    return 0x194ba411;
                }
                return 0x29424e16;
            }
            if (param_1 == 0x1610154) {
                return 0x1947a805;
            }
            if (param_1 == 0x1610155) {
                return 0x1947aa07;
            }
code_r0x0000508a:
            if (param_1 != 0x1610156) {
                return 0;
            }
            return 0x1947ac09;
        }
        if (param_1 == 0x9f0098) {
            return 0x1928300e;
        }
        if (param_1 < 0x2f002a) {
            if (param_1 == 0x2f0029) {
                return 0x19005215;
            }
            if (0x180016 < param_1) {
                if (0x270020 < param_1) {
                    if (param_1 == 0x270021) {
                        return 0x19004216;
                    }
                    if (param_1 == 0x270022) {
                        return 0x7908440c;
                    }
                    if (param_1 == 0x270023) {
                        return 0x19094607;
                    }
                    if (param_1 != 0x270024) {
                        if (param_1 == 0x270025) {
                            return 0x19094a0f;
                        }
                        if (param_1 != 0x270026) {
                            if (param_1 != 0x2f0028) {
                                return 0;
                            }
                            return 0x19005011;
                        }
                        return 0x19094c13;
                    }
                    return 0x1909480b;
                }
                if (param_1 == 0x270020) {
                    return 0x19004012;
                }
                if (param_1 == 0x180017) {
                    return 0x19012e0e;
                }
                if (param_1 == 0x1f001a) {
                    return 0x190b340f;
                }
                if (param_1 != 0x1f001b) {
                    if (param_1 == 0x1f001c) {
                        return 0x19093803;
                    }
                    if (param_1 == 0x1f001d) {
                        return 0x19013a07;
                    }
                    if (param_1 == 0x1f001e) {
                        return 0x19013c0b;
                    }
                    if (param_1 != 0x1f001f) {
                        return 0;
                    }
                    return 0x19013e0f;
                }
                return 0x190b3617;
            }
            if (param_1 == 0x180016) {
                return 0x19012c0a;
            }
            if (0x10000c < param_1) {
                if (param_1 == 0x10000d) {
                    return 0x19011a05;
                }
                if (param_1 == 0x10000e) {
                    return 0x19011c09;
                }
                if (param_1 == 0x10000f) {
                    return 0x19011e0d;
                }
                if (param_1 != 0x180012) {
                    if (param_1 == 0x180013) {
                        return 0x190b2616;
                    }
                    if (param_1 != 0x180014) {
                        if (param_1 != 0x180015) {
                            return 0;
                        }
                        return 0x19012a06;
                    }
                    return 0x19092802;
                }
                return 0x190b240e;
            }
            if (param_1 == 0x10000c) {
                return 0x19091801;
            }
            if (0x80006 < param_1) {
                if (param_1 == 0x80007) {
                    return 0x19010e0c;
                }
                if (param_1 != 0x10000a) {
                    if (param_1 != 0x10000b) {
                        return 0;
                    }
                    return 0x190b1615;
                }
                return 0x190b140d;
            }
            if (param_1 == 0x80006) {
                return 0x19010c08;
            }
            if (param_1 != 0x80002) {
                if (param_1 == 0x80003) {
                    return 0x190b0614;
                }
                if (param_1 != 0x80004) {
                    if (param_1 != 0x80005) {
                        return 0;
                    }
                    return 0x19010a04;
                }
                return 0x19090800;
            }
            return 0x190b040c;
        }
        if (0x47003c < param_1) {
            if (0x8f0052 < param_1) {
                if (param_1 == 0x8f0053) {
                    return 0x1908a603;
                }
                if (param_1 == 0x8f0054) {
                    return 0x1908a811;
                }
                if (param_1 == 0x8f0055) {
                    return 0x1908aa12;
                }
                if (param_1 != 0x8f0056) {
                    if (param_1 == 0x8f0057) {
                        return 0x190eae10;
                    }
                    if (param_1 != 0x970090) {
                        if (param_1 != 0x970091) {
                            return 0;
                        }
                        return 0x292b220c;
                    }
                    return 0x1928200d;
                }
                return 0x190eac0f;
            }
            if (param_1 == 0x8f0052) {
                return 0x1908a402;
            }
            if (param_1 == 0x47003d) {
                return 0x19097a0c;
            }
            if (param_1 == 0x47003e) {
                return 0x19097c10;
            }
            if (param_1 != 0x470040) {
                if (param_1 == 0x470041) {
                    return 0x39008217;
                }
                if (param_1 == 0x470042) {
                    return 0x2908840f;
                }
                if (param_1 == 0x8f0050) {
                    return 0x1908a000;
                }
                if (param_1 != 0x8f0051) {
                    return 0;
                }
                return 0x1908a201;
            }
            return 0x3900800e;
        }
        if (param_1 == 0x47003c) {
            return 0x19097808;
        }
        if (param_1 < 0x370034) {
            if (param_1 == 0x370033) {
                return 0x19096605;
            }
            if (0x2f002e < param_1) {
                if (param_1 == 0x370030) {
                    return 0x19006010;
                }
                if (param_1 != 0x370031) {
                    if (param_1 != 0x370032) {
                        return 0;
                    }
                    return 0x7908640a;
                }
                return 0x19006214;
            }
            if (param_1 == 0x2f002e) {
                return 0x19095c12;
            }
            if (param_1 != 0x2f002a) {
                if (param_1 == 0x2f002b) {
                    return 0x19095606;
                }
                if (param_1 != 0x2f002c) {
                    if (param_1 != 0x2f002d) {
                        return 0;
                    }
                    return 0x19095a0e;
                }
                return 0x1909580a;
            }
            return 0x7908540b;
        }
        if (param_1 == 0x370034) {
            return 0x19096809;
        }
        if (param_1 == 0x370035) {
            return 0x19096a0d;
        }
        if (param_1 == 0x370036) {
            return 0x19096c11;
        }
        if (param_1 == 0x470038) {
            return 0x1900700f;
        }
        if (param_1 == 0x470039) {
            return 0x19007213;
        }
    }
    else {
        if (0xaf00a9 < param_1) {
            if (0x1610157 < param_1) {
                if (0x18a018a < param_1) {
                    if (0x1de01c1 < param_1) {
                        if (param_1 == 0x1de01c2) {
                            return 0x19688408;
                        }
                        if (param_1 == 0x1de01c3) {
                            return 0x19678613;
                        }
                        if (param_1 == 0x1de01c4) {
                            return 0x29678817;
                        }
                        if (param_1 != 0x1de01c5) {
                            if (param_1 == 0x1de01c6) {
                                return 0x19628c08;
                            }
                            if (param_1 != 0x1de01c7) {
                                if (param_1 != 0x1ed01ed) {
                                    return 0;
                                }
                                return 0x1969da05;
                            }
                            return 0x796e8e10;
                        }
                        return 0x196c8a13;
                    }
                    if (param_1 == 0x1de01c1) {
                        return 0x19688207;
                    }
                    if (0x19e019d < param_1) {
                        if (param_1 == 0x19e019e) {
                            return 0x96a3c1c;
                        }
                        if (param_1 != 0x1de01bf) {
                            if (param_1 != 0x1de01c0) {
                                return 0;
                            }
                            return 0x19688006;
                        }
                        return 0x19687e05;
                    }
                    if (param_1 == 0x19e019d) {
                        return 0x96a3a1b;
                    }
                    if (param_1 != 0x18c018b) {
                        if (param_1 == 0x18c018c) {
                            return 0x396c1818;
                        }
                        if (param_1 != 0x1940191) {
                            if (param_1 != 0x1940192) {
                                return 0;
                            }
                            return 0x49622412;
                        }
                        return 0x296e220e;
                    }
                    return 0x296e1618;
                }
                if (param_1 == 0x18a018a) {
                    return 0x19691412;
                }
                if (0x1870181 < param_1) {
                    if (0x1870186 < param_1) {
                        if (param_1 == 0x1870187) {
                            return 0x19690e0f;
                        }
                        if (param_1 != 0x1880188) {
                            if (param_1 != 0x1890189) {
                                return 0;
                            }
                            return 0x19691211;
                        }
                        return 0x19691010;
                    }
                    if (param_1 == 0x1870186) {
                        return 0x19690c0e;
                    }
                    if (param_1 != 0x1870182) {
                        if (param_1 == 0x1870183) {
                            return 0x1969060b;
                        }
                        if (param_1 != 0x1870184) {
                            if (param_1 != 0x1870185) {
                                return 0;
                            }
                            return 0x19690a0d;
                        }
                        return 0x1969080c;
                    }
                    return 0x1969040a;
                }
                if (param_1 == 0x1870181) {
                    return 0x19690209;
                }
                if (0x1710167 < param_1) {
                    if (param_1 == 0x1710168) {
                        return 0x3948d00d;
                    }
                    if (param_1 != 0x17f017f) {
                        if (param_1 != 0x1870180) {
                            return 0;
                        }
                        return 0x19690008;
                    }
                    return 0x1949fe07;
                }
                if (param_1 == 0x1710167) {
                    return 0x2940ce10;
                }
                if (param_1 == 0x1610158) {
                    return 0x3948b00e;
                }
                if (param_1 == 0x1710164) {
                    return 0x2940c805;
                }
                if (param_1 == 0x1710165) {
                    return 0x2940ca07;
                }
code_r0x0000510d:
                if (param_1 != 0x1710166) {
                    return 0;
                }
                return 0x1947cc08;
            }
            if (param_1 == 0x1610157) {
                return 0x2940ae11;
            }
            if (param_1 < 0x1010102) {
                if (param_1 == 0x1010101) {
                    return 0x19430205;
                }
                if (0xf700f1 < param_1) {
                    if (0xfd00fd < param_1) {
                        if (param_1 == 0xfe00fe) {
                            return 0x1923fc01;
                        }
                        if (param_1 != 0xff00ff) {
                            if (param_1 != 0x1000100) {
                                return 0;
                            }
                            return 0x19430003;
                        }
                        return 0x1923fe02;
                    }
                    if (param_1 == 0xfd00fd) {
                        return 0x1923fa04;
                    }
                    if (param_1 != 0xf700f2) {
                        if (param_1 == 0xfb00f8) {
                            return 0x292ef011;
                        }
                        if (param_1 != 0xfb00f9) {
                            if (param_1 != 0xfc00fc) {
                                return 0;
                            }
                            return 0x1923f800;
                        }
                        return 0x392cf212;
                    }
                    return 0x4920e410;
                }
                if (param_1 == 0xf700f1) {
                    return 0x1920e207;
                }
                if (0xef00e8 < param_1) {
                    if (param_1 == 0xef00e9) {
                        return 0x1920d208;
                    }
                    if (param_1 != 0xef00ea) {
                        if (param_1 != 0xf700f0) {
                            return 0;
                        }
                        return 0x1920e005;
                    }
                    return 0x4920d411;
                }
                if (param_1 == 0xef00e8) {
                    return 0x1920d006;
                }
                if (param_1 != 0xbf00b8) {
                    if (param_1 == 0xc700c0) {
                        return 0x1928800b;
                    }
                    if (param_1 != 0xcf00c8) {
                        if (param_1 != 0xdf00d0) {
                            return 0;
                        }
                        return 0x1928a009;
                    }
                    return 0x1928900a;
                }
                return 0x1928700c;
            }
            if (param_1 < 0x1210120) {
                if (param_1 == 0x121011f) {
                    return 0x49423e11;
                }
                if (0x11d0116 < param_1) {
                    if (param_1 == 0x11d0117) {
                        return 0x19422e12;
                    }
                    if (param_1 != 0x11d0118) {
                        if (param_1 != 0x121011e) {
                            return 0;
                        }
                        return 0x194d3c02;
                    }
                    return 0x19423011;
                }
                if (param_1 == 0x11d0116) {
                    return 0x194e2c0e;
                }
                if (param_1 != 0x11d010f) {
                    if (param_1 == 0x11d0110) {
                        return 0x19422014;
                    }
                    if (param_1 != 0x11d0111) {
                        if (param_1 != 0x11d0112) {
                            return 0;
                        }
                        return 0x2942240f;
                    }
                    return 0x2942220e;
                }
                return 0x19421e13;
            }
            if (param_1 == 0x1250122) {
                return 0x194d4400;
            }
            if (param_1 == 0x1250123) {
                return 0x19424615;
            }
            if (param_1 == 0x1290126) {
                return 0x194d4c01;
            }
            if (param_1 == 0x1290127) {
                return 0x19424e16;
            }
            if (param_1 == 0x1610154) {
                return 0x2940a806;
            }
            if (param_1 == 0x1610155) {
                return 0x2940aa08;
            }
            goto code_r0x0000508a;
        }
        if (param_1 == 0xaf00a9) {
            return 0x292b520f;
        }
        if (param_1 < 0x2f0029) {
            if (param_1 == 0x2f0028) {
                return 0x790e500c;
            }
            if (0x180014 < param_1) {
                if (0x1f001e < param_1) {
                    if (0x270023 < param_1) {
                        if (param_1 == 0x270024) {
                            return 0x1909480b;
                        }
                        if (param_1 != 0x270025) {
                            if (param_1 != 0x270026) {
                                return 0;
                            }
                            return 0x19094c13;
                        }
                        return 0x19094a0f;
                    }
                    if (param_1 == 0x270023) {
                        return 0x19094607;
                    }
                    if (param_1 != 0x1f001f) {
                        if (param_1 == 0x270020) {
                            return 0x790e400d;
                        }
                        if (param_1 != 0x270021) {
                            if (param_1 != 0x270022) {
                                return 0;
                            }
                            return 0x7908440c;
                        }
                        return 0x490c420c;
                    }
                    return 0x19013e0f;
                }
                if (param_1 == 0x1f001e) {
                    return 0x19013c0b;
                }
                if (0x1f001a < param_1) {
                    if (param_1 == 0x1f001b) {
                        return 0x290c3603;
                    }
                    if (param_1 != 0x1f001c) {
                        if (param_1 != 0x1f001d) {
                            return 0;
                        }
                        return 0x19013a07;
                    }
                    return 0x19093803;
                }
                if (param_1 == 0x1f001a) {
                    return 0x190b340f;
                }
                if (param_1 != 0x180015) {
                    if (param_1 == 0x180016) {
                        return 0x19012c0a;
                    }
                    if (param_1 != 0x180017) {
                        if (param_1 != 0x1f0019) {
                            return 0;
                        }
                        return 0x2907320d;
                    }
                    return 0x19012e0e;
                }
                return 0x19012a06;
            }
            if (param_1 == 0x180014) {
                return 0x19092802;
            }
            if (0x10000a < param_1) {
                if (0x10000f < param_1) {
                    if (param_1 == 0x180011) {
                        return 0x2907220c;
                    }
                    if (param_1 != 0x180012) {
                        if (param_1 != 0x180013) {
                            return 0;
                        }
                        return 0x290c2600;
                    }
                    return 0x190b240e;
                }
                if (param_1 == 0x10000f) {
                    return 0x19011e0d;
                }
                if (param_1 != 0x10000b) {
                    if (param_1 == 0x10000c) {
                        return 0x19091801;
                    }
                    if (param_1 != 0x10000d) {
                        if (param_1 != 0x10000e) {
                            return 0;
                        }
                        return 0x19011c09;
                    }
                    return 0x19011a05;
                }
                return 0x290c1602;
            }
            if (param_1 == 0x10000a) {
                return 0x19081412;
            }
            if (0x80005 < param_1) {
                if (param_1 == 0x80006) {
                    return 0x19010c08;
                }
                if (param_1 != 0x80007) {
                    if (param_1 != 0x100009) {
                        return 0;
                    }
                    return 0x2907120b;
                }
                return 0x19010e0c;
            }
            if (param_1 == 0x80005) {
                return 0x19010a04;
            }
            if (param_1 != 0x80001) {
                if (param_1 == 0x80002) {
                    return 0x19080411;
                }
                if (param_1 != 0x80003) {
                    if (param_1 != 0x80004) {
                        return 0;
                    }
                    return 0x19090800;
                }
                return 0x290c0601;
            }
            return 0x2907020a;
        }
        if (0x47003c < param_1) {
            if (param_1 < 0x8f0054) {
                if (param_1 == 0x8f0053) {
                    return 0x1908a603;
                }
                if (0x470042 < param_1) {
                    if (param_1 == 0x8f0050) {
                        return 0x1908a000;
                    }
                    if (param_1 != 0x8f0051) {
                        if (param_1 != 0x8f0052) {
                            return 0;
                        }
                        return 0x1908a402;
                    }
                    return 0x1908a201;
                }
                if (param_1 == 0x470042) {
                    return 0x2908840f;
                }
                if (param_1 != 0x47003d) {
                    if (param_1 == 0x47003e) {
                        return 0x19097c10;
                    }
                    if (param_1 != 0x470040) {
                        if (param_1 != 0x470041) {
                            return 0;
                        }
                        return 0x39008217;
                    }
                    return 0x3900800e;
                }
                return 0x19097a0c;
            }
            if (param_1 == 0x970090) {
                return 0x1928200d;
            }
            if (param_1 == 0x970091) {
                return 0x29282211;
            }
            if (param_1 == 0x9f0098) {
                return 0x1928300e;
            }
            if (param_1 == 0x9f0099) {
                return 0x29283212;
            }
            goto code_r0x00004e57;
        }
        if (param_1 == 0x47003c) {
            return 0x19097808;
        }
        if (param_1 < 0x370033) {
            if (param_1 == 0x370032) {
                return 0x7908640a;
            }
            if (0x2f002d < param_1) {
                if (param_1 == 0x2f002e) {
                    return 0x19095c12;
                }
                if (param_1 != 0x370030) {
                    if (param_1 != 0x370031) {
                        return 0;
                    }
                    return 0x490c620b;
                }
                return 0x790e600b;
            }
            if (param_1 == 0x2f002d) {
                return 0x19095a0e;
            }
            if (param_1 != 0x2f0029) {
                if (param_1 == 0x2f002a) {
                    return 0x7908540b;
                }
                if (param_1 != 0x2f002b) {
                    if (param_1 != 0x2f002c) {
                        return 0;
                    }
                    return 0x1909580a;
                }
                return 0x19095606;
            }
            return 0x490c520d;
        }
        if (param_1 < 0x470039) {
            if (param_1 == 0x470038) {
                return 0x790e700a;
            }
            if (param_1 == 0x370033) {
                return 0x19096605;
            }
            if (param_1 == 0x370034) {
                return 0x19096809;
            }
            if (param_1 != 0x370035) {
                if (param_1 != 0x370036) {
                    return 0;
                }
                return 0x19096c11;
            }
            return 0x19096a0d;
        }
        if (param_1 == 0x470039) {
            return 0x490c7210;
        }
    }
    if (param_1 == 0x47003a) {
        return 0x79087409;
    }
    if (param_1 != 0x47003b) {
        return 0;
    }
    return 0x19097604;
}


/* fcn.000026f8 @ 0x26f8 */

uint32_t __fastcall fcn.000026f8(uint param_1)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    
    uVar2 = fcn.0000202c(param_1);
    iVar3 = fcn.00001f73(uVar2,uVar2 >> 0x20);
    uVar1 = iVar3;
    if ((iVar3 != -0x1000) && (iVar3 != 0)) {
        uVar1 = *(uVar1 + 0xfc);
    }
    return uVar1;
}


/* fcn.00001b2b @ 0x1b2b */

ulong __fastcall fcn.00001b2b(uint32_t param_1)

{
    char cVar1;
    uint uVar2;
    int16_t var_4h;
    
    cVar1 = fcn.0000613f();
    if (cVar1 == '\0') {
        cVar1 = fcn.00006150();
        if (cVar1 == '\0') {
            if (param_1 < 7) {
                uVar2 = *(param_1 * 8 + -0x2f8e84);
                _var_4h = *(param_1 * 8 + -0x2f8e80);
                goto code_r0x00001b90;
            }
        }
        else if (param_1 < 7) {
            uVar2 = *(param_1 * 8 + -0x2f8ebc);
            _var_4h = *(param_1 * 8 + -0x2f8eb8);
            goto code_r0x00001b90;
        }
    }
    else if (param_1 < 7) {
        uVar2 = *(param_1 * 8 + -0x2f8f2c);
        _var_4h = *(param_1 * 8 + -0x2f8f28);
        goto code_r0x00001b90;
    }
    uVar2 = 0;
    _var_4h = _var_4h & 0xffff0000;
code_r0x00001b90:
    return CONCAT44(_var_4h,uVar2);
}


/* fcn.00006101 @ 0x6101 */

int __fastcall fcn.00006101(uint param_1)

{
    uint uVar1;
    
    uVar1 = fcn.00006092(param_1);
    return CONCAT31(uVar1 >> 8,(uVar1 & 0xffe0) == 0x7a00) * 2 + 7;
}


/* fcn.00006092 @ 0x6092 */

void fcn.00006092(void)

{
    fcn.00001d91(0xf8002,0);
    return;
}


/* fcn.00001f24 @ 0x1f24 */

void fcn.00001f24(int32_t param_1,int32_t param_2)

{
    fcn.00001e8b(param_1,param_2);
    fcn.00001ec1(param_1,param_2);
    return;
}


/* fcn.00003331 @ 0x3331 */

void fcn.00003331(uint32_t param_1,int param_2)

{
    fcn.0000617e(param_1,param_2);
    fcn.0000623a(param_1,param_2);
    fcn.00001ec1(param_1 + 0x10,param_2 + (0xffffffef < param_1));
    fcn.00001ec1(param_1 + 0x14,param_2 + (0xffffffeb < param_1));
    fcn.00001ec1(param_1 + 0x18,param_2 + (0xffffffe7 < param_1));
    fcn.00001ec1(param_1 + 0x1c,param_2 + (0xffffffe3 < param_1));
    fcn.000061c2(param_1,param_2);
    fcn.00001e04(param_1 + 4,0);
    return;
}


/* fcn.000030bd @ 0x30bd */

void __fastcall fcn.000030bd(uint32_t param_1)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00002218();
    fcn.00002238(uVar1 & ~(1 << (param_1 & 0x1f)));
    fcn.000026f8();
    return;
}


/* fcn.0000255e @ 0x255e */

void __fastcall
fcn.0000255e(uint param_1,int param_2,int32_t param_3,int param_4,char param_5,int param_6,char param_7)

{
    char cVar1;
    uint8_t uVar2;
    int iStack_30;
    int iStack_2c;
    int iStack_28;
    int iStack_24;
    int *piStack_20;
    uint uStack_1c;
    int iStack_18;
    int iStack_14;
    int iStack_10;
    uint uStack_c;
    int iStack_8;
    uint uStack_4;
    
    cVar1 = fcn.000028d1(&iStack_30);
    if (cVar1 != '\0') {
        if (iStack_30 == 1) {
            uVar2 = *(piStack_20 + 8);
        }
        else {
            uVar2 = *(piStack_20 + 2);
        }
        fcn.00002913(piStack_20,uStack_1c,uVar2 | 1);
    }
    fcn.0000292d(param_3,param_4);
    cVar1 = fcn.000028d1(&iStack_2c);
    if (cVar1 != '\0') {
        if (param_2 == 0) {
            param_2 = 1;
        }
        if (param_2 < 4) {
            if (iStack_2c == 1) {
                uVar2 = *(iStack_18 + 0xc);
            }
            else {
                uVar2 = *(iStack_18 + 3);
            }
            if (param_2 == 2) {
                uVar2 = uVar2 & 0xef | 8;
            }
            else if (param_2 == 3) {
                uVar2 = uVar2 | 0x18;
            }
            else {
                uVar2 = uVar2 & 0xe7;
            }
            iStack_30 = CONCAT31(iStack_30._1_3_,uVar2);
            fcn.00002913(iStack_18,iStack_14,iStack_30);
        }
    }
    cVar1 = fcn.000028d1(&iStack_28);
    if (cVar1 != '\0') {
        if (param_5 == '\0') {
            param_5 = '\b';
        }
        if (iStack_28 == 1) {
            uVar2 = *(iStack_10 + 0xc);
        }
        else {
            uVar2 = *(iStack_10 + 3);
        }
        if (param_5 - 5U < 4) {
            fcn.00002913(iStack_10,uStack_c,(param_5 - 1U ^ uVar2) & 3 ^ uVar2);
        }
    }
    cVar1 = fcn.000028d1(&iStack_24);
    if ((cVar1 != '\0') && (param_6 < 4)) {
        if (param_6 == 0) {
            param_6 = 1;
        }
        if (iStack_24 == 1) {
            uVar2 = *(iStack_8 + 0xc);
        }
        else {
            uVar2 = *(iStack_8 + 3);
        }
        if (param_6 - 2U < 2) {
            uVar2 = uVar2 | 4;
        }
        else {
            uVar2 = uVar2 & 0xfb;
        }
        fcn.00002913(iStack_8,uStack_4,uVar2);
    }
    piStack_20 = &iStack_8;
    iStack_24 = 0x2b15;
    cVar1 = fcn.000028d1();
    if (cVar1 != '\0') {
        if (iStack_8 == 1) {
            uVar2 = *(iStack_14 + 0x10);
        }
        else {
            uVar2 = *(iStack_14 + 4);
        }
        piStack_20 = (param_7 != '\0') << 5 | uVar2 & 0xdf | 2;
        iStack_24 = iStack_10;
        iStack_28 = iStack_14;
        iStack_2c = 0x2b4f;
        fcn.00002913();
    }
    return;
}


/* fcn.00006204 @ 0x6204 */

uint32_t __thiscall fcn.00006204(uint param_1,int param_2)

{
    uint32_t uVar1;
    
    if (param_1 != '\0') {
        *(param_2 + 4) = *(param_2 + 4) | 2;
        return *(param_2 + 4);
    }
    uVar1 = fcn.00001e04(param_2 + 4,0,param_1);
    return uVar1;
}


/* fcn.00005a0c @ 0x5a0c */

int __cdecl
fcn.00005a0c(int32_t arg_8h,int32_t arg_ch,int16_t arg_10h,int32_t arg_14h,int8_t arg_18h,uint noname_5,
            uint noname_6,int8_t arg_24h,int32_t arg_28h,int32_t arg_2ch)

{
    uint8_t uVar1;
    int16_t iVar2;
    int iVar3;
    uint32_t uVar4;
    uint uVar5;
    int in_EDX;
    int arg_ch_00;
    int arg_8h_00;
    int arg_ch_01;
    int32_t var_1ch;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int8_t var_1h;
    
    if ((in_EDX < 0) || ((1 < in_EDX && ((in_EDX < 4 || ((7 < in_EDX && (in_EDX != 0x13)))))))) {
        iVar3 = -0x7ffffffe;
    }
    else {
        iVar2 = fcn.00001d91(arg_8h,arg_ch);
        if (iVar2 == -1) {
            iVar3 = -0x7ffffff9;
        }
        else {
            arg_8h_00 = arg_8h + 0xd8;
            iVar3 = 0xfffffff;
            arg_ch_00 = arg_ch + (0xffffff27 < arg_8h);
            do {
                uVar4 = fcn.00001d91(arg_8h_00,arg_ch_00);
                if ((uVar4 & 1) == 0) break;
                iVar3 = iVar3 + -1;
            } while (0 < iVar3);
            if (iVar3 != 0) {
                *arg_2ch = 4;
                fcn.00001ec1(arg_8h + 0xd0,arg_ch + (0xffffff2f < arg_8h));
                fcn.00001ec1(arg_8h + 0xdc,arg_ch + (0xffffff23 < arg_8h));
                fcn.00001e58(arg_8h_00,arg_ch_00);
                fcn.00001dc7(arg_8h + 0xda,arg_ch + (0xffffff25 < arg_8h));
                arg_ch_01 = arg_ch + (0xffffff2b < arg_8h);
                fcn.00001ec1(arg_8h + 0xd4,arg_ch_01);
                fcn.00001e04(arg_8h_00,arg_ch_00);
                iVar3 = 0xfffffff;
                do {
                    uVar1 = fcn.00001d91(arg_8h_00,arg_ch_00);
                    if ((uVar1 & 1) == 0) break;
                    iVar3 = iVar3 + -1;
                } while (0 < iVar3);
                if (iVar3 != 0) {
                    uVar1 = uVar1 >> 1 & 3;
                    *arg_2ch = uVar1;
                    if (uVar1 == 0) {
                        if (((in_EDX == 0) || (in_EDX == 4)) || (in_EDX == 6)) {
                            uVar5 = fcn.00001e8b(arg_8h + 0xd4,arg_ch_01);
                            *arg_28h = uVar5;
                        }
                        return 0;
                    }
                    return ((uVar1 != 2) - 1 & 9) + 0x80000007;
                }
            }
            iVar3 = -0x7fffffee;
        }
    }
    return iVar3;
}


/* fcn.0000392b @ 0x392b */

uint __fastcall fcn.0000392b(uint param_1,uint32_t param_2)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.0000379f();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        cVar1 = fcn.0000377f();
        if (cVar1 == '\0') {
            uVar2 = 0x80000003;
        }
        else {
            if (param_2 != 0) {
                fcn.000037fe(0xffffe3ff,(param_2 & 0xe) << 9);
            }
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.00003a2a @ 0x3a2a */

uint __fastcall fcn.00003a2a(uint32_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    int iVar2;
    uint uVar3;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = fcn.00003c56();
    if (uVar1 == 0) {
        uVar1 = param_2;
    }
    uVar1 = (uVar1 >> 5 & 0x70000 | uVar1 & 0xfe00) >> 9;
    if ((uVar1 == (param_1 & 0xffff)) && (uVar1 <= param_1 >> 0x10)) {
        iVar2 = fcn.0000530a(&var_4h);
        if (iVar2 == -0x7ffffffd) {
            uVar3 = 0;
        }
        else if (iVar2 < 0) {
            uVar3 = 0x80000003;
        }
        else {
            uVar3 = fcn.000039b8(var_4h);
        }
    }
    else {
        uVar3 = 0x80000002;
    }
    return uVar3;
}


/* fcn.00005792 @ 0x5792 */

uint __fastcall fcn.00005792(uint32_t param_1,uint32_t *param_2)

{
    char cVar1;
    uint uVar2;
    int iVar3;
    uint32_t uVar4;
    int8_t iVar5;
    
    cVar1 = fcn.0000379f();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        iVar3 = fcn.00003713();
        if (*((param_1 >> 0x10 & 0x1f) * 0x1e + iVar3 + 2) == -1) {
            *param_2 = 0;
            uVar2 = 0x80000003;
        }
        else {
            uVar4 = fcn.00005532();
            iVar5 = (param_1 & 7) << 2;
            *param_2 = (uVar4 & 3 << iVar5) >> iVar5;
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.00003713 @ 0x3713 */

uint __fastcall fcn.00003713(uint *param_1)

{
    char cVar1;
    
    cVar1 = fcn.00006150();
    if (cVar1 != '\0') {
        *param_1 = 0x12;
        return 0xffd069b0;
    }
    *param_1 = 0x13;
    return 0xffd06770;
}


/* fcn.00005833 @ 0x5833 */

int __fastcall fcn.00005833(uint32_t param_1,uint32_t *param_2)

{
    char cVar1;
    int iVar2;
    int32_t var_4h;
    
    var_4h = param_1;
    cVar1 = fcn.0000379f();
    if (cVar1 == '\0') {
        iVar2 = -0x7ffffffe;
    }
    else {
        iVar2 = fcn.000055cd((param_1 & 0x1ff) >> 5,&var_4h);
        if (-1 < iVar2) {
            *param_2 = var_4h >> (param_1 & 0x1f) & 1;
        }
    }
    return iVar2;
}


/* fcn.0000591d @ 0x591d */

uint __fastcall fcn.0000591d(uint param_1,uint param_2,uint32_t param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.0000557e();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.000056a5(param_2,~param_3,0);
    }
    return uVar2;
}


/* fcn.000058bd @ 0x58bd */

int __fastcall fcn.000058bd(uint32_t param_1,uint32_t *param_2)

{
    char cVar1;
    int iVar2;
    int32_t var_4h;
    
    var_4h = param_1;
    cVar1 = fcn.0000379f();
    if (cVar1 == '\0') {
        iVar2 = -0x7ffffffe;
    }
    else {
        iVar2 = fcn.000055cd((param_1 & 0x1ff) >> 5,&var_4h);
        if (-1 < iVar2) {
            *param_2 = var_4h >> (param_1 & 0x1f) & 1;
        }
    }
    return iVar2;
}


/* fcn.0000597a @ 0x597a */

uint __fastcall fcn.0000597a(uint param_1,uint param_2,uint32_t param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.0000557e();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.000056a5(param_2,~param_3,0);
    }
    return uVar2;
}


/* fcn.000054fe @ 0x54fe */

int __fastcall fcn.000054fe(uint32_t param_1,int param_2)

{
    int iVar1;
    
    iVar1 = fcn.00003713();
    return *((param_1 >> 0x10 & 0x1f) * 0x1e + 0x1a + iVar1) + (param_2 + (param_1 & 0x1ff) * 4) * 4;
}


/* fcn.00005552 @ 0x5552 */

uint __fastcall fcn.00005552(uint8_t *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
    uint32_t *puVar1;
    
    puVar1 = ((*param_1 | 0xfffffd00) << 8 | param_2 & 0xffff0000) << 8 | param_2 & 0xffff;
    *puVar1 = *puVar1 & param_3 | param_4;
    return 0;
}


/* fcn.0000594d @ 0x594d */

uint __fastcall fcn.0000594d(uint param_1,uint param_2,uint param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.0000557e();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.000056a5(param_2,0xffffffff,param_3);
    }
    return uVar2;
}


/* fcn.000059aa @ 0x59aa */

uint __fastcall fcn.000059aa(uint param_1,uint param_2,uint param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.0000557e();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.000056a5(param_2,0xffffffff,param_3);
    }
    return uVar2;
}


/* fcn.0000379f @ 0x379f */

uint32_t __fastcall fcn.0000379f(uint32_t param_1)

{
    uint16_t uVar1;
    char cVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t var_4h;
    
    cVar2 = fcn.00006150();
    uVar3 = param_1 >> 0x18 & 0xf;
    if (uVar3 == (cVar2 != '\0') + 8) {
        uVar3 = fcn.00003713();
        uVar5 = param_1 >> 0x10 & 0x1f;
        if (uVar5 < param_1) {
            iVar4 = fcn.00003713();
            uVar1 = *(uVar5 * 0x1e + 0x1c + iVar4);
            uVar3 = uVar1;
            if ((param_1 & 0x1ff) < uVar3) {
                return CONCAT31(uVar1 >> 8,1);
            }
        }
    }
    return uVar3 & 0xffffff00;
}


/* fcn.0000377f @ 0x377f */

bool __fastcall fcn.0000377f(int param_1)

{
    int iVar1;
    uint32_t var_4h;
    
    iVar1 = fcn.00005792(param_1);
    return -1 < iVar1 && param_1 == 0;
}


/* fcn.000037fe @ 0x37fe */

//WARNING: Removing unreachable block (ram,0x000038d8)
//WARNING: Removing unreachable block (ram,0x0000383f)
//WARNING: Removing unreachable block (ram,0x00003878)
//WARNING: Removing unreachable block (ram,0x00003902)

void fcn.000037fe(uint32_t param_1,uint32_t param_2)

{
    if (((~param_1 | param_2) & 0xfffffffe) != 0) {
        fcn.00005833();
    }
    if (((~param_1 | param_2) & 1) != 0) {
        fcn.000058bd();
    }
    fcn.00003713();
    fcn.000054fe();
    fcn.00005552(param_1,param_2);
    return;
}


/* fcn.0000530a @ 0x530a */

int __cdecl fcn.0000530a(int32_t arg_8h)

{
    char cVar1;
    uint32_t in_ECX;
    uint *in_EDX;
    uint32_t uVar2;
    bool bVar3;
    
    cVar1 = fcn.00006150();
    if (((cVar1 == '\0') && (cVar1 = fcn.000060e1(), cVar1 == '\0')) && (cVar1 = fcn.0000613f(), cVar1 == '\0'))
    goto code_r0x000054cc;
    uVar2 = in_ECX >> 0x10;
    if (uVar2 < 0xfc) {
        if (uVar2 == 0xfb) goto code_r0x0000540f;
        if (uVar2 < 0x98) {
            if (uVar2 != 0x97) {
                if (uVar2 < 0x28) {
                    if (uVar2 == 0x27) {
code_r0x000054ed:
                        *in_EDX = 1;
                        *arg_8h = 1;
                        return 0;
                    }
                    if (uVar2 != 8) {
                        if ((uVar2 == 0x10) || (uVar2 == 0x18)) {
                            *in_EDX = 1;
                            goto code_r0x00005387;
                        }
                        if (uVar2 != 0x1f) goto code_r0x000054cc;
                    }
                    *in_EDX = 0x11;
code_r0x00005387:
                    *arg_8h = 3;
                    return 0;
                }
                if (uVar2 == 0x2f) {
                    *in_EDX = 9;
                    goto code_r0x000053bc;
                }
                if ((uVar2 == 0x37) || (uVar2 == 0x47)) goto code_r0x000054ed;
                bVar3 = uVar2 == 0x8f;
                goto joined_r0x000053af;
            }
        }
        else if (uVar2 < 200) {
            if (((uVar2 != 199) && (uVar2 != 0x9f)) && ((uVar2 != 0xa7 && (uVar2 != 0xaf)))) {
                bVar3 = uVar2 == 0xbf;
joined_r0x000053af:
                if (!bVar3) {
code_r0x000054cc:
                    cVar1 = fcn.00006123();
                    return (-(cVar1 != '\0') & 0xfffffff5) + 0x8000000e;
                }
            }
        }
        else if (((uVar2 != 0xcf) && (uVar2 != 0xdf)) && (uVar2 != 0xef)) {
            bVar3 = uVar2 == 0xf7;
            goto joined_r0x000053af;
        }
    }
    else if (uVar2 < 0x172) {
        if (uVar2 == 0x171) {
code_r0x0000540f:
            *in_EDX = 9;
            *arg_8h = 7;
            return 0;
        }
        if (uVar2 < 0x11e) {
            if (uVar2 == 0x11d) {
                *in_EDX = 0x13;
                goto code_r0x000053bc;
            }
            if (((0x101 < uVar2) && (uVar2 != 0x105)) && (uVar2 != 0x109)) {
                bVar3 = uVar2 == 0x10d;
                goto joined_r0x000053af;
            }
        }
        else if (uVar2 != 0x121) {
            if ((uVar2 == 0x125) || (uVar2 == 0x129)) goto code_r0x000054ed;
            if (uVar2 != 0x161) goto code_r0x000054cc;
            goto code_r0x0000540f;
        }
    }
    else {
        if (0x194 < uVar2) {
            if ((uVar2 == 0x1be) || (uVar2 == 0x1de)) goto code_r0x000054ed;
            if (uVar2 != 0x1ed) goto code_r0x000054cc;
code_r0x000054e2:
            *in_EDX = 0;
            *arg_8h = 0;
            return 0;
        }
        if ((uVar2 != 0x194) && (0x173 < uVar2)) {
            if (uVar2 == 0x17f) goto code_r0x000054e2;
            if (0x186 < uVar2) {
                if (uVar2 < 0x18b) goto code_r0x000054e2;
                if (uVar2 == 0x18c) {
                    *in_EDX = 0;
                    goto code_r0x000053bc;
                }
            }
            goto code_r0x000054cc;
        }
    }
    *in_EDX = 0x1f;
code_r0x000053bc:
    *arg_8h = 1;
    return 0;
}


/* fcn.000039b8 @ 0x39b8 */

uint __fastcall fcn.000039b8(uint param_1,uint32_t param_2,uint32_t param_3)

{
    char cVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    
    if ((param_2 != 0) || (param_3 != 0)) {
        cVar1 = fcn.0000379f();
        if (cVar1 == '\0') {
            return 0x80000002;
        }
        cVar1 = fcn.0000377f();
        if (cVar1 == '\0') {
            return 0x80000003;
        }
        uVar2 = 0;
        uVar3 = 0xffffffff;
        if (param_2 != 0) {
            uVar3 = 0xfffc3fff;
            uVar2 = (param_2 & 0x1e) << 0xd;
        }
        if (param_3 != 0) {
            uVar2 = uVar2 | (param_3 & 6) << 7;
            uVar3 = uVar3 & 0xfffffcff;
        }
        fcn.000037fe(uVar3,uVar2);
    }
    return 0;
}


/* fcn.000055cd @ 0x55cd */

//WARNING: Control flow encountered bad instruction data

ulong __fastcall fcn.000055cd(uint param_1)

{
    uint uVar1;
    int32_t var_4h;
    
    uVar1 = fcn.00003713();
    switch(param_1) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    default:
        return CONCAT44(uVar1,0x80000003);
    }
}


/* fcn.000056a5 @ 0x56a5 */

uint __fastcall fcn.000056a5(int param_1,uint32_t param_2,int param_3,uint32_t param_4,uint32_t param_5)

{
    uint16_t uVar1;
    int iVar2;
    uint uVar3;
    uint32_t auStack_8 [2];
    
    auStack_8[0] = 0;
    iVar2 = fcn.00003713();
    if (param_1 == 6) {
        uVar1 = *((param_2 & 0x1f) * 0x1e + iVar2 + 0x16);
        fcn.00005809(auStack_8);
    }
    else {
        if (param_1 != 7) {
            return 0x80000003;
        }
        uVar1 = *((param_2 & 0x1f) * 0x1e + iVar2 + 0x18);
        fcn.00005893(auStack_8);
    }
    if (uVar1 == 0xffff) {
        return 0x80000003;
    }
    auStack_8[0] = auStack_8[0] & param_4 | param_5;
    uVar3 = fcn.000036ec(uVar1 + param_3 * 8,0);
    return uVar3;
}


/* fcn.000060e1 @ 0x60e1 */

bool __fastcall fcn.000060e1(uint param_1)

{
    char cVar1;
    
    cVar1 = fcn.000060a3(param_1);
    return cVar1 == '\x05';
}


/* fcn.000059f3 @ 0x59f3 */

uint32_t __fastcall fcn.000059f3(uint32_t param_1)

{
    char cVar1;
    
    cVar1 = fcn.00006150();
    return ((cVar1 != '\0') + 8) * 0x100 | param_1;
}


/* fcn.000059d7 @ 0x59d7 */

//WARNING: Variable defined which should be unmapped: var_4h

void __fastcall fcn.000059d7(uint param_1)

{
    int32_t var_4h;
    
    fcn.00003713(param_1,param_1);
    fcn.000059f3();
    return;
}


/* fcn.00005532 @ 0x5532 */

uint __fastcall fcn.00005532(uint8_t *param_1,uint32_t param_2)

{
    return *(((*param_1 | 0xfffffd00) << 8 | param_2 & 0xffff0000) << 8 | param_2 & 0xffff);
}


/* fcn.00005893 @ 0x5893 */

uint __fastcall fcn.00005893(uint param_1,uint param_2,uint param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.0000557e();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.000055cd(param_2,param_3);
    }
    return uVar2;
}


/* fcn.00005809 @ 0x5809 */

uint __fastcall fcn.00005809(uint param_1,uint param_2,uint param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.0000557e();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.000055cd(param_2,param_3);
    }
    return uVar2;
}


/* fcn.000036ec @ 0x36ec */

void __thiscall fcn.000036ec(uint param_1,int16_t param_2,int32_t param_3)

{
    int32_t in_stack_0000001c;
    int32_t in_stack_00000020;
    
    fcn.00005a0c(0xf9000,0,param_2,param_3,0,param_1,param_1,0,in_stack_0000001c,in_stack_00000020);
    return;
}


/* fcn.0000557e @ 0x557e */

uint32_t __fastcall fcn.0000557e(uint32_t param_1,uint32_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    
    iVar1 = fcn.00003713();
    uVar2 = fcn.000059f3();
    if (((uVar2 <= param_1) && (uVar2 = fcn.000059d7(), param_1 <= uVar2)) && ((param_1 & 0x1f) < param_1)) {
        uVar3 = *((param_1 & 0x1f) * 0x1e + 0x1c + iVar1) - 1;
        uVar2 = uVar3 >> 5;
        if (param_2 <= uVar2) {
            return CONCAT31(uVar3 >> 0xd,1);
        }
    }
    return uVar2 & 0xffffff00;
}


/* fcn.00005ed8 @ 0x5ed8 */

uint __cdecl fcn.00005ed8(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    uchar uStack_d;
    uint auStack_c [2];
    
    if (*(arg_8h + 0x3c) == 0) {
        auStack_c[0] = *((*(arg_8h + 0x40) << 8 | arg_ch & 0xf0000U) << 8 | *(*(arg_8h + 0x4c) + 8) | arg_ch & 0xffffU);
    }
    else if ((*(arg_8h + 0x3c) != 1) ||
            (iVar1 = fcn.00005a0c(**(arg_8h + 0x4c),(*(arg_8h + 0x4c))[1],arg_ch,0,0,0,0,*(arg_8h + 0x42),
                                  auStack_c,&uStack_d), iVar1 < 0)) {
        auStack_c[0] = 0xffffffff;
    }
    return auStack_c[0];
}


/* fcn.00006068 @ 0x6068 */

void __cdecl fcn.00006068(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00005ed8(arg_8h,arg_ch);
    fcn.00005f6a(arg_8h,arg_ch,uVar1 & arg_10h | arg_14h);
    return;
}


/* fcn.00005f6a @ 0x5f6a */

int32_t __cdecl fcn.00005f6a(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    int iVar1;
    uchar auStack_9 [5];
    
    if (*(arg_8h + 0x3c) == 0) {
        *((*(arg_8h + 0x40) << 8 | arg_ch & 0xf0000U) << 8 | *(*(arg_8h + 0x4c) + 8) | arg_ch & 0xffffU) = arg_10h;
        arg_10h = *((*(arg_8h + 0x40) << 8 | arg_ch & 0xf0000U) << 8 | *(*(arg_8h + 0x4c) + 8) | arg_ch & 0xffffU);
    }
    else if ((*(arg_8h + 0x3c) != 1) ||
            (iVar1 = fcn.00005a0c(**(arg_8h + 0x4c),(*(arg_8h + 0x4c))[1],arg_ch,0,*(arg_8h + 0x48),0,0,
                                  *(arg_8h + 0x42),&arg_10h,auStack_9), iVar1 < 0)) {
        arg_10h = -1;
    }
    return arg_10h;
}


/* fcn.00005c0b @ 0x5c0b */

uint32_t fcn.00005c0b(int param_1,uint32_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    
    if (*(param_1 + 0x3c) == 0) {
        return CONCAT31((param_2 & 0xffff) >> 8,
                        *((*(param_1 + 0x40) << 8 | param_2 & 0xf0000) << 8 | *(*(param_1 + 0x4c) + 8) |
                         param_2 & 0xffff));
    }
    iVar1 = *(param_1 + 0x3c) + -1;
    if (iVar1 != 0) {
        return CONCAT31(iVar1 >> 8,0xff);
    }
    uVar2 = fcn.00005ed8(param_1,param_2 - (param_2 & 3));
    return uVar2 >> ((param_2 & 3) << 3);
}


/* fcn.00005c66 @ 0x5c66 */

uint8_t __cdecl fcn.00005c66(int32_t arg_3ch,int8_t arg_40h,int32_t arg_4ch)

{
    int8_t iVar1;
    int in_stack_00000004;
    uint32_t in_stack_00000008;
    uint8_t in_stack_0000000c;
    
    if (*(in_stack_00000004 + 0x3c) == 0) {
        *((*(in_stack_00000004 + 0x40) << 8 | in_stack_00000008 & 0xf0000) << 8 | *(*(in_stack_00000004 + 0x4c) + 8) |
         in_stack_00000008 & 0xffff) = in_stack_0000000c;
        in_stack_0000000c =
             *((*(in_stack_00000004 + 0x40) << 8 | in_stack_00000008 & 0xf0000) << 8 |
               *(*(in_stack_00000004 + 0x4c) + 8) | in_stack_00000008 & 0xffff);
    }
    else if (*(in_stack_00000004 + 0x3c) == 1) {
        iVar1 = (in_stack_00000008 & 3) << 3;
        fcn.00006068(in_stack_00000004,in_stack_00000008 - (in_stack_00000008 & 3),~(0xff << iVar1),
                     in_stack_0000000c << iVar1);
    }
    else {
        in_stack_0000000c = 0xff;
    }
    return in_stack_0000000c;
}


/* fcn.00005d67 @ 0x5d67 */

uint32_t fcn.00005d67(int param_1,uint32_t param_2)

{
    uint32_t uVar1;
    
    if (*(param_1 + 0x3c) == 0) {
        return *((*(param_1 + 0x40) << 8 | param_2 & 0xf0000) << 8 | *(*(param_1 + 0x4c) + 8) | param_2 & 0xffff);
    }
    if (*(param_1 + 0x3c) != 1) {
        return 0xffff;
    }
    uVar1 = fcn.00005ed8(param_1,param_2 - (param_2 & 3));
    return uVar1 >> ((param_2 & 3) << 3);
}


/* fcn.00005dc9 @ 0x5dc9 */

uint16_t __cdecl fcn.00005dc9(int32_t arg_3ch,int8_t arg_40h,int32_t arg_4ch)

{
    int8_t iVar1;
    int in_stack_00000004;
    uint32_t in_stack_00000008;
    uint16_t in_stack_0000000c;
    
    if (*(in_stack_00000004 + 0x3c) == 0) {
        *((*(in_stack_00000004 + 0x40) << 8 | in_stack_00000008 & 0xf0000) << 8 | *(*(in_stack_00000004 + 0x4c) + 8) |
         in_stack_00000008 & 0xffff) = in_stack_0000000c;
        in_stack_0000000c =
             *((*(in_stack_00000004 + 0x40) << 8 | in_stack_00000008 & 0xf0000) << 8 |
               *(*(in_stack_00000004 + 0x4c) + 8) | in_stack_00000008 & 0xffff);
    }
    else if (*(in_stack_00000004 + 0x3c) == 1) {
        iVar1 = (in_stack_00000008 & 3) << 3;
        fcn.00006068(in_stack_00000004,in_stack_00000008 - (in_stack_00000008 & 3),~(0xffff << iVar1),
                     in_stack_0000000c << iVar1);
    }
    else {
        in_stack_0000000c = 0xffff;
    }
    return in_stack_0000000c;
}


