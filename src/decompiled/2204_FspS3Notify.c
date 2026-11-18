// decompiled by r2ghidra: 2204_FspS3Notify.te
// functions: 3

/* entry0 @ 0x126 */

uint entry0(void)

{
    uint uVar1;
    int32_t var_18h;
    int32_t var_10h;
    uint32_t var_8h;
    int32_t var_4h;
    
    uVar1 = 0;
    if (*(*0xfed00148 + 0x59) == '\x01') {
        var_4h = &var_10h;
        InterruptDescriptorTableRegister();
        uVar1 = (**(**(stack0xffffffee + -4) + 0x28))(*(stack0xffffffee + -4),&var_8h);
        if (var_8h == 0x11) {
            var_4h = &var_18h;
            InterruptDescriptorTableRegister();
            uVar1 = (**(**(stack0xffffffe6 + -4) + 0x24))(*(stack0xffffffe6 + -4),0xffb35a90);
        }
    }
    return uVar1;
}


/* fcn.000001f4 @ 0x1f4 */

uint fcn.000001f4(uint param_1)

{
    uint uVar1;
    
    uVar1 = *(*0xfed00148 + 8);
    *(*0xfed00148 + 8) = param_1;
    return uVar1;
}


/* fcn.000001cf @ 0x1cf */

void __fastcall fcn.000001cf(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


