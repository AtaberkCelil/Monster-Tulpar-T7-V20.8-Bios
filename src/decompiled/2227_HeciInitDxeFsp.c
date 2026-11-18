// decompiled by r2ghidra: 2227_HeciInitDxeFsp.pe32
// functions: 41

/* entry0 @ 0x103b4 */

void entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *arg2_00;
    uchar auStackX_8 [8];
    ulong *puStackX_10;
    ulong auStackX_18 [2];
    
    *0x12230 = *(arg2 + 0x60);
    *0x12238 = *(arg2 + 0x58);
    *0x12228 = arg2;
    fcn.0001107c();
    fcn.000102d0(1,0,0,auStackX_8);
    arg2_00 = NULL;
    iVar1 = (**(*0x12230 + 0x140))(0x12140,0,&puStackX_10);
    *0x12250 = '\0';
    if (-1 < iVar1) {
        arg2_00 = 0x12250;
        auStackX_18[0] = 0;
        (**puStackX_10)(puStackX_10);
        if (*0x12250 != '\0') {
            arg2_00 = auStackX_18;
            (*puStackX_10[1])(puStackX_10);
        }
    }
    fcn.0001045c(arg1,arg2_00);
    return;
}


/* fcn.0001107c @ 0x1107c */

int64_t fcn.0001107c(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x12248 == 0) {
        *0x12248 = 0;
        if (*(*0x12228 + 0x68) != 0) {
            piVar2 = *(*0x12228 + 0x70);
            do {
                if ((*0x120f0 == *piVar2) && (*0x120f8 == piVar2[1])) {
                    *0x12248 = (*(*0x12228 + 0x70))[uVar1 * 3 + 2];
                    return *0x12248;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x12228 + 0x68));
        }
    }
    return *0x12248;
}


/* fcn.000102d0 @ 0x102d0 */

uint64_t fcn.000102d0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.0001045c @ 0x1045c */

ulong fcn.0001045c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uStackX_8;
    int64_t iStackX_10;
    uchar auStackX_18 [16];
    
    iStackX_10 = arg1;
    if (0x1ffff < *(*0x12228 + 8)) {
        iVar1 = (**(*0x12230 + 0x170))(0x200,8,0x1051c,&iStackX_10,0x12080,auStackX_18);
        if (-1 < iVar1) {
            uStackX_8 = 0;
            (**(*0x12230 + 0x80))(&uStackX_8,0x12180,0,0);
        }
    }
    (**(*0x12230 + 0x170))(0x200,0x10,0x10540,0,0x12120,0x12220);
    return 0;
}


/* fcn.000108a8 @ 0x108a8 */

//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_bp_28h

void fcn.000108a8(void)

