// decompiled by r2ghidra: 2112_AhciRecovery.pe32
// functions: 47

/* entry0 @ 0x102f9 */

uint entry0(void)

{
    uint *puVar1;
    uint uVar2;
    
    if (*0x26a0 != '\0') {
        return 0;
    }
    puVar1 = fcn.0001250b();
    if (puVar1 == NULL) {
        return 0x80000009;
    }
    *(puVar1 + 0x2d) = 0;
    *(puVar1 + 0xb) = 0;
    puVar1[9] = 0x49434841;
    puVar1[10] = 0x4345525f;
    *puVar1 = 0x359;
    puVar1[1] = 0x3f9;
    puVar1[2] = 0x4b8;
    *0x2668 = puVar1;
    fcn.00012409();
    *0x2674 = puVar1 + 3;
    puVar1[5] = 0x326;
    puVar1[6] = 0x38b;
    puVar1[7] = 0x47c;
    uVar2 = fcn.00012409();
    *0x26a0 = 1;
    return uVar2;
}


/* fcn.0001250b @ 0x1250b */

int __fastcall fcn.0001250b(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.000124d4();
    if (iVar1 == 0) {
        return 0;
    }
    if (param_1 == 0) {
        return iVar1;
    }
    iVar1 = fcn.00010260(iVar1,param_1);
    return iVar1;
}


/* fcn.000124d4 @ 0x124d4 */

int32_t __fastcall fcn.000124d4(uint param_1)

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


/* fcn.00010260 @ 0x10260 */

uint * fcn.00010260(uint *param_1,uint32_t param_2)

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


/* fcn.00012409 @ 0x12409 */

