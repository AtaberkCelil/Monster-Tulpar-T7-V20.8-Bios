// decompiled by r2ghidra: 2118_Recovery.pe32
// functions: 23

/* entry0 @ 0x10300 */

void entry0(uint param_1,int *param_2)

{
    (**(*param_2 + 0x18))(param_2,0x1450);
    return;
}


/* fcn.00011027 @ 0x11027 */

int __fastcall fcn.00011027(int *param_1,uint32_t *param_2,uint32_t *param_3,uint *param_4)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    bool bVar6;
    uint32_t uStack_28;
    uint32_t *puStack_24;
    uchar auStack_20 [4];
    uchar auStack_1c [16];
    uint uStack_c;
    int *piStack_8;
    
    *0x15b0 = param_1;
    puStack_24 = param_2;
    (**(*param_1 + 0x28))(param_1,auStack_20);
    if ((((param_2 != NULL) && (*param_2 != 0)) && (param_3 != NULL)) && (param_4 != NULL)) {
        *param_4 = 1;
        iVar2 = (**(*param_1 + 0x20))(param_1,0x1430,0,0,0x156c);
        if (iVar2 < 0) {
            return iVar2;
        }
        uVar5 = *param_2;
        uStack_28 = uVar5;
        iVar2 = fcn.00011176(0x10);
        if (iVar2 == 0) {
            uVar4 = *(uVar5 + 0x1c) + uVar5;
            bVar6 = uVar4 < uVar5;
            uVar3 = uVar5;
            uVar5 = uVar4;
            if (bVar6) {
                return -0x7fffffe6;
            }
        }
        else {
            iVar2 = fcn.00010af5(&uStack_28);
            if (iVar2 < 0) {
                return -0x7fffffe6;
            }
            uVar3 = uStack_28;
        }
        cVar1 = fcn.00010a78();
        if ((cVar1 != '\0') && (uVar3 = *(uVar3 + 0x18) - *(uVar3 + 0x1c), uVar3 <= *param_3)) {
            uStack_c = 0;
            piStack_8 = NULL;
            *puStack_24 = uVar5;
            *param_3 = uVar3;
            *param_4 = 3;
            iVar2 = (**(*0x156c + 0xc))(*0x156c,0x1400,auStack_1c);
            if ((iVar2 < 0) || (*piStack_8 == 0x44414224)) {
                return 0;
            }
            iVar2 = fcn.00011176(0x10);
            if (iVar2 == 0) {
                iVar2 = fcn.00010d1e(uVar3,auStack_1c);
            }
            else {
                iVar2 = fcn.00010e67(uVar3,param_4);
            }
            if (-1 < iVar2) {
                iVar2 = fcn.000109cd(param_4);
                return iVar2;
            }
            return iVar2;
        }
    }
    return -0x7fffffe6;
}


/* fcn.00010970 @ 0x10970 */

uint32_t __fastcall fcn.00010970(uint32_t param_1,uint param_2)

{
    uint32_t uVar1;
    int32_t var_ch;
    int32_t var_4h;
    
    uVar1 = param_1 & 0xff;
    if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
        var_4h = &var_ch;
        InterruptDescriptorTableRegister();
        uVar1 = (**(**(stack0xfffffff2 + -4) + 0x58))(*(stack0xfffffff2 + -4),param_1,param_2,0,0x1420,0);
        uVar1 = uVar1 & -(uVar1 != 0xa0000002);
    }
    else {
        uVar1 = 0x80000003;
    }
    return uVar1;
}


/* fcn.0001086b @ 0x1086b */

