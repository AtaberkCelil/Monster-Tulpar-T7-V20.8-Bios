// decompiled by r2ghidra: 2571_RomLayoutPei.te
// functions: 31

/* fcn.000007f1 @ 0x7f1 */

void __fastcall fcn.000007f1(uint param_1,int *param_2)

{
    uchar *puVar1;
    int iVar2;
    uchar auStack_30 [36];
    uint8_t uStack_c;
    
    puVar1 = fcn.00000bfc();
    while (puVar1 != NULL) {
        if (auStack_30 != puVar1) {
            section..text(auStack_30,puVar1,0x28);
        }
        if (((uStack_c & 2) != 0) && ((uStack_c & 0x20) == 0)) {
            iVar2 = fcn.00000341();
            if ((iVar2 < 0) && ((uStack_c & 0x80) == 0)) {
                fcn.0000036b();
            }
        }
        puVar1 = fcn.00000c36();
    }
    (**(*param_2 + 0x24))(param_2,0xfffce484);
    (**(*param_2 + 0x24))(param_2,0xfffce478);
    return;
}


/* entry0 @ 0x19d */

void entry0(uint param_1,int *param_2)

{
    uchar *puVar1;
    int iVar2;
    uchar auStack_30 [36];
    uint8_t uStack_c;
    
    puVar1 = fcn.00000bfc();
    while (puVar1 != NULL) {
        if (auStack_30 != puVar1) {
            section..text(auStack_30,puVar1,0x28);
        }
        if (((uStack_c & 2) != 0) && ((uStack_c & 0x20) == 0)) {
            iVar2 = fcn.00000341();
            if ((iVar2 < 0) && ((uStack_c & 0x80) == 0)) {
                fcn.0000036b();
            }
        }
        puVar1 = fcn.00000c36();
    }
    (**(*param_2 + 0x24))(param_2,0xfffce484);
    (**(*param_2 + 0x24))(param_2,0xfffce478);
    return;
}


/* fcn.0000097a @ 0x97a */

int32_t fcn.0000097a(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.000009a5 @ 0x9a5 */

int16_t * __fastcall fcn.000009a5(int16_t param_1,int16_t *param_2)

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


/* fcn.00000870 @ 0x870 */

uint32_t __fastcall fcn.00000870(uint param_1,int param_2,uint32_t param_3)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uStack_8;
    int32_t iStack_4;
    
    if (param_2 != 0) {
        if (param_3 < 0x1001) {
            iVar1 = fcn.00000dfd(&uStack_8);
            if (-1 < iVar1) {
                return uStack_8;
            }
        }
        else {
            iVar1 = fcn.00000dfd(&uStack_8);
            if (-1 < iVar1) {
                uVar2 = uStack_8 + (param_3 - 1) & ~(param_3 - 1);
                iVar1 = ((uVar2 - uStack_8 & 0xfff) != 0) + (uVar2 - uStack_8 >> 0xc);
                if (iVar1 != 0) {
                    fcn.00000e28(uStack_8,iStack_4);
                }
                iStack_4 = 0;
                uStack_8 = param_2 * 0x1000 + uVar2;
                if (((param_3 >> 0xc) + ((param_3 & 0xfff) != 0) + param_2) - iVar1 != param_2) {
                    fcn.00000e28(uStack_8,0);
                }
                return uVar2;
            }
        }
    }
    return 0;
}


/* fcn.00000964 @ 0x964 */

int __fastcall fcn.00000964(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = section..text(param_1,param_2,param_3);
    return iVar1;
}


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 3754 named .text
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


/* fcn.000001a6 @ 0x1a6 */