void __fastcall fcn.00012409(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.00010359 @ 0x10359 */

int fcn.00010359(uint param_1,int param_2,uint *param_3)

{
    int iVar1;
    
    if (param_2 == 0) {
        return -0x7ffffffe;
    }
    if (*(param_2 + 0x2c) == '\0') {
        iVar1 = fcn.0001066e();
        if (iVar1 < 0) {
            return iVar1;
        }
        *(param_2 + 0x2c) = 1;
    }
    *param_3 = *(param_2 + 0x2d);
    return 0;
}


/* fcn.0001066e @ 0x1066e */

int __fastcall fcn.0001066e(uint param_1,int param_2)

{
    int iVar1;
    code *pcVar2;
    int iVar3;
    uint32_t *puVar4;
    char cVar5;
    uint32_t extraout_ECX;
    uint32_t uVar6;
    int iVar7;
    uint32_t uVar8;
    uint uVar9;
    uint32_t uStack_2c;
    uint32_t uStack_28;
    uint *puStack_24;
    uint32_t uStack_20;
    uchar *puStack_1c;
    uchar auStack_18 [2];
    int iStack_16;
    uchar uStack_10;
    uint8_t uStack_f;
    uint8_t uStack_e;
    uint8_t uStack_d;
    
    iVar3 = param_2 + 0x31;
    uVar9 = 0x26a4;
    uStack_2c = uStack_2c & 0xffffff00;
    *iVar3 = iVar3;
    *(param_2 + 0x35) = iVar3;
    puStack_1c = param_2;
    fcn.0001242e(param_1,0x26a4);
    iVar3 = fcn.0001242e(uVar9,&puStack_24);
    if ((-1 < iVar3) && (iVar3 = (**puStack_24)(puStack_24), -1 < iVar3)) {
        while (iVar3 = (*puStack_24[1])(puStack_24,0x10601,uStack_2c,&uStack_10), -1 < iVar3) {
            iVar3 = ((uStack_f << 5 | uStack_e & 0x1f) << 3 | uStack_d & 7) * 0x1000;
            uVar8 = *(iVar3 + -0x3fffffdc);
            uStack_20 = *(iVar3 + -0x40000000);
            puVar4 = fcn.0001250b();
            if (puVar4 == NULL) {
                return -0x7ffffff7;
            }
            *puVar4 = uVar8 & 0xfffffff0;
            *(puVar4 + 0x46) = uStack_f;
            *(puVar4 + 0x47) = uStack_e;
            *(puVar4 + 0x12) = uStack_d;
            uVar9 = fcn.00010892();
            uVar8 = uStack_20;
            uStack_2c = CONCAT31(uStack_2c._1_3_,uStack_2c + '\x01');
            iVar7 = 0;
            *(puVar4 + 0x49) = uVar9;
            pcVar2 = *0x26a8;
            while (pcVar2 != NULL) {
                (*pcVar2)(iVar3,0,uVar8);
                iVar1 = iVar7 * 4;
                iVar7 = iVar7 + 1;
                pcVar2 = *(iVar1 + 0x26ac);
            }
            fcn.00011860();
            uVar8 = *(*puVar4 + 0xc);
            puVar4[2] = uVar8;
            if (uVar8 != 0) {
                uVar6 = extraout_ECX & 0xffffff00;
                uStack_28 = uStack_28 & 0xffffff00;
                do {
                    if (((uVar8 & 1) != 0) && ((puVar4[2] & 1 << (uVar6 & 0x1f)) != 0)) {
                        fcn.00010de2(uStack_28,uVar6);
                        uVar6 = CONCAT31(uVar6 >> 8,uStack_28);
                    }
                    cVar5 = uVar6 + '\x01';
                    uVar6 = CONCAT31(uVar6 >> 8,cVar5);
                    uVar8 = uVar8 >> 1;
                    uStack_28 = CONCAT31(uStack_28._1_3_,cVar5);
                } while (uVar8 != 0);
            }
        }
        puStack_1c = auStack_18;
        InterruptDescriptorTableRegister();
        iVar3 = (**(**(iStack_16 + -4) + 0x24))(*(iStack_16 + -4),0x2650);
        if (-1 < iVar3) {
            iVar3 = 0;
        }
    }
    return iVar3;
}


/* fcn.000102fe @ 0x102fe */

int __fastcall fcn.000102fe(int param_1,uint32_t param_2)

{
    uint *puVar1;
    uint32_t uVar2;
    
    puVar1 = *(param_1 + 0x31);
    uVar2 = 1;
    while( true ) {
        if (puVar1 == param_1 + 0x31) {
            return 0;
        }
        if ((uVar2 & 0xffff) == param_2) break;
        puVar1 = *puVar1;
        uVar2 = uVar2 + 1;
    }
    return puVar1 + -0x43;
}


/* fcn.000103f9 @ 0x103f9 */

int __cdecl fcn.000103f9(uint noname_0,int32_t arg_ch,int32_t arg_10h,uint32_t arg_14h)

{
    int iVar1;
    
    if (((arg_10h != 0) && (arg_ch != 0)) && (arg_14h != 0)) {
        if (*(arg_ch + 0x2c) == '\0') {
            iVar1 = fcn.0001066e();
            if (iVar1 < 0) {
                return iVar1;
            }
            *(arg_ch + 0x2c) = 1;
        }
        if (arg_10h <= *(arg_ch + 0x2d)) {
            iVar1 = fcn.000102fe();
            if (iVar1 == 0) {
                return -0x7ffffff2;
            }
            if (*(iVar1 + 0x27) == '\0') {
                if (*(iVar1 + 0x28) == 1) {
                    fcn.0001118c();
                }
                *(iVar1 + 0x27) = 1;
            }
            if (arg_14h != iVar1 + 7U) {
                section..text(arg_14h,iVar1 + 7U,0x10);
            }
            return 0;
        }
    }
    return -0x7ffffffe;
}


/* section..text @ 0x10220 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 9184 named .text
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


/* fcn.0001118c @ 0x1118c */

int __fastcall fcn.0001118c(int param_1)

{
    int *piVar1;
    int iVar2;
    uchar uVar3;
    uchar uVar4;
    uchar uVar5;
    uchar uVar6;
    int iVar7;
    uint extraout_ECX;
    uint8_t uStack_41;
    uchar *puStack_40;
    uchar *puStack_3c;
    uchar auStack_38 [2];
    int iStack_36;
    uchar *puStack_30;
    uint uStack_2c;
    uchar uStack_1b;
    char cStack_1a;
    
    fcn.00010260(&puStack_30,0x25);
    iVar7 = fcn.0001111f();
    if ((iVar7 != -0x7ffffff3) && (iVar7 != 0)) {
        return iVar7;
    }
    puStack_3c = auStack_38;
    InterruptDescriptorTableRegister();
    iVar7 = (**(**(iStack_36 + -4) + 0x4c))(*(iStack_36 + -4),0x100,&puStack_40);
    if (iVar7 < 0) {
        return iVar7;
    }
    cStack_1a = *(param_1 + 0x2d) << 5;
    uStack_1b = 0x25;
    uStack_41 = 0;
    do {
        fcn.00012539();
        puStack_30 = puStack_40;
        uStack_2c = 8;
        iVar7 = fcn.000114d9(extraout_ECX);
        if ((*(param_1 + 0x2e) == '\0') || (*(param_1 + 0x2e) == '\x01')) break;
        uStack_41 = uStack_41 + 1;
    } while (uStack_41 < 5);
    if (iVar7 == 0) {
        *(param_1 + 0xf) = CONCAT31(CONCAT21(CONCAT11(*puStack_40,puStack_40[1]),puStack_40[2]),puStack_40[3]);
        uVar3 = *puStack_40;
        uVar4 = puStack_40[1];
        uVar5 = puStack_40[2];
        uVar6 = puStack_40[3];
        *(param_1 + 0x23) = 0;
        *(param_1 + 0xf) = *(param_1 + 0xf) + -1;
        *(param_1 + 0x1f) = CONCAT31(CONCAT21(CONCAT11(uVar3,uVar4),uVar5),uVar6);
        piVar1 = param_1 + 0x1f;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        *(param_1 + 0x13) = 0x800;
        *(param_1 + 0x23) = *(param_1 + 0x23) + -1 + (iVar2 != 0);
        *(param_1 + 0x1b) = 0x800;
        *(param_1 + 0x19) = 1;
    }
    else {
        if (puStack_40[8] == '\x03') {
            return iVar7;
        }
        *(param_1 + 0xf) = CONCAT31(CONCAT21(CONCAT11(puStack_40[4],puStack_40[5]),puStack_40[6]),puStack_40[7]);
        uVar3 = puStack_40[4];
        uVar4 = puStack_40[5];
        uVar5 = puStack_40[6];
        uVar6 = puStack_40[7];
        *(param_1 + 0x23) = 0;
        *(param_1 + 0xf) = *(param_1 + 0xf) + -1;
        *(param_1 + 0x1f) = CONCAT31(CONCAT21(CONCAT11(uVar3,uVar4),uVar5),uVar6);
        piVar1 = param_1 + 0x1f;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        *(param_1 + 0x23) = *(param_1 + 0x23) + -1 + (iVar2 != 0);
        *(param_1 + 0x13) = CONCAT21(CONCAT11(puStack_40[9],puStack_40[10]),puStack_40[0xb]);
        *(param_1 + 0x1b) = CONCAT21(CONCAT11(puStack_40[9],puStack_40[10]),puStack_40[0xb]);
    }
    *(param_1 + 0xb) = 1;
    return iVar7;
}


/* fcn.000104b8 @ 0x104b8 */

int __cdecl
fcn.000104b8(int32_t arg_8h,int32_t arg_ch,uint32_t arg_10h,uint32_t arg_14h,uint32_t arg_18h,uint32_t arg_1ch,
            int32_t arg_20h)

{
    int32_t iVar1;
    int iVar2;
    int iVar3;
    ulong uVar4;
    int iStack_28;
    uint32_t uStack_24;
    uchar auStack_20 [8];
    uchar auStack_18 [4];
    char cStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
    
    iVar1 = arg_20h;
    iStack_28 = 0;
    if (((arg_ch != 0) && (arg_10h != 0)) && (arg_20h != 0)) {
        if (arg_1ch == 0) {
            return 0;
        }
        if (*(arg_ch + 0x2c) == '\0') {
            iVar2 = fcn.0001066e();
            if (iVar2 < 0) {
                return iVar2;
            }
            *(arg_ch + 0x2c) = 1;
        }
        fcn.00010260(auStack_18,0x10);
        uVar4 = fcn.000102fe();
        iVar2 = uVar4;
        if (iVar2 == 0) {
            return -0x7ffffff2;
        }
        if (*(iVar2 + 0x27) == '\0') {
            iVar3 = fcn.000103f9(arg_8h,arg_ch,uVar4 >> 0x20,auStack_18);
            if (iVar3 < 0) {
                return iVar3;
            }
        }
        else if (auStack_18 != iVar2 + 7) {
            section..text(auStack_18,iVar2 + 7,0x10);
        }
        uStack_24 = uStack_c;
        if (uStack_c == 0) {
            return -0x7ffffff4;
        }
        if (arg_1ch % uStack_c == 0) {
            if (cStack_14 == arg_1ch % uStack_c) {
                return -0x7ffffff4;
            }
            if ((*0x26a4 != 0) &&
               (iVar3 = (**(*0x26a4 + 0xc))(*0x26a4,1,iVar1,&arg_1ch,auStack_20,&iStack_28), iVar3 < 0)) {
                return iVar3;
            }
            if (*(iVar2 + 0x28) != 0) {
                iVar2 = fcn.00010c8b(arg_1ch,arg_14h,arg_18h,arg_1ch);
code_r0x0001064f:
                if (iStack_28 != 0) {
                    (**(*0x26a4 + 0x10))(*0x26a4,iStack_28);
                }
                return iVar2;
            }
            if ((arg_18h == 0) && (arg_14h <= uStack_10)) {
                if ((!CARRY4(arg_1ch / uStack_24,arg_14h)) && (arg_1ch / uStack_24 + arg_14h <= uStack_10 + 1)) {
                    iVar2 = fcn.00010a31(arg_1ch,arg_14h,0,uStack_24);
                    goto code_r0x0001064f;
                }
            }
            if (iStack_28 != 0) {
                (**(*0x26a4 + 0x10))(*0x26a4,iStack_28);
            }
        }
    }
    return -0x7ffffffe;
}


/* fcn.00010a31 @ 0x10a31 */

uint __fastcall
fcn.00010a31(int param_1,int param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5,uint32_t param_6)

{
    ushort uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int iVar7;
    bool bVar8;
    int iStack_40;
    uint32_t uStack_38;
    int iStack_28;
    uint32_t uStack_24;
    ushort uStack_1e;
    uchar uStack_1c;
    uchar uStack_1b;
    uchar uStack_1a;
    uchar uStack_19;
    uchar uStack_18;
    uchar uStack_17;
    uint8_t uStack_16;
    uchar uStack_15;
    
    uVar5 = 0x100;
    if (*(param_1 + 0x2c) != '\0') {
        uVar5 = 0x2000;
    }
    uVar6 = param_6;
    if (param_3 < param_6) {
        uVar6 = param_3;
    }
    iVar7 = 0;
    uVar2 = param_3 / uVar6;
    iStack_40 = param_2;
    if (*(param_1 + 0x2c) == '\0') {
        if (uVar2 != 0) {
            param_3 = param_4;
            do {
                if ((iVar7 < 0) || ((iVar7 < 1 && (uVar2 <= uVar5)))) {
                    param_6 = uVar2;
                }
                else {
                    param_6 = 0;
                }
                fcn.00010260(&iStack_28,0x25);
                uStack_1c = param_3;
                uStack_16 = param_3 >> 0x18 & 0xf | 0x40;
                uStack_15 = 0x20;
                uStack_1a = param_3 >> 8;
                uStack_18 = param_3 >> 0x10;
                uStack_1e = param_6;
                iStack_28 = iStack_40;
                if (param_6 == 0) {
                    uStack_24 = uVar5;
                }
                else {
                    uStack_24 = uVar2;
                }
                uStack_24 = uStack_24 * uVar6;
                iVar3 = fcn.00011af7(uStack_24);
                if (iVar3 < 0) {
                    return 0x80000007;
                }
                if (param_6 == 0) {
                    uVar4 = uVar5;
                }
                else {
                    uVar4 = uVar2;
                }
                iStack_40 = iStack_40 + uVar4 * uVar6;
                param_3 = param_3 + uStack_24 / uVar6;
                bVar8 = uVar2 < uVar5;
                uVar2 = uVar2 - uVar5;
                iVar7 = iVar7 - bVar8;
            } while ((0 < iVar7) || ((-1 < iVar7 && (uVar2 != 0))));
        }
    }
    else if (uVar2 != 0) {
        uStack_38 = param_5;
        param_3 = param_4;
        do {
            if ((iVar7 < 0) || ((iVar7 < 1 && (uVar2 <= uVar5)))) {
                param_6 = uVar2;
            }
            else {
                param_6 = uVar5;
            }
            fcn.00010260(&iStack_28,0x25);
            uStack_16 = 0x40;
            uStack_1e = param_6;
            uVar1 = fcn.000124ad(param_3,uStack_38);
            uStack_19 = uVar1;
            uStack_1a = param_3 >> 8;
            uStack_17 = uVar1 >> 8;
            iStack_28 = iStack_40;
            uStack_18 = param_3 >> 0x10;
            uStack_1c = param_3;
            uStack_1b = param_3 >> 0x18;
            uStack_15 = 0x24;
            uStack_24 = param_6 * uVar6;
            iVar3 = fcn.00011af7();
            if (iVar3 < 0) {
                return 0x80000007;
            }
            iStack_40 = iStack_40 + param_6 * uVar6;
            bVar8 = CARRY4(param_3,uStack_24 / uVar6);
            param_3 = param_3 + uStack_24 / uVar6;
            uStack_38 = uStack_38 + bVar8;
            bVar8 = uVar2 < uVar5;
            uVar2 = uVar2 - uVar5;
            iVar7 = iVar7 - bVar8;
        } while ((0 < iVar7) || ((-1 < iVar7 && (uVar2 != 0))));
    }
    return 0;
}


/* fcn.00010c8b @ 0x10c8b */

int __fastcall fcn.00010c8b(int param_1,int param_2,uint32_t param_3,int param_4)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    int iStack_34;
    int iStack_30;
    int iStack_28;
    int iStack_24;
    uchar uStack_13;
    char cStack_12;
    uchar uStack_11;
    uchar uStack_10;
    uchar uStack_f;
    uchar uStack_e;
    uchar uStack_c;
    uchar uStack_b;
    
    iVar1 = -0x7ffffff9;
    if (*(param_1 + 0xb) == '\0') {
        iVar1 = fcn.0001118c();
        if (iVar1 == 0) {
            iVar1 = -0x7ffffff3;
        }
        else {
            iVar1 = ((iVar1 != -0x7ffffff4) - 1 & 5) + 0x80000007;
        }
    }
    else {
        param_3 = param_3 / *(param_1 + 0x13);
        if (0 < param_3) {
            iStack_30 = param_4;
            iStack_34 = param_2;
            do {
                fcn.00010260(&iStack_28,0x25);
                uVar2 = 0xffff;
                if (param_3 < 0x10000) {
                    uVar2 = param_3;
                }
                cStack_12 = *(param_1 + 0x2d) << 5;
                uStack_11 = iStack_30 >> 0x18;
                uStack_10 = iStack_30 >> 0x10;
                uStack_f = iStack_30 >> 8;
                iVar3 = *(param_1 + 0x13) * uVar2;
                uStack_e = iStack_30;
                uStack_c = uVar2 >> 8;
                uStack_13 = 0x28;
                uStack_b = uVar2;
                iStack_28 = iStack_34;
                iStack_24 = iVar3;
                iVar1 = fcn.000114d9(iStack_30);
                if (iVar1 != 0) {
                    if (*(param_1 + 0x2e) == '\x02') {
                        iVar1 = fcn.0001111f();
                    }
                    if (iVar1 == -0x7ffffff3) {
                        iVar1 = fcn.0001118c();
                        if (iVar1 == 0) {
                            return -0x7ffffff3;
                        }
                        if (iVar1 == -0x7ffffff4) {
                            *(param_1 + 0xb) = 0;
                            *(param_1 + 0x19) = 0;
                            return -0x7ffffff4;
                        }
                    }
                    break;
                }
                if (iStack_24 != iVar3) {
                    return -0x7ffffff9;
                }
                iStack_34 = iStack_34 + iVar3;
                iStack_30 = iStack_30 + uVar2;
                param_3 = param_3 - uVar2;
            } while (0 < param_3);
        }
    }
    return iVar1;
}


