// decompiled by r2ghidra: 0698_CpuS3DataDxe.pe32
// functions: 13

/* entry0 @ 0x10414 */

void entry0(int64_t arg1,int64_t arg2)

{
    *0x109a8 = *(arg2 + 0x60);
    *0x109a0 = arg2;
    fcn.000104dc(arg1,arg2);
    return;
}


/* fcn.000104dc @ 0x104dc */

ulong fcn.000104dc(int64_t arg1,int64_t arg2)

{
    uint16_t *puVar1;
    uint16_t *puVar2;
    uint16_t uVar3;
    char cVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t arg1_00;
    int64_t iVar7;
    uint32_t uVar8;
    int64_t iVar9;
    ulong *puStackX_8;
    uint64_t uStackX_10;
    int64_t iStackX_18;
    uchar auStackX_20 [8];
    uchar auStack_48 [24];
    
    puStackX_8 = arg1;
    uStackX_10 = arg2;
    iVar5 = fcn.00010710();
    cVar4 = (**(iVar5 + 0x30))(0x108d0,0x1100000);
    if (cVar4 == '\0') {
        uVar6 = 0x8000000000000003;
    }
    else {
        iVar5 = fcn.00010710();
        uVar6 = 0x108b0;
        iVar5 = (**(iVar5 + 0x20))(0x108b0,0x60000010);
        arg1_00 = fcn.00010858(uVar6,1);
        if (arg1_00 != 0) {
            fcn.000102c0(arg1_00,0x2f0);
        }
        (**(*0x109a8 + 0x140))(0x108a0,0,&puStackX_8);
        (**puStackX_8)(puStackX_8,&uStackX_10,auStackX_20);
        puVar1 = arg1_00 + 0x2d8;
        *(arg1_00 + 0x30) = 0;
        puVar2 = arg1_00 + 0x2e2;
        *(arg1_00 + 0x38) = 0;
        *(arg1_00 + 0x24) = uStackX_10;
        *(arg1_00 + 0x20) = 0x8000;
        *(arg1_00 + 0x28) = arg1_00 + 0x78;
        *(arg1_00 + 8) = puVar1;
        *(arg1_00 + 0x10) = puVar2;
        iVar9 = uStackX_10 << 0xf;
        iVar7 = (**(*0x109a8 + 0x28))(0,10,(uStackX_10 & 0x1ffffffffffff) * 8,&iStackX_18);
        if (iVar7 < 0) {
            iStackX_18 = 0;
        }
        else if (iVar9 != 0) {
            fcn.000102c0(iStackX_18,iVar9);
        }
        *(arg1_00 + 0x18) = iStackX_18;
        fcn.00010260(puVar1);
        fcn.00010270(puVar2);
        uVar3 = *puVar2;
        uVar8 = *puVar1 + 1;
        iVar9 = fcn.00010434(uVar3 + 1 + uVar8);
        iVar7 = iVar9 + uVar8;
        if (iVar9 != *(arg1_00 + 0x2da)) {
            fcn.00010280(iVar9,*(arg1_00 + 0x2da),uVar8);
        }
        if (iVar7 != *(arg1_00 + 0x2e4)) {
            fcn.00010280(iVar7,*(arg1_00 + 0x2e4),uVar3 + 1);
        }
        *(arg1_00 + 0x2da) = iVar9;
        *(arg1_00 + 0x2e4) = iVar7;
        if (iVar5 != 0) {
            if (arg1_00 + 0x40 != iVar5 + 0x40) {
                fcn.00010280(arg1_00 + 0x40,iVar5 + 0x40,0x38);
            }
        }
        iVar5 = fcn.00010710();
        (**(iVar5 + 0x58))(0x108b0,0x60000010,arg1_00);
        (**(*0x109a8 + 0x170))(0x200,8,0x10488,arg1_00,0x108e0,auStack_48);
        uVar6 = 0;
    }
    return uVar6;
}


/* fcn.00010858 @ 0x10858 */

ulong fcn.00010858(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    if (arg1 == 0) {
        auStackX_10[0] = 0;
    }
    else {
        iVar1 = (**(*0x109a8 + 0x28))(0,4,arg1,auStackX_10);
        if (iVar1 < 0) {
            auStackX_10[0] = 0;
        }
    }
    return auStackX_10[0];
}


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    for (uVar1 = arg2 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
    }
    return arg1;
}


/* fcn.00010790 @ 0x10790 */

int64_t fcn.00010790(int64_t arg1)

