// decompiled by r2ghidra: 2399_NvmeUnlockPei.te
// functions: 55

/* entry0 @ 0x1c9 */

int entry0(void)

{
    uint uVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    ushort *puVar6;
    ushort uStack_10;
    ushort uStack_e;
    ushort uStack_c;
    ushort *puStack_8;
    int iStack_4;
    
    puStack_8 = &uStack_10;
    iVar4 = 0;
    uVar1 = InterruptDescriptorTableRegister();
    uStack_e = uVar1 >> 0x10;
    piVar2 = *(CONCAT22(uStack_c,uStack_e) + -4);
    iVar3 = (**(*piVar2 + 0x28))(piVar2,&iStack_4);
    if ((-1 < iVar3) && (iStack_4 == 0x11)) {
        uStack_10 = 4;
        uStack_e = 0;
        iVar3 = fcn.0000265e(&uStack_10);
        puStack_8 = 0x4;
        uVar5 = ~-(iVar3 != -0x7ffffffb) & CONCAT22(uStack_e,uStack_10);
        uStack_10 = uVar5;
        uStack_e = uVar5 >> 0x10;
        iVar3 = fcn.0000265e(&puStack_8);
        puVar6 = ~-(iVar3 != -0x7ffffffb) & puStack_8;
        if (puVar6 + uVar5 == 0) {
            iVar3 = 0;
        }
        else {
            puStack_8 = puVar6;
            *0xffd31b50 = fcn.000024a4();
            if (*0xffd31b50 == 0) {
                iVar3 = -0x7ffffff7;
            }
            else {
                iVar3 = 0;
                if ((uVar5 != 0) && (uVar5 != 4)) {
                    iVar3 = fcn.0000265e(&uStack_10);
                    uVar5 = CONCAT22(uStack_e,uStack_10);
                }
                if ((puVar6 != NULL) && (puVar6 != 0x4)) {
                    iVar4 = fcn.0000265e(&puStack_8);
                    puVar6 = puStack_8;
                }
                if ((-1 < iVar3) && (-1 < iVar4)) {
                    *0xffd31b40 = (puVar6 + uVar5) / 0x5f;
                    if (*0xffd31b40 == 0) {
                        return -0x7ffffff2;
                    }
                    fcn.0000250e();
                    fcn.0000250e();
                    fcn.0000250e();
                }
            }
        }
    }
    return iVar3;
}


/* fcn.00002438 @ 0x2438 */

