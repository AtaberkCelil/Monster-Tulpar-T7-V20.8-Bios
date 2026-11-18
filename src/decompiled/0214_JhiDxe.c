// decompiled by r2ghidra: 0214_JhiDxe.pe32
// functions: 105

/* entry0 @ 0x103b4 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.000103d0(arg1,arg2);
    fcn.000104d8(arg1,arg2);
    return;
}


/* fcn.000103d0 @ 0x103d0 */

void fcn.000103d0(int64_t arg1,int64_t arg2)

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
    
    *0x178e8 = *(arg2 + 0x60);
    *0x178e0 = arg2;
    iStackX_8 = arg1;
    fcn.000129b8();
    noname_0 = 0x17080;
    iVar3 = fcn.00012a24(0x17080);
    if (iVar3 == 0) {
        uVar4 = fcn.000103b0();
        fcn.00010360();
        uVar1 = in(0x1808);
        fcn.00010310(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x00010300();
        }
        fcn.00010310(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010360();
        }
        else {
            fcn.00010350();
        }
    }
    fcn.00010320(1,0,0,&iStackX_8);
    iVar3 = (**(*0x178e8 + 0x140))(0x16ec0,0,&puStackX_10);
    *0x178f8 = '\0';
    if (-1 < iVar3) {
        uStackX_18 = 0;
        (**puStackX_10)(puStackX_10,0x178f8);
        if (*0x178f8 != '\0') {
            (*puStackX_10[1])(puStackX_10,&uStackX_18);
        }
    }
    return;
}


/* fcn.000104d8 @ 0x104d8 */

ulong fcn.000104d8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong uVar3;
    uint16_t uVar4;
    int64_t iStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    
    uVar2 = 0;
    iStackX_8 = 0;
    uVar3 = 0x8000000000000003;
    iStackX_10 = arg2;
    iStackX_18 = arg1;
    iVar1 = (**(*0x178e8 + 0x140))(0x16ea0,0,&iStackX_8);
    if ((-1 < iVar1) && (iStackX_8 != 0)) {
        uVar4 = 0;
        if (*(iStackX_8 + 0x1e) != 0) {
            do {
                if (*(iStackX_8 + 2) < uVar2 + 0x24U) break;
                iVar1 = iStackX_8 + 0x24 + uVar2;
                if ((*(iVar1 + 8) == *0x16e40) && (*(iVar1 + 0x10) == *0x16e48)) goto code_r0x00010579;
                uVar4 = uVar4 + 1;
                uVar2 = uVar2 + *(iVar1 + 2);
            } while (uVar4 < *(iStackX_8 + 0x1e));
        }
        iVar1 = iStackX_10;
code_r0x00010579:
        if ((*(iVar1 + 0x1c) >> 1 & 1) != 0) {
            uVar3 = (**(*0x178e8 + 0x148))(&iStackX_18,0x16e80,0x16ed0,0);
        }
    }
    return uVar3;
}


/* fcn.000129b8 @ 0x129b8 */

int64_t fcn.000129b8(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x178f0 == 0) {
        *0x178f0 = 0;
        if (*(*0x178e0 + 0x68) != 0) {
            piVar2 = *(*0x178e0 + 0x70);
            do {
                if ((*0x16e90 == *piVar2) && (*0x16e98 == piVar2[1])) {
                    *0x178f0 = (*(*0x178e0 + 0x70))[uVar1 * 3 + 2];
                    return *0x178f0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x178e0 + 0x68));
        }
    }
    return *0x178f0;
}


/* fcn.00012a24 @ 0x12a24 */

