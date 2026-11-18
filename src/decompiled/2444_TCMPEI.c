// decompiled by r2ghidra: 2444_TCMPEI.te
// functions: 19

/* entry0 @ 0x17d */

uint entry0(uint param_1,int *param_2)

{
    uint uVar1;
    
    if (*(*0xffd4efb4 + 0xf00) != 0x1b4e) {
        return 0xa0000001;
    }
    uVar1 = (**(*param_2 + 0x18))(param_2,0xffd4efa8);
    return uVar1;
}


/* fcn.00000b41 @ 0xb41 */

void __cdecl fcn.00000b41(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h)

{
    fcn.0000093c(arg_10h,arg_14h,&arg_18h);
    return;
}


/* fcn.0000093c @ 0x93c */

int __fastcall fcn.0000093c(uint8_t param_1,int param_2,uint32_t param_3,int param_4,uint32_t *param_5)

{
    uchar *puVar1;
    int16_t iVar2;
    int iVar3;
    int iVar4;
    int extraout_ECX;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iStack_14;
    uint32_t uStack_10;
    int iStack_c;
    int iStack_8;
    char *pcStack_4;
    
    if (*0xfed40000 == -1) {
        return 3;
    }
    iVar5 = param_1 * 0x1000;
    pcStack_4 = iVar5 + -0x12c0000;
    if (*pcStack_4 == -1) {
        return 6;
    }
    *pcStack_4 = '\x02';
    iStack_c = param_2;
    iStack_8 = iVar5;
    iVar3 = fcn.0000089d(0,pcStack_4);
    if (iVar3 != 0) {
        return iVar3;
    }
    iVar3 = fcn.00000920();
    if (iVar3 != 0) {
        return iVar3;
    }
    uVar7 = 0;
    iVar3 = extraout_ECX;
    if (param_3 != 0) {
        do {
            iVar3 = fcn.000008cf();
            if (iVar3 != 0) goto code_r0x00000b24;
            while (iVar3 = iStack_14, iStack_14 != 0) {
                if (param_3 <= uVar7) goto code_r0x000009f2;
                puVar1 = uVar7 + iStack_c;
                uVar7 = uVar7 + 1;
                iStack_14 = iStack_14 + 0xffff;
                *(iVar5 + -0x12bffdc) = *puVar1;
            }
        } while (uVar7 < param_3);
    }
code_r0x000009f2:
    iVar4 = fcn.0000089d(8,iVar3);
    if (iVar4 == 0) {
        *(iVar5 + -0x12bffe8) = 0x20;
        iVar3 = fcn.0000089d(0,iVar3);
        if (iVar3 == 0) {
            uVar7 = 0;
            iVar2 = 0;
            do {
                iVar3 = fcn.000008cf();
                if (iVar3 != 0) goto code_r0x00000b24;
                for (; iVar2 != 0; iVar2 = iVar2 + -1) {
                    *(uVar7 + param_4) = *(iVar5 + -0x12bffdc);
                    uVar7 = uVar7 + 1;
                    if (uVar7 == 10) goto code_r0x00000a7d;
                }
            } while (uVar7 < 10);
code_r0x00000a7d:
            if (&uStack_10 != param_4 + 2) {
                section..text(&uStack_10,param_4 + 2,4);
            }
            uVar6 = (uStack_10 & 0xff0000 | uStack_10 >> 0x10) >> 8 | (uStack_10 & 0xff00 | uStack_10 << 0x10) << 8;
            if (*param_5 < uVar6) {
                iVar5 = 5;
            }
            else {
                *param_5 = uVar6;
                iVar5 = 0;
                if (uVar7 < uVar6) {
                    do {
                        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
                            *(uVar7 + param_4) = *(iStack_8 + -0x12bffdc);
                            uVar7 = uVar7 + 1;
                            if (uVar7 == uVar6) {
                                iVar5 = 0;
                                goto code_r0x00000b27;
                            }
                        }
                        iVar5 = fcn.000008cf();
                        if (iVar5 != 0) goto code_r0x00000b24;
                        iVar5 = 0;
                    } while (uVar7 < uVar6);
                }
            }
        }
        else {
code_r0x00000b24:
            iVar5 = 1;
        }
    }
    else {
        iVar5 = 4;
    }
code_r0x00000b27:
    fcn.00000920();
    *pcStack_4 = ' ';
    return iVar5;
}


