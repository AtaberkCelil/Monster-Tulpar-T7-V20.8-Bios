// decompiled by r2ghidra: 0393_TrustedDeviceSetup.pe32
// functions: 55

/* entry0 @ 0x10414 */

int64_t entry0(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint in_register_00000014;
    
    iVar1 = CONCAT44(in_register_00000014,arg2);
    if (*(iVar1 + 8) < 0x20000) {
        iVar1 = -0x7fffffffffffffe7;
    }
    else {
        fcn.00010468(arg1,iVar1);
        iVar1 = fcn.000106a8(arg1,iVar1);
        if ((iVar1 < 0) && (*0x13f78 != 0)) {
            (**(*0x13f20 + 0x70))();
        }
    }
    return iVar1;
}


/* fcn.00010468 @ 0x10468 */

void fcn.00010468(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0;
    ulong *puStackX_8;
    ulong uStackX_10;
    
    *0x13f20 = *(arg2 + 0x60);
    *0x13f28 = *(arg2 + 0x58);
    *0x13f18 = arg2;
    puStackX_8 = arg1;
    fcn.000121e0();
    noname_0 = 0x13920;
    iVar3 = fcn.00012210(0x13920);
    if (iVar3 == 0) {
        uVar4 = fcn.000103b0();
        fcn.00010360();
        uVar1 = in(0x1808);
        fcn.00010310(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x00010300();
        }
        fcn.00010310(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010360();
        }
        else {
            fcn.00010350();
        }
    }
    (**(*0x13f20 + 0x140))(0x13840,0,0x13f40);
    (**(*0x13f20 + 0x140))(0x13830,0,0x13f60);
    (**(*0x13f20 + 0x140))(0x137d8,0,0x13f50);
    (**(*0x13f20 + 0x140))(0x138b8,0,0x13f48);
    (**(*0x13f20 + 0x140))(0x13808);
    fcn.00010320(1,0,0,&puStackX_8);
    fcn.00012064(0x13898,0x13f68);
    iVar3 = (**(*0x13f20 + 0x140))(0x13888,0,&puStackX_8);
    *0x13f70 = '\0';
    if (-1 < iVar3) {
        uStackX_10 = 0;
        (**puStackX_8)(puStackX_8,0x13f70);
        if (*0x13f70 != '\0') {
            (*puStackX_8[1])(puStackX_8,&uStackX_10);
        }
    }
    fcn.00012210(0x13878);
    if (*0x13f80 == 0) {
        iVar3 = (**(*0x13f20 + 0x140))(0x13868,0,&puStackX_8);
        if (iVar3 < 0) {
            (**(*0x13f20 + 0x50))(0x200,8,fcn.0001225c,0,0x13f78);
            (**(*0x13f20 + 0xa8))(0x13868,*0x13f78,&uStackX_10);
        }
        else {
            fcn.0001225c(0,0);
        }
    }
    return;
}


/* fcn.000106a8 @ 0x106a8 */

ulong fcn.000106a8(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    uint8_t uVar3;
    ulong uStackX_8;
    int64_t iStackX_10;
    uchar auStackX_18 [8];
    
    iStackX_10 = arg1;
    uVar1 = (**(*0x13f20 + 0x148))(&iStackX_10,0x137c8,0x13900,0);
    if (*0x13f80 == 0) {
        uVar3 = 0;
    }
    else {
        uVar3 = *(*0x13f80 + 7);
    }
    if (((uVar3 & 0x40) != 0) && (uVar3 < '\0')) {
        uStackX_8 = 8;
        iVar2 = (**(*0x13f28 + 0x48))(L"BootNext",0x13740,0,&uStackX_8,auStackX_18);
        if (-1 < iVar2) {
            (**(*0x13f28 + 0x58))(L"BootNext",0x13740,7,0,0);
        }
    }
    return uVar1;
}


/* fcn.000121e0 @ 0x121e0 */

int64_t fcn.000121e0(void)

{
    if (*0x13f38 == 0) {
        fcn.00012064(0x13850,0x13f38);
    }
    return *0x13f38;
}


/* fcn.00012064 @ 0x12064 */

