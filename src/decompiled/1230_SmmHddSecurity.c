// decompiled by r2ghidra: 1230_SmmHddSecurity.pe32
// functions: 46

/* entry0 @ 0x112d4 */

int64_t entry0(uint32_t param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t arg1;
    
    fcn.00011348(param_1,param_2);
    arg1 = 0x15300;
    *0x15400 = -0x7fffffffffffffff;
    iVar1 = section..text(0x15300);
    if (iVar1 == 0) {
        iVar1 = fcn.00013530(arg1,param_2);
        if ((-1 < iVar1) || (*0x15400 < 0)) {
            *0x15400 = iVar1;
        }
        fcn.000110d0(0x15300,-1);
    }
    iVar1 = *0x15400;
    if (*0x15400 < 0) {
        fcn.00011714();
    }
    return iVar1;
}


/* fcn.00013694 @ 0x13694 */

void fcn.00013694(void)

{
    return;
}


/* fcn.00011348 @ 0x11348 */

void fcn.00011348(uint32_t arg1,int64_t arg2)

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
    *0x15270 = *(arg2 + 0x60);
    puVar9 = NULL;
    uStackX_10 = 0;
    *0x15268 = arg2;
    (**(*0x15270 + 0x140))(0x150f0,0,&uStackX_10);
    (**(uStackX_10 + 8))(uStackX_10,0x15278);
    (**(*0x15270 + 0x140))(0x15120,0,aiStackX_18);
    uStackX_8 = 0;
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,0);
    *0x15458 = fcn.000136dc();
    (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_8,*0x15458);
    *0x15450 = uStackX_8 >> 5;
    uStackX_8 = 0;
    (**(*(arg2 + 0x60) + 0x140))(0x15020,0,&uStackX_8);
    (**(uStackX_8 + 8))(uStackX_8,0x15280);
    fcn.0001389c();
    fcn.0001383c(0x15100,0x15290);
    (**(*0x15278 + 0xd0))(0x15070,0,0x15298);
    (**(*0x15280 + 0xc0))(0x15030,0x1396c,0x152b0);
    (**(*0x15280 + 0xc0))(0x15110,0x13984,0x152c0);
    (**(*0x15280 + 0xc0))(0x150c0,0x139dc,0x152a0);
    iVar4 = fcn.00013918();
    if (iVar4 == 0) {
        *0x15440 = 0x34365f424b434f4c;
        *0x15448 = 0x151b8;
        (**(*0x15280 + 0x28))(*0x15280,0x15080,0x15440);
        *0x152c8 = 1;
    }
    puVar5 = fcn.0001389c();
code_r0x00011536:
    uVar1 = *puVar5;
    noname_0 = uVar1;
    if (uVar1 == 0xffff) {
        puVar5 = puVar9;
code_r0x00011542:
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
code_r0x000115ab:
            iVar4 = (**(*0x15278 + 0xd0))(0x15090,0,0x152d0);
            if (iVar4 < 0) {
                *0x152d0 = puVar9;
            }
            (**(*0x15270 + 0x140))(0x15120,0,aiStackX_18);
            uStackX_10 = 0;
            (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_10,0);
            *0x15418 = fcn.000136dc();
            (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],&uStackX_10);
            *0x15438 = uStackX_10 >> 5;
            for (puVar5 = fcn.0001389c(); *puVar5 != 0xffff; puVar5 = puVar5 + puVar5[1]) {
                if (*puVar5 == 6) goto code_r0x0001165c;
            }
            puVar5 = puVar9;