void fcn.00012a24(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000129b8();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00012a52:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00012a52;
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


/* fcn.00010310 @ 0x10310 */

uint64_t fcn.00010310(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010302 @ 0x10302 */

void fcn.00010302(void)

{
    return;
}


/* fcn.00010350 @ 0x10350 */

void fcn.00010350(void)

{
    return;
}


/* fcn.00010320 @ 0x10320 */

uint64_t fcn.00010320(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.000126a0 @ 0x126a0 */

void fcn.000126a0(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00012670(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
}


/* fcn.00012670 @ 0x12670 */

ulong fcn.00012670(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x178e8 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
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


/* fcn.00011600 @ 0x11600 */

ulong fcn.00011600(void)

{
    int64_t iVar1;
    ulong uVar2;
    uint16_t uStack_18;
    uchar uStack_16;
    uchar uStack_14;
    uchar uStack_12;
    uint16_t uStack_10;
    
    iVar1 = *0x178d8;
    if (*0x178d8 == 0) {
        uVar2 = 0x203;
    }
    else {
        uVar2 = fcn.00012b20(&uStack_18);
        if (uVar2 == 0) {
            fcn.00011888(iVar1 + 0x20,0x32,0x17190,1);
            *(iVar1 + 0x90) = 0x201;
            fcn.00011888(iVar1 + 0x52,0x32,0x17190,uStack_18);
            *(iVar1 + 0x88) = uStack_10;
            uVar2 = 0;
            *(iVar1 + 0x94) = uStack_18;
            *(iVar1 + 0x95) = uStack_16;
            *(iVar1 + 0x96) = uStack_14;
            *(iVar1 + 0x97) = uStack_12;
            *(iVar1 + 0x84) = 1;
            *(iVar1 + 0x8c) = 1;
        }
    }
    return uVar2;
}


/* fcn.00010ae8 @ 0x10ae8 */

uint32_t fcn.00010ae8(uint32_t arg1)

{
    uint in_register_0000000c;
    
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (CONCAT44(in_register_0000000c,arg1) == *0x178d8)) {
        return -(*CONCAT44(in_register_0000000c,arg1) != 0x2d68696a) & 0x201;
    }
    return 0x201;
}


/* fcn.00015960 @ 0x15960 */

int fcn.00015960(void)

{
    int64_t arg2;
    int iVar1;
    int *arg2_00;
    uchar auStackY_78 [16];
    
    arg2 = *0x17990;
    fcn.000102c0(auStackY_78,100);
    if (*0x17900 == 1) {
        arg2_00 = fcn.0001351c(1,arg2);
        if (arg2_00 == NULL) {
            iVar1 = 6;
        }
        else {
            arg2_00[2] = 0;
            arg2_00[3] = 0;
            iVar1 = fcn.00013fd8(1,auStackY_78,0x20,0,0xc,*(arg2_00 + 4));
            if (iVar1 == 0) {
                iVar1 = *arg2_00;
            }
            if (arg2_00[7] != 0) {
                iVar1 = 0x401;
            }
            fcn.000135e0(1,arg2_00,arg2);
        }
    }
    else {
        iVar1 = 1;
    }
    return iVar1;
}


/* fcn.00014290 @ 0x14290 */

int fcn.00014290(void)

{
    int iVar1;
    int iVar2;
    int aiStackX_8 [2];
    int64_t iStackX_10;
    
    aiStackX_8[0] = 0;
    iStackX_10 = 0;
    if (*0x17900 == 1) {
        fcn.00013b28(3);
        iVar1 = fcn.00013bc8(1);
        iVar2 = 0;
        if (iVar1 != 0) {
            iVar2 = iVar1;
        }
        iVar1 = fcn.00013ca4(aiStackX_8,&iStackX_10);
        if (((iVar1 == 0) && (aiStackX_8[0] != 0)) && (iVar1 = fcn.00013a8c(3), iVar1 == 0)) {
            iVar1 = fcn.00013ed8(3);
        }
        if (iStackX_10 != 0) {
            (**(*0x178e8 + 0x48))();
        }
        if (iVar1 != 0) {
            iVar2 = iVar1;
        }
        iVar1 = fcn.00013bc8(0);
        if (iVar1 != 0) {
            iVar2 = iVar1;
        }
    }
    else {
        iVar2 = 1;
    }
    return iVar2;
}


/* fcn.00013b28 @ 0x13b28 */

ulong fcn.00013b28(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    
    iVar2 = arg1 * 0x30;
    if (*(iVar2 + 0x179a0) != 0) {
        (**0x170a8)(*(iVar2 + 0x179a0));
    }
    *(iVar2 + 0x179b8) = 0;
    piVar3 = iVar2 + 0x179a8;
    *(iVar2 + 0x179a0) = 0;
    while (*piVar3 != piVar3) {
        piVar1 = *piVar3;
        *(*piVar1 + 8) = piVar1[1];
        *piVar1[1] = *piVar1;
        (**(*0x178e8 + 0x48))();
    }
    *piVar3 = piVar3;
    *(iVar2 + 0x179b0) = piVar3;
    fcn.000102c0(iVar2 + 0x179bc,0x10);
    return 0;
}


/* fcn.00016a60 @ 0x16a60 */

int64_t fcn.00016a60(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t aiStack_28 [2];
    
    if (arg2 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = (**(*0x178e8 + 0x138))(2,0x16e70,0,&uStackX_10,&iStackX_18);
        if (-1 < iVar1) {
            uVar2 = 0;
            if (uStackX_10 != 0) {
                do {
                    iVar1 = (**(*0x178e8 + 0x98))(*(iStackX_18 + uVar2 * 8),0x16e70,&iStackX_20);
                    if (-1 < iVar1) {
                        iVar1 = (**(iStackX_20 + 8))(iStackX_20,aiStack_28);
                        if (-1 < iVar1) {
                            iVar1 = (**(aiStack_28[0] + 8))(aiStack_28[0],arg2,arg1,1,0);
                            if (-1 < iVar1) break;
                        }
                    }
                    uVar2 = uVar2 + 1;
                } while (uVar2 < uStackX_10);
            }
            (**(*0x178e8 + 0x48))(iStackX_18);
        }
    }
    return iVar1;
}


/* fcn.00016b58 @ 0x16b58 */

//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00016b58(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t arg1_00;
    ulong uStackX_8;
    int64_t var_bp_20h;
    uint uStack_28;
    uint uStack_24;
    uint uStack_20;
    uint uStack_1c;
    int32_t var_bp_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    uStack_28 = 0x9576e92;
    uStack_24 = 0x11d26d3f;
    uStack_20 = 0xa000398e;
    uStack_1c = 0x3b7269c9;
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        return -0x7ffffffffffffffe;
    }
    uStackX_8 = 0;
    iVar1 = (**(arg1 + 0x40))(arg1,&uStack_28,&uStackX_8,0);
    if ((iVar1 < 0) && (iVar1 != -0x7ffffffffffffffb)) {
        return iVar1;
    }
    iVar1 = fcn.00012670();
    if (iVar1 == 0) {
        return -0x7ffffffffffffff7;
    }
    iVar2 = (**(arg1 + 0x40))(arg1,&uStack_28,&uStackX_8,iVar1);
    if (iVar2 < 0) goto code_r0x00016c54;
    arg1_00 = *(iVar1 + 8);
    *arg3 = arg1_00;
    if (arg1_00 == 0) {
        *arg2 = 0;
    }
    else {
        iVar2 = fcn.000126a0(arg1_00);
        *arg2 = iVar2;
        if (iVar2 == 0) {
            iVar2 = -0x7ffffffffffffff7;
            goto code_r0x00016c54;
        }
        iVar2 = (**(arg1 + 0x20))(arg1,arg3,iVar2);
        if (iVar2 < 0) goto code_r0x00016c54;
    }
    iVar2 = 0;
code_r0x00016c54:
    (**(*0x178e8 + 0x48))(iVar1);
    return iVar2;
}


/* fcn.00010dfc @ 0x10dfc */

int fcn.00010dfc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint *puVar2;
    ulong *puVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    uint *arg1_00;
    uint auStack_38 [12];
    
    iVar6 = arg2;
    iVar4 = fcn.00010ae8(arg1);
    if (iVar4 != 0) {
        return 0x201;
    }
    if ((iVar6 != 0) && (iVar5 = 0, *arg2 != '\0')) {
        do {
            iVar5 = iVar5 + 1;
        } while (*(arg2 + iVar5) != '\0');
        if ((iVar5 == 0x20) && (iVar4 = fcn.00010b10(iVar6,auStack_38), iVar4 == 0)) {
            if ((arg3 == 0) || (arg4 == 0)) {
                return 0x1003;
            }
            if (*0x178d8 != 0) {
                iVar6 = fcn.00010d78(auStack_38);
                if (iVar6 != 0) {
                    return 0x204;
                }
                if (*0x178d8 != 0) {
                    piVar1 = *0x178d8 + 8;
                    iVar6 = 0;
                    piVar7 = *piVar1;
                    if (piVar7 != piVar1) {
                        do {
                            piVar7 = *piVar7;
                            iVar6 = iVar6 + 1;
                        } while (piVar7 != piVar1);
                        if (iVar6 == 0x1f) {
                            return 0x404;
                        }
                    }
                    arg1_00 = fcn.000126a0(0x78);
                    if (arg1_00 != NULL) {
                        puVar2 = arg1_00 + 6;
                        *arg1_00 = 0x6861696a;
                        *puVar2 = puVar2;
                        *(arg1_00 + 8) = puVar2;
                        *(arg1_00 + 10) = arg1;
                        if (arg1_00 + 0xc != auStack_38) {
                            section..text(arg1_00 + 0xc,auStack_38,0x21);
                        }
                        iVar6 = *0x178d8;
                        piVar1 = arg1_00 + 2;
                        *piVar1 = *0x178d8 + 8;
                        puVar3 = *(iVar6 + 0x10);
                        *(arg1_00 + 4) = puVar3;
                        *puVar3 = piVar1;
                        *(iVar6 + 0x10) = piVar1;
                        *(arg1_00 + 0x1a) = arg3;
                        *(arg1_00 + 0x1c) = arg4 & 0xffffffff;
                        iVar4 = fcn.0001170c(arg1_00);
                        if (iVar4 != 0) {
                            fcn.00010d04(arg1_00);
                            return iVar4;
                        }
                        return 0;
                    }
                }
            }
            return 0x601;
        }
    }
    return 0x204;
}


/* fcn.00010b10 @ 0x10b10 */

ulong fcn.00010b10(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    char *pcVar2;
    char cVar3;
    char *pcVar4;
    
    pcVar2 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = 0;
    if (((arg2 != 0) && (pcVar2[0x20] == '\0')) && (*pcVar2 != '\0')) {
        do {
            iVar1 = iVar1 + 1;
        } while (pcVar2[iVar1] != '\0');
        if (iVar1 == 0x20) {
            pcVar4 = arg2;
            do {
                cVar3 = pcVar4[pcVar2 - arg2];
                if (9 < cVar3 - 0x30U) {
                    if (0x19 < cVar3 + 0x9fU) {
                        return 0x204;
                    }
                    if (cVar3 + 0x9fU < 0x1a) {
                        cVar3 = cVar3 + -0x20;
                    }
                }
                *pcVar4 = cVar3;
                pcVar4 = pcVar4 + 1;
            } while (pcVar4 - arg2 < 0x20);
            *(arg2 + 0x20) = 0;
            return 0;
        }
    }
    return 0x204;
}


/* fcn.00010d78 @ 0x10d78 */

ulong * fcn.00010d78(int64_t arg1)

{
    ulong *puVar1;
    int64_t iVar2;
    ulong *puVar3;
    
    puVar1 = *0x178d8 + 8;
    puVar3 = *puVar1;
    while( true ) {
        if (puVar3 == puVar1) {
            return NULL;
        }
        puVar1 = puVar3 + 5;
        fcn.000169b8(puVar1,0x21);
        if ((puVar1 == arg1) || (iVar2 = fcn.000102e0(puVar1,arg1,0x21), iVar2 == 0)) break;
        puVar3 = *puVar3;
        puVar1 = *0x178d8 + 8;
    }
    return puVar3 + -1;
}


/* fcn.00012c9c @ 0x12c9c */

ulong fcn.00012c9c(int64_t arg1)

{
    uchar uVar1;
    int arg1_00;
    int64_t arg1_01;
    ulong uVar2;
    uchar *arg1_02;
    uchar *puVar3;
    int64_t iVar4;
    uchar *puVar5;
    uchar uStackX_8;
    uchar uStackX_9;
    uchar uStackX_a;
    
    if ((arg1 != 0) && (arg1_01 = fcn.000126a0(0x2b8), arg1_01 != 0)) {
        if (arg1_01 != 0x175e0) {
            section..text(arg1_01,0x175e0,0x2b8);
        }
        puVar5 = arg1_01 + 0x2a8;
        puVar3 = arg1 + 1;
        iVar4 = 0x10;
        do {
            uStackX_8 = puVar3[-1];
            arg1_02 = &uStackX_8;
            uStackX_9 = *puVar3;
            uStackX_a = 0;
            uVar1 = fcn.00012774(arg1_02);
            *puVar5 = uVar1;
            puVar3 = puVar3 + 2;
            puVar5 = puVar5 + 1;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        arg1_00 = fcn.00015a24(arg1_02,arg1_01,0x2b8);
        (**(*0x178e8 + 0x48))(arg1_01);
        uVar2 = fcn.000130fc(arg1_00,0x601);
        return uVar2;
    }
    return 0x601;
}


/* fcn.00010d04 @ 0x10d04 */

ulong fcn.00010d04(int64_t arg1)

{
    ulong *puVar1;
    ulong uVar2;
    
    if (arg1 == 0) {
        uVar2 = 0;
    }
    else {
        puVar1 = arg1 + 0x18;
        while (*puVar1 != puVar1) {
            fcn.00010c74(*puVar1 - 8);
        }
        *(*(arg1 + 8) + 8) = *(arg1 + 0x10);
        **(arg1 + 0x10) = *(arg1 + 8);
        if (*(arg1 + 0x58) != 0) {
            (**(*0x178e8 + 0x48))();
        }
        (**(*0x178e8 + 0x48))(arg1);
        uVar2 = 1;
    }
    return uVar2;
}


/* fcn.00010cc4 @ 0x10cc4 */

uchar fcn.00010cc4(uint32_t arg1)

{
    uint in_register_0000000c;
    int *piVar1;
    ulong *puVar2;
    ulong *puVar3;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    if (((piVar1 != NULL) && (*piVar1 == 0x6873696a)) && (*(piVar1 + 6) != 0)) {
        puVar3 = *(piVar1 + 6) + 0x18;
        puVar2 = *puVar3;
        while( true ) {
            if (puVar2 == puVar3) {
                return 0;
            }
            if (puVar2 + -1 == piVar1) break;
            puVar2 = *puVar2;
        }
        return 1;
    }
    return 0;
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_00000014;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 27552 named .text
    uVar5 = 0;
    puVar3 = CONCAT44(in_register_00000014,arg2);
    puVar2 = puVar3 + arg3 + -1;
    if ((puVar3 < arg1) && (arg1 <= puVar2)) {
        puVar3 = arg1 + -1 + arg3;
        uVar5 = 1;
        uVar4 = arg3;
    }
    else {
        uVar4 = arg3 & 7;
        puVar2 = puVar3;
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


/* fcn.00012f40 @ 0x12f40 */

//WARNING: Removing unreachable block (ram,0x00012f9c)
//WARNING: Removing unreachable block (ram,0x00012fa3)
//WARNING: Removing unreachable block (ram,0x00012faa)
//WARNING: Removing unreachable block (ram,0x00012fd1)

uint fcn.00012f40(int64_t noname_0,int64_t noname_1,int64_t arg1,int64_t arg2)

{
    int arg1_00;
    uint uVar1;
    
    uVar1 = *(arg1 + 0x18);
    arg1_00 = fcn.00014acc(noname_0,noname_1,*arg1,*(arg1 + 8));
    *(arg1 + 0x18) = uVar1;
    uVar1 = fcn.000130fc(arg1_00,0x601);
    return uVar1;
}


/* fcn.000113a8 @ 0x113a8 */

int fcn.000113a8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char cVar2;
    int iVar3;
    int iVar4;
    int64_t *piVar5;
    
    piVar5 = arg2;
    iVar3 = fcn.00010ae8(arg1);
    if (iVar3 == 0) {
        if (arg2 == 0) {
            iVar4 = 0x100f;
        }
        else {
            iVar1 = *piVar5;
            cVar2 = fcn.00010cc4(iVar1);
            if (cVar2 == '\0') {
                iVar4 = 0x100f;
            }
            else {
                if (iVar1 == 0) {
                    iVar3 = 0x203;
                }
                else {
                    iVar3 = fcn.00012e78(iVar1 + 0x98);
                }
                iVar4 = 0;
                if (iVar3 != 0x100f) {
                    iVar4 = iVar3;
                }
                cVar2 = fcn.00010c74(iVar1);
                if (cVar2 != '\0') {
                    *arg2 = 0;
                }
            }
        }
    }
    else {
        iVar4 = 0x201;
    }
    return iVar4;
}


/* fcn.00010c74 @ 0x10c74 */

ulong fcn.00010c74(uint32_t arg1)

{
    ulong uVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar1 = 0;
    if (iVar2 != 0) {
        if (*(iVar2 + 0x20) < 0x10) {
            *(*(iVar2 + 0x20) * 0x14 + 0x16f40) = 1;
        }
        *(*(iVar2 + 8) + 8) = *(iVar2 + 0x10);
        **(iVar2 + 0x10) = *(iVar2 + 8);
        (**(*0x178e8 + 0x48))(iVar2);
        uVar1 = 1;
    }
    return uVar1;
}


/* fcn.000169b8 @ 0x169b8 */

void fcn.000169b8(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ushort *noname_0;
    uint64_t arg2_00;
    ushort uStack_48;
    ushort auStack_46 [23];
    
    noname_0 = &uStack_48;
    if (arg2 != 0) {
        iVar1 = arg1;
        do {
            if (((*arg1 - 0x30 < 10) || (*arg1 + 0x9f < 0x1a)) || (arg2_00 = 0x2e, *arg1 + 0xbf < 0x1a)) {
                arg2_00 = *arg1;
            }
            fcn.00011888(noname_0,0x11,0x178ac,arg2_00);
            noname_0 = noname_0 + 1;
            if ((arg1 + (1 - iVar1) & 0xfU) == 0) {
                *noname_0 = 0;
                noname_0 = &uStack_48;
            }
            arg1 = arg1 + 1;
            arg2 = arg2 + -1;
        } while (arg2 != 0);
    }
    return;
}


/* fcn.000102e0 @ 0x102e0 */

int64_t fcn.000102e0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.0001170c @ 0x1170c */

int fcn.0001170c(int64_t arg1)

{
    uint32_t uVar1;
    int64_t arg2;
    char cVar2;
    int iVar3;
    int iVar4;
    int64_t arg1_00;
    int aiStackX_8 [2];
    int64_t iStackX_10;
    
    if (arg1 == 0) {
        return 0x203;
    }
    uVar1 = *(arg1 + 0x70);
    arg1_00 = arg1 + 0x30;
    arg2 = *(arg1 + 0x68);
    iVar4 = 0;
    aiStackX_8[0] = 0;
    iStackX_10 = 0;
    if ((arg1_00 != 0) && (arg1 = arg1_00, cVar2 = fcn.00012a70(arg1_00), cVar2 != '\0')) {
        iVar3 = fcn.00014f24(arg1_00,aiStackX_8,&iStackX_10);
        if (iVar3 == 0) {
            arg1 = arg1_00;
            iVar4 = aiStackX_8[0];
        }
        else {
            arg1 = iStackX_10;
            if (iStackX_10 != 0) {
                (**(*0x178e8 + 0x48))();
            }
        }
        if (iVar4 != 0) {
            iVar4 = 0x1008;
            goto code_r0x000117a2;
        }
    }
    iVar4 = fcn.00015a24(arg1,arg2,uVar1);
    iVar4 = fcn.000130fc(iVar4,0x601);
code_r0x000117a2:
    iVar3 = 0;
    if (iVar4 != 0x108) {
        iVar3 = iVar4;
    }
    return iVar3;
}


/* fcn.00012924 @ 0x12924 */

ulong fcn.00012924(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    
    if ((((arg2 == 0) || (arg1 == 0)) || (1000000 < arg3)) || (arg3 == 0)) {
        return 0x8000000000000002;
    }
    uVar1 = fcn.00012830(arg1,arg3);
    if (arg3 <= uVar1) {
        return 0x8000000000000005;
    }
    if (arg1 <= arg2) {
        if (arg2 < arg1 + (uVar1 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg1 < arg2) goto code_r0x000129a6;
    }
    if (arg1 < arg2 + arg3) {
        return 0x800000000000000f;
    }
code_r0x000129a6:
    for (; *arg1 != 0; arg1 = arg1 + 2) {
        *arg2 = *arg1;
        arg2 = arg2 + 1;
    }
    *arg2 = 0;
    return 0;
}


/* fcn.000117bc @ 0x117bc */

uint fcn.000117bc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t iStackX_10;
    int64_t iVar2;
    uint uVar3;
    uint in_stack_ffffffffffffffe4;
    uchar auStack_18 [16];
    
    cVar1 = fcn.00011434(*arg2,*(arg2 + 8));
    if (cVar1 == '\0') {
        uVar3 = 0x1013;
    }
    else {
        iStackX_10 = 0;
        if (*(arg1 + 0x28) == 0) {
            uVar3 = 0x203;
        }
        else {
            if ((*(*(arg1 + 0x28) + 0x88) == 2) && (arg3 == 0)) {
                iVar2 = 0;
                uVar3 = 0;
                fcn.000102c0(auStack_18,0x10);
                fcn.00012d68(arg1 + 0x30,&iStackX_10,*(arg1 + 0x68),*(arg1 + 0x70),auStack_18,
                             &stack0xffffffffffffffd8,iVar2,CONCAT44(in_stack_ffffffffffffffe4,uVar3));
            }
            iVar2 = iStackX_10;
            uVar3 = fcn.00012ff8(arg1 + 0x30,arg2);
            if (iVar2 != 0) {
                fcn.00012e78(&iStackX_10);
            }
        }
    }
    return uVar3;
}


/* fcn.00012864 @ 0x12864 */

uint64_t fcn.00012864(uint32_t arg1,int64_t arg2)

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


/* fcn.00010b80 @ 0x10b80 */

uint * fcn.00010b80(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint *puVar2;
    ulong *puVar3;
    uint *puVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    
    if ((arg1 != 0) && (puVar4 = fcn.000126a0(0xa0), puVar4 != NULL)) {
        uVar7 = 0;
        *puVar4 = 0x6873696a;
        *(puVar4 + 6) = arg1;
        uVar6 = *0x178d0;
        do {
            uVar5 = uVar6 + uVar7 & 0xf;
            uVar6 = uVar5;
            if (*(uVar6 * 0x14 + 0x16f40) == '\x01') {
                *0x178d0 = uVar5 + 1 & 0xf;
                if (uVar6 == 0xffffffffffffffff) {
                    return NULL;
                }
                *(puVar4 + 8) = uVar6;
                *(uVar6 * 0x14 + 0x16f40) = 0;
                puVar2 = uVar6 * 0x14 + 0x16f44;
                if (puVar4 + 10 != puVar2) {
                    section..text(puVar4 + 10,puVar2,0x10);
                }
                puVar4[0xe] = 0;
                piVar1 = puVar4 + 2;
                puVar4[0xf] = arg2;
                *(puVar4 + 0x24) = arg3;
                *piVar1 = arg1 + 0x18;
                puVar3 = *(arg1 + 0x20);
                *(puVar4 + 4) = puVar3;
                *puVar3 = piVar1;
                *(arg1 + 0x20) = piVar1;
                return puVar4;
            }
            uVar7 = uVar7 + 1;
            *0x178d0 = uVar6;
        } while (uVar7 < 0x10);
    }
    return NULL;
}


/* fcn.00012d68 @ 0x12d68 */

//WARNING: Variable defined which should be unmapped: var_bp_8h

ulong fcn.00012d68(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,ulong noname_4,ulong noname_5,
                  int64_t arg_40h,int64_t arg_48h)

{
    uint32_t uVar1;
    int iVar2;
    int64_t *arg2_00;
    int64_t arg3_00;
    int64_t iStackX_18;
    int iStackX_20;
    int64_t var_30h;
    uint32_t var_38h;
    uchar auStack_50 [8];
    int64_t var_40h;
    int64_t var_38h_2;
    int64_t var_28h;
    int64_t iStack_20;
    int64_t var_bp_8h;
    
    iStackX_20 = -1;
    fcn.000102c0(&var_38h_2,0x28);
    uVar1 = arg4;
    if ((arg3 != 0) && (0x288 < uVar1)) {
        fcn.00015d04(arg3 + 0x288,uVar1 - 0x288,3,&var_38h_2);
    }
    uVar1 = fcn.000148c0(arg2,arg1,iStack_20,uVar1 + (arg3 - iStack_20));
    if (uVar1 == 0) {
        arg2_00 = &iStackX_18;
        iStackX_18 = var_30h;
        arg3_00 = 0x10;
        section..text(auStack_50,arg2_00,0x10);
        iVar2 = fcn.00014cf8(*arg2,arg2_00,arg3_00,auStack_50);
        if ((iVar2 != 0) || (uVar1 = 0, iStackX_20 != 0)) {
            uVar1 = 0x601;
        }
    }
    if (uVar1 < 0x307) {
        if (uVar1 == 0x306) {
            return 0x1018;
        }
        if (uVar1 < 0x107) {
            if (uVar1 == 0x106) {
                return 0x400;
            }
            if (uVar1 == 0) {
                return 0;
            }
            if ((uVar1 == 1) || (uVar1 == 4)) {
                return 0x300;
            }
            if (uVar1 == 6) {
                return 0x400;
            }
            if (uVar1 == 9) {
                return 0x300;
            }
            if (uVar1 == 0x103) {
                return 0x200;
            }
        }
        else {
            if (uVar1 == 0x201) {
                return 0x400;
            }
            if (uVar1 == 0x244) {
                return 0x1021;
            }
            if (uVar1 == 0x247) {
                return 0x1020;
            }
            if (uVar1 == 0x304) {
                return 0x402;
            }
            if (uVar1 == 0x305) {
                return 0x100a;
            }
        }
    }
    else if (uVar1 < 0x405) {
        if (uVar1 == 0x404) {
            return 0x400;
        }
        if (uVar1 == 0x307) {
            return 0x1013;
        }
        if (uVar1 == 0x308) {
            return 0x1005;
        }
        if (uVar1 == 0x314) {
            return 0x1030;
        }
        if (uVar1 == 0x317) {
            return 0x100c;
        }
        if (0x3ff < uVar1) {
            if (uVar1 < 0x402) {
                return 0x400;
            }
            if (uVar1 == 0x403) {
                return 0x200;
            }
        }
    }
    else {
        if (uVar1 == 0x801) {
            return 0x402;
        }
        if (uVar1 == 0x803) {
            return 0x108;
        }
        if (uVar1 == 0x805) {
            return 0x404;
        }
        if (uVar1 == 0x806) {
            return 0x102;
        }
        if (uVar1 == 0x80d) {
            return 0x1040;
        }
    }
    if (0x2001 < uVar1) {
        if (uVar1 == 0x2003) {
            return 0x404;
        }
        if (0x2003 < uVar1) {
            if (uVar1 < 0x2009) {
                return 0x102;
            }
            if (uVar1 == 0x2009) {
                return 0x108;
            }
        }
        return 0x601;
    }
    if (0x1fff < uVar1) {
        return 0x102;
    }
    if (uVar1 != 0x1001) {
        if (uVar1 == 0x1003) {
            return 0x404;
        }
        if (uVar1 != 0x1004) {
            if (uVar1 == 0x1005) {
                return 0x200;
            }
            return 0x601;
        }
    }
    return 0x400;
}


/* fcn.00012e78 @ 0x12e78 */

ulong fcn.00012e78(int64_t arg1)

{
    uint32_t *arg2;
    uint32_t uVar1;
    uchar auStackY_78 [16];
    
    arg1 = *arg1;
    fcn.000102c0(auStackY_78,100);
    uVar1 = 1;
    if (*0x17900 == 1) {
        arg2 = fcn.0001351c(0,arg1);
        if (arg2 == NULL) {
            uVar1 = 6;
        }
        else {
            uVar1 = fcn.00013fd8(0,auStackY_78,0x20,0,5,*(arg2 + 4));
            if (uVar1 == 0) {
                uVar1 = *arg2;
            }
            if (arg2[7] != 0) {
                uVar1 = 0x401;
            }
            if (uVar1 == 0x244) {
                fcn.0001359c(0,arg2,arg1);
            }
            else {
                fcn.000135e0(0,arg2,arg1);
            }
        }
    }
    if (uVar1 < 0x307) {
        if (uVar1 == 0x306) {
            return 0x1018;
        }
        if (uVar1 < 0x107) {
            if (uVar1 == 0x106) {
                return 0x400;
            }
            if (uVar1 == 0) {
                return 0;
            }
            if ((uVar1 == 1) || (uVar1 == 4)) {
                return 0x300;
            }
            if (uVar1 == 6) {
                return 0x400;
            }
            if (uVar1 == 9) {
                return 0x300;
            }
            if (uVar1 == 0x103) {
                return 0x200;
            }
        }
        else {
            if (uVar1 == 0x201) {
                return 0x400;
            }
            if (uVar1 == 0x244) {
                return 0x1021;
            }
            if (uVar1 == 0x247) {
                return 0x1020;
            }
            if (uVar1 == 0x304) {
                return 0x402;
            }
            if (uVar1 == 0x305) {
                return 0x100a;
            }
        }
    }
    else if (uVar1 < 0x405) {
        if (uVar1 == 0x404) {
            return 0x400;
        }
        if (uVar1 == 0x307) {
            return 0x1013;
        }
        if (uVar1 == 0x308) {
            return 0x1005;
        }
        if (uVar1 == 0x314) {
            return 0x1030;
        }
        if (uVar1 == 0x317) {
            return 0x100c;
        }
        if (0x3ff < uVar1) {
            if (uVar1 < 0x402) {
                return 0x400;
            }
            if (uVar1 == 0x403) {
                return 0x200;
            }
        }
    }
    else {
        if (uVar1 == 0x801) {
            return 0x402;
        }
        if (uVar1 == 0x803) {
            return 0x108;
        }
        if (uVar1 == 0x805) {
            return 0x404;
        }
        if (uVar1 == 0x806) {
            return 0x102;
        }
        if (uVar1 == 0x80d) {
            return 0x1040;
        }
    }
    if (0x2001 < uVar1) {
        if (uVar1 == 0x2003) {
            return 0x404;
        }
        if (0x2003 < uVar1) {
            if (uVar1 < 0x2009) {
                return 0x102;
            }
            if (uVar1 == 0x2009) {
                return 0x108;
            }
        }
        return 0x601;
    }
    if (0x1fff < uVar1) {
        return 0x102;
    }
    if (uVar1 != 0x1001) {
        if (uVar1 == 0x1003) {
            return 0x404;
        }
        if (uVar1 != 0x1004) {
            if (uVar1 == 0x1005) {
                return 0x200;
            }
            return 0x601;
        }
    }
    return 0x400;
}


/* fcn.00012b20 @ 0x12b20 */

ulong fcn.00012b20(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    uint *puVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    int *piVar8;
    int aiStackX_10 [2];
    int64_t aiStackX_18 [2];
    
    aiStackX_10[0] = 0;
    aiStackX_18[0] = 0;
    if (*0x17900 == 1) {
        uVar5 = 0xc;
        goto code_r0x00012c83;
    }
    uVar5 = fcn.0001395c(arg1,arg1);
    if (uVar5 != 0) goto code_r0x00012c83;
    piVar8 = 0x179a0;
    puVar3 = 0x179a0;
    iVar2 = 0x179a8;
    iVar4 = 4;
    do {
        puVar3[6] = 0;
        *puVar3 = 0;
        puVar3 = puVar3 + 0xc;
        *iVar2 = iVar2;
        *(iVar2 + 8) = iVar2;
        iVar2 = iVar2 + 0x30;
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    uVar6 = 0;
    do {
        uVar5 = fcn.00013a8c(uVar6);
        if (uVar5 != 0) goto code_r0x00012c41;
        uVar5 = uVar6 + 1;
        uVar6 = uVar5;
    } while (uVar5 < 3);
    uVar5 = fcn.00013bc8(1);
    if (uVar5 == 0) {
        uVar5 = fcn.00013ca4(aiStackX_10,aiStackX_18);
        if (((uVar5 == 0) && (aiStackX_10[0] != 0)) && (uVar5 = fcn.00013a8c(3), uVar5 == 0)) {
            uVar5 = fcn.00013ed8(3);
        }
        if (aiStackX_18[0] != 0) {
            (**(*0x178e8 + 0x48))();
        }
        if (((uVar5 == 0) && (uVar5 = fcn.00013bc8(0), uVar5 == 0)) && (uVar5 = fcn.00013f30(), uVar5 == 0)) {
            *0x17900 = 1;
            goto code_r0x00012c5f;
        }
    }
    uVar6 = 0;
    do {
        fcn.00013b28(uVar6);
        uVar7 = uVar6 + 1;
        uVar6 = uVar7;
    } while (uVar7 < 4);
    goto code_r0x00012c5f;
code_r0x00012c41:
    do {
        if (*piVar8 != 0) {
            (**0x170a8)(*piVar8);
        }
        piVar8 = piVar8 + 0xc;
    } while (piVar8 < 0x17a30);
code_r0x00012c5f:
    if (((uVar5 == 0) && (*0x178f9 == '\0')) && (iVar1 = fcn.0001584c(), iVar1 == 0)) {
        *0x178f9 = '\x01';
    }
code_r0x00012c83:
    if (uVar5 < 0x307) {
        if (uVar5 == 0x306) {
            return 0x1018;
        }
        if (uVar5 < 0x107) {
            if (uVar5 == 0x106) {
                return 0x400;
            }
            if (uVar5 == 0) {
                return 0;
            }
            if ((uVar5 == 1) || (uVar5 == 4)) {
                return 0x300;
            }
            if (uVar5 == 6) {
                return 0x400;
            }
            if (uVar5 == 9) {
                return 0x300;
            }
            if (uVar5 == 0x103) {
                return 0x200;
            }
        }
        else {
            if (uVar5 == 0x201) {
                return 0x400;
            }
            if (uVar5 == 0x244) {
                return 0x1021;
            }
            if (uVar5 == 0x247) {
                return 0x1020;
            }
            if (uVar5 == 0x304) {
                return 0x402;
            }
            if (uVar5 == 0x305) {
                return 0x100a;
            }
        }
    }
    else if (uVar5 < 0x405) {
        if (uVar5 == 0x404) {
            return 0x400;
        }
        if (uVar5 == 0x307) {
            return 0x1013;
        }
        if (uVar5 == 0x308) {
            return 0x1005;
        }
        if (uVar5 == 0x314) {
            return 0x1030;
        }
        if (uVar5 == 0x317) {
            return 0x100c;
        }
        if (0x3ff < uVar5) {
            if (uVar5 < 0x402) {
                return 0x400;
            }
            if (uVar5 == 0x403) {
                return 0x200;
            }
        }
    }
    else {
        if (uVar5 == 0x801) {
            return 0x402;
        }
        if (uVar5 == 0x803) {
            return 0x108;
        }
        if (uVar5 == 0x805) {
            return 0x404;
        }
        if (uVar5 == 0x806) {
            return 0x102;
        }
        if (uVar5 == 0x80d) {
            return 0x1040;
        }
    }
    if (0x2001 < uVar5) {
        if (uVar5 == 0x2003) {
            return 0x404;
        }
        if (0x2003 < uVar5) {
            if (uVar5 < 0x2009) {
                return 0x102;
            }
            if (uVar5 == 0x2009) {
                return 0x108;
            }
        }
        return 0x300;
    }
    if (0x1fff < uVar5) {
        return 0x102;
    }
    if (uVar5 != 0x1001) {
        if (uVar5 == 0x1003) {
            return 0x404;
        }
        if (uVar5 != 0x1004) {
            if (uVar5 != 0x1005) {
                return 0x300;
            }
            return 0x200;
        }
    }
    return 0x400;
}


/* fcn.00011888 @ 0x11888 */

void fcn.00011888(int64_t noname_0,int64_t noname_1,int64_t arg1,int64_t arg2)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.000118e4(noname_0,noname_1,0,arg1,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.000118e4 @ 0x118e4 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.000118e4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x00011943;
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
code_r0x00011943:
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
        uVar21 = fcn.00012864(arg4,0xf4241);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.00012830(arg4,0xf4241);
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
            pcVar8 = 0x1722c;
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
code_r0x00011cfe:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x1722c;
            }
            else {
                pcVar8 = 0x17230;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x00011a95:
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
                    goto code_r0x00011c38;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x00011c4f;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x00011c38;
                        }
                        goto code_r0x00011c4f;
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
code_r0x00011c38:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x00011a95;
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
                        goto code_r0x00011a95;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x00011c4f;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x00011c38;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x00011c4f:
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
                        fcn.0001264c(&var_68h_2,0x26,0,0x171c0);
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
                            goto code_r0x00011cfe;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x00011ee7;
                        if (uStack_a8 == 0x58) goto code_r0x00011fdc;
                        if (uStack_a8 == 0x61) goto code_r0x00011ef0;
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
                            goto code_r0x00011a76;
                        }
                        if (uStack_a8 != 100) goto code_r0x00011a72;
                        goto code_r0x00011ff3;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x1722c;
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
                goto code_r0x00012220;
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
                            iVar12 = 0x172cb;
                            goto code_r0x00011fa3;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x00011fa3:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x00012220;
                    }
                    fcn.0001264c(&var_68h_2,0x26,0,0x17224);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x00011ee7:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x00011ef0:
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
                        goto code_r0x00012220;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x00011a72;
                            goto code_r0x00011fe0;
                        }
                        goto code_r0x00011fe5;
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
                        goto code_r0x00012220;
                    }
                    fcn.0001264c(&var_68h_2,0x26,0,0x17208);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x00012220;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x00011fdc:
            uVar21 = uVar21 | 0x20;
