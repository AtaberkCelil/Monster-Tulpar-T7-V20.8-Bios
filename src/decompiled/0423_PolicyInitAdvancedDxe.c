// decompiled by r2ghidra: 0423_PolicyInitAdvancedDxe.pe32
// functions: 40

/* entry0 @ 0x10474 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.00010490(arg1,arg2);
    fcn.000105cc(arg1,arg2);
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
    int64_t iStackX_8;
    ulong *puStackX_10;
    ulong uStackX_18;
    
    *0x13798 = *(arg2 + 0x60);
    *0x137a0 = *(arg2 + 0x58);
    *0x13790 = arg2;
    iStackX_8 = arg1;
    fcn.00011228();
    noname_0 = 0x12980;
    iVar3 = fcn.00011258(0x12980);
    if (iVar3 == 0) {
        uVar4 = fcn.00010420();
        fcn.000103d0();
        uVar1 = in(0x1808);
        fcn.00010350(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x00010340();
        }
        fcn.00010350(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.000103d0();
        }
        else {
            fcn.000103c0();
        }
    }
    fcn.00010360(1,0,0,&iStackX_8);
    iVar3 = (**(*0x13798 + 0x140))(0x12910,0);
    *0x137b8 = '\0';
    if (-1 < iVar3) {
        uStackX_18 = 0;
        (**puStackX_10)(puStackX_10,0x137b8);
        if ((*0x137b8 != '\0') && (iVar3 = (*puStackX_10[1])(puStackX_10,&uStackX_18), -1 < iVar3)) {
            *0x137c0 = uStackX_18;
        }
    }
    uVar4 = 0;
    if (*(*0x13790 + 0x68) != 0) {
        piVar6 = *(*0x13790 + 0x70);
        do {
            if ((*0x12930 == *piVar6) && (*0x12938 == piVar6[1])) {
                *0x137c8 = (*(*0x13790 + 0x70))[uVar4 * 3 + 2];
                return 0;
            }
            uVar4 = uVar4 + 1;
            piVar6 = piVar6 + 3;
        } while (uVar4 < *(*0x13790 + 0x68));
    }
    *0x137c8 = 0;
    return 0x800000000000000e;
}


/* fcn.000105cc @ 0x105cc */

ulong fcn.000105cc(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    bool bVar4;
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    bVar4 = *0xc00000fc != '\x04';
    iStackX_10 = arg2;
    if (bVar4) {
        iVar1 = fcn.00011130();
    }
    else {
        iVar1 = fcn.00011130();
    }
    (**(iVar1 + 0xa0))(0x22b,bVar4);
    iStackX_10 = 0xca9;
    iVar1 = fcn.0001119c(0xca9);
    uVar3 = 0;
    *0x13760 = 0;
    if (iVar1 == 0) {
        uVar3 = 0x8000000000000009;
    }
    else {
        iVar2 = (**(*0x137a0 + 0x48))(L"Setup",0x12820,0,&iStackX_10,iVar1);
        if (-1 < iVar2) {
            *0x13760 = *(iVar1 + 0x32);
        }
        fcn.00010a0c(arg1);
        fcn.00010928(arg1);
        fcn.00010828(arg1);
        *0x13768 = 0xdd02;
        iStackX_18 = arg1;
        (**(*0x13798 + 0x148))(&iStackX_18,0x12890,0x13768,0);
        fcn.00010744(arg1);
        iStackX_20 = arg1;
        iVar1 = fcn.00011130();
        (**(iVar1 + 0x30))(0x45);
        fcn.000102e0(0x137e0,0x30,0);
        *0x137e8 = 0x10c10;
        *0x137e0 = 3;
        *0x137f0 = 0x10cc4;
        *0x137f8 = 0x10cb8;
        (**(*0x13798 + 0x148))(&iStackX_20,0x12810,0x137e0,0);
        fcn.00010e88(arg1);
    }
    return uVar3;
}


/* fcn.00011228 @ 0x11228 */

int64_t fcn.00011228(void)

{
    if (*0x137b0 == 0) {
        fcn.000111c8(0x12850,0x137b0);
    }
    return *0x137b0;
}


/* fcn.000111c8 @ 0x111c8 */

