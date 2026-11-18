// decompiled by r2ghidra: 2097_AmiTcgPlatformPeiAfterMem.te
// functions: 33

/* entry0 @ 0x1f9 */

void entry0(uint param_1,int *param_2)

{
    (**(*param_2 + 0x18))(param_2,0x2940);
    return;
}


/* fcn.00000b0c @ 0xb0c */

uint __fastcall fcn.00000b0c(uint param_1)

{
    uint16_t uVar1;
    
    uVar1 = param_1 >> 0x10;
    return CONCAT22(param_1 << 8 | param_1 >> 8,uVar1 << 8 | uVar1 >> 8);
}


/* fcn.000009e5 @ 0x9e5 */

int32_t fcn.000009e5(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00000a31 @ 0xa31 */

int fcn.00000a31(void)

{
    char cVar1;
    int iVar2;
    
    do {
        iVar2 = fcn.00000a10();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00000ae8();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.00001d6c @ 0x1d6c */

void __fastcall fcn.00001d6c(uint *param_1)

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


/* fcn.00001d97 @ 0x1d97 */

void __thiscall fcn.00001d97(int param_1,uint32_t param_2)

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
            fcn.00000ab9(iVar4);
        }
        fcn.00000b25();
        for (uVar3 = iVar1 + 0x7f; uVar3 < param_2; uVar3 = uVar3 + 0x40) {
            fcn.00000b25();
            iVar4 = iVar4 + 0x40;
        }
    }
    if (param_2 - iVar4 != 0) {
        fcn.00000ab9(param_2 - iVar4);
    }
    return;
}


/* fcn.00001e2d @ 0x1e2d */

void __fastcall fcn.00001e2d(int param_1,int param_2)

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
    fcn.00001d97(1);
    while ((*(param_2 + 0x14) & 0x1f8) != 0x1c0) {
        fcn.00001d97(1);
    }
    fcn.00001d97(8);
    uVar1 = 0;
    do {
        *(uVar1 + param_1) = *(param_2 + (uVar1 & 0xfffffffc)) >> (('\x03' - (uVar1 & 3)) * '\b' & 0x1f);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 0x14);
    fcn.00000120(param_2 + 0x1c,0x40,0);
    fcn.00000120(param_2,0x14,0);
    fcn.00000120(param_2 + 0x14,8,0);
    fcn.00000120(&iStack_8,8,0);
    return;
}


/* fcn.0000020b @ 0x20b */

void __fastcall fcn.0000020b(ushort *param_1,int *param_2,uint param_3,uint param_4)

{
    ushort *puVar1;
    int iVar2;
    uint uVar3;
    ushort *puStack_8;
    ushort *puStack_4;
    
    puStack_8 = param_1;
    puStack_4 = param_1;
    iVar2 = (**(*param_2 + 0x4c))(param_2,0x22,&puStack_8);
    if (-1 < iVar2) {
        iVar2 = (**(*param_2 + 0x4c))(param_2,0x22,&puStack_4);
        if (-1 < iVar2) {
            (**(*param_2 + 0x54))(puStack_8,0x22,0);
            puVar1 = puStack_8;
            *puStack_8 = 0xc100;
            uVar3 = fcn.00000b0c();
            *(puStack_8 + 1) = uVar3;
            *(puStack_8 + 3) = 0x14000000;
            param_3 = fcn.00000b0c();
            (**(*param_2 + 0x50))(puVar1 + 5,&param_3,4);
            (**(*param_2 + 0x50))(puVar1 + 7,param_4,0x14);
            (**(param_1 + 4))(param_1,param_2,0x22,puStack_8,0x22,puStack_4);
        }
    }
    return;
}


/* fcn.00002645 @ 0x2645 */

uint32_t __cdecl fcn.00002645(uint noname_0,int32_t arg_ch,int32_t arg_10h)

