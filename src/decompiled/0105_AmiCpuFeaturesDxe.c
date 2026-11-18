// decompiled by r2ghidra: 0105_AmiCpuFeaturesDxe.pe32
// functions: 17

/* entry0 @ 0x103e4 */

ulong entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.000103fc(arg1,in_RDX);
    fcn.000104d4();
    return 0;
}


/* fcn.000103fc @ 0x103fc */

void fcn.000103fc(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    
    *0x10d28 = *(arg1 + 0x60);
    *0x10d30 = *(arg1 + 0x58);
    *0x10d20 = arg1;
    fcn.000109b0();
    iVar3 = fcn.00010a1c();
    if (iVar3 == 0) {
        uVar4 = fcn.00010390();
        fcn.00010380();
        uVar1 = in(0x1808);
        fcn.00010300(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x000102f0();
        }
        fcn.00010300(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010380();
        }
        else {
            fcn.00010370();
        }
    }
    if ((*0x10d40 != NULL) || (iVar3 = (**(*0x10d28 + 0x140))(0x10cb0,0,0x10d40), -1 < iVar3)) {
        (***0x10d40)(*0x10d40,0x10d48);
    }
    return;
}


/* fcn.000104d4 @ 0x104d4 */

void fcn.000104d4(void)

{
    uint64_t uVar1;
    ulong uVar2;
    uint8_t uVar3;
    char cVar4;
    uint32_t uVar5;
    int16_t *piVar6;
    ulong uVar7;
    int64_t iVar8;
    uint32_t *puVar9;
    char cVar10;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [2];
    uint32_t auStackX_18 [2];
    uint32_t auStackX_20 [2];
    uint32_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    
    (**(*0x10d28 + 0x168))(0x10d60,0x34);
    fcn.00010340(0x80000001,auStackX_20,auStackX_18,auStackX_10);
    *0x10d60 = auStackX_8[0] >> 0x14 & 1;
    fcn.00010310(0xb,0,auStackX_20,auStackX_8);
    *0x10d61 = 1 < auStackX_8[0];
    uVar3 = fcn.00010a9c();
    *0x10d62 = 1 < uVar3;
    fcn.00010340(1,auStackX_20,auStackX_18,auStackX_8);
    *0x10d63 = auStackX_8[0] >> 5 & 1;
    fcn.00010340(0,auStackX_8,auStackX_20,auStackX_18);
    *0x10d67 = 0;
    *0x10d64 = 3 < auStackX_8[0];
    *0x10d65 = 0;
    uVar5 = fcn.00010a6c();
    uVar7 = rdmsr(0x35);
    uVar3 = uVar7 >> 0x10;
    *0x10d68 = uVar3 & 0xf;
    if ((uVar5 & 0xfffffff0) != 0x206c0) {
        *0x10d68 = uVar3;
    }
    cVar4 = fcn.00010a9c();
    cVar10 = '\x02';
    if (cVar4 == '\x02') {
        *0x10d69 = '\x05';
    }
    else {
        *0x10d69 = cVar10;
        if (cVar4 != '\x04') {
            *0x10d69 = (cVar4 != '\b') + '\x01';
        }
    }
    fcn.00010340(1,auStackX_20,auStackX_18,auStackX_8);
    *0x10d70 = auStackX_8[0] >> 6 & 1;
    *0x10d90 = 0;
    if (((auStackX_8[0] >> 6 & 1) != 0) && (uVar3 = fcn.00010260(), (uVar3 & 1) != 0)) {
        *0x10d90 = 1;
    }
    uVar7 = rdmsr(0xce);
    *0x10d73 = 0;
    *0x10d72 = (uVar7 >> 0x18) >> 4 & 1;
    uVar7 = rdmsr(0xce);
    *0x10d74 = (uVar7 >> 0x18) >> 5 & 1;
    uVar7 = rdmsr(0xce);
    puVar9 = auStackX_20;
    *0x10d75 = (uVar7 >> 0x18) >> 6 & 1;
    uVar7 = 1;
    fcn.00010340(1,puVar9,auStackX_18,auStackX_8);
    *0x10d76 = auStackX_8[0] >> 7 & 1;
    *0x10d77 = fcn.00010b08(uVar7,puVar9);
    iVar8 = CONCAT71(uVar7 >> 8,3);
    *0x10d78 = fcn.00010bd8(iVar8);
    iVar8 = CONCAT71(iVar8 >> 8,6);
    *0x10d79 = fcn.00010bd8(iVar8);
    iVar8 = CONCAT71(iVar8 >> 8,7);
    *0x10d7a = fcn.00010bd8(iVar8);
    iVar8 = CONCAT71(iVar8 >> 8,8);
    *0x10d7d = fcn.00010bd8(iVar8);
    iVar8 = CONCAT71(iVar8 >> 8,9);
    *0x10d7e = fcn.00010bd8(iVar8);
    *0x10d7f = fcn.00010bd8(CONCAT71(iVar8 >> 8,10));
    uVar7 = 1;
    puVar9 = auStackX_20;
    fcn.00010340(1,puVar9,auStackX_18,auStackX_8);
    *0x10d7b = auStackX_8[0] >> 0x19 & 1;
    cVar4 = fcn.00010b08(uVar7,puVar9);
    if (cVar4 == '\0') {
        uVar7 = rdmsr(0xce);
        uVar3 = uVar7 >> 8;
    }
    else {
        uVar7 = rdmsr(0x1ad);
        uVar3 = uVar7;
    }
    *0x10d8c = uVar3 * 100;
    piVar6 = fcn.000109b0();
    if (piVar6 != NULL) {
        do {
            if (*piVar6 == -1) {
                piVar6 = NULL;
code_r0x000107fa:
                if (piVar6 == NULL) break;
                if ((*0x10c80 == *(piVar6 + 4)) && (*0x10c88 == *(piVar6 + 8))) goto code_r0x0001080b;
            }
            else if (*piVar6 == 4) goto code_r0x000107fa;
            piVar6 = piVar6 + piVar6[1];
        } while( true );
    }
code_r0x00010819:
    uVar1 = rdmsr(0xce);
    *0x10d80 = 1;
    *0x10d82 = 0;
    *0x10d7c = (uVar1 >> 0x20 & 6) != 0;
    puVar9 = auStackX_10;
    fcn.00010310(7,0,auStackX_20,auStackX_8);
    if (((auStackX_8[0] & 4) == 0) || (uVar1 = rdmsr(0xfe), (uVar1 >> 0xc & 1) == 0)) {
        *0x10d83 = 0;
    }
    else {
        *0x10d83 = 1;
    }
    iVar8 = rdmsr(0x1fb);
    uVar5 = iVar8 << 0x14 & 0xe000000;
    *0x10d84 = cVar10;
    if (((uVar5 != 0x2000000) && (*0x10d84 = '\x06', uVar5 != 0x6000000)) && (*0x10d84 = '\x0e', uVar5 != 0xe000000))
    {
        *0x10d84 = cVar10;
    }
    uVar7 = rdmsr(0x1aa);
    *0x10d88 = uVar7 >> 6 & 1;
    uVar1 = rdmsr(0xce);
    if ((uVar1 >> 0x20 & 8) != 0) {
        uVar1 = rdmsr(0x110);
        *0x10d81 = 0;
        if ((uVar1 & 2) != 0) goto code_r0x00010926;
    }
    *0x10d81 = 1;
code_r0x00010926:
    uVar7 = rdmsr(0x1a2);
    *0x10d85 = uVar7 >> 0x10;
    uVar7 = rdmsr(0x606);
    uVar2 = rdmsr(0x614);
    *0x10d86 = (uVar2 & 0x7fff) >> (uVar7 & 0xf);
    (**(*0x10d30 + 0x58))(L"AmiCpuSetupFeatures",0x10ca0,2,0x34,0x10d60,puVar9);
    return;
code_r0x0001080b:
    if (piVar6 != NULL) {
        *0x10d7b = *(piVar6 + 0x17);
    }
    goto code_r0x00010819;
}


