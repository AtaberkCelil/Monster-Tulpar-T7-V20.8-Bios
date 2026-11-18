// decompiled by r2ghidra: 0798_OemHooks.pe32
// functions: 40

/* entry0 @ 0x10420 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.0001043c(arg1,arg2);
    fcn.00010624(arg1,arg2);
    return;
}


/* fcn.0001043c @ 0x1043c */

void fcn.0001043c(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    
    *0x121d8 = *(arg1 + 0x60);
    *0x121d0 = arg1;
    fcn.000117c4();
    iVar3 = fcn.00011830();
    if (iVar3 == 0) {
        uVar4 = fcn.00010360();
        fcn.00010350();
        uVar1 = in(0x1808);
        fcn.00010330(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            fcn.00010260();
        }
        fcn.00010330(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010350();
        }
        else {
            fcn.00010340();
        }
    }
    if ((*0x121f8 != NULL) || (iVar3 = (**(*0x121d8 + 0x140))(0x11cf0,0,0x121f8), -1 < iVar3)) {
        (***0x121f8)(*0x121f8,0x12200);
    }
    return;
}


/* fcn.00010624 @ 0x10624 */

int64_t fcn.00010624(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint32_t uVar2;
    int64_t iVar3;
    char *pcVar4;
    char *pcVar5;
    uint8_t uVar6;
    char *noname_0;
    char16_t *noname_0_00;
    char *pcVar7;
    uint *puVar8;
    char **ppcVar9;
    uint64_t uVar10;
    int64_t arg2_00;
    char *apcStackX_8 [2];
    uint32_t auStackX_18 [2];
    ulong uStackX_20;
    int8_t var_69bh;
    int32_t var_6adh;
    int32_t var_6b1h;
    int16_t var_6b5h;
    int8_t var_6b7h;
    int16_t var_6d9h;
    int16_t var_6dch;
    int16_t var_6e5h;
    int16_t var_6e8h;
    int32_t var_6ech;
    int16_t var_6f0h;
    int8_t var_6f2h;
    int32_t var_93fh;
    int32_t var_943h;
    int32_t var_947h;
    int32_t var_94bh;
    int16_t var_984h;
    int16_t var_987h;
    int16_t var_98ah;
    int8_t var_bb9h;
    uint32_t var_bd1h;
    int64_t var_c10h;
    uint32_t var_c19h;
    int8_t var_de9h;
    int32_t var_1010h;
    int64_t var_1018h;
    uint uStack_10c8;
    uint uStack_10c4;
    uint uStack_10c0;
    uint uStack_10bc;
    uint uStack_10b8;
    uint uStack_10b4;
    uint uStack_10b0;
    uint uStack_10ac;
    ulong auStack_10a8 [2];
    uchar auStack_1098 [1851];
    uchar uStack_95d;
    uint uStack_94b;
    uint uStack_947;
    ushort uStack_943;
    uchar uStack_941;
    ushort uStack_91f;
    ushort uStack_91c;
    ushort uStack_913;
    ushort uStack_910;
    uint uStack_90c;
    ushort uStack_908;
    uchar uStack_906;
    uint uStack_6b9;
    uint uStack_6b5;
    uint uStack_6b1;
    uint uStack_6ad;
    ushort uStack_674;
    ushort uStack_671;
    ushort uStack_66e;
    uchar uStack_43f;
    char cStack_427;
    uchar auStack_3e8 [9];
    char cStack_3df;
    uchar uStack_20f;
    
    auStackX_18[0] = 0;
    auStack_10a8[0] = 0xca9;
    uStack_10c8 = 0xec87d643;
    uStack_10c4 = 0x4bb5eba4;
    uStack_10c0 = 0x3e3fe5a1;
    uStack_10bc = 0xa90db236;
    uStackX_20 = 0x3c1;
    uStack_10b8 = 0xb08f97ff;
    uStack_10b4 = 0x4193e6e8;
    uStack_10b0 = 0x9e5e97a9;
    uStack_10ac = 0x32db0a9b;
    if (*0x121e8 == 0) {
        *0x121e0 = *(arg2 + 0x58);
        *0x121e8 = arg2;
    }
    apcStackX_8[0] = arg1;
    iVar3 = (**(*0x121e0 + 0x48))(L"CpuSetup",&uStack_10b8,auStackX_18,&uStackX_20,auStack_3e8);
    if (iVar3 < 0) {
        return iVar3;
    }
    iVar3 = (**(*0x121e0 + 0x48))(L"Setup",&uStack_10c8,auStackX_18,auStack_10a8,auStack_1098);
    if (-1 < iVar3) {
        pcVar7 = NULL;
        (**(*0x121d8 + 0x40))(4,0x31);
        noname_0 = apcStackX_8[0];
        fcn.0001050c(apcStackX_8[0]);
        pcVar5 = apcStackX_8[0];
        while( true ) {
            cVar1 = *pcVar5;
            noname_0 = CONCAT71(noname_0 >> 8,cVar1);
            if (cVar1 == '\0') break;
            pcVar7 = " i9-12900HK";
            pcVar4 = pcVar5;
            if (cVar1 == ' ') {
                do {
                    if (noname_0 == '\0') break;
                    pcVar4 = pcVar4 + 1;
                    pcVar7 = pcVar7 + 1;
                    noname_0 = CONCAT71(noname_0 >> 8,*pcVar4);
                } while (*pcVar4 == *pcVar7);
                if (*pcVar7 == '\0') goto code_r0x0001078c;
            }
            if (*pcVar4 == '\0') goto code_r0x0001079f;
            pcVar5 = pcVar5 + 1;
        }
        pcVar5 = NULL;
code_r0x0001078c:
        if (pcVar5 != NULL) {
            uStack_20f = 1;
        }
code_r0x0001079f:
        ppcVar9 = apcStackX_8;
        iVar3 = CONCAT71(pcVar7 >> 8,0x42);
        fcn.0001129c(noname_0,iVar3,ppcVar9);
        iVar3 = CONCAT71(iVar3 >> 8,0x42);
        uVar10 = CONCAT71(ppcVar9 >> 8,apcStackX_8[0]._0_1_);
        if (cStack_427 == '\x01') {
            uVar10 = uVar10 | 3;
        }
        else {
            uVar10 = uVar10 & 0xfffffffffffffffc;
        }
        fcn.00011254(noname_0,iVar3,uVar10);
        ppcVar9 = apcStackX_8;
        iVar3 = CONCAT71(iVar3 >> 8,0x58);
        fcn.0001129c(noname_0,iVar3,ppcVar9);
        uVar10 = CONCAT71(ppcVar9 >> 8,apcStackX_8[0]._0_1_);
        if (cStack_3df == '\x01') {
            uVar10 = uVar10 | 0x80;
        }
        else {
            uVar10 = uVar10 & 0xffffffffffffff7f;
        }
        iVar3 = CONCAT71(iVar3 >> 8,0x58);
        fcn.00011254(noname_0,iVar3,uVar10);
        cVar1 = fcn.00010d7c(0x902000b);
        if ((cVar1 == '\0') || (cVar1 = fcn.00010d58(0x902000b), cVar1 == '\0')) {
            uVar2 = apcStackX_8[0];
        }
        else {
            uVar2 = fcn.00010dec(0x902000b,iVar3);
            uVar2 = uVar2 >> 1 & 1;
        }
        puVar8 = &uStack_10c8;
        uStack_43f = uVar2 == 1;
        (**(*0x121e0 + 0x58))(L"Setup",puVar8,auStackX_18[0],0xca9,auStack_1098);
        cVar1 = fcn.00010d7c(0x9020010);
        if ((cVar1 == '\0') || (cVar1 = fcn.00010d58(0x9020010), cVar1 == '\0')) {
            uVar2 = apcStackX_8[0];
        }
        else {
            uVar2 = fcn.00010dec(0x9020010,puVar8);
            uVar2 = (uVar2 & 0x1c00 | 0x200) >> 9;
        }
        if (uVar2 == 3) {
            fcn.00010f00();
        }
    }
    uVar6 = *0xfe41074c & 0x3f;
    if ((*0xfe41074c & 0x3f) == 0) {
        uStack_94b = 0xa8816e01;
        uStack_947 = 0xa8a85377;
        uStack_943 = 0xa8a8;
        uStack_941 = 0xa8;
        uStack_6b5 = 0xa87e6ea8;
        uStack_6b1 = 0xa8a8567b;
        uStack_6ad = 0xa8a8a8a8;
        uStack_90c = 0x38384601;
        uStack_908 = 0x2c2c;
        uStack_906 = 0x2c;
code_r0x00010cd0:
        uStack_95d = 1;
code_r0x00010cd6:
        uStack_6b9 = 1;
    }
    else {
        if (uVar6 == 1) {
            cVar1 = fcn.000105c8();
            uStack_95d = 1;
            uStack_908 = 0x3838;
            uStack_906 = 0x38;
            if (cVar1 != '\x01') {
                uStack_94b = 0xa87a7801;
                uStack_947 = 0x3e3e3e7a;
                uStack_943 = 0x3e3e;
                uStack_941 = 0x3e;
                uStack_6b5 = 0xa87b6d3e;
                uStack_6b1 = 0x4040407a;
                uStack_6ad = 0x40404040;
                uStack_90c = 0x2c294701;
                goto code_r0x00010cd6;
            }
            uStack_94b = 0xa8808001;
            uStack_947 = 0x4b4b4b80;
            uStack_943 = 0x4b4b;
            uStack_941 = 0x4b;
            uStack_6b5 = 0xa8807e4b;
            uStack_6b1 = 0x41414180;
            uStack_6ad = 0x41414141;
            uStack_90c = 0x38384601;
            uStack_91f = 0xd0b;
            uStack_674 = 0x2a20;
            uStack_913 = 0x2927;
            uStack_910 = 0x2828;
            uStack_66e = 0x665c;
        }
        else if (uVar6 == 3) {
            cVar1 = fcn.000105c8();
            if (cVar1 != '\x01') {
                uStack_94b = 0x786e6101;
                uStack_947 = 0x4949497b;
                uStack_943 = 0x4949;
                uStack_941 = 0x49;
                uStack_6b5 = 0x78795f49;
                uStack_6b1 = 0x31313170;
                uStack_6ad = 0x31313131;
                uStack_90c = 0x11111601;
                uStack_908 = 0x1c1c;
                uStack_906 = 0x1c;
                uStack_91f = 0x4846;
                uStack_91c = 0x2e2c;
                uStack_674 = 0x2e2c;
                uStack_913 = 0x4846;
                uStack_910 = 0x2e2c;
                uStack_66e = 0x2e2c;
                goto code_r0x00010cd0;
            }
        }
        else if (uVar6 == 8) {
            cVar1 = fcn.000105c8();
            if (cVar1 != '\x01') {
                uStack_94b = 0x80604101;
                uStack_947 = 0x30303060;
                uStack_943 = 0x3030;
                uStack_941 = 0x30;
                uStack_6b5 = 0x80604030;
                uStack_6b1 = 0x2f2f2f60;
                uStack_6ad = 0x2f2f2f2f;
                uStack_90c = 0x1e1e1501;
                uStack_908 = 0x2020;
                uStack_906 = 0x20;
                uStack_91f = 0x4f4e;
                uStack_913 = 0x5f5e;
                uStack_910 = 0x2020;
                uStack_66e = 0x2020;
                goto code_r0x00010cd0;
            }
        }
        else if (uVar6 == 9) {
            cVar1 = fcn.000105c8();
            if (cVar1 != '\x01') {
                uStack_94b = 0xa8816a01;
                uStack_947 = 0x56565679;
                uStack_943 = 0x5656;
                uStack_941 = 0x56;
                uStack_6b5 = 0xa8816156;
                uStack_6b1 = 0x51515177;
                uStack_6ad = 0x51515151;
                uStack_90c = 0x38385f01;
                uStack_908 = 0x3838;
                uStack_906 = 0x38;
                goto code_r0x00010cd0;
            }
        }
        else {
            if (uVar6 == 0xb) {
                uStack_94b = 0xa8927e01;
                uStack_947 = 0x9494488d;
                uStack_943 = 0xa896;
                uStack_6b5 = 0xa8937da8;
                uStack_6b1 = 0x95964b8f;
                uStack_6ad = 0xa8a8a897;
                uStack_90c = 0x302d2d01;
                uStack_908 = 0x3232;
                uStack_906 = 0x31;
                uStack_91f = 0xe0d;
                uStack_671 = 0x2928;
                uStack_913 = 0x2a29;
                uStack_910 = 0x2828;
                uStack_66e = 0x3c3c;
            }
            else {
                if (uVar6 != 0xd) {
                    uStack_95d = 0;
                    goto code_r0x00010cd6;
                }
                uStack_94b = 0xa88b8001;
                uStack_947 = 0x86895391;
                uStack_943 = 0xa89d;
                uStack_6b5 = 0xa8907fa8;
                uStack_6b1 = 0x868c548a;
                uStack_6ad = 0xa8a8a89e;
                uStack_90c = 0x38383f01;
                uStack_908 = 0x3838;
                uStack_906 = 0x38;
            }
            uStack_941 = 0xa8;
            uStack_95d = 1;
        }
        uStack_6b9 = 9;
    }
    (**(*0x121e0 + 0x58))(L"Setup",&uStack_10c8,auStackX_18[0],0xca9,auStack_1098);
    uVar10 = auStackX_18[0];
    puVar8 = &uStack_10b8;
    noname_0_00 = L"CpuSetup";
    (**(*0x121e0 + 0x58))(L"CpuSetup",puVar8,uVar10,uStackX_20,auStack_3e8);
    arg2_00 = CONCAT71(uVar10 >> 8,0xb3);
    iVar3 = CONCAT71(puVar8 >> 8,0x5a);
    fcn.00011254(noname_0_00,iVar3,arg2_00);
    fcn.00011254(noname_0_00,CONCAT71(iVar3 >> 8,0x7b),CONCAT71(arg2_00 >> 8,0xb0));
    return 0;
}