code_r0x0001165c:
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
            *0x152f8 = (1LL << (uVar7 & 0x3f)) + -1;
            (**(*0x15278 + 0xc0))(0x150e0,0x1401c,0x15428);
            (**(*0x15278 + 0xc0))(0x150a0,0x142f8,0x15430);
            return;
        }
        if ((*0x151c8 == *(puVar5 + 4)) && (*0x151d0 == *(puVar5 + 8))) goto code_r0x000115ab;
    }
    else if (uVar1 == 4) goto code_r0x00011542;
    puVar5 = puVar5 + puVar5[1];
    goto code_r0x00011536;
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
    
    //[00] -r-x section size 16384 named .text
    fcn.00013694();
    *(arg1 + 0xf8) = 0;
    if ((*0x151e0 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
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


/* fcn.00013530 @ 0x13530 */

int64_t fcn.00013530(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uStackX_8;
    int64_t iStackX_10;
    ulong *apuStackX_18 [2];
    
    *0x15460 = 0;
    uStackX_8 = 0xd1;
    *0x15468 = 0;
    *0x15470 = 0;
    iStackX_10 = arg2;
    iVar1 = (**(*0x15278 + 0xe0))(0x12bf8,0x15140,&iStackX_10);
    if (-1 < iVar1) {
        iVar1 = (**(*0x15278 + 0xe0))(0x13110,0x15150,&iStackX_10);
        if (-1 < iVar1) {
            iVar1 = (**(*0x15278 + 0xe0))(0x126ac,0x15178,&iStackX_10);
            if (-1 < iVar1) {
                iVar1 = (**(*0x15278 + 0xd0))(0x15130,0,apuStackX_18);
                if (iVar1 < 0) {
                    iVar1 = -0x7ffffffffffffffd;
                }
                else {
                    iVar1 = (**apuStackX_18[0])(apuStackX_18[0],0x12f1c,&uStackX_8,&iStackX_10);
                    if (-1 < iVar1) {
                        iVar1 = (**(*0x15278 + 0xe0))(0x13310,0x151a8,&iStackX_10);
                        if (-1 < iVar1) {
                            iVar1 = (**(*0x15278 + 0xe0))(0x13394,0x15198,&iStackX_10);
                            if (-1 < iVar1) {
                                iVar1 = (**(*0x15278 + 0xe0))(0x134a0,0x15188,&iStackX_10);
                            }
                        }
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


/* fcn.00011714 @ 0x11714 */

void fcn.00011714(void)

{
    int64_t iVar1;
    char cVar2;
    
    fcn.00013804(*0x15418);
    (**(*0x15278 + 0xc0))(0x150e0,0,0x15428);
    (**(*0x15278 + 0xc0))(0x150a0,0,0x15430);
    if (*0x152c8 != '\0') {
        (**(*0x15280 + 0x28))(*0x15280,0x15080,0,0);
    }
    if (*0x152b0 != 0) {
        (**(*0x15280 + 0xc0))(0x15030,0,0x152b0);
    }
    if (*0x152c0 != 0) {
        (**(*0x15280 + 0xc0))(0x15110,0,0x152c0);
    }
    if (*0x152a0 != 0) {
        (**(*0x15280 + 0xc0))(0x150c0,0,0x152a0);
    }
    iVar1 = *0x15458;
    cVar2 = fcn.00013698(*0x15458);
    if (cVar2 != '\0') {
    //WARNING: Could not recover jumptable at 0x00013825. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x15278 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00013835. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x15270 + 0x48))(iVar1);
    return;
}


/* fcn.000136dc @ 0x136dc */

ulong fcn.000136dc(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x15278 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.0001389c @ 0x1389c */

int64_t fcn.0001389c(void)

{
    if (*0x15288 == 0) {
        fcn.0001383c(0x150b0,0x15288);
    }
    return *0x15288;
}


/* fcn.0001383c @ 0x1383c */

ulong fcn.0001383c(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x15268;
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


/* fcn.00013918 @ 0x13918 */

int64_t fcn.00013918(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*(*0x15280 + 0x98) != 0) {
        piVar2 = *(*0x15280 + 0xa0);
        do {
            if ((*piVar2 == *0x15080) && (piVar2[1] == *0x15088)) {
                return (*(*0x15280 + 0xa0))[uVar1 * 3 + 2];
            }
            uVar1 = uVar1 + 1;
            piVar2 = piVar2 + 3;
        } while (uVar1 < *(*0x15280 + 0x98));
    }
    return 0;
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


/* fcn.00013e3c @ 0x13e3c */

int64_t fcn.00013e3c(int64_t arg1,int64_t arg2)

{
    fcn.00013ddc((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.00013ddc @ 0x13ddc */

void fcn.00013ddc(int64_t arg1)

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


/* fcn.00011808 @ 0x11808 */

ulong fcn.00011808(int64_t arg1)

{
    char cVar1;
    char cVar2;
    int iVar3;
    
    iVar3 = 30000;
    do {
        cVar2 = 'd';
        do {
            cVar1 = in(*(arg1 + 0x1a));
            if (-1 < cVar1) {
                return 0;
            }
            fcn.00013e3c(10,*(arg1 + 0x1a));
            cVar2 = cVar2 + -1;
        } while (cVar2 != '\0');
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    return 0x8000000000000012;
}


/* fcn.0001190c @ 0x1190c */

void fcn.0001190c(void)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    
    uVar2 = 0;
    if (*0x15260 == 0) {
        uVar1 = *(*0x15278 + 0x98);
        if (uVar1 != 0) {
            piVar3 = *(*0x15278 + 0xa0);
            do {
                if ((*piVar3 == *0x15050) && (piVar3[1] == *0x15058)) break;
                uVar2 = uVar2 + 1;
                piVar3 = piVar3 + 3;
            } while (uVar2 < uVar1);
        }
        if (uVar2 != uVar1) {
            *0x15260 = *(*(*0x15278 + 0xa0) + 0x10 + uVar2 * 0x18);
        }
    }
    return;
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


/* fcn.0001185c @ 0x1185c */

ulong fcn.0001185c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    char cVar4;
    
    uVar2 = arg3;
    uVar3 = arg3 & 0xffffffff;
    do {
        if (uVar2 == 0) {
            return 0x8000000000000012;
        }
        cVar4 = 'd';
        do {
            uVar1 = in(*(arg1 + 0x1a));
            if ((arg2 & uVar1) != 0) {
                return 0;
            }
            fcn.00013e3c(10,*(arg1 + 0x1a));
            cVar4 = cVar4 + -1;
        } while (cVar4 != '\0');
        uVar2 = uVar3 - 1;
        uVar3 = uVar2;
    } while( true );
}


/* fcn.00013804 @ 0x13804 */

void fcn.00013804(int64_t arg1)

{
    char cVar1;
    
    cVar1 = fcn.00013698(arg1);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x00013825. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x15278 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00013835. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x15270 + 0x48))(arg1);
    return;
}


/* fcn.0001223c @ 0x1223c */

int64_t fcn.0001223c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t arg1_00;
    uint64_t uVar2;
    uint64_t auStackX_18 [2];
    
    auStackX_18[0] = 0;
    iVar1 = (**(*0x15278 + 200))(2,0x15010,0,auStackX_18,0);
    if ((iVar1 < 0) && (iVar1 == -0x7ffffffffffffffb)) {
        arg1_00 = fcn.000136dc(0x8000000000000005,auStackX_18[0]);
        if (arg1_00 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x15278 + 200))(2,0x15010,0,auStackX_18,arg1_00);
            if (-1 < iVar1) {
                uVar2 = 0;
                if ((auStackX_18[0] & 0xfffffffffffffff8) != 0) {
                    do {
                        iVar1 = (**(*0x15278 + 0xb8))(*(arg1_00 + uVar2 * 8),0x15010,arg2);
                        if ((-1 < iVar1) && (*(*arg2 + 0x18) == arg1)) {
                            iVar1 = 0;
                            break;
                        }
                        uVar2 = uVar2 + 1;
                    } while (uVar2 < auStackX_18[0] >> 3);
                }
                if (uVar2 == auStackX_18[0] >> 3) {
                    iVar1 = -0x7ffffffffffffff2;
                }
            }
            fcn.00013804(arg1_00);
        }
    }
    else {
        iVar1 = -0x7ffffffffffffff2;
    }
    return iVar1;
}


/* fcn.00011ec4 @ 0x11ec4 */

int64_t fcn.00011ec4(int64_t arg1,int64_t arg2)

{
    uchar *arg1_00;
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t arg1_01;
    bool bVar4;
    int64_t iStackX_8;
    int64_t aiStackX_18 [2];
    
    arg1_00 = *(arg1 + 0x40);
    iStackX_8 = 0;
    aiStackX_18[0] = 0;
    aiStackX_18[1] = 0x200;
    if ((*0x15250 == NULL) && (iVar1 = (**(*0x15278 + 0xd0))(0x15040,0,0x15250), iVar1 < 0)) {
        return iVar1;
    }
    arg1_01 = *0x15248;
    iVar1 = *0x15248 + 100;
    iVar2 = (**(*0x15278 + 0xd0))(0x150d0,0,&iStackX_8);
    if ((-1 < iVar2) && (iStackX_8 != 0)) {
        iVar1 = (**(iStackX_8 + 0x10))(iStackX_8,1,arg1_01,aiStackX_18 + 1,0x15240,aiStackX_18);
        if (iVar1 < 0) {
            return iVar1;
        }
        iVar1 = *0x15240 + 100;
        arg1_01 = *0x15240;
    }
    fcn.000111c0(arg1_00,0x48);
    fcn.000111c0(arg1_01,0x10);
    fcn.000111c0(iVar1,0x10);
    arg1_00[1] = arg1_00[1] & 0xfc;
    *arg1_00 = 0x82;
    *(arg1_00 + 2) = **(arg1 + 0x158);
    iVar3 = *0x15248;
    *(arg1_00 + 4) = 0;
    *(arg1_00 + 0x10) = 0;
    arg1_00[0x40] = 1;
    *(arg1_00 + 0x42) = 0;
    *(arg1_00 + 0x44) = 0x1000;
    *(arg1_00 + 0x28) = 0xef000000;
    *(arg1_00 + 0x2c) = 0x10;
    iVar2 = *0x15240;
    bVar4 = *0x15240 != 0;
    *(arg1_00 + 0x20) = 0;
    if (bVar4) {
        iVar3 = iVar2;
    }
    *(arg1_00 + 0x18) = iVar3;
    iVar1 = (***0x15250)(arg1,arg1_00,iVar1);
    if (aiStackX_18[0] != 0) {
        (**(iStackX_8 + 0x18))(iStackX_8);
        *0x15240 = 0;
    }
    *arg2 = *(arg1_01 + 8) << 8 | *(arg1_01 + 8) >> 8;
    return iVar1;
}


/* fcn.00012068 @ 0x12068 */

int64_t fcn.00012068(int64_t arg1,int64_t arg2)

{
    uchar *arg1_00;
    int64_t arg1_01;
    uint8_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    bool bVar4;
    int64_t iStackX_8;
    int64_t aiStackX_18 [2];
    uchar auStack_38 [16];
    
    arg1_00 = *(arg1 + 0x40);
    iStackX_8 = 0;
    aiStackX_18[0] = 0;
    aiStackX_18[1] = 0x200;
    if (*0x15248 == 0) {
        iVar2 = -0x7ffffffffffffffd;
    }
    else if ((*0x15250 != NULL) || (iVar2 = (**(*0x15278 + 0xd0))(0x15040,0,0x15250), -1 < iVar2)) {
        arg1_01 = *0x15248;
        iVar2 = (**(*0x15278 + 0xd0))(0x150d0,0,&iStackX_8);
        if ((iVar2 < 0) ||
           ((iStackX_8 == 0 ||
            (iVar2 = (**(iStackX_8 + 0x10))(iStackX_8,0,*0x15248,aiStackX_18 + 1,0x15240,aiStackX_18), -1 < iVar2)
            ))) {
            fcn.000111c0(arg1_00,0x48);
            fcn.000111c0(arg1_01,0x200);
            uVar1 = *(arg2 + 0x1e) & 1;
            *(arg1_01 + 1) = uVar1;
            if (uVar1 == 0) {
                iVar2 = *(arg2 + 8);
            }
            else {
                iVar2 = *(arg2 + 0x10);
            }
            if (arg1_01 + 2 != iVar2) {
                fcn.00011180(arg1_01 + 2,iVar2,0x20);
            }
            arg1_00[1] = arg1_00[1] & 0xfc;
            iVar3 = *0x15248;
            *arg1_00 = 0x81;
            *(arg1_00 + 2) = **(arg1 + 0x158);
            *(arg1_00 + 4) = 0;
            *(arg1_00 + 0x10) = 0;
            arg1_00[0x40] = 1;
            *(arg1_00 + 0x42) = 0;
            *(arg1_00 + 0x44) = 0x1000;
            *(arg1_00 + 0x28) = 0xef000200;
            *(arg1_00 + 0x2c) = 0x24;
            iVar2 = *0x15240;
            bVar4 = *0x15240 != 0;
            *(arg1_00 + 0x20) = 0;
            if (bVar4) {
                iVar3 = iVar2;
            }
            *(arg1_00 + 0x18) = iVar3;
            iVar2 = (***0x15250)(arg1,arg1_00,auStack_38);
            fcn.000111c0(arg1_01,0x200);
            if (aiStackX_18[0] != 0) {
                (**(iStackX_8 + 0x18))(iStackX_8);
                *0x15240 = 0;
            }
        }
    }
    return iVar2;
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


/* fcn.00013778 @ 0x13778 */

int64_t fcn.00013778(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000136dc(noname_0,arg2);
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
            fcn.00013804(arg3);
        }
    }
    return arg1_00;
}


/* fcn.00013a30 @ 0x13a30 */

ulong fcn.00013a30(int64_t arg1,int64_t arg2,int64_t arg3)

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
        puStackX_8 = fcn.000139e8(arg1);
        if (puStackX_8 == NULL) {
            iVar6 = (arg3 >> 0xc) + ((arg3 & 0xfffU) != 0);
            iVar3 = (**(*0x15280 + 0x60))(0,6,iVar6,&iStackX_20);
            if (-1 < iVar3) {
                iVar3 = (**(*0x15280 + 0x50))(6,0x48,&puStackX_8);
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
                    iVar3 = fcn.00013918();
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
                (**(*0x15280 + 0x68))(iStackX_20,iVar6);
            }
            uVar2 = 0x8000000000000009;
        }
        else {
            uVar2 = 0x8000000000000014;
        }
    }
    return uVar2;
}


/* fcn.000139e8 @ 0x139e8 */

int64_t * fcn.000139e8(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    
    iVar1 = fcn.00013918();
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


/* fcn.00013ba0 @ 0x13ba0 */

ulong fcn.00013ba0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
        iVar2 = fcn.000139e8(arg1);
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
                    iVar4 = (**(*0x15280 + 0x60))(0,6,((arg4 & 0xfffU) != 0) + (arg4 >> 0xc),&iStackX_10);
                    if (iVar4 < 0) {
                        return 0x8000000000000009;
                    }
                    if ((*(iVar2 + 0x20) != 0) && (iStackX_10 != *(iVar2 + 0x30))) {
                        fcn.00011180(iStackX_10,*(iVar2 + 0x30),*(iVar2 + 0x20));
                    }
                    if (*(iVar2 + 0x20) != 0) {
                        fcn.000111c0(*(iVar2 + 0x30),*(iVar2 + 0x20));
                    }
                    (**(*0x15280 + 0x68))(*(iVar2 + 0x30),(*(iVar2 + 0x20) >> 0xc) + ((*(iVar2 + 0x20) & 0xfff) != 0));
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


/* fcn.00013d14 @ 0x13d14 */

ulong fcn.00013d14(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    
    if (arg2 == 0) {
        if (arg3 != 0) {
            return 0x8000000000000002;
        }
    }
    else if (arg3 == 0) {
        return 0x8000000000000002;
    }
    iVar3 = fcn.000139e8(arg1);
    if (iVar3 == 0) {
        uVar4 = 0x800000000000000e;
    }
    else if ((((*(iVar3 + 0x28) & 2) == 0) || (*0x152a8 == '\0')) || (*0x152b8 != '\0')) {
        if (arg2 == 0) {
            if ((*(iVar3 + 0x28) & 1) == 0) {
                return 0x8000000000000008;
            }
            arg2 = *(iVar3 + 0x18);
        }
        if ((arg3 == 0) || (uVar1 = *(iVar3 + 0x20), uVar2 = *arg3, *arg3 = uVar1, uVar1 <= uVar2)) {
            if ((*(iVar3 + 0x20) != 0) && (arg2 != *(iVar3 + 0x30))) {
                fcn.00011180(arg2,*(iVar3 + 0x30),*(iVar3 + 0x20));
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


/* fcn.00013738 @ 0x13738 */

void fcn.00013738(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000136dc(arg1,arg1);
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        fcn.00011180(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00013e70 @ 0x13e70 */

uint64_t fcn.00013e70(uint32_t arg1,uint32_t arg2)

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
    uVar3 = *0x152f8;
    if (((CONCAT44(in_register_00000014,arg2) < *0x152f8 || CONCAT44(in_register_00000014,arg2) == *0x152f8) &&
        (uVar4 <= *0x152f8)) &&
       ((uVar7 = 0, CONCAT44(in_register_00000014,arg2) == 0 ||
        (uVar3 = (*0x152f8 - CONCAT44(in_register_00000014,arg2)) + 1, uVar4 <= uVar3)))) {
        if (*0x15438 != 0) {
            puVar9 = *0x15418 + 8;
            uVar6 = uVar7;
            do {
                uVar1 = *puVar9;
                if (uVar4 < uVar1) {
code_r0x00013ee7:
                    uVar3 = uVar4 + CONCAT44(in_register_00000014,arg2);
                    if (uVar1 < uVar3) goto code_r0x0001400f;
                }
                else {
                    uVar3 = puVar9[1];
                    if (uVar4 < uVar1 + uVar3) goto code_r0x0001400f;
                    if (uVar4 <= uVar1) goto code_r0x00013ee7;
                }
                uVar6 = uVar6 + 1;
                puVar9 = puVar9 + 4;
            } while (uVar6 < *0x15438);
        }
        if (*0x152f0 == '\0') {
code_r0x0001400a:
            return CONCAT71(uVar3 >> 8,1);
        }
        bVar2 = false;
        iVar8 = *0x15408;
        iVar10 = *0x15410;
        if (*0x15410 != 0) {
            do {
                if ((*(iVar8 + 8) <= uVar4) &&
                   (uVar3 = uVar4 + CONCAT44(in_register_00000014,arg2),
                   uVar3 <= *(iVar8 + 0x18) * 0x1000 + *(iVar8 + 8))) {
                    bVar2 = true;
                }
                iVar8 = iVar8 + *0x15420;
                iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
            if (bVar2) {
                if (*0x152e0 != 0) {
                    uVar6 = uVar7;
                    puVar9 = *0x152e8;
                    do {
                        uVar1 = *puVar9;
                        if (uVar4 < uVar1) {
code_r0x00013f8f:
                            uVar3 = uVar4 + CONCAT44(in_register_00000014,arg2);
                            if (uVar1 < uVar3) goto code_r0x0001400f;
                        }
                        else {
                            uVar3 = puVar9[1];
                            if (uVar4 < uVar1 + uVar3) goto code_r0x0001400f;
                            if (uVar4 <= uVar1) goto code_r0x00013f8f;
                        }
                        uVar6 = uVar6 + 1;
                        puVar9 = puVar9 + 7;
                    } while (uVar6 < *0x152e0);
                }
                if (*0x152d8 != 0) {
                    piVar5 = *0x152d8 + 0x10;
                    if (*(*0x152d8 + 4) != 0) {
                        do {
                            if ((*piVar5 == 5 || *piVar5 == 6) && ((piVar5[8] >> 0x11 & 1) != 0)) {
                                uVar6 = *(piVar5 + 2);
                                if (uVar6 <= uVar4) {
                                    uVar3 = *(piVar5 + 6) * 0x1000 + uVar6;
                                    if (uVar4 < uVar3) goto code_r0x0001400f;
                                    if (uVar6 < uVar4) goto code_r0x00013ffb;
                                }
                                uVar3 = uVar4 + CONCAT44(in_register_00000014,arg2);
                                if (uVar6 < uVar3) goto code_r0x0001400f;
                            }
code_r0x00013ffb:
                            uVar3 = *(*0x152d8 + 8);
                            uVar7 = uVar7 + 1;
                            piVar5 = piVar5 + uVar3;
                        } while (uVar7 < *(*0x152d8 + 4));
                    }
                }
                goto code_r0x0001400a;
            }
        }
    }
code_r0x0001400f:
    return uVar3 & 0xffffffffffffff00;
}


/* fcn.000124b8 @ 0x124b8 */

uint64_t fcn.000124b8(uint32_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint in_register_0000000c;
    int64_t arg2_00;
    uint16_t uVar6;
    int64_t iVar7;
    
    iVar7 = CONCAT44(in_register_0000000c,arg1);
    uVar5 = 0;
    if (*0x15230 == 0) {
        iVar2 = fcn.000136dc(iVar7,0x5f);
        iVar3 = 0;
        if (iVar2 != 0) {
            iVar3 = fcn.000111c0(iVar2,0x5f);
        }
        *0x15230 = iVar3;
    }
    else {
        uVar6 = 0;
        iVar3 = iVar7;
        if (*0x15220 != 0) {
            uVar4 = uVar5;
            do {
                iVar3 = uVar4 * 0x5f + *0x15230;
                if ((iVar3 == iVar7 + 0x50) || (iVar2 = fcn.000111e0(iVar3,iVar7 + 0x50,0x3c), iVar2 == 0)) break;
                uVar6 = uVar6 + 1;
                uVar4 = uVar6;
            } while (uVar4 < *0x15220);
        }
        if (uVar6 < *0x15220) {
            iVar3 = uVar6 * 0x5f + *0x15230;
        }
        else {
            *0x15230 = fcn.00013778(iVar3,*0x15220 * 0x5f,*0x15220 * 0x5f + 0x5f,*0x15230);
            iVar3 = *0x15220 * 0x5f + *0x15230;
        }
    }
    iVar2 = *0x15230;
    *(iVar3 + 0x5d) = 0;
    cVar1 = *(iVar7 + 0x1e);
    *(iVar3 + 0x5c) = cVar1;
    *(iVar3 + 0x5e) = *(iVar7 + 0x38);
    if (cVar1 == '\0') {
        arg2_00 = *(iVar7 + 8);
    }
    else {
        arg2_00 = *(iVar7 + 0x10);
    }
    if (arg2_00 == 0) {
code_r0x00012643:
        uVar5 = 0x800000000000000e;
    }
    else {
        if (iVar3 + 0x3c != arg2_00) {
            fcn.00011180(iVar3 + 0x3c,arg2_00,0x20);
            iVar2 = *0x15230;
        }
        if (iVar3 != iVar7 + 0x50) {
            fcn.00011180(iVar3,iVar7 + 0x50,0x3c);
            iVar2 = *0x15230;
        }
        iVar7 = (*0x15220 + 1) * 0x5f;
        uVar4 = fcn.00013a30(0x15160,iVar2,iVar7);
        if ((uVar4 < 0) && (uVar4 != 0x8000000000000014)) {
            return uVar4;
        }
        if (uVar4 == 0) {
            iVar7 = fcn.000139e8(0x15160);
            if (iVar7 == 0) goto code_r0x00012643;
            if ((*(iVar7 + 0x28) & 1) != 0) {
                return 0x8000000000000002;
            }
            *(iVar7 + 0x28) = 2;
        }
        else {
            uVar5 = uVar4;
            if (uVar4 == 0x8000000000000014) {
                uVar5 = fcn.00013ba0(0x15160,iVar2,*0x15230,iVar7);
            }
            if (uVar5 < 0) {
                return uVar5;
            }
        }
        *0x15220 = *0x15220 + 1;
    }
    return uVar5;
}


/* fcn.000138cc @ 0x138cc */

ulong fcn.000138cc(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    
    uVar1 = 0;
    if (arg2 == 0) {
        uVar1 = 0x8000000000000002;
    }
    else {
        iVar2 = fcn.000136dc(arg1,arg1);
        *arg2 = iVar2;
        if (iVar2 == 0) {
            uVar1 = 0x8000000000000009;
        }
    }
    return uVar1;
}


/* fcn.00011e18 @ 0x11e18 */

ulong fcn.00011e18(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uchar in_stack_00000038;
    
    out(*(arg1 + 0x18) + 6,*(arg1 + 0x1c) << 4);
    uVar3 = *(arg1 + 0x1a);
    cVar1 = in(*(arg1 + 0x1a));
    if ((cVar1 != -1) && (iVar2 = fcn.00011808(arg1), -1 < iVar2)) {
        iVar2 = fcn.0001185c(arg1,CONCAT71(uVar3 >> 8,0x40),1000);
        if (iVar2 < 0) {
            return 0x8000000000000012;
        }
        out(*(arg1 + 0x18) + 1,arg2);
        out(*(arg1 + 0x18) + 2,0);
        out(*(arg1 + 0x18) + 3,0);
        out(*(arg1 + 0x18) + 4,0);
        out(*(arg1 + 0x18) + 5,0);
        out(*(arg1 + 0x18) + 7,in_stack_00000038);
        return 0;
    }
    return 0x8000000000000007;
}


/* fcn.000118c4 @ 0x118c4 */

uint64_t fcn.000118c4(int64_t arg1)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    
    in(*(arg1 + 0x1a));
    iVar2 = fcn.00011808(arg1);
    if (iVar2 < 0) {
        uVar3 = 0x8000000000000007;
    }
    else {
        uVar1 = in(*(arg1 + 0x18) + 7);
        uVar3 = -((uVar1 & 0x21) != 0) & 0x8000000000000007;
    }
    return uVar3;
}


/* fcn.00011974 @ 0x11974 */

//WARNING: Variable defined which should be unmapped: var_17h
//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_29h

ulong fcn.00011974(int64_t arg1)

{
    uint16_t uVar1;
    uint8_t *puVar2;
    uint8_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint8_t *arg2;
    uint32_t uVar8;
    uint32_t *puVar9;
    bool bVar10;
    int8_t var_17h;
    int64_t iStackX_10;
    ulong uStackX_18;
    uint64_t uStackX_20;
    int64_t var_6fh;
    int64_t var_77h;
    int64_t var_7fh;
    uint64_t in_stack_fffffffffffffee8;
    uint8_t *puStack_108;
    uint uStack_100;
    uchar uStack_fc;
    uchar uStack_fb;
    ushort uStack_fa;
    unkuint3 Stack_f8;
    uint uStack_f4;
    uint uStack_f0;
    uint uStack_ec;
    uint uStack_e8;
    uint uStack_e4;
    uint uStack_e0;
    uint uStack_dc;
    uchar uStack_d8;
    int64_t aiStack_d0 [3];
    uint8_t *puStack_b8;
    ulong uStack_b0;
    uint uStack_a8;
    uint uStack_a4;
    uint uStack_a0;
    uint uStack_9c;
    uint uStack_98;
    uint uStack_94;
    uint uStack_90;
    uint uStack_8c;
    uchar uStack_88;
    int8_t var_79h;
    int64_t var_71h;
    int64_t var_69h;
    uint uStack_68;
    uchar auStack_64 [3];
    int64_t var_59h;
    uint uStack_58;
    uchar auStack_54 [3];
    int64_t var_49h;
    uchar uStack_48;
    int64_t var_39h;
    int8_t var_29h;
    int64_t var_19h;
    int64_t var_9h;
    
    uStackX_20 = 0;
    uStackX_18 = 0;
    aiStack_d0[0] = 0;
    aiStack_d0[1] = 0x200;
    iStackX_10 = 0;
    fcn.0001190c();
    if (*0x15260 == NULL) {
        uVar4 = 0x800000000000000e;
    }
    else {
        uVar8 = *((((*(arg1 + 0x31) & 0x1f | *(arg1 + 0x30) << 5) << 3 | *(arg1 + 0x32) & 7) << 0xc | 0x24) + 0xc0000000
                 ) & 0xfffffff0;
        if (((*0x152d0 != 0) && (iVar5 = (**(*0x152d0 + 8))(uVar8,0x100), -1 < iVar5)) && (*0x152d0 != 0)) {
            uVar7 = ((*uVar8 & 0x1f) + 3) * 0x80;
            iVar5 = (**(*0x152d0 + 8))(uVar8);
            if (-1 < iVar5) {
                bVar10 = *0x15238 == '\0';
                **0x15260 = uVar8;
                if (bVar10) {
                    if ((*((((*(arg1 + 0x31) & 0x1f | *(arg1 + 0x30) << 5) << 3 | *(arg1 + 0x32) & 7) << 0xc | 10) +
                          0xc0000000) & 6) != 0) {
                        puVar9 = uVar8 + 4;
                        *puVar9 = *(uVar8 + 4) & 0x7fffffff;
                        *puVar9 = 1;
                        fcn.00013e3c(5000,uVar7);
                        *puVar9 = 0x80000000;
                        fcn.00013e3c(1000000,uVar7);
                    }
                    *0x15238 = '\x01';
                }
                if (*0x15248 == NULL) {
                    return 0x8000000000000003;
                }
                fcn.000111c0(*0x15248,0x200);
                puVar2 = *0x15248;
                uVar3 = *(arg1 + 0x1e) & 1;
                **0x15248 = uVar3;
                if (uVar3 == 0) {
                    arg2 = *(arg1 + 8);
                }
                else {
                    arg2 = *(arg1 + 0x10);
                }
                if (puVar2 + 2 != arg2) {
                    fcn.00011180(puVar2 + 2,arg2,0x20);
                }
                iVar5 = (**(*0x15278 + 0xd0))(0x150d0,0,&iStackX_10);
                uVar4 = 0;
                if ((-1 < iVar5) && (uVar4 = 0, iStackX_10 != 0)) {
                    (**(iStackX_10 + 0x20))(iStackX_10,0,0,1,&uStackX_20,0);
                    iVar5 = (uStackX_20 & 0xffffffffffffff00) + 0x100;
                    uVar4 = *(*0x15260 + 6);
                    *(*0x15260 + 0xc) = iVar5;
                    *(*0x15260 + 6) = iVar5;
                    fcn.000111c0(*(*0x15260 + 6),0x100);
                    (**(iStackX_10 + 0x20))(iStackX_10,0,0,1,&uStackX_18,0);
                    *(*0x15260 + 8) = uStackX_18;
                    *(*0x15260 + 4) = uStackX_18;
                    puVar9 = *0x15260 + 8;
                    *(*0x15260 + 10) = *puVar9 + 0x80;
                    *(*0x15260 + 2) = *puVar9 + 0x80;
                    fcn.000111c0(*(*0x15260 + 4),0x800);
                    in_stack_fffffffffffffee8 = 0;
                    (**(iStackX_10 + 0x10))(iStackX_10,0,*0x15248,aiStack_d0 + 1,0x15240,aiStack_d0);
                }
                (**(*0x15260 + 0x1a))(*0x15260,*(arg1 + 0x22));
                uVar7 = 0;
                do {
                    if ((*0x15248)[uVar7 + 2] != 0) {
                        fcn.000111c0(&puStack_108,0x31);
                        puStack_108 = *0x15248;
                        if (*0x15240 != NULL) {
                            puStack_108 = *0x15240;
                        }
                        uStack_fa = 1;
                        uVar8 = _Stack_f8 >> 0x18;
                        uVar1 = _Stack_f8;
                        Stack_f8 = uVar1 & 0xff00;
                        _Stack_f8 = CONCAT13(uVar8,Stack_f8);
                        uVar1 = uStack_f4;
                        uStack_f4 = CONCAT22(0xf240,uVar1 & 0xff00);
                        uStack_100 = 0x200;
                        in_stack_fffffffffffffee8 = in_stack_fffffffffffffee8 & 0xffffffff00000000;
                        (**(*0x15260 + 0x1c))
                                  (*0x15260,&puStack_108,*(arg1 + 0x22),0xff,in_stack_fffffffffffffee8,1);
                        break;
                    }
                    uVar3 = uVar7 + 1;
                    uVar7 = uVar3;
                } while (uVar3 < 0x20);
                fcn.000111c0(&puStack_108,0x31);
                uStack_b0 = CONCAT26(uStack_fa,CONCAT15(uStack_fb,CONCAT14(uStack_fc,uStack_100)));
                puStack_b8 = puStack_108;
                uStack_f4 = CONCAT13(0xf5,uStack_f4);
                uStack_88 = uStack_d8;
                uStack_98 = uStack_e8;
                uStack_94 = uStack_e4;
                uStack_90 = uStack_e0;
                uStack_8c = uStack_dc;
                uStack_a8 = _Stack_f8;
                uStack_a4 = uStack_f4;
                uStack_a0 = uStack_f0;
                uStack_9c = uStack_ec;
                in_stack_fffffffffffffee8 = in_stack_fffffffffffffee8 & 0xffffffff00000000;
                (**(*0x15260 + 0x20))(*0x15260,&puStack_b8,*(arg1 + 0x22),0xff,in_stack_fffffffffffffee8);
                fcn.000111c0(&puStack_108,0x31);
                uStack_fc = 0xc1;
                unique0x10000465 = CONCAT26(uStack_fa,CONCAT15(uStack_fb,CONCAT14(0xc1,uStack_100)));
                uStack_f4 = CONCAT13(0xb1,uStack_f4);
                uStack_48 = uStack_d8;
                stack0xffffffffffffff88 = puStack_108;
                uStack_68 = _Stack_f8;
                _auStack_64 = uStack_f4;
                var_59h._1_4_ = uStack_f0;
                stack0xffffffffffffffa4 = uStack_ec;
                uStack_58 = uStack_e8;
                _auStack_54 = uStack_e4;
                var_49h._1_4_ = uStack_e0;
                stack0xffffffffffffffb4 = uStack_dc;
                uVar6 = (**(*0x15260 + 0x20))
                                  (*0x15260,&var_71h + 1,*(arg1 + 0x22),0xff,
                                   in_stack_fffffffffffffee8 & 0xffffffff00000000);
                fcn.000111c0(*0x15248,0x200);
                if (iStackX_10 != 0) {
                    if (aiStack_d0[0] != 0) {
                        (**(iStackX_10 + 0x18))(iStackX_10);
                        *0x15240 = NULL;
                    }
                    (**(iStackX_10 + 0x28))(iStackX_10,1,uStackX_18);
                    uVar6 = (**(iStackX_10 + 0x28))(iStackX_10,1,uStackX_20);
                    *(*0x15260 + 6) = uVar4;
                }
                return uVar6;
            }
        }
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.00012380 @ 0x12380 */

//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_10h

ulong fcn.00012380(int64_t arg1)

{
    uchar *arg1_00;
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint8_t auStackX_8 [8];
    int64_t iStackX_10;
    int64_t var_20h;
    int64_t var_28h;
    uchar auStack_28 [16];
    int64_t var_10h;
    
    iStackX_10 = 0;
    iVar2 = fcn.0001223c(*(arg1 + 0x28),&iStackX_10);
    if (-1 < iVar2) {
        iVar2 = *(iStackX_10 + 8);
        if ((((*(iVar2 + 0x14) & 1) != 0) && ((*(iVar2 + 0x1c) & 1) != 0)) && (*(iVar2 + 0x30) != *(iStackX_10 + 0x88)))
        {
            return 0x8000000000000003;
        }
        iVar2 = (**(iStackX_10 + 0x100))(iStackX_10);
        if (-1 < iVar2) {
            if ((*0x15248 != 0) && (iVar2 = fcn.00011ec4(iStackX_10,auStackX_8), -1 < iVar2)) {
                if ((auStackX_8[0] & 4) != 0) {
                    iVar2 = fcn.00012068(iStackX_10,arg1);
                }
                iVar1 = iStackX_10;
                if ((-1 < iVar2) && ((auStackX_8[0] & 8) == 0)) {
                    arg1_00 = *(iStackX_10 + 0x40);
                    fcn.000111c0(arg1_00,0x48);
                    arg1_00[1] = arg1_00[1] & 0xfc;
                    *arg1_00 = 0x81;
                    *(arg1_00 + 2) = **(iVar1 + 0x158);
                    *(arg1_00 + 4) = 0;
                    *(arg1_00 + 0x10) = 0;
                    arg1_00[0x40] = 1;
                    *(arg1_00 + 0x42) = 0;
                    *(arg1_00 + 0x44) = 0x1000;
                    *(arg1_00 + 0x28) = 0xef000500;
                    *(arg1_00 + 0x2c) = 0;
                    (***0x15250)(iVar1,arg1_00,auStack_28);
                }
            }
            uVar3 = (**(iStackX_10 + 0x108))(iStackX_10);
            return uVar3;
        }
    }
    return 0x8000000000000007;
}


/* fcn.000129d4 @ 0x129d4 */

void fcn.000129d4(uint32_t arg1)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint8_t *puVar3;
    int64_t iVar4;
    uint in_register_0000000c;
    ulong uVar5;
    uint8_t *puVar6;
    uint64_t uVar7;
    int64_t aiStackX_10 [3];
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    aiStackX_10[1] = 0;
    if ((*0x15239 == '\0') || (*(iVar4 + 0x34) != 1)) {
        uVar5 = 0x150d0;
        iVar2 = (**(*0x15278 + 0xd0))(0x150d0,0,aiStackX_10 + 1);
        if (iVar2 < 0) {
            if (*0x15478 == NULL) {
                iVar2 = fcn.000136dc();
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
                *0x15228 = *0x15228 + 1;
            }
            else {
                uVar1 = 0;
                if (*0x15228 != 0) {
                    puVar3 = *0x15478 + 0x39;
                    do {
                        if (*puVar3 == *(iVar4 + 0x28)) break;
                        uVar1 = uVar1 + 1;
                        puVar3 = puVar3 + 0x40;
                    } while (uVar1 < *0x15228);
                    if (uVar1 < *0x15228) {
                        return;
                    }
                }
                puVar3 = fcn.00013778(CONCAT71(uVar5 >> 8,*0x15228),*0x15228 * 0x40 + 1,*0x15228 * 0x40 + 0x41,
                                      *0x15478);
                puVar6 = puVar3 + *0x15228 * 0x40 + 1;
            }
            uVar1 = *0x15228;
            *0x15478 = puVar3;
            if (*(iVar4 + 0x34) == 1) {
                fcn.0001190c();
                if (*0x15260 == 0) {
                    return;
                }
                puVar6[0x20] = 0;
                puVar6[0x21] = 0x10;
                puVar6[0x22] = 0;
                puVar6[0x23] = 0;
                puVar6[0x28] = 2;
                puVar6[0x29] = 0;
                puVar6[0x2a] = 0;
                puVar6[0x2b] = 0;
                *0x15239 = '\x01';
                *0x15228 = uVar1;
            }
            else {
                *0x15228 = uVar1;
                if (*(iVar4 + 0x34) == 2) {
                    aiStackX_10[0] = 0;
                    iVar2 = fcn.0001223c(*(iVar4 + 0x28),aiStackX_10);
                    puVar3 = *0x15478;
                    if (iVar2 < 0) {
                        return;
                    }
                    *(puVar6 + 0x20) = *(aiStackX_10[0] + 0x70) << 0xc;
                    puVar6[0x28] = 2;
                    puVar6[0x29] = 0;
                    puVar6[0x2a] = 0;
                    puVar6[0x2b] = 0;
                    *(puVar6 + 0x24) = *(aiStackX_10[0] + 0x98) << 0xc;
                    puVar6[0x2c] = 2;
                    puVar6[0x2d] = 0;
                    puVar6[0x2e] = 0;
                    puVar6[0x2f] = 0;
                }
            }
            *0x15228 = *0x15228 + 1;
            *puVar3 = *0x15228;
            *(puVar6 + 0x38) = *(iVar4 + 0x28);
            *(puVar6 + 0x30) = *(iVar4 + 0x34);
            uVar7 = *0x15228;
            iVar4 = fcn.00013a30(0x15178,puVar3,uVar7 * 0x40 + 1);
            if ((-1 < iVar4) || (iVar4 == -0x7fffffffffffffec)) {
                if (iVar4 == 0) {
                    iVar4 = fcn.000139e8(0x15178);
                    if ((iVar4 != 0) && ((*(iVar4 + 0x28) & 1) == 0)) {
                        *(iVar4 + 0x28) = 2;
                    }
                }
                else if (iVar4 == -0x7fffffffffffffec) {
                    fcn.00013ba0(0x15178,puVar3,*0x15478,uVar7 * 0x40 + 1);
                }
            }
        }
    }
    return;
}


/* fcn.00013698 @ 0x13698 */

uint64_t fcn.00013698(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x15450 != 0) {
        puVar2 = *0x15458 + 8;
        in_RAX = *0x15458;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x15450);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00011200 @ 0x11200 */

void fcn.00011200(void)

{
    return;
}


/* fcn.0001370c @ 0x1370c */

void fcn.0001370c(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000136dc(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000111c0(arg1_00,arg1);
    }
    return;
}


