// decompiled by r2ghidra: 0349_MultiPdtDxe.pe32
// functions: 20

/* entry0 @ 0x10374 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.00010388(arg1,arg2);
    fcn.0001049c(arg1,arg2);
    return;
}


/* fcn.00010388 @ 0x10388 */

void fcn.00010388(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0;
    uchar auStackX_8 [8];
    ulong *puStackX_10;
    ulong uStackX_18;
    
    *0x10c98 = *(arg2 + 0x60);
    *0x10ca8 = *(arg2 + 0x58);
    *0x10c90 = arg2;
    *0x10ca0 = arg1;
    fcn.00010668();
    noname_0 = 0x10c20;
    iVar3 = fcn.000106d4(0x10c20);
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
    fcn.000102e0(1,0,0,auStackX_8);
    iVar3 = (**(*0x10c98 + 0x140))(0x10c00,0,&puStackX_10);
    *0x10cb8 = '\0';
    if (-1 < iVar3) {
        uStackX_18 = 0;
        (**puStackX_10)(puStackX_10,0x10cb8);
        if (*0x10cb8 != '\0') {
            (*puStackX_10[1])(puStackX_10,&uStackX_18);
        }
    }
    return;
}


/* fcn.0001049c @ 0x1049c */

//WARNING: Removing unreachable block (ram,0x00010600)

int64_t fcn.0001049c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong noname_1;
    int64_t arg2_00;
    ulong *arg3;
    uint64_t uStackX_10;
    uchar auStackX_18 [8];
    ulong uStackX_20;
    int8_t var_a1bh;
    int64_t var_c20h;
    int64_t var_c28h;
    int64_t iStack_cd8;
    uint32_t uStack_cd0;
    uchar auStack_cc8 [2779];
    uint8_t uStack_1ed;
    
    uStackX_10 = arg2;
    iVar1 = fcn.00010668();
    if (*(iVar1 + 0xc) != 0x12) {
        uStackX_20 = 0xca9;
        iVar1 = (**(*0x10ca8 + 0x48))(L"Setup",0x10bb0,0,&uStackX_20,auStack_cc8);
        if (iVar1 < 0) {
            return iVar1;
        }
        if (uStack_1ed == 0) {
            return iVar1;
        }
        arg3 = &uStackX_20;
        noname_1 = 0x10bc0;
        arg2_00 = 0;
        uStackX_20 = 1;
        iVar1 = (**(*0x10ca8 + 0x48))(L"PdtExist");
        if ((iVar1 != -0x7ffffffffffffff2) && (iVar1 < 0)) {
            return iVar1;
        }
        if (iVar1 != 0) {
            iVar1 = fcn.00010720(-0x7ffffffffffffff2);
            iVar1 = fcn.00010760(iVar1,noname_1,arg2_00,arg3);
            if (iVar1 < 0) {
                return iVar1;
            }
            uStackX_10 = uStackX_10 & 0xffffffffffff0000;
            if (iStack_cd8 == 0) {
                return -0x7fffffffffffffeb;
            }
            iVar1 = fcn.000107e0(uStack_1ed,iStack_cd8,uStack_cd0,&uStackX_10);
            if (-1 < iVar1) {
                iVar1 = -0x7ffffffffffffffe;
            }
            if (iVar1 < 0) {
                return iVar1;
            }
            auStackX_18[0] = 1;
            (**(*0x10ca8 + 0x58))(L"PdtExist",0x10bc0,3,1,auStackX_18,iStack_cd8);
            return iVar1;
        }
    }
    return 0;
}


/* fcn.00010668 @ 0x10668 */

int64_t fcn.00010668(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10cb0 == 0) {
        *0x10cb0 = 0;
        if (*(*0x10c90 + 0x68) != 0) {
            piVar2 = *(*0x10c90 + 0x70);
            do {
                if ((*0x10be0 == *piVar2) && (*0x10be8 == piVar2[1])) {
                    *0x10cb0 = (*(*0x10c90 + 0x70))[uVar1 * 3 + 2];
                    return *0x10cb0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10c90 + 0x68));
        }
    }
    return *0x10cb0;
}


/* fcn.000106d4 @ 0x106d4 */

