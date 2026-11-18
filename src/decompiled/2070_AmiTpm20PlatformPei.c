// decompiled by r2ghidra: 2070_AmiTpm20PlatformPei.te
// functions: 75

/* fcn.00001939 @ 0x1939 */

int __fastcall fcn.00001939(uint param_1,int *param_2)

{
    int iVar1;
    int iStack_30;
    int iStack_2c;
    int iStack_28;
    uchar auStack_24 [5];
    char cStack_1f;
    
    iStack_30 = 0;
    iVar1 = (**(*param_2 + 0x20))(param_2,0xa9f0,0,0,&iStack_30);
    if ((-1 < iVar1) && (iStack_30 != 0)) {
        iVar1 = (**(*param_2 + 0x20))(param_2,0xa980,0,0,&iStack_28);
        if ((iStack_28 == 0) || (iVar1 < 0)) {
            iVar1 = -0x7ffffff2;
        }
        else {
            iVar1 = (**(iStack_28 + 4))(param_2,auStack_24);
            if ((-1 < iVar1) && (iVar1 = (**(*param_2 + 0x28))(param_2,&iStack_2c), -1 < iVar1)) {
                iVar1 = fcn.000010db(iStack_2c);
                if ((iVar1 < 0) || (iStack_2c == 0x11)) {
                    iVar1 = 0;
                }
                else {
                    if (((iStack_2c == 0x20) && (fcn.000004ad(0), iStack_30 != 0)) && (fcn.00000576(), iStack_30 != 0)
                       ) {
                        fcn.00000576();
                    }
                    if (cStack_1f == '\x02') {
                        fcn.000013f4();
                    }
                    fcn.00000bc3(param_2,iStack_30);
                    iVar1 = fcn.00001ccd();
                    if (-1 < iVar1) {
                        iVar1 = fcn.00001752();
                    }
                }
            }
        }
    }
    return iVar1;
}


/* entry0 @ 0x4a4 */

int entry0(uint param_1,int *param_2)

{
    int iVar1;
    int iStack_30;
    int iStack_2c;
    int iStack_28;
    uchar auStack_24 [5];
    char cStack_1f;
    
    iStack_30 = 0;
    iVar1 = (**(*param_2 + 0x20))(param_2,0xa9f0,0,0,&iStack_30);
    if ((-1 < iVar1) && (iStack_30 != 0)) {
        iVar1 = (**(*param_2 + 0x20))(param_2,0xa980,0,0,&iStack_28);
        if ((iStack_28 == 0) || (iVar1 < 0)) {
            iVar1 = -0x7ffffff2;
        }
        else {
            iVar1 = (**(iStack_28 + 4))(param_2,auStack_24);
            if ((-1 < iVar1) && (iVar1 = (**(*param_2 + 0x28))(param_2,&iStack_2c), -1 < iVar1)) {
                iVar1 = fcn.000010db(iStack_2c);
                if ((iVar1 < 0) || (iStack_2c == 0x11)) {
                    iVar1 = 0;
                }
                else {
                    if (((iStack_2c == 0x20) && (fcn.000004ad(0), iStack_30 != 0)) && (fcn.00000576(), iStack_30 != 0)
                       ) {
                        fcn.00000576();
                    }
                    if (cStack_1f == '\x02') {
                        fcn.000013f4();
                    }
                    fcn.00000bc3(param_2,iStack_30);
                    iVar1 = fcn.00001ccd();
                    if (-1 < iVar1) {
                        iVar1 = fcn.00001752();
                    }
                }
            }
        }
    }
    return iVar1;
}


/* fcn.00001c9e @ 0x1c9e */

uint __fastcall fcn.00001c9e(uint param_1)

{
    uint16_t uVar1;
    
    uVar1 = param_1 >> 0x10;
    return CONCAT22(param_1 << 8 | param_1 >> 8,uVar1 << 8 | uVar1 >> 8);
}


/* fcn.0000064a @ 0x64a */

int __cdecl fcn.0000064a(int32_t arg_8h,uint32_t arg_ch,uint32_t arg_10h,uint32_t arg_14h)

{
    int iVar1;
    uint32_t uVar2;
    
    if ((((((arg_ch == 0) && (arg_8h != -1)) && (arg_14h == 0)) && ((arg_10h < -arg_8h - 1U && (0x3f < arg_10h)))) &&
        ((*(arg_8h + 0x28) == 0x4856465f &&
         ((uVar2 = *(arg_8h + 0x34), 0x3f < *(arg_8h + 0x34) && (uVar2 < 0xffffffec)))))) && (uVar2 + 0x14 <= arg_10h))
    {
        iVar1 = arg_8h + uVar2;
    }
    else {
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.000097e5 @ 0x97e5 */

void fcn.000097e5(uint param_1,uint param_2,int32_t param_3)

{
    fcn.00009880(0,param_3,&stack0x00000010);
    return;
}


/* fcn.00009880 @ 0x9880 */

uint32_t __cdecl fcn.00009880(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

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
        if ((arg_8h & 0x2000U) != 0) goto code_r0x000098be;
    }
    else {
        if (((arg_8h & 0x2000U) == 0) && (in_ECX == 0)) {
            return 0;
        }
code_r0x000098be:
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
        uVar3 = fcn.00001bdf();
        if (1000000 < uVar3) {
            return 0;
        }
        iStack_74 = 1;
        uStack_54 = 0xff;
    }
    else {
        uVar3 = fcn.00001bba();
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
code_r0x000099ab:
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
            if (uStack_50 == 10) goto code_r0x00009ff5;
            if (uStack_50 == 0xd) goto code_r0x00009c3a;
            puVar8 = arg_ch;
            if (uStack_50 == 0x25) {
code_r0x00009a1b:
code_r0x00009a1f:
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
                        goto code_r0x00009ba7;
                    }
                    if (uStack_50 == 0) {
                        uStack_68 = 0;
                        arg_ch = puVar8;
                        goto code_r0x00009bba;
                    }
                    if (uStack_50 == 0x20) {
                        arg_8h = arg_8h | 4;
                        goto code_r0x00009ba7;
                    }
                    if (uStack_50 != 0x2a) {
                        if (uStack_50 == 0x2b) {
                            arg_8h = arg_8h | 2;
                        }
                        else {
                            if (uStack_50 != 0x2c) goto code_r0x00009bba;
                            arg_8h = arg_8h | 8;
                        }
                        goto code_r0x00009ba7;
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
                    goto code_r0x00009a1b;
                }
                if (uStack_50 == 0x2e) {
                    arg_8h = arg_8h | 0x800;
                    goto code_r0x00009ba7;
                }
                if (uStack_50 == 0x30) {
                    if ((arg_8h & 0x800U) == 0) {
                        arg_8h = arg_8h | 0x20;
                        uStack_6c = arg_8h;
                    }
                }
                else {
                    if (uStack_50 < 0x31) goto code_r0x00009bba;
                    if (0x39 < uStack_50) goto code_r0x00009b0b;
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
                goto code_r0x00009a1f;
            }
            goto code_r0x00009a04;
        }
        goto code_r0x0000a36b;
    }
code_r0x0000a36f:
    if ((arg_8h & 0x2000U) == 0) {
        fcn.00009802(1,0,uStack_5c);
        uVar3 = uStack_7c - uStack_38;
    }
    return uVar3 / uStack_5c;
code_r0x00009b0b:
    if ((uStack_50 != 0x4c) && (uStack_50 != 0x6c)) goto code_r0x00009bba;
    arg_8h = arg_8h | 0x10;
code_r0x00009ba7:
    puVar8 = arg_ch;
    uStack_6c = arg_8h;
    goto code_r0x00009a1b;
code_r0x00009bba:
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
                puStack_78 = 0xae00;
            }
            else {
                fcn.0000a3b0(auStack_30,0x26,0,0xae0c,*piVar4);
code_r0x00009cea:
                puStack_78 = auStack_30;
            }
code_r0x00009cee:
            puVar8 = arg_ch;
        }
        else if (uStack_50 == 10) {
code_r0x00009ff5:
            puVar8 = arg_ch + iStack_74;
            puStack_78 = 0xae70;
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
                if (uStack_50 == 0x53) goto code_r0x00009d8a;
                if (uStack_50 == 0x58) goto code_r0x00009e65;
                if (uStack_50 == 0x61) goto code_r0x00009d94;
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
                    goto code_r0x00009a08;
                }
                if (uStack_50 != 100) goto code_r0x00009a04;
                goto code_r0x00009e7b;
            }
code_r0x00009c3a:
            puVar8 = arg_ch + iStack_74;
            if (iStack_74 == 1) {
                uVar3 = 0;
            }
            else {
                uVar3 = puVar8[1] << 8;
            }
            uStack_50 = (*puVar8 | uVar3) & uStack_54;
            if (uStack_50 == 10) {
                puStack_78 = 0xae70;
                arg_ch = puVar8;
                goto code_r0x00009cee;
            }
            puStack_78 = 0xae74;
            puVar8 = arg_ch;
        }
    }
    else {
        if (uStack_50 == 0x70) {
            arg_8h = arg_8h & 0xffffffc9;
code_r0x00009e65:
            arg_8h = arg_8h | 0x20;
code_r0x00009e68:
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
                        puStack_78 = (uVar3 & 0x7fffffff) * 0x15 + 0xaefb;
                        goto code_r0x00009e36;
                    }
                }
                else if (uVar3 < 6) {
                    puStack_78 = uVar3 * 0x19 + 0xae78;
code_r0x00009e36:
                    if (puStack_78 != auStack_30) goto code_r0x0000a032;
                }
                fcn.0000a3b0(auStack_30,0x26,0,0xae68,uVar3);
                goto code_r0x0000a032;
            }
            if (uStack_50 == 0x73) {
code_r0x00009d8a:
                arg_8h = arg_8h | 0x400;
                uStack_6c = arg_8h;
code_r0x00009d94:
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
                    puStack_78 = 0xadf0;
                    uStack_6c = arg_8h;
                }
                uStack_68 = uStack_68 & -((arg_8h & 0x800U) != 0);
                goto code_r0x0000a032;
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
                    fcn.0000a3b0(auStack_30,0x26,0,0xae4c,*(uVar3 + 2));
                    goto code_r0x00009cea;
                }
                puStack_78 = 0xae40;
                goto code_r0x00009cee;
            }
            if (uStack_50 != 0x75) {
                if (uStack_50 != 0x78) {
code_r0x00009a04:
                    puStack_78 = &uStack_50;
code_r0x00009a08:
                    arg_8h = arg_8h | 0x400;
                    puVar8 = arg_ch;
                    uStack_6c = arg_8h;
                    goto code_r0x0000a032;
                }
                goto code_r0x00009e68;
            }
        }
        if (-1 < uVar3) {
            uVar3 = uVar3 & 0xfffffffd | 0x4000;
        }
code_r0x00009e7b:
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
code_r0x00009f48:
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
            else if ((uVar3 & 0x4010) == 0x4000) goto code_r0x00009f48;
        }
        iVar5 = fcn.00009836(uVar7,uVar6);
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
code_r0x0000a032:
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
            uStack_7c = fcn.00009802(uStack_48 - uStack_68,0x20,uStack_5c);
        }
    }
    if (bVar10) {
        if (((uStack_7f != 0) && (uStack_64 = uStack_64 + uStack_5c, (arg_8h & 0x2000U) == 0)) && (uStack_7c != 0)) {
            uStack_7c = fcn.00009802(1,uStack_7f,uStack_5c);
        }
        iVar5 = uStack_68 - uStack_60;
        uStack_64 = uStack_64 + iVar5 * uStack_5c;
        if (((arg_8h & 0x2000U) != 0) || (uStack_7c == 0)) goto code_r0x0000a209;
        uVar3 = 0x30;
    }
    else {
        uStack_64 = uStack_64 + (uStack_68 - uStack_60) * uStack_5c;
        if (((arg_8h & 0x2000U) == 0) && (uStack_7c != 0)) {
            uStack_7c = fcn.00009802(uStack_68 - uStack_60,0x20,uStack_5c);
        }
        if (((uStack_7f == 0) || (uStack_64 = uStack_64 + uStack_5c, (arg_8h & 0x2000U) != 0)) || (uStack_7c == 0))
        goto code_r0x0000a209;
        uVar3 = uStack_7f;
        iVar5 = 1;
    }
    uStack_7c = fcn.00009802(iVar5,uVar3,uStack_5c);
