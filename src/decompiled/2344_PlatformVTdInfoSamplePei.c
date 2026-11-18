// decompiled by r2ghidra: 2344_PlatformVTdInfoSamplePei.te
// functions: 25

/* fcn.00000530 @ 0x530 */

uint fcn.00000530(void)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    uint uVar4;
    ushort *puVar5;
    uint extraout_ECX;
    int32_t var_10h;
    int32_t var_8h;
    uint32_t var_4h;
    
    var_4h = 0;
    fcn.000003c7();
    iVar2 = fcn.0000083b();
    uVar3 = (**(iVar2 + 4))(0x16d);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0x80000003;
    }
    else {
        iVar2 = fcn.0000083b();
        uVar4 = 0x17c;
        cVar1 = (**(iVar2 + 0x18))(0x17c);
        if (cVar1 == '\0') {
            fcn.000008a9();
            fcn.000008a9();
            uVar4 = extraout_ECX;
        }
        uVar3 = fcn.00000824(uVar4,uVar4);
        *((uVar3 & 0xfffffffe) + 0x5410) = *0xffd1dc60 | 1;
        uVar4 = fcn.00000857();
        iVar2 = fcn.0000083b();
        cVar1 = (**(iVar2 + 0x18))(0x17c);
        if (cVar1 == '\0') {
            uVar4 = fcn.0000017e();
            var_8h = &var_10h;
            InterruptDescriptorTableRegister();
            (**(**(stack0xffffffee + -4) + 0x28))(*(stack0xffffffee + -4),&var_4h);
            if (var_4h == 0x11) {
                uVar4 = fcn.000008a9();
            }
        }
        puVar5 = fcn.000006e3();
        if (puVar5 == NULL) {
            uVar4 = 0x80000009;
        }
        else {
            *puVar5 = 0;
            *(puVar5 + 1) = 0;
            iVar2 = fcn.0000083b();
            cVar1 = (**(iVar2 + 0x18))(0x17c);
            if (cVar1 == '\0') {
                uVar4 = fcn.00000857();
            }
        }
    }
    return uVar4;
}


/* entry0 @ 0x179 */

uint entry0(void)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    uint uVar4;
    ushort *puVar5;
    uint extraout_ECX;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = 0;
    fcn.000003c7();
    iVar2 = fcn.0000083b();
    uVar3 = (**(iVar2 + 4))(0x16d);
    if ((uVar3 & 1) == 0) {
        uVar4 = 0x80000003;
    }
    else {
        iVar2 = fcn.0000083b();
        uVar4 = 0x17c;
        cVar1 = (**(iVar2 + 0x18))(0x17c);
        if (cVar1 == '\0') {
            fcn.000008a9();
            fcn.000008a9();
            uVar4 = extraout_ECX;
        }
        uVar3 = fcn.00000824(uVar4,uVar4);
        *((uVar3 & 0xfffffffe) + 0x5410) = *0xffd1dc60 | 1;
        uVar4 = fcn.00000857();
        iVar2 = fcn.0000083b();
        cVar1 = (**(iVar2 + 0x18))(0x17c);
        if (cVar1 == '\0') {
            uVar4 = fcn.0000017e();
            var_8h = &var_10h;
            InterruptDescriptorTableRegister();
            (**(**(stack0xffffffee + -4) + 0x28))(*(stack0xffffffee + -4),&var_4h);
            if (var_4h == 0x11) {
                uVar4 = fcn.000008a9();
            }
        }
        puVar5 = fcn.000006e3();
        if (puVar5 == NULL) {
            uVar4 = 0x80000009;
        }
        else {
            *puVar5 = 0;
            *(puVar5 + 1) = 0;
            iVar2 = fcn.0000083b();
            cVar1 = (**(iVar2 + 0x18))(0x17c);
            if (cVar1 == '\0') {
                uVar4 = fcn.00000857();
            }
        }
    }
    return uVar4;
}


/* fcn.00000735 @ 0x735 */

int __fastcall fcn.00000735(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.000006fe();
    if (iVar1 == 0) {
        return 0;
    }
    if (param_1 == 0) {
        return iVar1;
    }
    iVar1 = fcn.000000e0(iVar1,param_1);
    return iVar1;
}