/* fcn.0000047a @ 0x47a */

int __fastcall fcn.0000047a(int param_1,int16_t *param_2)

{
    if ((param_1 == 0) && (*param_2 != -0x3c00)) {
        param_1 = -0x7ffffff0;
    }
    return param_1;
}


/* fcn.000001ae @ 0x1ae */

void __fastcall fcn.000001ae(uint param_1,uint16_t param_2)

{
    int16_t var_1ch;
    int32_t var_1ah;
    int32_t var_16h;
    int16_t var_12h;
    int32_t var_10h;
    
    var_12h = param_2 << 8 | param_2 >> 8;
    var_1ch = -0x3f00;
    var_1ah = 0xc000000;
    var_16h = -0x66800000;
    fcn.00000b41(*0xffd4efb4,&var_1ch,0xc,&var_10h,10);
    fcn.0000047a();
    return;
}


/* fcn.00000288 @ 0x288 */

void __fastcall fcn.00000288(uint param_1,int8_t param_2)

{
    int16_t var_1ch;
    int32_t var_1ah;
    int32_t var_16h;
    int8_t var_12h;
    int32_t var_10h;
    
    var_1ah = 0xb000000;
    var_1ch = -0x3f00;
    var_16h = 0x72800000;
    var_12h = param_2;
    fcn.00000b41(*0xffd4efb4,&var_1ch,0xb,&var_10h,10);
    fcn.0000047a();
    return;
}


/* fcn.000002d1 @ 0x2d1 */

void __cdecl fcn.000002d1(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    uint32_t in_EDX;
    uchar *puVar1;
    int32_t var_40h;
    uchar uStack_37;
    int32_t var_32h;
    int16_t var_1ch;
    int32_t var_1ah;
    int32_t var_16h;
    int32_t var_12h;
    int32_t var_eh;
    int32_t var_ah;
    
    var_1ch = -0x3f00;
    var_ah = arg_8h >> 0x18 | (arg_8h & 0xff0000U) >> 8 | (arg_8h & 0xff00U) << 8 | arg_8h << 0x18;
    var_1ah = 0x16000000;
    var_16h = 0x65800000;
    var_12h = in_EDX >> 0x18 | (in_EDX & 0xff0000) >> 8 | (in_EDX & 0xff00) << 8 | in_EDX << 0x18;
    var_eh = 0x4000000;
    fcn.00000b41(*0xffd4efb4,&var_1ch,0x16,&var_40h,arg_ch + 0xe);
    puVar1 = arg_ch + arg_10h;
    do {
        puVar1 = puVar1 + -1;
        *puVar1 = puVar1[&var_32h - arg_10h];
        arg_ch = arg_ch + -1;
    } while (arg_ch != 0);
    fcn.0000047a(arg_10h);
    return;
}


/* fcn.0000061a @ 0x61a */

void __fastcall fcn.0000061a(int param_1,uint32_t param_2,int param_3)

{
    uchar *puVar1;
    uchar uVar2;
    uchar *puVar3;
    uchar *puVar4;
    
    param_2 = param_2 >> 2;
    if (param_2 != 0) {
        puVar4 = param_1 + 3;
        puVar3 = param_3 + 1;
        do {
            uVar2 = puVar3[-1];
            puVar3[-1] = *puVar4;
            puVar1 = puVar4 + -1;
            *puVar4 = uVar2;
            puVar4 = puVar4 + 4;
            uVar2 = *puVar3;
            *puVar3 = *puVar1;
            puVar3[1] = uVar2;
            param_2 = param_2 - 1;
            puVar3 = puVar3 + 4;
        } while (param_2 != 0);
    }
    return;
}


/* fcn.00000490 @ 0x490 */

