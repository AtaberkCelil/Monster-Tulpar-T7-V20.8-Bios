// decompiled by r2ghidra: 2314_SetupVariablePei.te
// functions: 2

/* entry0 @ 0xfd */

uint entry0(void)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x24))(*(stack0xfffffff2 + -4),0xffd11120);
    return 0;
}


/* fcn.0000015b @ 0x15b */

void fcn.0000015b(void)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),0xffd11114);
    return;
}


