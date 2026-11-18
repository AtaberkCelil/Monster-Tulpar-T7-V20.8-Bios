// decompiled by r2ghidra: 0209_HwAssetDxe.pe32
// functions: 32

/* entry0 @ 0x10394 */

int64_t entry0(int64_t arg1)

{
    int64_t iVar1;
    int64_t in_RDX;
    int aiStackX_8 [4];
    int64_t iStackX_18;
    int64_t iStackX_20;
    uchar auStack_18 [16];
    
    fcn.00010434(arg1,in_RDX);
    if (*0xc00b0040 != -1) {
        iStackX_20 = arg1;
        iVar1 = (**(*0x12088 + 0x140))(0x11ed0,0,&iStackX_18);
        if (iVar1 < 0) {
            return iVar1;
        }
        (**(iStackX_18 + 0x40))(aiStackX_8);
        if (aiStackX_8[0] == 0) {
            iVar1 = (**(*0x12088 + 0x170))(0x200,0x10,0x1053c,&iStackX_20,0x11f30,auStack_18);
            return iVar1;
        }
    }
    return -0x7ffffffffffffffd;
}


/* fcn.00010434 @ 0x10434 */

void fcn.00010434(int64_t arg1,int64_t arg2)

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
    
    *0x12088 = *(arg2 + 0x60);
    *0x12080 = arg2;
    iStackX_8 = arg1;
    fcn.00011ce8();
    noname_0 = 0x11fd8;
    iVar3 = fcn.00011d18(0x11fd8);
    if (iVar3 == 0) {
        uVar4 = fcn.00010390();
        fcn.00010340();
        uVar1 = in(0x1808);
        fcn.000102f0(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x000102e0();
        }
        fcn.000102f0(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010340();
        }
        else {
            fcn.00010330();
        }
    }
    fcn.00010300(1,0,0,&iStackX_8);
    iVar3 = (**(*0x12088 + 0x140))(0x11fc0,0,&puStackX_10);
    *0x12098 = '\0';
    if (-1 < iVar3) {
        uStackX_18 = 0;
        (**puStackX_10)(puStackX_10,0x12098);
        if (*0x12098 != '\0') {
            (*puStackX_10[1])(puStackX_10,&uStackX_18);
        }
    }
    return;
}


/* fcn.00011ce8 @ 0x11ce8 */

int64_t fcn.00011ce8(void)

{
    if (*0x12090 == 0) {
        fcn.00011c88(0x11fa0,0x12090);
    }
    return *0x12090;
}


/* fcn.00011c88 @ 0x11c88 */

