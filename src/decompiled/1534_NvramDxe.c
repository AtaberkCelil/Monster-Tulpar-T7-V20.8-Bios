// decompiled by r2ghidra: 1534_NvramDxe.pe32
// functions: 180

/* entry0 @ 0x111b0 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.000111f0(arg1,arg2);
    iVar1 = fcn.00012154(arg1,arg2);
    if (iVar1 < 0) {
        fcn.00011610(arg1,arg2);
    }
    return iVar1;
}


/* fcn.000111f0 @ 0x111f0 */

//WARNING: Variable defined which should be unmapped: var_10h

void fcn.000111f0(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong ****ppppuVar4;
    char cVar5;
    uint32_t uVar6;
    int iVar7;
    int64_t iVar8;
    uint32_t uVar9;
    ulong noname_0;
    ulong ****ppppuStackX_8;
    int64_t *piStackX_10;
    int64_t var_38h;
    uchar auStack_38 [16];
    int64_t var_10h;
    
    *0x21bf8 = *(arg2 + 0x58);
    *0x21bf0 = *(arg2 + 0x60);
    *0x21be8 = arg2;
    *0x21c00 = *0x21bf8;
    *0x21c18 = *0x21bf0;
    ppppuStackX_8 = arg1;
    (**(*0x21bf0 + 0x50))(0x201,8,0x19f70,0,0x21c08);
    (**(*0x21c18 + 0x50))(0x60000202,8,0x19f7c,0,0x21c10);
    fcn.0001a004();
    noname_0 = 0x207f0;
    iVar8 = fcn.0001a034(0x207f0);
    if (iVar8 == 0) {
        cVar5 = fcn.0001dec0();
        uVar6 = in(0x1808);
        fcn.000110d0(noname_0,0x1808);
        while( true ) {
            iVar7 = in(0x1808);
            uVar9 = ((uVar6 & 0xffffff) + 0x16b) - iVar7;
            if ((uVar9 >> 0x17 & 1) != 0) break;
            func_0x000110c0();
        }
        fcn.000110d0(uVar9,0x1808);
        if (cVar5 == '\0') {
            fcn.00011120();
        }
        else {
            fcn.00011110();
        }
    }
    if (*0x21c30 == NULL) {
        *0x21e40 = 0x2000;
        iVar8 = (**(*(arg2 + 0x60) + 0x40))(4,0x2000,0x21c30);
        if (iVar8 < 0) {
            *0x21c30 = NULL;
        }
    }
    *0x21e30 = *0x21bf8;
    (**(*0x21bf0 + 0x50))(0x60000202,0x10,0x1a084,0,0x21e28);
    (**(*0x21bf0 + 0x50))(0x201,0x10,0x1a080,0,0x21e38);
    fcn.0001a098();
    (**(*0x21bf0 + 0x170))(0x200,0x10,0x1a0f8,0,0x20230,0x21e18);
    (**(*0x21bf0 + 0x170))(0x200,0x10,0x1a120,0,0x201e0,0x21e20);
    fcn.000110e0(1,0,0,&ppppuStackX_8);
    *0x21cb8 = 0x10000;
    if (*0x21ca8 == NULL) {
        iVar8 = (**(*0x21bf0 + 0x40))(6,0x10000,&piStackX_10);
        *0x21ca8 = piStackX_10;
        if (iVar8 < 0) {
            *0x21ca8 = NULL;
        }
        piStackX_10 = *0x21ca8;
        if (*0x21ca8 == NULL) goto code_r0x00011481;
    }
    uVar3 = *0x21cb8;
    piVar2 = *0x21ca8;
    if (0x37 < *0x21cb8) {
        piVar1 = *0x21ca8 + 5;
        (*0x21ca8)[2] = 0;
        *piVar2 = piVar1;
        piVar2[4] = piVar1;
        piVar2[1] = uVar3 - 0x28;
        piVar2[3] = piVar2 + (uVar3 - 0x10);
    }
code_r0x00011481:
    (**(*0x21bf8 + 0x18))(auStack_38,0);
    section..text(0x20820,auStack_38,0x10);
    (**(*0x21bf0 + 0x50))(0x60000202,8,0x1a5a0,0,0x21cb0);
    iVar8 = (**(*0x21bf0 + 0x140))(0x20220,0,0x21ce8);
    if (((iVar8 < 0) || ((***0x21ce8)(*0x21ce8,0x21cd8), *0x21cd8 == '\0')) ||
       (iVar8 = (*(*0x21ce8)[1])(*0x21ce8,0x21d90), iVar8 < 0)) {
        (**(*0x21bf0 + 0x50))(0x201,8,0x1ab1c,0,0x21cd0);
        (**(*0x21bf0 + 0x50))(0x60000202,8,0x1ab38,0,0x21cc0);
    }
    else {
        ppppuStackX_8 = NULL;
        (**(*0x21d90 + 0xc0))(0x20100,0x1ab00,&ppppuStackX_8);
    }
    fcn.00019fa4(0x20240,0x21cf0);
    ppppuVar4 = *0x21e00;
    (**(*0x21bf0 + 0x50))(0x200,0x10,0x1bf20,0,&piStackX_10);
    ppppuStackX_8 = &ppppuStackX_8;
    if (ppppuVar4 != NULL) {
        ppppuStackX_8 = ppppuVar4;
    }
    (**(*0x21bf0 + 0xa8))(0x200b0,piStackX_10);
    return;
}


/* fcn.00012154 @ 0x12154 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

int64_t fcn.00012154(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong uStackX_8;
    int64_t iStackX_10;
    uchar auStackX_18 [8];
    uchar auStackX_20 [8];
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    uchar *puVar4;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_18h;
    int8_t var_10h;
    
    iStackX_10 = 0;
    if (*0x21c60 == 0) {
        *0x21c50 = *(arg2 + 0x60);
        *0x21c58 = *(arg2 + 0x58);
        *0x21c48 = arg1;
        *0x21c60 = arg2;
    }
    *0x22548 = arg1;
    *0x22550 = arg2;
    fcn.0001a190();
    fcn.0001a290();
    *0x21c68 = *0x21c68 + 1;
    *0x21c78 = *0x21c78 + 1;
    (**(*0x21c50 + 0x50))(0x201,8,0x1a3cc,0x11c40,&uStackX_8);
    (**(*0x21c50 + 0x50))(0x60000202,8,0x1a408,0x11c7c,&uStackX_8);
    uVar3 = 0x3108000;
    fcn.0001a218(1,0x3108000);
    if (0x20045 < *(arg2 + 8)) {
        *0x21b19 = 1;
    }
    *0x21b18 = '\0';
    if (*0x21ce0 == NULL) {
        str._CS_[4] = '\0';
        *0x21ce0 = "_CS_";
        *0x21b20 = "_CS_";
    }
    iVar2 = fcn.00017444();
    if (-1 < iVar2) {
        cVar1 = fcn.00011708(0x16934);
        if (cVar1 == '\0') {
            fcn.000157cc(*0x22520,CONCAT71(uVar3 >> 8,1),1);
        }
        iVar2 = fcn.0001c374();
        if (-1 < iVar2) {
            uVar3 = 0x21d78;
            (**(*0x21c50 + 0x140))(0x20130,0);
            if (*0x21d78 == 0) {
                fcn.0001a374(0x20130,0x1c308,uVar3,&uStackX_8);
            }
            uStackX_8 = 0;
            (**(*0x21c50 + 0x170))(0x200,8,0x1c328,0,0x20060,&uStackX_8);
        }
        iVar2 = fcn.00012c18(arg1,arg2);
        if (-1 < iVar2) {
            *0x22540 = 0;
            uVar3 = 2;
            iVar2 = fcn.00016b24(0x20b38,0x20160,2,0x20);
            if (iVar2 < 0) {
                iVar2 = fcn.00016b24(0x20b38,0x20160,0,0);
                if (iVar2 < 0) {
                    return iVar2;
                }
                uVar3 = 2;
                iVar2 = fcn.00016b24(0x20b38,0x20160,2,0x20);
                if (iVar2 < 0) {
                    return iVar2;
                }
            }
            fcn.0001a374(0x20120,0x11c40,uVar3,auStackX_20);
            puVar4 = auStackX_18;
            fcn.0001a374(0x200d0,0x12118,uVar3,auStackX_20);
            *(*0x21c58 + 0x50) = 0x118c8;
            *(*0x21c58 + 0x48) = 0x1184c;
            *(*0x21c58 + 0x80) = 0x119a0;
            (**(*0x21c50 + 0x148))(&iStackX_10,0x202a0,0,0,puVar4);
            if (*0x21b18 == '\0') {
                fcn.00011e80(iStackX_10);
            }
            iVar2 = 0;
        }
    }
    return iVar2;
}


/* fcn.00011610 @ 0x11610 */

void fcn.00011610(ulong noname_0,int64_t arg1)

{
    if ((*0x21cd8 == '\0') && (*0x21bf0 != 0)) {
        (**(*0x21bf0 + 0x70))(*0x21cd0);
        (**(*0x21bf0 + 0x70))(*0x21cc0);
    }
    if (*0x21ca8 != 0) {
        fcn.0001a770();
        (**(*0x21bf0 + 0x48))(*0x21ca8);
    }
    if (*0x21cb0 != 0) {
        (**(*0x21bf0 + 0x70))();
    }
    (**(*0x21bf0 + 0x70))(*0x21e18);
    (**(*0x21bf0 + 0x70))(*0x21e20);
    (**(*0x21bf0 + 0x70))(*0x21e28);
    (**(*0x21bf0 + 0x70))(*0x21e38);
    if (*0x21c30 != 0) {
        (**(*(arg1 + 0x60) + 0x48))();
        *0x21c30 = 0;
    }
    (**(*0x21c18 + 0x70))(*0x21c08);
    //WARNING: Could not recover jumptable at 0x00011702. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x21c18 + 0x70))(*0x21c10);
    return;
}


/* fcn.0001a004 @ 0x1a004 */

int64_t fcn.0001a004(void)

{
    if (*0x21c28 == 0) {
        fcn.00019fa4(0x201b0,0x21c28);
    }
    return *0x21c28;
}


/* fcn.00019fa4 @ 0x19fa4 */

ulong fcn.00019fa4(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x21be8;
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


/* fcn.0001a034 @ 0x1a034 */

void fcn.0001a034(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.0001a004();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x0001a062:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x0001a062;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.0001dec0 @ 0x1dec0 */

uint8_t fcn.0001dec0(void)

{
    unkuint7 extraout_RAX;
    
    fcn.00011170();
    fcn.00011120();
    return (extraout_RAX & 0xfffffe) >> 1 & 1;
}


/* fcn.00011170 @ 0x11170 */

uint64_t fcn.00011170(void)

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


/* fcn.00011120 @ 0x11120 */

void fcn.00011120(void)

{
    return;
}


/* fcn.000110d0 @ 0x110d0 */

uint64_t fcn.000110d0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000110c2 @ 0x110c2 */

void fcn.000110c2(void)

{
    return;
}


/* fcn.00011110 @ 0x11110 */

void fcn.00011110(void)

{
    return;
}


/* fcn.0001a098 @ 0x1a098 */

void fcn.0001a098(void)

{
    int64_t iVar1;
    
    if ((((*0x21c40 == 0) && (*0x21c38 == '\0')) && (*0x21bf0 != 0)) && (*(*0x21bf0 + 0x140) != NULL)) {
        iVar1 = (**(*0x21bf0 + 0x140))(0x20030,0,0x21c40);
        if (iVar1 < 0) {
            *0x21c40 = 0;
        }
    }
    return;
}


/* fcn.000110e0 @ 0x110e0 */

uint64_t fcn.000110e0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* section..text @ 0x11000 */

int64_t section..text(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_00000014;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 61440 named .text
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


/* fcn.0001a770 @ 0x1a770 */

void fcn.0001a770(void)

{
    int64_t *piVar1;
    int64_t iVar2;
    
    piVar1 = *0x21ca8;
    if (*0x21ca8 != NULL) {
        if ((*0x21ca8)[1] != 0) {
            fcn.00011060(**0x21ca8,(*0x21ca8)[1],0);
        }
        piVar1[2] = piVar1[3];
        *piVar1[3] = *piVar1;
        iVar2 = 0;
        do {
            *(iVar2 + 8 + piVar1[2]) = 0;
            iVar2 = iVar2 + 1;
        } while (iVar2 < 2);
        piVar1[4] = *piVar1;
    }
    return;
}


/* fcn.000188cc @ 0x188cc */

void fcn.000188cc(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar3 = *(arg1 + 8) + *arg1;
    iVar2 = *(arg1 + 0x3c) + *arg1;
    *(arg1 + 0x20) = iVar2;
    *(arg1 + 0x28) = 0;
    *(arg1 + 0x10) = iVar3 + -0x10;
    *(arg1 + 0x30) = 0;
    *(arg1 + 0x18) = iVar3;
    iVar3 = fcn.0001807c(arg1);
    if (iVar2 != iVar3) {
        if (iVar3 == 0) {
            cVar1 = fcn.00017f30(iVar2,arg1);
            if (cVar1 == '\0') {
                *(arg1 + 0x18) = iVar2;
            }
        }
        else {
            *(arg1 + 0x20) = iVar3;
        }
    }
    return;
}


/* fcn.00016c9c @ 0x16c9c */

void fcn.00016c9c(int64_t arg1)

{
    uint16_t uVar1;
    int64_t iVar2;
    char cVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint16_t uVar6;
    
    iVar5 = *(arg1 + 0x20);
    uVar6 = 0;
    cVar3 = fcn.00017f30(iVar5,arg1);
    iVar4 = iVar5;
    if (cVar3 != '\0') {
        while (iVar2 = iVar4, iVar2 != 0) {
            if (((*(iVar2 + 6) & 0xc000000) == 0) && (uVar6 < *(iVar2 + 10))) {
                uVar6 = *(iVar2 + 10);
            }
            iVar4 = fcn.00017fd0(iVar2,arg1);
            iVar5 = iVar2;
        }
        *(arg1 + 0x2a) = *(iVar5 + 4);
        iVar5 = *(iVar5 + 4) + iVar5;
        *(arg1 + 0x28) = uVar6 + 1;
        *(arg1 + 0x18) = iVar5;
        uVar1 = *(iVar5 + 4);
        if ((uVar1 != 0xffff) && (uVar1 <= (*(arg1 + 0x10) + (uVar6 + 1) * -0x10) - iVar5)) {
            *(arg1 + 0x2a) = *(arg1 + 0x2a) + uVar1;
            *(arg1 + 0x18) = uVar1 + iVar5;
        }
    }
    return;
}


/* fcn.00016d78 @ 0x16d78 */

void fcn.00016d78(void)

{
    int64_t iVar1;
    uint64_t *arg3;
    uint64_t uVar2;
    uint64_t *arg2;
    int64_t iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    char16_t *apcStack_28 [4];
    
    arg2 = *0x22520;
    apcStack_28[2] = NULL;
    uVar5 = ~*0x22240 & 1;
    uVar7 = 0;
    apcStack_28[0] = L"MfgDefaults";
    apcStack_28[1] = L"StdDefaults";
    uVar4 = *0x22244;
    if (*0x22244 != 0) {
        do {
            iVar1 = uVar7 * 0x48;
            arg3 = iVar1 + 0x22250;
            if (((*(iVar1 + 0x22288) == '\a') && (*arg2 <= *arg3)) && (*arg3 <= *arg2 + arg2[1])) {
                iVar3 = fcn.0001893c(apcStack_28[uVar5],arg2,arg3);
                if (iVar3 == 0) {
                    uVar2 = *arg2;
                    *(iVar1 + 0x22258) = 0;
                    *arg3 = uVar2;
                    fcn.000188cc(arg3);
                    uVar5 = uVar5 + 1;
                    if (apcStack_28[uVar5] == NULL) {
                        return;
                    }
                }
                uVar4 = *0x22244;
            }
            uVar6 = uVar7 + 1;
            uVar7 = uVar6;
        } while (uVar6 < uVar4);
    }
    return;
}


/* fcn.00013be0 @ 0x13be0 */

void fcn.00013be0(void)

{
    char cVar1;
    int64_t arg1;
    ulong *puVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar4 = *0x21b80;
    if (*0x21b80 != 0) {
        *(*0x21b80 + 0x2a8) = 0;
        puVar2 = iVar4 + 0x10;
        iVar3 = 0x1a;
        do {
            puVar2[-1] = 0;
            *puVar2 = 0;
            puVar2[-2] = 0;
            puVar2 = puVar2 + 3;
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        *(iVar4 + 0x278) = 0;
        *(iVar4 + 0x280) = 0;
        *(iVar4 + 0x270) = 0;
        *(iVar4 + 0x290) = 0;
        *(iVar4 + 0x298) = 0;
        *(iVar4 + 0x288) = 0;
        iVar4 = *0x22244 - 1;
        if (-1 < iVar4) {
            iVar3 = iVar4 * 0x48 + 0x22250;
            do {
                arg1 = *(iVar3 + 0x20);
                cVar1 = fcn.00017f30(arg1,iVar3);
                if (cVar1 != '\0') {
                    for (; arg1 != 0; arg1 = fcn.0001804c(arg1,iVar3)) {
                        fcn.000139b8(arg1,iVar3);
                    }
                }
                iVar3 = iVar3 + -0x48;
                iVar4 = iVar4 + -1;
            } while (-1 < iVar4);
        }
    }
    return;
}


/* fcn.0001a92c @ 0x1a92c */

ulong fcn.0001a92c(int64_t arg1)

{
    int *piVar1;
    uint8_t uVar2;
    uchar uVar3;
    uchar uVar4;
    uint32_t uVar5;
    uint64_t uStackX_8;
    
    piVar1 = *0x21b20;
    if ((*0x21b20 == NULL) || (**0x21b20 != 0x5f53435f)) {
        return 0x8000000000000002;
    }
    if ((*0x21b20)[1] != '\0') {
        return 0x800000000000000f;
    }
    uVar3 = in(0x21);
    uVar4 = in(0xa1);
    uVar5 = in(0x1830);
    if (*0x21d80 != '\0') {
        if ((uVar5 & 1) != 0) {
            *0x21d80 = '\0';
        }
        if (*0x21d80 != '\0') {
            goto code_r0x0001a9ca;
        }
    }
    *0x21d80 = '\x01';
    *0x21d81 = uVar5 & 1;
code_r0x0001a9ca:
    uVar2 = *0x21d81;
    out(0x21,0xff);
    out(0xa1,0xff);
    uVar5 = in(0x1830);
    out(0x1830,uVar5 & 0xfffffffc);
    if (*0x21cc8 == '\0') {
        *0x21e10 = *(*0x20830 + 0x10);
        if ((*0x21e10 & 1) != 0) {
            uStackX_8 = *0x21e10 & 0xfffffffffffffffe;
            *(*0x20830 + 0x10) = uStackX_8;
        }
    }
    *(piVar1 + 1) = 1;
    *(piVar1 + 6) = uVar3;
    *(piVar1 + 7) = uVar4;
    *(piVar1 + 5) = uVar2;
    return 0;
}


/* fcn.000117b0 @ 0x117b0 */

void fcn.000117b0(void)

{
    int64_t iVar1;
    
    iVar1 = *0x22520;
    if ((*0x21b2c != '\0') && (*0x21b00 == '\0')) {
        if (*0x22540 != '\0') {
            *0x21b00 = 1;
            return;
        }
        if ((*0x22541 & 1) != 0) {
            fcn.000188cc(*0x22520);
            fcn.00016c9c(iVar1);
            *0x22248 = 0;
            fcn.00016d78();
        }
        iVar1 = *0x22528;
        if ((*0x22541 & 2) != 0) {
            fcn.000188cc(*0x22528);
            fcn.00016c9c(iVar1);
        }
        if (*0x22541 != 0) {
            *0x22541 = 0;
            fcn.00013be0();
        }
    }
    return;
}


/* fcn.000126c4 @ 0x126c4 */

int64_t fcn.000126c4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t arg3_00;
    uint64_t arg2_00;
    uint64_t uVar5;
    int64_t in_stack_00000028;
    
    iVar3 = *0x21b48;
    if (*0x21b48 == 0) {
        iVar4 = -0x7ffffffffffffffd;
    }
    else if ((((arg1 == 0) || (arg2 == 0)) || (arg4 == 0)) || ((in_stack_00000028 == 0 && (*arg4 != 0)))) {
        iVar4 = -0x7ffffffffffffffe;
    }
    else {
        arg2_00 = *0x21b50 - 0x30;
        arg3_00 = fcn.00012d08(arg1,arg2_00);
        uVar5 = *arg4;
        if (arg2_00 < arg3_00) {
            iVar4 = -0x7ffffffffffffff2;
        }
        else {
            *(iVar3 + 0x18) = 0xc000000000000000;
            if (arg2_00 - arg3_00 < uVar5) {
                uVar5 = arg2_00 - arg3_00;
            }
            *(iVar3 + 0x40) = uVar5;
            uVar1 = *arg2;
            uVar2 = *(arg2 + 8);
            *(iVar3 + 0x38) = arg3_00;
            *(iVar3 + 0x20) = uVar1;
            *(iVar3 + 0x28) = uVar2;
            fcn.0001fab0(iVar3 + 0x48,arg1,arg3_00);
            iVar4 = fcn.00012610(arg3_00 + 0x30 + uVar5);
            if (((-1 < iVar4) || (iVar4 == -0x7ffffffffffffffb)) && (*arg4 = *(iVar3 + 0x40), -1 < iVar4)) {
                if (arg3 != 0) {
                    *arg3 = *(iVar3 + 0x30);
                }
                fcn.0001fab0(in_stack_00000028,*(iVar3 + 0x38) + 0x48 + iVar3,*arg4);
            }
        }
    }
    return iVar4;
}


/* fcn.00016934 @ 0x16934 */

int64_t fcn.00016934(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t in_stack_00000028;
    
    if ((((arg1 == 0) || (arg2 == 0)) || (arg4 == 0)) || ((in_stack_00000028 == 0 && (*arg4 != 0)))) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = -0x7ffffffffffffffd;
        piVar2 = 0x211e0;
        do {
            if (iVar1 != -0x7ffffffffffffffd) {
                return iVar1;
            }
            iVar1 = (**piVar2)(arg1,arg2,arg3,arg4);
            piVar2 = piVar2 + 1;
        } while (*piVar2 != 0);
        if (iVar1 == -0x7ffffffffffffffd) {
            iVar1 = fcn.00015bf0(arg1,arg2,arg3,arg4);
        }
    }
    return iVar1;
}


/* fcn.0001aa4c @ 0x1aa4c */

ulong fcn.0001aa4c(int64_t arg1)

{
    char *pcVar1;
    ushort uVar2;
    uint32_t uVar3;
    uchar uStackX_e;
    uchar uStackX_f;
    
    if ((*0x21b20 != NULL) && (**0x21b20 == 0x5f53435f)) {
        if ((*0x21b20)[1] == '\0') {
            return 0x8000000000000013;
        }
        uVar2 = *(*0x21b20 + 6);
        pcVar1 = *0x21b20 + 5;
        *(*0x21b20 + 1) = 0;
        if (*pcVar1 != '\0') {
            uVar3 = in(0x1830);
            out(0x1830,uVar3 | 2);
            uVar3 = in(0x1830);
            out(0x1830,uVar3 | 1);
        }
        if ((*0x21cc8 == '\0') && (((*0x21e10 ^ *(*0x20830 + 0x10)) & 1) != 0)) {
            *(*0x20830 + 0x10) = *0x21e10;
        }
        uStackX_e = uVar2;
        out(0x21,uStackX_e);
        uStackX_f = uVar2 >> 8;
        out(0xa1,uStackX_f);
        return 0;
    }
    return 0x8000000000000002;
}


/* fcn.00012810 @ 0x12810 */

int64_t fcn.00012810(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg3_00;
    ulong uVar1;
    int64_t iVar2;
    uint64_t arg3_01;
    int64_t iVar3;
    uint32_t arg1_00;
    uint64_t arg2_00;
    uint64_t uVar4;
    
    iVar2 = *0x21b48;
    if (*0x21b48 == 0) {
        iVar2 = -0x7ffffffffffffffd;
    }
    else {
        if (((arg1 != 0) && (arg2 != 0)) && (arg3 != 0)) {
            arg2_00 = *0x21b50 - 0x20;
            arg1_00 = arg2;
            arg3_01 = fcn.00012d08(arg1_00,arg2_00);
            uVar4 = *arg1;
            if (arg3_01 <= uVar4) {
                if (arg2_00 < arg3_01) {
                    return -0x7ffffffffffffff2;
                }
                *(iVar2 + 0x18) = 0xc000000000000001;
                if (arg2_00 - arg3_01 < uVar4) {
                    uVar4 = arg2_00 - arg3_01;
                }
                *(iVar2 + 0x20) = uVar4;
                uVar1 = *(arg3 + 8);
                *(iVar2 + 0x28) = *arg3;
                *(iVar2 + 0x30) = uVar1;
                fcn.0001fab0(iVar2 + 0x38,arg1_00,arg3_01);
                iVar3 = fcn.00012610(uVar4 + 0x20);
                if ((-1 < iVar3) || (iVar3 == -0x7ffffffffffffffb)) {
                    arg3_00 = *(iVar2 + 0x20);
                    *arg1 = arg3_00;
                    if (-1 < iVar3) {
                        fcn.0001fab0(arg1_00,iVar2 + 0x38,arg3_00);
                        uVar1 = *(iVar2 + 0x30);
                        *arg3 = *(iVar2 + 0x28);
                        *(arg3 + 8) = uVar1;
                    }
                }
                return iVar3;
            }
        }
        iVar2 = -0x7ffffffffffffffe;
    }
    return iVar2;
}


/* fcn.00016a08 @ 0x16a08 */

int64_t fcn.00016a08(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ushort uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        return -0x7ffffffffffffffe;
    }
    uVar5 = *arg1;
    uVar2 = fcn.00012d08(arg2,uVar5 + 2);
    if (uVar5 < uVar2) {
        return -0x7ffffffffffffffe;
    }
    uVar1 = *arg2;
    iVar3 = -0x7ffffffffffffffd;
    if (*0x21b78 != 0) {
        piVar4 = 0x21b78;
        do {
            if (iVar3 != -0x7ffffffffffffffd) break;
            iVar3 = (**piVar4)(arg1,arg2,arg3);
            if (iVar3 == -0x7ffffffffffffff2) {
                *arg2 = 0;
                iVar3 = -0x7ffffffffffffffd;
            }
            piVar4 = piVar4 + 1;
        } while (*piVar4 != 0);
        if (-1 < iVar3) goto code_r0x00016abd;
    }
    *arg2 = uVar1;
code_r0x00016abd:
    if (iVar3 == -0x7ffffffffffffffd) {
        iVar3 = fcn.00018a64(arg1,arg2,arg3,*0x22244);
        return iVar3;
    }
    return iVar3;
}


/* fcn.00012938 @ 0x12938 */

ulong fcn.00012938(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t arg3_00;
    uint64_t arg2_00;
    int64_t in_stack_00000028;
    
    iVar2 = *0x21b48;
    if (*0x21b48 == 0) {
        uVar3 = 0x8000000000000003;
    }
    else if (((arg1 == 0) || (arg2 == 0)) || ((arg4 != 0 && (in_stack_00000028 == 0)))) {
        uVar3 = 0x8000000000000002;
    }
    else {
        arg2_00 = *0x21b50 - 0x30;
        arg3_00 = fcn.00012d08(arg1,arg2_00);
        if ((arg2_00 < arg3_00) || (arg2_00 - arg3_00 < arg4)) {
            uVar3 = 0x8000000000000009;
        }
        else {
            *(iVar2 + 0x30) = arg3;
            *(iVar2 + 0x18) = 0xc000000000000002;
            *(iVar2 + 0x40) = arg4;
            uVar3 = *arg2;
            uVar1 = *(arg2 + 8);
            *(iVar2 + 0x38) = arg3_00;
            *(iVar2 + 0x20) = uVar3;
            *(iVar2 + 0x28) = uVar1;
            fcn.0001fab0(iVar2 + 0x48,arg1,arg3_00);
            fcn.0001fab0(iVar2 + 0x48 + arg3_00,in_stack_00000028,arg4);
            uVar3 = fcn.00012610(arg4 + 0x30 + arg3_00);
        }
    }
    return uVar3;
}


/* fcn.00016b24 @ 0x16b24 */

int64_t fcn.00016b24(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t arg3_00;
    int64_t *piVar3;
    
    arg3_00 = arg3 & 0xffffffff;
    iVar1 = fcn.00015d08(arg1,arg2,arg3,arg4);
    if (-1 < iVar1) {
        iVar1 = -0x7ffffffffffffffd;
        piVar3 = 0x21130;
        do {
            if (iVar1 != -0x7ffffffffffffffd) goto code_r0x00016bc9;
            iVar1 = (**piVar3)(arg1,arg2,arg3_00,arg4);
            piVar3 = piVar3 + 1;
        } while (*piVar3 != 0);
        if (iVar1 == -0x7ffffffffffffffd) {
            iVar1 = fcn.000161c0(arg1,arg2,arg3_00,arg4);
        }
code_r0x00016bc9:
        iVar2 = -0x7ffffffffffffffd;
        if (*0x21b90 != 0) {
            piVar3 = 0x21b90;
            do {
                if (iVar2 != -0x7ffffffffffffffd) break;
                iVar2 = (**piVar3)(arg1,arg2,arg3_00,arg4);
                piVar3 = piVar3 + 1;
            } while (*piVar3 != 0);
        }
    }
    return iVar1;
}


/* fcn.00012610 @ 0x12610 */

uint64_t fcn.00012610(uint32_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint in_register_0000000c;
    int64_t aiStackX_10 [3];
    
    iVar2 = *0x21b40;
    uVar3 = CONCAT44(in_register_0000000c,arg1);
    if (*0x21b38 == NULL) {
        uVar3 = 0x8000000000000003;
    }
    else if (((*0x21b48 == 0) || (*0x21b40 == 0)) || (*0x21b50 < uVar3)) {
        uVar3 = 0x8000000000000009;
    }
    else {
        uVar1 = *(*0x21b48 + 0x18);
        *(*0x21b48 + 0x10) = uVar3;
        aiStackX_10[0] = uVar3 + *0x21b60;
        uVar3 = (***0x21b38)(*0x21b38,iVar2,*0x21b48,aiStackX_10);
        if (-1 < uVar3) {
            uVar3 = *(*0x21b48 + 0x18);
            if (uVar3 == uVar1) {
                uVar3 = 0x8000000000000010;
            }
            else if (uVar3 < 0) {
                uVar3 = uVar3 | 0x8000000000000000;
            }
        }
    }
    return uVar3;
}


/* fcn.00016fe4 @ 0x16fe4 */

int64_t fcn.00016fe4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iStack_58;
    int64_t iStack_50;
    int64_t iStack_40;
    int16_t iStack_30;
    
    if (((((arg1 & 0xffffff80U) == 0) && (arg1 != 1)) && ((arg1 & 6) != 4)) &&
       (((arg2 != 0 && (arg3 != 0)) && (arg4 != 0)))) {
        iVar2 = *0x22528;
        if ((arg1 & 1U) != 0) {
            iVar2 = *0x22520;
        }
        iVar3 = 0;
        uVar1 = *(iVar2 + 8);
        iStack_58 = 0;
        iVar2 = fcn.000151c0(iVar2,0,0,&iStack_58);
        if (iVar2 < 0) {
            if (iStack_58 != 0) {
                fcn.00012ed4(iStack_58,iVar3);
            }
        }
        else {
            uVar5 = ((iStack_30 + 1) * -0x10 - iStack_40) + iStack_50 + iStack_58;
            fcn.00012ed4(iStack_58,iVar3);
            *arg2 = uVar1;
            *arg3 = uVar5;
            uVar4 = 0xffff;
            if (uVar5 < 0xffff) {
                uVar4 = uVar5;
            }
            iVar3 = uVar4 - 0x1a;
            if (uVar4 - 0x1a < 0) {
                iVar3 = 0;
            }
            iVar2 = 0;
            *arg4 = iVar3;
        }
    }
    else {
        iVar2 = -0x7ffffffffffffffe;
    }
    return iVar2;
}


/* fcn.00012d08 @ 0x12d08 */

int64_t fcn.00012d08(uint32_t arg1,int64_t arg2)

{
    int16_t *piVar1;
    uint in_register_0000000c;
    
    if (CONCAT44(in_register_0000000c,arg1) == 0) {
        return 0;
    }
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    while( true ) {
        if (CONCAT44(in_register_0000000c,arg1) + arg2 <= piVar1) {
            return arg2 + 1;
        }
        if (*piVar1 == 0) break;
        piVar1 = piVar1 + 1;
    }
    return (piVar1 - CONCAT44(in_register_0000000c,arg1) >> 1) * 2 + 2;
}


/* fcn.0001fab0 @ 0x1fab0 */

ulong * fcn.0001fab0(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    bool bVar1;
    uint64_t uVar2;
    uint in_register_0000000c;
    ulong *puVar3;
    uint in_register_00000014;
    uint64_t uVar4;
    ulong *puVar5;
    ulong *puVar6;
    uint8_t uVar7;
    
    puVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar7 = 0;
    puVar5 = CONCAT44(in_register_00000014,arg2);
    bVar1 = false;
    uVar2 = puVar5 - puVar3;
    puVar6 = puVar3;
    if (puVar5 < puVar3) {
        uVar2 = -uVar2;
        if (puVar3 <= arg3 + puVar5) {
            puVar6 = arg3 + puVar3;
            bVar1 = true;
            uVar7 = 1;
            puVar5 = arg3 + puVar5;
        }
    }
    if ((7 < arg3) && (7 < uVar2)) {
        uVar2 = puVar5 & 7;
        uVar4 = puVar6 & 7;
        if (bVar1) {
            puVar5 = puVar5 + -1;
            puVar6 = puVar6 + -1;
        }
        if ((uVar2 == uVar4) && (uVar2 != 0)) {
            if (!bVar1) {
                uVar2 = 8 - uVar2;
            }
            arg3 = arg3 - uVar2;
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                *puVar6 = *puVar5;
                puVar5 = puVar5 + uVar7 * -2 + 1;
                puVar6 = puVar6 + uVar7 * -2 + 1;
            }
        }
        if (bVar1) {
            puVar5 = puVar5 + -7;
            puVar6 = puVar6 + -7;
        }
        for (uVar2 = arg3 >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + uVar7 * -2 + 1;
            puVar6 = puVar6 + uVar7 * -2 + 1;
        }
        arg3 = arg3 & 7;
        if (arg3 == 0) {
            return puVar3;
        }
        if (bVar1) {
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
        }
    }
    if (bVar1) {
        puVar5 = puVar5 + -1;
        puVar6 = puVar6 + -1;
    }
    for (; arg3 != 0; arg3 = arg3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + uVar7 * -2 + 1;
        puVar6 = puVar6 + uVar7 * -2 + 1;
    }
    return puVar3;
}


/* fcn.00011b3c @ 0x11b3c */

int64_t fcn.00011b3c(int64_t arg1)

