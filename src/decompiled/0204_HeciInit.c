// decompiled by r2ghidra: 0204_HeciInit.pe32
// functions: 86

/* entry0 @ 0x10474 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.00010488(arg1,arg2);
    fcn.000105e8(arg1,arg2);
    return;
}


/* fcn.00010488 @ 0x10488 */

ulong fcn.00010488(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0;
    int64_t *piVar6;
    int64_t iStackX_8;
    ulong *puStackX_10;
    ulong uStackX_18;
    
    *0x167e8 = *(arg2 + 0x60);
    *0x167f0 = *(arg2 + 0x58);
    *0x167e0 = arg2;
    iStackX_8 = arg1;
    fcn.00012094();
    iVar3 = fcn.00012094();
    noname_0 = 0x16100;
    iVar3 = fcn.000120c4(0x16100,iVar3);
    if (iVar3 == 0) {
        uVar4 = fcn.000103f0();
        fcn.000103a0();
        uVar1 = in(0x1808);
        fcn.00010280(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            fcn.00010350();
        }
        fcn.00010280(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.000103a0();
        }
        else {
            fcn.00010390();
        }
    }
    fcn.00010360(1,0,0,&iStackX_8);
    iVar3 = (**(*0x167e8 + 0x140))(0x16078,0,&puStackX_10);
    *0x16808 = '\0';
    if (-1 < iVar3) {
        uStackX_18 = 0;
        (**puStackX_10)(puStackX_10,0x16808);
        if ((*0x16808 != '\0') && (iVar3 = (*puStackX_10[1])(puStackX_10,&uStackX_18), -1 < iVar3)) {
            *0x16810 = uStackX_18;
        }
    }
    (**(*0x167e8 + 0x140))(0x15fb0,0);
    uVar4 = 0;
    if (*(*0x167e0 + 0x68) != 0) {
        piVar6 = *(*0x167e0 + 0x70);
        do {
            if ((*0x16098 == *piVar6) && (*0x160a0 == piVar6[1])) {
                *0x16838 = (*(*0x167e0 + 0x70))[uVar4 * 3 + 2];
                return 0;
            }
            uVar4 = uVar4 + 1;
            piVar6 = piVar6 + 3;
        } while (uVar4 < *(*0x167e0 + 0x68));
    }
    *0x16838 = 0;
    return 0x800000000000000e;
}


/* fcn.000105e8 @ 0x105e8 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.000105e8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong noname_0;
    int64_t iStackX_8;
    int64_t iStackX_10;
    uchar auStackX_18 [8];
    uchar auStackX_20 [8];
    int64_t var_30h;
    int64_t var_38h;
    uchar auStack_28 [16];
    int64_t var_bp_10h;
    
    noname_0 = 0xe04;
    iStackX_8 = arg1;
    iStackX_10 = arg2;
    fcn.00012268(0xe04);
    *0x169e1 = 0;
    iVar1 = fcn.00011f9c(noname_0,0x78);
    *0x169e8 = iVar1;
    if (iVar1 == 0) {
        iVar1 = 0xe84;
    }
    else {
        *(iVar1 + 0x38) = fcn.00013a78;
        *(iVar1 + 0x20) = fcn.000138f4;
        *(iVar1 + 0x28) = fcn.0001347c;
        *(iVar1 + 0x30) = fcn.00013628;
        *(iVar1 + 0x40) = fcn.00013024;
        *(iVar1 + 0x50) = 0x1314c;
        *(iVar1 + 0x48) = fcn.000139e0;
        *(iVar1 + 0x58) = fcn.00013b4c;
        *(iVar1 + 0x60) = fcn.00013c20;
        iVar1 = fcn.00013024(0);
        if (iVar1 < 0) {
            iVar1 = 0xea4;
        }
        else {
            iVar1 = (**(*0x167e8 + 0x148))(*0x169e8 + 8,0x15f20,*0x169e8 + 0x20);
            if (-1 < iVar1) {
                fcn.00013b4c(&iStackX_10);
                fcn.00013c20(&iStackX_10);
                fcn.00011418();
                iVar1 = fcn.00012094();
                iVar1 = fcn.000120c4(0x15f50,iVar1);
                if (iVar1 != 0) {
                    *(*0x169e8 + 0x70) = *(iVar1 + 0x34) >> 8 & 0xf;
                }
                (**(*0x167e8 + 0x170))(0x200,8,0x10a68,0,0x16058,&iStackX_8);
                *0x169e1 = 0;
                if ((*(*0x167e0 + 8) < 0x20000) ||
                   (fcn.00012050(0x10,0x114ec,0x169e1,&iStackX_8), *(*0x167e0 + 8) < 0x20000)) {
                    iVar1 = -0x7ffffffffffffffd;
                }
                else {
                    iVar1 = fcn.00012050(8,0x10c44,0,&iStackX_8);
                }
                fcn.00012268(0xe24);
                (**(*0x167e8 + 0x50))(0x200,8,0x10a18,0,&iStackX_10);
                (**(*0x167e8 + 0xa8))(0x16088,iStackX_10,auStack_28);
                (**(*0x167e8 + 0x68))(iStackX_10);
                return iVar1;
            }
            iVar1 = 0xec4;
        }
    }
    fcn.00012268(iVar1);
    iVar1 = (**(*0x167e8 + 0x140))(90000,0,auStackX_18);
    *0x169e1 = 1;
    if (iVar1 < 0) {
        (**(*0x167e8 + 0x50))(0x200,8,fcn.000114ec,0x169e1,&iStackX_8);
        iVar1 = (**(*0x167e8 + 0xa8))(90000,iStackX_8,auStackX_20);
    }
    else {
        fcn.000114ec(0,0x169e1);
    }
    return iVar1;
}


/* fcn.00012094 @ 0x12094 */

int64_t fcn.00012094(void)

{
    if (*0x16800 == 0) {
        fcn.00011fec(0x16018,0x16800);
    }
    return *0x16800;
}


/* fcn.00011fec @ 0x11fec */

