// decompiled by r2ghidra: 2525_CpuIoPei.te
// functions: 9

/* entry0 @ 0x17d */

uint __cdecl entry0(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xfffffff2 + -4) + 0x74))(arg_8h);
    *(*arg_ch + 0x60) = 0xffd5febc;
    if (iVar1 != -0x7fffffec) {
        fcn.000006e1();
    }
    return 0;
}


/* fcn.000006e1 @ 0x6e1 */

void fcn.000006e1(void)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),0xffd5feac);
    return;
}


/* fcn.000001bc @ 0x1bc */

uint __cdecl fcn.000001bc(uint32_t arg_8h,uint32_t arg_ch,int32_t arg_10h)

{
    uint32_t uVar1;
    uint32_t uVar2;
    char in_CL;
    uint32_t in_EDX;
    bool bVar3;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_4h;
    
    if (0xb < in_EDX) {
        return 0x80000002;
    }
    if (in_EDX - 4 < 4) {
        arg_10h = 1;
    }
    if ((in_CL == '\0') && ((in_EDX & 3) == 3)) {
        return 0x80000002;
    }
    uVar1 = ((in_CL == '\0') - 1 & 0xffff0000) + 0xffff;
    if (arg_10h == 0) {
        bVar3 = false;
    }
    else {
        var_4h._0_1_ = in_EDX & 3;
        uVar2 = uVar1 >> var_4h | 0 << 0x20 - var_4h;
        if ((0U >> var_4h == 0) && (uVar2 < arg_10h - 1U)) {
            return 0x80000003;
        }
        uVar1 = (uVar2 - arg_10h) + 1;
        uVar2 = ((0U >> var_4h) - (uVar2 < arg_10h)) + (0xfffffffe < uVar2 - arg_10h) << var_4h | uVar1 >> 0x20 - var_4h
        ;
        uVar1 = uVar1 << var_4h;
        bVar3 = arg_ch < uVar2;
        arg_ch = arg_ch - uVar2;
    }
    if ((!bVar3) && ((arg_ch != 0 || (uVar1 < arg_8h)))) {
        return 0x80000003;
    }
    return 0;
}


/* fcn.000000c7 @ 0xc7 */

void fcn.000000c7(ushort param_1,int param_2,uint *param_3)

{
    uint uVar1;
    
    while (param_2 != 0) {
        param_2 = param_2 + -1;
        uVar1 = in(param_1);
        *param_3 = uVar1;
        param_3 = param_3 + 1;
    }
    return;
}


/* fcn.000000b3 @ 0xb3 */

void fcn.000000b3(ushort param_1,int param_2,ushort *param_3)

{
    ushort uVar1;
    
    while (param_2 != 0) {
        param_2 = param_2 + -1;
        uVar1 = in(param_1);
        *param_3 = uVar1;
        param_3 = param_3 + 1;
    }
    return;
}


/* fcn.000000a0 @ 0xa0 */

void fcn.000000a0(ushort param_1,int param_2,uchar *param_3)

{
    uchar uVar1;
    
    //[00] -r-x section size 1642 named .text
    while (param_2 != 0) {
        param_2 = param_2 + -1;
        uVar1 = in(param_1);
        *param_3 = uVar1;
        param_3 = param_3 + 1;
    }
    return;
}


/* fcn.00000101 @ 0x101 */

void fcn.00000101(ushort param_1,int param_2,uint *param_3)

{
    while (param_2 != 0) {
        param_2 = param_2 + -1;
        out(*param_3,param_1);
        param_3 = param_3 + 1;
    }
    return;
}


/* fcn.000000ed @ 0xed */

void fcn.000000ed(ushort param_1,int param_2,ushort *param_3)

{
    while (param_2 != 0) {
        param_2 = param_2 + -1;
        out(*param_3,param_1);
        param_3 = param_3 + 1;
    }
    return;
}


/* fcn.000000da @ 0xda */

void fcn.000000da(ushort param_1,int param_2,uchar *param_3)

{
    while (param_2 != 0) {
        param_2 = param_2 + -1;
        out(*param_3,param_1);
        param_3 = param_3 + 1;
    }
    return;
}


