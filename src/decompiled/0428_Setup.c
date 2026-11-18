// decompiled by r2ghidra: 0428_Setup.pe32
// functions: 18

/* entry0 @ 0x103f4 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.00010408(arg1,arg2);
    fcn.000107b4(arg1,arg2);
    return;
}


/* fcn.00010408 @ 0x10408 */

void fcn.00010408(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0;
    int64_t iStackX_8;
    ulong *puStackX_10;
    ulong uStackX_18;
    
    *0x11448 = *(arg2 + 0x60);
    *0x11450 = *(arg2 + 0x58);
    *0x11440 = arg2;
    iStackX_8 = arg1;
    fcn.000110d4();
    noname_0 = 0x112d0;
    iVar3 = fcn.00011140(0x112d0);
    if (iVar3 == 0) {
        uVar4 = fcn.000103a0();
        fcn.00010350();
        uVar1 = in(0x1808);
        fcn.00010330(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x00010320();
        }
        fcn.00010330(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010350();
        }
        else {
            fcn.00010340();
        }
    }
    section..text(1,0,0,&iStackX_8);
    iVar3 = (**(*0x11448 + 0x140))(0x11290,0,&puStackX_10);
    *0x11468 = '\0';
    if (-1 < iVar3) {
        uStackX_18 = 0;
        (**puStackX_10)(puStackX_10,0x11468);
        if (*0x11468 != '\0') {
            (*puStackX_10[1])(puStackX_10,&uStackX_18);
        }
    }
    (**(*0x11448 + 0x140))(0x11240,0,0x11470);
    (**(*0x11448 + 0x140))(0x11230,0,0x11490);
    (**(*0x11448 + 0x140))(0x111d0,0,0x11480);
    (**(*0x11448 + 0x140))(0x112c0,0,0x11478);
    (**(*0x11448 + 0x140))(0x11200,0,0x11488);
    if (*0x11440 != 0) {
        fcn.00011140(0x112b0);
    }
    return;
}


/* fcn.000107b4 @ 0x107b4 */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_25h
//WARNING: Variable defined which should be unmapped: var_31h
//WARNING: Variable defined which should be unmapped: var_39h

