// decompiled by r2ghidra: 0668_Tpm20PlatformDxe.pe32
// functions: 78

/* entry0 @ 0x10454 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.00010470(arg1,arg2);
    fcn.000143e4(arg1,arg2);
    return;
}


/* fcn.00010470 @ 0x10470 */

void fcn.00010470(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0;
    uchar auStackX_8 [8];
    
    *0x1e3e8 = *(arg2 + 0x60);
    *0x1e3f8 = *(arg2 + 0x58);
    *0x1e3e0 = arg2;
    *0x1e3f0 = arg1;
    fcn.00015c20();
    puVar4 = fcn.00015c20();
    do {
        uVar1 = *puVar4;
        noname_0 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000104d6:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010450();
                fcn.00010400();
                uVar2 = in(0x1808);
                fcn.000103b0(noname_0,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    fcn.000103a0();
                }
                fcn.000103b0(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010400();
                }
                else {
                    fcn.000103f0();
                }
code_r0x0001053f:
                (**(*0x1e3e8 + 0x140))(0x1d870,0,0x1e410);
                (**(*0x1e3e8 + 0x140))(0x1d860,0,0x1e430);
                (**(*0x1e3e8 + 0x140))(0x1d820,0,0x1e420);
                (**(*0x1e3e8 + 0x140))(0x1d8f0,0,0x1e418);
                (**(*0x1e3e8 + 0x140))(0x1d850);
                fcn.000103c0(1,0,0,auStackX_8);
                return;
            }
            if ((*0x1d908 == *(puVar4 + 4)) && (*0x1d910 == *(puVar4 + 8))) goto code_r0x0001053f;
        }
        else if (uVar1 == 4) goto code_r0x000104d6;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.000143e4 @ 0x143e4 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.000143e4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char16_t *arg1_00;
    int64_t arg2_00;
    uint64_t uStackX_10;
    int64_t aiStackX_18 [2];
    uint32_t var_30h_2;
    int64_t var_38h;
    ulong uStack_58;
    ulong uStack_50;
    int64_t var_40h;
    int64_t var_38h_2;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    var_40h = 0;
    var_38h_2 = 0;
    arg2_00 = 0x1d7c0;
    arg1_00 = L"TPMPERBIOSFLAGS";
    aiStackX_18[1] = 6;
    uStackX_10 = arg2;
    iVar1 = (**(*0x1e3f8 + 0x48))(L"TPMPERBIOSFLAGS",0x1d7c0,0,aiStackX_18 + 1,0x1e470);
    if (iVar1 < 0) {
        *0x1e470 = 0x101;
        *0x1e472 = 0;
        arg1_00 = L"TPMPERBIOSFLAGS";
        arg2_00 = 0x1d7c0;
        *0x1e474 = *0x1e474 & 0xfff8 | 0x78;
        iVar1 = fcn.0001cd9c(0x1da98,0x1d7c0,7,6);
        if (iVar1 < 0) {
            return iVar1;
        }
    }
    *0x1e46c = fcn.0001ce70(arg1_00);
    if (*0x1e46c - 1U < 0x80) {
        fcn.00014178(arg1,arg2_00);
        iVar1 = (**(*0x1e3e8 + 0x50))(0x200,8,0x14208,0,&uStack_58);
        if (iVar1 < 0) {
            return iVar1;
        }
        iVar1 = (**(*0x1e3e8 + 0xa8))(0x1d7f0,uStack_58,0x1e450);
        if (iVar1 < 0) {
            return iVar1;
        }
    }
    else {
        iVar1 = (**(*0x1e3e8 + 0x50))(0x200,8,0x13bb0,0,&uStack_50);
        if ((-1 < iVar1) && (iVar1 = (**(*0x1e3e8 + 0xa8))(0x1d780,uStack_50,0x1e478), iVar1 < 0)) {
            return iVar1;
        }
        iVar1 = (**(*0x1e3e8 + 0x50))(0x200,8,0x141f4,0,0x1e458);
        if ((-1 < iVar1) && (iVar1 = (**(*0x1e3e8 + 0xa8))(0x1d740,*0x1e458,&var_40h), iVar1 < 0)) {
            return iVar1;
        }
        iVar1 = (**(*0x1e3e8 + 0x50))(0x200,8,0x141f4,0,&var_30h);
        if ((-1 < iVar1) && (iVar1 = (**(*0x1e3e8 + 0xa8))(0x1d6e0,var_30h,&var_38h_2), iVar1 < 0)) {
            return iVar1;
        }
        aiStackX_18[0] = 1;
        uStackX_10 = CONCAT44(uStackX_10._4_4_,3);
        var_28h = 8;
        iVar1 = (**(*0x1e3f8 + 0x48))(L"TcgSIDVariable",0x1d7c0,&uStackX_10,&var_28h,aiStackX_18);
        if ((-1 < iVar1) && (aiStackX_18[0] == 0)) {
            iVar1 = fcn.00014b00();
            (**(iVar1 + 0xa0))(0x1dc,1);
            aiStackX_18[0] = 1;
            fcn.0001cd9c(0x1d9e0,0x1d7c0,uStackX_10 & 0xffffffff,8);
        }
    }
    if ((0x1ffff < *(*0x1e3e0 + 8)) && (iVar1 = fcn.00015bdc(0x11920,&var_18h), -1 < iVar1)) {
        iVar1 = (**(*0x1e3e8 + 0x140))(0x1d7a0,0,0x1e3d8);
        if (-1 < iVar1) {
            fcn.00014260(0,0);
            goto code_r0x00014731;
        }
        iVar1 = (**(*0x1e3e8 + 0x50))(0x200,8,fcn.00014260,0,&var_bp_20h);
        if ((-1 < iVar1) && (iVar1 = (**(*0x1e3e8 + 0xa8))(0x1d7a0,var_bp_20h,0x1e448), -1 < iVar1))
        goto code_r0x00014731;
    }
    iVar1 = 0;
code_r0x00014731:
    return iVar1;
}


/* fcn.00015c20 @ 0x15c20 */

int64_t fcn.00015c20(void)

{
    if (*0x1e408 == 0) {
        fcn.00015988(0x1d8b0,0x1e408);
    }
    return *0x1e408;
}


/* fcn.00015988 @ 0x15988 */