ulong fcn.00012064(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x13f18;
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


/* fcn.00012210 @ 0x12210 */

void fcn.00012210(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000121e0();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x0001223e:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x0001223e;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.000103b0 @ 0x103b0 */

uint64_t fcn.000103b0(void)

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


/* fcn.00010360 @ 0x10360 */

void fcn.00010360(void)

{
    return;
}


/* fcn.00010310 @ 0x10310 */

uint64_t fcn.00010310(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010302 @ 0x10302 */

void fcn.00010302(void)

{
    return;
}


/* fcn.00010350 @ 0x10350 */

void fcn.00010350(void)

{
    return;
}


/* fcn.00010320 @ 0x10320 */

uint64_t fcn.00010320(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.0001225c @ 0x1225c */

void fcn.0001225c(void)

{
    int64_t iVar1;
    int64_t aiStackX_18 [2];
    
    iVar1 = (**(*0x13f20 + 0x140))(0x13868,0,aiStackX_18);
    if (-1 < iVar1) {
        *0x13f80 = fcn.00011e68(0xd);
        if ((*0x13f80 != 0) && (*0x13f80 != aiStackX_18[0])) {
            section..text(*0x13f80,aiStackX_18[0],0xd);
        }
    }
    return;
}


/* fcn.00011e68 @ 0x11e68 */

void fcn.00011e68(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00011e38(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
}


/* fcn.00011e38 @ 0x11e38 */

ulong fcn.00011e38(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x13f20 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,int64_t arg2)

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


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 13504 named .text
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


/* fcn.00010d9c @ 0x10d9c */

ulong fcn.00010d9c(ulong param_1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x13f20 + 0x98))(param_1,0x137a8,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.00010f24 @ 0x10f24 */

ulong fcn.00010f24(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    ulong uVar2;
    int64_t arg1_00;
    uint32_t arg1_01;
    int64_t arg1_02;
    
    uVar2 = 0;
    if (arg2 == 0) {
        arg1_01 = 0x139b4;
        if (arg1 != 0) {
            arg1_01 = arg1;
        }
        uVar2 = fcn.00010e20(arg1_01);
    }
    else {
        uVar1 = *(arg2 + 2);
        arg1_00 = fcn.00011e38(arg1,uVar1 + 4);
        if (arg1_00 != 0) {
            if ((uVar1 != 0) && (arg1_00 != arg2)) {
                arg1_00 = section..text(arg1_00,arg2,uVar1);
            }
            arg1_02 = *(arg1_00 + 2) + arg1_00;
            if (arg1_02 != 0x139b4) {
                section..text(arg1_02,0x139b4,4);
            }
            uVar2 = fcn.00010e48(arg1,arg1_00);
            (**(*0x13f20 + 0x48))(arg1_00);
        }
    }
    return uVar2;
}


/* fcn.00012774 @ 0x12774 */

ulong fcn.00012774(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int16_t *piVar2;
    ulong uVar3;
    int64_t noname_0;
    int64_t iVar4;
    int16_t *in_stack_00000028;
    int64_t in_stack_00000030;
    int64_t in_stack_00000038;
    uint32_t in_stack_00000040;
    
    if ((in_stack_00000028 != NULL) && (in_stack_00000030 != 0)) {
        if (in_stack_00000038 == 0) {
            if (in_stack_00000040 != 0) {
                return 0x8000000000000002;
            }
        }
        else if (in_stack_00000040 == 0) {
            return 0x8000000000000002;
        }
        if (arg3 < 4) {
            noname_0 = arg1;
            fcn.000102c0(arg1,0x58);
            *(arg1 + 8) = arg3;
            iVar4 = 0;
            *arg1 = arg2;
            *(arg1 + 0xc) = arg4;
            iVar1 = *in_stack_00000028;
            piVar2 = in_stack_00000028;
            while (iVar1 != 0) {
                piVar2 = piVar2 + 1;
                iVar4 = iVar4 + 1;
                iVar1 = *piVar2;
            }
            uVar3 = fcn.00011e94(noname_0,iVar4 * 2 + 2,in_stack_00000028);
            *(arg1 + 0x10) = uVar3;
            uVar3 = fcn.00010e20(in_stack_00000030);
            *(arg1 + 0x18) = uVar3;
            if (in_stack_00000038 != 0) {
                uVar3 = fcn.00011e94(in_stack_00000030,in_stack_00000040,in_stack_00000038);
                *(arg1 + 0x20) = uVar3;
                *(arg1 + 0x28) = in_stack_00000040;
            }
            return 0;
        }
    }
    return 0x8000000000000002;
}


/* fcn.000126e0 @ 0x126e0 */

int64_t fcn.000126e0(uint32_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint in_register_0000000c;
    uint64_t *puVar3;
    int64_t in_R8;
    uint16_t auStackX_8 [4];
    
    puVar3 = CONCAT44(in_register_0000000c,arg1);
    if (puVar3[1] < 3) {
        uVar2 = *puVar3;
        if (uVar2 == 0x10000) {
            iVar1 = fcn.000122b4(puVar3[1],auStackX_8);
            if (iVar1 < 0) {
                return iVar1;
            }
            uVar2 = auStackX_8[0];
            *puVar3 = uVar2;
        }
        if (uVar2 < 0x10000) {
            iVar1 = fcn.000125b8(*(puVar3[1] * 8 + 0x13e78),*puVar3,in_R8);
            if (((-1 < iVar1) && (iVar1 = fcn.000123b4(arg1), iVar1 < 0)) && (puVar3[1] < 4)) {
                fcn.00012860(*puVar3,puVar3[1]);
            }
            return iVar1;
        }
    }
    return -0x7ffffffffffffffe;
}


/* fcn.00012cb8 @ 0x12cb8 */

int64_t fcn.00012cb8(int64_t arg1)

{
    uint16_t uVar1;
    int64_t arg3;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t arg3_00;
    int64_t iStackX_8;
    uint64_t uStackX_18;
    uchar auStack_58 [48];
    
    *arg1 = 0;
    fcn.000120c8(*0x13e80,0x13740,&iStackX_8,&uStackX_18);
    if (iStackX_8 == 0) {
        arg3 = 0;
    }
    else {
        *arg1 = uStackX_18 >> 1;
        arg3 = fcn.00011e38();
        uVar4 = 0;
        uVar3 = 0;
        if (*arg1 != 0) {
            arg3_00 = arg3;
            do {
                uVar1 = *(iStackX_8 + uVar3 * 2);
                fcn.00011048(auStack_58,0x2a,0x13e68,*0x13ea8);
                iVar2 = fcn.00012b7c(auStack_58,0x13740,arg3_00);
                if (iVar2 < 0) {
                    fcn.00012860(uVar1,1);
                }
                else {
                    uVar4 = uVar4 + 1;
                    arg3_00 = arg3_00 + 0x58;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < *arg1);
        }
        (**(*0x13f20 + 0x48))();
        if (uVar4 < *arg1) {
            arg3 = fcn.00011ed4(iStackX_8,*arg1 * 0x58,uVar4 * 0x58,arg3);
            *arg1 = uVar4;
        }
    }
    return arg3;
}


/* fcn.00011fd8 @ 0x11fd8 */

int64_t fcn.00011fd8(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint in_register_00000014;
    uint16_t *puVar1;
    uint in_R8;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_R8,arg3);
    puVar1 = CONCAT44(in_register_00000014,arg2);
    if (uVar2 == 0) {
        return 0;
    }
    for (; (((*arg1 != 0 && (*puVar1 != 0)) && (*arg1 == *puVar1)) && (1 < uVar2)); uVar2 = uVar2 - 1) {
        arg1 = arg1 + 2;
        puVar1 = puVar1 + 1;
    }
    return *arg1 - *puVar1;
}


/* fcn.00012860 @ 0x12860 */

ulong fcn.00012860(uint32_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    ulong uVar1;
    uint in_register_0000000c;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t arg3;
    uint64_t uStackX_8;
    int64_t aiStackX_18 [2];
    uchar auStack_58 [48];
    
    iVar3 = arg2;
    if (CONCAT44(in_register_0000000c,arg1) < 0x10000) {
        if (arg2 < 3) {
            fcn.000120c8(*(iVar3 * 8 + 0x13e78),0x13740,aiStackX_18,&uStackX_8);
            uVar2 = 0;
            if (uStackX_8 >> 1 != 0) {
                do {
                    if (*(aiStackX_18[0] + uVar2 * 2) == CONCAT44(in_register_0000000c,arg1)) {
                        arg1_00 = uVar2 * 2 + aiStackX_18[0];
                        arg3 = (uStackX_8 - 2) + uVar2 * -2;
                        if ((arg3 != 0) && (arg1_00 != arg1_00 + 2)) {
                            section..text(arg1_00,arg1_00 + 2,arg3);
                        }
                        (**(*0x13f28 + 0x58))(*(iVar3 * 8 + 0x13e78),0x13740,7,uStackX_8 - 2,aiStackX_18[0]);
                        break;
                    }
                    uVar2 = uVar2 + 1;
                } while (uVar2 < uStackX_8 >> 1);
            }
            if (aiStackX_18[0] != 0) {
                (**(*0x13f20 + 0x48))(aiStackX_18[0]);
            }
        }
        fcn.00011048(auStack_58,0x2a,0x13e68,*(iVar3 * 8 + 0x13ea0));
        uVar1 = (**(*0x13f28 + 0x58))(auStack_58,0x13740,0,0,0);
    }
    else {
        uVar1 = 0x8000000000000002;
    }
    return uVar1;
}


/* fcn.00012e2c @ 0x12e2c */

ulong fcn.00012e2c(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t arg1_00;
    
    if (arg1 == 0) {
        uVar1 = 0x800000000000000e;
    }
    else {
        if (arg2 != 0) {
            arg1_00 = arg1;
            do {
                fcn.00012dd0(arg1_00);
                arg1_00 = arg1_00 + 0x58;
                arg2 = arg2 + -1;
            } while (arg2 != 0);
        }
        (**(*0x13f20 + 0x48))(arg1);
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.000133ac @ 0x133ac */

ulong fcn.000133ac(void)

{
    int64_t iVar1;
    int64_t iStack_58;
    ulong *puStack_50;
    int64_t iStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    int64_t iStack_30;
    int64_t iStack_28;
    uchar auStack_18 [24];
    
    (**(*0x13f20 + 0x138))(2,0x13818,0,auStack_18,&puStack_50);
    iStack_58 = 0;
    if (*0x13f94 != '\0') {
        iStack_48 = (**(*0x13f20 + 0x98))(*puStack_50,0x13818,&iStack_58);
        if ((iStack_48 < 0) || (iStack_58 == 0)) {
            return 0x8000000000000003;
        }
        iStack_30 = (**(iStack_58 + 8))(iStack_58,*0x13f8c);
        iStack_40 = *(*0x13f18 + 0x40);
        iStack_28 = (**(iStack_40 + 0x28))(*(*0x13f18 + 0x40),*0x13f90);
        iStack_38 = *(*0x13f18 + 0x40);
        iVar1 = (**(iStack_38 + 0x20))(*(*0x13f18 + 0x40),*0x13f88);
        if (((iStack_30 < 0) || (iStack_28 < 0)) || (iVar1 < 0)) {
            return 0x8000000000000003;
        }
    }
    return 0;
}


/* fcn.0001219c @ 0x1219c */

void fcn.0001219c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    iVar1 = 0x120c4;
    if (arg2 != 0) {
        iVar1 = arg2;
    }
    (**(*0x13f20 + 0x170))(0x200,arg1,iVar1,0,0x13750,arg3);
    return;
}


/* fcn.000107b4 @ 0x107b4 */

int64_t fcn.000107b4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t arg1_00;
    uint64_t uVar2;
    uint auStackX_10 [2];
    uint64_t uStackX_18;
    int64_t iStackX_20;
    uint32_t var_77h;
    int64_t var_7fh;
    uint uStack_a8;
    ulong uStack_a4;
    ulong uStack_9c;
    ulong uStack_90;
    ulong uStack_88;
    int64_t iStack_80;
    uchar auStack_78 [39];
    int32_t var_49h;
    int64_t var_45h;
    int64_t var_3dh;
    int64_t var_31h;
    int64_t var_29h;
    int64_t var_21h;
    int64_t var_19h;
    
    auStackX_10[0] = arg2;
    if (arg1 != 0) {
        uStack_a4 = *0x13798;
        uStack_9c = *0x137a0;
        uStack_a8 = 0x140604;
        iVar1 = (**(*0x13f20 + 0x138))(2,0x137b8,0,&uStackX_18,&iStackX_20);
        if (-1 < iVar1) {
            uVar2 = 0;
            if (uStackX_18 != 0) {
                while (iVar1 = (**(*0x13f20 + 0x98))(*(iStackX_20 + uVar2 * 8),0x137b8,&iStack_80), -1 < iVar1) {
                    uStack_88 = 0;
                    uStack_90 = 0;
                    iVar1 = (**(iStack_80 + 0x18))(iStack_80,0x13798,0x10,0,&uStack_88,&uStack_90,auStackX_10);
                    if ((-1 < iVar1) || (uVar2 = uVar2 + 1, uStackX_18 <= uVar2)) break;
                }
            }
            if (uVar2 == uStackX_18) {
                (**(*0x13f20 + 0x48))();
            }
            else {
                arg1_00 = fcn.00010d9c(*(iStackX_20 + uVar2 * 8));
                fcn.00010f24(arg1_00,&uStack_a8);
                if (uStackX_18 != 0) {
                    (**(*0x13f20 + 0x48))(iStackX_20);
                }
                if (-1 < iVar1) {
                    iVar1 = fcn.00012774(auStack_78,0x10000,1,0xb);
                    if (-1 < iVar1) {
                        iVar1 = fcn.000126e0(auStack_78);
                        return iVar1;
                    }
                    return iVar1;
                }
            }
        }
    }
    return -0x7ffffffffffffff2;
}


/* fcn.00010d28 @ 0x10d28 */

void fcn.00010d28(void)

{
    uint auStackX_8 [8];
    
    auStackX_8[0] = 0x4ff7f;
    fcn.000120c8(0x139a8,0x13740,0x13f08,0x13f10);
    (**(*0x13f28 + 0x58))(L"ConIn",0x13740,7,4,auStackX_8);
    return;
}


/* fcn.000120c8 @ 0x120c8 */

int64_t fcn.000120c8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uStackX_18;
    
    uStackX_18 = 0;
    *arg3 = 0;
    if (arg4 != 0) {
        *arg4 = 0;
    }
    iVar1 = (**(*0x13f28 + 0x48))(arg1,arg2,0,&uStackX_18,*arg3);
    if (iVar1 == -0x7ffffffffffffffb) {
        iVar1 = fcn.00011e38(0x8000000000000005,uStackX_18);
        *arg3 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x13f28 + 0x48))(arg1,arg2,0,&uStackX_18,iVar1);
            if (iVar1 < 0) {
                (**(*0x13f20 + 0x48))(*arg3);
                *arg3 = 0;
            }
            if (arg4 != 0) {
                *arg4 = uStackX_18;
            }
        }
    }
    return iVar1;
}


/* fcn.00011f70 @ 0x11f70 */

int64_t fcn.00011f70(void)

{
    if (*0x13f30 == 0) {
        (**(*0x13f20 + 0x140))(0x13778,0,0x13f30);
    }
    return *0x13f30;
}


/* fcn.000134ec @ 0x134ec */

void fcn.000134ec(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint8_t auStackX_8 [8];
    int8_t var_18h_2;
    uint32_t var_bp_20h;
    int64_t var_28h;
    int64_t var_30h;
    ulong uStack_48;
    int64_t var_38h;
    int64_t var_30h_2;
    int8_t var_28h_2;
    uint uStack_2c;
    uint uStack_28;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    
    uStack_48 = 0;
    _var_28h_2 = 0x1d5e9bbe;
    uStack_2c = 0x4c8047bd;
    uStack_28 = 0x8a935699;
    var_1ch = 0x7edc65ad;
    auStackX_8[0] = 0xc0;
    (**(*0x13f20 + 0x138))(2,0x137e8,0,&var_18h_2,&var_bp_20h);
    uVar2 = 0;
    if (_var_18h_2 != 0) {
        do {
            iVar1 = (**(*0x13f20 + 0x98))(*(_var_bp_20h + uVar2 * 8),0x137f8,&uStack_48);
            if (-1 < iVar1) {
                (**(*0x13f20 + 0x98))(*(_var_bp_20h + uVar2 * 8),0x137e8,&var_28h);
                (**(var_28h + 8))(var_28h,&var_38h);
                auStackX_8[0] = var_30h_2;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < _var_18h_2);
    }
    (**(*0x13f28 + 0x58))(L"TdsToggleState",&var_28h_2,2,1,auStackX_8);
    auStackX_8[0] = auStackX_8[0] & 0xbf;
    uVar2 = 0;
    if (_var_18h_2 != 0) {
        do {
            iVar1 = (**(*0x13f20 + 0x98))(*(_var_bp_20h + uVar2 * 8),0x137e8,&var_28h);
            if (-1 < iVar1) {
                (**(var_28h + 0x18))(var_28h,auStackX_8);
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < _var_18h_2);
    }
    return;
}


/* fcn.000132d8 @ 0x132d8 */

ulong fcn.000132d8(void)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iStack_28;
    ulong *apuStack_20 [2];
    uchar auStack_10 [16];
    
    (**(*0x13f20 + 0x138))(2,0x13818,0,auStack_10,apuStack_20);
    iStack_28 = 0;
    iVar1 = (**(*0x13f20 + 0x98))(*apuStack_20[0],0x13818,&iStack_28);
    if ((iVar1 < 0) || (iStack_28 == 0)) {
        uVar2 = 0x8000000000000003;
    }
    else {
        *0x13f88 = *(*(*(*0x13f18 + 0x40) + 0x48) + 4);
        *0x13f90 = *(*(*(*0x13f18 + 0x40) + 0x48) + 8);
        *0x13f8c = *(*(iStack_28 + 0x18) + 4);
        *0x13f94 = 1;
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00010fec @ 0x10fec */

bool fcn.00010fec(uint32_t arg1)

{
    uint in_register_0000000c;
    char *pcVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    pcVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    if (pcVar1 != NULL) {
        while( true ) {
            if ((*pcVar1 == '\x7f') && (pcVar1[1] == -1)) {
                return *(pcVar1 + 2) == 4;
            }
            uVar2 = *(pcVar1 + 2);
            if ((((uVar2 < 4) || (~uVar3 < uVar2)) || (uVar3 = uVar3 + uVar2, 0xfffffffffffffffb < uVar3)) ||
               (((*pcVar1 == '\x04' && (pcVar1[1] == '\x04')) && (*(pcVar1 + (uVar2 - 2)) != 0)))) break;
            pcVar1 = pcVar1 + uVar2;
        }
    }
    return false;
}


/* fcn.00010dd0 @ 0x10dd0 */

char * fcn.00010dd0(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.00010fec(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.00011e94 @ 0x11e94 */

void fcn.00011e94(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00011e38();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00010e20 @ 0x10e20 */

ulong fcn.00010e20(uint32_t arg1)

{
    int64_t arg2;
    int64_t arg1_00;
    ulong uVar1;
    ulong extraout_RAX;
    uint in_register_0000000c;
    
    arg2 = CONCAT44(in_register_0000000c,arg1);
    fcn.00010dd0(CONCAT44(in_register_0000000c,arg1));
    uVar1 = 0;
    if (arg1_00 != 0) {
        fcn.00011e94(CONCAT44(in_register_0000000c,arg1),arg1_00,arg2);
        uVar1 = extraout_RAX;
    }
    return uVar1;
}


/* fcn.00010e48 @ 0x10e48 */

int64_t fcn.00010e48(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t arg3;
    int64_t arg1_00;
    
    if (arg1 == 0) {
        arg1 = 0x139b4;
        if (arg2 != 0) {
            arg1 = arg2;
        }
    }
    else if (arg2 != 0) {
        cVar1 = fcn.00010fec(arg1);
        if ((cVar1 == '\0') || (cVar1 = fcn.00010fec(arg2), cVar1 == '\0')) {
            return 0;
        }
        iVar2 = fcn.00010dd0(arg1);
        arg3 = fcn.00010dd0(arg2);
        arg1_00 = fcn.00011e38();
        if (arg1_00 == 0) {
            return 0;
        }
        if ((iVar2 != 0) && (arg1_00 != arg1)) {
            arg1_00 = section..text(arg1_00,arg1,iVar2);
        }
        iVar2 = iVar2 + -4 + arg1_00;
        if (arg3 == 0) {
            return arg1_00;
        }
        if (iVar2 == arg2) {
            return arg1_00;
        }
        section..text(iVar2,arg2,arg3);
        return arg1_00;
    }
    iVar2 = fcn.00010e20(arg1);
    return iVar2;
}


/* fcn.000110ac @ 0x110ac */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.000110ac(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

{
    uint16_t uVar1;
    uint32_t uVar2;
    char cVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    char *pcVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    char cVar13;
    uint64_t uVar14;
    char *pcVar15;
    uint32_t uVar16;
    uint64_t *puVar17;
    uint64_t *puVar18;
    int64_t *piVar19;
    uint8_t *puVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    bool bVar23;
    int64_t var_10h;
    uint64_t uStackX_18;
    uint8_t *puStackX_20;
    uint64_t *in_stack_00000028;
    char cStack0000000000000030;
    int8_t var_68h;
    int64_t var_70h_2;
    char *pcStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t *puStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    uint64_t uStack_98;
    int64_t iStack_90;
    int64_t var_80h;
    int64_t var_78h;
    int32_t var_70h;
    int32_t var_6ch;
    int64_t var_68h_2;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_bp_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int8_t var_18h;
    
    puVar17 = NULL;
    puStack_b0 = NULL;
    if (arg2 == 0) {
        uVar22 = arg3 & 0x2000;
        if ((arg3 & 0x2000U) == 0) goto code_r0x0001110b;
    }
    else {
        uVar22 = arg3 & 0x2000;
        if (((arg3 & 0x2000U) == 0) && (arg1 == 0)) {
            return 0;
        }
    }
    if (arg4 == 0) {
        return 0;
    }
code_r0x0001110b:
    uVar5 = 1;
    if ((arg3 & 0x40U) == 0) {
        if (1000000 < arg2) {
            return 0;
        }
        uVar14 = uVar5;
    }
    else {
        if (1000000 < arg2) {
            return 0;
        }
        uVar14 = 2;
    }
    if ((arg3 >> 8 & 1) == 0) {
        uVar21 = fcn.00012040(arg4);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.00012014(arg4,0xf4241);
        if (1000000 < uVar5) {
            return 0;
        }
        puVar17 = NULL;
        uStack_98 = 0xffff;
        uVar5 = 2;
    }
    var_78h = uVar5;
    if (uVar22 == 0) {
        if (arg2 == 0) {
            return 0;
        }
    }
    else {
        arg1 = arg1 & -(arg2 != 0);
    }
    _var_70h = NULL;
    uStack_d0 = 0;
    pcStack_d8 = NULL;
    if (arg1 != NULL) {
        _var_70h = arg1;
        pcStack_d8 = arg1 + (arg2 + -1) * uVar14;
    }
    if (uVar5 == 1) {
        iVar4 = 0;
    }
    else {
        iVar4 = *(arg4 + 1) << 8;
    }
    uStack_a8 = (*arg4 | iVar4) & uStack_98;
    puStackX_20 = arg4;
    while( true ) {
        uVar22 = 1;
        if ((uStack_a8 == 0) || ((arg1 != NULL && (pcStack_d8 <= arg1)))) break;
        uStack_a0 = 0;
        uVar5 = 0;
        iStack_90 = 0;
        cVar3 = '\0';
        uVar21 = arg3 & 0x2140;
        uStack_b8 = 1;
        cVar13 = '\0';
        bVar23 = false;
        _cStack0000000000000030 = _cStack0000000000000030 & 0xffffffffffffff00;
        uStack_c0 = 0;
        uStackX_18 = uVar21;
        if (uStack_a8 == 10) {
            puVar20 = puStackX_20 + var_78h;
            pcVar8 = 0x13a44;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar20[1] << 8;
            }
            uStack_a8 = (iVar4 | *puVar20) & uStack_98;
            if (uStack_a8 != 0xd) {
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0xd) {
            puVar20 = puStackX_20 + var_78h;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar20[1] << 8;
            }
            uVar10 = iVar4 | *puVar20;
code_r0x000114c6:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x13a44;
            }
            else {
                pcVar8 = 0x13a48;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x0001125d:
            while( true ) {
                puStackX_20 = puVar20 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puStackX_20[1] << 8;
                }
                uStack_a8 = (*puStackX_20 | iVar4) & uStack_98;
                if (uStack_a8 < 0x2e) break;
                if (uStack_a8 == 0x2e) {
                    uVar21 = uVar21 | 0x800;
                    goto code_r0x00011400;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x00011417;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x00011400;
                        }
                        goto code_r0x00011417;
                    }
                }
                uVar5 = 0;
                uStack_c0 = 0;
                if (0x2f < uStack_a8) {
                    do {
                        if (0x39 < uStack_a8) break;
                        puStackX_20 = puStackX_20 + var_78h;
                        uVar5 = uStack_a8 + (uVar5 * 5 + -0x18) * 2;
                        if (var_78h == 1) {
                            iVar4 = 0;
                        }
                        else {
                            iVar4 = puStackX_20[1] << 8;
                        }
                        uStack_a8 = (*puStackX_20 | iVar4) & uStack_98;
                    } while (0x2f < uStack_a8);
                    uStack_c0 = uVar5;
                }
                puVar20 = puStackX_20 + -var_78h;
                uVar5 = uStack_c0;
                if ((uVar21 & 0x800) == 0) {
                    uVar21 = uVar21 | 0x200;
                    uStack_a0 = uStack_c0;
                    uStackX_18 = uVar21;
                }
                else {
                    uVar22 = uStack_c0;
                    uStack_b8 = uStack_c0;
                }
            }
            if (uStack_a8 == 0x2d) {
                uVar21 = uVar21 | 1;
code_r0x00011400:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x0001125d;
            }
            if (uStack_a8 != 0) {
                if (uStack_a8 == 0x20) {
                    uVar21 = uVar21 | 4;
                }
                else {
                    if (uStack_a8 == 0x2a) {
                        if ((uVar21 & 0x800) == 0) {
                            uVar21 = uVar21 | 0x200;
                            if (puVar17 == NULL) {
                                uStack_a0 = *puVar18;
                                puVar18 = puVar18 + 1;
                                in_stack_00000028 = puVar18;
                            }
                            else {
                                uStack_a0 = *puVar17;
                                puVar17 = puVar17 + 1;
                                puStack_b0 = puVar17;
                            }
                            puVar20 = puStackX_20;
                            uStackX_18 = uVar21;
                        }
                        else {
                            if (puVar17 == NULL) {
                                uStack_b8 = *puVar18;
                                puVar18 = puVar18 + 1;
                                in_stack_00000028 = puVar18;
                            }
                            else {
                                uStack_b8 = *puVar17;
                                puVar17 = puVar17 + 1;
                                puStack_b0 = puVar17;
                            }
                            puVar20 = puStackX_20;
                            uVar22 = uStack_b8;
                        }
                        goto code_r0x0001125d;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x00011417;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x00011400;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x00011417:
            puVar20 = puStackX_20;
            if (uStack_a8 < 0x68) {
                if (uStack_a8 == 0x67) {
                    if (puVar17 == NULL) {
                        uVar22 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        uVar22 = *puVar17;
                        puStack_b0 = puVar17 + 1;
                    }
                    if (uVar22 == 0) {
                        pcVar8 = "<null guid>";
                    }
                    else {
                        fcn.00011e14(&var_68h_2,0x26,0,0x139d8);
                        pcVar8 = &var_68h_2;
                        uVar5 = uStack_c0;
                        cVar13 = cStack0000000000000030;
                    }
                    uVar22 = uStack_b8;
                }
                else {
                    if (uStack_a8 != 10) {
                        if (uStack_a8 == 0xd) {
                            puVar20 = puStackX_20 + var_78h;
                            if (var_78h == 1) {
                                iVar4 = 0;
                            }
                            else {
                                iVar4 = puVar20[1] << 8;
                            }
                            uVar10 = iVar4 | *puVar20;
                            goto code_r0x000114c6;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x000116af;
                        if (uStack_a8 == 0x58) goto code_r0x000117a4;
                        if (uStack_a8 == 0x61) goto code_r0x000116b8;
                        if (uStack_a8 == 99) {
                            if (puVar17 == NULL) {
                                uVar1 = *puVar18;
                                in_stack_00000028 = puVar18 + 1;
                            }
                            else {
                                uVar1 = *puVar17;
                                puStack_b0 = puVar17 + 1;
                            }
                            var_80h = uVar1;
                            pcVar8 = &var_80h;
                            goto code_r0x0001123e;
                        }
                        if (uStack_a8 != 100) goto code_r0x0001123a;
                        goto code_r0x000117bb;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x13a44;
                    if (var_78h == 1) {
                        iVar4 = 0;
                    }
                    else {
                        iVar4 = puVar20[1] << 8;
                    }
                    uStack_a8 = (iVar4 | *puVar20) & uStack_98;
                    if (uStack_a8 != 0xd) {
                        puVar20 = puStackX_20;
                    }
                }
                goto code_r0x000119e8;
            }
            if (uStack_a8 != 0x70) {
                if (uStack_a8 == 0x72) {
                    if (puVar17 == NULL) {
                        uVar10 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        uVar10 = *puVar17;
                        puStack_b0 = puVar17 + 1;
                    }
                    pcVar8 = &var_68h_2;
                    if (uVar10 < 0) {
                        if ((uVar10 & 0x7fffffffffffffff) - 1 < 0x21) {
                            pcVar8 = (uVar10 & 0x7fffffffffffffff) * 0x15;
                            iVar12 = 0x13adb;
                            goto code_r0x0001176b;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x0001176b:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x000119e8;
                    }
                    fcn.00011e14(&var_68h_2,0x26,0,0x13a3c);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x000116af:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x000116b8:
                        if (puVar17 == NULL) {
                            pcVar8 = *puVar18;
                            in_stack_00000028 = puVar18 + 1;
                        }
                        else {
                            pcVar8 = *puVar17;
                            puStack_b0 = puVar17 + 1;
                        }
                        if (pcVar8 == NULL) {
                            uVar21 = uVar21 & 0xfffffffffffffbff;
                            pcVar8 = "<null string>";
                            uStackX_18 = uVar21;
                        }
                        uVar22 = uVar22 & -((uVar21 & 0x800) != 0);
                        goto code_r0x000119e8;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x0001123a;
                            goto code_r0x000117a8;
                        }
                        goto code_r0x000117ad;
                    }
                    if (puVar17 == NULL) {
                        uVar10 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        puStack_b0 = puVar17 + 1;
                        uVar10 = *puVar17;
                    }
                    if (uVar10 == 0) {
                        pcVar8 = "<null time>";
                        goto code_r0x000119e8;
                    }
                    fcn.00011e14(&var_68h_2,0x26,0,0x13a20);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x000119e8;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x000117a4:
            uVar21 = uVar21 | 0x20;
code_r0x000117a8:
            uVar21 = uVar21 | 0x80;
code_r0x000117ad:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x000117bb:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x000117fd;
                }
                uVar5 = *puVar18;
                in_stack_00000028 = puVar18 + 1;
            }
            else if (puVar17 == NULL) {
                uVar5 = *puVar18;
                in_stack_00000028 = puVar18 + 1;
            }
            else {
                uVar5 = *puVar17;
code_r0x000117fd:
                puStack_b0 = puVar17 + 1;
            }
            cVar3 = (uVar21 & 4) << 3;
            if ((uVar21 & 2) != 0) {
                cVar3 = '+';
            }
            bVar23 = (uVar21 & 8) != 0;
            if (uVar21 < '\0') {
                uVar16 = 0x10;
                bVar23 = false;
                if (((uVar21 & 0x10) == 0) && (uVar2 = 0x10, uVar5 < 0)) {
code_r0x00011885:
                    uVar16 = uVar2;
                    uVar5 = uVar5 & 0xffffffff;
                }
            }
            else {
                uVar16 = 10;
                if ((uVar21 & 8) != 0) {
                    uVar21 = uVar21 & 0xffffffffffffffdf;
                    uVar22 = 1;
                }
                if ((uVar5 < 0) && (uVar21 >> 0xe == 0)) {
                    cVar3 = '-';
                    uVar5 = -uVar5;
                }
                else {
                    uVar2 = 10;
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x00011885;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar10 = uVar5;
            do {
                uVar6 = uVar10 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = "0123456789ABCDEFD"[uVar10 % uVar16];
                uVar10 = uVar6;
            } while (uVar6 != 0);
            uStack_c0 = piVar19 - &var_68h_2;
            if (uVar5 == 0) {
                uStack_c0 = uStack_c0 & -(uVar22 != 0);
            }
            pcVar8 = &var_68h_2 + uStack_c0;
            iStack_90 = 3 - uStack_c0 % 3;
            if (uStack_c0 % 3 == 0) {
                iStack_90 = 0;
            }
            if ((bVar23) && (uStack_c0 != 0)) {
                uStack_c0 = uStack_c0 + (uStack_c0 - 1) / 3;
            }
            if (cVar3 != '\0') {
                uStack_c0 = uStack_c0 + 1;
                uVar22 = uVar22 + 1;
            }
            uVar21 = uVar21 | 0x1000;
            cVar13 = '\x01';
            uVar5 = uStack_c0;
            uStackX_18 = uVar21;
            if ((uVar21 & 0xa21) == 0x220) {
                uVar22 = uStack_a0;
            }
        }
        else {
code_r0x0001123a:
            pcVar8 = &uStack_a8;
code_r0x0001123e:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x000119e8:
        puStackX_20 = puVar20;
        uVar16 = uVar21;
        iVar12 = ((uVar21 & 0x400) != 0) + 1;
        _cStack0000000000000030 = (-((uVar21 & 0x400) != 0) & 0xff00) + 0xff;
        if ((uVar21 >> 0xc & 1) == 0) {
            uVar5 = 0;
            pcVar15 = pcVar8 + 1;
            while ((((pcVar15[-1] != '\0' || (((uVar21 & 0x400) != 0 && (*pcVar15 != '\0')))) &&
                    ((uVar5 < uVar22 || ((uVar21 >> 0xb & 1) == 0)))) &&
                   ((_cStack0000000000000030 & (*pcVar15 << 8 | pcVar15[-1])) != 0))) {
                uVar5 = uVar5 + 1;
                pcVar15 = pcVar15 + iVar12;
            }
            uStack_c0 = uVar5;
        }
        else {
            iVar12 = -iVar12;
        }
        if (uVar22 < uVar5) {
            uVar22 = uVar5;
        }
        uVar10 = uVar16 & 0x201;
        var_40h = uVar10;
        pcVar15 = pcStack_d8;
        if (uVar10 == 0x200) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar22) * uVar14;
            if (((uVar21 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00011078(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00011078(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
            }
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar6, (uVar21 & 0x2000) == 0)) && (arg1 != NULL)) {
                iVar9 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar6 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar6;
                    iVar9 = iVar9 + 1;
                } while (iVar9 < 1);
            }
        }
        else {
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar14, (uVar21 >> 0xd & 1) == 0)) && (arg1 != NULL)) {
                iVar9 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar14 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar14;
                    iVar9 = iVar9 + 1;
                } while (iVar9 < 1);
            }
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00011078(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
            }
        }
        arg3 = uVar21;
        if ((cVar3 != '\0') < uStack_c0) {
            uVar5 = cVar3 != '\0';
            iVar9 = iStack_90;
            do {
                if ((*pcVar8 == '\0') && ((iVar12 < 2 || (*(pcVar8 + 1) == '\0')))) break;
                uStack_d0 = uStack_d0 + uVar6;
                uVar10 = *pcVar8 & _cStack0000000000000030;
                if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                    iVar11 = 0;
                    do {
                        if (pcStack_d8 <= arg1) break;
                        *arg1 = uVar10;
                        if (uVar6 != 1) {
                            *(arg1 + 1) = uVar10 >> 8;
                        }
                        arg1 = arg1 + uVar6;
                        iVar11 = iVar11 + 1;
                    } while (iVar11 < 1);
                }
                pcVar8 = pcVar8 + iVar12;
                uVar10 = uVar5 + 1;
                if ((bVar23) && (iVar9 = iVar9 + 1, iVar9 == 3)) {
                    iVar11 = 0;
                    uVar10 = uVar5 + 2;
                    if (uStack_c0 <= uVar10) break;
                    uStack_d0 = uStack_d0 + uVar6;
                    iVar9 = iVar11;
                    if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                        iVar7 = 0;
                        do {
                            iVar9 = iVar11;
                            if (pcStack_d8 <= arg1) break;
                            *arg1 = ',';
                            if (uVar6 != 1) {
                                *(arg1 + 1) = '\0';
                            }
                            arg1 = arg1 + uVar6;
                            iVar7 = iVar7 + 1;
                            iVar9 = 0;
                        } while (iVar7 < 1);
                    }
                }
                uVar5 = uVar10;
            } while (uVar10 < uStack_c0);
            arg3 = uStackX_18;
            uVar10 = var_40h;
        }
        if (uVar10 == 0x201) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar22) * uVar6;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00011078(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        puStackX_20 = puStackX_20 + var_78h;
        if (var_78h == 1) {
            iVar4 = 0;
        }
        else {
            iVar4 = puStackX_20[1] << 8;
        }
        uStack_a8 = (iVar4 | *puStackX_20) & uStack_98;
        puVar17 = puStack_b0;
    }
    iVar12 = 0;
    if ((arg3 >> 0xd & 1) != 0) {
        return uStack_d0 / uVar14;
    }
    pcVar8 = arg1;
    do {
        if (pcStack_d8 + uVar14 <= pcVar8) break;
        *pcVar8 = '\0';
        if (uVar14 != 1) {
            pcVar8[1] = '\0';
        }
        pcVar8 = pcVar8 + uVar14;
        iVar12 = iVar12 + 1;
    } while (iVar12 < 1);
    return (arg1 - _var_70h) / uVar14;
}


/* fcn.00012014 @ 0x12014 */

uint64_t fcn.00012014(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
        do {
            if (arg2 - 1U <= uVar1) {
                return arg2;
            }
            uVar1 = uVar1 + 1;
        } while (*(CONCAT44(in_register_0000000c,arg1) + uVar1 * 2) != 0);
        return uVar1;
    }
    return 0;
}


/* fcn.00012040 @ 0x12040 */

uint64_t fcn.00012040(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != '\0')) {
        while (uVar1 < 1000000) {
            uVar1 = uVar1 + 1;
            if (*(uVar1 + CONCAT44(in_register_0000000c,arg1)) == '\0') {
                return uVar1;
            }
        }
        uVar1 = 0xf4241;
    }
    return uVar1;
}


