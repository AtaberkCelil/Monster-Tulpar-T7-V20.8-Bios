// decompiled by r2ghidra: 0458_SiFirmwareVersionDxe.pe32
// functions: 22

/* entry0 @ 0x103b4 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong noname_0;
    int64_t arg1_00;
    uchar auStackX_18 [16];
    
    fcn.0001040c(arg1,arg2);
    noname_0 = 0x200;
    arg1_00 = 8;
    iVar1 = (**(*0x11698 + 0x170))(0x200,8,0x109dc,0,0x11320,auStackX_18);
    if (iVar1 < 0) {
        fcn.00010558(noname_0,arg1_00);
    }
    return iVar1;
}


/* fcn.0001040c @ 0x1040c */

void fcn.0001040c(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0;
    int64_t iStackX_8;
    uchar auStackX_10 [8];
    
    *0x11698 = *(arg2 + 0x60);
    *0x116a0 = *(arg2 + 0x58);
    *0x11690 = arg2;
    iStackX_8 = arg1;
    fcn.00010d94();
    noname_0 = 0x115d8;
    iVar3 = fcn.00010e00(0x115d8);
    if (iVar3 == 0) {
        uVar4 = fcn.00010360();
        fcn.00010350();
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
            fcn.00010350();
        }
        else {
            fcn.00010340();
        }
    }
    (**(*0x11698 + 0x140))(0x112a0,0,0x116b8);
    (**(*0x11698 + 0x50))(0x200,8,0x11054,0,&iStackX_8);
    (**(*0x11698 + 0xa8))(0x11260,iStackX_8,auStackX_10);
    (**(*0x11698 + 0x68))(iStackX_8);
    (**(*0x11698 + 0x170))(0x200,8,0x110f4,0,0x112c0,0x116c0);
    return;
}


/* fcn.00010558 @ 0x10558 */

void fcn.00010558(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_10 [3];
    
    aiStackX_10[0] = arg1;
    iVar1 = (**(*0x11698 + 0x98))(*0x116d0,0x11250,aiStackX_10);
    if (-1 < iVar1) {
        (**(*0x11698 + 0x90))(*0x116d0,0x11250,aiStackX_10[0]);
    }
    (**(*0x11698 + 0x68))(*0x116c0);
    (**(*0x11698 + 0x70))(*0x116c0);
    if (aiStackX_10[0] != 0) {
        (**(*0x11698 + 0x48))();
    }
    if (*0x116c8 != 0) {
        (**(*0x11698 + 0x48))();
    }
    return;
}


/* fcn.00010d94 @ 0x10d94 */

int64_t fcn.00010d94(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x116b0 == 0) {
        *0x116b0 = 0;
        if (*(*0x11690 + 0x68) != 0) {
            piVar2 = *(*0x11690 + 0x70);
            do {
                if ((*0x112d0 == *piVar2) && (*0x112d8 == piVar2[1])) {
                    *0x116b0 = (*(*0x11690 + 0x70))[uVar1 * 3 + 2];
                    return *0x116b0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x11690 + 0x68));
        }
    }
    return *0x116b0;
}


/* fcn.00010e00 @ 0x10e00 */