code_r0x00011fe0:
            uVar21 = uVar21 | 0x80;
code_r0x00011fe5:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x00011ff3:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x00012035;
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
code_r0x00012035:
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
code_r0x000120bd:
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
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x000120bd;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar10 = uVar5;
            do {
                uVar6 = uVar10 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = "0123456789ABCDEFBD2FBA36A2D64DAB9390FF6DA2FEF31C"[uVar10 % uVar16];
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
code_r0x00011a72:
            pcVar8 = &uStack_a8;
code_r0x00011a76:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x00012220:
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
                arg1 = fcn.000118b0(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.000118b0(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
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
                arg1 = fcn.000118b0(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
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
                arg1 = fcn.000118b0(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
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


/* fcn.00012a70 @ 0x12a70 */

uchar fcn.00012a70(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t in_RDX;
    uint64_t uVar3;
    uchar uVar4;
    int64_t *piVar5;
    uint32_t auStackX_10 [2];
    int64_t *piStackX_18;
    
    auStackX_10[0] = 0;
    piStackX_18 = NULL;
    uVar4 = 0;
    iVar1 = fcn.00015acc(arg1,in_RDX,auStackX_10,&piStackX_18);
    if ((iVar1 == 0) && (piStackX_18 != NULL)) {
        uVar4 = 0;
        if (auStackX_10[0] != 0) {
            uVar3 = auStackX_10[0];
            piVar5 = piStackX_18;
            do {
                if (*piVar5 != 0) {
                    iVar2 = fcn.000126fc(*piVar5,arg1);
                    if (iVar2 == 0) {
                        uVar4 = 1;
                    }
                    (**(*0x178e8 + 0x48))(*piVar5);
                    *piVar5 = 0;
                }
                piVar5 = piVar5 + 1;
                uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
        }
        (**(*0x178e8 + 0x48))(piStackX_18);
    }
    return uVar4;
}


/* fcn.00014f24 @ 0x14f24 */

uint64_t fcn.00014f24(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    char cVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t auStackX_20 [2];
    uint32_t uStackY_e8;
    uint32_t uStackY_e4;
    uint32_t *puStackY_e0;
    int32_t in_stack_ffffffffffffff28;
    uint32_t in_stack_ffffffffffffff30;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    uchar auStack_88 [16];
    uint uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    
    auStackX_20[0] = 0;
    fcn.000102c0(auStack_88,100);
    fcn.000102c0(&uStackY_e8,0x28);
    if (*0x17900 != 1) {
        return 1;
    }
    if ((((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) || (cVar2 = fcn.00016c8c(arg1,&uStack_70), cVar2 == '\0')) {
        return 6;
    }
    *arg2 = 0;
    *arg3 = 0;
    uStack_b8 = uStack_70;
    uStack_b0 = uStack_68;
    uVar4 = fcn.00014338(&uStack_b8,&uStack_a8);
    if (uVar4 != 0) {
        return uVar4;
    }
    uStack_98 = uStack_a8;
    uStack_90 = uStack_a0;
    uVar4 = fcn.00013630(&uStack_98,auStackX_20);
    if (uVar4 != 0) {
        return uVar4;
    }
    uStack_78 = 0x18;
    fcn.000133e0(auStackX_20[0],&uStackY_e8);
    uVar3 = fcn.00013fd8(auStackX_20[0],auStack_88,0x28,0,in_stack_ffffffffffffff28,in_stack_ffffffffffffff30);
    puVar1 = puStackY_e0;
    uVar4 = uVar3;
    if ((uVar3 == 0) && (uVar4 = uStackY_e8, uStackY_e8 == 0)) {
        if (puStackY_e0 == NULL) {
            uVar4 = 8;
            goto code_r0x000150f3;
        }
        if (*puStackY_e0 != 0) {
            iVar5 = *puStackY_e0 * 8;
            if (uStackY_e4 == iVar5 + 4U) {
                if (*puStackY_e0 == 0) {
                    iVar5 = 0;
                }
                else {
                    iVar5 = fcn.000126a0(iVar5);
                }
                if (iVar5 == 0) {
                    uVar4 = 5;
                }
                else {
                    if (*puVar1 != 0) {
                        fcn.000102c0(iVar5,*puVar1 << 3);
                    }
                    uVar6 = 0;
                    if (*puVar1 != 0) {
                        do {
                            *(iVar5 + uVar6 * 8) = *(puVar1 + uVar6 * 2 + 1);
                            uVar3 = uVar6 + 1;
                            uVar6 = uVar3;
                        } while (uVar3 < *puVar1);
                    }
                    *arg2 = *puVar1;
                    *arg3 = iVar5;
                }
            }
            else {
                uVar4 = 8;
            }
        }
    }
    if (puStackY_e0 != NULL) {
        (**(*0x178e8 + 0x48))(puStackY_e0);
    }
code_r0x000150f3:
    fcn.00013668(auStackX_20[0]);
    return uVar4;
}


/* fcn.00015a24 @ 0x15a24 */

ulong fcn.00015a24(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    int iVar1;
    ulong uVar2;
    uint64_t uStackX_8;
    
    arg1_00 = *0x17990;
    uStackX_8 = arg1 & 0xffffffff00000000;
    if (*0x17900 != 1) {
        return 1;
    }
    if (((arg2 != 0) && (arg3 != 0)) && (iVar1 = fcn.000152e4(arg2,arg3,&uStackX_8), iVar1 == 0)) {
        if (uStackX_8 == 3) {
            uVar2 = fcn.00015684(arg1_00,arg2,arg3 & 0xffffffff);
            return uVar2;
        }
        if (uStackX_8 == 4) {
            uVar2 = fcn.00015390(arg1_00,arg2,arg3 & 0xffffffff);
            return uVar2;
        }
        if (uStackX_8 == 7) {
            uVar2 = fcn.0001577c(arg1_00,arg2,arg3 & 0xffffffff);
            return uVar2;
        }
    }
    return 6;
}


/* fcn.000130fc @ 0x130fc */

uint64_t fcn.000130fc(int arg1,int64_t arg2)

{
    if (arg1 < 0x307) {
        if (arg1 == 0x306) {
            return 0x1018;
        }
        if (arg1 < 0x107) {
            if (arg1 == 0x106) {
                return 0x400;
            }
            if (arg1 == 0) {
                return 0;
            }
            if ((arg1 == 1) || (arg1 == 4)) {
                return 0x300;
            }
            if (arg1 == 6) {
                return 0x400;
            }
            if (arg1 == 9) {
                return 0x300;
            }
            if (arg1 == 0x103) {
                return 0x200;
            }
        }
        else {
            if (arg1 == 0x201) {
                return 0x400;
            }
            if (arg1 == 0x244) {
                return 0x1021;
            }
            if (arg1 == 0x247) {
                return 0x1020;
            }
            if (arg1 == 0x304) {
                return 0x402;
            }
            if (arg1 == 0x305) {
                return 0x100a;
            }
        }
    }
    else if (arg1 < 0x405) {
        if (arg1 == 0x404) {
            return 0x400;
        }
        if (arg1 == 0x307) {
            return 0x1013;
        }
        if (arg1 == 0x308) {
            return 0x1005;
        }
        if (arg1 == 0x314) {
            return 0x1030;
        }
        if (arg1 == 0x317) {
            return 0x100c;
        }
        if (0x3ff < arg1) {
            if (arg1 < 0x402) {
                return 0x400;
            }
            if (arg1 == 0x403) {
                return 0x200;
            }
        }
    }
    else {
        if (arg1 == 0x801) {
            return 0x402;
        }
        if (arg1 == 0x803) {
            return 0x108;
        }
        if (arg1 == 0x805) {
            return 0x404;
        }
        if (arg1 == 0x806) {
            return 0x102;
        }
        if (arg1 == 0x80d) {
            return 0x1040;
        }
    }
    if (0x2001 < arg1) {
        if (arg1 == 0x2003) {
            return 0x404;
        }
        if (0x2003 < arg1) {
            if (arg1 < 0x2009) {
                return 0x102;
            }
            if (arg1 == 0x2009) {
                return 0x108;
            }
        }
        return arg2 & 0xffffffffU;
    }
    if (0x1fff < arg1) {
        return 0x102;
    }
    if (arg1 != 0x1001) {
        if (arg1 == 0x1003) {
            return 0x404;
        }
        if (arg1 != 0x1004) {
            if (arg1 == 0x1005) {
                return 0x200;
            }
            return arg2 & 0xffffffffU;
        }
    }
    return 0x400;
}


/* fcn.00011434 @ 0x11434 */

bool fcn.00011434(uint32_t arg1,uint32_t arg2)

{
    uint in_register_0000000c;
    char *pcVar1;
    char cVar2;
    uint in_register_00000014;
    char *pcVar3;
    char cVar4;
    char *pcVar5;
    
    pcVar5 = CONCAT44(in_register_0000000c,arg1);
    if (((pcVar5 == NULL) || (CONCAT44(in_register_00000014,arg2) == 0)) ||
       (pcVar5[CONCAT44(in_register_00000014,arg2)] != '\0')) {
        return false;
    }
    cVar4 = *pcVar5;
    pcVar1 = "applet.name";
    pcVar3 = pcVar5;
    if (cVar4 != '\0') {
        cVar2 = cVar4;
        do {
            if (cVar2 != *pcVar1) break;
            pcVar3 = pcVar3 + 1;
            pcVar1 = pcVar1 + 1;
            cVar2 = *pcVar3;
        } while (cVar2 != '\0');
    }
    if (*pcVar3 != *pcVar1) {
        pcVar1 = "applet.vendor";
        pcVar3 = pcVar5;
        if (cVar4 != '\0') {
            cVar2 = cVar4;
            do {
                if (cVar2 != *pcVar1) break;
                pcVar3 = pcVar3 + 1;
                pcVar1 = pcVar1 + 1;
                cVar2 = *pcVar3;
            } while (cVar2 != '\0');
        }
        if (*pcVar3 != *pcVar1) {
            pcVar1 = "applet.description";
            pcVar3 = pcVar5;
            if (cVar4 != '\0') {
                cVar2 = cVar4;
                do {
                    if (cVar2 != *pcVar1) break;
                    pcVar3 = pcVar3 + 1;
                    pcVar1 = pcVar1 + 1;
                    cVar2 = *pcVar3;
                } while (cVar2 != '\0');
            }
            if (*pcVar3 != *pcVar1) {
                pcVar1 = "applet.version";
                pcVar3 = pcVar5;
                if (cVar4 != '\0') {
                    cVar2 = cVar4;
                    do {
                        if (cVar2 != *pcVar1) break;
                        pcVar3 = pcVar3 + 1;
                        pcVar1 = pcVar1 + 1;
                        cVar2 = *pcVar3;
                    } while (cVar2 != '\0');
                }
                if (*pcVar3 != *pcVar1) {
                    pcVar1 = "security.version";
                    pcVar3 = pcVar5;
                    if (cVar4 != '\0') {
                        cVar2 = cVar4;
                        do {
                            if (cVar2 != *pcVar1) break;
                            pcVar3 = pcVar3 + 1;
                            pcVar1 = pcVar1 + 1;
                            cVar2 = *pcVar3;
                        } while (cVar2 != '\0');
                    }
                    if (*pcVar3 != *pcVar1) {
                        pcVar1 = "applet.flash.quota";
                        pcVar3 = pcVar5;
                        if (cVar4 != '\0') {
                            cVar2 = cVar4;
                            do {
                                if (cVar2 != *pcVar1) break;
                                pcVar3 = pcVar3 + 1;
                                pcVar1 = pcVar1 + 1;
                                cVar2 = *pcVar3;
                            } while (cVar2 != '\0');
                        }
                        if (*pcVar3 != *pcVar1) {
                            pcVar1 = "applet.debug.enable";
                            pcVar3 = pcVar5;
                            if (cVar4 != '\0') {
                                cVar2 = cVar4;
                                do {
                                    if (cVar2 != *pcVar1) break;
                                    pcVar3 = pcVar3 + 1;
                                    pcVar1 = pcVar1 + 1;
                                    cVar2 = *pcVar3;
                                } while (cVar2 != '\0');
                            }
                            if (*pcVar3 != *pcVar1) {
                                pcVar1 = "applet.shared.session.support";
                                pcVar3 = pcVar5;
                                if (cVar4 != '\0') {
                                    cVar2 = cVar4;
                                    do {
                                        if (cVar2 != *pcVar1) break;
                                        pcVar3 = pcVar3 + 1;
                                        pcVar1 = pcVar1 + 1;
                                        cVar2 = *pcVar3;
                                    } while (cVar2 != '\0');
                                }
                                if (*pcVar3 != *pcVar1) {
                                    pcVar3 = "applet.platform";
                                    while ((cVar4 != '\0' && (cVar4 == *pcVar3))) {
                                        pcVar5 = pcVar5 + 1;
                                        pcVar3 = pcVar3 + 1;
                                        cVar4 = *pcVar5;
                                    }
                                    return *pcVar5 == *pcVar3;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return true;
}


/* fcn.00012ff8 @ 0x12ff8 */

uint fcn.00012ff8(int64_t noname_0,int64_t arg1)

{
    char *arg2;
    int64_t arg1_00;
    char *pcVar1;
    int arg1_01;
    uint uVar2;
    char cVar3;
    char *pcVar4;
    int iVar5;
    int64_t iVar6;
    char *pcStackX_10;
    char acStack_28 [8];
    char acStack_20 [4];
    char acStack_1c [2];
    char cStack_1a;
    
    arg2 = *arg1;
    arg1_00 = *(arg1 + 0x10);
    pcStackX_10 = NULL;
    acStack_20 = str.applet.version._8_4_;
    acStack_1c = str.applet.version._12_2_;
    cStack_1a = str.applet.version[0xe];
    acStack_28 = str.applet.version._0_8_;
    arg1_01 = fcn.00015124(noname_0,arg2,*(arg1 + 8),&pcStackX_10);
    pcVar1 = pcStackX_10;
    if ((arg1_01 == 0) && (pcStackX_10 != NULL)) {
        cVar3 = *arg2;
        pcVar4 = acStack_28;
        if (cVar3 != '\0') {
            do {
                if (cVar3 != *pcVar4) break;
                pcVar4 = pcVar4 + 1;
                cVar3 = pcVar4[arg2 - acStack_28];
            } while (cVar3 != '\0');
        }
        iVar6 = 0;
        cVar3 = *pcStackX_10;
        while (cVar3 != '\0') {
            iVar6 = iVar6 + 1;
            cVar3 = pcStackX_10[iVar6];
        }
        iVar5 = iVar6;
        if (*(arg1 + 0x18) < iVar5) {
            uVar2 = 0x200;
            *(arg1 + 0x18) = iVar5;
            goto code_r0x000130d3;
        }
        fcn.00012890(arg1_00,*(arg1 + 0x18),pcStackX_10);
        *(arg1 + 0x18) = iVar5;
    }
    else {
        *(arg1 + 0x18) = 0;
    }
    uVar2 = fcn.000130fc(arg1_01,0x601);
code_r0x000130d3:
    if (pcVar1 != NULL) {
        (**(*0x178e8 + 0x48))(pcVar1);
    }
    return uVar2;
}


/* fcn.00012830 @ 0x12830 */

uint64_t fcn.00012830(uint32_t arg1,int64_t arg2)

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


/* fcn.0001264c @ 0x1264c */

void fcn.0001264c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.000118e4(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.000118b0 @ 0x118b0 */

uchar * fcn.000118b0(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.000126cc @ 0x126cc */

int64_t fcn.000126cc(int64_t arg1)

{
    char cVar1;
    int iVar2;
    
    cVar1 = arg1;
    if (cVar1 - 0x30U < 10) {
        iVar2 = cVar1 + -0x30;
    }
    else {
        if (cVar1 + 0x9fU < 0x1a) {
            cVar1 = cVar1 + -0x20;
        }
        iVar2 = cVar1 + -0x37;
    }
    return iVar2;
}


/* fcn.00015acc @ 0x15acc */

int fcn.00015acc(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    int64_t arg2_00;
    char cVar2;
    int iVar3;
    int *piVar4;
    int64_t arg1_00;
    int64_t arg2_01;
    int64_t iVar5;
    int iVar6;
    int iVar7;
    uchar auStackY_b8 [16];
    int32_t in_stack_ffffffffffffff58;
    uint32_t in_stack_ffffffffffffff60;
    
    arg2_00 = *0x17990;
    arg1_00 = 0;
    iVar7 = 0;
    fcn.000102c0(&stack0xffffffffffffff58,100);
    if (*0x17900 != 1) {
        return 1;
    }
    if ((((arg2 == 0) || (arg3 == 0)) || (cVar2 = fcn.00016c8c(0x175b0,auStackY_b8), cVar2 == '\0')) ||
       (piVar4 = fcn.0001351c(1,arg2_00), piVar4 == NULL)) {
        return 6;
    }
    piVar4[2] = 0;
    piVar4[3] = 0;
    iVar3 = fcn.00013fd8(1,&stack0xffffffffffffff58,0x30,0,in_stack_ffffffffffffff58,in_stack_ffffffffffffff60);
    if (iVar3 == 0) {
        iVar3 = *piVar4;
    }
    *arg2 = 0;
    *arg3 = 0;
    if (iVar3 == 0) {
        piVar1 = *(piVar4 + 2);
        if (piVar1 != NULL) {
            iVar7 = *piVar1;
            if (iVar7 == 0) goto code_r0x00015c0a;
            if (piVar4[1] == iVar7 * 0x10 + 4U) {
                iVar5 = iVar7 + 1 << 3;
                if (iVar5 != 0) {
                    arg1_00 = fcn.000126a0(iVar5);
                }
                if (arg1_00 != 0) {
                    if (iVar5 != 0) {
                        fcn.000102c0(arg1_00,iVar5);
                    }
                    iVar6 = 0;
                    iVar5 = 0;
                    if (0 < iVar7) {
                        do {
                            arg2_01 = fcn.000126a0(0x21);
                            *(arg1_00 + iVar5 * 8) = arg2_01;
                            if (arg2_01 == 0) goto code_r0x00015cda;
                            fcn.00016db4(piVar1 + iVar6 * 4 + 1,arg2_01);
                            iVar6 = iVar6 + 1;
                            iVar5 = iVar5 + 1;
                        } while (iVar5 < iVar7);
                    }
                    *arg3 = arg1_00;
                    *arg2 = iVar7;
                    goto code_r0x00015c0a;
                }
code_r0x00015cda:
                iVar3 = 5;
                goto code_r0x00015bc6;
            }
        }
        iVar3 = 8;
    }
code_r0x00015bc6:
    iVar5 = 0;
    if (0 < iVar7) {
        do {
            if ((arg1_00 != 0) && (*(arg1_00 + iVar5 * 8) != 0)) {
                (**(*0x178e8 + 0x48))();
            }
            iVar5 = iVar5 + 1;
        } while (iVar5 < iVar7);
    }
    if (arg1_00 != 0) {
        (**(*0x178e8 + 0x48))(arg1_00);
    }
code_r0x00015c0a:
    if (*(piVar4 + 2) != 0) {
        (**(*0x178e8 + 0x48))();
        piVar4[2] = 0;
        piVar4[3] = 0;
    }
    fcn.0001359c(1,piVar4,arg2_00);
    return iVar3;
}


/* fcn.000126fc @ 0x126fc */

int64_t fcn.000126fc(int64_t arg1,int64_t arg2)

{
    char cVar1;
    char cVar2;
    char cVar3;
    
    cVar3 = *arg1;
    if (*arg1 + 0x9fU < 0x1a) {
        cVar3 = cVar3 + -0x20;
    }
    cVar2 = *arg2;
    if (cVar2 + 0x9fU < 0x1a) {
        cVar1 = cVar2 + -0x20;
    }
    else {
        cVar1 = cVar2;
    }
    if (*arg1 != '\0') {
        arg1 = arg1 - arg2;
        do {
            if ((cVar2 == '\0') || (cVar3 != cVar1)) break;
            arg2 = arg2 + 1;
            cVar3 = *(arg2 + arg1);
            if (cVar3 + 0x9fU < 0x1a) {
                cVar3 = cVar3 + -0x20;
            }
            cVar2 = *arg2;
            cVar1 = cVar2;
            if (cVar2 + 0x9fU < 0x1a) {
                cVar1 = cVar2 + -0x20;
            }
        } while (*(arg2 + arg1) != '\0');
    }
    return cVar3 - cVar1;
}


/* fcn.0001395c @ 0x1395c */

ulong fcn.0001395c(ulong noname_0,int64_t arg1)

{
    ushort uVar1;
    int64_t iVar2;
    ulong uVar3;
    ushort uVar4;
    ushort uVar5;
    ushort uVar6;
    ushort uVar7;
    
    uVar3 = 0;
    *0x17908 = 0;
    iVar2 = fcn.00016218();
    if (-1 < iVar2) {
        if (*0x178fa != '\0') {
            uVar5 = *0x17a60;
            uVar4 = *0x17a62;
            uVar6 = *0x17a64;
            uVar7 = *0x17a66;
code_r0x00013a2e:
            uVar1 = *0x17a68;
            if (arg1 != 0) {
                *arg1 = uVar5;
                *(arg1 + 2) = uVar4;
                *(arg1 + 4) = uVar6;
                *(arg1 + 6) = uVar7;
                *(arg1 + 8) = uVar1;
            }
            if ((((*0x170a0 == 0) || (*0x170a8 == 0)) || (*0x17090 == 0)) || (*0x17098 == 0)) {
                uVar3 = 6;
            }
            return uVar3;
        }
        iVar2 = fcn.00012a24(0x16e30);
        if (iVar2 != 0) {
            uVar5 = *(iVar2 + 0x1c);
            uVar4 = *(iVar2 + 0x1e);
            uVar6 = *(iVar2 + 0x20);
            uVar7 = *(iVar2 + 0x22);
            *0x17a60 = uVar5;
            *0x17a62 = uVar4;
            *0x17a64 = uVar6;
            *0x17a66 = uVar7;
            iVar2 = fcn.00012a24(0x16e30);
            if ((iVar2 != 0) && (*(iVar2 + 0x38) == '\x01')) {
                *0x178fa = '\x01';
                *0x17a68 = 2;
                goto code_r0x00013a2e;
            }
        }
    }
    return 3;
}


/* fcn.00013a8c @ 0x13a8c */

uint fcn.00013a8c(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    uint uVar3;
    int64_t iVar4;
    uint auStackX_8 [2];
    
    uVar3 = 0;
    auStackX_8[0] = 0;
    iVar4 = arg1 * 0x30;
    iVar2 = iVar4 + 0x179a8;
    *(iVar4 + 0x179a0) = 0;
    *(iVar4 + 0x179b8) = 0;
    *iVar2 = iVar2;
    *(iVar4 + 0x179b0) = iVar2;
    fcn.000102c0(iVar4 + 0x179bc,0x10);
    iVar1 = (**0x170a0)(arg1 & 0xffffffff,auStackX_8);
    if (iVar1 == 0) {
        *(iVar4 + 0x179a0) = auStackX_8[0];
    }
    else {
        uVar3 = 0xd;
        if (*(iVar4 + 0x179a0) != 0) {
            (**0x170a8)(*(iVar4 + 0x179a0));
            *(iVar4 + 0x179a0) = 0;
        }
    }
    return uVar3;
}


/* fcn.00013bc8 @ 0x13bc8 */

int fcn.00013bc8(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iStackX_10;
    int aiStack_a8 [2];
    int64_t iStack_a0;
    uchar auStack_78 [16];
    uint uStack_68;
    
    fcn.000102c0(auStack_78,100);
    fcn.000102c0(aiStack_a8,0x28);
    uStack_68 = 0x15;
    iVar2 = fcn.000133e0(arg1 & 0xffffffffU,aiStack_a8);
    iVar1 = fcn.000136b0(arg1 & 0xffffffff,auStack_78,0x18,0);
    if (iVar1 == 0) {
        uVar3 = 0;
        do {
            iVar1 = fcn.000137b4(arg1 & 0xffffffffU,&iStackX_10);
            if ((iVar1 == 0) && (iStackX_10 == iVar2)) break;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 3);
        if (uVar3 == 3) {
            iVar1 = 0x1001;
        }
    }
    if (iVar1 == 0) {
        iVar1 = aiStack_a8[0];
    }
    if (iStack_a0 != 0) {
        (**(*0x178e8 + 0x48))();
    }
    return iVar1;
}


/* fcn.00013ca4 @ 0x13ca4 */

int fcn.00013ca4(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t *puVar2;
    int iVar3;
    uint32_t *arg1_00;
    int64_t arg1_01;
    int iStackY_a8;
    uint32_t uStackY_a4;
    uint32_t *puStackY_a0;
    int32_t in_stack_ffffffffffffff68;
    uint32_t in_stack_ffffffffffffff70;
    uchar auStack_78 [16];
    uint uStack_68;
    
    if (arg2 == 0) {
        return 6;
    }
    fcn.000102c0(auStack_78,100);
    fcn.000102c0(&iStackY_a8,0x28);
    uStack_68 = 0x15;
    fcn.000133e0(2,&iStackY_a8);
    iVar3 = fcn.00013fd8(2,auStack_78,0x18,0,in_stack_ffffffffffffff68,in_stack_ffffffffffffff70);
    puVar2 = puStackY_a0;
    if (iVar3 == 0) {
        iVar3 = iStackY_a8;
    }
    *arg2 = 0;
    *arg1 = 0;
    if (iVar3 != 0) goto code_r0x00013dc5;
    if ((puStackY_a0 != NULL) && (3 < uStackY_a4)) {
        if (*puStackY_a0 == 0) goto code_r0x00013dc5;
        arg1_01 = *puStackY_a0 * 4;
        if (uStackY_a4 == arg1_01 + 4U) {
            if (*puStackY_a0 == 0) {
                arg1_00 = NULL;
            }
            else {
                arg1_00 = fcn.000126a0(arg1_01);
            }
            *arg2 = arg1_00;
            if (arg1_00 == NULL) {
                iVar3 = 5;
            }
            else {
                if ((*puVar2 != 0) && (arg1_00 != puVar2 + 1)) {
                    section..text(arg1_00,puVar2 + 1,*puVar2 << 2);
                }
                uVar1 = *puVar2;
                arg2 = *arg2;
                *arg1 = uVar1;
                fcn.000169b8(arg2,uVar1 << 2);
            }
            goto code_r0x00013dc5;
        }
    }
    iVar3 = 8;
code_r0x00013dc5:
    if (puStackY_a0 != NULL) {
        (**(*0x178e8 + 0x48))(puStackY_a0);
    }
    return iVar3;
}


/* fcn.00013ed8 @ 0x13ed8 */

ulong fcn.00013ed8(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    int iVar5;
    ulong uStack_28;
    ulong uStack_20;
    
    iVar5 = arg1;
    if ((iVar5 < 1) || (*(iVar5 * 0x30 + 0x179a0) == 0)) {
        uVar4 = 6;
    }
    else {
        iVar1 = iVar5 * 0x30;
        uVar2 = *(iVar1 + 0x179bc);
        uVar3 = *(iVar1 + 0x179c4);
        uVar4 = fcn.00013bc8(arg1);
        if (uVar4 == 0) {
            uStack_28 = uVar2;
            uStack_20 = uVar3;
            uVar4 = fcn.00013df4(&uStack_28);
        }
    }
    return uVar4;
}


/* fcn.00013f30 @ 0x13f30 */

int fcn.00013f30(void)

{
    int iVar1;
    int iStackY_a8;
    int iStackY_a4;
    uint *puStackY_a0;
    int32_t in_stack_ffffffffffffff68;
    uint32_t in_stack_ffffffffffffff70;
    uchar auStack_78 [16];
    uint uStack_68;
    
    fcn.000102c0(auStack_78,100);
    fcn.000102c0(&iStackY_a8,0x28);
    uStack_68 = 0x1a;
    fcn.000133e0(1,&iStackY_a8);
    iVar1 = fcn.00013fd8(1,auStack_78,0x18,0,in_stack_ffffffffffffff68,in_stack_ffffffffffffff70);
    if ((iVar1 == 0) && (iVar1 = iStackY_a8, iStackY_a8 == 0)) {
        if ((puStackY_a0 == NULL) || (iStackY_a4 != 0x10)) {
            iVar1 = 8;
        }
        else {
            *0x17910 = *puStackY_a0;
            *0x17914 = puStackY_a0[1];
            *0x17918 = puStackY_a0[2];
            *0x1791c = puStackY_a0[3];
        }
    }
    if (puStackY_a0 != NULL) {
        (**(*0x178e8 + 0x48))();
    }
    return iVar1;
}


/* fcn.0001584c @ 0x1584c */

int fcn.0001584c(void)

{
    char cVar1;
    int iVar2;
    int *arg1;
    int64_t arg3;
    uchar auStackY_78 [16];
    uint32_t in_stack_ffffffffffffffa0;
    
    fcn.000102c0(auStackY_78,100);
    if (*0x17900 == 1) {
        cVar1 = fcn.00016c8c(0x175b0,&stack0xffffffffffffffa0);
        if (cVar1 == '\0') {
            iVar2 = 6;
        }
        else {
            arg1 = fcn.000126a0(0x28);
            if (arg1 == NULL) {
                iVar2 = 5;
            }
            else {
                fcn.000102c0(arg1,0x28);
                arg1[8] = 1;
                arg1[6] = 1;
                arg3 = fcn.000133e0(1,arg1);
                iVar2 = fcn.00013fd8(1,auStackY_78,0x28,0,0xb,in_stack_ffffffffffffffa0);
                if (iVar2 == 0) {
                    iVar2 = *arg1;
                }
                if (*(arg1 + 2) != 0) {
                    (**(*0x178e8 + 0x48))();
                    arg1[2] = 0;
                    arg1[3] = 0;
                }
                if (iVar2 == 0) {
                    *0x17990 = arg3;
                    fcn.0001359c(1,arg1,arg3);
                }
                else {
                    fcn.000135e0(1,arg1,arg3);
                }
            }
        }
    }
    else {
        iVar2 = 1;
    }
    return iVar2;
}


/* fcn.00012774 @ 0x12774 */

uint64_t fcn.00012774(int64_t arg1)

{
    char cVar1;
    uint64_t uVar2;
    int64_t iVar3;
    char cVar4;
    char *pcVar5;
    uint64_t uVar6;
    uint64_t uStackX_8;
    
    uVar6 = 0;
    if ((arg1 != 0) && (pcVar5 = arg1, uVar2 = fcn.00012864(arg1,0xf4241), uVar2 < 0xf4241)) {
        for (; (*pcVar5 == ' ' || (*pcVar5 == '\t')); pcVar5 = pcVar5 + 1) {
        }
        cVar4 = '0';
        for (; *pcVar5 == '0'; pcVar5 = pcVar5 + 1) {
        }
        cVar1 = *pcVar5;
        if (*pcVar5 + 0x9fU < 0x1a) {
            cVar1 = cVar1 + -0x20;
        }
        if (cVar1 == 'X') {
            if (pcVar5[-1] != '0') {
                return uVar6;
            }
            pcVar5 = pcVar5 + 1;
        }
        uVar2 = 0xffffffffffffffff;
        for (; ((*pcVar5 - cVar4 < 10 || (*pcVar5 + 0xbfU < 6)) || (*pcVar5 + 0x9fU < 6)); pcVar5 = pcVar5 + 1) {
            iVar3 = fcn.000126cc(CONCAT71(arg1 >> 8,*pcVar5));
            arg1 = uVar2 - iVar3 >> 4;
            if (arg1 < uVar6) {
                return uVar2;
            }
            uVar6 = uVar6 * 0x10 + iVar3;
        }
        return uVar6;
    }
    return uStackX_8;
}


/* fcn.00015d04 @ 0x15d04 */

uint64_t fcn.00015d04(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint32_t var_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    
    iVar3 = arg3;
    if (-(arg2 & 0xffffffffU) - 1 < arg1) {
        return 0x308;
    }
    var_bp_10h = arg2 & 0xffffffff;
    uVar2 = 0x20;
    _var_20h = arg1;
    var_bp_18h = arg1;
    iVar1 = fcn.00016794(&var_20h,0x20);
    if (iVar1 == 0) {
        *arg4 = arg1;
        uVar4 = fcn.0001674c(&var_20h,uVar2);
    }
    else {
        uVar4 = 0x308;
    }
    if (uVar4 != 0) {
        return uVar4;
    }
    if (iVar3 != *(*arg4 + 0xc)) {
        return 0x102;
    }
    if (iVar3 == 1) {
        uVar2 = fcn.00016818(&var_20h,arg4 + 8);
        uVar4 = uVar2;
        if (uVar2 == 0) {
            uVar2 = 0x48;
            iVar3 = fcn.00016794(&var_20h,0x48);
            if (iVar3 == 0) {
                *(arg4 + 0x10) = _var_20h;
                uVar2 = fcn.0001674c(&var_20h,uVar2);
                uVar4 = uVar2;
            }
            else {
                uVar4 = 0x308;
            }
            if (uVar4 != 0) goto code_r0x00015e65;
            uVar2 = 0x108;
            iVar3 = fcn.00016794(&var_20h,0x108);
            if (iVar3 != 0) goto code_r0x00015e4e;
            *(arg4 + 0x18) = _var_20h;
code_r0x00016013:
            uVar2 = fcn.0001674c(&var_20h,uVar2);
            uVar4 = uVar2;
code_r0x00015e50:
            if (uVar4 != 0) goto code_r0x00015e54;
        }
        else {
code_r0x00015e54:
            if (uVar4 != 0) goto code_r0x00015e65;
        }
        uVar2 = fcn.0001674c(&var_20h,0);
    }
    else {
        if (iVar3 == 2) {
code_r0x00015f1a:
            uVar2 = 0x10;
            iVar3 = fcn.00016794(&var_20h,0x10);
            if (iVar3 == 0) {
                *(arg4 + 8) = _var_20h;
                uVar2 = fcn.0001674c(&var_20h,uVar2);
                uVar4 = uVar2;
            }
            else {
                uVar4 = 0x308;
            }
            goto code_r0x00015e54;
        }
        if (iVar3 == 3) {
            uVar2 = fcn.00016818(&var_20h,arg4 + 8);
            uVar4 = uVar2;
            if (uVar2 == 0) {
                uVar2 = 0x38;
                iVar3 = fcn.00016794(&var_20h,0x38);
                if (iVar3 == 0) {
                    *(arg4 + 0x10) = _var_20h;
                    uVar2 = fcn.0001674c(&var_20h,uVar2);
                    uVar4 = uVar2;
                }
                else {
                    uVar4 = 0x308;
                }
                if (uVar4 != 0) goto code_r0x00015f89;
            }
            else {
code_r0x00015f89:
                if (uVar4 != 0) goto code_r0x00015e65;
            }
            uVar2 = fcn.0001674c(&var_20h,0);
            uVar4 = uVar2;
            if (uVar2 != 0) goto code_r0x00015e65;
            arg4 = arg4 + 0x20;
        }
        else {
            if (iVar3 == 4) goto code_r0x00015f1a;
            if (iVar3 == 5) {
                uVar2 = fcn.00016818(&var_20h,arg4 + 8);
                uVar4 = uVar2;
                if (uVar2 == 0) {
                    uVar2 = 0x38;
                    iVar3 = fcn.00016794(&var_20h,0x38);
                    if (iVar3 == 0) {
                        *(arg4 + 0x10) = _var_20h;
                        uVar2 = fcn.0001674c(&var_20h,uVar2);
                        uVar4 = uVar2;
                    }
                    else {
                        uVar4 = 0x308;
                    }
                    if (uVar4 != 0) goto code_r0x00015e65;
                    iVar3 = fcn.00016794(&var_20h,4);
                    if (iVar3 == 0) {
                        *(arg4 + 0x18) = _var_20h;
                        if (0x1400 < *_var_20h) {
code_r0x00015e2b:
                            uVar4 = 0x308;
                            goto code_r0x00015e65;
                        }
                        iVar5 = *_var_20h + 4;
                        iVar3 = fcn.00016794(&var_20h,iVar5);
                        if (iVar3 != 0) goto code_r0x00015efc;
                        uVar2 = fcn.0001674c(&var_20h,iVar5);
                        uVar4 = uVar2;
                    }
                    else {
code_r0x00015efc:
                        uVar4 = 0x308;
                    }
                    if (uVar4 != 0) goto code_r0x00015f02;
                }
                else {
code_r0x00015f02:
                    if (uVar4 != 0) goto code_r0x00015e65;
                }
                uVar2 = fcn.0001674c(&var_20h,0);
            }
            else {
                if (iVar3 == 6) goto code_r0x00015f1a;
                if (iVar3 == 7) {
                    uVar2 = fcn.00016818(&var_20h,arg4 + 8);
                    uVar4 = uVar2;
                    if (uVar2 == 0) {
                        iVar3 = fcn.00016794(&var_20h,4);
                        if (iVar3 == 0) {
                            *(arg4 + 0x10) = _var_20h;
                            if (0x28 < *_var_20h) goto code_r0x00015e2b;
                            iVar5 = *_var_20h * 0x14 + 4;
                            iVar3 = fcn.00016794(&var_20h,iVar5);
                            uVar2 = iVar5;
                            if (iVar3 == 0) goto code_r0x00016013;
                        }
code_r0x00015e4e:
                        uVar4 = 0x308;
                        goto code_r0x00015e50;
                    }
                    goto code_r0x00015e54;
                }
                if (iVar3 != 8) {
                    return 0x102;
                }
                uVar2 = fcn.000168f8(&var_20h,arg4);
            }
            uVar4 = uVar2;
            if (uVar2 != 0) goto code_r0x00015e65;
            arg4 = arg4 + 0x28;
        }
        uVar2 = fcn.00016868(&var_20h,arg4);
    }
    uVar4 = uVar2;
code_r0x00015e65:
    if (_var_20h != (var_bp_10h & 0xffffffffU) + var_bp_18h) {
        uVar4 = 0x308;
    }
    return uVar4;
}


/* fcn.000148c0 @ 0x148c0 */

uint64_t fcn.000148c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong *arg2_00;
    int64_t in_stack_00000028;
    uint32_t in_stack_00000030;
    uint32_t uStack_98;
    int iStack_94;
    int iStack_90;
    int iStack_8c;
    int64_t aiStack_88 [2];
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    ulong uStack_18;
    ulong uStack_10;
    
    uStack_98 = 0;
    iStack_8c = 0;
    iStack_90 = 0;
    iStack_94 = 0;
    aiStack_88[0] = 0;
    if (*0x17900 != 1) {
        return 1;
    }
    if (((((arg2 == 0) || (arg1 == 0)) || (arg3 == 0)) || (arg4 == 0)) ||
       (((in_stack_00000028 == 0 && (in_stack_00000030 != 0)) ||
        (cVar1 = fcn.00016c8c(arg2,&uStack_78), cVar1 == '\0')))) {
        return 6;
    }
    *arg1 = 0;
    uStack_68 = uStack_78;
    uStack_60 = uStack_70;
    uVar4 = fcn.00014338(&uStack_68,&uStack_48);
    if (uVar4 != 0) {
        return uVar4;
    }
    uStack_58 = uStack_78;
    uStack_50 = uStack_70;
    uVar4 = fcn.00014420(&uStack_58);
    if (uVar4 != 0) {
        return uVar4;
    }
    uStack_38 = uStack_48;
    uStack_30 = uStack_40;
    uVar4 = fcn.00013630(&uStack_38,&uStack_98);
    if (uVar4 != 0) {
        return uVar4;
    }
    iVar2 = fcn.000144e0(uStack_98,&iStack_94,aiStack_88);
    if (iVar2 == 0) {
        iVar2 = 0;
        if (0 < iStack_94) {
            do {
                arg2_00 = iVar2 * 0x10 + aiStack_88[0];
                if ((&uStack_78 == arg2_00) || (iVar5 = fcn.000102e0(&uStack_78,arg2_00,0x10), iVar5 == 0)) {
                    iVar2 = 1;
                    goto code_r0x00014a0f;
                }
                iVar2 = iVar2 + 1;
            } while (iVar2 < iStack_94);
        }
        iVar2 = iStack_90;
code_r0x00014a0f:
        if (aiStack_88[0] != 0) {
            (**(*0x178e8 + 0x48))(aiStack_88[0]);
        }
        if (iVar2 == 0) goto code_r0x00014a28;
    }
    else {
code_r0x00014a28:
        uStack_28 = uStack_78;
        uStack_20 = uStack_70;
        uVar3 = fcn.0001464c(uStack_98,&uStack_28,arg3,arg4 & 0xffffffff);
        if ((uVar3 != 0) && (uVar3 != 0x309)) goto code_r0x00014a87;
    }
    uStack_18 = uStack_78;
    uStack_10 = uStack_70;
    uVar3 = fcn.00014710(uStack_98,&uStack_18,in_stack_00000028,in_stack_00000030);
code_r0x00014a87:
    if ((uVar3 != 0) && (iStack_8c == 0)) {
        fcn.00013668(uStack_98);
    }
    return uVar3;
}


/* fcn.00014cf8 @ 0x14cf8 */

int fcn.00014cf8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint uVar1;
    uint *puVar2;
    int iVar3;
    int *piVar4;
    uint *arg1_00;
    uint32_t uVar5;
    uchar uStackX_11;
    uchar uStackX_12;
    uchar uStackX_13;
    uchar uStackX_19;
    uchar uStackX_1a;
    uchar uStackX_1b;
    uchar uStack0000000000000029;
    uchar uStack000000000000002a;
    uchar uStack000000000000002b;
    ulong *in_stack_00000030;
    uint32_t *in_stack_00000038;
    uint *in_stack_00000040;
    uchar auStackY_a8 [16];
    
    fcn.000102c0(auStackY_a8,100);
    if (*0x17900 == 1) {
        if ((arg4 != 0) && (in_stack_00000038 != NULL)) {
            if (in_stack_00000030 != NULL) {
                *in_stack_00000030 = 0;
            }
            piVar4 = fcn.0001351c(0,arg1);
            if (piVar4 != NULL) {
                piVar4[2] = 0;
                piVar4[3] = 0;
                iVar3 = fcn.00013fd8(0,auStackY_a8,0x2c,arg4,8,*(piVar4 + 4));
                if (iVar3 == 0) {
                    iVar3 = *piVar4;
                }
                if (piVar4[7] != 0) {
                    iVar3 = 0x401;
                }
                if (iVar3 == 0) {
                    puVar2 = *(piVar4 + 2);
                    if ((puVar2 == NULL) || (piVar4[1] < 4)) {
                        iVar3 = 7;
                    }
                    else {
                        if (in_stack_00000040 != NULL) {
                            uVar1 = *puVar2;
                            *in_stack_00000040 = uVar1;
                            uStackX_1b = uVar1 >> 0x18;
                            *in_stack_00000040 = uStackX_1b;
                            uStackX_1a = uVar1 >> 0x10;
                            *(in_stack_00000040 + 1) = uStackX_1a;
                            uStackX_19 = uVar1 >> 8;
                            *(in_stack_00000040 + 2) = uStackX_19;
                            *(in_stack_00000040 + 3) = uVar1;
                        }
                        uVar5 = piVar4[1] - 4;
                        if (uVar5 != 0) {
                            if ((in_stack_00000030 == NULL) || (*in_stack_00000038 < uVar5)) {
                                iVar3 = 0x403;
                            }
                            else {
                                if (uVar5 == 0) {
                                    arg1_00 = NULL;
                                }
                                else {
                                    arg1_00 = fcn.000126a0(uVar5);
                                }
                                *in_stack_00000030 = arg1_00;
                                if (arg1_00 == NULL) {
                                    iVar3 = 5;
                                }
                                else if ((uVar5 != 0) && (arg1_00 != puVar2 + 1)) {
                                    section..text(arg1_00,puVar2 + 1,uVar5);
                                }
                            }
                        }
                        *in_stack_00000038 = uVar5;
                    }
                }
                else if (((iVar3 == 0x403) && (puVar2 = *(piVar4 + 2), puVar2 != NULL)) && (piVar4[1] == 8)) {
                    if (in_stack_00000040 != NULL) {
                        uVar1 = *puVar2;
                        *in_stack_00000040 = uVar1;
                        uStackX_13 = uVar1 >> 0x18;
                        *in_stack_00000040 = uStackX_13;
                        uStackX_12 = uVar1 >> 0x10;
                        *(in_stack_00000040 + 1) = uStackX_12;
                        uStackX_11 = uVar1 >> 8;
                        *(in_stack_00000040 + 2) = uStackX_11;
                        *(in_stack_00000040 + 3) = uVar1;
                    }
                    uVar5 = puVar2[1];
                    *in_stack_00000038 = uVar5;
                    uStack000000000000002b = uVar5 >> 0x18;
                    *in_stack_00000038 = uStack000000000000002b;
                    uStack000000000000002a = uVar5 >> 0x10;
                    *(in_stack_00000038 + 1) = uStack000000000000002a;
                    uStack0000000000000029 = uVar5 >> 8;
                    *(in_stack_00000038 + 2) = uStack0000000000000029;
                    *(in_stack_00000038 + 3) = uVar5;
                }
                if (*(piVar4 + 2) != 0) {
                    (**(*0x178e8 + 0x48))();
                    piVar4[2] = 0;
                    piVar4[3] = 0;
                }
                fcn.0001359c(0,piVar4,arg1);
                return iVar3;
            }
        }
        iVar3 = 6;
    }
    else {
        iVar3 = 1;
    }
    return iVar3;
}


/* fcn.0001351c @ 0x1351c */

int64_t fcn.0001351c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *puVar2;
    int64_t iVar3;
    ulong *puVar4;
    ulong *puVar5;
    
    iVar3 = 0;
    puVar5 = arg1 * 0x30 + 0x179a8;
    for (puVar4 = *puVar5; puVar4 != puVar5; puVar4 = *puVar4) {
        puVar2 = puVar4 + -1;
        if (puVar4[2] == arg2) goto code_r0x00013553;
    }
    puVar2 = NULL;
code_r0x00013553:
    if (((puVar2 != NULL) && (iVar1 = puVar2[4], *(iVar1 + 0x18) != 0)) && (*(iVar1 + 0x1c) == 0)) {
        if (*(iVar1 + 0x20) < 0x14) {
            *(iVar1 + 0x20) = *(iVar1 + 0x20) + 1;
            iVar3 = iVar1;
        }
        else {
            iVar3 = 0;
        }
        if ((iVar3 != 0) && (*(iVar3 + 0x1c) != 0)) {
            fcn.0001359c(arg1 & 0xffffffff,iVar3,arg2);
            iVar3 = 0;
        }
    }
    return iVar3;
}


/* fcn.00013fd8 @ 0x13fd8 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h

int fcn.00013fd8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int32_t arg_50h,uint32_t arg_58h)

{
    int iVar1;
    int iVar2;
    ulong *puVar3;
    int64_t iVar4;
    int *arg1_00;
    int64_t iVar5;
    ulong *puVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    int aiStackX_8 [2];
    uint32_t var_30h;
    int64_t in_stack_00000030;
    uint32_t auStack_58 [2];
    int64_t iStack_50;
    uchar auStack_48 [4];
    uint32_t uStack_44;
    uint32_t uStack_40;
    uint uStack_3c;
    uint32_t var_30h_2;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    int32_t var_8h;
    
    iVar5 = in_stack_00000030;
    iVar7 = arg1 * 0x30;
    for (puVar6 = *(iVar7 + 0x179a8); puVar6 != iVar7 + 0x179a8; puVar6 = *puVar6) {
        puVar3 = puVar6 + -1;
        if (puVar6[2] == in_stack_00000030) goto code_r0x00014036;
    }
    puVar3 = NULL;
code_r0x00014036:
    if ((puVar3 == NULL) || (iVar4 = puVar3[4], iVar4 == 0)) {
        iVar1 = 3;
    }
    else {
        if ((arg3 < 0x18) || (arg2 == 0)) {
            iVar1 = 6;
        }
        else {
            *(iVar4 + 8) = 0;
            *(iVar4 + 4) = 0;
            if (arg2 != 0x1789c) {
                section..text(arg2,0x1789c,4);
            }
            *(arg2 + 8) = iVar5;
            *(arg2 + 4) = arg3 + var_30h;
            iVar1 = (**0x17090)(arg1 & 0xffffffff,arg2,arg3 & 0xffffffff);
            if ((iVar1 != 0) || ((var_30h != 0 && (iVar1 = (**0x17090)(arg1 & 0xffffffff,arg4,var_30h), iVar1 != 0)))
               ) {
                fcn.00013470(arg1 & 0xffffffff,iVar5);
            }
        }
        if (iVar1 == 0) {
            uVar9 = 0;
            do {
                aiStackX_8[0] = 0x20;
                iVar5 = 0;
                uVar8 = 0;
                iVar1 = (**0x17098)(*(iVar7 + 0x179a0),auStack_48,aiStackX_8);
                if (iVar1 == 0) {
                    iVar4 = fcn.000102e0(0x178a4,auStack_48,4);
                    if (iVar4 == 0) {
                        arg1_00 = fcn.00013470(arg1 & 0xffffffff,uStack_40);
                        if (0x20 < uStack_44) {
                            uVar8 = uStack_44 - 0x20;
                            if (uVar8 != 0) {
                                iVar5 = fcn.000126a0(uVar8);
                            }
                            auStack_58[0] = uVar8;
                            iVar1 = (**0x17098)(*(iVar7 + 0x179a0),iVar5,auStack_58);
                            if ((iVar1 == 0) && (iVar5 == 0)) {
                                iVar1 = 5;
                            }
                        }
                        if (arg1_00 == NULL) {
                            if (iVar5 != 0) {
                                (**(*0x178e8 + 0x48))(iVar5);
                            }
                        }
                        else {
                            *(arg1_00 + 2) = iVar5;
                            arg1_00[1] = uVar8;
                            iVar2 = iVar1;
                            if (iVar1 == 0) {
                                iVar2 = var_28h;
                            }
                            *arg1_00 = iVar2;
                            if (_var_30h_2 != 0) {
                                *(arg1_00 + 4) = _var_30h_2;
                            }
                            if ((arg1_00[6] != 0) &&
                               (((*arg1_00 == 0x201 || (*arg1_00 == 0x106)) || (*arg1_00 == 0x401)))) {
                                arg1_00[7] = 1;
                                arg1_00[7] = 1;
                                if (arg1_00[8] == 0) {
                                    fcn.00013470(arg1 & 0xffffffff,uStack_40);
                                    fcn.000134e8(arg1_00);
                                    if ((0 < arg1) && (*(iVar7 + 0x179b8) != 1)) {
                                        *(iVar7 + 0x179b8) = *(iVar7 + 0x179b8) + -1;
                                    }
                                }
                            }
                        }
                        iStack_50 = CONCAT44(uStack_3c,uStack_40);
                        goto code_r0x00014243;
                    }
                    iVar1 = 8;
                }
                else {
code_r0x00014243:
                    if ((iVar1 == 0) && (iStack_50 == in_stack_00000030)) break;
                }
                uVar9 = uVar9 + 1;
            } while (uVar9 < 3);
            if (uVar9 == 3) {
                iVar1 = 0x1001;
            }
        }
    }
    return iVar1;
}


/* fcn.0001359c @ 0x1359c */

void fcn.0001359c(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int *piVar1;
    uint in_register_00000014;
    int64_t arg1_00;
    
    arg1_00 = CONCAT44(in_register_00000014,arg2);
    piVar1 = arg1_00 + 0x20;
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && (*(arg1_00 + 0x1c) != 0)) {
        fcn.00013470(arg1,arg3);
        fcn.000134e8(arg1_00);
        if (0 < arg1) {
            fcn.00013668(arg1 & 0xffffffff);
        }
    }
    return;
}


/* fcn.00013470 @ 0x13470 */

int64_t fcn.00013470(int64_t arg1,uint32_t arg2)

{
    ulong *puVar1;
    ulong *puVar2;
    uint in_register_00000014;
    int64_t iVar3;
    ulong *puVar4;
    
    iVar3 = 0;
    puVar4 = arg1 * 0x30 + 0x179a8;
    for (puVar1 = *puVar4; puVar1 != puVar4; puVar1 = *puVar1) {
        puVar2 = puVar1 + -1;
        if (puVar1[2] == CONCAT44(in_register_00000014,arg2)) goto code_r0x000134aa;
    }
    puVar2 = NULL;
code_r0x000134aa:
    if ((puVar2 != NULL) && (iVar3 = puVar2[4], *(iVar3 + 0x18) == 0)) {
        *(puVar2[1] + 8) = puVar2[2];
        *puVar2[2] = puVar2[1];
        (**(*0x178e8 + 0x48))();
    }
    return iVar3;
}


/* fcn.000134e8 @ 0x134e8 */

void fcn.000134e8(int64_t arg1)

{
    if (*(arg1 + 8) != 0) {
        (**(*0x178e8 + 0x48))();
        *(arg1 + 8) = 0;
    }
    //WARNING: Could not recover jumptable at 0x00013518. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x178e8 + 0x48))(arg1);
    return;
}


/* fcn.00013668 @ 0x13668 */

uint fcn.00013668(int64_t arg1)

{
    int *piVar1;
    uint uVar2;
    int64_t iVar3;
    
    uVar2 = 0;
    if ((arg1 < 1) || (iVar3 = arg1 * 0x30, *(iVar3 + 0x179a0) == 0)) {
        uVar2 = 0;
    }
    else {
        piVar1 = iVar3 + 0x179b8;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
            uVar2 = fcn.00013ed8(arg1);
        }
    }
    return uVar2;
}


/* fcn.000135e0 @ 0x135e0 */

void fcn.000135e0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    int iVar2;
    
    piVar1 = arg2 + 0x20;
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    if (iVar2 != 0) {
        *(arg2 + 0x1c) = 1;
    }
    else {
        fcn.00013470(arg1,arg3);
        fcn.000134e8(arg2);
    }
    if (iVar2 == 0 && 0 < arg1) {
        fcn.00013668(arg1 & 0xffffffff);
    }
    return;
}


/* fcn.00014acc @ 0x14acc */

int fcn.00014acc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint uVar1;
    uint *puVar2;
    int iVar3;
    int *piVar4;
    uint *arg1_00;
    uint32_t uVar5;
    ulong *in_stack_00000028;
    uint32_t *in_stack_00000030;
    uint *in_stack_00000038;
    uchar uStackY_a7;
    uchar uStackY_a6;
    uchar uStackY_a5;
    uchar uStackY_a3;
    uchar uStackY_a2;
    uchar uStackY_a1;
    uchar uStackY_9f;
    uchar uStackY_9e;
    uchar uStackY_9d;
    int32_t in_stack_ffffffffffffff68;
    uint32_t in_stack_ffffffffffffff70;
    
    fcn.000102c0(&stack0xffffffffffffff68,100);
    iVar3 = 1;
    if (*0x17900 == 1) {
        if (((arg3 != 0) || (arg4 == 0)) && (in_stack_00000030 != NULL)) {
            if (in_stack_00000028 != NULL) {
                *in_stack_00000028 = 0;
            }
            piVar4 = fcn.0001351c(0,arg1);
            if (piVar4 != NULL) {
                piVar4[2] = 0;
                piVar4[3] = 0;
                iVar3 = fcn.00013fd8(0,&stack0xffffffffffffff68,0x28,arg3,in_stack_ffffffffffffff68,
                                     in_stack_ffffffffffffff70);
                if (iVar3 == 0) {
                    iVar3 = *piVar4;
                }
                if (piVar4[7] != 0) {
                    iVar3 = 0x401;
                }
                if (iVar3 == 0) {
                    puVar2 = *(piVar4 + 2);
                    if ((puVar2 == NULL) || (piVar4[1] < 4)) {
                        iVar3 = 7;
                    }
                    else {
                        if (in_stack_00000038 != NULL) {
                            uVar1 = *puVar2;
                            *in_stack_00000038 = uVar1;
                            uStackY_a5 = uVar1 >> 0x18;
                            *in_stack_00000038 = uStackY_a5;
                            uStackY_a6 = uVar1 >> 0x10;
                            *(in_stack_00000038 + 1) = uStackY_a6;
                            uStackY_a7 = uVar1 >> 8;
                            *(in_stack_00000038 + 2) = uStackY_a7;
                            *(in_stack_00000038 + 3) = uVar1;
                        }
                        uVar5 = piVar4[1] - 4;
                        if (uVar5 != 0) {
                            if ((in_stack_00000028 == NULL) || (*in_stack_00000030 < uVar5)) {
                                iVar3 = 0x403;
                            }
                            else {
                                if (uVar5 == 0) {
                                    arg1_00 = NULL;
                                }
                                else {
                                    arg1_00 = fcn.000126a0(uVar5);
                                }
                                *in_stack_00000028 = arg1_00;
                                if (arg1_00 == NULL) {
                                    iVar3 = 5;
                                }
                                else if ((uVar5 != 0) && (arg1_00 != puVar2 + 1)) {
                                    section..text(arg1_00,puVar2 + 1,uVar5);
                                }
                            }
                        }
                        *in_stack_00000030 = uVar5;
                    }
                }
                else if (((iVar3 == 0x403) && (puVar2 = *(piVar4 + 2), puVar2 != NULL)) && (piVar4[1] == 8)) {
                    if (in_stack_00000038 != NULL) {
                        uVar1 = *puVar2;
                        *in_stack_00000038 = uVar1;
                        uStackY_a1 = uVar1 >> 0x18;
                        *in_stack_00000038 = uStackY_a1;
                        uStackY_a2 = uVar1 >> 0x10;
                        *(in_stack_00000038 + 1) = uStackY_a2;
                        uStackY_a3 = uVar1 >> 8;
                        *(in_stack_00000038 + 2) = uStackY_a3;
                        *(in_stack_00000038 + 3) = uVar1;
                    }
                    uVar5 = puVar2[1];
                    *in_stack_00000030 = uVar5;
                    uStackY_9d = uVar5 >> 0x18;
                    *in_stack_00000030 = uStackY_9d;
                    uStackY_9e = uVar5 >> 0x10;
                    *(in_stack_00000030 + 1) = uStackY_9e;
                    uStackY_9f = uVar5 >> 8;
                    *(in_stack_00000030 + 2) = uStackY_9f;
                    *(in_stack_00000030 + 3) = uVar5;
                }
                if (*(piVar4 + 2) != 0) {
                    (**(*0x178e8 + 0x48))();
                    piVar4[2] = 0;
                    piVar4[3] = 0;
                }
                fcn.0001359c(0,piVar4,arg1);
                return iVar3;
            }
        }
        iVar3 = 6;
    }
    return iVar3;
}


/* fcn.00015124 @ 0x15124 */

uint64_t fcn.00015124(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t arg1_00;
    int64_t iVar4;
    int64_t arg3_00;
    uint32_t auStackY_d8 [2];
    uint32_t uStackY_d0;
    int iStackY_cc;
    int32_t in_stack_ffffffffffffff38;
    uint uStack_c4;
    uint32_t in_stack_ffffffffffffff40;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    uchar auStack_78 [16];
    uint uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    
    auStackY_d8[0] = 0;
    fcn.000102c0(auStack_78,100);
    fcn.000102c0(&uStackY_d0,0x28);
    if (*0x17900 != 1) {
        return 1;
    }
    if ((((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) ||
       ((arg4 == 0 || (cVar1 = fcn.00016c8c(arg1,&uStack_60), cVar1 == '\0')))) {
        return 6;
    }
    *arg4 = 0;
    uStack_a8 = uStack_60;
    uStack_a0 = uStack_58;
    uVar3 = fcn.00014338(&uStack_a8,&uStack_98);
    if (uVar3 != 0) {
        return uVar3;
    }
    uStack_88 = uStack_98;
    uStack_80 = uStack_90;
    uVar3 = fcn.00013630(&uStack_88,auStackY_d8);
    if (uVar3 != 0) {
        return uVar3;
    }
    uStack_68 = 0x17;
    fcn.000133e0(auStackY_d8[0],&uStackY_d0);
    uVar2 = fcn.00013fd8(auStackY_d8[0],auStack_78,0x28,arg2,in_stack_ffffffffffffff38,in_stack_ffffffffffffff40);
    uVar3 = uVar2;
    if ((uVar2 == 0) && (uVar3 = uStackY_d0, uStackY_d0 == 0)) {
        arg3_00 = iStackY_cc;
        iVar4 = CONCAT44(uStack_c4,in_stack_ffffffffffffff38);
        if (iStackY_cc != 0) {
            if (iVar4 != 0) {
                if (iStackY_cc + 1 == 0) {
                    arg1_00 = 0;
                }
                else {
                    arg1_00 = fcn.000126a0(iStackY_cc + 1);
                    iVar4 = CONCAT44(uStack_c4,in_stack_ffffffffffffff38);
                }
                *arg4 = arg1_00;
                if (arg1_00 == 0) {
                    uVar3 = 5;
                    goto code_r0x0001528f;
                }
                if ((arg3_00 != 0) && (arg1_00 != iVar4)) {
                    section..text(arg1_00,iVar4,arg3_00);
                }
                *(arg3_00 + *arg4) = 0;
                goto code_r0x0001528b;
            }
            if (iStackY_cc != 0) {
                uVar3 = 7;
                goto code_r0x0001528f;
            }
        }
        *arg4 = 0;
    }
    else {
code_r0x0001528b:
        iVar4 = CONCAT44(uStack_c4,in_stack_ffffffffffffff38);
    }
code_r0x0001528f:
    if (iVar4 != 0) {
        (**(*0x178e8 + 0x48))();
    }
    fcn.00013668(auStackY_d8[0]);
    return uVar3;
}


/* fcn.00012890 @ 0x12890 */

ulong fcn.00012890(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t extraout_RAX;
    uint in_register_00000014;
    
    if ((((arg1 == 0) || (arg3 == 0)) || (1000000 < CONCAT44(in_register_00000014,arg2))) ||
       (CONCAT44(in_register_00000014,arg2) == 0)) {
        return 0x8000000000000002;
    }
    fcn.00012864(arg3,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + extraout_RAX + 1) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x00012901;
    }
    if (arg3 < arg1 + CONCAT44(in_register_00000014,arg2)) {
        return 0x800000000000000f;
    }
code_r0x00012901:
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


/* fcn.000163c0 @ 0x163c0 */

int64_t fcn.000163c0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    int64_t iVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint auStackX_8 [2];
    uint8_t uStackX_20;
    char cStackX_21;
    
    uVar4 = arg3 & 0xffffffff;
    if (arg1 < 3) {
        iVar2 = -0x7ffffffffffffffe;
        if (arg3 != 0) {
            iVar5 = arg1 * 0x1c;
            do {
                uVar8 = uVar4;
                uVar7 = 0xfe0;
                if (uVar8 < 0xfe0) {
                    uVar7 = uVar8;
                }
                if (*(iVar5 + 0x17944) < uVar7) {
                    iVar2 = -0x7ffffffffffffffb;
                    break;
                }
                if (*(iVar5 + 0x17941) != '\0') {
                    if (*(iVar5 + 0x1794a) == '\0') {
                        *(iVar5 + 0x1794a) = 1;
                    }
                    else if (*(iVar5 + 0x17948) == '\0') {
                        bVar1 = true;
                        do {
                            auStackX_8[0] = 8;
                            iVar2 = (**(*0x17920 + 8))(0,1,&uStackX_20,auStackX_8);
                            if ((iVar2 < 0) || ((uStackX_20 & 0x7f) != 8)) break;
                            uVar4 = 0;
                            do {
                                if (cStackX_21 == *(uVar4 * 0x1c + 0x17940)) {
                                    *(uVar4 * 0x1c + 0x17948) = 1;
                                    bVar1 = false;
                                }
                                uVar3 = uVar4 + 1;
                                uVar4 = uVar3;
                            } while (uVar3 < 3);
                        } while (bVar1);
                    }
                }
                iVar6 = 1;
                do {
                    iVar2 = (**(*0x17920 + 0x10))(0,arg2,uVar7,*(iVar5 + 0x17941),*(iVar5 + 0x17940));
                    if ((iVar2 != -0x7fffffffffffffee) && (iVar2 < 0)) goto code_r0x000164dc;
                } while ((iVar2 < 0) && (iVar6 = iVar6 + -1, iVar6 != 0));
                *(iVar5 + 0x17948) = 0;
code_r0x000164dc:
                if (iVar2 < 0) break;
                arg2 = arg2 + uVar7;
                uVar4 = uVar8 - uVar7;
            } while (uVar8 - uVar7 != 0);
        }
    }
    else {
        iVar2 = -0x7ffffffffffffffe;
    }
    return iVar2;
}


/* fcn.00016510 @ 0x16510 */

int64_t fcn.00016510(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint8_t *puVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint64_t arg3_00;
    int iVar6;
    uint8_t *puVar7;
    uint32_t uVar8;
    int iStackX_10;
    uint32_t auStackX_20 [2];
    uchar uStack_48;
    uchar uStack_47;
    uchar uStack_46;
    int64_t iStack_40;
    
    uVar4 = *arg3;
    iVar1 = 0;
    iStackX_10 = 0;
    iVar6 = 0;
    if (uVar4 != 0) {
        iStack_40 = arg1 * 0x1c + 0x17930;
code_r0x00016559:
        iVar1 = iStack_40;
        if (*(iStack_40 + 0x11) != '\0') {
            fcn.000102c0(&uStack_48,8);
            uStack_47 = *(iVar1 + 0x10);
            uStack_46 = *(iVar1 + 0x11);
            uStack_48 = 8;
            iVar1 = (**(*0x17920 + 0x10))(0,&uStack_48,8,0,0);
            if (iVar1 < 0) goto code_r0x00016720;
        }
        if (*0x17920 != 0) {
            iVar6 = 1;
            puVar2 = NULL;
            uVar8 = 0x20;
            puVar7 = arg2;
            do {
                do {
                    uVar5 = uVar8;
                    auStackX_20[0] = uVar4;
                    while( true ) {
                        uVar8 = uVar5;
                        iVar1 = (**(*0x17920 + 8))(0,0,puVar7,auStackX_20);
                        if (iVar1 == 0) {
                            if (((*puVar7 & 0x7f) != 8) || (puVar7[2] != 1)) goto code_r0x0001669b;
                            uVar3 = 0;
                            goto code_r0x00016686;
                        }
                        if (iVar1 != -0x7ffffffffffffffb) break;
                        if (puVar2 != NULL) {
                            (**(*0x178e8 + 0x48))(puVar2);
                        }
                        puVar2 = fcn.000126a0(uVar8);
                        if (puVar2 == NULL) {
                            iVar1 = -0x7ffffffffffffff7;
                            goto code_r0x00016720;
                        }
                        puVar7 = puVar2;
                        uVar5 = uVar8 * 2;
                        auStackX_20[0] = uVar8;
                    }
                } while (iVar1 == -0x7ffffffffffffff0);
                uVar5 = uVar4;
                if (iVar1 != -0x7fffffffffffffee) goto code_r0x000166ba;
                iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            goto code_r0x000166e8;
        }
        iVar1 = -0x7ffffffffffffffa;
        goto code_r0x00016720;
    }
code_r0x00016727:
    *arg3 = iVar6;
    return iVar1;
    while (uVar3 = uVar3 + 1, uVar3 < 3) {
code_r0x00016686:
        if (puVar7[1] == *(uVar3 * 0x1c + 0x17940)) {
            arg3_00 = 0;
            *(uVar3 * 0x1c + 0x17948) = 1;
            goto code_r0x000166bf;
        }
    }
code_r0x0001669b:
    uVar5 = auStackX_20[0];
    if (uVar4 < auStackX_20[0]) {
        arg3_00 = uVar4;
    }
    else {
code_r0x000166ba:
        arg3_00 = uVar5;
        if (iVar1 < 0) goto code_r0x000166e8;
    }
code_r0x000166bf:
    uVar5 = arg3_00;
    if (puVar2 != NULL) {
        if ((uVar5 != 0) && (arg2 != puVar2)) {
            section..text(arg2,puVar2,arg3_00);
        }
        (**(*0x178e8 + 0x48))();
    }
code_r0x000166e8:
    if (iVar1 < 0) goto code_r0x00016720;
    iStackX_10 = iStackX_10 + uVar5;
    arg2 = arg2 + uVar5;
    uVar4 = uVar4 - uVar5;
    if (uVar4 == 0) goto code_r0x00016720;
    goto code_r0x00016559;
code_r0x00016720:
    iVar6 = iStackX_10;
    goto code_r0x00016727;
}


/* fcn.00016300 @ 0x16300 */

uint64_t fcn.00016300(int64_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    uchar uStackX_8;
    uchar uStackX_9;
    ushort uStackX_a;
    int64_t var_18h;
    int32_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    
    if (arg1 < 3) {
        iVar2 = arg1 * 0x1c;
        if (*(iVar2 + 0x17949) == '\0') {
            uVar1 = 0;
        }
        else {
            uStackX_9 = *(iVar2 + 0x17940);
            uStackX_a = 1;
            uStackX_8 = 7;
            var_18h._0_4_ = 4;
            uVar1 = (**(*0x17920 + 0x10))(0,&uStackX_8,4,0,0);
            if (-1 < uVar1) {
                var_18h._0_4_ = 8;
                uVar1 = (**(*0x17920 + 8))(0,1,&var_28h,&var_18h);
                if (-1 < uVar1) {
                    section..text(&var_20h,&var_28h,4);
                    if (var_20h._3_1_ == 0) {
                        *(iVar2 + 0x17949) = 0;
                    }
                    uVar1 = var_20h._3_1_;
                }
            }
        }
    }
    else {
        uVar1 = 0x8000000000000002;
    }
    return uVar1;
}


/* fcn.00016218 @ 0x16218 */

int64_t fcn.00016218(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int aiStackX_8 [2];
    int64_t iStackX_10;
    
    iVar1 = (**(*0x178e8 + 0x140))(0x16e20,0,&iStackX_10);
    if ((-1 < iVar1) && (iVar1 = (**(iStackX_10 + 0x40))(aiStackX_8), -1 < iVar1)) {
        if (aiStackX_8[0] == 0) {
            iVar1 = (**(iStackX_10 + 0x18))(0);
            if (-1 < iVar1) {
                *0x17920 = iStackX_10;
                fcn.000102c0(0x17930,0x54);
                section..text(0x17930,0x16eb0,0x10);
                section..text(0x1794c,0x16e60,0x10);
                section..text(0x17968,0x16e50,0x10);
                iVar2 = fcn.00016040();
                iVar1 = 0;
                if (iVar2 < 0) {
                    iVar1 = iVar2;
                }
            }
        }
        else {
            iVar1 = -0x7ffffffffffffff9;
        }
    }
    return iVar1;
}


/* fcn.000133e0 @ 0x133e0 */

ulong fcn.000133e0(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong *puVar2;
    uint *puVar3;
    ulong uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    
    uVar6 = *0x178fc + 1;
    if (uVar6 == 0) {
        uVar6 = 1;
    }
    *0x178fc = uVar6;
    puVar3 = fcn.000126a0(0x28);
    if (puVar3 == NULL) {
        uVar4 = 0xffffffffffffffff;
    }
    else {
        *puVar3 = 0x696d7272;
        piVar1 = puVar3 + 2;
        *(puVar3 + 8) = arg2;
        *(puVar3 + 6) = uVar6;
        iVar5 = arg1 * 0x30;
        *piVar1 = iVar5 + 0x179a8;
        puVar2 = *(iVar5 + 0x179b0);
        *(puVar3 + 4) = puVar2;
        *puVar2 = piVar1;
        *(iVar5 + 0x179b0) = piVar1;
        uVar4 = *(puVar3 + 6);
    }
    return uVar4;
}


/* fcn.000136b0 @ 0x136b0 */

int fcn.000136b0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int iVar2;
    ulong *puVar3;
    ulong *puVar4;
    ulong *puVar5;
    int in_stack_00000028;
    int64_t in_stack_00000030;
    
    puVar4 = arg1 * 0x30 + 0x179a8;
    for (puVar5 = *puVar4; puVar5 != puVar4; puVar5 = *puVar5) {
        puVar3 = puVar5 + -1;
        if (puVar5[2] == in_stack_00000030) goto code_r0x00013704;
    }
    puVar3 = NULL;
code_r0x00013704:
    if ((puVar3 == NULL) || (iVar1 = puVar3[4], iVar1 == 0)) {
        iVar2 = 3;
    }
    else if ((arg3 < 0x18) || (arg2 == 0)) {
        iVar2 = 6;
    }
    else {
        *(iVar1 + 8) = 0;
        *(iVar1 + 4) = 0;
        if (arg2 != 0x1789c) {
            section..text(arg2,0x1789c,4);
        }
        *(arg2 + 8) = in_stack_00000030;
        *(arg2 + 4) = arg3 + in_stack_00000028;
        iVar2 = (**0x17090)(arg1 & 0xffffffff,arg2,arg3 & 0xffffffff);
        if ((iVar2 != 0) ||
           ((in_stack_00000028 != 0 && (iVar2 = (**0x17090)(arg1 & 0xffffffff,arg4,in_stack_00000028), iVar2 != 0))))
        {
            fcn.00013470(arg1 & 0xffffffff,in_stack_00000030);
        }
    }
    return iVar2;
}


/* fcn.000137b4 @ 0x137b4 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

uint64_t fcn.000137b4(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint32_t *arg1_00;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t uVar7;
    int aiStackX_8 [2];
    uint32_t auStackX_18 [4];
    uint32_t var_40h;
    uint32_t var_50h;
    uchar auStack_58 [4];
    uint32_t uStack_54;
    uint32_t uStack_50;
    uint uStack_4c;
    int64_t iStack_48;
    uint32_t uStack_40;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    int32_t var_8h;
    
    iVar6 = arg1;
    iVar5 = 0;
    uVar7 = 0;
    aiStackX_8[0] = 0x20;
    uVar3 = (**0x17098)(*(iVar6 * 0x30 + 0x179a0),auStack_58,aiStackX_8);
    if (uVar3 == 0) {
        iVar4 = fcn.000102e0(0x178a4,auStack_58,4);
        if (iVar4 == 0) {
            arg1_00 = fcn.00013470(arg1 & 0xffffffff,uStack_50);
            uVar2 = 0;
            if (0x20 < uStack_54) {
                uVar7 = uStack_54 - 0x20;
                if (uVar7 != 0) {
                    iVar5 = fcn.000126a0(uVar7);
                }
                auStackX_18[0] = uVar7;
                uVar2 = (**0x17098)(*(iVar6 * 0x30 + 0x179a0),iVar5,auStackX_18);
                if ((uVar2 == 0) && (iVar5 == 0)) {
                    uVar2 = 5;
                }
            }
            if (arg1_00 == NULL) {
                if (iVar5 != 0) {
                    (**(*0x178e8 + 0x48))(iVar5);
                }
            }
            else {
                *(arg1_00 + 2) = iVar5;
                arg1_00[1] = uVar7;
                uVar7 = uVar2;
                if (uVar2 == 0) {
                    uVar7 = uStack_40;
                }
                *arg1_00 = uVar7;
                if (iStack_48 != 0) {
                    *(arg1_00 + 4) = iStack_48;
                }
                if ((arg1_00[6] != 0) && (((*arg1_00 == 0x201 || (*arg1_00 == 0x106)) || (*arg1_00 == 0x401)))) {
                    arg1_00[7] = 1;
                    arg1_00[7] = 1;
                    if (arg1_00[8] == 0) {
                        fcn.00013470(arg1 & 0xffffffff,uStack_50);
                        fcn.000134e8(arg1_00);
                        if ((0 < arg1) && (*(iVar6 * 0x30 + 0x179b8) != 1)) {
                            piVar1 = iVar6 * 0x30 + 0x179b8;
                            *piVar1 = *piVar1 + -1;
                        }
                    }
                }
            }
            if (arg2 != 0) {
                *arg2 = CONCAT44(uStack_4c,uStack_50);
            }
            uVar3 = uVar2;
        }
        else {
            uVar3 = 8;
        }
    }
    return uVar3;
}


/* fcn.00013df4 @ 0x13df4 */

int fcn.00013df4(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iStackX_8;
    int aiStack_a8 [2];
    int64_t iStack_a0;
    uchar auStack_78 [16];
    uint uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    
    fcn.000102c0(auStack_78,100);
    fcn.000102c0(aiStack_a8,0x28);
    uStack_60 = *arg1;
    uStack_58 = *(arg1 + 8);
    uStack_68 = 0x1d;
    iVar2 = fcn.000133e0(2,aiStack_a8);
    iVar1 = fcn.000136b0(2,auStack_78,0x28,0);
    if (iVar1 == 0) {
        uVar3 = 0;
        do {
            iVar1 = fcn.000137b4(2,&iStackX_8);
            if ((iVar1 == 0) && (iStackX_8 == iVar2)) break;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 3);
        if (uVar3 == 3) {
            iVar1 = 0x1001;
        }
    }
    if (iVar1 == 0) {
        iVar1 = aiStack_a8[0];
    }
    if (iStack_a0 != 0) {
        (**(*0x178e8 + 0x48))();
    }
    return iVar1;
}


/* fcn.0001464c @ 0x1464c */

int fcn.0001464c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int aiStackY_a8 [2];
    int64_t iStackY_a0;
    int32_t in_stack_ffffffffffffff68;
    uint32_t in_stack_ffffffffffffff70;
    uchar auStack_78 [16];
    uint uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    
    fcn.000102c0(auStack_78,100);
    fcn.000102c0(aiStackY_a8,0x28);
    if ((arg3 == 0) || (arg4 == 0)) {
        iVar1 = 6;
    }
    else {
        uStack_60 = *arg2;
        uStack_58 = *(arg2 + 8);
        uStack_68 = 3;
        fcn.000133e0(arg1 & 0xffffffff,aiStackY_a8);
        iVar1 = fcn.00013fd8(arg1 & 0xffffffff,auStack_78,0x28,arg3,in_stack_ffffffffffffff68,
                             in_stack_ffffffffffffff70);
        if (iVar1 == 0) {
            iVar1 = aiStackY_a8[0];
        }
        if (iStackY_a0 != 0) {
            (**(*0x178e8 + 0x48))();
        }
    }
    return iVar1;
}


/* fcn.00016c8c @ 0x16c8c */

uint64_t fcn.00016c8c(uint32_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    char cVar4;
    uint in_register_0000000c;
    char *pcVar5;
    unkbyte7 Var7;
    ulong uVar6;
    char cVar8;
    char *pcVar9;
    uint64_t uVar10;
    int64_t iVar11;
    char *pcVar12;
    
    pcVar12 = CONCAT44(in_register_0000000c,arg1);
    uVar10 = 0;
    uVar3 = uVar10;
    if (*pcVar12 == '\0') {
code_r0x00016ce6:
        uVar3 = uVar10;
        if (*pcVar12 != '\0') {
            do {
                uVar3 = uVar3 + 1;
            } while (pcVar12[uVar3] != '\0');
            pcVar5 = pcVar12;
            if (uVar3 == 0x24) {
                do {
                    if ((*pcVar5 == '-') && (uVar3 = uVar10 - 8, (uVar3 & 0xfffffffffffffff3) == 0)) {
                        pcVar5 = pcVar5 + 1;
                    }
                    uVar1 = *pcVar5 - 0x30;
                    uVar3 = CONCAT71(uVar3 >> 8,uVar1);
                    if ((0x36 < uVar1) || (uVar3 = uVar1, (0x7e0000007e03ffU >> (uVar3 & 0x3f) & 1) == 0))
                    goto code_r0x00016dab;
                    uVar10 = uVar10 + 1;
                    pcVar5 = pcVar5 + 1;
                } while (uVar10 < 0x20);
                goto code_r0x00016d3f;
            }
        }
code_r0x00016dab:
        uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
        do {
            uVar3 = uVar3 + 1;
        } while (pcVar12[uVar3] != '\0');
        if (uVar3 != 0x20) goto code_r0x00016ce6;
        pcVar5 = pcVar12;
        do {
            if ((0x36 < *pcVar5 - 0x30U) || ((0x7e0000007e03ffU >> (*pcVar5 - 0x30U & 0x3fU) & 1) == 0))
            goto code_r0x00016ce6;
            pcVar5 = pcVar5 + 1;
            uVar3 = pcVar5 - pcVar12;
        } while (uVar3 < 0x20);
code_r0x00016d3f:
        iVar11 = 0x10;
        do {
            pcVar9 = pcVar12 + 1;
            if (*pcVar12 != '-') {
                pcVar9 = pcVar12;
            }
            cVar4 = *pcVar9;
            Var7 = pcVar5 >> 8;
            uVar6 = CONCAT71(Var7,cVar4);
            uVar3 = CONCAT71(uVar3 >> 8,cVar4 - 0x30U);
            if (cVar4 - 0x30U < 10) {
                cVar4 = cVar4 + -0x30;
            }
            else {
                uVar2 = uVar6 - 0x61;
                uVar3 = uVar2;
                if (uVar2 < 0x1a) {
                    uVar6 = CONCAT71(Var7,cVar4 + -0x20);
                }
                Var7 = uVar6 >> 8;
                cVar4 = uVar6 + -0x37;
            }
            *arg2 = cVar4 * '\x10';
            cVar8 = pcVar9[1];
            uVar10 = CONCAT71(pcVar9 >> 8,cVar8);
            uVar3 = CONCAT71(uVar3 >> 8,cVar8 - 0x30U);
            if (cVar8 - 0x30U < 10) {
                cVar8 = cVar8 + -0x30;
            }
            else {
                uVar2 = uVar10 - 0x61;
                uVar3 = uVar2;
                if (uVar2 < 0x1a) {
                    uVar10 = cVar8 - 0x20;
                }
                cVar8 = uVar10 + -0x37;
            }
            cVar8 = cVar4 * '\x10' + cVar8;
            pcVar5 = CONCAT71(Var7,cVar8);
            pcVar12 = pcVar9 + 2;
            *arg2 = cVar8;
            arg2 = arg2 + 1;
            iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        uVar3 = CONCAT71(uVar3 >> 8,1);
    }
    return uVar3;
}


/* fcn.00014338 @ 0x14338 */

int fcn.00014338(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int iVar2;
    int iStackY_a8;
    int iStackY_a4;
    ulong *puStackY_a0;
    int32_t in_stack_ffffffffffffff68;
    uint32_t in_stack_ffffffffffffff70;
    uchar auStack_78 [16];
    uint uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    
    fcn.000169b8(arg1,0x10);
    fcn.000102c0(auStack_78,100);
    fcn.000102c0(&iStackY_a8,0x28);
    if (arg2 == 0) {
        iVar2 = 6;
    }
    else {
        uStack_60 = *arg1;
        uStack_58 = *(arg1 + 8);
        uStack_68 = 0x1b;
        fcn.000133e0(1,&iStackY_a8);
        iVar2 = fcn.00013fd8(1,auStack_78,0x28,0,in_stack_ffffffffffffff68,in_stack_ffffffffffffff70);
        if ((iVar2 == 0) && (iVar2 = iStackY_a8, iStackY_a8 == 0)) {
            if ((puStackY_a0 == NULL) || (iStackY_a4 != 0x10)) {
                iVar2 = 8;
            }
            else {
                uVar1 = puStackY_a0[1];
                *arg2 = *puStackY_a0;
                *(arg2 + 8) = uVar1;
            }
            fcn.000169b8(arg2,0x10);
        }
        if (puStackY_a0 != NULL) {
            (**(*0x178e8 + 0x48))();
        }
    }
    return iVar2;
}


/* fcn.00014420 @ 0x14420 */

int fcn.00014420(int64_t arg1)

{
    int iVar1;
    int aiStackY_a8 [2];
    int64_t iStackY_a0;
    int32_t in_stack_ffffffffffffff68;
    uint32_t in_stack_ffffffffffffff70;
    uchar auStack_78 [16];
    uint uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    
    fcn.000102c0(auStack_78,100);
    fcn.000102c0(aiStackY_a8,0x28);
    uStack_60 = *arg1;
    uStack_58 = *(arg1 + 8);
    uStack_68 = 0x22;
    if (&uStack_60 != arg1) {
        section..text(&uStack_60,arg1,0x10);
    }
    fcn.000169b8(auStack_78,8);
    fcn.000133e0(1,aiStackY_a8);
    iVar1 = fcn.00013fd8(1,auStack_78,0x28,0,in_stack_ffffffffffffff68,in_stack_ffffffffffffff70);
    if (iVar1 == 0) {
        iVar1 = aiStackY_a8[0];
    }
    if (iStackY_a0 != 0) {
        (**(*0x178e8 + 0x48))();
    }
    return iVar1;
}


/* fcn.00013630 @ 0x13630 */

ulong fcn.00013630(uint32_t arg1,int64_t arg2)

{
    int64_t extraout_RAX;
    uint in_register_0000000c;
    
    if ((CONCAT44(in_register_0000000c,arg1) != 0x17910) &&
       (fcn.000102e0(CONCAT44(in_register_0000000c,arg1),0x17910,0x10), extraout_RAX != 0)) {
        return 6;
    }
    *arg2 = 0;
    return 0;
}


/* fcn.000144e0 @ 0x144e0 */

int fcn.000144e0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t *puVar6;
    int iVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    int64_t iVar10;
    int iStackY_a8;
    uint32_t uStackY_a4;
    uint32_t *puStackY_a0;
    int32_t in_stack_ffffffffffffff68;
    uint32_t in_stack_ffffffffffffff70;
    uchar auStack_78 [16];
    uint uStack_68;
    
    fcn.000102c0(auStack_78,100);
    fcn.000102c0(&iStackY_a8,0x28);
    if (*0x17900 == 1) {
        if ((arg2 == 0) || (arg3 == 0)) {
            iVar7 = 6;
        }
        else {
            uStack_68 = 0x19;
            fcn.000133e0(arg1 & 0xffffffff,&iStackY_a8);
            iVar7 = fcn.00013fd8(arg1 & 0xffffffff,auStack_78,0x18,0,in_stack_ffffffffffffff68,
                                 in_stack_ffffffffffffff70);
            puVar6 = puStackY_a0;
            if (iVar7 == 0) {
                iVar7 = iStackY_a8;
            }
            *arg3 = 0;
            *arg2 = 0;
            if (iVar7 == 0) {
                if (puStackY_a0 == NULL) {
                    return 8;
                }
                if (*puStackY_a0 != 0) {
                    iVar10 = *puStackY_a0 * 0x10;
                    if (uStackY_a4 == iVar10 + 4U) {
                        if (*puStackY_a0 == 0) {
                            iVar10 = 0;
                        }
                        else {
                            iVar10 = fcn.000126a0(iVar10);
                        }
                        if (iVar10 == 0) {
                            iVar7 = 5;
                        }
                        else {
                            uVar9 = 0;
                            if (*puVar6 != 0) {
                                do {
                                    uVar8 = uVar9;
                                    uVar9 = uVar9 + 1;
                                    puVar2 = puVar6 + uVar8 * 4 + 1;
                                    uVar3 = puVar2[1];
                                    uVar4 = puVar2[2];
                                    uVar5 = puVar2[3];
                                    puVar1 = iVar10 + uVar8 * 0x10;
                                    *puVar1 = *puVar2;
                                    puVar1[1] = uVar3;
                                    puVar1[2] = uVar4;
                                    puVar1[3] = uVar5;
                                } while (uVar9 < *puVar6);
                            }
                            *arg2 = *puVar6;
                            *arg3 = iVar10;
                        }
                    }
                    else {
                        iVar7 = 8;
                    }
                }
            }
            if (puStackY_a0 != NULL) {
                (**(*0x178e8 + 0x48))(puStackY_a0);
            }
        }
    }
    else {
        iVar7 = 1;
    }
    return iVar7;
}


/* fcn.00014710 @ 0x14710 */

int fcn.00014710(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int *arg1_00;
    int64_t arg3_00;
    int64_t *in_stack_00000028;
    uint *in_stack_00000030;
    int64_t in_stack_00000038;
    uint32_t in_stack_00000040;
    ulong uStackY_a8;
    ulong uStackY_a0;
    int32_t in_stack_ffffffffffffff68;
    uint32_t in_stack_ffffffffffffff70;
    
    fcn.000102c0(&stack0xffffffffffffff68,100);
    if ((in_stack_00000028 == NULL) || ((arg3 == 0 && (arg4 != 0)))) {
        return 6;
    }
    arg1_00 = fcn.000126a0(0x28);
    if (arg1_00 == NULL) {
        return 5;
    }
    fcn.000102c0(arg1_00,0x28);
    arg1_00[8] = 1;
    arg1_00[6] = 1;
    arg3_00 = fcn.000133e0(arg1 & 0xffffffff,arg1_00);
    iVar1 = fcn.00013fd8(arg1 & 0xffffffff,&stack0xffffffffffffff68,0x28,arg3,in_stack_ffffffffffffff68,
                         in_stack_ffffffffffffff70);
    if (iVar1 == 0) {
        iVar1 = *arg1_00;
    }
    if (*(arg1_00 + 2) != 0) {
        (**(*0x178e8 + 0x48))();
        arg1_00[2] = 0;
        arg1_00[3] = 0;
    }
    if (iVar1 == 0x304) {
        uStackY_a8 = *arg2;
        uStackY_a0 = *(arg2 + 8);
        iVar1 = fcn.0001464c(arg1 & 0xffffffff,&uStackY_a8,in_stack_00000038,in_stack_00000040);
        if (iVar1 != 0) goto code_r0x00014881;
        iVar1 = fcn.00013fd8(arg1 & 0xffffffff,&stack0xffffffffffffff68,0x28,arg3,in_stack_ffffffffffffff68,
                             in_stack_ffffffffffffff70);
        if (iVar1 == 0) {
            iVar1 = *arg1_00;
        }
        if (*(arg1_00 + 2) != 0) {
            (**(*0x178e8 + 0x48))();
            arg1_00[2] = 0;
            arg1_00[3] = 0;
        }
    }
    if (iVar1 == 0) {
        *in_stack_00000028 = arg3_00;
        fcn.0001359c(arg1 & 0xffffffff,arg1_00,arg3_00);
        return 0;
    }
code_r0x00014881:
    fcn.000135e0(arg1 & 0xffffffff,arg1_00,arg3_00);
    *in_stack_00000030 = 1;
    return iVar1;
}


/* fcn.00016794 @ 0x16794 */

uint32_t fcn.00016794(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    uint64_t *puVar1;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    if (~arg2 < *puVar1) {
        return 0x308;
    }
    return -(puVar1[2] + puVar1[1] < *puVar1 + arg2) & 0x308;
}


/* fcn.0001674c @ 0x1674c */

ulong fcn.0001674c(uint32_t arg1,uint32_t arg2)

{
    uint in_register_0000000c;
    uint in_register_00000014;
    uint64_t uVar1;
    uint64_t uVar2;
    
    uVar2 = *CONCAT44(in_register_0000000c,arg1) + CONCAT44(in_register_00000014,arg2);
    if ((((*CONCAT44(in_register_0000000c,arg1) <= ~CONCAT44(in_register_00000014,arg2)) &&
         (*(CONCAT44(in_register_0000000c,arg1) + 8) <= uVar2)) &&
        (uVar1 = -(uVar2 - *(CONCAT44(in_register_0000000c,arg1) + 8)) & 3, uVar2 <= ~uVar1)) &&
       (uVar2 = uVar2 + uVar1,
       uVar2 <= *(CONCAT44(in_register_0000000c,arg1) + 0x10) + *(CONCAT44(in_register_0000000c,arg1) + 8))) {
        *CONCAT44(in_register_0000000c,arg1) = uVar2;
        return 0;
    }
    return 0x308;
}


/* fcn.00016db4 @ 0x16db4 */

uchar fcn.00016db4(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int64_t iVar2;
    
    *(arg2 + 0x20) = 0;
    iVar2 = 0x10;
    do {
        *arg2 = (-(*arg1 >> 4 < 10) & 0xd9U) + 0x57 + (*arg1 >> 4);
        uVar1 = *arg1;
        arg1 = arg1 + 1;
        *(arg2 + 1) = (-((uVar1 & 0xf) < 10) & 0xd9U) + 0x57 + (uVar1 & 0xf);
        iVar2 = iVar2 + -1;
        arg2 = arg2 + 2;
    } while (iVar2 != 0);
    return 1;
}


/* fcn.00015508 @ 0x15508 */

int fcn.00015508(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uchar auStackY_78 [16];
    
    fcn.000102c0(auStackY_78,100);
    if (((arg3 == 0) || (arg4 == 0)) || (arg2 == 0)) {
        iVar1 = 6;
    }
    else {
        *(arg2 + 8) = 0;
        iVar1 = fcn.00013fd8(1,auStackY_78,0x20,arg3,0xf,*(arg2 + 0x10));
        if (iVar1 == 0) {
            iVar1 = *arg2;
        }
        if (*(arg2 + 0x1c) != 0) {
            iVar1 = 0x401;
        }
        if (*(arg2 + 8) != 0) {
            (**(*0x178e8 + 0x48))();
            *(arg2 + 8) = 0;
        }
    }
    return iVar1;
}


/* fcn.000155cc @ 0x155cc */

int fcn.000155cc(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int aiStackY_a8 [2];
    int64_t iStackY_a0;
    int32_t in_stack_ffffffffffffff68;
    uint32_t in_stack_ffffffffffffff70;
    uchar auStack_78 [16];
    uint uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    
    fcn.000102c0(auStack_78,100);
    fcn.000102c0(aiStackY_a8,0x28);
    if ((arg2 == 0) || (arg3 == 0)) {
        iVar1 = 6;
    }
    else {
        uStack_60 = *arg1;
        uStack_58 = *(arg1 + 8);
        uStack_68 = 2;
        fcn.000133e0(0,aiStackY_a8);
        iVar1 = fcn.00013fd8(0,auStack_78,0x28,arg2,in_stack_ffffffffffffff68,in_stack_ffffffffffffff70);
        if (iVar1 == 0) {
            iVar1 = aiStackY_a8[0];
        }
        if (iStackY_a0 != 0) {
            (**(*0x178e8 + 0x48))();
        }
    }
    return iVar1;
}


/* fcn.000152e4 @ 0x152e4 */

ulong fcn.000152e4(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    int iVar1;
    ulong uVar2;
    uint in_register_0000000c;
    uint32_t arg2_00;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uStack_28;
    uint64_t uStack_20;
    uint64_t uStack_18;
    
    if ((arg2 == 0) || (arg3 == 0)) {
        uVar2 = 6;
    }
    else {
        uVar3 = 0;
        if (arg2 < 0x289) {
            uVar2 = 0x102;
        }
        else {
            *arg3 = 0;
            uVar4 = CONCAT44(in_register_0000000c,arg1) + 0x288;
            if (-(arg2 - 0x288) - 1 < uVar4) {
                uVar2 = 0x308;
            }
            else {
                uStack_18 = arg2 - 0x288;
                arg2_00 = 0x20;
                uStack_28 = uVar4;
                uStack_20 = uVar4;
                iVar1 = fcn.00016794(&uStack_28,0x20);
                if (iVar1 == 0) {
                    uVar2 = fcn.0001674c(&uStack_28,arg2_00);
                    uVar3 = uVar4;
                }
                else {
                    uVar2 = 0x308;
                }
                if (uVar2 == 0) {
                    *arg3 = *(uVar3 + 0xc);
                    uVar2 = 0;
                }
            }
        }
    }
    return uVar2;
}


/* fcn.0001577c @ 0x1577c */

int fcn.0001577c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int *piVar2;
    uchar auStackY_78 [16];
    
    fcn.000102c0(auStackY_78,100);
    if (((arg2 != 0) && (arg3 != 0)) && (piVar2 = fcn.0001351c(1,arg1), piVar2 != NULL)) {
        piVar2[2] = 0;
        piVar2[3] = 0;
        iVar1 = fcn.00013fd8(1,auStackY_78,0x20,arg2,0x21,arg1);
        if (iVar1 == 0) {
            iVar1 = *piVar2;
        }
        if (*(piVar2 + 2) != 0) {
            (**(*0x178e8 + 0x48))();
            piVar2[2] = 0;
            piVar2[3] = 0;
        }
        fcn.0001359c(1,piVar2,arg1);
        return iVar1;
    }
    return 6;
}


/* fcn.00015390 @ 0x15390 */

//WARNING: Variable defined which should be unmapped: var_11h

uint64_t fcn.00015390(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint32_t *puVar4;
    int aiStackX_8 [2];
    int64_t iStackX_10;
    uint32_t var_67h;
    int64_t var_6fh;
    ulong uStackY_c8;
    ulong *puStackY_c0;
    int32_t in_stack_ffffffffffffff48;
    uint32_t in_stack_ffffffffffffff50;
    uchar auStack_88 [16];
    uint uStack_78;
    int64_t var_69h;
    int64_t var_61h;
    int64_t var_51h;
    int64_t var_29h;
    int32_t var_19h;
    int64_t var_11h;
    
    fcn.000102c0(auStack_88,100);
    if ((arg2 != 0) && (uVar2 = arg3, uVar2 != 0)) {
        if (uVar2 < 0x289) {
            uVar3 = 0x102;
        }
        else {
            uVar3 = fcn.00015d04(arg2 + 0x288,uVar2 - 0x288,4,&uStackY_c8);
        }
        if (uVar3 != 0) {
            return uVar3;
        }
        aiStackX_8[0] = 0;
        iStackX_10 = 0;
        uStackY_c8 = *puStackY_c0;
        puStackY_c0 = puStackY_c0[1];
        fcn.00016db4(&uStackY_c8,&stack0xffffffffffffff50);
        iVar1 = fcn.00014f24(&stack0xffffffffffffff50,aiStackX_8,&iStackX_10);
        if (iStackX_10 != 0) {
            (**(*0x178e8 + 0x48))();
        }
        if ((iVar1 == 0) && (aiStackX_8[0] != 0)) {
            return 0x305;
        }
        puVar4 = fcn.0001351c(1,arg1);
        if (puVar4 != NULL) {
            puVar4[2] = 0;
            puVar4[3] = 0;
            uStack_78 = 0x10;
            unique0x00023e00 = *(puVar4 + 4);
            uVar2 = fcn.00013fd8(1,auStack_88,0x20,arg2,in_stack_ffffffffffffff48,in_stack_ffffffffffffff50);
            if (uVar2 == 0) {
                uVar2 = *puVar4;
            }
            uVar3 = uVar2;
            if (puVar4[7] != 0) {
                uVar3 = 0x401;
            }
            if (*(puVar4 + 2) != 0) {
                (**(*0x178e8 + 0x48))();
                puVar4[2] = 0;
                puVar4[3] = 0;
            }
            fcn.0001359c(1,puVar4,arg1);
            return uVar3;
        }
    }
    return 6;
}


/* fcn.00015684 @ 0x15684 */

int fcn.00015684(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    ulong uVar2;
    int iVar3;
    int64_t arg2_00;
    int64_t noname_0;
    uint32_t uVar4;
    uint32_t uVar5;
    ulong uStack_68;
    ulong uStack_60;
    uchar auStack_58 [16];
    ulong *puStack_48;
    int iStack_38;
    
    uVar5 = arg3;
    if ((arg2 != 0) && (uVar5 != 0)) {
        if (uVar5 < 0x289) {
            iVar3 = 0x102;
        }
        else {
            iVar3 = fcn.00015d04(arg2 + 0x288,uVar5 - 0x288,3,auStack_58);
        }
        if (iVar3 == 0) {
            uVar4 = iStack_38 - arg2;
            uVar1 = *puStack_48;
            uVar2 = puStack_48[1];
            arg2_00 = fcn.0001351c(1,arg1);
            if (arg2_00 != 0) {
                noname_0 = arg1;
                iVar3 = fcn.00015508(arg1,arg2_00,arg2,uVar4);
                if (iVar3 == 0) {
                    uStack_68 = uVar1;
                    uStack_60 = uVar2;
                    iVar3 = fcn.000155cc(noname_0,&uStack_68,uVar4 + arg2,uVar5 - uVar4);
                }
                fcn.0001359c(1,arg2_00,arg1);
                return iVar3;
            }
        }
    }
    return 6;
}


/* fcn.000168f8 @ 0x168f8 */

ulong fcn.000168f8(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    int iVar2;
    ulong uVar3;
    uint32_t arg1_00;
    uint32_t uVar4;
    int64_t arg2_00;
    
    uVar4 = 0x14;
    arg1_00 = arg1;
    iVar2 = fcn.00016794(arg1_00,0x14);
    if (iVar2 == 0) {
        *arg2 = *arg1;
        uVar3 = fcn.0001674c(arg1_00,uVar4);
    }
    else {
        uVar3 = 0x308;
    }
    if (uVar3 != 0) {
        return uVar3;
    }
    uVar3 = fcn.000167c4(arg1,arg2 + 8);
    if (uVar3 != 0) {
        return uVar3;
    }
    uVar3 = fcn.000167c4(arg1,arg2 + 0x10);
    if (uVar3 == 0) {
        uVar3 = fcn.00016818(arg1,arg2 + 0x18);
        if (uVar3 != 0) {
            return uVar3;
        }
        iVar2 = fcn.00016794(arg1_00,4);
        if (iVar2 == 0) {
            puVar1 = *arg1;
            *(arg2 + 0x20) = puVar1;
            uVar4 = *puVar1;
            if (0x14 < uVar4) {
                return 0x308;
            }
            arg2_00 = uVar4 * 0x10 + 4;
            iVar2 = fcn.00016794(arg1_00,arg2_00);
            if (iVar2 == 0) {
                uVar3 = fcn.0001674c(arg1_00,arg2_00);
                return uVar3;
            }
        }
        return 0x308;
    }
    return uVar3;
}


/* fcn.00016868 @ 0x16868 */

ulong fcn.00016868(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    uint in_register_0000000c;
    uint64_t *puVar3;
    uint64_t uVar4;
    ulong uVar5;
    uint64_t arg2_00;
    uint64_t uVar6;
    
    puVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar4 = *puVar3;
    if (((puVar3[1] <= uVar4) && (uVar1 = -(uVar4 - puVar3[1]) & 7, uVar4 <= ~uVar1)) &&
       (uVar4 = uVar4 + uVar1, uVar4 <= puVar3[2] + puVar3[1])) {
        *puVar3 = uVar4;
        *arg2 = uVar4;
        uVar6 = puVar3[2] + puVar3[1];
        uVar4 = *puVar3;
        if (uVar4 <= uVar6) {
            arg2_00 = uVar6 - uVar4;
            iVar2 = fcn.00016794(arg1,arg2_00);
            uVar5 = 0;
            if (iVar2 == 0) {
                if ((~arg2_00 < uVar4) || (uVar6 < uVar4 + arg2_00)) {
                    uVar5 = 0x308;
                }
                else {
                    *puVar3 = uVar4 + arg2_00;
                }
                return uVar5;
            }
        }
    }
    return 0x308;
}


/* fcn.00016818 @ 0x16818 */

ulong fcn.00016818(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    
    iVar2 = fcn.00016794(arg1,8);
    if (iVar2 == 0) {
        uVar3 = *arg1;
        *arg2 = uVar3;
        uVar1 = *(uVar3 + 4);
        if (uVar1 < 0x801) {
            uVar3 = uVar1 + 8;
            iVar2 = fcn.00016794(arg1,uVar3);
            if (iVar2 == 0) {
                uVar4 = *arg1 + uVar3;
                if ((((*arg1 <= ~uVar3) && (*(arg1 + 8) <= uVar4)) &&
                    (uVar3 = -(uVar4 - *(arg1 + 8)) & 3, uVar4 <= ~uVar3)) &&
                   (uVar4 = uVar4 + uVar3, uVar4 <= *(arg1 + 0x10) + *(arg1 + 8))) {
                    *arg1 = uVar4;
                    return 0;
                }
                return 0x308;
            }
        }
    }
    return 0x308;
}


/* fcn.00016040 @ 0x16040 */

//WARNING: Variable defined which should be unmapped: var_30h

int64_t fcn.00016040(void)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    char cVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint8_t *puVar9;
    uint auStackX_8 [2];
    uint auStackX_10 [2];
    uchar uStackX_18;
    char cStackX_19;
    ushort uStackX_1a;
    int32_t var_40h;
    int64_t var_48h;
    int8_t var_51h;
    int16_t var_52h;
    uchar uStack_88;
    uchar uStack_87;
    char cStack_86;
    uchar auStack_84 [20];
    int iStack_70;
    uchar auStack_68 [4];
    uint8_t auStack_64 [12];
    int64_t var_50h_2;
    int32_t var_38h;
    int64_t var_30h;
    
    auStackX_10[0] = 4;
    auStackX_8[0] = 4;
    iVar1 = (**(*0x17920 + 0x10))(0,auStackX_10,4,0,0);
    if (-1 < iVar1) {
        auStackX_8[0] = 0x24;
        iVar1 = (**(*0x17920 + 8))(0,1,auStack_68,auStackX_8);
        if (-1 < iVar1) {
            fcn.000169b8(auStack_64,0x20);
            cVar6 = '\0';
            puVar9 = auStack_64;
            iVar7 = 0x20;
            do {
                uVar5 = 0;
                do {
                    uVar3 = 0;
                    if ((*puVar9 & 1 << (uVar5 & 0x1f)) != 0) {
                        uStackX_1a = 0;
                        cStackX_19 = uVar5 + cVar6;
                        uStackX_18 = 5;
                        auStackX_8[0] = 4;
                        iVar1 = (**(*0x17920 + 0x10))(0,&uStackX_18,4,0,0);
                        if (iVar1 < 0) break;
                        auStackX_8[0] = 0x20;
                        iVar1 = (**(*0x17920 + 8))(0,1,&uStack_88);
                        if (iVar1 < 0) break;
                        if (cStack_86 == '\0') {
                            do {
                                iVar8 = uVar3 * 0x1c;
                                if ((*(iVar8 + 0x17940) == '\0') &&
                                   ((auStack_84 == iVar8 + 0x17930 ||
                                    (iVar2 = fcn.000102e0(auStack_84,iVar8 + 0x17930,0x10), iVar2 == 0)))) {
                                    *(iVar8 + 0x17944) = iStack_70 + -4;
                                    *(iVar8 + 0x17940) = uStack_87;
                                }
                                uVar4 = uVar3 + 1;
                                uVar3 = uVar4;
                            } while (uVar4 < 3);
                        }
                    }
                    uVar5 = uVar5 + 1;
                } while (uVar5 < 8);
                puVar9 = puVar9 + 1;
                cVar6 = cVar6 + '\b';
                iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            uVar3 = 0;
            do {
                if (*(uVar3 * 0x1c + 0x17940) == '\0') {
                    return -0x7ffffffffffffff2;
                }
                uVar5 = uVar3 + 1;
                uVar3 = uVar5;
            } while (uVar5 < 3);
        }
    }
    return iVar1;
}


/* fcn.000167c4 @ 0x167c4 */

ulong fcn.000167c4(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t *puVar2;
    int iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    
    iVar3 = fcn.00016794(arg1,4);
    if (iVar3 == 0) {
        puVar2 = *arg1;
        *arg2 = puVar2;
        uVar1 = *puVar2;
        if (uVar1 < 0x401) {
            uVar4 = uVar1 * 4 + 4;
            iVar3 = fcn.00016794(arg1,uVar4);
            if (iVar3 == 0) {
                uVar5 = *arg1 + uVar4;
                if ((((*arg1 <= ~uVar4) && (*(arg1 + 8) <= uVar5)) &&
                    (uVar4 = -(uVar5 - *(arg1 + 8)) & 3, uVar5 <= ~uVar4)) &&
                   (uVar5 = uVar5 + uVar4, uVar5 <= *(arg1 + 0x10) + *(arg1 + 8))) {
                    *arg1 = uVar5;
                    return 0;
                }
                return 0x308;
            }
        }
    }
    return 0x308;
}


