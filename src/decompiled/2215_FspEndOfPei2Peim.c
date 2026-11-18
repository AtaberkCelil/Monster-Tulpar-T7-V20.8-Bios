// decompiled by r2ghidra: 2215_FspEndOfPei2Peim.pe32
// functions: 2

/* entry0 @ 0x1027d */

uint entry0(void)

{
    fcn.00010285();
    return 0;
}


/* fcn.00010285 @ 0x10285 */

void fcn.00010285(void)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),0x2d0);
    return;
}