char __cdecl fcn.000001a6(int32_t arg_8h)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    char cVar7;
    int in_EDX;
    int *piVar8;
    int iVar9;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    
    cVar7 = '\x01';
    piVar8 = 0xfffce49c;
    while( true ) {
        if (cVar7 == '\0') {
            return '\0';
        }
        cVar7 = (**piVar8)();
        if (cVar7 == '\0') break;
        piVar8 = piVar8 + 1;
        if (*piVar8 == 0) {
            iVar1 = *(in_EDX + 0x10);
            iVar9 = 0;
            iVar2 = *(in_EDX + 0x14);
            iVar3 = *(in_EDX + 0x18);
            iVar4 = *(in_EDX + 0x1c);
            iVar5 = *(in_EDX + 0x20);
            iVar6 = *(in_EDX + 0x24);
            if (*0xfffce4c8 != 0) {
                piVar8 = 0xfffce4c8;
                do {
                    cVar7 = (**piVar8)();
                    if (cVar7 == '\0') {
                        return '\0';
                    }
                    if ((iVar1 != *(in_EDX + 0x10)) || (iVar2 != *(in_EDX + 0x14))) {
                        *(in_EDX + 0x10) = iVar1;
                        *(in_EDX + 0x14) = iVar2;
                    }
                    if (iVar3 != *(in_EDX + 0x18)) {
                        *(in_EDX + 0x18) = iVar3;
                    }
                    if (iVar4 != *(in_EDX + 0x1c)) {
                        *(in_EDX + 0x1c) = iVar4;
                    }
                    if (iVar5 != *(in_EDX + 0x20)) {
                        *(in_EDX + 0x20) = iVar5;
                    }
                    if (iVar6 != *(in_EDX + 0x24)) {
                        *(in_EDX + 0x24) = iVar6;
                    }
                    iVar9 = iVar9 + 1;
                    piVar8 = iVar9 * 4 + -0x31b38;
                } while (*piVar8 != 0);
            }
            return cVar7;
        }
    }
    return '\0';
}


/* fcn.000002ce @ 0x2ce */

uint __fastcall fcn.000002ce(uint param_1,int param_2)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    
    uVar1 = *(param_2 + 0x10);
    uVar4 = 1 << (*(uVar1 + 0x2e) & 0x1f);
    if (uVar4 < 8) {
        uVar4 = 8;
    }
    if (uVar1 % uVar4 != 0) {
        iVar2 = *(uVar1 + 0x20);
        iVar3 = fcn.00000870(uVar4);
        if (iVar3 == 0) {
            return 0;
        }
        if (iVar2 != 0) {
            fcn.00000964(iVar2);
        }
        *(param_2 + 0x14) = 0;
        *(param_2 + 0x10) = iVar3;
    }
    return 1;
}


/* fcn.00000bfc @ 0xbfc */

uint32_t fcn.00000bfc(void)

{
    int iVar1;
    
    fcn.0000097a();
    iVar1 = fcn.000009c8();
    if (iVar1 == 0) {
        fcn.00000a86();
        fcn.0000097a();
        iVar1 = fcn.000009c8();
    }
    return iVar1 + 0x30U & -(iVar1 != 0);
}


/* fcn.000009c8 @ 0x9c8 */

int fcn.000009c8(void)

