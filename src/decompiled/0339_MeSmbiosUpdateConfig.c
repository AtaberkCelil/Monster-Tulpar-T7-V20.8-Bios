// decompiled by r2ghidra: 0339_MeSmbiosUpdateConfig.pe32
// functions: 13

/* entry0 @ 0x1035c */

void entry0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0;
    int64_t iStackX_8;
    
    *0x10b88 = *(arg2 + 0x60);
    *0x10b90 = *(arg2 + 0x58);
    *0x10b80 = arg2;
    fcn.0001096c();
    noname_0 = 0x10af0;
    iVar3 = fcn.000109d8(0x10af0);
    if (iVar3 == 0) {
        uVar4 = fcn.00010310();
        fcn.00010300();
        uVar1 = in(0x1808);
        fcn.000102e0(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x000102d0();
        }
        fcn.000102e0(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010300();
        }
        else {
            fcn.000102f0();
        }
    }
    iStackX_8 = arg1;
    (**(*0x10b88 + 0x80))(&iStackX_8,0x10a40,0,0x10ae0);
    return;
}


/* fcn.0001096c @ 0x1096c */

int64_t fcn.0001096c(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10b98 == 0) {
        *0x10b98 = 0;
        if (*(*0x10b80 + 0x68) != 0) {
            piVar2 = *(*0x10b80 + 0x70);
            do {
                if ((*0x10ac0 == *piVar2) && (*0x10ac8 == piVar2[1])) {
                    *0x10b98 = (*(*0x10b80 + 0x70))[uVar1 * 3 + 2];
                    return *0x10b98;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10b80 + 0x68));
        }
    }
    return *0x10b98;
}


/* fcn.000109d8 @ 0x109d8 */

void fcn.000109d8(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.0001096c();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00010a06:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00010a06;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010310 @ 0x10310 */

uint64_t fcn.00010310(void)

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


/* fcn.00010300 @ 0x10300 */

void fcn.00010300(void)

{
    return;
}


/* fcn.000102e0 @ 0x102e0 */

uint64_t fcn.000102e0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102d2 @ 0x102d2 */

void fcn.000102d2(void)

{
    return;
}


/* fcn.000102f0 @ 0x102f0 */

void fcn.000102f0(void)

{
    return;
}


/* fcn.000102b0 @ 0x102b0 */

int64_t fcn.000102b0(int64_t arg1,int64_t arg2)

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


/* fcn.00010430 @ 0x10430 */

int64_t fcn.00010430(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ushort auStackX_10 [4];
    int64_t iStackX_18;
    char *pcStackX_20;
    
    *arg2 = 0;
    iVar1 = (**(*0x10b88 + 0x140))(0x10a90,0,&iStackX_18);
    if (-1 < iVar1) {
        auStackX_10[0] = 0xfffe;
        do {
            iVar1 = (**(iStackX_18 + 0x18))(iStackX_18,auStackX_10,0,&pcStackX_20,0);
            if (iVar1 < 0) {
                return -0x7ffffffffffffff2;
            }
        } while (*pcStackX_20 != arg1);
        *arg2 = pcStackX_20;
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.000104b8 @ 0x104b8 */

void fcn.000104b8(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uchar uStackX_10;
    uchar uStackX_11;
    ulong uStackX_18;
    int64_t iStackX_20;
    
    if (arg2 != 0) {
        fcn.000102b0(&uStackX_10,4);
        iVar2 = (**(*0x10b88 + 0x140))(0x10a60,0,&iStackX_20);
        if (-1 < iVar2) {
            uStackX_18 = 4;
            iVar2 = (**(iStackX_20 + 0x10))(&uStackX_18,&uStackX_10);
            if (iVar2 < 0) {
                fcn.000102b0(&uStackX_10,4);
            }
        }
        uVar1 = *(arg2 + 0x24) >> 2;
        *(arg1 + 8) = uVar1 & 1;
        if ((uVar1 & 1) != 0) {
            *(arg1 + 9) = *(arg2 + 0x2c) >> 2 & 1;
        }
        if (*(arg1 + 8) != '\0') {
            *(arg1 + 10) = uStackX_11;
            *(arg1 + 0xb) = uStackX_10;
            *(arg1 + 0xc) = 1;
        }
        if ((*(arg2 + 0x24) & 0x40000) != 0) {
            *(arg1 + 0x12) = *(arg2 + 0x2c) >> 0x12 & 1;
        }
    }
    return;
}


/* section..text @ 0x10280 */

uint64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint *in_stack_00000028;
    
    //[00] -r-x section size 1984 named .text
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


/* fcn.000106ac @ 0x106ac */

void fcn.000106ac(int64_t arg1)

{
    int64_t iVar1;
    ulong uStackX_10;
    int64_t aiStackX_18 [2];
    uchar auStack_b8 [6];
    char cStack_b2;
    char cStack_b0;
    uchar auStack_78 [5];
    char cStack_73;
    
    uStackX_10 = 0x37;
    iVar1 = (**(*0x10b90 + 0x48))(L"SetupCpuFeatures",0x10ab0,0,&uStackX_10,auStack_b8);
    if (-1 < iVar1) {
        *arg1 = *arg1 & 0xffffffdf;
        *arg1 = (cStack_b2 != '\0') << 5 | *arg1 & 0xfffffffb | (cStack_b0 != '\0') << 2;
    }
    iVar1 = (**(*0x10b88 + 0x140))(0x10aa0,0,aiStackX_18);
    if (-1 < iVar1) {
        (**(aiStackX_18[0] + 0x18))(arg1);
    }
    uStackX_10 = 0x6d;
    iVar1 = (**(*0x10b90 + 0x48))(L"SetupVolatileData",0x10ab0,0,&uStackX_10,auStack_78);
    if (-1 < iVar1) {
        *arg1 = *arg1 & 0xfffffffd;
        *arg1 = *arg1 | (cStack_73 != '\0') * 2;
    }
    return;
}