{
    ulong uVar1;
    uint64_t uVar2;
    char cVar3;
    ulong *puVar4;
    uint *puVar5;
    int64_t iVar6;
    
    cVar3 = fcn.00010808();
    if (cVar3 != '\0') {
        puVar5 = 0x108f0;
        iVar6 = 0xb;
        puVar4 = arg1;
        do {
            uVar1 = rdmsr(*puVar5);
            puVar5 = puVar5 + 3;
            *puVar4 = uVar1;
            puVar4 = puVar4 + 1;
            iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        uVar2 = rdmsr(0xfe);
        fcn.0001074c(0xfe,uVar2 & 0xff,arg1 + 0x58);
        uVar1 = rdmsr(0x2ff);
        *(arg1 + 600) = uVar1;
    }
    return arg1;
}


/* fcn.00010808 @ 0x10808 */

uint64_t fcn.00010808(void)

{
    ulong uVar1;
    uint64_t uVar2;
    uint32_t uStackX_8;
    
    uVar2 = fcn.00010300(1,0,0,0);
    if ((uStackX_8 & 0x1000) == 0) {
        uVar2 = uVar2 & 0xffffffffffffff00;
    }
    else {
        uVar1 = rdmsr(0xfe);
        uVar2 = CONCAT71(uVar1 >> 8,(uVar1 >> 8 & 1) != 0 && uVar1 != '\0');
    }
    return uVar2;
}


/* fcn.0001074c @ 0x1074c */

int64_t fcn.0001074c(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *puVar2;
    int iVar3;
    uint64_t uVar4;
    
    if (arg1 != 0) {
        uVar4 = arg1 & 0xffffffff;
        iVar3 = 0x201;
        puVar2 = arg2;
        do {
            uVar1 = rdmsr(iVar3 + -1);
            *puVar2 = uVar1;
            uVar1 = rdmsr(iVar3);
            iVar3 = iVar3 + 2;
            puVar2[1] = uVar1;
            uVar4 = uVar4 - 1;
            puVar2 = puVar2 + 2;
        } while (uVar4 != 0);
    }
    return arg2;
}


/* fcn.00010710 @ 0x10710 */

int64_t fcn.00010710(void)

{
    if (*0x109b0 == 0) {
        (**(*0x109a8 + 0x140))(0x108c0,0,0x109b0);
    }
    return *0x109b0;
}


/* fcn.00010260 @ 0x10260 */

void fcn.00010260(ulong *param_1)

{
    ulong uVar1;
    
    //[00] -r-x section size 1600 named .text
    uVar1 = GlobalDescriptorTableRegister();
    *param_1 = uVar1;
    return;
}


/* fcn.00010270 @ 0x10270 */

void fcn.00010270(ulong *param_1)

{
    ulong uVar1;
    
    uVar1 = InterruptDescriptorTableRegister();
    *param_1 = uVar1;
    return;
}


/* fcn.00010434 @ 0x10434 */

int64_t fcn.00010434(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00010858(arg1,((arg1 & 0xfffU) != 0) + (arg1 >> 0xc));
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return arg1_00;
}


/* fcn.00010280 @ 0x10280 */

int64_t fcn.00010280(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    uVar5 = 0;
    puVar2 = arg2 + -1 + arg3;
    if ((arg2 < arg1) && (arg1 <= puVar2)) {
        puVar3 = arg1 + -1 + arg3;
        uVar5 = 1;
        uVar4 = arg3;
    }
    else {
        uVar4 = arg3 & 7;
        puVar2 = arg2;
        puVar3 = arg1;
        for (uVar1 = arg3 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
        }
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + uVar5 * -2 + 1;
        puVar3 = puVar3 + uVar5 * -2 + 1;
    }
    return arg1;
}


/* fcn.00010300 @ 0x10300 */

uint64_t fcn.00010300(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint *in_stack_00000028;
    
    iVar5 = arg1;
    if (iVar5 == 0) {
        puVar1 = cpuid_basic_info(0);
    }
    else if (iVar5 == 1) {
        puVar1 = cpuid_Version_info(1);
    }
    else if (iVar5 == 2) {
        puVar1 = cpuid_cache_tlb_info(2);
    }
    else if (iVar5 == 3) {
        puVar1 = cpuid_serial_info(3);
    }
    else if (iVar5 == 4) {
        puVar1 = cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (iVar5 == 5) {
        puVar1 = cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (iVar5 == 6) {
        puVar1 = cpuid_Thermal_Power_Management_info(6);
    }
    else if (iVar5 == 7) {
        puVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (iVar5 == 9) {
        puVar1 = cpuid_Direct_Cache_Access_info(9);
    }
    else if (iVar5 == 10) {
        puVar1 = cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (iVar5 == 0xb) {
        puVar1 = cpuid_Extended_Topology_info(0xb);
    }
    else if (iVar5 == 0xd) {
        puVar1 = cpuid_Processor_Extended_States_info(0xd);
    }
    else if (iVar5 == 0xf) {
        puVar1 = cpuid_Quality_of_Service_info(0xf);
    }
    else if (iVar5 == -0x7ffffffe) {
        puVar1 = cpuid_brand_part1_info(0x80000002);
    }
    else if (iVar5 == -0x7ffffffd) {
        puVar1 = cpuid_brand_part2_info(0x80000003);
    }
    else if (iVar5 == -0x7ffffffc) {
        puVar1 = cpuid_brand_part3_info(0x80000004);
    }
    else {
        puVar1 = cpuid(iVar5);
    }
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    if (arg4 != 0) {
        *arg4 = puVar1[3];
    }
    if (arg2 != 0) {
        *arg2 = uVar2;
    }
    if (arg3 != 0) {
        *arg3 = uVar3;
    }
    if (in_stack_00000028 != NULL) {
        *in_stack_00000028 = uVar4;
    }
    return arg1 & 0xffffffff;
}


