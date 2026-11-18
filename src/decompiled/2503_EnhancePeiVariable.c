// decompiled by r2ghidra: 2503_EnhancePeiVariable.te
// functions: 58

/* entry0 @ 0x190 */

int __cdecl entry0(int32_t arg_8h)

{
    int iVar1;
    uint noname_0;
    int aiStack_c [2];
    
    fcn.00001483();
    iVar1 = fcn.000010c8(noname_0,aiStack_c);
    if (-1 < iVar1) {
        iVar1 = 0;
        if (*(aiStack_c[0] + 8) == 0) {
            fcn.0000036d();
        }
        else {
            fcn.0000058c();
        }
    }
    return iVar1;
}


/* fcn.00001483 @ 0x1483 */

//WARNING: Removing unreachable block (ram,0x000015f0)

uint fcn.00001483(void)

{
    uint8_t uVar1;
    int iVar2;
    uint32_t *puVar3;
    int iVar4;
    uint32_t uVar5;
    bool bVar6;
    int iStack_50c;
    uint32_t uStack_504;
    int iStack_500;
    uint32_t uStack_4fc;
    uint32_t uStack_4f8;
    uint32_t uStack_4f4;
    uint32_t uStack_4f0;
    uchar auStack_4c8 [88];
    uint32_t auStack_470 [152];
    uint32_t auStack_210 [131];
    
    uVar5 = 0;
    uStack_4fc = 0;
    iVar4 = 0;
    uStack_504 = 0;
    iStack_500 = 0;
    fcn.00001983();
    fcn.00000130(auStack_4c8,0x260);
    fcn.0000190c();
    iStack_50c = -0x1000000;
    uStack_4f4 = 0x80000;
    uStack_4f8 = 5;
    iVar2 = fcn.00001874();
    if (iVar2 != 0) {
        puVar3 = auStack_210 + 2;
        do {
            if ((*puVar3 & 0x800) != 0) {
                uVar5 = uVar5 + 1;
            }
            puVar3 = puVar3 + 4;
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        uStack_4fc = uVar5;
    }
    iVar2 = 0;
    uStack_4f0 = 0;
    bVar6 = uStack_4fc == 0;
    do {
        if (bVar6) {
            auStack_470[uStack_4f0 * 4 + 1] = 0;
            auStack_470[uStack_4f0 * 4] = uStack_4f8;
            bVar6 = CARRY4(uStack_504,uStack_4f4);
            uStack_504 = uStack_504 + uStack_4f4;
            auStack_470[uStack_4f0 * 4 + 2] = 0x800;
            iStack_500 = iStack_500 + bVar6;
            auStack_470[uStack_4f0 * 4 + 3] = 0;
            if ((uStack_4f0 != 0) && (iStack_50c != iVar4)) {
            }
            break;
        }
        uVar5 = *(auStack_210 + iVar2);
        if (iStack_50c == 0) {
            uStack_4f4 = 1;
            uVar1 = *(auStack_210 + iVar2);
            *(auStack_470 + iVar2 + 4) = 0;
            *(auStack_470 + iVar2 + 8) = 0x800;
            *(auStack_470 + iVar2 + 0xc) = 0;
            uVar5 = uStack_4f8;
            iStack_50c = 0;
            uStack_4f8 = uVar1;
        }
        else {
            *(auStack_470 + iVar2 + 4) = *(auStack_210 + iVar2 + 4);
            *(auStack_470 + iVar2 + 8) = *(auStack_210 + iVar2 + 8);
            *(auStack_470 + iVar2 + 0xc) = *(auStack_210 + iVar2 + 0xc);
        }
        *(auStack_470 + iVar2) = uVar5;
        bVar6 = 0xfffffffe < uStack_504;
        uStack_504 = uStack_504 + 1;
        iStack_500 = iStack_500 + bVar6;
        iVar4 = 1;
        uStack_4f0 = uStack_4f0 + 1;
        iVar2 = iVar2 + 0x10;
        bVar6 = uStack_4f0 == uStack_4fc;
    } while (uStack_4f0 <= uStack_4fc);
    fcn.0000132d();
    fcn.000012ee();
    if (CONCAT44(iStack_500,uStack_504) == -0x40000) {
        fcn.000013ec();
    }
    return 0;
}


/* fcn.000010c8 @ 0x10c8 */

void __cdecl fcn.000010c8(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4),0xffd5df84,0,0,arg_ch);
    return;
}


/* fcn.0000058c @ 0x58c */

int __fastcall fcn.0000058c(uint param_1)

{
    int32_t *piVar1;
    int32_t *piVar2;
    uint uVar3;
    int *piVar4;
    int iVar5;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_10h;
    int32_t var_ch;
    ushort uStack_c;
    int32_t var_4h;
    
    iVar5 = fcn.000010c8(param_1,&var_4h);
    if (-1 < iVar5) {
        iVar5 = fcn.00000cc1(&var_ch);
        if (-1 < iVar5) {
            if (CONCAT22(var_ch._2_2_,var_ch) != 0) {
                fcn.000000f0(&var_38h,0x28,0);
                var_38h = var_10h;
                fcn.00000ae2();
                piVar1 = var_4h + 0x38;
                if (var_4h + 0x60 != piVar1) {
                    section..text(var_4h + 0x60,piVar1,0x28);
                }
                piVar2 = var_4h + 0x10;
                if (piVar1 != piVar2) {
                    section..text(piVar1,piVar2,0x28);
                }
                if (piVar2 != &var_38h) {
                    section..text(piVar2,&var_38h,0x28);
                }
                if (*(var_4h + 8) < 3) {
                    *(var_4h + 8) = *(var_4h + 8) + 1;
                }
                var_10h = &var_ch;
                uVar3 = InterruptDescriptorTableRegister();
                var_ch._2_2_ = uVar3 >> 0x10;
                piVar4 = *(CONCAT22(uStack_c,var_ch._2_2_) + -4);
                (**(*piVar4 + 0x24))(piVar4,0xffd5e000);
            }
            iVar5 = 0;
        }
    }
    return iVar5;
}


