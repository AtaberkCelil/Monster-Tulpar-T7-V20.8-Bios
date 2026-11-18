// decompiled by r2ghidra: 2520_SecMigrationPei.te
// functions: 13

/* fcn.0000032a @ 0x32a */

void fcn.0000032a(void)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),0xffd5f5e0);
    return;
}


/* entry0 @ 0xfd */

void entry0(void)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),0xffd5f5e0);
    return;
}


/* fcn.00000459 @ 0x459 */

uint fcn.00000459(void)

{
    char cVar1;
    int iVar2;
    uint extraout_ECX;
    
    fcn.0000040d();
    do {
        iVar2 = fcn.00000438();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.000004a8();
    } while (cVar1 == '\0');
    return extraout_ECX;
}


/* fcn.0000048b @ 0x48b */

int __fastcall fcn.0000048b(int param_1,int param_2,int param_3)

{
    int iVar1;
    
    if ((param_3 != 0) && (param_1 != param_2)) {
        iVar1 = section..text(param_1,param_2,param_3);
        return iVar1;
    }
    return param_1;
}


/* fcn.0000037c @ 0x37c */

void __cdecl fcn.0000037c(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00000353 @ 0x353 */

void __fastcall fcn.00000353(uint param_1,uint param_2)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x1c))(*(stack0xfffffff2 + -4),param_1,param_2);
    return;
}


/* fcn.000003aa @ 0x3aa */

void __cdecl fcn.000003aa(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x34))(*(stack0xfffffff2 + -4),4,0x38,arg_8h);
    return;
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


/* fcn.000003d6 @ 0x3d6 */

int32_t __fastcall fcn.000003d6(uint param_1)

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


/* fcn.0000040d @ 0x40d */

int32_t fcn.0000040d(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.000004a8 @ 0x4a8 */

uint32_t __fastcall fcn.000004a8(uint param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *0xffd5f5c4;
    if ((((*0xffd5f5c4 == *param_2) && (uVar1 = *0xffd5f5c8, *0xffd5f5c8 == param_2[1])) &&
        (uVar1 = *0xffd5f5cc, *0xffd5f5cc == param_2[2])) && (uVar1 = *0xffd5f5d0, *0xffd5f5d0 == param_2[3])) {
        return CONCAT31(*0xffd5f5d0 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00000438 @ 0x438 */

int16_t * __fastcall fcn.00000438(uint param_1,int16_t *param_2)

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


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 1077 named .text
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


