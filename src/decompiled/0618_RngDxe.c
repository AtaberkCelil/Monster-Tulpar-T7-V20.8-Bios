// decompiled by r2ghidra: 0618_RngDxe.pe32
// functions: 17

/* entry0 @ 0x10394 */

void entry0(int64_t arg1,int64_t arg2)

{
    ulong auStackX_18 [2];
    
    fcn.000103cc(arg1,arg2);
    auStackX_18[0] = 0;
    (**(*0x11178 + 0x148))(auStackX_18,0x10ca0,0x10d00,0);
    return;
}


/* fcn.000103cc @ 0x103cc */

void fcn.000103cc(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0;
    int64_t iStackX_8;
    
    *0x11178 = *(arg2 + 0x60);
    *0x11170 = arg2;
    iStackX_8 = arg1;
    fcn.00010bd4();
    puVar4 = fcn.00010bd4();
    do {
        uVar1 = *puVar4;
        noname_0 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x00010425:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010390();
                fcn.00010340();
                uVar2 = in(0x1808);
                fcn.000102f0(noname_0,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    fcn.000102e0();
                }
                fcn.000102f0(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010340();
                }
                else {
                    fcn.00010330();
                }
code_r0x0001048e:
                fcn.00010300(1,0,0,&iStackX_8);
                return;
            }
            if ((*0x10d10 == *(puVar4 + 4)) && (*0x10d18 == *(puVar4 + 8))) goto code_r0x0001048e;
        }
        else if (uVar1 == 4) goto code_r0x00010425;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010bd4 @ 0x10bd4 */

int64_t fcn.00010bd4(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x11180 == 0) {
        *0x11180 = 0;
        if (*(*0x11170 + 0x68) != 0) {
            piVar2 = *(*0x11170 + 0x70);
            do {
                if ((*0x10cb0 == *piVar2) && (*0x10cb8 == piVar2[1])) {
                    *0x11180 = (*(*0x11170 + 0x70))[uVar1 * 3 + 2];
                    return *0x11180;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x11170 + 0x68));
        }
    }
    return *0x11180;
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


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 2592 named .text
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


/* fcn.00010664 @ 0x10664 */

ulong fcn.00010664(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint32_t uVar2;
    ulong uStack_18;
    ulong uStack_10;
    
    do {
        if (arg1 == 0) {
            return 0;
        }
        uVar2 = 0;
        while (cVar1 = fcn.00010373(&uStack_18), cVar1 == '\0') {
            uVar2 = uVar2 + 1;
            if (9 < uVar2) {
                return 0x8000000000000006;
            }
        }
        uVar2 = 0;
        while (cVar1 = fcn.00010373(&uStack_10), cVar1 == '\0') {
            uVar2 = uVar2 + 1;
            if (9 < uVar2) {
                return 0x8000000000000006;
            }
        }
        if (arg1 < 0x10) {
            if (arg2 != &uStack_18) {
                section..text(arg2,&uStack_18,arg1);
            }
            arg1 = 0;
        }
        else {
            *arg2 = uStack_18;
            *(arg2 + 8) = uStack_10;
            arg2 = arg2 + 0x10;
            arg1 = arg1 - 0x10;
        }
    } while( true );
}


/* fcn.00010708 @ 0x10708 */

int64_t fcn.00010708(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uStack_48;
    uint64_t uStack_40;
    uint64_t uStack_38;
    uint64_t uStack_30;
    uint64_t uStack_28;
    uint64_t uStack_20;
    uchar auStack_18 [16];
    
    uVar1 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar2 = 0;
    do {
        auStack_18[iVar2] = uVar1;
        uVar1 = uVar1 + 1;
        iVar2 = iVar2 + 1;
    } while (uVar1 < 0x10);
    uVar1 = 0;
    do {
        fcn.00010c40(0x23);
        iVar2 = fcn.00010664(0x10,&uStack_38);
        if (iVar2 < 0) {
            return iVar2;
        }
        uStack_28 = uStack_48 ^ uStack_38;
        uStack_20 = uStack_40 ^ uStack_30;
        fcn.00010898(auStack_18,&uStack_28,&uStack_48);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 0x20);
    *arg1 = uStack_48;
    *(arg1 + 8) = uStack_40;
    return 0;
}


/* fcn.00010c40 @ 0x10c40 */

void fcn.00010c40(int64_t arg1)

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
            fcn.000102e0();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00010898 @ 0x10898 */