uint32_t __fastcall fcn.0001086b(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00010312 @ 0x10312 */

int __fastcall fcn.00010312(int *param_1,int param_2,uint param_3,uint32_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    bool bVar4;
    int *piStack_4;
    
    uVar1 = param_4;
    piStack_4 = param_1;
    if (*0x1550 < param_4) {
        iVar3 = (**(*param_1 + 0x48))(param_1,6,(param_4 >> 0xc) + 1,0x1558);
        if (iVar3 < 0) {
            return iVar3;
        }
        *0x1550 = uVar1;
    }
    iVar3 = (**(param_2 + 8))(param_1,param_2,param_3,*0x1558);
    if (-1 < iVar3) {
        uVar1 = *(*0x15b4 + 0x25);
        if (uVar1 == 0) {
            *(*0x15b4 + 0x25) = *0x1550;
        }
        else if (0x1004000 < uVar1) {
            bVar4 = CARRY4(*0x1558,uVar1 - 0x1000000);
            *0x1558 = *0x1558 + (uVar1 - 0x1000000);
            *0x155c = *0x155c + bVar4;
        }
        iVar3 = *0x15b4;
        *(*0x15b4 + 0x29) = *0x1558;
        *(iVar3 + 0x2d) = *0x155c;
        iVar3 = fcn.00011027(&param_4,&piStack_4);
        iVar2 = *0x15b4;
        *(*0x15b4 + 0x18) = *0x1558;
        *(iVar2 + 0x1c) = *0x155c;
        *(*0x15b4 + 0x21) = piStack_4;
        *(*0x15b4 + 0x20) = iVar3;
        if (iVar3 < 0) {
            fcn.00010970();
        }
    }
    return iVar3;
}


/* fcn.0001088f @ 0x1088f */

int32_t fcn.0001088f(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.000108ba @ 0x108ba */

int16_t * __fastcall fcn.000108ba(int16_t param_1,int16_t *param_2)

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


/* fcn.00010849 @ 0x10849 */

uint * __fastcall fcn.00010849(uint *param_1)

{
    *param_1 = *0x1360;
    param_1[1] = *0x1364;
    param_1[2] = *0x1368;
    param_1[3] = *0x136c;
    return param_1;
}


/* fcn.00010705 @ 0x10705 */

int __cdecl fcn.00010705(int32_t arg_18h,int32_t arg_1ch,int8_t arg_20h)

{
    int iVar1;
    char cVar2;
    int iVar3;
    int *in_ECX;
    int extraout_ECX;
    int iVar4;
    uint32_t uVar5;
    int iStack_c;
    int iStack_8;
    uchar auStack_4 [4];
    
    iVar1 = *0x15b4;
    iVar3 = fcn.0001088f();
    while ((iVar3 != 0 && (iVar3 = fcn.000108ba(), iVar3 != 0))) {
        uVar5 = 0;
        do {
            cVar2 = fcn.0001086b();
            if (cVar2 != '\0') {
                iVar3 = *(iVar3 + 0x10);
                goto code_r0x0001079a;
            }
            uVar5 = uVar5 + 0x10;
        } while (uVar5 < 0x20);
        iVar3 = iVar3 + *(iVar3 + 2);
    }
    iVar3 = fcn.0001062f(auStack_4,&iStack_8);
    if (iVar3 < 0) {
        (**(*in_ECX + 0x58))();
    }
    else {
        iVar3 = iStack_8;
code_r0x0001079a:
        uVar5 = 0;
        do {
            cVar2 = fcn.0001086b();
            if (cVar2 != '\0') {
                iVar4 = extraout_ECX + *(extraout_ECX + 0x10);
                iVar3 = iVar3 - *(extraout_ECX + 0x10);
                break;
            }
            uVar5 = uVar5 + 0x10;
            iVar4 = extraout_ECX;
        } while (uVar5 < 0x50);
        *(iVar1 + 0x29) = iVar4;
        *(iVar1 + 0x2d) = 0;
        iStack_c = iVar3;
        iVar3 = fcn.00011027(&iStack_c,iVar1 + 0x21);
        *(iVar1 + 0x18) = iVar4;
        *(iVar1 + 0x1c) = 0;
        *(iVar1 + 0x20) = iVar3;
        *(iVar1 + 0x25) = iStack_c;
        (**(*in_ECX + 0x58))();
    }
    return iVar3;
}


/* fcn.00010415 @ 0x10415 */

int __fastcall fcn.00010415(int *param_1,int param_2)

{
    bool bVar1;
    char cVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uint *puStack_28;
    uint32_t uStack_24;
    int iStack_20;
    uint uStack_1c;
    uchar auStack_18 [4];
    uchar auStack_14 [20];
    
    bVar1 = false;
    iVar4 = 0;
    iStack_20 = param_2;
    do {
        iVar3 = (**(*param_1 + 0x20))(param_1,0x1440,iVar4,auStack_18,&puStack_28);
        iVar4 = iVar4 + 1;
        if (iVar3 < 0) {
            return iVar3;
        }
        iVar3 = (**puStack_28)(param_1,puStack_28,&uStack_24);
        if ((-1 < iVar3) && (uVar5 = 0, uStack_24 != 0)) {
            do {
                iVar3 = (*puStack_28[1])(param_1,puStack_28,uVar5,&uStack_1c,auStack_14);
                if ((-1 < iVar3) &&
                   (((iStack_20 == 0 || (cVar2 = fcn.0001086b(), cVar2 != '\0')) &&
                    (iVar3 = fcn.00010312(uVar5,uStack_1c), -1 < iVar3)))) {
                    bVar1 = true;
                    fcn.00010970();
                    break;
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < uStack_24);
        }
        if (bVar1) {
            return iVar3;
        }
    } while( true );
}


/* fcn.00010915 @ 0x10915 */

void __cdecl fcn.00010915(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4),0x1440);
    return;
}


/* fcn.00010827 @ 0x10827 */

int32_t __fastcall fcn.00010827(uint param_1,int param_2)

{
    int iVar1;
    int32_t var_8h;
    
    if ((param_2 != 0) && (iVar1 = fcn.00010945(&var_8h), -1 < iVar1)) {
        return var_8h;
    }
    return 0;
}


/* fcn.000108dd @ 0x108dd */

int32_t fcn.000108dd(void)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffee + -4) + 0x34))(*(stack0xffffffee + -4),0xb,0x18,&var_8h);
    if (iVar1 < 0) {
        var_8h = 0;
    }
    return var_8h;
}