{
    char cVar1;
    int iVar2;
    
    do {
        iVar2 = fcn.000009a5();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00000f26();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.00000a86 @ 0xa86 */

int * fcn.00000a86(void)

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
        iVar2 = (**(**(iStack_6 + -4) + 0x68))(0xfffce3dc,uStack_14,&iStack_10);
        iVar1 = iStack_10;
        if ((-1 < iVar2) && (piVar5 = iStack_10 + 0x2c, *piVar5 == 0x4c4d4f52)) {
            puVar3 = fcn.00000a31();
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
                            fcn.00000964(iVar2);
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


/* fcn.00000341 @ 0x341 */

uint __fastcall fcn.00000341(uint param_1,int param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint uVar3;
    char cVar4;
    int iVar5;
    uint uVar6;
    
    cVar4 = fcn.000001a6(*(param_2 + 0x24));
    if (cVar4 == '\0') {
        return 0x8000000a;
    }
    cVar4 = fcn.000002ce();
    if (cVar4 != '\0') {
        uVar6 = 0x80000002;
        if (param_2 != 0) {
            uVar1 = *(param_2 + 0x10);
            uVar2 = *(param_2 + 0x14);
            if ((uVar1 & uVar2) == 0xffffffff) {
                return 0x80000011;
            }
            uVar6 = 0x8000000a;
            if (*(uVar1 + 0x28) == 0x4856465f) {
                uVar3 = *(param_2 + 0x1c);
                uVar6 = 0;
                cVar4 = fcn.00000a58(uVar1,uVar2,param_2,param_2);
                if ((cVar4 != '\0') && (iVar5 = fcn.000009f7(), iVar5 != 0)) {
                    *(iVar5 + 8) = uVar1;
                    *(iVar5 + 0xc) = uVar2;
                    *(iVar5 + 0x10) = uVar3;
                    *(iVar5 + 0x14) = 0;
                }
                fcn.00000e57(*(param_2 + 0x10),*(param_2 + 0x1c));
            }
        }
        return uVar6;
    }
    return 0x8000000a;
}


/* fcn.00000c77 @ 0xc77 */

uint __fastcall fcn.00000c77(int param_1)

{
    char cVar1;
    int iVar2;
    uint extraout_ECX;
    
    if (param_1 != 0) {
        iVar2 = fcn.00000bfc();
        while (iVar2 != 0) {
            cVar1 = fcn.00000f26();
            if (cVar1 != '\0') {
                return extraout_ECX;
            }
            iVar2 = fcn.00000c36();
        }
    }
    return 0;
}


/* fcn.0000036b @ 0x36b */

void __fastcall fcn.0000036b(int *param_1)

{
    int iVar1;
    uint32_t var_4h;
    
    var_4h = param_1;
    iVar1 = (**(*param_1 + 0x28))(param_1,&var_4h);
    if ((iVar1 < 0) || (var_4h != 0x20)) {
        (**(*param_1 + 0x2c))(param_1,0x20);
        (**(*param_1 + 0x18))(param_1,0xfffce45c);
        (**(*param_1 + 0x58))(param_1,1,0x3031004,0,0,0);
    }
    return;
}


/* fcn.00000c36 @ 0xc36 */

int __fastcall fcn.00000c36(int param_1)

{
    int *piVar1;
    uint32_t uVar2;
    int iVar3;
    char cVar4;
    uint32_t uVar5;
    
    if (param_1 != 0) {
        piVar1 = param_1 + -8;
        iVar3 = *piVar1;
        cVar4 = fcn.00000f26();
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


/* fcn.00000ca1 @ 0xca1 */

uint __thiscall fcn.00000ca1(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
    int iVar1;
    char cVar2;
    uint uVar3;
    int *piVar4;
    
    iVar1 = *0xfffce3dc;
    if ((param_1 == NULL) || (param_2 == NULL)) {
        uVar3 = 0x80000002;
    }
    else {
        for (piVar4 = param_1 + 0x3ffff1; piVar4 != param_1; piVar4 = piVar4 + -1) {
            if ((((*piVar4 == iVar1) && (cVar2 = fcn.00000f26(), cVar2 != '\0')) &&
                (cVar2 = fcn.00000f26(), cVar2 != '\0')) && (piVar4[0xb] == 0x4c4d4f52)) {
                if (param_3 != NULL) {
                    *param_3 = piVar4[0xc];
                }
                if (param_4 != NULL) {
                    *param_4 = piVar4[0xd];
                }
                if (param_5 != NULL) {
                    *param_5 = piVar4[0xe] * piVar4[0xd];
                }
                *param_2 = piVar4 + 0xf;
                return 0;
            }
        }
        uVar3 = 0x8000000e;
    }
    return uVar3;
}


/* fcn.00000285 @ 0x285 */

void fcn.00000285(void)

{
    ushort *puVar1;
    
    fcn.0000097a();
    puVar1 = fcn.000009a5();
    while (puVar1 != NULL) {
        *puVar1 = 0xfffe;
        puVar1 = fcn.000009a5();
    }
    fcn.0000097a();
    while( true ) {
        puVar1 = fcn.000009a5();
        if (puVar1 == NULL) break;
        *puVar1 = 0xfffe;
    }
    return;
}


/* fcn.00000a31 @ 0xa31 */

int fcn.00000a31(void)

{
    int iVar1;
    
    iVar1 = fcn.000009f7();
    if (iVar1 != 0) {
        fcn.00000f0d();
        iVar1 = iVar1 + 0x18;
    }
    return iVar1;
}


/* fcn.000009f7 @ 0x9f7 */

int32_t __fastcall fcn.000009f7(uint param_1,uint param_2)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffee + -4) + 0x34))(*(stack0xffffffee + -4),param_1,param_2,&var_8h);
    if (iVar1 < 0) {
        var_8h = 0;
    }
    return var_8h;
}


/* fcn.00000f0d @ 0xf0d */

uint * __fastcall fcn.00000f0d(uint *param_1,uint *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
}


/* fcn.00000b93 @ 0xb93 */

uint __fastcall fcn.00000b93(uint param_1,uint *param_2,int *param_3)

{
    int iVar1;
    
    fcn.0000097a();
    iVar1 = fcn.000009c8();
    if (iVar1 == 0) {
        fcn.00000a86();
        fcn.0000097a();
        iVar1 = fcn.000009c8();
        if (iVar1 == 0) {
            return 0x8000000e;
        }
    }
    if (param_2 != NULL) {
        *param_2 = *(iVar1 + 0x1c);
    }
    if (param_3 != NULL) {
        *param_3 = ((*(iVar1 + 2) - 0x28) / *(iVar1 + 0x20)) * *(iVar1 + 0x1c);
    }
    return 0;
}


/* fcn.000004fc @ 0x4fc */

void __fastcall fcn.000004fc(int param_1,uint param_2)

{
    uint32_t uVar1;
    int iVar2;
    ushort *puVar3;
    uint *puVar4;
    uchar *puVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int *piVar8;
    uint32_t uStack_54;
    uint32_t uStack_50;
    uint uStack_4c;
    uint32_t uStack_48;
    int iStack_44;
    uint uStack_40;
    uint uStack_38;
    uint uStack_34;
    uint uStack_30;
    uchar auStack_2c [16];
    int iStack_1c;
    uint uStack_18;
    int iStack_14;
    uint8_t uStack_8;
    
    uStack_48 = 0;
    uStack_4c = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uVar6 = uStack_48;
    uStack_38 = param_2;
    if (param_1 != 0) {
        iVar2 = fcn.00000ca1(&uStack_48,&uStack_4c,&uStack_54,&uStack_50);
        if (iVar2 < 0) {
            return;
        }
        fcn.00000285();
        fcn.0000097a();
        puVar3 = fcn.000009c8();
        if (puVar3 != NULL) {
            *puVar3 = 0xfffe;
        }
        uStack_40 = 0;
        iStack_44 = (0U % uStack_54 << 0x20 | uStack_50) / uStack_54;
        uStack_34 = 0x30;
        uStack_30 = 0;
        puVar4 = fcn.00000a31();
        uVar1 = uStack_54;
        uVar6 = uStack_48;
        if (puVar4 != NULL) {
            piVar8 = puVar4 + 4;
            *puVar4 = uStack_4c;
            puVar4[1] = uStack_54;
            uVar6 = uStack_50 + uStack_48;
            puVar4[2] = 0x30;
            puVar4[3] = 1;
            if (uStack_48 < uVar6) {
                iVar2 = 0x10 - puVar4;
                uVar7 = uStack_48;
                uStack_48 = uVar6;
                iStack_44 = iVar2;
                do {
                    if (uVar1 != 0) {
                        fcn.00000964(uVar1);
                        iVar2 = iStack_44;
                    }
                    piVar8[1] = 0;
                    uVar7 = uVar7 + uVar1;
                    *piVar8 = piVar8 + iVar2 + 8;
                    piVar8 = piVar8 + 0xc;
                    uVar6 = uStack_48;
                } while (uVar7 < uStack_48);
            }
        }
    }
    uStack_48 = uVar6;
    puVar5 = fcn.00000bfc();
    do {
        if (puVar5 == NULL) {
            return;
        }
        if (auStack_2c != puVar5) {
            section..text(auStack_2c,puVar5,0x28);
        }
        if (param_1 != 0) {
            iStack_1c = iStack_14 + param_1;
            uStack_18 = 0;
        }
        if ((uStack_8 & 8) == 0) {
            if ((param_1 != 0) && ((uStack_8 & 0x26) != 0)) goto code_r0x00000696;
        }
        else if (param_1 == 0) {
            if ((((uStack_8 & 0x26) == 0) && (iVar2 = fcn.00000341(), iVar2 < 0)) && ((uStack_8 & 0x80) == 0)) {
                fcn.0000036b();
            }
        }
        else {
code_r0x00000696:
            fcn.00000341();
        }
        puVar5 = fcn.00000c36();
    } while( true );
}


/* fcn.000006b6 @ 0x6b6 */

void fcn.000006b6(void)

{
    int iVar1;
    uint *puVar2;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00000b93(&var_4h);
    if (-1 < iVar1) {
        puVar2 = fcn.00000a31();
        if (puVar2 != NULL) {
            iVar1 = fcn.00000bfc();
            while (iVar1 != 0) {
                *puVar2 = *(iVar1 + 0x10);
                puVar2[1] = *(iVar1 + 0x14);
                puVar2[5] = *(iVar1 + 0x24);
                puVar2[2] = *(iVar1 + 0x18);
                puVar2[3] = *(iVar1 + 0x1c);
                puVar2[4] = *(iVar1 + 0x20);
                iVar1 = fcn.00000c36();
                puVar2 = puVar2 + 6;
            }
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[5] = 0;
            puVar2[2] = 0;
            puVar2[3] = 0;
            puVar2[4] = 0;
        }
    }
    return;
}


/* fcn.00000dfd @ 0xdfd */

void __cdecl fcn.00000dfd(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x48))(*(stack0xfffffff2 + -4),4);
    return;
}