/* fcn.0000036d @ 0x36d */

int __fastcall fcn.0000036d(uint param_1)

{
    int *piVar1;
    unkuint3 Var2;
    int iVar3;
    uchar *puVar4;
    uint extraout_ECX;
    uint uVar5;
    ushort uStack_40;
    ushort uStack_3e;
    ushort uStack_3c;
    uint *puStack_38;
    uint ***pppuStack_34;
    ushort *puStack_30;
    ushort *puStack_2c;
    int iStack_28;
    
    iVar3 = fcn.000010c8(param_1,&puStack_38);
    if (iVar3 < 0) {
        return iVar3;
    }
    if (puStack_38[2] == 0) {
        puStack_30 = &uStack_40;
        uVar5 = InterruptDescriptorTableRegister();
        uStack_3e = uVar5 >> 0x10;
        iVar3 = (**(**(CONCAT22(uStack_3c,uStack_3e) + -4) + 0x74))(param_1);
        if (iVar3 == -0x7fffffec) {
            fcn.00000260();
        }
        else {
            iVar3 = fcn.000002a3();
            puStack_2c = puStack_30;
            if (iVar3 < 0) {
                return iVar3;
            }
            uVar5 = 0;
            Var2 = *(puStack_30 + 10);
            fcn.00001a5a(&puStack_2c,0x28,0);
            puStack_2c = puStack_2c + 0xc;
            iStack_28 = Var2 - 0x18;
            fcn.00000ae2();
            pppuStack_34 = &pppuStack_34;
            puStack_30 = NULL;
            uStack_40 = 0;
            uStack_3e = 0;
            iVar3 = fcn.00000b34(&puStack_30,&uStack_40,&pppuStack_34,uVar5,&puStack_2c);
            if ((iVar3 < 0) && (iVar3 != -0x7ffffffb)) {
                return iVar3;
            }
            puVar4 = fcn.00001207();
            if (puVar4 == NULL) {
                return -0x7ffffffb;
            }
            iVar3 = fcn.00000b34(&puStack_30,&uStack_40,puVar4 + 0x2d,extraout_ECX,&puStack_2c);
            if (iVar3 < 0) {
                return iVar3;
            }
            fcn.000000f0(&puStack_2c,0x28,0);
            iStack_28 = CONCAT22(uStack_3e,uStack_40);
            puStack_2c = puVar4 + 0x2d;
            fcn.00000ae2();
            *puVar4 = 1;
            *(puVar4 + 0x29) = *puStack_38;
            if (puVar4 + 1 != &puStack_2c) {
                section..text(puVar4 + 1,&puStack_2c,0x28);
            }
            *puStack_38 = 0xffd5c5ad;
            puStack_30 = &uStack_40;
            *puVar4 = 2;
            uVar5 = InterruptDescriptorTableRegister();
            uStack_3e = uVar5 >> 0x10;
            uStack_40 = uVar5;
            piVar1 = *(CONCAT22(uStack_3c,uStack_3e) + -4);
            (**(*piVar1 + 0x24))(piVar1,0xffd5dfe4);
        }
    }
    return 0;
}


/* fcn.00001194 @ 0x1194 */

int fcn.00001194(void)

