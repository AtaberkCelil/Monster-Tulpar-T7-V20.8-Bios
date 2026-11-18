// decompiled by r2ghidra: 2030_FspsWrapperPeim.te
// functions: 18

/* entry0 @ 0x276 */

uint __fastcall entry0(uint param_1)

{
    uint *puVar1;
    uint uVar2;
    uint uStack_4;
    
    puVar1 = &uStack_4;
    uVar2 = param_1;
    uStack_4 = param_1;
    fcn.0000056a(param_1,&uStack_4);
    fcn.000004c4(param_1,puVar1,uVar2);
    fcn.000002d1();
    return 0;
}


/* fcn.0000056a @ 0x56a */

//WARNING: Removing unreachable block (ram,0x00000591)
//WARNING: Removing unreachable block (ram,0x000005a0)

int __cdecl fcn.0000056a(uint noname_0,int32_t arg_ch)

{
    uint *puVar1;
    int in_ECX;
    uint uVar2;
    uint *in_EDX;
    int32_t var_10h;
    int32_t var_ch;
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
    uVar2 = puVar1[3];
    if (in_EDX != NULL) {
        *in_EDX = *puVar1;
    }
    if (arg_ch != 0) {
        *arg_ch = uVar2;
    }
    return in_ECX;
}


/* fcn.000004c4 @ 0x4c4 */

void __fastcall fcn.000004c4(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x24))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.000002d1 @ 0x2d1 */

void fcn.000002d1(void)

{
    uint *puVar1;
    uint uVar2;
    int iVar3;
    uint *puVar4;
    uint uVar5;
    uchar auStack_10 [2];
    int iStack_e;
    uchar *puStack_8;
    
    puStack_8 = 0x2da;
    puVar1 = fcn.00000377();
    *puVar1 = 1;
    puStack_8 = 0x2e7;
    uVar2 = fcn.00000362();
    puVar1[3] = 0;
    puVar1[2] = uVar2;
    puStack_8 = 0x2f3;
    iVar3 = fcn.00000362();
    puVar1[4] = *(iVar3 + 0x20);
    puVar1[5] = *(iVar3 + 0x24);
    puStack_8 = 0x307;
    puVar4 = fcn.00000377();
    *puVar4 = 0x80000010;
    puVar4[1] = 0x7e0;
    puVar4[2] = puVar1;
    puStack_8 = 0x31e;
    fcn.00000472();
    puStack_8 = 0x323;
    iVar3 = fcn.00000362();
    uVar2 = *(iVar3 + 0x20);
    puStack_8 = 0x32b;
    uVar5 = fcn.00000362();
    fcn.0000050e(uVar5,uVar2);
    puStack_8 = auStack_10;
    InterruptDescriptorTableRegister();
    (**(**(iStack_e + -4) + 0x24))(*(iStack_e + -4),0x800);
    return;
}


/* fcn.00000377 @ 0x377 */

int32_t __fastcall fcn.00000377(uint param_1)

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


/* fcn.00000362 @ 0x362 */

void fcn.00000362(void)

{
    int iVar1;
    
    iVar1 = fcn.00000346();
    (**(iVar1 + 0xc))(0x780,0x1001);
    return;
}


/* fcn.00000346 @ 0x346 */

int32_t __fastcall fcn.00000346(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.00000497(param_1,&var_4h);
    return var_4h;
}


/* fcn.00000497 @ 0x497 */

void __cdecl fcn.00000497(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00000472 @ 0x472 */

void __fastcall fcn.00000472(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.0000050e @ 0x50e */

void fcn.0000050e(uint param_1,uint param_2)

{
    uint *puVar1;
    uint *puVar2;
    uchar auStack_10 [2];
    int iStack_e;
    uchar *puStack_8;
    
    puStack_8 = 0x517;
    puVar1 = fcn.000003ae();
    *puVar1 = *0x790;
    puVar1[1] = *0x794;
    puVar1[2] = *0x798;
    puVar1[3] = *0x79c;
    puVar1[4] = param_1;
    puVar1[5] = param_2;
    puStack_8 = 0x552;
    puVar2 = fcn.00000377();
    puVar2[2] = puVar1;
    puVar2[1] = 2000;
    *puVar2 = 0x80000010;
    puStack_8 = auStack_10;
    InterruptDescriptorTableRegister();
    (**(**(iStack_e + -4) + 0x18))(*(iStack_e + -4),puVar2);
    return;
}


/* fcn.000003ae @ 0x3ae */

int __fastcall fcn.000003ae(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.00000377();
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


/* fcn.000005c7 @ 0x5c7 */

uint fcn.000005c7(uint param_1)

{
    uint uVar1;
    
    uVar1 = *(*0xfed00148 + 8);
    *(*0xfed00148 + 8) = param_1;
    return uVar1;
}


/* fcn.0000041f @ 0x41f */

void fcn.0000041f(void)

{
    int32_t var_4h;
    
    fcn.000004e9();
    fcn.000003e9();
    return;
}


/* fcn.000004e9 @ 0x4e9 */

void __fastcall fcn.000004e9(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x30))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.000003e9 @ 0x3e9 */

int fcn.000003e9(void)

{
    char cVar1;
    int iVar2;
    
    do {
        iVar2 = fcn.000003c6();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.0000044e();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.0000044e @ 0x44e */

uint32_t __fastcall fcn.0000044e(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.000003c6 @ 0x3c6 */

int16_t * __fastcall fcn.000003c6(int16_t param_1,int16_t *param_2)

{
    while( true ) {
        if (*param_2 == -1) {
            return NULL;
        }
        if (*param_2 == param_1) break;
        param_2 = param_2 + param_2[1];
    }
    return param_2;
}