/* fcn.000117c4 @ 0x117c4 */

int64_t fcn.000117c4(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x121f0 == 0) {
        *0x121f0 = 0;
        if (*(*0x121d0 + 0x68) != 0) {
            piVar2 = *(*0x121d0 + 0x70);
            do {
                if ((*0x11ce0 == *piVar2) && (*0x11ce8 == piVar2[1])) {
                    *0x121f0 = (*(*0x121d0 + 0x70))[uVar1 * 3 + 2];
                    return *0x121f0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x121d0 + 0x68));
        }
    }
    return *0x121f0;
}


/* fcn.00011830 @ 0x11830 */

void fcn.00011830(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000117c4();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00011867:
            if ((piVar1 == NULL) || ((*0x12160 == *(piVar1 + 4) && (*0x12168 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00011867;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010360 @ 0x10360 */

uint64_t fcn.00010360(void)

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


/* fcn.00010350 @ 0x10350 */

void fcn.00010350(void)

{
    return;
}


/* fcn.00010330 @ 0x10330 */

uint64_t fcn.00010330(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010262 @ 0x10262 */

void fcn.00010262(void)

{
    return;
}


/* fcn.00010340 @ 0x10340 */

void fcn.00010340(void)

{
    return;
}


/* fcn.00011b80 @ 0x11b80 */

void fcn.00011b80(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    uVar4 = puVar1[3];
    if (arg2 != 0) {
        *arg2 = *puVar1;
    }
    if (arg3 != 0) {
        *arg3 = uVar2;
    }
    if (arg4 != 0) {
        *arg4 = uVar4;
    }
    if (in_stack_00000028 != NULL) {
        *in_stack_00000028 = uVar3;
    }
    return;
}


/* fcn.0001050c @ 0x1050c */

void fcn.0001050c(int64_t arg1)

{
    uint auStackX_8 [2];
    int64_t var_18h;
    int64_t var_bp_20h;
    int64_t var_28h;
    int64_t var_30h;
    
    fcn.00011b80(0x80000002,auStackX_8,&var_18h,&var_bp_20h);
    *arg1 = auStackX_8[0];
    *(arg1 + 4) = var_18h;
    *(arg1 + 8) = var_bp_20h;
    *(arg1 + 0xc) = var_28h;
    fcn.00011b80(0x80000003,auStackX_8,&var_18h,&var_bp_20h);
    *(arg1 + 0x10) = auStackX_8[0];
    *(arg1 + 0x14) = var_18h;
    *(arg1 + 0x18) = var_bp_20h;
    *(arg1 + 0x1c) = var_28h;
    fcn.00011b80(0x80000004,auStackX_8,&var_18h,&var_bp_20h);
    *(arg1 + 0x20) = auStackX_8[0];
    *(arg1 + 0x24) = var_18h;
    *(arg1 + 0x28) = var_bp_20h;
    *(arg1 + 0x2c) = var_28h;
    *(arg1 + 0x30) = 0;
    return;
}


/* fcn.0001129c @ 0x1129c */

int64_t fcn.0001129c(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uchar uVar2;
    int64_t extraout_RAX;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    unkbyte7 Var7;
    
    Var7 = arg2 >> 8;
    iVar5 = CONCAT71(arg1 >> 8,0xa3);
    iVar4 = CONCAT71(noname_0 >> 8,0x62);
    uVar6 = 0;
    fcn.0001118c(iVar4,iVar5,CONCAT71(Var7,4));
    iVar3 = extraout_RAX;
    if (-1 < extraout_RAX) {
        iVar5 = CONCAT71(iVar5 >> 8,0xa2);
        iVar4 = CONCAT71(iVar4 >> 8,0x62);
        iVar3 = fcn.0001118c(iVar4,iVar5,CONCAT71(Var7,arg1));
        if ((-1 < iVar3) && (iVar3 = fcn.00011028(CONCAT71(iVar4 >> 8,0x62),CONCAT71(iVar5 >> 8,0xa4)), -1 < iVar3))
        {
            uVar1 = in(0x66);
            if ((uVar1 & 1) == 0) {
                do {
                    if (0x1ffff < uVar6) {
                        return -0x7ffffffffffffff9;
                    }
                    fcn.000118e0(0xf,0x66);
                    uVar1 = in(0x66);
                    uVar6 = uVar6 + 1;
                } while ((uVar1 & 1) == 0);
                if (0x1ffff < uVar6) {
                    return -0x7ffffffffffffff9;
                }
            }
            uVar2 = in(0x62);
            *arg2 = uVar2;
            iVar3 = 0;
        }
    }
    return iVar3;
}


/* fcn.00011254 @ 0x11254 */

void fcn.00011254(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    unkbyte7 Var1;
    unkbyte7 Var2;
    unkbyte7 Var3;
    
    Var3 = arg2 >> 8;
    Var2 = arg1 >> 8;
    Var1 = noname_0 >> 8;
    fcn.0001118c(CONCAT71(Var1,0x62),CONCAT71(Var2,0xa3),CONCAT71(Var3,4));
    if (-1 < extraout_RAX) {
        fcn.0001118c(CONCAT71(Var1,0x62),CONCAT71(Var2,0xa2),CONCAT71(Var3,arg1));
        if (-1 < extraout_RAX_00) {
            fcn.0001118c(CONCAT71(Var1,0x62),CONCAT71(Var2,0xa5),CONCAT71(Var3,arg2));
        }
    }
    return;
}


/* fcn.0001118c @ 0x1118c */

int64_t fcn.0001118c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    int64_t iVar4;
    char cVar5;
    int64_t arg1_00;
    ulong uVar6;
    uint64_t arg2_00;
    uint64_t uVar7;
    ushort uVar8;
    
    uVar1 = arg2;
    cVar5 = arg1;
    iVar4 = fcn.00011128(arg1);
    uVar7 = 0;
    if (iVar4 < 0) {
        return iVar4;
    }
    arg1_00 = CONCAT71(arg1 >> 8,cVar5);
    fcn.000110a0(arg1_00);
    uVar6 = CONCAT71(arg1_00 >> 8,cVar5);
    fcn.00011028(uVar6,CONCAT71(arg2 >> 8,uVar1));
    fcn.00011128(CONCAT71(uVar6 >> 8,cVar5));
    uVar8 = 0x60;
    uVar2 = 100;
    uVar6 = 0;
    if (cVar5 != '`') {
        uVar2 = 0x66;
    }
    arg2_00 = uVar2;
    uVar3 = in(uVar2);
    if ((uVar3 & 2) != 0) {
        do {
            if (0x1ffff < uVar7) goto code_r0x0001122e;
            uVar6 = 0;
            fcn.000118e0(0xf,arg2_00);
            arg2_00 = uVar2;
            uVar3 = in(uVar2);
            uVar7 = uVar7 + 1;
        } while ((uVar3 & 2) != 0);
        if (0x1ffff < uVar7) goto code_r0x0001122e;
    }
    if (cVar5 != '`') {
        uVar8 = 0x62;
    }
    out(uVar8,arg3);
code_r0x0001122e:
    fcn.000110a0(CONCAT71(uVar6 >> 8,cVar5));
    return iVar4;
}


/* fcn.00010d7c @ 0x10d7c */

uint64_t fcn.00010d7c(int64_t arg1)

{
    uint16_t uVar1;
    char cVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t auStackX_8 [8];
    
    uVar5 = arg1 & 0xffffffff;
    cVar2 = fcn.00010ff0();
    uVar3 = 0;
    if (((arg1 >> 0x18 & 0xf) == (cVar2 != '\0') + 8) &&
       (uVar3 = fcn.00010f84(auStackX_8), (uVar5 >> 0x10 & 0x1f) < auStackX_8[0])) {
        iVar4 = fcn.00010f84(auStackX_8);
        uVar1 = *((uVar5 >> 0x10 & 0x1f) * 0x1e + 0x1c + iVar4);
        uVar3 = uVar1;
        if ((uVar5 & 0x1ff) < uVar1) {
            return CONCAT71(uVar1 >> 8,1);
        }
    }
    return uVar3 & 0xffffffffffffff00;
}


/* fcn.00010d58 @ 0x10d58 */

bool fcn.00010d58(int64_t param_1)

{
    unkint7 extraout_RAX;
    int aiStackX_10 [6];
    
    fcn.000115bc(param_1,aiStackX_10);
    return -1 < extraout_RAX && aiStackX_10[0] == 0;
}


/* fcn.00010dec @ 0x10dec */

uint fcn.00010dec(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uchar auStackX_10 [24];
    
    auStackX_10[0] = arg2;
    uVar3 = arg1 & 0xffffffff;
    iVar2 = fcn.00010f84(auStackX_10);
    uVar1 = fcn.00010f48(uVar3 & 0xffffffff,arg2);
    return *(*((uVar3 >> 0x10 & 0x1f) * 0x1e + iVar2) << 0x10 | (uVar1 & 0xffff0000 | 0xfffd0000) << 8 | uVar1 & 0xffff)
    ;
}


/* fcn.00010f84 @ 0x10f84 */

ulong fcn.00010f84(uint *param_1)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00010ff0();
    if (cVar1 == '\0') {
        *param_1 = 0x13;
        uVar2 = 0x11d00;
    }
    else {
        *param_1 = 0x12;
        uVar2 = 0x11f40;
    }
    return uVar2;
}


/* fcn.00010f48 @ 0x10f48 */

int fcn.00010f48(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint auStackX_10 [6];
    
    auStackX_10[0] = arg2;
    uVar2 = arg1 & 0xffffffff;
    iVar1 = fcn.00010f84(auStackX_10);
    return *((uVar2 >> 0x10 & 0x1f) * 0x1e + 0x1a + iVar1) + (uVar2 & 0x1ff) * 0x10;
}


/* fcn.00010f00 @ 0x10f00 */

ulong fcn.00010f00(ulong param_1,int64_t param_2,ulong param_3)

{
    char cVar1;
    ulong uVar2;
    uint64_t noname_0;
    uint64_t arg2;
    
    arg2 = 0x9020010;
    cVar1 = fcn.00010d7c(0x9020010);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        noname_0 = arg2 & 0xffffffff;
        cVar1 = fcn.00010d58();
        if (cVar1 == '\0') {
            uVar2 = 0x8000000000000003;
        }
        else {
            fcn.00010e44(noname_0,param_2,param_3,arg2);
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.000105c8 @ 0x105c8 */

ulong fcn.000105c8(void)

{
    uint16_t uVar1;
    uint64_t uVar2;
    uchar uVar3;
    
    uVar3 = 0;
    uVar2 = *0xc00a3000;
    if (*0xc00a3000 != 0xffff) {
        uVar1 = *0xc00a302e - 0x90;
        uVar2 = uVar1;
        if ((((uVar1 < 0xd) && ((0x1111U >> (uVar1 & 0x1f) & 1) != 0)) || (uVar2 = 0x4090, *0xc00a302e == 0x4090)) ||
           ((*0xc00a302e & 0xf0) == 0x90)) {
            uVar3 = 1;
        }
    }
    return CONCAT71(uVar2 >> 8,uVar3);
}


/* fcn.000115bc @ 0x115bc */

uint64_t fcn.000115bc(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int8_t iVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uchar auStackX_18 [16];
    
    uVar2 = arg1 & 0xffffffff;
    cVar1 = fcn.00010d7c(arg1);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar7 = uVar2 & 0x1ff;
        uVar2 = uVar2 >> 0x10 & 0x1f;
        iVar3 = fcn.00010f84(auStackX_18);
        iVar5 = (uVar2 & 0xffffffff) * 0x1e;
        if (*(iVar5 + 2 + iVar3) == -1) {
            *arg2 = 0;
            uVar2 = 0x8000000000000003;
        }
        else {
            uVar6 = *(iVar5 + 2 + iVar3) + (uVar7 >> 3 & 0x1fffffff) * 4;
            iVar4 = (uVar7 & 7) << 2;
            *arg2 = (*((uVar6 & 0xffff0000 | 0xfffd0000) << 8 | *(iVar5 + iVar3) << 0x10 | uVar6 & 0xffff) & 3 << iVar4)
                    >> iVar4;
            uVar2 = 0 >> iVar4;
        }
    }
    return uVar2;
}


/* fcn.00010ff0 @ 0x10ff0 */

ulong fcn.00010ff0(void)

{
    char cVar1;
    
    cVar1 = fcn.00010fb4();
    if ((((cVar1 != '\x02') && (cVar1 = fcn.00010fb4(), cVar1 != '\x05')) && (cVar1 = fcn.00010fb4(), cVar1 != '\x06')
        ) && (cVar1 = fcn.00010fb4(), cVar1 != '\x03')) {
        return 0;
    }
    return 1;
}


/* fcn.000113c0 @ 0x113c0 */

ulong fcn.000113c0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint8_t *puVar4;
    int iVar5;
    int in_R8D;
    uint *in_R9;
    uchar auStackX_8 [8];
    
    uVar3 = arg2 & 0x1f;
    iVar1 = fcn.00010f84(auStackX_8);
    iVar5 = arg1;
    if (iVar5 == 0) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 4);
    }
    else if (iVar5 == 1) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0xc);
    }
    else if (iVar5 == 2) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 10);
    }
    else if (iVar5 == 3) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0x10);
    }
    else if (iVar5 == 4) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0xe);
    }
    else if (iVar5 == 5) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0x14);
    }
    else if (iVar5 == 6) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0x16);
    }
    else {
        if (iVar5 != 7) {
            return 0x8000000000000003;
        }
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0x18);
    }
    if (uVar2 == 0xffff) {
        return 0x8000000000000003;
    }
    if (iVar5 - 6U < 2) {
        in_R8D = in_R8D * 8;
    }
    else {
        in_R8D = in_R8D * 4;
    }
    *in_R9 = *(*puVar4 << 0x10 | (uVar2 + in_R8D & 0xffff0000 | 0xfffd0000) << 8 | uVar2 + in_R8D & 0xffff);
    return 0;
}


