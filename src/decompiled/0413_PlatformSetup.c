// decompiled by r2ghidra: 0413_PlatformSetup.pe32
// functions: 36

/* entry0 @ 0x103b4 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.000103c8(arg1,in_RDX);
    fcn.00010fa8(arg1,in_RDX);
    return;
}


/* fcn.000103c8 @ 0x103c8 */

void fcn.000103c8(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0_00;
    
    *0x12058 = *(arg1 + 0x60);
    *0x12060 = *(arg1 + 0x58);
    *0x12050 = arg1;
    fcn.000118d8();
    noname_0_00 = 0x11e08;
    iVar3 = fcn.00011908(0x11e08);
    if (iVar3 == 0) {
        uVar4 = fcn.00010360();
        fcn.00010350();
        uVar1 = in(0x1808);
        fcn.00010330(noname_0_00,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            fcn.000102e0();
        }
        fcn.00010330(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010350();
        }
        else {
            fcn.00010340();
        }
    }
    fcn.00011814(0x11df0,0x12078);
    //WARNING: Could not recover jumptable at 0x0001048f. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x12058 + 0x140))(0x11d70,0,0x12080);
    return;
}


/* fcn.00010fa8 @ 0x10fa8 */

ulong fcn.00010fa8(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t arg2_00;
    int64_t arg2_01;
    int64_t iStackX_8;
    uint64_t auStackX_10 [3];
    uint32_t var_6d7h;
    uint32_t var_6dbh;
    int64_t var_760h;
    uint32_t var_796h;
    int64_t var_1440h;
    int64_t var_1448h;
    ulong uStack_14f8;
    ulong auStack_14f0 [3];
    uchar auStack_14d8 [1927];
    char cStack_d51;
    char cStack_d4d;
    uchar auStack_cc8 [54];
    char cStack_c92;
    
    auStack_14f0[0] = 0;
    iStackX_8 = arg1;
    auStackX_10[0] = arg2;
    (**(*0x12058 + 0x140))(0x11cf0,0,0x12480);
    (**(*0x12058 + 0x140))(0x11d50,0,0x12468);
    uStack_14f8 = 0xca9;
    iVar2 = (**(*0x12060 + 0x48))(L"Setup",0x11d60,0,&uStack_14f8,auStack_cc8);
    if (-1 < iVar2) {
        if (cStack_c92 == '\0') {
            iVar2 = fcn.00011548();
        }
        else {
            iVar2 = fcn.00011548();
        }
        (**(iVar2 + 0xa0))(0x1d8,cStack_c92 != '\0');
    }
    auStackX_10[2] = 0x80d;
    fcn.00010260(auStack_14d8,0x80d);
    iVar2 = (**(*0x12060 + 0x48))(L"PchSetup",0x11de0,auStackX_10,auStackX_10 + 2,auStack_14d8);
    if ((((-1 < iVar2) && (cStack_d51 != -1)) && (iVar2 = fcn.00011908(0x11d00), iVar2 != 0)) &&
       (*(iVar2 + 0x24) != cStack_d4d)) {
        uVar3 = 0x11de0;
        arg2_00 = auStackX_10[2];
        cStack_d4d = *(iVar2 + 0x24);
        (**(*0x12060 + 0x58))(L"PchSetup",0x11de0,auStackX_10[0] & 0xffffffff,auStackX_10[2],auStack_14d8);
        fcn.00011874(0x11d90,uVar3,0x10f54,arg2_00);
    }
    auStackX_10[1] = 0x3c1;
    fcn.00010260(0x120a0,0x3c1);
    (**(*0x12060 + 0x48))(L"CpuSetup",0x11d40,0,auStackX_10 + 1,0x120a0);
    auStackX_10[1] = 0x6d;
    (**(*0x12060 + 0x48))(L"SetupVolatileData",0x11d60,&iStackX_8,auStackX_10 + 1,0x11fe0);
    iVar2 = fcn.00011548();
    *0x11fe2 = (**(iVar2 + 8))(0xf7);
    iVar2 = fcn.00011548();
    cVar1 = (**(iVar2 + 8))(0x115);
    iVar2 = 0x11d60;
    iStackX_8 = CONCAT44(iStackX_8._4_4_,2);
    if (cVar1 == '\x02') {
        *0x1204a = 1;
    }
    arg2_01 = 0x6d;
    (**(*0x12060 + 0x58))(L"SetupVolatileData");
    fcn.00011874(0x11ce0,iVar2,0x1087c,arg2_01);
    uVar3 = 0x11d20;
    fcn.00011874(0x11d20,iVar2,0x1087c,arg2_01);
    iVar2 = fcn.00011658(uVar3,iVar2);
    if ((iVar2 != 0) && (iVar2 = fcn.00010260(iVar2,0x24e), iVar2 != 0)) {
        fcn.000112c0(iVar2);
        (**(*0x12058 + 0x148))(auStack_14f0,0x11db0,iVar2,0x11da0,0,0);
        return 0;
    }
    return 0x8000000000000009;
}