code_r0x0000a209:
    uVar3 = arg_8h & 0x2000;
    if ((uStack_7f != 0) < uStack_60) {
        uVar7 = uStack_4c;
        puVar9 = puStack_78;
        puStack_78 = uStack_7f != 0;
        do {
            if ((*puVar9 == '\0') && ((uVar7 < 2 || (*(puVar9 + 1) == '\0')))) break;
            uStack_64 = uStack_64 + uStack_5c;
            if ((uVar3 == 0) && (uStack_7c != 0)) {
                uStack_7c = fcn.00009802(1,CONCAT11(*(puVar9 + 1),*puVar9) & uStack_3c,uStack_5c);
            }
            uVar6 = uStack_4c;
            puVar9 = puVar9 + uVar7;
            puVar2 = puStack_78 + 1;
            if (bVar11) {
                uStack_44 = uStack_44 + 1;
                if (uStack_44 != 3) goto code_r0x0000a2ea;
                puStack_78 = puStack_78 + 2;
                uStack_44 = 0;
                if (uStack_60 <= puStack_78) break;
                uStack_64 = uStack_64 + uStack_5c;
                uVar7 = uStack_4c;
                if ((uVar3 == 0) && (uStack_7c != 0)) {
                    uStack_7c = fcn.00009802(1,0x2c,uStack_5c);
                    uVar7 = uVar6;
                    puVar2 = puStack_78;
                    goto code_r0x0000a2ea;
                }
            }
            else {
code_r0x0000a2ea:
                puStack_78 = puVar2;
            }
        } while (puStack_78 < uStack_60);
        arg_8h = uStack_6c;
    }
    if (uStack_34 == 0x201) {
        uStack_64 = uStack_64 + (uStack_48 - uStack_68) * uStack_5c;
        if ((uVar3 == 0) && (uStack_7c != 0)) {
            uStack_7c = fcn.00009802(uStack_48 - uStack_68,0x20,uStack_5c);
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
    if (uStack_50 == 0) goto code_r0x0000a36b;
    goto code_r0x000099ab;
code_r0x0000a36b:
    uVar3 = uStack_64;
    goto code_r0x0000a36f;
}


/* fcn.00001bdf @ 0x1bdf */

uint32_t __fastcall fcn.00001bdf(char *param_1,uint32_t param_2)

{
    uint32_t uVar1;
    
    if (((param_1 != NULL) && (param_2 != 0)) && (uVar1 = 0, *param_1 != '\0')) {
        do {
            if (param_2 - 1 <= uVar1) {
                return param_2;
            }
            uVar1 = uVar1 + 1;
        } while (param_1[uVar1] != '\0');
        return uVar1;
    }
    return 0;
}


/* fcn.00001c06 @ 0x1c06 */

uint __thiscall fcn.00001c06(char *param_1,int param_2,uint32_t param_3)

{
    char cVar1;
    uint uVar2;
    uint32_t uVar3;
    
    if (param_1 == NULL) {
        return 0x80000002;
    }
    if (param_2 == 0) {
        uVar2 = 0x80000002;
    }
    else if (param_3 < 0xf4241) {
        uVar3 = fcn.00001bdf();
        if ((param_3 < 0x29) || (uVar3 < 0x29)) {
            if (param_3 < uVar3) {
                uVar3 = param_3;
            }
            cVar1 = fcn.00001b97(param_2,uVar3 + 1);
            if (cVar1 == '\0') {
                if (uVar3 != 0) {
                    param_2 = param_2 - param_1;
                    do {
                        if (param_1[param_2] == '\0') break;
                        *param_1 = param_1[param_2];
                        param_1 = param_1 + 1;
                        uVar3 = uVar3 - 1;
                    } while (uVar3 != 0);
                }
                *param_1 = '\0';
                uVar2 = 0;
            }
            else {
                uVar2 = 0x8000000f;
            }
        }
        else {
            uVar2 = 0x80000005;
        }
    }
    else {
        uVar2 = 0x80000002;
    }
    return uVar2;
}


/* fcn.00001b97 @ 0x1b97 */

uint32_t __thiscall fcn.00001b97(uint32_t param_1,uint32_t param_2,int param_3)

{
    uint32_t uVar1;
    
    if (param_2 <= param_1) {
        uVar1 = param_3 + param_2;
        if (param_1 < uVar1) goto code_r0x00001bb4;
        if (param_2 < param_1) goto code_r0x00001bb7;
    }
    uVar1 = param_1 + 0x29;
    if (uVar1 <= param_2) {
code_r0x00001bb7:
        return uVar1 & 0xffffff00;
    }
code_r0x00001bb4:
    return CONCAT31(uVar1 >> 8,1);
}


/* fcn.000006b3 @ 0x6b3 */

uint __cdecl fcn.000006b3(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    uchar uVar1;
    int iVar2;
    uchar *in_ECX;
    int32_t *extraout_ECX;
    int32_t *piVar3;
    uint uVar4;
    int32_t var_24h;
    uint uStack_24;
    uint uStack_20;
    uint uStack_1c;
    ushort uStack_18;
    uchar uStack_16;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int16_t var_4h;
    
    var_10h = *0xaab0;
    var_ch = *0xaab4;
    var_24h = *0xaac0;
    var_8h = *0xaab8;
    var_4h = *0xaabc;
    uStack_24 = *0xaac4;
    uStack_20 = *0xaac8;
    uStack_1c = *0xaacc;
    uStack_18 = *0xaad0;
    uStack_16 = *0xaad2;
    if (in_ECX == NULL) {
        return 0x80000002;
    }
    if ((arg_8h == -0xdae000) && (arg_ch == 0)) {
        if ((arg_10h == 0x6de000) && (arg_14h == 0)) {
            *in_ECX = 7;
            piVar3 = &var_10h;
            uVar4 = 7;
            goto code_r0x000007b4;
        }
    }
    else if ((arg_8h == -0x590000) && (arg_ch == 0)) {
        if ((arg_10h == 0x90000) && (arg_14h == 0)) {
            *in_ECX = 0x12;
            piVar3 = &var_24h;
            uVar4 = 0x12;
            goto code_r0x000007b4;
        }
    }
    else if ((((arg_8h == -0x2f0000) && (arg_ch == 0)) && (arg_10h == 0x80000)) && (arg_14h == 0)) {
        *in_ECX = 5;
        piVar3 = &var_8h;
        uVar4 = 5;
        goto code_r0x000007b4;
    }
    iVar2 = fcn.0000064a(arg_8h,arg_ch,arg_10h,arg_14h);
    if (iVar2 != 0) {
        *in_ECX = 0x29;
        fcn.000097e5(in_ECX + 1,0x29,0xaad4,iVar2);
        return 0;
    }
    uVar1 = fcn.00001bdf();
    *in_ECX = uVar1;
    uVar4 = fcn.00001bdf();
    piVar3 = extraout_ECX;
code_r0x000007b4:
    uVar4 = fcn.00001c06(piVar3,uVar4);
    return uVar4;
}


/* fcn.00002f6a @ 0x2f6a */

void __fastcall fcn.00002f6a(uint *param_1)

{
    param_1[6] = 0;
    param_1[5] = 0;
    *param_1 = 0x67452301;
    param_1[1] = 0xefcdab89;
    param_1[2] = 0x98badcfe;
    param_1[3] = 0x10325476;
    param_1[4] = 0xc3d2e1f0;
    return;
}


/* fcn.00005905 @ 0x5905 */

void __fastcall fcn.00005905(uint *param_1)

{
    param_1[10] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0x6a09e667;
    param_1[3] = 0xbb67ae85;
    param_1[4] = 0x3c6ef372;
    param_1[5] = 0xa54ff53a;
    param_1[6] = 0x510e527f;
    param_1[7] = 0x9b05688c;
    param_1[8] = 0x1f83d9ab;
    param_1[9] = 0x5be0cd19;
    return;
}


/* fcn.00005b91 @ 0x5b91 */

uint __fastcall fcn.00005b91(uint *param_1)

{
    if (param_1 == NULL) {
        return 0xffffffff;
    }
    param_1[0x12] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0xc1059ed8;
    param_1[3] = 0xcbbb9d5d;
    param_1[4] = 0x367cd507;
    param_1[5] = 0x629a292a;
    param_1[6] = 0x3070dd17;
    param_1[7] = 0x9159015a;
    param_1[8] = 0xf70e5939;
    param_1[9] = 0x152fecd8;
    param_1[10] = 0xffc00b31;
    param_1[0xb] = 0x67332667;
    param_1[0xc] = 0x68581511;
    param_1[0xd] = 0x8eb44a87;
    param_1[0xe] = 0x64f98fa7;
    param_1[0xf] = 0xdb0c2e0d;
    param_1[0x10] = 0xbefa4fa4;
    param_1[0x11] = 0x47b5481d;
    return 0;
}


/* fcn.0000958e @ 0x958e */

uint __fastcall fcn.0000958e(uint *param_1)

{
    if (param_1 == NULL) {
        return 0xffffffff;
    }
    param_1[0x12] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0xf3bcc908;
    param_1[3] = 0x6a09e667;
    param_1[4] = 0x84caa73b;
    param_1[5] = 0xbb67ae85;
    param_1[6] = 0xfe94f82b;
    param_1[7] = 0x3c6ef372;
    param_1[8] = 0x5f1d36f1;
    param_1[9] = 0xa54ff53a;
    param_1[10] = 0xade682d1;
    param_1[0xb] = 0x510e527f;
    param_1[0xc] = 0x2b3e6c1f;
    param_1[0xd] = 0x9b05688c;
    param_1[0xe] = 0xfb41bd6b;
    param_1[0xf] = 0x1f83d9ab;
    param_1[0x10] = 0x137e2179;
    param_1[0x11] = 0x5be0cd19;
    return 0;
}


/* fcn.00005c55 @ 0x5c55 */

uint __fastcall fcn.00005c55(uint *param_1)

{
    fcn.00000108(param_1,0x6c,0);
    *param_1 = 0x7380166f;
    param_1[1] = 0x4914b2b9;
    param_1[2] = 0x172442d7;
    param_1[3] = 0xda8a0600;
    param_1[4] = 0xa96f30bc;
    param_1[5] = 0x163138aa;
    param_1[6] = 0xe38dee4d;
    param_1[7] = 0xb0fb0e4e;
    return 1;
}


/* fcn.00000108 @ 0x108 */

uchar * fcn.00000108(uchar *param_1,int param_2,uchar param_3)

{
    uchar *puVar1;
    
    puVar1 = param_1;
    for (; param_2 != 0; param_2 = param_2 + -1) {
        *puVar1 = param_3;
        puVar1 = puVar1 + 1;
    }
    return param_1;
}


/* fcn.00001a5b @ 0x1a5b */

int32_t fcn.00001a5b(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00001aa7 @ 0x1aa7 */

int fcn.00001aa7(void)

{
    char cVar1;
    int iVar2;
    
    do {
        iVar2 = fcn.00001a86();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00001b73();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.00002f95 @ 0x2f95 */

void __thiscall fcn.00002f95(int param_1,uint32_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    
    uVar2 = *(param_1 + 0x14) >> 3 & 0x3f;
    uVar3 = *(param_1 + 0x14) + param_2 * 8;
    *(param_1 + 0x14) = uVar3;
    if (uVar3 < param_2 << 3) {
        *(param_1 + 0x18) = *(param_1 + 0x18) + 1;
    }
    *(param_1 + 0x18) = *(param_1 + 0x18) + (param_2 >> 0x1d);
    if (uVar2 + param_2 < 0x40) {
        iVar4 = 0;
    }
    else {
        iVar1 = -uVar2;
        iVar4 = iVar1 + 0x40;
        if (iVar4 != 0) {
            fcn.00001b27(iVar4);
        }
        fcn.00001d23();
        for (uVar3 = iVar1 + 0x7f; uVar3 < param_2; uVar3 = uVar3 + 0x40) {
            fcn.00001d23();
            iVar4 = iVar4 + 0x40;
        }
    }
    if (param_2 - iVar4 != 0) {
        fcn.00001b27(param_2 - iVar4);
    }
    return;
}


/* fcn.0000302b @ 0x302b */

void __fastcall fcn.0000302b(int param_1,int param_2)

{
    uint32_t uVar1;
    int iStack_8;
    int iStack_4;
    
    uVar1 = 0;
    iStack_8 = param_1;
    iStack_4 = param_1;
    do {
        *(&iStack_8 + uVar1) = *((-(uVar1 < 4) & 4) + 0x14 + param_2) >> (('\x03' - (uVar1 & 3)) * '\b' & 0x1f);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 8);
    fcn.00002f95(1);
    while ((*(param_2 + 0x14) & 0x1f8) != 0x1c0) {
        fcn.00002f95(1);
    }
    fcn.00002f95(8);
    uVar1 = 0;
    do {
        *(uVar1 + param_1) = *(param_2 + (uVar1 & 0xfffffffc)) >> (('\x03' - (uVar1 & 3)) * '\b' & 0x1f);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 0x14);
    fcn.00000108(param_2 + 0x1c,0x40,0);
    fcn.00000108(param_2,0x14,0);
    fcn.00000108(param_2 + 0x14,8,0);
    fcn.00000108(&iStack_8,8,0);
    return;
}


/* section..text @ 0xc8 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 42751 named .text
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


/* fcn.00005948 @ 0x5948 */

uint __fastcall fcn.00005948(uint32_t *param_1,uint32_t *param_2,uint32_t param_3)

{
    uint uVar1;
    int iVar2;
    uint32_t uVar3;
    
    if (param_1[10] < 0x41) {
        while (param_3 != 0) {
            if ((param_1[10] == 0) && (0x3f < param_3)) {
                if (param_1 + 0xb != param_2) {
                    section..text(param_1 + 0xb,param_2,0x40);
                }
                iVar2 = fcn.000030f1();
                if (iVar2 < 0) {
                    return 0xffffffff;
                }
                uVar3 = *param_1;
                *param_1 = *param_1 + 0x200;
                param_1[1] = param_1[1] + (0xfffffdff < uVar3);
                param_2 = param_2 + 0x10;
                param_3 = param_3 - 0x40;
            }
            else {
                uVar3 = 0x40 - param_1[10];
                if (param_3 < 0x40 - param_1[10]) {
                    uVar3 = param_3;
                }
                if (uVar3 != 0) {
                    fcn.00001b27(uVar3);
                }
                param_1[10] = param_1[10] + uVar3;
                param_2 = param_2 + uVar3;
                param_3 = param_3 - uVar3;
                if (param_1[10] == 0x40) {
                    iVar2 = fcn.000030f1();
                    if (iVar2 < 0) {
                        return 0xffffffff;
                    }
                    uVar3 = *param_1;
                    *param_1 = *param_1 + 0x200;
                    param_1[1] = param_1[1] + (0xfffffdff < uVar3);
                    param_1[10] = 0;
                }
            }
        }
        uVar1 = 0;
    }
    else {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}


/* fcn.00009611 @ 0x9611 */

int __fastcall fcn.00009611(uint32_t *param_1,int param_2,uint32_t param_3)

{
    int iVar1;
    uint32_t uVar2;
    
    if (((param_1 == NULL) || (param_2 == 0)) || (0x80 < param_1[0x12])) {
        iVar1 = -1;
    }
    else {
        while (param_3 != 0) {
            if ((param_1[0x12] == 0) && (0x7f < param_3)) {
                iVar1 = fcn.0000880b();
                if (iVar1 != 0) {
                    return iVar1;
                }
                uVar2 = *param_1;
                *param_1 = *param_1 + 0x400;
                param_1[1] = param_1[1] + (0xfffffbff < uVar2);
                param_3 = param_3 - 0x80;
            }
            else {
                uVar2 = 0x80 - param_1[0x12];
                if (param_3 < 0x80 - param_1[0x12]) {
                    uVar2 = param_3;
                }
                if (uVar2 != 0) {
                    fcn.00001b27(uVar2);
                }
                param_1[0x12] = param_1[0x12] + uVar2;
                param_3 = param_3 - uVar2;
                if (param_1[0x12] == 0x80) {
                    iVar1 = fcn.0000880b();
                    if (iVar1 != 0) {
                        return iVar1;
                    }
                    uVar2 = *param_1;
                    *param_1 = *param_1 + 0x400;
                    param_1[1] = param_1[1] + (0xfffffbff < uVar2);
                    param_1[0x12] = 0;
                }
            }
        }
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.000085c7 @ 0x85c7 */

uint __thiscall fcn.000085c7(int param_1,uint32_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    
    if (param_2 != 0) {
        uVar2 = *(param_1 + 0x20) + param_2 * 8;
        if (uVar2 < *(param_1 + 0x20)) {
            *(param_1 + 0x24) = *(param_1 + 0x24) + 1;
        }
        *(param_1 + 0x20) = uVar2;
        iVar1 = *(param_1 + 0x68);
        *(param_1 + 0x24) = *(param_1 + 0x24) + (param_2 >> 0x1d);
        if (iVar1 != 0) {
            if ((param_2 < 0x40) && (iVar1 + param_2 < 0x40)) {
                fcn.00001b27(param_2);
                *(param_1 + 0x68) = *(param_1 + 0x68) + param_2;
                return 1;
            }
            iVar1 = 0x40 - iVar1;
            if (iVar1 != 0) {
                fcn.00001b27(iVar1);
            }
            fcn.00005ca1(1);
            *(param_1 + 0x68) = 0;
            param_2 = param_2 - iVar1;
            fcn.00000108(param_1 + 0x28,0x40,0);
        }
        uVar2 = param_2 >> 6;
        if (uVar2 != 0) {
            fcn.00005ca1(uVar2);
            param_2 = param_2 + uVar2 * -0x40;
        }
        if (param_2 != 0) {
            *(param_1 + 0x68) = param_2;
            fcn.00001b27(param_2);
        }
    }
    return 1;
}


/* fcn.00005a02 @ 0x5a02 */

uint __fastcall fcn.00005a02(uint32_t *param_1,uchar *param_2)

{
    uint32_t uVar1;
    uchar uVar2;
    uint uVar3;
    uint32_t uVar4;
    
    uVar4 = param_1[10];
    if (uVar4 < 0x40) {
        uVar1 = *param_1;
        *param_1 = *param_1 + uVar4 * 8;
        param_1[1] = param_1[1] + CARRY4(uVar1,uVar4 * 8);
        *(uVar4 + 0x2c + param_1) = 0x80;
        param_1[10] = param_1[10] + 1;
        uVar4 = param_1[10];
        if (0x38 < uVar4) {
            while (uVar4 < 0x40) {
                *(param_1 + uVar4 + 0x2c) = 0;
                param_1[10] = param_1[10] + 1;
                uVar4 = param_1[10];
            }
            fcn.000030f1();
            param_1[10] = 0;
        }
        while (param_1[10] < 0x38) {
            *(param_1 + param_1[10] + 0x2c) = 0;
            param_1[10] = param_1[10] + 1;
        }
        *(param_1 + 0x19) = *(param_1 + 7);
        *(param_1 + 0x65) = *(param_1 + 6);
        uVar2 = fcn.0000a7a8();
        *(param_1 + 0x66) = uVar2;
        uVar2 = fcn.0000a7a8();
        *(param_1 + 0x67) = uVar2;
        *(param_1 + 0x1a) = *param_1 >> 0x18;
        *(param_1 + 0x69) = *param_1 >> 0x10;
        *(param_1 + 0x6a) = *param_1 >> 8;
        *(param_1 + 0x6b) = *param_1;
        fcn.000030f1();
        *param_2 = *(param_1 + 0xb);
        param_2[1] = *(param_1 + 10);
        param_2[2] = *(param_1 + 9);
        param_2[3] = param_1[2];
        param_2[4] = *(param_1 + 0xf);
        param_2[5] = *(param_1 + 0xe);
        param_2[6] = *(param_1 + 0xd);
        param_2[7] = param_1[3];
        param_2[8] = *(param_1 + 0x13);
        param_2[9] = *(param_1 + 0x12);
        param_2[10] = *(param_1 + 0x11);
        param_2[0xb] = param_1[4];
        param_2[0xc] = *(param_1 + 0x17);
        param_2[0xd] = *(param_1 + 0x16);
        param_2[0xe] = *(param_1 + 0x15);
        param_2[0xf] = param_1[5];
        param_2[0x10] = *(param_1 + 0x1b);
        param_2[0x11] = *(param_1 + 0x1a);
        param_2[0x12] = *(param_1 + 0x19);
        param_2[0x13] = param_1[6];
        param_2[0x14] = *(param_1 + 0x1f);
        param_2[0x15] = *(param_1 + 0x1e);
        param_2[0x16] = *(param_1 + 0x1d);
        param_2[0x17] = param_1[7];
        param_2[0x18] = *(param_1 + 0x23);
        param_2[0x19] = *(param_1 + 0x22);
        param_2[0x1a] = *(param_1 + 0x21);
        param_2[0x1b] = param_1[8];
        param_2[0x1c] = *(param_1 + 0x27);
        param_2[0x1d] = *(param_1 + 0x26);
        param_2[0x1e] = *(param_1 + 0x25);
        param_2[0x1f] = param_1[9];
        uVar3 = 0;
    }
    else {
        uVar3 = 0xffffffff;
    }
    return uVar3;
}


/* fcn.00005c14 @ 0x5c14 */

uint __fastcall fcn.00005c14(int param_1,int32_t *param_2)

{
    uint uVar1;
    int32_t var_40h;
    
    if (((param_1 == 0) || (param_2 == NULL)) || (0x7f < *(param_1 + 0x48))) {
        uVar1 = 0xffffffff;
    }
    else {
        fcn.000096b1();
        if (param_2 != &var_40h) {
            section..text(param_2,&var_40h,0x30);
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.000096b1 @ 0x96b1 */

uint __fastcall fcn.000096b1(uint32_t *param_1,int param_2)

{
    uchar *puVar1;
    uint32_t uVar2;
    uint uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uchar *puVar6;
    int iVar7;
    uchar *puVar8;
    
    if (((param_1 == NULL) || (param_2 == 0)) || (uVar5 = param_1[0x12], 0x7f < uVar5)) {
        uVar3 = 0xffffffff;
    }
    else {
        iVar7 = 8;
        uVar4 = uVar5 * 8;
        uVar2 = *param_1;
        *param_1 = *param_1 + uVar4;
        param_1[1] = param_1[1] + (uVar5 * 8 >> 0x20) + CARRY4(uVar2,uVar4);
        *(uVar5 + 0x4c + param_1) = 0x80;
        param_1[0x12] = param_1[0x12] + 1;
        uVar5 = param_1[0x12];
        if (0x70 < uVar5) {
            while (uVar5 < 0x80) {
                *(param_1 + uVar5 + 0x4c) = 0;
                param_1[0x12] = param_1[0x12] + 1;
                uVar5 = param_1[0x12];
            }
            fcn.0000880b();
            param_1[0x12] = 0;
        }
        while (param_1[0x12] < 0x78) {
            *(param_1[0x12] + 0x4c + param_1) = 0;
            param_1[0x12] = param_1[0x12] + 1;
        }
        *(param_1 + 0x31) = *(param_1 + 7);
        *(param_1 + 0xc5) = *(param_1 + 6);
        *(param_1 + 0xc6) = *(param_1 + 5);
        *(param_1 + 199) = param_1[1];
        *(param_1 + 0x32) = *(param_1 + 3);
        *(param_1 + 0xc9) = *(param_1 + 2);
        *(param_1 + 0xca) = *(param_1 + 1);
        *(param_1 + 0xcb) = *param_1;
        fcn.0000880b();
        puVar6 = param_2 + 2;
        puVar8 = param_1 + 0xe;
        do {
            puVar6[-2] = puVar8[1];
            puVar6[-1] = *puVar8;
            *puVar6 = puVar8[-1];
            puVar6[1] = puVar8[-2];
            puVar6[2] = puVar8[-3];
            puVar6[3] = puVar8[-4];
            puVar6[4] = puVar8[-5];
            puVar1 = puVar8 + -6;
            puVar8 = puVar8 + 8;
            puVar6[5] = *puVar1;
            puVar6 = puVar6 + 8;
            iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00008685 @ 0x8685 */

uint __fastcall fcn.00008685(uchar *param_1,uint *param_2)

{
    int iVar1;
    uint uVar2;
    uchar *puVar3;
    
    iVar1 = param_2[0x1a];
    *(iVar1 + param_2 + 10) = 0x80;
    puVar3 = param_1;
    if (0x38 < iVar1 + 1U) {
        fcn.00001b3d(param_1);
        fcn.00005ca1(1);
    }
    fcn.00001b3d(puVar3);
    *(param_2 + 0x18) = *(param_2 + 0x27);
    *(param_2 + 0x61) = *(param_2 + 0x26);
    *(param_2 + 0x62) = *(param_2 + 0x25);
    *(param_2 + 99) = *(param_2 + 9);
    *(param_2 + 0x19) = *(param_2 + 0x23);
    *(param_2 + 0x65) = *(param_2 + 0x22);
    *(param_2 + 0x66) = *(param_2 + 0x21);
    *(param_2 + 0x67) = *(param_2 + 8);
    fcn.00005ca1(1);
    param_2[0x1a] = 0;
    fcn.00000108(param_2 + 10,0x40,0);
    uVar2 = *param_2;
    *param_1 = uVar2 >> 0x18;
    param_1[1] = uVar2 >> 0x10;
    param_1[2] = uVar2 >> 8;
    param_1[3] = uVar2;
    uVar2 = param_2[1];
    param_1[4] = uVar2 >> 0x18;
    param_1[5] = uVar2 >> 0x10;
    param_1[6] = uVar2 >> 8;
    param_1[7] = uVar2;
    uVar2 = param_2[2];
    param_1[8] = uVar2 >> 0x18;
    param_1[9] = uVar2 >> 0x10;
    param_1[10] = uVar2 >> 8;
    param_1[0xb] = uVar2;
    uVar2 = param_2[3];
    param_1[0xc] = uVar2 >> 0x18;
    param_1[0xd] = uVar2 >> 0x10;
    param_1[0xe] = uVar2 >> 8;
    param_1[0xf] = uVar2;
    uVar2 = param_2[4];
    param_1[0x10] = uVar2 >> 0x18;
    param_1[0x11] = uVar2 >> 0x10;
    param_1[0x12] = uVar2 >> 8;
    param_1[0x13] = uVar2;
    uVar2 = param_2[5];
    param_1[0x14] = uVar2 >> 0x18;
    param_1[0x15] = uVar2 >> 0x10;
    param_1[0x16] = uVar2 >> 8;
    param_1[0x17] = uVar2;
    uVar2 = param_2[6];
    param_1[0x18] = uVar2 >> 0x18;
    param_1[0x19] = uVar2 >> 0x10;
    param_1[0x1a] = uVar2 >> 8;
    param_1[0x1b] = uVar2;
    uVar2 = param_2[7];
    param_1[0x1c] = uVar2 >> 0x18;
    param_1[0x1d] = uVar2 >> 0x10;
    param_1[0x1e] = uVar2 >> 8;
    param_1[0x1f] = uVar2;
    return 1;
}


/* fcn.00001b3d @ 0x1b3d */

uint __fastcall fcn.00001b3d(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.00000108(param_1,param_2,0);
    return uVar1;
}


/* fcn.00005ca1 @ 0x5ca1 */

void __fastcall fcn.00005ca1(uint32_t *param_1,uint8_t *param_2,int param_3)

{
    uint8_t *puVar1;
    uint8_t *puVar2;
    uint8_t *puVar3;
    uint8_t *puVar4;
    uint8_t *puVar5;
    uint8_t *puVar6;
    uint8_t *puVar7;
    uint8_t *puVar8;
    uint8_t *puVar9;
    uint8_t *puVar10;
    uint8_t *puVar11;
    uint8_t *puVar12;
    uint8_t *puVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    uint32_t uVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    uint32_t uVar27;
    uint32_t uVar28;
    uint32_t uVar29;
    uint32_t uVar30;
    uint32_t uVar31;
    uint32_t uVar32;
    uint32_t uVar33;
    uint32_t uVar34;
    uint32_t uVar35;
    uint32_t uVar36;
    uint32_t uVar37;
    uint32_t uVar38;
    uint32_t uVar39;
    uint32_t uVar40;
    uint32_t uVar41;
    uint32_t uVar42;
    uint32_t uVar43;
    uint32_t uStack_24;
    uint32_t uStack_20;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
    
    if (param_3 != 0) {
        uStack_20 = param_1[1];
        uStack_1c = param_1[2];
        uStack_24 = param_1[4];
        uStack_10 = param_1[5];
        uStack_18 = param_1[6];
        uStack_14 = param_1[3];
        uStack_c = param_1[7];
        do {
            param_3 = param_3 + -1;
            puVar1 = param_2 + 0x10;
            uVar40 = *param_2 << 0x18 | param_2[1] << 0x10 | param_2[2] << 8 | param_2[3];
            uVar14 = *param_1;
            uVar15 = param_2[4] << 0x18 | param_2[5] << 0x10 | param_2[6] << 8 | param_2[7];
            uVar16 = param_2[8] << 0x18 | param_2[9] << 0x10 | param_2[10] << 8 | param_2[0xb];
            puVar2 = param_2 + 0xc;
            uVar17 = *puVar2 << 0x18 | param_2[0xd] << 0x10 | param_2[0xe] << 8 | param_2[0xf];
            puVar3 = param_2 + 0x14;
            uVar35 = *puVar1 << 0x18 | param_2[0x11] << 0x10 | param_2[0x12] << 8 | param_2[0x13];
            uVar18 = *puVar3 << 0x18 | param_2[0x15] << 0x10 | param_2[0x16] << 8 | param_2[0x17];
            puVar4 = param_2 + 0x18;
            uVar19 = *puVar4 << 0x18 | param_2[0x19] << 0x10 | param_2[0x1a] << 8 | param_2[0x1b];
            puVar5 = param_2 + 0x1c;
            uVar20 = *puVar5 << 0x18 | param_2[0x1d] << 0x10 | param_2[0x1e] << 8 | param_2[0x1f];
            puVar6 = param_2 + 0x20;
            uVar21 = *puVar6 << 0x18 | param_2[0x21] << 0x10 | param_2[0x22] << 8 | param_2[0x23];
            puVar7 = param_2 + 0x24;
            uVar22 = *puVar7 << 0x18 | param_2[0x25] << 0x10 | param_2[0x26] << 8 | param_2[0x27];
            puVar8 = param_2 + 0x28;
            uVar23 = *puVar8 << 0x18 | param_2[0x29] << 0x10 | param_2[0x2a] << 8 | param_2[0x2b];
            puVar9 = param_2 + 0x2c;
            uVar24 = *puVar9 << 0x18 | param_2[0x2d] << 0x10 | param_2[0x2e] << 8 | param_2[0x2f];
            puVar10 = param_2 + 0x30;
            uVar25 = *puVar10 << 0x18 | param_2[0x31] << 0x10 | param_2[0x32] << 8 | param_2[0x33];
            puVar11 = param_2 + 0x34;
            uVar26 = *puVar11 << 0x18 | param_2[0x35] << 0x10;
            uVar27 = uVar26 | param_2[0x36] << 8 | param_2[0x37];
            puVar12 = param_2 + 0x38;
            uVar28 = *puVar12 << 0x18 | param_2[0x39] << 0x10;
            uVar32 = uVar14 << 0xc | uVar14 >> 0x14;
            uVar29 = uVar28 | param_2[0x3a] << 8 | param_2[0x3b];
            puVar13 = param_2 + 0x3c;
            uVar30 = *puVar13 << 0x18 | param_2[0x3d] << 0x10;
            uVar31 = uVar30 | param_2[0x3e] << 8 | param_2[0x3f];
            param_2 = param_2 + 0x40;
            uVar37 = uStack_24 + 0x79cc4519 + uVar32;
            uVar34 = uStack_10 >> 0xd | uStack_10 << 0x13;
            uVar38 = uVar37 * 0x80 | uVar37 >> 0x19;
            uVar37 = uVar27 << 0xf | uVar26 >> 0x11;
            uVar36 = (uVar35 ^ uVar40) + (uVar38 ^ uVar32) + uStack_14 + (uStack_1c ^ uStack_20 ^ uVar14);
            uVar32 = (uStack_24 ^ uStack_18 ^ uStack_10) + uStack_c + uVar38 + uVar40;
            uVar41 = uStack_20 << 9 | uStack_20 >> 0x17;
            uVar32 = (uVar32 >> 0xf | uVar32 * 0x20000) ^ (uVar32 * 0x200 | uVar32 >> 0x17) ^ uVar32;
            uVar26 = uVar37 ^ uVar20 ^ uVar40;
            uVar40 = uVar40 ^ (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^
                              (uVar17 << 7 | *puVar2 >> 1) ^ uVar37 ^ uVar23 ^ uVar20;
            uVar26 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar37 = uVar26 + 0xf3988a32 + uVar32;
            uVar37 = uVar37 * 0x80 | uVar37 >> 0x19;
            uVar33 = (uVar18 ^ uVar15) + (uVar37 ^ uVar26) + uStack_1c + (uVar36 ^ uVar41 ^ uVar14);
            uVar28 = uVar29 << 0xf | uVar28 >> 0x11;
            uVar37 = (uStack_24 ^ uVar32 ^ uVar34) + uStack_18 + uVar37 + uVar15;
            uVar14 = uVar14 << 9 | uVar14 >> 0x17;
            uVar37 = (uVar37 >> 0xf | uVar37 * 0x20000) ^ (uVar37 * 0x200 | uVar37 >> 0x17) ^ uVar37;
            uVar38 = uStack_24 >> 0xd | uStack_24 << 0x13;
            uVar26 = uVar28 ^ uVar21 ^ uVar15;
            uVar15 = uVar15 ^ (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^
                              (uVar35 << 7 | *puVar1 >> 1) ^ uVar28 ^ uVar24 ^ uVar21;
            uVar28 = uVar33 * 0x1000 | uVar33 >> 0x14;
            uVar39 = uVar37 + 0xe7311465 + uVar28;
            uVar26 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar39 = uVar39 * 0x80 | uVar39 >> 0x19;
            uVar36 = (uVar19 ^ uVar16) + (uVar39 ^ uVar28) + uVar41 + (uVar33 ^ uVar36 ^ uVar14);
            uVar34 = (uVar32 ^ uVar37 ^ uVar38) + uVar39 + uVar16 + uVar34;
            uVar39 = uVar31 << 0xf | uVar30 >> 0x11;
            uVar30 = uVar32 >> 0xd | uVar32 << 0x13;
            uVar34 = (uVar34 >> 0xf | uVar34 * 0x20000) ^ (uVar34 * 0x200 | uVar34 >> 0x17) ^ uVar34;
            uVar28 = uVar39 ^ uVar22 ^ uVar16;
            uVar16 = uVar16 ^ (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
                              (uVar18 << 7 | *puVar3 >> 1) ^ uVar39 ^ uVar25 ^ uVar22;
            uVar32 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar28 = uVar33 * 0x200 | uVar33 >> 0x17;
            uVar39 = uVar32 + 0xce6228cb + uVar34;
            uVar39 = uVar39 * 0x80 | uVar39 >> 0x19;
            uVar33 = (uVar20 ^ uVar17) + (uVar39 ^ uVar32) + uVar14 + (uVar36 ^ uVar33 ^ uVar26);
            uVar38 = (uVar30 ^ uVar37 ^ uVar34) + uVar39 + uVar17 + uVar38;
            uVar39 = uVar40 << 0xf | uVar40 >> 0x11;
            uVar32 = uVar37 >> 0xd | uVar37 << 0x13;
            uVar38 = (uVar38 >> 0xf | uVar38 * 0x20000) ^ (uVar38 * 0x200 | uVar38 >> 0x17) ^ uVar38;
            uVar14 = uVar39 ^ uVar23 ^ uVar17;
            uVar17 = uVar17 ^ (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^
                              (uVar19 << 7 | *puVar4 >> 1) ^ uVar39 ^ uVar27 ^ uVar23;
            uVar37 = uVar33 * 0x1000 | uVar33 >> 0x14;
            uVar14 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar39 = uVar37 + 0x9cc45197 + uVar38;
            uVar39 = uVar39 * 0x80 | uVar39 >> 0x19;
            uVar36 = (uVar21 ^ uVar35) + (uVar39 ^ uVar37) + uVar26 + (uVar33 ^ uVar36 ^ uVar28);
            uVar37 = uVar34 >> 0xd | uVar34 << 0x13;
            uVar30 = (uVar32 ^ uVar34 ^ uVar38) + uVar39 + uVar35 + uVar30;
            uVar30 = (uVar30 >> 0xf | uVar30 * 0x20000) ^ (uVar30 * 0x200 | uVar30 >> 0x17) ^ uVar30;
            uVar34 = uVar15 << 0xf | uVar15 >> 0x11;
            uVar26 = uVar34 ^ uVar24 ^ uVar35;
            uVar35 = uVar35 ^ (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^
                              (uVar20 << 7 | *puVar5 >> 1) ^ uVar34 ^ uVar29 ^ uVar24;
            uVar34 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar26 = uVar33 * 0x200 | uVar33 >> 0x17;
            uVar39 = uVar34 + 0x3988a32f + uVar30;
            uVar39 = uVar39 * 0x80 | uVar39 >> 0x19;
            uVar33 = (uVar22 ^ uVar18) + (uVar39 ^ uVar34) + uVar28 + (uVar36 ^ uVar33 ^ uVar14);
            uVar32 = (uVar30 ^ uVar37 ^ uVar38) + uVar39 + uVar18 + uVar32;
            uVar39 = uVar16 << 0xf | uVar16 >> 0x11;
            uVar34 = uVar38 >> 0xd | uVar38 << 0x13;
            uVar32 = (uVar32 >> 0xf | uVar32 * 0x20000) ^ (uVar32 * 0x200 | uVar32 >> 0x17) ^ uVar32;
            uVar28 = uVar39 ^ uVar25 ^ uVar18;
            uVar18 = uVar18 ^ (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
                              (uVar21 << 7 | *puVar6 >> 1) ^ uVar39 ^ uVar31 ^ uVar25;
            uVar28 = uVar33 * 0x1000 | uVar33 >> 0x14;
            uVar38 = uVar28 + 0x7311465e + uVar32;
            uVar38 = uVar38 * 0x80 | uVar38 >> 0x19;
            uVar39 = (uVar23 ^ uVar19) + (uVar38 ^ uVar28) + uVar14 + (uVar33 ^ uVar36 ^ uVar26);
            uVar14 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar37 = (uVar30 ^ uVar32 ^ uVar34) + uVar38 + uVar19 + uVar37;
            uVar36 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar38 = uVar30 >> 0xd | uVar30 << 0x13;
            uVar37 = (uVar37 >> 0xf | uVar37 * 0x20000) ^ (uVar37 * 0x200 | uVar37 >> 0x17) ^ uVar37;
            uVar30 = uVar17 << 0xf | uVar17 >> 0x11;
            uVar28 = uVar30 ^ uVar27 ^ uVar19;
            uVar19 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^ (uVar22 << 7 | *puVar7 >> 1) ^
                     uVar30 ^ uVar27 ^ uVar19 ^ uVar40;
            uVar28 = uVar37 + 0xe6228cbc + uVar36;
            uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
            uVar36 = (uVar24 ^ uVar20) + (uVar28 ^ uVar36) + uVar26 + (uVar39 ^ uVar33 ^ uVar14);
            uVar30 = uVar32 >> 0xd | uVar32 << 0x13;
            uVar34 = (uVar38 ^ uVar32 ^ uVar37) + uVar28 + uVar20 + uVar34;
            uVar41 = uVar33 * 0x200 | uVar33 >> 0x17;
            uVar34 = (uVar34 >> 0xf | uVar34 * 0x20000) ^ (uVar34 * 0x200 | uVar34 >> 0x17) ^ uVar34;
            uVar28 = uVar35 << 0xf | uVar35 >> 0x11;
            uVar26 = uVar28 ^ uVar29 ^ uVar20;
            uVar32 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar33 = uVar34 + 0xcc451979 + uVar32;
            uVar20 = (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^ (uVar23 << 7 | *puVar8 >> 1) ^
                     uVar28 ^ uVar29 ^ uVar20 ^ uVar15;
            uVar28 = uVar33 * 0x80 | uVar33 >> 0x19;
            uVar26 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar33 = (uVar25 ^ uVar21) + (uVar28 ^ uVar32) + uVar14 + (uVar36 ^ uVar39 ^ uVar41);
            uVar32 = uVar33 * 0x1000 | uVar33 >> 0x14;
            uVar38 = (uVar30 ^ uVar37 ^ uVar34) + uVar28 + uVar21 + uVar38;
            uVar37 = uVar37 >> 0xd | uVar37 << 0x13;
            uVar38 = (uVar38 >> 0xf | uVar38 * 0x20000) ^ (uVar38 * 0x200 | uVar38 >> 0x17) ^ uVar38;
            uVar28 = uVar18 << 0xf | uVar18 >> 0x11;
            uVar14 = uVar28 ^ uVar31 ^ uVar21;
            uVar21 = (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^ (uVar24 << 7 | *puVar9 >> 1) ^
                     uVar28 ^ uVar31 ^ uVar21 ^ uVar16;
            uVar28 = uVar38 + 0x988a32f3 + uVar32;
            uVar14 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
            uVar36 = (uVar27 ^ uVar22) + (uVar28 ^ uVar32) + uVar41 + (uVar33 ^ uVar36 ^ uVar26);
            uVar30 = (uVar38 ^ uVar37 ^ uVar34) + uVar28 + uVar22 + uVar30;
            uVar34 = uVar34 >> 0xd | uVar34 << 0x13;
            uVar39 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar30 = (uVar30 >> 0xf | uVar30 * 0x20000) ^ (uVar30 * 0x200 | uVar30 >> 0x17) ^ uVar30;
            uVar32 = uVar19 << 0xf | uVar19 >> 0x11;
            uVar28 = uVar32 ^ uVar22 ^ uVar40;
            uVar22 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^ (uVar25 << 7 | *puVar10 >> 1) ^
                     uVar32 ^ uVar22 ^ uVar17 ^ uVar40;
            uVar28 = uVar30 + 0x311465e7 + uVar39;
            uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
            uVar39 = (uVar29 ^ uVar23) + (uVar28 ^ uVar39) + uVar26 + (uVar36 ^ uVar33 ^ uVar14);
            uVar41 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar37 = (uVar38 ^ uVar30 ^ uVar34) + uVar28 + uVar23 + uVar37;
            uVar32 = uVar38 >> 0xd | uVar38 << 0x13;
            uVar42 = uVar33 * 0x200 | uVar33 >> 0x17;
            uVar37 = (uVar37 >> 0xf | uVar37 * 0x20000) ^ (uVar37 * 0x200 | uVar37 >> 0x17) ^ uVar37;
            uVar28 = uVar20 << 0xf | uVar20 >> 0x11;
            uVar26 = uVar28 ^ uVar23 ^ uVar15;
            uVar38 = uVar37 + 0x6228cbce + uVar41;
            uVar23 = (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^ (uVar27 << 7 | *puVar11 >> 1) ^
                     uVar28 ^ uVar23 ^ uVar35 ^ uVar15;
            uVar28 = uVar38 * 0x80 | uVar38 >> 0x19;
            uVar26 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar36 = (uVar31 ^ uVar24) + (uVar28 ^ uVar41) + uVar14 + (uVar39 ^ uVar36 ^ uVar42);
            uVar34 = (uVar32 ^ uVar30 ^ uVar37) + uVar28 + uVar24 + uVar34;
            uVar33 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar38 = uVar30 >> 0xd | uVar30 << 0x13;
            uVar34 = (uVar34 >> 0xf | uVar34 * 0x20000) ^ (uVar34 * 0x200 | uVar34 >> 0x17) ^ uVar34;
            uVar28 = uVar21 << 0xf | uVar21 >> 0x11;
            uVar14 = uVar28 ^ uVar24 ^ uVar16;
            uVar24 = (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^ (uVar29 << 7 | *puVar12 >> 1) ^
                     uVar28 ^ uVar24 ^ uVar18 ^ uVar16;
            uVar14 = uVar34 + 0xc451979c + uVar33;
            uVar28 = uVar14 * 0x80 | uVar14 >> 0x19;
            uVar14 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar39 = (uVar25 ^ uVar40) + (uVar28 ^ uVar33) + uVar42 + (uVar36 ^ uVar39 ^ uVar26);
            uVar33 = uVar37 >> 0xd | uVar37 << 0x13;
            uVar32 = (uVar38 ^ uVar37 ^ uVar34) + uVar28 + uVar25 + uVar32;
            uVar32 = (uVar32 >> 0xf | uVar32 * 0x20000) ^ (uVar32 * 0x200 | uVar32 >> 0x17) ^ uVar32;
            uVar30 = uVar22 << 0xf | uVar22 >> 0x11;
            uVar28 = uVar30 ^ uVar25 ^ uVar17;
            uVar37 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar25 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^ (uVar31 << 7 | *puVar13 >> 1) ^
                     uVar30 ^ uVar25 ^ uVar19 ^ uVar17;
            uVar28 = uVar32 + 0x88a32f39 + uVar37;
            uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
            uVar30 = (uVar27 ^ uVar15) + (uVar28 ^ uVar37) + uVar26 + (uVar39 ^ uVar36 ^ uVar14);
            uVar41 = uVar30 * 0x1000 | uVar30 >> 0x14;
            uVar38 = (uVar32 ^ uVar33 ^ uVar34) + uVar28 + uVar27 + uVar38;
            uVar37 = uVar34 >> 0xd | uVar34 << 0x13;
            uVar42 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar38 = (uVar38 >> 0xf | uVar38 * 0x20000) ^ (uVar38 * 0x200 | uVar38 >> 0x17) ^ uVar38;
            uVar28 = uVar23 << 0xf | uVar23 >> 0x11;
            uVar26 = uVar28 ^ uVar27 ^ uVar35;
            uVar34 = uVar38 + 0x11465e73 + uVar41;
            uVar36 = uVar34 * 0x80 | uVar34 >> 0x19;
            uVar27 = (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^ (uVar40 << 7 | uVar40 >> 0x19)
                     ^ uVar28 ^ uVar27 ^ uVar20 ^ uVar35;
            uVar43 = (uVar36 ^ uVar41) + (uVar29 ^ uVar16) + uVar14 + (uVar30 ^ uVar39 ^ uVar42);
            uVar34 = uVar32 >> 0xd | uVar32 << 0x13;
            uVar33 = (uVar32 ^ uVar38 ^ uVar37) + uVar36 + uVar29 + uVar33;
            uVar28 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar33 = (uVar33 >> 0xf | uVar33 * 0x20000) ^ (uVar33 * 0x200 | uVar33 >> 0x17) ^ uVar33;
            uVar26 = uVar24 << 0xf | uVar24 >> 0x11;
            uVar14 = uVar26 ^ uVar29 ^ uVar18;
            uVar29 = (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^ (uVar15 << 7 | uVar15 >> 0x19)
                     ^ uVar26 ^ uVar29 ^ uVar21 ^ uVar18;
            uVar14 = uVar43 * 0x1000 | uVar43 >> 0x14;
            uVar26 = uVar33 + 0x228cbce6 + uVar14;
            uVar26 = uVar26 * 0x80 | uVar26 >> 0x19;
            uVar39 = (uVar26 ^ uVar14) + (uVar31 ^ uVar17) + uVar42 + (uVar43 ^ uVar30 ^ uVar28);
            uVar32 = uVar38 >> 0xd | uVar38 << 0x13;
            uVar37 = (uVar34 ^ uVar38 ^ uVar33) + uVar26 + uVar31 + uVar37;
            uVar41 = uVar30 * 0x200 | uVar30 >> 0x17;
            uVar37 = (uVar37 >> 0xf | uVar37 * 0x20000) ^ (uVar37 * 0x200 | uVar37 >> 0x17) ^ uVar37;
            uVar26 = uVar25 << 0xf | uVar25 >> 0x11;
            uVar14 = uVar26 ^ uVar31 ^ uVar19;
            uVar30 = (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^ (uVar16 << 7 | uVar16 >> 0x19)
                     ^ uVar26 ^ uVar31 ^ uVar22 ^ uVar19;
            uVar26 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar14 = uVar37 + 0x9d8a7a87 + uVar26;
            uVar31 = uVar14 * 0x80 | uVar14 >> 0x19;
            uVar14 = uVar43 * 0x200 | uVar43 >> 0x17;
            uVar36 = (uVar35 ^ uVar40) + (uVar31 ^ uVar26) + uVar28 + ((uVar39 | uVar43) & uVar41 | uVar39 & uVar43);
            uVar28 = uVar27 << 0xf | uVar27 >> 0x11;
            uVar34 = ((uVar32 ^ uVar33) & uVar37 ^ uVar32) + uVar31 + uVar40 + uVar34;
            uVar38 = uVar33 >> 0xd | uVar33 << 0x13;
            uVar34 = (uVar34 >> 0xf | uVar34 * 0x20000) ^ (uVar34 * 0x200 | uVar34 >> 0x17) ^ uVar34;
            uVar26 = uVar28 ^ uVar20 ^ uVar40;
            uVar40 = uVar40 ^ (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^
                              (uVar17 << 7 | uVar17 >> 0x19) ^ uVar28 ^ uVar23 ^ uVar20;
            uVar26 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar28 = uVar26 + 0x3b14f50f + uVar34;
            uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
            uVar33 = (uVar18 ^ uVar15) + (uVar28 ^ uVar26) + uVar41 + ((uVar36 | uVar39) & uVar14 | uVar36 & uVar39);
            uVar31 = uVar37 >> 0xd | uVar37 << 0x13;
            uVar32 = ((uVar38 ^ uVar37) & uVar34 ^ uVar38) + uVar28 + uVar15 + uVar32;
            uVar37 = uVar29 << 0xf | uVar29 >> 0x11;
            uVar26 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar32 = (uVar32 >> 0xf | uVar32 * 0x20000) ^ (uVar32 * 0x200 | uVar32 >> 0x17) ^ uVar32;
            uVar28 = uVar37 ^ uVar21 ^ uVar15;
            uVar15 = uVar15 ^ (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
                              (uVar35 << 7 | uVar35 >> 0x19) ^ uVar37 ^ uVar24 ^ uVar21;
            uVar37 = uVar33 * 0x1000 | uVar33 >> 0x14;
            uVar28 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar39 = uVar37 + 0x7629ea1e + uVar32;
            uVar39 = uVar39 * 0x80 | uVar39 >> 0x19;
            uVar36 = (uVar19 ^ uVar16) + (uVar39 ^ uVar37) + uVar14 + ((uVar33 | uVar36) & uVar26 | uVar33 & uVar36);
            uVar38 = ((uVar34 ^ uVar31) & uVar32 ^ uVar31) + uVar39 + uVar16 + uVar38;
            uVar39 = uVar30 << 0xf | uVar30 >> 0x11;
            uVar37 = uVar34 >> 0xd | uVar34 << 0x13;
            uVar38 = (uVar38 >> 0xf | uVar38 * 0x20000) ^ (uVar38 * 0x200 | uVar38 >> 0x17) ^ uVar38;
            uVar14 = uVar39 ^ uVar22 ^ uVar16;
            uVar16 = uVar16 ^ (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^
                              (uVar18 << 7 | uVar18 >> 0x19) ^ uVar39 ^ uVar25 ^ uVar22;
            uVar34 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar14 = uVar33 * 0x200 | uVar33 >> 0x17;
            uVar39 = uVar34 + 0xec53d43c + uVar38;
            uVar41 = uVar39 * 0x80 | uVar39 >> 0x19;
            uVar33 = (uVar20 ^ uVar17) + (uVar41 ^ uVar34) + uVar26 + ((uVar36 | uVar33) & uVar28 | uVar36 & uVar33);
            uVar39 = uVar40 << 0xf | uVar40 >> 0x11;
            uVar34 = uVar32 >> 0xd | uVar32 << 0x13;
            uVar31 = ((uVar37 ^ uVar32) & uVar38 ^ uVar37) + uVar41 + uVar17 + uVar31;
            uVar31 = (uVar31 >> 0xf | uVar31 * 0x20000) ^ (uVar31 * 0x200 | uVar31 >> 0x17) ^ uVar31;
            uVar26 = uVar39 ^ uVar23 ^ uVar17;
            uVar17 = uVar17 ^ (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^
                              (uVar19 << 7 | uVar19 >> 0x19) ^ uVar39 ^ uVar27 ^ uVar23;
            uVar26 = uVar33 * 0x1000 | uVar33 >> 0x14;
            uVar32 = uVar31 + 0xd8a7a879 + uVar26;
            uVar32 = uVar32 * 0x80 | uVar32 >> 0x19;
            uVar28 = (uVar21 ^ uVar35) + (uVar32 ^ uVar26) + uVar28 + ((uVar33 | uVar36) & uVar14 | uVar33 & uVar36);
            uVar37 = ((uVar34 ^ uVar38) & uVar31 ^ uVar34) + uVar32 + uVar35 + uVar37;
            uVar41 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar32 = uVar38 >> 0xd | uVar38 << 0x13;
            uVar38 = uVar15 << 0xf | uVar15 >> 0x11;
            uVar37 = (uVar37 >> 0xf | uVar37 * 0x20000) ^ (uVar37 * 0x200 | uVar37 >> 0x17) ^ uVar37;
            uVar26 = uVar38 ^ uVar24 ^ uVar35;
            uVar35 = uVar35 ^ (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^
                              (uVar20 << 7 | uVar20 >> 0x19) ^ uVar38 ^ uVar29 ^ uVar24;
            uVar38 = uVar28 * 0x1000 | uVar28 >> 0x14;
            uVar36 = uVar37 + 0xb14f50f3 + uVar38;
            uVar26 = uVar33 * 0x200 | uVar33 >> 0x17;
            uVar39 = uVar36 * 0x80 | uVar36 >> 0x19;
            uVar36 = (uVar22 ^ uVar18) + (uVar39 ^ uVar38) + uVar14 + ((uVar28 | uVar33) & uVar41 | uVar28 & uVar33);
            uVar33 = uVar16 << 0xf | uVar16 >> 0x11;
            uVar34 = ((uVar32 ^ uVar31) & uVar37 ^ uVar32) + uVar39 + uVar18 + uVar34;
            uVar38 = uVar31 >> 0xd | uVar31 << 0x13;
            uVar34 = (uVar34 >> 0xf | uVar34 * 0x20000) ^ (uVar34 * 0x200 | uVar34 >> 0x17) ^ uVar34;
            uVar14 = uVar33 ^ uVar25 ^ uVar18;
            uVar18 = uVar18 ^ (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^
                              (uVar21 << 7 | uVar21 >> 0x19) ^ uVar33 ^ uVar30 ^ uVar25;
            uVar31 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar14 = uVar31 + 0x629ea1e7 + uVar34;
            uVar42 = uVar14 * 0x80 | uVar14 >> 0x19;
            uVar14 = uVar28 * 0x200 | uVar28 >> 0x17;
            uVar39 = (uVar23 ^ uVar19) + (uVar42 ^ uVar31) + uVar41 + ((uVar36 | uVar28) & uVar26 | uVar36 & uVar28);
            uVar41 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar33 = uVar37 >> 0xd | uVar37 << 0x13;
            uVar32 = ((uVar37 ^ uVar38) & uVar34 ^ uVar38) + uVar42 + uVar19 + uVar32;
            uVar32 = (uVar32 >> 0xf | uVar32 * 0x20000) ^ (uVar32 * 0x200 | uVar32 >> 0x17) ^ uVar32;
            uVar31 = uVar17 << 0xf | uVar17 >> 0x11;
            uVar28 = uVar31 ^ uVar27 ^ uVar19;
            uVar19 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^ (uVar22 << 7 | uVar22 >> 0x19)
                     ^ uVar31 ^ uVar27 ^ uVar19 ^ uVar40;
            uVar28 = uVar32 + 0xc53d43ce + uVar41;
            uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
            uVar41 = (uVar24 ^ uVar20) + (uVar28 ^ uVar41) + uVar26 + ((uVar39 | uVar36) & uVar14 | uVar39 & uVar36);
            uVar31 = uVar34 >> 0xd | uVar34 << 0x13;
            uVar38 = ((uVar33 ^ uVar34) & uVar32 ^ uVar33) + uVar28 + uVar20 + uVar38;
            uVar43 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar37 = uVar41 * 0x1000 | uVar41 >> 0x14;
            uVar38 = (uVar38 >> 0xf | uVar38 * 0x20000) ^ (uVar38 * 0x200 | uVar38 >> 0x17) ^ uVar38;
            uVar28 = uVar35 << 0xf | uVar35 >> 0x11;
            uVar26 = uVar28 ^ uVar29 ^ uVar20;
            uVar34 = uVar38 + 0x8a7a879d + uVar37;
            uVar42 = uVar34 * 0x80 | uVar34 >> 0x19;
            uVar20 = (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^ (uVar23 << 7 | uVar23 >> 0x19)
                     ^ uVar28 ^ uVar29 ^ uVar20 ^ uVar15;
            uVar26 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar36 = (uVar25 ^ uVar21) + (uVar42 ^ uVar37) + uVar14 + ((uVar41 | uVar39) & uVar43 | uVar41 & uVar39);
            uVar34 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar37 = uVar32 >> 0xd | uVar32 << 0x13;
            uVar33 = ((uVar31 ^ uVar32) & uVar38 ^ uVar31) + uVar42 + uVar21 + uVar33;
            uVar33 = (uVar33 >> 0xf | uVar33 * 0x20000) ^ (uVar33 * 0x200 | uVar33 >> 0x17) ^ uVar33;
            uVar28 = uVar18 << 0xf | uVar18 >> 0x11;
            uVar14 = uVar28 ^ uVar30 ^ uVar21;
            uVar21 = (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^ (uVar24 << 7 | uVar24 >> 0x19)
                     ^ uVar28 ^ uVar30 ^ uVar21 ^ uVar16;
            uVar14 = uVar33 + 0x14f50f3b + uVar34;
            uVar28 = uVar14 * 0x80 | uVar14 >> 0x19;
            uVar14 = uVar41 * 0x200 | uVar41 >> 0x17;
            uVar39 = (uVar27 ^ uVar22) + (uVar28 ^ uVar34) + uVar43 + ((uVar36 | uVar41) & uVar26 | uVar36 & uVar41);
            uVar41 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar34 = uVar38 >> 0xd | uVar38 << 0x13;
            uVar31 = ((uVar37 ^ uVar38) & uVar33 ^ uVar37) + uVar28 + uVar22 + uVar31;
            uVar31 = (uVar31 >> 0xf | uVar31 * 0x20000) ^ (uVar31 * 0x200 | uVar31 >> 0x17) ^ uVar31;
            uVar32 = uVar19 << 0xf | uVar19 >> 0x11;
            uVar28 = uVar32 ^ uVar22 ^ uVar40;
            uVar38 = uVar31 + 0x29ea1e76 + uVar41;
            uVar22 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^ (uVar25 << 7 | uVar25 >> 0x19)
                     ^ uVar32 ^ uVar22 ^ uVar17 ^ uVar40;
            uVar32 = uVar38 * 0x80 | uVar38 >> 0x19;
            uVar28 = (uVar29 ^ uVar23) + (uVar41 ^ uVar32) + uVar26 + ((uVar39 | uVar36) & uVar14 | uVar39 & uVar36);
            uVar38 = uVar33 >> 0xd | uVar33 << 0x13;
            uVar37 = ((uVar33 ^ uVar34) & uVar31 ^ uVar34) + uVar32 + uVar23 + uVar37;
            uVar42 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar37 = (uVar37 >> 0xf | uVar37 * 0x20000) ^ (uVar37 * 0x200 | uVar37 >> 0x17) ^ uVar37;
            uVar32 = uVar20 << 0xf | uVar20 >> 0x11;
            uVar26 = uVar32 ^ uVar23 ^ uVar15;
            uVar23 = (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^ (uVar27 << 7 | uVar27 >> 0x19)
                     ^ uVar32 ^ uVar23 ^ uVar35 ^ uVar15;
            uVar32 = uVar28 * 0x1000 | uVar28 >> 0x14;
            uVar33 = uVar37 + 0x53d43cec + uVar32;
            uVar26 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar41 = uVar33 * 0x80 | uVar33 >> 0x19;
            uVar36 = (uVar30 ^ uVar24) + (uVar41 ^ uVar32) + uVar14 + ((uVar39 | uVar28) & uVar42 | uVar39 & uVar28);
            uVar33 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar32 = uVar31 >> 0xd | uVar31 << 0x13;
            uVar34 = ((uVar38 ^ uVar31) & uVar37 ^ uVar38) + uVar41 + uVar24 + uVar34;
            uVar34 = (uVar34 >> 0xf | uVar34 * 0x20000) ^ (uVar34 * 0x200 | uVar34 >> 0x17) ^ uVar34;
            uVar31 = uVar21 << 0xf | uVar21 >> 0x11;
            uVar14 = uVar31 ^ uVar24 ^ uVar16;
            uVar24 = (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^ (uVar29 << 7 | uVar29 >> 0x19)
                     ^ uVar31 ^ uVar24 ^ uVar18 ^ uVar16;
            uVar14 = uVar34 + 0xa7a879d8 + uVar33;
            uVar31 = uVar14 * 0x80 | uVar14 >> 0x19;
            uVar14 = uVar28 * 0x200 | uVar28 >> 0x17;
            uVar39 = (uVar25 ^ uVar40) + (uVar31 ^ uVar33) + uVar42 + ((uVar36 | uVar28) & uVar26 | uVar36 & uVar28);
            uVar41 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar33 = uVar37 >> 0xd | uVar37 << 0x13;
            uVar38 = ((uVar32 ^ uVar37) & uVar34 ^ uVar32) + uVar31 + uVar25 + uVar38;
            uVar38 = (uVar38 >> 0xf | uVar38 * 0x20000) ^ (uVar38 * 0x200 | uVar38 >> 0x17) ^ uVar38;
            uVar31 = uVar22 << 0xf | uVar22 >> 0x11;
            uVar28 = uVar31 ^ uVar25 ^ uVar17;
            uVar37 = uVar38 + 0x4f50f3b1 + uVar41;
            uVar25 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^ (uVar30 << 7 | uVar30 >> 0x19)
                     ^ uVar31 ^ uVar25 ^ uVar19 ^ uVar17;
            uVar28 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar31 = uVar37 * 0x80 | uVar37 >> 0x19;
            uVar36 = (uVar27 ^ uVar15) + (uVar31 ^ uVar41) + uVar26 + ((uVar39 | uVar36) & uVar14 | uVar39 & uVar36);
            uVar32 = ((uVar33 ^ uVar34) & uVar38 ^ uVar33) + uVar31 + uVar27 + uVar32;
            uVar34 = uVar34 >> 0xd | uVar34 << 0x13;
            uVar37 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar32 = (uVar32 >> 0xf | uVar32 * 0x20000) ^ (uVar32 * 0x200 | uVar32 >> 0x17) ^ uVar32;
            uVar31 = uVar23 << 0xf | uVar23 >> 0x11;
            uVar26 = uVar31 ^ uVar27 ^ uVar35;
            uVar41 = uVar32 + 0x9ea1e762 + uVar37;
            uVar27 = (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^ (uVar40 << 7 | uVar40 >> 0x19)
                     ^ uVar31 ^ uVar27 ^ uVar20 ^ uVar35;
            uVar42 = uVar41 * 0x80 | uVar41 >> 0x19;
            uVar26 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar39 = (uVar29 ^ uVar16) + (uVar42 ^ uVar37) + uVar14 + ((uVar36 | uVar39) & uVar28 | uVar36 & uVar39);
            uVar31 = uVar38 >> 0xd | uVar38 << 0x13;
            uVar41 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar33 = ((uVar38 ^ uVar34) & uVar32 ^ uVar34) + uVar42 + uVar29 + uVar33;
            uVar33 = (uVar33 >> 0xf | uVar33 * 0x20000) ^ (uVar33 * 0x200 | uVar33 >> 0x17) ^ uVar33;
            uVar37 = uVar24 << 0xf | uVar24 >> 0x11;
            uVar14 = uVar37 ^ uVar29 ^ uVar18;
            uVar38 = uVar33 + 0x3d43cec5 + uVar41;
            uVar29 = (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^ (uVar15 << 7 | uVar15 >> 0x19)
                     ^ uVar37 ^ uVar29 ^ uVar21 ^ uVar18;
            uVar42 = uVar38 * 0x80 | uVar38 >> 0x19;
            uVar14 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar38 = (uVar30 ^ uVar17) + (uVar42 ^ uVar41) + uVar28 + ((uVar39 | uVar36) & uVar26 | uVar39 & uVar36);
            uVar36 = uVar38 * 0x1000 | uVar38 >> 0x14;
            uVar37 = uVar32 >> 0xd | uVar32 << 0x13;
            uVar34 = ((uVar31 ^ uVar32) & uVar33 ^ uVar31) + uVar42 + uVar30 + uVar34;
            uVar34 = (uVar34 >> 0xf | uVar34 * 0x20000) ^ (uVar34 * 0x200 | uVar34 >> 0x17) ^ uVar34;
            uVar32 = uVar25 << 0xf | uVar25 >> 0x11;
            uVar28 = uVar32 ^ uVar30 ^ uVar19;
            uVar41 = uVar34 + 0x7a879d8a + uVar36;
            uVar30 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^ (uVar16 << 7 | uVar16 >> 0x19)
                     ^ uVar32 ^ uVar30 ^ uVar22 ^ uVar19;
            uVar28 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar41 = uVar41 * 0x80 | uVar41 >> 0x19;
            uVar36 = (uVar35 ^ uVar40) + (uVar41 ^ uVar36) + uVar26 + ((uVar38 | uVar39) & uVar14 | uVar38 & uVar39);
            uVar32 = uVar33 >> 0xd | uVar33 << 0x13;
            uVar31 = ((uVar37 ^ uVar33) & uVar34 ^ uVar37) + uVar41 + uVar40 + uVar31;
            uVar31 = (uVar31 >> 0xf | uVar31 * 0x20000) ^ (uVar31 * 0x200 | uVar31 >> 0x17) ^ uVar31;
            uVar33 = uVar27 << 0xf | uVar27 >> 0x11;
            uVar26 = uVar33 ^ uVar20 ^ uVar40;
            uVar40 = uVar40 ^ (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^
                              (uVar17 << 7 | uVar17 >> 0x19) ^ uVar33 ^ uVar23 ^ uVar20;
            uVar33 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar26 = uVar38 * 0x200 | uVar38 >> 0x17;
            uVar39 = uVar33 + 0xf50f3b14 + uVar31;
            uVar41 = uVar39 * 0x80 | uVar39 >> 0x19;
            uVar33 = (uVar18 ^ uVar15) + (uVar41 ^ uVar33) + uVar14 + ((uVar36 | uVar38) & uVar28 | uVar36 & uVar38);
            uVar39 = uVar29 << 0xf | uVar29 >> 0x11;
            uVar38 = uVar34 >> 0xd | uVar34 << 0x13;
            uVar37 = ((uVar32 ^ uVar34) & uVar31 ^ uVar32) + uVar41 + uVar15 + uVar37;
            uVar37 = (uVar37 >> 0xf | uVar37 * 0x20000) ^ (uVar37 * 0x200 | uVar37 >> 0x17) ^ uVar37;
            uVar14 = uVar39 ^ uVar21 ^ uVar15;
            uVar15 = uVar15 ^ (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^
                              (uVar35 << 7 | uVar35 >> 0x19) ^ uVar39 ^ uVar24 ^ uVar21;
            uVar39 = uVar33 * 0x1000 | uVar33 >> 0x14;
            uVar14 = uVar39 + 0xea1e7629 + uVar37;
            uVar41 = uVar14 * 0x80 | uVar14 >> 0x19;
            uVar14 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar34 = uVar31 >> 0xd | uVar31 << 0x13;
            uVar36 = (uVar19 ^ uVar16) + (uVar41 ^ uVar39) + uVar28 + ((uVar33 | uVar36) & uVar26 | uVar33 & uVar36);
            uVar32 = ((uVar31 ^ uVar38) & uVar37 ^ uVar38) + uVar41 + uVar16 + uVar32;
            uVar31 = uVar30 << 0xf | uVar30 >> 0x11;
            uVar32 = (uVar32 >> 0xf | uVar32 * 0x20000) ^ (uVar32 * 0x200 | uVar32 >> 0x17) ^ uVar32;
            uVar28 = uVar31 ^ uVar22 ^ uVar16;
            uVar16 = uVar16 ^ (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
                              (uVar18 << 7 | uVar18 >> 0x19) ^ uVar31 ^ uVar25 ^ uVar22;
            uVar31 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar28 = uVar33 * 0x200 | uVar33 >> 0x17;
            uVar39 = uVar31 + 0xd43cec53 + uVar32;
            uVar41 = uVar39 * 0x80 | uVar39 >> 0x19;
            uVar33 = (uVar20 ^ uVar17) + (uVar41 ^ uVar31) + uVar26 + ((uVar36 | uVar33) & uVar14 | uVar36 & uVar33);
            uVar39 = uVar40 << 0xf | uVar40 >> 0x11;
            uVar31 = uVar37 >> 0xd | uVar37 << 0x13;
            uVar38 = ((uVar34 ^ uVar37) & uVar32 ^ uVar34) + uVar41 + uVar17 + uVar38;
            uVar38 = (uVar38 >> 0xf | uVar38 * 0x20000) ^ (uVar38 * 0x200 | uVar38 >> 0x17) ^ uVar38;
            uVar26 = uVar39 ^ uVar23 ^ uVar17;
            uVar17 = uVar17 ^ (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^
                              (uVar19 << 7 | uVar19 >> 0x19) ^ uVar39 ^ uVar27 ^ uVar23;
            uVar26 = uVar33 * 0x1000 | uVar33 >> 0x14;
            uVar37 = uVar38 + 0xa879d8a7 + uVar26;
            uVar39 = uVar37 * 0x80 | uVar37 >> 0x19;
            uVar37 = (uVar21 ^ uVar35) + (uVar39 ^ uVar26) + uVar14 + ((uVar33 | uVar36) & uVar28 | uVar33 & uVar36);
            uVar26 = uVar15 << 0xf | uVar15 >> 0x11;
            uVar34 = ((uVar31 ^ uVar32) & uVar38 ^ uVar31) + uVar39 + uVar35 + uVar34;
            uVar32 = uVar32 >> 0xd | uVar32 << 0x13;
            uVar39 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar34 = (uVar34 >> 0xf | uVar34 * 0x20000) ^ (uVar34 * 0x200 | uVar34 >> 0x17) ^ uVar34;
            uVar14 = uVar26 ^ uVar24 ^ uVar35;
            uVar35 = uVar35 ^ (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^
                              (uVar20 << 7 | uVar20 >> 0x19) ^ uVar26 ^ uVar29 ^ uVar24;
            uVar14 = uVar37 * 0x1000 | uVar37 >> 0x14;
            uVar26 = uVar34 + 0x50f3b14f + uVar14;
            uVar26 = uVar26 * 0x80 | uVar26 >> 0x19;
            uVar36 = (uVar22 ^ uVar18) + (uVar26 ^ uVar14) + uVar28 + ((uVar37 | uVar33) & uVar39 | uVar37 & uVar33);
            uVar28 = uVar16 << 0xf | uVar16 >> 0x11;
            uVar31 = ((uVar32 ^ uVar38) & uVar34 ^ uVar32) + uVar26 + uVar18 + uVar31;
            uVar14 = uVar33 * 0x200 | uVar33 >> 0x17;
            uVar38 = uVar38 >> 0xd | uVar38 << 0x13;
            uVar31 = (uVar31 >> 0xf | uVar31 * 0x20000) ^ (uVar31 * 0x200 | uVar31 >> 0x17) ^ uVar31;
            uVar26 = uVar28 ^ uVar25 ^ uVar18;
            uVar18 = uVar18 ^ (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^
                              (uVar21 << 7 | uVar21 >> 0x19) ^ uVar28 ^ uVar30 ^ uVar25;
            uVar28 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar26 = uVar37 * 0x200 | uVar37 >> 0x17;
            uVar33 = uVar28 + 0xa1e7629e + uVar31;
            uVar41 = uVar33 * 0x80 | uVar33 >> 0x19;
            uVar39 = (uVar23 ^ uVar19) + (uVar41 ^ uVar28) + uVar39 + ((uVar36 | uVar37) & uVar14 | uVar36 & uVar37);
            uVar33 = uVar34 >> 0xd | uVar34 << 0x13;
            uVar32 = ((uVar34 ^ uVar38) & uVar31 ^ uVar38) + uVar41 + uVar19 + uVar32;
            uVar32 = (uVar32 >> 0xf | uVar32 * 0x20000) ^ (uVar32 * 0x200 | uVar32 >> 0x17) ^ uVar32;
            uVar37 = uVar17 << 0xf | uVar17 >> 0x11;
            uVar28 = uVar37 ^ uVar27 ^ uVar19;
            uVar34 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar41 = uVar32 + 0x43cec53d + uVar34;
            uVar28 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^ (uVar22 << 7 | uVar22 >> 0x19)
                     ^ uVar37 ^ uVar27 ^ uVar19 ^ uVar40;
            uVar19 = uVar41 * 0x80 | uVar41 >> 0x19;
            uVar34 = (uVar24 ^ uVar20) + (uVar19 ^ uVar34) + uVar14 + ((uVar39 | uVar36) & uVar26 | uVar39 & uVar36);
            uVar41 = uVar34 * 0x1000 | uVar34 >> 0x14;
            uVar37 = uVar31 >> 0xd | uVar31 << 0x13;
            uVar38 = ((uVar33 ^ uVar31) & uVar32 ^ uVar33) + uVar19 + uVar20 + uVar38;
            uVar43 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar38 = (uVar38 >> 0xf | uVar38 * 0x20000) ^ (uVar38 * 0x200 | uVar38 >> 0x17) ^ uVar38;
            uVar19 = uVar35 << 0xf | uVar35 >> 0x11;
            uVar14 = uVar19 ^ uVar29 ^ uVar20;
            uVar31 = uVar38 + 0x879d8a7a + uVar41;
            uVar42 = uVar31 * 0x80 | uVar31 >> 0x19;
            uVar19 = (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^ (uVar23 << 7 | uVar23 >> 0x19)
                     ^ uVar19 ^ uVar29 ^ uVar20 ^ uVar15;
            uVar36 = (uVar25 ^ uVar21) + (uVar42 ^ uVar41) + uVar26 + ((uVar34 | uVar39) & uVar43 | uVar34 & uVar39);
            uVar14 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar31 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar33 = ((uVar37 ^ uVar32) & uVar38 ^ uVar37) + uVar42 + uVar21 + uVar33;
            uVar32 = uVar32 >> 0xd | uVar32 << 0x13;
            uVar33 = (uVar33 >> 0xf | uVar33 * 0x20000) ^ (uVar33 * 0x200 | uVar33 >> 0x17) ^ uVar33;
            uVar20 = uVar18 << 0xf | uVar18 >> 0x11;
            uVar26 = uVar20 ^ uVar30 ^ uVar21;
            uVar39 = uVar33 + 0xf3b14f5 + uVar31;
            uVar20 = (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^ (uVar24 << 7 | uVar24 >> 0x19)
                     ^ uVar20 ^ uVar30 ^ uVar21 ^ uVar16;
            uVar21 = uVar39 * 0x80 | uVar39 >> 0x19;
            uVar26 = uVar34 * 0x200 | uVar34 >> 0x17;
            uVar39 = (uVar27 ^ uVar22) + (uVar21 ^ uVar31) + uVar43 + ((uVar36 | uVar34) & uVar14 | uVar36 & uVar34);
            uVar34 = uVar38 >> 0xd | uVar38 << 0x13;
            uVar37 = ((uVar32 ^ uVar38) & uVar33 ^ uVar32) + uVar21 + uVar22 + uVar37;
            uVar37 = (uVar37 >> 0xf | uVar37 * 0x20000) ^ (uVar37 * 0x200 | uVar37 >> 0x17) ^ uVar37;
            uVar31 = uVar28 << 0xf | uVar28 >> 0x11;
            uVar21 = uVar31 ^ uVar22 ^ uVar40;
            uVar38 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar41 = uVar37 + 0x1e7629ea + uVar38;
            uVar21 = (uVar21 << 0xf | uVar21 >> 0x11) ^ (uVar21 >> 9 | uVar21 << 0x17) ^ (uVar25 << 7 | uVar25 >> 0x19)
                     ^ uVar31 ^ uVar22 ^ uVar17 ^ uVar40;
            uVar22 = uVar41 * 0x80 | uVar41 >> 0x19;
            uVar38 = (uVar29 ^ uVar23) + (uVar22 ^ uVar38) + uVar14 + ((uVar39 | uVar36) & uVar26 | uVar39 & uVar36);
            uVar41 = uVar38 * 0x1000 | uVar38 >> 0x14;
            uVar31 = uVar33 >> 0xd | uVar33 << 0x13;
            uVar32 = ((uVar33 ^ uVar34) & uVar37 ^ uVar34) + uVar22 + uVar23 + uVar32;
            uVar43 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar32 = (uVar32 >> 0xf | uVar32 * 0x20000) ^ (uVar32 * 0x200 | uVar32 >> 0x17) ^ uVar32;
            uVar22 = uVar19 << 0xf | uVar19 >> 0x11;
            uVar14 = uVar22 ^ uVar23 ^ uVar15;
            uVar33 = uVar32 + 0x3cec53d4 + uVar41;
            uVar42 = uVar33 * 0x80 | uVar33 >> 0x19;
            uVar22 = (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^ (uVar27 << 7 | uVar27 >> 0x19)
                     ^ uVar22 ^ uVar23 ^ uVar35 ^ uVar15;
            uVar33 = (uVar30 ^ uVar24) + (uVar42 ^ uVar41) + uVar26 + ((uVar38 | uVar39) & uVar43 | uVar38 & uVar39);
            uVar14 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar36 = uVar33 * 0x1000 | uVar33 >> 0x14;
            uVar34 = ((uVar31 ^ uVar37) & uVar32 ^ uVar31) + uVar42 + uVar24 + uVar34;
            uVar37 = uVar37 >> 0xd | uVar37 << 0x13;
            uVar34 = (uVar34 >> 0xf | uVar34 * 0x20000) ^ (uVar34 * 0x200 | uVar34 >> 0x17) ^ uVar34;
            uVar23 = uVar20 << 0xf | uVar20 >> 0x11;
            uVar26 = uVar23 ^ uVar24 ^ uVar16;
            uVar39 = (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^ (uVar29 << 7 | uVar29 >> 0x19)
                     ^ uVar23 ^ uVar24 ^ uVar18 ^ uVar16;
            uVar26 = uVar38 * 0x200 | uVar38 >> 0x17;
            uVar23 = uVar34 + 0x79d8a7a8 + uVar36;
            uVar23 = uVar23 * 0x80 | uVar23 >> 0x19;
            uVar36 = (uVar25 ^ uVar40) + (uVar23 ^ uVar36) + uVar43 + ((uVar33 | uVar38) & uVar14 | uVar33 & uVar38);
            uVar38 = uVar32 >> 0xd | uVar32 << 0x13;
            uVar31 = ((uVar37 ^ uVar32) & uVar34 ^ uVar37) + uVar23 + uVar25 + uVar31;
            uVar31 = (uVar31 >> 0xf | uVar31 * 0x20000) ^ (uVar31 * 0x200 | uVar31 >> 0x17) ^ uVar31;
            uVar24 = uVar21 << 0xf | uVar21 >> 0x11;
            uVar23 = uVar24 ^ uVar25 ^ uVar17;
            uVar41 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar30 << 7 | uVar30 >> 0x19)
                     ^ uVar24 ^ uVar25 ^ uVar28 ^ uVar17;
            uVar23 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar24 = uVar31 + 0xf3b14f50 + uVar23;
            uVar25 = uVar24 * 0x80 | uVar24 >> 0x19;
            uVar32 = (uVar27 ^ uVar15) + (uVar25 ^ uVar23) + uVar14 + ((uVar36 | uVar33) & uVar26 | uVar36 & uVar33);
            uVar24 = uVar32 * 0x1000 | uVar32 >> 0x14;
            uVar37 = ((uVar38 ^ uVar34) & uVar31 ^ uVar38) + uVar25 + uVar27 + uVar37;
            uVar33 = uVar33 * 0x200 | uVar33 >> 0x17;
            uVar25 = uVar34 >> 0xd | uVar34 << 0x13;
            uVar37 = (uVar37 >> 0xf | uVar37 * 0x20000) ^ (uVar37 * 0x200 | uVar37 >> 0x17) ^ uVar37;
            uVar23 = uVar22 << 0xf | uVar22 >> 0x11;
            uVar14 = uVar23 ^ uVar27 ^ uVar35;
            uVar42 = (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^ (uVar40 << 7 | uVar40 >> 0x19)
                     ^ uVar23 ^ uVar27 ^ uVar19 ^ uVar35;
            uVar14 = uVar37 + 0xe7629ea1 + uVar24;
            uVar14 = uVar14 * 0x80 | uVar14 >> 0x19;
            uVar34 = (uVar29 ^ uVar16) + (uVar14 ^ uVar24) + uVar26 + ((uVar32 | uVar36) & uVar33 | uVar32 & uVar36);
            uVar23 = uVar31 >> 0xd | uVar31 << 0x13;
            uVar38 = ((uVar31 ^ uVar25) & uVar37 ^ uVar25) + uVar14 + uVar29 + uVar38;
            uVar14 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar38 = (uVar38 >> 0xf | uVar38 * 0x20000) ^ (uVar38 * 0x200 | uVar38 >> 0x17) ^ uVar38;
            uVar24 = uVar39 << 0xf | uVar39 >> 0x11;
            uVar26 = uVar24 ^ uVar29 ^ uVar18;
            uVar31 = (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^ (uVar15 << 7 | uVar15 >> 0x19)
                     ^ uVar24 ^ uVar29 ^ uVar20 ^ uVar18;
            uVar26 = uVar34 * 0x1000 | uVar34 >> 0x14;
            uVar24 = uVar38 + 0xcec53d43 + uVar26;
            uVar24 = uVar24 * 0x80 | uVar24 >> 0x19;
            uVar33 = (uVar30 ^ uVar17) + (uVar24 ^ uVar26) + uVar33 + ((uVar34 | uVar32) & uVar14 | uVar34 & uVar32);
            uVar27 = uVar37 >> 0xd | uVar37 << 0x13;
            uVar25 = ((uVar23 ^ uVar37) & uVar38 ^ uVar23) + uVar24 + uVar30 + uVar25;
            uVar37 = uVar32 * 0x200 | uVar32 >> 0x17;
            uVar25 = (uVar25 >> 0xf | uVar25 * 0x20000) ^ (uVar25 * 0x200 | uVar25 >> 0x17) ^ uVar25;
            uVar24 = uVar41 << 0xf | uVar41 >> 0x11;
            uVar26 = uVar24 ^ uVar30 ^ uVar28;
            uVar30 = (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 >> 9 | uVar26 << 0x17) ^ (uVar16 << 7 | uVar16 >> 0x19)
                     ^ uVar24 ^ uVar30 ^ uVar21 ^ uVar28;
            uVar26 = uVar33 * 0x1000 | uVar33 >> 0x14;
            uVar24 = uVar25 + 0x9d8a7a87 + uVar26;
            uVar32 = uVar34 * 0x200 | uVar34 >> 0x17;
            uVar36 = uVar24 * 0x80 | uVar24 >> 0x19;
            uVar29 = uVar42 << 0xf | uVar42 >> 0x11;
            uVar34 = (uVar35 ^ uVar40) + (uVar36 ^ uVar26) + uVar14 + ((uVar33 | uVar34) & uVar37 | uVar33 & uVar34);
            uVar24 = uVar38 >> 0xd | uVar38 << 0x13;
            uVar23 = ((uVar27 ^ uVar38) & uVar25 ^ uVar27) + uVar36 + uVar40 + uVar23;
            uVar23 = (uVar23 >> 0xf | uVar23 * 0x20000) ^ (uVar23 * 0x200 | uVar23 >> 0x17) ^ uVar23;
            uVar14 = uVar29 ^ uVar19 ^ uVar40;
            uVar40 = uVar40 ^ (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar14 >> 9 | uVar14 << 0x17) ^
                              (uVar17 << 7 | uVar17 >> 0x19) ^ uVar29 ^ uVar22 ^ uVar19;
            uVar14 = uVar34 * 0x1000 | uVar34 >> 0x14;
            uVar26 = uVar23 + 0x3b14f50f + uVar14;
            uVar26 = uVar26 * 0x80 | uVar26 >> 0x19;
            uVar37 = (uVar18 ^ uVar15) + (uVar26 ^ uVar14) + uVar37 + ((uVar34 | uVar33) & uVar32 | uVar34 & uVar33);
            uVar27 = ((uVar24 ^ uVar25) & uVar23 ^ uVar24) + uVar26 + uVar15 + uVar27;
            uVar14 = uVar33 * 0x200 | uVar33 >> 0x17;
            uVar25 = uVar25 >> 0xd | uVar25 << 0x13;
            uVar29 = uVar37 * 0x1000 | uVar37 >> 0x14;
            uVar27 = (uVar27 >> 0xf | uVar27 * 0x20000) ^ (uVar27 * 0x200 | uVar27 >> 0x17) ^ uVar27;
            uVar26 = uVar34 * 0x200 | uVar34 >> 0x17;
            uVar38 = uVar27 + 0x7629ea1e + uVar29;
            uVar38 = uVar38 * 0x80 | uVar38 >> 0x19;
            uVar32 = (uVar28 ^ uVar16) + (uVar38 ^ uVar29) + uVar32 + ((uVar37 | uVar34) & uVar14 | uVar37 & uVar34);
            uVar29 = uVar23 >> 0xd | uVar23 << 0x13;
            uVar24 = ((uVar23 ^ uVar25) & uVar27 ^ uVar25) + uVar38 + uVar16 + uVar24;
            uVar23 = uVar32 * 0x1000 | uVar32 >> 0x14;
            uVar24 = (uVar24 >> 0xf | uVar24 * 0x20000) ^ (uVar24 * 0x200 | uVar24 >> 0x17) ^ uVar24;
            uVar34 = uVar37 * 0x200 | uVar37 >> 0x17;
            uVar38 = uVar24 + 0xec53d43c + uVar23;
            uVar38 = uVar38 * 0x80 | uVar38 >> 0x19;
            uVar37 = (uVar19 ^ uVar17) + (uVar38 ^ uVar23) + uVar14 + ((uVar32 | uVar37) & uVar26 | uVar32 & uVar37);
            uVar23 = uVar27 >> 0xd | uVar27 << 0x13;
            uVar25 = ((uVar29 ^ uVar27) & uVar24 ^ uVar29) + uVar38 + uVar17 + uVar25;
            uVar25 = (uVar25 >> 0xf | uVar25 * 0x20000) ^ (uVar25 * 0x200 | uVar25 >> 0x17) ^ uVar25;
            uVar27 = uVar37 * 0x1000 | uVar37 >> 0x14;
            uVar14 = uVar25 + 0xd8a7a879 + uVar27;
            uVar38 = uVar14 * 0x80 | uVar14 >> 0x19;
            uVar14 = uVar32 * 0x200 | uVar32 >> 0x17;
            uVar26 = (uVar20 ^ uVar35) + (uVar38 ^ uVar27) + uVar26 + ((uVar37 | uVar32) & uVar34 | uVar37 & uVar32);
            uVar32 = uVar26 * 0x1000 | uVar26 >> 0x14;
            uVar27 = uVar24 >> 0xd | uVar24 << 0x13;
            uVar29 = ((uVar23 ^ uVar24) & uVar25 ^ uVar23) + uVar38 + uVar35 + uVar29;
            uVar29 = (uVar29 >> 0xf | uVar29 * 0x20000) ^ (uVar29 * 0x200 | uVar29 >> 0x17) ^ uVar29;
            uVar24 = uVar29 + 0xb14f50f3 + uVar32;
            uVar38 = uVar24 * 0x80 | uVar24 >> 0x19;
            uVar32 = (uVar21 ^ uVar18) + (uVar38 ^ uVar32) + uVar34 + ((uVar37 | uVar26) & uVar14 | uVar37 & uVar26);
            uVar34 = uVar32 * 0x1000 | uVar32 >> 0x14;
            uVar24 = uVar25 >> 0xd | uVar25 << 0x13;
            uVar23 = ((uVar27 ^ uVar25) & uVar29 ^ uVar27) + uVar38 + uVar18 + uVar23;
            uVar33 = uVar37 * 0x200 | uVar37 >> 0x17;
            uVar23 = (uVar23 >> 0xf | uVar23 * 0x20000) ^ (uVar23 * 0x200 | uVar23 >> 0x17) ^ uVar23;
            uVar25 = uVar23 + 0x629ea1e7 + uVar34;
            uVar25 = uVar25 * 0x80 | uVar25 >> 0x19;
            uVar37 = (uVar22 ^ uVar28) + (uVar25 ^ uVar34) + uVar14 + ((uVar32 | uVar26) & uVar33 | uVar32 & uVar26);
            uVar14 = uVar26 * 0x200 | uVar26 >> 0x17;
            uVar27 = ((uVar29 ^ uVar24) & uVar23 ^ uVar24) + uVar25 + uVar28 + uVar27;
            uVar34 = uVar37 * 0x1000 | uVar37 >> 0x14;
            uVar25 = uVar29 >> 0xd | uVar29 << 0x13;
            uVar27 = (uVar27 >> 0xf | uVar27 * 0x20000) ^ (uVar27 * 0x200 | uVar27 >> 0x17) ^ uVar27;
            uVar26 = uVar32 * 0x200 | uVar32 >> 0x17;
            uVar29 = uVar27 + 0xc53d43ce + uVar34;
            uVar38 = uVar29 * 0x80 | uVar29 >> 0x19;
            uVar32 = (uVar39 ^ uVar19) + (uVar38 ^ uVar34) + uVar33 + ((uVar37 | uVar32) & uVar14 | uVar37 & uVar32);
            uVar34 = uVar32 * 0x1000 | uVar32 >> 0x14;
            uVar29 = uVar23 >> 0xd | uVar23 << 0x13;
            uVar24 = ((uVar25 ^ uVar23) & uVar27 ^ uVar25) + uVar38 + uVar19 + uVar24;
            uVar24 = (uVar24 >> 0xf | uVar24 * 0x20000) ^ (uVar24 * 0x200 | uVar24 >> 0x17) ^ uVar24;
            uVar19 = uVar24 + 0x8a7a879d + uVar34;
            uVar23 = uVar19 * 0x80 | uVar19 >> 0x19;
            uVar14 = (uVar41 ^ uVar20) + (uVar23 ^ uVar34) + uVar14 + ((uVar32 | uVar37) & uVar26 | uVar32 & uVar37);
            uVar19 = uVar14 * 0x1000 | uVar14 >> 0x14;
            uVar25 = ((uVar29 ^ uVar27) & uVar24 ^ uVar29) + uVar23 + uVar20 + uVar25;
            uVar23 = uVar27 >> 0xd | uVar27 << 0x13;
            uVar34 = uVar37 * 0x200 | uVar37 >> 0x17;
            uVar25 = (uVar25 >> 0xf | uVar25 * 0x20000) ^ (uVar25 * 0x200 | uVar25 >> 0x17) ^ uVar25;
            uVar27 = uVar25 + 0x14f50f3b + uVar19;
            uVar37 = uVar27 * 0x80 | uVar27 >> 0x19;
            uVar26 = (uVar42 ^ uVar21) + (uVar37 ^ uVar19) + uVar26 + ((uVar14 | uVar32) & uVar34 | uVar14 & uVar32);
            uVar19 = uVar26 * 0x1000 | uVar26 >> 0x14;
            uVar27 = uVar24 >> 0xd | uVar24 << 0x13;
            uVar29 = ((uVar23 ^ uVar24) & uVar25 ^ uVar23) + uVar37 + uVar21 + uVar29;
            uVar37 = uVar32 * 0x200 | uVar32 >> 0x17;
            uVar29 = (uVar29 >> 0xf | uVar29 * 0x20000) ^ (uVar29 * 0x200 | uVar29 >> 0x17) ^ uVar29;
            uVar24 = uVar29 + 0x29ea1e76 + uVar19;
            uVar24 = uVar24 * 0x80 | uVar24 >> 0x19;
            uVar32 = (uVar31 ^ uVar22) + (uVar24 ^ uVar19) + uVar34 + ((uVar26 | uVar14) & uVar37 | uVar26 & uVar14);
            uVar23 = ((uVar25 ^ uVar27) & uVar29 ^ uVar27) + uVar24 + uVar22 + uVar23;
            uVar34 = uVar14 * 0x200 | uVar14 >> 0x17;
            uVar24 = uVar25 >> 0xd | uVar25 << 0x13;
            uVar19 = uVar32 * 0x1000 | uVar32 >> 0x14;
            uVar23 = (uVar23 >> 0xf | uVar23 * 0x20000) ^ (uVar23 * 0x200 | uVar23 >> 0x17) ^ uVar23;
            uVar14 = uVar26 * 0x200 | uVar26 >> 0x17;
            uVar25 = uVar23 + 0x53d43cec + uVar19;
            uVar25 = uVar25 * 0x80 | uVar25 >> 0x19;
            uVar37 = (uVar30 ^ uVar39) + (uVar25 ^ uVar19) + uVar37 + ((uVar32 | uVar26) & uVar34 | uVar32 & uVar26);
            uVar26 = uVar37 * 0x1000 | uVar37 >> 0x14;
            uVar27 = ((uVar24 ^ uVar29) & uVar23 ^ uVar24) + uVar25 + uVar39 + uVar27;
            uVar29 = uVar29 >> 0xd | uVar29 << 0x13;
            uVar27 = (uVar27 >> 0xf | uVar27 * 0x20000) ^ (uVar27 * 0x200 | uVar27 >> 0x17) ^ uVar27;
            uVar19 = uVar27 + 0xa7a879d8 + uVar26;
            uVar25 = uVar19 * 0x80 | uVar19 >> 0x19;
            uVar34 = (uVar41 ^ uVar40) + (uVar25 ^ uVar26) + uVar34 + ((uVar37 | uVar32) & uVar14 | uVar37 & uVar32);
            uVar19 = uVar23 >> 0xd | uVar23 << 0x13;
            uVar24 = ((uVar29 ^ uVar23) & uVar27 ^ uVar29) + uVar25 + uVar41 + uVar24;
            uVar32 = uVar32 * 0x200 | uVar32 >> 0x17;
            uVar24 = (uVar24 >> 0xf | uVar24 * 0x20000) ^ (uVar24 * 0x200 | uVar24 >> 0x17) ^ uVar24;
            uVar25 = uVar31 << 0xf | uVar31 >> 0x11;
            uVar38 = uVar34 * 0x1000 | uVar34 >> 0x14;
            uVar23 = uVar25 ^ uVar20 ^ uVar15;
            uVar26 = uVar38 + 0x4f50f3b1 + uVar24;
            uVar33 = uVar26 * 0x80 | uVar26 >> 0x19;
            uVar26 = uVar37 * 0x200 | uVar37 >> 0x17;
            uVar20 = (uVar33 ^ uVar38) +
                     ((uVar34 | uVar37) & uVar32 | uVar34 & uVar37) + uVar14 +
                     ((uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar35 << 7 | uVar35 >> 0x19)
                      ^ uVar25 ^ uVar42 ^ uVar39 ^ uVar20 ^ uVar15);
            uVar25 = uVar20 * 0x1000 | uVar20 >> 0x14;
            uVar29 = ((uVar19 ^ uVar27) & uVar24 ^ uVar19) + uVar33 + uVar42 + uVar29;
            uVar23 = uVar27 >> 0xd | uVar27 << 0x13;
            uVar29 = (uVar29 >> 0xf | uVar29 * 0x20000) ^ (uVar29 * 0x200 | uVar29 >> 0x17) ^ uVar29;
            uVar14 = uVar30 << 0xf | uVar30 >> 0x11;
            uVar35 = uVar14 ^ uVar21 ^ uVar16;
            uVar15 = uVar29 + 0x9ea1e762 + uVar25;
            uVar27 = uVar15 * 0x80 | uVar15 >> 0x19;
            uVar15 = uVar34 * 0x200 | uVar34 >> 0x17;
            uVar14 = (uVar27 ^ uVar25) +
                     ((uVar20 | uVar34) & uVar26 | uVar20 & uVar34) + uVar32 +
                     ((uVar35 << 0xf | uVar35 >> 0x11) ^ (uVar35 >> 9 | uVar35 << 0x17) ^ (uVar18 << 7 | uVar18 >> 0x19)
                      ^ uVar14 ^ uVar31 ^ uVar41 ^ uVar21 ^ uVar16);
            uVar18 = uVar24 >> 0xd | uVar24 << 0x13;
            uVar19 = ((uVar24 ^ uVar23) & uVar29 ^ uVar23) + uVar27 + uVar31 + uVar19;
            uVar21 = uVar14 * 0x1000 | uVar14 >> 0x14;
            uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
            uVar16 = uVar40 << 0xf | uVar40 >> 0x11;
            uVar35 = uVar16 ^ uVar22 ^ uVar17;
            uVar40 = uVar19 + 0x3d43cec5 + uVar21;
            uVar40 = uVar40 * 0x80 | uVar40 >> 0x19;
            uStack_20 = uStack_20 ^ uVar14;
            uVar23 = ((uVar18 ^ uVar29) & uVar19 ^ uVar18) + uVar40 + uVar30 + uVar23;
            *param_1 = *param_1 ^
                       (uVar40 ^ uVar21) +
                       ((uVar14 | uVar20) & uVar15 | uVar14 & uVar20) + uVar26 +
                       ((uVar35 << 0xf | uVar35 >> 0x11) ^ (uVar35 >> 9 | uVar35 << 0x17) ^
                        (uVar28 << 7 | uVar28 >> 0x19) ^ uVar16 ^ uVar30 ^ uVar42 ^ uVar22 ^ uVar17);
            param_1[1] = uStack_20;
            uStack_1c = uStack_1c ^ (uVar20 * 0x200 | uVar20 >> 0x17);
            uStack_14 = uStack_14 ^ uVar15;
            param_1[3] = uStack_14;
            param_1[2] = uStack_1c;
            uStack_24 = (uVar23 * 0x200 | uVar23 >> 0x17) ^ (uVar23 >> 0xf | uVar23 * 0x20000) ^ uStack_24 ^ uVar23;
            param_1[4] = uStack_24;
            uStack_10 = uStack_10 ^ uVar19;
            param_1[5] = uStack_10;
            uStack_18 = uStack_18 ^ (uVar29 >> 0xd | uVar29 << 0x13);
            uStack_c = uStack_c ^ uVar18;
            param_1[7] = uStack_c;
            param_1[6] = uStack_18;
        } while (param_3 != 0);
    }
    return;
}


/* fcn.00001b27 @ 0x1b27 */

int __fastcall fcn.00001b27(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = section..text(param_1,param_2,param_3);
    return iVar1;
}


/* fcn.0000a54e @ 0xa54e */

uint fcn.0000a54e(void)

{
    uint uVar1;
    
    if (*0xb200 != '\0') {
        uVar1 = fcn.0000a74a();
        return uVar1;
    }
    return 0x80000003;
}


/* fcn.0000a74a @ 0xa74a */

uint32_t __fastcall fcn.0000a74a(uint32_t param_1,uint param_2)

{
    uint32_t uVar1;
    int32_t var_ch;
    int32_t var_4h;
    
    uVar1 = param_1 & 0xff;
    if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
        var_4h = &var_ch;
        InterruptDescriptorTableRegister();
        uVar1 = (**(**(stack0xfffffff2 + -4) + 0x58))(*(stack0xfffffff2 + -4),param_1,param_2,0,0xaa40,0);
        uVar1 = uVar1 & -(uVar1 != 0xa0000002);
    }
    else {
        uVar1 = 0x80000003;
    }
    return uVar1;
}


/* fcn.0000a6ad @ 0xa6ad */

//WARNING: Variable defined which should be unmapped: var_1h

int __fastcall fcn.0000a6ad(uint *param_1,uint *param_2)

{
    int iVar1;
    uint uVar2;
    uint noname_0;
    int32_t var_408h;
    int32_t var_3fch;
    int32_t var_1h;
    
    if ((param_1 == NULL) || (param_2 == NULL)) {
        iVar1 = -0x7ffffffe;
    }
    else {
        *param_1 = 0;
        *param_2 = 0;
        iVar1 = fcn.0000a5c0(param_1,&var_1h,&var_408h);
        if (-1 < iVar1) {
            uVar2 = fcn.00001c9e();
            *param_1 = uVar2;
            iVar1 = fcn.0000a5c0(noname_0,&var_1h,&var_408h);
            if (-1 < iVar1) {
                uVar2 = fcn.00001c9e();
                *param_2 = uVar2;
                iVar1 = 0;
            }
        }
    }
    return iVar1;
}


/* fcn.0000a5c0 @ 0xa5c0 */

int __cdecl fcn.0000a5c0(uint noname_0,int32_t arg_ch,int32_t arg_10h)

{
    int *piVar1;
    int iVar2;
    ulong uVar3;
    int32_t var_434h;
    int32_t var_42eh;
    int8_t var_42ah;
    int32_t var_429h;
    int16_t var_28h;
    int32_t var_26h;
    int32_t var_22h;
    int32_t var_1eh;
    int32_t var_1ah;
    int32_t var_16h;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = 0;
    var_8h = &var_10h;
    InterruptDescriptorTableRegister();
    piVar1 = *(stack0xffffffee + -4);
    if (piVar1 == NULL) {
        iVar2 = -0x7ffffff2;
    }
    else {
        iVar2 = (**(*piVar1 + 0x20))(piVar1,0xa9f0,0,0,&var_4h);
        if ((-1 < iVar2) && (var_4h != 0)) {
            var_22h = 0x7a010000;
            var_28h = 0x180;
            var_1eh = fcn.00001c9e();
            var_1ah = fcn.00001c9e();
            var_16h = fcn.00001c9e();
            uVar3 = fcn.00001c9e();
            iVar2 = uVar3 >> 0x20;
            var_26h = uVar3;
            iVar2 = (**(iVar2 + 0xc))(iVar2,0x16,&var_28h,0x40b,&var_434h);
            if (-1 < iVar2) {
                iVar2 = fcn.00001c9e();
                if (iVar2 == 0) {
                    *arg_ch = var_42ah;
                    fcn.00001b27(0x400);
                    iVar2 = 0;
                }
                else {
                    iVar2 = -0x7ffffff9;
                }
            }
        }
    }
    return iVar2;
}


/* fcn.00000188 @ 0x188 */

uint fcn.00000188(ushort *param_1)

{
    uint uVar1;
    bool bVar2;
    
    uVar1 = rdrand();
    bVar2 = rdrandIsValid();
    if (!bVar2) {
        return 0;
    }
    *param_1 = uVar1;
    return 1;
}


/* fcn.00000e51 @ 0xe51 */

int __cdecl fcn.00000e51(int32_t arg_8h)

{
    int iVar1;
    int iVar2;
    uint *in_ECX;
    uint16_t in_DX;
    uint32_t uVar3;
    int32_t var_70h;
    int32_t var_6ah;
    int32_t var_64h;
    int32_t var_24h;
    uint32_t var_12h;
    int32_t var_ch;
    int32_t var_6h;
    int16_t var_2h;
    
    var_24h._0_1_ = 0x16;
    iVar1 = (**in_ECX)();
    if (-1 < iVar1) {
        if (var_12h == 0x494e5443) {
            uVar3 = 0;
            if (in_DX >> 1 != 0) {
                do {
                    fcn.00000188(uVar3 + arg_8h);
                    uVar3 = uVar3 + 1;
                } while (uVar3 < in_DX >> 1);
            }
            iVar1 = 0;
        }
        else {
            fcn.00000108(&var_ch,0xc);
            fcn.00000108(&var_70h,0x4c,0);
            var_6h = 0x7b010000;
            var_ch._0_2_ = 0x180;
            var_2h = in_DX << 8 | in_DX >> 8;
            stack0xfffffff2 = 0xc000000;
            iVar1 = (*in_ECX[3])();
            if (-1 < iVar1) {
                iVar2 = fcn.00001c9e();
                if (iVar2 == 0) {
                    if (in_DX != 0) {
                        fcn.00001b27(in_DX);
                    }
                }
                else {
                    iVar1 = -0x7ffffff9;
                }
            }
        }
    }
    return iVar1;
}


/* fcn.00000d7d @ 0xd7d */

uint32_t __cdecl fcn.00000d7d(int32_t arg_7ch)

{
    uint32_t uVar1;
    int iVar2;
    int in_ECX;
    int16_t *in_stack_00000008;
    int32_t var_70h_2;
    int32_t var_104h;
    int32_t var_feh;
    int16_t var_70h;
    int32_t var_6eh;
    int32_t var_6ah;
    int32_t var_66h;
    int32_t var_62h;
    int32_t var_5eh;
    int16_t var_5ah;
    int8_t var_58h;
    int16_t var_57h;
    int16_t var_55h;
    int32_t var_53h;
    
    fcn.00001c9e();
    fcn.00001c9e();
    if (*in_stack_00000008 != 0) {
        fcn.00001b27(*in_stack_00000008);
    }
    fcn.00001c9e();
    uVar1 = (**(in_ECX + 0xc))();
    if (-1 < uVar1) {
        uVar1 = fcn.00001c9e();
        if (uVar1 < 0x94) {
            iVar2 = fcn.00001c9e();
            uVar1 = -(iVar2 != 0) & 0x80000007;
        }
        else {
            uVar1 = 0x80000005;
        }
    }
    return uVar1;
}


/* fcn.00001cf6 @ 0x1cf6 */

void __cdecl fcn.00001cf6(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.000004ad @ 0x4ad */

int __fastcall fcn.000004ad(int *param_1,int param_2,int *param_3)

{
    int iVar1;
    uint32_t uVar2;
    uint *puStack_8;
    int *piStack_4;
    
    puStack_8 = NULL;
    if (((param_1 == NULL) || (*param_1 == 0)) || (param_2 == 0)) {
        iVar1 = -0x7ffffffe;
    }
    else {
        piStack_4 = param_1;
        iVar1 = (**(*param_1 + 0x4c))(param_1,0x16,&puStack_8);
        if ((puStack_8 == NULL) || (iVar1 < 0)) {
            iVar1 = -0x7ffffff7;
        }
        else {
            uVar2 = 0;
            do {
                piStack_4 = param_3;
                *puStack_8 = 0x16;
                puStack_8[1] = 0xe;
                *(puStack_8 + 2) = 1;
                *(puStack_8 + 10) = uVar2;
                *(puStack_8 + 0xe) = 4;
                (**(*param_1 + 0x50))(puStack_8 + 0x12,&piStack_4,4);
                iVar1 = (**(param_2 + 8))(param_2,0,0,&piStack_4,0,4,0,puStack_8);
                if (iVar1 < 0) {
                    return iVar1;
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < 8);
        }
    }
    return iVar1;
}


/* fcn.00000fa0 @ 0xfa0 */

uint __fastcall fcn.00000fa0(uint param_1)

{
    uint uVar1;
    uint32_t uVar2;
    int32_t var_18h;
    uint32_t var_14h;
    int16_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_10h = 0xff;
    var_8h = 0x10;
    var_18h = 0;
    var_14h = 0;
    var_4h = 0;
    uVar1 = fcn.00001cf6(param_1,&var_4h);
    if (var_4h != 0) {
        uVar1 = (**var_4h)(var_4h,0xab00,0xaa60,0,&var_8h,&var_18h);
    }
    if ((((var_10h._1_1_ == '\x02') && (var_10h < 2)) && (var_14h == 0)) && (var_18h != -1)) {
        if (var_10h == 1) {
            uVar2 = in(var_18h);
            out(var_18h,uVar2 & 0xffffe3ff);
        }
        else {
            *var_18h = *var_18h & 0xffffe3ff;
        }
    }
    return uVar1;
}


/* fcn.00001cb7 @ 0x1cb7 */

//WARNING: Removing unreachable block (ram,0x00001cc9)

void fcn.00001cb7(void)

{
    uint32_t var_4h;
    
    do {
    } while( true );
}


/* fcn.00000576 @ 0x576 */

uint32_t __fastcall fcn.00000576(int param_1)

{
    uint32_t uVar1;
    int iVar2;
    int32_t var_138h;
    int32_t var_132h;
    int16_t var_a0h;
    int32_t var_9eh;
    int32_t var_9ah;
    int32_t var_96h;
    int32_t var_92h;
    int32_t var_8eh;
    int16_t var_8ah;
    int8_t var_88h;
    int16_t var_87h;
    int32_t var_85h;
    int8_t var_81h;
    
    var_9ah = 0x21010000;
    var_a0h = 0x280;
    var_96h = fcn.00001c9e();
    var_8eh = 0x9000040;
    var_8ah = 0;
    var_88h = 0;
    var_87h = 0;
    var_92h = fcn.00001c9e();
    var_85h = fcn.00001c9e();
    var_81h = 0;
    var_9eh = fcn.00001c9e();
    uVar1 = (**(param_1 + 0xc))(param_1,0x20,&var_a0h,0x93,&var_138h);
    if (-1 < uVar1) {
        uVar1 = fcn.00001c9e();
        if (uVar1 < 0x94) {
            iVar2 = fcn.00001c9e();
            uVar1 = -(iVar2 != 0) & 0x80000007;
        }
        else {
            uVar1 = 0x80000005;
        }
    }
    return uVar1;
}


/* fcn.00000f20 @ 0xf20 */

//WARNING: Variable defined which should be unmapped: var_4h

void __fastcall fcn.00000f20(int *param_1)

{
    int iVar1;
    uint16_t uVar2;
    int16_t var_64h;
    int32_t var_62h;
    int32_t var_20h;
    int8_t var_1bh;
    int32_t var_4h;
    
    uVar2 = 0;
    iVar1 = (**(*param_1 + 0x20))(param_1,0xa980,0,0,&var_4h);
    if (iVar1 < 0) {
        return;
    }
    if (var_4h == 0) {
        return;
    }
    iVar1 = (**(var_4h + 4))(param_1,&var_20h);
    if ((-1 < iVar1) && (var_1bh != 1)) {
        if (var_1bh == 2) {
            uVar2 = 0x20;
        }
        if (0x40 < uVar2) goto code_r0x00000f8b;
    }
    fcn.00000e51(&var_62h);
code_r0x00000f8b:
    fcn.00000d7d(var_4h);
    return;
}


/* fcn.00001034 @ 0x1034 */

uint __fastcall fcn.00001034(int *param_1,int param_2)

{
    int iVar1;
    int iVar2;
    uint noname_0;
    uint uVar3;
    int32_t var_4h;
    
    var_4h = param_1;
    iVar1 = fcn.000004ad(1);
    if (-1 < iVar1) goto code_r0x000010a4;
    iVar1 = fcn.00000fa0();
    if (iVar1 < 0) {
        iVar2 = fcn.00001cf6(noname_0,&var_4h);
        iVar1 = *param_1;
        if (-1 < iVar2) {
            uVar3 = 2;
            goto code_r0x0000108f;
        }
code_r0x0000109a:
        (**(iVar1 + 0x5c))(param_1);
    }
    else {
        iVar2 = fcn.00001cf6(noname_0,&var_4h);
        iVar1 = *param_1;
        if (iVar2 < 0) goto code_r0x0000109a;
        uVar3 = 0;
code_r0x0000108f:
        (**(iVar1 + 0x80))(uVar3,0x8000001a,0,0);
    }
    fcn.00001cb7();
code_r0x000010a4:
    if (param_2 == 0) {
        uVar3 = 0x80000002;
    }
    else {
        fcn.00000576();
        uVar3 = fcn.00000576();
    }
    fcn.00000f20();
    return uVar3;
}


/* fcn.00000c68 @ 0xc68 */

int __fastcall fcn.00000c68(int param_1,int *param_2,uint *param_3,int *param_4)

{
    int iVar1;
    uint noname_0;
    uchar uStack_429;
    int iStack_428;
    uint uStack_424;
    ushort uStack_420;
    uint uStack_41e;
    uint uStack_41a;
    uchar uStack_416;
    int16_t aiStack_414 [3];
    int iStack_40e;
    int iStack_408;
    uchar auStack_404 [1028];
    
    uStack_41e = 0xb000000;
    uStack_41a = 0x43010000;
    uStack_416 = 0;
    iStack_428 = 0;
    uStack_420 = 0x180;
    uStack_424 = 0;
    iVar1 = fcn.0000a6ad();
    if ((-1 < iVar1) || (iVar1 != -0x7fffffe7)) {
        iVar1 = fcn.0000a5c0(noname_0,&uStack_429,auStack_404);
        if (-1 < iVar1) {
            iStack_408 = fcn.00001c9e();
            iVar1 = 0;
        }
        if (iVar1 < 0) {
            return iVar1;
        }
        *param_2 = iStack_428;
        *param_3 = uStack_424;
        *param_4 = iStack_408;
        if ((iStack_408 == 0x49465800) && ((iStack_428 == 0x7003c || (uStack_416 = 0, iStack_428 == 0x5003c)))) {
            uStack_416 = 1;
        }
        fcn.00000108(aiStack_414,10,0);
        iVar1 = (**(param_1 + 0xc))(param_1,0xb,&uStack_420,10,aiStack_414);
        if (iVar1 < 0) {
            return iVar1;
        }
        if (aiStack_414[0] == 0x180) {
            if (iStack_40e != 0) {
                return -0x7ffffffa;
            }
            return iVar1;
        }
    }
    return -0x7ffffff9;
}


/* fcn.000097cf @ 0x97cf */

uchar fcn.000097cf(void)

{
    char cVar1;
    uchar extraout_CL;
    
    cVar1 = fcn.000097bb();
    if (cVar1 == '\0') {
        return 0;
    }
    return extraout_CL;
}


/* fcn.000097bb @ 0x97bb */

int fcn.000097bb(void)

{
    unkuint3 Var1;
    
    Var1 = *0xfed40030 >> 8;
    if ((*0xfed40030 != -1) && (*0xfed40030 != 0)) {
        return CONCAT31(Var1,1);
    }
    return Var1 << 8;
}


/* fcn.0000137b @ 0x137b */

uint32_t __fastcall fcn.0000137b(int *param_1)

{
    uint32_t uVar1;
    int iVar2;
    int32_t *piVar3;
    int32_t *piVar4;
    int32_t var_40h;
    int32_t var_1ch;
    uint uStack_1c;
    uint uStack_18;
    uint uStack_14;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = 4;
    piVar3 = 0xab1c;
    piVar4 = &var_40h;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar4 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
    }
    iVar2 = *param_1;
    *piVar4 = *piVar3;
    var_1ch = *0xaa60;
    uStack_1c = *0xaa64;
    uStack_18 = *0xaa68;
    uStack_14 = *0xaa6c;
    uVar1 = (**(iVar2 + 0x20))(param_1,0xa990,0,0,&var_4h);
    if ((uVar1 < 0) || (uVar1 = 0, var_4h == 0)) {
        uVar1 = uVar1 & 0xffffff00;
    }
    else {
        iVar2 = (**var_4h)(var_4h,&var_40h,&var_1ch,0,&var_8h,&var_ch);
        uVar1 = CONCAT31(iVar2 >> 8,(-1 < iVar2) + -1) & 0xffffff02;
        uVar1 = CONCAT31(uVar1 >> 8,uVar1 + -1);
    }
    return uVar1;
}


/* fcn.0000a4d3 @ 0xa4d3 */

uint32_t fcn.0000a4d3(void)

{
    int iVar1;
    
    fcn.00001a5b();
    iVar1 = fcn.00001aa7();
    if (iVar1 == 0) {
        fcn.0000a3cf();
        fcn.00001a5b();
        iVar1 = fcn.00001aa7();
    }
    return iVar1 + 0x30U & -(iVar1 != 0);
}


/* fcn.0000a3cf @ 0xa3cf */

int * fcn.0000a3cf(void)

{
    int iVar1;
    int iVar2;
    uint *puVar3;
    uint32_t uVar4;
    int *piVar5;
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
        iVar2 = (**(**(iStack_6 + -4) + 0x68))(0xa9a0,uStack_14,&iStack_10);
        iVar1 = iStack_10;
        if ((-1 < iVar2) && (piVar5 = iStack_10 + 0x2c, *piVar5 == 0x4c4d4f52)) {
            puVar3 = fcn.00001b0c();
            if (puVar3 != NULL) {
                *puVar3 = *(iVar1 + 0x30);
                puVar3[1] = *(iVar1 + 0x34);
                puVar3[3] = 0;
                uVar4 = iVar1 + 0x3c;
                puVar3[2] = 0x30;
                iVar2 = *(iVar1 + 0x34);
                piVar6 = puVar3 + 4;
                if (uVar4 < *(iVar1 + 0x38) * iVar2 + 0x10 + piVar5) {
                    do {
                        if (iVar2 != 0) {
                            fcn.00001b27(iVar2);
                        }
                        piVar6[1] = 0;
                        *piVar6 = (0x18 - puVar3) + piVar6;
                        piVar6 = piVar6 + 0xc;
                        iVar2 = *(iVar1 + 0x34);
                        uVar4 = uVar4 + iVar2;
                    } while (uVar4 < *(iVar1 + 0x38) * iVar2 + 0x10 + piVar5);
                }
            }
            return piVar5;
        }
    }
    return NULL;
}


/* fcn.0000a50d @ 0xa50d */

int __fastcall fcn.0000a50d(int param_1)

{
    int *piVar1;
    uint32_t uVar2;
    int iVar3;
    char cVar4;
    uint32_t uVar5;
    
    if (param_1 != 0) {
        piVar1 = param_1 + -8;
        iVar3 = *piVar1;
        cVar4 = fcn.00001b73();
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


/* fcn.0000a569 @ 0xa569 */

int fcn.0000a569(void)

{
    uint64_t uVar1;
    int iVar2;
    int32_t var_10h;
    int32_t var_4h;
    
    uVar1 = rdmsr(0x1b);
    if ((uVar1 & 0x100) == 0) {
        InterruptDescriptorTableRegister();
        iVar2 = stack0xffffffee + 1 + var_10h;
    }
    else {
        iVar2 = fcn.0000a5a1();
    }
    return iVar2;
}


/* fcn.00001613 @ 0x1613 */

int __thiscall fcn.00001613(uint param_1,uint param_2,uint param_3)

{
    int *piVar1;
    int iVar2;
    uint *puStack_24;
    int iStack_20;
    uchar *puStack_1c;
    uchar auStack_18 [2];
    int iStack_16;
    uint uStack_10;
    uint uStack_c;
    uint uStack_8;
    ushort uStack_4;
    
    puStack_1c = auStack_18;
    puStack_24 = NULL;
    iStack_20 = 0;
    uStack_10 = *0xab50;
    uStack_c = *0xab54;
    uStack_8 = *0xab58;
    uStack_4 = *0xab5c;
    InterruptDescriptorTableRegister();
    piVar1 = *(iStack_16 + -4);
    if (piVar1 == NULL) {
        iVar2 = -0x7ffffff2;
    }
    else {
        iVar2 = fcn.00001cf6(param_1,&iStack_20);
        if (-1 < iVar2) {
            iVar2 = (**(*piVar1 + 0x4c))(piVar1,0x20,&puStack_24);
            if ((iVar2 < 0) || (puStack_24 == NULL)) {
                iVar2 = -0x7ffffff7;
            }
            else {
                *puStack_24 = 0x20;
                puStack_24[1] = 0xe;
                *(puStack_24 + 2) = 1;
                *(puStack_24 + 10) = 1;
                *(puStack_24 + 0xe) = 9;
                if (puStack_24 + 0x12 != &uStack_10) {
                    section..text(puStack_24 + 0x12,&uStack_10,0xe);
                }
                iVar2 = (**(iStack_20 + 8))(iStack_20,0,0,param_2,param_3,param_1,0,puStack_24);
            }
        }
    }
    return iVar2;
}


/* fcn.000015d5 @ 0x15d5 */

uint __fastcall fcn.000015d5(int *param_1,uint *param_2,int param_3)

{
    uint uVar1;
    int iVar2;
    
    if (param_1 == NULL) {
        uVar1 = 0x80000002;
    }
    else {
        if (param_3 == 0) {
            iVar2 = fcn.0000a4d3();
        }
        else {
            iVar2 = fcn.0000a50d();
        }
        *param_1 = iVar2;
        if (iVar2 == 0) {
            uVar1 = 0x8000000e;
        }
        else {
            *param_2 = *(*param_1 + 0x1c);
            uVar1 = 0;
        }
    }
    return uVar1;
}


/* fcn.000007c9 @ 0x7c9 */

int __fastcall fcn.000007c9(int *param_1,int *param_2,uint param_3,uint *param_4)

{
    uint8_t *puVar1;
    uint32_t uVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    uint8_t *puStack_470;
    int *piStack_46c;
    int iStack_468;
    int *piStack_464;
    int iStack_460;
    uint32_t uStack_45c;
    uint32_t uStack_458;
    uint32_t uStack_454;
    int iStack_450;
    int *piStack_448;
    uint uStack_3e4;
    uint uStack_3e0;
    uint32_t uStack_3dc;
    ushort uStack_3d8;
    uchar auStack_3d6 [328];
    int iStack_28e;
    
    uStack_3e4 = 0;
    bVar3 = false;
    iStack_468 = param_2[1];
    iVar5 = *param_2;
    uVar2 = param_2[2];
    uStack_3e0 = 0x8000000a;
    iStack_460 = iVar5;
    piStack_448 = param_1;
    iVar4 = (**(*param_1 + 0x4c))(param_1,0x3a,&puStack_470);
    if (iVar4 < 0) {
        iVar4 = -0x7ffffff7;
    }
    else if (iVar5 != 0) {
        param_2 = param_2 + 5;
        do {
            piStack_464 = param_2;
            iVar4 = fcn.000006b3(param_2[-2],param_2[-1],*param_2,0);
            if (-1 < iVar4) {
                uVar6 = *puStack_470;
                *(puStack_470 + uVar6 + 1) = param_2[-2];
                *(puStack_470 + uVar6 + 5) = param_2[-1];
                iVar5 = *param_2;
                puVar1 = puStack_470 + uVar6 + 0xd;
                puVar1[0] = 0;
                puVar1[1] = 0;
                puVar1[2] = 0;
                puVar1[3] = 0;
                *(puStack_470 + uVar6 + 9) = iVar5;
                iStack_28e = *puStack_470 + 0x11;
                if (iStack_468 == 1) {
                    fcn.00002f6a();
                }
                else if (iStack_468 == 2) {
                    if ((uVar2 & 1) != 0) {
                        fcn.00002f6a();
                    }
                    if ((uVar2 & 2) != 0) {
                        fcn.00005905();
                    }
                    if ((uVar2 & 4) != 0) {
                        fcn.00005b91();
                    }
                    if ((uVar2 & 8) != 0) {
                        fcn.0000958e();
                    }
                    if ((uVar2 & 0x10) != 0) {
                        fcn.00005c55();
                    }
                }
                fcn.00001a5b();
                iVar5 = fcn.00001aa7();
                if (iVar5 != 0) {
                    iVar4 = param_2[-2];
                    do {
                        piStack_46c = iVar5 + 0x18;
                        if ((*piStack_46c == iVar4) && (*(iVar5 + 0x24) == *param_2)) {
                            bVar3 = true;
                            break;
                        }
                        iVar5 = fcn.00001aa7();
                    } while (iVar5 != 0);
                }
                if (bVar3) {
                    iStack_450 = 0;
                    iVar5 = piStack_46c[3];
                }
                else {
                    iStack_450 = param_2[-1];
                    iVar5 = *param_2;
                }
                if (iStack_468 == 1) {
                    fcn.00002f95(iVar5);
                    fcn.0000302b();
                    section..text(auStack_3d6,0xb220,0x14);
                    uStack_3d8 = 4;
                }
                else if (iStack_468 == 2) {
                    if ((uVar2 & 2) != 0) {
                        fcn.00005948(iVar5);
                    }
                    uVar6 = uVar2 & 1;
                    if (uVar6 != 0) {
                        fcn.00002f95(iVar5);
                    }
                    uStack_45c = uVar2 & 4;
                    if (uStack_45c != 0) {
                        fcn.00009611(iVar5);
                    }
                    uStack_458 = uVar2 & 8;
                    if (uStack_458 != 0) {
                        fcn.00009611(iVar5);
                    }
                    uStack_454 = uVar2 & 0x10;
                    if (uStack_454 != 0) {
                        fcn.000085c7(iVar5);
                    }
                    if (uVar6 != 0) {
                        fcn.0000302b();
                        section..text(auStack_3d6,0xb240,0x14);
                        uStack_3d8 = 4;
                    }
                    uVar6 = uVar6 != 0;
                    if ((uVar2 & 2) != 0) {
                        fcn.00005a02();
                        if (auStack_3d6 + uVar6 * 0x42 != 0xb254) {
                            section..text(auStack_3d6 + uVar6 * 0x42,0xb254,0x20);
                        }
                        *(auStack_3d6 + uVar6 * 0x42 + -2) = 0xb;
                        uVar6 = uVar6 + 1;
                    }
                    if (uStack_45c != 0) {
                        fcn.00005c14();
                        if (auStack_3d6 + uVar6 * 0x42 != 0xb294) {
                            section..text(auStack_3d6 + uVar6 * 0x42,0xb294,0x30);
                        }
                        *(auStack_3d6 + uVar6 * 0x42 + -2) = 0xc;
                        uVar6 = uVar6 + 1;
                    }
                    if (uStack_458 != 0) {
                        fcn.000096b1();
                        if (auStack_3d6 + uVar6 * 0x42 != 0xb2c4) {
                            section..text(auStack_3d6 + uVar6 * 0x42,0xb2c4,0x40);
                        }
                        *(auStack_3d6 + uVar6 * 0x42 + -2) = 0xd;
                        uVar6 = uVar6 + 1;
                    }
                    if (uStack_454 != 0) {
                        fcn.00008685();
                        if (auStack_3d6 + uVar6 * 0x42 != 0xb274) {
                            section..text(auStack_3d6 + uVar6 * 0x42,0xb274,0x20);
                        }
                        *(auStack_3d6 + uVar6 * 0x42 + -2) = 0x12;
                        uVar6 = uVar6 + 1;
                    }
                    param_2 = piStack_464;
                    uStack_3dc = uVar6;
                }
                iVar4 = (**param_4)(piStack_448,param_3,0,0,0,0,&uStack_3e4,puStack_470);
                iVar5 = iStack_460;
            }
            param_2 = param_2 + 6;
            iVar5 = iVar5 + -1;
            iStack_460 = iVar5;
        } while (iVar5 != 0);
    }
    return iVar4;
}


/* fcn.000010db @ 0x10db */

uint32_t __fastcall fcn.000010db(int *param_1,int param_2,int param_3)

{
    char cVar1;
    uchar uVar2;
    int iVar3;
    uint32_t uVar4;
    int iStack_50;
    uint uStack_4c;
    uint uStack_48;
    uint uStack_44;
    int iStack_40;
    uchar auStack_3c [4];
    uchar auStack_38 [4];
    uchar auStack_34 [6];
    int iStack_2e;
    ushort uStack_28;
    uint uStack_26;
    uint uStack_22;
    ushort uStack_1e;
    uchar auStack_1c [18];
    char cStack_a;
    uchar uStack_6;
    
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    if ((param_3 == 0x11) && (iVar3 = (**(*param_1 + 0x20))(param_1,0xa9d0,0,0,auStack_3c), -1 < iVar3)) {
        uVar4 = fcn.00001034();
        return uVar4;
    }
    iVar3 = (**(*param_1 + 0x20))(param_1,0xaa50,0,0,auStack_38);
    uVar4 = (**(*param_1 + 0x20))(param_1,0xa980,0,0,&iStack_40);
    if (uVar4 < 0) {
        return uVar4;
    }
    if (iStack_40 != 0) {
        uVar4 = (**(iStack_40 + 4))(param_1,auStack_1c);
        if (-1 < uVar4) {
            if (param_2 == 0) {
                return 0x80000002;
            }
            uStack_28 = 0x180;
            uStack_26 = 0xc000000;
            uStack_22 = 0x44010000;
            if (param_3 == 0x11) {
                uStack_1e = 0x100;
            }
            else {
                uStack_1e = 0;
            }
            fcn.00000108(auStack_34,10,0);
            if (iVar3 < 0) {
                uVar4 = (**(param_2 + 0xc))(param_2,0xc,&uStack_28,10,auStack_34);
                if (uVar4 < 0) {
                    return uVar4;
                }
                if ((iStack_2e == 0) || (iVar3 = fcn.00001c9e(), iVar3 == 0x100)) {
                    fcn.0000a54e();
                }
                else {
                    fcn.0000a54e();
                    iVar3 = fcn.00001c9e();
                    if ((iVar3 == 0x84) || (iVar3 == 0x907)) {
                        (**(*param_1 + 0x5c))(param_1);
                    }
                    uVar4 = 0x80000007;
                }
            }
            if ((param_3 == 0x11) && (cStack_a == '\x01')) {
                if (iStack_2e != 0) {
                    uStack_1e = 0;
                    uVar4 = (**(param_2 + 0xc))(param_2,0xc,&uStack_28,10,auStack_34);
                    if (uVar4 < 0) {
                        return uVar4;
                    }
                    if (iStack_2e != 0) {
                        fcn.0000a54e();
                        return 0x80000007;
                    }
                    uVar4 = fcn.00001034();
                }
            }
            else {
                if (-1 < uVar4) {
                    uVar4 = fcn.00000c68(&uStack_48,&uStack_44);
                    uVar4 = -(uVar4 != 0x80000006) & uVar4;
                    if (-1 < uVar4) {
                        fcn.0000a54e();
                    }
                }
                iVar3 = (**(*param_1 + 0x34))(param_1,4,0x27,&iStack_50);
                if (-1 < iVar3) {
                    *(iStack_50 + 8) = *0xaa30;
                    *(iStack_50 + 0xc) = *0xaa34;
                    *(iStack_50 + 0x10) = *0xaa38;
                    *(iStack_50 + 0x14) = *0xaa3c;
                }
                if ((uVar4 == 0x80000007) || (uVar4 < 0)) {
                    *(iStack_50 + 0x18) = 0;
                    *(iStack_50 + 0x19) = uStack_6;
                }
                else {
                    *(iStack_50 + 0x18) = 1;
                    cVar1 = fcn.000097cf();
                    *(iStack_50 + 0x19) = '\x01' - (cVar1 != '\0');
                    *(iStack_50 + 0x1b) = uStack_4c;
                    *(iStack_50 + 0x23) = uStack_48;
                    *(iStack_50 + 0x1f) = uStack_44;
                }
                uVar2 = fcn.0000137b();
                *(iStack_50 + 0x1a) = uVar2;
            }
        }
        return uVar4;
    }
    return uVar4;
}


/* fcn.000013f4 @ 0x13f4 */

int __fastcall fcn.000013f4(int *param_1)

{
    int iVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    uint extraout_ECX;
    uint32_t uVar5;
    bool bVar6;
    int *piStack_40;
    int iStack_3c;
    int iStack_38;
    uint32_t uStack_34;
    uint uStack_30;
    uint uStack_2c;
    uint uStack_28;
    uint uStack_24;
    uchar auStack_20 [5];
    char cStack_1b;
    uint32_t uStack_9;
    
    uStack_30 = *0xab40;
    uStack_2c = *0xab44;
    uStack_28 = *0xab48;
    uStack_24 = *0xab4c;
    iStack_3c = 0;
    if ((param_1 == NULL) || (*param_1 == 0)) {
        iVar3 = -0x7ffffffe;
    }
    else {
        iVar3 = (**(*param_1 + 0x20))(param_1,0xa9f0,0,0,&iStack_3c);
        if ((((iStack_3c != 0) && (-1 < iVar3)) &&
            (iVar3 = (**(*param_1 + 0x20))(param_1,0xa980,0,0,&iStack_38), iStack_38 != 0)) && (-1 < iVar3)) {
            iVar3 = (**(iStack_38 + 4))(param_1,auStack_20);
            if (iVar3 < 0) {
                return iVar3;
            }
            uStack_34 = uStack_9;
            iVar3 = (**(*param_1 + 0x4c))(param_1,0x43,&piStack_40);
            piVar2 = piStack_40;
            if (iVar3 < 0) {
                return iVar3;
            }
            fcn.00001b3d(extraout_ECX);
            *(piStack_40 + 10) = 0;
            *(piStack_40 + 0xe) = 3;
            piStack_40[1] = 0xe;
            *(piStack_40 + 2) = 1;
            iVar3 = 0;
            if (uStack_30 != '\0') {
                do {
                    iVar4 = iVar3 + 1;
                    iVar1 = iVar3 + 1;
                    iVar3 = iVar4;
                } while (*(&uStack_30 + iVar1) != '\0');
                if (iVar4 != 0) {
                    fcn.00001b27(iVar4);
                }
            }
            *(piVar2 + 0x22) = 0;
            *(piVar2 + 0x26) = 0x2690200;
            if (cStack_1b == '\x02') {
                bVar6 = (uStack_34 & 1) != 0;
                if (bVar6) {
                    *(piVar2 + 0x2e) = 4;
                    *(piVar2 + 0xc) = 0x14;
                }
                uVar5 = bVar6;
                if ((uStack_34 & 2) != 0) {
                    *(piVar2 + uVar5 * 4 + 0x2e) = 0xb;
                    *(piVar2 + uVar5 + 0xc) = 0x20;
                    uVar5 = uVar5 + 1;
                }
                if ((uStack_34 & 4) != 0) {
                    *(piVar2 + uVar5 * 4 + 0x2e) = 0xc;
                    *(piVar2 + uVar5 + 0xc) = 0x30;
                    uVar5 = uVar5 + 1;
                }
                if ((uStack_34 & 8) != 0) {
                    *(piVar2 + uVar5 * 4 + 0x2e) = 0xd;
                    *(piVar2 + uVar5 + 0xc) = 0x40;
                    uVar5 = uVar5 + 1;
                }
                if ((uStack_34 & 0x10) != 0) {
                    *(piVar2 + uVar5 * 4 + 0x2e) = 0x12;
                    *(piVar2 + uVar5 + 0xc) = 0x20;
                    uVar5 = uVar5 + 1;
                }
                *(piVar2 + 0x2a) = uVar5;
            }
            else {
                *(piVar2 + 0x2e) = 4;
                *(piVar2 + 0xc) = 0x14;
                *(piVar2 + 0x2a) = 1;
            }
            *piStack_40 = *(piVar2 + 0x2a) * 4 + 0x2f;
            *(piVar2 + *(piVar2 + 0x2a) * 4 + 0x2e) = 0;
            iVar3 = (**(iStack_3c + 8))(iStack_3c,0,0,piVar2 + 0x43,0,0,0,piStack_40);
            return iVar3;
        }
        iVar3 = -0x7ffffff2;
    }
    return iVar3;
}


/* fcn.00000bc3 @ 0xbc3 */

int __cdecl fcn.00000bc3(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = (**(*arg_8h + 0x4c))(arg_8h,0x22,&arg_8h);
    if (-1 < iVar1) {
        *arg_8h = 0x22;
        *(arg_8h + 0xe) = 8;
        *(arg_8h + 4) = 0xe;
        *(arg_8h + 8) = 1;
        *(arg_8h + 10) = 0;
        iVar1 = arg_8h + 0x12;
        fcn.00001b27(0x10);
        iVar1 = (**(arg_ch + 8))(arg_ch,0,0,iVar1,0,0x10,0,arg_8h);
        fcn.0000a54e();
    }
    return iVar1;
}


/* fcn.00001ccd @ 0x1ccd */

void fcn.00001ccd(void)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),0xaa8c);
    return;
}


/* fcn.00001752 @ 0x1752 */

int __fastcall fcn.00001752(int *param_1)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t *puVar4;
    uint32_t uVar5;
    uint32_t *puStack_128;
    uint uStack_124;
    uint uStack_120;
    uint uStack_11c;
    int iStack_118;
    int *piStack_114;
    uchar auStack_110 [5];
    uint8_t uStack_10b;
    uint32_t uStack_f9;
    uint32_t auStack_e8 [58];
    
    uVar3 = 0;
    uStack_120 = 0;
    uStack_124 = 0;
    piStack_114 = param_1;
    iVar1 = (**(*param_1 + 0x20))(param_1,0xa9f0,0,0,&uStack_120);
    if ((-1 < iVar1) && (iVar1 = (**(*param_1 + 0x20))(param_1,0xaa20,0,0,&uStack_124), -1 < iVar1)) {
        iVar1 = fcn.0000a4d3();
        if (iVar1 == 0) {
            auStack_e8[0] = 0xff252000;
            auStack_e8[1] = 0;
            uVar3 = 1;
            auStack_e8[2] = 0x6de000;
        }
        else {
            uStack_11c = *(iVar1 + 0x1c);
            puVar4 = auStack_e8 + 2;
            do {
                uVar5 = *(iVar1 + 0x24);
                if (((uVar5 & 0x200) != 0) &&
                   (((uVar5 & 0x8000) != 0 || (((uVar5 & 0x83e) != 0 && ((uVar5 & 0x402) != 0x402)))))) {
                    uVar3 = uVar3 + 1;
                    puVar4[-2] = *(iVar1 + 0x10);
                    puVar4[-1] = *(iVar1 + 0x14);
                    *puVar4 = *(iVar1 + 0x1c);
                    puVar4 = puVar4 + 6;
                }
                fcn.000015d5(iVar1);
            } while (iVar1 != 0);
        }
        iVar1 = (**(*param_1 + 0x34))(param_1,4,(uVar3 + 1) * 0x18,&puStack_128);
        if (iVar1 < 0) {
            return iVar1;
        }
        puStack_128[2] = *0xaa00;
        puStack_128[3] = *0xaa04;
        puStack_128[4] = *0xaa08;
        puStack_128[5] = *0xaa0c;
        uVar5 = 0;
        iVar1 = (**(*param_1 + 0x20))(param_1,0xa980,0,0,&iStack_118);
        if ((iStack_118 != 0) && (-1 < iVar1)) {
            iVar1 = (**(iStack_118 + 4))(param_1,auStack_110);
            if (iVar1 < 0) {
                return iVar1;
            }
            if (uVar3 != 0) {
                do {
                    puVar4 = puStack_128 + 6;
                    if (uVar5 == 0) {
                        puStack_128[0xb] = auStack_e8[2];
                        puStack_128[9] = auStack_e8[0];
                        puStack_128[10] = auStack_e8[1];
                        *puVar4 = uVar3;
                        puStack_128[7] = uStack_10b;
                        uVar2 = uStack_f9;
                    }
                    else {
                        puStack_128[0xb] = auStack_e8[uVar5 * 6 + 2];
                        puStack_128[9] = auStack_e8[uVar5 * 6];
                        puStack_128[10] = auStack_e8[uVar5 * 6 + 1];
                        uVar2 = 0;
                        *puVar4 = 0;
                        puStack_128[7] = 0;
                    }
                    puStack_128[8] = uVar2;
                    uVar5 = uVar5 + 1;
                    puStack_128 = puVar4;
                } while (uVar5 < uVar3);
                param_1 = piStack_114;
            }
            fcn.000007c9(uStack_120,uStack_124);
            iVar1 = (**(*param_1 + 0x24))(param_1,0xaa80);
            return iVar1;
        }
    }
    return -0x7ffffff2;
}


/* fcn.00001b73 @ 0x1b73 */

uint32_t __fastcall fcn.00001b73(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00001a86 @ 0x1a86 */

int16_t * __fastcall fcn.00001a86(uint param_1,int16_t *param_2)

{
    while( true ) {
        if (*param_2 == -1) {
            return NULL;
        }
        if (*param_2 == 4) break;
        param_2 = param_2 + param_2[1];
    }
    return param_2;
}


/* fcn.00001ad3 @ 0x1ad3 */

int32_t __fastcall fcn.00001ad3(uint param_1,uint param_2)

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


/* fcn.00001b51 @ 0x1b51 */

uint * __fastcall fcn.00001b51(uint *param_1)

{
    *param_1 = *0xa9b0;
    param_1[1] = *0xa9b4;
    param_1[2] = *0xa9b8;
    param_1[3] = *0xa9bc;
    return param_1;
}


/* fcn.00001d23 @ 0x1d23 */

void __fastcall fcn.00001d23(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    uint32_t uVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    uint32_t uVar27;
    uint32_t uStack_40;
    uint32_t uStack_3c;
    uint32_t uStack_38;
    uint32_t uStack_34;
    uint32_t uStack_30;
    uint32_t uStack_2c;
    uint32_t uStack_28;
    uint32_t uStack_24;
    uint32_t uStack_20;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
    uint32_t uStack_8;
    uint32_t uStack_4;
    
    if (&uStack_40 != param_2) {
        section..text(&uStack_40,param_2,0x40);
    }
    uVar14 = param_1[3];
    uVar21 = *param_1;
    uVar13 = param_1[1];
    uVar6 = uStack_40 >> 8 & 0xff00ff00 | uStack_40 << 0x18 | (uStack_40 & 0xff00) << 8 | uStack_40 >> 0x18;
    uVar1 = uVar13 >> 2 | uVar13 << 0x1e;
    uVar7 = uVar6 + 0x5a827999 + ((uVar14 ^ param_1[2]) & uVar13 ^ uVar14) + (uVar21 << 5 | uVar21 >> 0x1b) + param_1[4]
    ;
    uVar13 = uStack_3c >> 8 & 0xff00ff00 | uStack_3c << 0x18 | (uStack_3c & 0xff00) << 8 | uStack_3c >> 0x18;
    uVar3 = uVar21 >> 2 | uVar21 << 0x1e;
    uVar14 = uVar13 + (uVar7 * 0x20 | uVar7 >> 0x1b) + ((param_1[2] ^ uVar1) & uVar21 ^ param_1[2]) +
             uVar14 + 0x5a827999;
    uVar21 = uStack_38 >> 8 & 0xff00ff00 | uStack_38 << 0x18 | (uStack_38 & 0xff00) << 8 | uStack_38 >> 0x18;
    uVar8 = uVar7 >> 2 | uVar7 * 0x40000000;
    uVar22 = param_1[2] + 0x5a827999 + ((uVar1 ^ uVar3) & uVar7 ^ uVar1) + (uVar14 * 0x20 | uVar14 >> 0x1b) + uVar21;
    uVar7 = uStack_34 >> 8 & 0xff00ff00 | uStack_34 << 0x18 | (uStack_34 & 0xff00) << 8 | uStack_34 >> 0x18;
    uVar15 = uVar14 >> 2 | uVar14 * 0x40000000;
    uVar14 = uVar1 + 0x5a827999 + ((uVar8 ^ uVar3) & uVar14 ^ uVar3) + (uVar22 * 0x20 | uVar22 >> 0x1b) + uVar7;
    uVar1 = uStack_30 >> 8 & 0xff00ff00 | uStack_30 << 0x18 | (uStack_30 & 0xff00) << 8 | uStack_30 >> 0x18;
    uVar23 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar4 = uVar3 + 0x5a827999 + ((uVar8 ^ uVar15) & uVar22 ^ uVar8) + (uVar14 * 0x20 | uVar14 >> 0x1b) + uVar1;
    uVar3 = uStack_2c >> 8 & 0xff00ff00 | uStack_2c << 0x18 | (uStack_2c & 0xff00) << 8 | uStack_2c >> 0x18;
    uVar2 = uVar14 >> 2 | uVar14 * 0x40000000;
    uVar8 = uVar8 + ((uVar15 ^ uVar23) & uVar14 ^ uVar15) + (uVar4 * 0x20 | uVar4 >> 0x1b) + 0x5a827999 + uVar3;
    uVar22 = uStack_28 >> 8 & 0xff00ff00 | uStack_28 << 0x18 | (uStack_28 & 0xff00) << 8 | uStack_28 >> 0x18;
    uVar5 = uVar4 >> 2 | uVar4 * 0x40000000;
    uVar15 = uVar15 + ((uVar23 ^ uVar2) & uVar4 ^ uVar23) + (uVar8 * 0x20 | uVar8 >> 0x1b) + 0x5a827999 + uVar22;
    uVar4 = uStack_24 >> 8 & 0xff00ff00 | uStack_24 << 0x18 | (uStack_24 & 0xff00) << 8 | uStack_24 >> 0x18;
    uVar23 = uVar23 + ((uVar2 ^ uVar5) & uVar8 ^ uVar2) + (uVar15 * 0x20 | uVar15 >> 0x1b) + 0x5a827999 + uVar4;
    uVar9 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar8 = uStack_20 >> 8 & 0xff00ff00 | uStack_20 << 0x18 | (uStack_20 & 0xff00) << 8 | uStack_20 >> 0x18;
    uVar16 = uVar15 >> 2 | uVar15 * 0x40000000;
    uVar2 = uVar2 + ((uVar9 ^ uVar5) & uVar15 ^ uVar5) + (uVar23 * 0x20 | uVar23 >> 0x1b) + 0x5a827999 + uVar8;
    uVar15 = uStack_1c >> 8 & 0xff00ff00 | uStack_1c << 0x18 | (uStack_1c & 0xff00) << 8 | uStack_1c >> 0x18;
    uVar24 = uVar23 >> 2 | uVar23 * 0x40000000;
    uVar5 = uVar5 + ((uVar9 ^ uVar16) & uVar23 ^ uVar9) + (uVar2 * 0x20 | uVar2 >> 0x1b) + 0x5a827999 + uVar15;
    uVar23 = uStack_18 >> 8 & 0xff00ff00 | uStack_18 << 0x18 | (uStack_18 & 0xff00) << 8 | uStack_18 >> 0x18;
    uVar14 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar9 = uVar9 + ((uVar16 ^ uVar24) & uVar2 ^ uVar16) + (uVar5 * 0x20 | uVar5 >> 0x1b) + 0x5a827999 + uVar23;
    uVar2 = uStack_14 >> 8 & 0xff00ff00 | uStack_14 << 0x18 | (uStack_14 & 0xff00) << 8 | uStack_14 >> 0x18;
    uVar25 = (uVar24 ^ (uVar24 ^ uVar14) & uVar5) + (uVar9 * 0x20 | uVar9 >> 0x1b) + uVar2 + uVar16 + 0x5a827999;
    uVar16 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar17 = uStack_10 >> 8 & 0xff00ff00 | uStack_10 << 0x18 | (uStack_10 & 0xff00) << 8 | uStack_10 >> 0x18;
    uVar10 = uVar9 >> 2 | uVar9 * 0x40000000;
    uVar9 = ((uVar16 ^ uVar14) & uVar9 ^ uVar14) + (uVar25 * 0x20 | uVar25 >> 0x1b) + uVar17 + uVar24 + 0x5a827999;
    uVar26 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar5 = uStack_c >> 8 & 0xff00ff00 | uStack_c << 0x18 | (uStack_c & 0xff00) << 8 | uStack_c >> 0x18;
    uVar14 = ((uVar10 ^ uVar16) & uVar25 ^ uVar16) + (uVar9 * 0x20 | uVar9 >> 0x1b) + uVar5 + uVar14 + 0x5a827999;
    uVar24 = uStack_8 >> 8 & 0xff00ff00 | uStack_8 << 0x18 | (uStack_8 & 0xff00) << 8 | uStack_8 >> 0x18;
    uVar16 = (uVar10 ^ (uVar10 ^ uVar26) & uVar9) + (uVar14 * 0x20 | uVar14 >> 0x1b) + uVar24 + uVar16 + 0x5a827999;
    uVar25 = uVar9 >> 2 | uVar9 * 0x40000000;
    uVar18 = uStack_4 >> 8 & 0xff00ff00 | uStack_4 << 0x18 | (uStack_4 & 0xff00) << 8 | uStack_4 >> 0x18;
    uVar11 = uVar14 >> 2 | uVar14 * 0x40000000;
    uVar9 = uVar18 + (uVar16 * 0x20 | uVar16 >> 0x1b) + ((uVar26 ^ uVar25) & uVar14 ^ uVar26) + uVar10 + 0x5a827999;
    uVar14 = uVar6 ^ uVar5 ^ uVar8 ^ uVar21;
    uVar14 = uVar14 << 1 | uVar14 < 0;
    uVar10 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar26 = uVar26 + ((uVar25 ^ uVar11) & uVar16 ^ uVar25) + (uVar9 * 0x20 | uVar9 >> 0x1b) + 0x5a827999 + uVar14;
    uVar13 = uVar24 ^ uVar15 ^ uVar7 ^ uVar13;
    uVar16 = uVar13 << 1 | uVar13 < 0;
    uVar19 = uVar9 >> 2 | uVar9 * 0x40000000;
    uVar25 = uVar25 + ((uVar11 ^ uVar10) & uVar9 ^ uVar11) + (uVar26 * 0x20 | uVar26 >> 0x1b) + 0x5a827999 + uVar16;
    uVar21 = uVar18 ^ uVar23 ^ uVar1 ^ uVar21;
    uVar9 = uVar21 << 1 | uVar21 < 0;
    uVar27 = uVar26 >> 2 | uVar26 * 0x40000000;
    uVar11 = uVar11 + ((uVar19 ^ uVar10) & uVar26 ^ uVar10) + (uVar25 * 0x20 | uVar25 >> 0x1b) + 0x5a827999 + uVar9;
    uVar7 = uVar14 ^ uVar2 ^ uVar3 ^ uVar7;
    uVar6 = uVar7 << 1 | uVar7 < 0;
    uVar26 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar10 = uVar10 + ((uVar19 ^ uVar27) & uVar25 ^ uVar19) + (uVar11 * 0x20 | uVar11 >> 0x1b) + 0x5a827999 + uVar6;
    uVar21 = uVar17 ^ uVar22 ^ uVar1 ^ uVar16;
    uVar21 = uVar21 << 1 | uVar21 < 0;
    uVar12 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar19 = uVar19 + (uVar27 ^ uVar26 ^ uVar11) + (uVar10 * 0x20 | uVar10 >> 0x1b) + 0x6ed9eba1 + uVar21;
    uVar13 = uVar5 ^ uVar4 ^ uVar3 ^ uVar9;
    uVar13 = uVar13 << 1 | uVar13 < 0;
    uVar25 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar27 = uVar27 + (uVar26 ^ uVar12 ^ uVar10) + (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x6ed9eba1 + uVar13;
    uVar7 = uVar24 ^ uVar8 ^ uVar22 ^ uVar6;
    uVar7 = uVar7 << 1 | uVar7 < 0;
    uVar20 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar26 = uVar26 + (uVar19 ^ uVar12 ^ uVar25) + (uVar27 * 0x20 | uVar27 >> 0x1b) + 0x6ed9eba1 + uVar7;
    uVar1 = uVar18 ^ uVar15 ^ uVar4 ^ uVar21;
    uVar1 = uVar1 << 1 | uVar1 < 0;
    uVar19 = uVar27 >> 2 | uVar27 * 0x40000000;
    uVar12 = uVar12 + (uVar20 ^ uVar27 ^ uVar25) + (uVar26 * 0x20 | uVar26 >> 0x1b) + 0x6ed9eba1 + uVar1;
    uVar3 = uVar14 ^ uVar23 ^ uVar8 ^ uVar13;
    uVar3 = uVar3 << 1 | uVar3 < 0;
    uVar11 = uVar26 >> 2 | uVar26 * 0x40000000;
    uVar25 = uVar25 + (uVar20 ^ uVar19 ^ uVar26) + (uVar12 * 0x20 | uVar12 >> 0x1b) + 0x6ed9eba1 + uVar3;
    uVar22 = uVar2 ^ uVar15 ^ uVar7 ^ uVar16;
    uVar22 = uVar22 << 1 | uVar22 < 0;
    uVar26 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar20 = uVar20 + (uVar19 ^ uVar11 ^ uVar12) + (uVar25 * 0x20 | uVar25 >> 0x1b) + 0x6ed9eba1 + uVar22;
    uVar4 = uVar17 ^ uVar23 ^ uVar1 ^ uVar9;
    uVar4 = uVar4 << 1 | uVar4 < 0;
    uVar10 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar19 = uVar19 + (uVar11 ^ uVar26 ^ uVar25) + (uVar20 * 0x20 | uVar20 >> 0x1b) + 0x6ed9eba1 + uVar4;
    uVar8 = uVar5 ^ uVar2 ^ uVar3 ^ uVar6;
    uVar8 = uVar8 << 1 | uVar8 < 0;
    uVar12 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar11 = uVar11 + (uVar20 ^ uVar26 ^ uVar10) + (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x6ed9eba1 + uVar8;
    uVar15 = uVar24 ^ uVar17 ^ uVar22 ^ uVar21;
    uVar15 = uVar15 << 1 | uVar15 < 0;
    uVar20 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar26 = uVar26 + (uVar12 ^ uVar19 ^ uVar10) + (uVar11 * 0x20 | uVar11 >> 0x1b) + 0x6ed9eba1 + uVar15;
    uVar23 = uVar18 ^ uVar5 ^ uVar4 ^ uVar13;
    uVar23 = uVar23 << 1 | uVar23 < 0;
    uVar25 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar10 = uVar10 + (uVar12 ^ uVar20 ^ uVar11) + (uVar26 * 0x20 | uVar26 >> 0x1b) + 0x6ed9eba1 + uVar23;
    uVar2 = uVar14 ^ uVar24 ^ uVar8 ^ uVar7;
    uVar2 = uVar2 << 1 | uVar2 < 0;
    uVar11 = uVar26 >> 2 | uVar26 * 0x40000000;
    uVar12 = uVar12 + (uVar20 ^ uVar25 ^ uVar26) + (uVar10 * 0x20 | uVar10 >> 0x1b) + 0x6ed9eba1 + uVar2;
    uVar5 = uVar18 ^ uVar15 ^ uVar1 ^ uVar16;
    uVar5 = uVar5 << 1 | uVar5 < 0;
    uVar24 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar20 = uVar20 + (uVar25 ^ uVar11 ^ uVar10) + (uVar12 * 0x20 | uVar12 >> 0x1b) + 0x6ed9eba1 + uVar5;
    uVar14 = uVar14 ^ uVar23 ^ uVar3 ^ uVar9;
    uVar14 = uVar14 << 1 | uVar14 < 0;
    uVar17 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar25 = uVar25 + (uVar12 ^ uVar11 ^ uVar24) + (uVar20 * 0x20 | uVar20 >> 0x1b) + 0x6ed9eba1 + uVar14;
    uVar16 = uVar2 ^ uVar22 ^ uVar6 ^ uVar16;
    uVar16 = uVar16 << 1 | uVar16 < 0;
    uVar18 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar11 = uVar11 + (uVar17 ^ uVar20 ^ uVar24) + (uVar25 * 0x20 | uVar25 >> 0x1b) + 0x6ed9eba1 + uVar16;
    uVar9 = uVar5 ^ uVar4 ^ uVar21 ^ uVar9;
    uVar9 = uVar9 << 1 | uVar9 < 0;
    uVar26 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar24 = uVar24 + (uVar17 ^ uVar18 ^ uVar25) + (uVar11 * 0x20 | uVar11 >> 0x1b) + 0x6ed9eba1 + uVar9;
    uVar6 = uVar14 ^ uVar8 ^ uVar13 ^ uVar6;
    uVar6 = uVar6 << 1 | uVar6 < 0;
    uVar12 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar17 = uVar17 + (uVar18 ^ uVar26 ^ uVar11) + (uVar24 * 0x20 | uVar24 >> 0x1b) + 0x6ed9eba1 + uVar6;
    uVar21 = uVar15 ^ uVar7 ^ uVar21 ^ uVar16;
    uVar21 = uVar21 << 1 | uVar21 < 0;
    uVar10 = uVar24 >> 2 | uVar24 * 0x40000000;
    uVar18 = uVar18 + (uVar26 ^ uVar12 ^ uVar24) + (uVar17 * 0x20 | uVar17 >> 0x1b) + 0x6ed9eba1 + uVar21;
    uVar13 = uVar23 ^ uVar1 ^ uVar13 ^ uVar9;
    uVar13 = uVar13 << 1 | uVar13 < 0;
    uVar24 = uVar17 >> 2 | uVar17 * 0x40000000;
    uVar26 = uVar26 + (uVar17 ^ uVar12 ^ uVar10) + (uVar18 * 0x20 | uVar18 >> 0x1b) + 0x6ed9eba1 + uVar13;
    uVar7 = uVar2 ^ uVar3 ^ uVar7 ^ uVar6;
    uVar7 = uVar7 << 1 | uVar7 < 0;
    uVar11 = uVar18 >> 2 | uVar18 * 0x40000000;
    uVar12 = uVar12 + (uVar24 ^ uVar18 ^ uVar10) + (uVar26 * 0x20 | uVar26 >> 0x1b) + 0x6ed9eba1 + uVar7;
    uVar1 = uVar5 ^ uVar22 ^ uVar1 ^ uVar21;
    uVar1 = uVar1 << 1 | uVar1 < 0;
    uVar25 = uVar26 >> 2 | uVar26 * 0x40000000;
    uVar10 = uVar10 + (uVar24 ^ uVar11 ^ uVar26) + (uVar12 * 0x20 | uVar12 >> 0x1b) + 0x6ed9eba1 + uVar1;
    uVar3 = uVar14 ^ uVar4 ^ uVar3 ^ uVar13;
    uVar3 = uVar3 << 1 | uVar3 < 0;
    uVar24 = (uVar10 * 0x20 | uVar10 >> 0x1b) +
             ((uVar25 | uVar12) & uVar11 | uVar25 & uVar12) + uVar3 + uVar24 + 0x8f1bbcdc;
    uVar26 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar22 = uVar8 ^ uVar22 ^ uVar7 ^ uVar16;
    uVar22 = uVar22 << 1 | uVar22 < 0;
    uVar12 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar4 = uVar15 ^ uVar4 ^ uVar1 ^ uVar9;
    uVar10 = (uVar24 * 0x20 | uVar24 >> 0x1b) +
             ((uVar26 | uVar10) & uVar25 | uVar26 & uVar10) + uVar22 + uVar11 + 0x8f1bbcdc;
    uVar4 = uVar4 << 1 | uVar4 < 0;
    uVar17 = uVar24 >> 2 | uVar24 * 0x40000000;
    uVar24 = (uVar10 * 0x20 | uVar10 >> 0x1b) +
             ((uVar24 | uVar12) & uVar26 | uVar24 & uVar12) + uVar4 + uVar25 + 0x8f1bbcdc;
    uVar8 = uVar23 ^ uVar8 ^ uVar3 ^ uVar6;
    uVar8 = uVar8 << 1 | uVar8 < 0;
    uVar25 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar15 = uVar2 ^ uVar15 ^ uVar22 ^ uVar21;
    uVar10 = (uVar24 * 0x20 | uVar24 >> 0x1b) +
             ((uVar17 | uVar10) & uVar12 | uVar17 & uVar10) + 0x8f1bbcdc + uVar8 + uVar26;
    uVar15 = uVar15 << 1 | uVar15 < 0;
    uVar11 = uVar24 >> 2 | uVar24 * 0x40000000;
    uVar24 = (uVar10 * 0x20 | uVar10 >> 0x1b) +
             ((uVar25 | uVar24) & uVar17 | uVar25 & uVar24) + uVar15 + uVar12 + 0x8f1bbcdc;
    uVar23 = uVar5 ^ uVar23 ^ uVar4 ^ uVar13;
    uVar23 = uVar23 << 1 | uVar23 < 0;
    uVar12 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar10 = (uVar24 * 0x20 | uVar24 >> 0x1b) +
             ((uVar11 | uVar10) & uVar25 | uVar11 & uVar10) + uVar23 + uVar17 + 0x8f1bbcdc;
    uVar2 = uVar14 ^ uVar2 ^ uVar8 ^ uVar7;
    uVar2 = uVar2 << 1 | uVar2 < 0;
    uVar18 = uVar24 >> 2 | uVar24 * 0x40000000;
    uVar24 = (uVar10 * 0x20 | uVar10 >> 0x1b) +
             ((uVar12 | uVar24) & uVar11 | uVar12 & uVar24) + uVar2 + uVar25 + 0x8f1bbcdc;
    uVar5 = uVar5 ^ uVar15 ^ uVar1 ^ uVar16;
    uVar5 = uVar5 << 1 | uVar5 < 0;
    uVar26 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar10 = (uVar24 * 0x20 | uVar24 >> 0x1b) +
             ((uVar10 | uVar18) & uVar12 | uVar10 & uVar18) + uVar5 + uVar11 + 0x8f1bbcdc;
    uVar14 = uVar14 ^ uVar23 ^ uVar3 ^ uVar9;
    uVar14 = uVar14 << 1 | uVar14 < 0;
    uVar25 = (uVar10 * 0x20 | uVar10 >> 0x1b) +
             ((uVar26 | uVar24) & uVar18 | uVar26 & uVar24) + uVar14 + uVar12 + 0x8f1bbcdc;
    uVar12 = uVar24 >> 2 | uVar24 * 0x40000000;
    uVar16 = uVar2 ^ uVar22 ^ uVar6 ^ uVar16;
    uVar24 = uVar16 << 1 | uVar16 < 0;
    uVar17 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar16 = (uVar25 * 0x20 | uVar25 >> 0x1b) +
             ((uVar12 | uVar10) & uVar26 | uVar12 & uVar10) + uVar24 + uVar18 + 0x8f1bbcdc;
    uVar9 = uVar5 ^ uVar4 ^ uVar21 ^ uVar9;
    uVar9 = uVar9 << 1 | uVar9 < 0;
    uVar26 = (uVar16 * 0x20 | uVar16 >> 0x1b) +
             ((uVar17 | uVar25) & uVar12 | uVar17 & uVar25) + uVar9 + uVar26 + 0x8f1bbcdc;
    uVar6 = uVar14 ^ uVar8 ^ uVar13 ^ uVar6;
    uVar6 = uVar6 << 1 | uVar6 < 0;
    uVar18 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar11 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar16 = (uVar26 * 0x20 | uVar26 >> 0x1b) + 0x8f1bbcdc +
             ((uVar18 | uVar16) & uVar17 | uVar18 & uVar16) + uVar6 + uVar12;
    uVar21 = uVar15 ^ uVar7 ^ uVar21 ^ uVar24;
    uVar10 = uVar21 << 1 | uVar21 < 0;
    uVar12 = uVar26 >> 2 | uVar26 * 0x40000000;
    uVar25 = (uVar16 * 0x20 | uVar16 >> 0x1b) +
             ((uVar26 | uVar11) & uVar18 | uVar26 & uVar11) + uVar10 + uVar17 + 0x8f1bbcdc;
    uVar21 = uVar23 ^ uVar1 ^ uVar13 ^ uVar9;
    uVar21 = uVar21 << 1 | uVar21 < 0;
    uVar17 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar13 = (uVar25 * 0x20 | uVar25 >> 0x1b) + 0x8f1bbcdc +
             ((uVar12 | uVar16) & uVar11 | uVar12 & uVar16) + uVar21 + uVar18;
    uVar7 = uVar2 ^ uVar3 ^ uVar7 ^ uVar6;
    uVar16 = uVar7 << 1 | uVar7 < 0;
    uVar18 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar7 = (uVar13 * 0x20 | uVar13 >> 0x1b) + 0x8f1bbcdc +
            ((uVar17 | uVar25) & uVar12 | uVar17 & uVar25) + uVar16 + uVar11;
    uVar1 = uVar5 ^ uVar22 ^ uVar1 ^ uVar10;
    uVar25 = uVar1 << 1 | uVar1 < 0;
    uVar26 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar1 = (uVar7 * 0x20 | uVar7 >> 0x1b) + 0x8f1bbcdc +
            ((uVar18 | uVar13) & uVar17 | uVar18 & uVar13) + uVar25 + uVar12;
    uVar13 = uVar14 ^ uVar4 ^ uVar3 ^ uVar21;
    uVar13 = uVar13 << 1 | uVar13 < 0;
    uVar11 = uVar7 >> 2 | uVar7 * 0x40000000;
    uVar3 = (uVar1 * 0x20 | uVar1 >> 0x1b) + 0x8f1bbcdc + ((uVar26 | uVar7) & uVar18 | uVar26 & uVar7) + uVar13 + uVar17
    ;
    uVar7 = uVar8 ^ uVar22 ^ uVar16 ^ uVar24;
    uVar7 = uVar7 << 1 | uVar7 < 0;
    uVar12 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar22 = (uVar3 * 0x20 | uVar3 >> 0x1b) + 0x8f1bbcdc + ((uVar1 | uVar11) & uVar26 | uVar1 & uVar11) + uVar7 + uVar18
    ;
    uVar1 = uVar15 ^ uVar4 ^ uVar25 ^ uVar9;
    uVar17 = uVar1 << 1 | uVar1 < 0;
    uVar1 = uVar23 ^ uVar8 ^ uVar13 ^ uVar6;
    uVar1 = uVar1 << 1 | uVar1 < 0;
    uVar8 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar18 = (uVar22 * 0x20 | uVar22 >> 0x1b) + 0x8f1bbcdc +
             ((uVar12 | uVar3) & uVar11 | uVar12 & uVar3) + uVar17 + uVar26;
    uVar26 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar3 = uVar2 ^ uVar15 ^ uVar7 ^ uVar10;
    uVar3 = uVar3 << 1 | uVar3 < 0;
    uVar4 = (uVar18 * 0x20 | uVar18 >> 0x1b) +
            ((uVar8 | uVar22) & uVar12 | uVar8 & uVar22) + 0x8f1bbcdc + uVar1 + uVar11;
    uVar19 = uVar18 >> 2 | uVar18 * 0x40000000;
    uVar11 = (uVar4 * 0x20 | uVar4 >> 0x1b) + 0xca62c1d6 + (uVar8 ^ uVar26 ^ uVar18) + uVar3 + uVar12;
    uVar22 = uVar5 ^ uVar23 ^ uVar17 ^ uVar21;
    uVar22 = uVar22 << 1 | uVar22 < 0;
    uVar15 = uVar4 >> 2 | uVar4 * 0x40000000;
    uVar23 = (uVar11 * 0x20 | uVar11 >> 0x1b) + 0xca62c1d6 + (uVar26 ^ uVar19 ^ uVar4) + uVar22 + uVar8;
    uVar4 = uVar14 ^ uVar2 ^ uVar1 ^ uVar16;
    uVar4 = uVar4 << 1 | uVar4 < 0;
    uVar12 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar26 = (uVar23 * 0x20 | uVar23 >> 0x1b) + 0xca62c1d6 + (uVar11 ^ uVar19 ^ uVar15) + uVar4 + uVar26;
    uVar8 = uVar5 ^ uVar3 ^ uVar25 ^ uVar24;
    uVar8 = uVar8 << 1 | uVar8 < 0;
    uVar2 = uVar23 >> 2 | uVar23 * 0x40000000;
    uVar23 = (uVar26 * 0x20 | uVar26 >> 0x1b) + 0xca62c1d6 + (uVar12 ^ uVar23 ^ uVar15) + uVar8 + uVar19;
    uVar14 = uVar14 ^ uVar22 ^ uVar13 ^ uVar9;
    uStack_40 = uVar14 << 1 | uVar14 < 0;
    uVar5 = uVar26 >> 2 | uVar26 * 0x40000000;
    uVar14 = (uVar23 * 0x20 | uVar23 >> 0x1b) + 0xca62c1d6 + (uVar12 ^ uVar2 ^ uVar26) + uStack_40 + uVar15;
    uVar24 = uVar4 ^ uVar7 ^ uVar6 ^ uVar24;
    uStack_3c = uVar24 << 1 | uVar24 < 0;
    uVar26 = uVar23 >> 2 | uVar23 * 0x40000000;
    uVar24 = (uVar14 * 0x20 | uVar14 >> 0x1b) + 0xca62c1d6 + (uVar2 ^ uVar5 ^ uVar23) + uStack_3c + uVar12;
    uVar9 = uVar8 ^ uVar17 ^ uVar10 ^ uVar9;
    uStack_38 = uVar9 << 1 | uVar9 < 0;
    uVar15 = uVar14 >> 2 | uVar14 * 0x40000000;
    uVar23 = (uVar24 * 0x20 | uVar24 >> 0x1b) + 0xca62c1d6 + (uVar5 ^ uVar26 ^ uVar14) + uStack_38 + uVar2;
    uVar6 = uStack_40 ^ uVar1 ^ uVar21 ^ uVar6;
    uStack_34 = uVar6 << 1 | uVar6 < 0;
    uVar9 = uVar24 >> 2 | uVar24 * 0x40000000;
    uVar5 = (uVar23 * 0x20 | uVar23 >> 0x1b) + 0xca62c1d6 + (uVar24 ^ uVar26 ^ uVar15) + uStack_34 + uVar5;
    uVar14 = uVar3 ^ uVar16 ^ uVar10 ^ uStack_3c;
    uStack_30 = uVar14 << 1 | uVar14 < 0;
    uVar2 = uVar23 >> 2 | uVar23 * 0x40000000;
    uVar6 = (uVar5 * 0x20 | uVar5 >> 0x1b) + 0xca62c1d6 + (uVar9 ^ uVar23 ^ uVar15) + uStack_30 + uVar26;
    uVar14 = uVar22 ^ uVar25 ^ uVar21 ^ uStack_38;
    uStack_2c = uVar14 << 1 | uVar14 < 0;
    uVar23 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar21 = (uVar6 * 0x20 | uVar6 >> 0x1b) + 0xca62c1d6 + (uVar9 ^ uVar2 ^ uVar5) + uStack_2c + uVar15;
    uVar14 = uVar4 ^ uVar13 ^ uVar16 ^ uStack_34;
    uStack_28 = uVar14 << 1 | uVar14 < 0;
    uVar24 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar5 = (uVar21 * 0x20 | uVar21 >> 0x1b) + 0xca62c1d6 + (uVar2 ^ uVar23 ^ uVar6) + uStack_28 + uVar9;
    uVar14 = uVar8 ^ uVar7 ^ uVar25 ^ uStack_30;
    uStack_24 = uVar14 << 1 | uVar14 < 0;
    uVar15 = uVar21 >> 2 | uVar21 * 0x40000000;
    uVar14 = (uVar23 ^ uVar24 ^ uVar21) + uStack_24 + uVar2 + (uVar5 * 0x20 | uVar5 >> 0x1b) + 0xca62c1d6;
    uVar21 = uStack_40 ^ uVar17 ^ uVar13 ^ uStack_2c;
    uVar16 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar13 = uVar1 ^ uVar7 ^ uStack_28 ^ uStack_3c;
    uStack_20 = uVar21 << 1 | uVar21 < 0;
    uStack_1c = uVar13 << 1 | uVar13 < 0;
    uVar21 = (uVar14 * 0x20 | uVar14 >> 0x1b) + (uVar5 ^ uVar24 ^ uVar15) + uStack_20 + uVar23 + 0xca62c1d6;
    uVar2 = uVar14 >> 2 | uVar14 * 0x40000000;
    uVar7 = (uVar21 * 0x20 | uVar21 >> 0x1b) + 0xca62c1d6 + (uVar16 ^ uVar14 ^ uVar15) + uStack_1c + uVar24;
    uVar14 = uVar3 ^ uVar17 ^ uStack_24 ^ uStack_38;
    uVar23 = uVar21 >> 2 | uVar21 * 0x40000000;
    uStack_18 = uVar14 << 1 | uVar14 < 0;
    uVar13 = uVar22 ^ uVar1 ^ uStack_20 ^ uStack_34;
    uVar14 = (uVar16 ^ uVar2 ^ uVar21) + uStack_18 + uVar15 + (uVar7 * 0x20 | uVar7 >> 0x1b) + 0xca62c1d6;
    uStack_14 = uVar13 << 1 | uVar13 < 0;
    uVar21 = (uVar2 ^ uVar23 ^ uVar7) + uStack_14 + uVar16 + (uVar14 * 0x20 | uVar14 >> 0x1b) + 0xca62c1d6;
    uVar15 = uVar7 >> 2 | uVar7 * 0x40000000;
    uVar13 = uVar14 >> 2 | uVar14 * 0x40000000;
    uVar1 = uVar4 ^ uVar3 ^ uStack_1c ^ uStack_30;
    uVar7 = uVar8 ^ uVar22 ^ uStack_18 ^ uStack_2c;
    uStack_10 = uVar1 << 1 | uVar1 < 0;
    uStack_c = uVar7 << 1 | uVar7 < 0;
    uVar14 = (uVar23 ^ uVar15 ^ uVar14) + uStack_10 + uVar2 + (uVar21 * 0x20 | uVar21 >> 0x1b) + 0xca62c1d6;
    uVar3 = (uVar14 * 0x20 | uVar14 >> 0x1b) + 0xca62c1d6 + (uVar21 ^ uVar15 ^ uVar13) + uStack_c + uVar23;
    uVar7 = uStack_40 ^ uVar4 ^ uStack_14 ^ uStack_28;
    uVar21 = uVar21 >> 2 | uVar21 * 0x40000000;
    uStack_8 = uVar7 << 1 | uVar7 < 0;
    uVar1 = uVar14 >> 2 | uVar14 * 0x40000000;
    uVar7 = (uVar3 * 0x20 | uVar3 >> 0x1b) + 0xca62c1d6 + (uVar21 ^ uVar14 ^ uVar13) + uStack_8 + uVar15;
    uVar14 = uVar8 ^ uStack_10 ^ uStack_24 ^ uStack_3c;
    uStack_4 = uVar14 << 1 | uVar14 < 0;
    param_1[1] = param_1[1] + uVar7;
    param_1[3] = param_1[3] + uVar1;
    param_1[2] = param_1[2] + (uVar3 >> 2 | uVar3 * 0x40000000);
    param_1[4] = param_1[4] + uVar21;
    *param_1 = (uVar21 ^ uVar1 ^ uVar3) + *param_1 + uStack_4 + (uVar7 * 0x20 | uVar7 >> 0x1b) + 0xca62c1d6 + uVar13;
    fcn.00000108(&uStack_40,0x40,0);
    return;
}


/* fcn.000030f1 @ 0x30f1 */

uint __fastcall fcn.000030f1(int param_1,uchar *param_2)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    int iVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    uint32_t uVar24;
    int iVar25;
    uint32_t uVar26;
    uint32_t uVar27;
    uint32_t uVar28;
    uint32_t uVar29;
    
    iVar25 = CONCAT31(CONCAT21(CONCAT11(*param_2,param_2[1]),param_2[2]),param_2[3]);
    uVar3 = CONCAT31(CONCAT21(CONCAT11(param_2[4],param_2[5]),param_2[6]),param_2[7]);
    uVar4 = CONCAT31(CONCAT21(CONCAT11(param_2[8],param_2[9]),param_2[10]),param_2[0xb]);
    uVar5 = CONCAT31(CONCAT21(CONCAT11(param_2[0xc],param_2[0xd]),param_2[0xe]),param_2[0xf]);
    uVar6 = CONCAT31(CONCAT21(CONCAT11(param_2[0x10],param_2[0x11]),param_2[0x12]),param_2[0x13]);
    uVar7 = CONCAT31(CONCAT21(CONCAT11(param_2[0x14],param_2[0x15]),param_2[0x16]),param_2[0x17]);
    uVar8 = CONCAT31(CONCAT21(CONCAT11(param_2[0x18],param_2[0x19]),param_2[0x1a]),param_2[0x1b]);
    uVar9 = CONCAT31(CONCAT21(CONCAT11(param_2[0x1c],param_2[0x1d]),param_2[0x1e]),param_2[0x1f]);
    uVar10 = CONCAT31(CONCAT21(CONCAT11(param_2[0x20],param_2[0x21]),param_2[0x22]),param_2[0x23]);
    uVar11 = CONCAT31(CONCAT21(CONCAT11(param_2[0x24],param_2[0x25]),param_2[0x26]),param_2[0x27]);
    uVar12 = CONCAT31(CONCAT21(CONCAT11(param_2[0x28],param_2[0x29]),param_2[0x2a]),param_2[0x2b]);
    uVar13 = CONCAT31(CONCAT21(CONCAT11(param_2[0x2c],param_2[0x2d]),param_2[0x2e]),param_2[0x2f]);
    uVar14 = CONCAT31(CONCAT21(CONCAT11(param_2[0x30],param_2[0x31]),param_2[0x32]),param_2[0x33]);
    uVar15 = CONCAT31(CONCAT21(CONCAT11(param_2[0x34],param_2[0x35]),param_2[0x36]),param_2[0x37]);
    uVar1 = CONCAT11(param_2[0x38],param_2[0x39]);
    uVar16 = CONCAT31(CONCAT21(uVar1,param_2[0x3a]),param_2[0x3b]);
    uVar2 = CONCAT11(param_2[0x3c],param_2[0x3d]);
    uVar17 = CONCAT31(CONCAT21(uVar2,param_2[0x3e]),param_2[0x3f]);
    uVar22 = *(param_1 + 8);
    uVar20 = *(param_1 + 0xc);
    iVar18 = iVar25 + 0x428a2f98 +
             ((*(param_1 + 0x20) ^ *(param_1 + 0x1c)) & *(param_1 + 0x18) ^ *(param_1 + 0x20)) +
             ((*(param_1 + 0x18) >> 0xb | *(param_1 + 0x18) << 0x15) ^
              (*(param_1 + 0x18) << 7 | *(param_1 + 0x18) >> 0x19) ^
             (*(param_1 + 0x18) >> 6 | *(param_1 + 0x18) << 0x1a)) + *(param_1 + 0x24);
    uVar26 = *(param_1 + 0x14) + iVar18;
    uVar23 = ((uVar20 | uVar22) & *(param_1 + 0x10) | uVar20 & uVar22) +
             ((uVar22 >> 0xd | uVar22 << 0x13) ^ (uVar22 << 10 | uVar22 >> 0x16) ^ (uVar22 >> 2 | uVar22 << 0x1e)) +
             iVar18;
    iVar18 = *(param_1 + 0x20) + 0x71374491 +
             ((*(param_1 + 0x1c) ^ *(param_1 + 0x18)) & uVar26 ^ *(param_1 + 0x1c)) +
             ((uVar26 >> 0xb | uVar26 * 0x200000) ^ (uVar26 * 0x80 | uVar26 >> 0x19) ^
             (uVar26 >> 6 | uVar26 * 0x4000000)) + uVar3;
    uVar28 = *(param_1 + 0x10) + iVar18;
    uVar27 = ((uVar23 | uVar22) & uVar20 | uVar23 & uVar22) +
             ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 * 0x400 | uVar23 >> 0x16) ^
             (uVar23 >> 2 | uVar23 * 0x40000000)) + iVar18;
    iVar18 = *(param_1 + 0x1c) + -0x4a3f0431 +
             ((*(param_1 + 0x18) ^ uVar26) & uVar28 ^ *(param_1 + 0x18)) +
             ((uVar28 >> 0xb | uVar28 * 0x200000) ^ (uVar28 * 0x80 | uVar28 >> 0x19) ^
             (uVar28 >> 6 | uVar28 * 0x4000000)) + uVar4;
    uVar20 = uVar20 + iVar18;
    uVar29 = ((uVar23 | uVar27) & uVar22 | uVar23 & uVar27) +
             ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 * 0x400 | uVar27 >> 0x16) ^
             (uVar27 >> 2 | uVar27 * 0x40000000)) + iVar18;
    iVar18 = *(param_1 + 0x18) + -0x164a245b +
             ((uVar26 ^ uVar28) & uVar20 ^ uVar26) +
             ((uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 * 0x80 | uVar20 >> 0x19) ^
             (uVar20 >> 6 | uVar20 * 0x4000000)) + uVar5;
    uVar22 = uVar22 + iVar18;
    uVar21 = ((uVar27 | uVar29) & uVar23 | uVar27 & uVar29) +
             ((uVar29 >> 0xd | uVar29 * 0x80000) ^ (uVar29 * 0x400 | uVar29 >> 0x16) ^
             (uVar29 >> 2 | uVar29 * 0x40000000)) + iVar18;
    iVar18 = uVar26 + 0x3956c25b +
             ((uVar28 ^ uVar20) & uVar22 ^ uVar28) +
             ((uVar22 >> 0xb | uVar22 * 0x200000) ^ (uVar22 * 0x80 | uVar22 >> 0x19) ^
             (uVar22 >> 6 | uVar22 * 0x4000000)) + uVar6;
    uVar23 = uVar23 + iVar18;
    uVar26 = ((uVar29 | uVar21) & uVar27 | uVar29 & uVar21) +
             ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 * 0x400 | uVar21 >> 0x16) ^
             (uVar21 >> 2 | uVar21 * 0x40000000)) + iVar18;
    iVar18 = uVar28 + 0x59f111f1 +
             ((uVar20 ^ uVar22) & uVar23 ^ uVar20) +
             ((uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 * 0x80 | uVar23 >> 0x19) ^
             (uVar23 >> 6 | uVar23 * 0x4000000)) + uVar7;
    uVar27 = uVar27 + iVar18;
    uVar28 = ((uVar21 | uVar26) & uVar29 | uVar21 & uVar26) +
             ((uVar26 >> 0xd | uVar26 * 0x80000) ^ (uVar26 * 0x400 | uVar26 >> 0x16) ^
             (uVar26 >> 2 | uVar26 * 0x40000000)) + iVar18;
    iVar18 = uVar20 + 0x923f82a4 +
             ((uVar23 ^ uVar22) & uVar27 ^ uVar22) +
             ((uVar27 >> 0xb | uVar27 * 0x200000) ^ (uVar27 * 0x80 | uVar27 >> 0x19) ^
             (uVar27 >> 6 | uVar27 * 0x4000000)) + uVar8;
    uVar29 = uVar29 + iVar18;
    uVar20 = ((uVar26 | uVar28) & uVar21 | uVar26 & uVar28) +
             ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 * 0x400 | uVar28 >> 0x16) ^
             (uVar28 >> 2 | uVar28 * 0x40000000)) + iVar18;
    iVar18 = uVar22 + 0xab1c5ed5 +
             ((uVar23 ^ uVar27) & uVar29 ^ uVar23) +
             ((uVar29 >> 0xb | uVar29 * 0x200000) ^ (uVar29 * 0x80 | uVar29 >> 0x19) ^
             (uVar29 >> 6 | uVar29 * 0x4000000)) + uVar9;
    uVar21 = uVar21 + iVar18;
    uVar22 = ((uVar28 | uVar20) & uVar26 | uVar28 & uVar20) +
             ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 * 0x400 | uVar20 >> 0x16) ^
             (uVar20 >> 2 | uVar20 * 0x40000000)) + iVar18;
    iVar18 = uVar23 + 0xd807aa98 +
             ((uVar27 ^ uVar29) & uVar21 ^ uVar27) +
             ((uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 * 0x80 | uVar21 >> 0x19) ^
             (uVar21 >> 6 | uVar21 * 0x4000000)) + uVar10;
    uVar26 = uVar26 + iVar18;
    uVar23 = ((uVar20 | uVar22) & uVar28 | uVar20 & uVar22) +
             ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 * 0x400 | uVar22 >> 0x16) ^
             (uVar22 >> 2 | uVar22 * 0x40000000)) + iVar18;
    iVar18 = uVar27 + 0x12835b01 +
             ((uVar29 ^ uVar21) & uVar26 ^ uVar29) +
             ((uVar26 >> 0xb | uVar26 * 0x200000) ^ (uVar26 * 0x80 | uVar26 >> 0x19) ^
             (uVar26 >> 6 | uVar26 * 0x4000000)) + uVar11;
    uVar28 = uVar28 + iVar18;
    uVar27 = ((uVar23 | uVar22) & uVar20 | uVar23 & uVar22) +
             ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 * 0x400 | uVar23 >> 0x16) ^
             (uVar23 >> 2 | uVar23 * 0x40000000)) + iVar18;
    iVar18 = uVar29 + 0x243185be +
             ((uVar21 ^ uVar26) & uVar28 ^ uVar21) +
             ((uVar28 >> 0xb | uVar28 * 0x200000) ^ (uVar28 * 0x80 | uVar28 >> 0x19) ^
             (uVar28 >> 6 | uVar28 * 0x4000000)) + uVar12;
    uVar20 = uVar20 + iVar18;
    uVar29 = ((uVar23 | uVar27) & uVar22 | uVar23 & uVar27) +
             ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 * 0x400 | uVar27 >> 0x16) ^
             (uVar27 >> 2 | uVar27 * 0x40000000)) + iVar18;
    iVar18 = uVar21 + 0x550c7dc3 +
             ((uVar26 ^ uVar28) & uVar20 ^ uVar26) +
             ((uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 * 0x80 | uVar20 >> 0x19) ^
             (uVar20 >> 6 | uVar20 * 0x4000000)) + uVar13;
    uVar22 = uVar22 + iVar18;
    uVar21 = ((uVar27 | uVar29) & uVar23 | uVar27 & uVar29) +
             ((uVar29 >> 0xd | uVar29 * 0x80000) ^ (uVar29 * 0x400 | uVar29 >> 0x16) ^
             (uVar29 >> 2 | uVar29 * 0x40000000)) + iVar18;
    iVar18 = uVar26 + 0x72be5d74 +
             ((uVar28 ^ uVar20) & uVar22 ^ uVar28) +
             ((uVar22 >> 0xb | uVar22 * 0x200000) ^ (uVar22 * 0x80 | uVar22 >> 0x19) ^
             (uVar22 >> 6 | uVar22 * 0x4000000)) + uVar14;
    uVar23 = uVar23 + iVar18;
    uVar26 = ((uVar29 | uVar21) & uVar27 | uVar29 & uVar21) +
             ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 * 0x400 | uVar21 >> 0x16) ^
             (uVar21 >> 2 | uVar21 * 0x40000000)) + iVar18;
    iVar18 = uVar28 + 0x80deb1fe +
             ((uVar20 ^ uVar22) & uVar23 ^ uVar20) +
             ((uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 * 0x80 | uVar23 >> 0x19) ^
             (uVar23 >> 6 | uVar23 * 0x4000000)) + uVar15;
    uVar27 = uVar27 + iVar18;
    uVar28 = ((uVar21 | uVar26) & uVar29 | uVar21 & uVar26) +
             ((uVar26 >> 0xd | uVar26 * 0x80000) ^ (uVar26 * 0x400 | uVar26 >> 0x16) ^
             (uVar26 >> 2 | uVar26 * 0x40000000)) + iVar18;
    iVar18 = uVar20 + 0x9bdc06a7 +
             ((uVar23 ^ uVar22) & uVar27 ^ uVar22) +
             ((uVar27 >> 0xb | uVar27 * 0x200000) ^ (uVar27 * 0x80 | uVar27 >> 0x19) ^
             (uVar27 >> 6 | uVar27 * 0x4000000)) + uVar16;
    uVar29 = uVar29 + iVar18;
    uVar20 = ((uVar26 | uVar28) & uVar21 | uVar26 & uVar28) +
             ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 * 0x400 | uVar28 >> 0x16) ^
             (uVar28 >> 2 | uVar28 * 0x40000000)) + iVar18;
    iVar18 = uVar22 + 0xc19bf174 +
             ((uVar23 ^ uVar27) & uVar29 ^ uVar23) +
             ((uVar29 >> 0xb | uVar29 * 0x200000) ^ (uVar29 * 0x80 | uVar29 >> 0x19) ^
             (uVar29 >> 6 | uVar29 * 0x4000000)) + uVar17;
    uVar21 = uVar21 + iVar18;
    uVar22 = ((uVar28 | uVar20) & uVar26 | uVar28 & uVar20) +
             ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 * 0x400 | uVar20 >> 0x16) ^
             (uVar20 >> 2 | uVar20 * 0x40000000)) + iVar18;
    uVar19 = ((uVar16 << 0xf | uVar1 >> 1) ^ (uVar16 << 0xd | uVar1 >> 3) ^ CONCAT21(uVar1,param_2[0x3a]) >> 2) +
             uVar11 + ((uVar3 << 0xe | CONCAT11(param_2[4],param_2[5]) >> 2) ^ (uVar3 >> 7 | uVar3 << 0x19) ^
                      uVar3 >> 3) + iVar25;
    iVar18 = uVar23 + 0xe49b69c1 +
             ((uVar27 ^ uVar29) & uVar21 ^ uVar27) +
             ((uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 * 0x80 | uVar21 >> 0x19) ^
             (uVar21 >> 6 | uVar21 * 0x4000000)) + uVar19;
    uVar26 = uVar26 + iVar18;
    uVar23 = ((uVar20 | uVar22) & uVar28 | uVar20 & uVar22) +
             ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 * 0x400 | uVar22 >> 0x16) ^
             (uVar22 >> 2 | uVar22 * 0x40000000)) + iVar18;
    uVar3 = uVar3 + ((uVar4 << 0xe | CONCAT11(param_2[8],param_2[9]) >> 2) ^ (uVar4 >> 7 | uVar4 << 0x19) ^ uVar4 >> 3)
                    + ((uVar17 << 0xf | uVar2 >> 1) ^ (uVar17 << 0xd | uVar2 >> 3) ^ CONCAT21(uVar2,param_2[0x3e]) >> 2
                      ) + uVar12;
    iVar18 = uVar27 + 0xefbe4786 +
             ((uVar29 ^ uVar21) & uVar26 ^ uVar29) +
             ((uVar26 >> 0xb | uVar26 * 0x200000) ^ (uVar26 * 0x80 | uVar26 >> 0x19) ^
             (uVar26 >> 6 | uVar26 * 0x4000000)) + uVar3;
    uVar28 = uVar28 + iVar18;
    uVar27 = ((uVar23 | uVar22) & uVar20 | uVar23 & uVar22) +
             ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 * 0x400 | uVar23 >> 0x16) ^
             (uVar23 >> 2 | uVar23 * 0x40000000)) + iVar18;
    uVar4 = uVar4 + ((uVar5 << 0xe | CONCAT11(param_2[0xc],param_2[0xd]) >> 2) ^ (uVar5 >> 7 | uVar5 << 0x19) ^
                    uVar5 >> 3) +
                    ((uVar19 * 0x8000 | uVar19 >> 0x11) ^ (uVar19 * 0x2000 | uVar19 >> 0x13) ^ uVar19 >> 10) + uVar13;
    iVar18 = uVar29 + 0xfc19dc6 +
             ((uVar21 ^ uVar26) & uVar28 ^ uVar21) +
             ((uVar28 >> 0xb | uVar28 * 0x200000) ^ (uVar28 * 0x80 | uVar28 >> 0x19) ^
             (uVar28 >> 6 | uVar28 * 0x4000000)) + uVar4;
    uVar20 = uVar20 + iVar18;
    uVar29 = ((uVar23 | uVar27) & uVar22 | uVar23 & uVar27) +
             ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 * 0x400 | uVar27 >> 0x16) ^
             (uVar27 >> 2 | uVar27 * 0x40000000)) + iVar18;
    uVar5 = uVar5 + ((uVar6 << 0xe | CONCAT11(param_2[0x10],param_2[0x11]) >> 2) ^ (uVar6 >> 7 | uVar6 << 0x19) ^
                    uVar6 >> 3) +
                    ((uVar3 * 0x8000 | uVar3 >> 0x11) ^ (uVar3 * 0x2000 | uVar3 >> 0x13) ^ uVar3 >> 10) + uVar14;
    iVar18 = uVar21 + 0x240ca1cc +
             ((uVar26 ^ uVar28) & uVar20 ^ uVar26) +
             ((uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 * 0x80 | uVar20 >> 0x19) ^
             (uVar20 >> 6 | uVar20 * 0x4000000)) + uVar5;
    uVar22 = uVar22 + iVar18;
    uVar21 = ((uVar27 | uVar29) & uVar23 | uVar27 & uVar29) +
             ((uVar29 >> 0xd | uVar29 * 0x80000) ^ (uVar29 * 0x400 | uVar29 >> 0x16) ^
             (uVar29 >> 2 | uVar29 * 0x40000000)) + iVar18;
    uVar6 = uVar6 + ((uVar7 << 0xe | CONCAT11(param_2[0x14],param_2[0x15]) >> 2) ^ (uVar7 >> 7 | uVar7 << 0x19) ^
                    uVar7 >> 3) +
                    ((uVar4 * 0x8000 | uVar4 >> 0x11) ^ (uVar4 * 0x2000 | uVar4 >> 0x13) ^ uVar4 >> 10) + uVar15;
    iVar18 = uVar26 + 0x2de92c6f +
             ((uVar28 ^ uVar20) & uVar22 ^ uVar28) +
             ((uVar22 >> 0xb | uVar22 * 0x200000) ^ (uVar22 * 0x80 | uVar22 >> 0x19) ^
             (uVar22 >> 6 | uVar22 * 0x4000000)) + uVar6;
    uVar23 = uVar23 + iVar18;
    uVar26 = ((uVar29 | uVar21) & uVar27 | uVar29 & uVar21) +
             ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 * 0x400 | uVar21 >> 0x16) ^
             (uVar21 >> 2 | uVar21 * 0x40000000)) + iVar18;
    uVar7 = uVar7 + ((uVar8 << 0xe | CONCAT11(param_2[0x18],param_2[0x19]) >> 2) ^ (uVar8 >> 7 | uVar8 << 0x19) ^
                    uVar8 >> 3) +
                    ((uVar5 * 0x8000 | uVar5 >> 0x11) ^ (uVar5 * 0x2000 | uVar5 >> 0x13) ^ uVar5 >> 10) + uVar16;
    iVar18 = uVar28 + 0x4a7484aa +
             ((uVar20 ^ uVar22) & uVar23 ^ uVar20) +
             ((uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 * 0x80 | uVar23 >> 0x19) ^
             (uVar23 >> 6 | uVar23 * 0x4000000)) + uVar7;
    uVar27 = uVar27 + iVar18;
    uVar28 = ((uVar21 | uVar26) & uVar29 | uVar21 & uVar26) +
             ((uVar26 >> 0xd | uVar26 * 0x80000) ^ (uVar26 * 0x400 | uVar26 >> 0x16) ^
             (uVar26 >> 2 | uVar26 * 0x40000000)) + iVar18;
    uVar8 = uVar8 + ((uVar9 << 0xe | CONCAT11(param_2[0x1c],param_2[0x1d]) >> 2) ^ (uVar9 >> 7 | uVar9 << 0x19) ^
                    uVar9 >> 3) +
                    ((uVar6 * 0x8000 | uVar6 >> 0x11) ^ (uVar6 * 0x2000 | uVar6 >> 0x13) ^ uVar6 >> 10) + uVar17;
    iVar18 = uVar20 + 0x5cb0a9dc +
             ((uVar23 ^ uVar22) & uVar27 ^ uVar22) +
             ((uVar27 >> 0xb | uVar27 * 0x200000) ^ (uVar27 * 0x80 | uVar27 >> 0x19) ^
             (uVar27 >> 6 | uVar27 * 0x4000000)) + uVar8;
    uVar29 = uVar29 + iVar18;
    uVar20 = ((uVar26 | uVar28) & uVar21 | uVar26 & uVar28) +
             ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 * 0x400 | uVar28 >> 0x16) ^
             (uVar28 >> 2 | uVar28 * 0x40000000)) + iVar18;
    uVar9 = uVar9 + ((uVar10 << 0xe | CONCAT11(param_2[0x20],param_2[0x21]) >> 2) ^ (uVar10 >> 7 | uVar10 << 0x19) ^
                    uVar10 >> 3) +
                    ((uVar7 * 0x8000 | uVar7 >> 0x11) ^ (uVar7 * 0x2000 | uVar7 >> 0x13) ^ uVar7 >> 10) + uVar19;
    iVar18 = uVar22 + 0x76f988da +
             ((uVar23 ^ uVar27) & uVar29 ^ uVar23) +
             ((uVar29 >> 0xb | uVar29 * 0x200000) ^ (uVar29 * 0x80 | uVar29 >> 0x19) ^
             (uVar29 >> 6 | uVar29 * 0x4000000)) + uVar9;
    uVar21 = uVar21 + iVar18;
    uVar22 = ((uVar28 | uVar20) & uVar26 | uVar28 & uVar20) +
             ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 * 0x400 | uVar20 >> 0x16) ^
             (uVar20 >> 2 | uVar20 * 0x40000000)) + iVar18;
    uVar10 = uVar10 + ((uVar11 << 0xe | CONCAT11(param_2[0x24],param_2[0x25]) >> 2) ^ (uVar11 >> 7 | uVar11 << 0x19) ^
                      uVar11 >> 3) +
                      ((uVar8 * 0x8000 | uVar8 >> 0x11) ^ (uVar8 * 0x2000 | uVar8 >> 0x13) ^ uVar8 >> 10) + uVar3;
    iVar18 = uVar23 + 0x983e5152 +
             ((uVar27 ^ uVar29) & uVar21 ^ uVar27) +
             ((uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 * 0x80 | uVar21 >> 0x19) ^
             (uVar21 >> 6 | uVar21 * 0x4000000)) + uVar10;
    uVar26 = uVar26 + iVar18;
    uVar23 = ((uVar20 | uVar22) & uVar28 | uVar20 & uVar22) +
             ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 * 0x400 | uVar22 >> 0x16) ^
             (uVar22 >> 2 | uVar22 * 0x40000000)) + iVar18;
    uVar11 = ((uVar9 * 0x8000 | uVar9 >> 0x11) ^ (uVar9 * 0x2000 | uVar9 >> 0x13) ^ uVar9 >> 10) + uVar4 +
             ((uVar12 << 0xe | CONCAT11(param_2[0x28],param_2[0x29]) >> 2) ^ (uVar12 >> 7 | uVar12 << 0x19) ^
             uVar12 >> 3) + uVar11;
    iVar18 = uVar27 + 0xa831c66d +
             ((uVar29 ^ uVar21) & uVar26 ^ uVar29) +
             ((uVar26 >> 0xb | uVar26 * 0x200000) ^ (uVar26 * 0x80 | uVar26 >> 0x19) ^
             (uVar26 >> 6 | uVar26 * 0x4000000)) + uVar11;
    uVar28 = uVar28 + iVar18;
    uVar27 = ((uVar23 | uVar22) & uVar20 | uVar23 & uVar22) +
             ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 * 0x400 | uVar23 >> 0x16) ^
             (uVar23 >> 2 | uVar23 * 0x40000000)) + iVar18;
    uVar12 = ((uVar10 * 0x8000 | uVar10 >> 0x11) ^ (uVar10 * 0x2000 | uVar10 >> 0x13) ^ uVar10 >> 10) + uVar5 +
             ((uVar13 << 0xe | CONCAT11(param_2[0x2c],param_2[0x2d]) >> 2) ^ (uVar13 >> 7 | uVar13 << 0x19) ^
             uVar13 >> 3) + uVar12;
    iVar18 = uVar29 + 0xb00327c8 +
             ((uVar21 ^ uVar26) & uVar28 ^ uVar21) +
             ((uVar28 >> 0xb | uVar28 * 0x200000) ^ (uVar28 * 0x80 | uVar28 >> 0x19) ^
             (uVar28 >> 6 | uVar28 * 0x4000000)) + uVar12;
    uVar20 = uVar20 + iVar18;
    uVar29 = ((uVar23 | uVar27) & uVar22 | uVar23 & uVar27) +
             ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 * 0x400 | uVar27 >> 0x16) ^
             (uVar27 >> 2 | uVar27 * 0x40000000)) + iVar18;
    uVar13 = ((uVar11 * 0x8000 | uVar11 >> 0x11) ^ (uVar11 * 0x2000 | uVar11 >> 0x13) ^ uVar11 >> 10) + uVar6 +
             ((uVar14 << 0xe | CONCAT11(param_2[0x30],param_2[0x31]) >> 2) ^ (uVar14 >> 7 | uVar14 << 0x19) ^
             uVar14 >> 3) + uVar13;
    iVar18 = uVar21 + 0xbf597fc7 +
             ((uVar26 ^ uVar28) & uVar20 ^ uVar26) +
             ((uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 * 0x80 | uVar20 >> 0x19) ^
             (uVar20 >> 6 | uVar20 * 0x4000000)) + uVar13;
    uVar22 = uVar22 + iVar18;
    uVar21 = ((uVar27 | uVar29) & uVar23 | uVar27 & uVar29) +
             ((uVar29 >> 0xd | uVar29 * 0x80000) ^ (uVar29 * 0x400 | uVar29 >> 0x16) ^
             (uVar29 >> 2 | uVar29 * 0x40000000)) + iVar18;
    uVar14 = ((uVar12 * 0x8000 | uVar12 >> 0x11) ^ (uVar12 * 0x2000 | uVar12 >> 0x13) ^ uVar12 >> 10) + uVar7 +
             ((uVar15 << 0xe | CONCAT11(param_2[0x34],param_2[0x35]) >> 2) ^ (uVar15 >> 7 | uVar15 << 0x19) ^
             uVar15 >> 3) + uVar14;
    iVar18 = uVar26 + 0xc6e00bf3 +
             ((uVar28 ^ uVar20) & uVar22 ^ uVar28) +
             ((uVar22 >> 0xb | uVar22 * 0x200000) ^ (uVar22 * 0x80 | uVar22 >> 0x19) ^
             (uVar22 >> 6 | uVar22 * 0x4000000)) + uVar14;
    uVar23 = uVar23 + iVar18;
    uVar26 = ((uVar29 | uVar21) & uVar27 | uVar29 & uVar21) +
             ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 * 0x400 | uVar21 >> 0x16) ^
             (uVar21 >> 2 | uVar21 * 0x40000000)) + iVar18;
    uVar15 = ((uVar13 * 0x8000 | uVar13 >> 0x11) ^ (uVar13 * 0x2000 | uVar13 >> 0x13) ^ uVar13 >> 10) + uVar8 +
             ((uVar16 << 0xe | uVar1 >> 2) ^ (uVar16 >> 7 | uVar16 << 0x19) ^ uVar16 >> 3) + uVar15;
    iVar18 = uVar28 + 0xd5a79147 +
             ((uVar20 ^ uVar22) & uVar23 ^ uVar20) +
             ((uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 * 0x80 | uVar23 >> 0x19) ^
             (uVar23 >> 6 | uVar23 * 0x4000000)) + uVar15;
    uVar27 = uVar27 + iVar18;
    uVar28 = ((uVar21 | uVar26) & uVar29 | uVar21 & uVar26) +
             ((uVar26 >> 0xd | uVar26 * 0x80000) ^ (uVar26 * 0x400 | uVar26 >> 0x16) ^
             (uVar26 >> 2 | uVar26 * 0x40000000)) + iVar18;
    uVar16 = ((uVar14 * 0x8000 | uVar14 >> 0x11) ^ (uVar14 * 0x2000 | uVar14 >> 0x13) ^ uVar14 >> 10) + uVar9 +
             ((uVar17 << 0xe | uVar2 >> 2) ^ (uVar17 >> 7 | uVar17 << 0x19) ^ uVar17 >> 3) + uVar16;
    iVar18 = uVar20 + 0x6ca6351 +
             ((uVar23 ^ uVar22) & uVar27 ^ uVar22) +
             ((uVar27 >> 0xb | uVar27 * 0x200000) ^ (uVar27 * 0x80 | uVar27 >> 0x19) ^
             (uVar27 >> 6 | uVar27 * 0x4000000)) + uVar16;
    uVar29 = uVar29 + iVar18;
    uVar20 = ((uVar26 | uVar28) & uVar21 | uVar26 & uVar28) +
             ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 * 0x400 | uVar28 >> 0x16) ^
             (uVar28 >> 2 | uVar28 * 0x40000000)) + iVar18;
    uVar17 = ((uVar15 * 0x8000 | uVar15 >> 0x11) ^ (uVar15 * 0x2000 | uVar15 >> 0x13) ^ uVar15 >> 10) + uVar10 +
             ((uVar19 * 0x4000 | uVar19 >> 0x12) ^ (uVar19 >> 7 | uVar19 * 0x2000000) ^ uVar19 >> 3) + uVar17;
    iVar18 = uVar22 + 0x14292967 +
             ((uVar23 ^ uVar27) & uVar29 ^ uVar23) +
             ((uVar29 >> 0xb | uVar29 * 0x200000) ^ (uVar29 * 0x80 | uVar29 >> 0x19) ^
             (uVar29 >> 6 | uVar29 * 0x4000000)) + uVar17;
    uVar21 = uVar21 + iVar18;
    uVar22 = ((uVar28 | uVar20) & uVar26 | uVar28 & uVar20) +
             ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 * 0x400 | uVar20 >> 0x16) ^
             (uVar20 >> 2 | uVar20 * 0x40000000)) + iVar18;
    uVar19 = ((uVar16 * 0x8000 | uVar16 >> 0x11) ^ (uVar16 * 0x2000 | uVar16 >> 0x13) ^ uVar16 >> 10) + uVar11 +
             ((uVar3 * 0x4000 | uVar3 >> 0x12) ^ (uVar3 >> 7 | uVar3 * 0x2000000) ^ uVar3 >> 3) + uVar19;
    iVar18 = uVar23 + 0x27b70a85 +
             ((uVar27 ^ uVar29) & uVar21 ^ uVar27) +
             ((uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 * 0x80 | uVar21 >> 0x19) ^
             (uVar21 >> 6 | uVar21 * 0x4000000)) + uVar19;
    uVar26 = uVar26 + iVar18;
    uVar23 = ((uVar20 | uVar22) & uVar28 | uVar20 & uVar22) +
             ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 * 0x400 | uVar22 >> 0x16) ^
             (uVar22 >> 2 | uVar22 * 0x40000000)) + iVar18;
    uVar3 = ((uVar17 * 0x8000 | uVar17 >> 0x11) ^ (uVar17 * 0x2000 | uVar17 >> 0x13) ^ uVar17 >> 10) + uVar12 +
            ((uVar4 * 0x4000 | uVar4 >> 0x12) ^ (uVar4 >> 7 | uVar4 * 0x2000000) ^ uVar4 >> 3) + uVar3;
    iVar18 = uVar27 + 0x2e1b2138 +
             ((uVar29 ^ uVar21) & uVar26 ^ uVar29) +
             ((uVar26 >> 0xb | uVar26 * 0x200000) ^ (uVar26 * 0x80 | uVar26 >> 0x19) ^
             (uVar26 >> 6 | uVar26 * 0x4000000)) + uVar3;
    uVar28 = uVar28 + iVar18;
    uVar27 = ((uVar23 | uVar22) & uVar20 | uVar23 & uVar22) +
             ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 * 0x400 | uVar23 >> 0x16) ^
             (uVar23 >> 2 | uVar23 * 0x40000000)) + iVar18;
    uVar4 = ((uVar19 * 0x8000 | uVar19 >> 0x11) ^ (uVar19 * 0x2000 | uVar19 >> 0x13) ^ uVar19 >> 10) + uVar13 +
            ((uVar5 * 0x4000 | uVar5 >> 0x12) ^ (uVar5 >> 7 | uVar5 * 0x2000000) ^ uVar5 >> 3) + uVar4;
    iVar18 = uVar29 + 0x4d2c6dfc +
             ((uVar21 ^ uVar26) & uVar28 ^ uVar21) +
             ((uVar28 >> 0xb | uVar28 * 0x200000) ^ (uVar28 * 0x80 | uVar28 >> 0x19) ^
             (uVar28 >> 6 | uVar28 * 0x4000000)) + uVar4;
    uVar20 = uVar20 + iVar18;
    uVar29 = ((uVar23 | uVar27) & uVar22 | uVar23 & uVar27) +
             ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 * 0x400 | uVar27 >> 0x16) ^
             (uVar27 >> 2 | uVar27 * 0x40000000)) + iVar18;
    uVar5 = ((uVar3 * 0x8000 | uVar3 >> 0x11) ^ (uVar3 * 0x2000 | uVar3 >> 0x13) ^ uVar3 >> 10) + uVar14 +
            ((uVar6 * 0x4000 | uVar6 >> 0x12) ^ (uVar6 >> 7 | uVar6 * 0x2000000) ^ uVar6 >> 3) + uVar5;
    iVar18 = uVar21 + 0x53380d13 +
             ((uVar26 ^ uVar28) & uVar20 ^ uVar26) +
             ((uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 * 0x80 | uVar20 >> 0x19) ^
             (uVar20 >> 6 | uVar20 * 0x4000000)) + uVar5;
    uVar22 = uVar22 + iVar18;
    uVar21 = ((uVar27 | uVar29) & uVar23 | uVar27 & uVar29) +
             ((uVar29 >> 0xd | uVar29 * 0x80000) ^ (uVar29 * 0x400 | uVar29 >> 0x16) ^
             (uVar29 >> 2 | uVar29 * 0x40000000)) + iVar18;
    uVar6 = ((uVar4 * 0x8000 | uVar4 >> 0x11) ^ (uVar4 * 0x2000 | uVar4 >> 0x13) ^ uVar4 >> 10) + uVar15 +
            ((uVar7 * 0x4000 | uVar7 >> 0x12) ^ (uVar7 >> 7 | uVar7 * 0x2000000) ^ uVar7 >> 3) + uVar6;
    iVar18 = uVar26 + 0x650a7354 +
             ((uVar28 ^ uVar20) & uVar22 ^ uVar28) +
             ((uVar22 >> 0xb | uVar22 * 0x200000) ^ (uVar22 * 0x80 | uVar22 >> 0x19) ^
             (uVar22 >> 6 | uVar22 * 0x4000000)) + uVar6;
    uVar23 = uVar23 + iVar18;
    uVar26 = ((uVar29 | uVar21) & uVar27 | uVar29 & uVar21) +
             ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 * 0x400 | uVar21 >> 0x16) ^
             (uVar21 >> 2 | uVar21 * 0x40000000)) + iVar18;
    uVar7 = ((uVar5 * 0x8000 | uVar5 >> 0x11) ^ (uVar5 * 0x2000 | uVar5 >> 0x13) ^ uVar5 >> 10) + uVar16 +
            ((uVar8 * 0x4000 | uVar8 >> 0x12) ^ (uVar8 >> 7 | uVar8 * 0x2000000) ^ uVar8 >> 3) + uVar7;
    iVar18 = uVar28 + 0x766a0abb +
             ((uVar20 ^ uVar22) & uVar23 ^ uVar20) +
             ((uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 * 0x80 | uVar23 >> 0x19) ^
             (uVar23 >> 6 | uVar23 * 0x4000000)) + uVar7;
    uVar27 = uVar27 + iVar18;
    uVar28 = ((uVar21 | uVar26) & uVar29 | uVar21 & uVar26) +
             ((uVar26 >> 0xd | uVar26 * 0x80000) ^ (uVar26 * 0x400 | uVar26 >> 0x16) ^
             (uVar26 >> 2 | uVar26 * 0x40000000)) + iVar18;
    uVar8 = ((uVar6 * 0x8000 | uVar6 >> 0x11) ^ (uVar6 * 0x2000 | uVar6 >> 0x13) ^ uVar6 >> 10) + uVar17 +
            ((uVar9 * 0x4000 | uVar9 >> 0x12) ^ (uVar9 >> 7 | uVar9 * 0x2000000) ^ uVar9 >> 3) + uVar8;
    iVar18 = uVar20 + 0x81c2c92e +
             ((uVar23 ^ uVar22) & uVar27 ^ uVar22) +
             ((uVar27 >> 0xb | uVar27 * 0x200000) ^ (uVar27 * 0x80 | uVar27 >> 0x19) ^
             (uVar27 >> 6 | uVar27 * 0x4000000)) + uVar8;
    uVar29 = uVar29 + iVar18;
    uVar20 = ((uVar26 | uVar28) & uVar21 | uVar26 & uVar28) +
             ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 * 0x400 | uVar28 >> 0x16) ^
             (uVar28 >> 2 | uVar28 * 0x40000000)) + iVar18;
    uVar9 = ((uVar7 * 0x8000 | uVar7 >> 0x11) ^ (uVar7 * 0x2000 | uVar7 >> 0x13) ^ uVar7 >> 10) + uVar19 +
            ((uVar10 * 0x4000 | uVar10 >> 0x12) ^ (uVar10 >> 7 | uVar10 * 0x2000000) ^ uVar10 >> 3) + uVar9;
    iVar18 = uVar22 + 0x92722c85 +
             ((uVar23 ^ uVar27) & uVar29 ^ uVar23) +
             ((uVar29 >> 0xb | uVar29 * 0x200000) ^ (uVar29 * 0x80 | uVar29 >> 0x19) ^
             (uVar29 >> 6 | uVar29 * 0x4000000)) + uVar9;
    uVar21 = uVar21 + iVar18;
    uVar22 = ((uVar28 | uVar20) & uVar26 | uVar28 & uVar20) +
             ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 * 0x400 | uVar20 >> 0x16) ^
             (uVar20 >> 2 | uVar20 * 0x40000000)) + iVar18;
    uVar10 = ((uVar8 * 0x8000 | uVar8 >> 0x11) ^ (uVar8 * 0x2000 | uVar8 >> 0x13) ^ uVar8 >> 10) + uVar3 +
             ((uVar11 * 0x4000 | uVar11 >> 0x12) ^ (uVar11 >> 7 | uVar11 * 0x2000000) ^ uVar11 >> 3) + uVar10;
    iVar18 = uVar23 + 0xa2bfe8a1 +
             ((uVar27 ^ uVar29) & uVar21 ^ uVar27) +
             ((uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 * 0x80 | uVar21 >> 0x19) ^
             (uVar21 >> 6 | uVar21 * 0x4000000)) + uVar10;
    uVar26 = uVar26 + iVar18;
    uVar23 = ((uVar20 | uVar22) & uVar28 | uVar20 & uVar22) +
             ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 * 0x400 | uVar22 >> 0x16) ^
             (uVar22 >> 2 | uVar22 * 0x40000000)) + iVar18;
    uVar11 = ((uVar9 * 0x8000 | uVar9 >> 0x11) ^ (uVar9 * 0x2000 | uVar9 >> 0x13) ^ uVar9 >> 10) + uVar4 +
             ((uVar12 * 0x4000 | uVar12 >> 0x12) ^ (uVar12 >> 7 | uVar12 * 0x2000000) ^ uVar12 >> 3) + uVar11;
    iVar18 = uVar27 + 0xa81a664b +
             ((uVar29 ^ uVar21) & uVar26 ^ uVar29) +
             ((uVar26 >> 0xb | uVar26 * 0x200000) ^ (uVar26 * 0x80 | uVar26 >> 0x19) ^
             (uVar26 >> 6 | uVar26 * 0x4000000)) + uVar11;
    uVar28 = uVar28 + iVar18;
    uVar24 = ((uVar23 | uVar22) & uVar20 | uVar23 & uVar22) +
             ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 * 0x400 | uVar23 >> 0x16) ^
             (uVar23 >> 2 | uVar23 * 0x40000000)) + iVar18;
    uVar12 = ((uVar10 * 0x8000 | uVar10 >> 0x11) ^ (uVar10 * 0x2000 | uVar10 >> 0x13) ^ uVar10 >> 10) + uVar5 +
             ((uVar13 * 0x4000 | uVar13 >> 0x12) ^ (uVar13 >> 7 | uVar13 * 0x2000000) ^ uVar13 >> 3) + uVar12;
    iVar18 = uVar29 + 0xc24b8b70 +
             ((uVar21 ^ uVar26) & uVar28 ^ uVar21) +
             ((uVar28 >> 0xb | uVar28 * 0x200000) ^ (uVar28 * 0x80 | uVar28 >> 0x19) ^
             (uVar28 >> 6 | uVar28 * 0x4000000)) + uVar12;
    uVar20 = uVar20 + iVar18;
    uVar27 = ((uVar23 | uVar24) & uVar22 | uVar23 & uVar24) +
             ((uVar24 >> 0xd | uVar24 * 0x80000) ^ (uVar24 * 0x400 | uVar24 >> 0x16) ^
             (uVar24 >> 2 | uVar24 * 0x40000000)) + iVar18;
    uVar13 = ((uVar11 * 0x8000 | uVar11 >> 0x11) ^ (uVar11 * 0x2000 | uVar11 >> 0x13) ^ uVar11 >> 10) + uVar6 +
             ((uVar14 * 0x4000 | uVar14 >> 0x12) ^ (uVar14 >> 7 | uVar14 * 0x2000000) ^ uVar14 >> 3) + uVar13;
    iVar18 = uVar21 + 0xc76c51a3 +
             ((uVar26 ^ uVar28) & uVar20 ^ uVar26) +
             ((uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 * 0x80 | uVar20 >> 0x19) ^
             (uVar20 >> 6 | uVar20 * 0x4000000)) + uVar13;
    uVar22 = uVar22 + iVar18;
    uVar29 = ((uVar24 | uVar27) & uVar23 | uVar24 & uVar27) +
             ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 * 0x400 | uVar27 >> 0x16) ^
             (uVar27 >> 2 | uVar27 * 0x40000000)) + iVar18;
    uVar14 = ((uVar12 * 0x8000 | uVar12 >> 0x11) ^ (uVar12 * 0x2000 | uVar12 >> 0x13) ^ uVar12 >> 10) + uVar7 +
             ((uVar15 * 0x4000 | uVar15 >> 0x12) ^ (uVar15 >> 7 | uVar15 * 0x2000000) ^ uVar15 >> 3) + uVar14;
    iVar18 = uVar26 + 0xd192e819 +
             ((uVar28 ^ uVar20) & uVar22 ^ uVar28) +
             ((uVar22 >> 0xb | uVar22 * 0x200000) ^ (uVar22 * 0x80 | uVar22 >> 0x19) ^
             (uVar22 >> 6 | uVar22 * 0x4000000)) + uVar14;
    uVar23 = uVar23 + iVar18;
    uVar21 = ((uVar27 | uVar29) & uVar24 | uVar27 & uVar29) +
             ((uVar29 >> 0xd | uVar29 * 0x80000) ^ (uVar29 * 0x400 | uVar29 >> 0x16) ^
             (uVar29 >> 2 | uVar29 * 0x40000000)) + iVar18;
    uVar15 = ((uVar13 * 0x8000 | uVar13 >> 0x11) ^ (uVar13 * 0x2000 | uVar13 >> 0x13) ^ uVar13 >> 10) + uVar8 +
             ((uVar16 * 0x4000 | uVar16 >> 0x12) ^ (uVar16 >> 7 | uVar16 * 0x2000000) ^ uVar16 >> 3) + uVar15;
    iVar18 = uVar28 + 0xd6990624 +
             ((uVar20 ^ uVar22) & uVar23 ^ uVar20) +
             ((uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 * 0x80 | uVar23 >> 0x19) ^
             (uVar23 >> 6 | uVar23 * 0x4000000)) + uVar15;
    uVar24 = uVar24 + iVar18;
    uVar26 = ((uVar29 | uVar21) & uVar27 | uVar29 & uVar21) +
             ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 * 0x400 | uVar21 >> 0x16) ^
             (uVar21 >> 2 | uVar21 * 0x40000000)) + iVar18;
    uVar16 = ((uVar14 * 0x8000 | uVar14 >> 0x11) ^ (uVar14 * 0x2000 | uVar14 >> 0x13) ^ uVar14 >> 10) + uVar9 +
             ((uVar17 * 0x4000 | uVar17 >> 0x12) ^ (uVar17 >> 7 | uVar17 * 0x2000000) ^ uVar17 >> 3) + uVar16;
    iVar18 = uVar20 + 0xf40e3585 +
             ((uVar23 ^ uVar22) & uVar24 ^ uVar22) +
             ((uVar24 >> 0xb | uVar24 * 0x200000) ^ (uVar24 * 0x80 | uVar24 >> 0x19) ^
             (uVar24 >> 6 | uVar24 * 0x4000000)) + uVar16;
    uVar27 = uVar27 + iVar18;
    uVar28 = ((uVar21 | uVar26) & uVar29 | uVar21 & uVar26) +
             ((uVar26 >> 0xd | uVar26 * 0x80000) ^ (uVar26 * 0x400 | uVar26 >> 0x16) ^
             (uVar26 >> 2 | uVar26 * 0x40000000)) + iVar18;
    uVar17 = ((uVar15 * 0x8000 | uVar15 >> 0x11) ^ (uVar15 * 0x2000 | uVar15 >> 0x13) ^ uVar15 >> 10) + uVar10 +
             ((uVar19 * 0x4000 | uVar19 >> 0x12) ^ (uVar19 >> 7 | uVar19 * 0x2000000) ^ uVar19 >> 3) + uVar17;
    iVar18 = uVar22 + 0x106aa070 +
             ((uVar23 ^ uVar24) & uVar27 ^ uVar23) +
             ((uVar27 >> 0xb | uVar27 * 0x200000) ^ (uVar27 * 0x80 | uVar27 >> 0x19) ^
             (uVar27 >> 6 | uVar27 * 0x4000000)) + uVar17;
    uVar29 = uVar29 + iVar18;
    uVar22 = ((uVar26 | uVar28) & uVar21 | uVar26 & uVar28) +
             ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 * 0x400 | uVar28 >> 0x16) ^
             (uVar28 >> 2 | uVar28 * 0x40000000)) + iVar18;
    uVar19 = ((uVar16 * 0x8000 | uVar16 >> 0x11) ^ (uVar16 * 0x2000 | uVar16 >> 0x13) ^ uVar16 >> 10) + uVar11 +
             ((uVar3 * 0x4000 | uVar3 >> 0x12) ^ (uVar3 >> 7 | uVar3 * 0x2000000) ^ uVar3 >> 3) + uVar19;
    iVar18 = uVar23 + 0x19a4c116 +
             ((uVar24 ^ uVar27) & uVar29 ^ uVar24) +
             ((uVar29 >> 0xb | uVar29 * 0x200000) ^ (uVar29 * 0x80 | uVar29 >> 0x19) ^
             (uVar29 >> 6 | uVar29 * 0x4000000)) + uVar19;
    uVar21 = uVar21 + iVar18;
    uVar20 = ((uVar28 | uVar22) & uVar26 | uVar28 & uVar22) +
             ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 * 0x400 | uVar22 >> 0x16) ^
             (uVar22 >> 2 | uVar22 * 0x40000000)) + iVar18;
    uVar3 = (uVar4 >> 3 ^ (uVar4 * 0x4000 | uVar4 >> 0x12) ^ (uVar4 >> 7 | uVar4 * 0x2000000)) +
            ((uVar17 * 0x8000 | uVar17 >> 0x11) ^ (uVar17 * 0x2000 | uVar17 >> 0x13) ^ uVar17 >> 10) + uVar12 + uVar3;
    iVar18 = uVar24 + 0x1e376c08 +
             ((uVar27 ^ uVar29) & uVar21 ^ uVar27) +
             ((uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 * 0x80 | uVar21 >> 0x19) ^
             (uVar21 >> 6 | uVar21 * 0x4000000)) + uVar3;
    uVar26 = uVar26 + iVar18;
    uVar23 = ((uVar20 | uVar22) & uVar28 | uVar20 & uVar22) +
             ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 * 0x400 | uVar20 >> 0x16) ^
             (uVar20 >> 2 | uVar20 * 0x40000000)) + iVar18;
    uVar4 = (uVar5 >> 3 ^ (uVar5 * 0x4000 | uVar5 >> 0x12) ^ (uVar5 >> 7 | uVar5 * 0x2000000)) +
            ((uVar19 * 0x8000 | uVar19 >> 0x11) ^ (uVar19 * 0x2000 | uVar19 >> 0x13) ^ uVar19 >> 10) + uVar13 + uVar4;
    iVar18 = uVar27 + 0x2748774c +
             ((uVar29 ^ uVar21) & uVar26 ^ uVar29) +
             ((uVar26 >> 0xb | uVar26 * 0x200000) ^ (uVar26 * 0x80 | uVar26 >> 0x19) ^
             (uVar26 >> 6 | uVar26 * 0x4000000)) + uVar4;
    uVar28 = uVar28 + iVar18;
    uVar27 = ((uVar20 | uVar23) & uVar22 | uVar20 & uVar23) +
             ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 * 0x400 | uVar23 >> 0x16) ^
             (uVar23 >> 2 | uVar23 * 0x40000000)) + iVar18;
    uVar5 = (uVar6 >> 3 ^ (uVar6 * 0x4000 | uVar6 >> 0x12) ^ (uVar6 >> 7 | uVar6 * 0x2000000)) +
            ((uVar3 * 0x8000 | uVar3 >> 0x11) ^ (uVar3 * 0x2000 | uVar3 >> 0x13) ^ uVar3 >> 10) + uVar14 + uVar5;
    iVar18 = uVar29 + 0x34b0bcb5 +
             ((uVar21 ^ uVar26) & uVar28 ^ uVar21) +
             ((uVar28 >> 0xb | uVar28 * 0x200000) ^ (uVar28 * 0x80 | uVar28 >> 0x19) ^
             (uVar28 >> 6 | uVar28 * 0x4000000)) + uVar5;
    uVar22 = uVar22 + iVar18;
    uVar29 = ((uVar23 | uVar27) & uVar20 | uVar23 & uVar27) +
             ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 * 0x400 | uVar27 >> 0x16) ^
             (uVar27 >> 2 | uVar27 * 0x40000000)) + iVar18;
    uVar6 = (uVar7 >> 3 ^ (uVar7 * 0x4000 | uVar7 >> 0x12) ^ (uVar7 >> 7 | uVar7 * 0x2000000)) +
            ((uVar4 * 0x8000 | uVar4 >> 0x11) ^ (uVar4 * 0x2000 | uVar4 >> 0x13) ^ uVar4 >> 10) + uVar15 + uVar6;
    iVar18 = uVar21 + 0x391c0cb3 +
             ((uVar26 ^ uVar28) & uVar22 ^ uVar26) +
             ((uVar22 >> 0xb | uVar22 * 0x200000) ^ (uVar22 * 0x80 | uVar22 >> 0x19) ^
             (uVar22 >> 6 | uVar22 * 0x4000000)) + uVar6;
    uVar20 = uVar20 + iVar18;
    uVar21 = ((uVar27 | uVar29) & uVar23 | uVar27 & uVar29) +
             ((uVar29 >> 0xd | uVar29 * 0x80000) ^ (uVar29 * 0x400 | uVar29 >> 0x16) ^
             (uVar29 >> 2 | uVar29 * 0x40000000)) + iVar18;
    uVar7 = ((uVar5 * 0x8000 | uVar5 >> 0x11) ^ (uVar5 * 0x2000 | uVar5 >> 0x13) ^ uVar5 >> 10) + uVar16 +
            ((uVar8 * 0x4000 | uVar8 >> 0x12) ^ (uVar8 >> 7 | uVar8 * 0x2000000) ^ uVar8 >> 3) + uVar7;
    iVar18 = uVar26 + 0x4ed8aa4a +
             ((uVar28 ^ uVar22) & uVar20 ^ uVar28) +
             ((uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 * 0x80 | uVar20 >> 0x19) ^
             (uVar20 >> 6 | uVar20 * 0x4000000)) + uVar7;
    uVar23 = uVar23 + iVar18;
    uVar26 = ((uVar29 | uVar21) & uVar27 | uVar29 & uVar21) +
             ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 * 0x400 | uVar21 >> 0x16) ^
             (uVar21 >> 2 | uVar21 * 0x40000000)) + iVar18;
    uVar8 = (uVar9 >> 3 ^ (uVar9 * 0x4000 | uVar9 >> 0x12) ^ (uVar9 >> 7 | uVar9 * 0x2000000)) +
            ((uVar6 * 0x8000 | uVar6 >> 0x11) ^ (uVar6 * 0x2000 | uVar6 >> 0x13) ^ uVar6 >> 10) + uVar17 + uVar8;
    iVar18 = uVar28 + 0x5b9cca4f +
             ((uVar20 ^ uVar22) & uVar23 ^ uVar22) +
             ((uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 * 0x80 | uVar23 >> 0x19) ^
             (uVar23 >> 6 | uVar23 * 0x4000000)) + uVar8;
    uVar27 = uVar27 + iVar18;
    uVar28 = ((uVar21 | uVar26) & uVar29 | uVar21 & uVar26) +
             ((uVar26 >> 0xd | uVar26 * 0x80000) ^ (uVar26 * 0x400 | uVar26 >> 0x16) ^
             (uVar26 >> 2 | uVar26 * 0x40000000)) + iVar18;
    uVar9 = ((uVar7 * 0x8000 | uVar7 >> 0x11) ^ (uVar7 * 0x2000 | uVar7 >> 0x13) ^ uVar7 >> 10) + uVar19 +
            ((uVar10 * 0x4000 | uVar10 >> 0x12) ^ (uVar10 >> 7 | uVar10 * 0x2000000) ^ uVar10 >> 3) + uVar9;
    iVar18 = uVar22 + 0x682e6ff3 +
             ((uVar20 ^ uVar23) & uVar27 ^ uVar20) +
             ((uVar27 >> 0xb | uVar27 * 0x200000) ^ (uVar27 * 0x80 | uVar27 >> 0x19) ^
             (uVar27 >> 6 | uVar27 * 0x4000000)) + uVar9;
    uVar29 = uVar29 + iVar18;
    uVar22 = ((uVar26 | uVar28) & uVar21 | uVar26 & uVar28) +
             ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 * 0x400 | uVar28 >> 0x16) ^
             (uVar28 >> 2 | uVar28 * 0x40000000)) + iVar18;
    uVar10 = uVar3 + ((uVar8 * 0x8000 | uVar8 >> 0x11) ^ (uVar8 * 0x2000 | uVar8 >> 0x13) ^ uVar8 >> 10) +
             ((uVar11 * 0x4000 | uVar11 >> 0x12) ^ (uVar11 >> 7 | uVar11 * 0x2000000) ^ uVar11 >> 3) + uVar10;
    iVar18 = uVar20 + 0x748f82ee +
             ((uVar23 ^ uVar27) & uVar29 ^ uVar23) +
             ((uVar29 >> 0xb | uVar29 * 0x200000) ^ (uVar29 * 0x80 | uVar29 >> 0x19) ^
             (uVar29 >> 6 | uVar29 * 0x4000000)) + uVar10;
    uVar21 = uVar21 + iVar18;
    uVar20 = ((uVar28 | uVar22) & uVar26 | uVar28 & uVar22) +
             ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 * 0x400 | uVar22 >> 0x16) ^
             (uVar22 >> 2 | uVar22 * 0x40000000)) + iVar18;
    uVar11 = (uVar12 >> 3 ^ (uVar12 * 0x4000 | uVar12 >> 0x12) ^ (uVar12 >> 7 | uVar12 * 0x2000000)) +
             ((uVar9 * 0x8000 | uVar9 >> 0x11) ^ (uVar9 * 0x2000 | uVar9 >> 0x13) ^ uVar9 >> 10) + uVar4 + uVar11;
    iVar18 = uVar23 + 0x78a5636f +
             ((uVar27 ^ uVar29) & uVar21 ^ uVar27) +
             ((uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 * 0x80 | uVar21 >> 0x19) ^
             (uVar21 >> 6 | uVar21 * 0x4000000)) + uVar11;
    uVar26 = uVar26 + iVar18;
    uVar23 = ((uVar20 | uVar22) & uVar28 | uVar20 & uVar22) +
             ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 * 0x400 | uVar20 >> 0x16) ^
             (uVar20 >> 2 | uVar20 * 0x40000000)) + iVar18;
    uVar12 = (uVar13 >> 3 ^ (uVar13 * 0x4000 | uVar13 >> 0x12) ^ (uVar13 >> 7 | uVar13 * 0x2000000)) +
             ((uVar10 * 0x8000 | uVar10 >> 0x11) ^ (uVar10 * 0x2000 | uVar10 >> 0x13) ^ uVar10 >> 10) + uVar5 + uVar12;
    iVar18 = uVar27 + 0x84c87814 +
             ((uVar29 ^ uVar21) & uVar26 ^ uVar29) +
             ((uVar26 >> 0xb | uVar26 * 0x200000) ^ (uVar26 * 0x80 | uVar26 >> 0x19) ^
             (uVar26 >> 6 | uVar26 * 0x4000000)) + uVar12;
    uVar28 = uVar28 + iVar18;
    uVar27 = ((uVar20 | uVar23) & uVar22 | uVar20 & uVar23) +
             ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 * 0x400 | uVar23 >> 0x16) ^
             (uVar23 >> 2 | uVar23 * 0x40000000)) + iVar18;
    uVar13 = (uVar14 >> 3 ^ (uVar14 * 0x4000 | uVar14 >> 0x12) ^ (uVar14 >> 7 | uVar14 * 0x2000000)) +
             ((uVar11 * 0x8000 | uVar11 >> 0x11) ^ (uVar11 * 0x2000 | uVar11 >> 0x13) ^ uVar11 >> 10) + uVar6 + uVar13;
    iVar18 = uVar29 + 0x8cc70208 +
             ((uVar21 ^ uVar26) & uVar28 ^ uVar21) +
             ((uVar28 >> 0xb | uVar28 * 0x200000) ^ (uVar28 * 0x80 | uVar28 >> 0x19) ^
             (uVar28 >> 6 | uVar28 * 0x4000000)) + uVar13;
    uVar22 = uVar22 + iVar18;
    uVar29 = ((uVar23 | uVar27) & uVar20 | uVar23 & uVar27) +
             ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 * 0x400 | uVar27 >> 0x16) ^
             (uVar27 >> 2 | uVar27 * 0x40000000)) + iVar18;
    uVar14 = (uVar15 >> 3 ^ (uVar15 * 0x4000 | uVar15 >> 0x12) ^ (uVar15 >> 7 | uVar15 * 0x2000000)) +
             ((uVar12 * 0x8000 | uVar12 >> 0x11) ^ (uVar12 * 0x2000 | uVar12 >> 0x13) ^ uVar12 >> 10) + uVar7 + uVar14;
    iVar18 = uVar21 + 0x90befffa +
             ((uVar26 ^ uVar28) & uVar22 ^ uVar26) +
             ((uVar22 >> 0xb | uVar22 * 0x200000) ^ (uVar22 * 0x80 | uVar22 >> 0x19) ^
             (uVar22 >> 6 | uVar22 * 0x4000000)) + uVar14;
    uVar20 = uVar20 + iVar18;
    uVar24 = ((uVar27 | uVar29) & uVar23 | uVar27 & uVar29) +
             ((uVar29 >> 0xd | uVar29 * 0x80000) ^ (uVar29 * 0x400 | uVar29 >> 0x16) ^
             (uVar29 >> 2 | uVar29 * 0x40000000)) + iVar18;
    uVar15 = (uVar16 >> 3 ^ (uVar16 * 0x4000 | uVar16 >> 0x12) ^ (uVar16 >> 7 | uVar16 * 0x2000000)) +
             ((uVar13 * 0x8000 | uVar13 >> 0x11) ^ (uVar13 * 0x2000 | uVar13 >> 0x13) ^ uVar13 >> 10) + uVar8 + uVar15;
    iVar18 = uVar26 + 0xa4506ceb +
             ((uVar28 ^ uVar22) & uVar20 ^ uVar28) +
             ((uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 * 0x80 | uVar20 >> 0x19) ^
             (uVar20 >> 6 | uVar20 * 0x4000000)) + uVar15;
    uVar23 = uVar23 + iVar18;
    uVar21 = ((uVar29 | uVar24) & uVar27 | uVar29 & uVar24) +
             ((uVar24 >> 0xd | uVar24 * 0x80000) ^ (uVar24 * 0x400 | uVar24 >> 0x16) ^
             (uVar24 >> 2 | uVar24 * 0x40000000)) + iVar18;
    iVar18 = uVar28 + 0xbef9a3f7 +
             ((uVar20 ^ uVar22) & uVar23 ^ uVar22) +
             ((uVar17 * 0x4000 | uVar17 >> 0x12) ^ (uVar17 >> 7 | uVar17 * 0x2000000) ^ uVar17 >> 3) + uVar9 +
             ((uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 * 0x80 | uVar23 >> 0x19) ^
             (uVar23 >> 6 | uVar23 * 0x4000000)) +
             ((uVar14 * 0x8000 | uVar14 >> 0x11) ^ (uVar14 * 0x2000 | uVar14 >> 0x13) ^ uVar14 >> 10) + uVar16;
    uVar27 = uVar27 + iVar18;
    uVar26 = ((uVar24 | uVar21) & uVar29 | uVar24 & uVar21) +
             ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 * 0x400 | uVar21 >> 0x16) ^
             (uVar21 >> 2 | uVar21 * 0x40000000)) + iVar18;
    iVar18 = uVar22 + 0xc67178f2 +
             ((uVar20 ^ uVar23) & uVar27 ^ uVar20) +
             ((uVar19 * 0x4000 | uVar19 >> 0x12) ^ (uVar19 >> 7 | uVar19 * 0x2000000) ^ uVar19 >> 3) + uVar10 +
             ((uVar27 >> 0xb | uVar27 * 0x200000) ^ (uVar27 * 0x80 | uVar27 >> 0x19) ^
             (uVar27 >> 6 | uVar27 * 0x4000000)) +
             ((uVar15 * 0x8000 | uVar15 >> 0x11) ^ (uVar15 * 0x2000 | uVar15 >> 0x13) ^ uVar15 >> 10) + uVar17;
    *(param_1 + 0xc) = *(param_1 + 0xc) + uVar26;
    *(param_1 + 0x14) = *(param_1 + 0x14) + uVar24;
    *(param_1 + 0x10) = *(param_1 + 0x10) + uVar21;
    *(param_1 + 0x18) = *(param_1 + 0x18) + iVar18 + uVar29;
    *(param_1 + 0x1c) = *(param_1 + 0x1c) + uVar27;
    *(param_1 + 0x20) = *(param_1 + 0x20) + uVar23;
    *(param_1 + 0x24) = *(param_1 + 0x24) + uVar20;
    *(param_1 + 8) =
         ((uVar21 | uVar26) & uVar24 | uVar21 & uVar26) +
         ((uVar26 >> 0xd | uVar26 * 0x80000) ^ (uVar26 * 0x400 | uVar26 >> 0x16) ^ (uVar26 >> 2 | uVar26 * 0x40000000))
         + *(param_1 + 8) + iVar18;
    return 0;
}