{
    char cVar1;
    int iVar2;
    
    fcn.00001148();
    do {
        iVar2 = fcn.00001173();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.0000125a();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.00000ae2 @ 0xae2 */

void __fastcall fcn.00000ae2(int *param_1)

{
    int iVar1;
    char cVar2;
    int iVar3;
    
    iVar1 = *param_1;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[6] = 0;
    *(param_1 + 7) = 1;
    param_1[4] = iVar1;
    param_1[2] = param_1[1] + iVar1 + -0x10;
    param_1[5] = 0;
    param_1[3] = param_1[1] + iVar1;
    iVar3 = fcn.00000871();
    if (iVar1 != iVar3) {
        if (iVar3 == 0) {
            cVar2 = fcn.00000776();
            if (cVar2 == '\0') {
                param_1[3] = iVar1;
            }
        }
        else {
            param_1[4] = iVar3;
        }
    }
    return;
}


/* fcn.00000b34 @ 0xb34 */

int __fastcall
fcn.00000b34(int param_1,int param_2,int32_t param_3,int *param_4,uint32_t param_5,uint param_6,int32_t param_7)

{
    int iVar1;
    
    if ((((param_1 == 0) || (param_2 == 0)) || (param_4 == NULL)) || ((param_5 == 0 && (*param_4 != 0)))) {
        iVar1 = -0x7ffffffe;
    }
    else {
        iVar1 = fcn.00000a91(param_3,param_4,param_5,param_7);
        if (iVar1 == -0x7ffffff2) {
            iVar1 = -0x7ffffff2;
        }
    }
    return iVar1;
}


/* fcn.0000125a @ 0x125a */

uint32_t __fastcall fcn.0000125a(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00000260 @ 0x260 */

int __fastcall fcn.00000260(int32_t param_1)

{
    int iVar1;
    int32_t var_4h;
    
    var_4h = param_1;
    iVar1 = fcn.000010c8(param_1,&var_4h);
    if (-1 < iVar1) {
        iVar1 = fcn.00001194(param_1);
        if (iVar1 == 0) {
            iVar1 = -0x7ffffff2;
        }
        else {
            *(iVar1 + 0x41) = *var_4h;
            *var_4h = 0xffd5c5ad;
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.000002a3 @ 0x2a3 */

uint __fastcall fcn.000002a3(uint *param_1)

{
    uint uVar1;
    char cVar2;
    int iVar3;
    uint extraout_ECX;
    int iVar4;
    int32_t var_58h;
    int32_t var_44h;
    int32_t var_28h;
    int32_t var_20h;
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_ch = &var_18h;
    iVar4 = 0;
    do {
        uVar1 = InterruptDescriptorTableRegister();
        *var_ch = uVar1;
        iVar3 = (**(**(stack0xffffffe6 + -4) + 0x38))(*(stack0xffffffe6 + -4),iVar4,&var_4h);
        if (iVar3 < 0) {
            return 0x8000000e;
        }
        if (*0xffd5e260 == '\x01') {
            var_10h = &var_20h;
            InterruptDescriptorTableRegister();
            iVar3 = (**(**(stack0xffffffde + -4) + 0x70))(var_4h,&var_58h);
            if ((-1 < iVar3) && (cVar2 = fcn.0000125a(), cVar2 != '\0')) goto code_r0x0000031c;
        }
        else {
code_r0x0000031c:
            var_8h = 0;
            var_10h = &var_28h;
            InterruptDescriptorTableRegister();
            iVar3 = (**(**(stack0xffffffd6 + -4) + 0x68))(0xffd5dfa4,var_4h,&var_8h);
            if ((-1 < iVar3) && (cVar2 = fcn.0000125a(), cVar2 == '\x01')) {
                *param_1 = extraout_ECX;
                return 0;
            }
        }
        iVar4 = iVar4 + 1;
    } while( true );
}


/* fcn.00001a5a @ 0x1a5a */

uint * fcn.00001a5a(uint *param_1,uint32_t param_2,uchar param_3)

{
    uint32_t uVar1;
    int iVar2;
    uint *puVar3;
    
    puVar3 = param_1;
    if (3 < param_2) {
        if ((param_1 & 3) != 0) {
            iVar2 = 4 - (param_1 & 3);
            param_2 = param_2 - iVar2;
            for (; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar3 = param_3;
                puVar3 = puVar3 + 1;
            }
        }
        for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = CONCAT22(CONCAT11(param_3,param_3),CONCAT11(param_3,param_3));
            puVar3 = puVar3 + 1;
        }
        param_2 = param_2 & 3;
    }
    for (; param_2 != 0; param_2 = param_2 - 1) {
        *puVar3 = param_3;
        puVar3 = puVar3 + 1;
    }
    return param_1;
}


/* fcn.00001207 @ 0x1207 */

int fcn.00001207(void)

{
    int iVar1;
    
    iVar1 = fcn.000011ce();
    if (iVar1 != 0) {
        fcn.00001241();
        iVar1 = iVar1 + 0x18;
    }
    return iVar1;
}


/* fcn.000011ce @ 0x11ce */

int32_t __fastcall fcn.000011ce(uint param_1,uint param_2)

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


/* fcn.00001241 @ 0x1241 */

uint * __fastcall fcn.00001241(uint *param_1,uint *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
}


/* fcn.000000f0 @ 0xf0 */

uchar * fcn.000000f0(uchar *param_1,int param_2,uchar param_3)

{
    uchar *puVar1;
    
    puVar1 = param_1;
    for (; param_2 != 0; param_2 = param_2 + -1) {
        *puVar1 = param_3;
        puVar1 = puVar1 + 1;
    }
    return param_1;
}


/* section..text @ 0xb0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 6926 named .text
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


/* fcn.00000f71 @ 0xf71 */

void __fastcall fcn.00000f71(int *param_1,int param_2)

{
    char cVar1;
    uint32_t uVar2;
    uint16_t *puVar3;
    uint8_t *puVar4;
    uint16_t auStack_44 [2];
    uint16_t auStack_40 [32];
    
    if (*(param_2 + 0x8c) != -1) {
        while ((param_1 != NULL && (*param_1 == 0x5241564e))) {
            puVar4 = param_1 + 0x1a;
            puVar3 = auStack_40;
            if ((puVar4 != NULL) &&
               ((uVar2 = fcn.0000107e(), uVar2 < 0x20 && (cVar1 = fcn.0000102c(puVar4,uVar2 + 1), cVar1 == '\0')))) {
                for (; *puVar4 != 0; puVar4 = puVar4 + 1) {
                    *puVar3 = *puVar4;
                    puVar3 = puVar3 + 1;
                }
                *puVar3 = 0;
            }
            cVar1 = fcn.00000ecc(param_1 + 10,auStack_44);
            if (cVar1 != '\0') {
                *(param_2 + 0x94 + auStack_44[0] * 4) = param_1;
            }
            if (*param_1 == 0x5241564e) {
                param_1 = param_1 + *(param_1 + 1);
            }
            else {
                param_1 = NULL;
            }
        }
    }
    return;
}


/* fcn.00000cc1 @ 0xcc1 */

uint __fastcall fcn.00000cc1(int param_1,uint *param_2,int *param_3)

{
    char cVar1;
    int iVar2;
    uint *puVar3;
    int16_t iVar4;
    int *piVar5;
    uchar *extraout_ECX;
    uchar *puVar6;
    uint32_t uVar7;
    uint8_t uVar8;
    int16_t *piVar9;
    int arg_8h;
    uint32_t uVar10;
    ulong uVar11;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    uint32_t uStack_14;
    int iStack_10;
    int iStack_c;
    uint *puStack_8;
    uint *puStack_4;
    
    uVar8 = 0;
    uVar10 = uStack_1c >> 8;
    uStack_1c = uStack_1c & 0xffffff00;
    if (*0xffd5e014 != 0) {
        do {
            uVar8 = uVar8 + 1;
        } while (*(uVar8 * 0x14 + -0x2a1fec) != 0);
        uStack_1c = CONCAT31(uVar10,uVar8);
    }
    uStack_18 = uVar8;
    iStack_c = param_1;
    puStack_4 = param_2;
    iVar2 = fcn.00001130();
    if (iVar2 == 0) {
        return 0x80000005;
    }
    uStack_14 = *(param_1 + 8);
    uVar10 = 0;
    if (uStack_14 != 0) {
        do {
            fcn.00000bbe(uStack_1c);
            cVar1 = fcn.00000b9d();
            if (cVar1 == '\x01') break;
            uVar10 = uVar10 + 1;
        } while (uVar10 < uStack_14);
    }
    uVar10 = uStack_18;
    uStack_14 = 0;
    if (uStack_18 != 0) {
        piVar5 = iVar2 + 5;
        uVar7 = uStack_18;
        do {
            if (*(piVar5 + -5) != '\0') {
                uStack_14 = uStack_14 + 0x1a + piVar5[2] + *piVar5;
            }
            piVar5 = piVar5 + 0x15;
            uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
        if (uStack_14 != 0) {
            puVar3 = fcn.00001207();
            if (puVar3 != NULL) {
                arg_8h = -0x2a1fe8;
                piVar5 = iVar2 + 0xd;
                puStack_8 = puVar3;
                do {
                    if (*(piVar5 + -0xd) != '\0') {
                        *(puVar3 + 1) = 0x1a;
                        *puVar3 = 0x5241564e;
                        iVar4 = piVar5[-2] + 0x1a;
                        *(puVar3 + 1) = iVar4;
                        iVar2 = *piVar5;
                        *(puVar3 + 6) = *(puVar3 + 6) | 0xffffff;
                        *(puVar3 + 1) = iVar2 + iVar4;
                        *(puVar3 + 9) = 0x86;
                        if ((*(piVar5 + 1) & 4) != 0) {
                            *(puVar3 + 9) = 0x87;
                        }
                        fcn.00001241();
                        iStack_10 = puVar3 + 0x1a;
                        piVar9 = *(arg_8h + -4);
                        if ((((iStack_10 != 0) && (piVar9 != NULL)) && (piVar5[-2] < 0xf4241)) && (piVar5[-2] != 0)) {
                            uVar11 = fcn.00001052();
                            if ((uVar11 < uVar11 >> 0x20) &&
                               (cVar1 = fcn.0000102c(piVar9,uVar11 * 2 + 2), puVar6 = extraout_ECX, cVar1 == '\0')) {
                                for (; *piVar9 != 0; piVar9 = piVar9 + 1) {
                                    *puVar6 = *piVar9;
                                    puVar6 = puVar6 + 1;
                                }
                                *puVar6 = 0;
                            }
                        }
                        if (*piVar5 != 0) {
                            fcn.0000122b(*piVar5);
                        }
                        iVar2 = iStack_c;
                        cVar1 = fcn.00000ecc(arg_8h,&uStack_1c);
                        if (cVar1 != '\0') {
                            *(iVar2 + 0x94 + (uStack_1c & 0xffff) * 4) = puVar3;
                        }
                        puVar3 = puVar3 + *(puVar3 + 1);
                        uVar10 = uStack_18;
                    }
                    piVar5 = piVar5 + 0x15;
                    arg_8h = arg_8h + 0x14;
                    uVar10 = uVar10 - 1;
                    uStack_18 = uVar10;
                } while (uVar10 != 0);
                *puStack_4 = puStack_8;
                *param_3 = uStack_14;
                return 0;
            }
            return 0x80000005;
        }
    }
    *param_3 = 0;
    return 0;
}


/* fcn.00000776 @ 0x776 */

uint __fastcall fcn.00000776(int *param_1,int param_2)

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
         (cVar1 = fcn.0000067c(), cVar1 == '\0')))))) {
        return 1;
    }
    return 0;
}