/* fcn.0001062f @ 0x1062f */

int __fastcall fcn.0001062f(uint param_1,int param_2,int *param_3,uint *param_4)

{
    char cVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    uint extraout_ECX;
    uint extraout_ECX_00;
    uint extraout_ECX_01;
    int iStack_20;
    uint uStack_1c;
    int iStack_18;
    uchar auStack_14 [20];
    
    uVar5 = param_1;
    iStack_18 = param_2;
    while( true ) {
        do {
            iVar2 = fcn.00010915(uVar5,&iStack_20);
            if (iVar2 < 0) {
                return iVar2;
            }
            iVar2 = (**(iStack_20 + 4))(param_1,iStack_20,0,&uStack_1c,auStack_14);
            uVar5 = extraout_ECX;
        } while ((iVar2 < 0) || (cVar1 = fcn.0001086b(), uVar5 = extraout_ECX_00, cVar1 == '\0'));
        iVar2 = fcn.00010827();
        if (iVar2 == 0) break;
        iVar3 = (**(iStack_20 + 8))(param_1,iStack_20,0,iVar2);
        uVar5 = extraout_ECX_01;
        if (-1 < iVar3) {
            *param_3 = iVar2;
            *(iStack_18 + 0x1c) = 0;
            uVar5 = *(iStack_18 + 0x1c);
            *(iStack_18 + 0x18) = iVar2;
            *(iStack_18 + 0x25) = uStack_1c;
            *param_4 = uStack_1c;
            iVar4 = fcn.000108dd();
            if (iVar4 != 0) {
                *(iVar4 + 0x14) = 0;
                *(iVar4 + 8) = iVar2;
                *(iVar4 + 0xc) = uVar5;
                *(iVar4 + 0x10) = uStack_1c;
            }
            return iVar3;
        }
    }
    return -0x7ffffff7;
}


/* fcn.00010945 @ 0x10945 */

void __cdecl fcn.00010945(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x48))(*(stack0xfffffff2 + -4),6);
    return;
}


/* fcn.00011176 @ 0x11176 */

int __fastcall fcn.00011176(int *param_1,int *param_2,int param_3)

{
    int iVar1;
    uint32_t uVar2;
    int *piVar3;
    
    piVar3 = param_3 + param_1;
    uVar2 = param_1 & 3;
    if ((uVar2 != 0) && (uVar2 == (param_2 & 3))) {
        iVar1 = 4 - uVar2;
        for (; (iVar1 != 0 && (*param_1 == *param_2)); param_1 = param_1 + 1) {
            param_2 = param_2 + 1;
            iVar1 = iVar1 + -1;
        }
    }
    for (; (param_1 <= piVar3 + -1 && (*param_1 == *param_2)); param_1 = param_1 + 1) {
        param_2 = param_2 + 1;
    }
    while( true ) {
        if (piVar3 <= param_1) {
            return 0;
        }
        if (*param_1 != *param_2) break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
    }
    return *param_1 - *param_2;
}


