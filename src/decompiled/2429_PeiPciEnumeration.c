// decompiled by r2ghidra: 2429_PeiPciEnumeration.te
// functions: 29

/* fcn.00001b5b @ 0x1b5b */

void __fastcall fcn.00001b5b(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* entry0 @ 0xfd */

uint entry0(void)

{
    uint *puVar1;
    uint *puVar2;
    uint uVar3;
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = 0x106;
    puVar1 = fcn.00001bb7();
    var_4h = 0x110;
    puVar2 = fcn.00001bb7();
    if ((puVar1 != NULL) && (puVar2 != NULL)) {
        *puVar2 = 0xffd4d2b0;
        puVar2[1] = 0xffd4d42c;
        puVar2[2] = 0xffd4d4ba;
        *puVar1 = 0x80000010;
        puVar1[1] = 0xffd4d858;
        puVar1[2] = puVar2;
        var_4h = &var_ch;
        InterruptDescriptorTableRegister();
        uVar3 = (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),puVar1);
        return uVar3;
    }
    return 0x80000009;
}


/* fcn.00001bb7 @ 0x1bb7 */

void __fastcall fcn.00001bb7(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.00001b80();
    if ((iVar1 != 0) && (param_1 != 0)) {
        fcn.000000e0(iVar1,param_1);
    }
    return;
}


/* fcn.00001b80 @ 0x1b80 */

int32_t __fastcall fcn.00001b80(uint param_1)

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


/* fcn.00000181 @ 0x181 */

int __fastcall fcn.00000181(char *param_1)

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


/* fcn.00001b45 @ 0x1b45 */

int __fastcall fcn.00001b45(int param_1,int param_2,uint param_3)

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
    
    //[00] -r-x section size 7317 named .text
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


/* fcn.00001b1e @ 0x1b1e */

//WARNING: Removing unreachable block (ram,0x00001b37)

int64_t __cdecl fcn.00001b1e(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_4h;
    
    return arg_8h << 0x20;
}


/* fcn.00000ac5 @ 0xac5 */

int __fastcall fcn.00000ac5(int *param_1)

{
    while( true ) {
        if (param_1 == NULL) {
            return 0;
        }
        if (*param_1 == 1) break;
        param_1 = *(param_1 + 9);
    }
    return param_1 + 0x3b;
}


/* fcn.00001bd2 @ 0x1bd2 */

uint __cdecl fcn.00001bd2(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = (arg_ch & 1U) << 0x1c;
    return CONCAT31(uVar1 >> 8,*((arg_8h | uVar1) + 0xc0000000));
}


/* fcn.00000ada @ 0xada */

uint32_t __fastcall
fcn.00000ada(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5,int param_6)

{
    uint *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    
    puVar1 = *(param_1 + 0x44);
    do {
        if (puVar1 == param_1 + 0x44) {
            return param_2 & 0xffffff00;
        }
        if (*(puVar1 + -0x1d) == param_2) {
            uVar2 = *(puVar1 + -0x15);
            uVar3 = *(puVar1 + -0x19);
            if (param_4 < uVar2) {
code_r0x00000b55:
                uVar4 = param_4 + param_6 + CARRY4(param_3,param_5);
                if ((uVar2 < uVar4) || ((uVar2 <= uVar4 && (uVar3 < param_3 + param_5)))) goto code_r0x00000bab;
code_r0x00000b71:
                if ((param_4 < uVar2) || ((param_4 == uVar2 && (param_3 <= uVar3)))) goto code_r0x00000b97;
            }
            else {
                if ((param_4 != uVar2) || (uVar3 <= param_3)) {
                    uVar5 = *(puVar1 + -0xd) + uVar2 + CARRY4(*(puVar1 + -0x11),uVar3);
                    uVar4 = param_4 + param_6 + CARRY4(param_3,param_5);
                    if ((uVar4 < uVar5) ||
                       ((uVar4 <= uVar5 && (uVar4 = param_3 + param_5, param_3 + param_5 <= *(puVar1 + -0x11) + uVar3))
                       )) goto code_r0x00000bab;
                }
                if (param_4 <= uVar2) {
                    if ((param_4 < uVar2) || (param_3 < uVar3)) goto code_r0x00000b55;
                    goto code_r0x00000b71;
                }
            }
            uVar4 = *(puVar1 + -0xd) + uVar2 + CARRY4(*(puVar1 + -0x11),uVar3);
            if ((param_4 < uVar4) || ((param_4 == uVar4 && (param_3 < *(puVar1 + -0x11) + uVar3)))) {
code_r0x00000bab:
                return CONCAT31(uVar4 >> 8,1);
            }
        }
code_r0x00000b97:
        puVar1 = *puVar1;
    } while( true );
}


/* fcn.00001c09 @ 0x1c09 */

uint __cdecl fcn.00001c09(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    uchar in_CL;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = (arg_ch & 1U) << 0x1c;
    *((arg_8h | uVar1) + 0xc0000000) = in_CL;
    return CONCAT31(uVar1 >> 8,in_CL);
}


/* fcn.00001c81 @ 0x1c81 */

uint __cdecl fcn.00001c81(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    ushort in_CX;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = (arg_ch & 1U) << 0x1c;
    *((arg_8h | uVar1) + 0xc0000000) = in_CX;
    return CONCAT22(uVar1 >> 0x10,in_CX);
}


/* fcn.000002ae @ 0x2ae */

