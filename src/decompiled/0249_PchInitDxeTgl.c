// decompiled by r2ghidra: 0249_PchInitDxeTgl.pe32
// functions: 56

/* entry0 @ 0x10474 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.00010490(arg1,arg2);
    fcn.000107a8(arg1,arg2);
    return;
}


/* fcn.00010490 @ 0x10490 */

ulong fcn.00010490(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0;
    int64_t *piVar6;
    ulong *puStackX_8;
    ulong uStackX_10;
    
    *0x150c8 = *(arg2 + 0x60);
    *0x150c0 = arg2;
    puStackX_8 = arg1;
    fcn.00014568();
    noname_0 = 0x15010;
    iVar3 = fcn.00014598(0x15010);
    if (iVar3 == 0) {
        uVar4 = fcn.000103b0();
        fcn.00010360();
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
            fcn.00010360();
        }
        else {
            fcn.00010350();
        }
    }
    fcn.000102f0(1,0,0,&puStackX_8);
    (**(*0x150c8 + 0x140))(0x14900,0,0x150d8);
    iVar3 = (**(*0x150c8 + 0x140))(0x14990,0);
    *0x150e0 = '\0';
    if (-1 < iVar3) {
        uStackX_10 = 0;
        (**puStackX_8)(puStackX_8,0x150e0);
        if (*0x150e0 != '\0') {
            (*puStackX_8[1])(puStackX_8,&uStackX_10);
        }
    }
    uVar4 = 0;
    if (*(*0x150c0 + 0x68) != 0) {
        piVar6 = *(*0x150c0 + 0x70);
        do {
            if ((*0x149a0 == *piVar6) && (*0x149a8 == piVar6[1])) {
                *0x150e8 = (*(*0x150c0 + 0x70))[uVar4 * 3 + 2];
                return 0;
            }
            uVar4 = uVar4 + 1;
            piVar6 = piVar6 + 3;
        } while (uVar4 < *(*0x150c0 + 0x68));
    }
    *0x150e8 = 0;
    return 0x800000000000000e;
}


/* fcn.000107a8 @ 0x107a8 */

ulong fcn.000107a8(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t arg1_00;
    ulong uVar2;
    ulong noname_0;
    uint8_t uVar3;
    ulong uStackX_8;
    int64_t iStackX_10;
    uchar auStackX_18 [8];
    uchar auStackX_20 [8];
    uchar auStack_28 [8];
    uchar auStack_20 [16];
    
    iStackX_10 = arg2;
    *0x15108 = fcn.00014598(0x149b0);
    *0x15108 = *0x15108 + 0x18;
    uVar1 = fcn.00011660(arg1);
    (**(*0x150c8 + 0x50))(0x200,8,0x10698,0,&iStackX_10);
    (**(*0x150c8 + 0xa8))(0x14910,iStackX_10,auStackX_18);
    (**(*0x150c8 + 0x68))(iStackX_10);
    if (0x1ffff < *(*0x150c0 + 8)) {
        (**(*0x150c8 + 0x170))(0x200,8,0x109b8,0,0x14870,auStackX_20);
    }
    (**(*0x150c8 + 0x50))(0x201,8,0x109b0,0,auStack_28);
    if (0x1ffff < *(*0x150c0 + 8)) {
        (**(*0x150c8 + 0x170))(0x200,8,0x10994,0,0x14890,auStack_20);
    }
    uVar3 = 0;
    do {
        if (*(uVar3 * 0x1c + 0x35c + *0x15108) - 2U < 2) {
            uStackX_8 = 0;
            *0x149e4 = *(*(uVar3 * 8 + 0x14f44) + 2);
            *0x149d0 = uVar3 * 0x10000 + 0x5432;
            noname_0 = 0x149c0;
            *0x149e0 = uVar3 + 0x30;
            *0x149e6 = uVar3;
            arg1_00 = fcn.0001216c(0x149c0);
            uVar2 = 0;
            if (arg1_00 != 0) {
                uVar2 = fcn.00014404(noname_0,arg1_00,0x149c0);
            }
            (**(*0x150c8 + 0x148))(&uStackX_8,0x148c0,uVar2,0);
        }
        uVar3 = uVar3 + 1;
    } while (uVar3 < 7);
    return uVar1;
}


/* fcn.00014568 @ 0x14568 */

int64_t fcn.00014568(void)

{
    if (*0x150d0 == 0) {
        fcn.00014508(0x14950,0x150d0);
    }
    return *0x150d0;
}


/* fcn.00014508 @ 0x14508 */