ulong fcn.00015988(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x1e3e0;
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


/* fcn.000103a2 @ 0x103a2 */

void fcn.000103a2(void)

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


/* fcn.00010300 @ 0x10300 */

int64_t fcn.00010300(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00010694 @ 0x10694 */

int64_t fcn.00010694(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_50h,int64_t arg_58h)

{
    int16_t iVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int16_t *piVar5;
    uint32_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int *piStackX_18;
    ulong in_stack_00000028;
    ulong in_stack_00000030;
    int64_t var_40h;
    
    iVar8 = 0;
    iVar1 = *arg3;
    piVar5 = arg3;
    while (iVar1 != 0) {
        piVar5 = piVar5 + 1;
        iVar8 = iVar8 + 1;
        iVar1 = *piVar5;
    }
    if ((*0x1e3d8 != 0) || (iVar7 = (**(*0x1e3e8 + 0x140))(0x1d7a0,0,0x1e3d8), -1 < iVar7)) {
        uVar6 = in_stack_00000030 + 0x20 + iVar8 * 2;
        (**(*0x1e3e8 + 0x40))(4,uVar6 + 0x12,&piStackX_18);
        if (piStackX_18 == NULL) {
            iVar7 = -0x7ffffffffffffff7;
        }
        else {
            *piStackX_18 = uVar6 + 0x12;
            piStackX_18[1] = 0xe;
            *(piStackX_18 + 2) = 1;
            *(piStackX_18 + 10) = arg1;
            *(piStackX_18 + 0xe) = arg2;
            uVar2 = *(arg4 + 4);
            uVar3 = *(arg4 + 8);
            uVar4 = *(arg4 + 0xc);
            *(piStackX_18 + 0x12) = *arg4;
            *(piStackX_18 + 0x16) = uVar2;
            *(piStackX_18 + 0x1a) = uVar3;
            *(piStackX_18 + 0x1e) = uVar4;
            *(piStackX_18 + 0x22) = iVar8;
            *(piStackX_18 + 0x2a) = in_stack_00000030;
            (**(*0x1e3e8 + 0x160))(piStackX_18 + 0x32,arg3,iVar8 * 2);
            (**(*0x1e3e8 + 0x160))(piStackX_18 + iVar8 * 2 + 0x32,in_stack_00000028,in_stack_00000030);
            iVar7 = (**(*0x1e3d8 + 0x10))(*0x1e3d8,0,piStackX_18 + 0x12,uVar6,piStackX_18);
            if (piStackX_18 != NULL) {
                (**(*0x1e3e8 + 0x48))();
            }
        }
    }
    return iVar7;
}


/* fcn.0001d614 @ 0x1d614 */

ulong fcn.0001d614(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    
    if ((arg1 & 0xff) - 1 < 3) {
        if (*0x1e440 != NULL) {
code_r0x0001d684:
            uVar2 = (***0x1e440)(arg1 & 0xffffffff,arg2 & 0xffffffff,0,0x1d8e0,0);
            return uVar2;
        }
        if ((*0x1e3e8 != 0) && (*(*0x1e3e8 + 0x140) != NULL)) {
            iVar1 = (**(*0x1e3e8 + 0x140))(0x1d710,0,0x1e440);
            if (iVar1 < 0) {
                *0x1e440 = NULL;
            }
            if (*0x1e440 != NULL) goto code_r0x0001d684;
        }
    }
    return 0x8000000000000003;
}


/* fcn.00010422 @ 0x10422 */

ulong fcn.00010422(int64_t arg1)

{
    uint uVar1;
    bool bVar2;
    
    uVar1 = rdrand();
    bVar2 = rdrandIsValid();
    if (!bVar2) {
        return 0;
    }
    *arg1 = uVar1;
    return 1;
}


/* fcn.00010320 @ 0x10320 */

int64_t fcn.00010320(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
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
    
    //[00] -r-x section size 54272 named .text
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


/* fcn.00014aa0 @ 0x14aa0 */

int64_t fcn.00014aa0(int64_t arg1)

{
    char16_t *pcVar1;
    
    pcVar1 = L"BootOrder";
    for (; (*arg1 != L'\0' && (*arg1 == *pcVar1)); arg1 = arg1 + 2) {
        pcVar1 = pcVar1 + 1;
    }
    return *arg1 - *pcVar1;
}


/* fcn.00014b00 @ 0x14b00 */

int64_t fcn.00014b00(void)

{
    if (*0x1e400 == 0) {
        (**(*0x1e3e8 + 0x140))(0x1d790,0,0x1e400);
    }
    return *0x1e400;
}


/* fcn.0001595c @ 0x1595c */

void fcn.0001595c(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0001592c(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.00010380(arg1_00,arg1);
    }
    return;
}


/* fcn.0001592c @ 0x1592c */

ulong fcn.0001592c(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x1e3e8 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00010380 @ 0x10380 */

int64_t fcn.00010380(int64_t arg1,int64_t arg2)

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


/* fcn.00014820 @ 0x14820 */

ulong fcn.00014820(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
    uVar2 = fcn.00014750(arg3,arg2_00);
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
        if (arg3 < arg1) goto code_r0x000148c8;
    }
    if (arg3 < arg1 + arg2 * 2) {
        return 0x800000000000000f;
    }
code_r0x000148c8:
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


/* fcn.00014750 @ 0x14750 */

uint64_t fcn.00014750(uint32_t arg1,int64_t arg2)

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


/* fcn.000114ec @ 0x114ec */

int64_t fcn.000114ec(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t arg2_00;
    int64_t unaff_RDI;
    int64_t unaff_retaddr;
    int64_t iStackX_10;
    
    *arg3 = 0;
    iStackX_10 = arg2;
    iVar3 = (**(*0x1e3f8 + 0x48))(arg1,0x1d6f0,0,arg3,0);
    if (iVar3 == -0x7ffffffffffffffb) {
        iVar4 = (**(*0x1e3e8 + 0x40))(4,*arg3,&iStackX_10);
        iVar3 = iStackX_10;
        if ((iStackX_10 != 0) && (-1 < iVar4)) {
            iVar3 = (**(*0x1e3f8 + 0x48))(arg1,0x1d6f0,0,arg3,iStackX_10);
            if (iVar3 < 0) {
                (**(*0x1e3e8 + 0x48))(iStackX_10);
                *arg3 = 0;
                iVar3 = 0;
            }
            else {
                iVar3 = iStackX_10;
            }
        }
    }
    else {
        iVar3 = 0;
    }
    *arg4 = iVar3;
    if (iVar3 == 0) {
        return -0x7ffffffffffffff2;
    }
    iVar4 = fcn.00014aa0(arg1);
    if (iVar4 != 0) {
        iVar4 = fcn.00014b00();
        cVar1 = (**(iVar4 + 0x30))(0x1dd);
        if (cVar1 == '\0') {
            iVar4 = fcn.00014b00();
            uVar2 = (**(iVar4 + 0x18))(0x1de);
            arg2_00 = uVar2;
            iVar4 = fcn.0001595c(*(iVar3 + 4) + arg2_00);
            if (iVar4 == 0) {
                return -0x7ffffffffffffff7;
            }
            iVar5 = fcn.00014820(iVar4,arg2_00,iVar3 + 6,arg2_00);
            if (iVar5 < 0) {
                return iVar5;
            }
            iVar5 = fcn.00014750(iVar4,arg2_00);
            (**(*0x1e3e8 + 0x160))(iVar5 * 2 + iVar4,iVar3 + (iVar5 + 3) * 2,*(iVar3 + 4));
        }
    }
    iVar3 = fcn.00010694(1,0x80000002,arg1,0x1d6f0,unaff_RDI,unaff_retaddr);
    return iVar3;
}


/* fcn.00014b3c @ 0x14b3c */

void fcn.00014b3c(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00014ba0(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00014ba0 @ 0x14ba0 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00014ba0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x00014bff;
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
code_r0x00014bff:
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
        uVar21 = fcn.000149bc(arg4,0xf4241);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.00014750(arg4,0xf4241);
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
            pcVar8 = 0x1dd0c;
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
code_r0x00014fba:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x1dd0c;
            }
            else {
                pcVar8 = 0x1dd10;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x00014d51:
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
                    goto code_r0x00014ef4;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x00014f0b;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x00014ef4;
                        }
                        goto code_r0x00014f0b;
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
code_r0x00014ef4:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x00014d51;
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
                        goto code_r0x00014d51;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x00014f0b;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x00014ef4;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x00014f0b:
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
                        fcn.00015908(&var_68h_2,0x26,0,0x1dca0);
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
                            goto code_r0x00014fba;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x000151a3;
                        if (uStack_a8 == 0x58) goto code_r0x00015298;
                        if (uStack_a8 == 0x61) goto code_r0x000151ac;
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
                            goto code_r0x00014d32;
                        }
                        if (uStack_a8 != 100) goto code_r0x00014d2e;
                        goto code_r0x000152af;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x1dd0c;
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
                goto code_r0x000154dc;
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
                            iVar12 = 0x1ddab;
                            goto code_r0x0001525f;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x0001525f:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x000154dc;
                    }
                    fcn.00015908(&var_68h_2,0x26,0,0x1dd04);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x000151a3:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x000151ac:
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
                        goto code_r0x000154dc;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x00014d2e;
                            goto code_r0x0001529c;
                        }
                        goto code_r0x000152a1;
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
                        goto code_r0x000154dc;
                    }
                    fcn.00015908(&var_68h_2,0x26,0,0x1dce8);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x000154dc;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x00015298:
            uVar21 = uVar21 | 0x20;
code_r0x0001529c:
            uVar21 = uVar21 | 0x80;
code_r0x000152a1:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x000152af:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x000152f1;
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
code_r0x000152f1:
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
code_r0x00015379:
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
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x00015379;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar10 = uVar5;
            do {
                uVar6 = uVar10 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = str.0123456789ABCDEF[uVar10 % uVar16];
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
code_r0x00014d2e:
            pcVar8 = &uStack_a8;
code_r0x00014d32:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x000154dc:
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
                arg1 = fcn.00014b6c(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00014b6c(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
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
                arg1 = fcn.00014b6c(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
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
                arg1 = fcn.00014b6c(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
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


/* fcn.0001d450 @ 0x1d450 */

uint64_t fcn.0001d450(int64_t arg1)

{
    uint64_t in_RAX;
    int64_t arg2;
    int64_t iVar1;
    uint16_t uVar2;
    uchar auStack_208 [6];
    uchar uStack_202;
    uchar uStack_201;
    char acStack_200 [504];
    
    uVar2 = 0;
    if (arg1 != 0) {
        arg2 = fcn.0001592c(arg1,0x1000);
        in_RAX = 0;
        if (arg2 != 0) {
            iVar1 = fcn.0001d34c(arg1,arg2);
            if ((iVar1 < 0) || ((*(arg2 + 0x100) & 1) == 0)) {
                in_RAX = (**(*0x1e3e8 + 0x48))();
            }
            else {
                (**(*0x1e3e8 + 0x48))(arg2);
                in_RAX = fcn.0001d24c(arg1,auStack_208);
                if (-1 < in_RAX) {
                    in_RAX = 0;
                    if (CONCAT11(uStack_202,uStack_201) != 0) {
                        for (; uVar2 < CONCAT11(uStack_202,uStack_201); uVar2 = uVar2 + 1) {
                            in_RAX = uVar2;
                            if (acStack_200[in_RAX] == '\x01') {
                                return CONCAT71(uVar2 >> 8,1);
                            }
                        }
                    }
                }
            }
        }
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.0001d148 @ 0x1d148 */

//WARNING: Variable defined which should be unmapped: var_17h
//WARNING: Variable defined which should be unmapped: var_1h

ulong fcn.0001d148(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t var_17h;
    int64_t var_1fh;
    int32_t var_27h;
    int8_t var_3bh;
    int64_t var_3fh;
    int64_t var_47h;
    uchar auStack_88 [16];
    uint32_t uStack_78;
    uchar uStack_74;
    uint uStack_70;
    uint uStack_64;
    uint uStack_60;
    ulong uStack_48;
    int64_t iStack_40;
    uint uStack_38;
    int64_t var_29h;
    uchar uStack_24;
    int64_t var_19h;
    int32_t var_11h;
    int32_t var_5h;
    int32_t var_1h;
    
    if (arg1 == 0) {
        uVar1 = 0x8000000000000002;
    }
    else {
        (**(*0x1e3e8 + 0x168))(arg2,0x200,0);
        (**(*0x1e3e8 + 0x168))(&uStack_48,0x38);
        (**(*0x1e3e8 + 0x168))(&uStack_78,0x2c);
        (**(*0x1e3e8 + 0x168))(auStack_88,0x10);
        uStack_70 = 0;
        uStack_78 = uStack_78 & 0xfffffc82 | 0x82;
        uStack_64 = 0x1000100;
        unique0x00008f00 = auStack_88;
        uStack_60 = 0x200;
        unique0x00008f00 = &uStack_78;
        uStack_74 = 0xc;
        uStack_48 = 10000000;
        uStack_24 = 0;
        uStack_38 = 0x200;
        iStack_40 = arg2;
        uVar1 = (**(arg1 + 8))(arg1,0,&uStack_48,0);
    }
    return uVar1;
}


/* fcn.0001d030 @ 0x1d030 */

ulong fcn.0001d030(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint32_t uVar2;
    int16_t *piVar3;
    ulong uVar4;
    int16_t iVar5;
    
    uVar4 = 0x800000000000000e;
    if (arg2 == 0) {
        uVar4 = 0x8000000000000002;
    }
    else {
        (**(*0x1e3e8 + 0x168))(arg2,0xb);
        uVar2 = *arg1;
        uVar1 = *(arg1 + 3);
        piVar3 = arg1 + 0x30;
        do {
            iVar5 = *(piVar3 + 1) + *piVar3 * 0x100;
            if (iVar5 == 0x402) {
                *(arg2 + 5) = 0x402;
                uVar4 = 0;
                *(arg2 + 7) = piVar3[1];
                *(arg2 + 8) = *(piVar3 + 3);
                *(arg2 + 10) = *(arg2 + 10) ^ (*(piVar3 + 5) ^ *(arg2 + 10)) & 1;
                *(arg2 + 9) = *(arg2 + 9) ^ (*(arg2 + 9) ^ *(piVar3 + 2)) & 2;
                *(arg2 + 9) = *(arg2 + 9) ^ (*(arg2 + 9) ^ *(piVar3 + 2)) & 1;
            }
            if (iVar5 == 2) {
                *arg2 = 2;
                uVar4 = 0;
                *(arg2 + 2) = piVar3[1];
                *(arg2 + 3) = *(piVar3 + 3);
                *(arg2 + 4) = piVar3[2];
            }
            piVar3 = piVar3 + *(piVar3 + 3) + 4;
        } while (piVar3 < uVar1 + 4 + (uVar2 * 0x10000 + (uVar2 & 0xff00)) * 0x100 + (uVar2 >> 8 & 0xff00) + arg1);
    }
    return uVar4;
}


/* fcn.0001d500 @ 0x1d500 */

ulong fcn.0001d500(int64_t arg1)

{
    ulong uVar1;
    uint32_t uStack_288;
    uchar uStack_284;
    uint uStack_280;
    uint uStack_274;
    uint uStack_270;
    ulong uStack_258;
    uchar *puStack_250;
    uint uStack_248;
    uchar uStack_234;
    uint32_t *puStack_230;
    uchar *puStack_228;
    uchar auStack_220 [24];
    uchar auStack_208 [384];
    int64_t var_80h;
    int64_t var_78h;
    int64_t var_60h;
    
    if (arg1 == 0) {
        uVar1 = 0x8000000000000002;
    }
    else {
        (**(*0x1e3e8 + 0x168))(&uStack_258,0x38);
        (**(*0x1e3e8 + 0x168))(&uStack_288,0x2c);
        (**(*0x1e3e8 + 0x168))(auStack_220,0x10);
        (**(*0x1e3e8 + 0x168))(auStack_208,0x200,0);
        uStack_280 = 0;
        uStack_288 = uStack_288 & 0xfffffc81 | 0x81;
        auStack_208[0] = 1;
        puStack_228 = auStack_220;
        uStack_274 = 0x2000500;
        puStack_230 = &uStack_288;
        uStack_270 = 0x200;
        puStack_250 = auStack_208;
        uStack_284 = 0xc;
        uStack_258 = 10000000;
        uStack_234 = 0;
        uStack_248 = 0x200;
        uVar1 = (**(arg1 + 8))(arg1,0,&uStack_258,0);
    }
    return uVar1;
}


/* fcn.000117ac @ 0x117ac */

int64_t fcn.000117ac(void)

{
    int64_t arg1;
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    char cVar4;
    uint64_t uVar5;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    uint32_t var_180h;
    int64_t var_188h;
    int64_t var_190h;
    uchar auStack_248 [5];
    int16_t iStack_243;
    uint8_t uStack_23f;
    uchar auStack_238 [512];
    
    uStackX_8 = 0;
    iVar2 = (**(*0x1e3e8 + 0x138))(2,0x1d800,0,&uStackX_8,&iStackX_18);
    if ((-1 < iVar2) && (uVar5 = 0, uStackX_8 != 0)) {
        cVar4 = uStackX_8;
        do {
            iVar3 = (**(*0x1e3e8 + 0x98))(*(iStackX_18 + uVar5 * 8),0x1d800,&iStackX_10);
            arg1 = iStackX_10;
            if (-1 < iVar3) {
                if (iStackX_10 == 0) {
                    iVar3 = -0x7ffffffffffffffe;
                }
                else {
                    cVar4 = '\0';
                    cVar1 = fcn.0001d450(iStackX_10);
                    iVar3 = -0x7ffffffffffffffd;
                    if (cVar1 != '\0') {
                        iVar3 = fcn.0001d148(arg1,auStack_238);
                        if (-1 < iVar3) {
                            iVar3 = fcn.0001d030(auStack_238,auStack_248);
                            if (-1 < iVar3) {
                                iVar3 = -0x7ffffffffffffffd;
                                if (iStack_243 == 0x402) {
                                    iVar3 = 0;
                                    if ((uStack_23f & 2) != 0) {
                                        iVar3 = 0;
                                        cVar4 = '\x01';
                                    }
                                }
                            }
                        }
                    }
                }
                if ((-1 < iVar3) && (cVar4 != '\x01')) {
                    iVar2 = fcn.0001d500(iStackX_10);
                }
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < uStackX_8);
    }
    return iVar2;
}


/* fcn.00011140 @ 0x11140 */

int64_t fcn.00011140(void)

{
    int64_t iVar1;
    char acStackX_8 [8];
    uint auStackX_10 [2];
    ulong auStackX_18 [2];
    
    auStackX_10[0] = 7;
    acStackX_8[0] = '\0';
    auStackX_18[0] = 1;
    iVar1 = (**(*0x1e3f8 + 0x48))(L"MemoryOverwriteRequestControl",0x1d840,auStackX_10,auStackX_18,acStackX_8);
    if ((iVar1 < 0) || (acStackX_8[0] != '\0')) {
        acStackX_8[0] = '\0';
        iVar1 = (**(*0x1e3f8 + 0x58))(L"MemoryOverwriteRequestControl",0x1d840,7,1,acStackX_8);
    }
    if (*0x1e438 != '\0') {
        fcn.0001d614(1,0x3058a2a);
    }
    return iVar1;
}


/* fcn.000116b8 @ 0x116b8 */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.000116b8(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iStackX_8;
    uint64_t uStackX_10;
    int64_t var_20h;
    uint32_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    char16_t acStack_38 [4];
    char16_t acStack_30 [4];
    int64_t var_20h_2;
    int32_t var_10h;
    
    iStackX_8 = 0;
    var_20h = 0;
    acStack_38 = str.BootOrder._0_8_;
    acStack_30 = str.BootOrder._8_8_;
    var_20h_2._0_4_ = str.BootOrder._16_4_;
    iVar2 = fcn.000114ec(acStack_38,arg1,&uStackX_10,&iStackX_8);
    iVar1 = iStackX_8;
    if (iVar2 != -0x7ffffffffffffff2) {
        if (iVar2 < 0) {
            if (iStackX_8 != 0) {
                (**(*0x1e3e8 + 0x48))();
            }
            return iVar2;
        }
        uStackX_10 = uStackX_10 >> 1;
        uVar3 = 0;
        if (uStackX_10 != 0) {
            do {
                iVar2 = 0x14;
                fcn.00014b3c(acStack_38,0x14,0x1d9c8,*(iVar1 + uVar3 * 2));
                iVar2 = fcn.000114ec(acStack_38,iVar2,&var_28h,&var_20h);
                if ((-1 < iVar2) && (var_20h != 0)) {
                    (**(*0x1e3e8 + 0x48))();
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < uStackX_10);
        }
    }
    if (iVar1 != 0) {
        (**(*0x1e3e8 + 0x48))(iVar1);
    }
    return 0;
}


/* fcn.000105f4 @ 0x105f4 */

int64_t fcn.000105f4(uint32_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    char *pcVar3;
    ulong *apuStackX_8 [4];
    uint uStack_168;
    uint uStack_164;
    uint uStack_12;
    
    pcVar3 = CONCAT44(in_register_0000000c,arg1);
    apuStackX_8[0] = NULL;
    if (pcVar3 == NULL) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        iVar2 = 0;
        uStack_168 = arg2;
        uStack_164 = 0x80000007;
        cVar1 = *pcVar3;
        while (cVar1 != '\0') {
            iVar2 = iVar2 + 1;
            cVar1 = pcVar3[iVar2];
        }
        uStack_12 = iVar2;
        iVar2 = (**(*0x1e3e8 + 0x140))(str.H__tx,0,apuStackX_8);
        if (-1 < iVar2) {
            iVar2 = (**apuStackX_8[0])(*0x1e3d8,pcVar3,0,uStack_12,&uStack_168,pcVar3);
        }
    }
    return iVar2;
}


/* fcn.00010824 @ 0x10824 */

int64_t fcn.00010824(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    uint8_t uVar6;
    uint64_t uVar7;
    int64_t *arg1_00;
    uint32_t uVar8;
    int64_t iVar9;
    int64_t *piStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    int32_t var_b6h;
    int64_t var_108h;
    int64_t var_110h;
    int64_t var_118h;
    int64_t *piStack_1c8;
    int64_t iStack_1c0;
    int64_t iStack_1b8;
    ulong *puStack_1b0;
    uint64_t uStack_1a8;
    uint uStack_198;
    uint uStack_194;
    uint32_t uStack_42;
    
    iStackX_18 = 0;
    iStack_1b8 = 0;
    piStackX_10 = NULL;
    piStack_1c8 = NULL;
    iStackX_20 = 0;
    iStack_1c0 = 0;
    puStack_1b0 = NULL;
    if (*0x1e3c8 == 0) {
        iVar2 = (**(*0x1e3e8 + 0x98))(arg1,0x1d8d0,&iStackX_18);
        if ((iVar2 < 0) || (iVar2 = (**(*0x1e3e8 + 0x98))(arg1,0x1d7d0,&iStack_1b8), iVar2 < 0)) {
            iVar2 = -0x7ffffffffffffffd;
        }
        else {
            iVar2 = (**(*0x1e3e8 + 0x40))(4,*(*(iStackX_18 + 8) + 0xc),&iStack_1c0);
            if ((-1 < iVar2) && (iStack_1c0 != 0)) {
                (**(iStack_1b8 + 8))(iStack_1b8,**(iStackX_18 + 8),0,(*(iStackX_18 + 8))[3],iStack_1c0);
                uVar7 = 0;
                do {
                    if (*(iStack_1c0 + 0x1c2 + uVar7 * 0x10) == -0x12) {
                        uVar6 = *(iStack_1c0 + 0x1c6 + uVar7 * 0x10);
                        if (uVar6 != 0) {
                            iVar2 = (**(*0x1e3e8 + 0x40))(4,*(*(iStackX_18 + 8) + 0xc),&piStackX_10);
                            if ((iVar2 < 0) || (piStackX_10 == NULL)) goto code_r0x00010d71;
                            iVar1 = (*(iStackX_18 + 8))[3];
                            iVar2 = (**(iStack_1b8 + 8))
                                              (iStack_1b8,**(iStackX_18 + 8),iVar1 * uVar6,iVar1,piStackX_10);
                            if ((piStackX_10 == "EFI PART") ||
                               (iVar3 = fcn.00010300(0x1d928,piStackX_10,8), iVar3 == 0)) {
                                if ((((iVar2 < 0) || (*piStackX_10 != 0x5452415020494645)) ||
                                    (0xffffffffffffffff / *(*(iStackX_18 + 8) + 0xc) < piStackX_10[9])) ||
                                   ((*(piStackX_10 + 0x54) != 0x80 || (0x1ffffffffffffff < *(piStackX_10 + 10))))) {
                                    piVar4 = piStackX_10;
                                }
                                else {
                                    iVar2 = (**(*0x1e3e8 + 0x40))(4,*(piStackX_10 + 10) << 7,&piStack_1c8);
                                    if ((iVar2 < 0) || (piStack_1c8 == NULL)) {
                                        piVar4 = piStackX_10;
                                        goto code_r0x00010d67;
                                    }
                                    iVar2 = (**(iStack_1b8 + 8))
                                                      (iStack_1b8,**(iStackX_18 + 8),
                                                       (*(iStackX_18 + 8))[3] * piStackX_10[9],
                                                       *(piStackX_10 + 0x54) * piStackX_10[10],piStack_1c8);
                                    if (-1 < iVar2) {
                                        iVar2 = 0;
                                        uVar8 = 0;
                                        piVar4 = piStackX_10;
                                        arg1_00 = piStack_1c8;
                                        if (piStackX_10[10] != 0) {
                                            do {
                                                if ((arg1_00 != 0x1e380) &&
                                                   (iVar3 = fcn.00010300(arg1_00,0x1e380,0x10), piVar4 = piStackX_10
                                                   , iVar3 != 0)) {
                                                    iVar2 = iVar2 + 1;
                                                }
                                                uVar8 = uVar8 + 1;
                                                arg1_00 = arg1_00 + 0x10;
                                            } while (uVar8 < *(piVar4 + 10));
                                        }
                                        uVar8 = *(piVar4 + 0x54) * iVar2 + 100;
                                        uStack_1a8 = uVar8;
                                        iVar3 = (**(*0x1e3e8 + 0x40))(4,uVar8,&iStackX_20);
                                        if ((-1 < iVar3) && (iStackX_20 != 0)) {
                                            (**(*0x1e3e8 + 0x168))(iStackX_20,uVar8,0);
                                            uStack_198 = 5;
                                            uStack_194 = 0x80000006;
                                            uStack_42 = uVar8;
                                            (**(*0x1e3e8 + 0x160))(iStackX_20,piStackX_10,0x5c);
                                            iVar9 = 0;
                                            uVar8 = 0;
                                            *(iStackX_20 + 0x5c) = iVar2;
                                            if (piStackX_10[10] != 0) {
                                                iVar2 = 0;
                                                piVar4 = piStack_1c8;
                                                do {
                                                    if ((piVar4 != 0x1e380) &&
                                                       (iVar5 = fcn.00010300(piVar4,0x1e380,0x10), iVar5 != 0)) {
                                                        (**(*0x1e3e8 + 0x160))(iStackX_20 + 100 + iVar2,piVar4,0x80);
                                                        iVar9 = iVar9 + 1;
                                                        iVar2 = iVar2 + 0x80;
                                                    }
                                                    uVar7 = uStack_1a8;
                                                    piVar4 = piVar4 + 0x10;
                                                    uVar8 = uVar8 + 1;
                                                } while (uVar8 < *(piStackX_10 + 10));
                                                if ((((iVar9 != 0) &&
                                                     (iVar3 = (**(*0x1e3e8 + 0x140))(str.H__tx,0,&puStack_1b0),
                                                     -1 < iVar3)) &&
                                                    ((*0x1e3d8 != 0 ||
                                                     (iVar3 = (**(*0x1e3e8 + 0x140))(0x1d7a0,0,0x1e3d8), -1 < iVar3))
                                                    )) && ((**puStack_1b0)(*0x1e3d8,iStackX_20,0,uVar7,&uStack_198,
                                                                           iStackX_20), -1 < iVar3)) {
                                                    *0x1e3c8 = *0x1e3c8 + 1;
                                                }
                                            }
                                            (**(*0x1e3e8 + 0x48))(piStackX_10);
                                            (**(*0x1e3e8 + 0x48))(piStack_1c8);
                                            (**(*0x1e3e8 + 0x48))(iStackX_20);
                                            (**(*0x1e3e8 + 0x48))(iStack_1c0);
                                            return iVar3;
                                        }
                                        (**(*0x1e3e8 + 0x48))(piStackX_10);
                                        piVar4 = piStack_1c8;
code_r0x00010d67:
                                        (**(*0x1e3e8 + 0x48))(piVar4);
code_r0x00010d71:
                                        iVar2 = -0x7ffffffffffffff7;
                                        goto code_r0x00010d7b;
                                    }
                                    (**(*0x1e3e8 + 0x48))(piStackX_10);
                                    piVar4 = piStack_1c8;
                                }
                                (**(*0x1e3e8 + 0x48))(piVar4);
                                iVar2 = -0x7ffffffffffffff9;
                                goto code_r0x00010d7b;
                            }
                            (**(*0x1e3e8 + 0x48))(piStackX_10);
                        }
                        break;
                    }
                    uVar6 = uVar7 + 1;
                    uVar7 = uVar6;
                } while (uVar6 < 4);
                iVar2 = -0x7ffffffffffffff2;
code_r0x00010d7b:
                (**(*0x1e3e8 + 0x48))(iStack_1c0);
                return iVar2;
            }
            iVar2 = -0x7ffffffffffffff7;
        }
    }
    else {
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.0001cd9c @ 0x1cd9c */

int64_t fcn.0001cd9c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    
    iVar1 = (**(*0x1e3f8 + 0x58))();
    if ((iVar1 < 0) && (iVar1 == -0x7ffffffffffffffe)) {
        iVar1 = (**(*0x1e3f8 + 0x58))(arg1,arg2,0,0,0);
        if (-1 < iVar1) {
            iVar1 = (**(*0x1e3f8 + 0x58))(arg1,arg2,arg3 & 0xffffffffU,arg4);
        }
    }
    else if (iVar1 == -0x7ffffffffffffff2) {
        (**(*0x1e3f8 + 0x58))(arg1,arg2,arg3 & 0xffffffffU,arg4);
    }
    return iVar1;
}


/* fcn.0001cb44 @ 0x1cb44 */

int64_t fcn.0001cb44(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    char cVar2;
    char *arg1_00;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    char *pcVar7;
    int64_t iStackX_18;
    uchar auStackX_20 [8];
    int64_t aiStack_38 [2];
    
    auStackX_20[0] = arg4;
    aiStack_38[0] = 0;
    iVar5 = 0;
    iVar6 = arg1;
    iStackX_18 = arg3;
    arg1_00 = fcn.0001cd10(arg1);
    if (arg1_00 != NULL) {
        fcn.000159ec(iVar6,aiStack_38,arg3);
        pcVar7 = arg1_00;
        iVar6 = aiStack_38[0];
        do {
            while( true ) {
                iVar3 = 0x1e33a;
                if (iVar6 != 0) {
                    iVar3 = iVar6;
                }
                iVar3 = fcn.00015aa8(arg1_00,0,0x1e33a,iVar3);
                if (iVar3 == 0) goto code_r0x0001ccc0;
                iStackX_18 = 0;
                iVar4 = (**(*0x1e410 + 8))(*0x1e410,iVar3,arg1,arg2 & 0xffff,auStackX_20,&iStackX_18,0);
                if (iVar4 == -0x7ffffffffffffffb) {
                    iVar5 = fcn.0001595c(iStackX_18);
                    if ((iVar5 != 0) &&
                       (iVar4 = (**(*0x1e410 + 8))(*0x1e410,iVar3,arg1,arg2 & 0xffff,iVar5,&iStackX_18,0),
                       iVar4 < 0)) {
                        (**(*0x1e3e8 + 0x48))(iVar5);
                        iVar5 = 0;
                    }
                    goto code_r0x0001ccc0;
                }
                if (iVar4 != -0x7fffffffffffffe0) goto code_r0x0001ccc0;
                if (iVar6 == 0) break;
                (**(*0x1e3e8 + 0x48))(iVar6);
                iVar6 = 0;
            }
            for (; (*pcVar7 != '\0' && (*pcVar7 != ';')); pcVar7 = pcVar7 + 1) {
            }
            cVar2 = *pcVar7;
            pcVar1 = pcVar7 + 1;
            pcVar7 = NULL;
            if (cVar2 == ';') {
                pcVar7 = pcVar1;
            }
        } while (pcVar7 != NULL);
code_r0x0001ccc0:
        (**(*0x1e3e8 + 0x48))(arg1_00);
        if (iVar6 != 0) {
            (**(*0x1e3e8 + 0x48))(iVar6);
        }
        if (iVar3 != 0) {
            (**(*0x1e3e8 + 0x48))(iVar3);
        }
    }
    return iVar5;
}


/* fcn.000120a8 @ 0x120a8 */

uint64_t fcn.000120a8(ulong noname_0,ulong noname_1,int64_t arg1)

{
    uint16_t uVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    uint16_t uVar4;
    int iVar5;
    uchar *puVar6;
    ushort uStack_158;
    uint uStack_156;
    uint uStack_152;
    uint uStack_14e;
    uint uStack_14a;
    uint uStack_146;
    ushort uStack_142;
    uchar uStack_140;
    ushort uStack_13f;
    uchar auStack_13d [149];
    uchar auStack_a8 [128];
    int64_t var_20h;
    
    if ((*0x1e3d8 == 0) && (uVar2 = (**(*0x1e3e8 + 0x140))(0x1d7a0,0,0x1e3d8), uVar2 < 0)) {
        return uVar2;
    }
    uStack_152 = 0x21010000;
    uStack_158 = 0x280;
    uStack_14e = 0xc000040;
    uVar3 = auStack_13d - &uStack_146;
    uStack_146 = 0x9000040;
    uStack_142 = 0;
    uStack_140 = 0;
    uVar1 = uVar3 >> 0x10;
    uStack_14a = CONCAT22(uVar3 << 8 | uVar3 >> 8,uVar1 << 8 | uVar1 >> 8);
    uStack_13f = 0;
    uVar1 = (arg1 & 0xffffffffU) >> 0x10;
    uVar4 = arg1 & 0xffffffffU;
    *(&uStack_146 + uVar3) = CONCAT22(uVar4 << 8 | uVar4 >> 8,uVar1 << 8 | uVar1 >> 8);
    puVar6 = &uStack_142 + uVar3;
    *puVar6 = 0;
    iVar5 = (puVar6 - &uStack_158) + 1;
    uVar1 = iVar5 >> 0x10;
    uStack_156 = CONCAT22(iVar5 << 8 | iVar5 >> 8,uVar1 << 8 | uVar1 >> 8);
    uVar2 = (**(*0x1e3d8 + 0x18))(*0x1e3d8,iVar5,&uStack_158,0x96,auStack_a8);
    if (-1 < uVar2) {
        if (CONCAT22(auStack_a8._2_4_ << 8 | auStack_a8._2_4_ >> 8,
                     SUB42(auStack_a8._2_4_,2) << 8 | SUB42(auStack_a8._2_4_,2) >> 8) < 0x97) {
            uVar2 = -(CONCAT22(auStack_a8._6_4_ << 8 | auStack_a8._6_4_ >> 8,
                               SUB42(auStack_a8._6_4_,2) << 8 | SUB42(auStack_a8._6_4_,2) >> 8) != 0) &
                    0x8000000000000007;
        }
        else {
            uVar2 = 0x8000000000000005;
        }
    }
    return uVar2;
}


/* fcn.00011e38 @ 0x11e38 */

uint64_t fcn.00011e38(void)

{
    uint16_t uVar1;
    uint64_t uVar2;
    uint16_t uVar3;
    int iVar4;
    ushort uStack_148;
    uint uStack_146;
    uint uStack_142;
    uint uStack_13e;
    uint uStack_13a;
    uint uStack_136;
    ushort uStack_132;
    uchar uStack_130;
    ushort uStack_12f;
    uchar auStack_12d [133];
    uchar auStack_a8 [112];
    int64_t var_bp_30h;
    
    uStack_142 = 0x27010000;
    uStack_13e = 0xc000040;
    uStack_136 = 0x9000040;
    uStack_132 = 0;
    uStack_148 = 0x280;
    uStack_130 = 0;
    uStack_12f = 0;
    iVar4 = (auStack_12d - &uStack_13a) + -4;
    auStack_12d[0] = 0;
    uVar3 = iVar4;
    uVar1 = iVar4 >> 0x10;
    uStack_13a = CONCAT22(uVar3 << 8 | uVar3 >> 8,uVar1 << 8 | uVar1 >> 8);
    iVar4 = (auStack_12d - &uStack_148) + 1;
    uVar1 = iVar4 >> 0x10;
    uStack_146 = CONCAT22(iVar4 << 8 | iVar4 >> 8,uVar1 << 8 | uVar1 >> 8);
    uVar2 = (**(*0x1e3d8 + 0x18))(*0x1e3d8,iVar4,&uStack_148,0x9a,auStack_a8);
    if (-1 < uVar2) {
        if (CONCAT22(auStack_a8._2_4_ << 8 | auStack_a8._2_4_ >> 8,
                     SUB42(auStack_a8._2_4_,2) << 8 | SUB42(auStack_a8._2_4_,2) >> 8) < 0x9b) {
            uVar2 = -(CONCAT22(auStack_a8._6_4_ << 8 | auStack_a8._6_4_ >> 8,
                               SUB42(auStack_a8._6_4_,2) << 8 | SUB42(auStack_a8._6_4_,2) >> 8) != 0) &
                    0x8000000000000007;
        }
        else {
            uVar2 = 0x8000000000000005;
        }
    }
    return uVar2;
}


/* fcn.00011f74 @ 0x11f74 */

uint64_t fcn.00011f74(void)

{
    uint16_t uVar1;
    uint64_t uVar2;
    uint16_t uVar3;
    int iVar4;
    ushort uStack_148;
    uint uStack_146;
    uint uStack_142;
    uint uStack_13e;
    uint uStack_13a;
    uint uStack_136;
    ushort uStack_132;
    uchar uStack_130;
    ushort uStack_12f;
    uchar auStack_12d [133];
    uchar auStack_a8 [112];
    int64_t var_bp_30h;
    
    uStack_142 = 0x26010000;
    uStack_13e = 0xc000040;
    uStack_136 = 0x9000040;
    uStack_148 = 0x280;
    uStack_132 = 0;
    uStack_130 = 0;
    iVar4 = (auStack_12d - &uStack_13a) + -4;
    uStack_12f = 0;
    uVar1 = iVar4 >> 0x10;
    uVar3 = iVar4;
    uStack_13a = CONCAT22(uVar3 << 8 | uVar3 >> 8,uVar1 << 8 | uVar1 >> 8);
    iVar4 = auStack_12d - &uStack_148;
    uVar1 = iVar4 >> 0x10;
    uStack_146 = CONCAT22(iVar4 << 8 | iVar4 >> 8,uVar1 << 8 | uVar1 >> 8);
    uVar2 = (**(*0x1e3d8 + 0x18))(*0x1e3d8,iVar4,&uStack_148,0x9a,auStack_a8);
    if (-1 < uVar2) {
        if (CONCAT22(auStack_a8._2_4_ << 8 | auStack_a8._2_4_ >> 8,
                     SUB42(auStack_a8._2_4_,2) << 8 | SUB42(auStack_a8._2_4_,2) >> 8) < 0x9b) {
            uVar2 = -(CONCAT22(auStack_a8._6_4_ << 8 | auStack_a8._6_4_ >> 8,
                               SUB42(auStack_a8._6_4_,2) << 8 | SUB42(auStack_a8._6_4_,2) >> 8) != 0) &
                    0x8000000000000007;
        }
        else {
            uVar2 = 0x8000000000000005;
        }
    }
    return uVar2;
}


/* fcn.00011e00 @ 0x11e00 */

uint64_t fcn.00011e00(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    
    iVar1 = fcn.0001cb44(*0x1e3b0,arg1 & 0xffff,arg3,arg4);
    *arg2 = iVar1;
    return ~-(iVar1 != 0) & 0x800000000000000e;
}


/* fcn.0001cfb4 @ 0x1cfb4 */

void fcn.0001cfb4(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_18 [2];
    uint auStack_28 [2];
    uint32_t uStack_20;
    
    aiStackX_18[0] = 0x18;
    iVar1 = (**(*0x1e3f8 + 0x48))(L"AMITCGPPIVAR",0x1d7b0,0,aiStackX_18,auStack_28);
    if (-1 < iVar1) {
        auStack_28[0] = 0;
        uStack_20 = arg1;
        fcn.0001cd9c(0x1db48,0x1d7b0,7,aiStackX_18[0]);
    }
    return;
}


/* fcn.00015c50 @ 0x15c50 */

void fcn.00015c50(int64_t arg1)

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
            fcn.000103a0();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00012488 @ 0x12488 */

void fcn.00012488(void)

{
    int64_t iVar1;
    uchar auStackX_8 [8];
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 4;
    iVar1 = (**(*0x1e3f8 + 0x48))(L"LastBootFailed",0x1d7e0,0,auStackX_10,auStackX_8);
    if (-1 < iVar1) {
        (**(*0x1e3f8 + 0x58))(L"LastBootFailed",0x1d7e0,1,0,auStackX_8);
    }
    return;
}


/* fcn.00014784 @ 0x14784 */

ulong fcn.00014784(int64_t arg1,ulong noname_1,int64_t arg2)

{
    int16_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    if ((arg1 == 0) || (arg2 == 0)) {
        return 0x8000000000000002;
    }
    uVar3 = 0x200;
    uVar2 = fcn.00014750(arg2,0x200);
    if (uVar3 <= uVar2) {
        return 0x8000000000000005;
    }
    if (arg2 <= arg1) {
        if (arg1 < arg2 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg2 < arg1) goto code_r0x000147f4;
    }
    if (arg2 < arg1 + 0x400) {
        return 0x800000000000000f;
    }
code_r0x000147f4:
    iVar1 = *arg2;
    if (iVar1 != 0) {
        arg2 = arg2 - arg1;
        do {
            *arg1 = iVar1;
            arg1 = arg1 + 2;
            iVar1 = *(arg2 + arg1);
        } while (iVar1 != 0);
    }
    *arg1 = 0;
    return 0;
}


/* fcn.00014900 @ 0x14900 */

ulong fcn.00014900(int64_t arg1,ulong noname_1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    int16_t *piVar3;
    int64_t iVar4;
    uint64_t arg2_00;
    
    iVar4 = 0x200;
    piVar3 = arg1;
    iVar1 = fcn.00014750(arg1,0x200);
    arg2_00 = iVar4 - iVar1;
    if ((arg1 == 0) || (arg2 == NULL)) {
        return 0x8000000000000002;
    }
    if (arg2_00 == 0) {
        return 0x8000000000000004;
    }
    uVar2 = fcn.00014750(arg2,arg2_00);
    if (arg2_00 <= uVar2) {
        return 0x8000000000000005;
    }
    if (arg2 <= piVar3) {
        if (piVar3 < arg2 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg2 < piVar3) goto code_r0x00014990;
    }
    if (arg2 < piVar3 + 0x200) {
        return 0x800000000000000f;
    }
code_r0x00014990:
    piVar3 = piVar3 + iVar1;
    for (; *arg2 != 0; arg2 = arg2 + 2) {
        *piVar3 = *arg2;
        piVar3 = piVar3 + 1;
    }
    *piVar3 = 0;
    return 0;
}


/* fcn.00016e40 @ 0x16e40 */

void fcn.00016e40(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint32_t uVar5;
    
    uVar2 = *(arg1 + 0x14) >> 3 & 0x3f;
    uVar3 = uVar2;
    uVar1 = arg3;
    uVar5 = *(arg1 + 0x14) + uVar1 * 8;
    *(arg1 + 0x14) = uVar5;
    if (uVar5 < uVar1 << 3) {
        *(arg1 + 0x18) = *(arg1 + 0x18) + 1;
    }
    *(arg1 + 0x18) = *(arg1 + 0x18) + ((arg3 & 0xffffffffU) >> 0x1d);
    if (uVar2 + uVar1 < 0x40) {
        uVar5 = 0;
    }
    else {
        uVar5 = -uVar2 + 0x40;
        iVar4 = arg1 + 0x1c + uVar3;
        if ((uVar5 != 0) && (iVar4 != arg2)) {
            section..text(iVar4,arg2,uVar5);
        }
        fcn.00015cb0(arg1,arg1 + 0x1c);
        for (uVar2 = -uVar2 + 0x7f; uVar2 < uVar1; uVar2 = uVar2 + 0x40) {
            fcn.00015cb0(arg1,uVar5 + arg2);
            uVar5 = uVar5 + 0x40;
        }
        uVar3 = 0;
    }
    iVar4 = arg1 + 0x1c + uVar3;
    if ((uVar1 - uVar5 != 0) && (iVar4 != uVar5 + arg2)) {
        section..text(iVar4,uVar5 + arg2,uVar1 - uVar5);
    }
    return;
}


/* fcn.00016f20 @ 0x16f20 */

void fcn.00016f20(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uchar *puVar6;
    uchar auStackX_10 [8];
    
    uVar3 = 0;
    puVar6 = auStackX_10;
    uVar5 = uVar3;
    do {
        uVar2 = uVar5;
        uVar1 = uVar5;
        uVar4 = uVar2 + 1;
        uVar5 = uVar4;
        *puVar6 = *((-(uVar2 < 4) & 4) + 0x14 + arg2) >> (('\x03' - (uVar1 & 3)) * '\b' & 0x1f);
        puVar6 = puVar6 + 1;
    } while (uVar4 < 8);
    fcn.00016e40(arg2,0x1e090,1);
    while ((*(arg2 + 0x14) & 0x1f8) != 0x1c0) {
        fcn.00016e40(arg2,0x1e094,1);
    }
    fcn.00016e40(arg2,auStackX_10,8);
    uVar5 = uVar3;
    do {
        uVar1 = uVar3;
        uVar2 = uVar3 + 1;
        uVar3 = uVar2;
        uVar1 = ('\x03' - (uVar1 & 3)) * '\b' & 0x1f;
        *arg1 = *(arg2 + (uVar5 & 0xfffffffffffffffc)) >> uVar1;
        arg1 = arg1 + 1;
        uVar5 = uVar5 + 1;
    } while (uVar2 < 0x14);
    uVar2 = 0 >> uVar1;
    fcn.00010320(arg2 + 0x1c,uVar2 + 0x40,uVar2);
    fcn.00010320(arg2,0x14,0);
    fcn.00010320(arg2 + 0x14,8,0);
    fcn.00010320(auStackX_10,8,0);
    return;
}


/* fcn.000195f4 @ 0x195f4 */

ulong fcn.000195f4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    
    iVar1 = arg3;
    uVar5 = arg3 & 0xffffffff;
    do {
        uVar4 = uVar5;
        if (iVar1 == 0) {
            return 0;
        }
        if ((*(arg1 + 0x28) == 0) && (0x3f < uVar4)) {
            iVar2 = arg1 + 0x2c;
            if (iVar2 != arg2) {
                section..text(iVar2,arg2,0x40);
            }
            iVar1 = fcn.00017048(arg1,iVar2);
            if (iVar1 < 0) {
                return 0xffffffff;
            }
            *arg1 = *arg1 + 0x200;
            arg2 = arg2 + 0x40;
            uVar5 = uVar4 - 0x40;
        }
        else {
            uVar3 = 0x40 - *(arg1 + 0x28);
            if (uVar4 < uVar3) {
                uVar3 = uVar4;
            }
            iVar2 = arg1 + 0x2c + *(arg1 + 0x28);
            if ((uVar3 != 0) && (iVar2 != arg2)) {
                section..text(iVar2,arg2,uVar3);
            }
            *(arg1 + 0x28) = *(arg1 + 0x28) + uVar3;
            arg2 = arg2 + uVar3;
            uVar5 = uVar4 - uVar3;
            if (*(arg1 + 0x28) == 0x40) {
                iVar1 = fcn.00017048(arg1,arg1 + 0x2c);
                if (iVar1 < 0) {
                    return 0xffffffff;
                }
                *arg1 = *arg1 + 0x200;
                *(arg1 + 0x28) = 0;
            }
        }
        iVar1 = uVar5;
    } while( true );
}


/* fcn.000196e4 @ 0x196e4 */

ulong fcn.000196e4(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    
    *arg1 = *arg1 + (*(arg1 + 0x28) << 3);
    *(*(arg1 + 0x28) + 0x2c + arg1) = 0x80;
    *(arg1 + 0x28) = *(arg1 + 0x28) + 1;
    uVar1 = *(arg1 + 0x28);
    if (0x38 < uVar1) {
        while (uVar1 < 0x40) {
            *(uVar1 + 0x2c + arg1) = 0;
            *(arg1 + 0x28) = *(arg1 + 0x28) + 1;
            uVar1 = *(arg1 + 0x28);
        }
        fcn.00017048(arg1,arg1 + 0x2c);
        *(arg1 + 0x28) = 0;
    }
    while (*(arg1 + 0x28) < 0x38) {
        *(*(arg1 + 0x28) + 0x2c + arg1) = 0;
        *(arg1 + 0x28) = *(arg1 + 0x28) + 1;
    }
    *(arg1 + 100) = *(arg1 + 7);
    *(arg1 + 0x65) = *(arg1 + 6);
    *(arg1 + 0x66) = *arg1 >> 0x28;
    *(arg1 + 0x67) = *arg1 >> 0x20;
    *(arg1 + 0x68) = *arg1 >> 0x18;
    *(arg1 + 0x69) = *arg1 >> 0x10;
    *(arg1 + 0x6a) = *arg1 >> 8;
    *(arg1 + 0x6b) = *arg1;
    fcn.00017048(arg1,arg1 + 0x2c);
    *arg2 = *(arg1 + 0xb);
    *(arg2 + 1) = *(arg1 + 10);
    *(arg2 + 2) = *(arg1 + 9);
    *(arg2 + 3) = *(arg1 + 8);
    *(arg2 + 4) = *(arg1 + 0xf);
    *(arg2 + 5) = *(arg1 + 0xe);
    *(arg2 + 6) = *(arg1 + 0xd);
    *(arg2 + 7) = *(arg1 + 0xc);
    *(arg2 + 8) = *(arg1 + 0x13);
    *(arg2 + 9) = *(arg1 + 0x12);
    *(arg2 + 10) = *(arg1 + 0x11);
    *(arg2 + 0xb) = *(arg1 + 0x10);
    *(arg2 + 0xc) = *(arg1 + 0x17);
    *(arg2 + 0xd) = *(arg1 + 0x16);
    *(arg2 + 0xe) = *(arg1 + 0x15);
    *(arg2 + 0xf) = *(arg1 + 0x14);
    *(arg2 + 0x10) = *(arg1 + 0x1b);
    *(arg2 + 0x11) = *(arg1 + 0x1a);
    *(arg2 + 0x12) = *(arg1 + 0x19);
    *(arg2 + 0x13) = *(arg1 + 0x18);
    *(arg2 + 0x14) = *(arg1 + 0x1f);
    *(arg2 + 0x15) = *(arg1 + 0x1e);
    *(arg2 + 0x16) = *(arg1 + 0x1d);
    *(arg2 + 0x17) = *(arg1 + 0x1c);
    *(arg2 + 0x18) = *(arg1 + 0x23);
    *(arg2 + 0x19) = *(arg1 + 0x22);
    *(arg2 + 0x1a) = *(arg1 + 0x21);
    *(arg2 + 0x1b) = *(arg1 + 0x20);
    *(arg2 + 0x1c) = *(arg1 + 0x27);
    *(arg2 + 0x1d) = *(arg1 + 0x26);
    *(arg2 + 0x1e) = *(arg1 + 0x25);
    *(arg2 + 0x1f) = *(arg1 + 0x24);
    return 0;
}


/* fcn.00019860 @ 0x19860 */

ulong fcn.00019860(int64_t arg1)

{
    *(arg1 + 0x48) = 0;
    *arg1 = 0;
    *(arg1 + 8) = 0xcbbb9d5dc1059ed8;
    *(arg1 + 0x10) = 0x629a292a367cd507;
    *(arg1 + 0x18) = 0x9159015a3070dd17;
    *(arg1 + 0x20) = 0x152fecd8f70e5939;
    *(arg1 + 0x28) = 0x67332667ffc00b31;
    *(arg1 + 0x30) = 0x8eb44a8768581511;
    *(arg1 + 0x38) = 0xdb0c2e0d64f98fa7;
    *(arg1 + 0x40) = 0x47b5481dbefa4fa4;
    return 0;
}


/* fcn.0001c93c @ 0x1c93c */

ulong fcn.0001c93c(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    uint in_register_0000000c;
    int64_t *arg1_00;
    int64_t arg1_01;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar4 = arg3;
    uVar5 = arg3 & 0xffffffff;
    if ((arg2 == 0) || (0x80 < *(arg1_00 + 9))) {
        uVar1 = 0xffffffff;
    }
    else {
        while (uVar3 = uVar5, iVar4 != 0) {
            if ((arg1_00[9] == 0) && (0x7f < uVar3)) {
                uVar1 = fcn.0001c368(arg1_00,arg2);
                if (uVar1 != 0) {
                    return uVar1;
                }
                *arg1_00 = *arg1_00 + 0x400;
                arg2 = arg2 + 0x80;
                uVar5 = uVar3 - 0x80;
            }
            else {
                uVar2 = 0x80 - arg1_00[9];
                if (uVar3 < uVar2) {
                    uVar2 = uVar3;
                }
                arg1_01 = arg1_00 + *(arg1_00 + 9) + 0x4c;
                if ((uVar2 != 0) && (arg1_01 != arg2)) {
                    section..text(arg1_01,arg2,uVar2);
                }
                *(arg1_00 + 9) = arg1_00[9] + uVar2;
                arg2 = arg2 + uVar2;
                uVar5 = uVar3 - uVar2;
                if (arg1_00[9] == 0x80) {
                    uVar1 = fcn.0001c368(arg1_00,arg1_00 + 0x4c);
                    if (uVar1 != 0) {
                        return uVar1;
                    }
                    *arg1_00 = *arg1_00 + 0x400;
                    *(arg1_00 + 9) = 0;
                }
            }
            iVar4 = uVar5;
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.0001ca20 @ 0x1ca20 */

ulong fcn.0001ca20(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t *arg1_00;
    uchar *puVar3;
    int64_t iVar4;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if ((arg2 == 0) || (0x7f < *(arg1_00 + 9))) {
        uVar2 = 0xffffffff;
    }
    else {
        *arg1_00 = *arg1_00 + *(arg1_00 + 9) * 8;
        *(*(arg1_00 + 9) + 0x4c + arg1_00) = 0x80;
        *(arg1_00 + 9) = arg1_00[9] + 1;
        uVar1 = *(arg1_00 + 9);
        if (0x70 < uVar1) {
            while (uVar1 < 0x80) {
                *(uVar1 + 0x4c + arg1_00) = 0;
                *(arg1_00 + 9) = arg1_00[9] + 1;
                uVar1 = *(arg1_00 + 9);
            }
            fcn.0001c368(arg1_00,arg1_00 + 0x4c);
            *(arg1_00 + 9) = 0;
        }
        while (*(arg1_00 + 9) < 0x78) {
            *(*(arg1_00 + 9) + 0x4c + arg1_00) = 0;
            *(arg1_00 + 9) = arg1_00[9] + 1;
        }
        *(arg1_00 + 0xc4) = *(arg1_00 + 7);
        *(arg1_00 + 0xc5) = *(arg1_00 + 6);
        *(arg1_00 + 0xc6) = *(arg1_00 + 5);
        *(arg1_00 + 199) = *(arg1_00 + 4);
        *(arg1_00 + 0x19) = *(arg1_00 + 3);
        *(arg1_00 + 0xc9) = *(arg1_00 + 2);
        *(arg1_00 + 0xca) = *(arg1_00 + 1);
        *(arg1_00 + 0xcb) = *arg1_00;
        fcn.0001c368(arg1_00,arg1_00 + 0x4c);
        puVar3 = arg1_00 + 0xe;
        arg2 = arg2 - arg1_00;
        iVar4 = 8;
        do {
            puVar3[arg2 + -0xe] = puVar3[1];
            puVar3[arg2 + -0xd] = *puVar3;
            puVar3[arg2 + -0xc] = puVar3[-1];
            puVar3[arg2 + -0xb] = puVar3[-2];
            puVar3[arg2 + -10] = puVar3[-3];
            puVar3[arg2 + -9] = puVar3[-4];
            puVar3[arg2 + -8] = puVar3[-5];
            puVar3[arg2 + -7] = puVar3[-6];
            puVar3 = puVar3 + 8;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001c8c0 @ 0x1c8c0 */

ulong fcn.0001c8c0(int64_t arg1)

{
    *(arg1 + 0x48) = 0;
    *arg1 = 0;
    *(arg1 + 8) = 0x6a09e667f3bcc908;
    *(arg1 + 0x10) = 0xbb67ae8584caa73b;
    *(arg1 + 0x18) = 0x3c6ef372fe94f82b;
    *(arg1 + 0x20) = 0xa54ff53a5f1d36f1;
    *(arg1 + 0x28) = 0x510e527fade682d1;
    *(arg1 + 0x30) = 0x9b05688c2b3e6c1f;
    *(arg1 + 0x38) = 0x1f83d9abfb41bd6b;
    *(arg1 + 0x40) = 0x5be0cd19137e2179;
    return 0;
}


/* fcn.0001c01c @ 0x1c01c */

ulong fcn.0001c01c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg2_00;
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t arg3_00;
    
    uVar1 = *(arg1 + 0x20) + arg3 * 8;
    if (uVar1 < *(arg1 + 0x20)) {
        *(arg1 + 0x24) = *(arg1 + 0x24) + 1;
    }
    uVar2 = *(arg1 + 0x68);
    *(arg1 + 0x24) = *(arg1 + 0x24) + (arg3 >> 0x1d);
    *(arg1 + 0x20) = uVar1;
    if (uVar2 != 0) {
        arg2_00 = arg1 + 0x28;
        if ((arg3 < 0x40) && (uVar2 + arg3 < 0x40)) {
            if (arg2_00 + uVar2 != arg2) {
                section..text(arg2_00 + uVar2,arg2,arg3);
            }
            *(arg1 + 0x68) = *(arg1 + 0x68) + arg3;
            return 1;
        }
        arg3_00 = 0x40 - uVar2;
        if ((arg3_00 != 0) && (arg2_00 + uVar2 != arg2)) {
            section..text(arg2_00 + uVar2,arg2,arg3_00);
        }
        fcn.000198dc(arg1,arg2_00,1);
        *(arg1 + 0x68) = 0;
        arg2 = arg2 + arg3_00;
        arg3 = arg3 - arg3_00;
        fcn.00010320(arg2_00,0x40,0);
    }
    uVar2 = arg3 >> 6;
    if (uVar2 != 0) {
        fcn.000198dc(arg1,arg2,uVar2);
        arg2 = arg2 + uVar2 * 0x40;
        arg3 = arg3 + uVar2 * -0x40;
    }
    if (arg3 != 0) {
        *(arg1 + 0x68) = arg3;
        if (arg1 + 0x28 != arg2) {
            section..text(arg1 + 0x28,arg2,arg3);
        }
    }
    return 1;
}


/* fcn.0001c134 @ 0x1c134 */

//WARNING: Variable defined which should be unmapped: var_3fh

ulong fcn.0001c134(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    uint32_t uVar1;
    uint uVar2;
    uint64_t uVar3;
    int64_t var_3fh;
    int32_t var_3fh_3;
    int64_t var_3fh_2;
    
    uVar1 = *(arg2 + 0x68);
    arg2_00 = arg2 + 0x28;
    *(uVar1 + arg2_00) = 0x80;
    uVar3 = uVar1 + 1;
    if (0x38 < uVar3) {
        if (0x40 - uVar3 != 0) {
            fcn.00010320(uVar3 + arg2_00,0x40 - uVar3,0);
        }
        uVar3 = 0;
        fcn.000198dc(arg2,arg2_00,1);
    }
    if (0x38 - uVar3 != 0) {
        fcn.00010320(uVar3 + arg2_00,0x38 - uVar3,0);
    }
    *(arg2 + 0x60) = *(arg2 + 0x27);
    *(arg2 + 0x61) = *(arg2 + 0x26);
    *(arg2 + 0x62) = *(arg2 + 0x25);
    *(arg2 + 99) = *(arg2 + 0x24);
    *(arg2 + 100) = *(arg2 + 0x23);
    *(arg2 + 0x65) = *(arg2 + 0x22);
    *(arg2 + 0x66) = *(arg2 + 0x21);
    *(arg2 + 0x67) = *(arg2 + 0x20);
    fcn.000198dc(arg2,arg2 + 0x28,1);
    *(arg2 + 0x68) = 0;
    fcn.00010320(arg2 + 0x28,0x40,0);
    uVar2 = *arg2;
    *arg1 = uVar2 >> 0x18;
    *(arg1 + 1) = uVar2 >> 0x10;
    *(arg1 + 2) = uVar2 >> 8;
    *(arg1 + 3) = uVar2;
    uVar2 = *(arg2 + 4);
    *(arg1 + 4) = uVar2 >> 0x18;
    *(arg1 + 5) = uVar2 >> 0x10;
    *(arg1 + 6) = uVar2 >> 8;
    *(arg1 + 7) = uVar2;
    uVar2 = *(arg2 + 8);
    *(arg1 + 8) = uVar2 >> 0x18;
    *(arg1 + 9) = uVar2 >> 0x10;
    *(arg1 + 10) = uVar2 >> 8;
    *(arg1 + 0xb) = uVar2;
    uVar2 = *(arg2 + 0xc);
    *(arg1 + 0xc) = uVar2 >> 0x18;
    *(arg1 + 0xd) = uVar2 >> 0x10;
    *(arg1 + 0xe) = uVar2 >> 8;
    *(arg1 + 0xf) = uVar2;
    uVar2 = *(arg2 + 0x10);
    *(arg1 + 0x10) = uVar2 >> 0x18;
    *(arg1 + 0x11) = uVar2 >> 0x10;
    *(arg1 + 0x12) = uVar2 >> 8;
    *(arg1 + 0x13) = uVar2;
    uVar2 = *(arg2 + 0x14);
    *(arg1 + 0x14) = uVar2 >> 0x18;
    *(arg1 + 0x15) = uVar2 >> 0x10;
    *(arg1 + 0x16) = uVar2 >> 8;
    *(arg1 + 0x17) = uVar2;
    uVar2 = *(arg2 + 0x18);
    *(arg1 + 0x18) = uVar2 >> 0x18;
    *(arg1 + 0x19) = uVar2 >> 0x10;
    *(arg1 + 0x1a) = uVar2 >> 8;
    *(arg1 + 0x1b) = uVar2;
    uVar2 = *(arg2 + 0x1c);
    *(arg1 + 0x1c) = uVar2 >> 0x18;
    *(arg1 + 0x1d) = uVar2 >> 0x10;
    *(arg1 + 0x1e) = uVar2 >> 8;
    *(arg1 + 0x1f) = uVar2;
    return 1;
}


/* fcn.000149e8 @ 0x149e8 */

ulong fcn.000149e8(int64_t arg1,ulong noname_1,int64_t arg2,uint32_t arg3)

{
    uint64_t uVar1;
    uint32_t arg2_00;
    uint in_R9;
    
    if (((arg1 == 0) || (arg2 == 0)) || (1000000 < CONCAT44(in_R9,arg3))) {
        return 0x8000000000000002;
    }
    arg2_00 = arg3;
    if (0x29 < CONCAT44(in_R9,arg3)) {
        arg2_00 = 0x29;
    }
    uVar1 = fcn.000149bc(arg2,arg2_00);
    if ((0x28 < CONCAT44(in_R9,arg3)) && (0x28 < uVar1)) {
        return 0x8000000000000005;
    }
    if (CONCAT44(in_R9,arg3) < uVar1) {
        uVar1 = CONCAT44(in_R9,arg3);
    }
    if (arg2 <= arg1) {
        if (arg1 < arg2 + uVar1 + 1) {
            return 0x800000000000000f;
        }
        if (arg2 < arg1) goto code_r0x00014a78;
    }
    if (arg2 < arg1 + 0x29) {
        return 0x800000000000000f;
    }
code_r0x00014a78:
    if (uVar1 != 0) {
        arg2 = arg2 - arg1;
        do {
            if (*(arg1 + arg2) == '\0') break;
            *arg1 = *(arg1 + arg2);
            arg1 = arg1 + 1;
            uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
    }
    *arg1 = '\0';
    return 0;
}


/* fcn.00013c0c @ 0x13c0c */

//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h

int64_t fcn.00013c0c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong noname_1;
    uint64_t uVar2;
    uchar *arg1_00;
    bool bVar3;
    int64_t iStackX_20;
    int64_t var_bp_30h;
    int32_t var_38h;
    int32_t var_3ch;
    int32_t var_40h;
    int32_t var_44h;
    int32_t var_48h;
    int32_t var_4ch_2;
    int32_t var_a0h;
    int32_t var_a4h;
    int32_t var_a8h;
    int16_t var_ach;
    int64_t var_aeh;
    int32_t var_1f6h;
    int64_t var_200h;
    int64_t var_240h;
    uint32_t var_288h;
    int64_t var_310h;
    int64_t var_410h;
    int64_t var_428h;
    ulong *apuStack_4d8 [2];
    uint uStack_4c8;
    uint uStack_4c4;
    uint uStack_4c0;
    uint uStack_4bc;
    uint uStack_4b8;
    uint uStack_4b4;
    uint uStack_4b0;
    char acStack_468 [4];
    char acStack_464 [4];
    char acStack_460 [4];
    char acStack_45c [4];
    char acStack_458 [4];
    char cStack_454;
    ulong uStack_448;
    uint uStack_440;
    uint uStack_43c;
    uint uStack_438;
    uint uStack_434;
    uint uStack_430;
    uint uStack_42c;
    uint uStack_428;
    uint uStack_424;
    uint32_t uStack_420;
    uint uStack_3d8;
    uint uStack_3d4;
    uint uStack_3d0;
    uint uStack_3cc;
    uint uStack_3c8;
    uint uStack_3c4;
    uint uStack_3c0;
    uint uStack_3bc;
    uint uStack_368;
    uint uStack_364;
    uint uStack_360;
    ushort uStack_35c;
    uchar auStack_35a [328];
    uint uStack_212;
    uchar auStack_208 [64];
    uchar auStack_1c8 [72];
    uint32_t uStack_180;
    uchar auStack_f8 [144];
    int64_t var_60h;
    int32_t var_50h;
    int8_t var_4ch;
    int64_t var_40h_2;
    int32_t var_38h_2;
    int32_t var_34h_2;
    int32_t var_2ch;
    int32_t var_bp_28h;
    int32_t var_24h;
    int32_t var_bp_20h;
    int32_t var_1ch;
    uint32_t var_18h;
    
    uVar2 = 0;
    apuStack_4d8[0] = NULL;
    iStackX_20 = 0;
    acStack_458 = str.Embedded_UEFI_Driver._16_4_;
    cStack_454 = str.Embedded_UEFI_Driver[0x14];
    acStack_468 = str.Embedded_UEFI_Driver._0_4_;
    acStack_464 = str.Embedded_UEFI_Driver._4_4_;
    acStack_460 = str.Embedded_UEFI_Driver._8_4_;
    acStack_45c = str.Embedded_UEFI_Driver._12_4_;
    if ((arg1 == 0) || (arg2 == 0)) {
        iVar1 = 0;
    }
    else {
        if ((*0x1e3d8 == 0) && (iVar1 = (**(*0x1e3e8 + 0x140))(0x1d7a0,0,0x1e3d8), iVar1 < 0)) {
            return iVar1;
        }
        iVar1 = (**(*0x1e3e8 + 0x140))(0x1d890,0,&iStackX_20);
        if (-1 < iVar1) {
            uStack_368 = 0;
            uStack_364 = 1;
            uStack_212 = 0x25;
            iVar1 = (**(*0x1e3e8 + 0x40))(4);
            if (-1 < iVar1) {
                if (*(iStackX_20 + 6) == '\x01') {
                    uStack_4b0 = 0;
                    uStack_4b4 = 0;
                    uStack_4c8 = 0x67452301;
                    uStack_4c4 = 0xefcdab89;
                    uStack_4c0 = 0x98badcfe;
                    uStack_4bc = 0x10325476;
                    uStack_4b8 = 0xc3d2e1f0;
                    fcn.00016e40(&uStack_4c8,arg1,arg2 & 0xffffffff);
                    uStack_35c = 4;
                    fcn.00016f20(auStack_35a,&uStack_4c8);
                    uVar2 = 1;
                }
                else if (*(iStackX_20 + 6) == '\x02') {
                    bVar3 = (*(iStackX_20 + 0x18) & 1) != 0;
                    if (bVar3) {
                        uStack_4b0 = 0;
                        uStack_4b4 = 0;
                        uStack_4c8 = 0x67452301;
                        uStack_4c4 = 0xefcdab89;
                        uStack_4c0 = 0x98badcfe;
                        uStack_4bc = 0x10325476;
                        uStack_4b8 = 0xc3d2e1f0;
                        fcn.00016e40(&uStack_4c8,arg1,arg2 & 0xffffffff);
                        uStack_35c = 4;
                        fcn.00016f20(auStack_35a,&uStack_4c8);
                    }
                    uVar2 = bVar3;
                    if ((*(iStackX_20 + 0x18) & 2) != 0) {
                        uStack_420 = 0;
                        uStack_448 = 0;
                        uStack_440 = 0x6a09e667;
                        uStack_43c = 0xbb67ae85;
                        uStack_438 = 0x3c6ef372;
                        uStack_434 = 0xa54ff53a;
                        uStack_430 = 0x510e527f;
                        uStack_42c = 0x9b05688c;
                        uStack_428 = 0x1f83d9ab;
                        uStack_424 = 0x5be0cd19;
                        fcn.000195f4(&uStack_448,arg1,arg2 & 0xffffffff);
                        *(auStack_35a + uVar2 * 0x42 + -2) = 0xb;
                        if (uStack_420 < 0x40) {
                            fcn.000196e4(&uStack_448,auStack_35a + uVar2 * 0x42);
                        }
                        uVar2 = uVar2 + 1;
                    }
                    if ((*(iStackX_20 + 0x18) & 4) != 0) {
                        fcn.00019860(auStack_1c8);
                        fcn.0001c93c(auStack_1c8,arg1,arg2 & 0xffffffff);
                        *(auStack_35a + uVar2 * 0x42 + -2) = 0xc;
                        arg1_00 = auStack_35a + uVar2 * 0x42;
                        if (((arg1_00 != NULL) && (uStack_180 < 0x80)) &&
                           (fcn.0001ca20(auStack_1c8,auStack_208), arg1_00 != auStack_208)) {
                            section..text(arg1_00,auStack_208,0x30);
                        }
                        uVar2 = uVar2 + 1;
                    }
                    if ((*(iStackX_20 + 0x18) & 8) != 0) {
                        fcn.0001c8c0(auStack_f8);
                        fcn.0001c93c(auStack_f8,arg1,arg2 & 0xffffffff);
                        *(auStack_35a + uVar2 * 0x42 + -2) = 0xd;
                        fcn.0001ca20(auStack_f8,auStack_35a + uVar2 * 0x42);
                        uVar2 = uVar2 + 1;
                    }
                    if ((*(iStackX_20 + 0x18) & 0x10) != 0) {
                        fcn.00010320(&uStack_3d8,0x6c,0);
                        uStack_3d8 = 0x7380166f;
                        uStack_3d4 = 0x4914b2b9;
                        uStack_3d0 = 0x172442d7;
                        uStack_3cc = 0xda8a0600;
                        uStack_3c8 = 0xa96f30bc;
                        uStack_3c4 = 0x163138aa;
                        uStack_3c0 = 0xe38dee4d;
                        uStack_3bc = 0xb0fb0e4e;
                        if (arg2 != 0) {
                            fcn.0001c01c(&uStack_3d8,arg1,arg2 & 0xffffffff);
                        }
                        *(auStack_35a + uVar2 * 0x42 + -2) = 0x12;
                        fcn.0001c134(auStack_35a + uVar2 * 0x42,&uStack_3d8);
                        uVar2 = uVar2 + 1;
                    }
                }
                noname_1 = 0;
                uStack_360 = uVar2;
                iVar1 = (**(*0x1e3e8 + 0x140))(str.H__tx,0,apuStack_4d8);
                if (iVar1 < 0) {
                    (**(*0x1e3e8 + 0x48))(0);
                }
                else {
                    pe_dos_header = 0x14;
                    iVar1 = fcn.000149e8(1,noname_1,acStack_468,0x14);
                    if (-1 < iVar1) {
                        *0x15 = arg1;
                        *0x1d = arg2;
                        iVar1 = (**apuStack_4d8[0])(*0x1e3d8,0,0,0,&uStack_368,0);
                    }
                    (**(*0x1e3e8 + 0x48))(0);
                }
            }
        }
    }
    return iVar1;
}


/* fcn.00014178 @ 0x14178 */

void fcn.00014178(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t aiStackX_10 [3];
    
    aiStackX_10[0] = arg2;
    iVar1 = (**(*0x1e3e8 + 0x118))(arg1,0x1d760,aiStackX_10,arg1,0,2);
    if (-1 < iVar1) {
        iVar1 = (**(*0x1e3e8 + 0x140))(0x1d860,0,0x1e398);
        if (-1 < iVar1) {
            (***0x1e398)(*0x1e398,aiStackX_10[0],0,0x1e3b0);
        }
    }
    return;
}


/* fcn.00010dd0 @ 0x10dd0 */

//WARNING: Variable defined which should be unmapped: var_28h

int64_t fcn.00010dd0(void)

{
    int64_t iVar1;
    int64_t iVar2;
    uchar *puStackX_8;
    ulong uStackX_10;
    ulong uStackX_18;
    int64_t var_28h_2;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    ulong uVar3;
    uchar auStack_48 [8];
    ulong uStack_40;
    int64_t var_28h;
    int64_t var_bp_20h;
    
    puStackX_8 = NULL;
    iVar1 = (**(*0x1e3f8 + 0x80))(0x27,&uStackX_18,auStack_48,&var_28h_2);
    if (-1 < iVar1) {
        uStackX_10 = uStackX_18;
        iVar1 = (**(*0x1e3e8 + 0x40))(4,uStackX_18,&puStackX_8);
        if ((puStackX_8 == NULL) || (iVar1 < 0)) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            (**(*0x1e3e8 + 0x168))(puStackX_8,uStackX_10,0);
            iVar2 = (**(*0x1e3f8 + 0x48))(L"SecureBoot",0x1d6f0,0,&uStackX_10,puStackX_8);
            iVar1 = *0x1d6f8;
            uStack_40 = *0x1d6f0;
            if (iVar2 < 0) {
                uStackX_10 = 0;
                *puStackX_8 = 0;
            }
            uVar3 = uStackX_10;
            fcn.00010694(7,0x80000001,0x1d938,&uStack_40,iVar1,var_28h);
            uStackX_10 = uStackX_18;
            (**(*0x1e3e8 + 0x168))(puStackX_8,uStackX_18,0);
            iVar2 = (**(*0x1e3f8 + 0x48))(0x1d950,0x1d6f0,0,&uStackX_10,puStackX_8,uVar3);
            iVar1 = *0x1d6f8;
            uStack_40 = *0x1d6f0;
            if (iVar2 < 0) {
                uStackX_10 = 0;
                *puStackX_8 = 0;
            }
            uVar3 = uStackX_10;
            fcn.00010694(7,0x80000001,0x1d950,&uStack_40,iVar1,var_28h);
            uStackX_10 = uStackX_18;
            (**(*0x1e3e8 + 0x168))(puStackX_8,uStackX_18,0);
            iVar2 = (**(*0x1e3f8 + 0x48))(0x1d958,0x1d6f0,0,&uStackX_10,puStackX_8,uVar3);
            iVar1 = *0x1d6f8;
            uStack_40 = *0x1d6f0;
            if (iVar2 < 0) {
                uStackX_10 = 0;
                *puStackX_8 = 0;
            }
            uVar3 = uStackX_10;
            iVar1 = fcn.00010694(7,0x80000001,0x1d958,&uStack_40,iVar1,var_28h);
            if (-1 < iVar1) {
                uStackX_10 = uStackX_18;
                (**(*0x1e3e8 + 0x168))(puStackX_8,uStackX_18,0);
                iVar2 = (**(*0x1e3f8 + 0x48))(0x1d920,0x1d770,0,&uStackX_10,puStackX_8,uVar3);
                iVar1 = *0x1d778;
                uStack_40 = *0x1d770;
                if (iVar2 < 0) {
                    uStackX_10 = 0;
                    *puStackX_8 = 0;
                }
                uVar3 = uStackX_10;
                iVar1 = fcn.00010694(7,0x80000001,0x1d920,&uStack_40,iVar1,var_28h);
                if (-1 < iVar1) {
                    uStackX_10 = uStackX_18;
                    (**(*0x1e3e8 + 0x168))(puStackX_8,uStackX_18,0);
                    iVar2 = (**(*0x1e3f8 + 0x48))(0x1d960,0x1d770,0,&uStackX_10,puStackX_8,uVar3);
                    iVar1 = *0x1d778;
                    uStack_40 = *0x1d770;
                    if (iVar2 < 0) {
                        uStackX_10 = 0;
                        *puStackX_8 = 0;
                    }
                    iVar1 = fcn.00010694(7,0x80000001,0x1d960,&uStack_40,iVar1,var_28h);
                    if (-1 < iVar1) {
                        uStackX_10 = uStackX_18;
                        (**(*0x1e3e8 + 0x168))(puStackX_8,uStackX_18,0);
                    }
                }
            }
            if (*0x1e438 != '\0') {
                fcn.0001d614(1,0x3058a15);
            }
            (**(*0x1e3e8 + 0x48))(puStackX_8);
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.00015bdc @ 0x15bdc */

void fcn.00015bdc(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = 0x159e8;
    if (arg1 != 0) {
        iVar1 = arg1;
    }
    (**(*0x1e3e8 + 0x170))(0x200,8,iVar1,0,0x1d730,arg2);
    return;
}


/* fcn.0001ce70 @ 0x1ce70 */

uchar fcn.0001ce70(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uStackX_8;
    uint32_t auStackX_10 [2];
    int32_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int iStack_48;
    int32_t iStack_44;
    uint32_t var_38h;
    int32_t var_34h;
    int32_t var_30h_2;
    int32_t var_2ch;
    int32_t var_28h_2;
    int32_t var_24h;
    uint32_t var_20h_2;
    int32_t var_1ch;
    int32_t iStack_1c;
    int32_t var_ch;
    
    uStackX_8 = arg1 & 0xffffffff00000000;
    auStackX_10[0] = 0;
    _var_20h = 0x18;
    var_28h = 0x18;
    iVar1 = (**(*0x1e3f8 + 0x48))(L"AMITCGPPIVAR",0x1d7b0,&uStackX_8,&var_20h,&iStack_48);
    if (iVar1 == -0x7ffffffffffffff2) {
        iStack_48 = 0;
        iStack_44 = 0;
        var_38h = 0;
        var_34h = 0;
        var_30h_2 = 0;
        var_2ch = 0;
        fcn.0001cd9c(0x1db48,0x1d7b0,7,_var_20h);
    }
    else {
        if (iStack_48 == 0) {
            iVar1 = (**(*0x1e3f8 + 0x48))(L"AMITCGPPIVAR2",0x1d7b0,auStackX_10,&var_28h,&var_28h_2);
            if ((-1 < iVar1) && (var_28h_2 == 0x17)) {
                iStack_44 = var_24h;
                var_2ch = iStack_1c;
                iStack_48 = 0x17;
                fcn.0001cd9c(0x1db48,0x1d7b0,uStackX_8 & 0xffffffff,_var_20h);
                var_28h_2 = 0;
                fcn.0001cd9c(0x1e340,0x1d7b0,auStackX_10[0],var_28h);
            }
        }
        *0x1e468 = var_2ch;
    }
    return iStack_48;
}


/* fcn.00014260 @ 0x14260 */

void fcn.00014260(void)

{
    int64_t iVar1;
    code *pcVar2;
    ulong uStackX_18;
    uchar auStackX_20 [8];
    uchar auStack_18 [8];
    uchar auStack_10 [8];
    
    iVar1 = fcn.00010dd0();
    if ((iVar1 < 0) && (*0x1e438 != '\0')) {
        fcn.0001d614(0x40000002,0x3058a03);
    }
    if (0x1ffff < *(*0x1e3e0 + 8)) {
        iVar1 = fcn.00015bdc(0x11954,auStackX_20);
        if (-1 < iVar1) {
            (**(*0x1e3e8 + 0x50))(0x200,0x10,0x140c8,*0x1e3b8,0x1e480);
            (**(*0x1e3e8 + 0xa8))(0x1d750,*0x1e480,0x1e3b8);
            iVar1 = (**(*0x1e3e8 + 0x50))(0x201,0x10,0x13b70,0,auStack_18);
            if (-1 < iVar1) {
                iVar1 = (**(*0x1e3e8 + 0x170))(0x200,0x10,0x13b9c,0,str._aUlO_,auStack_10);
                if (-1 < iVar1) {
                    iVar1 = (**(*0x1e3e8 + 0x50))(0x200,8,0x11c24,0,&uStackX_18);
                    if (-1 < iVar1) {
                        (**(*0x1e3e8 + 0xa8))(0x1d7f0,uStackX_18,0x1e460);
                    }
                    iVar1 = 0;
                    pcVar2 = 0x12258;
                    while (pcVar2 != NULL) {
                        (*pcVar2)();
                        iVar1 = iVar1 + 1;
                        pcVar2 = *(iVar1 * 8 + 0x1dc50);
                    }
                }
            }
        }
    }
    return;
}


/* fcn.000149bc @ 0x149bc */

uint64_t fcn.000149bc(uint32_t arg1,uint32_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    uint in_register_00000014;
    
    if (((CONCAT44(in_register_0000000c,arg1) != 0) && (CONCAT44(in_register_00000014,arg2) != 0)) &&
       (uVar1 = 0, *CONCAT44(in_register_0000000c,arg1) != '\0')) {
        do {
            if (CONCAT44(in_register_00000014,arg2) - 1U <= uVar1) {
                return CONCAT44(in_register_00000014,arg2);
            }
            uVar1 = uVar1 + 1;
        } while (*(uVar1 + CONCAT44(in_register_0000000c,arg1)) != '\0');
        return uVar1;
    }
    return 0;
}


/* fcn.00015908 @ 0x15908 */

void fcn.00015908(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00014ba0(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00014b6c @ 0x14b6c */

uchar * fcn.00014b6c(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00014acc @ 0x14acc */

int64_t fcn.00014acc(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint in_register_00000014;
    char *pcVar1;
    uint in_R8;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_R8,arg3);
    pcVar1 = CONCAT44(in_register_00000014,arg2);
    if (uVar2 == 0) {
        return 0;
    }
    for (; (((*arg1 != '\0' && (*pcVar1 != '\0')) && (*arg1 == *pcVar1)) && (1 < uVar2)); uVar2 = uVar2 - 1) {
        arg1 = arg1 + 1;
        pcVar1 = pcVar1 + 1;
    }
    return *arg1 - *pcVar1;
}


/* fcn.000103a0 @ 0x103a0 */

void fcn.000103a0(void)

{
    return;
}


/* fcn.00015cb0 @ 0x15cb0 */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h
//WARNING: Variable defined which should be unmapped: var_39h

void fcn.00015cb0(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint in_register_00000014;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    uint32_t uVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    uint32_t uVar27;
    uint32_t uVar28;
    int32_t var_6fh;
    int32_t var_77h;
    int32_t var_7fh;
    uint32_t uStack_98;
    uint32_t uStack_94;
    uint32_t uStack_90;
    uint32_t uStack_8c;
    uint32_t uStack_88;
    uchar auStack_84 [3];
    int32_t var_79h;
    int32_t var_75h;
    int32_t var_71h;
    int32_t var_6dh;
    int32_t var_69h;
    int32_t var_65h;
    int32_t var_61h;
    int32_t var_5dh;
    int32_t var_59h;
    int32_t var_55h;
    int32_t var_51h;
    int32_t var_4dh;
    int32_t var_49h;
    int32_t var_45h;
    int64_t var_39h;
    int32_t var_31h;
    int32_t var_2dh;
    int32_t var_29h;
    int32_t var_25h;
    int32_t var_21h;
    int32_t var_1dh;
    int32_t var_19h;
    int32_t var_15h;
    int32_t var_11h;
    int32_t var_dh;
    int32_t var_9h;
    int32_t var_5h;
    int32_t var_1h;
    int32_t var_3h;
    
    if (&uStack_98 != CONCAT44(in_register_00000014,arg2)) {
        section..text(&uStack_98,CONCAT44(in_register_00000014,arg2),0x40);
    }
    uVar3 = *(arg1 + 8);
    uVar13 = *(arg1 + 0xc);
    uVar1 = uStack_98 >> 8 & 0xff00ff00 | uStack_98 << 0x18 | (uStack_98 & 0xff00) << 8 | uStack_98 >> 0x18;
    uVar11 = uVar1 + 0x5a827999 +
             ((uVar13 ^ uVar3) & *(arg1 + 4) ^ uVar13) + (*arg1 << 5 | *arg1 >> 0x1b) + *(arg1 + 0x10);
    uVar2 = *(arg1 + 4) >> 2 | *(arg1 + 4) << 0x1e;
    uVar8 = uStack_94 >> 8 & 0xff00ff00 | uStack_94 << 0x18 | (uStack_94 & 0xff00) << 8 | uStack_94 >> 0x18;
    uVar9 = *arg1 >> 2 | *arg1 << 0x1e;
    uVar13 = ((uVar3 ^ uVar2) & *arg1 ^ uVar3) + (uVar11 * 0x20 | uVar11 >> 0x1b) + uVar8 + uVar13 + 0x5a827999;
    uVar12 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar17 = uStack_90 >> 8 & 0xff00ff00 | uStack_90 << 0x18 | (uStack_90 & 0xff00) << 8 | uStack_90 >> 0x18;
    uVar18 = uVar17 + (uVar13 * 0x20 | uVar13 >> 0x1b) + ((uVar2 ^ uVar9) & uVar11 ^ uVar2) + uVar3 + 0x5a827999;
    uVar11 = uStack_8c >> 8 & 0xff00ff00 | uStack_8c << 0x18 | (uStack_8c & 0xff00) << 8 | uStack_8c >> 0x18;
    uVar3 = uVar2 + 0x5a827999 + ((uVar12 ^ uVar9) & uVar13 ^ uVar9) + (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar11;
    uVar14 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar4 = uStack_88 >> 8 & 0xff00ff00 | uStack_88 << 0x18 | (uStack_88 & 0xff00) << 8 | uStack_88 >> 0x18;
    uVar19 = uVar18 >> 2 | uVar18 * 0x40000000;
    uVar2 = uVar9 + 0x5a827999 + ((uVar12 ^ uVar14) & uVar18 ^ uVar12) + (uVar3 * 0x20 | uVar3 >> 0x1b) + uVar4;
    uVar9 = _auStack_84 >> 8 & 0xff00ff00 | _auStack_84 << 0x18 | (_auStack_84 & 0xff00) << 8 | _auStack_84 >> 0x18;
    uVar13 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar12 = uVar12 + ((uVar14 ^ uVar19) & uVar3 ^ uVar14) + (uVar2 * 0x20 | uVar2 >> 0x1b) + uVar9 + 0x5a827999;
    uVar18 = stack0xffffffffffffff80 >> 8 & 0xff00ff00 | stack0xffffffffffffff80 << 0x18 |
             (stack0xffffffffffffff80 & 0xff00) << 8 | stack0xffffffffffffff80 >> 0x18;
    uVar10 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar14 = uVar14 + ((uVar19 ^ uVar13) & uVar2 ^ uVar19) + (uVar12 * 0x20 | uVar12 >> 0x1b) + uVar18 + 0x5a827999;
    uVar5 = stack0xffffffffffffff84 >> 8 & 0xff00ff00 | stack0xffffffffffffff84 << 0x18 |
            (stack0xffffffffffffff84 & 0xff00) << 8 | stack0xffffffffffffff84 >> 0x18;
    uVar2 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar19 = uVar19 + ((uVar13 ^ uVar10) & uVar12 ^ uVar13) + (uVar14 * 0x20 | uVar14 >> 0x1b) + 0x5a827999 + uVar5;
    uVar6 = stack0xffffffffffffff88 >> 8 & 0xff00ff00 | stack0xffffffffffffff88 << 0x18 |
            (stack0xffffffffffffff88 & 0xff00) << 8 | stack0xffffffffffffff88 >> 0x18;
    uVar15 = uVar14 >> 2 | uVar14 * 0x40000000;
    uVar13 = uVar13 + ((uVar2 ^ uVar10) & uVar14 ^ uVar10) + (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x5a827999 + uVar6;
    uVar7 = stack0xffffffffffffff8c >> 8 & 0xff00ff00 | stack0xffffffffffffff8c << 0x18 |
            (stack0xffffffffffffff8c & 0xff00) << 8 | stack0xffffffffffffff8c >> 0x18;
    uVar20 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar10 = uVar10 + ((uVar2 ^ uVar15) & uVar19 ^ uVar2) + (uVar13 * 0x20 | uVar13 >> 0x1b) + 0x5a827999 + uVar7;
    uVar12 = stack0xffffffffffffff90 >> 8 & 0xff00ff00 | stack0xffffffffffffff90 << 0x18 |
             (stack0xffffffffffffff90 & 0xff00) << 8 | stack0xffffffffffffff90 >> 0x18;
    uVar3 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar13 = uVar12 + (uVar10 * 0x20 | uVar10 >> 0x1b) + ((uVar15 ^ uVar20) & uVar13 ^ uVar15) + uVar2 + 0x5a827999;
    uVar22 = stack0xffffffffffffff94 >> 8 & 0xff00ff00 | stack0xffffffffffffff94 << 0x18 |
             (stack0xffffffffffffff94 & 0xff00) << 8 | stack0xffffffffffffff94 >> 0x18;
    uVar14 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar2 = ((uVar20 ^ uVar3) & uVar10 ^ uVar20) + (uVar13 * 0x20 | uVar13 >> 0x1b) + uVar22 + uVar15 + 0x5a827999;
    uVar27 = stack0xffffffffffffff98 >> 8 & 0xff00ff00 | stack0xffffffffffffff98 << 0x18 |
             (stack0xffffffffffffff98 & 0xff00) << 8 | stack0xffffffffffffff98 >> 0x18;
    uVar10 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar13 = ((uVar3 ^ uVar14) & uVar13 ^ uVar3) + (uVar2 * 0x20 | uVar2 >> 0x1b) + uVar27 + uVar20 + 0x5a827999;
    uVar25 = stack0xffffffffffffff9c >> 8 & 0xff00ff00 | stack0xffffffffffffff9c << 0x18 |
             (stack0xffffffffffffff9c & 0xff00) << 8 | stack0xffffffffffffff9c >> 0x18;
    uVar19 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar20 = ((uVar10 ^ uVar14) & uVar2 ^ uVar14) + (uVar13 * 0x20 | uVar13 >> 0x1b) + uVar25 + uVar3 + 0x5a827999;
    uVar16 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar2 = stack0xffffffffffffffa0 >> 8 & 0xff00ff00 | stack0xffffffffffffffa0 << 0x18 |
            (stack0xffffffffffffffa0 & 0xff00) << 8 | stack0xffffffffffffffa0 >> 0x18;
    uVar3 = uVar2 + (uVar20 * 0x20 | uVar20 >> 0x1b) + ((uVar10 ^ uVar19) & uVar13 ^ uVar10) + uVar14 + 0x5a827999;
    uVar21 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar15 = stack0xffffffffffffffa4 >> 8 & 0xff00ff00 | stack0xffffffffffffffa4 << 0x18 |
             (stack0xffffffffffffffa4 & 0xff00) << 8 | stack0xffffffffffffffa4 >> 0x18;
    uVar1 = uVar25 ^ uVar6 ^ uVar17 ^ uVar1;
    uVar14 = uVar1 << 1 | uVar1 < 0;
    uVar13 = uVar15 + (uVar3 * 0x20 | uVar3 >> 0x1b) + ((uVar19 ^ uVar16) & uVar20 ^ uVar19) + uVar10 + 0x5a827999;
    uVar19 = uVar19 + ((uVar16 ^ uVar21) & uVar3 ^ uVar16) + (uVar13 * 0x20 | uVar13 >> 0x1b) + 0x5a827999 + uVar14;
    uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar8 = uVar2 ^ uVar7 ^ uVar11 ^ uVar8;
    uVar17 = uVar15 ^ uVar12 ^ uVar4 ^ uVar17;
    uVar8 = uVar8 << 1 | uVar8 < 0;
    uVar1 = uVar22 ^ uVar9 ^ uVar11 ^ uVar14;
    uVar11 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar17 = uVar17 << 1 | uVar17 < 0;
    uVar16 = uVar16 + ((uVar21 ^ uVar3) & uVar13 ^ uVar21) + (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x5a827999 + uVar8;
    uVar23 = uVar1 << 1 | uVar1 < 0;
    uVar20 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar21 = uVar21 + ((uVar11 ^ uVar3) & uVar19 ^ uVar3) + (uVar16 * 0x20 | uVar16 >> 0x1b) + 0x5a827999 + uVar17;
    uVar13 = uVar27 ^ uVar18 ^ uVar4 ^ uVar8;
    uVar4 = uVar13 << 1 | uVar13 < 0;
    uVar19 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar3 = uVar3 + ((uVar11 ^ uVar20) & uVar16 ^ uVar11) + (uVar21 * 0x20 | uVar21 >> 0x1b) + 0x5a827999 + uVar23;
    uVar13 = uVar25 ^ uVar5 ^ uVar9 ^ uVar17;
    uVar9 = uVar13 << 1 | uVar13 < 0;
    uVar16 = uVar21 >> 2 | uVar21 * 0x40000000;
    uVar11 = uVar11 + (uVar20 ^ uVar19 ^ uVar21) + (uVar3 * 0x20 | uVar3 >> 0x1b) + 0x6ed9eba1 + uVar4;
    uVar20 = uVar20 + (uVar19 ^ uVar16 ^ uVar3) + (uVar11 * 0x20 | uVar11 >> 0x1b) + 0x6ed9eba1 + uVar9;
    uVar1 = uVar12 ^ uVar6 ^ uVar9 ^ uVar14;
    uVar18 = uVar2 ^ uVar6 ^ uVar18 ^ uVar23;
    uVar5 = uVar15 ^ uVar7 ^ uVar5 ^ uVar4;
    uVar13 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar10 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar26 = uVar18 << 1 | uVar18 < 0;
    uVar28 = uVar5 << 1 | uVar5 < 0;
    uVar5 = uVar1 << 1 | uVar1 < 0;
    uVar19 = uVar19 + (uVar11 ^ uVar16 ^ uVar13) + (uVar20 * 0x20 | uVar20 >> 0x1b) + 0x6ed9eba1 + uVar26;
    uVar3 = uVar22 ^ uVar7 ^ uVar26 ^ uVar8;
    uVar24 = uVar3 << 1 | uVar3 < 0;
    uVar11 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar16 = uVar16 + (uVar10 ^ uVar20 ^ uVar13) + (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x6ed9eba1 + uVar28;
    uVar6 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar13 = uVar13 + (uVar10 ^ uVar11 ^ uVar19) + (uVar16 * 0x20 | uVar16 >> 0x1b) + 0x6ed9eba1 + uVar5;
    uVar7 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar10 = uVar10 + (uVar11 ^ uVar6 ^ uVar16) + (uVar13 * 0x20 | uVar13 >> 0x1b) + 0x6ed9eba1 + uVar24;
    uVar3 = uVar27 ^ uVar12 ^ uVar28 ^ uVar17;
    uVar3 = uVar3 << 1 | uVar3 < 0;
    uVar11 = uVar11 + (uVar6 ^ uVar7 ^ uVar13) + (uVar10 * 0x20 | uVar10 >> 0x1b) + uVar3 + 0x6ed9eba1;
    uVar1 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar13 = uVar25 ^ uVar22 ^ uVar5 ^ uVar23;
    uVar18 = uVar13 << 1 | uVar13 < 0;
    uVar19 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar6 = uVar6 + (uVar10 ^ uVar7 ^ uVar1) + (uVar11 * 0x20 | uVar11 >> 0x1b) + uVar18 + 0x6ed9eba1;
    uVar13 = uVar2 ^ uVar27 ^ uVar24 ^ uVar4;
    uVar12 = uVar13 << 1 | uVar13 < 0;
    uVar20 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar7 = uVar7 + (uVar19 ^ uVar11 ^ uVar1) + (uVar6 * 0x20 | uVar6 >> 0x1b) + uVar12 + 0x6ed9eba1;
    uVar13 = uVar15 ^ uVar25 ^ uVar3 ^ uVar9;
    uVar13 = uVar13 << 1 | uVar13 < 0;
    uVar21 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar1 = uVar1 + (uVar19 ^ uVar20 ^ uVar6) + (uVar7 * 0x20 | uVar7 >> 0x1b) + uVar13 + 0x6ed9eba1;
    uVar2 = uVar2 ^ uVar18 ^ uVar26 ^ uVar14;
    uVar10 = uVar2 << 1 | uVar2 < 0;
    uVar25 = uVar7 >> 2 | uVar7 * 0x40000000;
    uVar19 = uVar19 + (uVar20 ^ uVar21 ^ uVar7) + (uVar1 * 0x20 | uVar1 >> 0x1b) + uVar10 + 0x6ed9eba1;
    uVar2 = uVar15 ^ uVar12 ^ uVar28 ^ uVar8;
    uVar6 = uVar2 << 1 | uVar2 < 0;
    uVar20 = uVar20 + (uVar21 ^ uVar25 ^ uVar1) + (uVar19 * 0x20 | uVar19 >> 0x1b) + uVar6 + 0x6ed9eba1;
    uVar11 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar14 = uVar13 ^ uVar5 ^ uVar17 ^ uVar14;
    uVar7 = uVar14 << 1 | uVar14 < 0;
    uVar14 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar21 = uVar21 + (uVar19 ^ uVar25 ^ uVar11) + (uVar20 * 0x20 | uVar20 >> 0x1b) + uVar7 + 0x6ed9eba1;
    uVar8 = uVar10 ^ uVar24 ^ uVar23 ^ uVar8;
    uVar15 = uVar8 << 1 | uVar8 < 0;
    uVar16 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar25 = uVar25 + (uVar14 ^ uVar20 ^ uVar11) + (uVar21 * 0x20 | uVar21 >> 0x1b) + uVar15 + 0x6ed9eba1;
    uVar17 = uVar6 ^ uVar3 ^ uVar4 ^ uVar17;
    uVar17 = uVar17 << 1 | uVar17 < 0;
    uVar22 = uVar21 >> 2 | uVar21 * 0x40000000;
    uVar11 = uVar11 + (uVar14 ^ uVar16 ^ uVar21) + (uVar25 * 0x20 | uVar25 >> 0x1b) + 0x6ed9eba1 + uVar17;
    uVar1 = uVar18 ^ uVar9 ^ uVar23 ^ uVar7;
    uVar1 = uVar1 << 1 | uVar1 < 0;
    uVar23 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar14 = uVar14 + (uVar16 ^ uVar22 ^ uVar25) + (uVar11 * 0x20 | uVar11 >> 0x1b) + uVar1 + 0x6ed9eba1;
    uVar2 = uVar12 ^ uVar26 ^ uVar4 ^ uVar15;
    uVar2 = uVar2 << 1 | uVar2 < 0;
    uVar16 = uVar16 + (uVar22 ^ uVar23 ^ uVar11) + (uVar14 * 0x20 | uVar14 >> 0x1b) + 0x6ed9eba1 + uVar2;
    uVar4 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar19 = uVar14 >> 2 | uVar14 * 0x40000000;
    uVar11 = uVar13 ^ uVar28 ^ uVar9 ^ uVar17;
    uVar11 = uVar11 << 1 | uVar11 < 0;
    uVar22 = uVar22 + (uVar14 ^ uVar23 ^ uVar4) + (uVar16 * 0x20 | uVar16 >> 0x1b) + uVar11 + 0x6ed9eba1;
    uVar9 = uVar10 ^ uVar5 ^ uVar26 ^ uVar1;
    uVar8 = uVar9 << 1 | uVar9 < 0;
    uVar20 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar21 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar23 = uVar23 + (uVar19 ^ uVar16 ^ uVar4) + (uVar22 * 0x20 | uVar22 >> 0x1b) + uVar8 + 0x6ed9eba1;
    uVar9 = uVar6 ^ uVar24 ^ uVar28 ^ uVar2;
    uVar14 = uVar9 << 1 | uVar9 < 0;
    uVar9 = (uVar19 ^ uVar20 ^ uVar22) + (uVar23 * 0x20 | uVar23 >> 0x1b) + uVar14 + uVar4 + 0x6ed9eba1;
    uVar22 = uVar23 >> 2 | uVar23 * 0x40000000;
    uVar4 = uVar3 ^ uVar5 ^ uVar11 ^ uVar7;
    uVar26 = uVar4 << 1 | uVar4 < 0;
    uVar4 = uVar18 ^ uVar24 ^ uVar8 ^ uVar15;
    uVar4 = uVar4 << 1 | uVar4 < 0;
    uVar19 = (uVar9 * 0x20 | uVar9 >> 0x1b) + 0x8f1bbcdc +
             ((uVar21 | uVar23) & uVar20 | uVar21 & uVar23) + uVar26 + uVar19;
    uVar5 = uVar9 >> 2 | uVar9 * 0x40000000;
    uVar3 = uVar12 ^ uVar3 ^ uVar14 ^ uVar17;
    uVar16 = (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x8f1bbcdc +
             ((uVar22 | uVar9) & uVar21 | uVar22 & uVar9) + uVar4 + uVar20;
    uVar3 = uVar3 << 1 | uVar3 < 0;
    uVar20 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar9 = uVar13 ^ uVar18 ^ uVar26 ^ uVar1;
    uVar9 = uVar9 << 1 | uVar9 < 0;
    uVar19 = (uVar16 * 0x20 | uVar16 >> 0x1b) + 0x8f1bbcdc +
             ((uVar19 | uVar5) & uVar22 | uVar19 & uVar5) + uVar3 + uVar21;
    uVar21 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar16 = (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x8f1bbcdc +
             ((uVar20 | uVar16) & uVar5 | uVar20 & uVar16) + uVar9 + uVar22;
    uVar18 = uVar10 ^ uVar12 ^ uVar4 ^ uVar2;
    uVar18 = uVar18 << 1 | uVar18 < 0;
    uVar22 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar12 = (uVar16 * 0x20 | uVar16 >> 0x1b) + 0x8f1bbcdc +
             ((uVar21 | uVar19) & uVar20 | uVar21 & uVar19) + uVar18 + uVar5;
    uVar13 = uVar6 ^ uVar13 ^ uVar3 ^ uVar11;
    uVar13 = uVar13 << 1 | uVar13 < 0;
    uVar25 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar19 = (uVar12 * 0x20 | uVar12 >> 0x1b) + 0x8f1bbcdc +
             ((uVar22 | uVar16) & uVar21 | uVar22 & uVar16) + uVar13 + uVar20;
    uVar5 = uVar10 ^ uVar9 ^ uVar8 ^ uVar7;
    uVar5 = uVar5 << 1 | uVar5 < 0;
    uVar7 = uVar13 ^ uVar26 ^ uVar17 ^ uVar7;
    uVar7 = uVar7 << 1 | uVar7 < 0;
    uVar10 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar16 = (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x8f1bbcdc +
             ((uVar25 | uVar12) & uVar22 | uVar25 & uVar12) + uVar5 + uVar21;
    uVar12 = uVar6 ^ uVar18 ^ uVar14 ^ uVar15;
    uVar12 = uVar12 << 1 | uVar12 < 0;
    uVar20 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar21 = (uVar16 * 0x20 | uVar16 >> 0x1b) + 0x8f1bbcdc +
             ((uVar19 | uVar10) & uVar25 | uVar19 & uVar10) + uVar12 + uVar22;
    uVar19 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar22 = (uVar21 * 0x20 | uVar21 >> 0x1b) + 0x8f1bbcdc +
             ((uVar20 | uVar16) & uVar10 | uVar20 & uVar16) + uVar7 + uVar25;
    uVar15 = uVar5 ^ uVar4 ^ uVar1 ^ uVar15;
    uVar6 = uVar15 << 1 | uVar15 < 0;
    uVar10 = (uVar22 * 0x20 | uVar22 >> 0x1b) + 0x8f1bbcdc +
             ((uVar19 | uVar21) & uVar20 | uVar19 & uVar21) + uVar6 + uVar10;
    uVar17 = uVar12 ^ uVar3 ^ uVar2 ^ uVar17;
    uVar2 = uVar18 ^ uVar8 ^ uVar2 ^ uVar6;
    uVar17 = uVar17 << 1 | uVar17 < 0;
    uVar16 = uVar21 >> 2 | uVar21 * 0x40000000;
    uVar15 = uVar13 ^ uVar14 ^ uVar11 ^ uVar17;
    uVar25 = uVar2 << 1 | uVar2 < 0;
    uVar24 = uVar15 << 1 | uVar15 < 0;
    uVar21 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar2 = (uVar10 * 0x20 | uVar10 >> 0x1b) + 0x8f1bbcdc +
            ((uVar16 | uVar22) & uVar19 | uVar16 & uVar22) + uVar17 + uVar20;
    uVar1 = uVar9 ^ uVar11 ^ uVar1 ^ uVar7;
    uVar11 = uVar1 << 1 | uVar1 < 0;
    uVar1 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar15 = (uVar2 * 0x20 | uVar2 >> 0x1b) + 0x8f1bbcdc +
             ((uVar21 | uVar10) & uVar16 | uVar21 & uVar10) + uVar11 + uVar19;
    uVar10 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar20 = uVar16 + ((uVar2 | uVar1) & uVar21 | uVar2 & uVar1) + 0x8f1bbcdc + uVar25 +
             (uVar15 * 0x20 | uVar15 >> 0x1b);
    uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
    uVar2 = (uVar20 * 0x20 | uVar20 >> 0x1b) +
            ((uVar10 | uVar15) & uVar1 | uVar10 & uVar15) + uVar24 + uVar21 + 0x8f1bbcdc;
    uVar8 = uVar5 ^ uVar26 ^ uVar8 ^ uVar11;
    uVar16 = uVar8 << 1 | uVar8 < 0;
    uVar8 = uVar12 ^ uVar4 ^ uVar14 ^ uVar25;
    uVar22 = uVar8 << 1 | uVar8 < 0;
    uVar15 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar4 = uVar9 ^ uVar4 ^ uVar16 ^ uVar6;
    uVar21 = uVar4 << 1 | uVar4 < 0;
    uVar4 = (uVar2 * 0x20 | uVar2 >> 0x1b) +
            ((uVar19 | uVar20) & uVar10 | uVar19 & uVar20) + uVar16 + uVar1 + 0x8f1bbcdc;
    uVar8 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = (uVar4 * 0x20 | uVar4 >> 0x1b) + ((uVar15 | uVar2) & uVar19 | uVar15 & uVar2) + uVar22 + uVar10 + 0x8f1bbcdc
    ;
    uVar2 = uVar3 ^ uVar26 ^ uVar24 ^ uVar7;
    uVar14 = uVar2 << 1 | uVar2 < 0;
    uVar10 = uVar4 >> 2 | uVar4 * 0x40000000;
    uVar2 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar4 = uVar19 + ((uVar8 | uVar4) & uVar15 | uVar8 & uVar4) + 0x8f1bbcdc + uVar14 + (uVar1 * 0x20 | uVar1 >> 0x1b);
    uVar3 = uVar18 ^ uVar3 ^ uVar22 ^ uVar17;
    uVar1 = (uVar4 * 0x20 | uVar4 >> 0x1b) + ((uVar1 | uVar10) & uVar8 | uVar1 & uVar10) + uVar21 + uVar15 + 0x8f1bbcdc;
    uVar26 = uVar3 << 1 | uVar3 < 0;
    uVar15 = uVar4 >> 2 | uVar4 * 0x40000000;
    uVar8 = (uVar1 * 0x20 | uVar1 >> 0x1b) + ((uVar2 | uVar4) & uVar10 | uVar2 & uVar4) + uVar26 + uVar8 + 0x8f1bbcdc;
    uVar19 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar3 = uVar13 ^ uVar9 ^ uVar14 ^ uVar11;
    uVar20 = uVar3 << 1 | uVar3 < 0;
    uVar4 = uVar5 ^ uVar18 ^ uVar21 ^ uVar25;
    uVar3 = uVar5 ^ uVar20 ^ uVar16 ^ uVar7;
    uVar23 = uVar4 << 1 | uVar4 < 0;
    uVar18 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar1 = (uVar8 * 0x20 | uVar8 >> 0x1b) + ((uVar15 | uVar1) & uVar2 | uVar15 & uVar1) + uVar20 + uVar10 + 0x8f1bbcdc;
    uVar4 = uVar3 << 1 | uVar3 < 0;
    uVar3 = (uVar1 * 0x20 | uVar1 >> 0x1b) + (uVar15 ^ uVar19 ^ uVar8) + uVar23 + uVar2 + 0xca62c1d6;
    uVar13 = uVar12 ^ uVar13 ^ uVar26 ^ uVar24;
    uVar8 = uVar13 << 1 | uVar13 < 0;
    uVar2 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar9 = (uVar3 * 0x20 | uVar3 >> 0x1b) + 0xca62c1d6 + (uVar19 ^ uVar18 ^ uVar1) + uVar8 + uVar15;
    uVar5 = (uVar9 * 0x20 | uVar9 >> 0x1b) + 0xca62c1d6 + (uVar3 ^ uVar18 ^ uVar2) + uVar4 + uVar19;
    uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar13 = uVar12 ^ uVar23 ^ uVar22 ^ uVar6;
    uVar6 = uVar4 ^ uVar21 ^ uVar11 ^ uVar6;
    uVar1 = uVar13 << 1 | uVar13 < 0;
    uVar18 = (uVar5 * 0x20 | uVar5 >> 0x1b) + 0xca62c1d6 + (uVar3 ^ uVar9 ^ uVar2) + uVar1 + uVar18;
    uVar7 = uVar8 ^ uVar14 ^ uVar17 ^ uVar7;
    uVar17 = uVar1 ^ uVar26 ^ uVar25 ^ uVar17;
    uVar9 = uVar9 >> 2 | uVar9 * 0x40000000;
    uStack_98 = uVar7 << 1 | uVar7 < 0;
    uStack_94 = uVar6 << 1 | uVar6 < 0;
    uVar12 = uVar5 >> 2 | uVar5 * 0x40000000;
    uStack_90 = uVar17 << 1 | uVar17 < 0;
    uVar13 = uVar20 ^ uVar24 ^ uVar11 ^ uStack_98;
    uStack_8c = uVar13 << 1 | uVar13 < 0;
    uVar13 = (uVar18 * 0x20 | uVar18 >> 0x1b) + 0xca62c1d6 + (uVar3 ^ uVar9 ^ uVar5) + uStack_98 + uVar2;
    uVar5 = uVar18 >> 2 | uVar18 * 0x40000000;
    uVar3 = (uVar13 * 0x20 | uVar13 >> 0x1b) + 0xca62c1d6 + (uVar9 ^ uVar12 ^ uVar18) + uStack_94 + uVar3;
    uVar11 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar9 = (uVar3 * 0x20 | uVar3 >> 0x1b) + 0xca62c1d6 + (uVar12 ^ uVar5 ^ uVar13) + uStack_90 + uVar9;
    uVar12 = (uVar9 * 0x20 | uVar9 >> 0x1b) + 0xca62c1d6 + (uVar3 ^ uVar5 ^ uVar11) + uStack_8c + uVar12;
    uVar13 = uVar23 ^ uVar16 ^ uVar25 ^ uStack_94;
    uVar18 = uVar8 ^ uVar22 ^ uVar24 ^ uStack_90;
    uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar2 = uVar4 ^ uVar14 ^ uVar16 ^ uStack_8c;
    _auStack_84 = uVar18 << 1 | uVar18 < 0;
    uStack_88 = uVar13 << 1 | uVar13 < 0;
    uVar18 = uVar9 >> 2 | uVar9 * 0x40000000;
    *0x38 = uVar2 << 1 | uVar2 < 0;
    uVar13 = uVar1 ^ uVar21 ^ uVar22 ^ uStack_88;
    *0xa8 = uVar13 << 1 | uVar13 < 0;
    uVar9 = (uVar12 * 0x20 | uVar12 >> 0x1b) + 0xca62c1d6 + (uVar3 ^ uVar9 ^ uVar11) + uStack_88 + uVar5;
    uVar10 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar5 = uVar9 >> 2 | uVar9 * 0x40000000;
    uVar2 = uVar11 + (uVar3 ^ uVar18 ^ uVar12) + 0xca62c1d6 + _auStack_84 + (uVar9 * 0x20 | uVar9 >> 0x1b);
    uVar13 = uVar26 ^ uVar14 ^ _auStack_84 ^ uStack_98;
    uVar3 = (uVar2 * 0x20 | uVar2 >> 0x1b) + (uVar18 ^ uVar10 ^ uVar9) + *0x38 + uVar3 + 0xca62c1d6;
    *0x10 = uVar13 << 1 | uVar13 < 0;
    uVar11 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar9 = (uVar3 * 0x20 | uVar3 >> 0x1b) + (uVar10 ^ uVar5 ^ uVar2) + *0xa8 + uVar18 + 0xca62c1d6;
    uVar13 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar12 = (uVar9 * 0x20 | uVar9 >> 0x1b) + (uVar3 ^ uVar5 ^ uVar11) + *0x10 + uVar10 + 0xca62c1d6;
    uVar3 = uVar20 ^ uVar21 ^ *0x38 ^ uStack_94;
    *0x88 = uVar3 << 1 | uVar3 < 0;
    uVar18 = uVar9 >> 2 | uVar9 * 0x40000000;
    uVar3 = uVar23 ^ uVar26 ^ *0xa8 ^ uStack_90;
    *0x98 = uVar3 << 1 | uVar3 < 0;
    uVar2 = uVar4 ^ uVar23 ^ *0x88 ^ uStack_88;
    uVar3 = (uVar12 * 0x20 | uVar12 >> 0x1b) + (uVar13 ^ uVar9 ^ uVar11) + 0xca62c1d6 + *0x88 + uVar5;
    *0x90 = uVar2 << 1 | uVar2 < 0;
    uVar5 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar2 = uVar8 ^ uVar20 ^ *0x10 ^ uStack_8c;
    uVar9 = (uVar3 * 0x20 | uVar3 >> 0x1b) + (uVar13 ^ uVar18 ^ uVar12) + *0x98 + uVar11 + 0xca62c1d6;
    *0x80 = uVar2 << 1 | uVar2 < 0;
    uVar2 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar11 = (uVar9 * 0x20 | uVar9 >> 0x1b) + (uVar18 ^ uVar5 ^ uVar3) + *0x80 + uVar13 + 0xca62c1d6;
    uVar12 = uVar9 >> 2 | uVar9 * 0x40000000;
    uVar13 = (uVar11 * 0x20 | uVar11 >> 0x1b) + (uVar5 ^ uVar2 ^ uVar9) + *0x90 + uVar18 + 0xca62c1d6;
    uVar3 = uVar1 ^ uVar8 ^ *0x98 ^ _auStack_84;
    *0x10 = uVar3 << 1 | uVar3 < 0;
    uVar9 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar11 = (uVar13 * 0x20 | uVar13 >> 0x1b) + (uVar11 ^ uVar2 ^ uVar12) + *0x10 + 0xca62c1d6 + uVar5;
    uVar3 = uVar4 ^ *0x80 ^ *0x38 ^ uStack_98;
    uVar1 = uVar1 ^ *0x90 ^ *0xa8 ^ uStack_94;
    *0x10 = uVar3 << 1 | uVar3 < 0;
    uVar3 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar13 = (uVar11 * 0x20 | uVar11 >> 0x1b) + (uVar9 ^ uVar13 ^ uVar12) + *0x10 + 0xca62c1d6 + uVar2;
    *0xa0 = uVar1 << 1 | uVar1 < 0;
    *(arg1 + 4) = *(arg1 + 4) + uVar13;
    *(arg1 + 0xc) = *(arg1 + 0xc) + uVar3;
    *(arg1 + 0x10) = *(arg1 + 0x10) + uVar9;
    *(arg1 + 8) = *(arg1 + 8) + (uVar11 >> 2 | uVar11 * 0x40000000);
    *arg1 = (uVar9 ^ uVar3 ^ uVar11) + *arg1 + *0xa0 + (uVar13 * 0x20 | uVar13 >> 0x1b) + uVar12 + 0xca62c1d6;
    fcn.00010320(&uStack_98,0x40,0);
    return;
}


/* fcn.00017048 @ 0x17048 */

ulong fcn.00017048(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uint16_t uVar5;
    uint16_t uVar6;
    uint16_t uVar7;
    uint16_t uVar8;
    uint16_t uVar9;
    uint16_t uVar10;
    uint16_t uVar11;
    uint16_t uVar12;
    uint16_t uVar13;
    uint16_t uVar14;
    unkuint3 Var15;
    uint16_t uVar16;
    unkuint3 Var17;
    uint32_t uVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    uint32_t uVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    uint32_t uVar27;
    uint32_t uVar28;
    uint32_t uVar29;
    int iVar30;
    uint32_t uVar31;
    uint32_t uVar32;
    uint32_t uVar33;
    uint32_t uVar34;
    uint32_t uVar35;
    uint32_t uVar36;
    uint32_t uVar37;
    uint32_t uVar38;
    uint32_t uVar39;
    uint32_t uVar40;
    uint32_t uVar41;
    uint32_t uVar42;
    int iVar43;
    uint32_t uVar44;
    uint32_t uVar45;
    uint32_t uVar46;
    
    iVar43 = CONCAT31(CONCAT21(CONCAT11(*arg2,*(arg2 + 1)),*(arg2 + 2)),*(arg2 + 3));
    uVar1 = CONCAT11(*(arg2 + 4),*(arg2 + 5));
    uVar45 = CONCAT31(CONCAT21(uVar1,*(arg2 + 6)),*(arg2 + 7));
    uVar2 = CONCAT11(*(arg2 + 8),*(arg2 + 9));
    uVar41 = CONCAT31(CONCAT21(uVar2,*(arg2 + 10)),*(arg2 + 0xb));
    uVar3 = CONCAT11(*(arg2 + 0xc),*(arg2 + 0xd));
    uVar42 = CONCAT31(CONCAT21(uVar3,*(arg2 + 0xe)),*(arg2 + 0xf));
    uVar4 = CONCAT11(*(arg2 + 0x10),*(arg2 + 0x11));
    uVar18 = CONCAT31(CONCAT21(uVar4,*(arg2 + 0x12)),*(arg2 + 0x13));
    uVar5 = CONCAT11(*(arg2 + 0x14),*(arg2 + 0x15));
    uVar19 = CONCAT31(CONCAT21(uVar5,*(arg2 + 0x16)),*(arg2 + 0x17));
    uVar6 = CONCAT11(*(arg2 + 0x18),*(arg2 + 0x19));
    uVar20 = CONCAT31(CONCAT21(uVar6,*(arg2 + 0x1a)),*(arg2 + 0x1b));
    uVar7 = CONCAT11(*(arg2 + 0x1c),*(arg2 + 0x1d));
    uVar21 = CONCAT31(CONCAT21(uVar7,*(arg2 + 0x1e)),*(arg2 + 0x1f));
    uVar8 = CONCAT11(*(arg2 + 0x20),*(arg2 + 0x21));
    uVar22 = CONCAT31(CONCAT21(uVar8,*(arg2 + 0x22)),*(arg2 + 0x23));
    uVar9 = CONCAT11(*(arg2 + 0x24),*(arg2 + 0x25));
    uVar23 = CONCAT31(CONCAT21(uVar9,*(arg2 + 0x26)),*(arg2 + 0x27));
    uVar10 = CONCAT11(*(arg2 + 0x28),*(arg2 + 0x29));
    uVar24 = CONCAT31(CONCAT21(uVar10,*(arg2 + 0x2a)),*(arg2 + 0x2b));
    uVar11 = CONCAT11(*(arg2 + 0x2c),*(arg2 + 0x2d));
    uVar25 = CONCAT31(CONCAT21(uVar11,*(arg2 + 0x2e)),*(arg2 + 0x2f));
    uVar12 = CONCAT11(*(arg2 + 0x30),*(arg2 + 0x31));
    uVar26 = CONCAT31(CONCAT21(uVar12,*(arg2 + 0x32)),*(arg2 + 0x33));
    uVar13 = CONCAT11(*(arg2 + 0x34),*(arg2 + 0x35));
    uVar27 = CONCAT31(CONCAT21(uVar13,*(arg2 + 0x36)),*(arg2 + 0x37));
    uVar14 = CONCAT11(*(arg2 + 0x38),*(arg2 + 0x39));
    Var15 = CONCAT21(uVar14,*(arg2 + 0x3a));
    uVar28 = CONCAT31(Var15,*(arg2 + 0x3b));
    uVar32 = *(arg1 + 8);
    uVar33 = *(arg1 + 0x18);
    uVar31 = *(arg1 + 0x20);
    uVar34 = *(arg1 + 0x1c);
    uVar38 = *(arg1 + 0xc);
    uVar16 = CONCAT11(*(arg2 + 0x3c),*(arg2 + 0x3d));
    Var17 = CONCAT21(uVar16,*(arg2 + 0x3e));
    uVar29 = CONCAT31(Var17,*(arg2 + 0x3f));
    iVar30 = ((uVar33 >> 0xb | uVar33 << 0x15) ^ (uVar33 << 7 | uVar33 >> 0x19) ^ (uVar33 >> 6 | uVar33 << 0x1a)) +
             *(arg1 + 0x24) + ((uVar31 ^ uVar34) & uVar33 ^ uVar31) + 0x428a2f98 + iVar43;
    uVar36 = *(arg1 + 0x14) + iVar30;
    uVar40 = ((uVar38 | uVar32) & *(arg1 + 0x10) | uVar38 & uVar32) +
             iVar30 + ((uVar32 >> 0xd | uVar32 << 0x13) ^ (uVar32 << 10 | uVar32 >> 0x16) ^
                      (uVar32 >> 2 | uVar32 << 0x1e));
    iVar30 = uVar31 + 0x71374491 +
             ((uVar34 ^ uVar33) & uVar36 ^ uVar34) +
             ((uVar36 >> 6 | uVar36 * 0x4000000) ^
             (uVar36 >> 0xb | uVar36 * 0x200000) ^ (uVar36 * 0x80 | uVar36 >> 0x19)) + uVar45;
    uVar37 = *(arg1 + 0x10) + iVar30;
    uVar31 = ((uVar40 | uVar32) & uVar38 | uVar40 & uVar32) +
             iVar30 + ((uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 * 0x400 | uVar40 >> 0x16) ^
                      (uVar40 >> 2 | uVar40 * 0x40000000));
    iVar30 = uVar34 + 0xb5c0fbcf +
             ((uVar33 ^ uVar36) & uVar37 ^ uVar33) +
             ((uVar37 >> 6 | uVar37 * 0x4000000) ^
             (uVar37 >> 0xb | uVar37 * 0x200000) ^ (uVar37 * 0x80 | uVar37 >> 0x19)) + uVar41;
    uVar38 = uVar38 + iVar30;
    uVar35 = ((uVar40 | uVar31) & uVar32 | uVar40 & uVar31) +
             iVar30 + ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 * 0x400 | uVar31 >> 0x16) ^
                      (uVar31 >> 2 | uVar31 * 0x40000000));
    iVar30 = uVar33 + 0xe9b5dba5 +
             ((uVar36 ^ uVar37) & uVar38 ^ uVar36) +
             ((uVar38 >> 6 | uVar38 * 0x4000000) ^
             (uVar38 >> 0xb | uVar38 * 0x200000) ^ (uVar38 * 0x80 | uVar38 >> 0x19)) + uVar42;
    uVar32 = uVar32 + iVar30;
    uVar34 = ((uVar31 | uVar35) & uVar40 | uVar31 & uVar35) +
             iVar30 + ((uVar35 >> 0xd | uVar35 * 0x80000) ^ (uVar35 * 0x400 | uVar35 >> 0x16) ^
                      (uVar35 >> 2 | uVar35 * 0x40000000));
    iVar30 = uVar36 + 0x3956c25b +
             ((uVar37 ^ uVar38) & uVar32 ^ uVar37) +
             uVar18 + ((uVar32 >> 0xb | uVar32 * 0x200000) ^ (uVar32 * 0x80 | uVar32 >> 0x19) ^
                      (uVar32 >> 6 | uVar32 * 0x4000000));
    uVar40 = uVar40 + iVar30;
    uVar36 = ((uVar35 | uVar34) & uVar31 | uVar35 & uVar34) +
             iVar30 + ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 * 0x400 | uVar34 >> 0x16) ^
                      (uVar34 >> 2 | uVar34 * 0x40000000));
    iVar30 = uVar37 + 0x59f111f1 +
             ((uVar38 ^ uVar32) & uVar40 ^ uVar38) +
             uVar19 + ((uVar40 >> 0xb | uVar40 * 0x200000) ^ (uVar40 * 0x80 | uVar40 >> 0x19) ^
                      (uVar40 >> 6 | uVar40 * 0x4000000));
    uVar31 = uVar31 + iVar30;
    uVar37 = ((uVar34 | uVar36) & uVar35 | uVar34 & uVar36) +
             iVar30 + ((uVar36 >> 0xd | uVar36 * 0x80000) ^ (uVar36 * 0x400 | uVar36 >> 0x16) ^
                      (uVar36 >> 2 | uVar36 * 0x40000000));
    iVar30 = uVar38 + 0x923f82a4 +
             ((uVar40 ^ uVar32) & uVar31 ^ uVar32) +
             uVar20 + ((uVar31 >> 0xb | uVar31 * 0x200000) ^ (uVar31 * 0x80 | uVar31 >> 0x19) ^
                      (uVar31 >> 6 | uVar31 * 0x4000000));
    uVar35 = uVar35 + iVar30;
    uVar39 = ((uVar36 | uVar37) & uVar34 | uVar36 & uVar37) +
             iVar30 + ((uVar37 >> 0xd | uVar37 * 0x80000) ^ (uVar37 * 0x400 | uVar37 >> 0x16) ^
                      (uVar37 >> 2 | uVar37 * 0x40000000));
    iVar30 = uVar32 + 0xab1c5ed5 +
             ((uVar40 ^ uVar31) & uVar35 ^ uVar40) +
             uVar21 + ((uVar35 >> 0xb | uVar35 * 0x200000) ^ (uVar35 * 0x80 | uVar35 >> 0x19) ^
                      (uVar35 >> 6 | uVar35 * 0x4000000));
    uVar34 = uVar34 + iVar30;
    uVar33 = ((uVar37 | uVar39) & uVar36 | uVar37 & uVar39) +
             iVar30 + ((uVar39 >> 0xd | uVar39 * 0x80000) ^ (uVar39 * 0x400 | uVar39 >> 0x16) ^
                      (uVar39 >> 2 | uVar39 * 0x40000000));
    iVar30 = uVar40 + 0xd807aa98 +
             ((uVar31 ^ uVar35) & uVar34 ^ uVar31) +
             uVar22 + ((uVar34 >> 0xb | uVar34 * 0x200000) ^ (uVar34 * 0x80 | uVar34 >> 0x19) ^
                      (uVar34 >> 6 | uVar34 * 0x4000000));
    uVar36 = uVar36 + iVar30;
    uVar40 = ((uVar39 | uVar33) & uVar37 | uVar39 & uVar33) +
             iVar30 + ((uVar33 >> 0xd | uVar33 * 0x80000) ^ (uVar33 * 0x400 | uVar33 >> 0x16) ^
                      (uVar33 >> 2 | uVar33 * 0x40000000));
    iVar30 = uVar31 + 0x12835b01 +
             ((uVar35 ^ uVar34) & uVar36 ^ uVar35) +
             uVar23 + ((uVar36 >> 0xb | uVar36 * 0x200000) ^ (uVar36 * 0x80 | uVar36 >> 0x19) ^
                      (uVar36 >> 6 | uVar36 * 0x4000000));
    uVar37 = uVar37 + iVar30;
    uVar32 = ((uVar40 | uVar33) & uVar39 | uVar40 & uVar33) +
             iVar30 + ((uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 * 0x400 | uVar40 >> 0x16) ^
                      (uVar40 >> 2 | uVar40 * 0x40000000));
    iVar30 = uVar35 + 0x243185be +
             ((uVar34 ^ uVar36) & uVar37 ^ uVar34) +
             uVar24 + ((uVar37 >> 0xb | uVar37 * 0x200000) ^ (uVar37 * 0x80 | uVar37 >> 0x19) ^
                      (uVar37 >> 6 | uVar37 * 0x4000000));
    uVar39 = uVar39 + iVar30;
    uVar38 = ((uVar40 | uVar32) & uVar33 | uVar40 & uVar32) +
             iVar30 + ((uVar32 >> 0xd | uVar32 * 0x80000) ^ (uVar32 * 0x400 | uVar32 >> 0x16) ^
                      (uVar32 >> 2 | uVar32 * 0x40000000));
    iVar30 = uVar34 + 0x550c7dc3 +
             ((uVar36 ^ uVar37) & uVar39 ^ uVar36) +
             uVar25 + ((uVar39 >> 0xb | uVar39 * 0x200000) ^ (uVar39 * 0x80 | uVar39 >> 0x19) ^
                      (uVar39 >> 6 | uVar39 * 0x4000000));
    uVar33 = uVar33 + iVar30;
    uVar31 = ((uVar32 | uVar38) & uVar40 | uVar32 & uVar38) +
             iVar30 + ((uVar38 >> 0xd | uVar38 * 0x80000) ^ (uVar38 * 0x400 | uVar38 >> 0x16) ^
                      (uVar38 >> 2 | uVar38 * 0x40000000));
    iVar30 = uVar36 + 0x72be5d74 +
             ((uVar37 ^ uVar39) & uVar33 ^ uVar37) +
             uVar26 + ((uVar33 >> 0xb | uVar33 * 0x200000) ^ (uVar33 * 0x80 | uVar33 >> 0x19) ^
                      (uVar33 >> 6 | uVar33 * 0x4000000));
    uVar40 = uVar40 + iVar30;
    uVar35 = ((uVar38 | uVar31) & uVar32 | uVar38 & uVar31) +
             iVar30 + ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 * 0x400 | uVar31 >> 0x16) ^
                      (uVar31 >> 2 | uVar31 * 0x40000000));
    iVar30 = uVar37 + 0x80deb1fe +
             ((uVar39 ^ uVar33) & uVar40 ^ uVar39) +
             uVar27 + ((uVar40 >> 0xb | uVar40 * 0x200000) ^ (uVar40 * 0x80 | uVar40 >> 0x19) ^
                      (uVar40 >> 6 | uVar40 * 0x4000000));
    uVar32 = uVar32 + iVar30;
    uVar36 = ((uVar31 | uVar35) & uVar38 | uVar31 & uVar35) +
             iVar30 + ((uVar35 >> 0xd | uVar35 * 0x80000) ^ (uVar35 * 0x400 | uVar35 >> 0x16) ^
                      (uVar35 >> 2 | uVar35 * 0x40000000));
    iVar30 = uVar39 + 0x9bdc06a7 +
             ((uVar40 ^ uVar33) & uVar32 ^ uVar33) +
             uVar28 + ((uVar32 >> 0xb | uVar32 * 0x200000) ^ (uVar32 * 0x80 | uVar32 >> 0x19) ^
                      (uVar32 >> 6 | uVar32 * 0x4000000));
    uVar38 = uVar38 + iVar30;
    uVar39 = ((uVar35 | uVar36) & uVar31 | uVar35 & uVar36) +
             iVar30 + ((uVar36 >> 0xd | uVar36 * 0x80000) ^ (uVar36 * 0x400 | uVar36 >> 0x16) ^
                      (uVar36 >> 2 | uVar36 * 0x40000000));
    iVar30 = uVar33 + 0xc19bf174 +
             ((uVar40 ^ uVar32) & uVar38 ^ uVar40) +
             uVar29 + ((uVar38 >> 0xb | uVar38 * 0x200000) ^ (uVar38 * 0x80 | uVar38 >> 0x19) ^
                      (uVar38 >> 6 | uVar38 * 0x4000000));
    uVar31 = uVar31 + iVar30;
    uVar33 = ((uVar36 | uVar39) & uVar35 | uVar36 & uVar39) +
             iVar30 + ((uVar39 >> 0xd | uVar39 * 0x80000) ^ (uVar39 * 0x400 | uVar39 >> 0x16) ^
                      (uVar39 >> 2 | uVar39 * 0x40000000));
    uVar37 = iVar43 + ((uVar45 << 0xe | uVar1 >> 2) ^ (uVar45 >> 7 | uVar45 << 0x19) ^ uVar45 >> 3) +
                      uVar23 + ((uVar28 << 0xf | uVar14 >> 1) ^ (uVar28 << 0xd | uVar14 >> 3) ^ Var15 >> 2);
    iVar30 = uVar40 + 0xe49b69c1 +
             ((uVar32 ^ uVar38) & uVar31 ^ uVar32) +
             ((uVar31 >> 6 | uVar31 * 0x4000000) ^
             (uVar31 >> 0xb | uVar31 * 0x200000) ^ (uVar31 * 0x80 | uVar31 >> 0x19)) + uVar37;
    uVar35 = uVar35 + iVar30;
    uVar40 = ((uVar39 | uVar33) & uVar36 | uVar39 & uVar33) +
             iVar30 + ((uVar33 >> 0xd | uVar33 * 0x80000) ^ (uVar33 * 0x400 | uVar33 >> 0x16) ^
                      (uVar33 >> 2 | uVar33 * 0x40000000));
    uVar45 = uVar45 + ((uVar41 << 0xe | uVar2 >> 2) ^ (uVar41 >> 7 | uVar41 << 0x19) ^ uVar41 >> 3) +
                      uVar24 + ((uVar29 << 0xf | uVar16 >> 1) ^ (uVar29 << 0xd | uVar16 >> 3) ^ Var17 >> 2);
    iVar30 = uVar32 + 0xefbe4786 +
             ((uVar38 ^ uVar31) & uVar35 ^ uVar38) +
             ((uVar35 >> 6 | uVar35 * 0x4000000) ^
             (uVar35 >> 0xb | uVar35 * 0x200000) ^ (uVar35 * 0x80 | uVar35 >> 0x19)) + uVar45;
    uVar36 = uVar36 + iVar30;
    uVar32 = ((uVar40 | uVar33) & uVar39 | uVar40 & uVar33) +
             iVar30 + ((uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 * 0x400 | uVar40 >> 0x16) ^
                      (uVar40 >> 2 | uVar40 * 0x40000000));
    uVar41 = uVar41 + ((uVar42 << 0xe | uVar3 >> 2) ^ (uVar42 >> 7 | uVar42 << 0x19) ^ uVar42 >> 3) +
                      uVar25 + ((uVar37 * 0x8000 | uVar37 >> 0x11) ^ (uVar37 * 0x2000 | uVar37 >> 0x13) ^ uVar37 >> 10);
    iVar30 = uVar38 + 0xfc19dc6 +
             ((uVar31 ^ uVar35) & uVar36 ^ uVar31) +
             ((uVar36 >> 6 | uVar36 * 0x4000000) ^
             (uVar36 >> 0xb | uVar36 * 0x200000) ^ (uVar36 * 0x80 | uVar36 >> 0x19)) + uVar41;
    uVar39 = uVar39 + iVar30;
    uVar34 = ((uVar40 | uVar32) & uVar33 | uVar40 & uVar32) +
             iVar30 + ((uVar32 >> 0xd | uVar32 * 0x80000) ^ (uVar32 * 0x400 | uVar32 >> 0x16) ^
                      (uVar32 >> 2 | uVar32 * 0x40000000));
    uVar42 = uVar42 + ((uVar18 << 0xe | uVar4 >> 2) ^ (uVar18 >> 7 | uVar18 << 0x19) ^ uVar18 >> 3) +
                      uVar26 + ((uVar45 * 0x8000 | uVar45 >> 0x11) ^ (uVar45 * 0x2000 | uVar45 >> 0x13) ^ uVar45 >> 10);
    iVar30 = uVar31 + 0x240ca1cc +
             ((uVar35 ^ uVar36) & uVar39 ^ uVar35) +
             ((uVar39 >> 6 | uVar39 * 0x4000000) ^
             (uVar39 >> 0xb | uVar39 * 0x200000) ^ (uVar39 * 0x80 | uVar39 >> 0x19)) + uVar42;
    uVar33 = uVar33 + iVar30;
    uVar31 = ((uVar32 | uVar34) & uVar40 | uVar32 & uVar34) +
             iVar30 + ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 * 0x400 | uVar34 >> 0x16) ^
                      (uVar34 >> 2 | uVar34 * 0x40000000));
    uVar18 = uVar18 + ((uVar19 << 0xe | uVar5 >> 2) ^ (uVar19 >> 7 | uVar19 << 0x19) ^ uVar19 >> 3) +
                      uVar27 + ((uVar41 * 0x8000 | uVar41 >> 0x11) ^ (uVar41 * 0x2000 | uVar41 >> 0x13) ^ uVar41 >> 10);
    iVar30 = uVar35 + 0x2de92c6f +
             ((uVar36 ^ uVar39) & uVar33 ^ uVar36) +
             uVar18 + ((uVar33 >> 0xb | uVar33 * 0x200000) ^ (uVar33 * 0x80 | uVar33 >> 0x19) ^
                      (uVar33 >> 6 | uVar33 * 0x4000000));
    uVar40 = uVar40 + iVar30;
    uVar38 = ((uVar34 | uVar31) & uVar32 | uVar34 & uVar31) +
             iVar30 + ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 * 0x400 | uVar31 >> 0x16) ^
                      (uVar31 >> 2 | uVar31 * 0x40000000));
    uVar19 = uVar19 + ((uVar20 << 0xe | uVar6 >> 2) ^ (uVar20 >> 7 | uVar20 << 0x19) ^ uVar20 >> 3) +
                      uVar28 + ((uVar42 * 0x8000 | uVar42 >> 0x11) ^ (uVar42 * 0x2000 | uVar42 >> 0x13) ^ uVar42 >> 10);
    iVar30 = uVar36 + 0x4a7484aa +
             ((uVar39 ^ uVar33) & uVar40 ^ uVar39) +
             uVar19 + ((uVar40 >> 0xb | uVar40 * 0x200000) ^ (uVar40 * 0x80 | uVar40 >> 0x19) ^
                      (uVar40 >> 6 | uVar40 * 0x4000000));
    uVar32 = uVar32 + iVar30;
    uVar35 = ((uVar31 | uVar38) & uVar34 | uVar31 & uVar38) +
             iVar30 + ((uVar38 >> 0xd | uVar38 * 0x80000) ^ (uVar38 * 0x400 | uVar38 >> 0x16) ^
                      (uVar38 >> 2 | uVar38 * 0x40000000));
    uVar20 = uVar20 + ((uVar21 << 0xe | uVar7 >> 2) ^ (uVar21 >> 7 | uVar21 << 0x19) ^ uVar21 >> 3) +
                      uVar29 + ((uVar18 * 0x8000 | uVar18 >> 0x11) ^ (uVar18 * 0x2000 | uVar18 >> 0x13) ^ uVar18 >> 10);
    iVar30 = uVar39 + 0x5cb0a9dc +
             ((uVar40 ^ uVar33) & uVar32 ^ uVar33) +
             uVar20 + ((uVar32 >> 0xb | uVar32 * 0x200000) ^ (uVar32 * 0x80 | uVar32 >> 0x19) ^
                      (uVar32 >> 6 | uVar32 * 0x4000000));
    uVar34 = uVar34 + iVar30;
    uVar36 = ((uVar38 | uVar35) & uVar31 | uVar38 & uVar35) +
             iVar30 + ((uVar35 >> 0xd | uVar35 * 0x80000) ^ (uVar35 * 0x400 | uVar35 >> 0x16) ^
                      (uVar35 >> 2 | uVar35 * 0x40000000));
    uVar21 = uVar21 + ((uVar22 << 0xe | uVar8 >> 2) ^ (uVar22 >> 7 | uVar22 << 0x19) ^ uVar22 >> 3) +
                      uVar37 + ((uVar19 * 0x8000 | uVar19 >> 0x11) ^ (uVar19 * 0x2000 | uVar19 >> 0x13) ^ uVar19 >> 10);
    iVar30 = uVar33 + 0x76f988da +
             ((uVar40 ^ uVar32) & uVar34 ^ uVar40) +
             uVar21 + ((uVar34 >> 0xb | uVar34 * 0x200000) ^ (uVar34 * 0x80 | uVar34 >> 0x19) ^
                      (uVar34 >> 6 | uVar34 * 0x4000000));
    uVar31 = uVar31 + iVar30;
    uVar33 = ((uVar35 | uVar36) & uVar38 | uVar35 & uVar36) +
             iVar30 + ((uVar36 >> 0xd | uVar36 * 0x80000) ^ (uVar36 * 0x400 | uVar36 >> 0x16) ^
                      (uVar36 >> 2 | uVar36 * 0x40000000));
    uVar22 = uVar22 + ((uVar23 << 0xe | uVar9 >> 2) ^ (uVar23 >> 7 | uVar23 << 0x19) ^ uVar23 >> 3) +
                      uVar45 + ((uVar20 * 0x8000 | uVar20 >> 0x11) ^ (uVar20 * 0x2000 | uVar20 >> 0x13) ^ uVar20 >> 10);
    iVar30 = uVar40 + 0x983e5152 +
             ((uVar32 ^ uVar34) & uVar31 ^ uVar32) +
             uVar22 + ((uVar31 >> 0xb | uVar31 * 0x200000) ^ (uVar31 * 0x80 | uVar31 >> 0x19) ^
                      (uVar31 >> 6 | uVar31 * 0x4000000));
    uVar38 = uVar38 + iVar30;
    uVar40 = ((uVar36 | uVar33) & uVar35 | uVar36 & uVar33) +
             iVar30 + ((uVar33 >> 0xd | uVar33 * 0x80000) ^ (uVar33 * 0x400 | uVar33 >> 0x16) ^
                      (uVar33 >> 2 | uVar33 * 0x40000000));
    uVar23 = uVar23 + ((uVar24 << 0xe | uVar10 >> 2) ^ (uVar24 >> 7 | uVar24 << 0x19) ^ uVar24 >> 3) +
                      uVar41 + ((uVar21 * 0x8000 | uVar21 >> 0x11) ^ (uVar21 * 0x2000 | uVar21 >> 0x13) ^ uVar21 >> 10);
    iVar30 = uVar32 + 0xa831c66d +
             ((uVar34 ^ uVar31) & uVar38 ^ uVar34) +
             uVar23 + ((uVar38 >> 0xb | uVar38 * 0x200000) ^ (uVar38 * 0x80 | uVar38 >> 0x19) ^
                      (uVar38 >> 6 | uVar38 * 0x4000000));
    uVar35 = uVar35 + iVar30;
    uVar32 = ((uVar40 | uVar33) & uVar36 | uVar40 & uVar33) +
             iVar30 + ((uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 * 0x400 | uVar40 >> 0x16) ^
                      (uVar40 >> 2 | uVar40 * 0x40000000));
    uVar24 = uVar24 + ((uVar25 << 0xe | uVar11 >> 2) ^ (uVar25 >> 7 | uVar25 << 0x19) ^ uVar25 >> 3) +
                      ((uVar22 * 0x8000 | uVar22 >> 0x11) ^ (uVar22 * 0x2000 | uVar22 >> 0x13) ^ uVar22 >> 10) + uVar42;
    iVar30 = uVar34 + 0xb00327c8 +
             ((uVar31 ^ uVar38) & uVar35 ^ uVar31) +
             uVar24 + ((uVar35 >> 0xb | uVar35 * 0x200000) ^ (uVar35 * 0x80 | uVar35 >> 0x19) ^
                      (uVar35 >> 6 | uVar35 * 0x4000000));
    uVar36 = uVar36 + iVar30;
    uVar34 = ((uVar40 | uVar32) & uVar33 | uVar40 & uVar32) +
             iVar30 + ((uVar32 >> 0xd | uVar32 * 0x80000) ^ (uVar32 * 0x400 | uVar32 >> 0x16) ^
                      (uVar32 >> 2 | uVar32 * 0x40000000));
    uVar25 = uVar25 + ((uVar26 << 0xe | uVar12 >> 2) ^ (uVar26 >> 7 | uVar26 << 0x19) ^ uVar26 >> 3) +
                      uVar18 + ((uVar23 * 0x8000 | uVar23 >> 0x11) ^ (uVar23 * 0x2000 | uVar23 >> 0x13) ^ uVar23 >> 10);
    iVar30 = uVar31 + 0xbf597fc7 +
             ((uVar38 ^ uVar35) & uVar36 ^ uVar38) +
             uVar25 + ((uVar36 >> 0xb | uVar36 * 0x200000) ^ (uVar36 * 0x80 | uVar36 >> 0x19) ^
                      (uVar36 >> 6 | uVar36 * 0x4000000));
    uVar33 = uVar33 + iVar30;
    uVar31 = ((uVar32 | uVar34) & uVar40 | uVar32 & uVar34) +
             iVar30 + ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 * 0x400 | uVar34 >> 0x16) ^
                      (uVar34 >> 2 | uVar34 * 0x40000000));
    uVar26 = uVar26 + ((uVar27 << 0xe | uVar13 >> 2) ^ (uVar27 >> 7 | uVar27 << 0x19) ^ uVar27 >> 3) +
                      uVar19 + ((uVar24 * 0x8000 | uVar24 >> 0x11) ^ (uVar24 * 0x2000 | uVar24 >> 0x13) ^ uVar24 >> 10);
    iVar30 = uVar38 + 0xc6e00bf3 +
             ((uVar35 ^ uVar36) & uVar33 ^ uVar35) +
             uVar26 + ((uVar33 >> 0xb | uVar33 * 0x200000) ^ (uVar33 * 0x80 | uVar33 >> 0x19) ^
                      (uVar33 >> 6 | uVar33 * 0x4000000));
    uVar40 = uVar40 + iVar30;
    uVar38 = ((uVar34 | uVar31) & uVar32 | uVar34 & uVar31) +
             iVar30 + ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 * 0x400 | uVar31 >> 0x16) ^
                      (uVar31 >> 2 | uVar31 * 0x40000000));
    uVar27 = uVar27 + ((uVar28 << 0xe | uVar14 >> 2) ^ (uVar28 >> 7 | uVar28 << 0x19) ^ uVar28 >> 3) +
                      uVar20 + ((uVar25 * 0x8000 | uVar25 >> 0x11) ^ (uVar25 * 0x2000 | uVar25 >> 0x13) ^ uVar25 >> 10);
    iVar30 = uVar35 + 0xd5a79147 +
             ((uVar36 ^ uVar33) & uVar40 ^ uVar36) +
             uVar27 + ((uVar40 >> 0xb | uVar40 * 0x200000) ^ (uVar40 * 0x80 | uVar40 >> 0x19) ^
                      (uVar40 >> 6 | uVar40 * 0x4000000));
    uVar32 = uVar32 + iVar30;
    uVar35 = ((uVar31 | uVar38) & uVar34 | uVar31 & uVar38) +
             iVar30 + ((uVar38 >> 0xd | uVar38 * 0x80000) ^ (uVar38 * 0x400 | uVar38 >> 0x16) ^
                      (uVar38 >> 2 | uVar38 * 0x40000000));
    uVar28 = uVar28 + ((uVar29 << 0xe | uVar16 >> 2) ^ (uVar29 >> 7 | uVar29 << 0x19) ^ uVar29 >> 3) +
                      uVar21 + ((uVar26 * 0x8000 | uVar26 >> 0x11) ^ (uVar26 * 0x2000 | uVar26 >> 0x13) ^ uVar26 >> 10);
    iVar30 = uVar36 + 0x6ca6351 +
             ((uVar40 ^ uVar33) & uVar32 ^ uVar33) +
             uVar28 + ((uVar32 >> 0xb | uVar32 * 0x200000) ^ (uVar32 * 0x80 | uVar32 >> 0x19) ^
                      (uVar32 >> 6 | uVar32 * 0x4000000));
    uVar34 = uVar34 + iVar30;
    uVar39 = ((uVar38 | uVar35) & uVar31 | uVar38 & uVar35) +
             iVar30 + ((uVar35 >> 0xd | uVar35 * 0x80000) ^ (uVar35 * 0x400 | uVar35 >> 0x16) ^
                      (uVar35 >> 2 | uVar35 * 0x40000000));
    uVar29 = uVar29 + ((uVar37 * 0x4000 | uVar37 >> 0x12) ^ (uVar37 >> 7 | uVar37 * 0x2000000) ^ uVar37 >> 3) +
                      uVar22 + ((uVar27 * 0x8000 | uVar27 >> 0x11) ^ (uVar27 * 0x2000 | uVar27 >> 0x13) ^ uVar27 >> 10);
    iVar30 = uVar33 + 0x14292967 +
             ((uVar40 ^ uVar32) & uVar34 ^ uVar40) +
             uVar29 + ((uVar34 >> 0xb | uVar34 * 0x200000) ^ (uVar34 * 0x80 | uVar34 >> 0x19) ^
                      (uVar34 >> 6 | uVar34 * 0x4000000));
    uVar31 = uVar31 + iVar30;
    uVar33 = ((uVar35 | uVar39) & uVar38 | uVar35 & uVar39) +
             iVar30 + ((uVar39 >> 0xd | uVar39 * 0x80000) ^ (uVar39 * 0x400 | uVar39 >> 0x16) ^
                      (uVar39 >> 2 | uVar39 * 0x40000000));
    uVar37 = uVar37 + ((uVar45 * 0x4000 | uVar45 >> 0x12) ^ (uVar45 >> 7 | uVar45 * 0x2000000) ^ uVar45 >> 3) +
                      uVar23 + ((uVar28 * 0x8000 | uVar28 >> 0x11) ^ (uVar28 * 0x2000 | uVar28 >> 0x13) ^ uVar28 >> 10);
    iVar30 = uVar40 + 0x27b70a85 +
             ((uVar32 ^ uVar34) & uVar31 ^ uVar32) +
             ((uVar31 >> 6 | uVar31 * 0x4000000) ^
             (uVar31 >> 0xb | uVar31 * 0x200000) ^ (uVar31 * 0x80 | uVar31 >> 0x19)) + uVar37;
    uVar38 = uVar38 + iVar30;
    uVar40 = ((uVar39 | uVar33) & uVar35 | uVar39 & uVar33) +
             iVar30 + ((uVar33 >> 0xd | uVar33 * 0x80000) ^ (uVar33 * 0x400 | uVar33 >> 0x16) ^
                      (uVar33 >> 2 | uVar33 * 0x40000000));
    uVar45 = uVar45 + ((uVar41 * 0x4000 | uVar41 >> 0x12) ^ (uVar41 >> 7 | uVar41 * 0x2000000) ^ uVar41 >> 3) +
                      uVar24 + ((uVar29 * 0x8000 | uVar29 >> 0x11) ^ (uVar29 * 0x2000 | uVar29 >> 0x13) ^ uVar29 >> 10);
    iVar30 = uVar32 + 0x2e1b2138 +
             ((uVar34 ^ uVar31) & uVar38 ^ uVar34) +
             ((uVar38 >> 6 | uVar38 * 0x4000000) ^
             (uVar38 >> 0xb | uVar38 * 0x200000) ^ (uVar38 * 0x80 | uVar38 >> 0x19)) + uVar45;
    uVar35 = uVar35 + iVar30;
    uVar32 = ((uVar40 | uVar33) & uVar39 | uVar40 & uVar33) +
             iVar30 + ((uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 * 0x400 | uVar40 >> 0x16) ^
                      (uVar40 >> 2 | uVar40 * 0x40000000));
    uVar41 = ((uVar42 * 0x4000 | uVar42 >> 0x12) ^ (uVar42 >> 7 | uVar42 * 0x2000000) ^ uVar42 >> 3) +
             uVar25 + ((uVar37 * 0x8000 | uVar37 >> 0x11) ^ (uVar37 * 0x2000 | uVar37 >> 0x13) ^ uVar37 >> 10) + uVar41;
    iVar30 = uVar34 + 0x4d2c6dfc +
             ((uVar31 ^ uVar38) & uVar35 ^ uVar31) +
             ((uVar35 >> 6 | uVar35 * 0x4000000) ^
             (uVar35 >> 0xb | uVar35 * 0x200000) ^ (uVar35 * 0x80 | uVar35 >> 0x19)) + uVar41;
    uVar39 = uVar39 + iVar30;
    uVar34 = ((uVar40 | uVar32) & uVar33 | uVar40 & uVar32) +
             iVar30 + ((uVar32 >> 0xd | uVar32 * 0x80000) ^ (uVar32 * 0x400 | uVar32 >> 0x16) ^
                      (uVar32 >> 2 | uVar32 * 0x40000000));
    uVar42 = ((uVar18 * 0x4000 | uVar18 >> 0x12) ^ (uVar18 >> 7 | uVar18 * 0x2000000) ^ uVar18 >> 3) +
             uVar26 + ((uVar45 * 0x8000 | uVar45 >> 0x11) ^ (uVar45 * 0x2000 | uVar45 >> 0x13) ^ uVar45 >> 10) + uVar42;
    iVar30 = uVar31 + 0x53380d13 +
             ((uVar38 ^ uVar35) & uVar39 ^ uVar38) +
             ((uVar39 >> 6 | uVar39 * 0x4000000) ^
             (uVar39 >> 0xb | uVar39 * 0x200000) ^ (uVar39 * 0x80 | uVar39 >> 0x19)) + uVar42;
    uVar33 = uVar33 + iVar30;
    uVar31 = ((uVar32 | uVar34) & uVar40 | uVar32 & uVar34) +
             iVar30 + ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 * 0x400 | uVar34 >> 0x16) ^
                      (uVar34 >> 2 | uVar34 * 0x40000000));
    uVar18 = uVar18 + ((uVar19 * 0x4000 | uVar19 >> 0x12) ^ (uVar19 >> 7 | uVar19 * 0x2000000) ^ uVar19 >> 3) +
                      ((uVar41 * 0x8000 | uVar41 >> 0x11) ^ (uVar41 * 0x2000 | uVar41 >> 0x13) ^ uVar41 >> 10) + uVar27;
    iVar30 = uVar38 + 0x650a7354 +
             ((uVar35 ^ uVar39) & uVar33 ^ uVar35) +
             ((uVar33 >> 6 | uVar33 * 0x4000000) ^
             (uVar33 >> 0xb | uVar33 * 0x200000) ^ (uVar33 * 0x80 | uVar33 >> 0x19)) + uVar18;
    uVar40 = uVar40 + iVar30;
    uVar38 = ((uVar34 | uVar31) & uVar32 | uVar34 & uVar31) +
             iVar30 + ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 * 0x400 | uVar31 >> 0x16) ^
                      (uVar31 >> 2 | uVar31 * 0x40000000));
    uVar19 = uVar19 + ((uVar20 * 0x4000 | uVar20 >> 0x12) ^ (uVar20 >> 7 | uVar20 * 0x2000000) ^ uVar20 >> 3) +
                      uVar28 + ((uVar42 * 0x8000 | uVar42 >> 0x11) ^ (uVar42 * 0x2000 | uVar42 >> 0x13) ^ uVar42 >> 10);
    iVar30 = uVar35 + 0x766a0abb +
             ((uVar39 ^ uVar33) & uVar40 ^ uVar39) +
             ((uVar40 >> 6 | uVar40 * 0x4000000) ^
             (uVar40 >> 0xb | uVar40 * 0x200000) ^ (uVar40 * 0x80 | uVar40 >> 0x19)) + uVar19;
    uVar32 = uVar32 + iVar30;
    uVar36 = ((uVar31 | uVar38) & uVar34 | uVar31 & uVar38) +
             iVar30 + ((uVar38 >> 0xd | uVar38 * 0x80000) ^ (uVar38 * 0x400 | uVar38 >> 0x16) ^
                      (uVar38 >> 2 | uVar38 * 0x40000000));
    uVar20 = uVar20 + ((uVar21 * 0x4000 | uVar21 >> 0x12) ^ (uVar21 >> 7 | uVar21 * 0x2000000) ^ uVar21 >> 3) +
                      uVar29 + ((uVar18 * 0x8000 | uVar18 >> 0x11) ^ (uVar18 * 0x2000 | uVar18 >> 0x13) ^ uVar18 >> 10);
    iVar30 = uVar39 + 0x81c2c92e +
             ((uVar40 ^ uVar33) & uVar32 ^ uVar33) +
             ((uVar32 >> 6 | uVar32 * 0x4000000) ^
             (uVar32 >> 0xb | uVar32 * 0x200000) ^ (uVar32 * 0x80 | uVar32 >> 0x19)) + uVar20;
    uVar34 = uVar34 + iVar30;
    uVar39 = ((uVar38 | uVar36) & uVar31 | uVar38 & uVar36) +
             iVar30 + ((uVar36 >> 0xd | uVar36 * 0x80000) ^ (uVar36 * 0x400 | uVar36 >> 0x16) ^
                      (uVar36 >> 2 | uVar36 * 0x40000000));
    uVar21 = uVar21 + ((uVar22 * 0x4000 | uVar22 >> 0x12) ^ (uVar22 >> 7 | uVar22 * 0x2000000) ^ uVar22 >> 3) +
                      uVar37 + ((uVar19 * 0x8000 | uVar19 >> 0x11) ^ (uVar19 * 0x2000 | uVar19 >> 0x13) ^ uVar19 >> 10);
    iVar30 = uVar33 + 0x92722c85 +
             ((uVar40 ^ uVar32) & uVar34 ^ uVar40) +
             ((uVar34 >> 6 | uVar34 * 0x4000000) ^
             (uVar34 >> 0xb | uVar34 * 0x200000) ^ (uVar34 * 0x80 | uVar34 >> 0x19)) + uVar21;
    uVar31 = uVar31 + iVar30;
    uVar33 = ((uVar36 | uVar39) & uVar38 | uVar36 & uVar39) +
             iVar30 + ((uVar39 >> 0xd | uVar39 * 0x80000) ^ (uVar39 * 0x400 | uVar39 >> 0x16) ^
                      (uVar39 >> 2 | uVar39 * 0x40000000));
    uVar22 = uVar22 + ((uVar23 * 0x4000 | uVar23 >> 0x12) ^ (uVar23 >> 7 | uVar23 * 0x2000000) ^ uVar23 >> 3) +
                      uVar45 + ((uVar20 * 0x8000 | uVar20 >> 0x11) ^ (uVar20 * 0x2000 | uVar20 >> 0x13) ^ uVar20 >> 10);
    iVar30 = uVar40 + 0xa2bfe8a1 +
             ((uVar32 ^ uVar34) & uVar31 ^ uVar32) +
             ((uVar31 >> 6 | uVar31 * 0x4000000) ^
             (uVar31 >> 0xb | uVar31 * 0x200000) ^ (uVar31 * 0x80 | uVar31 >> 0x19)) + uVar22;
    uVar38 = uVar38 + iVar30;
    uVar40 = ((uVar39 | uVar33) & uVar36 | uVar39 & uVar33) +
             iVar30 + ((uVar33 >> 0xd | uVar33 * 0x80000) ^ (uVar33 * 0x400 | uVar33 >> 0x16) ^
                      (uVar33 >> 2 | uVar33 * 0x40000000));
    uVar23 = uVar23 + ((uVar24 * 0x4000 | uVar24 >> 0x12) ^ (uVar24 >> 7 | uVar24 * 0x2000000) ^ uVar24 >> 3) +
                      uVar41 + ((uVar21 * 0x8000 | uVar21 >> 0x11) ^ (uVar21 * 0x2000 | uVar21 >> 0x13) ^ uVar21 >> 10);
    iVar30 = uVar32 + 0xa81a664b +
             ((uVar34 ^ uVar31) & uVar38 ^ uVar34) +
             ((uVar38 >> 6 | uVar38 * 0x4000000) ^
             (uVar38 >> 0xb | uVar38 * 0x200000) ^ (uVar38 * 0x80 | uVar38 >> 0x19)) + uVar23;
    uVar36 = uVar36 + iVar30;
    uVar32 = ((uVar40 | uVar33) & uVar39 | uVar40 & uVar33) +
             iVar30 + ((uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 * 0x400 | uVar40 >> 0x16) ^
                      (uVar40 >> 2 | uVar40 * 0x40000000));
    uVar24 = uVar24 + ((uVar25 * 0x4000 | uVar25 >> 0x12) ^ (uVar25 >> 7 | uVar25 * 0x2000000) ^ uVar25 >> 3) +
                      uVar42 + ((uVar22 * 0x8000 | uVar22 >> 0x11) ^ (uVar22 * 0x2000 | uVar22 >> 0x13) ^ uVar22 >> 10);
    iVar30 = uVar34 + 0xc24b8b70 +
             ((uVar31 ^ uVar38) & uVar36 ^ uVar31) +
             ((uVar36 >> 6 | uVar36 * 0x4000000) ^
             (uVar36 >> 0xb | uVar36 * 0x200000) ^ (uVar36 * 0x80 | uVar36 >> 0x19)) + uVar24;
    uVar39 = uVar39 + iVar30;
    uVar35 = ((uVar40 | uVar32) & uVar33 | uVar40 & uVar32) +
             iVar30 + ((uVar32 >> 0xd | uVar32 * 0x80000) ^ (uVar32 * 0x400 | uVar32 >> 0x16) ^
                      (uVar32 >> 2 | uVar32 * 0x40000000));
    uVar25 = uVar25 + ((uVar26 * 0x4000 | uVar26 >> 0x12) ^ (uVar26 >> 7 | uVar26 * 0x2000000) ^ uVar26 >> 3) +
                      uVar18 + ((uVar23 * 0x8000 | uVar23 >> 0x11) ^ (uVar23 * 0x2000 | uVar23 >> 0x13) ^ uVar23 >> 10);
    iVar30 = uVar31 + 0xc76c51a3 +
             ((uVar38 ^ uVar36) & uVar39 ^ uVar38) +
             ((uVar39 >> 6 | uVar39 * 0x4000000) ^
             (uVar39 >> 0xb | uVar39 * 0x200000) ^ (uVar39 * 0x80 | uVar39 >> 0x19)) + uVar25;
    uVar33 = uVar33 + iVar30;
    uVar34 = ((uVar32 | uVar35) & uVar40 | uVar32 & uVar35) +
             iVar30 + ((uVar35 >> 0xd | uVar35 * 0x80000) ^ (uVar35 * 0x400 | uVar35 >> 0x16) ^
                      (uVar35 >> 2 | uVar35 * 0x40000000));
    uVar26 = uVar26 + ((uVar27 * 0x4000 | uVar27 >> 0x12) ^ (uVar27 >> 7 | uVar27 * 0x2000000) ^ uVar27 >> 3) +
                      uVar19 + ((uVar24 * 0x8000 | uVar24 >> 0x11) ^ (uVar24 * 0x2000 | uVar24 >> 0x13) ^ uVar24 >> 10);
    iVar30 = uVar38 + 0xd192e819 +
             ((uVar36 ^ uVar39) & uVar33 ^ uVar36) +
             ((uVar33 >> 6 | uVar33 * 0x4000000) ^
             (uVar33 >> 0xb | uVar33 * 0x200000) ^ (uVar33 * 0x80 | uVar33 >> 0x19)) + uVar26;
    uVar40 = uVar40 + iVar30;
    uVar44 = ((uVar35 | uVar34) & uVar32 | uVar35 & uVar34) +
             iVar30 + ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 * 0x400 | uVar34 >> 0x16) ^
                      (uVar34 >> 2 | uVar34 * 0x40000000));
    uVar27 = uVar27 + ((uVar28 * 0x4000 | uVar28 >> 0x12) ^ (uVar28 >> 7 | uVar28 * 0x2000000) ^ uVar28 >> 3) +
                      uVar20 + ((uVar25 * 0x8000 | uVar25 >> 0x11) ^ (uVar25 * 0x2000 | uVar25 >> 0x13) ^ uVar25 >> 10);
    iVar30 = uVar36 + 0xd6990624 +
             ((uVar39 ^ uVar33) & uVar40 ^ uVar39) +
             ((uVar40 >> 6 | uVar40 * 0x4000000) ^
             (uVar40 >> 0xb | uVar40 * 0x200000) ^ (uVar40 * 0x80 | uVar40 >> 0x19)) + uVar27;
    uVar32 = uVar32 + iVar30;
    uVar46 = ((uVar34 | uVar44) & uVar35 | uVar34 & uVar44) +
             iVar30 + ((uVar44 >> 0xd | uVar44 * 0x80000) ^ (uVar44 * 0x400 | uVar44 >> 0x16) ^
                      (uVar44 >> 2 | uVar44 * 0x40000000));
    uVar28 = uVar28 + ((uVar29 * 0x4000 | uVar29 >> 0x12) ^ (uVar29 >> 7 | uVar29 * 0x2000000) ^ uVar29 >> 3) +
                      uVar21 + ((uVar26 * 0x8000 | uVar26 >> 0x11) ^ (uVar26 * 0x2000 | uVar26 >> 0x13) ^ uVar26 >> 10);
    iVar30 = ((uVar32 >> 0xb | uVar32 * 0x200000) ^ (uVar32 * 0x80 | uVar32 >> 0x19) ^
             (uVar32 >> 6 | uVar32 * 0x4000000)) + uVar28 + ((uVar40 ^ uVar33) & uVar32 ^ uVar33) + 0xf40e3585 + uVar39;
    uVar35 = uVar35 + iVar30;
    uVar39 = ((uVar44 | uVar46) & uVar34 | uVar44 & uVar46) +
             iVar30 + ((uVar46 >> 0xd | uVar46 * 0x80000) ^ (uVar46 * 0x400 | uVar46 >> 0x16) ^
                      (uVar46 >> 2 | uVar46 * 0x40000000));
    uVar29 = uVar29 + ((uVar37 * 0x4000 | uVar37 >> 0x12) ^ (uVar37 >> 7 | uVar37 * 0x2000000) ^ uVar37 >> 3) +
                      uVar22 + ((uVar27 * 0x8000 | uVar27 >> 0x11) ^ (uVar27 * 0x2000 | uVar27 >> 0x13) ^ uVar27 >> 10);
    iVar30 = uVar33 + 0x106aa070 +
             ((uVar40 ^ uVar32) & uVar35 ^ uVar40) +
             ((uVar35 >> 6 | uVar35 * 0x4000000) ^
             (uVar35 >> 0xb | uVar35 * 0x200000) ^ (uVar35 * 0x80 | uVar35 >> 0x19)) + uVar29;
    uVar34 = uVar34 + iVar30;
    uVar38 = ((uVar46 | uVar39) & uVar44 | uVar46 & uVar39) +
             iVar30 + ((uVar39 >> 0xd | uVar39 * 0x80000) ^ (uVar39 * 0x400 | uVar39 >> 0x16) ^
                      (uVar39 >> 2 | uVar39 * 0x40000000));
    uVar37 = ((uVar45 * 0x4000 | uVar45 >> 0x12) ^ (uVar45 >> 7 | uVar45 * 0x2000000) ^ uVar45 >> 3) +
             uVar23 + ((uVar28 * 0x8000 | uVar28 >> 0x11) ^ (uVar28 * 0x2000 | uVar28 >> 0x13) ^ uVar28 >> 10) + uVar37;
    iVar30 = uVar40 + 0x19a4c116 +
             ((uVar32 ^ uVar35) & uVar34 ^ uVar32) +
             ((uVar34 >> 6 | uVar34 * 0x4000000) ^
             (uVar34 >> 0xb | uVar34 * 0x200000) ^ (uVar34 * 0x80 | uVar34 >> 0x19)) + uVar37;
    uVar44 = uVar44 + iVar30;
    uVar40 = ((uVar39 | uVar38) & uVar46 | uVar39 & uVar38) +
             iVar30 + ((uVar38 >> 0xd | uVar38 * 0x80000) ^ (uVar38 * 0x400 | uVar38 >> 0x16) ^
                      (uVar38 >> 2 | uVar38 * 0x40000000));
    uVar45 = ((uVar41 * 0x4000 | uVar41 >> 0x12) ^ (uVar41 >> 7 | uVar41 * 0x2000000) ^ uVar41 >> 3) +
             uVar24 + ((uVar29 * 0x8000 | uVar29 >> 0x11) ^ (uVar29 * 0x2000 | uVar29 >> 0x13) ^ uVar29 >> 10) + uVar45;
    iVar30 = uVar32 + 0x1e376c08 +
             ((uVar35 ^ uVar34) & uVar44 ^ uVar35) +
             ((uVar44 >> 6 | uVar44 * 0x4000000) ^
             (uVar44 >> 0xb | uVar44 * 0x200000) ^ (uVar44 * 0x80 | uVar44 >> 0x19)) + uVar45;
    uVar46 = uVar46 + iVar30;
    uVar31 = ((uVar40 | uVar38) & uVar39 | uVar40 & uVar38) +
             iVar30 + ((uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 * 0x400 | uVar40 >> 0x16) ^
                      (uVar40 >> 2 | uVar40 * 0x40000000));
    uVar41 = ((uVar42 * 0x4000 | uVar42 >> 0x12) ^ (uVar42 >> 7 | uVar42 * 0x2000000) ^ uVar42 >> 3) +
             uVar25 + ((uVar37 * 0x8000 | uVar37 >> 0x11) ^ (uVar37 * 0x2000 | uVar37 >> 0x13) ^ uVar37 >> 10) + uVar41;
    iVar30 = uVar35 + 0x2748774c +
             ((uVar34 ^ uVar44) & uVar46 ^ uVar34) +
             ((uVar46 >> 6 | uVar46 * 0x4000000) ^
             (uVar46 >> 0xb | uVar46 * 0x200000) ^ (uVar46 * 0x80 | uVar46 >> 0x19)) + uVar41;
    uVar39 = uVar39 + iVar30;
    uVar36 = ((uVar40 | uVar31) & uVar38 | uVar40 & uVar31) +
             iVar30 + ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 * 0x400 | uVar31 >> 0x16) ^
                      (uVar31 >> 2 | uVar31 * 0x40000000));
    uVar42 = uVar42 + ((uVar18 * 0x4000 | uVar18 >> 0x12) ^ (uVar18 >> 7 | uVar18 * 0x2000000) ^ uVar18 >> 3) +
                      uVar26 + ((uVar45 * 0x8000 | uVar45 >> 0x11) ^ (uVar45 * 0x2000 | uVar45 >> 0x13) ^ uVar45 >> 10);
    iVar30 = uVar34 + 0x34b0bcb5 +
             ((uVar44 ^ uVar46) & uVar39 ^ uVar44) +
             ((uVar39 >> 6 | uVar39 * 0x4000000) ^
             (uVar39 >> 0xb | uVar39 * 0x200000) ^ (uVar39 * 0x80 | uVar39 >> 0x19)) + uVar42;
    uVar38 = uVar38 + iVar30;
    uVar35 = ((uVar31 | uVar36) & uVar40 | uVar31 & uVar36) +
             iVar30 + ((uVar36 >> 0xd | uVar36 * 0x80000) ^ (uVar36 * 0x400 | uVar36 >> 0x16) ^
                      (uVar36 >> 2 | uVar36 * 0x40000000));
    uVar18 = uVar18 + ((uVar19 * 0x4000 | uVar19 >> 0x12) ^ (uVar19 >> 7 | uVar19 * 0x2000000) ^ uVar19 >> 3) +
                      uVar27 + ((uVar41 * 0x8000 | uVar41 >> 0x11) ^ (uVar41 * 0x2000 | uVar41 >> 0x13) ^ uVar41 >> 10);
    iVar30 = uVar44 + 0x391c0cb3 +
             ((uVar46 ^ uVar39) & uVar38 ^ uVar46) +
             ((uVar38 >> 6 | uVar38 * 0x4000000) ^
             (uVar38 >> 0xb | uVar38 * 0x200000) ^ (uVar38 * 0x80 | uVar38 >> 0x19)) + uVar18;
    uVar40 = uVar40 + iVar30;
    uVar32 = ((uVar36 | uVar35) & uVar31 | uVar36 & uVar35) +
             iVar30 + ((uVar35 >> 0xd | uVar35 * 0x80000) ^ (uVar35 * 0x400 | uVar35 >> 0x16) ^
                      (uVar35 >> 2 | uVar35 * 0x40000000));
    uVar19 = (uVar20 >> 3 ^ (uVar20 * 0x4000 | uVar20 >> 0x12) ^ (uVar20 >> 7 | uVar20 * 0x2000000)) +
             uVar28 + ((uVar42 * 0x8000 | uVar42 >> 0x11) ^ (uVar42 * 0x2000 | uVar42 >> 0x13) ^ uVar42 >> 10) + uVar19;
    iVar30 = uVar46 + 0x4ed8aa4a +
             ((uVar39 ^ uVar38) & uVar40 ^ uVar39) +
             ((uVar40 >> 6 | uVar40 * 0x4000000) ^
             (uVar40 >> 0xb | uVar40 * 0x200000) ^ (uVar40 * 0x80 | uVar40 >> 0x19)) + uVar19;
    uVar31 = uVar31 + iVar30;
    uVar34 = ((uVar35 | uVar32) & uVar36 | uVar35 & uVar32) +
             iVar30 + ((uVar32 >> 0xd | uVar32 * 0x80000) ^ (uVar32 * 0x400 | uVar32 >> 0x16) ^
                      (uVar32 >> 2 | uVar32 * 0x40000000));
    uVar20 = (uVar21 >> 3 ^ (uVar21 * 0x4000 | uVar21 >> 0x12) ^ (uVar21 >> 7 | uVar21 * 0x2000000)) +
             uVar29 + ((uVar18 * 0x8000 | uVar18 >> 0x11) ^ (uVar18 * 0x2000 | uVar18 >> 0x13) ^ uVar18 >> 10) + uVar20;
    iVar30 = uVar39 + 0x5b9cca4f +
             ((uVar40 ^ uVar38) & uVar31 ^ uVar38) +
             ((uVar31 >> 6 | uVar31 * 0x4000000) ^
             (uVar31 >> 0xb | uVar31 * 0x200000) ^ (uVar31 * 0x80 | uVar31 >> 0x19)) + uVar20;
    uVar36 = uVar36 + iVar30;
    uVar33 = ((uVar32 | uVar34) & uVar35 | uVar32 & uVar34) +
             iVar30 + ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 * 0x400 | uVar34 >> 0x16) ^
                      (uVar34 >> 2 | uVar34 * 0x40000000));
    uVar21 = (uVar22 >> 3 ^ (uVar22 * 0x4000 | uVar22 >> 0x12) ^ (uVar22 >> 7 | uVar22 * 0x2000000)) +
             uVar37 + ((uVar19 * 0x8000 | uVar19 >> 0x11) ^ (uVar19 * 0x2000 | uVar19 >> 0x13) ^ uVar19 >> 10) + uVar21;
    iVar30 = uVar38 + 0x682e6ff3 +
             ((uVar40 ^ uVar31) & uVar36 ^ uVar40) +
             ((uVar36 >> 6 | uVar36 * 0x4000000) ^
             (uVar36 >> 0xb | uVar36 * 0x200000) ^ (uVar36 * 0x80 | uVar36 >> 0x19)) + uVar21;
    uVar35 = uVar35 + iVar30;
    uVar38 = ((uVar34 | uVar33) & uVar32 | uVar34 & uVar33) +
             iVar30 + ((uVar33 >> 0xd | uVar33 * 0x80000) ^ (uVar33 * 0x400 | uVar33 >> 0x16) ^
                      (uVar33 >> 2 | uVar33 * 0x40000000));
    uVar22 = ((uVar23 * 0x4000 | uVar23 >> 0x12) ^ (uVar23 >> 7 | uVar23 * 0x2000000) ^ uVar23 >> 3) +
             uVar45 + ((uVar20 * 0x8000 | uVar20 >> 0x11) ^ (uVar20 * 0x2000 | uVar20 >> 0x13) ^ uVar20 >> 10) + uVar22;
    iVar30 = uVar40 + 0x748f82ee +
             ((uVar31 ^ uVar36) & uVar35 ^ uVar31) +
             ((uVar35 >> 6 | uVar35 * 0x4000000) ^
             (uVar35 >> 0xb | uVar35 * 0x200000) ^ (uVar35 * 0x80 | uVar35 >> 0x19)) + uVar22;
    uVar32 = uVar32 + iVar30;
    uVar45 = ((uVar33 | uVar38) & uVar34 | uVar33 & uVar38) +
             iVar30 + ((uVar38 >> 0xd | uVar38 * 0x80000) ^ (uVar38 * 0x400 | uVar38 >> 0x16) ^
                      (uVar38 >> 2 | uVar38 * 0x40000000));
    uVar23 = (uVar24 >> 3 ^ (uVar24 * 0x4000 | uVar24 >> 0x12) ^ (uVar24 >> 7 | uVar24 * 0x2000000)) +
             uVar41 + ((uVar21 * 0x8000 | uVar21 >> 0x11) ^ (uVar21 * 0x2000 | uVar21 >> 0x13) ^ uVar21 >> 10) + uVar23;
    iVar30 = uVar31 + 0x78a5636f +
             ((uVar36 ^ uVar35) & uVar32 ^ uVar36) +
             ((uVar32 >> 6 | uVar32 * 0x4000000) ^
             (uVar32 >> 0xb | uVar32 * 0x200000) ^ (uVar32 * 0x80 | uVar32 >> 0x19)) + uVar23;
    uVar34 = uVar34 + iVar30;
    uVar31 = ((uVar45 | uVar38) & uVar33 | uVar45 & uVar38) +
             iVar30 + ((uVar45 >> 0xd | uVar45 * 0x80000) ^ (uVar45 * 0x400 | uVar45 >> 0x16) ^
                      (uVar45 >> 2 | uVar45 * 0x40000000));
    uVar24 = (uVar25 >> 3 ^ (uVar25 * 0x4000 | uVar25 >> 0x12) ^ (uVar25 >> 7 | uVar25 * 0x2000000)) +
             uVar42 + ((uVar22 * 0x8000 | uVar22 >> 0x11) ^ (uVar22 * 0x2000 | uVar22 >> 0x13) ^ uVar22 >> 10) + uVar24;
    iVar30 = uVar36 + 0x84c87814 +
             ((uVar35 ^ uVar32) & uVar34 ^ uVar35) +
             ((uVar34 >> 6 | uVar34 * 0x4000000) ^
             (uVar34 >> 0xb | uVar34 * 0x200000) ^ (uVar34 * 0x80 | uVar34 >> 0x19)) + uVar24;
    uVar33 = uVar33 + iVar30;
    uVar36 = ((uVar45 | uVar31) & uVar38 | uVar45 & uVar31) +
             iVar30 + ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 * 0x400 | uVar31 >> 0x16) ^
                      (uVar31 >> 2 | uVar31 * 0x40000000));
    uVar25 = (uVar26 >> 3 ^ (uVar26 * 0x4000 | uVar26 >> 0x12) ^ (uVar26 >> 7 | uVar26 * 0x2000000)) +
             uVar18 + ((uVar23 * 0x8000 | uVar23 >> 0x11) ^ (uVar23 * 0x2000 | uVar23 >> 0x13) ^ uVar23 >> 10) + uVar25;
    iVar30 = uVar35 + 0x8cc70208 +
             ((uVar32 ^ uVar34) & uVar33 ^ uVar32) +
             ((uVar33 >> 6 | uVar33 * 0x4000000) ^
             (uVar33 >> 0xb | uVar33 * 0x200000) ^ (uVar33 * 0x80 | uVar33 >> 0x19)) + uVar25;
    uVar38 = uVar38 + iVar30;
    uVar18 = ((uVar31 | uVar36) & uVar45 | uVar31 & uVar36) +
             iVar30 + ((uVar36 >> 0xd | uVar36 * 0x80000) ^ (uVar36 * 0x400 | uVar36 >> 0x16) ^
                      (uVar36 >> 2 | uVar36 * 0x40000000));
    uVar26 = (uVar27 >> 3 ^ (uVar27 * 0x4000 | uVar27 >> 0x12) ^ (uVar27 >> 7 | uVar27 * 0x2000000)) +
             uVar19 + ((uVar24 * 0x8000 | uVar24 >> 0x11) ^ (uVar24 * 0x2000 | uVar24 >> 0x13) ^ uVar24 >> 10) + uVar26;
    iVar30 = uVar32 + 0x90befffa +
             ((uVar34 ^ uVar33) & uVar38 ^ uVar34) +
             ((uVar38 >> 6 | uVar38 * 0x4000000) ^
             (uVar38 >> 0xb | uVar38 * 0x200000) ^ (uVar38 * 0x80 | uVar38 >> 0x19)) + uVar26;
    uVar45 = uVar45 + iVar30;
    uVar23 = ((uVar36 | uVar18) & uVar31 | uVar36 & uVar18) +
             iVar30 + ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 * 0x400 | uVar18 >> 0x16) ^
                      (uVar18 >> 2 | uVar18 * 0x40000000));
    uVar27 = (uVar28 >> 3 ^ (uVar28 * 0x4000 | uVar28 >> 0x12) ^ (uVar28 >> 7 | uVar28 * 0x2000000)) +
             uVar20 + ((uVar25 * 0x8000 | uVar25 >> 0x11) ^ (uVar25 * 0x2000 | uVar25 >> 0x13) ^ uVar25 >> 10) + uVar27;
    iVar30 = uVar34 + 0xa4506ceb +
             ((uVar33 ^ uVar38) & uVar45 ^ uVar33) +
             ((uVar45 >> 6 | uVar45 * 0x4000000) ^
             (uVar45 >> 0xb | uVar45 * 0x200000) ^ (uVar45 * 0x80 | uVar45 >> 0x19)) + uVar27;
    uVar31 = uVar31 + iVar30;
    uVar20 = ((uVar18 | uVar23) & uVar36 | uVar18 & uVar23) +
             iVar30 + ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 * 0x400 | uVar23 >> 0x16) ^
                      (uVar23 >> 2 | uVar23 * 0x40000000));
    iVar30 = uVar33 + 0xbef9a3f7 +
             ((uVar45 ^ uVar38) & uVar31 ^ uVar38) +
             ((uVar29 * 0x4000 | uVar29 >> 0x12) ^ (uVar29 >> 7 | uVar29 * 0x2000000) ^ uVar29 >> 3) + uVar21 +
             ((uVar31 >> 0xb | uVar31 * 0x200000) ^ (uVar31 * 0x80 | uVar31 >> 0x19) ^
             (uVar31 >> 6 | uVar31 * 0x4000000)) +
             ((uVar26 * 0x8000 | uVar26 >> 0x11) ^ (uVar26 * 0x2000 | uVar26 >> 0x13) ^ uVar26 >> 10) + uVar28;
    uVar36 = uVar36 + iVar30;
    uVar19 = ((uVar23 | uVar20) & uVar18 | uVar23 & uVar20) +
             iVar30 + ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 * 0x400 | uVar20 >> 0x16) ^
                      (uVar20 >> 2 | uVar20 * 0x40000000));
    *(arg1 + 0xc) = *(arg1 + 0xc) + uVar19;
    *(arg1 + 0x10) = *(arg1 + 0x10) + uVar20;
    *(arg1 + 0x14) = *(arg1 + 0x14) + uVar23;
    iVar30 = uVar38 + 0xc67178f2 +
             ((uVar45 ^ uVar31) & uVar36 ^ uVar45) +
             ((uVar37 * 0x4000 | uVar37 >> 0x12) ^ (uVar37 >> 7 | uVar37 * 0x2000000) ^ uVar37 >> 3) + uVar22 +
             ((uVar36 >> 0xb | uVar36 * 0x200000) ^ (uVar36 * 0x80 | uVar36 >> 0x19) ^
             (uVar36 >> 6 | uVar36 * 0x4000000)) +
             ((uVar27 * 0x8000 | uVar27 >> 0x11) ^ (uVar27 * 0x2000 | uVar27 >> 0x13) ^ uVar27 >> 10) + uVar29;
    *(arg1 + 0x1c) = *(arg1 + 0x1c) + uVar36;
    *(arg1 + 0x20) = *(arg1 + 0x20) + uVar31;
    *(arg1 + 0x24) = *(arg1 + 0x24) + uVar45;
    *(arg1 + 8) = ((uVar20 | uVar19) & uVar23 | uVar20 & uVar19) +
                  *(arg1 + 8) +
                  ((uVar19 >> 0xd | uVar19 * 0x80000) ^ (uVar19 * 0x400 | uVar19 >> 0x16) ^
                  (uVar19 >> 2 | uVar19 * 0x40000000)) + iVar30;
    *(arg1 + 0x18) = *(arg1 + 0x18) + iVar30 + uVar18;
    return 0;
}