{
    uint8_t uVar1;
    char cVar2;
    int16_t iVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    uint32_t uVar8;
    ulong noname_1;
    uint64_t uVar9;
    ulong noname_2;
    uint32_t uVar10;
    uint32_t uVar11;
    uint64_t uStackX_18;
    int64_t iStackX_20;
    int32_t var_38h;
    int32_t var_40h;
    uint32_t var_48h;
    int64_t var_50h;
    int64_t iStack_58;
    ulong uStack_50;
    uchar auStack_48 [24];
    int64_t var_bp_28h;
    int64_t var_bp_20h;
    int64_t var_18h;
    
    uVar10 = 2;
    iVar7 = (**(*0x12230 + 0x138))(2,0x120e0,0,&uStackX_18,&iStackX_20);
    if ((-1 < iVar7) && (uVar9 = 0, uStackX_18 != 0)) {
        do {
            (**(*0x12230 + 0x98))(*(iStackX_20 + uVar9 * 8),0x120e0,&iStack_58);
            (**(iStack_58 + 8))();
            uVar9 = uVar9 + 1;
        } while (uVar9 < uStackX_18);
    }
    noname_2 = 0x1070c;
    iVar7 = (**(*0x12230 + 0x170))(0x200,8,0x1070c,0,0x12090,&uStack_50);
    if (-1 < iVar7) {
        (**(*0x12230 + 0x68))(uStack_50);
    }
    iVar3 = fcn.00010f04(0xb0002);
    uVar11 = 6;
    if (iVar3 == -1) {
        fcn.00010c14(2,0x300850e,noname_2,0x12160);
        uVar8 = 0xf;
    }
    else {
        uVar6 = fcn.00010f40(0xb0040);
        uVar5 = uVar6 & 0xf;
        if (uVar5 == 5) {
            if ((uVar6 & 0xf000) == 0) {
                uVar8 = 0;
            }
            else {
code_r0x000109cf:
                if (uVar5 == 1) {
                    uVar8 = 1;
                }
                else if (uVar5 == 6) {
                    uVar8 = uVar11;
                }
                else {
                    uVar8 = 0xf;
                    if (uVar5 == 7) {
                        uVar8 = 7;
                    }
                }
            }
        }
        else {
            if (uVar5 != 2) goto code_r0x000109cf;
            uVar8 = uVar10;
        }
        if ((uVar6 >> 0xb & 1) != 0) {
            uVar8 = uVar8 | 0x200;
        }
    }
    uVar9 = uVar8;
    if (((uVar8 == 6) && (iVar7 = fcn.00011290(), -1 < iVar7)) && (*(*0x12258 + 0x20) != NULL)) {
        uVar9 = 6;
        (**(*0x12258 + 0x20))();
    }
    cVar2 = '\0';
    iVar4 = fcn.0001135c();
    if (-1 < iVar4) {
        if (iVar4 < 3) {
            iVar7 = fcn.00011248();
            if (-1 < iVar7) {
                uVar1 = *(*0x12268 + 0x1c);
                uVar9 = 0xb0040;
                iVar4 = fcn.00010f40(0xb0040);
                if (iVar4 == -1) {
                    *(*0x12268 + 0x1c) = *(*0x12268 + 0x1c) & 0xfffffffc;
                }
                if (iVar4 == -1 || (uVar1 & 3) != 2) goto code_r0x00010aa2;
            }
            cVar2 = fcn.00010718(uVar9);
        }
        else if (iVar4 - 4U < 4) {
            cVar2 = '\x01';
        }
    }
code_r0x00010aa2:
    iVar3 = fcn.00010f04(0xb0002);
    if (iVar3 == -1) {
        fcn.00010c14(2,0x300860e,noname_2,0x12160);
        iVar7 = -0x7ffffffffffffff2;
        uVar6 = uVar11;
        goto code_r0x00010b43;
    }
    uVar6 = fcn.00010f40(0xfd010);
    if ((~(*((uVar6 & 0xfffff000) + 4) >> 0xd) & 1) == 0) {
        uVar6 = fcn.00010f40(0xb0040);
        uVar5 = uVar6 >> 0x10 & 0xf;
        if (uVar5 == 0) {
            uVar6 = 0;
        }
        else if (uVar5 == 2) {
            uVar6 = uVar10;
        }
        else if (uVar5 == 3) {
            uVar6 = 3;
        }
        else {
            if (3 < uVar5) {
                if (uVar5 < 6) goto code_r0x00010b03;
                uVar6 = 7;
                if (uVar5 == 7) goto code_r0x00010b41;
            }
            uVar6 = uVar11;
        }
    }
    else {
code_r0x00010b03:
        uVar6 = 4;
    }
code_r0x00010b41:
    iVar7 = 0;
code_r0x00010b43:
    uVar5 = fcn.00010f40(0xb0040);
    if ((iVar7 < 0) && (uVar5 == 0xffffffff)) {
        uVar6 = fcn.00011ef4();
        if (uVar6 == 0) {
            uVar6 = uVar11;
        }
        else {
            uVar5 = uVar6 >> 0x10 & 0xf;
            if (uVar5 == 0) {
                uVar6 = 0;
            }
            else if (uVar5 == 2) {
                uVar6 = uVar10;
            }
            else if (uVar5 == 3) {
                uVar6 = 3;
            }
            else {
                uVar6 = uVar11;
                if (uVar5 - 4 < 2) {
                    uVar6 = 4;
                }
            }
        }
        uVar5 = fcn.00011ef4();
    }
    if (((uVar6 == 0) || (uVar6 == 3)) && ((uVar5 & 0x10) == 0)) {
        *0xfe001048 = *0xfe001048 & 0xffefffff | 0x80000000;
    }
    else {
        *0xfe001048 = *0xfe001048 & 0xffefffff;
    }
    if (cVar2 != '\0') {
        fcn.00011124(0);
    }
    noname_1 = 0x10;
    fcn.000102b0(auStack_48,0x10);
    fcn.00010d74(0xfe000000,noname_1,CONCAT71(noname_2 >> 8,cVar2));
    return;
}


/* fcn.00011248 @ 0x11248 */

ulong fcn.00011248(void)

{
    int64_t iVar1;
    
    if (*0x12268 == 0) {
        iVar1 = fcn.0001107c();
        iVar1 = fcn.000110e8(0x12060,iVar1);
        if (iVar1 == 0) {
            return 0x8000000000000003;
        }
        *0x12268 = iVar1 + 0x18;
    }
    return 0;
}


/* fcn.00010f04 @ 0x10f04 */

ushort fcn.00010f04(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.00012010();
    iVar1 = (**(iVar1 + 0x20))(0x12190,0x200002);
    return *(iVar1 + (arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU));
}


/* fcn.00012010 @ 0x12010 */

int64_t fcn.00012010(void)

{
    if (*0x12278 == 0) {
        (**(*0x12230 + 0x140))(0x120c0,0,0x12278);
    }
    return *0x12278;
}


/* fcn.00010f40 @ 0x10f40 */

uint fcn.00010f40(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.00012010();
    iVar1 = (**(iVar1 + 0x20))(0x12190,0x200002);
    return *(iVar1 + (arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU));
}


/* fcn.00010ea8 @ 0x10ea8 */

uint8_t fcn.00010ea8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint8_t uVar2;
    
    uVar2 = fcn.00010e24(arg1);
    uVar2 = uVar2 | arg2;
    iVar1 = fcn.00012010();
    iVar1 = (**(iVar1 + 0x20))(0x12190,0x200002);
    *(iVar1 + (arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU)) = uVar2;
    return uVar2;
}


/* fcn.00010e24 @ 0x10e24 */

uchar fcn.00010e24(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.00012010();
    iVar1 = (**(iVar1 + 0x20))(0x12190,0x200002);
    return *(iVar1 + (arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU));
}