ulong fcn.00014508(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x150c0;
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


/* fcn.00014598 @ 0x14598 */

void fcn.00014598(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00014568();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x000145c6:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x000145c6;
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


/* fcn.00010350 @ 0x10350 */

void fcn.00010350(void)

{
    return;
}


/* fcn.000102f0 @ 0x102f0 */

uint64_t fcn.000102f0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.000145e4 @ 0x145e4 */

void fcn.000145e4(ulong noname_0,int64_t arg1,ulong noname_2,int64_t arg2)

{
    (***0x150d8)(*0x150d8,2,0,arg1,1,arg2);
    return;
}


/* fcn.000105c8 @ 0x105c8 */

void fcn.000105c8(int64_t arg1)

{
    ulong in_R8;
    uchar auStackX_8 [8];
    uchar auStackX_10 [8];
    uint32_t uStackX_18;
    uint uStackX_20;
    
    if ((*(*0x15108 + 0x3a74) & 1) != 0) {
        uStackX_18 = in(0x1830);
        if ((uStackX_18 & 1) != 0) {
            uStackX_20 = 0xffffffff;
            uStackX_18 = uStackX_18 | 1;
            in_R8 = 2;
            arg1 = *0x150d8;
            (***0x150d8)();
        }
        if ((uStackX_18 >> 0x1c & 1) != 0) {
            auStackX_10[0] = 1;
            auStackX_8[0] = 0xbd;
            in_R8 = 0;
            *0xfe001021 = *0xfe001021 & 0xbd | 1;
            arg1 = *0x150d8;
            (***0x150d8)(*0x150d8,3,0,0xfe001021,auStackX_10,auStackX_8);
        }
        *0xfe001024 = *0xfe001024 | 0x10;
        fcn.000145e4(arg1,0xfe001024,in_R8,0xfe001024);
    }
    return;
}


/* fcn.00010d08 @ 0x10d08 */

void fcn.00010d08(int64_t param_1)

{
    char cVar1;
    uchar uVar2;
    uint8_t uVar3;
    uchar uVar4;
    int64_t iVar5;
    unkbyte7 Var7;
    ulong uVar6;
    uint8_t uVar8;
    int64_t iVar9;
    uint32_t uVar10;
    char cVar11;
    uint64_t uVar12;
    int64_t iVar13;
    char cVar14;
    int *piVar15;
    char cVar16;
    uint32_t uStackX_8;
    
    uVar8 = 0;
    iVar9 = 0;
    cVar14 = '\x01';
    uVar10 = uStackX_8;
    do {
        iVar13 = 0;
        cVar1 = *(*0x15108 + 0x220 + iVar9);
        Var7 = param_1 >> 8;
        iVar5 = CONCAT71(Var7,cVar1);
        cVar16 = cVar1 == '\x01';
        cVar11 = cVar16;
        if (cVar1 == '\0') {
            iVar5 = CONCAT71(Var7,uVar8);
            cVar1 = fcn.00013ca0(iVar5);
            if (cVar1 == '\0') {
                uVar6 = CONCAT71(iVar5 >> 8,uVar8);
                uVar2 = fcn.00013c2c(uVar6);
                iVar5 = CONCAT71(uVar6 >> 8,uVar2);
                cVar1 = fcn.00013f14(iVar5);
                cVar11 = cVar16;
                if (cVar1 != '\0') {
                    cVar11 = cVar14;
                }
            }
        }
        param_1 = iVar13;
        if (cVar11 != '\0') {
            iVar5 = CONCAT71(iVar5 >> 8,uVar8);
            fcn.00013ea4(iVar5);
            uVar6 = CONCAT71(iVar5 >> 8,uVar8);
            uVar3 = fcn.00013c2c(uVar6);
            uVar6 = CONCAT71(uVar6 >> 8,uVar8);
            uVar12 = uVar3 << 8;
            uVar3 = fcn.00013ca0(uVar6);
            param_1 = (uVar3 | uVar12) << 8;
            iVar5 = fcn.000140e4(CONCAT71(uVar6 >> 8,uVar8));
            uStackX_8 = *((iVar5 + 0x84U >> 4 & 0x10000000 | iVar5 + 0x84U & 0xffffffff) + 0xc0000000) | 3;
            uVar10 = *((iVar5 + 4U >> 4 & 0x10000000 | iVar5 + 4U & 0xffffffff) + 0xc0000000) & 0xfffffff9;
        }
        fcn.00010c90(param_1,uVar10,uStackX_8);
        uVar8 = uVar8 + 1;
        iVar9 = iVar9 + 0x1c;
    } while (uVar8 < 7);
    uVar8 = 0;
    piVar15 = 0x14fb4;
    iVar9 = 0;
    do {
        cVar1 = *(*0x15108 + 0x2e4 + iVar9);
        cVar16 = cVar1 == '\x01';
        cVar11 = cVar16;
        if (cVar1 == '\0') {
            uVar6 = CONCAT71(param_1 >> 8,uVar8);
            cVar1 = fcn.00013bec(uVar6);
            if (cVar1 == '\0') {
                uVar6 = CONCAT71(uVar6 >> 8,uVar8);
                uVar2 = fcn.00013bb0(uVar6);
                cVar1 = fcn.00013f14(CONCAT71(uVar6 >> 8,uVar2));
                cVar11 = cVar16;
                if (cVar1 != '\0') {
                    cVar11 = cVar14;
                }
            }
        }
        param_1 = 0;
        if (cVar11 != '\0') {
            uVar12 = CONCAT11(*(*piVar15 + 2) >> 8,uVar8);
            fcn.00013fb0(uVar12);
            uVar6 = CONCAT71(uVar12 >> 8,uVar8);
            uVar2 = fcn.00013bb0(uVar6);
            uVar6 = CONCAT71(uVar6 >> 8,uVar8);
            uVar4 = fcn.00013bec(uVar6);
            param_1 = CONCAT11(uVar2,uVar4) << 8;
            iVar5 = fcn.00014084(CONCAT71(uVar6 >> 8,uVar8));
            uStackX_8 = *((iVar5 + 0x84U >> 4 & 0x10000000 | iVar5 + 0x84U & 0xffffffff) + 0xc0000000) | 3;
            uVar10 = *((iVar5 + 4U >> 4 & 0x10000000 | iVar5 + 4U & 0xffffffff) + 0xc0000000) & 0xfffffff9;
        }
        fcn.00010c90(param_1,uVar10,uStackX_8);
        uVar8 = uVar8 + 1;
        iVar9 = iVar9 + 0xc;
        piVar15 = piVar15 + 2;
    } while (uVar8 < 8);
    uVar8 = 0;
    iVar9 = 0;
    do {
        iVar13 = 0;
        cVar1 = *(*0x15108 + 0x35c + iVar9);
        Var7 = param_1 >> 8;
        iVar5 = CONCAT71(Var7,cVar1);
        cVar16 = cVar1 == '\x01';
        cVar11 = cVar16;
        if (cVar1 == '\0') {
            iVar5 = CONCAT71(Var7,uVar8);
            cVar1 = fcn.00013d58(iVar5);
            if (cVar1 == '\0') {
                uVar6 = CONCAT71(iVar5 >> 8,uVar8);
                uVar2 = fcn.00013d20(uVar6);
                iVar5 = CONCAT71(uVar6 >> 8,uVar2);
                cVar1 = fcn.00013f14(iVar5);
                cVar11 = cVar16;
                if (cVar1 != '\0') {
                    cVar11 = cVar14;
                }
            }
        }
        param_1 = iVar13;
        if (cVar11 != '\0') {
            uVar6 = CONCAT71(iVar5 >> 8,uVar8);
            uVar3 = fcn.00013d20(uVar6);
            uVar6 = CONCAT71(uVar6 >> 8,uVar8);
            uVar12 = uVar3 << 8;
            uVar3 = fcn.00013d58(uVar6);
            param_1 = (uVar12 | uVar3) << 8;
            iVar5 = fcn.00014134(CONCAT71(uVar6 >> 8,uVar8));
            uStackX_8 = *((iVar5 + 0x84U >> 4 & 0x10000000 | iVar5 + 0x84U & 0xffffffff) + 0xc0000000) | 3;
            uVar10 = *((iVar5 + 4U >> 4 & 0x10000000 | iVar5 + 4U & 0xffffffff) + 0xc0000000) & 0xfffffff9;
        }
        fcn.00010c90(param_1,uVar10,uStackX_8);
        uVar8 = uVar8 + 1;
        iVar9 = iVar9 + 0x1c;
    } while (uVar8 < 7);
    return;
}


/* fcn.00011660 @ 0x11660 */

void fcn.00011660(int64_t arg1)

{
    int64_t iVar1;
    uint uVar2;
    uchar *puVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint *puVar6;
    int64_t iVar7;
    int64_t iStackX_8;
    uchar auStackX_10 [24];
    
    iStackX_8 = arg1;
    (**(*0x150c8 + 0x40))(10,0x379,0x15100);
    fcn.00010260(*0x15100,0x379);
    (**(*0x150c8 + 0x148))(&iStackX_8,0x14920,0x15100,0);
    iVar1 = fcn.00014598(0x148e0);
    if (iVar1 != 0) {
        iVar7 = 0;
        uVar5 = 0x22c;
        puVar3 = iVar1 + 0x55;
        iVar4 = 0x244;
        puVar6 = iVar1 + 0x1c;
        do {
            *(*0x15100 + 0x1fc + iVar7) = *(puVar6 + -3);
            *(*0x15100 + 0x1ff + iVar7) = puVar3[-1];
            *(*0x15100 + 0x202 + iVar7) = *puVar3;
            *((uVar5 - 0x27) + *0x15100) = *(puVar3 + 1);
            *(*0x15100 + 0x20b + iVar7) = puVar3[3];
            iVar7 = iVar7 + 1;
            *(iVar4 + -0x36 + *0x15100) = *(puVar3 + 7);
            *((uVar5 - 0x12) + *0x15100) = *(puVar3 + 0xb);
            *(iVar4 + -0x24 + *0x15100) = *(puVar3 + 0xf);
            *(uVar5 + *0x15100) = *(puVar3 + 0x13);
            *(uVar5 + 6 + *0x15100) = *(puVar3 + 0x15);
            *(uVar5 + 0xc + *0x15100) = *(puVar3 + 0x17);
            *(uVar5 + 0x12 + *0x15100) = *(puVar3 + 0x19);
            uVar5 = uVar5 + 2;
            *(iVar4 + *0x15100) = *puVar6;
            *(iVar4 + 0xc + *0x15100) = puVar6[1];
            *(iVar4 + 0x18 + *0x15100) = puVar6[2];
            *(iVar4 + 0x24 + *0x15100) = puVar6[3];
            *(iVar4 + 0x30 + *0x15100) = *(puVar6 + -1);
            puVar3 = puVar3 + 0x1c;
            iVar4 = iVar4 + 4;
            puVar6 = puVar6 + 5;
        } while (uVar5 < 0x232);
    }
    iVar1 = fcn.00014598(0x14850);
    if (iVar1 == 0) {
        uVar2 = 0xff;
        *(*0x15100 + 0x365) = 0xff;
    }
    else {
        *(*0x15100 + 0x2da) = *(iVar1 + 0x18);
        *(*0x15100 + 0x365) = *(iVar1 + 0x1c);
        uVar2 = *(iVar1 + 0x20);
    }
    *(*0x15100 + 0x369) = uVar2;
    (**(*0x150c8 + 0x170))(0x200,8,0x11270,0,0x14980,auStackX_10);
    return;
}


/* fcn.0001216c @ 0x1216c */

char * fcn.0001216c(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.000121bc(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.00014404 @ 0x14404 */

void fcn.00014404(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000143d4();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        fcn.00010280(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.000143d4 @ 0x143d4 */

ulong fcn.000143d4(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x150c8 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00010280 @ 0x10280 */

int64_t fcn.00010280(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00013ca0 @ 0x13ca0 */

uchar fcn.00013ca0(uint32_t arg1)

{
    uchar uVar1;
    char cVar2;
    uint8_t uVar3;
    
    uVar3 = arg1;
    if (uVar3 < 7) {
        cVar2 = fcn.00014480();
        if (cVar2 == '\0') {
            if (uVar3 != 0) {
                if (uVar3 == 1) {
                    return 3;
                }
                if (uVar3 == 2) {
                    return 6;
                }
                if (uVar3 == 3) {
                    return 0;
                }
                if (uVar3 == 4) {
                    return 1;
                }
                if (uVar3 != 5) {
                    if (uVar3 == 6) {
                        return 3;
                    }
                    goto code_r0x00013cab;
                }
            }
        }
        else if (uVar3 != 0) {
            if (uVar3 == 1) {
                return 3;
            }
            if (uVar3 == 2) {
                return 6;
            }
            if (uVar3 == 3) {
                return 0;
            }
            if (uVar3 == 4) {
                return 1;
            }
            if (uVar3 == 5) {
                return 4;
            }
            if (uVar3 == 6) {
                return 5;
            }
            goto code_r0x00013cab;
        }
        uVar1 = 2;
    }
    else {
code_r0x00013cab:
        uVar1 = 0xff;
    }
    return uVar1;
}


/* fcn.00013c2c @ 0x13c2c */

uchar fcn.00013c2c(uint32_t arg1)

{
    char cVar1;
    uint8_t uVar2;
    
    uVar2 = arg1;
    if (uVar2 < 7) {
        cVar1 = fcn.00014480();
        if (cVar1 == '\0') {
            if (uVar2 == 0) {
                return 0x1e;
            }
            if (uVar2 == 1) {
                return 0x1e;
            }
            if (uVar2 == 2) {
                return 0x12;
            }
            if (uVar2 == 3) {
                return 0x13;
            }
            if (uVar2 == 4) {
                return 0x13;
            }
            if (uVar2 == 5) {
                return 0x13;
            }
            if (uVar2 == 6) {
                return 0x13;
            }
        }
        else {
            if ((uVar2 == 0) || (uVar2 == 1)) {
                return 0x1e;
            }
            if (uVar2 == 2) {
                return 0x12;
            }
            if ((uVar2 == 3) || (uVar2 == 4)) {
                return 0x13;
            }
            if ((uVar2 == 5) || (uVar2 == 6)) {
                return 0x11;
            }
        }
    }
    return 0xff;
}


/* fcn.00013f14 @ 0x13f14 */

ulong fcn.00013f14(int64_t arg1)

{
    int16_t iVar1;
    uint8_t uVar2;
    
    uVar2 = 1;
    do {
        iVar1 = *(((uVar2 & 7 | (arg1 & 0x1f) << 3) << 0xc | 2) + 0xc0000000);
        if (iVar1 != -1) {
            return CONCAT71(iVar1 >> 8,1);
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 8);
    return 0xff00;
}


/* fcn.000140e4 @ 0x140e4 */

int fcn.000140e4(int64_t arg1)

{
    char cVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint8_t uVar5;
    ulong uVar6;
    uint32_t uVar7;
    
    uVar5 = arg1;
    cVar1 = fcn.00013ea4(arg1);
    if (cVar1 == '\0') {
        uVar6 = CONCAT71(arg1 >> 8,uVar5);
        uVar2 = fcn.00013c2c(uVar6);
        uVar7 = uVar2;
        uVar3 = fcn.00013ca0(CONCAT71(uVar6 >> 8,uVar5));
        iVar4 = (uVar3 & 7 | (uVar7 & 0x1f) << 3) << 0xc;
    }
    else {
        iVar4 = *(uVar5 * 8 + 0x14f7c);
    }
    return iVar4;
}


/* fcn.00013f68 @ 0x13f68 */

uint64_t fcn.00013f68(uint32_t arg1)

{
    uint32_t uVar1;
    uint in_register_0000000c;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_register_0000000c,arg1);
    if (uVar2 < 0xfe020000) {
        uVar2 = uVar2 + 0x84 >> 4 & 0x10000000 | uVar2 + 0x84 & 0xffffffff;
        uVar1 = *(uVar2 + 0xc0000000) | 3;
        *(uVar2 + 0xc0000000) = uVar1;
        return uVar1;
    }
    *(uVar2 + 0x84) = *(uVar2 + 0x84) | 3;
    return CONCAT71(0xfe0200,*(uVar2 + 0x84));
}


/* fcn.00013bec @ 0x13bec */

uchar fcn.00013bec(uint32_t arg1)

{
    if (7 < arg1) {
        return 0xff;
    }
    arg1 = arg1 & 0xff;
    if (arg1 == 0) {
        return 0;
    }
    if (arg1 != 1) {
        if (arg1 == 2) {
            return 2;
        }
        if (arg1 == 3) {
            return 3;
        }
        if (arg1 == 4) {
            return 0;
        }
        if (arg1 != 5) {
            if (arg1 == 6) {
                return 0;
            }
            if (arg1 != 7) {
                return 0xff;
            }
        }
    }
    return 1;
}


/* fcn.00013bb0 @ 0x13bb0 */

uchar fcn.00013bb0(uint32_t arg1)

{
    if (arg1 < 8) {
        arg1 = arg1 & 0xff;
        if ((((arg1 == 0) || (arg1 == 1)) || (arg1 == 2)) || (arg1 == 3)) {
            return 0x15;
        }
        if ((arg1 == 4) || (arg1 == 5)) {
            return 0x19;
        }
        if ((arg1 == 6) || (arg1 == 7)) {
            return 0x10;
        }
    }
    return 0xff;
}


/* fcn.00014084 @ 0x14084 */

uint64_t fcn.00014084(int64_t arg1)

{
    uint8_t uVar1;
    int16_t iVar2;
    uint32_t uVar3;
    int16_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    
    uVar3 = arg1;
    uVar6 = uVar3 & 0xff;
    iVar7 = 0x14fb4;
    iVar4 = *(*(uVar6 * 8 + 0x14fb4) + 2);
    iVar2 = fcn.00013fb0(arg1);
    if (iVar4 == iVar2) {
        uVar6 = *(iVar7 + uVar6 * 8);
    }
    else {
        uVar3 = CONCAT31(uVar3 >> 8,uVar6);
        uVar1 = fcn.00013bb0(uVar3);
        uVar5 = (uVar1 & 0x1f) << 3;
        uVar1 = fcn.00013bec(CONCAT31(uVar3 >> 8,uVar6));
        uVar6 = (uVar5 | uVar1 & 7) << 0xc;
    }
    return uVar6;
}


/* fcn.00013d58 @ 0x13d58 */

uchar fcn.00013d58(uint32_t arg1)

{
    if (6 < arg1) {
        return 0xff;
    }
    arg1 = arg1 & 0xff;
    if (arg1 == 0) {
        return 0;
    }
    if (arg1 == 1) {
        return 1;
    }
    if (arg1 != 2) {
        if (arg1 == 3) {
            return 0;
        }
        if (arg1 == 4) {
            return 1;
        }
        if (arg1 != 5) {
            if (arg1 != 6) {
                return 0xff;
            }
            return 3;
        }
    }
    return 2;
}


/* fcn.00013d20 @ 0x13d20 */

uchar fcn.00013d20(uint32_t arg1)

{
    if (arg1 < 7) {
        arg1 = arg1 & 0xff;
        if ((arg1 == 0) || (arg1 == 1)) {
            return 0x1e;
        }
        if (arg1 == 2) {
            return 0x19;
        }
        if ((((arg1 == 3) || (arg1 == 4)) || (arg1 == 5)) || (arg1 == 6)) {
            return 0x11;
        }
    }
    return 0xff;
}


/* fcn.00014134 @ 0x14134 */

uint64_t fcn.00014134(int64_t arg1)

{
    uint8_t uVar1;
    uchar uVar2;
    uint64_t uVar3;
    
    uVar2 = arg1;
    if ((*0xfdcb0618 >> (arg1 & 0x1f) & 1) == 0) {
        uVar1 = fcn.00013d20(arg1);
        uVar3 = (uVar1 & 0x1f) << 3;
        uVar1 = fcn.00013d58(CONCAT71(arg1 >> 8,uVar2));
        uVar3 = (uVar3 | uVar1 & 7) << 0xc;
    }
    else {
        uVar3 = *((arg1 & 0xffU) * 8 + 0x14f44);
    }
    return uVar3;
}


/* fcn.00013ea4 @ 0x13ea4 */

ulong fcn.00013ea4(int64_t arg1)

{
    char cVar1;
    uint64_t uVar2;
    int16_t iVar3;
    int64_t iVar4;
    
    uVar2 = arg1 & 0xff;
    iVar4 = 0x10000;
    iVar3 = *(*(uVar2 * 8 + 0x14f7c) + 2);
    cVar1 = fcn.00014480(arg1,uVar2,iVar3);
    if (cVar1 == '\0') {
        cVar1 = fcn.00014444();
        if (cVar1 == '\x05') {
            uVar2 = *(iVar4 + 0x5020 + uVar2 * 2);
        }
        else {
            cVar1 = fcn.00014444();
            if (cVar1 == '\x03') {
                uVar2 = *(iVar4 + 0x5030 + uVar2 * 2);
            }
            else {
                uVar2 = *(iVar4 + 0x5040 + uVar2 * 2);
            }
        }
    }
    else {
        uVar2 = *(iVar4 + 0x5050 + uVar2 * 2);
    }
    return CONCAT71(uVar2 >> 8,iVar3 == uVar2);
}


/* fcn.00010c90 @ 0x10c90 */

void fcn.00010c90(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    
    if (arg1 != 0) {
        iStackX_10 = arg2;
        aiStackX_18[0] = arg3;
        (***0x150d8)(*0x150d8,4,2,arg1 + 0x84,1,aiStackX_18);
        (***0x150d8)(*0x150d8,4,2,arg1 + 4,1,&iStackX_10);
    }
    return;
}


/* fcn.00013fb0 @ 0x13fb0 */

ushort fcn.00013fb0(int64_t arg1)

{
    char cVar1;
    ushort uVar2;
    uint8_t uVar3;
    
    uVar3 = arg1;
    cVar1 = fcn.00014480();
    if (cVar1 == '\0') {
        cVar1 = fcn.00014444();
        if (cVar1 == '\x05') {
            uVar2 = *(uVar3 * 2 + 0x15060);
        }
        else {
            cVar1 = fcn.00014444();
            if (cVar1 == '\x03') {
                uVar2 = *(uVar3 * 2 + 0x15090);
            }
            else {
                uVar2 = *(uVar3 * 2 + 0x15080);
            }
        }
    }
    else {
        uVar2 = *(uVar3 * 2 + 0x15070);
    }
    return uVar2;
}


/* fcn.000144a4 @ 0x144a4 */

ulong fcn.000144a4(void)

{
    char cVar1;
    
    cVar1 = fcn.00014444();
    if ((((cVar1 != '\x02') && (cVar1 = fcn.00014444(), cVar1 != '\x05')) && (cVar1 = fcn.00014444(), cVar1 != '\x06')
        ) && (cVar1 = fcn.00014444(), cVar1 != '\x03')) {
        return 0;
    }
    return 1;
}


/* fcn.00014480 @ 0x14480 */

uchar fcn.00014480(void)

{
    char cVar1;
    uchar uVar2;
    
    cVar1 = fcn.00014444();
    uVar2 = 1;
    if (cVar1 != '\x01') {
        uVar2 = 1;
        cVar1 = fcn.00014444();
        if (cVar1 != '\x04') {
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.00014444 @ 0x14444 */

void fcn.00014444(void)

{
    if (*0x14ff1 == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x14ff1 = '\x05';
        }
        else {
            *0x14ff1 = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


/* fcn.00012218 @ 0x12218 */

ulong fcn.00012218(uint32_t param_1)

{
    char cVar1;
    int iVar2;
    
    cVar1 = fcn.00014444();
    if ((cVar1 == '\x05') || (cVar1 = fcn.00014444(), cVar1 == '\x03')) {
        if (param_1 < 0xaf00aa) {
            if (param_1 == 0xaf00a9) {
                return 0x292b520f;
            }
            if (param_1 < 0x2f0029) {
                if (param_1 == 0x2f0028) {
                    return 0x790e500c;
                }
                if (0x180014 < param_1) {
                    if (0x1f001e < param_1) {
                        if (param_1 == 0x1f001f) {
                            return 0x19013e0f;
                        }
                        if (param_1 == 0x270020) {
                            return 0x790e400d;
                        }
                        if (param_1 == 0x270021) {
                            return 0x490c420c;
                        }
                        if (param_1 == 0x270022) {
                            return 0x7908440c;
                        }
                        if (param_1 == 0x270023) {
                            return 0x19094607;
                        }
                        if (param_1 == 0x270024) {
                            return 0x1909480b;
                        }
                        if (param_1 == 0x270025) {
                            return 0x19094a0f;
                        }
                        if (param_1 != 0x270026) {
                            return 0;
                        }
                        return 0x19094c13;
                    }
                    if (param_1 == 0x1f001e) {
                        return 0x19013c0b;
                    }
                    if (param_1 == 0x180015) {
                        return 0x19012a06;
                    }
                    if (param_1 == 0x180016) {
                        return 0x19012c0a;
                    }
                    if (param_1 == 0x180017) {
                        return 0x19012e0e;
                    }
                    if (param_1 == 0x1f0019) {
                        return 0x2907320d;
                    }
                    if (param_1 == 0x1f001a) {
                        return 0x190b340f;
                    }
                    if (param_1 == 0x1f001b) {
                        return 0x290c3603;
                    }
                    if (param_1 != 0x1f001c) {
                        if (param_1 != 0x1f001d) {
                            return 0;
                        }
                        return 0x19013a07;
                    }
                    return 0x19093803;
                }
                if (param_1 == 0x180014) {
                    return 0x19092802;
                }
                if (0x10000a < param_1) {
                    if (param_1 == 0x10000b) {
                        return 0x290c1602;
                    }
                    if (param_1 == 0x10000c) {
                        return 0x19091801;
                    }
                    if (param_1 == 0x10000d) {
                        return 0x19011a05;
                    }
                    if (param_1 == 0x10000e) {
                        return 0x19011c09;
                    }
                    if (param_1 == 0x10000f) {
                        return 0x19011e0d;
                    }
                    if (param_1 == 0x180011) {
                        return 0x2907220c;
                    }
                    if (param_1 == 0x180012) {
                        return 0x190b240e;
                    }
                    if (param_1 != 0x180013) {
                        return 0;
                    }
                    return 0x290c2600;
                }
                if (param_1 == 0x10000a) {
                    return 0x19081412;
                }
                if (param_1 == 0x80001) {
                    return 0x2907020a;
                }
                if (param_1 == 0x80002) {
                    return 0x19080411;
                }
                if (param_1 == 0x80003) {
                    return 0x290c0601;
                }
                if (param_1 == 0x80004) {
                    return 0x19090800;
                }
                if (param_1 == 0x80005) {
                    return 0x19010a04;
                }
                if (param_1 == 0x80006) {
                    return 0x19010c08;
                }
                if (param_1 != 0x80007) {
                    if (param_1 != 0x100009) {
                        return 0;
                    }
                    return 0x2907120b;
                }
                return 0x19010e0c;
            }
            if (0x47003c < param_1) {
                if (0x8f0053 < param_1) {
                    if (param_1 == 0x970090) {
                        return 0x1928200d;
                    }
                    if (param_1 == 0x970091) {
                        return 0x29282211;
                    }
                    if (param_1 == 0x9f0098) {
                        return 0x1928300e;
                    }
                    if (param_1 != 0x9f0099) {
                        if (param_1 == 0xa700a0) {
                            return 0x1928400f;
                        }
                        if (param_1 != 0xa700a1) {
                            if (param_1 != 0xaf00a8) {
                                return 0;
                            }
                            return 0x19285010;
                        }
                        return 0x292b420e;
                    }
                    return 0x29283212;
                }
                if (param_1 == 0x8f0053) {
                    return 0x1908a603;
                }
                if (param_1 == 0x47003d) {
                    return 0x19097a0c;
                }
                if (param_1 == 0x47003e) {
                    return 0x19097c10;
                }
                if (param_1 != 0x470040) {
                    if (param_1 == 0x470041) {
                        return 0x39008217;
                    }
                    if (param_1 == 0x470042) {
                        return 0x2908840f;
                    }
                    if (param_1 == 0x8f0050) {
                        return 0x1908a000;
                    }
                    if (param_1 != 0x8f0051) {
                        if (param_1 != 0x8f0052) {
                            return 0;
                        }
                        return 0x1908a402;
                    }
                    return 0x1908a201;
                }
                return 0x3900800e;
            }
            if (param_1 == 0x47003c) {
                return 0x19097808;
            }
            if (param_1 < 0x370033) {
                if (param_1 == 0x370032) {
                    return 0x7908640a;
                }
                if (param_1 == 0x2f0029) {
                    return 0x490c520d;
                }
                if (param_1 == 0x2f002a) {
                    return 0x7908540b;
                }
                if (param_1 == 0x2f002b) {
                    return 0x19095606;
                }
                if (param_1 == 0x2f002c) {
                    return 0x1909580a;
                }
                if (param_1 == 0x2f002d) {
                    return 0x19095a0e;
                }
                if (param_1 == 0x2f002e) {
                    return 0x19095c12;
                }
                if (param_1 != 0x370030) {
                    if (param_1 != 0x370031) {
                        return 0;
                    }
                    return 0x490c620b;
                }
                return 0x790e600b;
            }
            if (param_1 == 0x370033) {
                return 0x19096605;
            }
            if (param_1 == 0x370034) {
                return 0x19096809;
            }
            if (param_1 == 0x370035) {
                return 0x19096a0d;
            }
            if (param_1 == 0x370036) {
                return 0x19096c11;
            }
            if (param_1 == 0x470038) {
                return 0x790e700a;
            }
            iVar2 = param_1 - 0x470039;
            if (iVar2 == 0) {
                return 0x490c7210;
            }
            goto code_r0x000134e0;
        }
        if (0x1610157 < param_1) {
            if (0x18a018a < param_1) {
                if (0x1de01c1 < param_1) {
                    if (param_1 == 0x1de01c2) {
                        return 0x19688408;
                    }
                    if (param_1 == 0x1de01c3) {
                        return 0x19678613;
                    }
                    if (param_1 == 0x1de01c4) {
                        return 0x29678817;
                    }
                    if (param_1 != 0x1de01c5) {
                        if (param_1 == 0x1de01c6) {
                            return 0x19628c08;
                        }
                        if (param_1 != 0x1de01c7) {
                            if (param_1 != 0x1ed01ed) {
                                return 0;
                            }
                            return 0x1969da05;
                        }
                        return 0x796e8e10;
                    }
                    return 0x196c8a13;
                }
                if (param_1 == 0x1de01c1) {
                    return 0x19688207;
                }
                if (param_1 == 0x18c018b) {
                    return 0x296e1618;
                }
                if (param_1 == 0x18c018c) {
                    return 0x396c1818;
                }
                if (param_1 != 0x1940191) {
                    if (param_1 == 0x1940192) {
                        return 0x49622412;
                    }
                    if (param_1 == 0x19e019d) {
                        return 0x96a3a1b;
                    }
                    if (param_1 == 0x19e019e) {
                        return 0x96a3c1c;
                    }
                    if (param_1 != 0x1de01bf) {
                        if (param_1 != 0x1de01c0) {
                            return 0;
                        }
                        return 0x19688006;
                    }
                    return 0x19687e05;
                }
                return 0x296e220e;
            }
            if (param_1 == 0x18a018a) {
                return 0x19691412;
            }
            if (param_1 < 0x1870182) {
                if (param_1 == 0x1870181) {
                    return 0x19690209;
                }
                if (param_1 == 0x1610158) {
                    return 0x3948b00e;
                }
                if (param_1 == 0x1710164) {
                    return 0x2940c805;
                }
                if (param_1 == 0x1710165) {
                    return 0x2940ca07;
                }
                if (param_1 == 0x1710166) {
                    return 0x1947cc08;
                }
                if (param_1 == 0x1710167) {
                    return 0x2940ce10;
                }
                if (param_1 == 0x1710168) {
                    return 0x3948d00d;
                }
                if (param_1 != 0x17f017f) {
                    if (param_1 != 0x1870180) {
                        return 0;
                    }
                    return 0x19690008;
                }
                return 0x1949fe07;
            }
            if (param_1 == 0x1870182) {
                return 0x1969040a;
            }
            if (param_1 == 0x1870183) {
                return 0x1969060b;
            }
            if (param_1 == 0x1870184) {
                return 0x1969080c;
            }
            if (param_1 == 0x1870185) {
                return 0x19690a0d;
            }
            if (param_1 == 0x1870186) {
                return 0x19690c0e;
            }
            if (param_1 == 0x1870187) {
                return 0x19690e0f;
            }
            if (param_1 == 0x1880188) {
                return 0x19691010;
            }
            if (param_1 != 0x1890189) {
                return 0;
            }
            return 0x19691211;
        }
        if (param_1 == 0x1610157) {
            return 0x2940ae11;
        }
        if (param_1 < 0x1010102) {
            if (param_1 == 0x1010101) {
                return 0x19430205;
            }
            if (0xf700f1 < param_1) {
                if (param_1 == 0xf700f2) {
                    return 0x4920e410;
                }
                if (param_1 == 0xfb00f8) {
                    return 0x292ef011;
                }
                if (param_1 == 0xfb00f9) {
                    return 0x392cf212;
                }
                if (param_1 == 0xfc00fc) {
                    return 0x1923f800;
                }
                if (param_1 == 0xfd00fd) {
                    return 0x1923fa04;
                }
                if (param_1 == 0xfe00fe) {
                    return 0x1923fc01;
                }
                if (param_1 == 0xff00ff) {
                    return 0x1923fe02;
                }
                if (param_1 != 0x1000100) {
                    return 0;
                }
                return 0x19430003;
            }
            if (param_1 == 0xf700f1) {
                return 0x1920e207;
            }
            if (param_1 == 0xbf00b8) {
                return 0x1928700c;
            }
            if (param_1 == 0xc700c0) {
                return 0x1928800b;
            }
            if (param_1 == 0xcf00c8) {
                return 0x1928900a;
            }
            if (param_1 == 0xdf00d0) {
                return 0x1928a009;
            }
            if (param_1 == 0xef00e8) {
                return 0x1920d006;
            }
            if (param_1 == 0xef00e9) {
                return 0x1920d208;
            }
            if (param_1 != 0xef00ea) {
                if (param_1 != 0xf700f0) {
                    return 0;
                }
                return 0x1920e005;
            }
            return 0x4920d411;
        }
        if (param_1 < 0x1210120) {
            if (param_1 == 0x121011f) {
                return 0x49423e11;
            }
            if (param_1 == 0x11d010f) {
                return 0x19421e13;
            }
            if (param_1 == 0x11d0110) {
                return 0x19422014;
            }
            if (param_1 == 0x11d0111) {
                return 0x2942220e;
            }
            if (param_1 == 0x11d0112) {
                return 0x2942240f;
            }
            if (param_1 == 0x11d0116) {
                return 0x194e2c0e;
            }
            if (param_1 == 0x11d0117) {
                return 0x19422e12;
            }
            if (param_1 != 0x11d0118) {
                if (param_1 != 0x121011e) {
                    return 0;
                }
                return 0x194d3c02;
            }
            return 0x19423011;
        }
        if (param_1 == 0x1250122) {
            return 0x194d4400;
        }
        if (param_1 == 0x1250123) {
            return 0x19424615;
        }
        if (param_1 == 0x1290126) {
            return 0x194d4c01;
        }
        if (param_1 == 0x1290127) {
            return 0x19424e16;
        }
        if (param_1 == 0x1610154) {
            return 0x2940a806;
        }
        iVar2 = param_1 + 0xfe9efeab;
        if (iVar2 == 0) {
            return 0x2940aa08;
        }
    }
    else {
        cVar1 = fcn.000144a4();
        if (cVar1 == '\0') {
            if (0xfc00fc < param_1) {
                if (0x1710164 < param_1) {
                    if (0x1de01c1 < param_1) {
                        if (0x1de01c8 < param_1) {
                            if (param_1 == 0x1de01c9) {
                                return 0x186d9204;
                            }
                            if (param_1 == 0x1de01ca) {
                                return 0x186d9405;
                            }
                            if (param_1 == 0x1de01cb) {
                                return 0x186d9606;
                            }
                            if (param_1 != 0x1de01cc) {
                                if (param_1 == 0x1de01cd) {
                                    return 0x186d9a08;
                                }
                                if (param_1 != 0x1de01ce) {
                                    return 0;
                                }
                                return 0x186d9c09;
                            }
                            return 0x186d9807;
                        }
                        if (param_1 == 0x1de01c8) {
                            return 0x186d9003;
                        }
                        if (param_1 == 0x1de01c2) {
                            return 0x18628408;
                        }
                        if (param_1 == 0x1de01c3) {
                            return 0x18628609;
                        }
                        if (param_1 != 0x1de01c4) {
                            if (param_1 == 0x1de01c5) {
                                return 0x186d8a00;
                            }
                            if (param_1 != 0x1de01c6) {
                                if (param_1 != 0x1de01c7) {
                                    return 0;
                                }
                                return 0x186d8e02;
                            }
                            return 0x186d8c01;
                        }
                        return 0x1862880a;
                    }
                    if (param_1 == 0x1de01c1) {
                        return 0x18628207;
                    }
                    if (0x1be01a1 < param_1) {
                        if (param_1 == 0x1be01a2) {
                            return 0x186b4406;
                        }
                        if (param_1 == 0x1be01a3) {
                            return 0x186b4607;
                        }
                        if (param_1 == 0x1be01a4) {
                            return 0x186b4808;
                        }
                        if (param_1 != 0x1be01a5) {
                            if (param_1 == 0x1de01bf) {
                                return 0x18627e05;
                            }
                            if (param_1 != 0x1de01c0) {
                                return 0;
                            }
                            return 0x18628006;
                        }
                        return 0x186b4a09;
                    }
                    if (param_1 == 0x1be01a1) {
                        return 0x186b4205;
                    }
                    if (param_1 == 0x1710165) {
                        return 0x2845ca06;
                    }
                    if (param_1 == 0x1710166) {
                        return 0x2850cc0b;
                    }
                    if (param_1 != 0x1710167) {
                        if (param_1 == 0x1720172) {
                            return 0x2844e405;
                        }
                        if (param_1 == 0x1730173) {
                            return 0x3844e606;
                        }
                        if (param_1 == 0x1be019f) {
                            return 0x186a3e04;
                        }
                        if (param_1 != 0x1be01a0) {
                            return 0;
                        }
                        return 0x186a4005;
                    }
                    return 0x2850ce0d;
                }
                if (param_1 == 0x1710164) {
                    return 0x3845c803;
                }
                if (0x11d0112 < param_1) {
                    if (0x1610153 < param_1) {
                        if (param_1 == 0x1610154) {
                            return 0x3845a804;
                        }
                        if (param_1 == 0x1610155) {
                            return 0x2845aa07;
                        }
                        if (param_1 == 0x1610156) {
                            return 0x2850ac0c;
                        }
                        if (param_1 != 0x1610157) {
                            if (param_1 == 0x1710162) {
                                return 0x1845c410;
                            }
                            if (param_1 != 0x1710163) {
                                return 0;
                            }
                            return 0x1845c612;
                        }
                        return 0x2850ae0e;
                    }
                    if (param_1 == 0x1610153) {
                        return 0x1845a613;
                    }
                    if (param_1 == 0x11d0116) {
                        return 0x184f2c06;
                    }
                    if (param_1 == 0x11d0117) {
                        return 0x184f2e07;
                    }
                    if (param_1 != 0x11d0118) {
                        if (param_1 == 0x121011e) {
                            return 0x184b3c13;
                        }
                        if (param_1 == 0x1250122) {
                            return 0x184b4414;
                        }
                        if (param_1 == 0x1290126) {
                            return 0x184b4c15;
                        }
                        if (param_1 != 0x1610152) {
                            return 0;
                        }
                        return 0x1845a411;
                    }
                    return 0x184f300a;
                }
                if (param_1 == 0x11d0112) {
                    return 0x18502404;
                }
                if (0x1090106 < param_1) {
                    if (param_1 == 0x1090107) {
                        return 0x28460e04;
                    }
                    if (param_1 == 0x10d010a) {
                        return 0x28461402;
                    }
                    if (param_1 == 0x10d010b) {
                        return 0x28461603;
                    }
                    if (param_1 != 0x11d010f) {
                        if (param_1 == 0x11d0110) {
                            return 0x18502002;
                        }
                        if (param_1 != 0x11d0111) {
                            return 0;
                        }
                        return 0x18502203;
                    }
                    return 0x18501e01;
                }
                if (param_1 == 0x1090106) {
                    return 0x28460c06;
                }
                if (param_1 == 0xfd00fd) {
                    return 0x1821fa04;
                }
                if (param_1 == 0xfe00fe) {
                    return 0x1821fc01;
                }
                if (param_1 != 0xff00ff) {
                    if (param_1 == 0x1000100) {
                        return 0x18410003;
                    }
                    if (param_1 == 0x1010101) {
                        return 0x18410205;
                    }
                    if (param_1 == 0x1050102) {
                        return 0x28460407;
                    }
                    if (param_1 != 0x1050103) {
                        return 0;
                    }
                    return 0x28460605;
                }
                return 0x1821fe02;
            }
            if (param_1 == 0xfc00fc) {
                return 0x1821f800;
            }
            if (0x470041 < param_1) {
                if (0xa700a1 < param_1) {
                    if (0xef00e9 < param_1) {
                        if (param_1 == 0xef00ea) {
                            return 0x1825d407;
                        }
                        if (param_1 == 0xf700f0) {
                            return 0x182de013;
                        }
                        if (param_1 == 0xf700f1) {
                            return 0x182de215;
                        }
                        if (param_1 != 0xf700f2) {
                            if (param_1 == 0xfb00f8) {
                                return 0x2824f008;
                            }
                            if (param_1 != 0xfb00f9) {
                                return 0;
                            }
                            return 0x2824f217;
                        }
                        return 0x1825e406;
                    }
                    if (param_1 == 0xef00e9) {
                        return 0x182dd216;
                    }
                    if (param_1 == 0xaf00a8) {
                        return 0x1824500c;
                    }
                    if (param_1 == 0xaf00a9) {
                        return 0x2825520f;
                    }
                    if (param_1 != 0xbf00b8) {
                        if (param_1 == 0xc700c0) {
                            return 0x1827800a;
                        }
                        if (param_1 == 0xcf00c8) {
                            return 0x18279009;
                        }
                        if (param_1 == 0xdf00d0) {
                            return 0x1827a008;
                        }
                        if (param_1 != 0xef00e8) {
                            return 0;
                        }
                        return 0x182dd014;
                    }
                    return 0x1827700b;
                }
                if (param_1 == 0xa700a1) {
                    return 0x2825420e;
                }
                if (0x8f0056 < param_1) {
                    if (param_1 == 0x8f0057) {
                        return 0x1801ae0d;
                    }
                    if (param_1 == 0x970090) {
                        return 0x18252003;
                    }
                    if (param_1 == 0x970091) {
                        return 0x2825220c;
                    }
                    if (param_1 != 0x9f0098) {
                        if (param_1 == 0x9f0099) {
                            return 0x2825320d;
                        }
                        if (param_1 != 0xa700a0) {
                            return 0;
                        }
                        return 0x1821400a;
                    }
                    return 0x18253004;
                }
                if (param_1 == 0x8f0056) {
                    return 0x2801ac0b;
                }
                if (param_1 == 0x470042) {
                    return 0x28008413;
                }
                if (param_1 == 0x8f0050) {
                    return 0x1801a00e;
                }
                if (param_1 != 0x8f0051) {
                    if (param_1 == 0x8f0052) {
                        return 0x1801a410;
                    }
                    if (param_1 == 0x8f0053) {
                        return 0x1801a611;
                    }
                    if (param_1 == 0x8f0054) {
                        return 0x1801a812;
                    }
                    if (param_1 != 0x8f0055) {
                        return 0;
                    }
                    return 0x1801aa13;
                }
                return 0x1801a20f;
            }
            if (param_1 == 0x470041) {
                return 0x18028201;
            }
            if (0x270022 < param_1) {
                if (0x370032 < param_1) {
                    if (param_1 == 0x370033) {
                        return 0x18046611;
                    }
                    if (param_1 == 0x470038) {
                        return 0x1802700f;
                    }
                    if (param_1 == 0x470039) {
                        return 0x18027213;
                    }
                    if (param_1 != 0x47003a) {
                        if (param_1 == 0x47003b) {
                            return 0x18047610;
                        }
                        if (param_1 != 0x470040) {
                            return 0;
                        }
                        return 0x18028000;
                    }
                    return 0x38077408;
                }
                if (param_1 == 0x370032) {
                    return 0x38076409;
                }
                if (param_1 == 0x270023) {
                    return 0x18044613;
                }
                if (param_1 == 0x2f0028) {
                    return 0x18025011;
                }
                if (param_1 != 0x2f0029) {
                    if (param_1 == 0x2f002a) {
                        return 0x3807540a;
                    }
                    if (param_1 == 0x2f002b) {
                        return 0x18045612;
                    }
                    if (param_1 == 0x370030) {
                        return 0x18026010;
                    }
                    if (param_1 != 0x370031) {
                        return 0;
                    }
                    return 0x18026214;
                }
                return 0x18025215;
            }
            if (param_1 == 0x270022) {
                return 0x3807440b;
            }
            if (0x180013 < param_1) {
                if (param_1 == 0x180014) {
                    return 0x18042816;
                }
                if (param_1 == 0x1f001a) {
                    return 0x1805340f;
                }
                if (param_1 == 0x1f001b) {
                    return 0x18053617;
                }
                if (param_1 != 0x1f001c) {
                    if (param_1 == 0x270020) {
                        return 0x18024012;
                    }
                    if (param_1 != 0x270021) {
                        return 0;
                    }
                    return 0x18024216;
                }
                return 0x18043817;
            }
            if (param_1 == 0x180013) {
                return 0x18052616;
            }
            if (param_1 == 0x80002) {
                return 0x1805040c;
            }
            if (param_1 == 0x80003) {
                return 0x18050614;
            }
            if (param_1 != 0x80004) {
                if (param_1 == 0x10000a) {
                    return 0x1805140d;
                }
                if (param_1 == 0x10000b) {
                    return 0x18051615;
                }
                if (param_1 == 0x10000c) {
                    return 0x18041815;
                }
                if (param_1 != 0x180012) {
                    return 0;
                }
                return 0x1805240e;
            }
            return 0x18040814;
        }
        if (param_1 < 0x9f0099) {
            if (param_1 == 0x9f0098) {
                return 0x1928300e;
            }
            if (param_1 < 0x2f002a) {
                if (param_1 == 0x2f0029) {
                    return 0x19005215;
                }
                if (0x180016 < param_1) {
                    if (0x270020 < param_1) {
                        if (param_1 == 0x270021) {
                            return 0x19004216;
                        }
                        if (param_1 == 0x270022) {
                            return 0x7908440c;
                        }
                        if (param_1 == 0x270023) {
                            return 0x19094607;
                        }
                        if (param_1 != 0x270024) {
                            if (param_1 == 0x270025) {
                                return 0x19094a0f;
                            }
                            if (param_1 != 0x270026) {
                                if (param_1 != 0x2f0028) {
                                    return 0;
                                }
                                return 0x19005011;
                            }
                            return 0x19094c13;
                        }
                        return 0x1909480b;
                    }
                    if (param_1 == 0x270020) {
                        return 0x19004012;
                    }
                    if (param_1 == 0x180017) {
                        return 0x19012e0e;
                    }
                    if (param_1 == 0x1f001a) {
                        return 0x190b340f;
                    }
                    if (param_1 != 0x1f001b) {
                        if (param_1 == 0x1f001c) {
                            return 0x19093803;
                        }
                        if (param_1 == 0x1f001d) {
                            return 0x19013a07;
                        }
                        if (param_1 == 0x1f001e) {
                            return 0x19013c0b;
                        }
                        if (param_1 != 0x1f001f) {
                            return 0;
                        }
                        return 0x19013e0f;
                    }
                    return 0x190b3617;
                }
                if (param_1 == 0x180016) {
                    return 0x19012c0a;
                }
                if (0x10000c < param_1) {
                    if (param_1 == 0x10000d) {
                        return 0x19011a05;
                    }
                    if (param_1 == 0x10000e) {
                        return 0x19011c09;
                    }
                    if (param_1 == 0x10000f) {
                        return 0x19011e0d;
                    }
                    if (param_1 != 0x180012) {
                        if (param_1 == 0x180013) {
                            return 0x190b2616;
                        }
                        if (param_1 != 0x180014) {
                            if (param_1 != 0x180015) {
                                return 0;
                            }
                            return 0x19012a06;
                        }
                        return 0x19092802;
                    }
                    return 0x190b240e;
                }
                if (param_1 == 0x10000c) {
                    return 0x19091801;
                }
                if (param_1 == 0x80002) {
                    return 0x190b040c;
                }
                if (param_1 == 0x80003) {
                    return 0x190b0614;
                }
                if (param_1 == 0x80004) {
                    return 0x19090800;
                }
                if (param_1 == 0x80005) {
                    return 0x19010a04;
                }
                if (param_1 == 0x80006) {
                    return 0x19010c08;
                }
                if (param_1 == 0x80007) {
                    return 0x19010e0c;
                }
                if (param_1 != 0x10000a) {
                    if (param_1 != 0x10000b) {
                        return 0;
                    }
                    return 0x190b1615;
                }
                return 0x190b140d;
            }
            if (0x47003c < param_1) {
                if (0x8f0052 < param_1) {
                    if (param_1 == 0x8f0053) {
                        return 0x1908a603;
                    }
                    if (param_1 == 0x8f0054) {
                        return 0x1908a811;
                    }
                    if (param_1 == 0x8f0055) {
                        return 0x1908aa12;
                    }
                    if (param_1 != 0x8f0056) {
                        if (param_1 == 0x8f0057) {
                            return 0x190eae10;
                        }
                        if (param_1 != 0x970090) {
                            if (param_1 != 0x970091) {
                                return 0;
                            }
                            return 0x292b220c;
                        }
                        return 0x1928200d;
                    }
                    return 0x190eac0f;
                }
                if (param_1 == 0x8f0052) {
                    return 0x1908a402;
                }
                if (param_1 == 0x47003d) {
                    return 0x19097a0c;
                }
                if (param_1 == 0x47003e) {
                    return 0x19097c10;
                }
                if (param_1 == 0x470040) {
                    return 0x3900800e;
                }
                if (param_1 == 0x470041) {
                    return 0x39008217;
                }
                if (param_1 == 0x470042) {
                    return 0x2908840f;
                }
                if (param_1 == 0x8f0050) {
                    return 0x1908a000;
                }
                if (param_1 != 0x8f0051) {
                    return 0;
                }
                return 0x1908a201;
            }
            if (param_1 == 0x47003c) {
                return 0x19097808;
            }
            if (param_1 < 0x370034) {
                if (param_1 == 0x370033) {
                    return 0x19096605;
                }
                if (param_1 == 0x2f002a) {
                    return 0x7908540b;
                }
                if (param_1 == 0x2f002b) {
                    return 0x19095606;
                }
                if (param_1 == 0x2f002c) {
                    return 0x1909580a;
                }
                if (param_1 == 0x2f002d) {
                    return 0x19095a0e;
                }
                if (param_1 == 0x2f002e) {
                    return 0x19095c12;
                }
                if (param_1 == 0x370030) {
                    return 0x19006010;
                }
                if (param_1 != 0x370031) {
                    if (param_1 != 0x370032) {
                        return 0;
                    }
                    return 0x7908640a;
                }
                return 0x19006214;
            }
            if (param_1 == 0x370034) {
                return 0x19096809;
            }
            if (param_1 == 0x370035) {
                return 0x19096a0d;
            }
            if (param_1 == 0x370036) {
                return 0x19096c11;
            }
            if (param_1 == 0x470038) {
                return 0x1900700f;
            }
            iVar2 = param_1 - 0x470039;
            if (iVar2 == 0) {
                return 0x19007213;
            }
code_r0x000134e0:
            if (iVar2 == 1) {
                return 0x79087409;
            }
            if (iVar2 != 2) {
                return 0;
            }
            return 0x19097604;
        }
        if (param_1 < 0x1250123) {
            if (param_1 == 0x1250122) {
                return 0x194d4400;
            }
            if (0xfb00f9 < param_1) {
                if (0x11d0110 < param_1) {
                    if (param_1 == 0x11d0111) {
                        return 0x2942220e;
                    }
                    if (param_1 == 0x11d0112) {
                        return 0x2942240f;
                    }
                    if (param_1 == 0x11d0116) {
                        return 0x194e2c0e;
                    }
                    if (param_1 != 0x11d0117) {
                        if (param_1 == 0x11d0118) {
                            return 0x19423011;
                        }
                        if (param_1 != 0x121011e) {
                            if (param_1 != 0x121011f) {
                                return 0;
                            }
                            return 0x29423e11;
                        }
                        return 0x194d3c02;
                    }
                    return 0x19422e12;
                }
                if (param_1 == 0x11d0110) {
                    return 0x19422014;
                }
                if (param_1 == 0xfc00fc) {
                    return 0x1923f800;
                }
                if (param_1 == 0xfd00fd) {
                    return 0x1923fa04;
                }
                if (param_1 != 0xfe00fe) {
                    if (param_1 == 0xff00ff) {
                        return 0x1923fe02;
                    }
                    if (param_1 == 0x1000100) {
                        return 0x19430003;
                    }
                    if (param_1 == 0x1010101) {
                        return 0x19430205;
                    }
                    if (param_1 != 0x11d010f) {
                        return 0;
                    }
                    return 0x19421e13;
                }
                return 0x1923fc01;
            }
            if (param_1 == 0xfb00f9) {
                return 0x392cf212;
            }
            if (0xdf00d0 < param_1) {
                if (param_1 == 0xef00e8) {
                    return 0x1920d006;
                }
                if (param_1 == 0xef00e9) {
                    return 0x1920d208;
                }
                if (param_1 == 0xef00ea) {
                    return 0x2920d40a;
                }
                if (param_1 != 0xf700f0) {
                    if (param_1 == 0xf700f1) {
                        return 0x1920e207;
                    }
                    if (param_1 != 0xf700f2) {
                        if (param_1 != 0xfb00f8) {
                            return 0;
                        }
                        return 0x292ef011;
                    }
                    return 0x2920e409;
                }
                return 0x1920e005;
            }
            if (param_1 == 0xdf00d0) {
                return 0x1928a009;
            }
            if (param_1 == 0x9f0099) {
                return 0x292b320d;
            }
            if (param_1 == 0xa700a0) {
                return 0x1928400f;
            }
            if (param_1 != 0xa700a1) {
                if (param_1 == 0xaf00a8) {
                    return 0x19285010;
                }
                if (param_1 == 0xaf00a9) {
                    return 0x292b520f;
                }
                if (param_1 == 0xbf00b8) {
                    return 0x1928700c;
                }
                if (param_1 != 0xc700c0) {
                    if (param_1 != 0xcf00c8) {
                        return 0;
                    }
                    return 0x1928900a;
                }
                return 0x1928800b;
            }
            return 0x292b420e;
        }
        if (0x1710167 < param_1) {
            if (0x1be01a0 < param_1) {
                if (param_1 == 0x1de01bf) {
                    return 0x19687e05;
                }
                if (param_1 == 0x1de01c0) {
                    return 0x19688006;
                }
                if (param_1 == 0x1de01c1) {
                    return 0x19688207;
                }
                if (param_1 != 0x1de01c2) {
                    if (param_1 == 0x1de01c3) {
                        return 0x1967860a;
                    }
                    if (param_1 != 0x1de01c4) {
                        if (param_1 != 0x1de01c5) {
                            return 0;
                        }
                        return 0x196c8a13;
                    }
                    return 0x1967880b;
                }
                return 0x19688408;
            }
            if (param_1 == 0x1be01a0) {
                return 0x196e4005;
            }
            if (param_1 == 0x1710168) {
                return 0x1941d000;
            }
            if (param_1 == 0x1710169) {
                return 0x1941d202;
            }
            if (param_1 == 0x18c018b) {
                return 0x296e1618;
            }
            if (param_1 == 0x18c018c) {
                return 0x396c1818;
            }
            if (param_1 == 0x1940191) {
                return 0x296e220e;
            }
            if (param_1 == 0x1940192) {
                return 0x29622412;
            }
            if (param_1 != 0x1be019f) {
                return 0;
            }
            return 0x196e3e04;
        }
        if (param_1 == 0x1710167) {
            return 0x1940ce09;
        }
        if (0x1610157 < param_1) {
            if (param_1 == 0x1610158) {
                return 0x1941b001;
            }
            if (param_1 == 0x1610159) {
                return 0x1941b203;
            }
            if (param_1 == 0x1710162) {
                return 0x194bc410;
            }
            if (param_1 != 0x1710163) {
                if (param_1 == 0x1710164) {
                    return 0x1947c804;
                }
                if (param_1 != 0x1710165) {
                    if (param_1 != 0x1710166) {
                        return 0;
                    }
                    return 0x1947cc08;
                }
                return 0x1947ca06;
            }
            return 0x194bc612;
        }
        if (param_1 == 0x1610157) {
            return 0x1940ae0a;
        }
        if (param_1 == 0x1250123) {
            return 0x29424615;
        }
        if (param_1 == 0x1290126) {
            return 0x194d4c01;
        }
        if (param_1 == 0x1290127) {
            return 0x29424e16;
        }
        if (param_1 == 0x1610152) {
            return 0x194ba411;
        }
        if (param_1 == 0x1610153) {
            return 0x194ba613;
        }
        if (param_1 == 0x1610154) {
            return 0x1947a805;
        }
        iVar2 = param_1 + 0xfe9efeab;
        if (iVar2 == 0) {
            return 0x1947aa07;
        }
    }
    if (iVar2 != 1) {
        return 0;
    }
    return 0x1947ac09;
}


/* fcn.0001401c @ 0x1401c */

ulong fcn.0001401c(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint16_t uVar4;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    uVar4 = 0;
    if (*(iVar1 + 0x1e) != 0) {
        do {
            if (*(iVar1 + 2) < uVar3 + 0x24) {
                return 0x800000000000000e;
            }
            iVar2 = iVar1 + 0x24 + uVar3;
            if ((*(iVar2 + 8) == *arg2) && (*(iVar2 + 0x10) == *(arg2 + 8))) {
                *arg3 = iVar2;
                return 0;
            }
            uVar4 = uVar4 + 1;
            uVar3 = uVar3 + *(iVar2 + 2);
        } while (uVar4 < *(iVar1 + 0x1e));
    }
    return 0x800000000000000e;
}


/* fcn.00011f50 @ 0x11f50 */

void fcn.00011f50(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t iVar2;
    
    iVar2 = fcn.00014598(0x149b0);
    *(*0x15100 + 0x97) = *(iVar2 + 15000);
    *(*0x15100 + 0x76) = arg1;
    *(*0x15100 + 0x7e) = arg2;
    *(*0x15100 + 0x82) = *(arg4 + 0x2c);
    uVar1 = *arg3;
    if (((uVar1 & 1) == 0) && ((uVar1 & 2) != 0)) {
        *(*0x15100 + 0x86) = 2;
        *(*0x15100 + 0x87) = 2;
        *(*0x15100 + 0x88) = 2;
        *(*0x15100 + 0x89) = 2;
    }
    else {
        *(*0x15100 + 0x86) = ~(uVar1 >> 2) & 2;
        *(*0x15100 + 0x87) = ~(*arg3 >> 3) & 2;
        *(*0x15100 + 0x88) = ~(*arg3 >> 4) & 2;
        *(*0x15100 + 0x89) = ~(*arg3 >> 5) & 2;
    }
    *(*0x15100 + 0x96) = 4;
    *(*0x15100 + 0x8a) = *(arg4 + 0x1c) & 1;
    *(*0x15100 + 0x8b) = *(arg4 + 0x20) & 1;
    *(*0x15100 + 0x8c) = *(arg4 + 0x24) & 1;
    *(*0x15100 + 0x8d) = *(arg4 + 0x28) & 1;
    *(*0x15100 + 0x8e) = *(arg4 + 0x1c) >> 1 & 3;
    *(*0x15100 + 0x8f) = *(arg4 + 0x20) >> 1 & 3;
    *(*0x15100 + 0x90) = *(arg4 + 0x24) >> 1 & 3;
    *(*0x15100 + 0x91) = *(arg4 + 0x28) >> 1 & 3;
    *(*0x15100 + 0x92) = *(arg4 + 0x1c) >> 3 & 1;
    *(*0x15100 + 0x93) = *(arg4 + 0x20) >> 3 & 1;
    *(*0x15100 + 0x94) = *(arg4 + 0x24) >> 3 & 1;
    *(*0x15100 + 0x95) = *(arg4 + 0x28) >> 3 & 1;
    return;
}


/* fcn.00010260 @ 0x10260 */

int64_t fcn.00010260(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 17888 named .text
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


/* fcn.00013ae8 @ 0x13ae8 */

uint fcn.00013ae8(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uchar auStackX_10 [24];
    
    auStackX_10[0] = arg2;
    uVar3 = arg1 & 0xffffffff;
    iVar2 = fcn.00013b40(auStackX_10);
    uVar1 = fcn.00013b70(uVar3 & 0xffffffff,arg2);
    return *(*((uVar3 >> 0x10 & 0x1f) * 0x1e + iVar2) << 0x10 | (uVar1 & 0xffff0000 | 0xfffd0000) << 8 | uVar1 & 0xffff)
    ;
}


/* fcn.00013b40 @ 0x13b40 */

ulong fcn.00013b40(uint *param_1)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.000144a4();
    if (cVar1 == '\0') {
        *param_1 = 0x13;
        uVar2 = 0x14ae0;
    }
    else {
        *param_1 = 0x12;
        uVar2 = 0x14d20;
    }
    return uVar2;
}


/* fcn.00013b70 @ 0x13b70 */

int fcn.00013b70(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint auStackX_10 [6];
    
    auStackX_10[0] = arg2;
    uVar2 = arg1 & 0xffffffff;
    iVar1 = fcn.00013b40(auStackX_10);
    return *((uVar2 >> 0x10 & 0x1f) * 0x1e + 0x1a + iVar1) + (uVar2 & 0x1ff) * 0x10 + 8;
}


/* fcn.00010fdc @ 0x10fdc */

void fcn.00010fdc(void)

{
    int64_t iVar1;
    char cVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint8_t uVar7;
    int64_t iVar8;
    int64_t var_60h;
    int32_t var_50h;
    int32_t var_4ch;
    int64_t var_48h;
    int32_t var_40h;
    int32_t var_3ch;
    int64_t var_38h;
    int32_t var_30h;
    int32_t var_2ch;
    int64_t var_28h;
    int32_t var_20h;
    int32_t var_1ch;
    int64_t var_18h;
    int32_t var_10h;
    int64_t var_ch;
    int32_t var_4h;
    
    uVar7 = 0;
    iVar5 = 0;
    iVar6 = 0;
    iVar8 = 0x2fc;
    do {
        iVar1 = *0x15108;
        *(*0x15100 + 0x2f4 + iVar5 * 4) = 0;
        *(iVar8 + *0x15100) = *(iVar6 + 0x3c24 + iVar1);
        *(*0x15100 + 0x345 + iVar5 * 4) = *(iVar6 + 0x3c4b + iVar1);
        *(*0x15100 + 0x34d + iVar5 * 4) = *(iVar6 + 0x3c4f + iVar1);
        *(*0x15100 + 0x355 + iVar5 * 4) = *(iVar6 + 0x3c53 + iVar1);
        *(*0x15100 + 0x35d + iVar5 * 4) = *(iVar6 + 0x3c57 + iVar1);
        iVar4 = *(iVar6 + 0x3c27 + iVar1);
        if (iVar4 == 0) {
            uVar3 = uVar7;
            cVar2 = fcn.000144a4();
            if (cVar2 == '\0') {
                cVar2 = fcn.00014480();
                if (cVar2 == '\0') {
code_r0x00011121:
                    iVar4 = 0;
                }
                else if (uVar7 == 0) {
                    iVar4 = 0x8040007;
                }
                else {
                    if (uVar3 != 1) goto code_r0x00011121;
                    iVar4 = 0x8040016;
                }
            }
            else if (uVar7 == 0) {
                iVar4 = 0x90e0006;
            }
            else {
                if (uVar3 != 1) goto code_r0x00011121;
                iVar4 = 0x90c0011;
            }
        }
        iVar1 = *0x15108;
        *(*0x15100 + 0x303 + iVar5 * 4) = iVar4;
        *(iVar5 + 0x30b + *0x15100) = *(iVar6 + 0x3c2b + iVar1);
        *(*0x15100 + 0x31d + iVar5 * 4) = *(iVar6 + 0x3c37 + iVar1);
        *(*0x15100 + 0x315 + iVar5 * 4) = *(iVar6 + 0x3c33 + iVar1);
        *(*0x15100 + 0x325 + iVar5 * 4) = *(iVar6 + 0x3c3b + iVar1);
        *(*0x15100 + 0x32d + iVar5 * 4) = *(iVar6 + 0x3c3f + iVar1);
        *(*0x15100 + 0x335 + iVar5 * 4) = *(iVar6 + 0x3c43 + iVar1);
        *(*0x15100 + 0x30d + iVar5 * 4) = *(iVar6 + 0x3c2f + iVar1);
        *(*0x15100 + 0x33d + iVar5 * 4) = *(iVar6 + 0x3c47 + iVar1);
        *(*0x15100 + 0x371 + iVar5 * 4) = *(iVar6 + 0x3c5b + iVar1);
        if (*(iVar6 + 0x3c23 + iVar1) == '\x01') {
            uVar3 = fcn.00012218(uVar7 + 0x19e019d);
            *(*0x15100 + 0x2f4 + iVar5 * 4) = uVar3 & 0xf1f01ff;
        }
        uVar7 = uVar7 + 1;
        iVar5 = iVar5 + 1;
        iVar8 = iVar8 + 2;
        iVar6 = iVar6 + 0x44;
        if (1 < uVar7) {
            return;
        }
    } while( true );
}


/* fcn.00011a5c @ 0x11a5c */

//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_24h
//WARNING: Removing unreachable block (ram,0x00011e55)

ulong fcn.00011a5c(void)

{
    uint16_t *puVar1;
    int64_t iVar2;
    char cVar3;
    uint8_t uVar4;
    uchar uVar5;
    uint16_t uVar6;
    ulong uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    bool bVar13;
    uint32_t auStackX_18 [2];
    int64_t iStackX_20;
    int16_t var_38h;
    int32_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    uint8_t auStack_58 [4];
    uint8_t auStack_54 [4];
    uint8_t auStack_50 [8];
    uchar auStack_48 [4];
    uchar auStack_44 [4];
    uchar auStack_40 [20];
    int64_t var_24h;
    int64_t var_18h;
    
    (**(*0x150c8 + 0x140))(0x14970,0,auStackX_18);
    uVar7 = fcn.0001401c(auStackX_18[0],0x14960,&iStackX_20);
    uVar8 = 0;
    uVar12 = uVar8;
    cVar3 = fcn.000144dc();
    if (cVar3 != '\0') {
        iVar9 = 0xde;
        uVar10 = uVar8;
        do {
            uVar4 = fcn.00013d94(uVar12);
            uVar11 = uVar4 << 0x10;
            uVar4 = fcn.00013e48(uVar12);
            iVar2 = *0x15108;
            *(*0x15100 + uVar12 * 2 + 3) = uVar11 | uVar4;
            uVar12 = uVar12 + 1;
            *(iVar9 + -0x38 + *0x15100) = *(uVar10 + 0x418 + iVar2);
            *(iVar9 + *0x15100) = *(uVar10 + 0x41a + iVar2);
            iVar9 = iVar9 + 2;
            uVar4 = fcn.000144dc();
            uVar10 = uVar10 + 0x1ec;
        } while (uVar12 < uVar4);
    }
    uVar4 = fcn.00014444();
    **0x15100 = uVar4;
    uVar6 = 9;
    if ((*0xc00f8002 & 0xffe0) != 0x7a00) {
        uVar6 = 7;
    }
    (*0x15100)[1] = uVar6;
    if (*0x14ff0 == 0xff) {
        *0x14ff0 = *0xc00f8008;
    }
    (*0x15100)[2] = *0x14ff0;
    *(*0x15100 + 0x8f) = 1;
    puVar1 = *0x15100;
    puVar1[0x8d] = 0;
    puVar1[0x8e] = 0xfed0;
    puVar1 = *0x15100;
    puVar1[0x4e] = 0;
    puVar1[0x4f] = 0xfd00;
    *(*0x15100 + 0x28f) = 0x1800;
    *(*0x15100 + 0x291) = 0xfe000000;
    (*0x15100)[0x16a] = *0xfd882778 & 0xffe0;
    (*0x15100)[0x16b] = 0xad;
    *(*0x15100 + 0xfd) = *(*0x15108 + 0x1d);
    *(*0x15100 + 0x1fb) = *(iStackX_20 + 0x1c) & 1;
    fcn.00014188(auStack_58,auStack_48,auStack_54,auStack_44,auStack_50,auStack_40);
    *(*0x15100 + 0x50) = auStack_58[0] & 0x1f;
    *(*0x15100 + 0xa1) = auStack_54[0] & 0x1f;
    *(*0x15100 + 0x51) = auStack_50[0] & 0x1f;
    *(*0x15100 + 0xa3) = auStack_48[0];
    *(*0x15100 + 0x52) = auStack_44[0];
    *(*0x15100 + 0xa5) = auStack_40[0];
    fcn.000118b0();
    if (*0xc00b8002 == -1) {
        *(*0x15100 + 0x170) = 0;
    }
    else {
        *(*0x15100 + 0x170) = *0xc00b8096;
    }
    uVar5 = fcn.000142b0();
    *(*0x15100 + 0x141) = uVar5;
    *(*0x15100 + 0x14e) = *(*0x15108 + 0x3a78) & 1;
    uVar12 = uVar8;
    cVar3 = fcn.000144dc();
    if (cVar3 != '\0') {
        uVar10 = uVar8;
        do {
            iVar9 = uVar10 + 0x415;
            uVar10 = uVar10 + 0x1ec;
            *(*0x15100 + uVar12 + 0x29d) = *(iVar9 + *0x15108);
            uVar12 = uVar12 + 1;
            uVar4 = fcn.000144dc();
        } while (uVar12 < uVar4);
    }
    if ((*0xc00f8002 + 0xae7a < 2) || ((~*0xfe001e44 & 1) == 0)) {
        bVar13 = false;
    }
    else {
        bVar13 = *((*0xc00fd010 & 0xfffff000) + 0x60) != 0x7fff;
    }
    *(*0x15100 + 0x2b9) = bVar13;
    *(*0x15100 + 0x29b) = *(*0x15108 + 0x3c0b) & 3;
    if (*0xc00a1000 != -1) {
        uVar12 = *0xc00a1010 & 0xfffffff0;
        if ((*0xc00a1010 & 6) == 4) {
            uVar12 = uVar12 + (*0xc00a1014 << 0x20);
        }
        bVar13 = uVar12 == 0;
        if (bVar13) {
            *0xc00a1010 = 0xfe600000;
            uVar12 = 0xfe600000;
        }
        *(*0x15100 + 0x15d) = *(uVar12 + 0xc110);
        if (bVar13) {
            *0xc00a1010 = 0;
            *0xc00a1014 = 0;
        }
    }
    cVar3 = fcn.00014444();
    if (cVar3 == '\x03') {
code_r0x00011ed3:
        uVar5 = 10;
    }
    else if (cVar3 == '\x04') {
        uVar5 = 0xe;
    }
    else {
        if (cVar3 == '\x05') goto code_r0x00011ed3;
        uVar5 = 0;
    }
    *(*0x15100 + 0x16f) = uVar5;
    cVar3 = fcn.00014444();
    iVar9 = *0x15108;
    if (cVar3 != '\x03') {
        if (cVar3 == '\x04') {
            uVar8 = 10;
            goto code_r0x00011efb;
        }
        if (cVar3 != '\x05') goto code_r0x00011efb;
    }
    uVar8 = 4;
code_r0x00011efb:
    *(*0x15100 + 0x2df) = uVar8;
    *(*0x15100 + 0x181) = *(iVar9 + 0x18) >> 1 & 1;
    *(*0x15100 + 0x36d) = *(iVar9 + 0x18) >> 2 & 1;
    return uVar7;
}


/* fcn.00014658 @ 0x14658 */

int64_t fcn.00014658(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int *piVar2;
    ulong uStackX_20;
    int *apiStack_18 [2];
    
    iVar1 = arg1;
    if ((*0x150f8 == NULL) && (fcn.00014614(), *0x150f8 == NULL)) {
        return -0x7ffffffffffffffa;
    }
    uStackX_20 = 0;
    iVar1 = fcn.00014788(iVar1,apiStack_18,&uStackX_20);
    if (-1 < iVar1) {
        if (apiStack_18[0] != NULL) {
            for (piVar2 = apiStack_18[0]; piVar2 < apiStack_18[0][1] + apiStack_18[0]; piVar2 = piVar2 + 1) {
                if ((*piVar2 == arg1) && (*(piVar2 + -1) == '\b')) {
                    if (((arg3 == 2) && (piVar2[1] == '\v')) || ((arg3 == 4 && (piVar2[1] == '\f')))) {
                        if (piVar2 + 5 != arg2) {
                            fcn.00010280(piVar2 + 5,arg2,arg3);
                        }
                        (*(*0x150f8)[1])(*0x150f8,uStackX_20);
                        uStackX_20 = 0;
                        iVar1 = (***0x150f8)(*0x150f8,apiStack_18[0],apiStack_18[0][1],&uStackX_20);
                    }
                    else {
                        iVar1 = -0x7ffffffffffffffc;
                    }
                    (**(*0x150c8 + 0x48))(apiStack_18[0]);
                    return iVar1;
                }
            }
        }
        iVar1 = -0x7ffffffffffffff2;
    }
    return iVar1;
}


/* fcn.000144dc @ 0x144dc */

uchar fcn.000144dc(void)

{
    char cVar1;
    
    cVar1 = fcn.00014444();
    if (cVar1 != '\x03') {
        if (cVar1 == '\x04') {
            return 0x1c;
        }
        if (cVar1 != '\x05') {
            return 0;
        }
    }
    return 0xc;
}


/* fcn.00013d94 @ 0x13d94 */

uchar fcn.00013d94(uint32_t arg1)

{
    uint in_register_0000000c;
    uint64_t uVar1;
    
    uVar1 = CONCAT44(in_register_0000000c,arg1);
    if (0xe < uVar1) {
        if (uVar1 < 0x16) {
            if (uVar1 != 0x15) {
                if (uVar1 == 0xf) {
                    return 0x1d;
                }
                if ((((uVar1 != 0x10) && (uVar1 != 0x11)) && (uVar1 != 0x12)) && ((uVar1 != 0x13 && (uVar1 != 0x14)))) {
                    return 0xff;
                }
            }
        }
        else if ((uVar1 != 0x16) && (uVar1 != 0x17)) {
            return 0xff;
        }
        return 0x1b;
    }
    if (uVar1 == 0xe) {
        return 0x1d;
    }
    if (uVar1 < 8) {
        if (((uVar1 == 7) || (uVar1 == 0)) ||
           ((uVar1 == 1 || ((((uVar1 == 2 || (uVar1 == 3)) || (uVar1 == 4)) || ((uVar1 == 5 || (uVar1 == 6)))))))) {
            return 0x1c;
        }
    }
    else {
        if (uVar1 == 8) {
            return 0x1d;
        }
        if (uVar1 == 9) {
            return 0x1d;
        }
        if (uVar1 == 10) {
            return 0x1d;
        }
        if (uVar1 == 0xb) {
            return 0x1d;
        }
        if (uVar1 == 0xc) {
            return 0x1d;
        }
        if (uVar1 == 0xd) {
            return 0x1d;
        }
    }
    return 0xff;
}


/* fcn.00013e48 @ 0x13e48 */

uint8_t fcn.00013e48(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint8_t uStackX_8;
    
    uVar2 = fcn.000144dc();
    if (arg1 < (uVar2 & 0xff)) {
        iVar1 = (arg1 >> 2) * 3;
        uStackX_8 = *((*(iVar1 + 0x14ff9) | 0xfd00) << 0x10) >> ((arg1 - *(iVar1 + 0x14ffa)) * '\x04' & 0x3fU) & 7;
    }
    return uStackX_8;
}


/* fcn.00014188 @ 0x14188 */

ulong fcn.00014188(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_30h,int64_t arg_38h)

{
    char cVar1;
    ulong uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t uVar8;
    int64_t var_30h;
    int32_t var_28h;
    int64_t var_20h;
    int32_t var_18h;
    uint32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    
    fcn.00010260(&var_30h,0xc);
    fcn.00010260(&var_20h,0xc);
    uVar8 = 0xf;
    var_10h = *0xfe001920 & 0xf;
    var_ch = *0xfe001920 >> 4 & 0xf;
    var_8h = *0xfe001920 >> 8 & 0xf;
    cVar1 = fcn.000144a4();
    if (cVar1 == '\0') {
        iVar6 = 0x14a60;
    }
    else {
        iVar6 = 0x149f0;
        uVar8 = 0xd;
    }
    iVar5 = 0;
    iVar7 = 3;
    do {
        uVar4 = 0;
        do {
            if (*(iVar6 + 5 + uVar4 * 8) == *(&var_10h + iVar5)) {
                *(&var_30h + iVar5) = *(iVar6 + uVar4 * 8);
                *(&var_20h + iVar5) = *(iVar6 + 4 + uVar4 * 8);
                break;
            }
            uVar3 = uVar4 + 1;
            uVar4 = uVar3;
        } while (uVar3 < uVar8);
        iVar5 = iVar5 + 4;
        iVar7 = iVar7 + -1;
        if (iVar7 == 0) {
            if (((var_30h == 0) || (var_30h._4_4_ == 0)) || (var_28h == 0)) {
                uVar2 = 0x8000000000000003;
            }
            else {
                *arg1 = var_30h;
                *arg2 = var_20h;
                *arg3 = var_30h._4_4_;
                *arg4 = var_20h._4_4_;
                *arg_30h = var_28h;
                *arg_38h = var_18h;
                uVar2 = 0;
            }
            return uVar2;
        }
    } while( true );
}


/* fcn.000118b0 @ 0x118b0 */

void fcn.000118b0(void)

{
    uchar uVar1;
    char cVar2;
    uint16_t *puVar3;
    uint16_t uVar4;
    int64_t iVar5;
    uint16_t uVar6;
    uchar *puVar7;
    int64_t iVar8;
    
    iVar5 = 0;
    puVar7 = *0x15108 + 0x39d9;
    iVar8 = 0x12;
    do {
        *(iVar5 + 0x2c2 + *0x15100) = puVar7[-1];
        uVar1 = *puVar7;
        puVar7 = puVar7 + 8;
        *(iVar5 + 0x2e2 + *0x15100) = uVar1;
        iVar5 = iVar5 + 1;
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    puVar3 = 0xc00f8002;
    uVar4 = 0xffe0;
    uVar6 = 0x7a00;
    if ((*0xc00f8002 & 0xffe0) == 0x7a00) {
code_r0x0001191d:
        if ((*puVar3 & uVar4) != uVar6) goto code_r0x00011a36;
        cVar2 = fcn.00014444();
        if (cVar2 != '\x04') goto code_r0x00011a36;
    }
    else {
        uVar4 = 0xffe0;
        uVar6 = 0x7a00;
        cVar2 = fcn.00014444();
        if (cVar2 != '\x04') goto code_r0x0001191d;
    }
    *(*0x15100 + 0x2c2) = 0xff;
    *(*0x15100 + 0x2c3) = 0xff;
    *(*0x15100 + 0x2c4) = 0xff;
    *(*0x15100 + 0x2c5) = 0xff;
    *(*0x15100 + 0x2c6) = 0xff;
    *(*0x15100 + 0x2c7) = 0xff;
    *(*0x15100 + 0x2c8) = 0xff;
    *(*0x15100 + 0x2c9) = 0xff;
    *(*0x15100 + 0x2ca) = 0xff;
    *(*0x15100 + 0x2cb) = 7;
    *(*0x15100 + 0x2cc) = 0;
    *(*0x15100 + 0x2cd) = 0xff;
    *(*0x15100 + 0x2ce) = 0x10;
    *(*0x15100 + 0x2cf) = 0x24;
    *(*0x15100 + 0x2d0) = 8;
    *(*0x15100 + 0x2d1) = 4;
    *(*0x15100 + 0x2d2) = 0xff;
    *(*0x15100 + 0x2d3) = 0xff;
code_r0x00011a36:
    *(*0x15100 + 0x2e1) = *(*0x15108 + 0x3a68) >> 1 & 1;
    return;
}


/* fcn.000142b0 @ 0x142b0 */

ulong fcn.000142b0(void)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uchar uVar3;
    uint32_t auStackX_8 [8];
    
    fcn.000102f0(1,auStackX_8,0,0);
    uVar3 = 4;
    if ((auStackX_8[0] & 0xfff0ff0) == 0x906a0) {
        if (*0xc0000002 < 0x4622) {
            uVar2 = *0xc0000002 - 0x4601;
            if ((*0xc0000002 - 0x4601 & 0xffffffdf) != 0) {
                if (*0xc0000002 != 0x4602) {
                    if (*0xc0000002 == 0x4609) goto code_r0x000143cb;
                    uVar1 = *0xc0000002 - 0x460a;
                    uVar2 = uVar1;
                    if ((0xd < uVar1) || ((0x2401U >> (uVar1 & 0x1f) & 1) == 0)) {
                        if (*0xc0000002 == 0x4619) goto code_r0x000143cb;
                        uVar2 = *0xc0000002 - 0x461a;
                        if (2 < *0xc0000002 - 0x461a) goto code_r0x0001430f;
                    }
                }
code_r0x0001430d:
                uVar3 = 2;
                goto code_r0x0001430f;
            }
        }
        else {
            uVar2 = 0;
            if (*0xc0000002 == 0x4622) goto code_r0x0001430d;
            if (((((*0xc0000002 != 0x4629) && (*0xc0000002 != 0x4641)) && (*0xc0000002 != 0x4645)) &&
                ((*0xc0000002 != 0x4649 && (*0xc0000002 != 0x4659)))) && (*0xc0000002 != 0x4661)) goto code_r0x0001430f;
        }
    }
    else {
        uVar1 = (auStackX_8[0] & 0xfff0ff0) - 0xb06a0;
        uVar2 = uVar1;
        if (uVar1 != 0) {
            if (uVar1 != 0x40) goto code_r0x0001430f;
            uVar2 = *0xc0000002;
            if ((*0xc0000002 != 0x4614) && (uVar1 = *0xc0000002 - 0x4617, uVar2 = uVar1, (uVar1 & 0xfffffffa) != 0))
            goto code_r0x0001430f;
            goto code_r0x0001430d;
        }
        uVar2 = *0xc0000002;
        if (*0xc0000002 < 0xa706) goto code_r0x0001430f;
        if (0xa70b < *0xc0000002) {
            uVar1 = *0xc0000002 - 0xa715;
            uVar2 = uVar1;
            if ((7 < uVar1) || ((0xc3U >> (uVar1 & 0x1f) & 1) == 0)) goto code_r0x0001430f;
        }
    }
code_r0x000143cb:
    uVar3 = 0;
code_r0x0001430f:
    return CONCAT71(uVar2 >> 8,uVar3);
}


/* fcn.000121bc @ 0x121bc */

bool fcn.000121bc(uint32_t arg1)

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


/* fcn.00014614 @ 0x14614 */

void fcn.00014614(void)

{
    (**(*0x150c8 + 0x140))(0x14940,0,0x150f0);
    //WARNING: Could not recover jumptable at 0x00014650. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x150c8 + 0x140))(0x14930,0,0x150f8);
    return;
}


/* fcn.00014788 @ 0x14788 */

int64_t fcn.00014788(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t noname_0;
    int64_t iVar3;
    uint auStackX_8 [2];
    int *piStackX_20;
    
    auStackX_8[0] = arg1;
    iVar3 = 0;
    if ((*0x150f0 == 0) && (fcn.00014614(), *0x150f0 == 0)) {
        iVar1 = -0x7ffffffffffffffa;
    }
    else {
        auStackX_8[0] = 0;
        do {
            noname_0 = iVar3;
            iVar1 = (**(*0x150f0 + 8))(iVar3,&piStackX_20,auStackX_8,arg3);
            if (iVar1 == -0x7ffffffffffffff2) goto code_r0x0001481b;
            iVar3 = iVar3 + 1;
        } while (*piStackX_20 != 0x54445344);
        uVar2 = fcn.00014404(noname_0,piStackX_20[1],piStackX_20);
        *arg2 = uVar2;
    }
code_r0x0001481b:
    return iVar1;
}


