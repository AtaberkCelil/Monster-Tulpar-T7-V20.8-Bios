// decompiled by r2ghidra: 2020_CpuPei.te
// functions: 9

/* fcn.0000033f @ 0x33f */

uint __fastcall fcn.0000033f(uint param_1,int *param_2)

{
    uint64_t uVar1;
    int iVar2;
    uint32_t uVar3;
    int *piVar4;
    int16_t var_20h;
    int16_t var_1eh;
    int32_t var_1ch;
    int32_t var_ch;
    
    uVar1 = rdmsr(0x35);
    uVar3 = uVar1 & 0xff;
    iVar2 = fcn.000001de();
    var_20h = 0x14;
    var_1eh = 4;
    *(iVar2 + 0x19) = 0;
    fcn.000003fa(&var_1ch,0x650,0x10);
    if ((uVar1 & 0xff) != 0) {
        piVar4 = iVar2 + 0x5f;
        do {
            var_ch = *piVar4;
            if (var_ch != 0) {
                (**(*param_2 + 0x58))(param_2,0x80000002,0x11004,piVar4[1],0,&var_20h);
            }
            piVar4 = piVar4 + 0x1f;
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
    }
    return 0;
}


/* entry0 @ 0x1d5 */

uint entry0(uint param_1,int *param_2)

{
    uint64_t uVar1;
    int iVar2;
    uint32_t uVar3;
    int *piVar4;
    int16_t var_20h;
    int16_t var_1eh;
    int32_t var_1ch;
    int32_t var_ch;
    
    uVar1 = rdmsr(0x35);
    uVar3 = uVar1 & 0xff;
    iVar2 = fcn.000001de();
    var_20h = 0x14;
    var_1eh = 4;
    *(iVar2 + 0x19) = 0;
    fcn.000003fa(&var_1ch,0x650,0x10);
    if ((uVar1 & 0xff) != 0) {
        piVar4 = iVar2 + 0x5f;
        do {
            var_ch = *piVar4;
            if (var_ch != 0) {
                (**(*param_2 + 0x58))(param_2,0x80000002,0x11004,piVar4[1],0,&var_20h);
            }
            piVar4 = piVar4 + 0x1f;
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
    }
    return 0;
}


/* fcn.000003c3 @ 0x3c3 */

int __cdecl fcn.000003c3(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

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


/* fcn.00000442 @ 0x442 */

uint fcn.00000442(void)

{
    char cVar1;
    int iVar2;
    uint extraout_ECX;
    
    do {
        iVar2 = fcn.00000421();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.0000048a();
    } while (cVar1 == '\0');
    return extraout_ECX;
}


/* fcn.000001de @ 0x1de */

int __fastcall fcn.000001de(int *param_1,uint8_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    int iStack_18;
    uint uStack_14;
    uint uStack_10;
    uint uStack_c;
    uint uStack_8;
    uchar auStack_4 [4];
    
    (**(*param_1 + 0x34))(param_1,4,param_2 * 0x1f + 0x4d,&iStack_18);
    *(iStack_18 + 8) = *0x660;
    *(iStack_18 + 0xc) = *0x664;
    *(iStack_18 + 0x10) = *0x668;
    *(iStack_18 + 0x14) = *0x66c;
    *(iStack_18 + 0x18) = param_2;
    *(iStack_18 + 0x1a) = 1;
    *(iStack_18 + 0x2b) = 0x40;
    *(iStack_18 + 0x1f) = *0xc00000b8 & 0xfff00000;
    *(iStack_18 + 0x23) = 0;
    *(iStack_18 + 0x27) = 0x1000000;
    if (param_2 != 0) {
        uVar2 = param_2;
        iVar1 = 0;
        do {
            *(iVar1 + 0x4d + iStack_18) = 0;
            *(iVar1 + 0x4e + iStack_18) = 0;
            *(iVar1 + 0x5f + iStack_18) = 0;
            *(iVar1 + 0x65 + iStack_18) = *0xfee00030;
            uVar2 = uVar2 - 1;
            iVar1 = iVar1 + 0x1f;
        } while (uVar2 != 0);
    }
    fcn.000003c3(&uStack_8,&uStack_14,&uStack_10);
    *(iStack_18 + 0x2d) = uStack_14;
    *(iStack_18 + 0x31) = uStack_10;
    fcn.000003c3(&uStack_8,&uStack_14,&uStack_10);
    *(iStack_18 + 0x35) = uStack_c;
    *(iStack_18 + 0x39) = uStack_8;
    *(iStack_18 + 0x3d) = uStack_14;
    *(iStack_18 + 0x41) = uStack_10;
    (**(*param_1 + 0x30))(param_1,auStack_4);
    iVar1 = fcn.00000442();
    if (iVar1 != 0) {
        *(*(iVar1 + 0x18) * 0x1f + 0x5f + iStack_18) = *(iVar1 + 0x1c);
    }
    return iStack_18;
}


/* fcn.000003fa @ 0x3fa */

uint32_t __cdecl fcn.000003fa(uint32_t arg_8h,int32_t arg_ch,uint32_t arg_10h)

{
    uint32_t uVar1;
    
    if ((arg_10h != 0) && (arg_8h != arg_ch)) {
        uVar1 = section..text(arg_8h,arg_ch,arg_10h);
        return uVar1;
    }
    return arg_8h;
}


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 1047 named .text
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


/* fcn.0000048a @ 0x48a */

uint32_t __fastcall fcn.0000048a(uint param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *0x640;
    if ((((*0x640 == *param_2) && (uVar1 = *0x644, *0x644 == param_2[1])) && (uVar1 = *0x648, *0x648 == param_2[2]))
       && (uVar1 = *0x64c, *0x64c == param_2[3])) {
        return CONCAT31(*0x64c >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00000421 @ 0x421 */

int16_t * __fastcall fcn.00000421(uint param_1,int16_t *param_2)

{
    while( true ) {
        if (*param_2 == -1) {
            return NULL;
        }
        if (*param_2 == 4) break;
        param_2 = param_2 + param_2[1];
    }
    return param_2;
}


