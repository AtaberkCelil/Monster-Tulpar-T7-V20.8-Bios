// decompiled by r2ghidra: 0463_VtioDxe.pe32
// functions: 15

/* entry0 @ 0x10374 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = arg2;
    fcn.000103bc(arg1,arg2);
    iVar1 = fcn.0001079c(arg1,iVar1);
    if ((iVar1 < 0) && (*0x110e0 != 0)) {
        (**(*(arg2 + 0x60) + 0x48))();
        *0x110e0 = 0;
    }
    return iVar1;
}


/* fcn.000103bc @ 0x103bc */

void fcn.000103bc(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    int64_t iStackX_8;
    ulong *puStackX_10;
    ulong uStackX_18;
    
    *0x110c8 = *(arg2 + 0x60);
    *0x110d0 = *(arg2 + 0x58);
    *0x110c0 = arg2;
    iStackX_8 = arg1;
    fcn.00010cf0();
    iVar3 = fcn.00010d5c();
    if (iVar3 == 0) {
        uVar4 = fcn.00010370();
        fcn.00010320();
        uVar1 = in(0x1808);
        fcn.000102d0(arg1,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x000102c0();
        }
        fcn.000102d0(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010320();
        }
        else {
            fcn.00010310();
        }
    }
    if (*0x110e0 == 0) {
        *0x110f0 = 0x2000;
        iVar3 = (**(*(arg2 + 0x60) + 0x40))(4);
        if (iVar3 < 0) {
            *0x110e0 = 0;
        }
    }
    fcn.000102e0(1,0,0,&iStackX_8);
    iVar3 = (**(*0x110c8 + 0x140))(0x10e00,0,&puStackX_10);
    *0x110e8 = '\0';
    if (-1 < iVar3) {
        uStackX_18 = 0;
        (**puStackX_10)(puStackX_10,0x110e8);
        if (*0x110e8 != '\0') {
            (*puStackX_10[1])(puStackX_10,&uStackX_18);
        }
    }
    return;
}


/* fcn.0001079c @ 0x1079c */

