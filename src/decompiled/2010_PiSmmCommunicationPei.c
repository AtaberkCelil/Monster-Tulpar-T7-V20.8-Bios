// decompiled by r2ghidra: 2010_PiSmmCommunicationPei.te
// functions: 14

/* fcn.00000228 @ 0x228 */

uint fcn.00000228(void)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    uint **noname_0;
    uint *puStack_1c;
    uchar *puStack_18;
    uint *puStack_14;
    uchar auStack_10 [12];
    
    puStack_18 = auStack_10;
    InterruptDescriptorTableRegister();
    noname_0 = &puStack_14;
    (**(**(auStack_10._2_4_ + -4) + 0x28))(*(auStack_10._2_4_ + -4));
    if (puStack_14 == 0x11) {
        iVar2 = fcn.00000457(noname_0,&puStack_1c);
        if (iVar2 < 0) {
            uVar1 = 0x80000013;
        }
        else if (*(puStack_1c + 4) == '\0') {
            puStack_14 = auStack_10;
            iVar2 = 0;
            do {
                uVar1 = InterruptDescriptorTableRegister();
                *puStack_14 = uVar1;
                iVar3 = (**puStack_1c)(*(auStack_10._2_4_ + -4),puStack_1c,iVar2);
                iVar2 = iVar2 + 1;
            } while (-1 < iVar3);
            iVar2 = fcn.00000344();
            fcn.00000102(**(iVar2 + 0x20),(*(iVar2 + 0x20))[1]);
            fcn.000003b7();
            fcn.000003d2(0x10);
            fcn.0000042e();
            uVar1 = 0;
        }
        else {
            uVar1 = 0x8000000f;
        }
    }
    else {
        uVar1 = 0x80000003;
    }
    return uVar1;
}


/* entry0 @ 0xfd */

uint entry0(void)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    uint **noname_0;
    uint *puStack_1c;
    uchar *puStack_18;
    uint *puStack_14;
    uchar auStack_10 [12];
    
    puStack_18 = auStack_10;
    InterruptDescriptorTableRegister();
    noname_0 = &puStack_14;
    (**(**(auStack_10._2_4_ + -4) + 0x28))(*(auStack_10._2_4_ + -4));
    if (puStack_14 == 0x11) {
        iVar2 = fcn.00000457(noname_0,&puStack_1c);
        if (iVar2 < 0) {
            uVar1 = 0x80000013;
        }
        else if (*(puStack_1c + 4) == '\0') {
            puStack_14 = auStack_10;
            iVar2 = 0;
            do {
                uVar1 = InterruptDescriptorTableRegister();
                *puStack_14 = uVar1;
                iVar3 = (**puStack_1c)(*(auStack_10._2_4_ + -4),puStack_1c,iVar2);
                iVar2 = iVar2 + 1;
            } while (-1 < iVar3);
            iVar2 = fcn.00000344();
            fcn.00000102(**(iVar2 + 0x20),(*(iVar2 + 0x20))[1]);
            fcn.000003b7();
            fcn.000003d2(0x10);
            fcn.0000042e();
            uVar1 = 0;
        }
        else {
            uVar1 = 0x8000000f;
        }
    }
    else {
        uVar1 = 0x80000003;
    }
    return uVar1;
}


/* fcn.0000040a @ 0x40a */

uint32_t __fastcall fcn.0000040a(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00000457 @ 0x457 */

void __cdecl fcn.00000457(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00000344 @ 0x344 */

int fcn.00000344(void)

{
    char cVar1;
    int iVar2;
    
    fcn.000002f8();
    do {
        iVar2 = fcn.00000323();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.0000040a();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.00000102 @ 0x102 */

uint __thiscall fcn.00000102(int param_1,int param_2,int param_3)

{
    uint32_t uVar1;
    char cVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    
    if ((param_2 == 0x534d4d53) && (param_3 == 0x34365f33)) {
        uVar1 = *(param_1 + 0x98);
        uVar4 = 0;
        iVar5 = *(param_1 + 0xa0);
        if (uVar1 != 0) {
            do {
                cVar2 = fcn.0000040a();
                if (cVar2 != '\0') {
                    iVar3 = uVar4 * 0x18;
code_r0x00000177:
                    return *(iVar3 + 0x10 + iVar5);
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < uVar1);
        }
    }
    else {
        uVar1 = *(param_1 + 0x58);
        uVar4 = 0;
        iVar5 = *(param_1 + 0x5c);
        if (uVar1 != 0) {
            do {
                cVar2 = fcn.0000040a();
                if (cVar2 != '\0') {
                    iVar3 = uVar4 * 0x14;
                    goto code_r0x00000177;
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < uVar1);
        }
    }
    return 0;
}


/* fcn.000003b7 @ 0x3b7 */

int fcn.000003b7(void)

{
    int iVar1;
    int extraout_EDX;
    
    iVar1 = fcn.0000037e();
    if (iVar1 == 0) {
        return 0;
    }
    fcn.000003e8();
    return extraout_EDX + 0x18;
}


/* fcn.0000037e @ 0x37e */

int32_t __fastcall fcn.0000037e(uint param_1,uint param_2)

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


/* fcn.000003e8 @ 0x3e8 */

uint * __fastcall fcn.000003e8(uint *param_1)

{
    *param_1 = *0x650;
    param_1[1] = *0x654;
    param_1[2] = *0x658;
    param_1[3] = *0x65c;
    return param_1;
}


/* fcn.000003d2 @ 0x3d2 */

int __fastcall fcn.000003d2(int param_1,int param_2,uint param_3)

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
    
    //[00] -r-x section size 996 named .text
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


/* fcn.0000042e @ 0x42e */

void fcn.0000042e(void)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),0x660);
    return;
}


/* fcn.000002f8 @ 0x2f8 */

int32_t fcn.000002f8(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00000323 @ 0x323 */

int16_t * __fastcall fcn.00000323(uint param_1,int16_t *param_2)

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


