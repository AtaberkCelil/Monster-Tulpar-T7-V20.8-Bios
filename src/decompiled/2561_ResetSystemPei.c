// decompiled by r2ghidra: 2561_ResetSystemPei.te
// functions: 15

/* entry0 @ 0x179 */

uint entry0(void)

{
    int iVar1;
    uint uVar2;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffee + -4) + 0x20))(*(stack0xffffffee + -4),0xfffcca74,0,0,&var_8h);
    uVar2 = 0x8000000e;
    if (iVar1 == -0x7ffffff2) {
        fcn.0000052c();
    }
    else {
        uVar2 = 0x80000014;
    }
    return uVar2;
}


/* fcn.0000052c @ 0x52c */

void fcn.0000052c(void)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),0xfffccae0);
    return;
}


/* fcn.0000048c @ 0x48c */

int fcn.0000048c(void)

{
    char cVar1;
    int iVar2;
    
    do {
        iVar2 = fcn.0000046b();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.0000057f();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.000004bf @ 0x4bf */

int fcn.000004bf(void)

{
    char cVar1;
    int iVar2;
    
    fcn.00000440();
    do {
        iVar2 = fcn.0000046b();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.0000057f();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.00000440 @ 0x440 */

int32_t fcn.00000440(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.0000050a @ 0x50a */

int fcn.0000050a(void)

{
    int iVar1;
    
    iVar1 = fcn.000004d1();
    if (iVar1 != 0) {
        fcn.00000566();
        iVar1 = iVar1 + 0x18;
    }
    return iVar1;
}


/* fcn.000004d1 @ 0x4d1 */

int32_t __fastcall fcn.000004d1(uint param_1,uint param_2)

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


/* fcn.00000566 @ 0x566 */

uint * __fastcall fcn.00000566(uint *param_1,uint *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
}


/* fcn.00000555 @ 0x555 */

uint __fastcall fcn.00000555(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.000000a0(param_1,param_2);
    return uVar1;
}


/* fcn.000000a0 @ 0xa0 */

uint * fcn.000000a0(uint *param_1,uint32_t param_2)

{
    uint32_t uVar1;
    uint *puVar2;
    
    uVar1 = param_2 & 3;
    puVar2 = param_1;
    //[00] -r-x section size 1332 named .text
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


/* fcn.000005a3 @ 0x5a3 */

int __fastcall fcn.000005a3(int param_1,int param_2)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = fcn.000000c0(param_1,param_2,1);
    return iVar1;
}


/* fcn.000000c0 @ 0xc0 */

uint * fcn.000000c0(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
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


/* fcn.000003fd @ 0x3fd */

uint32_t fcn.000003fd(void)

{
    uint32_t uVar1;
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    uVar1 = (**(**(stack0xfffffff2 + -4) + 0x58))(*(stack0xfffffff2 + -4),1,0x30f1010,0,0xfffccab4,0);
    return uVar1 & -(uVar1 != 0xa0000002);
}


/* fcn.0000057f @ 0x57f */

uint32_t __fastcall fcn.0000057f(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.0000046b @ 0x46b */

int16_t * __fastcall fcn.0000046b(uint param_1,int16_t *param_2)

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


