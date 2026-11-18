// decompiled by r2ghidra: 0180_AmiTxtDxe.pe32
// functions: 4

/* entry0 @ 0x102f0 */

void entry0(int64_t arg1,int64_t arg2)

{
    *0x10538 = *(arg2 + 0x60);
    *0x10530 = arg2;
    *0x10540 = arg1;
    fcn.00010450();
    fcn.0001031c();
    return;
}


/* fcn.00010450 @ 0x10450 */

int64_t fcn.00010450(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10548 == 0) {
        *0x10548 = 0;
        if (*(*0x10530 + 0x68) != 0) {
            piVar2 = *(*0x10530 + 0x70);
            do {
                if ((*0x104c0 == *piVar2) && (*0x104c8 == piVar2[1])) {
                    *0x10548 = (*(*0x10530 + 0x70))[uVar1 * 3 + 2];
                    return *0x10548;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10530 + 0x68));
        }
    }
    return *0x10548;
}


/* fcn.0001031c @ 0x1031c */

ulong fcn.0001031c(void)

{
    int16_t *piVar1;
    uint32_t auStackX_18 [2];
    uchar auStackX_20 [8];
    uchar *puVar2;
    uchar auStack_18 [4];
    uchar auStack_14 [12];
    
    piVar1 = fcn.00010450();
    if (piVar1 == NULL) {
        return 0;
    }
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00010366:
            if (piVar1 == NULL) {
                return 0;
            }
            if ((*0x104d0 == *(piVar1 + 4)) && (*0x104d8 == *(piVar1 + 8))) {
                if (piVar1 == NULL) {
                    return 0;
                }
                *0x10518 = 1;
                *0x10528 = 0x10440;
                *0x10510 = *(piVar1 + 0x51) & 1;
                *0x10511 = *0xfed30200 >> 0x1f;
                if (*(piVar1 + 0x1c) != 0) {
                    *0x10512 = ~(*(*(piVar1 + 0x1c) + 0xc) >> 0x1f) & 1;
                }
                puVar2 = auStackX_20;
                section..text(1,auStack_14,auStack_18,auStackX_18);
                *0x10513 = auStackX_18[0] >> 6 & 1;
                *0x10514 = *0xfed30030;
                (**(*0x10538 + 0x80))(0x10540,0x104e0,0,0x10518,puVar2);
                return 0;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00010366;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
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
    
    //[00] -r-x section size 608 named .text
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