/* fcn.0001242e @ 0x1242e */

void __cdecl fcn.0001242e(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00010892 @ 0x10892 */

uint __fastcall fcn.00010892(int param_1)

{
    int iVar1;
    uint uVar2;
    
    if (param_1 == 0) {
        return 0;
    }
    iVar1 = fcn.000108c4();
    uVar2 = 0;
    if (iVar1 != 0) {
        uVar2 = fcn.0001250b();
        fcn.00012523(iVar1);
    }
    return uVar2;
}


/* fcn.000108c4 @ 0x108c4 */

int __fastcall fcn.000108c4(char *param_1)

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


/* fcn.00012523 @ 0x12523 */

int __fastcall fcn.00012523(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = section..text(param_1,param_2,param_3);
    return iVar1;
}


/* fcn.00011860 @ 0x11860 */

uint __fastcall fcn.00011860(int *param_1)

{
    uint32_t *puVar1;
    int *arg_8h;
    uint32_t *puVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint extraout_ECX;
    uint8_t uStack_5;
    
    puVar2 = *param_1;
    if ((puVar2 != NULL) && (uVar3 = *puVar2, param_1[1] = uVar3, uVar3 != 0xffffffff)) {
        uVar3 = puVar2[3];
        param_1[2] = uVar3;
        if (uVar3 != 0) {
            *(param_1 + 0x11) = 0;
            do {
                if ((uVar3 & 1) != 0) {
                    *(param_1 + 0x11) = param_1[0x11] + '\x01';
                }
                uVar3 = uVar3 >> 1;
            } while (uVar3 != 0);
            if (*(param_1 + 0x11) <= (param_1[1] & 0x1fU) + 1) {
                if ((*puVar2 & 0x40000) == 0) {
                    puVar2[1] = puVar2[1] | 0x80000000;
                }
                *(param_1 + 0x45) = 1;
                puVar1 = param_1 + 9;
                if (*0x26a4 == 0) {
                    iVar4 = fcn.0001245b(puVar1);
                }
                else {
                    iVar4 = (**(*0x26a4 + 0x14))
                                      (*0x26a4,4,
                                       ((*(param_1 + 0x11) << 8 & 0xfff) != 0) + ((*(param_1 + 0x11) << 8) >> 0xc),
                                       puVar1,0x80,0);
                }
                if (-1 < iVar4) {
                    fcn.00012539();
                    uVar3 = *puVar1;
                    param_1[0xe] = param_1[10];
                    param_1[0xd] = uVar3;
                    param_1[0xb] = *(param_1 + 0x11) * 0x100 + uVar3;
                    puVar1 = param_1 + 3;
                    param_1[0xc] = param_1[10] + CARRY4(*(param_1 + 0x11) * 0x100,uVar3);
                    if (*0x26a4 == 0) {
                        iVar4 = fcn.0001245b(puVar1);
                    }
                    else {
                        iVar4 = (**(*0x26a4 + 0x14))(*0x26a4,4,1,puVar1,0x80,0);
                    }
                    if (-1 < iVar4) {
                        fcn.00010260(*puVar1,0x400);
                        arg_8h = param_1 + 6;
                        param_1[0xf] = *puVar1;
                        param_1[0x10] = param_1[4];
                        param_1[5] = 0x20;
                        if (*0x26a4 == 0) {
                            iVar4 = fcn.0001245b(arg_8h);
                        }
                        else {
                            iVar4 = (**(*0x26a4 + 0x14))(*0x26a4,4,2,arg_8h,0x80,0);
                        }
                        if (-1 < iVar4) {
                            fcn.00010260(*arg_8h,0x1080);
                            uVar3 = param_1[2];
                            uVar5 = 0;
                            param_1[8] = 0x1080;
                            uStack_5 = 0;
                            for (; uVar3 != 0; uVar3 = uVar3 >> 1) {
                                if ((uVar3 & 1) != 0) {
                                    puVar2[uVar5 * 0x20 + 0x46] = puVar2[uVar5 * 0x20 + 0x46] & 0xfffffffe;
                                    iVar4 = fcn.000120d9(0x18,0x8000,500);
                                    if ((-1 < iVar4) || (iVar4 = fcn.00012162(extraout_ECX,0,3), -1 < iVar4)) {
                                        puVar2[uVar5 * 0x20 + 0x46] = puVar2[uVar5 * 0x20 + 0x46] & 0xffffffef;
                                        iVar4 = fcn.000120d9(0x18,0x4000,500);
                                        if (-1 < iVar4) {
                                            puVar2[uVar5 * 0x20 + 0x4c] = puVar2[uVar5 * 0x20 + 0x4c] | 0x7ff0f03;
                                            uVar6 = fcn.000124ad(*puVar1,param_1[4]);
                                            puVar2[uVar5 * 0x20 + 0x41] = uVar6;
                                            puVar2[uVar5 * 0x20 + 0x40] = *puVar1;
                                            uVar6 = fcn.000124ad(uStack_5 * 0x100 + param_1[9],
                                                                 param_1[10] + CARRY4(uStack_5 * 0x100,param_1[9]));
                                            puVar2[uVar5 * 0x20 + 0x43] = uVar6;
                                            uVar6 = uStack_5;
                                            uStack_5 = uStack_5 + 1;
                                            puVar2[uVar5 * 0x20 + 0x42] = uVar6 * 0x100 + param_1[9];
                                        }
                                    }
                                }
                                uVar5 = uVar5 + 1;
                            }
                            return 0;
                        }
                    }
                }
                return 0x80000009;
            }
        }
    }
    return 0x80000007;
}


/* fcn.00010de2 @ 0x10de2 */

int __fastcall fcn.00010de2(int param_1,int *param_2,uint8_t param_3)

{
    int *piVar1;
    int *piVar2;
    int iVar3;
    uint16_t uVar4;
    int iVar5;
    uint *puVar6;
    uint noname_0;
    uint noname_0_00;
    int iVar7;
    ulong uVar8;
    int iStack_21c;
    int iStack_218;
    int *piStack_214;
    uint uStack_210;
    int32_t aiStack_20c [2];
    uint32_t auStack_204 [30];
    int iStack_18c;
    uint32_t uStack_15e;
    int iStack_13c;
    int iStack_138;
    uint32_t uStack_130;
    int iStack_11a;
    
    iStack_21c = 0;
    iStack_218 = *param_2;
    uStack_210 = 0x200;
    piStack_214 = param_2;
    fcn.00010260(auStack_204,0x200);
    iVar5 = fcn.00011630();
    if (iVar5 < 0) {
        return iVar5;
    }
    puVar6 = fcn.0001250b();
    if (puVar6 == NULL) {
        return -0x7ffffff7;
    }
    *(puVar6 + 1) = param_3;
    iVar7 = param_3 * 0x80;
    *(puVar6 + 5) = 0xff;
    uVar8 = fcn.00012486(*(iVar7 + 0x104 + iStack_218),0);
    iVar3 = iStack_218;
    *(puVar6 + 0x2f) = uVar8 | *((param_3 + 2) * 0x80 + iStack_218);
    *(puVar6 + 0x33) = uVar8 >> 0x20;
    uVar8 = fcn.00012486(*(iVar7 + 0x10c + iStack_218),0);
    piVar1 = piStack_214;
    iVar5 = 0;
    *(puVar6 + 0x37) = uVar8 | *(iVar7 + 0x108 + iVar3);
    *(puVar6 + 0x3b) = uVar8 >> 0x20;
    iStack_218 = *(iVar7 + 0x124 + iVar3);
    if (iStack_218 == 0x101) {
        *(param_1 + 0x2d) = *(param_1 + 0x2d) + 1;
        puVar6[10] = 0;
        *(puVar6 + 6) = 1;
        *(puVar6 + 0x17) = 0x12;
        *(puVar6 + 7) = 7;
        *(puVar6 + 0xb) = 1;
        *(puVar6 + 0x19) = 1;
        *(puVar6 + 0x13) = 0x200;
        *(puVar6 + 0x1b) = 0x200;
        *(puVar6 + 0x1a) = 0;
        *puVar6 = piStack_214;
        if (*0x26a4 == 0) {
            iVar5 = fcn.000115db(0,auStack_204);
        }
        else {
            iVar5 = (**(*0x26a4 + 0xc))(*0x26a4,1,auStack_204,&uStack_210,aiStack_20c,&iStack_21c);
            if (iVar5 < 0) {
                return iVar5;
            }
            iVar5 = fcn.000115db(noname_0,aiStack_20c[0]);
            if (iStack_21c != 0) {
                (**(*0x26a4 + 0x10))(*0x26a4,iStack_21c);
            }
        }
        if ((iVar5 < 0) || ((auStack_204[0] & 0x8000) != 0)) goto code_r0x000110f8;
        *(puVar6 + 0xf) = iStack_18c + -1;
        *(puVar6 + 0x23) = 0;
        *(puVar6 + 0x1f) = iStack_18c + -1;
        *(puVar6 + 0xb) = 0;
        *(puVar6 + 6) = auStack_204[0] >> 7;
        if ((uStack_15e & 0x400) != 0) {
            *(puVar6 + 0x1f) = iStack_13c + -1;
            *(puVar6 + 0xb) = 1;
            *(puVar6 + 0x23) = iStack_138 + -1 + (iStack_13c != 0);
        }
        if ((((uStack_130 & 0x4000) == 0) || ((uStack_130 & 0x8000) != 0)) || ((uStack_130 & 0x1000) == 0))
        goto code_r0x000110f8;
        *(puVar6 + 0x13) = iStack_11a * 2;
        iVar5 = iStack_11a * 2;
        *(puVar6 + 0x1b) = iVar5;
    }
    if (iStack_218 == -0x14ebfeff) {
        puVar6[10] = 1;
        *puVar6 = piVar1;
        *(puVar6 + 0x17) = 1;
        *(puVar6 + 0x1a) = 1;
        *(puVar6 + 6) = auStack_204[0] >> 7;
        if (*0x26a4 == 0) {
            iVar5 = fcn.000115db(iVar5,auStack_204);
        }
        else {
            iVar5 = (**(*0x26a4 + 0xc))(*0x26a4,1,auStack_204,&uStack_210,aiStack_20c,&iStack_21c);
            if (iVar5 < 0) {
                return iVar5;
            }
            iVar5 = fcn.000115db(noname_0_00,aiStack_20c[0]);
            if (iStack_21c != 0) {
                (**(*0x26a4 + 0x10))(*0x26a4,iStack_21c);
            }
        }
        if (iVar5 < 0) {
            return iVar5;
        }
        uVar4 = auStack_204[0] & 0x1f00;
        if (((uVar4 == 0x500) || ((auStack_204[0] & 0x1f00) == 0)) || (uVar4 == 0x700)) {
            *(param_1 + 0x2d) = *(param_1 + 0x2d) + 1;
            *(puVar6 + 6) = 1;
            *(puVar6 + 7) = 1;
            *(puVar6 + 0xb) = 0;
            *(puVar6 + 0x19) = 0;
            *(puVar6 + 0x13) = 0x800;
            *(puVar6 + 0x1b) = 0x800;
        }
    }
code_r0x000110f8:
    piVar1 = puVar6 + 0x43;
    *piVar1 = param_1 + 0x31;
    piVar2 = *(param_1 + 0x35);
    *(puVar6 + 0x47) = piVar2;
    *piVar2 = piVar1;
    *(param_1 + 0x35) = piVar1;
    iVar5 = fcn.0001081d();
    return iVar5;
}


/* fcn.00010904 @ 0x10904 */

int __fastcall fcn.00010904(int param_1,int param_2)

{
    int iVar1;
    int iVar2;
    
    if (param_2 != 0) {
        if (param_1 == 0) {
            iVar2 = 0;
        }
        else {
            iVar2 = fcn.000108c4();
            iVar2 = iVar2 + -4;
        }
        iVar1 = fcn.0001250b();
        if (iVar2 == 0) {
            iVar2 = iVar1;
        }
        else {
            fcn.00012523(iVar2);
            iVar2 = iVar2 + iVar1;
        }
        if (*(param_2 + 2) != 0) {
            fcn.00012523(*(param_2 + 2));
        }
        iVar2 = *(param_2 + 2) + iVar2 + *(param_2 + 3) * 0x100;
        if (iVar2 != 0x265c) {
            section..text(iVar2,0x265c,4);
        }
        return iVar1;
    }
    if (param_1 == 0) {
        param_1 = 0x265c;
    }
    if (param_1 == 0) {
        return 0;
    }
    iVar1 = fcn.000108c4();
    iVar2 = 0;
    if (iVar1 != 0) {
        iVar2 = fcn.0001250b();
        fcn.00012523(iVar1);
    }
    return iVar2;
}


/* fcn.000124ad @ 0x124ad */

//WARNING: Removing unreachable block (ram,0x000124c6)

uint32_t __cdecl fcn.000124ad(uint32_t arg_8h,uint32_t arg_ch)

{
    int32_t var_4h;
    
    return arg_ch;
}


/* fcn.00011af7 @ 0x11af7 */

int __fastcall fcn.00011af7(int *param_1,int param_2)

{
    uint32_t *puVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint extraout_ECX;
    
    iVar4 = *param_1;
    puVar1 = *(param_1 + 0x2f);
    iVar2 = *(iVar4 + 0x18);
    iVar3 = fcn.00011ef5();
    if (-1 < iVar3) {
        iVar3 = fcn.00011ea2();
        if (-1 < iVar3) {
            fcn.00011e4c(*(iVar4 + 0x18),*(iVar4 + 0x1c));
            fcn.00011c7f(puVar1,iVar2);
            fcn.00011d14(puVar1,iVar2);
            fcn.00011d40(puVar1,iVar2);
            *puVar1 = *puVar1 & 0xffffffbf;
            *(iVar2 + 1) = *(iVar2 + 1) | 0x80;
            iVar4 = fcn.00011de0();
            if (iVar4 < 0) {
                return iVar4;
            }
            iVar3 = fcn.00011b97(extraout_ECX);
            *(param_2 + 4) = puVar1[1];
        }
        fcn.00011ef5();
    }
    return iVar3;
}


/* fcn.00011ef5 @ 0x11ef5 */

int __fastcall fcn.00011ef5(uint *param_1,char param_2)

{
    uint32_t *puVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t arg_8h;
    uint32_t arg_ch;
    int iVar5;
    uint uVar6;
    uint extraout_ECX;
    int iVar7;
    int iVar8;
    ulong uVar9;
    
    uVar2 = *(param_1 + 1);
    uVar3 = *(param_1 + 0x37);
    uVar4 = *(param_1 + 0x3b);
    arg_8h = *(param_1 + 0x2f);
    arg_ch = *(param_1 + 0x33);
    iVar5 = **param_1;
    if (param_2 != '\0') {
        iVar8 = uVar2 * 0x80;
        iVar7 = (uVar2 + 2) * 0x80;
        uVar9 = fcn.00012486(*(iVar8 + 0x104 + iVar5),0);
        if (((uVar9 | *(iVar5 + iVar7)) != arg_8h) || (uVar9 >> 0x20 != arg_ch)) {
            uVar9 = fcn.00012486(*(iVar8 + 0x104 + iVar5),0);
            *0x26bc = uVar9 >> 0x20;
            *0x26b8 = uVar9 | *(iVar5 + iVar7);
            uVar9 = fcn.00012486(*(iVar8 + 0x10c + iVar5),0);
            *0x26b4 = uVar9 >> 0x20;
            *0x26b0 = uVar9 | *(iVar8 + 0x108 + iVar5);
            uVar6 = fcn.000124ad(arg_8h,arg_ch);
            *(iVar8 + 0x104 + iVar5) = uVar6;
            *(iVar5 + iVar7) = arg_8h;
            uVar6 = fcn.000124ad(uVar3,uVar4);
            *(iVar8 + 0x10c + iVar5) = uVar6;
            *(iVar8 + 0x108 + iVar5) = uVar3;
        }
    }
    iVar8 = uVar2 * 0x80;
    puVar1 = iVar8 + 0x118 + iVar5;
    *puVar1 = *puVar1 & 0xfffffffe;
    iVar7 = fcn.000120d9(0x18,0x8000,500);
    if ((-1 < iVar7) || (iVar7 = fcn.00012162(extraout_ECX,0,0), -1 < iVar7)) {
        puVar1 = iVar8 + 0x118 + iVar5;
        *puVar1 = *puVar1 & 0xffffffef;
        iVar7 = fcn.000120d9(0x18,0x4000,500);
        if (-1 < iVar7) {
            puVar1 = iVar8 + 0x130 + iVar5;
            *puVar1 = *puVar1 | 0x7ff0f03;
            puVar1 = iVar8 + 0x110 + iVar5;
            *puVar1 = *puVar1 | 0xffc000ff;
        }
    }
    if ((param_2 == '\0') && (*0x26b8 != 0 || *0x26bc != 0)) {
        uVar6 = fcn.000124ad(*0x26b8,*0x26bc);
        uVar4 = *0x26b4;
        *(iVar8 + 0x104 + iVar5) = uVar6;
        uVar3 = *0x26b0;
        *(iVar8 + 0x100 + iVar5) = *0x26b8;
        uVar6 = fcn.000124ad(uVar3,uVar4);
        *0x26b8 = 0;
        *0x26bc = 0;
        *(iVar8 + 0x10c + iVar5) = uVar6;
        *(iVar8 + 0x108 + iVar5) = *0x26b0;
    }
    return iVar7;
}


/* fcn.00011ea2 @ 0x11ea2 */

int __fastcall fcn.00011ea2(uint *param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    
    iVar3 = 0;
    if (((*(*(param_1 + 1) * 0x80 + 0x120 + **param_1) & 0x88) != 0) &&
       (uVar1 = *(*(param_1 + 1) * 0x80 + 300 + **param_1) & 0xff0, uVar2 = uVar1 >> 4,
       iVar3 = fcn.00012162(uVar2 & 0xffffff0f,uVar2 & 0xf,uVar1 >> 8), iVar3 < 0)) {
        return iVar3;
    }
    return iVar3;
}


/* fcn.00011e4c @ 0x11e4c */

uint __fastcall fcn.00011e4c(int param_1,uint32_t *param_2,uint32_t param_3,uint32_t param_4)

{
    uint32_t uVar1;
    
    fcn.00010260(param_2,0x20);
    *param_2 = *param_2 & 0xfffff47f;
    if (*(param_1 + 5) == 0xff) {
        uVar1 = 0;
    }
    else {
        uVar1 = *(param_1 + 5);
    }
    *param_2 = *param_2 ^ (uVar1 << 0xc ^ *param_2) & 0xf000;
    param_2[1] = 0;
    *(param_2 + 2) = 0;
    param_2[2] = param_3;
    uVar1 = fcn.000124ad(param_3,param_4);
    param_2[3] = uVar1;
    return 0;
}


/* fcn.00011c7f @ 0x11c7f */

uint __fastcall fcn.00011c7f(int param_1,int param_2,uint32_t *param_3,uchar *param_4)

{
    uint8_t uVar1;
    
    fcn.00010260(param_4,0x1080);
    *param_4 = 0x27;
    uVar1 = *(param_1 + 5);
    if (uVar1 == 0xff) {
        uVar1 = 0;
    }
    param_4[1] = param_4[1] ^ (param_4[1] ^ uVar1) & 0xf;
    param_4[2] = *(param_2 + 0x13);
    param_4[3] = *(param_2 + 8);
    param_4[0xb] = *(param_2 + 9);
    param_4[4] = *(param_2 + 0xc);
    param_4[8] = *(param_2 + 0xd);
    param_4[5] = *(param_2 + 0xe);
    param_4[9] = *(param_2 + 0xf);
    param_4[6] = *(param_2 + 0x10);
    param_4[10] = *(param_2 + 0x11);
    param_4[0xc] = *(param_2 + 10);
    param_4[0xd] = *(param_2 + 0xb);
    param_4[7] = *(param_2 + 0x12);
    param_4[0xf] = *(param_2 + 0x14);
    *param_3 = *param_3 & 0xffffffe5 | 5;
    return 0;
}


/* fcn.00011d14 @ 0x11d14 */

uint __fastcall fcn.00011d14(uint param_1,int param_2,uint32_t *param_3,int param_4)

{
    if (param_4 + 0x40 != param_2 + 0x15) {
        section..text(param_4 + 0x40,param_2 + 0x15,0x10);
    }
    if (*(param_4 + 2) == -0x60) {
        *param_3 = *param_3 | 0x20;
    }
    return 0;
}


/* fcn.00011d40 @ 0x11d40 */

uint __fastcall fcn.00011d40(int *param_1,uint32_t *param_2,int param_3,int param_4)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t *puVar4;
    uint16_t uVar5;
    
    iVar1 = *param_1;
    uVar5 = 0;
    puVar4 = param_4 + 0x80;
    uVar3 = param_2[1];
    while (uVar3 != 0) {
        *puVar4 = *param_2;
        uVar2 = fcn.000124ad(*param_2,0);
        puVar4[1] = uVar2;
        uVar2 = 0x3fffff;
        if (uVar3 < 0x400000) {
            uVar2 = uVar3 - 1;
        }
        uVar5 = uVar5 + 0x10;
        uVar2 = (puVar4[3] ^ uVar2) & 0x3fffff ^ puVar4[3];
        puVar4[3] = uVar2 & 0x7fffffff;
        uVar3 = uVar3 + (-1 - (uVar2 & 0x3fffff));
        if (*(iVar1 + 0x20) <= uVar5 + 0x80) break;
        *param_2 = *param_2 + (uVar2 & 0x3fffff) + 1;
        puVar4 = puVar4 + 4;
    }
    puVar4[-1] = puVar4[-1] | 0x80000000;
    *(param_3 + 2) = uVar5 >> 4;
    return 0;
}


