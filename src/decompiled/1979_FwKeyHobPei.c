// decompiled by r2ghidra: 1979_FwKeyHobPei.pe32
// functions: 652

/* fcn.000128df @ 0x128df */

//WARNING: Removing unreachable block (ram,0x0001290c)
//WARNING: Removing unreachable block (ram,0x00012926)
//WARNING: Removing unreachable block (ram,0x00012942)

uint __cdecl fcn.000128df(int32_t arg_8h,int32_t arg_ch)

{
    uint uVar1;
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_8h;
    
    if ((**arg_ch == 0x20494550) && ((*arg_ch)[1] == 0x56524553)) {
        *0x15308 = 1;
        *0x15358 = arg_ch;
        fcn.000227f1(0);
        uVar1 = fcn.0001211f(*0x15358);
    }
    else {
        uVar1 = 0x80000003;
    }
    return uVar1;
}


/* entry0 @ 0x12870 */

//WARNING: Removing unreachable block (ram,0x0001290c)
//WARNING: Removing unreachable block (ram,0x00012926)
//WARNING: Removing unreachable block (ram,0x00012942)

uint __cdecl entry0(int32_t arg_8h,int32_t arg_ch)

{
    uint uVar1;
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_8h;
    
    if ((**arg_ch == 0x20494550) && ((*arg_ch)[1] == 0x56524553)) {
        *0x15308 = 1;
        *0x15358 = arg_ch;
        fcn.000227f1(0);
        uVar1 = fcn.0001211f(*0x15358);
    }
    else {
        uVar1 = 0x80000003;
    }
    return uVar1;
}


/* fcn.000102eb @ 0x102eb */

void __cdecl fcn.000102eb(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    code *pcVar1;
    uchar auStack_108 [260];
    
    fcn.0001035c(auStack_108,0x100,0x1476c,*0x15228,arg_8h,arg_ch,arg_10h);
    fcn.000112ac();
    fcn.000113ba();
    if ((*0x14428 & 0x10) != 0) {
        pcVar1 = swi(3);
        (*pcVar1)();
        return;
    }
    if ((*0x14428 & 0x20) != 0) {
        do {
        } while( true );
    }
    return;
}


/* fcn.0001035c @ 0x1035c */

void fcn.0001035c(uint param_1,uint param_2,int32_t param_3)

{
    fcn.0001041c(0,param_3,&stack0x00000010);
    return;
}


/* fcn.0001041c @ 0x1041c */

uint32_t __cdecl fcn.0001041c(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    uint16_t uVar1;
    int32_t arg_18h;
    uint32_t uVar2;
    int32_t *piVar3;
    uint32_t uVar4;
    uint16_t *puVar5;
    int iVar6;
    uint32_t *puVar7;
    uint32_t in_ECX;
    int iVar8;
    uint32_t in_EDX;
    int iVar9;
    int arg_ch_00;
    uint8_t *puVar10;
    uint32_t *puVar11;
    bool bVar12;
    bool bVar13;
    uint8_t uStack_89;
    uint32_t uStack_88;
    uint32_t *puStack_84;
    uint16_t *puStack_78;
    uint32_t uStack_74;
    uint32_t uStack_70;
    uint32_t uStack_6c;
    uint32_t uStack_68;
    uint32_t uStack_64;
    uint32_t uStack_5c;
    uint32_t uStack_58;
    uint32_t uStack_54;
    uint32_t uStack_50;
    uint32_t uStack_4c;
    int iStack_48;
    uint32_t uStack_44;
    uint32_t uStack_40;
    uint32_t uStack_3c;
    uint32_t uStack_38;
    uint32_t uStack_34;
    uint32_t auStack_30 [11];
    
    puStack_78 = NULL;
    if (in_EDX == 0) {
        if ((arg_8h & 0x2000U) != 0) goto code_r0x0001048d;
code_r0x000104b9:
        uStack_54 = arg_8h & 0x2000;
        if ((arg_8h & 0x40U) == 0) {
            if (*0x14414 != 0) {
                if ((*0x14428 & 1) != 0) {
                    if (in_EDX <= *0x14414) goto code_r0x0001053a;
                    fcn.000102eb(0x14a20,0x252,0x14a90);
                }
                if (*0x14414 < in_EDX) goto code_r0x0001047b;
            }
code_r0x0001053a:
            uStack_68 = 1;
        }
        else {
            if (*0x14410 != 0) {
                if ((*0x14428 & 1) != 0) {
                    if (in_EDX <= *0x14410) goto code_r0x000104f2;
                    fcn.000102eb(0x14a20,0x24d,0x14af0);
                }
                if (*0x14410 < in_EDX) goto code_r0x0001047b;
            }
code_r0x000104f2:
            uStack_68 = 2;
        }
        uVar2 = *0x14414;
        if ((arg_8h & 0x100U) == 0) {
            if (*0x14414 != 0) {
                if ((*0x14428 & 1) != 0) {
                    uVar4 = fcn.00011393();
                    if (uVar2 < uVar4) {
                        fcn.000102eb(0x14a20,0x263,0x14bc8);
                        uVar2 = *0x14414;
                    }
                }
                uVar4 = fcn.00011393();
                if (uVar2 < uVar4) goto code_r0x0001047b;
            }
            uStack_50 = 0xff;
            iVar9 = 1;
        }
        else {
            if (*0x14410 != 0) {
                if (((*0x14428 & 1) != 0) && (uVar2 = fcn.00011341(), *0x14410 < uVar2)) {
                    fcn.000102eb(0x14a20,0x25d,0x14b38);
                }
                uVar2 = fcn.00011341();
                if (*0x14410 < uVar2) goto code_r0x0001047b;
            }
            iVar9 = 2;
            uStack_50 = 0xffff;
        }
        if (uStack_54 == 0) {
            if (in_EDX == 0) goto code_r0x0001047b;
        }
        else {
            in_ECX = -(in_EDX != 0) & in_ECX;
        }
        uStack_6c = 0;
        uStack_5c = 0;
        uStack_38 = 0;
        if (in_ECX != 0) {
            uStack_38 = in_ECX;
            uStack_5c = (in_EDX - 1) * uStack_68 + in_ECX;
        }
        uStack_88 = in_ECX;
code_r0x000110bb:
        if (iVar9 == 1) {
            uVar2 = 0;
        }
        else {
            uVar2 = *(arg_ch + 1) << 8;
        }
        uStack_4c = (*arg_ch | uVar2) & uStack_50;
        if ((uStack_4c != 0) && ((uStack_88 == 0 || (uStack_88 < uStack_5c)))) {
            uStack_40 = 0;
            arg_8h = arg_8h & 0x2140;
            uStack_64 = 0;
            uStack_44 = 0;
            uStack_74 = 1;
            uStack_89 = 0;
            bVar13 = false;
            bVar12 = false;
            uStack_70 = arg_8h;
            if (uStack_4c == 10) goto code_r0x0001093b;
            if (uStack_4c == 0xd) {
                puVar10 = arg_ch + iVar9;
                if (iVar9 == 1) {
                    uVar2 = 0;
                }
                else {
                    uVar2 = puVar10[1] << 8;
                }
                uStack_4c = (*puVar10 | uVar2) & uStack_50;
                if (uStack_4c == 10) goto code_r0x00010928;
                goto code_r0x00010d88;
            }
            puVar10 = arg_ch;
            if (uStack_4c == 0x25) {
code_r0x000106d9:
code_r0x000106dd:
                arg_ch = puVar10 + iVar9;
                if (iVar9 == 1) {
                    uVar2 = 0;
                }
                else {
                    uVar2 = *(arg_ch + 1) << 8;
                }
                uStack_4c = (*arg_ch | uVar2) & uStack_50;
                if (uStack_4c < 0x2e) {
                    if (uStack_4c == 0x2d) {
                        arg_8h = arg_8h | 1;
                        goto code_r0x00010865;
                    }
                    if (uStack_4c == 0) {
                        uStack_74 = 0;
                        arg_ch = puVar10;
                        goto code_r0x00010878;
                    }
                    if (uStack_4c == 0x20) {
                        arg_8h = arg_8h | 4;
                        goto code_r0x00010865;
                    }
                    if (uStack_4c != 0x2a) {
                        if (uStack_4c == 0x2b) {
                            arg_8h = arg_8h | 2;
                        }
                        else {
                            if (uStack_4c != 0x2c) goto code_r0x00010878;
                            arg_8h = arg_8h | 8;
                        }
                        goto code_r0x00010865;
                    }
                    if ((arg_8h & 0x800U) == 0) {
                        arg_8h = arg_8h | 0x200;
                        if (puStack_78 == NULL) {
                            puVar5 = arg_10h + 4;
                            arg_10h = puVar5;
                        }
                        else {
                            puVar5 = puStack_78 + 2;
                            puStack_78 = puVar5;
                        }
                        uStack_40 = *(puVar5 + -2);
                        puVar10 = arg_ch;
                        uStack_70 = arg_8h;
                    }
                    else {
                        if (puStack_78 == NULL) {
                            puVar5 = arg_10h + 4;
                            arg_10h = puVar5;
                        }
                        else {
                            puVar5 = puStack_78 + 2;
                            puStack_78 = puVar5;
                        }
                        uStack_74 = *(puVar5 + -2);
                        puVar10 = arg_ch;
                    }
                    goto code_r0x000106d9;
                }
                if (uStack_4c == 0x2e) {
                    arg_8h = arg_8h | 0x800;
                    goto code_r0x00010865;
                }
                if (uStack_4c == 0x30) {
                    if ((arg_8h & 0x800U) == 0) {
                        arg_8h = arg_8h | 0x20;
                        uStack_70 = arg_8h;
                    }
                }
                else {
                    if (uStack_4c < 0x31) goto code_r0x00010878;
                    if (0x39 < uStack_4c) goto code_r0x000107c9;
                }
                uVar2 = 0;
                uStack_64 = 0;
                if (0x2f < uStack_4c) {
                    do {
                        if (0x39 < uStack_4c) break;
                        arg_ch = arg_ch + iVar9;
                        uVar2 = (uStack_4c - 0x30) + uVar2 * 10;
                        if (iVar9 == 1) {
                            uVar4 = 0;
                        }
                        else {
                            uVar4 = *(arg_ch + 1) << 8;
                        }
                        uStack_4c = (*arg_ch | uVar4) & uStack_50;
                    } while (0x2f < uStack_4c);
                    arg_8h = uStack_70;
                    uStack_64 = uVar2;
                }
                puVar10 = arg_ch + -iVar9;
                if ((arg_8h & 0x800U) == 0) {
                    arg_8h = arg_8h | 0x200;
                    uStack_40 = uStack_64;
                    uStack_70 = arg_8h;
                }
                else {
                    uStack_74 = uStack_64;
                }
                goto code_r0x000106dd;
            }
            goto code_r0x000106c2;
        }
        if ((arg_8h & 0x2000U) == 0) {
            if (((*0x14428 & 1) != 0) && (uStack_88 == 0)) {
                fcn.000102eb(0x14a20,0x4c1,0x14784);
            }
            fcn.00010379(1,0,uStack_68);
            uStack_6c = (uStack_88 - uStack_38) / uStack_68;
        }
        else {
            uStack_6c = uStack_6c / uStack_68;
        }
    }
    else {
        if ((arg_8h & 0x2000U) == 0) {
            if ((*0x14428 & 1) != 0) {
                if (in_ECX != 0) goto code_r0x0001048d;
                fcn.000102eb(0x14a20,0x23c,0x14a70);
            }
            if (in_ECX != 0) goto code_r0x0001048d;
        }
        else {
code_r0x0001048d:
            if ((*0x14428 & 1) != 0) {
                if (arg_ch != 0) goto code_r0x000104b9;
                fcn.000102eb(0x14a20,0x244,0x14ad4);
            }
            if (arg_ch != 0) goto code_r0x000104b9;
        }
code_r0x0001047b:
        uStack_6c = 0;
    }
    return uStack_6c;
code_r0x000107c9:
    if ((uStack_4c != 0x4c) && (uStack_4c != 0x6c)) goto code_r0x00010878;
    arg_8h = arg_8h | 0x10;
code_r0x00010865:
    puVar10 = arg_ch;
    uStack_70 = arg_8h;
    goto code_r0x000106d9;
code_r0x00010878:
    uVar2 = arg_8h;
    puVar10 = arg_ch;
    if (uStack_4c < 0x68) {
        if (uStack_4c != 0x67) {
            if (uStack_4c == 10) {
code_r0x0001093b:
                puVar10 = arg_ch + iVar9;
                puVar11 = 0x14ccc;
                puStack_84 = 0x14ccc;
                if (iVar9 == 1) {
                    uVar2 = 0;
                }
                else {
                    uVar2 = puVar10[1] << 8;
                }
                uStack_4c = (*puVar10 | uVar2) & uStack_50;
                if (uStack_4c == 0xd) goto code_r0x00010a20;
code_r0x00010d91:
                puVar10 = arg_ch;
                goto code_r0x00010a20;
            }
            if (uStack_4c == 0xd) {
                puVar10 = arg_ch + iVar9;
                if (iVar9 == 1) {
                    uVar2 = 0;
                }
                else {
                    uVar2 = puVar10[1] << 8;
                }
                uStack_4c = (*puVar10 | uVar2) & uStack_50;
                if (uStack_4c == 10) {
code_r0x00010928:
                    puStack_84 = 0x14ccc;
                    arg_ch = puVar10;
                    goto code_r0x00010af2;
                }
code_r0x00010d88:
                puVar11 = 0x14cd0;
                puStack_84 = 0x14cd0;
                goto code_r0x00010d91;
            }
            if (uStack_4c == 0x53) goto code_r0x00010afb;
            if (uStack_4c == 0x58) goto code_r0x00010bd0;
            if (uStack_4c == 0x61) goto code_r0x00010b05;
            if (uStack_4c == 99) {
                if (puStack_78 == NULL) {
                    uVar1 = *arg_10h;
                    arg_10h = arg_10h + 4;
                }
                else {
                    uVar1 = *puStack_78;
                    puStack_78 = puStack_78 + 2;
                }
                uStack_3c = uVar1;
                puStack_84 = &uStack_3c;
                goto code_r0x000106c6;
            }
            if (uStack_4c != 100) goto code_r0x000106c2;
            goto code_r0x00010be6;
        }
        if (puStack_78 == NULL) {
            piVar3 = *arg_10h;
            arg_10h = arg_10h + 4;
        }
        else {
            piVar3 = *puStack_78;
            puStack_78 = puStack_78 + 2;
        }
        if (piVar3 == NULL) {
            puStack_84 = 0x14c5c;
code_r0x00010af2:
            puVar11 = puStack_84;
            puVar10 = arg_ch;
            goto code_r0x00010a20;
        }
        arg_18h = *piVar3;
        fcn.00011318();
        fcn.00011318();
        fcn.00011141(auStack_30,0x26,0,0x14c68,arg_18h);
        puStack_84 = auStack_30;
code_r0x00010a1d:
        puVar11 = puStack_84;
    }
    else {
        if (uStack_4c == 0x70) {
            arg_8h = arg_8h & 0xffffffc9;
code_r0x00010bd0:
            arg_8h = arg_8h | 0x20;
code_r0x00010bd3:
            uVar2 = arg_8h | 0x80;
code_r0x00010bd9:
            if (-1 < uVar2) {
                uVar2 = uVar2 & 0xfffffffd | 0x4000;
            }
code_r0x00010be6:
            if ((uVar2 & 0x10) == 0) {
                if (puStack_78 == NULL) {
                    puVar5 = arg_10h + 4;
                    arg_10h = puVar5;
                }
                else {
                    puVar5 = puStack_78 + 2;
                    puStack_78 = puVar5;
                }
                iVar8 = *(puVar5 + -2);
                arg_ch_00 = iVar8 >> 0x1f;
            }
            else {
                if (puStack_78 == NULL) {
                    puVar5 = arg_10h + 8;
                    arg_10h = puVar5;
                }
                else {
                    puVar5 = puStack_78 + 4;
                    puStack_78 = puVar5;
                }
                arg_ch_00 = *(puVar5 + -2);
                iVar8 = *(puVar5 + -4);
            }
            uStack_89 = (uVar2 & 4) << 3;
            if ((uVar2 & 2) != 0) {
                uStack_89 = 0x2b;
            }
            bVar13 = (uVar2 & 8) != 0;
            if (uVar2 < '\0') {
                bVar13 = false;
                if ((((uVar2 & 0x10) == 0) && (arg_ch_00 < 1)) && (arg_ch_00 < 0)) {
code_r0x00010cac:
                    arg_ch_00 = 0;
                }
            }
            else {
                if ((uVar2 & 8) != 0) {
                    uVar2 = uVar2 & 0xffffffdf;
                    uStack_74 = 1;
                }
                if (((arg_ch_00 < 1) && (arg_ch_00 < 0)) && ((uVar2 & 0x4000) == 0)) {
                    uStack_89 = 0x2d;
                    bVar12 = iVar8 != 0;
                    iVar8 = -iVar8;
                    arg_ch_00 = -(arg_ch_00 + bVar12);
                }
                else if ((uVar2 & 0x4010) == 0x4000) goto code_r0x00010cac;
            }
            iVar6 = fcn.000103ad(iVar8,arg_ch_00);
            uStack_64 = iVar6 - auStack_30;
            if (iVar8 == 0 && arg_ch_00 == 0) {
                uStack_64 = uStack_64 & -(uStack_74 != 0);
            }
            puStack_84 = auStack_30 + uStack_64;
            uStack_44 = uStack_64 % 3;
            if (uStack_44 != 0) {
                uStack_44 = 3 - uStack_44;
            }
            if ((bVar13) && (uStack_64 != 0)) {
                uStack_64 = uStack_64 + (uStack_64 - 1) / 3;
            }
            if (uStack_89 != 0) {
                uStack_64 = uStack_64 + 1;
                uStack_74 = uStack_74 + 1;
            }
            arg_8h = uVar2 | 0x1000;
            bVar12 = true;
            uStack_70 = arg_8h;
            if ((uVar2 & 0xa21) == 0x220) {
                uStack_74 = uStack_40;
            }
            goto code_r0x00010a1d;
        }
        if (uStack_4c != 0x72) {
            if (uStack_4c == 0x73) {
code_r0x00010afb:
                arg_8h = arg_8h | 0x400;
                uStack_70 = arg_8h;
code_r0x00010b05:
                if (puStack_78 == NULL) {
                    puStack_84 = *arg_10h;
                    arg_10h = arg_10h + 4;
                }
                else {
                    puStack_84 = *puStack_78;
                    puStack_78 = puStack_78 + 2;
                }
                if (puStack_84 == NULL) {
                    arg_8h = arg_8h & 0xfffffbff;
                    puStack_84 = 0x14c4c;
                    uStack_70 = arg_8h;
                }
                uStack_74 = uStack_74 & -((arg_8h & 0x800U) != 0);
                puVar11 = puStack_84;
                goto code_r0x00010a20;
            }
            if (uStack_4c == 0x74) {
                if (puStack_78 == NULL) {
                    puVar5 = arg_10h + 4;
                    arg_10h = puVar5;
                }
                else {
                    puVar5 = puStack_78 + 2;
                    puStack_78 = puVar5;
                }
                if (*(puVar5 + -2) == 0) {
                    puStack_84 = 0x14c9c;
                }
                else {
                    fcn.00011141(auStack_30,0x26,0,0x14ca8,*(*(puVar5 + -2) + 2));
                    puStack_84 = auStack_30;
                }
                goto code_r0x00010af2;
            }
            if (uStack_4c != 0x75) {
                if (uStack_4c != 0x78) {
code_r0x000106c2:
                    puStack_84 = &uStack_4c;
code_r0x000106c6:
                    arg_8h = arg_8h | 0x400;
                    puVar11 = puStack_84;
                    puVar10 = arg_ch;
                    uStack_70 = arg_8h;
                    goto code_r0x00010a20;
                }
                goto code_r0x00010bd3;
            }
            goto code_r0x00010bd9;
        }
        if (puStack_78 == NULL) {
            puVar5 = arg_10h + 4;
            arg_10h = puVar5;
        }
        else {
            puVar5 = puStack_78 + 2;
            puStack_78 = puVar5;
        }
        uVar2 = *(puVar5 + -2);
        puStack_84 = auStack_30;
        if (uVar2 < 0) {
            if ((uVar2 & 0x7fffffff) - 1 < 0x21) {
                puStack_84 = *(uVar2 * 4 + 0x14cf4);
                goto code_r0x00010ba1;
            }
        }
        else if (uVar2 < 6) {
            puStack_84 = *(uVar2 * 4 + 0x14ce0);
code_r0x00010ba1:
            puVar11 = puStack_84;
            if (puStack_84 != auStack_30) goto code_r0x00010a20;
        }
        fcn.00011141(auStack_30,0x26,0,0x14cc4,uVar2);
        puVar11 = puStack_84;
    }
code_r0x00010a20:
    arg_ch = puVar10;
    uVar2 = arg_8h & 0x400;
    iStack_48 = (uVar2 != 0) + 1;
    uVar4 = (-(uVar2 != 0) & 0xff00) + 0xff;
    if ((arg_8h & 0x1000U) == 0) {
        uStack_64 = 0;
        while ((((*puVar11 != '\0' || ((uVar2 != 0 && (*(puVar11 + 1) != '\0')))) &&
                ((uStack_64 < uStack_74 || ((arg_8h & 0x800U) == 0)))) &&
               ((uVar4 & CONCAT11(*(puVar11 + 1),*puVar11)) != 0))) {
            uStack_64 = uStack_64 + 1;
            puVar11 = puVar11 + iStack_48;
        }
        puVar11 = puStack_84;
    }
    else {
        iStack_48 = -iStack_48;
    }
    if (uStack_74 < uStack_64) {
        uStack_74 = uStack_64;
    }
    uStack_34 = arg_8h & 0x201U;
    if ((arg_8h & 0x201U) == 0x200) {
        uStack_6c = uStack_6c + (uStack_40 - uStack_74) * uStack_68;
        if (((arg_8h & 0x2000U) == 0) && (uStack_88 != 0)) {
            uStack_88 = fcn.00010379(uStack_40 - uStack_74,0x20,uStack_68);
        }
    }
    if (bVar12) {
        if (((uStack_89 != 0) && (uStack_6c = uStack_6c + uStack_68, (arg_8h & 0x2000U) == 0)) && (uStack_88 != 0)) {
            uStack_88 = fcn.00010379(1,uStack_89,uStack_68);
        }
        iVar8 = uStack_74 - uStack_64;
        uStack_6c = uStack_6c + iVar8 * uStack_68;
        if (((arg_8h & 0x2000U) != 0) || (uStack_88 == 0)) goto code_r0x00010f6a;
        uVar2 = 0x30;
    }
    else {
        uStack_6c = uStack_6c + (uStack_74 - uStack_64) * uStack_68;
        if (((arg_8h & 0x2000U) == 0) && (uStack_88 != 0)) {
            uStack_88 = fcn.00010379(uStack_74 - uStack_64,0x20,uStack_68);
        }
        if (((uStack_89 == 0) || (uStack_6c = uStack_6c + uStack_68, (arg_8h & 0x2000U) != 0)) || (uStack_88 == 0))
        goto code_r0x00010f6a;
        uVar2 = uStack_89;
        iVar8 = 1;
    }
    uStack_88 = fcn.00010379(iVar8,uVar2,uStack_68);
code_r0x00010f6a:
    uStack_58 = arg_8h & 0x2000;
    puStack_84 = uStack_89 != 0;
    if (puStack_84 < uStack_64) {
        do {
            if ((*puVar11 == '\0') && ((iStack_48 < 2 || (*(puVar11 + 1) == '\0')))) break;
            uStack_6c = uStack_6c + uStack_68;
            if ((uStack_58 == 0) && (uStack_88 != 0)) {
                uStack_88 = fcn.00010379(1,CONCAT11(*(puVar11 + 1),*puVar11) & uVar4,uStack_68);
            }
            puVar11 = puVar11 + iStack_48;
            puVar7 = puStack_84 + 1;
            if ((bVar13) && (uStack_44 = uStack_44 + 1, uStack_44 == 3)) {
                uStack_44 = 0;
                puVar7 = puStack_84 + 2;
                if (uStack_64 <= puVar7) break;
                uStack_6c = uStack_6c + uStack_68;
                if ((uStack_58 == 0) && (uStack_88 != 0)) {
                    uStack_88 = fcn.00010379(1,0x2c,uStack_68);
                }
            }
            puStack_84 = puVar7;
        } while (puStack_84 < uStack_64);
        arg_8h = uStack_70;
    }
    if (uStack_34 == 0x201) {
        uStack_6c = uStack_6c + (uStack_40 - uStack_74) * uStack_68;
        if ((uStack_58 == 0) && (uStack_88 != 0)) {
            uStack_88 = fcn.00010379(uStack_40 - uStack_74,0x20,uStack_68);
        }
    }
    arg_ch = arg_ch + iVar9;
    goto code_r0x000110bb;
}


/* fcn.000112ac @ 0x112ac */

uint32_t __fastcall fcn.000112ac(char *param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    if (((*0x14428 & 1) != 0) && (param_1 == NULL)) {
        fcn.000102eb(0x14e18,0x434,0x14e00);
    }
    uVar2 = 0;
    if (*param_1 != '\0') {
        uVar1 = *0x14414;
        do {
            if (((uVar1 != 0) && ((*0x14428 & 1) != 0)) && (uVar1 <= uVar2)) {
                fcn.000102eb(0x14e18,0x43c,0x14e7c);
                uVar1 = *0x14414;
            }
            param_1 = param_1 + 1;
            uVar2 = uVar2 + 1;
        } while (*param_1 != '\0');
    }
    return uVar2;
}


/* fcn.000113ba @ 0x113ba */

int64_t __fastcall fcn.000113ba(uchar *param_1,uint32_t param_2)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    
    uVar2 = param_2;
    uVar3 = param_2;
    if (param_1 != NULL) {
        while (uVar3 != 0) {
            do {
                uVar1 = in(0x3fd);
            } while ((uVar1 & 0x20) == 0);
            out(0x3f8,*param_1);
            param_1 = param_1 + 1;
            uVar2 = 0x3f8;
            uVar3 = uVar3 - 1;
        }
        return CONCAT44(uVar2,param_2);
    }
    return param_2 << 0x20;
}


/* fcn.0001028e @ 0x1028e */

int fcn.0001028e(void)

{
    if (((*0x14428 & 1) != 0) && (*0x1c8ac == 0)) {
        fcn.000102eb(0x146e8,0x39,0x1474c);
    }
    return *0x1c8ac;
}


/* fcn.00011341 @ 0x11341 */

uint32_t __fastcall fcn.00011341(int16_t *param_1,uint32_t param_2)

{
    uint32_t uVar1;
    
    if (((*0x14428 & 1) != 0) && ((param_1 & 1) != 0)) {
        fcn.000102eb(0x14f60,0x7a,0x14e58);
    }
    if ((param_1 == NULL) || (param_2 == 0)) {
        uVar1 = 0;
    }
    else {
        uVar1 = 0;
        if (*param_1 != 0) {
            do {
                if (param_2 - 1 <= uVar1) {
                    return param_2;
                }
                uVar1 = uVar1 + 1;
            } while (param_1[uVar1] != 0);
        }
    }
    return uVar1;
}


/* fcn.00011393 @ 0x11393 */

uint32_t __fastcall fcn.00011393(char *param_1,uint32_t param_2)

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


/* fcn.00011318 @ 0x11318 */

ushort __fastcall fcn.00011318(ushort *param_1)

{
    if (((*0x14428 & 1) != 0) && (param_1 == NULL)) {
        fcn.000102eb(0x14eb8,0x20,0x14784);
    }
    return *param_1;
}


/* fcn.00011141 @ 0x11141 */

void __cdecl fcn.00011141(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h)

{
    fcn.0001041c(arg_10h,arg_14h,&arg_18h);
    return;
}


/* fcn.000103ad @ 0x103ad */

uchar * __cdecl fcn.000103ad(int32_t arg_8h,int32_t arg_ch)

{
    uint64_t uVar1;
    uchar *in_ECX;
    int in_EDX;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = &var_ch;
    *in_ECX = 0;
    var_4h = in_EDX;
    do {
        if (((*0x14428 & 1) != 0) && (in_EDX == 0)) {
            fcn.000102eb(0x14f10,0x29,0x14efc);
        }
        uVar1 = arg_ch;
        arg_ch = arg_ch / var_4h;
        uVar1 = uVar1 % var_4h << 0x20 | arg_8h;
        arg_8h = uVar1 / var_4h;
        if (var_8h != 0) {
            *var_8h = uVar1 % var_4h;
        }
        in_ECX = in_ECX + 1;
        *in_ECX = *(var_ch + 0x14d80);
    } while (arg_8h != 0 || arg_ch != 0);
    return in_ECX;
}


/* fcn.00010379 @ 0x10379 */

uchar * __cdecl fcn.00010379(int arg_8h,int32_t arg_ch,int arg_10h)

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


/* fcn.000111b7 @ 0x111b7 */

ushort __fastcall fcn.000111b7(int param_1)

{
    ushort uVar1;
    
    if (((*0x14428 & 1) != 0) && (param_1 == 0)) {
        fcn.000102eb(0x14da8,0xaf,0x14d90);
    }
    uVar1 = fcn.00011318();
    return uVar1;
}


/* fcn.00011160 @ 0x11160 */

uchar __fastcall fcn.00011160(uchar *param_1)

{
    if (((*0x14428 & 1) != 0) && (param_1 == NULL)) {
        fcn.000102eb(0x14da8,0x80,0x14d90);
    }
    return *param_1;
}


/* fcn.00011220 @ 0x11220 */

bool __fastcall fcn.00011220(int param_1)

{
    char cVar1;
    
    if (((*0x14428 & 1) != 0) && (param_1 == 0)) {
        fcn.000102eb(0x14da8,0xe5,0x14d90);
    }
    cVar1 = fcn.00011160();
    return cVar1 == '\x7f';
}


/* fcn.0001118b @ 0x1118b */

uchar __fastcall fcn.0001118b(int param_1)

{
    if (((*0x14428 & 1) != 0) && (param_1 == 0)) {
        fcn.000102eb(0x14da8,0x96,0x14d90);
    }
    return *(param_1 + 1);
}


/* fcn.000120a9 @ 0x120a9 */

int fcn.000120a9(int param_1,int param_2)

{
    int iVar1;
    
    iVar1 = *0x152c0;
    do {
        if (iVar1 == 0) {
            return 0;
        }
        if (param_2 == 1) {
code_r0x000120c9:
            if (*(iVar1 + 0x10) == param_1) {
                return iVar1;
            }
        }
        else if (param_2 == 2) {
            if (*(iVar1 + 0x10) == param_1) {
                return iVar1;
            }
            goto code_r0x000120c9;
        }
        iVar1 = *(iVar1 + 0x70);
    } while( true );
}


/* fcn.0002240e @ 0x2240e */

int32_t __cdecl fcn.0002240e(int32_t arg_8h)

{
    int *piVar1;
    uint32_t uVar2;
    int iVar3;
    int32_t var_8h;
    
    piVar1 = fcn.000128c3();
    _var_8h = 0;
    uVar2 = (arg_8h >> 0xc) + 1;
    if ((arg_8h & 0xfffU) == 0) {
        uVar2 = arg_8h >> 0xc;
    }
    iVar3 = (**(*piVar1 + 0x48))(piVar1,4,uVar2,&var_8h);
    if (iVar3 < 0) {
        _var_8h = 0;
    }
    return var_8h;
}


/* fcn.000128c3 @ 0x128c3 */

int fcn.000128c3(void)

{
    uint uVar1;
    int iVar2;
    ushort uStack_4;
    ushort uStack_2;
    
    iVar2 = *0x15358;
    if (*0x15358 == 0) {
        uVar1 = InterruptDescriptorTableRegister();
        uStack_4 = uVar1 >> 0x10;
        iVar2 = *(CONCAT22(uStack_2,uStack_4) + -4);
    }
    return iVar2;
}


/* fcn.000224aa @ 0x224aa */

void fcn.000224aa(uchar *param_1,uchar param_2,int param_3)

{
    for (; param_3 != 0; param_3 = param_3 + -1) {
        *param_1 = param_2;
        param_1 = param_1 + 1;
    }
    return;
}


/* fcn.0001284a @ 0x1284a */

void fcn.0001284a(int param_1,uint8_t param_2)

{
    int iVar1;
    
    iVar1 = fcn.000227c4(*(param_1 + 0x68));
    if ((iVar1 != 0) && (*(iVar1 + 1) == '\x12')) {
        *(iVar1 + 4) = 1 << (param_2 & 0x1f);
    }
    return;
}


/* fcn.000227c4 @ 0x227c4 */

int fcn.000227c4(int param_1)

{
    char cVar1;
    int iVar2;
    int iVar3;
    
    iVar3 = 0;
    while( true ) {
        iVar2 = param_1;
        if (iVar2 == 0) {
            return iVar3;
        }
        cVar1 = fcn.00011255(iVar2);
        if (cVar1 != '\0') break;
        param_1 = fcn.000111eb(iVar2);
        iVar3 = iVar2;
        if (iVar2 == param_1) {
            return iVar2;
        }
    }
    return iVar3;
}


/* fcn.000120e8 @ 0x120e8 */

uchar fcn.000120e8(void)

{
    return *0x152bb;
}


/* fcn.0001583c @ 0x1583c */

void fcn.0001583c(int32_t param_1,int param_2,uint param_3)

{
    char cVar1;
    ushort uVar2;
    uint32_t uVar3;
    uchar *puVar4;
    uint32_t uVar5;
    int iVar6;
    ushort *puVar7;
    uint uStack_80;
    uint uStack_7c;
    uint uStack_78;
    uint32_t uStack_74;
    int iStack_70;
    uchar auStack_6c [41];
    uchar auStack_43 [17];
    ushort auStack_32 [10];
    uchar uStack_1e;
    
    uVar5 = 0;
    fcn.000224aa(&uStack_80,0,0x80);
    uStack_78 = param_3;
    if (((*(param_2 + 0xd4) & 0xc000) == 0x4000) && ((*(param_2 + 0xd4) & 0x1000) != 0)) {
        iStack_70 = *(param_2 + 0xea) * 2;
    }
    else {
        iStack_70 = 0x200;
    }
    if (((*(param_2 + 0xa6) & 0x400) == 0) || ((*(param_2 + 0xac) & 0x400) == 0)) {
        uStack_80 = *(param_2 + 0x78);
        uStack_7c = 0;
    }
    else {
        uStack_7c = *(param_2 + 0xcc);
        uStack_80 = *(param_2 + 200);
    }
    uVar3 = uStack_74;
    if (((*(param_2 + 0xa4) & 1) != 0) && (uVar3 = uStack_74 | 1, (*(param_2 + 0xaa) & 1) != 0)) {
        uVar3 = uStack_74 | 3;
    }
    if ((((*(param_2 + 0x100) & 7) == 7) && ((*(param_2 + 0xa4) & 2) != 0)) && ((*(param_2 + 0xaa) & 2) != 0)) {
        uStack_74 = 4;
    }
    else {
        uStack_74 = 0;
    }
    uStack_74 = uVar3 & 0xfffffffb | uStack_74;
    cVar1 = fcn.00011999(param_1);
    if (cVar1 != '\0') {
        uStack_74 = uStack_74 | 8;
    }
    if (*(param_2 + 0x1b2) == 1) {
        uStack_74 = uStack_74 | 0x10;
    }
    if ((*(param_2 + 0x60) & 1) != 0) {
        uStack_74 = uStack_74 | 0x20;
        cVar1 = fcn.000119ec(param_1,10000000,0);
        if (cVar1 != '\0') {
            uStack_74 = uStack_74 | 0x40;
        }
        cVar1 = fcn.00011a20(param_1,10000000,0);
        if (cVar1 != '\0') {
            cVar1 = fcn.00011a20();
            if (cVar1 != '\0') {
                uStack_74 = uStack_74 | 0x2000;
            }
        }
    }
    cVar1 = fcn.000119d8(param_1);
    if (cVar1 != '\0') {
        uStack_74 = uStack_74 | 0x80;
    }
    cVar1 = fcn.00011a03(param_1);
    if (cVar1 != '\0') {
        uStack_74 = uStack_74 | 0x800;
    }
    puVar7 = param_2 + 0x14;
    do {
        uVar2 = fcn.0001129c(*puVar7);
        auStack_32[uVar5] = uVar2;
        puVar7 = puVar7 + 1;
        uVar5 = uVar5 + 1;
    } while (uVar5 < 10);
    iVar6 = 0x14;
    uStack_1e = 0;
    fcn.00016d32(auStack_43,param_2 + 0x14,0x11,0x14,1);
    puVar4 = auStack_6c;
    do {
        *puVar4 = puVar4[(param_2 - auStack_6c) + 0x37];
        puVar4[1] = (puVar4 + 2)[(param_2 - auStack_6c) + 0x34];
        iVar6 = iVar6 + -1;
        puVar4 = puVar4 + 2;
    } while (iVar6 != 0);
    fcn.00022786(auStack_6c);
    fcn.00018353(param_1,&uStack_80);
    return;
}


/* fcn.00011a89 @ 0x11a89 */

void fcn.00011a89(int32_t param_1,uint param_2,int32_t *param_3,char param_4)

{
    char cVar1;
    
    if ((*(param_3 + 3) & 0x20) != 0) {
        fcn.00012398(param_1);
    }
    cVar1 = fcn.000120e8();
    if ((cVar1 != '\0') && ((param_4 == '\0' || ((param_3[3] & 0x8000U) != 0)))) {
        fcn.0001289c(param_3[4],*param_3,param_3[1],7,param_1,param_3[3] >> 7 & 1,1);
    }
    return;
}


/* fcn.000102ba @ 0x102ba */

void fcn.000102ba(uint param_1)

{
    int *piVar1;
    
    piVar1 = fcn.0001028e();
    (**(*piVar1 + 0x18))(piVar1,param_1);
    return;
}


/* fcn.00011939 @ 0x11939 */

int fcn.00011939(int *param_1)

{
    int *piVar1;
    
    piVar1 = *0x152c0;
    while( true ) {
        if (piVar1 == NULL) {
            return 0;
        }
        if ((*piVar1 == 1) && (piVar1 + 8 == param_1)) break;
        piVar1 = piVar1[0x1c];
    }
    return piVar1[4];
}


/* fcn.0001460b @ 0x1460b */

uint32_t fcn.0001460b(int param_1,uint16_t param_2)

{
    uint in_EAX;
    
    if (7 < param_2) {
        return CONCAT22(in_EAX >> 0x10,param_2) & 0xffffff00;
    }
    return *(param_2 * 0x18 + 0x40 + param_1) >> 2 & 1;
}


/* fcn.000115b8 @ 0x115b8 */

uint fcn.000115b8(int param_1,uint *param_2)

{
    uint8_t uVar1;
    uint uVar2;
    
    fcn.000224aa(param_2,0,0x31);
    *(param_2 + 0x1f) = *(*(param_1 + 4) + 2);
    *(param_2 + 8) = *(*(param_1 + 4) + 3);
    *(param_2 + 10) = *(*(param_1 + 4) + 0xb);
    *(param_2 + 0x29) = *(*(param_1 + 4) + 0xc);
    *(param_2 + 0x2a) = *(*(param_1 + 4) + 0xd);
    *(param_2 + 0x21) = *(*(param_1 + 4) + 4);
    *(param_2 + 0x25) = *(*(param_1 + 4) + 8);
    *(param_2 + 0x22) = *(*(param_1 + 4) + 5);
    *(param_2 + 0x26) = *(*(param_1 + 4) + 9);
    *(param_2 + 0x23) = *(*(param_1 + 4) + 6);
    *(param_2 + 0x27) = *(*(param_1 + 4) + 10);
    *(param_2 + 9) = *(*(param_1 + 4) + 7);
    uVar1 = *(param_1 + 0x20);
    if (uVar1 == 2) {
code_r0x00011671:
        param_2[2] = 0;
    }
    else {
        if (uVar1 == 4) {
code_r0x00011668:
            param_2[2] = 1;
            goto code_r0x00011675;
        }
        if (uVar1 != 5) {
            if (uVar1 < 8) {
                return 0x80000003;
            }
            if (uVar1 < 10) goto code_r0x00011671;
            if (uVar1 == 10) goto code_r0x00011668;
            if (uVar1 != 0xb) {
                return 0x80000003;
            }
        }
        param_2[2] = 2;
    }
code_r0x00011675:
    if (param_2[2] == 1) {
        *param_2 = *(param_1 + 0x10);
        uVar2 = *(param_1 + 0x18);
    }
    else {
        if (param_2[2] != 2) {
            return 0;
        }
        *param_2 = *(param_1 + 0x14);
        uVar2 = *(param_1 + 0x1c);
    }
    param_2[1] = uVar2;
    return 0;
}


/* fcn.0002258b @ 0x2258b */

uint fcn.0002258b(int param_1,int param_2)

{
    uint uVar1;
    
    if (param_1 == 0 && param_2 == 0) {
        return 0xffffffff;
    }
    uVar1 = fcn.00023c10(param_1,param_2,10,0);
    return uVar1;
}


/* fcn.00023c10 @ 0x23c10 */

ulong fcn.00023c10(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    
    if (param_4 == 0) {
        uVar4 = param_2 / param_3;
        iVar5 = (param_2 % param_3 << 0x20 | param_1) / param_3;
    }
    else {
        uVar4 = param_1;
        uVar6 = param_4;
        uVar7 = param_2;
        uVar8 = param_3;
        do {
            uVar3 = uVar6 & 1;
            uVar6 = uVar6 >> 1;
            uVar8 = uVar8 >> 1 | (uVar3 != 0) << 0x1f;
            uVar3 = uVar7 & 1;
            uVar7 = uVar7 >> 1;
            uVar4 = uVar4 >> 1 | (uVar3 != 0) << 0x1f;
        } while (uVar6 != 0);
        uVar1 = CONCAT44(uVar7,uVar4) / uVar8;
        iVar5 = uVar1;
        iVar2 = param_3 * (uVar1 & 0xffffffff);
        uVar4 = iVar2 >> 0x20;
        uVar6 = uVar4 + iVar5 * param_4;
        if (((CARRY4(uVar4,iVar5 * param_4)) || (param_2 < uVar6)) || ((param_2 <= uVar6 && (param_1 < iVar2)))) {
            iVar5 = iVar5 + -1;
        }
        uVar4 = 0;
    }
    return CONCAT44(uVar4,iVar5);
}


/* fcn.00013840 @ 0x13840 */

uint fcn.00013840(uint32_t param_1,uint32_t param_2,uint param_3)

{
    uint8_t uVar1;
    char cVar2;
    int iVar3;
    int unaff_EBX;
    uint uVar4;
    uint *puVar5;
    uint *puVar6;
    uint32_t var_bp_ch;
    uint in_stack_ffffffe0;
    uint uStack_8;
    uint uStack_4;
    
    uStack_8 = 0;
    uVar4 = 0;
    uStack_4 = 0;
    if (param_1 == 0) {
        return 1;
    }
    if (var_bp_ch != 0) {
        if (7 < *(var_bp_ch + 0xc)) {
            return in_stack_ffffffe0;
        }
        if ((*var_bp_ch != 0) && (cVar2 = fcn.00012fd8(), cVar2 != '\0')) {
            uVar4 = *var_bp_ch;
            uStack_4 = uVar4;
            cVar2 = fcn.00013383(var_bp_ch,&uStack_8);
            if (cVar2 == '\0') {
                *var_bp_ch = uVar4;
                return 2;
            }
        }
        cVar2 = fcn.00013545(param_1);
        if (cVar2 != '\0') {
            uVar1 = *(var_bp_ch + 0xc);
            fcn.000132e4(param_1,CONCAT31(uVar4 >> 8,uVar1));
            fcn.00013645(param_1,*(var_bp_ch + 0xc));
            fcn.00013826(uVar1 * 0x80 + 0x138);
            uVar4 = fcn.000133c2(param_1,*(var_bp_ch + 0xc),1,var_bp_ch,param_3);
            puVar5 = (*(param_1 + 0xf0) + 0x100U & 0xffffff00) + 0x40;
            puVar6 = var_bp_ch + 0x1d;
            for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar6 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar6 = puVar6 + 1;
            }
            if (unaff_EBX == 0) {
                return uVar4;
            }
            iVar3 = fcn.00013158(unaff_EBX);
            *var_bp_ch = uStack_8;
            if (-1 < iVar3) {
                return uVar4;
            }
        }
    }
    return 2;
}


/* fcn.000118ce @ 0x118ce */

uint fcn.000118ce(int *param_1,int param_2)

{
    int iVar1;
    
    iVar1 = *param_1;
    *(iVar1 + 2) = *(param_2 + 0x1f);
    *(iVar1 + 3) = *(param_2 + 0x20);
    *(iVar1 + 0xc) = *(param_2 + 0x29);
    *(iVar1 + 0xd) = *(param_2 + 0x2a);
    *(iVar1 + 4) = *(param_2 + 0x21);
    *(iVar1 + 8) = *(param_2 + 0x25);
    *(iVar1 + 5) = *(param_2 + 0x22);
    *(iVar1 + 9) = *(param_2 + 0x26);
    *(iVar1 + 6) = *(param_2 + 0x23);
    *(iVar1 + 10) = *(param_2 + 0x27);
    *(iVar1 + 7) = *(param_2 + 0x24);
    if (*(param_2 + 8) == 1) {
        param_1[6] = *(param_2 + 4);
    }
    else if (*(param_2 + 8) == 2) {
        param_1[7] = *(param_2 + 4);
    }
    return 0;
}


/* fcn.0001195d @ 0x1195d */

int fcn.0001195d(int param_1)

{
    int iVar1;
    
    iVar1 = *0x152c0;
    while( true ) {
        if (iVar1 == 0) {
            return 0;
        }
        if (*(iVar1 + 0x10) == param_1) break;
        iVar1 = *(iVar1 + 0x70);
    }
    return iVar1;
}


/* fcn.000143e9 @ 0x143e9 */

uchar fcn.000143e9(void)

{
    return 7;
}


/* fcn.000143ec @ 0x143ec */

uint fcn.000143ec(int param_1,uint8_t param_2,uint8_t *param_3)

{
    uint32_t uVar1;
    
    if (param_1 == 0) {
        return 1;
    }
    if (param_3 == NULL) {
        return 1;
    }
    if (7 < param_2) {
        return 9;
    }
    uVar1 = fcn.000134bf();
    *param_3 = uVar1 >> 0x15 & 1;
    return 0;
}


/* fcn.000134bf @ 0x134bf */

void __fastcall fcn.000134bf(uint *param_1,uint16_t param_2)

{
    fcn.00012e0e(*param_1,param_1[1],param_2 + param_1[2]);
    return;
}


/* fcn.00012e0e @ 0x12e0e */

void fcn.00012e0e(uint param_1,uint param_2,uint param_3)

{
    (**(*(**0x15358 + 0x60) + 0x38))(*0x15358,*(**0x15358 + 0x60),param_3,0);
    return;
}


/* fcn.00022651 @ 0x22651 */

uint32_t __cdecl fcn.00022651(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    uint8_t uVar1;
    uint32_t uVar2;
    int32_t var_200h;
    
    fcn.000224aa(&var_200h,0,0x200);
    uVar2 = fcn.000226c6(arg_8h,0x200,&var_200h,arg_10h,arg_14h);
    if ((uVar2 == 0) && (uVar2 = fcn.000225f1(&var_200h,2), uVar2 != 0)) {
        if (arg_ch == 0) {
            uVar1 = *(uVar2 + 4) >> 2;
        }
        else {
            if (arg_ch != 1) goto code_r0x000226c0;
            uVar1 = *(uVar2 + 4) >> 4;
        }
        return CONCAT31(uVar2 >> 8,uVar1) & 0xffffff01;
    }
code_r0x000226c0:
    return uVar2 & 0xffffff00;
}


/* fcn.00014fef @ 0x14fef */

uchar fcn.00014fef(int param_1)

{
    return *(param_1 + 0xda);
}


/* fcn.00014436 @ 0x14436 */

int __cdecl fcn.00014436(uint32_t arg_8h,int8_t arg_ch,int8_t arg_10h)

{
    uint32_t uVar1;
    int iVar2;
    int32_t var_34h;
    int32_t var_2ch;
    int8_t var_28h;
    int8_t var_15h;
    int8_t var_14h;
    int16_t var_12h;
    
    if (arg_8h == 0) {
        iVar2 = 1;
    }
    else if (arg_ch < 8) {
        uVar1 = *((arg_ch + 2) * 0x18 + arg_8h + 0x10);
        if ((uVar1 & 4) == 0) {
            iVar2 = 8;
        }
        else if ((uVar1 & 1) == 0) {
            fcn.000224aa(&var_34h,0,0x31);
            var_2ch = 0;
            var_14h = arg_10h;
            var_28h = arg_ch;
            var_15h = -0x50;
            var_12h = -0x3db1;
            iVar2 = fcn.00013840(arg_8h,&var_34h,60000000,0,1);
            if (iVar2 == 0) {
                if (var_12h == 'O') {
                    if (var_12h._1_1_ == -0x3e) {
                        return 0;
                    }
                }
                else if ((var_12h == -0xc) && (var_12h._1_1_ == ',')) {
                    return 3;
                }
                iVar2 = 2;
            }
        }
        else {
            iVar2 = 7;
        }
    }
    else {
        iVar2 = 9;
    }
    return iVar2;
}


/* fcn.00011979 @ 0x11979 */

char fcn.00011979(int param_1)

{
    char cVar1;
    
    cVar1 = '\0';
    if (param_1 != 0) {
        cVar1 = (param_1 == 3) + '\x01';
    }
    return cVar1;
}


/* fcn.00015a62 @ 0x15a62 */

uint32_t fcn.00015a62(int param_1)

{
    return *(param_1 + 0x84) >> 7 & 0xffffff01;
}


/* fcn.00015a72 @ 0x15a72 */

ulong fcn.00015a72(int param_1)

{
    return *(param_1 + 0x78);
}


/* fcn.00015a57 @ 0x15a57 */

uint fcn.00015a57(int param_1)

{
    return *(param_1 + 0x88);
}


/* fcn.0001289c @ 0x1289c */

void __cdecl
fcn.0001289c(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h,int32_t arg_1ch,
            int32_t arg_20h)

{
    fcn.00012add(arg_8h,arg_ch,arg_10h,arg_14h,arg_18h,arg_1ch,arg_20h);
    return;
}


/* fcn.00012add @ 0x12add */

uint __cdecl
fcn.00012add(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h,uint32_t arg_1ch,
            int32_t arg_20h)

{
    int32_t *piVar1;
    uchar uVar2;
    int32_t *piVar3;
    uint uVar4;
    int32_t *piVar5;
    
    piVar3 = fcn.0002240e(0x38);
    if (piVar3 == NULL) {
        uVar4 = 0x80000009;
    }
    else {
        fcn.000224aa(piVar3,0,0x38);
        *0x15314 = *0x15314 + '\x01';
        piVar3[3] = arg_14h;
        piVar3[5] = arg_ch + -1;
        uVar2 = 0x12;
        if (arg_1ch != '\0') {
            uVar2 = 0x17;
        }
        *(piVar3 + 4) = 1;
        *(piVar3 + 8) = uVar2;
        piVar3[6] = arg_8h;
        piVar3[0xb] = arg_10h + -1 + (arg_ch != 0);
        *piVar3 = arg_18h;
        *(piVar3 + 0x21) = 0x100;
        *(piVar3 + 0x23) = 1;
        piVar3[10] = arg_ch + -1;
        piVar3[9] = arg_8h;
        *(piVar3 + 1) = *0x15314;
        piVar3[2] = arg_20h;
        piVar5 = *0x15310;
        if (*0x15310 == NULL) {
            *0x15310 = piVar3;
        }
        else {
            do {
                piVar1 = piVar5[0xc];
                if (piVar1 == NULL) {
                    piVar5[0xc] = piVar3;
                    break;
                }
                piVar5 = piVar1;
            } while (piVar1 != NULL);
        }
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.00012398 @ 0x12398 */

uint fcn.00012398(uint param_1)

{
    uint *puVar1;
    uint *puVar2;
    uint *puVar3;
    
    puVar2 = fcn.0002240e(0xc);
    if (puVar2 == NULL) {
        return 0x80000009;
    }
    fcn.000224aa(puVar2,0,0xc);
    *0x152dc = *0x152dc + '\x01';
    *puVar2 = param_1;
    *(puVar2 + 1) = *0x152dc;
    puVar3 = *0x152d8;
    if (*0x152d8 == NULL) {
        *0x152d8 = puVar2;
    }
    else {
        do {
            puVar1 = puVar3[2];
            if (puVar1 == NULL) {
                puVar3[2] = puVar2;
                return 0;
            }
            puVar3 = puVar1;
        } while (puVar1 != NULL);
    }
    return 0;
}


/* fcn.00011b9d @ 0x11b9d */

void fcn.00011b9d(uint *param_1,uint param_2,uint param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = '\0';
    if (*(param_1 + 4) != '\0') {
        cVar1 = (*(param_1 + 4) != '\x01') + '\x01';
    }
    uVar2 = fcn.000151f5(param_2,param_3,param_1[2],*param_1,param_1[1],param_1[3],cVar1);
    fcn.00011b1f(uVar2);
    return;
}


/* fcn.000151f5 @ 0x151f5 */

int fcn.000151f5(int param_1,int param_2,uint32_t param_3,uint32_t param_4,int param_5,uint32_t param_6,
                int param_7)

{
    char cVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t arg_8h;
    uint32_t uVar5;
    uint32_t arg_ch;
    int iVar6;
    bool bVar7;
    uint32_t uStack_14;
    int iStack_10;
    int iStack_c;
    
    if (param_7 == 2) {
        iStack_c = 1;
    }
    else {
        pcVar2 = 0x53ec;
        if (param_7 == 0) {
            pcVar2 = 0x5158;
        }
        cVar1 = fcn.00014ffa(param_1,param_2);
        if (cVar1 == '\0') {
            iStack_c = 0;
        }
        else {
            iVar6 = 0;
            iVar3 = (param_2 + 5) * 0x18 + param_1;
            if (((param_3 & 3) != 0) && (iVar6 = fcn.0002240e(*(iVar3 + 8) * *(param_1 + 0xd0) + 4), iVar6 == 0)) {
                return 0;
            }
            arg_8h = 0;
            iStack_c = 1;
            if (iVar6 != 0) {
                arg_8h = iVar6 + 4U & 0xfffffffc;
            }
            if (param_6 != 0) {
                iStack_10 = param_5;
                uStack_14 = param_4;
                do {
                    uVar5 = param_6;
                    if (*(param_1 + 0xd0) < param_6) {
                        uVar5 = *(param_1 + 0xd0);
                    }
                    arg_ch = *(iVar3 + 8) * uVar5;
                    if ((iVar6 != 0) && (param_7 == 1)) {
                        fcn.0002245a(arg_8h,arg_ch,param_3,arg_ch);
                    }
                    uVar4 = param_3;
                    if (iVar6 != 0) {
                        uVar4 = arg_8h;
                    }
                    iStack_c = (*pcVar2)(param_1,param_2,uVar4,uStack_14,iStack_10,uVar5);
                    if ((iVar6 != 0) && (param_7 == 0)) {
                        fcn.0002245a(param_3,arg_ch,arg_8h,arg_ch);
                    }
                    param_3 = param_3 + arg_ch;
                    param_6 = param_6 - uVar5;
                    bVar7 = CARRY4(uStack_14,uVar5);
                    uStack_14 = uStack_14 + uVar5;
                    iStack_10 = iStack_10 + bVar7;
                } while ((iStack_c == 1) && (param_6 != 0));
            }
            if (iVar6 != 0) {
                fcn.00022fad(iVar6);
            }
        }
    }
    return iStack_c;
}


/* fcn.00011b1f @ 0x11b1f */

uint fcn.00011b1f(int param_1)

{
    if (param_1 == 1) {
        return 0;
    }
    if (param_1 != 2) {
        if (param_1 != 3) {
            return 1;
        }
        return 4;
    }
    return 3;
}


/* fcn.00011b41 @ 0x11b41 */

void __cdecl fcn.00011b41(uint noname_0,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    uint uVar1;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    
    var_18h = *arg_ch;
    var_14h = *(arg_ch + 4);
    var_ch = *(arg_ch + 0xc);
    var_10h = *(arg_ch + 8);
    if (*(arg_ch + 0x10) == '\0') {
        var_8h = 1;
    }
    else {
        var_8h = (*(arg_ch + 0x10) != '\x01') + 2;
    }
    uVar1 = fcn.00013956(arg_10h,arg_14h,&var_18h);
    fcn.00011979(uVar1);
    return;
}


/* fcn.00013956 @ 0x13956 */

uint __cdecl fcn.00013956(uint32_t arg_8h,int8_t arg_ch,int32_t arg_10h)

{
    uint8_t uVar1;
    uint uVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t *puVar6;
    bool bVar7;
    int32_t var_4ch;
    int32_t var_48h;
    int32_t var_44h;
    int8_t var_40h;
    int8_t var_2dh;
    int8_t var_2bh;
    int8_t var_2ah;
    int8_t var_29h;
    int8_t var_28h;
    int8_t var_27h;
    int8_t var_26h;
    int8_t var_25h;
    int8_t var_23h;
    int8_t var_22h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    if (arg_8h == 0) {
        uVar2 = 1;
    }
    else if ((arg_10h == 0) || (*(arg_10h + 8) == 0)) {
        uVar2 = 1;
    }
    else if (arg_ch < 8) {
        puVar6 = (arg_ch + 2) * 0x18 + arg_8h;
        if ((puVar6[4] & 4) == 0) {
            uVar2 = 8;
        }
        else {
            uVar3 = *(arg_10h + 4) + CARRY4(*(arg_10h + 0xc),*arg_10h);
            if ((uVar3 < puVar6[1]) || ((uVar3 <= puVar6[1] && (*(arg_10h + 0xc) + *arg_10h <= *puVar6)))) {
                if ((puVar6[4] & 1) == 0) {
                    if ((*(arg_10h + 0x10) != 3) && (*(arg_10h + 0xc) != 0)) {
                        fcn.000224aa(&var_4ch,0,0x31);
                        var_8h = *(arg_10h + 4);
                        var_10h = *arg_10h;
                        var_4ch = *(arg_10h + 8);
                        for (uVar3 = *(arg_10h + 0xc); uVar3 != 0; uVar3 = uVar3 - uVar5) {
                            var_4h = puVar6[3];
                            if (uVar3 < var_4h) {
                                var_4h = uVar3 & 0xffff;
                            }
                            uVar1 = var_10h >> 0x18;
                            if ((puVar6[4] & 2) == 0) {
                                var_2dh = (*(arg_10h + 0x10) == 2) * '\x02' + -0x38;
                                var_28h = uVar1 & 0xf;
                            }
                            else {
                                var_2dh = 0x25;
                                if (*(arg_10h + 0x10) == 2) {
                                    var_2dh = 0x35;
                                }
                                var_14h = 0;
                                var_26h = var_8h;
                                var_25h = var_8h >> 8;
                                var_27h = uVar1;
                            }
                            var_28h = var_28h | 0x40;
                            var_40h = arg_ch;
                            var_44h = *(arg_10h + 0x10);
                            var_22h = var_4h >> 8;
                            var_2ah = var_10h >> 8;
                            var_29h = var_10h >> 0x10;
                            var_2bh = var_10h;
                            var_48h = puVar6[2] * var_4h;
                            var_23h = var_4h;
                            var_ch = var_4ch;
                            iVar4 = fcn.00013840(arg_8h,&var_4ch,60000000,0,1);
                            if (iVar4 != 0) {
                                return 2;
                            }
                            uVar5 = var_4h & 0xffff;
                            bVar7 = CARRY4(var_10h,uVar5);
                            var_10h = var_10h + uVar5;
                            var_8h = var_8h + bVar7;
                            var_4ch = var_ch + var_48h;
                        }
                    }
                    uVar2 = 0;
                }
                else {
                    uVar2 = 7;
                }
            }
            else {
                uVar2 = 6;
            }
        }
    }
    else {
        uVar2 = 9;
    }
    return uVar2;
}


/* fcn.00022751 @ 0x22751 */

void fcn.00022751(int param_1,char *param_2,int param_3)

{
    int iVar1;
    int iVar2;
    
    iVar1 = 0;
    if (param_3 != 0) {
        iVar2 = param_1 - param_2;
        do {
            if (*param_2 == '\0') break;
            iVar1 = iVar1 + 1;
            param_2[iVar2] = *param_2;
            param_2 = param_2 + 1;
            param_3 = param_3 + -1;
        } while (param_3 != 0);
        if (param_3 != 0) {
            *(iVar1 + param_1) = 0;
        }
    }
    return;
}


/* fcn.00022706 @ 0x22706 */

int fcn.00022706(char *param_1)

{
    char cVar1;
    int iVar2;
    
    iVar2 = 0;
    cVar1 = *param_1;
    while (cVar1 != '\0') {
        param_1 = param_1 + 1;
        iVar2 = iVar2 + 1;
        cVar1 = *param_1;
    }
    return iVar2;
}


/* fcn.00016d32 @ 0x16d32 */

void fcn.00016d32(uchar *param_1,int param_2,int param_3,uint32_t param_4,char param_5)

{
    uint8_t uVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    bool bVar5;
    
    uVar4 = 0;
    if (param_4 != 0) {
        iVar3 = 0;
        do {
            iVar2 = iVar3 + 1;
            if (*(uVar4 + param_2) < 0x21) {
                iVar2 = iVar3;
            }
        } while ((iVar2 != param_3 + -1) && (uVar4 = uVar4 + 1, iVar3 = iVar2, uVar4 < param_4));
        if (iVar2 != 0) {
            param_4 = param_4 - 1;
            param_1[iVar2] = 0;
            iVar3 = iVar2 + -1;
            do {
                do {
                    uVar4 = param_5 != '\0' ^ param_4;
                    param_4 = param_4 - 1;
                    uVar1 = *(uVar4 + param_2);
                } while (uVar1 < 0x21);
                if (uVar1 == 0x3a) {
                    uVar1 = 0x3b;
                }
                param_1[iVar3] = uVar1;
                bVar5 = iVar3 != 0;
                iVar3 = iVar3 + -1;
            } while (bVar5);
            return;
        }
    }
    *param_1 = 0;
    return;
}


/* fcn.00012814 @ 0x12814 */

void fcn.00012814(int param_1,uint8_t param_2,uint param_3,uint param_4)

{
    int iVar1;
    
    iVar1 = fcn.000227c4(*(param_1 + 0x68));
    if ((iVar1 != 0) && (*(iVar1 + 1) == '\x17')) {
        *(iVar1 + 8) = param_3;
        *(iVar1 + 4) = 1 << (param_2 & 0x1f);
        *(iVar1 + 0xc) = param_4;
    }
    return;
}


/* fcn.00015828 @ 0x15828 */

void fcn.00015828(uint param_1,uint param_2)

{
    fcn.00018353(param_1,param_2);
    return;
}


/* fcn.00018353 @ 0x18353 */

void __thiscall fcn.00018353(int param_1,uint param_2,uint *param_3)

{
    char cVar1;
    uchar uVar2;
    int iVar3;
    uint unaff_ESI;
    uint unaff_EDI;
    uint uVar4;
    uint in_stack_ffffffe0;
    
    cVar1 = fcn.0001c303();
    if ((cVar1 == '\0') && (*(param_1 + 0x1928) < 0x20)) {
        iVar3 = fcn.0001c295(param_3 + 0x3d);
        if (iVar3 == 0) {
            iVar3 = fcn.0001c1c4(param_3 + 0x3d,param_2,*param_3,param_3[1]);
            in_stack_ffffffe0 = param_2;
        }
        fcn.00017058(unaff_EDI,param_3,unaff_ESI);
        if ((*(iVar3 + 0xb0) & 0x84) == 0) {
            uVar4 = 0x80;
        }
        else {
            uVar4 = 0x84;
        }
        fcn.00016c6c(uVar4);
        uVar2 = 0;
        if ((*(iVar3 + 0xb3) & 1) == 0) {
            uVar2 = fcn.000171e4();
        }
        fcn.00011a89(in_stack_ffffffe0,*(iVar3 + 0x8c),param_3,uVar2);
        fcn.0001c8f8(iVar3);
    }
    return;
}


/* fcn.00011e67 @ 0x11e67 */

uint fcn.00011e67(uint32_t *param_1)

{
    uint32_t uVar1;
    
    uVar1 = *param_1 & 0xff;
    if (((uVar1 != 6) && (uVar1 != 0x81)) && (uVar1 != 0x82)) {
        return 0;
    }
    return 1;
}


/* fcn.00015014 @ 0x15014 */

uint __cdecl
fcn.00015014(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int8_t arg_18h,int32_t arg_1ch,
            int32_t arg_20h)

{
    int iVar1;
    uint uVar2;
    
    if (arg_18h == 0) {
        iVar1 = arg_8h + 0x14;
    }
    else {
        if (arg_18h != 1) {
            return 0;
        }
        iVar1 = arg_8h + 0x50;
    }
    uVar2 = fcn.00014b17(arg_8h,arg_ch,arg_10h,arg_14h,iVar1,arg_1ch,arg_20h,0);
    return uVar2;
}


/* fcn.00014b17 @ 0x14b17 */

uint fcn.00014b17(int32_t param_1,int32_t param_2,uint32_t param_3,uint32_t param_4,int param_5,uint param_6,
                 int32_t param_7,int32_t param_8)

{
    uint32_t arg_10h;
    int arg_14h;
    char cVar1;
    uint uVar2;
    uint extraout_EDX;
    int arg_10h_00;
    uint32_t arg_8h;
    uint auStack_c [2];
    uint uStack_4;
    
    arg_14h = param_5;
    arg_8h = *(param_5 + 0x30) * 0x40 + *(param_5 + 8);
    arg_10h_00 = *(param_5 + 0x34) * 0x10 + *(param_5 + 0xc);
    auStack_c[0] = 0;
    fcn.0002245a(arg_8h,0x40,param_2,0x40);
    arg_10h = param_4;
    *(arg_8h + 2) = *(arg_14h + 0x3a);
    *(arg_14h + 0x3a) = *(arg_14h + 0x3a) + 1;
    if ((param_3 != 0) && (param_4 != 0)) {
        cVar1 = fcn.00012fd8();
        if ((cVar1 != '\0') && (cVar1 = fcn.00014ca7(param_2,&param_3,arg_10h,arg_14h,auStack_c), cVar1 == '\0')) {
            return 0;
        }
        fcn.00015505(param_1,arg_8h + 0x18,arg_8h + 0x20,param_3,arg_10h);
    }
    uVar2 = 0;
    if (*(arg_14h + 0x38) != '\0') {
        uVar2 = 0xff;
    }
    fcn.000224aa(arg_10h_00,uVar2,0x10);
    *(arg_14h + 0x30) = *(arg_14h + 2) - 1U & *(arg_14h + 0x30) + 1U;
    fcn.000156fb(param_1,*(arg_14h + 0x28),*(arg_14h + 0x30));
    fcn.0002255d(param_7,param_8);
    auStack_c[0] = extraout_EDX;
    do {
        if ((*(arg_10h_00 + 0xc) >> 0x10 & 1) != *(arg_14h + 0x38)) {
            if (param_4 != 0) {
                fcn.0002245a(param_4,0x10,arg_10h_00,0x10);
            }
            *(arg_14h + 0x34) = *(arg_14h + 4) - 1U & *(arg_14h + 0x34) + 1U;
            uVar2 = fcn.000156fb(uStack_4,*(arg_14h + 0x2c),*(arg_14h + 0x34));
            return uVar2;
        }
        cVar1 = fcn.000225c3();
    } while (cVar1 == '\0');
    fcn.000154a3(uStack_4);
    return 3;
}


/* fcn.0001536c @ 0x1536c */

uint __cdecl
fcn.0001536c(int32_t arg_8h,uint32_t arg_ch,int8_t arg_10h,int16_t arg_14h,int32_t arg_18h,int32_t arg_1ch,
            int32_t arg_20h,int32_t arg_24h)

{
    uint uVar1;
    int32_t var_40h;
    int8_t var_18h;
    int32_t var_14h;
    
    if ((*(arg_8h + 0xd4) & 1) == 0) {
        return 0;
    }
    uVar1 = fcn.000224aa(&var_40h,0,0x40);
    return uVar1;
}


/* fcn.00013afd @ 0x13afd */

uint fcn.00013afd(int32_t param_1,int8_t param_2,uint32_t param_3,int8_t param_4,int32_t param_5,uint32_t param_6,
                 uint32_t param_7,int32_t param_8,int32_t param_9)

{
    uint32_t arg_20h;
    uint32_t arg_8h;
    uint32_t arg_1ch;
    uint uVar1;
    uint32_t uVar2;
    uint32_t arg_ch;
    
    arg_8h = 0;
    arg_ch = 0;
    uVar2 = param_7 & 0x1ff;
    if (uVar2 != 0) {
        arg_ch = (param_7 - uVar2) + 0x200;
        arg_8h = fcn.0002240e(arg_ch);
        if (arg_8h == 0) {
            return 2;
        }
        fcn.000224aa(arg_8h,0,arg_ch);
        if (param_3 == 0) {
            fcn.0002245a(arg_8h,arg_ch,param_6,param_7);
        }
    }
    arg_1ch = param_6;
    arg_20h = param_7;
    if (uVar2 != 0) {
        arg_1ch = arg_8h;
        arg_20h = arg_ch;
    }
    uVar1 = fcn.0001376f(param_1,param_2,param_3,param_4,param_5,arg_1ch,arg_20h,param_8,param_9);
    if ((uVar2 != 0) && (arg_8h != 0)) {
        if (param_3 == 1) {
            fcn.0002245a(param_6,arg_ch,arg_8h,param_7);
        }
        fcn.00022fad(arg_8h);
    }
    return uVar1;
}


/* fcn.00023aac @ 0x23aac */

uint32_t __cdecl fcn.00023aac(int32_t arg_8h,int32_t arg_ch)

{
    uint16_t uVar1;
    uint32_t uVar2;
    
    uVar2 = fcn.00012d17(arg_8h,arg_ch,0);
    if (uVar2 == -0x7f7a) {
        uVar2 = fcn.00012d17(arg_8h,arg_ch,10);
        if (uVar2 == 0x104) {
            uVar1 = fcn.00012d17(arg_8h,arg_ch,2);
            uVar2 = uVar1;
            if ((((uVar1 == 0x28c0) || (uVar1 == 0x8a35)) || (uVar1 == 0x9a0b)) ||
               (((uVar1 == 0x4c3d || (uVar1 == 0x467f)) || (uVar1 == 0xa77f)))) {
                *0x152a8 = uVar1;
                return CONCAT31(uVar1 >> 8,1);
            }
        }
    }
    return uVar2 & 0xffffff00;
}


/* fcn.0002391d @ 0x2391d */

int32_t * __cdecl fcn.0002391d(int32_t arg_8h,int32_t arg_ch)

{
    uchar uVar1;
    int32_t *piVar2;
    int32_t iVar3;
    
    piVar2 = fcn.0002240e(0x54);
    if (piVar2 != NULL) {
        fcn.000224aa(piVar2,0,0x54);
        *0x1c8a8 = arg_ch;
        *0x1c8a4 = arg_8h;
        *piVar2 = arg_8h;
        piVar2[1] = arg_ch;
        iVar3 = fcn.00012d85(arg_8h,arg_ch,0x10);
        piVar2[2] = iVar3;
        uVar1 = fcn.00023840(arg_8h,arg_ch,0x4c);
        *(piVar2 + 3) = uVar1;
        iVar3 = fcn.00012d85(arg_8h,arg_ch,0x18);
        piVar2[4] = iVar3;
        iVar3 = fcn.00012d85(arg_8h,arg_ch,0x20);
        piVar2[5] = iVar3;
        uVar1 = fcn.00023840(arg_8h,arg_ch,0x4d);
        *(piVar2 + 6) = uVar1;
        uVar1 = fcn.00023840(arg_8h,arg_ch,0x4e);
        *(piVar2 + 0x19) = uVar1;
        iVar3 = fcn.00012d4e(arg_8h,arg_ch,0x48);
        piVar2[7] = iVar3;
        iVar3 = fcn.00012d4e(arg_8h,arg_ch,0x40);
        piVar2[8] = iVar3;
        iVar3 = fcn.00012d4e(arg_8h,arg_ch,0x44);
        piVar2[9] = iVar3;
        iVar3 = fcn.00012d4e(arg_8h,arg_ch,0x50);
        piVar2[10] = iVar3;
        iVar3 = fcn.00012d4e(arg_8h,arg_ch,0x54);
        piVar2[0xb] = iVar3;
        iVar3 = fcn.00012d4e(arg_8h,arg_ch,0x58);
        piVar2[0xc] = iVar3;
        iVar3 = fcn.00012d4e(arg_8h,arg_ch,0x5c);
        piVar2[0xd] = iVar3;
        iVar3 = fcn.00012d4e(arg_8h,arg_ch,0x60);
        piVar2[0xe] = iVar3;
        iVar3 = fcn.00012d4e(arg_8h,arg_ch,100);
        piVar2[0xf] = iVar3;
        iVar3 = fcn.00012d4e(arg_8h,arg_ch,0x68);
        piVar2[0x10] = iVar3;
        iVar3 = fcn.00012d4e(arg_8h,arg_ch,0x6c);
        piVar2[4] = piVar2[4] & 0xfffffff0;
        piVar2[5] = piVar2[5] & 0xfffffff0;
        piVar2[2] = piVar2[2] & 0xfffffff0;
        piVar2[0x11] = iVar3;
        fcn.00023bcb(piVar2);
        piVar2[0x12] = piVar2[4];
        *(piVar2 + 0x13) = 1;
        if (((piVar2[2] != 0) && (piVar2[4] != 0)) && (piVar2[5] != 0)) {
            return piVar2;
        }
        fcn.00022fad(piVar2);
    }
    return NULL;
}


/* fcn.000238ad @ 0x238ad */

void fcn.000238ad(int param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int *piVar4;
    
    fcn.0002357f(param_1);
    fcn.000231ad(param_1);
    piVar4 = *(param_1 + 0x50);
    if (piVar4 != NULL) {
        do {
            if (piVar4[0xc] != 0) {
                for (iVar3 = piVar4[0xb]; iVar3 != 0; iVar3 = *(iVar3 + 0x2c)) {
                    uVar2 = *(iVar3 + 0x10);
                    if (uVar2 == 0) {
                        uVar2 = piVar4[4];
                    }
                    else if (piVar4[4] < uVar2) {
                        uVar2 = piVar4[4];
                    }
                    uVar1 = piVar4[5];
                    if (piVar4[5] < *(iVar3 + 0x14)) {
                        uVar1 = *(iVar3 + 0x14);
                    }
                    *(iVar3 + 0x10) = uVar2;
                    *(iVar3 + 0x14) = uVar1;
                    fcn.00023014(iVar3);
                    fcn.000230b3(iVar3);
                }
            }
            piVar4 = *piVar4;
        } while (piVar4 != NULL);
    }
    fcn.00023529(param_1);
    return;
}


/* fcn.000121fe @ 0x121fe */

uint fcn.000121fe(void)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.00012290();
    if (cVar1 == '\0') {
        fcn.0001223d();
        return 0x80000007;
    }
    if ((*0x152bb == '\x01') && (*0x152ba != '\0')) {
        fcn.00012897();
        fcn.00012892();
    }
    fcn.0001151d();
    fcn.00011da6();
    if (*0x152d8 == 0) {
        return 0x8000000e;
    }
    *0x152f4 = 0;
    *0x152fc = 0x2420;
    *0x152f8 = 0x2470;
    *0x15300 = 0x2491;
    *0x15304 = 0x24b8;
    *0x152f0 = 0x10000;
    *0x152e0 = 0x80000010;
    *0x152e4 = 0x15218;
    *0x152e8 = 0x152f0;
    uVar2 = fcn.000102ba(0x152e0);
    return uVar2;
}


/* fcn.00012290 @ 0x12290 */

uint fcn.00012290(void)

{
    int iVar1;
    int iVar2;
    int *arg_ch;
    
    iVar2 = *0x152bc;
    while (iVar2 != 0) {
        iVar1 = *(iVar2 + 0xc);
        fcn.00022fad(iVar2);
        iVar2 = iVar1;
    }
    *0x152bc = 0;
    fcn.000128be();
    fcn.000123f6();
    *0x152ba = 0;
    *0x152b9 = '\0';
    if (*0x152bb != '\0') {
        iVar2 = fcn.00015a7d();
        if (iVar2 != 0) {
            return 0;
        }
    }
    for (arg_ch = *0x152c0; arg_ch != NULL; arg_ch = arg_ch[0x1c]) {
        if (*arg_ch == 1) {
            fcn.000142c2(arg_ch[4],arg_ch);
        }
        else if (*arg_ch == 2) {
            fcn.00014d1a(arg_ch[4],arg_ch);
        }
        *0x152b9 = *0x152b9 + '\x01';
    }
    if (*0x152bb != '\0') {
        fcn.00015a41();
    }
    return 1;
}


/* fcn.0001223d @ 0x1223d */

void fcn.0001223d(void)

{
    char cVar1;
    int *piVar2;
    
    for (piVar2 = *0x152c0; piVar2 != NULL; piVar2 = piVar2[0x1c]) {
        if (*piVar2 == 1) {
            fcn.000143e1(piVar2 + 4);
        }
        else if (*piVar2 == 2) {
            fcn.00014f4a(piVar2 + 4);
        }
        else {
            cVar1 = fcn.00010354();
            if (cVar1 != '\0') {
                fcn.000102eb(0x13e20,0x176,0x1479c);
            }
        }
    }
    return;
}


/* fcn.00012897 @ 0x12897 */

void fcn.00012897(void)

{
    *0x15318 = 0x80000010;
    *0x1531c = 0x15148;
    *0x15320 = 0x15324;
    *0x15324 = 0x2997;
    *0x15328 = 0x2984;
    *0x1532c = 0x29a7;
    fcn.000102ba(0x15318);
    return;
}


/* fcn.00012892 @ 0x12892 */

void fcn.00012892(void)

{
    *0x15344 = 0;
    *0x15330 = 0x80000010;
    *0x15334 = 0x151e8;
    *0x15338 = 0x15340;
    *0x15340 = 0x10000;
    *0x15348 = 0x2997;
    *0x1534c = 0x2971;
    *0x15350 = 0x29a7;
    fcn.000102ba(0x15330);
    return;
}


/* fcn.0001151d @ 0x1151d */

uint fcn.0001151d(void)

{
    int iVar1;
    uint uVar2;
    int *piVar3;
    
    piVar3 = *0x152c0;
    while( true ) {
        if (piVar3 == NULL) {
            return 0x8000000e;
        }
        if (*piVar3 == 1) break;
        piVar3 = piVar3[0x1c];
    }
    iVar1 = fcn.0002240e(8);
    piVar3[10] = iVar1;
    if (iVar1 == 0) {
        return 0x80000009;
    }
    fcn.000224aa(iVar1,0,8);
    *0x152b0 = 0;
    *piVar3[10] = 1;
    *(piVar3[10] + 4) = 0;
    piVar3[9] = 0;
    piVar3[8] = 0x10000;
    piVar3[5] = -0x7ffffff0;
    piVar3[6] = 0x1522c;
    piVar3[7] = piVar3 + 8;
    piVar3[0xe] = 0x174c;
    piVar3[0xd] = 0x1796;
    piVar3[0xc] = 0x180e;
    piVar3[0xb] = 0x1699;
    uVar2 = fcn.000102ba(piVar3 + 5);
    return uVar2;
}


/* fcn.00011da6 @ 0x11da6 */

int fcn.00011da6(void)

{
    int iVar1;
    char cVar2;
    char cVar4;
    uint32_t uVar3;
    int *piVar5;
    
    uVar3 = 0;
    iVar1 = -0x7ffffff2;
    piVar5 = *0x152c0;
    if (*0x152c0 != NULL) {
        do {
            if (*piVar5 == 2) {
                iVar1 = fcn.0002240e(0xc);
                piVar5[0x16] = iVar1;
                if (iVar1 == 0) {
                    return -0x7ffffff7;
                }
                fcn.000224aa(iVar1,0,0xc);
                *piVar5[0x16] = 9;
                *(piVar5[0x16] + 4) = 4;
                *(piVar5[0x16] + 8) = 0x10000;
                piVar5[0x15] = 0;
                piVar5[0x14] = 0x10000;
                piVar5[0x10] = -0x7ffffff0;
                piVar5[0x11] = 0x1523c;
                piVar5[0x12] = piVar5 + 0x14;
                piVar5[0x17] = 0x1e8b;
                piVar5[0x18] = 0x1ee2;
                piVar5[0x19] = 0x1f05;
                iVar1 = fcn.000102ba(piVar5 + 0x10);
                cVar2 = uVar3;
                cVar4 = (uVar3 >> 8) + '\x01';
                uVar3 = CONCAT11(cVar4,cVar2);
                if (-1 < iVar1) {
                    uVar3 = CONCAT11(cVar4,cVar2 + '\x01');
                    goto code_r0x00011e48;
                }
            }
            else {
code_r0x00011e48:
                piVar5 = piVar5[0x1c];
            }
        } while (piVar5 != NULL);
        if (uVar3 >> 8 != uVar3) {
            iVar1 = -0x7fffffe8;
        }
    }
    return iVar1;
}


/* fcn.00012cd5 @ 0x12cd5 */

bool fcn.00012cd5(void)

{
    int iVar1;
    int32_t var_4h;
    
    var_4h = 0;
    *0x15358 = fcn.000128c3();
    fcn.00010260(*0x15358);
    *0x1535c = 0;
    iVar1 = fcn.000102cc(0x150d8,0,&var_4h,0x1535c);
    return -1 < iVar1;
}


/* fcn.00010260 @ 0x10260 */

void fcn.00010260(int param_1)

{
    //[00] -r-x section size 80832 named .text
    if (((*0x14428 & 1) != 0) && (param_1 == 0)) {
        fcn.000102eb(0x146e8,0x23,0x146bc);
    }
    *0x1c8ac = param_1;
    return;
}


/* fcn.000102cc @ 0x102cc */

void fcn.000102cc(uint param_1,uint param_2,uint param_3,uint param_4)

{
    int *piVar1;
    
    piVar1 = fcn.0001028e();
    (**(*piVar1 + 0x20))(piVar1,param_1,param_2,param_3,param_4);
    return;
}


/* fcn.00012f47 @ 0x12f47 */

uint fcn.00012f47(int32_t *param_1,uchar param_2,uchar param_3,uchar param_4)

{
    int16_t iVar1;
    int arg_ch;
    
    *param_1 = *0x1535c;
    arg_ch = CONCAT21(CONCAT11(param_2,param_3),param_4) << 8;
    param_1[1] = arg_ch;
    iVar1 = fcn.00012d17(*param_1,arg_ch,0);
    if (iVar1 == -1) {
        *param_1 = 0;
        param_1[1] = 0;
        return 0;
    }
    return 1;
}


/* fcn.00012d17 @ 0x12d17 */

uint32_t __cdecl fcn.00012d17(int32_t arg_8h,int32_t arg_ch,int16_t arg_10h)

{
    int iVar1;
    uint32_t uVar2;
    int32_t var_4h;
    
    var_4h = 0;
    iVar1 = (**arg_8h)(*0x15358,arg_8h,1,arg_10h | arg_ch,0,&var_4h);
    if (iVar1 < 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = var_4h & 0xffff;
    }
    return uVar2;
}


/* fcn.00012f98 @ 0x12f98 */

void __cdecl fcn.00012f98(int32_t arg_8h)

{
    int32_t iVar1;
    int iVar2;
    
    iVar1 = arg_8h;
    if (*arg_8h != 0) {
        *0x15364 = arg_8h;
        arg_8h = 0;
        iVar2 = (**(*iVar1 + 0x20))(iVar1,0x15208,0,0,&arg_8h);
        if (iVar2 == 0) {
            *0x15360 = 1;
            *0x15368 = arg_8h;
        }
    }
    return;
}


/* fcn.00012c39 @ 0x12c39 */

uint32_t __cdecl fcn.00012c39(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    int iVar1;
    uint32_t uVar2;
    
    if (arg_14h == 0) {
        uVar2 = fcn.00012d17(arg_8h,arg_ch,4);
        *arg_10h = uVar2 & 0xffff;
        *(arg_10h + 4) = 0;
        fcn.00012e5c(arg_8h,arg_ch,4,uVar2 & 0xffff | 6);
        uVar2 = fcn.00012d17(arg_8h,arg_ch,4);
        iVar1 = *(arg_10h + 4);
        uVar2 = uVar2 & 0xffff;
        if (uVar2 != (*arg_10h | uVar2)) goto code_r0x00012c7b;
    }
    else {
        uVar2 = arg_14h - 1;
        if (uVar2 != 0) goto code_r0x00012c7b;
        fcn.00012e5c(arg_8h,arg_ch,4,*arg_10h);
        uVar2 = fcn.00012d17(arg_8h,arg_ch,4);
        uVar2 = uVar2 & 0xffff;
        if (uVar2 != *arg_10h) goto code_r0x00012c7b;
        iVar1 = *(arg_10h + 4);
    }
    if (iVar1 == 0) {
        return CONCAT31(uVar2 >> 8,1);
    }
code_r0x00012c7b:
    return uVar2 & 0xffffff00;
}


/* fcn.000120d8 @ 0x120d8 */

void fcn.000120d8(int32_t param_1,int32_t param_2)

{
    fcn.00023aac(param_1,param_2);
    return;
}


/* fcn.000121ce @ 0x121ce */

void fcn.000121ce(void)

{
    int iVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = 0;
    var_4h = 0;
    iVar1 = fcn.000102cc(0x151f8,0,&var_8h,&var_4h);
    *0x152bb = -1 < iVar1;
    return;
}


/* fcn.000120ee @ 0x120ee */

uint fcn.000120ee(void)

{
    *0x152c4 = fcn.0002391d(*0x152c8,*0x152cc);
    if (*0x152c4 == 0) {
        return 0x80000007;
    }
    fcn.000238ad(*0x152c4);
    fcn.000121fe();
    return 0;
}


/* fcn.000143e1 @ 0x143e1 */

void fcn.000143e1(uint *param_1)

{
    *param_1 = 0;
    return;
}


/* fcn.00014f4a @ 0x14f4a */

uint fcn.00014f4a(void)

{
    return 0;
}


/* fcn.00010354 @ 0x10354 */

uint8_t fcn.00010354(void)

{
    return *0x14428 & 1;
}


/* fcn.00022fad @ 0x22fad */

void fcn.00022fad(void)

{
    return;
}


/* fcn.000128be @ 0x128be */

void fcn.000128be(void)

{
    int iVar1;
    int iVar2;
    
    *0x15314 = 0;
    iVar2 = *0x15310;
    while (iVar2 != 0) {
        iVar1 = *(iVar2 + 0x30);
        fcn.00022fad(iVar2);
        iVar2 = iVar1;
    }
    *0x15310 = 0;
    return;
}


/* fcn.000123f6 @ 0x123f6 */

void fcn.000123f6(void)

{
    int iVar1;
    int iVar2;
    
    *0x152dc = 0;
    iVar2 = *0x152d8;
    while (iVar2 != 0) {
        iVar1 = *(iVar2 + 8);
        fcn.00022fad(iVar2);
        iVar2 = iVar1;
    }
    *0x152d8 = 0;
    return;
}


/* fcn.00015a7d @ 0x15a7d */

uint fcn.00015a7d(void)

{
    int iVar1;
    uint uVar2;
    
    if (*0x15370 == 0) {
        *0x15370 = fcn.0002240e(0x7e95);
        if (*0x15370 == 0) {
            return 1;
        }
    }
    uVar2 = 0;
    fcn.000224aa(*0x15370,0,0x7e95);
    *0x1537c = *0x15370;
    *0x15380 = *0x15370 + 0x7e95;
    *0x15378 = 0;
    iVar1 = fcn.00016e92(0x1ba0);
    if (iVar1 != 0) {
        uVar2 = fcn.000157d3();
    }
    *0x155ec = uVar2;
    fcn.0001864a();
    fcn.00018770();
    return 0;
}


/* fcn.00016e92 @ 0x16e92 */

uint32_t fcn.00016e92(int param_1)

{
    int iVar1;
    uint32_t uVar2;
    
    if (*0x15378 == 1) {
        iVar1 = *(*0x155ec + 0x14);
        uVar2 = *(iVar1 + 4);
        *(iVar1 + 8) = *(iVar1 + 8) - param_1;
        *(iVar1 + 4) = uVar2 + param_1;
    }
    else {
        uVar2 = 0;
        if (*0x1537c + param_1 < *0x15380) {
            *0x15384 = *0x15384 + param_1;
            uVar2 = *0x1537c;
            *0x1537c = *0x1537c + param_1;
        }
    }
    return uVar2;
}


/* fcn.000157d3 @ 0x157d3 */

int __fastcall fcn.000157d3(int param_1)

{
    int iVar1;
    uint uVar2;
    
    fcn.000157ab();
    fcn.0001767d();
    fcn.00017e7b();
    fcn.000173ea();
    fcn.000173ea();
    iVar1 = fcn.00016e92(0xc);
    if (iVar1 == 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = fcn.00016e22();
    }
    *(param_1 + 0x14) = uVar2;
    return param_1;
}


/* fcn.0001864a @ 0x1864a */

void __fastcall fcn.0001864a(uint *param_1)

{
    int iVar1;
    uint uVar2;
    
    *(param_1 + 4) = 0;
    *param_1 = 0xfffe89ab;
    *(param_1 + 0x64c) = 0;
    fcn.0001e091();
    *(param_1 + 0x6e4) = 0;
    iVar1 = fcn.00016e92(0x38);
    if (iVar1 == 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = fcn.0001f052();
    }
    param_1[6] = uVar2;
    iVar1 = fcn.00016e92(0x68);
    if (iVar1 == 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = fcn.0001c3f9();
    }
    param_1[7] = uVar2;
    fcn.0001c2e7();
    *0x15380 = *0x1537c;
    *(param_1 + 0x6e7) = 0;
    return;
}


/* fcn.00018770 @ 0x18770 */

void fcn.00018770(void)

{
    char cVar1;
    int iVar2;
    uint32_t *puVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint uStack_4;
    
    iVar2 = fcn.0002300e();
    puVar3 = fcn.00023008();
    uStack_4 = 0;
    fcn.0001198b(&uStack_4);
    uVar4 = fcn.00018986(0,uStack_4);
    uVar5 = fcn.000189e6();
    *puVar3 = uVar4 & uVar5 & 0x800023df;
    uVar4 = *(iVar2 + 0x22);
    *(iVar2 + 0x22) = uVar4 | 0x610;
    if ((*puVar3 & 1) == 0) {
        *(iVar2 + 0x10) = *(iVar2 + 0x10) & 0xfffe;
        *(iVar2 + 0x1a) = *(iVar2 + 0x1a) & 0xfffffffe;
    }
    else {
        *(iVar2 + 0x10) = *(iVar2 + 0x10) | 1;
        *(iVar2 + 0x1a) = *(iVar2 + 0x1a) | 1;
    }
    if ((*puVar3 & 2) == 0) {
        *(iVar2 + 0x10) = *(iVar2 + 0x10) & 0xfffd;
        *(iVar2 + 0x1a) = *(iVar2 + 0x1a) & 0xfffffffd;
    }
    else {
        *(iVar2 + 0x10) = *(iVar2 + 0x10) | 2;
        *(iVar2 + 0x1a) = *(iVar2 + 0x1a) | 2;
    }
    if ((*puVar3 & 4) == 0) {
        *(iVar2 + 0x10) = *(iVar2 + 0x10) & 0xfffb;
        *(iVar2 + 0x1a) = *(iVar2 + 0x1a) & 0xfffffffb;
    }
    else {
        *(iVar2 + 0x10) = *(iVar2 + 0x10) | 4;
        *(iVar2 + 0x1a) = *(iVar2 + 0x1a) | 4;
    }
    if ((*puVar3 & 8) == 0) {
        *(iVar2 + 0x10) = *(iVar2 + 0x10) & 0xffef;
        *(iVar2 + 0x1a) = *(iVar2 + 0x1a) & 0xffffffef;
    }
    else {
        *(iVar2 + 0x10) = *(iVar2 + 0x10) | 0x10;
        *(iVar2 + 0x1a) = *(iVar2 + 0x1a) | 0x10;
    }
    if ((*puVar3 & 0x10) == 0) {
        *(iVar2 + 0x10) = *(iVar2 + 0x10) & 0xffdf;
        *(iVar2 + 0x1a) = *(iVar2 + 0x1a) & 0xffffffdf;
    }
    else {
        *(iVar2 + 0x10) = *(iVar2 + 0x10) | 0x20;
        *(iVar2 + 0x1a) = *(iVar2 + 0x1a) | 0x20;
    }
    if ((*puVar3 & 0x40) == 0) {
        uVar4 = uVar4 & 0xfffffffe | 0x610;
    }
    else {
        uVar4 = uVar4 | 0x611;
    }
    *(iVar2 + 0x22) = uVar4;
    if ((*puVar3 & 0x80) == 0) {
        *(iVar2 + 0x22) = *(iVar2 + 0x22) & 0xfffffffd;
    }
    else {
        *(iVar2 + 0x22) = *(iVar2 + 0x22) | 2;
    }
    if ((*puVar3 & 0x100) == 0) {
        *(iVar2 + 0x1e) = *(iVar2 + 0x1e) & 0xfffe;
    }
    else {
        *(iVar2 + 0x1e) = *(iVar2 + 0x1e) | 1;
    }
    if ((*puVar3 & 0x200) == 0) {
        *(iVar2 + 0x1a) = *(iVar2 + 0x1a) & 0xfdffffff;
        *(iVar2 + 0x1e) = *(iVar2 + 0x1e) & 0xffdf;
    }
    else {
        *(iVar2 + 0x1a) = *(iVar2 + 0x1a) | 0x2000000;
        *(iVar2 + 0x1e) = *(iVar2 + 0x1e) | 0x20;
    }
    if ((*puVar3 & 0x2000) == 0) {
        *(iVar2 + 0x1a) = *(iVar2 + 0x1a) & 0xfeffffff;
        *(iVar2 + 0x22) = *(iVar2 + 0x22) & 0xfffff7ff;
    }
    else {
        *(iVar2 + 0x1a) = *(iVar2 + 0x1a) | 0x1000000;
        *(iVar2 + 0x22) = *(iVar2 + 0x22) | 0x800;
    }
    if ((*puVar3 & 0x4000) == 0) {
        *(iVar2 + 0x22) = *(iVar2 + 0x22) & 0xffffefff;
    }
    else {
        *(iVar2 + 0x22) = *(iVar2 + 0x22) | 0x1000;
    }
    uVar4 = *(iVar2 + 0x22);
    *(iVar2 + 0x22) = uVar4 & 0xffffefff | 0x4000;
    cVar1 = fcn.0001872f(1);
    if (cVar1 == '\0') {
        cVar1 = fcn.0001872f(2);
        if (cVar1 == '\0') {
            *(iVar2 + 0x22) = uVar4 & 0xffffefdf | 0x4000;
        }
    }
    cVar1 = fcn.0001872f(1);
    if (cVar1 == '\0') {
        *(iVar2 + 0x22) = *(iVar2 + 0x22) | 0x20000;
    }
    else {
        *(iVar2 + 0x22) = *(iVar2 + 0x22) & 0xfffdffff;
    }
    cVar1 = fcn.0001872f(2);
    if (cVar1 == '\0') {
        *(iVar2 + 0x22) = *(iVar2 + 0x22) | 0x10000;
    }
    else {
        *(iVar2 + 0x22) = *(iVar2 + 0x22) & 0xfffeffff;
    }
    fcn.00018a2b();
    return;
}


/* fcn.000142c2 @ 0x142c2 */

uint __cdecl fcn.000142c2(int32_t arg_8h,int32_t arg_ch)

{
    int32_t arg_8h_00;
    char cVar1;
    uint uVar2;
    uint32_t uVar3;
    int iVar4;
    uint8_t uVar5;
    int iVar6;
    int32_t var_204h;
    int32_t var_154h;
    int8_t var_4h;
    unkbyte3 Stack_7;
    
    arg_8h_00 = arg_8h;
    if (arg_8h == 0) {
        uVar2 = 1;
    }
    else {
        fcn.000224aa(arg_8h + 0x30,0,0xc0);
        cVar1 = fcn.00013bbb(arg_8h_00);
        if (cVar1 == '\0') {
            uVar2 = 2;
        }
        else {
            uVar3 = fcn.000134bf();
            iVar6 = (uVar3 & 0xff) << 8;
            _var_4h = _var_4h & 0xffffff00;
            do {
                uVar3 = _var_4h;
                if (((iVar6 >> 8) >> (iVar6 & 0x1f) & 1) != 0) {
                    fcn.00013dc5(arg_8h_00,_var_4h);
                    arg_8h = arg_8h & 0xffffff;
                    cVar1 = fcn.00014003(arg_8h_00,uVar3,&arg_8h + 3);
                    if (cVar1 == '\0') {
                        if (arg_8h._3_1_ != '\0') {
                            fcn.0001150c();
                        }
                    }
                    else {
                        fcn.000224aa(&var_204h,0,0x200);
                        iVar4 = fcn.00013ca0(arg_8h_00,&var_204h,uVar3,1);
                        if (iVar4 == 0) {
                            if ((var_204h >> 2 & 1) != 0) {
                                iVar4 = fcn.00013cee(arg_8h_00,&var_204h,uVar3);
                                if (iVar4 != 0) goto code_r0x000143ca;
                            }
                            fcn.00013eb2(arg_8h_00,var_154h,uVar3);
                            fcn.00013f15(arg_8h_00,&var_204h,uVar3);
                            fcn.000113e5(arg_8h_00,&var_204h,uVar3,arg_ch);
                        }
                    }
                }
code_r0x000143ca:
                uVar5 = iVar6 + 1;
                iVar6 = CONCAT31(iVar6 >> 8,uVar5);
                _var_4h = CONCAT31(Stack_7,uVar5);
            } while (uVar5 < 8);
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.00014d1a @ 0x14d1a */

uint fcn.00014d1a(int param_1)

{
    char cVar1;
    int iVar2;
    uint uVar3;
    uint32_t uVar4;
    uint32_t arg_ch;
    uint32_t *puVar5;
    int32_t unaff_EDI;
    ulong uVar6;
    uchar auStack_2070 [40];
    uchar uStack_2048;
    uchar auStack_2044 [60];
    uchar auStack_2008 [4];
    uchar auStack_2004 [4];
    uchar auStack_2000 [20];
    uchar auStack_1fec [232];
    ushort uStack_1f04;
    uint32_t uStack_1e00;
    uint8_t uStack_1335;
    uchar auStack_1004 [4];
    uint32_t uStack_1000;
    uint32_t uStack_ffc;
    uint8_t uStack_fe6;
    uint8_t auStack_f7e [3966];
    
    fcn.000224aa(auStack_2008,0,0x1004);
    iVar2 = fcn.00014f4d(param_1,auStack_2004);
    arg_ch = 1;
    if (iVar2 == 1) {
        *(param_1 + 0xd4) = uStack_1f04;
        *(param_1 + 0x8c) = uStack_1e00;
        *(param_1 + 0xd8) = uStack_1335 & 1;
        if (*(param_1 + 0xd9) == '\0') {
            if (1 < uStack_1e00) {
                *(param_1 + 0x8c) = 1;
            }
            fcn.000224aa(auStack_1004,0,0x1004);
            if (*(param_1 + 0x8c) != 0) {
                puVar5 = param_1 + 0x98;
                do {
                    cVar1 = fcn.00014ffa(param_1,arg_ch);
                    if (cVar1 == '\0') goto code_r0x00014d58;
                    iVar2 = fcn.00014f9b(param_1,arg_ch,&uStack_1000);
                    if (iVar2 == 1) {
                        puVar5[-2] = uStack_1000;
                        puVar5[-1] = uStack_ffc;
                        *puVar5 = 1 << (auStack_f7e[(uStack_fe6 & 0xf) * 4] & 0x1f);
                        uVar6 = fcn.00014a79(auStack_2004,&uStack_1000);
                        *(puVar5 + 2) = uVar6;
                        uVar6 = fcn.00023c10(*(param_1 + 200),*(param_1 + 0xcc),*puVar5,0);
                        uVar4 = 0x1000 / *puVar5;
                        if ((uVar6 >> 0x20 == 0) && (uVar6 < uVar4)) {
                            uVar4 = uVar6;
                        }
                        *(param_1 + 0xd0) = uVar4;
                        fcn.0002245a(&stack0xffffdf78,0x15,auStack_2000,0x14);
                        fcn.00022786(&stack0xffffdf78);
                        fcn.0002245a(auStack_2070,0x29,auStack_1fec,0x28);
                        uStack_2048 = 0;
                        fcn.00022786(auStack_2070);
                        fcn.00014968(auStack_2044,auStack_2004,unaff_EDI,arg_ch);
                        fcn.00011bd4(param_1,arg_ch,auStack_2070,&stack0xffffdf78,puVar5[-2],puVar5[-1],*puVar5,
                                     puVar5[2],puVar5[3],*(param_1 + 0xd4) & 1,*(param_1 + 0xd7),*(param_1 + 0xd8),
                                     auStack_2044);
                    }
                    arg_ch = arg_ch + 1;
                    puVar5 = puVar5 + 6;
                } while (arg_ch <= *(param_1 + 0x8c));
            }
        }
        else {
            fcn.00022fad(param_1);
        }
        uVar3 = 1;
    }
    else {
code_r0x00014d58:
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00015a41 @ 0x15a41 */

void fcn.00015a41(void)

{
    int iVar1;
    uint32_t uVar2;
    char cVar3;
    uint unaff_ESI;
    uint32_t uVar4;
    
    iVar1 = *0x155ec;
    fcn.00019004();
    if (*(iVar1 + 0x1930) != '\0') {
        return;
    }
    fcn.0001eeb6();
    *(iVar1 + 0x1930) = 1;
    fcn.0001f07d();
    fcn.00018aa7();
    fcn.0001828b();
    fcn.0001cc56(*(iVar1 + 0x1c));
    iVar1 = *(*(iVar1 + 0x1c) + 0x40);
    if (iVar1 == 0) {
        uVar4 = 0;
    }
    else {
        uVar4 = iVar1 - 8;
    }
    while (uVar4 != 0) {
        uVar2 = *(uVar4 + 0x84);
        if ((((((uVar2 & 0x44) == 0) && (uVar2 < 0x80000000)) &&
             (((uVar2 & 0x10) == 0 || ((*(uVar4 + 0x98) != 2 || (cVar3 = fcn.0001872f(1,unaff_ESI), cVar3 != '\0')))))
             ) && (((*(uVar4 + 0x84) & 0x80) == 0 ||
                   ((*(uVar4 + 0x98) != 2 || (cVar3 = fcn.0001872f(2,unaff_ESI), cVar3 != '\0')))))) &&
           (((*(uVar4 + 0x84) & 0x8000) == 0 && (cVar3 = fcn.00015af3(uVar4), cVar3 == '\0')))) {
            fcn.00011a53(uVar4);
            *(*0x155ec + 0x1b91) = 1;
        }
        iVar1 = *(-(uVar4 != 0) & uVar4 + 8);
        uVar4 = -(iVar1 != 0) & iVar1 - 8U;
    }
    return;
}


/* fcn.000124df @ 0x124df */

int fcn.000124df(uint32_t param_1)

{
    int iVar1;
    
    iVar1 = *0x152d8;
    while( true ) {
        if (iVar1 == 0) {
            return 0;
        }
        if (*(iVar1 + 4) == param_1) break;
        iVar1 = *(iVar1 + 8);
    }
    return iVar1;
}


/* fcn.000124fe @ 0x124fe */

uint32_t __cdecl
fcn.000124fe(uint32_t arg_8h,uint32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h,int32_t arg_1ch,
            int32_t arg_20h,int32_t arg_24h,uint32_t arg_28h)

{
    int32_t *piVar1;
    uint32_t uVar2;
    int iVar3;
    ulong uVar4;
    
    if ((arg_8h != 0) && (arg_ch != 0)) {
        piVar1 = fcn.000124df(arg_ch);
        if (piVar1 == NULL) {
            uVar2 = 0x80000002;
        }
        else {
            uVar4 = fcn.0002258b(arg_10h,arg_14h);
            uVar2 = fcn.0001129c(arg_1ch);
            iVar3 = fcn.00012027(*piVar1,arg_28h != '\0',arg_18h,uVar2 & 0xffff,arg_20h,arg_24h,uVar4,
                                 uVar4 >> 0x20);
            uVar2 = -(iVar3 != 0) & 0x80000007;
        }
        return uVar2;
    }
    return 0x80000002;
}


/* fcn.0001129c @ 0x1129c */

uint32_t fcn.0001129c(uint16_t param_1)

{
    return param_1 >> 8 | param_1 << 8;
}


/* fcn.00012027 @ 0x12027 */

bool __cdecl
fcn.00012027(int32_t arg_8h,uint32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h,int32_t arg_1ch,
            int32_t arg_20h,int32_t arg_24h)

{
    int *piVar1;
    int iVar2;
    
    piVar1 = *arg_8h;
    if (*piVar1 == 1) {
        iVar2 = fcn.00013afd(piVar1[4],*(arg_8h + 4),arg_ch == 1,arg_10h,arg_14h,arg_1ch,arg_18h,arg_20h,arg_24h
                            );
        return iVar2 != 0;
    }
    if (*piVar1 != 2) {
        return true;
    }
    iVar2 = fcn.0001536c(piVar1[4],arg_ch == 1,arg_10h,arg_14h,arg_1ch,arg_18h,arg_20h,arg_24h);
    return iVar2 != 1;
}


/* fcn.0002245a @ 0x2245a */

uint __cdecl fcn.0002245a(uint32_t arg_8h,uint32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    int iVar1;
    
    if (arg_14h == 0) {
        return 0x80000002;
    }
    if (arg_8h != 0) {
        if ((arg_10h != 0) && (arg_14h <= arg_ch)) {
            if (arg_14h != 0) {
                iVar1 = arg_10h - arg_8h;
                do {
                    *arg_8h = *(arg_8h + iVar1);
                    arg_8h = arg_8h + 1;
                    arg_14h = arg_14h + -1;
                } while (arg_14h != 0);
            }
            return 0;
        }
        fcn.000224aa(arg_8h,0,arg_ch);
    }
    return 0x80000002;
}


/* fcn.000131c8 @ 0x131c8 */

uint32_t __cdecl fcn.000131c8(int32_t arg_8h,int32_t arg_ch,int8_t arg_10h)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    
    uVar1 = fcn.00012d4e(arg_8h,arg_ch,(arg_10h + 4) * '\x04');
    if ((uVar1 & 1) == 0) {
        uVar2 = uVar1 >> 1 & 3;
        if (uVar2 == 2) {
            if (arg_10h + 1 < 6) {
                iVar3 = fcn.00012d4e(arg_8h,arg_ch,(arg_10h + 5) * 4);
                uVar1 = uVar1 & 0xfffffff0;
                if (uVar1 != 0 || iVar3 != 0) {
                    if (iVar3 != 0) {
                        uVar1 = 0;
                    }
                    return uVar1;
                }
            }
        }
        else if (uVar2 == 0) {
            return uVar1 & 0xfffffff0;
        }
    }
    return 0;
}


/* fcn.00015051 @ 0x15051 */

uint fcn.00015051(int32_t param_1,int32_t param_2,uint32_t param_3)

{
    int iVar1;
    uint uVar2;
    
    fcn.00012d17(param_1,param_2,0);
    fcn.00012d17(param_1,param_2,2);
    fcn.00012d17(param_1,param_2,0x2e);
    if (((param_3 != 0) && ((param_3 & 0x3fff) == 0)) && (iVar1 = fcn.0002240e(0xe0), iVar1 != 0)) {
        uVar2 = fcn.000224aa(iVar1,0,0xe0);
        return uVar2;
    }
    return 0;
}


/* fcn.0001256f @ 0x1256f */

void fcn.0001256f(int *param_1)

{
    uint32_t arg_8h;
    uint8_t uVar1;
    uint32_t arg_8h_00;
    uint32_t arg_ch;
    ushort uStack_b4;
    uint8_t uStack_b2;
    ushort uStack_b0;
    ushort uStack_ae;
    ushort uStack_ac;
    ushort uStack_aa;
    uint uStack_a8;
    ushort uStack_78;
    uchar uStack_76;
    uint uStack_74;
    uint uStack_70;
    ushort uStack_3c;
    uchar uStack_3a;
    ushort uStack_38;
    
    fcn.000224aa(&uStack_78 + 1,0,0x3b);
    uStack_78 = 0x102;
    uStack_76 = 0xc;
    uStack_74 = 0xa0341d0;
    uStack_70 = 0;
    fcn.000224aa(&uStack_3c + 1,0,0x3b);
    uStack_3c = 0x101;
    uStack_3a = 6;
    uStack_38 = 0xe00;
    fcn.000224aa(&uStack_b4,0,0x3c);
    if (*param_1 == 1) {
        uStack_b4 = 0x1203;
        uVar1 = 10;
        uStack_ac = 0;
    }
    else {
        if (*param_1 != 2) {
            return;
        }
        uVar1 = 0x10;
        uStack_ac = 0xffff;
        uStack_aa = 0xffff;
        uStack_a8 = 0xffffffff;
        uStack_b4 = 0x1703;
    }
    uStack_ae = 0xffff;
    uStack_b0 = 0xffff;
    arg_8h_00 = uVar1 + 0x16;
    uStack_b2 = uVar1;
    arg_8h = fcn.0002240e(arg_8h_00);
    if (arg_8h != 0) {
        fcn.000224aa(arg_8h,0,arg_8h_00);
        fcn.0002245a(arg_8h,0xc,&uStack_78,0xc);
        fcn.0002245a(arg_8h + 0xc,6,&uStack_3c,6);
        arg_ch = uVar1;
        fcn.0002245a(arg_8h + 0x12,arg_ch,&uStack_b4,arg_ch);
        fcn.0002245a(arg_ch + 0x12 + arg_8h,4,0x15040,4);
        param_1[0x1a] = arg_8h;
        param_1[0x1b] = arg_8h_00;
    }
    return;
}


/* fcn.000144e0 @ 0x144e0 */

int32_t * fcn.000144e0(int32_t param_1,int32_t param_2)

{
    char cVar1;
    int16_t iVar2;
    int iVar3;
    int32_t *piVar4;
    int iVar5;
    int iVar6;
    
    iVar2 = fcn.00012d17(param_1,param_2,10);
    cVar1 = fcn.00012dbd(param_1,param_2,9);
    if ((iVar2 != 0x104) && ((iVar2 != 0x106 || (cVar1 != '\x01')))) {
        return NULL;
    }
    iVar3 = fcn.000131c8(param_1,param_2,5);
    piVar4 = NULL;
    if ((iVar3 != 0) && (piVar4 = fcn.0002240e(0x118), piVar4 != NULL)) {
        fcn.000224aa(piVar4,0,0x118);
        *piVar4 = param_1;
        piVar4[1] = param_2;
        piVar4[2] = iVar3;
        piVar4[0x3f] = 0x200;
        piVar4[0x40] = 0x110;
        piVar4[0x41] = 0x420;
        iVar3 = fcn.00012fde(2,0x200,piVar4 + 0x3c,piVar4 + 0x42);
        iVar5 = fcn.00012fde(2,piVar4[0x40],piVar4 + 0x3d,piVar4 + 0x43);
        iVar6 = fcn.00012fde(2,piVar4[0x41],piVar4 + 0x3e,piVar4 + 0x44);
        if ((iVar3 == 0) || ((iVar5 == 0 || (iVar6 == 0)))) {
            fcn.00022fad(piVar4);
            piVar4 = NULL;
        }
        else {
            piVar4[0x3e] = iVar6;
            piVar4[0x3c] = iVar3;
            piVar4[0x3d] = iVar5;
        }
    }
    return piVar4;
}


/* fcn.000224f0 @ 0x224f0 */

void fcn.000224f0(void)

{
    int *piVar1;
    int iVar2;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    piVar1 = fcn.000128c3();
    iVar2 = (**(*piVar1 + 0x20))(piVar1,0x1443c,0,0,&var_4h);
    if (-1 < iVar2) {
        fcn.00022fb0(&var_14h);
        (**(var_4h + 4))(piVar1,var_4h,3000);
        fcn.00022fb0(&var_ch);
        *0x1c898 = fcn.00023c10(var_ch - var_14h,(var_8h - var_10h) - (var_ch < var_14h),3000,0);
    }
    return;
}


/* fcn.000227f1 @ 0x227f1 */

void fcn.000227f1(void)

{
    int *piVar1;
    int iVar2;
    uint32_t uStack_18;
    int iStack_14;
    uint32_t uStack_10;
    int iStack_c;
    int iStack_8;
    
    piVar1 = fcn.000128c3();
    iVar2 = (**(*piVar1 + 0x20))(piVar1,0x1443c,0,0,&iStack_8);
    if (-1 < iVar2) {
        fcn.00022fb0(&uStack_18);
        (**(iStack_8 + 4))(piVar1,iStack_8,3000);
        fcn.00022fb0(&uStack_10);
        *0x1c898 = fcn.00023c10(uStack_10 - uStack_18,(iStack_c - iStack_14) - (uStack_10 < uStack_18),3000,0);
    }
    return;
}


/* fcn.0001211f @ 0x1211f */

uint fcn.0001211f(int32_t param_1)

{
    char cVar1;
    
    if (*0x152c8 != 0) {
        return 0x80000014;
    }
    cVar1 = fcn.00012cd5();
    if (cVar1 == '\0') {
        return 0x80000007;
    }
    cVar1 = fcn.00012f47(0x152c8,0,0xe,0);
    if (cVar1 == '\0') {
        return 0x8000000e;
    }
    *0x152b8 = 0;
    fcn.00012f98(param_1);
    fcn.00012c39(*0x152c8,*0x152cc,0x152d0,0);
    cVar1 = fcn.000120d8(*0x152c8,*0x152cc);
    if (cVar1 == '\0') {
        fcn.00012d17(*0x152c8,*0x152cc,2);
        return 0x80000003;
    }
    fcn.000121ce();
    *0x152b4 = 0x5f;
    fcn.000120ee();
    return 0;
}


/* fcn.000129c3 @ 0x129c3 */

uint fcn.000129c3(uint32_t param_1,int param_2,uint *param_3)

{
    int iVar1;
    uint uVar2;
    uint *puVar3;
    
    if ((param_1 == 0) || (*0x15314 < param_1)) {
        uVar2 = 0x80000002;
    }
    else {
        iVar1 = fcn.00012a1d(param_1);
        if (iVar1 == 0) {
            uVar2 = 0x8000000e;
        }
        else {
            if (param_2 == 0) {
                puVar3 = iVar1 + 0xc;
            }
            else {
                if (param_2 != 1) {
                    return 0x80000007;
                }
                puVar3 = iVar1 + 0x20;
            }
            uVar2 = 0;
            *param_3 = *puVar3;
            param_3[1] = puVar3[1];
            param_3[2] = puVar3[2];
            param_3[3] = puVar3[3];
        }
    }
    return uVar2;
}


/* fcn.00012b8e @ 0x12b8e */

uint __cdecl fcn.00012b8e(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h)

{
    int32_t *piVar1;
    uint uVar2;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int8_t var_8h;
    uint uStack_8;
    
    if ((arg_8h == 0) || (*0x15314 < arg_8h)) {
        uVar2 = 0x80000002;
    }
    else {
        piVar1 = fcn.00012a1d(arg_8h);
        if (piVar1 == NULL) {
            uVar2 = 0x8000000e;
        }
        else {
            var_ch = arg_14h / piVar1[6];
            uStack_8 = 0;
            var_14h = arg_10h;
            var_10h = arg_18h;
            _var_8h = 0;
            var_18h = arg_ch;
            if (piVar1[2] == 1) {
                uVar2 = fcn.00011add();
            }
            else {
                uVar2 = fcn.00015b02(*piVar1,&var_18h);
            }
        }
    }
    return uVar2;
}


/* fcn.00012a1d @ 0x12a1d */

int fcn.00012a1d(uint32_t param_1)

{
    int iVar1;
    
    iVar1 = *0x15310;
    while( true ) {
        if (iVar1 == 0) {
            return 0;
        }
        if (*(iVar1 + 4) == param_1) break;
        iVar1 = *(iVar1 + 0x30);
    }
    return iVar1;
}


/* fcn.00011add @ 0x11add */

uint fcn.00011add(int *param_1,int32_t param_2)

{
    int *piVar1;
    uint uVar2;
    
    piVar1 = *param_1;
    if (*piVar1 == 1) {
        uVar2 = fcn.00011b41(param_1,param_2,piVar1[4],*(param_1 + 1));
        return uVar2;
    }
    if (*piVar1 != 2) {
        return 1;
    }
    uVar2 = fcn.00011b9d(param_2,piVar1[4],*(param_1 + 1) + 1);
    return uVar2;
}


/* fcn.00015b02 @ 0x15b02 */

bool __cdecl fcn.00015b02(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_10h;
    uint32_t var_ch;
    int8_t var_8h;
    
    fcn.00015a4c();
    var_20h = *arg_ch;
    var_1ch = *(arg_ch + 4);
    var_8h = (*(arg_ch + 0x10) != '\0') * '\x02' + 0x28;
    var_18h = *(arg_ch + 8);
    var_10h = *(arg_ch + 0xc) << 9;
    (***arg_8h)(&var_20h);
    return var_ch != 0;
}


/* fcn.00019df2 @ 0x19df2 */

uint __fastcall fcn.00019df2(int32_t *param_1)

{
    int iVar1;
    bool bVar2;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_18h;
    int8_t var_10h;
    int32_t var_8h;
    int8_t var_4h;
    int16_t var_2h;
    
    var_8h = 0;
    var_4h = 0;
    var_2h = 1;
    fcn.0001e0fe(0);
    if (var_8h != 0) {
        *(param_1 + 9) = 6;
        fcn.0002245a(var_8h,0x1ec,param_1 + 1,0x1ec);
        var_28h = *param_1;
        var_24h = 0;
        var_18h = 0x200;
        var_20h = var_8h;
        var_10h = 0x2a;
        iVar1 = 2;
        do {
            (****(*0x150c4 + 0x23c))(&var_28h);
            bVar2 = 0xffffffef < var_28h;
            var_28h = var_28h + 0x10;
            var_24h = var_24h + bVar2;
            iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
    }
    fcn.0001e001(var_8h);
    return 1;
}


/* fcn.00015a4c @ 0x15a4c */

uint fcn.00015a4c(void)

{
    uint16_t uVar1;
    uint32_t *puVar2;
    uint uVar3;
    int iVar4;
    bool bVar5;
    uint32_t uStack_2c;
    int iStack_28;
    uint32_t uStack_24;
    uint uStack_1c;
    uchar uStack_14;
    uint32_t uStack_c;
    uint uStack_8;
    
    puVar2 = *0x150c4;
    uStack_8 = 0x18dfc;
    uVar3 = fcn.00018d4d();
    if (((uVar3 != '\0') && (*(puVar2 + 0x1f2) == '\0')) && (*(puVar2 + 0x7c) = puVar2[0x7c] + 1, 100 < puVar2[0x7c]))
    {
        puVar2[0x74] = puVar2[0x74] | 2;
        *(puVar2 + 0x1f2) = 1;
        uStack_c = 0;
        uVar1 = uStack_8;
        uStack_8 = CONCAT22(1,uVar1 & 0xff00);
        fcn.0001e0fe(0);
        if (uStack_c != 0) {
            *(puVar2 + 9) = 6;
            fcn.0002245a(uStack_c,0x1ec,puVar2 + 1,0x1ec);
            uStack_2c = *puVar2;
            iStack_28 = 0;
            uStack_1c = 0x200;
            uStack_24 = uStack_c;
            uStack_14 = 0x2a;
            iVar4 = 2;
            do {
                (***(*0x150c4)[0x8f])(&stack0xffffffd4);
                bVar5 = 0xffffffef < uStack_2c;
                uStack_2c = uStack_2c + 0x10;
                iStack_28 = iStack_28 + bVar5;
                iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
        }
        fcn.0001e001(uStack_c);
        return 1;
    }
    return uVar3;
}


/* fcn.00018d4d @ 0x18d4d */

uint32_t __fastcall fcn.00018d4d(int param_1)

{
    uint32_t in_EAX;
    uint32_t uVar1;
    
    if (((*(param_1 + 0x238) != 0) && (*(param_1 + 0x23c) != 0)) && ((*(param_1 + 0x1d0) & 0x80) != 0)) {
        uVar1 = fcn.00019d83(*(param_1 + 0xb4));
        return uVar1;
    }
    return in_EAX & 0xffffff00;
}


/* fcn.00019d83 @ 0x19d83 */

int fcn.00019d83(uint16_t param_1)

{
    unkuint3 Var1;
    
    Var1 = param_1 >> 8;
    if ((2 < param_1) && ((param_1 == 3 || ((4 < param_1 && (param_1 < 9)))))) {
        return CONCAT31(Var1,1);
    }
    return Var1 << 8;
}


/* fcn.00012e5c @ 0x12e5c */

void fcn.00012e5c(int param_1,uint32_t param_2,uint16_t param_3)

{
    (**(param_1 + 4))(*0x15358,param_1,1,param_3 | param_2,0,&stack0x00000010);
    return;
}


/* fcn.00013020 @ 0x13020 */

int32_t __cdecl fcn.00013020(int32_t arg_8h)

{
    int iVar1;
    int32_t var_4h;
    
    iVar1 = 0;
    var_4h = 0;
    if (*0x15360 == '\0') {
        var_4h = fcn.0002240e(arg_8h);
    }
    else {
        if (*0x15368 == 0) {
            return 0;
        }
        iVar1 = (**(*0x15368 + 0x14))(*0x15368,4,((arg_8h & 0xfffU) != 0) + (arg_8h >> 0xc),&var_4h,0,0);
    }
    if ((-1 < iVar1) && (var_4h != 0)) {
        fcn.000224aa(var_4h,0,arg_8h);
        return var_4h;
    }
    return 0;
}


/* fcn.000130ef @ 0x130ef */

int __cdecl fcn.000130ef(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h)

{
    int iVar1;
    uint32_t var_4h;
    
    if (*0x15360 == '\0') {
        iVar1 = 0;
    }
    else if (*0x15368 == 0) {
        iVar1 = -0x7ffffff9;
    }
    else {
        var_4h = arg_10h;
        iVar1 = (**(*0x15368 + 0xc))(*0x15368,arg_8h,arg_ch,&var_4h,arg_14h,arg_18h);
        if (-1 < iVar1) {
            if (var_4h == arg_10h) {
                iVar1 = (**(*0x15368 + 8))(*0x15368,*arg_18h,1,0);
            }
            else {
                iVar1 = -0x7ffffff7;
            }
        }
    }
    return iVar1;
}


/* fcn.0001309d @ 0x1309d */

uint fcn.0001309d(uint32_t param_1,uint param_2)

{
    uint uVar1;
    
    uVar1 = 0;
    if (*0x15360 == '\0') {
        fcn.00022fad(param_2);
    }
    else {
        if (*0x15368 == 0) {
            return 0x80000007;
        }
        uVar1 = (**(*0x15368 + 0x18))(*0x15368,((param_1 & 0xfff) != 0) + (param_1 >> 0xc),param_2);
    }
    return uVar1;
}


/* fcn.00012d4e @ 0x12d4e */

int32_t __cdecl fcn.00012d4e(int32_t arg_8h,int32_t arg_ch,int16_t arg_10h)

{
    int iVar1;
    int32_t var_4h;
    
    var_4h = 0;
    iVar1 = (**arg_8h)(*0x15358,arg_8h,2,arg_10h | arg_ch,0,&var_4h);
    if (iVar1 < 0) {
        var_4h = 0;
    }
    return var_4h;
}


/* fcn.00012e81 @ 0x12e81 */

void fcn.00012e81(int param_1,uint32_t param_2,uint16_t param_3)

{
    (**(param_1 + 4))(*0x15358,param_1,2,param_3 | param_2,0,&stack0x00000010);
    return;
}


/* fcn.00013826 @ 0x13826 */

void __fastcall fcn.00013826(uint *param_1,uint param_2,uint16_t param_3)

{
    fcn.00012ee9(*param_1,param_1[1],param_3 + param_1[2],param_2);
    return;
}


/* fcn.00012ee9 @ 0x12ee9 */

void fcn.00012ee9(uint param_1,uint param_2,uint param_3,uint param_4)

{
    (**(*(**0x15358 + 0x60) + 0x48))(*0x15358,*(**0x15358 + 0x60),param_3,0,param_4);
    return;
}


/* fcn.000136fc @ 0x136fc */

uint __cdecl fcn.000136fc(int32_t arg_8h,int8_t arg_ch)

{
    char cVar1;
    uint32_t uVar2;
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.000134bf();
    fcn.00013826((arg_ch + 2) * 0x80 + 0x18);
    fcn.0002255d(500000,0);
    do {
        cVar1 = fcn.000225c3();
        if (cVar1 != '\0') {
            return 0;
        }
        uVar2 = fcn.000134bf();
    } while ((uVar2 & 0x8000) != 0);
    return 1;
}


/* fcn.0002255d @ 0x2255d */

int64_t __cdecl fcn.0002255d(int32_t arg_8h,int32_t arg_ch)

{
    int64_t iVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.00022fb0(&var_8h);
    iVar1 = fcn.00023c80(*0x1c898,0,arg_8h,arg_ch);
    return iVar1 + CONCAT44(var_4h,var_8h);
}


/* fcn.00022fb0 @ 0x22fb0 */

ulong __cdecl fcn.00022fb0(int32_t arg_8h)

{
    ulong uVar1;
    uint in_EAX;
    uint in_EDX;
    
    uVar1 = rdtsc();
    *arg_8h = uVar1;
    *(arg_8h + 4) = uVar1 >> 0x20;
    return CONCAT44(in_EDX,in_EAX);
}


/* fcn.00023c80 @ 0x23c80 */

int64_t fcn.00023c80(uint32_t param_1,int param_2,uint32_t param_3,int param_4)

{
    if (param_4 == 0 && param_2 == 0) {
        return param_1 * param_3;
    }
    return CONCAT44((param_1 * param_3 >> 0x20) + param_2 * param_3 + param_1 * param_4,param_1 * param_3);
}


/* fcn.000225c3 @ 0x225c3 */

uint __fastcall fcn.000225c3(uint32_t *param_1)

{
    uint uVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = param_1;
    var_4h = param_1;
    fcn.00022fb0(&var_8h);
    if ((var_4h < param_1[1]) || ((var_4h == param_1[1] && (var_8h < *param_1)))) {
        uVar1 = 0;
    }
    else {
        uVar1 = 1;
    }
    return uVar1;
}


/* fcn.000227f6 @ 0x227f6 */

//WARNING: Removing unreachable block (ram,0x00022837)

void __cdecl fcn.000227f6(int16_t arg_8h)

{
    int64_t iVar1;
    uint32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.00022fb0(&var_8h);
    iVar1 = fcn.00023c80(*0x1c898,0,arg_8h,0);
    do {
        fcn.00022fb0(&var_10h);
    } while (CONCAT44(var_ch,var_10h) < iVar1 + CONCAT44(var_4h,var_8h));
    return;
}


/* fcn.000132e4 @ 0x132e4 */

void fcn.000132e4(uint param_1,uint8_t param_2)

{
    fcn.00013826(param_2 * 0x80 + 0x130);
    return;
}


/* fcn.0001330a @ 0x1330a */

void fcn.0001330a(int32_t param_1,uint8_t param_2)

{
    int16_t iVar1;
    
    fcn.000136fc(param_1,param_2);
    iVar1 = (param_2 + 2) * 0x80 + 0x2c;
    fcn.000134bf();
    fcn.00013826(iVar1);
    fcn.000227f6(5000);
    fcn.000134bf();
    fcn.00013826(iVar1);
    return;
}


/* fcn.00013645 @ 0x13645 */

uint fcn.00013645(uint param_1,uint8_t param_2)

{
    int16_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    iVar1 = (param_2 + 2) * 0x80 + 0x18;
    uVar2 = fcn.000134bf();
    if ((uVar2 & 1) == 0) {
        fcn.000134bf();
        fcn.00013826(iVar1);
        uVar2 = fcn.000134bf();
        uVar3 = fcn.000134bf();
        uVar4 = fcn.000134bf();
        if (((((uVar2 & 0x8000) != 0) || ((uVar2 & 0x10) == 0)) || ((uVar3 & 0x88) != 0)) ||
           ((((uVar4 & 0xf) != 3 && (uVar2 = uVar4 >> 8 & 0xf, uVar2 != 6)) && (uVar2 != 2)))) {
            return 0;
        }
        fcn.00013826(iVar1);
    }
    return 1;
}


/* fcn.000134d4 @ 0x134d4 */

void fcn.000134d4(uint param_1,uint8_t param_2)

{
    int16_t iVar1;
    
    iVar1 = (param_2 + 2) * 0x80;
    fcn.00013826(iVar1);
    fcn.00013826(iVar1 + 4);
    fcn.00013826(iVar1 + 8);
    fcn.00013826(iVar1 + 0xc);
    return;
}


/* fcn.00012fd8 @ 0x12fd8 */

uchar fcn.00012fd8(void)

{
    return *0x15360;
}


/* fcn.00013383 @ 0x13383 */

bool __cdecl fcn.00013383(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    int32_t var_8h;
    
    *arg_ch = 0;
    iVar1 = fcn.000130ef(*(arg_8h + 8) == 1,*arg_8h,*(arg_8h + 4),&var_8h,arg_ch);
    if (-1 < iVar1) {
        *arg_8h = var_8h;
    }
    return -1 < iVar1;
}


/* fcn.00013545 @ 0x13545 */

uint32_t __cdecl fcn.00013545(uint32_t arg_8h)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t *puVar4;
    uint8_t *puVar5;
    uint *puVar6;
    uint *puVar7;
    int8_t var_4h;
    uint8_t *in_stack_00000008;
    uint8_t in_stack_0000000c;
    
    fcn.000134d4(arg_8h,in_stack_00000008[0xc]);
    puVar4 = (*(arg_8h + 0xf8) + 0x400U & 0xfffffc00) + in_stack_0000000c * 0x20;
    fcn.000224aa(puVar4,0,0x20);
    puVar6 = *(arg_8h + 0xf4) + 0x80U & 0xffffff80;
    fcn.000224aa(puVar6,0,0x80);
    uVar1 = *puVar4;
    puVar4[2] = puVar6;
    uVar2 = uVar1 & 0xffff0fff | 0x80;
    *puVar4 = uVar2;
    if (*(in_stack_00000008 + 8) == 2) {
        uVar2 = uVar1 & 0xffff0fff | 0xc0;
        *puVar4 = uVar2;
    }
    if (in_stack_00000008[0x1f] == 0xa0) {
        *puVar4 = *puVar4 | 0x20;
        puVar6[0x10] = *(in_stack_00000008 + 0xd);
        puVar6[0x11] = *(in_stack_00000008 + 0x11);
        puVar6[0x12] = *(in_stack_00000008 + 0x15);
        puVar6[0x13] = *(in_stack_00000008 + 0x19);
    }
    if (*(in_stack_00000008 + 8) != 0) {
        if (((*in_stack_00000008 & 1) != 0) || ((in_stack_00000008[4] & 1) != 0)) {
            return uVar2 & 0xffffff00;
        }
        fcn.000224aa(puVar6 + 0x20,0,0x10);
        puVar6[0x20] = *in_stack_00000008;
        puVar6[0x23] = puVar6[0x23] ^ (*(in_stack_00000008 + 4) - 1U ^ puVar6[0x23]) & 0x3fffff;
        *(puVar4 + 2) = 1;
    }
    *puVar4 = *puVar4 & 0xffffffe5 | 5;
    puVar5 = in_stack_00000008 + 0x1d;
    puVar7 = puVar6;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 4;
        puVar7 = puVar7 + 1;
    }
    *puVar6 = 0x27;
    *(puVar6 + 1) = *(puVar6 + 1) & 0xf0 | 0x80;
    return 1;
}


/* fcn.000133c2 @ 0x133c2 */

uint fcn.000133c2(uint32_t param_1,uint param_2,uint param_3,int32_t param_4,int32_t param_5)

{
    char cVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t unaff_ESI;
    char unaff_retaddr;
    int32_t iStack_4;
    
    fcn.0002255d(param_4,param_5);
    cVar1 = fcn.000225c3();
    do {
        if (cVar1 != '\0') {
code_r0x00013449:
            uVar2 = fcn.000134bf();
            uVar3 = fcn.000134bf();
            if ((uVar2 & 0x78000000) == 0) {
                if ((uVar3 & 1) == 0) {
                    if (unaff_retaddr != '\0') {
                        return 0;
                    }
                    return 0xb;
                }
            }
            else {
                fcn.000136fc(iStack_4,param_2);
                fcn.000132e4(iStack_4,param_2);
                fcn.00013826(((param_2 & 0xff) + 2) * 0x80 + 0x10);
                if ((unaff_ESI & 0x88) != 0) {
                    fcn.0001330a(iStack_4,param_2);
                }
                fcn.00013645(iStack_4,param_2);
            }
            return 2;
        }
        uVar2 = fcn.000134bf();
        uVar3 = fcn.000134bf();
        if ((uVar3 & 0x48000000) != 0) goto code_r0x00013449;
        if ((param_1 & uVar2) == 0) {
            unaff_retaddr = '\x01';
            goto code_r0x00013449;
        }
        cVar1 = fcn.000225c3();
    } while( true );
}


/* fcn.00013158 @ 0x13158 */

uint fcn.00013158(uint param_1)

{
    uint uVar1;
    
    if (*0x15360 == '\0') {
        return 0;
    }
    if (*0x15368 == 0) {
        return 0x80000007;
    }
    uVar1 = (**(*0x15368 + 0x10))(*0x15368,param_1);
    return uVar1;
}


/* fcn.0001376f @ 0x1376f */

uint __cdecl
fcn.0001376f(int32_t arg_8h,int8_t arg_ch,uint32_t arg_10h,int8_t arg_14h,int32_t arg_18h,int32_t arg_1ch,
            int32_t arg_20h,int32_t arg_24h,int32_t arg_28h)

{
    uint uVar1;
    uint32_t uVar2;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int8_t var_28h;
    int8_t var_15h;
    int8_t var_14h;
    int8_t var_13h;
    int8_t var_12h;
    int8_t var_11h;
    int8_t var_10h;
    int8_t var_bh;
    
    uVar2 = arg_20h >> 9;
    if (uVar2 < 0x10000) {
        fcn.000224aa(&var_34h,0,0x31);
        if (arg_20h == 0) {
            var_2ch = 0;
            var_15h = 0x5b;
            if (arg_10h == 1) {
                var_10h = 1;
            }
        }
        else {
            var_bh = uVar2;
            var_30h = arg_20h;
            var_13h = uVar2 >> 8;
            var_15h = (arg_10h == 0) * '\x02' + 0x5c;
            var_2ch = (arg_10h == 0) + 1;
            var_34h = arg_1ch;
        }
        var_10h = var_10h | 0x40;
        var_14h = arg_14h;
        var_12h = arg_18h;
        var_11h = arg_18h >> 8;
        var_28h = arg_ch;
        uVar1 = fcn.00013840(arg_8h,&var_34h,arg_24h,arg_28h,1);
    }
    else {
        uVar1 = 2;
    }
    return uVar1;
}


/* fcn.00013ca0 @ 0x13ca0 */

void __cdecl fcn.00013ca0(int32_t arg_8h,int32_t arg_ch,int8_t arg_10h,int32_t arg_14h)

{
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int8_t var_28h;
    int8_t var_15h;
    
    fcn.000224aa(&var_34h,0,0x31);
    var_28h = arg_10h;
    var_34h = arg_ch;
    var_2ch = 1;
    var_15h = -0x14;
    var_30h = 0x200;
    fcn.00013840(arg_8h,&var_34h,60000000,0,arg_14h);
    return;
}


/* fcn.0001415d @ 0x1415d */

bool __cdecl fcn.0001415d(int32_t arg_8h,int32_t arg_ch)

{
    bool bVar1;
    char cVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uchar uVar5;
    bool bVar6;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    bVar1 = false;
    fcn.0002255d(15000,0);
    cVar2 = fcn.000225c3();
    if (cVar2 == '\0') {
        do {
            uVar3 = fcn.000134bf();
            uVar4 = uVar3 & 0xf;
            if (((uVar4 == 1) || (uVar4 == 3)) && (bVar1 = true, uVar4 == 3)) {
                bVar6 = true;
                bVar1 = true;
                fcn.000132e4(arg_8h,arg_ch);
                break;
            }
            bVar6 = false;
            cVar2 = fcn.000225c3();
        } while (cVar2 == '\0');
        if ((bVar1) && ((uVar3 & 0xf) != 3)) {
            fcn.0002255d(5000,0);
            cVar2 = fcn.000225c3();
            if (cVar2 != '\0') {
                return bVar6;
            }
            uVar5 = fcn.000134bf();
            return uVar5;
        }
    }
    return bVar1;
}


/* fcn.0001423f @ 0x1423f */

uchar fcn.0001423f(void)

{
    char cVar1;
    uint32_t uVar2;
    uchar uVar3;
    ulong uVar4;
    uint uVar5;
    uint uVar6;
    uint extraout_var;
    uint extraout_var_00;
    
    uVar3 = 0;
    uVar6 = 0;
    uVar5 = 31000000;
    uVar4 = fcn.0002255d(31000000,0);
    cVar1 = fcn.000225c3(uVar5,uVar6,uVar4,extraout_var,extraout_var_00);
    if (cVar1 == '\0') {
        do {
            uVar2 = fcn.000134bf();
            if ((uVar2 & 0x89) == 0) {
                uVar3 = 1;
                break;
            }
            fcn.000134bf();
            fcn.00013826();
            cVar1 = fcn.000225c3();
            uVar3 = 0;
        } while (cVar1 == '\0');
    }
    return uVar3;
}


/* fcn.00013bbb @ 0x13bbb */

uint __cdecl fcn.00013bbb(int32_t arg_8h)

{
    uint32_t *puVar1;
    uint8_t uVar2;
    char cVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint8_t uVar6;
    int32_t var_8h;
    int32_t var_4h;
    
    if (arg_8h != 0) {
        uVar2 = fcn.000134bf();
        uVar5 = uVar2;
        while (uVar2 != 0) {
            uVar6 = uVar5 >> 8;
            if ((uVar5 & 1) != 0) {
                uVar4 = fcn.000134bf();
                if ((uVar4 & 0xf0) < 0x31) {
                    *(arg_8h + 0xc + uVar6 * 4) = *(arg_8h + 0xc + uVar6 * 4) & 0xffffff0f | uVar4 & 0xf0;
                }
                else {
                    puVar1 = arg_8h + 0xc + uVar6 * 4;
                    *puVar1 = *puVar1 & 0xffffff0f;
                }
            }
            uVar2 = uVar5 >> 1;
            uVar5 = CONCAT11(uVar6 + 1,uVar2);
        }
        fcn.00013826(4);
        fcn.0002255d(1000000,0);
        cVar3 = fcn.000225c3();
        while (cVar3 == '\0') {
            uVar5 = fcn.000134bf();
            if ((uVar5 & 1) == 0) {
                fcn.00013826(4);
                fcn.00013826(8);
                return 1;
            }
            cVar3 = fcn.000225c3();
        }
    }
    return 0;
}


/* fcn.00013dc5 @ 0x13dc5 */

uint fcn.00013dc5(int32_t param_1,uint param_2)

{
    char cVar1;
    uint32_t uVar2;
    uint uVar3;
    int16_t iVar4;
    
    iVar4 = ((param_2 & 0xff) + 2) * 0x80;
    uVar2 = fcn.000134bf();
    if ((uVar2 & 0xc011) != 0) {
        cVar1 = fcn.000136fc(param_1,param_2);
        if (cVar1 == '\0') {
            return 0;
        }
        if ((uVar2 & 0x10) != 0) {
            fcn.00013826(iVar4 + 0x18);
            fcn.0002255d(500000,0);
            uVar3 = fcn.000225c3();
            return uVar3;
        }
    }
    fcn.000134d4(param_1,param_2);
    fcn.00013826(iVar4 + 0x18);
    fcn.000132e4(param_1,param_1);
    fcn.00013826(iVar4 + 0x10);
    fcn.00013826(iVar4 + 0x14);
    return 1;
}


/* fcn.00014003 @ 0x14003 */

bool fcn.00014003(uchar *param_1,int32_t param_2)

{
    int16_t iVar1;
    char cVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    int16_t iVar7;
    uchar unaff_BL;
    
    iVar7 = ((param_2 & 0xff) + 2) * 0x80;
    iVar1 = iVar7 + 0x18;
    uVar4 = fcn.000134bf();
    uVar5 = fcn.000134bf();
    if (((uVar5 & 0x10000000) == 0) || ((uVar4 & 0x82000) != 0x82000)) {
        if (((uVar5 & 0x8000000) == 0) || ((uVar4 & 2) != 0)) {
            fcn.0001330a(param_1,param_2);
        }
        else {
            fcn.00013826(iVar1);
        }
        cVar2 = fcn.0001415d(param_1,param_2);
        if (cVar2 != '\0') {
code_r0x000140d8:
            fcn.000132e4(param_1,param_2);
            fcn.000134bf();
            fcn.00013826(iVar1);
            *param_1 = 0;
            cVar2 = fcn.0001423f(param_1,param_2);
            if (cVar2 == '\0') {
                return false;
            }
            iVar6 = fcn.000134bf();
            if (iVar6 == -0x14ebfeff) {
                fcn.000134bf();
                *param_1 = 1;
                fcn.00013826(iVar1);
                return unaff_BL;
            }
            return iVar6 == 0x101;
        }
        uVar3 = fcn.000134bf();
        if ((uVar3 & 0xf) == 1) {
            fcn.0001330a(param_1,param_2);
            cVar2 = fcn.0001415d(param_1,param_2);
            if (cVar2 != '\0') goto code_r0x000140d8;
        }
    }
    else if ((uVar4 & 1) == 0) {
        fcn.000134bf();
        fcn.00013826(iVar7 + 0x2c);
    }
    return false;
}


/* fcn.00013cee @ 0x13cee */

int __cdecl fcn.00013cee(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    int iVar1;
    int8_t arg_10h_00;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int8_t var_28h;
    int16_t var_15h;
    int32_t var_13h;
    int8_t var_bh;
    int8_t var_ah;
    
    fcn.000224aa(&var_34h,0,0x31);
    var_2ch = 0;
    arg_10h_00 = arg_10h;
    var_15h = 0x7ef;
    var_28h = arg_10h_00;
    iVar1 = fcn.00013840(arg_8h,&var_34h,60000000,0,1);
    if (((iVar1 == 0) && (iVar1 = fcn.00013ca0(arg_8h,arg_ch,arg_10h_00,0), iVar1 == 0)) &&
       ((*arg_ch >> 2 & 1) == 0)) {
        return 0;
    }
    fcn.000224aa(&var_34h,0,0x31);
    var_15h = CONCAT11(var_15h._1_1_,200);
    var_2ch = 1;
    var_ah = 0;
    var_13h = 0x40000000;
    var_bh = 1;
    var_34h = arg_ch;
    var_30h = 0x200;
    var_28h = arg_10h_00;
    iVar1 = fcn.00013840(arg_8h,&var_34h,60000000,0,1);
    if (iVar1 == 0) {
        iVar1 = fcn.00013ca0(arg_8h,arg_ch,arg_10h_00,1);
        if ((iVar1 == 0) && ((*arg_ch >> 2 & 1) == 0)) {
            iVar1 = 0;
        }
        else {
            iVar1 = 2;
        }
    }
    return iVar1;
}


/* fcn.00013eb2 @ 0x13eb2 */

void __cdecl fcn.00013eb2(int32_t arg_8h,int8_t arg_ch,int8_t arg_10h)

{
    uint8_t uVar1;
    uint8_t uVar2;
    int32_t var_34h;
    int32_t var_2ch;
    int8_t var_28h;
    int16_t var_15h;
    int8_t var_bh;
    
    uVar2 = 0;
    fcn.000224aa(&var_34h,0,0x31);
    uVar1 = 6;
    do {
        if ((arg_ch >> (uVar1 & 0x1f) & 1) != 0) {
            uVar2 = uVar1;
            break;
        }
        uVar1 = uVar1 - 1;
    } while (-1 < uVar1);
    var_2ch = 0;
    var_bh = uVar2 & 7 | 0x40;
    var_28h = arg_10h;
    var_15h = 0x3ef;
    fcn.00013840(arg_8h,&var_34h,60000000,0,1);
    return;
}


/* fcn.00013f15 @ 0x13f15 */

void fcn.00013f15(int param_1,int param_2,uint8_t param_3)

{
    ushort uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t *puVar4;
    uint32_t uVar5;
    
    if (param_3 < 8) {
        puVar4 = (param_3 + 2) * 0x18 + param_1;
        puVar4[4] = puVar4[4] | 4;
        if (((*(param_2 + 0xa6) & 0x400) == 0) || ((*(param_2 + 0xac) & 0x400) == 0)) {
            uVar2 = *(param_2 + 0x78) & 0xfffffff;
            puVar4[1] = 0;
            uVar5 = puVar4[4] & 0xfffffffd;
        }
        else {
            uVar2 = *(param_2 + 200);
            uVar5 = puVar4[4] | 2;
            puVar4[1] = *(param_2 + 0xcc);
        }
        uVar3 = 0;
        *puVar4 = uVar2;
        puVar4[4] = uVar5;
        if ((((*(param_2 + 0x100) & 7) == 7) && ((*(param_2 + 0xa4) & 2) != 0)) && ((*(param_2 + 0xaa) & 2) != 0)) {
            uVar3 = 1;
        }
        uVar2 = puVar4[4];
        puVar4[4] = uVar2 & 0xfffffffe | uVar3;
        if (((*(param_2 + 0xd4) & 0xc000) == 0x4000) && ((*(param_2 + 0xd4) & 0x1000) != 0)) {
            uVar5 = *(param_2 + 0xea) * 2;
        }
        else {
            uVar5 = 0x200;
        }
        puVar4[2] = uVar5;
        if ((uVar2 & 2) == 0) {
            uVar1 = 0x100;
        }
        else {
            uVar1 = 0x400000 / uVar5;
        }
        *(puVar4 + 3) = uVar1;
    }
    return;
}


/* fcn.000113e5 @ 0x113e5 */

void fcn.000113e5(uint param_1,int param_2,uchar param_3)

{
    uint16_t uVar1;
    int *piVar2;
    int *piVar3;
    int *piVar4;
    char cVar5;
    int iVar6;
    int *piVar7;
    uint16_t uVar8;
    int iVar9;
    
    uVar1 = *(param_2 + 0xd4);
    uVar8 = uVar1 >> 0xe;
    if (((uVar8 != 1) || ((uVar1 & 0x1000) == 0)) && (*0x152ba < 0x20)) {
        iVar6 = 0x200;
        if ((uVar8 == 1) && ((uVar1 & 0x1000) != 0)) {
            iVar9 = *(param_2 + 0xea) * 2;
        }
        else {
            iVar9 = 0x200;
        }
        if (iVar9 != 0x200) {
            if ((uVar8 == 1) && ((uVar1 & 0x1000) != 0)) {
                iVar6 = *(param_2 + 0xea) * 2;
            }
            if (iVar6 != 0x1000) {
                return;
            }
        }
        iVar6 = fcn.000120a9(param_1,1);
        if ((iVar6 != 0) && (piVar7 = fcn.0002240e(0x10), piVar7 != NULL)) {
            fcn.000224aa(piVar7,0,0x10);
            *(piVar7 + 6) = 1;
            *(piVar7 + 1) = param_3;
            *(piVar7 + 5) = *0x152ba;
            *piVar7 = iVar6;
            fcn.0001284a(iVar6,*0x152ba);
            *0x152ba = *0x152ba + 1;
            cVar5 = fcn.000120e8();
            piVar2 = piVar7;
            if (cVar5 == '\0') {
                piVar4 = *0x152bc;
                if ((*(param_2 + 0x60) & 1) != 0) {
                    fcn.00011a89(piVar7,1 << (*(piVar7 + 5) & 0x1f),0,0);
                    piVar4 = *0x152bc;
                }
            }
            else {
                fcn.0001583c(piVar7,param_2,*(piVar7 + 5));
                piVar4 = *0x152bc;
            }
            do {
                piVar3 = piVar4;
                if (piVar3 == NULL) {
                    *0x152bc = piVar2;
                    return;
                }
                piVar2 = *0x152bc;
                piVar4 = piVar3[3];
            } while (piVar3[3] != NULL);
            piVar3[3] = piVar7;
        }
    }
    return;
}


/* fcn.0001150c @ 0x1150c */

void fcn.0001150c(void)

{
    if (*0x152ba < 0x20) {
        *0x152ba = *0x152ba + 1;
    }
    return;
}


/* fcn.00012dbd @ 0x12dbd */

//WARNING: Variable defined which should be unmapped: var_1h

uint32_t __cdecl fcn.00012dbd(int32_t arg_8h,int32_t arg_ch,int16_t arg_10h)

{
    uint32_t uVar1;
    int32_t var_1h;
    
    uVar1 = (**arg_8h)(*0x15358,arg_8h,0,arg_10h | arg_ch,0,&var_1h);
    return uVar1 & 0xffffff00;
}


/* fcn.00012fde @ 0x12fde */

int __cdecl fcn.00012fde(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    int arg_ch_00;
    int iVar1;
    
    arg_ch_00 = fcn.00013020(arg_ch);
    if (arg_ch_00 != 0) {
        iVar1 = fcn.000130ef(arg_8h,arg_ch_00,arg_ch,arg_10h,arg_14h);
        if (-1 < iVar1) {
            return arg_ch_00;
        }
        fcn.0001309d(arg_ch,arg_ch_00);
    }
    return 0;
}


/* fcn.00015489 @ 0x15489 */

void fcn.00015489(uint *param_1,int param_2)

{
    fcn.00012e0e(*param_1,param_1[1],param_1[2] + param_2);
    return;
}


/* fcn.000148fd @ 0x148fd */

uint __cdecl fcn.000148fd(int32_t arg_8h,uint32_t arg_ch,int32_t arg_10h)

{
    uint8_t uVar1;
    char cVar2;
    uint32_t uVar3;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar3 = fcn.00015489(arg_8h,0x14);
    fcn.000156fb(arg_8h,0x14,uVar3 & 0xfffffffe | arg_ch != '\0');
    fcn.0002255d(arg_10h,0);
    do {
        uVar1 = fcn.00015489(arg_8h,0x1c);
        if ((uVar1 & 1) == (arg_ch != '\0')) {
            return 1;
        }
        cVar2 = fcn.000225c3();
    } while (cVar2 == '\0');
    return 0;
}


/* fcn.000147ba @ 0x147ba */

uint fcn.000147ba(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.00015558(param_1,param_1 + 0x14,0);
    if (iVar1 != 1) {
        return 0;
    }
    fcn.000156fb(param_1,0x24,0x10001);
    fcn.000156fb(param_1,0x28,*(param_1 + 0x1c));
    fcn.000156fb(param_1,0x2c,0);
    fcn.000156fb(param_1,0x30,*(param_1 + 0x20));
    fcn.000156fb(param_1,0x34,0);
    return 1;
}


/* fcn.00015558 @ 0x15558 */

uint fcn.00015558(int param_1,uint16_t *param_2,uint16_t param_3)

{
    uint16_t *arg_10h;
    uint16_t *arg_10h_00;
    int iVar1;
    int iVar2;
    uint uVar3;
    
    *param_2 = param_3;
    arg_10h = param_2 + 10;
    param_2[1] = 2;
    param_2[2] = 2;
    *(param_2 + 0x14) = *(param_1 + 0x10) * param_3 * 2 + 0x1000;
    iVar1 = *(param_1 + 0x10);
    param_2[0x12] = 0x1020;
    param_2[0x13] = 0;
    param_2[0x10] = 0x1080;
    param_2[0x11] = 0;
    *(param_2 + 0x16) = (param_3 * 2 + 1) * iVar1 + 0x1000;
    iVar1 = fcn.00012fde(2,0x1020,arg_10h,param_2 + 0xe);
    arg_10h_00 = param_2 + 8;
    iVar2 = fcn.00012fde(2,*(param_2 + 0x10),arg_10h_00,param_2 + 0xc);
    if ((iVar1 == 0) || (iVar2 == 0)) {
        arg_10h[0] = 0;
        arg_10h[1] = 0;
        arg_10h_00[0] = 0;
        arg_10h_00[1] = 0;
        uVar3 = 0;
    }
    else {
        *arg_10h_00 = iVar2;
        *arg_10h = iVar1;
        *(param_2 + 4) = iVar2 + 0x1000U & 0xfffff000;
        *(param_2 + 6) = iVar1 + 0x1000U & 0xfffff000;
        uVar3 = 1;
    }
    return uVar3;
}


/* fcn.000156fb @ 0x156fb */

void fcn.000156fb(uint *param_1,int param_2,uint param_3)

{
    fcn.00012ee9(*param_1,param_1[1],param_1[2] + param_2,param_3);
    return;
}


/* fcn.00014f4d @ 0x14f4d */

void __cdecl fcn.00014f4d(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_40h;
    int32_t var_18h;
    
    fcn.000224aa(&var_40h,0,0x40);
    return;
}


/* fcn.0001560a @ 0x1560a */

int fcn.0001560a(int param_1)

{
    int iVar1;
    uint8_t auStack_90 [16];
    uint32_t auStack_80 [10];
    uint32_t uStack_58;
    uint32_t uStack_54;
    uint32_t auStack_40 [10];
    uint32_t uStack_18;
    
    fcn.000224aa(auStack_40,0,0x40);
    auStack_40[0] = auStack_40[0] & 0xffffff0a | 10;
    uStack_18 = uStack_18 & 0xffffff80 | 0x80;
    fcn.000224aa(auStack_90,0,0x10);
    iVar1 = fcn.00014b17(param_1,auStack_40,0,0,param_1 + 0x14,auStack_90,5000000,0);
    if (iVar1 == 1) {
        if (auStack_90[0] < 0xff) {
            fcn.000224aa(auStack_80,0,0x40);
            auStack_80[0] = auStack_80[0] & 0xffffff09 | 9;
            uStack_58 = uStack_58 & 0xffffff80 | 0x80;
            uStack_54 = uStack_54 ^ (auStack_90[0] + 1 ^ uStack_54) & 0xff;
            iVar1 = fcn.00014b17(param_1,auStack_80,0,0,param_1 + 0x14,0,5000000,0);
            if (iVar1 != 1) {
                return iVar1;
            }
        }
        iVar1 = 1;
    }
    return iVar1;
}


/* fcn.00014816 @ 0x14816 */

int fcn.00014816(int param_1)

{
    int iVar1;
    uint32_t auStack_40 [10];
    ushort uStack_18;
    ushort uStack_16;
    uint32_t uStack_14;
    
    iVar1 = fcn.00015558(param_1,param_1 + 0x50,1);
    if (iVar1 == 1) {
        fcn.000224aa(auStack_40,0,0x40);
        uStack_14 = uStack_14 | 1;
        auStack_40[0] = auStack_40[0] & 0xffffff05 | 5;
        uStack_18 = 1;
        uStack_16 = 1;
        iVar1 = fcn.00014b17(param_1,auStack_40,*(param_1 + 0x5c),0x20,param_1 + 0x14,0,5000000,0);
        if (iVar1 == 1) {
            fcn.000224aa(auStack_40,0,0x40);
            uStack_18 = 1;
            auStack_40[0] = auStack_40[0] & 0xffffff01 | 1;
            uStack_16 = 1;
            uStack_14 = uStack_14 & 0xfff8 | 0x10001;
            iVar1 = fcn.00014b17(param_1,auStack_40,*(param_1 + 0x58),0x80,param_1 + 0x14,0,5000000,0);
            if (iVar1 == 1) {
                return 1;
            }
        }
        *(param_1 + 100) = 0;
        *(param_1 + 0x60) = 0;
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.000223ec @ 0x223ec */

uint32_t fcn.000223ec(int param_1,uint32_t param_2)

{
    uint32_t uVar1;
    
    uVar1 = 0;
    if (param_2 != 0) {
        do {
            if (*(uVar1 + param_1) != '\0') {
                return CONCAT31(uVar1 >> 8,1);
            }
            uVar1 = uVar1 + 1;
        } while (uVar1 < param_2);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00022b0b @ 0x22b0b */

void fcn.00022b0b(uint param_1,uint param_2,uint param_3)

{
    fcn.00022b25(param_1,param_2,param_3,&stack0x00000010);
    return;
}


/* fcn.00022b25 @ 0x22b25 */

uint32_t fcn.00022b25(int param_1,int param_2,uint8_t *param_3,uint8_t *param_4)

{
    char cVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint16_t uVar4;
    char *pcVar5;
    uint8_t *puVar6;
    uint32_t uVar7;
    uint uVar8;
    uint32_t uStack_10;
    uint uStack_c;
    uint uStack_8;
    uint32_t uStack_4;
    
    uStack_8 = 0;
    uStack_c = 0;
    uVar7 = 0;
    if (*param_3 == 0) {
code_r0x00022cf0:
        *(uVar7 + param_1) = 0;
        return uVar7;
    }
    uStack_4 = param_2 - 1;
code_r0x00022b57:
    if (uStack_4 <= uVar7) goto code_r0x00022cf0;
    if (*param_3 == 0x25) {
        param_3 = fcn.00022a16(param_3,&uStack_10,&uStack_8,&uStack_c,param_4);
        uVar2 = *param_3;
        if (100 < uVar2) {
            if (uVar2 == 0x72) {
                uVar3 = fcn.00022842(*param_4,uVar7 + param_1,param_2);
                goto code_r0x00022cde;
            }
            if (uVar2 != 0x73) {
                if (uVar2 == 0x75) {
                    uStack_10 = uStack_10 | 8;
                    goto code_r0x00022c4c;
                }
                if (uVar2 == 0x78) {
code_r0x00022c14:
                    uVar8 = 0x10;
                    goto code_r0x00022c16;
                }
                goto code_r0x00022cf0;
            }
            puVar6 = param_4 + 4;
            pcVar5 = 0x14c4c;
            if (*param_4 != 0) {
                pcVar5 = *param_4;
            }
            uVar4 = 0;
            cVar1 = *pcVar5;
            for (; (cVar1 != '\0' && (((uVar4 < uStack_c || (uStack_c == 0)) && (param_2 - uVar7 != 1))));
                uVar7 = uVar7 + 1) {
                if (cVar1 == '\n') {
                    *(uVar7 + param_1) = 0xd;
                    uVar7 = uVar7 + 1;
                }
                *(uVar7 + param_1) = *pcVar5;
                pcVar5 = pcVar5 + 1;
                uVar4 = uVar4 + 1;
                cVar1 = *pcVar5;
            }
            for (; (uVar4 < uStack_8 && (param_2 - uVar7 != 1)); uVar7 = uVar7 + 1) {
                *(uVar7 + param_1) = 0x20;
                uVar4 = uVar4 + 1;
            }
            goto code_r0x00022ce0;
        }
        if (uVar2 == 100) {
code_r0x00022c4c:
            uVar8 = 10;
code_r0x00022c16:
            uVar3 = fcn.00022cfe(uVar7 + param_1,*param_4,uStack_10,uStack_8,uStack_c,(param_2 - uVar7) + -1,uVar8
                                );
            uVar3 = uVar3 & 0xffff;
code_r0x00022cde:
            puVar6 = param_4 + 4;
            uVar7 = uVar7 + uVar3;
            goto code_r0x00022ce0;
        }
        if (uVar2 == 0x25) goto code_r0x00022bbd;
        if (uVar2 == 0x52) {
            uVar3 = fcn.00022aa1(*param_4,uVar7 + param_1,param_2);
            goto code_r0x00022cde;
        }
        if (uVar2 == 0x58) {
            uStack_10 = uStack_10 | 4;
            goto code_r0x00022c14;
        }
        if (uVar2 != 99) goto code_r0x00022cf0;
        uVar2 = *param_4;
        param_4 = param_4 + 4;
    }
    else {
        if (*param_3 == 10) {
            *(uVar7 + param_1) = 0xd;
            uVar7 = uVar7 + 1;
        }
        uVar2 = *param_3;
    }
code_r0x00022bbd:
    *(uVar7 + param_1) = uVar2;
    uVar7 = uVar7 + 1;
    puVar6 = param_4;
code_r0x00022ce0:
    param_3 = param_3 + 1;
    if (*param_3 == 0) goto code_r0x00022cf0;
    param_4 = puVar6;
    goto code_r0x00022b57;
}


/* fcn.00014ca7 @ 0x14ca7 */

uint __cdecl fcn.00014ca7(int32_t arg_8h,uint32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h)

{
    int iVar1;
    int32_t iVar2;
    int32_t var_8h;
    
    if ((*arg_14h != 0) || (((*arg_8h & 0xff) != 1 && ((*arg_8h & 0xff) != 5)))) {
        *arg_18h = 0;
        iVar2 = 0;
        if (((*arg_14h != 0) || (*arg_8h != -0x7f)) && ((*arg_14h != 1 || (*arg_8h != '\x01')))) {
            iVar2 = 1;
        }
        iVar1 = fcn.000130ef(iVar2,*arg_ch,arg_10h,&var_8h,arg_18h);
        if (iVar1 < 0) {
            return 0;
        }
        *arg_ch = var_8h;
    }
    return 1;
}


/* fcn.00015505 @ 0x15505 */

void __cdecl fcn.00015505(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,uint32_t arg_14h,int32_t arg_18h)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    
    uVar1 = *(arg_8h + 0xc);
    *(arg_ch + 4) = 0;
    *arg_ch = arg_14h;
    uVar3 = (uVar1 - 1 & arg_14h) + arg_18h;
    if ((uVar1 < uVar3) && (uVar3 <= uVar1 * 2)) {
        iVar2 = *(arg_ch + 4);
        uVar3 = *arg_ch;
        *arg_10h = uVar3 + uVar1 & ~(uVar1 - 1);
        *(arg_10h + 4) = iVar2 + CARRY4(uVar3,uVar1);
    }
    return;
}


/* fcn.000154a3 @ 0x154a3 */

uint fcn.000154a3(int param_1)

{
    uint uVar1;
    int iVar2;
    
    if (fcn.0001536c < 5) {
        fcn.0001536c = fcn.0001536c + '\x01';
        fcn.000224aa(param_1 + 0x14,0,0x3c);
        fcn.000224aa(param_1 + 0x50,0,0x3c);
        *(param_1 + 100) = 0;
        *(param_1 + 0x60) = 0;
        *(param_1 + 0x28) = 0;
        *(param_1 + 0x24) = 0;
        iVar2 = fcn.0001462e(param_1);
        if (iVar2 != 1) {
            return 0;
        }
        uVar1 = 1;
    }
    else {
        uVar1 = 0;
    }
    fcn.0001536c = 0x0;
    return uVar1;
}


/* fcn.00014ffa @ 0x14ffa */

uint fcn.00014ffa(int param_1,uint32_t param_2)

{
    if ((param_2 != 0) && (param_2 <= *(param_1 + 0x8c))) {
        return 1;
    }
    return 0;
}


/* fcn.00014f9b @ 0x14f9b */

void __cdecl fcn.00014f9b(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_18h;
    
    fcn.000224aa(&var_40h,0,0x40);
    var_18h = var_18h & 0xfffffffe;
    var_40h = var_40h & 0xffffff06U | 6;
    var_3ch = arg_ch;
    fcn.00014b17(arg_8h,&var_40h,arg_10h,0x1000,arg_8h + 0x14,0,5000000,0);
    return;
}


/* fcn.00014a79 @ 0x14a79 */

int64_t __cdecl fcn.00014a79(int32_t arg_8h,int32_t arg_ch)

{
    char cVar1;
    int arg_10h;
    int8_t var_10h;
    int32_t var_fh;
    ushort uStack_f;
    uchar uStack_d;
    int64_t var_8h;
    
    arg_10h = arg_ch + 0x78;
    var_8h = 0;
    cVar1 = fcn.000223ec(arg_10h,8);
    if (cVar1 == '\0') {
        cVar1 = fcn.000223ec(arg_ch + 0x68,0x10);
        if (cVar1 == '\0') {
            var_10h = 0;
            var_fh = 0;
            uStack_f = 0;
            uStack_d = 0;
            fcn.0002245a(&var_10h,2,arg_8h,2);
            fcn.0002245a(&var_fh + 1,6,arg_8h + 0x12,6);
            fcn.0002245a(&var_8h,8,&var_10h,8);
            return var_8h;
        }
        arg_10h = arg_ch + 0x70;
    }
    fcn.0002245a(&var_8h,8,arg_10h,8);
    return var_8h;
}


/* fcn.00022786 @ 0x22786 */

void fcn.00022786(char *param_1)

{
    char *pcVar1;
    char *pcVar2;
    int iVar3;
    char cVar4;
    
    cVar4 = *param_1;
    pcVar1 = param_1;
    while (cVar4 != '\0') {
        pcVar1 = pcVar1 + 1;
        cVar4 = *pcVar1;
    }
    do {
        pcVar2 = pcVar1;
        pcVar1 = pcVar2 + -1;
    } while (*pcVar1 == ' ');
    *pcVar2 = '\0';
    cVar4 = *param_1;
    pcVar1 = param_1;
    while (cVar4 == ' ') {
        pcVar1 = pcVar1 + 1;
        cVar4 = *pcVar1;
    }
    cVar4 = *pcVar1;
    if (cVar4 != '\0') {
        iVar3 = pcVar1 - param_1;
        do {
            *param_1 = cVar4;
            param_1 = param_1 + 1;
            cVar4 = param_1[iVar3];
        } while (cVar4 != '\0');
    }
    *param_1 = '\0';
    return;
}


/* fcn.00014968 @ 0x14968 */

void __cdecl fcn.00014968(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    char *pcVar1;
    char cVar2;
    
    fcn.000224aa(arg_8h,0,0x29);
    cVar2 = fcn.000223ec(arg_10h + 0x68,0x10);
    if (cVar2 == '\0') {
        pcVar1 = arg_10h + 0x78;
        if ((((*pcVar1 == *(arg_ch + 0x4b)) && (*(arg_10h + 0x79) == *(arg_ch + 0x4a))) &&
            (*(arg_10h + 0x7a) == *(arg_ch + 0x49))) && (cVar2 = fcn.000223ec(pcVar1,8), cVar2 != '\0')) {
            fcn.00022b0b(arg_8h,0x29,0x13eac,*pcVar1,*(arg_10h + 0x79),*(arg_10h + 0x7a),*(arg_10h + 0x7b),
                         *(arg_10h + 0x7c),*(arg_10h + 0x7d),*(arg_10h + 0x7e),*(arg_10h + 0x7f));
        }
        else {
            fcn.00022b0b(arg_8h,0x29,0x13ed4,arg_ch + 4,arg_14h);
        }
    }
    else {
        fcn.00022b0b(arg_8h,0x29,0x13e60,*(arg_10h + 0x68),*(arg_10h + 0x69),*(arg_10h + 0x6a),*(arg_10h + 0x6b),
                     *(arg_10h + 0x6c),*(arg_10h + 0x6d),*(arg_10h + 0x6e),*(arg_10h + 0x6f),*(arg_10h + 0x70),
                     *(arg_10h + 0x71),*(arg_10h + 0x72),*(arg_10h + 0x73),*(arg_10h + 0x74),*(arg_10h + 0x75),
                     *(arg_10h + 0x76),*(arg_10h + 0x77));
    }
    return;
}


/* fcn.00011bd4 @ 0x11bd4 */

void fcn.00011bd4(uint param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,int param_7,
                 uint param_8,uint param_9,char param_10,uint param_11,uint param_12,uint param_13)

{
    int *piVar1;
    int *piVar2;
    uint32_t uVar3;
    int *piVar4;
    char cVar5;
    ushort uVar6;
    int iVar7;
    int *arg_8h;
    uint uStack_80;
    uint uStack_7c;
    uint32_t uStack_78;
    uint32_t uStack_74;
    int iStack_70;
    uchar auStack_6c [41];
    uchar auStack_43 [17];
    uchar auStack_32 [50];
    
    if ((param_7 == 0x200) || (param_7 == 0x1000)) {
        fcn.000224aa(&uStack_80,0,0x80);
        uStack_80 = param_5;
        uStack_7c = param_6;
        iStack_70 = param_7;
        uVar3 = uStack_74 | 400;
        if (param_7 == 0x1000) {
            uVar3 = uStack_74 | 0x8190;
        }
        uStack_74 = uVar3;
        fcn.00022751(auStack_6c,param_3,0x28);
        uVar6 = fcn.00022706(param_4,0);
        fcn.00016d32(auStack_43,param_4,0x11,uVar6);
        fcn.00022751(auStack_32,param_13,0x28);
        iVar7 = fcn.000120a9(param_1,2);
        if (iVar7 != 0) {
            fcn.00012814(iVar7,*0x152ba,param_8,param_9);
            arg_8h = fcn.0002240e(0x10);
            if (arg_8h != NULL) {
                fcn.000224aa(arg_8h,0,0x10);
                *(arg_8h + 1) = param_2 + -1;
                *(arg_8h + 6) = 1;
                *(arg_8h + 5) = *0x152ba;
                arg_8h[2] = param_2;
                *arg_8h = iVar7;
                *0x152ba = *0x152ba + '\x01';
                if (param_10 != '\0') {
                    uStack_74 = uStack_74 | 0x20;
                    cVar5 = fcn.00022651(arg_8h,0,10000000,0);
                    if (cVar5 != '\0') {
                        uStack_74 = uStack_74 | 0x40;
                    }
                }
                uStack_78 = *(arg_8h + 5);
                cVar5 = fcn.000120e8();
                piVar1 = arg_8h;
                if (cVar5 == '\0') {
                    fcn.00011a89(arg_8h,1 << (*(arg_8h + 5) & 0x1f),&uStack_80,0);
                    piVar4 = *0x152bc;
                }
                else {
                    fcn.00015828(arg_8h,&uStack_80);
                    piVar4 = *0x152bc;
                }
                do {
                    piVar2 = piVar4;
                    if (piVar2 == NULL) {
                        *0x152bc = piVar1;
                        return;
                    }
                    piVar1 = *0x152bc;
                    piVar4 = piVar2[3];
                } while (piVar2[3] != NULL);
                piVar2[3] = arg_8h;
            }
        }
    }
    return;
}


/* fcn.0001462e @ 0x1462e */

bool fcn.0001462e(int32_t *param_1)

{
    int16_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int32_t arg_10h;
    int iVar4;
    uint32_t uVar5;
    uchar auStack_1004 [4];
    uchar auStack_1000 [77];
    uint8_t uStack_fb3;
    int iStack_dfc;
    
    uVar2 = fcn.00015489(param_1,0);
    uVar3 = fcn.00015489(param_1,4);
    arg_10h = (uVar2 >> 0x18) * 500000;
    if (arg_10h == 0) {
        arg_10h = 5000000;
    }
    iVar4 = fcn.000148fd(param_1,0,arg_10h);
    if (iVar4 == 1) {
        param_1[4] = 1 << (uVar3 & 0xf) + 2;
        iVar4 = fcn.000147ba(param_1);
        if (iVar4 == 1) {
            uVar2 = fcn.00015489(param_1,0x14);
            fcn.000156fb(param_1,0x14,uVar2 & 0xff46000f | (uVar3 & 0xf0000 | 0x8c0001ff) >> 9);
            param_1[3] = 1 << ((uVar3 & 0xf0000) >> 0x10) + 0xc;
            iVar4 = fcn.000148fd(param_1,1,arg_10h);
            if (iVar4 == 1) {
                fcn.000224aa(auStack_1004,0,0x1004);
                iVar4 = fcn.00014f4d(param_1,auStack_1000);
                if (iVar4 == 1) {
                    iVar1 = fcn.00012d17(*param_1,param_1[1],2);
                    if ((iVar1 == 0x2522) && (iStack_dfc == 0)) {
                        *(param_1 + 0xd9) = 1;
                        return true;
                    }
                    if (uStack_fb3 == 0) {
                        param_1[0x32] = 0x1000;
                    }
                    else {
                        uVar3 = uVar3 >> 0x10 & 0xf;
                        uVar2 = 1 << uVar3 + 0xc;
                        if (0x1000 < uVar2) {
                            return false;
                        }
                        uVar5 = 0x1000;
                        if ((uVar3 + 0xc + uStack_fb3 < 0x21) && (uVar2 = uVar2 << (uStack_fb3 & 0x1f), uVar2 < 0x1000)
                           ) {
                            uVar5 = uVar2;
                        }
                        param_1[0x32] = uVar5;
                    }
                    param_1[0x33] = 0;
                    fcn.0001560a(param_1);
                    if (iStack_dfc != 0) {
                        iVar4 = fcn.00014816(param_1);
                        return iVar4 == 1;
                    }
                }
            }
        }
    }
    return false;
}


/* fcn.00015719 @ 0x15719 */

uint32_t fcn.00015719(uint16_t param_1,uint16_t param_2,uint16_t param_3,int param_4)

{
    int iVar1;
    uint16_t *puVar2;
    int iVar3;
    int iVar4;
    
    iVar4 = 0;
    if (param_4 == 0) {
        iVar3 = 3;
        iVar1 = 0x15060;
    }
    else if (param_4 == 1) {
        iVar3 = 6;
        iVar1 = 0x15078;
    }
    else if (param_4 == 2) {
        iVar3 = 2;
        iVar1 = 0x150a8;
    }
    else {
        if (param_4 - 3U != 0) {
            return param_4 - 3U & 0xffffff00;
        }
        iVar1 = 0x150b8;
        iVar3 = 1;
    }
    puVar2 = iVar1 + 4;
    while (((puVar2[-2] != param_1 || (puVar2[-1] != param_2)) ||
           ((*puVar2 != 0xffff && ((param_3 < *puVar2 || (puVar2[1] < param_3))))))) {
        puVar2 = puVar2 + 4;
        iVar4 = iVar4 + 1;
        if (iVar3 <= iVar4) {
            return puVar2 & 0xffffff00;
        }
    }
    return CONCAT31(puVar2 >> 8,1);
}


/* fcn.00016f8e @ 0x16f8e */

uint * __fastcall fcn.00016f8e(uint *param_1)

{
    fcn.0001d303();
    fcn.0001d245();
    param_1[0x2c] = 0;
    *param_1 = 0x13fa4;
    param_1[0x26] = 1;
    return param_1;
}


/* fcn.0001d303 @ 0x1d303 */

int __fastcall fcn.0001d303(int param_1)

{
    *(param_1 + 2) = 0;
    *(param_1 + 6) = 0;
    *(param_1 + 8) = 0;
    return param_1;
}


/* fcn.0001d245 @ 0x1d245 */

uint * __fastcall fcn.0001d245(uint *param_1)

{
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[4] = 0;
    *param_1 = 0x141f0;
    *(param_1 + 5) = 0;
    *(param_1 + 0x25) = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    return param_1;
}


/* fcn.000157ab @ 0x157ab */

int __fastcall fcn.000157ab(int param_1)

{
    int iVar1;
    
    iVar1 = 0x20;
    do {
        fcn.00016f8e();
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    *(param_1 + 0x1900) = 0;
    return param_1;
}


/* fcn.0001767d @ 0x1767d */

uint * __fastcall fcn.0001767d(uint *param_1)

{
    param_1[1] = 0;
    *param_1 = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0x25] = 0;
    param_1[0x24] = 0;
    param_1[2] = 0;
    param_1[0x12] = param_1;
    param_1[0x28] = param_1;
    return param_1;
}


/* fcn.00017e7b @ 0x17e7b */

uint * __fastcall fcn.00017e7b(uint *param_1)

{
    param_1[1] = 0;
    *param_1 = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0x12] = param_1;
    return param_1;
}


/* fcn.000173ea @ 0x173ea */

int __fastcall fcn.000173ea(int param_1)

{
    *(param_1 + 0x24) = 0;
    *(param_1 + 0x20) = 0;
    *(param_1 + 0x38) = 0;
    return param_1;
}


/* fcn.00016e22 @ 0x16e22 */

uint * __fastcall fcn.00016e22(uint *param_1)

{
    uint *puVar1;
    int iVar2;
    uint uVar3;
    
    iVar2 = 4;
    *0x15384 = 0;
    *0x15388 = 0;
    *0x15378 = 0;
    puVar1 = fcn.00016e92(4);
    if (puVar1 == NULL) {
        puVar1 = NULL;
    }
    else {
        *puVar1 = 0;
    }
    *param_1 = puVar1;
    do {
        uVar3 = 0x2c0;
        puVar1 = fcn.00016e92(0x2c0);
        if (puVar1 == NULL) {
            puVar1 = NULL;
        }
        else {
            uVar3 = 0x2c0;
            fcn.000224aa(puVar1,0,0x2c0);
            puVar1[1] = 0;
            *puVar1 = 0;
        }
        fcn.00019f15(uVar3,puVar1);
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    param_1[2] = 0;
    return param_1;
}


/* fcn.00011999 @ 0x11999 */

//WARNING: Variable defined which should be unmapped: var_1h

uint32_t __cdecl fcn.00011999(int32_t arg_8h)

{
    uint32_t var_1h;
    
    if (**arg_8h == 1) {
        arg_8h = fcn.000143ec((*arg_8h)[4],*(arg_8h + 4),&var_1h);
    }
    return arg_8h & 0xffffff00;
}


/* fcn.000119ec @ 0x119ec */

void fcn.000119ec(int32_t param_1,int32_t param_2,int32_t param_3)

{
    fcn.00022651(param_1,0,param_2,param_3);
    return;
}


/* fcn.00011a20 @ 0x11a20 */

uchar fcn.00011a20(void)

{
    return 0;
}


/* fcn.000119d8 @ 0x119d8 */

uint fcn.000119d8(uint *param_1)

{
    if (param_1 == NULL) {
        return 0;
    }
    return CONCAT31(*param_1 >> 8,**param_1 == 2);
}


/* fcn.00011a03 @ 0x11a03 */

uint32_t fcn.00011a03(int *param_1)

{
    int *piVar1;
    uint32_t uVar2;
    
    param_1 = *param_1;
    if ((*param_1 == 2) && (piVar1 = param_1 + 4, param_1 = NULL, *piVar1 != 0)) {
        uVar2 = fcn.00014fef(*piVar1);
        return uVar2;
    }
    return param_1 & 0xffffff00;
}


/* fcn.00018566 @ 0x18566 */

uint __thiscall fcn.00018566(int param_1,char param_2)

{
    uint8_t uVar1;
    bool bVar2;
    
    uVar1 = 0;
    if (*(param_1 + 0x10) != 0) {
        do {
            if (3 < uVar1) {
                return 0;
            }
            if ((*(param_1 + uVar1 * 4) != -0x17655) && (bVar2 = param_2 == '\0', param_2 = param_2 + -1, bVar2)) {
                return *(param_1 + uVar1 * 4);
            }
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(param_1 + 0x10));
    }
    return 0;
}


/* fcn.0001ba14 @ 0x1ba14 */

uint __fastcall fcn.0001ba14(int param_1)

{
    return *(*(*(param_1 + 0xc4) + 0x10) + 0x68 + *(param_1 + 0xe4) * 8);
}


/* fcn.0001ba29 @ 0x1ba29 */

uint __fastcall fcn.0001ba29(int param_1)

{
    return *(*(*(param_1 + 0xc4) + 0x10) + 0x68 + (*(param_1 + 0xe4) ^ 1) * 8);
}


/* fcn.00019efc @ 0x19efc */

void __thiscall fcn.00019efc(int *param_1,char param_2)

{
    param_1 = *param_1;
    if (param_1 != NULL) {
        do {
            if (param_2 == '\0') {
                return;
            }
            param_1 = *param_1;
            param_2 = param_2 + -1;
        } while (param_1 != NULL);
    }
    return;
}


/* fcn.0001b363 @ 0x1b363 */

//WARNING: Removing unreachable block (ram,0x0001b3af)

int64_t __fastcall fcn.0001b363(int param_1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint8_t uVar4;
    int iVar5;
    int unaff_EBX;
    int64_t iVar6;
    uint32_t uStack_10;
    
    uVar2 = 0;
    uStack_10 = uStack_10;
    uVar1 = 0;
    if (*(param_1 + 0x2c) != '\0') {
        do {
            iVar5 = fcn.0001bf0b();
            iVar3 = *(iVar5 + 0x10);
            iVar6 = fcn.0002065d();
            uVar1 = iVar6 + iVar3;
            if (uVar2 < uVar1) {
                uVar2 = uVar1;
            }
            uVar4 = (unaff_EBX >> 0x18) + 1;
            unaff_EBX = uVar4 << 0x18;
            uVar1 = uVar2;
        } while (uVar4 < *(uStack_10 + 0x2c));
    }
    return uVar1 + 0x11a1;
}


/* fcn.00016cfb @ 0x16cfb */

uint32_t fcn.00016cfb(uint8_t *param_1)

{
    uint32_t uVar1;
    uint8_t *puVar2;
    uint8_t uVar3;
    
    uVar1 = fcn.00022706(param_1);
    puVar2 = param_1 + ((uVar1 & 0xffff) - 1);
    uVar3 = *puVar2;
    if (uVar3 != 0x3a) {
        while (((0x2f < uVar3 && (uVar3 < 0x3a)) && (param_1 < puVar2))) {
            puVar2 = puVar2 + -1;
            uVar3 = *puVar2;
        }
        if (*puVar2 == 0x3a) {
            return puVar2 - param_1;
        }
    }
    return puVar2 & 0xffffff00;
}


/* fcn.0001871c @ 0x1871c */

bool fcn.0001871c(uint32_t param_1)

{
    uint32_t *puVar1;
    
    puVar1 = fcn.00023008();
    return (param_1 & *puVar1) == param_1;
}


/* fcn.00023008 @ 0x23008 */

uint fcn.00023008(void)

{
    return 0x1c8a0;
}


/* fcn.0001a3f9 @ 0x1a3f9 */

int __fastcall fcn.0001a3f9(int param_1)

{
    int iVar1;
    int iVar2;
    uint8_t uVar3;
    int *piVar4;
    
    iVar2 = 0;
    uVar3 = 0;
    if (*(param_1 + 0x24) != 0) {
        piVar4 = param_1 + 0x68;
        do {
            iVar1 = *piVar4;
            if ((*(iVar1 + 0xb0) >> 4 & 1) == 0) {
                *(param_1 + 0x54) = uVar3;
                iVar2 = iVar1;
            }
            uVar3 = uVar3 + 1;
            piVar4 = piVar4 + 2;
        } while (uVar3 < *(param_1 + 0x24));
    }
    return iVar2;
}


/* fcn.00016c6c @ 0x16c6c */

void __thiscall fcn.00016c6c(int param_1,uint32_t param_2)

{
    if ((param_2 & *(param_1 + 0xb0)) != 0) {
        *(param_1 + 0xb0) = ~param_2 & *(param_1 + 0xb0);
        fcn.000173ad();
    }
    return;
}


/* fcn.000173ad @ 0x173ad */

void __fastcall fcn.000173ad(int param_1)

{
    uint32_t uVar1;
    
    uVar1 = *(param_1 + 0xb0);
    if (((uVar1 & 0x1008d0) == 0x10) && (*(param_1 + 0xa4) < 0xb)) {
        uVar1 = uVar1 | 8;
    }
    else {
        uVar1 = uVar1 & 0xfffffff7;
    }
    *(param_1 + 0xb0) = uVar1;
    if ((uVar1 & 0x1000000) != 0) {
        *(param_1 + 0xb0) = uVar1 & 0xfffffff7;
    }
    return;
}


/* fcn.00016ca7 @ 0x16ca7 */

void __thiscall fcn.00016ca7(int param_1,uint32_t param_2)

{
    if ((*(param_1 + 0xb0) & param_2) != param_2) {
        *(param_1 + 0xb0) = *(param_1 + 0xb0) | param_2;
        fcn.000173ad();
    }
    return;
}


/* fcn.0001acf9 @ 0x1acf9 */

void __fastcall fcn.0001acf9(int param_1)

{
    uint8_t uVar1;
    int unaff_retaddr;
    
    uVar1 = *(*(param_1 + 0x10) + 0x54);
    fcn.0001a194(*(param_1 + 0x10));
    if (((*(*(param_1 + 0x10) + 0x20) & 0x21) == 0) || (unaff_retaddr != *(*(param_1 + 0x10) + 0x68 + uVar1 * 8))) {
        fcn.0001aec2(1);
        *(*(param_1 + 0x10) + 0x6c + uVar1 * 8) = 0;
        *(*(param_1 + 0x10) + 0x68 + uVar1 * 8) = unaff_retaddr;
        (****(param_1 + 0x10))();
    }
    return;
}


/* fcn.000225ad @ 0x225ad */

int32_t fcn.000225ad(void)

{
    int32_t var_8h;
    
    fcn.00022fb0(&var_8h);
    return var_8h;
}


/* fcn.000160f4 @ 0x160f4 */

uint fcn.000160f4(uint8_t param_1,uint32_t param_2)

{
    int *piVar1;
    int arg_ch;
    int iVar2;
    int iVar3;
    int iVar4;
    uchar uVar5;
    char cVar6;
    uint uVar7;
    int iVar8;
    uint32_t uVar9;
    uint8_t unaff_BL;
    int unaff_EBP;
    uint32_t unaff_ESI;
    
    piVar1 = *(*(*0x155ec + 0x1c) + 0x1c + param_1 * 4);
    if ((piVar1 == NULL) || (*(*0x155ec + 0x10) <= param_1)) {
        uVar7 = 0xe;
    }
    else {
        iVar8 = *piVar1;
        arg_ch = piVar1[0xc];
        iVar2 = *(iVar8 + 0xc4);
        iVar3 = piVar1[1];
        iVar4 = *(arg_ch + 0x20);
        fcn.000224aa(param_2,0,0x78);
        fcn.0002245a(param_2,0x11,piVar1 + 2,0x10);
        *(param_2 + 0x18) = piVar1[8];
        *(param_2 + 0x1c) = piVar1[9];
        *(param_2 + 0x2c) = *(iVar2 + 0xc);
        *(param_2 + 0x14) = *(iVar4 + 8);
        uVar5 = fcn.0001b3df();
        *(param_2 + 0x30) = uVar5;
        *(param_2 + 0x20) = *(iVar4 + 0x18) >> 1;
        *(param_2 + 0x22) = *(iVar4 + 0xc);
        uVar7 = fcn.0001beb7();
        *(param_2 + 0x24) = uVar7;
        *(param_2 + 0x11) = *(*piVar1 + 0xb1);
        fcn.000185fa(iVar8,param_2 + 0x3b);
        *(param_2 + 0x44) = *(*(iVar3 + 0x38) + 0x18);
        if (*(param_2 + 0x24) == 3) {
            *(param_2 + 0x2c) = 0;
        }
        *(param_2 + 0x54) = *(iVar4 + 8);
        *(param_2 + 0x28) = *(iVar4 + 0x30);
        *(param_2 + 0x34) = piVar1[10];
        *(param_2 + 0x4c) = piVar1[0x13];
        *(param_2 + 0x49) = *(piVar1 + 0x41) & 1;
        *(param_2 + 0x48) = piVar1[0x10];
        *(param_2 + 0x50) = (*(*0x150c4 + 0x1a6) & 0x1fffffff) >> 7;
        uVar9 = param_2;
        cVar6 = fcn.00015edb(param_2);
        if ((cVar6 != '\0') && (**(*0x155ec + 0x1c) != '\0')) {
            do {
                iVar8 = fcn.00019efc(uVar9,unaff_ESI & 0xffffff00);
                cVar6 = fcn.0001b3df();
                if (cVar6 == *(param_2 + 0x30)) {
                    fcn.00022b0b(param_2,0x10,0x13f7c,*(*(iVar8 + 0x20) + 0x80));
                    break;
                }
                unaff_BL = unaff_BL + 1;
            } while (unaff_BL < **(*0x155ec + 0x1c));
        }
        if ((*(unaff_EBP + 0x84) & 0x200) != 0) {
            fcn.00022b0b(param_2,0x10,0x13f98,0x13f88);
        }
        if (*(param_2 + 0x14) == 0x10) {
            uVar9 = fcn.0001ba41();
            *(param_2 + 0x38) = uVar9;
            if ((*(param_2 + 0x24) == 2) && ((*(*(*(iVar4 + 0x34 + *(iVar4 + 0x31) * 4) + 0x20) + 0xb0) >> 4 & 1) == 0))
            {
                *(param_2 + 0x38) = 0;
                if ((uVar9 & 0xffff) >> 8 == 1) {
                    *(param_2 + 0x3a) = *(param_2 + 0x3a) | (uVar9 & 0xffff) >> 8;
                }
                else {
                    *(param_2 + 0x3a) = *(param_2 + 0x3a) | 2;
                }
            }
        }
        else {
            *(param_2 + 0x38) = 0xffff;
        }
        fcn.00016665(param_2);
        fcn.00016709(param_2);
        fcn.000166a1(param_2);
        fcn.000168c8(param_2);
        fcn.000165c1(param_2);
        *(param_2 + 0x6c) = (*(param_2 + 0x49) == '\0') + 0x4b;
        fcn.000164f9(param_2,arg_ch);
        uVar7 = 0;
    }
    return uVar7;
}


/* fcn.00015edb @ 0x15edb */

uint fcn.00015edb(int param_1)

{
    if ((*(param_1 + 0x14) == 0x20) && (*(param_1 + 0x48) != '\0')) {
        return 1;
    }
    return 0;
}


/* fcn.0001b3df @ 0x1b3df */

uint32_t __fastcall fcn.0001b3df(uint *param_1)

{
    uint32_t uVar1;
    uint *puVar2;
    
    uVar1 = *(*0x155ec + 0x1c) & 0xffffff00;
    for (puVar2 = *(*(*0x155ec + 0x1c) + 0x34); (puVar2 != NULL && (puVar2 != param_1)); puVar2 = *puVar2) {
        uVar1 = CONCAT31(uVar1 >> 8,uVar1 + '\x01');
    }
    return uVar1;
}


/* fcn.000169bb @ 0x169bb */

void fcn.000169bb(uint32_t param_1,uint8_t param_2)

{
    uint32_t uVar1;
    int arg_8h;
    char cVar2;
    uint uStack_4;
    
    arg_8h = param_1;
    uVar1 = *(param_1 + 0x28);
    if ((uVar1 & 0x1000000) != 0) {
        if ((*(param_1 + 0x5c) & 4) != 0) {
            *(param_1 + 0x6c) = 0;
            *(param_1 + 0x68) = 1;
            *(param_1 + 100) = 3;
            return;
        }
        if ((*(param_1 + 0x5c) & 0x40) != 0) {
            *(param_1 + 0x6c) = 0;
            *(param_1 + 0x68) = 1;
            *(param_1 + 100) = 4;
            return;
        }
    }
    cVar2 = fcn.00015dc6(param_1);
    if (cVar2 != '\0') {
        *(arg_8h + 0x68) = 2;
        *(arg_8h + 0x6c) = 9;
        *(arg_8h + 100) = 5;
        return;
    }
    cVar2 = fcn.00015e7d(arg_8h);
    if (cVar2 != '\0') {
        *(arg_8h + 0x6c) = 0;
        *(arg_8h + 100) = 0;
        *(arg_8h + 0x68) = 2;
        return;
    }
    cVar2 = fcn.00015e22(arg_8h);
    if (cVar2 == '\0') {
        if ((uVar1 & 0x10000) != 0) {
            *(arg_8h + 0x68) = 0;
            *(arg_8h + 0x6c) = 4;
            *(arg_8h + 100) = 0xc;
            return;
        }
        if ((uVar1 & 0x2000000) != 0) {
            *(arg_8h + 0x6c) = 0;
            *(arg_8h + 0x68) = 1;
            *(arg_8h + 100) = 0x13;
            return;
        }
        if ((uVar1 & 0x40) != 0) {
            *(arg_8h + 0x68) = 1;
            if ((uVar1 & 0x200) != 0) {
                *(arg_8h + 0x6c) = 5;
                *(arg_8h + 100) = 1;
                return;
            }
            *(arg_8h + 0x6c) = 0;
            *(arg_8h + 100) = 0;
            return;
        }
        if ((uVar1 & 2) == 0) {
            if ((uVar1 & 1) != 0) {
                *(arg_8h + 0x6c) = 0;
                *(arg_8h + 0x68) = 3;
                *(arg_8h + 100) = 9;
                return;
            }
            if ((uVar1 & 0x20) != 0) {
                *(arg_8h + 0x68) = 4;
                if ((uVar1 & 0x200) == 0) {
                    *(arg_8h + 0x6c) = 10;
                    *(arg_8h + 100) = 0x12;
                    return;
                }
code_r0x00016c32:
                *(arg_8h + 0x6c) = 5;
                *(arg_8h + 100) = 1;
                return;
            }
            *(arg_8h + 0x68) = 5;
        }
        else {
            if ((uVar1 & 0x8000) != 0) {
                *(arg_8h + 0x68) = 6;
                *(arg_8h + 0x6c) = 2;
                *(arg_8h + 100) = 0xb;
                return;
            }
            *(arg_8h + 0x68) = 2;
            *(arg_8h + 100) = 6;
            if (uVar1 < '\0') goto code_r0x00016b43;
            if ((uVar1 & 0x10) == 0) {
                *(arg_8h + 0x6c) = 3;
                *(arg_8h + 100) = 0xe;
                return;
            }
            if ((uVar1 & 0x800) == 0) {
                if ((uVar1 & 4) != 0) {
                    *(arg_8h + 0x6c) = 1;
                    *(arg_8h + 100) = 2;
                    return;
                }
                if ((uVar1 & 0x200) == 0) {
                    *(arg_8h + 0x6c) = 0;
                    if (*(arg_8h + 0x5a) == '\x01') {
                        *(arg_8h + 100) = 7;
                        return;
                    }
                    if (*(arg_8h + 0x5a) == '\x02') {
                        *(arg_8h + 100) = 8;
                        return;
                    }
                    *(arg_8h + 100) = 6;
                    return;
                }
                goto code_r0x00016c32;
            }
            if ((uVar1 & 0x1000) != 0) {
                *(arg_8h + 0x6c) = 6;
                *(arg_8h + 100) = 0xf;
                return;
            }
            if ((uVar1 & 0x2000) == 0) {
                *(arg_8h + 0x6c) = 8;
                *(arg_8h + 100) = 0x11;
                return;
            }
            if ((uVar1 & 0x40000) == 0) {
                *(arg_8h + 0x6c) = 7;
                *(arg_8h + 100) = 0x10;
                return;
            }
        }
        *(arg_8h + 100) = 0x14;
        *(arg_8h + 0x6c) = 0xb;
    }
    else {
        uStack_4 = 0;
        param_1 = 0;
        *(arg_8h + 0x68) = 2;
        fcn.00015ff4(&uStack_4,&param_1);
        if ((param_1 & 1 << (param_2 & 0x1f)) == 0) {
            *(arg_8h + 0x6c) = 0;
            *(arg_8h + 100) = 0xd;
            return;
        }
code_r0x00016b43:
        *(arg_8h + 0x6c) = 2;
        *(arg_8h + 100) = 10;
    }
    return;
}


/* fcn.000164b3 @ 0x164b3 */

void fcn.000164b3(int param_1)

{
    char cVar1;
    int iVar2;
    
    *(param_1 + 0x70) = 0;
    if ((*(param_1 + 0x68) != 1) && (*(param_1 + 0x6c) != 3)) {
        *(param_1 + 0x70) = 1;
    }
    if ((*(param_1 + 0x5c) & 0x200) != 0) {
        *(param_1 + 0x70) = *(param_1 + 0x70) & 0xfffffffe;
        iVar2 = fcn.00015fb5();
        if ((iVar2 != 0) && (cVar1 = fcn.0001cbf8(*(param_1 + 0x59)), cVar1 != '\0')) {
            return;
        }
        *(param_1 + 0x70) = *(param_1 + 0x70) | 2;
    }
    return;
}


/* fcn.00015fb5 @ 0x15fb5 */

uint32_t fcn.00015fb5(void)

{
    int iVar1;
    uint32_t uVar2;
    
    iVar1 = *(*(*0x155ec + 0x1c) + 0x40);
    if (iVar1 == 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = iVar1 - 8;
    }
    while( true ) {
        if (uVar2 == 0) {
            return 0;
        }
        if (*(uVar2 + 0x98) == 3) break;
        iVar1 = *(-(uVar2 != 0) & uVar2 + 8);
        uVar2 = -(iVar1 != 0) & iVar1 - 8U;
    }
    return uVar2;
}


/* fcn.0001cbf8 @ 0x1cbf8 */

uint __cdecl fcn.0001cbf8(int8_t arg_8h)

{
    char cVar1;
    int in_ECX;
    uint8_t uVar2;
    uint32_t uVar3;
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = *(in_ECX + 0xa0);
    if (var_8h == 0) {
        var_8h = *(in_ECX + 0xa4);
    }
    uVar3 = arg_8h << 8;
    var_4h = *(in_ECX + 0xa8);
    while( true ) {
        if ((((&var_8h)[uVar3 & 0xff] != 0) && (*((&var_8h)[uVar3 & 0xff] + 0x98) == 2)) &&
           (cVar1 = fcn.0001b3df(), cVar1 == uVar3 >> 8)) break;
        uVar2 = uVar3 + 1;
        uVar3 = CONCAT31(uVar3 >> 8,uVar2);
        if (1 < uVar2) {
            return 0;
        }
    }
    return 1;
}


/* fcn.0001a59d @ 0x1a59d */

uint32_t __fastcall fcn.0001a59d(int param_1)

{
    int iVar1;
    uint32_t uVar2;
    char cVar3;
    uint uVar4;
    uint32_t uVar5;
    uint8_t uVar6;
    int32_t var_4h;
    
    uVar6 = 0;
    uVar5 = 0xff;
    var_4h = 0xff;
    if (*(param_1 + 0x24) != '\0') {
        do {
            iVar1 = *(param_1 + 0x68 + uVar6 * 8);
            uVar2 = *(iVar1 + 0xb0);
            if ((uVar2 >> 4 & 1) != 0) {
                if ((uVar2 >> 2 & 1) == 0) {
                    if (*(param_1 + 0x20) == 4) {
                        cVar3 = fcn.0001bcc1();
                        uVar5 = var_4h;
                        if (cVar3 != '\0') {
                            uVar5 = uVar6;
                        }
                        var_4h = uVar5;
                    }
                }
                else if (*(param_1 + 0x54) != uVar6) {
                    uVar4 = fcn.0001c7a7(iVar1);
                    uVar5 = fcn.0001c7c0(uVar4);
                    return uVar5 & 0xff;
                }
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < *(param_1 + 0x24));
    }
    return uVar5;
}


/* fcn.0001c7a7 @ 0x1c7a7 */

void __thiscall fcn.0001c7a7(int param_1,int param_2)

{
    uint *puVar1;
    
    for (puVar1 = *(param_1 + 8); (puVar1 != NULL && (puVar1[8] != param_2)); puVar1 = *puVar1) {
    }
    return;
}


/* fcn.0001c7c0 @ 0x1c7c0 */

uint __thiscall fcn.0001c7c0(int param_1,int *param_2)

{
    int *piVar1;
    int *piVar2;
    char cVar3;
    
    piVar2 = *(param_1 + 8);
    if ((param_2 != NULL) && (piVar2 != NULL)) {
        cVar3 = '\0';
        piVar1 = piVar2;
        do {
            if (piVar1 == param_2) {
                return CONCAT31(piVar1 >> 8,cVar3);
            }
            piVar1 = *piVar1;
            cVar3 = cVar3 + '\x01';
            piVar2 = NULL;
        } while (piVar1 != NULL);
    }
    return CONCAT31(piVar2 >> 8,0xff);
}


/* fcn.0001bcc1 @ 0x1bcc1 */

uint32_t __fastcall fcn.0001bcc1(int param_1)

{
    return *(*(param_1 + 0xb4) + 0x28) >> 4 & 0xffffff01;
}


/* fcn.0001beb7 @ 0x1beb7 */

int __fastcall fcn.0001beb7(int param_1)

{
    int iVar1;
    int iVar2;
    int8_t var_4h;
    unkbyte3 Stack_7;
    
    Stack_7 = param_1 >> 8;
    _var_4h = CONCAT31(Stack_7,*(param_1 + 0x28) >> 4) & 0xffffff01;
    iVar1 = fcn.0001a37d(_var_4h);
    iVar2 = fcn.0001a37d(_var_4h);
    if (iVar1 < iVar2) {
        iVar1 = fcn.0001a37d(_var_4h);
    }
    return iVar1;
}


/* fcn.0001a37d @ 0x1a37d */

uint __thiscall fcn.0001a37d(int param_1,char param_2)

{
    if ((*(param_1 + 0x20) & 0x21) == 0) {
        if (*(param_1 + 8) == 1) {
            return 0;
        }
        if (((*(param_1 + 8) == 2) && (*(param_1 + 0x20) == 4)) && (param_2 != '\0')) {
            return 3;
        }
    }
    return *(param_1 + 8);
}


/* fcn.000185fa @ 0x185fa */

void __cdecl fcn.000185fa(int32_t arg_8h,int32_t arg_ch)

{
    int32_t iVar1;
    int32_t var_4h;
    
    iVar1 = arg_ch;
    var_4h = *(*(arg_8h + 0xb4) + 0x3e);
    arg_8h = *(*(*(arg_8h + 0xb8) + 0x38) + 0x14);
    fcn.0002245a(arg_ch,4,&arg_8h,4);
    fcn.0002245a(iVar1 + 4,2,&var_4h,2);
    return;
}


/* fcn.0001ba41 @ 0x1ba41 */

ushort fcn.0001ba41(void)

{
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = 0;
    var_8h = 0;
    fcn.0001b882(&var_4h,&var_8h);
    return CONCAT11(var_4h,var_8h);
}


/* fcn.0001b882 @ 0x1b882 */

void __thiscall fcn.0001b882(int param_1,int *param_2,int *param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    
    iVar2 = fcn.0001ba8f();
    if (iVar2 != 2) {
        iVar2 = *(param_1 + 0xc4);
        if ((((*(iVar2 + 0xc) == 1) && (*(iVar2 + 0x38) == 3)) && (*(*(iVar2 + 0x10) + 0x20) == 0x10)) &&
           (*(*(iVar2 + 0x14) + 0x20) == 0x20)) {
            *param_2 = 1;
            *param_3 = 1;
        }
        goto code_r0x0001b953;
    }
    iVar2 = *(param_1 + 0xc4);
    if (*(iVar2 + 0xc) == 1) {
        iVar2 = *(iVar2 + 0x14);
    }
    else {
        iVar2 = *(iVar2 + 0x10);
    }
    iVar3 = (*(iVar2 + 0x54) == *(param_1 + 0xe4)) + 1;
    *param_2 = iVar3;
    iVar2 = *(param_1 + 0xc4);
    if ((*(iVar2 + 0xc) == 1) && (*(iVar2 + 0x38) == 1)) {
        *param_3 = 1;
    }
    else {
        iVar1 = *(param_1 + 0xe0);
        if (iVar1 == 2) {
            if (iVar3 == 2) goto code_r0x0001b8ec;
            if (iVar3 == 1) {
                if (*(iVar2 + 0x4c) != 1) {
                    *(param_1 + 0xe0) = 0;
                    *param_3 = 0;
                    goto code_r0x0001b953;
                }
                *(param_1 + 0xe0) = 5;
                *param_3 = 5;
            }
            else {
code_r0x0001b953:
                if (*param_3 == 1) goto code_r0x0001b95f;
            }
        }
        else {
            if ((iVar1 != 5) || (iVar3 != 2)) {
                *param_3 = iVar1;
                goto code_r0x0001b953;
            }
code_r0x0001b8ec:
            *(param_1 + 0xe0) = 0;
            *param_3 = 0;
        }
        if (*(param_1 + 0xe0) != 1) goto code_r0x0001b99f;
    }
code_r0x0001b95f:
    if ((*(*(*(*(param_1 + 0xc4) + 0x10) + 0x68 + *(param_1 + 0xe4) * 8) + 0xb0) >> 4 & 1) != 0) {
        iVar2 = fcn.0001ba29();
        if ((*(iVar2 + 0xb0) >> 4 & 1) != 0) goto code_r0x0001b99f;
    }
    *param_3 = 3;
    *(param_1 + 0xe0) = 3;
code_r0x0001b99f:
    if ((*param_2 == 1) && (*(*(param_1 + 0xc4) + 0x4c) == 1)) {
        *(param_1 + 0xe0) = 5;
    }
    return;
}


/* fcn.00016665 @ 0x16665 */

void fcn.00016665(int param_1)

{
    *(param_1 + 0x58) = 1;
    if (*(param_1 + 0x24) == 3) {
        *(param_1 + 0x58) = 0;
    }
    if ((*(param_1 + 0x34) & 0x2000) != 0) {
        *(param_1 + 0x58) = 0;
    }
    if ((*(param_1 + 0x34) & 0x4000) != 0) {
        *(param_1 + 0x58) = 0;
    }
    if ((*(param_1 + 0x48) == '\n') || (*(param_1 + 0x48) == '\v')) {
        *(param_1 + 0x58) = 0;
    }
    return;
}


/* fcn.00016709 @ 0x16709 */

void fcn.00016709(int param_1)

{
    uint16_t uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    char cVar5;
    uint32_t uVar6;
    
    iVar2 = *(param_1 + 0x24);
    iVar3 = *(param_1 + 0x2c);
    iVar4 = *(param_1 + 0x54);
    uVar1 = *(param_1 + 0x38);
    if ((*(param_1 + 0x34) & 0x2000) != 0) {
        *(param_1 + 0x5c) = 0x1f;
        return;
    }
    uVar6 = *(param_1 + 0x34) >> 0xe;
    if (((uVar6 & 1) != 0) && (*(param_1 + 0x4c) == 4)) {
        *(param_1 + 0x5c) = 0x20;
        return;
    }
    if (((uVar6 & 1) == 0) || (*(param_1 + 0x4c) != 5)) {
        if ((*(param_1 + 0x48) == '\n') || (*(param_1 + 0x48) == '\v')) {
code_r0x000168bc:
            *(param_1 + 0x5c) = 0x1e;
            return;
        }
        if ((uVar6 & 1) != 0) {
            if (((*(*0x155ec + 0x1b90) == '\0') || (cVar5 = fcn.00015b6f(), cVar5 == '\n')) ||
               (cVar5 = fcn.00015b6f(), cVar5 == '\v')) goto code_r0x000168bc;
            uVar1 = *(param_1 + 0x38);
        }
        if (iVar2 == 0) {
            if (iVar3 != 0) {
code_r0x00016869:
                if (uVar1 == '\x01') {
                    *(param_1 + 0x5c) = 0x1d;
                    return;
                }
                if (iVar4 == 0) {
                    *(param_1 + 0x5c) = 0x22;
                    return;
                }
                if (iVar4 == 1) {
                    *(param_1 + 0x5c) = 0x18;
                    return;
                }
                if (iVar4 != 2) {
                    if (iVar4 == 3) {
                        *(param_1 + 0x5c) = 0x24;
                        return;
                    }
                    if (iVar4 != 4) {
                        return;
                    }
                    *(param_1 + 0x5c) = 0x25;
                    return;
                }
                *(param_1 + 0x5c) = 0x23;
                return;
            }
            if ((iVar4 == 0) && (uVar1 == 0)) goto code_r0x000167c3;
        }
        else if (iVar3 != 0) goto code_r0x00016869;
        if (iVar2 == 0) {
            if ((*(param_1 + 0x14) == 0x10) && ((uVar1 & 0xff00) == 0)) {
                *(param_1 + 0x5c) = 0x21;
                return;
            }
code_r0x000167c3:
            *(param_1 + 0x5c) = 0x15;
            return;
        }
        if (iVar2 == 1) {
            *(param_1 + 0x5c) = 0x19;
            return;
        }
        if (iVar2 == 2) {
            if ((uVar1 >> 8 == 1) || (uVar1 >> 8 == 2)) {
                *(param_1 + 0x5c) = 0x1a;
            }
            else {
                *(param_1 + 0x5c) = 0x17;
            }
            if ((*(param_1 + 0x3a) & 2) != 0) {
                *(param_1 + 0x5c) = 0x1b;
                return;
            }
            if ((*(param_1 + 0x3a) & 1) == 0) {
                return;
            }
            *(param_1 + 0x5c) = 0x1c;
            return;
        }
        if (iVar2 != 3) {
            *(param_1 + 0x5c) = 0x26;
            return;
        }
    }
    *(param_1 + 0x5c) = 0x16;
    return;
}


/* fcn.000166a1 @ 0x166a1 */

void fcn.000166a1(int param_1)

{
    int iVar1;
    uint uVar2;
    
    iVar1 = *(param_1 + 0x14);
    if (iVar1 != 1) {
        if (iVar1 == 2) {
            *(param_1 + 0x60) = 0x2a;
            return;
        }
        if (iVar1 == 4) {
            *(param_1 + 0x60) = 0x2b;
            return;
        }
        if (iVar1 == 8) {
            *(param_1 + 0x60) = 0x2c;
            return;
        }
        if (iVar1 == 0x10) {
            *(param_1 + 0x60) = ((*(param_1 + 0x34) & 0x800) != 0) + 0x27;
            return;
        }
        if (iVar1 != 0x20) {
            return;
        }
    }
    uVar2 = 0x29;
    if ((*(param_1 + 0x34) >> 0xe & 1) != 0) {
        uVar2 = 0x2d;
    }
    *(param_1 + 0x60) = uVar2;
    return;
}


/* fcn.000168c8 @ 0x168c8 */

void fcn.000168c8(int param_1)

{
    uint16_t uVar1;
    
    if ((*(param_1 + 0x14) & 0x12) == 0) {
        uVar1 = *(param_1 + 0x20);
        if (uVar1 < 0x101) {
            if (uVar1 == 0x100) {
                *(param_1 + 100) = 0x36;
                return;
            }
            if (uVar1 == 2) {
                *(param_1 + 100) = 0x2f;
                return;
            }
            if (uVar1 == 4) {
                *(param_1 + 100) = 0x30;
                return;
            }
            if (uVar1 == 8) {
                *(param_1 + 100) = 0x31;
                return;
            }
            if (uVar1 == 0x10) {
                *(param_1 + 100) = 0x32;
                return;
            }
            if (uVar1 == 0x20) {
                *(param_1 + 100) = 0x33;
                return;
            }
            if (uVar1 == 0x40) {
                *(param_1 + 100) = 0x34;
                return;
            }
            if (uVar1 == 0x80) {
                *(param_1 + 100) = 0x35;
                return;
            }
        }
        else {
            if (uVar1 == 0x200) {
                *(param_1 + 100) = 0x37;
                return;
            }
            if (uVar1 == 0x400) {
                *(param_1 + 100) = 0x38;
                return;
            }
            if (uVar1 == 0x800) {
                *(param_1 + 100) = 0x39;
                return;
            }
            if (uVar1 == 0x1000) {
                *(param_1 + 100) = 0x3a;
                return;
            }
            if (uVar1 == 0x2000) {
                *(param_1 + 100) = 0x3b;
                return;
            }
            if (uVar1 == 0x4000) {
                *(param_1 + 100) = 0x3c;
                return;
            }
            if (uVar1 == 0x8000) {
                *(param_1 + 100) = 0x3d;
                return;
            }
        }
    }
    *(param_1 + 100) = 0x2e;
    return;
}


/* fcn.000165c1 @ 0x165c1 */

//WARNING: Control flow encountered bad instruction data

void fcn.000165c1(int param_1)

{
    switch(*(param_1 + 0x48)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    default:
        *(param_1 + 0x68) = 0x3f;
        return;
    }
}


/* fcn.000164f9 @ 0x164f9 */

void __cdecl fcn.000164f9(int32_t arg_8h,int32_t arg_ch)

{
    int32_t iVar1;
    char cVar2;
    int iVar3;
    uint8_t uVar4;
    
    iVar1 = arg_8h;
    if (*(arg_8h + 0x14) != 0x20) {
        *(arg_8h + 0x70) = 1;
    }
    if ((*(arg_8h + 0x34) & 0x2000) == 0) {
        uVar4 = 0;
        arg_8h = arg_8h & 0xffffff00;
        if (**(*0x155ec + 0x1c) != '\0') {
            do {
                iVar3 = fcn.00015bed(arg_ch,arg_8h,1);
                if (iVar3 == 0) {
                    *(iVar1 + 0x70) = *(iVar1 + 0x70) | 0x20;
                    break;
                }
                uVar4 = uVar4 + 1;
                arg_8h = CONCAT31(arg_8h._1_3_,uVar4);
            } while (uVar4 < **(*0x155ec + 0x1c));
        }
        cVar2 = fcn.00016464(arg_ch);
        if (cVar2 != '\0') {
            *(iVar1 + 0x70) = *(iVar1 + 0x70) | 0x40;
        }
        cVar2 = *(iVar1 + 0x48);
        if (cVar2 != '\0') {
            *(iVar1 + 0x70) = *(iVar1 + 0x70) | 8;
            if (*(iVar1 + 0x14) == 0x20) {
                *(iVar1 + 0x70) = *(iVar1 + 0x70) & 0xfffffffe;
            }
            if ((((cVar2 != '\v') && (cVar2 != '\n')) && (*(iVar1 + 0x49) != '\0')) && (*(iVar1 + 0x24) != 3)) {
                *(iVar1 + 0x70) = *(iVar1 + 0x70) | 0x10;
            }
        }
        cVar2 = fcn.00016337(arg_ch,2);
        if (cVar2 != '\0') {
            *(iVar1 + 0x70) = *(iVar1 + 0x70) | 4;
        }
        cVar2 = fcn.00016337(arg_ch,3);
        if (cVar2 != '\0') {
            *(iVar1 + 0x70) = *(iVar1 + 0x70) | 2;
        }
    }
    return;
}


/* fcn.00015b95 @ 0x15b95 */

uint fcn.00015b95(uint param_1)

{
    int iVar1;
    
    iVar1 = fcn.00018566(param_1);
    if (iVar1 != 0) {
        if (param_1 == 1) {
            iVar1 = fcn.0001ba14();
            if (iVar1 != 0) {
                iVar1 = fcn.0001ba14();
code_r0x00015bc5:
                return *(iVar1 + 0xb0);
            }
        }
        else if (param_1 == 2) {
            iVar1 = fcn.0001ba29();
            if (iVar1 != 0) {
                iVar1 = fcn.0001ba29();
                goto code_r0x00015bc5;
            }
        }
    }
    return 0;
}


/* fcn.000160b6 @ 0x160b6 */

uint fcn.000160b6(uint8_t param_1,uchar *param_2)

{
    uchar uVar1;
    
    if (param_2 == NULL) {
        return 1;
    }
    if (**(*(*0x155ec + 0x1c) + 0x1c + param_1 * 4) == 0) {
        return 0xe;
    }
    uVar1 = fcn.0001a59d();
    *param_2 = uVar1;
    return 0;
}


/* fcn.00015bed @ 0x15bed */

//WARNING: Removing unreachable block (ram,0x00015c84)

int fcn.00015bed(uint param_1,uint param_2)

{
    int *piVar1;
    int iVar2;
    int iVar3;
    uint64_t uVar4;
    char cVar5;
    uint8_t uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    uint64_t uVar10;
    uint8_t unaff_retaddr;
    
    iVar8 = *(*0x155ec + 0x1c);
    iVar9 = 0;
    iVar7 = fcn.00019efc(param_2);
    if (iVar7 == 0) {
        return 0xf;
    }
    iVar2 = *(iVar7 + 0x20);
    if (((*(iVar2 + 0xb0) & 0x41) != 0) && ((*(iVar2 + 0xb0) >> 9 & 1) == 0)) {
        if (*(iVar8 + 0x18) <= unaff_retaddr) {
            return 0xe;
        }
        iVar8 = *(iVar8 + 0x1c + unaff_retaddr * 4);
        if ((*(*(*(iVar8 + 0x30) + 0x20) + 8) & 0x21) != 0) {
            return 0x14;
        }
        if ((*(iVar8 + 0x40) == '\0') || ((*(iVar2 + 0x84) >> 4 & 1) == 0)) {
            uVar4 = *(iVar2 + 0x78);
            iVar2 = *(iVar8 + 4);
            uVar10 = fcn.0001b363();
            if (uVar4 < uVar10) {
                return 0xd;
            }
            uVar6 = 0;
            if (*(iVar2 + 0xc) != '\0') {
                do {
                    iVar3 = *(iVar2 + 0x10 + uVar6 * 4);
                    cVar5 = fcn.00016cfb(iVar3 + 9);
                    if (cVar5 == '\0') {
                        if (((*(*(iVar3 + 0x20) + 0x84) >> 7 ^ *(*(iVar7 + 0x20) + 0x84) >> 7) & 1) != 0) {
                            return 0x27;
                        }
                        cVar5 = fcn.0001871c(0x100);
                        if (((cVar5 != '\0') && (*(*(*(iVar8 + 0x30) + 0x20) + 8) != 0x10)) &&
                           (((*(*(iVar3 + 0x20) + 0x84) ^ *(*(iVar7 + 0x20) + 0x84)) & 8) != 0)) {
                            return 0x15;
                        }
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 < *(iVar2 + 0xc));
            }
            uVar6 = 0;
            if (*(iVar2 + 0x2c) != '\0') {
                do {
                    iVar8 = *(*(**(iVar2 + 0x30 + uVar6 * 4) + 0xc4) + 0x10);
                    if ((*(iVar8 + 8) == 2) || ((*(iVar8 + 0x20) & 0x21) != 0)) {
                        iVar8 = fcn.0001a3f9();
                        if (iVar8 == 0) {
                            iVar9 = 0x14;
                            break;
                        }
                        if (param_2 == '\0') {
                            fcn.00016c6c(0x40);
                            fcn.00016ca7(1);
                            fcn.0001acf9();
                        }
                    }
                    else {
                        iVar9 = 0x14;
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 < *(iVar2 + 0x2c));
            }
            if ((param_2 == '\0') && (iVar9 == 0)) {
                iVar8 = *(iVar2 + 0x38);
                iVar7 = fcn.000225ad();
                piVar1 = iVar8 + 0x10;
                *piVar1 = *piVar1 + iVar7;
                (****(iVar2 + 0x38))(1);
            }
            return iVar9;
        }
    }
    return 0x10;
}


/* fcn.00016464 @ 0x16464 */

uint32_t __cdecl fcn.00016464(int32_t arg_8h)

{
    int iVar1;
    int32_t iVar2;
    uint32_t uVar3;
    
    iVar2 = arg_8h;
    iVar1 = *(*(*0x155ec + 0x1c) + 0x1c + (arg_8h & 0xffU) * 4);
    uVar3 = fcn.0001beb7();
    if ((((uVar3 == 3) && (uVar3 = *(*(iVar1 + 0x30) + 0x20), *(uVar3 + 8) != 1)) &&
        (uVar3 = fcn.000160b6(iVar2,&arg_8h + 3), uVar3 == 0)) && (arg_8h._3_1_ != -1)) {
        return 1;
    }
    return uVar3 & 0xffffff00;
}


/* fcn.00016337 @ 0x16337 */

//WARNING: Type propagation algorithm not settling

uint fcn.00016337(uint32_t param_1,char param_2)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint8_t uVar6;
    uint32_t uVar7;
    bool bVar8;
    
    if (*(*(*0x155ec + 0x1c) + 0x18) <= param_1) {
        return 0;
    }
    iVar1 = *(*(*0x155ec + 0x1c) + 0x1c + (param_1 & 0xff) * 4);
    uVar2 = *(iVar1 + 0x28);
    iVar1 = *(*(iVar1 + 0x30) + 0x20);
    iVar3 = fcn.0001beb7();
    if (((*(iVar1 + 8) == 0x10) && (iVar3 != 3)) && ((uVar2 & 0x2000) == 0)) {
        uVar4 = fcn.0001ba41();
        uVar6 = 0;
        bVar8 = false;
        uVar7 = uVar4 & 0xff;
        uVar4 = (uVar4 & 0xffff) >> 8;
        if ((iVar3 == 2) && ((*(*(*(iVar1 + 0x34 + *(iVar1 + 0x31) * 4) + 0x20) + 0xb0) >> 4 & 1) == 0)) {
            uVar6 = (uVar4 != 1) + 1;
            bVar8 = uVar4 == 1;
        }
        if (param_2 == '\x02') {
            if (bVar8) {
                return 0;
            }
            uVar5 = fcn.00015b95(param_1,2);
            if ((uVar5 & 0x84) == 4) {
                return 0;
            }
            if ((uVar5 & 0x1000000) != 0) {
                return 0;
            }
            if (uVar4 == 1) {
                if (uVar7 == 1) {
                    return 0;
                }
                if (uVar7 == 3) {
                    return 0;
                }
            }
            if ((uVar2 & 0x800) == 0) {
                return 1;
            }
            bVar8 = uVar4 == 2;
        }
        else {
            if (param_2 != '\x03') {
                return 0;
            }
            if ((uVar6 & 2) != 0) {
                return 0;
            }
            uVar5 = fcn.00015b95(param_1,1);
            if ((uVar5 & 0x84) == 4) {
                return 0;
            }
            if ((uVar5 & 0x1000000) != 0) {
                return 0;
            }
            if (uVar4 == 2) {
                if (uVar7 == 1) {
                    return 0;
                }
                if (uVar7 == 3) {
                    return 0;
                }
            }
            if ((uVar2 & 0x800) == 0) {
                return 1;
            }
            bVar8 = uVar4 == 1;
        }
        if (!bVar8) {
            return 1;
        }
    }
    return 0;
}


/* fcn.00015b6f @ 0x15b6f */

uint32_t fcn.00015b6f(void)

{
    int iVar1;
    
    if (*(*0x155ec + 0x1b90) != '\0') {
        iVar1 = *(*(*0x150c4 + 0x238) + 0xb4);
        return CONCAT31(iVar1 >> 8,*(iVar1 + 0x40));
    }
    return *0x155ec & 0xffffff00;
}


/* fcn.00015dc6 @ 0x15dc6 */

uint __cdecl fcn.00015dc6(int32_t arg_8h)

{
    uint8_t uVar1;
    int32_t var_7ch;
    int8_t var_4ch;
    int8_t var_34h;
    int8_t var_4h;
    unkbyte3 Stack_7;
    
    uVar1 = 0;
    _var_4h = _var_4h & 0xffffff00;
    if (*(*(*0x155ec + 0x1c) + 0x18) != '\0') {
        do {
            fcn.000160f4(_var_4h,&var_7ch);
            if (var_4ch == *(arg_8h + 0x59)) {
                if ((var_34h != 10) && (var_34h != 0xb)) {
                    return 0;
                }
                return 1;
            }
            uVar1 = uVar1 + 1;
            _var_4h = CONCAT31(Stack_7,uVar1);
        } while (uVar1 < *(*(*0x155ec + 0x1c) + 0x18));
    }
    return 0;
}


/* fcn.00015e7d @ 0x15e7d */

bool __cdecl fcn.00015e7d(int32_t arg_8h)

{
    char cVar1;
    uint8_t uVar2;
    int32_t var_7ch;
    int8_t var_4ch;
    int8_t var_4h;
    unkbyte3 Stack_7;
    
    uVar2 = 0;
    _var_4h = _var_4h & 0xffffff00;
    if (*(*(*0x155ec + 0x1c) + 0x18) != '\0') {
        do {
            fcn.000160f4(_var_4h,&var_7ch);
            if (var_4ch == *(arg_8h + 0x59)) {
                cVar1 = fcn.00015edb(&var_7ch);
                return cVar1 != '\0';
            }
            uVar2 = uVar2 + 1;
            _var_4h = CONCAT31(Stack_7,uVar2);
        } while (uVar2 < *(*(*0x155ec + 0x1c) + 0x18));
    }
    return false;
}


/* fcn.00015e22 @ 0x15e22 */

uint32_t __cdecl fcn.00015e22(int32_t arg_8h)

{
    uint32_t uVar1;
    uint8_t uVar2;
    int32_t var_7ch;
    int8_t var_4ch;
    int32_t var_48h;
    int8_t var_4h;
    unkbyte3 Stack_7;
    
    uVar2 = 0;
    uVar1 = *(*0x155ec + 0x1c);
    _var_4h = _var_4h & 0xffffff00;
    if (*(uVar1 + 0x18) != '\0') {
        do {
            fcn.000160f4(_var_4h,&var_7ch);
            if ((var_4ch == *(arg_8h + 0x59)) && ((var_48h >> 0xe & 1) != 0)) {
                return CONCAT31(var_48h >> 0x16,1);
            }
            uVar2 = uVar2 + 1;
            _var_4h = CONCAT31(Stack_7,uVar2);
            uVar1 = *(*0x155ec + 0x1c);
        } while (uVar2 < *(uVar1 + 0x18));
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00015ff4 @ 0x15ff4 */

void fcn.00015ff4(uint32_t *param_1,uint32_t *param_2)

{
    uint8_t uVar1;
    int *piVar2;
    uint32_t uVar3;
    int8_t arg_8h;
    char cVar4;
    int iVar5;
    uint8_t uVar6;
    int unaff_EBX;
    int iVar7;
    uint32_t uVar8;
    
    uVar1 = **(*0x155ec + 0x1c);
    fcn.00015fb5();
    uVar6 = 0;
    *param_2 = 0;
    *param_1 = 0;
    if (uVar1 != 0) {
        uVar8 = 0;
        iVar7 = uVar1 << 8;
        do {
            iVar5 = fcn.00019efc(uVar6);
            iVar5 = *(iVar5 + 0x1c);
            if ((iVar5 != 0) && (uVar1 = *(iVar5 + 0x2c), uVar1 != 0)) {
                uVar6 = 0;
                if (uVar1 != 0) {
                    do {
                        piVar2 = *(iVar5 + 0x30 + uVar6 * 4);
                        if ((piVar2 == NULL) || ((*(*piVar2 + 0x84) & 0x200) == 0)) goto code_r0x000160a1;
                        uVar6 = uVar6 + 1;
                    } while (uVar6 < uVar1);
                }
                if (unaff_EBX != 0) {
                    arg_8h = fcn.0001b3df();
                    cVar4 = fcn.0001cbf8(arg_8h);
                    if (cVar4 != '\0') {
                        *param_1 = *param_1 | 1 << (uVar8 & 0x1f);
                        goto code_r0x000160a1;
                    }
                }
                *param_2 = *param_2 | 1 << (uVar8 & 0x1f);
            }
code_r0x000160a1:
            uVar6 = iVar7 + 1;
            uVar8 = uVar8 + 1;
            uVar3 = iVar7 >> 8;
            iVar7 = CONCAT31(iVar7 >> 8,uVar6);
        } while (uVar6 < uVar3);
    }
    return;
}


/* fcn.0001a1ab @ 0x1a1ab */

void __thiscall fcn.0001a1ab(int param_1,uint8_t param_2)

{
    uint32_t uVar1;
    
    uVar1 = param_2;
    if (*(param_1 + 0x6c + uVar1 * 8) == '\0') {
        *(param_1 + 0x6c + uVar1 * 8) = 1;
        fcn.0001b236(*(param_1 + 0x68 + uVar1 * 8));
    }
    if ((*(param_1 + 0x20) & 0x21) == 0) {
        if (*(param_1 + 8) < 2) {
            *(param_1 + 0x54) = param_2;
            *(param_1 + 8) = 2;
            if (*(param_1 + 0x20) == 0x10) {
                fcn.0001aa51(*(param_1 + 0x68 + uVar1 * 8),param_2);
            }
        }
    }
    else if (*(param_1 + 0x54) == -1) {
        *(param_1 + 0x54) = param_2;
    }
    return;
}


/* fcn.0001a311 @ 0x1a311 */

void __thiscall fcn.0001a311(int param_1,uint8_t param_2)

{
    if ((param_2 < 6) || (param_2 == 0xff)) {
        if ((*(param_1 + 8) != 3) && (*(param_1 + 8) = 3, param_2 != 0xff)) {
            *(param_1 + 0x6c + param_2 * 8) = 1;
            fcn.0001b236(*(param_1 + 0x68 + param_2 * 8));
        }
    }
    return;
}


/* fcn.0001b236 @ 0x1b236 */

void __thiscall fcn.0001b236(int param_1,int param_2)

{
    int iVar1;
    uint8_t uVar2;
    
    iVar1 = fcn.0001c77e(param_2 + 0x14);
    if (iVar1 != 0) {
        fcn.0001d3fb();
        uVar2 = 0;
        if (*(param_1 + 0x2c) != '\0') {
            do {
                fcn.0001adfa();
                uVar2 = uVar2 + 1;
            } while (uVar2 < *(param_1 + 0x2c));
        }
        (****(param_1 + 0x38))(1);
    }
    return;
}


/* fcn.00019f15 @ 0x19f15 */

void __thiscall fcn.00019f15(uint *param_1,uint *param_2)

{
    *param_2 = *param_1;
    *param_1 = param_2;
    return;
}


/* fcn.00019ef1 @ 0x19ef1 */

void __fastcall fcn.00019ef1(int *param_1)

{
    if (*param_1 != NULL) {
        *param_1 = **param_1;
    }
    return;
}


/* fcn.0001d225 @ 0x1d225 */

uint * __thiscall fcn.0001d225(uint *param_1,uint param_2)

{
    param_1[3] = 0;
    param_1[2] = 0;
    *param_1 = 0x141f0;
    fcn.0001d28f(param_2);
    return param_1;
}


/* fcn.0001d28f @ 0x1d28f */

void __thiscall fcn.0001d28f(int param_1,int param_2)

{
    *(param_1 + 0x10) = *(param_2 + 0x10);
    *(param_1 + 0x78) = *(param_2 + 0x78);
    *(param_1 + 0x7c) = *(param_2 + 0x7c);
    *(param_1 + 0x80) = *(param_2 + 0x80);
    *(param_1 + 0x84) = *(param_2 + 0x84);
    *(param_1 + 0x88) = *(param_2 + 0x88);
    *(param_1 + 0x8c) = *(param_2 + 0x8c);
    fcn.0002245a(param_1 + 0x14,0x11,param_2 + 0x14,0x11);
    fcn.0002245a(param_1 + 0x25,0x29,param_2 + 0x25,0x29);
    return;
}


/* fcn.0001d27d @ 0x1d27d */

uint __thiscall fcn.0001d27d(uint param_1,uint param_2)

{
    fcn.0001d28f(param_2);
    return param_1;
}


/* fcn.0001c77e @ 0x1c77e */

uint * __thiscall fcn.0001c77e(int param_1,int param_2)

{
    char cVar1;
    uint *puVar2;
    uint *puVar3;
    
    puVar2 = *(param_1 + 8);
    puVar3 = puVar2;
    if (param_2 != 0) {
        for (; puVar3 = NULL, puVar2 != NULL; puVar2 = *puVar2) {
            cVar1 = fcn.0001c6b5();
            if (cVar1 != '\0') {
                return puVar2;
            }
        }
    }
    return puVar3;
}


/* fcn.0001b4df @ 0x1b4df */

uint32_t __fastcall fcn.0001b4df(int param_1)

{
    uint32_t in_EAX;
    uint8_t uVar1;
    
    uVar1 = 0;
    if (*(param_1 + 0x2c) != 0) {
        do {
            in_EAX = *(*(*(param_1 + 0x30 + uVar1 * 4) + 0x30) + 0x20);
            if ((*(in_EAX + 8) & 1) != 0) {
                return CONCAT31(in_EAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(param_1 + 0x2c));
    }
    return in_EAX & 0xffffff00;
}


/* fcn.0001d0ce @ 0x1d0ce */

void fcn.0001d0ce(int param_1,int param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t arg_8h;
    bool bVar4;
    uint32_t uStack_238;
    int iStack_234;
    uchar *puStack_230;
    int iStack_22c;
    uint uStack_228;
    uchar auStack_218 [24];
    uchar auStack_200 [512];
    
    *(param_2 + 0x14) = 5;
    *(param_2 + 0x16) = 8;
    if ((*(param_2 + 0x18) == -0x19) || ((*(param_2 + 8) & 1) == 0)) {
        fcn.0001d1ed(auStack_218,param_2);
        iVar1 = fcn.00011add(*(param_1 + 0xac),auStack_218);
        if (iVar1 != 0) {
            return;
        }
    }
    else {
        uVar2 = *(param_2 + 0x10) >> 9;
        fcn.0002245a(&uStack_238,0x20,param_2,0x20);
        arg_8h = *(param_2 + 8);
        puStack_230 = auStack_200;
        uVar3 = 0;
        uStack_228 = 0x200;
        if (uVar2 != 0) {
            do {
                if (*(param_2 + 0x18) == '*') {
                    fcn.0002245a(auStack_200,0x200,arg_8h,0x200);
                }
                fcn.0001d1ed(auStack_218,&uStack_238);
                iVar1 = fcn.00011add(*(param_1 + 0xac),auStack_218);
                if (iVar1 != 0) {
                    return;
                }
                if (*(param_2 + 0x18) == '(') {
                    fcn.0002245a(arg_8h,0x200,auStack_200,0x200);
                }
                arg_8h = arg_8h + 0x200;
                bVar4 = 0xfffffffe < uStack_238;
                uStack_238 = uStack_238 + 1;
                iStack_234 = iStack_234 + bVar4;
                *(param_2 + 0xc) = *(param_2 + 0xc) + iStack_22c;
                uVar3 = uVar3 + 1;
            } while (uVar3 < uVar2);
        }
    }
    *(param_2 + 0x14) = 0;
    return;
}


/* fcn.00022718 @ 0x22718 */

int __cdecl fcn.00022718(uint32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    int iVar1;
    
    for (; (*arg_8h != 0 && (*arg_ch != 0)); arg_ch = arg_ch + 1) {
        if (arg_10h == 0) goto code_r0x00022742;
        if (*arg_8h != *arg_ch) break;
        arg_8h = arg_8h + 1;
        arg_10h = arg_10h + -1;
    }
    if (arg_10h == 0) {
code_r0x00022742:
        iVar1 = 0;
    }
    else {
        iVar1 = *arg_8h - *arg_ch;
    }
    return iVar1;
}


/* fcn.0001d312 @ 0x1d312 */

void __fastcall fcn.0001d312(int param_1)

{
    *(param_1 + 2) = 0;
    *(param_1 + 6) = 0;
    *(param_1 + 8) = 0;
    return;
}


/* fcn.00017375 @ 0x17375 */

void __cdecl fcn.00017375(int32_t arg_8h)

{
    int32_t var_c8h;
    
    fcn.00016f1a();
    fcn.00016fbe(arg_8h);
    fcn.00016fbe(&var_c8h);
    return;
}


/* fcn.00016f1a @ 0x16f1a */

uint * __thiscall fcn.00016f1a(uint *param_1,int param_2)

{
    uint *puVar1;
    
    puVar1 = -(param_2 != 0) & param_2 + 0xa0U;
    param_1[0x28] = *puVar1;
    param_1[0x29] = puVar1[1];
    *(param_1 + 0x2a) = *(puVar1 + 2);
    fcn.0001d225(param_2);
    *param_1 = 0x13fa4;
    param_1[0x2b] = *(param_2 + 0xac);
    param_1[0x2c] = *(param_2 + 0xb0);
    param_1[0x2e] = *(param_2 + 0xb8);
    param_1[0x2f] = *(param_2 + 0xbc);
    *(param_1 + 0x30) = *(param_2 + 0xc0);
    return param_1;
}


/* fcn.00016fbe @ 0x16fbe */

int __thiscall fcn.00016fbe(int param_1,int param_2)

{
    uint *puVar1;
    
    puVar1 = -(param_2 != 0) & param_2 + 0xa0U;
    *(param_1 + 0xa0) = *puVar1;
    *(param_1 + 0xa4) = puVar1[1];
    *(param_1 + 0xa8) = *(puVar1 + 2);
    fcn.0001d27d(param_2);
    *(param_1 + 0xac) = *(param_2 + 0xac);
    *(param_1 + 0xb0) = *(param_2 + 0xb0);
    *(param_1 + 0xb8) = *(param_2 + 0xb8);
    *(param_1 + 0xbc) = *(param_2 + 0xbc);
    *(param_1 + 0xc0) = *(param_2 + 0xc0);
    return param_1;
}


/* fcn.0001c5b0 @ 0x1c5b0 */

uchar __thiscall fcn.0001c5b0(char *param_1,uint param_2)

{
    fcn.0001702b();
    fcn.00019f22(param_2);
    fcn.00019ead(param_2);
    *param_1 = *param_1 + -1;
    return 1;
}


/* fcn.0001702b @ 0x1702b */

void __fastcall fcn.0001702b(int param_1)

{
    *(param_1 + 0xb0) = 0;
    *(param_1 + 0x14) = 0;
    *(param_1 + 0xc0) = 1;
    return;
}


/* fcn.00019f22 @ 0x19f22 */

int * __thiscall fcn.00019f22(int *param_1,int *param_2)

{
    if (param_2 == *param_1) {
        *param_1 = **param_1;
    }
    if (param_2 == param_1[1]) {
        param_1[1] = param_1[1][1];
    }
    if (*param_2 != 0) {
        *(*param_2 + 4) = param_2[1];
    }
    if (param_2[1] != NULL) {
        *param_2[1] = *param_2;
    }
    return param_1;
}


/* fcn.00019ead @ 0x19ead */

uint * __thiscall fcn.00019ead(uint *param_1,uint *param_2)

{
    if (param_1[1] == NULL) {
        *param_1 = param_2;
        param_2[1] = 0;
    }
    else {
        *param_1[1] = param_2;
        param_2[1] = param_1[1];
    }
    *param_2 = 0;
    param_1[1] = param_2;
    return param_1;
}


/* fcn.0001d406 @ 0x1d406 */

void __thiscall fcn.0001d406(int param_1,uint param_2)

{
    char cVar1;
    
    *(param_1 + 0x24) = 0;
    fcn.0001d480(param_2);
    *(param_1 + 0x20) = param_2;
    if (*(param_1 + 0x1c) != 0) {
        cVar1 = fcn.0001c7e7(*(param_1 + 0x1c));
        if (cVar1 == '\0') {
            *(param_1 + 0x1c) = 0;
            fcn.00016c6c(2);
        }
    }
    return;
}


/* fcn.0001d480 @ 0x1d480 */

void __thiscall fcn.0001d480(int param_1,uint param_2)

{
    fcn.00022751(param_1 + 9,param_2,0x10);
    *(param_1 + 0x19) = 0;
    return;
}


/* fcn.0001c7e7 @ 0x1c7e7 */

uint __thiscall fcn.0001c7e7(int param_1,uint *param_2)

{
    uint *puVar1;
    
    puVar1 = *(param_1 + 0x34);
    while( true ) {
        if (puVar1 == NULL) {
            return 0;
        }
        if (puVar1 == param_2) break;
        puVar1 = *puVar1;
    }
    return CONCAT31(puVar1 >> 8,1);
}


/* fcn.00018443 @ 0x18443 */

uint32_t __thiscall fcn.00018443(int param_1,int param_2)

{
    int *piVar1;
    int iVar2;
    
    piVar1 = *(param_1 + 0x1c);
    iVar2 = piVar1[2];
    piVar1[1] = iVar2;
    while( true ) {
        if (iVar2 == 0) {
            return piVar1 & 0xffffff00;
        }
        if ((*(iVar2 + 0x20) == param_2) && (iVar2 = *(*(iVar2 + 0x1c) + 0x38), *(iVar2 + 0x20) != 0)) break;
        piVar1 = *(*(param_1 + 0x1c) + 4);
        iVar2 = *piVar1;
        *(*(param_1 + 0x1c) + 4) = iVar2;
    }
    return CONCAT31(iVar2 >> 8,1);
}


/* fcn.0001d9f5 @ 0x1d9f5 */

void __thiscall fcn.0001d9f5(int param_1,uint32_t param_2)

{
    ulong uVar1;
    int32_t arg_18h;
    int32_t arg_1ch;
    
    if (((*(param_2 + 0xb0) >> 0x19 & 1) == 0) && ((*(param_2 + 0xb0) >> 0x18 & 1) == 0)) {
        arg_1ch = *(param_1 + 4);
        arg_18h = 0x200;
        uVar1 = fcn.0001704b();
        fcn.000186ba(param_2,0x28,uVar1,uVar1 >> 0x20,arg_18h,arg_1ch);
        fcn.0001da4c(param_2);
    }
    else {
        fcn.00016c6c(0xc28387);
    }
    return;
}


/* fcn.0001c6b5 @ 0x1c6b5 */

uint16_t __thiscall fcn.0001c6b5(int32_t param_1,uint32_t param_2)

{
    uint16_t in_AX;
    
    if ((param_2 != 0) && (in_AX = fcn.00022718(param_2,param_1,0x10), in_AX == 0)) {
        return 1;
    }
    return in_AX & 0xff00;
}


/* fcn.0001d4da @ 0x1d4da */

int * __fastcall fcn.0001d4da(int param_1)

{
    int *piVar1;
    int *piVar2;
    uint8_t uVar3;
    
    uVar3 = 0;
    piVar2 = param_1 + 0xd8 + *(param_1 + 0x38) * 0x30;
    if (*(param_1 + 0x39) != '\0') {
        do {
            piVar2 = fcn.00021d7b();
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(param_1 + 0x39));
    }
    piVar1 = NULL;
    if (*piVar2 == -0x54524ef4) {
        piVar1 = piVar2;
    }
    return piVar1;
}


/* fcn.00017597 @ 0x17597 */

uint32_t __fastcall fcn.00017597(int param_1)

{
    uint32_t uVar1;
    
    uVar1 = *(param_1 + 0xb0);
    if ((uVar1 & 0x1000000) != 0) {
        return uVar1 & 0xffffff00;
    }
    return CONCAT31((uVar1 & 0xffffff0c) >> 8,(uVar1 & 0xffffff0c) != '\b');
}


/* fcn.000172aa @ 0x172aa */

void __thiscall fcn.000172aa(int param_1,uchar param_2,int16_t param_3)

{
    *(param_1 + 0xa2) = *(param_1 + 0xa2) + 1;
    *(param_1 + 0xa6) = param_3;
    *(param_1 + 0xa8) = param_2;
    if (param_3 == 3) {
        *(param_1 + 0xa4) = *(param_1 + 0xa4) + 1;
        fcn.000173ad();
    }
    return;
}


/* fcn.000175af @ 0x175af */

uchar __fastcall fcn.000175af(int param_1)

{
    char cVar1;
    
    if (*(param_1 + 4) == '\0') {
        cVar1 = fcn.00017597();
        if (cVar1 == '\0') {
            return 0;
        }
    }
    return 1;
}


/* fcn.00017428 @ 0x17428 */

uchar __thiscall fcn.00017428(uint8_t param_1,int param_2)

{
    uint32_t uVar1;
    char cVar2;
    uchar uVar3;
    int16_t iVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uchar uVar9;
    uint32_t *unaff_EBX;
    uint16_t uVar10;
    uint16_t uVar11;
    uint unaff_ESI;
    uint8_t uVar12;
    int iVar13;
    uint8_t uVar14;
    
    uVar9 = 0;
    iVar5 = *(*(*0x155ec + 0x18) + 4);
    cVar2 = fcn.00018443(param_2);
    uVar3 = 0;
    if (cVar2 != '\0') {
        uVar7 = 0;
        uVar12 = 0;
        uVar14 = unaff_ESI >> 0x18;
        if (*(iVar5 + 0x38) != '\0') {
            do {
                iVar13 = 0x10;
                iVar4 = fcn.00022718(uVar7 * 0x30 + 0xd8 + iVar5,param_2 + 0x14,0x10);
                if (iVar4 == 0) goto code_r0x000174a2;
                uVar12 = uVar12 + 1;
                uVar7 = uVar12;
            } while (uVar12 < *(iVar5 + 0x38));
        }
        iVar13 = param_2;
        fcn.0001d9f5(param_2);
code_r0x000174a2:
        if (*(iVar5 + 0x48) != 0) {
            if (*(iVar5 + 0x38) != '\0') {
                do {
                    iVar13 = param_2 + 0x14;
                    cVar2 = fcn.0001c6b5();
                    if (cVar2 != '\0') break;
                    param_1 = param_1 + 1;
                } while (param_1 < *(iVar5 + 0x38));
            }
            iVar5 = fcn.0001d4da(iVar13);
            if (iVar5 == 0) {
                return 0;
            }
            uVar10 = *(iVar5 + 4);
            uVar11 = 0;
            if (uVar10 != 0) {
                do {
                    uVar7 = uVar11;
                    uVar12 = *(iVar5 + 9 + uVar7 * 8);
                    if (uVar14 < uVar12) break;
                    if (uVar12 == uVar14) {
                        uVar6 = *(iVar5 + 0xe + uVar7 * 8);
                        uVar1 = *(iVar5 + 10 + uVar7 * 8);
                        uVar7 = *(iVar5 + 8 + uVar7 * 8);
                        uVar8 = uVar6 + CARRY4(uVar7,uVar1);
                        uVar10 = *(iVar5 + 4);
                        if ((unaff_EBX[1] <= uVar8) && ((unaff_EBX[1] < uVar8 || (*unaff_EBX <= uVar7 + uVar1)))) {
                            uVar8 = (unaff_EBX[4] >> 9) - 1;
                            uVar7 = unaff_EBX[1] + CARRY4(uVar8,*unaff_EBX);
                            if ((uVar6 < uVar7) || ((uVar6 <= uVar7 && (uVar1 <= uVar8 + *unaff_EBX)))) {
                                uVar9 = 1;
                                break;
                            }
                        }
                    }
                    uVar11 = uVar11 + 1;
                } while (uVar11 < uVar10);
            }
        }
        uVar3 = uVar9;
    }
    return uVar3;
}


/* fcn.00023cc0 @ 0x23cc0 */

ulong fcn.00023cc0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    
    if (param_4 == 0) {
        uVar4 = param_2 / param_3;
        iVar5 = (param_2 % param_3 << 0x20 | param_1) / param_3;
    }
    else {
        uVar4 = param_1;
        uVar6 = param_4;
        uVar7 = param_2;
        uVar8 = param_3;
        do {
            uVar3 = uVar6 & 1;
            uVar6 = uVar6 >> 1;
            uVar8 = uVar8 >> 1 | (uVar3 != 0) << 0x1f;
            uVar3 = uVar7 & 1;
            uVar7 = uVar7 >> 1;
            uVar4 = uVar4 >> 1 | (uVar3 != 0) << 0x1f;
        } while (uVar6 != 0);
        uVar1 = CONCAT44(uVar7,uVar4) / uVar8;
        iVar5 = uVar1;
        iVar2 = param_3 * (uVar1 & 0xffffffff);
        uVar4 = iVar2 >> 0x20;
        uVar6 = uVar4 + iVar5 * param_4;
        if (((CARRY4(uVar4,iVar5 * param_4)) || (param_2 < uVar6)) || ((param_2 <= uVar6 && (param_1 < iVar2)))) {
            iVar5 = iVar5 + -1;
        }
        uVar4 = 0;
    }
    return CONCAT44(uVar4,iVar5);
}


/* fcn.0001a213 @ 0x1a213 */

void fcn.0001a213(int param_1)

{
    uint8_t uVar1;
    
    uVar1 = 0;
    if (*(param_1 + 0x2b) != '\0') {
        do {
            fcn.0001a1ab();
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(param_1 + 0x2b));
    }
    return;
}


/* fcn.0001de2c @ 0x1de2c */

//WARNING: Variable defined which should be unmapped: var_1h

void __cdecl
fcn.0001de2c(int8_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h,int32_t arg_1ch,
            int8_t arg_20h)

{
    int32_t *piVar1;
    int iVar2;
    int in_ECX;
    int32_t var_4ch;
    int32_t var_20h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_1h;
    
    fcn.000173ea();
    *(in_ECX + 0x14) = *(*(in_ECX + 0x10) + 0x10);
    *(in_ECX + 0x18) = arg_8h;
    *(in_ECX + 0x2c) = 0;
    *(in_ECX + 0x28) = arg_18h;
    *(in_ECX + 0x3c) = arg_1ch;
    *(in_ECX + 0x32) = 0;
    *(in_ECX + 0x30) = arg_20h;
    *(in_ECX + 0x34) = &var_4ch;
    *(in_ECX + 0x24) = arg_14h;
    *(in_ECX + 0xc) = arg_ch;
    *(in_ECX + 0x20) = arg_10h;
    fcn.0001a69b(arg_ch,arg_10h,arg_14h,&var_1h,&var_ch);
    *(in_ECX + 8) = 0;
    *(in_ECX + 0x40 + var_1h * 4) = *(in_ECX + 0x34);
    iVar2 = *(in_ECX + 0x40 + var_1h * 4);
    piVar1 = *(in_ECX + 0x14) + (var_1h + 0xd) * 8;
    fcn.000173f8(*piVar1,*(in_ECX + 0x18),var_ch,var_8h,*(in_ECX + 0x28),*(in_ECX + 0x3c));
    *(iVar2 + 0x38) = var_1h;
    *(iVar2 + 0x28) = piVar1;
    fcn.000175fc(*(in_ECX + 0x18));
    fcn.0001ddd9(iVar2);
    return;
}


/* fcn.0001a69b @ 0x1a69b */

void __cdecl fcn.0001a69b(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h)

{
    int *in_ECX;
    
    if (arg_8h == 0) {
        (**(*in_ECX + 0xc))(arg_ch,arg_10h,arg_14h,arg_18h);
    }
    else if (arg_8h == 1) {
        (**(*in_ECX + 0x10))(arg_ch,arg_10h,arg_14h,arg_18h);
    }
    return;
}


/* fcn.000173f8 @ 0x173f8 */

void __cdecl
fcn.000173f8(int32_t arg_8h,uint32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h,int32_t arg_1ch)

{
    int32_t *in_ECX;
    
    *(in_ECX + 6) = arg_ch;
    in_ECX[0xd] = arg_14h;
    in_ECX[1] = arg_14h;
    in_ECX[4] = arg_18h;
    in_ECX[10] = arg_8h;
    in_ECX[0xc] = arg_10h;
    *in_ECX = arg_10h;
    in_ECX[2] = arg_1ch;
    return;
}


/* fcn.000175fc @ 0x175fc */

void __thiscall fcn.000175fc(int *param_1,uchar param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    char cVar7;
    uint32_t uVar8;
    ushort in_stack_ffffffe8;
    
    iVar1 = param_1[0xb];
    iVar2 = *param_1[10];
    *(param_1 + 6) = param_2;
    iVar3 = *(iVar1 + 0x10);
    uVar4 = *(iVar3 + 0x20);
    uVar5 = *(iVar3 + 0x18);
    uVar8 = uVar4 + *(iVar3 + 0x18);
    iVar6 = *(iVar3 + 0x24);
    iVar3 = *(iVar3 + 0x1c);
    *param_1 = uVar8 + param_1[0xc];
    param_1[1] = iVar6 + iVar3 + CARRY4(uVar4,uVar5) + param_1[0xd] + CARRY4(uVar8,param_1[0xc]);
    cVar7 = fcn.000175af();
    if ((cVar7 == '\0') || (((*(iVar2 + 0xb0) >> 3 & 1) != 0 && ((*(*(iVar1 + 0x14) + 0x20) & 0x21) != 0)))) {
        cVar7 = fcn.00017428(iVar2);
        if (cVar7 == '\0') {
            fcn.0001d0ce(iVar2,param_1);
            return;
        }
        in_stack_ffffffe8 = 2;
    }
    *(param_1 + 5) = 5;
    *(param_1 + 0x16) = in_stack_ffffffe8;
    return;
}


/* fcn.0001ddd9 @ 0x1ddd9 */

void __thiscall fcn.0001ddd9(int param_1,int param_2)

{
    int *piVar1;
    char cVar2;
    uint extraout_ECX;
    int32_t arg_ch;
    uint32_t arg_10h;
    uint32_t arg_14h;
    
    piVar1 = *(param_2 + 0x28);
    cVar2 = fcn.000175af();
    if ((cVar2 == '\0') || (((*(*piVar1 + 0xb0) >> 3 & 1) != 0 && ((*(*(param_1 + 0x14) + 0x20) & 0x21) != 0)))) {
        arg_ch = CONCAT31(extraout_ECX >> 8,*(param_2 + 0x14));
        if (*(param_2 + 0x14) == '\0') {
            return;
        }
        arg_10h = *(param_2 + 0x16);
        arg_14h = 1;
    }
    else {
        arg_14h = 0;
        arg_10h = 0;
        arg_ch = 0;
    }
    fcn.0001dd61(param_2,arg_ch,arg_10h,arg_14h);
    return;
}


/* fcn.00017913 @ 0x17913 */

void __fastcall fcn.00017913(int param_1)

{
    int iVar1;
    char cVar2;
    int32_t var_ch;
    int32_t var_8h;
    int8_t var_4h;
    unkbyte3 Stack_7;
    
    *(param_1 + 0x2b) = 0;
    iVar1 = *(*(param_1 + 0x14) + 8);
    var_ch = *(iVar1 + 0x30);
    var_8h = *(iVar1 + 0x34);
    _var_4h = CONCAT31(Stack_7,*(iVar1 + 0x38));
    if (*(iVar1 + 0x16) != 2) {
        fcn.0001a16f(_var_4h);
    }
    if ((*(param_1 + 0x120) < *(*(param_1 + 0x10) + 0x5c) - 1) &&
       (cVar2 = fcn.0001a492(&var_ch,&var_4h), cVar2 != '\0')) {
        fcn.0001de2c(0x28,*(*(param_1 + 0x10) + 0x60),*(param_1 + 0x108),*(param_1 + 0x10c),*(param_1 + 0x118),
                     *(param_1 + 0x11c),_var_4h);
        fcn.000179b4();
        return;
    }
    *(param_1 + 0x2a) = 6;
    *(param_1 + 0x28) = 7;
    return;
}


/* fcn.000178d3 @ 0x178d3 */

void __fastcall fcn.000178d3(int param_1)

{
    int iVar1;
    char cVar2;
    ushort uVar3;
    uint uStack_10;
    uint uStack_c;
    uint uStack_8;
    
    do {
        if (*(param_1 + 0x2b) == '\0') {
            *(param_1 + 0x2a) = 0;
            uVar3 = 0;
code_r0x000178f1:
            *(param_1 + 0x28) = uVar3;
            return;
        }
        if (*(*(param_1 + 0x10) + 8) == 3) {
            *(param_1 + 0x2a) = 6;
            uVar3 = 7;
            goto code_r0x000178f1;
        }
        if (*(*(*(param_1 + 0x14) + 8) + 0x16) == 2) {
            *(param_1 + 0x2a) = 5;
            *(param_1 + 0x28) = 2;
            return;
        }
        if (*(param_1 + 0x40) != 0) {
            *(param_1 + 0x120) = 0;
            *(param_1 + 0x14) = param_1 + 0x38;
            *(param_1 + 0x2b) = 0;
            iVar1 = *(*(param_1 + 0x14) + 8);
            uStack_10 = *(iVar1 + 0x30);
            uStack_c = *(iVar1 + 0x34);
            uStack_8 = CONCAT31(uStack_8._1_3_,*(iVar1 + 0x38));
            if (*(iVar1 + 0x16) != 2) {
                fcn.0001a16f(uStack_8);
            }
            if ((*(param_1 + 0x120) < *(*(param_1 + 0x10) + 0x5c) - 1) &&
               (cVar2 = fcn.0001a492(&uStack_10,&uStack_8), cVar2 != '\0')) {
                fcn.0001de2c(0x28,*(*(param_1 + 0x10) + 0x60),*(param_1 + 0x108),*(param_1 + 0x10c),
                             *(param_1 + 0x118),*(param_1 + 0x11c),uStack_8);
                fcn.000179b4();
            }
            else {
                *(param_1 + 0x2a) = 6;
                *(param_1 + 0x28) = 7;
            }
            return;
        }
    } while( true );
}


/* fcn.0001a16f @ 0x1a16f */

void __thiscall fcn.0001a16f(int param_1,uint32_t param_2)

{
    int16_t *piVar1;
    int iVar2;
    
    iVar2 = *(param_1 + 0x68 + (param_2 & 0xff) * 8);
    piVar1 = iVar2 + 0xa0;
    *piVar1 = *piVar1 + 1;
    if (1 < *(iVar2 + 0xa0)) {
        fcn.0001a1ab(param_2);
    }
    return;
}


/* fcn.0001a492 @ 0x1a492 */

bool __thiscall fcn.0001a492(int param_1,uint *param_2,uchar *param_3)

{
    char cVar1;
    int arg_8h;
    uint8_t uVar2;
    ulong uVar3;
    
    uVar3 = fcn.0001a517(*param_2,param_2[1],*param_3);
    uVar2 = 0;
    if (*(param_1 + 0x5c) != 1 && -1 < *(param_1 + 0x5c) - 1) {
        do {
            arg_8h = (*(param_1 + 0x60) + 1) % *(param_1 + 0x5c);
            *(param_1 + 0x60) = arg_8h;
            fcn.0001a69b(arg_8h,uVar3,uVar3 >> 0x20,param_3,param_2);
            cVar1 = fcn.000175af();
            if (cVar1 == '\0') break;
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(param_1 + 0x5c) - 1);
    }
    return uVar2 != *(param_1 + 0x5c) - 1;
}


/* fcn.000179b4 @ 0x179b4 */

void __fastcall fcn.000179b4(int param_1)

{
    int iVar1;
    char cVar2;
    ushort uVar3;
    uint uStack_10;
    uint uStack_c;
    uint uStack_8;
    
    if (*(param_1 + 0x2b) == '\0') {
        *(param_1 + 0x40) = 0;
        while (*(param_1 + 0x40) == 0) {
            if (*(param_1 + 0x2b) == '\0') {
                *(param_1 + 0x2a) = 0;
                uVar3 = 0;
code_r0x000178f1:
                *(param_1 + 0x28) = uVar3;
                return;
            }
            if (*(*(param_1 + 0x10) + 8) == 3) {
                *(param_1 + 0x2a) = 6;
                uVar3 = 7;
                goto code_r0x000178f1;
            }
            if (*(*(*(param_1 + 0x14) + 8) + 0x16) == 2) {
                *(param_1 + 0x2a) = 5;
                *(param_1 + 0x28) = 2;
                return;
            }
        }
        *(param_1 + 0x120) = 0;
        *(param_1 + 0x14) = param_1 + 0x38;
    }
    else {
        *(param_1 + 0x120) = *(param_1 + 0x120) + 1;
    }
    *(param_1 + 0x2b) = 0;
    iVar1 = *(*(param_1 + 0x14) + 8);
    uStack_10 = *(iVar1 + 0x30);
    uStack_c = *(iVar1 + 0x34);
    uStack_8 = CONCAT31(uStack_8._1_3_,*(iVar1 + 0x38));
    if (*(iVar1 + 0x16) != 2) {
        fcn.0001a16f(uStack_8);
    }
    if ((*(param_1 + 0x120) < *(*(param_1 + 0x10) + 0x5c) - 1) &&
       (cVar2 = fcn.0001a492(&uStack_10,&uStack_8), cVar2 != '\0')) {
        fcn.0001de2c(0x28,*(*(param_1 + 0x10) + 0x60),*(param_1 + 0x108),*(param_1 + 0x10c),*(param_1 + 0x118),
                     *(param_1 + 0x11c),uStack_8);
        fcn.000179b4();
    }
    else {
        *(param_1 + 0x2a) = 6;
        *(param_1 + 0x28) = 7;
    }
    return;
}


/* fcn.0001aa74 @ 0x1aa74 */

void __cdecl fcn.0001aa74(int32_t arg_8h,int32_t arg_ch)

{
    uint uVar1;
    int in_ECX;
    int32_t var_8h;
    int32_t var_4h;
    
    if (((*(*(*(*(*(in_ECX + 0x18) + 0xb4) + 0x30) + 0x20) + 8) == 0x10) && (*(in_ECX + 0x4b) != '\0')) &&
       ((*(in_ECX + 0x4c) == 2 || (*(in_ECX + 0x4c) == 3)))) {
        var_8h = in_ECX;
        var_4h = in_ECX;
        fcn.0001b9c0(&var_8h,&var_4h);
        uVar1 = fcn.0001b3fb();
        uVar1 = fcn.0001ba14(uVar1);
        fcn.0002113a(var_8h,var_4h,uVar1);
        fcn.0002116e(arg_8h,arg_ch);
    }
    return;
}


/* fcn.0001e0fe @ 0x1e0fe */

void __thiscall fcn.0001e0fe(int *param_1,uint param_2)

{
    int iVar1;
    
    if (*param_1 != 0) {
        fcn.0001e001(*param_1);
    }
    *(param_1 + 1) = 0;
    iVar1 = fcn.0001dfcd(*(param_1 + 6),param_2);
    *param_1 = iVar1;
    if (iVar1 == 0) {
        iVar1 = fcn.0001e05d(*(param_1 + 6),param_2);
        *param_1 = iVar1;
    }
    else {
        *(param_1 + 1) = 1;
    }
    return;
}


/* fcn.000177eb @ 0x177eb */

void __thiscall fcn.000177eb(int param_1,int param_2)

{
    *(param_2 + 0x18) = *(param_1 + 0x18);
    *(param_2 + 0x1c) = *(param_1 + 0x1c);
    *(param_2 + 0x20) = *(param_1 + 0x20);
    *(param_2 + 0x24) = *(param_1 + 0x24);
    *(param_2 + 0x98) = *(param_1 + 0x118);
    return;
}


/* fcn.00017e8e @ 0x17e8e */

void __thiscall
fcn.00017e8e(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint8_t param_6,uint8_t param_7,
            uint8_t param_8,int16_t param_9)

{
    uint uVar1;
    uint uVar2;
    bool bVar3;
    int16_t iVar4;
    int iVar5;
    int unaff_retaddr;
    uint uVar6;
    uint uStack_c;
    
    uVar6 = 0;
    fcn.0001e0fe(0);
    *(param_1 + 0x2b) = 0;
    bVar3 = true;
    *(param_1 + 0x14) = *(unaff_retaddr + 0x14);
    *(param_1 + 0x2c) = *(unaff_retaddr + 0x2c);
    *(param_1 + 0x10) = *(unaff_retaddr + 0x10);
    *(param_1 + 0x90) = param_3;
    *(param_1 + 0x94) = param_4;
    *(param_1 + 0x98) = param_5;
    *(param_1 + 0x28) = 0;
    *(param_1 + 0xa0) = param_8;
    *(param_1 + 0xa1) = param_6;
    *(param_1 + 0x2a) = 0;
    *(param_1 + 0x9c) = param_7;
    *(param_1 + 0x9e) = 2;
    if (param_8 < param_6) {
        param_8 = param_8 + *(*(param_1 + 0x10) + 0x24);
    }
    if (param_8 < param_6 + param_7) {
        *(param_1 + 0x9c) = param_7 - 1;
    }
    iVar4 = *(param_1 + 0x9c);
    if (2 < *(param_1 + 0x9c)) {
        iVar4 = 2;
    }
    *(param_1 + 0xa2) = iVar4;
    if (iVar4 <= param_9) {
        iVar4 = param_9;
    }
    *(param_1 + 0x9e) = iVar4;
    iVar4 = *(param_1 + 0x9c);
    do {
        if (iVar4 < 1) {
code_r0x00018069:
            fcn.0001e001(uStack_c,uVar6);
            return;
        }
        uVar1 = *(param_1 + 0x94);
        uVar2 = *(param_1 + 0x90);
        uVar6 = 0x28;
        fcn.0001dc68();
        if (*(param_1 + 0x6a) != 0) {
            if (*(*(param_1 + 0x40) + 0x16) == 2) {
                *(param_1 + 0x28) = 2;
            }
            else {
                *(param_1 + 0x28) = 7;
            }
            *(param_1 + 0x2a) = 6;
            goto code_r0x00018069;
        }
        if ((1 < *(param_1 + 0xa2)) || (!bVar3)) {
            fcn.0001e413(*(param_1 + 0x98),uVar1,uVar2,uVar2);
        }
        *(param_1 + 0x9c) = *(param_1 + 0x9c) - *(param_1 + 0xa2);
        iVar4 = *(param_1 + 0x9c);
        if (0 < iVar4) {
            iVar5 = *(param_1 + 0x9e) + -1;
            if (iVar5 < iVar4) {
                iVar4 = iVar5;
            }
            *(param_1 + 0xa2) = iVar4;
        }
        bVar3 = false;
        iVar4 = *(param_1 + 0x9c);
    } while( true );
}


/* fcn.0001e413 @ 0x1e413 */

void fcn.0001e413(uint32_t param_1,int param_2,int param_3,uint32_t *param_4)

{
    param_1 = param_1 >> 2;
    if (param_1 != 0) {
        param_2 = param_2 - param_4;
        param_3 = param_3 - param_4;
        do {
            *param_4 = *(param_3 + param_4) ^ *(param_2 + param_4);
            param_4 = param_4 + 1;
            param_1 = param_1 - 1;
        } while (param_1 != 0);
    }
    return;
}


/* fcn.0001dc41 @ 0x1dc41 */

void __cdecl
fcn.0001dc41(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h,int32_t arg_1ch)

{
    fcn.0001dc68(arg_8h,&arg_ch,1,0xff,arg_10h,arg_14h,arg_18h,&arg_1ch);
    return;
}


/* fcn.0001dc68 @ 0x1dc68 */

void __thiscall
fcn.0001dc68(int param_1,uint32_t param_2,uint8_t *param_3,int16_t param_4,uint8_t param_5,int32_t param_6,
            int32_t param_7,int32_t param_8,int32_t *param_9)

{
    int16_t iVar1;
    uint unaff_EDI;
    int16_t iVar2;
    
    fcn.000173ea();
    iVar1 = 0;
    *(param_1 + 0x14) = *(*(param_1 + 0x10) + 0x10);
    *(param_1 + 0x2c) = 0;
    *(param_1 + 0x32) = 0;
    iVar2 = 0;
    if (0 < param_4) {
        do {
            iVar1 = iVar2;
            if (*param_3 != param_5) {
                fcn.000173f8(*(*(param_1 + 0x14) + 0x68 + *param_3 * 8),param_2,param_6,param_7,param_8,*param_9);
                fcn.000175fc(param_1);
                fcn.0001ddd9(&stack0xffffffa4);
                param_4 = param_4 + -1;
                iVar2 = unaff_EDI >> 0x10;
                if ((unaff_EDI != '\0') && (iVar2 != 2)) break;
                if (iVar2 == 2) {
                    iVar1 = iVar1 + 1;
                }
            }
            *param_3 = (*param_3 + 1) % *(*(param_1 + 0x14) + 0x24);
            iVar2 = iVar1;
        } while (0 < param_4);
    }
    if ((0 < *(param_1 + 0x32)) && (iVar1 == *(param_1 + 0x32))) {
        *(*(param_1 + 8) + 0x16) = 2;
    }
    return;
}


/* fcn.0001e001 @ 0x1e001 */

void fcn.0001e001(int param_1)

{
    uint32_t *puVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    
    uVar2 = 0;
    uVar3 = 0;
    do {
        if (*(uVar3 * 0xc + 0x1bc34) == param_1) {
            puVar1 = uVar3 * 0xc + 0x1bc2c;
            *puVar1 = *puVar1 & 0x7fffffff;
            return;
        }
        uVar3 = uVar3 + 1;
    } while (uVar3 < 3);
    do {
        if (*(uVar2 * 0xc + 0x1bc10) == param_1) {
            puVar1 = uVar2 * 0xc + 0x1bc08;
            *puVar1 = *puVar1 & 0x7fffffff;
            return;
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 3);
    return;
}


/* fcn.0001e443 @ 0x1e443 */

void __cdecl fcn.0001e443(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    uVar1 = arg_8h >> 2;
    if (uVar1 != 0) {
        iVar3 = arg_ch - arg_10h;
        iVar4 = arg_18h - arg_10h;
        iVar2 = arg_14h - arg_10h;
        do {
            *(iVar4 + arg_10h) = *(iVar2 + arg_10h) ^ *(iVar3 + arg_10h) ^ *arg_10h;
            arg_10h = arg_10h + 4;
            uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
    }
    return;
}


/* fcn.0001807d @ 0x1807d */

void __cdecl fcn.0001807d(uint32_t arg_8h)

{
    uint32_t uVar1;
    int in_ECX;
    int32_t arg_ch;
    uint32_t *arg_10h;
    int32_t *arg_14h;
    int32_t arg_18h;
    int32_t arg_ch_00;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int8_t var_8h;
    int16_t var_6h;
    uint32_t var_4h;
    
    uVar1 = arg_8h;
    var_6h = 0x10;
    *(in_ECX + 0xa4) = *(arg_8h + 0x2c);
    *(in_ECX + 0x10) = *(arg_8h + 0x10);
    var_ch = 0;
    var_8h = 0;
    *(in_ECX + 0xa8) = arg_8h;
    arg_ch_00 = *(arg_8h + 0x108);
    arg_18h = 0;
    fcn.0001a69b(0,arg_ch_00,*(arg_8h + 0x10c),&var_4h,&var_14h);
    arg_14h = &var_1ch;
    arg_10h = &arg_8h;
    arg_ch = *(*(in_ECX + 0xa8) + 0x10c);
    (**(**(in_ECX + 0x10) + 0x10))(*(*(in_ECX + 0xa8) + 0x108));
    if (var_4h == *(in_ECX + 0xa4)) {
        fcn.0001e0fe(0);
        fcn.00017e8e();
        fcn.0001e413(*(in_ECX + 0x98),*(uVar1 + 0x11c),var_ch,var_ch);
    }
    else if (arg_8h != *(in_ECX + 0xa4)) {
        fcn.00017be7();
        goto code_r0x00018193;
    }
    fcn.0001dc41(0x2a,arg_ch,arg_10h,arg_14h,arg_18h,arg_ch_00);
code_r0x00018193:
    fcn.0001e001(var_ch);
    return;
}


/* fcn.0001dc0f @ 0x1dc0f */

void fcn.0001dc0f(int param_1)

{
    int16_t iVar1;
    
    iVar1 = 0;
    if (*(param_1 + 0x2b) != '\0') {
        do {
            fcn.0001dbe3();
            iVar1 = iVar1 + 1;
        } while (iVar1 < *(param_1 + 0x2b));
    }
    return;
}


/* fcn.00017be7 @ 0x17be7 */

void __fastcall fcn.00017be7(uint32_t param_1)

{
    int32_t var_10h;
    int8_t var_ch;
    int16_t var_ah;
    int32_t var_8h;
    int8_t var_4h;
    int16_t var_2h;
    
    fcn.0001e0fe(0);
    fcn.0001e0fe(0);
    *(param_1 + 0x2a) = 0;
    *(param_1 + 0x28) = 0;
    fcn.0001de2c(0x28,0,*(param_1 + 0x108),*(param_1 + 0x10c),*(param_1 + 0x118),0,-1);
    fcn.0001de2c(0x28,1,*(param_1 + 0x108),*(param_1 + 0x10c),*(param_1 + 0x118),0,-1);
    fcn.0001de2c(0x2a,0,*(param_1 + 0x108),*(param_1 + 0x10c),*(param_1 + 0x118),*(param_1 + 0x11c),-1);
    fcn.0001e443(*(param_1 + 0x118),*(param_1 + 0x11c),0,0,0);
    fcn.0001de2c(0x2a,1,*(param_1 + 0x108),*(param_1 + 0x10c),*(param_1 + 0x118),0,-1);
    if (*(param_1 + 0x2b) != '\0') {
        if (*(param_1 + 0x2b) == '\x01') {
            fcn.000177eb(*0x155ec + 0x1a60);
            fcn.0001807d(param_1);
        }
        else {
            fcn.0001a213(param_1);
            *(param_1 + 0x2a) = 6;
            *(param_1 + 0x28) = 7;
        }
    }
    fcn.0001e001(0);
    fcn.0001e001(0);
    return;
}


/* fcn.0001b680 @ 0x1b680 */

uint __thiscall fcn.0001b680(int param_1,uint8_t *param_2)

{
    uint8_t uVar1;
    uint uVar2;
    
    uVar1 = *param_2;
    if (uVar1 < *(param_1 + 0x2c)) {
        uVar2 = *(param_1 + 0x30 + uVar1 * 4);
        *param_2 = uVar1 + 1;
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00016ee1 @ 0x16ee1 */

int __thiscall fcn.00016ee1(int param_1,uint param_2)

{
    int iVar1;
    
    iVar1 = fcn.00019ef1();
    if (iVar1 == 0) {
        *(param_1 + 8) = 0;
        iVar1 = 0;
    }
    else {
        iVar1 = iVar1 + 8;
        *0x15378 = param_2;
        *(param_1 + 4) = iVar1;
        *(param_1 + 8) = 0x2b8;
    }
    return iVar1;
}


/* fcn.0001b7f7 @ 0x1b7f7 */

uint * __thiscall fcn.0001b7f7(uint *param_1,uchar param_2,uint param_3)

{
    fcn.0001d245();
    param_1[0x31] = 0;
    *(param_1 + 0xd9) = 0;
    *(param_1 + 0x36) = 0;
    *param_1 = 0x141d8;
    *(param_1 + 0xb1) = param_2;
    fcn.0001bac7(param_3);
    param_1[0x26] = 2;
    return param_1;
}


/* fcn.0001bac7 @ 0x1bac7 */

void __thiscall fcn.0001bac7(int param_1,int *param_2)

{
    int iVar1;
    
    *(param_1 + 0xb4) = param_2;
    *param_2 = param_1;
    fcn.00022751(param_1 + 0xa0,param_2 + 2,0x10);
    *(param_1 + 0xb0) = 0;
    iVar1 = fcn.00016e92(0x58);
    if (iVar1 == 0) {
        iVar1 = 0;
    }
    else {
        iVar1 = fcn.0001a7e0(param_1,param_2[0xc],0,0);
    }
    *(param_1 + 0xc4) = iVar1;
    *(param_1 + 200) = param_2[8];
    *(param_1 + 0xcc) = param_2[9];
    *(param_1 + 0xd0) = *(param_1 + 200);
    *(param_1 + 0xd4) = *(param_1 + 0xcc);
    *(param_1 + 0xbc) = param_2[7];
    *(param_1 + 0xc0) = *(iVar1 + 0x38);
    *(param_1 + 0xdc) = 0;
    *(param_1 + 0xe0) = param_2[0xe];
    *(param_1 + 0xe4) = param_2[0xf];
    *(param_1 + 0xe5) = param_2[0x10];
    *(param_1 + 0xe6) = *(param_2 + 0x41);
    *(param_1 + 0x78) = *(param_1 + 0xd0);
    *(param_1 + 0x7c) = *(param_1 + 0xd4);
    fcn.00022751(param_1 + 0x25,0x141e0,6);
    fcn.00022751(param_1 + 0x2b,param_1 + 0xa0,0x11);
    return;
}


/* fcn.00016f12 @ 0x16f12 */

void fcn.00016f12(void)

{
    *0x15378 = 0;
    return;
}


/* fcn.00015ef1 @ 0x15ef1 */

uint fcn.00015ef1(uint32_t param_1)

{
    int iVar1;
    int iVar2;
    uchar uVar3;
    int iVar4;
    uint unaff_retaddr;
    
    iVar4 = fcn.00019efc(param_1);
    if (iVar4 == 0) {
        return 0xf;
    }
    iVar1 = *(iVar4 + 0x20);
    fcn.000224aa(param_1,0,0x78);
    fcn.0002245a(param_1,0x11,iVar4 + 9,0x10);
    iVar2 = *(iVar4 + 0x20);
    *(param_1 + 0x18) = *(iVar2 + 0x78);
    *(param_1 + 0x1c) = *(iVar2 + 0x7c);
    *(param_1 + 0x28) = *(*(iVar4 + 0x20) + 0xb0);
    *(param_1 + 0x5a) = *(iVar4 + 0x25);
    *(param_1 + 0x5c) = *(iVar1 + 0x84);
    *(param_1 + 0x2c) = *(iVar1 + 0x80);
    fcn.0002245a(param_1 + 0x30,0x29,iVar1 + 0x25,0x29);
    *(param_1 + 0x60) = *(iVar1 + 0x84) >> 4 & 1;
    if (*(iVar4 + 0x1c) == 0) {
        *(param_1 + 0x59) = 0xff;
    }
    else {
        uVar3 = fcn.0001b3df();
        *(param_1 + 0x59) = uVar3;
    }
    fcn.000169bb(param_1,unaff_retaddr);
    fcn.000164b3(param_1);
    return 0;
}


/* fcn.0001c303 @ 0x1c303 */

uint __fastcall fcn.0001c303(int param_1)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    
    uVar1 = *(param_1 + 0x1900);
    if (uVar1 < 0x20) {
        return 0;
    }
    uVar3 = 0;
    if (uVar1 != 0) {
        do {
            if (*(uVar3 * 200 + 0xc0 + param_1) != '\0') {
                return 0;
            }
            uVar2 = uVar3 + 1;
            uVar3 = uVar2;
        } while (uVar2 < uVar1);
    }
    return 1;
}


/* fcn.0001c295 @ 0x1c295 */

int __thiscall fcn.0001c295(int param_1,uint32_t param_2)

{
    int16_t iVar1;
    uint8_t uVar2;
    int iVar3;
    
    uVar2 = 0;
    if (*(param_1 + 0x1900) != '\0') {
        do {
            iVar3 = uVar2 * 200;
            if ((*(iVar3 + 0xc0 + param_1) == '\0') &&
               (iVar1 = fcn.00022718(param_2,param_1 + 0x14 + iVar3,0x10), iVar1 == 0)) {
                return iVar3 + param_1;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(param_1 + 0x1900));
    }
    return 0;
}


/* fcn.0001c1c4 @ 0x1c1c4 */

int __thiscall fcn.0001c1c4(int param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
    int iVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    int16_t iVar4;
    uint32_t uVar5;
    uint8_t uVar6;
    uint8_t uVar7;
    int iVar8;
    
    uVar5 = 0;
    uVar2 = *(param_1 + 0x1900);
    uVar6 = uVar2;
    if (uVar2 != 0) {
        do {
            if (*(uVar5 * 200 + 0xc0 + param_1) != '\0') {
                uVar6 = uVar5;
                break;
            }
            uVar7 = uVar5 + 1;
            uVar5 = uVar7;
        } while (uVar7 < uVar2);
    }
    if (uVar6 == uVar2) {
        if (uVar2 == 0x20) {
            return 0;
        }
        *(param_1 + 0x1900) = uVar2 + 1;
    }
    iVar1 = uVar6 * 200 + param_1;
    fcn.000172dc();
    uVar3 = fcn.00022706(param_2);
    iVar4 = 0x10;
    if (uVar3 < 0x11) {
        iVar4 = fcn.00022706(param_2);
    }
    iVar8 = iVar4;
    uVar5 = fcn.00022706(param_2,iVar8);
    fcn.00022751(iVar1 + 0x14,(uVar5 & 0xffff) + (param_2 - iVar8));
    *(uVar6 * 200 + iVar8 + 0x14 + param_1) = 0;
    *(iVar1 + 0xb0) = param_3;
    *(iVar1 + 0x78) = param_4;
    *(iVar1 + 0x7c) = param_5;
    *(iVar1 + 0xc0) = 0;
    return iVar1;
}


/* fcn.00017058 @ 0x17058 */

void __thiscall fcn.00017058(int param_1,uint param_2,uint *param_3,uint32_t param_4)

{
    *(param_1 + 0xb0) = *(param_1 + 0xb0) | param_4;
    fcn.000173ad();
    *(param_1 + 0xac) = param_2;
    *(param_1 + 0x78) = *param_3;
    *(param_1 + 0x7c) = param_3[1];
    fcn.0002245a(param_1 + 0x25,0x29,param_3 + 5,0x29);
    fcn.0002245a(param_1 + 0x14,0x11,param_3 + 0x3d,0x11);
    fcn.0002245a(param_1 + 0x4e,0x29,param_3 + 0x4e,0x29);
    *(param_1 + 0x88) = param_3[4];
    *(param_1 + 0x80) = param_3[2];
    *(param_1 + 0x90) = param_3[0x1e];
    *(param_1 + 0x94) = param_3[0x1f];
    *(param_1 + 0x84) = param_3[3] & 0x7fffffff;
    *(param_1 + 0xb8) = *(param_1 + 0x78) - 0x1a1;
    *(param_1 + 0xbc) = *(param_1 + 0x7c) + -1 + (0x1a0 < *(param_1 + 0x78));
    *(param_1 + 0x8c) = 1 << (*(param_1 + 0x80) & 0x1f);
    return;
}


/* fcn.000171e4 @ 0x171e4 */

int __fastcall fcn.000171e4(int param_1)

{
    uint uVar1;
    int iVar2;
    int32_t *piVar3;
    int32_t var_220h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_10h;
    int8_t var_8h;
    
    if ((*(param_1 + 0x84) >> 0xf & 1) == 0) {
        piVar3 = &var_18h;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar3 = 0;
            piVar3 = piVar3 + 1;
        }
        fcn.000224aa(&var_220h,0,0x200);
        var_20h = *(param_1 + 0x78) - 2;
        var_1ch = *(param_1 + 0x7c) + -1 + (1 < *(param_1 + 0x78));
        var_10h = 0x200;
        var_18h = &var_220h;
        var_8h = 0x28;
        fcn.0001d0ce(param_1,&var_20h);
        uVar1 = fcn.00022718(0x13fac,&var_220h,0x18);
        iVar2 = CONCAT31(CONCAT22(uVar1 >> 0x10,-uVar1) >> 8,'\x01' - (uVar1 != 0));
    }
    else {
        iVar2 = (*(param_1 + 0x84) >> 0x17) << 8;
    }
    return iVar2;
}


/* fcn.0001c8f8 @ 0x1c8f8 */

int fcn.0001c8f8(int param_1)

{
    int iVar1;
    int iVar2;
    
    iVar1 = param_1 + 0x14;
    iVar2 = fcn.0001c77e(iVar1);
    if (iVar2 == 0) {
        iVar2 = fcn.0001c841(*(param_1 + 0x80));
        if (iVar2 != 0) {
            fcn.0001d406(iVar1,param_1);
            fcn.0001d44e(0);
        }
    }
    else {
        fcn.0001d406(iVar1,param_1);
    }
    return iVar2;
}


/* fcn.0002300e @ 0x2300e */

uint fcn.0002300e(void)

{
    return 0x15280;
}


/* fcn.0001851a @ 0x1851a */

uint32_t fcn.0001851a(uint32_t param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar1 = param_1 & 1 | 2;
    if ((param_1 & 2) == 0) {
        uVar1 = param_1 & 1;
    }
    uVar2 = uVar1 | 4;
    if ((param_1 & 4) == 0) {
        uVar2 = uVar1;
    }
    uVar1 = uVar2 | 8;
    if ((param_1 & 0x10) == 0) {
        uVar1 = uVar2;
    }
    uVar2 = uVar1 | 0x10;
    if ((param_1 & 0x20) == 0) {
        uVar2 = uVar1;
    }
    uVar1 = uVar2 | 0x200;
    if ((param_1 & 0x2000000) == 0) {
        uVar1 = uVar2;
    }
    return uVar1;
}


/* fcn.00019004 @ 0x19004 */

void __fastcall fcn.00019004(uint *param_1)

{
    *(param_1 + 0x7c) = 0;
    *(param_1 + 0x1f2) = 0;
    param_1[0x8f] = 0;
    param_1[0x8e] = 0;
    param_1[0x7d] = 0;
    param_1[0x7e] = 0;
    *param_1 = 0;
    fcn.000224aa(param_1 + 1,0,0x1ec);
    fcn.000224aa(param_1 + 0x82,0,0x30);
    *(param_1 + 0x80) = 0;
    return;
}


/* fcn.0001eeb6 @ 0x1eeb6 */

void __fastcall fcn.0001eeb6(int param_1)

{
    uint32_t *puVar1;
    bool bVar2;
    int iVar3;
    uint8_t uVar4;
    int *piVar5;
    uint32_t uVar6;
    int *piVar7;
    uint32_t uVar8;
    int iVar9;
    int unaff_ESI;
    uint32_t uVar10;
    int *piVar11;
    int unaff_EDI;
    uint uStack_1c;
    uint32_t uStack_18;
    
    *(param_1 + 0x2c) = 1;
    fcn.0001efdd();
    *(param_1 + 0x2d) = 0;
    if (*(*(param_1 + 0x34) + 0x208) != '\0') {
        do {
            iVar3 = *(param_1 + 0x2d) * 0x30 + *(*(param_1 + 0x34) + 0x204);
            if ((*(iVar3 + 0x18) >> 0x13 & 1) != 0) {
                unaff_ESI = fcn.0001c295(iVar3);
                *(param_1 + 0x30) = unaff_ESI;
                if (unaff_ESI == 0) {
                    return;
                }
                fcn.0001d9f5();
                fcn.0001edf3();
            }
            *(param_1 + 0x2d) = *(param_1 + 0x2d) + '\x01';
        } while (*(param_1 + 0x2d) < *(*(param_1 + 0x34) + 0x208));
    }
    uVar4 = 0;
    if (*(*(param_1 + 0x34) + 0x208) != '\0') {
        do {
            unaff_EDI = uVar4 * 0x30 + *(*(param_1 + 0x34) + 0x204);
            fcn.0001c4b1();
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(*(param_1 + 0x34) + 0x208));
    }
    iVar3 = fcn.00021eb5();
    if (iVar3 == 0) {
        fcn.0001d8bb();
    }
    else {
        do {
            unaff_EDI = iVar3;
            fcn.0001d9f5();
            if (((*(iVar3 + 0xb0) >> 8 & 1) != 0) && (*(*(param_1 + 4) + 0x39) + *(*0x155ec + 0x10) < 5)) {
                unaff_EDI = iVar3 + 0x14;
                uStack_18 = 0x1efb1;
                iVar3 = fcn.00021e6f();
                if (iVar3 != 0) {
                    unaff_EDI = *(iVar3 + 0x1c);
                    fcn.0001e55a();
                }
            }
            iVar3 = fcn.00021eb5();
        } while (iVar3 != 0);
    }
    *(param_1 + 0x2c) = 0;
    if (*(param_1 + 0x2c) == '\0') {
        piVar7 = *(*(*0x155ec + 0x1c) + 0x34);
        iVar3 = param_1;
        fcn.0001c338(unaff_ESI);
        if (piVar7 != NULL) {
            param_1 = iVar3;
            do {
                uVar8 = 0;
                uVar4 = 0;
                if (piVar7[0xb] != '\0') {
                    do {
                        uVar10 = 0;
                        uVar6 = 0;
                        piVar11 = piVar7[uVar8 + 0xc];
                        uStack_1c = uVar4 << 0x18;
                        uVar4 = *(piVar11[1] + 0xc);
                        if (uVar4 != 0) {
                            piVar5 = piVar11[1] + 0x10;
                            uVar8 = uVar4;
                            do {
                                iVar3 = *piVar5;
                                piVar5 = piVar5 + 1;
                                iVar3 = *(iVar3 + 0x20);
                                uVar6 = uVar6 ^ *(iVar3 + 0x90);
                                uVar10 = uVar10 ^ *(iVar3 + 0x94);
                                uStack_1c = CONCAT12(uStack_1c._3_1_,
                                                     CONCAT11(uStack_1c._2_1_ | *(iVar3 + 0x84) >> 7 & 1,
                                                              uStack_1c._1_1_ | *(iVar3 + 0x84) >> 4 & 1)) << 8;
                                uVar8 = uVar8 - 1;
                            } while (uVar8 != 0);
                        }
                        puVar1 = *piVar11 + 0x84;
                        *puVar1 = *puVar1 ^ ((uStack_1c >> 8 & 0xff) << 4 ^ *(*piVar11 + 0x84)) & 0x10;
                        puVar1 = *piVar11 + 0x84;
                        *puVar1 = *puVar1 ^ ((uStack_1c >> 0x10 & 0xff) << 7 ^ *(*piVar11 + 0x84)) & 0x80;
                        iVar3 = *piVar11;
                        *(iVar3 + 0x90) = *(iVar3 + 0xb1) ^ uVar6;
                        uVar4 = uStack_1c._3_1_ + 1;
                        uVar8 = uVar4;
                        *(iVar3 + 0x94) = uVar10;
                    } while (uVar4 < *(piVar7 + 0xb));
                }
                uVar6 = 0;
                uVar8 = 0;
                bVar2 = false;
                if (*(piVar7 + 3) != 0) {
                    uVar10 = *(piVar7 + 3);
                    piVar11 = piVar7 + 4;
                    do {
                        if ((*(*(*piVar11 + 0x20) + 0xb3) & 1) != 0) {
                            uVar8 = uVar8 & 0xff | 1 << (uVar6 & 0x1f);
                        }
                        uVar6 = uVar6 + 1;
                        piVar11 = piVar11 + 1;
                        uVar10 = uVar10 - 1;
                    } while (uVar10 != 0);
                    if ((uVar8 != 0) && (uVar6 = 0, piVar7[0xb] != '\0')) {
                        do {
                            piVar11 = piVar7[uVar6 + 0xc];
                            iVar3 = *(*(piVar11[0xc] + 0x20) + 4);
                            if ((iVar3 == 2) || (iVar3 == 3)) {
                                if ((uVar8 & ~('\x01' << (*(*(piVar11[0xc] + 0x20) + 0x31) & 0x1f))) != 0)
                                goto code_r0x0001ec2d;
                            }
                            else if ((iVar3 == 0) || (iVar3 == 1)) {
code_r0x0001ec2d:
                                piVar11[10] = piVar11[10] | 0x2000;
                                bVar2 = true;
                                *(*piVar11 + 0x84) = *(*piVar11 + 0x84) | 4;
                                *(*piVar11 + 0x84) = *(*piVar11 + 0x84) | 0x40;
                            }
                            uVar4 = uVar6 + 1;
                            uVar6 = uVar4;
                        } while (uVar4 < *(piVar7 + 0xb));
                    }
                }
                if (piVar7[3] != '\0') {
                    uVar8 = 0;
                    do {
                        if ((*(*(piVar7[uVar8 + 4] + 0x20) + 0xb3) & 1) == 0) {
                            unaff_EDI = 0x8000;
                            fcn.00016c6c();
                            if (bVar2) {
                                unaff_EDI = 0x80;
                                fcn.00016ca7();
                            }
                        }
                        uVar4 = uVar8 + 1;
                        uVar8 = uVar4;
                    } while (uVar4 < *(piVar7 + 3));
                }
                uVar8 = 0;
                uStack_18 = uStack_18 & 0xffffff00;
                if (piVar7[0xb] != '\0') {
                    do {
                        iVar3 = piVar7[uVar8 + 0xc];
                        if (*(*(*(iVar3 + 0x30) + 0x20) + 8) == 0x10) {
                            fcn.0001bf26(unaff_EDI);
                            *(*0x155ec + 0x1b9c) = 1;
                            uVar4 = *(iVar3 + 0x3c);
                            *(piVar7[uVar4 + 4] + 0x25) = 1;
                            if ((uVar4 ^ 1) < 7) {
                                *(piVar7[(uVar4 ^ 1) + 4] + 0x25) = 2;
                            }
                            if ((*(iVar3 + 0x28) & 0x800) != 0) {
                                if ((*(iVar3 + 0x38) != '\x01') && (*(iVar3 + 0x38) != '\x03')) {
                                    if (*(iVar3 + 0x34) == '\x01') {
                                        uVar4 = *(iVar3 + 0x3c) ^ 1;
                                    }
                                    else {
                                        uVar4 = *(iVar3 + 0x3c);
                                    }
                                    fcn.00016db1(uStack_18,uVar4);
                                }
                            }
                        }
                        uVar4 = uStack_18 + 1;
                        uVar8 = uVar4;
                        uStack_18 = CONCAT31(uStack_18._1_3_,uVar4);
                    } while (uVar4 < *(piVar7 + 0xb));
                }
                (***piVar7[0xe])(1);
                piVar7 = *piVar7;
            } while (piVar7 != NULL);
        }
        *0x150c8 = 0;
        fcn.0001c629();
    }
    uVar4 = 0;
    iVar3 = *(param_1 + 0x34);
    if (*(iVar3 + 0x208) != '\0') {
        do {
            iVar9 = uVar4 * 0x30 + *(iVar3 + 0x204);
            iVar3 = fcn.0001c295(iVar9);
            if (((((*(iVar9 + 0x18) >> 1 & 1) != 0) && (iVar3 != 0)) && ((*(iVar3 + 0xb0) & 0x10011) == 0x10)) &&
               ((*(iVar3 + 0xb0) >> 6 & 1) == 0)) {
                fcn.00016ca7(2);
            }
            iVar3 = *(param_1 + 0x34);
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(iVar3 + 0x208));
    }
    return;
}


/* fcn.0001f07d @ 0x1f07d */

void fcn.0001f07d(void)

{
    uint *puVar1;
    
    for (puVar1 = *(*(*0x155ec + 0x1c) + 0x34); puVar1 != NULL; puVar1 = *puVar1) {
        fcn.0001b542();
    }
    return;
}


/* fcn.00018aa7 @ 0x18aa7 */

void __fastcall fcn.00018aa7(int param_1)

{
    bool bVar1;
    char cVar2;
    int16_t iVar3;
    int iVar4;
    
    bVar1 = false;
    if (*(param_1 + 0x23c) != 0) {
        cVar2 = fcn.00019760();
        if (cVar2 == '\0') {
            *(*(*(param_1 + 0x23c) + 0xb4) + 0x4c) = 5;
        }
        else {
            if (((*(param_1 + 0xae) == 0) && (*(param_1 + 0xb2) == 0)) &&
               (iVar3 = fcn.00022718(param_1 + 4,0x141a0,0x20), iVar3 != 0)) {
                bVar1 = true;
                *(*(*(param_1 + 0x23c) + 0xb4) + 0x4c) = 4;
            }
            iVar4 = *(param_1 + 0x238);
            if (iVar4 != 0) {
                if (*(iVar4 + 0xe5) == '\t') {
                    *(*(iVar4 + 0xb4) + 0x40) = 5;
                }
                if (bVar1) {
                    iVar4 = *(*(param_1 + 0x238) + 0xb4);
                    if ((*(iVar4 + 0x44) == *(*(*(*(param_1 + 0x23c) + 0xb8) + 0x38) + 0x14)) &&
                       (*(iVar4 + 0x48) == *(*(*(param_1 + 0x23c) + 0xb4) + 0x3e))) {
                        fcn.0001be4a();
                        *(*(*(param_1 + 0x238) + 0xb4) + 0x4c) = 3;
                        *(*(*(param_1 + 0x23c) + 0xb4) + 0x4c) = 0;
                        return;
                    }
                }
                else {
                    iVar3 = fcn.00022718(param_1 + 4,0x141a0,0x20);
                    if ((((iVar3 == 0) && ((*(param_1 + 0x24) == 6 || (*(param_1 + 0x24) == 7)))) &&
                        (*(param_1 + 0x2c) == 1)) &&
                       ((((*(param_1 + 0xae) == *(*(*(*(param_1 + 0x238) + 0xb8) + 0x38) + 0x14) &&
                          (iVar4 = *(*(param_1 + 0x238) + 0xb4), *(param_1 + 0xb2) == *(iVar4 + 0x3e))) &&
                         (*(iVar4 + 0x44) == *(*(*(*(param_1 + 0x23c) + 0xb8) + 0x38) + 0x14))) &&
                        ((*(iVar4 + 0x48) == *(*(*(param_1 + 0x23c) + 0xb4) + 0x3e) &&
                         (cVar2 = fcn.00018d7a(), cVar2 != '\0')))))) {
                        iVar4 = fcn.0001bf01();
                        if (((1 < iVar4 - *(param_1 + 0xca)) || ((*(param_1 + 0x1d0) & 2) != 0)) &&
                           ((*(*(*(param_1 + 0x238) + 0xb4) + 0x41) & 1) == 0)) {
                            *(param_1 + 0x1b2) = *(param_1 + 0x1b2) + 1;
                        }
                        *(*(*(param_1 + 0x238) + 0xb4) + 0x4c) = 3;
                        fcn.0001be4a();
                        fcn.00019da2(*(*(param_1 + 0x238) + 0xb4),0);
                        return;
                    }
                }
            }
        }
    }
    *(param_1 + 0x23c) = 0;
    if (*(param_1 + 0x238) != 0) {
        fcn.0001be0c();
        *(*(*(param_1 + 0x238) + 0xb4) + 0x4c) = 1;
    }
    return;
}


/* fcn.0001828b @ 0x1828b */

void __fastcall fcn.0001828b(int param_1)

{
    int iVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    int32_t var_f4h;
    int32_t var_98h;
    int32_t var_7ch;
    int8_t var_54h;
    int32_t var_18h;
    int8_t var_4h;
    unkuint3 Stack_7;
    
    uVar2 = 0;
    _var_4h = _var_4h & 0xffffff00;
    uVar3 = 0;
    do {
        iVar1 = fcn.00015ef1(_var_4h,&var_7ch);
        if ((((iVar1 == 0) && ((var_54h & 0x10U) != 0)) && (0 < var_18h)) &&
           (((var_18h < 3 || (var_18h == 5)) ||
            ((10 < var_18h && (((var_18h < 0xd || (var_18h == 0x10)) || (var_18h == 0x14)))))))) {
            *(param_1 + 0x1b94) = *(param_1 + 0x1b94) | 1 << (uVar3 & 0x1f);
        }
        uVar2 = uVar2 + 1;
        uVar3 = uVar3 + 1;
        _var_4h = CONCAT31(Stack_7,uVar2);
    } while (uVar2 < 0x20);
    uVar2 = 0;
    _var_4h = Stack_7 << 8;
    uVar3 = 0;
    do {
        iVar1 = fcn.000160f4(_var_4h,&var_f4h);
        if (((iVar1 == 0) && (0x15 < var_98h)) &&
           ((var_98h < 0x1a || ((0x1c < var_98h && ((var_98h < 0x20 || (var_98h == 0x26)))))))) {
            *(param_1 + 0x1b98) = *(param_1 + 0x1b98) | 1 << (uVar3 & 0x1f);
        }
        uVar2 = uVar2 + 1;
        uVar3 = uVar3 + 1;
        _var_4h = CONCAT31(Stack_7,uVar2);
    } while (uVar2 < 4);
    return;
}


/* fcn.0001cc56 @ 0x1cc56 */

void fcn.0001cc56(int param_1)

{
    uint32_t uVar1;
    char cVar2;
    uint8_t uVar3;
    int16_t iVar4;
    int iVar5;
    uint8_t uVar6;
    uint8_t uVar7;
    unkuint3 Var8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint uVar13;
    uint8_t auStack_880 [8];
    uint32_t uStack_878;
    uint32_t auStack_874 [4];
    uchar auStack_864 [4];
    uchar auStack_860 [4];
    int iStack_85c;
    uchar auStack_858 [41];
    uchar auStack_82f [79];
    int iStack_7e0;
    uint uStack_7dc;
    int iStack_6d0;
    uchar auStack_664 [4];
    uchar auStack_660 [53];
    uchar auStack_62b [351];
    int aiStack_4cc [307];
    
    iVar5 = fcn.0002300e();
    uVar9 = 0;
    uVar10 = 0;
    uStack_878 = 0;
    auStack_880[3] = 0;
    cVar2 = fcn.0001872f(3);
    if ((cVar2 != '\0') && ((*(iVar5 + 0x1a) & 0x1000000) != 0)) {
        if (*(param_1 + 0x40) == 0) {
            uVar11 = 0;
        }
        else {
            uVar11 = *(param_1 + 0x40) - 8;
        }
        if (uVar11 != 0) {
            do {
                iVar5 = *(-(uVar11 != 0) & uVar11 + 8);
                uVar12 = -(iVar5 != 0) & iVar5 - 8U;
                if ((*(uVar11 + 0x98) == 2) && ((*(uVar11 + 0x84) & 0x200) != 0)) {
                    uVar13 = 0x200;
                    fcn.000224aa(auStack_860,0,0x200);
                    cVar2 = fcn.0001cefd(auStack_860,uVar11);
                    Var8 = uVar10 >> 8;
                    uVar10 = CONCAT31(Var8,cVar2);
                    fcn.0001c5db(uVar13,uVar11);
                    if (cVar2 != '\0') {
                        if (((iStack_85c != 4) || (iVar5 = fcn.00022ede(auStack_864,0x194), iStack_6d0 != iVar5)) ||
                           (iStack_7e0 != 2)) goto code_r0x0001cdd9;
                        uVar10 = Var8 << 8;
                        iVar4 = fcn.00022718(uVar11 + 0x4e,auStack_858,0x29);
                        if (iVar4 == 0) {
                            uVar10 = CONCAT31(Var8,1);
                        }
                        else {
                            iVar4 = fcn.00022718(uVar11 + 0x4e,auStack_82f,0x29);
                            if (iVar4 != 0) goto code_r0x0001cdb4;
                        }
                        uVar1 = uVar10 >> 8;
                        auStack_874[uVar1] = uVar11;
                        auStack_880[uVar1] = uVar10;
                        fcn.0002245a(auStack_664 + uVar1 * 0x198,0x198,auStack_864,0x198);
                        uVar10 = CONCAT11((uVar10 >> 8) + '\x01',uVar10);
                    }
code_r0x0001cdb4:
                    if (((uVar11 == *(*0x150c4 + 0x238)) && (*(*0x150c4 + 0x23c) != 0)) &&
                       ((*(uVar11 + 0x84) & 0x200) != 0)) {
                        uVar9 = *(*0x150c4 + 0x238);
                    }
                }
code_r0x0001cdd9:
                uVar11 = uVar12;
            } while (uVar12 != 0);
            auStack_880[3] = uVar10 >> 8;
            uStack_878 = uVar9;
        }
        iVar5 = 0;
        uVar9 = 0;
        uVar3 = auStack_880[3];
        do {
            uVar7 = uVar9 >> 8;
            if (uVar3 <= uVar7) break;
            uVar10 = uVar7;
            if ((auStack_880[uVar10 + 4] != 0) && (uVar3 != 0)) {
                do {
                    uVar7 = uVar9 >> 8;
                    uVar11 = uVar9 & 0xff;
                    if (auStack_880[uVar11 + 4] == 0) {
                        auStack_874[0] = uVar10 * 0x198;
                        iVar4 = fcn.00022718(auStack_874[uVar11 + 1] + 0x4e,auStack_62b + uVar10 * 0x198,0x29);
                        if ((iVar4 == 0) && (*(aiStack_4cc + auStack_874[0]) == aiStack_4cc[uVar11 * 0x66])) {
                            iVar5 = fcn.0001cb86(param_1,auStack_874[uVar10 + 1],auStack_874[(uVar9 & 0xff) + 1],
                                                 auStack_660 + auStack_874[0],auStack_660 + uVar11 * 0x198);
                            uVar3 = auStack_880[3];
                            break;
                        }
                        uVar3 = auStack_880[3];
                    }
                    uVar6 = uVar9 + 1;
                    uVar9 = CONCAT31(uVar9 >> 8,uVar6);
                } while (uVar6 < uVar3);
            }
            uVar9 = uVar7 + 1 << 8;
        } while (iVar5 == 0);
        uVar9 = uStack_878;
        if ((iVar5 == 0) && (uStack_878 != 0)) {
            fcn.000224aa(auStack_860,0,0x198);
            iStack_7e0 = 2;
            uStack_7dc = 2;
            fcn.0001cb86(param_1,0,uVar9,auStack_860,auStack_860);
        }
    }
    return;
}


/* fcn.0001e091 @ 0x1e091 */

void fcn.0001e091(void)

{
    int iVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    
    fcn.000224aa(0x155f8,0,0x6610);
    fcn.000224aa(0x1bc2c,0,0x24);
    fcn.000224aa(0x1bc08,0,0x24);
    *0x1bc50 = 0;
    piVar2 = 0x1bc34;
    iVar1 = 0x15600;
    iVar3 = 3;
    iVar4 = iVar3;
    do {
        *piVar2 = iVar1;
        iVar1 = iVar1 + 0x2000;
        piVar2 = piVar2 + 3;
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    piVar2 = 0x1bc10;
    do {
        *piVar2 = iVar1;
        iVar1 = iVar1 + 0x200;
        piVar2 = piVar2 + 3;
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    return;
}


/* fcn.0001f052 @ 0x1f052 */

uint * __fastcall fcn.0001f052(uint *param_1)

{
    uint uVar1;
    
    fcn.0001e47d();
    *param_1 = 0x14254;
    uVar1 = fcn.000223d1(param_1[3],83000);
    param_1[1] = uVar1;
    fcn.0001d8bb();
    return param_1;
}


/* fcn.0001e47d @ 0x1e47d */

uint * __fastcall fcn.0001e47d(uint *param_1)

{
    int iVar1;
    uint uVar2;
    
    fcn.0001d8e9(0x1400);
    *param_1 = 0x14254;
    iVar1 = fcn.00016e92(0x22c);
    if (iVar1 == 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = fcn.00021db1();
    }
    param_1[0xd] = uVar2;
    fcn.00021f24();
    return param_1;
}


/* fcn.000223d1 @ 0x223d1 */

void fcn.000223d1(int32_t param_1)

{
    fcn.0002240e(param_1);
    return;
}


/* fcn.0001d8bb @ 0x1d8bb */

void __fastcall fcn.0001d8bb(int param_1)

{
    *(param_1 + 0x20) = 0;
    *(param_1 + 0x24) = 0;
    *(param_1 + 0x38) = 0;
    *(param_1 + 0x28) = 0;
    *(param_1 + 0x40) = 0;
    *(param_1 + 0x2c) = 0;
    *(param_1 + 0x3a) = 0;
    *(param_1 + 0x48) = 0;
    fcn.000224aa(param_1 + 0x50,0,0x88);
    return;
}


/* fcn.0001c3f9 @ 0x1c3f9 */

uchar * __fastcall fcn.0001c3f9(uchar *param_1)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    uint *puVar5;
    
    iVar4 = 0x60;
    *(param_1 + 0xc) = 0;
    *(param_1 + 8) = 0;
    *(param_1 + 0x14) = 0;
    *(param_1 + 0x10) = 0;
    *(param_1 + 0x38) = 0;
    *(param_1 + 0x34) = 0;
    *(param_1 + 0x3c) = 0;
    *(param_1 + 0x44) = 0;
    *(param_1 + 0x40) = 0;
    *param_1 = 0;
    do {
        iVar1 = fcn.00016e92(0x30);
        if (iVar1 != 0) {
            fcn.0001d31f();
        }
        fcn.00019ead();
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 5;
    param_1[0x18] = 0;
    puVar5 = param_1 + 0x1c;
    iVar1 = 4;
    do {
        iVar2 = fcn.00016e92(0x58);
        if (iVar2 == 0) {
            uVar3 = 0;
        }
        else {
            uVar3 = fcn.0001bcd0();
        }
        *puVar5 = uVar3;
        puVar5 = puVar5 + 1;
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    param_1[0x30] = 0;
    do {
        iVar4 = fcn.00016e92(0x110);
        if (iVar4 != 0) {
            fcn.0001af26();
        }
        fcn.00019f15();
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    *(param_1 + 0x4c) = 0;
    *(param_1 + 0x44) = 0;
    *(param_1 + 0x40) = 0;
    return param_1;
}


/* fcn.0001c2e7 @ 0x1c2e7 */

void fcn.0001c2e7(void)

{
    int iVar1;
    
    iVar1 = 0x20;
    do {
        fcn.000172dc();
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
}


/* fcn.000172dc @ 0x172dc */

void __fastcall fcn.000172dc(int param_1)

{
    fcn.0001d312();
    *(param_1 + 0x25) = 0;
    return;
}


/* fcn.000175c4 @ 0x175c4 */

void __fastcall fcn.000175c4(int param_1)

{
    ushort uVar1;
    int iVar2;
    
    iVar2 = *0x155ec;
    uVar1 = *(param_1 + 0x14);
    *(*0x155ec + 0x22) = *(param_1 + 0x16);
    *(iVar2 + 0x20) = uVar1;
    if ((*(param_1 + 0x28) != 0) && (*(param_1 + 0x14) != 0)) {
        fcn.000172aa(*(param_1 + 0x14),*(param_1 + 0x16));
    }
    return;
}


/* fcn.0001198b @ 0x1198b */

uint fcn.0001198b(uint *param_1)

{
    *param_1 = *0x152b4;
    return 0;
}


/* fcn.00018986 @ 0x18986 */

uint32_t fcn.00018986(uint param_1,uint32_t param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar1 = (param_2 & 1) - 2;
    uVar2 = uVar1 & 0xfffffffd;
    if ((param_2 & 2) != 0) {
        uVar2 = uVar1;
    }
    uVar1 = uVar2 & 0xfffffffb;
    if ((param_2 & 8) != 0) {
        uVar1 = uVar2;
    }
    uVar2 = uVar1 & 0xfffffff7;
    if ((param_2 & 4) != 0) {
        uVar2 = uVar1;
    }
    uVar1 = uVar2 & 0xffffffef;
    if ((param_2 & 0x10) != 0) {
        uVar1 = uVar2;
    }
    uVar2 = uVar1 & 0xfffffeff;
    if ((param_2 & 0x20) != 0) {
        uVar2 = uVar1;
    }
    uVar1 = uVar2 & 0xffffdfff;
    if ((param_2 & 0x40) != 0) {
        uVar1 = uVar2;
    }
    return uVar1 | 0x2c0;
}


/* fcn.000189e6 @ 0x189e6 */

uint32_t fcn.000189e6(void)

{
    char cVar1;
    uint32_t uVar2;
    
    uVar2 = 0xffffffff;
    *0x153a0 = fcn.00018959(0);
    cVar1 = fcn.0001872f(3);
    if (cVar1 == '\0') {
        uVar2 = 0xffffdfff;
    }
    cVar1 = fcn.0001872f(1);
    if (cVar1 == '\0') {
        cVar1 = fcn.0001872f(2);
        if (cVar1 == '\0') {
            uVar2 = uVar2 & 0xfffffde0;
        }
    }
    return uVar2;
}


/* fcn.00018959 @ 0x18959 */

uint fcn.00018959(int16_t param_1)

{
    uint32_t uVar1;
    uint16_t uVar2;
    
    uVar2 = 0;
    do {
        uVar1 = uVar2;
        if (*(uVar1 * 3 + 0x13fc8) == param_1) {
            return CONCAT31(uVar2 * 3 >> 8,*(uVar2 * 3 + 0x13fca));
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 0x10);
    return CONCAT31(uVar1 * 3 >> 8,0x23);
}


/* fcn.0001872f @ 0x1872f */

uint32_t fcn.0001872f(int param_1)

{
    uint8_t uVar1;
    
    if (param_1 == 0) {
        return *0x153a0 != 0;
    }
    if (param_1 == 1) {
        uVar1 = *0x153a0;
    }
    else if (param_1 == 2) {
        uVar1 = *0x153a0 >> 1;
    }
    else {
        if (param_1 - 3U != 0) {
            return param_1 - 3U & 0xffffff00;
        }
        uVar1 = *0x153a0 >> 5;
    }
    return uVar1 & 0xffffff01;
}


/* fcn.00018a2b @ 0x18a2b */

void fcn.00018a2b(void)

{
    char cVar1;
    int iVar2;
    uint32_t *puVar3;
    
    iVar2 = fcn.0002300e();
    puVar3 = fcn.00023008();
    cVar1 = fcn.0001871c(0x200);
    if (cVar1 != '\0') {
        cVar1 = fcn.0002240b();
        if (cVar1 == '\0') {
            *(iVar2 + 0x1a) = *(iVar2 + 0x1a) & 0xfdffffff;
            *(iVar2 + 0x1e) = *(iVar2 + 0x1e) & 0xffdf;
            *puVar3 = *puVar3 & 0xfffffdff;
        }
    }
    if (*0x1538c != 0) {
        fcn.00018483(*0x1538c);
    }
    *0x1528f = 0;
    cVar1 = fcn.00022efc(0x15280,0x26);
    *0x1528f = -cVar1;
    return;
}


/* fcn.0002240b @ 0x2240b */

uchar fcn.0002240b(void)

{
    return 1;
}


/* fcn.00018483 @ 0x18483 */

void fcn.00018483(uint32_t param_1)

{
    int iVar1;
    uint32_t *puVar2;
    
    if (param_1 != 0) {
        *0x1538c = param_1;
        iVar1 = fcn.0002300e();
        *0x15390 = *(iVar1 + 0x1a);
        *(iVar1 + 0x1a) = *(iVar1 + 0x1a) | param_1;
        *0x15394 = fcn.0001851a(param_1);
        puVar2 = fcn.00023008();
        *0x15398 = *puVar2;
        *puVar2 = *puVar2 | *0x15394;
    }
    return;
}


/* fcn.00018fa7 @ 0x18fa7 */

uint __fastcall fcn.00018fa7(int param_1)

{
    if (*(param_1 + 0x156) == 0) {
        return *(param_1 + 0x152);
    }
    return *(param_1 + 0x14e);
}


/* fcn.0001fcc6 @ 0x1fcc6 */

uint * __thiscall fcn.0001fcc6(uint *param_1,uint32_t param_2,uint param_3,uint param_4,uint16_t param_5)

{
    *(param_1 + 6) = param_2 >> 9;
    *param_1 = 0;
    *(param_1 + 1) = 0;
    param_1[3] = param_4;
    *(param_1 + 4) = param_5;
    param_1[2] = param_2;
    param_1[5] = param_3;
    param_1[6] = param_2 / param_5;
    param_1[7] = param_3;
    param_1[9] = 0;
    param_1[8] = 0;
    *(param_1 + 10) = 0;
    return param_1;
}


/* fcn.00019760 @ 0x19760 */

uchar __fastcall fcn.00019760(int *param_1)

{
    uchar uVar1;
    int unaff_EBX;
    int16_t iVar2;
    uint uStack_24;
    uint uStack_20;
    uint uStack_14;
    int16_t iStack_10;
    uchar uStack_c;
    
    uVar1 = 0;
    uStack_24._0_2_ = uStack_24 & 0xff00;
    uStack_24 = CONCAT22(1,uStack_24);
    fcn.0001e0fe(0);
    if (unaff_EBX != 0) {
        uStack_14 = 0x200;
        iVar2 = 0;
        uStack_c = 0x28;
        do {
            uStack_24 = iVar2 * 0x10 + *param_1;
            uStack_20 = 0;
            (****(*0x150c4 + 0x23c))(&uStack_24);
            if (iStack_10 == 0) {
                fcn.0002245a(param_1 + 1,0x1ec,unaff_EBX,0x1ec);
                uVar1 = 1;
                break;
            }
            iVar2 = iVar2 + 1;
            uVar1 = 0;
        } while (iVar2 < 2);
    }
    fcn.0001e001(unaff_EBX);
    return uVar1;
}


/* fcn.0001be0c @ 0x1be0c */

void __fastcall fcn.0001be0c(int *param_1)

{
    uint8_t uVar1;
    
    uVar1 = *(param_1 + 0x10);
    if ((uVar1 == 1) || ((uVar1 != 2 && (((uVar1 == 3 || (uVar1 < 5)) || ((7 < uVar1 && (uVar1 != 10)))))))) {
        *(param_1 + 0x10) = 0xb;
    }
    else {
        *(param_1 + 0x10) = 10;
    }
    *(*param_1 + 0x84) = *(*param_1 + 0x84) | 0x80000000;
    (****(param_1[1] + 0x38))(1);
    return;
}


/* fcn.0001be4a @ 0x1be4a */

void __fastcall fcn.0001be4a(int *param_1)

{
    if (param_1[0x10] == '\n') {
        *(param_1 + 0x10) = 5;
    }
    else {
        if (param_1[0x10] != '\v') {
            return;
        }
        *(param_1 + 0x10) = 3;
    }
    *(*param_1 + 0x84) = *(*param_1 + 0x84) & 0x7fffffff;
    (****(param_1[1] + 0x38))(1);
    return;
}


/* fcn.00018d7a @ 0x18d7a */

uint __fastcall fcn.00018d7a(int param_1)

{
    int16_t iVar1;
    
    if (((*(param_1 + 0x1d0) & 0x19) != 0x19) && (iVar1 = fcn.00019800(), iVar1 != 0)) {
        return 0;
    }
    iVar1 = fcn.00019091(1);
    if (iVar1 != 0) {
        return 0;
    }
    fcn.000224aa(param_1 + 0x1d4,0,8);
    fcn.0001fb48();
    *(param_1 + 0x1d0) = *(param_1 + 0x1d0) | 0x40;
    fcn.00019df2();
    if (*(param_1 + 500) != 0) {
        fcn.00022fad(*(param_1 + 500));
        *(param_1 + 500) = 0;
        *(param_1 + 0x1f8) = 0;
    }
    return 1;
}


/* fcn.0001bf01 @ 0x1bf01 */

uint __fastcall fcn.0001bf01(int param_1)

{
    return *(*(*(param_1 + 4) + 0x38) + 0x18);
}


/* fcn.00019da2 @ 0x19da2 */

void __thiscall fcn.00019da2(int param_1,int param_2,uint16_t param_3)

{
    uint32_t *puVar1;
    uint uVar2;
    int iVar3;
    
    iVar3 = param_3 * 0xa0;
    uVar2 = fcn.0001bf01();
    *(iVar3 + 0xca + param_1) = uVar2;
    *(iVar3 + 0xb4 + param_1) = *(param_2 + 0x40);
    puVar1 = iVar3 + 0xc6 + param_1;
    *puVar1 = *puVar1 ^ (*(param_2 + 0x41) ^ *(iVar3 + 0xc6 + param_1)) & 1;
    fcn.00019df2();
    return;
}


/* fcn.00019800 @ 0x19800 */

int16_t __fastcall fcn.00019800(int param_1)

{
    int16_t iVar1;
    int32_t unaff_ESI;
    
    fcn.00022f71(0x14128,unaff_ESI);
    iVar1 = fcn.00019873();
    if (iVar1 == 0) {
        *(param_1 + 0x1d0) = *(param_1 + 0x1d0) & 0xffffffd3 | 1;
        iVar1 = fcn.0002006f();
        if (iVar1 == 0) {
            *(param_1 + 0x1d0) = *(param_1 + 0x1d0) & 0xffffffef | 8;
            if ((*(param_1 + 0x1d0) & 0x10) == 0) {
                iVar1 = fcn.0001ff55();
                if (iVar1 != 0) {
                    return iVar1;
                }
                *(param_1 + 0x1d0) = *(param_1 + 0x1d0) | 0x10;
            }
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.00019091 @ 0x19091 */

int16_t fcn.00019091(void)

{
    uint32_t uVar1;
    int16_t iVar2;
    uint uVar3;
    int iVar4;
    uint32_t uVar5;
    int unaff_EDI;
    uchar *puVar6;
    uchar *puVar7;
    bool bVar8;
    uint32_t uVar9;
    uchar uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t *puStack_28c0;
    uint uStack_28b8;
    uchar auStack_28b4 [4];
    uchar auStack_28b0 [8];
    uint32_t uStack_28a8;
    uchar *puStack_28a4;
    uint32_t uStack_28a0;
    uint32_t auStack_2898 [2];
    uint32_t *puStack_2890;
    uint uStack_2888;
    int16_t iStack_2882;
    uchar uStack_2880;
    uint uStack_2878;
    char cStack_30;
    
    if (*0x155e8 != '\0') {
        return 0;
    }
    iVar2 = 1;
    puStack_28c0 = puStack_28c0;
    if (((*(*0x150c4 + 0x1ce) != 1) && (*(*0x150c4 + 0x1ce) != 2)) || (uVar1 = *(*0x150c4 + 0x1ca), uVar1 == 0)) {
        return 0;
    }
    uStack_28b8._0_2_ = uStack_28b8 & 0xff00;
    uStack_28b8 = CONCAT22(1,uStack_28b8);
    fcn.0001e0fe();
    if (puStack_28c0 != NULL) {
        auStack_2898[1] = 0;
        puStack_2890 = puStack_28c0;
        uStack_2888 = 0x200;
        uStack_2880 = 0x28;
        auStack_2898[0] = uVar1;
        (****(*0x150c4 + 0x23c))(auStack_2898);
        if (iStack_2882 == 0) {
            puVar7 = *puStack_28c0;
            uStack_28b8 = puVar7;
            if (puVar7 < 0x1000) {
                fcn.0001e001(puStack_28c0);
                uVar11 = 8;
                uVar9 = 0;
                fcn.0001fcc6(0x200,uVar1,puVar7 + 1,8);
                fcn.0001fea0(1);
                puVar6 = auStack_28b4;
                fcn.0001fdc7(auStack_28b0,puVar6,&uStack_28b8);
                do {
                    uVar10 = uVar9 >> 0x18;
                    iVar4 = fcn.0001fe99();
                    if (iVar4 == 0) {
                        *0x155e8 = uVar10;
                        fcn.0001e001(uStack_2878);
                        return 0;
                    }
                    uVar3 = fcn.0001fdf9();
                    fcn.00020430(uVar3);
                    uVar5 = unaff_EDI << 9;
                    uVar9 = uVar1;
                    uVar12 = uVar11;
                    fcn.00018cf1(uVar11,uVar1,unaff_EDI);
                    if ((cStack_30 != '\0') || (0x2 < puVar7)) {
                        puVar7 = puVar6;
                        do {
                            puStack_2890 = CONCAT31(puStack_2890._1_3_,0x28);
                            auStack_2898[0] = uVar5;
                            if (0x400000 < uVar5) {
                                auStack_2898[0] = 0x400000;
                            }
                            uStack_28a0 = 0;
                            uStack_28a8 = uVar11;
                            puStack_28a4 = puVar6;
                            fcn.0001f354();
                            iVar2 = fcn.0001f7ae();
                            if (iVar2 == 0) {
                                fcn.0001f939();
                            }
                            uVar5 = uVar5 - uStack_28a0;
                            bVar8 = CARRY4(uVar11,uStack_28a0 >> 9);
                            uVar11 = uVar11 + (uStack_28a0 >> 9);
                            puVar6 = puVar6 + bVar8;
                        } while (uVar5 != 0);
                        puVar6 = puVar7;
                    }
                    iVar2 = fcn.0001fe09();
                    uVar11 = uVar12;
                } while (iVar2 == 0);
                fcn.0001e001(uStack_2878);
                return iVar2;
            }
            goto code_r0x00019154;
        }
        iVar2 = iStack_2882;
    }
code_r0x00019154:
    fcn.0001e001(puStack_28c0);
    return iVar2;
}


/* fcn.0001fb48 @ 0x1fb48 */

void __fastcall fcn.0001fb48(int *param_1)

{
    int iVar1;
    int iVar2;
    uint unaff_ESI;
    
    if ((*0x150d0 == '\0') && (param_1[1] != 0)) {
        fcn.0001e001(param_1[1]);
    }
    *0x150d0 = 0;
    iVar2 = fcn.0001e05d(1,*(*0x150c4 + 0x1c2));
    param_1[1] = iVar2;
    iVar2 = *(*0x150c4 + 0x1c2);
    *param_1 = iVar2;
    iVar1 = *(*0x150c4 + 0x1c6);
    param_1[4] = 0;
    param_1[2] = iVar1 + iVar2;
    fcn.000224aa(param_1[1],0,0x200,unaff_ESI);
    fcn.0001fafb(1);
    return;
}


/* fcn.0001f354 @ 0x1f354 */

int __thiscall fcn.0001f354(int param_1,uint32_t *param_2,uint param_3)

{
    uint32_t uVar1;
    int16_t iVar2;
    ushort uVar3;
    
    *(param_1 + 0x2820) = param_3;
    *(param_1 + 0x2814) = param_2;
    uVar1 = *(*0x150c4 + 0x1ae) + *param_2 >> 4;
    *(param_1 + 0x281c) = uVar1 | (param_2[1] + CARRY4(*(*0x150c4 + 0x1ae),*param_2)) * 0x10000000;
    iVar2 = *(*0x150c4 + 0x1ae) + uVar1 * -0x10 + *param_2;
    uVar3 = fcn.0001f3cd(iVar2,param_2[4]);
    *(param_1 + 0x2818) = uVar3;
    fcn.0001f89b(iVar2,param_2[4]);
    return param_1;
}


/* fcn.0001f3cd @ 0x1f3cd */

int16_t fcn.0001f3cd(int16_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    
    uVar1 = (param_2 >> 9) + param_1;
    return ((uVar1 & 0xf) != 0) + (uVar1 >> 4);
}


/* fcn.0001f89b @ 0x1f89b */

void __thiscall fcn.0001f89b(int param_1,int param_2,uint32_t param_3)

{
    uint32_t uVar1;
    int iVar2;
    ushort uVar3;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    
    uVar4 = param_3 >> 9 & 0xffff;
    *(param_1 + 0xc) = param_2;
    uVar1 = 0x10U - param_2 & 0xffff;
    if (param_3 >> 9 < 0x10 - param_2) {
        uVar1 = uVar4;
    }
    iVar6 = 1;
    iVar5 = uVar4 - uVar1;
    uVar3 = iVar5;
    *(param_1 + 0xe) = uVar1;
    if (1 < *(param_1 + 0x2818) + -1) {
        iVar2 = iVar6;
        do {
            iVar5 = iVar5 + -0x10;
            uVar3 = iVar5;
            iVar2 = iVar2 + 1;
            *(iVar6 * 0x14 + 0xc + param_1) = 0;
            *(iVar6 * 0x14 + 0xe + param_1) = 0x10;
            iVar6 = iVar2;
        } while (iVar6 < *(param_1 + 0x2818) + -1);
    }
    if (1 < *(param_1 + 0x2818)) {
        *(*(param_1 + 0x2818) * 0x14 + -8 + param_1) = 0;
        *(*(param_1 + 0x2818) * 0x14 + -6 + param_1) = uVar3;
    }
    return;
}


/* fcn.0001f7ae @ 0x1f7ae */

int16_t __fastcall fcn.0001f7ae(int param_1)

{
    int16_t iVar1;
    int16_t iVar2;
    int16_t iVar3;
    int32_t var_2ch;
    
    iVar1 = fcn.0001f48e(*(param_1 + 0x281c),*(param_1 + 0x2818));
    if (iVar1 == 0) {
        fcn.00018a80();
        iVar1 = 0;
        iVar3 = 0;
        if (0 < *(param_1 + 0x2818)) {
            do {
                if (*(iVar3 * 0x14 + param_1 + 0x10) != '\0') {
                    iVar2 = fcn.0001ff16();
                    if (iVar2 != 0) goto code_r0x0001f826;
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 < *(param_1 + 0x2818));
        }
        iVar2 = fcn.0001fda2();
        if (iVar2 != 0) {
code_r0x0001f826:
            iVar1 = iVar2;
        }
        fcn.0001e001(var_2ch);
    }
    return iVar1;
}


/* fcn.0001f4a7 @ 0x1f4a7 */

int16_t __fastcall fcn.0001f4a7(int param_1)

{
    int16_t iVar1;
    int16_t iVar2;
    int iVar3;
    int16_t iVar4;
    int iVar5;
    uint uStack_2c;
    
    fcn.00018a80();
    iVar2 = 0;
    iVar4 = 0;
    if (0 < *(param_1 + 0x2818)) {
        do {
            iVar3 = iVar4 * 0x14 + param_1;
            if ((*(iVar3 + 0x10) != '\0') && ((*(iVar3 + 6) & 2) != 0)) {
                iVar5 = iVar3;
                iVar1 = fcn.0001f0b6(*(iVar3 + 8),iVar3,*(param_1 + 0x2820));
                if (iVar1 == 0) {
                    iVar1 = fcn.0001ff50(iVar5,iVar3,*(iVar3 + 8));
                    if (iVar1 == 0) goto code_r0x0001f50b;
                }
                goto code_r0x0001f526;
            }
code_r0x0001f50b:
            iVar4 = iVar4 + 1;
        } while (iVar4 < *(param_1 + 0x2818));
    }
    iVar1 = fcn.0001fda2();
    if (iVar1 != 0) {
code_r0x0001f526:
        iVar2 = iVar1;
    }
    fcn.0001e001(uStack_2c);
    return iVar2;
}


/* fcn.00018fbe @ 0x18fbe */

uint32_t __thiscall fcn.00018fbe(int param_1,uint32_t param_2)

{
    uint16_t uVar1;
    
    if (*(param_1 + 0x176) <= param_2) {
        uVar1 = 0;
        do {
            if ((*(param_1 + 0x176 + uVar1 * 4) <= param_2) && (param_2 < *(param_1 + 0x176 + (uVar1 + 1) * 4))) {
                return uVar1;
            }
            uVar1 = uVar1 + 1;
        } while (uVar1 < 8);
    }
    return 0xffffffff;
}


/* fcn.00019bed @ 0x19bed */

uint fcn.00019bed(uint32_t param_1,int param_2,uint16_t param_3)

{
    uint in_EAX;
    ushort uVar2;
    uint32_t uVar1;
    uint16_t uVar3;
    uint16_t uVar4;
    
    uVar2 = in_EAX >> 0x10;
    uVar4 = 0;
    uVar3 = 0;
    if (0 < param_3 - 1) {
        uVar1 = 0;
        do {
            uVar3 = uVar4;
            if (param_1 < *(param_2 + 4 + uVar1 * 4)) break;
            uVar4 = uVar4 + 1;
            uVar1 = uVar4;
            uVar3 = uVar4;
        } while (uVar1 < param_3 - 1);
        uVar2 = 0;
    }
    return CONCAT22(uVar2,uVar3);
}


/* fcn.0001fea0 @ 0x1fea0 */

int16_t __thiscall fcn.0001fea0(int param_1,uint param_2)

{
    int16_t iVar1;
    
    *(param_1 + 0x24) = param_2;
    iVar1 = fcn.0001fd71();
    if (iVar1 == 0) {
        iVar1 = fcn.0001fe1e();
        if (iVar1 == 0) {
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.0001fd71 @ 0x1fd71 */

int16_t __fastcall fcn.0001fd71(int param_1)

{
    int16_t iVar1;
    
    if ((*(param_1 + 0x28) != '\0') &&
       ((*(param_1 + 0x24) < *(param_1 + 0x20) || (*(param_1 + 0x18) + *(param_1 + 0x20) <= *(param_1 + 0x24))))) {
        iVar1 = fcn.0001fda2();
        if (iVar1 != 0) {
            return iVar1;
        }
        *(param_1 + 0x28) = 0;
    }
    return 0;
}


/* fcn.0001fe1e @ 0x1fe1e */

int16_t __fastcall fcn.0001fe1e(int param_1)

{
    int16_t iVar1;
    uint32_t uVar2;
    
    if (*(param_1 + 0x28) == '\0') {
        uVar2 = *(param_1 + 0x24) / *(param_1 + 0x18);
        *(param_1 + 0x1c) = (*(param_1 + 8) >> 9) * uVar2 + *(param_1 + 0x14);
        *(param_1 + 0x20) = *(param_1 + 0x18) * uVar2;
        iVar1 = fcn.0001fd18(0x28);
        if (iVar1 != 0) {
            return iVar1;
        }
        *(param_1 + 0x28) = 1;
    }
    return 0;
}


/* fcn.0001fd18 @ 0x1fd18 */

int16_t __cdecl fcn.0001fd18(int8_t arg_8h)

{
    int32_t *in_ECX;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_10h;
    int16_t var_ah;
    int8_t var_8h;
    
    fcn.0001e0fe(in_ECX[7]);
    if ((in_ECX[1] == '\0') || (arg_8h == 0x2a)) {
        var_20h = in_ECX[7];
        var_1ch = 0;
        var_18h = *in_ECX;
        var_10h = in_ECX[2];
        var_8h = arg_8h;
        (****(*0x150c4 + 0x23c))(&var_20h);
    }
    else {
        var_ah = 0;
    }
    return var_ah;
}


/* fcn.0001fdc7 @ 0x1fdc7 */

void __thiscall fcn.0001fdc7(uint *param_1,uint *param_2,uint *param_3,int *param_4)

{
    *param_2 = *param_1;
    *param_3 = param_1[8];
    if (param_1[3] < param_1[6] + param_1[8]) {
        *param_4 = param_1[3] - param_1[8];
    }
    else {
        *param_4 = param_1[6];
    }
    return;
}


/* fcn.0001fdf9 @ 0x1fdf9 */

int __fastcall fcn.0001fdf9(int *param_1)

{
    return (param_1[9] - param_1[8]) * *(param_1 + 4) + *param_1;
}


/* fcn.00020430 @ 0x20430 */

uint32_t * __thiscall fcn.00020430(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar1 = param_2[1];
    uVar2 = *param_2;
    param_1[1] = uVar1 << 0x18 | uVar2 >> 8;
    param_1[2] = uVar1 >> 8;
    *param_1 = uVar2 & 0xff | param_1[1] << 8;
    param_1[1] = param_1[1] >> 0x18;
    return param_1;
}


/* fcn.00018cf1 @ 0x18cf1 */

void __thiscall fcn.00018cf1(int param_1,uint param_2,uint param_3,uint32_t param_4)

{
    int iVar1;
    int16_t iVar2;
    int16_t iVar3;
    uint32_t *puVar4;
    
    iVar2 = 0;
    iVar3 = 1;
    puVar4 = param_1 + 0x220;
    do {
        if (*puVar4 < *(param_1 + (iVar2 + 0x21) * 0x10)) {
            iVar2 = iVar3;
        }
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 4;
    } while (iVar3 < 3);
    iVar1 = iVar2;
    if (*(param_1 + (iVar1 + 0x21) * 0x10) < param_4) {
        *(param_1 + (iVar1 + 0x21) * 0x10) = param_4;
        *(param_1 + 0x208 + iVar1 * 0x10) = param_2;
        *(param_1 + 0x20c + iVar1 * 0x10) = param_3;
    }
    return;
}


/* fcn.0001f939 @ 0x1f939 */

int16_t __fastcall fcn.0001f939(int param_1)

{
    char cVar1;
    int16_t iVar2;
    int iVar3;
    int16_t iVar4;
    int iVar5;
    uint uStack_2c;
    
    fcn.00018a80();
    iVar4 = 0;
    if (0 < *(param_1 + 0x2818)) {
        do {
            if ((*(param_1 + 0x10 + iVar4 * 0x14) != '\0') && (cVar1 = fcn.0001f86d(), cVar1 != '\0')) {
                iVar3 = iVar4 * 0x14 + param_1;
                iVar5 = iVar3;
                iVar2 = fcn.0001f210(*(iVar3 + 8),iVar3,*(iVar3 + 0xc));
                if ((iVar2 != 0) || (iVar2 = fcn.0001ff50(iVar5,iVar3), iVar2 != 0)) goto code_r0x0001f9bb;
            }
            iVar4 = iVar4 + 1;
        } while (iVar4 < *(param_1 + 0x2818));
    }
    iVar2 = fcn.0001fda2();
    iVar4 = 0;
    if (iVar2 != 0) {
code_r0x0001f9bb:
        iVar4 = iVar2;
    }
    fcn.0001e001(uStack_2c);
    return iVar4;
}


/* fcn.0001fe09 @ 0x1fe09 */

int16_t __fastcall fcn.0001fe09(int param_1)

{
    int16_t iVar1;
    
    iVar1 = fcn.0001fea0(*(param_1 + 0x24) + 1);
    if (iVar1 == 0) {
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.0001fe99 @ 0x1fe99 */

int __fastcall fcn.0001fe99(int param_1)

{
    return *(param_1 + 0xc) - *(param_1 + 0x24);
}


/* fcn.0001905d @ 0x1905d */

void __cdecl fcn.0001905d(int32_t arg_8h)

{
    uint32_t *puVar1;
    int in_ECX;
    int32_t var_4h;
    
    puVar1 = *(in_ECX + 0x1f8) + arg_8h * 8;
    var_4h = CONCAT13(puVar1[1] >> 0x18,0x14ffff);
    *puVar1 = ~arg_8h;
    puVar1[1] = var_4h;
    return;
}


/* fcn.0001f3eb @ 0x1f3eb */

uint __fastcall fcn.0001f3eb(int param_1)

{
    bool bVar1;
    bool bVar2;
    char cVar3;
    char cVar4;
    uint unaff_EBX;
    int iVar5;
    int iVar6;
    uint uVar7;
    
    cVar4 = '\0';
    bVar1 = false;
    *(param_1 + 0x2824) = 1;
    iVar6 = 0;
    bVar2 = false;
    if (0 < *(param_1 + 0x2818)) {
        do {
            bVar1 = bVar2;
            iVar5 = iVar6 * 0x14;
            if (*(param_1 + 0x10 + iVar5) == '\0') {
                cVar4 = '\x01';
            }
            else {
                cVar3 = fcn.0001f83c(iVar6);
                cVar4 = unaff_EBX >> 0x18;
                if (cVar3 == '\0') {
                    bVar1 = true;
                }
                if ((*(param_1 + 6 + iVar5) & 2) != 0) {
                    *(param_1 + 0x2824) = 0;
                }
            }
            iVar6 = iVar6 + 1;
            bVar2 = bVar1;
        } while (iVar6 < *(param_1 + 0x2818));
    }
    cVar3 = *(*(param_1 + 0x2814) + 0x18);
    if (cVar3 == '(') {
        if ((cVar4 != '\0') || (bVar1)) {
            return 0;
        }
        uVar7 = 2;
    }
    else if (cVar3 == '*') {
        if ((cVar4 != '\0') || (bVar1)) {
            return 1;
        }
        uVar7 = 3;
    }
    else {
        uVar7 = 4;
    }
    return uVar7;
}


/* fcn.0001fbca @ 0x1fbca */

void __thiscall fcn.0001fbca(uint32_t *param_1,int param_2,char param_3)

{
    uint16_t *puVar1;
    int16_t iVar2;
    
    if ((param_1[1] == 0) && (fcn.0001fb48(), param_1[1] == 0)) {
        return;
    }
    if (*param_1 < param_1[2]) {
        if (param_3 == '\0') {
            param_1[3] = param_1[3] + 1;
            param_1[4] = param_1[4] + 1;
            iVar2 = fcn.0001fa68(param_2);
            if (iVar2 != 1) {
                puVar1 = param_1[1];
                puVar1[(*puVar1 + 1) * 3] = *(param_2 + 0x2818) << 2 | puVar1[(*puVar1 + 1) * 3] & 3;
                *(param_1[1] + *param_1[1] * 3 + 1) = *(param_2 + 0x281c);
                puVar1 = param_1[1];
                puVar1[(*puVar1 + 1) * 3] = *(*(param_2 + 0x2814) + 0x18) == '*' | puVar1[(*puVar1 + 1) * 3] & 0xfffe;
                *param_1[1] = *param_1[1] + 1;
            }
        }
        if (((0x32 < param_1[3]) || (*(*(param_2 + 0x2814) + 0x18) == '*')) || (param_1[4] < 0x15)) {
            fcn.0001fafb(0);
        }
        if (*param_1[1] == 0x55) {
            fcn.0001fafb(0);
            *param_1 = *param_1 + 1;
            if (*param_1 < param_1[2]) {
                fcn.0001fbaa();
            }
        }
    }
    return;
}


/* fcn.0001f612 @ 0x1f612 */

int16_t __fastcall fcn.0001f612(int param_1)

{
    int iVar1;
    uint8_t uVar2;
    unkuint3 Var3;
    char cVar4;
    int16_t iVar5;
    uint32_t uVar6;
    int16_t iVar7;
    int32_t unaff_EBX;
    uint unaff_EBP;
    int iVar8;
    bool bVar9;
    int16_t unaff_retaddr;
    uint32_t uStack_44;
    uint32_t uStack_3c;
    uint uStack_2c;
    
    Var3 = uStack_44;
    iVar7 = 0;
    fcn.00018a80();
    iVar8 = 0;
    uStack_44 = uStack_44;
    iVar5 = -*(param_1 + 0x2818);
    bVar9 = SBORROW2(0,*(param_1 + 0x2818));
    while (bVar9 != iVar5 < 0) {
        fcn.0001f9d8(iVar8);
        iVar5 = iVar8;
        if ((unaff_retaddr != 3) &&
           (uVar2 = *(iVar5 * 0x14 + 6 + param_1), *(iVar5 * 0x14 + 6 + param_1) = uVar2 | 2, (uVar2 >> 1 & 1) != 1))
        {
            unaff_EBX = CONCAT13(1,unaff_EBX);
        }
        if ((Var3 & 3) == 0) {
            uVar6 = uStack_44;
        }
        else {
            fcn.0001e0fe(0);
            uVar6 = *(iVar5 * 0x14 + 0xe + param_1) << 9;
            fcn.0002245a(uStack_3c,uVar6,unaff_EBX,uVar6);
            uVar6 = uStack_3c;
        }
        iVar1 = iVar5 * 0x14 + param_1;
        iVar5 = fcn.0001f33d(*(iVar5 * 0x14 + 8 + param_1),uVar6,*(iVar1 + 0xc));
        if (iVar5 != 0) goto code_r0x0001f78a;
        if (uStack_3c != '\0') {
            iVar5 = fcn.0001ff50(uVar6,iVar1,*(iVar1 + 8));
            if (iVar5 != 0) goto code_r0x0001f78a;
            if (((unaff_EBP >> 0x18 != '\0') && (*(*0x150c4 + 0x238) != 0)) && (cVar4 = fcn.0001ba79(), cVar4 == '\0'))
            {
                fcn.0001bc05(1);
            }
        }
        iVar8 = iVar8 + 1;
        iVar5 = iVar8 - *(param_1 + 0x2818);
        bVar9 = SBORROW2(iVar8,*(param_1 + 0x2818));
    }
    iVar5 = fcn.0001fda2();
    if (iVar5 != 0) {
code_r0x0001f78a:
        iVar7 = iVar5;
    }
    fcn.0001e001(uStack_2c);
    fcn.0001e001(0);
    return iVar7;
}


/* fcn.0001f543 @ 0x1f543 */

int16_t __fastcall fcn.0001f543(int param_1)

{
    int16_t iVar1;
    int16_t iVar2;
    uint32_t uVar3;
    uint32_t arg_ch;
    int16_t unaff_BX;
    uint32_t arg_8h;
    uint32_t uStack_c;
    
    arg_8h = *(*(param_1 + 0x2814) + 8);
    iVar2 = 0;
    iVar1 = 0;
    if (0 < *(param_1 + 0x2818)) {
        do {
            if ((arg_8h & 3) == 0) {
                uStack_c = arg_8h;
                iVar1 = iVar2;
            }
            else {
                fcn.0001e0fe(0);
                iVar1 = unaff_BX;
            }
            uVar3 = iVar1 * 0x14;
            iVar1 = fcn.0001f30b(*(uVar3 + 8 + param_1),uStack_c,*(uVar3 + 0xc + param_1));
            if (iVar1 != 0) break;
            if ((arg_8h & 3) != 0) {
                arg_ch = *(param_1 + 0xe + uVar3) << 9;
                fcn.0002245a(arg_8h,arg_ch,uStack_c,arg_ch);
            }
            arg_8h = arg_8h + *(param_1 + 0xe + uVar3) * 0x200;
            iVar2 = iVar2 + 1;
            uStack_c = uVar3;
            iVar1 = 0;
        } while (iVar2 < *(param_1 + 0x2818));
    }
    fcn.0001e001(0);
    return iVar1;
}


/* fcn.0001fa58 @ 0x1fa58 */

int16_t fcn.0001fa58(void)

{
    int16_t iVar1;
    
    iVar1 = fcn.0001f939();
    if (iVar1 == 0) {
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.0001fa48 @ 0x1fa48 */

int16_t fcn.0001fa48(void)

{
    int16_t iVar1;
    
    iVar1 = fcn.0001f4a7();
    if (iVar1 == 0) {
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00022f71 @ 0x22f71 */

void __cdecl fcn.00022f71(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_100h;
    
    fcn.00022b25(&var_100h,0x100,arg_8h,&arg_ch);
    fcn.00022f15(*0x1c89c,&var_100h);
    return;
}


/* fcn.00022f15 @ 0x22f15 */

void fcn.00022f15(uint param_1,char *param_2)

{
    uint8_t uVar1;
    int16_t iVar2;
    uint8_t uVar3;
    char *pcVar4;
    
    iVar2 = 0;
    if (((*0x1c89c != -1) && (param_2 != NULL)) && (*param_2 != '\0')) {
        uVar3 = *0x15272;
        do {
            pcVar4 = param_2 + iVar2;
            if (*pcVar4 == -0x10) {
                uVar1 = pcVar4[1];
                if ((uVar1 & 0xf0) == 0xe0) {
                    uVar1 = (uVar1 ^ uVar3) & 0xf ^ uVar3;
                }
                uVar3 = uVar1;
                iVar2 = 0;
                param_2 = pcVar4 + 2;
                *0x15272 = uVar3;
            }
            else {
                iVar2 = iVar2 + 1;
            }
        } while (param_2[iVar2] != '\0');
    }
    return;
}


/* fcn.00019873 @ 0x19873 */

uint __fastcall fcn.00019873(int param_1)

{
    uint8_t uVar1;
    int iVar2;
    char cVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t unaff_EBX;
    uint uVar6;
    int32_t unaff_EBP;
    uint32_t uVar7;
    int32_t unaff_ESI;
    uint32_t uVar8;
    uint32_t uVar9;
    bool bVar10;
    uint uVar11;
    int32_t arg_8h;
    int32_t arg_ch;
    int32_t iStack_40;
    uint32_t uStack_3c;
    uint32_t uStack_30;
    uint32_t uStack_2c;
    uint uStack_24;
    uint32_t uStack_20;
    uint32_t uStack_1c;
    int iStack_18;
    uint32_t uStack_14;
    uint32_t uStack_10;
    int16_t iStack_c;
    uchar uStack_8;
    
    uVar6 = 0;
    *(param_1 + 0x1f8) = 0;
    *(param_1 + 500) = 0;
    iStack_18 = fcn.000223dc(0x82);
    if (iStack_18 == 0) {
        fcn.00022f71(0x13ff8,unaff_ESI);
        fcn.00022fad();
        uVar6 = 1;
    }
    else {
        *(param_1 + 500) = iStack_18;
        iStack_18 = iStack_18 + 0x12000;
        uStack_8 = 0x28;
        uVar8 = *(param_1 + 0x15a);
        *(param_1 + 0x1f8) = iStack_18;
        if ((*(param_1 + 0x1d0) & 1) == 0) {
            uStack_20 = fcn.00018eb6();
        }
        else {
            uStack_20 = fcn.00018fa7();
        }
        uStack_1c = 0;
        fcn.00022f71(0x14038,unaff_EBP);
        uVar1 = 0;
        for (; uVar8 != 0; uVar8 = uVar8 - uVar4) {
            uVar4 = 0x10000;
            if (uVar8 < 0x10000) {
                uVar4 = uVar8;
            }
            uStack_10 = uVar4;
            (****(*0x150c4 + 0x23c))(&uStack_20);
            if (iStack_c != 0) {
                if (uVar1 < 3) {
                    (****(*0x150c4 + 0x23c))(&uStack_20);
                    uVar1 = uVar1 + 1;
                }
                if (iStack_c != 0) {
                    fcn.00022f71(0x14060,unaff_EBP);
                    fcn.00022fad();
                    return 1;
                }
            }
            bVar10 = CARRY4(uStack_20,uVar4 >> 9);
            uStack_20 = uStack_20 + (uVar4 >> 9);
            uStack_1c = uStack_1c + bVar10;
            iStack_18 = iStack_18 + uVar4;
        }
        fcn.00022f71(0x14084,unaff_EBP);
        if ((*(param_1 + 0x1d0) & 1) == 0) {
            arg_ch = 0;
            uStack_24._0_2_ = uStack_24 & 0xff00;
            uStack_24 = CONCAT22(0x10,uStack_24);
            fcn.0001e0fe();
            if (uStack_2c == 0) {
code_r0x00019bce:
                uVar6 = 1;
            }
            else {
                uVar4 = *(param_1 + 0x19e);
                uStack_24 = *(param_1 + 0x1e0);
                uStack_1c = uStack_2c;
                *(param_1 + 0x1fc) = *(param_1 + 0x1dc);
                uStack_20 = 0;
                iStack_40 = 0;
                uVar8 = unaff_EBX & 0xffffff;
                uVar5 = uVar4;
                while ((uVar4 != 0 && (uVar8 >> 0x18 == '\0'))) {
                    uVar9 = 0x2000;
                    if (uVar4 < 0x2000) {
                        uVar9 = uVar4;
                    }
                    uVar5 = (uVar5 >> 9) + *(param_1 + 0x19a);
                    if (uVar5 < (uVar9 >> 9) + uStack_24) {
                        uVar9 = (uVar5 - uStack_24) * 0x200;
                    }
                    uStack_14 = uVar9;
                    (****(*0x150c4 + 0x23c))(&uStack_24);
                    if (uStack_10 != 0) {
                        arg_8h = 0x1408c;
                        goto code_r0x00019bc3;
                    }
                    uVar7 = uVar9 >> 9;
                    uStack_3c = uStack_2c;
                    if (uVar7 != 0) {
                        do {
                            uVar11 = 0x140a8;
                            fcn.00022f71(0x140a8,0);
                            arg_ch = iStack_40;
                            cVar3 = fcn.000192b5(uVar11,uStack_3c);
                            if (cVar3 == '\0') break;
                            uVar8 = uVar8 + 0x200;
                            uStack_3c = uStack_3c + 1;
                        } while (uStack_3c < uVar7);
                    }
                    uVar4 = uVar4 - uVar9;
                    uVar5 = *(param_1 + 0x19e);
                    uVar9 = uStack_24 + uVar7;
                    uStack_20 = uStack_20 + CARRY4(uStack_24,uVar7);
                    uStack_24 = uVar9;
                    if (uVar9 == (uVar5 >> 9) + *(param_1 + 0x19a)) {
                        uStack_20 = 0;
                        uStack_24 = *(param_1 + 0x19a);
                    }
                }
                fcn.00022f71(0x140d4,arg_ch);
                if (*(*(param_1 + 0x238) + 0xe5) == '\x05') {
                    uVar8 = *(param_1 + 0x1a6);
                    uVar4 = 0;
                    if (uVar8 != 0) {
                        do {
                            iVar2 = *(param_1 + 0x1f8);
                            uStack_30 = *(iVar2 + 4 + uVar4 * 8);
                            if (uStack_30 != -1) {
                                uStack_30 = uStack_30 | 0x20000;
                                *(iVar2 + uVar4 * 8) = *(iVar2 + uVar4 * 8);
                                *(iVar2 + 4 + uVar4 * 8) = uStack_30;
                            }
                            uVar4 = uVar4 + 1;
                        } while (uVar4 < uVar8);
                    }
                }
                fcn.00022f71(0x140d8,arg_ch);
                uStack_1c = *(param_1 + 0x1f8);
                iStack_c = CONCAT11(iStack_c._1_1_,0x2a);
                uStack_24 = fcn.00018fa7();
                uVar8 = *(param_1 + 0x15a);
                uStack_20 = 0;
                for (; uVar8 != 0; uVar8 = uVar8 - uVar4) {
                    uVar4 = 0x10000;
                    if (uVar8 < 0x10000) {
                        uVar4 = uVar8;
                    }
                    uStack_14 = uVar4;
                    (****(*0x150c4 + 0x23c))(&uStack_24);
                    if (uStack_10 != 0) {
                        arg_8h = 0x14100;
code_r0x00019bc3:
                        fcn.00022f71(arg_8h,arg_ch);
                        fcn.00022fad();
                        goto code_r0x00019bce;
                    }
                    bVar10 = CARRY4(uStack_24,uVar4 >> 9);
                    uStack_24 = uStack_24 + (uVar4 >> 9);
                    uStack_20 = uStack_20 + bVar10;
                    uStack_1c = uStack_1c + uVar4;
                }
                fcn.00022f71(0x14084,arg_ch);
            }
            fcn.0001e001(uStack_2c);
        }
        else {
            uVar6 = 0;
        }
    }
    return uVar6;
}


/* fcn.0002006f @ 0x2006f */

uint fcn.0002006f(void)

{
    uint32_t uVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    uint32_t arg_ch;
    int32_t unaff_EDI;
    uint32_t uVar4;
    bool bVar5;
    int32_t iVar6;
    uint32_t uStack_20;
    int iStack_1c;
    int iStack_18;
    uint32_t uStack_10;
    int16_t iStack_c;
    uchar uStack_8;
    
    uVar3 = 0;
    uVar1 = *(*0x150c4 + 0x1a6) / 100;
    fcn.00022f71(0x14290,0);
    arg_ch = 0;
    if (*(*0x150c4 + 0x1a6) != 0) {
        puVar2 = *(*0x150c4 + 0x1f8) + 4;
        uVar4 = uVar1;
        do {
            bVar5 = uVar4 == 0;
            uVar4 = uVar4 - 1;
            if (bVar5) {
                uVar3 = uVar3 + 1;
                fcn.00022f71(0x14290,uVar3 & 0xffff);
                uVar4 = uVar1;
            }
            *puVar2 = arg_ch;
            puVar2 = puVar2 + 2;
            arg_ch = arg_ch + 1;
        } while (arg_ch < *(*0x150c4 + 0x1a6));
    }
    iVar6 = 0x14290;
    fcn.00022f71(0x14290,100);
    fcn.00022f71(0x140d4,iVar6);
    fcn.00022f71(0x142c0,arg_ch);
    iVar6 = *(*0x150c4 + 0x1f8);
    fcn.00020222(iVar6,arg_ch);
    fcn.00022f71(0x142ec,iVar6);
    uStack_20 = *(*0x150c4 + 0x16a);
    iStack_1c = 0;
    iStack_18 = *(*0x150c4 + 0x1f8);
    uStack_8 = 0x2a;
    uVar1 = *(*0x150c4 + 0x1a6) * 8 + 0x1ffU & 0xfffffe00;
    while( true ) {
        if (uVar1 == 0) {
            fcn.00022f71(0x14084,unaff_EDI);
            return 0;
        }
        uVar3 = 0x10000;
        if (uVar1 < 0x10000) {
            uVar3 = uVar1;
        }
        uStack_10 = uVar3;
        (****(*0x150c4 + 0x23c))(&uStack_20);
        if (iStack_c != 0) break;
        bVar5 = CARRY4(uStack_20,uVar3 >> 9);
        uStack_20 = uStack_20 + (uVar3 >> 9);
        iStack_1c = iStack_1c + bVar5;
        iStack_18 = iStack_18 + uVar3;
        uVar1 = uVar1 - uVar3;
        iStack_c = 0;
    }
    fcn.00022f71(0x14314,unaff_EDI);
    fcn.00022fad();
    return 1;
}


/* fcn.0001ff55 @ 0x1ff55 */

ushort fcn.0001ff55(void)

{
    uint *puVar1;
    uint uVar2;
    uint32_t uVar3;
    int32_t unaff_EBX;
    uint32_t uVar4;
    uint *puVar5;
    int32_t unaff_EDI;
    uint *puVar6;
    int32_t arg_8h;
    uint32_t uStack_24;
    uint uStack_20;
    uint uStack_1c;
    uint uStack_18;
    uint uStack_10;
    uchar uStack_8;
    
    fcn.00020419();
    uVar4 = 0;
    uStack_24 = 0;
    puVar5 = *(*0x150c4 + 0x1f8);
    puVar6 = *(*0x150c4 + 500);
    puVar1 = puVar5 + *(*0x150c4 + 0x1a6) * 2;
    for (; puVar5 < puVar1; puVar5 = puVar5 + 0x800) {
        uVar2 = *puVar5;
        *puVar6 = uVar2;
        *(*0x150c4 + 0x176 + uVar4 * 4) = uVar2;
        uVar3 = uVar4 + 1;
        if ((uStack_24 & 0x7ff) != 0) {
            uVar3 = uVar4;
        }
        uVar4 = uVar3 & 0xffff;
        puVar6 = puVar6 + 1;
        uStack_24 = uStack_24 + 1;
    }
    fcn.00022f71(0x14340,puVar6 - *(*0x150c4 + 500));
    for (uStack_10 = puVar6 - *(*0x150c4 + 500); (uStack_10 & 0x1fff) != 0; uStack_10 = uStack_10 + 4) {
        *puVar6 = 0xffffffff;
        puVar6 = puVar6 + 1;
    }
    fcn.00022f71(0x1436c,unaff_EDI);
    uStack_8 = 0x2a;
    uStack_18 = *(*0x150c4 + 500);
    uStack_20 = *(*0x150c4 + 0x16e);
    uStack_1c = 0;
    (****(*0x150c4 + 0x23c))(&uStack_20);
    if (uStack_10._2_2_ == 0) {
        arg_8h = 0x14084;
    }
    else {
        arg_8h = 0x14394;
    }
    fcn.00022f71(arg_8h,unaff_EBX);
    return uStack_10._2_2_;
}


/* fcn.000223dc @ 0x223dc */

void fcn.000223dc(uint16_t param_1)

{
    fcn.0002240e(param_1 << 0x14);
    return;
}


/* fcn.00018eb6 @ 0x18eb6 */

uint __fastcall fcn.00018eb6(int param_1)

{
    if (*(param_1 + 0x156) == 0) {
        return *(param_1 + 0x14e);
    }
    return *(param_1 + 0x152);
}


/* fcn.000192b5 @ 0x192b5 */

uint __thiscall fcn.000192b5(int param_1,uint32_t *param_2,uint32_t *param_3)

{
    int16_t *piVar1;
    char *pcVar2;
    char *pcVar3;
    char cVar4;
    int16_t iVar5;
    uint16_t uVar6;
    int iVar7;
    uint uVar8;
    uint16_t uVar9;
    uint32_t uVar10;
    uint32_t *puVar11;
    uint32_t uVar12;
    uint32_t uStack_1c;
    uint uStack_4;
    
    uVar12 = *param_3;
    if ((uVar12 == param_3[0x7f]) && (*(param_1 + 0x1fc) <= uVar12)) {
        uVar10 = *(param_1 + 0x1fc) + 1;
        if (uVar12 == uVar10) {
            *(param_1 + 0x1fc) = uVar10;
        }
        uVar12 = 0;
        uStack_1c = 0;
        puVar11 = param_3 + 3;
        if (param_3[1] != 0) {
            do {
                cVar4 = *puVar11;
                if (cVar4 == '\0') {
                    uVar10 = puVar11[1];
                    iVar7 = *(param_1 + 0x1f8);
                    uStack_4 = CONCAT12(*(puVar11 + 1),*(puVar11 + 2));
                    *(iVar7 + uVar10 * 8) = puVar11[2];
                    *(iVar7 + 4 + uVar10 * 8) = uStack_4;
code_r0x0001959f:
                    puVar11 = puVar11 + 3;
                }
                else if (cVar4 == '\x01') {
                    uVar10 = puVar11[1];
                    iVar7 = *(param_1 + 0x1f8);
                    pcVar2 = puVar11 + 1;
                    uStack_4._3_1_ = *(iVar7 + 4 + uVar10 * 8) >> 0x18;
                    pcVar3 = puVar11 + 2;
                    puVar11 = puVar11 + 2;
                    uStack_4 = CONCAT22(CONCAT11(uStack_4._3_1_,*pcVar2),*pcVar3);
                    *(iVar7 + uVar10 * 8) = *(iVar7 + uVar10 * 8);
                    *(iVar7 + 4 + uVar10 * 8) = uStack_4;
                }
                else {
                    if (cVar4 == '\x02') {
                        if ((*(param_1 + 0x1ba) - 1U <= puVar11[1]) && (*(param_1 + 0x1a6) != 0)) {
                            uVar10 = 0;
                            do {
                                iVar7 = *(param_1 + 0x1f8);
                                uStack_4 = *(iVar7 + 4 + uVar10 * 8) & 0xfffdffff;
                                *(iVar7 + uVar10 * 8) = *(iVar7 + uVar10 * 8);
                                *(iVar7 + 4 + uVar10 * 8) = uStack_4;
                                uVar10 = uVar10 + 1;
                            } while (uVar10 < *(param_1 + 0x1a6));
                        }
                    }
                    else {
                        if (cVar4 == '\x03') {
                            uVar9 = 0x10 - puVar11[3];
                            uVar6 = *(puVar11 + 2);
                            while (uVar6 != 0) {
                                if ((puVar11[3] == 0) && (0xf < uVar6)) {
                                    uStack_4._0_2_ = 0;
                                }
                                else {
                                    uStack_4._0_2_ = *(*(param_1 + 0x1f8) + 4 + puVar11[2] * 8);
                                    uStack_4._0_2_ =
                                         uStack_4 & ~((0xffff >> (0x10U - uVar9 & 0x1f)) << (puVar11[3] & 0x1f));
                                }
                                iVar7 = *(param_1 + 0x1f8);
                                uVar10 = puVar11[2];
                                uStack_4._0_3_ = CONCAT12(*(puVar11 + 1),uStack_4);
                                *(iVar7 + uVar10 * 8) = puVar11[1];
                                uStack_4 = uStack_4;
                                *(iVar7 + 4 + uVar10 * 8) = uStack_4;
                                *(puVar11 + 2) = *(puVar11 + 2) - uVar9;
                                puVar11[1] = puVar11[1] + 1;
                                uVar9 = *(puVar11 + 2);
                                puVar11[2] = puVar11[2] + 1;
                                *(puVar11 + 3) = '\0';
                                if (0xf < uVar9) {
                                    uVar9 = 0x10;
                                }
                                uVar6 = *(puVar11 + 2);
                            }
                            puVar11 = puVar11 + 4;
                            goto code_r0x000195a6;
                        }
                        if (cVar4 == '\x04') {
                            uVar9 = 0x10 - puVar11[2];
                            uVar6 = *(puVar11 + 2);
                            while (uVar6 != 0) {
                                iVar7 = *(param_1 + 0x1f8);
                                uVar8 = *(iVar7 + 4 + puVar11[1] * 8);
                                uStack_4._2_2_ = uVar8 >> 0x10;
                                if ((puVar11[2] == 0) && (0xf < uVar6)) {
                                    uStack_4 = uStack_4._2_2_ << 0x10;
                                }
                                else {
                                    uStack_4._0_2_ = uVar8;
                                    uStack_4 = CONCAT22(uStack_4._2_2_,
                                                        uStack_4 &
                                                        ~((0xffff >> (0x10U - uVar9 & 0x1f)) << (puVar11[2] & 0x1f)));
                                }
                                uVar10 = puVar11[1];
                                uStack_4._0_3_ = CONCAT12(*(puVar11 + 1),uStack_4);
                                *(iVar7 + uVar10 * 8) = *(iVar7 + puVar11[1] * 8);
                                *(iVar7 + 4 + uVar10 * 8) = uStack_4;
                                *(puVar11 + 2) = *(puVar11 + 2) - uVar9;
                                puVar11[1] = puVar11[1] + 1;
                                *(puVar11 + 2) = '\0';
                                uVar9 = *(puVar11 + 2);
                                if (0xf < *(puVar11 + 2)) {
                                    uVar9 = 0x10;
                                }
                                uVar6 = *(puVar11 + 2);
                            }
                            goto code_r0x0001959f;
                        }
                        if (cVar4 != '\x05') {
                            return 0;
                        }
                        iVar5 = *(puVar11 + 2);
                        while (iVar5 != 0) {
                            uVar10 = puVar11[1];
                            puVar11[1] = uVar10 + 1;
                            fcn.0001905d(uVar10);
                            piVar1 = puVar11 + 2;
                            *piVar1 = *piVar1 + -1;
                            iVar5 = *piVar1;
                        }
                    }
                    puVar11 = puVar11 + 2;
                }
code_r0x000195a6:
                uStack_1c = uStack_1c + 1;
            } while (uStack_1c < param_3[1]);
        }
        puVar11 = param_3 + 0x7f;
        if (param_3[2] != 0) {
            do {
                fcn.0001905d(puVar11[-1]);
                uVar12 = uVar12 + 1;
                puVar11 = param_2;
            } while (uVar12 < param_3[2]);
        }
        uVar8 = 1;
    }
    else {
        uVar8 = 0;
    }
    return uVar8;
}


/* fcn.000195e9 @ 0x195e9 */

uint32_t __cdecl fcn.000195e9(int32_t arg_8h,int32_t arg_ch)

{
    int16_t iVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int in_ECX;
    uchar auStack_282c [10276];
    uint32_t var_4h;
    
    iVar1 = *(in_ECX + 0xb4);
    fcn.0001f354(arg_ch,arg_8h);
    uVar2 = fcn.0001f7ae();
    if (uVar2 == 0) {
        iVar4 = fcn.0001f3eb();
        if (iVar4 == 0) {
            fcn.0001fbca(auStack_282c,0);
            uVar2 = fcn.0001fa48();
            uVar3 = uVar2;
            if ((uVar2 != 0) && (var_4h == '\0')) {
code_r0x0001974e:
                *(arg_ch + 0x16) = uVar3;
                *(arg_ch + 0x14) = 5;
                return CONCAT31(uVar3 >> 8,1);
            }
            goto code_r0x0001962e;
        }
        if (iVar4 != 1) {
            if (iVar4 != 2) {
                uVar3 = iVar4 - 3;
                if (uVar3 != 0) goto code_r0x0001962e;
                fcn.0001fbca(auStack_282c,1);
                uVar2 = fcn.0001f612(iVar1);
                if (uVar2 == 0) {
                    return iVar1 != 3;
                }
                goto code_r0x00019623;
            }
            fcn.0001fbca(auStack_282c,1);
            uVar2 = fcn.0001f543();
            uVar3 = uVar2;
            if (uVar2 == 0) {
                *(arg_ch + 0x14) = 0;
                uVar3 = *(arg_ch + 0x10);
                *(arg_ch + 0xc) = uVar3;
                goto code_r0x00019644;
            }
            if (var_4h != '\0') goto code_r0x0001962e;
            goto code_r0x00019639;
        }
        fcn.0001fbca(auStack_282c,0);
        uVar2 = fcn.0001fa58();
        uVar3 = uVar2;
        if (uVar2 == 0) goto code_r0x0001962e;
        if (iVar1 != 3) goto code_r0x0001974e;
    }
    else {
code_r0x00019623:
        uVar3 = uVar2;
        if (iVar1 != 3) {
code_r0x00019639:
            *(arg_ch + 0x14) = 5;
            *(arg_ch + 0x16) = uVar3;
code_r0x00019644:
            return CONCAT31(uVar3 >> 8,1);
        }
    }
    *(in_ECX + 0x1b2) = *(in_ECX + 0x1b2) + 1;
code_r0x0001962e:
    return uVar3 & 0xffffff00;
}


/* fcn.0001fafb @ 0x1fafb */

void __cdecl fcn.0001fafb(uint32_t arg_8h)

{
    int32_t *in_ECX;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_10h;
    int8_t var_8h;
    
    if ((arg_8h != '\0') || (in_ECX[3] != 0)) {
        var_18h = in_ECX[1];
        var_1ch = 0;
        var_20h = *in_ECX;
        var_10h = 0x200;
        var_8h = 0x2a;
        (****(*0x150c4 + 0x23c))(&var_20h);
        in_ECX[3] = 0;
    }
    return;
}


/* fcn.00018e32 @ 0x18e32 */

uint __cdecl fcn.00018e32(int32_t arg_8h,int32_t arg_ch)

{
    int16_t iVar1;
    int iVar2;
    uint32_t uVar3;
    int32_t *piVar4;
    bool bVar5;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_10h;
    
    uVar3 = *(arg_ch + 0x10);
    piVar4 = &var_20h;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar4 = *arg_ch;
        arg_ch = arg_ch + 4;
        piVar4 = piVar4 + 1;
    }
    while( true ) {
        if (uVar3 == 0) {
            return 1;
        }
        var_10h = uVar3;
        if (0x400000 < uVar3) {
            var_10h = 0x400000;
        }
        fcn.0001f354();
        iVar1 = fcn.0001f7ae();
        if ((iVar1 != 0) || (iVar1 = fcn.0001f4a7(), iVar1 != 0)) break;
        uVar3 = uVar3 - var_10h;
        var_18h = var_18h + var_10h;
        bVar5 = CARRY4(var_20h,var_10h >> 9);
        var_20h = var_20h + (var_10h >> 9);
        var_1ch = var_1ch + bVar5;
    }
    return 0;
}


/* fcn.0002065d @ 0x2065d */

ulong __fastcall fcn.0002065d(int param_1)

{
    return *(param_1 + 0x20);
}


/* fcn.00020467 @ 0x20467 */

void __thiscall fcn.00020467(uint *param_1,uint param_2)

{
    *param_1 = param_2;
    *(param_1 + 1) = 0;
    return;
}


/* fcn.0001a431 @ 0x1a431 */

char __thiscall fcn.0001a431(int param_1,uchar *param_2)

{
    uint32_t uVar1;
    char cVar2;
    char cVar3;
    uint16_t uVar4;
    
    cVar3 = '\0';
    uVar4 = 0;
    if (*(param_1 + 0x24) != '\0') {
        do {
            uVar1 = *(*(param_1 + 0x68 + uVar4 * 8) + 0xb0);
            cVar2 = cVar3 + '\x01';
            if ((uVar1 & 0x1000014) == 0x10) {
                cVar2 = cVar3;
            }
            cVar3 = cVar2;
            if ((uVar1 & 0x1000010) == 0x1000010) {
                *param_2 = 1;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(param_1 + 0x24));
    }
    return cVar3;
}


/* fcn.0001a3ab @ 0x1a3ab */

int32_t __fastcall fcn.0001a3ab(int param_1)

{
    uint32_t uVar1;
    char cVar2;
    int32_t iVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    int32_t var_4h;
    
    var_4h = 0;
    uVar5 = *(param_1 + 0x24) << 8;
    iVar3 = 0;
    if (*(param_1 + 0x24) != 0) {
        do {
            cVar2 = fcn.000175af();
            if (cVar2 != '\0') {
                var_4h = *(param_1 + 0x68 + (uVar5 & 0xff) * 8);
                *(param_1 + 0x54) = uVar5;
                cVar2 = fcn.00017597();
                if (cVar2 == '\0') break;
            }
            uVar4 = uVar5 + 1;
            uVar1 = uVar5 >> 8;
            uVar5 = CONCAT31(uVar5 >> 8,uVar4);
        } while (uVar4 < uVar1);
        iVar3 = var_4h;
    }
    return iVar3;
}


/* fcn.0001aa51 @ 0x1aa51 */

void __thiscall fcn.0001aa51(int param_1,uint param_2,uint param_3)

{
    char cVar1;
    
    cVar1 = fcn.0001a8fe(param_2,param_3);
    if (cVar1 != '\0') {
        if (*(param_1 + 0x4c) != 2) {
            *(param_1 + 0x4c) = 2;
        }
    }
    return;
}


/* fcn.0001a8fe @ 0x1a8fe */

uint32_t __thiscall fcn.0001a8fe(int param_1,uint32_t param_2,uint16_t param_3)

{
    uint32_t in_EAX;
    uint32_t uVar1;
    
    if ((((*(param_1 + 0xc) == 1) && ((*(param_1 + 0x38) != 1 || (in_EAX = *(param_1 + 0x50), in_EAX != param_2)))) ||
        (*(param_1 + 0x4b) == '\0')) || (*(param_1 + 0x4c) == 1)) {
        uVar1 = in_EAX & 0xffffff00;
    }
    else {
        uVar1 = param_3 != *(*(param_1 + 0x18) + 0xe4);
    }
    return uVar1;
}


/* fcn.00017768 @ 0x17768 */

void __thiscall fcn.00017768(int param_1,int param_2,uchar param_3,uint *param_4)

{
    uint uVar1;
    uint uVar2;
    uint extraout_ECX;
    ulong uVar3;
    
    *(param_1 + 0x10) = param_2;
    *(param_1 + 0x18) = *(param_2 + 0x18);
    *(param_1 + 0x1c) = *(param_2 + 0x1c);
    *(param_1 + 0x104) = param_3;
    *(param_1 + 0xe8) = 0;
    *(param_1 + 0x2b) = 0;
    *(param_1 + 0x118) = param_4[4];
    *(param_1 + 0x11c) = param_4[2];
    uVar1 = *param_4;
    uVar2 = param_4[1];
    *(param_1 + 0x110) = uVar1;
    *(param_1 + 0x114) = uVar2;
    uVar3 = fcn.00023cc0(uVar1,uVar2,*(param_2 + 0x4c),0);
    *(param_1 + 0x108) = extraout_ECX;
    *(param_1 + 0x10c) = 0;
    uVar3 = fcn.00023c80(*(param_2 + 0x50),0,uVar3);
    *(param_1 + 0x20) = uVar3;
    return;
}


/* fcn.0001a67c @ 0x1a67c */

uint __fastcall fcn.0001a67c(int param_1)

{
    int iVar1;
    uchar uVar2;
    
    iVar1 = *(param_1 + 0x10);
    uVar2 = 1;
    if ((*(iVar1 + 0x20) != 4) && ((*(param_1 + 0xc) != 1 || (iVar1 = *(param_1 + 0x14), *(iVar1 + 0x20) != 4)))) {
        uVar2 = 0;
    }
    return CONCAT31(iVar1 >> 8,uVar2);
}


/* fcn.000176a5 @ 0x176a5 */

void __fastcall fcn.000176a5(int param_1)

{
    int *piVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    if (*(param_1 + 0xe8) != 0) {
        piVar1 = param_1 + 0xec;
        *piVar1 = *piVar1 - *(param_1 + 0xf8);
        if ((*piVar1 != 0) && (*(param_1 + 0x2a) == '\0')) {
            uVar4 = *(param_1 + 0xf8) >> 9;
            puVar2 = param_1 + 0xf0;
            uVar3 = *puVar2;
            *puVar2 = *puVar2 + uVar4;
            *(param_1 + 0xf4) = *(param_1 + 0xf4) + CARRY4(uVar3,uVar4);
            *(param_1 + 0x108) = *(param_1 + 0xf0);
            *(param_1 + 0x2b) = 0;
            *(param_1 + 0x11c) = 0;
            *(param_1 + 0x10c) = *(param_1 + 0xf4);
            *(param_1 + 0xf8) = *(param_1 + 0xec);
            *(param_1 + 0x118) = *(param_1 + 0xec);
            return;
        }
        *(param_1 + 0xe8) = 0;
    }
    return;
}


/* fcn.00023d60 @ 0x23d60 */

int64_t __fastcall fcn.00023d60(uint8_t param_1,int param_2)

{
    uint32_t in_EAX;
    
    if (0x3f < param_1) {
        return 0;
    }
    if (param_1 < 0x20) {
        return CONCAT44(param_2 << (param_1 & 0x1f) | in_EAX >> 0x20 - (param_1 & 0x1f),in_EAX << (param_1 & 0x1f));
    }
    return (in_EAX << (param_1 & 0x1f)) << 0x20;
}


/* fcn.0001a517 @ 0x1a517 */

int64_t __thiscall fcn.0001a517(uint32_t param_1,uint param_2,uint param_3)

{
    uint32_t uVar1;
    uint32_t extraout_ECX;
    ulong uVar2;
    int64_t iVar3;
    int iVar4;
    
    uVar2 = fcn.0001a623(param_2,param_3);
    iVar4 = uVar2;
    iVar3 = fcn.00023c80(uVar2,*(param_1 + 0x24),0);
    uVar2 = fcn.00023cc0(iVar3 + (param_1 & 0xff),*(param_1 + 0x5c),0);
    *(iVar4 + 0x60) = extraout_ECX & 0xffff;
    uVar1 = fcn.0001a654(param_2,param_3);
    iVar3 = fcn.0001a34c(uVar2);
    return iVar3 + uVar1;
}


/* fcn.0001a623 @ 0x1a623 */

void __thiscall fcn.0001a623(int param_1,uint param_2,uint param_3)

{
    if (*(param_1 + 0x42) == 0) {
        fcn.00023c10(param_2,param_3,*(param_1 + 0x40),0);
    }
    else {
        fcn.00023e00();
    }
    return;
}


/* fcn.0001a654 @ 0x1a654 */

uint32_t __thiscall fcn.0001a654(int param_1,uint32_t param_2,uint param_3)

{
    if (*(param_1 + 0x42) == 0) {
        param_2 = fcn.00023d80(param_2,param_3,*(param_1 + 0x40),0);
    }
    else {
        param_2 = *(param_1 + 0x44) & param_2;
    }
    return param_2;
}


/* fcn.0001a34c @ 0x1a34c */

void __thiscall fcn.0001a34c(int param_1,uint param_2,uint param_3)

{
    if (*(param_1 + 0x42) == 0) {
        fcn.00023c80(*(param_1 + 0x40),0,param_2,param_3);
    }
    else {
        fcn.00023d60();
    }
    return;
}


/* fcn.00023e00 @ 0x23e00 */

uint64_t __fastcall fcn.00023e00(uint8_t param_1,uint32_t param_2)

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


/* fcn.00023d80 @ 0x23d80 */

ulong fcn.00023d80(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    bool bVar10;
    
    if (param_4 == 0) {
        iVar6 = (param_2 % param_3 << 0x20 | param_1) % param_3;
        iVar7 = 0;
    }
    else {
        uVar4 = param_1;
        uVar5 = param_4;
        uVar8 = param_2;
        uVar9 = param_3;
        do {
            uVar3 = uVar5 & 1;
            uVar5 = uVar5 >> 1;
            uVar9 = uVar9 >> 1 | (uVar3 != 0) << 0x1f;
            uVar3 = uVar8 & 1;
            uVar8 = uVar8 >> 1;
            uVar4 = uVar4 >> 1 | (uVar3 != 0) << 0x1f;
        } while (uVar5 != 0);
        uVar1 = CONCAT44(uVar8,uVar4) / uVar9;
        uVar4 = uVar1 * param_4;
        iVar2 = (uVar1 & 0xffffffff) * param_3;
        uVar8 = iVar2 >> 0x20;
        uVar5 = iVar2;
        uVar9 = uVar8 + uVar4;
        if (((CARRY4(uVar8,uVar4)) || (param_2 < uVar9)) || ((param_2 <= uVar9 && (param_1 < uVar5)))) {
            bVar10 = uVar5 < param_3;
            uVar5 = uVar5 - param_3;
            uVar9 = (uVar9 - param_4) - bVar10;
        }
        iVar6 = -(uVar5 - param_1);
        iVar7 = -(uVar5 - param_1 != 0) - ((uVar9 - param_2) - (uVar5 < param_1));
    }
    return CONCAT44(iVar7,iVar6);
}


/* fcn.00017282 @ 0x17282 */

void __thiscall fcn.00017282(int param_1,char param_2)

{
    if (param_2 == '\0') {
        *(param_1 + 0xb0) = *(param_1 + 0xb0) & 0xfffffffb;
        *(param_1 + 0xa4) = 0;
    }
    else {
        *(param_1 + 0xb0) = *(param_1 + 0xb0) | 4;
    }
    fcn.000173ad();
    return;
}


/* fcn.00017e0d @ 0x17e0d */

void __thiscall fcn.00017e0d(int param_1,uint32_t param_2)

{
    uint uVar1;
    uint32_t uVar2;
    
    if (*(param_1 + 0xe8) == 0) {
        *(param_1 + 0xf0) = *(param_1 + 0x108);
        *(param_1 + 0xf4) = *(param_1 + 0x10c);
        uVar1 = *(param_1 + 0x11c);
        *(param_1 + 0x11c) = 0;
        *(param_1 + 0xe8) = 1;
        *(param_1 + 0xec) = *(param_1 + 0x118);
        *(param_1 + 0xfc) = uVar1;
        *(param_1 + 0x100) = *(param_1 + 0x118);
    }
    uVar2 = *(param_1 + 0xec);
    if (param_2 < *(param_1 + 0xec)) {
        uVar2 = param_2;
    }
    *(param_1 + 0xf8) = uVar2;
    *(param_1 + 0x118) = uVar2;
    return;
}


/* fcn.0001771b @ 0x1771b */

void __fastcall fcn.0001771b(int param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    if ((*(param_1 + 0xe8) != 0) && (*(param_1 + 0x11c) == 0)) {
        uVar1 = *(param_1 + 0x100);
        *(param_1 + 0x11c) = *(param_1 + 0xfc);
        uVar2 = *(param_1 + 0xf8);
        if (uVar1 < *(param_1 + 0xf8)) {
            uVar2 = uVar1;
        }
        *(param_1 + 0x118) = uVar2;
        *(param_1 + 0x100) = uVar1 - uVar2;
        *(param_1 + 0xfc) = *(param_1 + 0xfc) + uVar2;
        return;
    }
    return;
}


/* fcn.0001ae1f @ 0x1ae1f */

uint * __thiscall fcn.0001ae1f(uint param_1,int param_2)

{
    int iVar1;
    uint *puVar2;
    
    iVar1 = *(param_2 + 8);
    if (iVar1 == 1) {
code_r0x0001ae49:
        iVar1 = fcn.00016e92(0xa8);
        if (iVar1 != 0) {
            puVar2 = fcn.0002070c(param_1,param_2);
            goto code_r0x0001ae9b;
        }
    }
    else {
        if (iVar1 != 2) {
            if (iVar1 == 4) {
                iVar1 = fcn.00016e92(0xa8);
                if (iVar1 != 0) {
                    puVar2 = fcn.0001e144(param_1,param_2);
                    goto code_r0x0001ae9b;
                }
                goto code_r0x0001ae99;
            }
            if ((iVar1 != 8) && (iVar1 != 0x10)) {
                if (iVar1 != 0x20) {
                    return NULL;
                }
                goto code_r0x0001ae49;
            }
        }
        iVar1 = fcn.00016e92(0xa8);
        if (iVar1 != 0) {
            puVar2 = fcn.00020893(param_1,param_2);
            goto code_r0x0001ae9b;
        }
    }
code_r0x0001ae99:
    puVar2 = NULL;
code_r0x0001ae9b:
    if (puVar2 != NULL) {
        (***puVar2)();
        if ((*(param_2 + 4) < 2) && (puVar2[2] == 3)) {
            *(puVar2 + 0x15) = *(param_2 + 0x31);
        }
        return puVar2;
    }
    return NULL;
}


/* fcn.0001a0d4 @ 0x1a0d4 */

//WARNING: Variable defined which should be unmapped: var_1h

uchar __fastcall fcn.0001a0d4(int param_1)

{
    uint8_t uVar1;
    char cVar2;
    uint16_t uVar3;
    int iVar4;
    uint32_t var_1h;
    
    uVar1 = fcn.0001a431(&var_1h);
    if (*(param_1 + 0x20) == 8) {
        if (uVar1 < 2) {
            iVar4 = fcn.0001a3ab();
            if (iVar4 == 0) {
                return 1;
            }
            cVar2 = fcn.00017597();
            if (cVar2 == '\0') {
                return 1;
            }
        }
    }
    else if (uVar1 == 0) {
        if (*(*(*(*(*(param_1 + 0x10) + 0xb4) + 0x30) + 0x20) + 8) != 0x10) {
            return 1;
        }
        uVar3 = fcn.0001ba41();
        if ((uVar3 & 0xff) == 3) {
            return 1;
        }
        if ((uVar3 & 0xff) == 1) {
            return 1;
        }
        if (((*(*(*(param_1 + 0x10) + 0xb4) + 0x28) >> 0xb & 1) == 0) && ((uVar3 & 0xff00) != 0x200)) {
            return 1;
        }
    }
    return 0;
}


/* fcn.0001a240 @ 0x1a240 */

void __thiscall fcn.0001a240(int *param_1,int param_2,int param_3)

{
    char *pcVar1;
    char cVar2;
    int iVar3;
    bool bVar4;
    char cVar5;
    
    *(param_2 + 0xc) = param_3;
    *(param_2 + 0x2b) = 0;
    fcn.00017768(param_1,*(param_3 + 0x18),param_3);
    iVar3 = param_1[3];
    cVar2 = *(iVar3 + 0x4a);
    if ((*(param_3 + 0x18) == '*') && (cVar2 == '\0')) {
        cVar5 = fcn.0001a67c();
        if ((cVar5 != '\0') && (param_1[2] < 2)) {
            *(iVar3 + 0x4a) = 1;
            bVar4 = true;
            (****(*(param_1[4] + 0xb8) + 0x38))(1);
            goto code_r0x0001a2aa;
        }
    }
    bVar4 = false;
code_r0x0001a2aa:
    do {
        if (*(param_3 + 0x18) == '(') {
            (**(*param_1 + 4))();
        }
        else {
            pcVar1 = *(param_1[3] + 0x18) + 0xdd;
            *pcVar1 = *pcVar1 + '\x01';
            (**(*param_1 + 8))(param_2);
            pcVar1 = *(param_1[3] + 0x18) + 0xdd;
            *pcVar1 = *pcVar1 + -1;
        }
        fcn.000176a5();
    } while (*(param_2 + 0xe8) != 0);
    if (bVar4) {
        *(param_1[3] + 0x4a) = cVar2;
        (****(*(param_1[4] + 0xb8) + 0x38))(1);
    }
    return;
}


/* fcn.0001bbcc @ 0x1bbcc */

void fcn.0001bbcc(int param_1,ushort param_2,ushort param_3)

{
    *(param_1 + 0x16) = param_3;
    *(param_1 + 0x14) = param_2;
    *(param_1 + 0xc) = *(param_1 + 0x10);
    return;
}


/* fcn.0001ba85 @ 0x1ba85 */

uint __fastcall fcn.0001ba85(int param_1)

{
    return *(*(param_1 + 0xc4) + 0xc);
}


/* fcn.0001b9c0 @ 0x1b9c0 */

void __thiscall fcn.0001b9c0(int param_1,int *param_2)

{
    int iVar1;
    int *unaff_ESI;
    
    iVar1 = *(*(*(param_1 + 0xc4) + 0x10) + 0x48) * 2;
    *param_2 = iVar1;
    iVar1 = fcn.00023c10(*(param_1 + 200),*(param_1 + 0xcc),iVar1,0);
    *unaff_ESI = iVar1;
    if ((*(param_1 + 0xcc) != 0) || (*param_2 * iVar1 < *(param_1 + 200))) {
        *unaff_ESI = iVar1 + 1;
    }
    return;
}


/* fcn.0001b3fb @ 0x1b3fb */

uint32_t __fastcall fcn.0001b3fb(int param_1)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    
    iVar1 = *(*(*(param_1 + 0x30) + 0x30) + 0x20);
    iVar3 = *(iVar1 + 0x18) * *(iVar1 + 0x28) * 2;
    iVar4 = fcn.00021122(iVar3);
    uVar2 = *(iVar1 + 0x10);
    uVar6 = uVar2 + 0x108 + iVar3;
    uVar5 = fcn.0001b4d1();
    if (uVar5 < uVar6 + iVar4) {
        uVar6 = -iVar4 - 8U & uVar2;
    }
    return uVar6;
}


/* fcn.0002113a @ 0x2113a */

void __thiscall fcn.0002113a(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
    param_1[5] = 0xffffffff;
    param_1[6] = 0;
    param_1[2] = param_2;
    *param_1 = param_3;
    param_1[7] = param_4;
    param_1[8] = param_5;
    param_1[3] = 0x1bc68;
    *(param_1 + 4) = 1;
    return;
}


/* fcn.0002116e @ 0x2116e */

void __thiscall fcn.0002116e(int param_1,uint32_t param_2,uint32_t param_3)

{
    int16_t iVar1;
    uint32_t uVar2;
    uint32_t unaff_EDI;
    
    uVar2 = param_2 / *(param_1 + 8);
    if (uVar2 <= ((param_2 - 1) + (param_3 >> 9)) / *(param_1 + 8)) {
        do {
            *(param_1 + 0x24) = uVar2 >> 0xc;
            if (uVar2 >> 0xc != *(param_1 + 0x14)) {
                if (*(param_1 + 0x18) != 0) {
                    fcn.00021281(0x1bc68,*(param_1 + 0x1c),*(param_1 + 0x20) + *(param_1 + 0x14),0x200);
                }
                fcn.0002124b(0x1bc68,*(param_1 + 0x1c),*(param_1 + 0x20) + *(param_1 + 0x24),0x200);
                *(param_1 + 0x18) = 0;
                *(param_1 + 0x14) = *(param_1 + 0x24);
            }
            iVar1 = fcn.000210df(0,uVar2 >> 3 & 0x1ff,uVar2 & 7,1);
            if (iVar1 == 0) {
                *(param_1 + 0x18) = *(param_1 + 0x18) + 1;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 <= unaff_EDI);
    }
    if (*(param_1 + 0x18) != 0) {
        fcn.00021281(0x1bc68,*(param_1 + 0x1c),*(param_1 + 0x20) + *(param_1 + 0x14),0x200);
        *(param_1 + 0x18) = 0;
    }
    return;
}


/* fcn.0001b44e @ 0x1b44e */

uint __fastcall fcn.0001b44e(int param_1)

{
    int iVar1;
    int iVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    
    *(param_1 + 8) = 0;
    uVar4 = 0;
    if (*(param_1 + 0x2c) != 0) {
        do {
            iVar1 = **(param_1 + 0x30 + uVar4 * 4);
            iVar2 = *(iVar1 + 0xc4);
            if (*(iVar2 + 0xc) == 1) {
                iVar1 = *(iVar1 + 0xc0);
                if (iVar1 == 0) {
code_r0x0001b4c9:
                    *(param_1 + 8) = 5;
                    return 5;
                }
                if (iVar1 == 1) {
                    if ((*(*(iVar2 + 0x14) + 8) < 2) && (*(iVar2 + 0x3c) != 0)) {
                        *(param_1 + 8) = 6;
                    }
                    else {
                        *(param_1 + 8) = 2;
                    }
                    return *(param_1 + 8);
                }
                if (iVar1 == 2) goto code_r0x0001b4c9;
                if (iVar1 == 3) {
                    *(param_1 + 8) = 1;
                    return 1;
                }
                if (iVar1 == 4) goto code_r0x0001b4c9;
            }
            uVar3 = uVar4 + 1;
            uVar4 = uVar3;
        } while (uVar3 < *(param_1 + 0x2c));
    }
    return 0;
}


/* fcn.0001703e @ 0x1703e */

ulong __fastcall fcn.0001703e(int param_1)

{
    return CONCAT44(*(param_1 + 0x7c) + -1 + (*(param_1 + 0x78) != 0),*(param_1 + 0x78) + -1);
}


/* fcn.000186ba @ 0x186ba */

void __cdecl
fcn.000186ba(uint32_t arg_8h,uint32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h,int32_t arg_1ch)

{
    int in_ECX;
    int32_t var_40h;
    
    if ((*(arg_8h + 0xb0) >> 3 & 1) == 0) {
        *(in_ECX + 0x20) = 5;
        *(in_ECX + 0x22) = 4;
    }
    else {
        fcn.000173ea();
        fcn.000173f8(arg_8h,arg_ch,arg_10h,arg_14h,arg_18h,arg_1ch);
        fcn.0001d0ce(arg_8h,&var_40h);
        fcn.000175c4();
    }
    return;
}


/* fcn.00020f3c @ 0x20f3c */

uint __thiscall fcn.00020f3c(int param_1,int param_2)

{
    uint32_t uVar1;
    int iVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    
    uVar4 = *(param_2 + 0x24) << 8;
    if (*(param_2 + 0x24) != 0) {
        do {
            if (((*(*(param_2 + 0x68 + (uVar4 & 0xff) * 8) + 0xb0) >> 4 & 1) != 0) &&
               (iVar2 = fcn.00023e00(), iVar2 != 0)) {
                return 0;
            }
            uVar3 = uVar4 + 1;
            uVar1 = uVar4 >> 8;
            uVar4 = CONCAT31(uVar4 >> 8,uVar3);
        } while (uVar3 < uVar1);
    }
    *(param_1 + 0x34) = 0;
    *(param_1 + 0x38) = 0;
    *(param_1 + 0x30) = 0;
    return 1;
}


/* fcn.00020f91 @ 0x20f91 */

void __thiscall fcn.00020f91(int param_1,int param_2)

{
    int *piVar1;
    uint32_t arg_8h;
    uint8_t uVar2;
    uint32_t uVar3;
    uint32_t arg_10h;
    int iVar4;
    uint unaff_EBP;
    uint32_t arg_10h_00;
    int32_t unaff_ESI;
    uint32_t uVar5;
    int arg_14h;
    bool bVar6;
    int16_t iVar7;
    uchar *arg_1ch;
    uint uVar8;
    uchar auStack_200 [512];
    
    arg_14h = *(param_1 + 0x34);
    iVar4 = *(param_1 + 0x14) * 0x200;
    arg_10h_00 = *(param_1 + 0x18);
    arg_10h = *(param_1 + 0x1c);
    uVar5 = *(param_2 + 0x10);
    if (iVar4 != 0) {
        iVar4 = (iVar4 - 1U >> 9) + 1;
        do {
            uVar3 = arg_10h;
            if (*(uVar5 + 0x24) != '\0') {
                uVar2 = 0;
                do {
                    arg_8h = *(uVar5 + 0x68 + uVar2 * 8);
                    uVar8 = 0x200;
                    uVar3 = arg_8h;
                    uVar5 = arg_10h_00;
                    iVar4 = arg_14h;
                    fcn.000186ba(arg_8h,0x28,arg_10h_00,arg_14h,0x200,auStack_200);
                    fcn.00016ccb(unaff_EBP,uVar8);
                    arg_1ch = &stack0xfffffde8;
                    uVar8 = 0x200;
                    fcn.000186ba(arg_8h,0x2a,arg_10h,unaff_ESI,0x200,arg_1ch);
                    iVar7 = arg_1ch;
                    fcn.00016ccb(uVar5,uVar8);
                    uVar2 = uVar8 + 1;
                } while (iVar7 != 1);
            }
            bVar6 = 0xfffffffe < arg_10h_00;
            arg_10h_00 = arg_10h_00 + 1;
            arg_14h = arg_14h + bVar6;
            arg_10h = uVar3 + 1;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
    }
    if (*(param_1 + 0xc) == 0) {
        *(param_1 + 4) = *(param_1 + 4) + -1;
        if (*(param_1 + 4) == -1) {
            *(param_1 + 0x30) = *(param_1 + 0x30) + -1;
        }
    }
    else {
        piVar1 = param_1 + 4;
        *piVar1 = *piVar1 + 1;
        if (*piVar1 == 0) {
            *(param_1 + 0x30) = *(param_1 + 0x30) + 1;
        }
    }
    return;
}


/* fcn.00016ccb @ 0x16ccb */

void fcn.00016ccb(int param_1,uint param_2)

{
    if ((*(*0x155ec + 0x20) != 0) && (fcn.0001a1ab(param_2), (*(param_1 + 0x20) & 0x21) != 0)) {
        fcn.0001a311(0xff);
    }
    return;
}


/* fcn.0001a194 @ 0x1a194 */

void __thiscall fcn.0001a194(uint32_t param_1,int32_t param_2)

{
    fcn.0002245a(param_1,0xa8,param_2,0xa8);
    return;
}


/* fcn.0001aec2 @ 0x1aec2 */

void __thiscall fcn.0001aec2(int param_1,uint param_2)

{
    *(param_1 + 0x30) = 0;
    *(param_1 + 0x34) = 0;
    *(param_1 + 0xc) = 1;
    *(param_1 + 0x28) = 1;
    *(param_1 + 0x38) = param_2;
    *(*(param_1 + 0x18) + 0xc0) = param_2;
    *(*(param_1 + 0x10) + 8) = 0;
    return;
}


/* fcn.0001aaf1 @ 0x1aaf1 */

void __fastcall fcn.0001aaf1(int param_1)

{
    uint32_t *puVar1;
    uint8_t uVar2;
    char cVar3;
    int iVar4;
    uint32_t uVar5;
    uint8_t uVar6;
    uint unaff_EBX;
    int unaff_EDI;
    ulong uVar7;
    int32_t arg_18h;
    uchar *puVar8;
    int iVar9;
    char cVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    int arg_18h_00;
    uchar auStack_200 [512];
    
    iVar4 = fcn.0001b44e();
    if (*(param_1 + 0xc) != 0) {
        if ((*(param_1 + 0x38) == 3) || (iVar4 == 6)) {
            uVar6 = 0;
            while( true ) {
                uVar2 = *(*(param_1 + 0x10) + 0x24);
                if (uVar2 < 3) {
                    uVar5 = uVar2;
                }
                else {
                    uVar5 = 2;
                }
                if (uVar5 <= uVar6) break;
                uVar5 = *(*(param_1 + 0x10) + 0x68 + uVar6 * 8);
                if ((*(uVar5 + 0xb0) >> 3 & 1) != 0) {
                    puVar8 = &stack0xfffffe00;
                    arg_18h_00 = 0x200;
                    uVar7 = fcn.0001703e();
                    uVar12 = 0x28;
                    uVar11 = uVar5;
                    fcn.000186ba(uVar5,0x28,uVar7,uVar7 >> 0x20,arg_18h_00,puVar8);
                    cVar10 = uVar11;
                    if (*(*0x155ec + 0x20) == 0) {
                        iVar9 = 0x1abe4;
                        cVar3 = fcn.00020f3c(*(param_1 + 0x10));
                        if (iVar4 == 6) {
                            if (cVar3 == '\0') {
                                *(param_1 + 0x30) = *(&stack0xfffffde4 + *(param_1 + 0x3c) * 8);
                                *(param_1 + 0x34) = *(&stack0xfffffde8 + *(param_1 + 0x3c) * 8);
                            }
                            else {
                                *(param_1 + 0x30) = *(&stack0xfffffde4 + *(param_1 + 0x3c) * 4);
                                *(param_1 + 0x34) = 0;
                            }
                            uVar7 = fcn.00023c80(*(*(param_1 + 0x10) + 0x55),0,*(*(param_1 + 0x10) + 0x40),0);
                            uVar7 = fcn.00023c80(uVar7,*(param_1 + 0x30),*(param_1 + 0x34));
                            *(param_1 + 0x20) = uVar7;
                            *(param_1 + 0x28) = 1;
                            return;
                        }
                        if (((unaff_EDI == *(*(*(*(param_1 + 0x18) + 0xb8) + 0x38) + 0x10)) ||
                            (unaff_EDI == -0x54301127)) && (arg_18h_00 == 1)) {
                            iVar9 = param_1;
                            fcn.00020f91();
                            puVar8 = &stack0xfffffde0;
                            arg_18h = 0x200;
                            uVar7 = fcn.0001703e();
                            fcn.000186ba(uVar5,0x2a,uVar7,uVar7 >> 0x20,arg_18h,puVar8);
                            fcn.00016ccb(*(param_1 + 0x10),arg_18h);
                        }
                        *(param_1 + 0x30) = iVar9;
                        *(param_1 + 0x34) = unaff_EBX;
                        *(param_1 + 0x28) = cVar10;
                        uVar7 = fcn.00023c80(uVar12,0,iVar9,unaff_EBX);
                        *(param_1 + 0x20) = uVar7;
                        if (cVar10 == '\0') {
                            puVar1 = param_1 + 0x20;
                            uVar5 = *puVar1;
                            *puVar1 = *puVar1 + uVar12;
                            *(param_1 + 0x24) = *(param_1 + 0x24) + CARRY4(uVar5,uVar12);
                            return;
                        }
                        return;
                    }
                }
                uVar6 = uVar6 + 1;
            }
            fcn.0001a311();
        }
        else {
            iVar4 = *(param_1 + 0x10);
            uVar7 = fcn.00023c80(*(iVar4 + 0x55));
            uVar7 = fcn.00023c80(uVar7,*(param_1 + 0x30),*(param_1 + 0x34));
            *(param_1 + 0x20) = uVar7;
            *(param_1 + 0x28) = 1;
            if (*(iVar4 + 8) < 2) {
                return;
            }
            if (*(param_1 + 0x38) != 0) {
                return;
            }
        }
        *(param_1 + 0xc) = 0;
    }
    return;
}


/* fcn.00020c43 @ 0x20c43 */

void __thiscall fcn.00020c43(int *param_1,int param_2,int param_3,int param_4)

{
    int iVar1;
    uint32_t uVar2;
    
    param_1[2] = param_3;
    param_1[3] = param_4;
    *param_1 = param_2;
    iVar1 = *(*(param_2 + 0x10) + 0x68);
    param_1[1] = iVar1;
    uVar2 = *(iVar1 + 0xb0);
    if (((uVar2 >> 3 & 1) == 0) || ((uVar2 >> 2 & 1) != 0)) {
        param_1[1] = *(*(param_2 + 0x10) + 0x70);
    }
    return;
}


/* fcn.00020cb1 @ 0x20cb1 */

//WARNING: Removing unreachable block (ram,0x00020cf8)
//WARNING: Removing unreachable block (ram,0x00020d02)
//WARNING: Removing unreachable block (ram,0x00020d3f)
//WARNING: Removing unreachable block (ram,0x00020f0c)
//WARNING: Removing unreachable block (ram,0x00020d5a)
//WARNING: Removing unreachable block (ram,0x00020d80)
//WARNING: Removing unreachable block (ram,0x00020f01)
//WARNING: Removing unreachable block (ram,0x00020f0f)
//WARNING: Removing unreachable block (ram,0x00020d9b)
//WARNING: Removing unreachable block (ram,0x00020dbb)
//WARNING: Removing unreachable block (ram,0x00020dc0)
//WARNING: Removing unreachable block (ram,0x00020de7)
//WARNING: Removing unreachable block (ram,0x00020df0)
//WARNING: Removing unreachable block (ram,0x00020df4)
//WARNING: Removing unreachable block (ram,0x00020e1e)
//WARNING: Removing unreachable block (ram,0x00020e54)
//WARNING: Removing unreachable block (ram,0x00020efe)
//WARNING: Removing unreachable block (ram,0x00020f16)
//WARNING: Removing unreachable block (ram,0x00020ea3)
//WARNING: Removing unreachable block (ram,0x00020ec0)
//WARNING: Removing unreachable block (ram,0x00020ec4)
//WARNING: Removing unreachable block (ram,0x00020ed0)
//WARNING: Removing unreachable block (ram,0x00020f1d)

void fcn.00020cb1(void)

{
    uint in_stack_fffffdb4;
    uint in_stack_fffffdbc;
    
    fcn.0001e0fe();
    fcn.0001e0fe();
    fcn.0001e001(in_stack_fffffdb4);
    fcn.0001e001(in_stack_fffffdbc);
    return;
}


/* fcn.0001bbeb @ 0x1bbeb */

void __thiscall fcn.0001bbeb(int param_1,char param_2)

{
    uint32_t *puVar1;
    
    if (param_2 == '\0') {
        puVar1 = *(param_1 + 0xb4) + 0x28;
        *puVar1 = *puVar1 & 0xffffffef;
    }
    else {
        puVar1 = *(param_1 + 0xb4) + 0x28;
        *puVar1 = *puVar1 | 0x10;
    }
    return;
}


/* fcn.0001a6d3 @ 0x1a6d3 */

void __cdecl fcn.0001a6d3(int32_t arg_8h)

{
    int32_t iVar1;
    uint *in_ECX;
    uint8_t uVar2;
    
    iVar1 = arg_8h;
    fcn.00017282(1);
    uVar2 = 0;
    arg_8h = arg_8h & 0xffffff00;
    if (*(in_ECX + 9) != 0) {
        do {
            if (in_ECX[uVar2 * 2 + 0x1a] == iVar1) {
                fcn.0001a1ab(arg_8h);
                break;
            }
            uVar2 = uVar2 + 1;
            arg_8h = CONCAT31(arg_8h._1_3_,uVar2);
        } while (uVar2 < *(in_ECX + 9));
    }
    (***in_ECX)();
    return;
}


/* fcn.0002070c @ 0x2070c */

uint * __thiscall
fcn.0002070c(uint *param_1,int32_t param_2,uint param_3,uint param_4,uint param_5,int32_t param_6,int32_t param_7
            ,int8_t param_8,int32_t param_9)

{
    uint unaff_ESI;
    int32_t unaff_retaddr;
    int16_t iStack00000004;
    
    fcn.00019f5b(_iStack00000004,param_3,unaff_ESI,unaff_retaddr,iStack00000004,param_6,param_7,param_8,param_9)
    ;
    param_1[0x16] = 0;
    *(param_1 + 0x55) = *(param_1 + 9);
    *param_1 = 0x1439c;
    return param_1;
}


/* fcn.00019f5b @ 0x19f5b */

void __cdecl
fcn.00019f5b(int32_t arg_8h,int noname_1,uint noname_2,int32_t arg_14h,int16_t arg_18h,int32_t arg_28h,
            int32_t arg_2ch,int8_t arg_30h,int32_t arg_34h)

{
    char cVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    int iVar4;
    uint *in_ECX;
    uint32_t uVar5;
    char unaff_BL;
    uint8_t uVar6;
    ulong uVar7;
    int32_t var_4h;
    
    in_ECX[3] = arg_8h;
    *in_ECX = 0x141c4;
    in_ECX[4] = *(arg_8h + 0x18);
    in_ECX[8] = *(noname_1 + 8);
    *(in_ECX + 0x17) = *(noname_1 + 0x30);
    in_ECX[2] = *(noname_1 + 4);
    in_ECX[10] = *(noname_1 + 0x18) << 9;
    uVar7 = fcn.0002065d();
    *(in_ECX + 0xe) = uVar7;
    *(in_ECX + 9) = *(noname_1 + 0xc);
    in_ECX[0xc] = *(noname_1 + 0x28);
    in_ECX[0xd] = *(noname_1 + 0x2c);
    in_ECX[6] = *(noname_1 + 0x10);
    in_ECX[7] = *(noname_1 + 0x14);
    *(in_ECX + 0x15) = *(noname_1 + 0x31);
    uVar5 = 0;
    if (*(in_ECX + 9) != '\0') {
        do {
            iVar4 = fcn.0001c295(*(noname_1 + 0x34 + uVar5 * 4) + 9);
            if (iVar4 == 0) {
                return;
            }
            fcn.00020467();
            cVar1 = fcn.00017597();
            if ((cVar1 != '\0') ||
               (((in_ECX[2] == 2 && (unaff_BL == *(in_ECX + 0x15))) || (*(uVar5 + 0x4c + noname_1) != '\0')))) {
                *(in_ECX + uVar5 * 2 + 0x1b) = 1;
                fcn.0001a1ab();
            }
            arg_8h._0_1_ = iVar4;
            uVar5 = arg_8h + 1U;
        } while (arg_8h + 1U < *(in_ECX + 9));
    }
    iVar4 = in_ECX[8];
    if (iVar4 < 1) {
code_r0x0001a064:
        in_ECX[0xb] = 0;
        goto code_r0x0001a067;
    }
    if (iVar4 < 3) {
code_r0x0001a0b8:
        uVar5 = *(in_ECX + 9);
    }
    else {
        if (iVar4 != 4) {
            if (((iVar4 != 8) && (iVar4 != 0x10)) && (iVar4 != 0x20)) goto code_r0x0001a064;
            goto code_r0x0001a0b8;
        }
        uVar5 = *(in_ECX + 9) - 1;
    }
    in_ECX[0xb] = uVar5 * in_ECX[10];
code_r0x0001a067:
    *(in_ECX + 0x25) = *(in_ECX + 9) + -1;
    uVar5 = in_ECX[10] >> 9;
    in_ECX[0x12] = in_ECX[0xb] >> 9;
    in_ECX[0x13] = in_ECX[0xb] >> 9;
    in_ECX[0x14] = uVar5 & 0xffff;
    uVar3 = uVar5;
    *(in_ECX + 0x11) = uVar3 - 1;
    *(in_ECX + 0x10) = uVar3;
    if ((uVar3 - 1 & uVar3) == 0) {
        uVar5 = uVar5 & 0xffff;
        uVar2 = 0;
        do {
            uVar3 = uVar2;
            uVar2 = uVar5 >> 1;
            uVar5 = uVar2;
            if (uVar2 == 0) break;
            uVar6 = uVar3 + 1;
            uVar3 = uVar6;
            uVar2 = uVar6;
        } while (uVar6 < 0x20);
    }
    else {
        uVar3 = 0;
    }
    *(in_ECX + 0x42) = uVar3;
    return;
}


/* fcn.0001e144 @ 0x1e144 */

uint * __thiscall fcn.0001e144(uint *param_1,uint param_2,uint param_3)

{
    fcn.0002070c(param_2,param_3);
    *(param_1 + 0x55) = *(param_1 + 0x25);
    *param_1 = 0x14240;
    param_1[0x16] = 1;
    param_1[0x13] = param_1[0x13] * *(param_1 + 9);
    param_1[0x14] = param_1[0x14] * *(param_1 + 9);
    return param_1;
}


/* fcn.00020893 @ 0x20893 */

uint * __thiscall
fcn.00020893(uint *param_1,int32_t param_2,uint param_3,uint param_4,uint param_5,int32_t param_6,int32_t param_7
            ,int8_t param_8,int32_t param_9)

{
    uint unaff_ESI;
    int32_t unaff_retaddr;
    int16_t iStack00000004;
    
    fcn.00019f5b(_iStack00000004,param_3,unaff_ESI,unaff_retaddr,iStack00000004,param_6,param_7,param_8,param_9)
    ;
    param_1[0x16] = 0;
    *param_1 = 0x143b0;
    param_1[0x14] = *(param_1 + 0x17) * param_1[0x14];
    *(param_1 + 0x66) = *(param_1 + 9) != *(param_1 + 0x17);
    *(param_1 + 0x19) = 0;
    *(param_1 + 0x55) = *(param_1 + 9);
    return param_1;
}


/* fcn.0001a938 @ 0x1a938 */

void __thiscall fcn.0001a938(int param_1,int param_2,uint32_t *param_3)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t *puVar5;
    uint32_t uVar6;
    uint32_t *puVar7;
    uint32_t auStack_20 [8];
    
    uVar1 = *param_3;
    uVar3 = (param_3[4] >> 9) - 1;
    uVar6 = param_3[1] + CARRY4(uVar3,uVar1);
    if (((*(param_1 + 0x24) < uVar6) || ((*(param_1 + 0x24) <= uVar6 && (*(param_1 + 0x20) <= uVar3 + uVar1)))) &&
       ((param_3[1] < *(param_1 + 0x24) || ((param_3[1] == *(param_1 + 0x24) && (uVar1 < *(param_1 + 0x20))))))) {
        iVar2 = *(param_1 + 0x20);
        uVar1 = *param_3;
        puVar5 = param_3;
        puVar7 = auStack_20;
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
        }
        param_3[4] = (iVar2 - uVar1) * 0x200;
        fcn.0001a240(param_2,param_3);
        if (*(param_2 + 0x2a) == '\0') {
            auStack_20[2] = auStack_20[2] - param_3[4];
            auStack_20[0] = auStack_20[0] + param_3[4];
            fcn.0001a240(param_2,&stack0xffffffd8);
        }
        param_3[4] = param_3[4] + auStack_20[0];
    }
    else {
        fcn.0001a240(param_2,param_3);
    }
    return;
}


/* fcn.0001aa05 @ 0x1aa05 */

void fcn.0001aa05(int param_1)

{
    fcn.0001bbcc(*(param_1 + 0xc),*(param_1 + 0x2a),*(param_1 + 0x28),param_1);
    return;
}


/* fcn.00021318 @ 0x21318 */

uint * __fastcall fcn.00021318(uint *param_1)

{
    uint unaff_retaddr;
    
    fcn.0001d8e9(0x1400);
    param_1[0xb] = unaff_retaddr;
    *param_1 = 0x143c4;
    param_1[1] = *(*(*0x155ec + 0x18) + 4);
    return param_1;
}


/* fcn.0001d8e9 @ 0x1d8e9 */

uint * __thiscall fcn.0001d8e9(uint *param_1,uint param_2)

{
    *param_1 = 0x14254;
    param_1[3] = param_2;
    fcn.0001d98a();
    return param_1;
}


/* fcn.0001d98a @ 0x1d98a */

void __fastcall fcn.0001d98a(int param_1)

{
    *(param_1 + 0x10) = 0;
    *(param_1 + 0x14) = 0;
    *(param_1 + 0x28) = 0;
    *(param_1 + 0x1c) = 0;
    *(param_1 + 0x18) = 0;
    *(param_1 + 0x20) = 0;
    *(param_1 + 0x24) = 0;
    return;
}


/* fcn.0001b50a @ 0x1b50a */

void __fastcall fcn.0001b50a(int param_1)

{
    int iVar1;
    uint *puVar2;
    
    *(param_1 + 0xc) = 0;
    puVar2 = param_1 + 0x10;
    for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
    }
    *(param_1 + 0x2c) = 0;
    *(param_1 + 0x30) = 0;
    *(param_1 + 0x34) = 0;
    iVar1 = *(param_1 + 0x38);
    *(param_1 + 0x50) = 0;
    *(param_1 + 0xa8) = 0;
    *(param_1 + 0x40) = 0;
    *(param_1 + 0x44) = 0;
    *(param_1 + 0x48) = 0;
    *(iVar1 + 0x10) = 0;
    *(iVar1 + 0x14) = 0;
    *(iVar1 + 0x28) = 0;
    *(iVar1 + 0x1c) = 0;
    *(iVar1 + 0x18) = 0;
    *(iVar1 + 0x20) = 0;
    *(iVar1 + 0x24) = 0;
    return;
}


/* fcn.0001d44e @ 0x1d44e */

void __thiscall fcn.0001d44e(int param_1,int param_2)

{
    if (param_2 == 0) {
        *(param_1 + 0x1c) = 0;
        fcn.00016c6c();
    }
    else {
        fcn.00016ca7(2);
        fcn.00016c6c(1);
        *(param_1 + 0x1c) = param_2;
    }
    return;
}


/* fcn.0001b0d1 @ 0x1b0d1 */

//WARNING: Removing unreachable block (ram,0x0001b18b)
//WARNING: Removing unreachable block (ram,0x0001b20f)

void __fastcall fcn.0001b0d1(int param_1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uint32_t uStack_1c;
    uint32_t uStack_10;
    uint32_t uStack_8;
    uint32_t uStack_4;
    
    fcn.0001b69f();
    uStack_10 = 0;
    *(param_1 + 0x50) = 0;
    uVar9 = fcn.0001b4d1();
    if (uVar9 == 0) {
        if (*(param_1 + 0xa8) == '\0') {
            return;
        }
        iVar6 = (*(param_1 + 0xa8) - 1) * 0x18;
        uVar2 = *(iVar6 + 0xc0 + param_1);
        puVar1 = iVar6 + 0xb8 + param_1;
        uVar9 = CONCAT44(*(iVar6 + 0xc4 + param_1) + *(iVar6 + 0xbc + param_1) + CARRY4(uVar2,*puVar1),uVar2 + *puVar1
                        );
    }
    uStack_4 = 0;
    uStack_8 = 0;
    if (*(param_1 + 0xa8) != '\0') {
        do {
            iVar6 = uStack_10 * 0x18;
            uVar2 = *(iVar6 + 0xb8 + param_1);
            uVar3 = *(iVar6 + 0xbc + param_1);
            uVar7 = *(iVar6 + 0xc0 + param_1);
            uVar8 = uVar7 + uVar2;
            uVar7 = *(iVar6 + 0xc4 + param_1) + uVar3 + CARRY4(uVar7,uVar2);
            uVar4 = CONCAT44(uVar7,uVar8);
            if (uVar4 <= uVar9) {
                if (uVar9 == uVar4) break;
                if (((uStack_4 < uVar3) || ((uStack_4 <= uVar3 && (uStack_8 <= uVar2)))) &&
                   ((uVar2 != uStack_8 || (uVar3 != uStack_4)))) {
                    if (3 < *(param_1 + 0x50)) break;
                    *(param_1 + 0x50) = *(param_1 + 0x50) + '\x01';
                    uStack_4 = (uVar3 - uStack_4) - (uVar2 < uStack_8);
                    fcn.000212b7();
                    uStack_8 = uStack_1c;
                }
                else {
                    uStack_4 = uVar7;
                    uStack_8 = uVar8;
                }
            }
            uVar5 = uStack_10 + 1;
            uStack_10 = uVar5;
        } while (uVar5 < *(param_1 + 0xa8));
    }
    if ((*(param_1 + 0x50) < 5) && (CONCAT44(uStack_4,uStack_8) < uVar9)) {
        *(param_1 + 0x50) = *(param_1 + 0x50) + '\x01';
        fcn.000212b7(uStack_8,uStack_4,uVar9 - CONCAT44(uStack_4,uStack_8));
    }
    return;
}


/* fcn.0001b28d @ 0x1b28d */

int * __thiscall
fcn.0001b28d(int param_1,int param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5,uint32_t param_6)

{
    int iVar1;
    uint32_t uVar2;
    int *piVar3;
    int *piVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    int iVar7;
    
    piVar3 = NULL;
    if (*(param_1 + 0xa8) != 0) {
        piVar4 = piVar3;
        uVar6 = *(param_1 + 0xa8) << 8;
        do {
            iVar7 = (uVar6 & 0xff) * 0x18;
            uVar2 = *(iVar7 + 0xbc + param_1);
            if ((uVar2 <= param_6) && ((uVar2 < param_6 || (*(iVar7 + 0xb8 + param_1) < param_5)))) {
                iVar1 = iVar7 + param_1;
                uVar2 = *(iVar1 + 0xc4) + *(iVar1 + 0xbc) + CARRY4(*(iVar1 + 0xc0),*(iVar1 + 0xb8));
                if ((param_4 < uVar2) || ((param_4 <= uVar2 && (param_3 < *(iVar1 + 0xc0) + *(iVar1 + 0xb8))))) {
                    return iVar1 + 0xb0;
                }
            }
            piVar3 = param_1 + 0xb0 + iVar7;
            if (*piVar3 != param_2) {
                piVar3 = piVar4;
            }
            uVar5 = uVar6 + 1;
            uVar2 = uVar6 >> 8;
            piVar4 = piVar3;
            uVar6 = CONCAT31(uVar6 >> 8,uVar5);
        } while (uVar5 < uVar2);
    }
    return piVar3;
}


/* fcn.000212f9 @ 0x212f9 */

void __thiscall fcn.000212f9(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
    *(param_1 + 8) = param_2;
    *(param_1 + 0xc) = param_3;
    *(param_1 + 0x10) = param_4;
    *(param_1 + 0x14) = param_5;
    return;
}


/* fcn.0001b621 @ 0x1b621 */

void __cdecl fcn.0001b621(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h)

{
    int in_ECX;
    
    if (*(in_ECX + 0xa8) < 4) {
        *(in_ECX + 0xa8) = *(in_ECX + 0xa8) + 1;
        fcn.000212d5(arg_8h,arg_ch,arg_10h,arg_14h,arg_18h);
    }
    return;
}


/* fcn.000212d5 @ 0x212d5 */

void __cdecl fcn.000212d5(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h)

{
    int32_t *in_ECX;
    
    *in_ECX = arg_8h;
    in_ECX[2] = arg_ch;
    in_ECX[3] = arg_10h;
    in_ECX[4] = arg_14h;
    in_ECX[5] = arg_18h;
    return;
}


/* fcn.0001b69f @ 0x1b69f */

void __fastcall fcn.0001b69f(int param_1)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    uint8_t uVar4;
    uint *puVar5;
    uint8_t uVar6;
    uint8_t uVar8;
    uint32_t uVar7;
    uint32_t *puVar9;
    uint *puVar10;
    uint32_t uVar11;
    uint *puVar12;
    uint auStack_18 [6];
    
    uVar8 = *(param_1 + 0xa8);
    if ((1 < uVar8) && (uVar8 != 1 && -1 < uVar8 - 1)) {
        uVar11 = 0;
        do {
            uVar4 = uVar11;
            uVar6 = uVar4 + 1;
            uVar7 = CONCAT11(uVar4,uVar6);
            if (uVar6 < uVar8) {
                puVar9 = param_1 + 0xb8 + (uVar7 & 0xff) * 0x18;
                do {
                    iVar2 = (uVar7 >> 8) * 0x18;
                    uVar1 = *(iVar2 + 0xbc + param_1);
                    if ((puVar9[1] <= uVar1) && ((uVar1 != puVar9[1] || (*puVar9 < *(iVar2 + 0xb8 + param_1))))) {
                        uVar7 = CONCAT11(uVar6,uVar7);
                    }
                    uVar6 = uVar6 + 1;
                    puVar9 = puVar9 + 6;
                } while (uVar6 < uVar8);
                uVar8 = uVar7 >> 8;
                if (uVar8 != uVar4) {
                    puVar5 = param_1 + 0xb0 + uVar11 * 0x18;
                    iVar3 = uVar8 * 0x18;
                    puVar10 = puVar5;
                    puVar12 = auStack_18;
                    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
                        *puVar12 = *puVar10;
                        puVar10 = puVar10 + 1;
                        puVar12 = puVar12 + 1;
                    }
                    puVar10 = param_1 + 0xb0 + iVar3;
                    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
                        *puVar5 = *puVar10;
                        puVar10 = puVar10 + 1;
                        puVar5 = puVar5 + 1;
                    }
                    puVar10 = auStack_18;
                    puVar5 = param_1 + 0xb0 + iVar3;
                    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
                        *puVar5 = *puVar10;
                        puVar10 = puVar10 + 1;
                        puVar5 = puVar5 + 1;
                    }
                }
            }
            uVar8 = *(param_1 + 0xa8);
            uVar11 = uVar7 & 0xff;
        } while (uVar11 < uVar8 - 1);
    }
    return;
}


/* fcn.0001b4d1 @ 0x1b4d1 */

int64_t fcn.0001b4d1(void)

{
    int64_t iVar1;
    
    iVar1 = fcn.0001b318();
    return iVar1 + -0x1a1;
}


/* fcn.0001b318 @ 0x1b318 */

ulong fcn.0001b318(void)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int8_t var_1h;
    
    uVar4 = 0xffffffff;
    uVar5 = 0xffffffff;
    while (iVar3 = fcn.0001b661(), iVar3 != 0) {
        uVar1 = *(*(iVar3 + 0x20) + 0x78);
        uVar2 = *(*(iVar3 + 0x20) + 0x7c);
        if (((uVar1 != 0 || uVar2 != 0) && (uVar2 <= uVar5)) && ((uVar2 < uVar5 || (uVar1 < uVar4)))) {
            uVar4 = uVar1;
            uVar5 = uVar2;
        }
    }
    return CONCAT44(uVar5,uVar4);
}


/* fcn.000212b7 @ 0x212b7 */

void __thiscall fcn.000212b7(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
    return;
}


/* fcn.0001d3fb @ 0x1d3fb */

void fcn.0001d3fb(void)

{
    fcn.00016ca7(4);
    return;
}


/* fcn.0001adfa @ 0x1adfa */

void __thiscall fcn.0001adfa(int param_1,int32_t param_2)

{
    int32_t unaff_retaddr;
    
    fcn.0001a6d3(param_2);
    if (*(param_1 + 0xc) == 1) {
        fcn.0001a6d3(unaff_retaddr);
    }
    return;
}


/* fcn.0001b661 @ 0x1b661 */

uint __thiscall fcn.0001b661(int param_1,uint8_t *param_2)

{
    uint8_t uVar1;
    uint uVar2;
    
    uVar1 = *param_2;
    if (uVar1 < *(param_1 + 0xc)) {
        uVar2 = *(param_1 + 0x10 + uVar1 * 4);
        *param_2 = uVar1 + 1;
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001bf0b @ 0x1bf0b */

uint __thiscall fcn.0001bf0b(int param_1,int param_2)

{
    int iVar1;
    uint uVar2;
    
    iVar1 = *(param_1 + 0x30);
    if ((*(iVar1 + 4) == 0) || (param_2 == 0)) {
        uVar2 = *(iVar1 + 0x20);
    }
    else {
        uVar2 = *(iVar1 + 0x24);
    }
    return uVar2;
}


/* fcn.00021122 @ 0x21122 */

int fcn.00021122(int param_1)

{
    return ((param_1 + 0xffU >> 8) + 0x7fff >> 0xf) << 3;
}


/* fcn.0001bbba @ 0x1bbba */

void __fastcall fcn.0001bbba(int param_1)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iVar8;
    ulong uVar9;
    
    *(param_1 + 0xda) = 1;
    iVar2 = *(param_1 + 0xc4);
    fcn.0001aaf1();
    iVar1 = *(iVar2 + 0x10);
    iVar8 = iVar1;
    if (*(iVar2 + 0xc) != 0) {
        iVar8 = *(iVar2 + 0x14);
    }
    if ((1 < *(iVar2 + 0x4a)) &&
       (((*(iVar1 + 0x20) == 4 && (*(iVar1 + 8) == 2)) || ((*(iVar8 + 0x20) == 4 && (*(iVar8 + 8) == 2)))))) {
        uVar3 = *(iVar8 + 0x40);
        iVar4 = fcn.00023c80(uVar3,0,*(iVar8 + 0x30),*(iVar8 + 0x34));
        uVar7 = iVar4 + *(iVar8 + 0x18);
        uVar9 = fcn.00023c80(*(iVar1 + 0x40),0,*(iVar1 + 0x30),*(iVar1 + 0x34));
        uVar5 = uVar9 + *(iVar1 + 0x18);
        uVar6 = (uVar9 >> 0x20) + *(iVar1 + 0x1c) + CARRY4(uVar9,*(iVar1 + 0x18));
        if ((uVar3 < uVar6) || ((uVar3 <= uVar6 && (uVar7 <= uVar5)))) {
            uVar3 = uVar6;
            uVar7 = uVar5;
        }
        fcn.00020c43(iVar2,uVar7,uVar3);
        fcn.00020cb1();
    }
    if (*(iVar2 + 0x4a) != '\0') {
        fcn.0001bbeb(1);
    }
    return;
}


/* fcn.0001a71c @ 0x1a71c */

void __fastcall fcn.0001a71c(uint *param_1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    
    if (param_1[2] == 3) {
        uVar2 = 0;
        if (*(param_1 + 9) != '\0') {
            do {
                uVar1 = uVar2;
                if (((((*(param_1[uVar1 * 2 + 0x1a] + 0xb0) >> 2 & 1) == 0) &&
                     ((*(param_1[uVar1 * 2 + 0x1a] + 0xb0) >> 4 & 1) != 0)) && (*(param_1 + uVar1 * 2 + 0x1b) != '\0'))
                   && (((*(param_1 + 8) & 0x21) != 0 || (*(param_1 + 0x15) != uVar2)))) {
                    *(param_1 + uVar1 * 2 + 0x1b) = 0;
                    fcn.00016c6c(0x40);
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < *(param_1 + 9));
        }
        param_1[2] = 0;
        *(param_1[3] + 0x4a) = 0;
        (***param_1)();
        if (param_1[2] != 3) {
            (****(*(*(param_1[3] + 0x18) + 0xb8) + 0x38))(1);
        }
    }
    return;
}


/* fcn.0001be7b @ 0x1be7b */

//WARNING: Possible PIC construction at 0x0001be82: Changing call to branch
//WARNING: Removing unreachable block (ram,0x0001be87)
//WARNING: Removing unreachable block (ram,0x0001be8b)
//WARNING: Removing unreachable block (ram,0x0001be92)
//WARNING: Removing unreachable block (ram,0x0001be90)

int __fastcall fcn.0001be7b(int param_1)

{
    uint8_t uVar1;
    int iVar2;
    int iVar3;
    uint8_t uVar4;
    
    iVar2 = *(*(param_1 + 0x30) + 0x20);
    uVar1 = *(iVar2 + 0xc);
    uVar4 = 0;
    if (uVar1 != 0) {
        do {
            iVar3 = *(*(iVar2 + 0x34 + uVar4 * 4) + 0x1c);
            if (iVar3 != 0) {
                return iVar3;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
    }
    return 0;
}


/* fcn.0001bdc8 @ 0x1bdc8 */

void __thiscall fcn.0001bdc8(int param_1,int param_2)

{
    if (*(*(*(param_1 + 0x30) + 0x20) + 8) == 0x10) {
        fcn.0001b882(param_1 + 0x34,param_1 + 0x38);
        *(param_1 + 0x3c) = *(param_2 + 0xe4);
    }
    **(param_1 + 0x30) = param_1;
    fcn.00021a76(*(param_2 + 0xc4));
    return;
}


/* fcn.00021a76 @ 0x21a76 */

void __thiscall fcn.00021a76(int param_1,int param_2)

{
    char cVar1;
    uint uVar2;
    ulong uVar3;
    
    *(param_1 + 4) = *(param_2 + 0xc);
    *(param_1 + 8) = *(param_2 + 0x38);
    *(param_1 + 0xc) = *(param_2 + 0x4a);
    uVar3 = fcn.0001aa22();
    *(param_1 + 0x10) = uVar3;
    uVar2 = *(param_2 + 0x3c);
    *(param_1 + 0x2c) = 0;
    *(param_1 + 0x18) = uVar2;
    cVar1 = *(param_2 + 0x4b);
    *(param_1 + 0x28) = cVar1;
    if (cVar1 != '\0') {
        *(param_1 + 0x2c) = *(param_2 + 0x4c);
    }
    fcn.00020572(*(param_2 + 0x10));
    **(param_1 + 0x20) = param_1;
    if (*(param_1 + 4) != 0) {
        fcn.00020572(*(param_2 + 0x14));
        **(param_1 + 0x24) = param_1;
    }
    return;
}


/* fcn.0001c19b @ 0x1c19b */

void __fastcall fcn.0001c19b(uint *param_1)

{
    int iVar1;
    
    fcn.0001bdc8(*param_1);
    iVar1 = param_1[0xc];
    fcn.000206b9(param_1);
    if (*(iVar1 + 4) != 0) {
        fcn.000206b9(param_1);
    }
    return;
}


/* fcn.000206b9 @ 0x206b9 */

void __thiscall fcn.000206b9(int param_1,uint param_2)

{
    int iVar1;
    
    fcn.0001afd3(param_2,*(param_1 + 0x10),*(param_1 + 0x14),*(param_1 + 0x20),*(param_1 + 0x24));
    *(param_1 + 0x33) = 0;
    while( true ) {
        iVar1 = fcn.000206a1();
        if (iVar1 == 0) break;
        if (((*(*(iVar1 + 0x20) + 0xb0) >> 1 & 1) == 0) || (*(iVar1 + 0x1c) == 0)) {
            fcn.0001af59();
        }
    }
    return;
}


/* fcn.0001ba8f @ 0x1ba8f */

void fcn.0001ba8f(void)

{
    int iVar1;
    int iVar2;
    
    iVar1 = fcn.0001aa29(1);
    iVar2 = fcn.0001aa29(0);
    fcn.0001aa29(iVar2 < iVar1);
    return;
}


/* fcn.0001aa29 @ 0x1aa29 */

uint __thiscall fcn.0001aa29(int param_1,int param_2)

{
    int iVar1;
    
    iVar1 = fcn.0001ba85();
    if ((iVar1 == 0) || (param_2 == 0)) {
        iVar1 = *(param_1 + 0x10);
    }
    else {
        iVar1 = *(param_1 + 0x14);
    }
    return *(iVar1 + 8);
}


/* fcn.0001a7e0 @ 0x1a7e0 */

int __thiscall fcn.0001a7e0(int param_1,uint param_2,int param_3,int param_4)

{
    char cVar1;
    int iVar2;
    uint uVar3;
    
    fcn.0001d303();
    *(param_1 + 0x18) = param_2;
    *(param_1 + 0x42) = 0;
    *(param_1 + 0x46) = 0x20;
    *(param_1 + 0x48) = 0x20;
    *(param_1 + 0x4a) = *(param_3 + 0xc);
    *(param_1 + 0x30) = *(param_3 + 0x10);
    *(param_1 + 0x34) = *(param_3 + 0x14);
    *(param_1 + 0x3c) = *(param_3 + 0x18);
    *(param_1 + 0xc) = *(param_3 + 4);
    *(param_1 + 0x38) = *(param_3 + 8);
    if (*(param_3 + 0x28) == '\0') {
        *(param_1 + 0x4c) = 0;
        *(param_1 + 0x4b) = 0;
    }
    else {
        *(param_1 + 0x4b) = 1;
        *(param_1 + 0x4c) = *(param_3 + 0x2c);
    }
    if (param_4 == 0) {
        uVar3 = *(param_3 + 0x20);
    }
    else {
        uVar3 = *(param_3 + 0x24);
    }
    iVar2 = fcn.0001ae1f(uVar3);
    *(param_1 + 0x10) = iVar2;
    if (iVar2 != 0) {
        *(param_1 + 0x40) = 1 << (*(iVar2 + 0x58) & 0x1f);
        if (*(param_1 + 0xc) == 0) {
            iVar2 = fcn.0001ae1f(uVar3);
            *(param_1 + 0x14) = iVar2;
            if (iVar2 == 0) {
                return param_1;
            }
        }
        else {
            iVar2 = fcn.0001ae1f(*(param_3 + 0x24));
            *(param_1 + 0x14) = iVar2;
            if (iVar2 == 0) {
                return param_1;
            }
            *(param_1 + 0x40) = *(param_1 + 0x40) | 1 << (*(iVar2 + 0x58) & 0x1f);
        }
        if (*(param_1 + 0xc) == 1) {
            if ((*(*(param_1 + 0x14) + 8) == 3) && (*(*(param_1 + 0x10) + 8) != 3)) {
                *(*(param_1 + 0x10) + 8) = 3;
                *(*(param_1 + 0x10) + 0x54) = *(*(param_1 + 0x14) + 0x54);
            }
            if (((*(param_1 + 0xc) == 1) &&
                (((*(param_1 + 0x38) == 1 || (*(param_1 + 0x38) == 0)) && (*(*(param_1 + 0x10) + 8) == 2)))) &&
               (cVar1 = fcn.0001a0d4(), cVar1 == '\0')) {
                *(param_1 + 0xc) = 0;
            }
        }
    }
    return param_1;
}


/* fcn.00018ffd @ 0x18ffd */

void __fastcall fcn.00018ffd(int param_1)

{
    *(param_1 + 0x1ba) = *(param_1 + 0x1ba) + 1;
    return;
}


/* fcn.00019c19 @ 0x19c19 */

uint32_t __thiscall fcn.00019c19(int param_1,uint32_t param_2,uint32_t *param_3)

{
    uint32_t uVar1;
    char cVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    char cVar8;
    int16_t iVar9;
    uint32_t *puVar10;
    uint32_t *puVar11;
    char unaff_retaddr;
    uint32_t uStack_20;
    uint16_t uStack_1a;
    uint32_t uStack_18;
    int16_t iStack_14;
    ushort uStack_12;
    uint32_t uStack_10;
    
    uVar3 = fcn.00018d4d();
    if ((uVar3 == '\0') || (uVar3 = param_2, param_2 != *(param_1 + 0x238))) {
        return uVar3 & 0xffffff00;
    }
    uVar3 = param_3[4];
    iVar9 = 0;
    do {
        iVar6 = iVar9;
        uVar5 = *(param_1 + 0x208 + iVar6 * 0x10);
        uVar7 = *(param_1 + 0x20c + iVar6 * 0x10);
        if ((uVar7 <= param_3[1]) && ((param_3[1] != uVar7 || (uVar5 <= *param_3)))) {
            uVar1 = *(param_1 + (iVar6 + 0x21) * 0x10);
            uVar7 = uVar7 + CARRY4(uVar1,uVar5);
            uVar4 = param_3[1] + CARRY4(uVar3 >> 9,*param_3);
            if ((uVar4 < uVar7) || ((uVar4 <= uVar7 && ((uVar3 >> 9) + *param_3 <= uVar1 + uVar5)))) {
                if (param_3[6] == '*') {
                    uVar4 = fcn.0001fafb(0);
                }
                goto code_r0x00019d01;
            }
        }
        iVar9 = iVar9 + 1;
    } while (iVar9 < 3);
    puVar10 = param_3;
    puVar11 = &uStack_20;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
    }
    cVar8 = '\x01';
    if (uVar3 != 0) {
        do {
            uStack_10 = uVar3;
            if (0x400000 < uVar3) {
                uStack_10 = 0x400000;
            }
            cVar2 = fcn.000195e9(param_2,&uStack_20);
            if ((unaff_retaddr == '\0') || (cVar2 == '\0')) {
                cVar8 = '\0';
            }
            else {
                cVar8 = '\x01';
            }
            if (cVar2 == '\0') {
                uVar4 = fcn.00018e32(param_2,param_3);
                if (uVar4 != '\0') {
code_r0x00019d01:
                    return uVar4 & 0xffffff00;
                }
                *(param_3 + 5) = 5;
                uVar5 = uStack_1a;
                *(param_3 + 0x16) = uStack_1a;
code_r0x00019d7f:
                return CONCAT31(uVar5 >> 8,1);
            }
            uVar5 = 0;
            if (iStack_14 == 5) {
                *(param_3 + 5) = 5;
                *(param_3 + 0x16) = uStack_12;
                goto code_r0x00019d7f;
            }
            uStack_20 = uStack_20 + uStack_18;
            uVar3 = uVar3 - uStack_18;
            uVar5 = uStack_18 >> 9;
            unaff_retaddr = cVar8;
        } while (uVar3 != 0);
        if (cVar8 == '\0') goto code_r0x00019d47;
    }
    uVar5 = 0;
    param_3[5] = 0;
    param_3[3] = param_3[4];
code_r0x00019d47:
    return CONCAT31(uVar5 >> 8,cVar8);
}


/* fcn.0001aeef @ 0x1aeef */

void __thiscall fcn.0001aeef(int param_1,uint param_2)

{
    int iVar1;
    
    iVar1 = *0x155ec + 0x1938;
    if (*(param_1 + 0xc) == 0) {
        fcn.0001a240();
    }
    else {
        fcn.0001a938(iVar1,param_2);
    }
    fcn.0001aa05(iVar1);
    return;
}


/* fcn.00021811 @ 0x21811 */

void __thiscall fcn.00021811(int param_1,ushort param_2,ushort param_3,uint param_4)

{
    *(param_1 + 0x14) = param_2;
    *(param_1 + 0x16) = param_3;
    *(param_1 + 0xc) = param_4;
    return;
}


/* fcn.0002197b @ 0x2197b */

int __fastcall fcn.0002197b(int param_1)

{
    int iVar1;
    uint uVar2;
    uint uVar3;
    
    iVar1 = fcn.00016e92(0x58);
    uVar3 = 0;
    if (iVar1 == 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = fcn.00020474();
    }
    *(param_1 + 0x20) = uVar2;
    iVar1 = fcn.00016e92(0x58);
    if (iVar1 != 0) {
        uVar3 = fcn.00020474();
    }
    *(param_1 + 0x24) = uVar3;
    fcn.00021b15();
    return param_1;
}


/* fcn.00021931 @ 0x21931 */

char __thiscall fcn.00021931(int param_1,uint32_t param_2)

{
    char cVar1;
    
    cVar1 = *(param_1 + 0xf);
    if (cVar1 == '\0') {
        cVar1 = '\x01';
        if (*(param_1 + 0x10) == '\x01') {
            cVar1 = ' ';
        }
    }
    else if (cVar1 == '\x01') {
        if (*(param_1 + 0x10) < 4) {
            cVar1 = (-((param_2 & 0x400) != 0) & 0xeU) + 2;
        }
        else {
            cVar1 = '\b';
        }
    }
    else if (cVar1 == '\x05') {
        cVar1 = '\x04';
    }
    else {
        cVar1 = '\0';
    }
    return cVar1;
}


/* fcn.0001be9b @ 0x1be9b */

void __thiscall fcn.0001be9b(uint *param_1,uint param_2)

{
    int iVar1;
    uint unaff_retaddr;
    
    *param_1 = 0;
    param_1[7] = 0;
    param_1[10] = 0xc;
    *(param_1 + 0xb) = 0;
    iVar1 = param_1[0xc];
    *(iVar1 + 4) = 0;
    *(iVar1 + 8) = 0;
    *(iVar1 + 0xc) = 0;
    *(iVar1 + 0x10) = 0;
    *(iVar1 + 0x14) = 0;
    *(iVar1 + 0x18) = 0;
    fcn.0002062f(param_2);
    fcn.0002062f(unaff_retaddr);
    return;
}


/* fcn.0002062f @ 0x2062f */

void __thiscall fcn.0002062f(int param_1,uint param_2)

{
    uchar uVar1;
    
    *(param_1 + 8) = param_2;
    uVar1 = fcn.00015b5a(param_2);
    *(param_1 + 0x30) = uVar1;
    *(param_1 + 4) = 1;
    *(param_1 + 0xc) = 0;
    *(param_1 + 0x10) = 0;
    *(param_1 + 0x14) = 0;
    *(param_1 + 0x18) = 0;
    return;
}


/* fcn.00015b5a @ 0x15b5a */

char fcn.00015b5a(uint32_t param_1)

{
    if (param_1 == 0) {
        return '\0';
    }
    return ((param_1 & 0x1a) != 0) + '\x01';
}


/* fcn.00016c8c @ 0x16c8c */

void __thiscall fcn.00016c8c(int param_1,uint param_2)

{
    fcn.00022751(param_1 + 8,param_2,0x10);
    *(param_1 + 0x18) = 0;
    return;
}


/* fcn.000219bf @ 0x219bf */

void __cdecl fcn.000219bf(int32_t arg_8h,int32_t arg_ch,uint32_t arg_10h)

{
    int *in_ECX;
    bool bVar1;
    ulong uVar2;
    int32_t in_stack_00000010;
    int noname_0;
    
    in_ECX[1] = *(arg_8h + 8);
    in_ECX[2] = *(arg_8h + 9);
    *(in_ECX + 3) = *(arg_8h + 10);
    uVar2 = fcn.00021d70();
    noname_0 = arg_8h + 0x20;
    *(in_ECX + 4) = uVar2;
    in_ECX[6] = *(arg_8h + 4);
    *(in_ECX + 7) = *(arg_8h + 0xc);
    *(in_ECX + 0x1e) = *(arg_8h + 0xe);
    *in_ECX[8] = in_ECX;
    *in_ECX[9] = in_ECX;
    fcn.000204aa(noname_0,arg_ch,in_stack_00000010);
    if ((arg_10h != '\0') || (in_ECX[1] != 0)) {
        noname_0 = noname_0 + (*(arg_8h + 0x30) + 0xc) * 4;
    }
    fcn.000204aa(noname_0,arg_ch,arg_ch);
    if (*(*(*(*in_ECX + 0x30) + 0x20) + 8) == 0x10) {
        bVar1 = *(arg_8h + 0xb) != -1;
        *(in_ECX + 10) = bVar1;
        if (bVar1) {
            in_ECX[0xb] = *(arg_8h + 0xb);
            return;
        }
    }
    else {
        *(in_ECX + 10) = 0;
    }
    in_ECX[0xb] = 0;
    return;
}


/* fcn.0001726e @ 0x1726e */

uint __fastcall fcn.0001726e(int param_1)

{
    uint32_t uVar1;
    
    uVar1 = *(param_1 + 0xb0) & 0x108f4;
    return CONCAT31(uVar1 >> 8,uVar1 == 0xb4);
}


/* fcn.0001c81b @ 0x1c81b */

uint __fastcall fcn.0001c81b(int param_1)

{
    uint uVar1;
    
    uVar1 = fcn.00019ef1();
    fcn.0001b50a();
    *(param_1 + 0x30) = *(param_1 + 0x30) + '\x01';
    fcn.00019ead(uVar1);
    return uVar1;
}


/* fcn.0001af79 @ 0x1af79 */

void __fastcall fcn.0001af79(int param_1)

{
    uint8_t uVar1;
    int iVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint8_t uVar5;
    
    fcn.0001b0d1();
    uVar5 = 0;
    if (*(param_1 + 0xa8) != '\0') {
        do {
            uVar1 = *(param_1 + 0x2c);
            uVar4 = 0;
            uVar3 = 0;
            iVar2 = *(uVar5 * 0x18 + 0xb0 + param_1);
            if (uVar1 != 0) {
                do {
                    uVar3 = uVar4;
                    if (*(param_1 + 0x30 + uVar4 * 4) == iVar2) break;
                    uVar3 = uVar3 + 1;
                    uVar4 = uVar3;
                } while (uVar3 < uVar1);
            }
            if ((uVar3 == uVar1) && (uVar1 < 2)) {
                *(param_1 + 0x30 + uVar1 * 4) = iVar2;
                *(param_1 + 0x2c) = *(param_1 + 0x2c) + '\x01';
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(param_1 + 0xa8));
    }
    return;
}


/* fcn.0001711d @ 0x1711d */

uint __thiscall fcn.0001711d(int param_1,int param_2)

{
    uint32_t uVar1;
    uint8_t uVar2;
    char cVar3;
    int16_t iVar4;
    int iVar5;
    uint16_t uVar6;
    
    uVar2 = fcn.00016cfb(param_1 + 0x14);
    uVar6 = uVar2;
    if (((uVar2 != 0) && (uVar1 = *(param_2 + 0xb0), (uVar1 >> 4 & 1) != 0)) &&
       (((uVar1 & 0x10043) == 0 || ((uVar1 >> 0x18 & 1) != 0)))) {
        iVar4 = fcn.00022706(param_2 + 0x14);
        do {
            uVar6 = uVar6 - 1;
            iVar4 = iVar4 + -1;
            if (*(uVar6 + 0x14 + param_1) != *(iVar4 + 0x14 + param_2)) {
                return 0;
            }
        } while (0 < uVar6);
        iVar5 = fcn.0001c77e(param_1 + 0x14);
        iVar5 = *(iVar5 + 0x1c);
        if (iVar5 == 0) {
            if (param_2 != '\0') {
                return 1;
            }
        }
        else {
            if (param_2 != '\0') {
                return 1;
            }
            if ((*(param_2 + 0xb0) >> 2 & 1) == 0) {
                return 1;
            }
            cVar3 = fcn.0001b4df();
            if (cVar3 != '\0') {
                return 1;
            }
            if (*(*(*(*(iVar5 + 0x30) + 0x30) + 0x20) + 8) == 0x10) {
                return 1;
            }
        }
    }
    return 0;
}


/* fcn.000172f0 @ 0x172f0 */

void __fastcall fcn.000172f0(int param_1)

{
    int iVar1;
    int unaff_retaddr;
    
    fcn.00016c6c(4);
    fcn.00016ca7(*(param_1 + 0xb0) | 0x100);
    iVar1 = fcn.0001c77e(param_1 + 0x14);
    fcn.0001c77e(unaff_retaddr + 0x14);
    fcn.00017375(param_1);
    if (iVar1 != 0) {
        fcn.0001c5b0(iVar1);
    }
    fcn.0001d406(param_1 + 0x14,param_1);
    return;
}


/* fcn.0001d31f @ 0x1d31f */

uint * __fastcall fcn.0001d31f(uint *param_1)

{
    int iVar1;
    uint uVar2;
    
    uVar2 = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[7] = 0;
    iVar1 = fcn.00016e92(0x30);
    if (iVar1 != 0) {
        uVar2 = fcn.00021bf3(param_1);
    }
    param_1[10] = uVar2;
    return param_1;
}


/* fcn.00021bf3 @ 0x21bf3 */

uint * __fastcall fcn.00021bf3(uint *param_1)

{
    uint unaff_retaddr;
    
    fcn.0001d8e9(0x200);
    param_1[0xb] = unaff_retaddr;
    *param_1 = 0x143cc;
    param_1[1] = *(*(*0x155ec + 0x18) + 4);
    return param_1;
}


/* fcn.0001bcd0 @ 0x1bcd0 */

uint * __fastcall fcn.0001bcd0(uint *param_1)

{
    int iVar1;
    uint uVar2;
    
    iVar1 = fcn.00016e92(0x30);
    if (iVar1 == 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = fcn.0002197b();
    }
    param_1[0xc] = uVar2;
    fcn.00022751(param_1 + 2,0x141e7,0x10);
    *(param_1 + 6) = 0;
    *param_1 = 0;
    param_1[7] = 0;
    *(param_1 + 0xb) = 0;
    param_1[10] = 0xc;
    return param_1;
}


/* fcn.0001af26 @ 0x1af26 */

uint * __fastcall fcn.0001af26(uint *param_1)

{
    int iVar1;
    uint uVar2;
    
    uVar2 = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = 0;
    iVar1 = fcn.00016e92(0x30);
    if (iVar1 != 0) {
        uVar2 = fcn.00021318(param_1);
    }
    param_1[0xe] = uVar2;
    fcn.0001b50a();
    return param_1;
}


/* fcn.0001c841 @ 0x1c841 */

int __thiscall fcn.0001c841(char *param_1,uint32_t param_2)

{
    uint *puVar1;
    int iVar2;
    
    iVar2 = fcn.00019ed3();
    if (iVar2 != 0) {
        fcn.0001d449();
        for (puVar1 = *(param_1 + 8); puVar1 != NULL; puVar1 = *puVar1) {
            if (param_2 < *(puVar1[8] + 0x80)) {
                fcn.00019e86(iVar2,puVar1);
                goto code_r0x0001c881;
            }
        }
        fcn.00019ead(iVar2);
code_r0x0001c881:
        *param_1 = *param_1 + '\x01';
    }
    return iVar2;
}


/* fcn.0001d34b @ 0x1d34b */

void __thiscall fcn.0001d34b(int param_1,int param_2)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    uint32_t uVar4;
    ulong uVar5;
    
    uVar4 = *(param_2 + 0x18) & 0xc20287;
    fcn.0001d480(param_2);
    iVar1 = param_1 + 9;
    iVar2 = fcn.0001c295(iVar1);
    *(param_1 + 0x20) = iVar2;
    if (iVar2 == 0) {
        uVar5 = fcn.00021be7();
        uVar3 = fcn.0001c1c4(iVar1,uVar4,uVar5);
        *(param_1 + 0x20) = uVar3;
    }
    else {
        fcn.00016ca7(uVar4);
    }
    fcn.0001d406(iVar1,*(param_1 + 0x20));
    return;
}


/* fcn.000185ab @ 0x185ab */

uint __thiscall fcn.000185ab(int param_1,int32_t param_2)

{
    int iVar1;
    int16_t iVar2;
    uint8_t uVar3;
    
    uVar3 = 0;
    if (*(param_1 + 0x10) != '\0') {
        do {
            if (3 < uVar3) {
                return 0;
            }
            iVar1 = *(param_1 + uVar3 * 4);
            if ((iVar1 != -0x17655) && (iVar2 = fcn.00022718(iVar1 + 0xa0,param_2,0xffff), iVar2 == 0)) {
                return *(param_1 + uVar3 * 4);
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(param_1 + 0x10));
    }
    return 0;
}


/* fcn.0001bd1e @ 0x1bd1e */

void __thiscall fcn.0001bd1e(int param_1,int param_2)

{
    uint uVar1;
    int32_t unaff_EBX;
    
    uVar1 = fcn.00021931(*(param_2 + 0x18));
    fcn.0001be9b(uVar1);
    fcn.00016c8c(param_2);
    *(param_1 + 0x1c) = *(param_2 + 0x20);
    uVar1 = *(param_2 + 0x14);
    *(param_1 + 0x20) = *(param_2 + 0x10);
    *(param_1 + 0x24) = uVar1;
    *(param_1 + 0x28) = *(param_2 + 0x18);
    *(param_1 + 0x34) = *(param_2 + 0x26);
    *(param_1 + 0x38) = *(param_2 + 0x27);
    *(param_1 + 0x3c) = *(param_2 + 0x23);
    *(param_1 + 0x3e) = *(param_2 + 0x28);
    *(param_1 + 0x40) = *(param_2 + 0x2a);
    *(param_1 + 0x41) = *(param_2 + 0x2b);
    *(param_1 + 0x44) = *(param_2 + 0x2c);
    *(param_1 + 0x48) = *(param_2 + 0x30);
    *(param_1 + 0x4c) = 0;
    *(param_1 + 0x2c) = *(param_2 + 0x24);
    **(param_1 + 0x30) = param_1;
    fcn.000219bf(param_2 + 0x50,unaff_EBX,0);
    *(param_1 + 4) = 0;
    *(param_1 + 0x50) = *(param_2 + 0x22);
    return;
}


/* fcn.000181c5 @ 0x181c5 */

uint __cdecl fcn.000181c5(int32_t arg_8h)

{
    char *pcVar1;
    uint8_t uVar2;
    int32_t iVar3;
    int iVar4;
    uint uVar5;
    int in_ECX;
    uint8_t uVar6;
    int8_t var_4h;
    
    iVar3 = arg_8h;
    if ((*(*(*(arg_8h + 0x30) + 0x20) + 8) != 0x10) || (*(*(in_ECX + 0x1c) + 0x18) == '\0')) {
        uVar6 = 0;
        if (*(*(in_ECX + 0x1c) + 0x34) != 0) {
            arg_8h = arg_8h & 0xffffff;
            iVar4 = fcn.0001b680(&arg_8h + 3);
            if ((iVar4 != 0) && (*(*(*(iVar4 + 0x30) + 0x20) + 8) == 0x10)) {
                return 0;
            }
        }
        uVar2 = *(in_ECX + 0x10);
        if (uVar2 != 0) {
            do {
                if (*(in_ECX + uVar6 * 4) == -0x17655) break;
                uVar6 = uVar6 + 1;
            } while (uVar6 < uVar2);
        }
        if (uVar6 == uVar2) {
            if (3 < uVar6) {
                return 0;
            }
            *(in_ECX + 0x10) = uVar2 + 1;
        }
        pcVar1 = *(in_ECX + 0x1c) + 0x18;
        *pcVar1 = *pcVar1 + '\x01';
        iVar4 = fcn.00016ee1(1);
        if (iVar4 != 0) {
            iVar4 = fcn.00016e92(0xf0);
            if (iVar4 == 0) {
                uVar5 = 0;
            }
            else {
                uVar5 = fcn.0001b7f7(uVar6,iVar3);
            }
            *(in_ECX + uVar6 * 4) = uVar5;
            fcn.00016f12();
            return uVar5;
        }
    }
    return 0;
}


/* fcn.0001c0ff @ 0x1c0ff */

void __fastcall fcn.0001c0ff(int *param_1)

{
    uint32_t *puVar1;
    int iVar2;
    
    iVar2 = fcn.0001be7b();
    param_1[1] = iVar2;
    if (iVar2 == 0) {
        iVar2 = fcn.0001c81b();
        param_1[1] = iVar2;
    }
    fcn.0001c19b();
    fcn.0001af79();
    *(*param_1 + 0xb8) = param_1[1];
    if (*(param_1[1] + 0xc) != '\0') {
        fcn.00022751(*param_1 + 0x14,*(param_1[1] + 0x10) + 9,0x10);
        *(*param_1 + 0x24) = 0;
        iVar2 = *(*(param_1[1] + 0x10) + 0x20);
        fcn.00022751(*param_1 + 0x4e,iVar2 + 0x4e,0x28);
        *(*param_1 + 0x76) = 0;
        puVar1 = *param_1 + 0x84;
        *puVar1 = *puVar1 ^ (*(iVar2 + 0x84) ^ *(*param_1 + 0x84)) & 0x200;
    }
    return;
}


/* fcn.0001b84a @ 0x1b84a */

void __fastcall fcn.0001b84a(int param_1)

{
    int iVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    
    iVar1 = *(param_1 + 0xb8);
    uVar4 = 0xffffffff;
    uVar3 = 0;
    *(param_1 + 0x10) = 0xffffffff;
    if (*(iVar1 + 0xc) != '\0') {
        do {
            uVar2 = *(*(*(iVar1 + 0x10 + uVar3 * 4) + 0x20) + 0x80);
            if (uVar2 < uVar4) {
                *(param_1 + 0x10) = uVar2;
                uVar4 = uVar2;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(iVar1 + 0xc));
    }
    return;
}


/* fcn.0001c801 @ 0x1c801 */

uchar __fastcall fcn.0001c801(int param_1)

{
    char cVar1;
    
    cVar1 = fcn.0001c0f1();
    if ((cVar1 != '\0') && (*(param_1 + 0x40) != '\0')) {
        return 1;
    }
    return 0;
}


/* fcn.0001c0f1 @ 0x1c0f1 */

uint __fastcall fcn.0001c0f1(int param_1)

{
    int iVar1;
    
    iVar1 = *(*(param_1 + 0x30) + 0x20);
    return CONCAT31(iVar1 >> 8,*(iVar1 + 8) == 0x20);
}


/* fcn.0001c896 @ 0x1c896 */

void __thiscall fcn.0001c896(int param_1,int param_2)

{
    int iVar1;
    uint32_t uVar2;
    
    if (*(param_1 + 0x40) == 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(param_1 + 0x40) - 8;
    }
    if (uVar2 != 0) {
        do {
            if (*(param_2 + 0x10) < *(uVar2 + 0x10)) {
                fcn.00019e86(param_2 + 8,-(uVar2 != 0) & uVar2 + 8);
                return;
            }
            iVar1 = *(-(uVar2 != 0) & uVar2 + 8);
            uVar2 = -(iVar1 != 0) & iVar1 - 8U;
        } while (uVar2 != 0);
    }
    fcn.00019ead(-(param_2 != 0) & param_2 + 8U);
    return;
}


/* fcn.00011a23 @ 0x11a23 */

uint fcn.00011a23(int *param_1,int8_t param_2)

{
    uint uVar1;
    
    if ((param_1 != NULL) && (**param_1 == 1)) {
        uVar1 = fcn.00014436((*param_1)[4],param_1[1],param_2);
        uVar1 = fcn.00011979(uVar1);
        return uVar1;
    }
    return 1;
}


/* fcn.00015af3 @ 0x15af3 */

bool fcn.00015af3(int param_1)

{
    return *(param_1 + 0x98) == 1;
}


/* fcn.00011a53 @ 0x11a53 */

void fcn.00011a53(int32_t param_1)

{
    uint32_t uVar1;
    int32_t arg_8h;
    ulong uVar2;
    int32_t arg_14h;
    int32_t arg_18h;
    int32_t arg_20h;
    
    arg_20h = 2;
    uVar1 = fcn.00015a62(param_1);
    uVar1 = uVar1 & 0xff;
    arg_14h = 7;
    arg_18h = param_1;
    uVar2 = fcn.00015a72(param_1);
    arg_8h = fcn.00015a57(param_1);
    fcn.0001289c(arg_8h,uVar2,uVar2 >> 0x20,arg_14h,arg_18h,uVar1,arg_20h);
    return;
}


/* fcn.00019ed3 @ 0x19ed3 */

void __fastcall fcn.00019ed3(int *param_1)

{
    int *piVar1;
    int iVar2;
    
    piVar1 = *param_1;
    if (piVar1 != NULL) {
        if (piVar1 == param_1[1]) {
            param_1[1] = 0;
        }
        iVar2 = *piVar1;
        *param_1 = iVar2;
        if (iVar2 != 0) {
            *(iVar2 + 4) = 0;
        }
    }
    return;
}


/* fcn.0001d449 @ 0x1d449 */

void __fastcall fcn.0001d449(int param_1)

{
    *(param_1 + 0x24) = 0;
    return;
}


/* fcn.00019e86 @ 0x19e86 */

int * __thiscall fcn.00019e86(int *param_1,int *param_2,int param_3)

{
    if (*param_1 == param_3) {
        *param_1 = param_2;
    }
    else {
        **(param_3 + 4) = param_2;
    }
    *param_2 = param_3;
    param_2[1] = *(param_3 + 4);
    *(param_3 + 4) = param_2;
    return param_1;
}


/* fcn.0001cb3d @ 0x1cb3d */

void __cdecl
fcn.0001cb3d(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h,int32_t arg_1ch,
            int8_t arg_20h)

{
    int in_ECX;
    int32_t *piVar1;
    
    piVar1 = (*(in_ECX + 0x1c0) + 6) * 0x20 + in_ECX;
    *(in_ECX + 0x1c0) = *(in_ECX + 0x1c0) + 1;
    *piVar1 = arg_8h;
    piVar1[1] = arg_ch;
    piVar1[2] = arg_10h;
    piVar1[3] = arg_14h;
    piVar1[4] = arg_18h;
    piVar1[5] = arg_1ch;
    *(piVar1 + 6) = arg_20h;
    return;
}


/* fcn.0001c94a @ 0x1c94a */

uint * __thiscall fcn.0001c94a(uint *param_1,int param_2,int param_3,int param_4,int param_5)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    
    fcn.0001d245();
    param_1[0x28] = param_2;
    param_1[0x2a] = param_3;
    *param_1 = 0x141e8;
    *(param_1 + 0x70) = 0;
    param_1[0x26] = 3;
    param_1[0x2b] = *(param_4 + 0x80);
    param_1[0x2c] = *(param_4 + 0x8c);
    param_1[0x2d] = *(param_4 + 0x84);
    param_1[0x22] = *(param_3 + 0x88);
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    uVar2 = *(param_4 + 0x78) + *(param_4 + 0x68);
    param_1[0x2f] = *(param_4 + 0x7c) + *(param_4 + 0x6c) + CARRY4(*(param_4 + 0x78),*(param_4 + 0x68));
    uVar3 = param_1[0x2f];
    param_1[0x2e] = uVar2;
    if (param_2 == 0) {
        param_2 = *(*0x150c4 + 0x23c);
    }
    param_1[0x29] = *(*0x150c4 + 0x23c);
    uVar1 = *(param_4 + 100);
    if (((uVar3 < uVar1) || ((uVar3 == uVar1 && (uVar2 < *(param_4 + 0x60))))) ||
       ((*(param_2 + 0x7c) <= uVar3 && ((uVar3 != *(param_2 + 0x7c) || (*(param_2 + 0x78) < uVar2)))))) {
        param_1[0x2e] = *(param_4 + 0x60);
        param_1[0x2f] = uVar1;
    }
    uVar3 = *(param_3 + 0x78);
    param_1[0x1f] = *(param_3 + 0x7c) + -1 + (7 < uVar3);
    param_1[0x1e] = uVar3 - 8 & 0xfffffff0;
    if (param_1[0x2c] == 1) {
        uVar3 = *(param_4 + 100);
        uVar2 = *(param_4 + 0x60);
        if ((*(param_5 + 100) < uVar3) || ((*(param_5 + 100) <= uVar3 && (*(param_5 + 0x60) <= uVar2)))) {
code_r0x0001ca78:
            uVar2 = *(param_5 + 0x60);
            uVar3 = *(param_5 + 100);
        }
    }
    else {
        if (param_1[0x2c] != 2) goto code_r0x0001ca8a;
        uVar3 = *(param_4 + 100);
        uVar2 = *(param_4 + 0x60);
        if ((uVar3 < *(param_5 + 100)) || ((uVar3 == *(param_5 + 100) && (uVar2 <= *(param_5 + 0x60)))))
        goto code_r0x0001ca78;
    }
    param_1[0x2f] = uVar3;
    param_1[0x2e] = uVar2;
code_r0x0001ca8a:
    if ((*(param_4 + 0x6c) != 0) || (*(param_4 + 0x68) != 0)) {
        fcn.0001cb3d(0,0,*(param_4 + 0x68),*(param_4 + 0x6c),0,0,0);
    }
    fcn.0001cb3d(*(param_4 + 0x68),*(param_4 + 0x6c),*(param_4 + 0x60),*(param_4 + 100),0,0,1);
    fcn.0001cb3d(*(param_4 + 0x60),*(param_4 + 100),param_1[0x1e],param_1[0x1f],*(param_4 + 0x60),*(param_4 + 100)
                 ,0);
    fcn.0002245a(param_1 + 0x25,0x29,param_2 + 0x25,0x29);
    fcn.0002245a(param_1 + 5,0x11,param_2 + 0x14,0x11);
    param_1[0x23] = *(param_2 + 0x8c) | *(param_3 + 0x8c);
    uVar3 = *(param_3 + 0x80);
    if (*(param_2 + 0x80) < *(param_3 + 0x80)) {
        uVar3 = *(param_2 + 0x80);
    }
    param_1[0x21] = 0;
    param_1[0x20] = uVar3;
    param_1[4] = uVar3;
    return param_1;
}


/* fcn.0001cefd @ 0x1cefd */

uint32_t fcn.0001cefd(uint32_t param_1,uint *param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t in_EAX;
    uint uVar3;
    int iVar4;
    uint32_t *puVar5;
    uint32_t auStack_20 [4];
    uint uStack_10;
    uchar uStack_8;
    
    if (param_2 != NULL) {
        iVar1 = param_2[0x1f];
        uVar2 = param_2[0x1e];
        if ((iVar1 != 0) || (7 < uVar2)) {
            puVar5 = auStack_20;
            for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar5 = 0;
                puVar5 = puVar5 + 1;
            }
            auStack_20[1] = iVar1 + -1 + (7 < uVar2);
            uStack_10 = 0x200;
            auStack_20[0] = uVar2 - 8 & 0xfffffff0;
            uStack_8 = 0x28;
            auStack_20[2] = param_1;
            (***param_2)(auStack_20);
            uVar3 = fcn.00022718(param_1,0x13f9c,8);
            return CONCAT31(CONCAT22(uVar3 >> 0x10,-uVar3) >> 8,'\x01' - (uVar3 != 0));
        }
    }
    return in_EAX & 0xffffff00;
}


/* fcn.0001c5db @ 0x1c5db */

uint __thiscall fcn.0001c5db(int param_1,uint32_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    
    if (*(param_1 + 0x40) == 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(param_1 + 0x40) - 8;
    }
    while( true ) {
        if (uVar2 == 0) {
            return 0;
        }
        if (uVar2 == param_2) break;
        iVar1 = *(-(uVar2 != 0) & uVar2 + 8);
        uVar2 = -(iVar1 != 0) & iVar1 - 8U;
    }
    fcn.00019f22(-(param_2 != 0) & param_2 + 8);
    return 1;
}


/* fcn.00022ede @ 0x22ede */

int fcn.00022ede(int param_1,uint32_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    
    iVar1 = 0;
    uVar2 = 0;
    if (param_2 != 0) {
        do {
            iVar1 = iVar1 + *(uVar2 + param_1);
            uVar2 = uVar2 + 1;
        } while (uVar2 < param_2);
    }
    return iVar1;
}


/* fcn.0001cb86 @ 0x1cb86 */

uint32_t __cdecl fcn.0001cb86(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h)

{
    uint32_t arg_8h_00;
    int32_t var_1c8h;
    
    fcn.0001c94a(arg_ch,arg_10h,arg_14h,arg_18h);
    arg_8h_00 = fcn.0002240e(0x1c8);
    if (arg_8h_00 != 0) {
        fcn.0002245a(arg_8h_00,0x1c8,&var_1c8h,0x1c8);
        fcn.0001c896(arg_8h_00);
    }
    return arg_8h_00;
}


/* fcn.0001d1ed @ 0x1d1ed */

void fcn.0001d1ed(uint *param_1,uint *param_2)

{
    char cVar1;
    
    param_1[2] = param_2[2];
    cVar1 = '\0';
    if (*(param_2 + 6) != '(') {
        cVar1 = (*(param_2 + 6) != '*') + '\x01';
    }
    *(param_1 + 4) = cVar1;
    param_1[3] = param_2[4] >> 9;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    return;
}


/* fcn.00021be7 @ 0x21be7 */

ulong __fastcall fcn.00021be7(int param_1)

{
    return CONCAT44(*(param_1 + 0x20),*(param_1 + 0x10));
}


/* fcn.0001d3d7 @ 0x1d3d7 */

void __thiscall fcn.0001d3d7(int param_1,uint32_t param_2,uint32_t param_3)

{
    *(param_1 + 0xb0) = ~param_3 & *(param_1 + 0xb0) | param_2 & param_3;
    fcn.000173ad();
    return;
}


/* fcn.00021d7b @ 0x21d7b */

int __thiscall fcn.00021d7b(int param_1,char param_2)

{
    int iVar1;
    
    iVar1 = param_1 + (*(param_1 + 0x30) + 0x14) * 4;
    if ((param_2 != '\0') || (*(param_1 + 8) != '\0')) {
        iVar1 = iVar1 + *(iVar1 + 0x10) * 4 + 0x30;
    }
    return iVar1;
}


/* fcn.0001d897 @ 0x1d897 */

uint16_t __fastcall fcn.0001d897(int32_t param_1)

{
    uint16_t in_AX;
    int16_t iVar1;
    
    if (*0x155f1 != '\0') {
        return in_AX & 0xff00;
    }
    iVar1 = fcn.00022718(0x13fac,param_1,0x18);
    return CONCAT11(-iVar1 >> 8,'\x01' - (iVar1 != 0));
}


/* fcn.0001d49b @ 0x1d49b */

uint __thiscall fcn.0001d49b(int param_1,uint32_t param_2)

{
    uint uVar1;
    
    uVar1 = fcn.00022718(param_2,param_1 + 0x18,0xffff);
    return CONCAT31(CONCAT22(uVar1 >> 0x10,-uVar1) >> 8,'\x01' - (uVar1 != 0));
}


/* fcn.0001d4ba @ 0x1d4ba */

void __fastcall fcn.0001d4ba(int *param_1)

{
    int *piVar1;
    int iVar2;
    uint32_t uVar3;
    
    iVar2 = 0;
    piVar1 = param_1 + 8;
    *piVar1 = 0;
    for (uVar3 = param_1[9] >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        iVar2 = iVar2 + *param_1;
        param_1 = param_1 + 1;
    }
    *piVar1 = iVar2;
    return;
}


/* fcn.000226e8 @ 0x226e8 */

void fcn.000226e8(char *param_1,char *param_2)

{
    int iVar1;
    char cVar2;
    
    cVar2 = *param_2;
    if (cVar2 != '\0') {
        iVar1 = param_2 - param_1;
        do {
            *param_1 = cVar2;
            param_1 = param_1 + 1;
            cVar2 = param_1[iVar1];
        } while (cVar2 != '\0');
    }
    *param_1 = '\0';
    return;
}


/* fcn.0001704b @ 0x1704b */

ulong __fastcall fcn.0001704b(int param_1)

{
    return CONCAT44(*(param_1 + 0x7c) + -1 + (1 < *(param_1 + 0x78)),*(param_1 + 0x78) - 2);
}


/* fcn.0001da4c @ 0x1da4c */

void __thiscall fcn.0001da4c(int param_1,uint32_t param_2)

{
    char cVar1;
    int arg_1ch;
    int arg_18h;
    uint32_t uVar2;
    ulong uVar3;
    uint uVar4;
    
    if (*(*0x155ec + 0x20) == 0) {
        cVar1 = fcn.0001d6fe();
        if ((cVar1 == '\0') || (0x1400 < *(*(param_1 + 4) + 0x24))) {
            cVar1 = fcn.0001d897();
            if (cVar1 == '\0') {
                uVar4 = 0xc28387;
            }
            else {
                uVar4 = 0x10100;
                fcn.00016ca7(0x10100);
            }
        }
        else {
            fcn.00016ca7(0x100);
            uVar2 = *(*(param_1 + 4) + 0x24);
            if (0x200 < uVar2) {
                arg_1ch = *(param_1 + 4) + 0x200;
                uVar2 = (uVar2 + 0x1ff >> 9) - 1;
                arg_18h = uVar2 * 0x200;
                uVar3 = fcn.0001704b();
                fcn.000186ba(param_2,0x28,uVar3 - uVar2,(uVar3 >> 0x20) - (uVar3 < uVar2),arg_18h,arg_1ch);
                if (*(*0x155ec + 0x20) != 0) {
                    fcn.00016c6c(0x100);
                }
            }
            if ((*(*(param_1 + 4) + 0x34) & 0x1000000) != 0) {
                *(param_2 + 0x84) = *(param_2 + 0x84) | 0x200;
            }
            cVar1 = fcn.0001d565();
            if (cVar1 != '\0') {
                return;
            }
            fcn.00016ca7(0x10100);
            uVar4 = 0xc20287;
        }
        fcn.00016c6c(uVar4);
    }
    return;
}


/* fcn.0001d6fe @ 0x1d6fe */

uchar __fastcall fcn.0001d6fe(int param_1)

{
    char cVar1;
    uchar uVar2;
    int iVar3;
    uint32_t uVar4;
    
    iVar3 = fcn.0002300e();
    cVar1 = fcn.0001d897();
    if (cVar1 != '\0') {
        uVar4 = 0;
        if (((*(param_1 + 0x34) & 0x1000000) != 0) && ((*(iVar3 + 0x1a) & 0x1000000) != 0)) {
            uVar4 = 0x2000001;
        }
        cVar1 = fcn.0001871c(1);
        if (((((cVar1 == '\0') || (cVar1 = fcn.0001d49b(0x141f8), cVar1 == '\0')) &&
             ((cVar1 = fcn.0001d49b(0x141f8), cVar1 == '\0' ||
              ((*(param_1 + 0x38) != '\x01' || (*(param_1 + 0x39) != '\0')))))) &&
            ((((cVar1 = fcn.0001871c(0x200), cVar1 == '\0' ||
               ((cVar1 = fcn.0001d49b(0x141f8), cVar1 == '\0' || (*(param_1 + 0x38) != '\x01')))) &&
              ((((cVar1 = fcn.0001871c(2), cVar1 == '\0' || (cVar1 = fcn.0001d49b(0x14200), cVar1 == '\0')) &&
                (cVar1 = fcn.0001d49b(0x14208), cVar1 == '\0')) &&
               ((((cVar1 = fcn.0001871c(8), cVar1 == '\0' || (cVar1 = fcn.0001d49b(0x14210), cVar1 == '\0')) &&
                 ((cVar1 = fcn.0001871c(0x10), cVar1 == '\0' || (cVar1 = fcn.0001d49b(0x14218), cVar1 == '\0')))) &&
                ((cVar1 = fcn.0001d49b(0x14220), cVar1 == '\0' || (*(iVar3 + 0x14) < 5)))))))) &&
             ((cVar1 = fcn.0001d49b(0x14228), cVar1 == '\0' || (*(iVar3 + 0x14) < 3)))))) &&
           ((((cVar1 = fcn.0001d49b(0x14230), cVar1 == '\0' && (cVar1 = fcn.0001d49b(0x14238), cVar1 == '\0')) ||
             (uVar4 = uVar4 | *(iVar3 + 0x1a), ((uVar4 | 1) & *(param_1 + 0x34)) != *(param_1 + 0x34))) ||
            (((cVar1 = fcn.0001871c(0x200), cVar1 == '\0' ||
              (((*(param_1 + 0x34) & 1) != 0 && (*(param_1 + 0x38) != '\x01')))) &&
             (((*(param_1 + 0x34) & 1) != 0 && ((uVar4 & 1) == 0)))))))) {
            uVar2 = 0;
        }
        else {
            uVar2 = 1;
        }
        return uVar2;
    }
    return 0;
}


/* fcn.0001d565 @ 0x1d565 */

uint __fastcall fcn.0001d565(int param_1)

{
    bool bVar1;
    char cVar2;
    uint8_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t unaff_EBX;
    uint unaff_EBP;
    int iVar7;
    int unaff_ESI;
    int iVar8;
    char cVar9;
    unkuint3 Var10;
    int iStack_10;
    
    bVar1 = false;
    iVar4 = fcn.0002300e();
    iVar7 = 0;
    iVar8 = param_1 + 0xd8 + *(param_1 + 0x38) * 0x30;
    if (*(param_1 + 0x39) != '\0') {
        do {
            uVar5 = fcn.00021931(*(iVar8 + 0x18));
            if (((*(iStack_10 + 0x1a) & 0x1000000) == 0) || ((*(param_1 + 0x34) & 0x1000000) == 0)) {
                Var10 = unaff_EBX;
            }
            else {
                Var10 = CONCAT12(1,unaff_EBX);
            }
            cVar2 = *(iVar8 + 0x58);
            unaff_EBX = CONCAT22(CONCAT13(unaff_EBX >> 0x18,Var10) >> 0x10,CONCAT11(cVar2,Var10));
            cVar9 = unaff_EBP >> 8;
            uVar6 = uVar5;
            if (cVar2 == '\x01') {
                iVar7 = fcn.00021931(*(iVar8 + 0x18));
                uVar6 = unaff_EBX;
                cVar2 = cVar9;
            }
            if ((uVar6 == 0) || ((cVar2 == '\x01' && (iVar7 == 0)))) {
                bVar1 = true;
            }
            if (((*(uVar5 + 0x1a) & 1) == 0) && (unaff_EBP >> 0x10 == '\0')) {
                if ((uVar6 & 0x21) == 0) {
                    if ((cVar2 == '\x01') && (iVar7 == 1)) {
                        bVar1 = true;
                    }
                }
                else {
                    bVar1 = true;
                    cVar2 = fcn.0001871c(0x200);
                    uVar6 = unaff_EBX;
                    if ((cVar2 != '\0') && (unaff_EBX == 0x20)) {
                        bVar1 = false;
                    }
                }
            }
            if (((*(uVar5 + 0x1a) & 4) == 0) && (uVar6 == 8)) {
                bVar1 = true;
            }
            if (((*(uVar5 + 0x1a) & 2) == 0) && ((uVar6 == 2 || ((cVar9 == '\x01' && (iVar7 == 2)))))) {
                bVar1 = true;
            }
            if (((*(uVar5 + 0x1a) & 0x10) == 0) && ((uVar6 == 4 || ((cVar9 == '\x01' && (iVar7 == 4)))))) {
                bVar1 = true;
            }
            if ((*(uVar5 + 0x14) < *(iVar4 + 0x30)) ||
               ((cVar9 == '\x01' && (*(uVar5 + 0x14) < *(iVar4 + 0x60 + *(iVar4 + 0x30) * 4))))) {
                bVar1 = true;
            }
            if (bVar1) {
                return 0;
            }
            iVar8 = fcn.00021d7b();
            uVar3 = (unaff_ESI >> 0x18) + 1;
            unaff_ESI = uVar3 << 0x18;
        } while (uVar3 < *(param_1 + 0x39));
    }
    return 1;
}


/* fcn.0001dbe3 @ 0x1dbe3 */

void __thiscall fcn.0001dbe3(int param_1,char param_2)

{
    int16_t iVar1;
    int iVar2;
    uint32_t uVar3;
    
    iVar1 = 0;
    uVar3 = *(param_1 + 0x2b);
    if (uVar3 != 0) {
        iVar2 = 0;
        do {
            if (*(iVar2 + 0x2c + param_1) == param_2) {
                return;
            }
            iVar1 = iVar1 + 1;
            iVar2 = iVar1;
        } while (iVar2 < uVar3);
    }
    *(uVar3 + 0x2c + param_1) = param_2;
    *(param_1 + 0x2b) = *(param_1 + 0x2b) + '\x01';
    return;
}


/* fcn.0001dd61 @ 0x1dd61 */

void __cdecl fcn.0001dd61(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,uint32_t arg_14h)

{
    int iVar1;
    int in_ECX;
    uint *puVar2;
    
    if (arg_14h != '\0') {
        fcn.000172aa(arg_ch,arg_10h);
    }
    *(in_ECX + 0x32) = *(in_ECX + 0x32) + 1;
    *(arg_8h + 0x14) = arg_ch & 0xff;
    *(arg_8h + 0x16) = arg_10h;
    *(*(in_ECX + 0x10) + 0x14) = in_ECX;
    fcn.0001dbe3(*(arg_8h + 0x38));
    if (*(in_ECX + 8) == 0) {
        iVar1 = *0x155ec + 0x1b10;
        *(*0x155ec + 0x1b3c) = in_ECX;
        *(in_ECX + 0x34) = iVar1;
        puVar2 = *0x155ec + 0x1b50;
        *(in_ECX + 8) = puVar2;
        for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar2 = *arg_8h;
            arg_8h = arg_8h + 4;
            puVar2 = puVar2 + 1;
        }
    }
    return;
}


/* fcn.0001def8 @ 0x1def8 */

uint fcn.0001def8(int param_1,uint16_t param_2,uint32_t param_3)

{
    int iVar1;
    uint16_t uVar2;
    
    if (param_3 != 0) {
        uVar2 = 0;
        if (param_2 != 0) {
            do {
                if ((*(uVar2 * 0xc + param_1) & 0x7fffffff) == (param_3 & 0x7fffffff)) {
                    iVar1 = uVar2 * 0xc;
                    *(iVar1 + param_1) = *(iVar1 + param_1) | 0x80000000;
                    *0x1bc50 = *0x1bc50 + 1;
                    *(iVar1 + 4 + param_1) = *0x1bc50;
                    return *(iVar1 + 8 + param_1);
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < param_2);
        }
    }
    return 0;
}


/* fcn.0001df56 @ 0x1df56 */

int fcn.0001df56(int param_1,uint param_2,uint32_t param_3)

{
    int iVar1;
    uint32_t *puVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    uint16_t uVar5;
    
    iVar1 = fcn.0001def8(param_1,param_2,param_3);
    if (iVar1 == 0) {
        uVar4 = 0xffffffff;
        uVar5 = 0;
        uVar3 = 0;
        if (param_2 != 0) {
            puVar2 = param_1 + 4;
            do {
                if ((-1 < puVar2[-1]) && (*puVar2 < uVar4)) {
                    uVar4 = *puVar2;
                    uVar5 = uVar3;
                }
                uVar3 = uVar3 + 1;
                puVar2 = puVar2 + 3;
            } while (uVar3 < param_2);
            if (uVar4 != 0xffffffff) {
                iVar1 = uVar5 * 0xc;
                *0x1bc50 = *0x1bc50 + 1;
                *(iVar1 + 4 + param_1) = *0x1bc50;
                *(iVar1 + param_1) = param_3 | 0x80000000;
                return *(iVar1 + 8 + param_1);
            }
        }
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.0001dfcd @ 0x1dfcd */

uint fcn.0001dfcd(int16_t param_1,uint param_2)

{
    uint uVar1;
    
    if (param_1 == 0x10) {
        uVar1 = 0x1bc2c;
    }
    else {
        if (param_1 != 1) {
            return 0;
        }
        uVar1 = 0x1bc08;
    }
    uVar1 = fcn.0001def8(uVar1,3,param_2);
    return uVar1;
}


/* fcn.0001e05d @ 0x1e05d */

uint fcn.0001e05d(int16_t param_1,uint param_2)

{
    uint uVar1;
    
    if (param_1 == 0x10) {
        uVar1 = 0x1bc2c;
    }
    else {
        if (param_1 != 1) {
            return 0;
        }
        uVar1 = 0x1bc08;
    }
    uVar1 = fcn.0001df56(uVar1,3,param_2);
    return uVar1;
}


/* fcn.0001e19d @ 0x1e19d */

void __thiscall fcn.0001e19d(int param_1,uint32_t *param_2)

{
    uchar uVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    char cVar4;
    uint8_t *unaff_EBX;
    uint8_t *unaff_EBP;
    int unaff_EDI;
    ulong uVar5;
    int64_t iVar6;
    int64_t *unaff_retaddr;
    uint8_t uVar7;
    
    uVar1 = *(param_1 + 0x25);
    uVar5 = fcn.00023e00();
    uVar7 = uVar5 >> 0x20;
    uVar5 = fcn.00023cc0(uVar5,uVar1,0);
    uVar2 = *(unaff_EDI + 0x44);
    uVar3 = *param_2;
    iVar6 = fcn.00023d60();
    *unaff_retaddr = iVar6 + (uVar2 & uVar3);
    cVar4 = fcn.00023d80(uVar5,*(unaff_EDI + 0x24),0);
    *unaff_EBX = *(unaff_EDI + 0x25) - cVar4;
    *unaff_EBP = uVar7;
    if (*unaff_EBX <= uVar7) {
        *unaff_EBP = uVar7 + 1;
    }
    return;
}


/* fcn.0001770f @ 0x1770f */

void __fastcall fcn.0001770f(int param_1)

{
    *(param_1 + 0x2a) = 6;
    *(param_1 + 0x28) = 7;
    return;
}


/* fcn.0001a7a3 @ 0x1a7a3 */

void __thiscall fcn.0001a7a3(int param_1,int param_2)

{
    int iVar1;
    uint32_t uVar2;
    
    iVar1 = fcn.0001a654(*(param_2 + 0x108),*(param_2 + 0x10c));
    uVar2 = *(param_1 + 0x28) + iVar1 * -0x200;
    if (uVar2 < *(param_2 + 0x118)) {
        fcn.00017e0d(uVar2);
    }
    fcn.0001771b();
    return;
}


/* fcn.00017b9b @ 0x17b9b */

void __fastcall fcn.00017b9b(int param_1)

{
    int iVar1;
    ushort uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    
    iVar1 = *0x155ec;
    if (*(param_1 + 0x2b) == '\0') {
        *(param_1 + 0x2a) = 0;
        uVar2 = 0;
    }
    else {
        if (*(param_1 + 0x2b) == '\x01') {
            if (*(*(*(param_1 + 0x14) + 8) + 0x16) == 2) {
                *(param_1 + 0x2a) = 5;
                *(param_1 + 0x28) = 2;
                return;
            }
            iVar5 = *0x155ec + 0x1a60;
            fcn.000177eb(iVar5);
            for (uVar4 = *(*(*(param_1 + 0x14) + 8) + 0x10); uVar4 != 0; uVar4 = uVar4 - uVar3) {
                uVar3 = 0x2000;
                if (uVar4 < 0x2000) {
                    uVar3 = uVar4;
                }
                fcn.00017e8e();
                if (*(iVar1 + 0x1a8b) != '\0') break;
            }
            if ((*(iVar1 + 0x1a8b) == '\0') && (*(*(param_1 + 0x10) + 8) != 2)) {
                fcn.0001a16f(*(param_1 + 0x2c));
            }
            else if (*(iVar1 + 0x1a88) != 2) {
                fcn.0001dc0f(iVar5);
                fcn.0001a213(param_1);
            }
            *(param_1 + 0x2a) = *(iVar1 + 0x1a8a);
            *(param_1 + 0x28) = *(iVar1 + 0x1a88);
            return;
        }
        fcn.0001a213(param_1);
        *(param_1 + 0x2a) = 6;
        uVar2 = 7;
    }
    *(param_1 + 0x28) = uVar2;
    return;
}


/* fcn.00017a67 @ 0x17a67 */

void __fastcall fcn.00017a67(int param_1)

{
    uint8_t uVar1;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int8_t var_ch;
    int16_t var_ah;
    int32_t var_8h;
    int32_t var_4h;
    
    var_10h = 0;
    var_ch = 0;
    var_ah = 0x10;
    fcn.0001e0fe(0);
    *(param_1 + 0x2a) = 0;
    *(param_1 + 0x28) = 0;
    (**(**(param_1 + 0x10) + 0xc))(*(param_1 + 0x108),*(param_1 + 0x10c),&var_4h,&var_18h);
    (**(**(param_1 + 0x10) + 0x10))(*(param_1 + 0x108),*(param_1 + 0x10c),&var_8h,&var_20h);
    fcn.000177eb(*0x155ec + 0x1a60);
    uVar1 = *(*(param_1 + 0x10) + 0x24);
    fcn.00017e8e(param_1,var_10h,var_18h,var_14h,*(param_1 + 0x118),((var_4h & 0xffU) + 1) % uVar1,uVar1 - 1,
                 var_8h,1);
    fcn.0001e413(*(param_1 + 0x118),*(param_1 + 0x11c),var_10h,var_10h);
    fcn.0001dc41(0x2a,var_4h,var_18h,var_14h,*(param_1 + 0x118),*(param_1 + 0x11c));
    fcn.0001dc41(0x2a,var_8h,var_20h,var_1ch,*(param_1 + 0x118),var_10h);
    if (*(param_1 + 0x2b) != '\0') {
        fcn.0001a213(param_1);
        if (1 < *(param_1 + 0x2b)) {
            *(param_1 + 0x2a) = 6;
            *(param_1 + 0x28) = 7;
        }
    }
    fcn.0001e001(var_10h);
    return;
}


/* fcn.00021db1 @ 0x21db1 */

int __fastcall fcn.00021db1(int param_1)

{
    uint uVar1;
    
    *(param_1 + 0x208) = 0;
    uVar1 = fcn.000223d1(0x1200,83000);
    *(param_1 + 0x204) = uVar1;
    return param_1;
}


/* fcn.00021f24 @ 0x21f24 */

void __fastcall fcn.00021f24(int param_1)

{
    *(param_1 + 0x200) = 0;
    *(param_1 + 0x208) = 0;
    return;
}


/* fcn.0001e8a7 @ 0x1e8a7 */

int fcn.0001e8a7(void)

{
    char cVar1;
    int iVar2;
    int iVar3;
    uint8_t uVar4;
    int unaff_EBP;
    
    iVar3 = *0x155ec;
    uVar4 = 0;
    if (*(*0x155ec + 0x1928) != '\0') {
        do {
            iVar2 = fcn.0001ea73(0);
            fcn.0001c295();
            cVar1 = fcn.0001711d();
            if (cVar1 != '\0') {
                iVar3 = fcn.00021e6f(iVar2 + 0x14);
                if (iVar3 == 0) {
                    return 0;
                }
                if (*(iVar3 + 0x1c) != unaff_EBP) {
                    return 0;
                }
                return iVar2;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(iVar3 + 0x1928));
    }
    return 0;
}


/* fcn.00021e6f @ 0x21e6f */

int __fastcall fcn.00021e6f(int param_1)

{
    char cVar1;
    uint8_t uVar2;
    
    uVar2 = 0;
    if (*(param_1 + 0x208) != '\0') {
        do {
            cVar1 = fcn.0001c6b5();
            if (cVar1 != '\0') {
                return *(param_1 + 0x204) + uVar2 * 0x30;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(param_1 + 0x208));
    }
    return 0;
}


/* fcn.0001e4b8 @ 0x1e4b8 */

void fcn.0001e4b8(int param_1,int param_2,int16_t param_3)

{
    uint16_t uVar1;
    int16_t iVar2;
    int iVar3;
    int iVar4;
    uchar auStack_c [12];
    
    fcn.00022b0b(auStack_c,10,0x1425c,param_3);
    uVar1 = fcn.00022706(auStack_c);
    iVar2 = 0;
    do {
        if (*(iVar2 + param_2) == '\0') break;
        iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
    iVar3 = iVar2;
    if (iVar3 + uVar1 < 0x10) {
        fcn.000226e8(param_1,param_2);
        fcn.000226e8(iVar3 + param_1,auStack_c);
    }
    else {
        iVar4 = 0x10 - uVar1;
        fcn.00022751(param_1,(iVar3 - iVar4) + param_2,iVar4);
        fcn.00022751(iVar4 + param_1,auStack_c,uVar1);
    }
    return;
}


/* fcn.0001c4e6 @ 0x1c4e6 */

int * __thiscall fcn.0001c4e6(int param_1,uint param_2)

{
    char cVar1;
    int iVar2;
    int *arg_8h;
    int iVar3;
    uint unaff_retaddr;
    
    *(param_1 + 100) = 0x100;
    iVar2 = fcn.000185ab(param_2);
    if (iVar2 == 0) {
        arg_8h = *(param_1 + 0x1c + *(param_1 + 0x18) * 4);
    }
    else {
        arg_8h = *(iVar2 + 0xb4);
    }
    fcn.0001bd1e(unaff_retaddr,param_2);
    if ((*(param_1 + 100) == '\0') || (*(param_1 + 0x65) == '\0')) {
        arg_8h = NULL;
    }
    else {
        iVar2 = fcn.000181c5(arg_8h);
        if (iVar2 == 0) {
            arg_8h = NULL;
        }
        else {
            *(iVar2 + 0x88) = 0x200;
            fcn.0001c0ff();
            fcn.0001b84a();
            if (((arg_8h[10] >> 5 & 1) == 0) && (iVar3 = fcn.0001beb7(), iVar3 != 3)) {
                cVar1 = fcn.0001c801();
                if (cVar1 != '\0') {
                    fcn.00022751(*arg_8h + 0x25,*(*(arg_8h[1] + 0x10) + 0x20) + 0x25,0x29);
                }
                fcn.0001c896(iVar2);
            }
        }
    }
    return arg_8h;
}


/* fcn.0001db56 @ 0x1db56 */

void __thiscall fcn.0001db56(int param_1,int param_2,uint param_3)

{
    uint32_t arg_14h;
    
    *(param_1 + 0x10) = *(param_2 + 0x28);
    *(param_1 + 0x14) = *(param_2 + 0x40);
    *(param_1 + 0x28) = *(param_2 + 0x2c);
    *(param_1 + 0x1c) = *(param_2 + 0x4c);
    *(param_1 + 0x18) = *(param_2 + 0x44);
    *(param_1 + 0x20) = *(param_2 + 0x48);
    *(param_1 + 0x24) = param_3;
    if (*(param_1 + 4) != param_2) {
        arg_14h = *(param_1 + 0xc);
        if (*(param_2 + 0x24) < *(param_1 + 0xc)) {
            arg_14h = *(param_2 + 0x24);
        }
        *(param_1 + 8) = arg_14h;
        fcn.0002245a(*(param_1 + 4),0x108,param_2,arg_14h);
        *(*(param_1 + 4) + 0x24) = *(param_1 + 8);
    }
    return;
}


/* fcn.00022123 @ 0x22123 */

void __fastcall fcn.00022123(int param_1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    
    uVar2 = 0;
    if (*(param_1 + 0x228) != '\0') {
        do {
            uVar1 = uVar2;
            uVar2 = uVar2 + 1;
            *(*(param_1 + 0x20c + uVar1 * 4) + 0x1c) = *(param_1 + 0x209) - 1;
        } while (uVar2 < *(param_1 + 0x228));
    }
    return;
}


/* fcn.0001ea73 @ 0x1ea73 */

int __thiscall fcn.0001ea73(int param_1,uint8_t param_2)

{
    if (param_2 < *(param_1 + 0x1900)) {
        param_1 = param_2 * 200 + param_1;
    }
    else {
        param_1 = 0;
    }
    return param_1;
}


/* fcn.0001d3b7 @ 0x1d3b7 */

void fcn.0001d3b7(uint32_t param_1,uint param_2)

{
    uint32_t uVar1;
    
    uVar1 = param_1 & 0xfffffffe;
    if ((param_1 & 4) == 0) {
        uVar1 = param_1;
    }
    fcn.0001d3d7(uVar1,param_2);
    return;
}


/* fcn.00021e0f @ 0x21e0f */

int __thiscall fcn.00021e0f(int param_1,uint *param_2,uint param_3)

{
    int iVar1;
    uint *puVar2;
    
    if (*(param_1 + 0x208) < 0x60) {
        puVar2 = *(param_1 + 0x208) * 0x30 + *(param_1 + 0x204);
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar2 = *param_2;
            param_2 = param_2 + 1;
            puVar2 = puVar2 + 1;
        }
        *(*(param_1 + 0x208) * 0x30 + 0x1c + *(param_1 + 0x204)) = param_3;
        iVar1 = *(param_1 + 0x208) * 0x30 + *(param_1 + 0x204);
        *(param_1 + 0x208) = *(param_1 + 0x208) + 1;
    }
    else {
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.0001c4b1 @ 0x1c4b1 */

int fcn.0001c4b1(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.0001c77e(param_1);
    if (iVar1 == 0) {
        iVar1 = fcn.0001c841(*(param_1 + 0x14));
        if (iVar1 != 0) {
            fcn.0001d34b(param_1);
        }
    }
    return iVar1;
}


/* fcn.00021dd6 @ 0x21dd6 */

void __thiscall fcn.00021dd6(int param_1,int param_2)

{
    uint8_t uVar1;
    uint8_t uVar2;
    
    uVar1 = *(param_1 + 0x228);
    uVar2 = 0;
    if (uVar1 != 0) {
        do {
            if (*(param_1 + 0x20c + uVar2 * 4) == param_2) {
                return;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < uVar1);
    }
    *(param_1 + 0x20c + uVar1 * 4) = param_2;
    *(param_1 + 0x228) = *(param_1 + 0x228) + '\x01';
    return;
}


/* fcn.0001c338 @ 0x1c338 */

uint32_t __fastcall fcn.0001c338(int param_1)

{
    char cVar1;
    int iVar2;
    uint8_t uVar4;
    uint32_t uVar3;
    uint8_t uVar5;
    char cVar7;
    int unaff_EBX;
    uint32_t uVar6;
    int unaff_ESI;
    int iVar8;
    
    uVar6 = 0;
    uVar3 = 0;
    uVar4 = *(param_1 + 0x1900);
    if (uVar4 != 0) {
        do {
            iVar8 = uVar6 * 200 + param_1;
            if ((*(iVar8 + 0xc0) == '\0') && (uVar4 != 0)) {
                do {
                    iVar2 = (uVar6 >> 8) * 200;
                    cVar7 = uVar6 >> 8;
                    if ((*(param_1 + 0xc0 + iVar2) == '\0') && (uVar6 != cVar7)) {
                        cVar1 = fcn.0001711d(iVar8,0);
                        uVar4 = unaff_ESI >> 0x10;
                        uVar3 = uVar4 << 8;
                        if (cVar1 != '\0') {
                            uVar4 = uVar4 + 1;
                            uVar3 = uVar4 << 8;
                            unaff_ESI = uVar4 << 0x10;
                            unaff_EBX = iVar2 + param_1;
                        }
                    }
                    uVar4 = cVar7 + 1;
                    uVar6 = CONCAT11(uVar4,uVar6);
                } while (uVar4 < *(param_1 + 0x1900));
                if (uVar3 >> 8 == '\x01') {
                    fcn.000172f0(iVar8);
                    uVar4 = (unaff_EBX >> 0x18) + 1;
                    uVar3 = uVar4;
                    unaff_EBX = uVar4 << 0x18;
                }
                else {
                    uVar3 = 0;
                }
            }
            uVar4 = *(param_1 + 0x1900);
            uVar5 = uVar6 + 1;
            uVar6 = uVar5;
        } while (uVar5 < uVar4);
    }
    return uVar3;
}


/* fcn.0001bf26 @ 0x1bf26 */

void __fastcall fcn.0001bf26(int *param_1)

{
    int iVar1;
    int iVar2;
    uint *puVar3;
    int *piVar4;
    uint8_t uVar5;
    char cVar6;
    uint *puVar7;
    uint8_t uVar8;
    uint8_t uVar11;
    int *piVar9;
    unkbyte3 Var12;
    uint32_t uVar10;
    int *piVar13;
    int iVar14;
    bool bVar15;
    bool bVar16;
    uint uStack_10;
    int *piStack_c;
    int aiStack_8 [2];
    
    puVar7 = &uStack_10;
    piStack_c = param_1;
    aiStack_8[0] = 0;
    piVar9 = aiStack_8;
    aiStack_8[1] = 0;
    cVar6 = '\0';
    uStack_10._0_2_ = uStack_10;
    iVar14 = 2;
    iVar1 = *(param_1[0xc] + 0x20);
    piVar13 = iVar1 + 0x34;
    do {
        iVar2 = *piVar13;
        *piVar9 = iVar2;
        if ((iVar2 != 0) && ((*(*(iVar2 + 0x20) + 0xb0) & 0x30) == 0x30)) {
            *puVar7 = 1;
            cVar6 = cVar6 + '\x01';
        }
        piVar4 = piStack_c;
        piVar13 = piVar13 + 1;
        piVar9 = piVar9 + 1;
        puVar7 = puVar7 + 1;
        iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    if ((*(iVar1 + 4) == 2) || (*(iVar1 + 4) == 3)) {
        iVar14 = *(iVar1 + 0x31) << 8;
    }
    else {
        iVar14 = 0xff00;
    }
    Var12 = iVar14 >> 8;
    if (cVar6 == '\x01') {
        uVar10 = CONCAT31(Var12,uStack_10._1_1_ != '\0');
    }
    else {
        if ((cVar6 != '\x02') || (*(iVar1 + 4) != 3)) goto code_r0x0001c0da;
        uVar10 = CONCAT31(Var12,iVar14 >> 8) ^ 1;
        if (1 < uVar10) {
            return;
        }
        cVar6 = fcn.0001726e();
        if ((cVar6 == '\0') && (uVar10 = CONCAT31(Var12,uVar10) ^ 1, piVar4[0xe] == 2)) {
            fcn.00016ca7(0x84);
        }
    }
    uStack_10 = uVar10 & 0xff;
    iVar14 = aiStack_8[uStack_10 - 1];
    cVar6 = fcn.0001726e();
    uVar8 = uVar10;
    uVar11 = uVar10 >> 8;
    if (cVar6 == '\0') {
        if ((((uVar11 != uVar8) || ((*(*(iVar14 + 0x20) + 0xb0) >> 2 & 1) != 0)) || (piVar4[0xe] == 3)) ||
           ((piVar4[0xe] == 1 || (piVar4[0xe] == 4)))) goto code_r0x0001c0da;
    }
    else {
        fcn.00016c6c(0x84);
    }
    uVar10 = uStack_10;
    puVar7 = *(*(*piVar4 + 0xc4) + 0x10);
    puVar3 = *(*(*piVar4 + 0xc4) + 0x14);
    if (uVar11 == uVar8) {
        uVar5 = uVar8 ^ 1;
        *(iVar1 + 0x31) = uVar5;
        *(puVar7 + 0x15) = uVar5;
        *(puVar3 + 0x15) = uVar5;
    }
    bVar15 = *(iVar1 + 4) == 3;
    if (bVar15) {
        *(iVar1 + 4) = 2;
        puVar7[2] = 2;
        puVar3[2] = 2;
    }
    if (5 < uVar8) {
        return;
    }
    bVar16 = *(uStack_10 + 0x4c + iVar1) != '\0';
    if (bVar16) {
        *(uStack_10 + 0x4c + iVar1) = 0;
        *(puVar7 + uStack_10 * 2 + 0x1b) = 0;
        (***puVar7)();
        *(puVar3 + uVar10 * 2 + 0x1b) = 0;
        (***puVar3)();
    }
    if (bVar16 || (bVar15 || uVar11 == uVar8)) {
        *(piVar4[0xc] + 0x2c) = 1;
        *(*(*piVar4 + 0xc4) + 0x4c) = 1;
    }
code_r0x0001c0da:
    fcn.0001b882(piVar4 + 0xd,piVar4 + 0xe);
    return;
}


/* fcn.00016db1 @ 0x16db1 */

uint fcn.00016db1(uint8_t param_1,uint8_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint uVar3;
    
    iVar1 = *(*(*(*0x155ec + 0x1c) + 0x1c + param_1 * 4) + 4);
    if (iVar1 == 0) {
        return 0x13;
    }
    iVar1 = *(iVar1 + 0x10 + param_2 * 4);
    if (iVar1 == 0) {
        uVar3 = 0xf;
    }
    else {
        uVar2 = *(*(iVar1 + 0x20) + 0xb0);
        if (((uVar2 >> 4 & 1) != 0) && ((uVar2 & 0xc4) == 0)) {
            fcn.00016ca7(0x84);
            fcn.00016c6c(1);
            fcn.0001b236(*(iVar1 + 0x20));
            return 0;
        }
        uVar3 = 0x10;
    }
    return uVar3;
}


/* fcn.0001c629 @ 0x1c629 */

void __fastcall fcn.0001c629(int param_1)

{
    uint *puVar1;
    uint32_t uVar2;
    int iVar3;
    uint *puVar4;
    
    puVar1 = *(param_1 + 8);
    while (puVar4 = puVar1, puVar4 != NULL) {
        puVar1 = *puVar4;
        uVar2 = *(puVar4[8] + 0xb0);
        if ((uVar2 >> 4 & 1) == 0) {
            if ((((uVar2 >> 1 & 1) == 0) || (puVar4[7] == 0)) && ((uVar2 >> 6 & 1) == 0)) {
                fcn.0001c5b0(puVar4);
            }
        }
        else if (((uVar2 >> 10 & 1) != 0) && (iVar3 = fcn.00011a23(*(puVar4[8] + 0xac),0xda), iVar3 == 2)) {
            fcn.00016ca7(0x200);
            if (puVar4[7] == 0) {
                puVar4 = puVar4[10];
            }
            else {
                puVar4 = *(puVar4[7] + 0x38);
            }
            (***puVar4)(1);
        }
    }
    return;
}


/* fcn.00021f34 @ 0x21f34 */

void __thiscall fcn.00021f34(int param_1,int param_2,int param_3)

{
    char cVar1;
    int iVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint8_t uVar6;
    uint32_t unaff_EBX;
    uint32_t uVar7;
    uint32_t unaff_EBP;
    int *piVar8;
    int iVar9;
    uint unaff_EDI;
    int in_stack_ffffffe0;
    uint uStack_4;
    
    uVar7 = 0;
    uVar6 = 0;
    uVar4 = 0;
    if (*(param_1 + 0x200) != 0) {
        do {
            piVar8 = uVar4 * 0x10 + param_1;
            if (piVar8[2] == *(param_3 + 0x28)) {
                if (piVar8[1] != *(param_3 + 0x20)) {
                    if (*(param_3 + 0x2c) <= piVar8[3]) {
                        if (*(param_3 + 0x38) != '\0') {
                            do {
                                uVar7 = param_3 + 0xd8 + uVar6 * 0x30;
                                if (uVar7 == 0) {
                                    return;
                                }
                                cVar1 = fcn.0001c6b5();
                                if (cVar1 != '\0') {
                                    fcn.00016ca7();
                                }
                                uVar6 = uVar6 + 1;
                            } while (uVar6 < *(param_3 + 0x38));
                        }
                        iVar2 = fcn.00021e6f(param_2 + 0x14);
                        if (iVar2 == 0) {
                            return;
                        }
                        if (uVar7 == 0) {
                            return;
                        }
                        *(iVar2 + 0x1c) = unaff_EBX >> 0x18;
                        *(iVar2 + 0x18) = *(iVar2 + 0x18) | *(uVar7 + 0x18) & 2;
                        return;
                    }
                    in_stack_ffffffe0 = *piVar8 + 0x14;
                    iVar2 = fcn.00021e6f();
                    if (iVar2 != 0) {
                        fcn.00016ca7(*(iVar2 + 0x18) & 0x400004);
                    }
                    uVar4 = unaff_EBP >> 0x18;
                }
                break;
            }
            uVar3 = uVar4 + 1;
            uVar4 = uVar3;
        } while (uVar3 < *(param_1 + 0x200));
    }
    *(param_1 + uVar4 * 0x10) = uStack_4;
    *(param_1 + 4 + uVar4 * 0x10) = *(param_3 + 0x20);
    *(param_1 + 8 + uVar4 * 0x10) = *(param_3 + 0x28);
    *(param_1 + 0xc + uVar4 * 0x10) = *(param_3 + 0x2c);
    if (uVar4 == *(param_1 + 0x200)) {
        *(param_1 + 0x200) = *(param_1 + 0x200) + '\x01';
    }
    if (*(param_3 + 0x38) != '\0') {
        do {
            iVar9 = param_3 + 0xd8 + uVar7 * 0x30;
            iVar2 = fcn.00021e6f(iVar9);
            if (iVar2 == 0) {
                iVar2 = fcn.00021e0f(iVar9,0xffffffff);
                if (iVar2 == 0) {
                    return;
                }
            }
            else {
                uVar5 = *(iVar9 + 0x18) | *(iVar2 + 0x18);
                uVar4 = uVar5 & 0xffffff78;
                if ((uVar5 & 0x40) == 0) {
                    uVar4 = uVar5;
                }
                uVar5 = uVar4 & 0xfffffffe;
                if ((uVar4 & 0x86) == 0) {
                    uVar5 = uVar4;
                }
                *(iVar2 + 0x18) = *(iVar2 + 0x18) ^ (uVar5 ^ *(iVar2 + 0x18)) & 0xc20287;
            }
            cVar1 = fcn.0001c6b5(iVar9 + 0x14);
            if (cVar1 != '\0') {
                *(iVar2 + 0x18) = *(iVar2 + 0x18) ^ (*(in_stack_ffffffe0 + 0x18) ^ *(iVar2 + 0x18)) & 0xc20287;
                *(iVar2 + 0x1c) = unaff_EDI;
                fcn.0001d3d7(*(iVar2 + 0x18),0x201);
            }
            uVar6 = uVar7 + 1;
            uVar7 = uVar6;
        } while (uVar6 < *(param_3 + 0x38));
    }
    return;
}


/* fcn.0001efdd @ 0x1efdd */

void fcn.0001efdd(void)

{
    uint *puVar1;
    
    for (puVar1 = *(*(*0x155ec + 0x1c) + 8); puVar1 != NULL; puVar1 = *puVar1) {
        if ((*(puVar1[8] + 0xb0) >> 0xf & 1) != 0) {
            fcn.0001f00f(puVar1[8]);
        }
    }
    return;
}


/* fcn.0001edf3 @ 0x1edf3 */

void __fastcall fcn.0001edf3(int param_1)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    
    uVar1 = *(*(param_1 + 0x30) + 0xb0);
    if (((uVar1 >> 8 & 1) != 0) && ((uVar1 >> 0x10 & 1) == 0)) {
        iVar2 = *(*(param_1 + 4) + 0x20);
        if ((*(*(param_1 + 4) + 0x34) < 0) && (iVar3 = fcn.0001d4ba(), iVar2 != iVar3)) {
            fcn.00016c6c(0x80100);
        }
        else {
            fcn.00021f34(*(param_1 + 0x30),*(param_1 + 4));
        }
    }
    if ((*(*(param_1 + 0x30) + 0xb0) & 0x1000100) == 0) {
        *(*(param_1 + 0x30) + 0x88) = 0x200;
        if ((*(*(param_1 + 0x30) + 0xb0) >> 0x19 & 1) != 0) {
            *(*(param_1 + 0x30) + 0x88) = 0x1000;
        }
        *(*(param_1 + 0x30) + 0x10) = *(*(param_1 + 0x30) + 0x80);
        fcn.0001c896(*(param_1 + 0x30));
        if ((*(*(param_1 + 0x30) + 0x84) & 0x40) == 0) {
            fcn.00016ca7(0x40);
        }
        fcn.00016c6c(0x80023);
    }
    return;
}


/* fcn.00021eb5 @ 0x21eb5 */

int __fastcall fcn.00021eb5(int param_1)

{
    int iVar1;
    int iVar2;
    
    do {
        if (*(param_1 + 0x200) <= *(param_1 + 0x209)) {
            return 0;
        }
        iVar1 = *(param_1 + *(param_1 + 0x209) * 0x10);
        *(param_1 + 0x209) = *(param_1 + 0x209) + 1;
        iVar2 = fcn.00021e6f();
        if (iVar1 == 0) {
            return 0;
        }
        if (iVar2 == 0) {
            return 0;
        }
    } while ((((*(iVar1 + 0xb0) >> 6 & 1) != 0) || ((*(iVar2 + 0x18) >> 0x13 & 1) == 0)) ||
            (*(iVar2 + 0x1c) != *(param_1 + 0x209) - 1));
    return iVar1;
}


/* fcn.0001e55a @ 0x1e55a */

void __thiscall fcn.0001e55a(int param_1,int param_2)

{
    char cVar1;
    uint8_t uVar2;
    int iVar3;
    uint *puVar4;
    uint8_t uVar5;
    uint8_t uVar6;
    uint unaff_EBX;
    uint32_t uVar7;
    int iVar8;
    uint32_t uVar9;
    int iVar10;
    uint8_t uStack_21;
    uint8_t uStack_20;
    uchar uStack_1f;
    uchar uStack_1e;
    uint uStack_1c;
    uint32_t uStack_18;
    uchar uStack_c;
    
    uStack_1c = *(*0x155ec + 0x1c);
    uVar7 = 0;
    iVar10 = 0x100;
    uStack_1f = 0;
    uStack_1e = 0;
    uVar9 = *(param_1 + 4) + 0xd8 + *(*(param_1 + 4) + 0x38) * 0x30;
    uStack_18 = uVar9;
    cVar1 = fcn.0001871c(0x100);
    if (cVar1 != '\0') {
        iVar8 = *(param_1 + 4);
        uVar6 = 0;
        uVar2 = 0;
        uStack_21 = 0;
        uStack_20 = 0;
        if (*(iVar8 + 0x38) != '\0') {
            do {
                iVar8 = iVar8 + 0xd8 + uVar7 * 0x30;
                iVar10 = iVar8;
                cVar1 = fcn.00016cfb(iVar8);
                if (cVar1 == '\0') {
                    iVar8 = fcn.0001c295(iVar10,iVar8);
                    if (iVar8 != 0) {
                        if ((*(iVar8 + 0xb0) >> 4 & 1) == 0) {
                            uVar2 = unaff_EBX >> 0x18;
                            goto code_r0x0001e5fb;
                        }
                        iVar3 = fcn.00021e6f();
                        if ((iVar3 == 0) || (*(iVar3 + 0x1c) == param_2)) {
                            uVar6 = *(iVar8 + 0x84);
                            goto joined_r0x0001e63f;
                        }
                    }
code_r0x0001e649:
                    uVar6 = uStack_20;
code_r0x0001e64d:
                    uVar2 = uStack_21;
                }
                else {
                    iVar10 = param_2;
                    iVar8 = fcn.0001e8a7();
                    if (iVar8 == 0) goto code_r0x0001e649;
                    uVar6 = *(iVar8 + 0x84);
joined_r0x0001e63f:
                    if ((uVar6 & 8) != 0) {
                        unaff_EBX = CONCAT31(unaff_EBX >> 8,1);
                        uVar6 = 1;
                        goto code_r0x0001e64d;
                    }
                    uVar2 = 1;
code_r0x0001e5fb:
                    uVar6 = uStack_20;
                }
                iVar8 = *(param_1 + 4);
                uVar5 = uVar7 + 1;
                uVar7 = uVar5;
            } while (uVar5 < *(iVar8 + 0x38));
            uVar9 = uStack_18;
        }
        uVar7 = 0;
        if (((uVar2 & uVar6) != 0) && (iVar10 = fcn.00021931(iVar10,*(uVar9 + 0x18)), iVar10 != 0x10)) {
            iVar10 = *(param_1 + 4);
            if (*(iVar10 + 0x38) == '\0') {
                return;
            }
            do {
                iVar10 = iVar10 + 0xd8 + uVar7 * 0x30;
                cVar1 = fcn.00016cfb(iVar10);
                if (((cVar1 != '\0') && (iVar8 = fcn.0001e8a7(iVar10,param_2), iVar8 != 0)) &&
                   (iVar8 = fcn.0001c77e(iVar8 + 0x14), (*(*(iVar8 + 0x20) + 0xb0) >> 8 & 1) != 0)) {
                    fcn.00016ca7(0x10000);
                }
                iVar8 = fcn.00021e6f(iVar10);
                if (((iVar8 != 0) && (param_2 == *(iVar8 + 0x1c))) &&
                   ((iVar10 = fcn.0001c77e(iVar10), iVar10 != 0 && ((*(*(iVar10 + 0x20) + 0xb0) >> 8 & 1) != 0)))) {
                    fcn.00016ca7(0x10000);
                }
                iVar10 = *(param_1 + 4);
                uVar6 = uVar7 + 1;
                uVar7 = uVar6;
            } while (uVar6 < *(iVar10 + 0x38));
            return;
        }
    }
    if (*(*(param_1 + 4) + 0x39) != '\0') {
        do {
            cVar1 = fcn.0001d49b(0x14230);
            if (((cVar1 == '\0') && (cVar1 = fcn.0001d49b(0x14238), cVar1 == '\0')) ||
               ((*(*(param_1 + 4) + 0x34) & 0x2000000) == 0)) {
                *(uVar9 + 0x2a) = 0;
                *(uVar9 + 0x18) = *(uVar9 + 0x18) & 0xffffbfff;
                *(uVar9 + 0x2c) = 0;
                *(uVar9 + 0x30) = 0;
            }
            if (((*(uVar9 + 0x18) & 0x4000) != 0) && (*(*0x150c4 + 0x23c) != 0)) {
                return;
            }
            if (*(uVar9 + 0x2a) != '\0') {
                if (*(*0x150c4 + 0x238) != 0) {
                    return;
                }
                *(*0x155ec + 0x1b90) = 1;
            }
            fcn.00022751(&uStack_1c,uVar9,0x10);
            uStack_c = 0;
            iVar10 = 1;
            while (uVar7 = uVar9, iVar8 = fcn.000185ab(), iVar8 != 0) {
                fcn.0001e4b8(uVar9,&uStack_20,iVar10);
                iVar10 = iVar10 + 1;
            }
            *(*(param_1 + 0x34) + 0x228) = 0;
            *(*(param_1 + 0x34) + 0x229) = *(*(param_1 + 0x34) + 0x208);
            puVar4 = fcn.0001c4e6(uVar9,param_1);
            if (puVar4 != NULL) {
                fcn.0001db56(*(param_1 + 4),*(*(param_1 + 0x34) + -0x10 + *(*(param_1 + 0x34) + 0x209) * 0x10));
                fcn.00022123();
                if (uVar7 >> 8 != '\0') {
                    uVar7 = uVar7 & 0xffff0000;
                    *(*0x150c4 + 0x23c) = *puVar4;
                }
                if (uVar7 >> 0x10 != '\0') {
                    *(*0x150c4 + 0x238) = *puVar4;
                }
            }
            uVar9 = fcn.00021d7b();
            uVar6 = uStack_1c + 1;
            uStack_1c = CONCAT31(uStack_1c._1_3_,uVar6);
        } while (uVar6 < *(*(param_1 + 4) + 0x39));
    }
    return;
}


/* fcn.0001f00f @ 0x1f00f */

void __cdecl fcn.0001f00f(int32_t arg_8h)

{
    int iVar1;
    int32_t var_30h;
    int32_t var_18h;
    
    iVar1 = fcn.00021e6f(arg_8h + 0x14);
    if (iVar1 == 0) {
        fcn.00021b8f(arg_8h);
        var_18h = var_18h | 0x80000;
        fcn.00021e0f(&var_30h,0xffffffff);
    }
    return;
}


/* fcn.00021b8f @ 0x21b8f */

void __thiscall fcn.00021b8f(int param_1,int param_2)

{
    uint uVar1;
    
    fcn.00022751(param_1,param_2 + 0x14,0x10);
    *(param_1 + 0x10) = *(param_2 + 0x78);
    uVar1 = fcn.00023e00();
    *(param_1 + 0x20) = uVar1;
    *(param_1 + 0x14) = *(param_2 + 0x80);
    uVar1 = *(param_2 + 0xb0);
    *(param_1 + 0x1c) = 0xffffffff;
    *(param_1 + 0x18) = uVar1;
    fcn.000224aa(param_1 + 0x24,0,0xc);
    return;
}


/* fcn.0001b542 @ 0x1b542 */

uint __fastcall fcn.0001b542(int param_1)

{
    int iVar1;
    char cVar2;
    uint8_t uVar3;
    int iVar4;
    int *piVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    
    uVar7 = 0;
    uVar3 = 0;
    if (*(param_1 + 0x2c) != '\0') {
        do {
            uVar6 = 0;
            iVar1 = **(param_1 + 0x30 + uVar7 * 4);
            fcn.0001bbba();
            iVar4 = *(iVar1 + 0xc4);
            if ((*(*(param_1 + 0x30 + uVar7 * 4) + 0x28) >> 9 & 1) == 0) {
                fcn.0001a71c();
                fcn.0001a71c();
            }
            if ((((*(*(iVar4 + 0x10) + 8) == 2) && (*(iVar4 + 0xc) != 1)) && (cVar2 = fcn.0001a0d4(), cVar2 != '\0'))
               && (iVar4 = fcn.0001a3ab(), iVar4 != 0)) {
                fcn.0001acf9(iVar4);
                (****(param_1 + 0x38))(1);
            }
            if (*(param_1 + 0xc) != 0) {
                piVar5 = param_1 + 0x10;
                uVar7 = *(param_1 + 0xc);
                do {
                    if ((*(*(*piVar5 + 0x20) + 0xb0) >> 4 & 1) != 0) {
                        uVar6 = uVar6 | *(*(*piVar5 + 0x20) + 0x8c);
                    }
                    piVar5 = piVar5 + 1;
                    uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
            }
            *(iVar1 + 0x8c) = uVar6;
            uVar3 = uVar3 + 1;
            uVar7 = uVar3;
        } while (uVar3 < *(param_1 + 0x2c));
    }
    *(param_1 + 8) = 0;
    uVar7 = 0;
    if (*(param_1 + 0x2c) != 0) {
        do {
            iVar1 = **(param_1 + 0x30 + uVar7 * 4);
            iVar4 = *(iVar1 + 0xc4);
            if (*(iVar4 + 0xc) == 1) {
                iVar1 = *(iVar1 + 0xc0);
                if (iVar1 == 0) {
code_r0x0001b4c9:
                    *(param_1 + 8) = 5;
                    return 5;
                }
                if (iVar1 == 1) {
                    if ((*(*(iVar4 + 0x14) + 8) < 2) && (*(iVar4 + 0x3c) != 0)) {
                        *(param_1 + 8) = 6;
                    }
                    else {
                        *(param_1 + 8) = 2;
                    }
                    return *(param_1 + 8);
                }
                if (iVar1 == 2) goto code_r0x0001b4c9;
                if (iVar1 == 3) {
                    *(param_1 + 8) = 1;
                    return 1;
                }
                if (iVar1 == 4) goto code_r0x0001b4c9;
            }
            uVar3 = uVar7 + 1;
            uVar7 = uVar3;
        } while (uVar3 < *(param_1 + 0x2c));
    }
    return 0;
}


/* fcn.0001f30b @ 0x1f30b */

void fcn.0001f30b(int32_t param_1,int32_t param_2,int32_t param_3)

{
    fcn.0001f299(param_1,param_2,param_3,0x28);
    return;
}


/* fcn.0001f299 @ 0x1f299 */

int16_t __cdecl fcn.0001f299(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int8_t arg_14h)

{
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_10h;
    int16_t var_ah;
    int8_t var_8h;
    
    var_1ch = 0;
    var_20h = *(*0x150c4 + 0x166) + arg_8h * 0x10 + arg_10h;
    var_10h = (arg_10h >> 0x10) << 9;
    var_18h = arg_ch;
    var_8h = arg_14h;
    (****(*0x150c4 + 0x23c))(&var_20h);
    return var_ah;
}


/* fcn.0001f322 @ 0x1f322 */

void fcn.0001f322(int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4)

{
    fcn.0001f237(param_1,param_2,param_3,param_4,0x2a);
    return;
}


/* fcn.0001f237 @ 0x1f237 */

int16_t __cdecl fcn.0001f237(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int8_t arg_18h)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_10h;
    int16_t var_ah;
    int8_t var_8h;
    
    uVar1 = arg_ch * 0x10;
    uVar3 = uVar1 - *(*0x150c4 + 0x1ae);
    uVar2 = arg_14h;
    var_20h = uVar3 + uVar2;
    var_1ch = ((arg_ch * 0x10 >> 0x20) - (uVar1 < *(*0x150c4 + 0x1ae))) + (uVar2 >> 0x1f) + CARRY4(uVar3,uVar2);
    var_10h = (arg_14h >> 0x10) << 9;
    var_18h = arg_10h;
    var_8h = arg_18h;
    fcn.0001b83f(&var_20h);
    return var_ah;
}


/* fcn.0001b83f @ 0x1b83f */

void __thiscall fcn.0001b83f(int param_1,uint param_2)

{
    int iVar1;
    
    iVar1 = *0x155ec + 0x1938;
    if (*(*(param_1 + 0xc4) + 0xc) == 0) {
        fcn.0001a240();
    }
    else {
        fcn.0001a938(iVar1,param_2);
    }
    fcn.0001aa05(iVar1);
    return;
}


/* fcn.0001f2f0 @ 0x1f2f0 */

void fcn.0001f2f0(int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4)

{
    fcn.0001f237(param_1,param_2,param_3,param_4,0x28);
    return;
}


/* fcn.0001f09a @ 0x1f09a */

int16_t fcn.0001f09a(ushort *param_1)

{
    int16_t iVar1;
    
    iVar1 = 0;
    if (param_1[1] != 0) {
        iVar1 = (1 << (param_1[1] & 0x1f)) + -1 << (*param_1 & 0x1f);
    }
    return iVar1;
}


/* fcn.0001f83c @ 0x1f83c */

uint __thiscall fcn.0001f83c(int param_1,int16_t param_2)

{
    uint16_t uVar1;
    uint uVar2;
    
    uVar2 = fcn.0001f09a(param_1 + 0xc + param_2 * 0x14);
    uVar1 = ~*(param_2 * 0x14 + 4 + param_1) & uVar2;
    return CONCAT31(CONCAT22(uVar2 >> 0x10,uVar1) >> 8,uVar1 == uVar2);
}


/* fcn.000221b6 @ 0x221b6 */

int16_t __cdecl fcn.000221b6(int32_t arg_8h,uint32_t arg_ch,code *noname_2,int32_t arg_14h)

{
    int16_t iVar1;
    uint32_t uVar2;
    uint32_t *puVar3;
    int iVar4;
    uint uVar5;
    uint32_t uVar6;
    int16_t iVar7;
    int32_t var_40h;
    int8_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00018ecd(arg_8h,&var_4h);
    if (iVar1 != 0) {
        return iVar1;
    }
    fcn.0001fcc6(0x2000,*(*0x150c4 + 0x16a),*(*0x150c4 + 0x1a6),8);
    iVar1 = fcn.0001fea0(var_4h);
    if (iVar1 == 0) {
        fcn.0001fdc7(&var_ch,&var_10h,&var_8h);
        iVar1 = fcn.00022154(arg_8h,var_ch,var_8h);
        iVar1 = fcn.0001fea0(iVar1 + var_10h);
        if (iVar1 == 0) {
            fcn.0001fdf9();
            iVar7 = 0;
            uVar6 = 0;
            if (arg_ch != 0) {
                do {
                    while ((puVar3 = fcn.0001fdf9(), *puVar3 < arg_8h && (uVar2 = fcn.0001fe99(), 1 < uVar2))) {
                        iVar1 = fcn.0001fe09();
                        if (iVar1 != 0) goto code_r0x00022248;
                    }
                    puVar3 = fcn.0001fdf9();
                    uVar2 = *puVar3;
                    if (*puVar3 == arg_8h) {
                        iVar4 = fcn.0001fdf9();
                        uVar5 = *(iVar4 + 4);
                    }
                    else {
                        uVar5 = 0;
                    }
                    (*noname_2)(arg_8h,uVar2 == arg_8h,uVar5,arg_14h);
                    uVar6 = uVar6 + 1;
                    arg_8h = arg_8h + 1;
                } while (uVar6 < arg_ch);
            }
            goto code_r0x0002224b;
        }
    }
code_r0x00022248:
    iVar7 = iVar1;
code_r0x0002224b:
    fcn.0001e001(var_40h);
    return iVar7;
}


/* fcn.00018a80 @ 0x18a80 */

uint __fastcall fcn.00018a80(uint param_1)

{
    uint uVar1;
    
    uVar1 = fcn.00018fa7(*(*0x150c4 + 0x1a6),8);
    fcn.0001fcc6(0x200,uVar1);
    return param_1;
}


/* fcn.0001f0b6 @ 0x1f0b6 */

int16_t fcn.0001f0b6(uint *param_1,uint param_2)

{
    uint16_t uVar1;
    int16_t iVar2;
    int16_t iVar3;
    int16_t iVar4;
    uint unaff_retaddr;
    int iStack_c;
    
    iVar3 = 0;
    fcn.0001e0fe(0);
    if ((*(param_1 + 6) & 2) == 0) goto code_r0x0001f1fb;
    if (*(param_1 + 1) == 0) {
        iVar2 = fcn.0001f30b(unaff_retaddr,iStack_c,0x100000);
        if ((iVar2 == 0) && (iVar2 = fcn.0001f322(param_2,*param_1,iStack_c,0x100000), iVar2 == 0)) {
code_r0x0001f1f7:
            *(param_1 + 6) = *(param_1 + 6) & 0xfd;
            goto code_r0x0001f1fb;
        }
    }
    else {
        iVar2 = iVar3;
        if ((*(param_1 + 1) != -1) && (iVar2 = fcn.0001f2f0(param_2,*param_1,iStack_c,0x100000), iVar2 == 0)) {
            iVar4 = 0;
            uVar1 = 1;
            do {
                if (((uVar1 & ~*(param_1 + 1)) != 0) &&
                   (iVar2 = fcn.0001f30b(unaff_retaddr,iVar4 * 0x200 + iStack_c,CONCAT22(1,iVar4)), iVar2 != 0))
                goto code_r0x0001f1f2;
                uVar1 = uVar1 * 2;
                iVar4 = iVar4 + 1;
            } while (iVar4 < 0x10);
            iVar2 = fcn.0001f322(param_2,*param_1,iStack_c,0x100000);
            if (iVar2 == 0) goto code_r0x0001f1f7;
        }
    }
code_r0x0001f1f2:
    iVar3 = iVar2;
code_r0x0001f1fb:
    fcn.0001e001(iStack_c);
    return iVar3;
}


/* fcn.0001ff50 @ 0x1ff50 */

int16_t fcn.0001ff50(uint param_1)

{
    int16_t iVar1;
    
    iVar1 = fcn.0001fea0(param_1);
    if (iVar1 == 0) {
        fcn.0001fecc(param_1);
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.0001fecc @ 0x1fecc */

void __thiscall fcn.0001fecc(int *param_1,int32_t param_2)

{
    uint32_t arg_ch;
    
    arg_ch = *(param_1 + 4);
    *(param_1 + 0x29) = 1;
    fcn.0002245a((param_1[9] - param_1[8]) * arg_ch + *param_1,arg_ch,param_2,arg_ch);
    return;
}


/* fcn.0001fda2 @ 0x1fda2 */

int16_t __fastcall fcn.0001fda2(int param_1)

{
    int16_t iVar1;
    
    if ((*(param_1 + 0x28) != '\0') && (*(param_1 + 0x29) != '\0')) {
        iVar1 = fcn.0001fd18(0x2a);
        if (iVar1 != 0) {
            return iVar1;
        }
        *(param_1 + 0x29) = 0;
    }
    return 0;
}


/* fcn.0001f9d8 @ 0x1f9d8 */

ushort __thiscall fcn.0001f9d8(int param_1,int16_t param_2)

{
    uint16_t uVar1;
    uint16_t uVar2;
    int iVar3;
    
    iVar3 = param_2 * 0x14;
    uVar2 = fcn.0001f09a(param_1 + 0xc + iVar3);
    uVar1 = *(iVar3 + 4 + param_1);
    *(iVar3 + 4 + param_1) = ~uVar2 & uVar1;
    return CONCAT11(uVar1 >> 8,(~uVar2 & uVar1) != uVar1);
}


/* fcn.0001f33d @ 0x1f33d */

void fcn.0001f33d(int32_t param_1,int32_t param_2,int32_t param_3)

{
    fcn.0001f299(param_1,param_2,param_3,0x2a);
    return;
}


/* fcn.0001ba79 @ 0x1ba79 */

uint32_t __fastcall fcn.0001ba79(int param_1)

{
    return CONCAT31(*(param_1 + 0xb4) >> 8,*(*(param_1 + 0xb4) + 0x41)) & 0xffffff01;
}


/* fcn.0001bc05 @ 0x1bc05 */

void __thiscall fcn.0001bc05(int param_1,uint8_t param_2)

{
    uint8_t *puVar1;
    
    puVar1 = *(param_1 + 0xb4) + 0x41;
    *puVar1 = *puVar1 ^ (*(*(param_1 + 0xb4) + 0x41) ^ param_2) & 1;
    (****(*(param_1 + 0xb8) + 0x38))(1);
    fcn.00018ffd();
    return;
}


/* fcn.0001f48e @ 0x1f48e */

void __thiscall fcn.0001f48e(int32_t param_1,int32_t param_2,uint32_t param_3)

{
    fcn.000221b6(param_2,param_3,0xfa0e,param_1);
    return;
}


/* fcn.0001ff16 @ 0x1ff16 */

int16_t fcn.0001ff16(uint param_1,int param_2)

{
    int16_t iVar1;
    
    iVar1 = fcn.0001fe61(param_1,param_2);
    if (iVar1 == 0) {
        if (*(*0x150c4 + 0x1b6) < *(*0x150c4 + 0x1b2)) {
            *(param_2 + 4) = 0xffff;
        }
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.0001fe61 @ 0x1fe61 */

int16_t __thiscall fcn.0001fe61(int *param_1,uint32_t param_2)

{
    int16_t iVar1;
    uint32_t arg_ch;
    
    iVar1 = fcn.0001fea0(param_2);
    if (iVar1 == 0) {
        arg_ch = *(param_1 + 4);
        fcn.0002245a(param_2,arg_ch,(param_1[9] - param_1[8]) * arg_ch + *param_1,arg_ch);
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.0001f86d @ 0x1f86d */

uint __thiscall fcn.0001f86d(int param_1,int16_t param_2)

{
    uint16_t uVar1;
    uint uVar2;
    
    uVar2 = fcn.0001f09a(param_1 + 0xc + param_2 * 0x14);
    uVar1 = ~*(param_2 * 0x14 + 4 + param_1);
    return CONCAT31(CONCAT22(uVar2 >> 0x10,uVar1) >> 8,(uVar2 & uVar1) != 0);
}


/* fcn.0001f210 @ 0x1f210 */

uint fcn.0001f210(uint param_1,int param_2)

{
    uint16_t uVar1;
    
    uVar1 = fcn.0001f09a(&stack0x0000000c);
    *(param_2 + 4) = *(param_2 + 4) | uVar1;
    if (*(param_2 + 4) == -1) {
        *(param_2 + 6) = *(param_2 + 6) & 0xfd;
    }
    return 0;
}


/* fcn.0001fa68 @ 0x1fa68 */

uint __thiscall fcn.0001fa68(int param_1,int param_2)

{
    uint16_t uVar1;
    int16_t *piVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    
    piVar2 = *(param_1 + 4);
    if (*piVar2 != 0) {
        iVar4 = *piVar2 + -1;
        uVar1 = piVar2[iVar4 * 3 + 3];
        if ((uVar1 & 1) == (*(*(param_2 + 0x2814) + 0x18) == '*')) {
            uVar3 = *(piVar2 + iVar4 * 3 + 1);
            uVar6 = *(param_2 + 0x281c);
            uVar5 = (uVar1 >> 2) + uVar3;
            if ((uVar3 <= uVar6) && (uVar6 <= uVar5)) {
                uVar6 = *(param_2 + 0x2818) + uVar6;
                if (uVar6 < uVar5) {
                    uVar6 = uVar5;
                }
                if (uVar6 - uVar3 < 0x2000) {
                    piVar2[iVar4 * 3 + 3] = uVar1 & 3 | (uVar6 - uVar3) * 4;
                    return 1;
                }
            }
        }
    }
    return 0;
}


/* fcn.0001fbaa @ 0x1fbaa */

void __fastcall fcn.0001fbaa(int param_1)

{
    fcn.000224aa(*(param_1 + 4),0,0x200);
    fcn.0001fafb(1);
    return;
}


/* fcn.00020419 @ 0x20419 */

void __fastcall fcn.00020419(int param_1)

{
    fcn.000224aa(param_1 + 0x176,0xff,0x24);
    return;
}


/* fcn.00020222 @ 0x20222 */

void fcn.00020222(uint32_t param_1)

{
    uint uVar1;
    uint uVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    bool bVar7;
    int32_t var_4h;
    int32_t iVar8;
    int iStack_c;
    
    fcn.0001e0fe(0);
    if (iStack_c != 0) {
        uVar6 = param_1 >> 1;
        uVar3 = uVar6 / 100;
        fcn.00022f71(0x14260,1);
        if (uVar6 != 0) {
            uVar5 = uVar3;
            do {
                uVar6 = uVar6 - 1;
                bVar7 = uVar5 == 0;
                uVar5 = uVar5 - 1;
                if (bVar7) {
                    fcn.00022f71(0x14260,1);
                    uVar5 = uVar3;
                }
                fcn.000203a9(var_4h,uVar6,param_1);
            } while (uVar6 != 0);
        }
        iVar8 = 0x14260;
        fcn.00022f71(0x14260,1);
        fcn.00022f71(0x140d4,iVar8);
        uVar6 = param_1 / 100;
        fcn.00022f71(0x14260,2);
        uVar3 = uVar6;
        while (param_1 = param_1 - 1, param_1 != 0) {
            bVar7 = uVar3 == 0;
            uVar3 = uVar3 - 1;
            if (bVar7) {
                fcn.00022f71(0x14260,2);
                uVar3 = uVar6;
            }
            uVar1 = *var_4h;
            uVar2 = *(var_4h + 4);
            *var_4h = *(var_4h + param_1 * 8);
            *(var_4h + 4) = *(var_4h + 4 + param_1 * 8);
            *(var_4h + param_1 * 8) = uVar1;
            *(var_4h + 4 + param_1 * 8) = uVar2;
            fcn.000203a9(var_4h,0,param_1);
            iVar4 = fcn.000201cc(param_1);
            if (-1 < iVar4) {
                *(iStack_c + iVar4 * 4) = *(var_4h + param_1 * 8);
            }
        }
        iVar4 = fcn.000201cc(0);
        if (-1 < iVar4) {
            *(iStack_c + iVar4 * 4) = *var_4h;
        }
        iVar8 = 0x14260;
        fcn.00022f71(0x14260,2);
        fcn.00022f71(0x140d4,iVar8);
    }
    fcn.0001e001(iStack_c);
    return;
}


/* fcn.000203a9 @ 0x203a9 */

void fcn.000203a9(int param_1,uint32_t param_2,uint32_t param_3)

{
    int iVar1;
    uint uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint uVar6;
    uint32_t uVar7;
    
    uVar4 = param_2 * 2 + 1;
    uVar2 = *(param_1 + 4 + param_2 * 8);
    uVar3 = *(param_1 + param_2 * 8);
    if (uVar4 < param_3) {
        do {
            uVar7 = *(param_1 + uVar4 * 8);
            iVar1 = param_1 + uVar4 * 8;
            if ((uVar4 + 1 < param_3) && (uVar7 < *(iVar1 + 8))) {
                uVar7 = *(iVar1 + 8);
                uVar6 = *(iVar1 + 0xc);
                uVar5 = uVar4 + 1;
            }
            else {
                uVar6 = *(param_1 + 4 + uVar4 * 8);
                uVar5 = uVar4;
            }
            if (uVar7 <= uVar3) break;
            *(param_1 + param_2 * 8) = uVar7;
            *(param_1 + 4 + param_2 * 8) = uVar6;
            uVar4 = uVar5 * 2 + 1;
            param_2 = uVar5;
        } while (uVar4 < param_3);
    }
    *(param_1 + param_2 * 8) = uVar3;
    *(param_1 + 4 + param_2 * 8) = uVar2;
    return;
}


/* fcn.000201cc @ 0x201cc */

int fcn.000201cc(int param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    iVar4 = 0;
    iVar2 = 0;
    iVar3 = *(*0x150c4 + 0x1a6) + -1;
    if (-1 < iVar3) {
        do {
            if (0x7ff < iVar2) {
                return -1;
            }
            iVar1 = (iVar3 + iVar4) / 2;
            if (iVar1 == param_1) {
                return iVar2;
            }
            if (param_1 < iVar1) {
                iVar3 = iVar1 + -1;
                iVar2 = iVar2 * 2 + 1;
            }
            else {
                iVar4 = iVar1 + 1;
                iVar2 = iVar2 * 2 + 2;
            }
        } while (iVar4 <= iVar3);
    }
    return -1;
}


/* fcn.0002190e @ 0x2190e */

ulong __fastcall fcn.0002190e(int param_1)

{
    return CONCAT44(*(param_1 + 0x18),*(param_1 + 4));
}


/* fcn.0002191a @ 0x2191a */

ulong __fastcall fcn.0002191a(int param_1)

{
    return CONCAT44(*(param_1 + 0x1c),*(param_1 + 8));
}


/* fcn.00021926 @ 0x21926 */

ulong __fastcall fcn.00021926(uint *param_1)

{
    return CONCAT44(param_1[5],*param_1);
}


/* fcn.0001e91f @ 0x1e91f */

int __thiscall fcn.0001e91f(int param_1,int param_2)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    unkbyte3 Var5;
    int iVar4;
    uint unaff_EBP;
    int unaff_ESI;
    int iVar6;
    int iVar7;
    uint32_t uVar8;
    char cVar9;
    int iStack_1c;
    int iStack_18;
    char cStack_c;
    uchar uStack_4;
    
    iVar6 = 0;
    iVar7 = *(param_1 + 4) + param_2 * 0x30 + 0xd8;
    iVar4 = *(*0x155ec + 0x1c);
    iStack_1c = param_1;
    iStack_18 = iVar4;
    iVar2 = fcn.00021e6f(iVar7);
    if (iVar2 == 0) goto code_r0x0001ea63;
    iVar6 = fcn.0001c77e(iVar2);
    cVar9 = unaff_EBP >> 0x18;
    if ((*(iVar2 + 0x1c) == cVar9) || (uStack_4 = 0, *(iVar2 + 0x1c) == -1)) {
        uStack_4 = 1;
    }
    if ((iVar6 == 0) || ((*(*(iVar6 + 0x20) + 0xb0) & 0x10050) != 0x10)) {
        uVar8 = 0x10;
        fcn.00022751(&iStack_1c,iVar7,0x10);
        cStack_c = '\0';
        cVar1 = fcn.00016cfb(&iStack_1c);
        if (cVar1 == '\0') {
            uVar3 = CONCAT11(cVar9,cVar9);
            do {
                uVar8 = uVar3 & 0xff;
                iVar4 = iVar7;
                fcn.0001e4b8(iVar7,&iStack_1c,uVar8);
                Var5 = uVar3 >> 8;
                uVar3 = CONCAT31(Var5,uVar3 + '\x01');
                iVar6 = fcn.00021e6f(uVar8,iVar7);
            } while (iVar6 != 0);
            iVar2 = fcn.00021e0f(iVar4,Var5,uVar8,iVar7);
            iVar4 = unaff_ESI;
code_r0x0001ea2d:
            iVar6 = fcn.0001c4b1(uVar8,iVar7);
            if (iVar6 == 0) goto code_r0x0001ea49;
        }
        else if (iVar6 == 0) goto code_r0x0001ea2d;
        if (*(iVar6 + 0x20) != 0) {
            *(*(iVar6 + 0x20) + 0x80) = 0xffffffff;
        }
    }
    else {
        fcn.0001d3b7(*(iVar7 + 0x18),0xc20287);
        if (cStack_c == '\0') {
            *(iVar4 + 0x65) = 0;
        }
    }
code_r0x0001ea49:
    fcn.00021dd6(iVar2);
    if ((iVar6 != 0) && ((*(iVar7 + 0x18) >> 1 & 1) != 0)) {
        return iVar6;
    }
code_r0x0001ea63:
    *(iVar4 + 0x65) = 0;
    return iVar6;
}


/* fcn.000206a1 @ 0x206a1 */

uint __fastcall fcn.000206a1(int param_1)

{
    uint8_t uVar1;
    uint uVar2;
    
    uVar1 = *(param_1 + 0x33);
    if (uVar1 < *(param_1 + 0xc)) {
        uVar2 = *(param_1 + 0x34 + uVar1 * 4);
        *(param_1 + 0x33) = uVar1 + 1;
        return uVar2;
    }
    return 0;
}


/* fcn.0001afd3 @ 0x1afd3 */

void fcn.0001afd3(uint param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,int param_5)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t unaff_EBP;
    uint32_t uVar6;
    int unaff_retaddr;
    int32_t iStack_10;
    int iStack_4;
    
    uVar6 = param_3 + param_5 + CARRY4(param_2,param_4);
    iVar3 = fcn.0001b28d(param_1,param_2,param_3,param_2 + param_4,uVar6);
    if (iVar3 != 0) {
        uVar1 = *(iVar3 + 0xc);
        uVar2 = *(iVar3 + 8);
        uVar4 = *(iVar3 + 0x10) + uVar2;
        uVar5 = *(iVar3 + 0x14) + uVar1 + CARRY4(*(iVar3 + 0x10),uVar2);
        if ((((*(iVar3 + 0x10) == iStack_4) && (*(iVar3 + 0x14) == unaff_retaddr)) && (uVar2 == param_2)) &&
           (uVar1 == param_3)) {
            return;
        }
        if ((((param_3 <= uVar5) && ((uVar5 != param_3 || (param_2 < uVar4)))) && (uVar1 <= uVar6)) &&
           ((uVar1 < uVar6 || (uVar2 < unaff_EBP)))) {
            if ((uVar1 <= param_3) && ((uVar1 < param_3 || (uVar2 < param_2)))) {
                param_2 = uVar2;
                param_3 = uVar1;
            }
            if ((uVar6 < uVar5) || ((uVar6 <= uVar5 && (unaff_EBP <= uVar4)))) {
                unaff_EBP = uVar4;
                uVar6 = uVar5;
            }
            fcn.000212f9(param_2,param_3,unaff_EBP - param_2,(uVar6 - param_3) - (unaff_EBP < param_2));
            return;
        }
    }
    fcn.0001b621(iStack_10,param_2,param_3,iStack_4,unaff_retaddr);
    return;
}


/* fcn.0001af59 @ 0x1af59 */

void __thiscall fcn.0001af59(int param_1,uint param_2)

{
    if (*(param_1 + 0xc) < 7) {
        *(param_1 + 0x10 + *(param_1 + 0xc) * 4) = param_2;
        *(param_1 + 0xc) = *(param_1 + 0xc) + '\x01';
        fcn.0001d44e(param_1);
    }
    return;
}


/* fcn.00017816 @ 0x17816 */

void __fastcall fcn.00017816(int param_1)

{
    int iVar1;
    
    if (*(param_1 + 0x6a) == 0) {
        *(param_1 + 0x2a) = 0;
        *(param_1 + 0x28) = 0;
        return;
    }
    if (*(*(*(param_1 + 0x14) + 8) + 0x16) == 2) {
        *(param_1 + 0x2a) = 5;
        *(param_1 + 0x28) = 2;
        return;
    }
    iVar1 = *(param_1 + 0x10);
    *(param_1 + 0x2a) = 6;
    *(param_1 + 0x28) = *(*(iVar1 + 0x68 + *(param_1 + 0x2c) * 8) + 0xa6);
    if ((*(iVar1 + 0x20) != 0x20) && (3 < *(*(iVar1 + 0x68 + *(param_1 + 0x2c) * 8) + 0xa2))) {
        fcn.0001a213(param_1);
    }
    return;
}


/* fcn.000208ea @ 0x208ea */

void __thiscall fcn.000208ea(int param_1,uint32_t *param_2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uchar extraout_CL;
    int64_t *unaff_EBP;
    uchar *unaff_ESI;
    ulong uVar3;
    int64_t iVar4;
    int32_t var_4h;
    
    uVar3 = fcn.00023e00();
    iVar4 = fcn.00023c80(uVar3,*(param_1 + 0x5c),0);
    fcn.00023cc0(iVar4 + var_4h,*(param_1 + 0x24),0);
    *unaff_ESI = extraout_CL;
    uVar1 = *(param_1 + 0x44);
    uVar2 = *param_2;
    iVar4 = fcn.00023d60();
    *unaff_EBP = iVar4 + (uVar1 & uVar2);
    return;
}


/* fcn.00017879 @ 0x17879 */

void __thiscall fcn.00017879(int param_1,int16_t param_2)

{
    fcn.0001de2c(0x28,param_2,*(param_1 + 0x108),*(param_1 + 0x10c),*(param_1 + 0x118),*(param_1 + 0x11c),-1);
    fcn.000178d3();
    return;
}


/* fcn.000179cf @ 0x179cf */

void __fastcall fcn.000179cf(int param_1)

{
    ushort uVar1;
    
    fcn.0001de2c(0x2a,0,*(param_1 + 0x108),*(param_1 + 0x10c),*(param_1 + 0x118),*(param_1 + 0x11c),-1);
    fcn.0001de2c(0x2a,1,*(param_1 + 0x108),*(param_1 + 0x10c),*(param_1 + 0x118),*(param_1 + 0x11c),-1);
    *(param_1 + 0x2a) = 0;
    if (*(param_1 + 0x2b) != '\0') {
        fcn.0001a213(param_1);
        if (*(*(param_1 + 0x10) + 8) == 3) {
            *(param_1 + 0x2a) = 6;
            uVar1 = 7;
            goto code_r0x00017a60;
        }
        fcn.0001aa74(*(param_1 + 0x110),*(param_1 + 0x118));
    }
    uVar1 = 0;
code_r0x00017a60:
    *(param_1 + 0x28) = uVar1;
    return;
}


/* fcn.000224c7 @ 0x224c7 */

uint fcn.000224c7(int param_1,char *param_2,int param_3)

{
    if (param_3 != 0) {
        param_1 = param_1 - param_2;
        do {
            if (param_2[param_1] != *param_2) {
                return 1;
            }
            param_2 = param_2 + 1;
            param_3 = param_3 + -1;
        } while (param_3 != 0);
    }
    return 0;
}


/* fcn.00020c87 @ 0x20c87 */

void __thiscall fcn.00020c87(int *param_1,char param_2)

{
    if (param_2 == '\0') {
        *(*param_1 + 0x4a) = 1;
        (****(*(*(*param_1 + 0x18) + 0xb8) + 0x38))(1);
    }
    else {
        *(*param_1 + 0x4a) = 0;
    }
    return;
}


/* fcn.00021281 @ 0x21281 */

void __cdecl fcn.00021281(int32_t arg_8h,uint32_t arg_ch,int32_t arg_10h,int16_t arg_14h)

{
    char cVar1;
    
    if (arg_ch != 0) {
        cVar1 = fcn.00017597();
        if (cVar1 == '\0') {
            fcn.000186ba(arg_ch,0x2a,arg_10h,0,arg_14h,arg_8h);
        }
    }
    return;
}


/* fcn.0002124b @ 0x2124b */

void __cdecl fcn.0002124b(int32_t arg_8h,uint32_t arg_ch,int32_t arg_10h,int16_t arg_14h)

{
    char cVar1;
    
    if (arg_ch != 0) {
        cVar1 = fcn.00017597();
        if (cVar1 == '\0') {
            fcn.000186ba(arg_ch,0x28,arg_10h,0,arg_14h,arg_8h);
        }
    }
    return;
}


/* fcn.000210df @ 0x210df */

bool __cdecl fcn.000210df(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,uint32_t arg_14h)

{
    uint8_t uVar1;
    int in_ECX;
    uint8_t *puVar2;
    uint8_t uVar3;
    
    uVar3 = '\x01' << (arg_10h & 0x1f);
    puVar2 = arg_8h * 0x200 + *(in_ECX + 0xc) + arg_ch;
    uVar1 = *puVar2;
    if (arg_14h == 1) {
        *puVar2 = uVar1 | uVar3;
    }
    else if (arg_14h == 2) {
        *puVar2 = ~uVar3 & uVar1;
    }
    return (uVar3 & uVar1) != 0;
}


/* fcn.0001b776 @ 0x1b776 */

void __fastcall fcn.0001b776(int param_1)

{
    uint8_t uVar1;
    int iVar2;
    uint *puVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    uint8_t uVar6;
    uint unaff_ESI;
    
    uVar6 = 0;
    if (*(param_1 + 0xc) != '\0') {
        do {
            fcn.00016c6c();
            uVar6 = uVar6 + 1;
        } while (uVar6 < *(param_1 + 0xc));
    }
    if (*(param_1 + 0x2c) == '\0') {
        return;
    }
    *(param_1 + 0x40) = 0;
    uVar6 = 0;
    *(param_1 + 0x44) = 0;
    *(param_1 + 0xc) = 0;
    *(param_1 + 0x50) = 0;
    *(param_1 + 0xa8) = 0;
    if (*(param_1 + 0x2c) != '\0') {
        do {
            puVar3 = *(param_1 + 0x30 + uVar6 * 4);
            fcn.0001be7b();
            unaff_ESI = *puVar3;
            fcn.0001bdc8();
            fcn.0001c19b();
            uVar6 = uVar6 + 1;
        } while (uVar6 < *(param_1 + 0x2c));
    }
    *(param_1 + 0x2c) = 0;
    fcn.0001b0d1(unaff_ESI);
    uVar6 = 0;
    if (*(param_1 + 0xa8) != '\0') {
        do {
            uVar1 = *(param_1 + 0x2c);
            uVar5 = 0;
            uVar4 = 0;
            iVar2 = *(uVar6 * 0x18 + 0xb0 + param_1);
            if (uVar1 != 0) {
                do {
                    uVar4 = uVar5;
                    if (*(param_1 + 0x30 + uVar5 * 4) == iVar2) break;
                    uVar4 = uVar4 + 1;
                    uVar5 = uVar4;
                } while (uVar4 < uVar1);
            }
            if ((uVar4 == uVar1) && (uVar1 < 2)) {
                *(param_1 + 0x30 + uVar1 * 4) = iVar2;
                *(param_1 + 0x2c) = *(param_1 + 0x2c) + '\x01';
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < *(param_1 + 0xa8));
    }
    return;
}


/* fcn.00021427 @ 0x21427 */

void __fastcall fcn.00021427(int param_1)

{
    uint32_t *puVar1;
    char *pcVar2;
    char cVar3;
    int16_t iVar4;
    uint32_t uVar5;
    int32_t arg_10h;
    int iVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    ushort uVar10;
    uchar *puVar11;
    uint8_t uVar12;
    int iStack_1c;
    
    if (*(param_1 + 0x20) != 0) {
        iStack_1c = *(param_1 + 0x24);
        fcn.0001d9f5();
        uVar5 = *(*(param_1 + 4) + 0x48);
        arg_10h = fcn.0001d4da();
        fcn.0002245a(0x1c0a0,0x7f8,arg_10h,uVar5);
    }
    fcn.0001d9a5();
    cVar3 = '\0';
    uVar5 = *(param_1 + 4) + 0xd8;
    while( true ) {
        puVar11 = &stack0xfffffff0;
        iVar6 = fcn.0001b661();
        if (iVar6 == 0) break;
        *(iVar6 + 8) = cVar3;
        fcn.00021b2f();
        cVar3 = cVar3 + '\x01';
        uVar5 = uVar5 + 0x30;
        iStack_1c = iVar6;
    }
    *(*(param_1 + 4) + 0x38) = cVar3;
    iVar6 = fcn.0001b680();
    if (iVar6 != 0) {
        do {
            iVar7 = fcn.000185ab(iVar6 + 8);
            uVar10 = SUB42(puVar11,0);
            if (iVar7 != 0) {
                iVar7 = fcn.0001bf0b(0);
                uVar5 = *(iVar7 + 8);
                puVar11 = CONCAT13(*(iVar7 + 0xc),CONCAT12(*(*(param_1 + 0x2c) + 0x2c),uVar10));
                cVar3 = fcn.00020664();
                if (cVar3 != '\0') {
                    puVar1 = *(param_1 + 4) + 0x34;
                    *puVar1 = *puVar1 | 0x4000000;
                }
                iVar7 = fcn.00023e00();
                if (iVar7 != 0) {
                    puVar1 = *(param_1 + 4) + 0x34;
                    *puVar1 = *puVar1 | 0x20000000;
                }
                if (*(param_1 + 0x20) != 0) {
                    puVar1 = *(param_1 + 4) + 0x34;
                    *puVar1 = *puVar1 | 0x8000000;
                }
                if ((*(iVar6 + 0x40) != '\0') || ((*(iVar6 + 0x28) >> 0xe & 1) != 0)) {
                    puVar1 = *(param_1 + 4) + 0x34;
                    *puVar1 = *puVar1 | 0x2000000;
                }
                cVar3 = puVar11 >> 8;
                uVar8 = 0;
                if (cVar3 != '\0') {
                    uVar8 = 0x1000000;
                }
                puVar1 = *(param_1 + 4) + 0x34;
                *puVar1 = *puVar1 | uVar8;
                if ((puVar11 >> 0x10 < 2) && (*(*(param_1 + 4) + 0x34) == -0x80000000)) {
                    uVar8 = 0x14200;
                    if (uVar5 != 2) {
                        uVar8 = 0x141f8;
                    }
                    uVar12 = puVar11 >> 0x18;
                    uVar9 = 0x14228;
                    if (uVar12 < 3) {
                        uVar9 = uVar8;
                    }
                    uVar8 = 0x14210;
                    if (uVar5 != 4) {
                        uVar8 = uVar9;
                    }
                    uVar9 = 0x14218;
                    if (uVar5 != 0x10) {
                        uVar9 = uVar8;
                    }
                    uVar5 = 0x14220;
                    if (uVar12 < 5) {
                        uVar5 = uVar9;
                    }
                    uVar8 = 0x14238;
                    if (cVar3 == '\0') {
                        uVar8 = uVar5;
                    }
                }
                else {
                    uVar8 = 0x14230;
                    if (cVar3 != '\0') {
                        uVar8 = 0x14238;
                    }
                    if ((uVar5 & 0x21) != 0) {
                        puVar1 = *(param_1 + 4) + 0x34;
                        *puVar1 = *puVar1 | 1;
                    }
                    if (uVar5 == 2) {
                        puVar1 = *(param_1 + 4) + 0x34;
                        *puVar1 = *puVar1 | 2;
                    }
                    if (uVar5 == 8) {
                        puVar1 = *(param_1 + 4) + 0x34;
                        *puVar1 = *puVar1 | 4;
                    }
                    if (uVar5 == 4) {
                        puVar1 = *(param_1 + 4) + 0x34;
                        *puVar1 = *puVar1 | 0x10;
                    }
                    if (uVar5 == 0x10) {
                        puVar1 = *(param_1 + 4) + 0x34;
                        *puVar1 = *puVar1 | 0x20;
                    }
                }
                iVar6 = *(param_1 + 4) + 0x18;
                iVar4 = fcn.00022718(uVar8,iVar6,0xffff);
                if (0 < iVar4) {
                    fcn.000226e8(iVar6,uVar8);
                }
                fcn.000222d5(iStack_1c);
                uVar5 = fcn.00021d7b(0);
                pcVar2 = *(param_1 + 4) + 0x39;
                *pcVar2 = *pcVar2 + '\x01';
            }
            iVar6 = fcn.0001b680();
        } while (iVar6 != 0);
    }
    *(param_1 + 8) = uVar5 - *(param_1 + 4);
    *(*(param_1 + 4) + 0x48) = *(param_1 + 0x20);
    *(param_1 + 8) = *(param_1 + 8) + *(*(param_1 + 4) + 0x48);
    if (*(param_1 + 0x20) != 0) {
        fcn.0002245a(uVar5,0xa4,0x1c0a0,*(*(param_1 + 4) + 0x48));
    }
    *(*(param_1 + 4) + 0x24) = *(param_1 + 8);
    fcn.0001d904();
    uVar8 = *(param_1 + 8) + 0x1ffU & 0xfffffe00;
    uVar5 = 0x1400;
    if (uVar8 < 0x1400) {
        uVar5 = uVar8;
    }
    *(param_1 + 8) = uVar5;
    fcn.000217ac();
    fcn.000213e0();
    fcn.00021346();
    return;
}


/* fcn.0001d515 @ 0x1d515 */

int __thiscall fcn.0001d515(int param_1,int param_2)

{
    char cVar1;
    uint8_t uVar2;
    int iVar3;
    
    if (param_2 != 0) {
        uVar2 = 0;
        iVar3 = param_1 + 0xd8 + *(param_1 + 0x38) * 0x30;
        if (*(param_1 + 0x39) != '\0') {
            do {
                cVar1 = fcn.0001c6b5(param_2);
                if (cVar1 != '\0') {
                    return iVar3;
                }
                iVar3 = fcn.00021d7b();
                uVar2 = uVar2 + 1;
            } while (uVar2 < *(param_1 + 0x39));
        }
    }
    return 0;
}


/* fcn.0001d9a5 @ 0x1d9a5 */

void __fastcall fcn.0001d9a5(int param_1)

{
    fcn.000226e8(*(param_1 + 4),0x13fac);
    fcn.000226e8(*(param_1 + 4) + 0x18,0x141f8);
    *(*(param_1 + 4) + 0x38) = 0;
    *(*(param_1 + 4) + 0x39) = 0;
    *(*(param_1 + 4) + 0x34) = 0x80000000;
    fcn.000224aa(*(param_1 + 4) + 0x50,0,0x88);
    return;
}


/* fcn.00021b2f @ 0x21b2f */

void __thiscall fcn.00021b2f(int param_1,int param_2)

{
    uint uVar1;
    
    fcn.00022751(param_1,param_2 + 9,0x10);
    *(param_1 + 0x10) = *(*(param_2 + 0x20) + 0x78);
    uVar1 = fcn.00023e00();
    *(param_1 + 0x20) = uVar1;
    *(param_1 + 0x14) = *(*(param_2 + 0x20) + 0x80);
    *(param_1 + 0x18) = *(*(param_2 + 0x20) + 0xb0);
    fcn.000224aa(param_1 + 0x24,0,0xc);
    return;
}


/* fcn.00020664 @ 0x20664 */

uint __fastcall fcn.00020664(int param_1)

{
    int iVar1;
    
    *(param_1 + 0x33) = 0;
    do {
        iVar1 = fcn.000206a1();
        if (iVar1 == 0) {
            return 0;
        }
    } while (((*(*(iVar1 + 0x20) + 0xb0) >> 4 & 1) == 0) || (iVar1 = fcn.00023e00(), iVar1 == 0));
    return 1;
}


/* fcn.000222d5 @ 0x222d5 */

void __thiscall fcn.000222d5(int param_1,int param_2)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    ulong uVar4;
    
    iVar2 = fcn.000185ab(param_2 + 8);
    if (iVar2 != 0) {
        fcn.00022751(param_1,param_2 + 8,0x10);
        *(param_1 + 0x20) = *(param_2 + 0x1c);
        uVar3 = fcn.00023e00();
        *(param_1 + 0x14) = uVar3;
        *(param_1 + 0x10) = *(param_2 + 0x20);
        uVar3 = *(param_2 + 0x28);
        *(param_1 + 0x1c) = 0;
        *(param_1 + 0x18) = uVar3;
        *(param_1 + 0x24) = *(param_2 + 0x2c);
        fcn.000224aa(param_1 + 0x34,0,0x1c);
        *(param_1 + 0x26) = *(param_2 + 0x34);
        *(param_1 + 0x27) = *(param_2 + 0x38);
        *(param_1 + 0x23) = *(param_2 + 0x3c);
        *(param_1 + 0x28) = *(param_2 + 0x3e);
        *(param_1 + 0x2a) = *(param_2 + 0x40);
        *(param_1 + 0x2b) = *(param_2 + 0x41);
        *(param_1 + 0x2c) = *(param_2 + 0x44);
        *(param_1 + 0x30) = *(param_2 + 0x48);
        *(param_1 + 0x22) = *(param_2 + 0x50);
        fcn.00021cd5(*(param_2 + 0x30),0);
        iVar1 = *(iVar2 + 0xc4);
        if ((*(iVar2 + 0xda) == '\0') || (*(iVar2 + 0xdd) != '\0')) {
            *(iVar1 + 0x4a) = *(param_1 + 0x5a);
            *(param_1 + 0x5a) = *(param_1 + 0x5a);
        }
        else {
            *(param_1 + 0x5a) = 0;
            *(iVar1 + 0x4a) = 0;
        }
        uVar4 = fcn.0001aa22();
        fcn.00021da1(uVar4);
        *(param_1 + 0x21) = 0;
    }
    return;
}


/* fcn.0001d904 @ 0x1d904 */

void __fastcall fcn.0001d904(int param_1)

{
    int *piVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    
    *(param_1 + 0x28) = *(param_1 + 0x28) + 1;
    *(*(param_1 + 4) + 0x28) = *(param_1 + 0x10);
    *(*(param_1 + 4) + 0x40) = *(param_1 + 0x14);
    *(*(param_1 + 4) + 0x2c) = *(param_1 + 0x28);
    *(*(param_1 + 4) + 0x4c) = *(param_1 + 0x1c);
    if (*0x150c8 != '\0') {
        *(param_1 + 0x18) = *(param_1 + 0x18) + 1;
    }
    *(*(param_1 + 4) + 0x44) = *(param_1 + 0x18);
    fcn.0001d4ba();
    if (*(param_1 + 0x10) != 0) {
        return;
    }
    *(param_1 + 0x28) = 0;
    *(*(param_1 + 4) + 0x2c) = 0;
    iVar3 = *(param_1 + 4);
    iVar4 = fcn.000225ad();
    iVar4 = iVar4 + *(iVar3 + 0x20);
    *(param_1 + 0x10) = iVar4;
    *(iVar3 + 0x28) = iVar4;
    *(*(param_1 + 4) + 0x40) = *(param_1 + 0x10);
    piVar2 = *(param_1 + 4);
    *(param_1 + 0x14) = *(param_1 + 0x10);
    iVar3 = 0;
    piVar1 = piVar2 + 8;
    *piVar1 = 0;
    for (uVar5 = piVar2[9] >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        iVar3 = iVar3 + *piVar2;
        piVar2 = piVar2 + 1;
    }
    *piVar1 = iVar3;
    return;
}


/* fcn.000217ac @ 0x217ac */

void __fastcall fcn.000217ac(int param_1)

{
    int iVar1;
    uint8_t uVar2;
    
    uVar2 = 0;
    iVar1 = *(param_1 + 4);
    if (*(iVar1 + 0x38) != '\0') {
        do {
            iVar1 = fcn.0001c77e(uVar2 * 0x30 + iVar1 + 0xd8);
            if ((iVar1 != 0) && ((*(*(iVar1 + 0x20) + 0xb0) & 10) == 10)) {
                fcn.00021717(*(iVar1 + 0x20));
                fcn.00016ca7(0x100);
            }
            iVar1 = *(param_1 + 4);
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(iVar1 + 0x38));
    }
    return;
}


/* fcn.000213e0 @ 0x213e0 */

void __fastcall fcn.000213e0(unkuint3 param_1)

{
    int iVar1;
    int *piVar2;
    uint32_t uStack_8;
    int8_t var_1h;
    
    uStack_8 = param_1;
    while( true ) {
        piVar2 = fcn.0001b680(&var_1h);
        if (piVar2 == NULL) break;
        iVar1 = fcn.0001d515();
        *(*(*piVar2 + 0xc4) + 0x4a) = *(iVar1 + 0x5a);
    }
    fcn.00022fad();
    return;
}


/* fcn.00021346 @ 0x21346 */

void __fastcall fcn.00021346(int param_1)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    
    iVar1 = *(*0x155ec + 0x1c);
    iVar3 = *(iVar1 + 8);
    while (*(iVar1 + 4) = iVar3, iVar3 != 0) {
        if ((*(iVar3 + 0x1c) == *(param_1 + 0x2c)) && (uVar2 = *(*(iVar3 + 0x20) + 0xb0), (uVar2 >> 1 & 1) == 0)) {
            if ((uVar2 >> 3 & 1) != 0) {
                (****(iVar3 + 0x28))(1);
            }
            fcn.0001d44e(0);
        }
        iVar3 = **(iVar1 + 4);
    }
    return;
}


/* fcn.000181a5 @ 0x181a5 */

void __cdecl
fcn.000181a5(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h,int32_t arg_1ch)

{
    fcn.000173f8(0,arg_8h,arg_ch,arg_10h,arg_14h,arg_18h);
    return;
}


/* fcn.00021717 @ 0x21717 */

void __cdecl fcn.00021717(int32_t arg_8h)

{
    int arg_18h;
    int in_ECX;
    uint32_t uVar1;
    ulong uVar2;
    int32_t arg_14h;
    int32_t arg_18h_00;
    int32_t *piVar3;
    int arg_14h_00;
    int32_t var_40h;
    
    fcn.000173ea();
    if (0x200 < *(in_ECX + 8)) {
        piVar3 = &var_40h;
        arg_18h = *(in_ECX + 4) + 0x200;
        arg_14h_00 = *(in_ECX + 8) - 0x200;
        uVar2 = fcn.0001704b();
        uVar1 = (*(in_ECX + 8) >> 9) - 1;
        fcn.000181a5(0x2a,uVar2 - uVar1,(uVar2 >> 0x20) - (uVar2 < uVar1),arg_14h_00,arg_18h,piVar3);
        fcn.0001d0ce(arg_8h,&var_40h);
    }
    piVar3 = &var_40h;
    arg_18h_00 = *(in_ECX + 4);
    arg_14h = 0x200;
    uVar2 = fcn.0001704b();
    fcn.000181a5(0x2a,uVar2,uVar2 >> 0x20,arg_14h,arg_18h_00,piVar3);
    fcn.0001d0ce(arg_8h,&var_40h);
    return;
}


/* fcn.00020474 @ 0x20474 */

uint * __fastcall fcn.00020474(uint *param_1)

{
    uint *puVar1;
    uint *puVar2;
    int iVar3;
    
    puVar2 = param_1 + 0xd;
    param_1[2] = 0;
    *(param_1 + 6) = 0;
    puVar1 = param_1 + 0x13;
    param_1[1] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *(param_1 + 3) = 0;
    iVar3 = 6;
    do {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *param_1 = 0;
    return param_1;
}


/* fcn.00021b15 @ 0x21b15 */

void __fastcall fcn.00021b15(uint *param_1)

{
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(param_1 + 3) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    *(param_1 + 10) = 0;
    return;
}


/* fcn.00021d70 @ 0x21d70 */

ulong __fastcall fcn.00021d70(uint *param_1)

{
    return CONCAT44(param_1[4],*param_1);
}


/* fcn.000204aa @ 0x204aa */

void __cdecl fcn.000204aa(int noname_0,int16_t arg_ch,int32_t arg_30h)

{
    uchar uVar1;
    uint uVar2;
    int iVar3;
    uint *in_ECX;
    uint8_t uVar4;
    int unaff_EBP;
    uint32_t uVar5;
    ulong uVar6;
    
    in_ECX[1] = *(noname_0 + 0xe);
    *(in_ECX + 6) = *(noname_0 + 0xc);
    uVar6 = fcn.0002190e();
    *(in_ECX + 8) = uVar6;
    *(in_ECX + 3) = *(noname_0 + 0x10);
    uVar6 = fcn.0002191a();
    *(in_ECX + 10) = uVar6;
    uVar6 = fcn.00021926();
    *(in_ECX + 4) = uVar6;
    *(in_ECX + 0x31) = *(noname_0 + 0x12);
    uVar2 = fcn.00021931(*(**in_ECX + 0x28));
    in_ECX[2] = uVar2;
    uVar1 = fcn.00015b5a(uVar2);
    uVar4 = 0;
    *(in_ECX + 0xc) = uVar1;
    if (*(in_ECX + 3) != '\0') {
        do {
            uVar5 = uVar4;
            iVar3 = fcn.0001e91f();
            if ((iVar3 != 0) && ((*(*(iVar3 + 0x20) + 0xb0) >> 4 & 1) != 0)) {
                *(unaff_EBP + 100) = *(unaff_EBP + 100) + '\x01';
            }
            in_ECX[uVar5 + 0xd] = iVar3;
            uVar4 = uVar4 + 1;
            *(in_ECX + uVar5 + 0x4c) = *(noname_0 + 0x33 + uVar5 * 4);
        } while (uVar4 < *(in_ECX + 3));
    }
    return;
}


/* fcn.0001aa22 @ 0x1aa22 */

ulong __fastcall fcn.0001aa22(int param_1)

{
    return *(param_1 + 0x30);
}


/* fcn.00020572 @ 0x20572 */

void __thiscall fcn.00020572(int param_1,int param_2)

{
    uint8_t uVar1;
    uint uVar2;
    uint32_t uVar3;
    uint8_t unaff_retaddr;
    
    *(param_1 + 4) = *(param_2 + 8);
    *(param_1 + 8) = *(param_2 + 0x20);
    *(param_1 + 0xc) = *(param_2 + 0x24);
    *(param_1 + 0x10) = *(param_2 + 0x18);
    *(param_1 + 0x14) = *(param_2 + 0x1c);
    *(param_1 + 0x18) = *(param_2 + 0x40);
    *(param_1 + 0x20) = *(param_2 + 0x38);
    *(param_1 + 0x24) = *(param_2 + 0x3c);
    *(param_1 + 0x28) = *(param_2 + 0x30);
    *(param_1 + 0x2c) = *(param_2 + 0x34);
    *(param_1 + 0x31) = *(param_2 + 0x54);
    *(param_1 + 0x30) = *(param_2 + 0x5c);
    uVar1 = 0;
    if (*(param_1 + 0xc) != '\0') {
        do {
            uVar3 = uVar1;
            uVar2 = fcn.0001c77e();
            *(param_1 + 0x34 + uVar3 * 4) = uVar2;
            *(param_1 + 0x4c + uVar3) = *(param_2 + 0x6c + uVar3 * 8);
            uVar1 = unaff_retaddr + 1;
            unaff_retaddr = uVar1;
        } while (uVar1 < *(param_1 + 0xc));
    }
    return;
}


/* fcn.0001dbbe @ 0x1dbbe */

void __thiscall fcn.0001dbbe(int param_1,uint32_t param_2)

{
    ulong uVar1;
    int32_t arg_18h;
    int32_t arg_1ch;
    
    arg_1ch = *(param_1 + 4);
    arg_18h = *(param_1 + 8);
    uVar1 = fcn.0001704b();
    fcn.000186ba(param_2,0x2a,uVar1,uVar1 >> 0x20,arg_18h,arg_1ch);
    return;
}


/* fcn.0002182d @ 0x2182d */

void __thiscall fcn.0002182d(uint *param_1,int param_2)

{
    int iVar1;
    uint uVar2;
    uint extraout_EDX;
    uint8_t uVar3;
    uint32_t uVar4;
    
    *(param_1 + 0xe) = *(param_2 + 4);
    *(param_1 + 4) = *(param_2 + 0xc);
    *(param_1 + 3) = *(param_2 + 0x18);
    *param_1 = *(param_2 + 0x10);
    uVar2 = fcn.00023e00();
    param_1[5] = uVar2;
    uVar2 = fcn.0002065d();
    param_1[1] = uVar2;
    fcn.0002065d();
    param_1[6] = extraout_EDX;
    param_1[2] = *(param_2 + 0x28);
    uVar2 = fcn.00023e00();
    param_1[7] = uVar2;
    *(param_1 + 0x11) = *(param_2 + 0x30);
    *(param_1 + 0x12) = *(param_2 + 0x31);
    *(param_1 + 0x13) = 1;
    iVar1 = *(param_2 + 8);
    if (iVar1 == 1) {
code_r0x000218d0:
        *(param_1 + 0xf) = 0;
    }
    else {
        if (iVar1 != 2) {
            if (iVar1 == 4) {
                *(param_1 + 0xf) = 5;
                goto code_r0x000218d3;
            }
            if ((iVar1 != 8) && (iVar1 != 0x10)) {
                if (iVar1 != 0x20) {
                    *(param_1 + 0xf) = 0xff;
                    goto code_r0x000218d3;
                }
                goto code_r0x000218d0;
            }
        }
        *(param_1 + 0xf) = 1;
    }
code_r0x000218d3:
    fcn.000224aa(param_1 + 8,0,0x10);
    uVar4 = 0;
    if (*(param_1 + 4) != '\0') {
        do {
            uVar3 = uVar4 + 1;
            param_1[uVar4 + 0xc] = *(*(param_2 + 0x34 + uVar4 * 4) + 8) | *(param_2 + 0x4c + uVar4) << 0x18;
            uVar4 = uVar3;
        } while (uVar3 < *(param_1 + 4));
    }
    return;
}


/* fcn.00018ecd @ 0x18ecd */

int16_t fcn.00018ecd(uint param_1)

{
    int iVar1;
    int16_t iVar2;
    uint32_t uVar3;
    int unaff_EBP;
    int iVar4;
    int *unaff_retaddr;
    uchar auStack_28 [2];
    ushort uStack_26;
    int iStack_24;
    int iStack_20;
    uint uStack_18;
    int16_t iStack_12;
    uchar uStack_10;
    uint uStack_4;
    
    iVar1 = *0x150c4;
    iVar2 = fcn.00018fbe(param_1);
    iVar4 = 0;
    if (iVar2 != -1) {
        iVar4 = iVar2;
    }
    uVar3 = iVar4 * 0x10;
    iStack_24 = uVar3 + *(iVar1 + 0x16e);
    iStack_20 = (uVar3 >> 0x1f) + CARRY4(uVar3,*(iVar1 + 0x16e));
    uStack_26 = 0x10;
    auStack_28[0] = 0;
    fcn.0001e0fe(iStack_24);
    if (unaff_EBP == 0) {
        iVar2 = 1;
    }
    else {
        uStack_18 = 0x2000;
        uStack_10 = 0x28;
        iStack_20 = unaff_EBP;
        (****(*0x150c4 + 0x23c))(auStack_28);
        iVar2 = iStack_12;
        if (iStack_12 == 0) {
            uVar3 = fcn.00019bed(uStack_4,unaff_EBP,0x800);
            *unaff_retaddr = ((uVar3 & 0xffff) + iVar4 * 0x800) * 0x400;
            iVar2 = 0;
        }
    }
    fcn.0001e001(unaff_EBP);
    return iVar2;
}


/* fcn.00022154 @ 0x22154 */

uint32_t fcn.00022154(uint32_t param_1,int param_2,int param_3)

{
    int16_t iVar1;
    uint32_t uVar2;
    int16_t iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    
    iVar1 = 0;
    uVar5 = param_3 - 1U & 0xffff;
    uVar4 = 0;
    if (param_3 - 1U < 0x8000) {
        do {
            uVar2 = (iVar1 + uVar5) / 2;
            uVar4 = uVar2 & 0xffff;
            iVar3 = uVar2;
            uVar2 = *(param_2 + iVar3 * 8);
            if (uVar2 == param_1) {
                return CONCAT22(uVar2 >> 0x10,iVar3);
            }
            if (param_1 < uVar2) {
                uVar5 = uVar4 - 1 & 0xffff;
                uVar4 = uVar4 - 1 & 0xffff;
            }
            else {
                iVar1 = iVar3 + 1;
            }
        } while (iVar1 <= uVar5);
    }
    if (uVar4 < 0) {
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.00021cd5 @ 0x21cd5 */

void __thiscall fcn.00021cd5(uint *param_1,int param_2)

{
    uchar uVar1;
    uint uVar2;
    
    *(param_1 + 2) = *(param_2 + 4);
    *(param_1 + 9) = *(param_2 + 8);
    *(param_1 + 10) = *(param_2 + 0xc);
    *param_1 = *(param_2 + 0x10);
    uVar2 = fcn.00023e00();
    param_1[4] = uVar2;
    param_1[1] = *(param_2 + 0x18);
    *(param_1 + 3) = *(param_2 + 0x1c);
    *(param_1 + 0xe) = *(param_2 + 0x1e);
    if (*(param_2 + 0x28) == '\0') {
        uVar1 = 0xff;
    }
    else {
        uVar1 = *(param_2 + 0x2c);
    }
    *(param_1 + 0xb) = uVar1;
    fcn.000224aa(param_1 + 5,0,0xc);
    fcn.0002182d(*(param_2 + 0x20));
    if ((param_2 != '\0') || (*(param_1 + 2) != '\0')) {
        fcn.0002182d(*(param_2 + 0x24));
    }
    return;
}


/* fcn.00021da1 @ 0x21da1 */

void __thiscall fcn.00021da1(uint *param_1,uint param_2,uint param_3)

{
    *param_1 = param_2;
    param_1[4] = param_3;
    return;
}


/* fcn.00022fc5 @ 0x22fc5 */

uint __fastcall fcn.00022fc5(uint param_1)

{
    int8_t var_4h;
    int8_t var_3h;
    int8_t var_2h;
    int8_t var_1h;
    
    var_1h = param_1;
    _var_4h = CONCAT12(param_1 >> 8,CONCAT11(param_1 >> 0x10,param_1 >> 0x18));
    return _var_4h;
}


/* fcn.000226c6 @ 0x226c6 */

void __cdecl fcn.000226c6(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h)

{
    fcn.00012027(arg_8h,1,1,1,arg_ch,arg_10h,arg_14h,arg_18h);
    return;
}


/* fcn.000225f1 @ 0x225f1 */

uint16_t * fcn.000225f1(int param_1,uint16_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint16_t *puVar3;
    uint32_t uVar4;
    
    iVar1 = fcn.00022fc5();
    if (iVar1 == 0) {
        return NULL;
    }
    uVar2 = iVar1 - 0x2c;
    puVar3 = param_1 + 0x30;
    while( true ) {
        if ((uVar2 < 5) || (uVar4 = *(puVar3 + 3) + 4, uVar2 < uVar4)) {
            return NULL;
        }
        if ((param_2 != 0) && (param_2 == (*puVar3 >> 8 | *puVar3 << 8))) break;
        uVar2 = uVar2 - uVar4;
        puVar3 = puVar3 + uVar4;
    }
    return puVar3;
}


/* fcn.00011255 @ 0x11255 */

uchar fcn.00011255(int param_1)

{
    char cVar1;
    
    if (((*0x14428 & 1) != 0) && (param_1 == 0)) {
        fcn.000102eb(0x14da8,0x100,0x14d90);
    }
    cVar1 = fcn.00011220();
    if (cVar1 != '\0') {
        cVar1 = fcn.0001118b();
        if (cVar1 == -1) {
            return 1;
        }
    }
    return 0;
}


/* fcn.000111eb @ 0x111eb */

int fcn.000111eb(int param_1)

{
    int iVar1;
    
    if (((*0x14428 & 1) != 0) && (param_1 == 0)) {
        fcn.000102eb(0x14da8,199,0x14d90);
    }
    iVar1 = fcn.000111b7();
    return iVar1 + param_1;
}


/* fcn.00022a16 @ 0x22a16 */

uint8_t * fcn.00022a16(uint8_t *param_1,uint16_t *param_2,int16_t *param_3,int16_t *param_4)

{
    uint8_t *puVar1;
    int16_t iVar2;
    uint8_t uVar3;
    
    iVar2 = 0;
    *param_2 = 0;
    *param_3 = 0;
    do {
        *param_4 = iVar2;
code_r0x00022a36:
        while( true ) {
            while( true ) {
                while( true ) {
                    while( true ) {
                        param_1 = param_1 + 1;
                        uVar3 = *param_1;
                        if (uVar3 != 0x2d) break;
                        *param_2 = *param_2 | 1;
                    }
                    if (uVar3 != 0x2e) break;
                    *param_2 = *param_2 | 0x10;
                }
                if (uVar3 != 0x30) break;
                *param_2 = *param_2 | 4;
            }
            if (uVar3 < 0x31) {
                return param_1;
            }
            if (uVar3 < 0x3a) break;
            if (uVar3 != 0x6c) {
                return param_1;
            }
            *param_2 = *param_2 | 2;
        }
        iVar2 = 0;
        puVar1 = param_1;
        do {
            param_1 = puVar1;
            iVar2 = iVar2 * 10 + (uVar3 - 0x30);
            uVar3 = param_1[1];
            if (uVar3 < 0x30) break;
            puVar1 = param_1 + 1;
        } while (uVar3 < 0x3a);
    } while ((*param_2 & 0x10) != 0);
    *param_3 = iVar2;
    goto code_r0x00022a36;
}


/* fcn.00022aa1 @ 0x22aa1 */

void fcn.00022aa1(int16_t param_1,uint param_2,uint param_3)

{
    uint uVar1;
    
    if (param_1 == 1) {
        uVar1 = 0x14674;
    }
    else if (param_1 == 2) {
        uVar1 = 0x1467c;
    }
    else if (param_1 == 4) {
        uVar1 = 0x14684;
    }
    else if (param_1 == 8) {
        uVar1 = 0x1468c;
    }
    else if (param_1 == 0x10) {
        uVar1 = 0x14694;
    }
    else if (param_1 == 0x20) {
        uVar1 = 0x1469c;
    }
    else {
        uVar1 = 0x146a8;
    }
    fcn.00022b0b(param_2,param_3,0x13f98,uVar1);
    return;
}


/* fcn.00022cfe @ 0x22cfe */

uint32_t fcn.00022cfe(uchar *param_1,uint32_t param_2,uint8_t param_3,uint16_t param_4,uint16_t param_5,
                     uint16_t param_6,uint16_t param_7)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uchar *puVar5;
    uint16_t uVar6;
    uint16_t uVar7;
    uchar *puVar8;
    char cStack_29;
    uchar auStack_20 [32];
    
    cStack_29 = '\0';
    if (0x10 < param_7) {
        return 0;
    }
    if (((param_7 == 10) && (0x7fffffff < param_2)) && ((param_3 & 8) == 0)) {
        cStack_29 = '\x01';
        param_2 = -param_2;
    }
    puVar5 = auStack_20;
    uVar6 = 0;
    do {
        uVar4 = uVar6;
        puVar8 = puVar5;
        uVar1 = param_2 / param_7;
        uVar2 = uVar1;
        *puVar8 = *(param_2 % param_7 + 0x1525c);
        puVar5 = puVar8 + 1;
        uVar6 = uVar4 + 1;
        param_2 = uVar2;
    } while (uVar2 != 0);
    if (cStack_29 != uVar1) {
        *puVar5 = 0x2d;
        puVar5 = puVar8 + 2;
        uVar6 = uVar4 + 2;
    }
    if (((param_3 & 5) == 4) || ((param_4 < param_5 && ((param_3 & 0x10) != 0)))) {
        param_7._0_1_ = 0x30;
    }
    else {
        param_7._0_1_ = 0x20;
    }
    uVar4 = param_5;
    if (param_5 < param_4) {
        uVar4 = param_4;
    }
    if (((param_3 & 1) == 0) || (uVar4 <= param_5)) {
        uVar7 = -(uVar6 < uVar4) & uVar4 - uVar6;
        uVar3 = 0;
        puVar8 = param_1;
        uVar4 = param_6;
        if (uVar7 != 0) {
            do {
                if (uVar4 == 0) break;
                *puVar8 = param_7;
                uVar4 = uVar4 - 1;
                puVar8 = puVar8 + 1;
                uVar3 = uVar3 + 1;
            } while (uVar3 < uVar7);
        }
        if (uVar4 != 0) {
            uVar3 = 0;
            for (; (uVar3 < uVar6 && (uVar4 != 0)); uVar4 = uVar4 - 1) {
                puVar5 = puVar5 + -1;
                *puVar8 = *puVar5;
                puVar8 = puVar8 + 1;
                uVar3 = uVar3 + 1;
            }
            param_1[uVar3 + uVar7] = 0;
            return uVar3 + uVar7;
        }
        param_1[uVar3] = 0;
        uVar7 = param_6;
    }
    else {
        uVar7 = 0;
        puVar8 = param_1;
        uVar3 = param_6;
        if (uVar6 != 0) {
            do {
                if (uVar3 == 0) break;
                puVar5 = puVar5 + -1;
                uVar3 = uVar3 - 1;
                *puVar8 = *puVar5;
                puVar8 = puVar8 + 1;
                uVar7 = uVar7 + 1;
            } while (uVar7 < uVar6);
        }
        if (uVar3 == 0) {
            param_1[uVar7] = 0;
        }
        else {
            for (; uVar7 < uVar4; uVar7 = uVar7 + 1) {
                if (uVar3 == 0) goto code_r0x00022e31;
                *puVar8 = param_7;
                uVar3 = uVar3 - 1;
                puVar8 = puVar8 + 1;
            }
            if (uVar3 == 0) {
code_r0x00022e31:
                param_1[uVar7] = 0;
                uVar7 = param_6;
            }
            else {
                param_1[uVar7] = 0;
            }
        }
    }
    return uVar7;
}


/* fcn.00022842 @ 0x22842 */
// decompilation failed

/* fcn.00022efc @ 0x22efc */

char fcn.00022efc(int param_1,uint32_t param_2)

{
    char cVar1;
    uint32_t uVar2;
    
    cVar1 = '\0';
    uVar2 = 0;
    if (param_2 != 0) {
        do {
            cVar1 = cVar1 + *(uVar2 + param_1);
            uVar2 = uVar2 + 1;
        } while (uVar2 < param_2);
    }
    return cVar1;
}


/* fcn.00012ea6 @ 0x12ea6 */

void fcn.00012ea6(int param_1,uint32_t param_2,uint16_t param_3)

{
    (**(param_1 + 4))(*0x15358,param_1,0,param_3 | param_2,0,&stack0x00000010);
    return;
}


/* fcn.0001317e @ 0x1317e */

uint fcn.0001317e(int32_t param_1,int32_t param_2,uint8_t param_3,int16_t *param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar2 = 0x100;
    while( true ) {
        uVar1 = fcn.00012d4e(param_1,param_2,uVar2);
        if (uVar1 == 0xffffffff) {
            return 0;
        }
        if ((uVar1 & 0xffff) == param_3) break;
        uVar2 = uVar1 >> 0x14;
        if (uVar2 == 0) {
            return 0;
        }
    }
    *param_4 = uVar2;
    return 1;
}


/* fcn.000233ff @ 0x233ff */

uint32_t fcn.000233ff(int param_1,uint32_t param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    bool bVar4;
    
    if (*(param_1 + 0x4c) == 1) {
        uVar1 = *(param_1 + 0x18);
        uVar2 = 1 << (uVar1 & 0x1f);
        uVar3 = 0;
        if (0x1f < uVar1) {
            uVar3 = uVar2;
        }
        uVar2 = uVar2 ^ uVar3;
        if (0x3f < uVar1) {
            uVar3 = uVar2;
        }
        bVar4 = CARRY4(uVar2,*(param_1 + 0x10));
        uVar2 = uVar2 + *(param_1 + 0x10);
    }
    else {
        uVar1 = *(param_1 + 0x4c) - 2;
        if (uVar1 != 0) goto code_r0x00023412;
        uVar1 = *(param_1 + 0x19);
        uVar2 = 1 << (uVar1 & 0x1f);
        uVar3 = 0;
        if (0x1f < uVar1) {
            uVar3 = uVar2;
        }
        uVar2 = uVar2 ^ uVar3;
        if (0x3f < uVar1) {
            uVar3 = uVar2;
        }
        bVar4 = CARRY4(uVar2,*(param_1 + 0x14));
        uVar2 = uVar2 + *(param_1 + 0x14);
    }
    uVar1 = 0;
    if ((param_3 < uVar3 + bVar4) || ((param_3 <= uVar3 + bVar4 && (param_2 <= uVar2)))) {
        return 1;
    }
code_r0x00023412:
    return uVar1 & 0xffffff00;
}


/* fcn.00023b40 @ 0x23b40 */

void fcn.00023b40(int param_1,int param_2)

{
    uint32_t uVar1;
    
    if (param_2 == 1) {
        uVar1 = *(param_1 + 0x10);
        *(param_1 + 0x4c) = 1;
    }
    else {
        if (param_2 != 2) {
            return;
        }
        *(param_1 + 0x4c) = 2;
        uVar1 = *(param_1 + 0x14) + 0x101004U & 0xfff00000;
    }
    *(param_1 + 0x48) = uVar1;
    return;
}


/* fcn.00023014 @ 0x23014 */

void fcn.00023014(int param_1)

{
    if (0xfffff < *(param_1 + 0x10) - *(param_1 + 0x14)) {
        *(param_1 + 0x20) = 0;
        *(param_1 + 0x1c) = 0xfff0;
        *(param_1 + 0x18) = *(param_1 + 0x10) >> 0x10 & 0xfff0;
        *(param_1 + 0x24) = 0;
        *(param_1 + 0x1a) =
             ((*(param_1 + 0x14) - *(param_1 + 0x10) >> 0x14 & 0xff) + 0xfff) * 0x100000 + *(param_1 + 0x10) >> 0x10 &
             0xfff0;
    }
    return;
}


/* fcn.000230b3 @ 0x230b3 */

void fcn.000230b3(int param_1)

{
    int32_t arg_ch;
    int32_t arg_8h;
    
    if (*(param_1 + 4) != '\0') {
        arg_ch = *(*(param_1 + 0x28) + 0x18);
        arg_8h = *(*(param_1 + 0x28) + 0x14);
        fcn.00012e5c(arg_8h,arg_ch,0x20,*(param_1 + 0x18));
        fcn.00012e5c(arg_8h,arg_ch,0x22,*(param_1 + 0x1a));
        fcn.00012d4e(arg_8h,arg_ch,0x20);
        fcn.00012e5c(arg_8h,arg_ch,0x24,*(param_1 + 0x1c));
        fcn.00012e5c(arg_8h,arg_ch,0x26,*(param_1 + 0x1e));
        fcn.00012e81(arg_8h,arg_ch,0x28,*(param_1 + 0x20));
        fcn.00012e81(arg_8h,arg_ch,0x2c,*(param_1 + 0x24));
    }
    return;
}


/* fcn.0001324d @ 0x1324d */

uint __cdecl fcn.0001324d(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int8_t arg_18h)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00012d4e(arg_8h,arg_ch,(arg_18h + 4) * '\x04');
    if ((uVar1 & 1) == 0) {
        uVar1 = uVar1 >> 1 & 3;
        if (uVar1 == 2) {
            if (arg_18h + 1 < 6) {
                fcn.00012e81(arg_8h,arg_ch,arg_18h * 4 + 0x14,arg_14h);
                fcn.00012e81(arg_8h,arg_ch,arg_18h * 4 + 0x10,arg_10h);
                return 1;
            }
        }
        else if (uVar1 == 0) {
            fcn.00012e81(arg_8h,arg_ch,(arg_18h + 4) * 4,arg_10h);
            return 1;
        }
    }
    return 0;
}


/* fcn.000232c5 @ 0x232c5 */

bool __cdecl fcn.000232c5(int32_t arg_8h,int32_t arg_ch)

{
    uint16_t uVar1;
    uint16_t uVar2;
    
    uVar1 = fcn.00012d17(arg_8h,arg_ch,4);
    fcn.00012e5c(arg_8h,arg_ch,4,uVar1 | 6);
    uVar2 = fcn.00012d17(arg_8h,arg_ch,4);
    return uVar2 == (uVar1 | 6);
}


/* fcn.00023063 @ 0x23063 */

void fcn.00023063(int param_1)

{
    int32_t arg_ch;
    int32_t arg_8h;
    
    if (*(param_1 + 4) != '\0') {
        arg_ch = *(*(param_1 + 0x28) + 0x18);
        arg_8h = *(*(param_1 + 0x28) + 0x14);
        fcn.00012ea6(arg_8h,arg_ch,0x18,*(param_1 + 6));
        fcn.00012ea6(arg_8h,arg_ch,0x19,*(param_1 + 7));
        fcn.00012ea6(arg_8h,arg_ch,0x1a,*(param_1 + 8));
        fcn.00012d4e(arg_8h,arg_ch,0x18);
    }
    return;
}


/* fcn.00012e28 @ 0x12e28 */

void fcn.00012e28(uint param_1,uint param_2,uint param_3)

{
    (**(*(**0x15358 + 0x60) + 0x3c))(*0x15358,*(**0x15358 + 0x60),param_3,0);
    return;
}


/* fcn.00012df4 @ 0x12df4 */

void fcn.00012df4(uint param_1,uint param_2,uint param_3)

{
    (**(*(**0x15358 + 0x60) + 0x34))(*0x15358,*(**0x15358 + 0x60),param_3,0);
    return;
}


/* fcn.00012e42 @ 0x12e42 */

void fcn.00012e42(uint param_1,uint param_2,uint param_3)

{
    (**(*(**0x15358 + 0x60) + 0x30))(*0x15358,*(**0x15358 + 0x60),param_3,0);
    return;
}


/* fcn.00012f07 @ 0x12f07 */

void fcn.00012f07(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
    (**(*(**0x15358 + 0x60) + 0x4c))(*0x15358,*(**0x15358 + 0x60),param_3,0,param_4,param_5);
    return;
}


/* fcn.00012ecb @ 0x12ecb */

void fcn.00012ecb(uint param_1,uint param_2,uint param_3,uint param_4)

{
    (**(*(**0x15358 + 0x60) + 0x44))(*0x15358,*(**0x15358 + 0x60),param_3,0,param_4);
    return;
}


/* fcn.00012f29 @ 0x12f29 */

void fcn.00012f29(uint param_1,uint param_2,uint param_3,uint param_4)

{
    (**(*(**0x15358 + 0x60) + 0x40))(*0x15358,*(**0x15358 + 0x60),param_3,0,param_4);
    return;
}


/* fcn.000126aa @ 0x126aa */

void fcn.000126aa(int param_1,int32_t param_2,int32_t param_3)

{
    int iVar1;
    char cVar2;
    int16_t iVar3;
    uint uVar4;
    int iVar5;
    uint *puVar6;
    
    if (param_1 == 1) {
        iVar5 = fcn.000144e0(param_2,param_3);
        if (iVar5 == 0) {
            return;
        }
        puVar6 = fcn.0002240e(0x78);
        if (puVar6 == NULL) goto code_r0x000127ba;
        fcn.000224aa(puVar6,0,0x78);
        *(puVar6 + 2) = *0x152b8;
        *puVar6 = 1;
        puVar6[4] = iVar5;
        fcn.0001256f(puVar6);
        *0x152b8 = *0x152b8 + '\x01';
        iVar5 = *0x152c0;
        if (*0x152c0 != NULL) {
            while (iVar1 = *(iVar5 + 0x70), iVar1 != 0) {
                iVar5 = iVar1;
                if (iVar1 == 0) {
                    return;
                }
            }
            goto code_r0x0001280d;
        }
    }
    else {
        if (param_1 != 2) {
            return;
        }
        uVar4 = fcn.000131c8(param_2,param_3,0);
        iVar5 = fcn.00015051(param_2,param_3,uVar4);
        if (iVar5 == 0) {
            return;
        }
        puVar6 = fcn.0002240e(0x78);
        if (puVar6 == NULL) {
code_r0x000127ba:
            fcn.00022fad(iVar5);
            return;
        }
        fcn.000224aa(puVar6,0,0x78);
        cVar2 = *0x152b8;
        puVar6[1] = 0;
        *(puVar6 + 2) = cVar2;
        *puVar6 = 2;
        puVar6[4] = iVar5;
        cVar2 = fcn.00014fef(iVar5);
        if (cVar2 != '\0') {
            iVar3 = fcn.00012d17(param_2,param_3,2);
            if (iVar3 == 0x975) {
                puVar6[1] = 1;
            }
            else if (iVar3 == 0x9ac) {
                puVar6[1] = 2;
            }
            else {
                if (iVar3 != 0x9ad) {
                    fcn.00022fad(iVar5);
                    fcn.00022fad(puVar6);
                    return;
                }
                puVar6[1] = 3;
            }
        }
        fcn.0001256f(puVar6);
        *0x152b8 = *0x152b8 + '\x01';
        iVar5 = *0x152c0;
        if (*0x152c0 != NULL) {
            while (iVar1 = *(iVar5 + 0x70), iVar1 != 0) {
                iVar5 = iVar1;
                if (iVar1 == 0) {
                    return;
                }
            }
code_r0x0001280d:
            *(iVar5 + 0x70) = puVar6;
            return;
        }
    }
    *0x152c0 = puVar6;
    return;
}


/* fcn.00023b74 @ 0x23b74 */

int fcn.00023b74(void)

{
    int iVar1;
    
    iVar1 = fcn.0002240e(0x34);
    if (iVar1 == 0) {
        return 0;
    }
    fcn.000224aa(iVar1,0,0x34);
    return iVar1;
}


/* fcn.00023b96 @ 0x23b96 */

int fcn.00023b96(void)

{
    int iVar1;
    
    iVar1 = fcn.0002240e(0x24);
    if (iVar1 == 0) {
        return 0;
    }
    fcn.000224aa(iVar1,0,0x24);
    **(iVar1 + 0x14) = 0x13465;
    *(*(iVar1 + 0x14) + 4) = 0x134c1;
    return iVar1;
}


/* fcn.000235f3 @ 0x235f3 */

void __cdecl fcn.000235f3(int32_t arg_50h)

{
    int32_t arg_8h;
    int *piVar1;
    char cVar2;
    int16_t iVar3;
    int iVar4;
    int iVar5;
    int *piVar6;
    uint uVar7;
    uint32_t arg_ch;
    uint32_t uVar8;
    uint8_t uVar9;
    char cVar10;
    uint32_t var_8h;
    int in_stack_00000008;
    int32_t in_stack_00000020;
    uint32_t uVar11;
    uint8_t uStack_d;
    
    uStack_d = 0;
    do {
        uVar11 = 0;
        do {
            uVar9 = *(in_stack_00000008 + 4);
            if (uVar9 != 0) {
                uVar9 = uVar9 + ('\x01' - *(var_8h + 0x4d));
            }
            arg_ch = ((uVar9 << 5 | uStack_d) << 3 | uVar11 >> 8) * 0x1000 + *(var_8h + 8);
            cVar10 = uVar11 >> 8;
            if ((arg_ch == 0) || (arg_ch < *(var_8h + 8))) {
code_r0x000237fb:
                if (cVar10 == '\0') break;
            }
            else {
                uVar11 = 1 << (*(var_8h + 0xc) & 0x1f);
                uVar8 = 0;
                if (0x1f < *(var_8h + 0xc)) {
                    uVar8 = uVar11;
                }
                if ((((uVar11 ^ uVar8) + *(var_8h + 8) <= arg_ch) ||
                    (iVar3 = (**(*(**0x15358 + 0x60) + 0x34))(*0x15358,*(**0x15358 + 0x60),arg_ch,0), iVar3 == 0))
                   || (iVar3 == -1)) goto code_r0x000237fb;
                iVar4 = fcn.00023b96();
                if (iVar4 == 0) {
                    return;
                }
                *(iVar4 + 0x1d) = uStack_d;
                *(iVar4 + 0x20) = in_stack_00000008;
                arg_8h = *(iVar4 + 0x14);
                *(iVar4 + 8) = arg_ch;
                *(iVar4 + 0x1c) = uVar9;
                *(iVar4 + 0x1e) = cVar10;
                *(iVar4 + 0x18) = arg_ch;
                uVar9 = fcn.00012dbd(arg_8h,arg_ch,0xe);
                if ((uVar9 & 0x7f) == 1) {
                    uVar11 = 3;
                }
                else {
                    iVar3 = fcn.00012d17(arg_8h,arg_ch,10);
                    cVar2 = fcn.00012dbd(arg_8h,arg_ch,9);
                    if (iVar3 == 0x106) {
                        if (cVar2 == '\x01') {
                            uVar11 = 1;
                        }
                        else {
code_r0x00023735:
                            uVar11 = 0;
                        }
                    }
                    else {
                        if ((iVar3 != 0x108) || (cVar2 != '\x02')) goto code_r0x00023735;
                        uVar11 = 2;
                    }
                }
                *(iVar4 + 4) = uVar11;
                if (uVar11 == 0) {
code_r0x000237f3:
                    fcn.00022fad(iVar4);
                }
                else if (uVar11 < 3) {
                    cVar2 = fcn.000232c5(*(iVar4 + 0x14),*(iVar4 + 0x18));
                    if (cVar2 == '\0') {
code_r0x00023831:
                        fcn.00022fad(iVar4);
                        return;
                    }
                    fcn.0002312c(*(iVar4 + 0x14),*(iVar4 + 0x18));
                    uVar7 = fcn.00023303(*(iVar4 + 0x14),*(iVar4 + 0x18),*(iVar4 + 4));
                    *(iVar4 + 0xc) = uVar7;
                    piVar6 = *(in_stack_00000008 + 0x30);
                    if (*(in_stack_00000008 + 0x30) == NULL) {
                        *(in_stack_00000008 + 0x30) = iVar4;
                    }
                    else {
                        do {
                            piVar1 = *piVar6;
                            if (piVar1 == NULL) {
                                *piVar6 = iVar4;
                                break;
                            }
                            piVar6 = piVar1;
                        } while (piVar1 != NULL);
                    }
                }
                else {
                    if (uVar11 != 3) goto code_r0x000237f3;
                    iVar5 = fcn.00023b74();
                    if (iVar5 == 0) goto code_r0x00023831;
                    cVar2 = fcn.0002336f();
                    if (cVar2 == '\0') {
                        fcn.00022fad(iVar4);
                        fcn.00022fad(iVar5);
                        return;
                    }
                    piVar6 = *(var_8h + 0x50);
                    if (*(var_8h + 0x50) == NULL) {
                        *(var_8h + 0x50) = iVar5;
                    }
                    else {
                        do {
                            piVar1 = *piVar6;
                            if (piVar1 == NULL) {
                                *piVar6 = iVar5;
                                break;
                            }
                            piVar6 = piVar1;
                        } while (piVar1 != NULL);
                    }
                    fcn.000235f3(in_stack_00000020);
                }
            }
            uVar11 = cVar10 + 1U << 8;
        } while (cVar10 + 1U < 8);
        uStack_d = uStack_d + 1;
        if (0x1f < uStack_d) {
            return;
        }
    } while( true );
}


/* fcn.0002336f @ 0x2336f */

uint fcn.0002336f(int param_1,int param_2,int param_3,int param_4)

{
    char cVar1;
    uint8_t uVar2;
    int iVar3;
    
    uVar2 = *(param_1 + 0x4e);
    if (*(param_1 + 0x4f) + 1 <= uVar2) {
        uVar2 = *(param_1 + 0x4f) + 1;
        *(param_1 + 0x4f) = uVar2;
    }
    *(param_4 + 4) = uVar2;
    if (uVar2 < *(param_1 + 0x4e)) {
        *(param_4 + 0xc) = *(param_3 + 8);
        *(param_4 + 6) = *(param_2 + 7);
        *(param_4 + 7) = uVar2;
        *(param_4 + 8) = uVar2;
        *(param_4 + 0x2c) = param_2;
        *(param_4 + 0x28) = param_3;
        cVar1 = fcn.000232c5(*(param_3 + 0x14),*(param_3 + 0x18));
        if (cVar1 != '\0') {
            iVar3 = *(param_4 + 0x2c);
            if (*(iVar3 + 8) != *(param_4 + 8)) {
                for (; iVar3 != 0; iVar3 = *(iVar3 + 0x2c)) {
                    *(iVar3 + 8) = *(param_4 + 8);
                    fcn.00023063(iVar3);
                }
            }
            fcn.00023063(param_4);
            return 1;
        }
    }
    return 0;
}


/* fcn.0002312c @ 0x2312c */

bool __cdecl fcn.0002312c(int32_t arg_8h,int32_t arg_ch)

{
    char cVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    bool bVar4;
    int32_t var_4h;
    
    var_4h = 0;
    cVar1 = fcn.0001317e(arg_8h,arg_ch,0x18,&var_4h);
    bVar4 = false;
    if (cVar1 != '\0') {
        fcn.00012d4e(arg_8h,arg_ch,var_4h);
        uVar2 = fcn.00012d4e(arg_8h,arg_ch,var_4h + 4);
        uVar3 = uVar2 & 0xf003f003 | 0x10031003;
        fcn.00012e81(arg_8h,arg_ch,var_4h + 4,uVar3);
        uVar2 = fcn.00012d4e(arg_8h,arg_ch,var_4h + 4);
        bVar4 = uVar2 == uVar3;
    }
    return bVar4;
}


/* fcn.00023303 @ 0x23303 */

int __cdecl fcn.00023303(int32_t arg_8h,int32_t arg_ch,uint32_t arg_10h)

{
    uint32_t uVar1;
    uint8_t uVar2;
    int16_t arg_10h_00;
    
    if (arg_10h == 1) {
        uVar2 = 5;
    }
    else {
        if (arg_10h != 2) {
            return 0;
        }
        uVar2 = 0;
    }
    uVar1 = fcn.00012d4e(arg_8h,arg_ch,(uVar2 + 4) * '\x04');
    if ((uVar1 & 1) != 0) {
        return 0;
    }
    arg_10h_00 = (uVar2 + 4) * 4;
    fcn.00012e81(arg_8h,arg_ch,arg_10h_00,0xffffffff);
    uVar1 = fcn.00012d4e(arg_8h,arg_ch,arg_10h_00);
    return ~(uVar1 & 0xfffffff0) + 1;
}


/* fcn.0002357f @ 0x2357f */

void fcn.0002357f(int param_1)

{
    uint uVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    int *piVar5;
    int32_t in_stack_00000038;
    
    iVar3 = fcn.00023b74();
    iVar4 = fcn.00023b96();
    if (iVar3 != 0) {
        if (iVar4 != 0) {
            uVar1 = *(param_1 + 8);
            *(iVar3 + 4) = 0;
            *(iVar3 + 6) = 0;
            *(iVar3 + 8) = 0;
            *(iVar3 + 0xc) = uVar1;
            *(iVar3 + 0x28) = iVar4;
            *(iVar4 + 8) = uVar1;
            *(iVar4 + 0x20) = iVar3;
            piVar5 = *(param_1 + 0x50);
            if (*(param_1 + 0x50) == NULL) {
                *(param_1 + 0x50) = iVar3;
            }
            else {
                do {
                    piVar2 = *piVar5;
                    if (piVar2 == NULL) {
                        *piVar5 = iVar3;
                        break;
                    }
                    piVar5 = piVar2;
                } while (piVar2 != NULL);
            }
            fcn.000235f3(in_stack_00000038);
            return;
        }
        fcn.00022fad(iVar3);
    }
    if (iVar4 != 0) {
        fcn.00022fad(iVar4);
    }
    return;
}


/* fcn.000231ad @ 0x231ad */

void fcn.000231ad(int param_1)

{
    uint *puVar1;
    uint32_t uVar2;
    int iVar3;
    char cVar4;
    uint32_t uVar5;
    int *piVar6;
    int8_t arg_18h;
    
    iVar3 = param_1;
    puVar1 = *(param_1 + 0x50);
    do {
        if (puVar1 == NULL) {
            return;
        }
        piVar6 = puVar1[0xc];
        if (piVar6 != NULL) {
            param_1 = *(iVar3 + 0x48);
            uVar5 = param_1 + 0x100000U & 0xfff00000;
            cVar4 = fcn.000233ff(iVar3,uVar5,0);
            if (cVar4 == '\0') {
                fcn.00023b40(iVar3,2);
                param_1 = *(iVar3 + 0x48);
                uVar5 = param_1 + 0x100000U & 0xfff00000;
                cVar4 = fcn.000233ff(iVar3,uVar5,0);
                if (cVar4 != '\0') goto code_r0x0002321f;
            }
            else {
code_r0x0002321f:
                puVar1[4] = param_1;
                puVar1[5] = uVar5;
                fcn.00023014(puVar1);
                fcn.000230b3(puVar1);
            }
            do {
                uVar5 = *(iVar3 + 0x48);
                uVar2 = piVar6[3];
                if (uVar5 % uVar2 != 0) {
                    uVar5 = uVar5 + uVar2 & -uVar2;
                }
                piVar6[4] = uVar5;
                cVar4 = fcn.000233ff(iVar3,uVar5,0);
                if (cVar4 == '\0') {
                    return;
                }
                if (puVar1[5] < uVar5) {
                    piVar6[4] = 0;
                    return;
                }
                if (piVar6[1] == 1) {
                    arg_18h = 5;
code_r0x00023277:
                    cVar4 = fcn.0001324d(piVar6[5],piVar6[6],uVar5,0,arg_18h);
                    if (cVar4 != '\0') {
                        *(iVar3 + 0x48) = piVar6[4] + piVar6[3];
                    }
                }
                else if (piVar6[1] == 2) {
                    arg_18h = 0;
                    goto code_r0x00023277;
                }
                piVar6 = *piVar6;
            } while (piVar6 != NULL);
            *(iVar3 + 0x48) = *(iVar3 + 0x48) + 0x100000U & 0xfff00000;
        }
        puVar1 = *puVar1;
    } while( true );
}


/* fcn.00023529 @ 0x23529 */

void fcn.00023529(int param_1)

{
    uint *puVar1;
    int *piVar2;
    
    puVar1 = *(param_1 + 0x50);
    do {
        while( true ) {
            if (puVar1 == NULL) {
                return;
            }
            piVar2 = puVar1[0xc];
            if (piVar2 != NULL) break;
            puVar1 = *puVar1;
        }
        do {
            fcn.000126aa(piVar2[1],piVar2[5],piVar2[6],
                         CONCAT21(CONCAT11(piVar2[7],*(piVar2 + 0x1d)),*(piVar2 + 0x1e)) << 8);
            piVar2 = *piVar2;
        } while (piVar2 != NULL);
        puVar1 = *puVar1;
    } while (puVar1 != NULL);
    return;
}


/* fcn.00012d85 @ 0x12d85 */

int32_t __cdecl fcn.00012d85(int32_t arg_8h,int32_t arg_ch,int16_t arg_10h)

{
    int iVar1;
    int32_t var_4h;
    
    var_4h = 0;
    iVar1 = (**arg_8h)(*0x15358,arg_8h,2,arg_10h | arg_ch,0,&var_4h);
    if (iVar1 < 0) {
        var_4h = 0;
    }
    return var_4h;
}


/* fcn.00023840 @ 0x23840 */

uint32_t fcn.00023840(int32_t param_1,int32_t param_2,uint8_t param_3)

{
    uint8_t uVar1;
    uint32_t uVar2;
    
    uVar1 = fcn.00012dbd(param_1,param_2,param_3);
    uVar2 = param_3;
    if (uVar2 == 0x4c) {
        if (uVar1 < 0x14) {
            uVar1 = 0x14;
            uVar2 = 0;
        }
        else {
            uVar2 = uVar1;
            if (0x1c < uVar1) {
                uVar2 = 0x1c;
            }
            uVar1 = uVar2;
        }
    }
    else {
        if (uVar2 == 0x4d) {
            if (uVar1 < 0xc) {
                return 0xc;
            }
            uVar2 = uVar1;
            if (0x20 < uVar1) {
                uVar2 = 0x20;
            }
            return uVar2;
        }
        uVar2 = uVar2 - 0x4e;
        if (uVar2 == 0) {
            if (uVar1 < 0xd) {
                uVar1 = 0xd;
            }
            else if (0x20 < uVar1) {
                uVar1 = 0x20;
            }
        }
    }
    return CONCAT31(uVar2 >> 8,uVar1);
}


/* fcn.00023bcb @ 0x23bcb */

void fcn.00023bcb(int param_1)

{
    uint32_t uVar1;
    
    if ((*(param_1 + 0x20) & 1) == 0) {
        *(param_1 + 0x4d) = 0xff01;
    }
    else {
        uVar1 = *(param_1 + 0x24) >> 8 & 3;
        if (uVar1 == 0) {
            *(param_1 + 0x4d) = 0x7f01;
        }
        else if (uVar1 == 1) {
            *(param_1 + 0x4d) = 0xff81;
        }
        else {
            *(param_1 + 0x4d) = 0xffe1;
        }
    }
    *(param_1 + 0x4f) = *(param_1 + 0x4d) + -1;
    return;
}