ulong fcn.0001079c(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char *arg1_00;
    ulong uVar2;
    uint in_register_0000000c;
    int16_t iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    unkbyte7 Var6;
    uchar *puVar7;
    uint32_t *arg1_01;
    uint16_t uVar8;
    uint16_t *puVar9;
    uint16_t *puVar10;
    int64_t iVar11;
    int iVar12;
    char *pcVar13;
    char cVar14;
    ulong uStackX_8;
    int64_t iStackX_10;
    ulong uStackX_18;
    ulong *puStackX_20;
    uint32_t var_7bdh;
    int8_t var_7c1h;
    int8_t var_7c2h;
    int8_t var_7c3h;
    int64_t var_7ceh;
    int8_t var_801h;
    int64_t var_816h;
    int64_t var_822h;
    int64_t var_842h;
    int64_t var_862h;
    int64_t var_8c4h;
    int8_t var_928h;
    int8_t var_92dh;
    int64_t var_c40h;
    uint32_t var_cbdh;
    int8_t var_1211h;
    int8_t var_1212h;
    int8_t var_1213h;
    int8_t var_1214h;
    int8_t var_1215h;
    int64_t var_1220h;
    int64_t var_1228h;
    uchar auStack_1288 [16];
    uchar auStack_1278 [2093];
    char cStack_a4b;
    uchar uStack_a4a;
    uchar uStack_a49;
    uchar uStack_a48;
    uchar uStack_a47;
    uchar uStack_a46;
    char cStack_a45;
    uint16_t auStack_a44 [5];
    uint16_t auStack_a3a [5];
    uint16_t auStack_a30 [20];
    uchar uStack_a07;
    uchar auStack_a06 [20];
    uchar auStack_9f2 [274];
    uchar auStack_8e0 [5];
    uchar uStack_8db;
    uchar auStack_5c8 [125];
    char cStack_54b;
    int64_t var_80h;
    int64_t var_70h;
    
    uStackX_8 = CONCAT44(in_register_0000000c,arg1);
    uStackX_18 = 0x578;
    iStackX_10 = arg2;
    iVar1 = (**(*0x110d0 + 0x48))(L"SaSetup",0x10df0,0,&uStackX_18,auStack_5c8);
    iVar11 = 0;
    if ((-1 < iVar1) && (cStack_54b != '\0')) {
        uStackX_18 = 0xca9;
        uVar5 = 0x10dc0;
        iVar1 = (**(*0x110d0 + 0x48))(L"Setup",0x10dc0,0,&uStackX_18,auStack_1278);
        uVar2 = uStackX_8;
        if ((-1 < iVar1) && (cStack_a4b != '\0')) {
            puVar9 = auStack_a3a;
            puVar10 = 0x10fdc;
            iVar12 = 0x24;
            iVar1 = 5;
            uStackX_8._6_2_ = SUB82(uVar2,6);
            uStackX_8._0_6_ =
                 CONCAT15(cStack_a45,
                          CONCAT14(uStack_a46,
                                   CONCAT13(uStack_a47,CONCAT12(uStack_a48,CONCAT11(uStack_a49,uStack_a4a)))));
            do {
                if (*(&uStackX_8 + iVar11) != '\0') {
                    uVar8 = puVar9[-5];
                    puVar10[-1] = uVar8;
                    uVar4 = (2 - uVar8) * *puVar10;
                    uVar5 = uVar4;
                    iVar3 = uVar4;
                    puVar10[-0xd] = 0x22 - iVar3;
                    puVar10[-7] = 0x10 - iVar3;
                    *(puVar10 + -0x1b) = auStack_8e0[iVar11];
                    puVar10[1] = *puVar9;
                    puVar10[2] = puVar9[5];
                    iVar12 = iVar12 + puVar10[-0xd];
                }
                iVar11 = iVar11 + 1;
                puVar9 = puVar9 + 1;
                puVar10 = puVar10 + 0x11;
                iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
            iStackX_10 = CONCAT44(iStackX_10._4_4_,iVar12);
            cVar14 = '\0';
            if (cStack_a45 != '\0') {
                if (((*0xc00a0000 != -1) && (*0xc00a00b0 == '\t')) && (*0xc00a00b8 == 9)) {
                    *0x10fad = *0xc00a00ba;
                }
                Var6 = uVar5 >> 8;
                puVar7 = auStack_9f2;
                uVar8 = 0;
                do {
                    iVar1 = CONCAT71(Var6,uStack_a07);
                    fcn.0001050c(uVar8,iVar1,CONCAT71(puVar10 >> 8,uStack_8db),CONCAT71(puVar9 >> 8,puVar7[-0x14]))
                    ;
                    puVar10 = *0x10e11;
                    uVar8 = uVar8 + 1;
                    puVar9 = *0x10f01;
                    puVar7 = puVar7 + 1;
                    *0x10e79 = uStack_8db;
                    Var6 = iVar1 >> 8;
                    *0x10e86 = *0x10f01 + *0x10e11 + *0x10fa9;
                    *0x10e7a = *0x10e86 + 0x12;
                } while (uVar8 < 2);
                iVar12 = *0x10f6a + *0x10eba + *0x10e11 + *0x10f01 + 0x12 + *0x10fa9 + iStackX_10;
                cVar14 = uStackX_8._5_1_;
            }
            iVar1 = 5;
            arg1_00 = fcn.00010cc0();
            if (arg1_00 == NULL) {
                return 0x8000000000000009;
            }
            if (arg1_00 != "SDEV") {
                section..text(arg1_00,"SDEV",0x24);
            }
            arg1_01 = arg1_00 + 0x24;
            pcVar13 = &uStackX_8;
            puVar9 = 0x10fc2;
            do {
                if (*pcVar13 != '\0') {
                    if ((*puVar9 != 0) && (arg1_01 != puVar9 + -1)) {
                        section..text(arg1_01,puVar9 + -1,*puVar9);
                    }
                    arg1_01 = arg1_01 + *puVar9;
                }
                pcVar13 = pcVar13 + 1;
                puVar9 = puVar9 + 0x11;
                iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
            if (cVar14 != '\0') {
                if (arg1_01 != 0x10e78) {
                    section..text(arg1_01,0x10e78,0x12);
                }
                iVar1 = arg1_01 + 0x12;
                uVar5 = *0x10fa9;
                if ((uVar5 != 0) && (iVar1 != 0x10fa8)) {
                    section..text(iVar1,0x10fa8,*0x10fa9);
                    uVar5 = *0x10fa9;
                }
                iVar1 = iVar1 + uVar5;
                uVar5 = *0x10f01;
                if ((uVar5 != 0) && (iVar1 != 0x10f00)) {
                    section..text(iVar1,0x10f00,*0x10f01);
                    uVar5 = *0x10f01;
                }
                iVar1 = iVar1 + uVar5;
                uVar5 = *0x10e11;
                if ((uVar5 != 0) && (iVar1 != 0x10e10)) {
                    section..text(iVar1,0x10e10,*0x10e11);
                    uVar5 = *0x10e11;
                }
                iVar1 = iVar1 + uVar5;
                uVar5 = *0x10eba;
                if ((uVar5 != 0) && (iVar1 != 0x10eb8)) {
                    section..text(iVar1,0x10eb8,*0x10eba);
                    uVar5 = *0x10eba;
                }
                if ((*0x10f6a != 0) && (iVar1 + uVar5 != 0x10f68)) {
                    section..text(iVar1 + uVar5,0x10f68,*0x10f6a);
                }
            }
            (**(*0x110c8 + 0x140))(0x10dd0,0,&puStackX_20);
            *(arg1_00 + 4) = iVar12;
            uVar2 = (**puStackX_20)(puStackX_20,arg1_00,iVar12,auStack_1288);
            (**(*0x110c8 + 0x48))(arg1_00);
            return uVar2;
        }
    }
    return 0;
}


/* fcn.00010cf0 @ 0x10cf0 */

int64_t fcn.00010cf0(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x110d8 == 0) {
        *0x110d8 = 0;
        if (*(*0x110c0 + 0x68) != 0) {
            piVar2 = *(*0x110c0 + 0x70);
            do {
                if ((*0x10de0 == *piVar2) && (*0x10de8 == piVar2[1])) {
                    *0x110d8 = (*(*0x110c0 + 0x70))[uVar1 * 3 + 2];
                    return *0x110d8;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x110c0 + 0x68));
        }
    }
    return *0x110d8;
}


/* fcn.00010d5c @ 0x10d5c */

void fcn.00010d5c(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00010cf0();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00010d93:
            if ((piVar1 == NULL) || ((*0x11070 == *(piVar1 + 4) && (*0x11078 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00010d93;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010370 @ 0x10370 */

uint64_t fcn.00010370(void)

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


/* fcn.00010320 @ 0x10320 */

void fcn.00010320(void)

{
    return;
}


/* fcn.000102d0 @ 0x102d0 */

uint64_t fcn.000102d0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102c2 @ 0x102c2 */

void fcn.000102c2(void)

{
    return;
}


/* fcn.00010310 @ 0x10310 */

void fcn.00010310(void)

{
    return;
}


/* fcn.000102e0 @ 0x102e0 */

uint64_t fcn.000102e0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,uint32_t *arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint32_t *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 2912 named .text
    uVar5 = 0;
    puVar2 = arg2 + arg3 + -1;
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
            puVar2 = puVar2 + 2;
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


/* fcn.0001050c @ 0x1050c */

void fcn.0001050c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *arg2_00;
    int16_t iVar1;
    int16_t iVar2;
    uchar uVar3;
    uint16_t uVar4;
    uint8_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint32_t *arg1_00;
    int64_t iVar10;
    uchar in_stack_00000028;
    ushort in_stack_00000030;
    ushort in_stack_00000038;
    ushort in_stack_00000040;
    uchar in_stack_00000048;
    uchar in_stack_00000050;
    uchar in_stack_00000058;
    uchar in_stack_00000060;
    ushort in_stack_00000068;
    uint16_t in_stack_00000070;
    ulong *in_stack_00000078;
    ulong *in_stack_00000080;
    int16_t *in_stack_00000088;
    int16_t *in_stack_00000090;
    uint32_t auStack_68 [16];
    
    uVar4 = arg1;
    fcn.000102a0(auStack_68,0x31);
    if (uVar4 == 0) {
        iVar8 = 0x10f00;
        iVar9 = 0x10eb8;
    }
    else {
        if (uVar4 != 1) {
            return;
        }
        iVar8 = 0x10e10;
        iVar9 = 0x10f68;
    }
    *(iVar9 + 1) = arg3;
    if (uVar4 < (arg2 & 0xff)) {
        iVar1 = *(iVar8 + 1);
        *(iVar8 + 1) = (iVar1 - *(iVar8 + 0x12)) + in_stack_00000070;
        *(iVar8 + 5) = in_stack_00000028;
        *(iVar8 + 6) = in_stack_00000030;
        *(iVar8 + 8) = in_stack_00000038;
        *(iVar8 + 10) = in_stack_00000040;
        *(iVar8 + 0xc) = in_stack_00000048;
        *(iVar8 + 0xd) = in_stack_00000050;
        *(iVar8 + 0xe) = in_stack_00000058;
        *(iVar8 + 0xf) = in_stack_00000060;
        *(iVar8 + 4) = arg4;
        *(iVar8 + 0x10) = in_stack_00000068;
        *(iVar8 + 0x12) = in_stack_00000070;
        if (uVar4 == 0) {
            iVar10 = iVar8 - in_stack_00000078;
            iVar6 = 4;
            do {
                *(iVar10 + 0x14 + in_stack_00000078) = *in_stack_00000078;
                in_stack_00000078 = in_stack_00000078 + 1;
                iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            iVar2 = *in_stack_00000088;
        }
        else {
            if (uVar4 != 1) {
                return;
            }
            iVar10 = iVar8 - in_stack_00000080;
            iVar6 = 4;
            do {
                *(iVar10 + 0x14 + in_stack_00000080) = *in_stack_00000080;
                in_stack_00000080 = in_stack_00000080 + 1;
                iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            iVar2 = *in_stack_00000090;
        }
        if (iVar2 != 0) {
            arg2_00 = iVar8 + 0x34;
            fcn.000102a0(arg2_00,0x31);
            uVar7 = 0;
            if (in_stack_00000070 != 0) {
                do {
                    if (uVar4 == 0) {
                        uVar3 = in_stack_00000088[uVar7];
code_r0x000106cd:
                        *(auStack_68 + uVar7) = uVar3;
                    }
                    else if (uVar4 == 1) {
                        uVar3 = in_stack_00000090[uVar7];
                        goto code_r0x000106cd;
                    }
                    uVar5 = uVar7 + 1;
                    uVar7 = uVar5;
                } while (uVar5 < in_stack_00000070);
            }
            uVar7 = 0;
            uVar4 = 0;
            while (auStack_68[0] != '\0') {
                uVar5 = uVar7 + 1;
                uVar7 = uVar5;
                uVar4 = uVar5;
                auStack_68[0]._0_1_ = *(auStack_68 + uVar7);
            }
            if (in_stack_00000070 != uVar4 + 1) {
                iVar2 = *(iVar8 + 0x12);
                *(iVar8 + 0x12) = uVar4 + 1;
                *(iVar8 + 1) = (iVar1 - iVar2) + uVar4 + 1;
            }
            if (arg2_00 != auStack_68) {
                section..text(arg2_00,auStack_68,0x31);
            }
            iVar1 = *(iVar8 + 0x12);
            *(iVar9 + 2) = *(iVar9 + 2) + (iVar1 - *(iVar9 + 6));
            *(iVar9 + 6) = iVar1;
            arg1_00 = iVar9 + 0xc;
            fcn.000102a0(arg1_00,0x31);
            if (arg1_00 != arg2_00) {
                section..text(arg1_00,arg2_00,0x31);
            }
        }
    }
    else {
        *(iVar8 + 1) = 0;
        *(iVar9 + 2) = 0;
    }
    return;
}


/* fcn.00010cc0 @ 0x10cc0 */

ulong fcn.00010cc0(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x110c8 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


