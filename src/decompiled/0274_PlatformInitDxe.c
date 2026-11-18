// decompiled by r2ghidra: 0274_PlatformInitDxe.pe32
// functions: 36

/* entry0 @ 0x10434 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.00010448(arg1,in_RDX);
    fcn.0001056c(arg1,in_RDX);
    return;
}


/* fcn.00010448 @ 0x10448 */

void fcn.00010448(ulong noname_0,int64_t arg1)

{
    char cVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    ulong noname_0_00;
    
    *0x14958 = *(arg1 + 0x60);
    *0x14960 = *(arg1 + 0x58);
    *0x14950 = arg1;
    fcn.0001087c();
    noname_0_00 = 0x12970;
    iVar4 = fcn.000108ac(0x12970);
    if (iVar4 == 0) {
        uVar5 = fcn.00010380();
        fcn.00010370();
        uVar2 = in(0x1808);
        fcn.000102f0(noname_0_00,0x1808);
        while( true ) {
            iVar3 = in(0x1808);
            uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
            if ((uVar6 >> 0x17 & 1) != 0) break;
            func_0x000102e0();
        }
        fcn.000102f0(uVar6,0x1808);
        if ((uVar5 >> 9 & 1) == 0) {
            fcn.00010370();
        }
        else {
            fcn.00010360();
        }
    }
    fcn.000107b8(0x12960,0x14970);
    iVar4 = fcn.00011880();
    cVar1 = (**(iVar4 + 8))(0x115);
    if (cVar1 == '\x02') {
        fcn.00012820(0x12980);
    }
    iVar4 = fcn.00011880();
    cVar1 = (**(iVar4 + 8))(0x115);
    if (cVar1 == '\x03') {
        fcn.00012820(0x13850);
    }
    iVar4 = fcn.00011880();
    cVar1 = (**(iVar4 + 8))(0x115);
    if (cVar1 == '\x04') {
        fcn.00012820(0x13cf0);
    }
    iVar4 = fcn.00011880();
    cVar1 = (**(iVar4 + 8))(0x115);
    if (cVar1 == '\a') {
        fcn.00012820(0x13e70);
    }
    return;
}


/* fcn.0001056c @ 0x1056c */

ulong fcn.0001056c(int64_t arg1,int64_t arg2)

{
    ulong noname_1;
    int64_t in_R9;
    int64_t arg2_00;
    int64_t iStackX_8;
    int64_t iStackX_10;
    uchar auStackX_20 [8];
    uchar auStack_18 [16];
    
    iStackX_8 = arg1;
    iStackX_10 = arg2;
    fcn.00010818(76000,arg2,0x10670,in_R9);
    arg2_00 = 0;
    noname_1 = 8;
    (**(*0x14958 + 0x170))(0x200,8,0x106c8,0,0x12950,&iStackX_8);
    fcn.00010818(0x12890,noname_1,0x106d4,arg2_00);
    if (0x1ffff < *(*0x14950 + 8)) {
        (**(*0x14958 + 0x170))(0x200,8,0x106f8,0,0x12870,auStackX_20);
    }
    (**(*0x14958 + 0x170))(0x200,8,0x10774,0,0x12910,auStack_18);
    return 0;
}


/* fcn.00010818 @ 0x10818 */

int64_t fcn.00010818(int64_t arg1,ulong noname_1,ulong noname_2,int64_t arg2)

{
    int64_t iStackX_20;
    ulong in_stack_00000028;
    
    iStackX_20 = arg2;
    (**(*0x14958 + 0x50))(0x200,8,noname_2,0,&iStackX_20);
    (**(*0x14958 + 0xa8))(arg1,iStackX_20,in_stack_00000028);
    (**(*0x14958 + 0x68))(iStackX_20);
    return iStackX_20;
}


/* fcn.0001087c @ 0x1087c */

int64_t fcn.0001087c(void)

{
    if (*0x14968 == 0) {
        fcn.000107b8(0x128f0,0x14968);
    }
    return *0x14968;
}


/* fcn.000107b8 @ 0x107b8 */