{
    int64_t iVar1;
    ulong uStackX_8;
    
    uStackX_8 = 4;
    if (arg1 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        if (((*0x21b28 == 0) &&
            (iVar1 = (**(*0x21c58 + 0x48))(L"MonotonicCounter",0x20270,0,&uStackX_8,0x21b28), iVar1 < 0)) &&
           (iVar1 != -0x7ffffffffffffff2)) {
            return iVar1;
        }
        *0x21b28 = *0x21b28 + 1;
        iVar1 = (**(*0x21c58 + 0x58))(L"MonotonicCounter",0x20270,7,uStackX_8,0x21b28);
        if (-1 < iVar1) {
            *arg1 = *0x21b28;
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.00011e80 @ 0x11e80 */

void fcn.00011e80(int64_t arg1)

{
    int64_t iVar1;
    int64_t iStackX_8;
    uchar auStackX_10 [8];
    ulong auStackX_18 [2];
    
    *(*0x21c58 + 0x58) = 0x11928;
    iStackX_8 = arg1;
    (**(*0x21c50 + 0x148))(&iStackX_8,0x200b0,0,0);
    auStackX_18[0] = 0;
    if (*0x21c60 == 0) {
        *0x21c50 = *0x60;
        *0x21c58 = *0x58;
    }
    iVar1 = *0x21c50;
    *(*0x21c58 + 0x60) = fcn.00011b3c;
    *(iVar1 + 0xf0) = 0x11c04;
    fcn.00011b3c(auStackX_10);
    (**(*0x21c50 + 0x148))(auStackX_18,0x20200,0,0);
    return;
}


/* fcn.0001adb8 @ 0x1adb8 */

int64_t fcn.0001adb8(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    uVar2 = 0;
    uVar3 = uVar2;
    if (*0x21d58 != 0) {
        do {
            (**(*0x21cf8 + uVar3 * 8))();
            uVar3 = uVar3 + 1;
        } while (uVar3 < *0x21d58);
    }
    iVar1 = *0x21cf8;
    if (*0x21cf8 != 0) {
        *0x21d58 = 0;
        *0x21d38 = 0;
        (**(*0x21bf0 + 0x48))();
        *0x21cf8 = 0;
    }
    *0x21d18 = 1;
    if (arg1 == 0) {
        if (*0x21d10 != 0) {
            *0x21d30 = 0;
            *0x21d00 = 0;
            (**(*0x21bf0 + 0x48))();
            *0x21d10 = 0;
        }
        iVar1 = 0;
    }
    else {
        iVar1 = fcn.000190fc(iVar1,*0x21d00 << 3,(*0x21d40 + *0x21d28 + *0x21d30) * 8 + 0x10,*0x21d10);
        if (iVar1 != 0) {
            *0x21d10 = iVar1;
            *(iVar1 + *0x21d30 * 8) = 0x21d20;
            *0x21d30 = *0x21d30 + 1;
            uVar3 = uVar2;
            if (*0x21d28 != 0) {
                do {
                    iVar1 = uVar3 * 8;
                    uVar3 = uVar3 + 1;
                    *(*0x21d10 + *0x21d30 * 8) = *0x21d20 + iVar1;
                    *0x21d30 = *0x21d30 + 1;
                } while (uVar3 < *0x21d28);
            }
            *(*0x21d10 + *0x21d30 * 8) = 0x21d48;
            *0x21d00 = *0x21d30 + 1;
            if (*0x21d40 != 0) {
                do {
                    iVar1 = uVar2 * 8;
                    uVar2 = uVar2 + 1;
                    *0x21d30 = *0x21d00;
                    *(*0x21d10 + *0x21d00 * 8) = *0x21d48 + iVar1;
                    *0x21d00 = *0x21d30 + 1;
                } while (uVar2 < *0x21d40);
            }
            *0x21d30 = *0x21d00;
        }
        *arg1 = *0x21d30;
        iVar1 = *0x21d10;
    }
    return iVar1;
}


/* fcn.0001a190 @ 0x1a190 */

ulong fcn.0001a190(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x21c6c == '\0') {
        if (*0x21c88 == 0) {
            if (*0x21c7c != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x21c50 + 0x140))(0x20800,0,0x21c88);
        }
    }
    else if (*0x21c70 == 0) {
        if ((*0x21c7c == '\0') && (*0x21c98 != 0)) {
    //WARNING: Could not recover jumptable at 0x0001a1cf. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x21c98 + 0xd0))(0x20810,0,0x21c70);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.0001a290 @ 0x1a290 */

int64_t fcn.0001a290(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    if (*0x21c6c == '\0') {
        if (*0x21ca0 == 0) {
            if (*0x21c7c == '\x01') {
                return -0x7ffffffffffffffd;
            }
            uVar2 = (**(*0x21c50 + 0x18))(0x1f);
            (**(*0x21c50 + 0x20))(uVar2);
            if (0x10 < uVar2) {
                return -0x7ffffffffffffffd;
            }
            iVar1 = (**(*0x21c50 + 0x140))(str.6_6v,0,0x21ca0);
            if (iVar1 < 0) {
                *0x21ca0 = 0;
            }
            return iVar1;
        }
    }
    else if (*0x21c80 == 0) {
        if (*0x21c98 == 0) {
            return -0x7ffffffffffffffd;
        }
        iVar1 = (**(*0x21c98 + 0xd0))(0x20110,0,0x21c80);
        if (iVar1 < 0) {
            *0x21c80 = 0;
        }
        return iVar1;
    }
    return 0;
}


/* fcn.0001a218 @ 0x1a218 */

int64_t fcn.0001a218(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    if (*0x21c6c == '\0') {
        iVar1 = fcn.0001a190();
        if (-1 < iVar1) {
            iVar1 = (***0x21c88)(arg1 & 0xffffffffU,arg2 & 0xffffffffU,0,0,0);
        }
    }
    else if (*0x21c70 == NULL) {
        iVar1 = -0x7ffffffffffffff2;
    }
    else {
        iVar1 = (***0x21c70)(*0x21c70,arg1 & 0xffffffffU,arg2 & 0xffffffffU,0,0,0);
    }
    return iVar1;
}


/* fcn.00017444 @ 0x17444 */

int64_t fcn.00017444(void)

{
    int64_t *arg1;
    int64_t iVar1;
    bool bVar2;
    uchar uVar3;
    int64_t iVar4;
    ulong *puVar5;
    int64_t arg1_00;
    uint64_t *puVar6;
    uint64_t uVar7;
    ulong *arg1_01;
    ulong uVar8;
    int64_t arg3;
    uint64_t uVar9;
    int64_t iStackX_10;
    ulong uStack_38;
    ulong uStack_30;
    uint uStack_28;
    uint32_t uStack_24;
    
    uVar3 = *0x21b18;
    iStackX_10 = fcn.0001a138();
    if ((iStackX_10 == 0) || (iVar4 = fcn.0001a504(0x21238,&iStackX_10), -1 < iVar4)) {
        uStack_38 = *(iStackX_10 + 0x18);
        uStack_30 = *(iStackX_10 + 0x20);
        uStack_28 = *(iStackX_10 + 0x28);
        uStack_24 = *(iStackX_10 + 0x30);
        *(iStackX_10 + 0x30) = *(iStackX_10 + 0x30) & 0xfffffffd;
        puVar5 = NULL;
    }
    else {
        puVar5 = 0x800000000000000e;
    }
    arg1_01 = &uStack_38;
    if (puVar5 < 0) {
        arg1_01 = NULL;
    }
    if (arg1_01 == NULL) {
        uVar7 = 0x30000;
    }
    else {
        uVar7 = *(arg1_01 + 2);
        if (uVar7 < 0x10000) {
            uVar7 = 0x10000;
        }
    }
    uVar8 = 0;
    iVar4 = 0x300;
    fcn.0001fa5e(0x22240,0x300,0);
    *0x22538 = uVar7 * 3;
    *0x22530 = fcn.0001175c(*0x22538);
    if (*0x22530 != 0) {
        arg3 = CONCAT71(uVar8 >> 8,uVar3);
        iVar4 = fcn.000170fc(arg1_01,iVar4,arg3);
        if (iVar4 < 0) {
            return iVar4;
        }
        iVar1 = *0x22244 * 0x48;
        arg1 = iVar1 + 0x22250;
        arg1_00 = fcn.0001175c(0x10000);
        *arg1 = arg1_00;
        if (arg1_00 != 0) {
            *(iVar1 + 0x22258) = 0x10000;
            fcn.0001fa5e(arg1_00,0x10000,CONCAT71(arg3 >> 8,0xff));
            *(iVar1 + 0x22288) = 0;
            *(iVar1 + 0x22290) = 0x20400;
            *(iVar1 + 0x2228c) = 0;
            fcn.000188cc(arg1);
            *0x22244 = *0x22244 + 1;
            *0x22528 = arg1;
            *0x221a0 = fcn.0001175c(0x10000);
            if (*0x221a0 != 0) {
                *0x221b0 = 0x10000;
                *0x21b80 = 0x21f00;
                fcn.00013be0();
            }
            bVar2 = false;
            if (*0x22244 != 0) {
                puVar6 = 0x22258;
                uVar9 = *0x22244;
                do {
                    if (((puVar6[6] & 2) == 0) && (uVar7 < *puVar6)) {
                        uVar7 = *puVar6;
                        bVar2 = true;
                    }
                    puVar6 = puVar6 + 9;
                    uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
                if (bVar2) {
                    if (*0x21b69 == '\0') {
                        (**(*0x21c50 + 0x30))(*0x22530,((*0x22538 & 0xfff) != 0) + (*0x22538 >> 0xc));
                    }
                    *0x22538 = uVar7 * 3;
                    *0x22530 = fcn.0001175c(*0x22538);
                    if (*0x22530 == 0) {
                        return -0x7ffffffffffffff7;
                    }
                }
            }
            return iVar4;
        }
    }
    return -0x7ffffffffffffff7;
}


/* fcn.00011708 @ 0x11708 */

ulong fcn.00011708(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t aiStackX_8 [4];
    
    aiStackX_8[0] = 0;
    iVar1 = (*arg1)(L"Setup",0x202d0,0,aiStackX_8,0);
    if (iVar1 == -0x7ffffffffffffffb) {
        uVar2 = CONCAT71(0x80000000000000,aiStackX_8[0] == 0xca9);
    }
    else {
        uVar2 = 1;
    }
    return uVar2;
}


/* fcn.000157cc @ 0x157cc */

int64_t * fcn.000157cc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t *arg2_00;
    int64_t *arg3_00;
    ulong in_R9;
    int64_t *piVar4;
    ulong uStack_128;
    uint uStack_120;
    int64_t aiStack_118 [3];
    int64_t iStack_100;
    int64_t iStack_f8;
    int64_t iStack_c8;
    int64_t aiStack_c0 [6];
    uchar uStack_90;
    uint uStack_8c;
    ulong uStack_88;
    uchar auStack_78 [80];
    
    uVar1 = *(arg1 + 0x3c);
    piVar4 = NULL;
    fcn.0001a218(1,0x3108002);
    piVar2 = fcn.00016c24(aiStack_118,*(arg1 + 8),*(arg1 + 0x3c),CONCAT71(in_R9 >> 8,*(arg1 + 0x38)));
    if (piVar2 < 0) {
        return piVar2;
    }
    fcn.0001fab0(aiStack_118[0],*arg1,uVar1);
    if (arg2 == '\0') {
        iStack_c8 = 0;
        arg3_00 = arg1;
    }
    else {
        arg2_00 = aiStack_c0;
        iVar3 = fcn.00018dc8(&iStack_c8,arg2_00);
        if (iVar3 < 0) {
            arg3_00 = piVar4;
            goto code_r0x0001595c;
        }
        uStack_90 = 7;
        uStack_8c = 0;
        uStack_88 = 0;
        fcn.000188cc(&iStack_c8);
        arg3_00 = &iStack_c8;
    }
    iVar3 = iStack_c8;
    arg2_00 = 0x21228;
    piVar2 = fcn.00014784(0x211f0,0x21228,arg3_00,aiStack_118);
    if (piVar2 == 0x800000000000000e) {
        piVar2 = piVar4;
    }
    if (-1 < piVar2) {
        arg2_00 = 0x21228;
        piVar2 = fcn.00014784(0x21210,0x21228,arg3_00,aiStack_118);
        if (piVar2 == 0x800000000000000e) {
            piVar2 = piVar4;
        }
        if (-1 < piVar2) {
            uStack_128 = fcn.0001893c(0x211f0,arg3_00,auStack_78);
            uStack_120 = arg3;
            arg2_00 = aiStack_118;
            piVar2 = fcn.00015050(arg1,arg2_00,0x14c5c,&uStack_128);
        }
    }
    if (iVar3 != 0) {
        (**(*0x21c50 + 0x48))(iVar3);
    }
    if (iStack_100 == iStack_f8) {
        arg3_00 = piVar4;
    }
code_r0x0001595c:
    if (((-1 < piVar2) && (arg3_00 != NULL)) &&
       ((*(arg1 + 0x18) - *arg1 != iStack_100 - aiStack_118[0] || (arg3_00 != arg1)))) {
        if (*(arg1 + 0x40) == 0) {
            piVar2 = 0x8000000000000003;
        }
        else {
            arg2_00 = aiStack_118;
            piVar2 = fcn.00015650(arg1,arg2_00,*(arg1 + 0x40));
        }
    }
    fcn.00012ed4(aiStack_118[0],arg2_00);
    return piVar2;
}


/* fcn.0001c374 @ 0x1c374 */

void fcn.0001c374(void)

{
    uint8_t uVar1;
    char cVar2;
    int64_t iVar3;
    uint64_t arg1;
    uint8_t *apuStackX_10 [3];
    
    cVar2 = fcn.0001cae0();
    *0x20a29 = 4;
    iVar3 = fcn.0001c1b8(0x21840,0x200e0,0,apuStackX_10);
    if (iVar3 < 0) {
        arg1 = cVar2 == '\0';
    }
    else {
        uVar1 = *apuStackX_10[0];
        arg1 = uVar1;
        *0x21d9c = uVar1;
        if (cVar2 == '\0') {
            if ((*0x21d9c != 0) && (uVar1 != 3)) goto code_r0x0001c3fc;
            arg1 = 1;
        }
        else if (uVar1 == 1) {
            arg1 = 0;
        }
        else {
            if (uVar1 != 2) goto code_r0x0001c3fc;
            arg1 = 3;
        }
    }
    *0x21d9c = arg1;
code_r0x0001c3fc:
    if (((((-1 < iVar3) && (arg1 == *apuStackX_10[0])) || (iVar3 = fcn.0001c604(arg1), -1 < iVar3)) &&
        ((iVar3 = fcn.000161c0(0x21010,0x20010,6,1), -1 < iVar3 &&
         (iVar3 = fcn.000161c0(0x21030,0x20010,6,1), -1 < iVar3)))) &&
       (iVar3 = fcn.000161c0(0x20ed0,0x20010,6,1), -1 < iVar3)) {
        fcn.0001cb2c();
        iVar3 = fcn.000161c0(0x20f30,0x20010,6,1);
        if ((-1 < iVar3) && (iVar3 = fcn.000161c0(0x20f00,0x20010,6,0x90), -1 < iVar3)) {
            iVar3 = fcn.0001c1b8(0x21870,0x20190,0,apuStackX_10);
            if (iVar3 < 0) {
                *0x21d98 = 1;
                iVar3 = fcn.000161c0(0x21870,0x20190,3,1);
                if (iVar3 < 0) {
                    return;
                }
            }
            else {
                *0x21d98 = *apuStackX_10[0];
            }
            iVar3 = fcn.000161c0(0x20fc0,0x20010,6,1);
            if (-1 < iVar3) {
                *0x20a28 = 1;
                fcn.000161c0(0x21810,0x20a38,6,1);
            }
        }
    }
    return;
}


/* fcn.0001a374 @ 0x1a374 */

void fcn.0001a374(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    ulong in_stack_00000028;
    
    iVar1 = (**(*0x21c50 + 0x50))(0x200,8,arg2,0,arg3);
    if (-1 < iVar1) {
        (**(*0x21c50 + 0xa8))(arg1,*arg3,in_stack_00000028);
    }
    return;
}


/* fcn.00012c18 @ 0x12c18 */

int64_t fcn.00012c18(void)

{
    ulong uVar1;
    ulong *puVar2;
    int64_t iVar3;
    uint64_t uStackX_8;
    uchar auStackX_10 [8];
    uchar auStackX_18 [16];
    
    iVar3 = fcn.00016fe4(7,&uStackX_8,auStackX_18,auStackX_10);
    if (iVar3 < 0) {
        return iVar3;
    }
    if (uStackX_8 < 0x100000000) {
        *0x21b58 = uStackX_8;
        iVar3 = fcn.00016fe4(6,&uStackX_8,auStackX_18,auStackX_10);
        if (iVar3 < 0) {
            return iVar3;
        }
        if (uStackX_8 < 0x100000000) {
            if (*0x21b58 < uStackX_8) {
                *0x21b58 = uStackX_8;
            }
            *0x21b58 = *0x21b58 * 2;
            iVar3 = (**(*0x21c50 + 0x40))(6,*0x21b58,0x21b48);
            puVar2 = *0x21b48;
            uVar1 = *0x20168;
            if (iVar3 < 0) {
                return iVar3;
            }
            *0x21b40 = *0x21b48;
            *0x21b60 = 0x18;
            **0x21b48 = *0x20160;
            puVar2[1] = uVar1;
            *0x21b50 = *0x21b58 + -0x18;
            return iVar3;
        }
    }
    return -0x7ffffffffffffff7;
}


/* fcn.00011f40 @ 0x11f40 */

void fcn.00011f40(void)

{
    int64_t iVar1;
    int64_t iStackX_8;
    int64_t iStackX_10;
    ulong auStackX_18 [2];
    
    auStackX_18[0] = *0x22548;
    iStackX_8 = 0;
    *0x21eb8 = 0x4000;
    *0x21b2c = 1;
    iVar1 = (**(*0x21bf0 + 0x40))(6,0x4000,&iStackX_10);
    *0x21ea0 = 0x10;
    *0x21ec8 = iStackX_10;
    if (iVar1 < 0) {
        *0x21ec8 = 0;
    }
    *0x21ea8 = 4;
    *0x21eb0 = 1;
    *0x21eb8 = *0x21eb8 & -(*0x21ec8 != 0);
    iStackX_10 = *0x21ec8;
    if ((-(*0x21ec8 != 0) < 0) && (iVar1 = (**(*0x21bf0 + 0x140))(0x20290,0,0x21ec0), -1 < iVar1)) {
        *0x21e60 = 0x10000;
        *0x21e68 = 0x17944;
        *0x21e70 = 0x17950;
        *0x21e78 = 0x17a10;
        *0x21e80 = 0x17c04;
        *0x21e88 = 0x17d24;
        iVar1 = (**(*0x21bf0 + 0x148))(auStackX_18,0x20280,0x21e60,0);
        if (-1 < iVar1) {
            *0x21be0 = 1;
        }
    }
    (**(*0x21c50 + 0x148))(&iStackX_8,0x200c0,0x202c8,0);
    *0x202b0 = 0x12a38;
    *0x202b8 = 0x12a44;
    *0x202c0 = 0x12b2c;
    (**(*0x21c50 + 0x148))(&iStackX_8,0x201f0,0x202b0,0);
    if (*0x21b18 != '\0') {
        fcn.00011e80(iStackX_8);
    }
    return;
}


/* fcn.00018cdc @ 0x18cdc */

int fcn.00018cdc(uint32_t arg1)

{
    uint16_t uVar1;
    int iVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if ((*(iVar3 + 0x28) == 0x4856465f) && (*(iVar3 + 0x30) == 0x48)) {
        uVar1 = *(iVar3 + 0x34);
        if (uVar1 == 0) {
            return 0x48;
        }
        if ((uVar1 - 0x48 < 0x8d) && (iVar2 = *(uVar1 + 0x10 + iVar3), iVar2 - 0x14U < 0x8d)) {
            iVar2 = uVar1 + iVar2;
            return (-iVar2 & 7U) + iVar2;
        }
    }
    return 0;
}


/* fcn.0001fa5e @ 0x1fa5e */

int64_t fcn.0001fa5e(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint *puVar4;
    
    uVar1 = arg3;
    puVar4 = arg1;
    if (3 < arg2) {
        if ((arg1 & 3U) != 0) {
            iVar3 = 4 - (arg1 & 3U);
            arg2 = arg2 - iVar3;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar4 = uVar1;
                puVar4 = puVar4 + 1;
            }
        }
        for (uVar2 = arg2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar4 = puVar4 + 1;
        }
        arg2 = arg2 & 3;
    }
    for (; arg2 != 0; arg2 = arg2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
    }
    return arg1;
}


/* fcn.00012e7c @ 0x12e7c */

int64_t fcn.00012e7c(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    uint8_t uVar1;
    uint32_t uVar2;
    
    uVar2 = 0;
    if ((*0x22530 != 0) && (CONCAT44(in_register_0000000c,arg1) <= *0x22538 / 3)) {
        do {
            if ((*0x21b88 >> (uVar2 & 0x1f) & 1) == 0) {
                *0x21b88 = *0x21b88 | 1 << (uVar2 & 0x1f);
                return uVar2 * (*0x22538 / 3) + *0x22530;
            }
            uVar1 = uVar2 + 1;
            uVar2 = uVar1;
        } while (uVar1 < 3);
    }
    return 0;
}


/* fcn.00012e2c @ 0x12e2c */

bool fcn.00012e2c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    bool bVar2;
    
    if (arg3 == 0) {
        bVar2 = true;
    }
    else {
        iVar1 = (**(arg1 + 0x10))(arg2,arg3,arg4);
        bVar2 = -1 < iVar1;
        if ((*0x21b69 == '\0') && (!bVar2)) {
            fcn.0001a218(0x80000002,0x51008);
        }
    }
    return bVar2;
}


/* fcn.00012ed4 @ 0x12ed4 */

void fcn.00012ed4(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    uint8_t uVar1;
    uint64_t uVar2;
    
    uVar2 = 0;
    do {
        if (CONCAT44(in_register_0000000c,arg1) == uVar2 * (*0x22538 / 3) + *0x22530) {
            *0x21b88 = *0x21b88 & ~(1 << (uVar2 & 0x1f));
            return;
        }
        uVar1 = uVar2 + 1;
        uVar2 = uVar1;
    } while (uVar1 < 3);
    return;
}


/* fcn.00012f18 @ 0x12f18 */

char fcn.00012f18(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg4;
    int64_t iVar1;
    int64_t arg2_00;
    uint64_t arg3_00;
    int64_t arg3_01;
    int64_t arg2_01;
    char cVar2;
    
    arg2_00 = arg2 + arg3;
    arg3_00 = arg2 & 0xfff;
    arg3_01 = 0xfff - (arg2_00 - 1U & 0xfff);
    arg2_01 = arg2 - arg3_00;
    arg4 = 0;
    if (arg3 == 0) {
        return '\x01';
    }
    if ((arg3_01 + arg3_00 != 0) &&
       (((arg4 = fcn.00012e7c(arg3_01 + arg3_00,arg2), arg4 == 0 ||
         (iVar1 = (**arg1)(arg2_01,arg3_00,arg4), iVar1 < 0)) ||
        (iVar1 = (**arg1)(arg2_00,arg3_01,arg4 + arg3_00), iVar1 < 0)))) {
        return '\0';
    }
    iVar1 = (**(arg1 + 8))(arg2);
    cVar2 = -1 < iVar1;
    if (cVar2) {
        if (arg3_00 != 0) {
            cVar2 = fcn.00012e2c(arg1,arg2_01,arg3_00,arg4);
            arg3 = arg2_01;
        }
        if ((cVar2 != '\0') && (arg3_01 != 0)) {
            cVar2 = fcn.00012e2c(arg1,arg2_00,arg3_01,arg4 + arg3_00);
            arg3 = arg2_00;
        }
    }
    if (arg4 != 0) {
        fcn.00012ed4(arg4,arg3);
    }
    if (cVar2 == '\0') {
        fcn.0001a218(0x80000002,0x51008);
    }
    return cVar2;
}


/* fcn.00018d38 @ 0x18d38 */

uint8_t fcn.00018d38(int64_t arg1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint8_t *puVar3;
    
    uVar1 = fcn.00018cdc(arg1);
    if ((uVar1 == 0) || (puVar3 = arg1 + 0x17 + uVar1, puVar3 == NULL)) {
        uVar2 = 0x20;
    }
    else {
        uVar2 = ~*puVar3;
        if (uVar2 == 0) {
            uVar2 = 0x20;
        }
    }
    return uVar2;
}


/* fcn.000132c8 @ 0x132c8 */

uint8_t fcn.000132c8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint8_t auStackX_8 [8];
    int aiStackX_10 [2];
    
    iVar1 = (**arg1)(arg2 + 0x28,4,aiStackX_10);
    if (((iVar1 < 0) || (aiStackX_10[0] != 0x4856465f)) ||
       (iVar1 = (**arg1)(arg2 + (arg3 & 0xffffffffU),1,auStackX_8), iVar1 < 0)) {
        auStackX_8[0] = 0x20;
    }
    else {
        auStackX_8[0] = ~auStackX_8[0];
        if (auStackX_8[0] == 0) {
            auStackX_8[0] = 0x20;
        }
    }
    return auStackX_8[0];
}


/* fcn.00018d70 @ 0x18d70 */

uint8_t fcn.00018d70(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint8_t uVar2;
    
    if (((arg1 & 4U) == 0) || ((arg1 & 0xe0U) != 0)) {
        uVar2 = 0;
    }
    else {
        uVar2 = 1;
    }
    if (((arg2 & 4U) == 0) || ((arg2 & 0xe0U) != 0)) {
        cVar1 = '\0';
    }
    else {
        cVar1 = '\x01';
    }
    if (arg3 != 0) {
        *arg3 = cVar1;
    }
    if ((uVar2 != 0) && (cVar1 != '\0')) {
        if ((arg2 & 0x10U) != 0) {
            return 1;
        }
        if ((arg1 & 0x10U) != 0) {
            return 0;
        }
        if ((arg1 & 8U) != 0) {
            return arg2 >> 3 & 1;
        }
    }
    return uVar2;
}


/* fcn.0001523c @ 0x1523c */

ulong fcn.0001523c(int64_t arg1,uint32_t *arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong uVar3;
    uint8_t *puVar4;
    
    if (arg2 == NULL) {
        uVar3 = 0x8000000000000002;
    }
    else {
        iVar1 = *arg1;
        uVar2 = fcn.00018cdc(iVar1);
        if ((uVar2 == 0) || (puVar4 = iVar1 + 0x17 + uVar2, puVar4 == NULL)) {
            uVar3 = 0x8000000000000007;
        }
        else {
            uVar2 = *arg2;
            *arg1 = puVar4;
            *arg2 = ~uVar2 & *puVar4;
            uVar3 = 0;
        }
    }
    return uVar3;
}


/* fcn.00017f30 @ 0x17f30 */

uchar fcn.00017f30(uint32_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    char cVar2;
    uint32_t uVar3;
    uint in_register_0000000c;
    int *piVar4;
    uint16_t *puVar5;
    
    piVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar1 = *(piVar4 + 1);
    if (((((*piVar4 == 0x5241564e) && (*(piVar4 + 9) != -1)) && (uVar1 - 0xb < 0xfff4)) &&
        (uVar1 <= *(arg2 + 0x18) - piVar4)) &&
       ((uVar3 = *(piVar4 + 6) & 0xffffff, uVar3 == 0xffffff || ((uVar1 <= uVar3 && (uVar3 <= *(arg2 + 0x18) - arg1))))
       )) {
        if ((*(piVar4 + 6) & 0x10000000) == 0) {
            return 1;
        }
        puVar5 = piVar4 + (uVar1 - 2);
        if ((*(puVar5 + (2 - *puVar5)) & 1) == 0) {
            return 1;
        }
        if (-1 < *(piVar4 + 9)) {
            return 1;
        }
        cVar2 = fcn.00017e20(arg1);
        if (cVar2 == '\0') {
            return 1;
        }
    }
    return 0;
}


/* fcn.00018230 @ 0x18230 */

uint64_t fcn.00018230(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint in_register_00000014;
    uint16_t *puVar3;
    uint16_t *puVar4;
    uint16_t *puVar5;
    uint32_t arg1_00;
    uint32_t uVar6;
    int64_t in_stack_00000028;
    
    puVar3 = CONCAT44(in_register_00000014,arg2);
    uVar6 = *(arg1 + 6) & 0x4000000;
    if (uVar6 == 0) {
        arg1_00 = *(in_stack_00000028 + 0x10) + *(arg1 + 10) * -0x10;
    }
    else {
        arg1_00 = arg1 + 10;
    }
    puVar4 = (-(uVar6 != 0) & 0xf) + 0xb + arg1;
    iVar2 = (*(arg1 + 4) - puVar4) + arg1;
    puVar5 = puVar4;
    if ((*(arg1 + 6) & 0x2000000) == 0) {
        for (; ((*puVar5 != 0 && (*puVar5 == *puVar3)) && (0 < iVar2)); iVar2 = iVar2 + -2) {
            puVar5 = puVar5 + 1;
            puVar3 = puVar3 + 1;
        }
        uVar1 = *puVar3;
        if ((*puVar5 != *puVar3) || (iVar2 < 1)) goto code_r0x00018326;
        puVar5 = puVar5 + 1;
    }
    else {
        for (; ((*puVar5 != 0 && (*puVar5 == *puVar3)) && (0 < iVar2)); iVar2 = iVar2 + -1) {
            puVar3 = puVar3 + 1;
            puVar5 = puVar5 + 1;
        }
        uVar1 = 0;
        if ((*puVar5 != *puVar3) || (iVar2 < 1)) goto code_r0x00018326;
        puVar5 = puVar5 + 1;
    }
    uVar1 = fcn.0001a48c(arg1_00,arg3,0x10);
    if (uVar1 == 0) {
        if (arg4 != 0) {
            *arg4 = puVar5 - puVar4;
        }
        return 1;
    }
code_r0x00018326:
    return uVar1 & 0xffffffffffffff00;
}


/* fcn.00017dc0 @ 0x17dc0 */

int64_t fcn.00017dc0(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar3 = 0;
    while( true ) {
        iVar2 = arg1;
        cVar1 = fcn.00017f30(iVar2,arg2);
        if (cVar1 == '\0') {
            return iVar3;
        }
        if ((*(iVar2 + 6) & 0xffffff) == 0xffffff) break;
        arg1 = iVar2 + (*(iVar2 + 6) & 0xffffff);
        iVar3 = iVar2;
    }
    return iVar2;
}


/* fcn.00013640 @ 0x13640 */

int64_t fcn.00013640(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    uint16_t uVar2;
    uint64_t uVar3;
    
    uVar3 = -((*(arg1 + 6) & 0x4000000) != 0) & 0xf;
    if ((*(arg1 + 6) & 0x2000000) == 0) {
        iVar1 = *(uVar3 + 0xb + arg1);
    }
    else {
        iVar1 = *(uVar3 + 0xb + arg1);
    }
    if (iVar1 - 0x41U < 0x1a) {
        uVar2 = iVar1 - 0x41;
    }
    else {
        if (0x19 < iVar1 - 0x61U) {
            return *0x21b80 + 0x270;
        }
        uVar2 = iVar1 - 0x61;
    }
    return *0x21b80 + uVar2 * 0x18;
}


/* fcn.000180cc @ 0x180cc */

uint64_t fcn.000180cc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    unkbyte7 Var5;
    uint64_t uVar4;
    uint32_t arg1_00;
    int64_t arg2_00;
    char *pcVar6;
    char *pcVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    bool bVar10;
    
    uVar2 = *(arg1 + 6);
    uVar3 = uVar2 >> 0x18;
    Var5 = &stack0x00000000 >> 8;
    uVar4 = CONCAT71(Var5,uVar3) & 0xffffffffffffff02;
    if (((uVar3 & 2) == (*(arg3 + 6) >> 0x18 & 2)) &&
       (uVar3 = *(arg2 + 0x38) ^ *(arg4 + 0x38), uVar4 = CONCAT71(Var5,uVar3), (uVar3 & 1) == 0)) {
        if ((uVar2 & 0x4000000) == 0) {
            arg1_00 = *(arg2 + 0x10) + *(arg1 + 10) * -0x10;
        }
        else {
            arg1_00 = arg1 + 10;
        }
        uVar9 = *(arg3 + 6) & 0x4000000;
        if (uVar9 == 0) {
            arg2_00 = *(arg4 + 0x10) + *(arg3 + 10) * -0x10;
        }
        else {
            arg2_00 = arg3 + 10;
        }
        uVar4 = fcn.0001a48c(arg1_00,arg2_00,0x10);
        if (uVar4 == 0) {
            pcVar6 = (-((uVar2 & 0x4000000) != 0) & 0xf) + 0xb + arg1;
            uVar4 = (*(arg1 + 4) - pcVar6) + arg1;
            pcVar7 = (-(uVar9 != 0) & 0xf) + 0xb + arg3;
            uVar8 = (*(arg3 + 4) - pcVar7) + arg3;
            if (uVar4 < uVar8) {
                uVar8 = uVar4;
            }
            if ((uVar2 & 0x2000000) == 0) {
                while( true ) {
                    cVar1 = *pcVar6;
                    Var5 = uVar4 >> 8;
                    uVar4 = CONCAT71(Var5,cVar1);
                    if (((cVar1 == '\0') && (pcVar6[1] == '\0')) ||
                       ((cVar1 != *pcVar7 ||
                        ((uVar4 = CONCAT71(Var5,pcVar7[1]), pcVar6[1] != pcVar7[1] || (uVar8 < 1)))))) break;
                    pcVar6 = pcVar6 + 2;
                    pcVar7 = pcVar7 + 2;
                    uVar8 = uVar8 - 2;
                }
                if (*pcVar6 != *pcVar7) goto code_r0x000181fe;
                bVar10 = pcVar6[1] == pcVar7[1];
            }
            else {
                while( true ) {
                    cVar1 = *pcVar6;
                    Var5 = uVar4 >> 8;
                    uVar4 = CONCAT71(Var5,cVar1);
                    if (((cVar1 == '\0') || (cVar1 != *pcVar7)) || (uVar8 < 1)) break;
                    pcVar6 = pcVar6 + 1;
                    pcVar7 = pcVar7 + 1;
                    uVar8 = uVar8 - 1;
                }
                uVar4 = CONCAT71(Var5,*pcVar7);
                bVar10 = *pcVar6 == *pcVar7;
            }
            if ((bVar10) && (0 < uVar8)) {
                return CONCAT71(uVar4 >> 8,1);
            }
        }
    }
code_r0x000181fe:
    return uVar4 & 0xffffffffffffff00;
}


/* fcn.00013840 @ 0x13840 */

void fcn.00013840(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int16_t iVar2;
    uint64_t uVar3;
    int64_t *piVar4;
    int16_t *piVar5;
    ulong *puVar6;
    int64_t iVar7;
    ulong *puVar8;
    
    puVar6 = NULL;
    if (*0x21b80 != 0) {
        iVar7 = *0x21b80;
        piVar4 = fcn.00013640(arg1,arg2);
        uVar3 = *(iVar7 + 0x2a8);
        if (*(iVar7 + 0x2b0) - 0x38U < uVar3) {
            if (*(iVar7 + 0x290) == 0) {
                puVar8 = puVar6;
            }
            else {
                puVar8 = *(iVar7 + 0x298);
                *(iVar7 + 0x298) = puVar8[1];
                if (*(iVar7 + 0x290) == puVar8) {
                    *(iVar7 + 0x290) = *puVar8;
                }
                else {
                    *puVar8[1] = *puVar8;
                }
                *(iVar7 + 0x288) = *(iVar7 + 0x288) + -1;
            }
        }
        else {
            *(iVar7 + 0x2a8) = uVar3 + 0x38;
            puVar8 = *(iVar7 + 0x2a0) + uVar3;
        }
        if (puVar8 != NULL) {
            puVar8[2] = arg1;
            puVar8[3] = 0;
            *(puVar8 + 4) = (arg2 + -0x22250) / 0x48;
            iVar7 = (-((*(arg1 + 6) & 0x4000000) != 0) & 0xf) + 0xb + arg1;
            if ((*(arg1 + 6) & 0x2000000) == 0) {
                piVar5 = puVar8 + 0x24;
                do {
                    iVar2 = *((iVar7 - puVar8) + -0x22 + piVar5);
                    if (iVar2 == 0) break;
                    *piVar5 = iVar2;
                    puVar6 = puVar6 + 1;
                    piVar5 = piVar5 + 1;
                } while (puVar6 < 0x7);
            }
            else {
                piVar5 = puVar8 + 0x24;
                do {
                    cVar1 = *(puVar6 + iVar7 + 1);
                    if (cVar1 == '\0') break;
                    puVar6 = puVar6 + 1;
                    *piVar5 = cVar1;
                    piVar5 = piVar5 + 1;
                } while (puVar6 < 0x7);
            }
            *(puVar8 + puVar6 * 2 + 0x24) = 0;
            *puVar8 = 0;
            puVar8[1] = piVar4[2];
            if (piVar4[1] == 0) {
                piVar4[1] = puVar8;
            }
            else {
                *piVar4[2] = puVar8;
            }
            piVar4[2] = puVar8;
        }
        *piVar4 = *piVar4 + 1;
    }
    return;
}


/* fcn.000136a4 @ 0x136a4 */

