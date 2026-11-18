// decompiled by r2ghidra: 2209_PcatSingleSegmentPciCfg2Pei.pe32
// functions: 8

/* entry0 @ 0x1027d */

void __cdecl entry0(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xfffffff2 + -4) + 0x74))(arg_8h);
    *(*arg_ch + 100) = 0x9f0;
    if (iVar1 != -0x7fffffec) {
        fcn.000108f7();
    }
    return;
}


/* fcn.000108f7 @ 0x108f7 */

void fcn.000108f7(void)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),0xa00);
    return;
}


/* fcn.000102ba @ 0x102ba */

uint32_t __fastcall fcn.000102ba(uint8_t *param_1)

{
    if (*(param_1 + 4) == 0) {
        return ((param_1[2] & 0x1f | param_1[3] << 5) << 3 | param_1[1] & 7) << 0xc | *param_1;
    }
    return ((param_1[2] & 0x1f | param_1[3] << 5) << 3 | param_1[1] & 7) << 0xc | *(param_1 + 4) & 0xfff;
}


/* fcn.00010993 @ 0x10993 */

void fcn.00010993(void)

{
    int iVar1;
    
    iVar1 = fcn.000109a8();
    (**(iVar1 + 0x10))(0x9e0,0x200002);
    return;
}


/* fcn.000109a8 @ 0x109a8 */

int32_t __fastcall fcn.000109a8(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.00010920(param_1,&var_4h);
    return var_4h;
}


/* fcn.00010920 @ 0x10920 */

void __cdecl fcn.00010920(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4),0x9c0,0,0,arg_ch);
    return;
}


/* fcn.00010951 @ 0x10951 */

void __fastcall fcn.00010951(int param_1,uint8_t param_2,uint8_t param_3)

{
    int iVar1;
    
    iVar1 = fcn.00010993();
    *(iVar1 + param_1) = *(iVar1 + param_1) & param_2 | param_3;
    return;
}


/* fcn.0001096d @ 0x1096d */

void __fastcall fcn.0001096d(int param_1,uint16_t param_2,uint16_t param_3)

{
    int iVar1;
    
    iVar1 = fcn.00010993();
    *(iVar1 + param_1) = *(iVar1 + param_1) & param_2 | param_3;
    return;
}