ulong fcn.000107b8(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x14950;
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


/* fcn.000108ac @ 0x108ac */

void fcn.000108ac(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.0001087c();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x000108da:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x000108da;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010380 @ 0x10380 */

uint64_t fcn.00010380(void)

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


/* fcn.00010370 @ 0x10370 */

void fcn.00010370(void)

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


/* fcn.00010360 @ 0x10360 */

void fcn.00010360(void)

{
    return;
}


/* fcn.00011880 @ 0x11880 */

int64_t fcn.00011880(void)

{
    if (*0x149c8 == 0) {
        (**(*0x14958 + 0x140))(0x12880,0,0x149c8);
    }
    return *0x149c8;
}


/* fcn.00012820 @ 0x12820 */

ulong fcn.00012820(int64_t arg1)

{
    ulong uVar1;
    ulong auStackX_8 [4];
    
    if (arg1 == 0) {
        uVar1 = 0x8000000000000002;
    }
    else {
        auStackX_8[0] = 0;
        uVar1 = (**(*0x14958 + 0x80))(auStackX_8,0x12860,0,arg1);
    }
    return uVar1;
}


/* fcn.00011a7c @ 0x11a7c */

void fcn.00011a7c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int16_t *arg2_00;
    bool bVar4;
    int64_t iVar5;
    int16_t *piVar6;
    int64_t *arg1_00;
    ulong *puVar7;
    ulong uVar8;
    uint64_t noname_0;
    int64_t *noname_0_00;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t *piVar11;
    uint64_t uVar12;
    int64_t *piVar13;
    uint32_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    int64_t iStackX_10;
    
    if ((arg2 != 0) && (uVar17 = 0, arg3 != 0)) {
        piVar11 = *arg1;
        if ((piVar11 == NULL) || (*arg2 == 0)) {
            puVar7 = fcn.00011970(arg1,arg4 * 0x28,arg3);
            *arg1 = puVar7;
            if ((puVar7 != NULL) && (*arg2 = arg4, arg4 != 0)) {
                piVar11 = arg3 + 0x18;
                uVar17 = 0;
                do {
                    arg2_00 = piVar11[-3];
                    iVar1 = *arg2_00;
                    piVar6 = arg2_00;
                    uVar12 = 0;
                    while (iVar1 != 0) {
                        piVar6 = piVar6 + 1;
                        uVar12 = uVar12 + 1;
                        iVar1 = *piVar6;
                    }
                    uVar8 = fcn.00011970(arg1,uVar12 * 2 + 2,arg2_00);
                    *puVar7 = uVar8;
                    iVar5 = piVar11[-2];
                    iVar10 = fcn.00011940();
                    if ((iVar10 != 0) && (iVar10 != iVar5)) {
                        arg1 = iVar10;
                        iVar10 = section..text(iVar10,iVar5,0x10);
                    }
                    puVar7[1] = iVar10;
                    if (puVar7[3] != 0) {
                        uVar8 = fcn.00011970(arg1,piVar11[1] * 0x18,*piVar11);
                        puVar7[3] = uVar8;
                    }
                    uVar17 = uVar17 + 1;
                    puVar7 = puVar7 + 5;
                    piVar11 = piVar11 + 5;
                } while (uVar17 < *arg2);
            }
        }
        else {
            if (*arg2 != 0) {
                do {
                    uVar12 = 0;
                    if (arg4 != 0) {
                        piVar13 = arg3 + 0x18;
                        do {
                            uVar14 = 0;
                            for (piVar6 = *piVar11; *piVar6 != 0; piVar6 = piVar6 + 1) {
                                uVar14 = uVar14 + 1;
                            }
                            iVar5 = fcn.00011a40(*piVar11,piVar13[-3],uVar14);
                            if (iVar5 == 0) {
                                piVar2 = piVar13[-2];
                                if ((*piVar11[1] == *piVar2) && (piVar11[1][1] == piVar2[1])) {
                                    if (piVar11[3] == 0) {
                                        if (*piVar13 != 0) {
                                            iVar5 = fcn.00011970(piVar2,piVar13[1] * 0x18,*piVar13);
                                            piVar11[3] = iVar5;
                                            if (iVar5 == 0) {
                                                return;
                                            }
                                            piVar11[4] = piVar13[1];
                                        }
                                    }
                                    else if (*piVar13 != 0) {
                                        iVar5 = piVar13[1] + piVar11[4];
                                        iVar5 = fcn.000119b0(iVar5,piVar11[4] * 0x18,iVar5 * 0x18,piVar11[3]);
                                        uVar15 = 0;
                                        piVar11[3] = iVar5;
                                        if (iVar5 == 0) {
                                            return;
                                        }
                                        iVar5 = piVar11[4] + piVar13[1];
                                        iStackX_10 = 0;
                                        noname_0 = 0;
                                        if (piVar13[1] != 0) {
                                            uVar16 = uVar15;
                                            do {
                                                noname_0 = 0;
                                                bVar4 = false;
                                                if (piVar11[4] == 0) {
code_r0x00011c2c:
                                                    *(piVar11[3] + (piVar11[4] + iStackX_10) * 0x18) =
                                                         *(uVar15 + *piVar13);
                                                    *(piVar11[3] + 8 + (piVar11[4] + iStackX_10) * 0x18) =
                                                         *(uVar15 + 8 + *piVar13);
                                                    iVar10 = piVar11[4] + iStackX_10;
                                                    iStackX_10 = iStackX_10 + 1;
                                                    noname_0 = piVar11[3];
                                                    *(noname_0 + 0x10 + iVar10 * 0x18) = *(uVar15 + 0x10 + *piVar13);
                                                }
                                                else {
                                                    uVar9 = noname_0;
                                                    do {
                                                        iVar10 = *piVar13;
                                                        iVar3 = piVar11[3];
                                                        if ((*(noname_0 + iVar3) == *(uVar15 + iVar10)) &&
                                                           (*(noname_0 + 8 + iVar3) == *(uVar15 + 8 + iVar10))) {
                                                            bVar4 = true;
                                                            *(noname_0 + 0x10 + iVar3) = *(uVar15 + 0x10 + iVar10);
                                                            iVar5 = iVar5 + -1;
                                                        }
                                                        uVar9 = uVar9 + 1;
                                                        noname_0 = noname_0 + 0x18;
                                                    } while (uVar9 < piVar11[4]);
                                                    if (!bVar4) goto code_r0x00011c2c;
                                                }
                                                uVar16 = uVar16 + 1;
                                                uVar15 = uVar15 + 0x18;
                                            } while (uVar16 < piVar13[1]);
                                        }
                                        if (iVar5 != piVar11[4] + piVar13[1]) {
                                            iVar10 = fcn.000119b0(noname_0,(piVar11[4] + piVar13[1]) * 0x18,
                                                                  iVar5 * 0x18,piVar11[3]);
                                            piVar11[3] = iVar10;
                                            if (iVar10 == 0) {
                                                return;
                                            }
                                        }
                                        piVar11[4] = iVar5;
                                    }
                                }
                            }
                            uVar12 = uVar12 + 1;
                            piVar13 = piVar13 + 5;
                        } while (uVar12 < arg4);
                    }
                    uVar17 = uVar17 + 1;
                    piVar11 = piVar11 + 5;
                } while (uVar17 < *arg2);
            }
            uVar17 = 0;
            if (arg4 != 0) {
                piVar11 = arg3 + 0x18;
                do {
                    uVar12 = 0;
                    if ((*piVar11 != 0) && (piVar11[1] != 0)) {
                        uVar15 = *arg2;
                        piVar13 = *arg1;
                        if (uVar15 != 0) {
                            do {
                                uVar14 = 0;
                                for (piVar6 = *piVar13; *piVar6 != 0; piVar6 = piVar6 + 1) {
                                    uVar14 = uVar14 + 1;
                                }
                                iVar5 = fcn.00011a40(*piVar13,piVar11[-3],uVar14);
                                if (iVar5 == 0) {
                                    if ((*piVar13[1] == *piVar11[-2]) && (piVar13[1][1] == piVar11[-2][1])) break;
                                }
                                uVar12 = uVar12 + 1;
                                piVar13 = piVar13 + 5;
                            } while (uVar12 < uVar15);
                        }
                        if (uVar12 == uVar15) {
                            iVar5 = fcn.000119b0(arg1,uVar15 * 0x28,uVar15 * 0x28 + 0x28,*arg1);
                            iVar10 = 0;
                            *arg1 = iVar5;
                            if (iVar5 == 0) {
                                return;
                            }
                            noname_0_00 = *arg2;
                            piVar13 = piVar11 + -3;
                            piVar2 = iVar5 + noname_0_00 * 0x28;
                            if (piVar2 != piVar13) {
                                noname_0_00 = piVar2;
                                section..text(piVar2,piVar13,0x28);
                            }
                            for (piVar6 = *piVar13; *piVar6 != 0; piVar6 = piVar6 + 1) {
                                iVar10 = iVar10 + 1;
                            }
                            iVar5 = fcn.00011970(noname_0_00,iVar10 * 2 + 2,*piVar13);
                            *piVar2 = iVar5;
                            piVar13 = piVar11[-2];
                            arg1_00 = fcn.00011940();
                            if ((arg1_00 != NULL) && (arg1_00 != piVar13)) {
                                noname_0_00 = arg1_00;
                                arg1_00 = section..text(arg1_00,piVar13,0x10);
                            }
                            piVar2[1] = arg1_00;
                            iVar5 = fcn.00011970(noname_0_00,piVar11[1] * 0x18,*piVar11);
                            *arg2 = *arg2 + 1;
                            piVar2[3] = iVar5;
                        }
                    }
                    uVar17 = uVar17 + 1;
                    piVar11 = piVar11 + 5;
                } while (uVar17 < arg4);
            }
        }
    }
    return;
}


/* fcn.00011818 @ 0x11818 */

uint32_t fcn.00011818(void)

{
    uint32_t auStackX_8 [8];
    
    fcn.00010330(1,auStackX_8,0,0);
    return auStackX_8[0] & 0xfff0ff0;
}


/* fcn.00010330 @ 0x10330 */

uint64_t fcn.00010330(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.000121c0 @ 0x121c0 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_10h

uint64_t fcn.000121c0(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    int64_t iVar1;
    uint64_t uVar2;
    int16_t *piVar3;
    int64_t *piVar4;
    int64_t arg3;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t iStack_48;
    int64_t iStack_40;
    int64_t var_10h;
    int64_t var_bp_8h;
    
    uVar6 = 0;
    uVar2 = uVar6;
    if (arg2 != 0) {
        piVar4 = arg1 + 0x20;
        uVar7 = uVar6;
        do {
            arg2_00 = piVar4[-1];
            if (arg2_00 != 0) {
                arg3 = *piVar4 * 0x18;
                uVar5 = uVar6;
                for (piVar3 = piVar4[-4]; *piVar3 != 0; piVar3 = piVar3 + 1) {
                    uVar5 = uVar5 + 1;
                }
                iVar1 = fcn.00011a40(0x14898,piVar4[-4],uVar5);
                if (iVar1 == 0) {
                    uVar2 = (**(*0x14958 + 0x40))(4,arg3,&iStackX_10);
                    if (uVar2 < 0) {
                        return uVar2;
                    }
                    if ((arg3 != 0) && (iStackX_10 != arg2_00)) {
                        section..text(iStackX_10,arg2_00,arg3);
                    }
                    fcn.000118e8(0x244,iStackX_10);
                    fcn.000118e8(0x245,*piVar4);
                }
                uVar5 = uVar6;
                for (piVar3 = piVar4[-4]; *piVar3 != 0; piVar3 = piVar3 + 1) {
                    uVar5 = uVar5 + 1;
                }
                iVar1 = fcn.00011a40(0x148a8,piVar4[-4],uVar5);
                if (iVar1 == 0) {
                    uVar2 = (**(*0x14958 + 0x40))(4,arg3,&iStackX_18);
                    if (uVar2 < 0) {
                        return uVar2;
                    }
                    if ((arg3 != 0) && (iStackX_18 != arg2_00)) {
                        section..text(iStackX_18,arg2_00,arg3);
                    }
                    fcn.000118e8(0x242,iStackX_18);
                    fcn.000118e8(0x243,*piVar4);
                }
                uVar5 = uVar6;
                for (piVar3 = piVar4[-4]; *piVar3 != 0; piVar3 = piVar3 + 1) {
                    uVar5 = uVar5 + 1;
                }
                iVar1 = fcn.00011a40(0x148b8,piVar4[-4],uVar5);
                if (iVar1 == 0) {
                    uVar2 = (**(*0x14958 + 0x40))(4,arg3,&iStackX_20);
                    if (uVar2 < 0) {
                        return uVar2;
                    }
                    if ((arg3 != 0) && (iStackX_20 != arg2_00)) {
                        section..text(iStackX_20,arg2_00,arg3);
                    }
                    fcn.000118e8(0x238,iStackX_20);
                    fcn.000118e8(0x239,*piVar4);
                }
                uVar5 = uVar6;
                for (piVar3 = piVar4[-4]; *piVar3 != 0; piVar3 = piVar3 + 1) {
                    uVar5 = uVar5 + 1;
                }
                iVar1 = fcn.00011a40(0x14880,piVar4[-4],uVar5);
                if (iVar1 == 0) {
                    uVar2 = (**(*0x14958 + 0x40))(4,arg3,&iStack_48);
                    if (uVar2 < 0) {
                        return uVar2;
                    }
                    if ((arg3 != 0) && (iStack_48 != arg2_00)) {
                        section..text(iStack_48,arg2_00,arg3);
                    }
                    fcn.000118e8(0x23e,iStack_48);
                    fcn.000118e8(0x23f,*piVar4);
                }
                uVar5 = uVar6;
                for (piVar3 = piVar4[-4]; *piVar3 != 0; piVar3 = piVar3 + 1) {
                    uVar5 = uVar5 + 1;
                }
                iVar1 = fcn.00011a40(0x148d0,piVar4[-4],uVar5);
                if (iVar1 == 0) {
                    uVar2 = (**(*0x14958 + 0x40))(4,arg3,&iStack_40);
                    if (uVar2 < 0) {
                        return uVar2;
                    }
                    if ((arg3 != 0) && (iStack_40 != arg2_00)) {
                        section..text(iStack_40,arg2_00,arg3);
                    }
                    fcn.000118e8(0x23c,iStack_40);
                    fcn.000118e8(0x23d,*piVar4);
                }
            }
            uVar7 = uVar7 + 1;
            piVar4 = piVar4 + 5;
        } while (uVar7 < arg2);
    }
    return uVar2;
}


/* fcn.00011f48 @ 0x11f48 */

void fcn.00011f48(int64_t arg1,uint32_t arg2)

{
    uint in_register_00000014;
    int64_t iVar1;
    uint64_t uVar2;
    
    uVar2 = 0;
    if (*CONCAT44(in_register_00000014,arg2) != 0) {
        iVar1 = 0;
        do {
            if (*(iVar1 + *arg1) != 0) {
                (**(*0x14958 + 0x48))();
            }
            if (*(*arg1 + 8 + iVar1) != 0) {
                (**(*0x14958 + 0x48))();
            }
            if (*(*arg1 + 0x18 + iVar1) != 0) {
                (**(*0x14958 + 0x48))();
            }
            uVar2 = uVar2 + 1;
            iVar1 = iVar1 + 0x28;
        } while (uVar2 < *CONCAT44(in_register_00000014,arg2));
    }
    if (*arg1 != 0) {
        (**(*0x14958 + 0x48))();
        *arg1 = 0;
        *CONCAT44(in_register_00000014,arg2) = 0;
    }
    return;
}


/* fcn.000108f8 @ 0x108f8 */

void fcn.000108f8(void)

{
    uint16_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t arg4;
    int64_t var_10h;
    int64_t var_bp_18h;
    
    var_bp_18h = 0;
    var_10h = 0;
    iVar3 = fcn.00011880();
    uVar1 = (**(iVar3 + 0x10))(0x1d);
    if (uVar1 < 0x17) {
        iVar3 = 5;
        if (uVar1 == 0x16) {
            fcn.00011a7c(&var_bp_18h,&var_10h,0x13100,5);
            fcn.00011a7c(&var_bp_18h,&var_10h,0x12ad0,1);
            iVar4 = 2;
            iVar3 = 0x13360;
code_r0x00010b46:
            fcn.00011a7c(&var_bp_18h,&var_10h,iVar3,iVar4);
            iVar3 = 0x13280;
code_r0x00010b5a:
            fcn.00011a7c(&var_bp_18h,&var_10h,iVar3,1);
            iVar4 = 0x12e00;
            goto code_r0x00010b71;
        }
        if ((uVar1 == 5) || (uVar1 == 0xe)) {
            fcn.00011a7c(&var_bp_18h,&var_10h,0x13100,5);
            iVar3 = 0x12dd0;
            goto code_r0x00010b5a;
        }
        arg4 = 2;
        if (uVar1 == 0x10) {
            iVar4 = 0x13100;
        }
        else {
            if (uVar1 == 0x12) {
                fcn.00011a7c(&var_bp_18h,&var_10h,0x13100,5);
                arg4 = 1;
                iVar3 = 0x12ff0;
code_r0x000109c9:
                fcn.00011a7c(&var_bp_18h,&var_10h,iVar3,arg4);
                iVar4 = 0x13280;
                goto code_r0x00010b71;
            }
            if (uVar1 == 0x13) {
                fcn.00011a7c(&var_bp_18h,&var_10h,0x13100,5);
                iVar4 = 0x12ea0;
                iVar3 = arg4;
            }
            else {
                if (uVar1 == 0x14) {
                    fcn.00011a7c(&var_bp_18h,&var_10h,0x13100,5);
                    fcn.00011a7c(&var_bp_18h,&var_10h,0x12ff0,1);
                    iVar3 = 0x12d80;
                    goto code_r0x000109c9;
                }
                if (uVar1 != 0x15) goto code_r0x00010b81;
                fcn.00011a7c(&var_bp_18h,&var_10h,0x13100,5);
                iVar4 = 0x13020;
                iVar3 = 2;
            }
        }
    }
    else {
        if (uVar1 == 0x17) {
            fcn.00011a7c(&var_bp_18h,&var_10h,0x13100,5);
            iVar4 = 1;
            iVar3 = 0x12ff0;
            goto code_r0x00010b46;
        }
        if (uVar1 < 0x19) goto code_r0x00010b81;
        if (0x1a < uVar1) {
            if (uVar1 == 0x1b) {
                fcn.00011a7c(&var_bp_18h,&var_10h,0x13100,5);
                iVar3 = 2;
                iVar4 = 0x12a20;
                goto code_r0x00010b74;
            }
            if (uVar1 != 0x1c) {
                if (uVar1 == 0x1d) goto code_r0x00010ad6;
                if (uVar1 != 0x1e && uVar1 != 0x1f) goto code_r0x00010b81;
            }
            fcn.00011a7c(&var_bp_18h,&var_10h,0x12aa0,1);
        }
code_r0x00010ad6:
        fcn.00011a7c(&var_bp_18h,&var_10h,0x13100,5);
        iVar4 = 0x133b0;
code_r0x00010b71:
        iVar3 = 1;
    }
code_r0x00010b74:
    fcn.00011a7c(&var_bp_18h,&var_10h,iVar4,iVar3);
code_r0x00010b81:
    iVar2 = fcn.00011818();
    if (iVar2 == 0xb06a0) {
        fcn.00011a7c(&var_bp_18h,&var_10h,0x13330,1);
    }
    if (*0xc00000fc == '\x04') {
        fcn.00011a7c(&var_bp_18h,&var_10h,0x12bc0,1);
    }
    if (*0x14858 == -1) {
        *0x14858 = *0xc00f8008;
    }
    if (*0x14858 != '\0') {
        fcn.00011a7c(&var_bp_18h,&var_10h,0x12f40,1);
    }
    fcn.000121c0(var_bp_18h,var_10h);
    fcn.00011f48(&var_bp_18h,&var_10h);
    return;
}


/* fcn.00010c48 @ 0x10c48 */

ulong fcn.00010c48(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    uint32_t *puVar1;
    uint64_t uVar2;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    if (((arg2 != 0) && (arg3 != 0)) && (*puVar1 < 8)) {
        uVar2 = (arg3 & 0xffffffffU) / 0x14;
        if (*puVar1 + uVar2 < 9) {
            if (uVar2 != 0) {
                do {
                    if (*arg2 == 0) {
                        (**(*0x14958 + 0x160))(*puVar1 * 0x14 + 0x149d0,arg2,0x14);
                        *puVar1 = *puVar1 + 1;
                    }
                    arg2 = arg2 + 0x14;
                    uVar2 = uVar2 - 1;
                } while (uVar2 != 0);
            }
            return 0;
        }
    }
    return 0x8000000000000002;
}


/* fcn.000118e8 @ 0x118e8 */

void fcn.000118e8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = fcn.00011880();
    //WARNING: Could not recover jumptable at 0x0001190d. Too many branches
    //WARNING: Treating indirect jump as call
    (**(iVar1 + 0x90))(arg1,arg2);
    return;
}


/* fcn.000118bc @ 0x118bc */

void fcn.000118bc(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = fcn.00011880();
    //WARNING: Could not recover jumptable at 0x000118df. Too many branches
    //WARNING: Treating indirect jump as call
    (**(iVar1 + 0x88))(arg1,arg2 & 0xffffffff);
    return;
}


/* fcn.00011fec @ 0x11fec */

uint64_t fcn.00011fec(int64_t arg1)

{
    uint16_t uVar1;
    int64_t iVar2;
    char cVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint8_t uStackX_10;
    
    uVar5 = arg1 & 0xff;
    cVar3 = fcn.00011844();
    uVar6 = 0x1c;
    if (cVar3 == '\x03') {
code_r0x00012085:
        uVar4 = 0xc;
code_r0x0001208a:
        if (uVar5 < uVar4) {
            iVar2 = (uVar5 >> 2) * 3;
            uStackX_10 = *((*(iVar2 + 0x14861) | 0xfd00) << 0x10) >> ((uVar5 - *(iVar2 + 0x14862)) * '\x04' & 0x3fU) & 7
            ;
        }
    }
    else {
        if (cVar3 == '\x04') {
            uVar4 = 0x1c;
            goto code_r0x0001208a;
        }
        if (cVar3 == '\x05') goto code_r0x00012085;
    }
    if (0xe < uVar5) {
        if (uVar5 < 0x16) {
            if (uVar5 != 0x15) {
                if (uVar5 == 0xf) goto code_r0x000120f7;
                if ((((uVar5 != 0x10) && (uVar5 != 0x11)) && (uVar5 != 0x12)) && ((uVar5 != 0x13 && (uVar5 != 0x14))))
                goto code_r0x000121b1;
            }
        }
        else if ((uVar5 != 0x16) && (uVar5 != 0x17)) goto code_r0x000121b1;
        uVar6 = 0x1b;
        goto code_r0x00012133;
    }
    if (uVar5 == 0xe) {
code_r0x000120f7:
        uVar6 = 0x1d;
    }
    else {
        if (uVar5 < 8) {
            if ((((uVar5 == 7) || (uVar5 == 0)) || ((uVar5 == 1 || (((uVar5 == 2 || (uVar5 == 3)) || (uVar5 == 4))))))
               || ((uVar5 == 5 || (uVar5 == 6)))) goto code_r0x00012133;
        }
        else if ((uVar5 == 8) ||
                (((uVar5 == 9 || (uVar5 == 10)) || ((uVar5 == 0xb || ((uVar5 == 0xc || (uVar5 == 0xd))))))))
        goto code_r0x000120f7;
code_r0x000121b1:
        uVar6 = 0xff;
    }
code_r0x00012133:
    uVar5 = (uVar6 & 0x1f) << 3;
    uVar1 = *((uVar5 | uStackX_10 & 7) * 0x1000 + 0xc0000000);
    if ((uVar1 == 0xffff) || (uVar1 = *((uVar5 | uStackX_10 & 7) * 0x1000 + 0xc000001a), (uVar1 & 0x40) == 0)) {
        uVar5 = uVar1 & 0xffffffffffffff00;
    }
    else {
        uVar5 = CONCAT71(uVar1 >> 8,1);
    }
    return uVar5;
}


/* fcn.00011914 @ 0x11914 */

void fcn.00011914(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = fcn.00011880();
    //WARNING: Could not recover jumptable at 0x00011937. Too many branches
    //WARNING: Treating indirect jump as call
    (**(iVar1 + 0xa0))(arg1,arg2);
    return;
}


/* fcn.000124c0 @ 0x124c0 */

void fcn.000124c0(void)

{
    char cVar1;
    int64_t iVar2;
    uint uStackX_8;
    int8_t var_17h;
    uint auStackX_10 [2];
    uint auStackX_18 [2];
    ulong uStackX_20;
    int64_t var_c90h;
    int64_t var_c98h;
    int64_t var_ca0h;
    int64_t var_ca8h;
    ushort uStack_d58;
    ushort uStack_d56;
    uchar uStack_d54;
    uchar uStack_d53;
    uchar uStack_d52;
    uchar uStack_d51;
    ushort uStack_d50;
    uchar uStack_d4e;
    uchar uStack_d4d;
    ushort uStack_d4c;
    uchar uStack_d4a;
    ulong uStack_d48;
    ulong uStack_d40;
    ushort uStack_d38;
    uchar uStack_d36;
    uchar uStack_d35;
    uchar uStack_d34;
    uint8_t uStack_d33;
    uchar uStack_d32;
    uchar uStack_cea;
    uchar uStack_cd0;
    uchar uStack_ccf;
    uchar uStack_ccc;
    uchar auStack_cc8 [87];
    uchar uStack_c71;
    int8_t var_62h;
    int8_t var_bp_48h;
    int8_t var_47h;
    int8_t var_44h;
    int64_t var_bp_40h;
    
    fcn.00010390(&uStack_d38,0x6d,0);
    uStack_d48 = 0x6d;
    iVar2 = (**(*0x14960 + 0x48))(L"SetupVolatileData",0x128d0,auStackX_18,&uStack_d48,&uStack_d38);
    if (-1 < iVar2) {
        fcn.00010390(&uStack_d58,0xf,0);
        uStack_d40 = 0xf;
        iVar2 = (**(*0x14960 + 0x48))(L"BoardInfoSetup",0x128c0,&uStackX_8,&uStack_d40,&uStack_d58);
        if (iVar2 < 0) {
            uStackX_8 = 3;
        }
        uStack_d33 = ~(*0xc00000e4 >> 0x17) & 1;
        iVar2 = fcn.00011880();
        uStack_d54 = (**(iVar2 + 0x30))(0x45);
        iVar2 = fcn.00011880();
        uStack_d53 = (**(iVar2 + 8))(0x3a);
        iVar2 = fcn.00011880();
        uStack_d4a = (**(iVar2 + 8))(0x44);
        iVar2 = fcn.00011880();
        uStack_d52 = (**(iVar2 + 8))(0x42);
        iVar2 = fcn.00011880();
        uStack_d51 = (**(iVar2 + 8))(0x43);
        iVar2 = fcn.00011880();
        uStack_d50 = (**(iVar2 + 0x10))(0x1d);
        iVar2 = fcn.00011880();
        uStack_d4e = (**(iVar2 + 0x30))(0x11a);
        iVar2 = fcn.00011880();
        uStack_d4d = (**(iVar2 + 8))(0xf8);
        iVar2 = fcn.00011880();
        uStack_d36 = (**(iVar2 + 8))(0xf7);
        iVar2 = fcn.00011880();
        uStack_d58 = (**(iVar2 + 0x10))(0x21);
        iVar2 = fcn.00011880();
        uStack_d56 = (**(iVar2 + 0x10))(0x12);
        iVar2 = fcn.00011880();
        uStack_d35 = (**(iVar2 + 8))(0xf9);
        iVar2 = fcn.00011880();
        uStack_d34 = (**(iVar2 + 8))(0x23);
        if (*0x149c0 == 0) {
            (**(*0x14958 + 0x140))(0x128b0,0,0x149c0);
        }
        uStack_d38 = (**(*0x149c0 + 8))();
        uStack_d32 = 9;
        if ((*0xc00f8002 & 0xffe0) != 0x7a00) {
            uStack_d32 = 7;
        }
        iVar2 = fcn.00011880();
        uStack_cea = (**(iVar2 + 0x30))(0x37);
        iVar2 = fcn.00011880();
        uStack_d4c = (**(iVar2 + 0x10))(0x35);
        iVar2 = fcn.00011880();
        uStack_cd0 = (**(iVar2 + 8))(0x11e);
        iVar2 = fcn.00011880();
        cVar1 = (**(iVar2 + 0x30))(0x14a);
        if (cVar1 != '\0') {
            iVar2 = fcn.00011880();
            uStack_ccf = (**(iVar2 + 8))(0x12d);
        }
        iVar2 = fcn.00011880();
        cVar1 = (**(iVar2 + 0x30))(0x14b);
        uStack_ccc = cVar1 != '\0';
        iVar2 = fcn.00011880();
        cVar1 = (**(iVar2 + 0x30))(0x45);
        if (cVar1 != '\0') {
            uStackX_20 = 0xca9;
            iVar2 = (**(*0x14960 + 0x48))(L"Setup",0x128d0,auStackX_10,&uStackX_20,auStack_cc8);
            if (-1 < iVar2) {
                iVar2 = fcn.00011880();
                uStack_c71 = (**(iVar2 + 8))(0x44);
                (**(*0x14960 + 0x58))(L"Setup",0x128d0,auStackX_10[0],uStackX_20,auStack_cc8);
            }
        }
        auStackX_18[0] = 2;
        iVar2 = (**(*0x14960 + 0x58))(L"SetupVolatileData",0x128d0,2,0x6d,&uStack_d38);
        if (-1 < iVar2) {
            (**(*0x14960 + 0x58))(L"BoardInfoSetup",0x128c0,uStackX_8,0xf,&uStack_d58);
        }
    }
    return;
}


/* fcn.000112b4 @ 0x112b4 */

ulong fcn.000112b4(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    uint32_t *puVar1;
    uint64_t uVar2;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    if (((arg2 != 0) && (arg3 != 0)) && (*puVar1 < 8)) {
        uVar2 = (arg3 & 0xffffffffU) / 0x14;
        if (*puVar1 + uVar2 < 9) {
            if (uVar2 != 0) {
                do {
                    if (*arg2 == 0) {
                        (**(*0x14958 + 0x160))(*puVar1 * 0x14 + 0x14b10,arg2,0x14);
                        *puVar1 = *puVar1 + 1;
                    }
                    arg2 = arg2 + 0x14;
                    uVar2 = uVar2 - 1;
                } while (uVar2 != 0);
            }
            return 0;
        }
    }
    return 0x8000000000000002;
}


/* fcn.000110f4 @ 0x110f4 */

void fcn.000110f4(void)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t arg2;
    unkbyte7 Var3;
    
    fcn.000118bc(0x46,0x90e0007);
    uVar2 = 0x90e0008;
    fcn.000118bc(0x41,0x90e0008);
    fcn.00011914(0x101,CONCAT71(uVar2 >> 8,1));
    iVar1 = fcn.00011880();
    (**(iVar1 + 0x78))(0x100,0x6e);
    iVar1 = fcn.00011880();
    (**(iVar1 + 0x78))(0xff);
    fcn.00011914(0x119,0);
    iVar1 = fcn.00011880();
    (**(iVar1 + 0x78))(0xf,3);
    iVar1 = fcn.00011880();
    (**(iVar1 + 0x78))(0x102,1);
    iVar1 = fcn.00011880();
    (**(iVar1 + 0x78))(0x103);
    fcn.00011914(0x5b,0);
    fcn.00011914(0x4d,0);
    fcn.00011914(0x80,0);
    fcn.00011914(0x82,0);
    fcn.00011914(0x81,0);
    iVar1 = fcn.00011880();
    (**(iVar1 + 0x78))(0x162);
    uVar2 = 0;
    fcn.000118bc(0x118,0);
    arg2 = CONCAT71(uVar2 >> 8,1);
    fcn.00011914(0x2b,arg2);
    iVar1 = fcn.00011880();
    uVar2 = CONCAT71(arg2 >> 8,1);
    (**(iVar1 + 0x78))(0x3b,uVar2);
    iVar1 = fcn.00011880();
    uVar2 = CONCAT71(uVar2 >> 8,1);
    (**(iVar1 + 0x78))(0x3c,uVar2);
    iVar1 = fcn.00011880();
    uVar2 = CONCAT71(uVar2 >> 8,1);
    (**(iVar1 + 0x78))(0x3d,uVar2);
    iVar1 = fcn.00011880();
    uVar2 = CONCAT71(uVar2 >> 8,1);
    (**(iVar1 + 0x78))(0x3e,uVar2);
    iVar1 = fcn.00011880();
    uVar2 = CONCAT71(uVar2 >> 8,1);
    (**(iVar1 + 0x78))(0x3f,uVar2);
    iVar1 = fcn.00011880();
    uVar2 = CONCAT71(uVar2 >> 8,1);
    (**(iVar1 + 0x78))(0x40,uVar2);
    iVar1 = CONCAT71(uVar2 >> 8,1);
    fcn.00011914(0x14f,iVar1);
    iVar1 = CONCAT71(iVar1 >> 8,1);
    fcn.00011914(0x14e,iVar1);
    iVar1 = CONCAT71(iVar1 >> 8,1);
    fcn.00011914(0x14c,iVar1);
    iVar1 = CONCAT71(iVar1 >> 8,1);
    fcn.00011914(0x14d,iVar1);
    iVar1 = CONCAT71(iVar1 >> 8,1);
    fcn.00011914(0x116,iVar1);
    iVar1 = CONCAT71(iVar1 >> 8,1);
    fcn.00011914(0x150,iVar1);
    fcn.00011914(0xc,CONCAT71(iVar1 >> 8,1));
    uVar2 = 0x9050003;
    fcn.000118bc(0xfa,0x9050003);
    iVar1 = CONCAT71(uVar2 >> 8,1);
    fcn.00011914(0xd,iVar1);
    Var3 = iVar1 >> 8;
    iVar1 = fcn.00011880();
    //WARNING: Could not recover jumptable at 0x00011937. Too many branches
    //WARNING: Treating indirect jump as call
    (**(iVar1 + 0xa0))(0xe,CONCAT71(Var3,1));
    return;
}


/* fcn.00011940 @ 0x11940 */

ulong fcn.00011940(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x14958 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 9696 named .text
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


/* fcn.00011a40 @ 0x11a40 */

int64_t fcn.00011a40(int64_t arg1,uint32_t arg2,uint32_t arg3)

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


/* fcn.00011970 @ 0x11970 */

void fcn.00011970(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00011940();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.000119b0 @ 0x119b0 */

int64_t fcn.000119b0(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00011940(noname_0,arg2);
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
            (**(*0x14958 + 0x48))(arg3);
        }
    }
    return arg1_00;
}


/* fcn.00011844 @ 0x11844 */

void fcn.00011844(void)

{
    if (*0x14859 == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x14859 = '\x05';
        }
        else {
            *0x14859 = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


/* fcn.00010390 @ 0x10390 */

int64_t fcn.00010390(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