/* fcn.00011240 @ 0x11240 */

int32_t __cdecl fcn.00011240(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

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


/* fcn.00010b79 @ 0x10b79 */

int __fastcall fcn.00010b79(int param_1,int param_2,uint32_t param_3,uint param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    int iVar7;
    uint32_t *puVar8;
    uint32_t uVar9;
    uint32_t uStack_10;
    
    iVar5 = 0;
    iVar4 = *(param_1 + 0x1e) + param_1;
    uVar9 = 0;
    uVar2 = (*(param_1 + 0x1c) - *(param_1 + 0x1e)) / 0x18;
    if (uVar2 != 0) {
        puVar8 = iVar4 + 0x14;
        do {
            if (puVar8[-2] == 0) break;
            if ((*puVar8 & 0x200) != 0) {
                iVar5 = iVar5 + 1;
            }
            uVar9 = uVar9 + 1;
            puVar8 = puVar8 + 6;
        } while (uVar9 < uVar2);
        if (iVar5 != 0) {
            uVar2 = iVar5 + 2;
            if (((*0x1564 == 0) || (*0x1560 == 0)) || (*0x1560 < uVar2)) {
                *0x1560 = uVar2;
                iVar5 = (**(**0x15b0 + 0x4c))(*0x15b0,uVar2 * 8,0x1564);
                if (iVar5 < 0) {
                    return iVar5;
                }
                *0x1568 = *0x1564 + uVar2 * 4;
            }
            iVar5 = *0x1568;
            uVar6 = 0;
            uStack_10 = 0;
            uVar3 = 0;
            iVar7 = *0x1564;
            uVar2 = *0x1560;
            if (uVar9 != 0) {
                puVar8 = iVar4 + 8;
                do {
                    if (uVar2 <= uVar6) {
                        return -0x7fffffe6;
                    }
                    uVar1 = puVar8[1];
                    uVar3 = uStack_10;
                    uVar2 = *0x1560;
                    if (uVar1 == 0) break;
                    if ((puVar8[3] & 0x200) != 0) {
                        if (param_3 < *puVar8) {
                            return -0x7fffffe6;
                        }
                        uVar2 = *puVar8;
                        if (CARRY4(uVar1,uVar2)) {
                            return -0x7fffffe6;
                        }
                        if (param_3 < uVar1 + uVar2) {
                            return -0x7fffffe6;
                        }
                        *(iVar7 + uVar6 * 4) = uVar2 + param_2;
                        uVar2 = *0x1560;
                        *(iVar5 + uVar6 * 4) = puVar8[1];
                        uVar6 = uVar6 + 1;
                        iVar7 = *0x1564;
                    }
                    uVar3 = uStack_10 + 1;
                    puVar8 = puVar8 + 6;
                    uStack_10 = uVar3;
                } while (uVar3 < uVar9);
            }
            if (uVar6 < uVar2) {
                if ((*(param_1 + 0x14) & 2) != 0) {
                    *(iVar7 + uVar6 * 4) = param_1;
                    *(iVar5 + uVar6 * 4) = 0x38;
                    uVar6 = uVar6 + 1;
                    if (uVar2 <= uVar6) {
                        return -0x7fffffe6;
                    }
                    iVar7 = *0x1564;
                }
                *(iVar7 + uVar6 * 4) = iVar4;
                *(iVar5 + uVar6 * 4) = (uVar3 + 1) * 0x18;
                iVar4 = (***0x156c)(*0x156c,param_4,uVar6 + 1,*0x1564,iVar5,0x1570);
                return iVar4;
            }
        }
    }
    return -0x7fffffe6;
}


/* fcn.00010af5 @ 0x10af5 */

uint __fastcall fcn.00010af5(int *param_1,int param_2,int *param_3)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    
    iVar2 = *0x14f0;
    if (param_1 != NULL) {
        piVar3 = param_2 + -0x2c + param_1;
        while (param_1 < piVar3) {
            if (((*param_1 == iVar2) && (iVar1 = fcn.00011176(0x10), iVar1 == 0)) &&
               (iVar1 = fcn.00011176(0x10), iVar1 == 0)) {
                if ((param_1[5] & 0xffffffU) < param_1[0xf] + 0x2cU) {
                    return 0x8000000e;
                }
                iVar2 = fcn.00011176(0x10);
                if (iVar2 != 0) {
                    return 0x8000000e;
                }
                *param_3 = param_1 + 0xb;
                return 0;
            }
            param_1 = param_1 + 1;
            if (param_1 == NULL) {
                return 0x8000000e;
            }
        }
    }
    return 0x8000000e;
}


