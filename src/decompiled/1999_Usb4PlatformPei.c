// decompiled by r2ghidra: 1999_Usb4PlatformPei.te
// functions: 33

/* entry0 @ 0x179 */

uint entry0(void)

{
    char cVar1;
    int iVar2;
    uint uVar3;
    int32_t var_ch;
    int32_t var_4h;
    
    iVar2 = fcn.000005fb();
    cVar1 = (**(iVar2 + 0x18))(0x179);
    if (cVar1 == '\0') {
        var_4h = &var_ch;
        InterruptDescriptorTableRegister();
        uVar3 = (**(**(stack0xfffffff2 + -4) + 0x24))(*(stack0xfffffff2 + -4),0xe10);
    }
    else {
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.000005fb @ 0x5fb */

int32_t __fastcall fcn.000005fb(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.00000617(param_1,&var_4h);
    return var_4h;
}


/* fcn.00000617 @ 0x617 */

void __cdecl fcn.00000617(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00000576 @ 0x576 */

int __fastcall fcn.00000576(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.0000053f();
    if (iVar1 == 0) {
        return 0;
    }
    if (param_1 == 0) {
        return iVar1;
    }
    iVar1 = fcn.000000e0(iVar1,param_1);
    return iVar1;
}


/* fcn.0000053f @ 0x53f */

int32_t __fastcall fcn.0000053f(uint param_1)

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


/* fcn.00000263 @ 0x263 */

uint32_t __fastcall fcn.00000263(char *param_1)

{
    int iVar1;
    
    if (param_1 == NULL) {
        return 0x80000002;
    }
    iVar1 = fcn.0000020e();
    if (iVar1 == 0) {
        return 0x80000003;
    }
    param_1[3] = *(iVar1 + 0xadf);
    param_1[5] = *(iVar1 + 0x9aa);
    param_1[4] = '\0';
    param_1[0] = '\0';
    param_1[1] = '\0';
    fcn.00000644();
    fcn.000006fd();
    return (*param_1 != '\0') - 1 & 0x8000000e;
}


/* fcn.0000020e @ 0x20e */

int fcn.0000020e(void)

{
    int iVar1;
    int iVar2;
    uint noname_0;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = 0xca9;
    iVar1 = fcn.00000576();
    if (((iVar1 != 0) && (iVar2 = fcn.00000617(noname_0,&var_8h), -1 < iVar2)) &&
       (iVar2 = (**var_8h)(var_8h,0xe40,0xdb0,0,&var_4h,iVar1), -1 < iVar2)) {
        return iVar1;
    }
    return 0;
}


/* fcn.00000644 @ 0x644 */

uint __fastcall fcn.00000644(char *param_1)

{
    char *pcVar1;
    ushort uVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    
    if (param_1 == NULL) {
        uVar5 = 0x80000002;
    }
    else {
        iVar3 = fcn.000004af();
        if (iVar3 == 0) {
            uVar5 = 0x8000000e;
        }
        else {
            iVar4 = fcn.000004af();
            if (iVar4 == 0) {
                uVar5 = 0x8000000e;
            }
            else {
                uVar5 = 0;
                param_1[2] = *(iVar3 + 0x2c);
                uVar7 = 0;
                param_1[4] = '\x01';
                uVar6 = 0;
                do {
                    if (0xff < uVar6) {
                        return 0;
                    }
                    if (*(uVar7 + 0x36 + iVar4) != '\0') {
                        uVar2 = *(uVar7 * 2 + 0xe4c);
                        param_1[uVar6 + 8] = '\x01';
                        *(param_1 + uVar6 + 0x1a) = uVar2;
                        *(param_1 + uVar6 + 0x18) = uVar2;
                        pcVar1 = param_1 + uVar6 + 0x14;
                        pcVar1[0] = -0x10;
                        pcVar1[1] = '\0';
                        pcVar1[2] = '\0';
                        pcVar1[3] = '\0';
                        pcVar1 = param_1 + uVar6 + 0x10;
                        pcVar1[0] = -0x14;
                        pcVar1[1] = '\0';
                        pcVar1[2] = '\0';
                        pcVar1[3] = '\0';
                        pcVar1 = param_1 + uVar6 + 0xc;
                        pcVar1[0] = '\x0f';
                        pcVar1[1] = '\0';
                        pcVar1[2] = '\0';
                        pcVar1[3] = '\0';
                        if (param_1[5] == '\0') {
                            pcVar1 = param_1 + uVar6 + 0xc;
                            pcVar1[0] = '\v';
                            pcVar1[1] = '\0';
                            pcVar1[2] = '\0';
                            pcVar1[3] = '\0';
                        }
                        *param_1 = *param_1 + '\x01';
                        param_1[1] = param_1[1] | 1 << (uVar7 & 0x1f);
                        uVar6 = uVar6 + 0x40;
                    }
                    uVar7 = uVar7 + 1;
                } while (uVar7 < 2);
            }
        }
    }
    return uVar5;
}


/* fcn.000006fd @ 0x6fd */

uint __fastcall fcn.000006fd(uint8_t *param_1)

{
    uint8_t *puVar1;
    uint32_t uVar2;
    int iVar3;
    uint8_t uVar4;
    uint uVar5;
    uint8_t uStack_f;
    uint8_t uStack_e;
    uint8_t uStack_d;
    int iStack_c;
    uint8_t auStack_8 [4];
    char acStack_4 [4];
    
    if (param_1 == NULL) {
        uVar5 = 0x80000002;
    }
    else {
        uVar5 = 0;
        iStack_c = 0;
        fcn.00000617(param_1,&iStack_c);
        if (iStack_c == 0) {
            uVar5 = 0x8000000e;
        }
        else {
            uStack_f = 0x41;
            param_1[2] = *(iStack_c + 5) & 7;
            param_1[4] = ~(*(iStack_c + 5) >> 3) & 1;
            uStack_e = *param_1;
            uVar2 = 0;
            uStack_d = 0;
            iVar3 = iStack_c;
            do {
                if (*(uVar2 * 0x20 + 8 + iVar3) != '\0') {
                    iVar3 = fcn.000008c7(auStack_8,acStack_4);
                    if ((iVar3 < 0) || (3 < uStack_e)) {
                        return 0x80000003;
                    }
                    iVar3 = uStack_e * 0x40;
                    param_1[iVar3 + 8] = 0;
                    puVar1 = param_1 + iVar3 + 0xc;
                    puVar1[0] = 0xf;
                    puVar1[1] = 0;
                    puVar1[2] = 0;
                    puVar1[3] = 0;
                    if (param_1[5] == 0) {
                        puVar1 = param_1 + iVar3 + 0xc;
                        puVar1[0] = 0xb;
                        puVar1[1] = 0;
                        puVar1[2] = 0;
                        puVar1[3] = 0;
                    }
                    uVar4 = uStack_f - 2;
                    param_1[iVar3 + 0x18] = uVar4;
                    param_1[iVar3 + 0x1f] = uVar4;
                    param_1[iVar3 + 0x24] = uVar4;
                    param_1[iVar3 + 0x26] = uVar4;
                    param_1[iVar3 + 0x1d] = auStack_8[0] & 0x1f | acStack_4[0] << 5;
                    uVar4 = uStack_f - 1;
                    param_1[iVar3 + 0x20] = uStack_f;
                    param_1[iVar3 + 0x27] = uVar4;
                    param_1[iVar3 + 0x28] = uStack_f;
                    param_1[iVar3 + 0x2c] = uVar4;
                    param_1[iVar3 + 0x2e] = uVar4;
                    param_1[iVar3 + 0x2f] = uStack_f;
                    param_1[iVar3 + 0x30] = uStack_f;
                    param_1[iVar3 + 0x1a] = uStack_f;
                    puVar1 = param_1 + iVar3 + 0x10;
                    puVar1[0] = 0x48;
                    puVar1[1] = 5;
                    puVar1[2] = 0;
                    puVar1[3] = 0;
                    puVar1 = param_1 + iVar3 + 0x14;
                    puVar1[0] = 0x4c;
                    puVar1[1] = 5;
                    puVar1[2] = 0;
                    puVar1[3] = 0;
                    param_1[iVar3 + 0x19] = 0;
                    (param_1 + iVar3 + 0x1b)[0] = 0;
                    (param_1 + iVar3 + 0x1b)[1] = 0;
                    param_1[iVar3 + 0x1e] = 0;
                    param_1[iVar3 + 0x25] = 0;
                    param_1[iVar3 + 0x2d] = 0;
                    *param_1 = *param_1 + 1;
                    uStack_e = uStack_e + 1;
                    param_1[1] = param_1[1] | 1 << (uVar2 + 4 & 0x1f);
                    uStack_f = uStack_f + 3;
                    iVar3 = iStack_c;
                }
                uStack_d = uStack_d + 1;
                uVar2 = uStack_d;
            } while (uStack_d < 2);
        }
    }
    return uVar5;
}


/* fcn.000003a9 @ 0x3a9 */

int __fastcall fcn.000003a9(uint8_t *param_1)

{
    int iVar1;
    uint8_t *puVar2;
    uint8_t *puVar3;
    uint32_t uVar4;
    int iStack_18;
    uint uStack_14;
    uint uStack_10;
    uint uStack_c;
    
    if (param_1 == NULL) {
        iVar1 = -0x7ffffffe;
    }
    else if (*param_1 < 5) {
        iVar1 = fcn.00000617(param_1,&iStack_18);
        if (iVar1 < 0) {
            iStack_18 = 0;
        }
        if (iStack_18 == 0) {
            uVar4 = 0;
            puVar3 = param_1;
            if (*param_1 != 0) {
                do {
                    puVar2 = puVar3 + 0x40;
                    puVar3[0x38] = 0;
                    puVar3[0x39] = 0;
                    puVar3[0x3a] = 0;
                    puVar3[0x3b] = 0;
                    puVar3[0x3c] = 0;
                    puVar3[0x3d] = 0;
                    puVar3[0x3e] = 0;
                    puVar3[0x3f] = 0;
                    puVar2[0] = 0;
                    puVar2[1] = 0;
                    puVar2[2] = 0;
                    puVar2[3] = 0;
                    uVar4 = uVar4 + 1;
                    puVar3 = puVar2;
                } while (uVar4 < *param_1);
            }
        }
        else {
            uVar4 = 0;
            puVar3 = param_1;
            if (*param_1 != 0) {
                do {
                    iVar1 = fcn.000002ba(&uStack_14);
                    if (iVar1 < 0) {
                        return iVar1;
                    }
                    uVar4 = uVar4 + 1;
                    *(puVar3 + 0x38) = uStack_10;
                    *(puVar3 + 0x3c) = uStack_c;
                    *(puVar3 + 0x40) = uStack_14;
                    puVar3 = puVar3 + 0x40;
                } while (uVar4 < *param_1);
            }
        }
        iVar1 = 0;
    }
    else {
        iVar1 = -0x7ffffffd;
    }
    return iVar1;
}


/* fcn.00000522 @ 0x522 */

int fcn.00000522(void)

{
    int iVar1;
    int extraout_EDX;
    
    iVar1 = fcn.000004e9();
    if (iVar1 == 0) {
        return 0;
    }
    fcn.000005a4();
    return extraout_EDX + 0x18;
}


/* fcn.000004e9 @ 0x4e9 */

int32_t __fastcall fcn.000004e9(uint param_1,uint param_2)

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


/* fcn.000005a4 @ 0x5a4 */

uint * __fastcall fcn.000005a4(uint *param_1)

{
    *param_1 = *0xd80;
    param_1[1] = *0xd84;
    param_1[2] = *0xd88;
    param_1[3] = *0xd8c;
    return param_1;
}


/* fcn.0000058e @ 0x58e */

int __fastcall fcn.0000058e(int param_1,int param_2,uint param_3)

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
    
    //[00] -r-x section size 2906 named .text
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


/* fcn.000002ba @ 0x2ba */

int __fastcall fcn.000002ba(int param_1,uint *param_2,uint *param_3)

{
    int iVar1;
    int iStack_18;
    int iStack_14;
    uint uStack_10;
    uint *puStack_c;
    uint uStack_8;
    uint uStack_4;
    
    iStack_14 = 0;
    iStack_18 = 0;
    puStack_c = param_2;
    if (((param_1 == 0) || (param_2 == NULL)) || (param_3 == NULL)) {
        iVar1 = -0x7ffffffe;
    }
    else {
        param_2 = 0x10;
        iVar1 = (**(param_1 + 0x14))(param_1,4,0x10,&iStack_14,0,0);
        if (iVar1 < 0) goto code_r0x00000381;
        uStack_10 = 0x10000;
        uStack_8 = 0;
        uStack_4 = 0;
        iVar1 = (**(param_1 + 0xc))(param_1,2,iStack_14,&uStack_10,&uStack_8,&iStack_18);
        if ((iVar1 < 0) || (iVar1 = (**(param_1 + 8))(param_1,iStack_18,3,0), iVar1 < 0)) goto code_r0x00000381;
        *puStack_c = uStack_8;
        puStack_c[1] = uStack_4;
        *param_3 = uStack_10;
    }
    if (-1 < iVar1) {
        return iVar1;
    }
code_r0x00000381:
    if (iStack_18 != 0) {
        (**(param_1 + 0x10))(param_1,iStack_18);
    }
    if (iStack_14 != 0) {
        (**(param_1 + 0x18))(param_1,param_2,iStack_14);
    }
    return iVar1;
}


/* fcn.00000463 @ 0x463 */

int32_t fcn.00000463(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.000005c6 @ 0x5c6 */

uint32_t __fastcall fcn.000005c6(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.0000048e @ 0x48e */

int16_t * __fastcall fcn.0000048e(uint param_1,int16_t *param_2)

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


/* fcn.000004af @ 0x4af */

int fcn.000004af(void)

{
    char cVar1;
    int iVar2;
    
    fcn.00000463();
    do {
        iVar2 = fcn.0000048e();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.000005c6();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.000008c7 @ 0x8c7 */

uint __fastcall fcn.000008c7(char param_1,uint32_t param_2,uint param_3,int32_t param_4)

{
    uint32_t uVar1;
    uint uVar2;
    
    uVar2 = 0x80000002;
    if (param_1 == '\x02') {
        uVar1 = fcn.0000091f();
        if ((uVar1 & 0xff) <= param_2) {
            return 0x80000002;
        }
        uVar2 = fcn.0000093b(param_4);
    }
    if ((param_1 == '\x01') && (uVar1 = fcn.000009ee(), param_2 < (uVar1 & 0xff))) {
        uVar2 = fcn.00000a0e(param_4);
    }
    return uVar2;
}


/* fcn.0000091f @ 0x91f */

uint fcn.0000091f(void)

{
    uint32_t uVar1;
    uint uVar2;
    
    uVar1 = fcn.00000a87();
    uVar1 = uVar1 & 0xff;
    uVar2 = 0;
    if (((uVar1 == 0) || (uVar2 = 0, uVar1 == 1)) || (uVar2 = CONCAT31(uVar1 - 2 >> 8,1), uVar1 - 2 != 0)) {
        uVar2 = CONCAT31(uVar2 >> 8,3);
    }
    return uVar2;
}


/* fcn.0000093b @ 0x93b */

uint __cdecl fcn.0000093b(int32_t arg_8h)

{
    char cVar1;
    uint32_t uVar2;
    uint32_t in_ECX;
    uint uVar3;
    uint *in_EDX;
    
    uVar2 = fcn.0000091f();
    if ((uVar2 & 0xff) < in_ECX) {
        return 0x80000002;
    }
    uVar3 = 0;
    if (in_ECX != 0) {
        if (in_ECX == 1) {
            *in_EDX = 1;
            goto code_r0x00000999;
        }
        if (in_ECX == 2) {
            cVar1 = fcn.00000a87();
            if (cVar1 != '\x01') {
                *in_EDX = 6;
                *arg_8h = 2;
                return 0;
            }
            uVar3 = 1;
            *in_EDX = 1;
            goto code_r0x00000999;
        }
    }
    *in_EDX = 6;
code_r0x00000999:
    *arg_8h = uVar3;
    return 0;
}


/* fcn.000009ee @ 0x9ee */

uint32_t fcn.000009ee(void)

{
    uint32_t uVar1;
    
    uVar1 = fcn.000009b0();
    uVar1 = uVar1 & 0xff;
    if (uVar1 != 3) {
        if (uVar1 == 4) {
            return 0x1c;
        }
        if (uVar1 - 5 != 0) {
            return uVar1 - 5 & 0xffffff00;
        }
    }
    return 0xc;
}


/* fcn.000009b0 @ 0x9b0 */

char fcn.000009b0(void)

{
    uint32_t uVar1;
    char cVar2;
    
    cVar2 = -1;
    if (*0xe1c == -1) {
        uVar1 = fcn.000009a1();
        uVar1 = uVar1 & 0xffe0;
        if (uVar1 == 0x5180) {
            cVar2 = '\x05';
        }
        else if ((uVar1 == 0x7a00) || (uVar1 == 0x7a80)) {
            cVar2 = '\x04';
        }
        *0xe1c = cVar2;
    }
    return *0xe1c;
}


/* fcn.00000a0e @ 0xa0e */

uint __fastcall fcn.00000a0e(uint32_t param_1,uint32_t *param_2,uint32_t *param_3)

{
    char cVar1;
    uint32_t uVar2;
    uint uVar3;
    int iVar4;
    
    uVar2 = fcn.000009ee();
    if (param_1 < (uVar2 & 0xff)) {
        iVar4 = (param_1 >> 2) * 3;
        cVar1 = *(iVar4 + 0xe22);
        *param_2 = *(iVar4 + 0xe20);
        *param_3 = *((*(iVar4 + 0xe21) | 0xfffffd00) << 0x10) >> ((param_1 - cVar1) * '\x04' & 0x1fU) & 7;
        uVar3 = 0;
    }
    else {
        uVar3 = 0x80000002;
    }
    return uVar3;
}


/* fcn.00000a87 @ 0xa87 */

void fcn.00000a87(void)

{
    int32_t var_4h;
    
    fcn.00000aba();
    fcn.00000a67(2,0);
    fcn.00000b01();
    return;
}


/* fcn.00000aba @ 0xaba */

//WARNING: Removing unreachable block (ram,0x00000af0)
//WARNING: Removing unreachable block (ram,0x00000ad9)
//WARNING: Removing unreachable block (ram,0x00000ae8)
//WARNING: Removing unreachable block (ram,0x00000af7)

uint __fastcall fcn.00000aba(uint param_1,uint *param_2)

{
    uint *puVar1;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    puVar1 = cpuid_Version_info(1);
    if (param_2 != NULL) {
        *param_2 = *puVar1;
    }
    return 1;
}


/* fcn.00000a67 @ 0xa67 */

ushort fcn.00000a67(uint32_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00000883(0,param_2 & 1);
    return *((uVar1 | param_1) + 0xc0000000);
}


/* fcn.00000883 @ 0x883 */

ulong __cdecl fcn.00000883(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_4h;
    
    return CONCAT44(arg_ch >> 4,arg_8h >> 4 | arg_ch << 0x1c);
}


/* fcn.00000b01 @ 0xb01 */

uchar __fastcall fcn.00000b01(int param_1,uint16_t param_2)

{
    uchar uVar1;
    uint32_t uVar2;
    
    uVar1 = 4;
    if (param_1 == 0x906a0) {
        if (param_2 - 0x4601 < 0x61) {
    //WARNING: Jumptable at 0x00000b86 did not pass sanity check.
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*(param_2 - 0x38e8) * 4 + 0xd0d))();
            return uVar1;
        }
    }
    else if (param_1 == 0xb06a0) {
        uVar2 = param_2;
        if ((0xa705 < uVar2) && ((uVar2 < 0xa70c || ((0xa714 < uVar2 && ((uVar2 < 0xa717 || (uVar2 - 0xa71b < 2))))))))
        {
            uVar1 = 0;
        }
    }
    else if ((param_1 == 0xb06e0) &&
            ((param_2 == 0x4614 ||
             ((0x4616 < param_2 && ((param_2 < 0x4619 || ((0x461a < param_2 && (param_2 < 0x461d)))))))))) {
        uVar1 = 2;
    }
    return uVar1;
}


/* fcn.000009a1 @ 0x9a1 */

void fcn.000009a1(void)

{
    fcn.00000a67(0xf8002,0);
    return;
}


