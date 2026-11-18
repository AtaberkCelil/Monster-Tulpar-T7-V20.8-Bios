// decompiled by r2ghidra: 1275_SmmTcgStorageSec.pe32
// functions: 65

/* entry0 @ 0x112d4 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.000112fc(arg1,arg2);
    iVar1 = fcn.000117bc(arg1,arg2);
    if (iVar1 < 0) {
        fcn.000116c8();
    }
    return iVar1;
}


/* fcn.000112fc @ 0x112fc */

void fcn.000112fc(uint32_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint16_t *puVar5;
    uint64_t uVar6;
    uint8_t uVar7;
    uint32_t uVar8;
    uint in_register_0000000c;
    uint64_t noname_0;
    uint16_t *puVar9;
    uint64_t uStackX_8;
    uint64_t uStackX_10;
    int64_t aiStackX_18 [2];
    int64_t var_38h;
    int64_t var_40h;
    
    uStackX_8 = CONCAT44(in_register_0000000c,arg1);
    *0x162a8 = *(arg2 + 0x60);
    puVar9 = NULL;
    uStackX_10 = 0;
    *0x162a0 = arg2;
    (**(*0x162a8 + 0x140))(0x160f0,0,&uStackX_10);
    (**(uStackX_10 + 8))(uStackX_10,0x162b0);
    (**(*0x162a8 + 0x140))(0x16120,0,aiStackX_18);
    uStackX_8 = 0;
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,0);
    *0x16498 = fcn.00014f40();
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,*0x16498);
    *0x16490 = uStackX_8 >> 5;
    fcn.00015100();
    uStackX_8 = 0;
    (**(*(arg2 + 0x60) + 0x140))(0x16020,0,&uStackX_8);
    (**(uStackX_8 + 8))(uStackX_8,0x162c0);
    fcn.000150a0(0x16100,0x162c8);
    iVar4 = (**(*0x162b0 + 0xd0))(0x16090,0,0x162d0);
    if (iVar4 < 0) {
        *0x162d0 = puVar9;
    }
    (**(*0x162b0 + 0xd0))(0x16070,0,0x162d8);
    puVar5 = fcn.00015100();
code_r0x00011467:
    uVar1 = *puVar5;
    noname_0 = uVar1;
    if (uVar1 == 0xffff) {
        puVar5 = puVar9;
code_r0x00011473:
        if (puVar5 == NULL) {
            uVar6 = fcn.00011270();
            fcn.00011260();
            uVar2 = in(0x1808);
            fcn.00011210(noname_0,0x1808);
            while( true ) {
                iVar3 = in(0x1808);
                uVar8 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                if ((uVar8 >> 0x17 & 1) != 0) break;
                fcn.00011200();
            }
            fcn.00011210(uVar8,0x1808);
            if ((uVar6 >> 9 & 1) == 0) {
                fcn.00011260();
            }
            else {
                fcn.00011250();
            }
code_r0x000114dc:
            (**(*0x162c0 + 0xc0))(0x16030,0x15230,0x162f0);
            (**(*0x162c0 + 0xc0))(0x16110,0x15248,0x16300);
            (**(*0x162c0 + 0xc0))(0x160c0,0x152a0,0x162e0);
            iVar4 = fcn.000151dc();
            if (iVar4 == 0) {
                *0x16480 = 0x34365f424b434f4c;
                *0x16488 = 0x161b0;
                (**(*0x162c0 + 0x28))(*0x162c0,0x16080,0x16480);
                *0x16308 = 1;
            }
            (**(*0x162a8 + 0x140))(0x16120,0,aiStackX_18);
            uStackX_10 = 0;
            (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_10,0);
            *0x16458 = fcn.00014f40();
            (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_10);
            *0x16478 = uStackX_10 >> 5;
            for (puVar5 = fcn.00015100(); *puVar5 != 0xffff; puVar5 = puVar5 + puVar5[1]) {
                if (*puVar5 == 6) goto code_r0x00011612;
            }
            puVar5 = puVar9;
code_r0x00011612:
            if (puVar5 == NULL) {
                fcn.00011220(0x80000000,&uStackX_8,0,0);
                if (uStackX_8 < 0x80000008) {
                    uVar7 = 0x24;
                }
                else {
                    fcn.00011220(0x80000008,&uStackX_8,0,0);
                    uVar7 = uStackX_8;
                }
            }
            else {
                uVar7 = puVar5[4];
            }
            if (0x30 < uVar7) {
                uVar7 = 0x30;
            }
            *0x16330 = (1LL << (uVar7 & 0x3f)) + -1;
            (**(*0x162b0 + 0xc0))(0x160e0,0x1584c,0x16468);
            (**(*0x162b0 + 0xc0))(0x160a0,0x15b28,0x16470);
            return;
        }
        if ((*0x161a0 == *(puVar5 + 4)) && (*0x161a8 == *(puVar5 + 8))) goto code_r0x000114dc;
    }
    else if (uVar1 == 4) goto code_r0x00011473;
    puVar5 = puVar5 + puVar5[1];
    goto code_r0x00011467;
}


/* fcn.000117bc @ 0x117bc */

int64_t fcn.000117bc(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_10 [3];
    
    *0x16440 = -0x7fffffffffffffff;
    aiStackX_10[0] = arg1;
    iVar1 = section..text(0x16340);
    if (iVar1 != 0) {
        return *0x16440;
    }
    iVar1 = (**(*0x162a8 + 0x140))(0x160f0,0,aiStackX_10);
    if (iVar1 < 0) {
code_r0x0001187d:
        if (-1 < *0x16440) goto code_r0x0001188e;
    }
    else {
        iVar1 = (**(aiStackX_10[0] + 8))(aiStackX_10[0]);
        if ((iVar1 < 0) || (iVar1 = (**(*0x164a0 + 0xd0))(0x16130,0,0x164a8), iVar1 < 0)) {
            iVar1 = -0x7ffffffffffffffd;
            goto code_r0x0001187d;
        }
        *0x164b0 = 0x164b0;
        *0x164b8 = 0x164b0;
        *0x16298 = 0xc0000000;
        fcn.00012870();
        iVar1 = 0;
    }
    *0x16440 = iVar1;
code_r0x0001188e:
    fcn.000110d0(0x16340,-1);
    return *0x16440;
}


/* fcn.000116c8 @ 0x116c8 */

void fcn.000116c8(void)