uint __fastcall fcn.00002438(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.000000e0(param_1,param_2);
    return uVar1;
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


/* fcn.000002f6 @ 0x2f6 */

uint __thiscall fcn.000002f6(int param_1,uint8_t param_2,uint param_3,char param_4)

{
    if (0x200 < *(param_1 + 0x10) + 0x15U) {
        return 0x80000005;
    }
    if (param_4 == '\0') {
        param_2 = param_2 & 0x3f;
    }
    *(*(param_1 + 0x34) + 0x38 + param_1) = param_2;
    *(param_1 + 0x34) = *(param_1 + 0x34) + 1;
    *(param_1 + 0x28) = *(param_1 + 0x28) + 1;
    *(param_1 + 0x10) = *(param_1 + 0x10) + 1;
    return 0;
}


/* fcn.0000246d @ 0x246d */

int32_t __fastcall fcn.0000246d(uint param_1)

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


/* fcn.00000329 @ 0x329 */

uint __thiscall fcn.00000329(int param_1,uint8_t *param_2,uint32_t param_3,uint param_4,char param_5)

{
    int iVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint uVar5;
    uint8_t *puVar6;
    uint32_t uVar7;
    
    uVar2 = param_3;
    param_3 = 1;
    iVar1 = *(param_1 + 0x34);
    uVar4 = uVar2;
    if (uVar2 == 1) {
        if ((*param_2 < 0x40) && (param_5 == '\0')) {
            uVar5 = fcn.000002f6(*param_2,param_1,1);
            return uVar5;
        }
    }
    else if (0xf < uVar2) {
        uVar3 = uVar2 >> 8;
        if (uVar2 < 0x800) {
            if (0x200 < *(param_1 + 0x10) + 0x16 + uVar2) {
                return 0x80000005;
            }
            *(param_1 + 0x39 + iVar1) = uVar4;
            param_3 = 2;
            *(param_1 + 0x38 + iVar1) = (uVar3 & 7) + (param_5 + '\f') * '\x10';
        }
        else {
            if (0xffffff < uVar2) {
                return 0x80000002;
            }
            if (0x200 < *(param_1 + 0x10) + 0x18 + uVar2) {
                return 0x80000005;
            }
            *(param_1 + 0x3b + iVar1) = uVar4;
            *(param_1 + 0x38 + iVar1) = param_5 * '\x02' + -0x20;
            *(param_1 + 0x39 + iVar1) = uVar2 >> 0x10;
            param_3 = 4;
            *(param_1 + 0x3a + iVar1) = uVar3;
        }
        goto code_r0x00000416;
    }
    if (0x200 < *(param_1 + 0x10) + 0x15 + uVar2) {
        return 0x80000005;
    }
    *(param_1 + 0x38 + iVar1) = (param_5 + '\x04') * ' ' + (uVar4 & 0xf);
code_r0x00000416:
    uVar7 = 0;
    if (uVar2 != 0) {
        puVar6 = param_2 + (uVar2 - 1);
        do {
            if (param_5 == '\0') {
                uVar4 = *puVar6;
            }
            else {
                uVar4 = param_2[uVar7];
            }
            *(uVar7 + 0x38 + iVar1 + param_3 + param_1) = uVar4;
            uVar7 = uVar7 + 1;
            puVar6 = puVar6 + -1;
        } while (uVar7 < uVar2);
    }
    *(param_1 + 0x34) = *(param_1 + 0x34) + param_3 + uVar2;
    *(param_1 + 0x28) = *(param_1 + 0x28) + param_3 + uVar2;
    *(param_1 + 0x10) = *(param_1 + 0x10) + param_3 + uVar2;
    return 0;
}


/* fcn.000001ce @ 0x1ce */

int __fastcall fcn.000001ce(uint32_t param_1)

{
    return ((param_1 & 0xff00) + param_1 * 0x10000) * 0x100 + (param_1 >> 8 & 0xff00) + (param_1 >> 0x18);
}


/* fcn.00000a70 @ 0xa70 */

uint __fastcall fcn.00000a70(int param_1,int param_2,uint16_t param_3)

{
    fcn.000000e0(param_1,0x15);
    *(param_1 + 4) = (param_2 << 8) + (param_2 >> 8 & 0xff);
    *(param_1 + 6) = param_3 * 0x100 + (param_3 >> 8);
    return 0;
}


/* fcn.000004ab @ 0x4ab */

uint __fastcall fcn.000004ab(int param_1)

{
    uint uVar1;
    
    fcn.000000e0(param_1 + 0x14,0x19);
    uVar1 = fcn.000001ce();
    *(param_1 + 0x14) = uVar1;
    uVar1 = fcn.000001ce();
    *(param_1 + 0x18) = uVar1;
    uVar1 = fcn.000001ce();
    *(param_1 + 0x1c) = uVar1;
    *(param_1 + 0x10) = 0x18;
    return 0;
}


/* fcn.000004e9 @ 0x4e9 */

void __fastcall fcn.000004e9(int param_1)

{
    fcn.000000e0(param_1 + 0x2c,0xd);
    *(param_1 + 0x32) = 0;
    *(param_1 + 0x28) = *(param_1 + 0x28) + 0xc;
    *(param_1 + 0x10) = *(param_1 + 0x10) + 0xc;
    return;
}


/* fcn.0000046c @ 0x46c */

uint fcn.0000046c(int param_1,uint32_t param_2)

{
    int iVar1;
    uchar *extraout_ECX;
    uchar *puVar2;
    uint32_t uVar3;
    
    iVar1 = fcn.0000246d();
    uVar3 = 0;
    puVar2 = extraout_ECX;
    if (param_2 != 0) {
        puVar2 = param_1 + -1 + param_2;
        do {
            *(uVar3 + iVar1) = *puVar2;
            uVar3 = uVar3 + 1;
            puVar2 = puVar2 + -1;
        } while (uVar3 < param_2);
    }
    fcn.00000329(iVar1,param_2,puVar2,1);
    return 0;
}


/* fcn.00000f9b @ 0xf9b */

uint __fastcall fcn.00000f9b(int param_1)

{
    uint8_t uVar1;
    int iVar2;
    uint8_t uVar3;
    int iVar4;
    uint32_t uVar5;
    
    iVar4 = *(param_1 + 0x34);
    *(iVar4 + 0x38 + param_1) = 0xf0;
    *(iVar4 + 0x3c + param_1) = 0xf1;
    *(param_1 + 0x34) = *(param_1 + 0x34) + 5;
    *(param_1 + 0x28) = *(param_1 + 0x28) + 5;
    *(param_1 + 0x10) = *(param_1 + 0x10) + 5;
    uVar3 = *(param_1 + 0x34) & 3;
    uVar1 = 0;
    if (uVar3 != 0) {
        uVar1 = 4 - uVar3;
    }
    if (uVar1 != 0) {
        iVar4 = 0;
        uVar5 = uVar1;
        do {
            iVar2 = *(param_1 + 0x34) + iVar4;
            iVar4 = iVar4 + 1;
            *(iVar2 + 0x38 + param_1) = 0;
            uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
    }
    *(param_1 + 0x28) = *(param_1 + 0x28) + uVar1;
    *(param_1 + 0x10) = *(param_1 + 0x10) + uVar1;
    return 0;
}


/* fcn.00000100 @ 0x100 */

int fcn.00000100(char *param_1,char *param_2,int param_3)

{
    char cVar1;
    char cVar2;
    char *pcVar3;
    char *pcVar4;
    
    do {
        pcVar3 = param_1;
        pcVar4 = param_2;
        if (param_3 == 0) break;
        param_3 = param_3 + -1;
        pcVar4 = param_2 + 1;
        pcVar3 = param_1 + 1;
        cVar2 = *param_2;
        cVar1 = *param_1;
        param_1 = pcVar3;
        param_2 = pcVar4;
    } while (cVar1 == cVar2);
    return pcVar3[-1] - pcVar4[-1];
}


/* fcn.000001f2 @ 0x1f2 */

uint __fastcall fcn.000001f2(uint8_t *param_1,uint8_t *param_2,uint32_t *param_3,uint32_t *param_4,uint8_t *param_5)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint uVar4;
    uint8_t *puVar5;
    uint32_t uVar6;
    
    uVar4 = 0;
    *param_4 = 0;
    uVar1 = *param_1;
    uVar6 = uVar1;
    *param_5 = 0;
    if (uVar1 < '\0') {
        if ((uVar1 & 0xc0) == 0x80) {
            *param_5 = 1;
            *param_4 = uVar1 & 0xf;
            if ((uVar1 & 0x20) == 0) {
                uVar6 = CONCAT11(1,uVar1);
            }
        }
        if ((uVar6 & 0xe0) == 0xc0) {
            uVar1 = param_1[1];
            *param_5 = 2;
            *param_4 = (uVar6 & 7) * 0x100 + uVar1;
            if ((uVar6 & 0x10) == 0) {
                uVar6 = CONCAT11(1,uVar6);
            }
        }
        if ((uVar6 & 0xfffffffc) == -0x20) {
            uVar1 = param_1[2];
            *param_5 = 4;
            *param_4 = CONCAT21(CONCAT11(param_1[1],uVar1),param_1[3]);
        }
        uVar2 = *param_4;
        if (uVar2 == 0) {
            return 0x80000007;
        }
        if (param_2 != NULL) {
            if (uVar2 <= *param_3) {
                fcn.00002438();
                uVar2 = *param_4;
                if (uVar2 != 0) {
                    puVar5 = param_2 + (uVar2 - 1);
                    uVar1 = *param_5;
                    uVar3 = 0;
                    do {
                        if ((uVar6 & 0xfffffffc) >> 8 == '\0') {
                            param_2[uVar3] = param_1[uVar3 + uVar1];
                        }
                        else {
                            *puVar5 = param_1[uVar3 + uVar1];
                        }
                        uVar3 = uVar3 + 1;
                        puVar5 = puVar5 + -1;
                    } while (uVar3 < uVar2);
                }
                goto code_r0x000002ef;
            }
            uVar4 = 0x80000005;
        }
        *param_3 = uVar2;
    }
    else {
        *param_4 = 1;
        if (*param_3 == 0) {
            *param_3 = 1;
            return 0x80000005;
        }
        *param_2 = uVar1 & 0x3f;
code_r0x000002ef:
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.00000c86 @ 0xc86 */

void __cdecl fcn.00000c86(uint noname_0,int32_t arg_ch,int8_t arg_10h)

{
    ushort uVar1;
    ushort in_DX;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    int32_t var_44h;
    int32_t var_40h;
    int8_t var_3ch;
    int8_t var_3bh;
    int32_t var_34h;
    int32_t var_20h;
    int8_t var_1ch;
    int8_t var_1bh;
    int8_t var_1ah;
    int8_t var_19h;
    int8_t var_14h;
    int32_t var_ch;
    int var_8h;
    
    var_8h._0_2_ = in_DX;
    fcn.000000e0(&var_20h,0x14);
    fcn.000000e0(&var_34h,0x14);
    fcn.000000e0(&var_5ch,0x28);
    uVar1 = var_8h;
    var_14h = 1;
    var_1ch = 0;
    var_ch = 3;
    var_20h._2_1_ = (arg_10h != 0) * '\x02' + '\\';
    var_19h = -(*0xffd31b58 != -1) & *0xffd31b58 << 4;
    var_8h = 0;
    var_1ah = uVar1;
    var_1bh = uVar1 >> 8;
    var_58h = &var_20h;
    var_5ch = &var_34h;
    var_50h = 0;
    var_54h = 30000000;
    if (arg_ch == 0) {
        var_20h._2_1_ = '[';
        var_3ch = 2;
    }
    else {
        var_3bh = -0x80;
        if (arg_10h == 0) {
            var_3ch = 4;
            var_4ch = arg_ch;
            var_44h = 0x200;
        }
        else {
            var_3ch = 5;
            var_48h = arg_ch;
            var_40h = 0x200;
        }
    }
    (**(*0xffd31b44 + 0xc))(*0xffd31b44,*0xffd31b5a,*0xffd31b58,&var_5ch);
    return;
}


/* fcn.00000ba2 @ 0xba2 */

uint __cdecl fcn.00000ba2(uint noname_0,int32_t arg_ch,uint32_t arg_10h)

{
    uint32_t uVar1;
    uint8_t in_CL;
    uint16_t in_DX;
    uint uVar2;
    int32_t var_70h;
    int8_t var_6ch;
    int32_t var_68h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int8_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_1ch;
    int32_t var_ch;
    int var_8h;
    
    uVar2 = 0x80000002;
    fcn.000000e0(&var_44h,0x28);
    fcn.000000e0(&var_1ch,0x10);
    fcn.000000e0(&var_70h,0x2c);
    if (arg_10h == '\0') {
        uVar1 = var_70h & 0xffffff82U | 0x82;
    }
    else {
        uVar1 = var_70h & 0xffffff81U | 0x81;
    }
    var_70h = uVar1 & 0xfffffcff;
    var_58h = 0x200;
    var_5ch = (in_CL * 0x100 + (in_DX & 0xff)) * 0x10000 + (in_DX & 0xff00);
    var_6ch = 0xc;
    var_68h = 0;
    var_2ch = 0;
    var_ch = 1;
    var_8h = 0;
    var_40h = 0;
    var_44h = 10000000;
    var_24h = &var_1ch;
    var_28h = &var_70h;
    var_3ch = arg_ch;
    var_38h = 0x200;
    if (*0xffd31b48 != 0) {
        uVar2 = (**(*0xffd31b48 + 0x14))(*0xffd31b48,*0xffd31a54,&var_44h);
    }
    return uVar2;
}


/* fcn.0000277c @ 0x277c */

void __fastcall fcn.0000277c(uint32_t param_1)

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


/* fcn.00000b40 @ 0xb40 */

uint __thiscall fcn.00000b40(int param_1,char *param_2)

{
    char cVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    
    uVar2 = fcn.000001ce();
    if (*(param_1 + 0x38) == -6) {
        return 0;
    }
    if (uVar2 != 0) {
        uVar3 = 1;
        if (1 < uVar2) {
            do {
                if (*((uVar2 - uVar3) + 0x38 + param_1) != -1) break;
                uVar3 = uVar3 + 1;
            } while (uVar3 < uVar2);
        }
        iVar4 = uVar2 - uVar3;
        if (((*(iVar4 + 0x34 + param_1) == -0x10) && (*(iVar4 + 0x38 + param_1) == -0xf)) &&
           (cVar1 = *(iVar4 + 0x35 + param_1), *param_2 = cVar1, cVar1 == '\0')) {
            return 0;
        }
    }
    return 0x80000007;
}


/* fcn.00000aa9 @ 0xaa9 */

uint __fastcall fcn.00000aa9(int param_1,int param_2,uint param_3,int param_4)

{
    uint8_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint uVar4;
    uint8_t uVar5;
    int iVar6;
    
    uVar2 = *(param_1 + 0x78);
    fcn.00000a70(uVar2);
    fcn.000004ab(*(param_4 + 0x14),*(param_4 + 0x18));
    fcn.000004e9();
    fcn.000002f6(0xfa,uVar2,1);
    uVar5 = *(param_2 + 0x34) & 3;
    uVar1 = 0;
    if (uVar5 != 0) {
        uVar1 = 4 - uVar5;
    }
    if (uVar1 != 0) {
        iVar6 = 0;
        uVar2 = uVar1;
        do {
            iVar3 = *(param_2 + 0x34) + iVar6;
            iVar6 = iVar6 + 1;
            *(iVar3 + 0x38 + param_2) = 0;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    *(param_2 + 0x28) = *(param_2 + 0x28) + uVar1;
    *(param_2 + 0x10) = *(param_2 + 0x10) + uVar1;
    uVar4 = fcn.000001ce();
    *(param_2 + 0x34) = uVar4;
    uVar4 = fcn.000001ce();
    *(param_2 + 0x28) = uVar4;
    uVar4 = fcn.000001ce();
    *(param_2 + 0x10) = uVar4;
    return 0;
}


/* fcn.00000f26 @ 0xf26 */

void __thiscall fcn.00000f26(uint param_1,uint param_2,int32_t param_3)

{
    if (*0xffd31b4c == '\0') {
        fcn.00000ba2(param_1,param_3,1);
    }
    else {
        fcn.00000c86(param_1,param_3,1);
    }
    return;
}


/* fcn.00000d86 @ 0xd86 */

int __fastcall fcn.00000d86(uint param_1,int param_2,uint param_3,int param_4)

{
    int iVar1;
    uint noname_0;
    int iVar2;
    uchar uStack_29;
    uint uStack_28;
    uint uStack_24;
    uint uStack_20;
    uint uStack_1c;
    uint uStack_18;
    uint uStack_14;
    uint uStack_10;
    uint uStack_c;
    
    uStack_29 = 0xff;
    iVar2 = 10;
    do {
        fcn.00002438();
        if (*0xffd31b4c == '\0') {
            iVar1 = fcn.00000ba2(noname_0,param_2,0);
        }
        else {
            iVar1 = fcn.00000c86(noname_0,param_2,0);
        }
        if (iVar1 < 0) {
            return iVar1;
        }
        uStack_28 = 0;
        uStack_24 = 0xff000000;
        uStack_20 = 0;
        uStack_1c = 0x6ff0000;
        if ((param_2 + 0x3a == &uStack_28) || (iVar1 = fcn.00000100(param_2 + 0x3a,&uStack_28,8), iVar1 == 0)) {
            if ((param_2 + 0x43 == &uStack_20) || (iVar1 = fcn.00000100(param_2 + 0x43,&uStack_20,8), iVar1 == 0)) {
                *(param_4 + 0x14) = 0;
                return -0x7ffffff9;
            }
        }
        if ((*(param_2 + 8) == 0) && (*(param_2 + 0x10) != 0)) break;
        uStack_18 = 100000;
        uStack_14 = 0;
        uStack_c = 0x53;
        uStack_10 = 0x57c035a0;
        fcn.0000277c();
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = fcn.00000b40(&uStack_29);
    return iVar2;
}


/* fcn.00000ff1 @ 0xff1 */

uint __fastcall fcn.00000ff1(int param_1,int param_2,int param_3)

{
    uint32_t uVar1;
    uint uVar2;
    uint extraout_ECX;
    uint extraout_ECX_00;
    uint extraout_ECX_01;
    uint extraout_ECX_02;
    uint extraout_ECX_03;
    uint extraout_ECX_04;
    uint extraout_ECX_05;
    uint extraout_ECX_06;
    int extraout_ECX_07;
    int iVar3;
    uint extraout_ECX_08;
    uint extraout_ECX_09;
    uint extraout_ECX_10;
    uint extraout_ECX_11;
    uint extraout_ECX_12;
    uint extraout_ECX_13;
    uint extraout_ECX_14;
    uint extraout_ECX_15;
    uint in_stack_00000014;
    uint in_stack_00000018;
    uint in_stack_0000001c;
    char in_stack_0000002c;
    char in_stack_00000030;
    uint uVar4;
    uint uStack_8;
    uint uStack_4;
    
    uStack_8 = 0x6000000;
    uStack_4 = 0x17000000;
    iVar3 = param_1;
    if (in_stack_0000002c == '\0') goto code_r0x0000110c;
    uVar1 = *(param_1 + 0x78);
    fcn.00000a70(uVar1);
    fcn.000004ab(*(param_2 + 0x14),*(param_2 + 0x18));
    fcn.000004e9();
    if (*(param_1 + 0x3a) == 0x100) {
        uStack_8 = 0x6000000;
        uStack_4 = 0x7000000;
    }
    fcn.000002f6(0xf8,uVar1,1);
    fcn.00000329(&stack0x0000000c,8,extraout_ECX,1);
    fcn.00000329(&uStack_8,8,extraout_ECX_00,1);
    fcn.000002f6(0xf0,extraout_ECX_01,1);
    uVar2 = extraout_ECX_02;
    if (*(param_1 + 0x3a) == 0x100) {
        fcn.000002f6(0xf0,extraout_ECX_02,1);
        fcn.000002f6(0xf1,extraout_ECX_03,1);
        uVar2 = extraout_ECX_04;
        if (*(param_1 + 0x3a) != 0x100) goto code_r0x000010d8;
        uVar4 = 0xf0;
    }
    else {
code_r0x000010d8:
        fcn.000002f6(0xf2,uVar2,1);
        uVar4 = 1;
        uVar2 = extraout_ECX_05;
    }
    fcn.000002f6(uVar4,uVar2,1);
    fcn.000002f6(0xf0,extraout_ECX_06,1);
    iVar3 = extraout_ECX_07;
code_r0x0000110c:
    fcn.000002f6(0xf2,iVar3,1);
    if (*(param_1 + 0x3a) == 0x100) {
        uVar2 = fcn.000023ed();
        fcn.00000329(in_stack_00000018,uVar2);
        uVar2 = extraout_ECX_09;
    }
    else {
        fcn.000002f6(in_stack_00000014,extraout_ECX_08,1);
        uVar2 = extraout_ECX_10;
    }
    fcn.00000329(in_stack_0000001c,1,uVar2,0);
    fcn.000002f6(0xf3,extraout_ECX_11,1);
    if (in_stack_00000030 != '\0') {
        fcn.000002f6(0xf1,extraout_ECX_12,1);
        if (*(param_1 + 0x3a) == 0x100) {
            uVar2 = 0xf1;
        }
        else {
            uVar2 = 0xf3;
        }
        fcn.000002f6(uVar2,extraout_ECX_13,1);
        fcn.000002f6(0xf1,extraout_ECX_14,1);
        fcn.000002f6(0xf9,extraout_ECX_15,1);
        fcn.00000f9b();
        uVar2 = fcn.000001ce();
        *(param_3 + 0x34) = uVar2;
        uVar2 = fcn.000001ce();
        *(param_3 + 0x28) = uVar2;
        uVar2 = fcn.000001ce();
        *(param_3 + 0x10) = uVar2;
    }
    return 0;
}


/* fcn.000023ed @ 0x23ed */

int __fastcall fcn.000023ed(char *param_1)

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


/* fcn.0000050b @ 0x50b */

uint __fastcall fcn.0000050b(int param_1,int param_2,uint param_3,int param_4)

{
    char *pcVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    uint extraout_ECX;
    uint extraout_ECX_00;
    uint extraout_ECX_01;
    uint extraout_ECX_02;
    uint extraout_ECX_03;
    uint extraout_ECX_04;
    uint extraout_ECX_05;
    uint extraout_ECX_06;
    uint extraout_ECX_07;
    uint extraout_ECX_08;
    uint extraout_ECX_09;
    uint extraout_ECX_10;
    uint extraout_ECX_11;
    uint extraout_ECX_12;
    uint extraout_ECX_13;
    uint extraout_ECX_14;
    uint extraout_ECX_15;
    uint extraout_ECX_16;
    uint extraout_ECX_17;
    uint extraout_ECX_18;
    uint extraout_ECX_19;
    uint extraout_ECX_20;
    uint extraout_ECX_21;
    uint extraout_ECX_22;
    uint extraout_ECX_23;
    uint extraout_ECX_24;
    uint extraout_ECX_25;
    uint extraout_ECX_26;
    uint extraout_ECX_27;
    uint extraout_ECX_28;
    uint extraout_ECX_29;
    uint extraout_ECX_30;
    uint extraout_ECX_31;
    uint extraout_ECX_32;
    uint extraout_ECX_33;
    uint extraout_ECX_34;
    uint extraout_ECX_35;
    uint extraout_ECX_36;
    uint extraout_ECX_37;
    uint extraout_ECX_38;
    uint extraout_ECX_39;
    uint extraout_ECX_40;
    uint extraout_ECX_41;
    uint extraout_ECX_42;
    uint extraout_ECX_43;
    uint extraout_ECX_44;
    uint extraout_ECX_45;
    
    uVar2 = *(param_1 + 0x78);
    fcn.00000a70(uVar2);
    fcn.000004ab(*(param_4 + 0x14),*(param_4 + 0x18));
    fcn.000004e9();
    fcn.000002f6(0xf8,uVar2,1);
    fcn.00000329(param_4,8,extraout_ECX,1);
    fcn.00000329(param_4 + 8,8,extraout_ECX_00,1);
    fcn.000002f6(0xf0,extraout_ECX_01,1);
    fcn.000002f6(*(param_4 + 0x10),extraout_ECX_02,0);
    fcn.00000329(param_4 + 0x1c,8,extraout_ECX_03,1);
    fcn.000002f6(*(param_4 + 0x24),extraout_ECX_04,0);
    uVar5 = extraout_ECX_05;
    if (*(param_4 + 0x29) != 0) {
        fcn.000002f6(0xf2,extraout_ECX_05,1);
        if (*(param_1 + 0x3a) == 0x100) {
            iVar4 = 0;
            do {
                iVar3 = iVar4 + 1;
                pcVar1 = iVar4 + -0x2ce53b;
                iVar4 = iVar3;
            } while (*pcVar1 != '\0');
            fcn.00000329(0xffd31ac4,iVar3,extraout_ECX_06,1);
            uVar5 = extraout_ECX_07;
        }
        else {
            fcn.000002f6(0,extraout_ECX_06,0);
            uVar5 = extraout_ECX_08;
        }
        fcn.0000046c(*(param_4 + 0x29),*(param_4 + 0x25),uVar5,uVar5);
        fcn.000002f6(0xf3,extraout_ECX_09,1);
        uVar5 = extraout_ECX_10;
    }
    if (*(param_4 + 0x2d) != 0 || *(param_4 + 0x31) != 0) {
        fcn.000002f6(0xf2,uVar5,1);
        fcn.000002f6(1,extraout_ECX_11,0);
        fcn.00000329(param_4 + 0x2d,8,extraout_ECX_12,1);
        fcn.000002f6(0xf3,extraout_ECX_13,1);
        uVar5 = extraout_ECX_14;
    }
    if (*(param_4 + 0x39) != 0) {
        fcn.000002f6(0xf2,uVar5,1);
        fcn.000002f6(2,extraout_ECX_15,0);
        fcn.00000329(*(param_4 + 0x39),*(param_4 + 0x35),extraout_ECX_16,1);
        fcn.000002f6(0xf3,extraout_ECX_17,1);
        uVar5 = extraout_ECX_18;
    }
    if (*(param_4 + 0x3d) != 0 || *(param_4 + 0x41) != 0) {
        fcn.000002f6(0xf2,uVar5,1);
        if (*(param_1 + 0x3a) == 0x100) {
            iVar4 = 0;
            do {
                iVar3 = iVar4 + 1;
                pcVar1 = iVar4 + -0x2ce52b;
                iVar4 = iVar3;
            } while (*pcVar1 != '\0');
            fcn.00000329(0xffd31ad4,iVar3,extraout_ECX_19,1);
            uVar5 = extraout_ECX_20;
        }
        else {
            fcn.000002f6(3,extraout_ECX_19,0);
            uVar5 = extraout_ECX_21;
        }
        fcn.00000329(param_4 + 0x3d,8,uVar5,1);
        fcn.000002f6(0xf3,extraout_ECX_22,1);
        uVar5 = extraout_ECX_23;
    }
    if (*(param_4 + 0x49) != 0) {
        fcn.000002f6(0xf2,uVar5,1);
        fcn.000002f6(4,extraout_ECX_24,0);
        fcn.00000329(*(param_4 + 0x49),*(param_4 + 0x45),extraout_ECX_25,1);
        fcn.000002f6(0xf3,extraout_ECX_26,1);
        uVar5 = extraout_ECX_27;
    }
    if (*(param_4 + 0x4d) != 0) {
        fcn.000002f6(0xf2,uVar5,1);
        if (*(param_1 + 0x3a) == 0x100) {
            iVar4 = 0;
            do {
                iVar3 = iVar4 + 1;
                pcVar1 = iVar4 + -0x2ce513;
                iVar4 = iVar3;
            } while (*pcVar1 != '\0');
            fcn.00000329(0xffd31aec,iVar3,extraout_ECX_28,1);
            uVar5 = extraout_ECX_29;
        }
        else {
            fcn.000002f6(5,extraout_ECX_28,0);
            uVar5 = extraout_ECX_30;
        }
        fcn.00000329(*(param_4 + 0x4d),8,uVar5,0);
        fcn.000002f6(0xf3,extraout_ECX_31,1);
        uVar5 = extraout_ECX_32;
    }
    if (*(param_4 + 0x51) != 0) {
        fcn.000002f6(0xf2,uVar5,1);
        fcn.000002f6(6,extraout_ECX_33,0);
        fcn.00000329(*(param_4 + 0x51),8,extraout_ECX_34,0);
        fcn.000002f6(0xf3,extraout_ECX_35,1);
        uVar5 = extraout_ECX_36;
    }
    if (*(param_4 + 0x55) != 0) {
        fcn.000002f6(0xf2,uVar5,1);
        fcn.000002f6(7,extraout_ECX_37,0);
        fcn.00000329(*(param_4 + 0x55),8,extraout_ECX_38,0);
        fcn.000002f6(0xf3,extraout_ECX_39,1);
        uVar5 = extraout_ECX_40;
    }
    if (*(param_4 + 0x5d) != 0) {
        fcn.000002f6(0xf2,uVar5,1);
        fcn.000002f6(8,extraout_ECX_41,0);
        fcn.00000329(*(param_4 + 0x5d),*(param_4 + 0x59),extraout_ECX_42,1);
        fcn.000002f6(0xf3,extraout_ECX_43,1);
        uVar5 = extraout_ECX_44;
    }
    fcn.000002f6(0xf1,uVar5,1);
    fcn.000002f6(0xf9,extraout_ECX_45,1);
    fcn.00000f9b();
    uVar5 = fcn.000001ce();
    *(param_2 + 0x34) = uVar5;
    uVar5 = fcn.000001ce();
    *(param_2 + 0x28) = uVar5;
    uVar5 = fcn.000001ce();
    *(param_2 + 0x10) = uVar5;
    return 0;
}


/* fcn.000008fe @ 0x8fe */

int __thiscall fcn.000008fe(int param_1,int param_2)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    char *pcVar4;
    uint32_t uVar5;
    int iVar6;
    uchar uStack_19;
    uint32_t auStack_18 [6];
    
    auStack_18[0] = fcn.000001ce();
    auStack_18[3] = 0xff000000;
    uVar5 = 0;
    auStack_18[5] = 0x3ff0000;
    uVar1 = 1;
    auStack_18[2] = 0;
    auStack_18[4] = 0;
    uStack_19 = 0;
    auStack_18[1] = 0x100;
    if (1 < auStack_18[0]) {
        pcVar4 = param_1 + 0x37 + auStack_18[0];
        do {
            if (*pcVar4 != -1) break;
            uVar1 = uVar1 + 1;
            pcVar4 = pcVar4 + -1;
        } while (uVar1 < auStack_18[0]);
    }
    iVar6 = auStack_18[0] - uVar1;
    iVar2 = fcn.0000246d();
    if ((param_1 + 0x3a == auStack_18 + 2) || (iVar3 = fcn.00000100(param_1 + 0x3a,auStack_18 + 2,8), iVar3 == 0)) {
        if (((param_1 + 0x43 == auStack_18 + 4) ||
            (iVar3 = fcn.00000100(param_1 + 0x43,auStack_18 + 4,8), iVar3 == 0)) &&
           ((((*(iVar6 + 0x34 + param_1) == -0x10 && (*(iVar6 + 0x38 + param_1) == -0xf)) &&
             (*(iVar6 + 0x35 + param_1) == '\0')) &&
            (((*(iVar6 + 0x36 + param_1) == '\0' && (*(iVar6 + 0x37 + param_1) == '\0')) && (*(param_1 + 0x4b) == -0x10)
             ))))) {
            iVar6 = fcn.000001f2(auStack_18 + 1,auStack_18,&uStack_19);
            if (iVar6 < 0) {
                return iVar6;
            }
            uVar1 = 0;
            *(param_2 + 0x18) = 0;
            if (auStack_18[0] != 0) {
                do {
                    if (3 < uVar1) break;
                    *(param_2 + 0x18 + uVar1) = *(uVar1 + iVar2);
                    uVar1 = uVar1 + 1;
                } while (uVar1 < auStack_18[0]);
            }
            iVar6 = fcn.000001f2(auStack_18 + 1,auStack_18,&uStack_19);
            if (iVar6 < 0) {
                return iVar6;
            }
            *(param_2 + 0x14) = 0;
            if (auStack_18[0] != 0) {
                do {
                    if (3 < uVar5) {
                        return 0;
                    }
                    *(param_2 + 0x14 + uVar5) = *(uVar5 + iVar2);
                    uVar5 = uVar5 + 1;
                } while (uVar5 < auStack_18[0]);
            }
            return 0;
        }
    }
    return -0x7ffffff9;
}


/* fcn.00001267 @ 0x1267 */

uint __fastcall fcn.00001267(int param_1,int param_2,int param_3)

{
    char *pcVar1;
    uint32_t uVar2;
    uint uVar3;
    uint extraout_ECX;
    uint extraout_ECX_00;
    uint extraout_ECX_01;
    uint extraout_ECX_02;
    uint extraout_ECX_03;
    uint extraout_ECX_04;
    uint extraout_ECX_05;
    uint extraout_ECX_06;
    uint extraout_ECX_07;
    uint extraout_ECX_08;
    uint extraout_ECX_09;
    int iVar5;
    int iVar4;
    uint in_stack_00000024;
    uchar in_stack_00000028;
    uint uStack_8;
    uint uStack_4;
    
    uStack_4 = 0x1000000;
    uStack_8 = 0;
    uVar2 = *(param_1 + 0x78);
    fcn.00000a70(uVar2);
    fcn.000004ab(*(param_2 + 0x14),*(param_2 + 0x18));
    fcn.000004e9();
    fcn.000002f6(0xf8,uVar2,1);
    fcn.00000329(&uStack_8,8,extraout_ECX,1);
    fcn.00000329(&stack0x00000014,8,extraout_ECX_00,1);
    fcn.000002f6(0xf0,extraout_ECX_01,1);
    fcn.00000329(&stack0x0000001c,8,extraout_ECX_02,1);
    fcn.000002f6(0xf2,extraout_ECX_03,1);
    iVar5 = 0;
    if (*(param_1 + 0x3a) == 0x100) {
        do {
            iVar4 = iVar5 + 1;
            pcVar1 = iVar5 + -0x2ce53b;
            iVar5 = iVar4;
        } while (*pcVar1 != '\0');
        fcn.00000329(0xffd31ac4,iVar4,extraout_ECX_04,1);
        uVar3 = extraout_ECX_05;
    }
    else {
        fcn.000002f6(0,extraout_ECX_04,0);
        uVar3 = extraout_ECX_06;
    }
    fcn.0000046c(in_stack_00000024,in_stack_00000028,uVar3,uVar3);
    fcn.000002f6(0xf3,extraout_ECX_07,1);
    fcn.000002f6(0xf1,extraout_ECX_08,1);
    fcn.000002f6(0xf9,extraout_ECX_09,1);
    fcn.00000f9b();
    uVar3 = fcn.000001ce();
    *(param_3 + 0x34) = uVar3;
    uVar3 = fcn.000001ce();
    *(param_3 + 0x28) = uVar3;
    uVar3 = fcn.000001ce();
    *(param_3 + 0x10) = uVar3;
    return 0;
}


/* fcn.000011ef @ 0x11ef */

void __fastcall fcn.000011ef(int param_1,uint param_2,uint param_3)

{
    uint16_t uVar1;
    int iVar2;
    uint extraout_ECX;
    uint extraout_ECX_00;
    uint uVar3;
    
    fcn.00002438();
    uVar1 = *(param_1 + 0x3e);
    uVar3 = param_2;
    iVar2 = fcn.0000050b(extraout_ECX,param_2);
    if (-1 < iVar2) {
        iVar2 = fcn.00000f26(uVar1 * 0x100 + (uVar1 >> 8),param_3,uVar3);
        if (-1 < iVar2) {
            fcn.00002438();
            iVar2 = fcn.00000d86(extraout_ECX_00,param_2);
            if (-1 < iVar2) {
                fcn.000008fe(param_2);
            }
        }
    }
    return;
}


/* fcn.000013bb @ 0x13bb */

void __cdecl
fcn.000013bb(int32_t arg_8h,uint noname_1,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h,int32_t arg_1ch)

{
    uint16_t uVar1;
    int iVar2;
    int in_ECX;
    uint extraout_ECX;
    
    uVar1 = *(in_ECX + 0x3e);
    iVar2 = fcn.00001267(arg_8h);
    if (-1 < iVar2) {
        fcn.00000f26(uVar1 * 0x100 + (uVar1 >> 8),arg_8h,extraout_ECX);
    }
    return;
}


/* fcn.00000ea5 @ 0xea5 */

int __fastcall fcn.00000ea5(int param_1,int param_2,uint param_3)

{
    uint16_t uVar1;
    int iVar2;
    int iVar3;
    uint extraout_ECX;
    uint extraout_ECX_00;
    
    if (*(param_2 + 0x14) != 0) {
        fcn.00002438();
        uVar1 = *(param_1 + 0x3e);
        iVar3 = param_2;
        iVar2 = fcn.00000aa9(extraout_ECX,param_2);
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar3 = fcn.00000f26(uVar1 * 0x100 + (uVar1 >> 8),param_3,iVar3);
        if (iVar3 < 0) {
            return iVar3;
        }
        fcn.00002438();
        iVar3 = fcn.00000d86(extraout_ECX_00,param_2);
        if (iVar3 < 0) {
            return iVar3;
        }
    }
    fcn.000000e0(param_2,0x61);
    return 0;
}


/* fcn.000024a4 @ 0x24a4 */

int __fastcall fcn.000024a4(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.0000246d();
    if (iVar1 == 0) {
        return 0;
    }
    if (param_1 == 0) {
        return iVar1;
    }
    iVar1 = fcn.000000e0(iVar1,param_1);
    return iVar1;
}


/* fcn.0000141d @ 0x141d */

int __fastcall fcn.0000141d(uint param_1,uint *param_2,int32_t param_3)

{
    int iVar1;
    uint noname_1;
    uint *extraout_ECX;
    uint extraout_ECX_00;
    uint *puVar2;
    int32_t in_stack_00000014;
    int32_t in_stack_00000018;
    int in_stack_0000001c;
    int32_t in_stack_00000020;
    
    fcn.00002438();
    fcn.000000e0(param_2,0x61);
    *param_2 = 0;
    param_2[2] = 0;
    param_2[1] = 0xff000000;
    param_2[3] = 0x2ff0000;
    param_2[4] = 1;
    param_2[7] = 0x5020000;
    param_2[8] = 0x1000100;
    *(param_2 + 9) = 1;
    iVar1 = fcn.000011ef(param_3);
    if (iVar1 < 0) {
        return iVar1;
    }
    fcn.00002438();
    if (in_stack_0000001c == 0) {
code_r0x000014e5:
        iVar1 = 0;
    }
    else {
        iVar1 = fcn.000013bb(param_3,noname_1,in_stack_00000014,in_stack_00000018,in_stack_0000001c,
                             in_stack_00000020);
        puVar2 = extraout_ECX;
        if (-1 < iVar1) {
            fcn.00002438();
            puVar2 = param_2;
            iVar1 = fcn.00000d86(extraout_ECX_00,param_2);
            if (-1 < iVar1) goto code_r0x000014e5;
        }
        fcn.00000ea5(param_3,puVar2);
    }
    return iVar1;
}


/* fcn.00000f4c @ 0xf4c */

void __cdecl
fcn.00000f4c(int32_t arg_8h,uint noname_1,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h,int32_t arg_1ch,
            int32_t arg_20h)

{
    uint16_t uVar1;
    int iVar2;
    int in_ECX;
    uint extraout_ECX;
    
    uVar1 = *(in_ECX + 0x3e);
    iVar2 = fcn.00000ff1(arg_8h);
    if (-1 < iVar2) {
        fcn.00000f26(uVar1 * 0x100 + (uVar1 >> 8),arg_8h,extraout_ECX);
    }
    return;
}


/* fcn.000019ba @ 0x19ba */

uint fcn.000019ba(void)

{
    uint uVar1;
    int32_t var_6ch;
    int8_t var_68h;
    int32_t var_64h;
    int32_t var_58h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int8_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_18h;
    int32_t var_8h;
    int var_4h;
    
    uVar1 = 0x80000003;
    fcn.000000e0(&var_40h,0x28);
    fcn.000000e0(&var_18h,0x10);
    fcn.000000e0(&var_6ch,0x2c);
    var_68h = var_68h | 4;
    var_6ch = var_6ch & 0xfffffc06U | 6;
    var_58h = 1;
    var_64h = 0;
    var_28h = 0;
    var_8h = 1;
    var_4h = 0;
    var_3ch = 0;
    var_40h = 10000000;
    var_20h = &var_18h;
    var_24h = &var_6ch;
    var_34h = 0x1000;
    if (*0xffd31b48 != 0) {
        uVar1 = (**(*0xffd31b48 + 0x14))(*0xffd31b48,*0xffd31a54,&var_40h);
    }
    return uVar1;
}


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 10202 named .text
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


/* fcn.000014ed @ 0x14ed */

int __fastcall fcn.000014ed(int param_1)

{
    uint16_t uVar1;
    int arg_ch;
    int iVar2;
    int iVar3;
    uint16_t uVar4;
    uint noname_0;
    uint16_t *puVar5;
    
    arg_ch = fcn.000024a4();
    if (*0xffd31b4c == '\0') {
        iVar2 = fcn.00000ba2(noname_0,arg_ch,0);
    }
    else {
        iVar2 = fcn.00000c86(noname_0,arg_ch,0);
    }
    if (-1 < iVar2) {
        iVar3 = fcn.000001ce();
        puVar5 = arg_ch + 0x30;
        do {
            uVar1 = *puVar5;
            uVar4 = uVar1 * 0x100 + (uVar1 >> 8);
            if (uVar4 == 2) {
                *(param_1 + 0x15) = puVar5[2];
            }
            else if ((uVar4 == 0x100) || (uVar4 == 0x203)) {
code_r0x000015b4:
                *(param_1 + 0x3a) = uVar4;
                *(param_1 + 0x3e) = puVar5[2] * 0x100 + (puVar5[2] >> 8);
                *(param_1 + 0x40) = puVar5[3] * 0x100 + (puVar5[3] >> 8);
            }
            else if (0x300 < uVar4) {
                if (uVar4 < 0x305) goto code_r0x000015b4;
                if (uVar4 == 0x402) {
                    *(param_1 + 0x4e) = uVar1 * 0x100 + (uVar1 >> 8);
                    *(param_1 + 0x52) = *(param_1 + 0x52) ^ (*(param_1 + 0x52) ^ puVar5[2]) & 1;
                    *(param_1 + 0x52) = *(param_1 + 0x52) ^ (puVar5[2] ^ *(param_1 + 0x52)) & 2;
                    *(param_1 + 0x53) = *(param_1 + 0x53) ^ (*(puVar5 + 5) ^ *(param_1 + 0x53)) & 1;
                }
            }
            puVar5 = puVar5 + *(puVar5 + 3) + 4;
        } while (puVar5 < iVar3 + 4 + arg_ch);
    }
    return iVar2;
}


/* fcn.00001651 @ 0x1651 */

//WARNING: Removing unreachable block (ram,0x00001785)
//WARNING: Variable defined which should be unmapped: var_1h

void __cdecl fcn.00001651(int32_t arg_8h)

{
    int32_t iVar1;
    int32_t arg_8h_00;
    int iVar2;
    int32_t arg_14h;
    uint extraout_ECX;
    uint uVar3;
    uint extraout_ECX_00;
    int32_t *extraout_ECX_01;
    int32_t *extraout_ECX_02;
    int32_t *extraout_ECX_03;
    int32_t *extraout_ECX_04;
    uint extraout_ECX_05;
    uint noname_1;
    int32_t *extraout_ECX_06;
    int32_t *piVar4;
    uint extraout_ECX_07;
    char in_DL;
    ulong uVar5;
    int32_t var_94h;
    uint uStack_94;
    uint uStack_90;
    int32_t var_88h;
    int32_t var_84h;
    int32_t var_80h;
    int32_t var_7ch;
    int32_t var_78h;
    int32_t var_6ch;
    int32_t var_68h;
    int8_t var_64h;
    int32_t var_63h;
    int32_t var_5fh;
    int32_t var_4bh;
    int32_t var_47h;
    int32_t var_20h;
    uint uStack_20;
    ushort uStack_1c;
    uchar uStack_1a;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    uint32_t var_1h;
    
    var_8h = 0x1000000;
    var_20h = *0xffd31afc;
    uStack_20 = *0xffd31b00;
    uStack_1c = *0xffd31b04;
    uStack_1a = *0xffd31b06;
    var_94h = *0xffd31b08;
    uStack_94 = *0xffd31b0c;
    uStack_90 = *0xffd31b10;
    var_1h._0_1_ = in_DL;
    arg_8h_00 = fcn.000024a4();
    fcn.000000e0(&var_88h,0x61);
    iVar1 = arg_8h;
    var_14h = *(arg_8h + 0x3e);
    if (*(arg_8h + 0x3a) == 0x100) {
        arg_8h = 0x1800000;
        if (var_1h != '\x01') {
            arg_8h = 0x2800000;
        }
        fcn.000023ed();
        iVar2 = fcn.0000141d(arg_8h_00);
        if (iVar2 < 0) {
            return;
        }
        arg_14h = 0x1000000;
        if (var_1h != '\x01') {
            arg_14h = 0x2000000;
        }
        var_8h = arg_14h;
    }
    else {
        var_88h = 0;
        var_80h = 0;
        var_84h = -0x1000000;
        var_7ch = 0x2ff0000;
        var_78h = 1;
        var_6ch = 0x5020000;
        var_68h = 0x2000000;
        uVar5 = fcn.000023ed();
        var_5fh = uVar5 >> 0x20;
        var_63h = uVar5;
        if (var_1h == '\0') {
            var_ch = 0;
            var_10h = 1;
            uVar3 = 0x38;
            var_47h = 0x1000300;
        }
        else {
            var_47h = 0x1000100;
            uVar3 = extraout_ECX;
        }
        var_4bh = 0x9000000;
        var_64h = 1;
        iVar2 = fcn.000011ef(arg_8h_00,uVar3);
        if (iVar2 < 0) {
            return;
        }
        arg_14h = 0x1000000;
    }
    if (*(iVar1 + 0x3a) == 0x100) {
        fcn.00002438();
        arg_8h = arg_8h & 0xffffff;
        iVar2 = fcn.00000ff1(arg_8h_00,extraout_ECX_00,0x2080000,var_8h,7,&var_20h,&arg_8h + 3);
        piVar4 = extraout_ECX_01;
        if ((iVar2 < 0) ||
           (iVar2 = fcn.00000ff1(arg_8h_00,extraout_ECX_01,0x2080000,var_8h,8,&var_94h,&arg_8h + 3),
           piVar4 = extraout_ECX_02, iVar2 < 0)) goto code_r0x000018e2;
        iVar2 = fcn.00000f26(var_14h,arg_8h_00,extraout_ECX_02);
        piVar4 = extraout_ECX_03;
    }
    else {
        arg_8h = arg_8h & 0xffffff;
        iVar2 = fcn.00000f4c(arg_8h_00,&var_20h,0x2080000,arg_14h,7,&var_20h,&arg_8h + 3);
        piVar4 = extraout_ECX_04;
        if (iVar2 < 0) goto code_r0x000018e2;
        fcn.00002438();
        fcn.00000d86(extraout_ECX_05,&var_88h);
        arg_8h = arg_8h & 0xffffff;
        iVar2 = fcn.00000f4c(arg_8h_00,noname_1,0x2080000,var_8h,8,&var_94h,&arg_8h + 3);
        piVar4 = extraout_ECX_06;
    }
    if (-1 < iVar2) {
        fcn.00002438();
        piVar4 = &var_88h;
        fcn.00000d86(extraout_ECX_07,piVar4);
    }
code_r0x000018e2:
    fcn.00000ea5(arg_8h_00,piVar4);
    return;
}


/* fcn.00001601 @ 0x1601 */

void fcn.00001601(void)

{
    uint noname_0;
    int32_t var_200h;
    
    noname_0 = 0x200;
    fcn.000000e0(&var_200h);
    var_200h._0_1_ = 1;
    if (*0xffd31b4c == '\0') {
        fcn.00000ba2(noname_0,&var_200h,1);
    }
    else {
        fcn.00000c86(noname_0,&var_200h,1);
    }
    return;
}


/* fcn.00000120 @ 0x120 */

uint fcn.00000120(int *param_1,uint32_t param_2)

{
    uint32_t uVar1;
    int *piVar2;
    bool bVar3;
    
    uVar1 = param_2 >> 2;
    param_2 = param_2 & 3;
    bVar3 = true;
    do {
        piVar2 = param_1;
        if (uVar1 == 0) break;
        uVar1 = uVar1 - 1;
        piVar2 = param_1 + 1;
        bVar3 = *param_1 == 0;
        param_1 = piVar2;
    } while (bVar3);
    if (bVar3) {
        bVar3 = true;
        do {
            if (param_2 == 0) break;
            param_2 = param_2 - 1;
            bVar3 = *piVar2 == '\0';
            piVar2 = piVar2 + 1;
        } while (bVar3);
        if (bVar3) {
            return 1;
        }
    }
    return 0;
}


/* fcn.000018fa @ 0x18fa */

uint __cdecl fcn.000018fa(int32_t arg_8h,int32_t arg_ch)

{
    uint16_t in_DX;
    uint uVar1;
    int32_t var_70h;
    int8_t var_6ch;
    int32_t var_68h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int8_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_1ch;
    int32_t var_ch;
    int var_8h;
    
    uVar1 = 0x80000002;
    fcn.000000e0(&var_44h,0x28);
    fcn.000000e0(&var_1ch,0x10);
    fcn.000000e0(&var_70h,0x2c);
    var_6ch = 0xc;
    var_ch = 1;
    var_70h = var_70h & 0xfffffc81U | 0x81;
    var_5ch = (in_DX | 0xffef0000) << 8;
    var_58h = arg_8h;
    var_68h = 0;
    var_2ch = 0;
    var_8h = 0;
    var_40h = 0;
    var_44h = 10000000;
    var_24h = &var_1ch;
    var_28h = &var_70h;
    var_3ch = arg_ch;
    var_38h = arg_8h;
    if (*0xffd31b48 != 0) {
        uVar1 = (**(*0xffd31b48 + 0x14))(*0xffd31b48,*0xffd31a54,&var_44h);
    }
    return uVar1;
}


/* fcn.00001c9d @ 0x1c9d */

void __cdecl fcn.00001c9d(int32_t arg_8h,int32_t arg_ch,int8_t arg_10h,uint32_t arg_14h)

{
    int16_t iVar1;
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    int32_t var_44h;
    int8_t var_40h;
    int8_t var_3fh;
    int32_t var_38h;
    int32_t var_24h;
    int8_t var_1dh;
    int32_t var_10h;
    int var_ch;
    int16_t var_8h;
    ushort uStack_a;
    int16_t var_4h;
    ushort uStack_6;
    
    iVar1 = *0xffd31b58;
    _var_8h = CONCAT22(uStack_a,*0xffd31b5a);
    _var_4h = CONCAT22(uStack_6,*0xffd31b58);
    fcn.000000e0(&var_24h,0x14);
    fcn.000000e0(&var_38h,0x14);
    fcn.000000e0(&var_60h,0x28);
    var_24h._2_1_ = arg_10h;
    var_10h = 3;
    var_ch = 0;
    var_1dh = -(iVar1 != -1) & iVar1 << 4;
    var_5ch = &var_24h;
    var_60h = &var_38h;
    var_54h = 0;
    var_58h = 30000000;
    if (arg_8h == 0) {
        var_40h = 2;
    }
    else {
        var_3fh = -0x80;
        if (arg_14h == '\0') {
            var_50h = arg_8h;
            var_40h = 4;
            var_48h = arg_ch;
        }
        else {
            var_4ch = arg_8h;
            var_40h = 5;
            var_44h = arg_ch;
        }
    }
    (**(*0xffd31b44 + 0xc))(*0xffd31b44,_var_8h,_var_4h,&var_60h);
    return;
}


/* fcn.0000265e @ 0x265e */

uint32_t __fastcall fcn.0000265e(uchar *param_1,int param_2,uint *param_3)

{
    int iVar1;
    uint32_t uVar2;
    uint uStack_58;
    uint *puStack_54;
    uint uStack_50;
    uint uStack_4c;
    uchar auStack_48 [16];
    uchar auStack_38 [8];
    uint uStack_30;
    uint uStack_2c;
    uint32_t uStack_28;
    uint uStack_24;
    uchar auStack_20 [16];
    int iStack_10;
    uint uStack_c;
    uint uStack_8;
    uint uStack_4;
    
    if (param_1 == NULL) {
        return 0x80000002;
    }
    if (param_2 == 0) {
        if (param_3 != NULL) {
            return 0x80000002;
        }
    }
    else if (param_3 == NULL) {
        return 0x80000002;
    }
    iVar1 = fcn.000024e1(param_1,&puStack_54);
    if (iVar1 < 0) {
        uVar2 = fcn.00002587(param_3);
        return uVar2;
    }
    section..text(auStack_48,0xffd31a34,0x10);
    uStack_4c = 0;
    uStack_50 = 0x30;
    section..text(auStack_38,&uStack_50,8);
    uStack_28 = 0xffffffff;
    uStack_24 = 0xffffffff;
    uStack_30 = 3;
    uStack_2c = 0x30;
    if (auStack_20 != param_1) {
        section..text(auStack_20,param_1,0x10);
    }
    uStack_c = 0;
    uStack_4 = 0;
    if (param_3 == NULL) {
        uStack_8 = 0;
    }
    else {
        uStack_8 = *param_3;
    }
    uStack_58 = 0x48;
    iStack_10 = param_2;
    iVar1 = (**puStack_54)(puStack_54,auStack_48,&uStack_58);
    if (iVar1 == -0x7fffffed) {
        uStack_28 = fcn.00002587(param_3);
        if (param_3 == NULL) goto code_r0x00002769;
        uStack_8 = *param_3;
    }
    if (param_3 != NULL) {
        *param_3 = uStack_8;
    }
code_r0x00002769:
    if (uStack_28 == 0) {
        return 0;
    }
    return uStack_28 | 0x80000000;
}


/* fcn.0000250e @ 0x250e */

void __fastcall fcn.0000250e(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x24))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.00002146 @ 0x2146 */

int __fastcall fcn.00002146(char *param_1)

{
    uint32_t uVar1;
    int iVar2;
    
    iVar2 = 0;
    if (param_1 == NULL) {
        return 0;
    }
    while( true ) {
        if ((*param_1 == '\x7f') && (param_1[1] == -1)) {
            return iVar2 + 4;
        }
        uVar1 = *(param_1 + 2);
        if ((*param_1 == '\0') || (uVar1 == 0)) break;
        iVar2 = iVar2 + uVar1;
        param_1 = param_1 + uVar1;
    }
    return iVar2;
}


/* fcn.00002422 @ 0x2422 */

int __fastcall fcn.00002422(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = section..text(param_1,param_2,param_3);
    return iVar1;
}


/* fcn.000027c5 @ 0x27c5 */

uint fcn.000027c5(uint32_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    
    uVar1 = fcn.000023fb(0,param_2 & 1);
    return *((uVar1 | param_1) + 0xc0000000);
}


/* fcn.000023fb @ 0x23fb */

ulong __cdecl fcn.000023fb(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_4h;
    
    return CONCAT44(arg_ch >> 4,arg_8h >> 4 | arg_ch << 0x1c);
}


/* fcn.000024bc @ 0x24bc */

void __fastcall fcn.000024bc(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.000024e1 @ 0x24e1 */

void __cdecl fcn.000024e1(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00002336 @ 0x2336 */

int fcn.00002336(void)

{
    int iVar1;
    uint *puVar2;
    uint *puVar3;
    uint auStack_8 [2];
    
    iVar1 = (**(*0xffd31b54 + 4))(*0xffd31b54,CONCAT12(*0xffd31b16,*0xffd31b14),0,auStack_8);
    if (-1 < iVar1) {
        puVar2 = fcn.0000246d();
        puVar3 = fcn.0000246d();
        if ((puVar2 == NULL) || (puVar3 == NULL)) {
            iVar1 = -0x7ffffff7;
        }
        else {
            *puVar2 = 0xffd31374;
            puVar2[1] = 0xffd312ea;
            *puVar3 = 0x80000010;
            puVar3[1] = 0xffd31a90;
            puVar3[2] = puVar2;
            iVar1 = fcn.000024bc();
        }
    }
    return iVar1;
}


/* fcn.0000282d @ 0x282d */

int fcn.0000282d(void)

{
    char cVar1;
    int iVar2;
    
    fcn.000027e1();
    do {
        iVar2 = fcn.0000280c();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00002449();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.00002449 @ 0x2449 */

uint32_t __fastcall fcn.00002449(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00002533 @ 0x2533 */

uint fcn.00002533(void)

{
    uint32_t uVar1;
    char cVar2;
    int iVar3;
    uint32_t uVar4;
    
    iVar3 = fcn.0000282d();
    uVar4 = 0;
    iVar3 = *(*(iVar3 + 0x20) + 0x5a);
    uVar1 = *(iVar3 + 0x98);
    iVar3 = *(iVar3 + 0xa0);
    if (uVar1 != 0) {
        do {
            cVar2 = fcn.00002449();
            if (cVar2 != '\0') {
                return *(uVar4 * 0x18 + 0x10 + iVar3);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
    }
    return 0;
}


/* fcn.00002587 @ 0x2587 */

uint __cdecl fcn.00002587(int32_t arg_8h)

{
    uint *puVar1;
    uint *puVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    char cVar5;
    int iVar6;
    int iVar7;
    uint uVar8;
    uint in_ECX;
    int in_EDX;
    uint *puVar9;
    uint *apuStack_18 [2];
    int iStack_e;
    
    iVar6 = fcn.000024e1(in_ECX,apuStack_18);
    if (-1 < iVar6) {
        iVar6 = 0;
        do {
            InterruptDescriptorTableRegister();
            iVar7 = (**apuStack_18[0])(*(iStack_e + -4),apuStack_18[0],iVar6);
            iVar6 = iVar6 + 1;
        } while (-1 < iVar7);
    }
    iVar6 = fcn.00002533();
    puVar1 = *(iVar6 + 8);
    for (puVar2 = *puVar1; puVar2 != puVar1; puVar2 = *puVar2) {
        puVar9 = puVar2 + -0xe;
        cVar5 = fcn.00002449();
        if (cVar5 != '\0') goto code_r0x00002607;
    }
    puVar9 = NULL;
code_r0x00002607:
    if (puVar9 == NULL) {
        uVar8 = 0x8000000e;
    }
    else if ((in_EDX == 0) && ((puVar9[10] & 1) == 0)) {
        uVar8 = 0x80000008;
    }
    else if ((arg_8h == 0) || (uVar3 = puVar9[8], uVar4 = *arg_8h, *arg_8h = uVar3, uVar3 <= uVar4)) {
        if (puVar9[8] != 0) {
            fcn.00002422(puVar9[8]);
        }
        uVar8 = 0;
    }
    else {
        uVar8 = 0x80000005;
    }
    return uVar8;
}


/* fcn.000027e1 @ 0x27e1 */

int32_t fcn.000027e1(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.0000280c @ 0x280c */

int16_t * __fastcall fcn.0000280c(uint param_1,int16_t *param_2)

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


