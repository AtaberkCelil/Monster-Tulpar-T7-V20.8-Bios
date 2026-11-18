// decompiled by r2ghidra: 0468_PlatformWrapperDxe.pe32
// functions: 15

/* entry0 @ 0x10380 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.00010394(arg1,arg2);
    fcn.000104a8(arg1,arg2);
    return;
}


/* fcn.00010394 @ 0x10394 */

void fcn.00010394(int64_t arg1,int64_t arg2)

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
    
    *0x10b40 = *(arg2 + 0x60);
    *0x10b48 = *(arg2 + 0x58);
    *0x10b38 = arg2;
    iStackX_8 = arg1;
    fcn.000108dc();
    noname_0 = 0x10aa0;
    iVar3 = fcn.00010948(0x10aa0);
    if (iVar3 == 0) {
        uVar4 = fcn.00010310();
        fcn.000102c0();
        uVar1 = in(0x1808);
        fcn.00010270(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x00010260();
        }
        fcn.00010270(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.000102c0();
        }
        else {
            fcn.000102b0();
        }
    }
    fcn.00010280(1,0,0,&iStackX_8);
    iVar3 = (**(*0x10b40 + 0x140))(0x10a80,0,&puStackX_10);
    *0x10b58 = '\0';
    if (-1 < iVar3) {
        uStackX_18 = 0;
        (**puStackX_10)(puStackX_10,0x10b58);
        if (*0x10b58 != '\0') {
            (*puStackX_10[1])(puStackX_10,&uStackX_18);
        }
    }
    return;
}


/* fcn.000104a8 @ 0x104a8 */

ulong fcn.000104a8(int64_t arg1,int64_t arg2)

{
    int64_t iStackX_8;
    int64_t iStackX_10;
    uchar auStackX_18 [8];
    uchar auStackX_20 [8];
    
    iStackX_8 = arg1;
    iStackX_10 = arg2;
    (**(*0x10b40 + 0x170))(0x200,8,0x10708,0,0x10a70,auStackX_18);
    (**(*0x10b40 + 0x50))(0x200,0x10,0x10808,0,&iStackX_10);
    (**(*0x10b40 + 0xa8))(0x10a30,iStackX_10,0x10b30);
    (**(*0x10b40 + 0x68))(iStackX_10);
    (**(*0x10b40 + 0x50))(0x200,8,0x10674,0,&iStackX_8);
    (**(*0x10b40 + 0xa8))(0x10a00,iStackX_8,auStackX_20);
    return 0;
}


/* fcn.000108dc @ 0x108dc */

int64_t fcn.000108dc(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10b50 == 0) {
        *0x10b50 = 0;
        if (*(*0x10b38 + 0x68) != 0) {
            piVar2 = *(*0x10b38 + 0x70);
            do {
                if ((*0x10a50 == *piVar2) && (*0x10a58 == piVar2[1])) {
                    *0x10b50 = (*(*0x10b38 + 0x70))[uVar1 * 3 + 2];
                    return *0x10b50;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10b38 + 0x68));
        }
    }
    return *0x10b50;
}


/* fcn.00010948 @ 0x10948 */

void fcn.00010948(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000108dc();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00010976:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00010976;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010310 @ 0x10310 */

uint64_t fcn.00010310(void)

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


/* fcn.000102c0 @ 0x102c0 */

void fcn.000102c0(void)

{
    return;
}


/* fcn.00010270 @ 0x10270 */

uint64_t fcn.00010270(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010262 @ 0x10262 */

void fcn.00010262(void)

{
    return;
}


/* fcn.000102b0 @ 0x102b0 */

void fcn.000102b0(void)

{
    return;
}


/* fcn.00010280 @ 0x10280 */

uint64_t fcn.00010280(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00010994 @ 0x10994 */

bool fcn.00010994(void)

{
    int64_t iVar1;
    bool bVar2;
    uchar auStackX_8 [32];
    
    iVar1 = fcn.00010948(0x10a40);
    if (iVar1 == 0) {
        iVar1 = (**(*0x10b40 + 0x140))(0x10a90,0,auStackX_8);
        bVar2 = -1 < iVar1;
    }
    else {
        bVar2 = true;
    }
    return bVar2;
}


/* fcn.00010360 @ 0x10360 */

int64_t fcn.00010360(int64_t arg1,int64_t arg2)

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


/* fcn.00010320 @ 0x10320 */

int64_t fcn.00010320(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.0001058c @ 0x1058c */

//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_10h

void fcn.0001058c(void)

{
    char *pcVar1;
    char cVar2;
    int64_t iVar3;
    uint64_t uVar5;
    uint64_t uVar4;
    int aiStackX_8 [2];
    uint auStackX_10 [2];
    uint32_t var_bp_20h;
    int32_t var_28h;
    int64_t var_30h;
    uint uStack_38;
    uchar auStack_34 [12];
    uint uStack_28;
    int64_t var_1ch;
    int32_t var_10h;
    int16_t var_ch;
    
    iVar3 = (**(*0x10b40 + 0x140))(0x10a10,0,&var_bp_20h);
    if (-1 < iVar3) {
        iVar3 = (*_var_bp_20h[8])(aiStackX_8);
        if ((-1 < iVar3) && (aiStackX_8[0] == 0)) {
            cVar2 = fcn.00010994();
            if (cVar2 == '\0') {
                auStackX_10[0] = 8;
                uStack_38 = 0x120001;
                uStack_28 = 0x10001;
                var_1ch._0_2_ = 0;
                uVar5 = 0;
                do {
                    uVar4 = uVar5 + 1;
                    pcVar1 = uVar5 + 0x10af1;
                    uVar5 = uVar4;
                } while (*pcVar1 != '\0');
                if (uVar4 < 0xd) {
                    fcn.00010360(auStack_34,0xc);
                    uVar5 = 0;
                    do {
                        uVar4 = uVar5 + 1;
                        pcVar1 = uVar5 + 0x10af1;
                        uVar5 = uVar4;
                    } while (*pcVar1 != '\0');
                    if (uVar4 != 0) {
                        fcn.00010320(auStack_34,0x10af0,uVar4);
                    }
                    (**_var_bp_20h)(0,&uStack_38,0x16,auStackX_10,0,3);
                }
            }
        }
    }
    return;
}