void __fastcall fcn.00000490(int *param_1,int *param_2,uint32_t *param_3)

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
    uint32_t uStack_28;
    uint32_t uStack_24;
    int *piStack_20;
    int *piStack_1c;
    int iStack_14;
    uint32_t uStack_c;
    uint32_t uStack_8;
    
    uVar7 = 0x79cc4519;
    uStack_8 = param_3[7];
    iStack_14 = 0;
    uVar3 = *param_3;
    uVar4 = param_3[4];
    uVar8 = param_3[1];
    uVar5 = param_3[2];
    uStack_28 = param_3[5];
    uStack_24 = param_3[6];
    piStack_20 = param_2;
    piStack_1c = param_1;
    uStack_c = param_3[3];
    while( true ) {
        uVar9 = uVar5;
        uVar6 = uVar4;
        uVar2 = uVar3;
        if (iStack_14 == 0) {
            uVar7 = 0x79cc4519;
        }
        else if (iStack_14 == 0x10) {
            uVar7 = 0x9d8a7a87;
        }
        else {
            uVar7 = uVar7 << 1 | uVar7 < 0;
        }
        uVar5 = uVar2 << 0xc | uVar2 >> 0x14;
        uVar3 = uVar5 + uVar6 + uVar7;
        uVar4 = uVar3 * 0x80 | uVar3 >> 0x19;
        if (iStack_14 < 0x10) {
            uVar3 = uVar2 ^ uVar8 ^ uVar9;
        }
        else {
            uVar3 = (uVar8 | uVar9) & uVar2 | uVar8 & uVar9;
        }
        uVar3 = *piStack_20 + uVar3 + (uVar5 ^ uVar4) + uStack_c;
        if (iStack_14 < 0x10) {
            uVar5 = uVar6 ^ uStack_28 ^ uStack_24;
        }
        else {
            uVar5 = ~uVar6 & uStack_24 | uVar6 & uStack_28;
        }
        uVar4 = *piStack_1c + uVar5 + uVar4 + uStack_8;
        uStack_8 = uStack_24;
        uVar1 = uStack_28 >> 0xd | uStack_28 << 0x13;
        uVar4 = (uVar4 >> 0xf | uVar4 * 0x20000) ^ (uVar4 * 0x200 | uVar4 >> 0x17) ^ uVar4;
        uVar5 = uVar8 << 9 | uVar8 >> 0x17;
        iStack_14 = iStack_14 + 1;
        if (0x3f < iStack_14) break;
        uVar8 = uVar2;
        uStack_28 = uVar6;
        uStack_24 = uVar1;
        piStack_20 = piStack_20 + 1;
        piStack_1c = piStack_1c + 1;
        uStack_c = uVar9;
    }
    *param_3 = *param_3 ^ uVar3;
    param_3[1] = param_3[1] ^ uVar2;
    param_3[5] = param_3[5] ^ uVar6;
    param_3[2] = param_3[2] ^ uVar5;
    param_3[4] = param_3[4] ^ uVar4;
    param_3[3] = param_3[3] ^ uVar9;
    param_3[6] = param_3[6] ^ uVar1;
    param_3[7] = param_3[7] ^ uStack_24;
    return;
}


/* fcn.0000064d @ 0x64d */

void __fastcall fcn.0000064d(int param_1)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t *puVar4;
    uint32_t *puVar5;
    uint32_t auStack_210 [68];
    uint32_t auStack_100 [64];
    
    iVar3 = 0x40;
    fcn.0000061a(param_1 + 0x28);
    puVar4 = param_1 + 0x28;
    puVar5 = auStack_210;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
    }
    iVar1 = 0x34;
    puVar4 = auStack_210;
    do {
        uVar2 = (puVar4[0xd] << 0xf | puVar4[0xd] >> 0x11) ^ puVar4[7] ^ *puVar4;
        puVar4[0x10] = (puVar4[3] << 7 | puVar4[3] >> 0x19) ^ (uVar2 << 0xf | uVar2 >> 0x11) ^
                       (uVar2 >> 9 | uVar2 << 0x17) ^ puVar4[10] ^ uVar2;
        iVar1 = iVar1 + -1;
        puVar4 = puVar4 + 1;
    } while (iVar1 != 0);
    iVar1 = 0;
    do {
        *(auStack_100 + iVar1) = *(auStack_210 + iVar1 + 0x10) ^ *(auStack_210 + iVar1);
        iVar3 = iVar3 + -1;
        iVar1 = iVar1 + 4;
    } while (iVar3 != 0);
    fcn.00000490(param_1);
    return;
}


/* fcn.000006df @ 0x6df */

void __fastcall fcn.000006df(int param_1)

