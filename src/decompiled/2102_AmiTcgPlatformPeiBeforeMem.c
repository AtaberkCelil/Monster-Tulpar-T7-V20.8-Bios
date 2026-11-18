// decompiled by r2ghidra: 2102_AmiTcgPlatformPeiBeforeMem.te
// functions: 2

/* entry0 @ 0x179 */

void entry0(uint param_1,int *param_2)

{
    (**(*param_2 + 0x18))(param_2,0x440);
    return;
}


/* fcn.00000220 @ 0x220 */

uint32_t fcn.00000220(void)

{
    uint32_t uVar1;
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    uVar1 = (**(**(stack0xfffffff2 + -4) + 0x58))(*(stack0xfffffff2 + -4),1,0x3038a03,0,0x420,0);
    return uVar1 & -(uVar1 != 0xa0000002);
}


