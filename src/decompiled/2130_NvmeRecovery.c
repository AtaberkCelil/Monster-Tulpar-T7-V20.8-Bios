// decompiled by r2ghidra: 2130_NvmeRecovery.te
// functions: 35

/* entry0 @ 0x179 */

int entry0(void)

{
    uint *puVar1;
    int iVar2;
    
    if (*0x2490 != '\0') {
        return 0;
    }
    puVar1 = fcn.000020ae();
    if (puVar1 == NULL) {
        return -0x7ffffff7;
    }
    *(puVar1 + 6) = 0;
    puVar1[4] = 0x454d564e;
    puVar1[5] = 0x4345525f;
    *puVar1 = 0x3b4;
    puVar1[1] = 0x3ec;
    puVar1[2] = 0x468;
    *0x2468 = puVar1;
    iVar2 = fcn.0000210e();
    if (-1 < iVar2) {
        *0x2490 = '\x01';
    }
    return iVar2;
}


/* fcn.000020ae @ 0x20ae */

int __fastcall fcn.000020ae(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.00002077();
    if (iVar1 == 0) {
        return 0;
    }
    if (param_1 == 0) {
        return iVar1;
    }
    iVar1 = fcn.000000e0(iVar1,param_1);
    return iVar1;
}


/* fcn.00002077 @ 0x2077 */

int32_t __fastcall fcn.00002077(uint param_1)

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


/* fcn.0000210e @ 0x210e */