ulong fcn.00011fec(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x167e0;
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


/* fcn.000120c4 @ 0x120c4 */

int16_t * fcn.000120c4(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    
    do {
        if (*arg2 == -1) {
            arg2 = 0;
code_r0x000120e4:
            if ((arg2 == NULL) ||
               ((*CONCAT44(in_register_0000000c,arg1) == *(arg2 + 8) &&
                (*(CONCAT44(in_register_0000000c,arg1) + 8) == *(arg2 + 0x10))))) {
                return arg2;
            }
        }
        else if (*arg2 == 4) goto code_r0x000120e4;
        arg2 = arg2 + *(arg2 + 2);
    } while( true );
}


/* fcn.000103f0 @ 0x103f0 */

uint64_t fcn.000103f0(void)

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


/* fcn.000103a0 @ 0x103a0 */

void fcn.000103a0(void)

{
    return;
}


/* fcn.00010280 @ 0x10280 */

uint64_t fcn.00010280(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    //[00] -r-x section size 23680 named .text
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010352 @ 0x10352 */

void fcn.00010352(void)

{
    return;
}


/* fcn.00010390 @ 0x10390 */

void fcn.00010390(void)

{
    return;
}


/* fcn.00010360 @ 0x10360 */

uint64_t fcn.00010360(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00012268 @ 0x12268 */

uint64_t fcn.00012268(int64_t arg1)

{
    int64_t in_R8;
    int64_t in_R9;
    
    out(0x80,arg1);
    fcn.00012194(0x162b8,arg1 & 0xffffffff,in_R8,in_R9);
    return arg1 & 0xffffffff;
}


/* fcn.00012194 @ 0x12194 */

void fcn.00012194(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
    
    fcn.00014bf4(&cStackY_108,0x100,0,arg1,in_stack_ffffffffffffff28,in_stack_ffffffffffffff30);
    uVar3 = fcn.000103f0();
    fcn.000103a0();
    out(0x72,3);
    cVar2 = in(0x73);
    if ((uVar3 >> 9 & 1) != 0) {
        fcn.00010390();
    }
    if ((cVar2 == '\x01') && (iVar5 = 0, cStackY_108 != '\0')) {
        do {
            iVar4 = iVar5 + 1;
            pcVar1 = acStackY_107 + iVar5;
            iVar5 = iVar4;
        } while (*pcVar1 != '\0');
        if ((((iVar4 != 0) && (*0xfe1000e8 != 0xff)) && ((*0xfe1000e8 & 1) != 0)) &&
           (((*0xfe1000e8 >> 1 & 3) - 2 < 2 && (arg1_00 = fcn.000159f4(in_stack_ffffffffffffff20), arg1_00 != NULL))))
        {
            fcn.00015b14(arg1_00);
        }
    }
    return;
}


/* fcn.00011f9c @ 0x11f9c */

int64_t fcn.00011f9c(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_18 [2];
    
    iVar1 = (**(*0x167e8 + 0x40))(4,arg1,aiStackX_18);
    if (iVar1 < 0) {
        aiStackX_18[0] = 0;
    }
    if ((aiStackX_18[0] != 0) && (arg1 != 0)) {
        aiStackX_18[0] = fcn.000102d0(aiStackX_18[0],arg1);
    }
    return aiStackX_18[0];
}


/* fcn.000102d0 @ 0x102d0 */

int64_t fcn.000102d0(int64_t arg1,int64_t arg2)

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


/* fcn.00013024 @ 0x13024 */

int64_t fcn.00013024(int64_t arg1)

{
    char cVar1;
    int64_t arg1_00;
    int64_t iVar2;
    uint64_t in_R8;
    
    arg1_00 = fcn.00012f20(arg1);
    if (arg1_00 != 0) {
        in_R8 = (arg1 & 7 | 0xb0) << 0xc;
        if ((*(arg1_00 + 4) & 8) != 0) {
            return 0;
        }
        if (*(in_R8 + 0xc0000040) - 1 < 0xfffffffe) {
            if ((*(in_R8 + 0xc0000040) & 0x20) != 0) {
                return -0x7ffffffffffffff9;
            }
            *(in_R8 + 0xc00000a0) = *(in_R8 + 0xc00000a0) & 0xfc;
            cVar1 = fcn.00012fe0(arg1_00,15000000);
            if ((cVar1 == '\0') && (iVar2 = fcn.00013a78(arg1 & 0xffffffff), iVar2 < 0)) {
                fcn.00011d8c(2,iVar2 & 0x1f | 0x3008400,in_R8,0x160b8);
                return iVar2;
            }
            if ((*(arg1_00 + 4) & 8) != 0) {
                return 0;
            }
            *(arg1_00 + 4) = *(arg1_00 + 4) & 0xffffffef | 0xc;
            return 0;
        }
    }
    fcn.00011d8c(2,0x3008407,in_R8,0x160b8);
    return -0x7ffffffffffffff9;
}


/* fcn.000114ec @ 0x114ec */

void fcn.000114ec(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint uVar2;
    uint32_t uVar3;
    char32_t cVar4;
    char *pcVar5;
    uint32_t uVar6;
    int64_t iVar7;
    uint *puVar8;
    uint *puVar9;
    uint8_t *puVar10;
    uint64_t uVar11;
    uint *noname_0;
    uint8_t uVar12;
    int64_t iVar13;
    uint8_t *arg1_00;
    char32_t *pcVar14;
    uint8_t uVar15;
    uint *puVar16;
    int64_t iVar17;
    ulong *puStackX_18;
    uint *puStackX_20;
    
    puVar16 = NULL;
    puVar10 = NULL;
    puStackX_20 = NULL;
    puVar9 = NULL;
    if ((0x7f < *0x16000) && ((**(*0x167e8 + 0x140))(90000,0,&puStackX_18), puStackX_18 != NULL)) {
        iVar7 = fcn.00012094();
        noname_0 = 0x15fa0;
        puVar8 = fcn.000120c4(0x15fa0,iVar7);
        if (puVar8 == NULL) {
            puVar8 = fcn.00011f9c(noname_0,0xa8);
            if (puVar8 == NULL) goto code_r0x0001181e;
            noname_0 = 0x162f0;
            iVar7 = 4;
            puVar16 = puVar8;
            do {
                puVar16 = puVar16 + 7;
                uVar2 = *noname_0;
                noname_0 = noname_0 + 3;
                *puVar16 = uVar2;
                iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            *(puVar8 + 0x19) = 4;
            puVar16 = puVar8;
            puStackX_20 = puVar8;
        }
        iVar7 = 0;
        do {
            iVar17 = iVar7;
            iVar7 = iVar17 + 1;
        } while (*(iVar17 + 0x16215) != '\0');
        puVar9 = fcn.00011f9c(noname_0,iVar17 + 0xb);
        if (puVar9 != NULL) {
            *puVar9 = 0xfffe080e;
            *(puVar9 + 1) = 1;
            *(puVar9 + 5) = *0x16000;
            fcn.00011cf8(*(puVar9 + 1) + puVar9,(iVar17 + 0xb) - *(puVar9 + 1),0x160f8);
            iVar7 = (**puStackX_18)(puStackX_18,0,puVar9 + 2,puVar9);
            if (-1 < iVar7) {
                iVar7 = 0;
                do {
                    iVar17 = iVar7;
                    iVar7 = iVar17 + 1;
                } while (*(iVar17 + 0x1621d) != '\0');
                iVar7 = (*(puVar8 + 0x19) - 1) * 0x19 + 0x20;
                iVar17 = (iVar17 + 2) * *(puVar8 + 0x19) + iVar7;
                puVar10 = fcn.00011f9c(iVar7,iVar17);
                if (puVar10 != NULL) {
                    *puVar10 = *0x16000;
                    cVar1 = *(puVar8 + 0x19);
                    puVar10[2] = 0xfe;
                    puVar10[3] = 0xff;
                    uVar15 = 0;
                    puVar10[4] = 1;
                    uVar12 = cVar1 * '\x19' + 6;
                    puVar10[1] = uVar12;
                    arg1_00 = puVar10 + uVar12;
                    puVar10[5] = *(puVar8 + 0x19);
                    if (*(puVar8 + 0x19) != '\0') {
                        do {
                            uVar11 = uVar15;
                            uVar15 = uVar15 + 1;
                            iVar7 = uVar11 * 0x19;
                            puVar10[iVar7 + 6] = uVar15;
                            uVar3 = puVar8[uVar11 * 7 + 7];
                            uVar6 = (uVar3 & 7 | 0xb0) << 0xc;
                            if (*(uVar6 + 0xc0000002) == -1) {
                                if (puVar10 + iVar7 + 7 != puVar8 + uVar11 * 7 + 8) {
                                    fcn.00010290(puVar10 + iVar7 + 7,puVar8 + uVar11 * 7 + 8,0x18);
                                }
                            }
                            else {
                                pcVar14 = str._H_dhl;
                                iVar13 = 6;
                                do {
                                    cVar4 = *pcVar14;
                                    pcVar14 = pcVar14 + 1;
                                    uVar11 = cVar4 + uVar6;
                                    *(puVar10 + iVar7 + -0x1631d + pcVar14) =
                                         *((uVar11 >> 4 & 0x10000000 | uVar11 & 0xffffffff) + 0xc0000000);
                                    iVar13 = iVar13 + -1;
                                } while (iVar13 != 0);
                            }
                            uVar11 = 0;
code_r0x00011771:
                            if (*(uVar11 * 0xc + 0x162f0) != uVar3) goto code_r0x0001177e;
                            iVar7 = uVar11 * 3;
                            fcn.00011cf8(arg1_00,iVar17 - puVar10[1],*(uVar11 * 0xc + 0x162f4));
                            iVar13 = 0;
                            pcVar5 = *(iVar7 * 4 + 0x162f4);
                            cVar1 = *pcVar5;
                            iVar7 = iVar13;
                            while (cVar1 != '\0') {
                                iVar7 = iVar7 + 1;
                                cVar1 = pcVar5[iVar7];
                            }
                            arg1_00 = arg1_00 + iVar7 + 1;
                            cVar1 = *pcVar5;
                            while (cVar1 != '\0') {
                                iVar13 = iVar13 + 1;
                                cVar1 = pcVar5[iVar13];
                            }
                            iVar17 = iVar17 + (-1 - iVar13);
code_r0x000117e6:
                            if (*(puVar8 + 0x19) <= uVar15) {
                                puVar16 = puStackX_20;
                                break;
                            }
                        } while( true );
                    }
                    (**puStackX_18)(puStackX_18,0,puVar10 + 2,puVar10);
                }
            }
        }
    }
code_r0x0001181e:
    if (arg1 != 0) {
        (**(*0x167e8 + 0x70))();
    }
    if ((arg2 != 0) && (*arg2 == '\x01')) {
        fcn.000123f8(0);
        fcn.000123f8(1);
        fcn.000123f8(4);
        fcn.000123f8(2);
        fcn.000123f8(3);
    }
    if (puVar16 != NULL) {
        (**(*0x167e8 + 0x48))(puVar16);
    }
    if (puVar10 != NULL) {
        (**(*0x167e8 + 0x48))(puVar10);
    }
    if (puVar9 != NULL) {
        (**(*0x167e8 + 0x48))(puVar9);
    }
    return;
code_r0x0001177e:
    uVar12 = uVar11 + 1;
    uVar11 = uVar12;
    if (3 < uVar12) goto code_r0x000117e6;
    goto code_r0x00011771;
}


/* fcn.00013b4c @ 0x13b4c */

ulong fcn.00013b4c(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint uVar3;
    ulong in_R8;
    
    uVar1 = *0xc00b0040;
    if (arg1 == 0) {
        return 0x8000000000000002;
    }
    if (*0xc00b0002 == -1) {
        fcn.00011d8c(2,0x300850e,in_R8,0x160b8);
        *arg1 = 0xf;
        return 0x800000000000000e;
    }
    uVar3 = 0xf;
    uVar2 = *0xc00b0040 & 0xf;
    if (uVar2 == 5) {
        if ((*0xc00b0040 & 0xf000) == 0) {
            *arg1 = 0;
            goto code_r0x00013bf6;
        }
    }
    else if (uVar2 == 2) {
        *arg1 = 2;
        goto code_r0x00013bf6;
    }
    if (uVar2 == 1) {
        *arg1 = 1;
    }
    else if (uVar2 == 6) {
        *arg1 = 6;
    }
    else {
        if (uVar2 == 7) {
            uVar3 = 7;
        }
        *arg1 = uVar3;
    }
code_r0x00013bf6:
    if ((uVar1 >> 0xb & 1) != 0) {
        *arg1 = *arg1 | 0x200;
    }
    if ((uVar1 & 0x200) != 0) {
        *arg1 = *arg1 | 0x80;
    }
    if ((uVar1 >> 0x18 & 1) != 0) {
        *arg1 = *arg1 | 0x100;
    }
    return 0;
}


/* fcn.00013c20 @ 0x13c20 */

ulong fcn.00013c20(int64_t arg1)

{
    uint32_t uVar1;
    ulong in_R8;
    
    if (arg1 == 0) {
        return 0x8000000000000002;
    }
    if (*0xc00b0002 == -1) {
        fcn.00011d8c(2,0x300860e,in_R8,0x160b8);
        *arg1 = 6;
        return 0x800000000000000e;
    }
    if ((~(*((*0xc00fd010 & 0xfffff000) + 4) >> 0xd) & 1) == 0) {
        uVar1 = *0xc00b0040 >> 0x10 & 0xf;
        if (uVar1 == 0) {
            *arg1 = 0;
            return 0;
        }
        if (uVar1 == 2) {
            *arg1 = 2;
            return 0;
        }
        if (uVar1 == 3) {
            *arg1 = 3;
            return 0;
        }
        if (3 < uVar1) {
            if (uVar1 < 6) goto code_r0x00013cc7;
            if (uVar1 == 7) {
                *arg1 = 7;
                return 0;
            }
        }
        *arg1 = 6;
    }
    else {
code_r0x00013cc7:
        *arg1 = 4;
    }
    return 0;
}


/* fcn.00011418 @ 0x11418 */

ulong fcn.00011418(void)

{
    ulong uVar1;
    ulong uStackX_8;
    uchar auStackX_10 [24];
    
    *0x169c0 = 0x11024;
    uStackX_8 = 0;
    *0x169c8 = 0x111dc;
    *0x169d0 = 0;
    *0x169d8 = 0;
    uVar1 = (**(*0x167e8 + 0x148))(&uStackX_8,0x15fc0,0x169c0,0);
    (**(*0x167e8 + 0x170))(0x200,0x10,0x112d0,0,0x16048,auStackX_10);
    (**(*0x167e8 + 0x170))(0x200,0x10,0x112d0,0,0x15f60,auStackX_10);
    return uVar1;
}


/* fcn.00012050 @ 0x12050 */

void fcn.00012050(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    
    iVar1 = 0x1204c;
    if (arg2 != 0) {
        iVar1 = arg2;
    }
    (**(*0x167e8 + 0x170))(0x200,arg1,iVar1,arg3,0x15f40,arg4);
    return;
}


/* fcn.00012160 @ 0x12160 */

int64_t fcn.00012160(int64_t arg1,int64_t arg2)

{
    fcn.00012100((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.00012100 @ 0x12100 */

void fcn.00012100(int64_t arg1)

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
            fcn.00010350();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00012a08 @ 0x12a08 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00012a08(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t arg1_00;
    uint32_t auStackX_8 [2];
    uint auStackX_10 [2];
    uint32_t uStackX_18;
    uchar uStackX_1c;
    uchar uStackX_1d;
    int32_t var_28h;
    int32_t var_30h;
    int8_t var_34h;
    int8_t var_35h;
    int64_t var_38h;
    ulong *puStack_28;
    int64_t iStack_20;
    int64_t var_10h;
    int64_t var_bp_8h;
    
    auStackX_8[0] = CONCAT31(auStackX_8[0]._1_3_,arg1);
    uVar3 = arg2 & 0xff;
    if ((((uVar3 == 1) || (uVar3 == 2)) || (uVar3 == 3)) && (*0xc00b0040 != -1)) {
        fcn.00012268(0xe06);
        cVar1 = fcn.000126c0();
        if (cVar1 == '\0') {
            iVar2 = (**(*0x167e8 + 0x140))(0x15f30,0,&puStack_28);
            if (-1 < iVar2) {
                (**puStack_28)();
            }
            iVar2 = (**(*0x167e8 + 0x140))(0x15f20,0,&var_28h);
            if (iVar2 < 0) {
                arg1_00 = 0xea6;
code_r0x00012aa1:
                fcn.00012268(arg1_00);
                return iVar2;
            }
            iVar2 = (*_var_28h[8])(auStackX_8);
            if (((-1 < iVar2) && (auStackX_8[0] < 8)) && ((0x89U >> (auStackX_8[0] & 0x1f) & 1) != 0)) {
                uStackX_18 = 0xb00;
                uStackX_1c = 2;
                uStackX_1d = arg2;
                auStackX_10[0] = 4;
                (**(*0x167e8 + 0x140))(0x16068,0,&iStack_20);
                (**(iStack_20 + 0x18))();
                iVar2 = (**_var_28h)(0,&uStackX_18,6,auStackX_10,0,7);
                if (iVar2 < 0) {
                    arg1_00 = 0xec6;
                }
                else if ((uStackX_18 & 0xff000000) == 0) {
                    arg1_00 = 0xe26;
                }
                else {
                    iVar2 = -0x7ffffffffffffff9;
                    arg1_00 = 0xee6;
                }
                goto code_r0x00012aa1;
            }
        }
        fcn.00012268(0xe86);
    }
    return -0x7ffffffffffffffd;
}


/* fcn.000108ac @ 0x108ac */

uint64_t fcn.000108ac(void)

{
    uint64_t arg2;
    int64_t iVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint32_t auStackX_8 [2];
    int aiStackX_10 [2];
    uint auStackX_18 [2];
    ulong *puStackX_20;
    
    uVar2 = auStackX_8[0] & 0xff;
    cVar3 = -0x38;
    do {
        arg2 = (**(*0x167e8 + 0x140))(0x15f20,0,&puStackX_20);
        if (-1 < arg2) {
            iVar1 = (*puStackX_20[8])(aiStackX_10);
            if ((iVar1 < 0) || (aiStackX_10[0] != 0)) {
                arg2 = 0x8000000000000003;
            }
            else {
                auStackX_8[0] = 0xeff;
                auStackX_18[0] = 4;
                arg2 = (**puStackX_20)(0,auStackX_8,4,auStackX_18,0,7);
                if (((-1 < arg2) && ((auStackX_8[0] & 0x7f00) == 0xe00)) && ((auStackX_8[0] >> 0xf & 1) != 0)) {
                    uVar2 = auStackX_8[0] >> 0x18;
                }
            }
        }
        if (arg2 < 0) {
            return arg2;
        }
        if (uVar2 != '\x01') {
            return -(1 < uVar2 - 2U) & 0x8000000000000003;
        }
        fcn.00012160(1000000,arg2);
        bVar4 = cVar3 != '\0';
        cVar3 = cVar3 + -1;
    } while (bVar4);
    return 0x8000000000000012;
}


/* fcn.00010290 @ 0x10290 */

int64_t fcn.00010290(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00011c3c @ 0x11c3c */

ulong fcn.00011c3c(int64_t arg1)

{
    char16_t cVar1;
    uint64_t uVar2;
    char16_t *pcVar3;
    int64_t iVar4;
    uint64_t uVar5;
    char16_t cVar6;
    
    cVar6 = L'\0';
    if (arg1 == 0) {
        return 0x8000000000000002;
    }
    uVar5 = 10;
    pcVar3 = L"PCH_RESET";
    uVar2 = fcn.00011c10(0x16200,10);
    if (uVar5 <= uVar2) {
        return 0x8000000000000005;
    }
    if (pcVar3 <= arg1) {
        if (arg1 < pcVar3 + uVar2 + 1) {
            return 0x800000000000000f;
        }
        if (pcVar3 < arg1) goto code_r0x00011ca4;
    }
    if (pcVar3 < arg1 + 0x14) {
        return 0x800000000000000f;
    }
code_r0x00011ca4:
    cVar1 = L'P';
    iVar4 = pcVar3 - arg1;
    do {
        *arg1 = cVar1;
        arg1 = arg1 + 2;
        cVar1 = *(iVar4 + arg1);
    } while (cVar1 != L'\0');
    *arg1 = cVar6;
    return 0;
}


/* fcn.00012534 @ 0x12534 */

void fcn.00012534(ulong noname_0,int64_t arg1,ulong noname_2,int64_t arg2)

{
    (***0x16818)(*0x16818,2,2,arg1,1,arg2);
    return;
}


/* fcn.000125f4 @ 0x125f4 */

uint64_t fcn.000125f4(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint16_t uVar4;
    int64_t iStackX_8;
    
    uVar2 = 0;
    if (*0x16820 == 0) {
        iStackX_8 = 0;
        iVar1 = (**(*0x167e8 + 0x140))(0x16028,0,&iStackX_8);
        if ((iVar1 < 0) || (iStackX_8 == 0)) {
            uVar2 = 0x8000000000000003;
        }
        else {
            uVar4 = 0;
            if (*(iStackX_8 + 0x1e) != 0) {
                uVar3 = uVar2;
                do {
                    if (*(iStackX_8 + 2) < uVar3 + 0x24U) break;
                    iVar1 = iStackX_8 + 0x24 + uVar3;
                    if ((*(iVar1 + 8) == *0x15f80) && (*(iVar1 + 0x10) == *0x15f88)) {
                        *0x16820 = iVar1;
                        goto code_r0x000126b2;
                    }
                    uVar4 = uVar4 + 1;
                    uVar3 = uVar3 + *(iVar1 + 2);
                } while (uVar4 < *(iStackX_8 + 0x1e));
            }
            uVar2 = 0x800000000000000e;
        }
    }
    else {
        uVar2 = 0;
    }
code_r0x000126b2:
    return uVar2;
}


/* fcn.00012b88 @ 0x12b88 */

int64_t fcn.00012b88(void)

{
    uint32_t uVar1;
    char cVar2;
    int64_t iVar3;
    uchar uVar4;
    int aiStackX_8 [2];
    uint auStackX_10 [2];
    uint32_t auStackX_18 [2];
    ulong *puStackX_20;
    
    iVar3 = (**(*0x167e8 + 0x140))(0x15f20,0,&puStackX_20);
    if (iVar3 < 0) {
        return iVar3;
    }
    iVar3 = (*puStackX_20[8])(aiStackX_8);
    if (((iVar3 < 0) || (aiStackX_8[0] != 0)) || (cVar2 = fcn.000126c0(), cVar2 != '\0')) {
        return -0x7ffffffffffffffd;
    }
    uVar4 = 9;
    if (*0x16808 == '\0') {
        iVar3 = fcn.00012094();
        iVar3 = fcn.000120c4(0x15fd0,iVar3);
        auStackX_18[0] = 10;
        if (iVar3 != 0) {
            if ((*(iVar3 + 0x18) != 1) || (uVar1 = 10, *0xc00b0040 != -1)) {
                if (*(iVar3 + 0x18) < 3) goto code_r0x00012c30;
                uVar1 = 0xff;
            }
            auStackX_18[0] = uVar1;
            uVar4 = 7;
        }
    }
    else {
        auStackX_18[0] = 10;
    }
code_r0x00012c30:
    auStackX_18[0] = auStackX_18[0] | 0x500;
    auStackX_10[0] = 4;
    iVar3 = (**puStackX_20)(0,auStackX_18,4,auStackX_10,0,uVar4);
    return iVar3;
}


/* fcn.00011a8c @ 0x11a8c */

void fcn.00011a8c(void)

{
    char cVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *arg1;
    code *noname_1;
    ulong noname_1_00;
    uint64_t uVar4;
    int64_t arg1_00;
    bool bVar5;
    bool bVar6;
    uint32_t auStackX_8 [2];
    int64_t var_18h;
    uint32_t var_bp_20h;
    int64_t var_28h;
    int64_t var_30h;
    ulong uStack_38;
    int64_t var_28h_2;
    
    iVar3 = (**(*0x167e8 + 0x138))(2,0x16008,0,&var_18h,&var_bp_20h);
    if ((-1 < iVar3) && (uVar4 = 0, var_18h != 0)) {
        do {
            (**(*0x167e8 + 0x98))(*(_var_bp_20h + uVar4 * 8),0x16008,&var_28h);
            (**(var_28h + 8))();
            uVar4 = uVar4 + 1;
        } while (uVar4 < var_18h);
    }
    arg1_00 = 0x118b0;
    noname_1 = 0x8;
    iVar3 = (**(*0x167e8 + 0x170))(0x200);
    if (-1 < iVar3) {
        (**(*0x167e8 + 0x68))(uStack_38);
    }
    arg1 = auStackX_8;
    fcn.00013b4c(arg1);
    if ((auStackX_8[0] & 0xfffffe7f) == 6) {
        iVar3 = fcn.000125f4();
        if ((-1 < iVar3) && (noname_1 = *(*0x16820 + 0x20), noname_1 != NULL)) {
            arg1 = 0x6;
            (*noname_1)();
        }
    }
    cVar1 = '\0';
    iVar2 = fcn.00012c74();
    if (-1 < iVar2) {
        if (iVar2 < 3) {
            iVar3 = fcn.000125ac();
            if (-1 < iVar3) {
                uVar4 = CONCAT71(arg1 >> 8,*(*0x16830 + 0x1c)) & 0xffffffffffffff03;
                bVar5 = uVar4 == '\x02';
                bVar6 = *0xc00b0040 != -1;
                if (!bVar6) {
                    *(*0x16830 + 0x1c) = *(*0x16830 + 0x1c) & 0xfffffffc;
                }
                arg1 = CONCAT71(uVar4 >> 8,bVar6 && bVar5);
                if (!bVar6 || !bVar5) goto code_r0x00011be2;
            }
            cVar1 = fcn.000118bc(arg1,noname_1,arg1_00);
            if (cVar1 == '\0') goto code_r0x00011be2;
        }
        else {
            if (3 < iVar2 - 4U) goto code_r0x00011be2;
            cVar1 = '\x01';
        }
        fcn.000122d0(0);
    }
code_r0x00011be2:
    noname_1_00 = 0x10;
    fcn.000102d0(&var_28h_2,0x10);
    fcn.00011eec(0xfe000000,noname_1_00,CONCAT71(arg1_00 >> 8,cVar1));
    return;
}


/* fcn.00012948 @ 0x12948 */

int64_t fcn.00012948(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t arg2_00;
    int iVar2;
    uint auStackX_20 [2];
    uint8_t uStack_18;
    char cStack_17;
    char cStack_16;
    int64_t iStack_10;
    
    arg2_00 = 0;
    iVar1 = (**(*0x167e8 + 0x140))(0x15f20,0,&iStack_10);
    if (-1 < iVar1) {
        iVar2 = 1000;
        do {
            if (iVar2 == 0) {
                return iVar1;
            }
            fcn.00012160(1000,arg2_00);
            auStackX_20[0] = 8;
            arg2_00 = 0;
            iVar2 = iVar2 + -1;
            iVar1 = (**(iStack_10 + 8))(arg1 & 0xffffffff,0,&uStack_18,auStackX_20);
        } while (iVar1 == -0x7ffffffffffffff0);
        if (-1 < iVar1) {
            if ((((uStack_18 & 0x7f) == 8) && (cStack_16 == arg2)) && (cStack_17 == arg3)) {
                iVar1 = 0;
            }
            else {
                iVar1 = -0x7ffffffffffffff9;
            }
        }
    }
    return iVar1;
}


/* fcn.00012718 @ 0x12718 */

int64_t fcn.00012718(int64_t arg1)

{
    int64_t iVar1;
    int64_t var_18h;
    int32_t var_20h;
    int64_t var_28h;
    
    fcn.000102d0(&var_18h,4);
    var_18h._0_1_ = 1;
    var_18h._2_2_ = 0x202;
    var_20h = 4;
    iVar1 = (**(*0x167e8 + 0x140))(0x15f20,0,&var_28h);
    if ((-1 < iVar1) && (iVar1 = (**var_28h)(arg1 & 0xffffffff,&var_18h,var_20h,&var_20h,0,0), -1 < iVar1)) {
        if (((var_18h & 0x7f) == 1) && ((var_18h & 0x80) != 0)) {
            if (var_18h._1_1_ != '\x01') {
                iVar1 = -0x7fffffffffffffe7;
            }
        }
        else {
            iVar1 = -0x7fffffffffffffeb;
        }
    }
    return iVar1;
}


/* fcn.000127c8 @ 0x127c8 */

int64_t fcn.000127c8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint auStackX_18 [2];
    ulong *puStackX_20;
    uint8_t auStack_38 [4];
    uchar auStack_34 [44];
    
    fcn.000102d0(auStack_38,0x24);
    auStack_38[0] = 4;
    auStackX_18[0] = 0x24;
    iVar1 = (**(*0x167e8 + 0x140))(0x15f20,0,&puStackX_20);
    if ((-1 < iVar1) && (iVar1 = (**puStackX_20)(arg1 & 0xffffffff,auStack_38,4,auStackX_18,0,0), -1 < iVar1)) {
        if (((auStack_38[0] & 0x7f) == 4) && ((auStack_38[0] & 0x80) != 0)) {
            if (arg2 != auStack_34) {
                fcn.00010290(arg2,auStack_34,0x20);
            }
        }
        else {
            iVar1 = -0x7fffffffffffffeb;
        }
    }
    return iVar1;
}


/* fcn.00012894 @ 0x12894 */

int64_t fcn.00012894(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint auStackX_10 [4];
    ulong *puStackX_20;
    uint8_t uStack_28;
    uchar uStack_27;
    char cStack_26;
    uchar auStack_24 [28];
    
    uStack_27 = arg2;
    uStack_28 = 5;
    auStackX_10[0] = 0x20;
    iVar1 = (**(*0x167e8 + 0x140))(0x15f20,0,&puStackX_20);
    if (-1 < iVar1) {
        iVar1 = (**puStackX_20)(arg1 & 0xffffffff,&uStack_28,4,auStackX_10,0,0);
        if (-1 < iVar1) {
            if (((cStack_26 == '\0') && ((uStack_28 & 0x7f) == 5)) && ((uStack_28 & 0x80) != 0)) {
                if (arg3 != auStack_24) {
                    fcn.00010290(arg3,auStack_24,0x10);
                }
                iVar1 = 0;
            }
            else {
                iVar1 = -0x7fffffffffffffeb;
            }
        }
    }
    return iVar1;
}


/* fcn.00010c70 @ 0x10c70 */

ulong fcn.00010c70(int64_t arg1)

{
    ulong *puVar1;
    int *piVar2;
    ulong *puVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int iVar6;
    
    uVar5 = 0;
    iVar6 = arg1;
    if (*0x169d0 != 0) {
        puVar3 = *0x169d8;
        do {
            if (**puVar3 == iVar6) {
                return (*0x169d8)[uVar5];
            }
            uVar4 = uVar5 + 1;
            uVar5 = uVar4;
            puVar3 = puVar3 + 1;
        } while (uVar4 < *0x169d0);
    }
    piVar2 = fcn.00011f9c(arg1,0x18);
    uVar4 = *0x169d0;
    if (piVar2 != NULL) {
        piVar2[1] = 0;
        piVar2[2] = 0;
        *piVar2 = iVar6;
        puVar3 = fcn.00011f9c(arg1,uVar4 + 1 << 3);
        if (puVar3 != NULL) {
            if ((*0x169d0 != 0) && (puVar3 != *0x169d8)) {
                fcn.00010290(puVar3,*0x169d8,*0x169d0 << 3);
            }
            puVar1 = *0x169d8;
            uVar4 = *0x169d0;
            puVar3[*0x169d0] = piVar2;
            if (puVar1 != NULL) {
                (**(*0x167e8 + 0x48))(puVar1);
                uVar4 = *0x169d0;
            }
            *0x169d0 = uVar4 + 1;
            *0x169d8 = puVar3;
            return puVar3[uVar4];
        }
    }
    return 0;
}


/* fcn.00010ecc @ 0x10ecc */

int64_t fcn.00010ecc(uint32_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint8_t uVar3;
    uint in_register_0000000c;
    uint32_t *puVar4;
    uint64_t uVar5;
    int iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint8_t uVar9;
    uint8_t *puVar10;
    uint32_t uVar11;
    uchar auStackX_8 [8];
    uint8_t auStack_38 [32];
    
    iVar2 = *0x167e8;
    puVar4 = CONCAT44(in_register_0000000c,arg1);
    if (puVar4[1] == 0) {
        puVar4[1] = 2;
        iVar2 = (**(iVar2 + 0x140))(0x15f20,0,auStackX_8);
        if (-1 < iVar2) {
            iVar2 = fcn.00012718(*puVar4);
            if (-1 < iVar2) {
                uVar5 = *puVar4;
                iVar2 = fcn.000127c8(uVar5,auStack_38);
                if (-1 < iVar2) {
                    uVar11 = 0;
                    puVar10 = auStack_38;
                    iVar2 = 0x20;
                    do {
                        uVar5 = uVar5 & 0xffffffffffffff00;
                        do {
                            uVar9 = uVar5;
                            uVar3 = uVar9 + 1;
                            uVar5 = CONCAT71(uVar5 >> 8,uVar3);
                            uVar1 = uVar11 + 1;
                            if ((1 << (uVar9 & 0x1f) & *puVar10) == 0) {
                                uVar1 = uVar11;
                            }
                            uVar11 = uVar1;
                        } while (uVar3 < 8);
                        puVar10 = puVar10 + 1;
                        iVar2 = iVar2 + -1;
                    } while (iVar2 != 0);
                    puVar4[2] = uVar11;
                    iVar2 = fcn.00011f9c(uVar5,uVar11 * 0x14);
                    *(puVar4 + 4) = iVar2;
                    if (iVar2 == 0) {
                        iVar2 = -0x7ffffffffffffff7;
                    }
                    else {
                        uVar9 = 0;
                        uVar8 = 0;
                        uVar5 = 0;
                        do {
                            iVar6 = 1 << (uVar9 & 7);
                            uVar7 = uVar5;
                            if ((auStack_38[uVar8 >> 3] & iVar6) != 0) {
                                iVar2 = fcn.00012894(*puVar4,CONCAT31(iVar6 >> 8,uVar9),*(puVar4 + 4) + uVar5 * 0x14)
                                ;
                                if (-1 < iVar2) {
                                    uVar7 = uVar5 + 1;
                                    *(*(puVar4 + 4) + 0x10 + uVar5 * 0x14) = uVar9;
                                    *(*(puVar4 + 4) + 0x11 + uVar5 * 0x14) = 0;
                                }
                            }
                            uVar9 = uVar9 + 1;
                            uVar8 = uVar8 + 1;
                            uVar5 = uVar7;
                        } while (uVar9 != 0xff);
                        puVar4[1] = 1;
                        iVar2 = 0;
                    }
                }
            }
        }
    }
    else {
        iVar2 = -0x7fffffffffffffec;
    }
    return iVar2;
}


/* fcn.00010d60 @ 0x10d60 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

uint64_t fcn.00010d60(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint in_register_0000000c;
    uint32_t *puVar4;
    uint8_t *puVar5;
    ulong **ppuVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uint8_t uStackX_8;
    uchar uStackX_9;
    uchar uStackX_a;
    char cStackX_b;
    int64_t var_30h;
    uint32_t auStack_38 [2];
    ulong *puStack_30;
    int32_t var_bp_10h;
    int64_t var_8h;
    
    puVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    if (puVar4[2] != 0) {
        iVar2 = *(puVar4 + 4);
        uVar8 = uVar3;
        do {
            if ((*(iVar2 + uVar8 * 0x14) == *arg2) && (*(iVar2 + 8 + uVar8 * 0x14) == *(arg2 + 8))) {
                uVar1 = *(iVar2 + 0x10 + uVar8 * 0x14);
                *arg4 = uVar1;
                if (*(iVar2 + 0x11 + uVar8 * 0x14) != '\0') goto code_r0x00010eb7;
                uVar7 = *puVar4;
                fcn.000102d0(&uStackX_8,4);
                ppuVar6 = &puStack_30;
                puVar5 = NULL;
                uStackX_8 = 6;
                auStack_38[0] = 4;
                uStackX_9 = uVar1;
                uStackX_a = uVar1;
                uVar3 = (**(*0x167e8 + 0x140))(0x15f20,0,ppuVar6);
                if (uVar3 < 0) {
code_r0x00010e91:
                    if (-1 < uVar3) {
                        uVar3 = fcn.00012948(uVar7,CONCAT71(puVar5 >> 8,uVar1),CONCAT71(ppuVar6 >> 8,uVar1));
                    }
                }
                else {
                    ppuVar6 = auStack_38[0];
                    puVar5 = &uStackX_8;
                    uVar3 = (**puStack_30)(uVar7,puVar5,ppuVar6,auStack_38,0,0);
                    if (uVar3 < 0) goto code_r0x00010e91;
                    if (((uStackX_8 & 0x7f) != 6) || ((uStackX_8 & 0x80) == 0)) {
                        uVar3 = 0x8000000000000015;
                        goto code_r0x00010e91;
                    }
                    if (cStackX_b == '\0') goto code_r0x00010e91;
                    uVar3 = 0x8000000000000015;
                }
                *(*(puVar4 + 4) + 0x11 + uVar8 * 0x14) = *arg4;
code_r0x00010eb7:
                *arg3 = *(*(puVar4 + 4) + 0x11 + uVar8 * 0x14);
                return uVar3;
            }
            uVar7 = uVar8 + 1;
            uVar8 = uVar7;
        } while (uVar7 < puVar4[2]);
    }
    return 0x800000000000000e;
}


/* fcn.00011cf8 @ 0x11cf8 */

ulong fcn.00011cf8(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t extraout_RAX;
    uint in_register_00000014;
    
    if ((((arg1 == 0) || (arg3 == 0)) || (1000000 < CONCAT44(in_register_00000014,arg2))) ||
       (CONCAT44(in_register_00000014,arg2) == 0)) {
        return 0x8000000000000002;
    }
    fcn.00011ccc(arg3,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + extraout_RAX + 1) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x00011d69;
    }
    if (arg3 < arg1 + CONCAT44(in_register_00000014,arg2)) {
        return 0x800000000000000f;
    }
code_r0x00011d69:
    cVar1 = *arg3;
    if (cVar1 != '\0') {
        arg3 = arg3 - arg1;
        do {
            *arg1 = cVar1;
            arg1 = arg1 + 1;
            cVar1 = *(arg1 + arg3);
        } while (cVar1 != '\0');
    }
    *arg1 = '\0';
    return 0;
}


/* fcn.000123f8 @ 0x123f8 */

void fcn.000123f8(uint32_t arg1)

{
    int64_t *extraout_RAX;
    int64_t *extraout_RAX_00;
    int64_t *extraout_RAX_01;
    uint32_t arg1_00;
    uchar in_DL;
    unkbyte7 in_RDX;
    int64_t in_R8;
    int64_t var_17h;
    int64_t var_27h;
    int64_t var_37h;
    int64_t var_47h;
    unkbyte6 Stack_8e;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    int64_t iStack_50;
    uchar auStack_48 [7];
    int64_t var_39h;
    int16_t var_31h;
    int64_t var_29h;
    uchar auStack_28 [7];
    int64_t var_19h;
    uchar auStack_18 [7];
    int64_t var_9h;
    
    if (arg1 == 0) {
        fcn.000122d0(0);
        in_DL = 1;
        fcn.00014284(auStack_18,CONCAT71(in_RDX,1));
        _auStack_48 = *extraout_RAX_01;
        unique0x10000249 = extraout_RAX_01[1];
        if (_auStack_48 == 0) {
            return;
        }
        arg1_00 = auStack_48;
    }
    else if (arg1 == 1) {
        fcn.000122d0(1);
        in_DL = 2;
        fcn.00014284(auStack_28,CONCAT71(in_RDX,2));
        iStack_58 = *extraout_RAX_00;
        iStack_50 = extraout_RAX_00[1];
        if (iStack_58 == 0) {
            return;
        }
        arg1_00 = &iStack_58;
    }
    else if (arg1 == 2) {
        *0xc00b2054 = 3;
        fcn.000159bc();
        arg1_00 = &uStack_78;
        uStack_70 = CONCAT62(Stack_8e,0x600);
        uStack_78 = 0x161c0;
    }
    else if (arg1 == 3) {
        *0xc00b3054 = 3;
        fcn.000159bc();
        arg1_00 = &uStack_88;
        uStack_80 = CONCAT62(Stack_8e,0x680);
        uStack_88 = 0x161c0;
    }
    else {
        if (arg1 != 4) {
            return;
        }
        fcn.000122d0(4);
        in_DL = 3;
        fcn.00014284(&var_31h + 1,CONCAT71(in_RDX,3));
        iStack_68 = *extraout_RAX;
        iStack_60 = extraout_RAX[1];
        if (iStack_68 == 0) {
            return;
        }
        arg1_00 = &iStack_68;
    }
    fcn.000142fc(arg1_00,CONCAT71(in_RDX,in_DL),in_R8);
    return;
}


/* fcn.00012290 @ 0x12290 */

uint64_t fcn.00012290(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    out(0x80,arg1);
    if (arg2 == 0) {
        fcn.00012194(0x162b8,arg1 & 0xffffffffU,0,arg3);
    }
    else {
        fcn.00012194(0x162d0,arg1 & 0xffffffffU,arg2,arg3);
    }
    return arg1 & 0xffffffff;
}


/* fcn.000138f4 @ 0x138f4 */

int64_t fcn.000138f4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    unkbyte7 Var2;
    uchar in_stack_00000028;
    uchar in_stack_00000030;
    
    Var2 = arg4 >> 8;
    if (arg1 == 8) {
        iVar1 = fcn.0001413c(arg2,arg3 & 0xffffffff,CONCAT71(arg3 >> 8,in_stack_00000028),
                             CONCAT71(Var2,in_stack_00000030));
        if (-1 < iVar1) {
            iVar1 = fcn.00013fe8(1,arg2,arg4);
        }
    }
    else {
        iVar1 = fcn.00013628(arg1,arg2,arg3,CONCAT71(Var2,in_stack_00000028));
        if (iVar1 < 0) {
            fcn.00011d8c(2,iVar1 & 0x1f | 0x3008100,arg3,0x160b8);
        }
        else {
            iVar1 = fcn.0001347c(arg1 & 0xffffffff,1,arg2,arg4);
            if (iVar1 < 0) {
                fcn.00011d8c(2,iVar1 & 0x1f | 0x3008100,arg2,0x160b8);
            }
        }
    }
    return iVar1;
}


/* fcn.00011d8c @ 0x11d8c */

ulong fcn.00011d8c(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    ulong in_stack_00000028;
    
    if ((arg1 & 0xff) - 1 < 3) {
        if (*0x167f8 != NULL) {
code_r0x00011e04:
            uVar2 = (***0x167f8)(arg1 & 0xffffffff,arg2 & 0xffffffff,0,arg3,in_stack_00000028);
            return uVar2;
        }
        if ((*0x167e8 != 0) && (*(*0x167e8 + 0x140) != NULL)) {
            iVar1 = (**(*0x167e8 + 0x140))(0x15f10,0,0x167f8);
            if (iVar1 < 0) {
                *0x167f8 = NULL;
            }
            if (*0x167f8 != NULL) goto code_r0x00011e04;
        }
    }
    return 0x8000000000000003;
}


/* fcn.00011e3c @ 0x11e3c */

ulong fcn.00011e3c(int64_t arg1)

{
    ulong uVar1;
    int64_t arg3;
    uint *puStack0000000000000028;
    uchar *in_stack_00000030;
    uint uStack_218;
    ulong uStack_214;
    ulong uStack_20c;
    uchar auStack_204 [508];
    
    puStack0000000000000028 = &uStack_218;
    uVar1 = 0x18;
    uStack_214 = *0x160a8;
    uStack_20c = *0x160b0;
    uStack_218 = 0x180014;
    if ((in_stack_00000030 != NULL) && (auStack_204 != in_stack_00000030)) {
        fcn.00010290(auStack_204,in_stack_00000030,0x18);
    }
    arg3 = 0x160b8;
    if (arg1 != 0) {
        arg3 = arg1;
    }
    uVar1 = fcn.00011d8c(0x90000002,0,uVar1,arg3);
    if (puStack0000000000000028 != &uStack_218) {
        (**(*0x167e8 + 0x48))();
    }
    return uVar1;
}


/* fcn.00012c74 @ 0x12c74 */

ulong fcn.00012c74(void)

{
    uint32_t uVar1;
    
    if ((~(*((*0xc00fd010 & 0xfffff000) + 4) >> 0xd) & 1) == 0) {
        if ((*0xc00b0064 >> 9 & 1) != 0) {
            return 9;
        }
        uVar1 = *0xc00b0040 >> 0x10 & 0xf;
        if (uVar1 == 2) {
            return 7;
        }
        if (uVar1 == 7) {
            return 8;
        }
        if (uVar1 != 4) {
            if (uVar1 == 3) {
                return 5;
            }
            if ((*0xc00b0040 & 0xf0000) == 0x50000) {
                return 4;
            }
            if ((*0xc00b0040 & 0xf000) == 0x3000) {
                return 3;
            }
            if ((*0xc00b0040 & 0xf) == 2) {
                return 2;
            }
            if (((*0xc00b0040 & 0x20) == 0) && ((*0xc00b0040 & 0xf000) == 0)) {
                return 0;
            }
            return 1;
        }
    }
    return 6;
}


/* fcn.000125ac @ 0x125ac */

ulong fcn.000125ac(void)

{
    int64_t iVar1;
    
    if (*0x16830 == 0) {
        iVar1 = fcn.00012094();
        iVar1 = fcn.000120c4(0x15f00,iVar1);
        if (iVar1 == 0) {
            return 0x8000000000000003;
        }
        *0x16830 = iVar1 + 0x18;
    }
    return 0;
}


/* fcn.000118bc @ 0x118bc */

//WARNING: Variable defined which should be unmapped: var_9h

ulong fcn.000118bc(ulong noname_0,ulong noname_1,int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    char *arg2;
    uint8_t uVar3;
    ulong uVar4;
    int64_t in_R9;
    uchar *arg4;
    uchar auStackX_8 [7];
    int64_t var_17h;
    int64_t var_1fh;
    int64_t var_33h;
    int64_t var_67h;
    int64_t var_6fh;
    int64_t var_77h;
    uint64_t in_stack_ffffffffffffff78;
    ulong uVar5;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    uchar auStack_40 [20];
    uchar auStack_2c [27];
    int64_t var_9h;
    
    fcn.00012290(0xe05,0x16228,arg1,in_R9);
    uVar3 = 0;
    do {
        uVar5 = 7;
        arg4 = auStackX_8;
        uVar4 = 4;
        in_stack_ffffffffffffff78 = in_stack_ffffffffffffff78 & 0xffffffffffffff00;
        var_17h._1_4_ = 0xcff;
        _auStackX_8 = CONCAT44(stack0x0000000c,8);
        iVar1 = fcn.000138f4(0,&var_17h + 1,4,arg4);
        if (-1 < iVar1) {
            arg2 = "ME-BIOS: EOP Exit - Success.";
            iVar2 = 0xe25;
            goto code_r0x00011997;
        }
        uVar3 = uVar3 + 1;
    } while (uVar3 < 3);
    in_stack_ffffffffffffff78 = 0;
    fcn.00011d8c(2,iVar1 & 0x1f | 0x3008a00,uVar4,0x160b8);
    fcn.000102d0(auStackX_8,4);
    arg4 = &var_17h + 1;
    uVar5 = 0;
    uVar4 = 4;
    _auStackX_8 = CONCAT71(stack0x00000009,0xc);
    var_17h._1_4_ = 4;
    in_stack_ffffffffffffff78 = in_stack_ffffffffffffff78 & 0xffffffffffffff00;
    fcn.000138f4(0,auStackX_8,4,arg4);
    arg2 = "ME-BIOS: EOP Exit - Error by sending EOP message. Forcing HECI interface closure.";
    iVar2 = 0xe85;
    unique0x100002a3 = 0;
code_r0x00011997:
    fcn.00012290(iVar2,arg2,uVar4,arg4);
    _auStackX_8 = 0;
    (**(*0x167e8 + 0x80))(auStackX_8,0x160c8,0,0,in_stack_ffffffffffffff78,uVar5);
    if (iVar1 < 0) {
        iVar2 = fcn.000125f4();
        if ((-1 < iVar2) && (*(*0x16820 + 0x20) != NULL)) {
            (**(*0x16820 + 0x20))(0);
        }
        uStack_68 = *0x161e0;
        uStack_60 = *0x161e8;
        uStack_58 = *0x161f0;
        uStack_50 = *0x161f8;
        iStack_48 = iVar1;
        fcn.00011e3c(&uStack_68);
        uVar4 = 1;
    }
    else {
        if (*0x30 == 1) {
            iVar1 = (**(*0x167e8 + 0x140))(0x16068,0,&var_1fh + 1);
            if (-1 < iVar1) {
                (**(stack0x00000018 + 0x18))();
            }
            fcn.00010290(auStack_2c,0x16038,0x10);
            fcn.00011c3c(auStack_40);
            (**(*0x167f0 + 0x68))(3,0,0x24,auStack_40);
        }
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.000122d0 @ 0x122d0 */

void fcn.000122d0(int64_t arg1)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int iStackX_14;
    
    uVar2 = (arg1 & 7 | 0xb0) << 0xc;
    uVar3 = uVar2;
    if ((*(uVar2 + 0xc0000002) != -1) && ((*(uVar3 + 0xc00000a0) & 3) == 0)) {
        iStackX_14 = 0;
        uVar2 = *(uVar3 + 0xc0000010) & 0xfffffff0;
        if ((*(uVar3 + 0xc0000010) & 6) == 4) {
            iStackX_14 = *(uVar3 + 0xc0000014);
        }
        *(uVar3 + 0xc0000004) = *(uVar3 + 0xc0000004) | 2;
        if (((uVar2 != 0) || (iStackX_14 != 0)) && ((uVar2 != 0xfffffff0 || (iStackX_14 != -1)))) {
            uVar1 = CONCAT44(iStackX_14,*(uVar3 + 0xc0000010)) & 0xfffffffffffffff0;
            *(uVar1 + 0x800) = *(uVar1 + 0x800) | 4;
        }
        *(uVar3 + 0xc0000004) = *(uVar3 + 0xc0000004) & 0xfd;
    }
    return;
}


/* fcn.00011eec @ 0x11eec */

uint64_t fcn.00011eec(int64_t arg1,ulong noname_1,int64_t arg2)

{
    int iVar1;
    uint64_t arg2_00;
    uint64_t uVar2;
    uint64_t uVar3;
    uint *in_stack_00000028;
    
    iVar1 = arg1;
    uVar2 = 0;
    *(iVar1 + 0x80) = *in_stack_00000028;
    *(iVar1 + 0x84) = in_stack_00000028[1];
    *(iVar1 + 0x88) = in_stack_00000028[2];
    arg2_00 = in_stack_00000028[3];
    *(iVar1 + 0x8c) = in_stack_00000028[3];
    *(arg1 & 0xffffffff) = (arg2 & 0xff) << 0xc | 0xa9;
    uVar3 = uVar2;
    do {
        if ((*(iVar1 + 4) & 1) == 0) {
code_r0x00011f79:
            if ((*(iVar1 + 4) & 2) != 0) {
                uVar2 = 0x8000000000000007;
            }
            return uVar2;
        }
        if (100000 < uVar3) {
            uVar2 = 0x8000000000000012;
            goto code_r0x00011f79;
        }
        fcn.00012160(10,arg2_00);
        uVar3 = uVar3 + 1;
    } while( true );
}


/* fcn.00011c10 @ 0x11c10 */

uint64_t fcn.00011c10(uint32_t arg1,int64_t arg2)

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


/* fcn.00011ccc @ 0x11ccc */

uint64_t fcn.00011ccc(uint32_t arg1,int64_t arg2)

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


/* fcn.00010350 @ 0x10350 */

void fcn.00010350(void)

{
    return;
}


/* fcn.00014bf4 @ 0x14bf4 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00014bf4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x00014c53;
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
code_r0x00014c53:
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
        uVar21 = fcn.00011ccc(arg4,0xf4241);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.00011c10(arg4,0xf4241);
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
            pcVar8 = 0x163e4;
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
code_r0x0001500e:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x163e4;
            }
            else {
                pcVar8 = 0x163e8;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x00014da5:
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
                    goto code_r0x00014f48;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x00014f5f;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x00014f48;
                        }
                        goto code_r0x00014f5f;
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
code_r0x00014f48:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x00014da5;
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
                        goto code_r0x00014da5;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x00014f5f;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x00014f48;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x00014f5f:
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
                        fcn.0001595c(&var_68h_2,0x26,0,91000);
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
                            goto code_r0x0001500e;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x000151f7;
                        if (uStack_a8 == 0x58) goto code_r0x000152ec;
                        if (uStack_a8 == 0x61) goto code_r0x00015200;
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
                            goto code_r0x00014d86;
                        }
                        if (uStack_a8 != 100) goto code_r0x00014d82;
                        goto code_r0x00015303;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x163e4;
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
                goto code_r0x00015530;
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
                            iVar12 = 0x1647b;
                            goto code_r0x000152b3;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x000152b3:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x00015530;
                    }
                    fcn.0001595c(&var_68h_2,0x26,0,0x163dc);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x000151f7:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x00015200:
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
                        goto code_r0x00015530;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x00014d82;
                            goto code_r0x000152f0;
                        }
                        goto code_r0x000152f5;
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
                        goto code_r0x00015530;
                    }
                    fcn.0001595c(&var_68h_2,0x26,0,0x163c0);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x00015530;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x000152ec:
            uVar21 = uVar21 | 0x20;
code_r0x000152f0:
            uVar21 = uVar21 | 0x80;
code_r0x000152f5:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x00015303:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x00015345;
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
code_r0x00015345:
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
code_r0x000153cd:
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
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x000153cd;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar10 = uVar5;
            do {
                uVar6 = uVar10 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = "0123456789ABCDEF\b\x04\x02"[uVar10 % uVar16];
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
code_r0x00014d82:
            pcVar8 = &uStack_a8;
code_r0x00014d86:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x00015530:
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
                arg1 = fcn.00014bc0(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00014bc0(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
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
                arg1 = fcn.00014bc0(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
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
                arg1 = fcn.00014bc0(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
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


/* fcn.000159f4 @ 0x159f4 */

uint64_t fcn.000159f4(int32_t arg_78h)

{
    ulong uVar1;
    int64_t iVar2;
    uint64_t *arg1;
    uint64_t *arg1_00;
    uint64_t *puVar3;
    uint64_t *puStackX_8;
    uint uStack_18;
    uint uStack_14;
    
    arg1 = *0x16848;
    if (*0x16848 == 0) {
        uStack_18 = 0x48;
        uStack_14 = 0xe;
        iVar2 = (**(*0x167e8 + 0x40))(6,0x68,&puStackX_8);
        arg1_00 = puStackX_8;
        if (iVar2 < 0) {
            arg1_00 = NULL;
        }
        puStackX_8 = arg1_00;
        fcn.00015c48(arg1_00);
        iVar2 = (**(*0x167e8 + 0x40))(6,0x78,&puStackX_8);
        arg1 = puStackX_8;
        if (iVar2 < 0) {
            arg1 = NULL;
        }
        if (arg1 == NULL) {
            arg1 = 0x16850;
        }
        else {
            puVar3 = 0x16950;
            if (arg1_00 != NULL) {
                puVar3 = arg1_00;
            }
            puStackX_8 = arg1;
            if (arg1 != 0x168d0) {
                fcn.00010290(arg1,0x168d0,0x78);
            }
            *(arg1 + 1) = *(arg1 + 1) | 1;
            *arg1 = puVar3;
            *(arg1 + 4) = 0;
            if (puVar3[1] != NULL) {
                (*puVar3[1])(arg1,&uStack_18);
            }
        }
        *0x16848 = arg1;
        *(arg1 + 0xc) = *(arg1 + 0xc) & 0xffff0fff | 0xff0000;
        uVar1 = *0x160c0;
        *(arg1 + 0x10) = *0x160b8;
        *(arg1 + 0x18) = uVar1;
    }
    return -(*(arg1 + 0x70) != 0) & arg1;
}


/* fcn.00015b14 @ 0x15b14 */

//WARNING: Variable defined which should be unmapped: var_5h
//WARNING: Variable defined which should be unmapped: var_1fh

void fcn.00015b14(uint32_t *arg1)

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
    
    if (arg1 != 0x16850) {
        puVar4 = &uStack_88;
        uVar2 = arg1[3] & 0xffff80;
        uStack_58 = uVar2 | 0x1000042;
        if ((arg1[3] & 0xff0000) == 0xff0000) {
            uStack_54 = *(arg1 + 4);
            uStack_4c = *(arg1 + 6);
            puVar4 = &stack0xffffffffffffff7c;
            uStack_88 = *0x16760;
        }
        if (uStack_58 < '\0') {
            _auStack_44 = arg1[8];
            arg1[8] = _auStack_44 + 1;
            *puVar4 = *0x16764;
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
                fcn.000102d0(acStack_28 + uVar3,0x18 - uVar3);
            }
            *puVar4 = *0x16778;
        }
        else {
            uStack_58 = uVar2 | 0x1000242;
            *puVar4 = *0x16774;
            puVar4[1] = *0x1677c;
            *(puVar4 + 6) = in_stack_00000028;
            puVar4 = puVar4 + 1;
        }
        puVar4[1] = *0x167a0;
        (**(*arg1 + 0x18))(arg1,&uStack_88,&uStack_58);
    }
    return;
}


/* fcn.00014284 @ 0x14284 */

ulong * fcn.00014284(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    ulong uStack_18;
    ushort uStack_10;
    unkbyte6 Stack_e;
    
    uVar2 = arg2;
    if (uVar2 - 1 < 4) {
        uStack_18 = 0x161c0;
        cVar1 = fcn.000159bc();
        if (cVar1 == '\0') {
            uStack_10 = *((uVar2 - 1) * 2 + 0x16350);
        }
        else {
            uStack_10 = *((uVar2 - 1) * 2 + 0x16350);
        }
    }
    else {
        uStack_18 = 0;
        uStack_10 = 0;
    }
    *arg1 = uStack_18;
    *(arg1 + 8) = CONCAT62(Stack_e,uStack_10);
    return arg1;
}


/* fcn.000159bc @ 0x159bc */

ulong fcn.000159bc(void)

{
    char cVar1;
    
    cVar1 = fcn.00015980();
    if ((((cVar1 != '\x02') && (cVar1 = fcn.00015980(), cVar1 != '\x05')) && (cVar1 = fcn.00015980(), cVar1 != '\x06')
        ) && (cVar1 = fcn.00015980(), cVar1 != '\x03')) {
        return 0;
    }
    return 1;
}


/* fcn.000142fc @ 0x142fc */

void fcn.000142fc(uint32_t arg1,ulong noname_1,int64_t arg2)

{
    uint in_register_0000000c;
    ulong *puVar1;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    if (*(puVar1 + 1) != 0) {
        (**(**puVar1 + 0x70))(**puVar1,*(puVar1 + 1) + 0x1c,0xffffffff,0x100);
    }
    return;
}


/* fcn.000126c0 @ 0x126c0 */

bool fcn.000126c0(void)

{
    int64_t iVar1;
    unkint7 extraout_RAX;
    bool bVar2;
    uchar auStackX_8 [32];
    
    iVar1 = fcn.00012094();
    iVar1 = fcn.000120c4(0x15fe0,iVar1);
    bVar2 = iVar1 != 0;
    if (iVar1 == 0) {
        (**(*0x167e8 + 0x140))(0x160c8,0,auStackX_8);
        if (-1 < extraout_RAX) {
            bVar2 = true;
        }
    }
    return bVar2;
}


/* fcn.00013cf0 @ 0x13cf0 */

void fcn.00013cf0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint64_t uVar2;
    
    if (*0x16840 == 0) {
        *0x16840 = 0xfed00000;
    }
    uVar2 = *0x16840;
    *(uVar2 + 0x10) = *(uVar2 + 0x10) | 1;
    iVar1 = *(uVar2 + 0xf0);
    *arg1 = iVar1;
    *arg2 = iVar1 + arg3 * 0x18;
    return;
}


/* fcn.00013d2c @ 0x13d2c */

ulong fcn.00013d2c(uint32_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    unkbyte7 Var3;
    
    uVar2 = *0x16840;
    if (*0x16840 == 0) {
        uVar2 = 0xfed00000;
        *0x16840 = 0xfed00000;
    }
    uVar1 = *(uVar2 + 0xf0);
    Var3 = uVar2 + 0xf0 >> 8;
    if (((arg2 <= arg1) || ((uVar1 < arg2 && (arg1 <= uVar1)))) &&
       ((arg1 <= arg2 || ((arg1 <= uVar1 || (uVar1 <= arg2)))))) {
        return CONCAT71(Var3,arg1 == arg2);
    }
    return CONCAT71(Var3,1);
}


/* fcn.00012f20 @ 0x12f20 */

uint64_t fcn.00012f20(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    uVar1 = (arg1 & 7 | 0xb0) << 0xc;
    uVar3 = uVar1;
    if (*(uVar1 + 0xc0000002) != -1) {
        uVar2 = *(uVar3 + 0xc0000010) & 0xfffffff0;
        if ((*(uVar3 + 0xc0000010) & 6) == 4) {
            uVar2 = uVar2 + (*(uVar3 + 0xc0000014) << 0x20);
        }
        if (uVar2 != 0) {
            *(uVar3 + 0xc0000004) = *(uVar3 + 0xc0000004) | 2;
            return uVar2;
        }
    }
    return 0;
}


/* fcn.00012fe0 @ 0x12fe0 */

uint64_t fcn.00012fe0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint32_t auStackX_8 [4];
    uint32_t auStackX_18 [4];
    
    fcn.00013cf0(auStackX_18,auStackX_8,arg2 & 0xffffffff);
    do {
        uVar1 = *(arg1 + 0xc);
        uVar2 = uVar1;
        if ((uVar1 & 0x10) != 0) break;
        if ((uVar1 & 8) != 0) {
            return CONCAT71(uVar1 >> 8,1);
        }
        uVar2 = fcn.00013d2c(auStackX_18[0],auStackX_8[0]);
    } while (uVar2 == '\0');
    return uVar2 & 0xffffffffffffff00;
}


/* fcn.00013a78 @ 0x13a78 */

ulong fcn.00013a78(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong in_R8;
    uint32_t auStackX_10 [2];
    uint32_t auStackX_18 [4];
    
    iVar2 = fcn.00012f20(arg1);
    if (iVar2 == 0) {
        fcn.00011d8c(2,0x3008707,in_R8,0x160b8);
        uVar3 = 0x8000000000000007;
    }
    else {
        if ((*(iVar2 + 4) & 0x10) == 0) {
            *(iVar2 + 4) = *(iVar2 + 4) | 0x14;
        }
        uVar3 = 15000000;
        fcn.00013cf0(auStackX_18,auStackX_10,15000000);
        do {
            cVar1 = fcn.00013d2c(auStackX_18[0],auStackX_10[0]);
            if (cVar1 != '\0') goto code_r0x00013b1f;
        } while ((*(iVar2 + 4) & 8) != 0);
        do {
            cVar1 = fcn.00013d2c(auStackX_18[0],auStackX_10[0]);
            if (cVar1 != '\0') {
code_r0x00013b1f:
                fcn.00011d8c(2,0x3008712,uVar3,0x160b8);
                return 0x8000000000000012;
            }
        } while ((*(iVar2 + 0xc) & 8) == 0);
        *(iVar2 + 4) = *(iVar2 + 4) & 0xffffffef | 0xc;
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.000139e0 @ 0x139e0 */

ulong fcn.000139e0(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong in_R8;
    uint64_t arg3;
    uint32_t auStackX_18 [2];
    uint32_t auStackX_20 [2];
    
    iVar2 = fcn.00012f20(arg1);
    if (iVar2 == 0) {
        fcn.00011d8c(2,0x3008907,in_R8,0x160b8);
        uVar3 = 0x8000000000000007;
    }
    else {
        arg3 = arg2 & 0xffffffff;
        fcn.00013cf0(auStackX_20,auStackX_18,arg3);
        do {
            if ((*(iVar2 + 4) & 8) == 0) {
                return 0;
            }
            cVar1 = fcn.00013d2c(auStackX_20[0],auStackX_18[0]);
        } while (cVar1 == '\0');
        fcn.00011d8c(2,0x3008912,arg3,0x160b8);
        uVar3 = 0x8000000000000012;
    }
    return uVar3;
}


/* fcn.00012564 @ 0x12564 */

ulong fcn.00012564(void)

{
    int64_t iVar1;
    
    if (*0x16828 == 0) {
        iVar1 = fcn.00012094();
        iVar1 = fcn.000120c4(0x15ff0,iVar1);
        if (iVar1 == 0) {
            return 0x8000000000000003;
        }
        *0x16828 = iVar1 + 0x18;
    }
    return 0;
}


/* fcn.00013fe8 @ 0x13fe8 */

int64_t fcn.00013fe8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int iVar5;
    uint64_t arg2_00;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    int iVar9;
    bool bVar10;
    bool bVar11;
    
    arg2_00 = arg2;
    iVar4 = fcn.00013e50();
    if (-1 < iVar4) {
        iVar1 = *arg3;
        iVar9 = 0;
        iVar6 = 0;
        uVar7 = -(arg1 != 0) & 1000;
        bVar11 = false;
        do {
            if (bVar11) {
                uVar7 = 1000;
            }
            bVar10 = true;
            *arg3 = iVar1 - iVar9;
            uVar8 = 0;
            iVar4 = fcn.00013db4(uVar7,arg2_00);
            iVar5 = *0x169b8;
            if (iVar4 < 0) {
                *arg3 = 0;
                iVar4 = -0x7fffffffffffffee;
            }
            else if ((*(*0x169b8 + 0x54) & 0x3c00) == 0x400) {
                bVar10 = 0x7fffffff < *(*0x169b8 + 0x60);
                uVar8 = *(*0x169b8 + 0x60) >> 0x10 & 0x1ff;
                uVar2 = *0x169b8 + 100;
                if (*arg3 < uVar8) {
                    iVar4 = -0x7ffffffffffffffb;
                }
                uVar3 = uVar8;
                if (*arg3 < uVar8) {
                    uVar3 = *arg3;
                }
                *arg3 = uVar3;
                if ((uVar3 != 0) && (arg2 != uVar2)) {
                    fcn.00010290(arg2,uVar2,uVar3);
                    iVar5 = *0x169b8;
                }
                *(iVar5 + 0x54) = 0;
            }
            else {
                *arg3 = 0;
                iVar4 = -0x7fffffffffffffe8;
            }
            uVar2 = *arg3;
            arg2_00 = uVar2;
            iVar6 = iVar6 + uVar8;
            iVar9 = iVar9 + uVar2;
            arg2 = arg2 + (uVar2 >> 2) * 4;
            bVar11 = true;
        } while (!bVar10);
        *arg3 = iVar6;
    }
    return iVar4;
}


/* fcn.000131fc @ 0x131fc */

uint64_t fcn.000131fc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint uVar3;
    uint32_t *puVar4;
    char cVar5;
    uint32_t uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    uint64_t arg3_00;
    uint32_t uVar10;
    uint8_t uVar11;
    uint32_t uVar12;
    uint auStackX_8 [2];
    uint32_t auStackX_10 [2];
    uint32_t *in_stack_00000028;
    uint32_t in_stack_00000030;
    uint in_stack_00000034;
    
    uVar6 = *(arg1 + 0xc);
    puVar4 = CONCAT44(in_stack_00000034,in_stack_00000030);
    uVar11 = (uVar6 >> 0x10) - (uVar6 >> 8);
    *puVar4 = 0;
    uVar10 = uVar11;
    if (uVar6 >> 0x18 < uVar11) {
        uVar10 = 0xffffffff;
    }
    if (arg2 == 0) {
code_r0x000132c0:
        if (uVar10 == 0) {
            uVar8 = 0x8000000000000010;
            goto code_r0x000132ff;
        }
    }
    else {
        fcn.00013cf0(&stack0x00000030,auStackX_10,arg2 & 0xffffffff);
        if (uVar10 == 0) {
            do {
                iVar7 = fcn.00012564();
                if (((iVar7 < 0) || ((*(*0x16828 + 0x1c) & 1) != 0)) &&
                   (cVar5 = fcn.00013d2c(in_stack_00000030,auStackX_10[0]), cVar5 != '\0')) {
                    return 0x8000000000000012;
                }
                uVar6 = *(arg1 + 0xc);
                uVar11 = (uVar6 >> 0x10) - (uVar6 >> 8);
                uVar10 = uVar11;
                if (uVar6 >> 0x18 < uVar11) {
                    uVar10 = 0xffffffff;
                }
            } while (uVar10 == 0);
            goto code_r0x000132c0;
        }
    }
    if (uVar10 != 0xffffffff) {
        uVar10 = *(arg1 + 8);
        *arg3 = uVar10;
        uVar10 = (uVar10 >> 0x10 & 0x1ff) + 3 >> 2;
        uVar8 = uVar10;
        if (uVar10 <= uVar6 >> 0x18) {
            fcn.00013cf0(&stack0x00000030,auStackX_10,5000000);
            do {
                uVar3 = *(arg1 + 0xc);
                iVar7 = fcn.00012564();
                if (((iVar7 < 0) || ((*(*0x16828 + 0x1c) & 1) != 0)) &&
                   (cVar5 = fcn.00013d2c(in_stack_00000030,auStackX_10[0]), cVar5 != '\0')) {
                    return 0x8000000000000012;
                }
                uVar11 = (uVar3 >> 0x10) - (uVar3 >> 8);
                uVar6 = uVar11;
                if (uVar3 >> 0x18 < uVar11) {
                    uVar6 = 0xffffffff;
                }
            } while (uVar6 < uVar10);
            uVar1 = *(arg3 + 2);
            uVar6 = *in_stack_00000028;
            uVar12 = 0;
            if (uVar10 != 0) {
                do {
                    arg3_00 = 4;
                    auStackX_8[0] = *(arg1 + 8);
                    if (((4 < *in_stack_00000028) || (arg3_00 = *in_stack_00000028, arg3_00 != 0)) &&
                       (arg4 != auStackX_8)) {
                        fcn.00010290(arg4,auStackX_8,arg3_00);
                    }
                    uVar10 = *in_stack_00000028;
                    uVar9 = 4;
                    if (uVar10 < 5) {
                        uVar9 = uVar10;
                    }
                    uVar12 = uVar12 + uVar9;
                    uVar9 = 4;
                    if (uVar10 < 5) {
                        uVar9 = uVar10;
                    }
                    arg4 = arg4 + 4;
                    *in_stack_00000028 = uVar10 - uVar9;
                    uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
            }
            uVar2 = *(arg3 + 2);
            *in_stack_00000028 = uVar12;
            *puVar4 = uVar2 & 0x1ff;
            if ((*(arg1 + 0xc) & 8) == 0) {
                *in_stack_00000028 = 0;
                *puVar4 = 0;
                return 0x8000000000000006;
            }
            uVar3 = *(arg1 + 0xc);
            uVar11 = (uVar3 >> 0x10) - (uVar3 >> 8);
            uVar10 = uVar11;
            if (uVar3 >> 0x18 < uVar11) {
                uVar10 = 0xffffffff;
            }
            if (uVar10 == 0) {
                *(arg1 + 4) = *(arg1 + 4) | 6;
            }
            return -(uVar6 < (uVar1 & 0x1ff)) & 0x8000000000000005;
        }
    }
    uVar8 = 0x8000000000000007;
code_r0x000132ff:
    *in_stack_00000028 = 0;
    return uVar8;
}


/* fcn.0001413c @ 0x1413c */

int64_t fcn.0001413c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t arg1_00;
    int64_t arg1_01;
    uint32_t uVar3;
    int iVar4;
    
    iVar2 = arg1;
    arg1_01 = arg2;
    iVar1 = fcn.00013e50();
    if (iVar1 < 0) {
        iVar2 = -0x7fffffffffffffee;
    }
    else {
        uVar3 = arg2;
        if (uVar3 < 0x7d) {
            iVar2 = fcn.00013d70(iVar2,arg1_01);
            iVar4 = *0x169b8;
            if (-1 < iVar2) {
                *(*0x169b8 + 0xe0) = ((uVar3 & 0x1ff | 0xffff8000) << 8 | arg3 & 0xff) << 8 | arg4 & 0xff;
                arg1_00 = iVar4 + 0xe4;
                if ((uVar3 != 0) && (arg1_00 != arg1)) {
                    fcn.00010290(arg1_00,arg1,arg2 & 0xffffffff);
                    arg1_01 = arg1;
                    iVar4 = *0x169b8;
                }
                *(iVar4 + 0x48) = uVar3 + 4 & 0x3ff | 0x80000400;
                iVar2 = fcn.00013d70(arg1_00,arg1_01);
                if ((-1 < iVar2) && (iVar2 = fcn.00013db4(1000,arg1_01), -1 < iVar2)) {
                    if (((*(*0x169b8 + 0x54) & 0x3c00) == 0xc00) && ((*(*0x169b8 + 0x54) & 0xf0000) == 0x20000)) {
                        *(*0x169b8 + 0x54U) = *(*0x169b8 + 0x54U) & 0x7fffffff;
                        iVar2 = 0;
                    }
                    else {
                        iVar2 = -0x7fffffffffffffe8;
                    }
                }
            }
        }
        else {
            iVar2 = -0x7ffffffffffffffd;
        }
    }
    return iVar2;
}


/* fcn.00012d34 @ 0x12d34 */

//WARNING: Removing unreachable block (ram,0x00012e3c)
//WARNING: Removing unreachable block (ram,0x00012e41)

ulong fcn.00012d34(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    bool bVar7;
    bool bVar8;
    bool bVar9;
    bool bVar10;
    bool bVar11;
    bool bVar12;
    int iVar13;
    uint32_t uVar14;
    char cVar15;
    uint8_t uVar16;
    uint32_t *in_R9;
    
    cVar15 = arg2;
    uVar16 = arg3;
    if (arg1 != 0) {
        return 1;
    }
    iVar13 = fcn.00012c74();
    if (iVar13 == 0) {
        return 1;
    }
    if (iVar13 == 1) {
        bVar12 = false;
        bVar11 = false;
        bVar10 = false;
        bVar9 = false;
        bVar8 = true;
        bVar7 = false;
        bVar6 = false;
        bVar5 = false;
        bVar4 = false;
        bVar3 = false;
        bVar2 = false;
        bVar1 = false;
    }
    else if (iVar13 == 2) {
        bVar12 = true;
        bVar11 = false;
        bVar10 = false;
        bVar9 = false;
        bVar8 = false;
        bVar7 = true;
        bVar6 = false;
        bVar5 = false;
        bVar4 = true;
        bVar3 = true;
        bVar2 = false;
        bVar1 = false;
    }
    else if (iVar13 == 4) {
        bVar12 = false;
        bVar11 = false;
        bVar10 = false;
        bVar9 = true;
        bVar8 = true;
        bVar7 = false;
        bVar6 = false;
        bVar5 = true;
        bVar4 = false;
        bVar3 = false;
        bVar2 = false;
        bVar1 = false;
    }
    else if (iVar13 == 5) {
        bVar12 = false;
        bVar11 = true;
        bVar10 = true;
        bVar9 = false;
        bVar8 = true;
        bVar7 = false;
        bVar6 = false;
        bVar5 = true;
        bVar4 = false;
        bVar3 = false;
        bVar2 = false;
        bVar1 = true;
    }
    else if (iVar13 == 6) {
        bVar12 = false;
        bVar11 = false;
        bVar10 = false;
        bVar9 = false;
        bVar8 = true;
        bVar7 = false;
        bVar6 = false;
        bVar5 = true;
        bVar4 = false;
        bVar3 = false;
        bVar2 = false;
        bVar1 = true;
    }
    else if (iVar13 == 7) {
        bVar12 = false;
        bVar11 = false;
        bVar10 = false;
        bVar9 = false;
        bVar8 = true;
        bVar7 = true;
        bVar6 = true;
        bVar5 = true;
        bVar4 = false;
        bVar3 = false;
        bVar2 = false;
        bVar1 = false;
    }
    else if (iVar13 == 8) {
        bVar12 = false;
        bVar11 = true;
        bVar10 = false;
        bVar9 = false;
        bVar8 = true;
        bVar7 = true;
        bVar6 = false;
        bVar5 = true;
        bVar4 = false;
        bVar3 = false;
        bVar2 = true;
        bVar1 = false;
    }
    else {
        bVar12 = false;
        bVar11 = false;
        bVar10 = false;
        bVar9 = false;
        bVar8 = false;
        bVar7 = false;
        bVar6 = false;
        bVar5 = false;
        bVar4 = false;
        bVar3 = false;
        bVar2 = false;
        bVar1 = false;
    }
    uVar14 = *in_R9 & 0x7f00;
    if ((uVar14 == 0xc00) && (*in_R9 == -1)) {
        return 1;
    }
    if ((uVar14 == 0x2000) && (*in_R9 == -0x10)) {
        return 1;
    }
    if ((bVar8) && (*in_R9 == -0x10)) {
        if (uVar14 == 0x100) {
            return 1;
        }
        if (uVar14 == 0xc00) {
            return 1;
        }
    }
    if (((bVar9) && (uVar14 == 0x400)) && (*in_R9 == -0x10)) {
        return 1;
    }
    if (((bVar10) && (uVar14 == 0x300)) && (*in_R9 == -0x10)) {
        return 1;
    }
    if (((bVar11) && (uVar14 == 0xb00)) && (*in_R9 == '\0')) {
        return 1;
    }
    if (((bVar1) && (uVar14 == 0x1b00)) && (*in_R9 == -0x10)) {
        return 1;
    }
    if (((bVar12) && (uVar16 == 7)) && (*in_R9 != '\n')) {
        return 1;
    }
    if (bVar2) {
        if ((uVar14 == 0x1e00) && (*in_R9 == -0x10)) {
            return 1;
        }
        if ((uVar14 == 0x200) && (*in_R9 == -0xe)) {
            return 1;
        }
    }
    if (((bVar3) && (cVar15 != '\0')) && (0x1f < uVar16)) {
        return 1;
    }
    if (bVar4) {
        if (uVar16 == 9) {
            if (*in_R9 != '\n') goto code_r0x00012edd;
            if (uVar14 == 0x500) {
                return 1;
            }
        }
        if (((uVar16 == 7) && (*in_R9 == -1)) && (uVar14 == 0x500)) {
            return 1;
        }
    }
code_r0x00012edd:
    if (((((!bVar5) || (uVar14 != 0x2100)) || (*in_R9 != -0x10)) &&
        (((!bVar6 || (uVar14 != 0x500)) || (*in_R9 != -0x10)))) &&
       (((!bVar7 || (uVar14 != 0x2300)) || (*in_R9 != -0x10)))) {
        return 0;
    }
    return 1;
}


/* fcn.00013628 @ 0x13628 */

ulong fcn.00013628(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    char cVar2;
    uint32_t uVar3;
    ulong uVar4;
    uint32_t *arg1_00;
    int64_t iVar5;
    int64_t iVar6;
    uint8_t uVar7;
    uint32_t uVar8;
    uint32_t *puVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    int iVar12;
    uint64_t uVar13;
    uint64_t arg1_01;
    uchar uVar14;
    int iVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    int iVar18;
    uint32_t auStackX_8 [2];
    uchar in_stack_00000028;
    uint32_t uStack_38;
    int iStack_34;
    int iStack_30;
    
    uVar14 = arg4;
    uVar13 = arg3 & 0xffffffff;
    arg1_01 = arg1 & 0xffffffff;
    iVar18 = arg3;
    if (arg1 == 8) {
        uVar4 = fcn.0001413c(arg2,uVar13,CONCAT71(arg3 >> 8,uVar14),CONCAT71(arg4 >> 8,in_stack_00000028));
    }
    else {
        iVar6 = arg2;
        arg1_00 = fcn.00012f20(arg1);
        if (arg1_00 == NULL) {
            fcn.00011d8c(2,0x3008307,arg3,0x160b8);
            uVar4 = 0x8000000000000007;
        }
        else {
            iVar5 = fcn.00012564();
            if ((iVar5 < 0) || ((*(*0x16828 + 0x1c) & 0x20) == 0)) {
                arg3 = CONCAT71(arg3 >> 8,in_stack_00000028);
                cVar2 = fcn.00012d34(arg1_01,CONCAT71(iVar6 >> 8,uVar14),arg3);
                if (cVar2 == '\0') {
                    fcn.00011d8c(2,0x3008303,arg3,0x160b8);
                    return 0x8000000000000003;
                }
            }
            cVar2 = fcn.00012fe0(arg1_00,15000000);
            if ((cVar2 == '\0') && (iVar6 = fcn.00013a78(arg1_01), iVar6 < 0)) {
                fcn.00011d8c(2,0x3008306,arg3,0x160b8);
                uVar4 = 0x8000000000000006;
            }
            else {
                uVar8 = (arg1_00[1] >> 0x18) * 4;
                uVar11 = CONCAT11(uVar14,in_stack_00000028);
                if (iVar18 != 0) {
                    iStack_30 = uVar8 - 4;
                    uVar4 = 0xffffffff;
                    do {
                        iVar12 = uVar13;
                        if (uVar8 - 4 < uVar13) {
                            iVar15 = iStack_30;
                        }
                        else {
                            uVar11 = uVar11 | 0x80000000;
                            iVar15 = iVar12;
                        }
                        uVar11 = uVar11 ^ (iVar15 << 0x10 ^ uVar11) & 0x1ff0000;
                        iStack_34 = iVar15;
                        fcn.00013cf0(&uStack_38,auStackX_8,5000000);
                        uVar1 = arg1_00[1];
                        uVar16 = (uVar11 >> 0x10 & 0x1ff) + 3;
                        uVar7 = (uVar1 >> 0x10) - (uVar1 >> 8);
                        uVar3 = uVar7;
                        uVar17 = uVar16 >> 2;
                        if (uVar1 >> 0x18 < uVar7) {
                            uVar3 = uVar4;
                        }
                        uVar13 = uVar17 + 1;
                        if ((uVar1 >> 0x18) - uVar3 < uVar17 + 1) {
                            do {
                                iVar6 = fcn.00012564();
                                if (((iVar6 < 0) || ((*(*0x16828 + 0x1c) & 1) != 0)) &&
                                   (cVar2 = fcn.00013d2c(uStack_38,auStackX_8[0]), cVar2 != '\0')) {
                                    uVar4 = 0x8000000000000012;
                                    goto code_r0x000138a4;
                                }
                                uVar1 = arg1_00[1];
                                uVar4 = 0xffffffff;
                                uVar7 = (uVar1 >> 0x10) - (uVar1 >> 8);
                                uVar3 = uVar7;
                                if (uVar1 >> 0x18 < uVar7) {
                                    uVar3 = 0xffffffff;
                                }
                            } while ((uVar1 >> 0x18) - uVar3 < uVar17 + 1);
                            iVar15 = iStack_34;
                        }
                        *arg1_00 = uVar11;
                        if (uVar16 >> 2 != 0) {
                            uVar10 = uVar17;
                            puVar9 = (iVar18 - iVar12) + arg2;
                            do {
                                uVar1 = *puVar9;
                                puVar9 = puVar9 + 1;
                                *arg1_00 = uVar1;
                                uVar10 = uVar10 - 1;
                            } while (uVar10 != 0);
                        }
                        arg1_00[1] = arg1_00[1] | 4;
                        if ((arg1_00[3] & 8) == 0) {
                            uVar4 = 0x8000000000000006;
code_r0x000138a4:
                            fcn.00013a78(arg1_01);
                            fcn.00011d8c(2,uVar4 | 0x3008300,uVar13,0x160b8);
                            return uVar4;
                        }
                        uVar13 = iVar12 - iVar15;
                    } while (iVar12 - iVar15 != 0);
                }
                uVar4 = 0;
            }
        }
    }
    return uVar4;
}


/* fcn.0001347c @ 0x1347c */

int64_t fcn.0001347c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int64_t iVar2;
    int64_t arg1_00;
    int iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint32_t *arg3_00;
    uint64_t uVar6;
    uint32_t uStack_38;
    int iStack_34;
    
    iVar3 = arg2;
    if (arg1 == 8) {
        iVar2 = fcn.00013fe8(arg2 & 0xffffffff,arg3,arg4);
    }
    else {
        uVar5 = 0;
        uStack_38 = 0;
        iVar2 = arg3;
        arg1_00 = fcn.00012f20(arg1);
        if (arg1_00 == 0) {
            fcn.00011d8c(2,0x3008207,iVar2,0x160b8);
            iVar2 = -0x7ffffffffffffff9;
        }
        else {
            uVar6 = -(iVar3 != 0) & 5000000;
            cVar1 = fcn.00012fe0(arg1_00,-(iVar3 != 0) & 15000000);
            if (cVar1 == '\0') {
                fcn.00013a78(arg1 & 0xffffffffU);
                fcn.00011d8c(2,0x3008206,iVar2,0x160b8);
                iVar2 = -0x7ffffffffffffffa;
            }
            else {
                do {
                    arg3_00 = &uStack_38;
                    iVar2 = fcn.000131fc(arg1_00,uVar6 & 0xffffffff,arg3_00,arg3 + (uVar5 & 0xfffffffffffffffc));
                    if ((iVar2 < 0) && (iVar2 != -0x7ffffffffffffffb)) {
                        if (iVar2 != -0x7ffffffffffffff0) {
                            fcn.00013a78(arg1 & 0xffffffffU);
                        }
                        *arg4 = uVar5;
                        if ((iVar2 != -0x7ffffffffffffff0) || (iVar3 != 0)) goto code_r0x000135c4;
                        goto code_r0x000135e9;
                    }
                    uVar4 = uVar5 + iStack_34;
                    uVar5 = uVar4;
                    uVar6 = 5000000;
                } while ((uStack_38 & 0x80000000) == 0);
                *arg4 = uVar4;
                if (iVar2 < 0) {
code_r0x000135c4:
                    fcn.00011d8c(2,iVar2 & 0x1f | 0x3008200,arg3_00,0x160b8);
                }
            }
        }
    }
code_r0x000135e9:
    return iVar2;
}


/* fcn.00013db4 @ 0x13db4 */

ulong fcn.00013db4(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    
    uVar1 = 0;
    do {
        if (0x7fffffff < *(*0x169b8 + 0x54)) {
            return 0;
        }
        fcn.00012160(1000,arg2);
        uVar1 = uVar1 + 1;
    } while (uVar1 < arg1);
    return 0x8000000000000012;
}


/* fcn.00013d70 @ 0x13d70 */

ulong fcn.00013d70(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = 0;
    do {
        if (*(*0x169b8 + 0x48) < 0x80000000) {
            return 0;
        }
        fcn.00012160(1000,arg1);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 1000);
    return 0x8000000000000012;
}


/* fcn.00013e00 @ 0x13e00 */

int64_t fcn.00013e00(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.00013db4(1000,arg1);
    if (-1 < iVar1) {
        if ((*(*0x169b8 + 0x54) & 0x3c00) == 0xc00) {
            *(*0x169b8 + 0x54U) = *(*0x169b8 + 0x54U) & 0x7fffffff;
            iVar1 = 0;
        }
        else {
            iVar1 = -0x7fffffffffffffe8;
        }
    }
    return iVar1;
}


/* fcn.00013e50 @ 0x13e50 */

int64_t fcn.00013e50(void)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t *noname_0;
    uint64_t uVar3;
    int iVar4;
    bool bVar5;
    
    if (*0xc0090002 != -1) {
        uVar1 = *0xc0090010 & 0xfffff000;
        if ((uVar1 + 0x1000 & 0xffffefff) == 0) {
            *0x169b8 = uVar1;
            return -0x7ffffffffffffffa;
        }
        *0xc0090004 = *0xc0090004 | 2;
        if ((*(uVar1 + 0x34) & 0xf000) == 0xf000) {
            *0x169b8 = uVar1;
            return 0;
        }
        *0x169b8 = uVar1;
        *(uVar1 + 0x38) = *(uVar1 + 0x38) | 0x80;
        *(uVar1 + 0x36c) = 24000000;
        *(uVar1 + 0x368) = *(uVar1 + 0x368) | 1;
        uVar1 = *0x169b8;
        noname_0 = *0x169b8 + 0x38;
        uVar3 = *0x169b8;
        *noname_0 = *(*0x169b8 + 0x38) | 2;
        *(uVar1 + 0xe0) = 1;
        *(uVar1 + 0x48) = 0x80030c04;
        iVar2 = fcn.00013d70(noname_0,uVar3);
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = fcn.00013e00(noname_0,uVar3);
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = fcn.00013e00(noname_0,uVar3);
        uVar1 = *0x169b8;
        if (iVar2 < 0) {
            return iVar2;
        }
        uVar3 = *0x169b8;
        *(*0x169b8 + 0xe0) = 1;
        *(uVar1 + 0x48) = 0x80030c04;
        iVar2 = fcn.00013d70(noname_0,uVar3);
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = fcn.00013e00(noname_0,uVar3);
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = fcn.00013e00(noname_0,uVar3);
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar4 = 1000;
        do {
            if ((*(*0x169b8 + 0x34) & 0xf000) == 0xf000) {
                *(*0x169b8 + 0x54) = *(*0x169b8 + 0x54) & 0x7fffffff;
                return 0;
            }
            fcn.00012160(1000,uVar3);
            bVar5 = iVar4 != 0;
            iVar4 = iVar4 + -1;
        } while (bVar5);
    }
    return -0x7ffffffffffffff9;
}