/* fcn.0000a7a8 @ 0xa7a8 */

uint64_t __fastcall fcn.0000a7a8(uint8_t param_1,uint32_t param_2)

{
    uint32_t in_EAX;
    
    if (0x3f < param_1) {
        return 0;
    }
    if (param_1 < 0x20) {
        return CONCAT44(param_2 >> (param_1 & 0x1f),in_EAX >> (param_1 & 0x1f) | param_2 << 0x20 - (param_1 & 0x1f));
    }
    return param_2 >> (param_1 & 0x1f);
}


/* fcn.0000880b @ 0x880b */

uint __fastcall fcn.0000880b(int param_1,int param_2)

{
    uchar uVar1;
    uchar uVar2;
    uchar uVar3;
    uchar uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t *puVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint32_t *puVar15;
    int iVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    uint32_t uVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    uint32_t uVar27;
    uint32_t uVar28;
    uchar *puVar29;
    uint32_t uVar30;
    int iVar31;
    uint32_t uStack_310;
    uint32_t uStack_30c;
    uint32_t uStack_308;
    uint32_t uStack_304;
    uint32_t uStack_300;
    uint32_t uStack_2fc;
    uint32_t uStack_2f8;
    uint32_t uStack_2f4;
    uint32_t uStack_2f0;
    uint32_t uStack_2ec;
    uint32_t uStack_2e8;
    uint32_t uStack_2e4;
    uint32_t uStack_2e0;
    uint32_t uStack_2dc;
    uint32_t uStack_2d8;
    uint32_t uStack_2d4;
    int iStack_2d0;
    uint32_t auStack_2cc [17];
    uint32_t *puStack_288;
    uint32_t auStack_284 [28];
    uint32_t auStack_214 [4];
    uint32_t auStack_204 [129];
    
    puVar10 = param_1 + 8;
    puVar15 = auStack_2cc;
    iVar16 = 8;
    puStack_288 = puVar10;
    do {
        if (puVar15 != puVar10) {
            section..text(puVar15,puVar10,8);
        }
        puVar10 = puVar10 + 2;
        puVar15 = puVar15 + 2;
        iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    iVar16 = 0;
    puVar29 = param_2 + 2;
    do {
        uVar11 = CONCAT31(CONCAT21(CONCAT11(puVar29[-2],puVar29[-1]),*puVar29),puVar29[1]);
        uVar1 = puVar29[2];
        uVar2 = puVar29[3];
        uVar3 = puVar29[4];
        uVar4 = puVar29[5];
        auStack_284[iVar16 * 2 + 1] =
             ((puVar29[-2] << 8 | (uVar11 & 0xffffff) >> 0x10) << 8 | (uVar11 & 0xffff) >> 8) << 8 | puVar29[1];
        auStack_284[iVar16 * 2] = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4);
        iVar16 = iVar16 + 1;
        puVar29 = puVar29 + 8;
    } while (iVar16 < 0x10);
    puVar15 = auStack_214;
    uStack_308 = 0x40;
    do {
        uVar11 = puVar15[-0x1a];
        uVar17 = puVar15[-0x19];
        uVar18 = puVar15[1];
        uVar5 = (uVar11 >> 8 | uVar17 << 0x18) ^ (uVar11 >> 1 | uVar17 << 0x1f) ^ (uVar11 >> 7 | uVar17 << 0x19);
        uVar30 = (*puVar15 >> 0x13 | uVar18 << 0xd) ^ (uVar18 >> 0x1d | *puVar15 << 3) ^
                 (*puVar15 >> 6 | uVar18 << 0x1a);
        uVar6 = uVar5 + uVar30;
        uVar7 = uVar6 + puVar15[-0x1c];
        puVar15[4] = uVar7 + puVar15[-10];
        puVar15[5] = ((uVar11 << 0x18 | uVar17 >> 8) ^ (uVar11 << 0x1f | uVar17 >> 1) ^ uVar17 >> 7) +
                     ((*puVar15 << 0xd | uVar18 >> 0x13) ^ (uVar18 << 3 | *puVar15 >> 0x1d) ^ uVar18 >> 6) +
                     CARRY4(uVar5,uVar30) + puVar15[-0x1b] + CARRY4(uVar6,puVar15[-0x1c]) + puVar15[-9] +
                     CARRY4(uVar7,puVar15[-10]);
        puVar15 = puVar15 + 2;
        uStack_308 = uStack_308 + -1;
    } while (uStack_308 != 0);
    iVar16 = 0;
    uStack_2f0 = auStack_2cc[0xf];
    uStack_2f4 = auStack_2cc[0xe];
    uStack_300 = auStack_2cc[0xd];
    uStack_304 = auStack_2cc[0xc];
    uStack_308 = auStack_2cc[0xb];
    uStack_2d4 = auStack_2cc[10];
    uStack_2e8 = auStack_2cc[7];
    uStack_2ec = auStack_2cc[6];
    uStack_30c = auStack_2cc[5];
    uStack_310 = auStack_2cc[4];
    uStack_2e0 = auStack_2cc[3];
    uStack_2e4 = auStack_2cc[2];
    uStack_2d8 = auStack_2cc[1];
    iStack_2d0 = 0;
    uStack_2fc = auStack_2cc[9];
    uStack_2f8 = auStack_2cc[8];
    uStack_2dc = auStack_2cc[0];
    do {
        uVar17 = (uStack_2fc >> 9 | uStack_2f8 << 0x17) ^ (uStack_2f8 >> 0x12 | uStack_2fc << 0xe) ^
                 (uStack_2f8 >> 0xe | uStack_2fc << 0x12);
        uVar11 = (uStack_2d4 ^ uStack_304) & uStack_2f8 ^ uStack_304;
        uVar18 = uVar17 + uVar11;
        uVar5 = uVar18 + *(iStack_2d0 + 0xab70);
        uVar6 = uVar5 + *(auStack_284 + iStack_2d0);
        uVar7 = uVar6 + uStack_2f4;
        iVar31 = ((uStack_2fc << 0x17 | uStack_2f8 >> 9) ^ (uStack_2f8 << 0xe | uStack_2fc >> 0x12) ^
                 (uStack_2f8 << 0x12 | uStack_2fc >> 0xe)) + ((uStack_308 ^ uStack_300) & uStack_2fc ^ uStack_300) +
                 CARRY4(uVar17,uVar11) + *(iStack_2d0 + 0xab74) + CARRY4(uVar18,*(iStack_2d0 + 0xab70)) +
                 *(auStack_284 + iStack_2d0 + 4) + CARRY4(uVar5,*(auStack_284 + iStack_2d0)) + uStack_2f0 +
                 CARRY4(uVar6,uStack_2f4);
        uVar11 = uStack_2ec + uVar7;
        uVar17 = uStack_2e8 + iVar31 + CARRY4(uStack_2ec,uVar7);
        uVar18 = (uStack_2dc >> 0x1c | uStack_2d8 << 4) ^ (uStack_2d8 >> 2 | uStack_2dc << 0x1e) ^
                 (uStack_2d8 >> 7 | uStack_2dc << 0x19);
        uVar6 = (uStack_2e4 | uStack_2dc) & uStack_310 | uStack_2e4 & uStack_2dc;
        uVar5 = uVar18 + uVar6;
        uVar12 = uVar5 + uVar7;
        uVar8 = ((uStack_2dc << 4 | uStack_2d8 >> 0x1c) ^ (uStack_2d8 << 0x1e | uStack_2dc >> 2) ^
                (uStack_2d8 << 0x19 | uStack_2dc >> 7)) +
                ((uStack_2e0 | uStack_2d8) & uStack_30c | uStack_2e0 & uStack_2d8) + CARRY4(uVar18,uVar6) + iVar31 +
                CARRY4(uVar5,uVar7);
        uVar5 = (uVar17 >> 9 | uVar11 * 0x800000) ^ (uVar11 >> 0x12 | uVar17 * 0x4000) ^
                (uVar11 >> 0xe | uVar17 * 0x40000);
        uVar18 = (uStack_2d4 ^ uStack_2f8) & uVar11 ^ uStack_2d4;
        uVar6 = uVar5 + uVar18;
        uVar7 = uVar6 + *(iStack_2d0 + 0xab78);
        puVar15 = auStack_284 + iStack_2d0 + 8;
        uVar30 = uVar7 + *puVar15;
        uVar19 = uVar30 + uStack_304;
        iVar31 = ((uVar17 * 0x800000 | uVar11 >> 9) ^ (uVar11 * 0x4000 | uVar17 >> 0x12) ^
                 (uVar11 * 0x40000 | uVar17 >> 0xe)) + ((uStack_308 ^ uStack_2fc) & uVar17 ^ uStack_308) +
                 CARRY4(uVar5,uVar18) + *(iStack_2d0 + 0xab7c) + CARRY4(uVar6,*(iStack_2d0 + 0xab78)) +
                 *(auStack_284 + iStack_2d0 + 0xc) + CARRY4(uVar7,*puVar15) + uStack_300 + CARRY4(uVar30,uStack_304);
        uVar18 = uStack_310 + uVar19;
        uVar5 = uStack_30c + iVar31 + CARRY4(uStack_310,uVar19);
        uVar6 = (uVar12 >> 0x1c | uVar8 * 0x10) ^ (uVar8 >> 2 | uVar12 * 0x40000000) ^ (uVar8 >> 7 | uVar12 * 0x2000000)
        ;
        uVar30 = (uStack_2dc | uVar12) & uStack_2e4 | uStack_2dc & uVar12;
        uVar7 = uVar6 + uVar30;
        uVar13 = uVar7 + uVar19;
        uVar9 = ((uVar12 * 0x10 | uVar8 >> 0x1c) ^ (uVar8 * 0x40000000 | uVar12 >> 2) ^
                (uVar8 * 0x2000000 | uVar12 >> 7)) + ((uStack_2d8 | uVar8) & uStack_2e0 | uStack_2d8 & uVar8) +
                CARRY4(uVar6,uVar30) + iVar31 + CARRY4(uVar7,uVar19);
        uVar7 = (uVar5 >> 9 | uVar18 * 0x800000) ^ (uVar18 >> 0x12 | uVar5 * 0x4000) ^ (uVar18 >> 0xe | uVar5 * 0x40000)
        ;
        uVar6 = (uVar11 ^ uStack_2f8) & uVar18 ^ uStack_2f8;
        uVar30 = uVar7 + uVar6;
        uVar19 = uVar30 + *(iStack_2d0 + 0xab80);
        puVar15 = auStack_284 + iStack_2d0 + 0x10;
        uVar20 = uVar19 + *puVar15;
        uVar21 = uVar20 + uStack_2d4;
        iVar31 = ((uVar5 * 0x800000 | uVar18 >> 9) ^ (uVar18 * 0x4000 | uVar5 >> 0x12) ^
                 (uVar18 * 0x40000 | uVar5 >> 0xe)) + ((uVar17 ^ uStack_2fc) & uVar5 ^ uStack_2fc) +
                 CARRY4(uVar7,uVar6) + *(iStack_2d0 + 0xab84) + CARRY4(uVar30,*(iStack_2d0 + 0xab80)) +
                 *(auStack_284 + iStack_2d0 + 0x14) + CARRY4(uVar19,*puVar15) + uStack_308 + CARRY4(uVar20,uStack_2d4)
        ;
        uVar6 = uStack_2e4 + uVar21;
        uVar7 = uStack_2e0 + iVar31 + CARRY4(uStack_2e4,uVar21);
        uVar30 = (uVar13 >> 0x1c | uVar9 * 0x10) ^ (uVar9 >> 2 | uVar13 * 0x40000000) ^
                 (uVar9 >> 7 | uVar13 * 0x2000000);
        uVar20 = (uVar12 | uVar13) & uStack_2dc | uVar12 & uVar13;
        uVar19 = uVar30 + uVar20;
        uVar14 = uVar19 + uVar21;
        uVar21 = ((uVar13 * 0x10 | uVar9 >> 0x1c) ^ (uVar9 * 0x40000000 | uVar13 >> 2) ^
                 (uVar9 * 0x2000000 | uVar13 >> 7)) + ((uVar8 | uVar9) & uStack_2d8 | uVar8 & uVar9) +
                 CARRY4(uVar30,uVar20) + iVar31 + CARRY4(uVar19,uVar21);
        uVar19 = (uVar7 >> 9 | uVar6 * 0x800000) ^ (uVar6 >> 0x12 | uVar7 * 0x4000) ^ (uVar6 >> 0xe | uVar7 * 0x40000);
        uVar30 = (uVar18 ^ uVar11) & uVar6 ^ uVar11;
        uVar20 = uVar19 + uVar30;
        uVar22 = uVar20 + *(iStack_2d0 + 0xab88);
        puVar15 = auStack_284 + iStack_2d0 + 0x18;
        uVar23 = uVar22 + *puVar15;
        uVar24 = uVar23 + uStack_2f8;
        iVar31 = ((uVar7 * 0x800000 | uVar6 >> 9) ^ (uVar6 * 0x4000 | uVar7 >> 0x12) ^ (uVar6 * 0x40000 | uVar7 >> 0xe))
                 + ((uVar5 ^ uVar17) & uVar7 ^ uVar17) + CARRY4(uVar19,uVar30) + *(iStack_2d0 + 0xab8c) +
                 CARRY4(uVar20,*(iStack_2d0 + 0xab88)) + *(auStack_284 + iStack_2d0 + 0x1c) + CARRY4(uVar22,*puVar15)
                 + uStack_2fc + CARRY4(uVar23,uStack_2f8);
        uVar30 = uStack_2dc + uVar24;
        uVar19 = uStack_2d8 + iVar31 + CARRY4(uStack_2dc,uVar24);
        uVar20 = (uVar14 >> 0x1c | uVar21 * 0x10) ^ (uVar21 >> 2 | uVar14 * 0x40000000) ^
                 (uVar21 >> 7 | uVar14 * 0x2000000);
        uVar28 = (uVar14 | uVar13) & uVar12 | uVar14 & uVar13;
        uVar22 = uVar20 + uVar28;
        uVar23 = uVar22 + uVar24;
        uVar20 = ((uVar14 * 0x10 | uVar21 >> 0x1c) ^ (uVar21 * 0x40000000 | uVar14 >> 2) ^
                 (uVar21 * 0x2000000 | uVar14 >> 7)) + ((uVar21 | uVar9) & uVar8 | uVar21 & uVar9) +
                 CARRY4(uVar20,uVar28) + iVar31 + CARRY4(uVar22,uVar24);
        uVar24 = (uVar19 >> 9 | uVar30 * 0x800000) ^ (uVar30 >> 0x12 | uVar19 * 0x4000) ^
                 (uVar30 >> 0xe | uVar19 * 0x40000);
        uVar22 = (uVar18 ^ uVar6) & uVar30 ^ uVar18;
        uVar28 = uVar24 + uVar22;
        uVar25 = uVar28 + *(iStack_2d0 + 0xab90);
        puVar15 = auStack_284 + iStack_2d0 + 0x20;
        uVar26 = uVar25 + *puVar15;
        uVar27 = uVar26 + uVar11;
        iVar31 = ((uVar19 * 0x800000 | uVar30 >> 9) ^ (uVar30 * 0x4000 | uVar19 >> 0x12) ^
                 (uVar30 * 0x40000 | uVar19 >> 0xe)) + ((uVar5 ^ uVar7) & uVar19 ^ uVar5) + CARRY4(uVar24,uVar22) +
                 *(iStack_2d0 + 0xab94) + CARRY4(uVar28,*(iStack_2d0 + 0xab90)) + *(auStack_284 + iStack_2d0 + 0x24) +
                 CARRY4(uVar25,*puVar15) + uVar17 + CARRY4(uVar26,uVar11);
        uStack_2f4 = uVar12 + uVar27;
        auStack_2cc[0xe] = uStack_2f4;
        uStack_2f0 = uVar8 + iVar31 + CARRY4(uVar12,uVar27);
        auStack_2cc[0xf] = uStack_2f0;
        uVar11 = (uVar23 >> 0x1c | uVar20 * 0x10) ^ (uVar20 >> 2 | uVar23 * 0x40000000) ^
                 (uVar20 >> 7 | uVar23 * 0x2000000);
        uVar8 = (uVar14 | uVar23) & uVar13 | uVar14 & uVar23;
        uVar17 = uVar11 + uVar8;
        uStack_2ec = uVar17 + uVar27;
        uStack_2e8 = ((uVar23 * 0x10 | uVar20 >> 0x1c) ^ (uVar20 * 0x40000000 | uVar23 >> 2) ^
                     (uVar20 * 0x2000000 | uVar23 >> 7)) + ((uVar21 | uVar20) & uVar9 | uVar21 & uVar20) +
                     CARRY4(uVar11,uVar8) + iVar31 + CARRY4(uVar17,uVar27);
        auStack_2cc[6] = uStack_2ec;
        auStack_2cc[7] = uStack_2e8;
        uVar17 = (uStack_2f0 >> 9 | uStack_2f4 * 0x800000) ^ (uStack_2f4 >> 0x12 | uStack_2f0 * 0x4000) ^
                 (uStack_2f4 >> 0xe | uStack_2f0 * 0x40000);
        uVar11 = (uVar6 ^ uVar30) & uStack_2f4 ^ uVar6;
        uVar8 = uVar17 + uVar11;
        uVar12 = uVar8 + *(iStack_2d0 + 0xab98);
        puVar15 = auStack_284 + iStack_2d0 + 0x28;
        uVar22 = uVar12 + *puVar15;
        uVar24 = uVar22 + uVar18;
        iVar31 = ((uStack_2f0 * 0x800000 | uStack_2f4 >> 9) ^ (uStack_2f4 * 0x4000 | uStack_2f0 >> 0x12) ^
                 (uStack_2f4 * 0x40000 | uStack_2f0 >> 0xe)) + ((uVar7 ^ uVar19) & uStack_2f0 ^ uVar7) +
                 CARRY4(uVar17,uVar11) + *(iStack_2d0 + 0xab9c) + CARRY4(uVar8,*(iStack_2d0 + 0xab98)) +
                 *(auStack_284 + iStack_2d0 + 0x2c) + CARRY4(uVar12,*puVar15) + uVar5 + CARRY4(uVar22,uVar18);
        uStack_304 = uVar13 + uVar24;
        auStack_2cc[0xc] = uStack_304;
        uStack_300 = uVar9 + iVar31 + CARRY4(uVar13,uVar24);
        auStack_2cc[0xd] = uStack_300;
        uVar11 = (uStack_2ec >> 0x1c | uStack_2e8 * 0x10) ^ (uStack_2e8 >> 2 | uStack_2ec * 0x40000000) ^
                 (uStack_2e8 >> 7 | uStack_2ec * 0x2000000);
        uVar18 = (uStack_2ec | uVar23) & uVar14 | uStack_2ec & uVar23;
        uVar17 = uVar11 + uVar18;
        uStack_310 = uVar17 + uVar24;
        uStack_30c = ((uStack_2ec * 0x10 | uStack_2e8 >> 0x1c) ^ (uStack_2e8 * 0x40000000 | uStack_2ec >> 2) ^
                     (uStack_2e8 * 0x2000000 | uStack_2ec >> 7)) +
                     ((uStack_2e8 | uVar20) & uVar21 | uStack_2e8 & uVar20) + CARRY4(uVar11,uVar18) + iVar31 +
                     CARRY4(uVar17,uVar24);
        auStack_2cc[4] = uStack_310;
        auStack_2cc[5] = uStack_30c;
        uVar17 = (uStack_300 >> 9 | uStack_304 * 0x800000) ^ (uStack_304 >> 0x12 | uStack_300 * 0x4000) ^
                 (uStack_304 >> 0xe | uStack_300 * 0x40000);
        uVar11 = (uVar30 ^ uStack_2f4) & uStack_304 ^ uVar30;
        uVar18 = uVar17 + uVar11;
        uVar5 = uVar18 + *(iStack_2d0 + 0xaba0);
        puVar15 = auStack_284 + iStack_2d0 + 0x30;
        uVar8 = uVar5 + *puVar15;
        uVar9 = uVar8 + uVar6;
        iVar31 = ((uStack_300 * 0x800000 | uStack_304 >> 9) ^ (uStack_304 * 0x4000 | uStack_300 >> 0x12) ^
                 (uStack_304 * 0x40000 | uStack_300 >> 0xe)) + ((uVar19 ^ uStack_2f0) & uStack_300 ^ uVar19) +
                 CARRY4(uVar17,uVar11) + *(iStack_2d0 + 0xaba4) + CARRY4(uVar18,*(iStack_2d0 + 0xaba0)) +
                 *(auStack_284 + iStack_2d0 + 0x34) + CARRY4(uVar5,*puVar15) + uVar7 + CARRY4(uVar8,uVar6);
        uStack_2d4 = uVar14 + uVar9;
        auStack_2cc[10] = uStack_2d4;
        uStack_308 = uVar21 + iVar31 + CARRY4(uVar14,uVar9);
        auStack_2cc[0xb] = uStack_308;
        uVar11 = (uStack_310 >> 0x1c | uStack_30c * 0x10) ^ (uStack_30c >> 2 | uStack_310 * 0x40000000) ^
                 (uStack_30c >> 7 | uStack_310 * 0x2000000);
        uVar18 = (uStack_310 | uStack_2ec) & uVar23 | uStack_310 & uStack_2ec;
        uVar17 = uVar11 + uVar18;
        uStack_2e4 = uVar17 + uVar9;
        uStack_2e0 = ((uStack_310 * 0x10 | uStack_30c >> 0x1c) ^ (uStack_30c * 0x40000000 | uStack_310 >> 2) ^
                     (uStack_30c * 0x2000000 | uStack_310 >> 7)) +
                     ((uStack_30c | uStack_2e8) & uVar20 | uStack_30c & uStack_2e8) + CARRY4(uVar11,uVar18) + iVar31 +
                     CARRY4(uVar17,uVar9);
        auStack_2cc[2] = uStack_2e4;
        auStack_2cc[3] = uStack_2e0;
        uVar17 = (uStack_308 >> 9 | uStack_2d4 * 0x800000) ^ (uStack_2d4 >> 0x12 | uStack_308 * 0x4000) ^
                 (uStack_2d4 >> 0xe | uStack_308 * 0x40000);
        uVar11 = (uStack_2f4 ^ uStack_304) & uStack_2d4 ^ uStack_2f4;
        uVar18 = uVar17 + uVar11;
        uVar5 = uVar18 + *(iStack_2d0 + 0xaba8);
        puVar15 = auStack_284 + iStack_2d0 + 0x38;
        uVar6 = uVar5 + *puVar15;
        uVar7 = uVar6 + uVar30;
        iVar31 = ((uStack_308 * 0x800000 | uStack_2d4 >> 9) ^ (uStack_2d4 * 0x4000 | uStack_308 >> 0x12) ^
                 (uStack_2d4 * 0x40000 | uStack_308 >> 0xe)) + ((uStack_2f0 ^ uStack_300) & uStack_308 ^ uStack_2f0) +
                 CARRY4(uVar17,uVar11) + *(iStack_2d0 + 0xabac) + CARRY4(uVar18,*(iStack_2d0 + 0xaba8)) +
                 *(auStack_284 + iStack_2d0 + 0x3c) + CARRY4(uVar5,*puVar15) + uVar19 + CARRY4(uVar6,uVar30);
        uStack_2f8 = uVar23 + uVar7;
        auStack_2cc[8] = uStack_2f8;
        uStack_2fc = uVar20 + iVar31 + CARRY4(uVar23,uVar7);
        auStack_2cc[9] = uStack_2fc;
        uVar11 = (uStack_2e4 >> 0x1c | uStack_2e0 * 0x10) ^ (uStack_2e0 >> 2 | uStack_2e4 * 0x40000000) ^
                 (uStack_2e0 >> 7 | uStack_2e4 * 0x2000000);
        uVar18 = (uStack_310 | uStack_2e4) & uStack_2ec | uStack_310 & uStack_2e4;
        uVar17 = uVar11 + uVar18;
        uStack_2dc = uVar17 + uVar7;
        uStack_2d8 = ((uStack_2e4 * 0x10 | uStack_2e0 >> 0x1c) ^ (uStack_2e0 * 0x40000000 | uStack_2e4 >> 2) ^
                     (uStack_2e0 * 0x2000000 | uStack_2e4 >> 7)) +
                     ((uStack_30c | uStack_2e0) & uStack_2e8 | uStack_30c & uStack_2e0) + CARRY4(uVar11,uVar18) +
                     iVar31 + CARRY4(uVar17,uVar7);
        auStack_2cc[0] = uStack_2dc;
        auStack_2cc[1] = uStack_2d8;
        iStack_2d0 = iStack_2d0 + 0x40;
    } while (iStack_2d0 < 0x280);
    do {
        uVar17 = auStack_2cc[iVar16 * 2];
        uVar11 = *puStack_288;
        *puStack_288 = *puStack_288 + uVar17;
        puStack_288[1] = puStack_288[1] + auStack_2cc[iVar16 * 2 + 1] + CARRY4(uVar11,uVar17);
        iVar16 = iVar16 + 1;
        puStack_288 = puStack_288 + 2;
    } while (iVar16 < 8);
    return 0;
}