void __fastcall fcn.0000210e(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.000003ad @ 0x3ad */

//WARNING: Removing unreachable block (ram,0x000004c9)

int __fastcall fcn.000003ad(int param_1)

{
    int32_t *piVar1;
    int iVar2;
    int iVar3;
    uchar *puVar4;
    int32_t iVar5;
    uint32_t uVar6;
    uint extraout_ECX;
    int32_t *extraout_ECX_00;
    int32_t *extraout_ECX_01;
    int32_t *extraout_ECX_02;
    uint32_t uVar7;
    uint uVar8;
    int32_t *noname_0;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int8_t var_14h;
    unkbyte3 Stack_17;
    int32_t var_10h;
    int8_t var_ch;
    unkbyte3 Stack_f;
    int16_t var_8h;
    int8_t var_1h;
    
    uVar8 = 0x2494;
    _var_14h = _var_14h & 0xffffff00;
    _var_ch = _var_ch & 0xffffff00;
    var_10h = 0;
    fcn.00002133(param_1,0x2494);
    iVar2 = fcn.00002133(uVar8,&var_18h);
    if ((-1 < iVar2) && (iVar2 = (**var_18h)(var_18h), -1 < iVar2)) {
        var_8h = 0x801;
        var_1h = 2;
        iVar2 = fcn.000020ae();
        if (iVar2 == 0) {
code_r0x00000415:
            iVar2 = -0x7ffffff7;
        }
        else {
            while (iVar3 = (**(var_18h + 4))(var_18h,CONCAT12(var_1h,var_8h),_var_ch,iVar2), -1 < iVar3) {
                puVar4 = fcn.000020ae();
                var_24h = _var_ch & 0xff;
                *(var_24h * 4 + 0x24a0) = puVar4;
                if (puVar4 == NULL) goto code_r0x00000415;
                *puVar4 = *(iVar2 + 1);
                *(*(var_24h * 4 + 0x24a0) + 1) = *(iVar2 + 2);
                *(*(var_24h * 4 + 0x24a0) + 2) = *(iVar2 + 3);
                *(*(var_24h * 4 + 0x24a0) + 0x10) = *(iVar2 + 4);
                iVar3 = *(var_24h * 4 + 0x24a0);
                *(iVar3 + 8) = *(((*(iVar2 + 2) & 0x1f | *(iVar2 + 1) << 5) << 3 | *(iVar2 + 3) & 7) * 0x1000 +
                                -0x3ffffff0);
                *(iVar3 + 0xc) = 0;
                iVar3 = *(var_24h * 4 + 0x24a0);
                *(iVar3 + 8) = *(iVar3 + 8) & 0xfffffff0;
                _var_ch = CONCAT31(Stack_f,var_ch + 1);
                *(iVar3 + 0xc) = *(iVar3 + 0xc);
            }
            var_24h = &var_30h;
            InterruptDescriptorTableRegister();
            noname_0 = 0x2440;
            iVar2 = (**(**(stack0xffffffce + -4) + 0x24))(*(stack0xffffffce + -4));
            if (-1 < iVar2) {
                _var_ch = param_1 + 0x24;
                uVar7 = 0;
                iVar5 = var_24h;
                do {
                    if (*(uVar7 + 0x24a0) == 0) {
                        if (var_10h == 0) {
                            piVar1 = &var_10h;
                            iVar2 = fcn.00002133(noname_0,&var_10h);
                            noname_0 = piVar1;
                            if (-1 < iVar2) goto code_r0x000005a7;
                        }
                        else {
code_r0x000005a7:
                            iVar2 = (**var_10h)(var_10h,_var_14h,&var_1ch);
                            noname_0 = extraout_ECX_00;
                            if (-1 < iVar2) {
                                uVar6 = _var_14h & 0xff;
                                _var_14h = CONCAT31(Stack_17,var_14h + 1);
                                iVar2 = (**(var_10h + 4))(var_10h,uVar6,&var_28h,&var_20h);
                                noname_0 = extraout_ECX_01;
                                if (-1 < iVar2) {
                                    uVar8 = fcn.000020ae();
                                    *(uVar7 + 0x24a0) = uVar8;
                                    if ((iVar5 != 0) && (iVar5 = fcn.000020ae(), iVar5 != 0)) {
                                        iVar2 = *(uVar7 + 0x24a0);
                                        *_var_ch = iVar5;
                                        *(iVar5 + 0x1c) = 0;
                                        *(iVar5 + 0x18) = var_1ch;
                                        *(iVar2 + 8) = var_1ch;
                                        *(iVar2 + 0xc) = 0;
                                        noname_0 = *(uVar7 + 0x24a0);
                                        *(iVar5 + 0xc2) = var_20h;
                                        noname_0[4] = var_20h;
                                        goto code_r0x0000063b;
                                    }
                                    goto code_r0x00000415;
                                }
                            }
                        }
                    }
                    else {
                        iVar5 = fcn.000020ae();
                        if (iVar5 == 0) goto code_r0x00000415;
                        puVar4 = *(uVar7 + 0x24a0);
                        *_var_ch = iVar5;
                        *(iVar5 + 0x20) = *puVar4;
                        noname_0 = CONCAT31(extraout_ECX >> 8,puVar4[1]);
                        *(iVar5 + 0x21) = puVar4[1];
                        *(iVar5 + 0x22) = puVar4[2];
                        *(iVar5 + 0xc2) = *(puVar4 + 0x10);
                        *(iVar5 + 0x18) = *(puVar4 + 8);
                        *(iVar5 + 0x1c) = *(puVar4 + 0xc);
code_r0x0000063b:
                        if ((*(uVar7 + 0x24a0) != 0) &&
                           (iVar2 = fcn.00001984(), noname_0 = extraout_ECX_02, -1 < iVar2)) {
                            *(param_1 + 0x1c) = *(param_1 + 0x1c) + *(iVar5 + 0xce);
                            *(param_1 + 0x20) = *(param_1 + 0x20) + 1;
                        }
                    }
                    _var_ch = _var_ch + 1;
                    uVar7 = uVar7 + 4;
                } while (uVar7 < 0x10);
                iVar2 = 0;
            }
        }
    }
    return iVar2;
}


/* fcn.000001d8 @ 0x1d8 */

int __fastcall fcn.000001d8(int param_1,uint32_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint *puVar3;
    uint32_t uVar4;
    uint *puVar5;
    uint32_t uVar6;
    
    uVar6 = 0;
    if ((param_2 <= *(param_1 + 0x1c)) && (uVar4 = 0, *(param_1 + 0x20) != 0)) {
        uVar2 = 0;
        do {
            iVar1 = *(param_1 + 0x24 + uVar2 * 4);
            uVar2 = *(iVar1 + 0xce) + uVar6;
            if (uVar2 < param_2) {
                uVar6 = uVar2;
            }
            else {
                puVar5 = iVar1 + 0xd2;
                for (puVar3 = *puVar5; puVar3 != puVar5; puVar3 = *puVar3) {
                    uVar6 = uVar6 + 1;
                    if (uVar6 == param_2) {
                        return puVar3 + -0x1025;
                    }
                }
            }
            uVar4 = uVar4 + 1;
            uVar2 = uVar4 & 0xffff;
        } while (uVar2 < *(param_1 + 0x20));
    }
    return 0;
}


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 8627 named .text
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


/* fcn.0000026c @ 0x26c */

int __cdecl fcn.0000026c(uint noname_0,int32_t arg_ch,int32_t arg_10h,uint32_t arg_14h)

{
    int iVar1;
    
    if (((arg_ch != 0) && (arg_10h != 0)) && (arg_14h != 0)) {
        if (*(arg_ch + 0x18) == '\0') {
            iVar1 = fcn.000003ad();
            if (iVar1 < 0) {
                return iVar1;
            }
            *(arg_ch + 0x18) = 1;
        }
        if (arg_10h <= *(arg_ch + 0x1c)) {
            iVar1 = fcn.000001d8();
            if (iVar1 == 0) {
                return -0x7ffffff2;
            }
            if (*(iVar1 + 0x101c) == '\0') {
                *(iVar1 + 0x101c) = 1;
            }
            if (arg_14h != iVar1 + 0x100cU) {
                section..text(arg_14h,iVar1 + 0x100cU,0x10);
            }
            return 0;
        }
    }
    return -0x7ffffffe;
}


/* fcn.0000120a @ 0x120a */

//WARNING: Removing unreachable block (ram,0x0000127c)
//WARNING: Removing unreachable block (ram,0x0000138c)

int32_t __cdecl fcn.0000120a(int32_t arg_8h,uint32_t arg_ch,int32_t arg_10h,uint32_t arg_14h)

{
    uint8_t uVar1;
    int iVar2;
    uchar *puVar3;
    uint uVar4;
    int32_t iVar5;
    int iVar6;
    int in_ECX;
    uint32_t in_EDX;
    bool bVar7;
    int32_t var_50h;
    int32_t var_40h;
    uint uStack_40;
    uint32_t var_38h;
    int var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    
    var_40h = *(in_ECX + 0x100c);
    uStack_40 = *(in_ECX + 0x1010);
    var_38h = *(in_ECX + 0x1014);
    var_34h = *(in_ECX + 0x1018);
    iVar2 = *(in_ECX + 0x1021);
    var_10h = &var_50h;
    puVar3 = *(iVar2 + 0xbd);
    var_8h = 0;
    if (in_EDX == 0) {
        iVar5 = 0;
    }
    else if (in_EDX % var_34h == 0) {
        if ((arg_ch == 0) && (arg_8h <= var_38h)) {
            if ((!CARRY4(in_EDX / var_34h,arg_8h)) && (in_EDX / var_34h + arg_8h <= var_38h + 1)) {
                var_28h = 1;
                uVar1 = *(*(iVar2 + 0xb9) + 0x4d);
                var_14h = uVar1;
                bVar7 = (uVar1 & 0x20) == 0;
                var_24h = !bVar7 << (uVar1 & 0x1f) | bVar7 >> 0x20 - (uVar1 & 0x1f);
                var_1ch = *(iVar2 + 0x39) * (bVar7 << (uVar1 & 0x1f));
                var_ch = in_ECX;
                var_4h = in_EDX;
                do {
                    if ((*(*(iVar2 + 0xb9) + 0x4d) != '\0') && (var_1ch < var_4h)) {
                        var_4h = var_1ch;
                    }
                    fcn.000000e0(puVar3,0x48);
                    if (*0x2494 == 0) {
                        var_24h = 0;
                        iVar5 = arg_10h;
                    }
                    else {
                        iVar6 = (**(*0x2494 + 0xc))(*0x2494,1,arg_10h,&var_4h,&var_30h,&var_8h);
                        if (iVar6 < 0) {
                            return iVar6;
                        }
                        var_24h = var_2ch;
                        iVar5 = var_30h;
                    }
                    iVar6 = fcn.0000144b(var_4h,iVar5,*(var_ch + 0x1008),&var_18h);
                    if (iVar6 < 0) {
                        return iVar6;
                    }
                    var_14h = var_18h / var_34h;
                    puVar3[1] = puVar3[1] & 0x7c;
                    *puVar3 = 2;
                    *(puVar3 + 2) = *(iVar2 + 0x25);
                    uVar4 = *(var_ch + 4);
                    *(puVar3 + 0x10) = 0;
                    *(puVar3 + 0x14) = 0;
                    *(puVar3 + 4) = uVar4;
                    *(puVar3 + 0x28) = arg_8h;
                    *(puVar3 + 0x2c) = arg_ch;
                    var_24h = 0;
                    *(puVar3 + 0x30) = var_14h + 0x7fffffff;
                    *(puVar3 + 0x34) = 0;
                    *(puVar3 + 0x38) = 0;
                    puVar3[0x40] = 0;
                    *(puVar3 + 0x41) = *(iVar2 + 0x7e);
                    *(puVar3 + 0x43) = 1000;
                    if (arg_14h != 0) {
                        var_10h = arg_14h;
                    }
                    var_24h = fcn.00000cb0(var_10h);
                    if (var_24h < 0) {
                        if (var_8h != 0) {
                            (**(*0x2494 + 0x10))(*0x2494,var_8h);
                        }
                        return var_24h;
                    }
                    iVar6 = var_14h * var_34h;
                    var_4h = var_4h - iVar6;
                    bVar7 = CARRY4(arg_8h,var_14h);
                    arg_8h = arg_8h + var_14h;
                    arg_ch = arg_ch + bVar7;
                    in_EDX = in_EDX - iVar6;
                    arg_10h = arg_10h + iVar6;
                    if (var_4h == 0) {
                        var_4h = in_EDX;
                    }
                    if (var_8h != 0) {
                        (**(*0x2494 + 0x10))(*0x2494,var_8h);
                    }
                } while (var_4h != 0);
                return var_24h;
            }
        }
        iVar5 = -0x7ffffffe;
    }
    else {
        iVar5 = -0x7ffffffc;
    }
    return iVar5;
}


/* fcn.00002133 @ 0x2133 */

void __cdecl fcn.00002133(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00001984 @ 0x1984 */

int __fastcall fcn.00001984(uint *param_1)

{
    int iVar1;
    int iVar2;
    uint *puVar3;
    uint32_t uVar4;
    int32_t var_4h;
    uchar auStack_10 [2];
    int iStack_e;
    uchar *apuStack_8 [2];
    
    iVar1 = fcn.00001574();
    if (-1 < iVar1) {
        iVar1 = fcn.000020ae();
        if (iVar1 != 0) {
            *(param_1 + 0xb9) = iVar1;
            uVar4 = 1;
            iVar2 = fcn.00000f4d(1,0);
            if (iVar2 < 0) {
                return iVar2;
            }
            InterruptDescriptorTableRegister();
            iVar2 = (**(**(iStack_e + -4) + 0x48))(*(iStack_e + -4),4,2,&stack0xfffffff8);
            if ((-1 < iVar2) && (apuStack_8[0] != NULL)) {
                fcn.000000e0(apuStack_8[0],0x2000);
                *(param_1 + 0xca) = apuStack_8[0];
                if (((*(param_1 + 0xc6) < 0x10100) || (iVar2 = fcn.00000f4d(2,0), iVar2 < 0)) &&
                   (1 < *(iVar1 + 0x204) + 1U)) {
                    do {
                        *(apuStack_8[0] + uVar4 * 4) = uVar4;
                        uVar4 = uVar4 + 1;
                    } while (uVar4 < *(iVar1 + 0x204) + 1U);
                }
                iVar1 = param_1 + 0xd2;
                *iVar1 = iVar1;
                *(param_1 + 0xd6) = iVar1;
                uVar4 = 4;
                do {
                    if (*(uVar4 + *(param_1 + 0xca)) == 0) break;
                    fcn.0000103e();
                    uVar4 = uVar4 + 4;
                } while (uVar4 < 0x1001);
                apuStack_8[0] = 0x1fec;
                puVar3 = fcn.000020ae();
                if (puVar3 != NULL) {
                    param_1[1] = 0;
                    param_1[2] = puVar3;
                    *param_1 = 0x10000;
                    param_1[5] = 0x1d09;
                    param_1[3] = 0x1c5b;
                    param_1[4] = 0x1cab;
                    *puVar3 = 9;
                    puVar3[1] = 4;
                    puVar3[2] = *(param_1 + 0xc6);
                    apuStack_8[0] = 0x2039;
                    puVar3 = fcn.000020ae();
                    if (puVar3 != NULL) {
                        puVar3[2] = param_1;
                        *puVar3 = 0x80000010;
                        puVar3[1] = 0x23e0;
                        apuStack_8[0] = &stack0xfffffff0;
                        InterruptDescriptorTableRegister();
                        iVar1 = (**(**(iStack_e + -4) + 0x18))(*(iStack_e + -4),puVar3);
                        return iVar1;
                    }
                }
                return -0x7ffffff7;
            }
        }
        iVar1 = -0x7ffffff7;
    }
    return iVar1;
}


/* fcn.000006cf @ 0x6cf */

int __fastcall fcn.000006cf(char *param_1)

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


/* fcn.000020e7 @ 0x20e7 */

int __fastcall fcn.000020e7(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = section..text(param_1,param_2,param_3);
    return iVar1;
}


/* fcn.000021d5 @ 0x21d5 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_4h

uint __fastcall fcn.000021d5(uint param_1)

{
    ulong uVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = fcn.0000220c(param_1,param_1,param_1,param_1);
    fcn.0000218c(uVar1);
    return 1000;
}


/* fcn.0000220c @ 0x220c */

ulong fcn.0000220c(void)

{
    int32_t var_10h;
    int var_ch;
    int32_t var_4h;
    
    return 0xd55b85a8;
}


/* fcn.0000218c @ 0x218c */

void __fastcall fcn.0000218c(uint32_t param_1)

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


/* fcn.00000b7f @ 0xb7f */

void __fastcall fcn.00000b7f(int param_1)

{
    uchar *puVar1;
    int iVar2;
    int32_t var_10h;
    
    puVar1 = *(param_1 + 0xbd);
    *(param_1 + 0xc1) = 1;
    fcn.000000e0(puVar1,0x48);
    *puVar1 = 0;
    *(puVar1 + 2) = *(param_1 + 0x23);
    *(puVar1 + 0x28) = *(param_1 + 0x7e);
    *(puVar1 + 0x41) = 0;
    puVar1[0x40] = 1;
    *(puVar1 + 0x43) = 1000;
    iVar2 = fcn.00000cb0(&var_10h);
    if (-1 < iVar2) {
        *puVar1 = 4;
        *(puVar1 + 2) = *(param_1 + 0x23);
        *(puVar1 + 0x28) = *(param_1 + 0x7e);
        *(puVar1 + 0x41) = 0;
        puVar1[0x40] = 1;
        *(puVar1 + 0x43) = 1000;
        iVar2 = fcn.00000cb0(&var_10h);
        if (-1 < iVar2) {
            fcn.00000902(*(param_1 + 0x7e),*(param_1 + 0xa8));
        }
    }
    *(param_1 + 0xc1) = 0;
    return;
}


/* fcn.00000cb0 @ 0xcb0 */

int __cdecl fcn.00000cb0(int32_t arg_8h)

{
    char cVar1;
    uint16_t uVar2;
    int iVar3;
    char *pcVar4;
    ushort uVar5;
    int in_ECX;
    char *in_EDX;
    bool bVar6;
    
    do {
        if (in_EDX[0x40] == '\0') {
            uVar5 = *(in_ECX + 0x25);
        }
        else {
            uVar5 = *(in_ECX + 0x23);
        }
        *(in_EDX + 2) = uVar5;
        if (in_EDX[0x40] == '\0') {
            iVar3 = fcn.00000c2d();
            if (-1 < iVar3) goto code_r0x00000d45;
        }
        else {
            if (*(in_ECX + 0x5d) == 0) {
                bVar6 = *(in_ECX + 0x5f) == *(in_ECX + 0x59);
            }
            else {
                bVar6 = *(in_ECX + 0x5f) - 1 == *(in_ECX + 0x5d);
            }
            if ((bVar6) && (iVar3 = fcn.000007df(), iVar3 < 0)) {
                iVar3 = -0x7ffffff7;
            }
            else {
                pcVar4 = *(in_ECX + 0x5f) * 0x40 + *(in_ECX + 0x51);
                if (pcVar4 != in_EDX) {
                    section..text(pcVar4);
                }
                *(in_ECX + 0x5f) = *(in_ECX + 0x5f) + 1;
                if (*(in_ECX + 0x59) < *(in_ECX + 0x5f)) {
                    *(in_ECX + 0x5f) = 0;
                }
code_r0x00000d45:
                if (in_EDX[0x40] == '\0') {
                    uVar2 = *(in_ECX + 0xb6);
                }
                else {
                    uVar2 = *(in_ECX + 0x5f);
                }
                *(*(in_ECX + 0x18) + 0x1000 + (4 << (*(in_ECX + 0x36) & 0x1f)) * *(in_EDX + 0x41) * 2) = uVar2;
                if (*in_EDX == '\f') {
                    return 0;
                }
                iVar3 = fcn.00000da8(arg_8h);
                if (-1 < iVar3) {
                    return iVar3;
                }
            }
        }
        cVar1 = in_EDX[0x47];
        in_EDX[0x47] = cVar1 + -1;
        if (cVar1 == '\0') {
            return iVar3;
        }
    } while( true );
}


/* fcn.00000902 @ 0x902 */

int __fastcall fcn.00000902(int param_1,uchar *param_2,uint16_t param_3,int param_4)

{
    int iVar1;
    int iVar2;
    int iStack_1c;
    uint uStack_18;
    uchar auStack_14 [20];
    
    iStack_1c = 0;
    uStack_18 = 0;
    fcn.000000e0(param_2,0x48);
    if (*(param_1 + 0xa0) == 0 && *(param_1 + 0xa4) == 0) {
        if (*0x2494 != 0) {
            iVar1 = (**(*0x2494 + 0x14))
                              (*0x2494,6,(((param_4 + 1U) * 0x10 & 0xfff) != 0) + ((param_4 + 1U & 0xfffffff) >> 8),
                               &iStack_1c,0x80,0);
            if (iVar1 < 0) {
                return iVar1;
            }
code_r0x0000097d:
            fcn.000020fd();
            *(param_1 + 0xa0) = iStack_1c;
            *(param_1 + 0xa4) = uStack_18;
            goto code_r0x000009ad;
        }
        iStack_1c = fcn.00002055();
        uStack_18 = 0;
        if (iStack_1c != 0) goto code_r0x0000097d;
code_r0x00000a9e:
        iVar2 = -0x7ffffff7;
    }
    else {
code_r0x000009ad:
        param_2[1] = param_2[1] & 0x7c;
        *param_2 = 5;
        *(param_2 + 2) = *(param_1 + 0x23);
        *(param_2 + 4) = 0;
        *(param_2 + 0x18) = *(param_1 + 0xa0);
        *(param_2 + 0x1c) = *(param_1 + 0xa4);
        *(param_2 + 0x20) = 0;
        *(param_2 + 0x24) = 0;
        iVar1 = param_4 * 0x10000 + param_3;
        *(param_2 + 0x2c) = 1;
        *(param_2 + 0x28) = iVar1;
        *(param_2 + 0x41) = 0;
        param_2[0x40] = 1;
        *(param_2 + 0x43) = 1000;
        iVar2 = fcn.00000cb0(auStack_14);
        if (-1 < iVar2) {
            if (*(param_1 + 0x8c) == 0 && *(param_1 + 0x90) == 0) {
                if (*0x2494 == 0) {
                    iStack_1c = fcn.00002055();
                    uStack_18 = 0;
                    if (iStack_1c == 0) goto code_r0x00000a9e;
                }
                else {
                    iVar2 = (**(*0x2494 + 0x14))
                                      (*0x2494,6,
                                       (((param_4 + 1U) * 0x40 & 0xfff) != 0) + ((param_4 + 1U & 0x3ffffff) >> 6),
                                       &iStack_1c,0x80,0);
                    if (iVar2 < 0) {
                        return iVar2;
                    }
                }
                fcn.000020fd();
                *(param_1 + 0x8c) = iStack_1c;
                *(param_1 + 0x90) = uStack_18;
            }
            param_2[1] = param_2[1] & 0x7c;
            *param_2 = 1;
            *(param_2 + 2) = *(param_1 + 0x23);
            *(param_2 + 4) = 0;
            *(param_2 + 0x18) = *(param_1 + 0x8c);
            *(param_2 + 0x1c) = *(param_1 + 0x90);
            *(param_2 + 0x28) = iVar1;
            *(param_2 + 0x41) = 0;
            *(param_2 + 0x20) = 0;
            *(param_2 + 0x24) = 0;
            *(param_2 + 0x2c) = param_3 * 0x10000 + 1;
            param_2[0x40] = 1;
            *(param_2 + 0x43) = 1000;
            iVar2 = fcn.00000cb0(auStack_14);
            if (iVar2 < 0) {
                return iVar2;
            }
        }
        *(param_1 + 0xb8) = *(param_1 + 0xb8) & 0xfe;
        *(param_1 + 0xb4) = 0;
        *(param_1 + 0xb0) = 0;
    }
    return iVar2;
}


/* fcn.000020fd @ 0x20fd */

uint __fastcall fcn.000020fd(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.000000e0(param_1,param_2);
    return uVar1;
}


/* fcn.00002055 @ 0x2055 */

int32_t __fastcall fcn.00002055(uint param_1,int param_2)

{
    int iVar1;
    int32_t var_8h;
    
    if ((param_2 != 0) && (iVar1 = fcn.00002160(&var_8h), -1 < iVar1)) {
        return var_8h;
    }
    return 0;
}


/* fcn.000007df @ 0x7df */

//WARNING: Removing unreachable block (ram,0x0000085b)
//WARNING: Removing unreachable block (ram,0x00000891)

uint __fastcall fcn.000007df(int param_1)

{
    uint32_t uVar1;
    uint uVar2;
    int iVar3;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_4h;
    
    uVar2 = 0;
    uVar1 = *(*(param_1 + 0x18) + 0x14);
    iVar3 = *(param_1 + 0x35) * 500;
    if ((*(*(param_1 + 0x18) + 0x14) & 1) != 0) {
        *(*(param_1 + 0x18) + 0x14) = 0;
        do {
            if ((*(*(param_1 + 0x18) + 0x1c) & 1) == 0) break;
            fcn.000021d5();
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
    }
    if (iVar3 != 0) {
        *(*(param_1 + 0x18) + 0x24) = *(param_1 + 0x75) * 0x10000 + *(param_1 + 0x59);
        *(*(param_1 + 0x18) + 0x28) = *(param_1 + 0x51);
        *(*(param_1 + 0x18) + 0x2c) = *(param_1 + 0x55);
        *(*(param_1 + 0x18) + 0x30) = *(param_1 + 0x6d);
        *(*(param_1 + 0x18) + 0x34) = *(param_1 + 0x71);
        *(param_1 + 0x7d) = *(param_1 + 0x7d) & 0xfe;
        *(*(param_1 + 0x18) + 0x14) = uVar1 | 1;
        iVar3 = *(param_1 + 0x35) * 500;
        do {
            if ((*(*(param_1 + 0x18) + 0x1c) & 1) != 0) break;
            fcn.000021d5();
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        if (iVar3 != 0) {
            *(param_1 + 0x7d) = *(param_1 + 0x7d) & 0xfe;
            *(param_1 + 0x5d) = 0;
            *(param_1 + 0x79) = 0;
            if (*(param_1 + 0xc1) == '\0') {
                uVar2 = fcn.00000b7f();
            }
            return uVar2;
        }
    }
    return 0x80000007;
}


/* fcn.00000c2d @ 0xc2d */

uint __fastcall fcn.00000c2d(int param_1,int param_2)

{
    int iVar1;
    bool bVar2;
    
    if (*(param_1 + 0xb4) == 0) {
        bVar2 = *(param_1 + 0xb6) == *(param_1 + 0xa8);
    }
    else {
        bVar2 = *(param_1 + 0xb6) - 1 == *(param_1 + 0xb4);
    }
    if ((bVar2) && (iVar1 = fcn.00000b7f(), iVar1 < 0)) {
        return 0x80000009;
    }
    iVar1 = *(param_1 + 0xb6) * 0x40 + *(param_1 + 0x8c);
    if (iVar1 != param_2) {
        section..text(iVar1,param_2,0x40);
    }
    *(param_1 + 0xb6) = *(param_1 + 0xb6) + 1;
    if (*(param_1 + 0xa8) < *(param_1 + 0xb6)) {
        *(param_1 + 0xb6) = 0;
    }
    return 0;
}


/* fcn.00000da8 @ 0xda8 */

uint __fastcall fcn.00000da8(int param_1,int param_2,int param_3)

{
    uint8_t uVar1;
    int16_t iVar2;
    uint16_t uVar3;
    int iVar4;
    int iVar5;
    uint uVar6;
    
    iVar4 = *(param_2 + 0x43);
    if (*(param_2 + 0x40) == '\0') {
        iVar2 = *(param_1 + 0x25);
        iVar5 = *(param_1 + 0xa0);
        uVar3 = *(param_1 + 0xb0);
    }
    else {
        iVar2 = *(param_1 + 0x23);
        iVar5 = *(param_1 + 0x6d);
        uVar3 = *(param_1 + 0x79);
    }
    if (uVar3 == 0) {
        if (*(param_2 + 0x40) == '\0') {
            *(param_1 + 0xb8) = *(param_1 + 0xb8) ^ 1;
        }
        else {
            *(param_1 + 0x7d) = *(param_1 + 0x7d) ^ 1;
        }
    }
    iVar5 = uVar3 * 0x10 + iVar5;
    do {
        if ((*(iVar5 + 0xc) == iVar2) && (*(iVar5 + 10) == *(param_2 + 0x41))) {
            if (*(param_2 + 0x40) == '\0') {
                uVar1 = *(param_1 + 0xb8);
            }
            else {
                uVar1 = *(param_1 + 0x7d);
            }
            if ((*(iVar5 + 0xe) & 1) == (uVar1 & 1)) {
                if (iVar4 != 0) {
                    uVar3 = *(iVar5 + 8);
                    if (*(param_2 + 0x40) == '\0') {
                        *(param_1 + 0xb4) = uVar3;
                        *(param_1 + 0xb0) = uVar3;
                    }
                    else {
                        *(param_1 + 0x5d) = uVar3;
                        *(param_1 + 0x79) = uVar3;
                    }
                    *((4 << (*(param_1 + 0x36) & 0x1f)) * (*(param_2 + 0x41) * 2 + 1) + 0x1000 + *(param_1 + 0x18)) =
                         uVar3;
                    if ((*(iVar5 + 0xe) & 0xffe) == 0) {
                        uVar6 = 0;
                    }
                    else {
                        uVar6 = 0x80000007;
                    }
                    if (param_3 != iVar5) {
                        section..text(param_3,iVar5,0x10);
                    }
                    if (*(param_2 + 0x40) == '\0') {
                        *(param_1 + 0x25) = *(param_1 + 0x25) + 1;
                    }
                    else {
                        *(param_1 + 0x23) = *(param_1 + 0x23) + 1;
                    }
                    return uVar6;
                }
                break;
            }
        }
        if ((*(*(param_1 + 0x18) + 0x1c) & 2) != 0) {
            return 0x80000007;
        }
        fcn.000021d5();
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (*(param_2 + 0x40) == '\0') {
        *(param_1 + 0x25) = *(param_1 + 0x25) + 1;
    }
    else {
        *(param_1 + 0x23) = *(param_1 + 0x23) + 1;
    }
    if (*(param_2 + 0x40) == '\0') {
        iVar4 = fcn.00000b7f();
    }
    else {
        iVar4 = fcn.000007df();
    }
    if (iVar4 < 0) {
        *(param_2 + 0x47) = 0;
    }
    else {
        *(param_2 + 0x47) = *(param_2 + 0x47) + '\x01';
    }
    return 0x80000007;
}


/* fcn.0000144b @ 0x144b */

uint __fastcall fcn.0000144b(int param_1,int param_2,uint32_t param_3,uint32_t param_4,int *param_5,int *param_6)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int *piVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uStack_c;
    
    uVar4 = 0;
    *(param_2 + 0x18) = param_4;
    *(param_2 + 0x1c) = 0;
    uVar1 = *(param_1 + 0x41);
    uVar5 = uVar1 - (uVar1 - 1 & param_4);
    if (param_3 <= uVar5) {
        uVar5 = param_3;
    }
    param_3 = param_3 - uVar5;
    if (param_3 != 0) {
        if (uVar1 < param_3) {
            if (param_5 == NULL) goto code_r0x0000150b;
            param_4 = uVar5 + param_4;
            uStack_c = uVar1 >> 3;
            uVar4 = 0;
            piVar3 = param_5;
            do {
                *piVar3 = param_4;
                piVar3[1] = 0;
                if (param_3 < uVar1) {
                    uVar2 = 0;
                }
                else {
                    uVar2 = param_3 - uVar1;
                    param_3 = uVar1;
                }
                uVar4 = uVar4 + param_3;
                uStack_c = uStack_c - 1;
            } while ((uStack_c != 0) &&
                    (param_4 = param_4 + param_3, param_3 = uVar2, piVar3 = piVar3 + 2, uVar2 != 0));
            *(param_2 + 0x24) = 0;
        }
        else {
            param_5 = uVar5 + param_4;
            *(param_2 + 0x24) = CARRY4(uVar5,param_4);
            uVar4 = param_3;
        }
        *(param_2 + 0x20) = param_5;
    }
code_r0x0000150b:
    *param_6 = uVar5 + uVar4;
    return 0;
}


/* fcn.00000f4d @ 0xf4d */

int __fastcall fcn.00000f4d(int param_1,uint param_2,int param_3,uint param_4)

{
    uchar *puVar1;
    int iVar2;
    int iVar3;
    uint uStack_28;
    uchar auStack_24 [8];
    uint auStack_1c [2];
    uchar auStack_14 [20];
    
    iVar2 = param_3;
    uStack_28 = 0;
    puVar1 = *(param_1 + 0xbd);
    if (((param_3 == 1) || (param_3 == 0)) || (param_3 == 2)) {
        param_3 = 0x1000;
        fcn.000000e0(puVar1,0x48);
        if ((*0x2494 != 0) &&
           (iVar3 = (**(*0x2494 + 0xc))(*0x2494,1,param_2,&param_3,auStack_1c,&uStack_28), iVar3 < 0)) {
            return iVar3;
        }
        puVar1[1] = puVar1[1] & 0x7c;
        *puVar1 = 6;
        *(puVar1 + 2) = *(param_1 + 0x23);
        *(puVar1 + 4) = param_4;
        if (*0x2494 != 0) {
            param_2 = auStack_1c[0];
        }
        iVar3 = fcn.0000144b(param_3,param_2,0,auStack_24);
        if (-1 < iVar3) {
            *(puVar1 + 0x28) = iVar2;
            *(puVar1 + 0x41) = 0;
            puVar1[0x40] = 1;
            *(puVar1 + 0x43) = 1000;
            iVar3 = fcn.00000cb0(auStack_14);
            if (*0x2494 != 0) {
                (**(*0x2494 + 0x10))(*0x2494,uStack_28);
            }
        }
    }
    else {
        iVar3 = -0x7ffffffd;
    }
    return iVar3;
}


/* fcn.0000070f @ 0x70f */

int __fastcall fcn.0000070f(int param_1,int param_2)

{
    int iVar1;
    int iVar2;
    
    if (param_2 != 0) {
        if (param_1 == 0) {
            iVar2 = 0;
        }
        else {
            iVar2 = fcn.000006cf();
            iVar2 = iVar2 + -4;
        }
        iVar1 = fcn.000020ae();
        if (iVar2 == 0) {
            iVar2 = iVar1;
        }
        else {
            fcn.000020e7(iVar2);
            iVar2 = iVar2 + iVar1;
        }
        if (*(param_2 + 2) != 0) {
            fcn.000020e7(*(param_2 + 2));
        }
        iVar2 = *(param_2 + 2) + iVar2 + *(param_2 + 3) * 0x100;
        if (iVar2 != 0x245c) {
            section..text(iVar2,0x245c,4);
        }
        return iVar1;
    }
    if (param_1 == 0) {
        param_1 = 0x245c;
    }
    if (param_1 == 0) {
        return 0;
    }
    iVar1 = fcn.000006cf();
    iVar2 = 0;
    if (iVar1 != 0) {
        iVar2 = fcn.000020ae();
        fcn.000020e7(iVar1);
    }
    return iVar2;
}


/* fcn.0000151e @ 0x151e */

void __fastcall fcn.0000151e(int param_1)

{
    uchar *puVar1;
    uchar auStack_14 [20];
    
    puVar1 = *(param_1 + 0xbd);
    fcn.000000e0(puVar1,0x48);
    *puVar1 = 9;
    *(puVar1 + 2) = *(param_1 + 0x23);
    *(puVar1 + 0x41) = 0;
    *(puVar1 + 0x28) = 7;
    *(puVar1 + 0x2c) = 0x10001;
    puVar1[0x40] = 1;
    *(puVar1 + 0x43) = 1000;
    fcn.00000cb0(auStack_14);
    return;
}


/* fcn.00001574 @ 0x1574 */

//WARNING: Removing unreachable block (ram,0x000018e6)
//WARNING: Removing unreachable block (ram,0x000016cf)
//WARNING: Removing unreachable block (ram,0x0000167d)
//WARNING: Removing unreachable block (ram,0x0000159f)
//WARNING: Removing unreachable block (ram,0x00001656)
//WARNING: Removing unreachable block (ram,0x000016a6)
//WARNING: Removing unreachable block (ram,0x00001721)
//WARNING: Removing unreachable block (ram,0x0000191a)

int __fastcall fcn.00001574(int param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_10h = 0;
    var_ch = 0;
    uVar1 = *(*(param_1 + 0x18) + 4);
    uVar2 = **(param_1 + 0x18);
    *(param_1 + 0x27) = uVar2;
    *(param_1 + 0x2f) = (uVar2 & 0xffff) + 1;
    *(param_1 + 0x2b) = uVar1;
    *(param_1 + 0x33) = uVar2 >> 0x10 & 1;
    *(param_1 + 0x34) = (uVar2 & 0x60000) >> 0x11;
    *(param_1 + 0x35) = uVar2 >> 0x18;
    *(param_1 + 0x36) = uVar1 & 0xf;
    *(param_1 + 0x37) = (uVar1 & 0x10) >> 4;
    *(param_1 + 0x38) = (uVar1 & 0x1fe0) >> 5;
    var_8h = 0;
    var_4h._0_1_ = (uVar1 >> 0x10 & 0xf) + 0xc;
    *(param_1 + 0x39) = 1 << var_4h;
    var_4h = ((uVar1 & 0xf00000) >> 0x14) + 0xc;
    *(param_1 + 0x3d) = 1 << var_4h;
    *(param_1 + 0xc6) = *(*(param_1 + 0x18) + 8);
    if (((*(param_1 + 0x38) & 1) == 0) || (0x1000 < *(param_1 + 0x39))) {
        return -0x7ffffffd;
    }
    iVar3 = *(param_1 + 0x35) * 500;
    do {
        if ((*(*(param_1 + 0x18) + 0x1c) & 4) == 0) break;
        fcn.000021d5();
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (iVar3 != 0) {
        iVar3 = *(param_1 + 0x35) * 500;
        if ((*(*(param_1 + 0x18) + 0x14) & 1) != 0) {
            *(*(param_1 + 0x18) + 0x14) = *(*(param_1 + 0x18) + 0x14) & 0xfffffffe;
            do {
                if ((*(*(param_1 + 0x18) + 0x1c) & 1) == 0) break;
                fcn.000021d5();
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
        }
        if (iVar3 == 0) {
            return -0x7ffffff9;
        }
        *(*(param_1 + 0x18) + 0x14) = 0x460000;
        *(param_1 + 0x41) = *(param_1 + 0x39);
        if (*0x2494 == 0) {
            var_10h = fcn.00002055();
            var_ch = 0;
            if (var_10h == 0) {
                return -0x7ffffff7;
            }
        }
        else {
            iVar3 = (**(*0x2494 + 0x14))(*0x2494,6,1,&var_10h,0x80,0);
            if (iVar3 < 0) {
                return iVar3;
            }
        }
        *(param_1 + 0x51) = var_10h;
        *(param_1 + 0x55) = var_ch;
        if (*0x2494 == 0) {
            var_10h = fcn.00002055();
            var_ch = 0;
            if (var_10h == 0) {
                return -0x7ffffff7;
            }
        }
        else {
            iVar3 = (**(*0x2494 + 0x14))(*0x2494,6,1,&var_10h,0x80,0);
            if (iVar3 < 0) {
                return iVar3;
            }
        }
        *(param_1 + 0x6d) = var_10h;
        *(param_1 + 0x71) = var_ch;
        *(param_1 + 0x59) = 0x3f;
        *(param_1 + 0x75) = 0x3f;
        fcn.000000e0(*(param_1 + 0x51),0xfc0);
        fcn.000000e0(*(param_1 + 0x6d),0xfc0);
        *(*(param_1 + 0x18) + 0x24) = *(param_1 + 0x75) * 0x10000 + *(param_1 + 0x59);
        *(*(param_1 + 0x18) + 0x28) = *(param_1 + 0x51);
        *(*(param_1 + 0x18) + 0x2c) = *(param_1 + 0x55);
        *(*(param_1 + 0x18) + 0x30) = *(param_1 + 0x6d);
        *(*(param_1 + 0x18) + 0x34) = *(param_1 + 0x71);
        *(param_1 + 0x7d) = *(param_1 + 0x7d) & 0xfe;
        iVar3 = fcn.000020ae();
        *(param_1 + 0xbd) = iVar3;
        if (iVar3 == 0) {
            return -0x7ffffff7;
        }
        *(*(param_1 + 0x18) + 0x14) = *(*(param_1 + 0x18) + 0x14) | 1;
        iVar3 = *(param_1 + 0x35) * 500;
        do {
            if ((*(*(param_1 + 0x18) + 0x1c) & 1) != 0) break;
            fcn.000021d5();
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        if (iVar3 != 0) {
            iVar3 = fcn.0000151e();
            return iVar3;
        }
    }
    return -0x7ffffff9;
}


/* fcn.0000103e @ 0x103e */

int __fastcall fcn.0000103e(int param_1,int param_2)

{
    uint *puVar1;
    int *piVar2;
    uint8_t uVar3;
    uint *puVar4;
    int iVar5;
    int iVar6;
    uint uVar7;
    uint32_t uVar8;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_4h;
    
    puVar1 = param_1 + 0xd2;
    for (puVar4 = *puVar1; puVar4 != puVar1; puVar4 = *puVar4) {
        if (*(puVar4 + -0x1021) == param_2) {
            return -0x7fffffec;
        }
    }
    var_4h = param_2;
    iVar5 = fcn.000020ae();
    if (iVar5 == 0) {
code_r0x00001074:
        iVar6 = -0x7ffffff7;
    }
    else {
        *(iVar5 + 4) = var_4h;
        *(iVar5 + 0x1021) = param_1;
        iVar6 = fcn.00000f4d(0,var_4h);
        if (iVar6 < 0) {
            return iVar6;
        }
        uVar8 = *(param_1 + 0x41);
        if (*0x2494 == 0) {
            var_4h = ((uVar8 & 0xfff) != 0) + (uVar8 >> 0xc);
            var_10h = fcn.00002055();
            var_ch = 0;
            if (var_10h == 0) goto code_r0x00001074;
        }
        else {
            var_4h = ((uVar8 & 0xfff) != 0) + (uVar8 >> 0xc);
            iVar6 = (**(*0x2494 + 0x14))(*0x2494,6,var_4h,&var_10h,0x80,0);
            if (iVar6 < 0) {
                return iVar6;
            }
        }
        fcn.000020fd();
        *(iVar5 + 0x1008) = var_10h;
        *(iVar5 + 0x1010) = 1;
        *(iVar5 + 0x1014) = *(iVar5 + 8) + -1;
        *(iVar5 + 0x100c) = 7;
        uVar3 = *(iVar5 + 0x8a + (*(iVar5 + 0x22) & 0xf) * 4);
        var_4h = uVar3;
        *(iVar5 + 0x1018) = ((uVar3 & 0x20) == 0) << (uVar3 & 0x1f);
        *0x2450 = *(iVar5 + 4);
        *0x2454 = *(iVar5 + 0x80);
        *0x2458 = *(iVar5 + 0x84);
        uVar7 = fcn.0000070f();
        *(param_1 + 0xc2) = uVar7;
        uVar8 = *(param_1 + 0x2f);
        *(param_1 + 0x7e) = 1;
        if (0x3e < uVar8) {
            uVar8 = 0x3f;
        }
        *(param_1 + 0xa8) = uVar8;
        *(param_1 + 0xac) = uVar8;
        iVar6 = fcn.00000902(1,uVar8);
        if (-1 < iVar6) {
            *(param_1 + 0xce) = *(param_1 + 0xce) + 1;
            piVar2 = iVar5 + 0x1025;
            *piVar2 = puVar1;
            puVar1 = *(param_1 + 0xd6);
            *(iVar5 + 0x1029) = puVar1;
            *puVar1 = piVar2;
            *(param_1 + 0xd6) = piVar2;
        }
    }
    return iVar6;
}


/* fcn.000020c6 @ 0x20c6 */

void __fastcall fcn.000020c6(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.00002077();
    if ((iVar1 != 0) && (param_1 != 0)) {
        fcn.000020e7(param_1);
    }
    return;
}


/* fcn.000007b0 @ 0x7b0 */

int __fastcall fcn.000007b0(int param_1,int param_2)

{
    uint *puVar1;
    
    if (param_1 != 0) {
        for (puVar1 = *(param_1 + 0xd2); puVar1 != param_1 + 0xd2; puVar1 = *puVar1) {
            if ((param_2 == -1) || (*(puVar1 + -0x1021) == param_2)) {
                return puVar1 + -0x1025;
            }
        }
    }
    return 0;
}


/* fcn.00001a9f @ 0x1a9f */

uint32_t __fastcall fcn.00001a9f(int param_1)

{
    int iVar1;
    uint32_t in_EAX;
    uint32_t uVar2;
    
    if (*(param_1 + 8) == 0) {
        return in_EAX & 0xffffff00;
    }
    iVar1 = *(param_1 + 0x1c);
    if ((*(iVar1 + 4) & 8) == 0) {
        uVar2 = *(iVar1 + 0x14) >> 0xe & 0x3fffc;
    }
    else {
        uVar2 = (*(iVar1 + 0x18) << 0x10 | *(iVar1 + 0x16)) << 2;
    }
    return CONCAT31(uVar2 + 4 >> 8,'\x01' - (*(param_1 + 0xc) < uVar2 + 4));
}


/* fcn.00002160 @ 0x2160 */

void __cdecl fcn.00002160(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x48))(*(stack0xfffffff2 + -4));
    return;
}