/* fcn.00010a78 @ 0x10a78 */

uint __fastcall fcn.00010a78(int param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uchar uVar4;
    uchar uVar3;
    uint32_t uVar5;
    
    uVar1 = 0xef1;
    uVar4 = 0;
    uVar3 = 0;
    if ((((*(param_1 + 0x26) == 0xef1) && (uVar1 = *(param_1 + 0x18), uVar1 < 0x1004001)) &&
        (*(param_1 + 0x10) < 0x4001)) && (*(param_1 + 0x10) <= uVar1)) {
        uVar5 = *(param_1 + 0x1c);
        uVar3 = uVar4;
        if (*(param_1 + 0x10) == uVar5) {
            uVar2 = *(param_1 + 0x1e);
            uVar1 = uVar5;
            if ((uVar2 < 0xffffffd0) && (uVar2 + 0x30 <= uVar5)) {
                uVar1 = 0xffffffdf < *(param_1 + 0x20);
                if ((uVar1 == 0) && (*(param_1 + 0x20) + 0x20 <= uVar2)) {
                    uVar3 = 1;
                }
            }
        }
    }
    return CONCAT31(uVar1 >> 8,uVar3);
}


/* fcn.00010d1e @ 0x10d1e */

int __fastcall fcn.00010d1e(int param_1,uint param_2,uint param_3,int param_4,uint *param_5)

{
    uint *puVar1;
    int iVar2;
    uint uVar3;
    uint extraout_ECX;
    int iVar4;
    uint uVar5;
    uchar *arg_ch;
    int iStack_44;
    uint uStack_40;
    int iStack_3c;
    uint uStack_38;
    int iStack_34;
    uchar auStack_30 [48];
    
    puVar1 = param_5;
    iStack_44 = 1;
    if (((param_5 == NULL) || (*param_5 = 3, param_4 == 0)) || (arg_ch = *(param_4 + 0x14), arg_ch == NULL)) {
        return -0x7fffffe6;
    }
    uStack_40 = param_2;
    iStack_3c = param_1;
    iVar2 = fcn.00011176(0x10);
    if (iVar2 == 0) {
        fcn.00011240(auStack_30,arg_ch,0x20);
        arg_ch = auStack_30;
        uVar5 = 0x30;
    }
    else {
        iVar2 = fcn.00011176(0x10);
        if (iVar2 != 0) {
            return -0x7ffffffd;
        }
        uVar5 = *(param_4 + 0x10);
    }
    iStack_34 = param_1 + 0x38;
    uStack_38 = 0x1570;
    iVar4 = *(param_1 + 0x20) + -0x18;
    iVar2 = (**(*0x156c + 0x14))(*0x156c,iStack_34,iVar4,&iStack_44);
    if (-1 < iVar2) {
        if (iStack_44 == 1) {
            uVar3 = 0x1380;
            param_5 = 0x20;
        }
        else if (iStack_44 == 2) {
            uVar3 = 0x13f0;
            param_5 = 0x30;
        }
        else {
            if (iStack_44 != 3) {
                return -0x7ffffffd;
            }
            uVar3 = 0x1410;
            param_5 = 0x40;
        }
        *puVar1 = 2;
        iVar2 = fcn.00010b79(param_3,uVar3,extraout_ECX);
        if (-1 < iVar2) {
            iVar2 = (**(*0x156c + 0x10))(*0x156c,iStack_34,iVar4,arg_ch,uVar5,&uStack_38,&param_5);
            return iVar2;
        }
        return iVar2;
    }
    return iVar2;
}


/* fcn.00010e67 @ 0x10e67 */