/* fcn.00001bba @ 0x1bba */

uint32_t __fastcall fcn.00001bba(int16_t *param_1)

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


/* fcn.0000a3b0 @ 0xa3b0 */

void __cdecl fcn.0000a3b0(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h)

{
    fcn.00009880(arg_10h,arg_14h,&arg_18h);
    return;
}


/* fcn.00009836 @ 0x9836 */

uchar * __cdecl fcn.00009836(int32_t arg_8h,int32_t arg_ch)

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
        *in_ECX = *(var_ch + 0xb1d0);
    } while (arg_8h != 0 || arg_ch != 0);
    return in_ECX;
}


/* fcn.00009802 @ 0x9802 */

uchar * __cdecl fcn.00009802(int arg_8h,int32_t arg_ch,int arg_10h)

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


/* fcn.00001b0c @ 0x1b0c */

int fcn.00001b0c(void)

{
    int iVar1;
    int extraout_EDX;
    
    iVar1 = fcn.00001ad3();
    if (iVar1 == 0) {
        return 0;
    }
    fcn.00001b51();
    return extraout_EDX + 0x18;
}


/* fcn.0000a5a1 @ 0xa5a1 */

uint fcn.0000a5a1(void)

{
    int iVar1;
    uint uVar2;
    
    uVar2 = 0;
    fcn.00001a5b();
    iVar1 = fcn.00001aa7();
    if (iVar1 != 0) {
        uVar2 = *(iVar1 + 0x18);
    }
    return uVar2;
}