int64_t fcn.000107b4(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    bool bVar2;
    uint8_t uVar3;
    char cVar4;
    uint8_t uVar5;
    int iVar6;
    int64_t iVar7;
    char *pcVar8;
    uchar *puVar9;
    uchar *puVar10;
    uint8_t *puVar11;
    uint8_t uVar12;
    char cVar13;
    uint8_t uVar14;
    uint64_t uVar15;
    int64_t iVar16;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    uint auStackX_18 [2];
    uint auStackX_20 [2];
    int32_t var_77h;
    int32_t var_7fh;
    ulong uStack_98;
    uchar uStack_90;
    uchar uStack_8f;
    uint8_t auStack_8e [10];
    uint uStack_84;
    uint16_t uStack_80;
    uint16_t uStack_7e;
    uint8_t uStack_7c;
    uint8_t uStack_7b;
    uchar uStack_77;
    uint uStack_70;
    uchar auStack_6c [4];
    int64_t iStack_68;
    uchar auStack_5c [4];
    uchar auStack_58 [23];
    int64_t var_39h;
    int64_t var_31h;
    int32_t var_25h;
    int64_t var_21h;
    int8_t var_18h;
    int64_t var_11h;
    int64_t var_9h;
    int64_t var_1h;
    
    uStackX_8 = arg1;
    iStackX_10 = arg2;
    iVar7 = fcn.00010f48();
    uVar3 = (**(iVar7 + 8))(0x2f);
    uVar12 = 0;
    iStack_68 = 0;
    fcn.00010290(0x126a0,0xca9);
    fcn.00010290(0x11a20,0x6d);
    fcn.00010290(&uStack_90,6);
    iVar7 = (**(*0x11448 + 0x140))(0x11220,0,&iStack_68);
    if (iVar7 < 0) {
        return iVar7;
    }
    uStack_98 = 0x6d;
    (**(*0x11450 + 0x48))(L"SetupVolatileData",0x111e0,&uStack_70,&uStack_98,0x11a20);
    auStackX_18[0] = 6;
    uStack_98 = 0xb;
    iVar7 = (**(*0x11450 + 0x48))(L"CpuSetupVolatileData",0x111b0,auStackX_18,&uStack_98,&uStack_80);
    if (iVar7 == -0x7ffffffffffffff2) {
        (**(*0x11450 + 0x58))(L"CpuSetupVolatileData",0x111b0,auStackX_18[0],0xb,&uStack_80);
    }
    auStackX_20[0] = 6;
    uStack_98 = 6;
    iVar7 = (**(*0x11450 + 0x48))(L"TbtSetupVolatileData",0x111e0,auStackX_20,&uStack_98,&uStack_90);
    if (iVar7 == -0x7ffffffffffffff2) {
        (**(*0x11450 + 0x58))(L"TbtSetupVolatileData",0x111e0,auStackX_20[0],6,&uStack_90);
    }
    fcn.00010e64();
    *0x11a25 = ~(*0xc00000e4 >> 0x17) & 1;
    (**(*0x11450 + 0x58))(L"SetupVolatileData",0x111e0,uStack_70,0x6d,0x11a20);
    uStack_84 = 7;
    uStack_98 = 1;
    iVar7 = (**(*0x11450 + 0x48))(L"InitSetupVariable",0x111e0,&uStack_84,&uStack_98,&iStackX_10);
    if (iVar7 == -0x7ffffffffffffff2) {
        iStackX_10 = CONCAT71(iStackX_10._1_7_,1);
        (**(*0x11450 + 0x58))(L"InitSetupVariable",0x111e0,uStack_84,1,&iStackX_10);
    }
    uStack_98 = 0xca9;
    iVar7 = (**(*0x11450 + 0x48))(L"Setup",0x111e0,&uStackX_8,&uStack_98,0x126a0);
    cVar13 = '\0';
    if (iVar7 < 0) goto code_r0x00010b1c;
    iVar6 = fcn.00010f84();
    if (((iVar6 == 0xb0670) || (iVar6 == 0xb06a0)) || (cVar4 = '\0', iVar6 == 0xb06f0)) {
        cVar4 = '\x01';
    }
    if (*0x13254 != cVar4) {
        *0x13254 = cVar4;
        (**(*0x11450 + 0x58))(L"Setup",0x111e0,uStackX_8 & 0xffffffff,uStack_98,0x126a0);
    }
    if ((*0x12da2 == '\0') && (*0x13174 == '\x02')) {
        *0x13174 = '\x01';
    }
    (**(*0x11450 + 0x58))(L"Setup",0x111e0,uStackX_8 & 0xffffffff,uStack_98,0x126a0);
    iVar7 = fcn.00010f48();
    iVar6 = (**(iVar7 + 0x18))(0x38);
    cVar4 = cVar13;
    if ((iVar6 != 0) && (*0x131d8 != '\x01')) {
        *0x131d8 = '\x01';
        cVar4 = '\x01';
    }
    bVar2 = false;
    iVar7 = fcn.00011140(0x11210);
    if (iVar7 == 0) {
code_r0x00010af4:
        if (cVar4 == '\0') goto code_r0x00010b1c;
    }
    else {
        pcVar8 = 0x12e69;
        iVar16 = 4;
        do {
            if (*pcVar8 != pcVar8[iVar7 + -0x12e39]) {
                *pcVar8 = pcVar8[iVar7 + -0x12e39];
                bVar2 = true;
            }
            pcVar8 = pcVar8 + 1;
            iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        if (!bVar2) goto code_r0x00010af4;
    }
    (**(*0x11450 + 0x58))(L"Setup",0x111e0,uStackX_8 & 0xffffffff,0xca9,0x126a0);
code_r0x00010b1c:
    uStack_98 = 0x3c1;
    (**(*0x11450 + 0x48))(L"CpuSetup",0x111b0,&uStackX_8,&uStack_98,0x11aa0);
    *0x11cd3 = *(*(iStack_68 + 0x10) + 0x8d);
    *0x11d1d = *(*(iStack_68 + 0x10) + 0xa6);
    (**(*0x11450 + 0x58))(L"CpuSetup",0x111b0,uStackX_8 & 0xffffffff,0x3c1,0x11aa0);
    uStack_98 = 0x80d;
    (**(*0x11450 + 0x48))(L"PchSetup",0x11270,&uStackX_8,&uStack_98,0x11e80);
    uStack_98 = 0x578;
    iVar7 = (**(*0x11450 + 0x48))(L"SaSetup",0x11280,&uStackX_8,&uStack_98,0x114a0);
    if (-1 < iVar7) {
        *0x114c8 = *0xc0010002;
        if (((*0xc00f8002 & 0xffe0) != 0x7a00) || ((*0xc00f8002 & 0xffe0) == 0x7a00)) {
            fcn.000105c4();
            fcn.000106b0();
        }
        if ((*0xc00000e8 & 4) == 0) {
            *0x11597 = 1;
            iVar7 = fcn.00011140(0x112a0);
            if (iVar7 != 0) {
                puVar9 = 0x11599;
                iVar16 = 0x1f;
                puVar10 = iVar7 + 0x20;
                do {
                    puVar9[0x5d] = puVar10[-8];
                    *puVar9 = *puVar10;
                    puVar9[0x1f] = puVar10[-2];
                    puVar9[0x3e] = puVar10[-1];
                    puVar9 = puVar9 + 1;
                    iVar16 = iVar16 + -1;
                    puVar10 = puVar10 + 0xc;
                } while (iVar16 != 0);
            }
        }
        uVar15 = 0;
        while( true ) {
            cVar4 = fcn.00010fb0();
            if (((cVar4 == '\0') || (cVar4 == '\x01')) || (uVar5 = 1, cVar4 != '\x02')) {
                uVar5 = 3;
            }
            uVar14 = uVar15;
            if (uVar5 <= uVar14) break;
            if ((uVar14 == 0) ||
               ((cVar4 = cVar13, uVar15 == 2 &&
                ((iVar6 = fcn.00010f84(), iVar6 == 0x906a0 || (iVar6 = fcn.00010f84(), iVar6 == 0xb06a0)))))) {
                cVar4 = '\x01';
            }
            *(uVar15 + 0x11849) = cVar4;
            uVar15 = uVar14 + 1;
        }
        (**(*0x11450 + 0x58))(L"SaSetup",0x11280,uStackX_8 & 0xffffffff,0x578,0x114a0);
    }
    section..text(1,auStack_6c,auStack_58,auStack_5c);
    *0x11e82 = *0xc0000002;
    uStack_80 = auStack_6c._0_2_ & 0x3ff0;
    uStack_7e = auStack_6c._2_2_ & 0xfff;
    uStack_7c = auStack_6c[0] & 0xf;
    uVar1 = rdmsr(0xce);
    uStack_77 = 0;
    uStack_7b = uVar1 >> 0x39 & 1;
    iVar7 = fcn.00010f48();
    uStack_8f = (**(iVar7 + 8))(0x54);
    iVar7 = fcn.00010f48();
    uStack_90 = (**(iVar7 + 8))(0x31);
    puVar11 = auStack_8e;
    do {
        uVar5 = uVar12 & 0x1f;
        uVar12 = uVar12 + 1;
        *puVar11 = uVar3 >> uVar5 & 1;
        puVar11 = puVar11 + 1;
    } while (uVar12 < 4);
    (**(*0x11450 + 0x58))(L"PchSetup",0x11270,uStackX_8 & 0xffffffff,0x80d,0x11e80);
    (**(*0x11450 + 0x58))(L"CpuSetupVolatileData",0x111b0,auStackX_18[0],0xb,&uStack_80);
    (**(*0x11450 + 0x58))(L"TbtSetupVolatileData",0x111e0,auStackX_20[0],6,&uStack_90);
    return 0;
}


/* fcn.000110d4 @ 0x110d4 */

int64_t fcn.000110d4(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x11460 == 0) {
        *0x11460 = 0;
        if (*(*0x11440 + 0x68) != 0) {
            piVar2 = *(*0x11440 + 0x70);
            do {
                if ((*0x11250 == *piVar2) && (*0x11258 == piVar2[1])) {
                    *0x11460 = (*(*0x11440 + 0x70))[uVar1 * 3 + 2];
                    return *0x11460;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x11440 + 0x68));
        }
    }
    return *0x11460;
}