/* fcn.000109b0 @ 0x109b0 */

int64_t fcn.000109b0(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10d38 == 0) {
        *0x10d38 = 0;
        if (*(*0x10d20 + 0x68) != 0) {
            piVar2 = *(*0x10d20 + 0x70);
            do {
                if ((*0x10c90 == *piVar2) && (*0x10c98 == piVar2[1])) {
                    *0x10d38 = (*(*0x10d20 + 0x70))[uVar1 * 3 + 2];
                    return *0x10d38;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10d20 + 0x68));
        }
    }
    return *0x10d38;
}


/* fcn.00010a1c @ 0x10a1c */

void fcn.00010a1c(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000109b0();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00010a53:
            if ((piVar1 == NULL) || ((*0x10cc0 == *(piVar1 + 4) && (*0x10cc8 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00010a53;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010390 @ 0x10390 */

uint64_t fcn.00010390(void)

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


/* fcn.00010380 @ 0x10380 */

void fcn.00010380(void)

{
    return;
}


/* fcn.00010300 @ 0x10300 */

uint64_t fcn.00010300(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102f2 @ 0x102f2 */

void fcn.000102f2(void)

{
    return;
}


/* fcn.00010370 @ 0x10370 */

void fcn.00010370(void)

{
    return;
}


/* fcn.00010340 @ 0x10340 */

uint64_t fcn.00010340(int64_t arg1,uint32_t *arg2,int64_t arg3,uint32_t *arg4)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t *in_stack_00000028;
    
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
    if (arg4 != NULL) {
        *arg4 = puVar1[3];
    }
    if (arg2 != NULL) {
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


/* fcn.00010310 @ 0x10310 */

uint64_t fcn.00010310(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t *arg4)

{
    uint *puVar1;
    uint uVar2;
    uint32_t uVar3;
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
    if (arg4 != NULL) {
        *arg4 = uVar3;
    }
    if (in_stack_00000030 != NULL) {
        *in_stack_00000030 = uVar4;
    }
    return arg1 & 0xffffffff;
}


/* fcn.00010a9c @ 0x10a9c */

uint64_t fcn.00010a9c(void)

{
    uint64_t uVar1;
    uint8_t auStackX_8 [24];
    uchar auStackX_20 [8];
    
    fcn.00010310(0xb,1,auStackX_20,auStackX_8);
    uVar1 = auStackX_8[0];
    fcn.00010310(0xb,0,auStackX_20,auStackX_8);
    return uVar1 / auStackX_8[0];
}


/* fcn.00010a6c @ 0x10a6c */

uint32_t fcn.00010a6c(void)

{
    uint32_t auStackX_8 [4];
    uint32_t auStackX_18 [2];
    uchar auStackX_20 [8];
    
    fcn.00010340(1,auStackX_8,auStackX_20,auStackX_18);
    return auStackX_8[0];
}


/* fcn.00010260 @ 0x10260 */

//WARNING: Removing unreachable block (ram,0x0001027a)

uint fcn.00010260(void)

{
    uint uVar1;
    
    //[00] -r-x section size 2592 named .text
    uVar1 = getsec_capabilities(0);
    return uVar1;
}


/* fcn.00010b08 @ 0x10b08 */

uint64_t fcn.00010b08(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint32_t auStackX_8 [4];
    uint32_t auStackX_18 [2];
    uchar auStackX_20 [8];
    
    uVar1 = rdmsr(0x1a0);
    fcn.00010340(6,auStackX_8,auStackX_20,auStackX_18);
    uVar2 = auStackX_8[0] >> 1 & 1;
    if ((uVar2 != 0) || ((uVar1 & 0x4000000000) != 0)) {
        if (uVar2 != 0) {
            return 1;
        }
        if ((uVar1 & 0x4000000000) != 0) {
            wrmsr(0x1a0,uVar1 & 0xffffffbfffffffff);
            fcn.00010340(6,auStackX_8,auStackX_20,auStackX_18);
            wrmsr(0x1a0,uVar1 & 0xffffffbf00000000 | 0x4000000000 | uVar1 & 0xffffffff);
            return CONCAT71(uVar1 >> 8,auStackX_8[0] >> 1) & 0xffffffbfffffff01 | 0x4000000000;
        }
    }
    return 0;
}


/* fcn.00010bd8 @ 0x10bd8 */

bool fcn.00010bd8(int64_t arg1)

{
    uint32_t uVar1;
    bool bVar2;
    uint32_t uStackX_8;
    uint32_t auStackX_10 [2];
    uchar auStackX_18 [8];
    uint32_t auStackX_20 [2];
    
    uVar1 = arg1 & 0xff;
    fcn.00010340(5,auStackX_20,auStackX_18,auStackX_10);
    if (uVar1 == 3) {
        bVar2 = (uStackX_8 & 0xf00) == 0;
    }
    else if (uVar1 == 6) {
        bVar2 = (uStackX_8 & 0xf000) == 0;
    }
    else if (uVar1 == 7) {
        bVar2 = (uStackX_8 & 0xf0000) == 0;
    }
    else if (uVar1 == 8) {
        bVar2 = (uStackX_8 & 0xf00000) == 0;
    }
    else if (uVar1 == 9) {
        bVar2 = (uStackX_8 & 0xf000000) == 0;
    }
    else {
        if (uVar1 != 10) {
            return false;
        }
        bVar2 = (uStackX_8 & 0xf0000000) == 0;
    }
    return !bVar2;
}