void fcn.000106d4(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00010668();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00010702:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00010702;
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


/* fcn.00010720 @ 0x10720 */

ulong fcn.00010720(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t aiStackX_8 [4];
    
    aiStackX_8[0] = arg1;
    iVar1 = (**(*0x10c98 + 0x98))(*0x10ca0,0x10b80,aiStackX_8);
    if (iVar1 < 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(aiStackX_8[0] + 0x18);
    }
    return uVar2;
}


/* fcn.00010760 @ 0x10760 */

ulong fcn.00010760(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    uchar auStackX_18 [8];
    int64_t iStackX_20;
    ulong *in_stack_00000028;
    ulong *in_stack_00000030;
    
    auStackX_18[0] = arg2;
    if (arg1 != 0) {
        iStackX_20 = arg3;
        iVar1 = (**(*0x10c98 + 0x98))(arg1,0x10ba0,&iStackX_20);
        if (-1 < iVar1) {
            *in_stack_00000028 = 0;
            *in_stack_00000030 = 0;
            uVar2 = (**(iStackX_20 + 0x18))
                              (iStackX_20,0x10bf0,0x19,0,in_stack_00000028,in_stack_00000030,auStackX_18);
            return uVar2;
        }
    }
    return 0x800000000000000e;
}


/* fcn.000107e0 @ 0x107e0 */

//WARNING: Removing unreachable block (ram,0x000108be)

ulong fcn.000107e0(int64_t arg1,uint32_t arg2,uint32_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint in_register_00000014;
    int64_t iVar5;
    uint32_t *puVar6;
    uint32_t uVar7;
    ulong uVar8;
    uint32_t uVar9;
    int64_t *in_stack_00000028;
    int64_t in_stack_00000030;
    
    iVar5 = CONCAT44(in_register_00000014,arg2);
    if ((*(in_stack_00000030 + 4) == 0x5444504d) && (uVar2 = *(in_stack_00000030 + 8), uVar2 == arg3)) {
        uVar7 = 0xc;
        puVar6 = iVar5 + 0xc;
        if ((*puVar6 == 1) && (*(iVar5 + 0x10) == -1)) {
            uVar8 = 0;
            *in_stack_00000028 = iVar5 + 0x18;
            *arg4 = *(iVar5 + 0x1a);
        }
        else {
            uVar8 = 0x800000000000000e;
            if (0xc < uVar2) {
                do {
                    uVar3 = *puVar6;
                    uVar9 = 0;
                    uVar4 = puVar6[uVar3 + 1];
                    puVar1 = puVar6 + uVar3 + 2;
                    *arg4 = *(puVar1 + 2);
                    *in_stack_00000028 = puVar1;
                    if (uVar3 != 0) {
                        do {
                            puVar6 = puVar6 + 1;
                            if (arg1 == *puVar6) {
                                uVar8 = 0;
                                break;
                            }
                            uVar9 = uVar9 + 1;
                        } while (uVar9 < uVar3);
                    }
                    if (uVar9 != uVar3) break;
                    puVar6 = puVar1 + uVar4;
                    uVar7 = uVar7 + uVar3 * 4 + 8 + uVar4;
                } while (uVar7 < uVar2);
            }
        }
        if ((*arg4 & 1) != 0) {
            *arg4 = *arg4 + 1;
        }
    }
    else {
        uVar8 = 0x8000000000000015;
    }
    return uVar8;
}


/* fcn.00010958 @ 0x10958 */

int64_t fcn.00010958(int64_t arg1,int64_t arg2)

{
    int *arg1_00;
    char cVar1;
    int64_t iVar2;
    ushort *puVar3;
    uint64_t uVar5;
    uint64_t uVar4;
    uint16_t uVar6;
    uint32_t uVar7;
    int aiStackX_10 [2];
    uint auStackX_18 [2];
    ulong *puStackX_20;
    
    uVar6 = arg2;
    if (uVar6 == 0) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        iVar2 = (**(*0x10c98 + 0x140))(0x10b90,0,&puStackX_20);
        if (-1 < iVar2) {
            uVar7 = uVar6 + 0x16;
            auStackX_18[0] = 8;
            if ((uVar7 & 3) != 0) {
                uVar7 = uVar7 + (4 - (uVar7 & 3));
            }
            iVar2 = (*puStackX_20[8])(aiStackX_10);
            if (((-1 < iVar2) && (aiStackX_10[0] == 0)) && (cVar1 = fcn.00010b24(), cVar1 == '\0')) {
                puVar3 = fcn.0001092c(uVar7);
                if (puVar3 == NULL) {
                    return -0x7fffffffffffffeb;
                }
                *(puVar3 + 8) = 0x20001;
                *puVar3 = 1;
                puVar3[10] = uVar6;
                puVar3[1] = uVar7 + -4;
                uVar5 = 0;
                do {
                    uVar4 = uVar5 + 1;
                    iVar2 = uVar5 + 1;
                    uVar5 = uVar4;
                } while ("bios2ish"[iVar2] != '\0');
                if (0xc < uVar4) {
                    return -0x7ffffffffffffffc;
                }
                arg1_00 = puVar3 + 2;
                fcn.000102a0(arg1_00,0xc);
                uVar5 = 0;
                do {
                    uVar4 = uVar5 + 1;
                    iVar2 = uVar5 + 1;
                    uVar5 = uVar4;
                } while ("bios2ish"[iVar2] != '\0');
                if ((uVar4 != 0) && (arg1_00 != "bios2ish")) {
                    section..text(arg1_00,0x10c58,uVar4);
                }
                if (((arg2 & 0xffffU) != 0) && (puVar3 + 0xb != arg1)) {
                    section..text(puVar3 + 0xb,arg1,arg2 & 0xffffU);
                }
                iVar2 = (**puStackX_20)(0,puVar3,uVar7,auStackX_18,0,3);
                if ((-1 < iVar2) && (*arg1_00 != 0)) {
                    iVar2 = -0x7ffffffffffffff9;
                }
                (**(*0x10c98 + 0x48))(puVar3);
                return iVar2;
            }
            iVar2 = -0x7ffffffffffffffd;
        }
    }
    return iVar2;
}


/* fcn.000108fc @ 0x108fc */

ulong fcn.000108fc(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x10c98 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
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


/* fcn.00010b24 @ 0x10b24 */

bool fcn.00010b24(void)

{
    int64_t iVar1;
    bool bVar2;
    uchar auStackX_8 [32];
    
    iVar1 = fcn.000106d4(0x10bd0);
    if (iVar1 == 0) {
        iVar1 = (**(*0x10c98 + 0x140))(0x10c10,0,auStackX_8);
        bVar2 = -1 < iVar1;
    }
    else {
        bVar2 = true;
    }
    return bVar2;
}


/* fcn.0001092c @ 0x1092c */

void fcn.0001092c(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000108fc(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102a0(arg1_00,arg1);
    }
    return;
}


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 2336 named .text
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


