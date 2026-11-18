// decompiled by r2ghidra: 2299_FirmwareBootMediaInfoPei.te
// functions: 4

/* entry0 @ 0xfd */

uint entry0(void)

{
    int32_t *piVar1;
    int iVar2;
    int extraout_EDX;
    int32_t var_4h;
    
    var_4h = 0;
    iVar2 = fcn.0000013b();
    if (iVar2 != 0) {
        fcn.00000174();
        piVar1 = extraout_EDX + 0x18;
        if ((piVar1 != NULL) && (piVar1 != &var_4h)) {
            section..text(piVar1,&var_4h,4);
        }
    }
    return 0;
}


/* fcn.0000013b @ 0x13b */

int32_t __fastcall fcn.0000013b(uint param_1,uint param_2)

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


/* fcn.00000174 @ 0x174 */

uint * __fastcall fcn.00000174(uint *param_1)

{
    *param_1 = *0xffd1032c;
    param_1[1] = *0xffd10330;
    param_1[2] = *0xffd10334;
    param_1[3] = *0xffd10338;
    return param_1;
}


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 246 named .text
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