int __fastcall fcn.00010e67(int param_1,uint param_2,uint param_3,uint *param_4)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uint uStack_40;
    uint32_t *puStack_3c;
    uint uStack_38;
    uint uStack_34;
    uint uStack_30;
    uint uStack_2c;
    uint uStack_28;
    uint uStack_24;
    char *pcStack_20;
    uint uStack_1c;
    uint uStack_18;
    uint uStack_14;
    uint uStack_10;
    uint uStack_c;
    uint uStack_8;
    
    uStack_1c = *0x1380;
    iVar4 = (*(param_1 + 0x14) & 1) + 1;
    uStack_18 = *0x1384;
    uStack_14 = *0x1388;
    uStack_10 = *0x138c;
    uStack_c = 0x20;
    uStack_8 = 0x1570;
    if (param_4 == NULL) {
code_r0x00010ea0:
        iVar3 = -0x7fffffe6;
    }
    else {
        uStack_24 = 0x100;
        *param_4 = 3;
        uStack_34 = *0x1510;
        uStack_30 = *0x1514;
        uStack_2c = *0x1518;
        uStack_28 = *0x151c;
        pcStack_20 = param_1 + 0x48;
        uStack_38 = param_2;
        iVar3 = (*(*0x156c)[1])(*0x156c,0x1400,&uStack_34);
        if (iVar3 < 0) {
            puVar1 = param_1 + 0x20;
            uVar2 = *puVar1;
            uVar5 = param_1 + 0x248;
            if (!CARRY4(uVar2,puVar1)) goto code_r0x00010f50;
            do {
                do {
                    if (*(uVar5 + 0x10) == '\0') goto code_r0x00010fc7;
                    pcStack_20 = uVar5 + 0x10;
                    iVar3 = (*(*0x156c)[1])(*0x156c,0x1400,&uStack_34);
                    if (-1 < iVar3) {
                        if ((*(param_1 + 0x14) & 4) == 0) {
                            uStack_40 = 0x228;
                            puStack_3c = puVar1;
                        }
                        else {
                            uStack_40 = 0x100;
                            puStack_3c = param_1 + 0x48;
                        }
                        iVar3 = (***0x156c)(*0x156c,0x1380,1,&puStack_3c,&uStack_40,0x1570);
                        if (iVar3 < 0) goto code_r0x00010ea0;
                        iVar3 = (*(*0x156c)[2])(*0x156c,&uStack_34,&uStack_1c,uVar5 + 0x110,0x100,iVar4);
                        goto code_r0x00010fc7;
                    }
                    uVar2 = *puVar1;
                    uVar5 = uVar5 + 0x210;
                } while (CARRY4(uVar2,puVar1));
code_r0x00010f50:
            } while (uVar5 < uVar2 + puVar1);
code_r0x00010fc7:
            if (iVar3 < 0) goto code_r0x00010ea0;
        }
        *param_4 = 2;
        iVar3 = fcn.00010b79(param_3,0x1380,iVar3);
        if (-1 < iVar3) {
            pcStack_20 = param_1 + 0x48;
            iVar3 = (*(*0x156c)[2])(*0x156c,&uStack_34,&uStack_1c,param_1 + 0x148,0x100,iVar4);
        }
    }
    return iVar3;
}


/* fcn.000109cd @ 0x109cd */

uint __fastcall fcn.000109cd(int param_1,int param_2,uint *param_3)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    int *piVar4;
    int *piVar5;
    
    *param_3 = 4;
    param_1 = *(param_1 + 0x1e) + param_1;
    uVar3 = *(param_1 + 0xc);
    if (uVar3 != 0) {
        piVar5 = param_1 + 8;
        do {
            if ((piVar5[3] >> 9 & 1) != 0 && (piVar5[3] & 10U) != 0) {
                iVar2 = *piVar5;
                for (piVar4 = iVar2 + param_2;
                    ((piVar4 != NULL && (0x57 < uVar3)) && (piVar4 <= iVar2 + param_2 + (uVar3 - 0x57)));
                    piVar4 = piVar4 + 1) {
                    if (((*piVar4 == *0x14e0) && (iVar1 = fcn.00011176(0x10), iVar1 == 0)) && (piVar4[4] == 0x44494624)
                       ) {
                        iVar2 = fcn.00011176(7);
                        if (iVar2 != 0) {
                            return 0x8000001a;
                        }
                        *param_3 = 0;
                        return 0;
                    }
                }
            }
            uVar3 = piVar5[7];
            piVar5 = piVar5 + 6;
        } while (uVar3 != 0);
    }
    return 0x8000001a;
}