void fcn.00010e00(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00010d94();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00010e2e:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00010e2e;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010360 @ 0x10360 */

uint64_t fcn.00010360(void)

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


/* fcn.00010350 @ 0x10350 */

void fcn.00010350(void)

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


/* fcn.00010340 @ 0x10340 */

void fcn.00010340(void)

{
    return;
}


/* fcn.00010d1c @ 0x10d1c */

int64_t fcn.00010d1c(int64_t arg1,uint32_t arg2,uint32_t arg3)

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


/* fcn.000105f8 @ 0x105f8 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h

void fcn.000105f8(void)

{
    uint16_t uVar1;
    int16_t *piVar2;
    bool bVar3;
    int64_t iVar4;
    char16_t *pcVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    uint32_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    ulong *puStack_38;
    int64_t aiStack_30 [2];
    int64_t var_18h;
    int64_t var_10h;
    
    uVar7 = 0;
    bVar3 = false;
    iVar4 = (**(*0x11698 + 0x138))(2,0x11270,0,&uStackX_8,&iStackX_10);
    if ((-1 < iVar4) && (uVar6 = uVar7, uStackX_8 != 0)) {
        do {
            iVar4 = (**(*0x11698 + 0x98))(*(iStackX_10 + uVar6 * 8),0x11270,&var_28h);
            if ((-1 < iVar4) &&
               ((((piVar2 = *(_var_28h + 0x98), piVar2 != NULL && (uVar1 = piVar2[0xc], *piVar2 == -0x55ab)) &&
                 (*(piVar2 + uVar1 + 0xd) == '\0')) &&
                ((*(piVar2 + uVar1 + 0xe) == '\x04' && (*(piVar2 + uVar1 + 0xf) == '\x01')))))) {
                bVar3 = true;
                *0x11570 = (*(piVar2 + uVar1 + 0x12) & 0xffffffffffffff00 | *(piVar2 + uVar1 + 0x12)) << 0x18;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < uStackX_8);
        if (bVar3) {
            return;
        }
    }
    iVar4 = (**(*0x11698 + 0x138))(2,0x11220,0,&uStackX_8,&iStackX_10);
    if ((-1 < iVar4) && (uVar6 = uVar7, uStackX_8 != 0)) {
        do {
            iVar4 = (**(*0x11698 + 0x98))(*(iStackX_10 + uVar6 * 8),0x11240,&puStack_38);
            if ((-1 < iVar4) && (iVar4 = (**puStack_38)(puStack_38,"en-US",&iStackX_18), -1 < iVar4)) {
                pcVar5 = L"Intel RST";
                uVar8 = uVar7;
                do {
                    pcVar5 = pcVar5 + 1;
                    uVar8 = uVar8 + 1;
                } while (*pcVar5 != L'\0');
                iVar4 = fcn.00010d1c(iStackX_18,0x11610,uVar8);
                if (iVar4 != 0) {
                    pcVar5 = L"Intel(R) RST";
                    uVar8 = uVar7;
                    do {
                        pcVar5 = pcVar5 + 1;
                        uVar8 = uVar8 + 1;
                    } while (*pcVar5 != L'\0');
                    iVar4 = fcn.00010d1c(iStackX_18,0x11630,uVar8);
                    if (iVar4 != 0) goto code_r0x00010805;
                }
                (**(*0x11698 + 0x98))(*(iStackX_10 + uVar6 * 8),0x11220,aiStack_30);
                if (aiStack_30[0] != 0) {
                    *0x11570 = CONCAT11(*(aiStack_30[0] + 6),*(aiStack_30[0] + 4)) << 0x18;
                }
            }
code_r0x00010805:
            uVar6 = uVar6 + 1;
        } while (uVar6 < uStackX_8);
    }
    return;
}


/* fcn.00010f88 @ 0x10f88 */

ulong fcn.00010f88(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    if (*0x116c8 == NULL) {
        iVar3 = 0;
        puVar1 = fcn.00011128(0x2c);
        *0x116c8 = puVar1;
        if (puVar1 != NULL) {
            *puVar1 = 1;
code_r0x00011003:
            iVar2 = iVar3 * 0x1c;
            *(iVar2 + 0x10 + puVar1) = *arg1;
            *(iVar2 + 0x18 + puVar1) = *(arg1 + 8);
            *(iVar2 + 0x20 + puVar1) = arg2;
            *(iVar2 + 0x28 + puVar1) = arg3;
            puVar1[1] = iVar3 + 1;
            (**(*0x11698 + 0x68))(*0x116c0);
            return 0;
        }
    }
    else {
        iVar3 = *(*0x116c8 + 8);
        puVar1 = fcn.00011188(arg1,iVar3 * 0x1c + 0x10,iVar3 * 0x1c + 0x2c,*0x116c8);
        *0x116c8 = puVar1;
        if (puVar1 != NULL) goto code_r0x00011003;
    }
    return 0x8000000000000009;
}


/* fcn.0001081c @ 0x1081c */

void fcn.0001081c(void)

{
    uint32_t uVar1;
    uchar auVar2 [16];
    int64_t iVar3;
    uint64_t uVar4;
    uchar *puVar5;
    uint64_t uVar6;
    ulong auStackX_8 [4];
    uchar auStack_588 [599];
    char cStack_331;
    
    *0x113d0 = *0xc0000008;
    auStackX_8[0] = 0x578;
    (**(*0x116a0 + 0x48))(L"SaSetup",0x11310,0,auStackX_8,auStack_588);
    *0xc0000008 = 0x17;
    if (cStack_331 == '\x01') {
        *0xc0000008 = 0x69;
    }
    iVar3 = fcn.00010e00(0x112e0);
    if ((iVar3 == 0) || (iVar3 == -0x18)) {
        puVar5 = 0x11660;
    }
    else {
        puVar5 = iVar3 + 0x21;
    }
    *0x11360 = 0x800260020;
    *0x11398 = 0x800260020;
    *0x1137c = CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]) << 0x10 | puVar5[3];
    *0x113ec = *0xc0000008;
    iVar3 = fcn.00010e00(0x112b0);
    if (iVar3 != 0) {
        uVar1 = *(iVar3 + 0x1c);
        *0x11424 = (((uVar1 >> 0x18) << 8 | uVar1 >> 0xc & 0xff) << 8 | uVar1 >> 8 & 0xf) << 0x10 | *(iVar3 + 0x1c);
        *0x11440 = *(iVar3 + 0x3c);
        uVar6 = CONCAT62(0,*(iVar3 + 0x24));
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar6;
        iVar3 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar2,8);
        uVar4 = (uVar6 - iVar3 >> 1) + iVar3 >> 6;
        *0x1145c = ((uVar4 & 0xff) << 8 | uVar6 + uVar4 * -100 & 0xff) << 0x18;
    }
    return;
}


/* fcn.00010d58 @ 0x10d58 */

int64_t fcn.00010d58(void)

{
    if (*0x116a8 == 0) {
        (**(*0x11698 + 0x140))(0x11290,0,0x116a8);
    }
    return *0x116a8;
}


/* fcn.00010290 @ 0x10290 */

uint64_t fcn.00010290(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00011154 @ 0x11154 */

void fcn.00011154(ulong param_1)

{
    int64_t arg1;
    
    arg1 = fcn.000110f8(param_1,0x10);
    if ((arg1 != 0) && (arg1 != 0x11280)) {
        fcn.000102e0(arg1,0x11280,0x10);
    }
    return;
}


/* fcn.000110f8 @ 0x110f8 */

ulong fcn.000110f8(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x11698 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000102e0 @ 0x102e0 */

int64_t fcn.000102e0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00011128 @ 0x11128 */

void fcn.00011128(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000110f8(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
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


/* fcn.00011188 @ 0x11188 */

int64_t fcn.00011188(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000110f8(noname_0,arg2);
    if (arg1_00 != 0) {
        if (arg2 != 0) {
            arg1_00 = fcn.000102c0(arg1_00,arg2);
        }
        if ((arg1_00 != 0) && (arg3 != 0)) {
            if (arg1 < arg2) {
                arg2 = arg1;
            }
            if ((arg2 != 0) && (arg1_00 != arg3)) {
                fcn.000102e0(arg1_00,arg3,arg2);
            }
            (**(*0x11698 + 0x48))(arg3);
        }
    }
    return arg1_00;
}


