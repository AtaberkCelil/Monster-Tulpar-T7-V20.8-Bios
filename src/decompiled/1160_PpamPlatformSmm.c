// decompiled by r2ghidra: 1160_PpamPlatformSmm.pe32
// functions: 41

/* entry0 @ 0x11318 */

int64_t entry0(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint in_register_00000014;
    int64_t arg2_00;
    int64_t aiStackX_18 [2];
    
    arg2_00 = CONCAT44(in_register_00000014,arg2);
    if ((*0x13108 == 0) || (*0x13108 <= *(arg2_00 + 8))) {
        fcn.00011af0(arg1,arg2_00);
        if (*0x1310c != '\0') {
            (**(*0x13408 + 0x98))(arg1,0x13080,aiStackX_18);
            *(aiStackX_18[0] + 0x58) = 0x112e0;
        }
        iVar1 = fcn.00011be0(arg1,arg2_00);
        if (iVar1 < 0) {
            fcn.00011bb0(arg1,arg2_00);
        }
    }
    else {
        iVar1 = -0x7fffffffffffffe7;
    }
    return iVar1;
}


/* fcn.00011490 @ 0x11490 */

void fcn.00011490(void)

{
    return;
}


/* fcn.00011c40 @ 0x11c40 */

ulong fcn.00011c40(int64_t arg1)

{
    return 0;
}


/* fcn.00011bb0 @ 0x11bb0 */

void fcn.00011bb0(int64_t arg1,int64_t arg2)

{
    fcn.00011508(arg1,arg2);
    return;
}


/* fcn.00011508 @ 0x11508 */

ulong fcn.00011508(void)

{
    fcn.00011594(*0x13440);
    return 0;
}


/* fcn.00011594 @ 0x11594 */

void fcn.00011594(int64_t arg1)

{
    char cVar1;
    
    cVar1 = fcn.00011520(arg1);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x000115b5. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x13418 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x000115c5. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x13408 + 0x48))(arg1);
    return;
}


/* fcn.00011520 @ 0x11520 */

uint64_t fcn.00011520(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x13438 != 0) {
        puVar2 = *0x13440 + 8;
        in_RAX = *0x13440;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x13438);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00011af0 @ 0x11af0 */

void fcn.00011af0(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong in_R8;
    ulong in_R9;
    
    uVar1 = fcn.000113b4(arg1,arg2);
    fcn.000113d0(arg1,arg2,in_R8,in_R9,uVar1);
    uVar1 = fcn.000113d4(arg1,arg2);
    uVar1 = fcn.00011494(arg1,arg2,in_R8,in_R9,uVar1);
    uVar1 = fcn.000113d0(arg1,arg2,in_R8,in_R9,uVar1);
    uVar1 = fcn.00011638(arg1,arg2,in_R8,in_R9,uVar1);
    uVar1 = fcn.00011694(arg1,arg2,in_R8,in_R9,uVar1);
    fcn.0001184c(arg1,arg2,in_R8,in_R9,uVar1);
    return;
}


/* fcn.000113b4 @ 0x113b4 */

ulong fcn.000113b4(int64_t arg1,int64_t arg2)

{
    *0x13408 = *(arg2 + 0x60);
    *0x13410 = arg1;
    *0x13400 = arg2;
    return 0;
}


/* fcn.000113d0 @ 0x113d0 */

ulong fcn.000113d0(void)

{
    return 0;
}


/* fcn.000113d4 @ 0x113d4 */

ulong fcn.000113d4(ulong noname_0,int64_t arg1)

{
    int64_t aiStackX_10 [3];
    
    aiStackX_10[0] = 0;
    (**(*(arg1 + 0x60) + 0x140))(0x13060,0,aiStackX_10);
    (**(aiStackX_10[0] + 8))(aiStackX_10[0],0x13418);
    return 0;
}


/* fcn.00011494 @ 0x11494 */

ulong fcn.00011494(void)

{
    uint64_t uStackX_18;
    int64_t iStackX_20;
    
    (**(*0x13408 + 0x140))(0x13070,0,&iStackX_20);
    uStackX_18 = 0;
    (**(iStackX_20 + 0x18))(iStackX_20,&uStackX_18,0);
    *0x13440 = fcn.00011564();
    (**(iStackX_20 + 0x18))(iStackX_20,&uStackX_18,*0x13440);
    *0x13438 = uStackX_18 >> 5;
    return 0;
}


/* fcn.00011564 @ 0x11564 */

