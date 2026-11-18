// decompiled by r2ghidra: 0334_MeExtMeasurement.pe32
// functions: 27

/* entry0 @ 0x10454 */

void entry0(int64_t arg1,int64_t arg2)

{
    uint32_t arg2_00;
    
    arg2_00 = arg2;
    fcn.00010470(arg1,arg2);
    fcn.00010e40(arg1,arg2_00);
    return;
}


/* fcn.00010470 @ 0x10470 */

void fcn.00010470(int64_t arg1,int64_t arg2)

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
    
    *0x11c70 = *(arg2 + 0x60);
    *0x11c78 = *(arg2 + 0x58);
    *0x11c68 = arg2;
    iStackX_8 = arg1;
    fcn.00011450();
    noname_0 = 0x11b78;
    iVar3 = fcn.000114bc(0x11b78);
    if (iVar3 == 0) {
        uVar4 = fcn.00010370();
        fcn.00010320();
        uVar1 = in(0x1808);
        fcn.000102d0(noname_0,0x1808);
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
    fcn.000102e0(1,0,0,&iStackX_8);
    iVar3 = (**(*0x11c70 + 0x140))(0x11b60,0,&puStackX_10);
    *0x11c88 = '\0';
    if (-1 < iVar3) {
        uStackX_18 = 0;
        (**puStackX_10)(puStackX_10,0x11c88);
        if (*0x11c88 != '\0') {
            (*puStackX_10[1])(puStackX_10,&uStackX_18);
        }
    }
    return;
}


/* fcn.00010e40 @ 0x10e40 */

int64_t fcn.00010e40(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    uint in_register_00000014;
    uint8_t uVar5;
    uint8_t uVar6;
    uint8_t uVar7;
    int64_t iStackX_8;
    uint64_t uStackX_10;
    uchar auStackX_18 [16];
    
    uStackX_10 = CONCAT44(in_register_00000014,arg2);
    iVar3 = 0;
    uVar6 = 0;
    iVar2 = 0;
    iStackX_8 = arg1;
    iVar1 = fcn.000117dc();
    if (iVar1 < 0) {
        uVar7 = 0;
    }
    else {
        uVar7 = *(*0x11c90 + 0x1c) >> 3 & 1;
    }
    iVar1 = fcn.000114bc(0x11b00);
    if (iVar1 != 0) {
        if (uVar7 == 0) {
            return 0;
        }
        iVar2 = (**(*0x11c70 + 0x170))(0x200,8,0x10bd0,iVar1,0x11b50,auStackX_18);
        return iVar2;
    }
    iVar1 = fcn.000114bc(0x11ad0);
    if (iVar1 == 0) {
        return -0x7ffffffffffffff2;
    }
    if (*(iVar1 + 0x74) != '\x01') {
        return -0x7ffffffffffffffd;
    }
    uVar5 = *(iVar1 + 0x70) & 1;
    if (*(iVar1 + 0x28) == '\x01') {
        uVar6 = *(iVar1 + 0x24) >> 2 & 1;
    }
    uVar4 = 0x11ab0;
    iVar1 = fcn.000114bc(0x11ab0);
    if (iVar1 != 0) {
        iVar2 = iVar1 + 0x18;
    }
    if ((uVar7 & uVar5) == 1) {
        iVar3 = (**(*0x11c70 + 0x170))(0x200,8,0x10a3c,0,0x11b50,auStackX_18);
        goto code_r0x00010fe7;
    }
    if (uVar5 == uVar7) goto code_r0x00010fe7;
    if (uVar7 == 1) {
        iVar3 = fcn.00011650(CONCAT71(uVar4 >> 8,1));
        if (-1 < iVar3) {
            uStackX_10 = uStackX_10 & 0xffffffffffffff00;
            iVar3 = fcn.00011704(&uStackX_10);
            if ((-1 < iVar3) && (uStackX_10 == '\x01')) goto code_r0x00010fe2;
        }
        *0x11c60 = 1;
    }
    else {
        iVar3 = fcn.00011650(0);
        if (iVar3 < 0) goto code_r0x00010fe7;
        uStackX_10 = CONCAT71(uStackX_10._1_7_,1);
        iVar3 = fcn.00011704(&uStackX_10);
        if ((iVar3 < 0) || (uStackX_10 != '\0')) goto code_r0x00010fe7;
code_r0x00010fe2:
        fcn.00010dec();
    }
code_r0x00010fe7:
    if (((iVar2 != 0) && ((*(iVar2 + 0x1c) & 1) != 0)) && (uVar6 == 1)) {
        if (*(*0x11c68 + 8) < 0x20000) {
            iVar3 = -0x7ffffffffffffffd;
        }
        else {
            iVar3 = (**(*0x11c70 + 0x170))(0x200,8,0x1106c,&iStackX_8,0x11ac0,auStackX_18);
        }
    }
    return iVar3;
}