/* fcn.00011e14 @ 0x11e14 */

void fcn.00011e14(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.000110ac(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00011078 @ 0x11078 */

uchar * fcn.00011078(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_register_0000000c;
    uchar *puVar1;
    int64_t iVar2;
    int64_t in_stack_00000028;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = 0;
    if (0 < arg3) {
        do {
            if (arg2 <= puVar1) {
                return puVar1;
            }
            *puVar1 = arg4;
            if (in_stack_00000028 != 1) {
                puVar1[1] = arg4 >> 8;
            }
            puVar1 = puVar1 + in_stack_00000028;
            iVar2 = iVar2 + 1;
        } while (iVar2 < arg3);
    }
    return puVar1;
}


/* fcn.00011048 @ 0x11048 */

void fcn.00011048(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.000110ac(arg1,arg2 >> 1,0x140,arg3,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00013624 @ 0x13624 */

ulong fcn.00013624(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint *puVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t arg3;
    ulong uVar5;
    
    arg3 = 0;
    uVar4 = 0x2c;
    if (arg2 != 0) {
        uVar3 = 0xffff;
        iVar1 = fcn.00012014(arg2,0xffff);
        arg3 = iVar1 * 2 + 2;
        uVar4 = iVar1 * 2 + 0x2e;
        if (uVar3 < uVar4) {
            return 0x8000000000000005;
        }
    }
    puVar2 = fcn.00011e38();
    if (puVar2 == NULL) {
        uVar5 = 0x8000000000000009;
    }
    else {
        *puVar2 = 0x10000;
        *(puVar2 + 2) = *0x13740;
        *(puVar2 + 4) = *0x13748;
        puVar2[6] = 0;
        puVar2[7] = 0xffffffff;
        puVar2[8] = 0;
        puVar2[9] = 0;
        *(puVar2 + 10) = 1;
        *(puVar2 + 1) = uVar4;
        *(puVar2 + 6) = 0x2c;
        if (((arg2 != 0) && (arg3 != 0)) && (puVar2 + 0xb != arg2)) {
            section..text(puVar2 + 0xb,arg2,arg3);
        }
        uVar5 = (**(arg1 + 0x18))(puVar2);
        (**(*0x13f20 + 0x48))(puVar2);
    }
    return uVar5;
}


/* fcn.000122b4 @ 0x122b4 */

ulong fcn.000122b4(int64_t arg1,int64_t arg2)

{
    uint16_t *puVar1;
    ulong uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint16_t *puStackX_18;
    uint64_t uStackX_20;
    int64_t aiStack_18 [2];
    
    fcn.000120c8(*(arg1 * 8 + 0x13e78),0x13740,aiStack_18,&uStackX_20);
    puStackX_18 = NULL;
    if (arg1 == 2) {
        fcn.000120c8(0x13990,0x13740,&puStackX_18,0);
    }
    puVar1 = puStackX_18;
    uVar4 = 0;
    uStackX_20 = uStackX_20 >> 1;
    uVar5 = (puStackX_18 != NULL) + uStackX_20;
    if (uVar5 != 0) {
        do {
            uVar3 = 0;
            if (uStackX_20 != 0) {
                do {
                    if (uVar4 == *(aiStack_18[0] + uVar3 * 2)) break;
                    uVar3 = uVar3 + 1;
                } while (uVar3 < uStackX_20);
            }
        } while (((uVar3 != uStackX_20) || ((puStackX_18 != NULL && (uVar4 == *puStackX_18)))) &&
                (uVar4 = uVar4 + 1, uVar4 < uVar5));
    }
    if (aiStack_18[0] != 0) {
        (**(*0x13f20 + 0x48))(aiStack_18[0]);
    }
    if (puVar1 != NULL) {
        (**(*0x13f20 + 0x48))(puVar1);
    }
    if (uVar4 == 0x10000) {
        uVar2 = 0x8000000000000009;
    }
    else {
        *arg2 = uVar4;
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.000125b8 @ 0x125b8 */

//WARNING: Removing unreachable block (ram,0x00012641)
//WARNING: Removing unreachable block (ram,0x00012646)

ulong fcn.000125b8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t arg3_00;
    uint64_t uVar3;
    int16_t *piVar4;
    ulong uVar5;
    uint64_t uStackX_18;
    int16_t *piStackX_20;
    
    uStackX_18 = arg3;
    fcn.000120c8(arg1,0x13740,&piStackX_20,&uStackX_18);
    arg3_00 = uStackX_18;
    uVar3 = 0;
    if (uStackX_18 >> 1 != 0) {
        do {
            if (piStackX_20[uVar3] == arg2) {
                uVar5 = 0x8000000000000014;
                goto code_r0x000126a9;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < uStackX_18 >> 1);
    }
    iVar1 = uStackX_18 + 2;
    piVar4 = fcn.00011e38();
    if (((arg3_00 != 0) && (arg3_00 != 0)) && (piVar4 + 1 != piStackX_20)) {
        section..text(piVar4 + 1,piStackX_20,arg3_00);
    }
    iVar2 = *0x13f28;
    *piVar4 = arg2;
    uVar5 = (**(iVar2 + 0x58))(arg1,0x13740,7,iVar1,piVar4);
    (**(*0x13f20 + 0x48))(piVar4);
code_r0x000126a9:
    if (piStackX_20 != NULL) {
        (**(*0x13f20 + 0x48))(piStackX_20);
    }
    return uVar5;
}


/* fcn.000123b4 @ 0x123b4 */

ulong fcn.000123b4(uint32_t arg1)

{
    int16_t iVar1;
    uint32_t uVar2;
    int16_t *piVar3;
    ushort uVar4;
    int64_t iVar5;
    uint *puVar6;
    int64_t iVar7;
    uint in_register_0000000c;
    int64_t *piVar8;
    int64_t iVar9;
    int64_t iVar10;
    int16_t *piVar11;
    int16_t *arg2;
    ulong uVar12;
    int16_t aiStackX_8 [4];
    int64_t iStackX_10;
    uchar auStack_58 [48];
    
    piVar8 = CONCAT44(in_register_0000000c,arg1);
    if (*piVar8 != 0x10000) {
        iVar7 = 0;
        if ((piVar8[3] != 0) && (*(piVar8 + 1) < 4)) {
            aiStackX_8[0] = 0;
            arg2 = aiStackX_8;
            if (piVar8[2] != 0) {
                arg2 = piVar8[2];
            }
            iVar1 = *arg2;
            piVar3 = arg2;
            iVar10 = iVar7;
            while (iVar1 != 0) {
                piVar3 = piVar3 + 1;
                iVar10 = iVar10 + 1;
                iVar1 = *piVar3;
            }
            iVar5 = fcn.00010dd0(piVar8[3]);
            uVar2 = *(piVar8 + 5);
            puVar6 = fcn.00011e38();
            *puVar6 = *(piVar8 + 0xc);
            uVar4 = fcn.00010dd0(piVar8[3]);
            *(puVar6 + 1) = uVar4;
            piVar11 = puVar6 + 6;
            iVar1 = *arg2;
            piVar3 = arg2;
            iVar9 = iVar7;
            while (iVar1 != 0) {
                piVar3 = piVar3 + 1;
                iVar9 = iVar9 + 1;
                iVar1 = *piVar3;
            }
            iVar9 = iVar9 * 2 + 2;
            if ((iVar9 != 0) && (piVar11 != arg2)) {
                section..text(piVar11,arg2,iVar9);
            }
            for (; *arg2 != 0; arg2 = arg2 + 1) {
                iVar7 = iVar7 + 1;
            }
            piVar11 = piVar11 + iVar7 + 1;
            iVar7 = fcn.00010dd0(piVar8[3]);
            if ((iVar7 != 0) && (piVar11 != piVar8[3])) {
                section..text(piVar11,piVar8[3],iVar7);
            }
            iVar7 = fcn.00010dd0(piVar8[3]);
            if ((*(piVar8 + 5) != 0) && (piVar11 + iVar7 != piVar8[4])) {
                section..text(piVar11 + iVar7,piVar8[4],*(piVar8 + 5));
            }
            fcn.00011048(auStack_58,0x2a,0x13e68,*(piVar8[1] * 8 + 0x13ea0));
            uVar12 = 7;
            if (piVar8[1] == 3) {
                iVar7 = (**(*0x13f20 + 0x140))(0x138a8,0,&iStackX_10);
                if ((-1 < iVar7) && (iStackX_10 != 0)) {
                    fcn.00013624(iStackX_10,auStack_58);
                }
                uVar12 = 6;
            }
            uVar12 = (**(*0x13f28 + 0x58))(auStack_58,0x13740,uVar12,iVar5 + (iVar10 + 4) * 2 + uVar2,puVar6);
            (**(*0x13f20 + 0x48))(puVar6);
            return uVar12;
        }
    }
    return 0x8000000000000002;
}


/* fcn.00012a5c @ 0x12a5c */

uint64_t fcn.00012a5c(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int16_t *piVar5;
    int16_t iVar6;
    uint in_register_0000000c;
    int16_t *arg1_00;
    uint64_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *puVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar9 = 0;
    iVar6 = 0;
    piVar5 = arg1_00;
    uVar11 = uVar9;
    if (*arg1_00 != 0) {
        do {
            uVar12 = uVar11;
            piVar5 = piVar5 + 1;
            uVar11 = uVar12 + 1;
        } while (*piVar5 != 0);
        if (4 < uVar11) {
            uVar12 = uVar12 - 3;
            puVar10 = 0x13ea0;
            uVar7 = uVar9;
            do {
                uVar8 = uVar7;
                uVar7 = uVar9;
                for (piVar5 = *puVar10; *piVar5 != 0; piVar5 = piVar5 + 1) {
                    uVar7 = uVar7 + 1;
                }
                if (uVar12 == uVar7) {
                    iVar4 = fcn.00011fd8(arg1_00,*puVar10,uVar12);
                    piVar5 = NULL;
                    if (iVar4 == 0) break;
                }
                uVar8 = uVar8 + 1;
                uVar7 = uVar8;
                puVar10 = puVar10 + 1;
                piVar5 = uVar8;
            } while (piVar5 < 0x4);
            if (uVar8 != 4) {
                for (; uVar12 < uVar11; uVar12 = uVar12 + 1) {
                    uVar1 = arg1_00[uVar12];
                    if (uVar1 - 0x30 < 10) {
                        uVar2 = uVar1 - 0x30;
code_r0x00012b17:
                        uVar3 = uVar2;
                    }
                    else {
                        uVar3 = uVar1 - 0x41;
                        if (uVar3 < 6) {
                            uVar2 = uVar1 - 0x37;
                            goto code_r0x00012b17;
                        }
                        uVar2 = 0xffffffff;
                    }
                    piVar5 = uVar3;
                    if (uVar2 == 0xffffffff) break;
                    iVar6 = iVar6 * 0x10 + uVar2;
                }
                if (uVar12 == uVar11) {
                    if (arg2 != 0) {
                        *arg2 = uVar8;
                    }
                    if (arg3 != 0) {
                        *arg3 = iVar6;
                    }
                    return CONCAT71(piVar5 >> 8,1);
                }
            }
        }
    }
    return piVar5 & 0xffffffffffffff00;
}


/* fcn.000129a4 @ 0x129a4 */

uint64_t fcn.000129a4(uint32_t arg1,uint32_t arg2)

{
    uint16_t uVar1;
    int16_t iVar2;
    int16_t *in_RAX;
    char *pcVar3;
    uint in_register_0000000c;
    int16_t *piVar4;
    int16_t *piVar5;
    int16_t *piVar6;
    uint in_register_00000014;
    uint64_t uVar7;
    int16_t *piVar8;
    int16_t *piVar9;
    
    piVar6 = CONCAT44(in_register_00000014,arg2);
    if (0x6 < piVar6) {
        uVar1 = *(CONCAT44(in_register_0000000c,arg1) + 4);
        piVar4 = CONCAT44(in_register_0000000c,arg1) + 6;
        iVar2 = *piVar4;
        piVar9 = NULL;
        in_RAX = piVar4;
        for (piVar5 = piVar9; (iVar2 != 0 && (piVar6 + -3 != piVar5)); piVar5 = piVar5 + 1) {
            in_RAX = in_RAX + 1;
            iVar2 = *in_RAX;
        }
        if ((*in_RAX == 0) || (piVar6 + -3 != piVar5)) {
            piVar5 = piVar5 + 1;
        }
        else {
            piVar5 = piVar9;
        }
        if ((uVar1 != 0) && (piVar5 != NULL)) {
            piVar8 = uVar1;
            in_RAX = piVar8 + 3 + piVar5;
            if (in_RAX <= piVar6) {
                pcVar3 = piVar5 + piVar4;
                piVar6 = piVar9;
                piVar5 = piVar9;
                if (pcVar3 != NULL) {
                    for (; (*pcVar3 != '\x7f' || (pcVar3[1] != -1)); pcVar3 = pcVar3 + uVar7) {
                        uVar7 = *(pcVar3 + 2);
                        if ((uVar7 == 0) || (piVar5 = piVar5 + uVar7, piVar8 < piVar5)) goto code_r0x00012a4f;
                    }
                    pcVar3 = *(pcVar3 + 2);
                    piVar6 = piVar5 + pcVar3;
                    if (piVar8 < piVar5 + pcVar3) {
                        piVar6 = piVar9;
                    }
                }
code_r0x00012a4f:
                return CONCAT71(pcVar3 >> 8,piVar6 != NULL);
            }
        }
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00012b7c @ 0x12b7c */

ulong fcn.00012b7c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    int64_t iVar2;
    char cVar3;
    ulong uVar4;
    int16_t *piVar5;
    uint16_t auStackX_8 [4];
    uint32_t auStackX_20 [2];
    uint32_t *puStack_28;
    uint32_t auStack_20 [2];
    
    if (((arg1 != 0) && (arg3 != 0)) && (cVar3 = fcn.00012a5c(arg1,auStackX_20,auStackX_8), cVar3 != '\0')) {
        fcn.000120c8(arg1,arg2,&puStack_28,auStack_20);
        if (puStack_28 == NULL) {
            return 0x800000000000000e;
        }
        cVar3 = fcn.000129a4(puStack_28,auStack_20[0]);
        if (cVar3 != '\0') {
            piVar5 = puStack_28 + 6;
            iVar1 = *piVar5;
            while (iVar1 != 0) {
                piVar5 = piVar5 + 1;
                iVar1 = *piVar5;
            }
            uVar4 = fcn.00012774(arg3,auStackX_8[0],auStackX_20[0],*puStack_28);
            iVar2 = *0x13f20;
            *(arg3 + 0x2c) = *arg2;
            *(arg3 + 0x34) = *(arg2 + 8);
            (**(iVar2 + 0x48))(puStack_28);
            return uVar4;
        }
        (**(*0x13f20 + 0x48))(puStack_28);
    }
    return 0x8000000000000002;
}


/* fcn.00011ed4 @ 0x11ed4 */

int64_t fcn.00011ed4(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00011e38(noname_0,arg2);
    if (arg1_00 != 0) {
        if (arg2 != 0) {
            arg1_00 = fcn.000102c0(arg1_00,arg2);
        }
        if ((arg1_00 != 0) && (arg3 != 0)) {
            if (arg1 < arg2) {
                arg2 = arg1;
            }
            if ((arg2 != 0) && (arg1_00 != arg3)) {
                section..text(arg1_00,arg3,arg2);
            }
            (**(*0x13f20 + 0x48))(arg3);
        }
    }
    return arg1_00;
}


/* fcn.00012dd0 @ 0x12dd0 */

ulong fcn.00012dd0(int64_t arg1)

{
    ulong uVar1;
    
    if (arg1 == 0) {
        uVar1 = 0x800000000000000e;
    }
    else {
        if (*(arg1 + 0x10) != 0) {
            (**(*0x13f20 + 0x48))();
        }
        if (*(arg1 + 0x18) != 0) {
            (**(*0x13f20 + 0x48))();
        }
        if (*(arg1 + 0x20) != 0) {
            (**(*0x13f20 + 0x48))();
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00011f64 @ 0x11f64 */

void fcn.00011f64(void)

{
    //WARNING: Could not recover jumptable at 0x00011f6b. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x13f20 + 0x48))();
    return;
}


/* fcn.00011fac @ 0x11fac */

void fcn.00011fac(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = fcn.00011f70();
    //WARNING: Could not recover jumptable at 0x00011fcf. Too many branches
    //WARNING: Treating indirect jump as call
    (**(iVar1 + 0x88))(arg1,arg2 & 0xffffffff);
    return;
}