/* fcn.000006fe @ 0x6fe */

int32_t __fastcall fcn.000006fe(uint param_1)

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


/* fcn.0000074d @ 0x74d */

uint __fastcall fcn.0000074d(int param_1,uint param_2)

{
    uint uVar1;
    
    if (param_1 == -0x2e23d8) {
        return 0xffd1dc28;
    }
    uVar1 = section..text(param_1,0xffd1dc28,param_2);
    return uVar1;
}


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 2123 named .text
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


/* fcn.00000677 @ 0x677 */

int fcn.00000677(void)

{
    char cVar1;
    int iVar2;
    
    fcn.0000062b();
    do {
        iVar2 = fcn.00000656();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00000787();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.00000857 @ 0x857 */

void __fastcall fcn.00000857(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.0000017e @ 0x17e */

uint fcn.0000017e(void)

{
    int iVar1;
    uint *puVar2;
    uint uVar3;
    uchar auStack_10 [2];
    int iStack_e;
    uchar *puStack_8;
    
    puStack_8 = 0x187;
    iVar1 = fcn.00000735();
    if (iVar1 != 0) {
        puStack_8 = 0x19e;
        fcn.0000074d();
        *(iVar1 + 0x24) = 0x26;
        puStack_8 = 0x1aa;
        puVar2 = fcn.00000735();
        if (puVar2 != NULL) {
            puVar2[2] = iVar1;
            *puVar2 = 0x80000010;
            puVar2[1] = 0xffd1db90;
            puStack_8 = auStack_10;
            InterruptDescriptorTableRegister();
            uVar3 = (**(**(iStack_e + -4) + 0x18))(*(iStack_e + -4),puVar2);
            return uVar3;
        }
    }
    return 0x80000009;
}


/* fcn.000007e3 @ 0x7e3 */

uint32_t __fastcall fcn.000007e3(uint32_t param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar2 = param_1 & 0xff;
    uVar1 = fcn.00000824(param_1,param_1);
    uVar1 = uVar1 & 0xfffffffe;
    if (uVar2 == 0) {
        uVar1 = *(uVar1 + 0x5400);
    }
    else if (uVar2 == 1) {
        uVar1 = *(uVar1 + 0x7880);
    }
    else {
        if (uVar2 != 2) {
            return 0;
        }
        uVar1 = *(uVar1 + 0x5410);
    }
    return uVar1 & 0xfffffffe;
}


/* fcn.00000824 @ 0x824 */

uint fcn.00000824(void)

{
    uint32_t uVar1;
    
    uVar1 = fcn.000007bc(0,0);
    return *((uVar1 | 0x48) + 0xc0000000);
}


/* fcn.000007bc @ 0x7bc */

ulong __cdecl fcn.000007bc(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_4h;
    
    return CONCAT44(arg_ch >> 4,arg_8h >> 4 | arg_ch << 0x1c);
}


/* fcn.000001c6 @ 0x1c6 */

void __fastcall fcn.000001c6(int param_1)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    iVar4 = 0;
    iVar3 = fcn.00000677();
    if (iVar3 != 0) {
        *(param_1 + 0x68) = *(iVar3 + 0x18);
        *(param_1 + 0x6c) = *(iVar3 + 0x1c) + -1;
        uVar1 = *(iVar3 + 0x24);
        *(param_1 + 0x70) = *(iVar3 + 0x20);
        *(param_1 + 0x74) = uVar1;
        iVar2 = *(iVar3 + 0x28);
        iVar3 = *(iVar3 + 0x2c);
        *(param_1 + 0x78) = iVar2 + -1;
        *(param_1 + 0x7c) = iVar3 + -1 + (iVar2 != 0);
        if ((*(param_1 + 8) & 0x60) != 0x60) {
            iVar4 = -0x7ffffffd;
        }
        if (*(param_1 + 100) == 0xffffffff) {
            iVar4 = -0x7fffffeb;
        }
        if (((*(param_1 + 100) & 1) == 0) && (iVar4 == 0)) {
            *(param_1 + 100) = 0x80000000;
            do {
            } while ((*(param_1 + 100) & 1) == 0);
        }
    }
    return;
}


/* fcn.0000087c @ 0x87c */

void __cdecl fcn.0000087c(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.0000083b @ 0x83b */

int32_t __fastcall fcn.0000083b(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.0000087c(param_1,&var_4h);
    return var_4h;
}


/* fcn.00000246 @ 0x246 */

void __fastcall fcn.00000246(int param_1)

{
    int iVar1;
    
    iVar1 = 0;
    if ((*(param_1 + 8) & 0x60) != 0x60) {
        iVar1 = -0x7ffffffd;
    }
    if (*(param_1 + 100) == 0xffffffff) {
        iVar1 = -0x7fffffeb;
    }
    if (((*(param_1 + 100) & 1) != 0) && (iVar1 == 0)) {
        *(param_1 + 100) = 0;
        do {
        } while ((*(param_1 + 100) & 1) != 0);
    }
    return;
}


/* fcn.000003c7 @ 0x3c7 */

void __fastcall fcn.000003c7(int32_t param_1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint extraout_ECX;
    uint uVar8;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = 0;
    var_8h = param_1;
    iVar3 = fcn.0000087c(param_1,&var_8h);
    if (-1 < iVar3) {
        var_4h = 0xca9;
        iVar3 = fcn.00000735();
        if ((iVar3 != 0) && (iVar4 = (**var_8h)(var_8h,0xffd1dcb0,0xffd1dba0,0,&var_4h,iVar3), -1 < iVar4)) {
            var_4h = 0x578;
            iVar4 = fcn.00000735();
            if ((iVar4 != 0) && (iVar5 = (**var_8h)(var_8h,0xffd1dcbc,0xffd1dbd0,0,&var_4h,iVar4), -1 < iVar5)) {
                if (*(iVar4 + 0x7d) == '\0') {
                    uVar2 = 0;
                }
                else {
                    uVar6 = fcn.00000824(extraout_ECX,extraout_ECX);
                    uVar6 = uVar6 & 0xfffffffe;
                    uVar1 = *(uVar6 + 0x5410);
                    uVar7 = *0xffd1dc60;
                    if (uVar1 != 0) {
                        uVar7 = uVar1;
                    }
                    *(uVar6 + 0x5410) = uVar7 | 1;
                    uVar2 = *(uVar6 + 0x5410) & 1;
                    *(uVar6 + 0x5410) = uVar1;
                }
                if ((((*(iVar4 + 0x7d) == '\0') || (uVar2 == 0)) ||
                    ((*(iVar4 + 0x88) == '\0' && ((*(iVar4 + 0x89) == '\0' && (*(iVar4 + 0x8a) == '\0')))))) ||
                   (*(iVar3 + 0x997) == '\0')) {
                    iVar3 = fcn.0000083b();
                    uVar8 = 0;
                }
                else {
                    iVar3 = fcn.0000083b();
                    uVar8 = 1;
                }
                (**(iVar3 + 0x3c))(0x16d,uVar8);
            }
        }
    }
    return;
}


/* fcn.000008a9 @ 0x8a9 */

void __fastcall fcn.000008a9(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x24))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.000006e3 @ 0x6e3 */

int fcn.000006e3(void)

{
    int iVar1;
    int extraout_EDX;
    
    iVar1 = fcn.000006aa();
    if (iVar1 == 0) {
        return 0;
    }
    fcn.00000765();
    return extraout_EDX + 0x18;
}


/* fcn.000006aa @ 0x6aa */

int32_t __fastcall fcn.000006aa(uint param_1,uint param_2)

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


/* fcn.00000765 @ 0x765 */

uint * __fastcall fcn.00000765(uint *param_1)

{
    *param_1 = *0xffd1dc80;
    param_1[1] = *0xffd1dc84;
    param_1[2] = *0xffd1dc88;
    param_1[3] = *0xffd1dc8c;
    return param_1;
}


/* fcn.0000062b @ 0x62b */

int32_t fcn.0000062b(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00000787 @ 0x787 */

uint32_t __fastcall fcn.00000787(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00000656 @ 0x656 */

int16_t * __fastcall fcn.00000656(uint param_1,int16_t *param_2)

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