/* fcn.000198dc @ 0x198dc */

void fcn.000198dc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t *puVar1;
    uint8_t *puVar2;
    uint8_t *puVar3;
    uint8_t *puVar4;
    uint8_t *puVar5;
    uint8_t *puVar6;
    uint8_t *puVar7;
    uint8_t *puVar8;
    uint8_t *puVar9;
    uint8_t *puVar10;
    uint8_t *puVar11;
    uint8_t *puVar12;
    uint8_t *puVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    uint32_t uVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    uint32_t uVar27;
    uint32_t uVar28;
    uint32_t uVar29;
    uint32_t uVar30;
    uint32_t uVar31;
    uint32_t uVar32;
    uint32_t uVar33;
    uint32_t uVar34;
    uint32_t uVar35;
    uint32_t uVar36;
    uint32_t uVar37;
    uint32_t uVar38;
    uint32_t uVar39;
    uint32_t uVar40;
    uint32_t uVar41;
    uint32_t uVar42;
    uint32_t uVar43;
    uint32_t uVar44;
    uint32_t uVar45;
    uint32_t uStack_6c;
    uint32_t uStack_64;
    uint32_t uStack_60;
    uint32_t uStack_5c;
    uint32_t uStack_58;
    uint32_t uStack_54;
    
    if (arg3 != 0) {
        uStack_54 = *(arg1 + 4);
        uStack_6c = *(arg1 + 8);
        uStack_5c = *(arg1 + 0x14);
        uVar33 = *(arg1 + 0x10);
        uStack_64 = *(arg1 + 0x18);
        uStack_60 = *(arg1 + 0xc);
        uStack_58 = *(arg1 + 0x1c);
        do {
            arg3 = arg3 + -1;
            puVar1 = arg2 + 0x10;
            puVar2 = arg2 + 0x14;
            puVar3 = arg2 + 0x18;
            puVar4 = arg2 + 0x1c;
            uVar38 = *arg2 << 0x18 | *(arg2 + 1) << 0x10 | *(arg2 + 2) << 8 | *(arg2 + 3);
            uVar29 = *(arg2 + 4) << 0x18 | *(arg2 + 5) << 0x10 | *(arg2 + 6) << 8 | *(arg2 + 7);
            uVar14 = *(arg2 + 8) << 0x18 | *(arg2 + 9) << 0x10 | *(arg2 + 10) << 8 | *(arg2 + 0xb);
            puVar5 = arg2 + 0xc;
            uVar15 = *puVar5 << 0x18 | *(arg2 + 0xd) << 0x10 | *(arg2 + 0xe) << 8 | *(arg2 + 0xf);
            uVar34 = *puVar1 << 0x18 | *(arg2 + 0x11) << 0x10 | *(arg2 + 0x12) << 8 | *(arg2 + 0x13);
            uVar41 = *puVar2 << 0x18 | *(arg2 + 0x15) << 0x10 | *(arg2 + 0x16) << 8 | *(arg2 + 0x17);
            uVar40 = *puVar3 << 0x18 | *(arg2 + 0x19) << 0x10 | *(arg2 + 0x1a) << 8 | *(arg2 + 0x1b);
            puVar6 = arg2 + 0x20;
            puVar7 = arg2 + 0x24;
            uVar39 = *puVar4 << 0x18 | *(arg2 + 0x1d) << 0x10 | *(arg2 + 0x1e) << 8 | *(arg2 + 0x1f);
            puVar8 = arg2 + 0x28;
            puVar9 = arg2 + 0x34;
            uVar44 = *puVar6 << 0x18 | *(arg2 + 0x21) << 0x10 | *(arg2 + 0x22) << 8 | *(arg2 + 0x23);
            uVar16 = *puVar7 << 0x18 | *(arg2 + 0x25) << 0x10 | *(arg2 + 0x26) << 8 | *(arg2 + 0x27);
            puVar10 = arg2 + 0x2c;
            uVar36 = *puVar8 << 0x18 | *(arg2 + 0x29) << 0x10 | *(arg2 + 0x2a) << 8 | *(arg2 + 0x2b);
            uVar17 = *puVar10 << 0x18 | *(arg2 + 0x2d) << 0x10 | *(arg2 + 0x2e) << 8 | *(arg2 + 0x2f);
            puVar11 = arg2 + 0x30;
            uVar18 = *puVar11 << 0x18 | *(arg2 + 0x31) << 0x10 | *(arg2 + 0x32) << 8 | *(arg2 + 0x33);
            uVar25 = *puVar9 << 0x18 | *(arg2 + 0x35) << 0x10;
            puVar12 = arg2 + 0x38;
            uVar26 = uVar25 | *(arg2 + 0x36) << 8 | *(arg2 + 0x37);
            uVar19 = *puVar12 << 0x18 | *(arg2 + 0x39) << 0x10;
            uVar20 = uVar19 | *(arg2 + 0x3a) << 8 | *(arg2 + 0x3b);
            puVar13 = arg2 + 0x3c;
            uVar21 = *puVar13 << 0x18 | *(arg2 + 0x3d) << 0x10;
            uVar22 = uVar21 | *(arg2 + 0x3e) << 8 | *(arg2 + 0x3f);
            arg2 = arg2 + 0x40;
            uVar23 = *arg1 << 0xc | *arg1 >> 0x14;
            uVar30 = uVar33 + 0x79cc4519 + uVar23;
            uVar31 = uVar30 * 0x80 | uVar30 >> 0x19;
            uVar27 = (uVar34 ^ uVar38) + (uVar31 ^ uVar23) + uStack_60 + (uStack_6c ^ uStack_54 ^ *arg1);
            uVar30 = uVar26 << 0xf | uVar25 >> 0x11;
            uVar25 = (uVar33 ^ uStack_64 ^ uStack_5c) + uStack_58 + uVar31 + uVar38;
            uVar35 = uStack_54 << 9 | uStack_54 >> 0x17;
            uVar25 = (uVar25 >> 0xf | uVar25 * 0x20000) ^ (uVar25 * 0x200 | uVar25 >> 0x17) ^ uVar25;
            uVar31 = uStack_5c >> 0xd | uStack_5c << 0x13;
            uVar23 = uVar30 ^ uVar39 ^ uVar38;
            uVar38 = uVar38 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar15 << 7 | *puVar5 >> 1) ^ uVar30 ^ uVar36 ^ uVar39;
            uVar23 = uVar27 * 0x1000 | uVar27 >> 0x14;
            uVar30 = uVar25 + 0xf3988a32 + uVar23;
            uVar30 = uVar30 * 0x80 | uVar30 >> 0x19;
            uVar42 = (uVar41 ^ uVar29) + (uVar30 ^ uVar23) + uStack_6c + (uVar27 ^ uVar35 ^ *arg1);
            uVar30 = (uVar33 ^ uVar25 ^ uVar31) + uStack_64 + uVar30 + uVar29;
            uVar24 = uVar20 << 0xf | uVar19 >> 0x11;
            uVar19 = uVar33 >> 0xd | uVar33 << 0x13;
            uVar30 = (uVar30 >> 0xf | uVar30 * 0x20000) ^ (uVar30 * 0x200 | uVar30 >> 0x17) ^ uVar30;
            uVar37 = *arg1 << 9 | *arg1 >> 0x17;
            uVar23 = uVar24 ^ uVar44 ^ uVar29;
            uVar28 = uVar27 * 0x200 | uVar27 >> 0x17;
            uVar29 = uVar29 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar34 << 7 | *puVar1 >> 1) ^ uVar24 ^ uVar17 ^ uVar44;
            uVar23 = uVar42 * 0x1000 | uVar42 >> 0x14;
            uVar24 = uVar30 + 0xe7311465 + uVar23;
            uVar32 = uVar24 * 0x80 | uVar24 >> 0x19;
            uVar24 = uVar25 >> 0xd | uVar25 << 0x13;
            uVar21 = uVar22 << 0xf | uVar21 >> 0x11;
            uVar45 = (uVar40 ^ uVar14) + (uVar32 ^ uVar23) + uVar35 + (uVar42 ^ uVar27 ^ uVar37);
            uVar31 = (uVar25 ^ uVar30 ^ uVar19) + uVar32 + uVar14 + uVar31;
            uVar31 = (uVar31 >> 0xf | uVar31 * 0x20000) ^ (uVar31 * 0x200 | uVar31 >> 0x17) ^ uVar31;
            uVar23 = uVar21 ^ uVar16 ^ uVar14;
            uVar14 = uVar14 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar41 << 7 | *puVar2 >> 1) ^ uVar21 ^ uVar18 ^ uVar16;
            uVar23 = uVar45 * 0x1000 | uVar45 >> 0x14;
            uVar21 = uVar31 + 0xce6228cb + uVar23;
            uVar27 = uVar21 * 0x80 | uVar21 >> 0x19;
            uVar35 = uVar42 * 0x200 | uVar42 >> 0x17;
            uVar21 = uVar30 >> 0xd | uVar30 << 0x13;
            uVar25 = uVar38 << 0xf | uVar38 >> 0x11;
            uVar32 = (uVar39 ^ uVar15) + (uVar27 ^ uVar23) + uVar37 + (uVar45 ^ uVar42 ^ uVar28);
            uVar19 = (uVar24 ^ uVar30 ^ uVar31) + uVar27 + uVar15 + uVar19;
            uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
            uVar23 = uVar25 ^ uVar36 ^ uVar15;
            uVar15 = uVar15 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar40 << 7 | *puVar3 >> 1) ^ uVar25 ^ uVar26 ^ uVar36;
            uVar42 = uVar45 * 0x200 | uVar45 >> 0x17;
            uVar23 = uVar32 * 0x1000 | uVar32 >> 0x14;
            uVar25 = uVar19 + 0x9cc45197 + uVar23;
            uVar27 = uVar25 * 0x80 | uVar25 >> 0x19;
            uVar30 = uVar29 << 0xf | uVar29 >> 0x11;
            uVar25 = uVar31 >> 0xd | uVar31 << 0x13;
            uVar24 = (uVar21 ^ uVar31 ^ uVar19) + uVar27 + uVar34 + uVar24;
            uVar27 = (uVar44 ^ uVar34) + (uVar27 ^ uVar23) + uVar28 + (uVar32 ^ uVar45 ^ uVar35);
            uVar24 = (uVar24 >> 0xf | uVar24 * 0x20000) ^ (uVar24 * 0x200 | uVar24 >> 0x17) ^ uVar24;
            uVar23 = uVar30 ^ uVar17 ^ uVar34;
            uVar34 = uVar34 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar39 << 7 | *puVar4 >> 1) ^ uVar30 ^ uVar20 ^ uVar17;
            uVar37 = uVar32 * 0x200 | uVar32 >> 0x17;
            uVar23 = uVar27 * 0x1000 | uVar27 >> 0x14;
            uVar30 = uVar24 + 0x3988a32f + uVar23;
            uVar30 = uVar30 * 0x80 | uVar30 >> 0x19;
            uVar32 = (uVar16 ^ uVar41) + (uVar30 ^ uVar23) + uVar35 + (uVar27 ^ uVar32 ^ uVar42);
            uVar21 = (uVar24 ^ uVar25 ^ uVar19) + uVar30 + uVar41 + uVar21;
            uVar30 = uVar14 << 0xf | uVar14 >> 0x11;
            uVar31 = uVar19 >> 0xd | uVar19 << 0x13;
            uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
            uVar23 = uVar30 ^ uVar18 ^ uVar41;
            uVar41 = uVar41 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar44 << 7 | *puVar6 >> 1) ^ uVar30 ^ uVar22 ^ uVar18;
            uVar23 = uVar32 * 0x1000 | uVar32 >> 0x14;
            uVar19 = uVar21 + 0x7311465e + uVar23;
            uVar19 = uVar19 * 0x80 | uVar19 >> 0x19;
            uVar28 = (uVar36 ^ uVar40) + (uVar19 ^ uVar23) + uVar42 + (uVar32 ^ uVar27 ^ uVar37);
            uVar25 = (uVar24 ^ uVar21 ^ uVar31) + uVar19 + uVar40 + uVar25;
            uVar27 = uVar27 * 0x200 | uVar27 >> 0x17;
            uVar24 = uVar24 >> 0xd | uVar24 << 0x13;
            uVar25 = (uVar25 >> 0xf | uVar25 * 0x20000) ^ (uVar25 * 0x200 | uVar25 >> 0x17) ^ uVar25;
            uVar19 = uVar15 << 0xf | uVar15 >> 0x11;
            uVar35 = uVar32 * 0x200 | uVar32 >> 0x17;
            uVar23 = uVar19 ^ uVar26 ^ uVar40;
            uVar30 = uVar28 * 0x1000 | uVar28 >> 0x14;
            uVar40 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar16 << 7 | *puVar7 >> 1) ^
                     uVar19 ^ uVar26 ^ uVar40 ^ uVar38;
            uVar23 = uVar25 + 0xe6228cbc + uVar30;
            uVar23 = uVar23 * 0x80 | uVar23 >> 0x19;
            uVar45 = (uVar17 ^ uVar39) + (uVar23 ^ uVar30) + uVar37 + (uVar28 ^ uVar32 ^ uVar27);
            uVar30 = uVar21 >> 0xd | uVar21 << 0x13;
            uVar31 = (uVar24 ^ uVar21 ^ uVar25) + uVar23 + uVar39 + uVar31;
            uVar31 = (uVar31 >> 0xf | uVar31 * 0x20000) ^ (uVar31 * 0x200 | uVar31 >> 0x17) ^ uVar31;
            uVar19 = uVar34 << 0xf | uVar34 >> 0x11;
            uVar23 = uVar19 ^ uVar20 ^ uVar39;
            uVar21 = uVar45 * 0x1000 | uVar45 >> 0x14;
            uVar42 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar36 << 7 | *puVar8 >> 1) ^
                     uVar19 ^ uVar20 ^ uVar39 ^ uVar29;
            uVar23 = uVar31 + 0xcc451979 + uVar21;
            uVar23 = uVar23 * 0x80 | uVar23 >> 0x19;
            uVar37 = uVar28 * 0x200 | uVar28 >> 0x17;
            uVar32 = (uVar18 ^ uVar44) + (uVar23 ^ uVar21) + uVar27 + (uVar45 ^ uVar28 ^ uVar35);
            uVar27 = uVar25 >> 0xd | uVar25 << 0x13;
            uVar43 = uVar45 * 0x200 | uVar45 >> 0x17;
            uVar24 = (uVar30 ^ uVar25 ^ uVar31) + uVar23 + uVar44 + uVar24;
            uVar24 = (uVar24 >> 0xf | uVar24 * 0x20000) ^ (uVar24 * 0x200 | uVar24 >> 0x17) ^ uVar24;
            uVar19 = uVar41 << 0xf | uVar41 >> 0x11;
            uVar23 = uVar19 ^ uVar22 ^ uVar44;
            uVar21 = uVar32 * 0x1000 | uVar32 >> 0x14;
            uVar44 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar17 << 7 | *puVar10 >> 1) ^
                     uVar19 ^ uVar22 ^ uVar44 ^ uVar14;
            uVar23 = uVar24 + 0x988a32f3 + uVar21;
            uVar23 = uVar23 * 0x80 | uVar23 >> 0x19;
            uVar39 = (uVar26 ^ uVar16) + (uVar23 ^ uVar21) + uVar35 + (uVar32 ^ uVar45 ^ uVar37);
            uVar21 = uVar31 >> 0xd | uVar31 << 0x13;
            uVar30 = (uVar24 ^ uVar27 ^ uVar31) + uVar23 + uVar16 + uVar30;
            uVar30 = (uVar30 >> 0xf | uVar30 * 0x20000) ^ (uVar30 * 0x200 | uVar30 >> 0x17) ^ uVar30;
            uVar19 = uVar40 << 0xf | uVar40 >> 0x11;
            uVar23 = uVar19 ^ uVar16 ^ uVar38;
            uVar28 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar18 << 7 | *puVar11 >> 1) ^
                     uVar19 ^ uVar16 ^ uVar15 ^ uVar38;
            uVar23 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar16 = uVar30 + 0x311465e7 + uVar23;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar35 = uVar32 * 0x200 | uVar32 >> 0x17;
            uVar25 = uVar24 >> 0xd | uVar24 << 0x13;
            uVar37 = (uVar20 ^ uVar36) + (uVar16 ^ uVar23) + uVar37 + (uVar39 ^ uVar32 ^ uVar43);
            uVar27 = (uVar24 ^ uVar30 ^ uVar21) + uVar16 + uVar36 + uVar27;
            uVar27 = (uVar27 >> 0xf | uVar27 * 0x20000) ^ (uVar27 * 0x200 | uVar27 >> 0x17) ^ uVar27;
            uVar16 = uVar42 << 0xf | uVar42 >> 0x11;
            uVar23 = uVar16 ^ uVar36 ^ uVar29;
            uVar19 = uVar37 * 0x1000 | uVar37 >> 0x14;
            uVar31 = uVar27 + 0x6228cbce + uVar19;
            uVar24 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar26 << 7 | *puVar9 >> 1) ^
                     uVar16 ^ uVar36 ^ uVar34 ^ uVar29;
            uVar23 = uVar31 * 0x80 | uVar31 >> 0x19;
            uVar36 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar45 = (uVar22 ^ uVar17) + (uVar23 ^ uVar19) + uVar43 + (uVar37 ^ uVar39 ^ uVar35);
            uVar31 = uVar30 >> 0xd | uVar30 << 0x13;
            uVar21 = (uVar25 ^ uVar30 ^ uVar27) + uVar23 + uVar17 + uVar21;
            uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
            uVar16 = uVar44 << 0xf | uVar44 >> 0x11;
            uVar23 = uVar16 ^ uVar17 ^ uVar14;
            uVar19 = uVar45 * 0x1000 | uVar45 >> 0x14;
            uVar30 = uVar21 + 0xc451979c + uVar19;
            uVar32 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar20 << 7 | *puVar12 >> 1) ^
                     uVar16 ^ uVar17 ^ uVar41 ^ uVar14;
            uVar23 = uVar30 * 0x80 | uVar30 >> 0x19;
            uVar39 = uVar37 * 0x200 | uVar37 >> 0x17;
            uVar30 = uVar27 >> 0xd | uVar27 << 0x13;
            uVar19 = (uVar18 ^ uVar38) + (uVar23 ^ uVar19) + uVar35 + (uVar45 ^ uVar37 ^ uVar36);
            uVar25 = (uVar31 ^ uVar27 ^ uVar21) + uVar23 + uVar18 + uVar25;
            uVar25 = (uVar25 >> 0xf | uVar25 * 0x20000) ^ (uVar25 * 0x200 | uVar25 >> 0x17) ^ uVar25;
            uVar16 = uVar28 << 0xf | uVar28 >> 0x11;
            uVar23 = uVar16 ^ uVar18 ^ uVar15;
            uVar17 = uVar19 * 0x1000 | uVar19 >> 0x14;
            uVar35 = uVar25 + 0x88a32f39 + uVar17;
            uVar27 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar22 << 7 | *puVar13 >> 1) ^
                     uVar16 ^ uVar18 ^ uVar40 ^ uVar15;
            uVar23 = uVar35 * 0x80 | uVar35 >> 0x19;
            uVar35 = (uVar26 ^ uVar29) + (uVar23 ^ uVar17) + uVar36 + (uVar19 ^ uVar45 ^ uVar39);
            uVar36 = uVar45 * 0x200 | uVar45 >> 0x17;
            uVar17 = uVar21 >> 0xd | uVar21 << 0x13;
            uVar31 = (uVar25 ^ uVar30 ^ uVar21) + uVar23 + uVar26 + uVar31;
            uVar31 = (uVar31 >> 0xf | uVar31 * 0x20000) ^ (uVar31 * 0x200 | uVar31 >> 0x17) ^ uVar31;
            uVar16 = uVar24 << 0xf | uVar24 >> 0x11;
            uVar23 = uVar16 ^ uVar26 ^ uVar34;
            uVar26 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar38 << 7 | uVar38 >> 0x19)
                     ^ uVar16 ^ uVar26 ^ uVar42 ^ uVar34;
            uVar21 = uVar19 * 0x200 | uVar19 >> 0x17;
            uVar23 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar16 = uVar31 + 0x11465e73 + uVar23;
            uVar18 = uVar25 >> 0xd | uVar25 << 0x13;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar39 = (uVar16 ^ uVar23) + (uVar20 ^ uVar14) + uVar39 + (uVar35 ^ uVar19 ^ uVar36);
            uVar30 = (uVar25 ^ uVar31 ^ uVar17) + uVar16 + uVar20 + uVar30;
            uVar30 = (uVar30 >> 0xf | uVar30 * 0x20000) ^ (uVar30 * 0x200 | uVar30 >> 0x17) ^ uVar30;
            uVar16 = uVar32 << 0xf | uVar32 >> 0x11;
            uVar23 = uVar16 ^ uVar20 ^ uVar41;
            uVar25 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar29 << 7 | uVar29 >> 0x19)
                     ^ uVar16 ^ uVar20 ^ uVar44 ^ uVar41;
            uVar23 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar16 = uVar30 + 0x228cbce6 + uVar23;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar37 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar35 = (uVar16 ^ uVar23) + (uVar22 ^ uVar15) + uVar36 + (uVar39 ^ uVar35 ^ uVar21);
            uVar19 = uVar31 >> 0xd | uVar31 << 0x13;
            uVar17 = (uVar18 ^ uVar31 ^ uVar30) + uVar16 + uVar22 + uVar17;
            uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
            uVar16 = uVar27 << 0xf | uVar27 >> 0x11;
            uVar23 = uVar16 ^ uVar22 ^ uVar40;
            uVar31 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar14 << 7 | uVar14 >> 0x19)
                     ^ uVar16 ^ uVar22 ^ uVar28 ^ uVar40;
            uVar23 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar16 = uVar17 + 0x9d8a7a87 + uVar23;
            uVar20 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar36 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar16 = uVar30 >> 0xd | uVar30 << 0x13;
            uVar22 = (uVar34 ^ uVar38) + (uVar20 ^ uVar23) + uVar21 + ((uVar35 | uVar39) & uVar37 | uVar35 & uVar39);
            uVar18 = ((uVar19 ^ uVar30) & uVar17 ^ uVar19) + uVar20 + uVar38 + uVar18;
            uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
            uVar20 = uVar26 << 0xf | uVar26 >> 0x11;
            uVar23 = uVar20 ^ uVar42 ^ uVar38;
            uVar38 = uVar38 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar15 << 7 | uVar15 >> 0x19) ^ uVar20 ^ uVar24 ^ uVar42;
            uVar39 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar23 = uVar22 * 0x1000 | uVar22 >> 0x14;
            uVar20 = uVar18 + 0x3b14f50f + uVar23;
            uVar30 = uVar20 * 0x80 | uVar20 >> 0x19;
            uVar35 = (uVar41 ^ uVar29) + (uVar30 ^ uVar23) + uVar37 + ((uVar22 | uVar35) & uVar36 | uVar22 & uVar35);
            uVar21 = uVar25 << 0xf | uVar25 >> 0x11;
            uVar20 = uVar17 >> 0xd | uVar17 << 0x13;
            uVar19 = ((uVar16 ^ uVar17) & uVar18 ^ uVar16) + uVar30 + uVar29 + uVar19;
            uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
            uVar23 = uVar21 ^ uVar44 ^ uVar29;
            uVar29 = uVar29 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar34 << 7 | uVar34 >> 0x19) ^ uVar21 ^ uVar32 ^ uVar44;
            uVar23 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar17 = uVar19 + 0x7629ea1e + uVar23;
            uVar37 = uVar17 * 0x80 | uVar17 >> 0x19;
            uVar30 = uVar22 * 0x200 | uVar22 >> 0x17;
            uVar36 = (uVar40 ^ uVar14) + (uVar37 ^ uVar23) + uVar36 + ((uVar35 | uVar22) & uVar39 | uVar35 & uVar22);
            uVar21 = uVar31 << 0xf | uVar31 >> 0x11;
            uVar17 = uVar18 >> 0xd | uVar18 << 0x13;
            uVar16 = ((uVar18 ^ uVar20) & uVar19 ^ uVar20) + uVar37 + uVar14 + uVar16;
            uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
            uVar23 = uVar21 ^ uVar28 ^ uVar14;
            uVar14 = uVar14 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar41 << 7 | uVar41 >> 0x19) ^ uVar21 ^ uVar27 ^ uVar28;
            uVar37 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar23 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar18 = uVar16 + 0xec53d43c + uVar23;
            uVar22 = uVar18 * 0x80 | uVar18 >> 0x19;
            uVar18 = uVar19 >> 0xd | uVar19 << 0x13;
            uVar21 = uVar38 << 0xf | uVar38 >> 0x11;
            uVar20 = ((uVar17 ^ uVar19) & uVar16 ^ uVar17) + uVar22 + uVar15 + uVar20;
            uVar39 = (uVar42 ^ uVar15) + (uVar22 ^ uVar23) + uVar39 + ((uVar36 | uVar35) & uVar30 | uVar36 & uVar35);
            uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
            uVar23 = uVar21 ^ uVar24 ^ uVar15;
            uVar15 = uVar15 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar40 << 7 | uVar40 >> 0x19) ^ uVar21 ^ uVar26 ^ uVar24;
            uVar23 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar19 = uVar20 + 0xd8a7a879 + uVar23;
            uVar45 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar35 = uVar19 * 0x80 | uVar19 >> 0x19;
            uVar19 = uVar16 >> 0xd | uVar16 << 0x13;
            uVar21 = uVar29 << 0xf | uVar29 >> 0x11;
            uVar22 = (uVar44 ^ uVar34) + (uVar35 ^ uVar23) + uVar30 + ((uVar39 | uVar36) & uVar37 | uVar39 & uVar36);
            uVar17 = ((uVar18 ^ uVar16) & uVar20 ^ uVar18) + uVar35 + uVar34 + uVar17;
            uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
            uVar23 = uVar21 ^ uVar32 ^ uVar34;
            uVar34 = uVar34 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar42 << 7 | uVar42 >> 0x19) ^ uVar21 ^ uVar25 ^ uVar32;
            uVar36 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar23 = uVar22 * 0x1000 | uVar22 >> 0x14;
            uVar16 = uVar17 + 0xb14f50f3 + uVar23;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar35 = (uVar28 ^ uVar41) + (uVar16 ^ uVar23) + uVar37 + ((uVar22 | uVar39) & uVar45 | uVar22 & uVar39);
            uVar18 = ((uVar19 ^ uVar20) & uVar17 ^ uVar19) + uVar16 + uVar41 + uVar18;
            uVar20 = uVar20 >> 0xd | uVar20 << 0x13;
            uVar16 = uVar14 << 0xf | uVar14 >> 0x11;
            uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
            uVar23 = uVar16 ^ uVar27 ^ uVar41;
            uVar41 = uVar41 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar44 << 7 | uVar44 >> 0x19) ^ uVar16 ^ uVar31 ^ uVar27;
            uVar37 = uVar22 * 0x200 | uVar22 >> 0x17;
            uVar23 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar16 = uVar18 + 0x629ea1e7 + uVar23;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar21 = uVar17 >> 0xd | uVar17 << 0x13;
            uVar30 = (uVar24 ^ uVar40) + (uVar16 ^ uVar23) + uVar45 + ((uVar35 | uVar22) & uVar36 | uVar35 & uVar22);
            uVar19 = ((uVar17 ^ uVar20) & uVar18 ^ uVar20) + uVar16 + uVar40 + uVar19;
            uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
            uVar16 = uVar15 << 0xf | uVar15 >> 0x11;
            uVar23 = uVar16 ^ uVar26 ^ uVar40;
            uVar17 = uVar30 * 0x1000 | uVar30 >> 0x14;
            uVar40 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar28 << 7 | uVar28 >> 0x19)
                     ^ uVar16 ^ uVar26 ^ uVar40 ^ uVar38;
            uVar23 = uVar19 + 0xc53d43ce + uVar17;
            uVar23 = uVar23 * 0x80 | uVar23 >> 0x19;
            uVar39 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar22 = uVar18 >> 0xd | uVar18 << 0x13;
            uVar36 = (uVar32 ^ uVar42) + (uVar23 ^ uVar17) + uVar36 + ((uVar30 | uVar35) & uVar37 | uVar30 & uVar35);
            uVar20 = ((uVar21 ^ uVar18) & uVar19 ^ uVar21) + uVar23 + uVar42 + uVar20;
            uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
            uVar16 = uVar34 << 0xf | uVar34 >> 0x11;
            uVar23 = uVar16 ^ uVar25 ^ uVar42;
            uVar35 = uVar30 * 0x200 | uVar30 >> 0x17;
            uVar42 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar24 << 7 | uVar24 >> 0x19)
                     ^ uVar16 ^ uVar25 ^ uVar42 ^ uVar29;
            uVar23 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar16 = uVar20 + 0x8a7a879d + uVar23;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar17 = uVar19 >> 0xd | uVar19 << 0x13;
            uVar21 = ((uVar22 ^ uVar19) & uVar20 ^ uVar22) + uVar16 + uVar44 + uVar21;
            uVar19 = (uVar27 ^ uVar44) + (uVar16 ^ uVar23) + uVar37 + ((uVar36 | uVar30) & uVar39 | uVar36 & uVar30);
            uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
            uVar16 = uVar41 << 0xf | uVar41 >> 0x11;
            uVar23 = uVar16 ^ uVar31 ^ uVar44;
            uVar45 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar44 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar32 << 7 | uVar32 >> 0x19)
                     ^ uVar16 ^ uVar31 ^ uVar44 ^ uVar14;
            uVar23 = uVar19 * 0x1000 | uVar19 >> 0x14;
            uVar16 = uVar21 + 0x14f50f3b + uVar23;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar18 = uVar20 >> 0xd | uVar20 << 0x13;
            uVar37 = (uVar26 ^ uVar28) + (uVar16 ^ uVar23) + uVar39 + ((uVar19 | uVar36) & uVar35 | uVar19 & uVar36);
            uVar22 = ((uVar17 ^ uVar20) & uVar21 ^ uVar17) + uVar16 + uVar28 + uVar22;
            uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) ^ (uVar22 * 0x200 | uVar22 >> 0x17) ^ uVar22;
            uVar16 = uVar40 << 0xf | uVar40 >> 0x11;
            uVar23 = uVar16 ^ uVar28 ^ uVar38;
            uVar30 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar27 << 7 | uVar27 >> 0x19)
                     ^ uVar16 ^ uVar28 ^ uVar15 ^ uVar38;
            uVar23 = uVar37 * 0x1000 | uVar37 >> 0x14;
            uVar16 = uVar22 + 0x29ea1e76 + uVar23;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar35 = (uVar25 ^ uVar24) + (uVar23 ^ uVar16) + uVar35 + ((uVar37 | uVar19) & uVar45 | uVar37 & uVar19);
            uVar39 = uVar19 * 0x200 | uVar19 >> 0x17;
            uVar19 = uVar21 >> 0xd | uVar21 << 0x13;
            uVar17 = ((uVar21 ^ uVar18) & uVar22 ^ uVar18) + uVar16 + uVar24 + uVar17;
            uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
            uVar16 = uVar42 << 0xf | uVar42 >> 0x11;
            uVar23 = uVar16 ^ uVar24 ^ uVar29;
            uVar24 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar26 << 7 | uVar26 >> 0x19)
                     ^ uVar16 ^ uVar24 ^ uVar34 ^ uVar29;
            uVar23 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar16 = uVar17 + 0x53d43cec + uVar23;
            uVar36 = uVar37 * 0x200 | uVar37 >> 0x17;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar20 = uVar22 >> 0xd | uVar22 << 0x13;
            uVar45 = (uVar31 ^ uVar32) + (uVar16 ^ uVar23) + uVar45 + ((uVar37 | uVar35) & uVar39 | uVar37 & uVar35);
            uVar18 = ((uVar19 ^ uVar22) & uVar17 ^ uVar19) + uVar16 + uVar32 + uVar18;
            uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
            uVar16 = uVar44 << 0xf | uVar44 >> 0x11;
            uVar23 = uVar16 ^ uVar32 ^ uVar14;
            uVar28 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar25 << 7 | uVar25 >> 0x19)
                     ^ uVar16 ^ uVar32 ^ uVar41 ^ uVar14;
            uVar23 = uVar45 * 0x1000 | uVar45 >> 0x14;
            uVar16 = uVar18 + 0xa7a879d8 + uVar23;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar37 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar21 = uVar17 >> 0xd | uVar17 << 0x13;
            uVar35 = (uVar27 ^ uVar38) + (uVar16 ^ uVar23) + uVar39 + ((uVar45 | uVar35) & uVar36 | uVar45 & uVar35);
            uVar19 = ((uVar20 ^ uVar17) & uVar18 ^ uVar20) + uVar16 + uVar27 + uVar19;
            uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
            uVar16 = uVar30 << 0xf | uVar30 >> 0x11;
            uVar23 = uVar16 ^ uVar27 ^ uVar15;
            uVar27 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar31 << 7 | uVar31 >> 0x19)
                     ^ uVar16 ^ uVar27 ^ uVar40 ^ uVar15;
            uVar23 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar16 = uVar19 + 0x4f50f3b1 + uVar23;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar43 = uVar45 * 0x200 | uVar45 >> 0x17;
            uVar20 = ((uVar21 ^ uVar18) & uVar19 ^ uVar21) + uVar16 + uVar26 + uVar20;
            uVar36 = (uVar26 ^ uVar29) + (uVar16 ^ uVar23) + uVar36 + ((uVar35 | uVar45) & uVar37 | uVar35 & uVar45);
            uVar18 = uVar18 >> 0xd | uVar18 << 0x13;
            uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
            uVar16 = uVar24 << 0xf | uVar24 >> 0x11;
            uVar23 = uVar16 ^ uVar26 ^ uVar34;
            uVar32 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar38 << 7 | uVar38 >> 0x19)
                     ^ uVar16 ^ uVar26 ^ uVar42 ^ uVar34;
            uVar23 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar16 = uVar20 + 0x9ea1e762 + uVar23;
            uVar39 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar22 = uVar19 >> 0xd | uVar19 << 0x13;
            uVar35 = (uVar25 ^ uVar14) + (uVar16 ^ uVar23) + uVar37 + ((uVar36 | uVar35) & uVar43 | uVar36 & uVar35);
            uVar21 = ((uVar19 ^ uVar18) & uVar20 ^ uVar18) + uVar16 + uVar25 + uVar21;
            uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
            uVar16 = uVar28 << 0xf | uVar28 >> 0x11;
            uVar23 = uVar16 ^ uVar25 ^ uVar41;
            uVar17 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar19 = uVar21 + 0x3d43cec5 + uVar17;
            uVar26 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar29 << 7 | uVar29 >> 0x19)
                     ^ uVar16 ^ uVar25 ^ uVar44 ^ uVar41;
            uVar23 = uVar19 * 0x80 | uVar19 >> 0x19;
            uVar45 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar19 = uVar20 >> 0xd | uVar20 << 0x13;
            uVar37 = (uVar31 ^ uVar15) + (uVar23 ^ uVar17) + uVar43 + ((uVar35 | uVar36) & uVar39 | uVar35 & uVar36);
            uVar18 = ((uVar22 ^ uVar20) & uVar21 ^ uVar22) + uVar23 + uVar31 + uVar18;
            uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
            uVar16 = uVar27 << 0xf | uVar27 >> 0x11;
            uVar23 = uVar16 ^ uVar31 ^ uVar40;
            uVar31 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar14 << 7 | uVar14 >> 0x19)
                     ^ uVar16 ^ uVar31 ^ uVar30 ^ uVar40;
            uVar23 = uVar37 * 0x1000 | uVar37 >> 0x14;
            uVar16 = uVar18 + 0x7a879d8a + uVar23;
            uVar20 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar25 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar16 = uVar21 >> 0xd | uVar21 << 0x13;
            uVar17 = uVar32 << 0xf | uVar32 >> 0x11;
            uVar35 = (uVar34 ^ uVar38) + (uVar20 ^ uVar23) + uVar39 + ((uVar37 | uVar35) & uVar45 | uVar37 & uVar35);
            uVar22 = ((uVar19 ^ uVar21) & uVar18 ^ uVar19) + uVar20 + uVar38 + uVar22;
            uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) ^ (uVar22 * 0x200 | uVar22 >> 0x17) ^ uVar22;
            uVar23 = uVar17 ^ uVar42 ^ uVar38;
            uVar38 = uVar38 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar15 << 7 | uVar15 >> 0x19) ^ uVar17 ^ uVar24 ^ uVar42;
            uVar36 = uVar37 * 0x200 | uVar37 >> 0x17;
            uVar23 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar17 = uVar22 + 0xf50f3b14 + uVar23;
            uVar21 = uVar17 * 0x80 | uVar17 >> 0x19;
            uVar20 = uVar26 << 0xf | uVar26 >> 0x11;
            uVar17 = uVar18 >> 0xd | uVar18 << 0x13;
            uVar19 = ((uVar16 ^ uVar18) & uVar22 ^ uVar16) + uVar21 + uVar29 + uVar19;
            uVar21 = (uVar41 ^ uVar29) + (uVar21 ^ uVar23) + uVar45 + ((uVar35 | uVar37) & uVar25 | uVar35 & uVar37);
            uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
            uVar23 = uVar20 ^ uVar44 ^ uVar29;
            uVar29 = uVar29 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar34 << 7 | uVar34 >> 0x19) ^ uVar20 ^ uVar28 ^ uVar44;
            uVar23 = uVar21 * 0x1000 | uVar21 >> 0x14;
            uVar18 = uVar19 + 0xea1e7629 + uVar23;
            uVar39 = uVar18 * 0x80 | uVar18 >> 0x19;
            uVar25 = (uVar40 ^ uVar14) + (uVar39 ^ uVar23) + uVar25 + ((uVar21 | uVar35) & uVar36 | uVar21 & uVar35);
            uVar20 = uVar31 << 0xf | uVar31 >> 0x11;
            uVar18 = uVar22 >> 0xd | uVar22 << 0x13;
            uVar37 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar16 = ((uVar22 ^ uVar17) & uVar19 ^ uVar17) + uVar39 + uVar14 + uVar16;
            uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
            uVar23 = uVar20 ^ uVar30 ^ uVar14;
            uVar14 = uVar14 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar41 << 7 | uVar41 >> 0x19) ^ uVar20 ^ uVar27 ^ uVar30;
            uVar22 = uVar21 * 0x200 | uVar21 >> 0x17;
            uVar23 = uVar25 * 0x1000 | uVar25 >> 0x14;
            uVar20 = uVar16 + 0xd43cec53 + uVar23;
            uVar35 = uVar20 * 0x80 | uVar20 >> 0x19;
            uVar36 = (uVar42 ^ uVar15) + (uVar35 ^ uVar23) + uVar36 + ((uVar25 | uVar21) & uVar37 | uVar25 & uVar21);
            uVar21 = uVar38 << 0xf | uVar38 >> 0x11;
            uVar20 = uVar19 >> 0xd | uVar19 << 0x13;
            uVar17 = ((uVar18 ^ uVar19) & uVar16 ^ uVar18) + uVar35 + uVar15 + uVar17;
            uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
            uVar23 = uVar21 ^ uVar24 ^ uVar15;
            uVar15 = uVar15 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar40 << 7 | uVar40 >> 0x19) ^ uVar21 ^ uVar32 ^ uVar24;
            uVar35 = uVar25 * 0x200 | uVar25 >> 0x17;
            uVar23 = uVar36 * 0x1000 | uVar36 >> 0x14;
            uVar19 = uVar17 + 0xa879d8a7 + uVar23;
            uVar39 = uVar19 * 0x80 | uVar19 >> 0x19;
            uVar21 = uVar29 << 0xf | uVar29 >> 0x11;
            uVar25 = (uVar44 ^ uVar34) + (uVar39 ^ uVar23) + uVar37 + ((uVar36 | uVar25) & uVar22 | uVar36 & uVar25);
            uVar19 = uVar16 >> 0xd | uVar16 << 0x13;
            uVar18 = ((uVar20 ^ uVar16) & uVar17 ^ uVar20) + uVar39 + uVar34 + uVar18;
            uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
            uVar23 = uVar21 ^ uVar28 ^ uVar34;
            uVar34 = uVar34 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar42 << 7 | uVar42 >> 0x19) ^ uVar21 ^ uVar26 ^ uVar28;
            uVar23 = uVar25 * 0x1000 | uVar25 >> 0x14;
            uVar16 = uVar18 + 0x50f3b14f + uVar23;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar37 = (uVar30 ^ uVar41) + (uVar16 ^ uVar23) + uVar22 + ((uVar25 | uVar36) & uVar35 | uVar25 & uVar36);
            uVar20 = ((uVar19 ^ uVar17) & uVar18 ^ uVar19) + uVar16 + uVar41 + uVar20;
            uVar16 = uVar14 << 0xf | uVar14 >> 0x11;
            uVar21 = uVar17 >> 0xd | uVar17 << 0x13;
            uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
            uVar45 = uVar36 * 0x200 | uVar36 >> 0x17;
            uVar23 = uVar16 ^ uVar27 ^ uVar41;
            uVar41 = uVar41 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^
                              (uVar44 << 7 | uVar44 >> 0x19) ^ uVar16 ^ uVar31 ^ uVar27;
            uVar36 = uVar25 * 0x200 | uVar25 >> 0x17;
            uVar23 = uVar37 * 0x1000 | uVar37 >> 0x14;
            uVar16 = uVar20 + 0xa1e7629e + uVar23;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar22 = uVar18 >> 0xd | uVar18 << 0x13;
            uVar35 = (uVar24 ^ uVar40) + (uVar16 ^ uVar23) + uVar35 + ((uVar37 | uVar25) & uVar45 | uVar37 & uVar25);
            uVar19 = ((uVar18 ^ uVar21) & uVar20 ^ uVar21) + uVar16 + uVar40 + uVar19;
            uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
            uVar16 = uVar15 << 0xf | uVar15 >> 0x11;
            uVar23 = uVar16 ^ uVar32 ^ uVar40;
            uVar17 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar23 = (uVar23 << 0xf | uVar23 >> 0x11) ^ (uVar23 >> 9 | uVar23 << 0x17) ^ (uVar30 << 7 | uVar30 >> 0x19)
                     ^ uVar16 ^ uVar32 ^ uVar40 ^ uVar38;
            uVar16 = uVar19 + 0x43cec53d + uVar17;
            uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
            uVar39 = uVar37 * 0x200 | uVar37 >> 0x17;
            uVar25 = uVar20 >> 0xd | uVar20 << 0x13;
            uVar40 = (uVar28 ^ uVar42) + (uVar16 ^ uVar17) + uVar45 + ((uVar35 | uVar37) & uVar36 | uVar35 & uVar37);
            uVar21 = ((uVar22 ^ uVar20) & uVar19 ^ uVar22) + uVar16 + uVar42 + uVar21;
            uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
            uVar17 = uVar34 << 0xf | uVar34 >> 0x11;
            uVar16 = uVar17 ^ uVar26 ^ uVar42;
            uVar37 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar45 = (uVar16 << 0xf | uVar16 >> 0x11) ^ (uVar16 >> 9 | uVar16 << 0x17) ^ (uVar24 << 7 | uVar24 >> 0x19)
                     ^ uVar17 ^ uVar26 ^ uVar42 ^ uVar29;
            uVar16 = uVar40 * 0x1000 | uVar40 >> 0x14;
            uVar17 = uVar21 + 0x879d8a7a + uVar16;
            uVar17 = uVar17 * 0x80 | uVar17 >> 0x19;
            uVar20 = uVar19 >> 0xd | uVar19 << 0x13;
            uVar35 = (uVar27 ^ uVar44) + (uVar17 ^ uVar16) + uVar36 + ((uVar40 | uVar35) & uVar39 | uVar40 & uVar35);
            uVar22 = ((uVar25 ^ uVar19) & uVar21 ^ uVar25) + uVar17 + uVar44 + uVar22;
            uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) ^ (uVar22 * 0x200 | uVar22 >> 0x17) ^ uVar22;
            uVar17 = uVar41 << 0xf | uVar41 >> 0x11;
            uVar16 = uVar17 ^ uVar31 ^ uVar44;
            uVar18 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar16 = (uVar16 << 0xf | uVar16 >> 0x11) ^ (uVar16 >> 9 | uVar16 << 0x17) ^ (uVar28 << 7 | uVar28 >> 0x19)
                     ^ uVar17 ^ uVar31 ^ uVar44 ^ uVar14;
            uVar17 = uVar22 + 0xf3b14f5 + uVar18;
            uVar17 = uVar17 * 0x80 | uVar17 >> 0x19;
            uVar42 = uVar40 * 0x200 | uVar40 >> 0x17;
            uVar19 = uVar21 >> 0xd | uVar21 << 0x13;
            uVar39 = (uVar32 ^ uVar30) + (uVar17 ^ uVar18) + uVar39 + ((uVar35 | uVar40) & uVar37 | uVar35 & uVar40);
            uVar25 = ((uVar20 ^ uVar21) & uVar22 ^ uVar20) + uVar17 + uVar30 + uVar25;
            uVar25 = (uVar25 >> 0xf | uVar25 * 0x20000) ^ (uVar25 * 0x200 | uVar25 >> 0x17) ^ uVar25;
            uVar18 = uVar23 << 0xf | uVar23 >> 0x11;
            uVar17 = uVar18 ^ uVar30 ^ uVar38;
            uVar30 = (uVar17 << 0xf | uVar17 >> 0x11) ^ (uVar17 >> 9 | uVar17 << 0x17) ^ (uVar27 << 7 | uVar27 >> 0x19)
                     ^ uVar18 ^ uVar30 ^ uVar15 ^ uVar38;
            uVar17 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar18 = uVar25 + 0x1e7629ea + uVar17;
            uVar18 = uVar18 * 0x80 | uVar18 >> 0x19;
            uVar40 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar35 = (uVar26 ^ uVar24) + (uVar18 ^ uVar17) + uVar37 + ((uVar39 | uVar35) & uVar42 | uVar39 & uVar35);
            uVar21 = uVar22 >> 0xd | uVar22 << 0x13;
            uVar20 = ((uVar22 ^ uVar19) & uVar25 ^ uVar19) + uVar18 + uVar24 + uVar20;
            uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
            uVar18 = uVar45 << 0xf | uVar45 >> 0x11;
            uVar17 = uVar18 ^ uVar24 ^ uVar29;
            uVar24 = (uVar17 << 0xf | uVar17 >> 0x11) ^ (uVar17 >> 9 | uVar17 << 0x17) ^ (uVar32 << 7 | uVar32 >> 0x19)
                     ^ uVar18 ^ uVar24 ^ uVar34 ^ uVar29;
            uVar17 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar18 = uVar20 + 0x3cec53d4 + uVar17;
            uVar18 = uVar18 * 0x80 | uVar18 >> 0x19;
            uVar36 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar22 = uVar25 >> 0xd | uVar25 << 0x13;
            uVar39 = (uVar31 ^ uVar28) + (uVar18 ^ uVar17) + uVar42 + ((uVar35 | uVar39) & uVar40 | uVar35 & uVar39);
            uVar19 = ((uVar21 ^ uVar25) & uVar20 ^ uVar21) + uVar18 + uVar28 + uVar19;
            uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
            uVar18 = uVar16 << 0xf | uVar16 >> 0x11;
            uVar17 = uVar18 ^ uVar28 ^ uVar14;
            uVar28 = (uVar17 << 0xf | uVar17 >> 0x11) ^ (uVar17 >> 9 | uVar17 << 0x17) ^ (uVar26 << 7 | uVar26 >> 0x19)
                     ^ uVar18 ^ uVar28 ^ uVar41 ^ uVar14;
            uVar17 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar18 = uVar19 + 0x79d8a7a8 + uVar17;
            uVar18 = uVar18 * 0x80 | uVar18 >> 0x19;
            uVar37 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar25 = uVar20 >> 0xd | uVar20 << 0x13;
            uVar35 = (uVar27 ^ uVar38) + (uVar18 ^ uVar17) + uVar40 + ((uVar39 | uVar35) & uVar36 | uVar39 & uVar35);
            uVar21 = ((uVar22 ^ uVar20) & uVar19 ^ uVar22) + uVar18 + uVar27 + uVar21;
            uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
            uVar18 = uVar30 << 0xf | uVar30 >> 0x11;
            uVar17 = uVar18 ^ uVar27 ^ uVar15;
            uVar40 = (uVar17 << 0xf | uVar17 >> 0x11) ^ (uVar17 >> 9 | uVar17 << 0x17) ^ (uVar31 << 7 | uVar31 >> 0x19)
                     ^ uVar18 ^ uVar27 ^ uVar23 ^ uVar15;
            uVar17 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar18 = uVar21 + 0xf3b14f50 + uVar17;
            uVar18 = uVar18 * 0x80 | uVar18 >> 0x19;
            uVar42 = (uVar32 ^ uVar29) + (uVar18 ^ uVar17) + uVar36 + ((uVar35 | uVar39) & uVar37 | uVar35 & uVar39);
            uVar20 = uVar19 >> 0xd | uVar19 << 0x13;
            uVar36 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar22 = ((uVar25 ^ uVar19) & uVar21 ^ uVar25) + uVar18 + uVar32 + uVar22;
            uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) ^ (uVar22 * 0x200 | uVar22 >> 0x17) ^ uVar22;
            uVar18 = uVar24 << 0xf | uVar24 >> 0x11;
            uVar17 = uVar18 ^ uVar32 ^ uVar34;
            uVar27 = (uVar17 << 0xf | uVar17 >> 0x11) ^ (uVar17 >> 9 | uVar17 << 0x17) ^ (uVar38 << 7 | uVar38 >> 0x19)
                     ^ uVar18 ^ uVar32 ^ uVar45 ^ uVar34;
            uVar17 = uVar42 * 0x1000 | uVar42 >> 0x14;
            uVar18 = uVar22 + 0xe7629ea1 + uVar17;
            uVar18 = uVar18 * 0x80 | uVar18 >> 0x19;
            uVar39 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar19 = uVar21 >> 0xd | uVar21 << 0x13;
            uVar35 = (uVar26 ^ uVar14) + (uVar18 ^ uVar17) + uVar37 + ((uVar42 | uVar35) & uVar36 | uVar42 & uVar35);
            uVar25 = ((uVar21 ^ uVar20) & uVar22 ^ uVar20) + uVar18 + uVar26 + uVar25;
            uVar25 = (uVar25 >> 0xf | uVar25 * 0x20000) ^ (uVar25 * 0x200 | uVar25 >> 0x17) ^ uVar25;
            uVar18 = uVar28 << 0xf | uVar28 >> 0x11;
            uVar17 = uVar18 ^ uVar26 ^ uVar41;
            uVar32 = (uVar17 << 0xf | uVar17 >> 0x11) ^ (uVar17 >> 9 | uVar17 << 0x17) ^ (uVar29 << 7 | uVar29 >> 0x19)
                     ^ uVar18 ^ uVar26 ^ uVar16 ^ uVar41;
            uVar17 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar18 = uVar25 + 0xcec53d43 + uVar17;
            uVar18 = uVar18 * 0x80 | uVar18 >> 0x19;
            uVar44 = uVar42 * 0x200 | uVar42 >> 0x17;
            uVar21 = uVar22 >> 0xd | uVar22 << 0x13;
            uVar26 = (uVar31 ^ uVar15) + (uVar18 ^ uVar17) + uVar36 + ((uVar35 | uVar42) & uVar39 | uVar35 & uVar42);
            uVar20 = ((uVar19 ^ uVar22) & uVar25 ^ uVar19) + uVar18 + uVar31 + uVar20;
            uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
            uVar18 = uVar40 << 0xf | uVar40 >> 0x11;
            uVar17 = uVar18 ^ uVar31 ^ uVar23;
            uVar37 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar36 = (uVar17 << 0xf | uVar17 >> 0x11) ^ (uVar17 >> 9 | uVar17 << 0x17) ^ (uVar14 << 7 | uVar14 >> 0x19)
                     ^ uVar18 ^ uVar31 ^ uVar30 ^ uVar23;
            uVar17 = uVar26 * 0x1000 | uVar26 >> 0x14;
            uVar18 = uVar20 + 0x9d8a7a87 + uVar17;
            uVar22 = uVar18 * 0x80 | uVar18 >> 0x19;
            uVar18 = uVar25 >> 0xd | uVar25 << 0x13;
            uVar35 = (uVar34 ^ uVar38) + (uVar22 ^ uVar17) + uVar39 + ((uVar26 | uVar35) & uVar44 | uVar26 & uVar35);
            uVar19 = ((uVar21 ^ uVar25) & uVar20 ^ uVar21) + uVar22 + uVar38 + uVar19;
            uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
            uVar22 = uVar27 << 0xf | uVar27 >> 0x11;
            uVar17 = uVar22 ^ uVar45 ^ uVar38;
            uVar38 = uVar38 ^ (uVar17 << 0xf | uVar17 >> 0x11) ^ (uVar17 >> 9 | uVar17 << 0x17) ^
                              (uVar15 << 7 | uVar15 >> 0x19) ^ uVar22 ^ uVar24 ^ uVar45;
            uVar25 = uVar26 * 0x200 | uVar26 >> 0x17;
            uVar17 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar22 = uVar19 + 0x3b14f50f + uVar17;
            uVar31 = uVar22 * 0x80 | uVar22 >> 0x19;
            uVar22 = uVar20 >> 0xd | uVar20 << 0x13;
            uVar26 = (uVar41 ^ uVar29) + (uVar31 ^ uVar17) + uVar44 + ((uVar35 | uVar26) & uVar37 | uVar35 & uVar26);
            uVar21 = ((uVar18 ^ uVar20) & uVar19 ^ uVar18) + uVar31 + uVar29 + uVar21;
            uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
            uVar39 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar17 = uVar26 * 0x1000 | uVar26 >> 0x14;
            uVar20 = uVar21 + 0x7629ea1e + uVar17;
            uVar20 = uVar20 * 0x80 | uVar20 >> 0x19;
            uVar31 = (uVar23 ^ uVar14) + (uVar20 ^ uVar17) + uVar37 + ((uVar26 | uVar35) & uVar25 | uVar26 & uVar35);
            uVar18 = ((uVar19 ^ uVar22) & uVar21 ^ uVar22) + uVar20 + uVar14 + uVar18;
            uVar19 = uVar19 >> 0xd | uVar19 << 0x13;
            uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
            uVar17 = uVar31 * 0x1000 | uVar31 >> 0x14;
            uVar35 = uVar26 * 0x200 | uVar26 >> 0x17;
            uVar20 = uVar18 + 0xec53d43c + uVar17;
            uVar37 = uVar20 * 0x80 | uVar20 >> 0x19;
            uVar20 = uVar21 >> 0xd | uVar21 << 0x13;
            uVar25 = (uVar45 ^ uVar15) + (uVar37 ^ uVar17) + uVar25 + ((uVar31 | uVar26) & uVar39 | uVar31 & uVar26);
            uVar22 = ((uVar19 ^ uVar21) & uVar18 ^ uVar19) + uVar37 + uVar15 + uVar22;
            uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) ^ (uVar22 * 0x200 | uVar22 >> 0x17) ^ uVar22;
            uVar26 = uVar31 * 0x200 | uVar31 >> 0x17;
            uVar17 = uVar25 * 0x1000 | uVar25 >> 0x14;
            uVar21 = uVar22 + 0xd8a7a879 + uVar17;
            uVar37 = uVar21 * 0x80 | uVar21 >> 0x19;
            uVar21 = uVar18 >> 0xd | uVar18 << 0x13;
            uVar19 = ((uVar20 ^ uVar18) & uVar22 ^ uVar20) + uVar37 + uVar34 + uVar19;
            uVar39 = (uVar16 ^ uVar34) + (uVar37 ^ uVar17) + uVar39 + ((uVar25 | uVar31) & uVar35 | uVar25 & uVar31);
            uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
            uVar17 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar18 = uVar19 + 0xb14f50f3 + uVar17;
            uVar37 = uVar18 * 0x80 | uVar18 >> 0x19;
            uVar31 = uVar25 * 0x200 | uVar25 >> 0x17;
            uVar18 = uVar22 >> 0xd | uVar22 << 0x13;
            uVar35 = (uVar30 ^ uVar41) + (uVar37 ^ uVar17) + uVar35 + ((uVar25 | uVar39) & uVar26 | uVar25 & uVar39);
            uVar20 = ((uVar21 ^ uVar22) & uVar19 ^ uVar21) + uVar37 + uVar41 + uVar20;
            uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
            uVar42 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar17 = uVar35 * 0x1000 | uVar35 >> 0x14;
            uVar22 = uVar20 + 0x629ea1e7 + uVar17;
            uVar25 = uVar22 * 0x80 | uVar22 >> 0x19;
            uVar22 = uVar19 >> 0xd | uVar19 << 0x13;
            uVar26 = (uVar24 ^ uVar23) + (uVar25 ^ uVar17) + uVar26 + ((uVar35 | uVar39) & uVar31 | uVar35 & uVar39);
            uVar21 = ((uVar19 ^ uVar18) & uVar20 ^ uVar18) + uVar25 + uVar23 + uVar21;
            uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
            uVar17 = uVar26 * 0x1000 | uVar26 >> 0x14;
            uVar19 = uVar21 + 0xc53d43ce + uVar17;
            uVar19 = uVar19 * 0x80 | uVar19 >> 0x19;
            uVar25 = (uVar28 ^ uVar45) + (uVar19 ^ uVar17) + uVar31 + ((uVar26 | uVar35) & uVar42 | uVar26 & uVar35);
            uVar18 = ((uVar22 ^ uVar20) & uVar21 ^ uVar22) + uVar19 + uVar45 + uVar18;
            uVar37 = uVar35 * 0x200 | uVar35 >> 0x17;
            uVar19 = uVar20 >> 0xd | uVar20 << 0x13;
            uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
            uVar17 = uVar25 * 0x1000 | uVar25 >> 0x14;
            uVar35 = uVar26 * 0x200 | uVar26 >> 0x17;
            uVar20 = uVar18 + 0x8a7a879d + uVar17;
            uVar31 = uVar20 * 0x80 | uVar20 >> 0x19;
            uVar20 = uVar21 >> 0xd | uVar21 << 0x13;
            uVar39 = (uVar40 ^ uVar16) + (uVar31 ^ uVar17) + uVar42 + ((uVar25 | uVar26) & uVar37 | uVar25 & uVar26);
            uVar22 = ((uVar19 ^ uVar21) & uVar18 ^ uVar19) + uVar31 + uVar16 + uVar22;
            uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) ^ (uVar22 * 0x200 | uVar22 >> 0x17) ^ uVar22;
            uVar17 = uVar39 * 0x1000 | uVar39 >> 0x14;
            uVar31 = uVar25 * 0x200 | uVar25 >> 0x17;
            uVar21 = uVar22 + 0x14f50f3b + uVar17;
            uVar26 = uVar21 * 0x80 | uVar21 >> 0x19;
            uVar21 = uVar18 >> 0xd | uVar18 << 0x13;
            uVar42 = (uVar27 ^ uVar30) + (uVar26 ^ uVar17) + uVar37 + ((uVar39 | uVar25) & uVar35 | uVar39 & uVar25);
            uVar19 = ((uVar20 ^ uVar18) & uVar22 ^ uVar20) + uVar26 + uVar30 + uVar19;
            uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
            uVar17 = uVar42 * 0x1000 | uVar42 >> 0x14;
            uVar18 = uVar19 + 0x29ea1e76 + uVar17;
            uVar25 = uVar18 * 0x80 | uVar18 >> 0x19;
            uVar37 = uVar39 * 0x200 | uVar39 >> 0x17;
            uVar18 = uVar22 >> 0xd | uVar22 << 0x13;
            uVar26 = (uVar32 ^ uVar24) + (uVar25 ^ uVar17) + uVar35 + ((uVar42 | uVar39) & uVar31 | uVar42 & uVar39);
            uVar20 = ((uVar22 ^ uVar21) & uVar19 ^ uVar21) + uVar25 + uVar24 + uVar20;
            uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
            uVar17 = uVar26 * 0x1000 | uVar26 >> 0x14;
            uVar39 = uVar42 * 0x200 | uVar42 >> 0x17;
            uVar22 = uVar20 + 0x53d43cec + uVar17;
            uVar25 = uVar22 * 0x80 | uVar22 >> 0x19;
            uVar22 = uVar19 >> 0xd | uVar19 << 0x13;
            uVar31 = (uVar36 ^ uVar28) + (uVar25 ^ uVar17) + uVar31 + ((uVar26 | uVar42) & uVar37 | uVar26 & uVar42);
            uVar21 = ((uVar18 ^ uVar19) & uVar20 ^ uVar18) + uVar25 + uVar28 + uVar21;
            uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
            uVar17 = uVar31 * 0x1000 | uVar31 >> 0x14;
            uVar19 = uVar21 + 0xa7a879d8 + uVar17;
            uVar19 = uVar19 * 0x80 | uVar19 >> 0x19;
            uVar37 = (uVar40 ^ uVar38) + (uVar19 ^ uVar17) + uVar37 + ((uVar31 | uVar26) & uVar39 | uVar31 & uVar26);
            uVar25 = uVar20 >> 0xd | uVar20 << 0x13;
            uVar35 = uVar26 * 0x200 | uVar26 >> 0x17;
            uVar18 = ((uVar22 ^ uVar20) & uVar21 ^ uVar22) + uVar19 + uVar40 + uVar18;
            uVar20 = uVar37 * 0x1000 | uVar37 >> 0x14;
            uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
            uVar19 = uVar32 << 0xf | uVar32 >> 0x11;
            uVar17 = uVar19 ^ uVar16 ^ uVar29;
            uVar26 = uVar18 + 0x4f50f3b1 + uVar20;
            uVar26 = uVar26 * 0x80 | uVar26 >> 0x19;
            uVar42 = uVar31 * 0x200 | uVar31 >> 0x17;
            uVar17 = (uVar26 ^ uVar20) +
                     ((uVar37 | uVar31) & uVar35 | uVar37 & uVar31) + uVar39 +
                     ((uVar17 << 0xf | uVar17 >> 0x11) ^ (uVar17 >> 9 | uVar17 << 0x17) ^ (uVar34 << 7 | uVar34 >> 0x19)
                      ^ uVar19 ^ uVar27 ^ uVar28 ^ uVar16 ^ uVar29);
            uVar19 = uVar17 * 0x1000 | uVar17 >> 0x14;
            uVar16 = uVar21 >> 0xd | uVar21 << 0x13;
            uVar22 = ((uVar25 ^ uVar21) & uVar18 ^ uVar25) + uVar26 + uVar27 + uVar22;
            uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) ^ (uVar22 * 0x200 | uVar22 >> 0x17) ^ uVar22;
            uVar29 = uVar36 << 0xf | uVar36 >> 0x11;
            uVar34 = uVar29 ^ uVar30 ^ uVar14;
            uVar20 = uVar22 + 0x9ea1e762 + uVar19;
            uVar20 = uVar20 * 0x80 | uVar20 >> 0x19;
            uVar21 = uVar37 * 0x200 | uVar37 >> 0x17;
            uVar41 = (uVar20 ^ uVar19) +
                     ((uVar17 | uVar37) & uVar42 | uVar17 & uVar37) + uVar35 +
                     ((uVar34 << 0xf | uVar34 >> 0x11) ^ (uVar34 >> 9 | uVar34 << 0x17) ^ (uVar41 << 7 | uVar41 >> 0x19)
                      ^ uVar29 ^ uVar32 ^ uVar40 ^ uVar30 ^ uVar14);
            uVar19 = uVar18 >> 0xd | uVar18 << 0x13;
            uVar14 = uVar41 * 0x1000 | uVar41 >> 0x14;
            uVar25 = ((uVar18 ^ uVar16) & uVar22 ^ uVar16) + uVar20 + uVar32 + uVar25;
            uVar34 = uVar38 << 0xf | uVar38 >> 0x11;
            uVar25 = (uVar25 >> 0xf | uVar25 * 0x20000) ^ (uVar25 * 0x200 | uVar25 >> 0x17) ^ uVar25;
            uVar29 = uVar34 ^ uVar24 ^ uVar15;
            uVar18 = uVar25 + 0x3d43cec5 + uVar14;
            uVar18 = uVar18 * 0x80 | uVar18 >> 0x19;
            uVar16 = ((uVar19 ^ uVar22) & uVar25 ^ uVar19) + uVar18 + uVar36 + uVar16;
            uStack_54 = uStack_54 ^ uVar41;
            *arg1 = *arg1 ^ (uVar18 ^ uVar14) +
                            ((uVar41 | uVar17) & uVar21 | uVar41 & uVar17) + uVar42 +
                            ((uVar29 << 0xf | uVar29 >> 0x11) ^ (uVar29 >> 9 | uVar29 << 0x17) ^
                             (uVar23 << 7 | uVar23 >> 0x19) ^ uVar34 ^ uVar36 ^ uVar27 ^ uVar24 ^ uVar15);
            *(arg1 + 4) = uStack_54;
            uStack_6c = uStack_6c ^ (uVar17 * 0x200 | uVar17 >> 0x17);
            *(arg1 + 8) = uStack_6c;
            uStack_60 = uStack_60 ^ uVar21;
            *(arg1 + 0xc) = uStack_60;
            uStack_5c = uStack_5c ^ uVar25;
            uVar33 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar33 ^ uVar16;
            *(arg1 + 0x14) = uStack_5c;
            uStack_64 = uStack_64 ^ (uVar22 >> 0xd | uVar22 << 0x13);
            *(arg1 + 0x18) = uStack_64;
            uStack_58 = uStack_58 ^ uVar19;
            *(arg1 + 0x10) = uVar33;
            *(arg1 + 0x1c) = uStack_58;
        } while (arg3 != 0);
    }
    return;
}