/* fcn.00011140 @ 0x11140 */

void fcn.00011140(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000110d4();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x0001116e:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x0001116e;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.000103a0 @ 0x103a0 */

uint64_t fcn.000103a0(void)

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


/* fcn.00010322 @ 0x10322 */

void fcn.00010322(void)

{
    return;
}


/* fcn.00010340 @ 0x10340 */

void fcn.00010340(void)

{
    return;
}


/* section..text @ 0x10260 */

uint64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint *in_stack_00000028;
    
    //[00] -r-x section size 3904 named .text
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


/* fcn.00010f48 @ 0x10f48 */

int64_t fcn.00010f48(void)

{
    if (*0x11458 == 0) {
        (**(*0x11448 + 0x140))(0x111a0,0,0x11458);
    }
    return *0x11458;
}


/* fcn.00010290 @ 0x10290 */

int64_t fcn.00010290(int64_t arg1,int64_t arg2)

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


/* fcn.00010e64 @ 0x10e64 */

void fcn.00010e64(void)

{
    uint32_t uVar1;
    int64_t iVar2;
    uchar uVar3;
    int64_t var_10h;
    int32_t var_18h;
    int64_t var_bp_20h;
    
    fcn.00010290(&var_10h,4);
    var_18h = 2;
    var_bp_20h = 4;
    iVar2 = (**(*0x11450 + 0x48))(L"DebugSetupVolatileData",0x111e0,&var_18h,&var_bp_20h,&var_10h);
    if (iVar2 == -0x7ffffffffffffff2) {
        iVar2 = fcn.00011140(0x111f0);
        if (iVar2 != 0) {
            uVar1 = *(iVar2 + 0x30);
            uVar3 = 1;
            if ((uVar1 & 0x1e) != 0) {
                var_10h._0_1_ = uVar3;
            }
            if ((uVar1 & 0x80) != 0) {
                var_10h._2_1_ = uVar3;
            }
            if ((uVar1 >> 8 & 1) != 0) {
                var_10h._3_1_ = uVar3;
            }
            if ((uVar1 & 0x20) != 0) {
                var_10h._1_1_ = uVar3;
            }
        }
        (**(*0x11450 + 0x58))(L"DebugSetupVolatileData",0x111e0,var_18h,4,&var_10h);
    }
    return;
}


/* fcn.00010f84 @ 0x10f84 */

uint32_t fcn.00010f84(void)

{
    uint32_t auStackX_8 [8];
    
    section..text(1,auStackX_8,0,0);
    return auStackX_8[0] & 0xfff0ff0;
}


/* fcn.000105c4 @ 0x105c4 */

int64_t fcn.000105c4(void)

{
    int64_t iVar1;
    uchar *puVar2;
    int64_t iVar3;
    uint auStackX_8 [2];
    ulong auStackX_10 [3];
    uchar auStack_cb8 [2976];
    uchar auStack_118 [8];
    uchar auStack_110 [8];
    char cStack_108;
    
    auStackX_10[0] = 0xca9;
    iVar1 = (**(*0x11450 + 0x48))(L"Setup",0x111e0,auStackX_8,auStackX_10,auStack_cb8);
    if (-1 < iVar1) {
        iVar1 = fcn.00011140(0x111c0);
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff2;
        }
        else {
            if (cStack_108 == '\x02') {
                puVar2 = auStack_110;
                iVar3 = 8;
                do {
                    *puVar2 = puVar2[(iVar1 - auStack_110) + 0x28];
                    puVar2[-8] = puVar2[(iVar1 - auStack_110) + 0x30];
                    puVar2 = puVar2 + 1;
                    iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
                (**(*0x11450 + 0x58))(L"Setup",0x111e0,auStackX_8[0],auStackX_10[0],auStack_cb8);
            }
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.000106b0 @ 0x106b0 */

int64_t fcn.000106b0(void)

{
    int64_t iVar1;
    uchar *puVar2;
    int64_t iVar3;
    uint auStackX_8 [2];
    ulong auStackX_10 [3];
    int64_t var_ac8h;
    uint32_t var_ae0h;
    int64_t var_bf0h;
    int64_t var_bf8h;
    uchar auStack_cb8 [2960];
    uchar auStack_128 [8];
    uchar auStack_120 [24];
    char cStack_108;
    
    auStackX_10[0] = 0xca9;
    iVar1 = (**(*0x11450 + 0x48))(L"Setup",0x111e0,auStackX_8,auStackX_10,auStack_cb8);
    if (-1 < iVar1) {
        iVar1 = fcn.00011140(0x11260);
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff2;
        }
        else {
            if (cStack_108 == '\x02') {
                cStack_108 = 1;
                puVar2 = auStack_120;
                iVar3 = 8;
                do {
                    *puVar2 = puVar2[(iVar1 - auStack_120) + 0x18];
                    puVar2[-8] = puVar2[(iVar1 - auStack_120) + 0x20];
                    puVar2 = puVar2 + 1;
                    iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
                (**(*0x11450 + 0x58))(L"Setup",0x111e0,auStackX_8[0],auStackX_10[0],auStack_cb8);
            }
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.00010fb0 @ 0x10fb0 */

ulong fcn.00010fb0(void)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uchar uVar3;
    uint32_t auStackX_8 [8];
    
    section..text(1,auStackX_8,0,0);
    uVar3 = 4;
    if ((auStackX_8[0] & 0xfff0ff0) == 0x906a0) {
        if (*0xc0000002 < 0x4622) {
            uVar2 = *0xc0000002 - 0x4601;
            if ((*0xc0000002 - 0x4601 & 0xffffffdf) != 0) {
                if (*0xc0000002 != 0x4602) {
                    if (*0xc0000002 == 0x4609) goto code_r0x000110cb;
                    uVar1 = *0xc0000002 - 0x460a;
                    uVar2 = uVar1;
                    if ((0xd < uVar1) || ((0x2401U >> (uVar1 & 0x1f) & 1) == 0)) {
                        if (*0xc0000002 == 0x4619) goto code_r0x000110cb;
                        uVar2 = *0xc0000002 - 0x461a;
                        if (2 < *0xc0000002 - 0x461a) goto code_r0x0001100f;
                    }
                }
code_r0x0001100d:
                uVar3 = 2;
                goto code_r0x0001100f;
            }
        }
        else {
            uVar2 = 0;
            if (*0xc0000002 == 0x4622) goto code_r0x0001100d;
            if (((((*0xc0000002 != 0x4629) && (*0xc0000002 != 0x4641)) && (*0xc0000002 != 0x4645)) &&
                ((*0xc0000002 != 0x4649 && (*0xc0000002 != 0x4659)))) && (*0xc0000002 != 0x4661)) goto code_r0x0001100f;
        }
    }
    else {
        uVar1 = (auStackX_8[0] & 0xfff0ff0) - 0xb06a0;
        uVar2 = uVar1;
        if (uVar1 != 0) {
            if (uVar1 != 0x40) goto code_r0x0001100f;
            uVar2 = *0xc0000002;
            if ((*0xc0000002 != 0x4614) && (uVar1 = *0xc0000002 - 0x4617, uVar2 = uVar1, (uVar1 & 0xfffffffa) != 0))
            goto code_r0x0001100f;
            goto code_r0x0001100d;
        }
        uVar2 = *0xc0000002;
        if (*0xc0000002 < 0xa706) goto code_r0x0001100f;
        if (0xa70b < *0xc0000002) {
            uVar1 = *0xc0000002 - 0xa715;
            uVar2 = uVar1;
            if ((7 < uVar1) || ((0xc3U >> (uVar1 & 0x1f) & 1) == 0)) goto code_r0x0001100f;
        }
    }
code_r0x000110cb:
    uVar3 = 0;
code_r0x0001100f:
    return CONCAT71(uVar2 >> 8,uVar3);
}


