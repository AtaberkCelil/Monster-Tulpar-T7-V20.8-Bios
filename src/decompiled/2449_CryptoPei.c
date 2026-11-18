// decompiled by r2ghidra: 2449_CryptoPei.te
// functions: 5

/* entry0 @ 0x250 */

void __cdecl entry0(int32_t arg_8h)

{
    uint in_ECX;
    int32_t var_4h;
    
    fcn.00000363(in_ECX,&var_4h);
    fcn.0000026e();
    return;
}


/* fcn.00000363 @ 0x363 */

//WARNING: Removing unreachable block (ram,0x0000038e)
//WARNING: Removing unreachable block (ram,0x0000037f)
//WARNING: Removing unreachable block (ram,0x00000387)
//WARNING: Removing unreachable block (ram,0x0000039d)

uint __cdecl fcn.00000363(uint noname_0,int32_t arg_ch)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = cpuid_Version_info(1);
    if (arg_ch != 0) {
        *arg_ch = *(iVar1 + 0xc);
    }
    return 1;
}


/* fcn.0000026e @ 0x26e */

void __fastcall fcn.0000026e(uint param_1)

{
    int iVar1;
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_18h;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffe6 + -4) + 0x20))(*(stack0xffffffe6 + -4),0xffd4f654,0,0,&var_ch);
    if (iVar1 == -0x7ffffff2) {
        var_4h = &var_18h;
        InterruptDescriptorTableRegister();
        iVar1 = (**(**(stack0xffffffe6 + -4) + 0x74))(param_1);
        if (iVar1 < 0) {
            return;
        }
    }
    else {
        if (iVar1 != 0) {
            return;
        }
        var_4h = &var_18h;
        InterruptDescriptorTableRegister();
        iVar1 = (**(**(stack0xffffffe6 + -4) + 0x20))(*(stack0xffffffe6 + -4),0xffd4f644,0,&var_8h,&var_10h);
        if (-1 < iVar1) {
            var_4h = &var_18h;
            InterruptDescriptorTableRegister();
            (**(**(stack0xffffffe6 + -4) + 0x1c))(*(stack0xffffffe6 + -4),var_8h,0xffd4f664);
            return;
        }
    }
    fcn.0000033a();
    return;
}


/* fcn.0000033a @ 0x33a */

void fcn.0000033a(void)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),0xffd4f664);
    return;
}


/* fcn.000004e8 @ 0x4e8 */

uint64_t fcn.000004e8(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    
    if (param_4 == 0) {
        return CONCAT44(param_2 / param_3,(param_2 % param_3 << 0x20 | param_1) / param_3);
    }
    uVar4 = param_1;
    uVar5 = param_4;
    uVar6 = param_2;
    uVar7 = param_3;
    do {
        uVar3 = uVar6 & 1;
        uVar6 = uVar6 >> 1;
        uVar4 = uVar4 >> 1 | (uVar3 != 0) << 0x1f;
        uVar7 = uVar7 >> 1 | uVar5 << 0x1f;
        uVar5 = uVar5 >> 1;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar6,uVar4) / uVar7;
    uVar4 = uVar1;
    iVar2 = (uVar1 & 0xffffffff) * param_3;
    uVar5 = iVar2 >> 0x20;
    uVar6 = uVar5 + param_4 * uVar4;
    if ((CARRY4(uVar5,param_4 * uVar4)) || ((param_2 <= uVar6 && ((param_2 < uVar6 || (param_1 < iVar2)))))) {
        uVar4 = uVar4 - 1;
    }
    return uVar4;
}


