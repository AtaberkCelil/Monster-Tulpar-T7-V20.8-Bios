// decompiled by r2ghidra: 0190_TxtDxe.pe32
// functions: 29

/* entry0 @ 0x10784 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.000107b0(arg1,arg2);
    fcn.00010958(arg1,arg2);
    return;
}


/* fcn.000107b0 @ 0x107b0 */

void fcn.000107b0(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0_00;
    
    *0x11608 = *(arg1 + 0x60);
    *0x11600 = arg1;
    fcn.000112f4();
    noname_0_00 = 0x115d0;
    iVar3 = fcn.00011324(0x115d0);
    if (iVar3 == 0) {
        uVar4 = fcn.00010780();
        fcn.00010770();
        uVar1 = in(0x1808);
        fcn.00010720(noname_0_00,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            fcn.00010710();
        }
        fcn.00010720(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010770();
        }
        else {
            fcn.00010760();
        }
    }
    fcn.00011294(0x115b0,0x11618);
    //WARNING: Could not recover jumptable at 0x0001086c. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x11608 + 0x140))(0x11580,0,0x11620);
    return;
}


/* fcn.00010958 @ 0x10958 */

ulong fcn.00010958(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t arg2_00;
    int16_t iVar5;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [2];
    ulong uStackX_18;
    int64_t iStackX_20;
    ulong auStack_38 [2];
    uchar auStack_28 [16];
    
    auStack_38[0] = 0;
    uVar3 = fcn.000106d0();
    if (((uVar3 >> 0xe & 1) != 0) && (0x1ffff < *(*0x11600 + 8))) {
        (**(*0x11608 + 0x170))(0x200,8,0x108e4,0,0x11570,auStack_38);
    }
    *0x11640 = arg1;
    *0x11648 = arg2;
    (**(*0x11608 + 0x140))(0x11560,0,0x11650);
    arg2_00 = 0x11658;
    (***0x11650)(*0x11650);
    iVar4 = fcn.00011324(0x115c0);
    if ((iVar4 == 0) || (*0x11660 = iVar4 + 0x18, (*0xfed30008 & 1) != 0)) {
        return 0x8000000000000003;
    }
    if ((*(iVar4 + 0xa0) & 0x10000) != 0) {
        arg2_00 = 0;
        fcn.000106e0(1,0,0,auStackX_8);
        if (((auStackX_8[0] >> 6 & 1) != 0) && ((*(*0x11660 + 0x88) & 0x20000) != 0)) {
            uVar1 = rdmsr(0x3a);
            arg2_00 = uVar1 & 0xffffffff00000000;
            if ((uVar1 & 0xff03) == 0xff03) {
                iVar4 = fcn.00010cf8(0x11640);
                if (-1 < iVar4) {
                    (**(*0x11608 + 0x50))(0x200,8,0x10874,0,&uStackX_18);
                    (**(*0x11608 + 0xa8))(0x11590,uStackX_18,auStack_28);
                    (**(*0x11608 + 0x68))(uStackX_18);
                    return 0;
                }
                return 0x8000000000000003;
            }
        }
    }
    iVar5 = 0x2ee;
    do {
        uVar2 = *0xfed40000;
        if (*0xfed40000 == 0xff) goto code_r0x00010bc1;
        if (*0xfed40000 < '\0') goto code_r0x00010b66;
        fcn.000113d0(1000,arg2_00);
        iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iStackX_20 = 0;
    while (iStackX_20 == 0) {
        fcn.00010710();
    }
code_r0x00010b66:
    if (((((~uVar2 & 1) != 0) && ((*(*0x11660 + 0x88) & 0x10000) != 0)) &&
        (fcn.000106e0(1,0,0,auStackX_10), (auStackX_10[0] >> 6 & 1) != 0)) && ((*(*0x11660 + 0x58) & 4) == 0)) {
        fcn.00010f54(0x11640,1);
    }
code_r0x00010bc1:
    if ((*(*0x11660 + 0x88) & 0x40000) != 0) {
        fcn.00010f54(0x11640,2);
    }
    return 0;
}


/* fcn.000112f4 @ 0x112f4 */

int64_t fcn.000112f4(void)

{
    if (*0x11610 == 0) {
        fcn.00011294(0x115a0,0x11610);
    }
    return *0x11610;
}


/* fcn.00011294 @ 0x11294 */

ulong fcn.00011294(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x11600;
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


/* fcn.00011324 @ 0x11324 */

void fcn.00011324(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000112f4();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00011352:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00011352;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010780 @ 0x10780 */

uint64_t fcn.00010780(void)

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


/* fcn.00010770 @ 0x10770 */

void fcn.00010770(void)

{
    return;
}


/* fcn.00010720 @ 0x10720 */

uint64_t fcn.00010720(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010712 @ 0x10712 */

void fcn.00010712(void)

{
    return;
}


/* fcn.00010760 @ 0x10760 */

void fcn.00010760(void)

{
    return;
}


/* fcn.00010f54 @ 0x10f54 */

int64_t fcn.00010f54(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong *puVar2;
    int64_t arg1_00;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    uint in_register_0000000c;
    int64_t arg1_01;
    uint64_t uVar7;
    uchar *arg3;
    int64_t in_R9;
    uint64_t uStackX_8;
    uint64_t uStackX_18;
    uchar auStackX_20 [8];
    uchar auStack_68 [8];
    uint8_t uStack_60;
    
    arg1_01 = CONCAT44(in_register_0000000c,arg1);
    uVar1 = *(arg1_01 + 0x18);
    puVar2 = *(arg1_01 + 0x10);
    if (*(arg1_01 + 0x20) == 0) {
        return -0x7ffffffffffffffe;
    }
    (*puVar2[6])(puVar2,&uStackX_18);
    arg1_00 = *(*(arg1_01 + 0x20) + 0x20);
    if ((arg1_00 != 0) && (*(*(arg1_01 + 0x20) + 0x28) != 0)) {
        arg3 = auStackX_20;
        iVar3 = (**puVar2)(puVar2,&uStackX_8);
        if (iVar3 < 0) {
            return iVar3;
        }
        if (uVar1 <= uStackX_8) {
            uVar7 = uStackX_8;
            iVar3 = fcn.00011264();
            if (iVar3 == 0) {
                return -0x7ffffffffffffff7;
            }
            uVar4 = 0;
            if (uStackX_8 != 0) {
                do {
                    *(uVar4 + iVar3) = 0;
                    uVar4 = uVar4 + 1;
                } while (uVar4 < uStackX_8);
            }
            uVar4 = 0;
            if (uVar1 != 0) {
                do {
                    arg3 = auStack_68;
                    uVar7 = uVar4;
                    iVar5 = (*puVar2[1])(puVar2,uVar4);
                    if (iVar5 < 0) {
                        (**(*0x11608 + 0x48))(iVar3);
                        return iVar5;
                    }
                    if ((uStack_60 & 2) != 0) {
                        *(uVar4 + iVar3) = 1;
                    }
                    uVar4 = uVar4 + 1;
                } while (uVar4 < uVar1);
            }
            uVar7 = CONCAT71(uVar7 >> 8,1);
            fcn.00011140(arg1_01,uVar7);
            uVar4 = 0;
            if (uVar1 != 0) {
                do {
                    if ((*(uVar4 + iVar3) & uVar4 != uStackX_18) != 0) {
                        in_R9 = 0;
                        arg3 = NULL;
                        uVar7 = uVar4;
                        (*puVar2[5])(puVar2);
                    }
                    uVar4 = uVar4 + 1;
                } while (uVar4 < uVar1);
            }
            fcn.0001147c();
            fcn.000113d0(10000,uVar7);
            uVar6 = (**(*0x11608 + 0x18))(0x1f);
            fcn.0001026e(arg1_00,arg2,arg3,in_R9);
            (**(*0x11608 + 0x20))(uVar6);
            uVar7 = 0;
            if (uVar1 != 0) {
                do {
                    if ((*(uVar7 + iVar3) & uVar7 != uStackX_18) != 0) {
                        (*puVar2[5])(puVar2,uVar7,1,0);
                    }
                    uVar7 = uVar7 + 1;
                } while (uVar7 < uVar1);
            }
            fcn.00011140(arg1_01,0);
            (**(*0x11608 + 0x48))(iVar3);
            return 0;
        }
    }
    return -0x7ffffffffffffff2;
}


/* fcn.000106d0 @ 0x106d0 */

void fcn.000106d0(void)

{
    return;
}


/* fcn.000108c0 @ 0x108c0 */

uint64_t fcn.000108c0(void)

{
    uint64_t uStackX_8;
    
    uStackX_8 = fcn.000106d0();
    uStackX_8 = uStackX_8 & 0xffffffffffffbfff;
    return uStackX_8;
}


/* fcn.000106e0 @ 0x106e0 */

uint64_t fcn.000106e0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00010cf8 @ 0x10cf8 */

ulong fcn.00010cf8(int64_t arg1)

{
    uint64_t uVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t *arg1_00;
    uint32_t auStackX_8 [2];
    int64_t *piStackX_10;
    int32_t var_30h;
    int64_t var_38h;
    
    auStackX_8[0] = 0;
    piVar2 = *(arg1 + 0x20);
    if ((((piVar2 == NULL) || (piVar2[2] == 0)) || (uVar3 = piVar2[3], uVar3 == 0)) ||
       ((piVar2[1] == 0 || (*piVar2 == 0)))) {
        uVar4 = 0x8000000000000003;
    }
    else {
        uVar1 = uVar3 + piVar2[2];
        piVar6 = uVar1 - piVar2[1];
        *0xfed30330 = (uVar3 | 0x10000) >> 0x10 | uVar1;
        arg1_00 = piVar6 - *piVar2;
        piStackX_10 = *0xfed30330;
        (***0x11620)(*0x11620,2,2,0xfed30330,2,&piStackX_10);
        *0xfed30308 = piVar2[1];
        piStackX_10 = *0xfed30308;
        (***0x11620)(*0x11620,2,2,0xfed30308,2,&piStackX_10);
        *0xfed30300 = piVar6;
        piStackX_10 = piVar6;
        (***0x11620)(*0x11620,2,2,0xfed30300,2,&piStackX_10);
        *0xfed30278 = *piVar2;
        piStackX_10 = *0xfed30278;
        (***0x11620)(*0x11620,2,2,0xfed30278,2,&piStackX_10);
        *0xfed30270 = arg1_00;
        piStackX_10 = arg1_00;
        (***0x11620)(*0x11620,2,2,0xfed30270,2,&piStackX_10);
        if (uVar1 - arg1_00 != 0) {
            fcn.000106a0(arg1_00,uVar1 - arg1_00);
        }
        *piVar6 = 0x2c;
        *(piVar6 + 0xc) = 0;
        *(piVar6 + 1) = 6;
        piVar6[2] = piVar2[9];
        piVar6[3] = piVar2[10];
        *(piVar6 + 4) = *(arg1 + 0x18);
        uVar3 = rdmsr(0x13a);
        *(piVar6 + 0x24) = (-((uVar3 >> 0x20 & 4) != 0) & 0x200000000) + 0x200000000;
        fcn.00010bfc(arg1,1,piVar6 + 0x2c,auStackX_8);
        iVar5 = piVar6 + 0x2c + auStackX_8[0];
        fcn.00010bfc(arg1,2,iVar5,auStackX_8);
        iVar5 = iVar5 + auStackX_8[0];
        fcn.00010bfc(arg1,0,iVar5,auStackX_8);
        *piVar6 = (auStackX_8[0] - piVar6) + iVar5;
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.000113d0 @ 0x113d0 */

int64_t fcn.000113d0(int64_t arg1,int64_t arg2)

{
    fcn.00011370((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.00011370 @ 0x11370 */

void fcn.00011370(int64_t arg1)

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
            fcn.00010710();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00010710 @ 0x10710 */

void fcn.00010710(void)

{
    return;
}


/* fcn.00011264 @ 0x11264 */

ulong fcn.00011264(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x11608 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00010660 @ 0x10660 */

int64_t fcn.00010660(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.000106a0 @ 0x106a0 */

int64_t fcn.000106a0(int64_t arg1,int64_t arg2)

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


/* fcn.00010bfc @ 0x10bfc */

void fcn.00010bfc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint *arg2_00;
    int iVar2;
    uint uVar3;
    
    *arg4 = 0;
    iVar2 = arg2;
    if (iVar2 == 0) {
        uVar3 = 8;
        arg2_00 = fcn.00011264(arg1,8);
        if (arg2_00 == NULL) {
            return;
        }
        *arg2_00 = 0;
        arg2_00[1] = 8;
    }
    else {
        if (iVar2 != 1) {
            if (iVar2 != 2) {
                return;
            }
            arg2_00 = fcn.00011264(arg1,0x14);
            if (arg2_00 == NULL) {
                return;
            }
            arg2_00[1] = 0x14;
            *arg2_00 = 2;
            arg2_00[2] = 1;
            iVar1 = *(arg1 + 0x20);
            *arg4 = 0x14;
            *(arg2_00 + 3) = *(iVar1 + 0x20);
            goto code_r0x00010cb8;
        }
        uVar3 = 0xe;
        arg2_00 = fcn.00011264(arg1,0xe);
        if (arg2_00 == NULL) {
            return;
        }
        arg2_00[1] = 0xe;
        *arg2_00 = 1;
        arg2_00[2] = 0x10002;
        *(arg2_00 + 3) = 0;
    }
    *arg4 = uVar3;
code_r0x00010cb8:
    if ((*arg4 != 0) && (arg3 != arg2_00)) {
        fcn.00010660(arg3,arg2_00,*arg4);
    }
    (**(*0x11608 + 0x48))(arg2_00);
    return;
}


/* fcn.00011140 @ 0x11140 */

ulong fcn.00011140(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    int16_t iVar4;
    
    uVar2 = rdmsr(0x1b);
    iVar4 = *(*(arg1 + 0x20) + 0x88) + 0x30;
    uVar3 = rdmsr(0x1b);
    uVar1 = uVar3 & 0xfffff000;
    if (arg2 == '\x01') {
        *0x11638 = rdmsr(0x19b);
        wrmsr(0x19b,*0x11638 & 0xffffffffff7f7fe8);
        if ((uVar2 & 0xc00) == 0xc00) {
            uVar2 = rdmsr(0x833);
            *0x11628 = uVar2;
            wrmsr(0x833,uVar2 & 0xfffef800 | 0x10200);
        }
        else {
            uVar1 = uVar1 + 0x330;
            *0x11628 = *uVar1;
            *uVar1 = *0x11628 & 0xfffffa00 | 0x10200;
        }
        *0x11630 = in(iVar4);
        out(iVar4,*0x11630 & 0xfffffffe);
    }
    else {
        out(iVar4,*0x11630);
        wrmsr(0x19b,*0x11638);
        if ((uVar2 & 0xc00) == 0xc00) {
            wrmsr(0x833,*0x11628);
        }
        else {
            *(uVar1 + 0x330) = *0x11628;
        }
    }
    return 0;
}


/* fcn.0001147c @ 0x1147c */

uint32_t fcn.0001147c(void)

{
    uint uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    
    iVar3 = fcn.00011514();
    if (iVar3 != 1) {
        wrmsr(0x830,0xc4500);
        return 0xc4500;
    }
    uVar4 = fcn.00010780();
    fcn.00010770();
    iVar3 = fcn.00011440();
    uVar1 = *(iVar3 + 0x310);
    do {
    } while ((*(iVar3 + 0x300) & 0x1000) != 0);
    *(iVar3 + 0x310) = 0;
    *(iVar3 + 0x300) = 0xc4500;
    do {
        uVar2 = *(iVar3 + 0x300);
    } while ((*(iVar3 + 0x300) & 0x1000) != 0);
    *(iVar3 + 0x310) = uVar1;
    if ((uVar4 >> 9 & 1) != 0) {
        return uVar2;
    }
    return uVar2;
}


/* fcn.00011514 @ 0x11514 */

char fcn.00011514(void)

{
    uint64_t uVar1;
    char cVar2;
    
    cVar2 = fcn.00011404();
    if (cVar2 == '\0') {
        cVar2 = '\x01';
    }
    else {
        uVar1 = rdmsr(0x1b);
        cVar2 = ((uVar1 & 0x400) != 0) + '\x01';
    }
    return cVar2;
}


/* fcn.00011440 @ 0x11440 */

int64_t fcn.00011440(void)

{
    uint64_t uVar1;
    char cVar2;
    int64_t iVar3;
    
    cVar2 = fcn.00011404();
    if (cVar2 == '\0') {
        iVar3 = 0xfee00000;
    }
    else {
        uVar1 = rdmsr(0x1b);
        iVar3 = (uVar1 & 0xffffffff00000000) + (uVar1 & 0xfffff000);
    }
    return iVar3;
}


/* fcn.0001026e @ 0x1026e */

//WARNING: Removing unreachable block (ram,0x0001034d)

ulong fcn.0001026e(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    uchar *puVar2;
    ulong in_RAX;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int iVar6;
    uint32_t uVar7;
    int iVar8;
    uint32_t uVar9;
    uchar *puVar10;
    uint16_t in_ES;
    uint16_t in_CS;
    uint16_t in_DS;
    uint16_t in_FS;
    uint16_t in_GS;
    uint64_t auStack_140 [10];
    uchar auStack_f0 [48];
    int64_t var_10h;
    
    if (arg1 != 0) {
        GlobalDescriptorTableRegister();
        InterruptDescriptorTableRegister();
        rdmsr(0x1a0);
        rdmsr(0xc0000080);
        uVar4 = rdmsr(0xfe);
        iVar3 = (uVar4 & 0xff) << 1;
        puVar2 = auStack_f0;
        do {
            puVar10 = puVar2;
            uVar4 = rdmsr(iVar3 + 0x1ff);
            *(puVar10 + -8) = uVar4 >> 0x20;
            *(puVar10 + -0x10) = uVar4 & 0xffffffff;
            iVar3 = iVar3 + -1;
            puVar2 = puVar10 + -0x10;
        } while (iVar3 != 0);
        uVar4 = rdmsr(0x2ff);
        *(puVar10 + -0x18) = uVar4 & 0xffffffff;
        *(puVar10 + -0x20) = uVar4 >> 0x20;
        *(puVar10 + -0x28) = in_GS;
        *(puVar10 + -0x30) = in_FS;
        *(puVar10 + -0x38) = in_ES;
        *(puVar10 + -0x40) = in_DS;
        *(puVar10 + -0x48) = in_CS << 0x20 | 0x105b0;
        puVar1 = cpuid(0x80000008);
        wrmsr(0x2ff,0);
        uVar4 = rdmsr(0xfe);
        iVar3 = (uVar4 & 0xff) << 1;
        do {
            wrmsr(iVar3 + 0x1ff,0);
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        uVar4 = *(arg1 + 0x18) << 2;
        uVar5 = uVar4 & 0xfff;
        iVar6 = uVar5;
        if (uVar5 != 0) {
            iVar6 = 0x1000;
        }
        iVar8 = 0;
        uVar9 = arg1;
        for (uVar7 = iVar6 + (uVar4 & 0xfffff000); uVar4 = uVar7, uVar4 != 0; uVar7 = uVar7 - iVar6) {
            iVar3 = 0;
            if (uVar9 != 0) {
                for (; (uVar9 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
                }
            }
            uVar5 = 1LL << (iVar3 & 0x3f);
            if (uVar4 < uVar5) {
                iVar3 = 0x3f;
                if (uVar4 != 0) {
                    for (; uVar7 >> iVar3 == 0; iVar3 = iVar3 + -1) {
                    }
                }
                uVar5 = 1LL << (iVar3 & 0x3f);
            }
            iVar6 = uVar5;
            wrmsr(iVar8 + 0x201,CONCAT44((1 << (*puVar1 - 0x20 & 0x1f)) + -1,~(iVar6 - 1U)) | 0x800);
            wrmsr(iVar8 + 0x200,uVar9 | 6);
            iVar8 = iVar8 + 2;
            uVar9 = uVar9 + iVar6;
        }
        wrmsr(0x2ff,0x800);
        uVar4 = rdmsr(0x179);
        uVar4 = uVar4 & 0xff;
        iVar6 = 0x401;
        while( true ) {
            wrmsr(iVar6,0);
            uVar4 = uVar4 - 1;
            if (uVar4 == 0) break;
            iVar6 = iVar6 + 4;
        }
        *(puVar10 + -0x50) = 0x10000104fa;
        return 0;
    }
    return in_RAX;
}


/* fcn.00011404 @ 0x11404 */

ulong fcn.00011404(void)

{
    uint64_t uVar1;
    uint32_t auStackX_8 [8];
    
    fcn.000106e0(1,auStackX_8,0,0);
    uVar1 = (auStackX_8[0] >> 8 & 0xf) - 4;
    return CONCAT71(uVar1 >> 8,1 < uVar1);
}


