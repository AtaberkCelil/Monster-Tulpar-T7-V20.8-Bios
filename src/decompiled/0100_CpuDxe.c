// decompiled by r2ghidra: 0100_CpuDxe.pe32
// functions: 25

/* entry0 @ 0x10434 */

void entry0(int64_t arg1,int64_t arg2)

{
    uint32_t arg2_00;
    
    arg2_00 = arg2;
    fcn.00010448(arg1,arg2);
    fcn.0001053c(arg1,arg2_00);
    return;
}


/* fcn.00010448 @ 0x10448 */

ulong fcn.00010448(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    int64_t *piVar6;
    
    *0x11b18 = *(arg2 + 0x60);
    *0x11b28 = *(arg2 + 0x58);
    *0x11b10 = arg2;
    *0x11b20 = arg1;
    fcn.000117d4();
    iVar3 = fcn.00011804();
    if (iVar3 == 0) {
        uVar4 = fcn.000103c0();
        fcn.000103b0();
        uVar1 = in(0x1808);
        fcn.000102b0(arg1,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x00010390();
        }
        fcn.000102b0(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.000103b0();
        }
        else {
            fcn.000103a0();
        }
    }
    if ((*0x11b38 != NULL) || (iVar3 = (**(*0x11b18 + 0x140))(0x119d0,0), -1 < iVar3)) {
        (***0x11b38)(*0x11b38,0x11b40);
    }
    uVar4 = 0;
    if (*(*0x11b10 + 0x68) != 0) {
        piVar6 = *(*0x11b10 + 0x70);
        do {
            if ((*0x119e0 == *piVar6) && (*0x119e8 == piVar6[1])) {
                *0x11b48 = (*(*0x11b10 + 0x70))[uVar4 * 3 + 2];
                return 0;
            }
            uVar4 = uVar4 + 1;
            piVar6 = piVar6 + 3;
        } while (uVar4 < *(*0x11b10 + 0x68));
    }
    *0x11b48 = 0;
    return 0x800000000000000e;
}


/* fcn.0001053c @ 0x1053c */

ulong fcn.0001053c(int64_t arg1,uint32_t arg2)

{
    uint in_register_00000014;
    ulong uStackX_10;
    uchar auStackX_18 [8];
    uchar auStackX_20 [8];
    uchar auStack_18 [24];
    
    uStackX_10 = CONCAT44(in_register_00000014,arg2);
    (**(*0x11b18 + 0x50))(0x200,8,0x114b4,0,0x11b68);
    (**(*0x11b18 + 0xa8))(0x119a0,*0x11b68,0x11b08);
    (**(*0x11b18 + 0x68))();
    fcn.000102c0(0,&uStackX_10,auStackX_20,auStackX_18);
    if (3 < uStackX_10) {
        (**(*0x11b18 + 0x170))(0x200,8,0x11640,0,0x119c0,auStack_18);
    }
    return 0;
}


/* fcn.000102c0 @ 0x102c0 */

uint64_t fcn.000102c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.000117d4 @ 0x117d4 */

int64_t fcn.000117d4(void)

{
    if (*0x11b30 == 0) {
        fcn.00011774(0x119b0,0x11b30);
    }
    return *0x11b30;
}


/* fcn.00011774 @ 0x11774 */