/* fcn.00014948 @ 0x14948 */

uint fcn.00014948(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t arg4;
    uint uStackX_18;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar1 + 0x78) == 0) {
        uStackX_18 = *(*(iVar1 + 0x7c) << 0x10 | (arg2 & 0xf0000) << 8 | *(*(iVar1 + 0x88) + 8) | arg2 & 0xffffU);
    }
    else if (*(iVar1 + 0x78) == 1) {
        if (*(iVar1 + 0x80) == 0) {
            arg4 = 0;
        }
        else if (*(iVar1 + 0x80) == 1) {
            arg4 = 4;
        }
        else {
            arg4 = 6;
        }
        iVar1 = fcn.0001432c(**(iVar1 + 0x88),CONCAT71(arg2 >> 8,*(iVar1 + 0x7c)),arg2 & 0xffffffff,arg4);
        if (iVar1 < 0) {
            uStackX_18 = 0xffffffff;
        }
    }
    else {
        uStackX_18 = 0xffffffff;
    }
    return uStackX_18;
}


/* fcn.00014b74 @ 0x14b74 */

uint32_t fcn.00014b74(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    
    uVar1 = fcn.00014948(arg1,arg2);
    uVar1 = uVar1 & arg3 | arg4;
    if (*(arg1 + 0x78) == 0) {
        uVar2 = (arg2 & 0xf0000) << 8;
        *(*(arg1 + 0x7c) << 0x10 | *(*(arg1 + 0x88) + 8) | arg2 & 0xffffU | uVar2) = uVar1;
        uVar1 = *(*(arg1 + 0x7c) << 0x10 | *(*(arg1 + 0x88) + 8) | arg2 & 0xffffU | uVar2);
    }
    else if (*(arg1 + 0x78) == 1) {
        if (*(arg1 + 0x80) == 0) {
            iVar3 = 1;
        }
        else if (*(arg1 + 0x80) == 1) {
            iVar3 = 5;
        }
        else {
            iVar3 = 7;
        }
        iVar3 = fcn.0001432c(**(arg1 + 0x88),CONCAT31(arg2 >> 8,*(arg1 + 0x7c)),arg2 & 0xffffffff,iVar3);
        if (iVar3 < 0) {
            uVar1 = 0xffffffff;
        }
    }
    else {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}


/* fcn.000145b4 @ 0x145b4 */

uint32_t fcn.000145b4(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar2 = arg2;
    if (*(arg1 + 0x78) == 0) {
        uVar1 = *(*(arg1 + 0x7c) << 0x10 | (uVar2 & 0xf0000) << 8 | *(*(arg1 + 0x88) + 8) | arg2 & 0xffffU);
    }
    else if (*(arg1 + 0x78) == 1) {
        uVar1 = fcn.00014948(arg1,uVar2 - (uVar2 & 3));
        uVar1 = uVar1 >> ((uVar2 & 3) << 3);
    }
    else {
        uVar1 = 0xff;
    }
    return uVar1;
}


/* fcn.00014774 @ 0x14774 */

uint32_t fcn.00014774(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar2 = arg2;
    if (*(arg1 + 0x78) == 0) {
        uVar1 = *(*(arg1 + 0x7c) << 0x10 | (uVar2 & 0xf0000) << 8 | *(*(arg1 + 0x88) + 8) | arg2 & 0xffffU);
    }
    else if (*(arg1 + 0x78) == 1) {
        uVar1 = fcn.00014948(arg1,uVar2 - (uVar2 & 3));
        uVar1 = uVar1 >> ((uVar2 & 3) << 3);
    }
    else {
        uVar1 = 0xffff;
    }
    return uVar1;
}


/* fcn.0001432c @ 0x1432c */

ulong fcn.0001432c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint16_t uVar2;
    ulong uVar3;
    uint8_t uVar4;
    int iVar5;
    uint64_t uVar6;
    int iVar7;
    uint8_t in_stack_00000028;
    uint16_t in_stack_00000030;
    uint *in_stack_00000038;
    uint8_t *in_stack_00000040;
    uint32_t in_stack_00000048;
    
    if (((in_stack_00000048 < 0x13) && ((0x7ff0cU >> (in_stack_00000048 & 0x1f) & 1) != 0)) ||
       (0x13 < in_stack_00000048)) {
        uVar3 = 0x8000000000000002;
    }
    else if (*((arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU) + 0xc0000000) == -1) {
        uVar3 = 0x8000000000000007;
    }
    else {
        uVar1 = arg1 + 0xd8;
        iVar7 = 0xfffffff;
        iVar5 = 0xfffffff;
        do {
            if ((*((uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff) + 0xc0000000) & 1) == 0) break;
            iVar5 = iVar5 + -1;
        } while (0 < iVar5);
        if (iVar5 != 0) {
            *in_stack_00000040 = 4;
            *((arg1 + 0xd0U >> 4 & 0x10000000 | arg1 + 0xd0U & 0xffffffff) + 0xc0000000) = arg2 << 0x18 | arg3 & 0xffff;
            uVar6 = uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff;
            *((arg1 + 0xdcU >> 4 & 0x10000000 | arg1 + 0xdcU & 0xffffffff) + 0xc0000000) = arg3 >> 0x10;
            *(uVar6 + 0xc0000000) = (arg4 * 2 | in_stack_00000028) << 7 | *(uVar6 + 0xc0000000) & 0x7f;
            *((arg1 + 0xdaU >> 4 & 0x10000000 | arg1 + 0xdaU & 0xffffffff) + 0xc0000000) =
                 in_stack_00000030 & 0xff | 0xf000;
            iVar5 = arg4;
            if (((iVar5 == 1) || (iVar5 == 5)) || ((iVar5 == 7 || (iVar5 == 0x13)))) {
                *((arg1 + 0xd4U >> 4 & 0x10000000 | arg1 + 0xd4U & 0xffffffff) + 0xc0000000) = *in_stack_00000038;
            }
            else {
                *((arg1 + 0xd4U >> 4 & 0x10000000 | arg1 + 0xd4U & 0xffffffff) + 0xc0000000) = 0;
            }
            uVar6 = uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff;
            *(uVar6 + 0xc0000000) = *(uVar6 + 0xc0000000) | 1;
            do {
                uVar2 = *((uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff) + 0xc0000000);
                if ((uVar2 & 1) == 0) break;
                iVar7 = iVar7 + -1;
            } while (0 < iVar7);
            if (iVar7 != 0) {
                uVar4 = uVar2 >> 1 & 3;
                *in_stack_00000040 = uVar4;
                if (uVar4 == 0) {
                    if (((arg4 & 0xfffffff9U) == 0) && (iVar5 != 2)) {
                        *in_stack_00000038 =
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
    return uVar3;
}


/* fcn.0001595c @ 0x1595c */

void fcn.0001595c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00014bf4(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00014bc0 @ 0x14bc0 */

uchar * fcn.00014bc0(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00015980 @ 0x15980 */

void fcn.00015980(void)

{
    if (*0x161d0 == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x161d0 = '\x05';
        }
        else {
            *0x161d0 = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


/* fcn.00015c48 @ 0x15c48 */

void fcn.00015c48(int64_t arg1)

{
    uint *arg1_00;
    
    arg1_00 = 0x16950;
    if (arg1 != 0) {
        arg1_00 = arg1;
    }
    if (arg1_00 != 0x168d0) {
        fcn.00010290(arg1_00,0x168d0,0x68);
    }
    arg1_00[1] = 0xffffffff;
    *(arg1_00 + 6) = 0x15d7c;
    *arg1_00 = 0x10900;
    *(arg1_00 + 0x18) = 0;
    *(arg1_00 + 2) = 0x15c9c;
    *(arg1_00 + 4) = 0x1204c;
    *(arg1_00 + 8) = 0x15d40;
    *(arg1_00 + 10) = 0x15d38;
    *(arg1_00 + 0xc) = 0x15d48;
    *(arg1_00 + 0xe) = 0x15d50;
    *(arg1_00 + 0x10) = 0x15d58;
    *(arg1_00 + 0x12) = 0x15d60;
    *(arg1_00 + 0x14) = 0x15d74;
    *(arg1_00 + 0x16) = 0x15d68;
    return;
}