int64_t * fcn.000136a4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    bool bVar2;
    char cVar3;
    uint16_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int16_t *piVar7;
    int64_t arg1_00;
    uint64_t uVar8;
    uint64_t *puVar9;
    int64_t *piVar10;
    int64_t *piVar11;
    uint64_t uVar12;
    uchar *in_stack_00000028;
    
    uVar4 = *arg1 - 0x41;
    if ((uVar4 < 0x1a) || (uVar4 = *arg1 - 0x61, uVar4 < 0x1a)) {
        puVar9 = *0x21b80 + uVar4 * 0x18;
    }
    else {
        puVar9 = *0x21b80 + 0x270;
    }
    uVar8 = 0;
    bVar2 = false;
    piVar11 = puVar9[1];
    uVar12 = uVar8;
    if (puVar9[1] == NULL) {
code_r0x00013817:
        if (*puVar9 <= uVar12) goto code_r0x00013822;
    }
    else {
        do {
            piVar10 = piVar11;
            uVar5 = uVar8;
            piVar7 = arg1;
            do {
                piVar7 = piVar7 + 1;
                iVar1 = *(piVar10 + (0x22 - arg1) + piVar7);
                if ((iVar1 == 0) || (iVar1 != *piVar7)) break;
                uVar5 = uVar5 + 1;
            } while (uVar5 < 7);
            iVar1 = *(piVar10 + uVar5 * 2 + 0x24);
            if ((iVar1 == 0) || (iVar1 == *(arg1 + 2 + uVar5 * 2))) {
                cVar3 = fcn.00017f30(piVar10[2],*(piVar10 + 4) * 0x48 + 0x22250);
                if (cVar3 == '\0') {
                    bVar2 = true;
                }
                else {
                    cVar3 = fcn.00018230(piVar10[2],arg1,arg2,arg3);
                    piVar11 = piVar10;
                    if (cVar3 != '\0') break;
                }
            }
            piVar11 = *piVar10;
            uVar12 = uVar12 + 1;
        } while (piVar11 != NULL);
        if (piVar11 != NULL) {
            iVar6 = (*(piVar10 + 4) * 9 + 2) * 8 + 0x22240;
            arg1_00 = piVar10[3];
            *arg4 = iVar6;
            if (arg1_00 == 0) {
                arg1_00 = piVar10[2];
            }
            iVar6 = fcn.00017dc0(arg1_00,iVar6);
            piVar10[3] = iVar6;
            return piVar10;
        }
        if (!bVar2) goto code_r0x00013817;
    }
    uVar8 = 1;
code_r0x00013822:
    *in_stack_00000028 = uVar8;
    return NULL;
}


/* fcn.00018344 @ 0x18344 */

int64_t fcn.00018344(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int64_t arg1_00;
    
    arg1_00 = fcn.0001807c(arg4);
    while( true ) {
        if (arg1_00 == 0) {
            return 0;
        }
        cVar1 = fcn.00018230(arg1_00,arg1,arg2,arg3);
        if (cVar1 != '\0') break;
        arg1_00 = fcn.0001804c(arg1_00,arg4);
    }
    return arg1_00;
}


/* fcn.00013a84 @ 0x13a84 */

void fcn.00013a84(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    
    if (arg1 != 0) {
        piVar2 = fcn.00013640(*(arg1 + 0x10),arg2);
        iVar1 = *0x21b80;
        if (*0x21b80 != 0) {
            if (piVar2[2] == arg1) {
                piVar2[2] = *(arg1 + 8);
            }
            else {
                *(*arg1 + 8) = *(arg1 + 8);
            }
            if (piVar2[1] == arg1) {
                piVar2[1] = *arg1;
            }
            else {
                **(arg1 + 8) = *arg1;
            }
            *piVar2 = *piVar2 + -1;
            *arg1 = 0;
            *(arg1 + 8) = *(iVar1 + 0x298);
            if (*(iVar1 + 0x290) == 0) {
                *(iVar1 + 0x290) = arg1;
            }
            else {
                **(iVar1 + 0x298) = arg1;
            }
            *(iVar1 + 0x288) = *(iVar1 + 0x288) + 1;
            *(iVar1 + 0x298) = arg1;
        }
    }
    return;
}


/* fcn.000139b8 @ 0x139b8 */

void fcn.000139b8(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    char cVar2;
    int64_t iVar3;
    
    if (*0x21b80 != 0) {
        iVar3 = fcn.00013640(arg1,arg2);
        for (puVar1 = *(iVar3 + 8); puVar1 != NULL; puVar1 = *puVar1) {
            iVar3 = *(puVar1 + 4) * 0x48 + 0x22250;
            cVar2 = fcn.00017f30(puVar1[2],iVar3);
            if ((cVar2 != '\0') && (cVar2 = fcn.000180cc(puVar1[2],iVar3,arg1,arg2), cVar2 != '\0')) {
                puVar1[2] = arg1;
                puVar1[3] = 0;
                *(puVar1 + 4) = (arg2 + -0x22250) / 0x48;
                return;
            }
        }
        fcn.00013840(arg1,arg2);
    }
    return;
}


/* fcn.0001804c @ 0x1804c */

void fcn.0001804c(int64_t noname_0,int64_t arg1)

{
    do {
        noname_0 = fcn.00017fd0(noname_0,arg1);
        if (noname_0 == 0) {
            return;
        }
    } while ((-1 < *(noname_0 + 9)) || ((*(noname_0 + 6) & 0x8000000) != 0));
    return;
}


/* fcn.0001a48c @ 0x1a48c */

int64_t fcn.0001a48c(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t *piVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    uint in_R8;
    int64_t iVar3;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    piVar1 = piVar2 + CONCAT44(in_R8,arg3);
    if (7 < CONCAT44(in_R8,arg3)) {
        arg1 = arg1 & 7;
        if ((arg1 != 0) && (arg1 == (arg2 & 7))) {
            iVar3 = 8 - arg1;
            for (; (iVar3 != 0 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
                arg2 = arg2 + 1;
                iVar3 = iVar3 + -1;
            }
        }
        for (; (piVar2 <= piVar1 + -1 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
            arg2 = arg2 + 8;
        }
    }
    while( true ) {
        if (piVar1 <= piVar2) {
            return 0;
        }
        if (*piVar2 != *arg2) break;
        piVar2 = piVar2 + 1;
        arg2 = arg2 + 1;
    }
    return *piVar2 - *arg2;
}


/* fcn.00013f00 @ 0x13f00 */

void fcn.00013f00(int64_t arg1,uint32_t arg2,uint32_t arg3,int64_t arg4)

{
    int *piVar1;
    uint in_register_00000014;
    int *piVar2;
    uint in_R8;
    
    piVar1 = CONCAT44(in_register_00000014,arg2);
    piVar2 = *(arg1 + 0x18);
    if (piVar1 != piVar2) {
        if (*(piVar2 + 1) == CONCAT44(in_R8,arg3)) {
            if ((*piVar2 == 0x5241564e) && (piVar1 = fcn.00017dc0(arg4,arg1), piVar1 != piVar2)) {
                *(arg1 + 0x2a) = arg3;
                return;
            }
            *(arg1 + 0x18) = piVar2 + CONCAT44(in_R8,arg3);
            *(arg1 + 0x2a) = 0;
        }
        else {
            for (; (piVar2 < piVar1 && (*piVar2 == -1)); piVar2 = piVar2 + 1) {
            }
            if (piVar2 != piVar1) {
                *(arg1 + 0x18) = piVar2;
                *(arg1 + 0x2a) = arg3;
            }
        }
    }
    return;
}


/* fcn.00017eb0 @ 0x17eb0 */

int64_t fcn.00017eb0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    
    iVar1 = fcn.00017dc0(arg1,arg4);
    uVar3 = 0;
    if (iVar1 != 0) {
        iVar2 = 10;
        if ((*(iVar1 + 6) & 0x8000000) == 0) {
            iVar2 = (-((*(iVar1 + 6) & 0x4000000) != 0) & 0xf) + 0xb + arg2;
        }
        if (arg3 != 0) {
            if ((*(iVar1 + 6) & 0x10000000) != 0) {
                uVar3 = *((*(iVar1 + 4) - 2) + iVar1);
            }
            *arg3 = (*(iVar1 + 4) - uVar3) - iVar2;
        }
        iVar1 = iVar2 + iVar1;
    }
    return iVar1;
}


/* fcn.00018500 @ 0x18500 */

ulong fcn.00018500(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    ulong uVar1;
    int64_t iStackX_10;
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    int64_t *in_stack_00000038;
    
    if (((arg2 == 0) || (arg4 == 0)) || ((in_stack_00000028 == 0 && (*arg4 != 0)))) {
        uVar1 = 0x8000000000000002;
    }
    else {
        arg1_00 = fcn.00018344(arg1,arg2,&iStackX_10,in_stack_00000030);
        if ((in_stack_00000038 != NULL) && (arg1_00 != 0)) {
            *in_stack_00000038 = arg1_00;
        }
        uVar1 = fcn.00018444(arg1_00,iStackX_10,arg3,arg4);
    }
    return uVar1;
}


/* fcn.00013f80 @ 0x13f80 */

void fcn.00013f80(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint16_t *puVar2;
    
    if ((arg2 != 0) && (arg3 != 0)) {
        if ((*(arg2 + 0x38) & 1) != 0) {
            *arg3 = *arg3 | 1;
        }
        if ((*(arg1 + 9) & 0x50) != 0) {
            puVar2 = arg1 + -2 + *(arg1 + 4);
            *arg3 = *arg3 | *(puVar2 + (2 - *puVar2)) & 0x30;
            iVar1 = fcn.00017dc0(arg1,arg2);
            puVar2 = iVar1 + -2 + *(iVar1 + 4);
            *(arg3 + 8) = *(puVar2 + (3 - *puVar2));
            puVar2 = arg1 + -2 + *(arg1 + 4);
            fcn.0001fab0(arg3 + 0x10,(puVar2 - *puVar2) + 0xb,0x20);
        }
    }
    return;
}


/* fcn.00014018 @ 0x14018 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

uint64_t fcn.00014018(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h,int64_t arg_68h,
                     int64_t arg_70h,int64_t arg_78h,int64_t arg_80h,int64_t arg_88h)

{
    int16_t iVar1;
    char cVar2;
    char cVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    int64_t iVar7;
    int16_t *piVar8;
    uint64_t uVar9;
    ulong *puVar10;
    int64_t arg3_00;
    int16_t *piVar11;
    int64_t iVar12;
    uint32_t in_stack_00000028;
    int64_t *in_stack_00000030;
    int64_t in_stack_00000038;
    int64_t var_48h_2;
    int8_t var_50h_2;
    int64_t var_58h;
    uint8_t auStack_88 [4];
    int16_t aiStack_84 [2];
    uint uStack_80;
    ushort uStack_7c;
    uint32_t uStack_7a;
    uint32_t uStack_70;
    uint32_t uStack_6c;
    int64_t iStack_68;
    ulong *puStack_60;
    int8_t var_50h;
    uint32_t var_4ch;
    int32_t var_48h;
    int16_t var_44h;
    int32_t var_42h;
    int32_t var_38h;
    uint32_t var_34h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_18h;
    int64_t var_10h;
    
    *0xb8 = var_58h + 10;
    puStack_60 = in_stack_00000030[8];
    iStack_68 = 0;
    aiStack_84[0] = 0;
    auStack_88[0] = 0;
    if (puStack_60 == NULL) {
        return 0x8000000000000003;
    }
    uStack_80 = 0xffffffff;
    uStack_7c = 0;
    uStack_70 = 0x80ffffff;
    if ((arg3 & 4U) != 0) {
        uStack_70 = 0x81ffffff;
    }
    if ((arg3 & 8U) != 0) {
        uStack_70 = uStack_70 | 0x20000000;
    }
    uStack_6c = arg3 & 0x30;
    if ((arg3 & 0x30U) != 0) {
        uStack_70 = uStack_70 | 0x50000000;
        iStack_68 = 0x2b;
        auStack_88[0] = arg3 & 0x30;
    }
    uVar9 = in_stack_00000030[2];
    arg3_00 = 0x10;
    uVar4 = in_stack_00000030[5] * -0x10 + uVar9;
    uStack_7a = uStack_70;
    _var_48h = arg1;
    if (uVar4 < uVar9) {
        do {
            iVar1 = aiStack_84[0];
            iVar5 = fcn.0001a48c(uVar9,arg2,0x10);
            if (iVar5 == 0) break;
            aiStack_84[0] = iVar1 + 1;
            uVar9 = uVar9 - 0x10;
        } while (uVar4 < uVar9);
    }
    piVar11 = _var_48h;
    puVar10 = puStack_60;
    if (((in_stack_00000038 == 0) || ((*(in_stack_00000038 + 6) & 0x4000000) == 0)) &&
       ((in_stack_00000030[5] < 0x100 || (aiStack_84[0] < in_stack_00000030[5])))) {
        iVar5 = stack0xffffffffffffffb8 + 1;
        uVar6 = uStack_70;
    }
    else {
        uStack_7a = uStack_70 | 0x4000000;
        iVar5 = stack0xffffffffffffffb8 + 0x10;
        uVar6 = uStack_7a;
    }
    iVar1 = *_var_48h;
    piVar8 = _var_48h;
    while ((iVar1 != 0 && (*(piVar8 + 1) == '\0'))) {
        piVar8 = piVar8 + 1;
        iVar1 = *piVar8;
    }
    if (*piVar8 == 0) {
        uStack_7a = uVar6 | 0x2000000;
        iVar7 = piVar8 - _var_48h >> 1;
        iVar5 = iVar5 + 1;
    }
    else {
        do {
            iVar1 = *piVar8;
            piVar8 = piVar8 + 1;
        } while (iVar1 != 0);
        iVar7 = piVar8 - _var_48h;
    }
    if (iStack_68 + arg4 <= -(iVar5 + iVar7) - 1U) {
        iVar12 = iVar5 + iVar7 + iStack_68 + arg4;
        iVar5 = in_stack_00000030[3];
        iVar7 = iVar12;
        if (aiStack_84[0] == in_stack_00000030[5]) {
            iVar7 = iVar12 + 0x10;
        }
        if (iVar7 + iVar5 <= *in_stack_00000030 + (in_stack_00000030[5] + 1) * -0x10 + -10 + in_stack_00000030[1]) {
            uStack_7c = iVar12;
            cVar2 = (**puStack_60)(puStack_60,*in_stack_00000030);
            cVar3 = '\0';
            if (cVar2 != '\0') {
                fcn.0001fab0(iVar5,&uStack_80,10);
                iVar5 = iVar5 + 10;
                if ((uStack_7a & 0x4000000) == 0) {
                    if (aiStack_84[0] == in_stack_00000030[5]) {
                        cVar2 = (*puVar10[3])(puVar10,in_stack_00000030[2] + in_stack_00000030[5] * -0x10,0x10,arg2);
                        *(in_stack_00000030 + 5) = in_stack_00000030[5] + 1;
                        if (cVar2 == '\0') {
                            fcn.0001fa5e(in_stack_00000030[3],iVar5 - in_stack_00000030[3],0xff);
                            cVar3 = '\0';
                            goto code_r0x00014424;
                        }
                    }
                    arg3_00 = 1;
                    uVar6 = aiStack_84;
                }
                else {
                    uVar6 = arg2;
                }
                fcn.0001fab0(iVar5,uVar6,arg3_00);
                iVar5 = iVar5 + arg3_00;
                if ((uStack_7a & 0x2000000) == 0) {
                    while( true ) {
                        if ((*piVar11 == 0) || (cVar2 == '\0')) break;
                        fcn.0001fab0(iVar5,piVar11,2);
                        piVar11 = piVar11 + 1;
                        iVar5 = iVar5 + 2;
                    }
                    fcn.0001fab0(iVar5,piVar11,2);
                    iVar5 = iVar5 + 2;
                }
                else {
                    if (*piVar11 != 0) {
                        do {
                            if (cVar2 == '\0') break;
                            fcn.0001fab0(iVar5,piVar11,1);
                            piVar11 = piVar11 + 1;
                            iVar5 = iVar5 + 1;
                        } while (*piVar11 != 0);
                        puVar10 = puStack_60;
                    }
                    fcn.0001fab0(iVar5,piVar11,1);
                    iVar5 = iVar5 + 1;
                }
                if ((arg3 & 0x40U) != 0) {
                    fcn.0001fab0(iVar5,_var_50h_2,var_58h);
                    iVar5 = iVar5 + var_58h;
                }
                fcn.0001fab0(iVar5,in_stack_00000028,arg4);
                iVar5 = iVar5 + arg4;
                if (uStack_6c != 0) {
                    uVar6 = iVar5;
                    fcn.0001fab0(uVar6,auStack_88,1);
                    fcn.0001fab0(uVar6 + 1,var_48h_2 + 8,8);
                    fcn.0001fab0(uVar6 + 9,var_48h_2 + 0x10,0x20);
                    iVar5 = in_stack_00000030[3] + -2 + iVar12;
                    fcn.0001fab0(iVar5,&iStack_68,2);
                }
                cVar2 = (*puVar10[3])(puVar10,in_stack_00000030[3],uStack_7c,in_stack_00000030[3]);
                cVar3 = '\0';
                if (cVar2 != '\0') {
                    cVar3 = (*puVar10[3])(puVar10,in_stack_00000030[3],4,"NVAR");
                }
            }
code_r0x00014424:
            (*puVar10[1])(puVar10,*in_stack_00000030,in_stack_00000030[1]);
            if (cVar3 == '\0') {
                fcn.00013f00(in_stack_00000030,iVar5,iVar12,in_stack_00000030[3]);
            }
            else {
                in_stack_00000030[3] = in_stack_00000030[3] + iVar12;
                *(in_stack_00000030 + 0x2a) = iVar12;
            }
            return ~-(cVar3 != '\0') & 0x8000000000000007;
        }
    }
    return 0x8000000000000009;
}


/* fcn.000149dc @ 0x149dc */

int64_t fcn.000149dc(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int16_t *piVar1;
    int16_t *piVar2;
    ulong *puVar3;
    uint32_t uVar4;
    
    piVar1 = *arg1;
    uVar4 = 0;
    if (piVar1 != NULL) {
        puVar3 = arg1;
        do {
            piVar2 = arg2;
            for (; (*piVar1 != 0 && (*piVar1 == *piVar2)); piVar1 = piVar1 + 1) {
                piVar2 = piVar2 + 1;
            }
            if ((*piVar1 == *piVar2) && (*(puVar3 + 1) == arg3)) {
                return (*piVar2 >> 8) << 8;
            }
            uVar4 = uVar4 + 1;
            puVar3 = uVar4 * 0x10 + arg1;
            piVar1 = *puVar3;
        } while (piVar1 != NULL);
    }
    return 1;
}


/* fcn.00018ec4 @ 0x18ec4 */

int64_t fcn.00018ec4(int64_t arg1,uint32_t arg2,uint32_t arg3)

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


/* fcn.00014bc8 @ 0x14bc8 */

uint64_t fcn.00014bc8(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    char16_t *pcVar2;
    char16_t *pcVar3;
    char16_t cVar4;
    char16_t cVar5;
    
    uVar1 = fcn.0001a48c(arg2,0x21228,0x10);
    if (uVar1 == 0) {
        cVar4 = *arg1;
        pcVar2 = L"StdDefaults";
        pcVar3 = arg1;
        if (cVar4 != L'\0') {
            cVar5 = cVar4;
            do {
                if (cVar5 != *pcVar2) break;
                pcVar3 = pcVar3 + 1;
                pcVar2 = pcVar2 + 1;
                cVar5 = *pcVar3;
            } while (cVar5 != L'\0');
        }
        uVar1 = *pcVar2;
        if (*pcVar3 != *pcVar2) {
            pcVar3 = L"MfgDefaults";
            while ((cVar4 != L'\0' && (cVar4 == *pcVar3))) {
                arg1 = arg1 + 2;
                pcVar3 = pcVar3 + 1;
                cVar4 = *arg1;
            }
            uVar1 = *pcVar3;
            if (*arg1 != *pcVar3) goto code_r0x00014c52;
        }
        uVar1 = CONCAT71(uVar1 >> 8,1);
    }
    else {
code_r0x00014c52:
        uVar1 = uVar1 & 0xffffffffffffff00;
    }
    return uVar1;
}


/* fcn.00014b68 @ 0x14b68 */

ulong fcn.00014b68(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t *piVar2;
    uint in_register_0000000c;
    int64_t *piVar3;
    uint64_t uVar4;
    
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    if ((piVar3 != NULL) && (uVar4 = 0, *piVar3 != 0)) {
        piVar2 = piVar3;
        do {
            cVar1 = (**piVar2)(arg2,arg3);
            if (cVar1 != '\0') {
                return 1;
            }
            uVar4 = uVar4 + 1;
            piVar2 = piVar3 + uVar4;
        } while (*piVar2 != 0);
    }
    return 0;
}


/* fcn.0001492c @ 0x1492c */

uint64_t fcn.0001492c(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    uint16_t *puVar3;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if (((arg2 != 0) && (arg3 != 0)) && (*piVar2 != 0)) {
        do {
            *0x20 = fcn.0001a48c(piVar2 + 8,arg3,0x10);
            if (*0x20 == NULL) {
                *0x20 = *piVar2;
                if ((**0x20 == 0x2a) && (*(*0x20 + 2) == 0)) {
code_r0x000149d7:
                    return CONCAT71(*0x20 >> 8,1);
                }
                puVar3 = arg2;
                for (; (**0x20 != 0 && (**0x20 == *puVar3)); *0x20 = *0x20 + 2) {
                    puVar3 = puVar3 + 1;
                }
                uVar1 = **0x20;
                *0x20 = *puVar3;
                if (uVar1 == *puVar3) goto code_r0x000149d7;
            }
            piVar2 = piVar2 + 3;
        } while (*piVar2 != 0);
    }
    return *0x20 & 0xffffffffffffff00;
}


/* fcn.00019178 @ 0x19178 */

void fcn.00019178(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.000191dc(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.000191dc @ 0x191dc */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.000191dc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

{
    uint16_t uVar1;
    uint32_t uVar2;
    char cVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    char *pcVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    uint32_t uVar13;
    int64_t iVar14;
    char *pcVar15;
    uint32_t uVar16;
    uint64_t *puVar17;
    char cVar18;
    uint64_t *puVar19;
    uint64_t uVar20;
    int64_t *piVar21;
    uint8_t *puVar22;
    uint8_t *puVar23;
    bool bVar24;
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
    
    puStack_b0 = NULL;
    if (arg2 == 0) {
        uVar6 = arg3 & 0x2000;
        if ((arg3 & 0x2000U) == 0) goto code_r0x0001923b;
    }
    else {
        uVar6 = arg3 & 0x2000;
        if (((arg3 & 0x2000U) == 0) && (arg1 == 0)) {
            return 0;
        }
    }
    if (arg4 == 0) {
        return 0;
    }
code_r0x0001923b:
    iVar14 = 2;
    uVar20 = 1000000;
    if ((arg3 & 0x40U) == 0) {
        if (1000000 < arg2) {
            return 0;
        }
        uVar13 = 1;
    }
    else {
        if (1000000 < arg2) {
            return 0;
        }
        uVar13 = 2;
    }
    if ((arg3 >> 8 & 1) == 0) {
        uVar20 = 0;
        if (arg4 != 0) {
            cVar3 = *arg4;
            while (cVar3 != '\0') {
                if (999999 < uVar20) {
                    return 0;
                }
                uVar20 = uVar20 + 1;
                cVar3 = *(uVar20 + arg4);
            }
        }
        if (1000000 < uVar20) {
            return 0;
        }
        iVar14 = 1;
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.00018f00(arg4,0xf4241);
        if (uVar20 < uVar5) {
            return 0;
        }
        uStack_98 = 0xffff;
    }
    var_78h = iVar14;
    if (uVar6 == 0) {
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
        pcStack_d8 = arg1 + (arg2 + -1) * uVar13;
    }
    if (iVar14 == 1) {
        iVar4 = 0;
    }
    else {
        iVar4 = *(arg4 + 1) << 8;
    }
    uVar20 = *arg4;
    uVar6 = iVar4;
    puStackX_20 = arg4;
    while( true ) {
        uStack_a8 = (uVar20 | uVar6) & uStack_98;
        if ((uStack_a8 == 0) || ((arg1 != NULL && (pcStack_d8 <= arg1)))) break;
        uVar6 = 0;
        uVar5 = arg3 & 0x2140;
        cVar18 = '\0';
        cVar3 = '\0';
        uStack_a0 = 0;
        iVar4 = 0;
        bVar24 = false;
        uVar20 = 1;
        uStack_b8 = 1;
        _cStack0000000000000030 = _cStack0000000000000030 & 0xffffffffffffff00;
        uStack_c0 = 0;
        iStack_90 = 0;
        uStackX_18 = uVar5;
        if (uStack_a8 == 10) {
            puVar23 = puStackX_20 + var_78h;
            pcVar9 = 0x212d4;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar23[1] << 8;
            }
            uStack_a8 = (iVar4 | *puVar23) & uStack_98;
            if (uStack_a8 != 0xd) {
                puVar23 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0xd) {
            puVar22 = puStackX_20 + var_78h;
            if (var_78h == 1) {
                puVar23 = puStackX_20;
                puStackX_20 = puVar22;
            }
            else {
code_r0x000195fe:
                iVar4 = puVar22[1] << 8;
                puVar23 = puStackX_20;
                puStackX_20 = puVar22;
            }
code_r0x00019606:
            uStack_a8 = (iVar4 | *puStackX_20) & uStack_98;
            if (uStack_a8 == 10) {
                pcVar9 = 0x212d4;
                puVar23 = puStackX_20;
            }
            else {
                pcVar9 = 0x212d8;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar17 = puStack_b0;
            puVar19 = in_stack_00000028;
            puVar23 = puStackX_20;
code_r0x000193ab:
            puStackX_20 = puVar23 + var_78h;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puStackX_20[1] << 8;
            }
            uStack_a8 = (*puStackX_20 | iVar4) & uStack_98;
            if (0x2d < uStack_a8) {
                if (uStack_a8 != 0x2e) {
                    if (uStack_a8 == 0x30) {
                        if ((uVar5 & 0x800) == 0) {
                            uVar5 = uVar5 | 0x20;
                            uStackX_18 = uVar5;
                        }
                    }
                    else {
                        if (uStack_a8 < 0x31) goto code_r0x00019565;
                        if (0x39 < uStack_a8) {
                            if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                uVar5 = uVar5 | 0x10;
                                goto code_r0x0001954e;
                            }
                            goto code_r0x00019565;
                        }
                    }
                    uVar6 = 0;
                    uStack_c0 = 0;
                    if (0x2f < uStack_a8) {
                        do {
                            if (0x39 < uStack_a8) break;
                            puStackX_20 = puStackX_20 + var_78h;
                            uVar6 = uStack_a8 + (uVar6 * 5 + -0x18) * 2;
                            if (var_78h == 1) {
                                iVar4 = 0;
                            }
                            else {
                                iVar4 = puStackX_20[1] << 8;
                            }
                            uStack_a8 = (*puStackX_20 | iVar4) & uStack_98;
                        } while (0x2f < uStack_a8);
                        uStack_c0 = uVar6;
                    }
                    puVar23 = puStackX_20 + -var_78h;
                    uVar6 = uStack_c0;
                    if ((uVar5 & 0x800) == 0) {
                        uVar5 = uVar5 | 0x200;
                        uStack_a0 = uStack_c0;
                        uStackX_18 = uVar5;
                    }
                    else {
                        uVar20 = uStack_c0;
                        uStack_b8 = uStack_c0;
                    }
                    goto code_r0x000193ab;
                }
                uVar5 = uVar5 | 0x800;
code_r0x0001954e:
                puVar23 = puStackX_20;
                uStackX_18 = uVar5;
                goto code_r0x000193ab;
            }
            if (uStack_a8 == 0x2d) {
                uVar5 = uVar5 | 1;
                goto code_r0x0001954e;
            }
            if (uStack_a8 != 0) {
                if (uStack_a8 == 0x20) {
                    uVar5 = uVar5 | 4;
                    goto code_r0x0001954e;
                }
                if (uStack_a8 == 0x2a) {
                    if ((uVar5 & 0x800) == 0) {
                        uVar5 = uVar5 | 0x200;
                        if (puVar17 == NULL) {
                            uStack_a0 = *puVar19;
                            puVar19 = puVar19 + 1;
                            in_stack_00000028 = puVar19;
                        }
                        else {
                            uStack_a0 = *puVar17;
                            puVar17 = puVar17 + 1;
                            puStack_b0 = puVar17;
                        }
                        puVar23 = puStackX_20;
                        uStackX_18 = uVar5;
                    }
                    else {
                        if (puVar17 == NULL) {
                            uStack_b8 = *puVar19;
                            puVar19 = puVar19 + 1;
                            in_stack_00000028 = puVar19;
                        }
                        else {
                            uStack_b8 = *puVar17;
                            puVar17 = puVar17 + 1;
                            puStack_b0 = puVar17;
                        }
                        puVar23 = puStackX_20;
                        uVar20 = uStack_b8;
                    }
                    goto code_r0x000193ab;
                }
                if (uStack_a8 != 0x2b) {
                    if (uStack_a8 == 0x2c) {
                        uVar5 = uVar5 | 8;
                        goto code_r0x0001954e;
                    }
                    goto code_r0x00019565;
                }
                uVar5 = uVar5 | 2;
                goto code_r0x0001954e;
            }
            uVar20 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar23;
code_r0x00019565:
            puVar23 = puStackX_20;
            if (uStack_a8 < 0x68) {
                if (uStack_a8 == 0x67) {
                    if (puVar17 == NULL) {
                        uVar20 = *puVar19;
                        in_stack_00000028 = puVar19 + 1;
                    }
                    else {
                        uVar20 = *puVar17;
                        puStack_b0 = puVar17 + 1;
                    }
                    if (uVar20 == 0) {
                        pcVar9 = "<null guid>";
                        cVar18 = '\0';
                    }
                    else {
                        fcn.00019f4c(&var_68h_2,0x26,0,0x21268);
                        pcVar9 = &var_68h_2;
                        uVar6 = uStack_c0;
                        cVar18 = cStack0000000000000030;
                    }
                    uVar20 = uStack_b8;
                }
                else {
                    if (uStack_a8 != 10) {
                        if (uStack_a8 == 0xd) {
                            puVar22 = puStackX_20 + var_78h;
                            if (var_78h != 1) goto code_r0x000195fe;
                            iVar4 = 0;
                            puStackX_20 = puVar22;
                            goto code_r0x00019606;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x000197fd;
                        if (uStack_a8 == 0x58) goto code_r0x000198f2;
                        if (uStack_a8 == 0x61) goto code_r0x00019806;
                        if (uStack_a8 == 99) {
                            if (puVar17 == NULL) {
                                uVar1 = *puVar19;
                                in_stack_00000028 = puVar19 + 1;
                            }
                            else {
                                uVar1 = *puVar17;
                                puStack_b0 = puVar17 + 1;
                            }
                            var_80h = uVar1;
                            pcVar9 = &var_80h;
                            goto code_r0x00019390;
                        }
                        if (uStack_a8 != 100) goto code_r0x0001938c;
                        goto code_r0x00019909;
                    }
                    puVar23 = puStackX_20 + var_78h;
                    pcVar9 = 0x212d4;
                    if (var_78h == 1) {
                        iVar4 = 0;
                    }
                    else {
                        iVar4 = puVar23[1] << 8;
                    }
                    uStack_a8 = (iVar4 | *puVar23) & uStack_98;
                    if (uStack_a8 != 0xd) {
                        puVar23 = puStackX_20;
                    }
                }
                goto code_r0x00019b1d;
            }
            if (uStack_a8 != 0x70) {
                if (uStack_a8 == 0x72) {
                    if (puVar17 == NULL) {
                        uVar11 = *puVar19;
                        in_stack_00000028 = puVar19 + 1;
                    }
                    else {
                        uVar11 = *puVar17;
                        puStack_b0 = puVar17 + 1;
                    }
                    pcVar9 = &var_68h_2;
                    if (uVar11 < 0) {
                        if ((uVar11 & 0x7fffffffffffffff) - 1 < 0x21) {
                            pcVar9 = (uVar11 & 0x7fffffffffffffff) * 0x15;
                            iVar14 = 0x2136b;
                            goto code_r0x000198b9;
                        }
                    }
                    else if (uVar11 < 6) {
                        iVar14 = uVar11 * 0x19;
                        pcVar9 = "Success";
code_r0x000198b9:
                        pcVar9 = pcVar9 + iVar14;
                        if (pcVar9 != &var_68h_2) goto code_r0x00019b1d;
                    }
                    fcn.00019f4c(&var_68h_2,0x26,0,0x212cc);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x000197fd:
                        uVar5 = uVar5 | 0x400;
                        uStackX_18 = uVar5;
code_r0x00019806:
                        if (puVar17 == NULL) {
                            pcVar9 = *puVar19;
                            in_stack_00000028 = puVar19 + 1;
                        }
                        else {
                            pcVar9 = *puVar17;
                            puStack_b0 = puVar17 + 1;
                        }
                        if (pcVar9 == NULL) {
                            uVar5 = uVar5 & 0xfffffffffffffbff;
                            pcVar9 = "<null string>";
                            uStackX_18 = uVar5;
                        }
                        uVar20 = uVar20 & -((uVar5 & 0x800) != 0);
                        goto code_r0x00019b1d;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x0001938c;
                            goto code_r0x000198f6;
                        }
                        goto code_r0x000198fb;
                    }
                    if (puVar17 == NULL) {
                        uVar11 = *puVar19;
                        in_stack_00000028 = puVar19 + 1;
                    }
                    else {
                        puStack_b0 = puVar17 + 1;
                        uVar11 = *puVar17;
                    }
                    if (uVar11 == 0) {
                        pcVar9 = "<null time>";
                        goto code_r0x00019b1d;
                    }
                    fcn.00019f4c(&var_68h_2,0x26,0,0x212b0);
                    pcVar9 = &var_68h_2;
                }
                uVar6 = uStack_c0;
                goto code_r0x00019b1d;
            }
            uVar5 = uVar5 & 0xffffffffffffffd9 | 0x10;
code_r0x000198f2:
            uVar5 = uVar5 | 0x20;
code_r0x000198f6:
            uVar5 = uVar5 | 0x80;
code_r0x000198fb:
            if (-1 < uVar5) {
                uVar5 = uVar5 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x00019909:
            if ((uVar5 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar6 = *puVar17;
                    goto code_r0x0001994b;
                }
                uVar6 = *puVar19;
                in_stack_00000028 = puVar19 + 1;
            }
            else if (puVar17 == NULL) {
                uVar6 = *puVar19;
                in_stack_00000028 = puVar19 + 1;
            }
            else {
                uVar6 = *puVar17;
code_r0x0001994b:
                puStack_b0 = puVar17 + 1;
            }
            cVar3 = (uVar5 & 4) << 3;
            if ((uVar5 & 2) != 0) {
                cVar3 = '+';
            }
            bVar24 = (uVar5 & 8) != 0;
            if (uVar5 < '\0') {
                uVar16 = 0x10;
                bVar24 = false;
                if (((uVar5 & 0x10) == 0) && (uVar2 = 0x10, uVar6 < 0)) {
code_r0x000199d3:
                    uVar16 = uVar2;
                    uVar6 = uVar6 & 0xffffffff;
                }
            }
            else {
                uVar16 = 10;
                if ((uVar5 & 8) != 0) {
                    uVar5 = uVar5 & 0xffffffffffffffdf;
                    uVar20 = 1;
                }
                if ((uVar6 < 0) && (uVar5 >> 0xe == 0)) {
                    cVar3 = '-';
                    uVar6 = -uVar6;
                }
                else {
                    uVar2 = 10;
                    if ((uVar5 & 0x4010) == 0x4000) goto code_r0x000199d3;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar21 = &var_68h_2;
            uVar11 = uVar6;
            do {
                uVar7 = uVar11 / uVar16;
                piVar21 = piVar21 + 1;
                *piVar21 = "0123456789ABCDEFB"[uVar11 % uVar16];
                uVar11 = uVar7;
            } while (uVar7 != 0);
            uStack_c0 = piVar21 - &var_68h_2;
            if (uVar6 == 0) {
                uStack_c0 = uStack_c0 & -(uVar20 != 0);
            }
            pcVar9 = &var_68h_2 + uStack_c0;
            iStack_90 = 3 - uStack_c0 % 3;
            if (uStack_c0 % 3 == 0) {
                iStack_90 = 0;
            }
            if ((bVar24) && (uStack_c0 != 0)) {
                uStack_c0 = uStack_c0 + (uStack_c0 - 1) / 3;
            }
            if (cVar3 != '\0') {
                uStack_c0 = uStack_c0 + 1;
                uVar20 = uVar20 + 1;
            }
            uVar5 = uVar5 | 0x1000;
            cVar18 = '\x01';
            uVar6 = uStack_c0;
            uStackX_18 = uVar5;
            if ((uVar5 & 0xa21) == 0x220) {
                uVar20 = uStack_a0;
            }
        }
        else {
code_r0x0001938c:
            pcVar9 = &uStack_a8;
code_r0x00019390:
            uVar5 = uVar5 | 0x400;
            uStackX_18 = uVar5;
            puVar23 = puStackX_20;
        }
code_r0x00019b1d:
        puStackX_20 = puVar23;
        uVar16 = uVar5;
        iVar14 = ((uVar5 & 0x400) != 0) + 1;
        _cStack0000000000000030 = (-((uVar5 & 0x400) != 0) & 0xff00) + 0xff;
        if ((uVar5 >> 0xc & 1) == 0) {
            uVar6 = 0;
            pcVar15 = pcVar9 + 1;
            while ((((pcVar15[-1] != '\0' || (((uVar5 & 0x400) != 0 && (*pcVar15 != '\0')))) &&
                    ((uVar6 < uVar20 || ((uVar5 >> 0xb & 1) == 0)))) &&
                   ((_cStack0000000000000030 & (*pcVar15 << 8 | pcVar15[-1])) != 0))) {
                uVar6 = uVar6 + 1;
                pcVar15 = pcVar15 + iVar14;
            }
            uStack_c0 = uVar6;
        }
        else {
            iVar14 = -iVar14;
        }
        if (uVar20 < uVar6) {
            uVar20 = uVar6;
        }
        uVar11 = uVar16 & 0x201;
        var_40h = uVar11;
        pcVar15 = pcStack_d8;
        if (uVar11 == 0x200) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar20) * uVar13;
            if (((uVar5 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                arg1 = fcn.000191a8(arg1,pcStack_d8,uStack_a0 - uVar20,0x20);
            }
        }
        if (cVar18 == '\0') {
            uVar7 = uVar13;
            uStack_d0 = uStack_d0 + (uVar20 - uVar6) * uVar7;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.000191a8(arg1,pcVar15,uVar20 - uVar6,(uVar16 & 0x2000) + 0x20);
            }
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar7, (uVar5 & 0x2000) == 0)) && (arg1 != NULL)) {
                iVar10 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar7 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar7;
                    iVar10 = iVar10 + 1;
                } while (iVar10 < 1);
            }
        }
        else {
            if (cVar3 != '\0') {
                uVar7 = uVar13;
                uStack_d0 = uStack_d0 + uVar7;
                if (((uVar5 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                    iVar10 = 0;
                    do {
                        if (pcStack_d8 <= arg1) break;
                        *arg1 = cVar3;
                        if (uVar7 != 1) {
                            *(arg1 + 1) = '\0';
                        }
                        arg1 = arg1 + uVar7;
                        iVar10 = iVar10 + 1;
                    } while (iVar10 < 1);
                }
            }
            uVar7 = uVar13;
            uStack_d0 = uStack_d0 + (uVar20 - uVar6) * uVar7;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.000191a8(arg1,pcStack_d8,uVar20 - uVar6,(uVar16 & 0x2000) + 0x30);
            }
        }
        arg3 = uVar5;
        if ((cVar3 != '\0') < uStack_c0) {
            uVar6 = cVar3 != '\0';
            iVar10 = iStack_90;
            do {
                if ((*pcVar9 == '\0') && ((iVar14 < 2 || (*(pcVar9 + 1) == '\0')))) break;
                uStack_d0 = uStack_d0 + uVar7;
                uVar11 = *pcVar9 & _cStack0000000000000030;
                if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                    iVar12 = 0;
                    do {
                        if (pcStack_d8 <= arg1) break;
                        *arg1 = uVar11;
                        if (uVar7 != 1) {
                            *(arg1 + 1) = uVar11 >> 8;
                        }
                        arg1 = arg1 + uVar7;
                        iVar12 = iVar12 + 1;
                    } while (iVar12 < 1);
                }
                pcVar9 = pcVar9 + iVar14;
                uVar11 = uVar6 + 1;
                if ((bVar24) && (iVar10 = iVar10 + 1, iVar10 == 3)) {
                    iVar12 = 0;
                    uVar11 = uVar6 + 2;
                    if (uStack_c0 <= uVar11) break;
                    uStack_d0 = uStack_d0 + uVar7;
                    iVar10 = iVar12;
                    if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                        iVar8 = 0;
                        do {
                            iVar10 = iVar12;
                            if (pcStack_d8 <= arg1) break;
                            *arg1 = ',';
                            if (uVar7 != 1) {
                                *(arg1 + 1) = '\0';
                            }
                            arg1 = arg1 + uVar7;
                            iVar8 = iVar8 + 1;
                            iVar10 = 0;
                        } while (iVar8 < 1);
                    }
                }
                uVar6 = uVar11;
            } while (uVar11 < uStack_c0);
            arg3 = uStackX_18;
            uVar11 = var_40h;
        }
        if (uVar11 == 0x201) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar20) * uVar7;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.000191a8(arg1,pcStack_d8,uStack_a0 - uVar20,0x20);
            }
        }
        puStackX_20 = puStackX_20 + var_78h;
        if (var_78h == 1) {
            iVar4 = 0;
        }
        else {
            iVar4 = puStackX_20[1] << 8;
        }
        uVar20 = iVar4;
        uVar6 = *puStackX_20;
    }
    uVar6 = uVar13;
    iVar14 = 0;
    if ((arg3 >> 0xd & 1) != 0) {
        return uStack_d0 / uVar6;
    }
    pcVar9 = arg1;
    do {
        if (pcStack_d8 + uVar6 <= pcVar9) break;
        *pcVar9 = '\0';
        if (uVar6 != 1) {
            pcVar9[1] = '\0';
        }
        pcVar9 = pcVar9 + uVar6;
        iVar14 = iVar14 + 1;
    } while (iVar14 < 1);
    return (arg1 - _var_70h) / uVar6;
}