/* fcn.00010f78 @ 0x10f78 */

uint64_t fcn.00010f78(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = fcn.00012010();
    iVar1 = (**(iVar1 + 0x20))(0x12190,0x200002);
    *(iVar1 + (arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU)) = arg2;
    return arg2 & 0xffffffff;
}


/* fcn.00011124 @ 0x11124 */

void fcn.00011124(int64_t arg1)

{
    uint8_t uVar1;
    uchar uVar2;
    int16_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong in_RDX;
    uint64_t uVar6;
    int64_t arg1_00;
    int iStackX_14;
    
    uVar5 = (arg1 & 7 | 0xb0) << 0xc;
    uVar6 = uVar5;
    iVar3 = fcn.00010f04(uVar5 + 2);
    if (iVar3 != -1) {
        uVar4 = fcn.00010e24(uVar6 + 0xa0);
        if ((uVar4 & 3) == 0) {
            uVar5 = fcn.00010f40(uVar6 + 0x10);
            iStackX_14 = 0;
            uVar1 = fcn.00010f40(uVar6 + 0x10);
            if ((uVar1 & 6) == 4) {
                iStackX_14 = fcn.00010f40(uVar6 + 0x14);
            }
            arg1_00 = uVar6 + 4;
            uVar6 = CONCAT71(in_RDX >> 8,2);
            fcn.00010ea8(arg1_00,uVar6);
            if ((((uVar5 & 0xfffffff0) != 0) || (iStackX_14 != 0)) &&
               (((uVar5 & 0xfffffff0) != 0xfffffff0 || (iStackX_14 != -1)))) {
                uVar6 = CONCAT44(iStackX_14,uVar5) & 0xfffffffffffffff0;
                *(uVar6 + 0x800) = *(uVar6 + 0x800) | 4;
            }
            uVar2 = fcn.00010e24(arg1_00);
            fcn.00010e5c(arg1_00,CONCAT71(uVar6 >> 8,uVar2) & 0xfffffffffffffffd);
        }
    }
    return;
}


/* fcn.00011d00 @ 0x11d00 */

int64_t fcn.00011d00(int64_t noname_0,int64_t arg1,int64_t noname_2,int64_t arg2)

{
    int64_t iVar1;
    int64_t arg2_00;
    
    arg2_00 = arg1;
    iVar1 = fcn.00011aa0(noname_0,arg1,noname_2,arg2);
    if (iVar1 < 0) {
        fcn.00010c14(2,iVar1 & 0x1f | 0x3008100,noname_2,0x12160);
    }
    else {
        iVar1 = fcn.00011940(noname_0,arg2_00,arg1,arg2);
        if (iVar1 < 0) {
            fcn.00010c14(2,iVar1 & 0x1f | 0x3008100,arg1,0x12160);
        }
    }
    return iVar1;
}


/* fcn.00010c14 @ 0x10c14 */

ulong fcn.00010c14(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    ulong in_stack_00000028;
    
    if ((arg1 & 0xff) - 1 < 3) {
        if (*0x12240 != NULL) {
code_r0x00010c8c:
            uVar2 = (***0x12240)(arg1 & 0xffffffff,arg2 & 0xffffffff,0,arg3,in_stack_00000028);
            return uVar2;
        }
        if ((*0x12230 != 0) && (*(*0x12230 + 0x140) != NULL)) {
            iVar1 = (**(*0x12230 + 0x140))(0x12070,0,0x12240);
            if (iVar1 < 0) {
                *0x12240 = NULL;
            }
            if (*0x12240 != NULL) goto code_r0x00010c8c;
        }
    }
    return 0x8000000000000003;
}


/* fcn.000102b0 @ 0x102b0 */

int64_t fcn.000102b0(int64_t arg1,int64_t arg2)

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


/* fcn.00011290 @ 0x11290 */

