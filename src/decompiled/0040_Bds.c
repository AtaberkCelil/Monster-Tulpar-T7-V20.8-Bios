// decompiled by r2ghidra: 0040_Bds.pe32
// functions: 226

/* entry0 @ 0x104e0 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.0001051c(arg1,arg2);
    iVar1 = fcn.00010944(arg1,arg2);
    if (iVar1 < 0) {
        fcn.000108c8();
    }
    return iVar1;
}


/* fcn.0001051c @ 0x1051c */

void fcn.0001051c(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong uVar6;
    ulong uStackX_8;
    ulong *puStackX_10;
    ulong auStackX_18 [2];
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    
    *0x2d128 = *(arg2 + 0x60);
    *0x2d130 = *(arg2 + 0x58);
    *0x2d120 = arg2;
    fcn.0001aabc();
    uVar6 = 0x29aa0;
    iVar3 = fcn.0001aaec(0x29aa0);
    if (iVar3 == 0) {
        uVar4 = fcn.00010450();
        fcn.00010400();
        uVar1 = in(0x1808);
        fcn.000103b0(uVar6,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x00010320();
        }
        fcn.000103b0(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010400();
        }
        else {
            fcn.000103f0();
        }
    }
    if ((*0x2d1b8 != NULL) || (iVar3 = (**(*0x2d128 + 0x140))(0x29670,0,0x2d1b8), -1 < iVar3)) {
        (***0x2d1b8)(*0x2d1b8,0x2d1c0);
    }
    (**(*0x2d128 + 0x140))(0x29500,0,0x2d1c8);
    (**(*0x2d128 + 0x140))(0x294e0,0,0x2d1e8);
    (**(*0x2d128 + 0x140))(0x29410,0,0x2d1d8);
    (**(*0x2d128 + 0x140))(0x29720,0,0x2d1d0);
    (**(*0x2d128 + 0x140))(0x29490,0);
    fcn.0001a974(0x296b0,0x2d1f0);
    fcn.000103c0(1,0,0,&uStackX_8);
    iVar3 = (**(*0x2d128 + 0x140))(0x29670,0);
    *0x2d1f8 = '\0';
    if (-1 < iVar3) {
        auStackX_18[0] = 0;
        (**puStackX_10)(puStackX_10,0x2d1f8);
        if (*0x2d1f8 != '\0') {
            (*puStackX_10[1])(puStackX_10,auStackX_18);
        }
    }
    fcn.0001aaec(0x29620);
    if (*0x2d208 == 0) {
        iVar3 = (**(*0x2d128 + 0x140))(0x29590,0);
        if (iVar3 < 0) {
            (**(*0x2d128 + 0x50))(0x200,8,fcn.0001ab4c,0,0x2d200);
            (**(*0x2d128 + 0xa8))(0x29590,*0x2d200);
        }
        else {
            fcn.0001ab4c(0,0);
        }
    }
    uStackX_8 = 0xca9;
    if (*0x2d160 == 0) {
        *0x2d150 = *(arg2 + 0x60);
        *0x2d158 = *(arg2 + 0x58);
        *0x2d148 = arg1;
        *0x2d160 = arg2;
    }
    iVar3 = (**(*0x2d158 + 0x48))(L"Setup",0x29d20,0,&uStackX_8,0x2dd00);
    if (iVar3 < 0) {
        *0x29d50 = 0x1010102;
        *0x29d54 = 1;
    }
    else {
        *0x29d50 = CONCAT12(*0x2e96c,CONCAT11(*0x2e96b,*0x2e96a));
        *0x29d50 = CONCAT13(*0x2e96d,*0x29d50);
        *0x29d54 = *0x2e96e;
    }
    *0x2e9e0 = 0;
    uVar6 = 0;
    uStackX_8 = 8;
    iVar3 = (**(*0x2d150 + 0xb0))(2,0x29340,0,&uStackX_8,&puStackX_10);
    if (iVar3 < 0) {
        fcn.0001a2ac(0x29340,0x231ac,uVar6,0x2d2c0);
        *0x29d50 = *0x29d50 & 0xffff00;
        *0x29d50 = CONCAT13(1,*0x29d50);
    }
    else {
        fcn.000231ac(0,0);
    }
    return;
}


/* fcn.00010944 @ 0x10944 */

ulong fcn.00010944(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong auStackX_8 [4];
    
    auStackX_8[0] = 0;
    if (*0x2d160 == 0) {
        *0x2d150 = *(arg2 + 0x60);
        *0x2d158 = *(arg2 + 0x58);
        *0x2d148 = arg1;
        *0x2d160 = arg2;
    }
    iVar2 = *0x2d160;
    iVar5 = *0x2d150;
    *0x2d0d8 = arg1;
    iVar1 = fcn.00019854(0x2a490,200);
    uVar4 = iVar1 * 2 + 2;
    iVar2 = (**(iVar5 + 0x40))(6,uVar4,iVar2 + 0x18);
    if (-1 < iVar2) {
        uVar4 = uVar4 >> 1;
        fcn.00019888(*(*0x2d160 + 0x18),uVar4,0x2a490,uVar4);
    }
    *(*0x2d160 + 0x20) = 0x5001b;
    uVar3 = (**(*0x2d150 + 0x148))(auStackX_8,0x29210,0x297c8,0x294b0,0x29760,0x29180,0x29740,0);
    *0x2d0f0 = fcn.00012210();
    return uVar3;
}


/* fcn.000108c8 @ 0x108c8 */

void fcn.000108c8(void)

{
    if (*0x2d2b0 != 0) {
        (**(*0x2d150 + 0x70))();
        *0x2d2b0 = 0;
    }
    if (*0x2d2b8 != 0) {
        (**(*0x2d150 + 0x70))();
        return;
    }
    if (*0x2d2c0 != 0) {
        (**(*0x2d150 + 0x70))();
        *0x2d2c0 = 0;
    }
    if (*0x2d200 != 0) {
        (**(*0x2d128 + 0x70))();
    }
    return;
}


/* fcn.0001aabc @ 0x1aabc */

int64_t fcn.0001aabc(void)

{
    if (*0x2d1b0 == 0) {
        fcn.0001a974(0x29540,0x2d1b0);
    }
    return *0x2d1b0;
}


/* fcn.0001a974 @ 0x1a974 */

ulong fcn.0001a974(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x2d120;
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


/* fcn.0001aaec @ 0x1aaec */

void fcn.0001aaec(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.0001aabc();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x0001ab1a:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x0001ab1a;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010450 @ 0x10450 */

uint64_t fcn.00010450(void)

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


/* fcn.00010400 @ 0x10400 */

void fcn.00010400(void)

{
    return;
}


/* fcn.000103b0 @ 0x103b0 */

uint64_t fcn.000103b0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010322 @ 0x10322 */

void fcn.00010322(void)

{
    return;
}


/* fcn.000103f0 @ 0x103f0 */

void fcn.000103f0(void)

{
    return;
}


/* fcn.000103c0 @ 0x103c0 */

uint64_t fcn.000103c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.0001ab4c @ 0x1ab4c */

void fcn.0001ab4c(void)

{
    int64_t iVar1;
    ulong noname_0;
    int64_t aiStackX_18 [2];
    
    noname_0 = 0x29590;
    iVar1 = (**(*0x2d128 + 0x140))(0x29590,0,aiStackX_18);
    if (-1 < iVar1) {
        *0x2d208 = fcn.0001971c(noname_0,0xd);
        if ((*0x2d208 != 0) && (*0x2d208 != aiStackX_18[0])) {
            section..text(*0x2d208,aiStackX_18[0],0xd);
        }
    }
    return;
}


/* fcn.0001971c @ 0x1971c */

int64_t fcn.0001971c(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_18 [2];
    
    iVar1 = (**(*0x2d128 + 0x40))(4,arg1,aiStackX_18);
    if (iVar1 < 0) {
        aiStackX_18[0] = 0;
    }
    if ((aiStackX_18[0] != 0) && (arg1 != 0)) {
        aiStackX_18[0] = fcn.00010300(aiStackX_18[0],arg1);
    }
    return aiStackX_18[0];
}


/* fcn.00010300 @ 0x10300 */

int64_t fcn.00010300(int64_t arg1,int64_t arg2)

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


/* section..text @ 0x102c0 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 102016 named .text
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


/* fcn.000231ac @ 0x231ac */

void fcn.000231ac(void)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uStackX_18;
    uchar auStackX_20 [8];
    
    uStackX_18 = 8;
    uVar2 = 0;
    *0x2e9e0 = 1;
    iVar1 = (**(*0x2d150 + 0xb0))(2,0x29340,0,&uStackX_18,auStackX_20);
    if (-1 < iVar1) {
        *0x29d50 = *0x2e96a;
        *0x29d53 = *0x2e96d;
        fcn.0001a2ac(0x29310,0x231a4,uVar2,0x2d2b8);
        iVar1 = (**(*0x2d150 + 0x40))(4,0x200,0x2dcf0);
        if (-1 < iVar1) {
            *0x2dce8 = 0;
            *0x2dce0 = 0x40;
        }
        uVar2 = 0x2e9d0;
        iVar1 = (**(*0x2d150 + 0x40))(4,0x200);
        if (-1 < iVar1) {
            *0x2e9c8 = 0;
            *0x2e9c0 = 0x40;
        }
        fcn.0001a2ac(0x295c0,0x2309c,uVar2,0x2d2b0);
        fcn.0002309c(*0x2d2b0,0);
        (**(*0x2d150 + 0x148))(auStackX_20,str.Hb_T,0x29d30,0x295e0,0x29d40,0);
    }
    return;
}


/* fcn.0001a2ac @ 0x1a2ac */

void fcn.0001a2ac(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    ulong in_stack_00000028;
    
    iVar1 = (**(*0x2d150 + 0x50))(0x200,8,arg2,0,arg3);
    if (-1 < iVar1) {
        (**(*0x2d150 + 0xa8))(arg1,*arg3,in_stack_00000028);
    }
    return;
}


/* fcn.00019854 @ 0x19854 */

uint64_t fcn.00019854(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if (((CONCAT44(in_register_0000000c,arg1) != 0) && (arg2 != 0)) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
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


/* fcn.00019888 @ 0x19888 */

ulong fcn.00019888(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    uint64_t uVar2;
    int64_t arg2_00;
    
    if ((((arg1 == 0) || (arg3 == 0)) || (1000000 < arg2)) || ((1000000 < arg4 || (arg2 == 0)))) {
        return 0x8000000000000002;
    }
    arg2_00 = arg4;
    if (arg2 < arg4) {
        arg2_00 = arg2;
    }
    uVar2 = fcn.00019854(arg3,arg2_00);
    if ((arg2 <= arg4) && (arg2 <= uVar2)) {
        return 0x8000000000000005;
    }
    if (arg4 < uVar2) {
        uVar2 = arg4;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x00019930;
    }
    if (arg3 < arg1 + arg2 * 2) {
        return 0x800000000000000f;
    }
code_r0x00019930:
    if (uVar2 != 0) {
        arg3 = arg3 - arg1;
        do {
            iVar1 = *(arg3 + arg1);
            if (iVar1 == 0) break;
            *arg1 = iVar1;
            arg1 = arg1 + 2;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    *arg1 = 0;
    return 0;
}


/* fcn.00012210 @ 0x12210 */

//WARNING: Variable defined which should be unmapped: var_10h

uint64_t fcn.00012210(void)

{
    int64_t iVar1;
    int *piVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uchar auStackX_8 [8];
    int64_t iStackX_10;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    uchar auStack_28 [16];
    int64_t var_10h;
    
    iStackX_10 = 0;
    var_20h = 0;
    iVar1 = (**(*0x2d150 + 0x38))(&iStackX_10,0,auStack_28,&var_28h,auStackX_8);
    if (iVar1 == -0x7ffffffffffffffb) {
        iStackX_10 = iStackX_10 + var_28h * 8;
        iVar1 = (**(*0x2d150 + 0x40))(4,iStackX_10,&var_20h);
        if (-1 < iVar1) {
            iVar1 = (**(*0x2d150 + 0x38))(&iStackX_10,var_20h,auStack_28,&var_28h,auStackX_8);
            if (-1 < iVar1) {
                uVar3 = 0;
                for (piVar2 = var_20h; piVar2 < iStackX_10 + var_20h; piVar2 = piVar2 + var_28h) {
                    if (*piVar2 == 4) {
                        uVar3 = uVar3 + *(piVar2 + 6);
                    }
                }
                (**(*0x2d150 + 0x48))();
                uVar4 = uVar3 & 0xffffffff;
                if (0xffffffff < uVar3) {
                    uVar4 = 0;
                }
                return uVar4;
            }
            (**(*0x2d150 + 0x48))();
        }
    }
    return 0;
}


/* fcn.0001a174 @ 0x1a174 */

int64_t fcn.0001a174(int64_t arg1)

{
    int64_t arg1_00;
    int64_t arg1_01;
    
    arg1_00 = fcn.00019fb0(arg1);
    arg1_01 = fcn.00019ec8(arg1_00);
    fcn.00029090(arg1_01,arg1,arg1_00);
    return arg1_01;
}


/* fcn.00019fb0 @ 0x19fb0 */

int64_t fcn.00019fb0(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    
    if (arg1 == 0) {
        return 0;
    }
    iVar2 = 0;
    while( true ) {
        if ((*arg1 == '\x7f') && (*(arg1 + 1) == -1)) {
            return iVar2 + 4;
        }
        uVar1 = *(arg1 + 3) * 0x100 + *(arg1 + 2);
        if ((*arg1 == '\0') || (uVar1 == 0)) break;
        iVar2 = iVar2 + uVar1;
        arg1 = arg1 + *(arg1 + 3) * 0x100 + *(arg1 + 2);
    }
    return iVar2;
}


/* fcn.00019ec8 @ 0x19ec8 */

ulong fcn.00019ec8(int64_t arg1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    (**(*0x2d150 + 0x40))(4,arg1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.00029090 @ 0x29090 */

int64_t fcn.00029090(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *puVar4;
    uint8_t uVar5;
    
    uVar5 = 0;
    bVar1 = false;
    uVar2 = arg2 - arg1;
    puVar4 = arg1;
    if (arg2 < arg1) {
        uVar2 = -uVar2;
        if (arg1 <= arg3 + arg2) {
            puVar4 = arg3 + arg1;
            bVar1 = true;
            uVar5 = 1;
            arg2 = arg3 + arg2;
        }
    }
    if ((7 < arg3) && (7 < uVar2)) {
        uVar2 = arg2 & 7;
        uVar3 = puVar4 & 7;
        if (bVar1) {
            arg2 = arg2 + -1;
            puVar4 = puVar4 + -1;
        }
        if ((uVar2 == uVar3) && (uVar2 != 0)) {
            if (!bVar1) {
                uVar2 = 8 - uVar2;
            }
            arg3 = arg3 - uVar2;
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                *puVar4 = *arg2;
                arg2 = arg2 + uVar5 * -2 + 1;
                puVar4 = puVar4 + uVar5 * -2 + 1;
            }
        }
        if (bVar1) {
            arg2 = arg2 + -7;
            puVar4 = puVar4 + -7;
        }
        for (uVar2 = arg3 >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *arg2;
            arg2 = arg2 + (uVar5 * -2 + 1) * 8;
            puVar4 = puVar4 + uVar5 * -2 + 1;
        }
        arg3 = arg3 & 7;
        if (arg3 == 0) {
            return arg1;
        }
        if (bVar1) {
            arg2 = arg2 + 8;
            puVar4 = puVar4 + 1;
        }
    }
    if (bVar1) {
        arg2 = arg2 + -1;
        puVar4 = puVar4 + -1;
    }
    for (; arg3 != 0; arg3 = arg3 - 1) {
        *puVar4 = *arg2;
        arg2 = arg2 + uVar5 * -2 + 1;
        puVar4 = puVar4 + uVar5 * -2 + 1;
    }
    return arg1;
}


/* fcn.0001a0dc @ 0x1a0dc */

ulong fcn.0001a0dc(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t arg3;
    int64_t iVar2;
    
    if (arg2 == 0) {
        uVar1 = 0;
    }
    else {
        if (arg1 != 0) {
            arg3 = fcn.00019fb0(arg1);
            iVar2 = fcn.00019fb0(arg2);
            iVar2 = fcn.00019ec8(iVar2 + arg3);
            uVar1 = fcn.00029090(iVar2,arg1,arg3);
            return uVar1;
        }
        uVar1 = fcn.0001a174(arg2);
    }
    return uVar1;
}


/* fcn.0001a004 @ 0x1a004 */

int64_t fcn.0001a004(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t arg1_01;
    
    if (arg2 == 0) {
        if (arg1 == 0) {
            arg1 = 0x29a08;
        }
        arg1_00 = fcn.0001a174(arg1);
    }
    else {
        if (arg1 == 0) {
            iVar1 = 0;
        }
        else {
            iVar1 = fcn.00019fb0(arg1);
            iVar1 = iVar1 + -4;
        }
        arg1_00 = fcn.00019ec8(*(arg2 + 2) + 4 + *(arg2 + 3) * 0x100 + iVar1);
        arg1_01 = arg1_00;
        if (iVar1 != 0) {
            fcn.00029090(arg1_00,arg1,iVar1);
            arg1_01 = arg1_00 + iVar1;
        }
        fcn.00029090(arg1_01,arg2,*(arg2 + 2));
        *(*(arg2 + 2) + *(arg2 + 3) * 0x100 + arg1_01) = *0x29a08;
    }
    return arg1_00;
}


/* fcn.00019b3c @ 0x19b3c */

int64_t fcn.00019b3c(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    
    if (*0x2d168 == '\0') {
        iVar1 = fcn.00019ab4();
        if (-1 < iVar1) {
            iVar1 = (***0x2d190)(1,arg1 & 0xffffffffU,0,0,0);
        }
    }
    else if (*0x2d178 == NULL) {
        iVar1 = -0x7ffffffffffffff2;
    }
    else {
        iVar1 = (***0x2d178)(*0x2d178,1,arg1 & 0xffffffffU,0,0,0);
    }
    return iVar1;
}


/* fcn.00010ee0 @ 0x10ee0 */

void fcn.00010ee0(uint32_t arg1)

{
    int64_t iVar1;
    ulong noname_0;
    int16_t aiStackX_8 [4];
    ulong auStackX_10 [3];
    
    aiStackX_8[0] = arg1;
    if (aiStackX_8[0] != -1) {
        (**(*0x2d158 + 0x58))(L"BootCurrent",0x291a0,6,2,aiStackX_8);
    }
    noname_0 = 0x200;
    iVar1 = (**(*0x2d150 + 0x170))(0x200,8,0x11a14,0,0x29a40,auStackX_10);
    if (-1 < iVar1) {
        (**(*0x2d150 + 0x68))(auStackX_10[0]);
        (**(*0x2d150 + 0x70))();
        noname_0 = auStackX_10[0];
    }
    fcn.00019b3c(noname_0,0x3051001);
    return;
}


/* fcn.000116d0 @ 0x116d0 */

uint64_t fcn.000116d0(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    char *pcVar3;
    uint64_t uVar4;
    int64_t iStackX_8;
    uint64_t uStackX_10;
    uint64_t uStackX_18;
    int64_t iStackX_20;
    
    uVar2 = 0;
    iVar1 = (**(*0x2d150 + 0x138))(2,0x29660,0,&uStackX_10,&iStackX_8);
    if (iVar1 < 0) {
        uVar2 = 0;
    }
    else {
        uVar4 = uVar2;
        if (uStackX_10 != 0) {
            do {
                iVar1 = (**(*0x2d150 + 0x98))(*(iStackX_8 + uVar4 * 8),0x29660,&iStackX_20);
                if (((((-1 < iVar1) && (*(*(iStackX_20 + 8) + 6) != '\0')) &&
                     (iVar1 = (**(*0x2d150 + 0x98))(*(iStackX_8 + uVar4 * 8),0x29370,&uStackX_18), -1 < iVar1)) &&
                    ((pcVar3 = fcn.0001a1bc(uStackX_18), *pcVar3 == '\x04' && (pcVar3[1] == '\x01')))) &&
                   ((*(pcVar3 + 4) == *(arg1 + 4) &&
                    ((pcVar3[0x29] == *(arg1 + 0x29) &&
                     (iVar1 = fcn.0001a41c(pcVar3 + 0x18,arg1 + 0x18,0x10), iVar1 == 0)))))) {
                    uVar2 = uStackX_18;
                    break;
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < uStackX_10);
        }
        (**(*0x2d150 + 0x48))(iStackX_8);
    }
    return uVar2;
}


/* fcn.0001127c @ 0x1127c */

bool fcn.0001127c(void)

{
    int64_t iVar1;
    ulong auStackX_8 [4];
    
    if (*0x29780 == -1) {
        auStackX_8[0] = 1;
        iVar1 = (**(*0x2d158 + 0x48))(L"SecureBoot",0x291a0,0,auStackX_8,0x29780);
        if (iVar1 < 0) {
            *0x29780 = '\0';
        }
    }
    return *0x29780 == '\x01';
}


/* fcn.0001a1ec @ 0x1a1ec */

int64_t fcn.0001a1ec(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t *in_stack_00000028;
    
    if (*in_stack_00000028 == 0) {
        *arg4 = 0;
    }
    iVar1 = (**(*0x2d158 + 0x48))();
    if ((iVar1 < 0) && (iVar1 == -0x7ffffffffffffffb)) {
        if (*in_stack_00000028 != 0) {
            (**(*0x2d150 + 0x48))();
        }
        iVar1 = fcn.00019ec8(*arg4);
        *in_stack_00000028 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x2d158 + 0x48))(arg1,arg2,arg3,arg4,iVar1);
        }
    }
    return iVar1;
}


/* fcn.000188f8 @ 0x188f8 */

void fcn.000188f8(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.0001895c(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.0001895c @ 0x1895c */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.0001895c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x000189bb;
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
code_r0x000189bb:
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
        uVar21 = fcn.00019968(arg4,0xf4241);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.00019854(arg4,0xf4241);
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
            pcVar8 = 0x2bdec;
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
code_r0x00018d76:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x2bdec;
            }
            else {
                pcVar8 = 0x2bdf0;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x00018b0d:
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
                    goto code_r0x00018cb0;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x00018cc7;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x00018cb0;
                        }
                        goto code_r0x00018cc7;
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
code_r0x00018cb0:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x00018b0d;
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
                        goto code_r0x00018b0d;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x00018cc7;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x00018cb0;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x00018cc7:
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
                        fcn.000196c4(&var_68h_2,0x26,0,0x2bd80);
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
                            goto code_r0x00018d76;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x00018f5f;
                        if (uStack_a8 == 0x58) goto code_r0x00019054;
                        if (uStack_a8 == 0x61) goto code_r0x00018f68;
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
                            goto code_r0x00018aee;
                        }
                        if (uStack_a8 != 100) goto code_r0x00018aea;
                        goto code_r0x0001906b;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x2bdec;
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
                goto code_r0x00019298;
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
                            iVar12 = 0x2be8b;
                            goto code_r0x0001901b;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x0001901b:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x00019298;
                    }
                    fcn.000196c4(&var_68h_2,0x26,0,0x2bde4);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x00018f5f:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x00018f68:
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
                        goto code_r0x00019298;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x00018aea;
                            goto code_r0x00019058;
                        }
                        goto code_r0x0001905d;
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
                        goto code_r0x00019298;
                    }
                    fcn.000196c4(&var_68h_2,0x26,0,0x2bdc8);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x00019298;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x00019054:
            uVar21 = uVar21 | 0x20;
code_r0x00019058:
            uVar21 = uVar21 | 0x80;
code_r0x0001905d:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x0001906b:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x000190ad;
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
code_r0x000190ad:
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
code_r0x00019135:
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
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x00019135;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar10 = uVar5;
            do {
                uVar6 = uVar10 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = "0123456789ABCDEFen-US"[uVar10 % uVar16];
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
code_r0x00018aea:
            pcVar8 = &uStack_a8;
code_r0x00018aee:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x00019298:
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
                arg1 = fcn.00018928(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00018928(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
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
                arg1 = fcn.00018928(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
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
                arg1 = fcn.00018928(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
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


/* fcn.00010d8c @ 0x10d8c */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

void fcn.00010d8c(void)

{
    char *pcVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    char *pcStackX_8;
    ulong uStackX_10;
    int64_t var_20h_2;
    int64_t var_28h;
    int64_t var_30h;
    uint uStack_38;
    int iStack_34;
    uint uStack_30;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    
    uVar3 = 0;
    if (*0x2d498 != 0) {
        do {
            (**(*0x2d150 + 0x108))(*(*0x2d4a0 + uVar3 * 8),0,0,1);
            uVar3 = uVar3 + 1;
        } while (uVar3 < *0x2d498);
    }
    if (*0x2d0c8 != 0) {
        uStack_30 = 0;
        iStack_34 = 0x60441d0;
        var_18h = 0;
        var_20h = 0x60441d0;
        iVar4 = 0;
        uStack_38 = 0xc0102;
        var_1ch = 0x70041d0;
        do {
            pcVar1 = fcn.0001a004(*0x2d0c8,&uStack_38);
            pcStackX_8 = pcVar1;
            iVar2 = (**(*0x2d150 + 0xb8))(0x29370,&pcStackX_8,&uStackX_10);
            if ((-1 < iVar2) && (*pcStackX_8 == '\x7f')) {
                iVar4 = (**(*0x2d150 + 0x98))(uStackX_10,0x29660,&var_20h_2);
                if (iVar4 < 0) {
                    (**(*0x2d150 + 0x110))(*0x2d0e8,0,uStackX_10);
                }
                (**(*0x2d150 + 0x48))(pcVar1);
                return;
            }
            (**(*0x2d150 + 0x48))(pcVar1);
            iStack_34 = (&var_1ch)[iVar4];
            iVar4 = iVar4 + 1;
        } while (iStack_34 != 0);
    }
    return;
}


/* fcn.0001a1bc @ 0x1a1bc */

char * fcn.0001a1bc(uint32_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    uint in_register_0000000c;
    char *pcVar4;
    
    pcVar4 = CONCAT44(in_register_0000000c,arg1);
    if (pcVar4 != NULL) {
        cVar1 = *pcVar4;
        pcVar3 = NULL;
        while (pcVar2 = pcVar4, cVar1 != '\x7f') {
            pcVar4 = pcVar2 + pcVar2[3] * 0x100 + pcVar2[2];
            pcVar3 = pcVar2;
            cVar1 = pcVar2[pcVar2[3] * 0x100 + pcVar2[2]];
        }
        return pcVar3;
    }
    return NULL;
}


/* fcn.0001a41c @ 0x1a41c */

int64_t fcn.0001a41c(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t *piVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    uint in_R8;
    int64_t iVar3;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    piVar1 = piVar2 + CONCAT44(in_R8,arg3);
    if (7 < CONCAT44(in_R8,arg3)) {
        arg1 = arg1 & 7;
        if ((arg1 != 0) && (arg1 == (arg2 & 7))) {
            iVar3 = 8 - arg1;
            for (; (iVar3 != 0 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
                arg2 = arg2 + 1;
                iVar3 = iVar3 + -1;
            }
        }
        for (; (piVar2 <= piVar1 + -1 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
            arg2 = arg2 + 8;
        }
    }
    while( true ) {
        if (piVar1 <= piVar2) {
            return 0;
        }
        if (*piVar2 != *arg2) break;
        piVar2 = piVar2 + 1;
        arg2 = arg2 + 1;
    }
    return *piVar2 - *arg2;
}


/* fcn.00028fe0 @ 0x28fe0 */

uint64_t fcn.00028fe0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00011914 @ 0x11914 */

void fcn.00011914(int64_t arg1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    (**(*0x2d150 + 0x80))(auStackX_10,arg1,0,0);
    (**(*0x2d150 + 0x90))(auStackX_10[0],arg1,0);
    return;
}


/* fcn.00010b6c @ 0x10b6c */

int64_t fcn.00010b6c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    if (arg2 == 0) {
        iVar1 = arg1;
    }
    else if (arg1 == 0) {
        iVar1 = fcn.0001a174(arg2);
    }
    else {
        iVar1 = fcn.0001a0dc(arg1,arg2);
        (**(*0x2d150 + 0x48))(arg1);
    }
    return iVar1;
}


/* fcn.00010a58 @ 0x10a58 */

void fcn.00010a58(uint32_t arg1)

{
    char cVar1;
    char *pcVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    char *pcStackX_8;
    ulong uStackX_10;
    
    if (CONCAT44(in_register_0000000c,arg1) != NULL) {
        pcVar4 = CONCAT44(in_register_0000000c,arg1);
code_r0x00010a75:
        while (pcVar5 = NULL, *pcVar4 != '\x7f') {
            do {
                iVar3 = *0x2d150;
                cVar1 = *pcVar4;
                pcVar6 = pcVar4;
                while (cVar1 != '\x7f') {
                    pcVar6 = pcVar6 + pcVar6[3] * 0x100 + pcVar6[2];
                    cVar1 = *pcVar6;
                }
                cVar1 = pcVar6[1];
                pcVar6[1] = -1;
                pcStackX_8 = pcVar4;
                iVar3 = (**(iVar3 + 0xb8))(0x29370,&pcStackX_8,&uStackX_10);
                pcVar2 = pcStackX_8;
                pcVar6[1] = cVar1;
                if (iVar3 < 0) break;
                if (*pcStackX_8 == '\x7f') {
                    (**(*0x2d150 + 0x108))(uStackX_10,0,0,1);
                    break;
                }
                if (pcStackX_8 == pcVar5) break;
                iVar3 = (**(*0x2d150 + 0x108))(uStackX_10,0,pcStackX_8,0);
                pcVar5 = pcVar2;
            } while (-1 < iVar3);
            for (; pcVar4 = pcStackX_8, *pcStackX_8 != '\x7f';
                pcStackX_8 = pcStackX_8 + pcStackX_8[3] * 0x100 + pcStackX_8[2]) {
            }
        }
        if (pcVar4[1] != -1) {
            pcVar4 = pcVar4 + 4;
            goto code_r0x00010a75;
        }
    }
    return;
}


/* fcn.00019f34 @ 0x19f34 */

ulong fcn.00019f34(int64_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    
    uVar2 = 0;
    if (arg1 != 0) {
        while( true ) {
            if ((*arg1 == '\x7f') && (*(arg1 + 1) == -1)) {
                return 0;
            }
            uVar1 = *(arg1 + 3) * 0x100 + *(arg1 + 2);
            if (uVar1 < 4) break;
            uVar2 = uVar2 + uVar1;
            uVar1 = 0;
            do {
                if (*arg1 == *(uVar1 + 0x2c19c)) break;
                uVar1 = uVar1 + 1;
            } while (uVar1 < 6);
            if (uVar1 == 6) {
                return 0x8000000000000002;
            }
            if (0x10000 < uVar2) {
                return 0x8000000000000002;
            }
            arg1 = arg1 + *(arg1 + 3) * 0x100 + *(arg1 + 2);
        }
    }
    return 0x8000000000000002;
}


/* fcn.00010bb8 @ 0x10bb8 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00010bb8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t uVar2;
    uchar auStackX_20 [2];
    char cStackX_22;
    char cStackX_23;
    int64_t var_38h;
    int64_t iStack_38;
    uint64_t uStack_30;
    int64_t var_20h;
    uint32_t var_bp_18h;
    int64_t var_bp_10h;
    
    if (arg4 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = (**(*0x2d150 + 0x138))(2,0x29380,0,&uStack_30,&iStack_38);
        if (-1 < iVar1) {
            *arg3 = 0;
            uVar2 = 0;
            if (uStack_30 != 0) {
                do {
                    iVar1 = (**(*0x2d150 + 0x98))(*(iStack_38 + uVar2 * 8),0x29380,&var_20h);
                    if ((((-1 < iVar1) && (iVar1 = (**(var_20h + 0x30))(var_20h,2,8,1,auStackX_20), -1 < iVar1)) &&
                        (cStackX_23 == arg1)) && (cStackX_22 == arg2)) {
                        iVar1 = *arg3;
                        *(iStack_38 + iVar1 * 8) = *(iStack_38 + uVar2 * 8);
                        *arg3 = iVar1 + 1;
                    }
                    uVar2 = uVar2 + 1;
                } while (uVar2 < uStack_30);
                if (*arg3 != 0) {
                    *arg4 = iStack_38;
                    return 0;
                }
            }
            (**(*0x2d150 + 0x48))(iStack_38);
            iVar1 = -0x7ffffffffffffff2;
        }
    }
    return iVar1;
}


/* fcn.00011eb0 @ 0x11eb0 */

void fcn.00011eb0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong auStackX_8 [2];
    uchar auStackX_18 [16];
    
    auStackX_8[0] = 0;
    if ((arg1 != 0) && (iVar1 = (**(*0x2d158 + 0x48))(arg1,0x291a0,0,auStackX_8,0), iVar1 == -0x7ffffffffffffff2))
    {
        return;
    }
    iVar1 = (**(*0x2d150 + 0x140))(arg2,0,auStackX_18);
    if (iVar1 < 0) {
        (**(*0x2d150 + 0x80))(0x2d148,arg2,0,0);
    }
    return;
}


/* fcn.0001a304 @ 0x1a304 */

ulong fcn.0001a304(int64_t arg1)

{
    if ((*0x2d170 == 0) && (*0x2d170 = fcn.00019a54(arg1,0x299d8), *0x2d170 == 0)) {
        return 0xa000000000000002;
    }
    if (arg1 != 0) {
        *arg1 = *0x2d170;
    }
    return 0;
}


/* fcn.00019a54 @ 0x19a54 */

ulong fcn.00019a54(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar3 = *(*0x2d160 + 0x68);
    iVar2 = *(*0x2d160 + 0x70);
    while( true ) {
        if (iVar3 == 0) {
            return 0;
        }
        iVar1 = fcn.0001a41c(iVar2,arg1,0x10);
        if (iVar1 == 0) break;
        iVar2 = iVar2 + 0x18;
        iVar3 = iVar3 + -1;
    }
    return *(iVar2 + 0x10);
}


/* fcn.0001a380 @ 0x1a380 */

ulong fcn.0001a380(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    int16_t *piVar4;
    
    if (arg2 == 0) {
        uVar2 = 0x8000000000000002;
    }
    else {
        piVar4 = *arg2;
        do {
            iVar1 = *piVar4;
            while( true ) {
                if (iVar1 == -1) {
                    return 0x800000000000000e;
                }
                piVar4 = piVar4 + piVar4[1];
                if (*piVar4 == 4) break;
                iVar1 = *piVar4;
            }
            iVar3 = fcn.0001a41c(piVar4 + 8,arg1,0x10);
        } while (iVar3 != 0);
        *arg2 = piVar4;
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00010cec @ 0x10cec */

void fcn.00010cec(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    
    iVar1 = (**(*0x2d158 + 0x58))(arg1,arg2,3);
    if ((iVar1 < 0) && (iVar1 == -0x7ffffffffffffffe)) {
        iVar1 = (**(*0x2d158 + 0x58))(arg1,arg2,0,0,0);
        if (-1 < iVar1) {
            (**(*0x2d158 + 0x58))(arg1,arg2,3,arg3);
        }
    }
    return;
}


/* fcn.00012300 @ 0x12300 */

//WARNING: Removing unreachable block (ram,0x0001238c)

ulong fcn.00012300(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint32_t *puVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uchar uVar9;
    uchar uVar10;
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    uVar8 = 0;
    uVar10 = 0;
    if (((*0x2d160 == 0) || (iVar3 = fcn.0001a304(&iStackX_10), iVar3 < 0)) ||
       (iVar3 = (**(iStackX_10 + 0x48))(&iStackX_20,&iStackX_18), iVar3 < 0)) {
        uVar7 = 0xffffffffffffffff;
    }
    else {
        uVar7 = uVar8;
        if (iStackX_20 != 0) {
            puVar6 = iStackX_18 + 0x10;
            do {
                if ((puVar6[4] == 2) && ((*puVar6 >> 0xf & 1) == 0)) {
                    uVar7 = uVar7 + *(puVar6 + -2);
                }
                puVar6 = puVar6 + 0xe;
                iStackX_20 = iStackX_20 + -1;
            } while (iStackX_20 != 0);
        }
        (**(*0x2d150 + 0x48))();
    }
    uVar7 = uVar7 >> 1;
    uVar4 = 0x80000000;
    if (0x80000000 < uVar7) {
        uVar7 = 0x80000000;
    }
    uVar7 = ((uVar7 & 0xfff) != 0) + (uVar7 >> 0xc);
    if (arg2 != 0) {
        puVar6 = arg1 + 4;
        uVar10 = 0;
        do {
            if (puVar6[-1] == 4) {
                uVar2 = fcn.00012210();
                if (uVar2 == 0) {
code_r0x00012401:
                    uVar4 = *puVar6;
                    goto code_r0x00012403;
                }
                if (*0x2d0f0 < uVar2) {
                    uVar2 = uVar2 - *0x2d0f0;
                }
                puVar6[1] = uVar2;
                uVar2 = uVar2 + (-uVar2 & 0xff);
                if ((uVar2 == 0) || (uVar4 = uVar2, uVar7 < uVar4)) goto code_r0x00012401;
                puVar6[2] = uVar2;
                if (uVar2 != *puVar6) goto code_r0x00012452;
            }
            else {
                uVar2 = puVar6[1];
                if (uVar7 < uVar2) goto code_r0x00012401;
                uVar5 = (uVar2 >> 2) + uVar2;
                uVar4 = *puVar6;
                if (uVar7 < uVar5) {
                    uVar5 = uVar2;
                }
                if (*puVar6 < uVar5) {
                    puVar6[2] = uVar5;
code_r0x00012452:
                    uVar10 = 1;
                    goto code_r0x00012406;
                }
code_r0x00012403:
                puVar6[2] = uVar4;
            }
code_r0x00012406:
            puVar1 = puVar6 + 2;
            puVar6 = puVar6 + 4;
            uVar8 = uVar8 + *puVar1;
            arg2 = arg2 + -1;
        } while (arg2 != 0);
    }
    uVar9 = 0;
    if (uVar8 <= uVar7) {
        uVar9 = uVar10;
    }
    return CONCAT71(uVar4 >> 8,uVar9);
}


/* fcn.000199d0 @ 0x199d0 */

int64_t fcn.000199d0(void)

{
    if (*0x2d140 == 0) {
        (**(*0x2d128 + 0x140))(0x29250,0,0x2d140);
    }
    return *0x2d140;
}


/* fcn.00012458 @ 0x12458 */

void fcn.00012458(int64_t arg1)

{
    int *piVar1;
    char cVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t *puVar5;
    int64_t iVar6;
    char16_t *noname_0;
    uint32_t *puVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    uint64_t arg2;
    int64_t arg2_00;
    int64_t iStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    uint32_t auStack_118 [60];
    
    iStackX_8 = 0;
    if (arg1 != 0) {
        *arg1 = 0;
    }
    if (((*0x2d0fc == '\0') && (iStackX_10 = fcn.00019a54(arg1,0x297b8), iStackX_10 != 0)) &&
       (iStackX_18 = iStackX_10, iVar3 = fcn.0001a380(0x29170,&iStackX_18), -1 < iVar3)) {
        arg2_00 = 0x29710;
        iVar3 = fcn.0001a380(0x29710,&iStackX_10);
        if (((iVar3 < 0) || (*(iStackX_10 + 2) != 0x28)) ||
           (iVar3 = fcn.0001a41c(iStackX_10 + 0x18,0x29170,0x10), iVar3 != 0)) {
            arg2_00 = 0x29170;
        }
        iVar4 = (**(*0x2d158 + 0x48))(L"PreviousMemoryTypeInformation",arg2_00,0,&iStackX_8,0);
        iVar3 = iStackX_18;
        noname_0 = L"PreviousMemoryTypeInformation";
        piVar1 = iStackX_18 + 0x18;
        iStackX_8 = *(iStackX_18 + 2) - 0x18;
        fcn.00010cec(0x2a018,arg2_00,0x800000000000000e,iStackX_8);
        puVar5 = fcn.00019a54(noname_0,0x29170);
        if (puVar5 != NULL) {
            arg2 = 0;
            if (*piVar1 != 0xf) {
                puVar7 = auStack_118 + 1;
                do {
                    if (0xe < arg2) break;
                    puVar7[-1] = piVar1[arg2 * 2];
                    uVar9 = *(iVar3 + 0x1c + arg2 * 8);
                    puVar7[1] = 0;
                    *puVar7 = uVar9;
                    puVar7[2] = uVar9;
                    iVar6 = 0;
                    if (*puVar5 != 0xf) {
                        uVar9 = *puVar5;
                        do {
                            if (piVar1[arg2 * 2] == uVar9) {
                                puVar7[1] = puVar5[iVar6 * 2 + 1];
                                break;
                            }
                            iVar6 = iVar6 + 1;
                            uVar9 = puVar5[iVar6 * 2];
                        } while (uVar9 != 0xf);
                    }
                    arg2 = arg2 + 1;
                    puVar7 = puVar7 + 4;
                } while (piVar1[arg2 * 2] != 0xf);
            }
            cVar2 = fcn.00012300(auStack_118,arg2);
            if (cVar2 != '\0') {
                uVar8 = 0;
                if (arg2 != 0) {
                    puVar5 = auStack_118 + 3;
                    do {
                        piVar1[uVar8 * 2] = puVar5[-3];
                        uVar9 = *puVar5;
                        puVar5 = puVar5 + 4;
                        *(iVar3 + 0x1c + uVar8 * 8) = uVar9;
                        uVar8 = uVar8 + 1;
                    } while (uVar8 < arg2);
                }
                fcn.00010cec(0x2a058,arg2_00,puVar5,iStackX_8);
                if (iVar4 == -0x7ffffffffffffff2) {
                    iVar3 = fcn.000199d0();
                    cVar2 = (**(iVar3 + 0x30))(0x22b);
                    if ((cVar2 != '\0') && (uVar8 = 0, arg2 != 0)) {
                        puVar5 = auStack_118 + 1;
                        do {
                            if (((*puVar5 != puVar5[2]) && (puVar5[-1] < 0xb)) &&
                               ((0x661U >> (puVar5[-1] & 0x1f) & 1) != 0)) {
                                if (arg1 == 0) {
                                    return;
                                }
                                *arg1 = 1;
                                return;
                            }
                            uVar8 = uVar8 + 1;
                            puVar5 = puVar5 + 4;
                        } while (uVar8 < arg2);
                    }
                }
            }
            *0x2d0fc = '\x01';
        }
    }
    return;
}


/* fcn.00013ecc @ 0x13ecc */

void fcn.00013ecc(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    if (piVar1[2] == arg2) {
        piVar1[2] = *(arg2 + 8);
    }
    else {
        *(*arg2 + 8) = *(arg2 + 8);
    }
    if (piVar1[1] == arg2) {
        piVar1[1] = *arg2;
    }
    else {
        **(arg2 + 8) = *arg2;
    }
    *piVar1 = *piVar1 + -1;
    if (*(arg2 + 0x18) != 0) {
        (**(*0x2d150 + 0x48))();
    }
    if (*(arg2 + 0x20) != 0) {
        (**(*0x2d150 + 0x48))();
    }
    if (*(arg2 + 0x38) != 0) {
        (**(*0x2d150 + 0x48))(*(arg2 + 0x30));
    }
    //WARNING: Could not recover jumptable at 0x00013f52. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x2d150 + 0x48))(arg2);
    return;
}


/* fcn.000110d8 @ 0x110d8 */

int64_t fcn.000110d8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong uStack_58;
    int64_t iStack_50;
    int64_t var_40h;
    int64_t var_38h;
    int32_t var_30h;
    int64_t var_2ch;
    
    iVar1 = (**(*0x2d150 + 200))(1,*0x2d148,arg1,0,0,&uStack_58);
    if (iVar1 < 0) {
        if ((((arg1 != 0) && (*arg1 == '\x04')) && (*(arg1 + 1) == '\x01')) && (iVar2 = fcn.000116d0(arg1), iVar2 != 0)
           ) {
            iVar1 = (**(*0x2d150 + 200))(CONCAT71(&uStack_58 >> 8,1),*0x2d148,iVar2,0,0,&uStack_58);
            arg1 = iVar2;
        }
        if (iVar1 < 0) {
            var_40h._0_4_ = 0x300404;
            fcn.00019888(&var_40h + 4,0x16,0x29ef0,0x16);
            uVar3 = fcn.0001a004(arg1,&var_40h);
            iVar1 = (**(*0x2d150 + 200))(1,*0x2d148,uVar3,0,0,&uStack_58);
            (**(*0x2d150 + 0x48))(uVar3);
            if (iVar1 < 0) {
                return iVar1;
            }
        }
    }
    iVar1 = (**(*0x2d150 + 0x98))(uStack_58,0x29140,&iStack_50);
    if (-1 < iVar1) {
        if (*(iStack_50 + 0x50) == 1) {
            if (arg4 != 0) {
                *(iStack_50 + 0x30) = arg4;
                *(iStack_50 + 0x38) = arg3;
            }
            fcn.00010ee0(arg2);
            iVar1 = (**(*0x2d150 + 0xd0))(uStack_58,0,0);
        }
        else {
            iVar1 = -0x7ffffffffffffffd;
        }
    }
    return iVar1;
}


/* fcn.00010f88 @ 0x10f88 */

int64_t fcn.00010f88(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint16_t *puVar6;
    uint16_t auStackX_8 [8];
    uchar auStackX_18 [8];
    uint16_t *puStackX_20;
    int64_t iStack_48;
    uchar auStack_40 [8];
    
    uVar3 = 0xffffffffffffffff;
    uVar5 = 0xffffffffffffffff;
    uVar4 = 0xffffffffffffffff;
    iVar1 = (**(*0x2d150 + 0x140))(0x29340,0,&iStack_48);
    uVar2 = 0;
    if (-1 < iVar1) {
        (**(iStack_48 + 0x30))(iStack_48,auStackX_18,auStack_40,auStackX_8,&puStackX_20);
        if ((auStackX_8[0] != 0) && (auStackX_8[0] != 0)) {
            puVar6 = puStackX_20;
            do {
                if ((*puVar6 != 0xffff) && (*puVar6 != 0xfffc)) {
                    if ((*puVar6 == 0) && (uVar3 == 0xffffffffffffffff)) {
                        uVar3 = uVar2;
                    }
                    if ((puVar6[10] == *(arg1 + 4)) && (*puVar6 < uVar4)) {
                        uVar4 = *puVar6;
                        uVar5 = uVar2;
                    }
                }
                uVar2 = uVar2 + 1;
                puVar6 = puVar6 + 0x45;
            } while (uVar2 < auStackX_8[0]);
            if (uVar5 != 0xffffffffffffffff) {
                if (uVar3 != 0xffffffffffffffff) {
                    *(uVar3 * 0x45 + puStackX_20) = *(uVar5 * 0x45 + puStackX_20);
                }
                *(uVar5 * 0x45 + puStackX_20) = 0;
                fcn.00010ee0(arg2);
                iVar1 = (**(iStack_48 + 0x20))(iStack_48,arg1,0,0);
                return iVar1;
            }
        }
        iVar1 = -0x7ffffffffffffff2;
    }
    return iVar1;
}


/* fcn.0001aba4 @ 0x1aba4 */

uint32_t * fcn.0001aba4(void)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int16_t iVar3;
    uint32_t *puVar4;
    int64_t iVar5;
    uint32_t *puVar6;
    uint32_t *puVar7;
    uint32_t *puVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint32_t *puVar11;
    uint32_t *puStackX_8;
    uchar auStackX_10 [8];
    
    puVar11 = NULL;
    puVar4 = fcn.0001aabc();
    iVar3 = *puVar4;
    while (puVar7 = puVar11, iVar3 != -1) {
        if (iVar3 == 0xb) goto code_r0x0001abe6;
        puVar4 = puVar4 + *(puVar4 + 2);
        iVar3 = *puVar4;
    }
code_r0x0001abe3:
    puVar4 = puVar11;
code_r0x0001abe6:
    do {
        if (puVar4 == NULL) {
            return puVar7;
        }
        piVar1 = *(puVar4 + 2);
        if (((*(piVar1 + 0x14) & 0x20000) != 0) && (iVar5 = fcn.0001a974(piVar1,auStackX_10), iVar5 < 0)) {
            for (puVar6 = *(puVar4 + 2) + puVar4; puVar8 = puVar11, *puVar6 != -1; puVar6 = puVar6 + *(puVar6 + 2)) {
                if (*puVar6 == 0xb) goto code_r0x0001ac83;
            }
code_r0x0001ac80:
            puVar6 = puVar11;
code_r0x0001ac83:
            while (puVar6 != NULL) {
                piVar2 = *(puVar6 + 2);
                if ((((*(piVar2 + 0x14) & 0x20000) != 0) && (*piVar1 == *piVar2)) && (piVar1[1] == piVar2[1])) {
                    puVar8 = puVar8 + 1;
                }
                puVar6 = *(puVar6 + 2) + puVar6;
                iVar3 = *puVar6;
                while( true ) {
                    if (iVar3 == -1) goto code_r0x0001ac80;
                    if (iVar3 == 0xb) break;
                    puVar6 = puVar6 + *(puVar6 + 2);
                    iVar3 = *puVar6;
                }
            }
            iVar5 = (**(*0x2d128 + 0x40))(6,puVar8 * 8 + 0x10,&puStackX_8);
            if (iVar5 < 0) {
                puStackX_8 = puVar11;
            }
            if (puStackX_8 == NULL) {
                return 0x8000000000000009;
            }
            uVar9 = 1;
            *puStackX_8 = puVar8 + 1;
            *(puStackX_8 + 2) = piVar1;
            for (puVar6 = *(puVar4 + 2) + puVar4; *puVar6 != -1; puVar6 = puVar6 + *(puVar6 + 2)) {
                uVar10 = uVar9;
                if (*puVar6 == 0xb) goto code_r0x0001ad48;
            }
code_r0x0001ad45:
            puVar6 = puVar11;
            uVar10 = uVar9;
code_r0x0001ad48:
            while ((puVar6 != NULL && (uVar10 < *puStackX_8))) {
                piVar2 = *(puVar6 + 2);
                uVar9 = uVar10;
                if (((*(piVar2 + 0x14) & 0x20000) != 0) && ((*piVar1 == *piVar2 && (piVar1[1] == piVar2[1])))) {
                    uVar9 = uVar10 + 1;
                    *(puStackX_8 + uVar10 * 2 + 2) = piVar2;
                }
                puVar6 = *(puVar6 + 2) + puVar6;
                iVar3 = *puVar6;
                while( true ) {
                    if (iVar3 == -1) goto code_r0x0001ad45;
                    uVar10 = uVar9;
                    if (iVar3 == 0xb) break;
                    puVar6 = puVar6 + *(puVar6 + 2);
                    iVar3 = *puVar6;
                }
            }
            puVar6 = (**(*0x2d128 + 0xc0))(piVar1,puStackX_8);
            if (puVar6 < 0) {
                puVar7 = puVar6;
            }
        }
        puVar4 = *(puVar4 + 2) + puVar4;
        iVar3 = *puVar4;
        while( true ) {
            if (iVar3 == -1) goto code_r0x0001abe3;
            if (iVar3 == 0xb) break;
            puVar4 = puVar4 + *(puVar4 + 2);
            iVar3 = *puVar4;
        }
    } while( true );
}


/* fcn.00012d30 @ 0x12d30 */

int64_t fcn.00012d30(ulong noname_0,int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    int64_t iVar2;
    char *pcVar3;
    char *pcStackX_20;
    ulong auStack_18 [2];
    
    iVar2 = (**(*0x2d150 + 0x18))(0x1f);
    (**(*0x2d150 + 0x20))(iVar2);
    if (iVar2 == 4) {
        if (arg1 == 0) {
            fcn.00010d8c();
            iVar2 = 0;
        }
        else {
            pcVar3 = NULL;
            do {
                pcStackX_20 = arg1;
                iVar2 = (**(*0x2d150 + 0xb8))(0x29370,&pcStackX_20,auStack_18);
                pcVar1 = pcStackX_20;
                if (iVar2 < 0) {
                    return iVar2;
                }
                if (*pcStackX_20 == '\x7f') {
                    iVar2 = (**(*0x2d150 + 0x108))(auStack_18[0],0,0,arg2 & 0xff);
                    return iVar2;
                }
                if (pcStackX_20 == pcVar3) {
                    return -0x7ffffffffffffff2;
                }
                iVar2 = (**(*0x2d150 + 0x108))(auStack_18[0],0,pcStackX_20,0);
                pcVar3 = pcVar1;
            } while (-1 < iVar2);
        }
    }
    else {
        iVar2 = -0x7ffffffffffffffd;
    }
    return iVar2;
}


/* fcn.00011e50 @ 0x11e50 */

void fcn.00011e50(int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    auStackX_18[0] = 0;
    iVar1 = fcn.0001a1ec(arg1,0x291a0,0,auStackX_18);
    if (-1 < iVar1) {
        iVar1 = fcn.00019f34(0);
        if (-1 < iVar1) {
            fcn.00010a58(0);
            (**(*0x2d150 + 0x48))(0);
        }
    }
    return;
}


/* fcn.00012e20 @ 0x12e20 */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00012e20(void)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t *piVar4;
    char acStackX_8 [8];
    int64_t iStackX_10;
    uint32_t var_bp_20h;
    int64_t var_28h;
    uint32_t var_30h;
    int64_t var_38h;
    int64_t aiStack_28 [2];
    int64_t var_10h;
    
    iVar1 = (**(*0x2d150 + 0x138))(2,0x29380,0,&var_bp_20h,&iStackX_10);
    if (-1 < iVar1) {
        uVar3 = 0;
        iVar1 = -0x7ffffffffffffff2;
        if (_var_bp_20h != 0) {
            do {
                iVar2 = (**(*0x2d150 + 0x98))(*(iStackX_10 + uVar3 * 8),0x29380,&var_28h);
                if (-1 < iVar2) {
                    iVar2 = (**(var_28h + 0x30))(var_28h,0,0xb,1,acStackX_8);
                    if ((-1 < iVar2) && (acStackX_8[0] == '\x02')) {
                        piVar4 = aiStack_28;
                        iVar2 = (**(*0x2d150 + 0x98))(*(iStackX_10 + uVar3 * 8),0x29370,piVar4);
                        if (-1 < iVar2) {
                            iVar2 = fcn.00012d30(0,aiStack_28[0],CONCAT71(piVar4 >> 8,1));
                            if (iVar1 < 0) {
                                iVar1 = iVar2;
                            }
                        }
                    }
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < _var_bp_20h);
        }
        (**(*0x2d150 + 0x48))(iStackX_10);
    }
    return iVar1;
}


/* fcn.00012fe8 @ 0x12fe8 */

ulong * fcn.00012fe8(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *puVar4;
    
    puVar4 = *0x297d0;
    do {
        if (puVar4 == 0x297d0) {
            return NULL;
        }
        iVar1 = puVar4[3];
        if (arg1 == 0) {
            if (iVar1 == 0) {
                return puVar4;
            }
code_r0x00013020:
            iVar1 = -1;
code_r0x00013024:
            if (iVar1 == 0) {
                return puVar4;
            }
        }
        else {
            if (iVar1 == 0) goto code_r0x00013020;
            iVar2 = fcn.00019fb0(arg1);
            iVar3 = fcn.00019fb0(iVar1);
            if (iVar3 == iVar2) {
                iVar1 = fcn.0001a41c(arg1,iVar1,iVar2);
                goto code_r0x00013024;
            }
        }
        puVar4 = *puVar4;
    } while( true );
}


/* fcn.0002401c @ 0x2401c */

//WARNING: Variable defined which should be unmapped: var_3h
//WARNING: Removing unreachable block (ram,0x000240bd)

int16_t fcn.0002401c(uint32_t arg1)

{
    bool bVar1;
    char cVar2;
    int16_t iVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    int16_t iVar5;
    uint16_t uVar6;
    uint16_t uVar7;
    int64_t iVar8;
    int32_t var_ah;
    int32_t var_3h;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar6 = 0;
    if (*0x2d310 != '\0') {
        return *(iVar4 + 0x14);
    }
    if (iVar4 == 0) {
        return 0xff;
    }
    iVar3 = *(iVar4 + 0x14);
    if ((*(iVar4 + 0xe) != '\f') || (bVar1 = true, *(iVar4 + 0xf) != '\x03')) {
        bVar1 = false;
    }
    if (iVar3 == 2) {
        if ((*(iVar4 + 0xe) == '\b') && (*(iVar4 + 0xf) == '\x05')) {
            iVar5 = 0x12;
            uVar6 = 0;
        }
        else {
            if ((*(iVar4 + 0xe) != '\x01') || (*(iVar4 + 0xf) != '\b')) {
                if (bVar1) {
                    cVar2 = fcn.00023fc8(*(iVar4 + 0x3d));
                    iVar5 = (-(cVar2 != '\0') & 2) + 9;
                    goto code_r0x00024179;
                }
                uVar7 = 0;
                do {
                    iVar8 = uVar7 * 7;
                    if (((*(iVar8 + 6 + *0x2d300) & 8) != 0) && (*(iVar8 + 2 + *0x2d300) == 2)) {
                        if (*(iVar4 + 0x14) == 2) {
                            iVar3 = fcn.000271f0(*(iVar4 + 0x3d));
                        }
                        else {
                            iVar3 = 0xff;
                        }
                        if (*(iVar8 + 4 + *0x2d300) == iVar3) {
                            return *(uVar7 * 7 + *0x2d300);
                        }
                    }
                    uVar7 = uVar7 + 1;
                } while (uVar7 < 7);
            }
            iVar5 = 2;
        }
    }
    else if (iVar3 == 3) {
        iVar5 = (-bVar1 & 7) + 3;
    }
    else if (iVar3 == 6) {
        iVar5 = (-bVar1 & 6) + 6;
    }
    else if (iVar3 == 1) {
        iVar5 = 8;
    }
    else {
        iVar5 = 5;
        if (iVar3 != 5) {
            return 0xff;
        }
    }
code_r0x00024179:
    do {
        if (iVar5 == *(uVar6 * 7 + *0x2d300)) {
            return iVar5;
        }
        uVar6 = uVar6 + 1;
    } while (uVar6 < 7);
    return 0xff;
}


/* fcn.00013384 @ 0x13384 */

uint64_t fcn.00013384(int64_t arg1)

{
    uint16_t uVar1;
    uint64_t in_RAX;
    char *pcVar2;
    
    if (arg1 != 0) {
        uVar1 = *(arg1 + 2);
        in_RAX = 0;
        if (*(arg1 + 3) * 0x100 + *(arg1 + 2) == *0x2984b * 0x100 + *0x2984a) {
            in_RAX = fcn.0001a41c(arg1,0x29848,uVar1);
            if ((in_RAX == 0) &&
               ((pcVar2 = arg1 + uVar1, *pcVar2 == '\x7f' ||
                (((*pcVar2 == '\x04' && (pcVar2[1] == '\x06')) &&
                 (in_RAX = fcn.0001a41c(pcVar2 + 4,0x29ec0,0x10), in_RAX == 0)))))) {
                return 1;
            }
        }
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00013bd4 @ 0x13bd4 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h

void fcn.00013bd4(uint32_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int iVar2;
    uint64_t uVar3;
    uint in_register_0000000c;
    uint64_t *puVar4;
    uint64_t uVar5;
    ulong *puVar6;
    ulong *puVar7;
    ulong *puVar8;
    uint32_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    ulong *puVar12;
    ulong *puVar13;
    uint64_t uStackX_20;
    int32_t var_58h;
    int64_t var_60h;
    uint64_t uStack_60;
    ulong *puStack_58;
    ulong *puStack_50;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    
    puVar4 = CONCAT44(in_register_0000000c,arg1);
    if (1 < *puVar4) {
        puVar8 = puVar4[1];
        uVar5 = 1;
        while( true ) {
            uVar11 = 0;
            uVar9 = 0;
            uStack_60 = 0;
            puStack_58 = NULL;
            puStack_50 = NULL;
            if (puVar8 == NULL) break;
            puVar6 = NULL;
            puVar7 = NULL;
            puVar12 = puVar8;
            do {
                puVar8 = puVar7;
                uVar9 = uVar9 + 1;
                uVar3 = 0;
                iVar10 = 0;
                puVar7 = puVar12;
                if (uVar5 != 0) {
                    do {
                        puVar7 = *puVar7;
                        iVar10 = iVar10 + 1;
                        if (puVar7 == NULL) break;
                        uVar3 = uVar3 + 1;
                    } while (uVar3 < uVar5);
                }
                uVar3 = uVar5;
                puVar1 = puVar12;
                uStackX_20 = uVar5;
                while( true ) {
                    while( true ) {
                        puVar13 = puVar1;
                        puVar12 = puVar7;
                        if (iVar10 == 0) break;
                        puVar7 = puVar12;
                        puStack_50 = puVar13;
                        if ((uVar3 == 0) || (puVar12 == NULL)) {
                            puVar1 = *puVar13;
                            *puVar13 = 0;
                            puVar13[1] = puVar6;
                            if (puVar8 == NULL) {
                                puVar8 = puVar13;
                                puStack_58 = puVar13;
                            }
                            else {
                                *puVar6 = puVar13;
                            }
                            uVar11 = uVar11 + 1;
                            iVar10 = iVar10 + -1;
                            puVar6 = puVar13;
                            uStack_60 = uVar11;
                        }
                        else {
                            iVar2 = (*arg2)(puVar13,puVar12);
                            if (0 < iVar2) {
                                puVar7 = *puVar12;
                                *puVar12 = 0;
                                puVar12[1] = puVar6;
                                if (puVar8 == NULL) {
                                    puVar8 = puVar12;
                                    puStack_58 = puVar12;
                                }
                                else {
                                    *puVar6 = puVar12;
                                }
                                goto code_r0x00013cef;
                            }
                            puVar1 = *puVar13;
                            *puVar13 = 0;
                            puVar13[1] = puVar6;
                            if (puVar8 == NULL) {
                                puVar8 = puVar13;
                                puStack_58 = puVar13;
                            }
                            else {
                                *puVar6 = puVar13;
                            }
                            uVar11 = uVar11 + 1;
                            iVar10 = iVar10 + -1;
                            uVar3 = uStackX_20;
                            puVar6 = puVar13;
                            uStack_60 = uVar11;
                        }
                    }
                    if ((uVar3 == 0) || (puVar12 == NULL)) break;
                    puVar7 = *puVar12;
                    *puVar12 = 0;
                    puVar12[1] = puVar6;
                    uStackX_20 = uVar3;
                    if (puVar8 == NULL) {
                        puVar8 = puVar12;
                        puStack_58 = puVar12;
                    }
                    else {
                        *puVar6 = puVar12;
                    }
code_r0x00013cef:
                    uVar11 = uVar11 + 1;
                    uStackX_20 = uStackX_20 - 1;
                    uVar3 = uStackX_20;
                    puVar6 = puVar12;
                    puVar1 = puVar13;
                    uStack_60 = uVar11;
                    puStack_50 = puVar12;
                }
                puVar7 = puVar8;
            } while (puVar12 != NULL);
            if (uVar9 < 2) break;
            uVar5 = uVar5 * 2;
        }
        *puVar4 = uStack_60;
        puVar4[1] = puStack_58;
        puVar4[2] = puStack_50;
    }
    return;
}


/* fcn.00013614 @ 0x13614 */

void fcn.00013614(int64_t arg1,uint32_t arg2)

{
    uint in_register_00000014;
    int64_t *piVar1;
    uchar auStack_28 [32];
    
    piVar1 = CONCAT44(in_register_00000014,arg2);
    if (piVar1[8] != -1) {
        fcn.000188f8(auStack_28,0x12,0x2a108,*(piVar1 + 8));
        (**(*0x2d158 + 0x58))(auStack_28,0x291a0,0,0,0);
    }
    if (*(arg1 + 0x10) == piVar1) {
        *(arg1 + 0x10) = piVar1[1];
    }
    else {
        *(*piVar1 + 8) = piVar1[1];
    }
    if (*(arg1 + 8) == piVar1) {
        *(arg1 + 8) = *piVar1;
    }
    else {
        *piVar1[1] = *piVar1;
    }
    *arg1 = *arg1 + -1;
    if (piVar1[3] != 0) {
        (**(*0x2d150 + 0x48))();
    }
    if (piVar1[4] != 0) {
        (**(*0x2d150 + 0x48))();
    }
    if (piVar1[7] != 0) {
        (**(*0x2d150 + 0x48))(piVar1[6]);
    }
    //WARNING: Could not recover jumptable at 0x00013f52. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x2d150 + 0x48))(piVar1);
    return;
}


/* fcn.00013e38 @ 0x13e38 */

ulong * fcn.00013e38(int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    ulong *puVar5;
    
    puVar5 = fcn.00019ec8(0x70);
    uVar3 = *0x2a6e8;
    uVar2 = *0x2a6e0;
    uVar1 = *0x2a6d8;
    *puVar5 = *0x2a6d0;
    puVar5[1] = uVar1;
    uVar4 = *0x2a6f8;
    uVar1 = *0x2a6f0;
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    uVar3 = *0x2a708;
    uVar2 = *0x2a700;
    puVar5[4] = uVar1;
    puVar5[5] = uVar4;
    uVar4 = *0x2a718;
    uVar1 = *0x2a710;
    puVar5[6] = uVar2;
    puVar5[7] = uVar3;
    uVar3 = *0x2a728;
    uVar2 = *0x2a720;
    puVar5[8] = uVar1;
    puVar5[9] = uVar4;
    uVar4 = *0x2a738;
    uVar1 = *0x2a730;
    puVar5[10] = uVar2;
    puVar5[0xb] = uVar3;
    puVar5[0xc] = uVar1;
    puVar5[0xd] = uVar4;
    *puVar5 = 0;
    puVar5[1] = *(arg1 + 0x10);
    if (*(arg1 + 8) == 0) {
        *(arg1 + 8) = puVar5;
    }
    else {
        **(arg1 + 0x10) = puVar5;
    }
    *arg1 = *arg1 + 1;
    *(arg1 + 0x10) = puVar5;
    return puVar5;
}


/* fcn.000159cc @ 0x159cc */

uint64_t fcn.000159cc(int64_t arg1)

{
    ushort *arg3;
    uint64_t uVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t arg1_00;
    uint64_t arg3_00;
    ushort *arg3_01;
    int64_t iStackX_8;
    ushort auStack_828 [1024];
    
    arg3_00 = 0x400;
    uVar1 = fcn.000137ec(arg1,auStack_828,0x400);
    if (uVar1 < 0x400) {
        arg3_00 = 0x400 - uVar1;
        piVar2 = 0x2a4c0;
        uVar5 = 0;
        do {
            iVar4 = arg1;
            uVar3 = (**piVar2)(arg1,auStack_828 + uVar1,arg3_00);
            if (uVar3 != 0) goto code_r0x00015a4c;
            uVar5 = uVar5 + 1;
            piVar2 = uVar5 * 8 + 0x2a4c0;
        } while (*piVar2 != 0);
        uVar3 = 0;
code_r0x00015a4c:
        uVar1 = uVar1 + uVar3;
        if (uVar3 == 0) {
            iStackX_8 = arg3_00 * 2;
            arg3 = auStack_828 + uVar1;
            arg3_01 = arg3;
            iVar4 = fcn.0001a7ac(iVar4,10,&iStackX_8,arg3);
            if (iVar4 < 0) {
                uVar5 = fcn.000188f8(arg3,iStackX_8,0x2a678,arg3_01);
            }
            else {
                uVar5 = iStackX_8 - 1U >> 1;
            }
            uVar1 = uVar1 + uVar5;
            if (arg3_00 <= uVar1) goto code_r0x00015ad1;
            arg3_00 = arg3_00 - uVar1;
        }
        iVar4 = fcn.0001385c(arg1,auStack_828 + uVar1,arg3_00);
        uVar1 = uVar1 + iVar4;
        if (uVar1 < arg3_00) goto code_r0x00015adb;
    }
code_r0x00015ad1:
    uVar1 = arg3_00 - 1;
    auStack_828[uVar1] = 0;
code_r0x00015adb:
    iVar4 = uVar1 * 2 + 2;
    arg1_00 = fcn.00019ec8(iVar4);
    *(arg1 + 0x18) = arg1_00;
    fcn.00029090(arg1_00,auStack_828,iVar4);
    return uVar1;
}


/* fcn.0001a7ac @ 0x1a7ac */

int64_t fcn.0001a7ac(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t arg1_01;
    int64_t noname_1;
    int64_t iVar2;
    
    arg1_00 = *0x2d118;
    if ((*0x2d1a8 != 0) || (iVar1 = (**(*0x2d150 + 0x140))(0x29a80,0,0x2d1a8), -1 < iVar1)) {
        iVar1 = fcn.0001a494();
        arg1_01 = fcn.0001a628(arg1_00);
        if (arg1_01 != 0) {
            iVar1 = fcn.0001a508(arg1_01,iVar1,0x2c170,0x2c170);
            if (iVar1 == 0) {
                iVar2 = -0x7ffffffffffffff2;
            }
            else {
                iVar2 = (**(*0x2d1a8 + 8))(*0x2d1a8,iVar1,arg1_00,arg1 & 0xffff,arg3,arg2,0);
                noname_1 = *0x2d150;
                (**(*0x2d150 + 0x48))(iVar1);
                if (iVar2 == -0x7fffffffffffffe0) {
                    iVar2 = fcn.0001a6e8(arg1_01,noname_1,arg1_00,arg1 & 0xffff);
                }
            }
            (**(*0x2d150 + 0x48))(arg1_01);
            return iVar2;
        }
    }
    return -0x7ffffffffffffff2;
}


/* fcn.000117e8 @ 0x117e8 */

int64_t fcn.000117e8(ulong noname_0,uint32_t arg1,ulong noname_2,uint32_t arg2)

{
    int64_t iVar1;
    uint in_register_00000014;
    uint64_t uVar2;
    char *pcVar3;
    uint in_R9;
    int64_t *piVar4;
    uchar auStackX_20 [8];
    int64_t in_stack_00000028;
    int64_t aiStack_18 [2];
    
    piVar4 = CONCAT44(in_R9,arg2);
    pcVar3 = CONCAT44(in_register_00000014,arg1);
    if ((piVar4 == NULL) || ((*piVar4 != 0 && (in_stack_00000028 == 0)))) {
code_r0x000118f2:
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        if ((pcVar3 == NULL) || (*pcVar3 == '\x7f')) {
            pcVar3 = 0x29ec0;
        }
        else {
            if ((*pcVar3 != '\x04') || (pcVar3[1] != '\x06')) goto code_r0x000118f2;
            pcVar3 = pcVar3 + 4;
        }
        if (in_stack_00000028 == 0) {
            in_stack_00000028 = 1;
        }
        uVar2 = 0;
        iVar1 = -0x7ffffffffffffff2;
        if (*0x2d110 != 0) {
            do {
                iVar1 = (**(*0x2d150 + 0x98))(*(*0x2d108 + uVar2 * 8),0x293a0,aiStack_18);
                if ((-1 < iVar1) &&
                   (iVar1 = (**(aiStack_18[0] + 0x18))
                                      (aiStack_18[0],pcVar3,0x10,0,&stack0x00000028,piVar4,auStackX_20),
                   -1 < iVar1)) {
                    if (iVar1 != 4) {
                        return iVar1;
                    }
                    return -0x7ffffffffffffffb;
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < *0x2d110);
        }
    }
    return iVar1;
}


/* fcn.00016514 @ 0x16514 */

uint8_t fcn.00016514(int64_t arg1)

{
    uint8_t uVar1;
    code *pcVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    
    uVar3 = 0;
    uVar4 = 0;
    pcVar2 = 0x162ac;
    while (pcVar2 != NULL) {
        uVar1 = (*pcVar2)(arg1);
        uVar3 = uVar3 | uVar1;
        uVar4 = uVar4 + 1;
        pcVar2 = *(uVar4 * 8 + 0x2a520);
    }
    return uVar3;
}


/* fcn.0001ec6c @ 0x1ec6c */

void fcn.0001ec6c(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    code *pcVar3;
    uint16_t uVar4;
    uint64_t uVar5;
    int32_t var_bp_10h;
    int32_t var_ch;
    int32_t var_bp_8h;
    int32_t var_4h;
    
    var_bp_10h = 0x42544f90;
    var_ch = 0x42f2b0c2;
    var_bp_8h = 0x69274d88;
    var_4h = -0x3a669a52;
    iVar1 = (**(*0x2d128 + 0x140))(&var_bp_10h,0,0x2d250);
    if (-1 < iVar1) {
        uVar4 = 0;
        *(*0x2f9f8 + 0x4c) = 1;
        piVar2 = 0x2ca70;
        do {
            iVar1 = (**piVar2)();
            if (iVar1 < 0) break;
            uVar4 = uVar4 + 1;
            piVar2 = uVar4 * 8 + 0x2ca70;
        } while (*piVar2 != 0);
        uVar5 = 0;
        pcVar3 = fcn.000209dc;
        while (pcVar3 != NULL) {
            (*pcVar3)();
            uVar5 = uVar5 + 1;
            pcVar3 = *(uVar5 * 8 + 0x2ca40);
        }
        *(*0x2f9f8 + 0x4c) = 0;
    }
    return;
}


/* fcn.00014018 @ 0x14018 */

int64_t fcn.00014018(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t *arg2_00;
    int16_t iVar1;
    uint16_t uVar2;
    int iVar3;
    int16_t *piVar4;
    int64_t iVar5;
    int64_t arg1_00;
    int64_t iVar6;
    int64_t iVar7;
    int *arg2_01;
    uint64_t arg1_01;
    int *in_stack_00000028;
    
    iVar5 = fcn.00013e38(arg1);
    arg2_00 = arg3 + 6;
    iVar6 = 0;
    *(iVar5 + 0x10) = *arg3;
    iVar1 = *arg2_00;
    piVar4 = arg2_00;
    while (iVar1 != 0) {
        piVar4 = piVar4 + 1;
        iVar6 = iVar6 + 1;
        iVar1 = *piVar4;
    }
    iVar7 = iVar6 * 2 + 2;
    arg1_00 = fcn.00019ec8(iVar7);
    *(iVar5 + 0x18) = arg1_00;
    fcn.00029090(arg1_00,arg2_00,iVar7);
    uVar2 = *(arg3 + 4);
    *(iVar5 + 0x28) = uVar2;
    iVar7 = iVar6 * 2 + 8 + arg3;
    iVar6 = fcn.00019ec8(uVar2);
    *(iVar5 + 0x20) = iVar6;
    fcn.00029090(iVar6,iVar7,*(iVar5 + 0x28));
    arg2_01 = *(arg3 + 4) + iVar7;
    arg1_01 = (arg3 - arg2_01) + arg4;
    *(iVar5 + 0x40) = arg2;
    iVar3 = *in_stack_00000028;
    *(iVar5 + 0x44) = iVar3;
    *in_stack_00000028 = iVar3 + 0x100;
    if (3 < arg1_01) {
        if (*arg2_01 == 0x4f420000) {
            arg1_01 = arg1_01 - 4;
            *(iVar5 + 0x68) = 1;
            arg2_01 = arg2_01 + 1;
        }
        else if (*arg2_01 == 0x4f470000) {
            arg1_01 = arg1_01 - 4;
            *(iVar5 + 0x68) = 0x101;
            for (arg2_01 = arg2_01 + 1; ((8 < arg1_01 && (*arg2_01 == 0x4f4e0000)) && (arg2_01[1] <= arg1_01));
                arg2_01 = arg2_01 + arg2_01[1]) {
                fcn.00014018(arg1,arg2 & 0xffff,arg2_01 + 2,arg2_01[1] - 8);
                arg1_01 = arg1_01 - arg2_01[1];
            }
        }
    }
    if (arg1_01 == 0) {
        *(iVar5 + 0x30) = 0;
        *(iVar5 + 0x38) = 0;
    }
    else {
        iVar6 = fcn.00019ec8(arg1_01);
        *(iVar5 + 0x30) = iVar6;
        fcn.00029090(iVar6,arg2_01,arg1_01);
        *(iVar5 + 0x38) = arg1_01;
    }
    return iVar5;
}


/* fcn.000143dc @ 0x143dc */

void fcn.000143dc(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00019ec8(*(arg1 + 0x28) + 0x18);
    if (arg1_00 != 0) {
        fcn.00029090(arg1_00,0x29990,0x18);
        fcn.00029090(arg1_00 + 0x18,*(arg1 + 0x20),*(arg1 + 0x28));
        (**(*0x2d150 + 0x48))(*(arg1 + 0x20));
        *(arg1 + 0x28) = *(arg1 + 0x28) + 0x18;
        *(arg1 + 0x20) = arg1_00;
    }
    return;
}


/* fcn.00013f58 @ 0x13f58 */

ulong * fcn.00013f58(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    
    puVar1 = fcn.00019ec8(0x28);
    puVar1[4] = arg4;
    *(puVar1 + 3) = arg3;
    puVar1[2] = arg2;
    *puVar1 = 0;
    puVar1[1] = *(arg1 + 0x10);
    if (*(arg1 + 8) == 0) {
        *(arg1 + 8) = puVar1;
    }
    else {
        **(arg1 + 0x10) = puVar1;
    }
    *arg1 = *arg1 + 1;
    *(arg1 + 0x10) = puVar1;
    return puVar1;
}


/* fcn.000146a4 @ 0x146a4 */

void fcn.000146a4(int64_t arg1,uint32_t arg2)

{
    uint in_register_00000014;
    uint64_t uVar1;
    
    uVar1 = 0;
    if (*CONCAT44(in_register_00000014,arg2) != 0) {
        do {
            fcn.00013f58(0x2fa40,*(*arg1 + uVar1 * 8),0xffff,0);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *CONCAT44(in_register_00000014,arg2));
    }
    //WARNING: Could not recover jumptable at 0x000146fd. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x2d150 + 0x48))(*arg1);
    return;
}


/* fcn.00013fd4 @ 0x13fd4 */

void fcn.00013fd4(uint32_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    uint in_register_00000014;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = *(CONCAT44(in_register_00000014,arg2) + 8);
    if (piVar2[2] == CONCAT44(in_register_00000014,arg2)) {
        piVar2[2] = iVar1;
    }
    else {
        *(*CONCAT44(in_register_00000014,arg2) + 8) = iVar1;
    }
    if (piVar2[1] == CONCAT44(in_register_00000014,arg2)) {
        piVar2[1] = *CONCAT44(in_register_00000014,arg2);
    }
    else {
        **(CONCAT44(in_register_00000014,arg2) + 8) = *CONCAT44(in_register_00000014,arg2);
    }
    iVar1 = *0x2d150;
    *piVar2 = *piVar2 + -1;
    //WARNING: Could not recover jumptable at 0x00014011. Too many branches
    //WARNING: Treating indirect jump as call
    (**(iVar1 + 0x48))(CONCAT44(in_register_00000014,arg2));
    return;
}


/* fcn.00014a20 @ 0x14a20 */

ulong fcn.00014a20(int64_t arg1,int64_t arg2)

{
    char cVar1;
    ulong in_RAX;
    unkbyte7 Var3;
    char *pcVar2;
    uint32_t uVar4;
    
    Var3 = in_RAX >> 8;
    uVar4 = 0;
    cVar1 = *arg1;
    while (cVar1 != '\x7f') {
        if (cVar1 == '\x03') {
            cVar1 = *(arg1 + 1);
            if (cVar1 == '\x05') {
                uVar4 = uVar4 | 1;
            }
            else if (cVar1 == '\x0f') {
                uVar4 = uVar4 | 2;
            }
            else if (cVar1 == '\x10') {
                uVar4 = uVar4 | 4;
            }
        }
        pcVar2 = arg1 + *(arg1 + 2);
        arg1 = pcVar2 + *(arg1 + 3) * 0x100;
        Var3 = pcVar2 >> 8;
        cVar1 = *arg1;
    }
    if (arg2 != 0) {
        *arg2 = uVar4;
    }
    return CONCAT71(Var3,uVar4 != 0);
}


/* fcn.0001493c @ 0x1493c */

char * fcn.0001493c(uint32_t arg1)

{
    char *pcVar1;
    char cVar2;
    uint in_register_0000000c;
    char *pcVar3;
    
    pcVar1 = CONCAT44(in_register_0000000c,arg1);
    pcVar3 = NULL;
    if (pcVar1 == NULL) {
        return NULL;
    }
    cVar2 = *pcVar1;
    while (cVar2 != '\x7f') {
        if (cVar2 == '\x03') {
            pcVar3 = pcVar1;
        }
        pcVar1 = pcVar1 + pcVar1[3] * 0x100 + pcVar1[2];
        cVar2 = *pcVar1;
    }
    return pcVar3;
}


/* fcn.00014cc4 @ 0x14cc4 */

BADSPACEBASE * fcn.00014cc4(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    
    uVar5 = arg1 & 0xffff;
    if (arg1 != 0) {
        iVar4 = arg2 + uVar5 * -0x45;
        uVar2 = uVar5 - 1;
        uVar3 = uVar2;
        if (uVar2 != -1) {
            while( true ) {
                iVar6 = (uVar3 & 0xffff) * 0x45;
                if ((((*(arg2 + 2) != *(iVar6 + 2 + iVar4)) || (*(arg2 + 6) != *(iVar6 + 6 + iVar4))) ||
                    (*(arg2 + 10) != *(iVar6 + 10 + iVar4))) ||
                   ((*(arg2 + 0xe) != *(iVar6 + 0xe + iVar4) || (*(arg2 + 0xf) != *(iVar6 + 0xf + iVar4))))) break;
                if ((*(arg2 + 0x3d) != *(iVar6 + 0x3d + iVar4)) ||
                   ((*(arg2 + 0x41) != *(iVar6 + 0x41 + iVar4) || (uVar1 = uVar3 - 1, uVar3 = uVar1, uVar1 == 0xffff))
                   )) break;
            }
        }
        *0x20 = CONCAT71(uVar5 >> 8,uVar5 - uVar3) - 1;
    }
    return *0x20;
}


/* fcn.00029030 @ 0x29030 */

int64_t fcn.00029030(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint *puVar4;
    
    uVar1 = arg2;
    puVar4 = arg1;
    if (3 < arg3) {
        if ((arg1 & 3U) != 0) {
            iVar3 = 4 - (arg1 & 3U);
            arg3 = arg3 - iVar3;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar4 = uVar1;
                puVar4 = puVar4 + 1;
            }
        }
        for (uVar2 = arg3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar4 = puVar4 + 1;
        }
        arg3 = arg3 & 3;
    }
    for (; arg3 != 0; arg3 = arg3 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
    }
    return arg1;
}


/* fcn.000152b8 @ 0x152b8 */

int64_t fcn.000152b8(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t arg1_00;
    int64_t iVar3;
    int64_t iStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    uint32_t var_48h;
    
    iStackX_8 = arg1;
    iVar1 = (**(*0x2d150 + 0x98))(arg1,0x29660,&iStackX_10);
    if (((iVar1 < 0) || (*(*(iStackX_10 + 8) + 6) == '\0')) ||
       (iVar1 = (**(*0x2d150 + 0x98))(iStackX_8,0x29370,&iStackX_20), iVar1 < 0)) {
        return iStackX_8;
    }
    iVar1 = iStackX_20;
    while (arg1_00 = iVar1, *(*(iStackX_10 + 8) + 6) != '\0') {
        iVar3 = iVar1;
        iStackX_18 = iVar1;
        if (iVar1 == 0) {
code_r0x00015337:
            arg1_00 = 0;
        }
        else {
            iVar2 = fcn.0001a1bc(iVar1);
            iVar2 = iVar2 - iVar1;
            if (iVar2 == 0) goto code_r0x00015337;
            arg1_00 = fcn.00019ec8(iVar2 + 4);
            fcn.00029090(arg1_00,iVar1,iVar2);
            *(iVar2 + arg1_00) = 0x4ff7f;
            iVar3 = iStackX_18;
        }
        if (iVar3 != iStackX_20) {
            (**(*0x2d150 + 0x48))(iVar3);
        }
        if (arg1_00 == 0) goto code_r0x000153fb;
        iStackX_18 = arg1_00;
        iVar1 = (**(*0x2d150 + 0xb8))(0x29660,&iStackX_18,&iStackX_8);
        if ((iVar1 < 0) ||
           (iVar3 = (**(*0x2d150 + 0x98))(iStackX_8,0x29660,&iStackX_10), iVar1 = arg1_00, iVar3 < 0)) break;
    }
    if ((arg1_00 != 0) && (arg1_00 != iStackX_20)) {
        (**(*0x2d150 + 0x48))(arg1_00);
    }
code_r0x000153fb:
    if (*(*(iStackX_10 + 8) + 6) == '\0') {
        return iStackX_8;
    }
    return arg1;
}


/* fcn.0001541c @ 0x1541c */

int64_t fcn.0001541c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int iVar2;
    int64_t iVar3;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    char *pcStackX_20;
    char *pcStack_38;
    int64_t iStack_30;
    
    iVar3 = (**(*0x2d150 + 0x98))(arg1,0x29370,&pcStackX_20);
    if (-1 < iVar3) {
        for (pcVar5 = pcStackX_20; pcVar5 != NULL; pcVar5 = pcVar5 + iVar2) {
            for (; *pcVar5 != '\x7f'; pcVar5 = pcVar5 + (pcVar5[2] + pcVar5[3] * 0x100)) {
                if (*pcVar5 == '\x03') goto code_r0x000154a0;
            }
            pcVar5 = NULL;
code_r0x000154a0:
            if (pcVar5 == NULL) {
                return arg1;
            }
            iVar2 = pcVar5[2] + pcVar5[3] * 0x100;
            if (pcVar5[1] == '\v') {
                pcVar5 = pcVar5 + iVar2;
                if (*pcVar5 == '\x7f') {
                    return arg1;
                }
                if (pcStackX_20 == NULL) {
                    pcVar4 = NULL;
                }
                else {
                    pcVar4 = fcn.0001a174(pcStackX_20);
                }
                iVar3 = *0x2d150;
                pcVar6 = pcVar5 + (pcVar4 - pcStackX_20);
                *pcVar6 = '\x7f';
                pcVar6[1] = -1;
                pcVar6[2] = '\x04';
                pcVar6[3] = '\0';
                pcStack_38 = pcVar4;
                iVar3 = (**(iVar3 + 0xb8))(0x29370,&pcStack_38,&iStack_30);
                (**(*0x2d150 + 0x48))(pcVar4);
                if (iVar3 < 0) {
                    return arg1;
                }
                if (pcStack_38 != pcVar6) {
                    return arg1;
                }
                if (arg2 != 0) {
                    *arg2 = 0;
                }
                if (arg3 != 0) {
                    *arg3 = 0;
                }
                do {
                    if (pcVar5 == NULL) {
                        return iStack_30;
                    }
                    for (; *pcVar5 != '\x7f'; pcVar5 = pcVar5 + (pcVar5[3] * 0x100 + pcVar5[2])) {
                        if (*pcVar5 == '\x03') goto code_r0x0001557f;
                    }
                    pcVar5 = NULL;
code_r0x0001557f:
                    if (pcVar5 == NULL) {
                        return iStack_30;
                    }
                    uVar1 = pcVar5[1];
                    if (0xb < uVar1) {
                        if (uVar1 < 0xe) {
                            if (arg2 != 0) {
                                *arg2 = uVar1;
                            }
                        }
                        else if ((uVar1 == 0x18) && (arg3 != 0)) {
                            *arg3 = 1;
                        }
                    }
                    pcVar5 = pcVar5 + (pcVar5[3] * 0x100 + pcVar5[2]);
                } while( true );
            }
        }
    }
    return arg1;
}


/* fcn.00019dc4 @ 0x19dc4 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

uchar fcn.00019dc4(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    char cVar2;
    uchar uVar3;
    int64_t iVar4;
    uint *puVar5;
    uint auStackX_18 [2];
    int64_t iStackX_20;
    uint32_t var_30h;
    int64_t var_38h;
    int64_t iStack_28;
    int64_t iStack_20;
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    auStackX_18[0] = 0x4ff7f;
    cVar2 = fcn.00019bb0(arg1,0,arg2,0);
    if (cVar2 == '\0') {
        iVar4 = (**(*0x2d150 + 0x98))(arg1,0x29a30,&iStackX_20);
        if (iVar4 < 0) {
            uVar3 = 0;
        }
        else {
            if (iStackX_20 == 0) {
                iStackX_20 = 0;
            }
            else {
                iStackX_20 = fcn.0001a174(iStackX_20);
            }
            uVar1 = auStackX_18[0];
            do {
                auStackX_18[0] = CONCAT31(auStackX_18[0]._1_3_,1);
                iVar4 = iStackX_20;
                iStack_28 = iStackX_20;
                puVar5 = fcn.0001a1bc(iStackX_20);
                if (puVar5 == NULL) {
code_r0x00019ea0:
                    uVar3 = 0;
                    break;
                }
                *puVar5 = uVar1;
                iVar4 = (**(*0x2d150 + 0xb8))(0x29a30,&iStack_28,&iStack_20);
                if (iVar4 < 0) {
                    iVar4 = iStackX_20;
                    goto code_r0x00019ea0;
                }
                uVar3 = fcn.00019bb0(iStack_20,arg1,arg2,auStackX_18);
                iVar4 = iStackX_20;
            } while (auStackX_18[0] == '\0');
            (**(*0x2d150 + 0x48))(iVar4);
        }
    }
    else {
        uVar3 = 1;
    }
    return uVar3;
}


/* fcn.000157f8 @ 0x157f8 */

uint64_t fcn.000157f8(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int iVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    uint64_t uVar5;
    char *arg1_00;
    uint64_t uVar6;
    int64_t iStackX_8;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar6 = 0;
    uVar5 = uVar6;
    if (*arg1_00 != '\x7f') {
        do {
            cVar1 = fcn.00013384(arg1_00);
            if (cVar1 == '\0') {
                if (*arg1_00 == '\x05') {
                    if (*(arg1_00 + 4) - 1U < 6) {
                        iVar2 = *(arg1_00 + 4) - 1;
                    }
                    else {
                        iVar2 = (*(arg1_00 + 4) != 0x80) + 6;
                    }
                    uVar4 = *(iVar2 * 2 + 0x2a548);
                }
                else {
                    uVar4 = uVar6;
                    do {
                        if ((*arg1_00 == *(uVar4 * 4 + 0x29830)) && (arg1_00[1] == *(uVar4 * 4 + 0x29831))) {
                            uVar4 = *(uVar4 * 4 + 0x29832);
                            goto code_r0x000158b8;
                        }
                        uVar4 = uVar4 + 1;
                    } while (uVar4 < 6);
                    uVar4 = 0xffff;
                }
            }
            else {
                uVar4 = 2;
            }
code_r0x000158b8:
            iStackX_8 = (arg3 - uVar5) * 2;
            if ((((uVar4 != -1) && (iVar3 = fcn.0001a7ac(uVar4,uVar4,&iStackX_8,arg2 + uVar5 * 2), -1 < iVar3)) &&
                (iStackX_8 != 0)) && (uVar5 = uVar5 + (iStackX_8 - 1U >> 1), uVar5 < arg3 - 1U)) {
                *(arg2 + uVar5 * 2) = 0x20;
                uVar5 = uVar5 + 1;
            }
            arg1_00 = arg1_00 + arg1_00[3] * 0x100 + arg1_00[2];
        } while (*arg1_00 != '\x7f');
        if (uVar5 != 0) {
            uVar5 = uVar5 - 1;
            *(arg2 + uVar5 * 2) = 0;
        }
    }
    return uVar5;
}


/* fcn.000137ec @ 0x137ec */

int64_t fcn.000137ec(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t arg3_00;
    bool bVar2;
    uint64_t auStackX_18 [2];
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar1 + 0x20) == NULL) {
        bVar2 = *(iVar1 + 0x60) != 0;
    }
    else {
        bVar2 = **(iVar1 + 0x20) == '\x05';
    }
    if (bVar2) {
        iVar1 = 0;
    }
    else {
        arg3_00 = arg2;
        auStackX_18[0] = arg3;
        iVar1 = fcn.0001a7ac(iVar1,0xd,auStackX_18,arg2);
        if (iVar1 < 0) {
            iVar1 = fcn.000188f8(arg2,auStackX_18[0],0x2a470,arg3_00);
        }
        else {
            iVar1 = (auStackX_18[0] >> 1) - 1;
        }
    }
    return iVar1;
}


/* fcn.0001385c @ 0x1385c */

ulong fcn.0001385c(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    char *pcVar4;
    bool bVar5;
    char *pcStackX_8;
    ulong uStackX_20;
    uchar auStack_48 [64];
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    pcStackX_8 = NULL;
    uStackX_20 = 0x3c;
    if (*(iVar3 + 0x20) == NULL) {
        bVar5 = *(iVar3 + 0x60) != 0;
    }
    else {
        bVar5 = **(iVar3 + 0x20) == '\x05';
    }
    if (!bVar5) {
        iVar3 = *(iVar3 + 0x50);
        iVar1 = (**(*0x2d150 + 0x98))(iVar3,0x29370,&pcStackX_8);
        pcVar4 = pcStackX_8;
        if (-1 < iVar1) {
            for (; (pcVar4 != NULL && (*pcVar4 != '\x7f')); pcVar4 = pcVar4 + iVar3 + pcVar4[2]) {
                if ((*pcVar4 == '\x04') && (pcVar4[1] == '\x01')) goto code_r0x000138fa;
                iVar3 = pcVar4[3] * 0x100;
            }
            pcVar4 = NULL;
code_r0x000138fa:
            if ((pcVar4 != NULL) && (iVar3 = fcn.0001a7ac(iVar3,0x10,&uStackX_20,auStack_48), -1 < iVar3)) {
                uVar2 = fcn.000188f8(arg2,arg3,0x2a480,auStack_48);
                return uVar2;
            }
        }
    }
    return 0;
}


/* fcn.00014904 @ 0x14904 */

ulong fcn.00014904(uint32_t arg1)

{
    char *pcVar1;
    char cVar2;
    uint in_register_0000000c;
    char cVar3;
    
    pcVar1 = CONCAT44(in_register_0000000c,arg1);
    cVar3 = '\0';
    if (pcVar1 == NULL) {
        return 0;
    }
    cVar2 = *pcVar1;
    while (cVar2 != '\x7f') {
        if (cVar2 == '\x03') {
            cVar3 = pcVar1[1];
        }
        pcVar1 = pcVar1 + pcVar1[3] * 0x100 + pcVar1[2];
        cVar2 = *pcVar1;
    }
    return CONCAT71(pcVar1 >> 8,cVar3);
}


/* fcn.0002903e @ 0x2903e */

int64_t fcn.0002903e(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint *puVar4;
    
    uVar1 = arg3;
    puVar4 = arg1;
    if (3 < arg2) {
        if ((arg1 & 3U) != 0) {
            iVar3 = 4 - (arg1 & 3U);
            arg2 = arg2 - iVar3;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar4 = uVar1;
                puVar4 = puVar4 + 1;
            }
        }
        for (uVar2 = arg2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar4 = puVar4 + 1;
        }
        arg2 = arg2 & 3;
    }
    for (; arg2 != 0; arg2 = arg2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
    }
    return arg1;
}


/* fcn.00014d90 @ 0x14d90 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_10h

uint64_t fcn.00014d90(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t iStackX_10;
    uint64_t uStackX_18;
    int64_t var_28h;
    uint32_t var_30h;
    int64_t var_38h;
    int64_t iStack_38;
    uint64_t uStack_30;
    uint32_t var_bp_20h;
    uint32_t var_18h;
    uint32_t var_10h;
    uint32_t var_bp_8h;
    
    iVar1 = (**(*0x2d150 + 0x138))(2,0x29380,0,&uStackX_18,&iStackX_10);
    uVar2 = 0;
    if (iVar1 < 0) {
        uVar2 = 0;
    }
    else {
        uVar3 = uVar2;
        if (uStackX_18 != 0) {
            do {
                iVar1 = (**(*0x2d150 + 0x98))(*(iStackX_10 + uVar3 * 8),0x29380,&var_28h);
                if ((((-1 < iVar1) &&
                     (iVar1 = (**(var_28h + 0x70))(var_28h,&iStack_38,&uStack_30,&var_bp_20h,&var_18h), -1 < iVar1)
                     ) && (iStack_38 == 0)) &&
                   (((uStack_30 == *(arg1 + 2) && (_var_bp_20h == *(arg1 + 6))) && (_var_18h == *(arg1 + 10))))) {
                    uVar2 = *(iStackX_10 + uVar3 * 8);
                    break;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < uStackX_18);
        }
        (**(*0x2d150 + 0x48))(iStackX_10);
    }
    return uVar2;
}


/* fcn.00015f80 @ 0x15f80 */

int64_t fcn.00015f80(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint64_t uVar3;
    
    uVar3 = 0;
    if (*0x298a0 != 0) {
        piVar1 = 0x298a0;
        do {
            iVar2 = (**piVar1)(arg1,arg2,arg3);
            if (iVar2 != 0) {
                return iVar2;
            }
            uVar3 = uVar3 + 1;
            piVar1 = uVar3 * 8 + 0x298a0;
        } while (*piVar1 != 0);
    }
    return 0;
}


/* fcn.00016188 @ 0x16188 */

void fcn.00016188(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg3_00;
    int64_t arg1_00;
    
    if (((arg1 != 0) && (arg2 != 0)) && (arg3 != 0)) {
        arg3_00 = fcn.00019fb0(arg3);
        if (*arg1 == 0) {
            *arg2 = 0;
        }
        arg1_00 = fcn.00019ec8(*arg2 + arg3_00);
        if (*arg1 != 0) {
            fcn.00029090(arg1_00,*arg1,*arg2);
            (**(*0x2d150 + 0x48))(*arg1);
        }
        fcn.00029090(*arg2 + arg1_00,arg3,arg3_00);
        *arg2 = *arg2 + arg3_00;
        *arg1 = arg1_00;
    }
    return;
}


/* fcn.000165ec @ 0x165ec */

int64_t fcn.000165ec(int64_t arg1,int64_t arg2)

{
    int16_t *piVar1;
    int64_t iVar2;
    
    iVar2 = 0;
    for (piVar1 = *(arg1 + 0x18); *piVar1 != 0; piVar1 = piVar1 + 1) {
        iVar2 = iVar2 + 1;
    }
    *arg2 = *(arg1 + 0x10);
    iVar2 = iVar2 * 2 + 2;
    *(arg2 + 4) = *(arg1 + 0x28);
    fcn.00029090(arg2 + 6,*(arg1 + 0x18),iVar2);
    iVar2 = iVar2 + arg2 + 6;
    fcn.00029090(iVar2,*(arg1 + 0x20),*(arg1 + 0x28));
    return *(arg1 + 0x28) + iVar2;
}


/* fcn.0001a8f4 @ 0x1a8f4 */

void fcn.0001a8f4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t aiStackX_8 [2];
    ulong *apuStackX_18 [2];
    
    aiStackX_8[0] = arg1;
    iVar1 = (**(*0x2d150 + 0x118))(*0x2d148,0x29a90,aiStackX_8,*0x2d148,0,2);
    if (-1 < iVar1) {
        iVar1 = (**(*0x2d150 + 0x140))(0x29a60,0,apuStackX_18);
        if (-1 < iVar1) {
            (**apuStackX_18[0])(apuStackX_18[0],aiStackX_8[0],0,arg2);
        }
    }
    return;
}


/* fcn.00016c80 @ 0x16c80 */

bool fcn.00016c80(uint32_t arg1)

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


/* fcn.0001694c @ 0x1694c */

char * fcn.0001694c(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.00016c80(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.0001976c @ 0x1976c */

int64_t fcn.0001976c(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_20;
    
    iVar1 = (**(*0x2d128 + 0x40))(4,arg1,&iStackX_20);
    if (iVar1 < 0) {
        iStackX_20 = 0;
    }
    if (((iStackX_20 != 0) && (arg1 != 0)) && (iStackX_20 != arg2)) {
        iStackX_20 = section..text(iStackX_20,arg2,arg1);
    }
    return iStackX_20;
}


/* fcn.0001699c @ 0x1699c */

ulong fcn.0001699c(uint32_t arg1)

{
    int64_t arg2;
    int64_t arg1_00;
    ulong uVar1;
    ulong extraout_RAX;
    uint in_register_0000000c;
    
    arg2 = CONCAT44(in_register_0000000c,arg1);
    fcn.0001694c(CONCAT44(in_register_0000000c,arg1));
    uVar1 = 0;
    if (arg1_00 != 0) {
        fcn.0001976c(CONCAT44(in_register_0000000c,arg1),arg1_00,arg2);
        uVar1 = extraout_RAX;
    }
    return uVar1;
}


/* fcn.000196e8 @ 0x196e8 */

ulong fcn.000196e8(int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x2d128 + 0x40))(4,arg1,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.00016e30 @ 0x16e30 */

ulong fcn.00016e30(uint32_t *arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t arg3_00;
    int64_t iVar2;
    ulong uVar3;
    int64_t arg1_00;
    int64_t in_stack_00000028;
    int8_t in_stack_00000030;
    
    arg1_00 = 0;
    iVar2 = fcn.0001895c(0,0,0x2140,arg2,in_stack_00000028,in_stack_00000030);
    iVar1 = *(arg1 + 2);
    if (*(arg1 + 4) < (iVar1 + iVar2) * 2 + 2U) {
        arg3_00 = (iVar1 + 2 + iVar2 * 2) * 2;
        *(arg1 + 4) = arg3_00;
        uVar3 = fcn.000197d0(arg1_00,iVar1 * 2,arg3_00,*arg1);
        *arg1 = uVar3;
    }
    fcn.0001895c(*(arg1 + 2) * 2 + *arg1,*(arg1 + 4) + *(arg1 + 2) * -2 >> 1,0x140,arg2,in_stack_00000028,
                 in_stack_00000030);
    *(arg1 + 2) = *(arg1 + 2) + iVar2;
    return *arg1;
}


/* fcn.000197d0 @ 0x197d0 */

int64_t fcn.000197d0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0001971c(arg1,arg3);
    if ((arg1_00 != 0) && (arg4 != 0)) {
        if (arg2 < arg3) {
            arg3 = arg2;
        }
        if ((arg3 != 0) && (arg1_00 != arg4)) {
            section..text(arg1_00,arg4,arg3);
        }
        (**(*0x2d128 + 0x48))(arg4);
    }
    return arg1_00;
}


/* fcn.000169c4 @ 0x169c4 */

int64_t fcn.000169c4(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t arg3;
    int64_t arg1_00;
    
    if (arg1 == 0) {
        arg1 = 0x2a740;
        if (arg2 != 0) {
            arg1 = arg2;
        }
    }
    else if (arg2 != 0) {
        cVar1 = fcn.00016c80(arg1);
        if ((cVar1 == '\0') || (cVar1 = fcn.00016c80(arg2), cVar1 == '\0')) {
            return 0;
        }
        iVar2 = fcn.0001694c(arg1);
        arg3 = fcn.0001694c(arg2);
        arg1_00 = fcn.000196e8(arg3 + -4 + iVar2);
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
    iVar2 = fcn.0001699c(arg1);
    return iVar2;
}


/* fcn.00017ca8 @ 0x17ca8 */

void fcn.00017ca8(int64_t arg1,int64_t arg2)

{
    fcn.00016e30(arg1,0x2b380,*arg2,*(arg2 + 1));
    return;
}


/* fcn.00019968 @ 0x19968 */

uint64_t fcn.00019968(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    if (((CONCAT44(in_register_0000000c,arg1) != 0) && (arg2 != 0)) &&
       (uVar1 = 0, *CONCAT44(in_register_0000000c,arg1) != '\0')) {
        do {
            if (arg2 - 1U <= uVar1) {
                return arg2;
            }
            uVar1 = uVar1 + 1;
        } while (*(uVar1 + CONCAT44(in_register_0000000c,arg1)) != '\0');
        return uVar1;
    }
    return 0;
}


/* fcn.000196c4 @ 0x196c4 */

void fcn.000196c4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.0001895c(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00018928 @ 0x18928 */

uchar * fcn.00018928(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00019ab4 @ 0x19ab4 */

ulong fcn.00019ab4(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x2d168 == '\0') {
        if (*0x2d190 == 0) {
            if (*0x2d180 != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x2d150 + 0x140))(0x299c8,0,0x2d190);
        }
    }
    else if (*0x2d178 == 0) {
        if ((*0x2d180 == '\0') && (*0x2d198 != 0)) {
    //WARNING: Could not recover jumptable at 0x00019af3. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x2d198 + 0xd0))(0x299f8,0,0x2d178);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.00019bb0 @ 0x19bb0 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

char fcn.00019bb0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    char cVar5;
    uint64_t uVar6;
    int32_t var_48h;
    int64_t iStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    uint64_t uStack_50;
    int64_t aiStack_48 [2];
    int64_t var_30h;
    uint32_t var_28h;
    int64_t var_20h;
    uint32_t var_bp_18h;
    int64_t var_10h;
    
    cVar5 = '\0';
    iVar2 = (**(*0x2d150 + 0x130))(arg1,aiStack_48,&uStack_50);
    if (iVar2 < 0) {
        cVar5 = '\0';
    }
    else {
        if (arg4 != 0) {
            *arg4 = 0;
        }
        uVar4 = 0;
        do {
            if (uStack_50 <= uVar4) break;
            uVar1 = *(aiStack_48[0] + uVar4 * 8);
            iVar2 = fcn.0001a41c(uVar1,0x29a10,0x10);
            if ((iVar2 != 0) && (iVar2 = (**(*0x2d150 + 0x128))(arg1,uVar1,&iStack_58,&uStack_60), -1 < iVar2)) {
                uVar6 = 0;
                if (uStack_60 != 0) {
                    iVar2 = 0;
                    do {
                        if (*(iVar2 + 0x10 + iStack_58) == (-(arg2 != 0) & 0xfffffff8) + 0x10) {
                            if (arg2 != 0) {
                                if (*(iVar2 + 8 + iStack_58) != arg2) goto code_r0x00019d5e;
                                if (arg4 != 0) {
                                    *arg4 = 1;
                                }
                            }
                            iVar3 = (**(*0x2d150 + 0x98))(*(iVar2 + iStack_58),0x29a50,&iStack_68);
                            if (((-1 < iVar3) &&
                                ((iVar3 = (**(iStack_68 + 8))(iStack_68,arg1,arg2,0x2c170,arg3), -1 < iVar3 ||
                                 (iVar3 = (**(iStack_68 + 8))(iStack_68,arg1,arg2,0x2c178,arg3), -1 < iVar3)))) ||
                               ((iVar3 = (**(*0x2d150 + 0x98))(*(iVar2 + iStack_58),0x299e8,&iStack_68), -1 < iVar3
                                && (iVar3 = (**(iStack_68 + 8))(iStack_68,arg1,arg2,0x2c17c,arg3), -1 < iVar3)))) {
                                cVar5 = '\x01';
                                break;
                            }
                        }
code_r0x00019d5e:
                        uVar6 = uVar6 + 1;
                        iVar2 = iVar2 + 0x18;
                    } while (uVar6 < uStack_60);
                }
                if (uStack_60 != 0) {
                    (**(*0x2d150 + 0x48))(iStack_58);
                }
            }
            uVar4 = uVar4 + 1;
        } while (cVar5 == '\0');
        if (uStack_50 != 0) {
            (**(*0x2d150 + 0x48))(aiStack_48[0]);
        }
    }
    return cVar5;
}


/* fcn.0001a494 @ 0x1a494 */

int64_t fcn.0001a494(void)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    if (*0x2d1a0 == 0x2c170) {
        *0x2d1a0 = 0;
    }
    iVar1 = fcn.0001a1ec(0x2c1b0,0x29a70,0,auStackX_10);
    iVar2 = 0x2c170;
    if (-1 < iVar1) {
        iVar2 = *0x2d1a0;
    }
    *0x2d1a0 = iVar2;
    return iVar2;
}


/* fcn.0001a628 @ 0x1a628 */

ulong fcn.0001a628(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iStackX_8;
    
    iStackX_8 = 0;
    if ((arg1 != 0) &&
       (((*0x2d1a8 != 0 || (iVar1 = (**(*0x2d150 + 0x140))(0x29a80,0,0x2d1a8), -1 < iVar1)) &&
        (iVar1 = (**(*0x2d1a8 + 0x18))(*0x2d1a8,arg1,0,&iStackX_8), iVar1 == -0x7ffffffffffffffb)))) {
        uVar2 = fcn.00019ec8(iStackX_8);
        iVar1 = (**(*0x2d1a8 + 0x18))(*0x2d1a8,arg1,uVar2,&iStackX_8);
        if (-1 < iVar1) {
            return uVar2;
        }
        (**(*0x2d150 + 0x48))(uVar2);
    }
    return 0;
}


/* fcn.0001a508 @ 0x1a508 */

int64_t fcn.0001a508(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    bool bVar1;
    char cVar2;
    char *pcVar3;
    int64_t arg1_00;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    int64_t arg3_00;
    char *arg2_00;
    char *pcVar7;
    int64_t *piVar8;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    
    aiStackX_18[0] = arg3;
    aiStackX_18[1] = arg4;
    pcVar6 = NULL;
    if ((arg1 != 0) && (arg2 != 0)) {
        piVar8 = &iStackX_10;
        pcVar5 = arg2;
        do {
            arg2_00 = NULL;
            pcVar3 = arg1;
            do {
                bVar1 = false;
                pcVar4 = pcVar3;
                pcVar7 = pcVar5;
                if (*pcVar5 != '\0') {
                    cVar2 = *pcVar5;
                    do {
                        if (cVar2 == ';') break;
                        if (cVar2 == '-') {
                            bVar1 = true;
                        }
                        if (cVar2 != *pcVar4) break;
                        if (*pcVar4 == '\0') goto code_r0x0001a594;
                        if (*pcVar4 == ';') break;
                        pcVar7 = pcVar7 + 1;
                        pcVar4 = pcVar4 + 1;
                        cVar2 = *pcVar7;
                    } while (cVar2 != '\0');
                }
                for (; (*pcVar4 != '\0' && (*pcVar4 != ';')); pcVar4 = pcVar4 + 1) {
                }
code_r0x0001a594:
                if ((((bVar1) || (*pcVar7 == '\0')) || (*pcVar7 == ';')) && (pcVar7 != pcVar5 && -1 < pcVar7 - pcVar5))
                {
                    pcVar6 = pcVar4;
                    arg2_00 = pcVar3;
                }
                pcVar3 = pcVar4 + 1;
                if (*pcVar4 != ';') {
                    pcVar3 = pcVar4;
                }
            } while (((*pcVar3 != '\0') && (*pcVar7 != '\0')) && (*pcVar7 != ';'));
            if (arg2_00 != NULL) {
                if (pcVar6 == NULL) {
                    return 0;
                }
                arg3_00 = pcVar6 - arg2_00;
                iStackX_10 = arg2;
                arg1_00 = fcn.00019ec8(arg3_00 + 1);
                if (arg1_00 == 0) {
                    return 0;
                }
                fcn.00029090(arg1_00,arg2_00,arg3_00);
                *(arg3_00 + arg1_00) = 0;
                return arg1_00;
            }
            piVar8 = piVar8 + 1;
            pcVar5 = *piVar8;
        } while (pcVar5 != NULL);
    }
    return 0;
}


/* fcn.0001a6e8 @ 0x1a6e8 */

int64_t fcn.0001a6e8(uint32_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    char *pcVar4;
    char *pcVar5;
    
    iVar2 = *0x2d1a8;
    pcVar4 = CONCAT44(in_register_0000000c,arg1);
    cVar1 = *pcVar4;
    iVar3 = -0x7ffffffffffffffe;
    while( true ) {
        if (cVar1 == '\0') {
            return iVar3;
        }
        cVar1 = *pcVar4;
        pcVar5 = pcVar4;
        while ((cVar1 != ';' && (*pcVar5 != '\0'))) {
            pcVar5 = pcVar5 + 1;
            cVar1 = *pcVar5;
        }
        cVar1 = *pcVar5;
        *pcVar5 = '\0';
        iVar3 = (**(iVar2 + 8))(iVar2,pcVar4,arg2,arg3 & 0xffff);
        if (iVar3 != -0x7fffffffffffffe0) break;
        if (cVar1 == '\0') {
            return -0x7fffffffffffffe0;
        }
        pcVar4 = pcVar5 + 1;
        cVar1 = *pcVar4;
        iVar3 = -0x7fffffffffffffe0;
    }
    return iVar3;
}


/* fcn.00016b3c @ 0x16b3c */

int64_t fcn.00016b3c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    int64_t iVar2;
    int64_t *arg1_00;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t *arg1_01;
    code *pcVar5;
    char *pcVar6;
    uchar in_R9B;
    unkbyte7 in_R9;
    int64_t iStack_38;
    uint32_t *puStack_30;
    
    iVar3 = 0;
    uVar1 = arg3;
    if (arg1 != 0) {
        arg1_00 = &iStack_38;
        fcn.00010300(arg1_00,0x18);
        for (; (*arg1 != '\x7f' || (*(arg1 + 1) != -1)); arg1 = arg1 + *(arg1 + 2)) {
            pcVar5 = 0x18824;
            iVar2 = iVar3;
            iVar4 = iVar3;
            do {
                if ((*arg1 == *(iVar2 + 0x2ba40)) && (*(arg1 + 1) == *(iVar2 + 0x2ba41))) {
                    pcVar5 = *(iVar4 * 0x10 + 0x2ba48);
                    break;
                }
                iVar4 = iVar4 + 1;
                iVar2 = iVar4 * 0x10;
            } while (*(iVar2 + 0x2ba48) != 0);
            arg1_01 = puStack_30;
            if (((puStack_30 != NULL) && (pcVar5 != 0x18818)) && (*(iStack_38 + puStack_30 * 2) != 0x2c)) {
                arg1_01 = &iStack_38;
                fcn.00016e30(arg1_01,0x2b9d4,arg3,CONCAT71(in_R9,in_R9B));
            }
            pcVar6 = arg1;
            arg1_00 = fcn.0001976c(arg1_01,*(arg1 + 2),arg1);
            arg3 = CONCAT71(pcVar6 >> 8,arg2);
            in_R9B = uVar1;
            (*pcVar5)(&iStack_38,arg1_00);
            (**(*0x2d128 + 0x48))();
        }
        if (iStack_38 == 0) {
            iVar3 = fcn.0001971c(arg1_00,2);
        }
        else {
            iVar3 = iStack_38;
        }
    }
    return iVar3;
}


/* fcn.00019848 @ 0x19848 */

void fcn.00019848(void)

{
    //WARNING: Could not recover jumptable at 0x0001984f. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x2d128 + 0x48))();
    return;
}


/* fcn.00016aa0 @ 0x16aa0 */

ulong fcn.00016aa0(uint32_t arg1,int64_t arg2)

{
    char cVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t *piVar3;
    char *pcVar4;
    
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = 0;
    if ((piVar3 == NULL) || (*piVar3 == 0)) {
        *arg2 = 0;
    }
    else {
        cVar1 = fcn.00016c80(*piVar3);
        if (cVar1 != '\0') {
            for (pcVar4 = *piVar3; *pcVar4 != '\x7f'; pcVar4 = pcVar4 + *(pcVar4 + 2)) {
            }
            *arg2 = pcVar4 + (4 - *piVar3);
            cVar1 = pcVar4[1];
            pcVar4[1] = -1;
            uVar2 = fcn.0001699c(*piVar3);
            pcVar4[1] = cVar1;
            if (cVar1 == -1) {
                *piVar3 = 0;
            }
            else {
                *piVar3 = pcVar4 + *(pcVar4 + 2);
            }
        }
    }
    return uVar2;
}


/* fcn.000287f4 @ 0x287f4 */

int64_t fcn.000287f4(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    char cVar1;
    char cVar2;
    uint in_register_0000000c;
    uint in_register_00000014;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    
    if ((arg3 == 0) || (CONCAT44(in_register_0000000c,arg1) == CONCAT44(in_register_00000014,arg2))) {
        return 0;
    }
    pcVar3 = CONCAT44(in_register_0000000c,arg1);
    pcVar5 = CONCAT44(in_register_00000014,arg2);
    do {
        pcVar4 = pcVar3;
        pcVar6 = pcVar5;
        if (arg3 == 0) break;
        arg3 = arg3 + -1;
        pcVar6 = pcVar5 + 1;
        pcVar4 = pcVar3 + 1;
        cVar2 = *pcVar5;
        cVar1 = *pcVar3;
        pcVar3 = pcVar4;
        pcVar5 = pcVar6;
    } while (cVar1 == cVar2);
    return pcVar4[-1] - pcVar6[-1];
}


/* fcn.00016cec @ 0x16cec */

bool fcn.00016cec(uint32_t arg1)

{
    uint in_register_0000000c;
    
    return *CONCAT44(in_register_0000000c,arg1) == '\x7f';
}


/* fcn.00016cdc @ 0x16cdc */

uchar fcn.00016cdc(uint32_t arg1)

{
    uint in_register_0000000c;
    
    return *CONCAT44(in_register_0000000c,arg1);
}


/* fcn.00016ce0 @ 0x16ce0 */

uchar fcn.00016ce0(uint32_t arg1)

{
    uint in_register_0000000c;
    
    return *(CONCAT44(in_register_0000000c,arg1) + 1);
}


/* fcn.00016d08 @ 0x16d08 */

void fcn.00016d08(uint32_t arg1)

{
    uint in_register_0000000c;
    
    if (CONCAT44(in_register_0000000c,arg1) != 0x2a740) {
        section..text(CONCAT44(in_register_0000000c,arg1),0x2a740,4);
    }
    return;
}


/* fcn.00016ce4 @ 0x16ce4 */

int64_t fcn.00016ce4(uint32_t arg1)

{
    uint in_register_0000000c;
    
    return *(CONCAT44(in_register_0000000c,arg1) + 2) + CONCAT44(in_register_0000000c,arg1);
}


/* fcn.0001b078 @ 0x1b078 */

ulong fcn.0001b078(uint32_t arg1)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00016cdc(arg1);
    if (cVar1 == '\x03') {
        cVar1 = fcn.00016ce0(arg1);
        if (cVar1 != '\x0f') {
            cVar1 = fcn.00016ce0(arg1);
            if (cVar1 != '\x10') goto code_r0x0001b0bb;
        }
        uVar2 = 1;
    }
    else {
code_r0x0001b0bb:
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001ae4c @ 0x1ae4c */

void fcn.0001ae4c(int64_t arg1,int64_t arg2)

{
    int64_t extraout_RAX;
    unkbyte7 in_R8;
    
    fcn.00016b3c(arg2,CONCAT71(arg2 >> 8,1),CONCAT71(in_R8,1));
    if (extraout_RAX != 0) {
        fcn.00019848(extraout_RAX);
    }
    return;
}


/* fcn.0001aaa8 @ 0x1aaa8 */

int64_t fcn.0001aaa8(char *arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iStackX_18;
    
    iStackX_18 = 0;
    *arg2 = 0;
    if (arg3 != 0) {
        *arg3 = 0;
    }
    iVar1 = (**(*0x2d130 + 0x48))(arg1,0x291a0,0,&iStackX_18,*arg2);
    if (iVar1 == -0x7ffffffffffffffb) {
        iVar1 = fcn.000196e8(iStackX_18);
        *arg2 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x2d130 + 0x48))(arg1,0x291a0,0,&iStackX_18,iVar1);
            if (iVar1 < 0) {
                (**(*0x2d128 + 0x48))(*arg2);
                *arg2 = 0;
            }
            if (arg3 != 0) {
                *arg3 = iStackX_18;
            }
        }
    }
    return iVar1;
}


/* fcn.0001ae94 @ 0x1ae94 */

ulong fcn.0001ae94(uint32_t arg1,uint32_t arg2)

{
    char cVar1;
    int64_t iVar2;
    uint in_register_00000014;
    int64_t iStack_58;
    int64_t iStack_50;
    uint32_t uStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    ulong *puStack_30;
    int64_t iStack_28;
    int64_t iStack_20;
    int64_t iStack_18;
    uchar auStack_10 [16];
    
    if ((CONCAT44(in_register_00000014,arg2) != 0) && (iStack_50 = fcn.0001699c(arg2), iStack_50 != 0)) {
        iStack_18 = (**(*0x2d128 + 0x140))(0x292a0,0,&puStack_30);
        if ((-1 < iStack_18) &&
           ((cVar1 = (*puStack_30[9])(), cVar1 != '\0' && (cVar1 = (**puStack_30)(auStack_10), cVar1 != '\0')))) {
            iStack_28 = fcn.00016aa0(auStack_10,&iStack_20);
            iVar2 = fcn.0001694c(iStack_28);
            iVar2 = fcn.000287f4(iStack_50,iStack_28,iVar2);
            if (iVar2 == 0) {
                return 1;
            }
        }
        iStack_38 = 0;
        uStack_48 = arg1;
        if (arg1 == 0) {
            iStack_38 = 0x29ea8;
        }
        else if (arg1 == 1) {
            iStack_58 = iStack_50;
            while (cVar1 = fcn.00016cec(iStack_58), cVar1 == '\0') {
                cVar1 = fcn.00016cdc(iStack_58);
                if ((cVar1 == '\x02') && (cVar1 = fcn.00016ce0(iStack_58), cVar1 == '\x03')) {
                    fcn.00016d08(iStack_58);
                    break;
                }
                iStack_58 = fcn.00016ce4(iStack_58);
            }
            iStack_38 = 0x29e88;
        }
        iStack_58 = iStack_38;
        do {
            iStack_40 = fcn.00016aa0(&iStack_58,&iStack_20);
            if (iStack_40 == 0) break;
            iVar2 = fcn.000287f4(iStack_50,iStack_40,iStack_20 + -4);
            if (iVar2 == 0) {
                fcn.00019848(iStack_40);
                fcn.00019848(iStack_50);
                return 1;
            }
            fcn.00019848(iStack_40);
        } while (iStack_58 != 0);
        fcn.00019848(iStack_50);
    }
    return 0;
}


/* fcn.0001b0c4 @ 0x1b0c4 */

ulong fcn.0001b0c4(uint32_t arg1)

{
    bool bVar1;
    char cVar2;
    uint in_register_0000000c;
    uchar uStack_44;
    char cStack_43;
    char cStack_42;
    int64_t iStack_40;
    uint64_t uStack_38;
    int64_t iStack_30;
    int64_t iStack_28;
    ulong uStack_20;
    uint64_t auStack_18 [3];
    
    if (CONCAT44(in_register_0000000c,arg1) == 0) {
        uStack_20 = 0x8000000000000002;
    }
    else {
        cVar2 = fcn.0001b078(arg1);
        if (cVar2 == '\0') {
            uStack_20 = 0x8000000000000002;
        }
        else {
            bVar1 = false;
            iStack_40 = (**(*0x2d128 + 0x138))(2,0x29380,0,auStack_18,&iStack_28);
            for (uStack_38 = 0; uStack_38 < auStack_18[0]; uStack_38 = uStack_38 + 1) {
                iStack_40 = (**(*0x2d128 + 0x98))(*(iStack_28 + uStack_38 * 8),0x29380,&iStack_30);
                if ((((-1 < iStack_40) &&
                     (iStack_40 = (**(iStack_30 + 0x30))(iStack_30,0,9,3,&uStack_44), -1 < iStack_40)) &&
                    (cStack_42 == '\f')) &&
                   ((cStack_43 == '\x03' &&
                    (iStack_40 = (**(*0x2d128 + 0x108))
                                           (*(iStack_28 + uStack_38 * 8),0,CONCAT44(in_register_0000000c,arg1),0),
                    -1 < iStack_40)))) {
                    bVar1 = true;
                }
            }
            if (bVar1) {
                uStack_20 = 0;
            }
            else {
                uStack_20 = 0x800000000000000e;
            }
        }
    }
    return uStack_20;
}


/* fcn.00016cf4 @ 0x16cf4 */

ulong fcn.00016cf4(uint32_t arg1)

{
    uint in_register_0000000c;
    
    if ((*CONCAT44(in_register_0000000c,arg1) == '\x7f') && (*(CONCAT44(in_register_0000000c,arg1) + 1) == -1)) {
        return 1;
    }
    return 0;
}


/* fcn.00028808 @ 0x28808 */

int64_t fcn.00028808(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    int64_t iStackX_8;
    char *apcStackX_18 [2];
    
    if (CONCAT44(in_register_0000000c,arg1) == NULL) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar2 = (**(*0x2d128 + 0x18))(0x1f);
        (**(*0x2d128 + 0x20))(iVar2);
        iVar3 = 0;
        while( true ) {
            apcStackX_18[0] = CONCAT44(in_register_0000000c,arg1);
            iVar1 = (**(*0x2d128 + 0xb8))(0x29370,apcStackX_18,&iStackX_8);
            if (iVar1 < 0) break;
            if (iStackX_8 == iVar3) {
                if (iVar2 == 4) {
                    iVar1 = (**(*0x2d1f0 + 0x80))();
                }
                else {
                    iVar1 = -0x7ffffffffffffff2;
                }
            }
            iVar3 = iStackX_8;
            if (iVar1 < 0) break;
            iVar1 = (**(*0x2d128 + 0x108))(iStackX_8,0,apcStackX_18[0],0);
            if (iVar1 == -0x7ffffffffffffff2) {
                iVar1 = 0;
            }
            if (arg2 != 0) {
                *arg2 = iStackX_8;
            }
            if ((iVar1 < 0) || ((*apcStackX_18[0] == '\x7f' && (apcStackX_18[0][1] == -1)))) break;
        }
    }
    return iVar1;
}


/* fcn.0001f34c @ 0x1f34c */

ulong fcn.0001f34c(void)

{
    return 0;
}


/* fcn.00019a0c @ 0x19a0c */

void fcn.00019a0c(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.000199d0();
    //WARNING: Could not recover jumptable at 0x00019a22. Too many branches
    //WARNING: Treating indirect jump as call
    (**(iVar1 + 0x30))(arg1);
    return;
}


/* fcn.0001ab38 @ 0x1ab38 */

ulong fcn.0001ab38(void)

{
    if (*0x2d208 == 0) {
        return 0;
    }
    return CONCAT71(*0x2d208 >> 8,*(*0x2d208 + 7));
}


/* fcn.0001b264 @ 0x1b264 */

uchar fcn.0001b264(void)

{
    bool bVar1;
    bool bVar2;
    char cVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint32_t arg1;
    uint32_t arg2;
    int64_t iStack_70;
    uint64_t uStack_60;
    uchar uStack_58;
    int64_t iStack_50;
    uint64_t uStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    ulong uStack_30;
    char16_t *apcStack_28 [2];
    uchar auStack_18 [24];
    
    apcStack_28[0] = L"ConIn";
    apcStack_28[1] = L"ConOut";
    bVar2 = false;
    bVar1 = false;
    fcn.0001ae4c(0x2c228,0x29ea8);
    fcn.0001ae4c(0x2c250,0x29e88);
    uStack_60 = 0;
    do {
        if (1 < uStack_60) {
            if ((bVar1) && (bVar2)) {
                uStack_58 = 1;
            }
            else {
                uStack_58 = 0;
            }
            return uStack_58;
        }
        fcn.0001aaa8(apcStack_28[uStack_60],&iStack_50,0);
        iStack_40 = iStack_50;
        do {
            iVar5 = fcn.00016aa0(&iStack_40,auStack_18);
            if (iVar5 == 0) break;
            arg2 = iVar5;
            cVar3 = fcn.0001ae94(uStack_60,arg2);
            if (cVar3 != '\0') {
                uStack_48 = uStack_60;
                if (uStack_60 == 0) {
                    bVar1 = true;
                }
                else if (uStack_60 == 1) {
                    bVar2 = true;
                }
                cVar3 = fcn.0001b078(arg2);
                if (cVar3 == '\0') {
                    iStack_70 = iVar5;
                    while( true ) {
                        arg1 = iStack_70;
                        cVar3 = fcn.00016cf4(arg1);
                        if ((cVar3 != '\0') ||
                           ((cVar3 = fcn.00016cdc(arg1), cVar3 == '\x02' &&
                            (cVar3 = fcn.00016ce0(arg1), cVar3 == '\x03')))) break;
                        cVar3 = fcn.00016cdc(arg1);
                        if ((cVar3 == '\x01') && (cVar3 = fcn.00016ce0(arg1), cVar3 == '\x05')) {
                            uVar4 = fcn.00016ce4(arg1);
                            cVar3 = fcn.00016cdc(uVar4);
                            if (cVar3 == '\x02') {
                                uVar4 = fcn.00016ce4(arg1);
                                cVar3 = fcn.00016ce0(uVar4);
                                if (cVar3 == '\x03') break;
                            }
                        }
                        iStack_70 = fcn.00016ce4(arg1);
                    }
                    cVar3 = fcn.00016cf4(arg1);
                    if (cVar3 == '\0') {
                        fcn.00016d08(arg1);
                        iStack_38 = fcn.00028808(arg2,&uStack_30);
                        if (-1 < iStack_38) {
                            (**(*0x2d128 + 0x108))(uStack_30,0,0,1);
                        }
                    }
                    else {
                        fcn.00028808(arg2,0);
                    }
                }
                else {
                    fcn.0001b0c4(arg2);
                }
            }
            fcn.00019848(iVar5);
        } while (iStack_40 != 0);
        if (iStack_50 != 0) {
            fcn.00019848(iStack_50);
        }
        uStack_60 = uStack_60 + 1;
    } while( true );
}


/* fcn.00019a28 @ 0x19a28 */

void fcn.00019a28(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = fcn.000199d0();
    //WARNING: Could not recover jumptable at 0x00019a4b. Too many branches
    //WARNING: Treating indirect jump as call
    (**(iVar1 + 0xa0))(arg1,arg2);
    return;
}


/* fcn.000286a4 @ 0x286a4 */

bool fcn.000286a4(void)

{
    int64_t iVar1;
    ulong auStackX_8 [4];
    
    auStackX_8[0] = 0;
    iVar1 = fcn.0001a9d4(0x2d018,0x295b0,auStackX_8,0);
    if (iVar1 == 0) {
        (**(*0x2d128 + 0x48))(auStackX_8[0]);
    }
    return iVar1 == 0;
}


/* fcn.000286e8 @ 0x286e8 */

void fcn.000286e8(void)

{
    uchar auStackX_8 [32];
    
    (**(*0x2d130 + 0x58))(L"BootState",0x295b0,3,1,auStackX_8);
    return;
}


/* fcn.0001b500 @ 0x1b500 */

void fcn.0001b500(int64_t arg1)

{
    uint8_t uVar1;
    char cVar2;
    uchar uVar3;
    char cVar4;
    uint64_t uVar5;
    uint8_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iStack_868;
    int64_t iStack_860;
    ulong uStack_858;
    int64_t iStack_850;
    ulong uStack_848;
    ulong uStack_840;
    ulong uStack_838;
    ulong uStack_830;
    uchar auStack_828 [16];
    uchar auStack_818 [32];
    uchar uStack_7f8;
    
    cVar4 = arg1;
    iStack_868 = 0;
    uStack_838 = 0x8000000000000003;
    iVar9 = 0;
    iVar8 = 0;
    uVar1 = 0;
    uVar6 = 0;
    iStack_860 = -0x7ffffffffffffffd;
    iVar7 = 0;
    if (cVar4 == '\0') {
        uStack_840 = 0x80d;
        iVar7 = (**(*0x2d130 + 0x48))(L"PchSetup",0x29600,0,&uStack_840,auStack_818);
        fcn.0001f34c(0xf3);
        fcn.0001f34c(uStack_7f8);
    }
    if (cVar4 == '\x02') {
        iVar8 = fcn.0001aaec(0x29690);
        if (iVar8 != 0) {
            uVar1 = *(iVar8 + 0x19);
        }
        cVar2 = fcn.00019a0c(0x179);
        if (((cVar2 == '\0') && (*0x29ed0 != '\0')) && (uVar1 != 0)) {
            iVar9 = fcn.0001aaec(0x29200);
            if ((iVar9 != 0) && ((*(iVar9 + 0x98) & 1) != 0)) {
                iVar7 = (**(*0x2d128 + 0x140))(0x291c0,0,&iStack_868);
                if (-1 < iVar7) {
                    uStack_838 = (**(iStack_868 + 0x18))(iStack_868);
                }
            }
        }
    }
    if (cVar4 == '\x04') {
        iVar7 = (**(*0x2d128 + 0x140))(0x293f0,0,&iStack_850);
        if (-1 < iVar7) {
            uVar3 = fcn.0001ab38();
            uVar6 = uVar6 | uVar1;
            cVar2 = (**(iStack_850 + 8))(uVar3);
            if (cVar2 != '\0') {
                fcn.0001b264();
            }
            uVar5 = *0x29e80;
            iStack_860 = (**(iStack_850 + 0x10))(*0x29ea0,uVar5,uVar3,uVar6);
            if ((iStack_860 == 0) || (iStack_860 == -0x7fffffffffffffec)) {
                fcn.00019a28(0x232,CONCAT71(uVar5 >> 8,1));
            }
        }
    }
    if (cVar4 == '\x02') {
        uStack_858 = 0;
        iVar7 = (**(*0x2d128 + 0x140))(0x292f0,0,auStack_828);
        if (iVar7 < 0) {
            iVar7 = (**(*0x2d128 + 0x170))(0x200,8,0x1ae88,0,0x293d0,&uStack_858);
            (**(*0x2d128 + 0x68))(uStack_858);
            (**(*0x2d128 + 0x70))(uStack_858);
        }
        else {
            fcn.0001f34c();
        }
    }
    if (cVar4 == '\x02') {
        iVar8 = (**(*0x2d128 + 0x170))(0x200,8,0x1ae88,0,0x29150,&uStack_848,uVar6,iVar7,iVar8,iVar9);
        if (-1 < iVar8) {
            (**(*0x2d128 + 0x68))(uStack_848);
            (**(*0x2d128 + 0x70))(uStack_848);
        }
    }
    if (cVar4 == '\x06') {
        uStack_830 = 0;
        (**(*0x2d128 + 0x80))(&uStack_830,0x29400,0,0);
    }
    return;
}


/* fcn.00010350 @ 0x10350 */

int64_t fcn.00010350(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.0001c25c @ 0x1c25c */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.0001c25c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint8_t *puVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iStackX_18;
    uint64_t uStackX_20;
    int64_t var_30h;
    uint32_t var_38h;
    int64_t iStack_38;
    uint64_t uStack_30;
    int64_t var_bp_20h;
    uint32_t var_18h;
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    iVar1 = (**(*0x2d128 + 0x138))(0,0,0,&uStackX_20,&iStackX_18);
    if (-1 < iVar1) {
        uVar5 = 0;
        if (uStackX_20 != 0) {
            do {
                iStack_38 = 0;
                iVar1 = (**(*0x2d128 + 0x130))(*(iStackX_18 + uVar5 * 8),&iStack_38,&uStack_30);
                if (-1 < iVar1) {
                    uVar6 = 0;
                    if (uStack_30 != 0) {
                        do {
                            iVar2 = (**(*0x2d128 + 0x128))
                                              (*(iStackX_18 + uVar5 * 8),*(iStack_38 + uVar6 * 8),&var_bp_20h);
                            iVar1 = *0x2d128;
                            if (-1 < iVar2) {
                                uVar7 = 0;
                                if (_var_18h != 0) {
                                    puVar4 = var_bp_20h + 0x10;
                                    do {
                                        if (((*(puVar4 + -8) == arg1) && ((*puVar4 & 0x10) != 0)) &&
                                           (uVar3 = 0, uStackX_20 != 0)) {
                                            do {
                                                if (*(iStackX_18 + uVar3 * 8) == *(puVar4 + -0x10)) {
                                                    *arg2 = *(iStackX_18 + uVar3 * 8);
                                                    (**(iVar1 + 0x48))(var_bp_20h);
                                                    (**(*0x2d128 + 0x48))(iStack_38);
                                                    (**(*0x2d128 + 0x48))(iStackX_18);
                                                    return 0;
                                                }
                                                uVar3 = uVar3 + 1;
                                            } while (uVar3 < uStackX_20);
                                        }
                                        uVar7 = uVar7 + 1;
                                        puVar4 = puVar4 + 0x18;
                                    } while (uVar7 < _var_18h);
                                }
                                if (var_bp_20h != 0) {
                                    (**(*0x2d128 + 0x48))(var_bp_20h);
                                }
                            }
                            uVar6 = uVar6 + 1;
                        } while (uVar6 < uStack_30);
                    }
                    if (iStack_38 != 0) {
                        (**(*0x2d128 + 0x48))();
                    }
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < uStackX_20);
        }
        if (iStackX_18 != 0) {
            (**(*0x2d128 + 0x48))();
        }
    }
    return 0x800000000000000e;
}


/* fcn.0001d004 @ 0x1d004 */

ulong fcn.0001d004(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int16_t iVar2;
    char cVar3;
    uint32_t arg1_00;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int16_t *piVar7;
    int16_t *piVar8;
    ulong uVar9;
    ulong *puVar10;
    int64_t iVar11;
    code *pcVar12;
    int64_t iStackX_8;
    
    iVar11 = 0;
    if (((arg1 != 0) && (arg2 != 0)) && (iVar4 = fcn.00016d28(arg1,*arg2), iVar4 != 0)) {
        uVar9 = 0x29660;
        iVar5 = (**(*0x2d150 + 0x98))(arg1,0x29660,&iStackX_8);
        if ((iVar5 < 0) || (*(*(iStackX_8 + 8) + 4) == '\0')) {
            arg1_00 = fcn.0001cb68(iVar4,uVar9,1);
            iVar5 = fcn.0001699c(arg1_00);
            (**(*0x2d150 + 0x48))(iVar4);
            if (iVar5 == 0) {
                return 0;
            }
            pcVar12 = fcn.0001ce14;
        }
        else {
            pcVar12 = 0x1cfa8;
            iVar5 = iVar4;
        }
        uVar9 = fcn.0001694c(iVar5);
        (**0x29b50)(arg1,arg2,iVar5);
        puVar10 = *0x2fa28;
        do {
            if (puVar10 == NULL) {
                iVar6 = fcn.00013e38(0x2fa20);
                *(iVar6 + 0x68) = 1;
                iVar4 = iVar11;
                for (piVar8 = *(arg2 + 8); *piVar8 != 0; piVar8 = piVar8 + 1) {
                    iVar4 = iVar4 + 1;
                }
                (**(*0x2d150 + 0x40))(4,iVar4 * 2 + 2,iVar6 + 0x18);
                piVar8 = *(arg2 + 8);
                iVar2 = *piVar8;
                piVar7 = piVar8;
                while (iVar2 != 0) {
                    piVar7 = piVar7 + 1;
                    iVar11 = iVar11 + 1;
                    iVar2 = *piVar7;
                }
                fcn.00029090(*(iVar6 + 0x18),piVar8,iVar11 * 2 + 2);
                *(iVar6 + 0x20) = iVar5;
                *(iVar6 + 0x28) = uVar9;
                (**0x29b58)(arg1,iVar6);
                return 1;
            }
            puVar1 = puVar10 + 4;
            puVar10 = *puVar10;
            cVar3 = (*pcVar12)(*puVar1,iVar5);
        } while (cVar3 == '\0');
        (**(*0x2d150 + 0x48))(iVar5);
        return 1;
    }
    return 0;
}


/* fcn.00019ef4 @ 0x19ef4 */

int64_t fcn.00019ef4(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.00019ec8(arg1);
    if (iVar1 != 0) {
        (**(*0x2d150 + 0x168))(iVar1,arg1,0);
    }
    return iVar1;
}


/* fcn.0001cbf8 @ 0x1cbf8 */

ushort fcn.0001cbf8(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    char *pcVar3;
    char *pcVar4;
    uint32_t auStackX_10 [2];
    uint32_t auStackX_18 [2];
    char *pcStackX_20;
    int64_t aiStack_28 [2];
    
    iVar2 = (**(*0x2d150 + 0x98))(arg1,0x29370,&pcStackX_20);
    if (-1 < iVar2) {
        pcVar3 = NULL;
        pcVar4 = NULL;
        for (; cVar1 = *pcStackX_20, cVar1 != '\x7f';
            pcStackX_20 = pcStackX_20 + pcStackX_20[3] * 0x100 + pcStackX_20[2]) {
            if (cVar1 == '\x01') {
                if (pcStackX_20[1] == '\x01') {
                    pcVar4 = pcStackX_20;
                }
            }
            else if (cVar1 == '\x03') {
                pcVar3 = pcStackX_20;
            }
        }
        iVar2 = (**(*0x2d150 + 0x98))(arg1,0x291d0,aiStack_28);
        if ((-1 < iVar2) && (iVar2 = (**(aiStack_28[0] + 0x28))(aiStack_28[0],auStackX_10,auStackX_18), -1 < iVar2))
        {
            if ((pcVar3 != NULL) && (pcVar3[1] == '\x01')) {
                if ((pcVar4 != NULL) && (pcVar4[4] == '\x05')) {
                    auStackX_18[0] = auStackX_18[0] + 2;
                }
                return *((auStackX_10[0] + auStackX_18[0] * 2) * 2 + 0x2ce28);
            }
            return auStackX_10[0];
        }
    }
    return 0xff;
}


/* fcn.0001cb68 @ 0x1cb68 */

char * fcn.0001cb68(int64_t arg1,ulong noname_1,uint32_t arg2)

{
    char cVar1;
    
    if (arg1 != 0) {
        cVar1 = *arg1;
        while (cVar1 != '\x7f') {
            if ((cVar1 == '\x04') && (*(arg1 + 1) == arg2)) {
                return arg1;
            }
            arg1 = arg1 + *(arg1 + 3) * 0x100 + *(arg1 + 2);
            cVar1 = *arg1;
        }
    }
    return NULL;
}


/* fcn.0001a350 @ 0x1a350 */

ulong fcn.0001a350(uint32_t arg1)

{
    int16_t iVar1;
    uint in_register_0000000c;
    int16_t *piVar2;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = *CONCAT44(in_register_0000000c,arg1);
    while (iVar1 != 0) {
        if (*piVar2 - 0x61U < 0x1a) {
            *piVar2 = *piVar2 + -0x20;
        }
        piVar2 = piVar2 + 1;
        iVar1 = *piVar2;
    }
    return CONCAT44(in_register_0000000c,arg1);
}


/* fcn.00016d28 @ 0x16d28 */

int64_t fcn.00016d28(int64_t arg1,uint32_t arg2)

{
    int16_t iVar1;
    int16_t *piVar2;
    ushort *arg2_00;
    int64_t iVar3;
    int64_t iVar4;
    uint in_register_00000014;
    int16_t *arg2_01;
    uint16_t uVar5;
    int64_t iVar6;
    int64_t iStackX_10;
    
    arg2_01 = CONCAT44(in_register_00000014,arg2);
    iVar4 = 0;
    iVar1 = *arg2_01;
    piVar2 = arg2_01;
    iVar6 = iVar4;
    while (iVar1 != 0) {
        piVar2 = piVar2 + 1;
        iVar6 = iVar6 + 1;
        iVar1 = *piVar2;
    }
    iVar3 = iVar6 * 2 + 2;
    arg2_00 = fcn.000196e8(iVar6 * 2 + 10);
    if (arg2_00 != NULL) {
        *arg2_00 = 0x404;
        if ((iVar3 != 0) && (arg2_00 + 2 != arg2_01)) {
            section..text(arg2_00 + 2,arg2_01,iVar3);
        }
        uVar5 = iVar3 + 4;
        arg2_00[1] = uVar5;
        iVar6 = uVar5 + arg2_00;
        if (iVar6 != 0x2a740) {
            section..text(iVar6,0x2a740,4);
        }
        iVar6 = iVar4;
        if (arg1 != 0) {
            iVar3 = (**(*0x2d128 + 0x98))(arg1,0x29370,&iStackX_10);
            iVar6 = iStackX_10;
            if (iVar3 < 0) {
                iVar6 = iVar4;
            }
            iStackX_10 = iVar6;
        }
        iVar4 = fcn.000169c4(iVar6,arg2_00);
        (**(*0x2d128 + 0x48))(arg2_00);
    }
    return iVar4;
}


/* fcn.0001d268 @ 0x1d268 */

int64_t fcn.0001d268(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iStackX_8;
    ulong uStackX_10;
    
    iVar4 = 0;
    iVar3 = 0;
    if (((arg1 != 0) && (iVar1 = (**(*0x2d150 + 0x98))(arg1,0x294f0,&iStackX_8), -1 < iVar1)) &&
       (iVar1 = (**(iStackX_8 + 8))(iStackX_8,&uStackX_10), -1 < iVar1)) {
        pcVar2 = 0x1d1a8;
        while (pcVar2 != NULL) {
            iVar1 = (*pcVar2)(arg1,uStackX_10);
            iVar3 = iVar3 + iVar1;
            iVar4 = iVar4 + 1;
            pcVar2 = *(iVar4 * 8 + 0x2c560);
        }
        return iVar3;
    }
    return 0;
}


/* fcn.0001cce4 @ 0x1cce4 */

//WARNING: Variable defined which should be unmapped: var_10h

uint64_t fcn.0001cce4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong noname_1;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iStackX_10;
    uint64_t uStackX_18;
    int64_t var_28h;
    uint32_t var_30h;
    int64_t var_38h;
    int64_t aiStack_28 [2];
    int64_t var_10h;
    
    uVar3 = 0;
    iVar1 = fcn.0001cb68(arg1,arg2,1);
    if ((iVar1 == 0) || (iVar2 = (**(*0x2d150 + 0x138))(2,0x29660,0,&uStackX_18,&iStackX_10), iVar2 < 0)) {
        return 0;
    }
    uVar4 = uVar3;
    if (uStackX_18 != 0) {
        do {
            iVar2 = (**(*0x2d150 + 0x98))(*(iStackX_10 + uVar4 * 8),0x29660,&var_28h);
            if ((-1 < iVar2) && (*(*(var_28h + 8) + 6) != '\0')) {
                noname_1 = 0x29370;
                iVar2 = (**(*0x2d150 + 0x98))(*(iStackX_10 + uVar4 * 8),0x29370,aiStack_28);
                if (((-1 < iVar2) &&
                    (((iVar2 = fcn.0001cb68(aiStack_28[0],noname_1,1), iVar2 != 0 && (*(iVar2 + 4) == *(iVar1 + 4)))
                     && (*(iVar2 + 0x29) == *(iVar1 + 0x29))))) &&
                   (iVar2 = fcn.0001a41c(iVar2 + 0x18,iVar1 + 0x18,0x10), iVar2 == 0)) {
                    uVar3 = *(iStackX_10 + uVar4 * 8);
                    break;
                }
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < uStackX_18);
    }
    (**(*0x2d150 + 0x48))(iStackX_10);
    return uVar3;
}


/* fcn.0001ce14 @ 0x1ce14 */

ulong fcn.0001ce14(int64_t arg1,int64_t arg2)

{
    char *arg1_00;
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    char *arg1_01;
    int64_t iStackX_8;
    ulong auStackX_18 [2];
    
    uVar1 = 1;
    iVar3 = arg2;
    iVar2 = fcn.0001cb68(arg1,arg2,1);
    if (((iVar2 != 0) && (iVar3 = fcn.0001cb68(iVar3,arg2,uVar1), iVar3 != 0)) &&
       (iVar4 = fcn.0001a41c(iVar2 + 4,iVar3 + 4,0x26), iVar4 == 0)) {
        auStackX_18[0] = 0;
        iStackX_8 = 0;
        arg1_01 = iVar2 + *(iVar2 + 2) + *(iVar2 + 3) * 0x100;
        arg1_00 = *(iVar3 + 2) + iVar3 + *(iVar3 + 3) * 0x100;
        if (((*arg1_01 == '\x04') && (arg1_01[1] == '\x04')) && ((*arg1_00 == '\x04' && (arg1_00[1] == '\x04')))) {
            uVar5 = fcn.00019fb0(arg1_01);
            (**(*0x2d150 + 0x40))(4,uVar5,auStackX_18);
            uVar5 = fcn.00019fb0(arg1_00);
            (**(*0x2d150 + 0x40))(4,uVar5,&iStackX_8);
            uVar5 = fcn.00019fb0(arg1_01);
            (**(*0x2d150 + 0x160))(auStackX_18[0],arg1_01,uVar5);
            uVar5 = fcn.00019fb0(arg1_00);
            (**(*0x2d150 + 0x160))(iStackX_8,arg1_00,uVar5);
            fcn.0001a350(auStackX_18[0] + 2);
            fcn.0001a350(iStackX_8 + 2);
            uVar1 = fcn.00019fb0(iStackX_8);
            iVar3 = fcn.0001a41c(auStackX_18[0],iStackX_8,uVar1);
            if (iVar3 == 0) {
                (**(*0x2d150 + 0x48))(auStackX_18[0]);
                (**(*0x2d150 + 0x48))(iStackX_8);
                return 1;
            }
        }
    }
    return 0;
}


/* fcn.0001d394 @ 0x1d394 */

//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Variable defined which should be unmapped: var_38h

uint16_t fcn.0001d394(int64_t arg1)

{
    int *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    int16_t *piVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint16_t uVar7;
    char *pcVar8;
    uint64_t uVar9;
    char *pcVar10;
    uint64_t uVar11;
    uint16_t uVar12;
    uint16_t *puStackX_18;
    int64_t iStackX_20;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    uint16_t auStack_70 [4];
    uint64_t uStack_68;
    uchar auStack_60 [32];
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    
    puStackX_18 = NULL;
    iVar2 = fcn.0001a1ec(0x2a0f0,0x297f8,0,auStack_70);
    if (-1 < iVar2) {
        uVar12 = 0;
        uVar9 = auStack_70[0] >> 1;
        iVar2 = fcn.00019ef4(uVar9 * 0x30);
        if (iVar2 != 0) {
            if (auStack_70[0] >> 1 != 0) {
                do {
                    iVar6 = 0;
                    fcn.000188f8(auStack_60,0x12,0x2a108,*puStackX_18);
                    iVar3 = fcn.0001a1ec(auStack_60,0x297f8,0,&iStackX_20);
                    if (-1 < iVar3) {
                        for (piVar4 = 0x6; *piVar4 != 0; piVar4 = piVar4 + 1) {
                            iVar6 = iVar6 + 1;
                        }
                        uStack_68 = *0x4;
                        pcVar10 = (iVar6 + 4) * 2;
                        piVar1 = pcVar10 + uStack_68;
                        uVar11 = iStackX_20 - piVar1;
                        if ((*pcVar10 == '\x01') && (pcVar10[1] == '\x04')) {
                            iVar3 = fcn.0001a41c(0x29888,pcVar10 + 4,0x10);
                            if (iVar3 == 0) {
                                uVar5 = uStack_68;
                                pcVar8 = pcVar10;
                                do {
                                    if ((*pcVar8 == '\x04') && (pcVar8[1] == '\x01')) {
                                        pcVar10 = pcVar8;
                                        break;
                                    }
                                    uVar7 = uVar5 - *(pcVar8 + 2);
                                    uVar5 = uVar7;
                                    pcVar8 = pcVar8 + pcVar8[3] * 0x100 + pcVar8[2];
                                } while (uVar7 != 0);
                            }
                        }
                        uVar5 = uVar12;
                        uVar12 = uVar12 + 1;
                        iVar3 = uVar5 * 0x30 + iVar2;
                        *(iVar3 + 0x10) = iStackX_20;
                        *(iVar3 + 8) = 0;
                        *(iVar3 + 0x20) = pcVar10;
                        *(iVar3 + 0x28) = *puStackX_18;
                        *(iVar3 + 0x18) = 6;
                        if ((3 < uVar11) && ((*piVar1 == 0x4f420000 || (*piVar1 == 0x4f470000)))) {
                            *(iVar3 + 0x2a) = 1;
                        }
                        if ((uVar11 == 0x1c) && (iVar6 = fcn.0001a41c(piVar1,0x2c4b8,0x1c), iVar6 == 0)) {
                            *(iVar3 + 0x2c) = 1;
                        }
                    }
                    puStackX_18 = puStackX_18 + 1;
                    uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
            }
            (**(*0x2d150 + 0x48))(0);
            if (uVar12 != 0) {
                *arg1 = iVar2;
                return uVar12;
            }
        }
    }
    return 0;
}


/* fcn.0001da94 @ 0x1da94 */

uint64_t fcn.0001da94(int64_t arg1,uint32_t arg2)

{
    int16_t iVar1;
    int16_t *piVar2;
    bool bVar3;
    bool bVar4;
    int16_t *in_RAX;
    int16_t *piVar5;
    int64_t iVar6;
    uint in_register_00000014;
    int iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint8_t *puVar10;
    
    iVar9 = 0;
    iVar7 = 0;
    if ((arg1 != 0) && (CONCAT44(in_register_00000014,arg2) != 0)) {
        iVar8 = iVar9;
        for (piVar5 = *(arg1 + 0x18); *piVar5 != 0; piVar5 = piVar5 + 1) {
            iVar8 = iVar8 + 1;
        }
        piVar5 = *(CONCAT44(in_register_00000014,arg2) + 8);
        iVar1 = *piVar5;
        in_RAX = piVar5;
        iVar6 = iVar9;
        while (iVar1 != 0) {
            in_RAX = in_RAX + 1;
            iVar6 = iVar6 + 1;
            iVar1 = *in_RAX;
        }
        if (iVar8 == iVar6) {
            iVar1 = *piVar5;
            piVar2 = piVar5;
            while (iVar1 != 0) {
                piVar2 = piVar2 + 1;
                iVar9 = iVar9 + 1;
                iVar7 = iVar9;
                iVar1 = *piVar2;
            }
            in_RAX = fcn.0001a41c(*(arg1 + 0x18),piVar5,iVar7 * 2 + 2);
            if (in_RAX == NULL) {
                puVar10 = *(arg1 + 0x20);
                bVar4 = false;
                bVar3 = false;
                in_RAX = *puVar10;
                if (*puVar10 != 0x7f) {
                    do {
                        if (in_RAX == '\x04') {
                            if (puVar10[1] == 1) {
                                bVar4 = true;
                            }
                            if (puVar10[1] == 4) {
                                bVar3 = true;
                            }
                        }
                        puVar10 = puVar10 + puVar10[3] * 0x100 + puVar10[2];
                        in_RAX = *puVar10;
                    } while (*puVar10 != 0x7f);
                    in_RAX = NULL;
                    if ((bVar4) && (bVar3)) {
                        return 1;
                    }
                }
            }
        }
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.0001dc18 @ 0x1dc18 */

ulong fcn.0001dc18(uint32_t arg1)

{
    char cVar1;
    int64_t *piVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    int64_t iVar4;
    bool bVar5;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (iVar3 != 0) {
        if (*(iVar3 + 0x20) == NULL) {
            bVar5 = *(iVar3 + 0x60) != 0;
        }
        else {
            bVar5 = **(iVar3 + 0x20) == '\x05';
        }
        if (!bVar5) {
            iVar4 = 0;
            piVar2 = 0x2c540;
            do {
                cVar1 = (**piVar2)(iVar3);
                if (cVar1 != '\0') {
                    return 1;
                }
                iVar4 = iVar4 + 1;
                piVar2 = iVar4 * 8 + 0x2c540;
            } while (*piVar2 != 0);
        }
    }
    return 0;
}


/* fcn.0001cba6 @ 0x1cba6 */

uint32_t fcn.0001cba6(uint32_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uint in_register_0000000c;
    uint16_t *puVar2;
    uint in_register_00000014;
    uint16_t *puVar3;
    uint16_t uVar4;
    
    puVar3 = CONCAT44(in_register_00000014,arg2);
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    do {
        uVar4 = *puVar2;
        if (uVar4 == 0) {
            return CONCAT11(*puVar3 >> 8,*puVar2 == *puVar3);
        }
        if (uVar4 != *puVar3) {
            uVar1 = uVar4 - 0x41;
            if (uVar1 < 0x1a) {
                uVar4 = uVar4 + 0x20;
            }
            else {
                uVar1 = uVar4 - 0x61;
                if (0x19 < uVar1) goto code_r0x0001cbea;
                uVar1 = 0xffe0;
                uVar4 = uVar4 - 0x20;
            }
            if (uVar4 != *puVar3) {
code_r0x0001cbea:
                return uVar1 & 0xffffff00;
            }
        }
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
    } while( true );
}


/* fcn.0001cba4 @ 0x1cba4 */

uint32_t fcn.0001cba4(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint16_t uVar2;
    
    do {
        uVar2 = *arg1;
        if (uVar2 == 0) {
            return CONCAT11(*arg2 >> 8,*arg1 == *arg2);
        }
        if (uVar2 != *arg2) {
            uVar1 = uVar2 - 0x41;
            if (uVar1 < 0x1a) {
                uVar2 = uVar2 + 0x20;
            }
            else {
                uVar1 = uVar2 - 0x61;
                if (0x19 < uVar1) goto code_r0x0001cbea;
                uVar1 = 0xffe0;
                uVar2 = uVar2 - 0x20;
            }
            if (uVar2 != *arg2) {
code_r0x0001cbea:
                return uVar1 & 0xffffff00;
            }
        }
        arg1 = arg1 + 2;
        arg2 = arg2 + 2;
    } while( true );
}


/* fcn.0001e674 @ 0x1e674 */

//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.0001e674(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t uVar2;
    char acStackX_8 [8];
    uint32_t var_bp_20h;
    int64_t iStack_48;
    int64_t iStack_40;
    int64_t var_30h;
    uint32_t var_28h;
    uchar auStack_28 [8];
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    
    uVar2 = 0;
    if (arg1 != 0) {
        do {
            iVar1 = (**(*0x2d128 + 0x98))(*(arg2 + uVar2 * 8),0x29380,&iStack_48);
            if (((((-1 < iVar1) && (iVar1 = (**(iStack_48 + 0x30))(iStack_48,0,0xb,1,acStackX_8), -1 < iVar1)) &&
                 (acStackX_8[0] == '\x03')) &&
                (iVar1 = (**(*0x2d128 + 0x98))(*(arg2 + uVar2 * 8),0x29370,auStack_28), -1 < iVar1)) &&
               ((((iVar1 = (**(iStack_48 + 0x78))(iStack_48,0,0,&var_28h), iVar1 < 0 || ((_var_28h & 0x2000) == 0))
                 || (arg4 == '\0')) && (iVar1 = (**(iStack_48 + 0x78))(iStack_48,4,0,&var_30h), -1 < iVar1)))) {
                iVar1 = (**(iStack_48 + 0x78))(iStack_48,2,var_30h & 0x718);
                if ((-1 < iVar1) &&
                   (iVar1 = (**(arg3 + 0x10))(arg3,*(arg2 + uVar2 * 8),0,0,&iStack_40), -1 < iVar1)) {
                    if (iStack_40 == 2) {
                        iVar1 = (**(arg3 + 0x18))(arg3,*(arg2 + uVar2 * 8),0,&iStack_40,0,0,0,0);
                    }
                    if (-1 < iVar1) {
                        return 1;
                    }
                }
                (**(iStack_48 + 0x78))(iStack_48,3,var_30h & 0x718);
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < arg1);
    }
    return 0;
}


/* fcn.00011d00 @ 0x11d00 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h

void fcn.00011d00(void)

{
    int64_t iVar1;
    int64_t arg1;
    int64_t arg1_00;
    uint64_t uVar2;
    char acStackX_8 [8];
    int64_t iStackX_10;
    int64_t iStackX_18;
    uint32_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    uint64_t uStack_38;
    uint64_t auStack_30 [2];
    uint32_t var_18h;
    int64_t var_10h;
    
    arg1 = 0;
    arg1_00 = 0;
    iVar1 = (**(*0x2d150 + 0x138))(2,0x29380,0,&uStack_38,&iStackX_10);
    if (-1 < iVar1) {
        uVar2 = 0;
        if (uStack_38 != 0) {
            do {
                iVar1 = (**(*0x2d150 + 0x98))(*(iStackX_10 + uVar2 * 8),0x29380,&iStackX_18);
                if (-1 < iVar1) {
                    iVar1 = (**(iStackX_18 + 0x30))(iStackX_18,0,0xb,1,acStackX_8);
                    if ((-1 < iVar1) && (acStackX_8[0] == '\x03')) {
                        iVar1 = (**(*0x2d150 + 0x98))(*(iStackX_10 + uVar2 * 8),0x29370,&var_28h);
                        if (-1 < iVar1) {
                            iVar1 = (**(iStackX_18 + 0x78))(iStackX_18,0,0,auStack_30);
                            if ((iVar1 < 0) || ((auStack_30[0] & 0x2000) == 0)) {
                                arg1_00 = fcn.00010b6c(arg1_00,_var_28h);
                            }
                            else {
                                arg1 = fcn.00010b6c(arg1,_var_28h);
                            }
                        }
                    }
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < uStack_38);
        }
        (**(*0x2d150 + 0x48))(iStackX_10);
        iVar1 = fcn.00010b6c(arg1_00,arg1);
        if (iVar1 != 0) {
            fcn.00010a58(iVar1);
            (**(*0x2d150 + 0x48))(iVar1);
        }
    }
    return;
}


/* fcn.00022b04 @ 0x22b04 */

void fcn.00022b04(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uchar auStackX_8 [2];
    char cStackX_a;
    char cStackX_b;
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    uint32_t var_40h;
    
    uVar2 = 0;
    iStackX_18 = 0;
    iVar1 = (**(*0x2d128 + 0x138))(2,0x29380,0,&var_28h,&iStackX_10);
    if (-1 < iVar1) {
        uVar3 = uVar2;
        uVar4 = uVar2;
        if (var_28h != 0) {
            do {
                iVar1 = (**(*0x2d128 + 0x98))(*(iStackX_10 + uVar3 * 8),0x29380,&iStackX_18);
                if ((((-1 < iVar1) && (iVar1 = (**(iStackX_18 + 0x30))(iStackX_18,2,8,1,auStackX_8), -1 < iVar1))
                    && (cStackX_b == '\f')) && (cStackX_a == '\x03')) {
                    *(iStackX_10 + uVar4 * 8) = *(iStackX_10 + uVar3 * 8);
                    uVar4 = uVar4 + 1;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < var_28h);
            if (uVar4 != 0) {
                do {
                    (**(*0x2d128 + 0x108))(*(iStackX_10 + uVar2 * 8),0,0,1);
                    uVar2 = uVar2 + 1;
                } while (uVar2 < uVar4);
            }
        }
        (**(*0x2d128 + 0x48))(iStackX_10);
        return;
    }
    return;
}


/* fcn.00011f68 @ 0x11f68 */

//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

void fcn.00011f68(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    int64_t iStackX_8;
    uint64_t uStackX_10;
    int64_t var_20h;
    uint32_t var_28h;
    uint uStack_38;
    uint uStack_34;
    uint uStack_30;
    int32_t var_20h_2;
    int32_t var_1ch;
    int32_t var_bp_18h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    
    iVar2 = fcn.00010bb8(CONCAT71(param_1 >> 8,6),CONCAT71(param_2 >> 8,1),&uStackX_10,&iStackX_8);
    iVar1 = iStackX_8;
    if (-1 < iVar2) {
        uVar4 = 0;
        if (uStackX_10 != 0) {
            do {
                uStack_30 = 0;
                var_bp_18h = 0;
                uStack_38 = 0xc0102;
                uStack_34 = 0x30341d0;
                var_20h_2 = 0xc0102;
                var_1ch = 0xf0341d0;
                iVar2 = (**(*0x2d150 + 0x98))(*(iVar1 + uVar4 * 8),0x29370,&iStackX_8);
                if (-1 < iVar2) {
                    (**(*0x2d150 + 0x108))(*(iVar1 + uVar4 * 8),0,0,0);
                    uVar3 = fcn.0001a004(iStackX_8,&uStack_38);
                    fcn.00010a58(uVar3);
                    (**(*0x2d150 + 0x48))(uVar3);
                    uVar3 = fcn.0001a004(iStackX_8,&var_20h_2);
                    fcn.00010a58(uVar3);
                    (**(*0x2d150 + 0x48))(uVar3);
                    *0x2d0e8 = *(iVar1 + uVar4 * 8);
                    *0x2d0c8 = iStackX_8;
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < uStackX_10);
        }
        (**(*0x2d150 + 0x48))(iVar1);
    }
    return;
}


/* fcn.0001e540 @ 0x1e540 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.0001e540(int64_t arg1,int64_t arg2,uint32_t *arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t uVar2;
    uchar auStackX_20 [2];
    char cStackX_22;
    char cStackX_23;
    int64_t var_38h;
    int64_t iStack_38;
    uint64_t uStack_30;
    int64_t var_20h;
    uint32_t var_bp_18h;
    int64_t var_bp_10h;
    
    if (arg4 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = (**(*0x2d128 + 0x138))(2,0x29380,0,&uStack_30,&iStack_38);
        if (-1 < iVar1) {
            arg3[0] = 0;
            arg3[1] = 0;
            uVar2 = 0;
            if (uStack_30 != 0) {
                do {
                    iVar1 = (**(*0x2d128 + 0x98))(*(iStack_38 + uVar2 * 8),0x29380,&var_20h);
                    if ((((-1 < iVar1) && (iVar1 = (**(var_20h + 0x30))(var_20h,2,8,1,auStackX_20), -1 < iVar1)) &&
                        (cStackX_23 == arg1)) && (cStackX_22 == arg2)) {
                        iVar1 = *arg3;
                        *(iStack_38 + iVar1 * 8) = *(iStack_38 + uVar2 * 8);
                        *arg3 = iVar1 + 1;
                    }
                    uVar2 = uVar2 + 1;
                } while (uVar2 < uStack_30);
                if (*arg3 != 0) {
                    *arg4 = iStack_38;
                    return 0;
                }
            }
            (**(*0x2d128 + 0x48))(iStack_38);
            iVar1 = -0x7ffffffffffffff2;
        }
    }
    return iVar1;
}


/* fcn.0001ed40 @ 0x1ed40 */

uint64_t fcn.0001ed40(ulong noname_0,uint32_t arg1)

{
    char cVar1;
    int16_t iVar2;
    uint64_t in_RAX;
    char16_t *pcVar3;
    uint8_t *puVar4;
    int64_t iVar5;
    uint in_register_00000014;
    uint8_t *puVar6;
    
    puVar6 = CONCAT44(in_register_00000014,arg1);
    iVar5 = 0;
    if ((puVar6 != NULL) && ((*puVar6 & 1) != 0)) {
        pcVar3 = L"Windows Boot Manager";
        cVar1 = str.Windows_Boot_Manager[0];
        while (cVar1 != '\0') {
            pcVar3 = pcVar3 + 1;
            cVar1 = *pcVar3;
        }
        puVar4 = puVar6 + 6;
        iVar2 = *(puVar6 + 6);
        while (iVar2 != 0) {
            puVar4 = puVar4 + 2;
            iVar5 = iVar5 + 1;
            iVar2 = *puVar4;
        }
        for (puVar6 = puVar6 + iVar5 * 2 + 8; *puVar6 != 0x7f; puVar6 = puVar6 + puVar6[3] * 0x100 + puVar6[2]) {
        }
        return CONCAT71(puVar4 >> 8,1);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.0001edac @ 0x1edac */

uint64_t fcn.0001edac(int64_t arg1,int64_t arg2)

{
    uint32_t arg3;
    uint64_t in_RAX;
    uint64_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    char cVar4;
    
    uVar3 = 0;
    if ((arg1 != 0) && (arg2 != 0)) {
        cVar4 = *arg1;
        while (cVar4 != '\x7f') {
            uVar1 = fcn.00019fb0(arg1);
            in_RAX = fcn.00019fb0(arg2);
            if (uVar1 < in_RAX) break;
            if ((cVar4 == *arg2) && (*(arg1 + 1) == *(arg2 + 1))) {
                arg3 = fcn.00019fb0(arg2);
                iVar2 = fcn.0001a41c(arg1,arg2,arg3);
                if (iVar2 == 0) {
                    return 1;
                }
                uVar3 = uVar3 + 1;
            }
            in_RAX = 0;
            if (0x31 < uVar3) break;
            arg1 = arg1 + *(arg1 + 2);
            cVar4 = *arg1;
        }
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.0001e920 @ 0x1e920 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h

void fcn.0001e920(int64_t arg1)

{
    char cVar1;
    code *pcVar2;
    int64_t iVar3;
    int64_t iVar4;
    char16_t *noname_0;
    uint *puVar5;
    uint8_t uVar6;
    uint64_t uVar7;
    char *pcVar8;
    char *pcStackX_8;
    int64_t iStackX_10;
    uint64_t uStackX_18;
    uint32_t var_28h;
    int64_t var_30h;
    uint32_t var_38h;
    int64_t var_40h;
    uint uStack_38;
    uint uStack_34;
    uint uStack_30;
    uint uStack_2c;
    int64_t var_18h;
    int32_t var_10h;
    int32_t var_ch;
    
    fcn.00019b3c(arg1,0x1030000);
    uVar6 = 0;
    pcVar2 = 0x1e904;
    while (pcVar2 != NULL) {
        (*pcVar2)();
        uVar6 = uVar6 + 1;
        pcVar2 = *(uVar6 * 8 + 0x2c9d0);
    }
    noname_0 = L"ConOutDev";
    fcn.00011eb0(0x29fb0,0x29750);
    fcn.00019b3c(noname_0,0x1010000);
    cVar1 = *(*0x2f9f8 + 0x21);
    puVar5 = CONCAT71(noname_0 >> 8,cVar1);
    if (cVar1 != '\0') {
        if (cVar1 == '\x02') {
            (**(*0x2d128 + 0x140))(0x294d0,0,0x2d240);
            if (*0x2d240 != NULL) {
                *0x2f9e9 = *(**0x2d240 + 0x2f);
                *(**0x2d240 + 0x2f) = 0;
            }
            iStackX_10 = 0;
            puVar5 = &uStack_38;
            pcStackX_8 = NULL;
            *0x2d268 = 1;
            uStack_38 = 0x2ad8e2d2;
            uStack_34 = 0x4cd12e91;
            uStack_30 = 0x8fe7f595;
            uStack_2c = 0x16e3ebe5;
            iVar3 = (**(*0x2d128 + 0x140))(puVar5,0,&iStackX_10);
            if (-1 < iVar3) {
                (**(iStackX_10 + 0x68))(0,0x2ed30,1);
                puVar5 = NULL;
                iVar3 = (**(*0x2d128 + 0x40))(4,(*0x2ed30 + 1) * 0x10,&pcStackX_8);
                if (-1 < iVar3) {
                    (**(*0x2d128 + 0x168))(pcStackX_8,(*0x2ed30 + 1) * 0x10,0);
                    (**(iStackX_10 + 0x68))(pcStackX_8,0x2ed30,1);
                    *0x2ed30 = *0x2ed30 + 1;
                    *0x2d260 = pcStackX_8;
                    puVar5 = *(*0x2f9f8 + 0x22);
                    (**(iStackX_10 + 0x68))(puVar5,*0x2f9f8 + 0x2a,0);
                }
            }
        }
        fcn.00022b04();
    }
    if (*(*0x2f9f8 + 0x32) != '\0') {
        fcn.00011f68();
    }
    if (*(*0x2f9f8 + 0x33) != '\0') {
        uVar6 = 0;
        pcVar2 = 0x1c018;
        do {
            (*pcVar2)();
            uVar6 = uVar6 + 1;
            pcVar2 = *(uVar6 * 8 + 0x2ca60);
        } while (pcVar2 != NULL);
        puVar5 = NULL;
    }
    if (*(*0x2f9f8 + 0x36) != '\0') {
        iVar4 = fcn.0001e540(CONCAT71(puVar5 >> 8,7),0,&pcStackX_8,&iStackX_10);
        iVar3 = iStackX_10;
        if (-1 < iVar4) {
            pcVar8 = NULL;
            if (pcStackX_8 != NULL) {
                do {
                    iVar4 = (**(*0x2d128 + 0x98))(*(iVar3 + pcVar8 * 8),0x29370,&var_28h);
                    if (-1 < iVar4) {
                        (**(*0x2d128 + 0x108))(*(iVar3 + pcVar8 * 8),0,0,1);
                        fcn.00010a58(_var_28h);
                    }
                    pcVar8 = pcVar8 + 1;
                } while (pcVar8 < pcStackX_8);
            }
            (**(*0x2d128 + 0x48))(iVar3);
        }
        iVar3 = (**(*0x2d128 + 0x138))(2,0x294a0,0,&uStackX_18,&iStackX_10);
        if (-1 < iVar3) {
            uVar7 = 0;
            if (uStackX_18 != 0) {
                do {
                    iVar3 = (**(*0x2d128 + 0x98))(*(iStackX_10 + uVar7 * 8),0x29370,&pcStackX_8);
                    if (-1 < iVar3) {
                        while( true ) {
                            if ((*pcStackX_8 == '\x7f') && (pcStackX_8[1] == -1)) goto code_r0x0001ec38;
                            if ((*pcStackX_8 == '\x02') && (*(pcStackX_8 + 4) == 0x50141d0)) break;
                            pcStackX_8 = pcStackX_8 + *(pcStackX_8 + 2);
                        }
                        (**(*0x2d128 + 0x108))(*(iStackX_10 + uVar7 * 8),0,0,1);
                        fcn.00010a58(pcStackX_8);
                    }
code_r0x0001ec38:
                    uVar7 = uVar7 + 1;
                } while (uVar7 < uStackX_18);
            }
            (**(*0x2d128 + 0x48))(iStackX_10);
        }
    }
    pcStackX_8 = NULL;
    _var_10h = 0;
    iVar3 = (**(*0x2d158 + 0x48))(L"ConInDev",0x291a0,0,&pcStackX_8);
    if ((iVar3 != -0x7ffffffffffffff2) && (iVar3 = (**(*0x2d150 + 0x140))(0x29788,0,&uStackX_18), iVar3 < 0)) {
        (**(*0x2d150 + 0x80))(0x2d148,0x29788,0,0);
    }
    return;
}


/* fcn.0001f6a4 @ 0x1f6a4 */

//WARNING: Variable defined which should be unmapped: var_20h

ulong fcn.0001f6a4(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    uint32_t var_20h;
    int64_t var_28h;
    
    iVar4 = CONCAT71(param_2 >> 8,1);
    iVar3 = CONCAT71(param_1 >> 8,1);
    iVar1 = fcn.0001e540(iVar3,iVar4,&uStackX_8,&iStackX_10);
    iVar2 = iStackX_10;
    uVar5 = 0;
    if (-1 < iVar1) {
        uVar6 = uVar5;
        if (uStackX_8 != 0) {
            do {
                iVar4 = 0;
                (**(*0x2d128 + 0x108))(*(iVar2 + uVar6 * 8),0,0,1);
                uVar6 = uVar6 + 1;
            } while (uVar6 < uStackX_8);
        }
        (**(*0x2d128 + 0x48))(iVar2);
        iVar3 = iVar2;
    }
    iVar4 = CONCAT71(iVar4 >> 8,6);
    iVar3 = CONCAT71(iVar3 >> 8,1);
    iVar1 = fcn.0001e540(iVar3,iVar4,&uStackX_8,&iStackX_10);
    iVar2 = iStackX_10;
    if (-1 < iVar1) {
        uVar6 = uVar5;
        if (uStackX_8 != 0) {
            do {
                iVar4 = 0;
                (**(*0x2d128 + 0x108))(*(iVar2 + uVar6 * 8),0,0,1);
                uVar6 = uVar6 + 1;
            } while (uVar6 < uStackX_8);
        }
        (**(*0x2d128 + 0x48))(iVar2);
        iVar3 = iVar2;
    }
    iVar2 = fcn.0001e540(CONCAT71(iVar3 >> 8,1),CONCAT71(iVar4 >> 8,4),&uStackX_8,&iStackX_10);
    if (-1 < iVar2) {
        if (uStackX_8 != 0) {
            do {
                (**(*0x2d128 + 0x108))(*(iStackX_10 + uVar5 * 8),0,0,1);
                uVar5 = uVar5 + 1;
            } while (uVar5 < uStackX_8);
        }
        (**(*0x2d128 + 0x48))(iStackX_10);
    }
    return 0;
}


/* fcn.0001f5a0 @ 0x1f5a0 */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.0001f5a0(void)

{
    int64_t arg1;
    char cVar1;
    int64_t iVar2;
    int16_t aiStackX_8 [4];
    uchar auStackX_10 [8];
    int64_t var_20h_2;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    ulong uStack_38;
    uint uStack_30;
    uint uStack_2c;
    int64_t var_20h;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    
    arg1 = *(*0x2f9f8 + 6);
    uStack_30 = 0x4cf5b200;
    uStack_2c = 0x4ca568b8;
    var_20h._0_4_ = 0x3eb2ec9e;
    var_20h._4_4_ = 0x9a02503f;
    var_20h_2 = arg1;
    cVar1 = fcn.0001f3bc(arg1);
    if (cVar1 == '\0') {
        var_20h_2 = arg1;
        iVar2 = (**(*0x2d128 + 0xb8))(&uStack_30,&var_20h_2,&uStack_38);
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = (**(*0x2d128 + 0x98))(uStack_38,&uStack_30,&var_28h);
        if (iVar2 < 0) {
            return iVar2;
        }
        (**(var_28h + 0x30))(var_28h,1,10,1,aiStackX_8);
        (**(var_28h + 0x30))(var_28h,1,0,1,auStackX_10);
        if (aiStackX_8[0] == 0x104) {
            fcn.0001f6a4();
        }
        else if ((aiStackX_8[0] == 0x106) || (aiStackX_8[0] == 0x101)) {
            fcn.0001f440(arg1);
        }
    }
    return 0;
}


/* fcn.00020040 @ 0x20040 */

int64_t fcn.00020040(ulong param_1,ulong param_2,ulong param_3)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint32_t arg2;
    uint8_t uVar5;
    ulong uVar6;
    ulong uStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    
    iVar3 = *(*0x2f9f8 + 6);
    iStackX_10 = iVar3;
    cVar1 = fcn.0001f3bc(iVar3);
    if (cVar1 != '\0') {
        fcn.0001127c();
        uStackX_8 = 0;
        (**(*0x2d150 + 0x148))(&uStackX_8,0x29280,0x29798,0x29370,0x297e0,0);
        goto code_r0x00020118;
    }
    if (iVar3 == 0) {
code_r0x000200d3:
        fcn.00010a58(iVar3);
    }
    else {
        uVar6 = CONCAT71(param_3 >> 8,0x12);
        arg2 = CONCAT71(param_2 >> 8,3);
        iVar2 = fcn.0001ee58(iVar3,arg2,uVar6);
        if ((iVar2 == 0) && (iVar2 = fcn.0001ee58(iVar3,arg2,CONCAT71(uVar6 >> 8,1)), iVar2 == 0))
        goto code_r0x000200d3;
    }
    iVar3 = (**(*0x2d128 + 0xb8))(0x29660,&iStackX_10,&iStackX_18);
    if (iVar3 < 0) {
        return iVar3;
    }
    iVar3 = fcn.0001ff70(iStackX_18,*(*0x2f9f8 + 6));
    if (iVar3 < 0) {
        return iVar3;
    }
code_r0x00020118:
    uVar5 = 0;
    piVar4 = 0x2cb20;
    do {
        cVar1 = (**piVar4)();
        if (cVar1 != '\0') {
            return -0x7ffffffffffffff2;
        }
        uVar5 = uVar5 + 1;
        piVar4 = uVar5 * 8 + 0x2cb20;
    } while (*piVar4 != 0);
    return 0;
}


/* fcn.0001fa38 @ 0x1fa38 */

int64_t fcn.0001fa38(void)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint32_t arg2;
    char *arg2_00;
    uint8_t uVar5;
    uchar *arg3;
    ulong uVar6;
    char acStackX_8 [8];
    uchar auStackX_10 [8];
    uchar auStackX_18 [8];
    uchar auStackX_20 [8];
    uint32_t var_1e0h;
    int64_t var_1e8h;
    int64_t var_1f0h;
    int64_t var_1f8h;
    int64_t iStack_2a8;
    uint uStack_2a0;
    uint uStack_29c;
    uint uStack_298;
    uint uStack_294;
    uint uStack_290;
    uint uStack_28c;
    uint uStack_288;
    uint uStack_284;
    uint uStack_280;
    uint uStack_27c;
    uint uStack_278;
    uint uStack_274;
    uint auStack_270 [2];
    int64_t iStack_268;
    ulong uStack_260;
    int64_t iStack_258;
    ulong uStack_250;
    int64_t iStack_248;
    int64_t iStack_240;
    uchar auStack_238 [8];
    uchar auStack_230 [8];
    uchar auStack_228 [16];
    uchar auStack_218 [20];
    uchar auStack_204 [380];
    int64_t var_80h;
    int64_t var_bp_78h;
    int64_t var_70h;
    int64_t var_68h;
    int64_t var_bp_60h;
    int64_t var_bp_58h;
    int64_t var_bp_50h;
    int64_t var_bp_40h;
    int64_t var_2ch;
    
    iStack_2a8 = 0;
    iStack_258 = 0;
    uStack_2a0 = 0xd432a67f;
    uStack_29c = 0x484b14dc;
    uStack_298 = 0x23fbbb3;
    uStack_294 = 0x27938491;
    iVar3 = *(*0x2f9f8 + 6);
    acStackX_8[0] = '\0';
    uStack_290 = 0x5e948fe3;
    uStack_28c = 0x42b526d3;
    uStack_288 = 0x26117af;
    uStack_284 = 0xec8d1887;
    uStack_280 = 0x9e498932;
    uStack_27c = 0x45af4abc;
    uStack_278 = 0x47024da3;
    uStack_274 = 0xc6e77b78;
    if (iVar3 != 0) {
        arg3 = auStackX_10;
        arg2_00 = acStackX_8;
        iVar2 = *0x2f9f8;
        iStack_248 = iVar3;
        cVar1 = fcn.000206f8(iVar3,arg2_00,arg3);
        if ((cVar1 != '\0') && ((acStackX_8[0] == '\0' || (*(iVar2 + 0x21) != '\0')))) {
            uVar6 = CONCAT71(arg3 >> 8,0x12);
            arg2 = CONCAT71(arg2_00 >> 8,3);
            iVar2 = fcn.0001ee58(iVar3,arg2,uVar6);
            if ((iVar2 == 0) && (iVar2 = fcn.0001ee58(iVar3,arg2,CONCAT71(uVar6 >> 8,1)), iVar2 == 0)) {
                fcn.00010a58(iVar3);
            }
            iVar3 = (**(*0x2d128 + 0xb8))(0x29660,&iStack_248,&uStack_260);
            if (iVar3 < 0) {
                return iVar3;
            }
            *0x2d258 = uStack_260;
            iVar3 = (**(*0x2d128 + 0x98))(uStack_260,0x29660,auStack_238);
            if (iVar3 < 0) {
                return iVar3;
            }
            iVar3 = (**(*0x2d128 + 0x140))(0x29340,0,&iStack_240);
            if (iVar3 < 0) {
                return iVar3;
            }
            uVar5 = 0;
            piVar4 = 0x2cb20;
            do {
                cVar1 = (**piVar4)();
                if (cVar1 != '\0') {
                    return -0x7ffffffffffffff2;
                }
                uVar5 = uVar5 + 1;
                piVar4 = uVar5 * 8 + 0x2cb20;
            } while (*piVar4 != 0);
            iVar3 = (**(iStack_240 + 0x30))(iStack_240,auStackX_20,auStack_228,auStackX_18,auStack_230);
            if (-1 < iVar3) {
                if (((*(*0x2f9f8 + 0x1f) != '\x02') &&
                    (iVar3 = (**(*0x2d128 + 0x98))(uStack_260,&uStack_2a0,&iStack_268), -1 < iVar3)) &&
                   ((iVar3 = fcn.0001a41c(iStack_268,&uStack_290,0x10), iVar3 == 0 ||
                    (iVar3 = fcn.0001a41c(iStack_268,&uStack_280,0x10), iVar3 == 0)))) {
                    iVar3 = (**(*0x2d128 + 0x40))(4,0x14,&iStack_2a8);
                    if (iVar3 < 0) {
                        return iVar3;
                    }
                    auStack_270[0] = 0x200;
                    iVar3 = (**(iStack_268 + 0x18))(iStack_268,auStack_218,auStack_270);
                    if (iVar3 < 0) {
                        (**(*0x2d128 + 0x48))();
                    }
                    else {
                        uStack_250 = 0x14;
                        fcn.00029090(iStack_2a8,auStack_204,0x14);
                        iVar3 = fcn.0001a1ec(0x2c928,0x29c90,0,&uStack_250);
                        iVar2 = iStack_2a8;
                        if ((-1 < iVar3) && (iStack_258 != 0)) {
                            iVar3 = fcn.0001a41c(iStack_2a8,iStack_258,uStack_250);
                            if (iVar3 == 0) goto code_r0x0001fd48;
                            iVar3 = -0x7ffffffffffffff2;
                        }
                        (**(*0x2d128 + 0x48))(iVar2);
                    }
                    return iVar3;
                }
                iVar2 = iStack_2a8;
code_r0x0001fd48:
                if (iVar2 != 0) {
                    (**(*0x2d128 + 0x48))(iVar2);
                }
                return 0;
            }
        }
    }
    return -0x7ffffffffffffff2;
}


/* fcn.00012758 @ 0x12758 */

void fcn.00012758(void)

{
    int64_t iVar1;
    int64_t aiStackX_8 [4];
    
    if (*0x2d160 != 0) {
        iVar1 = fcn.0001a304(aiStackX_8);
        if ((-1 < iVar1) && (aiStackX_8[0] != 0)) {
            (**(aiStackX_8[0] + 0x80))();
        }
    }
    return;
}


/* fcn.00012b58 @ 0x12b58 */

void fcn.00012b58(void)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iStackX_8;
    uint64_t uStackX_10;
    int64_t aiStackX_18 [2];
    
    if (*0x2d160 != 0) {
        iVar1 = fcn.0001a304(aiStackX_18);
        if (-1 < iVar1) {
            iVar1 = (**(aiStackX_18[0] + 0x48))(&uStackX_10,&iStackX_8);
            if (-1 < iVar1) {
                uVar3 = 0;
                if (uStackX_10 != 0) {
                    iVar1 = 0;
                    do {
                        if ((*(iVar1 + 0x20 + iStackX_8) == 1) &&
                           ((*(iVar1 + 0x10 + iStackX_8) & 0x700000000000000) == 0x300000000000000)) {
                            iVar2 = (**(aiStackX_18[0] + 0x30))(*(iVar1 + iStackX_8),*(iVar1 + 8 + iStackX_8));
                            if (-1 < iVar2) {
                                (**(aiStackX_18[0] + 0x18))
                                          (2,*(iVar1 + iStackX_8),*(iVar1 + 8 + iStackX_8),
                                           *(iVar1 + 0x10 + iStackX_8) & 0x78ffffffffffffff);
                            }
                        }
                        uVar3 = uVar3 + 1;
                        iVar1 = iVar1 + 0x38;
                    } while (uVar3 < uStackX_10);
                }
                (**(*0x2d150 + 0x48))(iStackX_8);
            }
        }
    }
    return;
}


/* fcn.00020d14 @ 0x20d14 */

int64_t fcn.00020d14(void)

{
    int64_t iVar1;
    uint auStackX_8 [2];
    ulong uStackX_10;
    ulong *apuStackX_18 [2];
    
    uStackX_10 = 0;
    iVar1 = (**(*0x2d128 + 0x140))(0x29cc8,0,apuStackX_18);
    if (-1 < iVar1) {
        *0x29ca0 = fcn.0001fd74;
        if (*(*0x2f9f8 + 1) == '\x01') {
            *0x29ca0 = fcn.00020274;
        }
        iVar1 = (**(*0x2d128 + 0x148))(&uStackX_10,0x29cd8,0x29ca0,0);
        if (-1 < iVar1) {
            auStackX_8[0] = 7;
            iVar1 = (**(*0x2d130 + 0x58))(L"BootFlow",0x29c80,2,4,auStackX_8);
            if (-1 < iVar1) {
                (**apuStackX_18[0])();
                auStackX_8[0] = 0;
                (**(*0x2d130 + 0x58))(L"BootFlow",0x29c80,2,4,auStackX_8);
                iVar1 = -0x7fffffffffffffeb;
            }
        }
    }
    return iVar1;
}


/* fcn.00020274 @ 0x20274 */

void fcn.00020274(void)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t noname_0;
    int64_t iVar4;
    int64_t arg4;
    int64_t iStackX_8;
    
    iVar4 = *(*0x2f9f8 + 6);
    iVar2 = fcn.00019fb0(iVar4);
    iVar1 = *(iVar4 + iVar2);
    (**(*0x2d128 + 0x18))(0x1f);
    noname_0 = 4;
    (**(*0x2d128 + 0x20))();
    if (*(*0x2f9f8 + 0x4b) != '\0') {
        noname_0 = *(*0x2f9f8 + 2);
        fcn.00010ee0(*(*0x2f9f8 + 2));
    }
    fcn.00019b3c(noname_0,0x3090001);
    arg4 = 0;
    iVar3 = (**(*0x2d128 + 200))(1,*0x2d0d8,*(*0x2f9f8 + 6),0,0,0x2d270);
    if (-1 < iVar3) {
        if (iVar1 != 0) {
            iVar3 = (**(*0x2d128 + 0x98))(*0x2d270,0x29140,&iStackX_8);
            if (iVar3 < 0) {
                return;
            }
            *(iStackX_8 + 0x30) = iVar1;
            *(iStackX_8 + 0x38) = iVar4 + 4 + iVar2;
        }
        if (*(*0x2f9f8 + 0x4b) != '\0') {
            (**(*0x2d250 + 0x10))();
        }
        fcn.00020b64(0,0);
        iVar4 = *(*0x2d120 + 0x40);
        if (iVar4 != 0) {
            (**(iVar4 + 0x40))(iVar4,0);
        }
        fcn.000201a0();
        if (*0x2d240 != NULL) {
            *(**0x2d240 + 0x2f) = 1;
        }
        *0x2d238 = 1;
        out(0x80,0xfb);
        fcn.00028720(0x2d030,0xfb,iVar4,arg4);
        (**(*0x2d128 + 0xd0))(*0x2d270,0,0);
    }
    return;
}


/* fcn.0001fd74 @ 0x1fd74 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.0001fd74(void)

{
    uint16_t uVar1;
    int64_t iVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    code *arg3;
    int64_t iVar5;
    uint64_t uVar6;
    int16_t iVar7;
    uint16_t auStackX_8 [4];
    uchar auStackX_10 [8];
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    uchar auStack_38 [8];
    uchar auStack_30 [8];
    int64_t var_10h;
    int64_t var_8h;
    
    (**(*0x2d128 + 0x18))(0x1f);
    (**(*0x2d128 + 0x20))(4);
    iVar2 = (**(*0x2d128 + 0x140))(0x29340,0,&iStackX_20);
    if (-1 < iVar2) {
        (**(iStackX_20 + 0x30))(iStackX_20,auStackX_10,auStack_38,auStackX_8,&iStackX_18);
        uVar4 = 0;
        uVar3 = uVar4;
        if (auStackX_8[0] != 0) {
            do {
                iVar5 = uVar3 * 0x45;
                uVar1 = *(iVar5 + iStackX_18);
                if (uVar1 < 0xfffc) {
                    *(iVar5 + iStackX_18) = uVar1 + 1;
                }
                else if (uVar1 != 0xffff) {
                    *(iVar5 + iStackX_18) = 0xfffc;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < auStackX_8[0]);
        }
        uVar6 = 0;
        if (auStackX_8[0] != 0) {
            do {
                if (*(uVar6 * 0x45 + 0x3d + iStackX_18) == *0x2d258) break;
                if (uVar6 == auStackX_8[0] - 1) goto code_r0x0001ff63;
                uVar3 = uVar6 + 1;
                uVar6 = uVar3;
            } while (uVar3 < auStackX_8[0]);
        }
        if (*(*0x2f9f8 + 0x1e) != '\0') {
            iVar7 = 0;
            do {
                uVar3 = *(uVar4 + *(uVar6 * 0x45 + 0x1e + iStackX_18) * 0x10 + *(uVar6 * 0x45 + 0x1c + iStackX_18));
                if (uVar3 == 0) break;
                uVar4 = uVar4 + 1;
                iVar7 = iVar7 + uVar3;
            } while (uVar4 < 0x32);
            if (iVar7 != *(*0x2f9f8 + 4)) {
                return -0x7ffffffffffffff9;
            }
        }
        arg3 = fcn.00020b64;
        iVar5 = 0;
        *(uVar6 * 0x45 + iStackX_18) = 0;
        iVar2 = (**(*0x2d150 + 0x170))(0x200,0x10,fcn.00020b64,0,0x299b8,auStack_30);
        if (-1 < iVar2) {
            fcn.00010ee0(0xffff);
            *0x2d238 = 1;
            out(0x80,0xfb);
            fcn.00028720(0x2d030,0xfb,arg3,iVar5);
            (**(iStackX_20 + 0x20))(iStackX_20,0,0,0);
        }
    }
code_r0x0001ff63:
    return iVar2;
}


/* fcn.0001f3bc @ 0x1f3bc */

uint64_t fcn.0001f3bc(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    char *pcVar2;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    pcVar2 = CONCAT44(in_register_0000000c,arg1);
    var_10h = 0x5023b95c;
    uVar1 = 0x429b;
    var_ch = 0x429bdb26;
    var_8h = 0x47bd48a6;
    var_4h = 0x12804c66;
    if ((((pcVar2 != NULL) && (*pcVar2 == '\x04')) && (pcVar2[1] == '\x03')) &&
       (uVar1 = fcn.0001a41c(arg1 + 4,&var_10h,0x10), uVar1 == 0)) {
        return 1;
    }
    return uVar1 & 0xffffffffffffff00;
}


/* fcn.0001f440 @ 0x1f440 */

void fcn.0001f440(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    int64_t iVar3;
    char *pcVar4;
    char *pcVar5;
    char *pcStackX_8;
    ulong uStackX_10;
    uchar auStackX_18 [16];
    int64_t var_38h;
    int64_t var_40h;
    
    pcVar5 = NULL;
    pcStackX_8 = arg1;
    do {
        for (; *pcStackX_8 == '\x7f'; pcStackX_8 = pcStackX_8 + 4) {
            if (pcStackX_8[1] == -1) {
                return;
            }
        }
        do {
            iVar3 = *0x2d128;
            pcStackX_8 = arg1;
            if (arg1 == 0) goto code_r0x0001f58b;
            cVar1 = *arg1;
            pcVar4 = arg1;
            while (cVar1 != '\x7f') {
                pcVar4 = pcVar4 + pcVar4[3] * 0x100 + pcVar4[2];
                cVar1 = *pcVar4;
            }
            cVar1 = pcVar4[1];
            pcVar4[1] = -1;
            iVar3 = (**(iVar3 + 0xb8))(0x29370,&pcStackX_8,&uStackX_10);
            pcVar2 = pcStackX_8;
            pcVar4[1] = cVar1;
            if (iVar3 < 0) break;
            if (*pcStackX_8 == '\x7f') {
                (**(*0x2d128 + 0x108))(uStackX_10,0,0,1);
                break;
            }
            if (pcStackX_8 == pcVar5) goto code_r0x0001f58b;
            if (*0x2d269 == '\x01') {
                (**(*0x2d128 + 0x118))(uStackX_10,0x29370,auStackX_18,*0x2d0d8,uStackX_10,0x10);
            }
            else {
                (**(*0x2d128 + 0x120))(uStackX_10,0x29370,*0x2d0d8,uStackX_10);
            }
            iVar3 = (**(*0x2d128 + 0x108))(uStackX_10,0,pcStackX_8,1);
            pcVar5 = pcVar2;
        } while (-1 < iVar3);
code_r0x0001f58b:
        for (; *pcStackX_8 != '\x7f'; pcStackX_8 = pcStackX_8 + pcStackX_8[3] * 0x100 + pcStackX_8[2]) {
        }
    } while( true );
}


/* fcn.000209dc @ 0x209dc */

void fcn.000209dc(void)

{
    int64_t iVar1;
    uint auStackX_8 [2];
    ulong auStackX_10 [3];
    uchar auStack_38 [56];
    
    auStackX_10[0] = 0x26;
    *0x2d238 = 0;
    fcn.00020b64(0,0);
    if (*(*0x2f9f8 + 0xf) != '\0') {
        iVar1 = (**(*0x2d130 + 0x48))(L"LastBoot",0x29c90,auStackX_8,auStackX_10,auStack_38);
        if (-1 < iVar1) {
            (**(*0x2d130 + 0x58))(L"LastBoot",0x29c90,auStackX_8[0],0,auStack_38);
        }
    }
    return;
}


/* fcn.00020b64 @ 0x20b64 */

void fcn.00020b64(void)

{
    int64_t iVar1;
    uint auStackX_18 [2];
    uint auStackX_20 [2];
    ulong auStack_18 [3];
    
    auStack_18[0] = 4;
    iVar1 = (**(*0x2d130 + 0x48))(L"LastBootFailed",0x29c90,auStackX_20,auStack_18,auStackX_18);
    if (-1 < iVar1) {
        auStackX_18[0] = 0;
        (**(*0x2d130 + 0x58))(L"LastBootFailed",0x29c90,auStackX_20[0],auStack_18[0],auStackX_18);
    }
    return;
}


/* fcn.000203ec @ 0x203ec */

int64_t fcn.000203ec(int64_t arg1)

{
    uint8_t *puVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint8_t uVar6;
    uint64_t uVar7;
    int16_t iVar8;
    uint16_t uVar9;
    uint16_t auStackX_10 [4];
    uchar auStackX_18 [8];
    uint auStackX_20 [2];
    int64_t var_bp_60h;
    int64_t var_74h;
    int64_t var_298h;
    int64_t var_2a0h;
    int64_t var_2a8h;
    int64_t iStack_358;
    uint uStack_350;
    uint uStack_34c;
    uint uStack_348;
    uint uStack_344;
    uint uStack_340;
    uint uStack_33c;
    uint uStack_338;
    uint uStack_334;
    uint uStack_330;
    uint uStack_32c;
    uint uStack_328;
    uint uStack_324;
    int64_t iStack_320;
    int64_t iStack_318;
    int64_t iStack_310;
    int64_t iStack_308;
    uchar auStack_300 [8];
    uchar auStack_2f8 [208];
    uchar auStack_228 [20];
    uchar auStack_214 [396];
    int64_t var_80h;
    int64_t var_78h;
    int64_t var_bp_70h;
    
    uStack_350 = 0xd432a67f;
    uStack_34c = 0x484b14dc;
    uStack_348 = 0x23fbbb3;
    uStack_344 = 0x27938491;
    uVar5 = 0;
    iStack_358 = 0;
    uVar9 = 0xfffc;
    uStack_340 = 0x5e948fe3;
    iVar8 = 0;
    uStack_33c = 0x42b526d3;
    uStack_338 = 0x26117af;
    uStack_334 = 0xec8d1887;
    uStack_330 = 0x9e498932;
    uStack_32c = 0x45af4abc;
    uStack_328 = 0x47024da3;
    uStack_324 = 0xc6e77b78;
    iVar3 = (**(*0x2d128 + 0x140))(0x29340,0,&iStack_308);
    if (iVar3 < 0) {
        return iVar3;
    }
    (**(iStack_308 + 0x30))(iStack_308,auStackX_18,auStack_300,auStackX_10,&iStack_318);
    uVar7 = 0;
    if (auStackX_10[0] != 0) {
        do {
            if (*(uVar7 * 0x45 + iStack_318) < uVar9) {
                uVar9 = *(uVar7 * 0x45 + iStack_318);
                uVar5 = uVar7;
            }
            uVar6 = uVar7 + 1;
            uVar7 = uVar6;
        } while (uVar6 < auStackX_10[0]);
    }
    iVar3 = uVar5 * 0x45;
    if (*(iVar3 + 0x14 + iStack_318) != 2) {
        return -0x7ffffffffffffffd;
    }
    uVar2 = *(iVar3 + 0x3d + iStack_318);
    iVar4 = (**(*0x2d128 + 0x98))(uVar2,0x29370,&iStack_310);
    if (iVar4 < 0) {
        return iVar4;
    }
    uVar5 = 0;
    iVar3 = *(iVar3 + 0x1e + iStack_318) * 0x10 + *(iVar3 + 0x1c + iStack_318);
    do {
        if (*(uVar5 + iVar3) == '\0') break;
        puVar1 = uVar5 + iVar3;
        uVar6 = uVar5 + 1;
        uVar5 = uVar6;
        iVar8 = iVar8 + *puVar1;
    } while (uVar6 < 0x32);
    *(arg1 + 0xb) = iVar8;
    iVar3 = fcn.00019fb0(iStack_310);
    fcn.00029090(auStack_2f8,iStack_310,iVar3);
    iVar3 = (**(*0x2d130 + 0x58))(L"FastBootOption",0x29c90,7,iVar3,auStack_2f8);
    if (iVar3 < 0) {
        return iVar3;
    }
    if (((*(*0x2f9f8 + 0x1f) != '\x02') && (iVar3 = (**(*0x2d128 + 0x98))(uVar2,&uStack_350,&iStack_320), -1 < iVar3)
        ) && ((iVar4 = fcn.0001a41c(iStack_320,&uStack_340,0x10), iVar4 == 0 ||
              (iVar4 = fcn.0001a41c(iStack_320,&uStack_330,0x10), iVar4 == 0)))) {
        iVar3 = (**(*0x2d128 + 0x40))(4,0x14,&iStack_358);
        if (iVar3 < 0) {
            return iVar3;
        }
        auStackX_20[0] = 0x200;
        iVar3 = (**(iStack_320 + 0x18))(iStack_320,auStack_228,auStackX_20);
        if (iVar3 < 0) {
            (**(*0x2d128 + 0x48))();
        }
        else {
            fcn.00029090(iStack_358,auStack_214,0x14);
            iVar3 = (**(*0x2d130 + 0x58))(L"FastBootHddSerial",0x29c90,7,0x14,iStack_358);
            (**(*0x2d128 + 0x48))(iStack_358);
        }
    }
    return iVar3;
}


/* fcn.00020768 @ 0x20768 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00020768(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    int16_t *piVar1;
    int16_t iVar2;
    bool bVar3;
    uint32_t *puVar4;
    char cVar5;
    char *arg1_00;
    int64_t iVar6;
    int64_t arg3_00;
    uint in_register_0000000c;
    int64_t iVar7;
    char *arg1_01;
    char *arg2_00;
    uint32_t uVar8;
    uint64_t arg3_01;
    uint32_t *puStackX_8;
    uint16_t auStackX_18 [4];
    char *pcStackX_20;
    int64_t var_40h;
    int64_t var_58h;
    int64_t aiStack_48 [2];
    int64_t var_bp_10h;
    
    iVar6 = CONCAT44(in_register_0000000c,arg1);
    iVar7 = 0;
    piVar1 = iVar6 + 6;
    bVar3 = false;
    auStackX_18[0] = arg3 & 0xff00;
    iVar2 = *(iVar6 + 6);
    while (iVar2 != 0) {
        piVar1 = piVar1 + 1;
        iVar7 = iVar7 + 1;
        iVar2 = *piVar1;
    }
    arg1_00 = iVar6 + 8 + iVar7 * 2;
    if (arg1_00 == NULL) {
        return -0x7ffffffffffffffd;
    }
    cVar5 = fcn.000206f8(arg1_00,&puStackX_8,auStackX_18);
    if (cVar5 == '\0') {
        return -0x7ffffffffffffffd;
    }
    arg2_00 = arg1_00 + *(iVar6 + 4);
    uVar8 = (arg2 - arg2_00) + iVar6;
    arg3_01 = uVar8;
    if (*arg1_00 == '\x04') {
        if (arg1_00[1] == '\x01') {
            iVar7 = fcn.000116d0(arg1_00);
            if (iVar7 == 0) {
                return -0x7ffffffffffffffd;
            }
            arg1_01 = arg1_00 + arg1_00[2] + arg1_00[3] * 0x100;
            if (arg1_01 == NULL) {
                arg1_00 = fcn.0001a174(iVar7);
            }
            else {
                iVar6 = fcn.00019fb0(iVar7);
                iVar6 = iVar6 + -4;
                arg3_00 = fcn.00019fb0(arg1_01);
                arg1_00 = fcn.00019ec8(arg3_00 + iVar6);
                fcn.00029090(arg1_00,iVar7,iVar6);
                fcn.00029090(arg1_00 + iVar6,arg1_01,arg3_00);
            }
            goto code_r0x00020833;
        }
        if (arg1_00[1] != '\x03') goto code_r0x0002093d;
    }
    else {
code_r0x0002093d:
        if (auStackX_18[0] == '\0') {
            arg1_00 = fcn.0001a004(arg1_00,0x29ce8);
            pcStackX_20 = arg1_00;
            iVar7 = (**(*0x2d128 + 0xb8))(0x29660,&pcStackX_20,aiStack_48);
            if (iVar7 < 0) {
                (**(*0x2d128 + 0x48))(pcStackX_20);
                return iVar7;
            }
            iVar7 = fcn.0001ff70(aiStack_48[0],pcStackX_20);
            if (iVar7 < 0) goto code_r0x000209aa;
code_r0x00020833:
            bVar3 = true;
        }
    }
    iVar7 = fcn.00019fb0(arg1_00);
    iVar6 = (**(*0x2d128 + 0x40))(4,iVar7 + 4 + arg3_01,&puStackX_8);
    puVar4 = puStackX_8;
    if (-1 < iVar6) {
        fcn.00029090(puStackX_8,arg1_00,iVar7);
        *(puStackX_8 + iVar7) = uVar8;
        puStackX_8 = puStackX_8 + iVar7 + 1;
        fcn.00029090(puStackX_8,arg2_00,arg3_01);
        iVar7 = (**(*0x2d130 + 0x58))(L"FastBootOption",0x29c90,7,arg3_01 + 4 + iVar7,puVar4);
        (**(*0x2d128 + 0x48))(puVar4);
        if (bVar3) {
            (**(*0x2d128 + 0x48))(arg1_00);
        }
        return iVar7;
    }
code_r0x000209aa:
    (**(*0x2d128 + 0x48))(arg1_00);
    return -0x7ffffffffffffffd;
}


/* fcn.000206f8 @ 0x206f8 */

int64_t fcn.000206f8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int iVar2;
    ulong in_RAX;
    unkuint7 Var3;
    bool bVar4;
    
    cVar1 = *arg1;
    Var3 = in_RAX >> 8;
    do {
        if (cVar1 == '\x7f') {
code_r0x0002075f:
            return CONCAT71(Var3,1);
        }
        if (cVar1 == '\x05') goto code_r0x00020762;
        if (cVar1 == '\x03') {
            cVar1 = *(arg1 + 1);
            if (cVar1 == '\x05') {
                *arg2 = 1;
            }
            bVar4 = cVar1 == '\v';
code_r0x00020726:
            if (bVar4) {
code_r0x00020762:
                return Var3 << 8;
            }
        }
        else if (cVar1 == '\x04') {
            if (*(arg1 + 1) != '\x01') {
                bVar4 = *(arg1 + 1) == '\x02';
                goto code_r0x00020726;
            }
            if (*(arg1 + *(arg1 + 3) * 0x100 + *(arg1 + 2) + 1) == '\x04') {
                *arg3 = 1;
            }
            goto code_r0x0002075f;
        }
        iVar2 = *(arg1 + 2) + *(arg1 + 3) * 0x100;
        arg1 = arg1 + iVar2;
        cVar1 = *arg1;
        Var3 = iVar2 >> 8;
    } while( true );
}


/* fcn.0001ee58 @ 0x1ee58 */

char * fcn.0001ee58(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    char cVar1;
    
    if (arg1 != 0) {
        cVar1 = *arg1;
        while (cVar1 != '\x7f') {
            if ((cVar1 == arg2) && (*(arg1 + 1) == arg3)) {
                return arg1;
            }
            arg1 = arg1 + *(arg1 + 3) * 0x100 + *(arg1 + 2);
            cVar1 = *arg1;
        }
    }
    return NULL;
}


/* fcn.00028720 @ 0x28720 */

void fcn.00028720(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    char cVar2;
    uint64_t uVar3;
    uint32_t *arg1_00;
    int64_t iVar5;
    int64_t iVar4;
    char cStackY_108;
    char acStackY_107 [39];
    int32_t in_stack_ffffffffffffff20;
    int64_t in_stack_ffffffffffffff28;
    int8_t in_stack_ffffffffffffff30;
    
    fcn.0001895c(&cStackY_108,0x100,0,arg1,in_stack_ffffffffffffff28,in_stack_ffffffffffffff30);
    uVar3 = fcn.00010450();
    fcn.00010400();
    out(0x72,3);
    cVar2 = in(0x73);
    if ((uVar3 >> 9 & 1) != 0) {
        fcn.000103f0();
    }
    if ((cVar2 == '\x01') && (iVar5 = 0, cStackY_108 != '\0')) {
        do {
            iVar4 = iVar5 + 1;
            pcVar1 = acStackY_107 + iVar5;
            iVar5 = iVar4;
        } while (*pcVar1 != '\0');
        if ((((iVar4 != 0) && (*0xfe1000e8 != 0xff)) && ((*0xfe1000e8 & 1) != 0)) &&
           (((*0xfe1000e8 >> 1 & 3) - 2 < 2 && (arg1_00 = fcn.00028aec(in_stack_ffffffffffffff20), arg1_00 != NULL))))
        {
            fcn.00028c0c(arg1_00);
        }
    }
    return;
}


/* fcn.0001ff70 @ 0x1ff70 */

int64_t fcn.0001ff70(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iStackX_10 = 0;
    iStackX_18 = 0;
    iStackX_20 = 0;
    if (arg2 != 0) {
        cVar1 = *arg2;
        while (cVar1 != '\x7f') {
            if ((cVar1 == '\x04') && (*(arg2 + 1) == '\x04')) {
                iVar2 = (**(*0x2d128 + 0x98))(arg1,0x294f0,&iStackX_10);
                if (iVar2 < 0) {
                    return iVar2;
                }
                iVar2 = (**(iStackX_10 + 8))(iStackX_10,&iStackX_18);
                if (iVar2 < 0) {
                    return iVar2;
                }
                iVar2 = (**(iStackX_18 + 8))(iStackX_18,&iStackX_20,arg2 + 4,1,0);
                if (iVar2 < 0) {
                    return iVar2;
                }
                (**(iStackX_20 + 0x10))(iStackX_20);
                return iVar2;
            }
            arg2 = arg2 + *(arg2 + 3) * 0x100 + *(arg2 + 2);
            cVar1 = *arg2;
        }
    }
    return -0x7ffffffffffffff9;
}


/* fcn.000201a0 @ 0x201a0 */

void fcn.000201a0(void)

{
    int64_t iVar1;
    int64_t var_10h;
    int64_t var_18h;
    ulong auStackX_18 [2];
    int32_t var_bp_20h;
    int32_t var_1ch;
    int32_t var_18h_2;
    int32_t var_14h;
    int32_t var_10h_2;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_10h = 0;
    var_bp_20h = 0x47c7b223;
    var_1ch = 0x11d2c42a;
    var_18h_2 = -0x5fffa872;
    var_14h = 0x3b7269c9;
    var_10h_2 = 0x6302d008;
    var_ch = 0x4f307f9b;
    var_8h = -0x369f5379;
    var_4h = 0x4edaf5fe;
    iVar1 = (**(*0x2d128 + 0x50))(0x200,8,0x20160,0,&var_18h);
    if (-1 < iVar1) {
        (**(*0x2d128 + 0xa8))(&var_bp_20h,var_18h,&var_10h);
    }
    iVar1 = (**(*0x2d128 + 0x50))(0x200,8,0x20160,0,auStackX_18);
    if (-1 < iVar1) {
        (**(*0x2d128 + 0xa8))(&var_10h_2,auStackX_18[0],&var_10h);
    }
    return;
}


/* fcn.00020fdc @ 0x20fdc */

//WARNING: Variable defined which should be unmapped: var_1h

ulong fcn.00020fdc(int64_t arg1,int64_t arg2,int32_t arg_70h)

{
    int16_t iVar1;
    int16_t *arg2_00;
    bool bVar2;
    bool bVar3;
    int16_t *piVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t iVar7;
    int32_t var_1h;
    
    if ((arg2 == 0) || (arg1 == 0)) {
        uVar6 = 0x8000000000000002;
    }
    else {
        iVar5 = arg1;
        (**(*0x2d150 + 0x160))(arg1,arg2,0x70);
        arg2_00 = *(arg2 + 0x18);
        bVar3 = true;
        bVar2 = false;
        if (arg2_00 != NULL) {
            iVar7 = 0;
            iVar1 = *arg2_00;
            piVar4 = arg2_00;
            while (iVar1 != 0) {
                piVar4 = piVar4 + 1;
                iVar7 = iVar7 + 1;
                iVar1 = *piVar4;
            }
            iVar7 = fcn.0001976c(iVar5,iVar7 * 2 + 2,arg2_00);
            *(arg1 + 0x18) = iVar7;
            bVar2 = false;
            if (iVar7 == 0) {
                bVar2 = bVar3;
            }
        }
        if (*(arg2 + 0x28) != 0) {
            iVar7 = fcn.0001976c(iVar5,*(arg2 + 0x28),*(arg2 + 0x20));
            *(arg1 + 0x20) = iVar7;
            if (iVar7 == 0) {
                bVar2 = bVar3;
            }
        }
        if (*(arg2 + 0x38) != 0) {
            iVar7 = fcn.0001976c(iVar5,*(arg2 + 0x38),*(arg2 + 0x30));
            *(arg1 + 0x30) = iVar7;
            if (iVar7 == 0) {
                bVar2 = bVar3;
            }
        }
        if (*(arg2 + 0x60) != 0) {
            iVar5 = fcn.0001976c(iVar5,8,*(arg2 + 0x60));
            *(arg1 + 0x60) = iVar5;
            if (iVar5 == 0) {
                bVar2 = bVar3;
            }
        }
        if (bVar2) {
            if (*(arg1 + 0x18) != 0) {
                (**(*0x2d150 + 0x48))();
            }
            if (*(arg1 + 0x20) != 0) {
                (**(*0x2d150 + 0x48))();
            }
            if (*(arg1 + 0x30) != 0) {
                (**(*0x2d150 + 0x48))();
            }
            if (*(arg1 + 0x60) != 0) {
                (**(*0x2d150 + 0x48))();
            }
            uVar6 = 0x8000000000000009;
        }
        else {
            uVar6 = 0;
        }
    }
    return uVar6;
}


/* fcn.0002126c @ 0x2126c */

void fcn.0002126c(int64_t arg1)

{
    int64_t *piVar1;
    int16_t *piVar2;
    int16_t *piVar3;
    int64_t *piVar4;
    char cVar5;
    int16_t *piVar6;
    uint8_t uVar7;
    bool bVar8;
    
    if (arg1 != 0) {
        cVar5 = '\0';
        if (*0x2fa28 != NULL) {
            piVar4 = *0x2fa28;
            piVar6 = *0x2cbc0;
            do {
                piVar1 = *piVar4;
                if (piVar4[4] == NULL) {
                    bVar8 = piVar4[0xc] != 0;
                }
                else {
                    bVar8 = *piVar4[4] == '\x05';
                }
                if ((((!bVar8) && (piVar4[0xc] == 0)) && (piVar4[10] == 0)) && ((piVar4[3] != 0 && (piVar6 != NULL)))) {
                    piVar2 = piVar6;
                    uVar7 = 0;
                    do {
                        for (piVar3 = piVar4[3]; (*piVar3 != 0 && (*piVar3 == *piVar2)); piVar3 = piVar3 + 1) {
                            piVar2 = piVar2 + 1;
                        }
                        if (*piVar3 == *piVar2) {
                            (*arg1)(piVar4,1);
                            cVar5 = cVar5 + '\x01';
                            if (cVar5 == '\x02') {
                                return;
                            }
                            piVar6 = *0x2cbc0;
                            break;
                        }
                        uVar7 = uVar7 + 1;
                        piVar2 = *(uVar7 * 8 + 0x2cbc0);
                    } while (piVar2 != NULL);
                }
                piVar4 = piVar1;
            } while (piVar1 != NULL);
        }
    }
    return;
}


/* fcn.0002136c @ 0x2136c */

//WARNING: Variable defined which should be unmapped: var_1h

void fcn.0002136c(int64_t arg1)

{
    int64_t *piVar1;
    char *pcVar2;
    int64_t *piVar3;
    int64_t iVar4;
    int64_t *piVar5;
    int64_t *piVar6;
    int16_t iVar7;
    uint16_t uVar8;
    uint64_t uVar9;
    uint16_t uVar10;
    bool bVar11;
    uint16_t auStackX_10 [4];
    int32_t var_1h;
    
    if (arg1 == 0) {
        return;
    }
    iVar4 = fcn.0001a1ec(0x2a0f0,0x297f8,0,auStackX_10);
    if (iVar4 < 0) {
        return;
    }
    uVar9 = 0;
    auStackX_10[0] = auStackX_10[0] >> 1;
    if (auStackX_10[0] != 0) {
        do {
            if (*(uVar9 * 2) == *(*(arg1 + 0x10) + 0x40)) break;
            uVar10 = uVar9 + 1;
            uVar9 = uVar10;
        } while (uVar10 < auStackX_10[0]);
    }
    uVar10 = uVar9;
    if (uVar10 != auStackX_10[0]) {
        piVar5 = NULL;
        piVar6 = *0x2fa28;
code_r0x0002149f:
        if (piVar6 != NULL) {
            piVar1 = *piVar6;
            uVar9 = 0;
            if (uVar10 != 0) {
                do {
                    iVar7 = uVar9;
                    if (*(uVar9 * 2) == piVar6[8]) {
                        pcVar2 = piVar6[4];
                        if (pcVar2 == NULL) {
                            bVar11 = piVar6[0xc] != 0;
                        }
                        else {
                            bVar11 = *pcVar2 == '\x05';
                        }
                        if (!bVar11) goto code_r0x00021492;
                        if (pcVar2 == NULL) {
                            bVar11 = piVar6[0xc] != 0;
                        }
                        else {
                            bVar11 = *pcVar2 == '\x05';
                        }
                        if (!bVar11) {
                            piVar6 = NULL;
                            goto code_r0x00021492;
                        }
                        piVar5 = piVar6;
                        goto code_r0x0002147b;
                    }
                    uVar8 = iVar7 + 1;
                    uVar9 = uVar8;
                } while (uVar8 < uVar10);
                goto code_r0x00021499;
            }
        }
        goto code_r0x000214a8;
    }
code_r0x0002150a:
    (**(*0x2d150 + 0x48))(0);
    return;
    while (piVar5 = piVar3, piVar3 != NULL) {
code_r0x0002147b:
        piVar3 = *piVar5;
        if (piVar6[8] != piVar3[8]) {
            piVar6 = piVar5;
            break;
        }
    }
code_r0x00021492:
    piVar5 = piVar6;
code_r0x00021499:
    piVar6 = piVar1;
    if (uVar10 <= iVar7 + 1U) goto code_r0x000214a8;
    goto code_r0x0002149f;
code_r0x000214a8:
    piVar6 = *(arg1 + 0x10);
    piVar6[1] = piVar5;
    if (piVar5 == NULL) {
        *piVar6 = *0x2fa28;
        if (*0x2fa28 == NULL) {
            *0x2fa30 = piVar6;
        }
        else {
            (*0x2fa28)[1] = piVar6;
        }
        *0x2fa28 = piVar6;
    }
    else {
        *piVar6 = *piVar5;
        if (piVar5 == *0x2fa30) {
            *0x2fa30 = piVar6;
        }
        else {
            *(*piVar5 + 8) = piVar6;
        }
        *piVar5 = piVar6;
    }
    *0x2fa20 = *0x2fa20 + 1;
    goto code_r0x0002150a;
}


/* fcn.000144ec @ 0x144ec */

void fcn.000144ec(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    uint16_t uVar2;
    uint32_t *puVar3;
    int64_t arg1_00;
    uint32_t *puVar4;
    uint32_t *puVar5;
    int16_t iVar6;
    ulong *puVar7;
    uint32_t *puVar8;
    bool bVar9;
    
    if (arg2 != 0) {
        iVar6 = -1;
        if (*0x2fa20 == 0) {
            arg1_00 = 8;
        }
        else {
            arg1_00 = *0x2fa20 << 3;
        }
        puVar3 = fcn.00019ec8(arg1_00);
        puVar5 = puVar3;
        puVar1 = *0x2fa28;
        puVar8 = puVar3;
        while( true ) {
            puVar7 = puVar1;
            if (puVar7 == NULL) break;
            puVar1 = *puVar7;
            if (puVar7[4] == NULL) {
                bVar9 = puVar7[0xc] != 0;
            }
            else {
                bVar9 = *puVar7[4] == '\x05';
            }
            if ((bVar9) && (*(puVar7 + 0x69) == '\0')) {
                puVar4 = puVar5;
                if (*(puVar7 + 8) != iVar6) {
                    *(puVar8 + 1) = (puVar5 - puVar8) - 4;
                    iVar6 = *(puVar7 + 8);
                    *puVar5 = *(puVar7[4] + 4);
                    puVar4 = puVar5 + 6;
                    puVar8 = puVar5;
                }
                uVar2 = *(puVar7 + 0xb);
                if ((*(puVar7 + 2) & 1) == 0) {
                    uVar2 = uVar2 | 0xff00;
                }
                *puVar4 = uVar2;
                puVar5 = puVar4 + 2;
            }
        }
        *arg1 = puVar3;
        *(puVar8 + 1) = (puVar5 - puVar8) - 4;
        *arg2 = puVar5 - puVar3;
    }
    return;
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


/* fcn.00022c08 @ 0x22c08 */

ulong fcn.00022c08(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    if (arg2 != 0) {
        auStackX_18[0] = 0xffffffff;
        iVar1 = (**(arg1 + 0x58))(arg1,1,*0x29d18,arg2,auStackX_18,0);
        if ((-1 < iVar1) || (iVar1 = (**(arg1 + 0x58))(arg1,0,*0x29d18,arg2,auStackX_18,0), -1 < iVar1))
        goto code_r0x00022c83;
    }
    auStackX_18[0] = 0;
code_r0x00022c83:
    return auStackX_18[0];
}


/* fcn.00028a3c @ 0x28a3c */

ulong fcn.00028a3c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t auStackX_10 [2];
    uint64_t uStackX_20;
    
    iVar1 = (**(arg2 + 0x78))(arg2,4,0,&uStackX_20);
    if ((-1 < iVar1) && (iVar1 = (**(arg2 + 0x30))(arg2,2,8,1,auStackX_10), -1 < iVar1)) {
        auStackX_10[0] = auStackX_10[0] >> 8;
        if (auStackX_10[0] != 0xc0330) {
            uStackX_20 = uStackX_20 & 0xffffffffffff7fff;
        }
        iVar1 = (**(arg2 + 0x78))(arg2,2,uStackX_20 & 0x8700);
        if (-1 < iVar1) {
            *arg1 = *arg3;
            return 0;
        }
    }
    return 0x8000000000000007;
}


/* fcn.00021c6c @ 0x21c6c */

int64_t fcn.00021c6c(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint in_register_00000014;
    int64_t iVar4;
    char cVar5;
    int iVar6;
    char cStackX_10;
    uint8_t uStackX_11;
    char cStackX_12;
    char cStackX_13;
    
    iVar4 = CONCAT44(in_register_00000014,arg2);
    cVar5 = '\0';
    if (*(iVar4 + 0x1a) == 0) {
code_r0x00021d53:
        iVar3 = 0;
    }
    else {
        iVar6 = *(iVar4 + 0x1a) << 2;
        iVar3 = (**(arg1 + 0x10))(arg1,2,0,iVar6,1,&cStackX_10);
        while (iVar2 = *0x2d2a0, -1 < iVar3) {
            if (((cStackX_10 == '\x02') && (cStackX_13 == '\x03')) &&
               ((cStackX_12 == '\x01' || ((cStackX_12 == '\x10' || (cStackX_12 == ' ')))))) {
                cVar5 = cVar5 + '\x01';
            }
            if (uStackX_11 == 0) {
                if (cVar5 != '\0') {
                    uVar1 = *(*0x2d2a0 + 0x3ca);
                    *(iVar4 + 0x200) = cVar5;
                    *(iVar4 + 0x58) = uVar1 * 0x220 + arg3 * 0x100 + *(iVar2 + 0x3c2);
                }
                goto code_r0x00021d53;
            }
            iVar6 = iVar6 + uStackX_11 * 4;
            iVar3 = (**(arg1 + 0x10))(arg1,2,0,iVar6,1,&cStackX_10);
        }
    }
    return iVar3;
}


/* fcn.00021978 @ 0x21978 */

int64_t fcn.00021978(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong unaff_RBX;
    uint in_R8;
    int64_t iVar3;
    uint64_t uVar4;
    int iVar5;
    uint8_t uStackX_8;
    uint8_t uStackX_9;
    char cStackX_a;
    char cStackX_b;
    uint uStackX_c;
    ushort uStackX_10;
    uchar uStackX_12;
    unkbyte5 StackX_13;
    uint32_t auStackX_18 [4];
    int8_t var_41h;
    int64_t var_43h;
    int64_t var_50h;
    
    iVar3 = CONCAT44(in_R8,arg3);
    uStackX_10 = unaff_RBX;
    uStackX_12 = unaff_RBX >> 0x10;
    StackX_13 = unaff_RBX >> 0x18;
    uStackX_8 = arg1;
    uStackX_9 = arg1 >> 8;
    cStackX_a = arg1 >> 0x10;
    cStackX_b = arg1 >> 0x18;
    uStackX_c = arg1 >> 0x20;
    uVar4 = 0;
    if (*(iVar3 + 0x1a) == 0) {
code_r0x00021b56:
        iVar1 = 0;
    }
    else {
        iVar5 = *(iVar3 + 0x1a) << 2;
        while (iVar1 = (**(arg2 + 0x10))(arg2,2,0,iVar5,1,&uStackX_8), -1 < iVar1) {
            if (uStackX_8 == 1) {
                uVar2 = CONCAT13(cStackX_b,CONCAT12(cStackX_a,CONCAT11(uStackX_9,uStackX_8))) & 0xfefeffff;
                *(iVar3 + 0x38) = iVar5;
                uStackX_8 = uVar2;
                uStackX_9 = uVar2 >> 8;
                cStackX_a = uVar2 >> 0x10;
                cStackX_b = uVar2 >> 0x18;
                iVar1 = (**(arg2 + 0x18))(arg2,2,0,iVar5,1,&uStackX_8);
                if (iVar1 < 0) {
                    return iVar1;
                }
                iVar1 = (**(arg2 + 0x10))(arg2,2,0,iVar5 + 4,1,auStackX_18);
                if (iVar1 < 0) {
                    return iVar1;
                }
                auStackX_18[0] = auStackX_18[0] & 0xffffdffe;
                iVar1 = (**(arg2 + 0x18))(arg2,2,0,iVar5 + 4,1,auStackX_18);
code_r0x00021b3e:
                if (iVar1 < 0) {
                    return iVar1;
                }
            }
            else if (uStackX_8 == 2) {
                if (cStackX_b == '\x02') {
                    iVar1 = iVar3 + 0x3c;
code_r0x00021a1e:
                    iVar1 = (**(arg2 + 0x10))(arg2,2,0,iVar5,3,iVar1);
                    goto code_r0x00021b3e;
                }
                if (cStackX_b == '\x03') {
                    if (cStackX_a == '\0') {
                        iVar1 = iVar3 + 0x48;
                        goto code_r0x00021a1e;
                    }
                    if ((((cStackX_a == '\x01') || (cStackX_a == '\x10')) || (cStackX_a == ' ')) &&
                       ((*(iVar3 + 0x200) != 0 && (uVar4 < *(iVar3 + 0x200))))) {
                        iVar1 = (**(arg2 + 0x10))(arg2,2,0,iVar5,3,*(iVar3 + 0x58) + uVar4 * 0xc);
                        if (iVar1 < 0) {
                            return iVar1;
                        }
                        uVar4 = uVar4 + 1;
                    }
                }
            }
            else if (uStackX_8 == 10) {
                *(iVar3 + 0x60) = iVar5;
            }
            if (uStackX_9 == 0) goto code_r0x00021b56;
            iVar5 = iVar5 + uStackX_9 * 4;
        }
    }
    return iVar1;
}


/* fcn.00021b70 @ 0x21b70 */

ulong fcn.00021b70(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    uint64_t noname_1;
    int64_t arg2_00;
    int64_t arg3;
    uint32_t uVar1;
    
    uVar1 = (*(arg2 + 0x12) & 0x3e0) + (*(arg2 + 0x10) >> 0x1b);
    arg3 = *(arg2 + 0xc) * 0x400;
    noname_1 = arg3 + 0x6400 + *(arg2 + 0x79) * *(arg2 + 0xc) * 0x20 + *(arg2 + 0xc) * 0x8000;
    arg2_00 = ((uVar1 & 0x1ff) != 0) + ((noname_1 & 0xfff) != 0) + *(arg2 + 0x70) * uVar1 + (uVar1 >> 9) +
              (noname_1 >> 0xc);
    if ((**0x2d298 & 0x800000) == 0) {
        arg1_00 = *(arg2 + 0x80);
        if (arg1_00 == 0) {
            arg1_00 = fcn.00022c08(arg1,arg2_00,arg3);
            *(arg2 + 0x80) = arg1_00;
            if (arg1_00 == 0) {
                return 0x8000000000000009;
            }
            noname_1 = arg2_00 * 0x1000;
            if (noname_1 == 0) goto code_r0x00021c57;
        }
        fcn.00010330(arg1_00,noname_1,0);
    }
code_r0x00021c57:
    *(arg2 + 0x208) = arg2_00;
    return 0;
}


/* fcn.0002181c @ 0x2181c */

ulong fcn.0002181c(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t noname_1;
    uint32_t uVar4;
    uint16_t uVar5;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar4 = (*(iVar1 + 0x12) & 0x3e0) + (*(iVar1 + 0x10) >> 0x1b);
    if (uVar4 != 0) {
        if (*(iVar1 + 0xf8) == 0) {
            uVar2 = (*(iVar1 + 0xc) + 0x19) * 0x400 + *(iVar1 + 0x79) * *(iVar1 + 0xc) * 0x20 + *(iVar1 + 0xc) * 0x8000
                    + *(iVar1 + 0x80);
            if ((uVar2 & 0xfff) == 0) {
                *(iVar1 + 0xf8) = uVar2;
            }
            else {
                *(iVar1 + 0xf8) = uVar2 + 0x1000 & 0xfffffffffffff000;
            }
            if (*(iVar1 + 0xf8) == 0) {
                return 0x8000000000000009;
            }
            noname_1 = uVar4 * 8;
            if (uVar4 != 0) {
                fcn.00010330(*(iVar1 + 0xf8),noname_1,0);
            }
            uVar2 = *(iVar1 + 0xf8) + noname_1;
            if ((uVar2 & 0xfff) != 0) {
                uVar2 = uVar2 + 0x1000 & 0xfffffffffffff000;
            }
            uVar5 = 0;
            if (uVar4 == 0) {
                return 0;
            }
            do {
                if (uVar2 == 0) {
                    return 0x8000000000000009;
                }
                uVar3 = uVar5;
                uVar5 = uVar5 + 1;
                *(*(iVar1 + 0xf8) + uVar3 * 8) = (*(iVar1 + 0x88) - *(iVar1 + 0x80)) + uVar2;
                uVar2 = uVar2 + *(iVar1 + 0x70) * 0x1000;
            } while (uVar5 < uVar4);
        }
        if (uVar4 != 0) {
            **(iVar1 + 0x80) = (*(iVar1 + 0x88) - *(iVar1 + 0x80)) + *(iVar1 + 0xf8);
        }
    }
    return 0;
}


/* fcn.00022c90 @ 0x22c90 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00022c90(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iStackX_8;
    int64_t *piStackX_20;
    int64_t var_38h;
    uint uStack_28;
    uint uStack_24;
    uint uStack_20;
    uint uStack_1c;
    int32_t var_bp_10h;
    int32_t var_ch;
    int32_t var_bp_8h;
    int32_t var_4h;
    
    piStackX_20 = NULL;
    uStack_28 = 0x3279a703;
    uStack_24 = 0x4cbcba93;
    uStack_20 = 0x2a5c11ad;
    uStack_1c = 0x804ac982;
    iStackX_8 = arg1;
    iVar1 = (**(*0x2d128 + 0x98))(arg1,&uStack_28,&piStackX_20);
    if (iVar1 < 0) {
        iVar1 = (**(*0x2d128 + 0x40))(4,0x10);
        if (iVar1 < 0) {
            return iVar1;
        }
        fcn.00010330(piStackX_20,0x10,0);
        *piStackX_20 = arg2;
        piStackX_20[1] = arg3;
        iVar1 = (**(*0x2d128 + 0x80))(&iStackX_8,&uStack_28,0,piStackX_20);
        if (iVar1 < 0) {
            (**(*0x2d128 + 0x48))(piStackX_20);
        }
    }
    return iVar1;
}


/* fcn.00019994 @ 0x19994 */

int64_t fcn.00019994(void)

{
    if (*0x2d138 == 0) {
        (**(*0x2d128 + 0x140))(0x29440,0,0x2d138);
    }
    return *0x2d138;
}


/* fcn.00028928 @ 0x28928 */

ulong fcn.00028928(int64_t arg1)

{
    char *pcVar1;
    int64_t iVar2;
    char *pcVar3;
    uchar uStackX_8;
    char cStackX_9;
    char cStackX_a;
    char *pcStackX_10;
    ulong uStackX_18;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    
    uStackX_18 = 0;
    var_28h = 0;
    pcVar3 = arg1;
    while( true ) {
        if ((*pcVar3 == '\x7f') && (pcVar3[1] == -1)) {
            return 0;
        }
        if ((*pcVar3 == '\x01') && (pcVar3[1] == '\x01')) break;
        pcVar3 = pcVar3 + *(pcVar3 + 2);
    }
    pcStackX_10 = pcVar3;
    pcVar1 = fcn.0001699c(arg1);
    if (pcVar1 != NULL) {
        pcVar3 = pcVar3 + pcVar1 + (*(pcVar3 + 2) - arg1);
        *pcVar3 = '\x7f';
        pcVar3[1] = -1;
        pcVar3[2] = '\x04';
        pcVar3[3] = '\0';
        pcStackX_10 = pcVar1;
        iVar2 = (**(*0x2d128 + 0xb8))(0x29380,&pcStackX_10,&uStackX_18);
        (**(*0x2d128 + 0x48))(pcVar1);
        if ((((-1 < iVar2) && (iVar2 = (**(*0x2d128 + 0x98))(uStackX_18,0x29380,&var_28h), -1 < iVar2)) &&
            (iVar2 = (**(var_28h + 0x30))(var_28h,0,9,3,&uStackX_8), -1 < iVar2)) &&
           ((cStackX_a == '\x06' && (cStackX_9 == '\x04')))) {
            return 1;
        }
    }
    return 0;
}


/* fcn.00022698 @ 0x22698 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h

void fcn.00022698(void)

{
    ulong uVar1;
    uint32_t uVar2;
    char cVar3;
    int64_t iVar4;
    uint32_t *puVar5;
    uint64_t uVar6;
    int iVar7;
    uint64_t uVar8;
    int iVar9;
    uint64_t uVar10;
    uint32_t auStackX_8 [2];
    int64_t iStackX_10;
    uint64_t uStackX_18;
    ulong *puStackX_20;
    uint32_t var_38h;
    int64_t var_40h;
    uint32_t var_48h;
    int64_t var_50h;
    int64_t aiStack_58 [3];
    int64_t aiStack_40 [2];
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    uStackX_18 = 0;
    aiStack_58[0] = 0;
    uVar8 = 0;
    puStackX_20 = NULL;
    iStackX_10 = 0;
    uVar10 = 0;
    iVar4 = (**(*0x2d128 + 0x140))(0x29320,0,&puStackX_20);
    if (iVar4 < 0) {
        return;
    }
    *0x2d298 = *puStackX_20;
    if (*0x2d298 == NULL) {
        return;
    }
    if ((*(*0x2d298 + 0x921) & 0x10) != 0) {
        *0x29d18 = 4;
    }
    *0x2d2a0 = *(*0x2d298 + 0x6a1);
    if (*0x2d2a0 == 0) {
        return;
    }
    iVar4 = fcn.00019994();
    cVar3 = (**(iVar4 + 0x30))(0x29550,0x49);
    if (cVar3 != '\0') {
        aiStack_58[1] = 0;
        iVar4 = (**(*0x2d128 + 0x140))(0x29570,0,aiStack_58 + 1);
        puVar5 = *0x2d298;
        if (-1 < iVar4) {
            **0x2d298 = **0x2d298 | 0x1400000;
            goto code_r0x00022778;
        }
    }
    puVar5 = *0x2d298;
code_r0x00022778:
    if (*(puVar5 + 0x6cf) == '\0') {
        *puVar5 = *puVar5 | 0x1400000;
    }
    iVar4 = (**(*0x2d128 + 0x138))(2,0x29380,0,&uStackX_18,aiStack_58);
    if ((-1 < iVar4) && (uVar6 = 0, uStackX_18 != 0)) {
        do {
            uVar1 = *(aiStack_58[0] + uVar6 * 8);
            iVar4 = (**(*0x2d128 + 0x98))(uVar1,0x29380,aiStack_58 + 2);
            if ((-1 < iVar4) &&
               ((((iVar4 = (**(aiStack_58[2] + 0x30))(aiStack_58[2],2,8,1,auStackX_8), -1 < iVar4 &&
                  (auStackX_8[0] = auStackX_8[0] >> 8, (auStackX_8[0] - 0xc0320 & 0xffffffef) == 0)) &&
                 (iVar4 = (**(*0x2d128 + 0x98))(uVar1,0x29370,aiStack_40), -1 < iVar4)) &&
                (((*(*0x2d298 + 0x6c9) & 0x400) != 0 || (cVar3 = fcn.00028928(aiStack_40[0]), cVar3 == '\0')))))) {
                puVar5 = *0x2d298;
                if (auStackX_8[0] == 0xc0330) {
                    *(uVar8 * 8 + 0x2eba0) = uVar1;
                    uVar8 = uVar8 + 1;
                }
                if (((auStackX_8[0] == 0xc0320) && ((*(puVar5 + 0x6c9) & 4) != 0)) && ((*puVar5 & 0x200000) != 0)) {
                    *(uVar10 * 8 + 0x2ea00) = uVar1;
                    uVar10 = uVar10 + 1;
                }
            }
            iVar4 = *0x2d2a0;
            uVar6 = uVar6 + 1;
        } while (uVar6 < uStackX_18);
        iVar7 = uVar8;
        iVar9 = uVar10;
        if ((iVar7 != 0) || (iVar9 != 0)) {
            *(*0x2d2a0 + 0x3ca) = iVar7;
            *(iVar4 + 0x3d6) = iVar9;
            iVar4 = fcn.00019994();
            *0x2eb90 = (**(iVar4 + 0x18))(0x29550,0x6b);
            uVar2 = iVar9 * 0x1c + iVar7 * 800;
            if (*0x2eb90 != 0) {
                uVar2 = 0x4000;
            }
            iVar4 = (**(*0x2d128 + 0x40))(*0x29d18,uVar2);
            if (-1 < iVar4) {
                if (uVar2 != 0) {
                    fcn.00010330(iStackX_10,uVar2,0);
                }
                iVar4 = *0x2d2a0;
                if (iVar7 != 0) {
                    *(*0x2d2a0 + 0x3c2) = iStackX_10;
                }
                if (iVar9 != 0) {
                    *(iVar4 + 0x3ce) = iVar7 * 800 + iStackX_10;
                }
            }
        }
    }
    return;
}


/* fcn.00021f70 @ 0x21f70 */

//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Variable defined which should be unmapped: var_38h

void fcn.00021f70(void)

{
    int64_t *arg2;
    int64_t iVar1;
    uint32_t *puVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    int64_t *piVar9;
    uint64_t uVar10;
    int64_t iStackX_8;
    uint64_t uStackX_10;
    int64_t iStackX_18;
    ulong uStackX_20;
    int64_t var_48h_2;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    ulong uStack_88;
    uchar auStack_80 [8];
    int64_t iStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    int64_t iStack_58;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_18h;
    
    uVar8 = 0;
    iStack_68 = 0;
    uStackX_20 = 0;
    uStack_88 = 0;
    if (*0x2d2a0 == 0) {
        return;
    }
    piVar7 = *(*0x2d2a0 + 0x3c2);
    if (piVar7 == NULL) {
        return;
    }
    if ((*(*0x2d298 + 0x6c9) & 8) == 0) {
        return;
    }
    if (*(*0x2d2a0 + 0x3ca) != 0) {
        iStackX_18 = 0;
        piVar9 = piVar7;
        uVar10 = uVar8;
        do {
            iVar4 = iStackX_18;
            uStack_70 = *((0x2eba0 - piVar7) + piVar9);
            iVar3 = (**(*0x2d128 + 0x98))(uStack_70,0x29380,&iStackX_8);
            iVar5 = iStackX_8;
            if (-1 < iVar3) {
                arg2 = piVar7 + *(*0x2d2a0 + 0x3ca) + iVar4;
                iVar4 = (**(iStackX_8 + 0x78))(iStackX_8,0,0,auStack_80);
                if ((-1 < iVar4) && (iVar5 = fcn.00028a3c(&iStack_78,iVar5,auStack_80), -1 < iVar5)) {
                    arg2[0x42] = iStack_78;
                    uStackX_10 = 0;
                    iVar5 = (**(iStackX_8 + 0x30))(iStackX_8,2,0x10,1,&uStackX_10);
                    if (-1 < iVar5) {
                        if ((uStackX_10 & 6) == 4) {
                            (**(iStackX_8 + 0x30))(iStackX_8,2,0x10,2,&uStackX_10);
                        }
                        uStackX_10 = uStackX_10 & 0xffffffffffffff80;
                        iVar5 = (**(iStackX_8 + 0x30))(iStackX_8,1,0,1,arg2 + 100);
                        if (((((-1 < iVar5) &&
                              (iVar5 = (**(iStackX_8 + 0x30))(iStackX_8,1,2,1,arg2 + 0x66), -1 < iVar5)) &&
                             (iVar5 = (**(iStackX_8 + 0x10))(iStackX_8,0,0,0,1,arg2 + 1), -1 < iVar5)) &&
                            ((iVar5 = (**(iStackX_8 + 0x10))(iStackX_8,1,0,2,1,arg2 + 10), -1 < iVar5 &&
                             (iVar5 = (**(iStackX_8 + 0x10))(iStackX_8,2,0,4,1,arg2 + 0xc), -1 < iVar5)))) &&
                           ((iVar5 = (**(iStackX_8 + 0x10))(iStackX_8,2,0,8,1,arg2 + 2), -1 < iVar5 &&
                            (iVar5 = (**(iStackX_8 + 0x10))(iStackX_8,2,0,0xc,1,arg2 + 0x14), -1 < iVar5)))) {
                            iVar5 = (**(iStackX_8 + 0x10))(iStackX_8,2,0,0x10,1,arg2 + 3);
                            if ((((-1 < iVar5) &&
                                 (iVar5 = (**(iStackX_8 + 0x10))(iStackX_8,2,0,0x14,1,arg2 + 0x1c), -1 < iVar5))
                                && (iVar5 = (**(iStackX_8 + 0x10))(iStackX_8,2,0,0x18,1,arg2 + 4), -1 < iVar5)) &&
                               (iVar5 = (**(iStackX_8 + 0x10))(iStackX_8,2,0,0x1c,1,arg2 + 0x24), -1 < iVar5)) {
                                arg2[5] = uStackX_10 + *(arg2 + 1);
                                iVar5 = (**(iStackX_8 + 0x10))(iStackX_8,2,0,*(arg2 + 1) + 8,1,arg2 + 0xe);
                                if (-1 < iVar5) {
                                    *(arg2 + 0x79) = ' ' << (*(arg2 + 3) >> 2 & 1);
                                    (**(iStackX_8 + 0x30))(iStackX_8,0,0x60,1,arg2 + 0xf);
                                    iVar5 = iStackX_8;
                                    iVar4 = fcn.00021c6c(iStackX_8,arg2,uVar10);
                                    if (-1 < iVar4) {
                                        fcn.00021978(iVar5,iStackX_8,arg2);
                                        iVar5 = fcn.00021b70(iStackX_8,arg2);
                                        if (-1 < iVar5) {
                                            *arg2 = uStack_70;
                                            puVar2 = *0x2d298;
                                            *piVar9 = arg2;
                                            if ((*puVar2 & 0x800000) != 0) {
                                                uVar8 = uVar8 + arg2[0x41];
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            iStackX_18 = iStackX_18 + 0x43;
            uVar10 = uVar10 + 1;
            piVar9 = piVar9 + 1;
        } while (uVar10 < *(*0x2d2a0 + 0x3ca));
    }
    iVar5 = iStack_68;
    uVar10 = 0;
    iVar4 = iStack_68;
    if (((**0x2d298 & 0x800000) != 0) && (uVar8 != 0)) {
        piVar9 = &iStackX_8;
        iVar4 = (**(*0x2d128 + 0x98))(*0x2eba0,0x29380);
        if (iVar4 < 0) {
            return;
        }
        if (*0x2eb90 == 0) {
            iVar4 = fcn.00022c08(iStackX_8,uVar8,piVar9);
            if (iVar4 == 0) {
                return;
            }
            uVar8 = uVar8 << 0xc;
            if (uVar8 == 0) goto code_r0x00022474;
        }
        else {
            iVar4 = fcn.00022c08(iStackX_8,*0x2eb90,piVar9);
            if (iVar4 == 0) {
                return;
            }
            uVar8 = *0x2eb90 << 0xc;
            if ((*0x2eb90 & 0xfffff) == 0) goto code_r0x00022474;
        }
        fcn.00010330(iVar4,uVar8,0);
    }
code_r0x00022474:
    if (*(*0x2d2a0 + 0x3ca) != 0) {
        iStackX_18 = 0x2eba0 - piVar7;
        do {
            iVar3 = *(piVar7 + iStackX_18);
            iVar1 = *piVar7;
            if (((**0x2d298 & 0x800000) != 0) && (uVar8 = *(iVar1 + 0x208), uVar8 != 0)) {
                if (*0x2eb90 != 0) {
                    if (*0x2eb90 <= uVar8) {
                        *(iVar1 + 0x208) = 0;
                        *(iVar1 + 0x80) = 0;
                        goto code_r0x000224fc;
                    }
                    *0x2eb90 = *0x2eb90 - uVar8;
                }
                iVar6 = iVar5 * 0x1000;
                iVar5 = iVar5 + uVar8;
                *(iVar1 + 0x80) = iVar6 + iVar4;
            }
code_r0x000224fc:
            if ((*(iVar1 + 0x80) != 0) && (*(iVar1 + 0x208) != 0)) {
                iVar6 = (**(*0x2d128 + 0x98))(iVar3,0x29380,&iStackX_8);
                if (iVar6 < 0) {
                    return;
                }
                if ((**0x2d298 & 0x1000000) == 0) {
code_r0x000225a1:
                    *(iVar1 + 0x88) = *(iVar1 + 0x80);
                    *(iVar1 + 0x90) = 0;
                }
                else {
                    iStack_58 = *(iVar1 + 0x208) << 0xc;
                    iVar6 = (**(iStackX_8 + 0x48))(iStackX_8,2,*(iVar1 + 0x80),&iStack_58,&uStackX_20,&uStack_88);
                    if (iVar6 < 0) goto code_r0x000225a1;
                    *(iVar1 + 0x88) = uStackX_20;
                    *(iVar1 + 0x90) = uStack_88;
                }
                iVar6 = fcn.0002181c(iVar1);
                if (-1 < iVar6) {
                    if (*(iVar1 + 0xf0) == 0) {
                        *(iVar1 + 0xf0) = *(iVar1 + 0x80) + 0x940;
                    }
                    if (*(iVar1 + 0xd8) == 0) {
                        *(iVar1 + 0xd8) = *(iVar1 + 0x80) + 0x6400;
                    }
                    if (*(iVar1 + 0xe0) == 0) {
                        *(iVar1 + 0xe0) = *(iVar1 + 0xc) * 0x400 + *(iVar1 + 0xd8);
                    }
                    if (*(iVar1 + 0xe8) == 0) {
                        *(iVar1 + 0xe8) = *(iVar1 + 0xc) * 0x8000 + *(iVar1 + 0xe0);
                    }
                    if ((*(*0x2d298 + 0x921) & 0x10) == 0) {
                        fcn.00022c90(iVar3,*(iVar1 + 0x80),*(iVar1 + 0x208));
                    }
                }
            }
            uVar10 = uVar10 + 1;
            piVar7 = piVar7 + 1;
        } while (uVar10 < *(*0x2d2a0 + 0x3ca));
    }
    return;
}


/* fcn.00021d70 @ 0x21d70 */

void fcn.00021d70(void)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *puVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    int64_t arg3;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iStackX_8;
    ulong uStackX_10;
    
    iVar1 = 0;
    iVar8 = 0;
    if (*0x2d2a0 == 0) {
        return;
    }
    if (*(*0x2d2a0 + 0x3ce) == 0) {
        return;
    }
    if ((*(*0x2d298 + 0x6c9) & 4) == 0) {
        return;
    }
    if ((**0x2d298 & 0x200000) != 0) {
        if ((**0x2d298 & 0x400000) != 0) {
            piVar6 = &iStackX_8;
            iVar1 = (**(*0x2d128 + 0x98))(*0x2ea00,0x29380);
            if (iVar1 < 0) {
                return;
            }
            iVar8 = 0x21;
            iVar1 = fcn.00022c08(iStackX_8,*(*0x2d2a0 + 0x3d6) * 0x21,piVar6);
            if (iVar1 == 0) {
                return;
            }
        }
        piVar6 = *(*0x2d2a0 + 0x3ce);
        uVar5 = 0;
        if (*(*0x2d2a0 + 0x3d6) != 0) {
            iVar7 = 0;
            piVar4 = piVar6;
            do {
                uStackX_10 = *((0x2ea00 - piVar6) + piVar4);
                iVar2 = (**(*0x2d128 + 0x98))(uStackX_10,0x29380,&iStackX_8);
                if (-1 < iVar2) {
                    puVar3 = iVar7 + *(*0x2d2a0 + 0x3d6) * 8 + piVar6;
                    iVar2 = (**(iStackX_8 + 0x30))(iStackX_8,1,0,1,puVar3 + 1);
                    if (-1 < iVar2) {
                        arg3 = 2;
                        iVar2 = (**(iStackX_8 + 0x30))(iStackX_8,1,2,1,puVar3 + 10);
                        if (-1 < iVar2) {
                            *puVar3 = uStackX_10;
                            if ((**0x2d298 & 0x400000) == 0) {
                                iVar2 = fcn.00022c08(iStackX_8,0x20,arg3);
                            }
                            else {
                                iVar2 = iVar8 * 0x1000 * uVar5 + 0x1000 + iVar1;
                            }
                            *(puVar3 + 0xc) = iVar2;
                            if (iVar2 != 0) {
                                fcn.00010330(iVar2,0x20000,0);
                                *piVar4 = puVar3;
                            }
                        }
                    }
                }
                uVar5 = uVar5 + 1;
                iVar7 = iVar7 + 0x14;
                piVar4 = piVar4 + 1;
            } while (uVar5 < *(*0x2d2a0 + 0x3d6));
        }
        return;
    }
    return;
}


/* fcn.00022970 @ 0x22970 */

void fcn.00022970(void)

{
    uchar *puVar1;
    int64_t iVar2;
    uchar auStackX_8 [8];
    uchar auStackX_10 [24];
    
    if ((((*0x2d2a0 != 0) && (*(*0x2d2a0 + 0x10) != '\0')) && (*(*0x2d2a0 + 8) != 0)) &&
       (puVar1 = **(*0x2d298 + 0x6a1), *(*0x2d298 + 0x766) != '\0')) {
        (**(*0x2d128 + 0x168))(puVar1,0x1f);
        *(puVar1 + 4) = 0;
        iVar2 = *0x2d298;
        puVar1[3] = 2;
        *puVar1 = 0x36;
        auStackX_8[0] = 1;
        auStackX_10[0] = *(iVar2 + 0x71a);
        if ((*0x2d2a8 != NULL) || (iVar2 = (**(*0x2d128 + 0x140))(0x29480,0,0x2d2a8), -1 < iVar2)) {
            (***0x2d2a8)(*0x2d2a8,auStackX_10,auStackX_8,0,0);
        }
    }
    return;
}


/* fcn.00022d98 @ 0x22d98 */

uint64_t fcn.00022d98(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint32_t uVar2;
    bool bVar3;
    
    uVar2 = arg1 & 0xff;
    bVar3 = true;
    if (uVar2 == 1) {
        cVar1 = *0x29d52;
    }
    else if (uVar2 == 2) {
        cVar1 = *0x29d51;
    }
    else if (uVar2 == 3) {
        cVar1 = *0x29d53;
    }
    else {
        cVar1 = *0x29d54;
    }
    if (cVar1 == '\0') {
        bVar3 = false;
    }
    else if (cVar1 == '\x01') {
        bVar3 = arg2 != '\0';
    }
    else if (cVar1 == '\x02') {
        bVar3 = arg2 == '\0';
    }
    return ~-bVar3 & 0x8000000000000003;
}


/* fcn.00022e0c @ 0x22e0c */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00022e0c(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    ulong uVar5;
    uint64_t uStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    uint32_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t iStack_38;
    uint32_t auStack_30 [2];
    uint32_t var_10h;
    int64_t var_8h;
    
    uVar5 = 0;
    iVar1 = (**(*0x2d150 + 0x138))(2,0x29380,0,&uStackX_10,&iStackX_18);
    if (iVar1 < 0) {
        return iVar1;
    }
    uVar4 = 0;
    if (uStackX_10 != 0) {
        do {
            iVar1 = (**(*0x2d150 + 0x98))(*(iStackX_18 + uVar4 * 8),0x29380,&iStack_38);
            if ((-1 < iVar1) && (arg1 == iStack_38)) {
                *0x2d2d0 = *(iStackX_18 + uVar4 * 8);
                break;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < uStackX_10);
    }
    (**(*0x2d150 + 0x48))(iStackX_18);
    if (uVar4 != uStackX_10) {
        iVar1 = (**(*0x2d150 + 0x128))(*0x2d2d0,0x29380,&iStackX_20,&uStackX_10);
        if (iVar1 < 0) {
            return iVar1;
        }
        uVar4 = 0;
        if (uStackX_10 != 0) {
            iVar1 = 0;
            uVar3 = uStackX_10;
            do {
                if ((*(iVar1 + 0x10 + iStackX_20) & 8) != 0) {
                    iVar2 = (**(*0x2d150 + 0x98))(*(iVar1 + 8 + iStackX_20),0x294c0,&iStack_38);
                    if (-1 < iVar2) {
                        uVar5 = *(iStackX_20 + uVar4 * 0x18);
                        break;
                    }
                    uVar3 = uStackX_10;
                }
                uVar4 = uVar4 + 1;
                iVar1 = iVar1 + 0x18;
            } while (uVar4 < uVar3);
        }
        (**(*0x2d150 + 0x48))(iStackX_20);
        if (uVar4 != uStackX_10) {
            iVar1 = (**(*0x2d150 + 0x98))(uVar5,0x295d0,&iStack_38);
            if (-1 < iVar1) {
                return 0;
            }
            (**(*0x2d150 + 0x110))(*0x2d2d0,0,0);
            iVar1 = (**(arg1 + 0x78))(arg1,4,0,auStack_30);
            if (-1 < iVar1) {
                iVar1 = (**(arg1 + 0x78))(arg1,2,auStack_30[0] & 0x700);
                return iVar1;
            }
            return iVar1;
        }
    }
    return -0x7ffffffffffffff2;
}


/* fcn.0002311c @ 0x2311c */

int64_t fcn.0002311c(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    uint64_t *puVar2;
    uint64_t uStackX_8;
    
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*puVar2 <= puVar2[1]) {
        iVar1 = (**(*0x2d150 + 0x40))(4,*puVar2 * 8 + 0x200,&uStackX_8);
        if (iVar1 < 0) {
            return iVar1;
        }
        fcn.00029090(uStackX_8,puVar2[2],puVar2[1] << 3);
        iVar1 = *0x2d150;
        *puVar2 = *puVar2 + 0x40;
        (**(iVar1 + 0x48))(puVar2[2]);
        puVar2[2] = uStackX_8;
    }
    *(puVar2[2] + puVar2[1] * 8) = arg2;
    puVar2[1] = puVar2[1] + 1;
    return 0;
}


/* fcn.0002309c @ 0x2309c */

void fcn.0002309c(void)

{
    int64_t iVar1;
    uint32_t arg1;
    int64_t aiStackX_18 [2];
    uchar auStack_18 [24];
    
    aiStackX_18[1] = 8;
    do {
        iVar1 = (**(*0x2d150 + 0xb0))(1,0,*0x2e9d8,aiStackX_18 + 1,aiStackX_18);
        if (iVar1 < 0) {
            return;
        }
        iVar1 = (**(*0x2d150 + 0x98))(aiStackX_18[0],0x295d0,auStack_18);
        arg1 = 0x2e9c0;
        if (-1 < iVar1) {
            arg1 = 0x2dce0;
        }
        iVar1 = fcn.0002311c(arg1,aiStackX_18[0]);
    } while (-1 < iVar1);
    return;
}


/* fcn.0002356c @ 0x2356c */

uint64_t fcn.0002356c(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    ulong *puVar1;
    int64_t noname_0;
    uint in_R9;
    uint64_t uVar2;
    ulong uStackX_18;
    int64_t in_stack_00000028;
    
    uVar2 = CONCAT44(in_R9,arg4);
    if ((*0x2d509 == '\x01') && (*0x2d550 == '\x01')) {
        if ((uVar2 == 0) &&
           ((((in_stack_00000028 == 1 && (*(arg2 + 3) == '\x06')) && (*(arg2 + 2) == '\x04')) &&
            (noname_0 = arg1, uStackX_18 = arg3,
            arg1 = (**(arg1 + 0x30))(arg1,arg4 + 2,arg4 + 0x18,arg4 + 1,&uStackX_18), -1 < arg1)))) {
            puVar1 = fcn.0001971c(noname_0,arg4 + 0x18);
            arg1 = 0;
            if (puVar1 != NULL) {
                (**(*0x2d128 + 0x168))(puVar1,arg4 + 0x18,0);
                *(puVar1 + 2) = uStackX_18;
                *(puVar1 + 0x11) = uStackX_18._1_1_;
                *(puVar1 + 0x12) = uStackX_18._2_1_;
                *puVar1 = 0x29d58;
                puVar1[1] = *0x29d60;
                **0x29d60 = puVar1;
                arg1 = *0x29d60;
                *0x29d60 = puVar1;
            }
        }
        if (((*(arg2 + 3) == '\x01') && (*(arg2 + 2) == '\b')) && (*(arg2 + 1) == '\x02')) {
            for (puVar1 = *0x29d58; puVar1 != 0x29d58; puVar1 = *puVar1) {
                if ((uVar2 <= *(puVar1 + 0x11)) && (*(puVar1 + 0x12) <= uVar2)) {
                    return 1;
                }
                arg1 = 0;
            }
        }
    }
    return arg1 & 0xffffffffffffff00;
}


/* fcn.000236a0 @ 0x236a0 */

//WARNING: Variable defined which should be unmapped: var_10h

void fcn.000236a0(void)

{
    char cVar1;
    char cVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    char cVar6;
    uint64_t uVar7;
    int64_t arg3;
    uint64_t uVar8;
    ulong uVar9;
    uchar auStackX_8 [2];
    char cStackX_a;
    unkbyte5 StackX_b;
    ushort uStackX_10;
    uchar uStackX_12;
    unkbyte5 StackX_13;
    int64_t iStackX_18;
    int64_t var_28h;
    int64_t var_30h_2;
    uint32_t var_38h_2;
    int64_t iStack_58;
    int64_t iStack_50;
    uint32_t var_40h;
    int64_t var_38h;
    uint32_t var_30h;
    uint32_t var_28h_2;
    uint uStack_2c;
    uint32_t var_bp_20h;
    uint uStack_24;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    
    var_28h_2 = 0x302cb4f;
    uStack_2c = 0x4a16af05;
    var_bp_20h = 0xad31a999;
    uStack_24 = 0x900887cf;
    iVar3 = (**(*0x2d128 + 0x140))(&var_28h_2,0,&iStack_50);
    if (-1 < iVar3) {
        iVar3 = *(iStack_50 + 0x3a);
        iVar4 = (**(*0x2d128 + 0x138))(2,0x29380,0,&var_40h,&uStackX_10);
        if (-1 < iVar4) {
            uVar7 = 0;
            if (_var_40h != 0) {
                do {
                    iVar4 = (**(*0x2d128 + 0x98))
                                      (*(CONCAT53(StackX_13,CONCAT12(uStackX_12,uStackX_10)) + uVar7 * 8),0x29380,
                                       &iStackX_18);
                    if (-1 < iVar4) {
                        iVar4 = (**(iStackX_18 + 0x70))(iStackX_18,&var_38h,&iStack_58,&var_28h,&var_30h);
                        if ((-1 < iVar4) &&
                           ((((var_38h != 0 || (iStack_58 != 0)) || (var_28h != 0x16)) || (_var_30h != 4)))) {
                            arg3 = 8;
                            iVar4 = (**(iStackX_18 + 0x30))(iStackX_18,2,8,1,auStackX_8);
                            if (-1 < iVar4) {
                                iVar4 = var_28h;
                                cVar2 = fcn.0002356c(iStackX_18,auStackX_8,arg3,iStack_58);
                                uVar5 = 0;
                                uVar8 = *(iStack_50 + 0x42) >> 1;
                                cVar6 = StackX_b;
                                if (uVar8 != 0) {
                                    do {
                                        cVar1 = *(iVar3 + 1 + uVar5 * 2);
                                        if (((cVar1 == -1) && (cVar6 == *(iVar3 + uVar5 * 2))) ||
                                           ((cVar6 == *(iVar3 + uVar5 * 2) && (cStackX_a == cVar1)))) break;
                                        uVar5 = uVar5 + 1;
                                    } while (uVar5 < uVar8);
                                }
                                if (((uVar8 <= uVar5) || (cVar2 != '\0')) &&
                                   ((*(iStack_50 + 0x21) != '\0' || ((cVar6 != '\f' || (cStackX_a != '\x03')))))) {
                                    if ((cVar6 == '\x02') && (*(iStack_50 + 0x37) == '\0')) {
                                        uVar9 = 0;
                                    }
                                    else {
                                        uVar9 = 1;
                                    }
                                    (**(*0x2d128 + 0x108))
                                              (*(CONCAT53(StackX_13,CONCAT12(uStackX_12,uStackX_10)) + uVar7 * 8),0,
                                               0,uVar9,iVar4);
                                }
                            }
                        }
                    }
                    uVar7 = uVar7 + 1;
                } while (uVar7 < _var_40h);
            }
            (**(*0x2d128 + 0x48))(CONCAT53(StackX_13,CONCAT12(uStackX_12,uStackX_10)));
        }
    }
    return;
}


/* fcn.00027688 @ 0x27688 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

uint64_t fcn.00027688(int64_t arg1)

{
    bool bVar1;
    char cVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t uVar5;
    char *pcVar6;
    char *pcStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    uint uStack_38;
    uint uStack_34;
    uint uStack_30;
    uint uStack_2c;
    int64_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    pcStackX_8 = NULL;
    bVar1 = false;
    iVar3 = (**(*0x2d150 + 0x98))(*(arg1 + 0x50),0x29370,&pcStackX_8);
    if (iVar3 < 0) {
        pcStackX_8 = *(arg1 + 0x20);
    }
    if (pcStackX_8 == NULL) {
        uVar5 = 0xffffffff;
    }
    else {
        pcVar6 = pcStackX_8;
        if (*pcStackX_8 != '\x7f') {
            do {
                if (*pcVar6 == '\x03') {
                    cVar2 = pcVar6[1];
                    if (cVar2 == '\x05') {
                        bVar1 = true;
                    }
                    if (cVar2 == '\x0f') {
                        return 0x1d;
                    }
                    if (((cVar2 == '\v') || (cVar2 == '\f')) || (cVar2 == '\r')) {
                        return (-bVar1 & 0xfffffffd) + 0x22;
                    }
                    if (cVar2 == '\x1a') {
                        return 0x23;
                    }
                }
                else if (*pcVar6 == '\x04') {
                    if (bVar1) {
                        if (pcVar6[1] == '\x01') {
                            iVar3 = (**(*0x2d150 + 0xb8))(0x294f0,&pcStackX_8,&iStackX_10);
                            if (-1 < iVar3) {
                                uVar4 = fcn.000152b8(iStackX_10);
                                cVar2 = fcn.00023fc8(uVar4);
                                return (cVar2 != '\0') + 0x1d;
                            }
                        }
                        else if (pcVar6[1] == '\x02') {
                            return 0x21;
                        }
                    }
                    else {
                        if (*(arg1 + 0x50) == 0) {
code_r0x000277bd:
                            cVar2 = '\0';
                        }
                        else {
                            uStack_38 = 0x964e5b21;
                            uStack_34 = 0x11d26459;
                            uStack_30 = 0xa000398e;
                            uStack_2c = 0x3b7269c9;
                            iVar3 = (**(*0x2d150 + 0x98))(*(arg1 + 0x50),&uStack_38,&iStackX_18);
                            if (((iVar3 < 0) || (*(*(iStackX_18 + 8) + 4) != '\0')) ||
                               (iVar3 = (**(*0x2d150 + 0x98))(*(arg1 + 0x50),0x29370,&iStackX_20), iVar3 < 0))
                            goto code_r0x000277bd;
                            cVar2 = fcn.00014a20(iStackX_20,0);
                        }
                        if (cVar2 != '\0') {
                            return 0x1d;
                        }
                        if (pcVar6[1] == '\x01') {
                            uVar5 = fcn.000275d8(arg1);
                            if (uVar5 != 0x26) {
                                return uVar5;
                            }
                        }
                        else if (pcVar6[1] == '\x02') {
                            return 0x1c;
                        }
                    }
                }
                pcVar6 = pcVar6 + *(pcVar6 + 2);
            } while (*pcVar6 != '\x7f');
            if ((bVar1) && (iVar3 = (**(*0x2d150 + 0xb8))(0x294f0,&pcStackX_8,&iStackX_10), -1 < iVar3)) {
                uVar4 = fcn.000152b8(iStackX_10);
                iVar3 = (**(*0x2d150 + 0x98))(uVar4,0x29660,&iStackX_18);
                if (-1 < iVar3) {
                    uVar5 = (*(*(iStackX_18 + 8) + 0x18) + 1) * *(*(iStackX_18 + 8) + 0xc);
                    if (uVar5 < 0x1dcd744240) {
                        return (-(uVar5 < 531000000) & 0xfffffff7) + 0x1e;
                    }
                    return 0x1d;
                }
            }
        }
        uVar5 = 0x26;
    }
    return uVar5;
}


/* fcn.00023fc8 @ 0x23fc8 */

ulong fcn.00023fc8(ulong param_1)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t auStackX_10 [3];
    
    iVar1 = (**(*0x2d150 + 0x98))(param_1,0x29660,auStackX_10);
    if ((iVar1 < 0) || (0x1dcd74423f < (*(*(auStackX_10[0] + 8) + 0x18) + 1) * *(*(auStackX_10[0] + 8) + 0xc))) {
        uVar2 = 0;
    }
    else {
        uVar2 = 1;
    }
    return uVar2;
}


/* fcn.000271f0 @ 0x271f0 */

ushort fcn.000271f0(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    char *pcVar3;
    char *pcVar4;
    uint32_t auStackX_10 [2];
    uint32_t auStackX_18 [2];
    char *pcStackX_20;
    int64_t aiStack_28 [2];
    
    iVar2 = (**(*0x2d150 + 0x98))(arg1,0x29370,&pcStackX_20);
    if (-1 < iVar2) {
        pcVar3 = NULL;
        pcVar4 = NULL;
        for (; cVar1 = *pcStackX_20, cVar1 != '\x7f'; pcStackX_20 = pcStackX_20 + *(pcStackX_20 + 2)) {
            if (cVar1 == '\x01') {
                if (pcStackX_20[1] == '\x01') {
                    pcVar4 = pcStackX_20;
                }
            }
            else if (cVar1 == '\x03') {
                pcVar3 = pcStackX_20;
            }
        }
        iVar2 = (**(*0x2d150 + 0x98))(arg1,0x291d0,aiStack_28);
        if ((-1 < iVar2) && (iVar2 = (**(aiStack_28[0] + 0x28))(aiStack_28[0],auStackX_10,auStackX_18), -1 < iVar2))
        {
            if ((pcVar3 != NULL) && (pcVar3[1] == '\x01')) {
                if ((pcVar4 != NULL) && (pcVar4[4] == '\x05')) {
                    auStackX_18[0] = auStackX_18[0] + 2;
                }
                return *((auStackX_10[0] + auStackX_18[0] * 2) * 2 + 0x2ce28);
            }
            return auStackX_10[0];
        }
    }
    return 0xff;
}


/* fcn.00014448 @ 0x14448 */

void fcn.00014448(void)

{
    ulong *puVar1;
    char *arg1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *puVar4;
    bool bVar5;
    
    puVar1 = *0x2fa28;
    while (puVar4 = puVar1, puVar4 != NULL) {
        puVar1 = *puVar4;
        arg1 = puVar4[4];
        if ((*arg1 == '\x01') && (arg1[1] == '\x04')) {
            iVar2 = fcn.0001a41c(0x29888,arg1 + 4,0x10);
            if (iVar2 == 0) {
                uVar3 = fcn.00019fb0(arg1);
                if (uVar3 < puVar4[5]) {
                    iVar2 = puVar4[5] - uVar3;
                    puVar4[5] = iVar2;
                    fcn.00029090(arg1,arg1 + uVar3,iVar2);
                    if (puVar4[4] == NULL) {
                        bVar5 = puVar4[0xc] != 0;
                    }
                    else {
                        bVar5 = *puVar4[4] == '\x05';
                    }
                    if (!bVar5) {
                        *(puVar4 + 2) = *(puVar4 + 2) & 0xfffffff7;
                    }
                }
            }
        }
    }
    return;
}


/* fcn.000241c0 @ 0x241c0 */

//WARNING: Variable defined which should be unmapped: var_16h
//WARNING: Variable defined which should be unmapped: var_1eh
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Variable defined which should be unmapped: var_38h

void fcn.000241c0(void)

{
    uint32_t uVar1;
    uint32_t *puVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    char16_t *pcVar5;
    uint32_t *puVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    uint32_t *puVar9;
    uint16_t uVar10;
    char16_t *pcVar11;
    uint32_t *puVar12;
    int64_t *piVar13;
    uint64_t uVar14;
    uint16_t uVar15;
    uint32_t *puVar16;
    ulong uVar17;
    uint64_t uVar18;
    uint16_t uVar19;
    bool bVar20;
    uint64_t uStackX_8;
    uint16_t uStackX_10;
    uint16_t uStackX_18;
    uint16_t uStackX_20;
    int64_t var_48h;
    int16_t var_50h;
    int16_t var_58h;
    int16_t var_60h;
    uint32_t uStack_88;
    int64_t iStack_80;
    uint32_t *puStack_78;
    ulong uStack_70;
    uint32_t *puStack_68;
    ushort uStack_60;
    ulong uStack_5e;
    uchar auStack_56 [6];
    uint32_t var_48h_2;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int16_t var_bp_20h;
    int64_t var_1eh;
    int64_t var_16h;
    
    puVar6 = NULL;
    iStack_80 = 0;
    puVar2 = puVar6;
    puVar12 = puVar6;
    if (*0x2fa20 == 0) {
code_r0x00024723:
        (**(*0x2d158 + 0x58))(L"UefiDevOrder",0x29d90,0,0,0);
        iVar3 = 0;
        puVar4 = NULL;
        uVar17 = 0;
    }
    else {
        puVar2 = fcn.00019ef4(*0x2fa20 * 2);
        if (puVar2 == NULL) {
            return;
        }
        iVar3 = fcn.0001a1ec(0x2c4d8,0x29d90,0,&iStack_80);
        if (iVar3 < 0) {
            iStack_80 = 0;
        }
        puStack_78 = NULL;
        puVar12 = puStack_78;
        puVar4 = fcn.00019ef4((*0x2fa20 + 1) * 10);
        puVar6 = puVar4;
        puStack_68 = puVar4;
        if (puVar4 == NULL) goto code_r0x00024754;
        uStackX_20 = 0;
        do {
            if (*(uStackX_20 * 7 + *0x2d308) == 0) break;
            uVar19 = *(uStackX_20 * 7 + *0x2d308);
            *puVar4 = uVar19;
            *(puVar4 + 1) = 2;
            uStackX_10 = 0;
            iVar3 = iStack_80;
            puVar6 = puVar12;
            if (puVar12 < puVar12 + iStack_80) {
                do {
                    uStack_88 = uVar19;
                    if ((uVar19 == *puVar12) && (uStackX_18 = 0, (puVar12[1] - 2 & 0xfffffffffffffffc) != 0)) {
                        uStackX_8 = 0;
                        do {
                            uVar10 = 0xffff;
                            piVar13 = *0x2fa28;
                            uVar15 = uStackX_8;
                            if (*0x2fa28 != NULL) {
                                do {
                                    uStack_60 = 0;
                                    uStack_5e = 0;
                                    piVar8 = *piVar13;
                                    uVar10 = uVar10 + 1;
                                    _auStack_56 = 0;
                                    uStack_70 = 0;
                                    if (piVar13[4] == NULL) {
                                        bVar20 = piVar13[0xc] != 0;
                                    }
                                    else {
                                        bVar20 = *piVar13[4] == '\x05';
                                    }
                                    if ((((!bVar20) && (*(piVar13 + 0x69) == '\0')) && (*(puVar2 + uVar10 * 2) == 0)) &&
                                       (uVar1 = fcn.00027688(piVar13), uVar1 == uStack_88)) {
                                        if ((piVar13[0xc] == 0) && (piVar13[10] == 0)) {
                                            pcVar11 = L"USB Entry for Windows To Go";
                                            for (pcVar5 = piVar13[3]; (*pcVar5 != L'\0' && (*pcVar5 == *pcVar11));
                                                pcVar5 = pcVar5 + 1) {
                                                pcVar11 = pcVar11 + 1;
                                            }
                                            if (*pcVar5 != *pcVar11) goto code_r0x00024459;
                                        }
                                        fcn.000188f8(&uStack_60,0x12,0x2a108,*(piVar13 + 8));
                                        iVar3 = (**(*0x2d158 + 0x48))(&uStack_60,0x291a0,0,&uStack_70,0);
                                        if ((iVar3 == -0x7ffffffffffffffb) &&
                                           (piVar13[8] == *(puVar12 + uStackX_8 * 4 + 6))) {
                                            *(puVar4 + 1) = puVar4[1] + 4;
                                            *(puVar4 + uStackX_10 * 4 + 6) = *(piVar13 + 8);
                                            uStackX_10 = uStackX_10 + 1;
                                            *(puVar2 + uVar10 * 2) = 0xffff;
                                        }
                                    }
code_r0x00024459:
                                    piVar13 = piVar8;
                                } while (piVar8 != NULL);
                                uVar15 = uStackX_18;
                            }
                            uStackX_18 = uVar15 + 1;
                            uStackX_8 = uStackX_18;
                        } while (uStackX_8 < puVar12[1] - 2 >> 2);
                        iVar3 = iStack_80;
                        puVar6 = puStack_78;
                    }
                    puVar12 = puVar12 + puVar12[1] + 4;
                } while (puVar12 < puVar6 + iVar3);
            }
            uStack_88 = uVar19;
            uVar19 = 0xffff;
            piVar13 = *0x2fa28;
            puVar12 = puVar6;
            if (*0x2fa28 != NULL) {
                do {
                    uVar19 = uVar19 + 1;
                    piVar8 = *piVar13;
                    if (piVar13[4] == NULL) {
                        bVar20 = piVar13[0xc] != 0;
                    }
                    else {
                        bVar20 = *piVar13[4] == '\x05';
                    }
                    if (((!bVar20) && (*(piVar13 + 0x69) == '\0')) && (*(puVar2 + uVar19 * 2) == 0)) {
                        if ((piVar13[0xc] == 0) && (piVar13[10] == 0)) {
                            pcVar11 = L"USB Entry for Windows To Go";
                            for (pcVar5 = piVar13[3]; (*pcVar5 != L'\0' && (*pcVar5 == *pcVar11)); pcVar5 = pcVar5 + 1)
                            {
                                pcVar11 = pcVar11 + 1;
                            }
                            if (*pcVar5 != *pcVar11) goto code_r0x00024588;
                        }
                        uVar1 = fcn.00027688(piVar13);
                        if (uVar1 == uStack_88) {
                            *(puVar4 + 1) = puVar4[1] + 4;
                            *(puVar4 + uStackX_10 * 4 + 6) = *(piVar13 + 8);
                            uStackX_10 = uStackX_10 + 1;
                            *(puVar2 + uVar19 * 2) = 0xffff;
                        }
                    }
code_r0x00024588:
                    piVar13 = piVar8;
                } while (piVar8 != NULL);
                puVar12 = puStack_78;
            }
            if (2 < puVar4[1]) {
                uVar14 = puVar4[1] - 2 >> 2;
                piVar13 = *0x2fa28;
                while( true ) {
                    piVar8 = piVar13;
                    uVar19 = 0;
                    if (piVar8 == NULL) break;
                    piVar13 = *piVar8;
                    if (uVar14 != 0) {
                        puVar6 = puVar4 + 6;
                        uVar18 = uVar14 & 0xffff;
                        do {
                            if (*puVar6 == piVar8[8]) {
                                if ((*(piVar8 + 2) & 1) == 0) {
                                    *puVar6 = *puVar6 | 0xff000000;
                                }
                                else {
                                    *(puVar6 + 2) = 0;
                                }
                            }
                            puVar6 = puVar6 + 1;
                            uVar18 = uVar18 - 1;
                        } while (uVar18 != 0);
                    }
                }
                puVar6 = fcn.00019ef4(puVar4[1] + 4);
                if (puVar6 != NULL) {
                    *puVar6 = *puVar4;
                    *(puVar6 + 1) = puVar4[1];
                    if (uVar14 != 0) {
                        uVar14 = uVar14 & 0xffff;
                        puVar9 = puVar4 + 6;
                        puVar16 = puVar9;
                        uVar18 = uVar14;
                        do {
                            if ((*puVar16 & 0xff000000) == 0) {
                                uVar7 = uVar19;
                                uVar19 = uVar19 + 1;
                                *(puVar6 + uVar7 * 4 + 6) = *puVar16;
                            }
                            puVar16 = puVar16 + 1;
                            uVar18 = uVar18 - 1;
                        } while (uVar18 != 0);
                        do {
                            if ((*puVar9 & 0xff000000) != 0) {
                                uVar18 = uVar19;
                                uVar19 = uVar19 + 1;
                                *(puVar6 + uVar18 * 4 + 6) = *puVar9;
                            }
                            puVar9 = puVar9 + 1;
                            uVar14 = uVar14 - 1;
                        } while (uVar14 != 0);
                    }
                    (**(*0x2d150 + 0x160))(puVar4,puVar6);
                    (**(*0x2d150 + 0x48))(puVar6);
                }
                puVar4 = puVar4 + puVar4[1] + 4;
            }
            uStackX_20 = uStackX_20 + 1;
        } while (uStackX_20 < 6);
        puVar6 = puStack_68;
        iVar3 = puVar4 - puStack_68;
        if (iVar3 == 0) goto code_r0x00024723;
        (**(*0x2d158 + 0x58))(L"UefiDevOrder",0x29d90,7,iVar3,puStack_68);
        uVar17 = 7;
        puVar4 = puVar6;
    }
    (**(*0x2d158 + 0x58))(L"OriUefiDevOrder",0x29d90,uVar17,iVar3,puVar4);
code_r0x00024754:
    if (puVar2 != NULL) {
        (**(*0x2d150 + 0x48))(puVar2);
    }
    if (puVar6 != NULL) {
        (**(*0x2d150 + 0x48))(puVar6);
    }
    if (puVar12 != NULL) {
        (**(*0x2d150 + 0x48))(puVar12);
    }
    return;
}


/* fcn.00024c2c @ 0x24c2c */

void fcn.00024c2c(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *puVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    uint16_t uVar5;
    ulong *puVar6;
    uint64_t uVar7;
    bool bVar8;
    int64_t iStackX_18;
    uint32_t *puStackX_20;
    
    puStackX_20 = NULL;
    iStackX_18 = 0;
    iVar3 = fcn.0001a1ec(0x2c4d8,0x29d90,0,&iStackX_18);
    if (-1 < iVar3) {
        puVar4 = puStackX_20;
        if (puStackX_20 < iStackX_18 + puStackX_20) {
            do {
                if ((arg1 == *puVar4) && (uVar5 = 0, (puVar4[1] - 2 & 0xfffffffffffffffc) != 0)) {
                    uVar7 = 0;
                    do {
                        puVar2 = *0x2fa28;
                        do {
                            puVar6 = puVar2;
                            if (puVar6 == NULL) goto code_r0x00024cff;
                            if (puVar6[4] == NULL) {
                                bVar8 = puVar6[0xc] != 0;
                            }
                            else {
                                bVar8 = *puVar6[4] == '\x05';
                            }
                            puVar2 = *puVar6;
                        } while ((bVar8) || (*(puVar6 + 8) != *(puVar4 + uVar7 * 4 + 6)));
                        if ((*(puVar6 + 2) & 1) != 0) {
                            iVar1 = *arg2;
                            *(puVar6 + 0x44) = iVar1;
                            *arg2 = iVar1 + 0x100;
                        }
code_r0x00024cff:
                        uVar5 = uVar5 + 1;
                        uVar7 = uVar5;
                    } while (uVar7 < puVar4[1] - 2 >> 2);
                }
                puVar4 = puVar4 + puVar4[1] + 4;
            } while (puVar4 < iStackX_18 + puStackX_20);
        }
        if (puStackX_20 != NULL) {
            (**(*0x2d150 + 0x48))(puStackX_20);
        }
    }
    return;
}


/* fcn.00024b38 @ 0x24b38 */

void fcn.00024b38(int64_t arg1,int64_t arg2)

{
    int iVar1;
    char *pcVar2;
    int16_t iVar3;
    ulong *puVar4;
    ulong *puVar5;
    bool bVar6;
    
    iVar3 = arg1;
    puVar4 = *0x2fa28;
    do {
        puVar5 = puVar4;
        puVar4 = *0x2fa28;
        if (puVar5 == NULL) goto code_r0x00024b82;
        puVar4 = *puVar5;
    } while ((*(puVar5[4] + 4) != iVar3) || (*(puVar5 + 0x69) == '\0'));
    iVar1 = *arg2;
    *(puVar5 + 0x44) = iVar1;
    *(puVar5 + 2) = *(puVar5 + 2) | 1;
    puVar4 = *0x2fa28;
    *arg2 = iVar1 + 0x100;
code_r0x00024b82:
    if (puVar4 != NULL) {
        do {
            pcVar2 = puVar4[4];
            puVar5 = *puVar4;
            if (pcVar2 == NULL) {
                bVar6 = puVar4[0xc] != 0;
            }
            else {
                bVar6 = *pcVar2 == '\x05';
            }
            if ((((bVar6) && (*(puVar4 + 0x69) == '\0')) && ((*(puVar4 + 2) & 1) != 0)) && (*(pcVar2 + 4) == iVar3)) {
                iVar1 = *arg2;
                *(puVar4 + 0x44) = iVar1;
                *arg2 = iVar1 + 0x100;
            }
            puVar4 = puVar5;
        } while (puVar5 != NULL);
        puVar4 = *0x2fa28;
        while (puVar5 = puVar4, puVar5 != NULL) {
            pcVar2 = puVar5[4];
            puVar4 = *puVar5;
            if (pcVar2 == NULL) {
                bVar6 = puVar5[0xc] != 0;
            }
            else {
                bVar6 = *pcVar2 == '\x05';
            }
            if (((bVar6) && (*(puVar5 + 0x69) == '\0')) && (((*(puVar5 + 2) & 1) == 0 && (*(pcVar2 + 4) == iVar3)))) {
                iVar1 = *arg2;
                *(puVar5 + 0x44) = iVar1;
                *arg2 = iVar1 + 0x100;
            }
        }
    }
    return;
}


/* fcn.0002479c @ 0x2479c */

void fcn.0002479c(void)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint16_t uVar4;
    uint16_t *puVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint16_t *puVar8;
    uint64_t uVar9;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    
    if (*0x2fa20 == 0) {
        (**(*0x2d158 + 0x58))(L"FboLegacyDevOrder",0x29d90,7,0,0);
        (**(*0x2d158 + 0x58))(L"OriFboLegacyDevOrder",0x29d90,7,0,0);
    }
    else {
        fcn.00013bd4(0x2fa20,0x13e00);
        fcn.000144ec(&uStackX_8,&iStackX_10);
        uVar1 = fcn.00019ef4(iStackX_10);
        if (uVar1 == 0) {
            uVar1 = uStackX_8;
        }
        else {
            (**(*0x2d150 + 0x160))(uVar1,uStackX_8,iStackX_10);
            uVar7 = uStackX_8;
            for (uVar6 = uVar1; uVar6 < uVar1 + iStackX_10; uVar6 = uVar6 + *(uVar6 + 4) + 4) {
                uVar4 = 0;
                uVar2 = *(uVar6 + 4) - 2 >> 1;
                if (uVar2 != 0) {
                    uVar2 = uVar2 & 0xffff;
                    puVar5 = uVar7 + 6;
                    puVar8 = puVar5;
                    uVar9 = uVar2;
                    do {
                        if ((*puVar8 & 0xff00) == 0) {
                            uVar3 = uVar4;
                            uVar4 = uVar4 + 1;
                            *(uVar6 + 6 + uVar3 * 2) = *puVar8;
                        }
                        puVar8 = puVar8 + 1;
                        uVar9 = uVar9 - 1;
                    } while (uVar9 != 0);
                    do {
                        if ((*puVar5 & 0xff00) != 0) {
                            uVar9 = uVar4;
                            uVar4 = uVar4 + 1;
                            *(uVar6 + 6 + uVar9 * 2) = *puVar5;
                        }
                        puVar5 = puVar5 + 1;
                        uVar2 = uVar2 - 1;
                    } while (uVar2 != 0);
                }
                uVar7 = uVar7 + 4 + *(uVar7 + 4);
            }
            (**(*0x2d158 + 0x58))(L"FboLegacyDevOrder",0x29d90,7,iStackX_10,uVar1);
            (**(*0x2d158 + 0x58))(L"OriFboLegacyDevOrder",0x29d90,7,iStackX_10,uVar1);
            (**(*0x2d150 + 0x48))(uStackX_8);
        }
        (**(*0x2d150 + 0x48))(uVar1);
    }
    return;
}


/* fcn.00013684 @ 0x13684 */

void fcn.00013684(void)

{
    ulong *puVar1;
    ulong *puVar2;
    
    puVar1 = *0x2fa28;
    while (puVar2 = puVar1, puVar2 != NULL) {
        puVar1 = *puVar2;
        if (((*(puVar2 + 0x69) == '\0') && (puVar2[0xc] == 0)) && (puVar2[10] == 0)) {
            fcn.00013614(0x2fa20,puVar2);
        }
    }
    return;
}


/* fcn.00023d74 @ 0x23d74 */

uint16_t fcn.00023d74(int64_t arg1,uint32_t arg2)

{
    uint16_t uVar1;
    uint16_t uVar2;
    
    uVar1 = *arg1;
    uVar2 = 0;
    while( true ) {
        if (uVar1 == 0) {
            return 0xffff;
        }
        if (uVar1 == arg2) break;
        uVar2 = uVar2 + 1;
        uVar1 = *(uVar2 * 7 + arg1);
    }
    return uVar2;
}


/* fcn.00024d54 @ 0x24d54 */

uint32_t fcn.00024d54(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    
    uVar4 = 0;
    if (arg2 != 0) {
        do {
            uVar3 = 0;
            if (arg4 != 0) {
                iVar1 = *(arg1 + uVar4 * 2);
                do {
                    if (((iVar1 != -1) && (uVar2 = *(arg3 + uVar3 * 4), (uVar2 & 0xff000000) == 0)) && (iVar1 == uVar2)
                       ) {
                        *(arg1 + uVar4 * 2) = 0xffff;
                        *(arg3 + uVar3 * 4) = 0xffffffff;
                        return uVar2;
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 < arg4);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < arg2);
    }
    return 0xffffffff;
}


/* fcn.000256b8 @ 0x256b8 */

//WARNING: Removing unreachable block (ram,0x00025f32)
//WARNING: Removing unreachable block (ram,0x000257a9)

int64_t fcn.000256b8(void)

{
    bool bVar1;
    int64_t arg1;
    char *pcVar2;
    int16_t iVar3;
    int iVar4;
    int64_t iVar5;
    char16_t *noname_0;
    uint64_t uVar6;
    uint16_t uVar7;
    uint64_t uVar8;
    uint16_t *puVar9;
    uint32_t uVar10;
    uint16_t uVar11;
    uint32_t *puVar12;
    uint16_t uVar13;
    uint64_t uVar14;
    int16_t *piVar15;
    uint32_t *puVar16;
    ushort *puVar17;
    int16_t *piVar18;
    uint32_t *puVar19;
    char *pcVar20;
    uint64_t uVar21;
    int64_t iVar22;
    uint64_t uStackX_8;
    uint auStackX_10 [2];
    char *pcStackX_18;
    int64_t iStackX_20;
    int16_t var_60h;
    int64_t var_bp_68h;
    int64_t var_70h;
    int64_t var_78h;
    uint64_t uStack_120;
    int64_t iStack_118;
    int64_t iStack_110;
    uint32_t *puStack_108;
    ulong uStack_100;
    uint8_t *puStack_f8;
    ulong uStack_f0;
    uint64_t uStack_e8;
    uint16_t auStack_e0 [20];
    uchar auStack_b8 [32];
    uint32_t auStack_98 [12];
    int64_t var_60h_2;
    int64_t var_bp_40h;
    
    iVar22 = 0;
    uStack_120 = 0;
    puVar19 = NULL;
    uStackX_8 = uStackX_8 & 0xffffffffffff0000;
    uStack_f0 = 0;
    iStackX_20 = 0;
    uStack_100 = 0;
    pcStackX_18 = NULL;
    puStack_108 = NULL;
    if (*0x2d310 != '\0') {
        return 0;
    }
    iVar5 = fcn.0001a1ec(0x2cd68,0x29d90,auStackX_10,&uStack_f0);
    if (-1 < iVar5) {
        noname_0 = L"BootOrder";
        iVar5 = fcn.0001a1ec(0x2a0f0,0x291a0,0,&uStack_120);
        if (-1 < iVar5) {
            iVar22 = fcn.0001971c(noname_0,uStack_120);
            iStack_110 = iVar22;
            if (iVar22 == 0) {
                if (pcStackX_18 != NULL) {
                    (**(*0x2d150 + 0x48))();
                }
                return -0x7ffffffffffffff7;
            }
            (**(*0x2d150 + 0x160))(iVar22,0);
            pcVar20 = pcStackX_18;
            uVar21 = uStack_120 >> 1;
            puVar19 = NULL;
            uStack_e8 = uVar21;
            if (*pcStackX_18 == '\x01') {
                iStack_118 = fcn.0001a1ec(0x2c4d8,0x29d90,0,&iStackX_20);
                puVar12 = puStack_108;
                uVar8 = 0;
                puVar19 = puStack_108;
                if (-1 < iStack_118) {
                    uVar11 = 0;
                    if (uVar21 != 0) {
                        do {
                            fcn.000188f8(auStack_b8,0x12,0x2a108,*(uVar8 * 2));
                            uStack_100 = 0;
                            puStack_f8 = NULL;
                            iStack_118 = fcn.0001a1ec(auStack_b8,0x291a0,0,&uStack_100);
                            if (-1 < iStack_118) {
                                puVar19 = puVar12;
                                if (puVar12 < iStackX_20 + puVar12) {
                                    do {
                                        uVar6 = 0;
                                        uVar14 = puVar19[1] - 2 >> 2;
                                        if (uVar14 != 0) {
                                            piVar18 = puVar19 + 6;
                                            do {
                                                if (*piVar18 == *(uVar8 * 2)) {
                                                    if ((*puStack_f8 & 1) == 0) {
                                                        puVar16 = puVar19 + uVar6 * 4 + 6;
                                                        *puVar16 = *puVar16 | 0xff000000;
                                                    }
                                                    else {
                                                        *(puVar19 + uVar6 + 2) = 0;
                                                    }
                                                    break;
                                                }
                                                uVar6 = uVar6 + 1;
                                                piVar18 = piVar18 + 2;
                                            } while (uVar6 < uVar14);
                                        }
                                        puVar19 = puVar19 + puVar19[1] + 4;
                                    } while (puVar19 < iStackX_20 + puVar12);
                                }
                                if (puStack_f8 != NULL) {
                                    (**(*0x2d150 + 0x48))(puStack_f8);
                                }
                            }
                            uVar11 = uVar11 + 1;
                            uVar8 = uVar11;
                        } while (uVar8 < uVar21);
                        pcVar20 = pcStackX_18;
                        iVar22 = iStack_110;
                    }
                    puVar19 = puVar12;
                    if (puVar12 < iStackX_20 + puVar12) {
                        do {
                            fcn.00029090(auStack_98,puVar12 + 6,puVar12[1] - 2);
                            uVar7 = 0;
                            uVar8 = puVar12[1] - 2 >> 2;
                            uVar11 = uVar7;
                            if (uVar8 != 0) {
                                do {
                                    iVar4 = fcn.00024d54(iVar22,uVar21,auStack_98,uVar8);
                                    if (iVar4 == -1) break;
                                    uVar6 = uVar11;
                                    uVar11 = uVar11 + 1;
                                    *(puVar12 + uVar6 * 4 + 6) = iVar4;
                                } while (uVar11 < uVar8);
                                puVar19 = puStack_108;
                            }
                            if (uVar8 != 0) {
                                uVar6 = 0;
                                uVar13 = uVar7;
                                do {
                                    uVar10 = auStack_98[uVar6];
                                    if (((uVar10 & 0xff000000) == 0) && (uVar10 != 0xffffffff)) {
                                        uVar14 = uVar11;
                                        uVar11 = uVar11 + 1;
                                        *(puVar12 + uVar14 * 4 + 6) = uVar10;
                                        auStack_98[uVar6] = 0xffffffff;
                                    }
                                    uVar13 = uVar13 + 1;
                                    uVar6 = uVar13;
                                } while (uVar6 < uVar8);
                            }
                            if (uVar8 != 0) {
                                uVar6 = 0;
                                do {
                                    if (auStack_98[uVar6] != 0xffffffff) {
                                        uVar14 = uVar11;
                                        uVar11 = uVar11 + 1;
                                        *(puVar12 + uVar14 * 4 + 6) = auStack_98[uVar6];
                                        auStack_98[uVar6] = 0xffffffff;
                                    }
                                    uVar7 = uVar7 + 1;
                                    uVar6 = uVar7;
                                } while (uVar6 < uVar8);
                            }
                            puVar12 = puVar12 + puVar12[1] + 4;
                        } while (puVar12 < iStackX_20 + puVar19);
                        pcVar20 = pcStackX_18;
                    }
                    (**(*0x2d158 + 0x58))(L"UefiDevOrder",0x29d90,7,iStackX_20,puVar19);
                    (**(*0x2d158 + 0x58))(L"OriUefiDevOrder",0x29d90,7,iStackX_20,puVar19);
                }
                pcVar2 = pcStackX_18;
                arg1 = *0x2d308;
                uVar8 = 0;
                iVar5 = iStack_118;
                if (*pcVar20 == '\x01') {
                    uVar7 = 0;
                    uVar11 = uStackX_8;
                    piVar18 = pcStackX_18 + 0x11;
                    if (uVar21 != 0) {
                        puVar12 = iStackX_20 + puVar19;
                        uVar10 = uStackX_8;
                        do {
                            bVar1 = false;
                            if (puVar19 < puVar12) {
                                do {
                                    uVar21 = 0;
                                    if (bVar1) break;
                                    uVar6 = puVar19[1] - 2 >> 2;
                                    if (uVar6 != 0) {
                                        piVar15 = puVar19 + 6;
                                        do {
                                            if (bVar1) break;
                                            if (*piVar15 == *(uVar8 * 2)) {
                                                uVar10 = *puVar19;
                                                bVar1 = true;
                                            }
                                            uVar21 = uVar21 + 1;
                                            piVar15 = piVar15 + 2;
                                        } while (uVar21 < uVar6);
                                    }
                                    puVar19 = puVar19 + puVar19[1] + 4;
                                } while (puVar19 < puVar12);
                                puVar19 = puStack_108;
                                uVar11 = uStackX_8;
                            }
                            uVar13 = 0;
                            if (uVar11 != 0) {
                                do {
                                    if (uVar10 == auStack_e0[uVar13]) break;
                                    uVar13 = uVar13 + 1;
                                } while (uVar13 < uVar11);
                            }
                            if (uVar13 == uVar11) {
                                uVar21 = uVar11;
                                uVar11 = uVar11 + 1;
                                uStackX_8 = CONCAT62(uStackX_8._2_6_,uVar11);
                                auStack_e0[uVar21] = uVar10;
                            }
                            uVar7 = uVar7 + 1;
                            uVar8 = uVar7;
                        } while (uVar8 < uStack_e8);
                    }
                    uVar21 = 0;
                    uVar7 = 0;
                    if (uVar11 != 0) {
                        puVar9 = auStack_e0;
                        uVar8 = uVar11;
                        do {
                            uVar6 = *puVar9;
                            uVar14 = 0;
                            do {
                                iVar3 = fcn.00023d74(arg1,uVar6);
                                uVar11 = uVar14;
                                if ((iVar3 != -1) && (piVar18[uVar14 & 0xffff] == iVar3)) {
                                    piVar18[uVar14 & 0xffff] = -1;
                                    break;
                                }
                                uVar11 = uVar11 + 1;
                                uVar14 = uVar11;
                            } while (uVar11 < 6);
                            if (uVar11 == 6) {
                                *puVar9 = 0xffff;
                            }
                            puVar9 = puVar9 + 1;
                            uVar8 = uVar8 - 1;
                        } while (uVar8 != 0);
                        uVar7 = uStackX_8;
                    }
                    iVar22 = 6;
                    do {
                        if ((*piVar18 == -1) && (uVar8 = 0, uVar7 != 0)) {
                            do {
                                if (auStack_e0[uVar8] != 0xffff) {
                                    iVar3 = fcn.00023d74(arg1,auStack_e0[uVar8]);
                                    if (iVar3 != -1) {
                                        *piVar18 = iVar3;
                                    }
                                    auStack_e0[uVar8 & 0xffff] = 0xffff;
                                    break;
                                }
                                uVar11 = uVar8 + 1;
                                uVar8 = uVar11;
                            } while (uVar11 < uVar7);
                        }
                        piVar18 = piVar18 + 1;
                        iVar22 = iVar22 + -1;
                        uVar7 = uStackX_8;
                    } while (iVar22 != 0);
                    (**(*0x2d158 + 0x58))(L"FixedBootPriorities",0x29d90,auStackX_10[0],uStack_f0,pcVar2);
                    pcVar20 = pcStackX_18;
                    if (*pcVar2 == '\x01') {
                        uStackX_8 = 0;
                        uVar11 = 0;
                        iStack_118 = (**(*0x2d150 + 0x40))(4,uStack_120,&uStackX_8);
                        pcVar20 = pcStackX_18;
                        if (-1 < iStack_118) {
                            uVar13 = 0;
                            iVar22 = iStackX_20;
                            uVar7 = uVar11;
                            do {
                                puVar12 = puVar19;
                                if (puVar19 < puVar19 + iVar22) {
                                    do {
                                        iVar3 = fcn.00023d74(*0x2d308,*puVar12);
                                        if (iVar3 != -1) {
                                            if (*(pcVar20 + uVar13 * 2 + 0x11) == iVar3) {
                                                uVar8 = 0;
                                                if ((puVar12[1] - 2 & 0xfffffffffffffffc) != 0) {
                                                    puVar16 = puVar12 + 6;
                                                    do {
                                                        if ((*puVar16 & 0xff000000) == 0) {
                                                            *(puVar16 + 2) = 0;
                                                            uVar6 = uVar7;
                                                            uVar7 = uVar7 + 1;
                                                            *(uStackX_8 + uVar6 * 2) = *puVar16;
                                                        }
                                                        else {
                                                            *(uVar21 * 2) = *puVar16;
                                                            uVar21 = uVar21 + 1;
                                                        }
                                                        uVar8 = uVar8 + 1;
                                                        puVar16 = puVar16 + 1;
                                                        uVar11 = uVar11 + 1;
                                                        iVar22 = iStackX_20;
                                                        pcVar20 = pcStackX_18;
                                                    } while (uVar8 < puVar12[1] - 2 >> 2);
                                                }
                                            }
                                        }
                                        puVar12 = puVar12 + puVar12[1] + 4;
                                    } while (puVar12 < puVar19 + iVar22);
                                }
                                uVar13 = uVar13 + 1;
                            } while (uVar13 < 6);
                            if (uVar21 != 0) {
                                puVar17 = NULL;
                                do {
                                    *(puVar17 + uStackX_8 + uVar7 * 2) = *puVar17;
                                    uVar21 = uVar21 - 1;
                                    puVar17 = puVar17 + 1;
                                } while (uVar21 != 0);
                            }
                            if (uVar11 != uStack_e8) {
                                if (uStack_e8 != 0) {
                                    uVar21 = 0;
                                    uVar7 = 0;
                                    do {
                                        uVar8 = 0;
                                        uVar13 = 0;
                                        do {
                                            if (*(uVar21 * 2) == *(uStackX_8 + uVar8 * 2)) goto code_r0x00025e90;
                                            uVar13 = uVar13 + 1;
                                            uVar8 = uVar13;
                                        } while (uVar8 < uStack_e8);
                                        uVar8 = uVar11;
                                        uVar11 = uVar11 + 1;
                                        *(uStackX_8 + uVar8 * 2) = *(uVar21 * 2);
code_r0x00025e90:
                                        uVar7 = uVar7 + 1;
                                        uVar21 = uVar7;
                                    } while (uVar21 < uStack_e8);
                                }
                            }
                            (**(*0x2d158 + 0x58))(L"BootOrder",0x291a0,7,uStack_120,uStackX_8);
                            if (uStackX_8 != 0) {
                                (**(*0x2d150 + 0x48))();
                            }
                        }
                    }
                    iVar5 = iStack_118;
                    iVar22 = iStack_110;
                }
            }
            goto code_r0x00025f09;
        }
    }
    pcVar20 = pcStackX_18;
code_r0x00025f09:
    if (pcVar20 != NULL) {
        (**(*0x2d150 + 0x48))(pcVar20);
    }
    if (puVar19 != NULL) {
        (**(*0x2d150 + 0x48))(puVar19);
    }
    if (iVar22 != 0) {
        (**(*0x2d150 + 0x48))(iVar22);
    }
    return iVar5;
}


/* fcn.00027050 @ 0x27050 */

void fcn.00027050(void)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int iVar7;
    uint32_t arg2;
    uint auStackX_8 [2];
    ulong uStackX_10;
    ulong uStackX_18;
    
    uStackX_10 = 0;
    uStackX_18 = 0;
    iVar3 = fcn.0001a1ec(0x2cd68,0x29d90,auStackX_8,&uStackX_18);
    uVar2 = uStackX_10;
    if (-1 < iVar3) {
        iVar1 = uStackX_10;
        iVar7 = 7;
        uVar4 = fcn.00026fe0(iVar1 + 1,7,7);
        arg2 = iVar7 - 1;
        uVar5 = fcn.00026fe0(iVar1 + 0x11,arg2,arg2);
        uVar6 = fcn.00026fe0(iVar1 + 0x1f,arg2 + 7,arg2 + 7);
        if ((uVar6 | uVar4 | uVar5) == 0x800000000000000d) {
            (**(*0x2d158 + 0x58))(L"FixedBootPriorities",0x29d90,auStackX_8[0],uStackX_18,uVar2);
        }
    }
    return;
}


/* fcn.00026fe0 @ 0x26fe0 */

uint64_t fcn.00026fe0(uint32_t arg1,uint32_t arg2,uint32_t arg3)

{
    int16_t *piVar1;
    uint in_register_0000000c;
    uint16_t uVar2;
    uint16_t uVar3;
    uint64_t uVar4;
    uint16_t uVar5;
    
    uVar4 = 0;
    if (CONCAT44(in_register_0000000c,arg1) == 0) {
        return 0;
    }
    uVar5 = 0;
    uVar3 = arg3;
    if (uVar3 != 0) {
        do {
            if (*(CONCAT44(in_register_0000000c,arg1) + uVar5 * 2) == 0xff) break;
            uVar5 = uVar5 + 1;
        } while (uVar5 < uVar3);
    }
    uVar2 = arg2;
    if (uVar5 != uVar2) {
        if (uVar2 != 0) {
            piVar1 = CONCAT44(in_register_0000000c,arg1);
            do {
                *piVar1 = uVar4;
                uVar5 = uVar4 + 1;
                uVar4 = uVar5;
                piVar1 = piVar1 + 1;
            } while (uVar5 < uVar2);
        }
        if (uVar4 < uVar3) {
            *(CONCAT44(in_register_0000000c,arg1) + uVar4 * 2) = 0xff;
        }
        uVar4 = 0x800000000000000d;
    }
    return uVar4;
}


/* fcn.000272d0 @ 0x272d0 */

void fcn.000272d0(int64_t arg1)

{
    char cVar1;
    ulong *puVar2;
    ulong uVar3;
    bool bVar4;
    ulong *puVar5;
    ulong *arg1_00;
    ushort uVar6;
    uint16_t uVar7;
    ulong *puVar8;
    int64_t iVar9;
    char *pcVar10;
    int iVar11;
    bool bVar12;
    char *pcStackX_10;
    
    pcStackX_10 = NULL;
    puVar5 = NULL;
    puVar2 = *0x2fa28;
joined_r0x000272fb:
    do {
        arg1_00 = puVar2;
        if (arg1_00 == NULL) {
            return;
        }
        bVar4 = false;
        puVar2 = *arg1_00;
    } while (*(arg1_00 + 0x69) != '\0');
    puVar8 = fcn.00019ef4(0x20);
    if (puVar5 == NULL) {
        *arg1 = puVar8;
    }
    else {
        puVar5[3] = puVar8;
    }
    uVar3 = arg1_00[3];
    *(puVar8 + 0xc) = 0xffffffff;
    *puVar8 = uVar3;
    *(puVar8 + 10) = 0xff;
    pcVar10 = arg1_00[4];
    if (pcVar10 == NULL) {
        bVar12 = arg1_00[0xc] != 0;
    }
    else {
        bVar12 = *pcVar10 == '\x05';
    }
    puVar5 = puVar8;
    if (bVar12) goto code_r0x00027361;
    puVar8[2] = pcVar10;
    iVar11 = 0;
    uVar6 = fcn.00027688(arg1_00);
    pcVar10 = puVar8[2];
    *(puVar8 + 1) = uVar6;
    for (; cVar1 = *pcVar10, cVar1 != '\x7f'; pcVar10 = pcVar10 + *(pcVar10 + 2)) {
        if (cVar1 == '\x02') {
            if (pcVar10[1] == '\x01') {
                iVar11 = *(pcVar10 + 8);
            }
        }
        else if ((cVar1 == '\x01') && (pcVar10[1] == '\x01')) {
            *(puVar8 + 0xc) = (pcVar10[5] << 3 | pcVar10[4]) << 8 | iVar11 << 0x10;
            break;
        }
    }
    goto code_r0x00027419;
code_r0x00027361:
    iVar9 = (**(*0x2d150 + 0x98))(*(arg1_00[0xc] + 0x3d),0x29370,&pcStackX_10);
    if (-1 < iVar9) {
        puVar8[2] = pcStackX_10;
        *(puVar8 + 1) = *(arg1_00 + 9) & 0xff;
        iVar9 = arg1_00[0xc];
        *(puVar8 + 0xc) = ((*(iVar9 + 2) << 5 | *(iVar9 + 6)) << 3 | *(iVar9 + 10)) << 8;
code_r0x00027419:
        for (pcStackX_10 = puVar8[2]; *pcStackX_10 != '\x7f'; pcStackX_10 = pcStackX_10 + *(pcStackX_10 + 2)) {
            if (*pcStackX_10 == '\x03') {
                if (pcStackX_10[1] == '\x12') {
                    uVar7 = *(pcStackX_10 + 4);
code_r0x00027452:
                    *(puVar8 + 10) = uVar7;
                    break;
                }
                if (pcStackX_10[1] == '\x05') {
                    if (bVar4) {
                        uVar7 = pcStackX_10[4];
                        goto code_r0x00027452;
                    }
                    bVar4 = true;
                }
            }
        }
    }
    goto joined_r0x000272fb;
}


/* fcn.00013420 @ 0x13420 */

void fcn.00013420(void)

{
    char *arg1;
    ulong *puVar1;
    ulong *puVar2;
    char cVar3;
    uint16_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    int iVar9;
    bool bVar10;
    
    iVar9 = 0x100;
    puVar1 = *0x2fa28;
    while( true ) {
        puVar2 = puVar1;
        if (puVar2 == NULL) {
            return;
        }
        arg1 = puVar2[4];
        puVar1 = *puVar2;
        if (arg1 == NULL) {
            bVar10 = puVar2[0xc] != 0;
        }
        else {
            bVar10 = *arg1 == '\x05';
        }
        if (!bVar10) break;
        if (arg1 == NULL) {
            uVar4 = fcn.0002401c(puVar2[0xc]);
        }
        else {
            uVar4 = *(arg1 + 4);
        }
        if (uVar4 - 1 < 6) {
            iVar5 = uVar4 - 1;
        }
        else {
            iVar5 = (uVar4 != 0x80) + 6;
        }
        uVar7 = *(iVar5 * 4 + 0x2a570);
code_r0x000134d9:
        if (uVar7 != 0xffffffff) {
code_r0x000134de:
            uVar8 = 0;
            uVar6 = 7;
            do {
                iVar5 = uVar8;
                if ((uVar7 & 0xffff) == uVar6) goto code_r0x000134fd;
                uVar8 = iVar5 + 1;
                uVar6 = *(uVar8 * 4 + 0x2a4f0);
            } while (uVar6 != 0xffffffff);
            iVar5 = -1;
code_r0x000134fd:
            if (uVar7 - 7 < 2) {
                uVar7 = uVar7 + iVar9;
                iVar9 = iVar9 + 1;
            }
            *(puVar2 + 9) = iVar5 << 0x10 | uVar7;
        }
    }
    cVar3 = fcn.00013384(arg1);
    if (cVar3 == '\0') {
        uVar7 = 7;
        goto code_r0x000134d9;
    }
    uVar7 = 8;
    goto code_r0x000134de;
}


/* fcn.000275d8 @ 0x275d8 */

ushort fcn.000275d8(int64_t arg1)

{
    int16_t iVar1;
    int64_t iVar2;
    int64_t arg1_00;
    uint16_t uVar3;
    int64_t iVar4;
    int64_t iStackX_10;
    
    iVar2 = (**(*0x2d150 + 0x140))(0x29d90,0,&iStackX_10);
    uVar3 = 0;
    if ((-1 < iVar2) && (iVar2 = (**(iStackX_10 + 0x30))(), iVar2 != 0)) {
        do {
            iVar4 = uVar3 * 7;
            if (*(iVar4 + 6 + iVar2) == '\b') {
                if (*(iVar4 + 4 + iVar2) == 0xff) {
code_r0x0002767a:
                    return *(uVar3 * 7 + iVar2);
                }
                arg1_00 = fcn.000152b8(*(arg1 + 0x50));
                iVar1 = fcn.000271f0(arg1_00);
                if (*(iVar4 + 4 + iVar2) == iVar1) goto code_r0x0002767a;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < 6);
    }
    return 0x26;
}


/* fcn.00027d00 @ 0x27d00 */

ulong fcn.00027d00(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    ulong uVar2;
    uint in_register_00000014;
    uint64_t uVar3;
    uint64_t uVar4;
    char acStack_28 [40];
    
    acStack_28[0] = '\0';
    acStack_28[1] = '\0';
    acStack_28[2] = '\0';
    acStack_28[3] = '\0';
    acStack_28[4] = '\0';
    acStack_28[5] = '\0';
    acStack_28[6] = '\0';
    acStack_28[7] = '\0';
    acStack_28[8] = '\0';
    acStack_28[9] = '\0';
    acStack_28[10] = '\0';
    acStack_28[0xb] = '\0';
    acStack_28[0xc] = '\0';
    acStack_28[0xd] = '\0';
    acStack_28[0xe] = '\0';
    acStack_28[0xf] = '\0';
    acStack_28[0x10] = '\0';
    acStack_28[0x11] = 0;
    if ((arg1 == 0) || (CONCAT44(in_register_00000014,arg2) == 0)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar3 = 0;
        if (CONCAT44(in_register_00000014,arg2) != 0) {
            do {
                if ((*(uVar3 + arg1) != '\x12') &&
                   ((uVar4 = *(uVar3 + arg1), CONCAT44(in_register_00000014,arg2) <= uVar4 ||
                    (cVar1 = acStack_28[uVar4], acStack_28[uVar4] = cVar1 + '\x01', cVar1 != '\0')))) {
                    return 0x8000000000000003;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < CONCAT44(in_register_00000014,arg2));
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00027d74 @ 0x27d74 */

//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h

void fcn.00027d74(int64_t arg1)

{
    uint8_t uVar1;
    ulong *puVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint32_t *puVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t *piVar9;
    int64_t *piVar10;
    uint32_t *puVar11;
    int iVar12;
    char *pcVar13;
    ulong *puVar14;
    uint32_t *arg2;
    uint16_t uVar15;
    uint32_t *arg1_00;
    uint32_t *puVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint8_t *puVar20;
    bool bVar21;
    int64_t iStackX_10;
    uint32_t *puStackX_18;
    uint64_t uStackX_20;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    char acStack_60 [32];
    int64_t var_28h;
    int64_t var_bp_20h;
    
    iVar8 = *0x2d308;
    iVar5 = *0x2d300;
    puStackX_18 = NULL;
    if (*(arg1 + 0x20) == 0) {
        iVar8 = fcn.0001a1ec(0x2ccc8,0x29d90,0,&iStackX_10);
        if (iVar8 < 0) {
            return;
        }
        piVar9 = fcn.00019ef4(0x90);
        puVar11 = puStackX_18;
        if (piVar9 != NULL) {
            puVar16 = puStackX_18;
            if (puStackX_18 < iStackX_10 + puStackX_18) {
                do {
                    uVar3 = fcn.00023d74(iVar5,*puVar16);
                    if (uVar3 != 0xffff) {
                        uVar17 = puVar16[1] - 2 >> 1;
                        uVar15 = uVar17;
                        uVar17 = uVar17 & 0xffff;
                        puVar20 = *arg1 + uVar3 * 0x12;
                        iVar8 = fcn.00027d00(puVar20,uVar17);
                        uVar18 = 0;
                        if (-1 < iVar8) {
                            puVar14 = *0x2fa28;
                            if (*0x2fa28 != NULL) {
                                do {
                                    puVar2 = *puVar14;
                                    pcVar13 = puVar14[4];
                                    if (pcVar13 == NULL) {
                                        bVar21 = puVar14[0xc] != 0;
                                    }
                                    else {
                                        bVar21 = *pcVar13 == '\x05';
                                    }
                                    if ((bVar21) && (*(puVar14 + 0x69) == '\0')) {
                                        if (0x11 < uVar15) break;
                                        if (*(pcVar13 + 4) == *puVar16) {
                                            piVar9[uVar18] = puVar14;
                                            uVar18 = uVar18 + 1;
                                        }
                                        else if (uVar18 != 0) break;
                                    }
                                    puVar14 = puVar2;
                                } while (puVar2 != NULL);
                                puVar11 = puStackX_18;
                            }
                            if (uVar17 != uVar18) break;
                            iVar12 = *(*piVar9 + 0x44);
                            if (uVar15 != 0) {
                                uVar18 = uVar17;
                                do {
                                    if ((*puVar20 < 0x12) && (*puVar20 < uVar15)) {
                                        uVar1 = *puVar20;
                                        *(piVar9[uVar1] + 0x10) = *(piVar9[uVar1] + 0x10) | 1;
                                        *(piVar9[uVar1] + 0x44) = iVar12;
                                        iVar12 = iVar12 + 0x100;
                                        piVar9[uVar1] = 0;
                                    }
                                    puVar20 = puVar20 + 1;
                                    uVar18 = uVar18 - 1;
                                } while (uVar18 != 0);
                                piVar10 = piVar9;
                                do {
                                    if (*piVar10 != 0) {
                                        puVar6 = *piVar10 + 0x10;
                                        *puVar6 = *puVar6 & 0xfffffffe;
                                        *(*piVar10 + 0x44) = iVar12;
                                        iVar12 = iVar12 + 0x100;
                                    }
                                    piVar10 = piVar10 + 1;
                                    uVar17 = uVar17 - 1;
                                } while (uVar17 != 0);
                            }
                        }
                    }
                    puVar16 = puVar16 + puVar16[1] + 4;
                } while (puVar16 < iStackX_10 + puVar11);
            }
            (**(*0x2d150 + 0x48))(piVar9);
        }
    }
    else {
        puVar16 = NULL;
        iVar5 = fcn.0001a1ec(0x2cca8,0x29d90,0,&iStackX_10);
        if (iVar5 < 0) {
            return;
        }
        uStackX_20 = *arg1;
        puVar6 = fcn.00019ef4(iStackX_10);
        uVar18 = uStackX_20;
        puVar11 = puStackX_18;
        if (puVar6 != NULL) {
            arg2 = puStackX_18;
            arg1_00 = puVar6;
            if (puStackX_18 < iStackX_10 + puStackX_18) {
                do {
                    uVar4 = *arg2;
                    uVar3 = fcn.00023d74(iVar8,uVar4);
                    if (uVar3 != 0xffff) {
                        puVar20 = uVar18 + (uVar3 + 0x12) * 0x12;
                        uStackX_20 = arg2[1] - 2 >> 2;
                        uVar19 = uStackX_20 & 0xffff;
                        uVar17 = uVar19;
                        iVar5 = fcn.00027d00(puVar20,uVar19);
                        if (iVar5 < 0) {
                            puVar16 = arg2[1] + 4;
                            fcn.00029090(arg1_00,arg2,puVar16);
                        }
                        else {
                            *arg1_00 = uVar4;
                            puVar16 = CONCAT71(puVar16 >> 8,1);
                            *(arg1_00 + 1) = arg2[1];
                            fcn.0002903e(acStack_60,uVar17,puVar16);
                            uVar3 = 0;
                            if (uStackX_20 != 0) {
                                uVar17 = uVar19;
                                do {
                                    if ((*puVar20 < 0x12) && (*puVar20 < uStackX_20)) {
                                        uVar1 = *puVar20;
                                        uVar7 = uVar3;
                                        uVar3 = uVar3 + 1;
                                        *(arg1_00 + uVar7 * 4 + 6) = *(arg2 + uVar1 * 4 + 6);
                                        acStack_60[uVar1] = '\0';
                                    }
                                    puVar20 = puVar20 + 1;
                                    uVar17 = uVar17 - 1;
                                } while (uVar17 != 0);
                                pcVar13 = acStack_60;
                                puVar16 = arg2 + 6;
                                do {
                                    if (*pcVar13 != '\0') {
                                        uVar17 = uVar3;
                                        uVar3 = uVar3 + 1;
                                        *(arg1_00 + uVar17 * 4 + 6) = *puVar16 | 0xff000000;
                                    }
                                    pcVar13 = pcVar13 + 1;
                                    puVar16 = puVar16 + 1;
                                    uVar19 = uVar19 - 1;
                                } while (uVar19 != 0);
                            }
                        }
                    }
                    arg2 = arg2 + arg2[1] + 4;
                    arg1_00 = arg1_00 + arg1_00[1] + 4;
                } while (arg2 < iStackX_10 + puVar11);
            }
            (**(*0x2d158 + 0x58))(L"UefiDevOrder",0x29d90,7,iStackX_10,puVar6);
            if (puVar6 < puVar6 + iStackX_10) {
                iVar5 = iStackX_10;
                puVar16 = puVar6;
                do {
                    uVar3 = 0;
                    puVar14 = *0x2fa28;
                    uVar18 = 0;
                    if ((puVar16[1] - 2 & 0xfffffffffffffffc) != 0) {
                        do {
                            while( true ) {
                                iVar5 = iStackX_10;
                                puVar2 = puVar14;
                                iStackX_10 = iVar5;
                                if (puVar2 == NULL) break;
                                puVar14 = *puVar2;
                                if (puVar2[4] == NULL) {
                                    bVar21 = puVar2[0xc] != 0;
                                }
                                else {
                                    bVar21 = *puVar2[4] == '\x05';
                                }
                                if ((!bVar21) && (*(puVar2 + 8) == *(puVar16 + uVar18 * 4 + 6))) {
                                    uVar4 = fcn.00027688(puVar2);
                                    if (uVar4 == *puVar16) {
                                        if ((*(puVar16 + uVar18 * 4 + 6) & 0xff000000) == 0) {
                                            *(puVar2 + 2) = *(puVar2 + 2) | 1;
                                        }
                                        else {
                                            *(puVar2 + 2) = *(puVar2 + 2) & 0xfffffffe;
                                        }
                                    }
                                }
                            }
                            uVar3 = uVar3 + 1;
                            puVar14 = *0x2fa28;
                            uVar18 = uVar3;
                        } while (uVar3 < puVar16[1] - 2 >> 2);
                    }
                    puVar16 = puVar16 + puVar16[1] + 4;
                } while (puVar16 < puVar6 + iVar5);
                puVar11 = puStackX_18;
            }
            (**(*0x2d150 + 0x48))(puVar6);
        }
    }
    (**(*0x2d150 + 0x48))(puVar11);
    return;
}


/* fcn.00028224 @ 0x28224 */

void fcn.00028224(uint32_t arg1)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint in_register_0000000c;
    int64_t *arg1_00;
    uint64_t uVar3;
    uint16_t *puVar4;
    uint32_t *puVar5;
    int64_t iVar6;
    uint16_t uVar7;
    uint64_t uVar8;
    int64_t arg1_01;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar6 = *arg1_00;
    if ((((iVar6 != 0) && (arg1_00[1] != 0)) && (puVar5 = arg1_00[2], puVar5 != NULL)) && (7 < arg1_00[3])) {
        uVar7 = 0;
        arg1_01 = *0x2d300;
        if (arg1_00[4] != 0) {
            iVar6 = iVar6 + 0x144;
            arg1_01 = *0x2d308;
        }
        if (arg1_00[3] != 0) {
            do {
                uVar2 = fcn.00023d74(arg1_01,*puVar5);
                if (uVar2 == 0xffff) {
                    uVar1 = puVar5[1];
                    uVar3 = uVar1 - 6 & 0xfffffffffffffffe;
                }
                else {
                    uVar1 = puVar5[1];
                    uVar8 = uVar1 - 6 >> 1;
                    uVar3 = 0;
                    if (uVar8 != 0) {
                        puVar4 = puVar5 + 6;
                        do {
                            if (*puVar4 != *((uVar2 + uVar2 * 8) * 2 + iVar6 + uVar3)) {
                                fcn.00027d74(arg1_00);
                                return;
                            }
                            uVar3 = uVar3 + 1;
                            puVar4 = puVar4 + 1;
                        } while (uVar3 < uVar8);
                    }
                    uVar3 = uVar3 * 2;
                }
                uVar7 = uVar7 + uVar1;
                puVar5 = puVar5 + uVar3 + 6;
            } while (uVar7 < arg1_00[3]);
        }
    }
    return;
}


/* fcn.0001a9d4 @ 0x1a9d4 */

int64_t fcn.0001a9d4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iStackX_18;
    
    iStackX_18 = 0;
    *arg3 = 0;
    if (arg4 != 0) {
        *arg4 = 0;
    }
    iVar1 = (**(*0x2d130 + 0x48))(arg1,arg2,0,&iStackX_18,*arg3);
    if (iVar1 == -0x7ffffffffffffffb) {
        iVar1 = fcn.000196e8(iStackX_18);
        *arg3 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x2d130 + 0x48))(arg1,arg2,0,&iStackX_18,iVar1);
            if (iVar1 < 0) {
                (**(*0x2d128 + 0x48))(*arg3);
                *arg3 = 0;
            }
            if (arg4 != 0) {
                *arg4 = iStackX_18;
            }
        }
    }
    return iVar1;
}


/* fcn.00028aec @ 0x28aec */

uint64_t fcn.00028aec(int32_t arg_78h)

{
    ulong uVar1;
    int64_t iVar2;
    uint64_t *arg1;
    uint64_t *arg1_00;
    uint64_t *puVar3;
    uint64_t *puStackX_8;
    uint uStack_18;
    uint uStack_14;
    
    arg1 = *0x2d320;
    if (*0x2d320 == 0) {
        uStack_18 = 0x48;
        uStack_14 = 0xe;
        iVar2 = (**(*0x2d128 + 0x40))(6,0x68,&puStackX_8);
        arg1_00 = puStackX_8;
        if (iVar2 < 0) {
            arg1_00 = NULL;
        }
        puStackX_8 = arg1_00;
        fcn.00028d40(arg1_00);
        iVar2 = (**(*0x2d128 + 0x40))(6,0x78,&puStackX_8);
        arg1 = puStackX_8;
        if (iVar2 < 0) {
            arg1 = NULL;
        }
        if (arg1 == NULL) {
            arg1 = 0x2d330;
        }
        else {
            puVar3 = 0x2d430;
            if (arg1_00 != NULL) {
                puVar3 = arg1_00;
            }
            puStackX_8 = arg1;
            if (arg1 != 0x2d3b0) {
                section..text(arg1,0x2d3b0,0x78);
            }
            *(arg1 + 1) = *(arg1 + 1) | 1;
            *arg1 = puVar3;
            *(arg1 + 4) = 0;
            if (puVar3[1] != NULL) {
                (*puVar3[1])(arg1,&uStack_18);
            }
        }
        *0x2d320 = arg1;
        *(arg1 + 0xc) = *(arg1 + 0xc) & 0xffff0fff | 0xff0000;
        uVar1 = *0x296e8;
        *(arg1 + 0x10) = *0x296e0;
        *(arg1 + 0x18) = uVar1;
    }
    return -(*(arg1 + 0x70) != 0) & arg1;
}


/* fcn.00028c0c @ 0x28c0c */

//WARNING: Variable defined which should be unmapped: var_5h
//WARNING: Variable defined which should be unmapped: var_1fh

void fcn.00028c0c(uint32_t *arg1)

{
    char cVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    uint *puVar4;
    int32_t var_bh;
    int16_t var_1fh;
    int8_t var_27h;
    int16_t in_stack_00000028;
    int64_t in_stack_00000030;
    uint uStack_88;
    int16_t aiStack_82 [21];
    uint32_t uStack_58;
    ulong uStack_54;
    ulong uStack_4c;
    uchar auStack_44 [3];
    int64_t var_39h;
    char acStack_28 [23];
    int32_t var_9h;
    int64_t var_5h;
    
    if (arg1 != 0x2d330) {
        puVar4 = &uStack_88;
        uVar2 = arg1[3] & 0xffff80;
        uStack_58 = uVar2 | 0x1000042;
        if ((arg1[3] & 0xff0000) == 0xff0000) {
            uStack_54 = *(arg1 + 4);
            uStack_4c = *(arg1 + 6);
            puVar4 = &stack0xffffffffffffff7c;
            uStack_88 = *0x2d050;
        }
        if (uStack_58 < '\0') {
            _auStack_44 = arg1[8];
            arg1[8] = _auStack_44 + 1;
            *puVar4 = *0x2d054;
            puVar4 = puVar4 + 1;
        }
        if (in_stack_00000028 == 0) {
            uVar3 = 0;
            do {
                cVar1 = *(uVar3 + in_stack_00000030);
                acStack_28[uVar3] = cVar1;
                if (cVar1 == '\0') break;
                uVar3 = uVar3 + 1;
            } while (uVar3 < 0x18);
            if ((uVar3 < 0x18) && (0x18 - uVar3 != 0)) {
                fcn.00010300(acStack_28 + uVar3,0x18 - uVar3);
            }
            *puVar4 = *0x2d068;
        }
        else {
            uStack_58 = uVar2 | 0x1000242;
            *puVar4 = *0x2d064;
            puVar4[1] = *0x2d06c;
            *(puVar4 + 6) = in_stack_00000028;
            puVar4 = puVar4 + 1;
        }
        puVar4[1] = *0x2d090;
        (**(*arg1 + 0x18))(arg1,&uStack_88,&uStack_58);
    }
    return;
}


/* fcn.00028d40 @ 0x28d40 */

void fcn.00028d40(int64_t arg1)

{
    uint *arg1_00;
    
    arg1_00 = 0x2d430;
    if (arg1 != 0) {
        arg1_00 = arg1;
    }
    if (arg1_00 != 0x2d3b0) {
        section..text(arg1_00,0x2d3b0,0x68);
    }
    arg1_00[1] = 0xffffffff;
    *(arg1_00 + 6) = 0x28e74;
    *arg1_00 = 0x10900;
    *(arg1_00 + 0x18) = 0;
    *(arg1_00 + 2) = 0x28d94;
    *(arg1_00 + 4) = 0x11a14;
    *(arg1_00 + 8) = 0x28e38;
    *(arg1_00 + 10) = 0x28e30;
    *(arg1_00 + 0xc) = 0x28e40;
    *(arg1_00 + 0xe) = 0x28e48;
    *(arg1_00 + 0x10) = 0x28e50;
    *(arg1_00 + 0x12) = 0x28e58;
    *(arg1_00 + 0x14) = 0x28e6c;
    *(arg1_00 + 0x16) = 0x28e60;
    return;
}