/* fcn.0001c368 @ 0x1c368 */

ulong fcn.0001c368(int64_t arg1,int64_t arg2)

{
    int64_t *arg2_00;
    uchar *puVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t *puVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    int64_t aiStack_2f0 [4];
    uint64_t uStack_2d0;
    uint64_t uStack_2c8;
    uint64_t uStack_2c0;
    uint64_t uStack_2b8;
    uchar auStack_2b0 [8];
    uint64_t auStack_2a8 [14];
    uint64_t auStack_238 [66];
    
    piVar3 = arg1 + 8;
    piVar5 = aiStack_2f0;
    iVar12 = 8;
    do {
        piVar5 = piVar5 + 1;
        arg2_00 = (piVar3 - (aiStack_2f0 + 1)) + piVar5;
        if (piVar5 != arg2_00) {
            section..text(piVar5,arg2_00,8);
        }
        iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    puVar1 = arg2 + 2;
    iVar12 = 0x10;
    do {
        *(puVar1 + auStack_2b0 + (6 - arg2)) =
             CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(puVar1[-2],puVar1[-1]),*puVar1),puVar1[1]
                                                         ),puVar1[2]),puVar1[3]),puVar1[4]),puVar1[5]);
        puVar1 = puVar1 + 8;
        iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    puVar8 = auStack_238;
    iVar12 = 0x40;
    do {
        uVar4 = puVar8[-0xd];
        uVar6 = *puVar8;
        puVar8[2] = ((uVar4 >> 8 | uVar4 << 0x38) ^ (uVar4 >> 1 | ((uVar4 & 1) != 0) << 0x3f) ^ uVar4 >> 7) +
                    ((uVar6 >> 0x13 | uVar6 << 0x2d) ^ (uVar6 << 3 | uVar6 >> 0x3d) ^ uVar6 >> 6) + puVar8[-0xe] +
                    puVar8[-5];
        puVar8 = puVar8 + 1;
        iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    iVar12 = 0;
    do {
        iVar2 = ((uStack_2c8 << 0x17 | uStack_2c8 >> 0x29) ^ (uStack_2c8 >> 0x12 | uStack_2c8 << 0x2e) ^
                (uStack_2c8 >> 0xe | uStack_2c8 << 0x32)) + ((uStack_2c0 ^ uStack_2b8) & uStack_2c8 ^ uStack_2b8) +
                *(iVar12 + 0x1e0a0) + *(auStack_2a8 + iVar12) + auStack_2b0;
        uVar6 = uStack_2d0 + iVar2;
        uVar7 = ((aiStack_2f0[2] | aiStack_2f0[1]) & aiStack_2f0[3] | aiStack_2f0[2] & aiStack_2f0[1]) +
                iVar2 + ((aiStack_2f0[1] << 0x1e | aiStack_2f0[1] >> 0x22) ^
                         (aiStack_2f0[1] >> 0x1c | aiStack_2f0[1] << 0x24) ^
                        (aiStack_2f0[1] << 0x19 | aiStack_2f0[1] >> 0x27));
        iVar2 = ((uVar6 * 0x800000 | uVar6 >> 0x29) ^ (uVar6 >> 0x12 | uVar6 << 0x2e) ^ (uVar6 >> 0xe | uVar6 << 0x32))
                + ((uStack_2c0 ^ uStack_2c8) & uVar6 ^ uStack_2c0) + *(iVar12 + 0x1e0a8) + *(auStack_2a8 + iVar12 + 8) +
                uStack_2b8;
        uVar4 = aiStack_2f0[3] + iVar2;
        uVar9 = ((aiStack_2f0[1] | uVar7) & aiStack_2f0[2] | aiStack_2f0[1] & uVar7) +
                iVar2 + ((uVar7 * 0x40000000 | uVar7 >> 0x22) ^ (uVar7 >> 0x1c | uVar7 << 0x24) ^
                        (uVar7 * 0x2000000 | uVar7 >> 0x27));
        iVar2 = ((uVar4 * 0x800000 | uVar4 >> 0x29) ^ (uVar4 >> 0x12 | uVar4 << 0x2e) ^ (uVar4 >> 0xe | uVar4 << 0x32))
                + ((uVar6 ^ uStack_2c8) & uVar4 ^ uStack_2c8) + *(auStack_2a8 + iVar12 + 0x10) + *(iVar12 + 0x1e0b0) +
                uStack_2c0;
        uVar13 = aiStack_2f0[2] + iVar2;
        uVar10 = ((uVar7 | uVar9) & aiStack_2f0[1] | uVar7 & uVar9) +
                 iVar2 + ((uVar9 * 0x40000000 | uVar9 >> 0x22) ^ (uVar9 >> 0x1c | uVar9 << 0x24) ^
                         (uVar9 * 0x2000000 | uVar9 >> 0x27));
        iVar2 = ((uVar13 * 0x800000 | uVar13 >> 0x29) ^ (uVar13 >> 0x12 | uVar13 << 0x2e) ^
                (uVar13 >> 0xe | uVar13 << 0x32)) + ((uVar4 ^ uVar6) & uVar13 ^ uVar6) + *(auStack_2a8 + iVar12 + 0x18)
                + *(iVar12 + 0x1e0b8) + uStack_2c8;
        uVar14 = aiStack_2f0[1] + iVar2;
        uVar11 = ((uVar10 | uVar9) & uVar7 | uVar10 & uVar9) +
                 iVar2 + ((uVar10 * 0x40000000 | uVar10 >> 0x22) ^ (uVar10 >> 0x1c | uVar10 << 0x24) ^
                         (uVar10 * 0x2000000 | uVar10 >> 0x27));
        iVar2 = ((uVar14 * 0x800000 | uVar14 >> 0x29) ^ (uVar14 >> 0x12 | uVar14 << 0x2e) ^
                (uVar14 >> 0xe | uVar14 << 0x32)) + ((uVar4 ^ uVar13) & uVar14 ^ uVar4) + *(auStack_2a8 + iVar12 + 0x20)
                + *(iVar12 + 0x1e0c0) + uVar6;
        auStack_2b0 = uVar7 + iVar2;
        uStack_2d0 = ((uVar10 | uVar11) & uVar9 | uVar10 & uVar11) +
                     iVar2 + ((uVar11 * 0x40000000 | uVar11 >> 0x22) ^ (uVar11 >> 0x1c | uVar11 << 0x24) ^
                             (uVar11 * 0x2000000 | uVar11 >> 0x27));
        iVar2 = ((auStack_2b0 * 0x800000 | auStack_2b0 >> 0x29) ^ (auStack_2b0 >> 0x12 | auStack_2b0 << 0x2e) ^
                (auStack_2b0 >> 0xe | auStack_2b0 << 0x32)) + ((uVar13 ^ uVar14) & auStack_2b0 ^ uVar13) +
                *(iVar12 + 0x1e0c8) + *(auStack_2a8 + iVar12 + 0x28) + uVar4;
        uStack_2b8 = uVar9 + iVar2;
        aiStack_2f0[3] =
             ((uStack_2d0 | uVar11) & uVar10 | uStack_2d0 & uVar11) +
             iVar2 + ((uStack_2d0 * 0x40000000 | uStack_2d0 >> 0x22) ^ (uStack_2d0 >> 0x1c | uStack_2d0 << 0x24) ^
                     (uStack_2d0 * 0x2000000 | uStack_2d0 >> 0x27));
        iVar2 = ((uStack_2b8 * 0x800000 | uStack_2b8 >> 0x29) ^ (uStack_2b8 >> 0x12 | uStack_2b8 << 0x2e) ^
                (uStack_2b8 >> 0xe | uStack_2b8 << 0x32)) + ((uVar14 ^ auStack_2b0) & uStack_2b8 ^ uVar14) +
                *(iVar12 + 0x1e0d0) + *(auStack_2a8 + iVar12 + 0x30) + uVar13;
        uStack_2c0 = uVar10 + iVar2;
        aiStack_2f0[2] =
             ((aiStack_2f0[3] | uStack_2d0) & uVar11 | aiStack_2f0[3] & uStack_2d0) +
             iVar2 + ((aiStack_2f0[3] * 0x40000000 | aiStack_2f0[3] >> 0x22) ^
                      (aiStack_2f0[3] >> 0x1c | aiStack_2f0[3] << 0x24) ^
                     (aiStack_2f0[3] * 0x2000000 | aiStack_2f0[3] >> 0x27));
        piVar5 = iVar12 + 0x1e0d8;
        iVar2 = iVar12 + 0x38;
        iVar12 = iVar12 + 0x40;
        iVar2 = ((uStack_2c0 * 0x800000 | uStack_2c0 >> 0x29) ^ (uStack_2c0 >> 0x12 | uStack_2c0 << 0x2e) ^
                (uStack_2c0 >> 0xe | uStack_2c0 << 0x32)) + ((auStack_2b0 ^ uStack_2b8) & uStack_2c0 ^ auStack_2b0) +
                *piVar5 + *(auStack_2a8 + iVar2) + uVar14;
        uStack_2c8 = uVar11 + iVar2;
        aiStack_2f0[1] =
             ((aiStack_2f0[3] | aiStack_2f0[2]) & uStack_2d0 | aiStack_2f0[3] & aiStack_2f0[2]) +
             iVar2 + ((aiStack_2f0[2] * 0x40000000 | aiStack_2f0[2] >> 0x22) ^
                      (aiStack_2f0[2] >> 0x1c | aiStack_2f0[2] << 0x24) ^
                     (aiStack_2f0[2] * 0x2000000 | aiStack_2f0[2] >> 0x27));
    } while (iVar12 < 0x280);
    iVar12 = 8;
    do {
        *piVar3 = *piVar3 + *((aiStack_2f0 - arg1) + piVar3);
        piVar3 = piVar3 + 1;
        iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    return 0;
}


/* fcn.0001cd10 @ 0x1cd10 */

int64_t fcn.0001cd10(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uchar auStackX_10 [8];
    int64_t aiStackX_18 [2];
    
    aiStackX_18[0] = 0;
    iVar1 = (**(*0x1e410 + 0x18))(*0x1e410,arg1,auStackX_10,aiStackX_18);
    if ((iVar1 == -0x7ffffffffffffffb) && (iVar1 = fcn.0001595c(aiStackX_18[0]), iVar1 != 0)) {
        iVar2 = (**(*0x1e410 + 0x18))(*0x1e410,arg1,iVar1,aiStackX_18);
        if (-1 < iVar2) {
            return iVar1;
        }
        (**(*0x1e3e8 + 0x48))(iVar1);
    }
    return 0;
}


/* fcn.000159ec @ 0x159ec */

int64_t fcn.000159ec(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    auStackX_18[0] = 0;
    *arg1 = 0;
    iVar1 = (**(*0x1e3f8 + 0x48))(L"PlatformLang",0x1d6f0,0,auStackX_18,0);
    if (iVar1 == -0x7ffffffffffffffb) {
        iVar1 = fcn.0001592c();
        *arg1 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x1e3f8 + 0x48))(L"PlatformLang",0x1d6f0,0,auStackX_18,iVar1);
            if (iVar1 < 0) {
                (**(*0x1e3e8 + 0x48))(*arg1);
                *arg1 = 0;
            }
        }
    }
    return iVar1;
}