/* fcn.0001171c @ 0x1171c */

ulong fcn.0001171c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00011338(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.000114e0(6,arg1 & 0xffffffff,arg2 & 0xffffffff,~arg3);
    }
    return uVar2;
}


/* fcn.00011770 @ 0x11770 */

ulong fcn.00011770(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00011338(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.000114e0(6,arg1 & 0xffffffff,arg2 & 0xffffffff,0xffffffff);
    }
    return uVar2;
}


/* fcn.00010e44 @ 0x10e44 */

void fcn.00010e44(ulong noname_0,int64_t arg1,ulong noname_2,int64_t arg2)

{
    char cVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint32_t *puVar5;
    uint32_t uStackX_10;
    uint auStackX_20 [2];
    
    auStackX_20[0] = arg2;
    cVar1 = fcn.00010d7c(0x9020010);
    uVar4 = 0;
    if (cVar1 != '\0') {
        arg1 = 0x902;
        iVar3 = fcn.000113c0(6,0x902);
        uVar4 = 0;
        if ((-1 < iVar3) && (uVar4 = (uStackX_10 >> 8 & 0x100) >> 8, uVar4 != 0)) {
            arg1 = 0;
            fcn.0001171c(0x902,0,0x10000);
        }
    }
    iVar3 = fcn.00010f84(auStackX_20);
    uVar2 = fcn.00010f48(0x9020010,arg1);
    puVar5 = (uVar2 & 0xffff0000 | 0xfffd0000) << 8 | *(iVar3 + 0x3c) << 0x10 | uVar2 & 0xffff;
    *puVar5 = *puVar5 & 0xffffe3ff;
    if (uVar4 != 0) {
        fcn.00011770(0x902,0,0x10000);
    }
    return;
}