{
    uint32_t uVar1;
    
    *(param_1 + 0x20) = *(param_1 + 0x20) + *(param_1 + 0x24) * 8;
    *(*(param_1 + 0x24) + 0x28 + param_1) = 0x80;
    *(param_1 + 0x24) = *(param_1 + 0x24) + 1;
    uVar1 = *(param_1 + 0x24);
    if (0x38 < uVar1) {
        while (uVar1 < 0x40) {
            *(param_1 + 0x28 + uVar1) = 0;
            *(param_1 + 0x24) = *(param_1 + 0x24) + 1;
            uVar1 = *(param_1 + 0x24);
        }
        fcn.0000064d();
        *(param_1 + 0x24) = 0;
    }
    while (*(param_1 + 0x24) < 0x38) {
        *(param_1 + 0x28 + *(param_1 + 0x24)) = 0;
        *(param_1 + 0x24) = *(param_1 + 0x24) + 1;
    }
    *(param_1 + 0x60) = 0;
    *(param_1 + 0x67) = *(param_1 + 0x20);
    *(param_1 + 0x66) = *(param_1 + 0x20) >> 8;
    *(param_1 + 0x65) = *(param_1 + 0x22);
    *(param_1 + 100) = *(param_1 + 0x23);
    fcn.0000064d();
    fcn.0000061a(param_1);
    return;
}


/* fcn.0000075f @ 0x75f */

void __fastcall fcn.0000075f(uchar *param_1,int param_2)

{
    int iStack_4c;
    uchar auStack_48 [68];
    
    do {
        iStack_4c = 0;
        do {
            if (param_2 == 0) {
                fcn.000006df();
                return;
            }
            param_2 = param_2 + -1;
            auStack_48[iStack_4c] = *param_1;
            param_1 = param_1 + 1;
            iStack_4c = iStack_4c + 1;
        } while (iStack_4c != 0x40);
        fcn.0000064d();
    } while( true );
}


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 2909 named .text
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


/* fcn.00000bb6 @ 0xbb6 */

ulong fcn.00000bb6(void)

{
    int32_t var_10h;
    int var_ch;
    int32_t var_4h;
    
    return 0x66695ee;
}


/* fcn.00000b6d @ 0xb6d */

void __fastcall fcn.00000b6d(uint32_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    bool bVar6;
    
    uVar5 = param_1 & 0x3fffff;
    uVar4 = param_1 >> 0x16;
    do {
        uVar1 = in(0x1808);
        iVar3 = (uVar1 & 0xffffff) + uVar5;
        uVar5 = 0x400000;
        do {
            iVar2 = in(0x1808);
        } while ((iVar3 - iVar2 & 0x800000U) == 0);
        bVar6 = uVar4 != 0;
        uVar4 = uVar4 - 1;
    } while (bVar6);
    return;
}


/* fcn.00000865 @ 0x865 */

void __fastcall fcn.00000865(uint param_1)

{
    ulong uVar1;
    
    uVar1 = fcn.00000bb6(param_1,param_1,param_1,param_1);
    fcn.00000b6d(uVar1);
    return;
}


/* fcn.0000089d @ 0x89d */

uint __fastcall fcn.0000089d(uint8_t *param_1,uint8_t param_2,uint8_t param_3)

{
    uint32_t uVar1;
    
    uVar1 = 0;
    while (((*param_1 & param_2) != param_2 || ((param_3 & *param_1) != 0))) {
        fcn.00000865();
        uVar1 = uVar1 + 1;
        if (49999 < uVar1) {
            return 1;
        }
    }
    return 0;
}


/* fcn.00000920 @ 0x920 */

void __fastcall fcn.00000920(uint32_t param_1)

{
    uchar *puVar1;
    
    puVar1 = (param_1 & 0xff) * 0x1000 + -0x12bffe8;
    *puVar1 = 0x40;
    fcn.0000089d(0,puVar1);
    return;
}


/* fcn.000008cf @ 0x8cf */

uint __fastcall fcn.000008cf(uint32_t param_1,int16_t *param_2)

{
    int16_t iVar1;
    uint32_t uVar2;
    int iVar3;
    
    if (param_2 == NULL) {
        return 2;
    }
    uVar2 = 0;
    iVar3 = (param_1 & 0xff) * 0x1000;
    do {
        iVar1 = *(iVar3 + -0x12bffe6) * 0x100 + *(iVar3 + -0x12bffe7);
        *param_2 = iVar1;
        if (iVar1 != 0) {
            return 0;
        }
        fcn.00000865();
        uVar2 = uVar2 + 1;
    } while (uVar2 < 50000);
    return 1;
}


