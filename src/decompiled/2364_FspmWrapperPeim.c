// decompiled by r2ghidra: 2364_FspmWrapperPeim.te
// functions: 12

/* entry0 @ 0x276 */

uint __fastcall entry0(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    fcn.00000465(param_1,&var_4h);
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x24))(*(stack0xfffffff2 + -4),0xffd25930);
    fcn.000002b4();
    return 0;
}


/* fcn.00000465 @ 0x465 */

//WARNING: Removing unreachable block (ram,0x00000490)
//WARNING: Removing unreachable block (ram,0x00000481)
//WARNING: Removing unreachable block (ram,0x00000489)
//WARNING: Removing unreachable block (ram,0x0000049f)

uint __cdecl fcn.00000465(uint noname_0,int32_t arg_ch)

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


/* fcn.000002b4 @ 0x2b4 */

uint fcn.000002b4(void)

{
    uint *puVar1;
    uint uVar2;
    int iVar3;
    uint *puVar4;
    uint uVar5;
    uint uVar6;
    
    puVar1 = fcn.00000357();
    *puVar1 = 1;
    uVar2 = fcn.00000342();
    puVar1[3] = 0;
    puVar1[2] = uVar2;
    iVar3 = fcn.00000342();
    puVar1[4] = *(iVar3 + 0x20);
    puVar1[5] = *(iVar3 + 0x24);
    puVar4 = fcn.00000357();
    *puVar4 = 0x80000010;
    puVar4[1] = 0xffd25920;
    puVar4[2] = puVar1;
    uVar5 = fcn.000003b7();
    iVar3 = fcn.00000342();
    uVar2 = *(iVar3 + 0x20);
    uVar6 = fcn.00000342();
    fcn.00000409(uVar6,uVar2);
    return uVar5;
}


/* fcn.00000357 @ 0x357 */

int32_t __fastcall fcn.00000357(uint param_1)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffee + -4) + 0x4c))(*(stack0xffffffee + -4),param_1,&var_8h);
    if (iVar1 < 0) {
        var_8h = 0;
    }
    return var_8h;
}


/* fcn.00000342 @ 0x342 */

void fcn.00000342(void)

{
    int iVar1;
    
    iVar1 = fcn.00000326();
    (**(iVar1 + 0xc))(0xffd258f0,0x1000);
    return;
}


/* fcn.00000326 @ 0x326 */

int32_t __fastcall fcn.00000326(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.000003dc(param_1,&var_4h);
    return var_4h;
}


/* fcn.000003dc @ 0x3dc */

void __cdecl fcn.000003dc(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.000003b7 @ 0x3b7 */

void __fastcall fcn.000003b7(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.00000409 @ 0x409 */

void fcn.00000409(uint param_1,uint param_2)

{
    uint *puVar1;
    uint *puVar2;
    uchar auStack_10 [2];
    int iStack_e;
    uchar *puStack_8;
    
    puStack_8 = 0x412;
    puVar1 = fcn.0000038e();
    *puVar1 = *0xffd25900;
    puVar1[1] = *0xffd25904;
    puVar1[2] = *0xffd25908;
    puVar1[3] = *0xffd2590c;
    puVar1[4] = param_1;
    puVar1[5] = param_2;
    puStack_8 = 0x44d;
    puVar2 = fcn.00000357();
    puVar2[2] = puVar1;
    puVar2[1] = 0xffd25910;
    *puVar2 = 0x80000010;
    puStack_8 = auStack_10;
    InterruptDescriptorTableRegister();
    (**(**(iStack_e + -4) + 0x18))(*(iStack_e + -4),puVar2);
    return;
}


/* fcn.0000038e @ 0x38e */

int __fastcall fcn.0000038e(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.00000357();
    if (iVar1 == 0) {
        return 0;
    }
    if (param_1 == 0) {
        return iVar1;
    }
    iVar1 = fcn.000000e0(iVar1,param_1);
    return iVar1;
}


/* fcn.000000e0 @ 0xe0 */

uint * fcn.000000e0(uint *param_1,uint32_t param_2)

{
    uint32_t uVar1;
    uint *puVar2;
    
    uVar1 = param_2 & 3;
    puVar2 = param_1;
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


/* fcn.000004c6 @ 0x4c6 */

uint fcn.000004c6(uint param_1)

{
    uint uVar1;
    
    uVar1 = *(*0xfed00148 + 8);
    *(*0xfed00148 + 8) = param_1;
    return uVar1;
}


