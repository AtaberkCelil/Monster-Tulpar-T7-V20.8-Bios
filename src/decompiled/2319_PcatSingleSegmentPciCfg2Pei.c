// decompiled by r2ghidra: 2319_PcatSingleSegmentPciCfg2Pei.te
// functions: 3

/* entry0 @ 0xfd */

void __cdecl entry0(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xfffffff2 + -4) + 0x74))(arg_8h);
    *(*arg_ch + 100) = 0xffd11a34;
    if (iVar1 != -0x7fffffec) {
        fcn.000007a9();
    }
    return;
}


/* fcn.000007a9 @ 0x7a9 */

void fcn.000007a9(void)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),0xffd11a44);
    return;
}


/* fcn.0000013a @ 0x13a */

uint32_t __fastcall fcn.0000013a(uint8_t *param_1)

{
    if (*(param_1 + 4) == 0) {
        return ((param_1[2] & 0x1f | param_1[3] << 5) << 3 | param_1[1] & 7) << 0xc | *param_1;
    }
    return ((param_1[2] & 0x1f | param_1[3] << 5) << 3 | param_1[1] & 7) << 0xc | *(param_1 + 4) & 0xfff;
}