ulong fcn.00011c88(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x12080;
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


/* fcn.00011d18 @ 0x11d18 */

void fcn.00011d18(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00011ce8();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00011d46:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00011d46;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010390 @ 0x10390 */

uint64_t fcn.00010390(void)

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


/* fcn.00010340 @ 0x10340 */

void fcn.00010340(void)

{
    return;
}


/* fcn.000102f0 @ 0x102f0 */

uint64_t fcn.000102f0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102e2 @ 0x102e2 */

void fcn.000102e2(void)

{
    return;
}


/* fcn.00010330 @ 0x10330 */

void fcn.00010330(void)

{
    return;
}


/* fcn.00010300 @ 0x10300 */

uint64_t fcn.00010300(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00011a28 @ 0x11a28 */

void fcn.00011a28(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000119f8(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102a0(arg1_00,arg1);
    }
    return;
}


/* fcn.000119f8 @ 0x119f8 */

ulong fcn.000119f8(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x12088 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t arg2)

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


/* fcn.0001185c @ 0x1185c */

int fcn.0001185c(int64_t arg1,int64_t arg2)

{
    int16_t *piVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    int16_t iVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int *piVar8;
    int *arg2_00;
    uint32_t uVar9;
    int64_t iStackX_8;
    
    uVar6 = 0;
    *arg1 = 0;
    uVar2 = fcn.000108f4(arg1,arg2);
    uVar7 = uVar2;
    *(arg1 + 2) = uVar2;
    *(arg1 + 4) = uVar2;
    iVar5 = fcn.00011ce8();
    if ((*(iVar5 + 0xc) == 1) && (arg2 == '\0')) {
        *(arg1 + 6) = 4;
    }
    else {
        iVar5 = arg1 + 0x14 + uVar7;
        uVar3 = fcn.00010c30(iVar5);
        piVar1 = uVar7 + 0x12 + arg1;
        *piVar1 = *piVar1 + uVar3;
        iVar5 = iVar5 + uVar3 * 0x82;
        uVar3 = fcn.00010f44(iVar5);
        piVar1 = uVar7 + 0x12 + arg1;
        *piVar1 = *piVar1 + uVar3;
        iVar4 = fcn.00011160(uVar3 * 0x82 + iVar5);
        piVar1 = uVar7 + 0x12 + arg1;
        *piVar1 = *piVar1 + iVar4;
        iVar4 = *(uVar7 + 0x12 + arg1) * 0x82;
        *(uVar7 + 0x10 + arg1) = iVar4;
        *(arg1 + 6) = iVar4 + 4;
    }
    uVar2 = uVar2 + *(arg1 + 6);
    *(arg1 + 8) = uVar2;
    iVar4 = fcn.00011690(arg1,uVar2);
    uVar2 = uVar2 + iVar4;
    *(arg1 + 10) = iVar4;
    *(arg1 + 0xc) = uVar2;
    iVar5 = fcn.00011c88(0x11f80,&iStackX_8);
    uVar9 = 0;
    if ((((-1 < iVar5) && (uVar9 = 0, iStackX_8 != 0)) &&
        (piVar8 = *(iStackX_8 + 0x10), uVar9 = uVar6, *piVar8 == 0x54445352)) && (uVar7 = 0x24, 0x24 < piVar8[1])) {
        do {
            arg2_00 = *(uVar7 + piVar8);
            if (*arg2_00 == 0x21465341) {
                piVar8 = arg1 + 0x10 + uVar2;
                if ((arg2_00[1] != 0) && (piVar8 != arg2_00)) {
                    section..text(piVar8,arg2_00,arg2_00[1]);
                }
                uVar9 = *(arg2_00 + 1);
                break;
            }
            uVar6 = uVar7 + 4;
            uVar7 = uVar6;
        } while (uVar6 < piVar8[1]);
    }
    *(arg1 + 0xe) = uVar9;
    return uVar9 + uVar2;
}


/* fcn.00011d64 @ 0x11d64 */

int64_t fcn.00011d64(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t *puVar2;
    int aiStackX_18 [2];
    uint32_t auStackX_20 [2];
    int64_t aiStack_28 [2];
    
    iVar1 = (**(*0x12088 + 0x140))(0x11ed0,0,aiStack_28);
    if (-1 < iVar1) {
        iVar1 = (**(aiStack_28[0] + 0x40))(aiStackX_18);
        if ((iVar1 < 0) || (aiStackX_18[0] != 0)) {
            iVar1 = -0x7ffffffffffffffd;
        }
        else {
            iVar1 = (**(aiStack_28[0] + 0x38))(auStackX_20);
            if ((iVar1 < 0) || ((auStackX_20[0] & 0xfffffe7f) != 0)) {
                iVar1 = -0x7ffffffffffffffa;
            }
            else {
                if ((arg2 < 0x3001) && (puVar2 = fcn.00011a28((arg2 & 0xffffU) + 0x14), puVar2 != NULL)) {
                    *puVar2 = 0;
                    *puVar2 = arg2 + 0x10;
                    *puVar2 = *puVar2 & 0xfff0ffff;
                    if (*(arg1 + 2) != 4) {
                        *puVar2 = *puVar2 | 0x100000;
                    }
                    if (*(arg1 + 6) != 4) {
                        *puVar2 = *puVar2 | 0x200000;
                    }
                    if (*(arg1 + 10) != 0) {
                        *puVar2 = *puVar2 | 0x400000;
                    }
                    if (*(arg1 + 0xe) != 0) {
                        *puVar2 = *puVar2 | 0x800000;
                    }
                    if ((*puVar2 != 0) && (puVar2 + 1 != arg1)) {
                        section..text(puVar2 + 1,arg1,*puVar2);
                    }
                    iVar1 = (**(aiStack_28[0] + 0x10))(0,puVar2,*puVar2 + 4,0,0xb);
                    (**(*0x12088 + 0x48))(puVar2);
                    return iVar1;
                }
                iVar1 = -0x7ffffffffffffff7;
            }
        }
    }
    return iVar1;
}


/* fcn.00011a88 @ 0x11a88 */

ulong fcn.00011a88(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    int16_t *piVar3;
    int64_t iVar4;
    uint64_t arg2_00;
    
    iVar4 = arg2;
    piVar3 = arg1;
    iVar1 = fcn.00011a54(arg1,arg2);
    arg2_00 = iVar4 - iVar1;
    if ((((arg1 == 0) || (arg3 == NULL)) || (1000000 < arg2)) || (arg2 == 0)) {
        return 0x8000000000000002;
    }
    if (arg2_00 == 0) {
        return 0x8000000000000004;
    }
    uVar2 = fcn.00011a54(arg3,arg2_00);
    if (arg2_00 <= uVar2) {
        return 0x8000000000000005;
    }
    if (arg3 <= piVar3) {
        if (piVar3 < arg3 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < piVar3) goto code_r0x00011b29;
    }
    if (arg3 < piVar3 + arg2) {
        return 0x800000000000000f;
    }
code_r0x00011b29:
    piVar3 = piVar3 + iVar1;
    for (; *arg3 != 0; arg3 = arg3 + 2) {
        *piVar3 = *arg3;
        piVar3 = piVar3 + 1;
    }
    *piVar3 = 0;
    return 0;
}


/* fcn.00011c00 @ 0x11c00 */

ulong fcn.00011c00(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int16_t iVar3;
    
    iVar3 = 0;
    if ((arg2 == 0) || (arg1 == 0)) {
        return 0x8000000000000002;
    }
    uVar2 = 0x100;
    uVar1 = fcn.00011a54(arg1,0x100);
    if (uVar2 <= uVar1) {
        return 0x8000000000000005;
    }
    if (arg1 <= arg2) {
        if (arg2 < arg1 + (uVar1 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg1 < arg2) goto code_r0x00011c75;
    }
    if (arg1 < arg2 + 0x100) {
        return 0x800000000000000f;
    }
code_r0x00011c75:
    for (; *arg1 != iVar3; arg1 = arg1 + 2) {
        *arg2 = *arg1;
        arg2 = arg2 + 1;
    }
    *arg2 = iVar3;
    return 0;
}


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 7264 named .text
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


/* fcn.00010b18 @ 0x10b18 */

void fcn.00010b18(uint32_t arg1,int64_t arg2)

{
    char cVar1;
    uint in_register_0000000c;
    char *pcVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    
    pcVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    if (*pcVar2 != '\0') {
        while (pcVar2[uVar3 + 1] != '\0') {
            cVar1 = pcVar2[uVar3];
            uVar4 = uVar3 + 2;
            pcVar2[uVar3] = pcVar2[uVar3 + 1];
            pcVar2[uVar3 + 1] = cVar1;
            if ((arg2 & 0xff) <= uVar4) {
                return;
            }
            uVar3 = uVar4;
            if (pcVar2[uVar4] == '\0') {
                return;
            }
        }
    }
    return;
}


/* fcn.00010b70 @ 0x10b70 */

void fcn.00010b70(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar auStack_88 [16];
    uint32_t uStack_78;
    uchar uStack_74;
    uint uStack_70;
    uint uStack_64;
    ulong uStack_48;
    int64_t iStack_40;
    uint uStack_38;
    uchar uStack_24;
    uint32_t *puStack_20;
    uchar *puStack_18;
    
    fcn.000102a0(&uStack_48,0x38);
    fcn.000102a0(&uStack_78,0x2c);
    fcn.000102a0(auStack_88,0x10);
    uStack_70 = arg2;
    uStack_78 = uStack_78 & 0xffffff06 | 6;
    puStack_20 = &uStack_78;
    uStack_38 = 0x1000;
    puStack_18 = auStack_88;
    uStack_48 = 50000000;
    uStack_24 = 0;
    uStack_64 = arg3;
    uStack_74 = 4;
    iStack_40 = arg4;
    (**(arg1 + 8))(arg1,arg2 & 0xffffffff,&uStack_48,0);
    return;
}


/* fcn.000119bc @ 0x119bc */

void fcn.000119bc(void)

{
    if (*0x11fd0 == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x11fd0 = '\x05';
        }
        else {
            *0x11fd0 = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


/* fcn.000105d4 @ 0x105d4 */

ulong fcn.000105d4(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    int16_t *piVar3;
    int64_t iVar4;
    int16_t *piVar5;
    uint64_t uVar6;
    int16_t *piStackX_18;
    int16_t *piStackX_20;
    int64_t var_90h;
    int64_t var_98h;
    int16_t aiStack_158 [4];
    int16_t *piStack_150;
    int64_t iStack_148;
    uchar auStack_140 [14];
    uchar uStack_132;
    uchar uStack_131;
    uchar uStack_130;
    uchar auStack_128 [256];
    
    iVar4 = 0;
    if (arg2 == 0) {
        uVar1 = 0x8000000000000002;
    }
    else {
        iVar2 = (**(*0x12088 + 0x98))(noname_0,0x11f70,&iStack_148);
        if (-1 < iVar2) {
            piStackX_18 = NULL;
            piStackX_20 = NULL;
            piStack_150 = NULL;
            aiStack_158[0] = 0;
            iVar2 = (**(iStack_148 + 0x30))(iStack_148,auStack_140);
            if (-1 < iVar2) {
                iVar2 = (**(iStack_148 + 0x50))(iStack_148,0x409,uStack_132,&piStackX_18);
                piVar5 = aiStack_158;
                if (-1 < iVar2) {
                    piVar5 = piStackX_18;
                }
                piStackX_18 = piVar5;
                iVar2 = (**(iStack_148 + 0x50))(iStack_148,0x409,uStack_131,&piStackX_20);
                piVar5 = aiStack_158;
                if (-1 < iVar2) {
                    piVar5 = piStackX_20;
                }
                piStackX_20 = piVar5;
                iVar2 = (**(iStack_148 + 0x50))(iStack_148,0x409,uStack_130,&piStack_150);
                piVar5 = aiStack_158;
                if (-1 < iVar2) {
                    piVar5 = piStack_150;
                }
                if (((piStackX_18 != aiStack_158) && (piStackX_20 != aiStack_158)) && (piVar5 != aiStack_158)) {
                    iVar2 = iVar4;
                    for (piVar3 = piStackX_18; *piVar3 != 0; piVar3 = piVar3 + 1) {
                        iVar2 = iVar2 + 1;
                    }
                    for (piVar3 = piStackX_20; *piVar3 != 0; piVar3 = piVar3 + 1) {
                        iVar4 = iVar4 + 1;
                    }
                    uVar6 = (iVar4 + iVar2) * 2 + 4;
                    piStack_150 = piVar5;
                    iVar4 = fcn.00011a28(uVar6);
                    if (iVar4 == 0) {
                        if (piStackX_18 != aiStack_158) {
                            (**(*0x12088 + 0x48))();
                        }
                        if (piStackX_20 != aiStack_158) {
                            (**(*0x12088 + 0x48))();
                        }
                        if (piStack_150 != aiStack_158) {
                            (**(*0x12088 + 0x48))();
                        }
                        return 0x8000000000000009;
                    }
                    uVar6 = uVar6 >> 1;
                    fcn.00011a88(iVar4,uVar6,piStackX_18);
                    fcn.00011a88(iVar4,uVar6,0x11ff0);
                    fcn.00011a88(iVar4,uVar6,piStackX_20);
                    fcn.000102a0(auStack_128,0x100);
                    fcn.00011c00(iVar4,auStack_128);
                    if (arg1 != auStack_128) {
                        section..text(arg1,auStack_128,0x28);
                    }
                    fcn.000102a0(auStack_128,0x100);
                    fcn.00011c00(piStack_150,auStack_128);
                    if (arg2 != auStack_128) {
                        section..text(arg2,auStack_128,0x14);
                    }
                    if (piStackX_18 != aiStack_158) {
                        (**(*0x12088 + 0x48))();
                    }
                    if (piStackX_20 != aiStack_158) {
                        (**(*0x12088 + 0x48))();
                    }
                    if (piStack_150 != aiStack_158) {
                        (**(*0x12088 + 0x48))();
                    }
                    (**(*0x12088 + 0x48))(iVar4);
                    return 0;
                }
            }
        }
        uVar1 = 0x800000000000000e;
    }
    return uVar1;
}


/* fcn.00011b7c @ 0x11b7c */

ulong fcn.00011b7c(int64_t arg1,ulong noname_1,int64_t arg2)

{
    char cVar1;
    uint64_t uVar2;
    
    if ((arg1 == 0) || (arg2 == 0)) {
        return 0x8000000000000002;
    }
    uVar2 = fcn.00011b58(arg2);
    if (0x27 < uVar2) {
        return 0x8000000000000005;
    }
    if (arg2 <= arg1) {
        if (arg1 < arg2 + uVar2 + 1) {
            return 0x800000000000000f;
        }
        if (arg2 < arg1) goto code_r0x00011bdd;
    }
    if (arg2 < arg1 + 0x28) {
        return 0x800000000000000f;
    }
code_r0x00011bdd:
    cVar1 = *arg2;
    if (cVar1 != '\0') {
        arg2 = arg2 - arg1;
        do {
            *arg1 = cVar1;
            arg1 = arg1 + 1;
            cVar1 = *(arg1 + arg2);
        } while (cVar1 != '\0');
    }
    *arg1 = '\0';
    return 0;
}


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.000108f4 @ 0x108f4 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h

int16_t fcn.000108f4(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int16_t iVar2;
    uint16_t uVar3;
    int64_t iVar4;
    uint16_t uVar5;
    uint16_t uVar6;
    uint16_t uStackX_8;
    uint16_t auStackX_10 [4];
    int64_t iStackX_18;
    uint *puStackX_20;
    uint32_t var_48h;
    int64_t var_58h;
    int64_t var_60h;
    uint64_t uStack_68;
    int16_t iStack_58;
    ushort uStack_56;
    uint8_t uStack_50;
    uchar uStack_4f;
    uchar uStack_4e;
    char cStack_4d;
    uint8_t uStack_4a;
    int64_t var_28h;
    int64_t var_20h;
    uint32_t var_18h;
    int8_t var_bp_10h;
    int8_t var_fh;
    int8_t var_eh;
    int8_t var_dh;
    int8_t var_ah;
    
    auStackX_10[0] = arg2;
    puStackX_20 = arg1 + 0x14;
    (**(*0x12088 + 0x140))(0x11ec0,0);
    uVar3 = 0;
    uStackX_8 = 0;
    do {
        uVar6 = 0;
        uStack_68 = 0;
        do {
            uVar5 = 0;
            do {
                iVar4 = (uVar5 | (uStack_68 | uVar3 << 8) << 8) * 0x100;
                (**(iStackX_18 + 0x38))(iStackX_18,1,iVar4,1,&iStack_58);
                if (iStack_58 != -1) {
                    (**(iStackX_18 + 0x38))(iStackX_18,2,iVar4,4,&iStack_58);
                    if (cStack_4d == '\x06') {
                        (**(iStackX_18 + 0x38))(iStackX_18,0,iVar4 + 0x19,1,auStackX_10);
                        uVar1 = auStackX_10[0] & 0xff;
                        if ((auStackX_10[0] & 0xff) < uStackX_8) {
                            uVar1 = uStackX_8;
                        }
                        uStackX_8 = uVar1;
                    }
                    if (uVar3 != 0) {
                        *(puStackX_20 + 2) = iStack_58;
                        *(puStackX_20 + 10) = uStack_56;
                        *(puStackX_20 + 3) = uStack_50;
                        *puStackX_20 = 0x1800;
                        puStackX_20[1] = 1;
                        *(puStackX_20 + 0x12) = CONCAT21(CONCAT11(cStack_4d,uStack_4e),uStack_4f);
                        (**(iStackX_18 + 0x38))(iStackX_18,1,iVar4 + 0x2c,2,puStackX_20 + 0xe);
                        *(puStackX_20 + 0x16) = (uVar3 << 5 | uVar6) << 3 | uVar5;
                        puStackX_20 = puStackX_20 + 6;
                        *(arg1 + 0x12) = *(arg1 + 0x12) + 1;
                    }
                    if ((uVar5 == 0) && ((uStack_4a & 0x80) == 0)) break;
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < 8);
            uVar6 = uVar6 + 1;
            uStack_68 = uStack_68 + 1;
        } while (uVar6 < 0x20);
        uVar3 = uVar3 + 1;
        if (uStackX_8 < uVar3) {
            iVar2 = *(arg1 + 0x12) * 0x18;
            *(arg1 + 0x10) = iVar2;
            return iVar2 + 4;
        }
    } while( true );
}


/* fcn.00010c30 @ 0x10c30 */

//WARNING: Variable defined which should be unmapped: var_1ah
//WARNING: Variable defined which should be unmapped: var_22h

int16_t fcn.00010c30(int64_t arg1)

{
    uint16_t uVar1;
    ushort uVar2;
    ushort uVar3;
    int64_t iVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    uint16_t *puVar7;
    uint64_t uVar8;
    int16_t iVar9;
    ushort auStackX_10 [4];
    ushort auStackX_18 [4];
    int64_t iStackX_20;
    int64_t var_54h;
    int16_t var_bp_78h;
    int64_t var_7ah;
    int64_t var_1f8h;
    int64_t var_200h;
    int64_t var_208h;
    uint64_t uStack_2b8;
    uint64_t uStack_2b0;
    int64_t iStack_2a8;
    uchar *puStack_2a0;
    uchar *puStack_298;
    ulong uStack_290;
    uchar *puStack_288;
    uint uStack_278;
    ushort uStack_270;
    uchar auStack_268 [2];
    uchar uStack_266;
    uchar auStack_250 [24];
    uchar auStack_238 [20];
    uint auStack_224 [6];
    uint auStack_20a [2];
    uint auStack_202 [27];
    uint auStack_194 [9];
    uint16_t uStack_170;
    uint16_t auStack_16e [115];
    int64_t var_80h;
    int64_t var_68h;
    int64_t var_50h;
    int64_t var_3ch;
    int64_t var_22h;
    int64_t var_1ah;
    
    iVar9 = 0;
    iVar4 = (**(*0x12088 + 0x138))(2,0x11f10,0,&uStack_2b0,&iStack_2a8);
    if (iVar4 < 0) {
        iVar9 = 0;
    }
    else {
        uStack_2b8 = 0;
        if (uStack_2b0 != 0) {
            while (iVar4 = (**(*0x12088 + 0x98))(*(iStack_2a8 + uStack_2b8 * 8),0x11f10,&iStackX_20), -1 < iVar4) {
                auStackX_10[0] = 0xffff;
                iVar4 = (**(iStackX_20 + 0x10))(iStackX_20,auStackX_10);
                while (-1 < iVar4) {
                    auStackX_18[0] = 0xffff;
                    iVar4 = (**(iStackX_20 + 0x18))(iStackX_20,auStackX_10[0],auStackX_18);
                    while (-1 < iVar4) {
                        fcn.000102a0(auStack_238,0x200);
                        iVar4 = iStackX_20;
                        uVar3 = auStackX_18[0];
                        uVar2 = auStackX_10[0];
                        fcn.000102a0(&puStack_2a0,0x38);
                        fcn.000102a0(auStack_268,0x14);
                        fcn.000102a0(auStack_250,0x14);
                        puStack_298 = auStack_268;
                        uStack_266 = 0xec;
                        puStack_2a0 = auStack_250;
                        uStack_270 = 0xa004;
                        puStack_288 = auStack_238;
                        uStack_278 = 0x200;
                        uStack_290 = 30000000;
                        iVar4 = (**(iVar4 + 8))(iVar4,uVar2,uVar3,&puStack_2a0,0);
                        if (-1 < iVar4) {
                            uVar8 = uStack_170;
                            puVar7 = auStack_16e;
                            uVar6 = 0x10;
                            do {
                                uVar1 = *puVar7;
                                puVar7 = puVar7 + 1;
                                uVar5 = uVar6;
                                uVar6 = uVar6 + 0x10;
                                uVar8 = uVar8 | uVar1 << (uVar5 & 0x3f);
                            } while (uVar6 < 0x40);
                            iVar4 = CONCAT71(puVar7 >> 8,0x28);
                            *arg1 = 0x8200;
                            *(arg1 + 4) = 0x2007e;
                            fcn.00010b18(auStack_202,iVar4);
                            fcn.00010b18(auStack_224,CONCAT71(iVar4 >> 8,0x14));
                            if (arg1 + 0x30 != auStack_224) {
                                section..text(arg1 + 0x30,auStack_224,0x14);
                            }
                            if (arg1 + 0x44 != auStack_20a) {
                                section..text(arg1 + 0x44,auStack_20a,8);
                            }
                            if (arg1 + 0x4c != auStack_202) {
                                section..text(arg1 + 0x4c,auStack_202,0x28);
                            }
                            if (arg1 + 0x7c != auStack_194) {
                                section..text(arg1 + 0x7c,auStack_194,6);
                            }
                            iVar9 = iVar9 + 1;
                            *(arg1 + 0x74) = uVar8 << 9;
                            arg1 = arg1 + 0x82;
                        }
                        iVar4 = (**(iStackX_20 + 0x18))(iStackX_20,auStackX_10[0],auStackX_18);
                    }
                    if (iVar4 != -0x7ffffffffffffff2) goto code_r0x00010f27;
                    iVar4 = (**(iStackX_20 + 0x10))(iStackX_20,auStackX_10);
                }
                if ((iVar4 != -0x7ffffffffffffff2) || (uStack_2b8 = uStack_2b8 + 1, uStack_2b0 <= uStack_2b8)) break;
            }
        }
    }
code_r0x00010f27:
    return iVar9;
}


/* fcn.00010f44 @ 0x10f44 */

int16_t fcn.00010f44(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int16_t iVar3;
    uint32_t auStackX_10 [2];
    int64_t iStackX_18;
    uint64_t uStackX_20;
    int16_t var_40h;
    int16_t var_148h;
    int64_t var_f40h;
    int64_t var_f48h;
    int32_t var_1f78h;
    int64_t var_1f80h;
    uint32_t var_1f88h;
    int64_t aiStack_2038 [2];
    uchar auStack_2028 [4];
    uint auStack_2024 [5];
    uint auStack_2010 [10];
    uint auStack_1fe8 [48];
    ushort uStack_1f28;
    ushort uStack_1e20;
    uchar auStack_1028 [8];
    int64_t iStack_1020;
    
    uVar2 = 0;
    iVar3 = 0;
    iVar1 = (**(*0x12088 + 0x138))(2,0x11f40,0,&uStackX_20,aiStack_2038);
    if (iVar1 < 0) {
        iVar3 = 0;
    }
    else if (uStackX_20 != 0) {
        while (iVar1 = (**(*0x12088 + 0x98))(*(aiStack_2038[0] + uVar2 * 8),0x11f40), -1 < iVar1) {
            auStackX_10[0] = 0xffffffff;
            while (iVar1 = (**(iStackX_18 + 0x10))(iStackX_18,auStackX_10), -1 < iVar1) {
                fcn.000102a0(auStack_2028,0x1000);
                fcn.000102a0(auStack_1028,0x1000);
                iVar1 = fcn.00010b70(iStackX_18,auStackX_10[0],0,auStack_1028);
                if ((-1 < iVar1) &&
                   ((iVar1 = fcn.00010b70(iStackX_18,auStackX_10[0],1,auStack_2028), -1 < iVar1 ||
                    (iVar1 = fcn.00010b70(iStackX_18,0,1,auStack_2028), -1 < iVar1)))) {
                    *arg1 = 0x8200;
                    *(arg1 + 4) = 0x3007e;
                    if (arg1 + 0x4c != auStack_2010) {
                        section..text(arg1 + 0x4c,auStack_2010,0x28);
                    }
                    if (arg1 + 0x30 != auStack_2024) {
                        section..text(arg1 + 0x30,auStack_2024,0x14);
                    }
                    if (arg1 + 0x44 != auStack_1fe8) {
                        section..text(arg1 + 0x44,auStack_1fe8,8);
                    }
                    iVar3 = iVar3 + 1;
                    *(arg1 + 0x7c) = uStack_1f28;
                    *(arg1 + 0x7e) = uStack_1e20;
                    *(arg1 + 0x74) = iStack_1020 << 9;
                    arg1 = arg1 + 0x82;
                }
            }
            if ((iVar1 != -0x7ffffffffffffff2) || (uVar2 = uVar2 + 1, uStackX_20 <= uVar2)) break;
        }
    }
    return iVar3;
}


/* fcn.00011160 @ 0x11160 */

//WARNING: Variable defined which should be unmapped: var_2h
//WARNING: Variable defined which should be unmapped: var_1ch
//WARNING: Variable defined which should be unmapped: var_bp_30h

int16_t fcn.00011160(int64_t arg1)

{
    uint32_t uVar1;
    char cVar2;
    int64_t iVar3;
    char *pcVar4;
    ushort *arg1_00;
    ushort *arg2;
    ushort *puVar5;
    int16_t iVar6;
    char *arg2_00;
    char cVar7;
    uint64_t uVar8;
    char cVar9;
    uint auStackX_10 [2];
    uint auStackX_18 [2];
    char *pcStackX_20;
    int64_t var_74h;
    int8_t var_218h;
    int32_t var_220h;
    int64_t var_228h;
    int64_t iStack_2d8;
    uint64_t uStack_2d0;
    char *pcStack_2c8;
    char *pcStack_2c0;
    int64_t iStack_2b8;
    char *pcStack_2b0;
    int64_t aiStack_2a8 [2];
    uint uStack_298;
    char acStack_294 [4];
    uint uStack_290;
    uint uStack_28c;
    ushort auStack_288 [12];
    uchar auStack_270 [8];
    uchar auStack_268 [8];
    char acStack_260 [40];
    char acStack_238 [20];
    ushort auStack_224 [13];
    ushort auStack_20a [4];
    ushort auStack_202 [55];
    ushort auStack_194 [134];
    int64_t var_80h;
    int64_t var_68h;
    int64_t var_bp_60h;
    int64_t var_58h;
    int64_t var_bp_30h;
    int64_t var_1ch;
    int64_t var_2h;
    
    iVar6 = 0;
    iVar3 = (**(*0x12088 + 0x138))(2,0x11fb0,0,&uStack_2d0,&iStack_2d8);
    if ((iVar3 < 0) || (uStack_2d0 == 0)) {
        iVar6 = 0;
    }
    else {
        uVar8 = 0;
        puVar5 = arg1 + 6;
        cVar7 = auStackX_10[0];
        cVar9 = auStackX_10[0];
        do {
            (**(*0x12088 + 0x98))(*(iStack_2d8 + uVar8 * 8),0x11fb0,&pcStackX_20);
            if (*(*(pcStackX_20 + 8) + 6) == '\0') {
                (**(*0x12088 + 0x98))(*(iStack_2d8 + uVar8 * 8),0x11f50,&pcStack_2c8);
                for (pcVar4 = pcStack_2c8; (*pcVar4 != '\x7f' || (pcVar4[1] != -1)); pcVar4 = pcVar4 + *(pcVar4 + 2)) {
                    cVar9 = *pcVar4;
                    cVar7 = pcVar4[1];
                }
                if (cVar9 == '\x03') {
                    if (cVar7 == '\x01') {
                        iVar3 = *(*(pcStackX_20 + 8) + 0x18);
                        uVar1 = *(*(pcStackX_20 + 8) + 0xc);
                        *puVar5 = 1;
                        *(puVar5 + 0x37) = (iVar3 + 1) * uVar1;
                        pcVar4 = 0x11ef0;
                        *(puVar5 + 1) = -(*(*(pcStackX_20 + 8) + 4) != '\0') & 2;
                        iVar3 = (**(*0x12088 + 0x98))(*(iStack_2d8 + uVar8 * 8),0x11ef0,aiStack_2a8);
                        if (iVar3 < 0) {
code_r0x00011611:
                            arg2_00 = "ATAPI";
                            goto code_r0x0001161c;
                        }
                        auStackX_18[0] = 0x200;
                        fcn.000102a0(acStack_238,0x200);
                        pcVar4 = acStack_238;
                        iVar3 = (**(aiStack_2a8[0] + 0x18))(aiStack_2a8[0],pcVar4,auStackX_18);
                        if (iVar3 < 0) goto code_r0x00011611;
code_r0x00011589:
                        iVar3 = CONCAT71(pcVar4 >> 8,0x28);
                        fcn.00010b18(auStack_202,iVar3);
                        fcn.00010b18(auStack_224,CONCAT71(iVar3 >> 8,0x14));
                        if (puVar5 + 0x15 != auStack_224) {
                            section..text(puVar5 + 0x15,auStack_224,0x14);
                        }
                        if (puVar5 + 0x1f != auStack_20a) {
                            section..text(puVar5 + 0x1f,auStack_20a,8);
                        }
                        if (puVar5 + 0x23 != auStack_202) {
                            section..text(puVar5 + 0x23,auStack_202,0x28);
                        }
                        arg1_00 = puVar5 + 0x3b;
                        if (arg1_00 != auStack_194) {
                            iVar3 = 6;
                            arg2 = auStack_194;
code_r0x0001160a:
                            section..text(arg1_00,arg2,iVar3);
                        }
                    }
                    else {
                        pcVar4 = pcStack_2c8;
                        if (cVar7 == '\x05') {
                            do {
                                if ((*pcVar4 == '\x7f') && (pcVar4[1] == -1)) {
                                    iVar3 = *(*(pcStackX_20 + 8) + 0x18);
                                    uVar1 = *(*(pcStackX_20 + 8) + 0xc);
                                    *puVar5 = 0;
                                    *(puVar5 + 0x37) = (iVar3 + 1) * uVar1;
                                    fcn.000102a0(acStack_260,0x28);
                                    fcn.000102a0(auStack_288,0x14);
                                    pcVar4 = acStack_260;
                                    iVar3 = fcn.000105d4(*(iStack_2d8 + uVar8 * 8),pcVar4,auStack_288);
                                    if (iVar3 < 0) {
                                        arg2_00 = 0x11ffc;
                                        goto code_r0x0001161c;
                                    }
                                    if (puVar5 + 0x23 != acStack_260) {
                                        section..text(puVar5 + 0x23,acStack_260,0x28);
                                    }
                                    arg1_00 = puVar5 + 0x15;
                                    if (arg1_00 == auStack_288) goto code_r0x00011621;
                                    iVar3 = 0x14;
                                    arg2 = auStack_288;
                                    goto code_r0x0001160a;
                                }
                                if ((*pcVar4 == '\x03') && (pcVar4[1] == '\x05')) {
                                    cVar2 = fcn.000119bc();
                                    if (cVar2 == '\x03') {
code_r0x0001143d:
                                        cVar2 = '\n';
                                    }
                                    else if (cVar2 == '\x04') {
                                        cVar2 = '\x0e';
                                    }
                                    else {
                                        if (cVar2 == '\x05') goto code_r0x0001143d;
                                        cVar2 = '\0';
                                    }
                                    if (pcVar4[4] == cVar2 + '\x01') goto code_r0x00011647;
                                }
                                pcVar4 = pcVar4 + *(pcVar4 + 2);
                            } while( true );
                        }
                        if (cVar7 == '\x12') {
                            iVar3 = *(pcStackX_20 + 8);
                            if (*(iVar3 + 4) == '\0') {
                                pcStack_2b0 = pcStack_2c8;
                                uStack_298 = *0x11f10;
                                acStack_294[0] = str._a_bOB[0];
                                acStack_294[1] = str._a_bOB[1];
                                acStack_294[2] = str._a_bOB[2];
                                acStack_294[3] = str._a_bOB[3];
                                uStack_290 = *0x11f18;
                                uStack_28c = *0x11f1c;
                                iVar3 = (**(*0x12088 + 0xb8))(&uStack_298,&pcStack_2b0,auStack_268);
                                if (-1 < iVar3) goto code_r0x00011647;
                                arg2_00 = "Unknown SATA Disk";
                                iVar3 = *(*(pcStackX_20 + 8) + 0x18);
                                uVar1 = *(*(pcStackX_20 + 8) + 0xc);
                                *puVar5 = 2;
                                *(puVar5 + 0x37) = (iVar3 + 1) * uVar1;
                                *(puVar5 + 1) = -(*(*(pcStackX_20 + 8) + 4) != '\0') & 2;
                                pcVar4 = pcStackX_20;
                            }
                            else {
                                uVar1 = *(iVar3 + 0xc);
                                pcVar4 = 0x11ef0;
                                iVar3 = *(iVar3 + 0x18);
                                *puVar5 = 0x202;
                                *(puVar5 + 0x37) = (iVar3 + 1) * uVar1;
                                iVar3 = (**(*0x12088 + 0x98))(*(iStack_2d8 + uVar8 * 8),0x11ef0,&iStack_2b8);
                                if (-1 < iVar3) {
                                    auStackX_10[0] = 0x200;
                                    fcn.000102a0(acStack_238,0x200);
                                    pcVar4 = acStack_238;
                                    iVar3 = (**(iStack_2b8 + 0x18))(iStack_2b8,pcVar4,auStackX_10);
                                    if (-1 < iVar3) goto code_r0x00011589;
                                }
                                arg2_00 = "DVD Disk";
                            }
                        }
                        else if (cVar7 == '\x17') {
                            pcStack_2c0 = pcStack_2c8;
                            uStack_298 = *0x11f40;
                            acStack_294[0] = *0x11f44;
                            acStack_294[1] = *0x11f45;
                            acStack_294[2] = *0x11f46;
                            acStack_294[3] = *0x11f47;
                            uStack_290 = *0x11f48;
                            uStack_28c = *0x11f4c;
                            iVar3 = (**(*0x12088 + 0xb8))(&uStack_298,&pcStack_2c0,auStack_270);
                            if (-1 < iVar3) goto code_r0x00011647;
                            arg2_00 = "Unknown NVMe Disk";
                            pcVar4 = (*(*(pcStackX_20 + 8) + 0x18) + 1) * *(*(pcStackX_20 + 8) + 0xc);
                            *puVar5 = 3;
                            *(puVar5 + 0x37) = pcVar4;
                        }
                        else {
                            *puVar5 = 0x400;
                            arg2_00 = "Unknown";
                        }
code_r0x0001161c:
                        fcn.00011b7c(puVar5 + 0x23,pcVar4,arg2_00);
                    }
code_r0x00011621:
                    *(puVar5 + -3) = 0x8200;
                    puVar5[-1] = 0x7e;
                    iVar6 = iVar6 + 1;
                    puVar5 = puVar5 + 0x41;
                }
            }
code_r0x00011647:
            uVar8 = uVar8 + 1;
        } while (uVar8 < uStack_2d0);
        (**(*0x12088 + 0x48))(iStack_2d8);
    }
    return iVar6;
}


/* fcn.00011690 @ 0x11690 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_ah
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

int16_t fcn.00011690(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uchar *arg2_00;
    bool bVar2;
    int64_t iVar3;
    uint64_t uVar4;
    char *pcVar5;
    uint64_t uVar6;
    char *arg2_01;
    uint16_t uVar7;
    char cStackX_18;
    char cStackX_19;
    unkbyte6 StackX_1a;
    ulong uStackX_20;
    int64_t var_50h;
    int64_t var_58h;
    int64_t iStack_68;
    uchar auStack_60 [8];
    uchar auStack_58 [22];
    uint16_t uStack_42;
    uint32_t uStack_40;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int16_t var_ah;
    int32_t var_bp_8h;
    
    uVar7 = arg2;
    bVar2 = false;
    iVar3 = fcn.00011c88(0x11f90,&cStackX_18);
    if (-1 < iVar3) {
        arg2_00 = CONCAT62(StackX_1a,CONCAT11(cStackX_19,cStackX_18));
        if (auStack_58 != arg2_00) {
            section..text(auStack_58,arg2_00,0x1f);
        }
        iVar3 = fcn.000102c0(auStack_58,0x12050,4);
        if (((iVar3 != 1) && (uStack_42 != 0)) && (uStack_42 <= 0x3000 - uVar7)) {
            arg2_01 = uStack_40;
code_r0x0001172c:
            uVar6 = arg2_01[1];
            pcVar5 = arg2_01 + uVar6;
            do {
                if (*pcVar5 == '\0') {
                    pcVar5 = pcVar5 + 1;
                    if (*pcVar5 == '\0') {
                        uVar6 = uVar6 + 2;
                        goto code_r0x0001176b;
                    }
                    uVar6 = uVar6 + 1;
                }
                uVar4 = 0;
                do {
                    if (pcVar5[uVar4] == '\0') break;
                    uVar4 = uVar4 + 1;
                } while (uVar4 < 0xffffffff);
                if (uVar4 == 0xffffffff) goto code_r0x00011768;
                pcVar5 = pcVar5 + uVar4;
                uVar6 = uVar6 + uVar4;
            } while( true );
        }
    }
    return 0;
code_r0x00011768:
    uVar6 = 0;
code_r0x0001176b:
    cVar1 = *arg2_01;
    if (((cVar1 != '\r') && (cVar1 != '\x0f')) && ((cVar1 != '\x19' && (cVar1 != ' ')))) {
        if (cVar1 == '\x7f') {
            bVar2 = true;
        }
        else if (((cVar1 == -0x7e) && (iVar3 = (**(*0x12088 + 0x140))(0x11f60,0,auStack_60), -1 < iVar3)) &&
                (iVar3 = (**(*0x12088 + 0x140))(0x11f20,0,&iStack_68), -1 < iVar3)) {
            uStackX_20 = 4;
            iVar3 = (**(iStack_68 + 0x10))(&uStackX_20,&cStackX_18);
            if ((-1 < iVar3) && (arg2_01[8] != '\0')) {
                arg2_01[0xb] = cStackX_18;
                arg2_01[10] = cStackX_19;
            }
        }
        pcVar5 = arg1 + 0x10 + uVar7;
        if ((uVar6 != 0) && (pcVar5 != arg2_01)) {
            section..text(pcVar5,arg2_01,uVar6);
        }
        uVar7 = uVar7 + uVar6;
    }
    arg2_01 = arg2_01 + uVar6;
    if (bVar2) {
        return uVar7 - *(arg1 + 8);
    }
    goto code_r0x0001172c;
}


/* fcn.00011a54 @ 0x11a54 */

uint64_t fcn.00011a54(uint32_t arg1,int64_t arg2)

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


/* fcn.00011b58 @ 0x11b58 */

uint64_t fcn.00011b58(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != '\0')) {
        while (uVar1 < 0x27) {
            uVar1 = uVar1 + 1;
            if (*(uVar1 + CONCAT44(in_register_0000000c,arg1)) == '\0') {
                return uVar1;
            }
        }
        uVar1 = 0x28;
    }
    return uVar1;
}


