// decompiled by r2ghidra: 2454_CrbPei.te
// functions: 9

/* entry0 @ 0x199 */

uint entry0(uint param_1,int *param_2)

{
    (**(*param_2 + 0x18))(param_2,0xffd507ec);
    (**(*param_2 + 0x24))(param_2,0xffd507c8);
    return 0;
}


/* fcn.00000475 @ 0x475 */

int __cdecl fcn.00000475(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    uint *puVar1;
    int in_ECX;
    uint uVar2;
    uint *in_EDX;
    uint uVar3;
    uint uVar4;
    int32_t var_8h;
    int32_t var_4h;
    
    if (in_ECX == 0) {
        puVar1 = cpuid_basic_info(0);
    }
    else if (in_ECX == 1) {
        puVar1 = cpuid_Version_info(1);
    }
    else if (in_ECX == 2) {
        puVar1 = cpuid_cache_tlb_info(2);
    }
    else if (in_ECX == 3) {
        puVar1 = cpuid_serial_info(3);
    }
    else if (in_ECX == 4) {
        puVar1 = cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (in_ECX == 5) {
        puVar1 = cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (in_ECX == 6) {
        puVar1 = cpuid_Thermal_Power_Management_info(6);
    }
    else if (in_ECX == 7) {
        puVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (in_ECX == 9) {
        puVar1 = cpuid_Direct_Cache_Access_info(9);
    }
    else if (in_ECX == 10) {
        puVar1 = cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (in_ECX == 0xb) {
        puVar1 = cpuid_Extended_Topology_info(0xb);
    }
    else if (in_ECX == 0xd) {
        puVar1 = cpuid_Processor_Extended_States_info(0xd);
    }
    else if (in_ECX == 0xf) {
        puVar1 = cpuid_Quality_of_Service_info(0xf);
    }
    else if (in_ECX == -0x7ffffffe) {
        puVar1 = cpuid_brand_part1_info(0x80000002);
    }
    else if (in_ECX == -0x7ffffffd) {
        puVar1 = cpuid_brand_part2_info(0x80000003);
    }
    else if (in_ECX == -0x7ffffffc) {
        puVar1 = cpuid_brand_part3_info(0x80000004);
    }
    else {
        puVar1 = cpuid(in_ECX);
    }
    uVar4 = puVar1[1];
    uVar3 = puVar1[2];
    uVar2 = puVar1[3];
    if (in_EDX != NULL) {
        *in_EDX = *puVar1;
    }
    if (arg_8h != 0) {
        *arg_8h = uVar4;
    }
    if (arg_ch != 0) {
        *arg_ch = uVar2;
    }
    if (arg_10h != 0) {
        *arg_10h = uVar3;
    }
    return in_ECX;
}


/* fcn.000000a0 @ 0xa0 */

int fcn.000000a0(char *param_1,char *param_2,int param_3)

{
    char cVar1;
    char cVar2;
    char *pcVar3;
    char *pcVar4;
    
    //[00] -r-x section size 1145 named .text
    do {
        pcVar3 = param_1;
        pcVar4 = param_2;
        if (param_3 == 0) break;
        param_3 = param_3 + -1;
        pcVar4 = param_2 + 1;
        pcVar3 = param_1 + 1;
        cVar2 = *param_2;
        cVar1 = *param_1;
        param_1 = pcVar3;
        param_2 = pcVar4;
    } while (cVar1 == cVar2);
    return pcVar3[-1] - pcVar4[-1];
}


/* fcn.0000045e @ 0x45e */

int32_t __fastcall fcn.0000045e(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.00000391(param_1,&var_4h);
    return var_4h;
}


/* fcn.00000391 @ 0x391 */

void __cdecl fcn.00000391(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4),0xffd50778,0,0,arg_ch);
    return;
}


/* fcn.000003c2 @ 0x3c2 */

void __cdecl fcn.000003c2(int32_t arg_8h,int32_t arg_ch)

{
    uint uVar1;
    int *piVar2;
    int iVar3;
    uint *puVar4;
    uint *puVar5;
    ushort in_CX;
    int in_EDX;
    int32_t var_8h;
    
    iVar3 = fcn.000004ac();
    puVar4 = NULL;
    if (iVar3 != 0) {
        puVar4 = fcn.00000100(iVar3,0x24);
    }
    puVar4[8] = 0;
    if (in_EDX == 0) {
        *puVar4 = *0xffd50798;
        puVar4[1] = *0xffd5079c;
        puVar4[2] = *0xffd507a0;
        puVar4[3] = *0xffd507a4;
    }
    else {
        fcn.000004e3();
    }
    puVar4[4] = arg_8h;
    puVar4[5] = arg_ch;
    puVar5 = fcn.000004ac();
    puVar5[1] = 0xffd50788;
    *puVar5 = 0x80000010;
    puVar5[2] = puVar4;
    uVar1 = InterruptDescriptorTableRegister();
    var_8h._2_2_ = uVar1 >> 0x10;
    piVar2 = *(CONCAT22(in_CX,var_8h._2_2_) + -4);
    (**(*piVar2 + 0x18))(piVar2,puVar5);
    return;
}


/* fcn.000004ac @ 0x4ac */

int32_t __fastcall fcn.000004ac(uint param_1)

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


/* fcn.00000100 @ 0x100 */

uint * fcn.00000100(uint *param_1,uint32_t param_2)

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


/* fcn.000004e3 @ 0x4e3 */

uint * __fastcall fcn.000004e3(uint *param_1,uint *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
}