/* fcn.00018848 @ 0x18848 */

void fcn.00018848(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iStackX_10;
    
    if (arg2 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = fcn.00018744(arg2,arg3,arg4,0);
    }
    if (-1 < iVar1) {
        fcn.00018598(iStackX_10,arg2,arg1,arg3);
    }
    return;
}


/* fcn.00014784 @ 0x14784 */

int64_t fcn.00014784(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t auStackX_8 [2];
    int64_t arg_60h;
    int64_t in_stack_ffffffffffffffa0;
    uchar uVar5;
    unkbyte7 in_stack_ffffffffffffffa9;
    int64_t arg_78h;
    uchar uVar6;
    unkbyte7 Var7;
    uchar uVar8;
    unkbyte7 Var9;
    
    uVar5 = 0;
    arg_78h = 0;
    uVar6 = 0;
    Var7 = 0;
    uVar8 = 0;
    Var9 = 0;
    iVar4 = -0x7ffffffffffffffe;
    iVar3 = arg2;
    if (arg1 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = fcn.00018500(arg1,arg2,0,&stack0xffffffffffffff98);
    }
    if (iVar1 == -0x7ffffffffffffffb) {
        iVar4 = -0x7fffffffffffffec;
    }
    else {
        iVar1 = *(arg3 + 8);
        arg_60h = iVar1;
        iVar2 = fcn.00012e7c(iVar1,iVar3);
        if (iVar2 == 0) {
            iVar4 = -0x7ffffffffffffff7;
        }
        else {
            if (arg1 != 0) {
                iVar3 = arg2;
                iVar1 = arg_60h;
                iVar4 = fcn.00018500(arg1,arg2,auStackX_8,&stack0xffffffffffffff98);
                arg_60h = iVar1;
            }
            if (iVar4 < 0) {
                fcn.00012ed4(iVar2,iVar3);
            }
            else {
                if (in_stack_ffffffffffffffa0 != 0) {
                    fcn.00013f80(in_stack_ffffffffffffffa0,arg3,&stack0xffffffffffffffa8);
                }
                iVar4 = fcn.00014018(arg1,arg2,auStackX_8[0],iVar1,arg_60h,in_stack_ffffffffffffffa0,
                                     CONCAT71(in_stack_ffffffffffffffa9,uVar5),arg_78h,CONCAT71(Var7,uVar6),
                                     CONCAT71(Var9,uVar8));
                fcn.00012ed4(iVar2,arg2);
            }
        }
    }
    return iVar4;
}


/* fcn.00016c24 @ 0x16c24 */

ulong fcn.00016c24(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    ulong uVar1;
    uint uVar2;
    
    uVar2 = arg3;
    arg1_00 = fcn.00012e7c(arg2,arg2);
    *arg1 = arg1_00;
    if (arg1_00 == 0) {
        uVar1 = 0x8000000000000009;
    }
    else {
        *(arg1 + 8) = arg2;
        fcn.0001fa5e(arg1_00,arg2,CONCAT44(arg3 >> 0x20,CONCAT31(arg3 >> 8,0xff)));
        *(arg1 + 0x38) = arg4;
        *(arg1 + 0x40) = 0x20400;
        *(arg1 + 0x3c) = uVar2;
        fcn.000188cc(arg1);
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00015050 @ 0x15050 */

int64_t fcn.00015050(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    char cVar2;
    ushort *arg2_00;
    int64_t iVar3;
    ushort *arg2_01;
    ulong uStackX_8;
    code *in_stack_00000028;
    ushort auStack_38 [8];
    
    uVar1 = *(arg1 + 8);
    arg2_00 = fcn.00012e7c(uVar1,arg2);
    if (arg2_00 == NULL) {
        iVar3 = -0x7ffffffffffffff7;
    }
    else {
        *arg2_00 = 0;
        arg2_01 = arg2_00;
        uStackX_8 = uVar1;
        iVar3 = fcn.00018848(&uStackX_8,arg2_00,auStack_38,arg1);
        while (-1 < iVar3) {
            if ((arg3 == 0) || (cVar2 = (*arg3)(arg4,arg2_00,auStack_38), cVar2 != '\0')) {
                arg2_01 = auStack_38;
                iVar3 = fcn.00014784(arg2_00,arg2_01,arg1,arg2);
                if ((iVar3 < 0) && ((iVar3 != -0x7ffffffffffffff2 && (iVar3 != -0x7fffffffffffffec))))
                goto code_r0x00015197;
            }
            arg2_01 = arg2_00;
            uStackX_8 = uVar1;
            iVar3 = fcn.00018848(&uStackX_8,arg2_00,auStack_38,arg1);
        }
        if ((iVar3 == -0x7ffffffffffffff2) || (iVar3 == -0x7fffffffffffffec)) {
            iVar3 = 0;
        }
        if ((-1 < iVar3) && (in_stack_00000028 != NULL)) {
            arg2_01 = 0x14e90;
            *0x21b70 = arg1;
            *0x21bd8 = arg2;
            iVar3 = (*in_stack_00000028)(0x14e44);
            *0x21b70 = 0;
            *0x21bd8 = 0;
        }
code_r0x00015197:
        fcn.00012ed4(arg2_00,arg2_01);
    }
    return iVar3;
}


/* fcn.00015294 @ 0x15294 */

ulong fcn.00015294(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    ulong uVar3;
    uchar *puVar4;
    
    iVar1 = fcn.00018cdc(arg1);
    if ((iVar1 == 0) || (*(arg1 + 0x20) != arg2)) {
        if (arg3 != '\0') {
            *(arg1 + 0x28) = 0x4856465f;
            *(arg1 + 0x30) = 0x48;
            *(arg1 + 0x34) = 0;
            *(arg1 + 0x20) = arg2;
            uVar2 = fcn.00018cdc(arg1);
            if (uVar2 != 0) {
                puVar4 = arg1 + 0x17 + uVar2;
                if (puVar4 != NULL) {
                    *puVar4 = 0xf0;
                }
            }
        }
        uVar3 = 0;
    }
    else {
        uVar3 = 1;
    }
    return uVar3;
}


/* fcn.00018dc8 @ 0x18dc8 */

//WARNING: Variable defined which should be unmapped: var_10h

ulong fcn.00018dc8(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uchar auStackX_10 [8];
    uint64_t uStackX_18;
    int64_t var_28h;
    uint32_t var_30h;
    int64_t var_38h;
    ulong uStack_38;
    int64_t iStack_30;
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    if (arg2 == 0) {
        uVar1 = 0x8000000000000002;
    }
    else {
        iVar2 = (**(*0x21c50 + 0x138))(2,0x20140,0,&uStackX_18,&iStack_30);
        if ((-1 < iVar2) && (uVar3 = 0, uStackX_18 != 0)) {
            do {
                iVar2 = (**(*0x21c50 + 0x98))(*(iStack_30 + uVar3 * 8),0x20140,&var_bp_20h);
                if (-1 < iVar2) {
                    var_28h = 0;
                    uStack_38 = 0;
                    iVar2 = (**(var_bp_20h + 0x18))(var_bp_20h,0x207e0,0x19,0,&var_28h,&uStack_38,auStackX_10);
                    if (-1 < iVar2) {
                        *arg1 = var_28h;
                        *arg2 = uStack_38;
                        return 0;
                    }
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < uStackX_18);
        }
        uVar1 = 0x800000000000000e;
    }
    return uVar1;
}


/* fcn.0001893c @ 0x1893c */

int64_t fcn.0001893c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iStackX_20;
    
    iVar1 = fcn.00018344(arg1,0x21228,&iStackX_20,arg2);
    if (iVar1 != 0) {
        iVar1 = fcn.00017eb0(iVar1,iStackX_20,arg3 + 8,arg2);
        *arg3 = iVar1;
        if (iVar1 != 0) {
            *(arg3 + 0x3c) = 0;
            *(arg3 + 0x40) = 0;
            *(arg3 + 0x38) = 7;
            fcn.000188cc(arg3);
            return arg3;
        }
    }
    return 0;
}


/* fcn.00015650 @ 0x15650 */

uint64_t fcn.00015650(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    char cVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    
    if (*(arg3 + 0x20) == NULL) {
code_r0x00015744:
        uVar3 = fcn.00015050(arg2,arg1,0,0);
    }
    else {
        uVar3 = (**(arg3 + 0x20))(arg3,*arg1);
        if (uVar3 < 0) {
            return uVar3;
        }
        fcn.000188cc(arg1);
        if (uVar3 == 0x4000000000000001) goto code_r0x00015744;
        cVar1 = (**arg3)(arg3,*arg1,*(arg1 + 8));
        cVar2 = '\0';
        if (cVar1 != '\0') {
            iVar5 = *(arg2 + 0x18) - *(arg2 + 0x20);
            cVar1 = (**(arg3 + 0x18))(arg3,*(arg1 + 0x20),iVar5);
            cVar2 = '\0';
            if (cVar1 != '\0') {
                *(arg1 + 0x18) = *(arg1 + 0x20) + iVar5;
                *(arg1 + 0x28) = *(arg2 + 0x28);
                iVar5 = *(arg2 + 0x28);
                cVar2 = (**(arg3 + 0x18))(arg3,*(arg1 + 0x10) + iVar5 * -0x10 + 0x10,iVar5 * 0x10,
                                          *(arg2 + 0x10) + iVar5 * -0x10 + 0x10);
            }
        }
        (**(arg3 + 8))(arg3,*arg1,*(arg1 + 8));
        uVar3 = ~-(cVar2 != '\0') & 0x8000000000000007;
    }
    uVar4 = uVar3;
    if (*(arg3 + 0x28) != NULL) {
        uVar4 = (**(arg3 + 0x28))(arg3,uVar3 < 0,*arg1);
        if (uVar3 < 0) {
            return uVar3;
        }
        if (-1 < uVar4) goto code_r0x00015792;
        (**(arg3 + 0x28))(arg3,1,*arg1);
    }
    if (uVar4 < 0) {
        return uVar4;
    }
code_r0x00015792:
    *0x22248 = 0;
    if (arg1 == *0x22520) {
        fcn.00016d78();
    }
    fcn.00013be0();
    return uVar4;
}


/* fcn.00013cc0 @ 0x13cc0 */

ulong fcn.00013cc0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg4_00;
    int64_t iVar1;
    int64_t arg1_00;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    bool bVar6;
    int64_t *in_stack_00000028;
    int64_t *in_stack_00000030;
    int64_t *in_stack_00000038;
    int64_t *in_stack_00000040;
    int64_t *in_stack_00000048;
    char cStack_58;
    ulong uStack_50;
    int64_t aiStack_48 [2];
    
    if (*0x21b80 == 0) {
        iVar1 = 0;
    }
    else {
        iVar1 = fcn.000136a4(arg1,arg2,&uStack_50,aiStack_48);
        if (iVar1 == 0) {
            if (cStack_58 == '\0') {
                return 0;
            }
        }
        else {
            if (arg3 != 0) {
                *arg3 = uStack_50;
            }
            if (in_stack_00000030 != NULL) {
                *in_stack_00000030 = aiStack_48[0];
            }
            if (arg4 != 0) {
                *arg4 = *(iVar1 + 0x10);
            }
            if (in_stack_00000028 != NULL) {
                *in_stack_00000028 = *(iVar1 + 0x18);
            }
            if (in_stack_00000038 == NULL) {
                return 1;
            }
            if ((*(aiStack_48[0] + 0x38) & 2) == 0) {
                *in_stack_00000038 = *(iVar1 + 0x10);
                if (in_stack_00000040 != NULL) {
                    *in_stack_00000040 = *(iVar1 + 0x18);
                }
                if (in_stack_00000048 != NULL) {
                    *in_stack_00000048 = aiStack_48[0];
                    return 1;
                }
                return 1;
            }
        }
    }
    bVar6 = iVar1 != 0;
    if (iVar1 == 0) {
        uVar5 = 0;
    }
    else {
        uVar5 = *(iVar1 + 0x20) + 1;
    }
    uVar3 = *0x22244;
    if (uVar5 < *0x22244) {
        do {
            iVar1 = uVar5 * 0x48;
            arg4_00 = iVar1 + 0x22250;
            if (((*(iVar1 + 0x22288) & 2) == 0) || (!bVar6)) {
                arg1_00 = fcn.00018344(arg1,arg2,&uStack_50,arg4_00);
                if (arg1_00 != 0) {
                    iVar2 = 0;
                    if (bVar6) {
code_r0x00013e91:
                        *in_stack_00000038 = arg1_00;
                        if (in_stack_00000040 != NULL) {
                            if (iVar2 == 0) {
                                iVar2 = fcn.00017dc0(arg1_00,arg4_00);
                            }
                            *in_stack_00000040 = iVar2;
                        }
                        if (in_stack_00000048 != NULL) {
                            *in_stack_00000048 = arg4_00;
                            return 1;
                        }
                        return 1;
                    }
                    bVar6 = true;
                    if (arg3 != 0) {
                        *arg3 = uStack_50;
                    }
                    if (in_stack_00000030 != NULL) {
                        *in_stack_00000030 = arg4_00;
                    }
                    if (arg4 != 0) {
                        *arg4 = arg1_00;
                    }
                    if (in_stack_00000028 != NULL) {
                        iVar2 = fcn.00017dc0(arg1_00,arg4_00);
                        *in_stack_00000028 = iVar2;
                    }
                    if (in_stack_00000038 == NULL) {
                        return 1;
                    }
                    if ((*(iVar1 + 0x22288) & 2) == 0) goto code_r0x00013e91;
                }
                uVar3 = *0x22244;
            }
            uVar4 = uVar5 + 1;
            uVar5 = uVar4;
        } while (uVar4 < uVar3);
    }
    if (!bVar6) {
        return 0;
    }
    if (in_stack_00000038 != NULL) {
        *in_stack_00000038 = 0;
    }
    return 1;
}


/* fcn.00018444 @ 0x18444 */

ulong fcn.00018444(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    char cVar2;
    int64_t iVar3;
    uint64_t uStackX_8;
    uint32_t in_stack_00000028;
    int64_t in_stack_00000030;
    
    if ((arg1 == 0) || (cVar2 = fcn.00017f30(arg1,in_stack_00000030), cVar2 == '\0')) {
        return 0x800000000000000e;
    }
    if (arg3 != 0) {
        fcn.000183c4(arg1,in_stack_00000030,arg3);
    }
    iVar3 = fcn.00017eb0(arg1,arg2,&uStackX_8,in_stack_00000030);
    if (iVar3 == 0) {
        return 0x8000000000000015;
    }
    uVar1 = *arg4;
    *arg4 = uStackX_8;
    if (uVar1 < uStackX_8) {
        return 0x8000000000000005;
    }
    fcn.0001fab0(in_stack_00000028,iVar3,uStackX_8);
    return 0;
}


/* fcn.000183c4 @ 0x183c4 */

ulong fcn.000183c4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    uint16_t *puVar2;
    
    if ((((arg1 != 0) && (arg2 != 0)) && (arg3 != 0)) && ((*(arg1 + 6) & 0x8000000) == 0)) {
        *arg3 = 2;
        uVar1 = *arg3;
        if ((*(arg1 + 6) & 0x1000000) != 0) {
            uVar1 = 6;
        }
        *arg3 = uVar1;
        if ((*(arg2 + 0x38) & 1) != 0) {
            *arg3 = *arg3 | 1;
        }
        if ((*(arg1 + 6) & 0x20000000) != 0) {
            *arg3 = *arg3 | 8;
        }
        if ((*(arg1 + 6) & 0x40000000) != 0) {
            puVar2 = arg1 + -2 + *(arg1 + 4);
            *arg3 = *arg3 | *(puVar2 + (2 - *puVar2)) & 0x30;
        }
        return 0;
    }
    return 0x8000000000000002;
}


/* fcn.00014a4c @ 0x14a4c */

uint64_t fcn.00014a4c(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int16_t *piVar2;
    uint16_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int16_t *piVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    
    uVar4 = fcn.000149dc(0x205a0,arg1,arg2);
    uVar12 = 0;
    if (uVar4 != '\0') {
        uVar4 = uVar12;
        piVar6 = arg1;
        if (*arg1 != 0) {
            do {
                uVar5 = uVar4;
                piVar6 = piVar6 + 1;
                uVar4 = uVar5 + 1;
            } while (*piVar6 != 0);
            if (4 < uVar4) {
                iVar11 = uVar5 - 3;
                uVar4 = 0;
                if (*0x203a0 != NULL) {
                    piVar6 = *0x203a0;
                    uVar9 = uVar12;
                    uVar10 = uVar12;
                    do {
                        iVar1 = *piVar6;
                        piVar2 = piVar6;
                        uVar4 = uVar12;
                        while (iVar1 != 0) {
                            piVar2 = piVar2 + 1;
                            uVar4 = uVar4 + 1;
                            iVar1 = *piVar2;
                        }
                        if (((uVar5 + 1 == uVar4) && (iVar7 = fcn.00018ec4(piVar6,arg1,iVar11), iVar7 == 0)) &&
                           (*(uVar10 + 0x203a8) == arg2)) {
                            piVar6 = arg1 + iVar11 * 2;
                            uVar4 = 0;
                            if (piVar6 != NULL) goto code_r0x00014b5a;
                            break;
                        }
                        uVar8 = uVar9 + 1;
                        uVar9 = uVar8;
                        uVar10 = uVar8 * 0x10;
                        piVar6 = *(uVar10 + 0x203a0);
                        uVar4 = 0;
                    } while (piVar6 != NULL);
                }
            }
        }
code_r0x00014b13:
        return CONCAT71(uVar4 >> 8,1);
    }
code_r0x00014a82:
    return uVar4 & 0xffffffffffffff00;
code_r0x00014b5a:
    if (*piVar6 == 0) goto code_r0x00014b62;
    uVar3 = *piVar6 - 0x30;
    uVar4 = uVar3;
    if ((0x36 < uVar3) || (uVar4 = uVar3, (0x7e0000007e03ffU >> (uVar4 & 0x3f) & 1) == 0)) goto code_r0x00014b13;
    piVar6 = piVar6 + 1;
    goto code_r0x00014b5a;
code_r0x00014b62:
    uVar4 = 0;
    goto code_r0x00014a82;
}


/* fcn.0001af88 @ 0x1af88 */

int64_t fcn.0001af88(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t *piVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong in_stack_00000028;
    int in_stack_00000030;
    
    if (*0x21d18 != '\0') {
        piVar1 = fcn.0001ab4c(arg1,arg2,CONCAT71(arg3 >> 8,1));
        if ((piVar1 != NULL) && (*piVar1 == 1)) {
            if ((in_stack_00000030 != 2) && ((*(piVar1 + 1) & 1) != 0)) {
                return -0x7ffffffffffffff8;
            }
            if (((((arg3 & 0x40U) != 0) || (arg4 != 0)) && (arg3 != 0)) &&
               (((*(piVar1 + 2) != 0 && ((arg3 & 0xffffffbf) != *(piVar1 + 2))) ||
                ((arg4 != 0 && ((arg4 < *(piVar1 + 4) || (*(piVar1 + 8) < arg4)))))))) {
                return -0x7ffffffffffffffe;
            }
        }
        uVar3 = 0;
        if (*0x21d28 != 0) {
            do {
                iVar2 = (**(*0x21d20 + uVar3 * 8))(arg1,arg2,arg3 & 0xffffffff,arg4,in_stack_00000028);
                if (((iVar2 != -0x7ffffffffffffff8) || (in_stack_00000030 != 2)) && (iVar2 < 0)) {
                    return iVar2;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < *0x21d28);
        }
    }
    return 0;
}


/* fcn.00015d08 @ 0x15d08 */

int64_t fcn.00015d08(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    uint16_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t arg1_00;
    int16_t *piVar5;
    uint32_t arg3_00;
    int64_t in_stack_00000028;
    
    iVar4 = 0;
    arg3_00 = arg3;
    if (arg1 == 0) {
        return -0x7ffffffffffffffe;
    }
    if (*arg1 == 0) {
        return -0x7ffffffffffffffe;
    }
    if (arg2 == 0) {
        return -0x7ffffffffffffffe;
    }
    if ((arg3 & 0xffffff80U) != 0) {
        return -0x7ffffffffffffffe;
    }
    if ((arg3 & 6) == 4) {
        return -0x7ffffffffffffffe;
    }
    if ((arg4 != 0) && (in_stack_00000028 == 0)) {
        return -0x7ffffffffffffffe;
    }
    if ((*0x21b69 != '\0') && (arg3_00 != 0)) {
        if ((arg3 & 1U) == 0) {
            return -0x7ffffffffffffffe;
        }
        if ((arg3 & 4U) == 0) {
            return -0x7ffffffffffffffe;
        }
    }
    if ((((arg3 & 0x40U) != 0) || (arg4 != 0)) && ((arg3 & 2U) != 0)) {
        arg3_00 = arg3_00 & 0xffffffbf;
        arg1_00 = arg2;
        iVar3 = fcn.0001a48c(arg1_00,0x20010,0x10);
        if (iVar3 == 0) {
            cVar1 = fcn.00014a4c(arg1,arg3_00);
        }
        else {
            iVar3 = fcn.0001a48c(arg1_00,0x200a0,0x10);
            if (iVar3 != 0) {
                if ((arg3 & 8U) != 0) {
                    iVar3 = fcn.0001a48c(arg1_00,0x20090,0x10);
                    if (iVar3 != 0) {
                        return -0x7ffffffffffffffe;
                    }
                    piVar5 = arg1;
                    do {
                        piVar5 = piVar5 + 1;
                        iVar4 = iVar4 + 1;
                    } while (*piVar5 != 0);
                    if (iVar4 != 0xc) {
                        return -0x7ffffffffffffffe;
                    }
                    iVar4 = fcn.0001a48c(arg1,0x21110,0x10);
                    if (iVar4 != 0) {
                        return -0x7ffffffffffffffe;
                    }
                    piVar5 = arg1 + 0x10;
                    if (piVar5 == NULL) {
                        return -0x7ffffffffffffffe;
                    }
                    for (; *piVar5 != 0; piVar5 = piVar5 + 1) {
                        uVar2 = *piVar5 - 0x30;
                        if (0x36 < uVar2) {
                            return -0x7ffffffffffffffe;
                        }
                        if ((0x7e0000007e03ffU >> (uVar2 & 0x3f) & 1) == 0) {
                            return -0x7ffffffffffffffe;
                        }
                    }
                }
                goto code_r0x00015eb7;
            }
            cVar1 = fcn.000149dc(0x202e0,arg1,arg3_00);
        }
        if (cVar1 != '\0') {
            return -0x7ffffffffffffffe;
        }
    }
code_r0x00015eb7:
    if ((arg3_00 & 0x10) != 0) {
        arg4 = (arg4 - *(in_stack_00000028 + 0x10)) + -0x10;
    }
    iVar4 = fcn.0001af88(arg1,arg2,arg3_00,arg4);
    if ((iVar4 < 0) && (iVar4 != -0x7ffffffffffffffa)) {
        return iVar4;
    }
    return 0;
}


/* fcn.00015a3c @ 0x15a3c */

int64_t fcn.00015a3c(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t arg2;
    uint32_t *arg2_00;
    code *arg3;
    ulong in_R9;
    bool bVar3;
    uint32_t auStack_58 [20];
    
    if ((arg1 == 0) || (iVar2 = *(arg1 + 0x40), iVar2 == 0)) {
        iVar2 = -0x7ffffffffffffffd;
    }
    else {
        iVar1 = (**(iVar2 + 0x38))(iVar2,*arg1);
        if (iVar1 < 0) {
            iVar2 = fcn.00016c24(auStack_58,*(arg1 + 8),*(arg1 + 0x3c),CONCAT71(in_R9 >> 8,*(arg1 + 0x38)));
            if (-1 < iVar2) {
                fcn.0001fab0(auStack_58[0],*arg1,*(arg1 + 8));
                fcn.000188cc(auStack_58);
                fcn.00016c9c(auStack_58);
                arg2 = *arg1;
                iVar2 = (**(*(arg1 + 0x40) + 0x40))(*(arg1 + 0x40),arg2,*(arg1 + 8),0,arg1 + 0x3c);
                if (iVar2 < 0) {
                    fcn.00012ed4(auStack_58[0],arg2);
                }
                else {
                    bVar3 = iVar2 != 3;
                    fcn.000188cc(arg1);
                    fcn.00016c9c(arg1);
                    if (bVar3 && iVar1 == -0x7ffffffffffffff3) {
                        iVar2 = 0x20340;
                        arg3 = fcn.00014b68;
                    }
                    else {
                        iVar2 = 0;
                        arg3 = NULL;
                    }
                    arg2_00 = arg1;
                    iVar2 = fcn.00015050(auStack_58,arg1,arg3,iVar2);
                    if (iVar2 < 0) {
                        if (*(arg1 + 0x40) == 0) {
                            iVar2 = -0x7ffffffffffffffd;
                        }
                        else {
                            arg2_00 = auStack_58;
                            iVar2 = fcn.00015650(arg1,arg2_00,*(arg1 + 0x40));
                        }
                    }
                    fcn.00012ed4(auStack_58[0],arg2_00);
                    if (-1 < iVar2) {
                        *0x22248 = 0;
                        if (arg1 == *0x22520) {
                            fcn.00016d78();
                        }
                        fcn.00013be0();
                        return (-(bVar3 && iVar1 == -0x7ffffffffffffff3) & 2) + 3;
                    }
                }
            }
        }
        else {
            iVar2 = 0;
        }
    }
    return iVar2;
}


/* fcn.000159d0 @ 0x159d0 */

uchar fcn.000159d0(uint32_t arg1,uint32_t arg2)

{
    char cVar1;
    uint in_register_0000000c;
    int64_t arg2_00;
    uchar uVar2;
    
    arg2_00 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = 0;
    if ((*(arg2_00 + 0x2a) != 0) &&
       (cVar1 = fcn.00017f30(*(arg2_00 + 0x18) - *(arg2_00 + 0x2a),arg2_00), cVar1 == '\0')) {
        return 0;
    }
    if (((**(arg2_00 + 0x18) == -1) && ((*(arg2_00 + 0x18))[1] == -1)) &&
       (*(*(arg2_00 + 0x10) + *(arg2_00 + 0x28) * -0x10) == -1)) {
        uVar2 = 1;
    }
    return uVar2;
}


/* fcn.0001d2a8 @ 0x1d2a8 */

ulong fcn.0001d2a8(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint8_t uVar1;
    ulong uVar2;
    ulong extraout_RAX;
    ulong extraout_RAX_00;
    uint32_t uVar3;
    uint in_R9;
    int64_t *in_stack_00000028;
    uint8_t *in_stack_00000040;
    
    uVar3 = *arg3;
    if ((uVar3 & 0x10) == 0) {
        uVar1 = *in_stack_00000040;
        if (((uVar3 & 0x30) == 0) && ((uVar1 & 0x30) == 0)) {
            return 0;
        }
        if ((uVar3 & 0x30) == 0x30) {
            return 0x8000000000000002;
        }
        if ((((uVar1 & 0x30) == 0) || (uVar3 == 0)) || ((uVar1 & 0x30 & uVar3) != 0)) {
            uVar3 = uVar1 & 0x30 | uVar3;
            if ((*in_stack_00000028 != 0) && (*CONCAT44(in_R9,arg4) != 0)) {
                if (*0x21d78 != 0) {
                    if ((uVar3 & 0x20) != 0) {
                        fcn.0001d7c8(arg1,arg2,uVar3,CONCAT44(in_R9,arg4));
                        return extraout_RAX;
                    }
                    fcn.0001dcec(arg1,arg2,uVar3,CONCAT44(in_R9,arg4));
                    return extraout_RAX_00;
                }
                goto code_r0x0001d2b9;
            }
        }
        uVar2 = 0x800000000000001a;
    }
    else {
code_r0x0001d2b9:
        uVar2 = 0x8000000000000003;
    }
    return uVar2;
}


/* fcn.00013b20 @ 0x13b20 */

void fcn.00013b20(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    int64_t iVar1;
    uint64_t arg2_00;
    uint32_t uVar2;
    uint64_t uVar3;
    uchar auStack_28 [8];
    uchar auStack_20 [8];
    
    if ((*0x21b80 != 0) && (arg2_00 = arg2, arg1_00 = fcn.000136a4(arg1,arg2,auStack_28,auStack_20), arg1_00 != 0))
    {
        if ((*(arg3 + 0x38) & 1) != 0) {
            arg2_00 = *0x22244;
            uVar3 = 0;
            if (*0x22244 != 0) {
                do {
                    iVar1 = uVar3 * 0x48 + 0x22250;
                    if ((iVar1 != arg3) && ((*(uVar3 * 0x48 + 0x22288) & 3) == 3)) {
                        iVar1 = fcn.00018344(arg1,arg2,auStack_28,iVar1);
                        if (iVar1 != 0) {
                            *(arg1_00 + 0x18) = 0;
                            *(arg1_00 + 0x10) = iVar1;
                            *(arg1_00 + 0x20) = uVar3;
                            return;
                        }
                        arg2_00 = *0x22244;
                    }
                    uVar2 = uVar3 + 1;
                    uVar3 = uVar2;
                } while (uVar2 < arg2_00);
            }
        }
        fcn.00013a84(arg1_00,arg2_00);
    }
    return;
}


/* fcn.00015f14 @ 0x15f14 */

//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h

int64_t fcn.00015f14(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    int64_t iVar2;
    char16_t cVar3;
    int64_t iVar4;
    int64_t iVar5;
    char16_t *arg2_00;
    char16_t *arg2_01;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t arg1_00;
    char16_t *pcVar8;
    char16_t *arg2_02;
    uint32_t auStackX_10 [2];
    uint32_t auStackX_18 [2];
    int64_t iStackX_20;
    int64_t var_6fh;
    uint32_t var_77h;
    int64_t var_7fh;
    char16_t acStack_f0 [12];
    int64_t iStack_d8;
    int64_t iStack_d0;
    uchar uStack_a0;
    uint uStack_9c;
    ulong uStack_98;
    uchar auStack_88 [7];
    int64_t var_79h;
    int64_t var_71h;
    int8_t var_41h;
    int32_t var_3dh;
    int64_t var_39h;
    int64_t var_29h;
    int64_t var_21h;
    
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_a0 = 7;
    iStack_d8 = arg3;
    iStack_d0 = arg2;
    fcn.000188cc(&iStack_d8);
    iVar6 = *0x22520;
    iVar4 = fcn.0001893c(arg1,*0x22520,auStack_88);
    if (iVar4 == 0) {
        iVar5 = -0x7ffffffffffffff2;
    }
    else {
        iVar4 = iStack_d0 - stack0xffffffffffffff80;
        arg1_00 = arg2;
        arg2_00 = fcn.00012e7c(arg1_00,iVar6);
        if (((arg2_00 == NULL) || (arg2_01 = fcn.00012e7c(arg1_00,iVar6), arg2_01 == NULL)) ||
           (iVar6 = fcn.00012e7c(arg1_00,iVar6), iVar6 == 0)) {
            iVar5 = -0x7ffffffffffffff7;
        }
        else {
            *arg2_00 = L'\0';
            do {
                do {
                    arg2_02 = arg2_00;
                    iStackX_20 = arg2;
                    iVar7 = fcn.00018848(&iStackX_20,arg2_00,acStack_f0,&iStack_d8);
                    if (iVar7 < 0) {
                        iVar5 = 0;
                        if (iVar7 != -0x7ffffffffffffff2) {
                            iVar5 = iVar7;
                        }
                        goto code_r0x0001617f;
                    }
                    arg2_02 = acStack_f0;
                    iStackX_20 = arg2;
                    iVar5 = fcn.00018500(arg2_00,arg2_02,auStackX_10,&iStackX_20);
                    iVar7 = iStackX_20;
                    if (iVar5 < 0) {
code_r0x00016143:
                        if (iVar5 != -0x7ffffffffffffff2) goto code_r0x0001617f;
                        goto code_r0x0001615c;
                    }
                    iVar5 = fcn.00015d08(arg2_00,acStack_f0,auStackX_10[0],iStackX_20);
                    arg2_02 = NULL;
                    bVar1 = false;
                    if (iVar5 < 0) {
                        if (iVar5 != -0x7ffffffffffffff8) goto code_r0x0001615c;
                        bVar1 = true;
                    }
                    arg2_02 = acStack_f0;
                    iStackX_20 = arg2;
                    iVar5 = fcn.00018500(arg2_00,arg2_02,auStackX_18,&iStackX_20);
                    iVar2 = iStackX_20;
                    if (iVar5 < 0) goto code_r0x00016143;
                    if (iStackX_20 != iVar7) {
                        arg2_02 = L"PlatformLang";
                        pcVar8 = arg2_00;
                        cVar3 = str.PlatformLang[0];
                        while ((cVar3 != L'\0' && (cVar3 == *pcVar8))) {
                            arg2_02 = arg2_02 + 1;
                            pcVar8 = pcVar8 + 1;
                            cVar3 = *arg2_02;
                        }
                        if (*arg2_02 != *pcVar8) goto code_r0x0001615c;
                        arg2_02 = 0x20010;
                        iVar5 = fcn.0001a48c(acStack_f0,0x20010,0x10);
                        if ((iVar5 != 0) || (iVar4 != iVar7 - iVar2)) goto code_r0x0001615c;
                        iVar4 = 0;
                    }
                    if (auStackX_18[0] != auStackX_10[0]) goto code_r0x0001615c;
                } while (!bVar1);
                arg2_02 = arg2_01;
                iVar7 = fcn.0001a48c(iVar6,arg2_01,iVar2);
            } while (iVar7 == 0);
code_r0x0001615c:
            iVar5 = -0x7ffffffffffffff1;
code_r0x0001617f:
            iVar7 = -0x7ffffffffffffff1;
            fcn.00012ed4(arg2_00,arg2_02);
            fcn.00012ed4(arg2_01,arg2_02);
            fcn.00012ed4(iVar6,arg2_02);
            if (iVar4 != 0) {
                iVar5 = iVar7;
            }
        }
    }
    return iVar5;
}


/* fcn.00014484 @ 0x14484 */

//WARNING: Variable defined which should be unmapped: var_ah
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

uint64_t fcn.00014484(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h,int64_t arg_68h,
                     int64_t arg_70h,int64_t arg_78h,int64_t arg_80h)

{
    char cVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uchar auStackX_18 [16];
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    int in_stack_00000038;
    int64_t *in_stack_00000040;
    int8_t var_50h;
    int64_t aiStack_60 [3];
    uint uStack_48;
    ushort uStack_44;
    uint32_t auStack_42 [2];
    uint32_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int32_t var_bp_10h;
    int16_t var_ch;
    int32_t var_ah;
    
    uVar3 = *(arg1 + 6);
    iVar4 = 0;
    aiStack_60[1] = 0;
    auStackX_18[0] = 0;
    if (((((~(uVar3 >> 0x18) ^ ~(arg3 >> 2 & 0x3fffffff)) & 1) != 0) || (((~*(in_stack_00000040 + 7) ^ ~arg3) & 1) != 0)
        ) || (((~(uVar3 >> 0x1d) ^ ~(arg3 >> 3 & 0x1fffffff)) & 1) != 0)) {
        return 0x8000000000000002;
    }
    if ((~(uVar3 >> 0x1e) & 1) != ((arg3 & 0x30U) == 0)) {
        return 0x8000000000000002;
    }
    uStack_48 = 0xffffffff;
    uStack_44 = 0;
    auStack_42[0] = 0x88ffffff;
    aiStack_60[2] = fcn.00017eb0(in_stack_00000030,arg2,aiStack_60,in_stack_00000040);
    if (aiStack_60[2] == 0) {
        return 0x8000000000000015;
    }
    if ((((arg3 & 0x40U) == 0) && (aiStack_60[0] == arg4)) &&
       (iVar2 = fcn.0001a48c(aiStack_60[2],in_stack_00000028,arg4), iVar2 == 0)) {
        return 0;
    }
    if ((arg3 & 0x30U) != 0) {
        iVar4 = 0xb;
        auStack_42[0] = 0xd8ffffff;
        aiStack_60[1] = 0xb;
    }
    if ((arg3 & 0x40U) != 0) {
        iVar4 = aiStack_60[0] + iVar4;
    }
    iVar4 = arg4 + 10 + iVar4;
    iVar2 = in_stack_00000040[3];
    if (in_stack_00000040[1] + -10 + *in_stack_00000040 + (in_stack_00000040[5] + 1) * -0x10 < iVar2 + iVar4) {
        return 0x8000000000000009;
    }
    uStack_44 = iVar4;
    cVar1 = (**_var_50h)(_var_50h,*in_stack_00000040);
    if (cVar1 != '\0') {
        fcn.0001fab0(iVar2,&uStack_48,10);
        iVar2 = iVar2 + 10;
        if ((arg3 & 0x40U) != 0) {
            fcn.0001fab0(iVar2,aiStack_60[2],aiStack_60[0]);
            iVar2 = iVar2 + aiStack_60[0];
        }
        fcn.0001fab0(iVar2,in_stack_00000028,arg4);
        iVar2 = iVar2 + arg4;
        if ((arg3 & 0x30U) != 0) {
            fcn.0001fab0(iVar2,auStackX_18,1);
            fcn.0001fab0(iVar2 + 1,in_stack_00000038 + 8,8);
            iVar2 = in_stack_00000040[3] + -2 + iVar4;
            fcn.0001fab0(iVar2,aiStack_60 + 8,2);
        }
        uVar3 = iVar2;
        cVar1 = (*_var_50h[3])(_var_50h,in_stack_00000040[3],uStack_44,in_stack_00000040[3]);
        if ((cVar1 != '\0') && (cVar1 = (*_var_50h[3])(_var_50h,in_stack_00000040[3],4,"NVAR"), cVar1 != '\0')) {
            auStack_42[0] = auStack_42[0] ^ (in_stack_00000040[3] - in_stack_00000030 ^ auStack_42[0]) & 0xffffff;
            cVar1 = (*_var_50h[3])(_var_50h,in_stack_00000030 + 6,3,auStack_42);
            goto code_r0x00014718;
        }
    }
    cVar1 = '\0';
    uVar3 = iVar2;
    in_stack_00000030 = arg1;
code_r0x00014718:
    (*_var_50h[1])(_var_50h,*in_stack_00000040,in_stack_00000040[1]);
    if (cVar1 == '\0') {
        fcn.00013f00(in_stack_00000040,uVar3,iVar4,in_stack_00000030);
    }
    else {
        in_stack_00000040[3] = in_stack_00000040[3] + iVar4;
        *(in_stack_00000040 + 0x2a) = iVar4;
    }
    return ~-(cVar1 != '\0') & 0x8000000000000007;
}


/* fcn.000151c0 @ 0x151c0 */

int64_t fcn.000151c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t arg2_00;
    
    iVar1 = fcn.00016c24(arg4,*(arg1 + 8),*(arg1 + 0x3c),CONCAT71(arg4 >> 8,*(arg1 + 0x38)));
    if (-1 < iVar1) {
        arg2_00 = arg4;
        iVar1 = fcn.00015050(arg1,arg4,arg2,arg3);
        if (iVar1 < 0) {
            fcn.00012ed4(*arg4,arg2_00);
        }
    }
    return iVar1;
}