{
    uint32_t uVar1;
    char in_CL;
    int32_t var_ch;
    int32_t var_4h;
    
    if (((in_CL == '\x01') || (in_CL == '\x02')) || (in_CL == '\x03')) {
        var_4h = &var_ch;
        InterruptDescriptorTableRegister();
        uVar1 = (**(**(stack0xfffffff2 + -4) + 0x58))(*(stack0xfffffff2 + -4));
        uVar1 = uVar1 & -(uVar1 != 0xa0000002);
    }
    else {
        uVar1 = 0x80000003;
    }
    return uVar1;
}


/* fcn.00001ef3 @ 0x1ef3 */

uint __fastcall fcn.00001ef3(uint param_1)

{
    uint uVar1;
    
    if (*0x299c != '\0') {
        uVar1 = fcn.00002645(param_1,0x2910,0);
        return uVar1;
    }
    return 0x80000003;
}


/* fcn.000025af @ 0x25af */

uint32_t fcn.000025af(void)

{
    int iVar1;
    
    fcn.000009e5();
    iVar1 = fcn.00000a31();
    if (iVar1 == 0) {
        fcn.000024ab();
        fcn.000009e5();
        iVar1 = fcn.00000a31();
    }
    return iVar1 + 0x30U & -(iVar1 != 0);
}


/* fcn.000024ab @ 0x24ab */