ulong fcn.00011564(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x13418 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00011638 @ 0x11638 */

ulong fcn.00011638(void)

{
    fcn.000115cc();
    return 0;
}


/* fcn.000115cc @ 0x115cc */

int64_t fcn.000115cc(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x13420 == 0) {
        *0x13420 = 0;
        if (*(*0x13400 + 0x68) != 0) {
            piVar2 = *(*0x13400 + 0x70);
            do {
                if ((*0x13010 == *piVar2) && (*0x13018 == piVar2[1])) {
                    *0x13420 = (*(*0x13400 + 0x70))[uVar1 * 3 + 2];
                    return *0x13420;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x13400 + 0x68));
        }
    }
    return *0x13420;
}


/* fcn.00011694 @ 0x11694 */

ulong fcn.00011694(void)

{
    uint8_t uVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    uint32_t uVar6;
    ulong noname_0;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    
    uVar1 = *0x13122;
    iVar5 = *0x13110;
    if (*0x13124 != 0) {
        uVar9 = *0x1311d & 0x1f;
        uVar10 = *0x1311e & 7;
        uVar7 = *0x1311c << 5;
        if ((*((((uVar7 | uVar9) << 3 | uVar10) << 0xc | *0x13120 & 0xfff) + *0x13110) & *0x13122) != *0x13122) {
            uVar8 = ((uVar7 | uVar9) << 3 | uVar10) << 0xc | *0x13120 & 0xfff;
            *((((uVar7 | uVar9) << 3 | uVar10) << 0xc | *0x13124 & 0xfff) + *0x13110) = *0x13128;
            *(uVar8 + iVar5) = *(uVar8 + iVar5) | uVar1;
        }
    }
    noname_0 = 0x130a8;
    iVar5 = fcn.00011648(0x130a8);
    if (iVar5 == 0) {
        uVar7 = fcn.00011280();
        fcn.00011270();
        uVar2 = fcn.000117e4();
        uVar3 = in(uVar2);
        fcn.00011250(noname_0,uVar2);
        while( true ) {
            iVar4 = in(uVar2);
            uVar6 = ((uVar3 & 0xffffff) + 0x16b) - iVar4;
            if ((uVar6 >> 0x17 & 1) != 0) break;
            func_0x00011240();
        }
        fcn.00011250(uVar6,uVar2);
        if ((uVar7 >> 9 & 1) == 0) {
            fcn.00011270();
        }
        else {
            fcn.00011260();
        }
    }
    return 0;
}


/* fcn.0001184c @ 0x1184c */

ulong fcn.0001184c(void)

{
    if (*0x13400 != 0) {
        fcn.00011648(0x13020);
    }
    return 0;
}


/* fcn.00011648 @ 0x11648 */

void fcn.00011648(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000115cc();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00011676:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00011676;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00011be0 @ 0x11be0 */

ulong fcn.00011be0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    *0x133f0 = 0x8000000000000001;
    iVar1 = fcn.00011040(0x132f0);
    if (iVar1 == 0) {
        iVar1 = fcn.00011d80(arg1,arg2);
        fcn.00011ab0(iVar1);
    }
    return *0x133f0;
}


/* fcn.00011040 @ 0x11040 */