/* fcn.00015bf0 @ 0x15bf0 */

int64_t fcn.00015bf0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iStackX_10;
    int64_t in_stack_00000028;
    int64_t iStack_38;
    int64_t iStack_30;
    int64_t iStack_28;
    
    if (((arg2 == 0) || (arg4 == 0)) || ((in_stack_00000028 == 0 && (*arg4 != 0)))) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        cVar1 = fcn.00013cc0(arg1,arg2,&iStack_30,&iStackX_10);
        if ((cVar1 == '\0') || ((*0x21b69 != '\0' && ((*(iStackX_10 + 9) & 1) == 0)))) {
            iVar2 = -0x7ffffffffffffff2;
        }
        else {
            iVar2 = fcn.00018444(iStack_28,iStack_30,0,arg4);
            if ((((-1 < iVar2) || (iVar2 == -0x7ffffffffffffffb)) && (arg3 != 0)) &&
               (iVar3 = fcn.000183c4(iStackX_10,iStack_38,arg3), iVar3 < 0)) {
                return iVar3;
            }
        }
    }
    return iVar2;
}


/* fcn.00018a64 @ 0x18a64 */

int64_t fcn.00018a64(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg3_00;
    int64_t arg1_00;
    int16_t iVar1;
    char cVar2;
    int64_t arg3_01;
    uint64_t uVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    unkbyte6 StackX_12;
    int64_t in_stack_00000028;
    uint32_t *in_stack_00000030;
    char in_stack_00000038;
    int64_t iStack_58;
    
    uVar6 = arg4;
    uVar5 = 0;
    if ((arg2 == 0) || (arg3 == 0)) {
        iVar4 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = *arg2;
        if (in_stack_00000030 == NULL) {
            iVar4 = CONCAT62(StackX_12,iVar1);
        }
        else {
            if (iVar1 == 0) {
                *in_stack_00000030 = 0;
            }
            uVar5 = *in_stack_00000030;
            iVar4 = -0x7ffffffffffffffe;
        }
        for (; uVar5 < uVar6; uVar5 = uVar5 + 1) {
            arg4 = CONCAT71(arg4 >> 8,in_stack_00000038);
            arg3_00 = in_stack_00000028 + uVar5 * 0x48;
            iVar4 = fcn.00018744(arg2,arg3,arg3_00,arg4);
            if (-1 < iVar4) {
                if ((*(arg3_00 + 0x38) & 4) != 0) {
                    if (iStack_58 != 0) {
                        do {
                            uVar3 = 0;
                            uVar7 = 0;
                            if (uVar5 != 0) {
                                do {
                                    uVar7 = uVar3;
                                    arg1_00 = in_stack_00000028 + uVar3 * 0x48;
                                    for (arg3_01 = fcn.0001807c(arg1_00); arg3_01 != 0;
                                        arg3_01 = fcn.0001804c(arg3_01,arg1_00)) {
                                        arg4 = arg1_00;
                                        cVar2 = fcn.000180cc(iStack_58,arg3_00,arg3_01,arg1_00);
                                        if (cVar2 != '\0') goto code_r0x00018b98;
                                    }
                                    arg3_01 = 0;
code_r0x00018b98:
                                    if (arg3_01 != 0) break;
                                    uVar7 = uVar7 + 1;
                                    uVar3 = uVar7;
                                } while (uVar7 < uVar5);
                            }
                            if (uVar7 == uVar5) break;
                            iStack_58 = fcn.0001804c(iStack_58,arg3_00);
                            if (in_stack_00000038 != '\0') {
                                for (; (iStack_58 != 0 && ((*(iStack_58 + 9) & 1) == 0));
                                    iStack_58 = fcn.0001804c(iStack_58,arg3_00)) {
                                }
                            }
                        } while (iStack_58 != 0);
                        if (iStack_58 != 0) goto code_r0x00018c15;
                    }
                    *(arg3_00 + 0x30) = 0;
                    iVar4 = -0x7ffffffffffffff2;
                }
code_r0x00018c15:
                if (-1 < iVar4) {
                    arg4 = arg3;
                    iVar4 = fcn.00018598(iStack_58,arg2,arg1,arg3);
                    if (iVar4 != -0x7ffffffffffffff2) {
                        if (iVar4 < 0) {
                            *arg2 = iVar1;
                        }
                        if (in_stack_00000030 != NULL) {
                            *in_stack_00000030 = uVar5;
                        }
                        goto code_r0x00018cca;
                    }
                    *(arg3_00 + 0x30) = 0;
                }
            }
            if (iVar4 == -0x7ffffffffffffff2) {
                *arg2 = 0;
            }
            else if (((in_stack_00000030 != NULL) && (uVar5 != 0)) && (uVar5 == *in_stack_00000030)) {
                uVar5 = 0xffffffff;
                *in_stack_00000030 = 0;
            }
        }
        if (in_stack_00000030 != NULL) {
            *in_stack_00000030 = 0;
        }
    }
code_r0x00018cca:
    return iVar4;
}


/* fcn.000161c0 @ 0x161c0 */

uint64_t fcn.000161c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar *puVar1;
    ulong *puVar2;
    bool bVar3;
    char cVar4;
    char cVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint32_t arg2_00;
    int64_t *arg2_01;
    uint32_t uVar10;
    int64_t arg2_02;
    int iVar11;
    int64_t iVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    int aiStackX_18 [2];
    uint64_t uStackX_20;
    int64_t in_stack_00000028;
    uint64_t *puVar15;
    uchar *puVar16;
    unkbyte7 in_stack_fffffffffffffed9;
    int64_t iVar17;
    int64_t arg1_00;
    uint64_t arg2_03;
    uint64_t uVar18;
    int64_t iVar19;
    uint uVar20;
    uint64_t arg_78h;
    int64_t in_stack_ffffffffffffff00;
    int64_t arg_88h;
    int64_t iStack_f8;
    code *pcStack_f0;
    int64_t aiStack_e8 [2];
    uchar auStack_d8 [8];
    ulong uStack_d0;
    uchar uStack_c8;
    ulong uStack_c7;
    ulong uStack_bf;
    ulong uStack_b7;
    uint uStack_af;
    ushort uStack_ab;
    uchar uStack_a9;
    int64_t iStack_a8;
    ulong uStack_a0;
    int64_t aiStack_98 [11];
    
    iVar11 = arg3;
    uVar10 = 0;
    iVar17 = 0;
    uVar14 = arg3 & 0xffffffff;
    iVar19 = 0;
    uVar18 = 0;
    auStack_d8[0] = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c7 = 0;
    uStack_bf = 0;
    uStack_b7 = 0;
    uStack_af = 0;
    uStack_ab = 0;
    uStack_a9 = 0;
    if (0xffff < arg4) {
        return 0x8000000000000009;
    }
    aiStackX_18[0] = iVar11;
    uStackX_20 = arg4;
    uVar6 = fcn.00015d08(arg1,arg2,arg3,arg4);
    if (uVar6 < 0) {
        return uVar6;
    }
    do {
        arg2_02 = iVar19;
        iVar19 = arg2;
        cVar4 = fcn.00013cc0(arg1,arg2,&stack0xffffffffffffff00,&iStack_f8);
        iVar9 = iStack_a8;
        arg2_00 = iVar19;
        arg1_00 = iVar17;
        if (cVar4 == '\0') {
            iStack_f8 = 0;
            arg1_00 = 0;
        }
        iVar12 = iStack_f8;
        iVar7 = 0;
        iVar17 = arg1_00;
        if (arg1_00 == 0) {
            if (iStack_f8 == 0) {
                uVar18 = 0;
                arg_88h = in_stack_ffffffffffffff00;
            }
            else {
                if ((uVar14 & 3) == 2) {
                    return 0x8000000000000002;
                }
                fcn.00013f80(iStack_f8,iStack_a8,auStack_d8);
                arg_88h = in_stack_ffffffffffffff00;
                iVar7 = fcn.00017eb0(iVar12,in_stack_ffffffffffffff00,&stack0xfffffffffffffee8,iVar9);
                arg2_00 = in_stack_ffffffffffffff00;
            }
            arg2_02 = *0x22528;
            if ((arg3 & 1U) != 0) {
                arg2_02 = *0x22520;
            }
            iVar19 = arg2_02;
            if (arg2_02 == 0) {
                return 0x8000000000000002;
            }
        }
        else {
            if ((*0x21b69 != '\0') && ((*(arg1_00 + 6) & 0x1000000) == 0)) {
                return 0x8000000000000002;
            }
            if ((arg3 & 2U) != 0) {
                iVar19 = *0x22528;
                if ((arg3 & 1U) != 0) {
                    iVar19 = *0x22520;
                }
                if (arg2_02 != iVar19) {
                    return 0x8000000000000002;
                }
            }
            iVar19 = arg2_02;
            fcn.00013f80(arg1_00,arg2_02,auStack_d8);
            arg_88h = in_stack_ffffffffffffff00;
            iVar7 = fcn.00017eb0(aiStack_e8[0],in_stack_ffffffffffffff00,&stack0xfffffffffffffee8,arg2_02);
            arg2_00 = in_stack_ffffffffffffff00;
        }
        uVar6 = fcn.00015a3c(arg2_02);
        if (uVar6 < 0) {
            return uVar6;
        }
        if (uVar6 == 0) break;
        uVar10 = uVar10 + 1;
        in_stack_ffffffffffffff00 = arg_88h;
    } while (uVar10 < 2);
    if (uVar10 == 2) {
        return 0x8000000000000007;
    }
    cVar4 = fcn.000159d0(arg2_02,arg2_00);
    uVar20 = iVar19 >> 0x20;
    uVar6 = *(arg2_02 + 8);
    iVar17 = arg1;
    uVar8 = fcn.00012d08(arg1,uVar6);
    if (uVar6 < uVar8) {
        return 0x8000000000000009;
    }
    puVar16 = auStack_d8;
    puVar15 = &uStackX_20;
    uVar6 = uVar18;
    iVar19 = iVar7;
    uVar8 = fcn.0001d2a8(iVar17,arg2,aiStackX_18,&stack0x00000028);
    if (uVar8 < 0) {
        if (uVar8 == 0x8000000000000014) {
            return 0;
        }
        return uVar8;
    }
    uVar13 = -(iVar11 != 0) & uStackX_20;
    arg2_03 = uVar13;
    cVar5 = fcn.00014bc8(arg1,arg2);
    uStackX_20 = CONCAT71(uStackX_20._1_7_,cVar5);
    arg_78h = CONCAT44(uVar20,iVar11) & 0xffffffff00000040;
    if ((((arg3 & 0x40U) == 0) && (uVar13 == 0)) || ((arg3 & 2U) == 0)) {
        if (arg1_00 == 0) {
            return 0x800000000000000e;
        }
        if ((*0x21b69 != '\0') && ((*(arg2_02 + 0x38) & 1) == 0)) {
            return 0x8000000000000002;
        }
        if (cVar5 != '\0') {
            return 0x8000000000000008;
        }
        puVar1 = arg1_00 + 9;
        puVar2 = *(arg2_02 + 0x40);
        uStackX_20 = CONCAT71(uStackX_20._1_7_,*puVar1) ^ 0x80;
        if (puVar2 == NULL) {
            uVar14 = 0x8000000000000003;
        }
        else {
            cVar4 = (**puVar2)(puVar2,puVar1,1,0,puVar15,iVar7,uVar18,puVar16);
            if (cVar4 == '\0') {
                uVar14 = 0x8000000000000007;
            }
            else {
                cVar4 = (*puVar2[3])(puVar2,puVar1,1,&uStackX_20);
                (*puVar2[1])(puVar2,puVar1,1);
                uVar14 = ~-(cVar4 != '\0') & 0x8000000000000007;
                if ((-1 < uVar14) && (iVar9 == arg2_02)) {
                    fcn.00013b20(arg1,arg2,arg2_02);
                }
            }
        }
        return uVar14;
    }
    uVar18 = arg2_03;
    if (arg1_00 == 0) {
        if (((iVar19 != 0) && ((arg3 & 0x40U) == 0)) && (uVar6 == arg2_03)) {
            iVar17 = fcn.0001a48c(iVar19,in_stack_00000028,arg2_03);
            uVar18 = arg2_03;
            if (iVar17 == 0) {
                return 0;
            }
        }
        bVar3 = false;
        iVar17 = arg_88h;
        if (cVar4 != '\0') {
            iVar17 = arg2;
            uVar8 = fcn.00014018(arg1,arg2,uVar14,uVar18,CONCAT71(in_stack_fffffffffffffed9,cVar4),uVar18,uVar6,
                                 arg_78h,iVar19,arg_88h);
            uVar10 = iVar17;
            if (-1 < uVar8) {
                if (uStackX_20 != '\0') goto code_r0x0001671c;
                if (iVar12 == 0) {
                    iVar17 = arg2_02;
                    fcn.00013840(*(arg2_02 + 0x18) - *(arg2_02 + 0x2a),arg2_02);
                    uVar10 = iVar17;
                }
                else if ((*0x22240 & 5) == 0) {
                    iVar17 = arg2_02;
                    fcn.000139b8(*(arg2_02 + 0x18) - *(arg2_02 + 0x2a),arg2_02);
                    uVar10 = iVar17;
                }
            }
code_r0x00016729:
            iVar17 = arg_88h;
            if (uVar8 == 0x8000000000000007) {
                cVar5 = fcn.000159d0(arg2_02,uVar10);
                iVar17 = arg_88h;
                if (cVar5 == '\0') goto code_r0x00016756;
            }
            goto code_r0x00016747;
        }
    }
    else {
        iVar17 = arg_88h;
        if (cVar5 != '\0') {
            uVar8 = fcn.00015f14(arg1,arg2_03,in_stack_00000028);
            iVar17 = arg_88h;
            if (uVar8 < 0) {
                return uVar8;
            }
        }
        bVar3 = false;
        if (cVar4 != '\0') {
            if (*(arg2_02 + 0x40) != 0) {
                arg_88h = iVar17;
                uVar8 = fcn.00014484(arg1_00,iVar17,uVar14,arg2_03,CONCAT71(in_stack_fffffffffffffed9,cVar4),
                                     uVar18,uVar6,arg_78h,iVar19);
                uVar10 = iVar17;
                if ((-1 < uVar8) && (uStackX_20 != '\0')) {
code_r0x0001671c:
                    fcn.00016d78();
                    fcn.00013be0();
                }
                goto code_r0x00016729;
            }
            uVar8 = 0x8000000000000003;
code_r0x00016747:
            bVar3 = true;
        }
    }
    if ((uVar8 != 0x8000000000000009) && (bVar3)) {
        return uVar8;
    }
code_r0x00016756:
    iVar9 = 0;
    iStack_f8 = 0;
    pcStack_f0 = fcn.00014b68;
    aiStack_e8[1] = 0x20350;
    uStack_a0 = 0x14f28;
    aiStack_e8[0] = 0;
    iStack_a8 = 0;
    if (arg1_00 != 0) {
        *(arg1_00 + 9) = *(arg1_00 + 9) ^ 0x80;
    }
    uStackX_20 = uStackX_20 & 0xffffffff00000000;
    iVar12 = iVar9;
    do {
        arg2_01 = *(&iStack_f8 + iVar12);
        aiStack_98[0] = iVar9;
        iVar9 = fcn.000151c0(arg2_02,arg2_01,*(aiStack_e8 + iVar12),aiStack_98);
        if (iVar9 < 0) {
            if (aiStack_98[0] != 0) goto code_r0x000168f2;
code_r0x000168f7:
            if (-1 < uVar8) {
                return uVar8;
            }
            break;
        }
        arg2_01 = arg2;
        uVar8 = fcn.00014018(arg1,arg2,uVar14,uVar18,CONCAT71(in_stack_fffffffffffffed9,cVar4),uVar18,uVar6,
                             arg_78h,iVar19,iVar17);
        if (uVar8 != 0x8000000000000009) {
            if (-1 < uVar8) {
                if (*(arg2_02 + 0x40) == 0) {
                    uVar8 = 0x8000000000000003;
                }
                else {
                    arg2_01 = aiStack_98;
                    uVar8 = fcn.00015650(arg2_02,arg2_01,*(arg2_02 + 0x40));
                }
            }
code_r0x000168f2:
            fcn.00012ed4(aiStack_98[0],arg2_01);
            goto code_r0x000168f7;
        }
        if ((0x1ff < uVar18 - uVar6) && (0x3ff < uVar18)) {
            arg2_01 = arg1;
            cVar5 = fcn.0001492c(0x20450,arg1,arg2);
            if (cVar5 == '\0') {
                arg2_01 = arg1;
                cVar5 = fcn.0001492c(0x20370,arg1,arg2);
                if (cVar5 == '\0') goto code_r0x000168f2;
            }
        }
        iVar9 = 0;
        fcn.00012ed4(aiStack_98[0],arg2_01);
        iVar12 = iVar12 + 8;
        uVar10 = uStackX_20 + 1;
        uStackX_20 = CONCAT44(uStackX_20._4_4_,uVar10);
    } while (uVar10 < 2);
    if (arg1_00 != 0) {
        *(arg1_00 + 9) = *(arg1_00 + 9) ^ 0x80;
    }
    fcn.00015a3c(arg2_02);
    return uVar8;
}


/* fcn.00017fd0 @ 0x17fd0 */

uint64_t fcn.00017fd0(uint32_t arg1,int64_t arg2)

{
    char cVar1;
    uint in_register_0000000c;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_register_0000000c,arg1);
    if ((uVar2 != 0) && (uVar2 < *(arg2 + 0x18))) {
        cVar1 = fcn.00017f30(arg1,arg2);
        if (cVar1 != '\0') {
            uVar2 = uVar2 + *(uVar2 + 4);
        }
        for (; uVar2 < *(arg2 + 0x18); uVar2 = uVar2 + *(uVar2 + 4)) {
            cVar1 = fcn.00017f30(uVar2,arg2);
            if (cVar1 != '\0') {
                return uVar2;
            }
            if (0xfff3 < *(uVar2 + 4) - 0xbU) {
                return 0;
            }
            if (*(arg2 + 0x18) - uVar2 < *(uVar2 + 4)) {
                return 0;
            }
        }
    }
    return 0;
}


/* fcn.0001175c @ 0x1175c */