uint __fastcall fcn.000002ae(int param_1,int *param_2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    int iVar4;
    int arg_8h;
    int iVar5;
    uint32_t uVar6;
    int arg_ch;
    int *piVar7;
    uint32_t uVar8;
    bool bVar9;
    ulong uVar10;
    uint uVar11;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int8_t var_1h;
    
    piVar7 = param_1 + 0x11;
code_r0x00000605:
    do {
        do {
            do {
                piVar7 = *piVar7;
                if (piVar7 == param_1 + 0x11) {
                    if ((*param_2 == 1) && (*(param_2 + 0x7e) != '\0')) {
                        if (*(param_2 + 0x65) != 0) {
                            fcn.00000654(5);
                        }
                        if (*(param_2 + 0x69) != 0 || *(param_2 + 0x6d) != 0) {
                            fcn.00000654(6);
                        }
                    }
                    return 0;
                }
            } while (*(piVar7 + -0x2a) != param_2);
            if (*(piVar7 + -0x2f) == 0) {
                var_10h = 0;
                uVar8 = ((*(piVar7 + -0x2d) & 0x1f | *(piVar7 + -0x2e) << 5) << 3 | *(piVar7 + -0xb) & 7) << 0xc;
            }
            else {
                uVar10 = fcn.00001b1e(*(piVar7 + -0x2f),0);
                var_10h = uVar10 >> 0x20;
                uVar8 = uVar10 | ((*(piVar7 + -0x2d) & 0x1f | *(piVar7 + -0x2e) << 5) << 3 | *(piVar7 + -0xb) & 7) <<
                                 0xc;
            }
        } while (((*(piVar7 + -0x33) != 2) || (*(piVar7 + 3) != '\0')) || (*(piVar7 + 0xd) != '\0'));
        uVar10 = fcn.00000ac5();
        iVar4 = uVar10;
    } while (iVar4 == 0);
    arg_8h = uVar8 + 4;
    arg_ch = (uVar10 >> 0x20) + (0xfffffffb < uVar8);
    fcn.00001bd2(arg_8h,arg_ch);
    if (*(piVar7 + 0x32) != 0) goto code_r0x000003d2;
    goto code_r0x00000493;
code_r0x000003d2:
    uVar11 = *(piVar7 + 0x32);
    *(piVar7 + 3) = 1;
    var_18h = *(param_2 + 0x49);
    while (cVar3 = fcn.00000ada(var_18h,0,uVar11,0), cVar3 != '\0') {
        var_18h = var_18h + 0x1000;
        *(param_2 + 0x49) = var_18h;
        uVar11 = *(piVar7 + 0x32);
    }
    if ((*(iVar4 + 10) == 0) ||
       ((*(iVar4 + 6) <= *(param_2 + 0x49) && (*(piVar7 + 0x32) + *(param_2 + 0x49) <= *(iVar4 + 10))))) {
        *(piVar7 + 0x16) = *(param_2 + 0x49);
        *(param_2 + 0x49) = *(param_2 + 0x49) + *(piVar7 + 0x32);
        fcn.00001c09(uVar8 + 0x1c,var_10h + (0xffffffe3 < uVar8));
        fcn.00001c09(uVar8 + 0x1d,var_10h + (0xffffffe2 < uVar8));
        fcn.00001c09(arg_8h,arg_ch);
code_r0x00000493:
        if (*(piVar7 + 0x36) != 0 || *(piVar7 + 0x3a) != 0) {
            *(piVar7 + 3) = 1;
            uVar6 = *(param_2 + 0x5d);
            iVar5 = *(param_2 + 0x61);
            while (cVar3 = fcn.00000ada(uVar6,iVar5,*(piVar7 + 0x36),*(piVar7 + 0x3a)), cVar3 != '\0') {
                bVar9 = 0xffefffff < uVar6;
                uVar6 = uVar6 + 0x100000;
                *(param_2 + 0x5d) = uVar6;
                iVar5 = iVar5 + bVar9;
                *(param_2 + 0x61) = iVar5;
            }
            if (*(iVar4 + 0x1a) != 0 || *(iVar4 + 0x1e) != 0) {
                uVar6 = *(param_2 + 0x61);
                uVar2 = *(param_2 + 0x5d);
                if ((uVar6 < *(iVar4 + 0x16)) || ((uVar6 <= *(iVar4 + 0x16) && (uVar2 < *(iVar4 + 0x12)))))
                goto code_r0x00000605;
                uVar6 = uVar6 + *(piVar7 + 0x3a) + CARRY4(uVar2,*(piVar7 + 0x36));
                if ((*(iVar4 + 0x1e) < uVar6) ||
                   ((*(iVar4 + 0x1e) <= uVar6 && (*(iVar4 + 0x1a) < uVar2 + *(piVar7 + 0x36))))) goto code_r0x00000605;
            }
            *(piVar7 + 0x2a) = *(param_2 + 0x5d);
            *(piVar7 + 0x2e) = *(param_2 + 0x61);
            uVar2 = *(piVar7 + 0x36);
            puVar1 = param_2 + 0x5d;
            uVar6 = *puVar1;
            *puVar1 = *puVar1 + uVar2;
            *(param_2 + 0x61) = *(param_2 + 0x61) + *(piVar7 + 0x3a) + CARRY4(uVar6,uVar2);
            fcn.00001c81(uVar8 + 0x20,var_10h + (0xffffffdf < uVar8));
            fcn.00001c81(uVar8 + 0x22,var_10h + (0xffffffdd < uVar8));
            fcn.00001c09(arg_8h,arg_ch);
        }
        fcn.000002ae();
        if (*(piVar7 + 0x32) != 0) {
            fcn.00000654(5);
        }
        if (*(piVar7 + 0x36) != 0 || *(piVar7 + 0x3a) != 0) {
            fcn.00000654(6);
        }
    }
    goto code_r0x00000605;
}


/* fcn.00000654 @ 0x654 */

//WARNING: Removing unreachable block (ram,0x0000086a)
//WARNING: Variable defined which should be unmapped: var_1h

uint __cdecl fcn.00000654(uint32_t arg_8h)

