// decompiled by r2ghidra: 2414_NvmeRecoveryPei.te
// functions: 13

/* entry0 @ 0x179 */

uint entry0(void)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x24))(*(stack0xfffffff2 + -4),0xffd48228);
    return 0;
}


/* fcn.00000230 @ 0x230 */

uint32_t __fastcall fcn.00000230(uint32_t param_1)

{
    int32_t var_4h;
    
    fcn.000004ea();
    return param_1 & 0xfff0ff0;
}


/* fcn.000004ea @ 0x4ea */

//WARNING: Removing unreachable block (ram,0x00000520)
//WARNING: Removing unreachable block (ram,0x00000509)
//WARNING: Removing unreachable block (ram,0x00000518)
//WARNING: Removing unreachable block (ram,0x00000527)

uint __fastcall fcn.000004ea(uint param_1,uint *param_2)

{
    uint *puVar1;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    puVar1 = cpuid_Version_info(1);
    if (param_2 != NULL) {
        *param_2 = *puVar1;
    }
    return 1;
}


/* fcn.000000a0 @ 0xa0 */

uint * fcn.000000a0(uint *param_1,uint32_t param_2)

{
    uint32_t uVar1;
    uint *puVar2;
    
    uVar1 = param_2 & 3;
    puVar2 = param_1;
    //[00] -r-x section size 1198 named .text
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


/* fcn.000002d3 @ 0x2d3 */

int __thiscall fcn.000002d3(uint *param_1,uint *param_2,uchar *param_3,uchar *param_4)

{
    int iVar1;
    uint32_t uStack_50;
    uint uStack_4c;
    uchar auStack_48 [6];
    uchar auStack_42 [44];
    uchar uStack_16;
    
    if ((((param_1 == NULL) || (param_2 == NULL)) || (param_3 == NULL)) || (param_4 == NULL)) {
        iVar1 = -0x7ffffffe;
    }
    else {
        iVar1 = fcn.000003f6();
        if (iVar1 == 0) {
            iVar1 = -0x7ffffff2;
        }
        else {
            fcn.000000a0(&uStack_50,0x4e);
            uStack_16 = 0;
            uStack_50 = uStack_50 & 0xffffa3f0 | 0x23f0;
            if (&uStack_4c != param_1) {
                fcn.000000c0(&uStack_4c,param_1,0x36);
            }
            iVar1 = fcn.00000423();
            if (-1 < iVar1) {
                if ((((uStack_50 & 0x7f00) == 0x2300) && ((uStack_50 & 0x8000) != 0)) && ((uStack_50 & 0xff000000) == 0)
                   ) {
                    *param_2 = uStack_4c;
                    if (param_3 != auStack_48) {
                        fcn.000000c0(param_3,auStack_48,6);
                    }
                    if (param_4 != auStack_42) {
                        fcn.000000c0(param_4,auStack_42,0x40);
                    }
                }
                else {
                    iVar1 = -0x7ffffff9;
                }
            }
        }
    }
    return iVar1;
}


/* fcn.00000287 @ 0x287 */

int fcn.00000287(void)

{
    int iVar1;
    int extraout_EDX;
    
    iVar1 = fcn.0000024e();
    if (iVar1 == 0) {
        return 0;
    }
    fcn.000004ab();
    return extraout_EDX + 0x18;
}


/* fcn.0000024e @ 0x24e */

int32_t __fastcall fcn.0000024e(uint param_1,uint param_2)

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


/* fcn.000004ab @ 0x4ab */

uint * __fastcall fcn.000004ab(uint *param_1)

{
    *param_1 = *0xffd481f8;
    param_1[1] = *0xffd481fc;
    param_1[2] = *0xffd48200;
    param_1[3] = *0xffd48204;
    return param_1;
}


/* fcn.000000c0 @ 0xc0 */

uint * fcn.000000c0(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
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


/* fcn.000003f6 @ 0x3f6 */

int32_t __fastcall fcn.000003f6(int *param_1)

{
    int iVar1;
    int32_t var_4h;
    
    var_4h = 0;
    iVar1 = fcn.000002a2(param_1,&var_4h);
    if (param_1 != NULL) {
        *param_1 = (-1 < iVar1) - 1;
    }
    return var_4h;
}


/* fcn.000002a2 @ 0x2a2 */

void __cdecl fcn.000002a2(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4),0xffd48208,0,0,arg_ch);
    return;
}


/* fcn.00000423 @ 0x423 */

uint __thiscall fcn.00000423(int param_1)

{
    int iVar1;
    uint uVar2;
    int in_stack_00000014;
    int in_stack_0000001c;
    uint32_t *in_stack_00000020;
    
    iVar1 = fcn.000003f6();
    if (((((param_1 == 0) || (iVar1 == 0)) || (param_1 != 0)) || ((iVar1 != 0 || (in_stack_00000014 == 0)))) ||
       ((in_stack_0000001c == 0 || (in_stack_00000020 == NULL)))) {
        uVar2 = 0x80000002;
    }
    else {
        if ((*in_stack_00000020 < 0x3c) || (in_stack_00000014 == in_stack_0000001c)) {
        }
        else {
            fcn.000004cd(0x3b);
            in_stack_00000014 = in_stack_0000001c;
        }
        uVar2 = (*_main)(0,in_stack_00000014,0x3b,in_stack_00000020,0,7);
        if (in_stack_00000014 != in_stack_0000001c) {
            fcn.000004cd(*in_stack_00000020);
        }
    }
    return uVar2;
}


/* fcn.000004cd @ 0x4cd */

int __fastcall fcn.000004cd(int param_1,int param_2,int param_3)

{
    int iVar1;
    
    if ((param_3 != 0) && (param_1 != param_2)) {
        iVar1 = fcn.000000c0(param_1,param_2,param_3);
        return iVar1;
    }
    return param_1;
}