int * fcn.000024ab(void)

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
        iVar2 = (**(**(iStack_6 + -4) + 0x68))(0x2880,uStack_14,&iStack_10);
        iVar1 = iStack_10;
        if ((-1 < iVar2) && (piVar5 = iStack_10 + 0x2c, *piVar5 == 0x4c4d4f52)) {
            puVar3 = fcn.00000a96();
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
                            fcn.00000ab9(iVar2);
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


/* fcn.000025e9 @ 0x25e9 */

int __fastcall fcn.000025e9(int param_1)

{
    int *piVar1;
    uint32_t uVar2;
    int iVar3;
    char cVar4;
    uint32_t uVar5;
    
    if (param_1 != 0) {
        piVar1 = param_1 + -8;
        iVar3 = *piVar1;
        cVar4 = fcn.00000ae8();
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


/* fcn.00000472 @ 0x472 */

uint __fastcall fcn.00000472(int *param_1,uint *param_2,int param_3)

{
    uint uVar1;
    int iVar2;
    
    if (param_1 == NULL) {
        uVar1 = 0x80000002;
    }
    else {
        if (param_3 == 0) {
            iVar2 = fcn.000025af();
        }
        else {
            iVar2 = fcn.000025e9();
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


/* fcn.000002b8 @ 0x2b8 */

int __fastcall fcn.000002b8(int *param_1,int *param_2,uint *param_3)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    int extraout_ECX;
    int *piVar4;
    uint *puStack_8c;
    int *piStack_88;
    int *piStack_84;
    int iStack_80;
    uint uStack_7c;
    uchar auStack_74 [116];
    
    puStack_8c = NULL;
    bVar1 = false;
    iVar2 = (**(*param_1 + 0x4c))(param_1,0x30,&puStack_8c);
    if (-1 < iVar2) {
        piVar4 = *param_2;
        piStack_88 = NULL;
        iVar3 = extraout_ECX;
        piStack_84 = piVar4;
        if (piVar4 != NULL) {
            param_2 = param_2 + 5;
            do {
                *puStack_8c = 0;
                puStack_8c[1] = 0x80000008;
                puStack_8c[7] = 0x10;
                puStack_8c[8] = param_2[-2];
                puStack_8c[9] = param_2[-1];
                puStack_8c[10] = *param_2;
                puStack_8c[0xb] = 0;
                fcn.000009e5();
                do {
                    iVar3 = fcn.00000a31();
                    if (iVar3 == 0) goto code_r0x00000379;
                    piVar4 = iVar3 + 0x18;
                } while ((*piVar4 != param_2[-2]) || (*(iVar3 + 0x24) != *param_2));
                bVar1 = true;
code_r0x00000379:
                uStack_7c = 0;
                iVar3 = piVar4[3];
                iStack_80 = iVar3;
                if (bVar1) {
                    fcn.00001d6c();
                    fcn.00001d97(iStack_80);
                    fcn.00001e2d();
                    (**(*param_1 + 0x50))(puStack_8c + 2,auStack_74,0x14);
                    (**param_3)(param_3,param_1);
                    fcn.0000020b(*puStack_8c,puStack_8c + 2);
                    iVar2 = (*param_3[1])(param_3,param_1);
                    return iVar2;
                }
                param_2 = param_2 + 6;
                piStack_88 = piStack_88 + 1;
            } while (piStack_88 < piStack_84);
        }
        if (*0x299c != '\0') {
            fcn.00002645(iVar3,0x2910,0);
        }
        fcn.00001ef3();
    }
    return iVar2;
}


/* fcn.00001f13 @ 0x1f13 */

uint16_t fcn.00001f13(void)

{
    uint16_t in_AX;
    uint32_t uVar1;
    
    uVar1 = 0;
    while ((*(uVar1 + 0x2958) != *0xfed40f00 || (in_AX = *(uVar1 + 0x295a), in_AX != *0xfed40f02))) {
        uVar1 = uVar1 + 4;
        if (0xb < uVar1) {
            return in_AX & 0xff00;
        }
    }
    return CONCAT11(in_AX >> 8,1);
}


/* fcn.000020ff @ 0x20ff */

uint32_t __fastcall fcn.000020ff(int *param_1)

{
    int iVar1;
    uint32_t uVar2;
    int32_t var_20h;
    int32_t var_1ah;
    int16_t var_14h;
    int32_t var_12h;
    int32_t var_eh;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = 0;
    var_8h = 0;
    iVar1 = (**(*param_1 + 0x20))(param_1,0x28a0,0,0,&var_4h);
    if ((iVar1 < 0) || (iVar1 = (**(*param_1 + 0x20))(param_1,0x2860,0,0,&var_8h), iVar1 < 0)) {
        return 0x8000000e;
    }
    uVar2 = (**var_4h)(var_4h,param_1);
    if (uVar2 < 0) {
        return uVar2;
    }
    var_12h = 0xa000000;
    var_14h = -0x3f00;
    var_eh = 0x53000000;
    (**(var_8h + 8))(var_8h,param_1,10,&var_14h,10,&var_20h);
    uVar2 = (**(var_4h + 4))(var_4h,param_1);
    if (uVar2 < 0) {
        return uVar2;
    }
    return -(var_1ah != 0) & 0x80000007;
}


/* fcn.00002323 @ 0x2323 */

void __cdecl fcn.00002323(int32_t arg_8h)

{
    int iVar1;
    int *in_ECX;
    int32_t *piVar2;
    int32_t var_120h;
    int16_t var_20h;
    int32_t var_1eh;
    int32_t var_1ah;
    int32_t var_16h;
    int32_t var_12h;
    int32_t var_eh;
    int32_t var_8h;
    int32_t var_4h;
    
    var_1eh = 0x16000000;
    var_1ah = 0x65000000;
    var_4h = 0;
    var_8h = 0;
    var_20h = -0x3f00;
    var_16h = 0x4000000;
    var_12h = 0x4000000;
    var_eh = 0x8010000;
    (**(*in_ECX + 0x20))();
    iVar1 = (**var_4h)(var_4h);
    if (iVar1 == 0) {
        (**(*in_ECX + 0x20))();
        (**(var_8h + 8))(var_8h);
        (**(var_4h + 4))(var_4h);
    }
    else {
        fcn.00000120(&var_120h,0x24,0);
    }
    piVar2 = &var_120h;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *arg_8h = *piVar2;
        piVar2 = piVar2 + 1;
        arg_8h = arg_8h + 4;
    }
    return;
}


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 9729 named .text
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


/* fcn.0000220d @ 0x220d */

uint32_t __fastcall fcn.0000220d(int *param_1)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    bool bVar4;
    int32_t var_24h;
    uint32_t var_20h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = 0;
    iVar2 = (**(*param_1 + 0x20))(param_1,0x2920,0,0,&var_8h);
    bVar4 = -1 < iVar2;
    if (bVar4) {
        fcn.00001ef3();
    }
    uVar3 = (**(*param_1 + 0x20))(param_1,0x2870,0,0,&var_4h);
    if (uVar3 < 0) {
        return uVar3;
    }
    if (var_4h == 0) {
        return uVar3;
    }
    uVar3 = (**(var_4h + 4))(param_1,&var_24h);
    if (-1 < uVar3) {
        if (var_20h == '\x01') {
            if (bVar4) {
                iVar2 = fcn.000020ff();
                return -(iVar2 != 0) & 0x80000007;
            }
            uVar3 = fcn.00001f47();
            return uVar3;
        }
        cVar1 = fcn.00001f13();
        if (cVar1 == '\0') {
            if (!bVar4) {
                iVar2 = fcn.00001f47();
                if (iVar2 != 0) {
                    fcn.00001ef3();
                    return 0x80000007;
                }
                fcn.00001ef3();
            }
            iVar2 = fcn.000020ff();
            if (iVar2 == 0) {
                fcn.00001ef3();
                return 0;
            }
        }
        else {
            iVar2 = fcn.00002068();
            if ((iVar2 == 0) && (iVar2 = fcn.000021a1(), iVar2 == 0)) {
                return 0;
            }
        }
        return 0x80000007;
    }
    return uVar3;
}


/* fcn.000023e0 @ 0x23e0 */

uint __cdecl fcn.000023e0(int32_t arg_8h)

{
    int iVar1;
    uint uVar2;
    uint *puStack_64;
    uint uStack_60;
    uchar auStack_5c [4];
    uint uStack_58;
    uint uStack_54;
    uint uStack_50;
    uint uStack_4c;
    uint uStack_48;
    uint uStack_44;
    uint uStack_2c;
    uchar auStack_28 [36];
    
    uStack_58 = 0xa7102b05;
    uStack_54 = 0x4165d9c7;
    uStack_50 = 0xdd2a4081;
    uStack_4c = 0x3cf64ae9;
    uStack_60 = 0;
    puStack_64 = NULL;
    uStack_48 = 0;
    uStack_44 = 8;
    uStack_2c = 0x10;
    iVar1 = (**(*arg_8h + 0x20))(arg_8h,0x28a0,0,0,&uStack_60);
    if ((-1 < iVar1) && (iVar1 = (**(*arg_8h + 0x20))(arg_8h,0x2860,0,0,&puStack_64), -1 < iVar1)) {
        section..text(auStack_28,&uStack_58,0x10);
        uVar2 = (**puStack_64)(puStack_64,arg_8h,auStack_28,uStack_2c,&uStack_48,auStack_5c);
        fcn.00001ef3();
        return uVar2;
    }
    return 0x8000000e;
}


/* fcn.000004b0 @ 0x4b0 */

int __fastcall fcn.000004b0(int *param_1)

{
    int iVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    uint32_t *puVar4;
    uint32_t uVar5;
    uint32_t *puStack_134;
    int iStack_130;
    int iStack_12c;
    int iStack_128;
    uint uStack_124;
    uint uStack_120;
    int *piStack_11c;
    uint32_t auStack_10c [58];
    uchar auStack_24 [32];
    
    uVar3 = 0;
    uStack_120 = 0;
    uStack_124 = 0;
    iStack_128 = 0;
    puStack_134 = NULL;
    piStack_11c = param_1;
    iVar1 = (**(*param_1 + 0x20))(param_1,0x28a0,0,0,&uStack_120);
    if ((-1 < iVar1) && (iVar1 = (**(*param_1 + 0x20))(param_1,0x2860,0,0,&uStack_124), -1 < iVar1)) {
        iStack_12c = fcn.000025af();
        if (iStack_12c == 0) {
            auStack_10c[0] = 0xff252000;
            auStack_10c[1] = 0;
            uVar3 = 1;
            auStack_10c[2] = 0x6de000;
        }
        else {
            iStack_130 = *(iStack_12c + 0x1c);
            puVar4 = auStack_10c + 2;
            do {
                uVar5 = *(iStack_12c + 0x24);
                if (((uVar5 & 0x8000) != 0) || (((uVar5 & 0x83e) != 0 && ((uVar5 & 0x402) != 0x402)))) {
                    uVar3 = uVar3 + 1;
                    puVar4[-2] = *(iStack_12c + 0x10);
                    puVar4[-1] = *(iStack_12c + 0x14);
                    *puVar4 = *(iStack_12c + 0x1c);
                    puVar4 = puVar4 + 6;
                }
                fcn.00000472(iStack_12c);
            } while (iStack_12c != 0);
        }
        iVar1 = (**(*param_1 + 0x34))(param_1,4,(uVar3 + 1) * 0x18,&puStack_134);
        if (iVar1 < 0) {
            return iVar1;
        }
        puStack_134[2] = *0x2900;
        puStack_134[3] = *0x2904;
        puStack_134[4] = *0x2908;
        puStack_134[5] = *0x290c;
        uVar5 = 0;
        iVar1 = (**(*param_1 + 0x20))(param_1,0x2870,0,0,&iStack_128);
        if (-1 < iVar1) {
            iVar1 = (**(iStack_128 + 4))(param_1,auStack_24);
            if (-1 < iVar1) {
                puVar4 = puStack_134;
                if (uVar3 != 0) {
                    do {
                        puVar2 = puVar4 + 6;
                        if (uVar5 == 0) {
                            puVar4[0xb] = auStack_10c[2];
                            puVar4[9] = auStack_10c[0];
                            puVar4[10] = auStack_10c[1];
                            *puVar2 = uVar3;
                        }
                        else {
                            *puVar2 = 0;
                            puVar4[0xb] = auStack_10c[uVar5 * 6 + 2];
                            puVar4[9] = auStack_10c[uVar5 * 6];
                            puVar4[10] = auStack_10c[uVar5 * 6 + 1];
                        }
                        puVar4[7] = 0;
                        uVar5 = uVar5 + 1;
                        puVar4 = puVar2;
                    } while (uVar5 < uVar3);
                }
                iStack_130 = iVar1;
                fcn.000002b8(uStack_120,uStack_124);
            }
            return iVar1;
        }
    }
    return -0x7ffffff2;
}


/* fcn.00000ae8 @ 0xae8 */

uint32_t __fastcall fcn.00000ae8(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00000a10 @ 0xa10 */

int16_t * __fastcall fcn.00000a10(uint param_1,int16_t *param_2)

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


/* fcn.00000a5d @ 0xa5d */

int32_t __fastcall fcn.00000a5d(uint param_1,uint param_2)

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


/* fcn.00000acf @ 0xacf */

uint * __fastcall fcn.00000acf(uint *param_1,uint *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
}


/* fcn.00000120 @ 0x120 */

uchar * fcn.00000120(uchar *param_1,int param_2,uchar param_3)

{
    uchar *puVar1;
    
    puVar1 = param_1;
    for (; param_2 != 0; param_2 = param_2 + -1) {
        *puVar1 = param_3;
        puVar1 = puVar1 + 1;
    }
    return param_1;
}


/* fcn.00000ab9 @ 0xab9 */

int __fastcall fcn.00000ab9(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = section..text(param_1,param_2,param_3);
    return iVar1;
}


/* fcn.00000b25 @ 0xb25 */

void __fastcall fcn.00000b25(uint32_t *param_1,uint32_t *param_2)

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
    fcn.00000120(&uStack_40,0x40,0);
    return;
}


/* fcn.00001f47 @ 0x1f47 */

int __fastcall fcn.00001f47(int *param_1,int param_2)

{
    int iVar1;
    int16_t iVar2;
    uint *puStack_40;
    int iStack_3c;
    int iStack_38;
    uchar auStack_34 [2];
    int iStack_32;
    int iStack_2e;
    ushort uStack_28;
    uint uStack_26;
    uint uStack_22;
    int16_t iStack_1e;
    uchar auStack_1c [4];
    char cStack_18;
    
    puStack_40 = NULL;
    iStack_38 = 0;
    iStack_3c = 0;
    iVar1 = (**(*param_1 + 0x20))(param_1,0x2870,0,0,&iStack_3c);
    if (((-1 < iVar1) && (iStack_3c != 0)) && (iVar1 = (**(iStack_3c + 4))(param_1,auStack_1c), -1 < iVar1)) {
        if (cStack_18 == '\x01') {
            param_2 = 0x20;
        }
        iVar2 = (param_2 == 0x11) + 1;
        if (param_2 == 0x20) {
            iVar2 = 3;
        }
        iVar1 = (**(*param_1 + 0x20))(param_1,0x28a0,0,0,&puStack_40);
        if ((-1 < iVar1) && (iVar1 = (**(*param_1 + 0x20))(param_1,0x2860,0,0,&iStack_38), -1 < iVar1)) {
            iVar1 = (**puStack_40)(puStack_40,param_1);
            if (iVar1 < 0) {
                return iVar1;
            }
            iStack_1e = iVar2 << 8;
            uStack_28 = 0xc100;
            uStack_26 = 0xc000000;
            uStack_22 = 0x99000000;
            (**(iStack_38 + 8))(iStack_38,param_1,0xc,&uStack_28,10,auStack_34);
            if ((iStack_32 != 0) && (iStack_2e == 0)) {
                iVar1 = (*puStack_40[1])(puStack_40,param_1);
                return iVar1;
            }
            return -0x7ffffff9;
        }
        iVar1 = -0x7ffffff2;
    }
    return iVar1;
}


/* fcn.00002068 @ 0x2068 */

uint32_t __fastcall fcn.00002068(int *param_1,int param_2)

{
    int iVar1;
    uint32_t uVar2;
    int16_t iVar3;
    ulong uVar4;
    int16_t var_1ch;
    int32_t var_1ah;
    int32_t var_16h;
    int16_t var_12h;
    int32_t var_10h;
    int32_t var_ah;
    int32_t var_4h;
    
    var_4h = 0;
    iVar3 = (param_2 == 0x11) + 1;
    if (param_2 == 0x20) {
        iVar3 = 3;
    }
    iVar1 = (**(*param_1 + 0x20))(param_1,0x28c0,0,0,&var_4h);
    if (iVar1 < 0) {
        uVar2 = 0x8000000e;
    }
    else {
        var_12h = iVar3 << 8;
        var_1ch = -0x3f00;
        var_1ah = 0xc000000;
        var_16h = -0x66800000;
        (**(var_4h + 0x18))(0xfed40000,&var_1ch,0xc,&var_10h,10);
        if (stack0xffffffee == 0) {
            uVar2 = 0x80000007;
        }
        else {
            uVar4 = fcn.00000b0c();
            uVar2 = uVar4 | uVar4 >> 0x20;
        }
    }
    return uVar2;
}


/* fcn.000021a1 @ 0x21a1 */

uint32_t __fastcall fcn.000021a1(int *param_1)

{
    int iVar1;
    uint32_t uVar2;
    int32_t var_1ch;
    int32_t var_16h;
    int16_t var_10h;
    int32_t var_eh;
    int32_t var_ah;
    int32_t var_4h;
    
    var_4h = 0;
    iVar1 = (**(*param_1 + 0x20))(param_1,0x28c0,0,0,&var_4h);
    if (iVar1 < 0) {
        uVar2 = 0x8000000e;
    }
    else {
        var_eh = 0xa000000;
        var_10h = -0x3f00;
        var_ah = 0x53800000;
        (**(var_4h + 0x18))(0xfed40000,&var_10h,10,&var_1ch,10);
        uVar2 = -(var_16h != 0) & 0x80000007;
    }
    return uVar2;
}


/* fcn.00000a96 @ 0xa96 */

int fcn.00000a96(void)

{
    int iVar1;
    
    iVar1 = fcn.00000a5d();
    if (iVar1 == 0) {
        return 0;
    }
    fcn.00000acf();
    return iVar1 + 0x18;
}