/* fcn.00015aa8 @ 0x15aa8 */

char * fcn.00015aa8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    char cVar2;
    int64_t iVar3;
    char *arg1_00;
    uint64_t uVar4;
    char *pcVar5;
    int64_t *piVar6;
    uint64_t arg3_00;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iStackX_20 = arg4;
    if (arg3 != 0) {
        piVar6 = &iStackX_18;
        iStackX_18 = arg3;
        do {
            cVar2 = *arg3;
            uVar4 = 0;
            arg3_00 = 3;
            if (cVar2 == '\0') {
code_r0x00015af8:
                uVar4 = 0;
                cVar1 = cVar2;
                while (cVar1 != '\0') {
                    uVar4 = uVar4 + 1;
                    cVar1 = *(arg3 + uVar4);
                }
            }
            else {
                do {
                    uVar4 = uVar4 + 1;
                } while (*(arg3 + uVar4) != '\0');
                if (uVar4 < 4) goto code_r0x00015af8;
                uVar4 = 3;
            }
            if (arg2 == 0) {
                uVar4 = 0;
                if (cVar2 != '\0') {
                    do {
                        if (cVar2 == ';') break;
                        uVar4 = uVar4 + 1;
                        cVar2 = *(arg3 + uVar4);
                    } while (cVar2 != '\0');
                    goto code_r0x00015b93;
                }
            }
            else {
code_r0x00015b93:
                if (uVar4 != 0) {
                    cVar2 = *arg1;
                    pcVar5 = arg1;
                    while (cVar2 != '\0') {
                        if (arg2 == 0) {
                            for (; (*pcVar5 != '\0' && (*pcVar5 == ';')); pcVar5 = pcVar5 + 1) {
                            }
                            arg3_00 = 0;
                            cVar2 = *pcVar5;
                            while ((cVar2 != '\0' && (cVar2 != ';'))) {
                                arg3_00 = arg3_00 + 1;
                                cVar2 = pcVar5[arg3_00];
                            }
                            if (uVar4 <= arg3_00) goto code_r0x00015b60;
                        }
                        else {
code_r0x00015b60:
                            iVar3 = fcn.00014acc(pcVar5,arg3,uVar4);
                            if (iVar3 == 0) {
                                arg1_00 = fcn.0001595c(arg3_00 + 1);
                                if (arg1_00 == NULL) {
                                    return NULL;
                                }
                                if (arg3_00 != 0) {
                                    if (arg1_00 != pcVar5) {
                                        pcVar5 = section..text(arg1_00,pcVar5,arg3_00);
                                        return pcVar5;
                                    }
                                    return arg1_00;
                                }
                                return arg1_00;
                            }
                        }
                        pcVar5 = pcVar5 + arg3_00;
                        cVar2 = *pcVar5;
                    }
                    if ((arg2 != 0) || (uVar4 = uVar4 - 1, uVar4 == 0)) goto code_r0x00015b98;
                    do {
                        if (*(arg3 + uVar4) == '-') break;
                        uVar4 = uVar4 - 1;
                    } while (uVar4 != 0);
                    goto code_r0x00015b93;
                }
            }
code_r0x00015b98:
            piVar6 = piVar6 + 1;
            arg3 = *piVar6;
        } while (arg3 != NULL);
    }
    return NULL;
}