/* fcn.00000e28 @ 0xe28 */

void __cdecl fcn.00000e28(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x84))(*(stack0xfffffff2 + -4),arg_8h,arg_ch);
    return;
}


/* fcn.00000f26 @ 0xf26 */

uint32_t __fastcall fcn.00000f26(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00000a58 @ 0xa58 */

uint fcn.00000a58(uint32_t param_1)

{
    uint32_t uVar1;
    
    if (-1 < *(param_1 + 0x2c)) {
        uVar1 = 1 << (*(param_1 + 0x2c) >> 0x10 & 0x1f);
        if (uVar1 < 8) {
            uVar1 = 8;
        }
        if (param_1 % uVar1 != 0) {
            return 0;
        }
    }
    return 1;
}


/* fcn.00000e57 @ 0xe57 */

void __cdecl fcn.00000e57(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    uint *puVar2;
    uint *puVar3;
    int in_EDX;
    int32_t var_8h;
    
    iVar1 = fcn.0000092d();
    puVar2 = NULL;
    if (iVar1 != 0) {
        puVar2 = fcn.000000e0(iVar1,0x20);
    }
    if (in_EDX == 0) {
        *puVar2 = *0xfffce40c;
        puVar2[1] = *0xfffce410;
        puVar2[2] = *0xfffce414;
        puVar2[3] = *0xfffce418;
    }
    else {
        fcn.00000f0d();
    }
    puVar2[4] = arg_8h;
    puVar2[5] = arg_ch;
    puVar3 = fcn.0000092d();
    puVar3[1] = 0xfffce43c;
    *puVar3 = 0x80000010;
    puVar3[2] = puVar2;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff6 + -4) + 0x18))(*(stack0xfffffff6 + -4),puVar3);
    return;
}


/* fcn.0000092d @ 0x92d */

int32_t __fastcall fcn.0000092d(uint param_1)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffee + -4) + 0x4c))(*(stack0xffffffee + -4),param_1,&var_8h);
    if (iVar1 < 0) {
        var_8h = 0;
    }
    return var_8h;
}


/* fcn.000000e0 @ 0xe0 */

uint * fcn.000000e0(uint *param_1,uint32_t param_2)

{
    uint32_t uVar1;
    uint *puVar2;
    
    uVar1 = param_2 & 3;
    puVar2 = param_1;
    for (param_2 = param_2 >> 2; param_2 != 0; param_2 = param_2 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
    }
    return param_1;
}