/* fcn.00011de0 @ 0x11de0 */

int __fastcall fcn.00011de0(uint *param_1)

{
    uint32_t *puVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    iVar4 = *(param_1 + 1) * 0x80;
    iVar2 = **param_1;
    puVar1 = iVar4 + 0x130 + iVar2;
    *puVar1 = *puVar1 | 0x7ff0f03;
    puVar1 = iVar4 + 0x110 + iVar2;
    *puVar1 = *puVar1 | 0xffc000ff;
    puVar1 = iVar4 + 0x118 + iVar2;
    *puVar1 = *puVar1 | 0x10;
    iVar3 = fcn.0001211c(param_1,0x4000,0x4000,param_1);
    if (-1 < iVar3) {
        fcn.00010260(*(param_1 + 0x37),0x100);
        puVar1 = iVar4 + 0x118 + iVar2;
        *puVar1 = *puVar1 | 1;
        puVar1 = iVar4 + 0x138 + iVar2;
        *puVar1 = *puVar1 | 1;
        iVar3 = 0;
    }
    return iVar3;
}


/* fcn.0001211c @ 0x1211c */

uint __fastcall fcn.0001211c(int param_1,uint8_t param_2,uint param_3,uint32_t param_4,uint32_t param_5)

{
    char cVar1;
    int iVar2;
    
    iVar2 = 500;
    do {
        cVar1 = '\n';
        do {
            if ((*(param_2 * 0x80 + 0x118 + param_1) & param_4) == param_5) {
                return 0;
            }
            fcn.00012593();
            cVar1 = cVar1 + -1;
        } while (cVar1 != '\0');
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return 0x80000007;
}


/* fcn.00011b97 @ 0x11b97 */

uint32_t __fastcall fcn.00011b97(uint *param_1)

{
    uint32_t *puVar1;
    int iVar2;
    int iVar3;
    bool bVar4;
    uint32_t uVar5;
    int iVar6;
    
    iVar2 = *(param_1 + 0x37);
    iVar3 = **param_1;
    uVar5 = 0;
    bVar4 = false;
    iVar6 = *(param_1 + 1) * 0x80;
    do {
        if (((*(iVar6 + 0x130 + iVar3) & 0x7fa0f00) != 0) || ((*(iVar6 + 0x110 + iVar3) & 0xf9800050) != 0)) {
            puVar1 = iVar6 + 0x130 + iVar3;
            *puVar1 = *puVar1 | 0x7ff0f03;
            puVar1 = iVar6 + 0x110 + iVar3;
            *puVar1 = *puVar1 | 0xffc000ff;
            goto code_r0x00011c73;
        }
        if (*(iVar2 + 0x20) == '_') {
            *(iVar2 + 0x20) = 0;
            bVar4 = true;
        }
        if ((*(iVar2 + 0x40) == '4') || ((bVar4 && ((*(iVar6 + 0x120 + iVar3) & 0x88) == 0)))) break;
        uVar5 = uVar5 + 1;
        fcn.00012593();
    } while (uVar5 < 60000);
    fcn.000120d9(0x38,0xffff,200);
    if (*(iVar6 + 0x138 + iVar3) == 0) {
        uVar5 = -((*(iVar6 + 0x120 + iVar3) & 9) != 0) & 0x80000007;
    }
    else {
code_r0x00011c73:
        uVar5 = 0x80000007;
    }
    return uVar5;
}


/* fcn.000114d9 @ 0x114d9 */

int __fastcall fcn.000114d9(int *param_1,int param_2)

{
    uint8_t uVar1;
    int *piVar2;
    uint32_t *puVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    uint extraout_ECX;
    
    piVar2 = *param_1;
    puVar3 = *(param_1 + 0x2f);
    iVar6 = piVar2[6];
    iVar4 = *piVar2;
    uVar1 = *(param_1 + 1);
    *(param_2 + 0xe) = *(param_2 + 4);
    *(param_2 + 0x10) = *(param_2 + 4) >> 8;
    *(param_2 + 0x13) = 0xa0;
    iVar5 = fcn.00011ef5();
    if (iVar5 < 0) {
        return iVar5;
    }
    iVar5 = fcn.00011ea2();
    if (-1 < iVar5) {
        fcn.00011e4c(piVar2[6],piVar2[7]);
        fcn.00011c7f(puVar3,iVar6);
        fcn.00011d14(puVar3,iVar6);
        fcn.00011d40(puVar3,iVar6);
        *puVar3 = *puVar3 & 0xffffffbf;
        *(iVar6 + 1) = *(iVar6 + 1) | 0x80;
        iVar6 = fcn.00011de0();
        if (iVar6 < 0) {
            return iVar6;
        }
        iVar5 = fcn.00011b97(extraout_ECX);
        if (((iVar5 < 0) && (param_1[10] == 1)) && ((*(uVar1 * 0x80 + 0x120 + iVar4) & 1) != 0)) {
            iVar6 = fcn.00011382();
            return iVar6;
        }
        *(param_1 + 0x2e) = 0;
        *(param_2 + 4) = puVar3[1];
    }
    fcn.00011ef5();
    return iVar5;
}


/* fcn.0001111f @ 0x1111f */

int __fastcall fcn.0001111f(int param_1)

{
    int iVar1;
    uint extraout_ECX;
    uint16_t uVar2;
    uint uVar3;
    int32_t var_28h;
    int32_t var_24h;
    int8_t var_13h;
    int8_t var_12h;
    
    uVar3 = 0x25;
    fcn.00010260(&var_28h,0x25);
    uVar2 = 0;
    var_12h = *(param_1 + 0x2d) << 5;
    var_13h = 0;
    var_28h = 0;
    var_24h = 0x100;
    do {
        iVar1 = fcn.000114d9(uVar3);
        if (iVar1 == 0) {
            return 0;
        }
        if (*(param_1 + 0x2e) == '\x01') {
            return iVar1;
        }
        if (*(param_1 + 0x2e) == '\x03') {
            return iVar1;
        }
        fcn.00012593();
        uVar2 = uVar2 + 1;
        uVar3 = extraout_ECX;
    } while (uVar2 < 1000);
    return iVar1;
}


/* fcn.00011630 @ 0x11630 */

int __fastcall fcn.00011630(int *param_1,uint8_t param_2)

{
    uint32_t *puVar1;
    int iVar2;
    int *piVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int8_t var_1h;
    
    uVar5 = param_2;
    puVar1 = *param_1;
    puVar1[uVar5 * 0x20 + 0x4b] = puVar1[uVar5 * 0x20 + 0x4b] | 0x300;
    puVar1[uVar5 * 0x20 + 0x4c] = puVar1[uVar5 * 0x20 + 0x4c] | 0x7ff0f03;
    puVar1[uVar5 * 0x20 + 0x44] = puVar1[uVar5 * 0x20 + 0x44] | 0xffc000ff;
    piVar3 = param_1;
    if ((*puVar1 & 0x8000000) != 0) {
        if ((*(uVar5 * 0x80 + 0x128 + *param_1) & 0xf) == 3) {
            puVar1[uVar5 * 0x20 + 0x46] = puVar1[uVar5 * 0x20 + 0x46] | 2;
        }
        else {
            puVar1[uVar5 * 0x20 + 0x46] = puVar1[uVar5 * 0x20 + 0x46] | 0x10;
            fcn.0001211c(param_1,0x4000,0x4000,param_1);
            puVar1[uVar5 * 0x20 + 0x46] = puVar1[uVar5 * 0x20 + 0x46] | 2;
            iVar2 = fcn.0001226e();
            puVar1[uVar5 * 0x20 + 0x46] = puVar1[uVar5 * 0x20 + 0x46] & 0xffffffef;
            if (iVar2 < 0) {
                return -0x7ffffff9;
            }
        }
    }
    if (((puVar1[uVar5 * 0x20 + 0x4a] & 0xf) == 3) && ((puVar1[uVar5 * 0x20 + 0x46] & 0x100000) != 0)) {
        puVar1[uVar5 * 0x20 + 0x46] = puVar1[uVar5 * 0x20 + 0x46] | 4;
    }
    iVar2 = fcn.00011730(piVar3);
    if (iVar2 < 0) {
        uVar4 = (param_1[uVar5 * 0x20 + 0x4b] & 0xff0U) >> 4;
        iVar2 = fcn.00012162(uVar4 & 0xffffff0f,uVar4 & 0xf,(param_1[uVar5 * 0x20 + 0x4b] & 0xff0U) >> 8);
    }
    return iVar2;
}


/* fcn.00012486 @ 0x12486 */

//WARNING: Removing unreachable block (ram,0x0001249f)

int64_t __cdecl fcn.00012486(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_4h;
    
    return arg_8h << 0x20;
}


/* fcn.000115db @ 0x115db */

uint __cdecl fcn.000115db(uint noname_0,int32_t arg_ch)

{
    uint uVar1;
    int in_ECX;
    int32_t var_28h;
    uint32_t var_24h;
    int8_t var_16h;
    int8_t var_15h;
    
    fcn.00010260(&var_28h,0x25);
    var_28h = arg_ch;
    var_24h = 0x200;
    var_16h = 0;
    var_15h = ((*(in_ECX + 0x28) != 0) - 1U & 0x4b) + 0xa1;
    uVar1 = fcn.00011af7();
    if (var_24h != 0x200) {
        uVar1 = 0x80000007;
    }
    return uVar1;
}


/* fcn.0001081d @ 0x1081d */

uint __fastcall fcn.0001081d(int param_1)

{
    uint uVar1;
    int32_t var_ch;
    int16_t var_8h;
    int16_t var_6h;
    int16_t var_4h;
    
    uVar1 = fcn.00010904();
    *(param_1 + 0x3f) = uVar1;
    return 0;
}


/* fcn.00012593 @ 0x12593 */

uint __fastcall fcn.00012593(uint param_1)

{
    int32_t var_8h;
    int var_4h;
    
    fcn.0001254a();
    return param_1;
}


/* fcn.0001254a @ 0x1254a */

void __fastcall fcn.0001254a(uint32_t param_1)

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


/* fcn.00012539 @ 0x12539 */

uint __fastcall fcn.00012539(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.00010260(param_1,param_2);
    return uVar1;
}


/* fcn.00011382 @ 0x11382 */

int __fastcall fcn.00011382(uint *param_1)

{
    uint8_t uVar1;
    int iVar2;
    int iVar3;
    uint8_t uVar4;
    int aiStack_138 [2];
    char *apcStack_130 [2];
    char *pcStack_128;
    uint uStack_124;
    uchar uStack_113;
    uchar uStack_10f;
    char acStack_100 [2];
    uint8_t uStack_fe;
    char cStack_f4;
    char cStack_f3;
    
    uVar4 = 0;
    iVar2 = **param_1;
    uVar1 = *(param_1 + 1);
    aiStack_138[0] = 0;
    aiStack_138[1] = 0x100;
    *(param_1 + 0x2e) = 4;
    fcn.00010260(acStack_100,0x100);
    fcn.00010260(&pcStack_128,0x25);
    pcStack_128 = acStack_100;
    uStack_113 = 3;
    uStack_10f = 0xff;
    uStack_124 = 0x100;
    if (*0x26a4 != 0) {
        iVar3 = (**(*0x26a4 + 0xc))(*0x26a4,1,acStack_100,aiStack_138 + 1,apcStack_130,aiStack_138);
        if (iVar3 < 0) {
            return iVar3;
        }
        pcStack_128 = apcStack_130[0];
    }
    iVar3 = fcn.000114d9(0);
    if (aiStack_138[0] != 0) {
        (**(*0x26a4 + 0x10))(*0x26a4,aiStack_138[0]);
    }
    if (iVar3 < 0) {
        uVar4 = *(uVar1 * 0x80 + 0x120 + iVar2);
    }
    if (((uVar4 & 0x21) == 0) && (-1 < iVar3)) {
        iVar3 = -0x7ffffff9;
        uStack_fe = uStack_fe & 0xf;
        *(param_1 + 0x2e) = 4;
        if ((uStack_fe == 2) && (cStack_f4 == ':')) {
            iVar3 = -0x7ffffff4;
            *(param_1 + 0x2e) = 1;
        }
        if (((uStack_fe == 2) && (cStack_f4 == '\x04')) && (cStack_f3 == '\x01')) {
            iVar3 = -0x7ffffff3;
            *(param_1 + 0x2e) = 2;
        }
        if ((uStack_fe == 6) && (cStack_f4 == '(')) {
            iVar3 = -0x7ffffff3;
            *(param_1 + 0x2e) = 3;
        }
        if ((uStack_fe == 7) && (cStack_f4 == '\'')) {
            iVar3 = -0x7ffffff8;
            *(param_1 + 0x2e) = 5;
        }
        if ((uStack_fe == 6) && (cStack_f4 == ')')) {
            *(param_1 + 0x2e) = 6;
        }
        if ((uStack_fe == 5) && (acStack_100[0] == 'p')) {
            *(param_1 + 0x2e) = 7;
        }
    }
    return iVar3;
}


/* fcn.0001226e @ 0x1226e */

uint32_t __fastcall fcn.0001226e(int *param_1,uint32_t param_2)

{
    uint32_t *puVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    int iVar5;
    uint32_t uStack_c;
    uint32_t uStack_8;
    uint32_t uStack_4;
    
    iVar2 = *param_1;
    uStack_4 = 0;
    uStack_c = 0;
    iVar5 = ((param_2 & 0xff) + 2) * 0x80;
    while ((uVar3 = *(iVar5 + 0x28 + *param_1) & 0xf, uVar3 != 3 && (uVar3 != 1))) {
        fcn.00012593();
        uStack_c = uStack_c + 1;
        if (9 < uStack_c) {
            return 0x80000007;
        }
    }
    uStack_c = 0;
    do {
        if ((*(iVar5 + 0x28 + *param_1) & 0xf) == 0) {
            return 0x80000007;
        }
        if ((*(iVar5 + 0x30 + *param_1) & 0x4000000) != 0) break;
        fcn.00012593();
        uStack_c = uStack_c + 1;
    } while (uStack_c < 30000);
    iVar4 = (param_2 & 0xff) * 0x80;
    uVar3 = fcn.00012486(*(iVar2 + 0x10c + iVar4),0);
    uStack_8 = 0;
    uVar3 = *(iVar2 + 0x108 + iVar4) | uVar3;
    do {
        if ((*(iVar5 + 0x30 + *param_1) & 0x7fa0f00) != 0) {
            *(iVar5 + 0x30 + *param_1) = *(iVar5 + 0x30 + *param_1) | 0x7ff0f03;
        }
        if (*(uVar3 + 0x40) == '4') break;
        fcn.00012593();
        uStack_8 = uStack_8 + 1;
    } while (uStack_8 < 30000);
    do {
        *(iVar5 + 0x30 + *param_1) = *(iVar5 + 0x30 + *param_1) | 0x7ff0f03;
        if ((*(uVar3 + 0x42) & 0x89) == (*(iVar2 + 0x120 + iVar4) & 0x89)) break;
        fcn.00012593();
        uStack_4 = uStack_4 + 1;
    } while (uStack_4 < 100);
    uVar3 = -((*(uVar3 + 0x42) & 0x81) != 0) & 0x80000007;
    if ((*(iVar2 + 0x110 + iVar4) & 0x7c000000) != 0) {
        uVar3 = 0x80000007;
    }
    *(iVar5 + 0x30 + *param_1) = *(iVar5 + 0x30 + *param_1) | 0x7ff0f03;
    puVar1 = iVar2 + 0x110 + iVar4;
    *puVar1 = *puVar1 | 0xffc000ff;
    return uVar3;
}


/* fcn.00011730 @ 0x11730 */

uint32_t __fastcall fcn.00011730(int *param_1,uint8_t param_2)

{
    uint32_t *puVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    uint extraout_ECX;
    int iVar5;
    
    iVar2 = *param_1;
    iVar3 = param_1[9];
    iVar5 = param_2 * 0x80;
    if ((*(iVar5 + 0x128 + iVar2) & 0xf) == 3) {
        *(iVar5 + 0x138 + iVar2) = 0;
        *(iVar3 + 0x40) = 0;
        puVar1 = iVar5 + 0x118 + iVar2;
        *puVar1 = *puVar1 | 0x11;
        uVar4 = fcn.0001211c(iVar3,0x4000,0x4000,iVar3);
        if (uVar4 < 0) {
            return uVar4;
        }
        uVar4 = fcn.0001211c(extraout_ECX,0x8000,0x8000,extraout_ECX);
        if (uVar4 < 0) {
            return uVar4;
        }
        uVar4 = 0;
        do {
            if ((*(iVar5 + 0x124 + iVar2) == 0x101) || (*(iVar3 + 0x40) == '4')) break;
            fcn.00012593();
            uVar4 = uVar4 + 1;
        } while (uVar4 < 30000);
        puVar1 = iVar5 + 0x118 + iVar2;
        *puVar1 = *puVar1 & 0xfffffffe;
        uVar4 = fcn.000120d9(0x18,0x8000,500);
        if (uVar4 < 0) {
            return uVar4;
        }
        puVar1 = iVar5 + 0x118 + iVar2;
        *puVar1 = *puVar1 & 0xffffffef;
        uVar4 = fcn.000120d9(0x18,0x4000,500);
        if (uVar4 < 0) {
            return uVar4;
        }
        iVar3 = *(iVar5 + 0x124 + iVar2);
        if (((iVar3 == 0x101) || (iVar3 == -0x14ebfeff)) || (iVar3 == -0x6996feff)) {
            return -((*(iVar5 + 0x120 + iVar2) & 0x88) != 0) & 0x80000007;
        }
    }
    return 0x80000007;
}


/* fcn.00012162 @ 0x12162 */

int __fastcall fcn.00012162(int *param_1,uint8_t param_2,uint param_3,uint8_t param_4,uint8_t param_5)

{
    uint32_t *puVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint extraout_ECX;
    uint extraout_ECX_00;
    int iVar5;
    
    iVar5 = param_2 * 0x80;
    iVar2 = *param_1;
    iVar4 = *(iVar5 + 0x108 + iVar2);
    if (iVar4 == 0) {
code_r0x00012184:
        iVar2 = -0x7ffffff9;
    }
    else {
        if (*0x26ac == '\0') {
            *0x26ac = 1;
            puVar1 = iVar5 + 0x118 + iVar2;
            *puVar1 = *puVar1 & 0xfffffffe;
            iVar3 = fcn.000120d9(0x18,0x8000,500);
            if (iVar3 < 0) {
                return iVar3;
            }
            puVar1 = iVar5 + 0x130 + iVar2;
            *puVar1 = *puVar1 | 0x7ff0f03;
            puVar1 = iVar5 + 0x110 + iVar2;
            *puVar1 = *puVar1 | 0xffc000ff;
            puVar1 = iVar5 + 0x118 + iVar2;
            *puVar1 = *puVar1 | 0x10;
            iVar3 = fcn.0001211c(extraout_ECX,0x4000,0x4000,extraout_ECX);
            if (iVar3 < 0) {
                return iVar3;
            }
            *(iVar4 + 0x40) = 0;
            *(iVar5 + 300 + iVar2) = (param_5 * 0x10 + param_4) * 0x10 + 1 | *(iVar5 + 300 + iVar2) & 0xfffff000;
            fcn.00012593();
            puVar1 = iVar5 + 300 + iVar2;
            *puVar1 = *puVar1 & 0xfffffff0;
            iVar4 = fcn.0001226e(extraout_ECX_00);
            puVar1 = iVar5 + 0x118 + iVar2;
            *puVar1 = *puVar1 & 0xffffffef;
            *0x26ac = '\0';
            if (iVar4 < 0) goto code_r0x00012184;
        }
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.000120d9 @ 0x120d9 */

uint __fastcall fcn.000120d9(int param_1,uint8_t param_2,uint8_t param_3,uint32_t param_4,int param_5)

{
    char cVar1;
    
    do {
        cVar1 = '\n';
        do {
            if ((param_4 & *((param_2 + 2) * 0x80 + param_1 + param_3)) == 0) {
                return 0;
            }
            fcn.00012593();
            cVar1 = cVar1 + -1;
        } while (cVar1 != '\0');
        param_5 = param_5 + -1;
    } while (param_5 != 0);
    return 0x80000007;
}


/* fcn.0001245b @ 0x1245b */

void __cdecl fcn.0001245b(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x48))(*(stack0xfffffff2 + -4),4);
    return;
}