/* fcn.0001d34c @ 0x1d34c */

//WARNING: Variable defined which should be unmapped: var_17h

ulong fcn.0001d34c(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t var_17h;
    int64_t var_1fh;
    int32_t var_27h;
    int8_t var_3bh;
    int64_t var_3fh;
    int64_t var_47h;
    uchar auStack_88 [16];
    uint32_t uStack_78;
    uchar uStack_74;
    uint uStack_70;
    uint uStack_64;
    ulong uStack_48;
    int64_t iStack_40;
    uint uStack_38;
    int64_t var_29h;
    uchar uStack_24;
    int64_t var_19h;
    int32_t var_11h;
    int32_t var_5h;
    
    if ((arg2 == 0) || (arg1 == 0)) {
        uVar1 = 0x8000000000000002;
    }
    else {
        (**(*0x1e3e8 + 0x168))(arg2,0x1000,0);
        (**(*0x1e3e8 + 0x168))(&uStack_48,0x38);
        (**(*0x1e3e8 + 0x168))(&uStack_78,0x2c);
        (**(*0x1e3e8 + 0x168))(auStack_88,0x10);
        uStack_70 = 0;
        uStack_78 = uStack_78 & 0xfffffc06 | 6;
        uStack_64 = 1;
        unique0x00008f00 = auStack_88;
        uStack_74 = 4;
        unique0x00008f00 = &uStack_78;
        uStack_48 = 10000000;
        uStack_24 = 0;
        uStack_38 = 0x1000;
        iStack_40 = arg2;
        uVar1 = (**(arg1 + 8))(arg1,0,&uStack_48,0);
    }
    return uVar1;
}