ulong fcn.00011774(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x11b10;
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


/* fcn.00011804 @ 0x11804 */

void fcn.00011804(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000117d4();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x0001183b:
            if ((piVar1 == NULL) || ((*0x11a40 == *(piVar1 + 4) && (*0x11a48 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x0001183b;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.000103c0 @ 0x103c0 */

uint64_t fcn.000103c0(void)

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


/* fcn.000103b0 @ 0x103b0 */

void fcn.000103b0(void)

{
    return;
}


/* fcn.000102b0 @ 0x102b0 */

uint64_t fcn.000102b0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010392 @ 0x10392 */

void fcn.00010392(void)

{
    return;
}


/* fcn.000103a0 @ 0x103a0 */

void fcn.000103a0(void)

{
    return;
}


/* fcn.00010634 @ 0x10634 */

uint32_t * fcn.00010634(uint32_t arg1)

{
    uint32_t uVar1;
    uint32_t *puVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    
    if (*(*0x11b90 + 0x50) <= arg1) {
        return 0xffffffffffffffff;
    }
    puVar2 = *0x11b90 + 0x54;
    if (arg1 != 0) {
        uVar3 = arg1;
        do {
            uVar1 = *puVar2;
            puVar2 = puVar2 + 1;
            if (uVar1 != 0) {
                uVar4 = uVar1;
                do {
                    puVar2 = puVar2 + *puVar2 * 2 + 1;
                    uVar4 = uVar4 - 1;
                } while (uVar4 != 0);
            }
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
    }
    return puVar2;
}


/* fcn.00011918 @ 0x11918 */

uint64_t fcn.00011918(void)

{
    uint64_t uVar1;
    uint8_t auStackX_8 [24];
    uchar auStackX_20 [8];
    
    section..text(0xb,1,auStackX_20,auStackX_8);
    uVar1 = auStackX_8[0];
    section..text(0xb,0,auStackX_20,auStackX_8);
    return uVar1 / auStackX_8[0];
}


/* section..text @ 0x10280 */

uint64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t *arg4)

{
    uint *puVar1;
    uint uVar2;
    uint32_t uVar3;
    uint uVar4;
    int iVar5;
    uint *in_stack_00000028;
    uint *in_stack_00000030;
    
    //[00] -r-x section size 5920 named .text
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


/* fcn.000108fc @ 0x108fc */

uint32_t * fcn.000108fc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uint32_t *puVar2;
    uint32_t *puVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    
    uVar6 = arg3;
    uVar5 = arg2;
    puVar1 = fcn.00010634(arg1);
    puVar2 = 0xffffffffffffffff;
    if ((puVar1 != 0xffffffffffffffff) && (puVar3 = puVar1 + 1, uVar5 < *puVar1)) {
        if (uVar5 != 0) {
            uVar4 = uVar5;
            do {
                puVar3 = puVar3 + *puVar3 * 2 + 1;
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
        }
        if ((puVar3 != 0xffffffffffffffff) && (uVar6 < *puVar3)) {
            puVar2 = puVar3 + uVar6 * 2 + 1;
        }
    }
    return puVar2;
}


/* fcn.00010954 @ 0x10954 */

ulong fcn.00010954(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint uVar1;
    uint8_t uVar2;
    uint *puVar3;
    ulong uVar4;
    uint8_t in_stack_00000028;
    uint uStack_18;
    uint32_t uStack_14;
    uchar auStack_10 [4];
    uchar auStack_c [4];
    
    puVar3 = fcn.000108fc(arg2 & 0xffffffff,arg3 & 0xffffffff,arg4 & 0xffffffff);
    if (puVar3 == 0xffffffffffffffff) {
        uVar4 = 0xffffffffffffff00;
    }
    else {
        uVar1 = *puVar3;
        fcn.000102c0(1,&uStack_18,auStack_c,auStack_10);
        *arg1 = 0;
        *(arg1 + 0xc) = in_stack_00000028;
        *(arg1 + 4) = 0x48;
        *(arg1 + 8) = 1;
        *(arg1 + 0x10) = arg2;
        *(arg1 + 0x14) = arg3;
        *(arg1 + 0x18) = arg4;
        *(arg1 + 0x1c) = uVar1;
        uVar2 = *0xfee00030;
        uVar4 = 0xfee00001;
        *(arg1 + 0x38) = 0;
        *(arg1 + 0x20) = uVar2;
        *(arg1 + 0x24) = uStack_18;
        *(arg1 + 0x40) = 5;
        *(arg1 + 0x28) = uStack_14 & 0x381;
        *(arg1 + 0x2c) = *0x11a38;
        *0x11a38 = *0x11a38 + 1;
        *(arg1 + 0x44) = 1;
    }
    return uVar4;
}


/* fcn.00011884 @ 0x11884 */

uint64_t fcn.00011884(int64_t arg1)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint32_t auStackX_10 [6];
    uint32_t auStack_18 [4];
    
    uVar2 = 0;
    uVar1 = section..text(4,0,auStackX_10,auStack_18);
    while( true ) {
        if ((auStackX_10[0] & 0x1f) == 0) {
            return uVar1 & 0xffffffffffffff00;
        }
        if ((auStackX_10[0] >> 5 & 7) == arg1) break;
        uVar2 = uVar2 + 1;
        uVar1 = section..text(4,uVar2,auStackX_10,auStack_18);
    }
    return (auStackX_10[0] >> 0xe) + 1;
}


/* fcn.00010330 @ 0x10330 */

int64_t fcn.00010330(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.000102f0 @ 0x102f0 */

int64_t fcn.000102f0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00010a40 @ 0x10a40 */

ulong fcn.00010a40(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    char cVar2;
    ulong uVar3;
    uint32_t uVar4;
    uint32_t auStackX_10 [2];
    uchar auStack_28 [16];
    
    iVar1 = *0x11b58;
    (**(*0x11b90 + 0x18))(*0x11b90,arg1 & 0xffffffff,auStackX_10,auStack_28,0,0);
    if (arg2 < 2) {
        cVar2 = fcn.00010954(iVar1 + *0x11af0 * 0x48,arg1 & 0xffffffff,arg4 & 0xffffffff,arg2 & 0xffffffff);
        if (cVar2 != '\0') {
            *0x11af0 = *0x11af0 + 1;
        }
        uVar4 = 0;
        if (auStackX_10[0] != 0) {
            do {
                if ((uVar4 != arg4) &&
                   (cVar2 = fcn.00010954(iVar1 + *0x11af0 * 0x48,arg1 & 0xffffffff,uVar4,arg2 & 0xffffffff),
                   cVar2 != '\0')) {
                    *0x11af0 = *0x11af0 + 1;
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < auStackX_10[0]);
        }
        uVar3 = 1;
    }
    else {
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00011854 @ 0x11854 */

uint fcn.00011854(void)

{
    uint auStackX_8 [4];
    uchar auStackX_18 [8];
    uchar auStackX_20 [8];
    
    fcn.000102c0(1,auStackX_8,auStackX_20,auStackX_18);
    return auStackX_8[0];
}


/* fcn.000113f4 @ 0x113f4 */

int64_t fcn.000113f4(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uchar auStackX_8 [8];
    
    uVar1 = rdmsr(0x35);
    *0x11b88 = uVar1 >> 0x10;
    iVar2 = (***0x11ae0)(*0x11ae0,0x11b80,auStackX_8);
    uVar3 = 0;
    if (((-1 < iVar2) && (iVar2 = (**(*0x11b18 + 0x40))(4,*0x11b80 * 0x30,0x11b70), -1 < iVar2)) && (*0x11b80 != 0))
    {
        iVar4 = *0x11b70;
        do {
            (*(*0x11ae0)[1])(*0x11ae0,uVar3,iVar4);
            uVar3 = uVar3 + 1;
            iVar4 = iVar4 + 0x30;
        } while (uVar3 < *0x11b80);
    }
    return iVar2;
}


/* fcn.00010ed4 @ 0x10ed4 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_24h
//WARNING: Variable defined which should be unmapped: var_2ch

void fcn.00010ed4(void)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    ulong uVar4;
    char *pcVar5;
    uint32_t uVar6;
    ulong uVar7;
    char *pcVar8;
    uchar uVar9;
    int64_t iVar10;
    char *pcVar11;
    uchar *puVar12;
    uint *puVar13;
    uint64_t uVar14;
    uint64_t arg2;
    bool bStackX_8;
    uint auStackX_10 [2];
    uint auStackX_18 [2];
    uint auStackX_20 [2];
    int8_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t *piVar15;
    char *pcStack_78;
    uint uStack_70;
    uint32_t uStack_6c;
    uint32_t uStack_68;
    uint uStack_64;
    int iStack_60;
    uint uStack_5c;
    uchar auStack_58 [8];
    uint uStack_50;
    uint uStack_4c;
    int64_t var_40h_2;
    uint64_t var_38h;
    uint32_t var_34h;
    int64_t var_2ch;
    int64_t var_24h;
    int64_t var_18h;
    int64_t var_10h;
    
    puVar13 = &uStack_64;
    piVar15 = &uStack_5c;
    section..text(0xb,0,&iStack_60,&uStack_6c);
    if (uStack_6c < 2) {
        bStackX_8 = true;
    }
    else {
        piVar15 = &var_40h_2;
        fcn.000102c0(1,auStack_58,&uStack_68,&var_40h_2 + 4);
        bStackX_8 = (uStack_68 >> 0x18 & uStack_6c - 1) == 0;
    }
    (**(*0x11b18 + 0x40))(4,*0x11b80 << 6,0x11b78);
    uStack_5c = fcn.00011854();
    (**(*0x11b18 + 0x40))(4,0x31,&pcStack_78,*0x11b18,piVar15,puVar13);
    pcVar5 = pcStack_78;
    fcn.000102c0(0x80000002,auStackX_18,auStackX_10,auStackX_20);
    *pcStack_78 = auStackX_18[0];
    *(pcStack_78 + 4) = auStackX_10[0];
    *(pcStack_78 + 8) = auStackX_20[0];
    *(pcStack_78 + 0xc) = uStack_70;
    pcStack_78 = pcStack_78 + 0x10;
    fcn.000102c0(0x80000003,auStackX_18,auStackX_10,auStackX_20);
    *pcStack_78 = auStackX_18[0];
    *(pcStack_78 + 4) = auStackX_10[0];
    *(pcStack_78 + 8) = auStackX_20[0];
    *(pcStack_78 + 0xc) = uStack_70;
    pcStack_78 = pcStack_78 + 0x10;
    fcn.000102c0(0x80000004,auStackX_18,auStackX_10,auStackX_20);
    *pcStack_78 = auStackX_18[0];
    *(pcStack_78 + 4) = auStackX_10[0];
    uVar14 = 0;
    *(pcStack_78 + 8) = auStackX_20[0];
    *(pcStack_78 + 0xc) = uStack_70;
    pcStack_78[0x10] = '\0';
    pcStack_78 = pcVar5;
    fcn.000102c0(1,auStackX_18,auStackX_10,&uStack_50);
    fcn.000102c0(0x80000001,auStackX_18,auStackX_10,auStackX_20);
    wrmsr(0x8b,0);
    fcn.000102c0(1,&uStack_64,&var_40h_2,&var_40h_2 + 4);
    var_38h = rdmsr(0x8b);
    var_38h = var_38h >> 0x20;
    uVar7 = 0x1f;
    iVar10 = *0x11b18;
    uVar4 = (**(*0x11b18 + 0x18))();
    iVar2 = fcn.000102b0(uVar7,iVar10);
    uVar7 = 200;
    iVar10 = *0x11b18;
    (**(*0x11b18 + 0xf8))();
    iVar3 = fcn.000102b0(uVar7,iVar10);
    (**(*0x11b18 + 0x20))(uVar4);
    if (*0x11b80 != 0) {
        uStack_64 = 1000000000 / (200000000000 / (iVar3 - iVar2) & 0xffffffff);
        do {
            arg2 = 0;
            puVar13 = uVar14 * 0x40 + *0x11b78;
            (**(*0x11b18 + 0x40))(4,0x60,puVar13 + 0xc);
            iVar10 = *(puVar13 + 0xc);
            puVar12 = iVar10 + 2;
            do {
                section..text(4,arg2,&uStack_68,&uStack_6c);
                uVar6 = uStack_68 & 0x1f;
                if (uVar6 == 0) break;
                puVar12[-2] = 0xff;
                puVar12[-1] = uStack_68 >> 5 & 7;
                if (uVar6 == 1) {
                    *puVar12 = 0;
                }
                else if (uVar6 == 2) {
                    *puVar12 = 1;
                }
                else if (uVar6 == 3) {
                    *puVar12 = 3;
                }
                uVar6 = arg2 + 1;
                arg2 = uVar6;
                puVar12[6] = (uStack_6c >> 0x16) + '\x01';
                *(puVar12 + 2) =
                     ((uStack_6c >> 0xc & 0x3ff) + 1) * ((uStack_6c & 0xfff) + 1) * ((uStack_6c >> 0x16) + 1) *
                     (iStack_60 + 1) >> 10;
                puVar12 = puVar12 + 0xc;
            } while (uVar6 < 7);
            uVar1 = *0x11b00;
            *(iVar10 + arg2 * 0xc) = *0x11af8;
            *(iVar10 + 8 + arg2 * 0xc) = uVar1;
            *(puVar13 + 4) = pcStack_78;
            pcVar5 = pcStack_78;
            while (*pcVar5 == ' ') {
                pcVar5 = pcVar5 + 1;
                *(puVar13 + 4) = pcVar5;
            }
            pcVar5 = *(puVar13 + 4);
            while( true ) {
                while( true ) {
                    if (*pcVar5 != ' ') break;
                    pcVar5 = pcVar5 + 1;
                    if (*pcVar5 == ' ') {
                        pcVar8 = pcVar5;
                        do {
                            pcVar8 = pcVar8 + 1;
                        } while (*pcVar8 == ' ');
                        pcVar11 = pcVar5;
                        for (; *pcVar8 != '\0'; pcVar8 = pcVar8 + 1) {
                            *pcVar11 = *pcVar8;
                            pcVar11 = pcVar11 + 1;
                        }
                        *pcVar11 = '\0';
                    }
                }
                if (*pcVar5 == '\0') break;
                pcVar5 = pcVar5 + 1;
            }
            iVar2 = uVar14;
            uVar6 = iVar2 + 1;
            *puVar13 = uStack_5c;
            *(puVar13 + 6) = SUB41(auStack_58._4_4_,3) >> 5 & 1;
            *(puVar13 + 0xe) = bStackX_8;
            *(puVar13 + 0x1a) = 0;
            *(puVar13 + 0x19) = *0x11b88;
            *(puVar13 + 2) = CONCAT44(uStack_50,uStack_4c);
            if (uVar6 < *0x11b80) {
                uVar9 = 0;
                if (*(*0x11b70 + 0x10 + uVar6 * 0x30) == *(*0x11b70 + 0x10 + uVar14 * 0x30)) {
                    uVar9 = 2;
                }
                *(puVar13 + 0x1a) = uVar9;
            }
            if (iVar2 != 0) {
                uVar9 = *(puVar13 + 0x1a);
                if (*(*0x11b70 + 0x10 + (iVar2 - 1) * 0x30) == *(*0x11b70 + 0x10 + uVar14 * 0x30)) {
                    uVar9 = 2;
                }
                *(puVar13 + 0x1a) = uVar9;
            }
            puVar13[0xb] = var_38h;
            puVar13[7] = 100;
            puVar13[10] = 0;
            uVar4 = rdmsr(0x198);
            uVar14 = uVar6;
            puVar13[8] = (uVar4 >> 8) * 100;
            puVar13[9] = uStack_64;
        } while (uVar14 < *0x11b80);
    }
    return;
}


/* fcn.00010cf4 @ 0x10cf4 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_17h

void fcn.00010cf4(void)

{
    uint8_t *puVar1;
    uint32_t *arg2;
    uint32_t *arg1;
    char *pcVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    uint uVar10;
    uint uVar11;
    uint uVar12;
    uint uVar13;
    uint uVar14;
    uint8_t uVar15;
    char cVar16;
    int64_t iVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint8_t *puVar20;
    uint64_t uVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    ulong *puVar24;
    uint32_t *puVar25;
    uint32_t uVar26;
    bool bVar27;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [2];
    uint32_t auStackX_18 [2];
    uchar auStackX_20 [8];
    uint8_t auStack_58 [4];
    uchar uStack_54;
    ulong *puStack_50;
    int8_t var_17h;
    int8_t var_16h;
    int8_t var_15h;
    int8_t var_14h;
    int64_t var_10h;
    
    puStack_50 = 0x10d1d;
    (**(*0x11b18 + 0x40))(0,*0x11b80 << 0xd,0x11b90);
    puVar24 = *0x11b90;
    uVar5 = *0x11a88;
    uVar4 = *0x11a80;
    uVar3 = *0x11a78;
    uVar23 = 0;
    **0x11b90 = *0x11a70;
    puVar24[1] = uVar3;
    uVar6 = *0x11a98;
    uVar3 = *0x11a90;
    puVar24[2] = uVar4;
    puVar24[3] = uVar5;
    uVar10 = *0x11aac;
    uVar9 = *0x11aa8;
    uVar8 = *0x11aa4;
    uVar7 = *0x11aa0;
    puVar24[4] = uVar3;
    puVar24[5] = uVar6;
    uVar14 = *0x11abc;
    uVar13 = *0x11ab8;
    uVar12 = *0x11ab4;
    uVar11 = *0x11ab0;
    *(puVar24 + 6) = uVar7;
    *(puVar24 + 0x34) = uVar8;
    *(puVar24 + 7) = uVar9;
    *(puVar24 + 0x3c) = uVar10;
    *(puVar24 + 8) = uVar11;
    *(puVar24 + 0x44) = uVar12;
    *(puVar24 + 9) = uVar13;
    *(puVar24 + 0x4c) = uVar14;
    uVar22 = *0x11b88;
    *(puVar24 + 10) = 1;
    *(puVar24 + 0x54) = uVar22;
    puVar25 = puVar24 + 0xb;
    if (uVar22 != 0) {
        uVar21 = uVar22;
        do {
            uVar22 = 1;
            if ((uVar23 + 1 < *0x11b80) &&
               (uVar22 = 1, *(*0x11b70 + 0x10 + (uVar23 + 1) * 0x30) == *(*0x11b70 + 0x10 + uVar23 * 0x30))) {
                uVar22 = 2;
            }
            *puVar25 = uVar22;
            puVar25 = puVar25 + 1;
            uVar19 = uVar22;
            do {
                *puVar25 = *(*0x11b70 + uVar23 * 0x30);
                puVar25[1] = uVar23;
                puVar25 = puVar25 + 2;
                uVar23 = uVar23 + 1;
                uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
            uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
    }
    puVar24 = *0x11b90;
    *0x11b60 = *0x11b80;
    puStack_50 = 0x10e21;
    (**(*0x11b18 + 0x40))(4,*0x11b80 * 0x48,0x11b58);
    puStack_50 = 0x10e47;
    (**(*0x11b18 + 0x168))(*0x11b58,*0x11b80 * 0x48,0);
    puStack_50 = 0x10e5c;
    (*puVar24[5])(puVar24,&stack0x00000008,&stack0x00000010,&stack0x00000020);
    iVar17 = 0;
    puStack_50 = 0x10e6a;
    (*puVar24[2])(puVar24,&stack0x00000018,0);
    uVar21 = 0;
    do {
        iVar17 = CONCAT71(iVar17 >> 8,1);
        uVar19 = auStackX_8[0];
        puStack_50 = 0x10e80;
        cVar16 = fcn.00010a40(uVar19,uVar21,iVar17,auStackX_10[0]);
        bVar27 = cVar16 != '\0';
        uVar18 = 0;
        uVar22 = auStackX_18[0];
        if (auStackX_18[0] != 0) {
            do {
                uVar23 = uVar18;
                if (uVar23 != auStackX_8[0]) {
                    iVar17 = 0;
                    puStack_50 = 0x10eab;
                    cVar16 = fcn.00010a40(uVar18,uVar21,0,auStackX_10[0]);
                    uVar19 = uVar18;
                    uVar22 = auStackX_18[0];
                    if (cVar16 != '\0') {
                        bVar27 = true;
                    }
                }
                uVar23 = uVar23 + 1;
                uVar18 = uVar23;
            } while (uVar23 < uVar22);
        }
        puVar24 = *0x11b90;
        uVar21 = uVar21 + 1;
    } while (bVar27);
    iVar17 = CONCAT71(uVar19 >> 8,1);
    puStack_50 = *0x11b90;
    uVar15 = fcn.00011884(iVar17);
    iVar17 = CONCAT71(iVar17 >> 8,2);
    auStack_58[1] = 2 < uVar15;
    uVar15 = fcn.00011884(iVar17);
    iVar17 = CONCAT71(iVar17 >> 8,3);
    auStack_58[2] = 2 < uVar15;
    uVar15 = fcn.00011884(iVar17);
    auStack_58[3] = 2 < uVar15;
    uVar15 = fcn.00011884(CONCAT71(iVar17 >> 8,4));
    uStack_54 = 2 < uVar15;
    (*puVar24[2])(puVar24,&stack0x00000008,0);
    (**(*0x11b18 + 0x40))(4,auStackX_8[0] * 0xf8);
    if (auStackX_8[0] * 0xf8 != 0) {
        fcn.00010330(*0x11b50,auStackX_8[0] * 0xf8,0);
    }
    uVar21 = 0;
    uVar19 = 0;
    auStackX_10[0] = 0;
    if (*0x11b80 != 0) {
        do {
            uVar18 = 0;
            uVar26 = 0;
            iVar17 = uVar21 * 0x40 + *0x11b78;
            pcVar2 = *(iVar17 + 0x30);
            puVar25 = uVar19 * 0xf8 + *0x11b50;
            uVar23 = *(iVar17 + 0x19);
            *puVar25 = uVar23;
            uVar22 = uVar21;
            if (*pcVar2 != '\0') {
                puVar20 = pcVar2 + 1;
                do {
                    arg2 = puVar25 + (uVar18 * 3 + 0x10) * 2;
                    *arg2 = 0x18;
                    arg1 = puVar25 + (uVar18 * 3 + 1) * 2;
                    arg2[1] = *puVar20;
                    uVar15 = puVar20[1];
                    arg2[3] = uVar15;
                    arg2[2] = *(puVar20 + 3);
                    arg2[4] = puVar20[7];
                    arg2[5] = (&stack0xffffffffffffffa8)[*puVar20] + 1;
                    uVar22 = uVar15;
                    if (uVar15 == 3) {
                        uVar22 = 2;
                    }
                    arg2[3] = uVar22;
                    if (arg1 != arg2) {
                        fcn.000102f0(arg1,arg2,0x18);
                    }
                    uVar22 = 1;
                    if ((&stack0xffffffffffffffa8)[*puVar20] == '\0') {
                        uVar22 = uVar23;
                    }
                    uVar26 = uVar18 + 1;
                    uVar18 = uVar26;
                    arg1[2] = arg1[2] * uVar22;
                    puVar1 = puVar20 + 0xb;
                    puVar20 = puVar20 + 0xc;
                } while (*puVar1 != 0);
                puVar24 = puStack_50;
                uVar22 = auStackX_10[0];
            }
            puVar25[1] = uVar26;
            iVar17 = (*puVar24[3])(puVar24,uVar19,&stack0x00000020,&stack0x00000018,0,0);
            if (iVar17 < 0) {
                return;
            }
            auStackX_10[0] = uVar22 + auStackX_18[0];
            uVar21 = auStackX_10[0];
            uVar19 = uVar19 + 1;
        } while (uVar21 < *0x11b80);
    }
    return;
}