{
    char cVar1;
    uint uVar2;
    int iVar3;
    int32_t iVar4;
    int in_ECX;
    int *in_EDX;
    uint32_t uVar5;
    uint32_t uVar6;
    int32_t iVar7;
    int32_t iVar8;
    bool bVar9;
    ulong uVar10;
    unkbyte5 Var11;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int8_t var_2h;
    uint32_t var_1h;
    
    var_14h = 0;
    var_38h = 0;
    var_34h = 0;
    var_8h = 0;
    if ((in_ECX == 0) || (in_EDX == NULL)) {
        uVar2 = 0x80000002;
    }
    else {
        var_1h._0_1_ = *(in_EDX + 0x7e);
        if (arg_8h == 5) {
            var_8h = *(in_EDX + 0x49);
            var_2h = 5;
        }
        var_ch = 0;
        if (arg_8h == 6) {
            var_8h = *(in_EDX + 0x5d);
            var_ch = *(in_EDX + 0x61);
            var_2h = 6;
        }
        var_20h = in_EDX;
        Var11 = fcn.00000ac5();
        if (Var11 == 0) {
code_r0x000006d2:
            uVar2 = 0x8000000e;
        }
        else {
            while (var_18h = Var11, Var11 >> 0x20 != '\0') {
                iVar3 = fcn.000008e4(arg_8h,&var_38h,&var_14h);
                iVar8 = var_14h;
                if (((iVar3 < 0) || (var_14h == 0)) || (var_38h == 0 && var_34h == 0)) goto code_r0x000006d2;
                if (*(var_14h + 4) == 0) {
                    var_10h = 0;
                    uVar5 = ((*(var_14h + 6) & 0x1f | *(var_14h + 5) << 5) << 3 | *(var_14h + 7) & 7) << 0xc;
                }
                else {
                    uVar10 = fcn.00001b1e(*(var_14h + 4),0);
                    var_10h = uVar10 >> 0x20;
                    uVar5 = uVar10 | ((*(iVar8 + 6) & 0x1f | *(iVar8 + 5) << 5) << 3 | *(iVar8 + 7) & 7) << 0xc;
                    in_EDX = var_20h;
                }
                Var11 = CONCAT14(var_1h,var_18h);
                var_1ch = uVar5;
                if (*(iVar8 + 0x2b) == '\0') {
                    if (*in_EDX == 1) {
                        var_2ch = *(iVar8 + 0x1d);
                        var_28h = *(iVar8 + 0x19);
                        cVar1 = fcn.00000ada(var_8h,var_ch,var_28h,var_2ch);
                        iVar4 = var_28h;
                        if (cVar1 != '\0') {
                            uVar6 = var_8h;
                            iVar7 = var_ch;
                            do {
                                bVar9 = CARRY4(uVar6,iVar4);
                                uVar6 = uVar6 + iVar4;
                                iVar7 = iVar7 + var_2ch + bVar9;
                                cVar1 = fcn.00000ada(uVar6,iVar7,iVar4,var_2ch);
                            } while (cVar1 != '\0');
                            uVar5 = var_1ch;
                            in_EDX = var_20h;
                            iVar8 = var_14h;
                            var_ch = iVar7;
                            var_8h = uVar6;
                        }
                    }
                    *(iVar8 + 0x11) = var_8h;
                    *(iVar8 + 0x15) = var_ch;
                    bVar9 = CARRY4(var_8h,*(iVar8 + 0x19));
                    var_8h = var_8h + *(iVar8 + 0x19);
                    var_ch = var_ch + *(iVar8 + 0x1d) + bVar9;
                    if ((*(iVar8 + 0xd) == 5) || (*(iVar8 + 0xd) == 3)) {
                        iVar4 = *(iVar8 + 0x29) + uVar5;
                        iVar7 = var_10h + CARRY4(*(iVar8 + 0x29),uVar5);
code_r0x00000898:
                        fcn.00001cf8(iVar4,iVar7);
                    }
                    else if (*(iVar8 + 0xd) == 4) {
                        fcn.00001cf8(*(iVar8 + 0x29) + uVar5,var_10h + CARRY4(*(iVar8 + 0x29),uVar5));
                        var_2ch = 0;
                        uVar6 = *(iVar8 + 0x29) + uVar5;
                        iVar4 = uVar6 + 4;
                        iVar7 = var_10h + CARRY4(*(iVar8 + 0x29),uVar5) + (0xfffffffb < uVar6);
                        goto code_r0x00000898;
                    }
                    var_1h._0_1_ = var_1h + -1;
                    *(iVar8 + 0x2a) = 1;
                    iVar3 = var_10h + (0xfffffffb < uVar5);
                    fcn.00001bd2(uVar5 + 4,iVar3);
                    fcn.00001c09(uVar5 + 4,iVar3);
                    Var11 = CONCAT14(var_1h,var_18h);
                }
            }
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.000008e4 @ 0x8e4 */

uint __fastcall fcn.000008e4(int param_1,int param_2,int param_3,uint32_t *param_4,int *param_5)

{
    int *piVar1;
    uint32_t uVar2;
    int *piVar3;
    
    piVar1 = param_1 + 0x11;
    piVar3 = *piVar1;
    *param_4 = 0;
    param_4[1] = 0;
    if (piVar3 != piVar1) {
        do {
            if ((((*(piVar3 + -0x2a) == param_2) && (*(piVar3 + -0x33) == 3)) && (*(piVar3 + -9) == '\0')) &&
               (((param_3 != 6 && (param_3 != 5)) ||
                ((*(piVar3 + -0x26) == 3 || ((*(piVar3 + -0x26) == 4 || (*(piVar3 + -0x26) == 5)))))))) {
                uVar2 = *(piVar3 + -0xe);
                if ((param_4[1] <= uVar2) && ((param_4[1] < uVar2 || (*param_4 < *(piVar3 + -0x12))))) {
                    *param_4 = *(piVar3 + -0x12);
                    param_4[1] = uVar2;
                    *param_5 = piVar3 + -0x33;
                }
            }
            piVar3 = *piVar3;
        } while (piVar3 != piVar1);
        if (*param_4 != 0 || param_4[1] != 0) {
            return 0;
        }
    }
    return 0x8000000e;
}


/* fcn.00001cf8 @ 0x1cf8 */

void __cdecl fcn.00001cf8(int32_t arg_8h,int32_t arg_ch)

{
    uint in_ECX;
    int32_t var_8h;
    int32_t var_4h;
    
    *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000) = in_ECX;
    return;
}


/* fcn.00000968 @ 0x968 */

ulong __fastcall fcn.00000968(int param_1,int param_2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint uVar4;
    uint32_t uVar5;
    uint *puVar6;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    uint32_t var_4h;
    
    uVar5 = 0;
    var_4h = 0;
    if ((param_1 == 0) || (param_2 == 0)) {
        uVar4 = 0x80000002;
    }
    else {
        for (puVar6 = *(param_1 + 0x11); puVar6 != param_1 + 0x11; puVar6 = *puVar6) {
            if (*(puVar6 + -0x2a) == param_2) {
                if (*(puVar6 + -0x33) == 2) {
                    fcn.00000968();
                    *(param_2 + 0x65) = *(param_2 + 0x65) + *(puVar6 + 0x32);
                    uVar2 = *(puVar6 + 0x36);
                    puVar1 = param_2 + 0x69;
                    uVar5 = *puVar1;
                    *puVar1 = *puVar1 + uVar2;
                    *(param_2 + 0x6d) = *(param_2 + 0x6d) + *(puVar6 + 0x3a) + CARRY4(uVar5,uVar2);
                }
                if ((*(puVar6 + -0x33) == 3) && (*(puVar6 + -2) == '\0')) {
                    if (*(puVar6 + -0x26) == 5) {
                        *(param_2 + 0x65) = *(param_2 + 0x65) + *(puVar6 + -0x1a);
                        if (((*(param_2 + 0x71) == 0) || (*(puVar6 + -0xe) != 0)) ||
                           (*(param_2 + 0x71) < *(puVar6 + -0x12))) {
                            *(param_2 + 0x71) = *(puVar6 + -0x12);
                        }
                    }
                    else if ((*(puVar6 + -0x26) == 3) || (*(puVar6 + -0x26) == 4)) {
                        uVar2 = *(puVar6 + -0x1a);
                        puVar1 = param_2 + 0x69;
                        uVar5 = *puVar1;
                        *puVar1 = *puVar1 + uVar2;
                        *(param_2 + 0x6d) = *(param_2 + 0x6d) + *(puVar6 + -0x16) + CARRY4(uVar5,uVar2);
                        uVar5 = *(puVar6 + -0x12);
                        if (*(param_2 + 0x75) == 0 && *(param_2 + 0x79) == 0) {
                            *(param_2 + 0x75) = uVar5;
                            *(param_2 + 0x79) = *(puVar6 + -0xe);
                        }
                        else {
                            uVar2 = *(puVar6 + -0xe);
                            if ((*(param_2 + 0x79) <= uVar2) &&
                               ((*(param_2 + 0x79) < uVar2 || (*(param_2 + 0x75) < uVar5)))) {
                                *(param_2 + 0x75) = uVar5;
                                *(param_2 + 0x79) = uVar2;
                            }
                        }
                    }
                }
            }
        }
        uVar5 = *(param_2 + 0x65);
        if ((uVar5 != 0) && (var_4h = uVar5 & 0xfff, var_4h != 0)) {
            *(param_2 + 0x65) = (uVar5 - var_4h) + 0x1000;
        }
        uVar5 = *(param_2 + 0x6d);
        if (*(param_2 + 0x69) != 0 || uVar5 != 0) {
            uVar3 = uVar5;
            uVar5 = uVar5 / 0x100000;
            if (&stack0x00000000 != 0x8) {
                var_4h = (uVar3 % 0x100000 << 0x20 | *(param_2 + 0x69)) % 0x100000;
            }
            if (var_4h != 0) {
                puVar1 = param_2 + 0x69;
                uVar2 = *puVar1;
                *puVar1 = *puVar1 + (0x100000 - var_4h);
                *(param_2 + 0x6d) = *(param_2 + 0x6d) + CARRY4(uVar2,0x100000 - var_4h);
            }
        }
        uVar4 = 0;
    }
    return CONCAT44(uVar5,uVar4);
}


/* fcn.00000e3e @ 0xe3e */

//WARNING: Removing unreachable block (ram,0x0000108b)

uint __fastcall fcn.00000e3e(int *param_1)

{
    int iVar1;
    uint64_t uVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    int arg_8h;
    uint32_t uVar5;
    int32_t iVar6;
    int arg_ch;
    uint32_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    int32_t var_18h;
    uint32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    if (*param_1 != 3) {
        return 0x80000003;
    }
    if (*(param_1 + 1) == 0) {
        var_4h = 0;
        uVar7 = ((*(param_1 + 6) & 0x1f | *(param_1 + 5) << 5) << 3 | *(param_1 + 7) & 7) << 0xc;
    }
    else {
        uVar8 = fcn.00001b1e(*(param_1 + 1),0);
        var_4h = uVar8 >> 0x20;
        uVar7 = uVar8 | ((*(param_1 + 6) & 0x1f | *(param_1 + 5) << 5) << 3 | *(param_1 + 7) & 7) << 0xc;
    }
    uVar4 = fcn.00001cc1(*(param_1 + 0x29) + uVar7,var_4h + CARRY4(*(param_1 + 0x29),uVar7));
    if ((uVar4 & 1) == 0) {
        if ((uVar4 & 0xf) == 0) {
            *(param_1 + 0xd) = 3;
        }
        else {
            if ((uVar4 & 0xf) != 4) {
                return 0x80000003;
            }
            *(param_1 + 0xd) = 4;
        }
    }
    else {
        *(param_1 + 0xd) = 5;
    }
    arg_8h = uVar7 + 4;
    arg_ch = var_4h + (0xfffffffb < uVar7);
    uVar3 = fcn.00001c46(arg_8h,arg_ch);
    if ((uVar3 & 7) != 0) {
        fcn.00001c81(arg_8h,arg_ch);
    }
    iVar1 = *(param_1 + 0xd);
    if (iVar1 == 3) {
code_r0x000010ab:
        uVar4 = fcn.00001cc1(*(param_1 + 0x29) + uVar7,var_4h + CARRY4(*(param_1 + 0x29),uVar7));
        *(param_1 + 0x15) = 0;
        *(param_1 + 0x11) = ((*(param_1 + 0xd) != 5) - 1 & 0xc) - 0x10 & uVar4;
        fcn.00001cf8(*(param_1 + 0x29) + uVar7,var_4h + CARRY4(*(param_1 + 0x29),uVar7));
        uVar4 = fcn.00001cc1(*(param_1 + 0x29) + uVar7,var_4h + CARRY4(*(param_1 + 0x29),uVar7));
        if (*(param_1 + 0xd) == 5) {
            uVar4 = uVar4 & 0xfffffffc;
        }
        else {
            uVar4 = uVar4 & 0xfffffff0;
        }
        if (uVar4 == 0) {
            *(param_1 + 0xd) = 0;
        }
        else {
            *(param_1 + 0x25) = 0;
            uVar4 = ~uVar4;
            *(param_1 + 0x21) = uVar4;
            *(param_1 + 0x19) = uVar4 + 1;
            *(param_1 + 0x1d) = *(param_1 + 0x25) + (0xfffffffe < uVar4);
        }
        iVar6 = *(param_1 + 0x29) + uVar7;
        var_4h = var_4h + CARRY4(*(param_1 + 0x29),uVar7);
    }
    else {
        if (iVar1 != 4) {
            if (iVar1 != 5) {
                *(param_1 + 0xd) = 0;
                goto code_r0x00001141;
            }
            goto code_r0x000010ab;
        }
        uVar4 = fcn.00001cc1(*(param_1 + 0x29) + uVar7,var_4h + CARRY4(*(param_1 + 0x29),uVar7));
        uVar5 = *(param_1 + 0x29) + uVar7;
        iVar6 = fcn.00001cc1(uVar5 + 4,var_4h + CARRY4(*(param_1 + 0x29),uVar7) + (0xfffffffb < uVar5));
        iVar9 = fcn.00001b1e(iVar6,0);
        *(param_1 + 0x11) = iVar9 + uVar4;
        *(param_1 + 0x11) = *(param_1 + 0x11) & 0xfffffff0;
        *(param_1 + 0x15) = iVar9 + uVar4 >> 0x20;
        fcn.00001cf8(*(param_1 + 0x29) + uVar7,var_4h + CARRY4(*(param_1 + 0x29),uVar7));
        uVar4 = *(param_1 + 0x29) + uVar7;
        fcn.00001cf8(uVar4 + 4,var_4h + CARRY4(*(param_1 + 0x29),uVar7) + (0xfffffffb < uVar4));
        uVar4 = fcn.00001cc1(*(param_1 + 0x29) + uVar7,var_4h + CARRY4(*(param_1 + 0x29),uVar7));
        uVar5 = *(param_1 + 0x29) + uVar7;
        iVar6 = fcn.00001cc1(uVar5 + 4,var_4h + CARRY4(*(param_1 + 0x29),uVar7) + (0xfffffffb < uVar5));
        iVar9 = fcn.00001b1e(iVar6,0);
        uVar2 = iVar9 + uVar4;
        if ((uVar2 & 0xfffffff0) == 0 && uVar2 >> 0x20 == 0) {
            *(param_1 + 0xd) = 0;
        }
        else {
            uVar4 = ~(uVar2 & 0xfffffff0);
            *(param_1 + 0x25) = 0;
            *(param_1 + 0x21) = uVar4;
            *(param_1 + 0x19) = uVar4 + 1;
            *(param_1 + 0x1d) = 0xfffffffe < uVar4;
        }
        fcn.00001cf8(*(param_1 + 0x29) + uVar7,var_4h + CARRY4(*(param_1 + 0x29),uVar7));
        uVar4 = *(param_1 + 0x29) + uVar7;
        iVar6 = uVar4 + 4;
        var_4h = var_4h + CARRY4(*(param_1 + 0x29),uVar7) + (0xfffffffb < uVar4);
    }
    fcn.00001cf8(iVar6,var_4h);
code_r0x00001141:
    if ((uVar3 & 7) != 0) {
        fcn.00001c81(arg_8h,arg_ch);
    }
    return 0;
}


/* fcn.00000cd1 @ 0xcd1 */

//WARNING: Removing unreachable block (ram,0x00000cf3)

uint __cdecl fcn.00000cd1(int32_t arg_8h,int32_t arg_ch)

{
    uint8_t uVar1;
    int iVar2;
    uint uVar3;
    int32_t var_44h;
    int8_t var_40h;
    int8_t var_3fh;
    int8_t var_3eh;
    int8_t var_3dh;
    int8_t var_3ch;
    uint32_t var_37h;
    int32_t var_33h;
    int32_t var_2fh;
    int8_t var_1bh;
    
    iVar2 = fcn.00000e3e();
    if ((iVar2 < 0) || (var_33h == 0 && var_2fh == 0)) {
        uVar3 = 0;
    }
    else {
        iVar2 = arg_ch + (0xfffffffb < arg_8h);
        uVar1 = fcn.00001bd2(arg_8h + 4,iVar2);
        if (((var_37h != 5) + 5U & uVar1) == 0) {
            fcn.00001c09(arg_8h + 4,iVar2);
        }
        uVar3 = 1;
    }
    return uVar3;
}


/* fcn.00001cc1 @ 0x1cc1 */

uint __cdecl fcn.00001cc1(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


/* fcn.00001c46 @ 0x1c46 */

ushort __cdecl fcn.00001c46(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


/* fcn.00001161 @ 0x1161 */

uint __fastcall fcn.00001161(uint param_1,uint *param_2,uint32_t param_3,int param_4)

{
    int *piVar1;
    uint32_t uVar2;
    int iVar3;
    uint *puVar4;
    char cVar5;
    char cVar6;
    uint8_t uVar7;
    uint16_t uVar8;
    int iVar9;
    char *pcVar10;
    int iVar11;
    uint32_t uVar12;
    uint *puVar13;
    int *piVar14;
    
    cVar5 = fcn.00001bd2(param_3 + 0x19,param_4 + (0xffffffe6 < param_3));
    cVar6 = fcn.00001bd2(param_3 + 0x1a,param_4 + (0xffffffe5 < param_3));
    uVar8 = fcn.00001c46(param_3 + 0x20,param_4 + (0xffffffdf < param_3));
    uVar7 = fcn.00001bd2(param_3 + 0x1c,param_4 + (0xffffffe3 < param_3));
    if (((((cVar5 != '\0') && (cVar6 != '\0')) && (uVar8 != 0)) &&
        ((uVar7 != 0 && (iVar9 = fcn.00000ac5(), iVar9 != 0)))) && (pcVar10 = fcn.00001bb7(), pcVar10 != NULL)) {
        *pcVar10 = cVar5;
        pcVar10[1] = cVar6;
        *(pcVar10 + 2) = uVar8 << 0x10;
        pcVar10[6] = '\0';
        pcVar10[7] = '\0';
        pcVar10[8] = '\0';
        pcVar10[9] = '\0';
        iVar11 = fcn.00001c46(param_3 + 0x22,param_4 + (0xffffffdd < param_3));
        *(pcVar10 + 10) = iVar11 << 0x10;
        pcVar10[0xe] = '\0';
        pcVar10[0xf] = '\0';
        pcVar10[0x10] = '\0';
        pcVar10[0x11] = '\0';
        *(pcVar10 + 0x12) = uVar7 << 8;
        uVar12 = fcn.00001bd2(param_3 + 0x1d,param_4 + (0xffffffe2 < param_3));
        piVar14 = pcVar10 + 0x1a;
        *(pcVar10 + 0x16) = (uVar12 & 0xff) << 8;
        *piVar14 = iVar9 + 0x4c;
        piVar1 = *(iVar9 + 0x50);
        *(pcVar10 + 0x1e) = piVar1;
        *piVar1 = piVar14;
        *(iVar9 + 0x50) = piVar14;
        if ((*(pcVar10 + 2) != 0 || *(pcVar10 + 6) != 0) && (*(pcVar10 + 10) != 0 || *(pcVar10 + 0xe) != 0)) {
            puVar13 = fcn.00001bb7();
            if (puVar13 == NULL) {
                return 1;
            }
            *puVar13 = 6;
            puVar13[1] = *(pcVar10 + 2);
            puVar13[2] = *(pcVar10 + 6);
            uVar12 = *(pcVar10 + 10);
            uVar2 = *(pcVar10 + 2);
            iVar11 = *(pcVar10 + 0xe);
            iVar3 = *(pcVar10 + 6);
            puVar13[3] = uVar12 - *(pcVar10 + 2);
            puVar13[4] = (iVar11 - iVar3) - (uVar12 < uVar2);
            piVar14 = puVar13 + 0x1d;
            *piVar14 = iVar9 + 0x44;
            puVar4 = *(iVar9 + 0x48);
            *(puVar13 + 0x21) = puVar4;
            *puVar4 = piVar14;
            *(iVar9 + 0x48) = piVar14;
        }
        if ((*(pcVar10 + 0x12) != 0) && (*(pcVar10 + 0x16) != 0)) {
            puVar13 = fcn.00001bb7();
            if (puVar13 == NULL) {
                return 1;
            }
            *puVar13 = 5;
            puVar13[1] = *(pcVar10 + 0x12);
            puVar13[2] = 0;
            puVar13[3] = *(pcVar10 + 0x16) - *(pcVar10 + 0x12);
            puVar13[4] = 0;
            piVar14 = puVar13 + 0x1d;
            *piVar14 = iVar9 + 0x44;
            puVar4 = *(iVar9 + 0x48);
            *(puVar13 + 0x21) = puVar4;
            *puVar4 = piVar14;
            *(iVar9 + 0x48) = piVar14;
        }
        *param_2 = pcVar10;
        return 1;
    }
    return 0;
}


/* fcn.000001c1 @ 0x1c1 */

int __fastcall fcn.000001c1(int param_1,int param_2)

{
    int iVar1;
    int iVar2;
    
    if (param_2 != 0) {
        if (param_1 == 0) {
            iVar1 = 0;
        }
        else {
            iVar1 = fcn.00000181();
            iVar1 = iVar1 + -4;
        }
        iVar2 = fcn.00001bb7();
        if (iVar2 != 0) {
            if (iVar1 == 0) {
                iVar1 = iVar2;
            }
            else {
                fcn.00001b45(iVar1);
                iVar1 = iVar1 + iVar2;
            }
            if (*(param_2 + 2) != 0) {
                fcn.00001b45(*(param_2 + 2));
            }
            iVar1 = *(param_2 + 2) + iVar1 + *(param_2 + 3) * 0x100;
            if (iVar1 != -0x2b2798) {
                section..text(iVar1,0xffd4d868,4);
            }
        }
        return iVar2;
    }
    if (param_1 == 0) {
        param_1 = -0x2b2798;
    }
    if (param_1 != 0) {
        iVar1 = fcn.00000181();
        iVar2 = fcn.00001bb7();
        if ((iVar2 != 0) && (iVar1 != 0)) {
            fcn.00001b45(iVar1);
        }
        return iVar2;
    }
    return 0;
}


/* fcn.00001359 @ 0x1359 */

int __fastcall fcn.00001359(uint param_1,int param_2,int param_3)

{
    int *piVar1;
    uint8_t uVar2;
    int *piVar3;
    bool bVar4;
    uchar uVar5;
    uint8_t uVar6;
    char cVar7;
    int16_t iVar8;
    uint32_t uVar9;
    int iVar10;
    uint *puVar11;
    uint uVar12;
    int iVar13;
    uint32_t uVar14;
    ulong uVar15;
    char cStack_22;
    uchar uStack_21;
    uchar uStack_20;
    uchar uStack_1f;
    uchar uStack_1e;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    uint32_t uStack_14;
    int iStack_10;
    uint uStack_c;
    uchar *puStack_8;
    uint uStack_4;
    
    uVar14 = 0;
    uStack_21 = 0x10;
    uVar2 = *(param_3 + 4);
    bVar4 = false;
    uStack_14 = CONCAT31(uStack_14._1_3_,*(param_3 + 0x3d));
    uStack_18 = uStack_18 & 0xffffff00;
    uVar6 = *(param_3 + 0x3d);
    iStack_10 = param_2;
    uStack_c = param_1;
    do {
        uVar9 = uVar6;
        uStack_1c = uStack_1c & 0xffffff00;
        do {
            if (uVar2 == 0) {
                iVar13 = 0;
                uVar14 = ((uVar9 << 5 | uVar14 >> 8 & 0x1f) << 3 | uVar14 & 7) << 0xc;
            }
            else {
                uVar15 = fcn.00001b1e(uVar2,0);
                iVar13 = uVar15 >> 0x20;
                uVar14 = uVar15 | (((uStack_14 & 0xff) << 5 | uStack_18 & 0x1f) << 3 | uStack_1c & 7) << 0xc;
            }
            iVar8 = fcn.00001c46(uVar14,iVar13);
            if ((uStack_1c == '\0') && (iVar8 == -1)) break;
            cVar7 = uStack_1c;
            if (iVar8 != -1) {
                uVar6 = fcn.00001bd2(uVar14 + 0xe,iVar13 + (0xfffffff1 < uVar14));
                if ((uStack_1c == '\0') && (uVar6 < '\0')) {
                    bVar4 = true;
                }
                if ((uVar6 & 0x7f) == 0) {
                    cStack_22 = fcn.00000baf(uStack_14,uStack_18,uStack_1c);
                    fcn.00001cc1(uVar14,iVar13);
                    uVar12 = fcn.00001cc1(uVar14 + 8,iVar13 + (0xfffffff7 < uVar14));
                    uStack_20 = uVar12 >> 0x18;
                    uStack_1e = uVar12 >> 8;
                    uStack_1f = uVar12 >> 0x10;
                    cVar7 = fcn.00000da3(uVar14,iVar13,&cStack_22);
                    if (cVar7 == '\0') goto code_r0x0000162e;
                    puVar11 = fcn.00001bb7();
                    if (puVar11 == NULL) {
                        return -0x7ffffff7;
                    }
                    uVar5 = uStack_18;
                    cVar7 = uStack_1c;
                    *puVar11 = 3;
                    *(puVar11 + 1) = *(param_3 + 4);
                    *(puVar11 + 5) = uStack_14;
                    *(puVar11 + 6) = uStack_18;
                    *(puVar11 + 7) = uStack_1c;
                    if (puVar11 + 0xb != &uStack_20) {
                        section..text(puVar11 + 0xb,&uStack_20,3);
                    }
                    *(puVar11 + 0x29) = uStack_21;
                    *(puVar11 + 9) = param_3;
                    *0xffd4d870 = cVar7;
                    *0xffd4d871 = uVar5;
                    uVar12 = fcn.000001c1();
                    *(puVar11 + 0x2f) = uVar12;
                    if (cStack_22 == '\0') {
                        iVar13 = fcn.00000e3e();
                        if (iVar13 < 0) goto code_r0x00001767;
                    }
                    else {
                        *(puVar11 + 0x2a) = 0x101;
                    }
                    piVar1 = puVar11 + 0x33;
                    *(param_3 + 0x7e) = *(param_3 + 0x7e) + '\x01';
                    *(iStack_10 + 0xd) = *(iStack_10 + 0xd) + 1;
                    *piVar1 = iStack_10 + 0x11;
                    piVar3 = *(iStack_10 + 0x15);
                    *(puVar11 + 0x37) = piVar3;
                    *piVar3 = piVar1;
                    *(iStack_10 + 0x15) = piVar1;
                }
                else {
                    if ((uVar6 & 0x7f) == 1) {
                        iVar10 = fcn.00000ac5();
                        if (iVar10 == 0) {
                            return -0x7ffffff2;
                        }
                        cStack_22 = fcn.00001161(uVar14,iVar13);
                        if (cStack_22 == '\0') {
                            do {
                                puVar11 = *(iVar10 + 0x4c);
                                *0xffd4d8b4 = *0xffd4d8b4 + 1;
                                while( true ) {
                                    if (puVar11 == iVar10 + 0x4c) goto code_r0x000014d2;
                                    if ((*(puVar11 + -0x1a) <= *0xffd4d8b4) && (*0xffd4d8b4 <= *(puVar11 + -0x19)))
                                    break;
                                    puVar11 = *puVar11;
                                }
                            } while( true );
                        }
code_r0x000014d2:
                        puVar11 = fcn.00001bb7();
                        if (puVar11 == NULL) {
                            return -0x7ffffff7;
                        }
                        *puVar11 = 2;
                        *(puVar11 + 1) = *(param_3 + 4);
                        *(puVar11 + 5) = uStack_14;
                        *(puVar11 + 6) = uStack_18;
                        *(puVar11 + 7) = uStack_1c;
                        *(puVar11 + 9) = param_3;
                        *0xffd4d871 = uStack_18;
                        *0xffd4d870 = uStack_1c;
                        uStack_4 = fcn.000001c1();
                        uVar6 = *0xffd4d8b4;
                        *(puVar11 + 0xf) = uStack_14;
                        if (*(param_3 + 0x3e) <= uVar6) {
                            return -0x7ffffff7;
                        }
                        if (cStack_22 == '\0') {
                            *(puVar11 + 0x3d) = uVar6;
                            *(puVar11 + 0x3e) = *(param_3 + 0x3e);
                            fcn.00001c09(uVar14 + 0x18,iVar13 + (0xffffffe7 < uVar14));
                            fcn.00001c09(uVar14 + 0x19,iVar13 + (0xffffffe6 < uVar14));
                            fcn.00001c09(uVar14 + 0x1a,iVar13 + (0xffffffe5 < uVar14));
                        }
                        else {
                            *(puVar11 + 0x3d) = *puStack_8;
                            *(puVar11 + 0x3e) = puStack_8[1];
                            *(puVar11 + 0x10) = 1;
                            *(puVar11 + 0x4d) = *(puStack_8 + 2);
                            *(puVar11 + 0x51) = *(puStack_8 + 6);
                            *(puVar11 + 0x55) = *(puStack_8 + 10);
                            *(puVar11 + 0x59) = *(puStack_8 + 0xe);
                            *(puVar11 + 0x41) = *(puStack_8 + 0x12);
                            *(puVar11 + 0x45) = *(puStack_8 + 0x16);
                        }
                        iVar10 = fcn.00001359();
                        if (iVar10 < 0) {
                            return iVar10;
                        }
                        if ((*(puVar11 + 0x7e) != '\0') || (*(puVar11 + 0x8f) != '\0')) {
                            piVar1 = puVar11 + 0x33;
                            *piVar1 = iStack_10 + 0x11;
                            piVar3 = *(iStack_10 + 0x15);
                            *(puVar11 + 0x37) = piVar3;
                            *piVar3 = piVar1;
                            *(iStack_10 + 0x15) = piVar1;
                            *(param_3 + 0x8f) = *(param_3 + 0x8f) + '\x01';
                            *(iStack_10 + 0xd) = *(iStack_10 + 0xd) + 1;
                        }
                        if (cStack_22 == '\0') {
                            *(puVar11 + 0x3e) = *0xffd4d8b4;
                            fcn.00001c09(uVar14 + 0x1a,iVar13 + (0xffffffe5 < uVar14));
                        }
                    }
code_r0x0000162e:
                    cVar7 = uStack_1c;
                }
                if ((cVar7 == '\0') && (!bVar4)) break;
                bVar4 = false;
            }
code_r0x00001767:
            uVar6 = cVar7 + 1;
            uVar9 = uStack_14 & 0xff;
            uVar14 = CONCAT11(uStack_18,uVar6);
            uStack_1c = CONCAT31(uStack_1c._1_3_,uVar6);
        } while (uVar6 < 8);
        uVar6 = uStack_18 + 1;
        uVar14 = uVar6 << 8;
        uStack_18 = CONCAT31(uStack_18._1_3_,uVar6);
        if (0x1f < uVar6) {
            return 0;
        }
        uVar6 = uStack_14;
    } while( true );
}


/* fcn.00000baf @ 0xbaf */

uint32_t fcn.00000baf(void)

{
    int *piVar1;
    int *piVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int *piVar6;
    int iVar7;
    uint8_t uVar8;
    uint32_t uVar9;
    ulong uVar10;
    int iStack_2f;
    uint32_t uStack_2b;
    uint32_t uStack_27;
    char cStack_13;
    
    uVar4 = 0x10;
    do {
        uVar9 = uVar4;
        cStack_13 = uVar9;
        iVar5 = fcn.00000e3e();
        uVar3 = uStack_27;
        uVar4 = uStack_2b;
        if ((-1 < iVar5) && (iStack_2f != 0)) {
            if (iStack_2f == 4) {
                uVar9 = CONCAT31(uVar9 >> 8,uVar9 + '\x04');
            }
            if (uStack_2b != 0 || uStack_27 != 0) {
                if (iStack_2f != 5) {
                    iStack_2f = 6;
                }
                uVar10 = fcn.00000ac5();
                iVar7 = uVar10 >> 0x20;
                iVar5 = uVar10;
                uVar9 = CONCAT11(1,uVar9);
                if (iVar5 == 0) {
                    return 1;
                }
                if (((iVar7 == 6) &&
                    ((uVar3 < *(iVar5 + 0x16) ||
                     ((((uVar3 == *(iVar5 + 0x16) && (uVar4 < *(iVar5 + 0x12))) || (*(iVar5 + 0x1e) < uVar3)) ||
                      ((*(iVar5 + 0x1e) <= uVar3 && (*(iVar5 + 0x1a) < uVar4)))))))) ||
                   ((iVar7 == 5 && (((uVar3 != 0 || (uVar4 < *(iVar5 + 6))) || (*(iVar5 + 10) < uVar4)))))) {
                    return 0;
                }
                piVar6 = fcn.00001bb7();
                if (piVar6 == NULL) {
                    return 1;
                }
                if (piVar6 != &iStack_2f) {
                    section..text(piVar6,&iStack_2f,0x1d);
                }
                piVar1 = piVar6 + 0x1d;
                *piVar1 = iVar5 + 0x44;
                piVar2 = *(iVar5 + 0x48);
                *(piVar6 + 0x21) = piVar2;
                *piVar2 = piVar1;
                *(iVar5 + 0x48) = piVar1;
            }
        }
        uVar8 = uVar9 + 4;
        uVar4 = CONCAT31(uVar9 >> 8,uVar8);
        if (0x27 < uVar8) {
            return uVar9 >> 8;
        }
    } while( true );
}


/* fcn.00000da3 @ 0xda3 */

uint __cdecl fcn.00000da3(int32_t arg_8h,int32_t arg_ch,uint32_t arg_10h)

{
    char cVar1;
    char *in_ECX;
    int iVar2;
    uint8_t uVar3;
    char *in_EDX;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_10h = 0x5010601;
    var_ch = 0x20801;
    uVar3 = 0;
    var_8h = 0x5ff0401;
    cVar1 = '\x01';
    var_4h = -1;
    iVar2 = 0;
    while ((((cVar1 != *in_ECX || (*(&var_10h + iVar2 + 1) != in_ECX[1])) ||
            ((cVar1 = *(&var_10h + iVar2 + 2), cVar1 != -1 && (cVar1 != in_ECX[2])))) || (5 < *(&var_10h + iVar2 + 3)))
          ) {
        uVar3 = uVar3 + 1;
        iVar2 = uVar3 * 4;
        cVar1 = (&var_10h)[uVar3];
        if (cVar1 == -1) {
            return 0;
        }
    }
    cVar1 = *arg_10h;
    *in_EDX = (*(&var_10h + uVar3 * 4 + 3) + '\x04') * '\x04';
    if ((cVar1 != '\0') && (cVar1 = fcn.00000cd1(arg_8h,arg_ch), cVar1 == '\0')) {
        *arg_10h = 0;
    }
    return 1;
}


/* fcn.000017b8 @ 0x17b8 */

uint __cdecl fcn.000017b8(int32_t arg_8h)

{
    int *piVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    int *piVar5;
    uint uVar6;
    char cVar7;
    uint8_t uStack_19;
    uint16_t uStack_14;
    ushort uStack_12;
    ushort uStack_10;
    uint16_t *puStack_c;
    
    cVar7 = '\0';
    if (*(arg_8h + 0xc) == '\0') {
        iVar4 = fcn.00001bb7();
        if (iVar4 == 0) {
code_r0x00001928:
            uVar3 = 0x80000009;
        }
        else {
            piVar1 = arg_8h + 0x11;
            *piVar1 = piVar1;
            *(arg_8h + 0x15) = piVar1;
            uStack_19 = 0;
            do {
                *0xffd4d87c = uStack_19;
                uStack_14 = uStack_19;
                uStack_12 = 0;
                *0xffd4d8b8 = fcn.000001c1();
                puStack_c = fcn.00001bb7();
                if (puStack_c == NULL) goto code_r0x00001928;
                *0xffd4d8b4 = 0;
                *(iVar4 + CONCAT22(uStack_12,uStack_14) * 4) = puStack_c;
                *puStack_c = 1;
                *(puStack_c + 4) = 0;
                *(puStack_c + 0x7d) = uStack_19;
                *(puStack_c + 0x5d) = 0xd0000000;
                *(puStack_c + 0x4d) = 0xd0000000;
                *(puStack_c + 0x49) = 0xf000;
                *(puStack_c + 0x41) = 0xf000;
                iVar2 = puStack_c + 0x7f;
                *(puStack_c + 0x3b) = 0xff000000;
                *(puStack_c + 0x61) = 0;
                *(puStack_c + 0x51) = 0;
                *(puStack_c + 0x55) = 0xdfffffff;
                *(puStack_c + 0x59) = 0;
                *(puStack_c + 0x45) = 0xffff;
                *iVar2 = iVar2;
                *(puStack_c + 0x83) = iVar2;
                iVar2 = puStack_c + 0x87;
                *iVar2 = iVar2;
                *(puStack_c + 0x8b) = iVar2;
                fcn.00001359(puStack_c);
                *(puStack_c + 0x3e) = *0xffd4d8b4;
                uStack_19 = uStack_19 + 1;
            } while (uStack_19 == 0);
            piVar5 = *piVar1;
            if (piVar5 != piVar1) {
                do {
                    if (*(piVar5 + -0x33) == 3) {
                        cVar7 = cVar7 + '\x01';
                    }
                    piVar5 = *piVar5;
                } while (piVar5 != piVar1);
                if (cVar7 != '\0') {
                    fcn.00000968();
                    uVar6 = fcn.000002ae();
                    *(arg_8h + 0xc) = 1;
                    puStack_c = &uStack_14;
                    uVar3 = InterruptDescriptorTableRegister();
                    uStack_12 = uVar3 >> 0x10;
                    uStack_14 = uVar3;
                    piVar1 = *(CONCAT22(uStack_10,uStack_12) + -4);
                    (**(*piVar1 + 0x24))(piVar1,0xffd4d880);
                    return uVar6;
                }
            }
            *(arg_8h + 0xc) = 1;
            uVar3 = 0x8000000e;
        }
    }
    else {
        uVar3 = 0;
    }
    return uVar3;
}


