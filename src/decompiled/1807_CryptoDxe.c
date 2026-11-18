// decompiled by r2ghidra: 1807_CryptoDxe.pe32
// functions: 15

/* entry0 @ 0x113c0 */

int64_t entry0(int64_t noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    fcn.00011484(noname_0,arg1);
    *0x13e88 = -0x7fffffffffffffff;
    iVar1 = section..text(0x13e90);
    if (iVar1 == 0) {
        auStackX_18[0] = 0;
        iVar1 = (**(*0x13340 + 0xa8))(auStackX_18,0x12000,0,0x12070);
        if ((-1 < iVar1) || (*0x13e88 < 0)) {
            *0x13e88 = iVar1;
        }
        fcn.000110d0(0x13e90,-1);
    }
    iVar1 = *0x13e88;
    if (*0x13e88 < 0) {
        if (*0x13350 != 0) {
            (**(*(arg1 + 0x60) + 0x48))();
            *0x13350 = 0;
        }
        fcn.00011720(*0x14fa0);
    }
    return iVar1;
}


/* fcn.00011680 @ 0x11680 */

void fcn.00011680(void)

{
    return;
}


/* fcn.00011484 @ 0x11484 */

void fcn.00011484(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint64_t noname_0;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t var_38h;
    int64_t var_40h;
    
    *0x13338 = *(arg2 + 0x60);
    iStackX_10 = 0;
    *0x13330 = arg2;
    uStackX_8 = arg1;
    (**(*0x13338 + 0x140))(0x12030,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x13340);
    (**(*0x13338 + 0x140))(0x12040,0,&iStackX_18);
    uStackX_8 = 0;
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,0);
    *0x14fa0 = fcn.000116f0();
    (**(iStackX_18 + 0x18))(iStackX_18,&uStackX_8,*0x14fa0);
    *0x14f98 = uStackX_8 >> 5;
    fcn.00011758();
    puVar4 = fcn.00011758();
    do {
        uVar1 = *puVar4;
        noname_0 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x00011578:
            if (puVar4 == NULL) {
                uVar5 = fcn.00011310();
                fcn.000112c0();
                uVar2 = in(0x1808);
                fcn.00011270(noname_0,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar7 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar7 >> 0x17 & 1) != 0) break;
                    func_0x00011260();
                }
                fcn.00011270(uVar7,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.000112c0();
                }
                else {
                    fcn.000112b0();
                }
code_r0x000115e1:
                if (*0x13350 == NULL) {
                    *0x14f90 = 0x2000;
                    iVar6 = (**(*(arg2 + 0x60) + 0x40))(4);
                    if (iVar6 < 0) {
                        *0x13350 = NULL;
                    }
                }
                fcn.00011280(1,0,0,&uStackX_8);
                uStackX_8 = 0;
                (**(*(arg2 + 0x60) + 0x140))(0x12010,0,&uStackX_8);
                (**(uStackX_8 + 8))(uStackX_8,0x13358);
                return;
            }
            if ((*0x12050 == *(puVar4 + 4)) && (*0x12058 == *(puVar4 + 8))) goto code_r0x000115e1;
        }
        else if (uVar1 == 4) goto code_r0x00011578;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* section..text @ 0x11000 */

ulong section..text(int64_t arg1)