/* fcn.00010fb4 @ 0x10fb4 */

void fcn.00010fb4(void)

{
    if (*0x1215c == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x1215c = '\x05';
        }
        else {
            *0x1215c = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


/* fcn.000118e0 @ 0x118e0 */

int64_t fcn.000118e0(int64_t arg1,int64_t arg2)

{
    fcn.00011880((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.00011880 @ 0x11880 */

void fcn.00011880(int64_t arg1)

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
            fcn.00010260();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00011128 @ 0x11128 */

ulong fcn.00011128(uint32_t arg1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    
    uVar3 = 0;
    uVar1 = 100;
    if (arg1 != '`') {
        uVar1 = 0x66;
    }
    uVar2 = in(uVar1);
    if ((uVar2 & 2) != 0) {
        do {
            if (0x1ffff < uVar3) {
                return 0x8000000000000007;
            }
            fcn.000118e0(0xf,uVar1);
            uVar2 = in(uVar1);
            uVar3 = uVar3 + 1;
        } while ((uVar2 & 2) != 0);
        if (0x1ffff < uVar3) {
            return 0x8000000000000007;
        }
    }
    return 0;
}


/* fcn.000110a0 @ 0x110a0 */

ulong fcn.000110a0(int64_t arg1)

{
    ushort uVar1;
    uint8_t uVar2;
    uchar uVar3;
    ushort uVar4;
    uint64_t uVar5;
    
    uVar5 = 0;
    uVar1 = 100;
    if (arg1 != '`') {
        uVar1 = 0x66;
    }
    uVar2 = in(uVar1);
    if ((uVar2 & 1) != 0) {
        do {
            if (0x1ffff < uVar5) {
                return 0x8000000000000007;
            }
            uVar4 = 0x60;
            if (arg1 != '`') {
                uVar4 = 0x62;
            }
            uVar3 = in(uVar4);
            out(0x80,uVar3);
            fcn.000118e0(5000,0x80);
            uVar2 = in(uVar1);
            uVar5 = uVar5 + 1;
        } while ((uVar2 & 1) != 0);
        if (0x1ffff < uVar5) {
            return 0x8000000000000007;
        }
    }
    return 0;
}


/* fcn.00011028 @ 0x11028 */

ulong fcn.00011028(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    ushort uVar4;
    
    uVar3 = 0;
    uVar1 = 100;
    if (arg1 != '`') {
        uVar1 = 0x66;
    }
    uVar4 = uVar1;
    uVar2 = in(uVar4);
    if ((uVar2 & 2) != 0) {
        do {
            if (0x1ffff < uVar3) {
                return 0x8000000000000007;
            }
            fcn.000118e0(0xf,uVar1);
            uVar2 = in(uVar4);
            uVar3 = uVar3 + 1;
        } while ((uVar2 & 2) != 0);
        if (0x1ffff < uVar3) {
            return 0x8000000000000007;
        }
    }
    out(uVar4,arg2);
    return 0;
}


/* fcn.000116cc @ 0x116cc */

ulong fcn.000116cc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00011338(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.000113c0(7,arg1 & 0xffffffff);
    }
    return uVar2;
}


/* fcn.0001167c @ 0x1167c */

ulong fcn.0001167c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00011338(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.000113c0(6,arg1 & 0xffffffff);
    }
    return uVar2;
}


/* fcn.00011914 @ 0x11914 */

ulong fcn.00011914(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint16_t uVar2;
    ulong uVar3;
    uint8_t uVar4;
    int iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    int iVar8;
    uint *in_stack_00000048;
    uint8_t *in_stack_00000050;
    
    uVar7 = arg4;
    if ((uVar7 < 0x14) && ((0x800f3U >> (uVar7 & 0x1f) & 1) != 0)) {
        if (*((arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU) + 0xc0000000) == -1) {
            uVar3 = 0x8000000000000007;
        }
        else {
            uVar1 = arg1 + 0xd8;
            iVar8 = 0xfffffff;
            iVar5 = 0xfffffff;
            do {
                if ((*((uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff) + 0xc0000000) & 1) == 0) break;
                iVar5 = iVar5 + -1;
            } while (0 < iVar5);
            if (iVar5 != 0) {
                *in_stack_00000050 = 4;
                *((arg1 + 0xd0U >> 4 & 0x10000000 | arg1 + 0xd0U & 0xffffffff) + 0xc0000000) =
                     arg2 << 0x18 | arg3 & 0xffff;
                uVar6 = uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff;
                *((arg1 + 0xdcU >> 4 & 0x10000000 | arg1 + 0xdcU & 0xffffffff) + 0xc0000000) = arg3 >> 0x10;
                *(uVar6 + 0xc0000000) = arg4 << 8 | *(uVar6 + 0xc0000000) & 0x7f;
                *((arg1 + 0xdaU >> 4 & 0x10000000 | arg1 + 0xdaU & 0xffffffff) + 0xc0000000) = 0xf000;
                if ((((uVar7 == 1) || (uVar7 == 5)) || (uVar7 == 7)) || (uVar7 == 0x13)) {
                    *((arg1 + 0xd4U >> 4 & 0x10000000 | arg1 + 0xd4U & 0xffffffff) + 0xc0000000) = *in_stack_00000048;
                }
                else {
                    *((arg1 + 0xd4U >> 4 & 0x10000000 | arg1 + 0xd4U & 0xffffffff) + 0xc0000000) = 0;
                }
                uVar6 = uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff;
                *(uVar6 + 0xc0000000) = *(uVar6 + 0xc0000000) | 1;
                do {
                    uVar2 = *((uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff) + 0xc0000000);
                    if ((uVar2 & 1) == 0) break;
                    iVar8 = iVar8 + -1;
                } while (0 < iVar8);
                if (iVar8 != 0) {
                    uVar4 = uVar2 >> 1 & 3;
                    *in_stack_00000050 = uVar4;
                    if (uVar4 == 0) {
                        if (((arg4 & 0xfffffff9U) == 0) && (uVar7 != 2)) {
                            *in_stack_00000048 =
                                 *((arg1 + 0xd4U >> 4 & 0x10000000 | arg1 + 0xd4U & 0xffffffff) + 0xc0000000);
                        }
                        return 0;
                    }
                    if (uVar4 != 2) {
                        return 0x8000000000000007;
                    }
                    return 0x8000000000000010;
                }
            }
            uVar3 = 0x8000000000000012;
        }
    }
    else {
        uVar3 = 0x8000000000000002;
    }
    return uVar3;
}


/* fcn.00011338 @ 0x11338 */

uint64_t fcn.00011338(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iStackX_8;
    uint32_t auStackX_18 [4];
    
    uVar6 = arg1;
    uVar7 = arg2;
    iVar2 = fcn.00010f84(auStackX_18);
    uVar5 = uVar6 & 0x1f;
    uVar3 = fcn.00010ff0();
    uVar4 = uVar3 & 0xffffffffffffff00;
    if (((uVar3 != '\0') + 8) * 0x100 <= uVar6) {
        fcn.00010f84();
        cVar1 = fcn.00010ff0();
        uVar4 = iStackX_8 - 1U;
        if (((uVar6 <= (((cVar1 != '\0') + 8) * 0x100 | iStackX_8 - 1U)) && (uVar5 < auStackX_18[0])) &&
           (uVar4 = uVar5, uVar7 <= *(uVar4 * 0x1e + 0x1c + iVar2) - 1 >> 5)) {
            return CONCAT71(uVar5 >> 8,1);
        }
    }
    return uVar4 & 0xffffffffffffff00;
}


/* fcn.000114e0 @ 0x114e0 */

ulong fcn.000114e0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t arg2_00;
    uint32_t uVar4;
    uchar *puVar5;
    int iVar6;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [2];
    uint32_t in_stack_00000028;
    
    auStackX_8[0] = 0;
    iVar6 = arg1;
    uVar4 = arg2 & 0x1f;
    arg2_00 = arg3 & 0xffffffff;
    iVar2 = fcn.00010f84(auStackX_10);
    if (iVar6 == 6) {
        puVar5 = uVar4 * 0x1e + iVar2;
        uVar1 = *(puVar5 + 0x16);
        fcn.0001167c(arg2 & 0xffffffffU,arg2_00,auStackX_8);
    }
    else {
        if (iVar6 != 7) {
            return 0x8000000000000003;
        }
        puVar5 = uVar4 * 0x1e + iVar2;
        uVar1 = *(puVar5 + 0x18);
        fcn.000116cc(arg2 & 0xffffffffU,arg2_00,auStackX_8);
    }
    if (uVar1 == 0xffff) {
        return 0x8000000000000003;
    }
    auStackX_10[0] = auStackX_8[0] & arg4 | in_stack_00000028;
    uVar3 = fcn.00011914(0xf9000,CONCAT71(arg2_00 >> 8,*puVar5),uVar1 + arg3 * 8,0x13);
    return uVar3;
}


/* fcn.00010260 @ 0x10260 */

void fcn.00010260(void)

{
    return;
}