/* fcn.00011450 @ 0x11450 */

int64_t fcn.00011450(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x11c80 == 0) {
        *0x11c80 = 0;
        if (*(*0x11c68 + 0x68) != 0) {
            piVar2 = *(*0x11c68 + 0x70);
            do {
                if ((*0x11b10 == *piVar2) && (*0x11b18 == piVar2[1])) {
                    *0x11c80 = (*(*0x11c68 + 0x70))[uVar1 * 3 + 2];
                    return *0x11c80;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x11c68 + 0x68));
        }
    }
    return *0x11c80;
}


/* fcn.000114bc @ 0x114bc */

void fcn.000114bc(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00011450();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x000114ea:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x000114ea;
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

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 6208 named .text
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


/* fcn.00011a58 @ 0x11a58 */

void fcn.00011a58(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00011a28(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102a0(arg1_00,arg1);
    }
    return;
}


/* fcn.00011a28 @ 0x11a28 */

ulong fcn.00011a28(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x11c70 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000118a8 @ 0x118a8 */

int64_t fcn.000118a8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint uVar4;
    ulong in_stack_00000028;
    ulong in_stack_00000030;
    uchar auStack_28 [8];
    int64_t iStack_20;
    int64_t iStack_18;
    uchar auStack_10 [8];
    
    iStack_20 = 0;
    iStack_18 = 0;
    iVar1 = (**(*0x11c70 + 0x140))(0x11ae0,0,&iStack_20);
    iVar3 = arg1;
    uVar4 = arg2;
    uVar2 = arg4;
    if (-1 < iVar1) {
        *0x11ca8 = 1;
        *0x11ca4 = 0xe;
        *0x11caa = iVar3;
        *0x11cae = uVar4;
        if (uVar2 < 0x401) {
            (**(*0x11c70 + 0x160))(0x11cb2,arg3,arg4 & 0xffffffff);
            *0x11ca0 = uVar2 + 0x12;
            iVar1 = (**(iStack_20 + 0x10))(iStack_20,0,in_stack_00000028,in_stack_00000030,0x11ca0);
            if (-1 < iVar1) {
                return iVar1;
            }
        }
    }
    iVar1 = (**(*0x11c70 + 0x140))(0x11b30,0,&iStack_18);
    if (-1 < iVar1) {
        *0x11ca0 = iVar3;
        *0x11ca4 = uVar4;
        *0x11cbc = uVar2;
        if (uVar2 < 0x401) {
            (**(*0x11c70 + 0x160))(0x11cc0,arg3,arg4 & 0xffffffff);
            iVar1 = (**(iStack_18 + 0x20))
                              (iStack_18,in_stack_00000028,in_stack_00000030,4,0x11ca0,auStack_28,auStack_10);
        }
        else {
            iVar1 = -0x7ffffffffffffffb;
        }
    }
    return iVar1;
}


/* fcn.00011358 @ 0x11358 */

void fcn.00011358(void)

{
    if (*0x11b70 == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x11b70 = '\x05';
        }
        else {
            *0x11b70 = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


/* fcn.00010938 @ 0x10938 */

ulong fcn.00010938(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    char cVar4;
    uint64_t uVar5;
    uint *puVar6;
    char cVar7;
    ulong uVar8;
    
    cVar4 = arg2;
    if ((cVar4 == '\0') || (cVar7 = arg3, cVar7 == '\0')) {
        return 0x8000000000000002;
    }
    if (cVar4 == '\x02') {
        uVar8 = 0;
        if (cVar7 != '\0') {
            uVar2 = 0xc0;
            uVar5 = arg3 & 0xff;
            do {
                uVar3 = uVar2 & 0xfff;
                uVar2 = uVar2 + 4;
                *arg1 = *((uVar3 | 0xb0000) + 0xc0000000);
                arg1 = arg1 + 4;
                uVar5 = uVar5 - 1;
                uVar8 = 0;
            } while (uVar5 != 0);
        }
    }
    else if (cVar4 == '\x04') {
        if (*0xc00b0002 != -1) {
            uVar5 = *0xc00b0010 & 0xfffffff0;
            if ((*0xc00b0010 & 6) == 4) {
                uVar5 = uVar5 + (*0xc00b0014 << 0x20);
            }
            if (uVar5 != 0) {
                if ((*(uVar5 + 0x800) & 4) != 0) {
                    return 0x8000000000000006;
                }
                if (cVar7 == '\0') {
                    return 0;
                }
                puVar6 = uVar5 + 0xcc0;
                uVar5 = arg3 & 0xff;
                do {
                    uVar1 = *puVar6;
                    puVar6 = puVar6 + 1;
                    *arg1 = uVar1;
                    arg1 = arg1 + 4;
                    uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
                return 0;
            }
        }
        uVar8 = 0x8000000000000007;
    }
    else {
        uVar8 = 0x8000000000000003;
    }
    return uVar8;
}


/* fcn.00010584 @ 0x10584 */

ulong fcn.00010584(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    uint16_t uVar2;
    bool bVar3;
    char cVar4;
    int64_t iVar5;
    uint32_t *puVar6;
    ulong uVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint64_t arg3_00;
    int64_t iVar11;
    uchar *arg1_00;
    uint32_t uVar12;
    char cVar13;
    char cVar14;
    uchar uStackX_18;
    int8_t var_3d0h;
    uint32_t var_3d8h;
    uint64_t in_stack_fffffffffffffb68;
    int iStack_488;
    uint32_t uStack_484;
    uint32_t uStack_480;
    ulong *apuStack_478 [2];
    uchar auStack_468 [20];
    uint32_t uStack_454;
    uchar auStack_450 [1040];
    
    uVar8 = 0;
    bVar3 = false;
    uVar9 = arg3 & 0xff;
    fcn.000102a0(auStack_468,0x418);
    uVar10 = uVar8;
    do {
        arg3_00 = uVar10 + 1;
        pcVar1 = uVar10 + 0x11bf1;
        uVar10 = arg3_00;
    } while (*pcVar1 != '\0');
    if (arg3_00 != 0) {
        section..text(auStack_468,0x11bf0,arg3_00);
    }
    arg1_00 = auStack_450;
    uVar12 = 0x400;
    uStackX_18 = 0;
    uVar10 = uVar8;
    uStack_480 = uVar9;
    uStack_454 = uVar9;
    do {
        apuStack_478[0] = NULL;
        cVar13 = '\0';
        cVar14 = '\0';
        iVar5 = (**(*0x11c70 + 0x140))(0x11aa0,0,apuStack_478);
        cVar4 = '\0';
        if (iVar5 < 0) {
code_r0x00010766:
            cVar14 = cVar4;
code_r0x00010768:
            bVar3 = true;
        }
        else {
            if (apuStack_478[0] != NULL) {
                iVar5 = (*apuStack_478[0][8])(&iStack_488);
                if ((-1 < iVar5) && (iStack_488 == 0)) {
                    uStack_484 = uVar12 + 10;
                    puVar6 = fcn.00011a58(uStack_484);
                    if (puVar6 != NULL) {
                        *puVar6 = 0;
                        *puVar6 = 0xf0;
                        *puVar6 = *puVar6 & 0xffff9bff;
                        *puVar6 = *puVar6 | 0x1b00;
                        *(puVar6 + 1) = uStackX_18;
                        *(puVar6 + 5) = 0;
                        in_stack_fffffffffffffb68 = in_stack_fffffffffffffb68 & 0xffffffffffffff00;
                        iVar5 = (**apuStack_478[0])(0,puVar6,8,&uStack_484,in_stack_fffffffffffffb68,7);
                        if (-1 < iVar5) {
                            if ((((*puVar6 & 0x7f00) == 0x1b00) && ((*puVar6 & 0x8000) != 0)) && (*(puVar6 + 3) == '\0')
                               ) {
                                uVar2 = puVar6[2];
                                if (uVar12 < uVar2) {
                                    iVar5 = -0x7ffffffffffffffb;
                                }
                                else {
                                    if ((uVar2 != 0) && (arg1_00 != puVar6 + 10)) {
                                        section..text(arg1_00,puVar6 + 10,uVar2);
                                    }
                                    uStackX_18 = *(puVar6 + 6);
                                    uVar10 = puVar6[2];
                                    cVar13 = *(puVar6 + 7);
                                }
                            }
                            else {
                                iVar5 = -0x7ffffffffffffff9;
                            }
                        }
                        (**(*0x11c70 + 0x48))(puVar6);
                        goto code_r0x0001073a;
                    }
                }
                goto code_r0x00010768;
            }
code_r0x0001073a:
            cVar14 = cVar13;
            cVar4 = cVar14;
            if (iVar5 < 0) goto code_r0x00010766;
            uVar9 = uVar8 + uVar10;
            uVar8 = uVar9;
            if (cVar14 == '\0') break;
            if (0x3ff < uVar9) {
                return 0x8000000000000005;
            }
            arg1_00 = arg1_00 + uVar10;
            uVar12 = 0x400 - uVar9;
        }
        uVar9 = uVar8;
    } while (cVar14 != '\0');
    uVar12 = 0;
    if (bVar3) {
        uVar12 = 0x10;
    }
    *0x120a0 = uVar12 | *0x120a0 & 0xffffffef;
    if (uVar12 != 0) {
        fcn.000102a0(auStack_468,0x418);
        iVar5 = 0;
        do {
            iVar11 = iVar5 + 1;
            pcVar1 = iVar5 + 0x11bf1;
            iVar5 = iVar11;
        } while (*pcVar1 != '\0');
        if (iVar11 != 0) {
            section..text(auStack_468,0x11bf0,iVar11);
        }
        uStack_454 = uStack_480;
    }
    if (((*0x120a0 & 4) != 0) || ((*0x120a0 & 0x20) != 0)) {
        fcn.000102a0(auStack_468,0x418);
        iVar5 = 0;
        do {
            iVar11 = iVar5 + 1;
            pcVar1 = iVar5 + 0x11bf1;
            iVar5 = iVar11;
        } while (*pcVar1 != '\0');
        if (iVar11 != 0) {
            section..text(auStack_468,0x11bf0,iVar11);
        }
        if ((arg2 & 0xffU) != 0) {
            fcn.000102a0(arg1,(arg2 & 0xffU) << 2);
        }
    }
    uVar7 = fcn.000118a8(0,0x11,auStack_468,uVar9 + 0x18);
    return uVar7;
}


/* fcn.00010888 @ 0x10888 */

void fcn.00010888(void)

{
    char *pcVar1;
    char cVar2;
    int64_t iVar3;
    int64_t arg3;
    uchar auStack_28 [20];
    uint uStack_14;
    ushort uStack_10;
    int16_t iStack_e;
    uint uStack_c;
    
    fcn.000102a0(auStack_28,0x20);
    iVar3 = 0;
    do {
        arg3 = iVar3 + 1;
        pcVar1 = iVar3 + 0x11bb1;
        iVar3 = arg3;
    } while (*pcVar1 != '\0');
    if (arg3 != 0) {
        section..text(auStack_28,0x11bb0,arg3);
    }
    uStack_14 = 1;
    uStack_10 = 0x8086;
    iStack_e = *0xc00b0002;
    if (*0xc00b0002 == -1) {
        cVar2 = fcn.00011358();
        iStack_e = 0x7ae8;
        if (cVar2 != '\x04') {
            iStack_e = -0x5f20;
        }
    }
    uStack_c = *0x120a0;
    fcn.000118a8(0,0x11,auStack_28,0x20);
    return;
}


/* fcn.000113c0 @ 0x113c0 */

ulong fcn.000113c0(int64_t arg1)

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
    uVar2 = fcn.00011394(0x11b90,10);
    if (uVar5 <= uVar2) {
        return 0x8000000000000005;
    }
    if (pcVar3 <= arg1) {
        if (arg1 < pcVar3 + uVar2 + 1) {
            return 0x800000000000000f;
        }
        if (pcVar3 < arg1) goto code_r0x00011428;
    }
    if (pcVar3 < arg1 + 0x14) {
        return 0x800000000000000f;
    }
code_r0x00011428:
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


/* fcn.000117dc @ 0x117dc */

uint64_t fcn.000117dc(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint16_t uVar4;
    int64_t iStackX_8;
    
    uVar2 = 0;
    if (*0x11c90 == 0) {
        iStackX_8 = 0;
        iVar1 = (**(*0x11c70 + 0x140))(0x11b20,0,&iStackX_8);
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
                    if ((*(iVar1 + 8) == *0x11af0) && (*(iVar1 + 0x10) == *0x11af8)) {
                        *0x11c90 = iVar1;
                        goto code_r0x0001189a;
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
code_r0x0001189a:
    return uVar2;
}


/* fcn.00011650 @ 0x11650 */

int64_t fcn.00011650(int64_t arg1)

{
    int64_t iVar1;
    uint32_t var_18h;
    int64_t var_20h;
    int32_t var_bp_28h;
    int8_t var_2ch;
    int64_t var_10h;
    
    var_10h = 0;
    iVar1 = (**(*0x11c70 + 0x140))(0x11aa0,0,&var_10h);
    if ((-1 < iVar1) && (var_10h != 0)) {
        iVar1 = (**(var_10h + 0x40))(&var_18h);
        if ((iVar1 < 0) || (var_18h != 0)) {
            iVar1 = -0x7ffffffffffffffd;
        }
        else {
            var_2ch = arg1 & 1;
            var_bp_28h = 0x22ff;
            var_20h._0_4_ = 4;
            iVar1 = (**var_10h)(0,&var_bp_28h,5,&var_20h,0,7);
            if ((-1 < iVar1) && ((var_bp_28h & 0xff000000U) != 0)) {
                iVar1 = -0x7ffffffffffffff9;
            }
        }
    }
    return iVar1;
}


/* fcn.00011704 @ 0x11704 */

int64_t fcn.00011704(uint32_t *arg1)

{
    int64_t iVar1;
    uint32_t var_18h;
    int64_t var_20h;
    int64_t var_bp_28h;
    int64_t var_10h;
    
    var_10h = 0;
    iVar1 = (**(*0x11c70 + 0x140))(0x11aa0,0,&var_10h);
    if ((-1 < iVar1) && (var_10h != 0)) {
        iVar1 = (**(var_10h + 0x40))(&var_18h);
        if ((iVar1 < 0) || (var_18h != 0)) {
            iVar1 = -0x7ffffffffffffffd;
        }
        else {
            var_bp_28h._0_4_ = 0x23ff;
            var_20h._0_4_ = 5;
            iVar1 = (**var_10h)(0,&var_bp_28h,4,&var_20h,0,7);
            if (-1 < iVar1) {
                if ((((var_bp_28h & 0x7f00) == 0x2300) && ((var_bp_28h >> 0xf & 1) != 0)) &&
                   ((var_bp_28h & 0xff000000) == 0)) {
                    *arg1 = var_bp_28h._4_1_;
                }
                else {
                    iVar1 = -0x7ffffffffffffff9;
                }
            }
        }
    }
    return iVar1;
}


/* fcn.00010dec @ 0x10dec */

void fcn.00010dec(void)

{
    uchar auStack_38 [20];
    uchar auStack_24 [36];
    
    fcn.000102a0(auStack_38,0x24);
    section..text(auStack_24,0x11b40,0x10);
    fcn.000113c0(auStack_38);
    (**(*0x11c78 + 0x68))(3,0,0x24,auStack_38);
    return;
}


/* fcn.00011508 @ 0x11508 */

int64_t fcn.00011508(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *arg2_00;
    uint32_t uVar1;
    ulong *puVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    int aiStackX_20 [2];
    uint32_t auStack_28 [4];
    
    iVar3 = (**(*arg4 + 0x40))(aiStackX_20);
    if ((iVar3 < 0) || (aiStackX_20[0] != 0)) {
        iVar3 = -0x7ffffffffffffffd;
    }
    else {
        auStack_28[0] = *arg2 + 8;
        uVar1 = 0x11;
        if (0x11 < auStack_28[0]) {
            uVar1 = auStack_28[0];
        }
        puVar4 = fcn.00011a58(uVar1);
        if (*arg2 != 0) {
            fcn.000102a0(arg3,*arg2);
        }
        if (puVar4 == NULL) {
            iVar3 = -0x7ffffffffffffff7;
        }
        else {
            uVar1 = *arg2;
            *puVar4 = 10;
            *puVar4 = *puVar4 & 0xffff8aff;
            *puVar4 = *puVar4 | 0xa00;
            puVar4[3] = uVar1;
            puVar2 = *arg4;
            puVar4[1] = arg1;
            arg2_00 = puVar4 + 2;
            *arg2_00 = 0;
            *(puVar4 + 4) = 0;
            iVar3 = (**puVar2)(0,puVar4,0x11,auStack_28,0,9);
            if (-1 < iVar3) {
                if (((((*puVar4 & 0x7f00) == 0xa00) && ((*puVar4 & 0x8000) != 0)) && (*(puVar4 + 3) == '\0')) &&
                   (uVar1 = puVar4[1], uVar1 <= *arg2)) {
                    if ((uVar1 != 0) && (arg3 != arg2_00)) {
                        section..text(arg3,arg2_00,uVar1);
                    }
                    *arg2 = puVar4[1];
                }
                else {
                    iVar3 = -0x7ffffffffffffff9;
                }
            }
            (**(*0x11c70 + 0x48))(puVar4);
        }
    }
    return iVar3;
}


/* fcn.00011394 @ 0x11394 */

uint64_t fcn.00011394(uint32_t arg1,int64_t arg2)

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