uint64_t fcn.00011290(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint16_t uVar4;
    int64_t iStackX_8;
    
    uVar2 = 0;
    if (*0x12258 == 0) {
        iStackX_8 = 0;
        iVar1 = (**(*0x12230 + 0x140))(0x12100,0,&iStackX_8);
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
                    if ((*(iVar1 + 8) == *0x120a0) && (*(iVar1 + 0x10) == *0x120a8)) {
                        *0x12258 = iVar1;
                        goto code_r0x0001134e;
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
code_r0x0001134e:
    return uVar2;
}


/* fcn.00010cc4 @ 0x10cc4 */

ulong fcn.00010cc4(int64_t arg1)

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
    uStack_214 = *0x12150;
    uStack_20c = *0x12158;
    uStack_218 = 0x180014;
    if ((in_stack_00000030 != NULL) && (auStack_204 != in_stack_00000030)) {
        fcn.00010270(auStack_204,in_stack_00000030,0x18);
    }
    arg3 = 0x12160;
    if (arg1 != 0) {
        arg3 = arg1;
    }
    uVar1 = fcn.00010c14(0x90000002,0,uVar1,arg3);
    if (puStack0000000000000028 != &uStack_218) {
        (**(*0x12230 + 0x48))();
    }
    return uVar1;
}


/* fcn.00010270 @ 0x10270 */

int64_t fcn.00010270(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00010fec @ 0x10fec */

ulong fcn.00010fec(int64_t arg1)

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
    uVar2 = fcn.00010fc0(0x121c0,10);
    if (uVar5 <= uVar2) {
        return 0x8000000000000005;
    }
    if (pcVar3 <= arg1) {
        if (arg1 < pcVar3 + uVar2 + 1) {
            return 0x800000000000000f;
        }
        if (pcVar3 < arg1) goto code_r0x00011054;
    }
    if (pcVar3 < arg1 + 0x14) {
        return 0x800000000000000f;
    }
code_r0x00011054:
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


/* fcn.0001135c @ 0x1135c */

ulong fcn.0001135c(void)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    
    uVar1 = fcn.00010f40(0xb0040);
    uVar2 = fcn.00010f40(0xb0064);
    uVar3 = fcn.00010f40(0xfd010);
    if ((~(*((uVar3 & 0xfffff000) + 4) >> 0xd) & 1) == 0) {
        if ((uVar2 >> 9 & 1) != 0) {
            return 9;
        }
        uVar2 = uVar1 >> 0x10 & 0xf;
        if (uVar2 == 2) {
            return 7;
        }
        if (uVar2 == 7) {
            return 8;
        }
        if (uVar2 != 4) {
            if (uVar2 == 3) {
                return 5;
            }
            if ((uVar1 & 0xf0000) == 0x50000) {
                return 4;
            }
            if ((uVar1 & 0xf000) == 0x3000) {
                return 3;
            }
            if ((uVar1 & 0xf) == 2) {
                return 2;
            }
            if (((uVar1 & 0x20) == 0) && ((uVar1 & 0xf000) == 0)) {
                return 0;
            }
            return 1;
        }
    }
    return 6;
}


/* fcn.00010718 @ 0x10718 */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_19h

ulong fcn.00010718(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint8_t uVar4;
    ulong in_R8;
    int64_t var_fh;
    ulong uStackX_10;
    uchar auStackX_18 [3];
    int64_t var_23h;
    int64_t var_67h;
    int64_t var_6fh;
    int32_t var_77h;
    int32_t var_7bh;
    int64_t var_7fh;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    uchar auStack_50 [20];
    uchar auStack_3c [27];
    int64_t var_19h;
    int64_t var_9h;
    
    out(0x80,5);
    uVar4 = 0;
    do {
        _auStackX_18 = 0xcff;
        var_fh._1_4_ = 8;
        iVar1 = fcn.00011d00(arg1,auStackX_18,in_R8,&var_fh + 1);
        if (-1 < iVar1) {
            out(0x80,0x25);
            goto code_r0x000107c1;
        }
        uVar4 = uVar4 + 1;
    } while (uVar4 < 3);
    fcn.00010c14(2,iVar1 & 0x1f | 0x3008a00,in_R8,0x12160);
    iVar2 = &var_fh + 1;
    fcn.000102b0(iVar2,4);
    var_fh._1_4_ = CONCAT31(var_fh._2_3_,0xc);
    uStackX_10 = CONCAT44(uStackX_10._4_4_,4);
    fcn.00011d00(iVar2,&var_fh + 1,in_R8,&uStackX_10);
    out(0x80,0x85);
    var_23h._1_4_ = 0;
code_r0x000107c1:
    uStackX_10 = 0;
    (**(*0x12230 + 0x80))(&uStackX_10,0x12170,0,0);
    if (iVar1 < 0) {
        iVar2 = fcn.00011290();
        if ((-1 < iVar2) && (*(*0x12258 + 0x20) != NULL)) {
            (**(*0x12258 + 0x20))(0);
        }
        uStack_78 = *0x121a0;
        uStack_70 = *0x121a8;
        uStack_68 = *0x121b0;
        uStack_60 = *0x121b8;
        iStack_58 = iVar1;
        fcn.00010cc4(&uStack_78);
        uVar3 = 1;
    }
    else {
        if (var_23h._1_4_ == 1) {
            iVar1 = (**(*0x12230 + 0x140))(0x12130,0,&var_23h + 5);
            if (-1 < iVar1) {
                (**(stack0x00000020 + 0x18))();
            }
            fcn.00010270(auStack_3c,74000,0x10);
            fcn.00010fec(auStack_50);
            (**(*0x12238 + 0x68))(3,0,0x24,auStack_50);
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00011ef4 @ 0x11ef4 */

uint fcn.00011ef4(void)

{
    int64_t iVar1;
    uint32_t uVar2;
    char32_t *pcVar3;
    uint uVar4;
    
    iVar1 = fcn.0001107c();
    iVar1 = fcn.000110e8(0x120b0,iVar1);
    uVar4 = 0;
    if (iVar1 != 0) {
        uVar2 = 0;
        pcVar3 = L"@H`dhl";
        do {
            if (*pcVar3 == L'@') goto code_r0x00011f38;
            uVar2 = uVar2 + 1;
            pcVar3 = pcVar3 + 1;
        } while (uVar2 < 6);
        uVar2 = 0xff;
code_r0x00011f38:
        uVar4 = 0;
        if (uVar2 != 0xff) {
            uVar4 = *(iVar1 + 0x20 + uVar2 * 4);
        }
    }
    return uVar4;
}


/* fcn.00010d74 @ 0x10d74 */

uint64_t fcn.00010d74(int64_t arg1,ulong noname_1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint *in_stack_00000028;
    
    iVar1 = arg1;
    uVar2 = 0;
    *(iVar1 + 0x80) = *in_stack_00000028;
    *(iVar1 + 0x84) = in_stack_00000028[1];
    *(iVar1 + 0x88) = in_stack_00000028[2];
    *(iVar1 + 0x8c) = in_stack_00000028[3];
    *(arg1 & 0xffffffff) = (arg2 & 0xff) << 0xc | 0xa9;
    uVar3 = uVar2;
    do {
        if ((*(iVar1 + 4) & 1) == 0) {
code_r0x00010e01:
            if ((*(iVar1 + 4) & 2) != 0) {
                uVar2 = 0x8000000000000007;
            }
            return uVar2;
        }
        if (100000 < uVar3) {
            uVar2 = 0x8000000000000012;
            goto code_r0x00010e01;
        }
        fcn.00011f4c(10);
        uVar3 = uVar3 + 1;
    } while( true );
}


/* fcn.00011f4c @ 0x11f4c */

int64_t fcn.00011f4c(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t noname_0;
    int64_t in_RDX;
    uint64_t arg1_00;
    uint64_t uVar4;
    
    noname_0 = arg1;
    iVar1 = fcn.00011fac();
    iVar2 = fcn.00010260(noname_0,in_RDX);
    arg1_00 = (iVar1 * arg1) / 1000000;
    uVar4 = iVar2 + arg1_00;
    while( true ) {
        uVar3 = fcn.00010260(noname_0,arg1_00);
        if (uVar4 < uVar3) break;
        func_0x00010300();
    }
    return arg1;
}


/* fcn.00010fc0 @ 0x10fc0 */

uint64_t fcn.00010fc0(uint32_t arg1,int64_t arg2)

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


/* fcn.00010e5c @ 0x10e5c */

uchar fcn.00010e5c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = fcn.00012010();
    iVar1 = (**(iVar1 + 0x20))(0x12190,0x200002);
    *(iVar1 + (arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU)) = arg2;
    return arg2;
}


/* fcn.000110e8 @ 0x110e8 */

int16_t * fcn.000110e8(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    
    do {
        if (*arg2 == -1) {
            arg2 = 0;
code_r0x00011108:
            if ((arg2 == NULL) ||
               ((*CONCAT44(in_register_0000000c,arg1) == *(arg2 + 8) &&
                (*(CONCAT44(in_register_0000000c,arg1) + 8) == *(arg2 + 0x10))))) {
                return arg2;
            }
        }
        else if (*arg2 == 4) goto code_r0x00011108;
        arg2 = arg2 + *(arg2 + 2);
    } while( true );
}


/* fcn.00011e74 @ 0x11e74 */

void fcn.00011e74(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint64_t uVar2;
    
    if (*0x12270 == 0) {
        *0x12270 = 0xfed00000;
    }
    uVar2 = *0x12270;
    *(uVar2 + 0x10) = *(uVar2 + 0x10) | 1;
    iVar1 = *(uVar2 + 0xf0);
    *arg1 = iVar1;
    *arg2 = iVar1 + arg3 * 0x18;
    return;
}


/* fcn.00011eb0 @ 0x11eb0 */

ulong fcn.00011eb0(uint32_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    unkbyte7 Var3;
    
    uVar2 = *0x12270;
    if (*0x12270 == 0) {
        uVar2 = 0xfed00000;
        *0x12270 = 0xfed00000;
    }
    uVar1 = *(uVar2 + 0xf0);
    Var3 = uVar2 + 0xf0 >> 8;
    if (((arg2 <= arg1) || ((uVar1 < arg2 && (arg1 <= uVar1)))) &&
       ((arg1 <= arg2 || ((arg1 <= uVar1 || (uVar1 <= arg2)))))) {
        return CONCAT71(Var3,arg1 == arg2);
    }
    return CONCAT71(Var3,1);
}


/* fcn.00011200 @ 0x11200 */

ulong fcn.00011200(void)

{
    int64_t iVar1;
    
    if (*0x12260 == 0) {
        iVar1 = fcn.0001107c();
        iVar1 = fcn.000110e8(0x120d0,iVar1);
        if (iVar1 == 0) {
            return 0x8000000000000003;
        }
        *0x12260 = iVar1 + 0x18;
    }
    return 0;
}


/* fcn.0001160c @ 0x1160c */

uint64_t fcn.0001160c(ulong param_1,ulong param_2)

{
    uint8_t uVar1;
    int16_t iVar2;
    uint32_t uVar3;
    unkbyte7 Var4;
    uint64_t uVar5;
    
    Var4 = param_2 >> 8;
    iVar2 = fcn.00010f04(0xb0002);
    if (iVar2 != -1) {
        uVar3 = fcn.00010f40(0xb0010);
        uVar5 = uVar3 & 0xfffffff0;
        uVar1 = fcn.00010f40(0xb0010);
        if ((uVar1 & 6) == 4) {
            uVar3 = fcn.00010f40(0xb0014);
            uVar5 = uVar5 + (uVar3 << 0x20);
        }
        if (uVar5 != 0) {
            fcn.00010ea8(0xb0004,CONCAT71(Var4,2));
            return uVar5;
        }
    }
    return 0;
}


/* fcn.0001167c @ 0x1167c */

uint64_t fcn.0001167c(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint32_t auStackX_8 [4];
    uint32_t auStackX_18 [4];
    
    fcn.00011e74(auStackX_18,auStackX_8,arg2 & 0xffffffff);
    do {
        uVar1 = *(arg1 + 0xc);
        uVar2 = uVar1;
        if ((uVar1 & 0x10) != 0) break;
        if ((uVar1 & 8) != 0) {
            return CONCAT71(uVar1 >> 8,1);
        }
        uVar2 = fcn.00011eb0(auStackX_18[0],auStackX_8[0]);
    } while (uVar2 == '\0');
    return uVar2 & 0xffffffffffffff00;
}


/* fcn.00011d9c @ 0x11d9c */

ulong fcn.00011d9c(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong in_R8;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [6];
    
    auStackX_8[0] = arg1;
    iVar2 = fcn.0001160c();
    if (iVar2 == 0) {
        fcn.00010c14(2,0x3008707,in_R8,0x12160);
        uVar3 = 0x8000000000000007;
    }
    else {
        if ((*(iVar2 + 4) & 0x10) == 0) {
            *(iVar2 + 4) = *(iVar2 + 4) | 0x14;
        }
        uVar3 = 15000000;
        fcn.00011e74(auStackX_10,auStackX_8,15000000);
        do {
            cVar1 = fcn.00011eb0(auStackX_10[0],auStackX_8[0]);
            if (cVar1 != '\0') goto code_r0x00011e47;
        } while ((*(iVar2 + 4) & 8) != 0);
        do {
            cVar1 = fcn.00011eb0(auStackX_10[0],auStackX_8[0]);
            if (cVar1 != '\0') {
code_r0x00011e47:
                fcn.00010c14(2,0x3008712,uVar3,0x12160);
                return 0x8000000000000012;
            }
        } while ((*(iVar2 + 0xc) & 8) == 0);
        *(iVar2 + 4) = *(iVar2 + 4) & 0xffffffef | 0xc;
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.000116c0 @ 0x116c0 */

uint64_t fcn.000116c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
code_r0x00011784:
        if (uVar10 == 0) {
            uVar8 = 0x8000000000000010;
            goto code_r0x000117c3;
        }
    }
    else {
        fcn.00011e74(&stack0x00000030,auStackX_10,arg2 & 0xffffffff);
        if (uVar10 == 0) {
            do {
                iVar7 = fcn.00011200();
                if (((iVar7 < 0) || ((*(*0x12260 + 0x1c) & 1) != 0)) &&
                   (cVar5 = fcn.00011eb0(in_stack_00000030,auStackX_10[0]), cVar5 != '\0')) {
                    return 0x8000000000000012;
                }
                uVar6 = *(arg1 + 0xc);
                uVar11 = (uVar6 >> 0x10) - (uVar6 >> 8);
                uVar10 = uVar11;
                if (uVar6 >> 0x18 < uVar11) {
                    uVar10 = 0xffffffff;
                }
            } while (uVar10 == 0);
            goto code_r0x00011784;
        }
    }
    if (uVar10 != 0xffffffff) {
        uVar10 = *(arg1 + 8);
        *arg3 = uVar10;
        uVar10 = (uVar10 >> 0x10 & 0x1ff) + 3 >> 2;
        uVar8 = uVar10;
        if (uVar10 <= uVar6 >> 0x18) {
            fcn.00011e74(&stack0x00000030,auStackX_10,5000000);
            do {
                uVar3 = *(arg1 + 0xc);
                iVar7 = fcn.00011200();
                if (((iVar7 < 0) || ((*(*0x12260 + 0x1c) & 1) != 0)) &&
                   (cVar5 = fcn.00011eb0(in_stack_00000030,auStackX_10[0]), cVar5 != '\0')) {
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
                        fcn.00010270(arg4,auStackX_8,arg3_00);
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
code_r0x000117c3:
    *in_stack_00000028 = 0;
    return uVar8;
}


/* fcn.00011448 @ 0x11448 */

//WARNING: Removing unreachable block (ram,0x0001154d)

ulong fcn.00011448(ulong noname_0,ulong noname_1,int64_t arg1,int64_t arg2)

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
    int iVar12;
    uint32_t uVar13;
    char cVar14;
    
    cVar14 = arg1;
    iVar12 = fcn.0001135c();
    if (iVar12 == 0) {
        return 1;
    }
    if (iVar12 == 1) {
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
        bVar1 = true;
    }
    else if (iVar12 == 2) {
        bVar11 = true;
        bVar10 = false;
        bVar9 = false;
        bVar8 = true;
        bVar7 = false;
        bVar6 = true;
        bVar5 = false;
        bVar4 = false;
        bVar3 = false;
        bVar2 = false;
        bVar1 = false;
    }
    else if (iVar12 == 4) {
        bVar11 = false;
        bVar10 = true;
        bVar9 = false;
        bVar8 = false;
        bVar7 = false;
        bVar6 = false;
        bVar5 = false;
        bVar4 = false;
        bVar3 = false;
        bVar2 = true;
        bVar1 = true;
    }
    else if (iVar12 == 5) {
        bVar11 = false;
        bVar10 = true;
        bVar9 = false;
        bVar8 = false;
        bVar7 = false;
        bVar6 = false;
        bVar5 = true;
        bVar4 = true;
        bVar3 = true;
        bVar2 = false;
        bVar1 = true;
    }
    else if (iVar12 == 6) {
        bVar11 = false;
        bVar10 = true;
        bVar9 = false;
        bVar8 = false;
        bVar7 = false;
        bVar6 = false;
        bVar5 = true;
        bVar4 = false;
        bVar3 = false;
        bVar2 = false;
        bVar1 = true;
    }
    else if (iVar12 == 7) {
        bVar11 = true;
        bVar10 = true;
        bVar9 = false;
        bVar8 = false;
        bVar7 = true;
        bVar6 = false;
        bVar5 = false;
        bVar4 = false;
        bVar3 = false;
        bVar2 = false;
        bVar1 = true;
    }
    else if (iVar12 == 8) {
        bVar11 = true;
        bVar10 = true;
        bVar9 = true;
        bVar8 = false;
        bVar7 = false;
        bVar6 = false;
        bVar5 = false;
        bVar4 = true;
        bVar3 = false;
        bVar2 = false;
        bVar1 = true;
    }
    else {
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
    uVar13 = *arg2 & 0x7f00;
    if ((uVar13 == 0xc00) && (*arg2 == -1)) {
        return 1;
    }
    if ((uVar13 == 0x2000) && (*arg2 == -0x10)) {
        return 1;
    }
    if ((bVar1) && (*arg2 == -0x10)) {
        if (uVar13 == 0x100) {
            return 1;
        }
        if (uVar13 == 0xc00) {
            return 1;
        }
    }
    if (((bVar2) && (uVar13 == 0x400)) && (*arg2 == -0x10)) {
        return 1;
    }
    if (((bVar3) && (uVar13 == 0x300)) && (*arg2 == -0x10)) {
        return 1;
    }
    if (((bVar4) && (uVar13 == 0xb00)) && (*arg2 == '\0')) {
        return 1;
    }
    if (((bVar5) && (uVar13 == 0x1b00)) && (*arg2 == -0x10)) {
        return 1;
    }
    if (((bVar8) && (cVar14 == '\a')) && (*arg2 != '\n')) {
        return 1;
    }
    if (bVar9) {
        if ((uVar13 == 0x1e00) && (*arg2 == -0x10)) {
            return 1;
        }
        if ((uVar13 == 0x200) && (*arg2 == -0xe)) {
            return 1;
        }
    }
    if (bVar6) {
        if (cVar14 == '\t') {
            if (*arg2 != '\n') goto code_r0x000115c9;
            if (uVar13 == 0x500) {
                return 1;
            }
        }
        if (((cVar14 == '\a') && (*arg2 == -1)) && (uVar13 == 0x500)) {
            return 1;
        }
    }
code_r0x000115c9:
    if (((((!bVar10) || (uVar13 != 0x2100)) || (*arg2 != -0x10)) &&
        (((!bVar7 || (uVar13 != 0x500)) || (*arg2 != -0x10)))) &&
       (((!bVar11 || (uVar13 != 0x2300)) || (*arg2 != -0x10)))) {
        return 0;
    }
    return 1;
}


/* fcn.00011aa0 @ 0x11aa0 */

ulong fcn.00011aa0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint8_t uVar2;
    char cVar3;
    uint32_t uVar4;
    uint32_t *arg1_00;
    int64_t iVar5;
    int64_t iVar6;
    uint8_t uVar7;
    uint32_t uVar8;
    uint32_t *puVar9;
    uint32_t uVar10;
    ulong uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    int iVar14;
    uint64_t uVar15;
    ulong noname_2;
    int iVar16;
    uint64_t uVar17;
    uint32_t auStackX_18 [2];
    uint32_t auStackX_20 [2];
    uint8_t in_stack_00000028;
    
    auStackX_20[0] = CONCAT31(auStackX_20[0]._1_3_,arg4);
    auStackX_18[0] = arg3;
    iVar6 = arg2;
    arg1_00 = fcn.0001160c();
    if (arg1_00 == NULL) {
        fcn.00010c14(2,0x3008307,arg3,0x12160);
        return 0x8000000000000007;
    }
    iVar5 = fcn.00011200();
    if ((iVar5 < 0) || ((*(*0x12260 + 0x1c) & 0x20) == 0)) {
        arg3 = CONCAT71(arg3 >> 8,in_stack_00000028);
        cVar3 = fcn.00011448(arg1,iVar6,arg3,arg2);
        if (cVar3 == '\0') {
            fcn.00010c14(2,0x3008303,arg3,0x12160);
            return 0x8000000000000003;
        }
    }
    puVar9 = arg1_00;
    cVar3 = fcn.0001167c(arg1_00,15000000);
    if ((cVar3 == '\0') && (iVar6 = fcn.00011d9c(puVar9), iVar6 < 0)) {
        fcn.00010c14(2,0x3008306,arg3,0x12160);
        return 0x8000000000000006;
    }
    uVar15 = 4;
    uVar10 = in_stack_00000028;
    uVar8 = (arg1_00[1] >> 0x18) * 4;
    uVar17 = uVar8 - 4;
    uVar11 = 0xffffffff;
    while( true ) {
        iVar14 = uVar15;
        if (uVar15 <= uVar17) {
            uVar10 = uVar10 | 0x80000000;
        }
        noname_2 = 5000000;
        iVar16 = iVar14;
        if (uVar17 < uVar15) {
            iVar16 = uVar8 - 4;
        }
        uVar10 = uVar10 ^ (iVar16 << 0x10 ^ uVar10) & 0x1ff0000;
        fcn.00011e74(auStackX_18,auStackX_20,5000000);
        uVar12 = (uVar10 >> 0x10 & 0x1ff) + 3;
        uVar13 = uVar12 >> 2;
        while( true ) {
            uVar1 = arg1_00[1];
            uVar2 = uVar1 >> 0x18;
            uVar7 = (uVar1 >> 0x10) - (uVar1 >> 8);
            uVar4 = CONCAT11(uVar2,uVar7);
            puVar9 = uVar4;
            uVar4 = uVar4 & 0xff;
            if (uVar2 < uVar7) {
                uVar4 = uVar11;
            }
            if (uVar13 + 1 <= (uVar1 >> 0x18) - uVar4) break;
            iVar6 = fcn.00011200();
            if ((iVar6 < 0) || ((*(*0x12260 + 0x1c) & 1) != 0)) {
                puVar9 = auStackX_18[0];
                cVar3 = fcn.00011eb0(auStackX_18[0],auStackX_20[0]);
                if (cVar3 != '\0') {
                    uVar11 = 0x8000000000000012;
                    goto code_r0x00011cc1;
                }
            }
            uVar11 = 0xffffffff;
        }
        *arg1_00 = uVar10;
        if (uVar12 >> 2 != 0) {
            uVar15 = uVar13;
            puVar9 = (4 - iVar14) + arg2;
            do {
                uVar12 = *puVar9;
                puVar9 = puVar9 + 1;
                *arg1_00 = uVar12;
                uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
        }
        arg1_00[1] = arg1_00[1] | 4;
        if ((arg1_00[3] & 8) == 0) break;
        uVar15 = iVar14 - iVar16;
        if (iVar14 - iVar16 == 0) {
            return 0;
        }
    }
    uVar11 = 0x8000000000000006;
code_r0x00011cc1:
    fcn.00011d9c(puVar9);
    fcn.00010c14(2,uVar11 | 0x3008300,noname_2,0x12160);
    return uVar11;
}


/* fcn.00011940 @ 0x11940 */

int64_t fcn.00011940(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int64_t arg1_00;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint32_t *arg3_00;
    uint32_t auStackX_8 [2];
    int iStackX_10;
    int iStack_28;
    
    auStackX_8[0] = 0;
    iStackX_10 = *arg4;
    uVar5 = 0;
    iVar3 = arg3;
    arg1_00 = fcn.0001160c();
    if (arg1_00 == 0) {
        fcn.00010c14(2,0x3008207,iVar3,0x12160);
        iVar2 = -0x7ffffffffffffff9;
    }
    else {
        iVar2 = arg1_00;
        cVar1 = fcn.0001167c(arg1_00,15000000);
        if (cVar1 == '\0') {
            fcn.00011d9c(iVar2);
            fcn.00010c14(2,0x3008206,iVar3,0x12160);
            iVar2 = -0x7ffffffffffffffa;
        }
        else {
            do {
                arg3_00 = auStackX_8;
                iVar3 = arg1_00;
                iVar2 = fcn.000116c0(arg1_00,5000000,arg3_00,arg3 + (uVar5 & 0xfffffffffffffffc));
                if ((iVar2 < 0) && (iVar2 != -0x7ffffffffffffffb)) {
                    if (iVar2 != -0x7ffffffffffffff0) {
                        fcn.00011d9c(iVar3);
                    }
                    *arg4 = uVar5;
                    goto code_r0x00011a50;
                }
                uVar4 = uVar5 + iStack_28;
                uVar5 = uVar4;
                if (uVar4 < *arg4) {
                    iStackX_10 = *arg4 - uVar4;
                }
                else {
                    iStackX_10 = 0;
                }
            } while ((auStackX_8[0] & 0x80000000) == 0);
            *arg4 = uVar4;
            if (iVar2 < 0) {
code_r0x00011a50:
                fcn.00010c14(2,iVar2 & 0x1f | 0x3008200,arg3_00,0x12160);
            }
        }
    }
    return iVar2;
}


/* fcn.00011fac @ 0x11fac */

uint64_t fcn.00011fac(void)

{
    uint64_t uVar1;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [2];
    uint32_t auStackX_18 [4];
    
    uVar1 = 0;
    fcn.000102d0(0x15,auStackX_10,auStackX_18,auStackX_8);
    if ((auStackX_10[0] != 0) && (auStackX_18[0] != 0)) {
        uVar1 = 24000000;
        if (auStackX_8[0] != 0) {
            uVar1 = auStackX_8[0];
        }
        uVar1 = (auStackX_18[0] * uVar1 + (auStackX_10[0] >> 1)) / auStackX_10[0];
    }
    return uVar1;
}


/* fcn.00010260 @ 0x10260 */

uint64_t fcn.00010260(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    //[00] -r-x section size 7680 named .text
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010302 @ 0x10302 */

void fcn.00010302(void)

{
    return;
}