/* fcn.000118d8 @ 0x118d8 */

int64_t fcn.000118d8(void)

{
    if (*0x12070 == 0) {
        fcn.00011814(0x11dc0,0x12070);
    }
    return *0x12070;
}


/* fcn.00011814 @ 0x11814 */

ulong fcn.00011814(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x12050;
    uVar4 = 0;
    *arg2 = 0;
    uVar1 = *(iVar3 + 0x68);
    if (uVar1 != 0) {
        piVar2 = *(iVar3 + 0x70);
        piVar5 = piVar2;
        do {
            if ((*CONCAT44(in_register_0000000c,arg1) == *piVar5) &&
               (CONCAT44(in_register_0000000c,arg1)[1] == piVar5[1])) {
                *arg2 = piVar2[uVar4 * 3 + 2];
                return 0;
            }
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 3;
        } while (uVar4 < uVar1);
    }
    return 0x800000000000000e;
}


/* fcn.00011908 @ 0x11908 */

void fcn.00011908(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000118d8();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00011936:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00011936;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010360 @ 0x10360 */

uint64_t fcn.00010360(void)

{
    uint8_t in_CF;
    uint8_t in_PF;
    uint8_t in_AF;
    uint8_t in_ZF;
    uint8_t in_SF;
    uint8_t in_TF;
    uint8_t in_IF;
    uint8_t in_OF;
    uint8_t in_NT;
    uint8_t in_AC;
    uint8_t in_VIF;
    uint8_t in_VIP;
    uint8_t in_ID;
    
    return (in_NT & 1) * 0x4000 | (in_OF & 1) * 0x800 | (in_IF & 1) * 0x200 | (in_TF & 1) * 0x100 | (in_SF & 1) * 0x80 |
           (in_ZF & 1) * 0x40 | (in_AF & 1) * 0x10 | (in_PF & 1) * 4 | in_CF & 1 | (in_ID & 1) * 0x200000 |
           (in_VIP & 1) * 0x100000 | (in_VIF & 1) * 0x80000 | (in_AC & 1) * 0x40000;
}


/* fcn.00010350 @ 0x10350 */

void fcn.00010350(void)

{
    return;
}


/* fcn.00010330 @ 0x10330 */

uint64_t fcn.00010330(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102e2 @ 0x102e2 */

void fcn.000102e2(void)

{
    return;
}


/* fcn.00010340 @ 0x10340 */

void fcn.00010340(void)

{
    return;
}


/* fcn.000115b8 @ 0x115b8 */

ulong fcn.000115b8(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int16_t iVar1;
    uint64_t extraout_RAX;
    uint in_register_00000014;
    
    if ((((arg1 == 0) || (arg3 == 0)) || (1000000 < CONCAT44(in_register_00000014,arg2))) ||
       (CONCAT44(in_register_00000014,arg2) == 0)) {
        return 0x8000000000000002;
    }
    fcn.00011584(arg3,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + (extraout_RAX + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x0001162e;
    }
    if (arg3 < arg1 + CONCAT44(in_register_00000014,arg2) * 2) {
        return 0x800000000000000f;
    }
code_r0x0001162e:
    iVar1 = *arg3;
    if (iVar1 != 0) {
        arg3 = arg3 - arg1;
        do {
            *arg1 = iVar1;
            arg1 = arg1 + 2;
            iVar1 = *(arg3 + arg1);
        } while (iVar1 != 0);
    }
    *arg1 = 0;
    return 0;
}


/* fcn.000102b0 @ 0x102b0 */

uint64_t fcn.000102b0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00010280 @ 0x10280 */

uint64_t fcn.00010280(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint *in_stack_00000028;
    uint *in_stack_00000030;
    
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
    if (in_stack_00000028 != NULL) {
        *in_stack_00000028 = puVar1[3];
    }
    if (arg3 != 0) {
        *arg3 = uVar2;
    }
    if (arg4 != 0) {
        *arg4 = uVar3;
    }
    if (in_stack_00000030 != NULL) {
        *in_stack_00000030 = uVar4;
    }
    return arg1 & 0xffffffff;
}


/* fcn.00011ac4 @ 0x11ac4 */

uint32_t fcn.00011ac4(void)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [2];
    uint32_t uStackX_18;
    
    iVar2 = fcn.00011a8c();
    if (iVar2 == 1) {
        fcn.000102b0(0,auStackX_10,0,0);
        if (10 < auStackX_10[0]) {
            fcn.00010280(0xb,0,0,auStackX_8);
            if (auStackX_8[0] != 0) {
                return uStackX_18;
            }
        }
        fcn.000102b0(1,0,auStackX_8,0);
        auStackX_8[0] = auStackX_8[0] >> 0x18;
    }
    else {
        uVar1 = fcn.00011a60();
        iVar2 = fcn.00011a8c();
        auStackX_8[0] = uVar1;
        if (iVar2 == 1) {
            auStackX_8[0] = fcn.00011ac4();
            if (auStackX_8[0] < 0x100) {
                auStackX_8[0] = uVar1 >> 0x18;
            }
        }
    }
    return auStackX_8[0];
}


/* fcn.00010498 @ 0x10498 */

void fcn.00010498(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    uint8_t uVar2;
    int16_t *piVar3;
    uint8_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    char16_t *pcVar7;
    int iVar8;
    int iVar9;
    int64_t iVar10;
    int64_t iVar11;
    char16_t acStack_68 [12];
    int16_t aiStack_50 [4];
    int64_t var_40h;
    int64_t var_28h;
    
    (**(*(*0x12050 + 0x40) + 8))(*(*0x12050 + 0x40),L"*******************BIST FAILED*****************\r\n");
    fcn.000115b8(aiStack_50,0x14,0x11e90);
    iVar11 = 4;
    iVar10 = 2;
    pcVar7 = acStack_68;
    iVar5 = iVar11;
    iVar6 = iVar10;
    do {
        uVar4 = iVar5;
        iVar5 = iVar5 + -4;
        *pcVar7 = L"0123456789ABCDEF"[(arg1 & 0xffffffffU) >> (uVar4 & 0x3f) & 0xf];
        pcVar7 = pcVar7 + 1;
        iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    piVar3 = aiStack_50;
    iVar6 = 0;
    iVar8 = 0;
    iVar9 = iVar8;
    iVar5 = iVar6;
    iVar1 = aiStack_50[0];
    while (iVar1 != 0) {
        piVar3 = piVar3 + 1;
        iVar5 = iVar5 + 1;
        iVar9 = iVar5;
        iVar1 = *piVar3;
    }
    piVar3 = aiStack_50;
    iVar5 = iVar6;
    iVar1 = aiStack_50[0];
    while (iVar1 != 0) {
        piVar3 = piVar3 + 1;
        iVar5 = iVar5 + 1;
        iVar1 = *piVar3;
    }
    fcn.000115b8(aiStack_50 + iVar5,0x14 - iVar9,acStack_68);
    (**(*(*0x12050 + 0x40) + 8))(*(*0x12050 + 0x40),aiStack_50);
    fcn.000115b8(aiStack_50,0x14,0x11eb0);
    pcVar7 = acStack_68;
    iVar5 = iVar11;
    do {
        uVar4 = iVar5;
        iVar5 = iVar5 + -4;
        *pcVar7 = L"0123456789ABCDEF"[(arg2 & 0xffffffffU) >> (uVar4 & 0x3f) & 0xf];
        pcVar7 = pcVar7 + 1;
        iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    piVar3 = aiStack_50;
    iVar9 = iVar8;
    iVar5 = iVar6;
    iVar1 = aiStack_50[0];
    while (iVar1 != 0) {
        piVar3 = piVar3 + 1;
        iVar5 = iVar5 + 1;
        iVar9 = iVar5;
        iVar1 = *piVar3;
    }
    piVar3 = aiStack_50;
    iVar5 = iVar6;
    iVar1 = aiStack_50[0];
    while (iVar1 != 0) {
        piVar3 = piVar3 + 1;
        iVar5 = iVar5 + 1;
        iVar1 = *piVar3;
    }
    fcn.000115b8(aiStack_50 + iVar5,0x14 - iVar9,acStack_68);
    (**(*(*0x12050 + 0x40) + 8))(*(*0x12050 + 0x40),aiStack_50);
    fcn.000115b8(aiStack_50,0x14,0x11ed0);
    uVar4 = 0xc;
    pcVar7 = acStack_68;
    do {
        uVar2 = uVar4 & 0x3f;
        uVar4 = uVar4 - 4;
        *pcVar7 = L"0123456789ABCDEF"[(arg3 & 0xffffffffU) >> uVar2 & 0xf];
        pcVar7 = pcVar7 + 1;
        iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    piVar3 = aiStack_50;
    iVar5 = iVar6;
    iVar1 = aiStack_50[0];
    while (iVar1 != 0) {
        piVar3 = piVar3 + 1;
        iVar5 = iVar5 + 1;
        iVar8 = iVar5;
        iVar1 = *piVar3;
    }
    piVar3 = aiStack_50;
    while (aiStack_50[0] != 0) {
        piVar3 = piVar3 + 1;
        iVar6 = iVar6 + 1;
        aiStack_50[0] = *piVar3;
    }
    fcn.000115b8(aiStack_50 + iVar6,0x14 - iVar8,acStack_68);
    (**(*(*0x12050 + 0x40) + 8))(*(*0x12050 + 0x40),aiStack_50);
    (**(*(*0x12050 + 0x40) + 8))(*(*0x12050 + 0x40),0x11ee4);
    return;
}


/* fcn.000102e0 @ 0x102e0 */

void fcn.000102e0(void)

{
    return;
}


/* fcn.00010260 @ 0x10260 */

int64_t fcn.00010260(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 6784 named .text
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


/* fcn.00011690 @ 0x11690 */

uint32_t fcn.00011690(void)

{
    uint32_t auStackX_8 [8];
    
    fcn.000102b0(1,auStackX_8,0,0);
    return auStackX_8[0] & 0xfff0ff0;
}


/* fcn.000116bc @ 0x116bc */

ulong fcn.000116bc(void)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uchar uVar3;
    uint32_t auStackX_8 [8];
    
    fcn.000102b0(1,auStackX_8,0,0);
    uVar3 = 4;
    if ((auStackX_8[0] & 0xfff0ff0) == 0x906a0) {
        if (*0xc0000002 < 0x4622) {
            uVar2 = *0xc0000002 - 0x4601;
            if ((*0xc0000002 - 0x4601 & 0xffffffdf) != 0) {
                if (*0xc0000002 != 0x4602) {
                    if (*0xc0000002 == 0x4609) goto code_r0x000117d7;
                    uVar1 = *0xc0000002 - 0x460a;
                    uVar2 = uVar1;
                    if ((0xd < uVar1) || ((0x2401U >> (uVar1 & 0x1f) & 1) == 0)) {
                        if (*0xc0000002 == 0x4619) goto code_r0x000117d7;
                        uVar2 = *0xc0000002 - 0x461a;
                        if (2 < *0xc0000002 - 0x461a) goto code_r0x0001171b;
                    }
                }
code_r0x00011719:
                uVar3 = 2;
                goto code_r0x0001171b;
            }
        }
        else {
            uVar2 = 0;
            if (*0xc0000002 == 0x4622) goto code_r0x00011719;
            if (((((*0xc0000002 != 0x4629) && (*0xc0000002 != 0x4641)) && (*0xc0000002 != 0x4645)) &&
                ((*0xc0000002 != 0x4649 && (*0xc0000002 != 0x4659)))) && (*0xc0000002 != 0x4661)) goto code_r0x0001171b;
        }
    }
    else {
        uVar1 = (auStackX_8[0] & 0xfff0ff0) - 0xb06a0;
        uVar2 = uVar1;
        if (uVar1 != 0) {
            if (uVar1 != 0x40) goto code_r0x0001171b;
            uVar2 = *0xc0000002;
            if ((*0xc0000002 != 0x4614) && (uVar1 = *0xc0000002 - 0x4617, uVar2 = uVar1, (uVar1 & 0xfffffffa) != 0))
            goto code_r0x0001171b;
            goto code_r0x00011719;
        }
        uVar2 = *0xc0000002;
        if (*0xc0000002 < 0xa706) goto code_r0x0001171b;
        if (0xa70b < *0xc0000002) {
            uVar1 = *0xc0000002 - 0xa715;
            uVar2 = uVar1;
            if ((7 < uVar1) || ((0xc3U >> (uVar1 & 0x1f) & 1) == 0)) goto code_r0x0001171b;
        }
    }
code_r0x000117d7:
    uVar3 = 0;
code_r0x0001171b:
    return CONCAT71(uVar2 >> 8,uVar3);
}


/* fcn.00011548 @ 0x11548 */

int64_t fcn.00011548(void)

{
    if (*0x12068 == 0) {
        (**(*0x12058 + 0x140))(0x11d30,0,0x12068);
    }
    return *0x12068;
}


/* fcn.000106f4 @ 0x106f4 */

void fcn.000106f4(void)

{
    char cVar1;
    uint32_t uVar2;
    uint32_t uStackX_8;
    uint8_t auStackX_10 [8];
    uint32_t uStackX_18;
    uchar auStackX_20 [3];
    char cStackX_23;
    
    fcn.000102b0(1,0,0,0);
    if (((uStackX_8 & 0x10000000) != 0) &&
       (fcn.00010280(0xb,0,auStackX_10,0), (uStackX_18 & ~(-1 << (auStackX_10[0] & 0x1f))) != 0)) {
        return;
    }
    fcn.000102b0(0x1a,auStackX_20,0,0);
    if (cStackX_23 == '@') {
        *0x12088 = *0x12088 + '\x01';
    }
    else {
        *0x12461 = *0x12461 + '\x01';
        uVar2 = fcn.00011ac4();
        cVar1 = uVar2 >> 3;
        if (*0x11e00 != cVar1) {
            *0x12470 = *0x12470 + '\x01';
        }
        *0x11e00 = cVar1;
    }
    return;
}


/* fcn.00011b74 @ 0x11b74 */

int64_t fcn.00011b74(ulong noname_0,int64_t noname_1,int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
    
    iVar3 = fcn.00011c4c();
    if (-1 < iVar3) {
        uVar4 = *0xc0000048 & 0xfffffffe;
        uVar1 = uVar4 + 0x5da4;
        *uVar1 = 0x8000001c;
        fcn.00011c4c();
        uVar2 = *uVar1;
        uVar4 = uVar4 + 0x5da0;
        uStack_14 = *uVar4;
        fcn.000119b4(10,noname_1);
        uStack_10 = *uVar1;
        uStack_c = *uVar4;
        if ((uVar2 == uStack_10) || (uStack_14 == uStack_c)) {
            *arg2 = uVar2 & 0xff;
            if (arg1 != &uStack_14) {
                fcn.000102f0(arg1,&uStack_14,4);
            }
        }
        else {
            iVar3 = -0x7ffffffffffffffe;
        }
    }
    return iVar3;
}


/* fcn.000117e0 @ 0x117e0 */

uint32_t fcn.000117e0(void)

{
    uint32_t uStackX_8;
    
    fcn.00010280(7,0,0,0);
    return uStackX_8 >> 0xd & 0xffffff01;
}


/* fcn.00011874 @ 0x11874 */

int64_t fcn.00011874(int64_t arg1,ulong noname_1,ulong noname_2,int64_t arg2)

{
    int64_t iStackX_20;
    ulong in_stack_00000028;
    
    iStackX_20 = arg2;
    (**(*0x12058 + 0x50))(0x200,8,noname_2,0,&iStackX_20);
    (**(*0x12058 + 0xa8))(arg1,iStackX_20,in_stack_00000028);
    (**(*0x12058 + 0x68))(iStackX_20);
    return iStackX_20;
}


/* fcn.00011658 @ 0x11658 */

int64_t fcn.00011658(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_10 [3];
    
    aiStackX_10[0] = arg1;
    iVar1 = (**(*0x12058 + 0x40))(4,0x24e,aiStackX_10);
    if (iVar1 < 0) {
        aiStackX_10[0] = 0;
    }
    return aiStackX_10[0];
}


/* fcn.000112c0 @ 0x112c0 */

void fcn.000112c0(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    ushort *puVar3;
    ushort *puVar4;
    int64_t iVar5;
    int64_t iVar6;
    ushort *puVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ushort *puVar10;
    
    iVar2 = fcn.00011908(0x11dd0);
    uVar8 = 0;
    if (iVar2 != 0) {
        *(arg1 + 0x229) = *(iVar2 + 0x26);
        *(arg1 + 0x22a) = *(iVar2 + 0x40);
        *(arg1 + 0x24a) = *(iVar2 + 0x41);
        *(arg1 + 0x150) = *(iVar2 + 0x28);
        *(arg1 + 0x154) = *(iVar2 + 0x1e);
        *(arg1 + 0x156) = *(iVar2 + 0x1c);
        *(arg1 + 0x228) = *(iVar2 + 0x25);
        *(arg1 + 0x227) = *(iVar2 + 0x42);
        *(arg1 + 0x226) = *(iVar2 + 0x43);
        *(arg1 + 0x24d) = *(iVar2 + 0xfac);
        cVar1 = *(iVar2 + 0x1b);
        if (cVar1 == '\x1a') {
            *(arg1 + 0x22b) = 0;
        }
        else if (cVar1 == '\x1e') {
            *(arg1 + 0x22b) = 3;
        }
        else if (cVar1 == '\"') {
            *(arg1 + 0x22b) = 1;
        }
        else if (cVar1 == '#') {
            *(arg1 + 0x22b) = 2;
        }
        else {
            *(arg1 + 0x22b) = 4;
        }
        iVar6 = 7;
        puVar10 = arg1 + 0x22e;
        puVar7 = iVar2 + 0x60;
        do {
            puVar10[-0x5b] = puVar7[-0xe];
            *puVar10 = *puVar7;
            puVar10[7] = puVar7[0xe];
            iVar6 = iVar6 + -1;
            puVar10 = puVar10 + 1;
            puVar7 = puVar7 + 2;
        } while (iVar6 != 0);
        puVar10 = iVar2 + 0xa8;
        iVar2 = 2;
        do {
            iVar6 = 4;
            puVar7 = puVar10;
            do {
                if (*(puVar7 + -0xb) == '\x02') {
                    iVar5 = 7;
                    puVar3 = arg1 + 8;
                    puVar4 = puVar7;
                    do {
                        *(puVar3 + -4) = *(puVar4 + -4);
                        puVar3[-1] = puVar4[-1];
                        *puVar3 = *puVar4;
                        puVar3[1] = puVar4[1];
                        puVar3[2] = puVar4[2];
                        puVar3[3] = puVar4[3];
                        puVar3[4] = puVar4[4];
                        puVar3[5] = puVar4[5];
                        puVar3[9] = puVar4[9];
                        puVar3[10] = puVar4[10];
                        puVar3[0xd] = puVar4[0xd];
                        puVar3[0xe] = puVar4[0xe];
                        puVar3[0xf] = puVar4[0xf];
                        puVar3[6] = puVar4[6];
                        puVar3[7] = puVar4[7];
                        puVar3[8] = puVar4[8];
                        puVar3[0xb] = puVar4[0xb];
                        puVar3[0xc] = puVar4[0xc];
                        puVar3[0x10] = puVar4[0x10];
                        puVar3[0x12] = puVar4[0x12];
                        puVar3[0x11] = puVar4[0x11];
                        puVar3[-2] = *(puVar4 + -2);
                        iVar5 = iVar5 + -1;
                        puVar3 = puVar3 + 0x18;
                        puVar4 = puVar4 + 0x17;
                    } while (iVar5 != 0);
                }
                iVar5 = 2;
                puVar3 = puVar7 + 0xab;
                uVar9 = uVar8;
                do {
                    *(arg1 + 0x158 + uVar9 * 2) = puVar3[-0xd];
                    *(arg1 + 0x186 + uVar9) = *(puVar3 + -0xe);
                    *(arg1 + 0x196 + uVar9) = *puVar3;
                    uVar8 = uVar9 + 1;
                    *(arg1 + 0x1a6 + uVar9 * 8) = -(*(puVar3 + -0xe) < 3) & puVar3 + 2;
                    iVar5 = iVar5 + -1;
                    puVar3 = puVar3 + 0x20;
                    uVar9 = uVar8;
                } while (iVar5 != 0);
                puVar7 = puVar7 + 0x1c5;
                iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            puVar10 = puVar10 + 0x719;
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
    }
    return;
}


/* fcn.00011584 @ 0x11584 */

uint64_t fcn.00011584(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if (((CONCAT44(in_register_0000000c,arg1) != 0) && (arg2 != 0)) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
        do {
            if (arg2 - 1U <= uVar1) {
                return arg2;
            }
            uVar1 = uVar1 + 1;
        } while (*(CONCAT44(in_register_0000000c,arg1) + uVar1 * 2) != 0);
        return uVar1;
    }
    return 0;
}


/* fcn.00011954 @ 0x11954 */

void fcn.00011954(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int iVar4;
    uint32_t uVar5;
    
    uVar3 = arg1 >> 0x16 & 0x3ff;
    uVar5 = arg1 & 0x3fffff;
    do {
        uVar1 = in(0x1808);
        iVar4 = (uVar1 & 0xffffff) + uVar5;
        uVar5 = 0x400000;
        while( true ) {
            iVar2 = in(0x1808);
            if ((iVar4 - iVar2 >> 0x17 & 1) != 0) break;
            fcn.000102e0();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.000119e8 @ 0x119e8 */

ulong fcn.000119e8(void)

{
    uint64_t uVar1;
    uint32_t auStackX_8 [8];
    
    fcn.000102b0(1,auStackX_8,0,0);
    uVar1 = (auStackX_8[0] >> 8 & 0xf) - 4;
    return CONCAT71(uVar1 >> 8,1 < uVar1);
}


/* fcn.00011a8c @ 0x11a8c */

char fcn.00011a8c(void)

{
    uint64_t uVar1;
    char cVar2;
    
    cVar2 = fcn.000119e8();
    if (cVar2 == '\0') {
        cVar2 = '\x01';
    }
    else {
        uVar1 = rdmsr(0x1b);
        cVar2 = ((uVar1 & 0x400) != 0) + '\x01';
    }
    return cVar2;
}


/* fcn.00011a24 @ 0x11a24 */

int64_t fcn.00011a24(void)

{
    uint64_t uVar1;
    char cVar2;
    int64_t iVar3;
    
    cVar2 = fcn.000119e8();
    if (cVar2 == '\0') {
        iVar3 = 0xfee00000;
    }
    else {
        uVar1 = rdmsr(0x1b);
        iVar3 = (uVar1 & 0xffffffff00000000) + (uVar1 & 0xfffff000);
    }
    return iVar3;
}


/* fcn.00011a60 @ 0x11a60 */

uint64_t fcn.00011a60(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    iVar1 = fcn.00011a8c();
    if (iVar1 == 1) {
        iVar1 = fcn.00011a24();
        uVar2 = *(iVar1 + 0x20);
    }
    else {
        uVar2 = rdmsr(0x802);
    }
    return uVar2;
}


/* fcn.00011c4c @ 0x11c4c */

ulong fcn.00011c4c(ulong param_1,int64_t param_2)

{
    int iVar1;
    uint16_t uVar2;
    ulong uVar3;
    
    uVar3 = 0;
    uVar2 = 0;
    do {
        iVar1 = *((*0xc0000048 & 0xfffffffe) + 0x5da4);
        fcn.000119b4(1,param_2);
        uVar2 = uVar2 + 1;
        if (-1 < iVar1) {
            return 0;
        }
    } while (uVar2 < 1000);
    if (uVar2 == 1000) {
        uVar3 = 0x8000000000000012;
    }
    return uVar3;
}


/* fcn.000119b4 @ 0x119b4 */

int64_t fcn.000119b4(int64_t arg1,int64_t arg2)

{
    fcn.00011954((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.000102f0 @ 0x102f0 */

int64_t fcn.000102f0(int64_t arg1,uint32_t *arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint32_t *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    uVar5 = 0;
    puVar2 = arg2 + arg3 + -1;
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
            puVar2 = puVar2 + 2;
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