ulong fcn.00011040(int64_t arg1)

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
    
    fcn.00011490();
    *(arg1 + 0xf8) = 0;
    if ((*0x13118 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.00011d80 @ 0x11d80 */

ulong fcn.00011d80(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    
    uVar1 = fcn.00011410(arg1,arg2);
    if ((uVar1 == 0) || (uVar1 == 10)) {
        uVar2 = 0x8000000000000003;
    }
    else {
        iVar3 = (**(*0x13418 + 0xd0))(0x13030,0,0x13430);
        if ((iVar3 < 0) || (*0x13430 == 0)) {
            uVar2 = 0x8000000000000003;
        }
        else {
            iVar3 = fcn.00011ef0(uVar1);
            if (-1 < iVar3) {
                iVar3 = fcn.00011fa0(uVar1);
            }
            if (10 < uVar1) {
                iVar3 = (**(*0x13418 + 0xd0))(0x13040,0,0x13428);
                if ((iVar3 < 0) || (*0x13428 == 0)) {
                    return 0x8000000000000003;
                }
                if (*0x130e0 == '\0') {
                    fcn.00011c70();
                    fcn.00011cf0();
                }
                else {
                    iVar3 = fcn.00012090();
                    if (iVar3 < 0) {
                        fcn.00011c70();
                    }
                    iVar3 = fcn.00012120();
                    if (iVar3 < 0) {
                        fcn.00011cf0();
                    }
                }
            }
            (**(*0x13418 + 0xa8))(0x133f8,0x13050,0,0x130a0,uVar1,iVar3);
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.00011ab0 @ 0x11ab0 */

void fcn.00011ab0(int64_t arg1)

{
    if ((-1 < arg1) || (*0x133f0 < 0)) {
        *0x133f0 = arg1;
    }
    fcn.00011488(0x132f0,-1);
    return;
}


/* fcn.00011140 @ 0x11140 */

uint64_t fcn.00011140(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00011280 @ 0x11280 */

uint64_t fcn.00011280(void)

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


/* fcn.00011270 @ 0x11270 */

void fcn.00011270(void)

{
    return;
}


/* fcn.000117e4 @ 0x117e4 */

int16_t fcn.000117e4(void)

{
    uint16_t uVar1;
    
    uVar1 = *0x13128;
    if (*0x13124 != 0) {
        uVar1 = *((((*0x1311d & 0x1f | *0x1311c << 5) << 3 | *0x1311e & 7) << 0xc | *0x13124 & 0xfff) + *0x13110);
    }
    return (*0x13130 & uVar1) + *0x1312c;
}


/* fcn.00011250 @ 0x11250 */

uint64_t fcn.00011250(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00011242 @ 0x11242 */

void fcn.00011242(void)

{
    return;
}


/* fcn.00011260 @ 0x11260 */

void fcn.00011260(void)

{
    return;
}


/* fcn.00011870 @ 0x11870 */

ulong fcn.00011870(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t aiStackX_8 [4];
    
    aiStackX_8[0] = arg1;
    iVar1 = (**(*0x13408 + 0x98))(*0x13410,0x13080,aiStackX_8);
    if (iVar1 < 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(aiStackX_8[0] + 0x18);
    }
    return uVar2;
}


/* fcn.000118b0 @ 0x118b0 */

int64_t fcn.000118b0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uchar auStackX_8 [8];
    ulong *in_stack_00000028;
    ulong *in_stack_00000030;
    int64_t aiStack_28 [2];
    
    if (arg1 != 0) {
        iVar1 = (**(*0x13408 + 0x98))(arg1,0x13090,aiStack_28);
        if (-1 < iVar1) {
            *in_stack_00000028 = 0;
            *in_stack_00000030 = 0;
            iVar1 = (**(aiStack_28[0] + 0x18))
                              (aiStack_28[0],arg2,arg3 & 0xff,arg4,in_stack_00000028,in_stack_00000030,auStackX_8)
            ;
            if (-1 < iVar1) {
                return iVar1;
            }
            if (arg3 != '\x12') {
                return iVar1;
            }
            *in_stack_00000028 = 0;
            *in_stack_00000030 = 0;
            iVar1 = (**(aiStack_28[0] + 0x18))
                              (aiStack_28[0],arg2,0x10,arg4,in_stack_00000028,in_stack_00000030,auStackX_8);
            return iVar1;
        }
    }
    return -0x7ffffffffffffff2;
}


/* fcn.00011488 @ 0x11488 */

void fcn.00011488(int64_t arg1,int64_t arg2)

{
    *0x1094 = *(arg1 + 0x50);
    //WARNING: Could not recover jumptable at 0x00011219. Too many branches
    //WARNING: Treating indirect jump as call
    (**(arg1 + 0x48))(arg1,arg2);
    return;
}


/* fcn.00011410 @ 0x11410 */

uint64_t fcn.00011410(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint32_t auStackX_8 [8];
    
    uVar2 = *0x13110;
    if ((*(*0x13110 + 0xb0060) & 0x70) == 0x30) {
        uVar1 = rdmsr(0xce);
        uVar2 = 0;
        if ((uVar1 >> 0x3b & 1) != 0) {
            fcn.00011140(1,0,0,auStackX_8);
            uVar2 = auStackX_8[0] >> 6 & 0xffffffffffffff01;
            return CONCAT71(uVar2 >> 8,-(uVar2 != '\0')) & 0xffffffffffffff0b;
        }
    }
    return uVar2 & 0xffffffffffffff00;
}


/* fcn.00011ef0 @ 0x11ef0 */

//WARNING: Removing unreachable block (ram,0x00011f68)

ulong fcn.00011ef0(int64_t arg1)

{
    ulong uVar1;
    ulong in_RDX;
    ulong uStack_18;
    ulong uStack_10;
    
    if (arg1 == '\v') {
        uStack_10 = 0x130c0;
        uStack_18 = 0;
        uVar1 = fcn.0001198c(0x130c0,CONCAT71(in_RDX >> 8,0x19),0,&uStack_18);
    }
    else {
        uVar1 = 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.00011fa0 @ 0x11fa0 */

//WARNING: Removing unreachable block (ram,0x0001201b)

ulong fcn.00011fa0(int64_t arg1)

{
    ulong uVar1;
    ulong in_RDX;
    ulong auStack_28 [2];
    ulong uStack_18;
    
    if (arg1 == '\v') {
        uStack_18 = 0x130d0;
        auStack_28[0] = 0;
        uVar1 = fcn.0001198c(0x130d0,CONCAT71(in_RDX >> 8,0x19),0,auStack_28);
    }
    else {
        uVar1 = 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.00012090 @ 0x12090 */

//WARNING: Removing unreachable block (ram,0x000120e2)
//WARNING: Removing unreachable block (ram,0x0001210a)
//WARNING: Removing unreachable block (ram,0x00012103)

ulong fcn.00012090(ulong param_1,ulong param_2)

{
    ulong uVar1;
    ulong auStack_18 [3];
    
    auStack_18[0] = 0;
    uVar1 = fcn.0001198c(0x130e8,CONCAT71(param_2 >> 8,0x19),0,auStack_18);
    return uVar1;
}


/* fcn.00011c70 @ 0x11c70 */

void fcn.00011c70(void)

{
    uint16_t uStack_28;
    
    for (uStack_28 = 0; uStack_28 < 0x11; uStack_28 = uStack_28 + 1) {
        (***0x13428)(*(uStack_28 * 4 + 0x13140),*(uStack_28 * 4 + 0x13142),0);
    }
    return;
}


/* fcn.00012120 @ 0x12120 */

//WARNING: Removing unreachable block (ram,0x00012172)
//WARNING: Removing unreachable block (ram,0x0001219a)
//WARNING: Removing unreachable block (ram,0x00012193)

ulong fcn.00012120(ulong param_1,ulong param_2)

{
    ulong uVar1;
    ulong auStack_18 [3];
    
    auStack_18[0] = 0;
    uVar1 = fcn.0001198c(0x130f8,CONCAT71(param_2 >> 8,0x19),0,auStack_18);
    return uVar1;
}


/* fcn.00011cf0 @ 0x11cf0 */

void fcn.00011cf0(void)

{
    uint16_t uStack_18;
    
    for (uStack_18 = 0; uStack_18 < 0x27; uStack_18 = uStack_18 + 1) {
        (**(*0x13428 + 8))(*(uStack_18 * 8 + 0x13190),*(uStack_18 * 8 + 0x13194),*(uStack_18 * 8 + 0x13195));
    }
    return;
}


/* fcn.0001198c @ 0x1198c */

int64_t fcn.0001198c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    int64_t arg1_01;
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    ulong in_stack_00000028;
    int64_t iStack_38;
    uint64_t uStack_30;
    
    iVar1 = arg3;
    arg1_01 = fcn.00011870(arg1);
    iVar1 = fcn.000118b0(arg1_01,arg1,CONCAT71(iVar1 >> 8,arg2),arg3);
    if (iVar1 < 0) {
        iStack_38 = 0;
        iVar1 = 0;
        iVar2 = (**(*0x13408 + 0x138))(2,0x13090,0,&uStack_30,&iStack_38,in_stack_00000028);
        if (-1 < iVar2) {
            uVar4 = 0;
            uVar3 = uStack_30;
            if (uStack_30 != 0) {
                do {
                    arg1_00 = *(iStack_38 + uVar4 * 8);
                    if (arg1_00 != arg1_01) {
                        iVar1 = CONCAT71(iVar1 >> 8,arg2);
                        iVar2 = fcn.000118b0(arg1_00,arg1,iVar1,arg3);
                        if (-1 < iVar2) goto code_r0x00011a7b;
                        uVar3 = uStack_30;
                    }
                    uVar4 = uVar4 + 1;
                } while (uVar4 < uVar3);
            }
            if (uVar4 == uVar3) {
                iVar2 = -0x7ffffffffffffff2;
            }
        }
code_r0x00011a7b:
        if (iStack_38 != 0) {
            fcn.00011594(iStack_38);
        }
    }
    else {
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.00011474 @ 0x11474 */

ulong * fcn.00011474(uint32_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    ulong *puVar2;
    uint in_register_00000014;
    ulong *puVar3;
    ulong *puVar4;
    uint64_t uVar5;
    uint in_R8;
    uint8_t uVar6;
    
    uVar1 = CONCAT44(in_R8,arg3);
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar6 = 0;
    if ((uVar1 != 0) && (puVar2 != CONCAT44(in_register_00000014,arg2))) {
    //[00] -r-x section size 8192 named .text
        puVar4 = CONCAT44(in_register_00000014,arg2);
        puVar3 = puVar4 + (uVar1 - 1);
        if ((puVar4 < puVar2) && (puVar2 <= puVar3)) {
            puVar4 = puVar2 + (uVar1 - 1);
            uVar6 = 1;
            uVar5 = uVar1;
        }
        else {
            uVar5 = arg3 & 7;
            puVar3 = puVar4;
            puVar4 = puVar2;
            for (uVar1 = uVar1 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
                *puVar4 = *puVar3;
                puVar3 = puVar3 + 1;
                puVar4 = puVar4 + 1;
            }
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + uVar6 * -2 + 1;
            puVar4 = puVar4 + uVar6 * -2 + 1;
        }
        return puVar2;
    }
    return puVar2;
}