ulong fcn.00010898(int64_t noname_0,int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t *puVar4;
    ulong uVar5;
    uint8_t *puVar6;
    uchar *puVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    int64_t iVar10;
    int64_t iVar11;
    uint32_t *puVar12;
    uchar auStack_21a [18];
    uint32_t auStack_208 [4];
    uchar auStack_1f8 [8];
    uint32_t auStack_1f0 [4];
    uint32_t auStack_1e0 [118];
    
    if ((arg1 == 0) || (arg2 == 0)) {
        uVar5 = 0x8000000000000002;
    }
    else {
        fcn.00010798(noname_0,arg1,auStack_1f8);
        puVar7 = arg1 + 2;
        iVar11 = 4;
        do {
            *(puVar7 + auStack_21a + -arg1) =
                 CONCAT31(CONCAT21(CONCAT11(puVar7[-2],puVar7[-1]),*puVar7),puVar7[1]) ^
                 *(puVar7 + auStack_1f8 + (6 - arg1));
            puVar7 = puVar7 + 4;
            iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        puVar8 = auStack_21a + 2;
        iVar11 = 4;
        puVar9 = auStack_208;
        if (1 < auStack_1f8 + 6U) {
            iVar10 = auStack_1f8 + 5;
            puVar12 = auStack_1f0 + 7;
            iVar11 = iVar10 * 4 + 4;
            puVar4 = puVar8;
            do {
                puVar8 = puVar9;
                puVar9 = puVar4;
                uVar1 = *(puVar9[3] * 4 + 0x10d20);
                uVar2 = *(*(puVar9 + 9) * 4 + 0x10d20);
                uVar3 = *(*(puVar9 + 6) * 4 + 0x10d20);
                *puVar8 = (uVar1 << 8 | uVar1 >> 0x18) ^ (uVar2 << 0x10 | uVar2 >> 0x10) ^ (uVar3 >> 8 | uVar3 << 0x18)
                          ^ *(*(puVar9 + 3) * 4 + 0x10d20) ^ puVar12[-3];
                uVar1 = *(*puVar9 * 4 + 0x10d20);
                uVar2 = *(*(puVar9 + 0xd) * 4 + 0x10d20);
                uVar3 = *(*(puVar9 + 10) * 4 + 0x10d20);
                puVar8[1] = (uVar1 << 8 | uVar1 >> 0x18) ^ (uVar2 << 0x10 | uVar2 >> 0x10) ^
                            (uVar3 >> 8 | uVar3 << 0x18) ^ *(*(puVar9 + 7) * 4 + 0x10d20) ^ puVar12[-2];
                uVar1 = *(puVar9[1] * 4 + 0x10d20);
                uVar2 = *(*(puVar9 + 0xe) * 4 + 0x10d20);
                uVar3 = *(*(puVar9 + 1) * 4 + 0x10d20);
                puVar8[2] = (uVar1 << 8 | uVar1 >> 0x18) ^ (uVar2 >> 8 | uVar2 << 0x18) ^
                            (uVar3 << 0x10 | uVar3 >> 0x10) ^ *(*(puVar9 + 0xb) * 4 + 0x10d20) ^ puVar12[-1];
                uVar1 = *(puVar9[2] * 4 + 0x10d20);
                uVar2 = *(*(puVar9 + 5) * 4 + 0x10d20);
                uVar3 = *(*(puVar9 + 2) * 4 + 0x10d20);
                puVar8[3] = (uVar1 << 8 | uVar1 >> 0x18) ^ (uVar2 << 0x10 | uVar2 >> 0x10) ^
                            (uVar3 >> 8 | uVar3 << 0x18) ^ *(*(puVar9 + 0xf) * 4 + 0x10d20) ^ *puVar12;
                puVar12 = puVar12 + 4;
                iVar10 = iVar10 + -1;
                puVar4 = puVar8;
            } while (iVar10 != 0);
        }
        *puVar9 = *(puVar8[3] * 4 + 0x10d20) >> 8 & 0xff ^ (*(*(puVar8 + 6) * 4 + 0x10d20) & 0xff00) << 8 ^
                  (*(*(puVar8 + 3) * 4 + 0x10d20) & 0xff00) << 0x10 ^ *(*(puVar8 + 9) * 4 + 0x10d20) & 0xff00 ^
                  auStack_1f0[iVar11];
        puVar9[1] = *(*puVar8 * 4 + 0x10d20) >> 8 & 0xff ^ (*(*(puVar8 + 7) * 4 + 0x10d20) & 0xff00) << 0x10 ^
                    (*(*(puVar8 + 10) * 4 + 0x10d20) & 0xff00) << 8 ^ *(*(puVar8 + 0xd) * 4 + 0x10d20) & 0xff00 ^
                    auStack_1f0[iVar11 + 1];
        puVar9[2] = *(puVar8[1] * 4 + 0x10d20) >> 8 & 0xff ^ (*(*(puVar8 + 0xb) * 4 + 0x10d20) & 0xff00) << 0x10 ^
                    (*(*(puVar8 + 0xe) * 4 + 0x10d20) & 0xff00) << 8 ^ *(*(puVar8 + 1) * 4 + 0x10d20) & 0xff00 ^
                    auStack_1f0[iVar11 + 2];
        puVar6 = puVar9 + 2;
        puVar9[3] = *(puVar8[2] * 4 + 0x10d20) >> 8 & 0xff ^ (*(*(puVar8 + 0xf) * 4 + 0x10d20) & 0xff00) << 0x10 ^
                    (*(*(puVar8 + 2) * 4 + 0x10d20) & 0xff00) << 8 ^ *(*(puVar8 + 5) * 4 + 0x10d20) & 0xff00 ^
                    auStack_1f0[iVar11 + 3];
        arg2 = arg2 - puVar9;
        iVar11 = 4;
        do {
            puVar6[arg2 + -2] = puVar6[1];
            puVar6[arg2 + -1] = *puVar6;
            puVar6[arg2] = puVar6[-1];
            puVar6[arg2 + 1] = puVar6[-2];
            puVar6 = puVar6 + 4;
            iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        uVar5 = 0;
    }
    return uVar5;
}


/* fcn.00010373 @ 0x10373 */

ulong fcn.00010373(int64_t arg1)

{
    ulong uVar1;
    bool bVar2;
    
    uVar1 = rdrand();
    bVar2 = rdrandIsValid();
    if (!bVar2) {
        return 0;
    }
    *arg1 = uVar1;
    return 1;
}


/* fcn.00010798 @ 0x10798 */

ulong fcn.00010798(int64_t arg1,ulong noname_1,int64_t arg2)

{
    uchar *puVar1;
    uchar *puVar2;
    uchar *puVar3;
    uchar uVar4;
    uint32_t uVar5;
    uint32_t *puVar6;
    uchar *puVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint32_t *puVar10;
    uint32_t *puVar11;
    
    puVar10 = arg2 + 8;
    *arg2 = 4;
    puVar7 = arg1 + 1;
    uVar9 = 0;
    do {
        uVar4 = *puVar7;
        puVar1 = puVar7 + -1;
        puVar2 = puVar7 + 1;
        puVar3 = puVar7 + 2;
        puVar7 = puVar7 + 4;
        puVar10[uVar9] = CONCAT31(CONCAT21(CONCAT11(*puVar1,uVar4),*puVar2),*puVar3);
        uVar9 = uVar9 + 1;
    } while (uVar9 < 4);
    uVar9 = 4;
    puVar11 = 0x11120;
    do {
        uVar5 = puVar10[3];
        uVar8 = 1;
        puVar10[4] = (*((uVar5 >> 8) * 4 + 0x10d20) & 0xff00) << 8 ^ (*((uVar5 >> 0x10) * 4 + 0x10d20) & 0xff00) << 0x10
                     ^ *((uVar5 >> 0x18) * 4 + 0x10d20) >> 8 & 0xff ^ *((uVar5 & 0xff) * 4 + 0x10d20) & 0xff00 ^
                     *puVar10 ^ *puVar11;
        puVar6 = puVar10;
        do {
            if (0x2b < uVar9 + uVar8) break;
            uVar8 = uVar8 + 1;
            puVar6[5] = puVar6[4] ^ puVar6[1];
            puVar6 = puVar6 + 1;
        } while (uVar8 < 4);
        uVar9 = uVar9 + 4;
        puVar10 = puVar10 + 4;
        puVar11 = puVar11 + 1;
        if (0x2b < uVar9) {
            return 0;
        }
    } while( true );
}


/* fcn.000102e0 @ 0x102e0 */

void fcn.000102e0(void)

{
    return;
}


