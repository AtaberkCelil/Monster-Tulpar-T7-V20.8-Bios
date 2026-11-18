// decompiled by r2ghidra: 0368_TmeInitDxe.pe32
// functions: 12

/* entry0 @ 0x103b4 */

ulong entry0(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    char cVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    ulong uVar8;
    int64_t iStackX_8;
    
    *0x108e8 = *(arg2 + 0x60);
    *0x108e0 = arg2;
    iStackX_8 = arg1;
    fcn.000107b0();
    iVar5 = fcn.000107e0();
    uVar8 = 0;
    if (iVar5 == 0) {
        uVar6 = fcn.00010360();
        fcn.00010350();
        uVar3 = in(0x1808);
        fcn.00010330(arg1,0x1808);
        while( true ) {
            iVar4 = in(0x1808);
            uVar7 = ((uVar3 & 0xffffff) + 0x16b) - iVar4;
            if ((uVar7 >> 0x17 & 1) != 0) break;
            func_0x00010320();
        }
        fcn.00010330(uVar7,0x1808);
        if ((uVar6 >> 9 & 1) == 0) {
            fcn.00010350();
        }
        else {
            fcn.00010340();
        }
    }
    fcn.00010750(0x10880,0x108f8);
    cVar2 = fcn.0001071c();
    if (cVar2 == '\x01') {
        if (*(*0x108e0 + 8) < 0x20000) {
            uVar8 = 0x8000000000000003;
        }
        else {
            uVar8 = (**(*0x108e8 + 0x170))(0x200,8,0x10594,0,0x10840,&iStackX_8);
        }
        cVar2 = fcn.0001071c();
        if (cVar2 == '\x01') {
            uVar1 = rdmsr(0x982);
            if ((uVar1 & 3) == 3) {
                uVar8 = fcn.000104ec();
            }
        }
    }
    return uVar8;
}


/* fcn.000107b0 @ 0x107b0 */

int64_t fcn.000107b0(void)

{
    if (*0x108f0 == 0) {
        fcn.00010750(0x10860,0x108f0);
    }
    return *0x108f0;
}


/* fcn.00010750 @ 0x10750 */

ulong fcn.00010750(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x108e0;
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


/* fcn.000107e0 @ 0x107e0 */

void fcn.000107e0(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000107b0();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00010817:
            if ((piVar1 == NULL) || ((*0x10890 == *(piVar1 + 4) && (*0x10898 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00010817;
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


/* fcn.00010322 @ 0x10322 */

void fcn.00010322(void)

{
    return;
}


/* fcn.00010340 @ 0x10340 */

void fcn.00010340(void)

{
    return;
}


/* fcn.0001071c @ 0x1071c */

uint32_t fcn.0001071c(void)

{
    uint32_t uStackX_8;
    
    section..text(7,0,0,0);
    return uStackX_8 >> 0xd & 0xffffff01;
}


/* section..text @ 0x10260 */

uint64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint *in_stack_00000028;
    uint *in_stack_00000030;
    
    //[00] -r-x section size 1504 named .text
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


/* fcn.000104ec @ 0x104ec */

void fcn.000104ec(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    
    uVar3 = 0;
    iStackX_10 = 0;
    uStackX_8 = 0;
    iVar1 = (**(*0x108f8 + 0x48))(&uStackX_8,&iStackX_10);
    if ((-1 < iVar1) && (uStackX_8 != 0)) {
        uVar2 = uStackX_8;
        uVar4 = uVar3;
        do {
            iVar1 = iStackX_10;
            if (*(uVar4 + 0x20 + iStackX_10) == 2) {
                (**(*0x108f8 + 0xa0))
                          (*(uVar4 + iStackX_10),*(uVar4 + 8 + iStackX_10),*(uVar4 + 0x10 + iStackX_10) | 0x80000);
                (**(*0x108f8 + 0x40))(*(uVar4 + iVar1),*(uVar4 + 8 + iVar1),*(uVar4 + 0x18 + iVar1) | 0x80000);
                uVar2 = uStackX_8;
            }
            uVar3 = uVar3 + 1;
            uVar4 = uVar4 + 0x38;
        } while (uVar3 < uVar2);
    }
    return;
}