{
    int64_t iVar1;
    char cVar2;
    
    fcn.00015068(*0x16458);
    (**(*0x162b0 + 0xc0))(0x160e0,0,0x16468);
    (**(*0x162b0 + 0xc0))(0x160a0,0,0x16470);
    if (*0x16308 != '\0') {
        (**(*0x162c0 + 0x28))(*0x162c0,0x16080,0,0);
    }
    if (*0x162f0 != 0) {
        (**(*0x162c0 + 0xc0))(0x16030,0,0x162f0);
    }
    if (*0x16300 != 0) {
        (**(*0x162c0 + 0xc0))(0x16110,0,0x16300);
    }
    if (*0x162e0 != 0) {
        (**(*0x162c0 + 0xc0))(0x160c0,0,0x162e0);
    }
    iVar1 = *0x16498;
    cVar2 = fcn.00014efc(*0x16498);
    if (cVar2 != '\0') {
    //WARNING: Could not recover jumptable at 0x00015089. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x162b0 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00015099. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x162a8 + 0x48))(iVar1);
    return;
}


/* fcn.00014ef8 @ 0x14ef8 */

void fcn.00014ef8(void)

{
    return;
}


/* fcn.00014f40 @ 0x14f40 */

ulong fcn.00014f40(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x162b0 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00015100 @ 0x15100 */

int64_t fcn.00015100(void)

{
    if (*0x162b8 == 0) {
        fcn.000150a0(0x160b0,0x162b8);
    }
    return *0x162b8;
}


/* fcn.000150a0 @ 0x150a0 */

ulong fcn.000150a0(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x162a0;
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


/* fcn.00011270 @ 0x11270 */

uint64_t fcn.00011270(void)

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


/* fcn.00011260 @ 0x11260 */

void fcn.00011260(void)

{
    return;
}


/* fcn.00011210 @ 0x11210 */

uint64_t fcn.00011210(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00011202 @ 0x11202 */

void fcn.00011202(void)

{
    return;
}


/* fcn.00011250 @ 0x11250 */

void fcn.00011250(void)

{
    return;
}


/* fcn.000151dc @ 0x151dc */

int64_t fcn.000151dc(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*(*0x162c0 + 0x98) != 0) {
        piVar2 = *(*0x162c0 + 0xa0);
        do {
            if ((*piVar2 == *0x16080) && (piVar2[1] == *0x16088)) {
                return (*(*0x162c0 + 0xa0))[uVar1 * 3 + 2];
            }
            uVar1 = uVar1 + 1;
            piVar2 = piVar2 + 3;
        } while (uVar1 < *(*0x162c0 + 0x98));
    }
    return 0;
}


/* fcn.00011220 @ 0x11220 */

uint64_t fcn.00011220(int64_t arg1,uint32_t *arg2,int64_t arg3,int64_t arg4)

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
    if (arg4 != 0) {
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
    
    //[00] -r-x section size 20480 named .text
    fcn.00014ef8();
    *(arg1 + 0xf8) = 0;
    if ((*0x161c0 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.00012870 @ 0x12870 */

int64_t fcn.00012870(void)

{
    int64_t iVar1;
    uchar auStackX_8 [8];
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0xd8;
    iVar1 = (**(*0x164a0 + 0xe0))(0x12210,0x16150,auStackX_8);
    if (-1 < iVar1) {
        iVar1 = (**(*0x164a0 + 0xe0))(0x11a94,0x16140,auStackX_8);
        if (-1 < iVar1) {
            iVar1 = (***0x164a8)(*0x164a8,0x12594,auStackX_10,auStackX_8);
            if (-1 < iVar1) {
                iVar1 = (**(*0x164a0 + 0xe0))(0x12654,0x16170,auStackX_8);
                if (-1 < iVar1) {
                    iVar1 = (**(*0x164a0 + 0xe0))(0x126e8,0x16190,auStackX_8);
                    if (-1 < iVar1) {
                        (**(*0x164a0 + 0xe0))(0x127ec,0x16160,auStackX_8);
                        iVar1 = 0;
                    }
                }
            }
        }
    }
    return iVar1;
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


/* fcn.000155d8 @ 0x155d8 */

ulong fcn.000155d8(int64_t noname_0,int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    
    if (arg1 == 0) {
        if (arg2 != 0) {
            return 0x8000000000000002;
        }
    }
    else if (arg2 == 0) {
        return 0x8000000000000002;
    }
    iVar3 = fcn.000152ac(noname_0);
    if (iVar3 == 0) {
        uVar4 = 0x800000000000000e;
    }
    else if ((((*(iVar3 + 0x28) & 2) == 0) || (*0x162e8 == '\0')) || (*0x162f8 != '\0')) {
        if (arg1 == 0) {
            if ((*(iVar3 + 0x28) & 1) == 0) {
                return 0x8000000000000008;
            }
            arg1 = *(iVar3 + 0x18);
        }
        if ((arg2 == 0) || (uVar1 = *(iVar3 + 0x20), uVar2 = *arg2, *arg2 = uVar1, uVar1 <= uVar2)) {
            if ((*(iVar3 + 0x20) != 0) && (arg1 != *(iVar3 + 0x30))) {
                fcn.00011180(arg1,*(iVar3 + 0x30),*(iVar3 + 0x20));
            }
            uVar4 = 0;
        }
        else {
            uVar4 = 0x8000000000000005;
        }
    }
    else {
        uVar4 = 0x800000000000000f;
    }
    return uVar4;
}


/* fcn.00014f9c @ 0x14f9c */

void fcn.00014f9c(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00014f40(arg1,arg1);
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        fcn.00011180(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00011180 @ 0x11180 */

int64_t fcn.00011180(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.000156a0 @ 0x156a0 */

uint64_t fcn.000156a0(uint32_t arg1,uint32_t arg2)

{
    uint64_t uVar1;
    bool bVar2;
    uint64_t uVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int *piVar5;
    uint in_register_00000014;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t *puVar9;
    int64_t iVar10;
    
    uVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = *0x16330;
    if (((CONCAT44(in_register_00000014,arg2) < *0x16330 || CONCAT44(in_register_00000014,arg2) == *0x16330) &&
        (uVar4 <= *0x16330)) &&
       ((uVar7 = 0, CONCAT44(in_register_00000014,arg2) == 0 ||
        (uVar3 = (*0x16330 - CONCAT44(in_register_00000014,arg2)) + 1, uVar4 <= uVar3)))) {
        if (*0x16478 != 0) {
            puVar9 = *0x16458 + 8;
            uVar6 = uVar7;
            do {
                uVar1 = *puVar9;
                if (uVar4 < uVar1) {
code_r0x00015717:
                    uVar3 = uVar4 + CONCAT44(in_register_00000014,arg2);
                    if (uVar1 < uVar3) goto code_r0x0001583f;
                }
                else {
                    uVar3 = puVar9[1];
                    if (uVar4 < uVar1 + uVar3) goto code_r0x0001583f;
                    if (uVar4 <= uVar1) goto code_r0x00015717;
                }
                uVar6 = uVar6 + 1;
                puVar9 = puVar9 + 4;
            } while (uVar6 < *0x16478);
        }
        if (*0x16328 == '\0') {
code_r0x0001583a:
            return CONCAT71(uVar3 >> 8,1);
        }
        bVar2 = false;
        iVar8 = *0x16448;
        iVar10 = *0x16450;
        if (*0x16450 != 0) {
            do {
                if ((*(iVar8 + 8) <= uVar4) &&
                   (uVar3 = uVar4 + CONCAT44(in_register_00000014,arg2),
                   uVar3 <= *(iVar8 + 0x18) * 0x1000 + *(iVar8 + 8))) {
                    bVar2 = true;
                }
                iVar8 = iVar8 + *0x16460;
                iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
            if (bVar2) {
                if (*0x16318 != 0) {
                    uVar6 = uVar7;
                    puVar9 = *0x16320;
                    do {
                        uVar1 = *puVar9;
                        if (uVar4 < uVar1) {
code_r0x000157bf:
                            uVar3 = uVar4 + CONCAT44(in_register_00000014,arg2);
                            if (uVar1 < uVar3) goto code_r0x0001583f;
                        }
                        else {
                            uVar3 = puVar9[1];
                            if (uVar4 < uVar1 + uVar3) goto code_r0x0001583f;
                            if (uVar4 <= uVar1) goto code_r0x000157bf;
                        }
                        uVar6 = uVar6 + 1;
                        puVar9 = puVar9 + 7;
                    } while (uVar6 < *0x16318);
                }
                if (*0x16310 != 0) {
                    piVar5 = *0x16310 + 0x10;
                    if (*(*0x16310 + 4) != 0) {
                        do {
                            if ((*piVar5 == 5 || *piVar5 == 6) && ((piVar5[8] >> 0x11 & 1) != 0)) {
                                uVar6 = *(piVar5 + 2);
                                if (uVar6 <= uVar4) {
                                    uVar3 = *(piVar5 + 6) * 0x1000 + uVar6;
                                    if (uVar4 < uVar3) goto code_r0x0001583f;
                                    if (uVar6 < uVar4) goto code_r0x0001582b;
                                }
                                uVar3 = uVar4 + CONCAT44(in_register_00000014,arg2);
                                if (uVar6 < uVar3) goto code_r0x0001583f;
                            }
code_r0x0001582b:
                            uVar3 = *(*0x16310 + 8);
                            uVar7 = uVar7 + 1;
                            piVar5 = piVar5 + uVar3;
                        } while (uVar7 < *(*0x16310 + 4));
                    }
                }
                goto code_r0x0001583a;
            }
        }
    }
code_r0x0001583f:
    return uVar3 & 0xffffffffffffff00;
}


/* fcn.00011918 @ 0x11918 */

int64_t fcn.00011918(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uStackX_18;
    int64_t iStackX_20;
    int64_t var_30h;
    uint32_t var_38h;
    
    iStackX_20 = 0;
    uStackX_18 = 0;
    iVar2 = (**(*0x164a0 + 200))(2,0x16010,0,&uStackX_18,0);
    if (iVar2 < 0) {
        if (iVar2 == -0x7ffffffffffffffb) {
            iVar2 = (**(*0x164a0 + 0x50))(6,uStackX_18,&iStackX_20);
            if (iVar2 < 0) {
                return iVar2;
            }
            iVar2 = (**(*0x164a0 + 200))(2,0x16010,0,&uStackX_18,iStackX_20);
        }
        if (iVar2 < 0) goto code_r0x00011a68;
    }
    if (iStackX_20 == 0) {
        return iVar2;
    }
    uVar5 = 0;
    if ((uStackX_18 & 0xfffffffffffffff8) != 0) {
        do {
            iVar2 = (**(*0x164a0 + 0xb8))(*(iStackX_20 + uVar5 * 8),0x16010,arg2);
            if ((*arg2 == 0) || (piVar3 = *arg2 + 400, piVar1 = *piVar3, piVar1 == piVar3)) {
                iVar4 = 0;
            }
            else {
                iVar4 = piVar1 + -0x221;
            }
            if (((-1 < iVar2) && (iVar4 != 0)) && (*(iVar4 + 8) == arg1)) {
                iVar2 = 0;
                break;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < uStackX_18 >> 3);
    }
    if (uVar5 == uStackX_18 >> 3) {
        iVar2 = -0x7ffffffffffffff2;
    }
code_r0x00011a68:
    if (iStackX_20 != 0) {
        (**(*0x164a0 + 0x58))();
    }
    return iVar2;
}


/* fcn.00015068 @ 0x15068 */

void fcn.00015068(int64_t arg1)

{
    char cVar1;
    
    cVar1 = fcn.00014efc(arg1);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x00015089. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x162b0 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00015099. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x162a8 + 0x48))(arg1);
    return;
}


/* fcn.000118ac @ 0x118ac */

ulong fcn.000118ac(void)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    
    uVar2 = 0;
    uVar1 = *(*0x164a0 + 0x98);
    if (uVar1 != 0) {
        piVar3 = *(*0x164a0 + 0xa0);
        do {
            if ((*piVar3 == *0x16050) && (piVar3[1] == *0x16058)) break;
            uVar2 = uVar2 + 1;
            piVar3 = piVar3 + 3;
        } while (uVar2 < uVar1);
    }
    if (uVar2 != uVar1) {
        *0x16290 = *(*(*0x164a0 + 0xa0) + 0x10 + uVar2 * 0x18);
        return 0;
    }
    return 0x800000000000000e;
}


/* fcn.000111c0 @ 0x111c0 */

int64_t fcn.000111c0(int64_t arg1,int64_t arg2)

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


/* fcn.00014fdc @ 0x14fdc */

int64_t fcn.00014fdc(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00014f40(noname_0,arg2);
    if (arg1_00 != 0) {
        if (arg2 != 0) {
            arg1_00 = fcn.000111c0(arg1_00,arg2);
        }
        if ((arg1_00 != 0) && (arg3 != 0)) {
            if (arg1 < arg2) {
                arg2 = arg1;
            }
            if ((arg2 != 0) && (arg1_00 != arg3)) {
                fcn.00011180(arg1_00,arg3,arg2);
            }
            fcn.00015068(arg3);
        }
    }
    return arg1_00;
}


/* fcn.000152f4 @ 0x152f4 */

ulong fcn.000152f4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *puStackX_8;
    int64_t iStackX_20;
    int64_t var_30h;
    int64_t var_48h;
    
    iVar5 = 0;
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        puStackX_8 = fcn.000152ac(arg1);
        if (puStackX_8 == NULL) {
            iVar6 = (arg3 >> 0xc) + ((arg3 & 0xfffU) != 0);
            iVar3 = (**(*0x162c0 + 0x60))(0,6,iVar6,&iStackX_20);
            if (-1 < iVar3) {
                iVar3 = (**(*0x162c0 + 0x50))(6,0x48,&puStackX_8);
                if (-1 < iVar3) {
                    if (iStackX_20 != arg2) {
                        fcn.00011180(iStackX_20,arg2,arg3);
                    }
                    *puStackX_8 = 0x44584f424b434f4c;
                    if (puStackX_8 + 1 != arg1) {
                        fcn.00011180(puStackX_8 + 1,arg1,0x10);
                    }
                    puStackX_8[3] = arg2;
                    puStackX_8[4] = arg3;
                    puStackX_8[5] = 0;
                    puStackX_8[6] = iStackX_20;
                    iVar3 = fcn.000151dc();
                    if (iVar3 != 0) {
                        iVar5 = *(iVar3 + 8);
                    }
                    piVar4 = puStackX_8 + 7;
                    *piVar4 = iVar5;
                    puVar1 = *(iVar5 + 8);
                    puStackX_8[8] = puVar1;
                    *puVar1 = piVar4;
                    *(iVar5 + 8) = piVar4;
                    return 0;
                }
                (**(*0x162c0 + 0x68))(iStackX_20,iVar6);
            }
            uVar2 = 0x8000000000000009;
        }
        else {
            uVar2 = 0x8000000000000014;
        }
    }
    return uVar2;
}


/* fcn.000152ac @ 0x152ac */

int64_t * fcn.000152ac(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    
    iVar1 = fcn.000151dc();
    piVar3 = NULL;
    if (iVar1 != 0) {
        piVar3 = *(iVar1 + 8);
    }
    piVar2 = *piVar3;
    if (piVar2 != piVar3) {
        do {
            if ((piVar2[-6] == *arg1) && (piVar2[-5] == *(arg1 + 8))) {
                return piVar2 + -7;
            }
            piVar2 = *piVar2;
        } while (piVar2 != piVar3);
    }
    return NULL;
}


/* fcn.00015464 @ 0x15464 */

ulong fcn.00015464(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iStackX_10;
    
    if (((arg1 == 0) || (arg3 == 0)) || (arg4 == 0)) {
        uVar3 = 0x8000000000000002;
    }
    else {
        iStackX_10 = arg2;
        iVar2 = fcn.000152ac(arg1);
        if (iVar2 == 0) {
            uVar3 = 0x800000000000000e;
        }
        else {
            uVar1 = *(iVar2 + 0x20);
            if (uVar1 < arg4) {
                if ((*(iVar2 + 0x28) & 2) == 0) {
                    return 0x8000000000000005;
                }
                if ((-((uVar1 & 0xfff) != 0) & 0x1000) + (uVar1 & 0xfffffffffffff000) < arg4) {
                    iVar4 = (**(*0x162c0 + 0x60))(0,6,((arg4 & 0xfffU) != 0) + (arg4 >> 0xc),&iStackX_10);
                    if (iVar4 < 0) {
                        return 0x8000000000000009;
                    }
                    if ((*(iVar2 + 0x20) != 0) && (iStackX_10 != *(iVar2 + 0x30))) {
                        fcn.00011180(iStackX_10,*(iVar2 + 0x30),*(iVar2 + 0x20));
                    }
                    if (*(iVar2 + 0x20) != 0) {
                        fcn.000111c0(*(iVar2 + 0x30),*(iVar2 + 0x20));
                    }
                    (**(*0x162c0 + 0x68))(*(iVar2 + 0x30),(*(iVar2 + 0x20) >> 0xc) + ((*(iVar2 + 0x20) & 0xfff) != 0));
                    *(iVar2 + 0x30) = iStackX_10;
                }
                *(iVar2 + 0x20) = arg4;
            }
            if (*(iVar2 + 0x30) != arg3) {
                fcn.00011180(*(iVar2 + 0x30),arg3,arg4);
            }
            uVar3 = 0;
        }
    }
    return uVar3;
}


/* fcn.000111e0 @ 0x111e0 */

int64_t fcn.000111e0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    char cVar2;
    char *pcVar3;
    char *pcVar4;
    
    do {
        pcVar3 = arg1;
        pcVar4 = arg2;
        if (arg3 == 0) break;
        arg3 = arg3 + -1;
        pcVar4 = arg2 + 1;
        pcVar3 = arg1 + 1;
        cVar2 = *arg2;
        cVar1 = *arg1;
        arg1 = pcVar3;
        arg2 = pcVar4;
    } while (cVar1 == cVar2);
    return pcVar3[-1] - pcVar4[-1];
}


/* fcn.00011fec @ 0x11fec */

uint64_t fcn.00011fec(uint32_t arg1)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t arg2;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint in_register_0000000c;
    uint64_t uVar7;
    uint16_t uVar8;
    
    iVar5 = CONCAT44(in_register_0000000c,arg1);
    uVar6 = 0;
    uVar8 = 0;
    if (*0x16260 == 0) {
        iVar2 = fcn.00014f40(iVar5,0x5f);
        iVar3 = 0;
        if (iVar2 != 0) {
            iVar3 = fcn.000111c0(iVar2,0x5f);
        }
        *0x16260 = iVar3;
    }
    else {
        iVar3 = iVar5;
        uVar7 = uVar6;
        if (*0x16250 != 0) {
            do {
                iVar3 = uVar7 * 0x5f + *0x16260;
                if ((iVar3 == iVar5 + 0x50) || (iVar2 = fcn.000111e0(iVar3,iVar5 + 0x50,0x3c), iVar2 == 0)) break;
                uVar7 = uVar7 + 1;
            } while (uVar7 < *0x16250);
        }
        uVar8 = uVar7;
        if (uVar7 < *0x16250) {
            iVar3 = uVar7 * 0x5f + *0x16260;
        }
        else {
            *0x16260 = fcn.00014fdc(iVar3,*0x16250 * 0x5f,*0x16250 * 0x5f + 0x5f,*0x16260);
            iVar3 = *0x16250 * 0x5f + *0x16260;
        }
    }
    iVar2 = *0x16260;
    uVar7 = *0x16250;
    *(iVar3 + 0x5d) = 1;
    cVar1 = *(iVar5 + 0x1e);
    *(iVar3 + 0x5c) = cVar1;
    *(iVar3 + 0x5e) = *(iVar5 + 0x38);
    if (cVar1 == '\0') {
        arg2 = *(iVar5 + 8);
    }
    else {
        arg2 = *(iVar5 + 0x10);
    }
    if ((arg2 != 0) && (iVar3 + 0x3c != arg2)) {
        fcn.00011180(iVar3 + 0x3c,arg2,0x20);
        uVar7 = *0x16250;
        iVar2 = *0x16260;
    }
    if (iVar3 != iVar5 + 0x50) {
        fcn.00011180(iVar3,iVar5 + 0x50,0x3c);
        uVar7 = *0x16250;
        iVar2 = *0x16260;
    }
    if (uVar7 <= uVar8) {
        uVar7 = uVar7 + 1;
    }
    uVar4 = fcn.000152f4(0x16180,iVar2,uVar7 * 0x5f);
    if ((uVar4 < 0) && (uVar4 != 0x8000000000000014)) {
        return uVar4;
    }
    if (uVar4 == 0) {
        iVar5 = fcn.000152ac(0x16180);
        if (iVar5 == 0) {
            return 0x800000000000000e;
        }
        if ((*(iVar5 + 0x28) & 1) != 0) {
            return 0x8000000000000002;
        }
        *(iVar5 + 0x28) = 2;
    }
    else {
        uVar6 = uVar4;
        if (uVar4 == 0x8000000000000014) {
            uVar6 = fcn.00015464(0x16180,iVar2,*0x16260,uVar7 * 0x5f);
        }
        if (uVar6 < 0) {
            return uVar6;
        }
    }
    if (uVar8 == *0x16250) {
        *0x16250 = *0x16250 + 1;
    }
    return uVar6;
}


/* fcn.00015190 @ 0x15190 */

ulong fcn.00015190(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    
    uVar1 = 0;
    if (arg2 == 0) {
        uVar1 = 0x8000000000000002;
    }
    else {
        iVar2 = fcn.00014f40(arg1,arg1);
        *arg2 = iVar2;
        if (iVar2 == 0) {
            uVar1 = 0x8000000000000009;
        }
    }
    return uVar1;
}


/* fcn.00012964 @ 0x12964 */

int64_t fcn.00012964(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t *puVar3;
    ulong uVar4;
    bool bVar5;
    int64_t iStackX_10;
    ulong uStackX_18;
    uint64_t uStackX_20;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    
    uStackX_20 = 0;
    uVar4 = 0;
    uStackX_18 = 0;
    if ((*0x16290 == NULL) && (iVar1 = fcn.000118ac(), iVar1 < 0)) {
        return -0x7ffffffffffffff9;
    }
    uVar2 = *((*(arg1 + 0x32) + (*(arg1 + 0x30) * 0x20 + *(arg1 + 0x31)) * 8) * 0x1000 + 0x24 + *0x16298) & 0xfffffff0;
    if ((((*0x162d0 != 0) && (iVar1 = (**(*0x162d0 + 8))(uVar2,0x100), -1 < iVar1)) && (*0x162d0 != 0)) &&
       (iVar1 = (**(*0x162d0 + 8))(uVar2,((*uVar2 & 0x1f) + 3) * 0x80), -1 < iVar1)) {
        bVar5 = *0x16268 == '\0';
        **0x16290 = uVar2;
        if (bVar5) {
            if ((*((*(arg1 + 0x32) + (*(arg1 + 0x30) * 0x20 + *(arg1 + 0x31)) * 8) * 0x1000 + 10 + *0x16298) & 6) != 0)
            {
                puVar3 = uVar2 + 4;
                *puVar3 = *(uVar2 + 4) & 0x7fffffff;
                *puVar3 = 1;
                fcn.00015130(0x45e9);
                *puVar3 = 0x80000000;
                fcn.00015130(0x369e99);
            }
            *0x16268 = '\x01';
        }
        if (*0x16280 != 0) {
            (**(*0x16280 + 0x20))(*0x16280,0,0,1,&uStackX_20,0);
            iVar1 = (uStackX_20 & 0xffffffffffffff00) + 0x100;
            uVar4 = *(*0x16290 + 6);
            *(*0x16290 + 0xc) = iVar1;
            *(*0x16290 + 6) = iVar1;
            fcn.000111c0(*(*0x16290 + 6),0x100);
            (**(*0x16280 + 0x20))(*0x16280,0,0,1,&uStackX_18,0);
            *(*0x16290 + 8) = uStackX_18;
            *(*0x16290 + 4) = uStackX_18;
            puVar3 = *0x16290 + 8;
            *(*0x16290 + 10) = *puVar3 + 0x80;
            *(*0x16290 + 2) = *puVar3 + 0x80;
            fcn.000111c0(*(*0x16290 + 4),0x400);
        }
        (**(*0x16290 + 0x1a))(*0x16290,*(arg1 + 0x22));
        iVar1 = (**(*0x164a0 + 0x50))(6,0xae,&iStackX_10);
        if (-1 < iVar1) {
            fcn.000111c0(iStackX_10,0xae);
            *(iStackX_10 + 0x9b) = 1;
            *(iStackX_10 + 0xa7) = *(arg1 + 0x22);
            *(iStackX_10 + 0xa8) = *(arg1 + 0x24);
            *(iStackX_10 + 0x9f) = *(arg1 + 0x28);
            iVar1 = fcn.00012d84(iStackX_10);
            if (-1 < iVar1) {
                if ((*(iStackX_10 + 0x19) & 4) == 0) {
                    iVar1 = fcn.0001378c(iStackX_10);
                }
                else {
                    *(iStackX_10 + 0x97) = 0;
                    iVar1 = fcn.00013384(arg1,iStackX_10);
                }
            }
            if (*0x16280 != 0) {
                (**(*0x16280 + 0x28))(*0x16280,1,uStackX_18);
                iVar1 = (**(*0x16280 + 0x28))(*0x16280,1,uStackX_20);
                *(*0x16290 + 6) = uVar4;
            }
            return iVar1;
        }
        return iVar1;
    }
    return 0;
}


/* fcn.00012c64 @ 0x12c64 */

int64_t fcn.00012c64(int64_t arg1)

{
    int64_t iVar1;
    int64_t var_10h;
    int64_t var_bp_18h;
    
    iVar1 = fcn.00011918(*(arg1 + 0x28),&var_bp_18h);
    if (-1 < iVar1) {
        iVar1 = *(var_bp_18h + 8);
        if ((((*(iVar1 + 0x14) & 1) != 0) && ((*(iVar1 + 0x1c) & 1) != 0)) && (*(iVar1 + 0x30) != *(var_bp_18h + 0x88)))
        {
            return -0x7ffffffffffffffd;
        }
        iVar1 = (**(var_bp_18h + 0x100))(var_bp_18h);
        if (-1 < iVar1) {
            iVar1 = (**(*0x164a0 + 0x50))(6,0xae,&var_10h);
            if (iVar1 < 0) {
                return iVar1;
            }
            fcn.000111c0(var_10h,0xae);
            *(var_bp_18h + 0x148) = var_10h;
            *(var_10h + 0x9b) = 2;
            *(var_10h + 0x9f) = *(arg1 + 0x28);
            iVar1 = fcn.00012d84(var_10h);
            if (-1 < iVar1) {
                if ((*(var_10h + 0x19) & 4) == 0) {
                    fcn.0001378c(var_10h);
                }
                else {
                    *(var_10h + 0x97) = 0;
                    fcn.00013384(arg1,var_10h);
                }
                iVar1 = (**(var_bp_18h + 0x108))(var_bp_18h);
                return iVar1;
            }
        }
    }
    return -0x7ffffffffffffff9;
}


/* fcn.00011dcc @ 0x11dcc */

void fcn.00011dcc(uint32_t arg1)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint8_t *puVar3;
    int64_t iVar4;
    uint in_register_0000000c;
    ulong uVar5;
    uint8_t *puVar6;
    uint64_t uVar7;
    int64_t aiStackX_8 [2];
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    aiStackX_8[1] = 0;
    aiStackX_8[0] = 0;
    if ((*(iVar4 + 0x34) != 1) || (((*0x16290 != 0 || (iVar2 = fcn.000118ac(), -1 < iVar2)) && (*0x16269 == '\0')))) {
        uVar5 = 0x160d0;
        iVar2 = (**(*0x164a0 + 0xd0))(0x160d0,0,aiStackX_8 + 1);
        if (iVar2 < 0) {
            if (*0x164c0 == NULL) {
                iVar2 = fcn.00014f40();
                puVar3 = NULL;
                if (iVar2 != 0) {
                    puVar3 = fcn.000111c0(iVar2,0x81);
                }
                puVar3[0x39] = 0xff;
                puVar3[0x3a] = 0xff;
                puVar3[0x3b] = 0xff;
                puVar3[0x3c] = 0xff;
                puVar3[0x3d] = 0xff;
                puVar3[0x3e] = 0xff;
                puVar3[0x3f] = 0xff;
                puVar3[0x40] = 0xff;
                puVar3[0x21] = 0;
                puVar3[0x22] = 2;
                puVar3[0x23] = 0;
                puVar3[0x24] = 0;
                puVar3[0x29] = 2;
                puVar3[0x2a] = 0;
                puVar3[0x2b] = 0;
                puVar3[0x2c] = 0;
                puVar6 = puVar3 + 0x41;
                *0x16258 = *0x16258 + 1;
            }
            else {
                uVar1 = 0;
                if (*0x16258 != 0) {
                    puVar3 = *0x164c0 + 0x39;
                    do {
                        if (*puVar3 == *(iVar4 + 0x28)) break;
                        uVar1 = uVar1 + 1;
                        puVar3 = puVar3 + 0x40;
                    } while (uVar1 < *0x16258);
                    if (uVar1 < *0x16258) {
                        return;
                    }
                }
                puVar3 = fcn.00014fdc(CONCAT71(uVar5 >> 8,*0x16258),*0x16258 * 0x40 + 1,*0x16258 * 0x40 + 0x41,
                                      *0x164c0);
                puVar6 = puVar3 + *0x16258 * 0x40 + 1;
            }
            *0x164c0 = puVar3;
            if (*(iVar4 + 0x34) == 1) {
                puVar6[0x20] = 0;
                puVar6[0x21] = 0x10;
                puVar6[0x22] = 0;
                puVar6[0x23] = 0;
                puVar6[0x28] = 2;
                puVar6[0x29] = 0;
                puVar6[0x2a] = 0;
                puVar6[0x2b] = 0;
                *0x16269 = '\x01';
            }
            else if (*(iVar4 + 0x34) == 2) {
                iVar2 = fcn.00011918(*(iVar4 + 0x28),aiStackX_8);
                puVar3 = *0x164c0;
                if (iVar2 < 0) {
                    return;
                }
                *(puVar6 + 0x20) = *(aiStackX_8[0] + 0x70) << 0xc;
                puVar6[0x28] = 2;
                puVar6[0x29] = 0;
                puVar6[0x2a] = 0;
                puVar6[0x2b] = 0;
                *(puVar6 + 0x24) = *(aiStackX_8[0] + 0x98) << 0xc;
                puVar6[0x2c] = 2;
                puVar6[0x2d] = 0;
                puVar6[0x2e] = 0;
                puVar6[0x2f] = 0;
            }
            *0x16258 = *0x16258 + 1;
            *puVar3 = *0x16258;
            *(puVar6 + 0x38) = *(iVar4 + 0x28);
            *(puVar6 + 0x30) = *(iVar4 + 0x34);
            uVar7 = *0x16258;
            iVar4 = fcn.000152f4(0x16140,puVar3,uVar7 * 0x40 + 1);
            if ((-1 < iVar4) || (iVar4 == -0x7fffffffffffffec)) {
                if (iVar4 == 0) {
                    iVar4 = fcn.000152ac(0x16140);
                    if ((iVar4 != 0) && ((*(iVar4 + 0x28) & 1) == 0)) {
                        *(iVar4 + 0x28) = 2;
                    }
                }
                else if (iVar4 == -0x7fffffffffffffec) {
                    fcn.00015464(0x16140,puVar3,*0x164c0,uVar7 * 0x40 + 1);
                }
            }
        }
    }
    return;
}


/* fcn.00015130 @ 0x15130 */

void fcn.00015130(int64_t arg1)

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
            fcn.00011200();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00012d84 @ 0x12d84 */

int64_t fcn.00012d84(int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint32_t *puVar3;
    int64_t iVar4;
    uint16_t uVar5;
    ulong in_R8;
    uint32_t *puVar6;
    int64_t in_R9;
    int64_t iStackX_8;
    
    puVar3 = *0x16278;
    puVar6 = *0x16278;
    fcn.000111c0(*0x16278,0x35);
    if (*(arg1 + 0x9b) == 2) {
        iVar4 = fcn.00011918(*(arg1 + 0x9f),&iStackX_8);
        if (iVar4 < 0) {
            return -0x7ffffffffffffff9;
        }
        iVar4 = fcn.00013134(iStackX_8,0,in_R8,in_R9);
    }
    else {
        if (*(arg1 + 0x9b) != 1) {
            return -0x7ffffffffffffffd;
        }
        iVar4 = fcn.00012f64(puVar6,0,in_R8,CONCAT71(in_R9 >> 8,*(arg1 + 0xa7)));
    }
    if (-1 < iVar4) {
        uVar2 = *puVar3;
        puVar6 = puVar3 + 0xc;
        do {
            uVar1 = *puVar6;
            uVar5 = uVar1 * 0x100 + (uVar1 >> 8);
            if (uVar5 == 2) {
                *(arg1 + 0x19) = puVar6[1];
            }
            else if ((uVar5 == 0x100) || (uVar5 == 0x203)) {
code_r0x00012efd:
                *(arg1 + 0x42) = puVar6[1] * 0x100 + (puVar6[1] >> 8);
                *(arg1 + 0x44) = *(puVar6 + 6) * 0x100 + (*(puVar6 + 6) >> 8);
            }
            else if (0x300 < uVar5) {
                if (uVar5 < 0x305) goto code_r0x00012efd;
                if (uVar5 == 0x402) {
                    *(arg1 + 0x52) = uVar1 * 0x100 + (uVar1 >> 8);
                    *(arg1 + 0x56) = *(arg1 + 0x56) ^ (puVar6[1] ^ *(arg1 + 0x56)) & 1;
                    *(arg1 + 0x56) = *(arg1 + 0x56) ^ (puVar6[1] ^ *(arg1 + 0x56)) & 2;
                    *(arg1 + 0x57) = *(arg1 + 0x57) ^ (*(puVar6 + 5) ^ *(arg1 + 0x57)) & 1;
                }
            }
            puVar6 = puVar6 + *(puVar6 + 3) + 4;
        } while (puVar6 < (uVar2 >> 0x18) + 4 + ((uVar2 & 0xff00) + uVar2 * 0x10000) * 0x100 + (uVar2 >> 8 & 0xff00) +
                          puVar3);
    }
    return iVar4;
}


/* fcn.00013384 @ 0x13384 */

//WARNING: Variable defined which should be unmapped: var_dh
//WARNING: Variable defined which should be unmapped: var_13h
//WARNING: Variable defined which should be unmapped: var_1bh
//WARNING: Variable defined which should be unmapped: var_24h

int64_t fcn.00013384(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint8_t uVar2;
    int64_t arg3;
    uint8_t uVar3;
    int64_t iVar4;
    ulong *puVar5;
    uint64_t arg3_00;
    int64_t iVar6;
    int64_t in_R9;
    int64_t var_dh;
    int64_t var_88h;
    char cStack_e8;
    char acStack_e7 [47];
    ulong uStack_b8;
    ulong uStack_b0;
    uint uStack_a8;
    ulong uStack_9c;
    uchar uStack_94;
    int64_t iStack_93;
    uchar auStack_8b [3];
    int64_t var_80h;
    int32_t var_bp_78h;
    uint32_t var_bp_70h;
    int64_t iStack_6b;
    int64_t var_40h;
    int64_t var_38h;
    int32_t var_30h;
    int64_t var_24h;
    int8_t var_1ch;
    int64_t var_1bh;
    int64_t var_13h;
    
    arg3 = *0x16278;
    uVar2 = 0;
    if (arg2 == 0) {
        return -0x7ffffffffffffff9;
    }
    uVar1 = *(arg2 + 0x42);
    fcn.000111c0(*0x16278,0x200);
    fcn.000111c0(&uStack_b8,0x8d);
    fcn.000111c0(&cStack_e8,0x21);
    uVar3 = *(arg1 + 0x1e) & 1;
    if ((uVar3 == 0) || (*(arg1 + 0x10) != 0)) {
        if (uVar3 == 0) {
            if (*(arg1 + 8) == 0) goto code_r0x00013464;
            if (&cStack_e8 != *(arg1 + 8)) {
                fcn.00011180(&cStack_e8,*(arg1 + 8),0x20);
            }
        }
        else {
            if (&cStack_e8 != *(arg1 + 0x10)) {
                fcn.00011180(&cStack_e8,*(arg1 + 0x10),0x20);
            }
            uVar2 = 1;
        }
        if (*(arg2 + 0x3e) == 0x100) {
            iVar4 = 0;
            while (cStack_e8 != '\0') {
                cStack_e8 = acStack_e7[iVar4];
                iVar4 = iVar4 + 1;
            }
            iVar4 = fcn.00014cd8(arg2,&uStack_b8,arg3);
        }
        else {
            uStack_a8 = 1;
            uStack_b8 = 0xff00000000000000;
            uStack_b0 = 0x2ff000000000000;
            uStack_9c = 0x200000005020000;
            iStack_93 = 0;
            while (cStack_e8 != '\0') {
                cStack_e8 = acStack_e7[iStack_93];
                iStack_93 = iStack_93 + 1;
            }
            _auStack_8b = &cStack_e8;
            uStack_94 = 1;
            iStack_6b = (-uVar2 & 0xfffffe0000000000) + 0x100030009000000;
            iVar4 = fcn.00014bb0(arg2,&uStack_b8,arg3);
        }
        if (-1 < iVar4) {
            if (*(arg2 + 0x3e) == 0x100) {
                fcn.000111c0(arg3,0x200);
                iVar4 = fcn.00014418(arg2,&uStack_b8,arg3,in_R9);
                if (-1 < iVar4) {
                    puVar5 = &uStack_b8;
                    iVar4 = fcn.00014418(arg2,puVar5,arg3,in_R9);
                    if (-1 < iVar4) {
                        arg3_00 = uVar1 * 0x100 + (uVar1 >> 8);
                        iVar4 = fcn.000132d8(arg2,CONCAT71(puVar5 >> 8,1),arg3_00,arg3);
                        if (-1 < iVar4) {
                            fcn.000111c0(arg3,0x200);
                            iVar4 = fcn.000137f0(arg2,arg3,arg3_00,&uStack_b8);
                        }
                    }
                }
            }
            else {
                iVar6 = arg3;
                iVar4 = fcn.00014e64(arg2,&uStack_b8,arg3,in_R9);
                if (-1 < iVar4) {
                    fcn.000111c0(arg3,0x200);
                    puVar5 = &uStack_b8;
                    fcn.000137f0(arg2,arg3,iVar6,puVar5);
                    iVar6 = arg3;
                    iVar4 = fcn.00014e64(arg2,&uStack_b8,arg3,puVar5);
                    if (-1 < iVar4) {
                        fcn.000111c0(arg3,0x200);
                        fcn.000137f0(arg2,arg3,iVar6,&uStack_b8);
                    }
                }
            }
            fcn.00014c58(arg2,&uStack_b8,arg3);
        }
    }
    else {
code_r0x00013464:
        iVar4 = -0x7ffffffffffffffe;
    }
    return iVar4;
}


/* fcn.0001378c @ 0x1378c */

ulong fcn.0001378c(uint32_t arg1)

{
    uchar *arg4;
    ulong uVar1;
    uint in_register_0000000c;
    int64_t arg1_00;
    
    arg4 = *0x16278;
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (((*(arg1_00 + 0x52) == 0x402) && ((*(arg1_00 + 0x56) & 1) == 0)) && ((*(arg1_00 + 0x56) & 2) == 0)) {
        uVar1 = 0x200;
        fcn.000111c0(*0x16278,0x200);
        *arg4 = 1;
        uVar1 = fcn.000132d8(arg1_00,CONCAT71(uVar1 >> 8,2),0x500,arg4);
    }
    else {
        uVar1 = 0x800000000000000e;
    }
    return uVar1;
}


/* fcn.00013134 @ 0x13134 */

int64_t fcn.00013134(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    char *arg1_00;
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iStackX_8;
    ulong uStackX_20;
    uint8_t in_stack_00000028;
    uint16_t in_stack_00000030;
    uint64_t in_stack_00000040;
    uchar auStack_38 [16];
    
    arg1_00 = *(arg1 + 0x40);
    uStackX_20 = 0x200;
    iStackX_8 = 0;
    if ((*0x16288 == NULL) && (iVar1 = (**(*0x164a0 + 0xd0))(0x16040,0,0x16288), iVar1 < 0)) {
        return iVar1;
    }
    if (*0x16280 == 0) {
    }
    else {
        iVar1 = (**(*0x16280 + 0x10))(*0x16280,arg2 == '\0',in_stack_00000040,&uStackX_20,0x16270,&iStackX_8);
        if (iVar1 < 0) {
            return iVar1;
        }
        in_stack_00000040 = *0x16270;
    }
    fcn.000111c0(arg1_00,0x48);
    if (*0x16270 != 0) {
        in_stack_00000040 = *0x16270;
    }
    *(arg1_00 + 0x18) = in_stack_00000040;
    uVar2 = *(arg1 + 0x3c) - (*(arg1 + 0x3c) - 1 & in_stack_00000040);
    if (0x1ff < uVar2) {
        uVar2 = 0x200;
    }
    if (uVar2 != 0x200) {
        *(arg1_00 + 0x20) = uVar2 + in_stack_00000040;
    }
    *(arg1_00 + 0x28) =
         (in_stack_00000030 & 0xff) * 0x10000 + in_stack_00000028 * 0x1000000 + (in_stack_00000030 & 0xff00);
    *(arg1_00 + 0x2c) = uStackX_20;
    arg1_00[1] = arg1_00[1] & 0x3c;
    *arg1_00 = -0x7e - (arg2 != '\0');
    *(arg1_00 + 2) = **(arg1 + 0x158);
    arg1_00[4] = '\0';
    arg1_00[5] = '\0';
    arg1_00[6] = '\0';
    arg1_00[7] = '\0';
    arg1_00[0x40] = '\x01';
    arg1_00[0x42] = '\0';
    arg1_00[0x43] = '\0';
    arg1_00[0x44] = -0x18;
    arg1_00[0x45] = '\x03';
    arg1_00[0x46] = '\0';
    arg1_00[0x47] = '\0';
    iVar1 = (***0x16288)(arg1,arg1_00,auStack_38);
    if (iStackX_8 != 0) {
        (**(*0x16280 + 0x18))(*0x16280);
        *0x16270 = 0;
    }
    return iVar1;
}


/* fcn.00012f64 @ 0x12f64 */

int64_t fcn.00012f64(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    char cVar1;
    uint uVar2;
    uint uVar3;
    uchar uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iStackX_8;
    uchar in_stack_00000028;
    uchar in_stack_00000038;
    ushort in_stack_00000040;
    int64_t in_stack_00000050;
    ulong in_stack_ffffffffffffff68;
    uint32_t uVar7;
    int64_t iStack_88;
    uint uStack_80;
    uchar uStack_7b;
    ushort uStack_7a;
    uint uStack_78;
    uint uStack_74;
    uint uStack_70;
    uint uStack_6c;
    int iStack_68;
    uint uStack_64;
    uint uStack_60;
    uint uStack_5c;
    uchar uStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    int64_t iStack_40;
    uint uStack_38;
    uint uStack_34;
    uint uStack_30;
    uint uStack_2c;
    int iStack_28;
    uint uStack_24;
    uint uStack_20;
    uint uStack_1c;
    uchar uStack_18;
    
    iVar6 = *0x16290;
    uVar7 = in_stack_ffffffffffffff68 >> 0x20;
    iStackX_8 = 0;
    cVar1 = arg2;
    iStack_50 = 0x200;
    fcn.000111c0(&iStack_88,0x31);
    if (*0x16280 == 0) {
    }
    else {
        uVar7 = 0;
        iVar5 = (**(*0x16280 + 0x10))(*0x16280,cVar1 == '\0',in_stack_00000050,&iStack_50,0x16270,&iStackX_8);
        if (iVar5 < 0) {
            return iVar5;
        }
        in_stack_00000050 = *0x16270;
    }
    uVar2 = uStack_78;
    uVar4 = in_stack_00000040 >> 8;
    iStack_88 = in_stack_00000050;
    if (iStack_50 == 0) {
        uStack_78._0_3_ = CONCAT12(uVar4,uStack_78);
        uVar3 = uStack_78;
        uStack_78._1_1_ = SUB41(uVar2,1);
        uStack_74 = CONCAT31(uStack_74._1_3_,in_stack_00000040);
        if (cVar1 == '\0') {
            uStack_78._1_1_ = 1;
        }
        uStack_70 = CONCAT31(16000,uStack_70);
        uStack_6c = 0;
        iStack_68 = iStack_68._1_3_ << 8;
        uStack_78._2_2_ = SUB42(uVar3,2);
        uStack_78._0_1_ = uVar2;
        if (*0x16270 != 0) {
            iStack_88 = *0x16270;
        }
        uStack_80 = 0;
        iStack_40 = CONCAT22(uStack_7a,CONCAT11(uStack_7b,in_stack_00000038)) << 0x20;
        uStack_74 = CONCAT13(0x5b,uStack_74);
        uStack_18 = uStack_58;
        uStack_38 = uStack_78;
        uStack_34 = uStack_74;
        uStack_30 = uStack_70;
        uStack_2c = 0;
        iStack_28 = iStack_68;
        uStack_24 = uStack_64;
        uStack_20 = uStack_60;
        uStack_1c = uStack_5c;
        iStack_48 = iStack_88;
        iVar6 = (**(iVar6 + 0x80))(iVar6,&iStack_48,arg3 & 0xff,in_stack_00000028,uVar7 << 0x20);
    }
    else {
        if (in_stack_00000050 == 0) {
            return -0x7ffffffffffffffe;
        }
        uStack_74 = CONCAT31(uStack_74._1_3_,in_stack_00000040);
        uStack_78._0_3_ = CONCAT12(uVar4,uStack_78);
        uStack_7a = 1;
        uStack_74 = CONCAT13(0x5e,uStack_74);
        if (cVar1 == '\0') {
            uStack_74 = CONCAT13(0x5c,uStack_74);
        }
        uStack_80 = iStack_50;
        if (*0x16270 != 0) {
            iStack_88 = *0x16270;
        }
        uStack_70 = CONCAT31(16000,uStack_70);
        uStack_6c = 0;
        iStack_68 = iStack_68._1_3_ << 8;
        iVar6 = (**(iVar6 + 0x70))(iVar6,&iStack_88,arg3 & 0xff,in_stack_00000028,uVar7 << 0x20,arg2 & 0xff);
    }
    if (iStackX_8 != 0) {
        (**(*0x16280 + 0x18))(*0x16280);
        *0x16270 = 0;
    }
    return iVar6;
}


/* fcn.00014cd8 @ 0x14cd8 */

int64_t fcn.00014cd8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int iVar4;
    uint64_t arg3_00;
    int64_t in_stack_00000038;
    
    fcn.000111c0(arg3,0x200);
    fcn.000111c0(arg2,0x8d);
    *(arg2 + 0x10) = 1;
    *arg2 = 0xff00000000000000;
    *(arg2 + 0x24) = 1;
    *(arg2 + 8) = 0x2ff000000000000;
    *(arg2 + 0x1c) = 0x100010005020000;
    iVar2 = fcn.00014bb0(arg1,arg2,arg3);
    if (iVar2 < 0) {
        return iVar2;
    }
    fcn.000111c0(arg3,0x200);
    if (in_stack_00000038 == 0) {
code_r0x00014e41:
        iVar3 = 0;
    }
    else {
        uVar1 = *(arg1 + 0x42);
        iVar2 = arg2;
        arg3_00 = arg3;
        iVar3 = fcn.000148a8(arg1,arg2,arg3);
        if (-1 < iVar3) {
            iVar4 = uVar1 * 0x100;
            arg3_00 = CONCAT22(iVar4 >> 0x10,iVar4 + (uVar1 >> 8));
            iVar3 = fcn.000132d8(arg1,CONCAT71(iVar2 >> 8,1),arg3_00,arg3);
        }
        if (-1 < iVar3) {
            fcn.000111c0(arg3,0x200);
            iVar3 = fcn.000137f0(arg1,arg3,arg3_00,arg2);
            if (-1 < iVar3) goto code_r0x00014e41;
        }
        fcn.00014c58(arg1,arg2,arg3);
    }
    return iVar3;
}


/* fcn.00014bb0 @ 0x14bb0 */

void fcn.00014bb0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int iVar4;
    uint64_t arg3_00;
    
    iVar2 = arg3;
    fcn.000111c0(arg3,0x200);
    uVar1 = *(arg1 + 0x42);
    iVar3 = arg3;
    iVar2 = fcn.00013fb4(arg1,arg3,iVar2,arg2);
    if (-1 < iVar2) {
        iVar4 = uVar1 * 0x100;
        arg3_00 = CONCAT22(iVar4 >> 0x10,iVar4 + (uVar1 >> 8));
        iVar3 = fcn.000132d8(arg1,CONCAT71(iVar3 >> 8,1),arg3_00,arg3);
        if (-1 < iVar3) {
            fcn.000111c0(arg3,0x200);
            iVar3 = arg3;
            iVar2 = fcn.000137f0(arg1,arg3,arg3_00,arg2);
            if (-1 < iVar2) {
                fcn.000146a0(arg3,iVar3,arg2);
            }
        }
    }
    return;
}


/* fcn.00013fb4 @ 0x13fb4 */

ulong fcn.00013fb4(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    char *pcVar1;
    int64_t iVar2;
    int64_t arg2_00;
    uint64_t arg2_01;
    ulong uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar7;
    int64_t iVar6;
    
    arg2_00 = arg2;
    fcn.00013a24(arg2,arg2,*(arg1 + 0x42),*(arg1 + 0x7c));
    arg2_01 = *(arg3 + 0x14);
    fcn.00013a88(arg2,arg2_00,arg2_01,*(arg3 + 0x18));
    fcn.00013b20(arg2);
    iVar2 = arg2;
    fcn.00013d58(arg2,arg2_00,CONCAT71(arg2_01 >> 8,0xf8));
    uVar4 = 8;
    fcn.00013d94(iVar2,arg2_00,arg3,8);
    iVar2 = arg3 + 8;
    fcn.00013d94(arg2,arg2_00,iVar2,uVar4);
    iVar2 = CONCAT71(iVar2 >> 8,0xf0);
    iVar6 = arg2;
    fcn.00013d58(arg2,arg2_00,iVar2);
    iVar7 = 0;
    fcn.00013d58(iVar6,arg2_00,CONCAT71(iVar2 >> 8,*(arg3 + 0x10)));
    iVar2 = arg3 + 0x1c;
    fcn.00013d94(iVar6,arg2_00,iVar2,uVar4);
    iVar6 = CONCAT71(iVar2 >> 8,*(arg3 + 0x24));
    iVar2 = arg2;
    fcn.00013d58(arg2,arg2_00,iVar6);
    if (*(arg3 + 0x2d) != 0) {
        fcn.00013d58(iVar2,arg2_00,CONCAT71(iVar6 >> 8,0xf2));
        if (*(arg1 + 0x3e) == 0x100) {
            iVar6 = iVar7;
            do {
                iVar5 = iVar6 + 1;
                pcVar1 = iVar6 + 0x161e9;
                iVar6 = iVar5;
            } while (*pcVar1 != '\0');
            fcn.00013d94(iVar2,arg2_00,0x161e8,iVar5);
        }
        else {
            fcn.00013d58(iVar2,arg2_00,0);
        }
        iVar2 = *(arg3 + 0x2d);
        fcn.00013f20(arg2,arg2_00,iVar2,*(arg3 + 0x25));
        iVar6 = CONCAT71(iVar2 >> 8,0xf3);
        fcn.00013d58(arg2,arg2_00,iVar6);
    }
    if (*(arg3 + 0x35) != 0) {
        iVar2 = CONCAT71(iVar6 >> 8,0xf2);
        iVar6 = arg2;
        fcn.00013d58(arg2,arg2_00,iVar2);
        fcn.00013d58(iVar6,arg2_00,CONCAT71(iVar2 >> 8,1));
        iVar2 = arg3 + 0x35;
        fcn.00013d94(iVar6,arg2_00,iVar2,8);
        iVar6 = CONCAT71(iVar2 >> 8,0xf3);
        fcn.00013d58(arg2,arg2_00,iVar6);
    }
    if (*(arg3 + 0x45) != 0) {
        iVar6 = CONCAT71(iVar6 >> 8,0xf2);
        iVar2 = arg2;
        fcn.00013d58(arg2,arg2_00,iVar6);
        fcn.00013d58(iVar2,arg2_00,CONCAT71(iVar6 >> 8,2));
        uVar3 = *(arg3 + 0x45);
        fcn.00013d94(iVar2,arg2_00,uVar3,*(arg3 + 0x3d));
        iVar6 = CONCAT71(uVar3 >> 8,0xf3);
        fcn.00013d58(arg2,arg2_00,iVar6);
    }
    if (*(arg3 + 0x4d) != 0) {
        iVar6 = CONCAT71(iVar6 >> 8,0xf2);
        iVar2 = arg2;
        fcn.00013d58(arg2,arg2_00,iVar6);
        if (*(arg1 + 0x3e) == 0x100) {
            iVar6 = iVar7;
            do {
                iVar5 = iVar6 + 1;
                pcVar1 = iVar6 + 0x16201;
                iVar6 = iVar5;
            } while (*pcVar1 != '\0');
            fcn.00013d94(iVar2,arg2_00,0x16200,iVar5);
        }
        else {
            fcn.00013d58(iVar2,arg2_00,CONCAT71(iVar6 >> 8,3));
        }
        iVar2 = arg3 + 0x4d;
        fcn.00013d94(arg2,arg2_00,iVar2,8);
        iVar6 = CONCAT71(iVar2 >> 8,0xf3);
        fcn.00013d58(arg2,arg2_00,iVar6);
    }
    if (*(arg3 + 0x5d) != 0) {
        iVar6 = CONCAT71(iVar6 >> 8,0xf2);
        iVar2 = arg2;
        fcn.00013d58(arg2,arg2_00,iVar6);
        fcn.00013d58(iVar2,arg2_00,CONCAT71(iVar6 >> 8,4));
        uVar3 = *(arg3 + 0x5d);
        fcn.00013d94(iVar2,arg2_00,uVar3,*(arg3 + 0x55));
        iVar6 = CONCAT71(uVar3 >> 8,0xf3);
        fcn.00013d58(arg2,arg2_00,iVar6);
    }
    if (*(arg3 + 0x65) != 0) {
        iVar6 = CONCAT71(iVar6 >> 8,0xf2);
        iVar2 = arg2;
        fcn.00013d58(arg2,arg2_00,iVar6);
        if (*(arg1 + 0x3e) == 0x100) {
            do {
                iVar6 = iVar7 + 1;
                pcVar1 = iVar7 + 0x16219;
                iVar7 = iVar6;
            } while (*pcVar1 != '\0');
            fcn.00013d94(iVar2,arg2_00,0x16218,iVar6);
        }
        else {
            fcn.00013d58(iVar2,arg2_00,CONCAT71(iVar6 >> 8,5));
        }
        uVar3 = *(arg3 + 0x65);
        fcn.00013d94(arg2,arg2_00,uVar3,8);
        iVar6 = CONCAT71(uVar3 >> 8,0xf3);
        fcn.00013d58(arg2,arg2_00,iVar6);
    }
    if (*(arg3 + 0x6d) != 0) {
        iVar6 = CONCAT71(iVar6 >> 8,0xf2);
        iVar2 = arg2;
        fcn.00013d58(arg2,arg2_00,iVar6);
        fcn.00013d58(iVar2,arg2_00,CONCAT71(iVar6 >> 8,6));
        uVar3 = *(arg3 + 0x6d);
        fcn.00013d94(iVar2,arg2_00,uVar3,8);
        iVar6 = CONCAT71(uVar3 >> 8,0xf3);
        fcn.00013d58(arg2,arg2_00,iVar6);
    }
    if (*(arg3 + 0x75) != 0) {
        iVar6 = CONCAT71(iVar6 >> 8,0xf2);
        iVar2 = arg2;
        fcn.00013d58(arg2,arg2_00,iVar6);
        fcn.00013d58(iVar2,arg2_00,CONCAT71(iVar6 >> 8,7));
        uVar3 = *(arg3 + 0x75);
        fcn.00013d94(iVar2,arg2_00,uVar3,8);
        iVar6 = CONCAT71(uVar3 >> 8,0xf3);
        fcn.00013d58(arg2,arg2_00,iVar6);
    }
    if (*(arg3 + 0x85) != 0) {
        iVar6 = CONCAT71(iVar6 >> 8,0xf2);
        iVar2 = arg2;
        fcn.00013d58(arg2,arg2_00,iVar6);
        fcn.00013d58(iVar2,arg2_00,CONCAT71(iVar6 >> 8,8));
        uVar3 = *(arg3 + 0x85);
        fcn.00013d94(iVar2,arg2_00,uVar3,*(arg3 + 0x7d));
        iVar6 = CONCAT71(uVar3 >> 8,0xf3);
        fcn.00013d58(arg2,arg2_00,iVar6);
    }
    iVar6 = CONCAT71(iVar6 >> 8,0xf1);
    iVar2 = arg2;
    fcn.00013d58(arg2,arg2_00,iVar6);
    fcn.00013d58(iVar2,arg2_00,CONCAT71(iVar6 >> 8,0xf9));
    fcn.00013b54(iVar2);
    uVar4 = *(arg2 + 0x34);
    *(arg2 + 0x34) = ((uVar4 & 0xff00) + uVar4 * 0x10000) * 0x100 + (uVar4 >> 8 & 0xff00) + (uVar4 >> 0x18);
    uVar4 = *(arg2 + 0x28);
    *(arg2 + 0x28) = (uVar4 * 0x10000 + (uVar4 & 0xff00)) * 0x100 + (uVar4 >> 8 & 0xff00) + (uVar4 >> 0x18);
    uVar4 = *(arg2 + 0x10);
    *(arg2 + 0x10) = (uVar4 * 0x10000 + (uVar4 & 0xff00)) * 0x100 + (uVar4 >> 8 & 0xff00) + (uVar4 >> 0x18);
    return 0;
}


/* fcn.000132d8 @ 0x132d8 */

ulong fcn.000132d8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong extraout_RAX;
    ulong extraout_RAX_00;
    ulong uVar2;
    int64_t *arg2_00;
    ushort uVar3;
    unkbyte6 Var4;
    uchar uVar5;
    unkbyte7 Var6;
    int64_t iStackX_8;
    
    uVar5 = arg4;
    Var6 = arg4 >> 8;
    uVar3 = arg3;
    Var4 = arg3 >> 0x10;
    if (*(arg1 + 0x9b) == 2) {
        arg2_00 = &iStackX_8;
        iVar1 = fcn.00011918(*(arg1 + 0x9f),arg2_00);
        if (iVar1 < 0) {
            return 0x8000000000000007;
        }
        fcn.00013134(iStackX_8,CONCAT71(arg2_00 >> 8,1),CONCAT62(Var4,uVar3),CONCAT71(Var6,uVar5));
        uVar2 = extraout_RAX;
    }
    else {
        if (*(arg1 + 0x9b) != 1) {
            return 0x8000000000000007;
        }
        fcn.00012f64(arg1,CONCAT71(arg2 >> 8,1),arg3,CONCAT71(Var6,*(arg1 + 0xa7)));
        uVar2 = extraout_RAX_00;
    }
    return uVar2;
}


/* fcn.000137f0 @ 0x137f0 */

int64_t fcn.000137f0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    ulong *arg2_00;
    uint64_t noname_2;
    uchar uVar2;
    unkbyte7 Var3;
    int iVar4;
    ulong uStackX_8;
    ulong uStackX_10;
    uchar uStackX_18;
    unkbyte7 StackX_19;
    int64_t aiStack_48 [2];
    
    uVar2 = arg4;
    Var3 = arg4 >> 8;
    _uStackX_18 = CONCAT71(arg3 >> 8,0xff);
    noname_2 = *(arg1 + 0x42) >> 8;
    iVar4 = 10;
    iVar1 = arg1;
    do {
        if (*(arg1 + 0x9b) == 2) {
            iVar1 = fcn.00011918(*(arg1 + 0x9f),aiStack_48);
            if (iVar1 < 0) {
                return -0x7ffffffffffffff9;
            }
            fcn.00013134(aiStack_48[0],0,noname_2,CONCAT71(Var3,uVar2));
            iVar1 = extraout_RAX;
        }
        else {
            if (*(arg1 + 0x9b) != 1) {
                return -0x7ffffffffffffff2;
            }
            uVar2 = *(arg1 + 0xa7);
            fcn.00012f64(iVar1,0,noname_2,CONCAT71(Var3,uVar2));
            iVar1 = extraout_RAX_00;
        }
        if (iVar1 < 0) {
            return iVar1;
        }
        uStackX_8 = 0xff00000000000000;
        uStackX_10 = 0x6ff000000000000;
        if (arg2 + 0x3a == &uStackX_8) {
code_r0x00013908:
            if (arg2 + 0x43 == &uStackX_10) {
code_r0x00013966:
                *(arg4 + 0x14) = 0;
                return -0x7ffffffffffffff9;
            }
            noname_2 = 8;
            arg2_00 = &uStackX_10;
            iVar1 = fcn.000111e0(arg2 + 0x43,arg2_00,8);
            if (iVar1 == 0) goto code_r0x00013966;
        }
        else {
            noname_2 = 8;
            arg2_00 = &uStackX_8;
            iVar1 = fcn.000111e0(arg2 + 0x3a,arg2_00,8);
            if (iVar1 == 0) goto code_r0x00013908;
        }
        if ((*(arg2 + 8) == 0) && (*(arg2 + 0x10) != 0)) break;
        iVar1 = 0x57642;
        fcn.00015130(0x57642);
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar1 = fcn.0001398c(arg2,arg2_00,&uStackX_18);
    return iVar1;
}


/* fcn.000146a0 @ 0x146a0 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

uint64_t fcn.000146a0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint32_t auStackX_8 [2];
    uint64_t uStackX_10;
    uint auStackX_20 [2];
    uint32_t var_30h;
    int32_t var_48h;
    int64_t aiStack_48 [4];
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    
    uVar5 = *(arg1 + 0x34);
    uVar3 = 0;
    uStackX_10 = arg2 & 0xffffffffffffff00;
    auStackX_8[0] = (uVar5 * 0x10000 + (uVar5 & 0xff00)) * 0x100 + (uVar5 >> 8 & 0xff00) + (uVar5 >> 0x18);
    uVar5 = 1;
    aiStack_48[1] = 0xff00000000000000;
    aiStack_48[2] = 0x3ff000000000000;
    auStackX_20[0] = 0x100;
    if (1 < auStackX_8[0]) {
        do {
            if (*((auStackX_8[0] - uVar5) + 0x38 + arg1) != -1) break;
            uVar5 = uVar5 + 1;
        } while (uVar5 < auStackX_8[0]);
    }
    uVar4 = (auStackX_8[0] - uVar5) - 4;
    uVar1 = (**(*0x164a0 + 0x50))(6,0x100,aiStack_48);
    if (uVar1 < 0) {
        return uVar1;
    }
    if (((arg1 + 0x3a == aiStack_48 + 1) || (iVar2 = fcn.000111e0(arg1 + 0x3a,aiStack_48 + 1,8), iVar2 == 0)) &&
       ((arg1 + 0x43 == aiStack_48 + 2 || (iVar2 = fcn.000111e0(arg1 + 0x43,aiStack_48 + 2,8), iVar2 == 0)))) {
        if ((((*(uVar4 + 0x38 + arg1) == -0x10) && (*(uVar4 + 0x3c + arg1) == -0xf)) && (*(uVar4 + 0x39 + arg1) == '\0')
            ) && ((*(uVar4 + 0x3a + arg1) == '\0' && (*(uVar4 + 0x3b + arg1) == '\0')))) {
            if (*(arg1 + 0x4b) != -0x10) goto code_r0x0001476b;
            uVar1 = fcn.00013bd4(arg1 + 0x4c,aiStack_48[0],auStackX_20,auStackX_8);
            if (uVar1 < 0) {
                return uVar1;
            }
            *(arg3 + 0x18) = 0;
            uVar1 = uVar3;
            if (auStackX_8[0] != 0) {
                do {
                    if (3 < uVar1) break;
                    uVar5 = uVar1 + 1;
                    *(uVar1 + 0x18 + arg3) = *(uVar1 + aiStack_48[0]);
                    uVar1 = uVar5;
                } while (uVar5 < auStackX_8[0]);
            }
            uVar1 = fcn.00013bd4(auStackX_8[0] + 0x14 + uStackX_10 + 0x38 + arg1,aiStack_48[0],auStackX_20,auStackX_8
                                );
            if (uVar1 < 0) {
                return uVar1;
            }
            *(arg3 + 0x14) = 0;
            uVar1 = uVar3;
            if (auStackX_8[0] != 0) {
                do {
                    if (3 < uVar1) break;
                    uVar5 = uVar1 + 1;
                    *(arg3 + 0x14 + uVar1) = *(uVar1 + aiStack_48[0]);
                    uVar1 = uVar5;
                } while (uVar5 < auStackX_8[0]);
            }
        }
        else {
            uVar3 = 0x8000000000000007;
        }
        (**(*0x164a0 + 0x58))(aiStack_48[0]);
    }
    else {
code_r0x0001476b:
        uVar3 = 0x8000000000000007;
    }
    return uVar3;
}


/* fcn.00014418 @ 0x14418 */

ulong fcn.00014418(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t arg2_00;
    int64_t *piVar4;
    unkbyte7 Var5;
    uint32_t uVar6;
    int64_t iVar7;
    int64_t iStackX_20;
    uchar in_stack_00000030;
    char *in_stack_00000038;
    ulong in_stack_00000040;
    char in_stack_00000060;
    char in_stack_00000068;
    
    iVar3 = 0x1700000006000000;
    if (arg1 == 0) {
        return 0x8000000000000007;
    }
    iVar7 = arg3;
    iStackX_20 = arg4;
    if (in_stack_00000060 == '\0') goto code_r0x0001454d;
    iVar7 = arg2;
    fcn.00013a24(arg3,arg2,*(arg1 + 0x42),*(arg1 + 0x7c));
    arg2_00 = *(arg2 + 0x14);
    fcn.00013a88(arg3,iVar7,arg2_00,*(arg2 + 0x18));
    fcn.00013b20(arg3);
    if (*(arg1 + 0x3e) == 0x100) {
        iVar3 = 0x700000006000000;
    }
    iVar2 = arg3;
    iStackX_20 = iVar3;
    fcn.00013d58(arg3,iVar7,CONCAT71(arg2_00 >> 8,0xf8));
    uVar6 = 8;
    fcn.00013d94(iVar2,iVar7,&stack0x00000028,8);
    piVar4 = &iStackX_20;
    fcn.00013d94(arg3,iVar7,piVar4,uVar6);
    iVar2 = CONCAT71(piVar4 >> 8,0xf0);
    iVar3 = arg3;
    fcn.00013d58(arg3,iVar7,iVar2);
    arg2 = iVar7;
    if (*(arg1 + 0x3e) == 0x100) {
        iVar2 = CONCAT71(iVar2 >> 8,0xf0);
        fcn.00013d58(iVar3,iVar7,iVar2);
        iVar2 = CONCAT71(iVar2 >> 8,0xf1);
        fcn.00013d58(iVar3,iVar7,iVar2);
        arg2 = iVar7;
        if (*(arg1 + 0x3e) != 0x100) goto code_r0x00014520;
        iVar7 = CONCAT71(iVar2 >> 8,0xf0);
    }
    else {
code_r0x00014520:
        iVar7 = CONCAT71(iVar2 >> 8,0xf2);
        iVar3 = arg3;
        fcn.00013d58(arg3,arg2,iVar7);
        iVar7 = CONCAT71(iVar7 >> 8,1);
    }
    fcn.00013d58(iVar3,arg2,iVar7);
    iVar7 = CONCAT71(iVar7 >> 8,0xf0);
    fcn.00013d58(arg3,arg2,iVar7);
code_r0x0001454d:
    iVar7 = CONCAT71(iVar7 >> 8,0xf2);
    iVar3 = arg3;
    fcn.00013d58(arg3,arg2,iVar7);
    if (*(arg1 + 0x3e) == 0x100) {
        iVar7 = 0;
        cVar1 = *in_stack_00000038;
        while (cVar1 != '\0') {
            iVar7 = iVar7 + 1;
            cVar1 = in_stack_00000038[iVar7];
        }
        fcn.00013d94(iVar3,arg2,in_stack_00000038,iVar7);
    }
    else {
        fcn.00013d58(iVar3,arg2,CONCAT71(iVar7 >> 8,in_stack_00000030));
    }
    fcn.00013d94(arg3,arg2,in_stack_00000040,1);
    iVar7 = CONCAT71(in_stack_00000040 >> 8,0xf3);
    iVar3 = arg3;
    fcn.00013d58(arg3,arg2,iVar7);
    if (in_stack_00000068 != '\0') {
        iVar7 = CONCAT71(iVar7 >> 8,0xf1);
        fcn.00013d58(iVar3,arg2,iVar7);
        Var5 = iVar7 >> 8;
        iVar7 = CONCAT71(Var5,0xf1);
        if (*(arg1 + 0x3e) != 0x100) {
            iVar7 = CONCAT71(Var5,0xf3);
        }
        fcn.00013d58(iVar3,arg2,iVar7);
        iVar7 = CONCAT71(iVar7 >> 8,0xf1);
        iVar3 = arg3;
        fcn.00013d58(arg3,arg2,iVar7);
        fcn.00013d58(iVar3,arg2,CONCAT71(iVar7 >> 8,0xf9));
        fcn.00013b54(iVar3);
        uVar6 = *(arg3 + 0x34);
        *(arg3 + 0x34) = (uVar6 * 0x10000 + (uVar6 & 0xff00)) * 0x100 + (uVar6 >> 8 & 0xff00) + (uVar6 >> 0x18);
        uVar6 = *(arg3 + 0x28);
        *(arg3 + 0x28) = (uVar6 * 0x10000 + (uVar6 & 0xff00)) * 0x100 + (uVar6 >> 8 & 0xff00) + (uVar6 >> 0x18);
        uVar6 = *(arg3 + 0x10);
        *(arg3 + 0x10) = (uVar6 * 0x10000 + (uVar6 & 0xff00)) * 0x100 + (uVar6 >> 8 & 0xff00) + (uVar6 >> 0x18);
    }
    return 0;
}


/* fcn.00014e64 @ 0x14e64 */

void fcn.00014e64(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    int64_t iVar2;
    unkbyte7 Var3;
    int iVar4;
    
    Var3 = arg2 >> 8;
    uVar1 = *(arg1 + 0x42);
    iVar2 = fcn.00014418(arg1,arg2,arg3,arg4);
    if (-1 < iVar2) {
        iVar4 = uVar1 * 0x100;
        fcn.000132d8(arg1,CONCAT71(Var3,1),CONCAT22(iVar4 >> 0x10,iVar4 + (uVar1 >> 8)),arg3);
    }
    return;
}


/* fcn.00014c58 @ 0x14c58 */

int64_t fcn.00014c58(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    uint in_register_00000014;
    int64_t arg3_00;
    
    arg3_00 = CONCAT44(in_register_00000014,arg2);
    if (*(arg3_00 + 0x14) != 0) {
        iVar2 = arg3;
        fcn.000111c0(arg3,0x200);
        iVar1 = fcn.00014a6c(arg1,arg3,iVar2,arg3_00);
        if (iVar1 < 0) {
            return iVar1;
        }
        fcn.000111c0(arg3,0x200);
        iVar2 = fcn.000137f0(arg1,arg3,iVar2,arg3_00);
        if (iVar2 < 0) {
            return iVar2;
        }
    }
    fcn.000111c0(arg3_00,0x8d);
    return 0;
}


/* fcn.0001398c @ 0x1398c */

ulong fcn.0001398c(int64_t arg1,ulong noname_1,int64_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    uVar4 = *(arg1 + 0x34);
    uVar4 = ((uVar4 & 0xff00) + uVar4 * 0x10000) * 0x100 + (uVar4 >> 8 & 0xff00) + (uVar4 >> 0x18);
    if (*(arg1 + 0x38) == -6) {
        return 0;
    }
    if (uVar4 != 0) {
        uVar2 = 1;
        if (1 < uVar4) {
            uVar3 = 1;
            do {
                if (*((uVar4 - uVar3) + 0x38 + arg1) != -1) break;
                uVar2 = uVar2 + 1;
                uVar3 = uVar2;
            } while (uVar3 < uVar4);
        }
        uVar4 = uVar4 - uVar2;
        if (((*((uVar4 - 4) + 0x38 + arg1) == -0x10) && (*(uVar4 + 0x38 + arg1) == -0xf)) &&
           (cVar1 = *((uVar4 - 3) + 0x38 + arg1), *arg2 = cVar1, cVar1 == '\0')) {
            return 0;
        }
    }
    return 0x8000000000000007;
}


/* fcn.00013d58 @ 0x13d58 */

ulong fcn.00013d58(int64_t arg1,ulong noname_1,int64_t arg2)

{
    uint8_t uVar1;
    char in_stack_00000028;
    
    uVar1 = arg2;
    if (0x200 < *(arg1 + 0x10) + 1 + 0x14) {
        return 0x8000000000000005;
    }
    if (in_stack_00000028 == '\0') {
        uVar1 = uVar1 & 0x3f;
    }
    *(*(arg1 + 0x34) + 0x38 + arg1) = uVar1;
    *(arg1 + 0x34) = *(arg1 + 0x34) + 1;
    *(arg1 + 0x28) = *(arg1 + 0x28) + 1;
    *(arg1 + 0x10) = *(arg1 + 0x10) + 1;
    return 0;
}


/* fcn.00013d94 @ 0x13d94 */

ulong fcn.00013d94(int64_t arg1,int64_t arg2,uint32_t arg3,uint32_t arg4)

{
    uint32_t uVar1;
    uint8_t uVar2;
    ulong uVar3;
    char cVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int iVar7;
    uint in_R8;
    uint8_t *puVar8;
    uint in_R9;
    char in_stack_00000030;
    
    puVar8 = CONCAT44(in_R8,arg3);
    uVar1 = *(arg1 + 0x34);
    if (CONCAT44(in_R9,arg4) == 1) {
        if ((*puVar8 < 0x40) && (in_stack_00000030 == '\0')) {
            uVar3 = fcn.00013d58(arg1,arg2,CONCAT71(puVar8 >> 8,*puVar8));
            return uVar3;
        }
    }
    else if (0xf < CONCAT44(in_R9,arg4)) {
        uVar2 = arg4 >> 8;
        if (CONCAT44(in_R9,arg4) < 0x800) {
            if (0x200 < CONCAT44(in_R9,arg4) + 0x16 + *(arg1 + 0x10)) {
                return 0x8000000000000005;
            }
            iVar7 = 2;
            cVar4 = (uVar2 & 7) + (in_stack_00000030 + '\f') * '\x10';
            uVar5 = uVar1 + 1;
        }
        else {
            if (0xffffff < CONCAT44(in_R9,arg4)) {
                return 0x8000000000000002;
            }
            if (0x200 < CONCAT44(in_R9,arg4) + 0x18 + *(arg1 + 0x10)) {
                return 0x8000000000000005;
            }
            *(uVar1 + 1 + 0x38 + arg1) = arg4 >> 0x10;
            cVar4 = in_stack_00000030 * '\x02' + -0x20;
            iVar7 = 4;
            *(uVar1 + 2 + 0x38 + arg1) = uVar2;
            uVar5 = uVar1 + 3;
        }
        *(uVar5 + 0x38 + arg1) = arg4;
        goto code_r0x00013eb1;
    }
    if (0x200 < CONCAT44(in_R9,arg4) + 0x15 + *(arg1 + 0x10)) {
        return 0x8000000000000005;
    }
    cVar4 = (in_stack_00000030 + '\x04') * ' ' + (arg4 & 0xf);
    iVar7 = 1;
code_r0x00013eb1:
    *(uVar1 + 0x38 + arg1) = cVar4;
    if (CONCAT44(in_R9,arg4) != 0) {
        uVar6 = 0;
        uVar5 = iVar7 + uVar1;
        do {
            if (in_stack_00000030 == '\0') {
                uVar2 = puVar8[CONCAT44(in_R9,arg4) + (-1 - uVar6)];
            }
            else {
                uVar2 = puVar8[uVar6];
            }
            *(uVar5 + 0x38 + arg1) = uVar2;
            uVar5 = uVar5 + 1;
            uVar6 = uVar5 - (iVar7 + uVar1);
        } while (uVar6 < CONCAT44(in_R9,arg4));
    }
    *(arg1 + 0x34) = *(arg1 + 0x34) + arg4 + iVar7;
    *(arg1 + 0x28) = *(arg1 + 0x28) + arg4 + iVar7;
    *(arg1 + 0x10) = *(arg1 + 0x10) + arg4 + iVar7;
    return 0;
}


/* fcn.00013a24 @ 0x13a24 */

ulong fcn.00013a24(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    fcn.000111c0(arg1,0x15);
    *(arg1 + 4) = arg2 * 0x100 + (arg2 >> 8 & 0xff);
    *(arg1 + 6) = arg3 * 0x100 + (arg3 >> 8 & 0xff);
    return 0;
}


/* fcn.00013a88 @ 0x13a88 */

ulong fcn.00013a88(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar2 = arg3;
    fcn.000111c0(arg1 + 0x14,0x19);
    *(arg1 + 0x1c) = 0;
    uVar1 = arg2;
    *(arg1 + 0x14) = ((uVar1 & 0xff00) + uVar1 * 0x10000) * 0x100 + (arg2 >> 8 & 0xff00) + (uVar1 >> 0x18);
    *(arg1 + 0x18) = ((uVar2 & 0xff00) + uVar2 * 0x10000) * 0x100 + (arg3 >> 8 & 0xff00) + (uVar2 >> 0x18);
    *(arg1 + 0x10) = 0x18;
    return 0;
}


/* fcn.00013b20 @ 0x13b20 */

void fcn.00013b20(int64_t arg1)

{
    fcn.000111c0(arg1 + 0x2c,0xd);
    *(arg1 + 0x32) = 0;
    *(arg1 + 0x28) = *(arg1 + 0x28) + 0xc;
    *(arg1 + 0x10) = *(arg1 + 0x10) + 0xc;
    return;
}


/* fcn.00013f20 @ 0x13f20 */

int64_t fcn.00013f20(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar uVar1;
    int64_t iVar2;
    uint64_t arg2_00;
    uchar *puVar3;
    int64_t iStackX_10;
    
    iStackX_10 = arg2;
    iVar2 = (**(*0x164a0 + 0x50))(6,arg4,&iStackX_10);
    arg2_00 = 0;
    if (-1 < iVar2) {
        if (arg4 != 0) {
            puVar3 = arg4 + -1 + arg3;
            do {
                uVar1 = *puVar3;
                puVar3 = puVar3 + -1;
                *(arg2_00 + iStackX_10) = uVar1;
                arg2_00 = arg2_00 + 1;
            } while (arg2_00 < arg4);
        }
        fcn.00013d94(arg1,arg2_00,iStackX_10,arg4);
        (**(*0x164a0 + 0x58))(iStackX_10);
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.00013b54 @ 0x13b54 */

ulong fcn.00013b54(int64_t arg1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    
    uVar1 = *(arg1 + 0x34);
    *(uVar1 + 0x38 + arg1) = 0xf0;
    *(uVar1 + 1 + 0x38 + arg1) = 0;
    *(uVar1 + 2 + 0x38 + arg1) = 0;
    *(uVar1 + 3 + 0x38 + arg1) = 0;
    *(uVar1 + 4 + 0x38 + arg1) = 0xf1;
    *(arg1 + 0x34) = *(arg1 + 0x34) + 5;
    *(arg1 + 0x28) = *(arg1 + 0x28) + 5;
    *(arg1 + 0x10) = *(arg1 + 0x10) + 5;
    uVar2 = *(arg1 + 0x34) & 3;
    uVar3 = 4 - uVar2;
    if (uVar2 == 0) {
        uVar3 = 0;
    }
    uVar2 = 0;
    if (uVar3 != 0) {
        do {
            uVar4 = uVar2 + 1;
            *(uVar2 + *(arg1 + 0x34) + 0x38 + arg1) = 0;
            uVar2 = uVar4;
        } while (uVar4 < uVar3);
    }
    *(arg1 + 0x28) = *(arg1 + 0x28) + uVar3;
    *(arg1 + 0x10) = *(arg1 + 0x10) + uVar3;
    return 0;
}


/* fcn.00013bd4 @ 0x13bd4 */

uint64_t fcn.00013bd4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    bool bVar4;
    uint64_t uVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uint8_t *in_stack_00000028;
    
    uVar5 = 0;
    uVar1 = *arg1;
    *arg4 = 0;
    *in_stack_00000028 = 0;
    if (uVar1 < '\0') {
        bVar4 = false;
        if ((uVar1 & 0xc0) == 0x80) {
            *in_stack_00000028 = 1;
            *arg4 = uVar1 & 0xf;
            bVar4 = false;
            if ((uVar1 & 0x20) == 0) {
                bVar4 = true;
            }
        }
        if ((uVar1 & 0xe0) == 0xc0) {
            uVar2 = *(arg1 + 1);
            *in_stack_00000028 = 2;
            *arg4 = (uVar1 & 7) * 0x100 + uVar2;
            if ((uVar1 & 0x10) == 0) {
                bVar4 = true;
            }
        }
        if ((uVar1 & 0xfc) == 0xe0) {
            uVar1 = *(arg1 + 1);
            uVar2 = *(arg1 + 2);
            *in_stack_00000028 = 4;
            *arg4 = uVar1 * 0x10000 + uVar2 * 0x100 + *(arg1 + 3);
        }
        uVar3 = *arg4;
        if (uVar3 != 0) {
            if (arg2 != 0) {
                if (uVar3 <= *arg3) {
                    if (*arg3 != 0) {
                        fcn.000111c0(arg2,*arg3);
                    }
                    uVar3 = *arg4;
                    if (uVar3 != 0) {
                        uVar8 = *in_stack_00000028;
                        do {
                            iVar6 = uVar5;
                            if (bVar4) {
                                uVar5 = (uVar3 - iVar6) - 1;
                            }
                            uVar7 = iVar6 + 1;
                            *(uVar5 + arg2) = *(uVar8 + arg1);
                            uVar8 = uVar8 + 1;
                            uVar5 = uVar7;
                        } while (uVar7 < uVar3);
                        return 0;
                    }
                    return 0;
                }
                uVar5 = 0x8000000000000005;
            }
            *arg3 = uVar3;
            return uVar5;
        }
    }
    else {
        *arg4 = 1;
        if (*arg3 == 0) {
            *arg3 = 1;
            return 0x8000000000000005;
        }
        if (arg2 != 0) {
            *arg2 = uVar1 & 0x3f;
            return 0;
        }
    }
    return 0x8000000000000007;
}


/* fcn.00014a6c @ 0x14a6c */

void fcn.00014a6c(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    uint16_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t noname_1;
    uint64_t arg2_00;
    
    uVar1 = *(arg1 + 0x42);
    noname_1 = arg2;
    fcn.00013a24(arg2,arg2,uVar1,*(arg1 + 0x7c));
    arg2_00 = *(arg3 + 0x14);
    fcn.00013a88(arg2,noname_1,arg2_00,*(arg3 + 0x18));
    fcn.00013b20(arg2);
    fcn.00013d58(arg2,noname_1,CONCAT71(arg2_00 >> 8,0xfa));
    uVar2 = *(arg2 + 0x34) & 3;
    uVar3 = 4 - uVar2;
    if (uVar2 == 0) {
        uVar3 = 0;
    }
    uVar4 = 0;
    if (uVar3 != 0) {
        do {
            uVar2 = uVar4 + 1;
            *(uVar4 + *(arg2 + 0x34) + 0x38 + arg2) = 0;
            uVar4 = uVar2;
        } while (uVar2 < uVar3);
    }
    *(arg2 + 0x28) = *(arg2 + 0x28) + uVar3;
    *(arg2 + 0x10) = *(arg2 + 0x10) + uVar3;
    uVar4 = *(arg2 + 0x34);
    *(arg2 + 0x34) = (uVar4 * 0x10000 + (uVar4 & 0xff00)) * 0x100 + (uVar4 >> 8 & 0xff00) + (uVar4 >> 0x18);
    uVar4 = *(arg2 + 0x28);
    iVar5 = (uVar4 * 0x10000 + (uVar4 & 0xff00)) * 0x100 + (uVar4 >> 8 & 0xff00) + (uVar4 >> 0x18);
    *(arg2 + 0x28) = iVar5;
    uVar4 = *(arg2 + 0x10);
    *(arg2 + 0x10) = (uVar4 * 0x10000 + (uVar4 & 0xff00)) * 0x100 + (uVar4 >> 8 & 0xff00) + (uVar4 >> 0x18);
    fcn.000132d8(arg1,CONCAT71(iVar5 >> 8,1),uVar1 * 0x100 + (uVar1 >> 8),arg2);
    return;
}


/* fcn.000148a8 @ 0x148a8 */

ulong fcn.000148a8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    int64_t iVar2;
    int64_t arg2_00;
    uint64_t arg2_01;
    uchar *puVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t in_stack_00000040;
    uint8_t in_stack_00000048;
    ulong auStack_18 [2];
    
    auStack_18[0] = 0x100000000000000;
    arg2_00 = arg2;
    fcn.00013a24(arg3,arg2,*(arg1 + 0x42),*(arg1 + 0x7c));
    arg2_01 = *(arg2 + 0x14);
    fcn.00013a88(arg3,arg2_00,arg2_01,*(arg2 + 0x18));
    fcn.00013b20(arg3);
    iVar2 = arg3;
    fcn.00013d58(arg3,arg2_00,CONCAT71(arg2_01 >> 8,0xf8));
    uVar4 = 8;
    fcn.00013d94(iVar2,arg2_00,auStack_18,8);
    puVar3 = &stack0x00000030;
    fcn.00013d94(arg3,arg2_00,puVar3,uVar4);
    iVar2 = arg3;
    fcn.00013d58(arg3,arg2_00,CONCAT71(puVar3 >> 8,0xf0));
    puVar3 = &stack0x00000038;
    fcn.00013d94(iVar2,arg2_00,puVar3,uVar4);
    fcn.00013d58(arg3,arg2_00,CONCAT71(puVar3 >> 8,0xf2));
    if (*(arg1 + 0x3e) == 0x100) {
        iVar2 = 0;
        do {
            iVar5 = iVar2 + 1;
            pcVar1 = iVar2 + 0x161e9;
            iVar2 = iVar5;
        } while (*pcVar1 != '\0');
        fcn.00013d94(arg3,arg2_00,0x161e8,iVar5);
    }
    else {
        fcn.00013d58(arg3,arg2_00,0);
    }
    fcn.00013f20(arg3,arg2_00,in_stack_00000040,in_stack_00000048);
    iVar5 = CONCAT71(in_stack_00000040 >> 8,0xf3);
    iVar2 = arg3;
    fcn.00013d58(arg3,arg2_00,iVar5);
    iVar5 = CONCAT71(iVar5 >> 8,0xf1);
    fcn.00013d58(iVar2,arg2_00,iVar5);
    fcn.00013d58(iVar2,arg2_00,CONCAT71(iVar5 >> 8,0xf9));
    fcn.00013b54(iVar2);
    uVar4 = *(arg3 + 0x34);
    *(arg3 + 0x34) = (uVar4 * 0x10000 + (uVar4 & 0xff00)) * 0x100 + (uVar4 >> 8 & 0xff00) + (uVar4 >> 0x18);
    uVar4 = *(arg3 + 0x28);
    *(arg3 + 0x28) = (uVar4 * 0x10000 + (uVar4 & 0xff00)) * 0x100 + (uVar4 >> 8 & 0xff00) + (uVar4 >> 0x18);
    uVar4 = *(arg3 + 0x10);
    *(arg3 + 0x10) = (uVar4 * 0x10000 + (uVar4 & 0xff00)) * 0x100 + (uVar4 >> 8 & 0xff00) + (uVar4 >> 0x18);
    return 0;
}


/* fcn.00014efc @ 0x14efc */

uint64_t fcn.00014efc(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x16490 != 0) {
        puVar2 = *0x16498 + 8;
        in_RAX = *0x16498;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x16490);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00011200 @ 0x11200 */

void fcn.00011200(void)

{
    return;
}


/* fcn.00014f70 @ 0x14f70 */

void fcn.00014f70(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00014f40(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000111c0(arg1_00,arg1);
    }
    return;
}


