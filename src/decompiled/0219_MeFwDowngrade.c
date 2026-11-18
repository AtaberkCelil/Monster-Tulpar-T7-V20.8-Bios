// decompiled by r2ghidra: 0219_MeFwDowngrade.pe32
// functions: 30

/* entry0 @ 0x10414 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.00010430(arg1,arg2);
    fcn.00010674(arg1,arg2);
    return;
}


/* fcn.00010430 @ 0x10430 */

void fcn.00010430(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    int64_t iStackX_8;
    ulong *puStackX_10;
    ulong uStackX_18;
    
    *0x119a8 = *(arg2 + 0x60);
    *0x119b0 = *(arg2 + 0x58);
    *0x119a0 = arg2;
    iStackX_8 = arg1;
    fcn.000108f0();
    iVar3 = fcn.0001095c();
    if (iVar3 == 0) {
        uVar4 = fcn.00010390();
        fcn.00010340();
        uVar1 = in(0x1808);
        fcn.000102f0(arg1,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            fcn.00010280();
        }
        fcn.000102f0(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010340();
        }
        else {
            fcn.00010330();
        }
    }
    fcn.00010300(1,0,0,&iStackX_8);
    iVar3 = (**(*0x119a8 + 0x140))(0x11860,0,&puStackX_10);
    *0x119c0 = '\0';
    if (-1 < iVar3) {
        uStackX_18 = 0;
        (**puStackX_10)(puStackX_10,0x119c0);
        if (*0x119c0 != '\0') {
            (*puStackX_10[1])(puStackX_10,&uStackX_18);
        }
    }
    return;
}


/* fcn.00010674 @ 0x10674 */

//WARNING: Variable defined which should be unmapped: var_1ch

ulong fcn.00010674(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    uint32_t arg1_00;
    int64_t iStackX_8;
    uint64_t uStackX_10;
    int aiStackX_18 [2];
    int64_t iStackX_20;
    uint32_t var_40h;
    int64_t var_48h;
    uchar auStack_60 [8];
    uchar auStack_58 [16];
    int64_t var_40h_2;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_1ch;
    
    uVar1 = *0xc00b0040;
    if (*0xc00b0040 == 0xffffffff) {
        uVar2 = 0x8000000000000003;
    }
    else {
        iStackX_8 = arg1;
        uStackX_10 = arg2;
        (**(*0x119a8 + 0x140))(0x11800,0,&iStackX_20);
        (**(iStackX_20 + 0x40))(aiStackX_18);
        arg1_00 = &uStackX_10;
        uVar2 = (**(iStackX_20 + 0x38))();
        if (aiStackX_18[0] == 0) {
            iVar3 = fcn.00010d70();
            if ((iVar3 < 0) || ((*(*0x119c8 + 0x1c) & 1) == 0)) {
                *0x119d1 = 0;
                if (((uVar1 & 0x10) == 0) && ((uStackX_10 & 0xfffffe7d) == 0)) {
                    iVar3 = fcn.00010cc0(arg1_00);
                    if (iVar3 < 0) {
                        *0x119d1 = 1;
                    }
                }
            }
            else {
                *0x119d0 = '\x05';
                iVar3 = fcn.00010c10(arg1_00);
                if ((iVar3 == 0) && (*0x119d0 == '\0')) {
                    fcn.000102d0(auStack_58,0x24);
                    fcn.00010290(&var_40h_2 + 4,0x11850,0x10);
                    fcn.00010864(auStack_58);
                    (**(*0x119b0 + 0x68))(3,0,0x24,auStack_58);
                    do {
                        fcn.00010280();
                    } while( true );
                }
                out(0x80,0xa8);
            }
            uVar2 = (**(*0x119a8 + 0x170))(0x200,0x10,0x1053c,&iStackX_8,0x11810,auStack_60);
        }
        if (((uVar1 & 0xf0000) == 0x50000) && ((uStackX_10 & 0xfffffe7f) == 0)) {
            uVar2 = (**(*0x119a8 + 0x170))(0x200,0x10,0x105ac,&iStackX_8,0x11810,auStack_60);
        }
    }
    return uVar2;
}


/* fcn.000108f0 @ 0x108f0 */

int64_t fcn.000108f0(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x119b8 == 0) {
        *0x119b8 = 0;
        if (*(*0x119a0 + 0x68) != 0) {
            piVar2 = *(*0x119a0 + 0x70);
            do {
                if ((*0x11830 == *piVar2) && (*0x11838 == piVar2[1])) {
                    *0x119b8 = (*(*0x119a0 + 0x70))[uVar1 * 3 + 2];
                    return *0x119b8;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x119a0 + 0x68));
        }
    }
    return *0x119b8;
}


/* fcn.0001095c @ 0x1095c */