ulong fcn.0001175c(int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    if (*0x21b69 == '\0') {
        iVar1 = (**(*0x21c50 + 0x28))(0,6,((arg1 & 0xfffU) != 0) + (arg1 >> 0xc),auStackX_10);
        if (iVar1 < 0) {
            auStackX_10[0] = 0;
        }
    }
    else {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.00013424 @ 0x13424 */

int64_t fcn.00013424(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar uVar1;
    uchar uVar2;
    char cVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong uVar8;
    char acStackX_8 [8];
    int64_t iStackX_18;
    int *in_stack_00000028;
    
    if (arg3 < 0x100) {
        return -0x7ffffffffffffff7;
    }
    uVar8 = 0x100;
    iVar5 = (***(arg1 + 0x60))(*(arg1 + 0x58),0x100,arg2);
    if (iVar5 < 0) {
        return iVar5;
    }
    if (*(arg1 + 0x48) == 0) {
        iVar5 = arg2;
        uVar1 = fcn.00018d38(arg2);
        iVar5 = CONCAT71(iVar5 >> 8,uVar1);
        iVar6 = CONCAT71(uVar8 >> 8,0x20);
    }
    else {
        if (arg3 < 0x200) {
            return -0x7ffffffffffffff7;
        }
        iVar5 = arg2 + 0x100;
        uVar8 = 0x100;
        iVar6 = (***(arg1 + 0x60))(*(arg1 + 0x48),0x100,iVar5);
        if (iVar6 < 0) {
            return iVar6;
        }
        iVar7 = arg2;
        uVar1 = fcn.00018d38(arg2);
        if (iVar5 == 0) {
            uVar2 = 0x20;
        }
        else {
            uVar2 = fcn.00018d38(iVar5);
            iVar7 = iVar5;
        }
        iVar6 = CONCAT71(uVar8 >> 8,uVar2);
        iVar5 = CONCAT71(iVar7 >> 8,uVar1);
    }
    cVar3 = fcn.00018d70(iVar5,iVar6,acStackX_8);
    if ((cVar3 == '\0') && (acStackX_8[0] != '\0')) {
        uVar8 = *(arg1 + 0x58);
        cVar3 = '\x01';
        *(arg1 + 0x58) = *(arg1 + 0x48);
        *(arg1 + 0x48) = uVar8;
    }
    *(arg1 + 0x50) = *(arg1 + 0x58) - arg2;
    iVar5 = (***(arg1 + 0x60))(*(arg1 + 0x58),arg3,arg2);
    if (iVar5 < 0) {
        return iVar5;
    }
    if (cVar3 == '\0') {
        if (arg4 == '\0') {
            iVar5 = (**(arg1 + 0x20))(arg1,arg2,arg3);
            iVar6 = (**(arg1 + 0x28))(arg1,iVar5 < 0,arg2);
            if ((iVar5 < 0) || (iVar6 < 0)) {
                iVar5 = -0x7ffffffffffffff9;
                goto code_r0x0001357d;
            }
            iVar5 = 3;
            goto code_r0x00013582;
        }
        iVar5 = -0x7ffffffffffffff6;
    }
    else {
code_r0x0001357d:
        if (-1 < iVar5) {
code_r0x00013582:
            if (*(arg2 + 0x20) != arg3) {
                iVar5 = -0x7ffffffffffffffe;
            }
        }
    }
    if (((arg4 == '\0') && (-1 < iVar5)) && (cVar3 = fcn.00018d38(arg2), cVar3 == '\a')) {
        acStackX_8[0] = '\b';
        iStackX_18 = arg2;
        iVar6 = fcn.0001523c(&iStackX_18,acStackX_8);
        iVar5 = iStackX_18;
        if (iVar6 < 0) {
            return iVar6;
        }
        cVar3 = (**arg1)(arg1,iStackX_18,1);
        if (cVar3 != '\0') {
            cVar3 = (**(arg1 + 0x18))(arg1,iVar5,1,acStackX_8);
            (**(arg1 + 8))(arg1,iVar5,1);
            if (cVar3 != '\0') {
                iVar5 = 5;
                goto code_r0x0001360a;
            }
        }
        return -0x7ffffffffffffff9;
    }
code_r0x0001360a:
    if (in_stack_00000028 != NULL) {
        iVar4 = fcn.00018cdc(arg2);
        if (iVar4 != 0) {
            iVar4 = iVar4 + 0x18;
        }
        *in_stack_00000028 = iVar4;
    }
    return iVar5;
}


/* fcn.00016e40 @ 0x16e40 */

void fcn.00016e40(int64_t arg1)

{
    uint8_t *puVar1;
    uint16_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t arg2;
    char cVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint16_t uVar9;
    
    uVar7 = 0;
    *0x22248 = 0;
    *0x22244 = 0;
    if ((*0x22240 & 1) != 0) {
        iVar8 = fcn.0001893c(0x21210,arg1,0x22250);
        if (iVar8 == 0) {
            uVar7 = *0x22244;
        }
        else {
            *0x22244 = *0x22244 + 1;
            uVar7 = *0x22244;
        }
    }
    if ((*0x22240 & 4) == 0) {
        uVar3 = *(arg1 + 8);
        *(uVar7 * 0x48 + 0x22250) = *arg1;
        *(uVar7 * 0x48 + 0x22258) = uVar3;
        uVar3 = *(arg1 + 0x18);
        *(uVar7 * 0x48 + 0x22260) = *(arg1 + 0x10);
        *(uVar7 * 0x48 + 0x22268) = uVar3;
        uVar3 = *(arg1 + 0x28);
        *(uVar7 * 0x48 + 0x22270) = *(arg1 + 0x20);
        *(uVar7 * 0x48 + 0x22278) = uVar3;
        uVar3 = *(arg1 + 0x38);
        *(uVar7 * 0x48 + 0x22280) = *(arg1 + 0x30);
        *(uVar7 * 0x48 + 0x22288) = uVar3;
        *(uVar7 * 0x48 + 0x22290) = *(arg1 + 0x40);
        *0x22520 = *0x22244 * 0x48 + 0x22250;
        if ((*0x22240 & 1) != 0) {
            puVar1 = *0x22244 * 0x48 + 0x22288;
            *puVar1 = *puVar1 | 4;
        }
        *0x22244 = *0x22244 + 1;
        iVar8 = fcn.0001893c(0x211f0,arg1,(*0x22244 * 8 + 2 + *0x22244) * 8 + 0x22240);
        if (iVar8 == 0) goto code_r0x00016c9c;
    }
    else {
        iVar8 = fcn.0001893c(0x211f0,arg1,(uVar7 * 9 + 2) * 8 + 0x22240);
        if (iVar8 != 0) {
            *0x22244 = *0x22244 + 1;
        }
        uVar7 = *0x22244;
        uVar3 = *(arg1 + 8);
        *(uVar7 * 0x48 + 0x22250) = *arg1;
        *(uVar7 * 0x48 + 0x22258) = uVar3;
        uVar3 = *(arg1 + 0x18);
        *(uVar7 * 0x48 + 0x22260) = *(arg1 + 0x10);
        *(uVar7 * 0x48 + 0x22268) = uVar3;
        uVar3 = *(arg1 + 0x28);
        *(uVar7 * 0x48 + 0x22270) = *(arg1 + 0x20);
        *(uVar7 * 0x48 + 0x22278) = uVar3;
        uVar3 = *(arg1 + 0x38);
        *(uVar7 * 0x48 + 0x22280) = *(arg1 + 0x30);
        *(uVar7 * 0x48 + 0x22288) = uVar3;
        *(uVar7 * 0x48 + 0x22290) = *(arg1 + 0x40);
        *0x22520 = *0x22244 * 0x48 + 0x22250;
        puVar1 = *0x22244 * 0x48 + 0x22288;
        *puVar1 = *puVar1 | 4;
    }
    *0x22244 = *0x22244 + 1;
code_r0x00016c9c:
    arg2 = *0x22520;
    iVar8 = *(*0x22520 + 0x20);
    uVar9 = 0;
    cVar5 = fcn.00017f30(iVar8,*0x22520);
    iVar6 = iVar8;
    if (cVar5 != '\0') {
        while (iVar4 = iVar6, iVar4 != 0) {
            if ((*(iVar4 + 6) & 0xc000000) == 0) {
                if (uVar9 < *(iVar4 + 10)) {
                    uVar9 = *(iVar4 + 10);
                }
            }
            iVar6 = fcn.00017fd0(iVar4,arg2);
            iVar8 = iVar4;
        }
        *(arg2 + 0x2a) = *(iVar8 + 4);
        iVar8 = *(iVar8 + 4) + iVar8;
        *(arg2 + 0x28) = uVar9 + 1;
        *(arg2 + 0x18) = iVar8;
        uVar2 = *(iVar8 + 4);
        if ((uVar2 != 0xffff) && (uVar2 <= (*(arg2 + 0x10) + (uVar9 + 1) * -0x10) - iVar8)) {
            *(arg2 + 0x2a) = *(arg2 + 0x2a) + uVar2;
            *(arg2 + 0x18) = uVar2 + iVar8;
        }
    }
    return;
}


/* fcn.0001a138 @ 0x1a138 */

ulong fcn.0001a138(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar3 = *(*0x21c60 + 0x68);
    iVar2 = *(*0x21c60 + 0x70);
    while( true ) {
        if (iVar3 == 0) {
            return 0;
        }
        iVar1 = fcn.0001a48c(iVar2,0x201b0,0x10);
        if (iVar1 == 0) break;
        iVar2 = iVar2 + 0x18;
        iVar3 = iVar3 + -1;
    }
    return *(iVar2 + 0x10);
}


/* fcn.0001a504 @ 0x1a504 */

ulong fcn.0001a504(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    int16_t *piVar4;
    
    if (arg2 == 0) {
        uVar2 = 0x8000000000000002;
    }
    else {
        piVar4 = *arg2;
        do {
            iVar1 = *piVar4;
            while( true ) {
                if (iVar1 == -1) {
                    return 0x800000000000000e;
                }
                piVar4 = piVar4 + piVar4[1];
                if (*piVar4 == 4) break;
                iVar1 = *piVar4;
            }
            iVar3 = fcn.0001a48c(piVar4 + 8,arg1,0x10);
        } while (iVar3 != 0);
        *arg2 = piVar4;
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.000170fc @ 0x170fc */

//WARNING: Variable defined which should be unmapped: var_29h

uint64_t fcn.000170fc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint8_t uVar2;
    uchar uVar3;
    int64_t iVar4;
    uint64_t extraout_RAX;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t uVar7;
    ulong ******ppppppuVar8;
    unkbyte7 in_R9;
    uchar uVar9;
    int64_t iStackX_8;
    uint64_t uStackX_10;
    int64_t var_67h;
    ulong ******ppppppuStack_d8;
    ulong ******ppppppuStack_d0;
    uchar uStack_a0;
    uint uStack_9c;
    int64_t iStack_98;
    uchar auStack_88 [7];
    int64_t var_79h;
    int64_t var_71h;
    int8_t var_41h;
    int32_t var_3dh;
    int64_t var_39h;
    int64_t var_29h;
    
    cVar1 = arg3;
    uStackX_10 = arg2 & 0xffffffff00000000;
    uVar9 = 0;
    uVar2 = 0;
    if (arg1 == 0) {
        ppppppuStack_d0 = 0x30000;
        iVar6 = 0;
        *0x22240 = 8;
        uStack_9c = 0;
        uVar5 = uStackX_10;
    }
    else {
        *0x22240 = *(arg1 + 0x14);
        iVar6 = *arg1;
        ppppppuStack_d0 = *(arg1 + 0x10);
        uVar5 = *(arg1 + 8);
        if ((iVar6 == 0) || (ppppppuStack_d0 == NULL)) {
            return 0x8000000000000002;
        }
        if ((*0x21ba0 == 1) &&
           (((iVar4 = (**(*0x21cf0 + 0x38))(iVar6,0x21b98), iVar4 < 0 ||
             (arg3 = *0x21b98 + *0x21ba0, arg3 < iVar6 + ppppppuStack_d0)) || (arg3 < uVar5 + ppppppuStack_d0)))) {
            *0x21b98 = 0;
            *0x21ba0 = 0;
        }
    }
    ppppppuStack_d8 = fcn.0001175c(ppppppuStack_d0);
    if (ppppppuStack_d8 == NULL) {
        return 0x8000000000000009;
    }
    if (iVar6 == 0) {
        ppppppuVar8 = ppppppuStack_d0;
        fcn.0001fa5e(ppppppuStack_d8,ppppppuStack_d0,CONCAT71(arg3 >> 8,0xff));
        uVar5 = 0;
    }
    else {
        iVar4 = (**(*0x21c50 + 0x140))(0x20250,0,&iStackX_8);
        if ((iVar4 < 0) || (iStackX_8 == 0)) {
            return 0x800000000000000e;
        }
        if (((*0x22240 & 8) == 0) && (cVar1 == '\0')) {
            uVar3 = 0;
        }
        else {
            uVar3 = 1;
        }
        *0x221c0 = *0x21170;
        *0x221c8 = *0x21178;
        *0x22220 = iStackX_8;
        *0x221d0 = *0x21180;
        *0x221d8 = *0x21188;
        *0x221e0 = *0x21190;
        *0x221e8 = *0x21198;
        *0x22200 = *0x211b0;
        *0x221f0 = *0x211a0;
        *0x221f8 = *0x211a8;
        *0x22210 = *0x211c0;
        ppppppuVar8 = ppppppuStack_d8;
        *0x22208 = uVar5;
        *0x22218 = iVar6;
        fcn.00013424(0x221c0,ppppppuStack_d8,ppppppuStack_d0,CONCAT71(in_R9,uVar3));
        if (extraout_RAX < 0) {
            if ((cVar1 == '\0') || (extraout_RAX != 0x800000000000000a)) {
                return extraout_RAX;
            }
            iStack_98 = 0x20400;
            ppppppuVar8 = ppppppuStack_d8;
            uVar5 = (**0x20420)(0x20400,ppppppuStack_d8,ppppppuStack_d0);
            ppppppuVar8 = CONCAT71(ppppppuVar8 >> 8,uVar5 < 0);
            iVar6 = (**(iStack_98 + 0x28))(iStack_98,ppppppuVar8,ppppppuStack_d8);
            if ((uVar5 < 0) || (iVar6 < 0)) {
                return 0x8000000000000007;
            }
            uVar2 = 1;
        }
        else {
            iStack_98 = 0x20400;
            uVar5 = extraout_RAX;
            if (cVar1 == '\0') {
                iStack_98 = 0x221c0;
            }
        }
    }
    iVar6 = 0x20400;
    if ((*0x22240 & 8) == 0) {
        iVar6 = iStack_98;
    }
    uStack_a0 = 1;
    iStack_98 = iVar6;
    fcn.000188cc(&ppppppuStack_d8);
    if (-1 < uVar5) {
        ppppppuVar8 = &ppppppuStack_d8;
        iVar6 = fcn.0001893c(0x211f0,ppppppuVar8,auStack_88);
        if (iVar6 == 0) {
            uVar9 = 1;
            *0x22240 = *0x22240 | 2;
            uVar7 = 1;
            goto code_r0x000173de;
        }
    }
    uVar7 = uStackX_10;
code_r0x000173de:
    if ((*0x22240 & 2) != 0) {
        fcn.000157cc(&ppppppuStack_d8,CONCAT71(ppppppuVar8 >> 8,uVar9),uVar7);
        *0x22240 = *0x22240 & 0xfffffffd;
        if (arg1 != 0) {
            *(arg1 + 0x14) = *(arg1 + 0x14) & 0xfffffffd;
        }
        if (cVar1 != '\0') {
            uVar2 = 1;
        }
    }
    fcn.00016e40(&ppppppuStack_d8);
    return -uVar2 & 0x4000000000000002;
}


/* fcn.000124c4 @ 0x124c4 */

void fcn.000124c4(int64_t arg1)

{
    ulong uVar1;
    
    if (*0x21b69 == '\0') {
        uVar1 = (**(*0x21bf0 + 0x18))(*arg1);
        *(arg1 + 8) = uVar1;
        *(arg1 + 0x10) = 2;
    }
    return;
}


/* fcn.0001ad44 @ 0x1ad44 */

ulong fcn.0001ad44(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    
    if (*arg3 == *arg2) {
        iVar1 = *arg2 * 8;
        iVar1 = fcn.000190fc(arg1,iVar1,iVar1 + 0x40,*arg1);
        if (iVar1 == 0) {
            return 0x8000000000000009;
        }
        *arg1 = iVar1;
        *arg2 = *arg2 + 8;
    }
    *(*arg1 + *arg3 * 8) = arg4;
    *arg3 = *arg3 + 1;
    return 0;
}


/* fcn.000124f4 @ 0x124f4 */

void fcn.000124f4(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = *0x21bf0;
    if (*0x21b69 == '\0') {
        *(arg1 + 0x10) = 1;
        (**(iVar1 + 0x20))(*(arg1 + 8));
    }
    return;
}


/* fcn.0001ab4c @ 0x1ab4c */

int64_t * fcn.0001ab4c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int16_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int16_t *piVar5;
    int64_t *piVar6;
    int16_t *piVar7;
    int64_t *piVar8;
    int64_t *piVar9;
    int64_t *piVar10;
    int64_t *piVar11;
    
    piVar8 = NULL;
    if (*0x21d40 != NULL) {
        piVar10 = piVar8;
        do {
            piVar9 = *(*0x21d48 + piVar10 * 8);
            piVar11 = piVar9 + 5;
            if ((*piVar9 == *arg2) && (piVar9[1] == *(arg2 + 8))) {
                piVar5 = arg1;
                for (; (*piVar11 != 0 && (*piVar11 == *piVar5)); piVar11 = piVar11 + 2) {
                    piVar5 = piVar5 + 1;
                }
                if (*piVar11 == *piVar5) {
                    return piVar9 + 2;
                }
            }
            piVar10 = piVar10 + 1;
        } while (piVar10 < *0x21d40);
    }
    iVar2 = *arg1;
    piVar5 = arg1;
    piVar10 = piVar8;
    while (iVar2 != 0) {
        piVar5 = piVar5 + 1;
        piVar10 = piVar10 + 1;
        iVar2 = *piVar5;
    }
    iVar3 = *arg2;
    iVar1 = piVar10 - 4;
    piVar10 = piVar8;
    piVar11 = piVar8;
    do {
        if ((*piVar8[0x4108] == iVar3) && (piVar8[0x4108][1] == *(arg2 + 8))) {
            if (arg3 != '\0') {
                iVar2 = *arg1;
                piVar5 = arg1;
                piVar9 = piVar10;
                while (iVar2 != piVar10) {
                    piVar5 = piVar5 + 1;
                    piVar9 = piVar9 + 1;
                    iVar2 = *piVar5;
                }
                piVar6 = piVar10;
                for (piVar5 = piVar8[0x4109]; *piVar5 != piVar10; piVar5 = piVar5 + 1) {
                    piVar6 = piVar6 + 1;
                }
                if ((((((piVar9 == piVar6) && (iVar4 = fcn.00018ec4(arg1,piVar8[0x4109],iVar1), iVar4 == 0)) &&
                      ((iVar2 = *(arg1 + iVar1 * 2), iVar2 - 0x30U < 10 || (iVar2 - 0x41U < 6)))) &&
                     ((iVar2 = *(arg1 + 2 + iVar1 * 2), iVar2 - 0x30U < 10 || (iVar2 - 0x41U < 6)))) &&
                    ((iVar2 = *(arg1 + 4 + iVar1 * 2), iVar2 - 0x30U < 10 || (iVar2 - 0x41U < 6)))) &&
                   ((iVar2 = *(arg1 + 6 + iVar1 * 2), iVar2 - 0x30U < 10 || (iVar2 - 0x41U < 6))))
                goto code_r0x0001ad12;
            }
            piVar7 = arg1;
            for (piVar5 = piVar8[0x4109]; (*piVar5 != 0 && (*piVar5 == *piVar7)); piVar5 = piVar5 + 1) {
                piVar7 = piVar7 + 1;
            }
            if (*piVar5 == *piVar7) {
code_r0x0001ad12:
                return (piVar11 * 5 + 2) * 8 + 0x20840;
            }
        }
        piVar11 = piVar11 + 1;
        piVar8 = piVar8 + 5;
        if (0xef < piVar8) {
            return piVar10;
        }
    } while( true );
}


/* fcn.000190b0 @ 0x190b0 */

int64_t fcn.000190b0(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_18 [2];
    
    iVar1 = (**(*0x21bf0 + 0x40))(noname_0,arg1,aiStackX_18);
    if (iVar1 < 0) {
        aiStackX_18[0] = 0;
    }
    if ((aiStackX_18[0] != 0) && (arg1 != 0)) {
        aiStackX_18[0] = fcn.00011040(aiStackX_18[0],arg1);
    }
    return aiStackX_18[0];
}


/* fcn.00011040 @ 0x11040 */

int64_t fcn.00011040(int64_t arg1,int64_t arg2)

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


/* fcn.00018f34 @ 0x18f34 */

ulong fcn.00018f34(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int16_t iVar1;
    uint64_t extraout_RAX;
    uint in_register_00000014;
    
    if ((((arg1 == 0) || (arg3 == 0)) || (1000000 < CONCAT44(in_register_00000014,arg2))) ||
       (CONCAT44(in_register_00000014,arg2) == 0)) {
        return 0x8000000000000002;
    }
    fcn.00018f00(arg3,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + (extraout_RAX + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x00018faa;
    }
    if (arg3 < arg1 + CONCAT44(in_register_00000014,arg2) * 2) {
        return 0x800000000000000f;
    }
code_r0x00018faa:
    iVar1 = *arg3;
    if (iVar1 != 0) {
        arg3 = arg3 - arg1;
        do {
            *arg1 = iVar1;
            arg1 = arg1 + 2;
            iVar1 = *(arg3 + arg1);
        } while (iVar1 != 0);
    }
    *arg1 = 0;
    return 0;
}


/* fcn.00017b20 @ 0x17b20 */

int64_t fcn.00017b20(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    ulong *puVar2;
    int64_t iVar3;
    ulong auStackX_18 [2];
    int64_t *in_stack_00000028;
    
    puVar2 = *0x21ec8;
    uVar1 = *0x21eb8;
    if (((arg3 == 0) || (arg4 == 0)) || (in_stack_00000028 == NULL)) {
        iVar3 = -0x7ffffffffffffffe;
    }
    else {
        auStackX_18[0] = *0x21eb8;
        **0x21ec8 = *0x20150;
        puVar2[1] = *0x20158;
        puVar2[2] = uVar1;
        *(puVar2 + 3) = 0x43504356;
        *(puVar2 + 0x1c) = 1;
        *(puVar2 + 4) = 4;
        *(puVar2 + 0x2c) = arg1;
        iVar3 = (***0x21ec0)(*0x21ec0,puVar2,puVar2,auStackX_18);
        if (-1 < iVar3) {
            iVar3 = *(puVar2 + 0x24);
            *arg2 = *(puVar2 + 6);
            *arg3 = *(puVar2 + 0x34);
            *arg4 = *(puVar2 + 7);
            *in_stack_00000028 = puVar2 + 0x39;
        }
    }
    return iVar3;
}


/* fcn.00017e20 @ 0x17e20 */

uint64_t fcn.00017e20(uint32_t arg1)

{
    uint16_t *puVar1;
    uint64_t in_RAX;
    char *pcVar2;
    uint32_t uVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    char *pcVar5;
    uint16_t *puVar6;
    uint16_t *puVar7;
    uint8_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar9 = 0;
    if ((*(iVar4 + 6) & 0x10000000) != 0) {
        puVar1 = iVar4 + 4;
        puVar6 = iVar4 + -2 + *puVar1;
        in_RAX = *puVar6;
        if ((*(puVar6 + (2 - in_RAX)) & 1) != 0) {
            pcVar5 = iVar4 + 10;
            pcVar2 = iVar4 + *puVar1;
            uVar10 = pcVar2 - pcVar5;
            if (pcVar2 < pcVar5) {
                uVar10 = uVar9;
            }
            if (uVar10 != 0) {
                pcVar2 = pcVar5;
                do {
                    uVar9 = uVar9 + *pcVar2;
                    pcVar2 = pcVar2 + 1;
                } while (pcVar2 - pcVar5 < uVar10);
            }
            uVar8 = uVar9;
            puVar6 = iVar4 + 6;
            uVar3 = ~-(puVar6 < puVar1) & 2;
            if (uVar3 != 0) {
                puVar7 = puVar1;
                do {
                    uVar8 = uVar9 + *puVar7;
                    uVar9 = uVar8;
                    puVar7 = puVar7 + 1;
                    puVar6 = puVar7 - puVar1;
                } while (puVar6 < uVar3);
            }
            return CONCAT71(puVar6 >> 8,-(*(iVar4 + 9) + uVar8));
        }
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.0001807c @ 0x1807c */

int64_t fcn.0001807c(int64_t arg1)

{
    char cVar1;
    int64_t noname_0;
    
    noname_0 = *(arg1 + 0x20);
    cVar1 = fcn.00017f30(noname_0,arg1);
    if (cVar1 == '\0') {
        noname_0 = 0;
    }
    else if ((-1 < *(noname_0 + 9)) || ((*(noname_0 + 6) & 0x8000000) != 0)) {
        noname_0 = fcn.0001804c(noname_0,arg1);
    }
    return noname_0;
}


/* fcn.00018744 @ 0x18744 */

ulong fcn.00018744(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int64_t iVar2;
    ulong uVar3;
    uchar auStackX_10 [8];
    int64_t *in_stack_00000028;
    
    if (arg2 == 0) {
        return 0x8000000000000002;
    }
    if (*arg1 == 0) {
        iVar2 = fcn.0001807c(arg3);
    }
    else {
        if (((*(arg3 + 0x30) == 0) || (cVar1 = fcn.00017f30(*(arg3 + 0x30),arg3), cVar1 == '\0')) ||
           (cVar1 = fcn.00018230(*(arg3 + 0x30),arg1,arg2,0), cVar1 == '\0')) {
            iVar2 = fcn.00018344(arg1,arg2,auStackX_10,arg3);
            if (iVar2 == 0) {
                return 0x8000000000000002;
            }
        }
        else {
            iVar2 = *(arg3 + 0x30);
        }
        if ((arg4 != '\0') && ((*(iVar2 + 9) & 1) == 0)) {
            return 0x8000000000000002;
        }
        iVar2 = fcn.0001804c(iVar2,arg3);
    }
    if (iVar2 == 0) {
code_r0x000187f4:
        *(arg3 + 0x30) = 0;
        uVar3 = 0x800000000000000e;
    }
    else {
        if (arg4 != '\0') {
            do {
                if ((*(iVar2 + 9) & 1) != 0) break;
                iVar2 = fcn.0001804c(iVar2,arg3);
            } while (iVar2 != 0);
            if (iVar2 == 0) goto code_r0x000187f4;
        }
        if (in_stack_00000028 != NULL) {
            *in_stack_00000028 = iVar2;
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00018598 @ 0x18598 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.00018598(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int16_t iVar2;
    uint8_t *puVar3;
    bool bVar4;
    uint32_t arg2_00;
    uint8_t *puVar5;
    uint8_t *puVar6;
    ulong uVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t var_bp_10h;
    int64_t var_30h;
    char in_stack_00000030;
    
    uVar7 = 0;
    do {
        if ((((arg1 == 0) || (arg3 == 0)) || (arg2 == 0)) || (arg4 == 0)) {
            return 0x8000000000000002;
        }
        puVar6 = (-((*(arg1 + 6) & 0x4000000) != 0) & 0xf) + 0xb + arg1;
        iVar8 = (*(arg1 + 4) - puVar6) + arg1;
        puVar5 = puVar6;
        if ((*(arg1 + 6) & 0x2000000) == 0) {
            for (; (*puVar5 != 0 || (puVar5[1] != 0)); puVar5 = puVar5 + 2) {
                if (iVar8 < 1) goto code_r0x00018653;
                iVar8 = iVar8 + -2;
            }
            if (0 < iVar8) {
                puVar5 = puVar5 + (2 - puVar6);
                goto code_r0x000186a4;
            }
        }
        else {
            do {
                uVar1 = *puVar5;
                puVar5 = puVar5 + 1;
                iVar9 = iVar8;
                if (uVar1 == 0) break;
                iVar9 = iVar8 + -1;
                bVar4 = 0 < iVar8;
                iVar8 = iVar9;
            } while (bVar4);
            if (0 < iVar9) {
                puVar5 = (puVar5 - puVar6) * 2;
code_r0x000186a4:
                puVar3 = *arg3;
                *arg3 = puVar5;
                if (puVar3 < puVar5) {
                    uVar7 = 0x8000000000000005;
                }
                else {
                    if ((*(arg1 + 6) & 0x4000000) == 0) {
                        arg2_00 = *(var_30h + 0x10) + *(arg1 + 10) * -0x10;
                    }
                    else {
                        arg2_00 = arg1 + 10;
                    }
                    if ((*(arg1 + 6) & 0x2000000) == 0) {
                        iVar8 = puVar6 - arg2;
                        do {
                            iVar2 = *(iVar8 + arg2);
                            *arg2 = iVar2;
                            arg2 = arg2 + 2;
                        } while (iVar2 != 0);
                    }
                    else {
                        do {
                            uVar1 = *puVar6;
                            puVar6 = puVar6 + 1;
                            *arg2 = uVar1;
                            arg2 = arg2 + 2;
                        } while (uVar1 != 0);
                    }
                    fcn.0001fab0(arg4,arg2_00,0x10);
                    *(var_30h + 0x30) = arg1;
                }
                return uVar7;
            }
        }
code_r0x00018653:
        arg1 = fcn.0001804c(arg1,var_30h);
        if (in_stack_00000030 != '\0') {
            for (; (arg1 != 0 && ((*(arg1 + 6) & 0x1000000) == 0)); arg1 = fcn.0001804c(arg1,var_30h)) {
            }
        }
        if (arg1 == 0) {
            return 0x800000000000000e;
        }
    } while( true );
}


/* fcn.00018f00 @ 0x18f00 */

uint64_t fcn.00018f00(uint32_t arg1,int64_t arg2)

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


/* fcn.00019f4c @ 0x19f4c */

void fcn.00019f4c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.000191dc(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.000191a8 @ 0x191a8 */

uchar * fcn.000191a8(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00011060 @ 0x11060 */

int64_t fcn.00011060(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.000190fc @ 0x190fc */

int64_t fcn.000190fc(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000190b0(6,arg2);
    if ((arg1_00 != 0) && (arg3 != 0)) {
        if (arg1 < arg2) {
            arg2 = arg1;
        }
        if ((arg2 != 0) && (arg1_00 != arg3)) {
            section..text(arg1_00,arg3,arg2);
        }
        (**(*0x21bf0 + 0x48))(arg3);
    }
    return arg1_00;
}


/* fcn.0001b390 @ 0x1b390 */

int64_t fcn.0001b390(void)

{
    int64_t iVar1;
    int64_t iVar2;
    
    *0x21d74 = 0;
    *0x21e08 = 0;
    iVar1 = fcn.000161c0(0x21740,0x20948,2,8);
    iVar2 = 0;
    if (iVar1 < 0) {
        iVar2 = iVar1;
    }
    return iVar2;
}


/* fcn.0001bb7c @ 0x1bb7c */

ulong fcn.0001bb7c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t arg2_00;
    ulong uVar2;
    uint auStackX_18 [2];
    ulong uStackX_20;
    int32_t var_90h;
    int64_t var_98h;
    uint uStack_148;
    uint uStack_144;
    uint uStack_140;
    uint uStack_13c;
    uchar auStack_138 [48];
    uchar auStack_108 [48];
    uchar auStack_d8 [40];
    uchar auStack_b0 [72];
    int64_t var_60h;
    int64_t var_bp_38h;
    
    uStack_148 = 0xc811fa38;
    uStack_144 = 0x457942c8;
    uStack_140 = 0xe960bba9;
    auStackX_18[0] = 0;
    uStack_13c = 0x34fbdd4e;
    uStackX_20 = 0x51;
    iVar1 = fcn.00015bf0(0x217a0,&uStack_148,auStackX_18,&uStackX_20);
    if (iVar1 == 0) {
        fcn.0001fa5e(auStack_108,0x2a,0);
        iVar1 = fcn.0001a48c(auStack_108,auStack_b0,0x28);
        if ((iVar1 != 0) || (iVar1 = fcn.0001a48c(auStack_108,auStack_d8,0x28), iVar1 != 0)) {
            uVar2 = 2;
            if ((1 < arg2) && (*(arg1 + -2 + (arg2 & 0xfffffffffffffffeU)) == 0)) {
                arg2 = arg2 + -2;
            }
            if (arg2 - 6U < 0x23) {
                fcn.0001fa5e(auStack_138,0x2a,0);
                arg2_00 = arg1;
                fcn.0001fab0(auStack_138,arg2_00,arg2);
                fcn.0001be58(auStack_138);
                iVar1 = fcn.0001a48c(arg2_00,auStack_b0,0x28);
                if ((iVar1 != 0) && (iVar1 = fcn.0001a48c(auStack_138,auStack_b0,0x28), iVar1 != 0)) {
                    iVar1 = fcn.0001a48c(arg2_00,auStack_d8,0x28);
                    if ((iVar1 != 0) && (iVar1 = fcn.0001a48c(auStack_138,auStack_d8,0x28), iVar1 != 0)) {
                        return 3;
                    }
                    uVar2 = 1;
                }
                return uVar2;
            }
            return 3;
        }
    }
    return 0;
}


/* fcn.0001b340 @ 0x1b340 */

int64_t fcn.0001b340(void)

{
    int64_t iVar1;
    int64_t iVar2;
    
    *0x21d74 = 1;
    *0x21e08 = 1;
    iVar1 = fcn.000161c0(0x21740,0x20948,2,8);
    iVar2 = 0;
    if (iVar1 < 0) {
        iVar2 = iVar1;
    }
    return iVar2;
}


/* fcn.0001fa50 @ 0x1fa50 */

int64_t fcn.0001fa50(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint *puVar4;
    
    uVar1 = arg2;
    puVar4 = arg1;
    if (3 < arg3) {
        if ((arg1 & 3U) != 0) {
            iVar3 = 4 - (arg1 & 3U);
            arg3 = arg3 - iVar3;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar4 = uVar1;
                puVar4 = puVar4 + 1;
            }
        }
        for (uVar2 = arg3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar4 = puVar4 + 1;
        }
        arg3 = arg3 & 3;
    }
    for (; arg3 != 0; arg3 = arg3 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
    }
    return arg1;
}


/* fcn.0001bd18 @ 0x1bd18 */

void fcn.0001bd18(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    char16_t *pcVar2;
    uint32_t arg1_00;
    uint32_t auStackX_20 [2];
    int64_t var_68h;
    uint uStack_118;
    uint uStack_114;
    uint uStack_110;
    uint uStack_10c;
    int64_t iStack_108;
    uchar auStack_100 [56];
    uchar auStack_c8 [40];
    uchar auStack_a0 [24];
    int64_t var_80h;
    int64_t var_58h;
    
    uStack_118 = 0xc811fa38;
    uStack_114 = 0x457942c8;
    uStack_110 = 0xe960bba9;
    uStack_10c = 0x34fbdd4e;
    auStackX_20[0] = 0;
    iStack_108 = 0x51;
    iVar1 = fcn.00015bf0(0x217a0,&uStack_118,auStackX_20,&iStack_108);
    if (iVar1 == 0) {
        fcn.0001fa5e(auStack_100,0x2a,0);
        fcn.0001fab0(auStack_100,arg2,arg3);
        fcn.0001be58(auStack_100);
        pcVar2 = L"$SETADMINPASSWD";
        for (; (*arg1 != L'\0' && (*arg1 == *pcVar2)); arg1 = arg1 + 2) {
            pcVar2 = pcVar2 + 1;
        }
        if (*arg1 == *pcVar2) {
            fcn.0001fa5e(auStack_a0,0x28,0);
            arg1_00 = auStack_a0;
        }
        else {
            fcn.0001fa5e(auStack_c8,0x28,0);
            arg1_00 = auStack_c8;
        }
        fcn.0001fab0(arg1_00,auStack_100,0x28);
        fcn.000161c0(0x217a0,&uStack_118,auStackX_20[0],iStack_108);
    }
    return;
}


/* fcn.0001be58 @ 0x1be58 */

void fcn.0001be58(int64_t arg1)

{
    int iVar1;
    uchar auStack_108 [32];
    ulong uStack_e8;
    uint uStack_e0;
    uint uStack_dc;
    uint uStack_d8;
    uint uStack_d4;
    uint uStack_d0;
    uint uStack_cc;
    uint uStack_c8;
    uint uStack_c4;
    uint uStack_c0;
    
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0x6a09e667;
    uStack_dc = 0xbb67ae85;
    uStack_d8 = 0x3c6ef372;
    uStack_d4 = 0xa54ff53a;
    uStack_d0 = 0x510e527f;
    uStack_cc = 0x9b05688c;
    uStack_c8 = 0x1f83d9ab;
    uStack_c4 = 0x5be0cd19;
    iVar1 = fcn.0001e0d0(&uStack_e8,arg1,0x28);
    if (iVar1 == 0) {
        iVar1 = fcn.0001e1cc(&uStack_e8,auStack_108);
        if (iVar1 == 0) {
            fcn.0001fa5e(arg1,0x28,0);
            if (arg1 != auStack_108) {
                section..text(arg1,auStack_108,0x20);
            }
        }
    }
    return;
}


/* fcn.0001e0d0 @ 0x1e0d0 */

ulong fcn.0001e0d0(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t *arg1_00;
    int64_t iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = arg3;
    uVar6 = arg3 & 0xffffffff;
    if (*(arg1_00 + 5) < 0x40) {
        while (uVar5 = uVar6, iVar1 != 0) {
            if ((arg1_00[5] == 0) && (0x3f < uVar5)) {
                iVar3 = arg1_00 + 0x2c;
                if (iVar3 != arg2) {
                    section..text(iVar3,arg2,0x40);
                }
                iVar1 = fcn.0001dee4(arg1_00,iVar3);
                if (iVar1 < 0) goto code_r0x0001e0f8;
                *arg1_00 = *arg1_00 + 0x200;
                arg2 = arg2 + 0x40;
                uVar6 = uVar5 - 0x40;
            }
            else {
                uVar4 = 0x40 - arg1_00[5];
                if (uVar5 < uVar4) {
                    uVar4 = uVar5;
                }
                iVar3 = arg1_00 + *(arg1_00 + 5) + 0x2c;
                if ((uVar4 != 0) && (iVar3 != arg2)) {
                    section..text(iVar3,arg2,uVar4);
                }
                *(arg1_00 + 5) = arg1_00[5] + uVar4;
                arg2 = arg2 + uVar4;
                uVar6 = uVar5 - uVar4;
                if (arg1_00[5] == 0x40) {
                    iVar1 = fcn.0001dee4(arg1_00,arg1_00 + 0x2c);
                    if (iVar1 < 0) goto code_r0x0001e0f8;
                    *arg1_00 = *arg1_00 + 0x200;
                    *(arg1_00 + 5) = 0;
                }
            }
            iVar1 = uVar6;
        }
        uVar2 = 0;
    }
    else {
code_r0x0001e0f8:
        uVar2 = 0xffffffff;
    }
    return uVar2;
}


/* fcn.0001e1cc @ 0x1e1cc */

ulong fcn.0001e1cc(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    uint32_t uVar2;
    uint uVar3;
    ulong uVar4;
    uchar *puVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong uStackX_8;
    
    uVar2 = *(arg1 + 0x28);
    if (uVar2 < 0x40) {
        iVar7 = 0;
        *arg1 = *arg1 + (uVar2 << 3);
        *(uVar2 + 0x2c + arg1) = 0x80;
        *(arg1 + 0x28) = *(arg1 + 0x28) + 1;
        uVar2 = *(arg1 + 0x28);
        if (0x38 < uVar2) {
            while (uVar2 < 0x40) {
                *(uVar2 + 0x2c + arg1) = 0;
                *(arg1 + 0x28) = *(arg1 + 0x28) + 1;
                uVar2 = *(arg1 + 0x28);
            }
            fcn.0001dee4(arg1,arg1 + 0x2c);
            *(arg1 + 0x28) = 0;
        }
        while (*(arg1 + 0x28) < 0x38) {
            *(*(arg1 + 0x28) + 0x2c + arg1) = 0;
            *(arg1 + 0x28) = *(arg1 + 0x28) + 1;
        }
        uStackX_8 = *arg1;
        puVar5 = &uStackX_8 + 7;
        iVar6 = 8;
        do {
            uVar1 = *puVar5;
            puVar5 = puVar5 + -1;
            *(arg1 + 100 + iVar7) = uVar1;
            iVar7 = iVar7 + 1;
        } while (iVar7 < 8);
        fcn.0001dee4(arg1,arg1 + 0x2c);
        puVar5 = arg2 + 1;
        do {
            uVar3 = *(puVar5 + (arg1 - arg2) + 7);
            puVar5[-1] = uVar3 >> 0x18;
            *puVar5 = uVar3 >> 0x10;
            puVar5[1] = uVar3 >> 8;
            puVar5[2] = uVar3;
            puVar5 = puVar5 + 4;
            iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        uVar4 = 0;
    }
    else {
        uVar4 = 0xffffffff;
    }
    return uVar4;
}


/* fcn.000189a8 @ 0x189a8 */

int64_t fcn.000189a8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t in_stack_00000028;
    
    if (((arg2 == 0) || (arg4 == 0)) || ((in_stack_00000028 == 0 && (*arg4 != 0)))) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = fcn.00018500(arg1,arg2,arg3,arg4);
        if (iVar1 == -0x7ffffffffffffff2) {
            iVar1 = -0x7ffffffffffffff2;
        }
    }
    return iVar1;
}


/* fcn.0001907c @ 0x1907c */

ulong fcn.0001907c(int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x21bf0 + 0x40))(4,arg1,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.0001c1b8 @ 0x1c1b8 */

int64_t fcn.0001c1b8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t in_stack_00000028;
    int64_t iStack_28;
    int64_t iStack_20;
    int64_t iStack_18;
    int64_t iStack_10;
    
    cVar1 = fcn.00013cc0(arg1,arg2,&iStack_18,&iStack_20);
    if (cVar1 == '\0') {
        iVar2 = -0x7ffffffffffffff2;
    }
    else if ((arg4 == 0) || (in_stack_00000028 == 0)) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        if ((arg3 != 0) && (iVar2 = fcn.000183c4(iStack_20,iStack_28,arg3), iVar2 < 0)) {
            return iVar2;
        }
        uVar3 = fcn.00017eb0(iStack_10,iStack_18,in_stack_00000028,iStack_28);
        *arg4 = uVar3;
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.0001cae0 @ 0x1cae0 */

uchar fcn.0001cae0(void)

{
    int64_t iVar1;
    uchar uVar2;
    uint8_t auStackX_8 [16];
    uchar auStackX_18 [16];
    
    iVar1 = fcn.0001c1b8(0x20ef0,0x20010,auStackX_8,auStackX_18);
    uVar2 = 0;
    if (-1 < iVar1) {
        uVar2 = 0;
        if ((auStackX_8[0] & 0x30) != 0) {
            uVar2 = 1;
        }
    }
    return uVar2;
}


/* fcn.0001c604 @ 0x1c604 */

void fcn.0001c604(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.000161c0(0x21840,0x200e0,7,1);
    if (-1 < iVar1) {
        *0x21d9c = arg1;
    }
    return;
}


/* fcn.0001cb2c @ 0x1cb2c */

ulong fcn.0001cb2c(void)

{
    ulong uVar1;
    ulong auStackX_8 [4];
    
    if (*0x20a28 == '\0') {
        uVar1 = 0;
    }
    else {
        auStackX_8[0] = 7;
        uVar1 = fcn.00015bf0(0x21720,0x20a38,0,auStackX_8);
    }
    return uVar1;
}


/* fcn.0001f4e0 @ 0x1f4e0 */

int64_t fcn.0001f4e0(ulong noname_0,int64_t arg1,ulong noname_2,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uStackX_20;
    uchar auStack_30 [40];
    
    if (arg1 == 0) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        uStackX_20 = 0;
        iVar1 = (**(*0x21c58 + 0x48))(arg1,0x20010,0,&uStackX_20,0);
        if (iVar1 == -0x7ffffffffffffffb) {
            fcn.0001f590(auStack_30);
            iVar1 = (**(*0x21c58 + 0x58))(arg1,0x20010,0x27,0x28,auStack_30);
            if (iVar1 < 0) {
                return iVar1;
            }
        }
        iVar2 = 0;
        if (iVar1 != -0x7ffffffffffffff2) {
            iVar2 = iVar1;
        }
    }
    return iVar2;
}


/* fcn.0001c268 @ 0x1c268 */

void fcn.0001c268(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    int64_t in_stack_00000028;
    
    iVar1 = fcn.0001c1b8(arg1,0x20010,0,&stack0x00000028);
    if ((iVar1 < 0) || (arg2 != 1)) {
        fcn.000161c0(arg1,0x20010,6,1);
    }
    else {
        if (in_stack_00000028 != arg3) {
            section..text(in_stack_00000028,arg3,1);
        }
        fcn.0001c1b8(arg1,0x20010,0,&stack0x00000028);
    }
    return;
}


/* fcn.0001c64c @ 0x1c64c */

int64_t fcn.0001c64c(int64_t arg1)

{
    int64_t iVar1;
    char16_t *arg1_00;
    ulong noname_0;
    int64_t in_RDX;
    int iVar2;
    ulong in_R8;
    uchar *arg4;
    uchar auStackX_18 [16];
    
    iVar1 = fcn.0001c604(arg1);
    if (iVar1 < 0) {
        return iVar1;
    }
    iVar2 = arg1;
    if (iVar2 != 1) {
        if (iVar2 != 2) {
            if (iVar2 != 3) {
                return iVar1;
            }
            iVar1 = 0x20a24;
            arg1_00 = L"DeployedMode";
            goto code_r0x0001c71f;
        }
        in_R8 = 0;
        arg4 = auStackX_18;
        in_RDX = 0x20010;
        noname_0 = 0x20ef0;
        iVar1 = fcn.0001c1b8(0x20ef0,0x20010,0,arg4);
        if (-1 < iVar1) {
            in_RDX = 0x20ef0;
            *0x20a29 = 2;
            iVar1 = fcn.0001f4e0(noname_0,0x20ef0,in_R8,arg4);
        }
        *0x20a29 = 4;
        if (iVar1 < 0) {
            fcn.0001c604(0);
            return iVar1;
        }
        iVar1 = fcn.0001c268(0x21010,in_RDX,in_R8,0x20a1c);
        if (iVar1 < 0) {
            return iVar1;
        }
    }
    iVar1 = *0x21d9c * 6 + 0x20a14;
    arg1_00 = L"SetupMode";
code_r0x0001c71f:
    iVar1 = fcn.0001c268(arg1_00,in_RDX,in_R8,iVar1);
    return iVar1;
}


/* fcn.0001c884 @ 0x1c884 */

ulong fcn.0001c884(uint32_t arg1,uint32_t arg2)

{
    int16_t iVar1;
    int64_t iVar2;
    int64_t extraout_RAX;
    uint in_register_0000000c;
    uint in_register_00000014;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar4 = 0;
    iVar1 = *CONCAT44(in_register_00000014,arg2);
    iVar3 = iVar4;
    while (iVar1 != 0) {
        iVar3 = iVar3 + 2;
        iVar1 = *(iVar3 + CONCAT44(in_register_00000014,arg2));
    }
    iVar1 = *CONCAT44(in_register_0000000c,arg1);
    iVar2 = iVar4;
    while (iVar1 != 0) {
        iVar2 = iVar2 + 2;
        iVar1 = *(iVar2 + CONCAT44(in_register_0000000c,arg1));
    }
    if (iVar3 == iVar2) {
        iVar1 = *CONCAT44(in_register_00000014,arg2);
        while (iVar1 != 0) {
            iVar4 = iVar4 + 2;
            iVar1 = *(iVar4 + CONCAT44(in_register_00000014,arg2));
        }
        fcn.0001a48c(arg1,CONCAT44(in_register_00000014,arg2),iVar4);
        if (extraout_RAX == 0) {
            return 0;
        }
    }
    return 1;
}


/* fcn.0001c730 @ 0x1c730 */

int64_t fcn.0001c730(int64_t arg1)

{
    int64_t iVar1;
    char16_t *arg1_00;
    int64_t in_RDX;
    int iVar2;
    uint64_t arg1_01;
    ulong in_R8;
    
    arg1_01 = arg1 & 0xffffffff;
    iVar2 = arg1;
    if (*0x21d9c == 0) {
        iVar1 = fcn.0001c64c(arg1_01);
        return iVar1;
    }
    if (*0x21d9c == 1) {
        iVar1 = fcn.0001c604(arg1_01);
        if (iVar1 < 0) {
            return iVar1;
        }
        if (iVar2 != 0) {
            if (iVar2 != 2) {
                return iVar1;
            }
            iVar1 = *0x21d9c * 6 + 0x20a10;
            arg1_00 = L"AuditMode";
            goto code_r0x0001c7c5;
        }
        iVar1 = 0x20a14;
    }
    else if (*0x21d9c == 2) {
        iVar1 = fcn.0001c604(arg1_01);
        if (iVar1 < 0) {
            return iVar1;
        }
        if (iVar2 != 3) {
            return iVar1;
        }
        iVar1 = fcn.0001c268(0x21010,in_RDX,in_R8,0x20a22);
        if (iVar1 < 0) {
            return iVar1;
        }
        iVar1 = fcn.0001c268(0x21030,in_RDX,in_R8,0x20a24);
        if (iVar1 < 0) {
            return iVar1;
        }
        iVar1 = 0x20a26;
    }
    else {
        if (*0x21d9c != 3) {
            return -0x7ffffffffffffffe;
        }
        iVar1 = fcn.0001c604(arg1_01);
        if (iVar1 < 0) {
            return iVar1;
        }
        if (iVar2 == 0) {
            iVar1 = 0x20a12;
            arg1_00 = L"DeployedMode";
            goto code_r0x0001c7c5;
        }
        if (iVar2 != 1) {
            return iVar1;
        }
        iVar1 = fcn.0001c268(0x21030,in_RDX,in_R8,0x20a18);
        if (iVar1 < 0) {
            return iVar1;
        }
        iVar1 = 0x20a1a;
    }
    arg1_00 = L"SetupMode";
code_r0x0001c7c5:
    iVar1 = fcn.0001c268(arg1_00,in_RDX,in_R8,iVar1);
    return iVar1;
}


/* fcn.0001ca2c @ 0x1ca2c */

//WARNING: Type propagation algorithm not settling

bool fcn.0001ca2c(void)

{
    char cVar1;
    int64_t *piVar2;
    
    if (*0x20a28 == '\0') {
        return false;
    }
    fcn.0001cb2c();
    cVar1 = '\0';
    piVar2 = 0x218c0;
    do {
        if (cVar1 != '\0') goto code_r0x0001ca7e;
        cVar1 = (**piVar2)();
        piVar2 = piVar2 + 1;
    } while (*piVar2 != 0);
    if (cVar1 != '\0') {
code_r0x0001ca7e:
        cVar1 = '\0';
        piVar2 = 0x21930;
        do {
            if (cVar1 != '\0') {
                return true;
            }
            cVar1 = (**piVar2)();
            piVar2 = piVar2 + 1;
        } while (*piVar2 != 0);
        if ((cVar1 != '\0') || (*0x20a2d == '\x01')) {
            return true;
        }
    }
    return *0x21d9c == 2 && *0x20a29 == '\x02';
}


/* fcn.0001c8e4 @ 0x1c8e4 */

uchar fcn.0001c8e4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uchar uVar2;
    
    iVar1 = fcn.0001a48c(arg2,0x20010,0x10);
    uVar2 = 0;
    if (iVar1 == 0) {
        iVar1 = fcn.0001c884(arg1,0x20ef0);
        uVar2 = 0;
        if (iVar1 == 0) {
            uVar2 = 1;
        }
    }
    return uVar2;
}


/* fcn.0001c934 @ 0x1c934 */

uchar fcn.0001c934(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uchar uVar2;
    
    iVar1 = fcn.0001a48c(arg2,0x20010,0x10);
    uVar2 = 0;
    if (iVar1 == 0) {
        iVar1 = fcn.0001c884(arg1,0x20ee8);
        uVar2 = 0;
        if (iVar1 == 0) {
            uVar2 = 1;
        }
    }
    return uVar2;
}


/* fcn.0001c984 @ 0x1c984 */

uint64_t fcn.0001c984(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint32_t arg1_00;
    uint64_t uVar3;
    uchar auStack_48 [64];
    
    uVar3 = 0;
    iVar1 = fcn.0001a48c(arg2,0x20010,0x10);
    arg1_00 = arg1;
    if ((iVar1 == 0) && (iVar1 = fcn.0001c884(arg1_00,0x20ff0), iVar1 == 0)) {
        return 1;
    }
    uVar2 = fcn.0001c884(arg1_00,0x21890);
    if (uVar2 == 0) {
        for (; uVar3 < 0x10000; uVar3 = uVar3 + 1) {
            fcn.00019178(auStack_48,0x3c,0x218a8,0x21890);
            uVar2 = fcn.0001c884(arg1_00,auStack_48);
            if (uVar2 == 0) {
                return 1;
            }
        }
    }
    return uVar2 & 0xffffffffffffff00;
}


/* fcn.0001d7c8 @ 0x1d7c8 */

int64_t fcn.0001d7c8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    char cVar3;
    char cVar4;
    char cVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint8_t uVar8;
    int64_t iVar9;
    uint64_t *in_stack_00000028;
    int64_t in_stack_00000030;
    int64_t in_stack_00000038;
    int64_t in_stack_00000040;
    int64_t iStack_70;
    int64_t iStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    uint64_t uStack_50;
    uint64_t uStack_48;
    uint64_t uStack_40;
    
    if ((arg3 & 0x20U) == 0) {
        return -0x7ffffffffffffffe;
    }
    uVar2 = *arg4;
    if (*in_stack_00000028 < 0x28) {
        return -0x7fffffffffffffe6;
    }
    uVar1 = *(uVar2 + 0x10);
    if (*in_stack_00000028 - 0x10 < uVar1) {
        return -0x7fffffffffffffe6;
    }
    if (uVar1 < 0x18) {
        return -0x7fffffffffffffe6;
    }
    iStack_60 = uVar2 + 0x28;
    uVar7 = uVar1 + 0x10;
    iVar9 = (uVar2 - iStack_60) + uVar7;
    if (*(uVar2 + 0x16) != 0xef1) {
        return -0x7fffffffffffffe6;
    }
    uStack_48 = uVar7;
    uStack_40 = uVar2;
    iVar6 = fcn.0001a48c(uVar2 + 0x18,0x200f0,0x10);
    if (iVar6 != 0) {
        return -0x7fffffffffffffe6;
    }
    cVar3 = fcn.0001ca2c();
    if (((cVar3 == '\0') || (in_stack_00000030 == 0)) || (cVar5 = '\x01', *in_stack_00000028 != uVar7)) {
        cVar5 = '\0';
    }
    if (in_stack_00000030 == 0) {
        iStack_58 = 0;
    }
    else {
        iStack_58 = *(in_stack_00000040 + 8);
    }
    if (cVar5 == '\0') {
        iVar6 = fcn.0001f7bc(uVar2,&uStack_50);
        if (iVar6 < 0) {
            uVar7 = 0;
            do {
                if ((*(uVar7 + uVar2) != '\0') && ((arg3 & 0x40U) == 0)) {
                    return -0x7fffffffffffffe6;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < 7);
            uStack_50 = 0;
        }
        if ((arg3 & 0x40U) == 0) {
            if (*(uVar2 + 7) != '\0') {
                return -0x7fffffffffffffe6;
            }
            if (*(uVar2 + 0xf) != '\0') {
                return -0x7fffffffffffffe6;
            }
            if (*(uVar2 + 8) != 0) {
                return -0x7fffffffffffffe6;
            }
            if (*(uVar2 + 0xc) != 0) {
                return -0x7fffffffffffffe6;
            }
            if (*(uVar2 + 0xe) != '\0') {
                return -0x7fffffffffffffe6;
            }
            if ((in_stack_00000030 != 0) && (uStack_50 <= *(in_stack_00000040 + 8))) {
                return -0x7fffffffffffffe6;
            }
        }
        else if ((in_stack_00000030 != 0) && (uStack_50 < *(in_stack_00000040 + 8))) {
            uStack_50 = *(in_stack_00000040 + 8);
        }
        *(in_stack_00000040 + 8) = uStack_50;
    }
    uVar8 = 4;
    iVar6 = fcn.0001a48c(arg2,0x200a0,0x10);
    if (iVar6 == 0) {
        uVar8 = 2;
code_r0x0001d9ba:
        if ((arg3 & 1U) == 0) {
            return -0x7ffffffffffffffe;
        }
        cVar5 = fcn.0001cae0();
        if (cVar5 != '\0') {
            cVar5 = cVar3;
            goto code_r0x0001d9de;
        }
    }
    else {
        cVar4 = fcn.0001c8e4(arg1,arg2);
        if (cVar4 != '\0') {
            uVar8 = 0;
            goto code_r0x0001d9ba;
        }
        cVar4 = fcn.0001c934(arg1,arg2);
        if (cVar4 != '\0') {
            uVar8 = 1;
            goto code_r0x0001d9ba;
        }
        cVar4 = fcn.0001c984(arg1,arg2);
        if (cVar4 != '\0') {
            uVar8 = 3;
            goto code_r0x0001d9ba;
        }
code_r0x0001d9de:
        if (cVar5 == '\0') {
            iStack_70 = 0x21da0;
            iVar6 = fcn.0001d648(arg1,arg2,arg3 & 0xffffffff,*arg4);
            if (iVar6 < 0) {
                return -0x7fffffffffffffe6;
            }
            if (uVar8 < 2) {
code_r0x0001db39:
                iVar6 = fcn.0001d388(iStack_60,iVar9,iStack_70,iStack_68);
            }
            else {
                if (uVar8 == 2) {
code_r0x0001db05:
                    iVar6 = fcn.0001d4d4(0x20ee8,0x20010,iStack_60,iVar9);
                    if (-1 < iVar6) goto code_r0x0001db80;
                    goto code_r0x0001db39;
                }
                if (uVar8 == 3) {
                    iVar6 = fcn.0001d4d4(0x210f0,0x200a0,iStack_60,iVar9);
                    if (-1 < iVar6) goto code_r0x0001db80;
                    goto code_r0x0001db05;
                }
                if (uVar8 == 4) {
                    iVar6 = (**(*0x21d78 + 8))(*0x21d78,iStack_60,iVar9,0,0,&iStack_70,&iStack_68,9,2);
                    if (iVar6 < 0) {
                        return -0x7fffffffffffffe6;
                    }
                    if ((in_stack_00000030 != 0) &&
                       (iVar9 = fcn.0001a48c(in_stack_00000040 + 0x10,iStack_70,0x20), iVar9 != 0)) {
                        return -0x7fffffffffffffe6;
                    }
                    fcn.0001fab0(in_stack_00000040 + 0x10,iStack_70,0x20);
                }
            }
            if (iVar6 < 0) {
                return -0x7fffffffffffffe6;
            }
            goto code_r0x0001db80;
        }
    }
    iVar6 = 0;
code_r0x0001db80:
    *in_stack_00000028 = *in_stack_00000028 - uStack_48;
    *arg4 = uStack_40 + uStack_48;
    if (((*in_stack_00000028 != 0) && (1 < uVar8 - 3)) &&
       (iVar6 = fcn.0001f628(uStack_40 + uStack_48,*in_stack_00000028,&uStack_40), -1 < iVar6)) {
        if ((uVar8 == 0) && (1 < uStack_40)) {
            return -0x7ffffffffffffffe;
        }
        if ((arg3 & 0x40U) != 0) {
            if (uVar8 == 0) {
                return -0x7ffffffffffffffe;
            }
            iVar6 = fcn.0001d0c0(*arg4,in_stack_00000028,in_stack_00000030,in_stack_00000038);
            if ((iVar6 < 0) && (iStack_58 != *(in_stack_00000040 + 8))) {
                *in_stack_00000028 = 0;
                iVar6 = 0;
            }
        }
    }
    return iVar6;
}


/* fcn.0001dcec @ 0x1dcec */

ulong fcn.0001dcec(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t *puVar1;
    char cVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong uStackX_20;
    uint64_t *in_stack_00000028;
    int64_t in_stack_00000030;
    uint64_t *puStack0000000000000038;
    int64_t in_stack_00000040;
    
    puVar1 = *arg4;
    if ((arg3 & 0x10U) == 0) {
        return 0x8000000000000002;
    }
    if (*in_stack_00000028 < 0x28) {
        return 0x800000000000001a;
    }
    if (*(puVar1 + 0xe) != 0xef1) {
        return 0x800000000000001a;
    }
    iVar3 = fcn.0001a48c(puVar1 + 0x10,0x20170,0x10);
    if (iVar3 != 0) {
        return 0x800000000000001a;
    }
    if (*in_stack_00000028 < 0x230) {
        return 0x800000000000001a;
    }
    cVar2 = fcn.0001c8e4(arg1,arg2);
    if (cVar2 != '\0') {
        return 0x8000000000000002;
    }
    cVar2 = fcn.0001c934(arg1,arg2);
    if (cVar2 != '\0') {
        return 0x8000000000000002;
    }
    iVar3 = fcn.0001a48c(arg2,0x200a0,0x10);
    if (iVar3 == 0) {
        return 0x8000000000000002;
    }
    cVar2 = fcn.0001c984(arg1,arg2);
    if (cVar2 != '\0') {
        return 0x8000000000000002;
    }
    if ((arg3 & 0x40U) == 0) {
        if ((in_stack_00000030 != 0) && (*puVar1 <= *(in_stack_00000040 + 8))) {
            return 0x800000000000001a;
        }
    }
    else if ((in_stack_00000030 != 0) && (*puVar1 < *(in_stack_00000040 + 8))) goto code_r0x0001de13;
    *(in_stack_00000040 + 8) = *puVar1;
code_r0x0001de13:
    puStack0000000000000038 = puVar1 + 6;
    iVar3 = fcn.0001dc08(*arg4,*in_stack_00000028,puStack0000000000000038);
    if (-1 < iVar3) {
        uStackX_20 = 0x100;
        uVar4 = (**(*0x21d78 + 0x10))(*0x21d78,0x20070,1,&stack0x00000038,&uStackX_20,0x21de0);
        if ((in_stack_00000030 == 0) || (iVar3 = fcn.0001a48c(in_stack_00000040 + 0x10,0x21de0,0x20), iVar3 == 0)) {
            fcn.0001fab0(in_stack_00000040 + 0x10,0x21de0,0x20);
            *in_stack_00000028 = *in_stack_00000028 - 0x230;
            *arg4 = puVar1 + 0x46;
            return uVar4;
        }
    }
    return 0x800000000000001a;
}


/* fcn.0001f7bc @ 0x1f7bc */

ulong fcn.0001f7bc(uint32_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uint16_t uVar5;
    uint16_t uVar6;
    uint32_t uVar7;
    int iVar8;
    uint in_register_0000000c;
    uint16_t *puVar9;
    int64_t iVar10;
    ulong uVar11;
    uint32_t uVar12;
    int32_t var_1h;
    
    puVar9 = CONCAT44(in_register_0000000c,arg1);
    uVar4 = puVar9[1];
    uVar1 = *(puVar9 + 3);
    uVar12 = 0x7b2;
    uVar5 = puVar9[2];
    uVar11 = 0x8000000000000002;
    uVar2 = *(puVar9 + 5);
    *arg2 = 0;
    uVar6 = puVar9[3];
    if (((((0x7b1 < *puVar9) && (uVar4 - 1 < 0xc)) && (uVar1 - 1 < 0x1f)) && ((uVar5 < 0x18 && (uVar2 < 0x3c)))) &&
       (uVar6 < 0x3d)) {
        *arg2 = 0;
        uVar3 = *puVar9;
        if (uVar3 != 0x7b2) {
            do {
                uVar7 = uVar12 & 0x80000003;
                if (uVar7 < 0) {
                    uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
                }
                if ((uVar7 == 0) && ((uVar12 != (uVar12 / 100) * 100 || (uVar12 == (uVar12 / 400) * 400)))) {
                    iVar8 = 0x16e;
                }
                else {
                    iVar8 = 0x16d;
                }
                uVar12 = uVar12 + 1;
                *arg2 = *arg2 + iVar8 * 0x15180;
            } while (uVar12 != uVar3);
        }
        if (((uVar3 & 3) == 0) && ((uVar12 = uVar3, uVar12 != (uVar3 / 100) * 100 || (uVar12 == (uVar12 / 400) * 400)))
           ) {
            iVar10 = 0xe;
        }
        else {
            iVar10 = 0;
        }
        *arg2 = *arg2 + *((uVar4 + iVar10) * 4 + 0x21a40) * 0x15180 + (uVar5 * 0x3c + uVar2) * 0x3c +
                        uVar1 * 0x15180 + -0x15180 + uVar6;
        uVar11 = 0;
    }
    return uVar11;
}


/* fcn.0001d648 @ 0x1d648 */

//WARNING: Variable defined which should be unmapped: var_fh
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h

int64_t fcn.0001d648(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int16_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t var_fh;
    uint auStackX_18 [2];
    char *pcStackX_20;
    int64_t in_stack_00000028;
    ulong *in_stack_00000038;
    char cStack0000000000000040;
    int64_t var_5fh;
    int64_t aiStack_78 [5];
    int64_t iStack_50;
    uchar auStack_48 [7];
    int64_t var_39h;
    int64_t var_31h;
    int64_t var_29h;
    int64_t var_21h;
    int64_t var_19h;
    int64_t var_11h;
    int64_t var_9h;
    int64_t var_1h;
    
    auStackX_18[0] = arg3;
    pcStackX_20 = &stack0x00000040;
    iVar5 = *(arg4 + 0x10) + 0x10;
    cStack0000000000000040 = '\0';
    iVar3 = (**(*0x21d78 + 8))(*0x21d78,arg4 + 0x28,(iVar5 - (arg4 + 0x28)) + arg4,0,0,&pcStackX_20,aiStack_78,6
                               ,1);
    if (-1 < iVar3) {
        cVar1 = *pcStackX_20;
        if (cVar1 == '\x01') {
            uVar4 = 0x20070;
            *in_stack_00000038 = 0x20;
        }
        else if (cVar1 == '\x02') {
            uVar4 = 0x201c0;
            *in_stack_00000038 = 0x30;
        }
        else {
            if (cVar1 != '\x03') {
                return -0x7ffffffffffffffd;
            }
            uVar4 = 0x20210;
            *in_stack_00000038 = 0x40;
        }
        iVar2 = *arg1;
        aiStack_78[0] = 0;
        while (iVar2 != 0) {
            aiStack_78[0] = aiStack_78[0] + 2;
            iVar2 = *(aiStack_78[0] + arg1);
        }
        unique0x00008f00 = auStackX_18;
        unique0x00009500 = iVar5 + arg4;
        aiStack_78[1] = 0x10;
        aiStack_78[4] = in_stack_00000028 - iVar5;
        aiStack_78[2] = 4;
        aiStack_78[3] = 0x10;
        iStack_50 = arg1;
        _auStack_48 = arg2;
        unique0x100000cb = arg4;
        iVar3 = (**(*0x21d78 + 0x10))(*0x21d78,uVar4,5,&iStack_50,aiStack_78,0x21da0);
    }
    return iVar3;
}


/* fcn.0001d4d4 @ 0x1d4d4 */

//WARNING: Removing unreachable block (ram,0x0001d538)
//WARNING: Removing unreachable block (ram,0x0001d53b)
//WARNING: Removing unreachable block (ram,0x0001d544)
//WARNING: Removing unreachable block (ram,0x0001d551)
//WARNING: Removing unreachable block (ram,0x0001d56f)
//WARNING: Removing unreachable block (ram,0x0001d593)
//WARNING: Removing unreachable block (ram,0x0001d5f4)
//WARNING: Removing unreachable block (ram,0x0001d5e3)
//WARNING: Removing unreachable block (ram,0x0001d5f2)
//WARNING: Removing unreachable block (ram,0x0001d5f7)
//WARNING: Removing unreachable block (ram,0x0001d609)
//WARNING: Removing unreachable block (ram,0x0001d616)
//WARNING: Removing unreachable block (ram,0x0001d61a)

ulong fcn.0001d4d4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iStack_30;
    
    fcn.0001c1b8(arg1,arg2,0,&iStack_30);
    return 0x800000000000001a;
}


/* fcn.0001d388 @ 0x1d388 */

//WARNING: Removing unreachable block (ram,0x0001d3f3)
//WARNING: Removing unreachable block (ram,0x0001d417)
//WARNING: Removing unreachable block (ram,0x0001d435)
//WARNING: Removing unreachable block (ram,0x0001d410)
//WARNING: Removing unreachable block (ram,0x0001d445)
//WARNING: Removing unreachable block (ram,0x0001d48f)
//WARNING: Removing unreachable block (ram,0x0001d49c)

ulong fcn.0001d388(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iStack_20;
    
    fcn.0001c1b8(0x20ef0,0x20010,0,&iStack_20);
    return 0x800000000000001a;
}


/* fcn.0001f628 @ 0x1f628 */

//WARNING: Variable defined which should be unmapped: var_1ch

uint64_t fcn.0001f628(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint in_register_00000014;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t var_1ch;
    
    uVar4 = CONCAT44(in_register_00000014,arg2);
    if ((uVar4 < 0x30001) && (arg1 != 0)) {
        iVar7 = 0;
        uVar2 = 0x800000000000001a;
        uVar1 = *(arg1 + 0x10);
        while ((uVar5 = uVar1, uVar4 != 0 && (uVar5 <= uVar4))) {
            uVar2 = 0;
            iVar8 = 0x20a50;
            do {
                iVar3 = fcn.0001a48c(arg1,iVar8,0x10);
                if (iVar3 == 0) break;
                uVar2 = uVar2 + 1;
                iVar8 = iVar8 + 0x10;
            } while (uVar2 < 9);
            if ((((8 < uVar2) || (uVar1 < 0x2d)) || (0x30000 < uVar1)) ||
               ((*(arg1 + 0x14) != 0 || (uVar2 = *(arg1 + 0x18), (uVar5 - 0x1c) % uVar2 != 0)))) {
                return 0x8000000000000002;
            }
            if ((*arg1 == *0x20180) && (*(arg1 + 8) == *0x20188)) {
                fcn.0001a770();
                iVar8 = fcn.0001efec(arg1 + 0x2c,uVar2 - 0x10);
                uVar6 = ~-(iVar8 != 0) & 0x8000000000000002;
                fcn.0001a770();
                if (uVar6 < 0) {
                    return uVar6;
                }
            }
            iVar7 = iVar7 + 1;
            uVar6 = 0x1c;
            if (0x1c < uVar5) {
                do {
                    uVar6 = uVar6 + uVar2;
                } while (uVar6 < uVar5);
            }
            arg1 = arg1 + uVar5;
            uVar2 = 0;
            uVar4 = uVar4 - uVar5;
            uVar1 = *(arg1 + 0x10);
        }
        if (arg3 != 0) {
            *arg3 = iVar7;
        }
    }
    else {
        uVar2 = 0x800000000000001a;
    }
    return uVar2;
}


/* fcn.0001d0c0 @ 0x1d0c0 */

ulong fcn.0001d0c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t arg3_00;
    int64_t arg2_00;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uint32_t uStackX_18;
    
    if (((arg3 != 0) && (arg4 != 0)) && (arg1 != arg3)) {
        for (; (arg4 != 0 && (*(arg3 + 0x10) <= arg4)); arg3 = arg3 + *(arg3 + 0x10)) {
            uVar5 = ((*(arg3 + 0x10) - *(arg3 + 0x14)) - 0x1c) / *(arg3 + 0x18);
            iVar6 = arg3 + 0x1c + *(arg3 + 0x14);
            if (uVar5 != 0) {
                uVar5 = uVar5 & 0xffffffff;
code_r0x0001d13f:
                arg3_00 = *arg2;
                arg2_00 = arg1;
joined_r0x0001d148:
                do {
                    if ((arg3_00 == 0) || (uVar1 = *(arg2_00 + 0x10), arg3_00 < uVar1)) goto code_r0x0001d227;
                    uVar2 = *(arg2_00 + 0x14);
                    uVar3 = *(arg2_00 + 0x18);
                    iVar7 = arg2_00 + 0x1c + uVar2;
                    iVar4 = fcn.0001a48c(arg3,arg2_00,0x10);
                    if ((iVar4 == 0) && (*(arg3 + 0x18) == uVar3)) {
                        uVar8 = 1;
                        uStackX_18 = ((uVar1 - uVar2) - 0x1c) / uVar3;
                        if (uStackX_18 != 0) {
                            do {
                                iVar4 = fcn.0001a48c(iVar6 + 0x10,iVar7 + 0x10,*(arg3 + 0x18) - 0x10);
                                if (iVar4 == 0) {
                                    if (uStackX_18 == 1) {
                                        uVar1 = *(arg2_00 + 0x10);
                                        *arg2 = *arg2 - uVar1;
                                        arg3_00 = arg3_00 - uVar1;
                                        fcn.0001fab0(arg2_00,*(arg2_00 + 0x10) + arg2_00,arg3_00);
                                        goto joined_r0x0001d148;
                                    }
                                    fcn.0001fab0(iVar7,*(arg2_00 + 0x18) + iVar7,
                                                 ((*arg2 - *(arg2_00 + 0x18)) - iVar7) + arg1);
                                    *(arg2_00 + 0x10) = *(arg2_00 + 0x10) - *(arg2_00 + 0x18);
                                    *arg2 = *arg2 - *(arg2_00 + 0x18);
                                    if (*(arg2_00 + 0x10) - *(arg2_00 + 0x14) == 0x1c) break;
                                }
                                else {
                                    iVar7 = iVar7 + *(arg2_00 + 0x18);
                                }
                                uVar8 = uVar8 + 1;
                            } while (uVar8 <= uStackX_18);
                        }
                    }
                    arg3_00 = arg3_00 - *(arg2_00 + 0x10);
                    arg2_00 = arg2_00 + *(arg2_00 + 0x10);
                } while( true );
            }
code_r0x0001d23c:
            arg4 = arg4 - *(arg3 + 0x10);
        }
        if (*arg2 == 0) {
            return 0x8000000000000014;
        }
    }
    return 0;
code_r0x0001d227:
    iVar6 = iVar6 + *(arg3 + 0x18);
    uVar5 = uVar5 - 1;
    if (uVar5 == 0) goto code_r0x0001d23c;
    goto code_r0x0001d13f;
}


/* fcn.0001dc08 @ 0x1dc08 */

//WARNING: Variable defined which should be unmapped: var_fh
//WARNING: Variable defined which should be unmapped: var_17h

void fcn.0001dc08(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t var_fh;
    int64_t var_17h;
    int32_t var_27h;
    int64_t var_2fh;
    int64_t var_37h;
    int64_t aiStack_88 [3];
    int64_t iStack_70;
    uint uStack_68;
    uint uStack_64;
    uint uStack_60;
    uint uStack_5c;
    uint uStack_58;
    int64_t iStack_50;
    ulong uStack_48;
    ulong uStack_40;
    uint uStack_38;
    int64_t var_29h;
    int64_t var_21h;
    int64_t var_19h;
    int64_t var_11h;
    int64_t var_9h;
    
    aiStack_88[2] = arg1 + 0x230;
    aiStack_88[0] = arg2 + -0x230;
    aiStack_88[1] = 8;
    iStack_70 = arg1;
    iVar1 = (*(*0x21d78)[2])(*0x21d78,0x20070,2,aiStack_88 + 2,aiStack_88,&var_21h + 1);
    if (-1 < iVar1) {
        iStack_50 = &var_21h + 1;
        uStack_38 = 0x100;
        uStack_48 = *0x20260;
        uStack_40 = *0x20268;
        uStack_68 = *0x20070;
        uStack_64 = *0x20074;
        uStack_60 = *0x20078;
        uStack_5c = *0x2007c;
        uStack_58 = 0x20;
        unique0x1000011a = arg3;
        (***0x21d78)(*0x21d78,&uStack_48,&uStack_68,arg1 + 0x130,0x100,1);
    }
    return;
}


/* fcn.0001dee4 @ 0x1dee4 */

ulong fcn.0001dee4(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    int *piVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    int64_t iVar7;
    uint32_t uVar8;
    int iVar9;
    uchar *puVar10;
    int *piVar11;
    uint32_t uVar12;
    uint32_t *puVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    int aiStack_150 [2];
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    uchar auStack_130 [8];
    uint32_t auStack_128 [64];
    
    piVar11 = arg1 + 8;
    uVar3 = *piVar11;
    uVar4 = *(arg1 + 0x10);
    uVar5 = *(arg1 + 0x18);
    uVar6 = *(arg1 + 0x20);
    uStack_148 = uVar3;
    uStack_140 = uVar4;
    iVar7 = 0x10;
    uStack_138 = uVar5;
    auStack_130 = uVar6;
    puVar10 = arg2 + 2;
    do {
        *(puVar10 + 4 + auStack_130 + (2 - arg2)) =
             CONCAT11(puVar10[-1],*puVar10) << 8 | puVar10[-2] << 0x18 | puVar10[1];
        iVar7 = iVar7 + -1;
        puVar10 = puVar10 + 4;
    } while (iVar7 != 0);
    iVar7 = 0x30;
    puVar13 = auStack_128 + 0xe;
    do {
        uVar8 = puVar13[-0xd];
        uVar12 = *puVar13;
        puVar13[2] = ((uVar8 << 0xe | uVar8 >> 0x12) ^ (uVar8 >> 7 | uVar8 << 0x19) ^ uVar8 >> 3) +
                     ((uVar12 << 0xf | uVar12 >> 0x11) ^ (uVar12 << 0xd | uVar12 >> 0x13) ^ uVar12 >> 10) +
                     puVar13[-0xe] + puVar13[-5];
        iVar7 = iVar7 + -1;
        puVar13 = puVar13 + 1;
    } while (iVar7 != 0);
    auStack_130._4_4_ = uVar6 >> 0x20;
    iVar7 = 0;
    auStack_130._0_4_ = uVar6;
    uStack_138._4_4_ = uVar5 >> 0x20;
    uStack_138._0_4_ = uVar5;
    uStack_140._4_4_ = uVar4 >> 0x20;
    uStack_140._0_4_ = uVar4;
    uStack_148._4_4_ = uVar3 >> 0x20;
    uStack_148._0_4_ = uVar3;
    do {
        uVar12 = uStack_148;
        uVar17 = uStack_148._4_4_;
        uVar16 = uStack_140;
        uVar14 = uStack_138;
        uVar15 = uStack_138._4_4_;
        uVar8 = auStack_130._0_4_;
        piVar1 = iVar7 + 0x21940;
        piVar2 = auStack_128 + iVar7;
        iVar7 = iVar7 + 4;
        iVar9 = ((uVar14 >> 0xb | uVar14 << 0x15) ^ (uVar14 << 7 | uVar14 >> 0x19) ^ (uVar14 >> 6 | uVar14 << 0x1a)) +
                ((uVar15 ^ uVar8) & uVar14 ^ uVar8) + *piVar1 + *piVar2 + auStack_130._4_4_;
        uStack_138._0_4_ = uStack_140._4_4_ + iVar9;
        uStack_148._0_4_ =
             ((uVar17 | uVar12) & uVar16 | uVar17 & uVar12) +
             iVar9 + ((uVar12 >> 0xd | uVar12 << 0x13) ^ (uVar12 << 10 | uVar12 >> 0x16) ^
                     (uVar12 >> 2 | uVar12 << 0x1e));
        auStack_130._4_4_ = uVar8;
        auStack_130._0_4_ = uVar15;
        uStack_138._4_4_ = uVar14;
        uStack_140._4_4_ = uVar16;
        uStack_140._0_4_ = uVar17;
        uStack_148._4_4_ = uVar12;
    } while (iVar7 < 0x100);
    iVar7 = 8;
    uStack_148 = CONCAT44(uVar12,uStack_148);
    uStack_138 = CONCAT44(uVar14,uStack_138);
    uStack_140 = CONCAT44(uVar16,uVar17);
    do {
        *piVar11 = *piVar11 + *((aiStack_150 - arg1) + piVar11);
        piVar11 = piVar11 + 1;
        iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    return 0;
}


/* fcn.0001f1dc @ 0x1f1dc */

int fcn.0001f1dc(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint8_t *puVar1;
    uint8_t uVar2;
    uint in_register_00000014;
    uint8_t *puVar3;
    int iVar4;
    
    fcn.00011060(arg3,0x18,0);
    puVar1 = arg1 + CONCAT44(in_register_00000014,arg2);
    if (arg1 < puVar1) {
        uVar2 = *arg1;
        puVar3 = arg1 + 1;
        *(arg3 + 8) = uVar2;
        iVar4 = 1;
        *(arg3 + 9) = uVar2 >> 6;
        *(arg3 + 10) = uVar2 >> 5 & 1;
        if ((uVar2 & 0x1f) == 0x1f) {
            *(arg3 + 0xc) = 0;
            do {
                if (puVar1 <= puVar3) {
                    return -1;
                }
                uVar2 = *puVar3;
                puVar3 = puVar3 + 1;
                *(arg3 + 0xc) = uVar2 & 0x7f | *(arg3 + 0xc) << 7;
            } while (uVar2 < '\0');
        }
        else {
            *(arg3 + 0xc) = uVar2 & 0x1f;
        }
        if (puVar3 < puVar1) {
            uVar2 = *puVar3;
            puVar3 = puVar3 + 1;
            if (uVar2 < '\0') {
                if (uVar2 == 0xff) {
                    return -1;
                }
                uVar2 = uVar2 & 0x7f;
                *(arg3 + 0x10) = 0;
                if (4 < uVar2) {
                    return -1;
                }
                while (uVar2 != 0) {
                    uVar2 = uVar2 - 1;
                    if (puVar1 <= puVar3) {
                        return -1;
                    }
                    *(arg3 + 0x10) = *(arg3 + 0x10) << 8 | *puVar3;
                    puVar3 = puVar3 + 1;
                }
            }
            else {
                *(arg3 + 0x10) = uVar2;
            }
            if ((puVar3 <= puVar1) && (*(arg3 + 0x10) <= puVar1 - puVar3)) {
                *arg3 = puVar3;
                if (((*(arg3 + 9) == '\0') && (*(arg3 + 0xc) == 1)) && ((*(arg3 + 0x10) != 1 || (*puVar3 - 1 < 0xfe))))
                {
                    iVar4 = 0;
                }
                return iVar4 + -1;
            }
        }
    }
    return -1;
}


/* fcn.0001f3ac @ 0x1f3ac */

ulong fcn.0001f3ac(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint8_t *puVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint8_t *puVar5;
    uint32_t uVar6;
    uint in_R8;
    ulong *puVar7;
    
    puVar7 = CONCAT44(in_R8,arg3);
    if (((*(puVar7 + 2) != 0) && (*(puVar7 + 9) == '\0')) && (*(puVar7 + 0xc) == 6)) {
        uVar6 = *(puVar7 + 2);
        puVar5 = *puVar7;
        *arg2 = puVar5 + uVar6;
        fcn.00011060(arg1,0x58,0);
        puVar1 = puVar5 + uVar6;
        while( true ) {
            if (puVar1 <= puVar5) {
                return 0;
            }
            uVar6 = 0;
            do {
                if (puVar1 <= puVar5) {
                    return 0xffffffff;
                }
                uVar2 = *puVar5;
                puVar5 = puVar5 + 1;
                uVar6 = uVar2 & 0x7f | uVar6 << 7;
            } while (uVar2 < '\0');
            uVar3 = *(arg1 + 0x50);
            if (0x13 < uVar3) break;
            if (uVar3 == 0) {
                uVar4 = uVar6 / 0x28;
                if (2 < uVar4) {
                    uVar4 = 2;
                }
                *arg1 = uVar4;
                *(arg1 + 4) = uVar6 + uVar4 * -0x28;
                *(arg1 + 0x50) = 2;
            }
            else {
                *(arg1 + uVar3 * 4) = uVar6;
                *(arg1 + 0x50) = *(arg1 + 0x50) + 1;
            }
        }
        return 0xffffffff;
    }
    return 0xffffffff;
}


/* fcn.0001e2c0 @ 0x1e2c0 */

int fcn.0001e2c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    int iVar1;
    uint64_t uVar2;
    int64_t *in_stack_00000028;
    uchar auStack_28 [32];
    
    if ((*(in_stack_00000028 + 9) == '\0') && (*(in_stack_00000028 + 0xc) == 0x10)) {
        arg1_00 = *in_stack_00000028;
        uVar2 = *(in_stack_00000028 + 2) + arg1_00;
        if (uVar2 <= arg1 + arg2) {
            *arg4 = uVar2;
            iVar1 = fcn.0001f1dc(arg1_00,uVar2 - arg1_00,auStack_28);
            if (iVar1 < 0) {
                iVar1 = -1;
            }
            else {
                iVar1 = fcn.0001f3ac(arg3,&stack0x00000028,auStack_28);
            }
            return -(iVar1 != 0);
        }
    }
    return -1;
}


/* fcn.0001a6dc @ 0x1a6dc */

void fcn.0001a6dc(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int iVar5;
    
    iVar3 = *0x21ca8;
    iVar5 = 0;
    if (*0x21ca8 != 0) {
        if (*(*0x21ca8 + 0x10) == 0) {
            fcn.0001a770();
        }
        piVar1 = *(iVar3 + 0x10);
        piVar2 = *(iVar3 + 0x18);
        if (piVar1 <= piVar2) {
            piVar4 = piVar1;
            do {
                if ((*(piVar4 + 9) == '\x01') && (iVar3 = *piVar4, iVar3 == arg1)) {
                    *(piVar1 + iVar5 * 0x10 + 9) = 0;
                    if (*(piVar1 + iVar5 * 2 + 1) << 7 == 0) {
                        return;
                    }
                    fcn.00011060(iVar3,*(piVar1 + iVar5 * 2 + 1) << 7,0);
                    return;
                }
                iVar5 = iVar5 + 1;
                piVar4 = piVar4 + 2;
            } while (piVar1 + iVar5 * 2 <= piVar2);
        }
    }
    return;
}


/* fcn.0001a5f8 @ 0x1a5f8 */

int64_t fcn.0001a5f8(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    int64_t iVar4;
    uint8_t *puVar5;
    int64_t *piVar6;
    uint32_t uVar7;
    
    iVar1 = *0x21ca8;
    if (*0x21ca8 != 0) {
        if (*(*0x21ca8 + 0x10) == 0) {
            fcn.0001a770();
        }
        piVar2 = *(iVar1 + 0x10);
        uVar7 = ((arg1 & 0x7fU) != 0) + (arg1 >> 7);
        if ((uVar7 < 0x100) && (iVar3 = 0, piVar2 <= *(iVar1 + 0x18))) {
            puVar5 = piVar2 + 1;
            do {
                if ((puVar5[1] == 0) && (uVar7 <= *puVar5)) {
                    *(piVar2 + iVar3 * 0x10 + 9) = 1;
                    return piVar2[iVar3 * 2];
                }
                iVar3 = iVar3 + 1;
                puVar5 = puVar5 + 0x10;
            } while (piVar2 + iVar3 * 2 <= *(iVar1 + 0x18));
            if (piVar2 <= *(iVar1 + 0x18)) {
                iVar4 = *(piVar2 + 1) * 0x80 + *piVar2;
                piVar6 = uVar7 * 0x80 + iVar4;
                if (iVar4 != *piVar2) {
                    piVar2 = piVar2 + -2;
                }
                if (*(iVar1 + 0x20) < piVar6) {
                    *(iVar1 + 0x20) = piVar6;
                }
                if (piVar6 < piVar2) {
                    *(iVar1 + 0x10) = piVar2;
                    *piVar2 = iVar4;
                    *(piVar2 + 1) = uVar7;
                    *(piVar2 + 9) = 1;
                    return iVar4;
                }
            }
        }
    }
    return 0;
}


/* fcn.0001f178 @ 0x1f178 */

uint64_t fcn.0001f178(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    uchar *puVar1;
    uint32_t arg2_00;
    uint64_t auStackX_18 [2];
    uchar auStack_18 [16];
    
    arg2_00 = arg2;
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    if ((arg2 != '\0') && (auStack_18 != puVar1)) {
        section..text(auStack_18,arg1,arg2 & 0xffU);
        arg2_00 = puVar1;
    }
    auStack_18[arg2 & 0xffU] = 0;
    fcn.00018fd4(auStack_18,arg2_00,auStackX_18);
    *arg3 = auStackX_18[0];
    return auStackX_18[0] & 0xffffffff;
}


/* fcn.00018fd4 @ 0x18fd4 */

ulong fcn.00018fd4(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    uVar3 = 0;
    if ((arg1 == 0) || (arg3 == 0)) {
        return 0x8000000000000002;
    }
    uVar2 = uVar3;
    if (*arg1 != '\0') {
        do {
            if (999999 < uVar2) {
                return 0x8000000000000002;
            }
            uVar2 = uVar2 + 1;
        } while (*(uVar2 + arg1) != '\0');
        if (1000000 < uVar2) {
            return 0x8000000000000002;
        }
    }
    for (; (*arg1 == ' ' || (*arg1 == '\t')); arg1 = arg1 + 1) {
    }
    for (; *arg1 == '0'; arg1 = arg1 + 1) {
    }
    while( true ) {
        cVar1 = *arg1;
        *arg3 = uVar3;
        if (9 < cVar1 - 0x30U) {
            return 0;
        }
        cVar1 = *arg1;
        if (~(cVar1 + -0x30) / 10 < uVar3) break;
        arg1 = arg1 + 1;
        uVar3 = cVar1 + -0x30 + uVar3 * 10;
    }
    *arg3 = 0xffffffffffffffff;
    return 0x8000000000000003;
}


/* fcn.0001a7c8 @ 0x1a7c8 */

uint fcn.0001a7c8(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t in_stack_00000028;
    uint32_t in_stack_00000030;
    int *in_stack_00000038;
    
    uVar3 = 0xffffffff;
    uVar6 = 0x7b2;
    *in_stack_00000038 = 0;
    uVar7 = arg1;
    uVar4 = 0xffffffff;
    if (((((0x7b1 < uVar7) && (uVar4 = uVar3, arg2 - 1U < 0xc)) && (arg3 - 1U < 0x1f)) &&
        ((arg4 < 0x18 && (in_stack_00000028 < 0x3c)))) && (in_stack_00000030 < 0x3d)) {
        *in_stack_00000038 = 0;
        if (uVar7 != 0x7b2) {
            do {
                uVar1 = uVar6 & 0x80000003;
                if (uVar1 < 0) {
                    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
                }
                if (uVar1 == 0) {
                    if (uVar6 == (uVar6 / 100) * 100) {
                        if (uVar6 != (uVar6 / 400) * 400) goto code_r0x0001a886;
                    }
                    iVar2 = 0x16e;
                }
                else {
code_r0x0001a886:
                    iVar2 = 0x16d;
                }
                uVar6 = uVar6 + 1;
                *in_stack_00000038 = *in_stack_00000038 + iVar2 * 0x15180;
            } while (uVar6 != uVar7);
        }
        uVar6 = uVar7 & 0x80000003;
        if (uVar6 < 0) {
            uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
        }
        if ((uVar6 == 0) && ((uVar7 != (uVar7 / 100) * 100 || (uVar7 == (uVar7 / 400) * 400)))) {
            iVar5 = 0xe;
        }
        else {
            iVar5 = 0;
        }
        *in_stack_00000038 =
             *in_stack_00000038 +
             ((arg4 + (*((iVar5 + arg2) * 4 + 0x21a40) + -1 + arg3) * 0x18) * 0x3c + in_stack_00000028) * 0x3c +
             in_stack_00000030;
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.0001e7a0 @ 0x1e7a0 */

//WARNING: Variable defined which should be unmapped: var_8h

ulong fcn.0001e7a0(int64_t arg1,uint32_t arg2,uint32_t arg3,int64_t arg4)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    uint in_register_00000014;
    int64_t iVar4;
    uint32_t uVar5;
    uchar auStackX_8 [8];
    uint32_t auStackX_18 [4];
    int64_t var_30h;
    int64_t var_40h;
    uint32_t uStack_38;
    uint32_t uStack_34;
    uint32_t auStack_30 [2];
    int64_t var_8h;
    
    iVar4 = CONCAT44(in_register_00000014,arg2);
    uVar3 = arg1;
    if (arg3 == 0x17) {
        if (iVar4 != 0xd) {
            return 0xffffffff;
        }
        if (*(arg1 + 0xc) != 'Z') {
            return 0xffffffff;
        }
        iVar4 = 0;
        iVar2 = fcn.0001f178(uVar3,2,auStackX_18);
        if (iVar2 == -1) {
            return 0xffffffff;
        }
        if (auStackX_18[0] < 0x32) {
            uVar5 = auStackX_18[0] + 2000;
        }
        else {
            uVar5 = auStackX_18[0] + 0x76c;
        }
        iVar2 = 2;
    }
    else {
        if ((arg3 != 0x18) || (*(arg1 + -1 + iVar4) != 'Z')) {
            return 0xffffffff;
        }
        iVar2 = 4;
        iVar4 = CONCAT71(iVar4 >> 8,4);
        iVar1 = fcn.0001f178(uVar3,iVar4,auStackX_18);
        if (iVar1 == -1) {
            return 0xffffffff;
        }
        uVar5 = auStackX_18[0];
    }
    uVar3 = uVar3 + iVar2;
    iVar4 = CONCAT71(iVar4 >> 8,2);
    iVar2 = fcn.0001f178(uVar3,iVar4,auStack_30);
    if (iVar2 != -1) {
        iVar4 = CONCAT71(iVar4 >> 8,2);
        iVar2 = fcn.0001f178(uVar3 + 2,iVar4,&uStack_34);
        if (iVar2 != -1) {
            iVar4 = CONCAT71(iVar4 >> 8,2);
            iVar2 = fcn.0001f178(uVar3 + 4,iVar4,&uStack_38);
            if (iVar2 != -1) {
                iVar4 = CONCAT71(iVar4 >> 8,2);
                iVar2 = fcn.0001f178(uVar3 + 6,iVar4,auStackX_8);
                if ((iVar2 != -1) &&
                   (iVar2 = fcn.0001f178(uVar3 + 8,CONCAT71(iVar4 >> 8,2),auStackX_18), iVar2 != -1)) {
                    iVar2 = fcn.0001a7c8(uVar5,auStack_30[0],uStack_34,uStack_38);
                    if (iVar2 < 0) {
                        if (0x7b1 < uVar5) {
                            return 0xffffffff;
                        }
                        *arg4 = 0;
                    }
                    return 0;
                }
            }
        }
    }
    return 0xffffffff;
}


/* fcn.0001e9e4 @ 0x1e9e4 */

ulong fcn.0001e9e4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int iVar2;
    uint64_t arg1_00;
    uint64_t uVar3;
    uint32_t uVar4;
    int64_t var_20h;
    uint32_t var_17h;
    uint32_t var_bp_10h;
    
    iVar2 = fcn.0001f1dc(arg2,arg3,&var_20h);
    uVar4 = 0;
    if (((-1 < iVar2) && (var_17h == '\0')) && (stack0xffffffffffffffe4 == 0x10)) {
        *(arg1 + 0x400) = *(arg1 + 0x400) | 1;
        if (var_bp_10h == 0) {
            return 0;
        }
        uVar3 = var_bp_10h + var_20h;
        iVar2 = fcn.0001f1dc(var_20h,var_bp_10h,&var_20h);
        if ((-1 < iVar2) && (var_17h == '\0')) {
            if (stack0xffffffffffffffe4 == 1) {
                *(arg1 + 0x404) = *var_20h;
                arg1_00 = var_bp_10h + var_20h;
                if (uVar3 <= arg1_00) {
                    return 0;
                }
                iVar2 = fcn.0001f1dc(arg1_00,uVar3 - arg1_00,&var_20h);
                if (iVar2 < 0) {
                    return 0xffffffff;
                }
                if (var_17h != '\0') {
                    return 0xffffffff;
                }
            }
            if (*NULL == 2) {
                for (uVar3 = var_bp_10h; uVar3 != 0; uVar3 = uVar3 - 1) {
                    uVar1 = *var_20h;
                    var_20h = var_20h + 1;
                    uVar4 = uVar4 << 8 | uVar1;
                }
                *(arg1 + 0x400) = *(arg1 + 0x400) | 2;
                *(arg1 + 0x408) = uVar4;
                return 0;
            }
        }
    }
    return 0xffffffff;
}


/* fcn.0001f3e4 @ 0x1f3e4 */

uint32_t fcn.0001f3e4(int64_t arg1,uint32_t arg2)

{
    uint8_t uVar1;
    uint in_register_00000014;
    uint64_t uVar2;
    uint8_t uVar3;
    int64_t iVar4;
    uint8_t *puVar5;
    uint8_t uVar6;
    uint32_t uVar7;
    int64_t iVar8;
    
    uVar2 = CONCAT44(in_register_00000014,arg2);
    uVar7 = 0;
    puVar5 = arg1 + 1;
    iVar8 = 8;
    if (1 < uVar2) {
        uVar3 = 0;
        iVar4 = iVar8;
        uVar6 = *puVar5;
        do {
            uVar1 = uVar3 * '\x02';
            uVar3 = uVar1 | 1;
            if ((uVar6 & 1) == 0) {
                uVar3 = uVar1;
            }
            iVar4 = iVar4 + -1;
            uVar6 = uVar6 >> 1;
        } while (iVar4 != 0);
        uVar7 = uVar3;
        puVar5 = arg1 + 2;
    }
    if (2 < uVar2) {
        uVar6 = 0;
        iVar4 = iVar8;
        uVar3 = *puVar5;
        do {
            uVar1 = uVar6 * '\x02';
            uVar6 = uVar1 | 1;
            if ((uVar3 & 1) == 0) {
                uVar6 = uVar1;
            }
            iVar4 = iVar4 + -1;
            uVar3 = uVar3 >> 1;
        } while (iVar4 != 0);
        uVar7 = uVar7 | uVar6 << 8;
        puVar5 = puVar5 + 1;
    }
    if (3 < uVar2) {
        uVar6 = 0;
        iVar4 = iVar8;
        uVar3 = *puVar5;
        do {
            uVar1 = uVar6 * '\x02';
            uVar6 = uVar1 | 1;
            if ((uVar3 & 1) == 0) {
                uVar6 = uVar1;
            }
            iVar4 = iVar4 + -1;
            uVar3 = uVar3 >> 1;
        } while (iVar4 != 0);
        uVar7 = uVar7 | uVar6 << 0x10;
        puVar5 = puVar5 + 1;
    }
    if (4 < uVar2) {
        uVar6 = 0;
        uVar3 = *puVar5;
        do {
            uVar1 = uVar6 * '\x02';
            uVar6 = uVar1 | 1;
            if ((uVar3 & 1) == 0) {
                uVar6 = uVar1;
            }
            iVar8 = iVar8 + -1;
            uVar3 = uVar3 >> 1;
        } while (iVar8 != 0);
        uVar7 = uVar7 | uVar6 << 0x18;
    }
    return uVar7;
}


/* fcn.0001e444 @ 0x1e444 */

ulong fcn.0001e444(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    char *pcVar5;
    char *pcVar6;
    uint64_t uVar7;
    uint uVar8;
    char *arg1_00;
    char *pcVar9;
    char *pcStack_b8;
    char cStack_af;
    int iStack_ac;
    uint32_t uStack_a8;
    char *pcStack_a0;
    int iStack_98;
    int iStack_94;
    int iStack_90;
    int iStack_8c;
    int iStack_88;
    int iStack_84;
    int iStack_80;
    int64_t iStack_48;
    uchar auStack_38 [32];
    
    iVar3 = fcn.0001f1dc(arg1,arg2,&pcStack_b8);
    if ((((iVar3 < 0) || (cStack_af != '\0')) || (iStack_ac != 0x10)) ||
       (pcVar9 = pcStack_b8 + uStack_a8, arg1 + arg2 < pcVar9)) {
        return 0xffffffff;
    }
    *arg4 = pcVar9;
    cStack_af = '\0';
    iStack_ac = 0x10;
    arg1_00 = pcStack_b8;
joined_r0x0001e4b6:
    do {
        if (pcVar9 <= arg1_00) {
            return 0;
        }
        iVar3 = fcn.0001f1dc(arg1_00,pcVar9 - arg1_00,&pcStack_b8);
        if (iVar3 < 0) {
            return 0xffffffff;
        }
        if (cStack_af != '\0') {
            return 0xffffffff;
        }
        if (iStack_ac != 0x11) {
            return 0xffffffff;
        }
        arg1_00 = pcStack_b8 + uStack_a8;
        iVar3 = fcn.0001f1dc(pcStack_b8,arg1_00 - pcStack_b8,&pcStack_b8);
        pcVar6 = pcStack_b8;
        if (iVar3 < 0) {
            return 0xffffffff;
        }
        if (cStack_af != '\0') {
            return 0xffffffff;
        }
        if (iStack_ac != 0x10) {
            return 0xffffffff;
        }
        iVar3 = uStack_a8 + pcStack_b8;
        pcStack_a0 = pcStack_b8;
        iVar4 = fcn.0001f1dc(pcStack_b8,iVar3 - pcStack_b8,auStack_38);
        if (iVar4 < 0) {
            iVar4 = -1;
        }
        else {
            iVar4 = fcn.0001f3ac(&iStack_98,&pcStack_a0,auStack_38);
            pcVar6 = pcStack_a0;
        }
        if (iVar4 != 0) {
            return 0xffffffff;
        }
        iVar3 = fcn.0001f1dc(pcVar6,iVar3 - pcVar6,&pcStack_b8);
        if (iVar3 < 0) {
            return 0xffffffff;
        }
        if (cStack_af != '\0') {
            return 0xffffffff;
        }
        if (iStack_48 != 4) goto code_r0x0001e610;
    } while (((iStack_98 != 2) || (iStack_94 != 5)) || (iStack_90 != 4));
    if (iStack_8c == 3) {
        uVar8 = 2;
    }
    else if (iStack_8c == 6) {
        uVar8 = 3;
    }
    else if (iStack_8c == 7) {
        uVar8 = 4;
    }
    else if (iStack_8c == 8) {
        uVar8 = 5;
    }
    else {
        if (iStack_8c == 10) {
            uVar8 = 6;
            goto code_r0x0001e6fc;
        }
        if (iStack_8c != 0xb) goto joined_r0x0001e4b6;
        uVar8 = 7;
    }
    goto code_r0x0001e6fc;
code_r0x0001e610:
    if (iStack_48 != 7) goto joined_r0x0001e4b6;
    if (iStack_98 == 1) {
        if ((((iStack_94 == 2) && (iStack_90 == 0x348)) &&
            ((iStack_8c == 0x1bb8d && ((iStack_88 == 1 && (iStack_84 == 9)))))) && (iStack_80 == 1)) {
            fcn.0001a6dc(*(arg3 + 0x148));
            pcVar6 = fcn.0001a5f8(uStack_a8 + 1);
            *(arg3 + 0x148) = pcVar6;
            if (pcVar6 == NULL) {
                return 0xffffffff;
            }
            uVar7 = uStack_a8;
            if ((uStack_a8 != 0) && (pcVar6 != pcStack_b8)) {
                section..text(pcVar6,pcStack_b8,uStack_a8);
                uVar7 = uStack_a8;
            }
            *(uVar7 + *(arg3 + 0x148)) = 0;
        }
        goto joined_r0x0001e4b6;
    }
    if ((((iStack_98 != 0) || (iStack_94 != 9)) || (iStack_90 != 0x926)) ||
       (((iStack_8c != 0x124f92c || (iStack_88 != 100)) || ((iStack_84 != 1 || (iStack_80 != 0x19))))))
    goto joined_r0x0001e4b6;
    uVar8 = 1;
code_r0x0001e6fc:
    if ((*(arg3 + 0x140) == 0x14) ||
       (pcVar5 = fcn.0001a5f8(uStack_a8 + 1), pcVar6 = pcVar5, pcVar1 = pcStack_b8, uVar2 = uStack_a8,
       pcVar5 == NULL)) {
        return 0xffffffff;
    }
    while (uVar2 != 0) {
        if (*pcVar1 != '\0') {
            *pcVar6 = *pcVar1;
            pcVar6 = pcVar6 + 1;
        }
        pcVar1 = pcVar1 + 1;
        uVar2 = uVar2 - 1;
    }
    pcVar5[uStack_a8] = '\0';
    *(arg3 + *(arg3 + 0x140) * 0x10) = uVar8;
    *(arg3 + 8 + *(arg3 + 0x140) * 0x10) = pcVar5;
    *(arg3 + 0x140) = *(arg3 + 0x140) + 1;
    goto joined_r0x0001e4b6;
}


/* fcn.0001e8f4 @ 0x1e8f4 */

ulong fcn.0001e8f4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t var_20h;
    uint32_t var_17h;
    int32_t var_10h;
    
    iVar1 = fcn.0001f1dc(arg1,arg2,&var_20h);
    if ((((-1 < iVar1) && (var_17h == '\0')) && (stack0xffffffffffffffe4 == 0x10)) &&
       (var_10h <= (arg1 - var_20h) + arg2)) {
        *arg4 = var_10h + var_20h;
        iVar1 = fcn.0001f1dc(var_20h,var_10h,&var_20h);
        if ((((-1 < iVar1) && (var_17h == '\0')) &&
            ((iVar1 = fcn.0001e7a0(var_20h,var_10h,stack0xffffffffffffffe4,arg3 + 0x328), -1 < iVar1 &&
             ((iVar1 = fcn.0001f1dc(var_10h + var_20h,*arg4 - (var_10h + var_20h),&var_20h), -1 < iVar1 &&
              (var_17h == '\0')))))) &&
           (iVar1 = fcn.0001e7a0(var_20h,var_10h,stack0xffffffffffffffe4,arg3 + 0x32c), -1 < iVar1)) {
            return 0;
        }
    }
    return 0xffffffff;
}


/* fcn.0001e32c @ 0x1e32c */

ulong fcn.0001e32c(int64_t arg1,int64_t noname_1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint64_t uVar2;
    int64_t arg1_00;
    int64_t arg2_00;
    int64_t iStackX_8;
    int64_t iStack_48;
    char cStack_3f;
    int iStack_3c;
    int64_t var_30h;
    uchar uStack_30;
    uint32_t var_27h;
    int32_t var_bp_20h;
    int64_t var_bp_18h;
    
    iVar1 = fcn.0001f1dc(arg1,(arg1 + noname_1) - arg1,&iStack_48);
    arg1_00 = iStack_48;
    if (((-1 < iVar1) && (cStack_3f == '\0')) && (iStack_3c == 0x10)) {
        uVar2 = var_30h + iStack_48;
        iStackX_8 = iStack_48;
        if (uVar2 <= arg1 + noname_1) {
            *arg3 = uVar2;
            arg2_00 = uVar2 - iStack_48;
            iVar1 = fcn.0001f1dc(iStack_48,arg2_00,&uStack_30);
            if (iVar1 < 0) {
                iVar1 = -1;
            }
            else {
                iVar1 = fcn.0001e2c0(arg1_00,arg2_00,arg2 + 0x330,&iStackX_8);
                arg1_00 = iStackX_8;
            }
            if (((iVar1 == 0) && (iVar1 = fcn.0001f1dc(arg1_00,uVar2 - arg1_00,&iStack_48), -1 < iVar1)) &&
               ((cStack_3f == '\0' && ((iStack_3c == 3 && (var_30h != 0)))))) {
                *(arg2 + 0x390) = var_30h - 1;
                *(arg2 + 0x388) = iStack_48 + 1;
                return 0;
            }
            return 0xffffffff;
        }
    }
    return 0xffffffff;
}


/* fcn.0001eaec @ 0x1eaec */

//WARNING: Variable defined which should be unmapped: var_11h

ulong fcn.0001eaec(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    int64_t arg1_00;
    uint64_t arg1_01;
    int64_t iStackX_20;
    uint32_t var_37h;
    int64_t var_7fh;
    int64_t iStack_d8;
    char cStack_cf;
    int iStack_cc;
    uint32_t uStack_c8;
    int64_t iStack_c0;
    char cStack_b7;
    int iStack_b4;
    uint32_t uStack_b0;
    uint64_t uStack_a8;
    char cStack_9f;
    int iStack_9c;
    uint32_t uStack_98;
    uchar auStack_90 [15];
    int64_t var_79h;
    uint32_t var_70h;
    uchar auStack_74 [3];
    int32_t var_69h;
    uchar auStack_6c [3];
    int64_t var_61h;
    uint32_t var_58h;
    uint32_t var_51h;
    int64_t var_49h;
    uint32_t var_40h;
    int32_t var_39h;
    int64_t var_31h;
    uchar auStack_28 [7];
    uint32_t var_19h;
    uint32_t var_15h;
    uint32_t var_11h;
    uint32_t var_dh;
    
    iVar1 = fcn.0001f1dc(arg2,arg3,&uStack_a8);
    if (((-1 < iVar1) && (cStack_9f == '\0')) && (iStack_9c == 0x10)) {
        arg1_01 = uStack_a8;
code_r0x0001eb46:
        do {
            if (uStack_98 + uStack_a8 <= arg1_01) {
                return 0;
            }
            iVar1 = fcn.0001f1dc(arg1_01,(uStack_98 + uStack_a8) - arg1_01,&iStack_d8);
            arg1_00 = iStack_d8;
            if (((iVar1 < 0) || (cStack_cf != '\0')) || (iStack_cc != 0x10)) {
                iVar1 = -1;
            }
            else {
                arg1_01 = uStack_c8 + iStack_d8;
                iStackX_20 = iStack_d8;
                iVar1 = arg1_01;
                iVar2 = fcn.0001f1dc(iStack_d8,iVar1 - iStack_d8,auStack_90);
                if (iVar2 < 0) {
                    iVar2 = -1;
                }
                else {
                    iVar2 = fcn.0001f3ac(&var_70h,&iStackX_20,auStack_90);
                    arg1_00 = iStackX_20;
                }
                if (iVar2 < 0) {
                    return 0xffffffff;
                }
                iVar2 = fcn.0001f1dc(arg1_00,iVar1 - arg1_00,&iStack_d8);
                if (iVar2 < 0) {
                    return 0xffffffff;
                }
                if (cStack_cf != '\0') {
                    return 0xffffffff;
                }
                if (iStack_cc == 1) {
                    iVar1 = fcn.0001f1dc(iStack_d8,iVar1 - iStack_d8,&iStack_d8);
                    if (iVar1 < 0) {
                        return 0xffffffff;
                    }
                    if ((cStack_cf != '\0') && (cStack_cf != '\x03')) {
                        return 0xffffffff;
                    }
                }
                if (iStack_cc != 4) {
                    return 0xffffffff;
                }
                if ((((_auStack_28 < 4) || (var_70h != 2)) || (_auStack_74 != 5)) || (stack0xffffffffffffff90 != 0x1d))
                goto code_r0x0001eb46;
                if (_auStack_6c == 0xf) {
                    iVar1 = fcn.0001f1dc(iStack_d8,uStack_c8,&iStack_c0);
                    if (((iVar1 < 0) || (cStack_b7 != '\0')) || ((iStack_b4 != 3 || (uStack_b0 == 0)))) {
                        iVar1 = -1;
                    }
                    else {
                        *(arg1 + 0x400) = *(arg1 + 0x400) | 4;
                        uVar3 = fcn.0001f3e4(iStack_c0,uStack_b0);
                        *(arg1 + 0x40c) = uVar3;
                        iVar1 = 0;
                    }
                }
                else {
                    if (_auStack_6c != 0x13) goto code_r0x0001eb46;
                    iVar1 = fcn.0001e9e4(arg1,iStack_d8,uStack_c8);
                }
                if (-1 < iVar1) goto code_r0x0001eb46;
            }
        } while (-1 < iVar1);
    }
    return 0xffffffff;
}


/* fcn.0001ece8 @ 0x1ece8 */

int fcn.0001ece8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int iVar2;
    int iVar3;
    uint8_t *puVar4;
    uint8_t *puVar5;
    uint64_t arg3_00;
    uint8_t *puStack_58;
    uint8_t *puStack_50;
    int64_t var_40h;
    int64_t var_38h;
    uchar uStack_38;
    uint32_t var_2fh;
    uint32_t var_28h;
    int64_t var_20h;
    
    iVar2 = fcn.0001f1dc(arg1,arg2,&puStack_50);
    if (((-1 < iVar2) && (var_40h._1_1_ == '\0')) && (var_40h._4_4_ == 0x10)) {
        puVar5 = puStack_50 + var_38h;
        *arg4 = puVar5;
        iVar2 = puVar5;
        iVar3 = fcn.0001f1dc(puStack_50,iVar2 - puStack_50,&puStack_50);
        if (-1 < iVar3) {
            if (var_40h._1_1_ == '\x02') {
                iVar3 = fcn.0001f1dc(puStack_50,iVar2 - puStack_50,&puStack_50);
                if (iVar3 < 0) {
                    return -1;
                }
                if (var_40h._1_1_ != '\0') {
                    return -1;
                }
                if (var_40h._4_4_ != 2) {
                    return -1;
                }
                if (var_38h != 1) {
                    return -1;
                }
                uVar1 = *puStack_50;
                *(arg3 + 0x10) = uVar1;
                if (2 < uVar1) {
                    return -1;
                }
                iVar3 = fcn.0001f1dc(puStack_50 + 1,iVar2 - (puStack_50 + 1),&puStack_50);
                if (iVar3 < 0) {
                    return -1;
                }
            }
            else {
                *(arg3 + 0x10) = 0;
            }
            if (((var_40h._1_1_ == '\0') && (var_40h._4_4_ == 2)) && (arg3_00 = var_38h, var_38h - 1 < 0x14)) {
                puVar4 = puStack_50 + arg3_00;
                for (; (var_38h != 0 && (*puStack_50 == 0)); puStack_50 = puStack_50 + 1) {
                    var_38h._0_4_ = arg3_00 - 1;
                    arg3_00 = var_38h;
                }
                puStack_58 = puVar4;
                if ((arg3_00 != 0) && (arg3 + 0x14 != puStack_50)) {
                    section..text(arg3 + 0x14,puStack_50,arg3_00);
                    arg3_00 = var_38h;
                }
                *(arg3 + 0x28) = arg3_00;
                iVar3 = fcn.0001f1dc(puVar4,puVar5 - puVar4,&uStack_38);
                if (iVar3 < 0) {
                    iVar3 = -1;
                }
                else {
                    iVar3 = fcn.0001e2c0(puVar4,puVar5 - puVar4,arg3 + 0x30,&puStack_58);
                    puVar4 = puStack_58;
                }
                if ((((iVar3 == 0) &&
                     (iVar3 = fcn.0001e444(puVar4,puVar5 - puVar4,arg3 + 0x88,&puStack_58), iVar3 == 0)) &&
                    (iVar3 = fcn.0001e8f4(puStack_58,puVar5 - puStack_58,arg3,&puStack_58), iVar3 == 0)) &&
                   ((iVar3 = fcn.0001e444(puStack_58,puVar5 - puStack_58,arg3 + 0x1d8,&puStack_58), iVar3 == 0 &&
                    (iVar3 = fcn.0001e32c(puStack_58,puVar5 - puStack_58,arg3,&puStack_58), iVar3 == 0)))) {
                    if ((puStack_58 == puVar5) || (*(arg3 + 0x10) == 0)) {
                        return 0;
                    }
                    iVar3 = fcn.0001f1dc(puStack_58,iVar2 - puStack_58,&puStack_50);
                    if ((-1 < iVar3) && (var_40h._1_1_ == '\x02')) {
                        if (var_40h._4_4_ == 1) {
                            puVar4 = puStack_50 + var_38h;
                            if (puVar4 == puVar5) {
                                return 0;
                            }
                            iVar3 = fcn.0001f1dc(puVar4,iVar2 - puVar4,&puStack_50);
                            if (iVar3 < 0) {
                                return -1;
                            }
                            if (var_40h._1_1_ != '\x02') {
                                return -1;
                            }
                        }
                        if (var_40h._4_4_ == 2) {
                            puVar4 = puStack_50 + var_38h;
                            if (puVar4 == puVar5) {
                                return 0;
                            }
                            iVar2 = fcn.0001f1dc(puVar4,iVar2 - puVar4,&puStack_50);
                            if (iVar2 < 0) {
                                return -1;
                            }
                            if (var_40h._1_1_ != '\x02') {
                                return -1;
                            }
                        }
                        if (var_40h._4_4_ != 3) {
                            return 0;
                        }
                        if (*(arg3 + 0x10) == 2) {
                            iVar2 = fcn.0001eaec(arg3,puStack_50,var_38h);
                            return (-1 < iVar2) - 1;
                        }
                    }
                }
                return -1;
            }
        }
    }
    return -1;
}


/* fcn.0001f590 @ 0x1f590 */

void fcn.0001f590(int64_t arg1)

{
    int32_t var_bp_10h;
    int64_t var_ch;
    int32_t var_4h;
    
    var_bp_10h = 0xb0107e8;
    var_ch._0_4_ = 0x1a370d;
    var_ch._4_4_ = 0;
    var_4h = 0;
    if (*0x21c58 != 0) {
        (**(*0x21c58 + 0x18))(&var_bp_10h,0);
        var_ch._0_4_ = var_ch & 0xffffff;
    }
    var_4h = 0;
    var_ch._4_4_ = 0;
    if (arg1 != &var_bp_10h) {
        section..text(arg1,&var_bp_10h,0x10);
    }
    *(arg1 + 0x10) = 0x18;
    *(arg1 + 0x14) = 0xef10200;
    *(arg1 + 0x18) = *0x200f0;
    *(arg1 + 0x20) = *0x200f8;
    return;
}


/* fcn.0001efec @ 0x1efec */

int64_t fcn.0001efec(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    int iVar2;
    int64_t arg1_00;
    char *pcVar3;
    char *pcVar4;
    int64_t arg2_00;
    char *apcStackX_18 [2];
    int64_t var_30h_2;
    char *pcStack_48;
    char cStack_3f;
    int iStack_3c;
    int64_t var_30h;
    uchar uStack_30;
    uint32_t var_27h;
    uint32_t var_20h;
    int64_t var_18h;
    
    arg1_00 = fcn.0001a5f8(0x440);
    fcn.00011060(arg1_00,0x440,0);
    if (arg1_00 != 0) {
        *(arg1_00 + 0x418) = arg1;
        pcVar4 = arg1 + arg2;
        iVar2 = fcn.0001f1dc(arg1,arg2,&pcStack_48);
        pcVar1 = pcStack_48;
        if (((-1 < iVar2) && (cStack_3f == '\0')) && (iStack_3c == 0x10)) {
            apcStackX_18[0] = pcStack_48;
            *(arg1_00 + 0x420) = pcStack_48 + (var_30h - arg1);
            pcVar3 = pcStack_48 + var_30h;
            if (pcVar3 <= pcVar4) {
                if (pcVar3 < pcVar4) {
                    pcVar4 = pcVar3;
                }
                *(arg1_00 + 0x428) = pcStack_48 + (*(arg1_00 + 0x418) - arg1);
                iVar2 = fcn.0001ece8(pcStack_48,pcVar4 - pcStack_48,arg1_00,apcStackX_18);
                pcVar3 = apcStackX_18[0];
                if (iVar2 == 0) {
                    arg2_00 = pcVar4 - apcStackX_18[0];
                    *(arg1_00 + 0x430) = apcStackX_18[0] - pcVar1;
                    iVar2 = fcn.0001f1dc(apcStackX_18[0],arg2_00,&uStack_30);
                    if (iVar2 < 0) {
                        iVar2 = -1;
                    }
                    else {
                        iVar2 = fcn.0001e2c0(pcVar3,arg2_00,arg1_00 + 0x398,apcStackX_18);
                        pcVar3 = apcStackX_18[0];
                    }
                    if ((((iVar2 == 0) && (iVar2 = fcn.0001f1dc(pcVar3,pcVar4 - pcVar3,&pcStack_48), -1 < iVar2)) &&
                        ((cStack_3f == '\0' && ((iStack_3c == 3 && (var_30h != 0)))))) && (*pcStack_48 == '\0')) {
                        *(arg1_00 + 0x3f0) = pcStack_48 + 1;
                        *(arg1_00 + 0x3f8) = var_30h - 1;
                        return arg1_00;
                    }
                }
            }
        }
    }
    return 0;
}