ulong fcn.000111c8(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x13790;
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


/* fcn.00011258 @ 0x11258 */

void fcn.00011258(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00011228();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00011286:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00011286;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010420 @ 0x10420 */

uint64_t fcn.00010420(void)

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


/* fcn.000103d0 @ 0x103d0 */

void fcn.000103d0(void)

{
    return;
}


/* fcn.00010350 @ 0x10350 */

uint64_t fcn.00010350(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010342 @ 0x10342 */

void fcn.00010342(void)

{
    return;
}


/* fcn.000103c0 @ 0x103c0 */

void fcn.000103c0(void)

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


/* fcn.00011130 @ 0x11130 */

int64_t fcn.00011130(void)

{
    if (*0x137a8 == 0) {
        (**(*0x13798 + 0x140))(0x12790,0,0x137a8);
    }
    return *0x137a8;
}


/* fcn.0001119c @ 0x1119c */

void fcn.0001119c(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0001116c(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.00010280(arg1_00,arg1);
    }
    return;
}


/* fcn.0001116c @ 0x1116c */

ulong fcn.0001116c(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x13798 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00010280 @ 0x10280 */

int64_t fcn.00010280(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 9376 named .text
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


/* fcn.00010a0c @ 0x10a0c */

//WARNING: Variable defined which should be unmapped: var_18h

void fcn.00010a0c(int64_t arg1)

{
    int16_t *piVar1;
    uint16_t uVar2;
    int16_t iVar3;
    int64_t iVar4;
    int64_t iStackX_8;
    ulong uStackX_10;
    int64_t iStackX_18;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    uchar auStack_38 [24];
    int64_t var_18h;
    
    piVar1 = 0x129b8;
    iStackX_8 = 0;
    iVar3 = 0;
    iVar4 = 2;
    do {
        iVar3 = iVar3 + *piVar1;
        piVar1 = piVar1 + 0xc;
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    uVar2 = *0x12dd8 + 0x24 + *0x12db8 + iVar3;
    if (0x40 < uVar2) {
        fcn.00010ffc(uVar2,&iStackX_8);
    }
    iVar4 = iStackX_8;
    *(iStackX_8 + 0x18) = 1;
    fcn.000123a8(iStackX_8,0x129b0,2);
    fcn.000123a8(iVar4,0x12db0,1);
    fcn.000123a8(iVar4,0x12dd0,1);
    if (*0x13760 != '\0') {
        fcn.00011bc0(iVar4);
        if (*0xc0010000 != -1) {
            iVar4 = (**(*0x13798 + 0x140))(0x12810,0,&var_28h);
            if (iVar4 == -0x7ffffffffffffff2) {
                (**(*0x13798 + 0x50))(0x200,8,fcn.00010b78,0,&uStackX_10);
                (**(*0x13798 + 0xa8))(0x12810,uStackX_10,auStack_38);
            }
            else {
                fcn.00010b78(0,0);
            }
        }
        iVar4 = iStackX_8;
    }
    iStackX_18 = arg1;
    (**(*0x13798 + 0x148))(&iStackX_18,0x12800,iVar4,0);
    return;
}


/* fcn.00010928 @ 0x10928 */

void fcn.00010928(int64_t arg1)

{
    int64_t arg1_00;
    uint16_t uVar1;
    int64_t iStackX_8;
    
    iStackX_8 = 0;
    uVar1 = *0x12df8 + 0x24 + *0x131d8 + *0x131f8 + *0x129e8;
    if (0x40 < uVar1) {
        fcn.00010ffc(uVar1,&iStackX_8);
    }
    arg1_00 = iStackX_8;
    *(iStackX_8 + 0x18) = 1;
    fcn.000123a8(iStackX_8,0x129e0,1);
    fcn.000123a8(arg1_00,0x131f0,1);
    fcn.000123a8(arg1_00,0x131d0,1);
    fcn.000123a8(arg1_00,0x12df0,1);
    if (*0x13760 != '\0') {
        fcn.00011aa8(arg1_00);
    }
    iStackX_8 = arg1;
    (**(*0x13798 + 0x148))(&iStackX_8,0x128b0,arg1_00,0);
    return;
}


/* fcn.00010828 @ 0x10828 */

void fcn.00010828(int64_t arg1)

{
    int64_t iVar1;
    int64_t arg1_00;
    int64_t var_18h;
    int64_t var_bp_20h;
    uchar auStack_28 [2];
    int16_t var_1eh;
    int64_t var_18h_2;
    int8_t var_bp_8h;
    
    if (*0x12998 + 0x24 < 0x41) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = fcn.00010ffc(*0x12998 + 0x24,&var_bp_20h);
        if (-1 < iVar1) {
            if (&var_18h_2 != *0x12990) {
                fcn.000102a0(&var_18h_2,*0x12990,0x10);
            }
            var_18h = auStack_28;
            var_1eh = *0x12998;
            var_bp_8h = *0x1299a;
            if ((*0x12998 & 3) == 0) {
                fcn.00011050(var_bp_20h,&var_18h,auStack_28,*0x12998);
            }
            if (*0x129a0 != NULL) {
                (**0x129a0)(var_18h);
            }
            iVar1 = 0;
            *(var_bp_20h + 0x18) = 1;
            arg1_00 = var_bp_20h;
            goto code_r0x0001085c;
        }
    }
    arg1_00 = var_18h;
code_r0x0001085c:
    if (-1 < iVar1) {
        if (*0x13760 != '\0') {
            fcn.00011964(arg1_00);
        }
        var_18h = arg1;
        (**(*0x13798 + 0x148))(&var_18h,0x12880,arg1_00,0);
    }
    return;
}


/* fcn.00010744 @ 0x10744 */

void fcn.00010744(int64_t arg1)

{
    int64_t iVar1;
    ulong uStackX_8;
    int64_t aiStackX_10 [3];
    uchar auStack_3d8 [554];
    uchar uStack_1ae;
    uchar uStack_1ad;
    uchar uStack_1ac;
    uchar uStack_1ab;
    uchar uStack_1aa;
    
    fcn.00010280(0x13810,0x10);
    *0x13810 = *0x13810 | 5;
    *0x13814 = 7;
    uStackX_8 = 0x3c1;
    iVar1 = (**(*0x137a0 + 0x48))(L"CpuSetup",0x127a0,0,&uStackX_8,auStack_3d8);
    if (-1 < iVar1) {
        *0x13815 = uStack_1ae;
        *0x13816 = uStack_1ad;
        *0x13817 = uStack_1ac;
        *0x13818 = uStack_1ab;
        *0x13819 = uStack_1aa;
    }
    aiStackX_10[0] = arg1;
    (**(*0x13798 + 0x148))(aiStackX_10,0x12960,0x13810,0);
    return;
}


/* fcn.000102e0 @ 0x102e0 */

int64_t fcn.000102e0(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00010e88 @ 0x10e88 */

ulong fcn.00010e88(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t arg1_00;
    ulong uVar3;
    int64_t iStackX_8;
    int64_t iStackX_10;
    
    arg1_00 = 0;
    iStackX_8 = 0;
    if (0x40 < *0x12a02 + 0x24) {
        iVar1 = fcn.00010ffc(*0x12a02 + 0x24,&iStackX_8);
        if (-1 < iVar1) {
            fcn.000102a0(0x12a08,0x12970,0x10);
            arg1_00 = iStackX_8;
            iStackX_8 = 0x12a00;
            *(arg1_00 + 0x18) = 1;
            if ((*0x12a02 & 3) == 0) {
                iVar1 = fcn.00011050(arg1_00,&iStackX_8,0x12a00,*0x12a02);
                if (((-1 < iVar1) && (*0x12a08 == *0x12970)) && (*0x12a10 == *0x12978)) {
                    iVar2 = 4;
                    iVar1 = iStackX_8 + 0x26;
                    do {
                        *(iVar1 + -2) = 0xc2192a;
                        *(iVar1 + 2) = 0x1c0;
                        *(iVar1 + 4) = 0x1c;
                        iVar1 = iVar1 + 8;
                        iVar2 = iVar2 + -1;
                    } while (iVar2 != 0);
                    *(iStackX_8 + 0x1c) = 0;
                    *(iStackX_8 + 0x20) = 1;
                }
            }
        }
    }
    iStackX_8 = arg1;
    iVar1 = fcn.0001119c(0x20);
    if (iVar1 == 0) {
        uVar3 = 0x8000000000000009;
    }
    else {
        uVar3 = (**(*0x13798 + 0x80))(&iStackX_8,0x12950,0,iVar1);
    }
    if (*0x13760 != '\0') {
        fcn.00011f08(arg1_00);
    }
    if (arg1_00 != 0) {
        iStackX_10 = arg1;
        uVar3 = (**(*0x13798 + 0x148))(&iStackX_10,76000,arg1_00,0);
    }
    return uVar3;
}


/* fcn.00011964 @ 0x11964 */

void fcn.00011964(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_40h;
    int64_t var_38h;
    int8_t var_27h;
    int8_t var_25h;
    int8_t var_11h;
    
    var_20h = 0x36;
    iVar2 = (**(*0x137a0 + 0x48))(L"MeSetup",0x128a0,0,&var_20h,&var_38h);
    if (-1 < iVar2) {
        fcn.000110c8(arg1,0x127c0,&var_18h);
        *(var_18h + 0x1c) = *(var_18h + 0x1c) ^ (var_38h._3_1_ ^ *(var_18h + 0x1c)) & 1;
        uVar1 = (var_25h * 2 ^ *(var_18h + 0x1c)) & 2 ^ *(var_18h + 0x1c);
        *(var_18h + 0x1c) = uVar1;
        uVar1 = (var_27h << 2 ^ uVar1) & 4 ^ uVar1;
        *(var_18h + 0x1c) = uVar1;
        *(var_18h + 0x1c) = (var_11h << 3 ^ uVar1) & 8 ^ uVar1;
        *(var_18h + 0x20) = 0x115a8;
    }
    (**(*0x13798 + 0x50))(0x200,8,0x1168c,0,&var_18h);
    (**(*0x13798 + 0xa8))(0x12890,var_18h,&var_28h);
    (**(*0x13798 + 0x68))(var_18h);
    (**(*0x13798 + 0x170))(0x200,0x10,0x11898,0,0x12900,&var_40h);
    return;
}


/* fcn.000110c8 @ 0x110c8 */

ulong fcn.000110c8(uint32_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00010ffc @ 0x10ffc */

ulong fcn.00010ffc(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    
    iVar1 = fcn.0001119c(arg1 & 0xffffU);
    if (iVar1 == 0) {
        uVar2 = 0x8000000000000009;
    }
    else {
        *(iVar1 + 0x1e) = 0;
        *(iVar1 + 2) = arg1;
        *(iVar1 + 0x20) = (arg1 & 0xffffU) + -0x24;
        uVar2 = 0;
        *arg2 = iVar1;
    }
    return uVar2;
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00011050 @ 0x11050 */

ulong fcn.00011050(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint32_t uVar2;
    int64_t arg1_00;
    
    uVar2 = arg4 & 0xffff;
    if (*(arg1 + 0x20) < uVar2) {
        uVar1 = 0x8000000000000009;
    }
    else {
        arg1_00 = (*(arg1 + 2) - *(arg1 + 0x20)) + arg1;
        if (arg1_00 != arg3) {
            fcn.000102a0(arg1_00,arg3,0x1c);
        }
        *(arg1 + 0x1e) = *(arg1 + 0x1e) + 1;
        *(arg1 + 0x20) = *(arg1 + 0x20) - uVar2;
        uVar1 = 0;
        *arg2 = arg1_00;
    }
    return uVar1;
}


/* fcn.000123a8 @ 0x123a8 */

ulong fcn.000123a8(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    ulong *puVar1;
    uint64_t uVar2;
    ulong uVar3;
    uchar *puStackX_20;
    uchar auStack_38 [2];
    uint16_t uStack_36;
    uchar auStack_30 [16];
    uchar uStack_20;
    
    uVar3 = 0;
    if (arg3 != 0) {
        puVar1 = arg2 + 0x10;
        uVar2 = arg3 & 0xffff;
        do {
            fcn.00010280(auStack_38,0x1c);
            if (auStack_30 != puVar1[-2]) {
                fcn.000102a0(auStack_30,puVar1[-2],0x10);
            }
            uStack_36 = *(puVar1 + -1);
            puStackX_20 = auStack_38;
            uStack_20 = *(puVar1 + -6);
            if ((uStack_36 & 3) == 0) {
                uVar3 = fcn.00011050(arg1,&puStackX_20,auStack_38,uStack_36);
            }
            else {
                uVar3 = 0x8000000000000002;
            }
            if (*puVar1 != NULL) {
                (**puVar1)(puStackX_20);
            }
            puVar1 = puVar1 + 3;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    return uVar3;
}


/* fcn.00011aa8 @ 0x11aa8 */

ulong fcn.00011aa8(int64_t arg1)

{
    uint8_t *puVar1;
    char cVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t *puVar6;
    uint8_t *puVar7;
    int64_t iVar8;
    char *pcVar9;
    ulong uStackX_10;
    int64_t aiStackX_18 [2];
    uchar auStack_818 [1447];
    uint8_t auStack_271 [4];
    uint8_t auStack_26d [4];
    uint8_t auStack_269 [593];
    char acStack_18 [16];
    
    uStackX_10 = 0x80d;
    (**(*0x137a0 + 0x48))(L"PchSetup",0x128c0,0,&uStackX_10,auStack_818);
    fcn.000110c8(arg1,0x12730,aiStackX_18);
    puVar7 = auStack_26d;
    iVar8 = 4;
    puVar6 = aiStackX_18[0] + 0x1c;
    do {
        *puVar6 = *puVar6 ^ (puVar7[-4] ^ *puVar6) & 1;
        uVar4 = (*puVar7 * 2 ^ *puVar6) & 6 ^ *puVar6;
        *puVar6 = uVar4;
        puVar1 = puVar7 + 4;
        puVar7 = puVar7 + 1;
        *puVar6 = (*puVar1 << 3 ^ uVar4) & 8 ^ uVar4;
        puVar6 = puVar6 + 1;
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    uVar4 = *(aiStackX_18[0] + 0x2c);
    pcVar9 = acStack_18;
    uVar5 = 0;
    do {
        cVar2 = *pcVar9;
        uVar3 = uVar5;
        uVar5 = uVar5 + 1;
        pcVar9 = pcVar9 + 1;
        uVar4 = uVar4 | -(cVar2 != '\0') & 1 << (uVar3 & 0x1f);
        *(aiStackX_18[0] + 0x2c) = uVar4;
    } while (uVar5 < 0xc);
    iVar8 = fcn.000110c8(arg1,0x12840,aiStackX_18);
    if (-1 < iVar8) {
        *(aiStackX_18[0] + 0x1c) = 0x12a20;
    }
    return 0;
}


/* fcn.00011bc0 @ 0x11bc0 */

//WARNING: Variable defined which should be unmapped: var_8h

ulong fcn.00011bc0(int64_t arg1)

{
    ulong *puVar1;
    int64_t iVar2;
    char cVar3;
    uint8_t uVar4;
    uint16_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint32_t arg1_00;
    uchar *puVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint8_t uVar12;
    ulong uStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    int8_t var_198h;
    int8_t var_19ah;
    int8_t var_2edh;
    int64_t var_4c0h;
    uint32_t var_4feh;
    int64_t var_11a8h;
    int64_t var_11b0h;
    int64_t var_11b8h;
    int64_t aiStack_1268 [2];
    uchar auStack_1258 [42];
    uchar uStack_122e;
    uchar uStack_122c;
    uchar uStack_122b;
    uchar uStack_1229;
    uchar uStack_1228;
    uchar auStack_1210 [4];
    char cStack_120c;
    char cStack_120b;
    char cStack_120a;
    char cStack_1209;
    uchar uStack_11f7;
    uchar uStack_11f6;
    uchar uStack_11f5;
    uchar uStack_11f4;
    uchar uStack_11a0;
    uint8_t uStack_1000;
    uint8_t uStack_ffe;
    uchar auStack_eab [467];
    uchar auStack_cd8 [62];
    char cStack_c9a;
    int64_t var_78h;
    int8_t var_5fh;
    int8_t var_5eh;
    int8_t var_5dh;
    int8_t var_5ch;
    int8_t var_8h;
    
    iStackX_20 = 0;
    aiStack_1268[0] = 0;
    iStackX_18 = 0;
    arg1_00 = arg1;
    fcn.000110c8(arg1_00,0x127e0,&iStackX_20);
    fcn.000110c8(arg1_00,0x12940,aiStack_1268);
    fcn.000110c8(arg1_00,0x127d0,&iStackX_18);
    uStackX_10 = 0xca9;
    fcn.00010280(auStack_cd8,0xca9);
    (**(*0x137a0 + 0x48))(L"Setup",0x12820,0,&uStackX_10,auStack_cd8);
    uStackX_10 = 0x578;
    iVar6 = (**(*0x137a0 + 0x48))(L"SaSetup",0x128f0,0,&uStackX_10,auStack_1258);
    iVar7 = fcn.00011130();
    cVar3 = (**(iVar7 + 0x30))(0x119);
    iVar8 = aiStack_1268[0];
    iVar2 = iStackX_20;
    iVar7 = iStackX_18;
    if (cVar3 != '\0') {
        **(iStackX_18 + 0x1c) = 0xa2;
        *(*(iStackX_18 + 0x1c) + 1) = 0xa0;
        *(*(iStackX_18 + 0x1c) + 2) = 0xa2;
        *(*(iStackX_18 + 0x1c) + 3) = 0xa0;
    }
    *(iStackX_18 + 0x28) = 0x11bbc;
    *(iStackX_18 + 0x30) = 0x11bbc;
    if (-1 < iVar6) {
        iVar11 = 4;
        puVar9 = aiStack_1268[0] + 0x1c;
        iVar6 = -puVar9;
        do {
            *puVar9 = puVar9[auStack_1210 + iVar6];
            puVar9 = puVar9 + 1;
            iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        uVar12 = 0;
        while( true ) {
            cVar3 = fcn.00012284();
            if (((cVar3 == '\0') || (cVar3 == '\x01')) || (uVar4 = 1, cVar3 != '\x02')) {
                uVar4 = 3;
            }
            if (uVar4 <= uVar12) break;
            uVar10 = uVar12;
            uVar12 = uVar12 + 1;
            *(iVar8 + 0x29 + uVar10 * 8) = auStack_eab[uVar10];
        }
        if (cStack_120c == '\x01') {
            *(iVar8 + 0x20) = uStack_11f7;
        }
        if (cStack_120b == '\x01') {
            *(iVar8 + 0x21) = uStack_11f6;
        }
        if (cStack_120a == '\x01') {
            *(iVar8 + 0x22) = uStack_11f5;
        }
        if (cStack_1209 == '\x01') {
            *(iVar8 + 0x23) = uStack_11f4;
        }
        *(iVar2 + 0x29) = uStack_1228;
        *(iVar2 + 0x2a) = uStack_1229;
        *(iVar2 + 0x2b) = uStack_122e;
        *(iVar2 + 0x50) = uStack_122c;
        *(iVar2 + 0x51) = uStack_122b;
        *(iVar2 + 0x52) = uStack_1229;
        *(iVar2 + 0x54) = uStack_11a0;
        *(iVar2 + 0x2c) = *(iVar2 + 0x2c) | uStack_1000 << 6;
        *(iVar2 + 0x2c) = *(iVar2 + 0x2c) | uStack_ffe << 7;
    }
    iVar8 = 0;
    iVar6 = 2;
    do {
        fcn.00010280(*(iVar8 + *(iVar7 + 0x38)),4);
        iVar8 = iVar8 + 8;
        iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar8 = fcn.00011258(0x12870);
    if (iVar8 != 0) {
        if ((iVar8 != -0x18) && ((*(iVar8 + 0x1b) == '\x1e' || (*(iVar8 + 0x1b) == '#')))) {
            iVar8 = 0;
            do {
                *(iVar8 + **(iVar7 + 0x38)) = 1;
                iVar8 = iVar8 + 1;
            } while (iVar8 < 4);
            iVar8 = 0;
            do {
                *(iVar8 + *(*(iVar7 + 0x38) + 8)) = 1;
                iVar8 = iVar8 + 1;
            } while (iVar8 < 4);
        }
        iVar8 = fcn.00011130();
        uVar5 = (**(iVar8 + 0x10))(0x1d);
        if ((uVar5 < 0x3f) && ((0x7c00c3d000000000U >> (uVar5 & 0x3f) & 1) != 0)) {
            iVar8 = 0;
            do {
                puVar1 = iVar8 + *(iVar7 + 0x38);
                iVar8 = iVar8 + 8;
                **puVar1 = 3;
            } while (iVar8 < 0x10);
        }
        else {
            iVar8 = 0;
            do {
                puVar1 = iVar8 + *(iVar7 + 0x38);
                iVar8 = iVar8 + 8;
                **puVar1 = 1;
            } while (iVar8 < 0x10);
        }
        if (cStack_c9a == '\0') {
            *(iVar2 + 0x28) = *(iVar2 + 0x28) | 3;
        }
        else {
            *(iVar2 + 0x28) = *(iVar2 + 0x28) & 0xfe;
        }
        *(iVar2 + 0x2c) = 0;
        iVar7 = fcn.00011258(0x12720);
        if (iVar7 != 0) {
            if (*(iVar7 + 0x19) == '\x01') {
                iVar7 = fcn.00011130();
                (**(iVar7 + 0xa0))(0x22a,1);
            }
            return 0;
        }
    }
    return 0x800000000000000e;
}


/* fcn.00010b78 @ 0x10b78 */

void fcn.00010b78(void)

{
    int64_t iVar1;
    int64_t var_20h_2;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    iVar1 = (**(*0x13798 + 0x140))(0x12800,0,&var_18h);
    if (-1 < iVar1) {
        fcn.000110c8(var_18h,0x127e0,&var_10h);
        var_28h = 0;
        iVar1 = (**(*0x13798 + 0x140))(0x12810,0,&var_28h);
        if ((-1 < iVar1) && (var_28h != 0)) {
            var_20h = 0;
            var_20h_2._0_4_ = 0;
            (**(var_28h + 0x10))(&var_20h,&var_20h_2);
            *(var_10h + 0x20) = var_20h;
            *(var_10h + 0x1c) = var_20h_2;
        }
    }
    return;
}


/* fcn.00011f08 @ 0x11f08 */

int64_t fcn.00011f08(int64_t arg1)

{
    uchar *puVar1;
    ushort uVar2;
    uchar uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ushort *puVar6;
    uchar *puVar7;
    ushort *puVar8;
    int64_t iVar9;
    ulong uStackX_10;
    uchar *puStackX_18;
    int64_t iStackX_20;
    int8_t var_6e1h;
    int8_t var_6e6h;
    int64_t var_6fah;
    int8_t var_706h;
    int64_t var_727h;
    int8_t var_7a7h;
    int16_t var_7a8h;
    int8_t var_8e0h;
    int16_t var_8e1h;
    int32_t var_8e3h;
    int16_t var_8e7h;
    int8_t var_8e9h;
    int8_t var_a09h;
    uint32_t var_a0ah;
    int8_t var_a1fh;
    int64_t var_bf0h;
    uint32_t var_c6dh;
    int64_t var_1188h;
    int64_t var_1190h;
    int64_t var_1198h;
    ulong auStack_1248 [2];
    uchar auStack_1238 [1953];
    uint8_t uStack_a97;
    uint8_t uStack_a92;
    uchar auStack_a86 [2];
    ushort auStack_a84 [3];
    uchar auStack_a7e [2];
    ushort auStack_a7c [2];
    uchar auStack_a78 [6];
    uchar uStack_a72;
    uchar auStack_a63 [6];
    ushort auStack_a5d [6];
    uchar auStack_a51 [6];
    ushort auStack_a4b [6];
    uchar auStack_a3f [110];
    uchar uStack_9d1;
    ushort uStack_9d0;
    uint8_t uStack_898;
    uint16_t uStack_897;
    int iStack_895;
    ushort uStack_891;
    uint8_t uStack_88f;
    uint8_t uStack_76f;
    char cStack_76e;
    char cStack_759;
    uchar auStack_588 [125];
    char cStack_50b;
    
    puStackX_18 = NULL;
    iStackX_20 = 0;
    auStack_1248[0] = 0xca9;
    iVar4 = (**(*0x137a0 + 0x48))(L"Setup",0x12820,0,auStack_1248,auStack_1238);
    if (-1 < iVar4) {
        auStack_1248[0] = 0x578;
        iVar4 = (**(*0x137a0 + 0x48))(L"SaSetup",0x128f0,0,auStack_1248,auStack_588);
        if (-1 < iVar4) {
            if (arg1 != 0) {
                fcn.000110c8(arg1,0x12970,&iStackX_20);
                if (iStackX_20 != 0) {
                    puVar7 = auStack_a51;
                    iVar4 = 4;
                    puVar8 = auStack_a4b;
                    puVar6 = iStackX_20 + 0x26;
                    do {
                        *(puVar6 + -1) = puVar7[-0x12];
                        *puVar6 = puVar8[-9];
                        *(puVar6 + -1) = *puVar7;
                        uVar2 = *puVar8;
                        puVar8 = puVar8 + 1;
                        puVar6[1] = uVar2;
                        puVar1 = puVar7 + 0x12;
                        puVar7 = puVar7 + 1;
                        *(puVar6 + 2) = *puVar1;
                        puVar6 = puVar6 + 4;
                        iVar4 = iVar4 + -1;
                    } while (iVar4 != 0);
                    if ((cStack_76e == '\0') || (cStack_50b == '\0')) {
                        uVar3 = 0;
                    }
                    else {
                        uVar3 = 1;
                    }
                    *(iStackX_20 + 0x1c) = uVar3;
                    uVar5 = fcn.00010420();
                    fcn.000103d0();
                    out(0x72,0x72);
                    uVar3 = in(0x73);
                    uStackX_10 = CONCAT71(uStackX_10._1_7_,uVar3);
                    if ((uVar5 >> 9 & 1) != 0) {
                        fcn.000103c0();
                    }
                    if ((cStack_759 == '\0') || ((cStack_759 == '\x02' && (uStackX_10 == '\0')))) {
                        *(iStackX_20 + 0x20) = uStack_9d1;
                    }
                    else {
                        *(iStackX_20 + 0x20) = 1;
                    }
                    *(iStackX_20 + 0x22) = uStack_9d0;
                    *(iStackX_20 + 0x44) = uStack_a72;
                }
            }
            (**(*0x13798 + 0x140))(0x12950,0,&puStackX_18);
            if (puStackX_18 != NULL) {
                puVar7 = auStack_a7e;
                puVar6 = auStack_a7c;
                iVar9 = 2;
                iVar4 = 0;
                while( true ) {
                    puStackX_18[iVar4 + 0x10] = puVar7[-8];
                    *(puStackX_18 + iVar4 + 0x12) = puVar6[-4];
                    puStackX_18[iVar4 + 0x11] = *puVar7;
                    uVar2 = *puVar6;
                    puVar6 = puVar6 + 1;
                    *(puStackX_18 + iVar4 + 0x14) = uVar2;
                    puVar1 = puVar7 + 6;
                    puVar7 = puVar7 + 1;
                    puStackX_18[iVar4 + 0x16] = *puVar1;
                    iVar9 = iVar9 + -1;
                    if (iVar9 == 0) break;
                    iVar4 = iVar4 + 8;
                }
                if ((cStack_76e == '\0') || (cStack_50b == '\0')) {
                    uVar3 = 0;
                }
                else {
                    uVar3 = 1;
                }
                *puStackX_18 = uVar3;
                *(puStackX_18 + 4) = *(puStackX_18 + 4) ^ (uStack_a97 * 2 ^ *(puStackX_18 + 4)) & 2;
                *(puStackX_18 + 4) = *(puStackX_18 + 4) ^ (uStack_a92 ^ *(puStackX_18 + 4)) & 1;
                *(puStackX_18 + 4) = *(puStackX_18 + 4) ^ (uStack_898 << 2 ^ *(puStackX_18 + 4)) & 4;
                *(puStackX_18 + 8) = *(puStackX_18 + 8) ^ (uStack_76f << 0x11 ^ *(puStackX_18 + 8)) & 0x20000;
                *(puStackX_18 + 4) = uStack_897 << 3 | *(puStackX_18 + 4) & 0xfff80007;
                *(puStackX_18 + 4) = *(puStackX_18 + 4) ^ (iStack_895 << 0x13 ^ *(puStackX_18 + 4)) & 0x80000;
                *(puStackX_18 + 8) = uStack_891;
                *(puStackX_18 + 8) = *(puStackX_18 + 8) ^ (uStack_88f << 0x10 ^ *(puStackX_18 + 8)) & 0x10000;
            }
            uStackX_10 = 0;
            (**(*0x13798 + 0x140))(0x12950,0,&uStackX_10);
            iVar4 = 0;
        }
    }
    return iVar4;
}


/* fcn.00012578 @ 0x12578 */

ulong fcn.00012578(int64_t arg1)

{
    int16_t iVar1;
    uint32_t uVar2;
    uint uVar3;
    
    iVar1 = fcn.00012478();
    if ((iVar1 == -0x7f7a) && (uVar2 = fcn.000124f8(), uVar2 != 0xffffffff)) {
        if ((uVar2 & 0xf) == 0xf) {
            *arg1 = 0xf;
        }
        else {
            uVar2 = uVar2 >> 0x10 & 0xf;
            if (uVar2 == 0) {
                *arg1 = 0;
            }
            else if (uVar2 == 2) {
                *arg1 = 2;
            }
            else if (uVar2 == 3) {
                *arg1 = 3;
            }
            else {
                uVar3 = 6;
                if (uVar2 - 4 < 2) {
                    uVar3 = 4;
                }
                *arg1 = uVar3;
            }
        }
        return 0;
    }
    return 0x8000000000000007;
}


/* fcn.00012644 @ 0x12644 */

int64_t fcn.00012644(void)

{
    int64_t iVar1;
    uint32_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    
    iVar1 = (**(*0x13798 + 0x140))(0x12750,0,&var_28h);
    if (-1 < iVar1) {
        iVar1 = (**(var_28h + 0x40))(&var_10h);
        if ((iVar1 < 0) || (var_10h != 0)) {
            iVar1 = -0x7ffffffffffffffd;
        }
        else {
            fcn.00010280(&var_20h,8);
            var_20h._0_4_ = 0x1b0a;
            var_20h._4_1_ = 0xff;
            var_18h._0_4_ = 4;
            iVar1 = (**var_28h)(0,&var_20h,8,&var_18h,0,9);
            if ((-1 < iVar1) &&
               ((((var_20h & 0x7f00) != 0x1b00 || ((var_20h >> 0xf & 1) == 0)) || ((var_20h & 0xff000000) != 0)))) {
                iVar1 = -0x7ffffffffffffff9;
            }
        }
    }
    return iVar1;
}


/* fcn.00012284 @ 0x12284 */

ulong fcn.00012284(void)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uchar uVar3;
    uint32_t auStackX_8 [8];
    
    fcn.00010360(1,auStackX_8,0,0);
    uVar3 = 4;
    if ((auStackX_8[0] & 0xfff0ff0) == 0x906a0) {
        if (*0xc0000002 < 0x4622) {
            uVar2 = *0xc0000002 - 0x4601;
            if ((*0xc0000002 - 0x4601 & 0xffffffdf) != 0) {
                if (*0xc0000002 != 0x4602) {
                    if (*0xc0000002 == 0x4609) goto code_r0x0001239f;
                    uVar1 = *0xc0000002 - 0x460a;
                    uVar2 = uVar1;
                    if ((0xd < uVar1) || ((0x2401U >> (uVar1 & 0x1f) & 1) == 0)) {
                        if (*0xc0000002 == 0x4619) goto code_r0x0001239f;
                        uVar2 = *0xc0000002 - 0x461a;
                        if (2 < *0xc0000002 - 0x461a) goto code_r0x000122e3;
                    }
                }
code_r0x000122e1:
                uVar3 = 2;
                goto code_r0x000122e3;
            }
        }
        else {
            uVar2 = 0;
            if (*0xc0000002 == 0x4622) goto code_r0x000122e1;
            if (((((*0xc0000002 != 0x4629) && (*0xc0000002 != 0x4641)) && (*0xc0000002 != 0x4645)) &&
                ((*0xc0000002 != 0x4649 && (*0xc0000002 != 0x4659)))) && (*0xc0000002 != 0x4661)) goto code_r0x000122e3;
        }
    }
    else {
        uVar1 = (auStackX_8[0] & 0xfff0ff0) - 0xb06a0;
        uVar2 = uVar1;
        if (uVar1 != 0) {
            if (uVar1 != 0x40) goto code_r0x000122e3;
            uVar2 = *0xc0000002;
            if ((*0xc0000002 != 0x4614) && (uVar1 = *0xc0000002 - 0x4617, uVar2 = uVar1, (uVar1 & 0xfffffffa) != 0))
            goto code_r0x000122e3;
            goto code_r0x000122e1;
        }
        uVar2 = *0xc0000002;
        if (*0xc0000002 < 0xa706) goto code_r0x000122e3;
        if (0xa70b < *0xc0000002) {
            uVar1 = *0xc0000002 - 0xa715;
            uVar2 = uVar1;
            if ((7 < uVar1) || ((0xc3U >> (uVar1 & 0x1f) & 1) == 0)) goto code_r0x000122e3;
        }
    }
code_r0x0001239f:
    uVar3 = 0;
code_r0x000122e3:
    return CONCAT71(uVar2 >> 8,uVar3);
}


/* fcn.000112a4 @ 0x112a4 */

ulong fcn.000112a4(void)

{
    char cVar1;
    int64_t iVar2;
    int64_t iStackX_8;
    ulong auStackX_10 [3];
    
    cVar1 = *0x137b8;
    if (*0x137b8 == '\0') {
        iVar2 = (**(*0x13798 + 0x140))(0x128d0,0,&iStackX_8);
    }
    else if (*0x137c0 == 0) {
        iVar2 = -0x7fffffffffffffe8;
    }
    else {
        iVar2 = (**(*0x137c0 + 0xd0))(0x127b0,0,&iStackX_8);
    }
    if (iVar2 < 0) {
        if (cVar1 == '\0') {
            (**(*0x13798 + 0x140))(0x12750,0,&iStackX_8);
        }
        auStackX_10[0] = 0;
    }
    else {
        (**(iStackX_8 + 0x70))(iStackX_8,auStackX_10,0,0,0);
    }
    return auStackX_10[0];
}


/* fcn.0001134c @ 0x1134c */

ulong fcn.0001134c(void)

{
    char cVar1;
    int64_t iVar2;
    int64_t iStackX_8;
    ulong auStackX_10 [3];
    
    cVar1 = *0x137b8;
    if (*0x137b8 == '\0') {
        iVar2 = (**(*0x13798 + 0x140))(0x128d0,0,&iStackX_8);
    }
    else if (*0x137c0 == 0) {
        iVar2 = -0x7fffffffffffffe8;
    }
    else {
        iVar2 = (**(*0x137c0 + 0xd0))(0x127b0,0,&iStackX_8);
    }
    if (iVar2 < 0) {
        if (cVar1 == '\0') {
            (**(*0x13798 + 0x140))(0x12750,0,&iStackX_8);
        }
        auStackX_10[0] = 0;
    }
    else {
        (**(iStackX_8 + 0x70))(iStackX_8,0,auStackX_10,0,0);
    }
    return auStackX_10[0];
}


/* fcn.000113f4 @ 0x113f4 */

ulong fcn.000113f4(void)

{
    char cVar1;
    int64_t iVar2;
    int64_t iStackX_8;
    ulong auStackX_10 [3];
    
    cVar1 = *0x137b8;
    if (*0x137b8 == '\0') {
        iVar2 = (**(*0x13798 + 0x140))(0x128d0,0,&iStackX_8);
    }
    else if (*0x137c0 == 0) {
        iVar2 = -0x7fffffffffffffe8;
    }
    else {
        iVar2 = (**(*0x137c0 + 0xd0))(0x127b0,0,&iStackX_8);
    }
    if (iVar2 < 0) {
        if (cVar1 == '\0') {
            (**(*0x13798 + 0x140))(0x12750,0,&iStackX_8);
        }
        auStackX_10[0] = 0x16;
    }
    else {
        (**(iStackX_8 + 0x70))(iStackX_8,0,0,auStackX_10,0);
    }
    return auStackX_10[0];
}


/* fcn.00012478 @ 0x12478 */

ushort fcn.00012478(void)

{
    uint8_t uVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    
    iVar4 = fcn.000112a4();
    if (iVar4 == 0) {
        uVar1 = fcn.0001134c();
        uVar3 = fcn.000113f4();
        uVar5 = uVar3 & 0x1f | uVar1 << 5;
    }
    else {
        uVar2 = fcn.000112a4();
        uVar1 = fcn.0001134c();
        uVar3 = fcn.000113f4();
        uVar5 = uVar3 & 0x1f | (uVar1 | uVar2 << 0xc) << 5;
    }
    return *((uVar5 << 0xb & 0x10000000 | (uVar5 & 0x1ffff) << 0xf) + 0xc0000000);
}


/* fcn.000124f8 @ 0x124f8 */

uint fcn.000124f8(void)

{
    uint8_t uVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    
    iVar4 = fcn.000112a4();
    if (iVar4 == 0) {
        uVar1 = fcn.0001134c();
        uVar3 = fcn.000113f4();
        uVar5 = uVar3 & 0x1f | uVar1 << 5;
    }
    else {
        uVar2 = fcn.000112a4();
        uVar1 = fcn.0001134c();
        uVar3 = fcn.000113f4();
        uVar5 = uVar3 & 0x1f | (uVar1 | uVar2 << 0xc) << 5;
    }
    return *((uVar5 << 0xb & 0x10000000 | (uVar5 & 0x1ffff) << 0xf | 0x40) + 0xc0000000);
}