/* fcn.0001d24c @ 0x1d24c */

//WARNING: Variable defined which should be unmapped: var_17h
//WARNING: Variable defined which should be unmapped: var_1h

ulong fcn.0001d24c(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t var_17h;
    int64_t var_1fh;
    int32_t var_27h;
    int8_t var_3bh;
    int64_t var_3fh;
    int64_t var_47h;
    uchar auStack_88 [16];
    uint32_t uStack_78;
    uchar uStack_74;
    uint uStack_70;
    uint uStack_64;
    uint uStack_60;
    ulong uStack_48;
    int64_t iStack_40;
    uint uStack_38;
    int64_t var_29h;
    uchar uStack_24;
    int64_t var_19h;
    int32_t var_11h;
    int32_t var_5h;
    int32_t var_1h;
    
    if (arg1 == 0) {
        uVar1 = 0x8000000000000002;
    }
    else {
        (**(*0x1e3e8 + 0x168))(arg2,0x200,0);
        (**(*0x1e3e8 + 0x168))(&uStack_48,0x38);
        (**(*0x1e3e8 + 0x168))(&uStack_78,0x2c);
        (**(*0x1e3e8 + 0x168))(auStack_88,0x10);
        uStack_64 = 0;
        uStack_70 = 0;
        uStack_78 = uStack_78 & 0xfffffc82 | 0x82;
        unique0x00008f00 = auStack_88;
        uStack_60 = 0x200;
        unique0x00008f00 = &uStack_78;
        uStack_74 = 0xc;
        uStack_48 = 10000000;
        uStack_24 = 0;
        uStack_38 = 0x200;
        iStack_40 = arg2;
        uVar1 = (**(arg1 + 8))(arg1,0,&uStack_48,0);
    }
    return uVar1;
}