void fcn.0001095c(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000108f0();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00010993:
            if ((piVar1 == NULL) || ((*0x11870 == *(piVar1 + 4) && (*0x11878 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00010993;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
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


/* fcn.00010282 @ 0x10282 */

void fcn.00010282(void)

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


/* fcn.00010d70 @ 0x10d70 */

uint64_t fcn.00010d70(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint16_t uVar4;
    int64_t iStackX_8;
    
    uVar2 = 0;
    if (*0x119c8 == 0) {
        iStackX_8 = 0;
        iVar1 = (**(*0x119a8 + 0x140))(0x11840,0,&iStackX_8);
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
                    if ((*(iVar1 + 8) == *0x11820) && (*(iVar1 + 0x10) == *0x11828)) {
                        *0x119c8 = iVar1;
                        goto code_r0x00010e2e;
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
code_r0x00010e2e:
    return uVar2;
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


/* fcn.000109ac @ 0x109ac */

void fcn.000109ac(uint32_t arg1)

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
        fcn.00010ae8(0);
        in_DL = 1;
        fcn.00010e3c(auStack_18,CONCAT71(in_RDX,1));
        _auStack_48 = *extraout_RAX_01;
        unique0x10000249 = extraout_RAX_01[1];
        if (_auStack_48 == 0) {
            return;
        }
        arg1_00 = auStack_48;
    }
    else if (arg1 == 1) {
        fcn.00010ae8(1);
        in_DL = 2;
        fcn.00010e3c(auStack_28,CONCAT71(in_RDX,2));
        iStack_58 = *extraout_RAX_00;
        iStack_50 = extraout_RAX_00[1];
        if (iStack_58 == 0) {
            return;
        }
        arg1_00 = &iStack_58;
    }
    else if (arg1 == 2) {
        *0xc00b2054 = 3;
        fcn.000117b4();
        arg1_00 = &uStack_78;
        uStack_70 = CONCAT62(Stack_8e,0x600);
        uStack_78 = 0x11930;
    }
    else if (arg1 == 3) {
        *0xc00b3054 = 3;
        fcn.000117b4();
        arg1_00 = &uStack_88;
        uStack_80 = CONCAT62(Stack_8e,0x680);
        uStack_88 = 0x11930;
    }
    else {
        if (arg1 != 4) {
            return;
        }
        fcn.00010ae8(4);
        in_DL = 3;
        fcn.00010e3c(&var_31h + 1,CONCAT71(in_RDX,3));
        iStack_68 = *extraout_RAX;
        iStack_60 = extraout_RAX[1];
        if (iStack_68 == 0) {
            return;
        }
        arg1_00 = &iStack_68;
    }
    fcn.00010eb4(arg1_00,CONCAT71(in_RDX,in_DL),in_R8);
    return;
}


/* fcn.00010c10 @ 0x10c10 */

int64_t fcn.00010c10(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    ulong uStackX_8;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_10h;
    int8_t var_4h;
    
    uStackX_8 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = (**(*0x119a8 + 0x140))(0x11800,0,&var_20h);
    if (-1 < iVar1) {
        iVar1 = (**(var_20h + 0x40))(&uStackX_8);
        if ((iVar1 < 0) || (uStackX_8 != 0)) {
            iVar1 = -0x7ffffffffffffffd;
        }
        else {
            fcn.000102d0(&var_10h,0x10);
            var_10h._0_4_ = 0x105;
            var_18h._0_4_ = 0x10;
            iVar1 = (**var_20h)(0,&var_10h,0xc,&var_18h,0,7);
            if ((-1 < iVar1) && ((var_10h & 0xff000000) == 0)) {
                *0x119d0 = var_4h;
            }
        }
    }
    return iVar1;
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


/* fcn.00010864 @ 0x10864 */

ulong fcn.00010864(int64_t arg1)

{
    char16_t cVar1;
    uint64_t uVar2;
    int64_t iVar3;
    char16_t cVar4;
    
    cVar4 = L'\0';
    if (arg1 == 0) {
        return 0x8000000000000002;
    }
    uVar2 = fcn.00010838();
    if (9 < uVar2) {
        return 0x8000000000000005;
    }
    if (L"PCH_RESET" <= arg1) {
        if (arg1 < L"PCH_RESET" + uVar2 + 1) {
            return 0x800000000000000f;
        }
        if (L"PCH_RESET" + 1 <= arg1) goto code_r0x000108c8;
    }
    if (L"PCH_RESET" + 1 <= arg1 + 0x14) {
        return 0x800000000000000f;
    }
code_r0x000108c8:
    cVar1 = L'P';
    iVar3 = L"PCH_RESET" - arg1;
    do {
        *arg1 = cVar1;
        arg1 = arg1 + 2;
        cVar1 = *(iVar3 + arg1);
    } while (cVar1 != L'\0');
    *arg1 = cVar4;
    return 0;
}


/* fcn.00010280 @ 0x10280 */

void fcn.00010280(void)

{
    return;
}


/* fcn.00010cc0 @ 0x10cc0 */

int64_t fcn.00010cc0(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    ulong uStackX_8;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_20h_2;
    int8_t var_ch;
    
    uStackX_8 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = (**(*0x119a8 + 0x140))(0x11800,0,&var_20h);
    if (-1 < iVar1) {
        iVar1 = (**(var_20h + 0x40))(&uStackX_8);
        if ((iVar1 < 0) || (uStackX_8 != 0)) {
            iVar1 = -0x7ffffffffffffffd;
        }
        else {
            fcn.000102d0(&var_20h_2,0x18);
            var_20h_2._0_4_ = 0x205;
            var_18h._0_4_ = 0x18;
            iVar1 = (**var_20h)(0,&var_20h_2,4,&var_18h,0,7);
            if ((-1 < iVar1) && ((var_20h_2 & 0xff000000) == 0)) {
                *0x119d1 = var_ch;
            }
        }
    }
    return iVar1;
}


/* fcn.00010838 @ 0x10838 */

uint64_t fcn.00010838(void)

{
    int16_t *piVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    uVar2 = 0;
    uVar3 = uVar2;
    do {
        if (0x11 < uVar3) {
            return 10;
        }
        uVar2 = uVar2 + 1;
        piVar1 = uVar3 + 0x11952;
        uVar3 = uVar3 + 2;
    } while (*piVar1 != 0);
    return uVar2;
}


/* fcn.00010ae8 @ 0x10ae8 */

void fcn.00010ae8(int64_t arg1)

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


/* fcn.00010e3c @ 0x10e3c */

ulong * fcn.00010e3c(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    ulong uStack_18;
    ushort uStack_10;
    unkbyte6 Stack_e;
    
    uVar2 = arg2;
    if (uVar2 - 1 < 4) {
        uStack_18 = 0x11930;
        cVar1 = fcn.000117b4();
        if (cVar1 == '\0') {
            uStack_10 = *((uVar2 - 1) * 2 + 0x11968);
        }
        else {
            uStack_10 = *((uVar2 - 1) * 2 + 0x11968);
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


/* fcn.000117b4 @ 0x117b4 */

ulong fcn.000117b4(void)

{
    char cVar1;
    
    cVar1 = fcn.00011778();
    if ((((cVar1 != '\x02') && (cVar1 = fcn.00011778(), cVar1 != '\x05')) && (cVar1 = fcn.00011778(), cVar1 != '\x06')
        ) && (cVar1 = fcn.00011778(), cVar1 != '\x03')) {
        return 0;
    }
    return 1;
}


/* fcn.00010eb4 @ 0x10eb4 */

void fcn.00010eb4(uint32_t arg1,ulong noname_1,int64_t arg2)

{
    uint in_register_0000000c;
    ulong *puVar1;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    if (*(puVar1 + 1) != 0) {
        (**(**puVar1 + 0x70))(**puVar1,*(puVar1 + 1) + 0x1c,0xffffffff,0x100);
    }
    return;
}


/* fcn.00011500 @ 0x11500 */

uint fcn.00011500(uint32_t arg1,int64_t arg2)

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
        iVar1 = fcn.00010ee4(**(iVar1 + 0x88),CONCAT71(arg2 >> 8,*(iVar1 + 0x7c)),arg2 & 0xffffffff,arg4);
        if (iVar1 < 0) {
            uStackX_18 = 0xffffffff;
        }
    }
    else {
        uStackX_18 = 0xffffffff;
    }
    return uStackX_18;
}


/* fcn.0001172c @ 0x1172c */

uint32_t fcn.0001172c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    
    uVar1 = fcn.00011500(arg1,arg2);
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
        iVar3 = fcn.00010ee4(**(arg1 + 0x88),CONCAT31(arg2 >> 8,*(arg1 + 0x7c)),arg2 & 0xffffffff,iVar3);
        if (iVar3 < 0) {
            uVar1 = 0xffffffff;
        }
    }
    else {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}


/* fcn.0001116c @ 0x1116c */

uint32_t fcn.0001116c(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar2 = arg2;
    if (*(arg1 + 0x78) == 0) {
        uVar1 = *(*(arg1 + 0x7c) << 0x10 | (uVar2 & 0xf0000) << 8 | *(*(arg1 + 0x88) + 8) | arg2 & 0xffffU);
    }
    else if (*(arg1 + 0x78) == 1) {
        uVar1 = fcn.00011500(arg1,uVar2 - (uVar2 & 3));
        uVar1 = uVar1 >> ((uVar2 & 3) << 3);
    }
    else {
        uVar1 = 0xff;
    }
    return uVar1;
}


/* fcn.0001132c @ 0x1132c */

uint32_t fcn.0001132c(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar2 = arg2;
    if (*(arg1 + 0x78) == 0) {
        uVar1 = *(*(arg1 + 0x7c) << 0x10 | (uVar2 & 0xf0000) << 8 | *(*(arg1 + 0x88) + 8) | arg2 & 0xffffU);
    }
    else if (*(arg1 + 0x78) == 1) {
        uVar1 = fcn.00011500(arg1,uVar2 - (uVar2 & 3));
        uVar1 = uVar1 >> ((uVar2 & 3) << 3);
    }
    else {
        uVar1 = 0xffff;
    }
    return uVar1;
}


/* fcn.00010ee4 @ 0x10ee4 */

ulong fcn.00010ee4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00011778 @ 0x11778 */

void fcn.00011778(void)

{
    if (*0x11940 == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x11940 = '\x05';
        }
        else {
            *0x11940 = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