/* fcn.0000067c @ 0x67c */

uint32_t __fastcall fcn.0000067c(int param_1)

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


/* fcn.00000662 @ 0x662 */

int __fastcall fcn.00000662(int param_1,int param_2)

{
    if ((*(param_1 + 6) & 0x4000000) != 0) {
        return param_1 + 10;
    }
    return *(param_2 + 8) + *(param_1 + 10) * -0x10;
}


/* fcn.0000128f @ 0x128f */

int __fastcall fcn.0000128f(int *param_1,int *param_2)

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


/* fcn.00000871 @ 0x871 */

uint32_t __fastcall fcn.00000871(int param_1)

{
    char cVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint unaff_ESI;
    
    uVar3 = *(param_1 + 0x10);
    cVar1 = fcn.00000776();
    if (cVar1 == '\0') {
        uVar3 = 0;
    }
    else if ((-1 < *(uVar3 + 9)) || ((*(uVar3 + 6) & 0x8000000) != 0)) {
        do {
            if ((uVar3 == 0) || (*(param_1 + 0xc) <= uVar3)) {
                uVar3 = 0;
            }
            else {
                cVar1 = fcn.00000776(unaff_ESI);
                if ((cVar1 != '\0') && (uVar3 = uVar3 + *(uVar3 + 4), *(param_1 + 0xc) <= uVar3)) {
                    return 0;
                }
                while( true ) {
                    if (*(param_1 + 0xc) <= uVar3) {
                        return 0;
                    }
                    cVar1 = fcn.00000776(unaff_ESI);
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


/* fcn.000008a8 @ 0x8a8 */

uint __fastcall fcn.000008a8(int param_1,uint16_t *param_2,uint param_3,int *param_4)

{
    int iVar1;
    uint16_t *puVar2;
    uint16_t *puVar3;
    
    fcn.00000662();
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
    iVar1 = fcn.0000128f(iVar1);
    if (iVar1 != 0) {
        return 0;
    }
    if (param_4 != NULL) {
        *param_4 = puVar3 - puVar2;
    }
    return 1;
}


/* fcn.000007f8 @ 0x7f8 */

uint32_t __fastcall fcn.000007f8(uint32_t param_1,int param_2)

{
    char cVar1;
    uint32_t uVar2;
    
    do {
        if ((param_1 == 0) || (*(param_2 + 0xc) <= param_1)) {
            param_1 = 0;
        }
        else {
            cVar1 = fcn.00000776();
            if ((cVar1 != '\0') && (param_1 = param_1 + *(param_1 + 4), *(param_2 + 0xc) <= param_1)) {
                return 0;
            }
            while( true ) {
                if (*(param_2 + 0xc) <= param_1) {
                    return 0;
                }
                cVar1 = fcn.00000776();
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


/* fcn.000009a6 @ 0x9a6 */

uint __fastcall fcn.000009a6(int param_1,int param_2,uint32_t *param_3)

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


/* fcn.000006ef @ 0x6ef */

int __fastcall fcn.000006ef(int param_1,int param_2,int *param_3)

{
    char cVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    
    uVar4 = 0;
    iVar3 = 0;
    while( true ) {
        iVar5 = param_1;
        cVar1 = fcn.00000776();
        if (cVar1 == '\0') break;
        uVar2 = *(iVar5 + 6) & 0xffffff;
        if (uVar2 == 0xffffff) goto code_r0x00000721;
        param_1 = iVar5 + uVar2;
        iVar3 = iVar5;
    }
    iVar5 = iVar3;
code_r0x00000721:
    if (iVar5 == 0) {
        iVar3 = 0;
    }
    else {
        iVar3 = 10;
        if ((*(iVar5 + 6) & 0x8000000) == 0) {
            iVar3 = (-((*(iVar5 + 6) & 0x4000000) != 0) & 0xf) + 0xb + param_2;
        }
        if (param_3 != NULL) {
            if ((*(iVar5 + 6) & 0x10000000) != 0) {
                uVar4 = *((*(iVar5 + 4) - 2) + iVar5);
            }
            *param_3 = (*(iVar5 + 4) - uVar4) - iVar3;
        }
        iVar3 = iVar3 + iVar5;
    }
    return iVar3;
}


/* fcn.00001ab0 @ 0x1ab0 */

uint32_t __cdecl fcn.00001ab0(uint32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

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


/* fcn.00000962 @ 0x962 */

int __fastcall fcn.00000962(uint param_1,uint param_2,uint param_3,uint param_4)

{
    char cVar1;
    int iVar2;
    
    iVar2 = fcn.00000871();
    while ((iVar2 != 0 && (cVar1 = fcn.000008a8(param_2,param_3,param_4), cVar1 == '\0'))) {
        iVar2 = fcn.000007f8();
    }
    return iVar2;
}


/* fcn.00000a15 @ 0xa15 */

uint __cdecl fcn.00000a15(uint32_t arg_8h,int32_t arg_ch,uint32_t arg_10h,int32_t arg_14h)

{
    uint32_t uVar1;
    char cVar2;
    int arg_ch_00;
    int in_ECX;
    int32_t var_4h;
    
    if ((in_ECX == 0) || (var_4h = in_ECX, cVar2 = fcn.00000776(), cVar2 == '\0')) {
        return 0x8000000e;
    }
    if (arg_8h != 0) {
        fcn.000009a6(arg_8h);
    }
    arg_ch_00 = fcn.000006ef(&var_4h,arg_14h);
    if (arg_ch_00 == 0) {
        return 0x80000015;
    }
    uVar1 = *arg_ch;
    *arg_ch = var_4h;
    if (uVar1 < var_4h) {
        return 0x80000005;
    }
    fcn.00001ab0(arg_10h,arg_ch_00,var_4h);
    return 0;
}


/* fcn.00000a91 @ 0xa91 */

uint __cdecl fcn.00000a91(int32_t arg_8h,int32_t arg_ch,uint32_t arg_10h,int32_t arg_14h)

{
    uint uVar1;
    int in_ECX;
    int in_EDX;
    int32_t var_4h;
    
    if ((((in_ECX == 0) || (in_EDX == 0)) || (arg_ch == 0)) || ((arg_10h == 0 && (*arg_ch != 0)))) {
        uVar1 = 0x80000002;
    }
    else {
        fcn.00000962(&var_4h,arg_14h);
        uVar1 = fcn.00000a15(arg_8h,arg_ch,arg_10h,arg_14h);
    }
    return uVar1;
}


/* fcn.00000b9d @ 0xb9d */

uint __fastcall fcn.00000b9d(int param_1,uint8_t param_2)

{
    uint8_t uVar1;
    uint32_t uVar2;
    
    uVar2 = 0;
    if (param_2 != 0) {
        do {
            if (*(uVar2 * 0x15 + param_1) == '\0') {
                return 0;
            }
            uVar1 = uVar2 + 1;
            uVar2 = uVar1;
        } while (uVar1 < param_2);
    }
    return 1;
}


/* fcn.00001130 @ 0x1130 */

int __fastcall fcn.00001130(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.000010f9();
    if (iVar1 == 0) {
        return 0;
    }
    if (param_1 == 0) {
        return iVar1;
    }
    iVar1 = fcn.00000130(iVar1,param_1);
    return iVar1;
}


/* fcn.000010f9 @ 0x10f9 */

int32_t __fastcall fcn.000010f9(uint param_1)

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


/* fcn.00000130 @ 0x130 */

uint * fcn.00000130(uint *param_1,uint32_t param_2)

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


/* fcn.00000bbe @ 0xbbe */

void __fastcall fcn.00000bbe(uint param_1,int param_2,uint8_t param_3)

{
    uint uVar1;
    char cVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    uint8_t uStack_11;
    uint uStack_c;
    uint uStack_8;
    uint uStack_4;
    
    iVar3 = fcn.00000871();
    do {
        if (iVar3 == 0) {
            return;
        }
        uStack_11 = 0;
        if (param_3 != 0) {
            do {
                if ((*(uStack_11 * 0x15 + param_2) != '\x01') &&
                   (cVar2 = fcn.000008a8(uStack_11 * 0x14 + -0x2a1fe8,&uStack_c,param_1), cVar2 == '\x01')) {
                    if ((iVar3 == 0) || (cVar2 = fcn.00000776(), uVar1 = uStack_c, cVar2 == '\0'))
                    goto code_r0x00000ca6;
                    uVar4 = fcn.000006ef(&uStack_8,param_1);
                    fcn.000009a6(&uStack_4);
                    iVar5 = uStack_11 * 0x15;
                    *(iVar5 + 0xd + param_2) = uStack_8;
                    *(iVar5 + 9 + param_2) = uVar4;
                    *(iVar5 + param_2) = 1;
                    *(iVar5 + 1 + param_2) = iVar3;
                    *(iVar5 + 5 + param_2) = uVar1;
                    *(iVar5 + 0x11 + param_2) = uStack_4;
                    break;
                }
                uStack_11 = uStack_11 + 1;
            } while (uStack_11 < param_3);
        }
        cVar2 = fcn.00000b9d();
        if (cVar2 == '\x01') {
            return;
        }
code_r0x00000ca6:
        iVar3 = fcn.000007f8();
    } while( true );
}


/* fcn.00001052 @ 0x1052 */

uint32_t __fastcall fcn.00001052(int16_t *param_1,uint32_t param_2)

{
    uint32_t uVar1;
    
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


/* fcn.0000102c @ 0x102c */

uint32_t __fastcall fcn.0000102c(uint32_t param_1,int param_2,uint32_t param_3,int param_4)

{
    uint32_t uVar1;
    
    if (param_3 <= param_1) {
        uVar1 = param_4 + param_3;
        if (param_1 < uVar1) goto code_r0x0000104a;
        if (param_3 < param_1) goto code_r0x0000104e;
    }
    uVar1 = param_1 + param_2;
    if (uVar1 <= param_3) {
code_r0x0000104e:
        return uVar1 & 0xffffff00;
    }
code_r0x0000104a:
    return CONCAT31(uVar1 >> 8,1);
}


/* fcn.0000122b @ 0x122b */

int __fastcall fcn.0000122b(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = section..text(param_1,param_2,param_3);
    return iVar1;
}


/* fcn.00000ecc @ 0xecc */

uint __cdecl fcn.00000ecc(int32_t arg_8h,int32_t arg_ch)

{
    int16_t iVar1;
    uint16_t uVar2;
    uint16_t *puVar3;
    char cVar4;
    int iVar5;
    int in_ECX;
    uint32_t uVar6;
    uint16_t *in_EDX;
    uint16_t uVar7;
    uint16_t *puVar8;
    
    iVar1 = *(in_ECX + 0x8c);
    if ((iVar1 != 0) && (iVar1 != -1)) {
        puVar8 = *(in_ECX + 0x90);
        uVar7 = 0;
        if (iVar1 != 0) {
            do {
                cVar4 = fcn.0000125a();
                if (cVar4 == '\x01') {
                    uVar6 = 0;
                    uVar2 = *in_EDX;
                    puVar3 = in_EDX;
                    while (uVar2 != 0) {
                        puVar3 = puVar3 + 1;
                        uVar6 = uVar6 + 1;
                        uVar2 = *puVar3;
                    }
                    if (((uVar6 & 0x7fffffff) == 0x7fffffff) || (puVar8 + 9 == in_EDX)) {
                        iVar5 = 0;
                    }
                    else {
                        iVar5 = fcn.00000110(puVar8 + 9);
                    }
                    if (iVar5 == 0) {
                        *arg_ch = uVar7;
                        return 1;
                    }
                }
                puVar8 = puVar8 + *puVar8 + 0x12;
                uVar7 = uVar7 + 1;
            } while (uVar7 < *(in_ECX + 0x8c));
        }
    }
    return 0;
}


/* fcn.00000110 @ 0x110 */

int fcn.00000110(char *param_1,char *param_2,int param_3)

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


/* fcn.0000107e @ 0x107e */

uint32_t __fastcall fcn.0000107e(char *param_1)

{
    uint32_t uVar1;
    
    uVar1 = 0;
    if ((param_1 != NULL) && (*param_1 != '\0')) {
        while (uVar1 < 0x1f) {
            uVar1 = uVar1 + 1;
            if (param_1[uVar1] == '\0') {
                return uVar1;
            }
        }
        uVar1 = 0x20;
    }
    return uVar1;
}


/* fcn.00001148 @ 0x1148 */

int32_t fcn.00001148(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00001173 @ 0x1173 */

int16_t * __fastcall fcn.00001173(uint param_1,int16_t *param_2)

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


/* fcn.0000181c @ 0x181c */

//WARNING: Removing unreachable block (ram,0x00001837)
//WARNING: Removing unreachable block (ram,0x00001855)

uint __cdecl fcn.0000181c(uint32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    puVar1 = cpuid_Deterministic_Cache_Parameters_info(4);
    uVar3 = puVar1[1];
    uVar2 = puVar1[3];
    if (arg_8h != 0) {
        *arg_8h = *puVar1;
    }
    if (arg_ch != 0) {
        *arg_ch = uVar3;
    }
    if (arg_10h != 0) {
        *arg_10h = uVar2;
    }
    return 4;
}


/* fcn.0000185f @ 0x185f */

int __fastcall fcn.0000185f(int param_1)

{
    int iVar1;
    
    if (param_1 == 0) {
        return -1;
    }
    iVar1 = 0x1f;
    for (; 0 < param_1; param_1 = param_1 * 2) {
        iVar1 = iVar1 + -1;
    }
    return iVar1;
}


/* fcn.00001874 @ 0x1874 */

uint32_t __fastcall fcn.00001874(uint param_1)

{
    ulong uVar1;
    char cVar2;
    uint32_t uVar3;
    
    cVar2 = fcn.000019c5(param_1,param_1);
    if (cVar2 == '\0') {
        uVar3 = 0;
    }
    else {
        uVar1 = rdmsr(0xfe);
        uVar3 = uVar1 & 0xff;
    }
    return uVar3;
}


/* fcn.00001983 @ 0x1983 */

int __fastcall fcn.00001983(int param_1)

{
    ulong uVar1;
    char cVar2;
    
    cVar2 = fcn.000019c5();
    if (cVar2 != '\0') {
        fcn.00001890();
        rdmsr(0xfe);
        fcn.000018c4(param_1 + 0x58);
        uVar1 = rdmsr(0x2ff);
        *(param_1 + 600) = uVar1;
        *(param_1 + 0x25c) = uVar1 >> 0x20;
    }
    return param_1;
}


/* fcn.000019c5 @ 0x19c5 */

uint32_t __fastcall fcn.000019c5(int32_t param_1)

{
    ulong uVar1;
    uint32_t uVar2;
    int32_t var_4h;
    
    var_4h = param_1;
    uVar2 = fcn.00001a06(param_1,param_1,&var_4h);
    if ((var_4h & 0x1000U) == 0) {
        uVar2 = uVar2 & 0xffffff00;
    }
    else {
        uVar1 = rdmsr(0xfe);
        uVar2 = CONCAT31(uVar1 >> 8,(uVar1 >> 8 & 1) != 0 && uVar1 != '\0');
    }
    return uVar2;
}


/* fcn.00001890 @ 0x1890 */

uint * __fastcall fcn.00001890(uint *param_1)

{
    ulong uVar1;
    uint32_t uVar2;
    uint *puVar3;
    
    uVar2 = 0;
    puVar3 = param_1;
    do {
        uVar1 = rdmsr(*(uVar2 - 0x2a1e4c));
        uVar2 = uVar2 + 0xc;
        *puVar3 = uVar1;
        puVar3[1] = uVar1 >> 0x20;
        puVar3 = puVar3 + 2;
    } while (uVar2 < 0x84);
    return param_1;
}


/* fcn.000018c4 @ 0x18c4 */

int32_t __cdecl fcn.000018c4(int32_t arg_8h)

{
    ulong uVar1;
    int in_EDX;
    int iVar2;
    uint *puVar3;
    int32_t var_4h;
    
    if (in_EDX != 0) {
        iVar2 = 0x201;
        puVar3 = arg_8h;
        do {
            uVar1 = rdmsr(iVar2 + -1);
            *puVar3 = uVar1;
            puVar3[1] = uVar1 >> 0x20;
            uVar1 = rdmsr(iVar2);
            iVar2 = iVar2 + 2;
            puVar3[2] = uVar1;
            puVar3[3] = uVar1 >> 0x20;
            puVar3 = puVar3 + 4;
            in_EDX = in_EDX + -1;
        } while (in_EDX != 0);
    }
    return arg_8h;
}


/* fcn.0000190c @ 0x190c */

void __fastcall fcn.0000190c(int64_t *param_1,uint32_t *param_2)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint32_t var_8h;
    int32_t var_4h;
    
    fcn.00001a06(param_1,param_1,0);
    if (param_1 < 0x80000008) {
        piVar1 = param_1 & 0xffffff24 | 0x24;
    }
    else {
        fcn.00001a06(0x80000008,0x80000008,0);
        piVar1 = param_1;
    }
    iVar2 = fcn.00001099(piVar1 & 0xff,piVar1 & 0xff);
    iVar2 = iVar2 + -1;
    *param_1 = iVar2;
    *param_2 = iVar2 & 0xfffff000;
    param_2[1] = iVar2 >> 0x20;
    return;
}


/* fcn.0000132d @ 0x132d */

void __fastcall fcn.0000132d(uint32_t *param_1,uint32_t *param_2)

{
    uint64_t uVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    int iStack_18;
    uint32_t uStack_14;
    int iStack_10;
    uint32_t *puStack_c;
    
    *param_1 = 0;
    *param_2 = 0;
    uVar1 = rdmsr(0x396);
    puStack_c = param_2;
    fcn.0000181c(&iStack_18,&uStack_14,&iStack_10);
    if (iStack_18 == 0) {
        fcn.0000181c(&iStack_18,&uStack_14,&iStack_10);
    }
    uVar3 = ((uStack_14 >> 0xc & 0x3ff) + 1) * ((uStack_14 & 0xfff) + 1) * ((uStack_14 >> 0x16) + 1) * (iStack_10 + 1);
    if ((uVar1 & 0x3f) == 0) {
        *param_1 = uVar3;
    }
    else {
        uVar2 = fcn.0000185f();
        *param_1 = (uVar3 * (1 << (uVar2 & 0x1f))) / (uVar1 & 0x3f);
    }
    *puStack_c = *param_1 / (uStack_14 >> 0x16);
    return;
}


/* fcn.000012ee @ 0x12ee */

void __fastcall fcn.000012ee(int *param_1)

{
    int *piVar1;
    uint32_t uVar2;
    
    piVar1 = *0xffffffc0;
    uVar2 = (*0xffffffc0)[2];
    *param_1 = 0;
    for (uVar2 = uVar2 & 0xffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
        if ((*(piVar1 + 0xe) & 0x7f) == 2) {
            *param_1 = *(*piVar1 + 0x18) << 2;
        }
        piVar1 = piVar1 + 4;
    }
    return;
}


/* fcn.000013ec @ 0x13ec */

uint __fastcall fcn.000013ec(ulong *param_1)

{
    int iVar1;
    int iVar2;
    uint in_CR4;
    int32_t var_20h;
    int8_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00001874();
    if (iVar1 != 0) {
        iVar2 = 0x201;
        do {
            wrmsr(iVar2 + -1,*param_1);
            wrmsr(iVar2,param_1[1]);
            iVar2 = iVar2 + 2;
            param_1 = param_1 + 2;
            iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
    }
    return in_CR4;
}


/* fcn.00001a06 @ 0x1a06 */

//WARNING: Removing unreachable block (ram,0x00001a2d)
//WARNING: Removing unreachable block (ram,0x00001a35)

int __cdecl fcn.00001a06(uint noname_0,uint noname_1,int32_t arg_10h)

{
    uint *puVar1;
    int in_ECX;
    uint *in_EDX;
    uint uVar2;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    if (in_ECX == 0) {
        puVar1 = cpuid_basic_info(0);
    }
    else if (in_ECX == 1) {
        puVar1 = cpuid_Version_info(1);
    }
    else if (in_ECX == 2) {
        puVar1 = cpuid_cache_tlb_info(2);
    }
    else if (in_ECX == 3) {
        puVar1 = cpuid_serial_info(3);
    }
    else if (in_ECX == 4) {
        puVar1 = cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (in_ECX == 5) {
        puVar1 = cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (in_ECX == 6) {
        puVar1 = cpuid_Thermal_Power_Management_info(6);
    }
    else if (in_ECX == 7) {
        puVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (in_ECX == 9) {
        puVar1 = cpuid_Direct_Cache_Access_info(9);
    }
    else if (in_ECX == 10) {
        puVar1 = cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (in_ECX == 0xb) {
        puVar1 = cpuid_Extended_Topology_info(0xb);
    }
    else if (in_ECX == 0xd) {
        puVar1 = cpuid_Processor_Extended_States_info(0xd);
    }
    else if (in_ECX == 0xf) {
        puVar1 = cpuid_Quality_of_Service_info(0xf);
    }
    else if (in_ECX == -0x7ffffffe) {
        puVar1 = cpuid_brand_part1_info(0x80000002);
    }
    else if (in_ECX == -0x7ffffffd) {
        puVar1 = cpuid_brand_part2_info(0x80000003);
    }
    else if (in_ECX == -0x7ffffffc) {
        puVar1 = cpuid_brand_part3_info(0x80000004);
    }
    else {
        puVar1 = cpuid(in_ECX);
    }
    uVar2 = puVar1[2];
    if (in_EDX != NULL) {
        *in_EDX = *puVar1;
    }
    if (arg_10h != 0) {
        *arg_10h = uVar2;
    }
    return in_ECX;
}


/* fcn.00001099 @ 0x1099 */

ulong __fastcall fcn.00001099(uint8_t param_1)

{
    bool bVar1;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    bVar1 = (param_1 & 0x20) == 0;
    return CONCAT44(!bVar1 << (param_1 & 0x1f) | bVar1 >> 0x20 - (param_1 & 0x1f),bVar1 << (param_1 & 0x1f));
}