{
    ulong unaff_RBX;
    ulong unaff_RBP;
    ulong unaff_RSI;
    ulong unaff_RDI;
    ulong unaff_R12;
    ulong unaff_R13;
    ulong unaff_R14;
    ulong unaff_R15;
    uint32_t in_CR4;
    int64_t in_SSP;
    ulong unaff_XMM6_Qa;
    ulong unaff_XMM6_Qb;
    ulong unaff_XMM7_Qa;
    ulong unaff_XMM7_Qb;
    ulong unaff_XMM8_Qa;
    ulong unaff_XMM8_Qb;
    ulong unaff_XMM9_Qa;
    ulong unaff_XMM9_Qb;
    ulong unaff_XMM10_Qa;
    ulong unaff_XMM10_Qb;
    ulong unaff_XMM11_Qa;
    ulong unaff_XMM11_Qb;
    ulong unaff_XMM12_Qa;
    ulong unaff_XMM12_Qb;
    ulong unaff_XMM13_Qa;
    ulong unaff_XMM13_Qb;
    ulong unaff_XMM14_Qa;
    ulong unaff_XMM14_Qb;
    ulong unaff_XMM15_Qa;
    ulong unaff_XMM15_Qb;
    ulong unaff_retaddr;
    uchar auStackX_8 [32];
    
    //[00] -r-x section size 4096 named .text
    fcn.00011680();
    *(arg1 + 0xf8) = 0;
    if ((*0x12060 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
        *(arg1 + 0xf8) = in_SSP + 8;
    }
    *arg1 = unaff_RBX;
    *(arg1 + 8) = auStackX_8;
    *(arg1 + 0x10) = unaff_RBP;
    *(arg1 + 0x18) = unaff_RDI;
    *(arg1 + 0x20) = unaff_RSI;
    *(arg1 + 0x28) = unaff_R12;
    *(arg1 + 0x30) = unaff_R13;
    *(arg1 + 0x38) = unaff_R14;
    *(arg1 + 0x40) = unaff_R15;
    *(arg1 + 0x48) = unaff_retaddr;
    *(arg1 + 0x50) = *0x1094;
    *(arg1 + 0x58) = unaff_XMM6_Qa;
    *(arg1 + 0x60) = unaff_XMM6_Qb;
    *(arg1 + 0x68) = unaff_XMM7_Qa;
    *(arg1 + 0x70) = unaff_XMM7_Qb;
    *(arg1 + 0x78) = unaff_XMM8_Qa;
    *(arg1 + 0x80) = unaff_XMM8_Qb;
    *(arg1 + 0x88) = unaff_XMM9_Qa;
    *(arg1 + 0x90) = unaff_XMM9_Qb;
    *(arg1 + 0x98) = unaff_XMM10_Qa;
    *(arg1 + 0xa0) = unaff_XMM10_Qb;
    *(arg1 + 0xa8) = unaff_XMM11_Qa;
    *(arg1 + 0xb0) = unaff_XMM11_Qb;
    *(arg1 + 0xb8) = unaff_XMM12_Qa;
    *(arg1 + 0xc0) = unaff_XMM12_Qb;
    *(arg1 + 200) = unaff_XMM13_Qa;
    *(arg1 + 0xd0) = unaff_XMM13_Qb;
    *(arg1 + 0xd8) = unaff_XMM14_Qa;
    *(arg1 + 0xe0) = unaff_XMM14_Qb;
    *(arg1 + 0xe8) = unaff_XMM15_Qa;
    *(arg1 + 0xf0) = unaff_XMM15_Qb;
    //WARNING: Treating indirect jump as return
    return 0;
}


/* fcn.000110d0 @ 0x110d0 */

void fcn.000110d0(int64_t arg1,int64_t arg2)

{
    *0x1094 = *(arg1 + 0x50);
    //WARNING: Could not recover jumptable at 0x00011179. Too many branches
    //WARNING: Treating indirect jump as call
    (**(arg1 + 0x48))(arg1,arg2);
    return;
}


/* fcn.00011720 @ 0x11720 */

void fcn.00011720(int64_t arg1)

{
    char cVar1;
    
    cVar1 = fcn.000116ac(arg1);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x00011741. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x13340 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00011751. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x13338 + 0x48))(arg1);
    return;
}


/* fcn.000116ac @ 0x116ac */

uint64_t fcn.000116ac(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x14f98 != 0) {
        puVar2 = *0x14fa0 + 8;
        in_RAX = *0x14fa0;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x14f98);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.000116f0 @ 0x116f0 */

ulong fcn.000116f0(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x13340 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00011758 @ 0x11758 */

int64_t fcn.00011758(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x13348 == 0) {
        *0x13348 = 0;
        if (*(*0x13330 + 0x68) != 0) {
            piVar2 = *(*0x13330 + 0x70);
            do {
                if ((*0x12020 == *piVar2) && (*0x12028 == piVar2[1])) {
                    *0x13348 = (*(*0x13330 + 0x70))[uVar1 * 3 + 2];
                    return *0x13348;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x13330 + 0x68));
        }
    }
    return *0x13348;
}


/* fcn.00011310 @ 0x11310 */

uint64_t fcn.00011310(void)

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


/* fcn.000112c0 @ 0x112c0 */

void fcn.000112c0(void)

{
    return;
}


/* fcn.00011270 @ 0x11270 */

uint64_t fcn.00011270(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00011262 @ 0x11262 */

void fcn.00011262(void)

{
    return;
}


/* fcn.000112b0 @ 0x112b0 */

void fcn.000112b0(void)

{
    return;
}


/* fcn.00011280 @ 0x11280 */

uint64_t fcn.00011280(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


