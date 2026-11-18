// decompiled by r2ghidra: 0314_NvmeRecoveryDxe.pe32
// functions: 643

/* entry0 @ 0x10670 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = arg2;
    fcn.000106b8(arg1,arg2);
    iVar1 = fcn.000108e4(arg1,iVar1);
    if ((iVar1 < 0) && (*0x6fc00 != 0)) {
        (**(*(arg2 + 0x60) + 0x48))();
        *0x6fc00 = 0;
    }
    return iVar1;
}


/* fcn.000106b8 @ 0x106b8 */

void fcn.000106b8(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0;
    ulong *puStackX_8;
    ulong uStackX_10;
    
    *0x6fbd8 = *(arg2 + 0x60);
    *0x6fbe8 = *(arg2 + 0x58);
    *0x6fbd0 = arg2;
    *0x6fbe0 = arg1;
    fcn.00014f04();
    noname_0 = 0x4f7f0;
    iVar3 = fcn.00014f70(0x4f7f0);
    if (iVar3 == 0) {
        uVar4 = fcn.000104c0();
        fcn.00010470();
        uVar1 = in(0x1808);
        fcn.000103f0(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x000103e0();
        }
        fcn.000103f0(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010470();
        }
        else {
            fcn.00010460();
        }
    }
    if (*0x6fc00 == 0) {
        *0x717b8 = 0x2000;
        iVar3 = (**(*(arg2 + 0x60) + 0x40))(4);
        if (iVar3 < 0) {
            *0x6fc00 = 0;
        }
    }
    fcn.00010400(1,0,0,&puStackX_8);
    iVar3 = (**(*0x6fbd8 + 0x140))(0x4f770,0,&puStackX_8);
    *0x6fc08 = '\0';
    if (-1 < iVar3) {
        uStackX_10 = 0;
        (**puStackX_8)(puStackX_8,0x6fc08);
        if (*0x6fc08 != '\0') {
            (*puStackX_8[1])(puStackX_8,&uStackX_10);
        }
    }
    (**(*0x6fbd8 + 0x140))(0x4f710,0,0x6fc20);
    (**(*0x6fbd8 + 0x140))(0x4f700,0,0x6fc38);
    (**(*0x6fbd8 + 0x140))(0x4f6c0,0,0x6fc18);
    (**(*0x6fbd8 + 0x140))(0x4f780,0,0x6fc28);
    (**(*0x6fbd8 + 0x140))(0x4f6e0,0,0x6fc30);
    fcn.00010320(0x6fc40,8);
    puStackX_8 = 0x8;
    (**(*0x6fbe8 + 0x48))(L"SysFwUpdateProgress",0x4f6a0,0,&puStackX_8,0x6fc40);
    return;
}


/* fcn.000108e4 @ 0x108e4 */

void fcn.000108e4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *puStackX_8;
    int64_t aiStackX_10 [3];
    
    aiStackX_10[1] = 0;
    *0x717e0 = 0x11d78;
    *0x717e8 = 0x11d00;
    *0x717f0 = 0x11f18;
    puStackX_8 = arg1;
    aiStackX_10[0] = arg2;
    iVar1 = (**(*0x6fbd8 + 0x148))(0x6fbc8,0x4f720,0x717e0,0x4f680,0x4f7c0,0);
    if (-1 < iVar1) {
        iVar1 = (**(*0x6fbd8 + 0x140))(0x4f700,0,&puStackX_8);
        if (-1 < iVar1) {
            iVar1 = (**(*0x6fbd8 + 0x98))(*0x6fbe0,0x4f650,aiStackX_10);
            if (-1 < iVar1) {
                (**puStackX_8)(puStackX_8,aiStackX_10[0],*0x6fbc8,0x717c0);
            }
        }
    }
    (**(*0x6fbd8 + 0x170))(0x200,8,0x11884,0,0x4f6b0,aiStackX_10 + 1);
    return;
}


/* fcn.0004d280 @ 0x4d280 */

void fcn.0004d280(void)

{
    return;
}


/* fcn.00014f04 @ 0x14f04 */

int64_t fcn.00014f04(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x6fbf8 == 0) {
        *0x6fbf8 = 0;
        if (*(*0x6fbd0 + 0x68) != 0) {
            piVar2 = *(*0x6fbd0 + 0x70);
            do {
                if ((*0x4f730 == *piVar2) && (*0x4f738 == piVar2[1])) {
                    *0x6fbf8 = (*(*0x6fbd0 + 0x70))[uVar1 * 3 + 2];
                    return *0x6fbf8;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x6fbd0 + 0x68));
        }
    }
    return *0x6fbf8;
}


/* fcn.00014f70 @ 0x14f70 */

void fcn.00014f70(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00014f04();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00014f9e:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00014f9e;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.000104c0 @ 0x104c0 */

uint64_t fcn.000104c0(void)

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


/* fcn.00010470 @ 0x10470 */

void fcn.00010470(void)

{
    return;
}


/* fcn.000103f0 @ 0x103f0 */

uint64_t fcn.000103f0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000103e2 @ 0x103e2 */

void fcn.000103e2(void)

{
    return;
}


/* fcn.00010460 @ 0x10460 */

void fcn.00010460(void)

{
    return;
}


/* fcn.00010400 @ 0x10400 */

uint64_t fcn.00010400(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00010320 @ 0x10320 */

int64_t fcn.00010320(int64_t arg1,int64_t arg2)

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


/* fcn.00014b24 @ 0x14b24 */

void fcn.00014b24(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ushort *arg1_00;
    int64_t iVar4;
    ulong uVar5;
    int64_t *piVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iStackX_18;
    int64_t iStackX_20;
    uint uStack_c8;
    uint uStack_c4;
    uint uStack_c0;
    uint uStack_bc;
    uint64_t uStack_b8;
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    int64_t *piStack_a0;
    int64_t iStack_98;
    uchar auStack_90 [4];
    int iStack_8c;
    int iStack_88;
    int iStack_84;
    int iStack_80;
    uchar uStack_7c;
    ulong *puStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    uint64_t uStack_60;
    uchar auStack_58 [24];
    
    uStack_c8 = 0xf31fcbb5;
    uStack_c4 = 0x4215b53d;
    uStack_c0 = 0x3361db81;
    uStack_bc = 0x6a98d4e4;
    iStackX_18 = arg3;
    iStackX_20 = arg4;
    iVar1 = (**(*0x6fbd8 + 0x140))(&uStack_c8);
    uVar3 = 0;
    if (iVar1 < 0) {
        uVar9 = uVar3;
        if (iStackX_18 != 0) {
            piVar6 = &iStackX_18;
            iVar1 = iStackX_18;
            do {
                iVar8 = 0;
                uVar2 = fcn.00014a7c(iVar1,0,0,0);
                if (uVar3 <= uVar2 >> 1) {
                    uVar3 = fcn.00014a7c(iVar1,0,0,iVar8);
                    uVar3 = uVar3 >> 1;
                }
                piVar6 = piVar6 + 1;
                uVar9 = uVar9 + 1;
                iVar1 = *piVar6;
            } while (iVar1 != 0);
        }
        iVar1 = *(*0x6fbd0 + 0x40);
        if (auStack_90 != *(iVar1 + 0x48)) {
            section..text(auStack_90,*(iVar1 + 0x48),0x18);
        }
        (**(iVar1 + 0x18))(iVar1,iStack_8c,&iStack_68);
        (**(iVar1 + 0x40))(iVar1,0);
        (**(iVar1 + 0x28))(iVar1,arg1);
        uStack_b8 = iStack_70 - 3U;
        if (uVar9 < iStack_70 - 3U) {
            uStack_b8 = uVar9;
        }
        uVar9 = iStack_68 - 2U;
        if (uVar3 < iStack_68 - 2U) {
            uVar9 = uVar3;
        }
        uVar2 = (iStack_68 - uVar9) - 2 >> 1;
        uVar7 = (iStack_70 - uStack_b8) - 3 >> 1;
        uStack_a8 = uVar2;
        uStack_60 = uVar9;
        arg1_00 = fcn.00014444(uVar9 * 2 + 6);
        uVar3 = uVar9 * 2 + 4;
        if (uVar3 != 0) {
            fcn.000103c0(arg1_00,uVar3 >> 1,0x2500);
        }
        *arg1_00 = 0x250c;
        *(arg1_00 + uVar9 + 1) = 0x2510;
        (**(iVar1 + 0x38))(iVar1,uVar2,uVar7);
        iVar8 = uVar7 + 1;
        (**(iVar1 + 8))(iVar1,arg1_00);
        iStack_98 = iStackX_18;
        if (iStackX_18 != 0) {
            piStack_a0 = &iStackX_18;
            iVar4 = iStackX_18;
            do {
                iStack_98 = iVar4;
                if (uStack_b8 == 0) break;
                if (uVar3 != 0) {
                    fcn.000103c0(arg1_00,uVar3 >> 1,0x20);
                }
                *arg1_00 = 0x2502;
                *(arg1_00 + uVar9 + 1) = 0x2502;
                (**(iVar1 + 0x38))(iVar1,uVar2);
                (**(iVar1 + 8))(iVar1);
                uVar5 = 0;
                uStack_b0 = fcn.00014a7c(iVar4,0,0,0);
                uStack_b0 = uStack_b0 >> 1;
                if (uVar9 < uStack_b0) {
                    fcn.00014a7c(iVar4,CONCAT71(uVar5 >> 8,1),uVar9,&uStack_b0);
                    uVar9 = uStack_b0;
                    iVar4 = fcn.00014444(uStack_b0 * 2 + 2);
                    fcn.0001457c(iVar4,uVar9 + 1,iStack_98,uVar9 - 3);
                    fcn.0001465c(iVar4,uVar9 + 1,0x4ffc0);
                    (**(iVar1 + 0x38))(iVar1,uStack_a8 + 1,iVar8);
                    (**(iVar1 + 8))(iVar1,iVar4);
                    (**(*0x6fbd8 + 0x48))();
                    uVar9 = uStack_60;
                    uVar2 = uStack_a8;
                }
                else {
                    (**(iVar1 + 0x38))(iVar1,(uVar9 - uStack_b0 >> 1) + 1 + uVar2,iVar8);
                    (**(iVar1 + 8))(iVar1,iVar4);
                }
                iVar8 = iVar8 + 1;
                uStack_b8 = uStack_b8 - 1;
                piStack_a0 = piStack_a0 + 1;
                iVar4 = *piStack_a0;
                iStack_98 = iVar4;
            } while (iVar4 != 0);
        }
        if (uVar3 != 0) {
            fcn.000103c0(arg1_00,uVar3 >> 1,0x2500);
        }
        *arg1_00 = 0x2514;
        *(arg1_00 + uVar9 + 1) = 0x2518;
        (**(iVar1 + 0x38))(iVar1,uVar2,iVar8);
        (**(iVar1 + 8))(iVar1,arg1_00);
        (**(*0x6fbd8 + 0x48))(arg1_00);
        (**(iVar1 + 0x40))(iVar1,uStack_7c);
        (**(iVar1 + 0x38))(iVar1,iStack_84,iStack_80);
        (**(iVar1 + 0x28))(iVar1,iStack_88);
        if (arg2 != 0) {
            while (iVar1 = (**(*(*0x6fbd0 + 0x30) + 8))(*(*0x6fbd0 + 0x30),arg2), iVar1 < 0) {
                if (iVar1 == -0x7ffffffffffffffa) {
                    (**(*0x6fbd8 + 0x60))(1,*(*0x6fbd0 + 0x30) + 0x10,auStack_58);
                }
            }
        }
    }
    else {
        (**puStack_78)(arg1,arg2,&iStackX_18);
    }
    return;
}


/* fcn.000147ec @ 0x147ec */

ulong fcn.000147ec(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int16_t iVar3;
    
    iVar3 = 0;
    if ((arg2 == 0) || (arg1 == 0)) {
        return 0x8000000000000002;
    }
    uVar2 = 0x21;
    uVar1 = fcn.000144b0(arg1,0x21);
    if (uVar2 <= uVar1) {
        return 0x8000000000000005;
    }
    if (arg1 <= arg2) {
        if (arg2 < arg1 + (uVar1 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg1 < arg2) goto code_r0x0001485e;
    }
    if (arg1 < arg2 + 0x21U) {
        return 0x800000000000000f;
    }
code_r0x0001485e:
    for (; *arg1 != iVar3; arg1 = arg1 + 2) {
        *arg2 = *arg1;
        arg2 = arg2 + 1;
    }
    *arg2 = iVar3;
    return 0;
}


/* fcn.00014444 @ 0x14444 */

void fcn.00014444(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00014414(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.00010320(arg1_00,arg1);
    }
    return;
}


/* fcn.00014414 @ 0x14414 */

ulong fcn.00014414(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x6fbd8 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00014fbc @ 0x14fbc */

uchar fcn.00014fbc(int64_t arg1)

{
    char cVar1;
    uint32_t uVar2;
    
    if (arg1 != 0) {
        uVar2 = 0;
        do {
            cVar1 = fcn.000104a3(arg1);
            if (cVar1 != '\0') {
                return 1;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < 10);
    }
    return 0;
}


/* section..text @ 0x102e0 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 255552 named .text
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


/* fcn.00011f24 @ 0x11f24 */

int64_t fcn.00011f24(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uStackX_20;
    uchar auStack_138 [191];
    uchar auStack_79 [61];
    int16_t iStack_3c;
    ushort uStack_3a;
    
    uStackX_20 = 0;
    iVar1 = fcn.00014444(0x100);
    if (iVar1 == 0) {
        return -0x7ffffffffffffff7;
    }
    fcn.00010320(auStack_138,0x100);
    section..text(auStack_79,0x6fba8,0x20);
    uStack_3a = 1;
    (**(arg1 + 8))(arg1,arg2 & 0xffffffffU,100000000,0xea,0x100,0x100,auStack_138);
    if (iStack_3c == 0) {
        fcn.00010320(auStack_138,0x100);
        uStack_3a = 5;
        (**(arg1 + 8))(arg1,arg2 & 0xffffffff,100000000,0xea,0x100,0x100,auStack_138);
        if ((iStack_3c == 0) &&
           ((iVar2 = (**arg1)(arg1,arg2 & 0xffffffffU,100000000,0xea,0x100,0x100,iVar1,&uStackX_20), iVar2 < 0
            || (iVar2 = 0, *(iVar1 + 0xfc) == 0)))) goto code_r0x000120ab;
    }
    iVar2 = -0x7ffffffffffffff9;
code_r0x000120ab:
    (**(*0x6fbd8 + 0x48))(iVar1);
    return iVar2;
}


/* fcn.00012290 @ 0x12290 */

int64_t fcn.00012290(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    char cVar1;
    uchar *arg2_00;
    int64_t iVar2;
    ulong uStack0000000000000030;
    uchar auStack_138 [223];
    uchar uStack_59;
    uchar auStack_58 [8];
    uchar auStack_50 [12];
    uint uStack_44;
    uint uStack_40;
    int16_t iStack_3c;
    ushort uStack_3a;
    
    uStack0000000000000030 = 0;
    fcn.00010320(auStack_138,0x100);
    cVar1 = fcn.00014fbc(auStack_58);
    if ((cVar1 == '\0') || (cVar1 = fcn.00014fbc(auStack_50), cVar1 != '\x01')) {
        iVar2 = -0x7ffffffffffffffd;
    }
    else {
        uStack_59 = 0;
        uStack_40 = 1;
        uStack_44 = 0;
        uStack_3a = 4;
        (**(arg1 + 8))(arg1,arg2 & 0xffffffff,100000000,0xea,0x100,0x100,auStack_138);
        if (iStack_3c == 0) {
            arg2_00 = fcn.00014444(0x300);
            if (arg2_00 == NULL) {
                return -0x7ffffffffffffff7;
            }
            iVar2 = (**arg1)(arg1,arg2 & 0xffffffff,100000000,0xea,0x100,0x300,arg2_00,&stack0x00000030);
            if (-1 < iVar2) {
                if (auStack_138 != arg2_00) {
                    section..text(auStack_138,arg2_00,0x100);
                }
                if (iStack_3c == 0) {
                    iVar2 = 0;
                    if (arg3 != arg2_00 + 0x100) {
                        section..text(arg3,arg2_00 + 0x100,0x40);
                        iVar2 = 0;
                    }
                }
                else {
                    iVar2 = -0x7ffffffffffffff9;
                }
            }
            (**(*0x6fbd8 + 0x48))(arg2_00);
        }
        else {
            iVar2 = -0x7ffffffffffffff9;
        }
    }
    return iVar2;
}


/* fcn.00013070 @ 0x13070 */

ulong fcn.00013070(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t iVar2;
    int64_t arg3_00;
    uchar auStack_28 [16];
    
    if ((((arg3 != 0) && (iVar2 = fcn.00014414(arg1,0x1e8), iVar2 != 0)) && (arg2 != 0)) &&
       (iVar1 = fcn.00015580(arg2,0x80,iVar2), iVar1 == 0)) {
        arg3_00 = iVar2 + 0xf4;
        iVar1 = fcn.00016030(arg2,0x80,arg3_00);
        if (iVar1 == 0) {
            section..text(auStack_28,0x4fb58,0x10);
            if (arg4 != '\0') {
                arg3_00 = iVar2;
            }
            fcn.00017870(arg3,arg1,0x20,arg3_00);
            return 1;
        }
    }
    return 0;
}


/* fcn.00010a00 @ 0x10a00 */

ulong fcn.00010a00(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    int64_t iVar2;
    ulong uStackX_18;
    uint16_t auStack_c8 [32];
    ushort uStack_88;
    ushort auStack_78 [32];
    ushort uStack_38;
    
    uStackX_18 = arg2;
    fcn.00010320(auStack_c8,0x42);
    fcn.00010320(auStack_78,0x42);
    (**(*(*0x6fbd0 + 0x40) + 0x30))(*(*0x6fbd0 + 0x40));
    iVar2 = 0;
    do {
        while( true ) {
            do {
                while( true ) {
                    auStack_78[iVar2] = 0x5f;
                    fcn.00014b24(0x17,&uStackX_18,arg1,0x4fa88);
                    if (uStackX_18 == 0) break;
                    if (uStackX_18 == 0x17) goto code_r0x00010b18;
                }
                if (uStackX_18._2_2_ == 0xd) {
                    auStack_c8[iVar2] = 0;
                    auStack_78[iVar2] = 0;
                    goto code_r0x00010b18;
                }
            } while ((7 < uStackX_18._2_2_ - 1) && (uStackX_18._2_2_ < 0xb));
            if (uStackX_18._2_2_ != 8) break;
            if (iVar2 != 0) {
                auStack_c8[iVar2] = 0;
                auStack_78[iVar2] = 0;
                iVar2 = iVar2 + -1;
            }
        }
        auStack_c8[iVar2] = uStackX_18._2_2_;
        auStack_78[iVar2] = 0x2a;
        iVar2 = iVar2 + 1;
    } while (iVar2 != 0x20);
    uStack_88 = 0;
    uStack_38 = 0;
code_r0x00010b18:
    (**(*(*0x6fbd0 + 0x40) + 0x30))(*(*0x6fbd0 + 0x40));
    if ((iVar2 == 0) || (uStackX_18 == 0x17)) {
        fcn.00010320(auStack_c8,0x42);
        uVar1 = 0x8000000000000015;
    }
    else {
        fcn.000147ec(auStack_c8,arg3);
        fcn.00010320(auStack_c8,0x42);
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00012450 @ 0x12450 */

uchar * fcn.00012450(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    char cVar1;
    uchar *arg1_00;
    uchar *puVar2;
    uchar *arg2_00;
    uchar *puVar3;
    uint32_t in_stack_00000030;
    ulong uStack_268;
    uchar auStack_260 [40];
    uchar auStack_238 [191];
    uchar auStack_179 [32];
    uchar uStack_159;
    uint uStack_148;
    uint uStack_144;
    uint uStack_140;
    int16_t iStack_13c;
    ushort uStack_13a;
    uchar auStack_128 [240];
    uint uStack_38;
    
    puVar3 = NULL;
    uStack_268 = 0;
    arg1_00 = fcn.00014444(0x300);
    if (arg1_00 == NULL) {
        return 0x8000000000000009;
    }
    puVar2 = fcn.000120dc(arg1,arg2 & 0xffffffffU,auStack_128);
    arg2_00 = puVar3;
    if (-1 < puVar2) {
        fcn.00010320(auStack_238,0x100);
        uStack_148 = uStack_38;
        uStack_140 = 1;
        uStack_13a = 3;
        uStack_159 = 0;
        uStack_144 = 0;
        if (arg1_00 != auStack_238) {
            section..text(arg1_00,auStack_238,0x100);
        }
        if ((in_stack_00000030 != 0) && (arg1_00 + 0x100 != arg3)) {
            section..text(arg1_00 + 0x100,arg3,in_stack_00000030);
        }
        cVar1 = fcn.00012f78(auStack_260,arg1_00 + 0xdf,0x221,0);
        arg2_00 = NULL;
        if (cVar1 != '\0') {
            section..text(auStack_179,auStack_260,0x20);
            if (arg1_00 != auStack_238) {
                section..text(arg1_00,auStack_238,0x100);
            }
            (**(arg1 + 8))(arg1,arg2 & 0xffffffff,100000000,0xea,0x100,0x300,arg1_00);
            if (auStack_238 != arg1_00) {
                section..text(auStack_238,arg1_00,0x100);
            }
            if (iStack_13c == 0) {
                fcn.00010320(auStack_238,0x100);
                uStack_159 = 0;
                uStack_13a = 5;
                (**(arg1 + 8))(arg1,arg2 & 0xffffffffU,100000000,0xea,0x100,0x100,auStack_238);
                arg2_00 = fcn.00014444(0x100);
                if (arg2_00 == NULL) {
                    return 0x8000000000000009;
                }
                puVar2 = (**arg1)(arg1,arg2 & 0xffffffff,100000000,0xea,0x100,0x100,arg2_00,&uStack_268);
                if (puVar2 < 0) goto code_r0x00012736;
                fcn.00010320(auStack_238,0x100);
                if (auStack_238 != arg2_00) {
                    section..text(auStack_238,arg2_00,0x100);
                }
                if (iStack_13c == 0) {
                    section..text(auStack_260,auStack_179,0x20);
                    cVar1 = fcn.00012f78(auStack_260,arg2_00 + 0xdf,0x21,1);
                    if (cVar1 == '\0') {
                        puVar3 = 0x8000000000000007;
                    }
                    puVar2 = puVar3;
                    goto code_r0x00012736;
                }
            }
            else {
                arg2_00 = puVar3;
                if (iStack_13c != 1) {
                    arg2_00 = NULL;
                }
            }
            puVar2 = 0x8000000000000007;
        }
    }
code_r0x00012736:
    (**(*0x6fbd8 + 0x48))(arg1_00);
    if (arg2_00 != NULL) {
        (**(*0x6fbd8 + 0x48))(arg2_00);
    }
    return puVar2;
}


/* fcn.00014470 @ 0x14470 */

void fcn.00014470(ulong noname_0,int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00014414();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != 0xff000000)) {
        section..text(arg1_00,0xff000000,arg1);
    }
    return;
}


/* fcn.0004dbdc @ 0x4dbdc */

//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Variable defined which should be unmapped: var_bp_28h
//WARNING: Variable defined which should be unmapped: var_bp_20h

uint32_t fcn.0004dbdc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t arg1_00;
    uint32_t uVar1;
    int64_t var_bp_10h;
    uint32_t var_30h;
    int32_t var_2ch;
    int32_t var_bp_28h;
    uint uStack_2c;
    int64_t var_bp_20h;
    int32_t var_bp_18h;
    int32_t var_14h;
    
    uVar1 = arg2;
    if ((arg1 == 0) || (arg3 == 0)) {
        arg1_00 = 3;
        goto code_r0x0004dcbd;
    }
    if (uVar1 != 0) {
        *arg3 = 0;
        fcn.0004e848(&var_bp_20h,0,0x14);
        var_bp_20h._4_4_ = arg1;
        var_bp_20h._0_4_ = 0x26;
        var_bp_18h = arg1 >> 0x20;
        var_14h = uVar1;
        arg1_00 = fcn.0004e498(0x19,&var_bp_20h,0x14,&var_30h,CONCAT44(var_2ch,var_30h),
                               CONCAT44(uStack_2c,var_bp_28h),0x26);
        if (arg1_00 != 0) goto code_r0x0004dcbd;
        if (var_30h != 0x27) {
            arg1_00 = 0x148;
            goto code_r0x0004dcbd;
        }
        arg1_00 = fcn.0004e6c4(var_2ch,0x19);
        if (arg1_00 != 0) goto code_r0x0004dcbd;
        if ((var_bp_28h != 0) && (var_bp_28h <= uVar1)) {
            *arg3 = var_bp_28h;
            goto code_r0x0004dcbd;
        }
    }
    arg1_00 = 0x31b;
code_r0x0004dcbd:
    fcn.0004dcdc(arg1_00);
    return arg1_00;
}


/* fcn.00010e50 @ 0x10e50 */

//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_24h
//WARNING: Variable defined which should be unmapped: var_bp_30h
//WARNING: Variable defined which should be unmapped: var_bp_38h

uint64_t fcn.00010e50(int64_t arg1,int64_t arg2)

{
    int iVar1;
    bool bVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t arg2_00;
    uint64_t uVar6;
    uint64_t arg1_00;
    uint64_t uVar7;
    uint32_t auStackX_8 [2];
    uint64_t *puStackX_10;
    uint32_t auStackX_18 [2];
    uint auStackX_20 [2];
    int32_t var_c0h;
    int32_t var_d0h;
    int32_t var_d8h;
    int64_t iStack_188;
    int64_t iStack_180;
    uint uStack_178;
    uint uStack_174;
    uint64_t uStack_170;
    uint64_t uStack_168;
    uint64_t uStack_160;
    uint64_t uStack_158;
    int64_t iStack_150;
    int64_t iStack_148;
    uint uStack_140;
    uint uStack_13c;
    uint uStack_138;
    int iStack_134;
    ulong uStack_130;
    ulong uStack_128;
    uint uStack_120;
    uint uStack_11c;
    uint32_t uStack_118;
    int64_t iStack_110;
    int64_t iStack_108;
    int64_t aiStack_100 [2];
    uchar auStack_f0 [8];
    uint uStack_e8;
    ulong uStack_e4;
    uint uStack_dc;
    uint uStack_d8;
    uint uStack_d4;
    uint uStack_d0;
    int32_t var_80h;
    int32_t var_bp_7ch;
    int64_t var_bp_78h;
    int64_t var_bp_70h;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    uint32_t var_58h;
    uint32_t var_bp_50h;
    uint32_t var_bp_48h;
    int64_t var_40h;
    int64_t var_bp_38h;
    int64_t var_bp_30h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    
    uVar7 = 0;
    auStackX_18[0] = 0;
    iStack_148 = 0;
    iStack_180 = 0;
    bVar2 = false;
    uStack_168 = 0;
    aiStack_100[1] = 0;
    uStack_170 = 0;
    auStackX_20[0] = 0;
    puStackX_10 = arg2;
    if ((*0x6fc10 == 0) && (iVar4 = (**(*0x6fbd8 + 0x140))(0x4f6d0,0,0x6fc10), iVar4 < 0)) {
        uVar5 = 0x8000000000000006;
    }
    else {
        auStackX_8[0] = 0x1000000;
        iVar4 = *0x6fc10;
        uVar5 = (**(*0x6fc10 + 0x40))(*0x6fc10,1,&uStack_174,auStackX_8);
        arg2_00 = uVar7;
        if (-1 < uVar5) {
            arg2_00 = fcn.00014470(iVar4,auStackX_8[0]);
            uVar5 = uVar7;
        }
        if (-1 < uVar5) {
            uVar5 = (**(*0x6fc10 + 0x40))(*0x6fc10,2,&uStack_178,auStackX_20);
            if (uVar5 < 0) {
                return uVar5;
            }
            fcn.00010320(&uStack_e8,0x9c);
            fcn.00010320(&uStack_140,0x2c);
            uStack_d4 = uStack_178;
            uStack_e8 = 0x4844524e;
            uStack_e4 = 1;
            uStack_dc = 0;
            uStack_d8 = 2;
            uStack_d0 = 1;
            if (arg1 != &uStack_e8) {
                section..text(arg1,&uStack_e8,0x9c);
            }
            uStack_140 = 0x56434552;
            uStack_13c = 1;
            uStack_138 = 1;
            iStack_134 = auStackX_8[0] + 0x2c;
            uStack_130 = 1;
            uStack_11c = uStack_174;
            uStack_128 = 1;
            uStack_120 = 0x2c;
            uStack_118 = auStackX_8[0];
            if (arg1 + 0x9c != &uStack_140) {
                section..text(arg1 + 0x9c,&uStack_140,0x2c);
            }
            arg1_00 = arg1 + 200;
            if ((auStackX_8[0] != 0) && (arg1_00 != arg2_00)) {
                section..text(arg1_00,arg2_00,auStackX_8[0]);
            }
            uVar6 = auStackX_8[0];
            iVar1 = auStackX_8[0] + 200;
            uVar5 = (**(*0x6fbd8 + 0x138))(2,0x4f690,0,&uStack_158,&iStack_150);
            if (((-1 < uVar5) && (iStack_150 != 0)) && (uStack_158 != 0)) {
                do {
                    uVar5 = (**(*0x6fbd8 + 0x98))(*(iStack_150 + uVar7 * 8),0x4f690,&iStack_188);
                    (**(iStack_188 + 0x70))(iStack_188,auStack_f0,&iStack_110,&iStack_108,aiStack_100);
                    if (((iStack_110 == 0) && (iStack_108 == 0x16)) && (aiStack_100[0] == 0)) {
                        bVar2 = true;
                        (**(iStack_188 + 0x78))(iStack_188,0,0,aiStack_100 + 1);
                        iVar4 = (**(iStack_188 + 0x78))(iStack_188,4,0,&uStack_170);
                        if (-1 < iVar4) {
                            uStack_170 = uStack_170 & 0x700;
                            (**(iStack_188 + 0x78))(iStack_188,2,uStack_170,0);
                        }
                        iVar4 = (**(iStack_188 + 0x58))(iStack_188,0,4,0x1000,&iStack_180,0);
                        if (iVar4 < 0) {
                            return 0x8000000000000009;
                        }
                        fcn.00010320(iStack_180,0x1000000);
                        uStack_168 = 0x1000000;
                        (**(iStack_188 + 0x48))(iStack_188,2,iStack_180,&uStack_168,&uStack_160,&iStack_148);
                        if ((uStack_160 & 0xfff) != 0) {
                            uStack_160 = uStack_160 + 0x1000 & 0xfffffffffffff000;
                        }
                        uVar3 = fcn.0004dbdc(uStack_160,uStack_168 & 0xffffffff,auStackX_18);
                        uVar5 = uVar3;
                        if (uVar3 == 0) {
                            uVar5 = (**(iStack_188 + 0x68))(iStack_188);
                            if ((auStackX_18[0] != 0) && (arg1_00 + uVar6 != uStack_160)) {
                                section..text(arg1_00 + uVar6,uStack_160,auStackX_18[0]);
                            }
                            uVar3 = iVar1 + auStackX_18[0];
                            *(arg1 + 0xc) = uVar3;
                            *puStackX_10 = uVar3;
                        }
                        break;
                    }
                    uVar7 = uVar7 + 1;
                } while (uVar7 < uStack_158);
            }
        }
        if (arg2_00 != 0) {
            (**(*0x6fbd8 + 0x48))(arg2_00);
        }
        if (iStack_148 != 0) {
            (**(iStack_188 + 0x50))(iStack_188);
        }
        if (bVar2) {
            (**(iStack_188 + 0x60))(iStack_188,0x1000,iStack_180);
        }
    }
    return uVar5;
}


/* fcn.00010360 @ 0x10360 */

int64_t fcn.00010360(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00014ff8 @ 0x14ff8 */

void fcn.00014ff8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00014414(arg1,0x70);
    if (arg1_00 != 0) {
        fcn.00019550(arg1_00);
        if ((arg1 != 0) || (arg2 == 0)) {
            fcn.00019690(arg1_00,arg1,arg2);
        }
        if (arg3 != 0) {
            fcn.000198e0(arg3,arg1_00);
        }
    }
    //WARNING: Could not recover jumptable at 0x00015075. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x6fbd8 + 0x48))(arg1_00);
    return;
}


/* fcn.0001277c @ 0x1277c */

int64_t fcn.0001277c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uchar *arg2_00;
    int64_t iVar2;
    unkbyte7 in_R9;
    int64_t var_2fh;
    int64_t var_50h;
    int64_t var_58h;
    int32_t var_68h;
    int16_t var_6ch;
    int16_t var_6eh;
    ulong uStack_168;
    uchar auStack_160 [40];
    uchar auStack_138 [191];
    uchar auStack_79 [33];
    uchar auStack_58 [8];
    uchar auStack_50 [16];
    uint uStack_40;
    int16_t iStack_3c;
    ushort uStack_3a;
    
    uStack_168 = 0;
    fcn.00010320(auStack_138,0x100);
    cVar1 = fcn.00014fbc(auStack_58);
    if ((cVar1 == '\0') || (cVar1 = fcn.00014fbc(auStack_50), cVar1 != '\x01')) {
        iVar2 = -0x7ffffffffffffffd;
    }
    else {
        uStack_40 = 1;
        uStack_3a = 7;
        (**(arg1 + 8))(arg1,arg2 & 0xffffffff,100000000,0xea,0x100,0x100,auStack_138);
        if (iStack_3c == 0) {
            arg2_00 = fcn.00014444(0x300);
            if (arg2_00 == NULL) {
                return -0x7ffffffffffffff7;
            }
            iVar2 = (**arg1)(arg1,arg2 & 0xffffffff,100000000,0xea,0x100,0x300,arg2_00,&uStack_168);
            if (-1 < iVar2) {
                if (auStack_138 != arg2_00) {
                    section..text(auStack_138,arg2_00,0x100);
                }
                if (iStack_3c == 0) {
                    section..text(auStack_160,auStack_79,0x20);
                    cVar1 = fcn.00012f78(auStack_160,arg2_00 + 0xdf,0x221,CONCAT71(in_R9,1));
                    iVar2 = 0;
                    if (cVar1 == '\0') {
                        iVar2 = -0x7ffffffffffffff9;
                    }
                    if (arg3 != arg2_00) {
                        section..text(arg3,arg2_00,0x300);
                    }
                }
                else {
                    iVar2 = -0x7ffffffffffffff9;
                }
            }
            (**(*0x6fbd8 + 0x48))(arg2_00);
        }
        else {
            iVar2 = -0x7ffffffffffffff9;
        }
    }
    return iVar2;
}


/* fcn.0001297c @ 0x1297c */

//WARNING: Type propagation algorithm not settling

int64_t fcn.0001297c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    char cVar2;
    int64_t arg3_00;
    int64_t iVar3;
    ulong auStack_38 [2];
    
    auStack_38[0] = 0;
    arg3_00 = fcn.00014444(0x300);
    if (arg3_00 == 0) {
        return -0x7ffffffffffffff7;
    }
    iVar3 = fcn.0001277c(arg1,arg2 & 0xffffffffU,arg3_00);
    if (-1 < iVar3) {
        uVar1 = *(arg3_00 + 0xf0);
        fcn.00010320(arg3_00,0x100);
        *(arg3_00 + 0xf0) = uVar1;
        *(arg3_00 + 0xf8) = 1;
        *(arg3_00 + 0xfe) = 6;
        if (arg3_00 + 0x100 != arg3) {
            section..text(arg3_00 + 0x100,arg3,0x200);
        }
        if (arg3_00 + 0xbf == 0) {
            cVar2 = '\0';
        }
        else {
            cVar2 = fcn.00012f78(arg3_00 + 0xbf,arg3_00 + 0xdf,0x221,0);
        }
        if (cVar2 != '\0') {
            (**(arg1 + 8))(arg1,arg2 & 0xffffffff,100000000,0xea,0x100,0x300,arg3_00);
            if (*(arg3_00 + 0xfc) == 0) {
                fcn.00010320(arg3_00,0x100);
                *(arg3_00 + 0xfe) = 5;
                (**(arg1 + 8))(arg1,arg2 & 0xffffffffU,100000000,0xea,0x100,0x100,arg3_00);
                iVar3 = (**arg1)(arg1,arg2 & 0xffffffff,100000000,0xea,0x100,0x100,arg3_00,auStack_38);
                if (iVar3 < 0) goto code_r0x00012b69;
                if (*(arg3_00 + 0xfc) == 0) {
                    iVar3 = 0;
                    goto code_r0x00012b69;
                }
            }
            iVar3 = -0x7ffffffffffffff9;
        }
    }
code_r0x00012b69:
    (**(*0x6fbd8 + 0x48))(arg3_00);
    return iVar3;
}


/* fcn.00012b98 @ 0x12b98 */

uint64_t fcn.00012b98(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uchar auStack_a8 [16];
    uint32_t uStack_98;
    uchar uStack_94;
    uint uStack_90;
    uint uStack_84;
    uint uStack_80;
    ulong uStack_68;
    int64_t iStack_60;
    uint uStack_58;
    uchar uStack_44;
    uint32_t *puStack_40;
    uchar *puStack_38;
    
    uVar3 = 0;
    uVar2 = arg4 >> 0xc;
    if ((arg4 & 0xfffU) != 0) {
        uVar2 = uVar2 + 1;
    }
    uVar4 = 0x8000000000000002;
    if (uVar2 != 0) {
        iVar5 = arg3;
        do {
            if ((arg1 == 0) || (iVar5 == 0)) {
                uVar1 = 0x8000000000000002;
            }
            else {
                fcn.00010320(&uStack_68,0x38);
                fcn.00010320(&uStack_98,0x2c);
                fcn.00010320(auStack_a8,0x10);
                uStack_90 = 0;
                puStack_40 = &uStack_98;
                puStack_38 = auStack_a8;
                uStack_58 = 0x1000;
                uStack_98 = uStack_98 & 0xffffff11 | 0x11;
                uStack_84 = 0x3ff;
                uStack_94 = 0xc;
                uStack_80 = iVar5 - arg3 >> 2;
                uStack_68 = 50000000;
                uStack_44 = 0;
                iStack_60 = iVar5;
                uVar1 = (**(arg1 + 8))(arg1,arg2 & 0xffffffffU,&uStack_68,0);
            }
            uVar3 = uVar3 | uVar1;
            iVar5 = iVar5 + 0x1000;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
        if (uVar3 < 0) {
            return uVar3;
        }
    }
    if (arg1 != 0) {
        fcn.00010320(&uStack_68,0x38);
        fcn.00010320(&uStack_98,0x2c);
        fcn.00010320(auStack_a8,0x10);
        uStack_90 = 0;
        puStack_40 = &uStack_98;
        puStack_38 = auStack_a8;
        uStack_84 = 0x30;
        uStack_94 = 4;
        uStack_98 = uStack_98 & 0xffffff10 | 0x10;
        uStack_68 = 50000000;
        uStack_44 = 0;
        uVar4 = (**(arg1 + 8))(arg1,arg2 & 0xffffffffU,&uStack_68,0);
        if (-1 < uVar4) {
            return uVar4;
        }
    }
    return uVar4;
}


/* fcn.00012d5c @ 0x12d5c */

uint64_t fcn.00012d5c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uchar auStack_a8 [16];
    uint32_t uStack_98;
    uchar uStack_94;
    uint uStack_90;
    ulong uStack_84;
    int iStack_7c;
    uint uStack_78;
    ulong uStack_68;
    int64_t iStack_60;
    uint uStack_58;
    uchar uStack_44;
    uint32_t *puStack_40;
    uchar *puStack_38;
    
    uVar3 = 0;
    uVar5 = arg4 >> 0xe;
    if ((arg4 & 0x3fffU) != 0) {
        uVar5 = uVar5 + 1;
    }
    iVar2 = fcn.00014444(uVar5 << 0xe);
    *arg3 = iVar2;
    if (iVar2 == 0) {
        uVar3 = 0x8000000000000009;
    }
    else {
        uVar6 = 0;
        if (uVar5 != 0) {
            iVar2 = 0;
            do {
                iVar1 = *arg3;
                if ((arg1 == 0) || (iVar1 + iVar2 == 0)) {
                    uVar4 = 0x8000000000000002;
                }
                else {
                    fcn.00010320(&uStack_68,0x38);
                    fcn.00010320(&uStack_98,0x2c);
                    fcn.00010320(auStack_a8,0x10);
                    uStack_98 = uStack_98 & 0xffffff02 | 2;
                    puStack_40 = &uStack_98;
                    uStack_90 = 0;
                    puStack_38 = auStack_a8;
                    uStack_44 = 0;
                    iStack_7c = uVar6 * 0x4000 + 0x10;
                    uStack_78 = 0;
                    uStack_58 = 0x4000;
                    uStack_68 = 50000000;
                    uStack_84 = 0xfff0015;
                    uStack_94 = 0x3c;
                    iStack_60 = iVar1 + iVar2;
                    uVar4 = (**(arg1 + 8))(arg1,arg2,&uStack_68,0);
                }
                uVar3 = uVar3 | uVar4;
                uVar6 = uVar6 + 1;
                iVar2 = iVar2 + 0x4000;
            } while (uVar6 < uVar5);
        }
    }
    return uVar3;
}


/* fcn.00010340 @ 0x10340 */

int64_t fcn.00010340(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00013244 @ 0x13244 */

int64_t fcn.00013244(void)

{
    if (*0x6fbf0 == 0) {
        (**(*0x6fbd8 + 0x140))(0x4f660,0,0x6fbf0);
    }
    return *0x6fbf0;
}


/* fcn.00011548 @ 0x11548 */

ulong fcn.00011548(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iStackX_10;
    ulong uStackX_20;
    
    uVar2 = 0;
    if ((arg2 == 0) || (arg3 == 0)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        iStackX_10 = arg1;
        iVar1 = (**(*0x6fbd8 + 0xb8))(arg2,&iStackX_10,&uStackX_20);
        if (iVar1 < 0) {
            uVar2 = 0x800000000000000e;
        }
        else {
            iVar1 = (**(*0x6fbd8 + 0x98))(uStackX_20,arg2,arg3);
            if (iVar1 < 0) {
                uVar2 = 0x800000000000000e;
            }
        }
    }
    return uVar2;
}


/* fcn.00014388 @ 0x14388 */

ulong fcn.00014388(int64_t arg1)

{
    int64_t iVar1;
    char cVar2;
    uint64_t uVar3;
    uint64_t *in_RDX;
    uint64_t *in_R8;
    
    cVar2 = fcn.0001541c();
    if (cVar2 != '\x03') {
        if (cVar2 == '\x04') {
            uVar3 = 0x1c;
            goto code_r0x000143af;
        }
        if (cVar2 != '\x05') {
            return 0x8000000000000002;
        }
    }
    uVar3 = 0xc;
code_r0x000143af:
    if (uVar3 <= arg1) {
        return 0x8000000000000002;
    }
    iVar1 = (arg1 >> 2) * 3;
    cVar2 = *(iVar1 + 0x4f7da);
    *in_RDX = *(iVar1 + 0x4f7d8);
    *in_R8 = *((*(iVar1 + 0x4f7d9) | 0xfd00) << 0x10) >> ((arg1 - cVar2) * '\x04' & 0x3fU) & 7;
    return 0;
}


/* fcn.00013280 @ 0x13280 */

ulong fcn.00013280(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t uVar2;
    
    cVar1 = fcn.00015458();
    if (((cVar1 == '\0') || (cVar1 == '\x01')) || (uVar2 = 1, cVar1 != '\x02')) {
        uVar2 = 3;
    }
    if (uVar2 < arg1) {
        return 0x8000000000000002;
    }
    if (arg1 != 0) {
        if (arg1 == 1) {
            *arg2 = 1;
            *arg3 = 0;
            return 0;
        }
        if (arg1 == 2) {
            cVar1 = fcn.00015458();
            if (cVar1 == '\x01') {
                *arg2 = 1;
                *arg3 = 1;
                return 0;
            }
            *arg3 = 2;
            goto code_r0x00013305;
        }
    }
    *arg3 = 0;
code_r0x00013305:
    *arg2 = 6;
    return 0;
}


/* fcn.000142a4 @ 0x142a4 */

ulong fcn.000142a4(ulong noname_0,ulong noname_1,int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint16_t uVar8;
    
    iVar7 = ((arg1 & 0x1f) << 3 | arg2 & 7) * 0x1000;
    uVar3 = 0;
    uVar2 = CONCAT71(iVar7 + 6 >> 8,*(iVar7 + 0xc0000006));
    uVar4 = 0;
    if ((*(iVar7 + 0xc0000006) & 0x10) != 0) {
        uVar8 = 0;
        uVar1 = 0x14;
        if ((*(iVar7 + 0xc000000e) & 0x7f) != 2) {
            uVar1 = 0x34;
        }
        uVar2 = uVar1 + iVar7;
        uVar5 = *(uVar2 + 0xc0000000) & 0xfc;
        uVar6 = uVar5;
        uVar4 = uVar3;
        if (uVar5 != 0) {
            while (uVar8 != -1) {
                uVar2 = uVar6 + iVar7;
                uVar8 = *(uVar2 + 0xc0000000);
                if (uVar8 == '\x10') {
                    uVar2 = uVar6;
                    uVar4 = 0;
                    if (0x3f < uVar6) {
                        uVar4 = uVar6;
                    }
                    break;
                }
                uVar6 = uVar8 >> 8;
                if (uVar8 >> 8 == '\0') break;
            }
        }
    }
    return CONCAT71(uVar2 >> 8,uVar4);
}


/* fcn.000149c8 @ 0x149c8 */

int64_t fcn.000149c8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uStackX_20;
    
    uStackX_20 = 0;
    *arg3 = 0;
    iVar1 = (**(*0x6fbe8 + 0x48))(arg1,arg2,0,&uStackX_20,0);
    if (iVar1 == -0x7ffffffffffffffb) {
        iVar1 = fcn.00014414(0x8000000000000005,uStackX_20);
        *arg3 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x6fbe8 + 0x48))(arg1,arg2,0,&uStackX_20,iVar1);
            if (iVar1 < 0) {
                (**(*0x6fbd8 + 0x48))(*arg3);
                *arg3 = 0;
            }
        }
    }
    return iVar1;
}


/* fcn.000116a8 @ 0x116a8 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

ulong fcn.000116a8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    int64_t iVar8;
    bool bVar9;
    uint64_t uStack_48;
    uint64_t uStack_40;
    uint32_t var_30h;
    uint32_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    
    uVar7 = 0;
    _var_30h = 0;
    var_18h = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar4 = arg3;
    iVar8 = arg4;
    iVar3 = fcn.00013244();
    uVar2 = (**(iVar3 + 0x18))(0x83);
    uVar6 = uVar2;
    if (uVar2 == 0) {
        return 0;
    }
    if (arg1 == '\0') {
        *arg3 = 0;
        if (arg2 != 0) {
            for (; *arg2 != '\x7f'; arg2 = arg2 + *(arg2 + 2)) {
                if ((*arg2 == '\x01') && (*(arg2 + 1) == '\x01')) {
                    uStack_48 = *(arg2 + 5);
                    uStack_40 = *(arg2 + 4);
                    break;
                }
            }
        }
        uVar7 = uStack_48;
        uVar2 = uStack_40;
        uVar1 = fcn.000142a4(uStack_48,uStack_40,CONCAT71(iVar4 >> 8,uStack_48),CONCAT71(iVar8 >> 8,uStack_40));
        bVar9 = *(uVar1 + ((uVar7 & 0x1f) << 3 | uVar2 & 7) * 0x1000 + 0xc000000f) == uVar6;
    }
    else {
        if (arg2 == 0) {
            iVar4 = -0x7ffffffffffffffe;
        }
        else {
            iVar4 = fcn.00011548(arg2,0x4f640,&var_30h);
        }
        if (iVar4 < 0) {
            return 0;
        }
        for (; *arg2 != '\x7f'; arg2 = arg2 + *(arg2 + 2)) {
            if ((*arg2 == '\x03') && (*(arg2 + 1) == '\x17')) {
                uVar2 = *(arg2 + 4);
                goto code_r0x00011752;
            }
        }
        uVar2 = 0xffffffff;
code_r0x00011752:
        do {
            if ((uVar2 & 1 << (uVar7 & 0x1f) & 0x7fffffffU) != 0) break;
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0x1f);
        iVar5 = uVar7 + 1;
        (**(_var_30h + 0x10))(_var_30h,iVar5,&var_18h,&uStack_48,&uStack_40);
        (**(_var_30h + 8))(_var_30h,iVar5,arg4);
        if (uVar6 < 0x40) {
            fcn.00014388(uVar6 - 1);
        }
        else {
            fcn.00013280(uVar6 - 0x40,&var_28h,&var_20h);
        }
        *arg3 = iVar5;
        if (uStack_48 != _var_28h) {
            return 0;
        }
        bVar9 = uStack_40 == var_20h;
    }
    if (bVar9) {
        return 1;
    }
    return 0;
}


/* fcn.00012ebc @ 0x12ebc */

void fcn.00012ebc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar auStack_88 [16];
    uint32_t uStack_78;
    uchar uStack_74;
    uint uStack_70;
    uint uStack_64;
    ulong uStack_48;
    int64_t iStack_40;
    uint uStack_38;
    uchar uStack_24;
    uint32_t *puStack_20;
    uchar *puStack_18;
    
    fcn.00010320(&uStack_48,0x38);
    fcn.00010320(&uStack_78,0x2c);
    fcn.00010320(auStack_88,0x10);
    uStack_70 = 0;
    uStack_78 = uStack_78 & 0xffffff06 | 6;
    puStack_20 = &uStack_78;
    uStack_38 = 0x1000;
    puStack_18 = auStack_88;
    uStack_48 = 50000000;
    uStack_24 = 0;
    uStack_64 = 1;
    uStack_74 = 4;
    iStack_40 = arg3;
    (**(arg1 + 8))(arg1,arg2 & 0xffffffff,&uStack_48,0);
    return;
}


/* fcn.000115e0 @ 0x115e0 */

uint64_t fcn.000115e0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint64_t auStackX_10 [2];
    uint auStackX_20 [2];
    uint64_t uStack_18;
    
    auStackX_20[0] = arg4;
    if (arg2 != 0) {
        if (arg3 != '\0') {
            uStack_18 = *(*(arg1 + 0x10) & 0xfffffffffffffff0);
code_r0x00011697:
            return uStack_18 >> 0x2d & 1;
        }
        auStackX_10[0] = 0;
        arg1 = (**(arg2 + 0x10))(arg2,3,0,0,1,auStackX_10);
        if (-1 < arg1) {
            uStack_18 = auStackX_10[0];
            arg1 = (**(arg2 + 0x10))(arg2,2,0,0x40,1,auStackX_20);
            uVar1 = 0;
            if (arg1 < 0) {
                uVar1 = arg1;
            }
            if (-1 < uVar1) goto code_r0x00011697;
        }
    }
    return arg1 & 0xffffffffffffff00;
}


/* fcn.00010b8c @ 0x10b8c */

int64_t fcn.00010b8c(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uchar *arg3;
    ulong uVar2;
    uchar *puVar3;
    int64_t iVar4;
    uchar *puVar5;
    ulong in_R8;
    int64_t in_R9;
    uchar *arg3_00;
    ulong uVar6;
    uchar auStack_c8 [32];
    uchar auStack_a8 [8];
    uchar auStack_a0 [8];
    uchar auStack_98 [32];
    uchar auStack_78 [32];
    uchar auStack_58 [48];
    
    arg3 = fcn.00014444(0x40);
    if (arg3 == NULL) {
        iVar4 = -0x7ffffffffffffff7;
        goto code_r0x00010ddc;
    }
    iVar4 = 2;
    puVar5 = 0x6fba8;
    do {
        cVar1 = fcn.00014fbc(auStack_a8);
        if (cVar1 != '\0') {
            fcn.00014fbc(auStack_a0);
        }
        if (puVar5 != auStack_a8) {
            in_R8 = 0x10;
            section..text(puVar5,auStack_a8,0x10);
        }
        puVar5 = puVar5 + 0x10;
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = fcn.00014f70(0x4f6f0);
    if (iVar4 == 0) {
        return -0x7ffffffffffffffd;
    }
    if (auStack_78 != iVar4 + 0x26) {
        in_R8 = 0x20;
        section..text(auStack_78,iVar4 + 0x26,0x20);
    }
    fcn.00010320(iVar4 + 0x18,0x4e);
    iVar4 = fcn.00011f24(arg1,arg2 & 0xffffffffU,in_R8,in_R9);
    if (iVar4 < 0) {
        iVar4 = fcn.00012290(arg1,arg2 & 0xffffffff,in_R8,arg3);
        if (iVar4 < 0) goto code_r0x00010ddc;
        if (auStack_c8 != arg3) {
            section..text(auStack_c8,arg3,0x20);
        }
        puVar5 = arg3 + 0x20;
        if (auStack_98 != puVar5) {
            section..text(auStack_98,puVar5,0x20);
        }
        puVar3 = auStack_c8;
        fcn.00013070(0x6fba8,auStack_78,puVar3,0);
        uVar2 = 0x21;
        fcn.00010320(auStack_58,0x21);
        if (*0x6fba0 == '\x01') {
            arg3_00 = auStack_58;
            iVar4 = fcn.00010a00(0x4fab8,uVar2,puVar3,arg3_00);
            if (iVar4 < 0) goto code_r0x00010ddc;
            fcn.00010320(auStack_98,0x20);
            uVar2 = 0x6fba8;
            cVar1 = fcn.00013070(auStack_98,auStack_58,0x6fba8,CONCAT71(arg3_00 >> 8,1));
            if (cVar1 == '\0') goto code_r0x00010ddc;
            if (puVar5 != auStack_98) {
                puVar3 = auStack_98;
code_r0x00010d45:
                uVar2 = 0x20;
                section..text(puVar5,puVar3,0x20);
            }
        }
        else {
            if ((*0x6fba0 != '\x02') || (iVar4 = fcn.00010a00(0x4fae8,uVar2,puVar3,auStack_58), iVar4 < 0))
            goto code_r0x00010ddc;
            uVar6 = 0;
            cVar1 = fcn.00013070(0x6fba8,auStack_58,auStack_98,0);
            if (cVar1 == '\0') goto code_r0x00010ddc;
            uVar2 = 0x6fba8;
            fcn.00013070(auStack_c8,auStack_78,0x6fba8,CONCAT71(uVar6 >> 8,1));
            if (arg3 != auStack_c8) {
                puVar3 = auStack_c8;
                puVar5 = arg3;
                goto code_r0x00010d45;
            }
        }
        puVar5 = arg3;
    }
    else {
        uVar2 = 0x6fba8;
        fcn.00013070(auStack_c8,auStack_78,0x6fba8,CONCAT71(in_R9 >> 8,1));
        puVar5 = auStack_c8;
    }
    iVar4 = fcn.00012450(arg1,arg2 & 0xffffffffU,uVar2,puVar5);
code_r0x00010ddc:
    fcn.00010320(auStack_78,0x20);
    fcn.00010320(auStack_c8,0x20);
    fcn.00010320(auStack_58,0x21);
    fcn.00010320(auStack_98,0x20);
    if (arg3 != NULL) {
        fcn.00010320(arg3,0x40);
    }
    return iVar4;
}


/* fcn.00011298 @ 0x11298 */

int64_t fcn.00011298(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t *arg2_00;
    uint64_t arg3_00;
    int64_t arg3_01;
    int64_t iVar1;
    int64_t arg1_00;
    int64_t iVar2;
    uint64_t arg1_01;
    uint64_t uStack_268;
    int64_t iStack_260;
    uchar auStack_258 [32];
    uint16_t auStack_238 [256];
    
    iStack_260 = 0;
    iVar2 = arg3;
    fcn.00010320(auStack_238,0x200);
    arg3_01 = fcn.00014444(0x300);
    uStack_268 = 0x2000000;
    iVar1 = fcn.00014444(0x2000000);
    if (iVar1 == 0) {
        iVar2 = -0x7ffffffffffffff7;
        goto code_r0x00011518;
    }
    fcn.00010e50(iVar1,&uStack_268);
    arg3_00 = uStack_268;
    arg1_01 = uStack_268;
    if ((uStack_268 & 0xfff) != 0) {
        arg1_01 = ((uStack_268 >> 0xc) + 1) * 0x1000;
    }
    arg1_00 = fcn.00014444(arg1_01);
    if (arg1_01 != 0) {
        fcn.00010360(arg1_00,arg1_01,CONCAT71(iVar2 >> 8,0xff));
    }
    if ((arg3_00 != 0) && (arg1_00 != iVar1)) {
        section..text(arg1_00,iVar1,arg3_00);
    }
    fcn.00014ff8(arg1_00,arg3_00,auStack_258);
    if (arg1_00 + 0x1c != auStack_258) {
        section..text(arg1_00 + 0x1c,auStack_258,0x20);
    }
    (**(*0x6fbd8 + 0x48))(iVar1);
    iVar2 = fcn.0001277c(arg3,arg4 & 0xffffffff,arg3_01);
    if (-1 < iVar2) {
        arg2_00 = arg3_01 + 0x100;
        if (auStack_238 != arg2_00) {
            section..text(auStack_238,arg2_00,0x200);
        }
        if ((auStack_238[0] & 0x100) == 0) {
code_r0x00011444:
            iVar2 = fcn.00012b98(arg1,arg2 & 0xffffffff,arg1_00,arg1_01);
            if (-1 < iVar2) {
                auStack_238[0] = 0x101;
                iVar2 = fcn.0001297c(arg3,arg4 & 0xffffffff,auStack_238);
                if (-1 < iVar2) {
                    iVar2 = fcn.0001277c(arg3,arg4 & 0xffffffff,arg3_01);
                    if (-1 < iVar2) {
                        if (auStack_238 != arg2_00) {
                            section..text(auStack_238,arg2_00,0x200);
                        }
                        iVar2 = fcn.00012d5c(arg1,arg2 & 0xffffffff,&iStack_260,arg1_01);
                        iVar1 = iStack_260;
                        if ((arg1_01 != 0) && (iStack_260 != arg1_00)) {
                            fcn.00010340(iStack_260,arg1_00,arg1_01);
                        }
                        if (iVar1 != 0) {
                            (**(*0x6fbd8 + 0x48))(iVar1);
                        }
                    }
                }
            }
        }
        else {
            auStack_238[0] = auStack_238[0] & 0xff;
            iVar2 = fcn.0001297c(arg3,arg4 & 0xffffffff,auStack_238);
            if (-1 < iVar2) {
                iVar2 = fcn.0001277c(arg3,arg4 & 0xffffffff,arg3_01);
                if (-1 < iVar2) {
                    if (auStack_238 != arg2_00) {
                        section..text(auStack_238,arg2_00,0x200);
                    }
                    goto code_r0x00011444;
                }
            }
        }
    }
    if (arg1_00 != 0) {
        (**(*0x6fbd8 + 0x48))(arg1_00);
    }
code_r0x00011518:
    if (arg3_01 != 0) {
        (**(*0x6fbd8 + 0x48))(arg3_01);
    }
    return iVar2;
}


/* fcn.0001539c @ 0x1539c */

uchar fcn.0001539c(int64_t arg1)

{
    char cVar1;
    uchar uVar2;
    int64_t arg1_00;
    int64_t in_RDX;
    
    arg1_00 = fcn.0001507c(arg1,in_RDX,0);
    uVar2 = 0;
    if (arg1_00 != 0) {
        cVar1 = fcn.00015304(arg1,arg1_00,0x4ffc8,0x4ffd8);
        uVar2 = 0;
        if (cVar1 != '\0') {
            uVar2 = fcn.00015304(arg1,arg1_00,0x4ffd8,0x4ffe8);
        }
        (**(*0x6fbd8 + 0x48))(arg1_00);
    }
    return uVar2;
}


/* fcn.0001507c @ 0x1507c */

int16_t * fcn.0001507c(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int64_t arg1_00;
    bool bVar2;
    uint16_t uVar3;
    uint16_t *puVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int16_t *arg1_01;
    int64_t iVar7;
    int16_t *piVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t arg1_02;
    int16_t *piVar11;
    uint64_t *noname_2;
    char16_t *pcVar12;
    uint16_t *puVar13;
    uint64_t uStackX_10;
    
    uVar10 = 0;
    puVar13 = 0x4f790;
    puVar4 = 0x4f790;
    uVar9 = uVar10;
    uVar3 = *0x4f790;
    while (uVar3 != 0) {
        puVar4 = puVar4 + 1;
        uVar9 = uVar9 + 1;
        uVar3 = *puVar4;
    }
    noname_2 = NULL;
    arg1_02 = uVar10;
    uVar6 = uVar10;
    uStackX_10 = arg1;
    if (arg2 != 0) {
        noname_2 = &uStackX_10;
        iVar5 = (**(*0x6fbd8 + 0x98))(arg2,0x4f680);
        arg1_02 = uStackX_10;
        if (iVar5 < 0) {
            arg1_02 = uVar10;
        }
        if (arg1_02 == 0) {
            return NULL;
        }
        uStackX_10 = arg1_02;
        uVar6 = fcn.000131bc(arg1_02);
    }
    iVar5 = (uVar6 + uVar9 * 2) * 2 + 0x32;
    arg1_00 = iVar5 * 2;
    arg1_01 = fcn.00014444(arg1_00);
    if (arg1_01 == NULL) {
        return NULL;
    }
    fcn.000144e4(arg1_01,iVar5);
    iVar1 = *arg1_01;
    piVar11 = arg1_01;
    uVar9 = uVar10;
    while (iVar1 != 0) {
        piVar11 = piVar11 + 1;
        uVar9 = uVar9 + 1;
        iVar1 = *piVar11;
    }
    piVar11 = arg1_01 + uVar9;
    do {
        fcn.00013388(piVar11,(arg1_00 - piVar11) + arg1_01,noname_2,*(uVar10 + 0x4f7b0));
        iVar7 = fcn.000144b0(piVar11,iVar5 - (piVar11 - arg1_01 >> 1));
        uVar10 = uVar10 + 1;
        piVar11 = piVar11 + iVar7;
    } while (uVar10 < 0x10);
    pcVar12 = L"&NAME=";
    fcn.0001465c(arg1_01,iVar5,0x4ffd8);
    uVar10 = 0;
    iVar1 = *piVar11;
    piVar8 = piVar11;
    uVar9 = uVar10;
    while (iVar1 != 0) {
        piVar8 = piVar8 + 1;
        uVar9 = uVar9 + 1;
        iVar1 = *piVar8;
    }
    piVar11 = piVar11 + uVar9;
    uVar3 = *0x4f790;
    while (uVar3 != 0) {
        fcn.00013388(piVar11,(arg1_00 - piVar11) + arg1_01,pcVar12,uVar3);
        iVar7 = fcn.000144b0(piVar11,iVar5 - (piVar11 - arg1_01 >> 1));
        puVar13 = puVar13 + 1;
        piVar11 = piVar11 + iVar7;
        uVar3 = *puVar13;
    }
    pcVar12 = L"&PATH=";
    fcn.0001465c(arg1_01,iVar5,0x4ffe8);
    iVar7 = 0;
    iVar1 = *piVar11;
    piVar8 = piVar11;
    while (iVar1 != 0) {
        piVar8 = piVar8 + 1;
        iVar7 = iVar7 + 1;
        iVar1 = *piVar8;
    }
    piVar11 = piVar11 + iVar7;
    if (uVar6 != 0) {
        do {
            fcn.00013388(piVar11,(arg1_00 - piVar11) + arg1_01,pcVar12,*(arg1_02 + uVar10));
            iVar7 = fcn.000144b0(piVar11,iVar5 - (piVar11 - arg1_01 >> 1));
            uVar10 = uVar10 + 1;
            piVar11 = piVar11 + iVar7;
        } while (uVar10 < uVar6);
    }
    *piVar11 = 0;
    bVar2 = false;
    iVar1 = *arg1_01;
    piVar11 = arg1_01;
    while (iVar1 != 0) {
        iVar1 = *piVar11;
        if (iVar1 == 0x3d) {
            bVar2 = true;
        }
        else if (iVar1 == 0x26) {
            bVar2 = false;
        }
        else if ((bVar2) && (iVar1 - 0x41U < 6)) {
            *piVar11 = iVar1 + 0x20;
        }
        piVar11 = piVar11 + 1;
        iVar1 = *piVar11;
    }
    return arg1_01;
}


/* fcn.00015304 @ 0x15304 */

bool fcn.00015304(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t arg2_00;
    
    arg2_00 = arg2;
    iVar1 = fcn.000148ac(noname_0,arg2_00);
    if (iVar1 != 0) {
        iVar2 = fcn.000148ac(arg1,arg2_00);
        if (iVar2 != 0) {
            iVar3 = fcn.000148ac(iVar1,arg3);
            if (iVar3 != 0) {
                iVar4 = fcn.000148ac(iVar2,arg3);
                if (iVar4 != 0) {
                    iVar3 = iVar3 - iVar1 >> 1;
                    if (iVar3 == iVar4 - iVar2 >> 1) {
                        iVar1 = fcn.00014870(iVar1,iVar2,iVar3);
                        return iVar1 == 0;
                    }
                }
            }
        }
    }
    return false;
}


/* fcn.000148ac @ 0x148ac */

int16_t * fcn.000148ac(uint32_t arg1,uint32_t arg2)

{
    int16_t iVar1;
    uint in_register_0000000c;
    int16_t *piVar2;
    int16_t *piVar3;
    uint in_register_00000014;
    int16_t *piVar4;
    int16_t *piVar5;
    
    piVar4 = CONCAT44(in_register_00000014,arg2);
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*piVar4 == 0) {
        return piVar2;
    }
    do {
        iVar1 = *piVar2;
        if (iVar1 == 0) {
            return NULL;
        }
        piVar3 = piVar2;
        piVar5 = piVar4;
        if (iVar1 == *piVar4) {
            do {
                if (iVar1 == 0) break;
                piVar3 = piVar3 + 1;
                piVar5 = piVar5 + 1;
                iVar1 = *piVar3;
            } while (iVar1 == *piVar5);
        }
        if (*piVar5 == 0) {
            return piVar2;
        }
        if (*piVar3 == 0) {
            return NULL;
        }
        piVar2 = piVar2 + 1;
    } while( true );
}


/* fcn.00013324 @ 0x13324 */

void fcn.00013324(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00013518(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00013518 @ 0x13518 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00013518(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x00013577;
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
code_r0x00013577:
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
        uVar21 = fcn.0001472c(arg4,0xf4241);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.000144b0(arg4,0xf4241);
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
            pcVar8 = 0x4fc3c;
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
code_r0x00013932:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x4fc3c;
            }
            else {
                pcVar8 = 0x4fc40;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x000136c9:
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
                    goto code_r0x0001386c;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x00013883;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x0001386c;
                        }
                        goto code_r0x00013883;
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
code_r0x0001386c:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x000136c9;
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
                        goto code_r0x000136c9;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x00013883;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x0001386c;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x00013883:
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
                        fcn.00014280(&var_68h_2,0x26,0,0x4fbd0);
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
                            goto code_r0x00013932;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x00013b1b;
                        if (uStack_a8 == 0x58) goto code_r0x00013c10;
                        if (uStack_a8 == 0x61) goto code_r0x00013b24;
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
                            goto code_r0x000136aa;
                        }
                        if (uStack_a8 != 100) goto code_r0x000136a6;
                        goto code_r0x00013c27;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x4fc3c;
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
                goto code_r0x00013e54;
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
                            iVar12 = 0x4fcdb;
                            goto code_r0x00013bd7;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x00013bd7:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x00013e54;
                    }
                    fcn.00014280(&var_68h_2,0x26,0,0x4fc34);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x00013b1b:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x00013b24:
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
                        goto code_r0x00013e54;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x000136a6;
                            goto code_r0x00013c14;
                        }
                        goto code_r0x00013c19;
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
                        goto code_r0x00013e54;
                    }
                    fcn.00014280(&var_68h_2,0x26,0,0x4fc18);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x00013e54;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x00013c10:
            uVar21 = uVar21 | 0x20;
code_r0x00013c14:
            uVar21 = uVar21 | 0x80;
code_r0x00013c19:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x00013c27:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x00013c69;
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
code_r0x00013c69:
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
code_r0x00013cf1:
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
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x00013cf1;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar10 = uVar5;
            do {
                uVar6 = uVar10 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = "0123456789ABCDEF."[uVar10 % uVar16];
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
code_r0x000136a6:
            pcVar8 = &uStack_a8;
code_r0x000136aa:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x00013e54:
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
                arg1 = fcn.00013354(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00013354(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
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
                arg1 = fcn.00013354(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
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
                arg1 = fcn.00013354(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
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


/* fcn.00012f78 @ 0x12f78 */

ulong fcn.00012f78(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t arg4_00;
    int iVar1;
    int64_t iVar2;
    uchar auStackX_10 [8];
    uchar auStack_58 [64];
    
    if ((arg2 != 0) && (iVar2 = fcn.00017e20(), iVar2 != 0)) {
        arg4_00 = fcn.00018350();
        iVar1 = fcn.00017940(iVar2,0x6fba8,0x20,arg4_00);
        if ((iVar1 == 1) &&
           (((iVar1 = fcn.00017d10(iVar2,arg2,arg3), iVar1 == 1 &&
             (iVar1 = fcn.00017d50(iVar2,auStack_58,auStackX_10), iVar1 == 1)) &&
            (iVar1 = fcn.00017fc0(iVar2), iVar1 == 1)))) {
            if (arg4 == '\0') {
                if (arg1 != auStack_58) {
                    section..text(arg1,auStack_58,0x20);
                }
            }
            else if ((auStack_58 != arg1) && (iVar2 = fcn.00010340(auStack_58,arg1,0x20), iVar2 != 0)) {
                return 0;
            }
            return 1;
        }
    }
    return 0;
}


/* fcn.000120dc @ 0x120dc */

//WARNING: Variable defined which should be unmapped: var_1fh

int64_t fcn.000120dc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t iVar2;
    unkbyte7 in_R9;
    int64_t var_1fh;
    ulong uStackX_20;
    int8_t var_3fh;
    int64_t var_40h;
    int64_t var_48h;
    int16_t var_5ch;
    int16_t var_5eh;
    int64_t var_a8h;
    uchar auStack_148 [32];
    uchar auStack_128 [191];
    uchar auStack_69 [32];
    uchar uStack_49;
    uchar auStack_48 [8];
    uchar auStack_40 [20];
    int16_t iStack_2c;
    ushort uStack_2a;
    
    uStackX_20 = 0;
    fcn.00010320(auStack_128,0x100);
    cVar1 = fcn.00014fbc(auStack_48);
    if ((cVar1 == '\0') || (cVar1 = fcn.00014fbc(auStack_40), cVar1 != '\x01')) {
        iVar2 = -0x7ffffffffffffffd;
    }
    else {
        uStack_49 = 0;
        uStack_2a = 2;
        iVar2 = (**(arg1 + 8))(arg1,arg2 & 0xffffffff,100000000,0xea,0x100,0x100,auStack_128);
        if (-1 < iVar2) {
            if (iStack_2c == 0) {
                fcn.00010320(arg3,0x100);
                iVar2 = (**arg1)(arg1,arg2 & 0xffffffff,100000000,0xea,0x100,0x100,arg3,&uStackX_20);
                if (iVar2 < 0) {
                    return iVar2;
                }
                if (auStack_128 != arg3) {
                    section..text(auStack_128,arg3,0x100);
                }
                section..text(auStack_148,auStack_69,0x20);
                fcn.00012f78(auStack_148,arg3 + 0xdf,0x21,CONCAT71(in_R9,1));
                if (*(arg3 + 0xfc) == 0) {
                    return 0;
                }
            }
            iVar2 = -0x7ffffffffffffff9;
        }
    }
    return iVar2;
}


/* fcn.00017e20 @ 0x17e20 */

int64_t fcn.00017e20(void)

{
    int iVar1;
    int64_t iVar2;
    
    iVar2 = fcn.00019290(0x20,0x4fff6,0);
    if (iVar2 != 0) {
        iVar1 = fcn.00017fc0(iVar2);
        if (iVar1 == 0) {
            fcn.00017ec0(iVar2);
            return 0;
        }
    }
    return iVar2;
}


/* fcn.00018350 @ 0x18350 */

ulong fcn.00018350(void)

{
    return 0x522b0;
}


/* fcn.00017940 @ 0x17940 */

uint fcn.00017940(int64_t arg1,uint32_t arg2,int arg3,uint32_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t arg1_00;
    uint in_register_00000014;
    uint in_R9;
    int64_t iStackX_20;
    int64_t in_stack_00000028;
    int iStack_148;
    int iStack_144;
    uint32_t uStack_140;
    uint32_t uStack_13c;
    int iStack_138;
    int iStack_134;
    uint uStack_130;
    uint8_t auStack_128 [144];
    uint8_t auStack_98 [152];
    
    iStackX_20 = CONCAT44(in_R9,arg4);
    uStack_130 = 0;
    iStack_134 = 0;
    if (((iStackX_20 != 0) && (iStackX_20 != *arg1)) && ((CONCAT44(in_register_00000014,arg2) == 0 || (arg3 < 0)))) {
        return 0;
    }
    if (iStackX_20 == 0) {
        if (*arg1 == 0) {
            return 0;
        }
        iStackX_20 = *arg1;
    }
    else {
        *arg1 = iStackX_20;
    }
    arg1_00 = iStackX_20;
    uVar1 = fcn.00018f60(arg1_00);
    if ((uVar1 & 2) != 0) {
        return 0;
    }
    if (CONCAT44(in_register_00000014,arg2) != 0) {
        iStack_134 = 1;
        iStack_138 = fcn.00019040(arg1_00);
        uStack_140 = iStack_138 < 0x91;
        uStack_13c = uStack_140 != 0;
        iVar2 = fcn.00017900(uStack_13c,0x52190,0x52130,0x32);
        if (iVar2 == 0) {
            return 0;
        }
        if (iStack_138 < arg3) {
            iVar2 = fcn.00018920(*(arg1 + 8),arg1_00,in_stack_00000028);
            if (((iVar2 == 0) || (iVar2 = fcn.00018a80(*(arg1 + 8),arg2,arg3), iVar2 == 0)) ||
               (iVar2 = fcn.00018ac0(*(arg1 + 8),auStack_128,&iStack_144), iVar2 == 0)) {
                return 0;
            }
        }
        else {
            if ((arg3 < 0) || (0x90 < arg3)) {
                return 0;
            }
            fcn.0001320c(auStack_128,arg2,arg3);
            iStack_144 = arg3;
        }
        if (iStack_144 != 0x90) {
            fcn.00013234(auStack_128 + iStack_144,0x90 - iStack_144);
        }
        for (iStack_148 = 0; iStack_148 < 0x90; iStack_148 = iStack_148 + 1) {
            auStack_98[iStack_148] = auStack_128[iStack_148] ^ 0x36;
        }
        iVar2 = fcn.00018920(*(arg1 + 0x10),arg1_00,in_stack_00000028);
        if (iVar2 == 0) goto code_r0x00017ccd;
        iVar2 = fcn.00019040(arg1_00);
        iVar2 = fcn.00018a80(*(arg1 + 0x10),auStack_98,iVar2);
        if (iVar2 == 0) goto code_r0x00017ccd;
        for (iStack_148 = 0; iStack_148 < 0x90; iStack_148 = iStack_148 + 1) {
            auStack_98[iStack_148] = auStack_128[iStack_148] ^ 0x5c;
        }
        iVar2 = fcn.00018920(*(arg1 + 0x18),arg1_00,in_stack_00000028);
        if (iVar2 == 0) goto code_r0x00017ccd;
        iVar2 = fcn.00019040(arg1_00);
        iVar2 = fcn.00018a80(*(arg1 + 0x18),auStack_98,iVar2);
        if (iVar2 == 0) goto code_r0x00017ccd;
    }
    iVar2 = fcn.00018b90(*(arg1 + 8),*(arg1 + 0x10));
    if (iVar2 != 0) {
        uStack_130 = 1;
    }
code_r0x00017ccd:
    if (iStack_134 != 0) {
        fcn.00019440(auStack_128,0x90);
        fcn.00019440(auStack_98,0x90);
    }
    return uStack_130;
}


/* fcn.00017d10 @ 0x17d10 */

ulong fcn.00017d10(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    
    if (*arg1 == 0) {
        uVar1 = 0;
    }
    else {
        uVar1 = fcn.00018a80(*(arg1 + 8),arg2,arg3);
    }
    return uVar1;
}


/* fcn.00017d50 @ 0x17d50 */

ulong fcn.00017d50(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong uVar2;
    int aiStack_58 [4];
    uchar auStack_48 [72];
    
    if ((((*arg1 == 0) || (iVar1 = fcn.00018ac0(*(arg1 + 8),auStack_48,aiStack_58), iVar1 == 0)) ||
        (iVar1 = fcn.00018b90(*(arg1 + 8),*(arg1 + 0x18)), iVar1 == 0)) ||
       ((iVar1 = fcn.00018a80(*(arg1 + 8),auStack_48,aiStack_58[0]), iVar1 == 0 ||
        (iVar1 = fcn.00018ac0(*(arg1 + 8),arg2,arg3), iVar1 == 0)))) {
        uVar2 = 0;
    }
    else {
        uVar2 = 1;
    }
    return uVar2;
}


/* fcn.00017fc0 @ 0x17fc0 */

bool fcn.00017fc0(uint32_t arg1)

{
    int iVar1;
    uint in_register_0000000c;
    
    fcn.00017e70(arg1);
    iVar1 = fcn.00017f20(CONCAT44(in_register_0000000c,arg1));
    if (iVar1 == 0) {
        fcn.00017e70(arg1);
    }
    return iVar1 != 0;
}


/* fcn.00015580 @ 0x15580 */

ulong fcn.00015580(uint32_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    ulong uVar2;
    uint in_register_0000000c;
    uint8_t *puVar3;
    uint in_R8;
    int iStack_14;
    uint32_t *puStack_10;
    
    puStack_10 = CONCAT44(in_R8,arg3);
    puVar3 = CONCAT44(in_register_0000000c,arg1);
    iStack_14 = 0;
    if ((puVar3 == NULL) || (puStack_10 == NULL)) {
        uVar2 = 0xffffffff;
    }
    else if (((arg2 == 0x80) || (arg2 == 0xc0)) || (arg2 == 0x100)) {
        if (arg2 == 0x80) {
            puStack_10[0x3c] = 10;
        }
        else if (arg2 == 0xc0) {
            puStack_10[0x3c] = 0xc;
        }
        else {
            puStack_10[0x3c] = 0xe;
        }
        *puStack_10 = *puVar3 << 0x18 ^ puVar3[1] << 0x10 ^ puVar3[2] << 8 ^ puVar3[3];
        puStack_10[1] = puVar3[4] << 0x18 ^ puVar3[5] << 0x10 ^ puVar3[6] << 8 ^ puVar3[7];
        puStack_10[2] = puVar3[8] << 0x18 ^ puVar3[9] << 0x10 ^ puVar3[10] << 8 ^ puVar3[0xb];
        puStack_10[3] = puVar3[0xc] << 0x18 ^ puVar3[0xd] << 0x10 ^ puVar3[0xe] << 8 ^ puVar3[0xf];
        if (arg2 == 0x80) {
            while( true ) {
                uVar1 = puStack_10[3];
                puStack_10[4] =
                     *puStack_10 ^ *((uVar1 >> 0x10 & 0xff) * 4 + 0x51530) & 0xff000000 ^
                     *((uVar1 >> 8 & 0xff) * 4 + 0x51130) & 0xff0000 ^ *((uVar1 & 0xff) * 4 + 0x50d00) & 0xff00 ^
                     *(str.cc + (uVar1 >> 0x18) * 4) & 0xff ^ *(iStack_14 * 4 + 0x51100);
                puStack_10[5] = puStack_10[1] ^ puStack_10[4];
                puStack_10[6] = puStack_10[2] ^ puStack_10[5];
                puStack_10[7] = puStack_10[3] ^ puStack_10[6];
                iStack_14 = iStack_14 + 1;
                if (iStack_14 == 10) break;
                puStack_10 = puStack_10 + 4;
            }
            uVar2 = 0;
        }
        else {
            puStack_10[4] = puVar3[0x10] << 0x18 ^ puVar3[0x11] << 0x10 ^ puVar3[0x12] << 8 ^ puVar3[0x13];
            puStack_10[5] = puVar3[0x14] << 0x18 ^ puVar3[0x15] << 0x10 ^ puVar3[0x16] << 8 ^ puVar3[0x17];
            if (arg2 == 0xc0) {
                while( true ) {
                    uVar1 = puStack_10[5];
                    puStack_10[6] =
                         *puStack_10 ^ *((uVar1 >> 0x10 & 0xff) * 4 + 0x51530) & 0xff000000 ^
                         *((uVar1 >> 8 & 0xff) * 4 + 0x51130) & 0xff0000 ^ *((uVar1 & 0xff) * 4 + 0x50d00) & 0xff00 ^
                         *(str.cc + (uVar1 >> 0x18) * 4) & 0xff ^ *(iStack_14 * 4 + 0x51100);
                    puStack_10[7] = puStack_10[1] ^ puStack_10[6];
                    puStack_10[8] = puStack_10[2] ^ puStack_10[7];
                    puStack_10[9] = puStack_10[3] ^ puStack_10[8];
                    iStack_14 = iStack_14 + 1;
                    if (iStack_14 == 8) break;
                    puStack_10[10] = puStack_10[4] ^ puStack_10[9];
                    puStack_10[0xb] = puStack_10[5] ^ puStack_10[10];
                    puStack_10 = puStack_10 + 6;
                }
                uVar2 = 0;
            }
            else {
                puStack_10[6] = puVar3[0x18] << 0x18 ^ puVar3[0x19] << 0x10 ^ puVar3[0x1a] << 8 ^ puVar3[0x1b];
                puStack_10[7] = puVar3[0x1c] << 0x18 ^ puVar3[0x1d] << 0x10 ^ puVar3[0x1e] << 8 ^ puVar3[0x1f];
                if (arg2 == 0x100) {
                    while( true ) {
                        uVar1 = puStack_10[7];
                        puStack_10[8] =
                             *puStack_10 ^ *((uVar1 >> 0x10 & 0xff) * 4 + 0x51530) & 0xff000000 ^
                             *((uVar1 >> 8 & 0xff) * 4 + 0x51130) & 0xff0000 ^ *((uVar1 & 0xff) * 4 + 0x50d00) & 0xff00
                             ^ *(str.cc + (uVar1 >> 0x18) * 4) & 0xff ^ *(iStack_14 * 4 + 0x51100);
                        puStack_10[9] = puStack_10[1] ^ puStack_10[8];
                        puStack_10[10] = puStack_10[2] ^ puStack_10[9];
                        puStack_10[0xb] = puStack_10[3] ^ puStack_10[10];
                        iStack_14 = iStack_14 + 1;
                        if (iStack_14 == 7) break;
                        uVar1 = puStack_10[0xb];
                        puStack_10[0xc] =
                             puStack_10[4] ^ *((uVar1 >> 0x18) * 4 + 0x51530) & 0xff000000 ^
                             *((uVar1 >> 0x10 & 0xff) * 4 + 0x51130) & 0xff0000 ^
                             *((uVar1 >> 8 & 0xff) * 4 + 0x50d00) & 0xff00 ^ *(str.cc + (uVar1 & 0xff) * 4) & 0xff;
                        puStack_10[0xd] = puStack_10[5] ^ puStack_10[0xc];
                        puStack_10[0xe] = puStack_10[6] ^ puStack_10[0xd];
                        puStack_10[0xf] = puStack_10[7] ^ puStack_10[0xe];
                        puStack_10 = puStack_10 + 8;
                    }
                    uVar2 = 0;
                }
                else {
                    uVar2 = 0;
                }
            }
        }
    }
    else {
        uVar2 = 0xfffffffe;
    }
    return uVar2;
}


/* fcn.00016030 @ 0x16030 */

int fcn.00016030(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    int iVar2;
    uint32_t *puVar3;
    int iStack_28;
    int iStack_24;
    uint32_t *puStack_18;
    
    iVar2 = fcn.00015580(arg1,arg2,arg3);
    if (-1 < iVar2) {
        iStack_28 = 0;
        iStack_24 = *(arg3 + 0xf0) << 2;
        for (; iStack_28 < iStack_24; iStack_28 = iStack_28 + 4) {
            uVar1 = *(arg3 + iStack_28 * 4);
            *(arg3 + iStack_28 * 4) = *(arg3 + iStack_24 * 4);
            *(arg3 + iStack_24 * 4) = uVar1;
            uVar1 = *(arg3 + (iStack_28 + 1) * 4);
            *(arg3 + (iStack_28 + 1) * 4) = *(arg3 + (iStack_24 + 1) * 4);
            *(arg3 + (iStack_24 + 1) * 4) = uVar1;
            uVar1 = *(arg3 + (iStack_28 + 2) * 4);
            *(arg3 + (iStack_28 + 2) * 4) = *(arg3 + (iStack_24 + 2) * 4);
            *(arg3 + (iStack_24 + 2) * 4) = uVar1;
            uVar1 = *(arg3 + (iStack_28 + 3) * 4);
            *(arg3 + (iStack_28 + 3) * 4) = *(arg3 + (iStack_24 + 3) * 4);
            *(arg3 + (iStack_24 + 3) * 4) = uVar1;
            iStack_24 = iStack_24 + -4;
        }
        puStack_18 = arg3;
        for (iStack_28 = 1; iStack_28 < *(arg3 + 0xf0); iStack_28 = iStack_28 + 1) {
            puVar3 = puStack_18 + 4;
            *puVar3 = *((*(str.cc + (*puVar3 >> 0x18) * 4) & 0xff) * 4 + 0x50900) ^
                      *((*(str.cc + (*puVar3 >> 0x10 & 0xff) * 4) & 0xff) * 4 + 0x50400) ^
                      *((*(str.cc + (*puVar3 >> 8 & 0xff) * 4) & 0xff) * 4 + 0x50000) ^
                      *((*(str.cc + (*puVar3 & 0xff) * 4) & 0xff) * 4 + 0x51930);
            puStack_18[5] =
                 *((*(str.cc + (puStack_18[5] >> 0x18) * 4) & 0xff) * 4 + 0x50900) ^
                 *((*(str.cc + (puStack_18[5] >> 0x10 & 0xff) * 4) & 0xff) * 4 + 0x50400) ^
                 *((*(str.cc + (puStack_18[5] >> 8 & 0xff) * 4) & 0xff) * 4 + 0x50000) ^
                 *((*(str.cc + (puStack_18[5] & 0xff) * 4) & 0xff) * 4 + 0x51930);
            puStack_18[6] =
                 *((*(str.cc + (puStack_18[6] >> 0x18) * 4) & 0xff) * 4 + 0x50900) ^
                 *((*(str.cc + (puStack_18[6] >> 0x10 & 0xff) * 4) & 0xff) * 4 + 0x50400) ^
                 *((*(str.cc + (puStack_18[6] >> 8 & 0xff) * 4) & 0xff) * 4 + 0x50000) ^
                 *((*(str.cc + (puStack_18[6] & 0xff) * 4) & 0xff) * 4 + 0x51930);
            puStack_18[7] =
                 *((*(str.cc + (puStack_18[7] >> 0x18) * 4) & 0xff) * 4 + 0x50900) ^
                 *((*(str.cc + (puStack_18[7] >> 0x10 & 0xff) * 4) & 0xff) * 4 + 0x50400) ^
                 *((*(str.cc + (puStack_18[7] >> 8 & 0xff) * 4) & 0xff) * 4 + 0x50000) ^
                 *((*(str.cc + (puStack_18[7] & 0xff) * 4) & 0xff) * 4 + 0x51930);
            puStack_18 = puVar3;
        }
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.00017870 @ 0x17870 */

void fcn.00017870(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int in_stack_00000030;
    
    if (in_stack_00000030 == 0) {
        fcn.00018660(arg1,arg2,arg3,arg4);
    }
    else {
        fcn.00018500(arg1,arg2,arg3,arg4);
    }
    return;
}


/* fcn.00013160 @ 0x13160 */

bool fcn.00013160(uint32_t arg1)

{
    uint in_register_0000000c;
    char *pcVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    pcVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    if (pcVar1 != NULL) {
        while( true ) {
            if ((*pcVar1 == '\x7f') && (pcVar1[1] == -1)) {
                return *(pcVar1 + 2) == 4;
            }
            uVar2 = *(pcVar1 + 2);
            if ((((uVar2 < 4) || (~uVar3 < uVar2)) || (uVar3 = uVar3 + uVar2, 0xfffffffffffffffb < uVar3)) ||
               (((*pcVar1 == '\x04' && (pcVar1[1] == '\x04')) && (*(pcVar1 + (uVar2 - 2)) != 0)))) break;
            pcVar1 = pcVar1 + uVar2;
        }
    }
    return false;
}


/* fcn.00015458 @ 0x15458 */

ulong fcn.00015458(void)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uchar uVar3;
    uint32_t auStackX_8 [8];
    
    fcn.00010400(1,auStackX_8,0,0);
    uVar3 = 4;
    if ((auStackX_8[0] & 0xfff0ff0) == 0x906a0) {
        if (*0xc0000002 < 0x4622) {
            uVar2 = *0xc0000002 - 0x4601;
            if ((*0xc0000002 - 0x4601 & 0xffffffdf) != 0) {
                if (*0xc0000002 != 0x4602) {
                    if (*0xc0000002 == 0x4609) goto code_r0x00015573;
                    uVar1 = *0xc0000002 - 0x460a;
                    uVar2 = uVar1;
                    if ((0xd < uVar1) || ((0x2401U >> (uVar1 & 0x1f) & 1) == 0)) {
                        if (*0xc0000002 == 0x4619) goto code_r0x00015573;
                        uVar2 = *0xc0000002 - 0x461a;
                        if (2 < *0xc0000002 - 0x461a) goto code_r0x000154b7;
                    }
                }
code_r0x000154b5:
                uVar3 = 2;
                goto code_r0x000154b7;
            }
        }
        else {
            uVar2 = 0;
            if (*0xc0000002 == 0x4622) goto code_r0x000154b5;
            if (((((*0xc0000002 != 0x4629) && (*0xc0000002 != 0x4641)) && (*0xc0000002 != 0x4645)) &&
                ((*0xc0000002 != 0x4649 && (*0xc0000002 != 0x4659)))) && (*0xc0000002 != 0x4661)) goto code_r0x000154b7;
        }
    }
    else {
        uVar1 = (auStackX_8[0] & 0xfff0ff0) - 0xb06a0;
        uVar2 = uVar1;
        if (uVar1 != 0) {
            if (uVar1 != 0x40) goto code_r0x000154b7;
            uVar2 = *0xc0000002;
            if ((*0xc0000002 != 0x4614) && (uVar1 = *0xc0000002 - 0x4617, uVar2 = uVar1, (uVar1 & 0xfffffffa) != 0))
            goto code_r0x000154b7;
            goto code_r0x000154b5;
        }
        uVar2 = *0xc0000002;
        if (*0xc0000002 < 0xa706) goto code_r0x000154b7;
        if (0xa70b < *0xc0000002) {
            uVar1 = *0xc0000002 - 0xa715;
            uVar2 = uVar1;
            if ((7 < uVar1) || ((0xc3U >> (uVar1 & 0x1f) & 1) == 0)) goto code_r0x000154b7;
        }
    }
code_r0x00015573:
    uVar3 = 0;
code_r0x000154b7:
    return CONCAT71(uVar2 >> 8,uVar3);
}


/* fcn.00013354 @ 0x13354 */

uchar * fcn.00013354(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.000144b0 @ 0x144b0 */

uint64_t fcn.000144b0(uint32_t arg1,int64_t arg2)

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


/* fcn.0001472c @ 0x1472c */

uint64_t fcn.0001472c(uint32_t arg1,int64_t arg2)

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


/* fcn.00014280 @ 0x14280 */

void fcn.00014280(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00013518(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.0001541c @ 0x1541c */

void fcn.0001541c(void)

{
    if (*0x4f800 == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x4f800 = '\x05';
        }
        else {
            *0x4f800 = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


/* fcn.00014a7c @ 0x14a7c */

int64_t fcn.00014a7c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    
    uVar2 = 0;
    if (arg1 == 0) {
        iVar4 = 0;
    }
    else {
        iVar4 = 1;
        uVar3 = uVar2;
        do {
            while ((((iVar1 = *(arg1 + uVar2 * 2), iVar1 != -0x10 && (iVar1 != -0xf)) && (iVar1 != 0)) &&
                   ((uVar3 = uVar3 + iVar4, arg2 == '\0' || (uVar3 <= arg3))))) {
                uVar2 = uVar2 + 1;
            }
            if (*(arg1 + uVar2 * 2) == 0) break;
            if ((arg2 != '\0') && (arg3 < uVar3)) {
                *arg4 = uVar2;
                break;
            }
            iVar4 = (*(arg1 + uVar2 * 2) != -0x10) + 1;
            uVar2 = uVar2 + 1;
        } while (*(arg1 + uVar2 * 2) != 0);
        iVar4 = uVar3 * 2;
    }
    return iVar4;
}


/* fcn.000103c0 @ 0x103c0 */

int64_t fcn.000103c0(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    ushort *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.0001457c @ 0x1457c */

ulong fcn.0001457c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    uint64_t uVar2;
    int64_t arg2_00;
    
    if ((((arg1 == 0) || (arg3 == 0)) || (1000000 < arg2)) || ((1000000 < arg4 || (arg2 == 0)))) {
        return 0x8000000000000002;
    }
    arg2_00 = arg4;
    if (arg2 < arg4) {
        arg2_00 = arg2;
    }
    uVar2 = fcn.000144b0(arg3,arg2_00);
    if ((arg2 <= arg4) && (arg2 <= uVar2)) {
        return 0x8000000000000005;
    }
    if (arg4 < uVar2) {
        uVar2 = arg4;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x00014624;
    }
    if (arg3 < arg1 + arg2 * 2) {
        return 0x800000000000000f;
    }
code_r0x00014624:
    if (uVar2 != 0) {
        arg3 = arg3 - arg1;
        do {
            iVar1 = *(arg3 + arg1);
            if (iVar1 == 0) break;
            *arg1 = iVar1;
            arg1 = arg1 + 2;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    *arg1 = 0;
    return 0;
}


/* fcn.0001465c @ 0x1465c */

ulong fcn.0001465c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    int16_t *piVar3;
    int64_t iVar4;
    uint64_t arg2_00;
    
    iVar4 = arg2;
    piVar3 = arg1;
    iVar1 = fcn.000144b0(arg1,arg2);
    arg2_00 = iVar4 - iVar1;
    if ((((arg1 == 0) || (arg3 == NULL)) || (1000000 < arg2)) || (arg2 == 0)) {
        return 0x8000000000000002;
    }
    if (arg2_00 == 0) {
        return 0x8000000000000004;
    }
    uVar2 = fcn.000144b0(arg3,arg2_00);
    if (arg2_00 <= uVar2) {
        return 0x8000000000000005;
    }
    if (arg3 <= piVar3) {
        if (piVar3 < arg3 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < piVar3) goto code_r0x000146fd;
    }
    if (arg3 < piVar3 + arg2) {
        return 0x800000000000000f;
    }
code_r0x000146fd:
    piVar3 = piVar3 + iVar1;
    for (; *arg3 != 0; arg3 = arg3 + 2) {
        *piVar3 = *arg3;
        piVar3 = piVar3 + 1;
    }
    *piVar3 = 0;
    return 0;
}


/* fcn.000104a3 @ 0x104a3 */

ulong fcn.000104a3(int64_t arg1)

{
    ulong uVar1;
    bool bVar2;
    
    uVar1 = rdrand();
    bVar2 = rdrandIsValid();
    if (!bVar2) {
        return 0;
    }
    *arg1 = uVar1;
    return 1;
}


/* fcn.00019550 @ 0x19550 */

ulong fcn.00019550(int64_t arg1)

{
    fcn.00013234(arg1,0x70);
    *arg1 = 0x6a09e667;
    *(arg1 + 4) = 0xbb67ae85;
    *(arg1 + 8) = 0x3c6ef372;
    *(arg1 + 0xc) = 0xa54ff53a;
    *(arg1 + 0x10) = 0x510e527f;
    *(arg1 + 0x14) = 0x9b05688c;
    *(arg1 + 0x18) = 0x1f83d9ab;
    *(arg1 + 0x1c) = 0x5be0cd19;
    *(arg1 + 0x6c) = 0x20;
    return 1;
}


/* fcn.00013234 @ 0x13234 */

uchar * fcn.00013234(int arg1,int arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    uchar *puVar2;
    uint in_register_00000014;
    uchar *puVar3;
    uchar in_R8B;
    
    iVar1 = CONCAT44(in_register_00000014,arg2);
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    if (iVar1 == 0) {
        return puVar2;
    }
    puVar3 = puVar2;
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = in_R8B;
        puVar3 = puVar3 + 1;
    }
    return puVar2;
}


/* fcn.00019690 @ 0x19690 */

ulong fcn.00019690(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    int arg1_00;
    uint64_t uVar2;
    uint in_R8;
    uint64_t uStackX_18;
    int64_t iStack_18;
    
    uStackX_18 = CONCAT44(in_R8,arg3);
    if (uStackX_18 != 0) {
        uVar1 = *(arg1 + 0x20) + arg3 * 8;
        if (uVar1 < *(arg1 + 0x20)) {
            *(arg1 + 0x24) = *(arg1 + 0x24) + 1;
        }
        *(arg1 + 0x24) = (uStackX_18 >> 0x1d) + *(arg1 + 0x24);
        *(arg1 + 0x20) = uVar1;
        uVar1 = *(arg1 + 0x68);
        uVar2 = uVar1;
        iStack_18 = arg2;
        if (uVar2 != 0) {
            arg1_00 = arg1 + 0x28;
            if ((uStackX_18 < 0x40) && (uStackX_18 + uVar2 < 0x40)) {
                fcn.0001320c(arg1_00 + uVar1,arg2,arg3);
                *(arg1 + 0x68) = *(arg1 + 0x68) + arg3;
                return 1;
            }
            fcn.0001320c(arg1_00 + uVar1,arg2,0x40 - uVar1);
            fcn.00019d80(arg1,arg1 + 0x28,1);
            iStack_18 = arg2 + (0x40 - uVar2);
            uStackX_18 = uStackX_18 - (0x40 - uVar2);
            *(arg1 + 0x68) = 0;
            fcn.00013234(arg1_00,0x40);
        }
        uVar2 = uStackX_18 / 0x40;
        if (uVar2 != 0) {
            fcn.00019d80(arg1,iStack_18,uVar2);
            iStack_18 = iStack_18 + uVar2 * 0x40;
            uStackX_18 = uStackX_18 % 0x40;
        }
        if (uStackX_18 != 0) {
            *(arg1 + 0x68) = uStackX_18;
            fcn.0001320c(arg1 + 0x28,iStack_18,uStackX_18);
        }
    }
    return 1;
}


/* fcn.000198e0 @ 0x198e0 */

ulong fcn.000198e0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint uVar2;
    int64_t arg2_00;
    uchar *puStackX_8;
    uint32_t uStack_28;
    uint64_t uStack_10;
    
    arg2_00 = arg2 + 0x28;
    uVar1 = *(arg2 + 0x68);
    *(arg2_00 + uVar1) = 0x80;
    uStack_10 = uVar1 + 1;
    if (0x38 < uStack_10) {
        fcn.00013234(arg2_00 + uStack_10,0x40 - uStack_10);
        uStack_10 = 0;
        fcn.00019d80(arg2,arg2_00,1);
    }
    fcn.00013234(arg2_00 + uStack_10,0x38 - uStack_10);
    *(arg2 + 0x60) = *(arg2 + 0x24) >> 0x18;
    *(arg2 + 0x61) = *(arg2 + 0x24) >> 0x10;
    *(arg2 + 0x62) = *(arg2 + 0x24) >> 8;
    *(arg2 + 99) = *(arg2 + 0x24);
    *(arg2 + 100) = *(arg2 + 0x20) >> 0x18;
    *(arg2 + 0x65) = *(arg2 + 0x20) >> 0x10;
    *(arg2 + 0x66) = *(arg2 + 0x20) >> 8;
    *(arg2 + 0x67) = *(arg2 + 0x20);
    fcn.00019d80(arg2,arg2 + 0x28,1);
    *(arg2 + 0x68) = 0;
    fcn.00019440(arg2 + 0x28,0x40);
    puStackX_8 = arg1;
    if (*(arg2 + 0x6c) == 0x1c) {
        for (uStack_28 = 0; uStack_28 < 7; uStack_28 = uStack_28 + 1) {
            uVar2 = *(arg2 + uStack_28 * 4);
            *puStackX_8 = uVar2 >> 0x18;
            puStackX_8[1] = uVar2 >> 0x10;
            puStackX_8[2] = uVar2 >> 8;
            puStackX_8[3] = uVar2;
            puStackX_8 = puStackX_8 + 4;
        }
    }
    else if (*(arg2 + 0x6c) == 0x20) {
        for (uStack_28 = 0; uStack_28 < 8; uStack_28 = uStack_28 + 1) {
            uVar2 = *(arg2 + uStack_28 * 4);
            *puStackX_8 = uVar2 >> 0x18;
            puStackX_8[1] = uVar2 >> 0x10;
            puStackX_8[2] = uVar2 >> 8;
            puStackX_8[3] = uVar2;
            puStackX_8 = puStackX_8 + 4;
        }
    }
    else {
        if (0x20 < *(arg2 + 0x6c)) {
            return 0;
        }
        for (uStack_28 = 0; uStack_28 < *(arg2 + 0x6c) / 4; uStack_28 = uStack_28 + 1) {
            uVar2 = *(arg2 + uStack_28 * 4);
            *puStackX_8 = uVar2 >> 0x18;
            puStackX_8[1] = uVar2 >> 0x10;
            puStackX_8[2] = uVar2 >> 8;
            puStackX_8[3] = uVar2;
            puStackX_8 = puStackX_8 + 4;
        }
    }
    return 1;
}


/* fcn.000131bc @ 0x131bc */

char * fcn.000131bc(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.00013160(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.000144e4 @ 0x144e4 */

ulong fcn.000144e4(int64_t arg1,uint32_t arg2)

{
    int16_t iVar1;
    uint64_t extraout_RAX;
    int16_t *piVar2;
    int64_t iVar3;
    uint in_register_00000014;
    int16_t iVar4;
    
    iVar4 = 0;
    if (((arg1 == 0) || (1000000 < CONCAT44(in_register_00000014,arg2))) || (CONCAT44(in_register_00000014,arg2) == 0)
       ) {
        return 0x8000000000000002;
    }
    piVar2 = 0x4ffc8;
    fcn.000144b0(0x4ffc8,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (piVar2 <= arg1) {
        if (arg1 < piVar2 + extraout_RAX + 1) {
            return 0x800000000000000f;
        }
        if (piVar2 < arg1) goto code_r0x00014555;
    }
    if (piVar2 < arg1 + CONCAT44(in_register_00000014,arg2) * 2) {
        return 0x800000000000000f;
    }
code_r0x00014555:
    iVar1 = 0x47;
    iVar3 = piVar2 - arg1;
    do {
        *arg1 = iVar1;
        arg1 = arg1 + 2;
        iVar1 = *(iVar3 + arg1);
    } while (iVar1 != 0);
    *arg1 = iVar4;
    return 0;
}


/* fcn.00013388 @ 0x13388 */

ulong fcn.00013388(uint32_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    char cVar1;
    uchar auVar2 [16];
    ulong uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    char *pcVar6;
    uint in_register_0000000c;
    int64_t iVar7;
    char *pcVar8;
    uint64_t uVar9;
    char *pcVar10;
    int64_t iVar11;
    bool bVar12;
    uint64_t in_stack_00000028;
    char cStack_38;
    char acStack_37 [47];
    
    pcVar6 = CONCAT44(in_register_0000000c,arg1);
    if (((pcVar6 == NULL) || (0x1e8481 < arg2)) || (0x25 < in_stack_00000028)) {
        uVar3 = 0x8000000000000002;
    }
    else {
        bVar12 = in_stack_00000028 != 0;
        uVar9 = 0x25;
        if (bVar12) {
            uVar9 = in_stack_00000028;
        }
        else {
            pcVar10 = &cStack_38;
            uVar5 = arg3;
            do {
                uVar4 = uVar5 / 0x10;
                pcVar10 = pcVar10 + 1;
                *pcVar10 = "0123456789ABCDEF."[uVar5 % 0x10];
                uVar5 = uVar4;
            } while (uVar4 != 0);
            in_stack_00000028 = pcVar10 - &cStack_38;
        }
        if (in_stack_00000028 < uVar9) {
            uVar9 = in_stack_00000028;
        }
        if (arg2 < uVar9 * 2 + 2) {
            uVar3 = 0x8000000000000005;
        }
        else {
            pcVar10 = pcVar6 + uVar9 * 2;
            cStack_38 = '\0';
            pcVar8 = &cStack_38;
            do {
                auVar2._8_8_ = 0;
                auVar2._0_8_ = arg3;
                uVar5 = SUB168(auVar2 / ZEXT816(0x10),0);
                pcVar8 = pcVar8 + 1;
                *pcVar8 = "0123456789ABCDEF."[arg3 % 0x10];
                arg3 = uVar5;
            } while (uVar5 != 0);
            iVar11 = pcVar8 - &cStack_38;
            if (bVar12) {
                pcVar6 = fcn.00013354(arg1,pcVar10,uVar9 - iVar11,SUB164(auVar2 / ZEXT816(0x10),0) + 0x30);
            }
            for (; iVar11 != 0; iVar11 = iVar11 + -1) {
                cVar1 = *pcVar8;
                iVar7 = 0;
                do {
                    if (pcVar10 <= pcVar6) break;
                    *pcVar6 = cVar1;
                    iVar7 = iVar7 + 1;
                    pcVar6[1] = cVar1 >> 7;
                    pcVar6 = pcVar6 + 2;
                } while (iVar7 < 1);
                pcVar8 = pcVar8 + -1;
            }
            iVar11 = 0;
            do {
                if (pcVar10 + 2 <= pcVar6) break;
                pcVar6[0] = '\0';
                pcVar6[1] = '\0';
                iVar11 = iVar11 + 1;
                pcVar6 = pcVar6 + 2;
            } while (iVar11 < 1);
            uVar3 = 0;
        }
    }
    return uVar3;
}


/* fcn.00014870 @ 0x14870 */

int64_t fcn.00014870(int64_t arg1,uint32_t arg2,uint32_t arg3)

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


/* fcn.00018500 @ 0x18500 */

void fcn.00018500(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint in_R8;
    int64_t iStackX_8;
    int64_t iStackX_10;
    uint64_t uStackX_18;
    int64_t in_stack_00000028;
    code *in_stack_00000030;
    uint64_t uStack_18;
    int64_t iStack_10;
    
    uStackX_18 = CONCAT44(in_R8,arg3);
    iStack_10 = in_stack_00000028;
    iStackX_8 = arg1;
    iStackX_10 = arg2;
    if (uStackX_18 != 0) {
        for (; uStackX_18 != 0; uStackX_18 = uStackX_18 - 0x10) {
            for (uStack_18 = 0; (uStack_18 < 0x10 && (uStack_18 < uStackX_18)); uStack_18 = uStack_18 + 1) {
                *(iStackX_10 + uStack_18) = *(iStackX_8 + uStack_18) ^ *(iStack_10 + uStack_18);
            }
            for (; uStack_18 < 0x10; uStack_18 = uStack_18 + 1) {
                *(iStackX_10 + uStack_18) = *(iStack_10 + uStack_18);
            }
            (*in_stack_00000030)(iStackX_10,iStackX_10,arg4);
            iStack_10 = iStackX_10;
            if (uStackX_18 < 0x11) break;
            iStackX_8 = iStackX_8 + 0x10;
            iStackX_10 = iStackX_10 + 0x10;
        }
        if (in_stack_00000028 != iStack_10) {
            fcn.0001320c(in_stack_00000028,iStack_10,0x10);
        }
    }
    return;
}


/* fcn.00018660 @ 0x18660 */

void fcn.00018660(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uchar uVar1;
    uint in_R8;
    int64_t iStackX_8;
    int64_t iStackX_10;
    uint64_t uStackX_18;
    int64_t in_stack_00000028;
    code *in_stack_00000030;
    uint64_t uStack_20;
    uint8_t auStack_18 [24];
    
    uStackX_18 = CONCAT44(in_R8,arg3);
    iStackX_8 = arg1;
    iStackX_10 = arg2;
    if (uStackX_18 != 0) {
        for (; uStackX_18 != 0; uStackX_18 = uStackX_18 - 0x10) {
            (*in_stack_00000030)(iStackX_8,auStack_18,arg4);
            for (uStack_20 = 0; (uStack_20 < 0x10 && (uStack_20 < uStackX_18)); uStack_20 = uStack_20 + 1) {
                uVar1 = *(iStackX_8 + uStack_20);
                *(iStackX_10 + uStack_20) = auStack_18[uStack_20] ^ *(in_stack_00000028 + uStack_20);
                *(in_stack_00000028 + uStack_20) = uVar1;
            }
            if (uStackX_18 < 0x11) {
                for (; uStack_20 < 0x10; uStack_20 = uStack_20 + 1) {
                    *(in_stack_00000028 + uStack_20) = *(iStackX_8 + uStack_20);
                }
                return;
            }
            iStackX_8 = iStackX_8 + 0x10;
            iStackX_10 = iStackX_10 + 0x10;
        }
    }
    return;
}


/* fcn.00019120 @ 0x19120 */

void fcn.00019120(int64_t arg1,int64_t arg2,int64_t arg3)

{
    fcn.00019100(0x52478,arg2,arg3 & 0xffffffff,arg1);
    fcn.0004d280();
    return;
}


/* fcn.00019100 @ 0x19100 */

void fcn.00019100(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    return;
}


/* fcn.00018f60 @ 0x18f60 */

uint fcn.00018f60(uint32_t arg1)

{
    uint in_register_0000000c;
    
    return *(CONCAT44(in_register_0000000c,arg1) + 0xc);
}


/* fcn.00019040 @ 0x19040 */

uint fcn.00019040(uint32_t arg1)

{
    uint in_register_0000000c;
    
    return *(CONCAT44(in_register_0000000c,arg1) + 0x38);
}


/* fcn.00017900 @ 0x17900 */

uint32_t fcn.00017900(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    if (arg1 == 0) {
        fcn.00019120(arg2,arg3,arg4 & 0xffffffff);
    }
    return arg1;
}


/* fcn.00018920 @ 0x18920 */

ulong fcn.00018920(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int iVar1;
    ulong uVar2;
    uint in_register_00000014;
    int64_t iVar3;
    
    iVar3 = CONCAT44(in_register_00000014,arg2);
    fcn.00019080(arg1,2);
    if (*arg1 != iVar3) {
        fcn.000187b0(arg1,1);
        *arg1 = iVar3;
        if (((*(arg1 + 0x10) & 0x100) == 0) && (*(iVar3 + 0x3c) != 0)) {
            *(arg1 + 0x28) = *(iVar3 + 0x18);
            uVar2 = fcn.00019290(*(iVar3 + 0x3c),0x4fff6,0);
            *(arg1 + 0x18) = uVar2;
            if (*(arg1 + 0x18) == 0) {
                fcn.0001c9f0(6,0x80,0x41,0);
                return 0;
            }
        }
    }
    if (((*(arg1 + 0x20) != 0) && (iVar1 = fcn.0001d310(*(arg1 + 0x20),0xffffffff,0xf8,7), iVar1 < 1)) &&
       (iVar1 != -2)) {
        return 0;
    }
    if ((*(arg1 + 0x10) & 0x100) == 0) {
        uVar2 = (**(*arg1 + 0x10))(arg1);
    }
    else {
        uVar2 = 1;
    }
    return uVar2;
}


/* fcn.00018a80 @ 0x18a80 */

ulong fcn.00018a80(int64_t arg1,uint32_t arg2,int arg3)

{
    ulong uVar1;
    uint in_register_00000014;
    uint in_R8;
    
    if (CONCAT44(in_R8,arg3) == 0) {
        uVar1 = 1;
    }
    else {
        uVar1 = (**(arg1 + 0x28))(arg1,CONCAT44(in_register_00000014,arg2),CONCAT44(in_R8,arg3));
    }
    return uVar1;
}


/* fcn.00018ac0 @ 0x18ac0 */

uint fcn.00018ac0(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint uVar1;
    uint in_R8;
    
    if (0x40 < *(*arg1 + 8)) {
        fcn.00019120(0x523e8,0x4fff6,0);
    }
    uVar1 = (**(*arg1 + 0x20))(arg1,arg2);
    if (CONCAT44(in_R8,arg3) != NULL) {
        *CONCAT44(in_R8,arg3) = *(*arg1 + 8);
    }
    if (*(*arg1 + 0x30) != 0) {
        (**(*arg1 + 0x30))(arg1);
        fcn.00019060(arg1,2);
    }
    fcn.00019440(*(arg1 + 0x18),*(*arg1 + 0x3c));
    return uVar1;
}


/* fcn.0001320c @ 0x1320c */

ulong * fcn.0001320c(uint32_t arg1,uint32_t arg2,int arg3)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    ulong *puVar2;
    uint in_register_00000014;
    ulong *puVar3;
    ulong *puVar4;
    uint64_t uVar5;
    uint in_R8;
    uint8_t uVar6;
    
    uVar1 = CONCAT44(in_R8,arg3);
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar6 = 0;
    if ((uVar1 != 0) && (puVar2 != CONCAT44(in_register_00000014,arg2))) {
        puVar4 = CONCAT44(in_register_00000014,arg2);
        puVar3 = puVar4 + (uVar1 - 1);
        if ((puVar4 < puVar2) && (puVar2 <= puVar3)) {
            puVar4 = puVar2 + (uVar1 - 1);
            uVar6 = 1;
            uVar5 = uVar1;
        }
        else {
            uVar5 = arg3 & 7;
            puVar3 = puVar4;
            puVar4 = puVar2;
            for (uVar1 = uVar1 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
                *puVar4 = *puVar3;
                puVar3 = puVar3 + 1;
                puVar4 = puVar4 + 1;
            }
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + uVar6 * -2 + 1;
            puVar4 = puVar4 + uVar6 * -2 + 1;
        }
        return puVar2;
    }
    return puVar2;
}


/* fcn.00018b90 @ 0x18b90 */

ulong fcn.00018b90(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    uint32_t arg1_00;
    uint in_register_00000014;
    int64_t *piVar2;
    int64_t iStack_18;
    
    piVar2 = CONCAT44(in_register_00000014,arg2);
    if ((piVar2 == NULL) || (*piVar2 == 0)) {
        fcn.0001c9f0(6,0x6e,0x6f,0);
        uVar1 = 0;
    }
    else {
        if (*arg1 == *piVar2) {
            iStack_18 = *(arg1 + 0x18);
            fcn.00019060(arg1,4);
        }
        else {
            iStack_18 = 0;
        }
        arg1_00 = arg1;
        fcn.00018870(arg1_00);
        fcn.0001320c(arg1_00,arg2,0x30);
        fcn.00019080(arg1,0x400);
        *(arg1 + 0x18) = 0;
        *(arg1 + 0x20) = 0;
        if ((piVar2[3] != 0) && (*(*arg1 + 0x3c) != 0)) {
            if (iStack_18 == 0) {
                uVar1 = fcn.00019200(*(*arg1 + 0x3c),0x4fff6,0);
                *(arg1 + 0x18) = uVar1;
                if (*(arg1 + 0x18) == 0) {
                    fcn.0001c9f0(6,0x6e,0x41,0);
                    return 0;
                }
            }
            else {
                *(arg1 + 0x18) = iStack_18;
            }
            fcn.0001320c(*(arg1 + 0x18),piVar2[3],*(*arg1 + 0x3c));
        }
        *(arg1 + 0x28) = piVar2[5];
        if (piVar2[4] != 0) {
            uVar1 = fcn.0001d140(piVar2[4]);
            *(arg1 + 0x20) = uVar1;
            if (*(arg1 + 0x20) == 0) {
                fcn.00018870(arg1_00);
                return 0;
            }
        }
        if (*(*arg1 + 0x28) == 0) {
            uVar1 = 1;
        }
        else {
            uVar1 = (**(*arg1 + 0x28))(arg1,piVar2);
        }
    }
    return uVar1;
}


/* fcn.00019440 @ 0x19440 */

void fcn.00019440(uint32_t arg1,uint32_t arg2)

{
    fcn.00013234(arg1,arg2);
    return;
}


/* fcn.00019290 @ 0x19290 */

int64_t fcn.00019290(int arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    iVar1 = fcn.00019200(arg1,arg2,arg3 & 0xffffffff);
    if (iVar1 != 0) {
        fcn.00013234(iVar1,arg1);
    }
    return iVar1;
}


/* fcn.00019200 @ 0x19200 */

ulong fcn.00019200(int arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    uint in_register_0000000c;
    ulong in_R9;
    
    if ((*0x4f808 == NULL) || (*0x4f808 == fcn.00019200)) {
        if (CONCAT44(in_register_0000000c,arg1) == 0) {
            uVar1 = 0;
        }
        else {
            if (*0x4f810 != 0) {
                *0x4f810 = 0;
            }
            uVar1 = fcn.0004d044(arg1);
        }
    }
    else {
        uVar1 = (**0x4f808)(CONCAT44(in_register_0000000c,arg1),arg2,arg3 & 0xffffffff,in_R9,0);
    }
    return uVar1;
}


/* fcn.00017ec0 @ 0x17ec0 */

void fcn.00017ec0(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t iVar1;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if (iVar1 != 0) {
        fcn.00017e70(arg1);
        fcn.000188f0(*(iVar1 + 0x10));
        fcn.000188f0(*(iVar1 + 0x18));
        fcn.000188f0(*(iVar1 + 8));
        fcn.00019380(arg1,0x4fff6,0);
    }
    return;
}


/* fcn.00017e70 @ 0x17e70 */

void fcn.00017e70(uint32_t arg1)

{
    uint in_register_0000000c;
    ulong *puVar1;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    fcn.00018870(puVar1[2]);
    fcn.00018870(puVar1[3]);
    fcn.00018870(puVar1[1]);
    *puVar1 = 0;
    return;
}


/* fcn.00018870 @ 0x18870 */

ulong fcn.00018870(uint32_t arg1)

{
    int iVar1;
    uint in_register_0000000c;
    
    if (CONCAT44(in_register_0000000c,arg1) != 0) {
        fcn.000187b0(arg1,0);
        iVar1 = fcn.000190b0(arg1,0x400);
        if (iVar1 == 0) {
            fcn.0001d290(*(CONCAT44(in_register_0000000c,arg1) + 0x20));
        }
        fcn.00019440(arg1,0x30);
    }
    return 1;
}


/* fcn.000188f0 @ 0x188f0 */

void fcn.000188f0(int64_t arg1)

{
    fcn.00018870(arg1);
    fcn.00019380(arg1,0x4fff6,0);
    return;
}


/* fcn.00019380 @ 0x19380 */

void fcn.00019380(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    
    if ((*0x4f820 == NULL) || (*0x4f820 == fcn.00019380)) {
        fcn.0004d0f4(arg1);
    }
    else {
        (**0x4f820)(CONCAT44(in_register_0000000c,arg1),arg2,arg3 & 0xffffffff);
    }
    return;
}


/* fcn.000188d0 @ 0x188d0 */

void fcn.000188d0(void)

{
    fcn.00019290(0x30,0x4fff6,0);
    return;
}


/* fcn.00017f20 @ 0x17f20 */

ulong fcn.00017f20(int64_t arg1)

{
    ulong uVar1;
    
    if (*(arg1 + 0x10) == 0) {
        uVar1 = fcn.000188d0();
        *(arg1 + 0x10) = uVar1;
    }
    if (*(arg1 + 0x10) == 0) {
        uVar1 = 0;
    }
    else {
        if (*(arg1 + 0x18) == 0) {
            uVar1 = fcn.000188d0();
            *(arg1 + 0x18) = uVar1;
        }
        if (*(arg1 + 0x18) == 0) {
            uVar1 = 0;
        }
        else {
            if (*(arg1 + 8) == 0) {
                uVar1 = fcn.000188d0();
                *(arg1 + 8) = uVar1;
            }
            if (*(arg1 + 8) == 0) {
                uVar1 = 0;
            }
            else {
                uVar1 = 1;
            }
        }
    }
    return uVar1;
}


/* fcn.00019050 @ 0x19050 */

ulong fcn.00019050(int64_t arg1)

{
    return *(arg1 + 0x18);
}


/* fcn.0001c250 @ 0x1c250 */

ulong fcn.0001c250(int64_t arg1)

{
    fcn.00013234(arg1,0x60);
    *arg1 = 0x67452301;
    *(arg1 + 4) = 0xefcdab89;
    *(arg1 + 8) = 0x98badcfe;
    *(arg1 + 0xc) = 0x10325476;
    *(arg1 + 0x10) = 0xc3d2e1f0;
    return 1;
}


/* fcn.0001bb20 @ 0x1bb20 */

ulong fcn.0001bb20(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    int arg1_00;
    uint64_t uVar2;
    uint in_R8;
    uint64_t uStackX_18;
    int64_t iStack_18;
    
    uStackX_18 = CONCAT44(in_R8,arg3);
    if (uStackX_18 != 0) {
        uVar1 = *(arg1 + 0x14) + arg3 * 8;
        if (uVar1 < *(arg1 + 0x14)) {
            *(arg1 + 0x18) = *(arg1 + 0x18) + 1;
        }
        *(arg1 + 0x18) = (uStackX_18 >> 0x1d) + *(arg1 + 0x18);
        *(arg1 + 0x14) = uVar1;
        uVar1 = *(arg1 + 0x5c);
        uVar2 = uVar1;
        iStack_18 = arg2;
        if (uVar2 != 0) {
            arg1_00 = arg1 + 0x1c;
            if ((uStackX_18 < 0x40) && (uStackX_18 + uVar2 < 0x40)) {
                fcn.0001320c(arg1_00 + uVar1,arg2,arg3);
                *(arg1 + 0x5c) = *(arg1 + 0x5c) + arg3;
                return 1;
            }
            fcn.0001320c(arg1_00 + uVar1,arg2,0x40 - uVar1);
            fcn.0001c2b0(arg1,arg1 + 0x1c,1);
            iStack_18 = arg2 + (0x40 - uVar2);
            uStackX_18 = uStackX_18 - (0x40 - uVar2);
            *(arg1 + 0x5c) = 0;
            fcn.00013234(arg1_00,0x40);
        }
        uVar2 = uStackX_18 / 0x40;
        if (uVar2 != 0) {
            fcn.0001c2b0(arg1,iStack_18,uVar2);
            iStack_18 = iStack_18 + uVar2 * 0x40;
            uStackX_18 = uStackX_18 % 0x40;
        }
        if (uStackX_18 != 0) {
            *(arg1 + 0x5c) = uStackX_18;
            fcn.0001320c(arg1 + 0x1c,iStack_18,uStackX_18);
        }
    }
    return 1;
}


/* fcn.0001bd70 @ 0x1bd70 */

ulong fcn.0001bd70(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint uVar2;
    int64_t arg2_00;
    uint64_t uStack_18;
    
    arg2_00 = arg2 + 0x1c;
    uVar1 = *(arg2 + 0x5c);
    *(arg2_00 + uVar1) = 0x80;
    uStack_18 = uVar1 + 1;
    if (0x38 < uStack_18) {
        fcn.00013234(arg2_00 + uStack_18,0x40 - uStack_18);
        uStack_18 = 0;
        fcn.0001c2b0(arg2,arg2_00,1);
    }
    fcn.00013234(arg2_00 + uStack_18,0x38 - uStack_18);
    *(arg2 + 0x54) = *(arg2 + 0x18) >> 0x18;
    *(arg2 + 0x55) = *(arg2 + 0x18) >> 0x10;
    *(arg2 + 0x56) = *(arg2 + 0x18) >> 8;
    *(arg2 + 0x57) = *(arg2 + 0x18);
    *(arg2 + 0x58) = *(arg2 + 0x14) >> 0x18;
    *(arg2 + 0x59) = *(arg2 + 0x14) >> 0x10;
    *(arg2 + 0x5a) = *(arg2 + 0x14) >> 8;
    *(arg2 + 0x5b) = *(arg2 + 0x14);
    fcn.0001c2b0(arg2,arg2 + 0x1c,1);
    *(arg2 + 0x5c) = 0;
    fcn.00019440(arg2 + 0x1c,0x40);
    uVar2 = *arg2;
    *arg1 = uVar2 >> 0x18;
    *(arg1 + 1) = uVar2 >> 0x10;
    *(arg1 + 2) = uVar2 >> 8;
    *(arg1 + 3) = uVar2;
    uVar2 = *(arg2 + 4);
    *(arg1 + 4) = uVar2 >> 0x18;
    *(arg1 + 5) = uVar2 >> 0x10;
    *(arg1 + 6) = uVar2 >> 8;
    *(arg1 + 7) = uVar2;
    uVar2 = *(arg2 + 8);
    *(arg1 + 8) = uVar2 >> 0x18;
    *(arg1 + 9) = uVar2 >> 0x10;
    *(arg1 + 10) = uVar2 >> 8;
    *(arg1 + 0xb) = uVar2;
    uVar2 = *(arg2 + 0xc);
    *(arg1 + 0xc) = uVar2 >> 0x18;
    *(arg1 + 0xd) = uVar2 >> 0x10;
    *(arg1 + 0xe) = uVar2 >> 8;
    *(arg1 + 0xf) = uVar2;
    uVar2 = *(arg2 + 0x10);
    *(arg1 + 0x10) = uVar2 >> 0x18;
    *(arg1 + 0x11) = uVar2 >> 0x10;
    *(arg1 + 0x12) = uVar2 >> 8;
    *(arg1 + 0x13) = uVar2;
    return 1;
}


/* fcn.00019470 @ 0x19470 */

ulong fcn.00019470(int64_t arg1)

{
    fcn.00013234(arg1,0x70);
    *arg1 = 0xc1059ed8;
    *(arg1 + 4) = 0x367cd507;
    *(arg1 + 8) = 0x3070dd17;
    *(arg1 + 0xc) = 0xf70e5939;
    *(arg1 + 0x10) = 0xffc00b31;
    *(arg1 + 0x14) = 0x68581511;
    *(arg1 + 0x18) = 0x64f98fa7;
    *(arg1 + 0x1c) = 0xbefa4fa4;
    *(arg1 + 0x6c) = 0x1c;
    return 1;
}


/* fcn.00019630 @ 0x19630 */

void fcn.00019630(int64_t arg1,int64_t arg2,int64_t arg3)

{
    fcn.00019690(arg1,arg2,arg3);
    return;
}


/* fcn.00019660 @ 0x19660 */

void fcn.00019660(int64_t arg1,int64_t arg2)

{
    fcn.000198e0(arg1,arg2);
    return;
}


/* fcn.0001a3e0 @ 0x1a3e0 */

ulong fcn.0001a3e0(int64_t arg1)

{
    *arg1 = 0x8c3d37c819544da2;
    *(arg1 + 8) = 0x73e1996689dcd4d6;
    *(arg1 + 0x10) = 0x1dfab7ae32ff9c82;
    *(arg1 + 0x18) = 0x679dd514582f9fcf;
    *(arg1 + 0x20) = 0xf6d2b697bd44da8;
    *(arg1 + 0x28) = 0x77e36f7304c48942;
    *(arg1 + 0x30) = 0x3f9d85a86a1d36c8;
    *(arg1 + 0x38) = 0x1112e6ad91d692a1;
    *(arg1 + 0x40) = 0;
    *(arg1 + 0x48) = 0;
    *(arg1 + 0xd0) = 0;
    *(arg1 + 0xd4) = 0x1c;
    return 1;
}


/* fcn.0001a510 @ 0x1a510 */

ulong fcn.0001a510(int64_t arg1)

{
    *arg1 = 0x22312194fc2bf72c;
    *(arg1 + 8) = 0x9f555fa3c84c64c2;
    *(arg1 + 0x10) = 0x2393b86b6f53b151;
    *(arg1 + 0x18) = 0x963877195940eabd;
    *(arg1 + 0x20) = 0x96283ee2a88effe3;
    *(arg1 + 0x28) = 0xbe5e1e2553863992;
    *(arg1 + 0x30) = 0x2b0199fc2c85b8aa;
    *(arg1 + 0x38) = 0xeb72ddc81c52ca2;
    *(arg1 + 0x40) = 0;
    *(arg1 + 0x48) = 0;
    *(arg1 + 0xd0) = 0;
    *(arg1 + 0xd4) = 0x20;
    return 1;
}


/* fcn.0001a640 @ 0x1a640 */

ulong fcn.0001a640(int64_t arg1)

{
    *arg1 = 0xcbbb9d5dc1059ed8;
    *(arg1 + 8) = 0x629a292a367cd507;
    *(arg1 + 0x10) = 0x9159015a3070dd17;
    *(arg1 + 0x18) = 0x152fecd8f70e5939;
    *(arg1 + 0x20) = 0x67332667ffc00b31;
    *(arg1 + 0x28) = 0x8eb44a8768581511;
    *(arg1 + 0x30) = 0xdb0c2e0d64f98fa7;
    *(arg1 + 0x38) = 0x47b5481dbefa4fa4;
    *(arg1 + 0x40) = 0;
    *(arg1 + 0x48) = 0;
    *(arg1 + 0xd0) = 0;
    *(arg1 + 0xd4) = 0x30;
    return 1;
}


/* fcn.0001b340 @ 0x1b340 */

void fcn.0001b340(int64_t arg1,int64_t arg2,int64_t arg3)

{
    fcn.0001b0f0(arg1,arg2,arg3);
    return;
}


/* fcn.0001b0f0 @ 0x1b0f0 */

ulong fcn.0001b0f0(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t arg1_00;
    uint64_t uVar1;
    uint32_t in_R8;
    uint64_t uStackX_18;
    int64_t iStack_28;
    
    uStackX_18 = CONCAT44(in_R8,arg3);
    if (uStackX_18 != 0) {
        uVar1 = *(arg1 + 0x40) + uStackX_18 * 8;
        if (uVar1 < *(arg1 + 0x40)) {
            *(arg1 + 0x48) = *(arg1 + 0x48) + 1;
        }
        *(arg1 + 0x48) = (in_R8 >> 0x1d) + *(arg1 + 0x48);
        *(arg1 + 0x40) = uVar1;
        arg1_00 = arg1 + 0x50;
        iStack_28 = arg2;
        if (*(arg1 + 0xd0) != 0) {
            uVar1 = 0x80 - *(arg1 + 0xd0);
            if (uStackX_18 < uVar1) {
                fcn.0001320c(arg1_00 + *(arg1 + 0xd0),arg2,arg3);
                *(arg1 + 0xd0) = *(arg1 + 0xd0) + arg3;
                return 1;
            }
            fcn.0001320c(arg1_00 + *(arg1 + 0xd0),arg2,uVar1);
            *(arg1 + 0xd0) = 0;
            uStackX_18 = uStackX_18 - uVar1;
            iStack_28 = arg2 + uVar1;
            fcn.0001b370(arg1,arg1 + 0x50,1);
        }
        if (0x7f < uStackX_18) {
            fcn.0001b370(arg1,iStack_28,uStackX_18 / 0x80);
            iStack_28 = iStack_28 + uStackX_18;
            uStackX_18 = uStackX_18 % 0x80;
            iStack_28 = iStack_28 - uStackX_18;
        }
        if (uStackX_18 != 0) {
            fcn.0001320c(arg1_00,iStack_28,uStackX_18);
            *(arg1 + 0xd0) = uStackX_18;
        }
    }
    return 1;
}


/* fcn.0001b0c0 @ 0x1b0c0 */

void fcn.0001b0c0(int64_t arg1,int64_t arg2)

{
    fcn.0001a8a0(arg1,arg2);
    return;
}


/* fcn.0001a8a0 @ 0x1a8a0 */

ulong fcn.0001a8a0(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t arg2_00;
    ulong uVar3;
    uint in_register_0000000c;
    uchar *puStackX_8;
    uint64_t uStack_40;
    uchar uStack_30;
    uchar uStack_28;
    uchar uStack_20;
    uchar uStack_18;
    
    puStackX_8 = CONCAT44(in_register_0000000c,arg1);
    arg2_00 = arg2 + 0x50;
    uVar1 = *(arg2 + 0xd0);
    *(arg2_00 + uVar1) = 0x80;
    uStack_40 = uVar1 + 1;
    if (0x70 < uStack_40) {
        fcn.00013234(arg2_00 + uStack_40,0x80 - uStack_40);
        uStack_40 = 0;
        fcn.0001b370(arg2,arg2_00,1);
    }
    fcn.00013234(arg2_00 + uStack_40,0x70 - uStack_40);
    *(arg2 + 0xcf) = *(arg2 + 0x40);
    *(arg2 + 0xce) = *(arg2 + 0x40) >> 8;
    *(arg2 + 0xcd) = *(arg2 + 0x40) >> 0x10;
    *(arg2 + 0xcc) = *(arg2 + 0x40) >> 0x18;
    *(arg2 + 0xcb) = *(arg2 + 0x40) >> 0x20;
    *(arg2 + 0xca) = *(arg2 + 0x40) >> 0x28;
    *(arg2 + 0xc9) = *(arg2 + 0x40) >> 0x30;
    *(arg2 + 200) = *(arg2 + 0x40) >> 0x38;
    *(arg2 + 199) = *(arg2 + 0x48);
    *(arg2 + 0xc6) = *(arg2 + 0x48) >> 8;
    *(arg2 + 0xc5) = *(arg2 + 0x48) >> 0x10;
    *(arg2 + 0xc4) = *(arg2 + 0x48) >> 0x18;
    *(arg2 + 0xc3) = *(arg2 + 0x48) >> 0x20;
    *(arg2 + 0xc2) = *(arg2 + 0x48) >> 0x28;
    *(arg2 + 0xc1) = *(arg2 + 0x48) >> 0x30;
    *(arg2 + 0xc0) = *(arg2 + 0x48) >> 0x38;
    fcn.0001b370(arg2,arg2_00,1);
    if (puStackX_8 == NULL) {
        uVar3 = 0;
    }
    else {
        iVar2 = *(arg2 + 0xd4);
        if (iVar2 == 0x1c) {
            for (uStack_40 = 0; uStack_40 < 3; uStack_40 = uStack_40 + 1) {
                uVar3 = *(arg2 + uStack_40 * 8);
                *puStackX_8 = uVar3 >> 0x38;
                puStackX_8[1] = uVar3 >> 0x30;
                puStackX_8[2] = uVar3 >> 0x28;
                puStackX_8[3] = uVar3 >> 0x20;
                puStackX_8[4] = uVar3 >> 0x18;
                puStackX_8[5] = uVar3 >> 0x10;
                puStackX_8[6] = uVar3 >> 8;
                uStack_30 = uVar3;
                puStackX_8[7] = uStack_30;
                puStackX_8 = puStackX_8 + 8;
            }
            uVar3 = *(arg2 + 0x18);
            *puStackX_8 = uVar3 >> 0x38;
            puStackX_8[1] = uVar3 >> 0x30;
            puStackX_8[2] = uVar3 >> 0x28;
            puStackX_8[3] = uVar3 >> 0x20;
        }
        else if (iVar2 == 0x20) {
            for (uStack_40 = 0; uStack_40 < 4; uStack_40 = uStack_40 + 1) {
                uVar3 = *(arg2 + uStack_40 * 8);
                *puStackX_8 = uVar3 >> 0x38;
                puStackX_8[1] = uVar3 >> 0x30;
                puStackX_8[2] = uVar3 >> 0x28;
                puStackX_8[3] = uVar3 >> 0x20;
                puStackX_8[4] = uVar3 >> 0x18;
                puStackX_8[5] = uVar3 >> 0x10;
                puStackX_8[6] = uVar3 >> 8;
                uStack_28 = uVar3;
                puStackX_8[7] = uStack_28;
                puStackX_8 = puStackX_8 + 8;
            }
        }
        else if (iVar2 == 0x30) {
            for (uStack_40 = 0; uStack_40 < 6; uStack_40 = uStack_40 + 1) {
                uVar3 = *(arg2 + uStack_40 * 8);
                *puStackX_8 = uVar3 >> 0x38;
                puStackX_8[1] = uVar3 >> 0x30;
                puStackX_8[2] = uVar3 >> 0x28;
                puStackX_8[3] = uVar3 >> 0x20;
                puStackX_8[4] = uVar3 >> 0x18;
                puStackX_8[5] = uVar3 >> 0x10;
                puStackX_8[6] = uVar3 >> 8;
                uStack_20 = uVar3;
                puStackX_8[7] = uStack_20;
                puStackX_8 = puStackX_8 + 8;
            }
        }
        else {
            if (iVar2 != 0x40) {
                return 0;
            }
            for (uStack_40 = 0; uStack_40 < 8; uStack_40 = uStack_40 + 1) {
                uVar3 = *(arg2 + uStack_40 * 8);
                *puStackX_8 = uVar3 >> 0x38;
                puStackX_8[1] = uVar3 >> 0x30;
                puStackX_8[2] = uVar3 >> 0x28;
                puStackX_8[3] = uVar3 >> 0x20;
                puStackX_8[4] = uVar3 >> 0x18;
                puStackX_8[5] = uVar3 >> 0x10;
                puStackX_8[6] = uVar3 >> 8;
                uStack_18 = uVar3;
                puStackX_8[7] = uStack_18;
                puStackX_8 = puStackX_8 + 8;
            }
        }
        uVar3 = 1;
    }
    return uVar3;
}


/* fcn.0001a770 @ 0x1a770 */

ulong fcn.0001a770(int64_t arg1)

{
    *arg1 = 0x6a09e667f3bcc908;
    *(arg1 + 8) = 0xbb67ae8584caa73b;
    *(arg1 + 0x10) = 0x3c6ef372fe94f82b;
    *(arg1 + 0x18) = 0xa54ff53a5f1d36f1;
    *(arg1 + 0x20) = 0x510e527fade682d1;
    *(arg1 + 0x28) = 0x9b05688c2b3e6c1f;
    *(arg1 + 0x30) = 0x1f83d9abfb41bd6b;
    *(arg1 + 0x38) = 0x5be0cd19137e2179;
    *(arg1 + 0x40) = 0;
    *(arg1 + 0x48) = 0;
    *(arg1 + 0xd0) = 0;
    *(arg1 + 0xd4) = 0x40;
    return 1;
}


/* fcn.000190b0 @ 0x190b0 */

uint32_t fcn.000190b0(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    
    return *(CONCAT44(in_register_0000000c,arg1) + 0x10) & arg2;
}


/* fcn.000193e0 @ 0x193e0 */

void fcn.000193e0(uint32_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_register_0000000c;
    uint in_register_00000014;
    
    if (CONCAT44(in_register_0000000c,arg1) != 0) {
        if (CONCAT44(in_register_00000014,arg2) != 0) {
            fcn.00019440(arg1,arg2);
        }
        fcn.00019380(arg1,arg3,arg4 & 0xffffffff);
    }
    return;
}


/* fcn.000187b0 @ 0x187b0 */

void fcn.000187b0(uint32_t arg1,uint32_t arg2)

{
    int iVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*piVar2 != 0) {
        if (*(*piVar2 + 0x30) != 0) {
            iVar1 = fcn.000190b0(arg1,2);
            if (iVar1 == 0) {
                (**(*piVar2 + 0x30))(piVar2);
            }
        }
        if ((piVar2[3] != 0) && (0 < *(*piVar2 + 0x3c))) {
            iVar1 = fcn.000190b0(arg1,4);
            if ((iVar1 == 0) || (arg2 != 0)) {
                fcn.000193e0(piVar2[3],*(*piVar2 + 0x3c),0x4fff6,0);
                piVar2[3] = 0;
            }
        }
    }
    return;
}


/* fcn.0001d290 @ 0x1d290 */

void fcn.0001d290(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    if (piVar1 != NULL) {
        if ((*piVar1 != 0) && (*(*piVar1 + 0x18) != 0)) {
            (**(*piVar1 + 0x18))(piVar1);
        }
        fcn.00022720(piVar1[2]);
        fcn.00022720(piVar1[3]);
        fcn.00019380(arg1,0x4fff6,0);
    }
    return;
}


/* fcn.00019080 @ 0x19080 */

void fcn.00019080(int64_t arg1,int64_t arg2)

{
    *(arg1 + 0x10) = *(arg1 + 0x10) & ~arg2;
    return;
}


/* fcn.0001c9f0 @ 0x1c9f0 */

void fcn.0001c9f0(uint32_t arg1,uint32_t arg2,int arg3,int64_t arg4)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint in_stack_00000028;
    
    iVar2 = fcn.0001cd60();
    if (iVar2 != 0) {
        iVar1 = *(iVar2 + 0x200) + 1;
        uVar3 = iVar1 >> 0x1f & 0xf;
        *(iVar2 + 0x200) = (iVar1 + uVar3 & 0xf) - uVar3;
        if (*(iVar2 + 0x200) == *(iVar2 + 0x204)) {
            iVar1 = *(iVar2 + 0x204) + 1;
            uVar3 = iVar1 >> 0x1f & 0xf;
            *(iVar2 + 0x204) = (iVar1 + uVar3 & 0xf) - uVar3;
        }
        *(iVar2 + *(iVar2 + 0x200) * 4) = 0;
        *(iVar2 + 0x40 + *(iVar2 + 0x200) * 4) = arg1 << 0x18 | (arg2 & 0xfff) << 0xc | arg3 & 0xfffU;
        *(iVar2 + 0x140 + *(iVar2 + 0x200) * 8) = arg4;
        *(iVar2 + 0x1c0 + *(iVar2 + 0x200) * 4) = in_stack_00000028;
        if ((*(iVar2 + 0x100 + *(iVar2 + 0x200) * 4) & 1) != 0) {
            fcn.00019380(*(iVar2 + 0x80 + *(iVar2 + 0x200) * 8),0x4fff6,0);
            *(iVar2 + 0x80 + *(iVar2 + 0x200) * 8) = 0;
        }
        *(iVar2 + 0x100 + *(iVar2 + 0x200) * 4) = 0;
    }
    return;
}


/* fcn.0001d310 @ 0x1d310 */

int fcn.0001d310(uint32_t arg1,uint32_t arg2,uint32_t arg3,int64_t arg4)

{
    int iVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    uint in_stack_00000028;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if (((piVar2 == NULL) || (*piVar2 == 0)) || (*(*piVar2 + 0xc0) == 0)) {
        fcn.0001c9f0(6,0x89,0x93,0);
        iVar1 = -2;
    }
    else if ((arg2 == 0xffffffff) || (**piVar2 == arg2)) {
        if (*(*piVar2 + 0xf8) == 0) {
            if (piVar2[4] == 0) {
                fcn.0001c9f0(6,0x89,0x95,0);
                return -1;
            }
            if ((arg3 != 0xffffffff) && ((*(piVar2 + 4) & arg3) == 0)) {
                fcn.0001c9f0(6,0x89,0x94,0);
                return -1;
            }
        }
        iVar1 = (**(*piVar2 + 0xc0))(piVar2,arg4 & 0xffffffff,in_stack_00000028);
        if (iVar1 == -2) {
            fcn.0001c9f0(6,0x89,0x93,0);
        }
    }
    else {
        iVar1 = -1;
    }
    return iVar1;
}


/* fcn.00019060 @ 0x19060 */

void fcn.00019060(int64_t arg1,int64_t arg2)

{
    *(arg1 + 0x10) = *(arg1 + 0x10) | arg2;
    return;
}


/* fcn.0001d140 @ 0x1d140 */

ulong * fcn.0001d140(int64_t arg1)

{
    int iVar1;
    ulong *puVar2;
    
    if ((*arg1 == 0) || (*(*arg1 + 0x10) == 0)) {
        puVar2 = NULL;
    }
    else {
        puVar2 = fcn.00019200(0x50,0x4fff6,0);
        if (puVar2 == NULL) {
            fcn.0001c9f0(6,0x9c,0x41,0);
            puVar2 = NULL;
        }
        else {
            *puVar2 = *arg1;
            if (*(arg1 + 0x10) != 0) {
                fcn.000226c0(*(arg1 + 0x10));
            }
            puVar2[2] = *(arg1 + 0x10);
            if (*(arg1 + 0x18) != 0) {
                fcn.000226c0(*(arg1 + 0x18));
            }
            puVar2[3] = *(arg1 + 0x18);
            puVar2[5] = 0;
            puVar2[6] = 0;
            *(puVar2 + 4) = *(arg1 + 0x20);
            iVar1 = (**(*arg1 + 0x10))(puVar2,arg1);
            if (iVar1 < 1) {
                *puVar2 = 0;
                fcn.0001d290(puVar2);
                puVar2 = NULL;
            }
        }
    }
    return puVar2;
}


/* fcn.00018f70 @ 0x18f70 */

uint fcn.00018f70(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint uStack_18;
    uint auStack_10 [4];
    
    uVar1 = fcn.00018f40(*arg1);
    if ((uVar1 & 0x800) == 0) {
        uStack_18 = *(*arg1 + 0xc);
    }
    else {
        iVar2 = fcn.0001f970(arg1,0x25,0,auStack_10);
        if (iVar2 == 1) {
            uStack_18 = auStack_10[0];
        }
        else {
            uStack_18 = 0xffffffff;
        }
    }
    return uStack_18;
}


/* fcn.0001d4f0 @ 0x1d4f0 */

int fcn.0001d4f0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t arg2_00;
    int iVar1;
    int iStack_14;
    
    iStack_14 = arg3;
    if ((*arg1 == 4) && (*(arg1 + 8) != 0)) {
        arg2_00 = fcn.00023360(*(arg1 + 8));
        iVar1 = fcn.00023350(*(arg1 + 8));
        if (iVar1 < iStack_14) {
            iStack_14 = iVar1;
        }
        fcn.0001320c(arg2,arg2_00,iStack_14);
    }
    else {
        fcn.0001c9f0(0xd,0x87,0x6d,0);
        iVar1 = -1;
    }
    return iVar1;
}


/* fcn.0001d480 @ 0x1d480 */

ulong fcn.0001d480(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint32_t arg1_00;
    
    iVar2 = fcn.00022960();
    if (iVar2 == 0) {
        uVar3 = 0;
    }
    else {
        arg1_00 = iVar2;
        iVar1 = fcn.00023aa0(arg1_00,arg2,arg3 & 0xffffffff);
        if (iVar1 == 0) {
            fcn.00022980(arg1_00);
            uVar3 = 0;
        }
        else {
            fcn.000205f0(arg1,4,arg1_00);
            uVar3 = 1;
        }
    }
    return uVar3;
}


/* fcn.00018f40 @ 0x18f40 */

uint fcn.00018f40(int64_t arg1)

{
    return *(arg1 + 0x10);
}


/* fcn.0001f970 @ 0x1f970 */

int fcn.0001f970(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int iVar1;
    
    if (*arg1 == 0) {
        fcn.0001c9f0(6,0x7c,0x83,0);
        iVar1 = 0;
    }
    else if (*(*arg1 + 0x48) == 0) {
        fcn.0001c9f0(6,0x7c,0x84,0);
        iVar1 = 0;
    }
    else {
        iVar1 = (**(*arg1 + 0x48))(arg1,arg2 & 0xffffffff,arg3 & 0xffffffff);
        if (iVar1 == -1) {
            fcn.0001c9f0(6,0x7c,0x85,0);
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.0004d044 @ 0x4d044 */

uint * fcn.0004d044(int arg1)

{
    uint *puVar1;
    uint in_register_0000000c;
    
    puVar1 = fcn.00014414(arg1,CONCAT44(in_register_0000000c,arg1) + 0x10);
    if (puVar1 != NULL) {
        *puVar1 = 0x64686d63;
        *(puVar1 + 2) = CONCAT44(in_register_0000000c,arg1);
        puVar1 = puVar1 + 4;
    }
    return puVar1;
}


/* fcn.0004d070 @ 0x4d070 */

uint * fcn.0004d070(uint32_t arg1,int arg2)

{
    uint *puVar1;
    uint in_register_0000000c;
    uint *arg2_00;
    uint in_register_00000014;
    uint64_t arg3;
    
    arg3 = CONCAT44(in_register_00000014,arg2);
    arg2_00 = CONCAT44(in_register_0000000c,arg1);
    puVar1 = fcn.00014414(arg2_00,arg3 + 0x10);
    if (puVar1 != NULL) {
        *puVar1 = 0x64686d63;
        *(puVar1 + 2) = arg3;
        if (arg2_00 != NULL) {
            if (*(arg2_00 + -2) < arg3) {
                arg3 = *(arg2_00 + -2);
            }
            if ((arg3 != 0) && (puVar1 + 4 != arg2_00)) {
                section..text(puVar1 + 4,arg2_00,arg3);
            }
            (**(*0x6fbd8 + 0x48))(arg2_00 + -4);
        }
        puVar1 = puVar1 + 4;
    }
    return puVar1;
}


/* fcn.0004d0f4 @ 0x4d0f4 */

void fcn.0004d0f4(uint32_t arg1)

{
    uint in_register_0000000c;
    
    if (CONCAT44(in_register_0000000c,arg1) != 0) {
        (**(*0x6fbd8 + 0x48))(CONCAT44(in_register_0000000c,arg1) + -0x10);
    }
    return;
}


/* fcn.00019d80 @ 0x19d80 */

void fcn.00019d80(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint in_R8;
    int64_t iStackX_18;
    uint32_t uStack_98;
    uint32_t uStack_94;
    uint32_t uStack_90;
    uint32_t uStack_88;
    uint32_t uStack_84;
    uint32_t uStack_74;
    uint32_t uStack_70;
    uint8_t *puStack_68;
    uint32_t uStack_60;
    uint32_t uStack_5c;
    uint32_t auStack_48 [18];
    
    iStackX_18 = CONCAT44(in_R8,arg3);
    puStack_68 = arg2;
    while (iStackX_18 != 0) {
        uStack_98 = *arg1;
        uStack_88 = *(arg1 + 4);
        uStack_84 = *(arg1 + 8);
        uStack_60 = *(arg1 + 0xc);
        uStack_94 = *(arg1 + 0x10);
        uStack_74 = *(arg1 + 0x14);
        uStack_70 = *(arg1 + 0x18);
        uStack_5c = *(arg1 + 0x1c);
        for (uStack_90 = 0; uStack_90 < 0x10; uStack_90 = uStack_90 + 1) {
            uVar1 = *puStack_68 << 0x18 | puStack_68[1] << 0x10 | puStack_68[2] << 8 | puStack_68[3];
            puStack_68 = puStack_68 + 4;
            auStack_48[uStack_90] = uVar1;
            iVar2 = uVar1 + uStack_5c +
                            ((uStack_94 << 0x1a | uStack_94 >> 6) ^ (uStack_94 << 0x15 | uStack_94 >> 0xb) ^
                            (uStack_94 << 7 | uStack_94 >> 0x19)) + (uStack_94 & uStack_74 ^ ~uStack_94 & uStack_70) +
                            *(uStack_90 * 4 + 0x524a0);
            uVar1 = uStack_98 & uStack_88;
            uVar3 = uStack_98 & uStack_84;
            uVar4 = uStack_88 & uStack_84;
            uStack_5c = uStack_70;
            uStack_70 = uStack_74;
            uStack_74 = uStack_94;
            uStack_94 = uStack_60 + iVar2;
            uStack_60 = uStack_84;
            uStack_84 = uStack_88;
            uStack_88 = uStack_98;
            uStack_98 = iVar2 + ((uStack_98 << 0x1e | uStack_98 >> 2) ^ (uStack_98 << 0x13 | uStack_98 >> 0xd) ^
                                (uStack_98 << 10 | uStack_98 >> 0x16)) + (uVar1 ^ uVar3 ^ uVar4);
        }
        for (; uStack_90 < 0x40; uStack_90 = uStack_90 + 1) {
            uVar1 = auStack_48[uStack_90 + 1 & 0xf];
            uVar3 = auStack_48[uStack_90 + 0xe & 0xf];
            uVar1 = auStack_48[uStack_90 & 0xf] +
                    ((uVar1 << 0x19 | uVar1 >> 7) ^ (uVar1 << 0xe | uVar1 >> 0x12) ^ uVar1 >> 3) +
                    ((uVar3 << 0xf | uVar3 >> 0x11) ^ (uVar3 << 0xd | uVar3 >> 0x13) ^ uVar3 >> 10) +
                    auStack_48[uStack_90 + 9 & 0xf];
            auStack_48[uStack_90 & 0xf] = uVar1;
            iVar2 = uVar1 + uStack_5c +
                            ((uStack_94 << 0x1a | uStack_94 >> 6) ^ (uStack_94 << 0x15 | uStack_94 >> 0xb) ^
                            (uStack_94 << 7 | uStack_94 >> 0x19)) + (uStack_94 & uStack_74 ^ ~uStack_94 & uStack_70) +
                            *(uStack_90 * 4 + 0x524a0);
            uVar1 = uStack_98 & uStack_88;
            uVar3 = uStack_98 & uStack_84;
            uVar4 = uStack_88 & uStack_84;
            uStack_5c = uStack_70;
            uStack_70 = uStack_74;
            uStack_74 = uStack_94;
            uStack_94 = uStack_60 + iVar2;
            uStack_60 = uStack_84;
            uStack_84 = uStack_88;
            uStack_88 = uStack_98;
            uStack_98 = iVar2 + ((uStack_98 << 0x1e | uStack_98 >> 2) ^ (uStack_98 << 0x13 | uStack_98 >> 0xd) ^
                                (uStack_98 << 10 | uStack_98 >> 0x16)) + (uVar1 ^ uVar3 ^ uVar4);
        }
        *arg1 = *arg1 + uStack_98;
        *(arg1 + 4) = *(arg1 + 4) + uStack_88;
        *(arg1 + 8) = *(arg1 + 8) + uStack_84;
        *(arg1 + 0xc) = *(arg1 + 0xc) + uStack_60;
        *(arg1 + 0x10) = *(arg1 + 0x10) + uStack_94;
        *(arg1 + 0x14) = *(arg1 + 0x14) + uStack_74;
        *(arg1 + 0x18) = *(arg1 + 0x18) + uStack_70;
        *(arg1 + 0x1c) = *(arg1 + 0x1c) + uStack_5c;
        iStackX_18 = iStackX_18 + -1;
    }
    return;
}


/* fcn.0001b370 @ 0x1b370 */

void fcn.0001b370(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    uint64_t *puVar2;
    int64_t iVar3;
    uint in_R8;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iStackX_18;
    uint32_t uStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    int64_t iStack_100;
    uint64_t uStack_f0;
    uint64_t uStack_e8;
    uint64_t uStack_d0;
    uint64_t uStack_c8;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t auStack_88 [17];
    
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    iStackX_18 = CONCAT44(in_R8,arg3);
    iStack_100 = arg2;
    while (iStackX_18 != 0) {
        uStack_110 = *puVar2;
        uStack_f0 = puVar2[1];
        uStack_e8 = puVar2[2];
        uStack_c0 = puVar2[3];
        uStack_108 = puVar2[4];
        uStack_d0 = puVar2[5];
        uStack_c8 = puVar2[6];
        uStack_b8 = puVar2[7];
        for (uStack_118 = 0; uStack_118 < 0x10; uStack_118 = uStack_118 + 1) {
            uVar1 = *(iStack_100 + uStack_118 * 8) << 0x38 | *(iStack_100 + 1 + uStack_118 * 8) << 0x30 |
                    *(iStack_100 + 2 + uStack_118 * 8) << 0x28 | *(iStack_100 + 3 + uStack_118 * 8) << 0x20 |
                    *(iStack_100 + 4 + uStack_118 * 8) << 0x18 | *(iStack_100 + 5 + uStack_118 * 8) << 0x10 |
                    *(iStack_100 + 6 + uStack_118 * 8) << 8 | *(iStack_100 + 7 + uStack_118 * 8);
            auStack_88[uStack_118] = uVar1;
            iVar3 = uVar1 + uStack_b8 +
                            ((uStack_108 >> 0xe | uStack_108 << 0x32) ^ (uStack_108 >> 0x12 | uStack_108 << 0x2e) ^
                            (uStack_108 >> 0x29 | uStack_108 << 0x17)) +
                            (uStack_108 & uStack_d0 ^ ~uStack_108 & uStack_c8) + *(uStack_118 * 8 + 0x525a0);
            uVar1 = uStack_110 & uStack_f0;
            uVar4 = uStack_110 & uStack_e8;
            uVar5 = uStack_f0 & uStack_e8;
            uStack_b8 = uStack_c8;
            uStack_c8 = uStack_d0;
            uStack_d0 = uStack_108;
            uStack_108 = uStack_c0 + iVar3;
            uStack_c0 = uStack_e8;
            uStack_e8 = uStack_f0;
            uStack_f0 = uStack_110;
            uStack_110 = iVar3 + ((uStack_110 >> 0x1c | uStack_110 << 0x24) ^ (uStack_110 >> 0x22 | uStack_110 << 0x1e)
                                 ^ (uStack_110 >> 0x27 | uStack_110 << 0x19)) + (uVar1 ^ uVar4 ^ uVar5);
        }
        for (; uStack_118 < 0x50; uStack_118 = uStack_118 + 1) {
            uVar1 = auStack_88[uStack_118 + 1 & 0xf];
            uVar4 = auStack_88[uStack_118 + 0xe & 0xf];
            uVar1 = auStack_88[uStack_118 & 0xf] +
                    ((uVar1 >> 1 | uVar1 << 0x3f) ^ (uVar1 >> 8 | uVar1 << 0x38) ^ uVar1 >> 7) +
                    ((uVar4 >> 0x13 | uVar4 << 0x2d) ^ (uVar4 >> 0x3d | uVar4 << 3) ^ uVar4 >> 6) +
                    auStack_88[uStack_118 + 9 & 0xf];
            auStack_88[uStack_118 & 0xf] = uVar1;
            iVar3 = uVar1 + uStack_b8 +
                            ((uStack_108 >> 0xe | uStack_108 << 0x32) ^ (uStack_108 >> 0x12 | uStack_108 << 0x2e) ^
                            (uStack_108 >> 0x29 | uStack_108 << 0x17)) +
                            (uStack_108 & uStack_d0 ^ ~uStack_108 & uStack_c8) + *(uStack_118 * 8 + 0x525a0);
            uVar1 = uStack_110 & uStack_f0;
            uVar4 = uStack_110 & uStack_e8;
            uVar5 = uStack_f0 & uStack_e8;
            uStack_b8 = uStack_c8;
            uStack_c8 = uStack_d0;
            uStack_d0 = uStack_108;
            uStack_108 = uStack_c0 + iVar3;
            uStack_c0 = uStack_e8;
            uStack_e8 = uStack_f0;
            uStack_f0 = uStack_110;
            uStack_110 = iVar3 + ((uStack_110 >> 0x1c | uStack_110 << 0x24) ^ (uStack_110 >> 0x22 | uStack_110 << 0x1e)
                                 ^ (uStack_110 >> 0x27 | uStack_110 << 0x19)) + (uVar1 ^ uVar4 ^ uVar5);
        }
        *puVar2 = *puVar2 + uStack_110;
        puVar2[1] = puVar2[1] + uStack_f0;
        puVar2[2] = puVar2[2] + uStack_e8;
        puVar2[3] = puVar2[3] + uStack_c0;
        puVar2[4] = puVar2[4] + uStack_108;
        puVar2[5] = puVar2[5] + uStack_d0;
        puVar2[6] = puVar2[6] + uStack_c8;
        puVar2[7] = puVar2[7] + uStack_b8;
        iStack_100 = iStack_100 + 0x80;
        iStackX_18 = iStackX_18 + -1;
    }
    return;
}


/* fcn.0001c2b0 @ 0x1c2b0 */

void fcn.0001c2b0(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint8_t *puVar3;
    uint8_t *puVar4;
    uint8_t *puVar5;
    int iVar6;
    uint in_R8;
    int64_t iStackX_18;
    uint32_t uStack_78;
    uint32_t uStack_70;
    uint32_t uStack_6c;
    uint32_t uStack_68;
    uint32_t uStack_64;
    uint32_t uStack_60;
    uint8_t *puStack_58;
    uint32_t auStack_48 [18];
    
    iStackX_18 = CONCAT44(in_R8,arg3);
    uStack_6c = *arg1;
    uStack_70 = *(arg1 + 4);
    uStack_64 = *(arg1 + 8);
    uStack_68 = *(arg1 + 0xc);
    uStack_60 = *(arg1 + 0x10);
    puStack_58 = arg2;
    while( true ) {
        for (uStack_78 = 0; uStack_78 < 0x10; uStack_78 = uStack_78 + 1) {
            uVar1 = *puStack_58;
            puVar3 = puStack_58 + 1;
            puVar4 = puStack_58 + 2;
            puVar5 = puStack_58 + 3;
            puStack_58 = puStack_58 + 4;
            auStack_48[uStack_78] = uVar1 << 0x18 | *puVar3 << 0x10 | *puVar4 << 8 | *puVar5;
            uVar2 = (uStack_64 ^ uStack_68) & uStack_70 ^ uStack_68;
            iVar6 = uStack_60 + 0x5a827999;
            uStack_60 = uStack_68;
            uStack_68 = uStack_64;
            uStack_64 = uStack_70 << 0x1e | uStack_70 >> 2;
            uStack_70 = uStack_6c;
            uStack_6c = (uStack_6c << 5 | uStack_6c >> 0x1b) + iVar6 + uVar2 + auStack_48[uStack_78];
        }
        for (uStack_78 = 0; uStack_78 < 4; uStack_78 = uStack_78 + 1) {
            uVar2 = auStack_48[uStack_78] ^ auStack_48[uStack_78 + 2] ^ auStack_48[uStack_78 + 8] ^
                    auStack_48[uStack_78 + 0xd & 0xf];
            uVar2 = uVar2 << 1 | uVar2 >> 0x1f;
            auStack_48[uStack_78] = uVar2;
            iVar6 = ((uStack_64 ^ uStack_68) & uStack_70 ^ uStack_68) + uVar2 + 0x5a827999 + uStack_60;
            uStack_60 = uStack_68;
            uStack_68 = uStack_64;
            uStack_64 = uStack_70 << 0x1e | uStack_70 >> 2;
            uStack_70 = uStack_6c;
            uStack_6c = (uStack_6c << 5 | uStack_6c >> 0x1b) + iVar6;
        }
        for (; uStack_78 < 0x18; uStack_78 = uStack_78 + 1) {
            uVar2 = auStack_48[uStack_78 & 0xf] ^ auStack_48[uStack_78 + 2 & 0xf] ^ auStack_48[uStack_78 + 8 & 0xf] ^
                    auStack_48[uStack_78 + 0xd & 0xf];
            uVar2 = uVar2 << 1 | uVar2 >> 0x1f;
            auStack_48[uStack_78 & 0xf] = uVar2;
            iVar6 = (uStack_70 ^ uStack_64 ^ uStack_68) + uVar2 + 0x6ed9eba1 + uStack_60;
            uStack_60 = uStack_68;
            uStack_68 = uStack_64;
            uStack_64 = uStack_70 << 0x1e | uStack_70 >> 2;
            uStack_70 = uStack_6c;
            uStack_6c = (uStack_6c << 5 | uStack_6c >> 0x1b) + iVar6;
        }
        for (uStack_78 = 0; uStack_78 < 0x14; uStack_78 = uStack_78 + 1) {
            uVar2 = auStack_48[uStack_78 + 8 & 0xf] ^ auStack_48[uStack_78 + 10 & 0xf] ^ auStack_48[uStack_78 & 0xf] ^
                    auStack_48[uStack_78 + 5 & 0xf];
            uVar2 = uVar2 << 1 | uVar2 >> 0x1f;
            auStack_48[uStack_78 + 8 & 0xf] = uVar2;
            iVar6 = (uStack_70 & uStack_64 | (uStack_70 | uStack_64) & uStack_68) + uVar2 + -0x70e44324 + uStack_60;
            uStack_60 = uStack_68;
            uStack_68 = uStack_64;
            uStack_64 = uStack_70 << 0x1e | uStack_70 >> 2;
            uStack_70 = uStack_6c;
            uStack_6c = (uStack_6c << 5 | uStack_6c >> 0x1b) + iVar6;
        }
        for (uStack_78 = 4; uStack_78 < 0x18; uStack_78 = uStack_78 + 1) {
            uVar2 = auStack_48[uStack_78 + 8 & 0xf] ^ auStack_48[uStack_78 + 10 & 0xf] ^ auStack_48[uStack_78 & 0xf] ^
                    auStack_48[uStack_78 + 5 & 0xf];
            auStack_48[uStack_78 + 8 & 0xf] = uVar2 << 1 | uVar2 >> 0x1f;
            uVar2 = uStack_70 ^ uStack_64 ^ uStack_68;
            iVar6 = uStack_60 + 0xca62c1d6;
            uStack_60 = uStack_68;
            uStack_68 = uStack_64;
            uStack_64 = uStack_70 << 0x1e | uStack_70 >> 2;
            uStack_70 = uStack_6c;
            uStack_6c = (uStack_6c << 5 | uStack_6c >> 0x1b) + uVar2 + iVar6 + auStack_48[uStack_78 + 8 & 0xf];
        }
        *arg1 = *arg1 + uStack_6c;
        *(arg1 + 4) = *(arg1 + 4) + uStack_70;
        *(arg1 + 8) = *(arg1 + 8) + uStack_64;
        *(arg1 + 0xc) = *(arg1 + 0xc) + uStack_68;
        *(arg1 + 0x10) = *(arg1 + 0x10) + uStack_60;
        iStackX_18 = iStackX_18 + -1;
        if (iStackX_18 == 0) break;
        uStack_6c = *arg1;
        uStack_70 = *(arg1 + 4);
        uStack_64 = *(arg1 + 8);
        uStack_68 = *(arg1 + 0xc);
        uStack_60 = *(arg1 + 0x10);
    }
    return;
}


/* fcn.0001cd60 @ 0x1cd60 */

int64_t fcn.0001cd60(void)

{
    uint uVar1;
    int iVar2;
    int iStack_18;
    int64_t iStack_10;
    
    uVar1 = *0x717b0;
    iVar2 = fcn.00021680(0x40000,0);
    if (iVar2 == 0) {
        return 0;
    }
    iVar2 = fcn.00021040(0x6fc48,0x1cd10);
    if (iVar2 == 0) {
        iStack_18 = 0;
    }
    else {
        iStack_18 = *0x6fc4c;
    }
    if (iStack_18 == 0) {
        return 0;
    }
    iStack_10 = fcn.000210e0(0x7085c);
    if (iStack_10 == -1) {
        return 0;
    }
    if (iStack_10 == 0) {
        iVar2 = fcn.00021110(0x7085c,0xffffffff);
        if (iVar2 == 0) {
            return 0;
        }
        iStack_10 = fcn.00019290(0x208,0x4fff6,0);
        if (iStack_10 == 0) {
            fcn.00021110(0x7085c,0);
            return 0;
        }
        iVar2 = fcn.000215f0(2);
        if ((iVar2 == 0) || (iVar2 = fcn.00021110(0x7085c,iStack_10), iVar2 == 0)) {
            fcn.0001c930(iStack_10);
            fcn.00021110(0x7085c,0);
            return 0;
        }
        fcn.00021680(2,0);
    }
    *0x717b0 = uVar1;
    return iStack_10;
}


/* fcn.000210e0 @ 0x210e0 */

ulong fcn.000210e0(int64_t arg1)

{
    ulong uVar1;
    
    if (*arg1 < 0x100) {
        uVar1 = *(*arg1 * 8 + 0x70900);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00021110 @ 0x21110 */

bool fcn.00021110(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uint in_register_00000014;
    
    uVar1 = *arg1;
    if (uVar1 < 0x100) {
        *(*arg1 * 8 + 0x70900) = CONCAT44(in_register_00000014,arg2);
    }
    return uVar1 < 0x100;
}


/* fcn.0001c930 @ 0x1c930 */

void fcn.0001c930(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t iVar1;
    int iStack_18;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if (iVar1 != 0) {
        for (iStack_18 = 0; iStack_18 < 0x10; iStack_18 = iStack_18 + 1) {
            if ((*(iVar1 + 0x100 + iStack_18 * 4) & 1) != 0) {
                fcn.00019380(*(iVar1 + 0x80 + iStack_18 * 8),0x4fff6,0);
                *(iVar1 + 0x80 + iStack_18 * 8) = 0;
            }
            *(iVar1 + 0x100 + iStack_18 * 4) = 0;
        }
        fcn.00019380(arg1,0x4fff6,0);
    }
    return;
}


/* fcn.0001cd30 @ 0x1cd30 */

void fcn.0001cd30(void)

{
    *0x70858 = 1;
    fcn.00021080(0x7085c,0);
    return;
}


/* fcn.00021080 @ 0x21080 */

bool fcn.00021080(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    
    bVar1 = *0x6fc58 < 0x100;
    if (bVar1) {
        *arg1 = *0x6fc58;
        *0x6fc58 = *0x6fc58 + 1;
        *(*arg1 * 8 + 0x70900) = 0;
    }
    return bVar1;
}


/* fcn.00021680 @ 0x21680 */

ulong fcn.00021680(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    int iStack_48;
    int iStack_44;
    int iStack_40;
    int iStack_3c;
    int iStack_38;
    int iStack_34;
    int iStack_30;
    int iStack_2c;
    int iStack_28;
    int iStack_24;
    int iStack_20;
    int iStack_1c;
    int iStack_18;
    int iStack_14;
    
    if (*0x6fcbc == 0) {
        iVar1 = fcn.00021040(0x6fcc8,0x21270);
        if (iVar1 == 0) {
            iStack_48 = 0;
        }
        else {
            iStack_48 = *0x6fc64;
        }
        if (iStack_48 == 0) {
            uVar2 = 0;
        }
        else if ((arg1 & 0x40000U) == 0) {
            if ((arg1 & 0x80000U) == 0) {
                iVar1 = fcn.00021040(0x6fc78,0x21310);
                if (iVar1 == 0) {
                    iStack_40 = 0;
                }
                else {
                    iStack_40 = *0x6fc9c;
                }
                if (iStack_40 == 0) {
                    return 0;
                }
            }
            else {
                iVar1 = fcn.00021040(0x6fc78,0x21310);
                if (iVar1 == 0) {
                    iStack_44 = 0;
                }
                else {
                    iStack_44 = *0x6fc9c;
                }
                if (iStack_44 == 0) {
                    return 0;
                }
            }
            iVar1 = fcn.00021040(0x6fcb0,0x21340);
            if (iVar1 == 0) {
                iStack_3c = 0;
            }
            else {
                iStack_3c = *0x6fca8;
            }
            if (iStack_3c == 0) {
                uVar2 = 0;
            }
            else {
                if ((arg1 & 1U) != 0) {
                    iVar1 = fcn.00021040(0x6fcc0,0x213a0);
                    if (iVar1 == 0) {
                        iStack_38 = 0;
                    }
                    else {
                        iStack_38 = *0x6fc60;
                    }
                    if (iStack_38 == 0) {
                        return 0;
                    }
                }
                if ((arg1 & 2U) != 0) {
                    iVar1 = fcn.00021040(0x6fcc0,0x21360);
                    if (iVar1 == 0) {
                        iStack_34 = 0;
                    }
                    else {
                        iStack_34 = *0x6fc60;
                    }
                    if (iStack_34 == 0) {
                        return 0;
                    }
                }
                if ((arg1 & 0x10U) != 0) {
                    iVar1 = fcn.00021040(0x6fca0,0x21400);
                    if (iVar1 == 0) {
                        iStack_30 = 0;
                    }
                    else {
                        iStack_30 = *0x6fcb8;
                    }
                    if (iStack_30 == 0) {
                        return 0;
                    }
                }
                if ((arg1 & 4U) != 0) {
                    iVar1 = fcn.00021040(0x6fca0,0x213c0);
                    if (iVar1 == 0) {
                        iStack_2c = 0;
                    }
                    else {
                        iStack_2c = *0x6fcb8;
                    }
                    if (iStack_2c == 0) {
                        return 0;
                    }
                }
                if ((arg1 & 0x20U) != 0) {
                    iVar1 = fcn.00021040(0x6fc5c,0x21460);
                    if (iVar1 == 0) {
                        iStack_28 = 0;
                    }
                    else {
                        iStack_28 = *0x6fcc4;
                    }
                    if (iStack_28 == 0) {
                        return 0;
                    }
                }
                if ((arg1 & 8U) != 0) {
                    iVar1 = fcn.00021040(0x6fc5c,0x21420);
                    if (iVar1 == 0) {
                        iStack_24 = 0;
                    }
                    else {
                        iStack_24 = *0x6fcc4;
                    }
                    if (iStack_24 == 0) {
                        return 0;
                    }
                }
                if (((arg1 & 0x20000U) == 0) || (iVar1 = fcn.000211b0(), iVar1 != 0)) {
                    if ((arg1 & 0x80U) != 0) {
                        iVar1 = fcn.00021040(0x6fcac,0x214d0);
                        if (iVar1 == 0) {
                            iStack_20 = 0;
                        }
                        else {
                            iStack_20 = *0x6fc68;
                        }
                        if (iStack_20 == 0) {
                            return 0;
                        }
                    }
                    if ((arg1 & 0x40U) != 0) {
                        fcn.00020f20(*0x6fc70);
                        *0x6fc80 = arg2;
                        iVar1 = fcn.00021040(0x6fcac,0x21480);
                        if (iVar1 == 0) {
                            iStack_1c = 0;
                        }
                        else {
                            iStack_1c = *0x6fc68;
                        }
                        *0x6fc80 = 0;
                        fcn.00020f90(*0x6fc70);
                        if (iStack_1c < 1) {
                            return 0;
                        }
                    }
                    if ((arg1 & 0x100U) != 0) {
                        iVar1 = fcn.00021040(0x6fcb4,0x21510);
                        if (iVar1 == 0) {
                            iStack_18 = 0;
                        }
                        else {
                            iStack_18 = *0x6fc88;
                        }
                        if (iStack_18 == 0) {
                            return 0;
                        }
                    }
                    if ((arg1 & 0x10000U) != 0) {
                        iVar1 = fcn.00021040(0x6fc98,0x21560);
                        if (iVar1 == 0) {
                            iStack_14 = 0;
                        }
                        else {
                            iStack_14 = *0x6fc94;
                        }
                        if (iStack_14 == 0) {
                            return 0;
                        }
                    }
                    uVar2 = 1;
                }
                else {
                    uVar2 = 0;
                }
            }
        }
        else {
            uVar2 = 1;
        }
    }
    else {
        if ((arg1 & 0x40000U) == 0) {
            fcn.0001c9f0(0xf,0x74,0x46,0);
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00021040 @ 0x21040 */

ulong fcn.00021040(int64_t arg1,int64_t arg2)

{
    if (*arg1 == 0) {
        (*arg2)();
        *arg1 = 1;
    }
    return 1;
}


/* fcn.000215f0 @ 0x215f0 */

ulong fcn.000215f0(int64_t arg1)

{
    int iVar1;
    uint *puVar2;
    ulong uVar3;
    
    iVar1 = fcn.00021680(0,0);
    if (iVar1 == 0) {
        uVar3 = 0;
    }
    else {
        puVar2 = fcn.000211e0(1);
        if (puVar2 == NULL) {
            uVar3 = 0;
        }
        else {
            if ((arg1 & 1U) != 0) {
                *puVar2 = 1;
            }
            if ((arg1 & 2U) != 0) {
                puVar2[1] = 1;
            }
            if ((arg1 & 4U) != 0) {
                puVar2[2] = 1;
            }
            uVar3 = 1;
        }
    }
    return uVar3;
}


/* fcn.0001cfc0 @ 0x1cfc0 */

void fcn.0001cfc0(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t arg1_00;
    int64_t *piStackX_10;
    int iStack_38;
    int iStack_34;
    int iStack_30;
    uchar *puStack_28;
    int64_t iStack_20;
    
    iStack_38 = 0x50;
    puStack_28 = fcn.00019200(0x51,0x4fff6,0);
    if (puStack_28 != NULL) {
        *puStack_28 = 0;
        iStack_34 = 0;
        piStackX_10 = arg2;
        for (iStack_30 = 0; arg1_00 = puStack_28, iStack_30 < arg1; iStack_30 = iStack_30 + 1) {
            iStack_20 = *piStackX_10;
            if (iStack_20 == 0) {
                iStack_20 = 0x52820;
            }
            iVar1 = fcn.0001472c(iStack_20,0x1000);
            iStack_34 = iStack_34 + iVar1;
            if (iStack_38 < iStack_34) {
                iStack_38 = iStack_34 + 0x14;
                puStack_28 = fcn.000192e0(arg1_00,iStack_34 + 0x15,0x4fff6,0);
                if (puStack_28 == NULL) {
                    fcn.00019380(arg1_00,0x4fff6,0);
                    return;
                }
            }
            fcn.00021e10(puStack_28,iStack_20,iStack_38 + 1);
            piStackX_10 = piStackX_10 + 1;
        }
        iVar1 = fcn.0001cea0(arg1_00,3);
        if (iVar1 == 0) {
            fcn.00019380(arg1_00,0x4fff6,0);
        }
    }
    return;
}


/* fcn.000192e0 @ 0x192e0 */

ulong fcn.000192e0(uint32_t arg1,int arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint in_register_0000000c;
    uint in_register_00000014;
    
    if ((*0x4f818 == NULL) || (*0x4f818 == fcn.000192e0)) {
        if (CONCAT44(in_register_0000000c,arg1) == 0) {
            uVar1 = fcn.00019200(arg2,arg3,arg4 & 0xffffffff);
        }
        else if (CONCAT44(in_register_00000014,arg2) == 0) {
            fcn.00019380(arg1,arg3,arg4 & 0xffffffff);
            uVar1 = 0;
        }
        else {
            uVar1 = fcn.0004d070(arg1,arg2);
        }
    }
    else {
        uVar1 = (**0x4f818)(CONCAT44(in_register_0000000c,arg1),CONCAT44(in_register_00000014,arg2),arg3,
                            arg4 & 0xffffffff);
    }
    return uVar1;
}


/* fcn.00021e10 @ 0x21e10 */

int64_t fcn.00021e10(uint32_t arg1,uint32_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    uint in_register_0000000c;
    uint in_register_00000014;
    uint in_R8;
    char *pcStackX_8;
    int64_t iStackX_18;
    int64_t iStack_18;
    
    iStackX_18 = CONCAT44(in_R8,arg3);
    iStack_18 = 0;
    for (pcStackX_8 = CONCAT44(in_register_0000000c,arg1); (iStackX_18 != 0 && (*pcStackX_8 != '\0'));
        pcStackX_8 = pcStackX_8 + 1) {
        iStack_18 = iStack_18 + 1;
        iStackX_18 = iStackX_18 + -1;
    }
    iVar1 = fcn.00021d60(pcStackX_8,CONCAT44(in_register_00000014,arg2),iStackX_18);
    return iStack_18 + iVar1;
}


/* fcn.0001cea0 @ 0x1cea0 */

ulong fcn.0001cea0(uint32_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint in_register_0000000c;
    
    iVar2 = fcn.0001cd60();
    if (iVar2 == 0) {
        uVar3 = 0;
    }
    else {
        iVar1 = *(iVar2 + 0x200);
        if ((*(iVar2 + 0x100 + iVar1 * 4) & 1) != 0) {
            fcn.00019380(*(iVar2 + 0x80 + iVar1 * 8),0x4fff6,0);
            *(iVar2 + 0x80 + iVar1 * 8) = 0;
        }
        *(iVar2 + 0x100 + iVar1 * 4) = 0;
        *(iVar2 + 0x80 + iVar1 * 8) = CONCAT44(in_register_0000000c,arg1);
        *(iVar2 + 0x100 + iVar1 * 4) = arg2;
        uVar3 = 1;
    }
    return uVar3;
}


/* fcn.000226c0 @ 0x226c0 */

bool fcn.000226c0(int64_t arg1)

{
    int iVar1;
    int aiStack_14 [5];
    
    iVar1 = fcn.00021170(arg1 + 8,1,aiStack_14,*(arg1 + 0x40));
    return 0 < iVar1 && 1 < aiStack_14[0];
}


/* fcn.00022720 @ 0x22720 */

void fcn.00022720(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t iVar1;
    int aiStack_18 [6];
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if ((iVar1 != 0) && (fcn.00021170(arg1 + 8,0xffffffff,aiStack_18,*(iVar1 + 0x40)), aiStack_18[0] < 1)) {
        fcn.000227b0(arg1);
        fcn.00021000(*(iVar1 + 0x40));
        fcn.00022690(*(iVar1 + 0x38),0x28c20);
        fcn.00019380(arg1,0x4fff6,0);
    }
    return;
}


/* fcn.00022960 @ 0x22960 */

void fcn.00022960(void)

{
    fcn.00023240(4);
    return;
}


/* fcn.00023240 @ 0x23240 */

int64_t fcn.00023240(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.00019290(0x18,0x4fff6,0);
    if (iVar1 == 0) {
        fcn.0001c9f0(0xd,0x82,0x41,0);
        iVar1 = 0;
    }
    else {
        *(iVar1 + 4) = arg1;
    }
    return iVar1;
}


/* fcn.00023aa0 @ 0x23aa0 */

void fcn.00023aa0(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    
    fcn.000230e0(CONCAT44(in_register_0000000c,arg1),arg2,arg3);
    return;
}


/* fcn.000230e0 @ 0x230e0 */

ulong fcn.000230e0(int64_t arg1,int64_t arg2,int arg3)

{
    int arg3_00;
    ulong uVar1;
    ulong uVar2;
    uint64_t uStack_28;
    
    if (arg3 < 0) {
        if (arg2 == 0) {
            return 0;
        }
        uStack_28 = fcn.0001472c(arg2,0x1000);
    }
    else {
        uStack_28 = arg3;
    }
    if (uStack_28 < 0x7fffffff) {
        arg3_00 = uStack_28;
        if ((*arg1 <= uStack_28) || (*(arg1 + 8) == 0)) {
            uVar2 = *(arg1 + 8);
            uVar1 = fcn.000192e0(uVar2,arg3_00 + 1,0x4fff6,0);
            *(arg1 + 8) = uVar1;
            if (*(arg1 + 8) == 0) {
                fcn.0001c9f0(0xd,0xba,0x41,0);
                *(arg1 + 8) = uVar2;
                return 0;
            }
        }
        *arg1 = arg3_00;
        if (arg2 != 0) {
            fcn.0001320c(*(arg1 + 8),arg2,arg3_00);
            *(*(arg1 + 8) + uStack_28) = 0;
        }
        uVar2 = 1;
    }
    else {
        fcn.0001c9f0(0xd,0,0xdf,0);
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00022980 @ 0x22980 */

void fcn.00022980(uint32_t arg1)

{
    fcn.00023310(arg1);
    return;
}


/* fcn.00023310 @ 0x23310 */

void fcn.00023310(uint32_t arg1)

{
    uint in_register_0000000c;
    
    if (CONCAT44(in_register_0000000c,arg1) != 0) {
        fcn.000232b0(arg1,*(CONCAT44(in_register_0000000c,arg1) + 0x10) & 0x80);
    }
    return;
}


/* fcn.000205f0 @ 0x205f0 */

void fcn.000205f0(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint in_R8;
    uint32_t *puStackX_8;
    uint32_t uStackX_10;
    int64_t iStackX_18;
    uint32_t uStack_18;
    
    iStackX_18 = CONCAT44(in_R8,arg3);
    puStackX_8 = arg1;
    uStackX_10 = arg2;
    if (((*arg1 != 1) && (*arg1 != 5)) && (*(arg1 + 8) != 0)) {
        fcn.000238e0(&puStackX_8,0,0);
    }
    *puStackX_8 = uStackX_10;
    if (uStackX_10 == 1) {
        if (iStackX_18 == 0) {
            uStack_18 = 0;
        }
        else {
            uStack_18 = 0xff;
        }
        puStackX_8[2] = uStack_18;
    }
    else {
        *(puStackX_8 + 2) = iStackX_18;
    }
    return;
}


/* fcn.00023360 @ 0x23360 */

ulong fcn.00023360(int64_t arg1)

{
    return *(arg1 + 8);
}


/* fcn.00023350 @ 0x23350 */

uint fcn.00023350(int64_t arg1)

{
    return *arg1;
}


/* fcn.00020690 @ 0x20690 */

int64_t * fcn.00020690(uint32_t arg1,uint32_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    uint in_register_00000014;
    code *pcStack_18;
    code *pcStack_10;
    
    pcStack_18 = CONCAT44(in_register_00000014,arg2);
    pcStack_10 = CONCAT44(in_register_0000000c,arg1);
    piVar1 = fcn.00019290(0x70,0x4fff6,0);
    if (piVar1 == NULL) {
        piVar1 = NULL;
    }
    else {
        iVar2 = fcn.00019290(0x80,0x4fff6,0);
        *piVar1 = iVar2;
        if (iVar2 == 0) {
            fcn.00019380(*piVar1,0x4fff6,0);
            fcn.00019380(piVar1,0x4fff6,0);
            piVar1 = NULL;
        }
        else {
            if (pcStack_18 == NULL) {
                pcStack_18 = fcn.000148fc;
            }
            piVar1[1] = pcStack_18;
            if (pcStack_10 == NULL) {
                pcStack_10 = fcn.00020d00;
            }
            piVar1[2] = pcStack_10;
            *(piVar1 + 3) = 8;
            *(piVar1 + 0x1c) = 0x10;
            *(piVar1 + 0x24) = 8;
            *(piVar1 + 5) = 0x200;
            *(piVar1 + 0x2c) = 0x100;
        }
    }
    return piVar1;
}


/* fcn.000207d0 @ 0x207d0 */

ulong fcn.000207d0(int arg1,uint32_t arg2)

{
    int iVar1;
    ulong *puVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    uint in_register_00000014;
    uint auStack_28 [4];
    int64_t *piStack_18;
    ulong uStack_10;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    *(iVar3 + 0x68) = 0;
    if ((*(iVar3 + 0x28) <= (*(iVar3 + 0x30) * 0x100) / *(iVar3 + 0x18)) && (iVar1 = fcn.000209b0(arg1), iVar1 == 0)) {
        return 0;
    }
    piStack_18 = fcn.00020bc0(arg1,arg2,auStack_28);
    if (*piStack_18 == 0) {
        puVar2 = fcn.00019200(0x18,0x4fff6,0);
        if (puVar2 == NULL) {
            *(iVar3 + 0x68) = *(iVar3 + 0x68) + 1;
            return 0;
        }
        *puVar2 = CONCAT44(in_register_00000014,arg2);
        puVar2[1] = 0;
        *(puVar2 + 2) = auStack_28[0];
        *piStack_18 = puVar2;
        uStack_10 = 0;
        *(iVar3 + 0x4c) = *(iVar3 + 0x4c) + 1;
        *(iVar3 + 0x30) = *(iVar3 + 0x30) + 1;
    }
    else {
        uStack_10 = **piStack_18;
        **piStack_18 = CONCAT44(in_register_00000014,arg2);
        *(iVar3 + 0x50) = *(iVar3 + 0x50) + 1;
    }
    return uStack_10;
}


/* fcn.00020920 @ 0x20920 */

ulong fcn.00020920(int64_t arg1,uint32_t *arg2)

{
    int64_t *piVar1;
    ulong uVar2;
    uchar auStack_28 [40];
    
    *(arg1 + 0x68) = 0;
    piVar1 = fcn.00020bc0(arg1,arg2,auStack_28);
    if (*piVar1 == 0) {
        *(arg1 + 0x60) = *(arg1 + 0x60) + 1;
        uVar2 = 0;
    }
    else {
        uVar2 = **piVar1;
        *(arg1 + 0x5c) = *(arg1 + 0x5c) + 1;
    }
    return uVar2;
}


/* fcn.000148fc @ 0x148fc */

int64_t fcn.000148fc(uint32_t arg1,uint32_t arg2)

{
    uint in_register_0000000c;
    char *pcVar1;
    uint in_register_00000014;
    char *pcVar2;
    
    pcVar2 = CONCAT44(in_register_00000014,arg2);
    for (pcVar1 = CONCAT44(in_register_0000000c,arg1); (*pcVar1 != '\0' && (*pcVar1 == *pcVar2)); pcVar1 = pcVar1 + 1)
    {
        pcVar2 = pcVar2 + 1;
    }
    return *pcVar1 - *pcVar2;
}


/* fcn.0001d640 @ 0x1d640 */

void fcn.0001d640(int64_t arg1,int64_t arg2)

{
    fcn.000148fc(**arg1,*(*arg2 * 0x28 + 0x5ab10));
    return;
}


/* fcn.0001e5c0 @ 0x1e5c0 */

void fcn.0001e5c0(uint32_t *arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    fcn.0001e610(arg1,arg2,arg3,arg4);
    return;
}


/* fcn.0001e610 @ 0x1e610 */

int64_t fcn.0001e610(uint32_t *arg1,int64_t arg2,uint32_t arg3,int arg4)

{
    int iVar1;
    code *in_stack_00000028;
    uint32_t in_stack_00000030;
    uint32_t uStack_28;
    int iStack_24;
    uint32_t uStack_20;
    int iStack_1c;
    int64_t iStack_18;
    
    uStack_28 = 0;
    iStack_24 = 0;
    iStack_18 = 0;
    if (arg3 == 0) {
        iStack_18 = 0;
    }
    else {
        iStack_1c = 0;
        uStack_20 = arg3;
        while (iStack_1c < uStack_20) {
            uStack_28 = (iStack_1c + uStack_20) / 2;
            iStack_18 = arg2 + uStack_28 * arg4;
            iStack_24 = (*in_stack_00000028)(arg1,iStack_18);
            if (iStack_24 < 0) {
                uStack_20 = uStack_28;
            }
            else {
                if (iStack_24 < 1) break;
                iStack_1c = uStack_28 + 1;
            }
        }
        if ((iStack_24 == 0) || ((in_stack_00000030 & 1) != 0)) {
            if ((iStack_24 == 0) && ((in_stack_00000030 & 2) != 0)) {
                while ((0 < uStack_28 &&
                       (iVar1 = (*in_stack_00000028)(arg1,arg2 + (uStack_28 - 1) * arg4), iVar1 == 0))) {
                    uStack_28 = uStack_28 - 1;
                }
                iStack_18 = arg2 + uStack_28 * arg4;
            }
        }
        else {
            iStack_18 = 0;
        }
    }
    return iStack_18;
}


/* fcn.0001d710 @ 0x1d710 */

void fcn.0001d710(int64_t arg1,int64_t arg2)

{
    fcn.000148fc(*(*arg1 + 8),*(*arg2 * 0x28 + 0x5ab18));
    return;
}


/* fcn.00020d00 @ 0x20d00 */

uint32_t fcn.00020d00(uint32_t arg1)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint in_register_0000000c;
    uint8_t *puStackX_8;
    uint32_t uStack_28;
    uint32_t uStack_20;
    
    puStackX_8 = CONCAT44(in_register_0000000c,arg1);
    uStack_28 = 0;
    if ((puStackX_8 == NULL) || (*puStackX_8 == 0)) {
        uStack_28 = 0;
    }
    else {
        uStack_20 = 0x100;
        for (; *puStackX_8 != 0; puStackX_8 = puStackX_8 + 1) {
            uVar2 = uStack_20 | *puStackX_8;
            uStack_20 = uStack_20 + 0x100;
            uVar1 = (uVar2 >> 2 ^ *puStackX_8) & 0xf;
            uStack_28 = (uStack_28 << uVar1 | uStack_28 >> (0x20 - uVar1 & 0x3f)) ^ uVar2 * uVar2;
        }
        uStack_28 = uStack_28 >> 0x10 ^ uStack_28;
    }
    return uStack_28;
}


/* fcn.00013220 @ 0x13220 */

int64_t fcn.00013220(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    char cVar2;
    uint in_register_0000000c;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    
    if ((arg3 == 0) || (CONCAT44(in_register_0000000c,arg1) == arg2)) {
        return 0;
    }
    pcVar3 = CONCAT44(in_register_0000000c,arg1);
    do {
        pcVar4 = pcVar3;
        pcVar5 = arg2;
        if (arg3 == 0) break;
        arg3 = arg3 + -1;
        pcVar5 = arg2 + 1;
        pcVar4 = pcVar3 + 1;
        cVar2 = *arg2;
        cVar1 = *pcVar3;
        pcVar3 = pcVar4;
        arg2 = pcVar5;
    } while (cVar1 == cVar2);
    return pcVar4[-1] - pcVar5[-1];
}


/* fcn.0001d5b0 @ 0x1d5b0 */

void fcn.0001d5b0(int64_t arg1,int64_t arg2)

{
    fcn.00020690(arg1,arg2);
    return;
}


/* fcn.0001da90 @ 0x1da90 */

bool fcn.0001da90(void)

{
    bool bVar1;
    
    if (*0x6fc50 == 0) {
        *0x6fc50 = fcn.0001d5b0(0x1d7e0,0x1d920);
        bVar1 = *0x6fc50 != 0;
    }
    else {
        bVar1 = true;
    }
    return bVar1;
}


/* fcn.00024e60 @ 0x24e60 */

int64_t * fcn.00024e60(uint32_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t *piVar3;
    
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    if (piVar3 == NULL) {
        return NULL;
    }
    if ((*(piVar3 + 4) & 1) == 0) {
        return piVar3;
    }
    piVar1 = fcn.000204b0();
    if (piVar1 == NULL) {
        fcn.0001c9f0(8,0x65,0xd,0);
        return NULL;
    }
    *(piVar1 + 4) = *(piVar3 + 4) | 0xd;
    if (*(piVar3 + 0x14) < 1) {
code_r0x00024f2c:
        *(piVar1 + 0x14) = *(piVar3 + 0x14);
        *(piVar1 + 2) = piVar3[2];
        if (piVar3[1] != 0) {
            iVar2 = fcn.00021b40(piVar3[1],0x4fff6,0);
            piVar1[1] = iVar2;
            if (iVar2 == 0) goto code_r0x00024fd2;
        }
        if (*piVar3 == 0) goto code_r0x00024ffe;
        iVar2 = fcn.00021b40(*piVar3,0x4fff6,0);
        *piVar1 = iVar2;
        if (iVar2 != 0) goto code_r0x00024ffe;
    }
    else {
        iVar2 = fcn.00021c60(piVar3[3],*(piVar3 + 0x14),0x4fff6,0);
        piVar1[3] = iVar2;
        if (iVar2 != 0) goto code_r0x00024f2c;
    }
code_r0x00024fd2:
    fcn.00020510(piVar1);
    fcn.0001c9f0(8,0x65,0x41,0);
    piVar1 = NULL;
code_r0x00024ffe:
    return piVar1;
}


/* fcn.0001d5e0 @ 0x1d5e0 */

void fcn.0001d5e0(int arg1,uint32_t arg2)

{
    fcn.000207d0(arg1,arg2);
    return;
}


/* fcn.00020510 @ 0x20510 */

void fcn.00020510(uint32_t arg1)

{
    uint in_register_0000000c;
    ulong *puVar1;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    if (puVar1 != NULL) {
        if ((*(puVar1 + 4) & 4) != 0) {
            fcn.00019380(*puVar1,0x4fff6,0);
            fcn.00019380(puVar1[1],0x4fff6,0);
            puVar1[1] = 0;
            *puVar1 = 0;
        }
        if ((*(puVar1 + 4) & 8) != 0) {
            fcn.00019380(puVar1[3],0x4fff6,0);
            puVar1[3] = 0;
            *(puVar1 + 0x14) = 0;
        }
        if ((*(puVar1 + 4) & 1) != 0) {
            fcn.00019380(arg1,0x4fff6,0);
        }
    }
    return;
}


/* fcn.0001d610 @ 0x1d610 */

void fcn.0001d610(int64_t arg1,uint32_t *arg2)

{
    fcn.00020920(arg1,arg2);
    return;
}


/* fcn.0001e100 @ 0x1e100 */

uint64_t fcn.0001e100(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    
    arg1 = *arg1;
    uVar1 = *(arg1 + 0x14) - *(*arg2 * 0x28 + 0x5ab24);
    if (uVar1 == 0) {
        if (*(arg1 + 0x14) == 0) {
            uVar2 = 0;
        }
        else {
            uVar2 = fcn.00013220(*(arg1 + 0x18),*(*arg2 * 0x28 + 0x5ab28),*(arg1 + 0x14));
        }
    }
    else {
        uVar2 = uVar1;
    }
    return uVar2;
}


/* fcn.0001e1e0 @ 0x1e1e0 */

void fcn.0001e1e0(uint32_t *arg1,int64_t arg2,int64_t arg3)

{
    fcn.0001e5c0(arg1,arg2,arg3 & 0xffffffff,4);
    return;
}


/* fcn.0001e510 @ 0x1e510 */

uint fcn.0001e510(uint32_t arg1)

{
    uint uVar1;
    int64_t iVar2;
    uint32_t *puVar3;
    uint in_register_0000000c;
    ulong *puStack_48;
    uint32_t auStack_40 [2];
    ulong *puStack_38;
    ulong auStack_30 [6];
    
    auStack_30[0] = CONCAT44(in_register_0000000c,arg1);
    puStack_48 = auStack_30;
    if (*0x6fc50 != 0) {
        auStack_40[0] = 1;
        puStack_38 = auStack_30;
        iVar2 = fcn.0001d610(*0x6fc50,auStack_40);
        if (iVar2 != 0) {
            return *(*(iVar2 + 8) + 0x10);
        }
    }
    puVar3 = fcn.0001d6d0(&puStack_48,0x6a780,0x4a2);
    if (puVar3 == NULL) {
        uVar1 = 0;
    }
    else {
        uVar1 = *(*puVar3 * 0x28 + 0x5ab20);
    }
    return uVar1;
}


/* fcn.0001e460 @ 0x1e460 */

uint fcn.0001e460(uint32_t arg1)

{
    uint uVar1;
    int64_t iVar2;
    uint32_t *puVar3;
    uint in_register_0000000c;
    uchar *puStack_48;
    uint32_t auStack_40 [2];
    uchar *puStack_38;
    uchar auStack_30 [8];
    ulong uStack_28;
    
    uStack_28 = CONCAT44(in_register_0000000c,arg1);
    puStack_48 = auStack_30;
    if (*0x6fc50 != 0) {
        auStack_40[0] = 2;
        puStack_38 = auStack_30;
        iVar2 = fcn.0001d610(*0x6fc50,auStack_40);
        if (iVar2 != 0) {
            return *(*(iVar2 + 8) + 0x10);
        }
    }
    puVar3 = fcn.0001d7a0(&puStack_48,0x665d0,0x4a2);
    if (puVar3 == NULL) {
        uVar1 = 0;
    }
    else {
        uVar1 = *(*puVar3 * 0x28 + 0x5ab20);
    }
    return uVar1;
}


/* fcn.0001ddb0 @ 0x1ddb0 */

int64_t fcn.0001ddb0(int arg1)

{
    int64_t iVar1;
    uint32_t auStack_40 [2];
    uchar *puStack_38;
    uchar auStack_30 [16];
    int iStack_20;
    
    if ((arg1 < 0) || (0x4aa < arg1)) {
        if (*0x6fc50 == 0) {
            fcn.0001c9f0(8,0x67,0x65,0);
            iVar1 = 0;
        }
        else {
            auStack_40[0] = 3;
            puStack_38 = auStack_30;
            iStack_20 = arg1;
            iVar1 = fcn.0001d610(*0x6fc50,auStack_40);
            if (iVar1 == 0) {
                fcn.0001c9f0(8,0x67,0x65,0);
                iVar1 = 0;
            }
            else {
                iVar1 = *(iVar1 + 8);
            }
        }
    }
    else if ((arg1 == 0) || (*(arg1 * 0x28 + 0x5ab20) != 0)) {
        iVar1 = arg1 * 0x28 + 0x5ab10;
    }
    else {
        fcn.0001c9f0(8,0x67,0x65,0);
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.0001fa50 @ 0x1fa50 */

int fcn.0001fa50(uint32_t arg1,int arg2,int64_t arg3,int arg4)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    uint32_t arg1_00;
    uint in_register_0000000c;
    int64_t iVar5;
    int iStackX_20;
    int iStack_78;
    int iStack_74;
    uint32_t uStack_70;
    int iStack_6c;
    int iStack_68;
    uchar *puStack_60;
    int64_t iStack_50;
    char *pcStack_48;
    int iStack_3c;
    uchar uStack_30;
    uchar auStack_28 [40];
    
    iVar5 = CONCAT44(in_register_0000000c,arg1);
    iStack_6c = 0;
    puStack_60 = auStack_28;
    iStack_3c = 0x18;
    iStack_50 = 0;
    if (arg4 != 0) {
        iStackX_20 = arg4;
        if (arg4 == -1) {
            iStackX_20 = fcn.0001472c(arg3,0x1000);
        }
        iVar2 = *arg3;
        if ((iVar2 < 0x30) || (0x32 < iVar2)) {
            fcn.0001c9f0(0xd,100,0x7a,0);
        }
        else {
            iVar2 = iVar2 + -0x30;
            if (iStackX_20 + -1 < 1) {
                fcn.0001c9f0(0xd,100,0x8a,0);
            }
            else {
                iStack_78 = *(arg3 + 1);
                pcStack_48 = arg3 + 2;
                iStackX_20 = iStackX_20 + -2;
                while( true ) {
                    if (iStackX_20 < 1) {
                        if (puStack_60 != auStack_28) {
                            fcn.00019380(puStack_60,0x4fff6,0);
                        }
                        fcn.00024640(iStack_50);
                        return iStack_6c;
                    }
                    if ((iStack_78 != 0x2e) && (iStack_78 != 0x20)) break;
                    uStack_70 = 0;
                    bVar1 = false;
                    while (0 < iStackX_20) {
                        iStackX_20 = iStackX_20 + -1;
                        iStack_78 = *pcStack_48;
                        pcStack_48 = pcStack_48 + 1;
                        if ((iStack_78 == 0x20) || (iStack_78 == 0x2e)) break;
                        iVar3 = fcn.00024b00(iStack_78,4);
                        if (iVar3 == 0) {
                            fcn.0001c9f0(0xd,100,0x82,0);
                            goto code_r0x0001ff99;
                        }
                        if ((!bVar1) && (0x19999990 < uStack_70)) {
                            bVar1 = true;
                            if (iStack_50 == 0) {
                                iStack_50 = fcn.000246a0();
                            }
                            if ((iStack_50 == 0) || (iVar3 = fcn.000248c0(iStack_50,uStack_70), iVar3 == 0))
                            goto code_r0x0001ff99;
                        }
                        if (bVar1) {
                            iVar3 = fcn.00024000(iStack_50,10);
                            if ((iVar3 == 0) || (iVar3 = fcn.00023c60(iStack_50,iStack_78 + -0x30), iVar3 == 0))
                            goto code_r0x0001ff99;
                        }
                        else {
                            uStack_70 = uStack_70 * 10 + -0x30 + iStack_78;
                        }
                    }
                    arg1_00 = iStack_50;
                    if (iStack_6c == 0) {
                        if ((iVar2 < 2) && (0x27 < uStack_70)) {
                            fcn.0001c9f0(0xd,100,0x93,0);
                            goto code_r0x0001ff99;
                        }
                        if (bVar1) {
                            iVar3 = fcn.00023c60(arg1_00,iVar2 * 0x28);
                            if (iVar3 == 0) goto code_r0x0001ff99;
                        }
                        else {
                            uStack_70 = uStack_70 + iVar2 * 0x28;
                        }
                    }
                    iStack_74 = 0;
                    if (bVar1) {
                        iVar3 = fcn.00024530(arg1_00);
                        iStack_68 = (iVar3 + 6) / 7;
                        if (iStack_3c < iStack_68) {
                            if (puStack_60 != auStack_28) {
                                fcn.00019380(puStack_60,0x4fff6,0);
                            }
                            iStack_3c = iStack_68 + 0x20;
                            puStack_60 = fcn.00019200(iStack_3c,0x4fff6,0);
                            if (puStack_60 == NULL) goto code_r0x0001ff99;
                        }
                        while (iStack_68 != 0) {
                            iVar4 = fcn.00023ad0(arg1_00,0x80);
                            if (iVar4 == -1) goto code_r0x0001ff99;
                            uStack_30 = iVar4;
                            puStack_60[iStack_74] = uStack_30;
                            iStack_74 = iStack_74 + 1;
                            iStack_68 = iStack_68 + -1;
                        }
                    }
                    else {
                        do {
                            puStack_60[iStack_74] = uStack_70 & 0x7f;
                            iStack_74 = iStack_74 + 1;
                            uStack_70 = uStack_70 >> 7;
                        } while (uStack_70 != 0);
                    }
                    if (iVar5 == 0) {
                        iStack_6c = iStack_6c + iStack_74;
                    }
                    else {
                        if (arg2 < iStack_6c + iStack_74) {
                            fcn.0001c9f0(0xd,100,0x6b,0);
                            goto code_r0x0001ff99;
                        }
                        while (iStack_74 = iStack_74 + -1, 0 < iStack_74) {
                            *(iVar5 + iStack_6c) = puStack_60[iStack_74] | 0x80;
                            iStack_6c = iStack_6c + 1;
                        }
                        *(iVar5 + iStack_6c) = *puStack_60;
                        iStack_6c = iStack_6c + 1;
                    }
                }
                fcn.0001c9f0(0xd,100,0x83,0);
            }
        }
code_r0x0001ff99:
        if (puStack_60 != auStack_28) {
            fcn.00019380(puStack_60,0x4fff6,0);
        }
        fcn.00024640(iStack_50);
    }
    return 0;
}


/* fcn.00023020 @ 0x23020 */

int fcn.00023020(uint32_t arg1,int arg2,int arg3)

{
    int iStackX_18;
    int iStack_18;
    int iStack_14;
    
    iStack_18 = 1;
    if (arg2 < 0) {
        iStack_18 = -1;
    }
    else {
        iStackX_18 = arg3;
        if (0x1e < arg3) {
            for (; 0 < iStackX_18; iStackX_18 = iStackX_18 >> 7) {
                iStack_18 = iStack_18 + 1;
            }
        }
        if (arg1 == 2) {
            iStack_18 = iStack_18 + 3;
        }
        else {
            iStack_18 = iStack_18 + 1;
            if (0x7f < arg2) {
                for (iStack_14 = arg2; 0 < iStack_14; iStack_14 = iStack_14 >> 8) {
                    iStack_18 = iStack_18 + 1;
                }
            }
        }
        if (iStack_18 < 0x7fffffff - arg2) {
            iStack_18 = iStack_18 + arg2;
        }
        else {
            iStack_18 = -1;
        }
    }
    return iStack_18;
}


/* fcn.00022d90 @ 0x22d90 */

void fcn.00022d90(uint32_t *arg1,uint32_t arg2,int arg3,int arg4)

{
    int iVar1;
    int iVar2;
    int iStackX_20;
    uint8_t in_stack_00000028;
    int iStack_28;
    int iStack_24;
    uint8_t uStack_20;
    uint8_t *apuStack_18 [3];
    
    apuStack_18[0] = *arg1;
    if (arg2 == 0) {
        uStack_20 = 0;
    }
    else {
        uStack_20 = 0x20;
    }
    uStack_20 = uStack_20 | in_stack_00000028 & 0xc0;
    if (arg4 < 0x1f) {
        *apuStack_18[0] = uStack_20 | arg4 & 0x1f;
        apuStack_18[0] = apuStack_18[0] + 1;
    }
    else {
        *apuStack_18[0] = uStack_20 | 0x1f;
        iStack_28 = 0;
        for (iStack_24 = arg4; iVar1 = iStack_28, iStackX_20 = arg4, 0 < iStack_24; iStack_24 = iStack_24 >> 7) {
            iStack_28 = iStack_28 + 1;
        }
        while (iVar2 = iStack_28 + -1, 0 < iStack_28) {
            apuStack_18[0][iVar2 + 1] = iStackX_20 & 0x7f;
            if (iVar2 != iVar1 + -1) {
                apuStack_18[0][iVar2 + 1] = apuStack_18[0][iVar2 + 1] | 0x80;
            }
            iStackX_20 = iStackX_20 >> 7;
            iStack_28 = iVar2;
        }
        apuStack_18[0] = apuStack_18[0] + iVar1 + 1;
    }
    if (arg2 == 2) {
        *apuStack_18[0] = 0x80;
        apuStack_18[0] = apuStack_18[0] + 1;
    }
    else {
        fcn.00022f30(apuStack_18,arg3);
    }
    *arg1 = apuStack_18[0];
    return;
}


/* fcn.0001ffd0 @ 0x1ffd0 */

int64_t fcn.0001ffd0(int64_t arg1,uint32_t *arg2,int arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iStack_38;
    int iStack_30;
    int iStack_2c;
    uchar auStack_28 [8];
    ulong uStack_20;
    ulong uStack_18;
    
    uStack_18 = 0;
    uStack_20 = *arg2;
    uVar1 = fcn.000229a0(&uStack_20,&iStack_2c,&iStack_30,auStack_28);
    if ((uVar1 & 0x80) == 0) {
        if (iStack_30 == 6) {
            iVar2 = fcn.000200b0(arg1,&uStack_20,iStack_2c);
            if (iVar2 != 0) {
                *arg2 = uStack_20;
            }
            return iVar2;
        }
        iStack_38 = 0x74;
    }
    else {
        iStack_38 = 0x66;
    }
    fcn.0001c9f0(0xd,0x93,iStack_38,0);
    return 0;
}


/* fcn.0001d7a0 @ 0x1d7a0 */

void fcn.0001d7a0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    fcn.0001e5c0(arg1,arg2,arg3 & 0xffffffff,4);
    return;
}


/* fcn.0001d6d0 @ 0x1d6d0 */

void fcn.0001d6d0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    fcn.0001e5c0(arg1,arg2,arg3 & 0xffffffff,4);
    return;
}


/* fcn.0001e2f0 @ 0x1e2f0 */

ulong fcn.0001e2f0(int64_t arg1,uint32_t arg2)

{
    int arg2_00;
    int arg1_00;
    int64_t iVar1;
    int iStack_38;
    int64_t iStack_20;
    int64_t iStack_18;
    ulong uStack_10;
    
    if (arg2 == 0) {
        iStack_38 = fcn.0001e510(arg1);
        if (iStack_38 == 0) {
            iStack_38 = fcn.0001e460(arg1);
            if (iStack_38 == 0) goto code_r0x0001e344;
        }
        uStack_10 = fcn.0001ddb0(iStack_38);
    }
    else {
code_r0x0001e344:
        arg2_00 = fcn.0001fa50(0,0,arg1,-1);
        if (arg2_00 < 1) {
            uStack_10 = 0;
        }
        else {
            arg1_00 = fcn.00023020(0,arg2_00,6);
            if (arg1_00 < 0) {
                uStack_10 = 0;
            }
            else {
                iVar1 = fcn.00019200(arg1_00,0x4fff6,0);
                if (iVar1 == 0) {
                    fcn.0001c9f0(8,0x6c,0x41,0);
                    uStack_10 = 0;
                }
                else {
                    iStack_20 = iVar1;
                    fcn.00022d90(&iStack_20,0,arg2_00,6);
                    fcn.0001fa50(iStack_20,arg2_00,arg1,-1);
                    iStack_18 = iVar1;
                    uStack_10 = fcn.0001ffd0(0,&iStack_18,arg1_00);
                    fcn.00019380(iVar1,0x4fff6,0);
                }
            }
        }
    }
    return uStack_10;
}


/* fcn.0001e220 @ 0x1e220 */

uint fcn.0001e220(uint32_t arg1)

{
    uint uVar1;
    int64_t iVar2;
    uint32_t *puVar3;
    uint in_register_0000000c;
    int64_t aiStackX_8 [4];
    uint32_t auStack_18 [2];
    int64_t iStack_10;
    
    aiStackX_8[0] = CONCAT44(in_register_0000000c,arg1);
    if (aiStackX_8[0] == 0) {
        uVar1 = 0;
    }
    else if (*(aiStackX_8[0] + 0x10) == 0) {
        if (*(aiStackX_8[0] + 0x14) == 0) {
            uVar1 = 0;
        }
        else {
            if (*0x6fc50 != 0) {
                auStack_18[0] = 0;
                iStack_10 = aiStackX_8[0];
                iVar2 = fcn.0001d610(*0x6fc50,auStack_18);
                if (iVar2 != 0) {
                    return *(*(iVar2 + 8) + 0x10);
                }
            }
            puVar3 = fcn.0001e1e0(aiStackX_8,0x696c0,0x42f);
            if (puVar3 == NULL) {
                uVar1 = 0;
            }
            else {
                uVar1 = *(*puVar3 * 0x28 + 0x5ab20);
            }
        }
    }
    else {
        uVar1 = *(aiStackX_8[0] + 0x10);
    }
    return uVar1;
}


/* fcn.0001daf0 @ 0x1daf0 */

int fcn.0001daf0(int64_t arg1)

{
    int iVar1;
    
    iVar1 = *0x4f828;
    *0x4f828 = *0x4f828 + arg1;
    return iVar1;
}


/* fcn.0001db20 @ 0x1db20 */

uint fcn.0001db20(uint32_t arg1)

{
    int iVar1;
    int64_t *piVar2;
    uint in_register_0000000c;
    int iStack_68;
    int64_t aiStack_58 [5];
    int64_t iStack_30;
    int64_t iStack_28;
    int64_t iStack_20;
    ulong uStack_18;
    
    aiStack_58[0] = 0;
    aiStack_58[1] = 0;
    aiStack_58[2] = 0;
    aiStack_58[3] = 0;
    if ((*0x6fc50 == 0) && (iVar1 = fcn.0001da90(), iVar1 == 0)) {
        return 0;
    }
    piVar2 = fcn.00024e60(arg1);
    if (piVar2 == NULL) goto code_r0x0001dd5d;
    aiStack_58[4] = fcn.00019200(0x10,0x4fff6,0);
    aiStack_58[3] = aiStack_58[4];
    if (aiStack_58[4] != 0) {
        if ((*(piVar2 + 0x14) != 0) && (*(CONCAT44(in_register_0000000c,arg1) + 0x18) != 0)) {
            iStack_30 = fcn.00019200(0x10,0x4fff6,0);
            aiStack_58[0] = iStack_30;
            if (iStack_30 == 0) goto code_r0x0001dd3d;
        }
        if (*piVar2 != 0) {
            iStack_28 = fcn.00019200(0x10,0x4fff6,0);
            aiStack_58[1] = iStack_28;
            if (iStack_28 == 0) goto code_r0x0001dd3d;
        }
        if (piVar2[1] == 0) {
code_r0x0001dc9e:
            for (iStack_68 = 0; iStack_68 < 4; iStack_68 = iStack_68 + 1) {
                if (aiStack_58[iStack_68] != 0) {
                    *aiStack_58[iStack_68] = iStack_68;
                    *(aiStack_58[iStack_68] + 8) = piVar2;
                    uStack_18 = fcn.0001d5e0(*0x6fc50,aiStack_58[iStack_68]);
                    fcn.00019380(uStack_18,0x4fff6,0);
                }
            }
            *(piVar2 + 4) = *(piVar2 + 4) & 0xfffffff2;
            return piVar2[2];
        }
        iStack_20 = fcn.00019200(0x10,0x4fff6,0);
        aiStack_58[2] = iStack_20;
        if (iStack_20 != 0) goto code_r0x0001dc9e;
    }
code_r0x0001dd3d:
    fcn.0001c9f0(8,0x69,0x41,0);
code_r0x0001dd5d:
    for (iStack_68 = 0; iStack_68 < 4; iStack_68 = iStack_68 + 1) {
        fcn.00019380(aiStack_58[iStack_68],0x4fff6,0);
    }
    fcn.00020510(piVar2);
    return 0;
}


/* fcn.0001e8b0 @ 0x1e8b0 */

ulong fcn.0001e8b0(uint32_t arg1)

{
    int iVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if (piVar2 != NULL) {
        if (*piVar2 != 0) {
            if ((*(*piVar2 + 0x28) != 0) && (iVar1 = (**(*piVar2 + 0x28))(piVar2), iVar1 == 0)) {
                return 0;
            }
            if ((piVar2[0xe] != 0) && (*(*piVar2 + 0x30) != 0)) {
                fcn.00019440(piVar2[0xe],*(*piVar2 + 0x30));
            }
        }
        fcn.00019380(piVar2[0xe],0x4fff6,0);
        fcn.00013234(arg1,0xa0);
    }
    return 1;
}


/* fcn.00018f30 @ 0x18f30 */

ulong fcn.00018f30(int64_t arg1)

{
    return *arg1;
}


/* fcn.0001f500 @ 0x1f500 */

ulong fcn.0001f500(int64_t arg1,int64_t arg2,uint32_t *arg3,int64_t arg4)

{
    ulong uVar1;
    
    if (*(arg1 + 0x10) == 0) {
        fcn.0001c9f0(6,0xa7,0x94,0);
        uVar1 = 0;
    }
    else {
        uVar1 = fcn.0001ef80(arg1,arg2,arg3,arg4);
    }
    return uVar1;
}


/* fcn.0001f570 @ 0x1f570 */

uint64_t fcn.0001f570(int64_t arg1,uint32_t arg2,uint32_t *arg3,int64_t arg4)

{
    bool bVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint in_register_00000014;
    int64_t iStackX_10;
    uint32_t in_stack_00000028;
    uint32_t uStack_30;
    
    iStackX_10 = CONCAT44(in_register_00000014,arg2);
    uStack_30 = in_stack_00000028;
    if (*(arg1 + 0x10) == 0) {
        uVar4 = *(*arg1 + 4);
        iVar2 = fcn.000190d0(arg1,0x2000);
        if (iVar2 != 0) {
            uStack_30 = in_stack_00000028 + 7 + (in_stack_00000028 + 7 >> 0x1f & 7U) >> 3;
        }
        if ((in_stack_00000028 < 0) ||
           ((in_stack_00000028 == 0 && (uVar3 = fcn.00018f40(*arg1), (uVar3 & 0xf0007) != 7)))) {
            *arg3 = 0;
            uVar5 = in_stack_00000028 == 0;
        }
        else if ((*(*arg1 + 0x10) & 0x100000) == 0) {
            if ((*(arg1 + 0x6c) & 0x100) == 0) {
                if (0x20 < uVar4) {
                    fcn.00019120(0x6baf8,0x4fff6,0);
                }
                if (*(arg1 + 0x78) == 0) {
                    bVar1 = false;
                }
                else {
                    if ((iStackX_10 == arg4) || (iVar2 = fcn.0001eeb0(arg2,arg4,uVar4), iVar2 != 0)) {
                        fcn.0001c9f0(6,0xa6,0xa2,0);
                        return 0;
                    }
                    if (0x7fffffff - uVar4 < (in_stack_00000028 & ~(uVar4 - 1))) {
                        fcn.0001c9f0(6,0xa6,0xb8,0);
                        return 0;
                    }
                    fcn.0001320c(arg2,arg1 + 0x80,uVar4);
                    iStackX_10 = iStackX_10 + uVar4;
                    bVar1 = true;
                }
                iVar2 = fcn.0001ef80(arg1,iStackX_10,arg3,arg4);
                if (iVar2 == 0) {
                    uVar5 = 0;
                }
                else {
                    if ((uVar4 < 2) || (*(arg1 + 0x14) != 0)) {
                        *(arg1 + 0x78) = 0;
                    }
                    else {
                        *arg3 = *arg3 - uVar4;
                        *(arg1 + 0x78) = 1;
                        fcn.0001320c(arg1 + 0x80,iStackX_10 + *arg3,uVar4);
                    }
                    if (bVar1) {
                        *arg3 = *arg3 + uVar4;
                    }
                    uVar5 = 1;
                }
            }
            else {
                uVar5 = fcn.0001ef80(arg1,arg2,arg3,arg4);
            }
        }
        else if ((uVar4 == 1) && (iVar2 = fcn.0001eeb0(arg2,arg4,uStack_30), iVar2 != 0)) {
            fcn.0001c9f0(6,0xa6,0xa2,0);
            uVar5 = 0;
        }
        else {
            uVar4 = (**(*arg1 + 0x20))(arg1,iStackX_10,arg4,in_stack_00000028);
            if (uVar4 < 0) {
                *arg3 = 0;
                uVar5 = 0;
            }
            else {
                *arg3 = uVar4;
                uVar5 = 1;
            }
        }
    }
    else {
        fcn.0001c9f0(6,0xa6,0x94,0);
        uVar5 = 0;
    }
    return uVar5;
}


/* fcn.000190d0 @ 0x190d0 */

uint32_t fcn.000190d0(int64_t arg1,int64_t arg2)

{
    return *(arg1 + 0x6c) & arg2;
}


/* fcn.0001eeb0 @ 0x1eeb0 */

bool fcn.0001eeb0(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    uint in_register_0000000c;
    uint64_t uVar1;
    
    uVar1 = CONCAT44(in_register_0000000c,arg1) - arg2;
    return (0 < arg3 && CONCAT44(in_register_0000000c,arg1) != arg2) && (uVar1 < arg3 || -arg3 < uVar1);
}


/* fcn.0001ef80 @ 0x1ef80 */

bool fcn.0001ef80(int64_t arg1,uint32_t arg2,uint32_t *arg3,int64_t arg4)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    uint in_register_00000014;
    bool bVar6;
    int64_t iStackX_10;
    int64_t iStackX_20;
    uint32_t in_stack_00000028;
    uint32_t uStack_40;
    
    iStackX_10 = CONCAT44(in_register_00000014,arg2);
    uStack_40 = in_stack_00000028;
    iVar2 = fcn.000190d0(arg1,0x2000);
    if (iVar2 != 0) {
        uStack_40 = in_stack_00000028 + 7 + (in_stack_00000028 + 7 >> 0x1f & 7U) >> 3;
    }
    uVar4 = *(*arg1 + 4);
    if ((in_stack_00000028 < 0) || ((in_stack_00000028 == 0 && (uVar3 = fcn.00018f40(*arg1), (uVar3 & 0xf0007) != 7))))
    {
        *arg3 = 0;
        bVar6 = in_stack_00000028 == 0;
    }
    else if ((*(*arg1 + 0x10) & 0x100000) == 0) {
        iVar2 = fcn.0001eeb0(arg2 + *(arg1 + 0x14),arg4,uStack_40);
        if (iVar2 == 0) {
            if ((*(arg1 + 0x14) == 0) && ((in_stack_00000028 & *(arg1 + 0x7c)) == 0)) {
                iVar2 = (**(*arg1 + 0x20))(arg1,iStackX_10,arg4,in_stack_00000028);
                if (iVar2 == 0) {
                    *arg3 = 0;
                    bVar6 = false;
                }
                else {
                    *arg3 = in_stack_00000028;
                    bVar6 = true;
                }
            }
            else {
                iVar2 = *(arg1 + 0x14);
                if (0x20 < uVar4) {
                    fcn.00019120(0x6bac8,0x4fff6,0);
                }
                iVar1 = arg1;
                if (iVar2 == 0) {
                    *arg3 = 0;
                    iStackX_20 = arg4;
                }
                else {
                    if (in_stack_00000028 < uVar4 - iVar2) {
                        fcn.0001320c(iVar1 + 0x38 + iVar2,arg4,in_stack_00000028);
                        *(arg1 + 0x14) = *(arg1 + 0x14) + in_stack_00000028;
                        *arg3 = 0;
                        return true;
                    }
                    iVar5 = uVar4 - iVar2;
                    if (0x7fffffff - uVar4 < (in_stack_00000028 - iVar5 & ~(uVar4 - 1))) {
                        fcn.0001c9f0(6,0xdb,0xb8,0);
                        return false;
                    }
                    fcn.0001320c(iVar1 + 0x38 + iVar2,arg4,iVar5);
                    in_stack_00000028 = in_stack_00000028 - iVar5;
                    iStackX_20 = arg4 + iVar5;
                    iVar2 = (**(*arg1 + 0x20))(arg1,iStackX_10,arg1 + 0x38,uVar4);
                    if (iVar2 == 0) {
                        return false;
                    }
                    iStackX_10 = iStackX_10 + uVar4;
                    *arg3 = uVar4;
                }
                uVar4 = in_stack_00000028 & uVar4 - 1;
                iVar2 = in_stack_00000028 - uVar4;
                if (0 < iVar2) {
                    iVar5 = (**(*arg1 + 0x20))(arg1,iStackX_10,iStackX_20,iVar2);
                    if (iVar5 == 0) {
                        return false;
                    }
                    *arg3 = *arg3 + iVar2;
                }
                if (uVar4 != 0) {
                    fcn.0001320c(iVar1 + 0x38,iStackX_20 + iVar2,uVar4);
                }
                *(arg1 + 0x14) = uVar4;
                bVar6 = true;
            }
        }
        else {
            fcn.0001c9f0(6,0xdb,0xa2,0);
            bVar6 = false;
        }
    }
    else if ((uVar4 == 1) && (iVar2 = fcn.0001eeb0(arg2,arg4,uStack_40), iVar2 != 0)) {
        fcn.0001c9f0(6,0xdb,0xa2,0);
        bVar6 = false;
    }
    else {
        uVar4 = (**(*arg1 + 0x20))(arg1,iStackX_10,arg4,in_stack_00000028);
        if (uVar4 < 0) {
            bVar6 = false;
        }
        else {
            *arg3 = uVar4;
            bVar6 = true;
        }
    }
    return bVar6;
}


/* fcn.00024b00 @ 0x24b00 */

uint fcn.00024b00(int arg1,int64_t arg2)

{
    uint uStack_14;
    
    if (((arg1 < 0) || (0x7f < arg1)) || ((*("@" + arg1 * 2) & arg2) == 0)) {
        uStack_14 = 0;
    }
    else {
        uStack_14 = 1;
    }
    return uStack_14;
}


/* fcn.000246a0 @ 0x246a0 */

int64_t fcn.000246a0(void)

{
    int64_t iVar1;
    
    iVar1 = fcn.00019290(0x18,0x4fff6,0);
    if (iVar1 == 0) {
        fcn.0001c9f0(3,0x71,0x41,0);
        iVar1 = 0;
    }
    else {
        *(iVar1 + 0x14) = 1;
    }
    return iVar1;
}


/* fcn.000248c0 @ 0x248c0 */

bool fcn.000248c0(uint32_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    ulong *arg1_00;
    uint in_register_00000014;
    uint32_t uStack_18;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = fcn.000240c0(arg1_00,0x40);
    if (iVar1 != 0) {
        *(arg1_00 + 2) = 0;
        **arg1_00 = CONCAT44(in_register_00000014,arg2);
        uStack_18 = CONCAT44(in_register_00000014,arg2) != 0;
        *(arg1_00 + 1) = uStack_18;
        *(arg1_00 + 0x14) = *(arg1_00 + 0x14);
    }
    return iVar1 != 0;
}


/* fcn.00024000 @ 0x24000 */

ulong fcn.00024000(uint32_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t *arg1_00;
    uint in_register_00000014;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (arg1_00[1] != 0) {
        if (CONCAT44(in_register_00000014,arg2) == 0) {
            fcn.000249a0(arg1_00);
        }
        else {
            iVar1 = fcn.0002a6c0(*arg1_00,*arg1_00,arg1_00[1],arg2);
            if (iVar1 != 0) {
                iVar2 = fcn.00024a20(arg1_00,arg1_00[1] + 1);
                if (iVar2 == 0) {
                    return 0;
                }
                *(*arg1_00 + arg1_00[1] * 8) = iVar1;
                *(arg1_00 + 1) = arg1_00[1] + 1;
            }
        }
    }
    return 1;
}


/* fcn.00023c60 @ 0x23c60 */

uint64_t fcn.00023c60(uint32_t arg1,int arg2)

{
    int iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint in_register_0000000c;
    int64_t *arg1_00;
    uint in_register_00000014;
    uint64_t uStackX_10;
    int iStack_28;
    uint32_t uStack_24;
    uint32_t uStack_20;
    
    uStackX_10 = CONCAT44(in_register_00000014,arg2);
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (uStackX_10 == 0) {
        uVar3 = 1;
    }
    else {
        iVar1 = fcn.000249d0(arg1_00);
        if (iVar1 == 0) {
            if (arg1_00[2] == 0) {
                for (iStack_28 = 0; (uStackX_10 != 0 && (iStack_28 < arg1_00[1])); iStack_28 = iStack_28 + 1) {
                    uVar3 = *(*arg1_00 + iStack_28 * 8) + uStackX_10;
                    *(*arg1_00 + iStack_28 * 8) = uVar3;
                    uStack_20 = uVar3 < uStackX_10;
                    uStackX_10 = uStack_20;
                }
                if ((uStackX_10 != 0) && (iStack_28 == arg1_00[1])) {
                    iVar4 = fcn.00024a20(arg1_00,arg1_00[1] + 1);
                    if (iVar4 == 0) {
                        return 0;
                    }
                    *(arg1_00 + 1) = arg1_00[1] + 1;
                    *(*arg1_00 + iStack_28 * 8) = uStackX_10;
                }
                uVar3 = 1;
            }
            else {
                *(arg1_00 + 2) = 0;
                uVar2 = fcn.00023e10(arg1_00,arg2);
                iVar1 = fcn.000249d0(arg1_00);
                if (iVar1 == 0) {
                    uStack_24 = arg1_00[2] == 0;
                    *(arg1_00 + 2) = uStack_24;
                }
                uVar3 = uVar2;
            }
        }
        else {
            uVar3 = fcn.000248c0(arg1,arg2);
        }
    }
    return uVar3;
}


/* fcn.00024530 @ 0x24530 */

uint64_t fcn.00024530(uint32_t arg1)

{
    int iVar1;
    int iVar2;
    uint64_t uVar3;
    uint in_register_0000000c;
    int64_t *arg1_00;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = arg1_00[1] + -1;
    if ((*(arg1_00 + 0x14) & 4) == 0) {
        iVar2 = fcn.000249d0(arg1_00);
        if (iVar2 == 0) {
            iVar2 = fcn.000241c0(*(*arg1_00 + iVar1 * 8));
            uVar3 = iVar1 * 0x40 + iVar2;
        }
        else {
            uVar3 = 0;
        }
    }
    else {
        uVar3 = fcn.00024450(arg1_00);
    }
    return uVar3;
}


/* fcn.00023ad0 @ 0x23ad0 */

uint64_t fcn.00023ad0(uint32_t arg1,int arg2)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint8_t uVar5;
    uint in_register_0000000c;
    int64_t *arg1_00;
    uint in_register_00000014;
    int iStack_28;
    uint64_t uStack_20;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uStack_20 = 0;
    if (CONCAT44(in_register_00000014,arg2) == 0) {
        uStack_20 = 0xffffffffffffffff;
    }
    else if (arg1_00[1] == 0) {
        uStack_20 = 0;
    }
    else {
        iVar2 = fcn.000241c0(arg2);
        uVar5 = 0x40 - iVar2;
        iVar3 = CONCAT44(in_register_00000014,arg2) << (uVar5 & 0x3f);
        iVar2 = fcn.00024ba0(arg1_00,arg1_00,0x40 - iVar2);
        if (iVar2 == 0) {
            uStack_20 = 0xffffffffffffffff;
        }
        else {
            iStack_28 = arg1_00[1];
            while (iStack_28 = iStack_28 + -1, -1 < iStack_28) {
                iVar1 = *(*arg1_00 + iStack_28 * 8);
                iVar4 = fcn.0002a8e0(uStack_20,iVar1,iVar3);
                uStack_20 = iVar1 - iVar4 * iVar3;
                *(*arg1_00 + iStack_28 * 8) = iVar4;
            }
            if ((0 < arg1_00[1]) && (*(*arg1_00 + (arg1_00[1] + -1) * 8) == 0)) {
                *(arg1_00 + 1) = arg1_00[1] + -1;
            }
            uStack_20 = uStack_20 >> (uVar5 & 0x3f);
            if (arg1_00[1] == 0) {
                *(arg1_00 + 2) = 0;
            }
        }
    }
    return uStack_20;
}


/* fcn.00024640 @ 0x24640 */

void fcn.00024640(uint32_t arg1)

{
    int iVar1;
    uint in_register_0000000c;
    
    if (CONCAT44(in_register_0000000c,arg1) != 0) {
        iVar1 = fcn.00024a00(arg1,2);
        if (iVar1 == 0) {
            fcn.000245a0(arg1,0);
        }
        if ((*(CONCAT44(in_register_0000000c,arg1) + 0x14) & 1) != 0) {
            fcn.00019380(arg1,0x4fff6,0);
        }
    }
    return;
}


/* fcn.000229a0 @ 0x229a0 */

uint32_t fcn.000229a0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int in_stack_00000028;
    int iStack_38;
    uint32_t uStack_34;
    uint32_t uStack_30;
    uint32_t uStack_24;
    uint32_t uStack_20;
    uint8_t *apuStack_18 [3];
    
    apuStack_18[0] = *arg1;
    if (in_stack_00000028 != 0) {
        uVar1 = *apuStack_18[0];
        uStack_30 = uVar1 & 0x20;
        uStack_20 = *apuStack_18[0] & 0xc0;
        uVar2 = *apuStack_18[0] & 0x1f;
        iStack_38 = in_stack_00000028;
        if (uVar2 == 0x1f) {
            apuStack_18[0] = apuStack_18[0] + 1;
            iStack_38 = in_stack_00000028 + -1;
            if (iStack_38 != 0) {
                uStack_34 = 0;
                do {
                    if ((*apuStack_18[0] & 0x80) == 0) {
                        uVar2 = uStack_34 << 7 | *apuStack_18[0] & 0x7f;
                        goto joined_r0x00022b1b;
                    }
                    uStack_34 = uStack_34 << 7 | *apuStack_18[0] & 0x7f;
                    apuStack_18[0] = apuStack_18[0] + 1;
                    iStack_38 = iStack_38 + -1;
                } while ((iStack_38 != 0) && (uStack_34 < 0x1000000));
            }
        }
        else {
joined_r0x00022b1b:
            apuStack_18[0] = apuStack_18[0] + 1;
            if (iStack_38 - 1U != 0) {
                *arg3 = uVar2;
                *arg4 = uStack_20;
                iVar3 = fcn.00022c10(apuStack_18,&uStack_24,arg2,iStack_38 - 1U);
                if ((iVar3 != 0) && ((uStack_24 == 0 || ((uVar1 & 0x20) != 0)))) {
                    if (in_stack_00000028 - (apuStack_18[0] - *arg1) < *arg2) {
                        fcn.0001c9f0(0xd,0x72,0x9b,0);
                        uStack_30 = uStack_30 | 0x80;
                    }
                    *arg1 = apuStack_18[0];
                    return uStack_30 | uStack_24;
                }
            }
        }
    }
    fcn.0001c9f0(0xd,0x72,0x7b,0);
    return 0x80;
}


/* fcn.000200b0 @ 0x200b0 */

ulong * fcn.000200b0(uint32_t arg1,uint32_t arg2,int arg3)

{
    int64_t iVar1;
    int arg1_00;
    uint in_register_0000000c;
    int64_t *piVar2;
    uint in_register_00000014;
    int64_t *piVar3;
    int iStack_58;
    ulong *puStack_50;
    char *pcStack_48;
    int64_t iStack_40;
    uchar auStack_38 [16];
    uint uStack_28;
    int iStack_24;
    char *pcStack_20;
    uint uStack_18;
    
    piVar3 = CONCAT44(in_register_00000014,arg2);
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if ((((arg3 < 1) || (piVar3 == NULL)) || (pcStack_48 = *piVar3, pcStack_48 == NULL)) ||
       ((pcStack_48[arg3 + -1] & 0x80U) != 0)) {
        fcn.0001c9f0(0xd,0xc4,0xd8,0);
        puStack_50 = NULL;
    }
    else {
        uStack_28 = 0;
        uStack_18 = 0;
        iStack_24 = arg3;
        pcStack_20 = pcStack_48;
        arg1_00 = fcn.0001e220(auStack_38);
        if (arg1_00 == 0) {
            for (iStack_58 = 0; iStack_58 < arg3; iStack_58 = iStack_58 + 1) {
                if ((*pcStack_48 == -0x80) && ((iStack_58 == 0 || ((pcStack_48[-1] & 0x80U) == 0)))) {
                    fcn.0001c9f0(0xd,0xc4,0xd8,0);
                    return NULL;
                }
                pcStack_48 = pcStack_48 + 1;
            }
            if (((piVar2 == NULL) || (*piVar2 == 0)) || ((*(*piVar2 + 0x20) & 1) == 0)) {
                puStack_50 = fcn.000204b0();
                if (puStack_50 == NULL) {
                    return NULL;
                }
            }
            else {
                puStack_50 = *piVar2;
            }
            iVar1 = *piVar3;
            iStack_40 = puStack_50[3];
            puStack_50[3] = 0;
            if ((iStack_40 == 0) || (*(puStack_50 + 0x14) < arg3)) {
                *(puStack_50 + 0x14) = 0;
                fcn.00019380(iStack_40,0x4fff6,0);
                iStack_40 = fcn.00019200(arg3,0x4fff6,0);
                if (iStack_40 == 0) {
                    fcn.0001c9f0(0xd,0xc4,0x41,0);
                    if ((piVar2 == NULL) || (*piVar2 != puStack_50)) {
                        fcn.00020510(puStack_50);
                    }
                    return NULL;
                }
                *(puStack_50 + 4) = *(puStack_50 + 4) | 8;
            }
            fcn.0001320c(iStack_40,iVar1,arg3);
            if ((*(puStack_50 + 4) & 4) != 0) {
                fcn.00019380(*puStack_50,0x4fff6,0);
                fcn.00019380(puStack_50[1],0x4fff6,0);
                *(puStack_50 + 4) = *(puStack_50 + 4) & 0xfffffffb;
            }
            puStack_50[3] = iStack_40;
            *(puStack_50 + 0x14) = arg3;
            *puStack_50 = 0;
            puStack_50[1] = 0;
            if (piVar2 != NULL) {
                *piVar2 = puStack_50;
            }
            *piVar3 = iVar1 + arg3;
        }
        else {
            puStack_50 = fcn.0001ddb0(arg1_00);
            if (piVar2 != NULL) {
                fcn.00020510(*piVar2);
                *piVar2 = puStack_50;
            }
            *piVar3 = arg3 + *piVar3;
        }
    }
    return puStack_50;
}


/* fcn.000204b0 @ 0x204b0 */

int64_t fcn.000204b0(void)

{
    int64_t iVar1;
    
    iVar1 = fcn.00019290(0x28,0x4fff6,0);
    if (iVar1 == 0) {
        fcn.0001c9f0(0xd,0x7b,0x41,0);
        iVar1 = 0;
    }
    else {
        *(iVar1 + 0x20) = 1;
    }
    return iVar1;
}


/* fcn.000238e0 @ 0x238e0 */

void fcn.000238e0(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    uint in_register_00000014;
    char *pcVar2;
    int64_t *piStackX_8;
    int iStack_28;
    
    pcVar2 = CONCAT44(in_register_00000014,arg2);
    if (pcVar2 != NULL) {
        iVar1 = *(pcVar2 + 0x18);
        if (arg3 == 0) {
            if ((iVar1 != 0) && (*(iVar1 + 0x18) != 0)) {
                (**(iVar1 + 0x18))(arg1,pcVar2);
                return;
            }
        }
        else if ((iVar1 != 0) && (*(iVar1 + 0x20) != 0)) {
            (**(iVar1 + 0x20))(arg1,pcVar2);
            return;
        }
    }
    if (pcVar2 == NULL) {
        iStack_28 = **arg1;
        piStackX_8 = *arg1 + 2;
        arg1 = *piStackX_8;
    }
    else {
        piStackX_8 = arg1;
        if (*pcVar2 == '\x05') {
            iStack_28 = -1;
            arg1 = *arg1;
        }
        else {
            iStack_28 = *(pcVar2 + 4);
            if (iStack_28 == 1) goto code_r0x000239f2;
            arg1 = *arg1;
        }
    }
    if (arg1 == 0) {
        return;
    }
code_r0x000239f2:
    if (iStack_28 == -4) {
        fcn.000238e0(piStackX_8,0,0);
        fcn.00019380(*piStackX_8,0x4fff6,0);
    }
    else {
        if (iStack_28 == 1) {
            if (pcVar2 != NULL) {
                *piStackX_8 = *(pcVar2 + 0x20);
                return;
            }
            *piStackX_8 = -1;
            return;
        }
        if (iStack_28 != 5) {
            if (iStack_28 == 6) {
                fcn.00020510(*piStackX_8);
            }
            else {
                fcn.000232b0(*piStackX_8,arg3);
            }
        }
    }
    *piStackX_8 = 0;
    return;
}


/* fcn.000209b0 @ 0x209b0 */

ulong fcn.000209b0(int arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint in_register_0000000c;
    int64_t *piVar5;
    int64_t *piStack_38;
    int64_t iStack_28;
    
    piVar5 = CONCAT44(in_register_0000000c,arg1);
    uVar1 = *(piVar5 + 0x1c);
    uVar2 = *(piVar5 + 4);
    uVar3 = *(piVar5 + 0x24);
    if (uVar2 + 1 < uVar3) {
        *(piVar5 + 4) = piVar5[4] + 1;
    }
    else {
        iVar4 = fcn.000192e0(*piVar5,uVar1 << 4,0x4fff6,0);
        if (iVar4 == 0) {
            *(piVar5 + 0xd) = piVar5[0xd] + 1;
            return 0;
        }
        *piVar5 = iVar4;
        fcn.00013234(iVar4 + uVar1 * 8,uVar1 * 8);
        *(piVar5 + 0x24) = uVar1;
        *(piVar5 + 0x1c) = uVar1 * 2;
        *(piVar5 + 7) = piVar5[7] + 1;
        *(piVar5 + 4) = 0;
    }
    *(piVar5 + 3) = piVar5[3] + 1;
    *(piVar5 + 0x34) = *(piVar5 + 0x34) + 1;
    piStack_38 = *piVar5 + uVar2 * 8;
    piVar5 = *piVar5 + (uVar2 + uVar3) * 8;
    *piVar5 = 0;
    iStack_28 = *piStack_38;
    while (iStack_28 != 0) {
        if (*(iStack_28 + 0x10) % uVar1 == uVar2) {
            piStack_38 = *piStack_38 + 8;
        }
        else {
            *piStack_38 = *(*piStack_38 + 8);
            *(iStack_28 + 8) = *piVar5;
            *piVar5 = iStack_28;
        }
        iStack_28 = *piStack_38;
    }
    return 1;
}


/* fcn.00020bc0 @ 0x20bc0 */

ulong * fcn.00020bc0(int arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    uint in_register_0000000c;
    int64_t *piVar4;
    uint in_register_00000014;
    uint32_t uStack_24;
    ulong *puStack_20;
    ulong *puStack_18;
    
    piVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = (*piVar4[2])(CONCAT44(in_register_00000014,arg2));
    *(piVar4 + 0x44) = *(piVar4 + 0x44) + 1;
    *arg3 = uVar2;
    uStack_24 = uVar2 % *(piVar4 + 0x24);
    if (uStack_24 < *(piVar4 + 4)) {
        uStack_24 = uVar2 % *(piVar4 + 0x1c);
    }
    pcVar1 = piVar4[1];
    puStack_18 = *piVar4 + uStack_24 * 8;
    puStack_20 = *puStack_18;
    do {
        if (puStack_20 == NULL) {
            return puStack_18;
        }
        *(piVar4 + 100) = *(piVar4 + 100) + 1;
        if (*(puStack_20 + 2) == uVar2) {
            *(piVar4 + 9) = piVar4[9] + 1;
            iVar3 = (*pcVar1)(*puStack_20,CONCAT44(in_register_00000014,arg2));
            if (iVar3 == 0) {
                return puStack_18;
            }
        }
        puStack_18 = puStack_20 + 1;
        puStack_20 = puStack_20[1];
    } while( true );
}


/* fcn.00024b60 @ 0x24b60 */

uint32_t fcn.00024b60(uint32_t arg1)

{
    int iVar1;
    uint32_t uStack_18;
    
    iVar1 = fcn.00024b00(arg1,2);
    if (iVar1 == 0) {
        uStack_18 = arg1;
    }
    else {
        uStack_18 = arg1 ^ *0x6bc58;
    }
    return uStack_18;
}


/* fcn.00021590 @ 0x21590 */

void fcn.00021590(uint32_t arg1)

{
    uint in_register_0000000c;
    int *piVar1;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    if (piVar1 != NULL) {
        if (*piVar1 != 0) {
            fcn.00026780();
        }
        if (piVar1[1] != 0) {
            fcn.0001ccd0();
        }
        if (piVar1[2] != 0) {
            fcn.000281c0();
        }
        fcn.00019380(arg1,0x4fff6,0);
    }
    return;
}


/* fcn.00021290 @ 0x21290 */

ulong fcn.00021290(void)

{
    int iVar1;
    ulong uVar2;
    uint auStack_18 [6];
    
    iVar1 = fcn.00021080(auStack_18,0x211c0);
    if (iVar1 == 0) {
        uVar2 = 0;
    }
    else {
        *0x6fc70 = fcn.00020ee0();
        if (*0x6fc70 == 0) {
            fcn.00021000(0);
            *0x6fc70 = 0;
            fcn.00021150(auStack_18);
            uVar2 = 0;
        }
        else {
            fcn.000190f0();
            *0x4f82c = auStack_18[0];
            *0x6fc90 = 1;
            uVar2 = 1;
        }
    }
    return uVar2;
}


/* fcn.00020ee0 @ 0x20ee0 */

uint * fcn.00020ee0(void)

{
    uint *puVar1;
    
    puVar1 = fcn.00019290(4,0x4fff6,0);
    if (puVar1 == NULL) {
        puVar1 = NULL;
    }
    else {
        *puVar1 = 1;
    }
    return puVar1;
}


/* fcn.000190f0 @ 0x190f0 */

void fcn.000190f0(void)

{
    return;
}


/* fcn.00021000 @ 0x21000 */

void fcn.00021000(uint32_t arg1)

{
    uint in_register_0000000c;
    
    if (CONCAT44(in_register_0000000c,arg1) != NULL) {
        *CONCAT44(in_register_0000000c,arg1) = 0;
        fcn.00019380(arg1,0x4fff6,0);
    }
    return;
}


/* fcn.00021150 @ 0x21150 */

ulong fcn.00021150(int64_t arg1)

{
    *arg1 = 0x101;
    return 1;
}


/* fcn.00021330 @ 0x21330 */

ulong fcn.00021330(void)

{
    return 1;
}


/* fcn.00021380 @ 0x21380 */

uint fcn.00021380(void)

{
    return 1;
}


/* fcn.000213e0 @ 0x213e0 */

ulong fcn.000213e0(void)

{
    fcn.000260a0();
    return 1;
}


/* fcn.000260a0 @ 0x260a0 */

void fcn.000260a0(void)

{
    uint32_t uVar1;
    
    uVar1 = fcn.0002b4d0();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002b4a0();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002b4b0();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002b4c0();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002b590();
    fcn.00022800(uVar1);
    fcn.00029db0(0x6bd60,0x8002,0x5a290);
    fcn.00029db0(0x6bd64,0x8002,0x5a290);
    uVar1 = fcn.0002ea10();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002ea00();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002ea30();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002ea40();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002ea50();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002ea20();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002ea60();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002fd80();
    fcn.00022800(uVar1);
    uVar1 = fcn.00030210();
    fcn.00022800(uVar1);
    uVar1 = fcn.00031070();
    fcn.00022800(uVar1);
    uVar1 = fcn.00031460();
    fcn.00022800(uVar1);
    fcn.00029db0(0x6bd68,0x8002,0x57688);
    uVar1 = fcn.00031490();
    fcn.00022800(uVar1);
    fcn.00029db0(0x6bd74,0x8002,0x552d8);
    fcn.00029db0(0x6bd7c,0x8002,0x552d8);
    uVar1 = fcn.0002ea80();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002ea70();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002eaa0();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002eab0();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002eac0();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002ea90();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002ead0();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002fd90();
    fcn.00022800(uVar1);
    uVar1 = fcn.00031080();
    fcn.00022800(uVar1);
    uVar1 = fcn.00031470();
    fcn.00022800(uVar1);
    fcn.00029db0(0x6bd88,0x8002,0x57698);
    uVar1 = fcn.000314a0();
    fcn.00022800(uVar1);
    fcn.00029db0(0x6bd94,0x8002,0x55358);
    fcn.00029db0(0x6bd9c,0x8002,0x55358);
    uVar1 = fcn.0002eaf0();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002eae0();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002eb10();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002eb20();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002eb30();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002eb00();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002eb40();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002fda0();
    fcn.00022800(uVar1);
    uVar1 = fcn.00030220();
    fcn.00022800(uVar1);
    uVar1 = fcn.00031090();
    fcn.00022800(uVar1);
    uVar1 = fcn.00031480();
    fcn.00022800(uVar1);
    fcn.00029db0(0x6bda8,0x8002,0x576a8);
    uVar1 = fcn.000314b0();
    fcn.00022800(uVar1);
    fcn.00029db0(0x6bdb4,0x8002,0x553d8);
    fcn.00029db0(0x6bdbc,0x8002,0x553d8);
    uVar1 = fcn.000211b0();
    fcn.00022800(uVar1);
    uVar1 = fcn.000211b0();
    fcn.00022800(uVar1);
    uVar1 = fcn.000211b0();
    fcn.00022800(uVar1);
    uVar1 = fcn.000211b0();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002be00();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002bdd0();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002bde0();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002c030();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002c1d0();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002c2b0();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002bdf0();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002e090();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002e0c0();
    fcn.00022800(uVar1);
    fcn.00029db0(0x6bdc8,0x8002,0x59980);
    fcn.00029db0(0x6bdd0,0x8002,0x59980);
    uVar1 = fcn.0002be40();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002be10();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002be20();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002c040();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002c1e0();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002c2c0();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002be30();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002e0a0();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002e0d0();
    fcn.00022800(uVar1);
    fcn.00029db0(0x6bdd8,0x8002,0x59a20);
    fcn.00029db0(0x6bde0,0x8002,0x59a20);
    uVar1 = fcn.0002be80();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002be50();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002be60();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002c050();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002c1f0();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002c2d0();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002be70();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002e0b0();
    fcn.00022800(uVar1);
    uVar1 = fcn.0002e0e0();
    fcn.00022800(uVar1);
    fcn.00029db0(0x6bde8,0x8002,0x59ac0);
    fcn.00029db0(0x6bdf0,0x8002,0x59ac0);
    uVar1 = fcn.00031a30();
    fcn.00022800(uVar1);
    uVar1 = fcn.00032b80();
    fcn.00022800(uVar1);
    return;
}


/* fcn.0002b4d0 @ 0x2b4d0 */

ulong fcn.0002b4d0(void)

{
    return 0x6c000;
}


/* fcn.00022800 @ 0x22800 */

uint fcn.00022800(uint32_t arg1)

{
    int iVar1;
    uint uVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    int *piVar4;
    
    piVar4 = CONCAT44(in_register_0000000c,arg1);
    if (piVar4 == NULL) {
        uVar2 = 0;
    }
    else {
        iVar3 = fcn.0001dee0(*piVar4);
        iVar1 = fcn.00029db0(iVar3,2,arg1);
        if (iVar1 == 0) {
            uVar2 = 0;
        }
        else {
            iVar3 = fcn.0001dff0(*piVar4);
            uVar2 = fcn.00029db0(iVar3,2,arg1);
        }
    }
    return uVar2;
}


/* fcn.0002b4a0 @ 0x2b4a0 */

ulong fcn.0002b4a0(void)

{
    return 0x6c120;
}


/* fcn.0002b4b0 @ 0x2b4b0 */

ulong fcn.0002b4b0(void)

{
    return 0x6c0c0;
}


/* fcn.0002b4c0 @ 0x2b4c0 */

ulong fcn.0002b4c0(void)

{
    return 0x6c180;
}


/* fcn.0002b590 @ 0x2b590 */

ulong fcn.0002b590(void)

{
    return 0x6c060;
}


/* fcn.00029db0 @ 0x29db0 */

uint fcn.00029db0(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    uint32_t *puVar2;
    int *piVar3;
    int64_t iVar4;
    uint in_R8;
    uint uStack_28;
    
    uStack_28 = 0;
    iVar1 = fcn.00029c50();
    if (iVar1 == 0) {
        return 0;
    }
    puVar2 = fcn.00019200(0x18,0x4fff6,0);
    if (puVar2 == NULL) {
        return 0;
    }
    *(puVar2 + 2) = arg1;
    puVar2[1] = arg2 & 0x8000;
    *puVar2 = arg2 & 0xffff7fff;
    *(puVar2 + 4) = CONCAT44(in_R8,arg3);
    fcn.00020f20(*0x6fd10);
    piVar3 = fcn.0001d5e0(*0x6fd00,puVar2);
    if (piVar3 == NULL) {
        iVar1 = fcn.00029b60(*0x6fd00);
        if (iVar1 != 0) {
            fcn.00019380(puVar2,0x4fff6,0);
            goto code_r0x00029f0a;
        }
    }
    else {
        if ((*0x71138 != 0) && (iVar1 = fcn.00023370(*0x71138), *piVar3 < iVar1)) {
            iVar4 = fcn.00023390(*0x71138,*piVar3);
            (**(iVar4 + 0x10))(*(piVar3 + 2),*piVar3);
        }
        fcn.00019380(piVar3,0x4fff6,0);
    }
    uStack_28 = 1;
code_r0x00029f0a:
    fcn.00020f90(*0x6fd10);
    return uStack_28;
}


/* fcn.0002ea10 @ 0x2ea10 */

ulong fcn.0002ea10(void)

{
    return 0x6d380;
}


/* fcn.0002ea00 @ 0x2ea00 */

ulong fcn.0002ea00(void)

{
    return 0x6d560;
}


/* fcn.0002ea30 @ 0x2ea30 */

ulong fcn.0002ea30(void)

{
    return 0x6d7a0;
}


/* fcn.0002ea40 @ 0x2ea40 */

ulong fcn.0002ea40(void)

{
    return 0x6d080;
}


/* fcn.0002ea50 @ 0x2ea50 */

ulong fcn.0002ea50(void)

{
    return 0x6d680;
}


/* fcn.0002ea20 @ 0x2ea20 */

ulong fcn.0002ea20(void)

{
    return 0x6cd20;
}


/* fcn.0002ea60 @ 0x2ea60 */

ulong fcn.0002ea60(void)

{
    return 0x6d1a0;
}


/* fcn.0002fd80 @ 0x2fd80 */

ulong fcn.0002fd80(void)

{
    return 0x6d020;
}


/* fcn.00030210 @ 0x30210 */

ulong fcn.00030210(void)

{
    return 0x6d140;
}


/* fcn.00031070 @ 0x31070 */

ulong fcn.00031070(void)

{
    return 0x6d8c0;
}


/* fcn.00031460 @ 0x31460 */

ulong fcn.00031460(void)

{
    return 0x6d4a0;
}


/* fcn.00031490 @ 0x31490 */

ulong fcn.00031490(void)

{
    return 0x6ce40;
}


/* fcn.0002ea80 @ 0x2ea80 */

ulong fcn.0002ea80(void)

{
    return 0x6cc00;
}


/* fcn.0002ea70 @ 0x2ea70 */

ulong fcn.0002ea70(void)

{
    return 0x6d0e0;
}


/* fcn.0002eaa0 @ 0x2eaa0 */

ulong fcn.0002eaa0(void)

{
    return 0x6cf60;
}


/* fcn.0002eab0 @ 0x2eab0 */

ulong fcn.0002eab0(void)

{
    return 0x6d860;
}


/* fcn.0002eac0 @ 0x2eac0 */

ulong fcn.0002eac0(void)

{
    return 0x6cf00;
}


/* fcn.0002ea90 @ 0x2ea90 */

ulong fcn.0002ea90(void)

{
    return 0x6d2c0;
}


/* fcn.0002ead0 @ 0x2ead0 */

ulong fcn.0002ead0(void)

{
    return 0x6ccc0;
}


/* fcn.0002fd90 @ 0x2fd90 */

ulong fcn.0002fd90(void)

{
    return 0x6cde0;
}


/* fcn.00031080 @ 0x31080 */

ulong fcn.00031080(void)

{
    return 0x6cc60;
}


/* fcn.00031470 @ 0x31470 */

ulong fcn.00031470(void)

{
    return 0x6d800;
}


/* fcn.000314a0 @ 0x314a0 */

ulong fcn.000314a0(void)

{
    return 0x6d5c0;
}


/* fcn.0002eaf0 @ 0x2eaf0 */

ulong fcn.0002eaf0(void)

{
    return 0x6d6e0;
}


/* fcn.0002eae0 @ 0x2eae0 */

ulong fcn.0002eae0(void)

{
    return 0x6d260;
}


/* fcn.0002eb10 @ 0x2eb10 */

ulong fcn.0002eb10(void)

{
    return 0x6d440;
}


/* fcn.0002eb20 @ 0x2eb20 */

ulong fcn.0002eb20(void)

{
    return 0x6d500;
}


/* fcn.0002eb30 @ 0x2eb30 */

ulong fcn.0002eb30(void)

{
    return 0x6d620;
}


/* fcn.0002eb00 @ 0x2eb00 */

ulong fcn.0002eb00(void)

{
    return 0x6d3e0;
}


/* fcn.0002eb40 @ 0x2eb40 */

ulong fcn.0002eb40(void)

{
    return 0x6cea0;
}


/* fcn.0002fda0 @ 0x2fda0 */

ulong fcn.0002fda0(void)

{
    return 0x6cfc0;
}


/* fcn.00030220 @ 0x30220 */

ulong fcn.00030220(void)

{
    return 0x6d740;
}


/* fcn.00031090 @ 0x31090 */

ulong fcn.00031090(void)

{
    return 0x6cd80;
}


/* fcn.00031480 @ 0x31480 */

ulong fcn.00031480(void)

{
    return 0x6d200;
}


/* fcn.000314b0 @ 0x314b0 */

ulong fcn.000314b0(void)

{
    return 0x6d320;
}


/* fcn.000211b0 @ 0x211b0 */

ulong fcn.000211b0(void)

{
    return 0;
}


/* fcn.0002be00 @ 0x2be00 */

ulong fcn.0002be00(void)

{
    return 0x6c540;
}


/* fcn.0002bdd0 @ 0x2bdd0 */

ulong fcn.0002bdd0(void)

{
    return 0x6c2a0;
}


/* fcn.0002bde0 @ 0x2bde0 */

ulong fcn.0002bde0(void)

{
    return 0x6c7e0;
}


/* fcn.0002c030 @ 0x2c030 */

ulong fcn.0002c030(void)

{
    return 0x6c660;
}


/* fcn.0002c1d0 @ 0x2c1d0 */

ulong fcn.0002c1d0(void)

{
    return 0x6c900;
}


/* fcn.0002c2b0 @ 0x2c2b0 */

ulong fcn.0002c2b0(void)

{
    return 0x6c8a0;
}


/* fcn.0002bdf0 @ 0x2bdf0 */

ulong fcn.0002bdf0(void)

{
    return 0x6c360;
}


/* fcn.0002e090 @ 0x2e090 */

ulong fcn.0002e090(void)

{
    return 0x6c3c0;
}


/* fcn.0002e0c0 @ 0x2e0c0 */

ulong fcn.0002e0c0(void)

{
    return 0x6ca80;
}


/* fcn.0002be40 @ 0x2be40 */

ulong fcn.0002be40(void)

{
    return 0x6c600;
}


/* fcn.0002be10 @ 0x2be10 */

ulong fcn.0002be10(void)

{
    return 0x6c9c0;
}


/* fcn.0002be20 @ 0x2be20 */

ulong fcn.0002be20(void)

{
    return 0x6c960;
}


/* fcn.0002c040 @ 0x2c040 */

ulong fcn.0002c040(void)

{
    return 0x6c4e0;
}


/* fcn.0002c1e0 @ 0x2c1e0 */

ulong fcn.0002c1e0(void)

{
    return 0x6c420;
}


/* fcn.0002c2c0 @ 0x2c2c0 */

ulong fcn.0002c2c0(void)

{
    return 0x6ca20;
}


/* fcn.0002be30 @ 0x2be30 */

ulong fcn.0002be30(void)

{
    return 0x6c240;
}


/* fcn.0002e0a0 @ 0x2e0a0 */

ulong fcn.0002e0a0(void)

{
    return 0x6cba0;
}


/* fcn.0002e0d0 @ 0x2e0d0 */

ulong fcn.0002e0d0(void)

{
    return 0x6c300;
}


/* fcn.0002be80 @ 0x2be80 */

ulong fcn.0002be80(void)

{
    return 0x6c5a0;
}


/* fcn.0002be50 @ 0x2be50 */

ulong fcn.0002be50(void)

{
    return 0x6c480;
}


/* fcn.0002be60 @ 0x2be60 */

ulong fcn.0002be60(void)

{
    return 0x6c840;
}


/* fcn.0002c050 @ 0x2c050 */

ulong fcn.0002c050(void)

{
    return 0x6c780;
}


/* fcn.0002c1f0 @ 0x2c1f0 */

ulong fcn.0002c1f0(void)

{
    return 0x6c6c0;
}


/* fcn.0002c2d0 @ 0x2c2d0 */

ulong fcn.0002c2d0(void)

{
    return 0x6c1e0;
}


/* fcn.0002be70 @ 0x2be70 */

ulong fcn.0002be70(void)

{
    return 0x6cae0;
}


/* fcn.0002e0b0 @ 0x2e0b0 */

ulong fcn.0002e0b0(void)

{
    return 0x6c720;
}


/* fcn.0002e0e0 @ 0x2e0e0 */

ulong fcn.0002e0e0(void)

{
    return 0x6cb40;
}


/* fcn.00031a30 @ 0x31a30 */

ulong fcn.00031a30(void)

{
    return 0x6d960;
}


/* fcn.00032b80 @ 0x32b80 */

ulong fcn.00032b80(void)

{
    return 0x4f880;
}


/* fcn.00021440 @ 0x21440 */

ulong fcn.00021440(void)

{
    fcn.00028a50();
    return 1;
}


/* fcn.00028a50 @ 0x28a50 */

void fcn.00028a50(void)

{
    int64_t iVar1;
    
    iVar1 = fcn.00028c10();
    fcn.00022870(iVar1);
    fcn.00029db0(0x6be28,0x8001,0x52890);
    iVar1 = fcn.00034940();
    fcn.00022870(iVar1);
    iVar1 = fcn.00018210();
    fcn.00022870(iVar1);
    fcn.00029db0(0x6be38,0x8001,0x52e10);
    fcn.00029db0(0x53480,0x8001,0x52e20);
    iVar1 = fcn.00018340();
    fcn.00022870(iVar1);
    iVar1 = fcn.00018350();
    fcn.00022870(iVar1);
    iVar1 = fcn.000184e0();
    fcn.00022870(iVar1);
    iVar1 = fcn.000184f0();
    fcn.00022870(iVar1);
    iVar1 = fcn.000184c0();
    fcn.00022870(iVar1);
    iVar1 = fcn.000184d0();
    fcn.00022870(iVar1);
    iVar1 = fcn.00029b50();
    fcn.00022870(iVar1);
    iVar1 = fcn.00034580();
    fcn.00022870(iVar1);
    iVar1 = fcn.00034590();
    fcn.00022870(iVar1);
    iVar1 = fcn.000345a0();
    fcn.00022870(iVar1);
    iVar1 = fcn.000345b0();
    fcn.00022870(iVar1);
    iVar1 = fcn.000345c0();
    fcn.00022870(iVar1);
    iVar1 = fcn.000345d0();
    fcn.00022870(iVar1);
    return;
}


/* fcn.00028c10 @ 0x28c10 */

ulong fcn.00028c10(void)

{
    return 0x6be50;
}


/* fcn.00022870 @ 0x22870 */

int fcn.00022870(int64_t arg1)

{
    int iVar1;
    int iVar2;
    int64_t arg1_00;
    int64_t iVar3;
    int iStack_18;
    
    arg1_00 = fcn.0001dee0(*arg1);
    iVar1 = fcn.00029db0(arg1_00,1,arg1);
    if (iVar1 == 0) {
        iVar2 = 0;
    }
    else {
        iVar3 = fcn.0001dff0(*arg1);
        iVar2 = fcn.00029db0(iVar3,1,arg1);
        if (iVar2 == 0) {
            iVar2 = 0;
        }
        else if ((*(arg1 + 4) != 0) && (*arg1 != *(arg1 + 4))) {
            iVar3 = fcn.0001dee0(*(arg1 + 4));
            iVar1 = fcn.00029db0(iVar3,0x8001,arg1_00);
            if (iVar1 == 0) {
                return 0;
            }
            iVar3 = fcn.0001dff0(*(arg1 + 4));
            iVar2 = fcn.00029db0(iVar3,0x8001,arg1_00);
        }
    }
    return iVar2;
}


/* fcn.00034940 @ 0x34940 */

ulong fcn.00034940(void)

{
    return 0x6dbc0;
}


/* fcn.00018210 @ 0x18210 */

ulong fcn.00018210(void)

{
    return 0x521c0;
}


/* fcn.00018340 @ 0x18340 */

ulong fcn.00018340(void)

{
    return 0x52210;
}


/* fcn.000184e0 @ 0x184e0 */

ulong fcn.000184e0(void)

{
    return 0x52350;
}


/* fcn.000184f0 @ 0x184f0 */

ulong fcn.000184f0(void)

{
    return 0x52300;
}


/* fcn.000184c0 @ 0x184c0 */

ulong fcn.000184c0(void)

{
    return 0x52260;
}


/* fcn.000184d0 @ 0x184d0 */

ulong fcn.000184d0(void)

{
    return 0x523a0;
}


/* fcn.00029b50 @ 0x29b50 */

ulong fcn.00029b50(void)

{
    return 0x6bf30;
}


/* fcn.00034580 @ 0x34580 */

ulong fcn.00034580(void)

{
    return 0x6da80;
}


/* fcn.00034590 @ 0x34590 */

ulong fcn.00034590(void)

{
    return 0x6db20;
}


/* fcn.000345a0 @ 0x345a0 */

ulong fcn.000345a0(void)

{
    return 0x6dad0;
}


/* fcn.000345b0 @ 0x345b0 */

ulong fcn.000345b0(void)

{
    return 0x6db70;
}


/* fcn.000345c0 @ 0x345c0 */

ulong fcn.000345c0(void)

{
    return 0x6d9e0;
}


/* fcn.000345d0 @ 0x345d0 */

ulong fcn.000345d0(void)

{
    return 0x6da30;
}


/* fcn.000214a0 @ 0x214a0 */

uint fcn.000214a0(void)

{
    uint uVar1;
    
    uVar1 = fcn.00026b60(*0x6fc80);
    *0x6fc8c = 1;
    return uVar1;
}


/* fcn.00026b60 @ 0x26b60 */

bool fcn.00026b60(int64_t arg1)

{
    bool bVar1;
    
    bVar1 = *0x6fce0 == 0;
    if (bVar1) {
        fcn.00032c10();
        fcn.0001cba0();
        *0x6fce0 = 1;
    }
    return !bVar1;
}


/* fcn.000214f0 @ 0x214f0 */

ulong fcn.000214f0(void)

{
    fcn.00026ba0();
    *0x6fc8c = 1;
    return 1;
}


/* fcn.00026ba0 @ 0x26ba0 */

void fcn.00026ba0(void)

{
    *0x6fce0 = 1;
    return;
}


/* fcn.00021530 @ 0x21530 */

bool fcn.00021530(void)

{
    int iVar1;
    
    iVar1 = fcn.00026730();
    if (iVar1 != 0) {
        *0x6fc7c = 1;
    }
    return iVar1 != 0;
}


/* fcn.00026730 @ 0x26730 */

ulong fcn.00026730(void)

{
    int iVar1;
    ulong uVar2;
    
    iVar1 = fcn.00021080(0x71104,0);
    if (iVar1 == 0) {
        uVar2 = 0;
    }
    else {
        iVar1 = fcn.00021080(0x71120,0);
        if (iVar1 == 0) {
            fcn.00021150(0x71104);
            uVar2 = 0;
        }
        else {
            uVar2 = 1;
        }
    }
    return uVar2;
}


/* fcn.00021580 @ 0x21580 */

ulong fcn.00021580(void)

{
    *0x6fca4 = 1;
    return 1;
}


/* fcn.00026780 @ 0x26780 */

void fcn.00026780(void)

{
    int64_t *piVar1;
    
    piVar1 = fcn.000210e0(0x71120);
    if (piVar1 != NULL) {
        fcn.000266e0(piVar1);
        fcn.000233b0(*piVar1);
        fcn.00019380(piVar1,0x4fff6,0);
        fcn.00021110(0x71120,0);
    }
    fcn.000190f0();
    fcn.00026640();
    return;
}


/* fcn.000266e0 @ 0x266e0 */

void fcn.000266e0(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if (piVar2 != NULL) {
        iVar1 = *piVar2;
        while (iVar1 != 0) {
            iVar1 = fcn.00026600(*piVar2);
            fcn.00026690(iVar1);
        }
    }
    return;
}


/* fcn.000233b0 @ 0x233b0 */

void fcn.000233b0(int64_t arg1)

{
    fcn.000225d0(arg1);
    return;
}


/* fcn.000225d0 @ 0x225d0 */

void fcn.000225d0(uint32_t arg1)

{
    uint in_register_0000000c;
    
    if (CONCAT44(in_register_0000000c,arg1) != 0) {
        fcn.00019380(*(CONCAT44(in_register_0000000c,arg1) + 8),0x4fff6,0);
        fcn.00019380(arg1,0x4fff6,0);
    }
    return;
}


/* fcn.00026640 @ 0x26640 */

bool fcn.00026640(void)

{
    uint32_t arg1;
    int iVar1;
    
    arg1 = fcn.00026620();
    iVar1 = fcn.00021110(0x71104,0);
    if (iVar1 != 0) {
        fcn.00019380(arg1,0x4fff6,0);
    }
    return iVar1 != 0;
}


/* fcn.0001ccd0 @ 0x1ccd0 */

void fcn.0001ccd0(void)

{
    int64_t iVar1;
    
    iVar1 = fcn.000210e0(0x7085c);
    if (iVar1 != 0) {
        fcn.00021110(0x7085c,0);
        fcn.0001c930(iVar1);
    }
    return;
}


/* fcn.000281c0 @ 0x281c0 */

void fcn.000281c0(void)

{
    uint32_t uVar1;
    
    uVar1 = fcn.000210e0(0x71128);
    fcn.00021110(0x71128,0);
    fcn.00026f90(uVar1);
    uVar1 = fcn.000210e0(0x71124);
    fcn.00021110(0x71124,0);
    fcn.00026f90(uVar1);
    return;
}


/* fcn.00026f90 @ 0x26f90 */

void fcn.00026f90(uint32_t arg1)

{
    uint in_register_0000000c;
    ulong *puVar1;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    if (puVar1 != NULL) {
        if (puVar1[0x29] != 0) {
            (**(puVar1[0x29] + 0x18))(puVar1);
        }
        fcn.00025810(puVar1[5]);
        fcn.00021000(*puVar1);
        fcn.00028770(0xf,arg1,arg1 + 0x98);
        if (*(puVar1 + 2) == 0) {
            fcn.000193e0(arg1,0x170,0x4fff6,0);
        }
        else {
            fcn.000289f0(arg1,0x170,0x4fff6,0);
        }
    }
    return;
}


/* fcn.000211e0 @ 0x211e0 */

int64_t fcn.000211e0(uint32_t arg1)

{
    int iVar1;
    int64_t iStack_18;
    
    iStack_18 = fcn.000210e0(0x4f82c);
    if (arg1 == 0) {
        fcn.00021110(0x4f82c,0);
    }
    else if ((iStack_18 == 0) && (iStack_18 = fcn.00019290(0xc,0x4fff6,0), iStack_18 != 0)) {
        iVar1 = fcn.00021110(0x4f82c,iStack_18);
        if (iVar1 == 0) {
            fcn.00019380(iStack_18,0x4fff6,0);
            return 0;
        }
    }
    return iStack_18;
}


/* fcn.00020f20 @ 0x20f20 */

bool fcn.00020f20(int64_t arg1)

{
    int iVar1;
    uint32_t uStack_14;
    
    uStack_14 = *arg1 == 1;
    iVar1 = fcn.00017900(uStack_14,0x6bb90,0x6bb30,0x2b);
    return iVar1 != 0;
}


/* fcn.00020f90 @ 0x20f90 */

bool fcn.00020f90(int64_t arg1)

{
    int iVar1;
    uint32_t uStack_14;
    
    uStack_14 = *arg1 == 1;
    iVar1 = fcn.00017900(uStack_14,0x6bb90,0x6bb30,0x32);
    return iVar1 != 0;
}


/* fcn.00014758 @ 0x14758 */

ulong fcn.00014758(uint32_t arg1,uint32_t arg2,uint32_t arg3)

{
    char cVar1;
    uint64_t extraout_RAX;
    uint in_register_0000000c;
    uint in_register_00000014;
    uint in_R8;
    char *pcVar2;
    char *pcVar3;
    int64_t iVar4;
    
    pcVar2 = CONCAT44(in_register_0000000c,arg1);
    pcVar3 = CONCAT44(in_R8,arg3);
    if ((((pcVar2 == NULL) || (pcVar3 == NULL)) || (1000000 < CONCAT44(in_register_00000014,arg2))) ||
       (CONCAT44(in_register_00000014,arg2) == 0)) {
        return 0x8000000000000002;
    }
    fcn.0001472c(arg3,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (pcVar3 <= pcVar2) {
        if (pcVar2 < pcVar3 + extraout_RAX + 1) {
            return 0x800000000000000f;
        }
        if (pcVar3 < pcVar2) goto code_r0x000147c9;
    }
    if (pcVar3 < pcVar2 + CONCAT44(in_register_00000014,arg2)) {
        return 0x800000000000000f;
    }
code_r0x000147c9:
    cVar1 = *pcVar3;
    if (cVar1 != '\0') {
        iVar4 = pcVar3 - pcVar2;
        do {
            *pcVar2 = cVar1;
            pcVar2 = pcVar2 + 1;
            cVar1 = pcVar2[iVar4];
        } while (cVar1 != '\0');
    }
    *pcVar2 = '\0';
    return 0;
}


/* fcn.00021cf0 @ 0x21cf0 */

int64_t fcn.00021cf0(uint32_t arg1,uint32_t arg2)

{
    uint in_register_0000000c;
    uint in_register_00000014;
    int64_t iStackX_10;
    char *pcStack_18;
    
    iStackX_10 = CONCAT44(in_register_00000014,arg2);
    pcStack_18 = CONCAT44(in_register_0000000c,arg1);
    while( true ) {
        if ((iStackX_10 == 0) || (*pcStack_18 == '\0')) break;
        pcStack_18 = pcStack_18 + 1;
        iStackX_10 = iStackX_10 + -1;
    }
    return pcStack_18 - CONCAT44(in_register_0000000c,arg1);
}


/* fcn.00021d60 @ 0x21d60 */

int64_t fcn.00021d60(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    uint in_R8;
    char *pcStackX_8;
    char *pcStackX_10;
    uint64_t uStackX_18;
    int64_t iStack_18;
    
    uStackX_18 = CONCAT44(in_R8,arg3);
    iStack_18 = 0;
    pcStackX_8 = arg1;
    for (pcStackX_10 = arg2; (1 < uStackX_18 && (*pcStackX_10 != '\0')); pcStackX_10 = pcStackX_10 + 1) {
        *pcStackX_8 = *pcStackX_10;
        pcStackX_8 = pcStackX_8 + 1;
        iStack_18 = iStack_18 + 1;
        uStackX_18 = uStackX_18 - 1;
    }
    if (uStackX_18 != 0) {
        *pcStackX_8 = '\0';
    }
    iVar1 = fcn.0001472c(pcStackX_10,0x1000);
    return iStack_18 + iVar1;
}


/* fcn.00022100 @ 0x22100 */

int64_t fcn.00022100(int64_t arg1,int arg2)

{
    int iVar1;
    int64_t iVar2;
    
    iVar2 = fcn.00019290(0x20,0x4fff6,0);
    if (iVar2 == 0) {
        iVar2 = 0;
    }
    else {
        *(iVar2 + 0x18) = arg1;
        if (0 < arg2) {
            iVar1 = fcn.00021f70(iVar2,arg2,1);
            if (iVar1 == 0) {
                fcn.000225d0(iVar2);
                iVar2 = 0;
            }
        }
    }
    return iVar2;
}


/* fcn.00021ed0 @ 0x21ed0 */

int fcn.00021ed0(int arg1,int arg2)

{
    int iStackX_10;
    uint32_t uStack_18;
    int iStack_14;
    
    uStack_18 = *0x6bbc4 % 3 != 0;
    iStackX_10 = arg2;
    while( true ) {
        if (arg1 <= iStackX_10) {
            return iStackX_10;
        }
        if (*0x6bbc4 <= iStackX_10) break;
        if (iStackX_10 < uStack_18 + (*0x6bbc4 / 3) * 2) {
            iStack_14 = iStackX_10 + iStackX_10 / 2;
        }
        else {
            iStack_14 = *0x6bbc4;
        }
        iStackX_10 = iStack_14;
    }
    return 0;
}


/* fcn.00021f70 @ 0x21f70 */

ulong fcn.00021f70(uint32_t arg1,int arg2,uint32_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int *piVar3;
    int iStack_28;
    
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    if (*0x6bbc4 - *piVar3 < arg2) {
        uVar2 = 0;
    }
    else {
        iStack_28 = *piVar3 + arg2;
        if (iStack_28 < *0x6bbc0) {
            iStack_28 = *0x6bbc0;
        }
        if (*(piVar3 + 2) == 0) {
            iVar1 = fcn.00019290(iStack_28 << 3,0x4fff6,0);
            *(piVar3 + 2) = iVar1;
            if (iVar1 == 0) {
                fcn.0001c9f0(0xf,0x81,0x41,0);
                uVar2 = 0;
            }
            else {
                piVar3[5] = iStack_28;
                uVar2 = 1;
            }
        }
        else {
            if (arg3 == 0) {
                if (iStack_28 <= piVar3[5]) {
                    return 1;
                }
                iStack_28 = fcn.00021ed0(iStack_28,piVar3[5]);
                if (iStack_28 == 0) {
                    return 0;
                }
            }
            else if (iStack_28 == piVar3[5]) {
                return 1;
            }
            iVar1 = fcn.000192e0(*(piVar3 + 2),iStack_28 << 3,0x4fff6,0);
            if (iVar1 == 0) {
                uVar2 = 0;
            }
            else {
                *(piVar3 + 2) = iVar1;
                piVar3[5] = iStack_28;
                uVar2 = 1;
            }
        }
    }
    return uVar2;
}


/* fcn.0004d284 @ 0x4d284 */

void fcn.0004d284(uint32_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uchar uVar1;
    uint uVar2;
    bool bVar3;
    int iVar4;
    uint *puVar5;
    uint in_register_0000000c;
    int64_t iVar6;
    uint *puVar7;
    uint in_register_00000014;
    uint64_t uVar8;
    uint *puVar9;
    uint *puVar10;
    uint *puVar11;
    uint64_t uVar12;
    uchar *puVar13;
    int64_t iVar14;
    uchar *puVar15;
    uint8_t uVar16;
    uint *puStack_40;
    uint *puStack_38;
    
    uVar12 = CONCAT44(in_register_00000014,arg2);
    puVar9 = CONCAT44(in_register_0000000c,arg1);
    do {
        if (((puVar9 | arg3) & 3) == 0) {
            uVar16 = arg3 != 4;
        }
        else {
            uVar16 = 2;
        }
        bVar3 = false;
        if (uVar12 < 7) {
            puVar11 = puVar9;
            do {
                do {
                    puVar11 = arg3 + puVar11;
                    if (uVar12 * arg3 + puVar9 <= puVar11) {
                        return;
                    }
                } while (puVar11 <= puVar9);
                puVar10 = puVar11;
                do {
                    puVar7 = puVar10 - arg3;
                    iVar4 = (*arg4)(puVar7,puVar10);
                    if (iVar4 < 1) break;
                    if (uVar16 == 0) {
                        uVar2 = *puVar10;
                        *puVar10 = *puVar7;
                        *puVar7 = uVar2;
                    }
                    else if (uVar16 < 2) {
                        uVar8 = arg3 >> 2;
                        puVar5 = puVar10;
                        do {
                            uVar2 = *puVar5;
                            *puVar5 = *puVar7;
                            puVar5 = puVar5 + 1;
                            *puVar7 = uVar2;
                            puVar7 = puVar7 + 1;
                            uVar8 = uVar8 - 1;
                        } while (uVar8 != 0);
                    }
                    else {
                        puVar5 = puVar10;
                        iVar14 = arg3;
                        do {
                            uVar1 = *puVar5;
                            *puVar5 = *puVar7;
                            puVar5 = puVar5 + 1;
                            *puVar7 = uVar1;
                            puVar7 = puVar7 + 1;
                            iVar14 = iVar14 + -1;
                        } while (iVar14 != 0);
                    }
                    puVar10 = puVar10 - arg3;
                } while (puVar9 < puVar10);
            } while( true );
        }
        puVar11 = (uVar12 >> 1) * arg3 + puVar9;
        if (7 < uVar12) {
            puVar10 = (uVar12 - 1) * arg3 + puVar9;
            puStack_40 = puVar9;
            if (0x28 < uVar12) {
                iVar6 = (uVar12 >> 3) * arg3;
                iVar14 = iVar6 * 2;
                puStack_40 = iVar6 + puVar9;
                iVar4 = (*arg4)(puVar9,puStack_40);
                if (iVar4 < 0) {
                    iVar4 = (*arg4)();
                    if (-1 < iVar4) {
                        iVar4 = (*arg4)(puVar9,iVar14 + puVar9);
                        puStack_40 = puVar9;
                        if (iVar4 < 0) {
                            puStack_40 = iVar14 + puVar9;
                        }
                    }
                }
                else {
                    iVar4 = (*arg4)(puStack_40,iVar14 + puVar9);
                    if (iVar4 < 1) {
                        iVar4 = (*arg4)(puVar9,iVar14 + puVar9);
                        puStack_40 = iVar14 + puVar9;
                        if (iVar4 < 0) {
                            puStack_40 = puVar9;
                        }
                    }
                }
                puVar7 = iVar6 + puVar11;
                puVar5 = puVar11 - iVar6;
                iVar4 = (*arg4)(puVar5,puVar11);
                if (iVar4 < 0) {
                    iVar4 = (*arg4)();
                    if (-1 < iVar4) {
                        iVar4 = (*arg4)(puVar5,puVar7);
                        puVar11 = puVar5;
                        if (iVar4 < 0) {
                            puVar11 = puVar7;
                        }
                    }
                }
                else {
                    iVar4 = (*arg4)(puVar11,puVar7);
                    if (iVar4 < 1) {
                        iVar4 = (*arg4)(puVar5,puVar7);
                        puVar11 = puVar7;
                        if (iVar4 < 0) {
                            puVar11 = puVar5;
                        }
                    }
                }
                puVar5 = puVar10 - iVar6;
                puVar7 = puVar10 + iVar6 * -2;
                iVar4 = (*arg4)(puVar7,puVar5);
                if (iVar4 < 0) {
                    iVar4 = (*arg4)();
                    if (iVar4 < 0) goto code_r0x0004d499;
                    iVar4 = (*arg4)(puVar7,puVar10);
                    if (iVar4 < 0) {
                        puVar7 = puVar10;
                    }
                    puVar10 = puVar7;
                }
                else {
                    iVar4 = (*arg4)(puVar5,puVar10);
                    if (iVar4 < 1) {
                        iVar4 = (*arg4)(puVar7,puVar10);
                        if (iVar4 < 0) {
                            puVar10 = puVar7;
                        }
                    }
                    else {
code_r0x0004d499:
                        puVar10 = puVar5;
                    }
                }
            }
            iVar4 = (*arg4)(puStack_40,puVar11);
            if (iVar4 < 0) {
                iVar4 = (*arg4)();
                if (-1 < iVar4) {
                    iVar4 = (*arg4)(puStack_40);
                    puVar11 = puStack_40;
                    if (iVar4 < 0) {
                        puVar11 = puVar10;
                    }
                }
            }
            else {
                iVar4 = (*arg4)(puVar11);
                if (iVar4 < 1) {
                    iVar4 = (*arg4)(puStack_40);
                    puVar11 = puVar10;
                    if (iVar4 < 0) {
                        puVar11 = puStack_40;
                    }
                }
            }
        }
        if (uVar16 == 0) {
            uVar2 = *puVar9;
            *puVar9 = *puVar11;
            *puVar11 = uVar2;
        }
        else if (uVar16 < 2) {
            uVar8 = arg3 >> 2;
            puVar10 = puVar9;
            do {
                uVar2 = *puVar10;
                *puVar10 = *puVar11;
                puVar10 = puVar10 + 1;
                *puVar11 = uVar2;
                puVar11 = puVar11 + 1;
                uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
        }
        else {
            puVar10 = puVar9;
            iVar14 = arg3;
            do {
                uVar1 = *puVar10;
                *puVar10 = *puVar11;
                puVar10 = puVar10 + 1;
                *puVar11 = uVar1;
                puVar11 = puVar11 + 1;
                iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
        }
        puVar10 = (uVar12 - 1) * arg3 + puVar9;
        puVar11 = arg3 + puVar9;
        puStack_40 = puVar10;
        puStack_38 = puVar11;
        for (; puVar11 <= puVar10; puVar11 = puVar11 + arg3) {
            do {
                iVar4 = (*arg4)(puVar11);
                if (0 < iVar4) break;
                if (iVar4 == 0) {
                    bVar3 = true;
                    if (uVar16 == 0) {
                        uVar2 = *puStack_38;
                        *puStack_38 = *puVar11;
                        *puVar11 = uVar2;
                    }
                    else if (uVar16 < 2) {
                        uVar8 = arg3 >> 2;
                        puVar7 = puStack_38;
                        puVar5 = puVar11;
                        do {
                            uVar2 = *puVar7;
                            *puVar7 = *puVar5;
                            puVar7 = puVar7 + 1;
                            *puVar5 = uVar2;
                            puVar5 = puVar5 + 1;
                            uVar8 = uVar8 - 1;
                        } while (uVar8 != 0);
                    }
                    else {
                        puVar7 = puStack_38;
                        puVar5 = puVar11;
                        iVar14 = arg3;
                        do {
                            uVar1 = *puVar7;
                            *puVar7 = *puVar5;
                            puVar7 = puVar7 + 1;
                            *puVar5 = uVar1;
                            puVar5 = puVar5 + 1;
                            iVar14 = iVar14 + -1;
                        } while (iVar14 != 0);
                    }
                    puStack_38 = puStack_38 + arg3;
                }
                puVar11 = puVar11 + arg3;
            } while (puVar11 <= puVar10);
            if (puVar10 < puVar11) break;
            do {
                iVar4 = (*arg4)(puVar10);
                if (iVar4 < 0) break;
                if (iVar4 == 0) {
                    bVar3 = true;
                    if (uVar16 == 0) {
                        uVar2 = *puVar10;
                        *puVar10 = *puStack_40;
                        *puStack_40 = uVar2;
                    }
                    else if (uVar16 < 2) {
                        uVar8 = arg3 >> 2;
                        puVar5 = puStack_40;
                        puVar7 = puVar10;
                        do {
                            uVar2 = *puVar7;
                            *puVar7 = *puVar5;
                            puVar7 = puVar7 + 1;
                            *puVar5 = uVar2;
                            puVar5 = puVar5 + 1;
                            uVar8 = uVar8 - 1;
                        } while (uVar8 != 0);
                    }
                    else {
                        puVar7 = puStack_40;
                        puVar5 = puVar10;
                        iVar14 = arg3;
                        do {
                            uVar1 = *puVar5;
                            *puVar5 = *puVar7;
                            puVar5 = puVar5 + 1;
                            *puVar7 = uVar1;
                            puVar7 = puVar7 + 1;
                            iVar14 = iVar14 + -1;
                        } while (iVar14 != 0);
                    }
                    puStack_40 = puStack_40 - arg3;
                }
                puVar10 = puVar10 - arg3;
            } while (puVar11 <= puVar10);
            if (puVar10 < puVar11) break;
            if (uVar16 == 0) {
                uVar2 = *puVar11;
                *puVar11 = *puVar10;
                *puVar10 = uVar2;
            }
            else if (uVar16 < 2) {
                uVar8 = arg3 >> 2;
                puVar7 = puVar11;
                puVar5 = puVar10;
                do {
                    uVar2 = *puVar7;
                    *puVar7 = *puVar5;
                    puVar7 = puVar7 + 1;
                    *puVar5 = uVar2;
                    puVar5 = puVar5 + 1;
                    uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
            }
            else {
                puVar7 = puVar11;
                puVar5 = puVar10;
                iVar14 = arg3;
                do {
                    uVar1 = *puVar7;
                    *puVar7 = *puVar5;
                    puVar7 = puVar7 + 1;
                    *puVar5 = uVar1;
                    puVar5 = puVar5 + 1;
                    iVar14 = iVar14 + -1;
                } while (iVar14 != 0);
            }
            bVar3 = true;
            puVar10 = puVar10 - arg3;
        }
        if (!bVar3) {
            puVar11 = puVar9;
            do {
                do {
                    puVar11 = arg3 + puVar11;
                    if (uVar12 * arg3 + puVar9 <= puVar11) {
                        return;
                    }
                } while (puVar11 <= puVar9);
                puVar10 = puVar11;
                do {
                    puVar7 = puVar10 - arg3;
                    iVar4 = (*arg4)(puVar7,puVar10);
                    if (iVar4 < 1) break;
                    if (uVar16 == 0) {
                        uVar2 = *puVar10;
                        *puVar10 = *puVar7;
                        *puVar7 = uVar2;
                    }
                    else if (uVar16 < 2) {
                        uVar8 = arg3 >> 2;
                        puVar5 = puVar10;
                        do {
                            uVar2 = *puVar5;
                            *puVar5 = *puVar7;
                            puVar5 = puVar5 + 1;
                            *puVar7 = uVar2;
                            puVar7 = puVar7 + 1;
                            uVar8 = uVar8 - 1;
                        } while (uVar8 != 0);
                    }
                    else {
                        puVar5 = puVar10;
                        iVar14 = arg3;
                        do {
                            uVar1 = *puVar5;
                            *puVar5 = *puVar7;
                            puVar5 = puVar5 + 1;
                            *puVar7 = uVar1;
                            puVar7 = puVar7 + 1;
                            iVar14 = iVar14 + -1;
                        } while (iVar14 != 0);
                    }
                    puVar10 = puVar10 - arg3;
                } while (puVar9 < puVar10);
            } while( true );
        }
        uVar8 = puVar11 - puStack_38;
        iVar14 = uVar12 * arg3;
        uVar12 = uVar8;
        if (puStack_38 - puVar9 < uVar8) {
            uVar12 = puStack_38 - puVar9;
        }
        if (uVar12 != 0) {
            puVar7 = puVar11 - uVar12;
            puVar5 = puVar9;
            if (uVar16 < 2) {
                uVar12 = uVar12 >> 2;
                do {
                    uVar2 = *puVar5;
                    *puVar5 = *puVar7;
                    puVar5 = puVar5 + 1;
                    *puVar7 = uVar2;
                    puVar7 = puVar7 + 1;
                    uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
            }
            else {
                do {
                    uVar1 = *puVar5;
                    *puVar5 = *puVar7;
                    puVar5 = puVar5 + 1;
                    *puVar7 = uVar1;
                    puVar7 = puVar7 + 1;
                    uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
            }
        }
        puVar15 = puStack_40 - puVar10;
        puVar13 = puVar9 + ((iVar14 - puStack_40) - arg3);
        if (puVar15 < puVar13) {
            puVar13 = puVar15;
        }
        if (puVar13 != NULL) {
            puVar10 = puVar9 + (iVar14 - puVar13);
            if (uVar16 < 2) {
                uVar12 = puVar13 >> 2;
                do {
                    uVar2 = *puVar11;
                    *puVar11 = *puVar10;
                    puVar11 = puVar11 + 1;
                    *puVar10 = uVar2;
                    puVar10 = puVar10 + 1;
                    uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
            }
            else {
                do {
                    uVar1 = *puVar11;
                    *puVar11 = *puVar10;
                    puVar11 = puVar11 + 1;
                    *puVar10 = uVar1;
                    puVar10 = puVar10 + 1;
                    puVar13 = puVar13 + -1;
                } while (puVar13 != NULL);
            }
        }
        if (arg3 < uVar8) {
            fcn.0004d284(puVar9,uVar8 / arg3,arg3,arg4);
        }
        if (puVar15 <= arg3) {
            return;
        }
        puVar9 = puVar9 + (iVar14 - puVar15);
        uVar12 = puVar15 / arg3;
    } while( true );
}


/* fcn.00022340 @ 0x22340 */

int fcn.00022340(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint in_register_0000000c;
    uint32_t *puVar2;
    uint in_register_00000014;
    int64_t iStackX_10;
    uint uStackX_18;
    int iStack_18;
    int iStack_14;
    
    iStackX_10 = CONCAT44(in_register_00000014,arg2);
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    uStackX_18 = arg3;
    if ((puVar2 == NULL) || (*puVar2 == 0)) {
        iStack_14 = -1;
    }
    else if (*(puVar2 + 6) == 0) {
        for (iStack_18 = 0; iStack_18 < *puVar2; iStack_18 = iStack_18 + 1) {
            if (*(*(puVar2 + 2) + iStack_18 * 8) == iStackX_10) {
                return iStack_18;
            }
        }
        iStack_14 = -1;
    }
    else {
        if (puVar2[4] == 0) {
            if (1 < *puVar2) {
                fcn.0004d284(*(puVar2 + 2),*puVar2,8,*(puVar2 + 6));
            }
            puVar2[4] = 1;
        }
        if (iStackX_10 == 0) {
            iStack_14 = -1;
        }
        else {
            iVar1 = fcn.0001e610(&iStackX_10,*(puVar2 + 2),*puVar2,8);
            if (iVar1 == 0) {
                iStack_14 = -1;
            }
            else {
                iStack_14 = iVar1 - *(puVar2 + 2) >> 3;
            }
        }
    }
    return iStack_14;
}


/* fcn.00022180 @ 0x22180 */

int fcn.00022180(uint32_t arg1,uint32_t arg2,int arg3)

{
    int iVar1;
    uint in_register_0000000c;
    int *piVar2;
    uint in_register_00000014;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if ((piVar2 == NULL) || (*piVar2 == *0x6bbc4)) {
        iVar1 = 0;
    }
    else {
        iVar1 = fcn.00021f70(arg1,1,0);
        if (iVar1 == 0) {
            iVar1 = 0;
        }
        else {
            if ((arg3 < *piVar2) && (-1 < arg3)) {
                fcn.0001320c(*(piVar2 + 2) + (arg3 + 1) * 8,*(piVar2 + 2) + arg3 * 8,(*piVar2 - arg3) * 8);
                *(*(piVar2 + 2) + arg3 * 8) = CONCAT44(in_register_00000014,arg2);
            }
            else {
                *(*(piVar2 + 2) + *piVar2 * 8) = CONCAT44(in_register_00000014,arg2);
            }
            *piVar2 = *piVar2 + 1;
            piVar2[4] = 0;
            iVar1 = *piVar2;
        }
    }
    return iVar1;
}


/* fcn.00022290 @ 0x22290 */

ulong fcn.00022290(uint32_t arg1,uint32_t arg2)

{
    ulong uVar1;
    uint in_register_0000000c;
    int *piVar2;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar1 = *(*(piVar2 + 2) + arg2 * 8);
    if (arg2 != *piVar2 - 1U) {
        fcn.0001320c(*(piVar2 + 2) + arg2 * 8,*(piVar2 + 2) + (arg2 + 1) * 8,((*piVar2 - arg2) + -1) * 8);
    }
    *piVar2 = *piVar2 + -1;
    return uVar1;
}


/* fcn.00022550 @ 0x22550 */

void fcn.00022550(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    int *piVar1;
    int iStack_18;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    if (piVar1 != NULL) {
        for (iStack_18 = 0; iStack_18 < *piVar1; iStack_18 = iStack_18 + 1) {
            if (*(*(piVar1 + 2) + iStack_18 * 8) != 0) {
                (*arg2)(*(*(piVar1 + 2) + iStack_18 * 8));
            }
        }
        fcn.000225d0(arg1);
    }
    return;
}


/* fcn.00021170 @ 0x21170 */

ulong fcn.00021170(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_register_0000000c;
    int *piVar1;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    *piVar1 = *piVar1 + arg2;
    *arg3 = *piVar1;
    return 1;
}


/* fcn.000227b0 @ 0x227b0 */

void fcn.000227b0(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t iVar1;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if ((*(iVar1 + 0x10) != 0) && (*(*(iVar1 + 0x10) + 0xa8) != 0)) {
        (**(*(iVar1 + 0x10) + 0xa8))(iVar1);
        *(iVar1 + 0x28) = 0;
    }
    return;
}


/* fcn.00022690 @ 0x22690 */

void fcn.00022690(uint32_t arg1,int64_t arg2)

{
    fcn.00022550(arg1,arg2);
    return;
}


/* fcn.0001dee0 @ 0x1dee0 */

ulong fcn.0001dee0(int arg1)

{
    int64_t iVar1;
    ulong uVar2;
    uint32_t auStack_40 [2];
    uchar *puStack_38;
    uchar auStack_30 [16];
    int iStack_20;
    
    if ((arg1 < 0) || (0x4aa < arg1)) {
        if (*0x6fc50 == 0) {
            uVar2 = 0;
        }
        else {
            auStack_40[0] = 3;
            puStack_38 = auStack_30;
            iStack_20 = arg1;
            iVar1 = fcn.0001d610(*0x6fc50,auStack_40);
            if (iVar1 == 0) {
                fcn.0001c9f0(8,0x68,0x65,0);
                uVar2 = 0;
            }
            else {
                uVar2 = **(iVar1 + 8);
            }
        }
    }
    else if ((arg1 == 0) || (*(arg1 * 0x28 + 0x5ab20) != 0)) {
        uVar2 = *(arg1 * 0x28 + 0x5ab10);
    }
    else {
        fcn.0001c9f0(8,0x68,0x65,0);
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001dff0 @ 0x1dff0 */

ulong fcn.0001dff0(int arg1)

{
    int64_t iVar1;
    ulong uVar2;
    uint32_t auStack_40 [2];
    uchar *puStack_38;
    uchar auStack_30 [16];
    int iStack_20;
    
    if ((arg1 < 0) || (0x4aa < arg1)) {
        if (*0x6fc50 == 0) {
            uVar2 = 0;
        }
        else {
            auStack_40[0] = 3;
            puStack_38 = auStack_30;
            iStack_20 = arg1;
            iVar1 = fcn.0001d610(*0x6fc50,auStack_40);
            if (iVar1 == 0) {
                fcn.0001c9f0(8,0x66,0x65,0);
                uVar2 = 0;
            }
            else {
                uVar2 = *(*(iVar1 + 8) + 8);
            }
        }
    }
    else if ((arg1 == 0) || (*(arg1 * 0x28 + 0x5ab20) != 0)) {
        uVar2 = *(arg1 * 0x28 + 0x5ab18);
    }
    else {
        fcn.0001c9f0(8,0x66,0x65,0);
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00022c10 @ 0x22c10 */

ulong fcn.00022c10(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint8_t *puVar1;
    uint32_t uStack_28;
    uint32_t uStack_24;
    uint8_t *puStack_18;
    
    puVar1 = *arg1;
    uStack_24 = 0;
    if (arg4 < 1) {
        return 0;
    }
    if (*puVar1 == 0x80) {
        *arg2 = 1;
        puStack_18 = puVar1 + 1;
    }
    else {
        *arg2 = 0;
        uStack_28 = *puVar1 & 0x7f;
        puStack_18 = puVar1 + 1;
        if ((*puVar1 & 0x80) == 0) {
            uStack_24 = uStack_28;
        }
        else {
            if (arg4 - 1 < uStack_28 + 1) {
                return 0;
            }
            for (; (0 < uStack_28 && (*puStack_18 == 0)); puStack_18 = puStack_18 + 1) {
                uStack_28 = uStack_28 - 1;
            }
            if (4 < uStack_28) {
                return 0;
            }
            for (; 0 < uStack_28; uStack_28 = uStack_28 - 1) {
                uStack_24 = uStack_24 << 8 | *puStack_18;
                puStack_18 = puStack_18 + 1;
            }
            if (0x7fffffff < uStack_24) {
                return 0;
            }
        }
    }
    *arg1 = puStack_18;
    *arg3 = uStack_24;
    return 1;
}


/* fcn.00022f30 @ 0x22f30 */

void fcn.00022f30(int64_t arg1,int arg2)

{
    int iVar1;
    int iStackX_10;
    int iStack_28;
    int iStack_24;
    uint8_t *puStack_18;
    
    puStack_18 = *arg1;
    if (arg2 < 0x80) {
        iStackX_10._0_1_ = arg2;
        *puStack_18 = iStackX_10;
        puStack_18 = puStack_18 + 1;
    }
    else {
        iStack_28 = 0;
        for (iStack_24 = arg2; iVar1 = iStack_28, 0 < iStack_24; iStack_24 = iStack_24 >> 8) {
            iStack_28 = iStack_28 + 1;
        }
        *puStack_18 = iStack_28 | 0x80;
        iStackX_10 = arg2;
        while( true ) {
            if (iStack_28 < 1) break;
            puStack_18[iStack_28 + -1 + 1] = iStackX_10;
            iStackX_10 = iStackX_10 >> 8;
            iStack_28 = iStack_28 + -1;
        }
        puStack_18 = puStack_18 + iVar1 + 1;
    }
    *arg1 = puStack_18;
    return;
}


/* fcn.000232b0 @ 0x232b0 */

void fcn.000232b0(uint32_t arg1,uint32_t arg2)

{
    uint in_register_0000000c;
    int64_t iVar1;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if (iVar1 != 0) {
        if ((*(iVar1 + 0x10) & 0x10) == 0) {
            fcn.00019380(*(iVar1 + 8),0x4fff6,0);
        }
        if (arg2 == 0) {
            fcn.00019380(arg1,0x4fff6,0);
        }
    }
    return;
}


/* fcn.00022620 @ 0x22620 */

uint fcn.00022620(uint32_t arg1)

{
    uint in_register_0000000c;
    uint uStack_18;
    
    if (CONCAT44(in_register_0000000c,arg1) == NULL) {
        uStack_18 = 0xffffffff;
    }
    else {
        uStack_18 = *CONCAT44(in_register_0000000c,arg1);
    }
    return uStack_18;
}


/* fcn.00022650 @ 0x22650 */

ulong fcn.00022650(uint32_t arg1,int arg2)

{
    ulong uVar1;
    uint in_register_0000000c;
    int *piVar2;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if (((piVar2 == NULL) || (arg2 < 0)) || (*piVar2 <= arg2)) {
        uVar1 = 0;
    }
    else {
        uVar1 = *(*(piVar2 + 2) + arg2 * 8);
    }
    return uVar1;
}


/* fcn.00023400 @ 0x23400 */

void fcn.00023400(uint32_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    int64_t *arg1_00;
    uint in_R8;
    ulong noname_2;
    code *pcVar4;
    int64_t iVar5;
    
    iVar3 = CONCAT44(in_R8,arg3);
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar5 = 0;
    iVar2 = *(arg2 + 0x18);
    if ((arg1_00 != NULL) && ((*arg2 == '\0' || (*arg1_00 != 0)))) {
        if ((iVar2 == 0) || (*(iVar2 + 0x18) == 0)) {
            pcVar4 = NULL;
        }
        else {
            pcVar4 = *(iVar2 + 0x18);
        }
    //switch table (7 cases) at 0x237d8
        switch(*arg2) {
        case 0:
            if (*(arg2 + 8) == 0) {
                fcn.000238e0(arg1_00,arg2,arg3);
            }
            else {
                fcn.00023800(arg1_00,*(arg2 + 8),iVar3,arg4);
            }
            break;
        case 1:
        case 6:
            iVar1 = fcn.0002a290(arg1_00,0xffffffff,arg2);
            if (iVar1 == 0) {
                if (pcVar4 != NULL) {
                    arg4 = 0;
                    iVar1 = (*pcVar4)(2,arg1_00);
                    if (iVar1 == 2) {
                        return;
                    }
                }
                fcn.0002a480(arg1_00,arg2);
                iVar2 = *(arg2 + 0x10) * 0x20 + *(arg2 + 8);
                for (iVar1 = 0; iVar1 < *(arg2 + 0x10); iVar1 = iVar1 + 1) {
                    iVar2 = iVar2 + -0x20;
                    noname_2 = 0;
                    iVar3 = fcn.0002a520(arg1_00,iVar2,0);
                    if (iVar3 != 0) {
                        iVar5 = fcn.0002a4f0(arg1_00,iVar3);
                        fcn.00023800(iVar5,iVar3,noname_2,arg4);
                    }
                }
                if (pcVar4 != NULL) {
                    (*pcVar4)(3,arg1_00,arg2,0);
                }
                if (arg3 == 0) {
                    fcn.00019380(*arg1_00,0x4fff6,0);
                    *arg1_00 = 0;
                }
            }
            break;
        case 2:
            if (pcVar4 != NULL) {
                arg4 = 0;
                iVar3 = arg2;
                iVar1 = (*pcVar4)(2,arg1_00);
                if (iVar1 == 2) {
                    return;
                }
            }
            iVar1 = fcn.0002a260(arg1_00,arg2);
            if ((-1 < iVar1) && (iVar1 < *(arg2 + 0x10))) {
                iVar5 = iVar1 * 0x20 + *(arg2 + 8);
                iVar2 = fcn.0002a4f0(arg1_00,iVar5);
                fcn.00023800(iVar2,iVar5,iVar3,arg4);
            }
            if (pcVar4 != NULL) {
                (*pcVar4)(3,arg1_00,arg2,0,iVar1,pcVar4,iVar5);
            }
            if (arg3 == 0) {
                fcn.00019380(*arg1_00,0x4fff6,0);
                *arg1_00 = 0;
            }
            break;
        case 4:
            iVar2 = *(arg2 + 0x18);
            if ((iVar2 != 0) && (*(iVar2 + 0x10) != 0)) {
                (**(iVar2 + 0x10))(arg1_00,arg2);
            }
            break;
        case 5:
            fcn.000238e0(arg1_00,arg2,arg3);
        }
    }
    return;
}


/* fcn.00023800 @ 0x23800 */

void fcn.00023800(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t arg1_00;
    uint32_t arg3_00;
    int iVar1;
    uint32_t arg1_01;
    int64_t *piStackX_8;
    int iStack_28;
    int64_t iStack_18;
    ulong auStack_10 [2];
    
    arg3_00 = *arg2 & 0x1000;
    piStackX_8 = arg1;
    if (arg3_00 != 0) {
        piStackX_8 = &iStack_18;
        iStack_18 = arg1;
    }
    if ((*arg2 & 6) == 0) {
        fcn.00023400(piStackX_8,*(arg2 + 0x18),arg3_00,arg3);
    }
    else {
        arg1_00 = *piStackX_8;
        iStack_28 = 0;
        while( true ) {
            arg1_01 = arg1_00;
            iVar1 = fcn.00023370(arg1_01);
            if (iVar1 <= iStack_28) break;
            auStack_10[0] = fcn.00023390(arg1_01,iStack_28);
            fcn.00023400(auStack_10,*(arg2 + 0x18),arg3_00,arg3);
            iStack_28 = iStack_28 + 1;
        }
        fcn.000233b0(arg1_00);
        *piStackX_8 = 0;
    }
    return;
}


/* fcn.0002a260 @ 0x2a260 */

uint fcn.0002a260(int64_t arg1,int64_t arg2)

{
    return *(*(arg2 + 4) + *arg1);
}


/* fcn.0002a4f0 @ 0x2a4f0 */

int64_t fcn.0002a4f0(int64_t arg1,int64_t arg2)

{
    return *(arg2 + 8) + *arg1;
}


/* fcn.0002a290 @ 0x2a290 */

int fcn.0002a290(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    int iStack_28;
    int iStack_24;
    int64_t *piStack_20;
    int64_t iStack_18;
    uint *puStack_10;
    
    iStack_24 = arg2;
    iStack_28 = -1;
    if ((*arg3 == '\x01') || (*arg3 == '\x06')) {
        iStack_18 = *(arg3 + 0x18);
        if ((iStack_18 == 0) || ((*(iStack_18 + 8) & 1) == 0)) {
            iStack_28 = 0;
        }
        else {
            puStack_10 = *(iStack_18 + 0xc) + *arg1;
            piStack_20 = *(iStack_18 + 0x10) + *arg1;
            if (iStack_24 == -1) {
                iVar1 = fcn.00021170(puStack_10,0xffffffff,&iStack_28,*piStack_20);
                if (iVar1 == 0) {
                    return -1;
                }
                if (iStack_28 == 0) {
                    fcn.00021000(*piStack_20);
                    *piStack_20 = 0;
                }
            }
            else if (iStack_24 == 0) {
                iStack_28 = 1;
                *puStack_10 = 1;
                iVar2 = fcn.00020ee0();
                *piStack_20 = iVar2;
                if (*piStack_20 == 0) {
                    fcn.0001c9f0(0xd,0xe9,0x41,0);
                    return -1;
                }
            }
            else if ((iStack_24 == 1) && (iVar1 = fcn.00021170(puStack_10,1,&iStack_28,*piStack_20), iVar1 == 0)) {
                return -1;
            }
        }
    }
    else {
        iStack_28 = 0;
    }
    return iStack_28;
}


/* fcn.0002a480 @ 0x2a480 */

void fcn.0002a480(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    
    puVar1 = fcn.0002a420(arg1,arg2);
    if (puVar1 != NULL) {
        fcn.00019380(*puVar1,0x4fff6,0);
        *puVar1 = 0;
        *(puVar1 + 1) = 0;
        *(puVar1 + 0xc) = 1;
    }
    return;
}


/* fcn.0002a420 @ 0x2a420 */

int64_t fcn.0002a420(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if ((piVar2 == NULL) || (*piVar2 == 0)) {
        iVar1 = 0;
    }
    else {
        iVar1 = *(arg2 + 0x18);
        if ((iVar1 == 0) || ((*(iVar1 + 8) & 2) == 0)) {
            iVar1 = 0;
        }
        else {
            iVar1 = *(iVar1 + 0x20) + *piVar2;
        }
    }
    return iVar1;
}


/* fcn.0002a520 @ 0x2a520 */

int * fcn.0002a520(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    int iStack_28;
    int iStack_24;
    int64_t iStack_20;
    int *piStack_18;
    int64_t *piStack_10;
    
    if ((*arg2 & 0x300) == 0) {
        return arg2;
    }
    iStack_20 = *(arg2 + 0x18);
    piStack_10 = *(iStack_20 + 4) + *arg1;
    if (*piStack_10 == 0) {
        if (*(iStack_20 + 0x28) != 0) {
            return *(iStack_20 + 0x28);
        }
    }
    else {
        if ((*arg2 & 0x100) == 0) {
            iStack_24 = fcn.0002a200(*piStack_10);
        }
        else {
            iStack_24 = fcn.0001e220(*piStack_10);
        }
        if ((*(iStack_20 + 8) != 0) && (iVar1 = (**(iStack_20 + 8))(&iStack_24), iVar1 == 0)) {
            fcn.0001c9f0(0xd,0x6e,0xa4,0);
            return NULL;
        }
        piStack_18 = *(iStack_20 + 0x10);
        for (iStack_28 = 0; iStack_28 < *(iStack_20 + 0x18); iStack_28 = iStack_28 + 1) {
            if (*piStack_18 == iStack_24) {
                return piStack_18 + 2;
            }
            piStack_18 = piStack_18 + 10;
        }
        if (*(iStack_20 + 0x20) != 0) {
            return *(iStack_20 + 0x20);
        }
    }
    if (arg3 != 0) {
        fcn.0001c9f0(0xd,0x6e,0xa4,0);
    }
    return NULL;
}


/* fcn.00023370 @ 0x23370 */

void fcn.00023370(uint32_t arg1)

{
    fcn.00022620(arg1);
    return;
}


/* fcn.00023390 @ 0x23390 */

void fcn.00023390(uint32_t arg1,int arg2)

{
    fcn.00022650(arg1,arg2);
    return;
}


/* fcn.000241c0 @ 0x241c0 */

int fcn.000241c0(int arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint32_t in_register_0000000c;
    uint64_t uVar6;
    uint32_t uStack_24;
    
    uVar6 = CONCAT44(in_register_0000000c,arg1);
    uStack_24 = uVar6 != 0;
    iVar1 = -in_register_0000000c;
    uVar6 = uVar6 ^ (in_register_0000000c ^ uVar6) & iVar1 >> 0x3f;
    iVar2 = -(uVar6 >> 0x10);
    uVar6 = uVar6 ^ (uVar6 >> 0x10 ^ uVar6) & iVar2 >> 0x3f;
    iVar3 = -(uVar6 >> 8);
    uVar6 = uVar6 ^ (uVar6 >> 8 ^ uVar6) & iVar3 >> 0x3f;
    iVar4 = -(uVar6 >> 4);
    uVar6 = uVar6 ^ (uVar6 >> 4 ^ uVar6) & iVar4 >> 0x3f;
    iVar5 = -(uVar6 >> 2);
    return uStack_24 + (iVar1 >> 0x3f & 0x20) + (iVar2 >> 0x3f & 0x10) + (iVar3 >> 0x3f & 8) + (iVar4 >> 0x3f & 4) +
           (iVar5 >> 0x3f & 2) + (-((uVar6 ^ (uVar6 >> 2 ^ uVar6) & iVar5 >> 0x3f) >> 1) >> 0x3f & 1);
}


/* fcn.00024ba0 @ 0x24ba0 */

uint fcn.00024ba0(int64_t arg1,int64_t arg2,int arg3)

{
    uint uVar1;
    
    if (arg3 < 0) {
        fcn.0001c9f0(3,0x91,0x77,0);
        uVar1 = 0;
    }
    else {
        uVar1 = fcn.00024c10(arg1,arg2,arg3);
        fcn.00024a70(arg1);
    }
    return uVar1;
}


/* fcn.0002a8e0 @ 0x2a8e0 */

uint64_t fcn.0002a8e0(uint32_t arg1,uint32_t arg2,uint32_t arg3)

{
    int iVar1;
    uint64_t uVar2;
    uint8_t uVar3;
    uint in_register_0000000c;
    uint in_register_00000014;
    uint in_R8;
    uint64_t uStackX_8;
    uint64_t uStackX_10;
    uint64_t uStackX_18;
    uint64_t uStack_50;
    uint64_t uStack_48;
    uint64_t uStack_40;
    int iStack_38;
    uint64_t uStack_20;
    
    uStackX_10 = CONCAT44(in_register_00000014,arg2);
    uStackX_8 = CONCAT44(in_register_0000000c,arg1);
    uStackX_18 = CONCAT44(in_R8,arg3);
    uStack_20 = 0;
    iStack_38 = 2;
    if (uStackX_18 == 0) {
        uStack_20 = 0xffffffffffffffff;
    }
    else {
        iVar1 = fcn.000241c0(arg3);
        if (uStackX_18 <= uStackX_8) {
            uStackX_8 = uStackX_8 - uStackX_18;
        }
        if (0x40 - iVar1 != 0) {
            uVar3 = 0x40 - iVar1;
            uStackX_18 = uStackX_18 << (uVar3 & 0x3f);
            uStackX_8 = uStackX_8 << (uVar3 & 0x3f) | uStackX_10 >> (0x40 - uVar3 & 0x3f);
            uStackX_10 = uStackX_10 << (uVar3 & 0x3f);
        }
        uVar2 = uStackX_18 >> 0x20;
        while( true ) {
            if (uStackX_8 >> 0x20 == uVar2) {
                uStack_48 = 0xffffffff;
            }
            else {
                uStack_48 = uStackX_8 / uVar2;
            }
            uStack_40 = (uStackX_18 & 0xffffffff) * uStack_48;
            for (uStack_50 = uStack_48 * uVar2;
                ((uStackX_8 - uStack_50 & 0xffffffff00000000) == 0 &&
                ((uStackX_8 - uStack_50 << 0x20 | uStackX_10 >> 0x20) < uStack_40)); uStack_50 = uStack_50 - uVar2) {
                uStack_48 = uStack_48 - 1;
                uStack_40 = uStack_40 - (uStackX_18 & 0xffffffff);
            }
            uStack_50 = uStack_50 + (uStack_40 >> 0x20);
            if (uStackX_10 < uStack_40 << 0x20) {
                uStack_50 = uStack_50 + 1;
            }
            if (uStackX_8 < uStack_50) {
                uStackX_8 = uStackX_8 + uStackX_18;
                uStack_48 = uStack_48 - 1;
            }
            iStack_38 = iStack_38 + -1;
            if (iStack_38 == 0) break;
            uStack_20 = uStack_48 << 0x20;
            uStackX_8 = uStackX_8 - uStack_50 << 0x20 | uStackX_10 - (uStack_40 << 0x20) >> 0x20;
            uStackX_10 = uStackX_10 << 0x20;
        }
        uStack_20 = uStack_20 | uStack_48;
    }
    return uStack_20;
}


/* fcn.000249d0 @ 0x249d0 */

bool fcn.000249d0(int64_t arg1)

{
    return *(arg1 + 8) == 0;
}


/* fcn.00023e10 @ 0x23e10 */

int fcn.00023e10(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    uint in_register_00000014;
    uint64_t uStackX_10;
    int iStack_18;
    
    uStackX_10 = CONCAT44(in_register_00000014,arg2);
    if (uStackX_10 == 0) {
        iVar1 = 1;
    }
    else {
        iVar1 = fcn.000249d0(arg1);
        if (iVar1 == 0) {
            if (*(arg1 + 0x10) == 0) {
                if ((*(arg1 + 8) == 1) && (**arg1 < uStackX_10)) {
                    **arg1 = uStackX_10 - **arg1;
                    *(arg1 + 0x10) = 1;
                    iVar1 = 1;
                }
                else {
                    iStack_18 = 0;
                    while (*(*arg1 + iStack_18 * 8) < uStackX_10) {
                        *(*arg1 + iStack_18 * 8) = *(*arg1 + iStack_18 * 8) - uStackX_10;
                        iStack_18 = iStack_18 + 1;
                        uStackX_10 = 1;
                    }
                    *(*arg1 + iStack_18 * 8) = *(*arg1 + iStack_18 * 8) - uStackX_10;
                    if ((*(*arg1 + iStack_18 * 8) == 0) && (iStack_18 == *(arg1 + 8) + -1)) {
                        *(arg1 + 8) = *(arg1 + 8) + -1;
                    }
                    iVar1 = 1;
                }
            }
            else {
                *(arg1 + 0x10) = 0;
                iVar1 = fcn.00023c60(arg1,arg2);
                *(arg1 + 0x10) = 1;
            }
        }
        else {
            iVar1 = fcn.000248c0(arg1,arg2);
            if (iVar1 != 0) {
                fcn.00024950(arg1,1);
            }
        }
    }
    return iVar1;
}


/* fcn.00024a20 @ 0x24a20 */

int64_t fcn.00024a20(int64_t arg1,int arg2)

{
    int64_t iStack_18;
    
    if (*(arg1 + 0xc) < arg2) {
        iStack_18 = fcn.00024840(arg1,arg2);
    }
    else {
        iStack_18 = arg1;
    }
    return iStack_18;
}


/* fcn.00024950 @ 0x24950 */

void fcn.00024950(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    
    if ((arg2 != 0) && (iVar1 = fcn.000249d0(arg1), iVar1 == 0)) {
        *(arg1 + 0x10) = 1;
        return;
    }
    *(arg1 + 0x10) = 0;
    return;
}


/* fcn.000249a0 @ 0x249a0 */

void fcn.000249a0(int64_t arg1)

{
    *(arg1 + 0x10) = 0;
    *(arg1 + 8) = 0;
    *(arg1 + 0x14) = *(arg1 + 0x14);
    return;
}


/* fcn.0002a6c0 @ 0x2a6c0 */

uint64_t fcn.0002a6c0(int64_t arg1,int64_t arg2,int arg3,uint32_t arg4)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint32_t in_R9;
    uint64_t *puStackX_8;
    uint64_t *puStackX_10;
    int iStackX_18;
    uint64_t uStack_58;
    uint64_t uStack_50;
    uint64_t uStack_28;
    
    uStack_28 = 0;
    if (arg3 < 1) {
        uStack_28 = 0;
    }
    else {
        puStackX_8 = arg1;
        puStackX_10 = arg2;
        for (iStackX_18 = arg3; iStackX_18 != 0; iStackX_18 = iStackX_18 + -1) {
            uVar2 = *puStackX_10 & 0xffffffff;
            uStack_58 = *puStackX_10 >> 0x20;
            uVar1 = arg4 * uStack_58;
            uStack_58 = in_R9 * uStack_58;
            uVar3 = in_R9 * uVar2 + uVar1;
            if (uVar3 < uVar1) {
                uStack_58 = uStack_58 + 0x100000000;
            }
            uStack_58 = uStack_58 + (uVar3 >> 0x20);
            uVar1 = arg4 * uVar2 + (uVar3 << 0x20);
            if (uVar1 < uVar3 << 0x20) {
                uStack_58 = uStack_58 + 1;
            }
            uStack_50 = uStack_58;
            uVar1 = uVar1 + uStack_28;
            if (uVar1 < uStack_28) {
                uStack_50 = uStack_58 + 1;
            }
            uStack_28 = uStack_50;
            *puStackX_8 = uVar1;
            puStackX_10 = puStackX_10 + 1;
            puStackX_8 = puStackX_8 + 1;
        }
    }
    return uStack_28;
}


/* fcn.00024840 @ 0x24840 */

int64_t fcn.00024840(int64_t arg1,int arg2)

{
    int64_t iVar1;
    
    if (*(arg1 + 0xc) < arg2) {
        iVar1 = fcn.00024700(arg1,arg2);
        if (iVar1 == 0) {
            return 0;
        }
        if (*arg1 != 0) {
            fcn.000245a0(arg1,1);
        }
        *arg1 = iVar1;
        *(arg1 + 0xc) = arg2;
    }
    return arg1;
}


/* fcn.00024120 @ 0x24120 */

int fcn.00024120(int64_t arg1)

{
    return arg1 >> 0x1f;
}


/* fcn.00024140 @ 0x24140 */

void fcn.00024140(int64_t arg1)

{
    fcn.00024120(~arg1 & arg1 - 1);
    return;
}


/* fcn.00024170 @ 0x24170 */

void fcn.00024170(int64_t arg1,int arg2)

{
    fcn.00024140(arg1 ^ arg2);
    return;
}


/* fcn.000241a0 @ 0x241a0 */

void fcn.000241a0(int64_t arg1,int arg2)

{
    fcn.00024170(arg1 & 0xffffffff,arg2);
    return;
}


/* fcn.00024450 @ 0x24450 */

uint32_t fcn.00024450(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iStack_28;
    uint32_t uStack_20;
    uint32_t uStack_1c;
    
    uVar1 = *(arg1 + 8) - 1;
    uStack_1c = 0;
    uStack_20 = 0;
    for (iStack_28 = 0; iStack_28 < *(arg1 + 0xc); iStack_28 = iStack_28 + 1) {
        uVar2 = fcn.000241a0(uVar1,iStack_28);
        uVar3 = fcn.000241c0(*(*arg1 + iStack_28 * 8));
        uStack_20 = uStack_20 + (~uVar2 & ~uStack_1c & 0x40) + (uVar3 & uVar2);
        uStack_1c = uStack_1c | uVar2;
    }
    uVar1 = fcn.000241a0(uVar1,-1);
    return uStack_20 & ~uVar1;
}


/* fcn.00024a00 @ 0x24a00 */

uint32_t fcn.00024a00(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    
    return *(CONCAT44(in_register_0000000c,arg1) + 0x14) & arg2;
}


/* fcn.000289f0 @ 0x289f0 */

void fcn.000289f0(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_register_0000000c;
    
    if (CONCAT44(in_register_0000000c,arg1) != 0) {
        fcn.00019440(arg1,arg2);
        fcn.00019380(arg1,arg3,arg4 & 0xffffffff);
    }
    return;
}


/* fcn.000245a0 @ 0x245a0 */

void fcn.000245a0(uint32_t arg1,uint32_t arg2)

{
    int iVar1;
    uint in_register_0000000c;
    ulong *puVar2;
    
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = fcn.00024a00(arg1,8);
    if (iVar1 == 0) {
        if (arg2 == 0) {
            fcn.00019380(*puVar2,0x4fff6,0);
        }
        else {
            fcn.000193e0(*puVar2,*(puVar2 + 0xc) << 3,0x4fff6,0);
        }
    }
    else {
        fcn.000289f0(*puVar2,*(puVar2 + 0xc) << 3,0x4fff6,0);
    }
    return;
}


/* fcn.000289c0 @ 0x289c0 */

void fcn.000289c0(int arg1,int64_t arg2,int64_t arg3)

{
    fcn.00019290(arg1,arg2,arg3 & 0xffffffff);
    return;
}


/* fcn.00024700 @ 0x24700 */

int64_t fcn.00024700(int64_t arg1,int arg2)

{
    int iVar1;
    int64_t iStack_18;
    
    if (arg2 < 0x800000) {
        iVar1 = fcn.00024a00(arg1,2);
        if (iVar1 == 0) {
            iVar1 = fcn.00024a00(arg1,8);
            if (iVar1 == 0) {
                iStack_18 = fcn.00019290(arg2 << 3,0x4fff6,0);
            }
            else {
                iStack_18 = fcn.000289c0(arg2 << 3,0x4fff6,0);
            }
            if (iStack_18 == 0) {
                fcn.0001c9f0(3,0x78,0x41,0);
                iStack_18 = 0;
            }
            else if (0 < *(arg1 + 8)) {
                fcn.0001320c(iStack_18,*arg1,*(arg1 + 8) << 3);
            }
        }
        else {
            fcn.0001c9f0(3,0x78,0x69,0);
            iStack_18 = 0;
        }
    }
    else {
        fcn.0001c9f0(3,0x78,0x72,0);
        iStack_18 = 0;
    }
    return iStack_18;
}


/* fcn.000240c0 @ 0x240c0 */

int64_t fcn.000240c0(int64_t arg1,int arg2)

{
    if (arg2 < 0x7fffffc1) {
        if (*(arg1 + 0xc) < arg2 + 0x3f + (arg2 + 0x3f >> 0x1f & 0x3fU) >> 6) {
            arg1 = fcn.00024840(arg1,arg2 + 0x3f + (arg2 + 0x3f >> 0x1f & 0x3fU) >> 6);
        }
    }
    else {
        arg1 = 0;
    }
    return arg1;
}


/* fcn.00024c10 @ 0x24c10 */

ulong fcn.00024c10(int64_t arg1,int64_t arg2,int arg3)

{
    int64_t *piVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong uVar7;
    int8_t iVar8;
    int8_t iVar9;
    uint64_t uVar10;
    int iStack_40;
    uint64_t uStack_30;
    
    iVar3 = arg3 + (arg3 >> 0x1f & 0x3fU) >> 6;
    iVar5 = fcn.00024a20(arg1,*(arg2 + 8) + 1 + iVar3);
    if (iVar5 == 0) {
        uVar7 = 0;
    }
    else {
        if (*(arg2 + 8) == 0) {
            *(*arg1 + iVar3 * 8) = 0;
        }
        else {
            uVar4 = (0x40 - arg3 % 0x40) % 0x40;
            uVar10 = -uVar4;
            uVar10 = uVar10 | uVar10 >> 8;
            iVar5 = *arg2;
            piVar1 = *arg1 + iVar3 * 8;
            uStack_30 = *(iVar5 + (*(arg2 + 8) + -1) * 8);
            iVar8 = uVar4;
            piVar1[*(arg2 + 8)] = uStack_30 >> iVar8 & uVar10;
            iVar2 = *(arg2 + 8);
            while (iStack_40 = iVar2 + -1, iVar9 = arg3 % 0x40, 0 < iStack_40) {
                uVar6 = uStack_30 << iVar9;
                uStack_30 = *(iVar5 + (iVar2 + -2) * 8);
                piVar1[iStack_40] = uVar6 | uStack_30 >> iVar8 & uVar10;
                iVar2 = iStack_40;
            }
            *piVar1 = uStack_30 << iVar9;
        }
        if (iVar3 != 0) {
            fcn.00013234(*arg1,iVar3 << 3);
        }
        *(arg1 + 0x10) = *(arg2 + 0x10);
        *(arg1 + 8) = *(arg2 + 8) + 1 + iVar3;
        *(arg1 + 0x14) = *(arg1 + 0x14);
        uVar7 = 1;
    }
    return uVar7;
}


/* fcn.00024a70 @ 0x24a70 */

void fcn.00024a70(int64_t arg1)

{
    int iStack_18;
    int64_t *piStack_10;
    
    iStack_18 = *(arg1 + 8);
    if (0 < iStack_18) {
        piStack_10 = *arg1 + iStack_18 * 8;
        while ((0 < iStack_18 && (piStack_10 = piStack_10 + -1, *piStack_10 == 0))) {
            iStack_18 = iStack_18 + -1;
        }
        *(arg1 + 8) = iStack_18;
    }
    if (*(arg1 + 8) == 0) {
        *(arg1 + 0x10) = 0;
    }
    *(arg1 + 0x14) = *(arg1 + 0x14);
    return;
}


/* fcn.00021c60 @ 0x21c60 */

ulong fcn.00021c60(uint32_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    uint in_register_0000000c;
    uint in_register_00000014;
    
    if ((CONCAT44(in_register_0000000c,arg1) == 0) || (0x7ffffffe < CONCAT44(in_register_00000014,arg2))) {
        uVar2 = 0;
    }
    else {
        iVar1 = fcn.00019200(arg2,arg3,arg4 & 0xffffffff);
        if (iVar1 == 0) {
            fcn.0001c9f0(0xf,0x73,0x41,0);
            uVar2 = 0;
        }
        else {
            uVar2 = fcn.0001320c(iVar1,arg1,arg2);
        }
    }
    return uVar2;
}


/* fcn.00021b40 @ 0x21b40 */

int64_t fcn.00021b40(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t arg2_00;
    uint in_register_0000000c;
    
    if (CONCAT44(in_register_0000000c,arg1) == 0) {
        iVar1 = 0;
    }
    else {
        iVar1 = fcn.0001472c(arg1,0x1000);
        if (iVar1 + 1U < 0x1001) {
            arg2_00 = iVar1 + 1U;
            iVar1 = fcn.00019200(arg2_00,arg2,arg3 & 0xffffffff);
            if (iVar1 != 0) {
                fcn.00014758(iVar1,arg2_00,arg1);
            }
        }
        else {
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.00025530 @ 0x25530 */

int64_t * fcn.00025530(int64_t arg1,uint32_t arg2,uint32_t arg3,uint32_t arg4)

{
    int iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_R8;
    uint in_R9;
    int iStack_38;
    int iStack_34;
    uint64_t uStack_28;
    uint64_t uStack_18;
    
    uStack_28 = CONCAT44(in_R9,arg4);
    uStack_18 = CONCAT44(in_R8,arg3);
    if (arg2 == 0) {
        iStack_38 = 0x30;
    }
    else {
        iStack_38 = 0x10;
    }
    iVar1 = fcn.00021040(0x6fccc,0x25480);
    if (iVar1 == 0) {
        iStack_34 = 0;
    }
    else {
        iStack_34 = *0x6fcd4;
    }
    if (iStack_34 == 0) {
        piVar2 = NULL;
    }
    else {
        piVar2 = fcn.00019290(0x40,0x4fff6,0);
        if (piVar2 == NULL) {
            fcn.0001c9f0(0x24,0x74,0x41,0);
            piVar2 = NULL;
        }
        else {
            piVar2[3] = uStack_18;
            if (0x3000 < uStack_28) {
                uStack_28 = 0x3000;
            }
            piVar2[4] = uStack_28;
            if (uStack_18 < iStack_38) {
                uStack_18 = iStack_38;
            }
            piVar2[5] = uStack_18;
            if (piVar2[4] < piVar2[5]) {
                piVar2[5] = piVar2[4];
            }
            if (arg2 == 0) {
                iVar3 = fcn.00019290(piVar2[5],0x4fff6,0);
                *piVar2 = iVar3;
            }
            else {
                iVar3 = fcn.000289c0(piVar2[5],0x4fff6,0);
                *piVar2 = iVar3;
            }
            if (*piVar2 == 0) {
                fcn.0001c9f0(0x24,0x74,0x41,0);
                fcn.00019380(piVar2,0x4fff6,0);
                piVar2 = NULL;
            }
            else {
                piVar2[7] = arg1;
                *(piVar2 + 0x14) = arg2;
            }
        }
    }
    return piVar2;
}


/* fcn.00025ba0 @ 0x25ba0 */

uint64_t fcn.00025ba0(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uStack_18;
    
    iVar2 = fcn.00025970(arg1);
    if (arg2 == 0) {
        fcn.0001c9f0(0x24,0x73,0x69,0);
        uStack_18 = 0;
    }
    else {
        uStack_18 = (iVar2 * arg2 + 7) / 8;
        if (*(arg1 + 0x20) - *(arg1 + 8) < uStack_18) {
            fcn.0001c9f0(0x24,0x73,0x7d,0);
            uStack_18 = 0;
        }
        else {
            if ((*(arg1 + 8) < *(arg1 + 0x18)) && (uStack_18 < *(arg1 + 0x18) - *(arg1 + 8))) {
                uStack_18 = *(arg1 + 0x18) - *(arg1 + 8);
            }
            iVar1 = fcn.000259b0(arg1,uStack_18);
            if (iVar1 == 0) {
                *(arg1 + 8) = 0;
                *(arg1 + 0x20) = 0;
                uStack_18 = 0;
            }
        }
    }
    return uStack_18;
}


/* fcn.00025e40 @ 0x25e40 */

int64_t fcn.00025e40(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    int64_t iVar2;
    uint in_register_00000014;
    
    if (CONCAT44(in_register_00000014,arg2) == 0) {
        iVar2 = 0;
    }
    else if (*(arg1 + 0x20) - *(arg1 + 8) < CONCAT44(in_register_00000014,arg2)) {
        fcn.0001c9f0(0x24,0x71,0x7d,0);
        iVar2 = 0;
    }
    else if (*arg1 == 0) {
        fcn.0001c9f0(0x24,0x71,0x44,0);
        iVar2 = 0;
    }
    else {
        iVar1 = fcn.000259b0(arg1,arg2);
        if (iVar1 == 0) {
            iVar2 = 0;
        }
        else {
            iVar2 = *arg1 + *(arg1 + 8);
        }
    }
    return iVar2;
}


/* fcn.00027f50 @ 0x27f50 */

ulong fcn.00027f50(uint32_t arg1)

{
    ulong uVar1;
    uint in_register_0000000c;
    
    if (*CONCAT44(in_register_0000000c,arg1) == 0) {
        uVar1 = 1;
    }
    else {
        uVar1 = fcn.00020f20(*CONCAT44(in_register_0000000c,arg1));
    }
    return uVar1;
}


/* fcn.00027b10 @ 0x27b10 */

ulong fcn.00027b10(uint32_t arg1,int64_t arg2,uint32_t arg3,uint32_t arg4)

{
    int iVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    uint in_R8;
    bool bVar4;
    ulong in_stack_00000028;
    uint64_t in_stack_00000030;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar3 + 0x90) != 1) {
        fcn.00027820(arg1,0,0,0);
        if (*(iVar3 + 0x90) == 2) {
            fcn.0001c9f0(0x24,0x6b,0x72,0);
            return 0;
        }
        if (*(iVar3 + 0x90) == 0) {
            fcn.0001c9f0(0x24,0x6b,0x73,0);
            return 0;
        }
    }
    if (*(iVar3 + 0x38) < CONCAT44(in_R8,arg3)) {
        fcn.0001c9f0(0x24,0x6b,0x75,0);
        uVar2 = 0;
    }
    else if (*(iVar3 + 0x68) < in_stack_00000030) {
        fcn.0001c9f0(0x24,0x6b,0x66,0);
        uVar2 = 0;
    }
    else {
        iVar1 = fcn.000211b0();
        bVar4 = *(iVar3 + 0x18) != iVar1;
        if (bVar4) {
            *(iVar3 + 0x18) = iVar1;
        }
        if ((*(iVar3 + 0x74) != 0) && (*(iVar3 + 0x74) <= *(iVar3 + 0x70))) {
            bVar4 = true;
        }
        if ((0 < *(iVar3 + 0x7c)) &&
           ((iVar1 = fcn.0004d110(0), iVar1 < *(iVar3 + 0x78) || (*(iVar3 + 0x7c) <= iVar1 - *(iVar3 + 0x78))))) {
            bVar4 = true;
        }
        if (((*(iVar3 + 0x80) != 0) && (*(iVar3 + 8) != 0)) && (*(iVar3 + 0x84) != *(*(iVar3 + 8) + 0x84))) {
            bVar4 = true;
        }
        if ((bVar4) || (arg4 != 0)) {
            iVar1 = fcn.000275a0(arg1,in_stack_00000028,in_stack_00000030,arg4);
            if (iVar1 == 0) {
                fcn.0001c9f0(0x24,0x6b,0x76,0);
                return 0;
            }
            in_stack_00000028 = 0;
            in_stack_00000030 = 0;
        }
        iVar1 = (**(*(iVar3 + 0x148) + 0x10))(iVar3,arg2,CONCAT44(in_R8,arg3),in_stack_00000028,in_stack_00000030);
        if (iVar1 == 0) {
            *(iVar3 + 0x90) = 2;
            fcn.0001c9f0(0x24,0x6b,0x70,0);
            uVar2 = 0;
        }
        else {
            *(iVar3 + 0x70) = *(iVar3 + 0x70) + 1;
            uVar2 = 1;
        }
    }
    return uVar2;
}


/* fcn.00027f80 @ 0x27f80 */

ulong fcn.00027f80(uint32_t arg1)

{
    ulong uVar1;
    uint in_register_0000000c;
    
    if (*CONCAT44(in_register_0000000c,arg1) == 0) {
        uVar1 = 1;
    }
    else {
        uVar1 = fcn.00020f90(*CONCAT44(in_register_0000000c,arg1));
    }
    return uVar1;
}


/* fcn.00025f00 @ 0x25f00 */

ulong fcn.00025f00(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    ulong uVar1;
    uint in_register_00000014;
    uint64_t uVar2;
    uint in_R8;
    
    uVar2 = CONCAT44(in_register_00000014,arg2);
    if (*(arg1 + 0x28) - *(arg1 + 8) < uVar2) {
        fcn.0001c9f0(0x24,0x72,0x7d,0);
        uVar1 = 0;
    }
    else {
        if (uVar2 != 0) {
            *(arg1 + 8) = *(arg1 + 8) + uVar2;
            *(arg1 + 0x30) = *(arg1 + 0x30) + CONCAT44(in_R8,arg3);
        }
        uVar1 = 1;
    }
    return uVar1;
}


/* fcn.00025930 @ 0x25930 */

ulong fcn.00025930(int64_t arg1)

{
    ulong uVar1;
    
    if (*(arg1 + 0x30) < *(arg1 + 0x38)) {
        uVar1 = 0;
    }
    else if (*(arg1 + 8) < *(arg1 + 0x18)) {
        uVar1 = 0;
    }
    else {
        uVar1 = *(arg1 + 0x30);
    }
    return uVar1;
}


/* fcn.0002ad10 @ 0x2ad10 */

void fcn.0002ad10(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t arg2;
    
    iVar2 = fcn.00025ba0(arg1,1);
    if (iVar2 != 0) {
        arg2 = iVar2;
        iVar3 = fcn.00025e40(arg1,arg2);
        if (iVar3 != 0) {
            cVar1 = fcn.0002ac60(arg2,iVar3);
            if (cVar1 == '\0') {
                fcn.00025f00(arg1,0,0);
            }
            else {
                fcn.00025f00(arg1,arg2,iVar2 << 3);
            }
        }
    }
    fcn.00025930(arg1);
    return;
}


/* fcn.000258a0 @ 0x258a0 */

ulong fcn.000258a0(int64_t arg1)

{
    ulong uVar1;
    
    uVar1 = *arg1;
    *arg1 = 0;
    *(arg1 + 0x30) = 0;
    return uVar1;
}


/* fcn.00025810 @ 0x25810 */

void fcn.00025810(uint32_t arg1)

{
    uint in_register_0000000c;
    ulong *puVar1;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    if (puVar1 != NULL) {
        if (*(puVar1 + 2) == 0) {
            if (*(puVar1 + 0x14) == 0) {
                fcn.000193e0(*puVar1,puVar1[5],0x4fff6,0);
            }
            else {
                fcn.000289f0(*puVar1,puVar1[5],0x4fff6,0);
            }
        }
        fcn.00019380(arg1,0x4fff6,0);
    }
    return;
}


/* fcn.0002adb0 @ 0x2adb0 */

void fcn.0002adb0(int64_t arg1)

{
    uchar auStack_18 [24];
    
    fcn.0002ac60(0x10,auStack_18);
    fcn.00025ce0(arg1,auStack_18,0x10,0);
    return;
}


/* fcn.0002ac60 @ 0x2ac60 */

char fcn.0002ac60(uint32_t arg1,uint32_t arg2)

{
    uint in_register_0000000c;
    uint in_register_00000014;
    uint64_t uStackX_8;
    ulong *puStackX_10;
    char cStack_18;
    ulong auStack_10 [2];
    
    puStackX_10 = CONCAT44(in_register_00000014,arg2);
    uStackX_8 = CONCAT44(in_register_0000000c,arg1);
    cStack_18 = '\0';
    if (puStackX_10 == NULL) {
        cStack_18 = '\0';
    }
    else {
        while (uStackX_8 != 0) {
            cStack_18 = fcn.00014fbc(auStack_10);
            if (cStack_18 == '\0') {
                return '\0';
            }
            if (uStackX_8 < 8) {
                fcn.0001320c(puStackX_10,auStack_10,uStackX_8);
                uStackX_8 = 0;
            }
            else {
                *puStackX_10 = auStack_10[0];
                puStackX_10 = puStackX_10 + 1;
                uStackX_8 = uStackX_8 - 8;
            }
        }
    }
    return cStack_18;
}


/* fcn.00025ce0 @ 0x25ce0 */

ulong fcn.00025ce0(int64_t arg1,uint32_t arg2,uint32_t arg3,int64_t arg4)

{
    int iVar1;
    ulong uVar2;
    uint in_register_00000014;
    uint in_R8;
    uint64_t uVar3;
    
    uVar3 = CONCAT44(in_R8,arg3);
    if (*(arg1 + 0x20) - *(arg1 + 8) < uVar3) {
        fcn.0001c9f0(0x24,0x67,0x6a,0);
        uVar2 = 0;
    }
    else if (*arg1 == 0) {
        fcn.0001c9f0(0x24,0x67,0x44,0);
        uVar2 = 0;
    }
    else {
        if (uVar3 != 0) {
            if ((*(arg1 + 8) < *(arg1 + 0x28)) && (*arg1 + *(arg1 + 8) == CONCAT44(in_register_00000014,arg2))) {
                fcn.0001c9f0(0x24,0x67,0x44,0);
                return 0;
            }
            iVar1 = fcn.000259b0(arg1,arg3);
            if (iVar1 == 0) {
                return 0;
            }
            fcn.0001320c(*arg1 + *(arg1 + 8),arg2,arg3);
            *(arg1 + 8) = *(arg1 + 8) + uVar3;
            *(arg1 + 0x30) = *(arg1 + 0x30) + arg4;
        }
        uVar2 = 1;
    }
    return uVar2;
}


/* fcn.000258e0 @ 0x258e0 */

void fcn.000258e0(int64_t arg1,uint32_t arg2)

{
    uint in_register_00000014;
    
    *arg1 = CONCAT44(in_register_00000014,arg2);
    fcn.00019440(*arg1,*(arg1 + 8));
    *(arg1 + 8) = 0;
    return;
}


/* fcn.000254a0 @ 0x254a0 */

ulong fcn.000254a0(void)

{
    int iVar1;
    
    *0x71118 = fcn.00020ee0();
    if (*0x71118 != 0) {
        *0x71110 = fcn.00020ee0();
        if (*0x71110 != 0) {
            iVar1 = fcn.00021330();
            if (iVar1 != 0) {
                *0x6fcd0 = 1;
                return 1;
            }
            fcn.00021000(*0x71110);
            *0x71110 = 0;
        }
        fcn.00021000(*0x71118);
        *0x71118 = 0;
    }
    return 0;
}


/* fcn.00025970 @ 0x25970 */

int64_t fcn.00025970(int64_t arg1)

{
    int64_t iVar1;
    
    if (*(arg1 + 0x30) < *(arg1 + 0x38)) {
        iVar1 = *(arg1 + 0x38) - *(arg1 + 0x30);
    }
    else {
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.000259b0 @ 0x259b0 */

ulong fcn.000259b0(int64_t arg1,uint32_t arg2)

{
    uint in_register_00000014;
    uint64_t uVar1;
    uint64_t uStack_28;
    int64_t iStack_20;
    uint64_t uStack_18;
    
    uVar1 = CONCAT44(in_register_00000014,arg2);
    if (*(arg1 + 0x28) - *(arg1 + 8) < uVar1) {
        uStack_28 = *(arg1 + 0x28);
        if ((*(arg1 + 0x10) != 0) || (*(arg1 + 0x20) - *(arg1 + 8) < uVar1)) {
            fcn.0001c9f0(0x24,0x7d,0x44,0);
            return 0;
        }
        do {
            if (uStack_28 < *(arg1 + 0x20) / 2) {
                uStack_18 = uStack_28 << 1;
            }
            else {
                uStack_18 = *(arg1 + 0x20);
            }
            uStack_28 = uStack_18;
        } while (uStack_18 - *(arg1 + 8) < uVar1);
        if (*(arg1 + 0x14) == 0) {
            iStack_20 = fcn.00019290(uStack_18,0x4fff6,0);
        }
        else {
            iStack_20 = fcn.000289c0(uStack_18,0x4fff6,0);
        }
        if (iStack_20 == 0) {
            fcn.0001c9f0(0x24,0x7d,0x41,0);
            return 0;
        }
        fcn.0001320c(iStack_20,*arg1,*(arg1 + 8));
        if (*(arg1 + 0x14) == 0) {
            fcn.000193e0(*arg1,*(arg1 + 0x28),0x4fff6,0);
        }
        else {
            fcn.000289f0(*arg1,*(arg1 + 0x28),0x4fff6,0);
        }
        *arg1 = iStack_20;
        *(arg1 + 0x28) = uStack_18;
    }
    return 1;
}


/* fcn.00025fa0 @ 0x25fa0 */

int64_t fcn.00025fa0(void)

{
    int iVar1;
    int64_t iVar2;
    int iStack_18;
    
    iVar1 = fcn.00021040(0x6fccc,0x25480);
    if (iVar1 == 0) {
        iStack_18 = 0;
    }
    else {
        iStack_18 = *0x6fcd4;
    }
    if (iStack_18 == 0) {
        iVar2 = 0;
    }
    else {
        fcn.00020f20(*0x71118);
        if (*0x71108 == 0) {
            *0x71108 = 0x4f830;
        }
        iVar2 = *0x71108;
        fcn.00020f90(*0x71118);
    }
    return iVar2;
}


/* fcn.00022510 @ 0x22510 */

ulong fcn.00022510(uint32_t arg1)

{
    ulong uVar1;
    uint in_register_0000000c;
    int *piVar2;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if ((piVar2 == NULL) || (*piVar2 == 0)) {
        uVar1 = 0;
    }
    else {
        uVar1 = fcn.00022290(arg1,*piVar2 - 1);
    }
    return uVar1;
}


/* fcn.00026620 @ 0x26620 */

void fcn.00026620(void)

{
    fcn.000210e0(0x71104);
    return;
}


/* fcn.00026600 @ 0x26600 */

void fcn.00026600(int64_t arg1)

{
    fcn.00022510(arg1);
    return;
}


/* fcn.00026690 @ 0x26690 */

void fcn.00026690(uint32_t arg1)

{
    uint in_register_0000000c;
    
    if (CONCAT44(in_register_0000000c,arg1) != 0) {
        fcn.00019380(*(CONCAT44(in_register_0000000c,arg1) + 0x10),0x4fff6,0);
        fcn.00019380(arg1,0x4fff6,0);
    }
    return;
}


/* fcn.00021e90 @ 0x21e90 */

void fcn.00021e90(void)

{
    fcn.00022100(0,0);
    return;
}


/* fcn.000224d0 @ 0x224d0 */

ulong fcn.000224d0(uint32_t arg1,uint32_t arg2)

{
    ulong uVar1;
    uint in_register_0000000c;
    
    if (CONCAT44(in_register_0000000c,arg1) == NULL) {
        uVar1 = 0xffffffff;
    }
    else {
        uVar1 = fcn.00022180(arg1,arg2,*CONCAT44(in_register_0000000c,arg1));
    }
    return uVar1;
}


/* fcn.000267f0 @ 0x267f0 */

void fcn.000267f0(void)

{
    fcn.00021e90();
    return;
}


/* fcn.00026800 @ 0x26800 */

void fcn.00026800(uint32_t arg1,uint32_t arg2)

{
    fcn.000224d0(arg1,arg2);
    return;
}


/* fcn.00026830 @ 0x26830 */

int64_t * fcn.00026830(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint32_t arg2_00;
    
    if (*0x6fcd8 == 0) {
        *0x6fcd8 = fcn.000267f0();
    }
    if (*0x6fcd8 == 0) {
        piVar2 = NULL;
    }
    else {
        piVar2 = fcn.00019290(0x30,0x4fff6,0);
        if (piVar2 == NULL) {
            fcn.0001c9f0(0xe,0x7a,0x41,0);
            piVar2 = NULL;
        }
        else {
            *piVar2 = arg1;
            iVar3 = fcn.00021b40(arg2,0x4fff6,0);
            piVar2[1] = iVar3;
            piVar2[2] = arg3;
            piVar2[3] = arg4;
            arg2_00 = piVar2;
            if (piVar2[1] == 0) {
                fcn.00019380(arg2_00,0x4fff6,0);
                piVar2 = NULL;
            }
            else {
                iVar1 = fcn.00026800(*0x6fcd8,arg2_00);
                if (iVar1 == 0) {
                    fcn.00019380(piVar2[1],0x4fff6,0);
                    fcn.00019380(arg2_00,0x4fff6,0);
                    piVar2 = NULL;
                }
            }
        }
    }
    return piVar2;
}


/* fcn.0004e858 @ 0x4e858 */

uint16_t fcn.0004e858(uint32_t arg1)

{
    if (arg1 < 0x80) {
        return *(*0x4f630 + arg1 * 2) & 2;
    }
    return 0;
}


/* fcn.0004e876 @ 0x4e876 */

char * fcn.0004e876(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    
    do {
        cVar1 = *arg1;
        if (cVar1 == arg2) {
            return arg1;
        }
        arg1 = arg1 + 1;
    } while (cVar1 != '\0');
    return NULL;
}


/* fcn.00032c10 @ 0x32c10 */

void fcn.00032c10(void)

{
    fcn.00049d00();
    fcn.000493a0();
    fcn.00049280();
    fcn.00049be0();
    return;
}


/* fcn.00049d00 @ 0x49d00 */

void fcn.00049d00(void)

{
    fcn.00026980(0x6e5e8,0x49c10,0x49cf0);
    return;
}


/* fcn.00026980 @ 0x26980 */

bool fcn.00026980(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    iVar1 = fcn.00026830(0,arg1,arg2,arg3);
    return iVar1 != 0;
}


/* fcn.000493a0 @ 0x493a0 */

void fcn.000493a0(void)

{
    fcn.00026980(0x6e590,0x492a0,0x49380);
    return;
}


/* fcn.00049280 @ 0x49280 */

void fcn.00049280(void)

{
    fcn.00026980(0x6e580,0x49100,0);
    return;
}


/* fcn.00049be0 @ 0x49be0 */

void fcn.00049be0(void)

{
    fcn.00026980(0x6e5d8,0x49820,0x496f0);
    return;
}


/* fcn.0001cba0 @ 0x1cba0 */

void fcn.0001cba0(void)

{
    int64_t iVar1;
    int iStack_18;
    
    iVar1 = fcn.0001cd60();
    if (iVar1 != 0) {
        for (iStack_18 = 0; iStack_18 < 0x10; iStack_18 = iStack_18 + 1) {
            if ((*(iVar1 + 0x100 + iStack_18 * 4) & 1) != 0) {
                fcn.00019380(*(iVar1 + 0x80 + iStack_18 * 8),0x4fff6,0);
                *(iVar1 + 0x80 + iStack_18 * 8) = 0;
            }
            *(iVar1 + 0x100 + iStack_18 * 4) = 0;
            *(iVar1 + iStack_18 * 4) = 0;
            *(iVar1 + 0x40 + iStack_18 * 4) = 0;
            *(iVar1 + 0x140 + iStack_18 * 8) = 0;
            *(iVar1 + 0x1c0 + iStack_18 * 4) = 0xffffffff;
        }
        *(iVar1 + 0x204) = 0;
        *(iVar1 + 0x200) = 0;
    }
    return;
}


/* fcn.00033dd0 @ 0x33dd0 */

ulong fcn.00033dd0(uint32_t arg1)

{
    int iVar1;
    int64_t *piVar2;
    ulong uVar3;
    int64_t iVar4;
    uint in_register_0000000c;
    int64_t iVar5;
    int64_t iStack_18;
    
    iVar5 = CONCAT44(in_register_0000000c,arg1);
    piVar2 = iVar5 + 0xa0;
    iVar1 = *(iVar5 + 0x14);
    if (iVar1 == 0x388) {
        iStack_18 = 0x10;
        uVar3 = fcn.0002ea10();
        *(iVar5 + 0xb8) = uVar3;
        uVar3 = fcn.0002ea60();
        *(iVar5 + 0xc0) = uVar3;
    }
    else if (iVar1 == 0x389) {
        iStack_18 = 0x18;
        uVar3 = fcn.0002ea80();
        *(iVar5 + 0xb8) = uVar3;
        uVar3 = fcn.0002ead0();
        *(iVar5 + 0xc0) = uVar3;
    }
    else {
        if (iVar1 != 0x38a) {
            return 0;
        }
        iStack_18 = 0x20;
        uVar3 = fcn.0002eaf0();
        *(iVar5 + 0xb8) = uVar3;
        uVar3 = fcn.0002eb40();
        *(iVar5 + 0xc0) = uVar3;
    }
    *(iVar5 + 0x148) = 0x4f8d8;
    *(iVar5 + 200) = iStack_18;
    if (*piVar2 == 0) {
        iVar4 = fcn.0001e970();
        *piVar2 = iVar4;
    }
    if (*(iVar5 + 0xa8) == 0) {
        uVar3 = fcn.0001e970();
        *(iVar5 + 0xa8) = uVar3;
    }
    if ((((*piVar2 != 0) && (*(iVar5 + 0xa8) != 0)) &&
        (iVar1 = fcn.0001e9c0(*piVar2,*(iVar5 + 0xb8),0,0), iVar1 != 0)) &&
       (iVar1 = fcn.0001e9c0(*(iVar5 + 0xa8),*(iVar5 + 0xc0),0,0), iVar1 != 0)) {
        *(iVar5 + 0x148) = 0x4f8d8;
        *(iVar5 + 0x30) = iStack_18 << 3;
        *(iVar5 + 0x88) = iStack_18 + 0x10;
        if ((*(iVar5 + 0x1c) & 1) == 0) {
            if (*(iVar5 + 0xb0) == 0) {
                uVar3 = fcn.0001e970();
                *(iVar5 + 0xb0) = uVar3;
            }
            if (*(iVar5 + 0xb0) == 0) {
                return 0;
            }
            iVar1 = fcn.0001e9c0(*(iVar5 + 0xb0),*(iVar5 + 0xb8),0,0x6d9b8);
            if (iVar1 == 0) {
                return 0;
            }
            *(iVar5 + 0x40) = *(iVar5 + 200);
            *(iVar5 + 0x48) = 0x7fffffff;
            *(iVar5 + 0x50) = *(iVar5 + 0x40) / 2;
            *(iVar5 + 0x58) = 0x7fffffff;
            *(iVar5 + 0x60) = 0x7fffffff;
            *(iVar5 + 0x68) = 0x7fffffff;
        }
        else {
            *(iVar5 + 0x40) = *(iVar5 + 0x88);
            *(iVar5 + 0x48) = *(iVar5 + 0x88);
            *(iVar5 + 0x50) = 0;
            *(iVar5 + 0x58) = 0;
            *(iVar5 + 0x60) = *(iVar5 + 0x88);
            *(iVar5 + 0x68) = *(iVar5 + 0x88);
        }
        *(iVar5 + 0x38) = 0x10000;
        return 1;
    }
    return 0;
}


/* fcn.00028a40 @ 0x28a40 */

ulong fcn.00028a40(uint32_t arg1)

{
    return 0;
}


/* fcn.00026bb0 @ 0x26bb0 */

int fcn.00026bb0(uint32_t arg1,uint32_t arg2,uint32_t arg3)

{
    int iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    uint32_t uStackX_10;
    uint32_t uStackX_18;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    uStackX_10 = arg2;
    uStackX_18 = arg3;
    if ((arg2 == 0) && (arg3 == 0)) {
        uStackX_10 = *0x4f870;
        uStackX_18 = *0x6fcec;
    }
    if ((*(iVar2 + 0x14) != 0) && ((uStackX_10 != *(iVar2 + 0x14) || (uStackX_18 != *(iVar2 + 0x1c))))) {
        (**(*(iVar2 + 0x148) + 0x18))(iVar2);
        fcn.00025810(*(iVar2 + 0x28));
        *(iVar2 + 0x28) = 0;
    }
    *(iVar2 + 0x90) = 0;
    *(iVar2 + 0x1c) = uStackX_18;
    *(iVar2 + 0x14) = uStackX_10;
    if (uStackX_10 == 0) {
        *(iVar2 + 0x148) = 0;
        iVar1 = 1;
    }
    else if ((uStackX_10 < 0x388) || (0x38a < uStackX_10)) {
        *(iVar2 + 0x14) = 0;
        *(iVar2 + 0x1c) = 0;
        *(iVar2 + 0x148) = 0;
        fcn.0001c9f0(0x24,0x68,0x78,0);
        iVar1 = 0;
    }
    else {
        iVar1 = fcn.00033dd0(arg1);
        if (iVar1 == 0) {
            *(iVar2 + 0x90) = 2;
            fcn.0001c9f0(0x24,0x68,0x6b,0);
        }
    }
    return iVar1;
}


/* fcn.00026d40 @ 0x26d40 */

int64_t fcn.00026d40(uint32_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int iVar1;
    uint uVar2;
    uint32_t arg1_00;
    uint in_R9;
    int64_t iVar3;
    uint uStack_28;
    int64_t iStack_18;
    
    iVar3 = CONCAT44(in_R9,arg4);
    if (arg1 == 0) {
        iStack_18 = fcn.00019290(0x170,0x4fff6,0);
    }
    else {
        iStack_18 = fcn.000289c0(0x170,0x4fff6,0);
    }
    if (iStack_18 == 0) {
        fcn.0001c9f0(0x24,0x6d,0x41,0);
        return 0;
    }
    arg1_00 = iStack_18;
    if ((arg1 == 0) || (iVar1 = fcn.00028a40(arg1_00), iVar1 == 0)) {
        uStack_28 = 0;
    }
    else {
        uStack_28 = 1;
    }
    *(iStack_18 + 0x10) = uStack_28;
    uVar2 = fcn.000211b0();
    *(iStack_18 + 0x18) = uVar2;
    *(iStack_18 + 8) = iVar3;
    if (iVar3 == 0) {
        *(iStack_18 + 0x150) = 0x25010;
        *(iStack_18 + 0x158) = 0x25250;
        *(iStack_18 + 0x160) = 0x252c0;
        *(iStack_18 + 0x168) = 0x253b0;
        *(iStack_18 + 0x74) = *0x4f860;
        *(iStack_18 + 0x7c) = *0x4f864;
    }
    else {
        *(iStack_18 + 0x150) = 0x25010;
        *(iStack_18 + 0x158) = 0x25250;
        *(iStack_18 + 0x74) = *0x4f868;
        *(iStack_18 + 0x7c) = *0x4f86c;
    }
    iVar1 = fcn.00026bb0(arg1_00,arg2,arg3);
    if (iVar1 != 0) {
        if (iVar3 == 0) goto code_r0x00026f52;
        fcn.00027f50(arg4);
        if (*(iStack_18 + 0x30) <= *(iVar3 + 0x30)) {
            fcn.00027f80(arg4);
            goto code_r0x00026f52;
        }
        fcn.00027f80(arg4);
        fcn.0001c9f0(0x24,0x6d,0x83,0);
    }
    fcn.00026f90(arg1_00);
    iStack_18 = 0;
code_r0x00026f52:
    return iStack_18;
}


/* fcn.00028770 @ 0x28770 */

void fcn.00028770(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    int iVar1;
    ulong *puVar2;
    ulong uVar3;
    uint in_register_00000014;
    uint in_R8;
    int64_t *arg1_00;
    int iStack_88;
    uchar *puStack_80;
    uint *puStack_78;
    uchar auStack_58 [88];
    
    arg1_00 = CONCAT44(in_R8,arg3);
    puStack_80 = NULL;
    puVar2 = fcn.000286a0(arg1);
    if (puVar2 != NULL) {
        iVar1 = fcn.00023370(*puVar2);
        if (0 < iVar1) {
            if (iVar1 < 10) {
                puStack_80 = auStack_58;
            }
            else {
                puStack_80 = fcn.00019200(iVar1 << 3,0x4fff6,0);
            }
            if (puStack_80 != NULL) {
                for (iStack_88 = 0; iStack_88 < iVar1; iStack_88 = iStack_88 + 1) {
                    uVar3 = fcn.00023390(*puVar2,iStack_88);
                    *(puStack_80 + iStack_88 * 8) = uVar3;
                }
            }
        }
        fcn.00020f90(*0x6fcf0);
        for (iStack_88 = 0; iStack_88 < iVar1; iStack_88 = iStack_88 + 1) {
            if (puStack_80 == NULL) {
                fcn.00020f20(*0x6fcf0);
                puStack_78 = fcn.00023390(*puVar2,iStack_88);
                fcn.00020f90(*0x6fcf0);
            }
            else {
                puStack_78 = *(puStack_80 + iStack_88 * 8);
            }
            if ((puStack_78 != NULL) && (*(puStack_78 + 6) != 0)) {
                uVar3 = fcn.00028970(arg1_00,iStack_88);
                (**(puStack_78 + 6))
                          (CONCAT44(in_register_00000014,arg2),uVar3,arg1_00,iStack_88,*puStack_78,
                           *(puStack_78 + 2));
            }
        }
        if (puStack_80 != auStack_58) {
            fcn.00019380(puStack_80,0x4fff6,0);
        }
    }
    fcn.000233b0(*arg1_00);
    *arg1_00 = 0;
    return;
}


/* fcn.0004d110 @ 0x4d110 */

int fcn.0004d110(int64_t arg1)

{
    uchar auVar1 [16];
    uchar auVar2 [16];
    int iVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    int iVar8;
    uint16_t uStack_18;
    uint8_t uStack_16;
    uint8_t uStack_15;
    uint8_t uStack_14;
    uint8_t uStack_13;
    uint8_t uStack_12;
    int16_t iStack_c;
    
    iVar5 = (**(*0x6fbe8 + 0x18))(&uStack_18);
    if ((iVar5 < 0) || (uVar6 = 0x7b2, uStack_18 < 0x7b2)) {
        iVar8 = 0;
    }
    else {
        iVar8 = 0;
        if (uStack_18 != 0x7b2) {
            do {
                if (((uVar6 & 3) == 0) &&
                   ((auVar1._8_8_ = 0, auVar1._0_8_ = uVar6, iVar5 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar1,8),
                    uVar6 != ((uVar6 - iVar5 >> 1) + iVar5 >> 6) * 100 ||
                    (auVar2._8_8_ = 0, auVar2._0_8_ = uVar6, iVar5 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar2,8),
                    uVar6 == ((uVar6 - iVar5 >> 1) + iVar5 >> 8) * 400)))) {
                    iVar3 = 0x16e;
                }
                else {
                    iVar3 = 0x16d;
                }
                uVar6 = uVar6 + 1;
                iVar8 = iVar8 + iVar3 * 0x15180;
            } while (uVar6 != uStack_18);
        }
        if (((uStack_18 & 3) == 0) &&
           ((uVar7 = uStack_18, uVar7 != (uStack_18 / 100) * 100 || (uVar7 == (uVar7 / 400) * 400)))) {
            iVar5 = 0xe;
        }
        else {
            iVar5 = 0;
        }
        iVar3 = 0;
        if (uStack_15 != 0) {
            iVar3 = uStack_15 - 1;
        }
        iVar4 = 0;
        if (iStack_c != 0x7ff) {
            iVar4 = iStack_c * 0x3c;
        }
        iVar8 = uStack_12 + iVar8 +
                ((uStack_14 + (iVar3 + *((uStack_16 + iVar5) * 8 + 0x6ee50)) * 0x18) * 0x3c + uStack_13) * 0x3c + iVar4;
        if (arg1 != 0) {
            *arg1 = iVar8;
        }
    }
    return iVar8;
}


/* fcn.00025740 @ 0x25740 */

ulong * fcn.00025740(uint32_t arg1,int arg2,uint32_t arg3)

{
    ulong *puVar1;
    uint in_register_0000000c;
    uint in_register_00000014;
    uint in_R8;
    
    puVar1 = fcn.00019290(0x40,0x4fff6,0);
    if (puVar1 == NULL) {
        fcn.0001c9f0(0x24,0x7c,0x41,0);
        puVar1 = NULL;
    }
    else {
        *puVar1 = CONCAT44(in_register_0000000c,arg1);
        puVar1[1] = CONCAT44(in_register_00000014,arg2);
        *(puVar1 + 2) = 1;
        puVar1[5] = puVar1[1];
        puVar1[4] = puVar1[5];
        puVar1[3] = puVar1[4];
        puVar1[6] = CONCAT44(in_R8,arg3);
    }
    return puVar1;
}


/* fcn.00027510 @ 0x27510 */

ulong fcn.00027510(uint32_t arg1)

{
    ulong uVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar2 + 0x148) == 0) {
        *(iVar2 + 0x90) = 2;
        fcn.0001c9f0(0x24,0x76,0x80,0);
        uVar1 = 0;
    }
    else {
        (**(*(iVar2 + 0x148) + 0x18))(iVar2);
        uVar1 = fcn.00026bb0(arg1,*(iVar2 + 0x14),*(iVar2 + 0x1c));
    }
    return uVar1;
}


/* fcn.00027050 @ 0x27050 */

bool fcn.00027050(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    uint uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    uint in_R8;
    uint64_t in_stack_ffffffffffffffa0;
    int iStack_48;
    uint64_t uStack_40;
    uint64_t uStack_38;
    uint64_t uStack_30;
    uint64_t uStack_28;
    int64_t iStack_20;
    int64_t iStack_18;
    uint64_t uStack_10;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    iStack_18 = 0;
    iStack_20 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_10 = *(iVar3 + 0x30);
    uStack_30 = *(iVar3 + 0x40);
    uStack_28 = *(iVar3 + 0x48);
    if (*(iVar3 + 0x60) < CONCAT44(in_R8,arg3)) {
        fcn.0001c9f0(0x24,0x6c,0x74,0);
    }
    else if (*(iVar3 + 0x148) == 0) {
        fcn.0001c9f0(0x24,0x6c,0x80,0);
    }
    else if (*(iVar3 + 0x90) == 0) {
        *(iVar3 + 0x90) = 2;
        if ((*(iVar3 + 0x50) != 0) && (*(iVar3 + 0x160) == 0)) {
            uStack_10 = uStack_10 + *(iVar3 + 0x30) / 2;
            uStack_30 = uStack_30 + *(iVar3 + 0x50);
            uStack_28 = uStack_28 + *(iVar3 + 0x58);
        }
        if (*(iVar3 + 0x150) != 0) {
            uStack_40 = (**(iVar3 + 0x150))(iVar3,&iStack_20,uStack_10 & 0xffffffff,uStack_30,uStack_28,
                                            in_stack_ffffffffffffffa0 & 0xffffffff00000000);
        }
        if ((uStack_40 < uStack_30) || (uStack_28 < uStack_40)) {
            fcn.0001c9f0(0x24,0x6c,0x6e,0);
        }
        else if (((*(iVar3 + 0x50) == 0) || (*(iVar3 + 0x160) == 0)) ||
                ((uStack_38 = (**(iVar3 + 0x160))(iVar3,&iStack_18,*(iVar3 + 0x30) / 2,*(iVar3 + 0x50),
                                                  *(iVar3 + 0x58)), *(iVar3 + 0x50) <= uStack_38 &&
                 (uStack_38 <= *(iVar3 + 0x58))))) {
            iVar1 = (***(iVar3 + 0x148))(iVar3,iStack_20,uStack_40,iStack_18,uStack_38,arg2,CONCAT44(in_R8,arg3))
            ;
            if (iVar1 == 0) {
                fcn.0001c9f0(0x24,0x6c,0x6c,0);
            }
            else {
                *(iVar3 + 0x90) = 1;
                *(iVar3 + 0x70) = 1;
                uVar2 = fcn.0004d110(0);
                *(iVar3 + 0x78) = uVar2;
                if (*(iVar3 + 0x80) != 0) {
                    if (*(iVar3 + 8) == 0) {
                        *(iVar3 + 0x84) = *(iVar3 + 0x84) + 1;
                    }
                    else {
                        *(iVar3 + 0x84) = *(*(iVar3 + 8) + 0x84);
                    }
                }
            }
        }
        else {
            fcn.0001c9f0(0x24,0x6c,0x6f,0);
        }
    }
    else {
        if (*(iVar3 + 0x90) == 2) {
            iStack_48 = 0x72;
        }
        else {
            iStack_48 = 0x67;
        }
        fcn.0001c9f0(0x24,0x6c,iStack_48,0);
    }
    if ((iStack_20 != 0) && (*(iVar3 + 0x158) != 0)) {
        (**(iVar3 + 0x158))(iVar3,iStack_20,uStack_40);
    }
    if ((iStack_18 != 0) && (*(iVar3 + 0x168) != 0)) {
        (**(iVar3 + 0x168))(iVar3,iStack_18,uStack_38);
    }
    return *(iVar3 + 0x90) == 1;
}


/* fcn.000275a0 @ 0x275a0 */

ulong fcn.000275a0(uint32_t arg1,uint32_t arg2,uint32_t arg3,uint32_t arg4)

{
    int iVar1;
    uint uVar2;
    ulong uVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    uint in_register_00000014;
    uint in_R8;
    uint64_t uStackX_18;
    uint64_t uStack_18;
    int64_t aiStack_10 [2];
    
    uStackX_18 = CONCAT44(in_R8,arg3);
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    aiStack_10[0] = 0;
    uStack_18 = 0;
    if (*(iVar4 + 0x90) == 2) {
        fcn.0001c9f0(0x24,0x6e,0x72,0);
        uVar3 = 0;
    }
    else if (*(iVar4 + 0x90) == 0) {
        fcn.0001c9f0(0x24,0x6e,0x73,0);
        uVar3 = 0;
    }
    else {
        if (CONCAT44(in_register_00000014,arg2) == 0) {
            uStackX_18 = 0;
        }
        else if (*(iVar4 + 0x68) < uStackX_18) {
            fcn.0001c9f0(0x24,0x6e,0x66,0);
            return 0;
        }
        *(iVar4 + 0x90) = 2;
        if (*(iVar4 + 0x150) != 0) {
            uStack_18 = (**(iVar4 + 0x150))(iVar4,aiStack_10,*(iVar4 + 0x30),*(iVar4 + 0x40),*(iVar4 + 0x48),arg4);
        }
        if ((uStack_18 < *(iVar4 + 0x40)) || (*(iVar4 + 0x48) < uStack_18)) {
            fcn.0001c9f0(0x24,0x6e,0x6e,0);
        }
        else {
            iVar1 = (**(*(iVar4 + 0x148) + 8))
                              (iVar4,aiStack_10[0],uStack_18,CONCAT44(in_register_00000014,arg2),uStackX_18);
            if (iVar1 != 0) {
                *(iVar4 + 0x90) = 1;
                *(iVar4 + 0x70) = 1;
                uVar2 = fcn.0004d110(0);
                *(iVar4 + 0x78) = uVar2;
                if (*(iVar4 + 0x80) != 0) {
                    if (*(iVar4 + 8) == 0) {
                        *(iVar4 + 0x84) = *(iVar4 + 0x84) + 1;
                    }
                    else {
                        *(iVar4 + 0x84) = *(*(iVar4 + 8) + 0x84);
                    }
                }
            }
        }
        if ((aiStack_10[0] != 0) && (*(iVar4 + 0x158) != 0)) {
            (**(iVar4 + 0x158))(iVar4,aiStack_10[0],uStack_18);
        }
        if (*(iVar4 + 0x90) == 1) {
            uVar3 = 1;
        }
        else {
            uVar3 = 0;
        }
    }
    return uVar3;
}


/* fcn.00027820 @ 0x27820 */

bool fcn.00027820(uint32_t arg1,uint32_t arg2,int arg3,uint32_t arg4)

{
    int iVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    uint in_register_00000014;
    uint in_R8;
    uint64_t uVar4;
    uint in_R9;
    bool bVar5;
    int64_t iStack_18;
    uint64_t uStack_10;
    
    uVar4 = CONCAT44(in_R8,arg3);
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    bVar5 = false;
    iStack_18 = 0;
    uStack_10 = 0;
    if (*(iVar3 + 0x20) != 0) {
        fcn.0001c9f0(0x24,0x66,0x44,0);
        *(iVar3 + 0x90) = 2;
        fcn.00025810(*(iVar3 + 0x20));
        *(iVar3 + 0x20) = 0;
        return false;
    }
    if (CONCAT44(in_register_00000014,arg2) != 0) {
        if (CONCAT44(in_R9,arg4) == 0) {
            if (*(iVar3 + 0x68) < uVar4) {
                fcn.0001c9f0(0x24,0x66,0x66,0);
                *(iVar3 + 0x90) = 2;
                return false;
            }
            iStack_18 = CONCAT44(in_register_00000014,arg2);
            uStack_10 = uVar4;
        }
        else {
            if (*(iVar3 + 0x48) < uVar4) {
                fcn.0001c9f0(0x24,0x66,0x6a,0);
                *(iVar3 + 0x90) = 2;
                return false;
            }
            if (uVar4 << 3 < CONCAT44(in_R9,arg4)) {
                fcn.0001c9f0(0x24,0x66,0x7c,0);
                *(iVar3 + 0x90) = 2;
                return false;
            }
            uVar2 = fcn.00025740(arg2,arg3,arg4);
            *(iVar3 + 0x20) = uVar2;
            if (*(iVar3 + 0x20) == 0) {
                return false;
            }
        }
    }
    if (*(iVar3 + 0x90) == 2) {
        fcn.00027510(arg1);
    }
    if (*(iVar3 + 0x90) == 0) {
        fcn.00027050(arg1,0x6be08,0x1c);
        bVar5 = *(iVar3 + 0x90) == 1;
    }
    if (*(iVar3 + 0x90) == 1) {
        if (iStack_18 == 0) {
            if ((!bVar5) && (iVar1 = fcn.000275a0(arg1,0,0,0), iVar1 == 0)) {
                fcn.0001c9f0(0x24,0x66,0x76,0);
            }
        }
        else {
            (**(*(iVar3 + 0x148) + 8))(iVar3,iStack_18,uStack_10,0,0);
        }
    }
    fcn.00025810(*(iVar3 + 0x20));
    *(iVar3 + 0x20) = 0;
    return *(iVar3 + 0x90) == 1;
}


/* fcn.000253f0 @ 0x253f0 */

ulong fcn.000253f0(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    ulong uStack_18;
    
    uStack_18 = 0;
    iVar1 = fcn.0002adb0(arg1);
    if (iVar1 != 0) {
        uStack_18 = fcn.00023360(arg1);
        uVar2 = fcn.000258a0(arg1);
        *arg2 = uVar2;
    }
    return uStack_18;
}


/* fcn.00025450 @ 0x25450 */

void fcn.00025450(int64_t arg1,uint32_t arg2)

{
    fcn.000258e0(arg1,arg2);
    return;
}


/* fcn.00026f60 @ 0x26f60 */

void fcn.00026f60(int64_t arg1,int64_t arg2,int64_t arg3)

{
    fcn.00026d40(1,arg1 & 0xffffffff,arg2 & 0xffffffff,arg3);
    return;
}


/* fcn.00027fb0 @ 0x27fb0 */

ulong fcn.00027fb0(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if (piVar2[0x12] != 0) {
        fcn.0001c9f0(0x24,0x77,0x81,0);
        return 0;
    }
    if (*piVar2 == 0) {
        if ((piVar2[1] != 0) && (*piVar2[1] == 0)) {
            fcn.0001c9f0(0x24,0x77,0x82,0);
            return 0;
        }
        iVar1 = fcn.00020ee0();
        *piVar2 = iVar1;
        if (*piVar2 == 0) {
            fcn.0001c9f0(0x24,0x77,0x7e,0);
            return 0;
        }
    }
    return 1;
}


/* fcn.00028140 @ 0x28140 */

ulong fcn.00028140(void)

{
    int iVar1;
    
    iVar1 = fcn.00021680(0,0);
    if ((iVar1 != 0) && (iVar1 = fcn.00021080(0x71124,0), iVar1 != 0)) {
        iVar1 = fcn.00021080(0x71128,0);
        if (iVar1 != 0) {
            *0x71130 = fcn.00028080(0);
            if (*0x71130 != 0) {
                return 1;
            }
            fcn.00021150(0x71128);
        }
        fcn.00021150(0x71124);
    }
    return 0;
}


/* fcn.00028080 @ 0x28080 */

int64_t fcn.00028080(uint32_t arg1)

{
    int iVar1;
    int64_t iVar2;
    uint32_t arg1_00;
    uint in_register_0000000c;
    
    iVar2 = fcn.00026f60(*0x4f870,*0x6fcec,CONCAT44(in_register_0000000c,arg1));
    if (iVar2 == 0) {
        iVar2 = 0;
    }
    else {
        arg1_00 = iVar2;
        if ((CONCAT44(in_register_0000000c,arg1) == 0) && (iVar1 = fcn.00027fb0(arg1_00), iVar1 == 0)) {
            fcn.00026f90(arg1_00);
            return 0;
        }
        *(iVar2 + 0x80) = 1;
        *(iVar2 + 0x84) = 1;
        fcn.00027050(arg1_00,0x6be08,0x1c);
    }
    return iVar2;
}


/* fcn.00028590 @ 0x28590 */

int64_t fcn.00028590(void)

{
    int iVar1;
    int64_t iVar2;
    int iStack_18;
    int64_t iStack_10;
    
    iVar1 = fcn.00021040(0x6fce8,0x28120);
    if (iVar1 == 0) {
        iStack_18 = 0;
    }
    else {
        iStack_18 = *0x6fce4;
    }
    if (iStack_18 == 0) {
        iVar2 = 0;
    }
    else {
        iVar2 = fcn.000210e0(0x71128);
        if (iVar2 == 0) {
            iVar1 = fcn.000215f0(4);
            if (iVar1 == 0) {
                return 0;
            }
            iVar2 = fcn.00028080(*0x71130);
            fcn.00021110(0x71128,iVar2);
        }
    }
    return iVar2;
}


/* fcn.00027df0 @ 0x27df0 */

uint64_t fcn.00027df0(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    ulong uVar2;
    uint in_R8;
    int64_t iStackX_10;
    uint64_t uStackX_18;
    uint64_t uStack_28;
    int64_t iStack_20;
    uint64_t uStack_18;
    ulong uStack_10;
    
    uStackX_18 = CONCAT44(in_R8,arg3);
    iStack_20 = 0;
    uStack_18 = 0;
    if (*(arg1 + 0x28) == 0) {
        if (*(arg1 + 0x14) == 0) goto code_r0x00027f1e;
        uVar2 = fcn.00025530(0,0,0,*(arg1 + 0x68));
        *(arg1 + 0x28) = uVar2;
        if (*(arg1 + 0x28) == 0) goto code_r0x00027f1e;
    }
    uStack_10 = fcn.000253f0(*(arg1 + 0x28),&iStack_20);
    iStackX_10 = arg2;
    for (; uStackX_18 != 0; uStackX_18 = uStackX_18 - uStack_28) {
        uStack_28 = uStackX_18;
        if (*(arg1 + 0x38) < uStackX_18) {
            uStack_28 = *(arg1 + 0x38);
        }
        iVar1 = fcn.00027b10(arg1,iStackX_10,uStack_28,0);
        uStack_18 = iVar1;
        if (uStack_18 == 0) {
            uStack_18 = 0;
            goto code_r0x00027f1e;
        }
        iStackX_10 = iStackX_10 + uStack_28;
    }
    uStack_18 = 1;
code_r0x00027f1e:
    if (iStack_20 != 0) {
        fcn.00025450(*(arg1 + 0x28),iStack_20);
    }
    return uStack_18 & 0xffffffff;
}


/* fcn.00028540 @ 0x28540 */

ulong fcn.00028540(void)

{
    int iVar1;
    ulong uVar2;
    int iStack_18;
    
    iVar1 = fcn.00021040(0x6fce8,0x28120);
    if (iVar1 == 0) {
        iStack_18 = 0;
    }
    else {
        iStack_18 = *0x6fce4;
    }
    if (iStack_18 == 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = *0x71130;
    }
    return uVar2;
}


/* fcn.00028270 @ 0x28270 */

uint64_t fcn.00028270(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    int64_t iVar1;
    uint64_t uStack_28;
    uint64_t uStack_20;
    uint64_t uStack_18;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    uStack_28 = *(iVar1 + 0x30);
    uStack_20 = *(iVar1 + 0x40);
    if ((*(iVar1 + 0x50) != 0) && (*(iVar1 + 0x160) == 0)) {
        uStack_28 = uStack_28 + *(iVar1 + 0x30) / 2;
        uStack_20 = uStack_20 + *(iVar1 + 0x50);
    }
    uStack_18 = uStack_28 >> 3;
    if (uStack_18 <= uStack_20) {
        uStack_18 = uStack_20;
    }
    return uStack_18;
}


/* fcn.00028320 @ 0x28320 */

uint fcn.00028320(int64_t arg1,int arg2)

{
    uint in_register_00000014;
    int64_t arg2_00;
    float8 fVar1;
    float8 in_XMM2_Qa;
    float8 fStackX_18;
    uchar auStack_28 [4];
    uint uStack_24;
    int64_t iStack_20;
    uint64_t uStack_18;
    uint64_t uStack_10;
    
    arg2_00 = CONCAT44(in_register_00000014,arg2);
    uStack_24 = 0;
    iStack_20 = fcn.00028540();
    if (iStack_20 == 0) {
        uStack_24 = 0;
    }
    else if ((arg2 < 0) || (in_XMM2_Qa < 0.0)) {
        uStack_24 = 0;
    }
    else {
        fcn.00027f50(iStack_20);
        uStack_18 = fcn.00028270(iStack_20,arg2_00);
        uStack_10 = arg2;
        if (uStack_18 <= uStack_10) {
            fVar1 = uStack_18;
            if (uStack_18 < 0) {
                fVar1 = fVar1 + *0x6ef40;
            }
            if (fVar1 <= in_XMM2_Qa) {
                fVar1 = uStack_18;
                if (uStack_18 < 0) {
                    fVar1 = fVar1 + *0x6ef40;
                }
                fStackX_18 = in_XMM2_Qa;
                if ((fVar1 < in_XMM2_Qa) && (fStackX_18 = uStack_18, uStack_18 < 0)) {
                    fStackX_18 = fStackX_18 + *0x6ef40;
                }
                fStackX_18 = *0x6ef30 * fStackX_18;
                if (*0x6ef38 <= fStackX_18) {
                    fStackX_18 = fStackX_18 - *0x6ef38;
                }
                uStack_24 = fcn.00027820(iStack_20,arg1,arg2,fStackX_18);
                fcn.00027f80(iStack_20);
                return uStack_24;
            }
        }
        uStack_24 = fcn.00027b10(iStack_20,auStack_28,1,0);
        fcn.00027f80(iStack_20);
    }
    return uStack_24;
}


/* fcn.00028650 @ 0x28650 */

bool fcn.00028650(void)

{
    int iVar1;
    bool bVar2;
    
    iVar1 = fcn.00021680(0,0);
    if (iVar1 == 0) {
        bVar2 = false;
    }
    else {
        *0x6fcf0 = fcn.00020ee0();
        bVar2 = *0x6fcf0 != 0;
    }
    return bVar2;
}


/* fcn.000286a0 @ 0x286a0 */

int64_t fcn.000286a0(int arg1)

{
    int iVar1;
    int64_t iVar2;
    int iStack_18;
    
    if ((arg1 < 0) || (0xf < arg1)) {
        fcn.0001c9f0(0xf,0x71,7,0);
        iVar2 = 0;
    }
    else {
        iVar1 = fcn.00021040(0x6fcfc,0x28630);
        if (iVar1 == 0) {
            iStack_18 = 0;
        }
        else {
            iStack_18 = *0x6fcf8;
        }
        if (iStack_18 == 0) {
            fcn.0001c9f0(0xf,0x71,0x41,0);
            iVar2 = 0;
        }
        else if (*0x6fcf0 == 0) {
            iVar2 = 0;
        }
        else {
            iVar2 = arg1 * 8 + 0x71140;
            fcn.00020f20(*0x6fcf0);
        }
    }
    return iVar2;
}


/* fcn.00028970 @ 0x28970 */

ulong fcn.00028970(int64_t arg1,int arg2)

{
    int iVar1;
    ulong uVar2;
    
    if ((*arg1 != 0) && (iVar1 = fcn.00023370(*arg1), arg2 < iVar1)) {
        uVar2 = fcn.00023390(*arg1,arg2);
        return uVar2;
    }
    return 0;
}


/* fcn.00035000 @ 0x35000 */

ulong fcn.00035000(int64_t arg1)

{
    fcn.00013234(arg1,0x5c);
    *arg1 = 0x67452301;
    *(arg1 + 4) = 0xefcdab89;
    *(arg1 + 8) = 0x98badcfe;
    *(arg1 + 0xc) = 0x10325476;
    return 1;
}


/* fcn.00034950 @ 0x34950 */

ulong fcn.00034950(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    int arg1_00;
    uint64_t uVar2;
    uint in_R8;
    uint64_t uStackX_18;
    int64_t iStack_18;
    
    uStackX_18 = CONCAT44(in_R8,arg3);
    if (uStackX_18 != 0) {
        uVar1 = *(arg1 + 0x10) + arg3 * 8;
        if (uVar1 < *(arg1 + 0x10)) {
            *(arg1 + 0x14) = *(arg1 + 0x14) + 1;
        }
        *(arg1 + 0x14) = (uStackX_18 >> 0x1d) + *(arg1 + 0x14);
        *(arg1 + 0x10) = uVar1;
        uVar1 = *(arg1 + 0x58);
        uVar2 = uVar1;
        iStack_18 = arg2;
        if (uVar2 != 0) {
            arg1_00 = arg1 + 0x18;
            if ((uStackX_18 < 0x40) && (uStackX_18 + uVar2 < 0x40)) {
                fcn.0001320c(arg1_00 + uVar1,arg2,arg3);
                *(arg1 + 0x58) = *(arg1 + 0x58) + arg3;
                return 1;
            }
            fcn.0001320c(arg1_00 + uVar1,arg2,0x40 - uVar1);
            fcn.00035060(arg1,arg1 + 0x18,1);
            iStack_18 = arg2 + (0x40 - uVar2);
            uStackX_18 = uStackX_18 - (0x40 - uVar2);
            *(arg1 + 0x58) = 0;
            fcn.00013234(arg1_00,0x40);
        }
        uVar2 = uStackX_18 / 0x40;
        if (uVar2 != 0) {
            fcn.00035060(arg1,iStack_18,uVar2);
            iStack_18 = iStack_18 + uVar2 * 0x40;
            uStackX_18 = uStackX_18 % 0x40;
        }
        if (uStackX_18 != 0) {
            *(arg1 + 0x58) = uStackX_18;
            fcn.0001320c(arg1 + 0x18,iStack_18,uStackX_18);
        }
    }
    return 1;
}


/* fcn.00034ba0 @ 0x34ba0 */

ulong fcn.00034ba0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint uVar2;
    int64_t arg2_00;
    uint64_t uStack_18;
    
    arg2_00 = arg2 + 0x18;
    uVar1 = *(arg2 + 0x58);
    *(arg2_00 + uVar1) = 0x80;
    uStack_18 = uVar1 + 1;
    if (0x38 < uStack_18) {
        fcn.00013234(arg2_00 + uStack_18,0x40 - uStack_18);
        uStack_18 = 0;
        fcn.00035060(arg2,arg2_00,1);
    }
    fcn.00013234(arg2_00 + uStack_18,0x38 - uStack_18);
    *(arg2 + 0x50) = *(arg2 + 0x10);
    *(arg2 + 0x51) = *(arg2 + 0x10) >> 8;
    *(arg2 + 0x52) = *(arg2 + 0x10) >> 0x10;
    *(arg2 + 0x53) = *(arg2 + 0x10) >> 0x18;
    *(arg2 + 0x54) = *(arg2 + 0x14);
    *(arg2 + 0x55) = *(arg2 + 0x14) >> 8;
    *(arg2 + 0x56) = *(arg2 + 0x14) >> 0x10;
    *(arg2 + 0x57) = *(arg2 + 0x14) >> 0x18;
    fcn.00035060(arg2,arg2 + 0x18,1);
    *(arg2 + 0x58) = 0;
    fcn.00019440(arg2 + 0x18,0x40);
    uVar2 = *arg2;
    *arg1 = uVar2;
    *(arg1 + 1) = uVar2 >> 8;
    *(arg1 + 2) = uVar2 >> 0x10;
    *(arg1 + 3) = uVar2 >> 0x18;
    uVar2 = *(arg2 + 4);
    *(arg1 + 4) = uVar2;
    *(arg1 + 5) = uVar2 >> 8;
    *(arg1 + 6) = uVar2 >> 0x10;
    *(arg1 + 7) = uVar2 >> 0x18;
    uVar2 = *(arg2 + 8);
    *(arg1 + 8) = uVar2;
    *(arg1 + 9) = uVar2 >> 8;
    *(arg1 + 10) = uVar2 >> 0x10;
    *(arg1 + 0xb) = uVar2 >> 0x18;
    uVar2 = *(arg2 + 0xc);
    *(arg1 + 0xc) = uVar2;
    *(arg1 + 0xd) = uVar2 >> 8;
    *(arg1 + 0xe) = uVar2 >> 0x10;
    *(arg1 + 0xf) = uVar2 >> 0x18;
    return 1;
}


/* fcn.000233d0 @ 0x233d0 */

void fcn.000233d0(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iStackX_8;
    int64_t iStackX_10;
    
    iStackX_8 = arg1;
    iStackX_10 = arg2;
    fcn.00023400(&iStackX_8,arg2,0,arg3);
    return;
}


/* fcn.00028c50 @ 0x28c50 */

uint fcn.00028c50(int64_t arg1)

{
    return *arg1;
}


/* fcn.00028cd0 @ 0x28cd0 */

void fcn.00028cd0(int64_t arg1,int64_t arg2)

{
    *arg1 = arg2;
    *(arg1 + 1) = arg2 >> 8;
    *(arg1 + 2) = arg2 >> 0x10;
    *(arg1 + 3) = arg2 >> 0x18;
    return;
}


/* fcn.00028d50 @ 0x28d50 */

void fcn.00028d50(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    
    *arg1 = 0;
    *(arg1 + 4) = 0;
    *(arg1 + 8) = 0;
    *(arg1 + 0xc) = 0;
    *(arg1 + 0x10) = 0;
    uVar1 = fcn.00028c50(arg2);
    *(arg1 + 0x14) = uVar1 & 0xfffffff;
    uVar1 = fcn.00028c50(arg2 + 4);
    *(arg1 + 0x18) = uVar1 & 0xffffffc;
    uVar1 = fcn.00028c50(arg2 + 8);
    *(arg1 + 0x1c) = uVar1 & 0xffffffc;
    uVar1 = fcn.00028c50(arg2 + 0xc);
    *(arg1 + 0x20) = uVar1 & 0xffffffc;
    return;
}


/* fcn.00028eb0 @ 0x28eb0 */

void fcn.00028eb0(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    int64_t iVar16;
    uint in_R8;
    int64_t iStackX_10;
    uint64_t uStackX_18;
    int iStack_84;
    uint32_t uStack_80;
    uint32_t uStack_7c;
    uint32_t uStack_78;
    uint32_t uStack_74;
    int iStack_50;
    int iStack_48;
    int iStack_40;
    int iStack_30;
    
    uVar1 = *(arg1 + 0x14);
    uVar2 = *(arg1 + 0x18);
    uVar3 = *(arg1 + 0x1c);
    uVar4 = *(arg1 + 0x20);
    uVar8 = uVar2 + (uVar2 >> 2);
    uVar9 = uVar3 + (uVar3 >> 2);
    uVar10 = uVar4 + (uVar4 >> 2);
    uStack_80 = *arg1;
    uStack_7c = *(arg1 + 4);
    uStack_78 = *(arg1 + 8);
    uStack_74 = *(arg1 + 0xc);
    iStack_84 = *(arg1 + 0x10);
    iStackX_10 = arg2;
    for (uStackX_18 = CONCAT44(in_R8,arg3); 0xf < uStackX_18; uStackX_18 = uStackX_18 - 0x10) {
        uVar6 = fcn.00028c50(iStackX_10);
        uVar12 = uStack_80 + uVar6;
        uVar6 = fcn.00028c50(iStackX_10 + 4);
        uVar13 = uStack_7c + (uVar12 >> 0x20) + uVar6;
        uVar6 = fcn.00028c50(iStackX_10 + 8);
        uVar14 = uStack_78 + (uVar13 >> 0x20) + uVar6;
        uVar6 = fcn.00028c50(iStackX_10 + 0xc);
        uVar15 = uStack_74 + (uVar14 >> 0x20) + uVar6;
        iStack_84 = iStack_84 + (uVar15 >> 0x20) + arg4;
        uVar7 = (uVar12 & 0xffffffff) * uVar1 + (uVar13 & 0xffffffff) * uVar10 + (uVar14 & 0xffffffff) * uVar9 +
                (uVar15 & 0xffffffff) * uVar8;
        iStack_30 = uVar7;
        uVar7 = (uVar12 & 0xffffffff) * uVar2 + (uVar13 & 0xffffffff) * uVar1 + (uVar14 & 0xffffffff) * uVar10 +
                (uVar15 & 0xffffffff) * uVar9 + iStack_84 * uVar8 + (uVar7 >> 0x20);
        iStack_50 = uVar7;
        uVar7 = (uVar12 & 0xffffffff) * uVar3 + (uVar13 & 0xffffffff) * uVar2 + (uVar14 & 0xffffffff) * uVar1 +
                (uVar15 & 0xffffffff) * uVar10 + iStack_84 * uVar9 + (uVar7 >> 0x20);
        iStack_48 = uVar7;
        iVar16 = (uVar12 & 0xffffffff) * uVar4 + (uVar13 & 0xffffffff) * uVar3 + (uVar14 & 0xffffffff) * uVar2 +
                 (uVar15 & 0xffffffff) * uVar1 + iStack_84 * uVar10 + (uVar7 >> 0x20);
        iStack_40 = iVar16;
        uVar11 = iStack_84 * uVar1 + (iVar16 >> 0x20);
        uVar6 = (uVar11 >> 2) + (uVar11 & 0xfffffffc);
        uStack_80 = iStack_30 + uVar6;
        iVar5 = (uStack_80 ^ (uStack_80 ^ uVar6 | uStack_80 - uVar6 ^ uVar6)) >> 0x1f;
        uStack_7c = iStack_50 - iVar5;
        iVar5 = (uStack_7c ^ (uStack_7c | uStack_7c + iVar5)) >> 0x1f;
        uStack_78 = iStack_48 - iVar5;
        iVar5 = (uStack_78 ^ (uStack_78 | uStack_78 + iVar5)) >> 0x1f;
        uVar6 = -iVar5;
        uStack_74 = iStack_40 + uVar6;
        iStack_84 = (uVar11 & 3) - ((uStack_74 ^ (uStack_74 ^ uVar6 | uStack_74 + iVar5 ^ uVar6)) >> 0x1f);
        iStackX_10 = iStackX_10 + 0x10;
    }
    *arg1 = uStack_80;
    *(arg1 + 4) = uStack_7c;
    *(arg1 + 8) = uStack_78;
    *(arg1 + 0xc) = uStack_74;
    *(arg1 + 0x10) = iStack_84;
    return;
}


/* fcn.00029470 @ 0x29470 */

void fcn.00029470(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint32_t uStack_48;
    
    uVar1 = *(arg1 + 0xc);
    uVar7 = *arg1 + 5;
    uStack_48 = uVar7;
    uVar2 = uStack_48;
    uVar7 = *(arg1 + 4) + (uVar7 >> 0x20);
    uStack_48 = uVar7;
    uVar4 = uStack_48;
    uVar7 = *(arg1 + 8) + (uVar7 >> 0x20);
    uStack_48 = uVar7;
    uVar5 = uStack_48;
    iVar8 = uVar1 + (uVar7 >> 0x20);
    uStack_48 = iVar8;
    uVar3 = -(*(arg1 + 0x10) + (iVar8 >> 0x20) >> 2);
    uVar6 = ~uVar3;
    uVar7 = (*arg1 & uVar6 | uVar2 & uVar3) + *arg3;
    uVar9 = (*(arg1 + 4) & uVar6 | uVar4 & uVar3) + (uVar7 >> 0x20) + *(arg3 + 4);
    uVar10 = (*(arg1 + 8) & uVar6 | uVar5 & uVar3) + (uVar9 >> 0x20) + *(arg3 + 8);
    uVar2 = *(arg3 + 0xc);
    fcn.00028cd0(arg2,uVar7 & 0xffffffff);
    fcn.00028cd0(arg2 + 4,uVar9 & 0xffffffff);
    fcn.00028cd0(arg2 + 8,uVar10 & 0xffffffff);
    fcn.00028cd0(arg2 + 0xc,(uVar1 & uVar6 | uStack_48 & uVar3) + (uVar10 >> 0x20) + uVar2 & 0xffffffff);
    return;
}


/* fcn.00037590 @ 0x37590 */

ulong fcn.00037590(int64_t arg1)

{
    fcn.00013234(arg1,0x6c);
    *arg1 = 0x7380166f;
    *(arg1 + 4) = 0x4914b2b9;
    *(arg1 + 8) = 0x172442d7;
    *(arg1 + 0xc) = 0xda8a0600;
    *(arg1 + 0x10) = 0xa96f30bc;
    *(arg1 + 0x14) = 0x163138aa;
    *(arg1 + 0x18) = 0xe38dee4d;
    *(arg1 + 0x1c) = 0xb0fb0e4e;
    return 1;
}


/* fcn.00036cc0 @ 0x36cc0 */

ulong fcn.00036cc0(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    int arg1_00;
    uint64_t uVar2;
    uint in_R8;
    uint64_t uStackX_18;
    int64_t iStack_18;
    
    uStackX_18 = CONCAT44(in_R8,arg3);
    if (uStackX_18 != 0) {
        uVar1 = *(arg1 + 0x20) + arg3 * 8;
        if (uVar1 < *(arg1 + 0x20)) {
            *(arg1 + 0x24) = *(arg1 + 0x24) + 1;
        }
        *(arg1 + 0x24) = (uStackX_18 >> 0x1d) + *(arg1 + 0x24);
        *(arg1 + 0x20) = uVar1;
        uVar1 = *(arg1 + 0x68);
        uVar2 = uVar1;
        iStack_18 = arg2;
        if (uVar2 != 0) {
            arg1_00 = arg1 + 0x28;
            if ((uStackX_18 < 0x40) && (uStackX_18 + uVar2 < 0x40)) {
                fcn.0001320c(arg1_00 + uVar1,arg2,arg3);
                *(arg1 + 0x68) = *(arg1 + 0x68) + arg3;
                return 1;
            }
            fcn.0001320c(arg1_00 + uVar1,arg2,0x40 - uVar1);
            fcn.00037620(arg1,arg1 + 0x28,1);
            iStack_18 = arg2 + (0x40 - uVar2);
            uStackX_18 = uStackX_18 - (0x40 - uVar2);
            *(arg1 + 0x68) = 0;
            fcn.00013234(arg1_00,0x40);
        }
        uVar2 = uStackX_18 / 0x40;
        if (uVar2 != 0) {
            fcn.00037620(arg1,iStack_18,uVar2);
            iStack_18 = iStack_18 + uVar2 * 0x40;
            uStackX_18 = uStackX_18 % 0x40;
        }
        if (uStackX_18 != 0) {
            *(arg1 + 0x68) = uStackX_18;
            fcn.0001320c(arg1 + 0x28,iStack_18,uStackX_18);
        }
    }
    return 1;
}


/* fcn.00036f10 @ 0x36f10 */

ulong fcn.00036f10(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint uVar2;
    int64_t arg2_00;
    uint64_t uStack_18;
    
    arg2_00 = arg2 + 0x28;
    uVar1 = *(arg2 + 0x68);
    *(arg2_00 + uVar1) = 0x80;
    uStack_18 = uVar1 + 1;
    if (0x38 < uStack_18) {
        fcn.00013234(arg2_00 + uStack_18,0x40 - uStack_18);
        uStack_18 = 0;
        fcn.00037620(arg2,arg2_00,1);
    }
    fcn.00013234(arg2_00 + uStack_18,0x38 - uStack_18);
    *(arg2 + 0x60) = *(arg2 + 0x24) >> 0x18;
    *(arg2 + 0x61) = *(arg2 + 0x24) >> 0x10;
    *(arg2 + 0x62) = *(arg2 + 0x24) >> 8;
    *(arg2 + 99) = *(arg2 + 0x24);
    *(arg2 + 100) = *(arg2 + 0x20) >> 0x18;
    *(arg2 + 0x65) = *(arg2 + 0x20) >> 0x10;
    *(arg2 + 0x66) = *(arg2 + 0x20) >> 8;
    *(arg2 + 0x67) = *(arg2 + 0x20);
    fcn.00037620(arg2,arg2 + 0x28,1);
    *(arg2 + 0x68) = 0;
    fcn.00019440(arg2 + 0x28,0x40);
    uVar2 = *arg2;
    *arg1 = uVar2 >> 0x18;
    *(arg1 + 1) = uVar2 >> 0x10;
    *(arg1 + 2) = uVar2 >> 8;
    *(arg1 + 3) = uVar2;
    uVar2 = *(arg2 + 4);
    *(arg1 + 4) = uVar2 >> 0x18;
    *(arg1 + 5) = uVar2 >> 0x10;
    *(arg1 + 6) = uVar2 >> 8;
    *(arg1 + 7) = uVar2;
    uVar2 = *(arg2 + 8);
    *(arg1 + 8) = uVar2 >> 0x18;
    *(arg1 + 9) = uVar2 >> 0x10;
    *(arg1 + 10) = uVar2 >> 8;
    *(arg1 + 0xb) = uVar2;
    uVar2 = *(arg2 + 0xc);
    *(arg1 + 0xc) = uVar2 >> 0x18;
    *(arg1 + 0xd) = uVar2 >> 0x10;
    *(arg1 + 0xe) = uVar2 >> 8;
    *(arg1 + 0xf) = uVar2;
    uVar2 = *(arg2 + 0x10);
    *(arg1 + 0x10) = uVar2 >> 0x18;
    *(arg1 + 0x11) = uVar2 >> 0x10;
    *(arg1 + 0x12) = uVar2 >> 8;
    *(arg1 + 0x13) = uVar2;
    uVar2 = *(arg2 + 0x14);
    *(arg1 + 0x14) = uVar2 >> 0x18;
    *(arg1 + 0x15) = uVar2 >> 0x10;
    *(arg1 + 0x16) = uVar2 >> 8;
    *(arg1 + 0x17) = uVar2;
    uVar2 = *(arg2 + 0x18);
    *(arg1 + 0x18) = uVar2 >> 0x18;
    *(arg1 + 0x19) = uVar2 >> 0x10;
    *(arg1 + 0x1a) = uVar2 >> 8;
    *(arg1 + 0x1b) = uVar2;
    uVar2 = *(arg2 + 0x1c);
    *(arg1 + 0x1c) = uVar2 >> 0x18;
    *(arg1 + 0x1d) = uVar2 >> 0x10;
    *(arg1 + 0x1e) = uVar2 >> 8;
    *(arg1 + 0x1f) = uVar2;
    return 1;
}


/* fcn.00019030 @ 0x19030 */

uint fcn.00019030(int64_t arg1)

{
    return *(arg1 + 0x68);
}


/* fcn.00029ba0 @ 0x29ba0 */

uint fcn.00029ba0(void)

{
    uint uStack_18;
    
    fcn.0003fba0(3);
    *0x6fd00 = 0;
    *0x6fd10 = fcn.00020ee0();
    if (*0x6fd10 != 0) {
        *0x6fd00 = fcn.0001d5b0(0x29d30,0x29c90);
    }
    if (*0x6fd00 == 0) {
        fcn.00021000(*0x6fd10);
        *0x6fd10 = 0;
    }
    fcn.0003fba0(2);
    if ((*0x6fd00 == 0) || (*0x6fd10 == 0)) {
        uStack_18 = 0;
    }
    else {
        uStack_18 = 1;
    }
    return uStack_18;
}


/* fcn.0003fba0 @ 0x3fba0 */

uint fcn.0003fba0(int64_t arg1)

{
    return 0;
}


/* fcn.0001491c @ 0x1491c */

int64_t fcn.0001491c(int64_t arg1,int64_t arg2)

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


/* fcn.00020de0 @ 0x20de0 */

uint32_t fcn.00020de0(uint32_t arg1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint in_register_0000000c;
    char *pcStackX_8;
    uint32_t uStack_28;
    uint32_t uStack_20;
    
    pcStackX_8 = CONCAT44(in_register_0000000c,arg1);
    uStack_28 = 0;
    if ((pcStackX_8 == NULL) || (*pcStackX_8 == '\0')) {
        uStack_28 = 0;
    }
    else {
        uStack_20 = 0x100;
        for (; *pcStackX_8 != '\0'; pcStackX_8 = pcStackX_8 + 1) {
            uVar1 = fcn.00024b60(*pcStackX_8);
            uVar3 = uStack_20 | uVar1;
            uVar2 = (uVar3 >> 2 ^ uVar1) & 0xf;
            uStack_28 = (uStack_28 << uVar2 | uStack_28 >> (0x20 - uVar2 & 0x3f)) ^ uVar3 * uVar3;
            uStack_20 = uStack_20 + 0x100;
        }
        uStack_28 = uStack_28 >> 0x10 ^ uStack_28;
    }
    return uStack_28;
}


/* fcn.00029c50 @ 0x29c50 */

uint fcn.00029c50(void)

{
    int iVar1;
    uint uStack_18;
    
    iVar1 = fcn.00021040(0x6fd08,0x29b80);
    if (iVar1 == 0) {
        uStack_18 = 0;
    }
    else {
        uStack_18 = *0x6fd18;
    }
    return uStack_18;
}


/* fcn.00029b60 @ 0x29b60 */

void fcn.00029b60(int64_t arg1)

{
    fcn.00019030(arg1);
    return;
}


/* fcn.00029f50 @ 0x29f50 */

ulong fcn.00029f50(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    ulong uVar1;
    uint in_register_00000014;
    uint in_R8;
    uint64_t uStack_18;
    uint64_t uStack_10;
    
    if (CONCAT44(in_R8,arg3) < 9) {
        if (CONCAT44(in_register_00000014,arg2) == 0) {
            uVar1 = 0;
        }
        else {
            uStack_18 = 0;
            for (uStack_10 = 0; uStack_10 < CONCAT44(in_R8,arg3); uStack_10 = uStack_10 + 1) {
                uStack_18 = uStack_18 << 8 | *(CONCAT44(in_register_00000014,arg2) + uStack_10);
            }
            *arg1 = uStack_18;
            uVar1 = 1;
        }
    }
    else {
        fcn.0001c9f0(0xd,0xe1,0xdf,0);
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.0002a020 @ 0x2a020 */

ulong fcn.0002a020(uint32_t arg1,int64_t arg2,uint32_t arg3,uint32_t arg4)

{
    int iVar1;
    ulong uVar2;
    uint in_register_0000000c;
    uint64_t *puVar3;
    uint64_t auStack_18 [3];
    
    puVar3 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = fcn.00029f50(auStack_18,arg2,arg3);
    if (iVar1 == 0) {
        uVar2 = 0;
    }
    else {
        if (arg4 == 0) {
            if (0x7fffffffffffffff < auStack_18[0]) {
                fcn.0001c9f0(0xd,0xe0,0xdf,0);
                return 0;
            }
            *puVar3 = auStack_18[0];
        }
        else if (auStack_18[0] < 0x8000000000000000) {
            *puVar3 = -auStack_18[0];
        }
        else {
            if (auStack_18[0] != 0x8000000000000000) {
                fcn.0001c9f0(0xd,0xe0,0xe0,0);
                return 0;
            }
            *puVar3 = 0x8000000000000000;
        }
        uVar2 = 1;
    }
    return uVar2;
}


/* fcn.0002a120 @ 0x2a120 */

ulong fcn.0002a120(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    ulong uVar1;
    uint in_register_00000014;
    uint32_t *puVar2;
    
    puVar2 = CONCAT44(in_register_00000014,arg2);
    if (puVar2 == NULL) {
        fcn.0001c9f0(0xd,0xe3,0x43,0);
        uVar1 = 0;
    }
    else if ((puVar2[1] & 0xfffffeff) == arg3) {
        uVar1 = fcn.0002a020(arg1,*(puVar2 + 2),*puVar2,puVar2[1] & 0x100);
    }
    else {
        fcn.0001c9f0(0xd,0xe3,0xe1,0);
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.0002a1d0 @ 0x2a1d0 */

void fcn.0002a1d0(int64_t arg1,uint32_t arg2)

{
    fcn.0002a120(arg1,arg2,2);
    return;
}


/* fcn.0002a200 @ 0x2a200 */

uint fcn.0002a200(uint32_t arg1)

{
    int iVar1;
    uint in_register_0000000c;
    uint uStack_10;
    uint uStack_c;
    
    if (CONCAT44(in_register_0000000c,arg1) == 0) {
        uStack_10 = 0;
    }
    else {
        iVar1 = fcn.0002a1d0(&uStack_10,arg1);
        if (iVar1 == 0) {
            uStack_10 = 0xffffffff;
        }
        else if ((0x7fffffff < CONCAT44(uStack_c,uStack_10)) || (CONCAT44(uStack_c,uStack_10) < -0x80000000)) {
            uStack_10 = 0xffffffff;
        }
    }
    return uStack_10;
}


/* fcn.00018f50 @ 0x18f50 */

ulong fcn.00018f50(int64_t arg1)

{
    return *(arg1 + 0x70);
}


/* fcn.0003fe90 @ 0x3fe90 */

ulong fcn.0003fe90(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    ulong uVar5;
    int iStack_34;
    uint8_t uStack_30;
    uint32_t auStack_18 [6];
    
    auStack_18[0] = fcn.0003fbf0(arg1,0);
    auStack_18[0] = auStack_18[0] ^ *0x6dc18;
    auStack_18[1] = fcn.0003fbf0(arg1,1);
    auStack_18[1] = auStack_18[1] ^ *0x6dc1c;
    auStack_18[2] = fcn.0003fbf0(arg1,2);
    auStack_18[2] = auStack_18[2] ^ *0x6dc20;
    uVar1 = fcn.0003fbf0(arg1,3);
    auStack_18[3] = uVar1 ^ *0x6dc24;
    for (iStack_34 = 0; iStack_34 != 0x20; iStack_34 = iStack_34 + 1) {
        uVar1 = iStack_34 + 1 >> 0x1f & 3;
        uVar2 = iStack_34 + 2 >> 0x1f & 3;
        uVar3 = iStack_34 + 3 >> 0x1f & 3;
        uVar1 = auStack_18[(iStack_34 + 1 + uVar1 & 3) - uVar1] ^ auStack_18[(iStack_34 + 2 + uVar2 & 3) - uVar2] ^
                auStack_18[(iStack_34 + 3 + uVar3 & 3) - uVar3] ^ *(iStack_34 * 4 + 0x6dc30);
        uStack_30 = uVar1;
        uVar3 = *((uVar1 >> 0x18) + 0x6dcb0) << 0x18 | *((uVar1 >> 0x10 & 0xff) + 0x6dcb0) << 0x10 |
                *((uVar1 >> 8 & 0xff) + 0x6dcb0) << 8 | *(uStack_30 + 0x6dcb0);
        uVar5 = 0x6dc0d;
        uVar1 = fcn.0003fbc0(uVar3,0x6dc0d);
        uVar2 = fcn.0003fbc0(uVar3,CONCAT71(uVar5 >> 8,0x17));
        uVar4 = iStack_34 >> 0x1f;
        auStack_18[(iStack_34 + (uVar4 & 3) & 3) - (uVar4 & 3)] =
             auStack_18[(iStack_34 + (uVar4 & 3) & 3) - (uVar4 & 3)] ^ uVar3 ^ uVar1 ^ uVar2;
        *(arg2 + iStack_34 * 4) = auStack_18[(iStack_34 + (uVar4 & 3) & 3) - (uVar4 & 3)];
    }
    return 1;
}


/* fcn.000415c0 @ 0x415c0 */

void fcn.000415c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int64_t in_stack_00000028;
    uint32_t *in_stack_00000030;
    int in_stack_00000038;
    code *in_stack_00000040;
    uint32_t uStack_24;
    uint64_t uStack_18;
    
    uStack_18 = 0;
    uStack_24 = *in_stack_00000030;
    if (in_stack_00000038 == 0) {
        for (; uStack_18 < arg3; uStack_18 = uStack_18 + 1) {
            if (uStack_24 == 0) {
                (*in_stack_00000040)(in_stack_00000028,in_stack_00000028,arg4);
            }
            uVar1 = *(arg1 + uStack_18);
            *(arg2 + uStack_18) = *(in_stack_00000028 + uStack_24) ^ uVar1;
            *(in_stack_00000028 + uStack_24) = uVar1;
            uStack_24 = (uStack_24 + 1) % 0x10;
        }
        *in_stack_00000030 = uStack_24;
    }
    else {
        for (; uStack_18 < arg3; uStack_18 = uStack_18 + 1) {
            if (uStack_24 == 0) {
                (*in_stack_00000040)(in_stack_00000028,in_stack_00000028,arg4);
            }
            uVar1 = *(in_stack_00000028 + uStack_24) ^ *(arg1 + uStack_18);
            *(in_stack_00000028 + uStack_24) = uVar1;
            *(arg2 + uStack_18) = uVar1;
            uStack_24 = (uStack_24 + 1) % 0x10;
        }
        *in_stack_00000030 = uStack_24;
    }
    return;
}


/* fcn.00040120 @ 0x40120 */

void fcn.00040120(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    
    uVar1 = fcn.0003fbf0(arg1,0);
    uVar2 = fcn.0003fbf0(arg1,1);
    uVar3 = fcn.0003fbf0(arg1,2);
    uVar4 = fcn.0003fbf0(arg1,3);
    uVar5 = fcn.0003fcd0(uVar2 ^ uVar3 ^ uVar4 ^ *arg3);
    uVar1 = uVar1 ^ uVar5;
    uVar5 = fcn.0003fcd0(uVar1 ^ uVar3 ^ uVar4 ^ *(arg3 + 4));
    uVar2 = uVar2 ^ uVar5;
    uVar5 = fcn.0003fcd0(uVar1 ^ uVar2 ^ uVar4 ^ *(arg3 + 8));
    uVar3 = uVar3 ^ uVar5;
    uVar5 = fcn.0003fcd0(uVar1 ^ uVar2 ^ uVar3 ^ *(arg3 + 0xc));
    uVar4 = uVar4 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar2 ^ uVar3 ^ uVar4 ^ *(arg3 + 0x10));
    uVar1 = uVar1 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar3 ^ uVar4 ^ *(arg3 + 0x14));
    uVar2 = uVar2 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar2 ^ uVar4 ^ *(arg3 + 0x18));
    uVar3 = uVar3 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar2 ^ uVar3 ^ *(arg3 + 0x1c));
    uVar4 = uVar4 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar2 ^ uVar3 ^ uVar4 ^ *(arg3 + 0x20));
    uVar1 = uVar1 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar3 ^ uVar4 ^ *(arg3 + 0x24));
    uVar2 = uVar2 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar2 ^ uVar4 ^ *(arg3 + 0x28));
    uVar3 = uVar3 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar2 ^ uVar3 ^ *(arg3 + 0x2c));
    uVar4 = uVar4 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar2 ^ uVar3 ^ uVar4 ^ *(arg3 + 0x30));
    uVar1 = uVar1 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar3 ^ uVar4 ^ *(arg3 + 0x34));
    uVar2 = uVar2 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar2 ^ uVar4 ^ *(arg3 + 0x38));
    uVar3 = uVar3 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar2 ^ uVar3 ^ *(arg3 + 0x3c));
    uVar4 = uVar4 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar2 ^ uVar3 ^ uVar4 ^ *(arg3 + 0x40));
    uVar1 = uVar1 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar3 ^ uVar4 ^ *(arg3 + 0x44));
    uVar2 = uVar2 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar2 ^ uVar4 ^ *(arg3 + 0x48));
    uVar3 = uVar3 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar2 ^ uVar3 ^ *(arg3 + 0x4c));
    uVar4 = uVar4 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar2 ^ uVar3 ^ uVar4 ^ *(arg3 + 0x50));
    uVar1 = uVar1 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar3 ^ uVar4 ^ *(arg3 + 0x54));
    uVar2 = uVar2 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar2 ^ uVar4 ^ *(arg3 + 0x58));
    uVar3 = uVar3 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar2 ^ uVar3 ^ *(arg3 + 0x5c));
    uVar4 = uVar4 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar2 ^ uVar3 ^ uVar4 ^ *(arg3 + 0x60));
    uVar1 = uVar1 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar3 ^ uVar4 ^ *(arg3 + 100));
    uVar2 = uVar2 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar2 ^ uVar4 ^ *(arg3 + 0x68));
    uVar3 = uVar3 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar2 ^ uVar3 ^ *(arg3 + 0x6c));
    uVar4 = uVar4 ^ uVar5;
    uVar5 = fcn.0003fcd0(uVar2 ^ uVar3 ^ uVar4 ^ *(arg3 + 0x70));
    uVar1 = uVar1 ^ uVar5;
    uVar5 = fcn.0003fcd0(uVar1 ^ uVar3 ^ uVar4 ^ *(arg3 + 0x74));
    uVar2 = uVar2 ^ uVar5;
    uVar5 = fcn.0003fcd0(uVar1 ^ uVar2 ^ uVar4 ^ *(arg3 + 0x78));
    uVar6 = fcn.0003fcd0(uVar1 ^ uVar2 ^ uVar3 ^ uVar5 ^ *(arg3 + 0x7c));
    fcn.0003fc60(uVar4 ^ uVar6,arg2);
    fcn.0003fc60(uVar3 ^ uVar5,arg2 + 4);
    fcn.0003fc60(uVar2,arg2 + 8);
    fcn.0003fc60(uVar1,arg2 + 0xc);
    return;
}


/* fcn.0003fbf0 @ 0x3fbf0 */

uint32_t fcn.0003fbf0(int64_t arg1,int64_t arg2)

{
    int iVar1;
    
    iVar1 = arg2;
    return *(arg1 + (iVar1 << 2)) << 0x18 | *(arg1 + iVar1 * 4 + 1) << 0x10 | *(arg1 + iVar1 * 4 + 2) << 8 |
           *(arg1 + iVar1 * 4 + 3);
}


/* fcn.0003fcd0 @ 0x3fcd0 */

uint32_t fcn.0003fcd0(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t arg1_00;
    unkbyte7 in_RDX;
    
    uVar1 = arg1;
    arg1_00 = *((uVar1 >> 0x18) + 0x6dcb0) << 0x18 | *((uVar1 >> 0x10 & 0xff) + 0x6dcb0) << 0x10 |
              *((uVar1 >> 8 & 0xff) + 0x6dcb0) << 8 | *((arg1 & 0xffU) + 0x6dcb0);
    uVar1 = fcn.0003fbc0(arg1_00,CONCAT71(in_RDX,2));
    uVar2 = fcn.0003fbc0(arg1_00,CONCAT71(in_RDX,10));
    uVar3 = fcn.0003fbc0(arg1_00,CONCAT71(in_RDX,0x12));
    uVar4 = fcn.0003fbc0(arg1_00,CONCAT71(in_RDX,0x18));
    return arg1_00 ^ uVar1 ^ uVar2 ^ uVar3 ^ uVar4;
}


/* fcn.0003fbc0 @ 0x3fbc0 */

uint32_t fcn.0003fbc0(uint32_t arg1,int64_t arg2)

{
    return arg1 << (arg2 & 0x1f) | arg1 >> (0x20 - arg2 & 0x1f);
}


/* fcn.0003fdd0 @ 0x3fdd0 */

uint32_t fcn.0003fdd0(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    uVar3 = arg1;
    uVar2 = fcn.0003fbc0(*((uVar3 >> 0x10 & 0xff) * 4 + 0x6ddb0),0x18);
    uVar1 = *((uVar3 >> 0x18) * 4 + 0x6ddb0);
    uVar3 = fcn.0003fbc0(*((uVar3 >> 8 & 0xff) * 4 + 0x6ddb0),0x6dd10);
    uVar4 = fcn.0003fbc0(*((arg1 & 0xffU) * 4 + 0x6ddb0),0x6dd08);
    return uVar1 ^ uVar2 ^ uVar3 ^ uVar4;
}


/* fcn.0003fc60 @ 0x3fc60 */

void fcn.0003fc60(int64_t arg1,int64_t arg2)

{
    uchar uStackX_8;
    
    *arg2 = arg1 >> 0x18;
    *(arg2 + 1) = arg1 >> 0x10;
    *(arg2 + 2) = arg1 >> 8;
    uStackX_8 = arg1;
    *(arg2 + 3) = uStackX_8;
    return;
}


/* fcn.000408a0 @ 0x408a0 */

void fcn.000408a0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    
    uVar1 = fcn.0003fbf0(arg1,0);
    uVar2 = fcn.0003fbf0(arg1,1);
    uVar3 = fcn.0003fbf0(arg1,2);
    uVar4 = fcn.0003fbf0(arg1,3);
    uVar5 = fcn.0003fcd0(uVar2 ^ uVar3 ^ uVar4 ^ *(arg3 + 0x7c));
    uVar1 = uVar1 ^ uVar5;
    uVar5 = fcn.0003fcd0(uVar1 ^ uVar3 ^ uVar4 ^ *(arg3 + 0x78));
    uVar2 = uVar2 ^ uVar5;
    uVar5 = fcn.0003fcd0(uVar1 ^ uVar2 ^ uVar4 ^ *(arg3 + 0x74));
    uVar3 = uVar3 ^ uVar5;
    uVar5 = fcn.0003fcd0(uVar1 ^ uVar2 ^ uVar3 ^ *(arg3 + 0x70));
    uVar4 = uVar4 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar2 ^ uVar3 ^ uVar4 ^ *(arg3 + 0x6c));
    uVar1 = uVar1 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar3 ^ uVar4 ^ *(arg3 + 0x68));
    uVar2 = uVar2 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar2 ^ uVar4 ^ *(arg3 + 100));
    uVar3 = uVar3 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar2 ^ uVar3 ^ *(arg3 + 0x60));
    uVar4 = uVar4 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar2 ^ uVar3 ^ uVar4 ^ *(arg3 + 0x5c));
    uVar1 = uVar1 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar3 ^ uVar4 ^ *(arg3 + 0x58));
    uVar2 = uVar2 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar2 ^ uVar4 ^ *(arg3 + 0x54));
    uVar3 = uVar3 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar2 ^ uVar3 ^ *(arg3 + 0x50));
    uVar4 = uVar4 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar2 ^ uVar3 ^ uVar4 ^ *(arg3 + 0x4c));
    uVar1 = uVar1 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar3 ^ uVar4 ^ *(arg3 + 0x48));
    uVar2 = uVar2 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar2 ^ uVar4 ^ *(arg3 + 0x44));
    uVar3 = uVar3 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar2 ^ uVar3 ^ *(arg3 + 0x40));
    uVar4 = uVar4 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar2 ^ uVar3 ^ uVar4 ^ *(arg3 + 0x3c));
    uVar1 = uVar1 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar3 ^ uVar4 ^ *(arg3 + 0x38));
    uVar2 = uVar2 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar2 ^ uVar4 ^ *(arg3 + 0x34));
    uVar3 = uVar3 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar2 ^ uVar3 ^ *(arg3 + 0x30));
    uVar4 = uVar4 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar2 ^ uVar3 ^ uVar4 ^ *(arg3 + 0x2c));
    uVar1 = uVar1 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar3 ^ uVar4 ^ *(arg3 + 0x28));
    uVar2 = uVar2 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar2 ^ uVar4 ^ *(arg3 + 0x24));
    uVar3 = uVar3 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar2 ^ uVar3 ^ *(arg3 + 0x20));
    uVar4 = uVar4 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar2 ^ uVar3 ^ uVar4 ^ *(arg3 + 0x1c));
    uVar1 = uVar1 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar3 ^ uVar4 ^ *(arg3 + 0x18));
    uVar2 = uVar2 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar2 ^ uVar4 ^ *(arg3 + 0x14));
    uVar3 = uVar3 ^ uVar5;
    uVar5 = fcn.0003fdd0(uVar1 ^ uVar2 ^ uVar3 ^ *(arg3 + 0x10));
    uVar4 = uVar4 ^ uVar5;
    uVar5 = fcn.0003fcd0(uVar2 ^ uVar3 ^ uVar4 ^ *(arg3 + 0xc));
    uVar1 = uVar1 ^ uVar5;
    uVar5 = fcn.0003fcd0(uVar1 ^ uVar3 ^ uVar4 ^ *(arg3 + 8));
    uVar2 = uVar2 ^ uVar5;
    uVar5 = fcn.0003fcd0(uVar1 ^ uVar2 ^ uVar4 ^ *(arg3 + 4));
    uVar6 = fcn.0003fcd0(uVar1 ^ uVar2 ^ uVar3 ^ uVar5 ^ *arg3);
    fcn.0003fc60(uVar4 ^ uVar6,arg2);
    fcn.0003fc60(uVar3 ^ uVar5,arg2 + 4);
    fcn.0003fc60(uVar2,arg2 + 8);
    fcn.0003fc60(uVar1,arg2 + 0xc);
    return;
}


/* fcn.00041020 @ 0x41020 */

void fcn.00041020(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000028;
    uint32_t *in_stack_00000030;
    code *in_stack_00000038;
    uint32_t uStack_18;
    uint64_t uStack_10;
    
    uStack_10 = 0;
    uStack_18 = *in_stack_00000030;
    for (; uStack_10 < arg3; uStack_10 = uStack_10 + 1) {
        if (uStack_18 == 0) {
            (*in_stack_00000038)(in_stack_00000028,in_stack_00000028,arg4);
        }
        *(arg2 + uStack_10) = *(arg1 + uStack_10) ^ *(in_stack_00000028 + uStack_18);
        uStack_18 = (uStack_18 + 1) % 0x10;
    }
    *in_stack_00000030 = uStack_18;
    return;
}


/* fcn.00018fe0 @ 0x18fe0 */

int64_t fcn.00018fe0(uint32_t arg1)

{
    uint in_register_0000000c;
    
    return CONCAT44(in_register_0000000c,arg1) + 0x28;
}


/* fcn.0002ae30 @ 0x2ae30 */

void fcn.0002ae30(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int in_stack_00000030;
    
    if (in_stack_00000030 == 0) {
        fcn.00018660(arg1,arg2,arg3,arg4);
    }
    else {
        fcn.00018500(arg1,arg2,arg3,arg4);
    }
    return;
}


/* fcn.00019000 @ 0x19000 */

uint fcn.00019000(int64_t arg1)

{
    return *(arg1 + 0x58);
}


/* fcn.0002aec0 @ 0x2aec0 */

void fcn.0002aec0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    fcn.000415c0(arg1,arg2,arg3,arg4);
    return;
}


/* fcn.00019010 @ 0x19010 */

void fcn.00019010(int64_t arg1,int64_t arg2)

{
    *(arg1 + 0x58) = arg2;
    return;
}


/* fcn.0002af30 @ 0x2af30 */

void fcn.0002af30(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    if (arg4 == 0) {
        fcn.000408a0(arg1,arg2,arg3);
    }
    else {
        fcn.00040120(arg1,arg2,arg3);
    }
    return;
}


/* fcn.0002af80 @ 0x2af80 */

void fcn.0002af80(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    fcn.00041020(arg1,arg2,arg3,arg4);
    return;
}


/* fcn.00018ff0 @ 0x18ff0 */

int64_t fcn.00018ff0(int64_t arg1)

{
    return arg1 + 0x38;
}


/* fcn.00041140 @ 0x41140 */

void fcn.00041140(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    uint32_t *in_stack_00000038;
    code *in_stack_00000040;
    uint32_t uStack_18;
    uint64_t uStack_10;
    
    uStack_10 = 0;
    uStack_18 = *in_stack_00000038;
    for (; uStack_10 < arg3; uStack_10 = uStack_10 + 1) {
        if (uStack_18 == 0) {
            (*in_stack_00000040)(in_stack_00000028,in_stack_00000030,arg4);
            fcn.000410e0(in_stack_00000028);
        }
        *(arg2 + uStack_10) = *(arg1 + uStack_10) ^ *(in_stack_00000030 + uStack_18);
        uStack_18 = (uStack_18 + 1) % 0x10;
    }
    *in_stack_00000038 = uStack_18;
    return;
}


/* fcn.000463d0 @ 0x463d0 */

ulong fcn.000463d0(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    ulong uVar1;
    uint in_register_0000000c;
    int iVar2;
    uint in_R8;
    int64_t iVar3;
    uchar auStack_70 [16];
    uchar auStack_60 [16];
    uchar auStack_50 [16];
    uchar auStack_40 [16];
    int64_t iStack_30;
    int64_t iStack_28;
    int64_t iStack_20;
    uchar auStack_18 [8];
    uchar auStack_10 [16];
    
    iVar3 = CONCAT44(in_R8,arg3);
    iVar2 = arg2;
    if ((CONCAT44(in_register_0000000c,arg1) == 0) || (iVar3 == 0)) {
        uVar1 = 0xffffffff;
    }
    else {
        fcn.0001320c(auStack_50,arg1,0x10);
        if (iVar2 == 0x80) {
            *(iVar3 + 0x110) = 0xc;
            iStack_30 = 0x6e350;
            iStack_28 = 0x6e340;
            iStack_20 = 0x6e330;
            fcn.00013234(auStack_18,0x10);
        }
        else if (iVar2 == 0xc0) {
            *(iVar3 + 0x110) = 0xe;
            iStack_30 = 0x6e340;
            iStack_28 = 0x6e330;
            iStack_20 = 0x6e350;
            fcn.0001320c(auStack_18,arg1 + 0x10,8);
            fcn.00013234(auStack_10,8);
        }
        else {
            if (iVar2 != 0x100) {
                return 0xfffffffe;
            }
            *(iVar3 + 0x110) = 0x10;
            iStack_30 = 0x6e330;
            iStack_28 = 0x6e350;
            iStack_20 = 0x6e340;
            fcn.0001320c(auStack_18,arg1 + 0x10,0x10);
        }
        fcn.000461f0(auStack_70,auStack_50,iStack_30);
        fcn.00045320(auStack_60,auStack_70,auStack_18);
        fcn.00046230(auStack_70,auStack_60,iStack_28);
        fcn.00045320(auStack_40,auStack_70,auStack_50);
        fcn.000461f0(auStack_18,auStack_40,iStack_20);
        fcn.00045320(auStack_70,auStack_18,auStack_60);
        fcn.00045490(arg3,auStack_50,auStack_60);
        fcn.00045490(arg3 + 0x10,auStack_60,auStack_40);
        fcn.00045490(arg3 + 0x20,auStack_40,auStack_70);
        fcn.00045490(arg3 + 0x30,auStack_70,auStack_50);
        fcn.000454d0(arg3 + 0x40,auStack_50,auStack_60);
        fcn.000454d0(arg3 + 0x50,auStack_60,auStack_40);
        fcn.000454d0(arg3 + 0x60,auStack_40,auStack_70);
        fcn.000454d0(arg3 + 0x70,auStack_70,auStack_50);
        fcn.00045510(arg3 + 0x80,auStack_50,auStack_60);
        fcn.00045510(arg3 + 0x90,auStack_60,auStack_40);
        fcn.00045510(arg3 + 0xa0,auStack_40,auStack_70);
        fcn.00045510(arg3 + 0xb0,auStack_70,auStack_50);
        fcn.00045550(arg3 + 0xc0,auStack_50,auStack_60);
        if (0xc < *(iVar3 + 0x110)) {
            fcn.00045550(arg3 + 0xd0,auStack_60,auStack_40);
            fcn.00045550(arg3 + 0xe0,auStack_40,auStack_70);
            if (0xe < *(iVar3 + 0x110)) {
                fcn.00045550(arg3 + 0xf0,auStack_70,auStack_50);
                fcn.00045590(arg3 + 0x100,auStack_50,auStack_60);
            }
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.000468e0 @ 0x468e0 */

int fcn.000468e0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t arg1_00;
    int iVar1;
    uint32_t uStack_138;
    uchar auStack_128 [272];
    uint32_t uStack_18;
    
    iVar1 = fcn.000463d0(arg1,arg2 & 0xffffffff,auStack_128);
    if (iVar1 == 0) {
        *(arg3 + 0x110) = uStack_18;
        arg1_00 = arg3;
        fcn.0001320c(arg1_00,auStack_128 + uStack_18 * 0x10,0x10);
        for (uStack_138 = 1; uStack_138 < uStack_18; uStack_138 = uStack_138 + 1) {
            fcn.00045830(arg1_00 + uStack_138 * 0x10,auStack_128 + (uStack_18 - uStack_138) * 0x10);
        }
        fcn.0001320c(arg1_00 + uStack_18 * 0x10,auStack_128,0x10);
    }
    return iVar1;
}


/* fcn.00041990 @ 0x41990 */

void fcn.00041990(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar uStack_38;
    uint8_t auStack_37 [7];
    uint64_t uStack_30;
    uint uStack_28;
    uint uStack_24;
    uint32_t uStack_20;
    uint uStack_1c;
    uint32_t uStack_18;
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
    
    for (uStack_30 = 0; uStack_30 < arg3; uStack_30 = uStack_30 + 1) {
        uStack_20 = *(arg1 + uStack_30 / 8);
        uStack_24 = 1;
        if ((uStack_20 & 1 << (7U - uStack_30 % 8 & 0x1f)) == 0) {
            uStack_28 = 0;
        }
        else {
            uStack_28 = 0x80;
        }
        uStack_38 = uStack_28;
        fcn.00041760(&uStack_38,auStack_37,1,arg4);
        uStack_18 = *(arg2 + uStack_30 / 8);
        uStack_1c = 1;
        uStack_10 = uStack_18 & ~(1 << (7U - uStack_30 % 8 & 0x1f));
        uStack_14 = auStack_37[0] & 0x80;
        uStack_c = uStack_10 | uStack_14 >> uStack_30 % 8;
        *(arg2 + uStack_30 / 8) = uStack_c;
    }
    return;
}


/* fcn.00041b60 @ 0x41b60 */

void fcn.00041b60(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uStack_18;
    
    for (uStack_18 = 0; uStack_18 < arg3; uStack_18 = uStack_18 + 1) {
        fcn.00041760(arg1 + uStack_18,arg2 + uStack_18,8,arg4);
    }
    return;
}


/* fcn.00046390 @ 0x46390 */

void fcn.00046390(int64_t arg1,int64_t arg2,int64_t arg3)

{
    fcn.00046270(arg2,arg1,*(arg3 + 0x110),arg3);
    return;
}


/* fcn.00046270 @ 0x46270 */

void fcn.00046270(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint32_t uStack_28;
    uchar auStack_20 [32];
    
    iVar1 = arg3;
    fcn.0001320c(auStack_20,arg2,0x10);
    for (uStack_28 = 0; uStack_28 < iVar1 - 2U; uStack_28 = uStack_28 + 2) {
        fcn.000461f0(auStack_20,auStack_20,arg4 + uStack_28 * 0x10);
        fcn.00046230(auStack_20,auStack_20,arg4 + (uStack_28 + 1) * 0x10);
    }
    fcn.000461f0(auStack_20,auStack_20,arg4 + (iVar1 - 2) * 0x10);
    fcn.00045700(arg1,auStack_20,arg4 + (iVar1 - 1) * 0x10);
    fcn.00045320(arg1,arg1,arg4 + (arg3 & 0xffffffffU) * 0x10);
    return;
}


/* fcn.0002b690 @ 0x2b690 */

void fcn.0002b690(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int in_stack_00000030;
    
    if (in_stack_00000030 == 0) {
        fcn.00018660(arg1,arg2,arg3,arg4);
    }
    else {
        fcn.00018500(arg1,arg2,arg3,arg4);
    }
    return;
}


/* fcn.0002b720 @ 0x2b720 */

void fcn.0002b720(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    fcn.000415c0(arg1,arg2,arg3,arg4);
    return;
}


/* fcn.0002b870 @ 0x2b870 */

void fcn.0002b870(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    fcn.00046390(arg1,arg2,arg3);
    return;
}


/* fcn.0002b8b0 @ 0x2b8b0 */

void fcn.0002b8b0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    fcn.00041020(arg1,arg2,arg3,arg4);
    return;
}


/* fcn.0002b790 @ 0x2b790 */

void fcn.0002b790(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    fcn.00041990(arg1,arg2,arg3,arg4);
    return;
}


/* fcn.0002b800 @ 0x2b800 */

void fcn.0002b800(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    fcn.00041b60(arg1,arg2,arg3,arg4);
    return;
}


/* fcn.00042290 @ 0x42290 */

void fcn.00042290(int64_t arg1,int64_t arg2,int64_t arg3)

{
    fcn.00013234(arg1,0x188);
    *(arg1 + 0x178) = arg3;
    *(arg1 + 0x180) = arg2;
    (*arg3)(arg1 + 0x50,arg1 + 0x50,arg2);
    *(arg1 + 0x50) =
         CONCAT44(*(arg1 + 0x50) << 0x18 | *(arg1 + 0x51) << 0x10 | *(arg1 + 0x52) << 8 | *(arg1 + 0x53),
                  *(arg1 + 0x54) << 0x18 | *(arg1 + 0x55) << 0x10 | *(arg1 + 0x56) << 8 | *(arg1 + 0x57));
    *(arg1 + 0x58) =
         CONCAT44(*(arg1 + 0x58) << 0x18 | *(arg1 + 0x59) << 0x10 | *(arg1 + 0x5a) << 8 | *(arg1 + 0x5b),
                  *(arg1 + 0x5c) << 0x18 | *(arg1 + 0x5d) << 0x10 | *(arg1 + 0x5e) << 8 | *(arg1 + 0x5f));
    fcn.00041c00(arg1 + 0x60,arg1 + 0x50);
    return;
}


/* fcn.00041c00 @ 0x41c00 */

//WARNING: Removing unreachable block (ram,0x00041cfe)

void fcn.00041c00(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    uchar *puVar3;
    uint64_t *puVar4;
    uchar *puVar5;
    int iStack_48;
    int iStack_44;
    uint64_t uStack_28;
    uint64_t uStack_20;
    
    *arg1 = 0;
    *(arg1 + 8) = 0;
    uStack_28 = *arg2;
    uStack_20 = *(arg2 + 8);
    puVar4 = &uStack_28;
    puVar5 = arg1 + 0x80;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
    }
    for (iStack_48 = 4; iStack_48 != 0; iStack_48 = iStack_48 >> 1) {
        uVar1 = uStack_20 & 1;
        uStack_20 = uStack_28 << 0x3f | uStack_20 >> 1;
        uStack_28 = uStack_28 >> 1 ^ -uVar1 & 0xe100000000000000;
        puVar4 = &uStack_28;
        puVar5 = arg1 + iStack_48 * 0x10;
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
        }
    }
    for (iStack_48 = 2; iStack_48 < 0x10; iStack_48 = iStack_48 << 1) {
        puVar3 = arg1 + iStack_48 * 0x10;
        puVar5 = puVar3;
        puVar4 = &uStack_28;
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar4 = puVar4 + 1;
        }
        for (iStack_44 = 1; iStack_44 < iStack_48; iStack_44 = iStack_44 + 1) {
            *(puVar3 + iStack_44 * 0x10) = uStack_28 ^ *(arg1 + iStack_44 * 0x10);
            *(puVar3 + iStack_44 * 0x10 + 8) = uStack_20 ^ *(arg1 + 8 + iStack_44 * 0x10);
        }
    }
    return;
}


/* fcn.00042500 @ 0x42500 */

//WARNING: Removing unreachable block (ram,0x000429a1)
//WARNING: Removing unreachable block (ram,0x000428ef)
//WARNING: Removing unreachable block (ram,0x00042ace)

void fcn.00042500(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    int64_t iVar2;
    uint32_t arg1_00;
    uint in_R8;
    uint64_t uVar3;
    int64_t iStackX_10;
    uint64_t uStackX_18;
    uint32_t uStack_28;
    uint64_t uStack_20;
    uint8_t uStack_18;
    
    uVar3 = CONCAT44(in_R8,arg3);
    *(arg1 + 0x30) = 0;
    *(arg1 + 0x38) = 0;
    *(arg1 + 0x174) = 0;
    *(arg1 + 0x170) = 0;
    arg1_00 = arg1;
    if (uVar3 == 0xc) {
        fcn.0001320c(arg1_00,arg2,0xc);
        *(arg1 + 0xc) = 0;
        *(arg1 + 0xd) = 0;
        *(arg1 + 0xe) = 0;
        *(arg1 + 0xf) = 1;
        uStack_28 = 1;
    }
    else {
        *(arg1 + 0x40) = 0;
        *(arg1 + 0x48) = 0;
        iStackX_10 = arg2;
        for (uStackX_18 = uVar3; 0xf < uStackX_18; uStackX_18 = uStackX_18 - 0x10) {
            for (uStack_20 = 0; uStack_20 < 0x10; uStack_20 = uStack_20 + 1) {
                *(arg1 + uStack_20 + 0x40) = *(arg1 + uStack_20 + 0x40) ^ *(iStackX_10 + uStack_20);
            }
            fcn.00041e50(arg1_00 + 0x40,arg1_00 + 0x60);
            iStackX_10 = iStackX_10 + 0x10;
        }
        if (uStackX_18 != 0) {
            for (uStack_20 = 0; uStack_20 < uStackX_18; uStack_20 = uStack_20 + 1) {
                *(arg1 + uStack_20 + 0x40) = *(arg1 + uStack_20 + 0x40) ^ *(iStackX_10 + uStack_20);
            }
            fcn.00041e50(arg1_00 + 0x40,arg1_00 + 0x60);
        }
        iVar2 = uVar3 << 3;
        *(arg1 + 0x48) = *(arg1 + 0x48) ^ iVar2 >> 0x38;
        *(arg1 + 0x49) = *(arg1 + 0x49) ^ iVar2 >> 0x30;
        *(arg1 + 0x4a) = *(arg1 + 0x4a) ^ iVar2 >> 0x28;
        *(arg1 + 0x4b) = *(arg1 + 0x4b) ^ iVar2 >> 0x20;
        *(arg1 + 0x4c) = *(arg1 + 0x4c) ^ iVar2 >> 0x18;
        *(arg1 + 0x4d) = *(arg1 + 0x4d) ^ iVar2 >> 0x10;
        *(arg1 + 0x4e) = *(arg1 + 0x4e) ^ iVar2 >> 8;
        uStack_18 = iVar2;
        *(arg1 + 0x4f) = *(arg1 + 0x4f) ^ uStack_18;
        fcn.00041e50(arg1_00 + 0x40,arg1_00 + 0x60);
        uStack_28 = *(arg1 + 0x4c) << 0x18 | *(arg1 + 0x4d) << 0x10 | *(arg1 + 0x4e) << 8 | *(arg1 + 0x4f);
        *arg1 = *(arg1 + 0x40);
        *(arg1 + 8) = *(arg1 + 0x48);
    }
    *(arg1 + 0x40) = 0;
    *(arg1 + 0x48) = 0;
    (**(arg1 + 0x178))(arg1,arg1 + 0x20,*(arg1 + 0x180));
    iVar1 = uStack_28 + 1;
    *(arg1 + 0xc) = iVar1 >> 0x18;
    *(arg1 + 0xd) = iVar1 >> 0x10;
    *(arg1 + 0xe) = iVar1 >> 8;
    uStack_28._0_1_ = iVar1;
    *(arg1 + 0xf) = uStack_28;
    return;
}


/* fcn.00026030 @ 0x26030 */

ulong fcn.00026030(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    
    iVar1 = fcn.00025fa0();
    if ((iVar1 == 0) || (*(iVar1 + 8) == 0)) {
        fcn.0001c9f0(0x24,100,0x65,0);
        uVar2 = 0xffffffff;
    }
    else {
        uVar2 = (**(iVar1 + 8))(arg1,arg2 & 0xffffffff);
    }
    return uVar2;
}


/* fcn.0002c2e0 @ 0x2c2e0 */

void fcn.0002c2e0(int64_t arg1)

{
    char cVar1;
    int iStack_14;
    
    iStack_14 = 8;
    do {
        iStack_14 = iStack_14 + -1;
        cVar1 = *(arg1 + iStack_14) + '\x01';
        *(arg1 + iStack_14) = cVar1;
        if (cVar1 != '\0') {
            return;
        }
    } while (iStack_14 != 0);
    return;
}


/* fcn.00042af0 @ 0x42af0 */

ulong fcn.00042af0(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    ulong uVar2;
    uint64_t uVar3;
    uint in_R8;
    uint8_t *puStackX_10;
    uint64_t uStackX_18;
    uint32_t uStack_28;
    uint64_t uStack_20;
    
    uStackX_18 = CONCAT44(in_R8,arg3);
    if (*(arg1 + 0x38) == 0) {
        uVar3 = *(arg1 + 0x30) + uStackX_18;
        if ((uVar3 < 0x2000000000000001) && (uStackX_18 <= uVar3)) {
            *(arg1 + 0x30) = uVar3;
            uStack_28 = *(arg1 + 0x174);
            iVar1 = arg1;
            puStackX_10 = arg2;
            if (uStack_28 != 0) {
                for (; (uStack_28 != 0 && (uStackX_18 != 0)); uStackX_18 = uStackX_18 - 1) {
                    *(arg1 + 0x40 + uStack_28) = *(arg1 + 0x40 + uStack_28) ^ *puStackX_10;
                    puStackX_10 = puStackX_10 + 1;
                    uStack_28 = (uStack_28 + 1) % 0x10;
                }
                if (uStack_28 != 0) {
                    *(arg1 + 0x174) = uStack_28;
                    return 0;
                }
                fcn.00041e50(iVar1 + 0x40,iVar1 + 0x60);
            }
            for (; 0xf < uStackX_18; uStackX_18 = uStackX_18 - 0x10) {
                for (uStack_20 = 0; uStack_20 < 0x10; uStack_20 = uStack_20 + 1) {
                    *(arg1 + uStack_20 + 0x40) = *(arg1 + uStack_20 + 0x40) ^ puStackX_10[uStack_20];
                }
                fcn.00041e50(iVar1 + 0x40,iVar1 + 0x60);
                puStackX_10 = puStackX_10 + 0x10;
            }
            if (uStackX_18 != 0) {
                uStack_28 = uStackX_18;
                for (uStack_20 = 0; uStack_20 < uStackX_18; uStack_20 = uStack_20 + 1) {
                    *(arg1 + uStack_20 + 0x40) = *(arg1 + uStack_20 + 0x40) ^ puStackX_10[uStack_20];
                }
            }
            *(arg1 + 0x174) = uStack_28;
            uVar2 = 0;
        }
        else {
            uVar2 = 0xffffffff;
        }
    }
    else {
        uVar2 = 0xfffffffe;
    }
    return uVar2;
}


/* fcn.00042d80 @ 0x42d80 */

//WARNING: Removing unreachable block (ram,0x00042eeb)
//WARNING: Removing unreachable block (ram,0x00042fda)

ulong fcn.00042d80(uint32_t arg1,uint32_t arg2,uint32_t arg3,uint32_t arg4)

{
    code *pcVar1;
    uint64_t uVar2;
    uint8_t uVar3;
    ulong uVar4;
    uint in_register_0000000c;
    int64_t iVar5;
    uint64_t uVar6;
    uint in_register_00000014;
    uint in_R8;
    uint in_R9;
    uint32_t uStack_48;
    uint32_t uStack_44;
    uint32_t uStack_40;
    uint64_t uStack_28;
    
    iVar5 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = CONCAT44(in_R9,arg4);
    pcVar1 = *(iVar5 + 0x178);
    uVar4 = *(iVar5 + 0x180);
    uVar6 = *(iVar5 + 0x38) + uVar2;
    if ((uVar6 < 0xfffffffe1) && (uVar2 <= uVar6)) {
        *(iVar5 + 0x38) = uVar6;
        uStack_40 = *(iVar5 + 0x170);
        if (*(iVar5 + 0x174) != 0) {
            fcn.00041e50(arg1 + 0x40,arg1 + 0x60);
            *(iVar5 + 0x174) = 0;
        }
        uStack_48 = *(iVar5 + 0xc) << 0x18 | *(iVar5 + 0xd) << 0x10 | *(iVar5 + 0xe) << 8 | *(iVar5 + 0xf);
        uStack_44 = uStack_40 % 0x10;
        for (uStack_28 = 0; uStack_28 < uVar2; uStack_28 = uStack_28 + 1) {
            if (uStack_44 == 0) {
                (*pcVar1)(iVar5,iVar5 + 0x10,uVar4);
                uStack_48 = uStack_48 + 1;
                *(iVar5 + 0xc) = uStack_48 >> 0x18;
                *(iVar5 + 0xd) = uStack_48 >> 0x10;
                *(iVar5 + 0xe) = uStack_48 >> 8;
                *(iVar5 + 0xf) = uStack_48;
            }
            uVar3 = *(CONCAT44(in_register_00000014,arg2) + uStack_28) ^ *(iVar5 + 0x10 + uStack_44);
            *(CONCAT44(in_R8,arg3) + uStack_28) = uVar3;
            *(iVar5 + 0x40 + uStack_44) = *(iVar5 + 0x40 + uStack_44) ^ uVar3;
            uStack_44 = (uStack_44 + 1) % 0x10;
            if (uStack_44 == 0) {
                fcn.00041e50(arg1 + 0x40,arg1 + 0x60);
            }
            uStack_40 = uStack_44;
        }
        *(iVar5 + 0x170) = uStack_40;
        uVar4 = 0;
    }
    else {
        uVar4 = 0xffffffff;
    }
    return uVar4;
}


/* fcn.000437f0 @ 0x437f0 */

void fcn.000437f0(uint32_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint in_R8;
    uint64_t uStack_18;
    
    uStack_18 = CONCAT44(in_R8,arg3);
    fcn.00043460(arg1,0,0);
    if (0x10 < uStack_18) {
        uStack_18 = 0x10;
    }
    fcn.0001320c(arg2,arg1 + 0x40,uStack_18);
    return;
}


/* fcn.000430b0 @ 0x430b0 */

//WARNING: Removing unreachable block (ram,0x0004321b)
//WARNING: Removing unreachable block (ram,0x0004330a)

ulong fcn.000430b0(uint32_t arg1,uint32_t arg2,uint32_t arg3,uint32_t arg4)

{
    uint8_t uVar1;
    code *pcVar2;
    uint64_t uVar3;
    ulong uVar4;
    uint in_register_0000000c;
    int64_t iVar5;
    uint64_t uVar6;
    uint in_register_00000014;
    uint in_R8;
    uint in_R9;
    uint32_t uStack_44;
    uint32_t uStack_40;
    uint32_t uStack_3c;
    uint64_t uStack_28;
    
    iVar5 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = CONCAT44(in_R9,arg4);
    pcVar2 = *(iVar5 + 0x178);
    uVar4 = *(iVar5 + 0x180);
    uVar6 = *(iVar5 + 0x38) + uVar3;
    if ((uVar6 < 0xfffffffe1) && (uVar3 <= uVar6)) {
        *(iVar5 + 0x38) = uVar6;
        uStack_3c = *(iVar5 + 0x170);
        if (*(iVar5 + 0x174) != 0) {
            fcn.00041e50(arg1 + 0x40,arg1 + 0x60);
            *(iVar5 + 0x174) = 0;
        }
        uStack_44 = *(iVar5 + 0xc) << 0x18 | *(iVar5 + 0xd) << 0x10 | *(iVar5 + 0xe) << 8 | *(iVar5 + 0xf);
        uStack_40 = uStack_3c % 0x10;
        for (uStack_28 = 0; uStack_28 < uVar3; uStack_28 = uStack_28 + 1) {
            if (uStack_40 == 0) {
                (*pcVar2)(iVar5,iVar5 + 0x10,uVar4);
                uStack_44 = uStack_44 + 1;
                *(iVar5 + 0xc) = uStack_44 >> 0x18;
                *(iVar5 + 0xd) = uStack_44 >> 0x10;
                *(iVar5 + 0xe) = uStack_44 >> 8;
                *(iVar5 + 0xf) = uStack_44;
            }
            uVar1 = *(CONCAT44(in_register_00000014,arg2) + uStack_28);
            *(CONCAT44(in_R8,arg3) + uStack_28) = uVar1 ^ *(iVar5 + 0x10 + uStack_40);
            *(iVar5 + 0x40 + uStack_40) = *(iVar5 + 0x40 + uStack_40) ^ uVar1;
            uStack_40 = (uStack_40 + 1) % 0x10;
            if (uStack_40 == 0) {
                fcn.00041e50(arg1 + 0x40,arg1 + 0x60);
            }
            uStack_3c = uStack_40;
        }
        *(iVar5 + 0x170) = uStack_3c;
        uVar4 = 0;
    }
    else {
        uVar4 = 0xffffffff;
    }
    return uVar4;
}


/* fcn.00019160 @ 0x19160 */

uint8_t fcn.00019160(uint32_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint in_register_0000000c;
    uint in_register_00000014;
    uint in_R8;
    uint8_t uStack_28;
    uint64_t uStack_20;
    
    uStack_28 = 0;
    for (uStack_20 = 0; uStack_20 < CONCAT44(in_R8,arg3); uStack_20 = uStack_20 + 1) {
        uStack_28 = uStack_28 |
                    *(CONCAT44(in_register_0000000c,arg1) + uStack_20) ^
                    *(CONCAT44(in_register_00000014,arg2) + uStack_20);
    }
    return uStack_28;
}


/* fcn.0002cd80 @ 0x2cd80 */

uint32_t fcn.0002cd80(int64_t arg1,uint32_t arg2,int64_t arg3,uint32_t arg4)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t arg2_00;
    uint32_t uVar5;
    uint in_register_00000014;
    uint32_t arg4_00;
    uint in_R9;
    uint32_t uStack_28;
    uint32_t uStack_24;
    
    iVar4 = fcn.00018f50(arg1);
    uStack_28 = 0xffffffff;
    if ((CONCAT44(in_register_00000014,arg2) == arg3) && (0x17 < CONCAT44(in_R9,arg4))) {
        iVar1 = fcn.00018f40(arg1);
        if (iVar1 == 0) {
            uStack_24 = 0x18;
        }
        else {
            uStack_24 = 0x13;
        }
        iVar1 = fcn.0001f970(arg1,uStack_24,8,arg2);
        if (0 < iVar1) {
            uVar5 = *(iVar4 + 700);
            arg2_00 = fcn.00018ff0(arg1);
            iVar1 = fcn.00042af0(iVar4 + 0x120,arg2_00,uVar5);
            if (iVar1 == 0) {
                uVar5 = arg3 + 8;
                arg2 = arg2 + 8;
                arg4_00 = arg4 - 0x18;
                iVar2 = fcn.00018f40(arg1);
                iVar1 = iVar4;
                if (iVar2 == 0) {
                    iVar2 = fcn.000430b0(iVar1 + 0x120,uVar5,arg2,arg4_00);
                    if (iVar2 == 0) {
                        uVar3 = fcn.00018ff0(arg1);
                        fcn.000437f0(iVar1 + 0x120,uVar3,0x10);
                        uVar3 = fcn.00018ff0(arg1);
                        iVar1 = fcn.00019160(uVar3,uVar5 + arg4_00,0x10);
                        if (iVar1 == 0) {
                            uStack_28 = arg4_00;
                        }
                        else {
                            fcn.00019440(arg2,arg4_00);
                        }
                    }
                }
                else {
                    iVar2 = fcn.00042d80(iVar1 + 0x120,uVar5,arg2,arg4_00);
                    if (iVar2 == 0) {
                        fcn.000437f0(iVar1 + 0x120,arg2 + arg4_00,0x10);
                        uStack_28 = arg4;
                    }
                }
            }
        }
        *(iVar4 + 0x11c) = 0;
        *(iVar4 + 700) = 0xffffffff;
    }
    else {
        uStack_28 = 0xffffffff;
    }
    return uStack_28;
}


/* fcn.00043460 @ 0x43460 */

ulong fcn.00043460(uint32_t arg1,uint32_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    uint in_register_00000014;
    uint in_R8;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = *(iVar4 + 0x30);
    iVar2 = *(iVar4 + 0x38);
    if ((*(iVar4 + 0x170) != 0) || (*(iVar4 + 0x174) != 0)) {
        fcn.00041e50(arg1 + 0x40,arg1 + 0x60);
    }
    *(iVar4 + 0x30) = iVar1 << 3;
    *(iVar4 + 0x38) = iVar2 << 3;
    *(iVar4 + 0x40) =
         *(iVar4 + 0x40) ^
         CONCAT44(*(iVar4 + 0x30) << 0x18 | *(iVar4 + 0x31) << 0x10 | *(iVar4 + 0x32) << 8 | *(iVar4 + 0x33),
                  *(iVar4 + 0x34) << 0x18 | *(iVar4 + 0x35) << 0x10 | *(iVar4 + 0x36) << 8 | *(iVar4 + 0x37));
    *(iVar4 + 0x48) =
         *(iVar4 + 0x48) ^
         CONCAT44(*(iVar4 + 0x38) << 0x18 | *(iVar4 + 0x39) << 0x10 | *(iVar4 + 0x3a) << 8 | *(iVar4 + 0x3b),
                  *(iVar4 + 0x3c) << 0x18 | *(iVar4 + 0x3d) << 0x10 | *(iVar4 + 0x3e) << 8 | *(iVar4 + 0x3f));
    fcn.00041e50(arg1 + 0x40,arg1 + 0x60);
    *(iVar4 + 0x40) = *(iVar4 + 0x40) ^ *(iVar4 + 0x20);
    *(iVar4 + 0x48) = *(iVar4 + 0x48) ^ *(iVar4 + 0x28);
    if ((CONCAT44(in_register_00000014,arg2) == 0) || (0x10 < CONCAT44(in_R8,arg3))) {
        uVar3 = 0xffffffff;
    }
    else {
        uVar3 = fcn.00019160(arg1 + 0x40,arg2,arg3);
    }
    return uVar3;
}


/* fcn.00043850 @ 0x43850 */

void fcn.00043850(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong in_stack_00000028;
    
    fcn.00013234(arg1,0x10);
    *arg1 = arg3 - 1U & 7 | ((arg2 - 2U) / 2 & 7) << 3;
    *(arg1 + 0x20) = 0;
    *(arg1 + 0x28) = in_stack_00000028;
    *(arg1 + 0x30) = arg4;
    return;
}


/* fcn.000452a0 @ 0x452a0 */

uint32_t fcn.000452a0(uint32_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint32_t arg3_00;
    uint in_register_0000000c;
    uint in_R8;
    
    arg3_00 = (*CONCAT44(in_register_0000000c,arg1) >> 3 & 7U) * 2 + 2;
    if (CONCAT44(in_R8,arg3) == arg3_00) {
        fcn.0001320c(arg2,arg1 + 0x10,arg3_00);
    }
    else {
        arg3_00 = 0;
    }
    return arg3_00;
}


/* fcn.000438f0 @ 0x438f0 */

ulong fcn.000438f0(int64_t arg1,int64_t arg2,uint32_t arg3,uint32_t arg4)

{
    uint32_t uVar1;
    ulong uVar2;
    uint in_R8;
    uint in_R9;
    uchar uStackX_20;
    
    uVar1 = *arg1 & 7;
    if (CONCAT44(in_R8,arg3) < 0xe - uVar1) {
        uVar2 = 0xffffffff;
    }
    else {
        if (uVar1 < 3) {
            *(arg1 + 8) = 0;
        }
        else {
            *(arg1 + 8) = in_R9 >> 0x18;
            *(arg1 + 9) = in_R9 >> 0x10;
            *(arg1 + 10) = in_R9 >> 8;
            *(arg1 + 0xb) = in_R9;
        }
        *(arg1 + 0xc) = arg4 >> 0x18;
        *(arg1 + 0xd) = arg4 >> 0x10;
        *(arg1 + 0xe) = arg4 >> 8;
        uStackX_20 = arg4;
        *(arg1 + 0xf) = uStackX_20;
        *arg1 = *arg1 & 0xbf;
        fcn.0001320c(arg1 + 1,arg2,0xe - uVar1);
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00043a90 @ 0x43a90 */

void fcn.00043a90(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    code *pcVar1;
    uint8_t uVar2;
    uint8_t uVar4;
    uint8_t uVar3;
    uint in_R8;
    uint64_t uVar5;
    uint8_t *puStackX_10;
    uint64_t uStackX_18;
    uint32_t uStack_18;
    
    uVar5 = CONCAT44(in_R8,arg3);
    pcVar1 = *(arg1 + 0x28);
    if (uVar5 != 0) {
        *arg1 = *arg1 | 0x40;
        (*pcVar1)(arg1,arg1 + 0x10,*(arg1 + 0x30));
        *(arg1 + 0x20) = *(arg1 + 0x20) + 1;
        uStackX_18._0_1_ = arg3;
        uVar2 = arg3 >> 8;
        puStackX_10 = arg2;
        uStackX_18 = uVar5;
        if (uVar5 < 0xff00) {
            *(arg1 + 0x10) = *(arg1 + 0x10) ^ uVar2;
            *(arg1 + 0x11) = *(arg1 + 0x11) ^ uStackX_18;
            uStack_18 = 2;
        }
        else {
            uVar3 = arg3 >> 0x10;
            uVar4 = arg3 >> 0x18;
            if (uVar5 < 0x100000000) {
                *(arg1 + 0x10) = *(arg1 + 0x10) ^ 0xff;
                *(arg1 + 0x11) = *(arg1 + 0x11) ^ 0xfe;
                *(arg1 + 0x12) = *(arg1 + 0x12) ^ uVar4;
                *(arg1 + 0x13) = *(arg1 + 0x13) ^ uVar3;
                *(arg1 + 0x14) = *(arg1 + 0x14) ^ uVar2;
                *(arg1 + 0x15) = *(arg1 + 0x15) ^ uStackX_18;
                uStack_18 = 6;
            }
            else {
                *(arg1 + 0x10) = *(arg1 + 0x10) ^ 0xff;
                *(arg1 + 0x11) = *(arg1 + 0x11) ^ 0xff;
                *(arg1 + 0x12) = *(arg1 + 0x12) ^ in_R8 >> 0x18;
                *(arg1 + 0x13) = *(arg1 + 0x13) ^ in_R8 >> 0x10;
                *(arg1 + 0x14) = *(arg1 + 0x14) ^ in_R8 >> 8;
                *(arg1 + 0x15) = *(arg1 + 0x15) ^ in_R8;
                *(arg1 + 0x16) = *(arg1 + 0x16) ^ uVar4;
                *(arg1 + 0x17) = *(arg1 + 0x17) ^ uVar3;
                *(arg1 + 0x18) = *(arg1 + 0x18) ^ uVar2;
                *(arg1 + 0x19) = *(arg1 + 0x19) ^ uStackX_18;
                uStack_18 = 10;
            }
        }
        do {
            for (; (uStack_18 < 0x10 && (uStackX_18 != 0)); uStackX_18 = uStackX_18 - 1) {
                *(arg1 + 0x10 + uStack_18) = *(arg1 + 0x10 + uStack_18) ^ *puStackX_10;
                uStack_18 = uStack_18 + 1;
                puStackX_10 = puStackX_10 + 1;
            }
            (*pcVar1)(arg1 + 0x10,arg1 + 0x10,*(arg1 + 0x30));
            *(arg1 + 0x20) = *(arg1 + 0x20) + 1;
            uStack_18 = 0;
        } while (uStackX_18 != 0);
    }
    return;
}


/* fcn.00044a10 @ 0x44a10 */

ulong fcn.00044a10(int64_t arg1,int64_t arg2,uint32_t arg3,uint32_t arg4)

{
    uint8_t uVar1;
    uint8_t uVar2;
    code *pcVar3;
    uint32_t uVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint in_R8;
    uint in_R9;
    int64_t iStackX_10;
    int64_t iStackX_18;
    uint64_t uStackX_20;
    code *in_stack_00000028;
    uint32_t uStack_44;
    uchar uStack_40;
    uint64_t uStack_38;
    uint64_t uStack_20;
    uint64_t uStack_18;
    
    uStackX_20 = CONCAT44(in_R9,arg4);
    iStackX_18 = CONCAT44(in_R8,arg3);
    uVar1 = *arg1;
    pcVar3 = *(arg1 + 0x28);
    uVar5 = *(arg1 + 0x30);
    if ((uVar1 & 0x40) == 0) {
        (*pcVar3)(arg1,arg1 + 0x10,uVar5);
        *(arg1 + 0x20) = *(arg1 + 0x20) + 1;
    }
    uVar4 = uVar1 & 7;
    uStack_40 = uVar4;
    *arg1 = uStack_40;
    uStack_38 = 0;
    for (uStack_44 = 0xf - uVar4; uStack_44 < 0xf; uStack_44 = uStack_44 + 1) {
        uVar2 = *(arg1 + uStack_44);
        *(arg1 + uStack_44) = 0;
        uStack_38 = (uStack_38 | uVar2) << 8;
    }
    uVar2 = *(arg1 + 0xf);
    *(arg1 + 0xf) = 1;
    if ((uStack_38 | uVar2) == uStackX_20) {
        *(arg1 + 0x20) = (uStackX_20 + 0xf >> 3 | 1) + *(arg1 + 0x20);
        if (*(arg1 + 0x20) < 0x2000000000000001) {
            uVar6 = uStackX_20 / 0x10;
            iStackX_10 = arg2;
            if (uVar6 != 0) {
                (*in_stack_00000028)(arg2,iStackX_18,uVar6,uVar5,arg1,arg1 + 0x10);
                uVar6 = uVar6 * 0x10;
                iStackX_10 = arg2 + uVar6;
                iStackX_18 = iStackX_18 + uVar6;
                uStackX_20 = uStackX_20 % 0x10;
                if (uStackX_20 != 0) {
                    fcn.00044950(arg1,uVar6 / 0x10);
                }
            }
            if (uStackX_20 != 0) {
                for (uStack_44 = 0; uStack_44 < uStackX_20; uStack_44 = uStack_44 + 1) {
                    *(arg1 + 0x10 + uStack_44) = *(arg1 + 0x10 + uStack_44) ^ *(iStackX_10 + uStack_44);
                }
                (*pcVar3)(arg1 + 0x10,arg1 + 0x10,uVar5);
                (*pcVar3)(arg1,&uStack_20,uVar5);
                for (uStack_44 = 0; uStack_44 < uStackX_20; uStack_44 = uStack_44 + 1) {
                    *(iStackX_18 + uStack_44) = *(&uStack_20 + uStack_44) ^ *(iStackX_10 + uStack_44);
                }
            }
            for (uStack_44 = 0xf - uVar4; uStack_44 < 0x10; uStack_44 = uStack_44 + 1) {
                *(arg1 + uStack_44) = 0;
            }
            (*pcVar3)(arg1,&uStack_20,uVar5);
            *(arg1 + 0x10) = *(arg1 + 0x10) ^ uStack_20;
            *(arg1 + 0x18) = *(arg1 + 0x18) ^ uStack_18;
            *arg1 = uVar1;
            uVar5 = 0;
        }
        else {
            uVar5 = 0xfffffffe;
        }
    }
    else {
        uVar5 = 0xffffffff;
    }
    return uVar5;
}


/* fcn.00043fe0 @ 0x43fe0 */

ulong fcn.00043fe0(int64_t arg1,int64_t arg2,uint32_t arg3,uint32_t arg4)

{
    uint8_t uVar1;
    uint8_t uVar2;
    code *pcVar3;
    uint32_t uVar4;
    ulong uVar5;
    uint in_R8;
    uint in_R9;
    uint64_t *puStackX_10;
    uint64_t *puStackX_18;
    uint64_t uStackX_20;
    uint32_t uStack_44;
    uchar uStack_40;
    uint64_t uStack_38;
    uint64_t uStack_20;
    uint64_t uStack_18;
    
    puStackX_18 = CONCAT44(in_R8,arg3);
    uStackX_20 = CONCAT44(in_R9,arg4);
    uVar1 = *arg1;
    pcVar3 = *(arg1 + 0x28);
    uVar5 = *(arg1 + 0x30);
    if ((uVar1 & 0x40) == 0) {
        (*pcVar3)(arg1,arg1 + 0x10,uVar5);
        *(arg1 + 0x20) = *(arg1 + 0x20) + 1;
    }
    uVar4 = uVar1 & 7;
    uStack_40 = uVar4;
    *arg1 = uStack_40;
    uStack_38 = 0;
    for (uStack_44 = 0xf - uVar4; uStack_44 < 0xf; uStack_44 = uStack_44 + 1) {
        uVar2 = *(arg1 + uStack_44);
        *(arg1 + uStack_44) = 0;
        uStack_38 = (uStack_38 | uVar2) << 8;
    }
    uVar2 = *(arg1 + 0xf);
    *(arg1 + 0xf) = 1;
    if ((uStack_38 | uVar2) == uStackX_20) {
        *(arg1 + 0x20) = (uStackX_20 + 0xf >> 3 | 1) + *(arg1 + 0x20);
        puStackX_10 = arg2;
        if (*(arg1 + 0x20) < 0x2000000000000001) {
            for (; 0xf < uStackX_20; uStackX_20 = uStackX_20 - 0x10) {
                *(arg1 + 0x10) = *(arg1 + 0x10) ^ *puStackX_10;
                *(arg1 + 0x18) = *(arg1 + 0x18) ^ puStackX_10[1];
                (*pcVar3)(arg1 + 0x10,arg1 + 0x10,uVar5);
                (*pcVar3)(arg1,&uStack_20,uVar5);
                fcn.00043f70(arg1);
                *puStackX_18 = uStack_20 ^ *puStackX_10;
                puStackX_18[1] = uStack_18 ^ puStackX_10[1];
                puStackX_10 = puStackX_10 + 2;
                puStackX_18 = puStackX_18 + 2;
            }
            if (uStackX_20 != 0) {
                for (uStack_44 = 0; uStack_44 < uStackX_20; uStack_44 = uStack_44 + 1) {
                    *(arg1 + 0x10 + uStack_44) = *(arg1 + 0x10 + uStack_44) ^ *(puStackX_10 + uStack_44);
                }
                (*pcVar3)(arg1 + 0x10,arg1 + 0x10,uVar5);
                (*pcVar3)(arg1,&uStack_20,uVar5);
                for (uStack_44 = 0; uStack_44 < uStackX_20; uStack_44 = uStack_44 + 1) {
                    *(puStackX_18 + uStack_44) = *(&uStack_20 + uStack_44) ^ *(puStackX_10 + uStack_44);
                }
            }
            for (uStack_44 = 0xf - uVar4; uStack_44 < 0x10; uStack_44 = uStack_44 + 1) {
                *(arg1 + uStack_44) = 0;
            }
            (*pcVar3)(arg1,&uStack_20,uVar5);
            *(arg1 + 0x10) = *(arg1 + 0x10) ^ uStack_20;
            *(arg1 + 0x18) = *(arg1 + 0x18) ^ uStack_18;
            *arg1 = uVar1;
            uVar5 = 0;
        }
        else {
            uVar5 = 0xfffffffe;
        }
    }
    else {
        uVar5 = 0xffffffff;
    }
    return uVar5;
}


/* fcn.00044ea0 @ 0x44ea0 */

ulong fcn.00044ea0(int64_t arg1,int64_t arg2,uint32_t arg3,uint32_t arg4)

{
    uint8_t uVar1;
    uint8_t uVar2;
    code *pcVar3;
    uint32_t uVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint in_R8;
    uint in_R9;
    int64_t iStackX_10;
    int64_t iStackX_18;
    uint64_t uStackX_20;
    code *in_stack_00000028;
    uint32_t uStack_44;
    uchar uStack_40;
    uint64_t uStack_38;
    uint64_t uStack_20;
    uint64_t uStack_18;
    
    uStackX_20 = CONCAT44(in_R9,arg4);
    iStackX_18 = CONCAT44(in_R8,arg3);
    uVar1 = *arg1;
    pcVar3 = *(arg1 + 0x28);
    uVar5 = *(arg1 + 0x30);
    if ((uVar1 & 0x40) == 0) {
        (*pcVar3)(arg1,arg1 + 0x10,uVar5);
    }
    uVar4 = uVar1 & 7;
    uStack_40 = uVar4;
    *arg1 = uStack_40;
    uStack_38 = 0;
    for (uStack_44 = 0xf - uVar4; uStack_44 < 0xf; uStack_44 = uStack_44 + 1) {
        uVar2 = *(arg1 + uStack_44);
        *(arg1 + uStack_44) = 0;
        uStack_38 = (uStack_38 | uVar2) << 8;
    }
    uVar2 = *(arg1 + 0xf);
    *(arg1 + 0xf) = 1;
    if ((uStack_38 | uVar2) == uStackX_20) {
        uVar6 = uStackX_20 / 0x10;
        iStackX_10 = arg2;
        if (uVar6 != 0) {
            (*in_stack_00000028)(arg2,iStackX_18,uVar6,uVar5,arg1,arg1 + 0x10);
            uVar6 = uVar6 * 0x10;
            iStackX_10 = arg2 + uVar6;
            iStackX_18 = iStackX_18 + uVar6;
            uStackX_20 = uStackX_20 % 0x10;
            if (uStackX_20 != 0) {
                fcn.00044950(arg1,uVar6 / 0x10);
            }
        }
        if (uStackX_20 != 0) {
            (*pcVar3)(arg1,&uStack_20,uVar5);
            for (uStack_44 = 0; uStack_44 < uStackX_20; uStack_44 = uStack_44 + 1) {
                uVar2 = *(&uStack_20 + uStack_44) ^ *(iStackX_10 + uStack_44);
                *(iStackX_18 + uStack_44) = uVar2;
                *(arg1 + 0x10 + uStack_44) = *(arg1 + 0x10 + uStack_44) ^ uVar2;
            }
            (*pcVar3)(arg1 + 0x10,arg1 + 0x10,uVar5);
        }
        for (uStack_44 = 0xf - uVar4; uStack_44 < 0x10; uStack_44 = uStack_44 + 1) {
            *(arg1 + uStack_44) = 0;
        }
        (*pcVar3)(arg1,&uStack_20,uVar5);
        *(arg1 + 0x10) = *(arg1 + 0x10) ^ uStack_20;
        *(arg1 + 0x18) = *(arg1 + 0x18) ^ uStack_18;
        *arg1 = uVar1;
        uVar5 = 0;
    }
    else {
        uVar5 = 0xffffffff;
    }
    return uVar5;
}


/* fcn.000444a0 @ 0x444a0 */

ulong fcn.000444a0(int64_t arg1,int64_t arg2,uint32_t arg3,uint32_t arg4)

{
    uint8_t uVar1;
    uint8_t uVar2;
    code *pcVar3;
    uint32_t uVar4;
    ulong uVar5;
    uint in_R8;
    uint in_R9;
    uint64_t *puStackX_10;
    uint64_t *puStackX_18;
    uint64_t uStackX_20;
    uint32_t uStack_58;
    uchar uStack_50;
    uint64_t uStack_48;
    uint64_t uStack_28;
    uint64_t uStack_20;
    uint64_t uStack_18;
    uint64_t uStack_10;
    
    puStackX_18 = CONCAT44(in_R8,arg3);
    uStackX_20 = CONCAT44(in_R9,arg4);
    uVar1 = *arg1;
    pcVar3 = *(arg1 + 0x28);
    uVar5 = *(arg1 + 0x30);
    if ((uVar1 & 0x40) == 0) {
        (*pcVar3)(arg1,arg1 + 0x10,uVar5);
    }
    uVar4 = uVar1 & 7;
    uStack_50 = uVar4;
    *arg1 = uStack_50;
    uStack_48 = 0;
    for (uStack_58 = 0xf - uVar4; uStack_58 < 0xf; uStack_58 = uStack_58 + 1) {
        uVar2 = *(arg1 + uStack_58);
        *(arg1 + uStack_58) = 0;
        uStack_48 = (uStack_48 | uVar2) << 8;
    }
    uVar2 = *(arg1 + 0xf);
    *(arg1 + 0xf) = 1;
    puStackX_10 = arg2;
    if ((uStack_48 | uVar2) == uStackX_20) {
        for (; 0xf < uStackX_20; uStackX_20 = uStackX_20 - 0x10) {
            (*pcVar3)(arg1,&uStack_28,uVar5);
            fcn.00043f70(arg1);
            uStack_18 = uStack_28 ^ *puStackX_10;
            *puStackX_18 = uStack_18;
            *(arg1 + 0x10) = *(arg1 + 0x10) ^ uStack_18;
            uStack_10 = uStack_20 ^ puStackX_10[1];
            puStackX_18[1] = uStack_10;
            *(arg1 + 0x18) = *(arg1 + 0x18) ^ uStack_10;
            (*pcVar3)(arg1 + 0x10,arg1 + 0x10,uVar5);
            puStackX_10 = puStackX_10 + 2;
            puStackX_18 = puStackX_18 + 2;
        }
        if (uStackX_20 != 0) {
            (*pcVar3)(arg1,&uStack_28,uVar5);
            for (uStack_58 = 0; uStack_58 < uStackX_20; uStack_58 = uStack_58 + 1) {
                uVar2 = *(&uStack_28 + uStack_58) ^ *(puStackX_10 + uStack_58);
                *(puStackX_18 + uStack_58) = uVar2;
                *(arg1 + 0x10 + uStack_58) = *(arg1 + 0x10 + uStack_58) ^ uVar2;
            }
            (*pcVar3)(arg1 + 0x10,arg1 + 0x10,uVar5);
        }
        for (uStack_58 = 0xf - uVar4; uStack_58 < 0x10; uStack_58 = uStack_58 + 1) {
            *(arg1 + uStack_58) = 0;
        }
        (*pcVar3)(arg1,&uStack_28,uVar5);
        *(arg1 + 0x10) = *(arg1 + 0x10) ^ uStack_28;
        *(arg1 + 0x18) = *(arg1 + 0x18) ^ uStack_20;
        *arg1 = uVar1;
        uVar5 = 0;
    }
    else {
        uVar5 = 0xffffffff;
    }
    return uVar5;
}


/* fcn.0002d880 @ 0x2d880 */

uint64_t fcn.0002d880(int64_t arg1,uint32_t arg2,int64_t arg3,uint32_t arg4)

{
    uint32_t arg3_00;
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint in_register_00000014;
    uint in_R9;
    int iStack_38;
    uchar auStack_18 [8];
    uchar auStack_10 [16];
    
    iVar3 = fcn.00018f50(arg1);
    iVar4 = iVar3 + 0x138;
    if ((CONCAT44(in_register_00000014,arg2) == arg3) && (*(iVar3 + 300) + 8U <= CONCAT44(in_R9,arg4))) {
        iVar1 = fcn.00018f40(arg1);
        if (iVar1 != 0) {
            uVar2 = fcn.00018ff0(arg1);
            fcn.0001320c(arg2,uVar2,8);
        }
        iVar1 = fcn.00018fe0(arg1);
        fcn.0001320c(iVar1 + 4,arg3,8);
        uVar5 = CONCAT44(in_R9,arg4) - (*(iVar3 + 300) + 8);
        iVar1 = *(iVar3 + 0x128);
        iVar6 = fcn.00018fe0(arg1);
        uVar2 = uVar5;
        iVar1 = fcn.000438f0(iVar4,iVar6,0xf - iVar1,uVar2);
        if (iVar1 == 0) {
            arg3_00 = *(iVar3 + 0x130);
            iVar6 = fcn.00018ff0(arg1);
            fcn.00043a90(iVar4,iVar6,arg3_00);
            arg3 = arg3 + 8;
            arg2 = arg2 + 8;
            iVar1 = fcn.00018f40(arg1);
            if (iVar1 == 0) {
                if (*(iVar3 + 0x170) == 0) {
                    iVar1 = fcn.000444a0(iVar4,arg3,arg2,uVar2);
                }
                else {
                    iVar1 = fcn.00044ea0(iVar4,arg3,arg2,uVar2);
                }
                if (((iVar1 == 0) && (iVar4 = fcn.000452a0(iVar4,auStack_18,*(iVar3 + 300)), iVar4 != 0)) &&
                   (iVar1 = fcn.00019160(auStack_10 - 8,arg3 + uVar2,*(iVar3 + 300)), iVar1 == 0)) {
                    uVar5 = uVar5 & 0xffffffff;
                }
                else {
                    fcn.00019440(arg2,uVar2);
                    uVar5 = 0xffffffff;
                }
            }
            else {
                if (*(iVar3 + 0x170) == 0) {
                    iStack_38 = fcn.00043fe0(iVar4,arg3,arg2,uVar2);
                }
                else {
                    iStack_38 = fcn.00044a10(iVar4,arg3,arg2,uVar2);
                }
                if (iStack_38 == 0) {
                    iVar4 = fcn.000452a0(iVar4,arg2 + uVar2,*(iVar3 + 300));
                    if (iVar4 == 0) {
                        uVar5 = 0xffffffff;
                    }
                    else {
                        uVar5 = uVar5 + 8 + *(iVar3 + 300);
                    }
                }
                else {
                    uVar5 = 0xffffffff;
                }
            }
        }
        else {
            uVar5 = 0xffffffff;
        }
    }
    else {
        uVar5 = 0xffffffff;
    }
    return uVar5;
}


/* fcn.00018f10 @ 0x18f10 */

uint fcn.00018f10(int64_t arg1)

{
    return *(*arg1 + 4);
}


/* fcn.00041210 @ 0x41210 */

void fcn.00041210(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int iVar1;
    uint in_R8;
    uint8_t *puStackX_8;
    uint8_t *puStackX_10;
    uint64_t uStackX_18;
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    uint32_t *in_stack_00000038;
    code *in_stack_00000040;
    uint32_t uStack_28;
    uint32_t uStack_24;
    uint64_t uStack_20;
    
    uStack_24 = *in_stack_00000038;
    puStackX_8 = arg1;
    puStackX_10 = arg2;
    for (uStackX_18 = CONCAT44(in_R8,arg3); (uStack_24 != 0 && (uStackX_18 != 0)); uStackX_18 = uStackX_18 - 1) {
        *puStackX_10 = *puStackX_8 ^ *(in_stack_00000030 + uStack_24);
        puStackX_10 = puStackX_10 + 1;
        puStackX_8 = puStackX_8 + 1;
        uStack_24 = (uStack_24 + 1) % 0x10;
    }
    uStack_28 = *(in_stack_00000028 + 0xc) << 0x18 | *(in_stack_00000028 + 0xd) << 0x10 |
                *(in_stack_00000028 + 0xe) << 8 | *(in_stack_00000028 + 0xf);
    for (; 0xf < uStackX_18; uStackX_18 = uStackX_18 + uStack_20 * -0x10) {
        uStack_20 = uStackX_18 / 0x10;
        if (0x10000000 < uStack_20) {
            uStack_20 = 0x10000000;
        }
        uStack_28 = uStack_28 + uStack_20;
        if (uStack_28 < uStack_20) {
            uStack_20 = uStack_20 - uStack_28;
            uStack_28 = 0;
        }
        (*in_stack_00000040)(puStackX_8,puStackX_10,uStack_20,arg4,in_stack_00000028);
        *(in_stack_00000028 + 0xc) = uStack_28 >> 0x18;
        *(in_stack_00000028 + 0xd) = uStack_28 >> 0x10;
        *(in_stack_00000028 + 0xe) = uStack_28 >> 8;
        *(in_stack_00000028 + 0xf) = uStack_28;
        if (uStack_28 == 0) {
            fcn.00033980(in_stack_00000028);
        }
        puStackX_10 = puStackX_10 + uStack_20 * 0x10;
        puStackX_8 = puStackX_8 + uStack_20 * 0x10;
    }
    if (uStackX_18 != 0) {
        fcn.00013234(in_stack_00000030,0x10);
        (*in_stack_00000040)(in_stack_00000030,in_stack_00000030,1,arg4,in_stack_00000028);
        iVar1 = uStack_28 + 1;
        *(in_stack_00000028 + 0xc) = iVar1 >> 0x18;
        *(in_stack_00000028 + 0xd) = iVar1 >> 0x10;
        *(in_stack_00000028 + 0xe) = iVar1 >> 8;
        uStack_28._0_1_ = iVar1;
        *(in_stack_00000028 + 0xf) = uStack_28;
        if (iVar1 == 0) {
            fcn.00033980(in_stack_00000028);
        }
        while (uStackX_18 != 0) {
            puStackX_10[uStack_24] = puStackX_8[uStack_24] ^ *(in_stack_00000030 + uStack_24);
            uStack_24 = uStack_24 + 1;
            uStackX_18 = uStackX_18 - 1;
        }
    }
    *in_stack_00000038 = uStack_24;
    return;
}


/* fcn.000433e0 @ 0x433e0 */

void fcn.000433e0(uint32_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    fcn.00042d80(arg1,arg2,arg3,arg4);
    return;
}


/* fcn.00043420 @ 0x43420 */

void fcn.00043420(uint32_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    fcn.000430b0(arg1,arg2,arg3,arg4);
    return;
}


/* fcn.0002f540 @ 0x2f540 */

uint32_t fcn.0002f540(int64_t arg1,uint32_t arg2,int64_t arg3,uint32_t arg4)

{
    uint32_t arg3_00;
    uint32_t arg4_00;
    uint32_t arg2_00;
    int iVar1;
    int iVar2;
    int64_t iVar3;
    int64_t arg3_01;
    int64_t arg4_01;
    uint in_register_00000014;
    uint in_R9;
    uint32_t uStack_60;
    uint32_t uStack_5c;
    
    iVar3 = fcn.00018f50(arg1);
    uStack_60 = 0xffffffff;
    if ((CONCAT44(in_register_00000014,arg2) == arg3) && (0x17 < CONCAT44(in_R9,arg4))) {
        if (*(arg1 + 0x10) == 0) {
            uStack_5c = 0x18;
        }
        else {
            uStack_5c = 0x13;
        }
        iVar1 = fcn.0001f970(arg1,uStack_5c,8,arg2);
        if ((0 < iVar1) && (iVar1 = fcn.00042af0(iVar3 + 0x100,arg1 + 0x38,*(iVar3 + 0x29c)), iVar1 == 0)) {
            arg2_00 = arg3 + 8;
            arg3_01 = CONCAT44(in_register_00000014,arg2) + 8;
            arg4_01 = CONCAT44(in_R9,arg4) - 0x18;
            arg3_00 = arg3_01;
            iVar1 = iVar3;
            arg4_00 = arg4_01;
            if (*(arg1 + 0x10) == 0) {
                if (*(iVar3 + 0x2a0) == 0) {
                    iVar2 = fcn.000430b0(iVar1 + 0x100,arg2_00,arg3_00,arg4_00);
                }
                else {
                    iVar2 = fcn.00043420(iVar1 + 0x100,arg2_00,arg3_01,arg4_01);
                }
                if (iVar2 == 0) {
                    fcn.000437f0(iVar1 + 0x100,arg1 + 0x38,0x10);
                    iVar1 = fcn.00019160(arg1 + 0x38,arg2_00 + arg4_00,0x10);
                    if (iVar1 == 0) {
                        uStack_60 = arg4_00;
                    }
                    else {
                        fcn.00019440(arg3_00,arg4_00);
                    }
                }
            }
            else {
                if (*(iVar3 + 0x2a0) == 0) {
                    iVar2 = fcn.00042d80(iVar1 + 0x100,arg2_00,arg3_00,arg4_00);
                }
                else {
                    iVar2 = fcn.000433e0(iVar1 + 0x100,arg2_00,arg3_01,arg4_01);
                }
                if (iVar2 == 0) {
                    fcn.000437f0(iVar1 + 0x100,arg3_00 + arg4_00,0x10);
                    uStack_60 = arg4_00 + 0x18;
                }
            }
        }
        *(iVar3 + 0xfc) = 0;
        *(iVar3 + 0x29c) = 0xffffffff;
    }
    else {
        uStack_60 = 0xffffffff;
    }
    return uStack_60;
}


/* fcn.00046a00 @ 0x46a00 */

ulong fcn.00046a00(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint64_t *puStackX_18;
    uint64_t *puStackX_20;
    uint64_t in_stack_00000028;
    int in_stack_00000030;
    uint32_t uStack_88;
    uint64_t uStack_80;
    uint64_t uStack_78;
    uchar uStack_70;
    uchar uStack_6f;
    uint64_t uStack_68;
    ulong uStack_60;
    uint64_t uStack_58;
    uint64_t uStack_50;
    uint uStack_48;
    uint64_t uStack_40;
    uint64_t uStack_38;
    uint32_t uStack_30;
    uint32_t uStack_2c;
    uint32_t uStack_28;
    uint32_t uStack_24;
    uint64_t uStack_20;
    uint64_t uStack_18;
    
    uStack_48 = 1;
    if (in_stack_00000028 < 0x10) {
        uVar1 = 0xffffffff;
    }
    else {
        fcn.0001320c(&uStack_68,arg2,0x10);
        (**(arg1 + 0x18))(&uStack_68,&uStack_68,*(arg1 + 8));
        puStackX_18 = arg3;
        puStackX_20 = arg4;
        if ((in_stack_00000030 == 0) && (in_stack_00000028 % 0x10 != 0)) {
            in_stack_00000028 = in_stack_00000028 - 0x10;
        }
        while (0xf < in_stack_00000028) {
            uStack_80 = *puStackX_18 ^ uStack_68;
            uStack_78 = puStackX_18[1] ^ uStack_60;
            (**(arg1 + 0x10))(&uStack_80,&uStack_80,*arg1);
            uStack_20 = uStack_80 ^ uStack_68;
            uStack_80 = uStack_20;
            *puStackX_20 = uStack_20;
            uStack_18 = uStack_78 ^ uStack_60;
            uStack_78 = uStack_18;
            puStackX_20[1] = uStack_18;
            puStackX_18 = puStackX_18 + 2;
            puStackX_20 = puStackX_20 + 2;
            in_stack_00000028 = in_stack_00000028 - 0x10;
            if (in_stack_00000028 == 0) {
                return 0;
            }
            if (uStack_48 == '\0') {
                uStack_58 = 0;
                for (uStack_88 = 0; uStack_88 < 0x10; uStack_88 = uStack_88 + 1) {
                    uStack_58 = uStack_58 + *(&uStack_68 + uStack_88) * 2;
                    *(&uStack_68 + uStack_88) = uStack_58;
                    uStack_58 = uStack_58 >> 8;
                }
                uStack_68 = CONCAT71(uStack_68._1_7_,uStack_68 ^ -uStack_58 & 0x87U);
            }
            else {
                uStack_30 = uStack_60._4_4_ >> 0x1f & 0x87;
                uStack_2c = uStack_68 >> 0x3f;
                uStack_68 = uStack_68 << 1 ^ uStack_30;
                uStack_60 = uStack_60 << 1 | uStack_2c;
            }
        }
        if (in_stack_00000030 == 0) {
            if (uStack_48 == '\0') {
                uStack_50 = 0;
                for (uStack_88 = 0; uStack_88 < 0x10; uStack_88 = uStack_88 + 1) {
                    uStack_50 = uStack_50 + *(&uStack_68 + uStack_88) * 2;
                    *(&uStack_40 + uStack_88) = uStack_50;
                    uStack_50 = uStack_50 >> 8;
                }
                uStack_40 = CONCAT71(uStack_40._1_7_,uStack_40 ^ -uStack_50 & 0x87U);
            }
            else {
                uStack_28 = uStack_60._4_4_ >> 0x1f & 0x87;
                uStack_24 = uStack_68 >> 0x3f;
                uStack_40 = uStack_68 << 1 ^ uStack_28;
                uStack_38 = uStack_60 << 1 | uStack_24;
            }
            uStack_80 = *puStackX_18 ^ uStack_40;
            uStack_78 = puStackX_18[1] ^ uStack_38;
            (**(arg1 + 0x10))(&uStack_80,&uStack_80,*arg1);
            uStack_80 = uStack_80 ^ uStack_40;
            uStack_78 = uStack_78 ^ uStack_38;
            for (uStack_88 = 0; uStack_88 < in_stack_00000028; uStack_88 = uStack_88 + 1) {
                uStack_6f = *(puStackX_18 + uStack_88 + 0x10);
                *(puStackX_20 + uStack_88 + 0x10) = *(&uStack_80 + uStack_88);
                *(&uStack_80 + uStack_88) = uStack_6f;
            }
            uStack_80 = uStack_80 ^ uStack_68;
            uStack_78 = uStack_78 ^ uStack_60;
            (**(arg1 + 0x10))(&uStack_80,&uStack_80,*arg1);
            *puStackX_20 = uStack_80 ^ uStack_68;
            puStackX_20[1] = uStack_78 ^ uStack_60;
        }
        else {
            for (uStack_88 = 0; uStack_88 < in_stack_00000028; uStack_88 = uStack_88 + 1) {
                uStack_70 = *(puStackX_18 + uStack_88);
                *(puStackX_20 + uStack_88) = *(&uStack_80 + uStack_88);
                *(&uStack_80 + uStack_88) = uStack_70;
            }
            uStack_80 = uStack_80 ^ uStack_68;
            uStack_78 = uStack_78 ^ uStack_60;
            (**(arg1 + 0x10))(&uStack_80,&uStack_80,*arg1);
            uStack_80 = uStack_80 ^ uStack_68;
            uStack_78 = uStack_78 ^ uStack_60;
            fcn.0001320c(puStackX_20 - 0x10,&uStack_80,0x10);
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00030860 @ 0x30860 */

uint64_t fcn.00030860(int64_t arg1,uint32_t arg2,int64_t arg3,uint32_t arg4)

{
    uint32_t arg3_00;
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint in_register_00000014;
    uint in_R9;
    int iStack_38;
    uchar auStack_18 [8];
    uchar auStack_10 [16];
    
    iVar3 = fcn.00018f50(arg1);
    iVar4 = iVar3 + 0x118;
    if ((CONCAT44(in_register_00000014,arg2) == arg3) && (*(iVar3 + 0x10c) + 8U <= CONCAT44(in_R9,arg4))) {
        iVar1 = fcn.00018f40(arg1);
        if (iVar1 != 0) {
            uVar2 = fcn.00018ff0(arg1);
            fcn.0001320c(arg2,uVar2,8);
        }
        iVar1 = fcn.00018fe0(arg1);
        fcn.0001320c(iVar1 + 4,arg3,8);
        uVar5 = CONCAT44(in_R9,arg4) - (*(iVar3 + 0x10c) + 8);
        iVar1 = *(iVar3 + 0x108);
        iVar6 = fcn.00018fe0(arg1);
        uVar2 = uVar5;
        iVar1 = fcn.000438f0(iVar4,iVar6,0xf - iVar1,uVar2);
        if (iVar1 == 0) {
            arg3_00 = *(iVar3 + 0x110);
            iVar6 = fcn.00018ff0(arg1);
            fcn.00043a90(iVar4,iVar6,arg3_00);
            arg3 = arg3 + 8;
            arg2 = arg2 + 8;
            iVar1 = fcn.00018f40(arg1);
            if (iVar1 == 0) {
                if (*(iVar3 + 0x150) == 0) {
                    iVar1 = fcn.000444a0(iVar4,arg3,arg2,uVar2);
                }
                else {
                    iVar1 = fcn.00044ea0(iVar4,arg3,arg2,uVar2);
                }
                if (((iVar1 == 0) && (iVar4 = fcn.000452a0(iVar4,auStack_18,*(iVar3 + 0x10c)), iVar4 != 0)) &&
                   (iVar1 = fcn.00019160(auStack_10 - 8,arg3 + uVar2,*(iVar3 + 0x10c)), iVar1 == 0)) {
                    uVar5 = uVar5 & 0xffffffff;
                }
                else {
                    fcn.00019440(arg2,uVar2);
                    uVar5 = 0xffffffff;
                }
            }
            else {
                if (*(iVar3 + 0x150) == 0) {
                    iStack_38 = fcn.00043fe0(iVar4,arg3,arg2,uVar2);
                }
                else {
                    iStack_38 = fcn.00044a10(iVar4,arg3,arg2,uVar2);
                }
                if (iStack_38 == 0) {
                    iVar4 = fcn.000452a0(iVar4,arg2 + uVar2,*(iVar3 + 0x10c));
                    if (iVar4 == 0) {
                        uVar5 = 0xffffffff;
                    }
                    else {
                        uVar5 = uVar5 + 8 + *(iVar3 + 0x10c);
                    }
                }
                else {
                    uVar5 = 0xffffffff;
                }
            }
        }
        else {
            uVar5 = 0xffffffff;
        }
    }
    else {
        uVar5 = 0xffffffff;
    }
    return uVar5;
}


/* fcn.000477f0 @ 0x477f0 */

int64_t fcn.000477f0(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t arg1_00;
    int64_t iVar1;
    uint in_register_00000014;
    int arg3_00;
    uint64_t in_stack_00000028;
    code *in_stack_00000030;
    int iStack_38;
    uchar auStack_30 [4];
    uchar uStack_2c;
    uchar uStack_2b;
    uchar uStack_2a;
    uchar uStack_29;
    int64_t iStack_28;
    int64_t iStack_20;
    uint64_t uStack_18;
    
    uStack_18 = (in_stack_00000028 + 7) / 8;
    iStack_28 = uStack_18 * 8;
    iStack_20 = iStack_28 - in_stack_00000028;
    if ((in_stack_00000028 == 0) || (0x7fffffff < in_stack_00000028)) {
        iVar1 = 0;
    }
    else {
        if (CONCAT44(in_register_00000014,arg2) == 0) {
            fcn.0001320c(auStack_30,0x6e560,4);
        }
        else {
            fcn.0001320c(auStack_30,arg2,4);
        }
        uStack_2c = in_stack_00000028 >> 0x18;
        uStack_2b = in_stack_00000028 >> 0x10;
        uStack_2a = in_stack_00000028 >> 8;
        uStack_29 = in_stack_00000028;
        arg3_00 = in_stack_00000028;
        arg1_00 = arg3;
        if (iStack_28 == 8) {
            fcn.0001320c(arg1_00 + 8,arg4,arg3_00);
            fcn.0001320c(arg1_00,&iStack_28 - 8,8);
            fcn.00013234(arg1_00 + 8 + arg3_00,iStack_20);
            (*in_stack_00000030)(arg3,arg3,arg1);
            iStack_38 = 0x10;
        }
        else {
            fcn.0001320c(arg1_00,arg4,arg3_00);
            fcn.00013234(arg1_00 + arg3_00,iStack_20);
            iStack_38 = fcn.00047220(arg1,auStack_30,arg3,arg3);
        }
        iVar1 = iStack_38;
    }
    return iVar1;
}


/* fcn.00047a40 @ 0x47a40 */

uint64_t fcn.00047a40(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t arg1_00;
    uint32_t arg2_00;
    uint in_register_00000014;
    uint64_t in_stack_00000028;
    code *in_stack_00000030;
    uchar auStack_48 [4];
    uint8_t uStack_44;
    uint8_t uStack_43;
    uint8_t uStack_42;
    uint8_t uStack_41;
    uint64_t uStack_40;
    int64_t iStack_38;
    int64_t iStack_30;
    int64_t iStack_28;
    int64_t iStack_20;
    uchar auStack_18 [8];
    uchar auStack_10 [16];
    
    iStack_30 = in_stack_00000028 / 8 - 1;
    if ((((in_stack_00000028 & 7) == 0) && (0xf < in_stack_00000028)) && (in_stack_00000028 < 0x80000000)) {
        arg1_00 = arg3;
        arg2_00 = in_stack_00000028;
        if (in_stack_00000028 == 0x10) {
            (*in_stack_00000030)(arg4,auStack_18,arg1);
            fcn.0001320c(auStack_48,auStack_18,8);
            fcn.0001320c(arg1_00,auStack_10,8);
            iStack_38 = 8;
            fcn.00019440(auStack_18,0x10);
        }
        else {
            iStack_38 = in_stack_00000028 - 8;
            iStack_28 = fcn.000474b0(arg1,auStack_48,arg3,arg4);
            if (iStack_38 != iStack_28) {
                fcn.00019440(arg1_00,arg2_00);
                return 0;
            }
        }
        if (((CONCAT44(in_register_00000014,arg2) == 0) && (iVar1 = fcn.00019160(auStack_48,0x6e560,4), iVar1 != 0))
           || ((CONCAT44(in_register_00000014,arg2) != 0 && (iVar1 = fcn.00019160(auStack_48,arg2,4), iVar1 != 0))))
        {
            fcn.00019440(arg1_00,arg2_00);
            uStack_40 = 0;
        }
        else {
            uVar2 = uStack_44 << 0x18 | uStack_43 << 0x10 | uStack_42 << 8 | uStack_41;
            uStack_40 = uVar2;
            if ((iStack_30 * 8 - 8U < uStack_40) && (uStack_40 <= iStack_30 << 3)) {
                iStack_20 = iStack_38 - uStack_40;
                iVar1 = fcn.00019160(arg1_00 + uVar2,0x6fd20,iStack_20);
                if (iVar1 != 0) {
                    fcn.00019440(arg1_00,arg2_00);
                    uStack_40 = 0;
                }
            }
            else {
                fcn.00019440(arg1_00,arg2_00);
                uStack_40 = 0;
            }
        }
        return uStack_40;
    }
    return 0;
}


/* fcn.00047220 @ 0x47220 */

int64_t fcn.00047220(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint in_register_00000014;
    int64_t iStackX_10;
    uint64_t in_stack_00000028;
    code *in_stack_00000030;
    uint64_t uStack_40;
    int64_t iStack_38;
    uint64_t uStack_30;
    uint64_t uStack_28;
    uchar auStack_20 [4];
    uint8_t uStack_1c;
    uint8_t uStack_1b;
    uint8_t uStack_1a;
    uint8_t uStack_19;
    uchar auStack_18 [24];
    
    iStackX_10 = CONCAT44(in_register_00000014,arg2);
    if ((((in_stack_00000028 & 7) == 0) && (0xf < in_stack_00000028)) && (in_stack_00000028 < 0x80000001)) {
        uStack_40 = 1;
        fcn.0001320c(arg3 + 8,arg4,in_stack_00000028);
        if (iStackX_10 == 0) {
            iStackX_10 = 0x6e568;
        }
        fcn.0001320c(auStack_20,iStackX_10,8);
        for (uStack_30 = 0; uStack_30 < 6; uStack_30 = uStack_30 + 1) {
            iStack_38 = arg3;
            for (uStack_28 = 0; iStack_38 = iStack_38 + 8, uStack_28 < in_stack_00000028; uStack_28 = uStack_28 + 8) {
                fcn.0001320c(auStack_18,iStack_38,8);
                (*in_stack_00000030)(auStack_20,auStack_20,arg1);
                uStack_19 = uStack_19 ^ uStack_40;
                if (0xff < uStack_40) {
                    uStack_1a = uStack_1a ^ uStack_40 >> 8;
                    uStack_1b = uStack_1b ^ uStack_40 >> 0x10;
                    uStack_1c = uStack_1c ^ uStack_40 >> 0x18;
                }
                fcn.0001320c(iStack_38,auStack_18,8);
                uStack_40 = uStack_40 + 1;
            }
        }
        fcn.0001320c(arg3,auStack_20,8);
        iVar1 = in_stack_00000028 + 8;
    }
    else {
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00047750 @ 0x47750 */

int64_t fcn.00047750(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t iVar2;
    uint in_register_00000014;
    int64_t iStackX_10;
    uchar auStack_10 [16];
    
    iStackX_10 = CONCAT44(in_register_00000014,arg2);
    iVar2 = fcn.000474b0(arg1,auStack_10,arg3,arg4);
    if (iVar2 == 0) {
        iVar2 = 0;
    }
    else {
        if (iStackX_10 == 0) {
            iStackX_10 = 0x6e568;
        }
        iVar1 = fcn.00019160(auStack_10,iStackX_10,8);
        if (iVar1 != 0) {
            fcn.00019440(arg3,iVar2);
            iVar2 = 0;
        }
    }
    return iVar2;
}


/* fcn.00048d50 @ 0x48d50 */

void fcn.00048d50(int64_t arg1,int64_t arg2,int arg3,int64_t arg4)

{
    uint in_R8;
    int64_t iStackX_8;
    int64_t iStackX_10;
    uint64_t uStackX_18;
    int *in_stack_00000028;
    uint64_t uStack_98;
    uint64_t uStack_90;
    uint uStack_88;
    uint uStack_84;
    uint uStack_80;
    uint uStack_7c;
    uint uStack_78;
    uint uStack_74;
    uint uStack_70;
    uint uStack_6c;
    uint uStack_68;
    uint uStack_64;
    uint uStack_60;
    uint uStack_5c;
    int iStack_58;
    int iStack_54;
    int iStack_50;
    int iStack_4c;
    uint8_t auStack_48 [72];
    
    uStack_88 = 0x61707865;
    uStack_84 = 0x3320646e;
    uStack_80 = 0x79622d32;
    uStack_7c = 0x6b206574;
    uStack_78 = *arg4;
    uStack_74 = *(arg4 + 4);
    uStack_70 = *(arg4 + 8);
    uStack_6c = *(arg4 + 0xc);
    uStack_68 = *(arg4 + 0x10);
    uStack_64 = *(arg4 + 0x14);
    uStack_60 = *(arg4 + 0x18);
    uStack_5c = *(arg4 + 0x1c);
    iStack_58 = *in_stack_00000028;
    iStack_54 = in_stack_00000028[1];
    iStack_50 = in_stack_00000028[2];
    iStack_4c = in_stack_00000028[3];
    iStackX_8 = arg1;
    iStackX_10 = arg2;
    for (uStackX_18 = CONCAT44(in_R8,arg3); uStackX_18 != 0; uStackX_18 = uStackX_18 - uStack_90) {
        uStack_90 = 0x40;
        if (uStackX_18 < 0x40) {
            uStack_90 = uStackX_18;
        }
        fcn.00047cf0(auStack_48,&uStack_88);
        for (uStack_98 = 0; uStack_98 < uStack_90; uStack_98 = uStack_98 + 1) {
            *(iStackX_8 + uStack_98) = *(iStackX_10 + uStack_98) ^ auStack_48[uStack_98];
        }
        iStackX_8 = iStackX_8 + uStack_90;
        iStackX_10 = iStackX_10 + uStack_90;
        iStack_58 = iStack_58 + 1;
    }
    return;
}


/* fcn.000314c0 @ 0x314c0 */

ulong fcn.000314c0(int64_t arg1,uint32_t arg2,uint32_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint in_register_00000014;
    int64_t iVar3;
    uint in_R8;
    uint32_t uStack_28;
    
    iVar3 = CONCAT44(in_register_00000014,arg2);
    iVar2 = CONCAT44(in_R8,arg3);
    iVar1 = *(arg1 + 0x70);
    if (iVar3 != 0) {
        for (uStack_28 = 0; uStack_28 < 0x20; uStack_28 = uStack_28 + 4) {
            *(iVar1 + (uStack_28 / 4) * 4) =
                 CONCAT13(*(iVar3 + uStack_28 + 3),
                          CONCAT12(*(iVar3 + uStack_28 + 2),CONCAT11(*(iVar3 + uStack_28 + 1),*(iVar3 + uStack_28))));
        }
    }
    if (iVar2 != 0) {
        for (uStack_28 = 0; uStack_28 < 0x10; uStack_28 = uStack_28 + 4) {
            *(iVar1 + 0x20 + (uStack_28 / 4) * 4) =
                 CONCAT13(*(iVar2 + uStack_28 + 3),
                          CONCAT12(*(iVar2 + uStack_28 + 2),CONCAT11(*(iVar2 + uStack_28 + 1),*(iVar2 + uStack_28))));
        }
    }
    *(iVar1 + 0x70) = 0;
    return 1;
}


/* fcn.00029740 @ 0x29740 */

void fcn.00029740(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    
    uVar1 = fcn.00028c50(arg2 + 0x10);
    *(arg1 + 0xc0) = uVar1;
    uVar1 = fcn.00028c50(arg2 + 0x14);
    *(arg1 + 0xc4) = uVar1;
    uVar1 = fcn.00028c50(arg2 + 0x18);
    *(arg1 + 200) = uVar1;
    uVar1 = fcn.00028c50(arg2 + 0x1c);
    *(arg1 + 0xcc) = uVar1;
    fcn.00028d50(arg1,arg2);
    *(arg1 + 0xe0) = 0;
    return;
}


/* fcn.00029840 @ 0x29840 */

void fcn.00029840(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    uint in_R8;
    int64_t iStackX_10;
    uint64_t uStackX_18;
    
    uStackX_18 = CONCAT44(in_R8,arg3);
    iVar1 = *(arg1 + 0xe0);
    iVar2 = arg1;
    iStackX_10 = arg2;
    if (iVar1 != 0) {
        uVar3 = 0x10 - iVar1;
        if (uStackX_18 < uVar3) {
            fcn.0001320c(iVar2 + 0xd0 + iVar1,arg2,arg3);
            *(arg1 + 0xe0) = iVar1 + uStackX_18;
            return;
        }
        fcn.0001320c(iVar2 + 0xd0 + iVar1,arg2,uVar3);
        fcn.00028eb0(arg1,arg1 + 0xd0,0x10,1);
        iStackX_10 = arg2 + uVar3;
        uStackX_18 = uStackX_18 - uVar3;
    }
    uVar3 = uStackX_18 % 0x10;
    uStackX_18 = uStackX_18 - uVar3;
    if (0xf < uStackX_18) {
        fcn.00028eb0(arg1,iStackX_10,uStackX_18,1);
        iStackX_10 = iStackX_10 + uStackX_18;
    }
    if (uVar3 != 0) {
        fcn.0001320c(iVar2 + 0xd0,iStackX_10,uVar3);
    }
    *(arg1 + 0xe0) = uVar3;
    return;
}


/* fcn.00031690 @ 0x31690 */

ulong fcn.00031690(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int64_t arg4_00;
    uint32_t uVar1;
    int64_t iVar2;
    uint in_R9;
    uint8_t *puStackX_10;
    uint8_t *puStackX_18;
    uint64_t uStackX_20;
    uint32_t uStack_38;
    uint32_t uStack_34;
    uint64_t uStack_20;
    
    uStackX_20 = CONCAT44(in_R9,arg4);
    arg4_00 = *(arg1 + 0x70);
    uStack_38 = *(arg4_00 + 0x70);
    puStackX_10 = arg2;
    puStackX_18 = arg3;
    if (uStack_38 != 0) {
        for (; (uStackX_20 != 0 && (uStack_38 < 0x40)); uStack_38 = uStack_38 + 1) {
            *puStackX_10 = *puStackX_18 ^ *(arg4_00 + 0x30 + uStack_38);
            puStackX_10 = puStackX_10 + 1;
            puStackX_18 = puStackX_18 + 1;
            uStackX_20 = uStackX_20 - 1;
        }
        *(arg4_00 + 0x70) = uStack_38;
        if (uStackX_20 == 0) {
            return 1;
        }
        if (uStack_38 == 0x40) {
            *(arg4_00 + 0x70) = 0;
            *(arg4_00 + 0x20) = *(arg4_00 + 0x20) + 1;
            if (*(arg4_00 + 0x20) == 0) {
                *(arg4_00 + 0x24) = *(arg4_00 + 0x24) + 1;
            }
        }
    }
    uVar1 = uStackX_20 % 0x40;
    uStackX_20 = uStackX_20 - uStackX_20 % 0x40;
    uStack_34 = *(arg4_00 + 0x20);
    while (0x3f < uStackX_20) {
        uStack_20 = uStackX_20 / 0x40;
        if (0x10000000 < uStack_20) {
            uStack_20 = 0x10000000;
        }
        uStack_34 = uStack_34 + uStack_20;
        if (uStack_34 < uStack_20) {
            uStack_20 = uStack_20 - uStack_34;
            uStack_34 = 0;
        }
        iVar2 = uStack_20 * 0x40;
        fcn.00048d50(puStackX_10,puStackX_18,iVar2,arg4_00);
        uStackX_20 = uStackX_20 + uStack_20 * -0x40;
        puStackX_18 = puStackX_18 + iVar2;
        puStackX_10 = puStackX_10 + iVar2;
        *(arg4_00 + 0x20) = uStack_34;
        if (uStack_34 == 0) {
            *(arg4_00 + 0x24) = *(arg4_00 + 0x24) + 1;
        }
    }
    if (uVar1 != 0) {
        fcn.00013234(arg4_00 + 0x30,0x40);
        fcn.00048d50(arg4_00 + 0x30,arg4_00 + 0x30,0x40,arg4_00);
        for (uStack_38 = 0; uStack_38 < uVar1; uStack_38 = uStack_38 + 1) {
            puStackX_10[uStack_38] = puStackX_18[uStack_38] ^ *(arg4_00 + 0x30 + uStack_38);
        }
        *(arg4_00 + 0x70) = uVar1;
    }
    return 1;
}


/* fcn.000299f0 @ 0x299f0 */

void fcn.000299f0(int64_t arg1,int64_t arg2)

{
    uint64_t uStack_18;
    
    uStack_18 = *(arg1 + 0xe0);
    if (uStack_18 != 0) {
        *(arg1 + uStack_18 + 0xd0) = 1;
        while (uStack_18 = uStack_18 + 1, uStack_18 < 0x10) {
            *(arg1 + uStack_18 + 0xd0) = 0;
        }
        fcn.00028eb0(arg1,arg1 + 0xd0,0x10,0);
    }
    fcn.00029470(arg1,arg2,arg1 + 0xc0);
    fcn.00019440(arg1,0xf8);
    return;
}


/* fcn.00028c40 @ 0x28c40 */

ulong fcn.00028c40(void)

{
    return 0xf8;
}


/* fcn.000490c0 @ 0x490c0 */

ulong fcn.000490c0(uint32_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    
    iVar1 = fcn.00049060(arg1,arg2);
    if (iVar1 == 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(iVar1 + 0x10);
    }
    return uVar2;
}


/* fcn.0001ee40 @ 0x1ee40 */

void fcn.0001ee40(int64_t arg1,int64_t arg2,uint32_t *arg3,int64_t arg4)

{
    if (*(arg1 + 0x10) == 0) {
        fcn.0001f570(arg1,arg2,arg3,arg4);
    }
    else {
        fcn.0001f500(arg1,arg2,arg3,arg4);
    }
    return;
}


/* fcn.00032e20 @ 0x32e20 */

ulong fcn.00032e20(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    ulong uVar2;
    int iStack_18;
    uint32_t auStack_14 [5];
    
    auStack_14[0] = 0x10;
    for (iStack_18 = 0; iStack_18 < arg4; iStack_18 = iStack_18 + 1) {
        *(arg2 + iStack_18) = *(arg2 + iStack_18) ^ *(arg3 + iStack_18);
    }
    iVar1 = fcn.0001ee40(*(arg1 + 0x10),arg2,auStack_14,arg2);
    if ((iVar1 == 0) || (auStack_14[0] != arg4)) {
        uVar2 = 0;
    }
    else {
        uVar2 = 1;
    }
    return uVar2;
}


/* fcn.00032ed0 @ 0x32ed0 */

void fcn.00032ed0(int64_t arg1,uint32_t arg2)

{
    uint8_t uStack_48;
    uchar auStack_40 [16];
    uchar auStack_30 [16];
    uchar auStack_20 [32];
    
    uStack_48 = 2;
    fcn.0001320c(auStack_40,arg2,0x10);
    fcn.0001320c(auStack_30,arg2,0x10);
    if (*(arg1 + 0x28) != 0x10) {
        fcn.0001320c(auStack_20,arg2,0x10);
        uStack_48 = 3;
    }
    fcn.00032e20(arg1,arg1 + 0x78,auStack_40,uStack_48 * 0x10);
    return;
}


/* fcn.00032f70 @ 0x32f70 */

void fcn.00032f70(int64_t arg1)

{
    int64_t iVar1;
    uchar *puVar2;
    int iStack_44;
    uchar uStack_40;
    uchar auStack_3f [18];
    uchar uStack_2d;
    uchar uStack_1d;
    
    uStack_40 = 0;
    puVar2 = auStack_3f;
    for (iVar1 = 0x2f; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
    }
    fcn.00013234(arg1 + 0x78,0x30);
    if (*(arg1 + 0x28) == 0x10) {
        iStack_44 = 2;
    }
    else {
        iStack_44 = 3;
    }
    uStack_2d = 1;
    uStack_1d = 2;
    fcn.00032e20(arg1,arg1 + 0x78,&uStack_40,iStack_44 * 0x10);
    return;
}


/* fcn.00033020 @ 0x33020 */

ulong fcn.00033020(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    int iVar1;
    int iVar2;
    uint64_t uVar3;
    uint in_register_00000014;
    uint in_R8;
    int64_t iStackX_10;
    uint64_t uStackX_18;
    
    uStackX_18 = CONCAT44(in_R8,arg3);
    iStackX_10 = CONCAT44(in_register_00000014,arg2);
    if ((iStackX_10 != 0) && (uStackX_18 != 0)) {
        iVar1 = arg1;
        if ((*(arg1 + 0x70) != 0) && (uVar3 = 0x10 - *(arg1 + 0x70), uVar3 <= uStackX_18)) {
            fcn.0001320c(iVar1 + 0x60 + *(arg1 + 0x70),arg2,uVar3);
            iVar2 = fcn.00032ed0(arg1,iVar1 + 0x60);
            if (iVar2 == 0) {
                return 0;
            }
            *(arg1 + 0x70) = 0;
            uStackX_18 = uStackX_18 - uVar3;
            iStackX_10 = iStackX_10 + uVar3;
        }
        for (; 0xf < uStackX_18; uStackX_18 = uStackX_18 - 0x10) {
            iVar2 = fcn.00032ed0(arg1,iStackX_10);
            if (iVar2 == 0) {
                return 0;
            }
            iStackX_10 = iStackX_10 + 0x10;
        }
        if (uStackX_18 != 0) {
            fcn.0001320c(iVar1 + 0x60 + *(arg1 + 0x70),iStackX_10,uStackX_18);
            *(arg1 + 0x70) = *(arg1 + 0x70) + uStackX_18;
        }
    }
    return 1;
}


/* fcn.00033190 @ 0x33190 */

ulong fcn.00033190(int64_t arg1)

{
    int iVar1;
    
    if (*(arg1 + 0x70) != 0) {
        fcn.00013234(arg1 + 0x60 + *(arg1 + 0x70),0x10 - *(arg1 + 0x70));
        iVar1 = fcn.00032ed0(arg1,arg1 + 0x60);
        if (iVar1 == 0) {
            return 0;
        }
    }
    return 1;
}


/* fcn.0001e9c0 @ 0x1e9c0 */

ulong fcn.0001e9c0(int64_t arg1,uint32_t arg2,int64_t arg3,uint32_t arg4)

{
    uint uVar1;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    uint32_t arg1_00;
    uint in_register_00000014;
    uint in_R9;
    int64_t in_stack_00000028;
    int in_stack_00000030;
    
    iVar5 = CONCAT44(in_register_00000014,arg2);
    if (in_stack_00000030 == -1) {
        in_stack_00000030 = *(arg1 + 0x10);
    }
    else {
        if (in_stack_00000030 != 0) {
            in_stack_00000030 = 1;
        }
        *(arg1 + 0x10) = in_stack_00000030;
    }
    arg1_00 = arg1;
    if (iVar5 == 0) {
        if (*arg1 == 0) {
            fcn.0001c9f0(6,0x7b,0x83,0);
            return 0;
        }
    }
    else {
        if ((*arg1 != 0) || (*(arg1 + 0x70) != 0)) {
            uVar1 = *(arg1 + 0x6c);
            fcn.0001e8b0(arg1_00);
            *(arg1 + 0x10) = in_stack_00000030;
            *(arg1 + 0x6c) = uVar1;
        }
        *arg1 = iVar5;
        if (*(*arg1 + 0x30) == 0) {
            *(arg1 + 0x70) = 0;
        }
        else {
            uVar4 = fcn.00019290(*(*arg1 + 0x30),0x4fff6,0);
            *(arg1 + 0x70) = uVar4;
            if (*(arg1 + 0x70) == 0) {
                *arg1 = 0;
                fcn.0001c9f0(6,0x7b,0x41,0);
                return 0;
            }
        }
        *(arg1 + 0x68) = *(iVar5 + 8);
        *(arg1 + 0x6c) = *(arg1 + 0x6c) & 1;
        if (((*(*arg1 + 0x10) & 0x40) != 0) && (iVar2 = fcn.0001f970(arg1,0,0,0), iVar2 == 0)) {
            *arg1 = 0;
            fcn.0001c9f0(6,0x7b,0x86,0);
            return 0;
        }
    }
    if (((*(*arg1 + 4) != 1) && (*(*arg1 + 4) != 8)) && (*(*arg1 + 4) != 0x10)) {
        fcn.00019120(0x6ba10,0x4fff6,0);
    }
    if ((*(arg1 + 0x6c) & 1) == 0) {
        iVar5 = fcn.00018f30(arg1);
        uVar3 = fcn.00018f40(iVar5);
        if ((uVar3 & 0xf0007) == 0x10002) {
            fcn.0001c9f0(6,0x7b,0xaa,0);
            return 0;
        }
    }
    iVar5 = fcn.00018f30(arg1);
    uVar3 = fcn.00018f40(iVar5);
    if ((uVar3 & 0x10) == 0) {
        iVar5 = fcn.00018f30(arg1);
        uVar3 = fcn.00018f40(iVar5);
    //switch table (6 cases) at 0x1ee20
        switch(uVar3 & 0xf0007) {
        case 0:
        case 1:
            break;
        case 3:
        case 4:
            *(arg1 + 0x58) = 0;
        case 2:
            iVar2 = fcn.00018f70(arg1);
            if (0x10 < iVar2) {
                fcn.00019120(0x6ba80,0x4fff6,0);
            }
            if (in_stack_00000028 != 0) {
                iVar2 = fcn.00018f70(arg1);
                fcn.0001320c(arg1_00 + 0x18,in_stack_00000028,iVar2);
            }
            iVar2 = fcn.00018f70(arg1);
            fcn.0001320c(arg1_00 + 0x28,arg1_00 + 0x18,iVar2);
            break;
        case 5:
            *(arg1 + 0x58) = 0;
            if (in_stack_00000028 != 0) {
                iVar2 = fcn.00018f70(arg1);
                fcn.0001320c(arg1_00 + 0x28,in_stack_00000028,iVar2);
            }
            break;
        default:
            return 0;
        }
    }
    if (((CONCAT44(in_R9,arg4) == 0) && ((*(*arg1 + 0x10) & 0x20) == 0)) ||
       (iVar2 = (**(*arg1 + 0x18))(arg1,CONCAT44(in_R9,arg4),in_stack_00000028,in_stack_00000030), iVar2 != 0)) {
        *(arg1 + 0x14) = 0;
        *(arg1 + 0x78) = 0;
        *(arg1 + 0x7c) = *(*arg1 + 4) + -1;
        uVar4 = 1;
    }
    else {
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.00032c30 @ 0x32c30 */

void fcn.00032c30(int64_t arg1)

{
    uint32_t uStack_18;
    uint32_t uStack_14;
    
    uStack_14 = 0x10;
    uStack_18 = 1;
    do {
        uStack_14 = uStack_14 - 1;
        uStack_18 = uStack_18 + *(arg1 + 0x50 + uStack_14);
        *(arg1 + 0x50 + uStack_14) = uStack_18;
        uStack_18 = uStack_18 >> 8;
    } while (uStack_14 != 0);
    return;
}


/* fcn.00033200 @ 0x33200 */

ulong fcn.00033200(int64_t arg1,uint32_t arg2,int64_t arg3,uint32_t arg4)

{
    int iVar1;
    uint in_register_00000014;
    uint in_R9;
    int64_t iStackX_18;
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    int64_t in_stack_00000038;
    uint32_t auStack_28 [2];
    char *pcStack_20;
    int64_t iStack_18;
    
    pcStack_20 = arg1 + 0x60;
    auStack_28[0] = 0x10;
    iVar1 = fcn.00032f70(arg1);
    if (iVar1 == 0) {
        return 0;
    }
    iStackX_18 = arg3;
    if (CONCAT44(in_register_00000014,arg2) == 0) {
        iStackX_18 = 0;
    }
    if (CONCAT44(in_R9,arg4) == 0) {
        in_stack_00000028 = 0;
    }
    if (in_stack_00000030 == 0) {
        in_stack_00000038 = 0;
    }
    iStack_18 = iStackX_18 + in_stack_00000028 + in_stack_00000038;
    *pcStack_20 = iStack_18 >> 0x18;
    pcStack_20[1] = iStack_18 >> 0x10;
    pcStack_20[2] = iStack_18 >> 8;
    pcStack_20[3] = iStack_18;
    pcStack_20[4] = 0;
    pcStack_20[5] = 0;
    pcStack_20[6] = 0;
    pcStack_20 = pcStack_20 + 7;
    *pcStack_20 = *(arg1 + 0x28) + '\x10';
    *(arg1 + 0x70) = 8;
    iVar1 = fcn.00033020(arg1,arg2,iStackX_18);
    if ((((iVar1 == 0) || (iVar1 = fcn.00033020(arg1,arg4,in_stack_00000028), iVar1 == 0)) ||
        (iVar1 = fcn.00033020(arg1,in_stack_00000030,in_stack_00000038), iVar1 == 0)) ||
       ((iVar1 = fcn.00033020(arg1,0x4f8f8,1), iVar1 == 0 || (iVar1 = fcn.00033190(arg1), iVar1 == 0)))) {
        return 0;
    }
    iVar1 = fcn.0001e9c0(*arg1,0,0,arg1 + 0x78);
    if (iVar1 == 0) {
        return 0;
    }
    iVar1 = fcn.0001ee40(*arg1,arg1 + 0x78,auStack_28,arg1 + 0x78 + *(arg1 + 0x28));
    if ((iVar1 != 0) && (auStack_28[0] == 0x10)) {
        iVar1 = fcn.0001ee40(*arg1,arg1 + 0x88,auStack_28,arg1 + 0x78);
        if ((iVar1 == 0) || (auStack_28[0] != 0x10)) {
            return 0;
        }
        if ((*(arg1 + 0x28) != 0x10) &&
           ((iVar1 = fcn.0001ee40(*arg1,arg1 + 0x98,auStack_28,arg1 + 0x88), iVar1 == 0 || (auStack_28[0] != 0x10)))
           ) {
            return 0;
        }
        return 1;
    }
    return 0;
}


/* fcn.00032cb0 @ 0x32cb0 */

void fcn.00032cb0(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint in_register_00000014;
    int64_t iVar1;
    uint in_R8;
    uint64_t uStack_28;
    uint64_t uStack_20;
    uint64_t uStack_18;
    
    iVar1 = CONCAT44(in_register_00000014,arg2);
    uStack_20 = CONCAT44(in_R8,arg3);
    if ((iVar1 != 0) && (uStack_20 != 0)) {
        if (uStack_20 < *(arg1 + 0x28)) {
            uStack_18 = uStack_20;
        }
        else {
            uStack_18 = *(arg1 + 0x28);
        }
        for (uStack_28 = 0; uStack_28 < uStack_18; uStack_28 = uStack_28 + 1) {
            *(arg1 + uStack_28 + 0x30) = *(arg1 + uStack_28 + 0x30) ^ *(iVar1 + uStack_28);
        }
        if (*(arg1 + 0x28) < uStack_20) {
            uStack_20 = uStack_20 - *(arg1 + 0x28);
            if (0x10 < uStack_20) {
                uStack_20 = 0x10;
            }
            for (uStack_28 = 0; uStack_28 < uStack_20; uStack_28 = uStack_28 + 1) {
                *(arg1 + uStack_28 + 0x50) = *(arg1 + uStack_28 + 0x50) ^ *(iVar1 + uStack_28 + *(arg1 + 0x28));
            }
        }
    }
    return;
}


/* fcn.00033540 @ 0x33540 */

ulong fcn.00033540(int64_t arg1,uint32_t arg2,uint32_t arg3,uint32_t arg4)

{
    int iVar1;
    int iVar2;
    int64_t *arg1_00;
    ulong uVar3;
    uint in_register_00000014;
    uint in_R8;
    uint in_R9;
    uint32_t in_stack_00000028;
    int64_t in_stack_00000030;
    uint8_t uStack_88;
    uint32_t auStack_78 [2];
    uchar auStack_70 [16];
    uchar auStack_60 [16];
    uchar auStack_50 [16];
    uchar auStack_40 [64];
    
    arg1_00 = arg1 + 0xa0;
    auStack_78[0] = 0x10;
    iVar2 = arg1_00;
    fcn.0001320c(auStack_70,iVar2 + 0x50,0x10);
    fcn.00032c30(arg1_00);
    fcn.0001320c(auStack_60,iVar2 + 0x50,0x10);
    if (*(arg1 + 200) == 0x10) {
        uStack_88 = 0x20;
    }
    else {
        fcn.00032c30(arg1_00);
        fcn.0001320c(auStack_50,iVar2 + 0x50,0x10);
        uStack_88 = 0x30;
    }
    iVar1 = fcn.0001ee40(*arg1_00,auStack_40,auStack_78,auStack_70);
    if ((iVar1 == 0) || (auStack_78[0] != uStack_88)) {
        uVar3 = 0;
    }
    else {
        fcn.0001320c(iVar2 + 0x30,auStack_40,*(arg1 + 200));
        fcn.0001320c(iVar2 + 0x50,auStack_40 + *(arg1 + 200),0x10);
        if ((*(arg1 + 0x1c) & 1) == 0) {
            if ((((CONCAT44(in_register_00000014,arg2) != 0) || (in_stack_00000030 != 0)) ||
                (CONCAT44(in_R9,arg4) != 0)) &&
               (iVar1 = fcn.00033200(arg1_00,arg2,CONCAT44(in_R8,arg3),in_stack_00000030), iVar1 == 0)) {
                return 0;
            }
            if (CONCAT44(in_R8,arg3) != 0) {
                fcn.00032cb0(arg1_00,iVar2 + 0x78,*(arg1 + 0x88));
            }
        }
        else {
            fcn.00032cb0(arg1_00,arg2,arg3);
            fcn.00032cb0(arg1_00,arg4,in_stack_00000028);
        }
        iVar1 = fcn.0001e9c0(*arg1_00,0,0,iVar2 + 0x30);
        if ((iVar1 == 0) || (iVar2 = fcn.0001e9c0(*(arg1 + 0xa8),0,0,iVar2 + 0x30), iVar2 == 0)) {
            uVar3 = 0;
        }
        else {
            uVar3 = 1;
        }
    }
    return uVar3;
}


/* fcn.00033980 @ 0x33980 */

void fcn.00033980(int64_t arg1)

{
    uint32_t uStack_18;
    uint32_t uStack_14;
    
    uStack_14 = 0xc;
    uStack_18 = 1;
    do {
        uStack_14 = uStack_14 - 1;
        uStack_18 = uStack_18 + *(arg1 + uStack_14);
        *(arg1 + uStack_14) = uStack_18;
        uStack_18 = uStack_18 >> 8;
    } while (uStack_14 != 0);
    return;
}


/* fcn.0001e990 @ 0x1e990 */

void fcn.0001e990(int64_t arg1)

{
    fcn.0001e8b0(arg1);
    fcn.00019380(arg1,0x4fff6,0);
    return;
}


/* fcn.0001e970 @ 0x1e970 */

void fcn.0001e970(void)

{
    fcn.00019290(0xa0,0x4fff6,0);
    return;
}


/* fcn.00034110 @ 0x34110 */

bool fcn.00034110(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    iVar1 = *(arg1 + 0x18);
    uVar2 = *(*arg1 + 0x38);
    if (uVar2 < 0xa9) {
        fcn.00013234(iVar1,200);
        *(iVar1 + 0xd8) = 0;
        *(iVar1 + 200) = uVar2;
        *(iVar1 + 0xd0) = *(*arg1 + 8);
        *(iVar1 + 0x188) = arg2;
    }
    return uVar2 < 0xa9;
}


/* fcn.0004bdc0 @ 0x4bdc0 */

uint64_t fcn.0004bdc0(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    uint64_t uVar1;
    uint in_R8;
    int64_t *piStackX_10;
    uint64_t uStackX_18;
    uint64_t uStack_28;
    
    piStackX_10 = arg2;
    for (uStackX_18 = CONCAT44(in_R8,arg3); arg4 <= uStackX_18; uStackX_18 = uStackX_18 - arg4) {
        for (uStack_28 = 0; uStack_28 < arg4 / 8; uStack_28 = uStack_28 + 1) {
            arg1_00 = *piStackX_10;
            piStackX_10 = piStackX_10 + 1;
            uVar1 = fcn.0004b8e0(arg1_00);
            *(arg1 + uStack_28 * 8) = *(arg1 + uStack_28 * 8) ^ uVar1;
        }
        fcn.0004b870(arg1);
    }
    return uStackX_18;
}


/* fcn.0004bf70 @ 0x4bf70 */

void fcn.0004bf70(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint in_R8;
    uchar *puStackX_10;
    uint64_t uStackX_18;
    uint64_t uStack_28;
    uint64_t uStack_20;
    
    uStackX_18 = CONCAT44(in_R8,arg3);
    puStackX_10 = arg2;
    do {
        if (uStackX_18 == 0) {
            return;
        }
        uStack_20 = 0;
        for (; (uStack_20 < arg4 / 8 && (uStackX_18 != 0)); uStackX_18 = uStackX_18 - 8) {
            uStack_28 = fcn.0004bb50(*(arg1 + uStack_20 * 8));
            if (uStackX_18 < 8) {
                for (uStack_20 = 0; uStack_20 < uStackX_18; uStack_20 = uStack_20 + 1) {
                    *puStackX_10 = uStack_28;
                    puStackX_10 = puStackX_10 + 1;
                    uStack_28 = uStack_28 >> 8;
                }
                return;
            }
            *puStackX_10 = uStack_28;
            puStackX_10[1] = uStack_28 >> 8;
            puStackX_10[2] = uStack_28 >> 0x10;
            puStackX_10[3] = uStack_28 >> 0x18;
            puStackX_10[4] = uStack_28 >> 0x20;
            puStackX_10[5] = uStack_28 >> 0x28;
            puStackX_10[6] = uStack_28 >> 0x30;
            puStackX_10[7] = uStack_28 >> 0x38;
            puStackX_10 = puStackX_10 + 8;
            uStack_20 = uStack_20 + 1;
        }
        if (uStackX_18 != 0) {
            fcn.0004b870(arg1);
        }
    } while( true );
}


/* fcn.00034630 @ 0x34630 */

ulong fcn.00034630(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t arg1_00;
    ulong uVar2;
    
    arg1_00 = fcn.00019050(arg1);
    iVar1 = fcn.00034950(arg1_00,arg2,arg3);
    if (iVar1 == 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = fcn.0001bb20(arg1_00 + 0x5c,arg2,arg3);
    }
    return uVar2;
}


/* fcn.000345e0 @ 0x345e0 */

ulong fcn.000345e0(int64_t arg1)

{
    int iVar1;
    int64_t arg1_00;
    ulong uVar2;
    
    arg1_00 = fcn.00019050(arg1);
    iVar1 = fcn.00035000(arg1_00);
    if (iVar1 == 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = fcn.0001c250(arg1_00 + 0x5c);
    }
    return uVar2;
}


/* fcn.00035060 @ 0x35060 */

void fcn.00035060(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    int iVar17;
    uint32_t uVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    uint in_R8;
    int64_t iStackX_18;
    int iStack_88;
    uint32_t uStack_84;
    uint32_t uStack_80;
    uint32_t uStack_7c;
    int *piStack_70;
    
    iStack_88 = *arg1;
    uStack_84 = *(arg1 + 4);
    uStack_80 = *(arg1 + 8);
    uStack_7c = *(arg1 + 0xc);
    iStackX_18 = CONCAT44(in_R8,arg3);
    piStack_70 = arg2;
    while( true ) {
        if (iStackX_18 == 0) break;
        iVar2 = *piStack_70;
        iVar3 = piStack_70[1];
        uVar1 = ((uStack_80 ^ uStack_7c) & uStack_84 ^ uStack_7c) + iStack_88 + -0x28955b88 + iVar2;
        uVar18 = (uVar1 * 0x80 | uVar1 >> 0x19) + uStack_84;
        iVar4 = piStack_70[2];
        uVar1 = ((uStack_84 ^ uStack_80) & uVar18 ^ uStack_80) + uStack_7c + -0x173848aa + iVar3;
        uVar19 = (uVar1 * 0x1000 | uVar1 >> 0x14) + uVar18;
        iVar5 = piStack_70[3];
        uVar1 = ((uVar18 ^ uStack_84) & uVar19 ^ uStack_84) + uStack_80 + 0x242070db + iVar4;
        uVar20 = (uVar1 * 0x20000 | uVar1 >> 0xf) + uVar19;
        iVar6 = piStack_70[4];
        uVar1 = ((uVar19 ^ uVar18) & uVar20 ^ uVar18) + uStack_84 + -0x3e423112 + iVar5;
        uVar21 = (uVar1 * 0x400000 | uVar1 >> 10) + uVar20;
        iVar7 = piStack_70[5];
        uVar1 = ((uVar20 ^ uVar19) & uVar21 ^ uVar19) + uVar18 + -0xa83f051 + iVar6;
        uVar18 = (uVar1 * 0x80 | uVar1 >> 0x19) + uVar21;
        iVar8 = piStack_70[6];
        uVar1 = ((uVar21 ^ uVar20) & uVar18 ^ uVar20) + uVar19 + 0x4787c62a + iVar7;
        uVar19 = (uVar1 * 0x1000 | uVar1 >> 0x14) + uVar18;
        iVar9 = piStack_70[7];
        uVar1 = ((uVar18 ^ uVar21) & uVar19 ^ uVar21) + uVar20 + -0x57cfb9ed + iVar8;
        uVar20 = (uVar1 * 0x20000 | uVar1 >> 0xf) + uVar19;
        iVar10 = piStack_70[8];
        uVar1 = ((uVar19 ^ uVar18) & uVar20 ^ uVar18) + uVar21 + -0x2b96aff + iVar9;
        uVar21 = (uVar1 * 0x400000 | uVar1 >> 10) + uVar20;
        iVar11 = piStack_70[9];
        uVar1 = ((uVar20 ^ uVar19) & uVar21 ^ uVar19) + uVar18 + 0x698098d8 + iVar10;
        uVar18 = (uVar1 * 0x80 | uVar1 >> 0x19) + uVar21;
        iVar12 = piStack_70[10];
        uVar1 = ((uVar21 ^ uVar20) & uVar18 ^ uVar20) + uVar19 + -0x74bb0851 + iVar11;
        uVar19 = (uVar1 * 0x1000 | uVar1 >> 0x14) + uVar18;
        iVar13 = piStack_70[0xb];
        uVar1 = ((uVar18 ^ uVar21) & uVar19 ^ uVar21) + uVar20 + -0xa44f + iVar12;
        uVar20 = (uVar1 * 0x20000 | uVar1 >> 0xf) + uVar19;
        iVar14 = piStack_70[0xc];
        uVar1 = ((uVar19 ^ uVar18) & uVar20 ^ uVar18) + uVar21 + -0x76a32842 + iVar13;
        uVar21 = (uVar1 * 0x400000 | uVar1 >> 10) + uVar20;
        iVar15 = piStack_70[0xd];
        uVar1 = ((uVar20 ^ uVar19) & uVar21 ^ uVar19) + uVar18 + 0x6b901122 + iVar14;
        uVar18 = (uVar1 * 0x80 | uVar1 >> 0x19) + uVar21;
        iVar16 = piStack_70[0xe];
        uVar1 = ((uVar21 ^ uVar20) & uVar18 ^ uVar20) + uVar19 + -0x2678e6d + iVar15;
        uVar19 = (uVar1 * 0x1000 | uVar1 >> 0x14) + uVar18;
        iVar17 = piStack_70[0xf];
        piStack_70 = piStack_70 + 0x10;
        uVar1 = ((uVar18 ^ uVar21) & uVar19 ^ uVar21) + uVar20 + -0x5986bc72 + iVar16;
        uVar20 = (uVar1 * 0x20000 | uVar1 >> 0xf) + uVar19;
        uVar1 = ((uVar19 ^ uVar18) & uVar20 ^ uVar18) + uVar21 + 0x49b40821 + iVar17;
        uVar21 = (uVar1 * 0x400000 | uVar1 >> 10) + uVar20;
        uVar1 = ((uVar21 ^ uVar20) & uVar19 ^ uVar20) + uVar18 + -0x9e1da9e + iVar3;
        uVar18 = (uVar1 * 0x20 | uVar1 >> 0x1b) + uVar21;
        uVar1 = ((uVar18 ^ uVar21) & uVar20 ^ uVar21) + uVar19 + -0x3fbf4cc0 + iVar8;
        uVar19 = (uVar1 * 0x200 | uVar1 >> 0x17) + uVar18;
        uVar1 = ((uVar19 ^ uVar18) & uVar21 ^ uVar18) + uVar20 + 0x265e5a51 + iVar13;
        uVar20 = (uVar1 * 0x4000 | uVar1 >> 0x12) + uVar19;
        uVar1 = ((uVar20 ^ uVar19) & uVar18 ^ uVar19) + uVar21 + -0x16493856 + iVar2;
        uVar21 = (uVar1 * 0x100000 | uVar1 >> 0xc) + uVar20;
        uVar1 = ((uVar21 ^ uVar20) & uVar19 ^ uVar20) + uVar18 + -0x29d0efa3 + iVar7;
        uVar18 = (uVar1 * 0x20 | uVar1 >> 0x1b) + uVar21;
        uVar1 = ((uVar18 ^ uVar21) & uVar20 ^ uVar21) + uVar19 + 0x2441453 + iVar12;
        uVar19 = (uVar1 * 0x200 | uVar1 >> 0x17) + uVar18;
        uVar1 = ((uVar19 ^ uVar18) & uVar21 ^ uVar18) + uVar20 + -0x275e197f + iVar17;
        uVar20 = (uVar1 * 0x4000 | uVar1 >> 0x12) + uVar19;
        uVar1 = ((uVar20 ^ uVar19) & uVar18 ^ uVar19) + uVar21 + -0x182c0438 + iVar6;
        uVar21 = (uVar1 * 0x100000 | uVar1 >> 0xc) + uVar20;
        uVar1 = ((uVar21 ^ uVar20) & uVar19 ^ uVar20) + uVar18 + 0x21e1cde6 + iVar11;
        uVar18 = (uVar1 * 0x20 | uVar1 >> 0x1b) + uVar21;
        uVar1 = ((uVar18 ^ uVar21) & uVar20 ^ uVar21) + uVar19 + -0x3cc8f82a + iVar16;
        uVar19 = (uVar1 * 0x200 | uVar1 >> 0x17) + uVar18;
        uVar1 = ((uVar19 ^ uVar18) & uVar21 ^ uVar18) + uVar20 + -0xb2af279 + iVar5;
        uVar20 = (uVar1 * 0x4000 | uVar1 >> 0x12) + uVar19;
        uVar1 = ((uVar20 ^ uVar19) & uVar18 ^ uVar19) + uVar21 + 0x455a14ed + iVar10;
        uVar21 = (uVar1 * 0x100000 | uVar1 >> 0xc) + uVar20;
        uVar1 = ((uVar21 ^ uVar20) & uVar19 ^ uVar20) + uVar18 + -0x561c16fb + iVar15;
        uVar18 = (uVar1 * 0x20 | uVar1 >> 0x1b) + uVar21;
        uVar1 = ((uVar18 ^ uVar21) & uVar20 ^ uVar21) + uVar19 + -0x3105c08 + iVar4;
        uVar19 = (uVar1 * 0x200 | uVar1 >> 0x17) + uVar18;
        uVar1 = ((uVar19 ^ uVar18) & uVar21 ^ uVar18) + uVar20 + 0x676f02d9 + iVar9;
        uVar20 = (uVar1 * 0x4000 | uVar1 >> 0x12) + uVar19;
        uVar1 = ((uVar20 ^ uVar19) & uVar18 ^ uVar19) + uVar21 + -0x72d5b376 + iVar14;
        uVar21 = (uVar1 * 0x100000 | uVar1 >> 0xc) + uVar20;
        uVar1 = (uVar21 ^ uVar20 ^ uVar19) + uVar18 + -0x5c6be + iVar7;
        uVar18 = (uVar1 * 0x10 | uVar1 >> 0x1c) + uVar21;
        uVar1 = (uVar18 ^ uVar21 ^ uVar20) + uVar19 + -0x788e097f + iVar10;
        uVar19 = (uVar1 * 0x800 | uVar1 >> 0x15) + uVar18;
        uVar1 = (uVar19 ^ uVar18 ^ uVar21) + uVar20 + 0x6d9d6122 + iVar13;
        uVar20 = (uVar1 * 0x10000 | uVar1 >> 0x10) + uVar19;
        uVar1 = (uVar20 ^ uVar19 ^ uVar18) + uVar21 + -0x21ac7f4 + iVar16;
        uVar21 = (uVar1 * 0x800000 | uVar1 >> 9) + uVar20;
        uVar1 = (uVar21 ^ uVar20 ^ uVar19) + uVar18 + -0x5b4115bc + iVar3;
        uVar18 = (uVar1 * 0x10 | uVar1 >> 0x1c) + uVar21;
        uVar1 = (uVar18 ^ uVar21 ^ uVar20) + uVar19 + 0x4bdecfa9 + iVar6;
        uVar19 = (uVar1 * 0x800 | uVar1 >> 0x15) + uVar18;
        uVar1 = (uVar19 ^ uVar18 ^ uVar21) + uVar20 + -0x944b4a0 + iVar9;
        uVar20 = (uVar1 * 0x10000 | uVar1 >> 0x10) + uVar19;
        uVar1 = (uVar20 ^ uVar19 ^ uVar18) + uVar21 + -0x41404390 + iVar12;
        uVar21 = (uVar1 * 0x800000 | uVar1 >> 9) + uVar20;
        uVar1 = (uVar21 ^ uVar20 ^ uVar19) + uVar18 + 0x289b7ec6 + iVar15;
        uVar18 = (uVar1 * 0x10 | uVar1 >> 0x1c) + uVar21;
        uVar1 = (uVar18 ^ uVar21 ^ uVar20) + uVar19 + -0x155ed806 + iVar2;
        uVar19 = (uVar1 * 0x800 | uVar1 >> 0x15) + uVar18;
        uVar1 = (uVar19 ^ uVar18 ^ uVar21) + uVar20 + -0x2b10cf7b + iVar5;
        uVar20 = (uVar1 * 0x10000 | uVar1 >> 0x10) + uVar19;
        uVar1 = (uVar20 ^ uVar19 ^ uVar18) + uVar21 + 0x4881d05 + iVar8;
        uVar21 = (uVar1 * 0x800000 | uVar1 >> 9) + uVar20;
        uVar1 = (uVar21 ^ uVar20 ^ uVar19) + uVar18 + -0x262b2fc7 + iVar11;
        uVar18 = (uVar1 * 0x10 | uVar1 >> 0x1c) + uVar21;
        uVar1 = (uVar18 ^ uVar21 ^ uVar20) + uVar19 + -0x1924661b + iVar14;
        uVar19 = (uVar1 * 0x800 | uVar1 >> 0x15) + uVar18;
        uVar1 = (uVar19 ^ uVar18 ^ uVar21) + uVar20 + 0x1fa27cf8 + iVar17;
        uVar20 = (uVar1 * 0x10000 | uVar1 >> 0x10) + uVar19;
        uVar1 = (uVar20 ^ uVar19 ^ uVar18) + uVar21 + -0x3b53a99b + iVar4;
        uVar21 = (uVar1 * 0x800000 | uVar1 >> 9) + uVar20;
        uVar1 = ((~uVar19 | uVar21) ^ uVar20) + uVar18 + -0xbd6ddbc + iVar2;
        uVar18 = (uVar1 * 0x40 | uVar1 >> 0x1a) + uVar21;
        uVar1 = ((~uVar20 | uVar18) ^ uVar21) + uVar19 + 0x432aff97 + iVar9;
        uVar19 = (uVar1 * 0x400 | uVar1 >> 0x16) + uVar18;
        uVar1 = ((~uVar21 | uVar19) ^ uVar18) + uVar20 + -0x546bdc59 + iVar16;
        uVar20 = (uVar1 * 0x8000 | uVar1 >> 0x11) + uVar19;
        uVar1 = ((~uVar18 | uVar20) ^ uVar19) + uVar21 + -0x36c5fc7 + iVar7;
        uVar21 = (uVar1 * 0x200000 | uVar1 >> 0xb) + uVar20;
        uVar1 = ((~uVar19 | uVar21) ^ uVar20) + uVar18 + 0x655b59c3 + iVar14;
        uVar18 = (uVar1 * 0x40 | uVar1 >> 0x1a) + uVar21;
        uVar1 = ((~uVar20 | uVar18) ^ uVar21) + uVar19 + -0x70f3336e + iVar5;
        uVar19 = (uVar1 * 0x400 | uVar1 >> 0x16) + uVar18;
        uVar1 = ((~uVar21 | uVar19) ^ uVar18) + uVar20 + -0x100b83 + iVar12;
        uVar20 = (uVar1 * 0x8000 | uVar1 >> 0x11) + uVar19;
        uVar1 = ((~uVar18 | uVar20) ^ uVar19) + uVar21 + -0x7a7ba22f + iVar3;
        uVar21 = (uVar1 * 0x200000 | uVar1 >> 0xb) + uVar20;
        uVar1 = ((~uVar19 | uVar21) ^ uVar20) + uVar18 + 0x6fa87e4f + iVar10;
        uVar18 = (uVar1 * 0x40 | uVar1 >> 0x1a) + uVar21;
        uVar1 = ((~uVar20 | uVar18) ^ uVar21) + uVar19 + -0x1d31920 + iVar17;
        uVar19 = (uVar1 * 0x400 | uVar1 >> 0x16) + uVar18;
        uVar1 = ((~uVar21 | uVar19) ^ uVar18) + uVar20 + -0x5cfebcec + iVar8;
        uVar20 = (uVar1 * 0x8000 | uVar1 >> 0x11) + uVar19;
        uVar1 = ((~uVar18 | uVar20) ^ uVar19) + uVar21 + 0x4e0811a1 + iVar15;
        uVar21 = (uVar1 * 0x200000 | uVar1 >> 0xb) + uVar20;
        uVar1 = ((~uVar19 | uVar21) ^ uVar20) + uVar18 + -0x8ac817e + iVar6;
        uVar18 = (uVar1 * 0x40 | uVar1 >> 0x1a) + uVar21;
        uVar1 = ((~uVar20 | uVar18) ^ uVar21) + uVar19 + -0x42c50dcb + iVar13;
        uStack_7c = (uVar1 * 0x400 | uVar1 >> 0x16) + uVar18;
        uVar1 = ((~uVar21 | uStack_7c) ^ uVar18) + uVar20 + 0x2ad7d2bb + iVar4;
        uStack_80 = (uVar1 * 0x8000 | uVar1 >> 0x11) + uStack_7c;
        uVar1 = ((~uVar18 | uStack_80) ^ uStack_7c) + uVar21 + -0x14792c6f + iVar11;
        iStack_88 = *arg1 + uVar18;
        *arg1 = iStack_88;
        uStack_84 = *(arg1 + 4) + (uVar1 * 0x200000 | uVar1 >> 0xb) + uStack_80;
        *(arg1 + 4) = uStack_84;
        uStack_80 = *(arg1 + 8) + uStack_80;
        *(arg1 + 8) = uStack_80;
        uStack_7c = *(arg1 + 0xc) + uStack_7c;
        *(arg1 + 0xc) = uStack_7c;
        iStackX_18 = iStackX_18 + -1;
    }
    return;
}


/* fcn.00037620 @ 0x37620 */

void fcn.00037620(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint8_t *puVar9;
    uint8_t *puVar10;
    uint8_t *puVar11;
    uint8_t *puVar12;
    uint8_t *puVar13;
    uint8_t *puVar14;
    uint8_t *puVar15;
    uint8_t *puVar16;
    uint8_t *puVar17;
    uint8_t *puVar18;
    uint8_t *puVar19;
    uint8_t *puVar20;
    uint8_t *puVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    uint32_t uVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    uint32_t uVar27;
    uint32_t uVar28;
    uint32_t uVar29;
    uint32_t uVar30;
    uint32_t uVar31;
    uint32_t uVar32;
    uint32_t uVar33;
    uint32_t uVar34;
    uint32_t uVar35;
    uint32_t uVar36;
    uint32_t uVar37;
    uint32_t uVar38;
    uint32_t uVar39;
    uint32_t uVar40;
    uint in_R8;
    int64_t iStackX_18;
    uint8_t *puStack_538;
    
    iStackX_18 = CONCAT44(in_R8,arg3);
    puStack_538 = arg2;
    while (iStackX_18 != 0) {
        uVar6 = *arg1;
        uVar3 = *(arg1 + 4);
        uVar7 = *(arg1 + 0x10);
        uVar4 = *(arg1 + 0x14);
        uVar22 = *puStack_538 << 0x18 | puStack_538[1] << 0x10 | puStack_538[2] << 8 | puStack_538[3];
        uVar23 = puStack_538[4] << 0x18 | puStack_538[5] << 0x10 | puStack_538[6] << 8 | puStack_538[7];
        uVar24 = puStack_538[8] << 0x18 | puStack_538[9] << 0x10 | puStack_538[10] << 8 | puStack_538[0xb];
        puVar9 = puStack_538 + 0xc;
        uVar25 = *puVar9 << 0x18 | puStack_538[0xd] << 0x10 | puStack_538[0xe] << 8 | puStack_538[0xf];
        puVar10 = puStack_538 + 0x10;
        uVar26 = *puVar10 << 0x18 | puStack_538[0x11] << 0x10 | puStack_538[0x12] << 8 | puStack_538[0x13];
        puVar11 = puStack_538 + 0x14;
        uVar27 = *puVar11 << 0x18 | puStack_538[0x15] << 0x10 | puStack_538[0x16] << 8 | puStack_538[0x17];
        puVar12 = puStack_538 + 0x18;
        uVar28 = *puVar12 << 0x18 | puStack_538[0x19] << 0x10 | puStack_538[0x1a] << 8 | puStack_538[0x1b];
        puVar13 = puStack_538 + 0x1c;
        uVar29 = *puVar13 << 0x18 | puStack_538[0x1d] << 0x10 | puStack_538[0x1e] << 8 | puStack_538[0x1f];
        puVar14 = puStack_538 + 0x20;
        uVar30 = *puVar14 << 0x18 | puStack_538[0x21] << 0x10 | puStack_538[0x22] << 8 | puStack_538[0x23];
        puVar15 = puStack_538 + 0x24;
        uVar31 = *puVar15 << 0x18 | puStack_538[0x25] << 0x10 | puStack_538[0x26] << 8 | puStack_538[0x27];
        puVar16 = puStack_538 + 0x28;
        uVar32 = *puVar16 << 0x18 | puStack_538[0x29] << 0x10 | puStack_538[0x2a] << 8 | puStack_538[0x2b];
        puVar17 = puStack_538 + 0x2c;
        uVar33 = *puVar17 << 0x18 | puStack_538[0x2d] << 0x10 | puStack_538[0x2e] << 8 | puStack_538[0x2f];
        puVar18 = puStack_538 + 0x30;
        uVar34 = *puVar18 << 0x18 | puStack_538[0x31] << 0x10 | puStack_538[0x32] << 8 | puStack_538[0x33];
        puVar19 = puStack_538 + 0x34;
        uVar35 = *puVar19 << 0x18 | puStack_538[0x35] << 0x10;
        uVar36 = uVar35 | puStack_538[0x36] << 8 | puStack_538[0x37];
        puVar20 = puStack_538 + 0x38;
        uVar37 = *puVar20 << 0x18 | puStack_538[0x39] << 0x10;
        uVar38 = uVar37 | puStack_538[0x3a] << 8 | puStack_538[0x3b];
        puVar21 = puStack_538 + 0x3c;
        uVar39 = *puVar21 << 0x18 | puStack_538[0x3d] << 0x10;
        uVar40 = uVar39 | puStack_538[0x3e] << 8 | puStack_538[0x3f];
        puStack_538 = puStack_538 + 0x40;
        uVar1 = uVar6 << 0xc | uVar6 >> 0x14;
        uVar2 = uVar1 + 0x79cc4519 + uVar7;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar1 = (uVar6 ^ uVar3 ^ *(arg1 + 8)) + *(arg1 + 0xc) + (uVar2 ^ uVar1) + (uVar22 ^ uVar26);
        uVar2 = (uVar7 ^ uVar4 ^ *(arg1 + 0x18)) + *(arg1 + 0x1c) + uVar2 + uVar22;
        uVar3 = uVar3 << 9 | uVar3 >> 0x17;
        uVar4 = uVar4 << 0x13 | uVar4 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar22 = uVar22 ^ uVar29 ^ (uVar36 << 0xf | uVar35 >> 0x11) ^
                 ((uVar22 ^ uVar29 ^ (uVar36 << 0xf | uVar35 >> 0x11)) << 0xf |
                 (uVar22 ^ uVar29 ^ uVar36 << 0xf) >> 0x11) ^
                 ((uVar22 ^ uVar29 ^ uVar35 >> 0x11) << 0x17 | (uVar22 ^ uVar29 ^ (uVar36 << 0xf | uVar35 >> 0x11)) >> 9
                 ) ^ (uVar25 << 7 | *puVar9 >> 1) ^ uVar32;
        uVar35 = uVar1 * 0x1000 | uVar1 >> 0x14;
        uVar2 = uVar35 + 0xf3988a32 + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar35 = (uVar1 ^ uVar6 ^ uVar3) + *(arg1 + 8) + (uVar2 ^ uVar35) + (uVar23 ^ uVar27);
        uVar2 = (uVar5 ^ uVar7 ^ uVar4) + *(arg1 + 0x18) + uVar2 + uVar23;
        uVar6 = uVar6 << 9 | uVar6 >> 0x17;
        uVar7 = uVar7 << 0x13 | uVar7 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar23 = uVar23 ^ uVar30 ^ (uVar38 << 0xf | uVar37 >> 0x11) ^
                 ((uVar23 ^ uVar30 ^ (uVar38 << 0xf | uVar37 >> 0x11)) << 0xf |
                 (uVar23 ^ uVar30 ^ uVar38 << 0xf) >> 0x11) ^
                 ((uVar23 ^ uVar30 ^ uVar37 >> 0x11) << 0x17 | (uVar23 ^ uVar30 ^ (uVar38 << 0xf | uVar37 >> 0x11)) >> 9
                 ) ^ (uVar26 << 7 | *puVar10 >> 1) ^ uVar33;
        uVar37 = uVar35 * 0x1000 | uVar35 >> 0x14;
        uVar2 = uVar37 + 0xe7311465 + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar3 = (uVar35 ^ uVar1 ^ uVar6) + uVar3 + (uVar2 ^ uVar37) + (uVar24 ^ uVar28);
        uVar2 = (uVar8 ^ uVar5 ^ uVar7) + uVar4 + uVar2 + uVar24;
        uVar4 = uVar1 * 0x200 | uVar1 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar37 = uVar24 ^ uVar31 ^ (uVar40 << 0xf | uVar39 >> 0x11) ^
                 ((uVar24 ^ uVar31 ^ (uVar40 << 0xf | uVar39 >> 0x11)) << 0xf |
                 (uVar24 ^ uVar31 ^ uVar40 << 0xf) >> 0x11) ^
                 ((uVar24 ^ uVar31 ^ uVar39 >> 0x11) << 0x17 | (uVar24 ^ uVar31 ^ (uVar40 << 0xf | uVar39 >> 0x11)) >> 9
                 ) ^ (uVar27 << 7 | *puVar11 >> 1) ^ uVar34;
        uVar24 = uVar3 * 0x1000 | uVar3 >> 0x14;
        uVar2 = uVar24 + 0xce6228cb + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar6 = (uVar3 ^ uVar35 ^ uVar4) + uVar6 + (uVar2 ^ uVar24) + (uVar25 ^ uVar29);
        uVar2 = (uVar5 ^ uVar8 ^ uVar1) + uVar7 + uVar2 + uVar25;
        uVar7 = uVar35 * 0x200 | uVar35 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar24 = uVar25 ^ uVar32 ^ (uVar22 << 0xf | uVar22 >> 0x11) ^
                 ((uVar25 ^ uVar32 ^ (uVar22 << 0xf | uVar22 >> 0x11)) << 0xf |
                 (uVar25 ^ uVar32 ^ uVar22 << 0xf) >> 0x11) ^
                 ((uVar25 ^ uVar32 ^ uVar22 >> 0x11) << 0x17 | (uVar25 ^ uVar32 ^ (uVar22 << 0xf | uVar22 >> 0x11)) >> 9
                 ) ^ (uVar28 << 7 | *puVar12 >> 1) ^ uVar36;
        uVar25 = uVar6 * 0x1000 | uVar6 >> 0x14;
        uVar2 = uVar25 + 0x9cc45197 + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar4 = (uVar6 ^ uVar3 ^ uVar7) + uVar4 + (uVar2 ^ uVar25) + (uVar26 ^ uVar30);
        uVar2 = (uVar8 ^ uVar5 ^ uVar35) + uVar1 + uVar2 + uVar26;
        uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar25 = uVar26 ^ uVar33 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^
                 ((uVar26 ^ uVar33 ^ (uVar23 << 0xf | uVar23 >> 0x11)) << 0xf |
                 (uVar26 ^ uVar33 ^ uVar23 << 0xf) >> 0x11) ^
                 ((uVar26 ^ uVar33 ^ uVar23 >> 0x11) << 0x17 | (uVar26 ^ uVar33 ^ (uVar23 << 0xf | uVar23 >> 0x11)) >> 9
                 ) ^ (uVar29 << 7 | *puVar13 >> 1) ^ uVar38;
        uVar26 = uVar4 * 0x1000 | uVar4 >> 0x14;
        uVar2 = uVar26 + 0x3988a32f + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar7 = (uVar4 ^ uVar6 ^ uVar3) + uVar7 + (uVar2 ^ uVar26) + (uVar27 ^ uVar31);
        uVar2 = (uVar5 ^ uVar8 ^ uVar1) + uVar35 + uVar2 + uVar27;
        uVar6 = uVar6 * 0x200 | uVar6 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar26 = uVar27 ^ uVar34 ^ (uVar37 << 0xf | uVar37 >> 0x11) ^
                 ((uVar27 ^ uVar34 ^ (uVar37 << 0xf | uVar37 >> 0x11)) << 0xf |
                 (uVar27 ^ uVar34 ^ uVar37 << 0xf) >> 0x11) ^
                 ((uVar27 ^ uVar34 ^ uVar37 >> 0x11) << 0x17 | (uVar27 ^ uVar34 ^ (uVar37 << 0xf | uVar37 >> 0x11)) >> 9
                 ) ^ (uVar30 << 7 | *puVar14 >> 1) ^ uVar40;
        uVar27 = uVar7 * 0x1000 | uVar7 >> 0x14;
        uVar2 = uVar27 + 0x7311465e + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar3 = (uVar7 ^ uVar4 ^ uVar6) + uVar3 + (uVar2 ^ uVar27) + (uVar28 ^ uVar32);
        uVar2 = (uVar8 ^ uVar5 ^ uVar35) + uVar1 + uVar2 + uVar28;
        uVar4 = uVar4 * 0x200 | uVar4 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar27 = uVar28 ^ uVar36 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^
                 ((uVar28 ^ uVar36 ^ (uVar24 << 0xf | uVar24 >> 0x11)) << 0xf |
                 (uVar28 ^ uVar36 ^ uVar24 << 0xf) >> 0x11) ^
                 ((uVar28 ^ uVar36 ^ uVar24 >> 0x11) << 0x17 | (uVar28 ^ uVar36 ^ (uVar24 << 0xf | uVar24 >> 0x11)) >> 9
                 ) ^ (uVar31 << 7 | *puVar15 >> 1) ^ uVar22;
        uVar28 = uVar3 * 0x1000 | uVar3 >> 0x14;
        uVar2 = uVar28 + 0xe6228cbc + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar6 = (uVar3 ^ uVar7 ^ uVar4) + uVar6 + (uVar2 ^ uVar28) + (uVar29 ^ uVar33);
        uVar2 = (uVar5 ^ uVar8 ^ uVar1) + uVar35 + uVar2 + uVar29;
        uVar7 = uVar7 * 0x200 | uVar7 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar28 = uVar29 ^ uVar38 ^ (uVar25 << 0xf | uVar25 >> 0x11) ^
                 ((uVar29 ^ uVar38 ^ (uVar25 << 0xf | uVar25 >> 0x11)) << 0xf |
                 (uVar29 ^ uVar38 ^ uVar25 << 0xf) >> 0x11) ^
                 ((uVar29 ^ uVar38 ^ uVar25 >> 0x11) << 0x17 | (uVar29 ^ uVar38 ^ (uVar25 << 0xf | uVar25 >> 0x11)) >> 9
                 ) ^ (uVar32 << 7 | *puVar16 >> 1) ^ uVar23;
        uVar29 = uVar6 * 0x1000 | uVar6 >> 0x14;
        uVar2 = uVar29 + 0xcc451979 + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar4 = (uVar6 ^ uVar3 ^ uVar7) + uVar4 + (uVar2 ^ uVar29) + (uVar30 ^ uVar34);
        uVar2 = (uVar8 ^ uVar5 ^ uVar35) + uVar1 + uVar2 + uVar30;
        uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar29 = uVar30 ^ uVar40 ^ (uVar26 << 0xf | uVar26 >> 0x11) ^
                 ((uVar30 ^ uVar40 ^ (uVar26 << 0xf | uVar26 >> 0x11)) << 0xf |
                 (uVar30 ^ uVar40 ^ uVar26 << 0xf) >> 0x11) ^
                 ((uVar30 ^ uVar40 ^ uVar26 >> 0x11) << 0x17 | (uVar30 ^ uVar40 ^ (uVar26 << 0xf | uVar26 >> 0x11)) >> 9
                 ) ^ (uVar33 << 7 | *puVar17 >> 1) ^ uVar37;
        uVar30 = uVar4 * 0x1000 | uVar4 >> 0x14;
        uVar2 = uVar30 + 0x988a32f3 + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar7 = (uVar4 ^ uVar6 ^ uVar3) + uVar7 + (uVar2 ^ uVar30) + (uVar31 ^ uVar36);
        uVar2 = (uVar5 ^ uVar8 ^ uVar1) + uVar35 + uVar2 + uVar31;
        uVar6 = uVar6 * 0x200 | uVar6 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar30 = uVar31 ^ uVar22 ^ (uVar27 << 0xf | uVar27 >> 0x11) ^
                 ((uVar31 ^ uVar22 ^ (uVar27 << 0xf | uVar27 >> 0x11)) << 0xf |
                 (uVar31 ^ uVar22 ^ uVar27 << 0xf) >> 0x11) ^
                 ((uVar31 ^ uVar22 ^ uVar27 >> 0x11) << 0x17 | (uVar31 ^ uVar22 ^ (uVar27 << 0xf | uVar27 >> 0x11)) >> 9
                 ) ^ (uVar34 << 7 | *puVar18 >> 1) ^ uVar24;
        uVar31 = uVar7 * 0x1000 | uVar7 >> 0x14;
        uVar2 = uVar31 + 0x311465e7 + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar3 = (uVar7 ^ uVar4 ^ uVar6) + uVar3 + (uVar2 ^ uVar31) + (uVar32 ^ uVar38);
        uVar2 = (uVar8 ^ uVar5 ^ uVar35) + uVar1 + uVar2 + uVar32;
        uVar4 = uVar4 * 0x200 | uVar4 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar31 = uVar32 ^ uVar23 ^ (uVar28 << 0xf | uVar28 >> 0x11) ^
                 ((uVar32 ^ uVar23 ^ (uVar28 << 0xf | uVar28 >> 0x11)) << 0xf |
                 (uVar32 ^ uVar23 ^ uVar28 << 0xf) >> 0x11) ^
                 ((uVar32 ^ uVar23 ^ uVar28 >> 0x11) << 0x17 | (uVar32 ^ uVar23 ^ (uVar28 << 0xf | uVar28 >> 0x11)) >> 9
                 ) ^ (uVar36 << 7 | *puVar19 >> 1) ^ uVar25;
        uVar32 = uVar3 * 0x1000 | uVar3 >> 0x14;
        uVar2 = uVar32 + 0x6228cbce + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar6 = (uVar3 ^ uVar7 ^ uVar4) + uVar6 + (uVar2 ^ uVar32) + (uVar33 ^ uVar40);
        uVar2 = (uVar5 ^ uVar8 ^ uVar1) + uVar35 + uVar2 + uVar33;
        uVar7 = uVar7 * 0x200 | uVar7 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar32 = uVar33 ^ uVar37 ^ (uVar29 << 0xf | uVar29 >> 0x11) ^
                 ((uVar33 ^ uVar37 ^ (uVar29 << 0xf | uVar29 >> 0x11)) << 0xf |
                 (uVar33 ^ uVar37 ^ uVar29 << 0xf) >> 0x11) ^
                 ((uVar33 ^ uVar37 ^ uVar29 >> 0x11) << 0x17 | (uVar33 ^ uVar37 ^ (uVar29 << 0xf | uVar29 >> 0x11)) >> 9
                 ) ^ (uVar38 << 7 | *puVar20 >> 1) ^ uVar26;
        uVar33 = uVar6 * 0x1000 | uVar6 >> 0x14;
        uVar2 = uVar33 + 0xc451979c + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar4 = (uVar6 ^ uVar3 ^ uVar7) + uVar4 + (uVar2 ^ uVar33) + (uVar34 ^ uVar22);
        uVar2 = (uVar8 ^ uVar5 ^ uVar35) + uVar1 + uVar2 + uVar34;
        uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar33 = uVar34 ^ uVar24 ^ (uVar30 << 0xf | uVar30 >> 0x11) ^
                 ((uVar34 ^ uVar24 ^ (uVar30 << 0xf | uVar30 >> 0x11)) << 0xf |
                 (uVar34 ^ uVar24 ^ uVar30 << 0xf) >> 0x11) ^
                 ((uVar34 ^ uVar24 ^ uVar30 >> 0x11) << 0x17 | (uVar34 ^ uVar24 ^ (uVar30 << 0xf | uVar30 >> 0x11)) >> 9
                 ) ^ (uVar40 << 7 | *puVar21 >> 1) ^ uVar27;
        uVar34 = uVar4 * 0x1000 | uVar4 >> 0x14;
        uVar2 = uVar34 + 0x88a32f39 + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar7 = (uVar4 ^ uVar6 ^ uVar3) + uVar7 + (uVar2 ^ uVar34) + (uVar36 ^ uVar23);
        uVar2 = (uVar5 ^ uVar8 ^ uVar1) + uVar35 + uVar2 + uVar36;
        uVar6 = uVar6 * 0x200 | uVar6 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar34 = uVar36 ^ uVar25 ^ (uVar31 << 0xf | uVar31 >> 0x11) ^
                 ((uVar36 ^ uVar25 ^ (uVar31 << 0xf | uVar31 >> 0x11)) << 0xf |
                 (uVar36 ^ uVar25 ^ uVar31 << 0xf) >> 0x11) ^
                 ((uVar36 ^ uVar25 ^ uVar31 >> 0x11) << 0x17 | (uVar36 ^ uVar25 ^ (uVar31 << 0xf | uVar31 >> 0x11)) >> 9
                 ) ^ (uVar22 << 7 | uVar22 >> 0x19) ^ uVar28;
        uVar36 = uVar7 * 0x1000 | uVar7 >> 0x14;
        uVar2 = uVar36 + 0x11465e73 + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar3 = (uVar7 ^ uVar4 ^ uVar6) + uVar3 + (uVar2 ^ uVar36) + (uVar38 ^ uVar37);
        uVar2 = (uVar8 ^ uVar5 ^ uVar35) + uVar1 + uVar2 + uVar38;
        uVar4 = uVar4 * 0x200 | uVar4 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar36 = uVar38 ^ uVar26 ^ (uVar32 << 0xf | uVar32 >> 0x11) ^
                 ((uVar38 ^ uVar26 ^ (uVar32 << 0xf | uVar32 >> 0x11)) << 0xf |
                 (uVar38 ^ uVar26 ^ uVar32 << 0xf) >> 0x11) ^
                 ((uVar38 ^ uVar26 ^ uVar32 >> 0x11) << 0x17 | (uVar38 ^ uVar26 ^ (uVar32 << 0xf | uVar32 >> 0x11)) >> 9
                 ) ^ (uVar23 << 7 | uVar23 >> 0x19) ^ uVar29;
        uVar38 = uVar3 * 0x1000 | uVar3 >> 0x14;
        uVar2 = uVar38 + 0x228cbce6 + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar6 = (uVar3 ^ uVar7 ^ uVar4) + uVar6 + (uVar2 ^ uVar38) + (uVar40 ^ uVar24);
        uVar2 = (uVar5 ^ uVar8 ^ uVar1) + uVar35 + uVar2 + uVar40;
        uVar7 = uVar7 * 0x200 | uVar7 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar38 = uVar40 ^ uVar27 ^ (uVar33 << 0xf | uVar33 >> 0x11) ^
                 ((uVar40 ^ uVar27 ^ (uVar33 << 0xf | uVar33 >> 0x11)) << 0xf |
                 (uVar40 ^ uVar27 ^ uVar33 << 0xf) >> 0x11) ^
                 ((uVar40 ^ uVar27 ^ uVar33 >> 0x11) << 0x17 | (uVar40 ^ uVar27 ^ (uVar33 << 0xf | uVar33 >> 0x11)) >> 9
                 ) ^ (uVar37 << 7 | uVar37 >> 0x19) ^ uVar30;
        uVar39 = uVar6 * 0x1000 | uVar6 >> 0x14;
        uVar2 = uVar39 + 0x9d8a7a87 + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar4 = (uVar6 & uVar3 | (uVar6 | uVar3) & uVar7) + uVar4 + (uVar2 ^ uVar39) + (uVar22 ^ uVar25);
        uVar2 = (uVar35 ^ uVar8 & (uVar5 ^ uVar35)) + uVar1 + uVar2 + uVar22;
        uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar22 = uVar22 ^ uVar28 ^ (uVar34 << 0xf | uVar34 >> 0x11) ^
                 ((uVar22 ^ uVar28 ^ (uVar34 << 0xf | uVar34 >> 0x11)) << 0xf |
                 (uVar22 ^ uVar28 ^ uVar34 << 0xf) >> 0x11) ^
                 ((uVar22 ^ uVar28 ^ uVar34 >> 0x11) << 0x17 | (uVar22 ^ uVar28 ^ (uVar34 << 0xf | uVar34 >> 0x11)) >> 9
                 ) ^ (uVar24 << 7 | uVar24 >> 0x19) ^ uVar31;
        uVar39 = uVar4 * 0x1000 | uVar4 >> 0x14;
        uVar2 = uVar39 + 0x3b14f50f + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar7 = (uVar4 & uVar6 | (uVar4 | uVar6) & uVar3) + uVar7 + (uVar2 ^ uVar39) + (uVar23 ^ uVar26);
        uVar2 = (uVar1 ^ uVar5 & (uVar8 ^ uVar1)) + uVar35 + uVar2 + uVar23;
        uVar6 = uVar6 * 0x200 | uVar6 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar23 = uVar23 ^ uVar29 ^ (uVar36 << 0xf | uVar36 >> 0x11) ^
                 ((uVar23 ^ uVar29 ^ (uVar36 << 0xf | uVar36 >> 0x11)) << 0xf |
                 (uVar23 ^ uVar29 ^ uVar36 << 0xf) >> 0x11) ^
                 ((uVar23 ^ uVar29 ^ uVar36 >> 0x11) << 0x17 | (uVar23 ^ uVar29 ^ (uVar36 << 0xf | uVar36 >> 0x11)) >> 9
                 ) ^ (uVar25 << 7 | uVar25 >> 0x19) ^ uVar32;
        uVar39 = uVar7 * 0x1000 | uVar7 >> 0x14;
        uVar2 = uVar39 + 0x7629ea1e + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar3 = (uVar7 & uVar4 | (uVar7 | uVar4) & uVar6) + uVar3 + (uVar2 ^ uVar39) + (uVar37 ^ uVar27);
        uVar2 = (uVar35 ^ uVar8 & (uVar5 ^ uVar35)) + uVar1 + uVar2 + uVar37;
        uVar4 = uVar4 * 0x200 | uVar4 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar37 = uVar37 ^ uVar30 ^ (uVar38 << 0xf | uVar38 >> 0x11) ^
                 ((uVar37 ^ uVar30 ^ (uVar38 << 0xf | uVar38 >> 0x11)) << 0xf |
                 (uVar37 ^ uVar30 ^ uVar38 << 0xf) >> 0x11) ^
                 ((uVar37 ^ uVar30 ^ uVar38 >> 0x11) << 0x17 | (uVar37 ^ uVar30 ^ (uVar38 << 0xf | uVar38 >> 0x11)) >> 9
                 ) ^ (uVar26 << 7 | uVar26 >> 0x19) ^ uVar33;
        uVar39 = uVar3 * 0x1000 | uVar3 >> 0x14;
        uVar2 = uVar39 + 0xec53d43c + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar6 = (uVar3 & uVar7 | (uVar3 | uVar7) & uVar4) + uVar6 + (uVar2 ^ uVar39) + (uVar24 ^ uVar28);
        uVar2 = (uVar1 ^ uVar5 & (uVar8 ^ uVar1)) + uVar35 + uVar2 + uVar24;
        uVar7 = uVar7 * 0x200 | uVar7 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar24 = uVar24 ^ uVar31 ^ (uVar22 << 0xf | uVar22 >> 0x11) ^
                 ((uVar24 ^ uVar31 ^ (uVar22 << 0xf | uVar22 >> 0x11)) << 0xf |
                 (uVar24 ^ uVar31 ^ uVar22 << 0xf) >> 0x11) ^
                 ((uVar24 ^ uVar31 ^ uVar22 >> 0x11) << 0x17 | (uVar24 ^ uVar31 ^ (uVar22 << 0xf | uVar22 >> 0x11)) >> 9
                 ) ^ (uVar27 << 7 | uVar27 >> 0x19) ^ uVar34;
        uVar39 = uVar6 * 0x1000 | uVar6 >> 0x14;
        uVar2 = uVar39 + 0xd8a7a879 + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar4 = (uVar6 & uVar3 | (uVar6 | uVar3) & uVar7) + uVar4 + (uVar2 ^ uVar39) + (uVar25 ^ uVar29);
        uVar2 = (uVar35 ^ uVar8 & (uVar5 ^ uVar35)) + uVar1 + uVar2 + uVar25;
        uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar25 = uVar25 ^ uVar32 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^
                 ((uVar25 ^ uVar32 ^ (uVar23 << 0xf | uVar23 >> 0x11)) << 0xf |
                 (uVar25 ^ uVar32 ^ uVar23 << 0xf) >> 0x11) ^
                 ((uVar25 ^ uVar32 ^ uVar23 >> 0x11) << 0x17 | (uVar25 ^ uVar32 ^ (uVar23 << 0xf | uVar23 >> 0x11)) >> 9
                 ) ^ (uVar28 << 7 | uVar28 >> 0x19) ^ uVar36;
        uVar39 = uVar4 * 0x1000 | uVar4 >> 0x14;
        uVar2 = uVar39 + 0xb14f50f3 + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar7 = (uVar4 & uVar6 | (uVar4 | uVar6) & uVar3) + uVar7 + (uVar2 ^ uVar39) + (uVar26 ^ uVar30);
        uVar2 = (uVar1 ^ uVar5 & (uVar8 ^ uVar1)) + uVar35 + uVar2 + uVar26;
        uVar6 = uVar6 * 0x200 | uVar6 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar26 = uVar26 ^ uVar33 ^ (uVar37 << 0xf | uVar37 >> 0x11) ^
                 ((uVar26 ^ uVar33 ^ (uVar37 << 0xf | uVar37 >> 0x11)) << 0xf |
                 (uVar26 ^ uVar33 ^ uVar37 << 0xf) >> 0x11) ^
                 ((uVar26 ^ uVar33 ^ uVar37 >> 0x11) << 0x17 | (uVar26 ^ uVar33 ^ (uVar37 << 0xf | uVar37 >> 0x11)) >> 9
                 ) ^ (uVar29 << 7 | uVar29 >> 0x19) ^ uVar38;
        uVar39 = uVar7 * 0x1000 | uVar7 >> 0x14;
        uVar2 = uVar39 + 0x629ea1e7 + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar3 = (uVar7 & uVar4 | (uVar7 | uVar4) & uVar6) + uVar3 + (uVar2 ^ uVar39) + (uVar27 ^ uVar31);
        uVar2 = (uVar35 ^ uVar8 & (uVar5 ^ uVar35)) + uVar1 + uVar2 + uVar27;
        uVar4 = uVar4 * 0x200 | uVar4 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar27 = uVar27 ^ uVar34 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^
                 ((uVar27 ^ uVar34 ^ (uVar24 << 0xf | uVar24 >> 0x11)) << 0xf |
                 (uVar27 ^ uVar34 ^ uVar24 << 0xf) >> 0x11) ^
                 ((uVar27 ^ uVar34 ^ uVar24 >> 0x11) << 0x17 | (uVar27 ^ uVar34 ^ (uVar24 << 0xf | uVar24 >> 0x11)) >> 9
                 ) ^ (uVar30 << 7 | uVar30 >> 0x19) ^ uVar22;
        uVar39 = uVar3 * 0x1000 | uVar3 >> 0x14;
        uVar2 = uVar39 + 0xc53d43ce + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar6 = (uVar3 & uVar7 | (uVar3 | uVar7) & uVar4) + uVar6 + (uVar2 ^ uVar39) + (uVar28 ^ uVar32);
        uVar2 = (uVar1 ^ uVar5 & (uVar8 ^ uVar1)) + uVar35 + uVar2 + uVar28;
        uVar7 = uVar7 * 0x200 | uVar7 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar28 = uVar28 ^ uVar36 ^ (uVar25 << 0xf | uVar25 >> 0x11) ^
                 ((uVar28 ^ uVar36 ^ (uVar25 << 0xf | uVar25 >> 0x11)) << 0xf |
                 (uVar28 ^ uVar36 ^ uVar25 << 0xf) >> 0x11) ^
                 ((uVar28 ^ uVar36 ^ uVar25 >> 0x11) << 0x17 | (uVar28 ^ uVar36 ^ (uVar25 << 0xf | uVar25 >> 0x11)) >> 9
                 ) ^ (uVar31 << 7 | uVar31 >> 0x19) ^ uVar23;
        uVar39 = uVar6 * 0x1000 | uVar6 >> 0x14;
        uVar2 = uVar39 + 0x8a7a879d + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar4 = (uVar6 & uVar3 | (uVar6 | uVar3) & uVar7) + uVar4 + (uVar2 ^ uVar39) + (uVar29 ^ uVar33);
        uVar2 = (uVar35 ^ uVar8 & (uVar5 ^ uVar35)) + uVar1 + uVar2 + uVar29;
        uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar29 = uVar29 ^ uVar38 ^ (uVar26 << 0xf | uVar26 >> 0x11) ^
                 ((uVar29 ^ uVar38 ^ (uVar26 << 0xf | uVar26 >> 0x11)) << 0xf |
                 (uVar29 ^ uVar38 ^ uVar26 << 0xf) >> 0x11) ^
                 ((uVar29 ^ uVar38 ^ uVar26 >> 0x11) << 0x17 | (uVar29 ^ uVar38 ^ (uVar26 << 0xf | uVar26 >> 0x11)) >> 9
                 ) ^ (uVar32 << 7 | uVar32 >> 0x19) ^ uVar37;
        uVar39 = uVar4 * 0x1000 | uVar4 >> 0x14;
        uVar2 = uVar39 + 0x14f50f3b + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar7 = (uVar4 & uVar6 | (uVar4 | uVar6) & uVar3) + uVar7 + (uVar2 ^ uVar39) + (uVar30 ^ uVar34);
        uVar2 = (uVar1 ^ uVar5 & (uVar8 ^ uVar1)) + uVar35 + uVar2 + uVar30;
        uVar6 = uVar6 * 0x200 | uVar6 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar30 = uVar30 ^ uVar22 ^ (uVar27 << 0xf | uVar27 >> 0x11) ^
                 ((uVar30 ^ uVar22 ^ (uVar27 << 0xf | uVar27 >> 0x11)) << 0xf |
                 (uVar30 ^ uVar22 ^ uVar27 << 0xf) >> 0x11) ^
                 ((uVar30 ^ uVar22 ^ uVar27 >> 0x11) << 0x17 | (uVar30 ^ uVar22 ^ (uVar27 << 0xf | uVar27 >> 0x11)) >> 9
                 ) ^ (uVar33 << 7 | uVar33 >> 0x19) ^ uVar24;
        uVar39 = uVar7 * 0x1000 | uVar7 >> 0x14;
        uVar2 = uVar39 + 0x29ea1e76 + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar3 = (uVar7 & uVar4 | (uVar7 | uVar4) & uVar6) + uVar3 + (uVar2 ^ uVar39) + (uVar31 ^ uVar36);
        uVar2 = (uVar35 ^ uVar8 & (uVar5 ^ uVar35)) + uVar1 + uVar2 + uVar31;
        uVar4 = uVar4 * 0x200 | uVar4 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar31 = uVar31 ^ uVar23 ^ (uVar28 << 0xf | uVar28 >> 0x11) ^
                 ((uVar31 ^ uVar23 ^ (uVar28 << 0xf | uVar28 >> 0x11)) << 0xf |
                 (uVar31 ^ uVar23 ^ uVar28 << 0xf) >> 0x11) ^
                 ((uVar31 ^ uVar23 ^ uVar28 >> 0x11) << 0x17 | (uVar31 ^ uVar23 ^ (uVar28 << 0xf | uVar28 >> 0x11)) >> 9
                 ) ^ (uVar34 << 7 | uVar34 >> 0x19) ^ uVar25;
        uVar39 = uVar3 * 0x1000 | uVar3 >> 0x14;
        uVar2 = uVar39 + 0x53d43cec + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar6 = (uVar3 & uVar7 | (uVar3 | uVar7) & uVar4) + uVar6 + (uVar2 ^ uVar39) + (uVar32 ^ uVar38);
        uVar2 = (uVar1 ^ uVar5 & (uVar8 ^ uVar1)) + uVar35 + uVar2 + uVar32;
        uVar7 = uVar7 * 0x200 | uVar7 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar32 = uVar32 ^ uVar37 ^ (uVar29 << 0xf | uVar29 >> 0x11) ^
                 ((uVar32 ^ uVar37 ^ (uVar29 << 0xf | uVar29 >> 0x11)) << 0xf |
                 (uVar32 ^ uVar37 ^ uVar29 << 0xf) >> 0x11) ^
                 ((uVar32 ^ uVar37 ^ uVar29 >> 0x11) << 0x17 | (uVar32 ^ uVar37 ^ (uVar29 << 0xf | uVar29 >> 0x11)) >> 9
                 ) ^ (uVar36 << 7 | uVar36 >> 0x19) ^ uVar26;
        uVar39 = uVar6 * 0x1000 | uVar6 >> 0x14;
        uVar2 = uVar39 + 0xa7a879d8 + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar4 = (uVar6 & uVar3 | (uVar6 | uVar3) & uVar7) + uVar4 + (uVar2 ^ uVar39) + (uVar33 ^ uVar22);
        uVar2 = (uVar35 ^ uVar8 & (uVar5 ^ uVar35)) + uVar1 + uVar2 + uVar33;
        uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar33 = uVar33 ^ uVar24 ^ (uVar30 << 0xf | uVar30 >> 0x11) ^
                 ((uVar33 ^ uVar24 ^ (uVar30 << 0xf | uVar30 >> 0x11)) << 0xf |
                 (uVar33 ^ uVar24 ^ uVar30 << 0xf) >> 0x11) ^
                 ((uVar33 ^ uVar24 ^ uVar30 >> 0x11) << 0x17 | (uVar33 ^ uVar24 ^ (uVar30 << 0xf | uVar30 >> 0x11)) >> 9
                 ) ^ (uVar38 << 7 | uVar38 >> 0x19) ^ uVar27;
        uVar39 = uVar4 * 0x1000 | uVar4 >> 0x14;
        uVar2 = uVar39 + 0x4f50f3b1 + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar7 = (uVar4 & uVar6 | (uVar4 | uVar6) & uVar3) + uVar7 + (uVar2 ^ uVar39) + (uVar34 ^ uVar23);
        uVar2 = (uVar1 ^ uVar5 & (uVar8 ^ uVar1)) + uVar35 + uVar2 + uVar34;
        uVar6 = uVar6 * 0x200 | uVar6 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar34 = uVar34 ^ uVar25 ^ (uVar31 << 0xf | uVar31 >> 0x11) ^
                 ((uVar34 ^ uVar25 ^ (uVar31 << 0xf | uVar31 >> 0x11)) << 0xf |
                 (uVar34 ^ uVar25 ^ uVar31 << 0xf) >> 0x11) ^
                 ((uVar34 ^ uVar25 ^ uVar31 >> 0x11) << 0x17 | (uVar34 ^ uVar25 ^ (uVar31 << 0xf | uVar31 >> 0x11)) >> 9
                 ) ^ (uVar22 << 7 | uVar22 >> 0x19) ^ uVar28;
        uVar39 = uVar7 * 0x1000 | uVar7 >> 0x14;
        uVar2 = uVar39 + 0x9ea1e762 + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar3 = (uVar7 & uVar4 | (uVar7 | uVar4) & uVar6) + uVar3 + (uVar2 ^ uVar39) + (uVar36 ^ uVar37);
        uVar2 = (uVar35 ^ uVar8 & (uVar5 ^ uVar35)) + uVar1 + uVar2 + uVar36;
        uVar4 = uVar4 * 0x200 | uVar4 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar36 = uVar36 ^ uVar26 ^ (uVar32 << 0xf | uVar32 >> 0x11) ^
                 ((uVar36 ^ uVar26 ^ (uVar32 << 0xf | uVar32 >> 0x11)) << 0xf |
                 (uVar36 ^ uVar26 ^ uVar32 << 0xf) >> 0x11) ^
                 ((uVar36 ^ uVar26 ^ uVar32 >> 0x11) << 0x17 | (uVar36 ^ uVar26 ^ (uVar32 << 0xf | uVar32 >> 0x11)) >> 9
                 ) ^ (uVar23 << 7 | uVar23 >> 0x19) ^ uVar29;
        uVar39 = uVar3 * 0x1000 | uVar3 >> 0x14;
        uVar2 = uVar39 + 0x3d43cec5 + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar6 = (uVar3 & uVar7 | (uVar3 | uVar7) & uVar4) + uVar6 + (uVar2 ^ uVar39) + (uVar38 ^ uVar24);
        uVar2 = (uVar1 ^ uVar5 & (uVar8 ^ uVar1)) + uVar35 + uVar2 + uVar38;
        uVar7 = uVar7 * 0x200 | uVar7 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar38 = uVar38 ^ uVar27 ^ (uVar33 << 0xf | uVar33 >> 0x11) ^
                 ((uVar38 ^ uVar27 ^ (uVar33 << 0xf | uVar33 >> 0x11)) << 0xf |
                 (uVar38 ^ uVar27 ^ uVar33 << 0xf) >> 0x11) ^
                 ((uVar38 ^ uVar27 ^ uVar33 >> 0x11) << 0x17 | (uVar38 ^ uVar27 ^ (uVar33 << 0xf | uVar33 >> 0x11)) >> 9
                 ) ^ (uVar37 << 7 | uVar37 >> 0x19) ^ uVar30;
        uVar39 = uVar6 * 0x1000 | uVar6 >> 0x14;
        uVar2 = uVar39 + 0x7a879d8a + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar4 = (uVar6 & uVar3 | (uVar6 | uVar3) & uVar7) + uVar4 + (uVar2 ^ uVar39) + (uVar22 ^ uVar25);
        uVar2 = (uVar35 ^ uVar8 & (uVar5 ^ uVar35)) + uVar1 + uVar2 + uVar22;
        uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar22 = uVar22 ^ uVar28 ^ (uVar34 << 0xf | uVar34 >> 0x11) ^
                 ((uVar22 ^ uVar28 ^ (uVar34 << 0xf | uVar34 >> 0x11)) << 0xf |
                 (uVar22 ^ uVar28 ^ uVar34 << 0xf) >> 0x11) ^
                 ((uVar22 ^ uVar28 ^ uVar34 >> 0x11) << 0x17 | (uVar22 ^ uVar28 ^ (uVar34 << 0xf | uVar34 >> 0x11)) >> 9
                 ) ^ (uVar24 << 7 | uVar24 >> 0x19) ^ uVar31;
        uVar39 = uVar4 * 0x1000 | uVar4 >> 0x14;
        uVar2 = uVar39 + 0xf50f3b14 + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar7 = (uVar4 & uVar6 | (uVar4 | uVar6) & uVar3) + uVar7 + (uVar2 ^ uVar39) + (uVar23 ^ uVar26);
        uVar2 = (uVar1 ^ uVar5 & (uVar8 ^ uVar1)) + uVar35 + uVar2 + uVar23;
        uVar6 = uVar6 * 0x200 | uVar6 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar23 = uVar23 ^ uVar29 ^ (uVar36 << 0xf | uVar36 >> 0x11) ^
                 ((uVar23 ^ uVar29 ^ (uVar36 << 0xf | uVar36 >> 0x11)) << 0xf |
                 (uVar23 ^ uVar29 ^ uVar36 << 0xf) >> 0x11) ^
                 ((uVar23 ^ uVar29 ^ uVar36 >> 0x11) << 0x17 | (uVar23 ^ uVar29 ^ (uVar36 << 0xf | uVar36 >> 0x11)) >> 9
                 ) ^ (uVar25 << 7 | uVar25 >> 0x19) ^ uVar32;
        uVar39 = uVar7 * 0x1000 | uVar7 >> 0x14;
        uVar2 = uVar39 + 0xea1e7629 + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar3 = (uVar7 & uVar4 | (uVar7 | uVar4) & uVar6) + uVar3 + (uVar2 ^ uVar39) + (uVar37 ^ uVar27);
        uVar2 = (uVar35 ^ uVar8 & (uVar5 ^ uVar35)) + uVar1 + uVar2 + uVar37;
        uVar4 = uVar4 * 0x200 | uVar4 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar37 = uVar37 ^ uVar30 ^ (uVar38 << 0xf | uVar38 >> 0x11) ^
                 ((uVar37 ^ uVar30 ^ (uVar38 << 0xf | uVar38 >> 0x11)) << 0xf |
                 (uVar37 ^ uVar30 ^ uVar38 << 0xf) >> 0x11) ^
                 ((uVar37 ^ uVar30 ^ uVar38 >> 0x11) << 0x17 | (uVar37 ^ uVar30 ^ (uVar38 << 0xf | uVar38 >> 0x11)) >> 9
                 ) ^ (uVar26 << 7 | uVar26 >> 0x19) ^ uVar33;
        uVar39 = uVar3 * 0x1000 | uVar3 >> 0x14;
        uVar2 = uVar39 + 0xd43cec53 + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar6 = (uVar3 & uVar7 | (uVar3 | uVar7) & uVar4) + uVar6 + (uVar2 ^ uVar39) + (uVar24 ^ uVar28);
        uVar2 = (uVar1 ^ uVar5 & (uVar8 ^ uVar1)) + uVar35 + uVar2 + uVar24;
        uVar7 = uVar7 * 0x200 | uVar7 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar24 = uVar24 ^ uVar31 ^ (uVar22 << 0xf | uVar22 >> 0x11) ^
                 ((uVar24 ^ uVar31 ^ (uVar22 << 0xf | uVar22 >> 0x11)) << 0xf |
                 (uVar24 ^ uVar31 ^ uVar22 << 0xf) >> 0x11) ^
                 ((uVar24 ^ uVar31 ^ uVar22 >> 0x11) << 0x17 | (uVar24 ^ uVar31 ^ (uVar22 << 0xf | uVar22 >> 0x11)) >> 9
                 ) ^ (uVar27 << 7 | uVar27 >> 0x19) ^ uVar34;
        uVar39 = uVar6 * 0x1000 | uVar6 >> 0x14;
        uVar2 = uVar39 + 0xa879d8a7 + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar4 = (uVar6 & uVar3 | (uVar6 | uVar3) & uVar7) + uVar4 + (uVar2 ^ uVar39) + (uVar25 ^ uVar29);
        uVar2 = (uVar35 ^ uVar8 & (uVar5 ^ uVar35)) + uVar1 + uVar2 + uVar25;
        uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar25 = uVar25 ^ uVar32 ^ (uVar23 << 0xf | uVar23 >> 0x11) ^
                 ((uVar25 ^ uVar32 ^ (uVar23 << 0xf | uVar23 >> 0x11)) << 0xf |
                 (uVar25 ^ uVar32 ^ uVar23 << 0xf) >> 0x11) ^
                 ((uVar25 ^ uVar32 ^ uVar23 >> 0x11) << 0x17 | (uVar25 ^ uVar32 ^ (uVar23 << 0xf | uVar23 >> 0x11)) >> 9
                 ) ^ (uVar28 << 7 | uVar28 >> 0x19) ^ uVar36;
        uVar39 = uVar4 * 0x1000 | uVar4 >> 0x14;
        uVar2 = uVar39 + 0x50f3b14f + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar7 = (uVar4 & uVar6 | (uVar4 | uVar6) & uVar3) + uVar7 + (uVar2 ^ uVar39) + (uVar26 ^ uVar30);
        uVar2 = (uVar1 ^ uVar5 & (uVar8 ^ uVar1)) + uVar35 + uVar2 + uVar26;
        uVar6 = uVar6 * 0x200 | uVar6 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar26 = uVar26 ^ uVar33 ^ (uVar37 << 0xf | uVar37 >> 0x11) ^
                 ((uVar26 ^ uVar33 ^ (uVar37 << 0xf | uVar37 >> 0x11)) << 0xf |
                 (uVar26 ^ uVar33 ^ uVar37 << 0xf) >> 0x11) ^
                 ((uVar26 ^ uVar33 ^ uVar37 >> 0x11) << 0x17 | (uVar26 ^ uVar33 ^ (uVar37 << 0xf | uVar37 >> 0x11)) >> 9
                 ) ^ (uVar29 << 7 | uVar29 >> 0x19) ^ uVar38;
        uVar39 = uVar7 * 0x1000 | uVar7 >> 0x14;
        uVar2 = uVar39 + 0xa1e7629e + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar3 = (uVar7 & uVar4 | (uVar7 | uVar4) & uVar6) + uVar3 + (uVar2 ^ uVar39) + (uVar27 ^ uVar31);
        uVar2 = (uVar35 ^ uVar8 & (uVar5 ^ uVar35)) + uVar1 + uVar2 + uVar27;
        uVar4 = uVar4 * 0x200 | uVar4 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar27 = uVar27 ^ uVar34 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^
                 ((uVar27 ^ uVar34 ^ (uVar24 << 0xf | uVar24 >> 0x11)) << 0xf |
                 (uVar27 ^ uVar34 ^ uVar24 << 0xf) >> 0x11) ^
                 ((uVar27 ^ uVar34 ^ uVar24 >> 0x11) << 0x17 | (uVar27 ^ uVar34 ^ (uVar24 << 0xf | uVar24 >> 0x11)) >> 9
                 ) ^ (uVar30 << 7 | uVar30 >> 0x19) ^ uVar22;
        uVar39 = uVar3 * 0x1000 | uVar3 >> 0x14;
        uVar2 = uVar39 + 0x43cec53d + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar6 = (uVar3 & uVar7 | (uVar3 | uVar7) & uVar4) + uVar6 + (uVar2 ^ uVar39) + (uVar28 ^ uVar32);
        uVar2 = (uVar1 ^ uVar5 & (uVar8 ^ uVar1)) + uVar35 + uVar2 + uVar28;
        uVar7 = uVar7 * 0x200 | uVar7 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar39 = uVar28 ^ uVar36 ^ (uVar25 << 0xf | uVar25 >> 0x11) ^
                 ((uVar28 ^ uVar36 ^ (uVar25 << 0xf | uVar25 >> 0x11)) << 0xf |
                 (uVar28 ^ uVar36 ^ uVar25 << 0xf) >> 0x11) ^
                 ((uVar28 ^ uVar36 ^ uVar25 >> 0x11) << 0x17 | (uVar28 ^ uVar36 ^ (uVar25 << 0xf | uVar25 >> 0x11)) >> 9
                 ) ^ (uVar31 << 7 | uVar31 >> 0x19) ^ uVar23;
        uVar28 = uVar6 * 0x1000 | uVar6 >> 0x14;
        uVar2 = uVar28 + 0x879d8a7a + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar4 = (uVar6 & uVar3 | (uVar6 | uVar3) & uVar7) + uVar4 + (uVar2 ^ uVar28) + (uVar29 ^ uVar33);
        uVar2 = (uVar35 ^ uVar8 & (uVar5 ^ uVar35)) + uVar1 + uVar2 + uVar29;
        uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar28 = uVar29 ^ uVar38 ^ (uVar26 << 0xf | uVar26 >> 0x11) ^
                 ((uVar29 ^ uVar38 ^ (uVar26 << 0xf | uVar26 >> 0x11)) << 0xf |
                 (uVar29 ^ uVar38 ^ uVar26 << 0xf) >> 0x11) ^
                 ((uVar29 ^ uVar38 ^ uVar26 >> 0x11) << 0x17 | (uVar29 ^ uVar38 ^ (uVar26 << 0xf | uVar26 >> 0x11)) >> 9
                 ) ^ (uVar32 << 7 | uVar32 >> 0x19) ^ uVar37;
        uVar29 = uVar4 * 0x1000 | uVar4 >> 0x14;
        uVar2 = uVar29 + 0xf3b14f5 + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar7 = (uVar4 & uVar6 | (uVar4 | uVar6) & uVar3) + uVar7 + (uVar2 ^ uVar29) + (uVar30 ^ uVar34);
        uVar2 = (uVar1 ^ uVar5 & (uVar8 ^ uVar1)) + uVar35 + uVar2 + uVar30;
        uVar6 = uVar6 * 0x200 | uVar6 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar29 = uVar30 ^ uVar22 ^ (uVar27 << 0xf | uVar27 >> 0x11) ^
                 ((uVar30 ^ uVar22 ^ (uVar27 << 0xf | uVar27 >> 0x11)) << 0xf |
                 (uVar30 ^ uVar22 ^ uVar27 << 0xf) >> 0x11) ^
                 ((uVar30 ^ uVar22 ^ uVar27 >> 0x11) << 0x17 | (uVar30 ^ uVar22 ^ (uVar27 << 0xf | uVar27 >> 0x11)) >> 9
                 ) ^ (uVar33 << 7 | uVar33 >> 0x19) ^ uVar24;
        uVar30 = uVar7 * 0x1000 | uVar7 >> 0x14;
        uVar2 = uVar30 + 0x1e7629ea + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar3 = (uVar7 & uVar4 | (uVar7 | uVar4) & uVar6) + uVar3 + (uVar2 ^ uVar30) + (uVar31 ^ uVar36);
        uVar2 = (uVar35 ^ uVar8 & (uVar5 ^ uVar35)) + uVar1 + uVar2 + uVar31;
        uVar4 = uVar4 * 0x200 | uVar4 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar30 = uVar31 ^ uVar23 ^ (uVar39 << 0xf | uVar39 >> 0x11) ^
                 ((uVar31 ^ uVar23 ^ (uVar39 << 0xf | uVar39 >> 0x11)) << 0xf |
                 (uVar31 ^ uVar23 ^ uVar39 << 0xf) >> 0x11) ^
                 ((uVar31 ^ uVar23 ^ uVar39 >> 0x11) << 0x17 | (uVar31 ^ uVar23 ^ (uVar39 << 0xf | uVar39 >> 0x11)) >> 9
                 ) ^ (uVar34 << 7 | uVar34 >> 0x19) ^ uVar25;
        uVar31 = uVar3 * 0x1000 | uVar3 >> 0x14;
        uVar2 = uVar31 + 0x3cec53d4 + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar6 = (uVar3 & uVar7 | (uVar3 | uVar7) & uVar4) + uVar6 + (uVar2 ^ uVar31) + (uVar32 ^ uVar38);
        uVar2 = (uVar1 ^ uVar5 & (uVar8 ^ uVar1)) + uVar35 + uVar2 + uVar32;
        uVar7 = uVar7 * 0x200 | uVar7 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar31 = uVar32 ^ uVar37 ^ (uVar28 << 0xf | uVar28 >> 0x11) ^
                 ((uVar32 ^ uVar37 ^ (uVar28 << 0xf | uVar28 >> 0x11)) << 0xf |
                 (uVar32 ^ uVar37 ^ uVar28 << 0xf) >> 0x11) ^
                 ((uVar32 ^ uVar37 ^ uVar28 >> 0x11) << 0x17 | (uVar32 ^ uVar37 ^ (uVar28 << 0xf | uVar28 >> 0x11)) >> 9
                 ) ^ (uVar36 << 7 | uVar36 >> 0x19) ^ uVar26;
        uVar32 = uVar6 * 0x1000 | uVar6 >> 0x14;
        uVar2 = uVar32 + 0x79d8a7a8 + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar4 = (uVar6 & uVar3 | (uVar6 | uVar3) & uVar7) + uVar4 + (uVar2 ^ uVar32) + (uVar33 ^ uVar22);
        uVar2 = (uVar35 ^ uVar8 & (uVar5 ^ uVar35)) + uVar1 + uVar2 + uVar33;
        uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar32 = uVar33 ^ uVar24 ^ (uVar29 << 0xf | uVar29 >> 0x11) ^
                 ((uVar33 ^ uVar24 ^ (uVar29 << 0xf | uVar29 >> 0x11)) << 0xf |
                 (uVar33 ^ uVar24 ^ uVar29 << 0xf) >> 0x11) ^
                 ((uVar33 ^ uVar24 ^ uVar29 >> 0x11) << 0x17 | (uVar33 ^ uVar24 ^ (uVar29 << 0xf | uVar29 >> 0x11)) >> 9
                 ) ^ (uVar38 << 7 | uVar38 >> 0x19) ^ uVar27;
        uVar33 = uVar4 * 0x1000 | uVar4 >> 0x14;
        uVar2 = uVar33 + 0xf3b14f50 + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar7 = (uVar4 & uVar6 | (uVar4 | uVar6) & uVar3) + uVar7 + (uVar2 ^ uVar33) + (uVar34 ^ uVar23);
        uVar2 = (uVar1 ^ uVar5 & (uVar8 ^ uVar1)) + uVar35 + uVar2 + uVar34;
        uVar6 = uVar6 * 0x200 | uVar6 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar33 = uVar34 ^ uVar25 ^ (uVar30 << 0xf | uVar30 >> 0x11) ^
                 ((uVar34 ^ uVar25 ^ (uVar30 << 0xf | uVar30 >> 0x11)) << 0xf |
                 (uVar34 ^ uVar25 ^ uVar30 << 0xf) >> 0x11) ^
                 ((uVar34 ^ uVar25 ^ uVar30 >> 0x11) << 0x17 | (uVar34 ^ uVar25 ^ (uVar30 << 0xf | uVar30 >> 0x11)) >> 9
                 ) ^ (uVar22 << 7 | uVar22 >> 0x19) ^ uVar39;
        uVar34 = uVar7 * 0x1000 | uVar7 >> 0x14;
        uVar2 = uVar34 + 0xe7629ea1 + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar3 = (uVar7 & uVar4 | (uVar7 | uVar4) & uVar6) + uVar3 + (uVar2 ^ uVar34) + (uVar36 ^ uVar37);
        uVar2 = (uVar35 ^ uVar8 & (uVar5 ^ uVar35)) + uVar1 + uVar2 + uVar36;
        uVar4 = uVar4 * 0x200 | uVar4 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar40 = uVar36 ^ uVar26 ^ (uVar31 << 0xf | uVar31 >> 0x11) ^
                 ((uVar36 ^ uVar26 ^ (uVar31 << 0xf | uVar31 >> 0x11)) << 0xf |
                 (uVar36 ^ uVar26 ^ uVar31 << 0xf) >> 0x11) ^
                 ((uVar36 ^ uVar26 ^ uVar31 >> 0x11) << 0x17 | (uVar36 ^ uVar26 ^ (uVar31 << 0xf | uVar31 >> 0x11)) >> 9
                 ) ^ (uVar23 << 7 | uVar23 >> 0x19) ^ uVar28;
        uVar34 = uVar3 * 0x1000 | uVar3 >> 0x14;
        uVar2 = uVar34 + 0xcec53d43 + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar6 = (uVar3 & uVar7 | (uVar3 | uVar7) & uVar4) + uVar6 + (uVar2 ^ uVar34) + (uVar38 ^ uVar24);
        uVar2 = (uVar1 ^ uVar5 & (uVar8 ^ uVar1)) + uVar35 + uVar2 + uVar38;
        uVar7 = uVar7 * 0x200 | uVar7 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar34 = uVar38 ^ uVar27 ^ (uVar32 << 0xf | uVar32 >> 0x11) ^
                 ((uVar38 ^ uVar27 ^ (uVar32 << 0xf | uVar32 >> 0x11)) << 0xf |
                 (uVar38 ^ uVar27 ^ uVar32 << 0xf) >> 0x11) ^
                 ((uVar38 ^ uVar27 ^ uVar32 >> 0x11) << 0x17 | (uVar38 ^ uVar27 ^ (uVar32 << 0xf | uVar32 >> 0x11)) >> 9
                 ) ^ (uVar37 << 7 | uVar37 >> 0x19) ^ uVar29;
        uVar36 = uVar6 * 0x1000 | uVar6 >> 0x14;
        uVar2 = uVar36 + 0x9d8a7a87 + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar4 = (uVar6 & uVar3 | (uVar6 | uVar3) & uVar7) + uVar4 + (uVar2 ^ uVar36) + (uVar22 ^ uVar25);
        uVar2 = (uVar35 ^ uVar8 & (uVar5 ^ uVar35)) + uVar1 + uVar2 + uVar22;
        uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar22 = uVar22 ^ uVar39 ^ (uVar33 << 0xf | uVar33 >> 0x11) ^
                 ((uVar22 ^ uVar39 ^ (uVar33 << 0xf | uVar33 >> 0x11)) << 0xf |
                 (uVar22 ^ uVar39 ^ uVar33 << 0xf) >> 0x11) ^
                 ((uVar22 ^ uVar39 ^ uVar33 >> 0x11) << 0x17 | (uVar22 ^ uVar39 ^ (uVar33 << 0xf | uVar33 >> 0x11)) >> 9
                 ) ^ (uVar24 << 7 | uVar24 >> 0x19) ^ uVar30;
        uVar36 = uVar4 * 0x1000 | uVar4 >> 0x14;
        uVar2 = uVar36 + 0x3b14f50f + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar7 = (uVar4 & uVar6 | (uVar4 | uVar6) & uVar3) + uVar7 + (uVar2 ^ uVar36) + (uVar23 ^ uVar26);
        uVar2 = (uVar1 ^ uVar5 & (uVar8 ^ uVar1)) + uVar35 + uVar2 + uVar23;
        uVar6 = uVar6 * 0x200 | uVar6 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar36 = uVar7 * 0x1000 | uVar7 >> 0x14;
        uVar2 = uVar36 + 0x7629ea1e + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar3 = (uVar7 & uVar4 | (uVar7 | uVar4) & uVar6) + uVar3 + (uVar2 ^ uVar36) + (uVar37 ^ uVar27);
        uVar2 = (uVar35 ^ uVar8 & (uVar5 ^ uVar35)) + uVar1 + uVar2 + uVar37;
        uVar4 = uVar4 * 0x200 | uVar4 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar36 = uVar3 * 0x1000 | uVar3 >> 0x14;
        uVar2 = uVar36 + 0xec53d43c + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar6 = (uVar3 & uVar7 | (uVar3 | uVar7) & uVar4) + uVar6 + (uVar2 ^ uVar36) + (uVar24 ^ uVar39);
        uVar2 = (uVar1 ^ uVar5 & (uVar8 ^ uVar1)) + uVar35 + uVar2 + uVar24;
        uVar7 = uVar7 * 0x200 | uVar7 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar36 = uVar6 * 0x1000 | uVar6 >> 0x14;
        uVar2 = uVar36 + 0xd8a7a879 + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar4 = (uVar6 & uVar3 | (uVar6 | uVar3) & uVar7) + uVar4 + (uVar2 ^ uVar36) + (uVar25 ^ uVar28);
        uVar2 = (uVar35 ^ uVar8 & (uVar5 ^ uVar35)) + uVar1 + uVar2 + uVar25;
        uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar36 = uVar4 * 0x1000 | uVar4 >> 0x14;
        uVar2 = uVar36 + 0xb14f50f3 + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar7 = (uVar4 & uVar6 | (uVar4 | uVar6) & uVar3) + uVar7 + (uVar2 ^ uVar36) + (uVar26 ^ uVar29);
        uVar2 = (uVar1 ^ uVar5 & (uVar8 ^ uVar1)) + uVar35 + uVar2 + uVar26;
        uVar6 = uVar6 * 0x200 | uVar6 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar36 = uVar7 * 0x1000 | uVar7 >> 0x14;
        uVar2 = uVar36 + 0x629ea1e7 + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar3 = (uVar7 & uVar4 | (uVar7 | uVar4) & uVar6) + uVar3 + (uVar2 ^ uVar36) + (uVar27 ^ uVar30);
        uVar2 = (uVar35 ^ uVar8 & (uVar5 ^ uVar35)) + uVar1 + uVar2 + uVar27;
        uVar4 = uVar4 * 0x200 | uVar4 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar36 = uVar3 * 0x1000 | uVar3 >> 0x14;
        uVar2 = uVar36 + 0xc53d43ce + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar6 = (uVar3 & uVar7 | (uVar3 | uVar7) & uVar4) + uVar6 + (uVar2 ^ uVar36) + (uVar39 ^ uVar31);
        uVar39 = (uVar1 ^ uVar5 & (uVar8 ^ uVar1)) + uVar35 + uVar2 + uVar39;
        uVar7 = uVar7 * 0x200 | uVar7 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar39 ^ (uVar39 * 0x200 | uVar39 >> 0x17) ^ (uVar39 * 0x20000 | uVar39 >> 0xf);
        uVar36 = uVar6 * 0x1000 | uVar6 >> 0x14;
        uVar2 = uVar36 + 0x8a7a879d + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar4 = (uVar6 & uVar3 | (uVar6 | uVar3) & uVar7) + uVar4 + (uVar2 ^ uVar36) + (uVar28 ^ uVar32);
        uVar2 = (uVar35 ^ uVar8 & (uVar5 ^ uVar35)) + uVar1 + uVar2 + uVar28;
        uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar36 = uVar4 * 0x1000 | uVar4 >> 0x14;
        uVar2 = uVar36 + 0x14f50f3b + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar7 = (uVar4 & uVar6 | (uVar4 | uVar6) & uVar3) + uVar7 + (uVar2 ^ uVar36) + (uVar29 ^ uVar33);
        uVar2 = (uVar1 ^ uVar5 & (uVar8 ^ uVar1)) + uVar35 + uVar2 + uVar29;
        uVar6 = uVar6 * 0x200 | uVar6 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar36 = uVar7 * 0x1000 | uVar7 >> 0x14;
        uVar2 = uVar36 + 0x29ea1e76 + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar3 = (uVar7 & uVar4 | (uVar7 | uVar4) & uVar6) + uVar3 + (uVar2 ^ uVar36) + (uVar30 ^ uVar40);
        uVar2 = (uVar35 ^ uVar8 & (uVar5 ^ uVar35)) + uVar1 + uVar2 + uVar30;
        uVar4 = uVar4 * 0x200 | uVar4 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar36 = uVar3 * 0x1000 | uVar3 >> 0x14;
        uVar2 = uVar36 + 0x53d43cec + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar6 = (uVar3 & uVar7 | (uVar3 | uVar7) & uVar4) + uVar6 + (uVar2 ^ uVar36) + (uVar31 ^ uVar34);
        uVar2 = (uVar1 ^ uVar5 & (uVar8 ^ uVar1)) + uVar35 + uVar2 + uVar31;
        uVar7 = uVar7 * 0x200 | uVar7 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar36 = uVar6 * 0x1000 | uVar6 >> 0x14;
        uVar2 = uVar36 + 0xa7a879d8 + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar4 = (uVar6 & uVar3 | (uVar6 | uVar3) & uVar7) + uVar4 + (uVar2 ^ uVar36) + (uVar32 ^ uVar22);
        uVar2 = (uVar35 ^ uVar8 & (uVar5 ^ uVar35)) + uVar1 + uVar2 + uVar32;
        uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar36 = uVar4 * 0x1000 | uVar4 >> 0x14;
        uVar2 = uVar36 + 0x4f50f3b1 + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar7 = (uVar4 & uVar6 | (uVar4 | uVar6) & uVar3) + uVar7 + (uVar2 ^ uVar36) +
                (uVar33 ^ uVar23 ^ uVar28 ^ (uVar40 << 0xf | uVar40 >> 0x11) ^
                          ((uVar23 ^ uVar28 ^ (uVar40 << 0xf | uVar40 >> 0x11)) << 0xf |
                          (uVar23 ^ uVar28 ^ uVar40 << 0xf) >> 0x11) ^
                          ((uVar23 ^ uVar28 ^ uVar40 >> 0x11) << 0x17 |
                          (uVar23 ^ uVar28 ^ (uVar40 << 0xf | uVar40 >> 0x11)) >> 9) ^ (uVar25 << 7 | uVar25 >> 0x19) ^
                          uVar31);
        uVar2 = (uVar1 ^ uVar5 & (uVar8 ^ uVar1)) + uVar35 + uVar2 + uVar33;
        uVar6 = uVar6 * 0x200 | uVar6 >> 0x17;
        uVar35 = uVar8 << 0x13 | uVar8 >> 0xd;
        uVar8 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 * 0x20000 | uVar2 >> 0xf);
        uVar23 = uVar7 * 0x1000 | uVar7 >> 0x14;
        uVar2 = uVar23 + 0x9ea1e762 + uVar8;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar3 = (uVar7 & uVar4 | (uVar7 | uVar4) & uVar6) + uVar3 + (uVar2 ^ uVar23) +
                (uVar40 ^ uVar37 ^ uVar29 ^ (uVar34 << 0xf | uVar34 >> 0x11) ^
                          ((uVar37 ^ uVar29 ^ (uVar34 << 0xf | uVar34 >> 0x11)) << 0xf |
                          (uVar37 ^ uVar29 ^ uVar34 << 0xf) >> 0x11) ^
                          ((uVar37 ^ uVar29 ^ uVar34 >> 0x11) << 0x17 |
                          (uVar37 ^ uVar29 ^ (uVar34 << 0xf | uVar34 >> 0x11)) >> 9) ^ (uVar26 << 7 | uVar26 >> 0x19) ^
                          uVar32);
        uVar40 = (uVar35 ^ uVar8 & (uVar5 ^ uVar35)) + uVar1 + uVar2 + uVar40;
        uVar4 = uVar4 * 0x200 | uVar4 >> 0x17;
        uVar1 = uVar5 << 0x13 | uVar5 >> 0xd;
        uVar5 = uVar40 ^ (uVar40 * 0x200 | uVar40 >> 0x17) ^ (uVar40 * 0x20000 | uVar40 >> 0xf);
        uVar23 = uVar3 * 0x1000 | uVar3 >> 0x14;
        uVar2 = uVar23 + 0x3d43cec5 + uVar5;
        uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
        uVar35 = (uVar1 ^ uVar5 & (uVar8 ^ uVar1)) + uVar35 + uVar2 + uVar34;
        *arg1 = *arg1 ^ (uVar3 & uVar7 | (uVar3 | uVar7) & uVar4) + uVar6 + (uVar2 ^ uVar23) +
                        (uVar34 ^ uVar24 ^ uVar30 ^ (uVar22 << 0xf | uVar22 >> 0x11) ^
                                  ((uVar24 ^ uVar30 ^ (uVar22 << 0xf | uVar22 >> 0x11)) << 0xf |
                                  (uVar24 ^ uVar30 ^ uVar22 << 0xf) >> 0x11) ^
                                  ((uVar24 ^ uVar30 ^ uVar22 >> 0x11) << 0x17 |
                                  (uVar24 ^ uVar30 ^ (uVar22 << 0xf | uVar22 >> 0x11)) >> 9) ^
                                  (uVar27 << 7 | uVar27 >> 0x19) ^ uVar33);
        *(arg1 + 4) = *(arg1 + 4) ^ uVar3;
        *(arg1 + 8) = *(arg1 + 8) ^ (uVar7 * 0x200 | uVar7 >> 0x17);
        *(arg1 + 0xc) = *(arg1 + 0xc) ^ uVar4;
        *(arg1 + 0x10) =
             *(arg1 + 0x10) ^ uVar35 ^ (uVar35 * 0x200 | uVar35 >> 0x17) ^ (uVar35 * 0x20000 | uVar35 >> 0xf);
        *(arg1 + 0x14) = *(arg1 + 0x14) ^ uVar5;
        *(arg1 + 0x18) = *(arg1 + 0x18) ^ (uVar8 << 0x13 | uVar8 >> 0xd);
        *(arg1 + 0x1c) = *(arg1 + 0x1c) ^ uVar1;
        iStackX_18 = iStackX_18 + -1;
    }
    return;
}


/* fcn.000410e0 @ 0x410e0 */

void fcn.000410e0(int64_t arg1)

{
    uint32_t uStack_18;
    uint32_t uStack_14;
    
    uStack_14 = 0x10;
    uStack_18 = 1;
    do {
        uStack_14 = uStack_14 - 1;
        uStack_18 = uStack_18 + *(arg1 + uStack_14);
        *(arg1 + uStack_14) = uStack_18;
        uStack_18 = uStack_18 >> 8;
    } while (uStack_14 != 0);
    return;
}


/* fcn.00041760 @ 0x41760 */

void fcn.00041760(uint32_t arg1,int64_t arg2,int arg3,int64_t arg4)

{
    int iVar1;
    int iVar2;
    uint8_t uVar3;
    uint in_register_0000000c;
    uint32_t uVar4;
    int64_t in_stack_00000028;
    int in_stack_00000030;
    code *in_stack_00000038;
    int iStack_48;
    uint8_t auStack_30 [16];
    uint8_t auStack_20 [32];
    
    if ((0 < arg3) && (arg3 < 0x81)) {
        fcn.0001320c(auStack_30,in_stack_00000028,0x10);
        (*in_stack_00000038)(in_stack_00000028,in_stack_00000028,arg4);
        iVar1 = arg3 + 7 + (arg3 + 7 >> 0x1f & 7U) >> 3;
        if (in_stack_00000030 == 0) {
            for (iStack_48 = 0; iStack_48 < iVar1; iStack_48 = iStack_48 + 1) {
                auStack_30[iStack_48 + 0x10] = *(CONCAT44(in_register_0000000c,arg1) + iStack_48);
                *(arg2 + iStack_48) = auStack_30[iStack_48 + 0x10] ^ *(in_stack_00000028 + iStack_48);
            }
        }
        else {
            for (iStack_48 = 0; iStack_48 < iVar1; iStack_48 = iStack_48 + 1) {
                uVar3 = *(CONCAT44(in_register_0000000c,arg1) + iStack_48) ^ *(in_stack_00000028 + iStack_48);
                auStack_30[iStack_48 + 0x10] = uVar3;
                *(arg2 + iStack_48) = uVar3;
            }
        }
        uVar4 = arg3 >> 0x1f & 7;
        iVar1 = (arg3 + uVar4 & 7) - uVar4;
        iVar2 = arg3 + (arg3 >> 0x1f & 7U) >> 3;
        if (iVar1 == 0) {
            fcn.0001320c(in_stack_00000028,auStack_30 + iVar2,0x10);
        }
        else {
            for (iStack_48 = 0; iStack_48 < 0x10; iStack_48 = iStack_48 + 1) {
                uVar3 = iVar1;
                *(in_stack_00000028 + iStack_48) =
                     auStack_30[iStack_48 + iVar2] << (uVar3 & 0x1f) |
                     auStack_30[iStack_48 + 1 + iVar2] >> (8 - uVar3 & 0x1f);
            }
        }
    }
    return;
}


/* fcn.00041e50 @ 0x41e50 */

//WARNING: Removing unreachable block (ram,0x00041f34)
//WARNING: Removing unreachable block (ram,0x0004203b)
//WARNING: Removing unreachable block (ram,0x00042256)

void fcn.00041e50(uint32_t arg1,uint32_t arg2)

{
    uint8_t uVar1;
    uint in_register_0000000c;
    uchar *puVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint in_register_00000014;
    int64_t iVar5;
    uchar uStack_48;
    int iStack_44;
    uint64_t uStack_20;
    uint64_t uStack_18;
    uint64_t uStack_10;
    
    iVar5 = CONCAT44(in_register_00000014,arg2);
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    iStack_44 = 0xf;
    uVar1 = puVar2[0xf];
    uStack_18 = *(iVar5 + (uVar1 & 0xf) * 0x10);
    uStack_10 = *(iVar5 + 8 + (uVar1 & 0xf) * 0x10);
    while( true ) {
        uStack_20 = uVar1 >> 4;
        uVar3 = uStack_18 >> 4 ^ *((uStack_10 & 0xf) * 8 + 0x6e1b0) ^ *(iVar5 + uStack_20 * 0x10);
        uVar4 = (uStack_18 << 0x3c | uStack_10 >> 4) ^ *(iVar5 + 8 + uStack_20 * 0x10);
        iStack_44 = iStack_44 + -1;
        if (iStack_44 < 0) break;
        uVar1 = puVar2[iStack_44];
        uStack_18 = uVar3 >> 4 ^ *((uVar4 & 0xf) * 8 + 0x6e1b0) ^ *(iVar5 + (uVar1 & 0xf) * 0x10);
        uStack_10 = (uVar3 << 0x3c | uVar4 >> 4) ^ *(iVar5 + 8 + (uVar1 & 0xf) * 0x10);
    }
    *puVar2 = uVar3 >> 0x38;
    puVar2[1] = uVar3 >> 0x30;
    puVar2[2] = uVar3 >> 0x28;
    uStack_48 = uVar3 >> 0x20;
    puVar2[3] = uStack_48;
    puVar2[4] = uVar3 >> 0x18;
    puVar2[5] = uVar3 >> 0x10;
    puVar2[6] = uVar3 >> 8;
    uStack_48 = uVar3;
    puVar2[7] = uStack_48;
    puVar2[8] = uVar4 >> 0x38;
    puVar2[9] = uVar4 >> 0x30;
    puVar2[10] = uVar4 >> 0x28;
    uStack_48 = uVar4 >> 0x20;
    puVar2[0xb] = uStack_48;
    puVar2[0xc] = uVar4 >> 0x18;
    puVar2[0xd] = uVar4 >> 0x10;
    puVar2[0xe] = uVar4 >> 8;
    uStack_48 = uVar4;
    puVar2[0xf] = uStack_48;
    return;
}


/* fcn.00043f70 @ 0x43f70 */

void fcn.00043f70(int64_t arg1)

{
    char cVar1;
    uint32_t uStack_14;
    
    uStack_14 = 8;
    do {
        uStack_14 = uStack_14 - 1;
        cVar1 = *(arg1 + 8 + uStack_14) + '\x01';
        *(arg1 + 8 + uStack_14) = cVar1;
        if (cVar1 != '\0') {
            return;
        }
    } while (uStack_14 != 0);
    return;
}


/* fcn.00044950 @ 0x44950 */

void fcn.00044950(int64_t arg1,uint32_t arg2)

{
    uint in_register_00000014;
    uint64_t uStackX_10;
    uint64_t uStack_18;
    int64_t iStack_10;
    
    uStackX_10 = CONCAT44(in_register_00000014,arg2);
    iStack_10 = 8;
    uStack_18 = 0;
    do {
        iStack_10 = iStack_10 + -1;
        uStack_18 = (uStackX_10 & 0xff) + uStack_18 + *(arg1 + 8 + iStack_10);
        *(arg1 + 8 + iStack_10) = uStack_18;
        uStack_18 = uStack_18 >> 8;
        uStackX_10 = uStackX_10 >> 8;
        if (iStack_10 == 0) {
            return;
        }
    } while ((uStackX_10 != 0) || (uStack_18 != 0));
    return;
}


/* fcn.00045380 @ 0x45380 */

void fcn.00045380(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int8_t iVar1;
    uint32_t uStack_38;
    uint32_t uStack_34;
    uint8_t auStack_18 [24];
    
    for (uStack_38 = 0; uStack_38 < 0x10; uStack_38 = uStack_38 + 1) {
        auStack_18[(uStack_38 + arg1 / 8) % 0x10] = *(arg4 + uStack_38);
    }
    for (uStack_38 = 0; uStack_38 < 0x10; uStack_38 = uStack_38 + 1) {
        if (uStack_38 == 0) {
            uStack_34 = 0xf;
        }
        else {
            uStack_34 = uStack_38 - 1;
        }
        iVar1 = arg1 % 8;
        *(arg2 + uStack_38) =
             (auStack_18[uStack_38] >> iVar1 | auStack_18[uStack_34] << (8U - iVar1 & 0x1f)) ^ *(arg3 + uStack_38);
    }
    return;
}


/* fcn.000455d0 @ 0x455d0 */

void fcn.000455d0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uStack_18;
    
    for (uStack_18 = 0; uStack_18 < 0x10; uStack_18 = uStack_18 + 4) {
        *(arg1 + uStack_18) = str.cw[*(arg2 + uStack_18) ^ *(arg3 + uStack_18)];
        *(arg1 + uStack_18 + 1) = *((*(arg2 + uStack_18 + 1) ^ *(arg3 + uStack_18 + 1)) + 0x6e360);
        *(arg1 + uStack_18 + 2) = *((*(arg2 + uStack_18 + 2) ^ *(arg3 + uStack_18 + 2)) + 0x50800);
        *(arg1 + uStack_18 + 3) = *((*(arg2 + uStack_18 + 3) ^ *(arg3 + uStack_18 + 3)) + 0x6e230);
    }
    return;
}


/* fcn.00045830 @ 0x45830 */

void fcn.00045830(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    uint8_t *puVar1;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    *puVar1 = *(arg2 + 3) ^ *(arg2 + 4) ^ *(arg2 + 6) ^ *(arg2 + 8) ^ *(arg2 + 9) ^ *(arg2 + 0xd) ^ *(arg2 + 0xe);
    puVar1[1] = *(arg2 + 2) ^ *(arg2 + 5) ^ *(arg2 + 7) ^ *(arg2 + 8) ^ *(arg2 + 9) ^ *(arg2 + 0xc) ^ *(arg2 + 0xf);
    puVar1[2] = *(arg2 + 1) ^ *(arg2 + 4) ^ *(arg2 + 6) ^ *(arg2 + 10) ^ *(arg2 + 0xb) ^ *(arg2 + 0xc) ^ *(arg2 + 0xf);
    puVar1[3] = *arg2 ^ *(arg2 + 5) ^ *(arg2 + 7) ^ *(arg2 + 10) ^ *(arg2 + 0xb) ^ *(arg2 + 0xd) ^ *(arg2 + 0xe);
    puVar1[4] = *arg2 ^ *(arg2 + 2) ^ *(arg2 + 5) ^ *(arg2 + 8) ^ *(arg2 + 0xb) ^ *(arg2 + 0xe) ^ *(arg2 + 0xf);
    puVar1[5] = *(arg2 + 1) ^ *(arg2 + 3) ^ *(arg2 + 4) ^ *(arg2 + 9) ^ *(arg2 + 10) ^ *(arg2 + 0xe) ^ *(arg2 + 0xf);
    puVar1[6] = *arg2 ^ *(arg2 + 2) ^ *(arg2 + 7) ^ *(arg2 + 9) ^ *(arg2 + 10) ^ *(arg2 + 0xc) ^ *(arg2 + 0xd);
    puVar1[7] = *(arg2 + 1) ^ *(arg2 + 3) ^ *(arg2 + 6) ^ *(arg2 + 8) ^ *(arg2 + 0xb) ^ *(arg2 + 0xc) ^ *(arg2 + 0xd);
    puVar1[8] = *arg2 ^ *(arg2 + 1) ^ *(arg2 + 4) ^ *(arg2 + 7) ^ *(arg2 + 10) ^ *(arg2 + 0xd) ^ *(arg2 + 0xf);
    puVar1[9] = *arg2 ^ *(arg2 + 1) ^ *(arg2 + 5) ^ *(arg2 + 6) ^ *(arg2 + 0xb) ^ *(arg2 + 0xc) ^ *(arg2 + 0xe);
    puVar1[10] = *(arg2 + 2) ^ *(arg2 + 3) ^ *(arg2 + 5) ^ *(arg2 + 6) ^ *(arg2 + 8) ^ *(arg2 + 0xd) ^ *(arg2 + 0xf);
    puVar1[0xb] = *(arg2 + 2) ^ *(arg2 + 3) ^ *(arg2 + 4) ^ *(arg2 + 7) ^ *(arg2 + 9) ^ *(arg2 + 0xc) ^ *(arg2 + 0xe);
    puVar1[0xc] = *(arg2 + 1) ^ *(arg2 + 2) ^ *(arg2 + 6) ^ *(arg2 + 7) ^ *(arg2 + 9) ^ *(arg2 + 0xb) ^ *(arg2 + 0xc);
    puVar1[0xd] = *arg2 ^ *(arg2 + 3) ^ *(arg2 + 6) ^ *(arg2 + 7) ^ *(arg2 + 8) ^ *(arg2 + 10) ^ *(arg2 + 0xd);
    puVar1[0xe] = *arg2 ^ *(arg2 + 3) ^ *(arg2 + 4) ^ *(arg2 + 5) ^ *(arg2 + 9) ^ *(arg2 + 0xb) ^ *(arg2 + 0xe);
    puVar1[0xf] = *(arg2 + 1) ^ *(arg2 + 2) ^ *(arg2 + 4) ^ *(arg2 + 5) ^ *(arg2 + 8) ^ *(arg2 + 10) ^ *(arg2 + 0xf);
    return;
}


/* fcn.00045700 @ 0x45700 */

void fcn.00045700(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uStack_18;
    
    for (uStack_18 = 0; uStack_18 < 0x10; uStack_18 = uStack_18 + 4) {
        *(arg1 + uStack_18) = *((*(arg2 + uStack_18) ^ *(arg3 + uStack_18)) + 0x50800);
        *(arg1 + uStack_18 + 1) = *((*(arg2 + uStack_18 + 1) ^ *(arg3 + uStack_18 + 1)) + 0x6e230);
        *(arg1 + uStack_18 + 2) = str.cw[*(arg2 + uStack_18 + 2) ^ *(arg3 + uStack_18 + 2)];
        *(arg1 + uStack_18 + 3) = *((*(arg2 + uStack_18 + 3) ^ *(arg3 + uStack_18 + 3)) + 0x6e360);
    }
    return;
}


/* fcn.000461f0 @ 0x461f0 */

void fcn.000461f0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar auStack_18 [24];
    
    fcn.000455d0(auStack_18,arg2,arg3);
    fcn.00045830(arg1,auStack_18);
    return;
}


/* fcn.00046230 @ 0x46230 */

void fcn.00046230(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar auStack_18 [24];
    
    fcn.00045700(auStack_18,arg2,arg3);
    fcn.00045830(arg1,auStack_18);
    return;
}


/* fcn.00045320 @ 0x45320 */

void fcn.00045320(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iStack_18;
    
    for (iStack_18 = 0; iStack_18 < 0x10; iStack_18 = iStack_18 + 1) {
        *(arg1 + iStack_18) = *(arg2 + iStack_18) ^ *(arg3 + iStack_18);
    }
    return;
}


/* fcn.00045490 @ 0x45490 */

void fcn.00045490(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    
    fcn.00045380(0x13,CONCAT44(in_register_0000000c,arg1),arg2,arg3);
    return;
}


/* fcn.000454d0 @ 0x454d0 */

void fcn.000454d0(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    
    fcn.00045380(0x1f,CONCAT44(in_register_0000000c,arg1),arg2,arg3);
    return;
}


/* fcn.00045510 @ 0x45510 */

void fcn.00045510(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    
    fcn.00045380(0x43,CONCAT44(in_register_0000000c,arg1),arg2,arg3);
    return;
}


/* fcn.00045550 @ 0x45550 */

void fcn.00045550(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    
    fcn.00045380(0x61,CONCAT44(in_register_0000000c,arg1),arg2,arg3);
    return;
}


/* fcn.00045590 @ 0x45590 */

void fcn.00045590(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    
    fcn.00045380(0x6d,CONCAT44(in_register_0000000c,arg1),arg2,arg3);
    return;
}


/* fcn.000474b0 @ 0x474b0 */

uint64_t fcn.000474b0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int64_t in_stack_00000028;
    code *in_stack_00000030;
    uint64_t uStack_40;
    int64_t iStack_38;
    uint64_t uStack_30;
    uint64_t uStack_28;
    uchar auStack_20 [4];
    uint8_t uStack_1c;
    uint8_t uStack_1b;
    uint8_t uStack_1a;
    uint8_t uStack_19;
    uchar auStack_18 [24];
    
    uVar1 = in_stack_00000028 - 8;
    if ((((uVar1 & 7) == 0) && (0xf < uVar1)) && (uVar1 < 0x80000001)) {
        uStack_40 = (uVar1 >> 3) * 6;
        fcn.0001320c(auStack_20,arg4,8);
        fcn.0001320c(arg3,arg4 + 8,uVar1);
        for (uStack_30 = 0; uStack_30 < 6; uStack_30 = uStack_30 + 1) {
            iStack_38 = arg3 + -8 + uVar1;
            for (uStack_28 = 0; uStack_28 < uVar1; uStack_28 = uStack_28 + 8) {
                uStack_19 = uStack_19 ^ uStack_40;
                if (0xff < uStack_40) {
                    uStack_1a = uStack_1a ^ uStack_40 >> 8;
                    uStack_1b = uStack_1b ^ uStack_40 >> 0x10;
                    uStack_1c = uStack_1c ^ uStack_40 >> 0x18;
                }
                fcn.0001320c(auStack_18,iStack_38,8);
                (*in_stack_00000030)(auStack_20,auStack_20,arg1);
                fcn.0001320c(iStack_38,auStack_18,8);
                uStack_40 = uStack_40 - 1;
                iStack_38 = iStack_38 + -8;
            }
        }
        fcn.0001320c(arg2,auStack_20,8);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00047cf0 @ 0x47cf0 */

//WARNING: Removing unreachable block (ram,0x00048c17)
//WARNING: Removing unreachable block (ram,0x00048c2b)
//WARNING: Removing unreachable block (ram,0x00048c21)

void fcn.00047cf0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    int iStack_58;
    uint32_t auStack_48 [18];
    
    fcn.0001320c(auStack_48,arg2,0x40);
    for (iStack_58 = 0x14; 0 < iStack_58; iStack_58 = iStack_58 + -2) {
        auStack_48[0] = auStack_48[0] + auStack_48[4];
        uVar1 = (auStack_48[0xc] ^ auStack_48[0]) << 0x10 | (auStack_48[0xc] ^ auStack_48[0]) >> 0x10;
        auStack_48[8] = auStack_48[8] + uVar1;
        uVar2 = (auStack_48[4] ^ auStack_48[8]) << 0xc | (auStack_48[4] ^ auStack_48[8]) >> 0x14;
        auStack_48[0] = auStack_48[0] + uVar2;
        uVar1 = (uVar1 ^ auStack_48[0]) << 8 | (uVar1 ^ auStack_48[0]) >> 0x18;
        auStack_48[8] = auStack_48[8] + uVar1;
        uVar2 = (uVar2 ^ auStack_48[8]) << 7 | (uVar2 ^ auStack_48[8]) >> 0x19;
        auStack_48[1] = auStack_48[1] + auStack_48[5];
        uVar3 = (auStack_48[0xd] ^ auStack_48[1]) << 0x10 | (auStack_48[0xd] ^ auStack_48[1]) >> 0x10;
        auStack_48[9] = auStack_48[9] + uVar3;
        uVar4 = (auStack_48[5] ^ auStack_48[9]) << 0xc | (auStack_48[5] ^ auStack_48[9]) >> 0x14;
        auStack_48[1] = auStack_48[1] + uVar4;
        uVar3 = (uVar3 ^ auStack_48[1]) << 8 | (uVar3 ^ auStack_48[1]) >> 0x18;
        auStack_48[9] = auStack_48[9] + uVar3;
        uVar4 = (uVar4 ^ auStack_48[9]) << 7 | (uVar4 ^ auStack_48[9]) >> 0x19;
        auStack_48[2] = auStack_48[2] + auStack_48[6];
        uVar5 = (auStack_48[0xe] ^ auStack_48[2]) << 0x10 | (auStack_48[0xe] ^ auStack_48[2]) >> 0x10;
        auStack_48[10] = auStack_48[10] + uVar5;
        uVar6 = (auStack_48[6] ^ auStack_48[10]) << 0xc | (auStack_48[6] ^ auStack_48[10]) >> 0x14;
        auStack_48[2] = auStack_48[2] + uVar6;
        uVar5 = (uVar5 ^ auStack_48[2]) << 8 | (uVar5 ^ auStack_48[2]) >> 0x18;
        auStack_48[10] = auStack_48[10] + uVar5;
        uVar6 = (uVar6 ^ auStack_48[10]) << 7 | (uVar6 ^ auStack_48[10]) >> 0x19;
        auStack_48[3] = auStack_48[3] + auStack_48[7];
        uVar7 = (auStack_48[0xf] ^ auStack_48[3]) << 0x10 | (auStack_48[0xf] ^ auStack_48[3]) >> 0x10;
        auStack_48[0xb] = auStack_48[0xb] + uVar7;
        uVar8 = (auStack_48[7] ^ auStack_48[0xb]) << 0xc | (auStack_48[7] ^ auStack_48[0xb]) >> 0x14;
        auStack_48[3] = auStack_48[3] + uVar8;
        uVar7 = (uVar7 ^ auStack_48[3]) << 8 | (uVar7 ^ auStack_48[3]) >> 0x18;
        auStack_48[0xb] = auStack_48[0xb] + uVar7;
        uVar8 = (uVar8 ^ auStack_48[0xb]) << 7 | (uVar8 ^ auStack_48[0xb]) >> 0x19;
        auStack_48[0] = auStack_48[0] + uVar4;
        uVar7 = (uVar7 ^ auStack_48[0]) << 0x10 | (uVar7 ^ auStack_48[0]) >> 0x10;
        auStack_48[10] = auStack_48[10] + uVar7;
        uVar4 = (uVar4 ^ auStack_48[10]) << 0xc | (uVar4 ^ auStack_48[10]) >> 0x14;
        auStack_48[0] = auStack_48[0] + uVar4;
        auStack_48[0xf] = (uVar7 ^ auStack_48[0]) << 8 | (uVar7 ^ auStack_48[0]) >> 0x18;
        auStack_48[10] = auStack_48[10] + auStack_48[0xf];
        auStack_48[5] = (uVar4 ^ auStack_48[10]) << 7 | (uVar4 ^ auStack_48[10]) >> 0x19;
        auStack_48[1] = auStack_48[1] + uVar6;
        uVar1 = (uVar1 ^ auStack_48[1]) << 0x10 | (uVar1 ^ auStack_48[1]) >> 0x10;
        auStack_48[0xb] = auStack_48[0xb] + uVar1;
        uVar4 = (uVar6 ^ auStack_48[0xb]) << 0xc | (uVar6 ^ auStack_48[0xb]) >> 0x14;
        auStack_48[1] = auStack_48[1] + uVar4;
        auStack_48[0xc] = (uVar1 ^ auStack_48[1]) << 8 | (uVar1 ^ auStack_48[1]) >> 0x18;
        auStack_48[0xb] = auStack_48[0xb] + auStack_48[0xc];
        auStack_48[6] = (uVar4 ^ auStack_48[0xb]) << 7 | (uVar4 ^ auStack_48[0xb]) >> 0x19;
        auStack_48[2] = auStack_48[2] + uVar8;
        uVar1 = (uVar3 ^ auStack_48[2]) << 0x10 | (uVar3 ^ auStack_48[2]) >> 0x10;
        auStack_48[8] = auStack_48[8] + uVar1;
        uVar3 = (uVar8 ^ auStack_48[8]) << 0xc | (uVar8 ^ auStack_48[8]) >> 0x14;
        auStack_48[2] = auStack_48[2] + uVar3;
        auStack_48[0xd] = (uVar1 ^ auStack_48[2]) << 8 | (uVar1 ^ auStack_48[2]) >> 0x18;
        auStack_48[8] = auStack_48[8] + auStack_48[0xd];
        auStack_48[7] = (uVar3 ^ auStack_48[8]) << 7 | (uVar3 ^ auStack_48[8]) >> 0x19;
        auStack_48[3] = auStack_48[3] + uVar2;
        uVar1 = (uVar5 ^ auStack_48[3]) << 0x10 | (uVar5 ^ auStack_48[3]) >> 0x10;
        auStack_48[9] = auStack_48[9] + uVar1;
        uVar2 = (uVar2 ^ auStack_48[9]) << 0xc | (uVar2 ^ auStack_48[9]) >> 0x14;
        auStack_48[3] = auStack_48[3] + uVar2;
        auStack_48[0xe] = (uVar1 ^ auStack_48[3]) << 8 | (uVar1 ^ auStack_48[3]) >> 0x18;
        auStack_48[9] = auStack_48[9] + auStack_48[0xe];
        auStack_48[4] = (uVar2 ^ auStack_48[9]) << 7 | (uVar2 ^ auStack_48[9]) >> 0x19;
    }
    for (iStack_58 = 0; iStack_58 < 0x10; iStack_58 = iStack_58 + 1) {
        *(arg1 + iStack_58 * 4) = auStack_48[iStack_58] + *(arg2 + iStack_58 * 4);
    }
    return;
}


/* fcn.00049060 @ 0x49060 */

ulong fcn.00049060(uint32_t arg1,uint32_t arg2)

{
    ulong uVar1;
    uint in_register_0000000c;
    uint in_register_00000014;
    int64_t aiStack_20 [4];
    
    aiStack_20[0] = CONCAT44(in_register_00000014,arg2);
    if ((CONCAT44(in_register_0000000c,arg1) == 0) || (aiStack_20[0] == 0)) {
        uVar1 = 0;
    }
    else {
        aiStack_20[1] = 0;
        uVar1 = fcn.0001d610(*(CONCAT44(in_register_0000000c,arg1) + 0x10),aiStack_20);
    }
    return uVar1;
}


/* fcn.000269c0 @ 0x269c0 */

ulong fcn.000269c0(int64_t arg1)

{
    return *(arg1 + 0x10);
}


/* fcn.00032b90 @ 0x32b90 */

ulong fcn.00032b90(uint32_t arg1,uint32_t arg2)

{
    ulong uVar1;
    uint in_register_0000000c;
    uint in_register_00000014;
    
    if (CONCAT44(in_register_0000000c,arg1) == 0) {
        fcn.0001c9f0(0xe,0x6c,0x69,0);
        uVar1 = 0;
    }
    else if (CONCAT44(in_register_00000014,arg2) == 0) {
        fcn.0001c9f0(0xe,0x6c,0x6b,0);
        uVar1 = 0;
    }
    else {
        uVar1 = fcn.000490c0(arg1,arg2);
    }
    return uVar1;
}


/* fcn.0004c890 @ 0x4c890 */

ulong fcn.0004c890(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t arg1_00;
    
    if (*(arg1 + 0x10) != 0) {
        arg1_00 = *(arg1 + 0x10);
        iVar1 = fcn.000148fc(arg1_00,0x6e91c);
        if ((((iVar1 == 0) || (iVar1 = fcn.000148fc(arg1_00,0x6e92c), iVar1 == 0)) ||
            (iVar1 = fcn.000148fc(arg1_00,0x6e934), iVar1 == 0)) ||
           (((iVar1 = fcn.000148fc(arg1_00,0x6e938), iVar1 == 0 ||
             (iVar1 = fcn.000148fc(arg1_00,0x6e93c), iVar1 == 0)) ||
            (iVar1 = fcn.000148fc(arg1_00,0x6e940), iVar1 == 0)))) {
            *arg2 = 0xff;
            return 1;
        }
        iVar1 = fcn.000148fc(arg1_00,0x6e924);
        if (((iVar1 == 0) || (iVar1 = fcn.000148fc(arg1_00,0x6e944), iVar1 == 0)) ||
           ((iVar1 = fcn.000148fc(arg1_00,0x6e94c), iVar1 == 0 ||
            (((iVar1 = fcn.000148fc(arg1_00,0x6dc10), iVar1 == 0 ||
              (iVar1 = fcn.000148fc(arg1_00,0x6e950), iVar1 == 0)) ||
             (iVar1 = fcn.000148fc(arg1_00,0x6e954), iVar1 == 0)))))) {
            *arg2 = 0;
            return 1;
        }
    }
    fcn.0001c9f0(0x22,0x6e,0x68,0);
    fcn.0001cf80(6,0x6e6f0,*arg1,0x6e6e8);
    return 0;
}


/* fcn.0001cf80 @ 0x1cf80 */

void fcn.0001cf80(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iStackX_10 = arg2;
    iStackX_18 = arg3;
    iStackX_20 = arg4;
    fcn.0001cfc0(arg1 & 0xffffffff,&iStackX_10);
    return;
}


/* fcn.000493d0 @ 0x493d0 */

int fcn.000493d0(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iStack_48;
    int iStack_40;
    int iStack_3c;
    uint32_t uStack_38;
    uint32_t uStack_30;
    int iStack_2c;
    int iStack_28;
    int64_t iStack_20;
    char *apcStack_18 [3];
    
    iStack_40 = 0;
    iStack_28 = -1;
    iStack_2c = -1;
    uStack_30 = 0;
    iStack_20 = 0;
    iStack_48 = 0;
    uStack_38 = fcn.0001e510(arg2);
    if (uStack_38 == 0) {
        uStack_38 = fcn.0001e460(arg2);
    }
    if ((uStack_38 != 0) && (iStack_20 = fcn.0004ca60(arg1), iStack_20 != 0)) {
        for (iStack_3c = 0; iVar2 = fcn.00023370(iStack_20), iStack_3c < iVar2; iStack_3c = iStack_3c + 1) {
            iStack_48 = fcn.00023390(iStack_20,iStack_3c);
            iVar3 = fcn.000148fc(*(iStack_48 + 8),0x6e5a0);
            if (iVar3 == 0) {
                iStack_28 = fcn.0004da64(*(iStack_48 + 0x10),apcStack_18,0);
                cVar1 = *apcStack_18[0];
joined_r0x0004952f:
                if (cVar1 != '\0') goto code_r0x000495ec;
            }
            else {
                iVar3 = fcn.000148fc(*(iStack_48 + 8),0x6bbd0);
                if (iVar3 == 0) {
                    iStack_2c = fcn.0004da64(*(iStack_48 + 0x10),apcStack_18,0);
                    cVar1 = *apcStack_18[0];
                    goto joined_r0x0004952f;
                }
                iVar3 = fcn.000148fc(*(iStack_48 + 8),0x6e5a4);
                if (iVar3 == 0) {
                    iVar2 = fcn.0004d000(*(iStack_48 + 0x10),&uStack_30);
                    if ((iVar2 == 0) || (uStack_30 == 0)) goto code_r0x000495ec;
                }
                else {
                    iVar3 = fcn.000148fc(*(iStack_48 + 8),0x6e5ac);
                    if ((iVar3 != 0) ||
                       ((iVar3 = fcn.000148fc(*(iStack_48 + 0x10),0x6e5b4), iVar3 != 0 &&
                        (iVar3 = fcn.000148fc(*(iStack_48 + 0x10),0x6bbc8), iVar3 != 0)))) goto code_r0x000495ec;
                }
            }
        }
        iStack_40 = 1;
    }
code_r0x000495ec:
    if (iStack_40 == 0) {
        fcn.0001c9f0(0xd,0xde,0xda,0);
        if (iStack_48 == 0) {
            fcn.0001cf80(4,0x6dc08,arg2,0x6bdf8);
        }
        else {
            fcn.0001cf80(4,0x6e5bc,*(iStack_48 + 8),0x6bdf8);
        }
    }
    else {
        iStack_40 = fcn.0004c480(uStack_38,iStack_28,iStack_2c,uStack_30);
        if (iStack_40 == 0) {
            fcn.0001c9f0(0xd,0xde,0x41,0);
        }
    }
    fcn.00022690(iStack_20,0x4c810);
    return iStack_40;
}


/* fcn.0004c530 @ 0x4c530 */

void fcn.0004c530(void)

{
    int64_t iVar1;
    
    iVar1 = *0x6fd28;
    if (*0x6fd28 != 0) {
        *0x6fd28 = 0;
        fcn.00022690(iVar1,0x4c570);
    }
    return;
}


/* fcn.0004ca60 @ 0x4ca60 */

ulong fcn.0004ca60(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    uint32_t arg1_00;
    int64_t iStack_50;
    int iStack_48;
    char *pcStack_40;
    char *pcStack_38;
    ulong uStack_30;
    int iStack_28;
    int64_t iStack_20;
    char *pcStack_18;
    
    uStack_30 = 0;
    pcStack_40 = fcn.00021b40(arg1,0x4fff6,0);
    pcStack_18 = pcStack_40;
    if (pcStack_40 == NULL) {
        fcn.0001c9f0(0x22,0x6d,0x41,0);
    }
    else {
        iStack_48 = 1;
        iStack_50 = 0;
        pcStack_38 = pcStack_40;
        while( true ) {
            cVar1 = *pcStack_40;
            arg1_00 = pcStack_38;
            if (((cVar1 == '\0') || (cVar1 == '\r')) || (cVar1 == '\n')) break;
            iStack_28 = iStack_48;
            if (iStack_48 == 1) {
                if (cVar1 == ':') {
                    iStack_48 = 2;
                    *pcStack_40 = '\0';
                    iStack_50 = fcn.0004cd90(arg1_00);
                    if (iStack_50 == 0) {
                        fcn.0001c9f0(0x22,0x6d,0x6c,0);
                        goto code_r0x0004cd5c;
                    }
                    pcStack_38 = pcStack_40 + 1;
                }
                else if (cVar1 == ',') {
                    *pcStack_40 = '\0';
                    iStack_50 = fcn.0004cd90(arg1_00);
                    pcStack_38 = pcStack_40 + 1;
                    if (iStack_50 == 0) {
                        fcn.0001c9f0(0x22,0x6d,0x6c,0);
                        goto code_r0x0004cd5c;
                    }
                    fcn.0004c7b0(iStack_50,0,&uStack_30);
                }
            }
            else if ((iStack_48 == 2) && (cVar1 == ',')) {
                iStack_48 = 1;
                *pcStack_40 = '\0';
                iStack_20 = fcn.0004cd90(arg1_00);
                if (iStack_20 == 0) {
                    fcn.0001c9f0(0x22,0x6d,0x6d,0);
                    goto code_r0x0004cd5c;
                }
                fcn.0004c7b0(iStack_50,iStack_20,&uStack_30);
                iStack_50 = 0;
                pcStack_38 = pcStack_40 + 1;
            }
            pcStack_40 = pcStack_40 + 1;
        }
        if (iStack_48 == 2) {
            iStack_20 = fcn.0004cd90(arg1_00);
            if (iStack_20 != 0) {
                fcn.0004c7b0(iStack_50,iStack_20,&uStack_30);
code_r0x0004cd41:
                fcn.00019380(pcStack_18,0x4fff6,0);
                return uStack_30;
            }
            fcn.0001c9f0(0x22,0x6d,0x6d,0);
        }
        else {
            iVar2 = fcn.0004cd90(arg1_00);
            if (iVar2 != 0) {
                fcn.0004c7b0(iVar2,0,&uStack_30);
                goto code_r0x0004cd41;
            }
            fcn.0001c9f0(0x22,0x6d,0x6c,0);
        }
    }
code_r0x0004cd5c:
    fcn.00019380(pcStack_18,0x4fff6,0);
    fcn.00022690(uStack_30,0x4c810);
    return 0;
}


/* fcn.0004da64 @ 0x4da64 */

uint64_t fcn.0004da64(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    char *pcVar4;
    uint16_t uVar5;
    char *pcVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    
    iVar1 = *0x4f630;
    uVar3 = 0;
    uVar7 = arg3;
    pcVar4 = arg1;
    if ((uVar7 == 0) || (uVar7 - 2 < 0x23)) {
        while( true ) {
            if (*pcVar4 < '\0') {
                uVar5 = 0;
            }
            else {
                uVar5 = *(*0x4f630 + *pcVar4 * 2) & 2;
            }
            if (uVar5 == 0) break;
            pcVar4 = pcVar4 + 1;
        }
        pcVar6 = pcVar4 + 1;
        if (*pcVar4 != '+') {
            pcVar6 = pcVar4;
        }
        if (*pcVar6 == '0') {
            pcVar4 = pcVar6 + 1;
            if (*pcVar4 < '\0') {
                uVar5 = 0;
            }
            else {
                uVar5 = *(*0x4f630 + *pcVar4 * 2) & 0x20;
            }
            if (uVar5 == 0) {
                uVar9 = *pcVar4;
            }
            else {
                uVar9 = *(*pcVar4 + *0x4f638);
            }
            if (uVar9 == 0x58) {
                if ((uVar7 == 0) || (uVar7 == 0x10)) {
                    uVar7 = 0x10;
                    pcVar6 = pcVar6 + 2;
                }
            }
            else if ((uVar7 == 0) || (uVar7 == 8)) {
                uVar7 = 8;
                pcVar6 = pcVar4;
            }
        }
        if (uVar7 == 0) {
            uVar7 = 10;
        }
        uVar8 = uVar7;
        if (*pcVar6 != '0') goto code_r0x0004db5b;
        do {
            arg1 = pcVar6 + 1;
            pcVar6 = arg1;
        } while (*arg1 == '0');
        while( true ) {
            pcVar6 = arg1;
code_r0x0004db5b:
            if (*pcVar6 < '\0') {
                uVar5 = 0;
            }
            else {
                uVar5 = *(iVar1 + *pcVar6 * 2) & 0x1038;
            }
            if (uVar5 == 0) goto code_r0x0004dbaa;
            iVar2 = fcn.0004da14(*pcVar6);
            if (uVar8 <= iVar2) goto code_r0x0004dbaa;
            uVar7 = uVar3;
            uVar9 = uVar7 * uVar8 + iVar2;
            uVar3 = uVar9;
            if (uVar9 < uVar7) break;
            arg1 = pcVar6 + 1;
        }
        uVar3 = 0xffffffff;
        *0x717b0 = 0x22;
code_r0x0004dbaa:
        if (arg2 != 0) {
            *arg2 = arg1;
        }
        uVar3 = uVar3 & 0xffffffff;
    }
    else {
        if (arg2 != 0) {
            *arg2 = 0;
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.0004d000 @ 0x4d000 */

void fcn.0004d000(int64_t arg1,int64_t arg2)

{
    *arg2 = 0;
    fcn.000269d0(arg1,0x7c,1,0x4cf30);
    return;
}


/* fcn.000269d0 @ 0x269d0 */

int fcn.000269d0(uint32_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int iVar1;
    uint8_t *puVar2;
    int64_t iVar3;
    uint32_t arg1_00;
    uint in_register_0000000c;
    ulong in_stack_00000028;
    int iStack_28;
    uint8_t *puStack_20;
    uint8_t *puStack_18;
    
    puStack_20 = CONCAT44(in_register_0000000c,arg1);
    if (puStack_20 == NULL) {
        fcn.0001c9f0(0xe,0x77,0x73,0);
        return 0;
    }
    while( true ) {
        if (arg3 != 0) {
            while ((*puStack_20 != 0 && (iVar1 = fcn.0004e858(*puStack_20), iVar1 != 0))) {
                puStack_20 = puStack_20 + 1;
            }
        }
        arg1_00 = puStack_20;
        puVar2 = fcn.0004e874(arg1_00,arg2 & 0xffffffff);
        if ((puVar2 == puStack_20) || (*puStack_20 == 0)) {
            iStack_28 = (*arg4)(0,0,in_stack_00000028);
        }
        else {
            if (puVar2 == NULL) {
                iVar3 = fcn.0001472c(arg1_00,0x1000);
                puStack_18 = puStack_20 + iVar3 + -1;
            }
            else {
                puStack_18 = puVar2 + -1;
            }
            if (arg3 != 0) {
                while (iVar1 = fcn.0004e858(*puStack_18), iVar1 != 0) {
                    puStack_18 = puStack_18 + -1;
                }
            }
            iStack_28 = (*arg4)(puStack_20,(puStack_18 - arg1_00) + 1,in_stack_00000028);
        }
        if (iStack_28 < 1) break;
        if (puVar2 == NULL) {
            return 1;
        }
        puStack_20 = puVar2 + 1;
    }
    return iStack_28;
}


/* fcn.0004c480 @ 0x4c480 */

ulong fcn.0004c480(uint32_t arg1,int arg2,int arg3,uint32_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    uint32_t in_stack_00000028;
    
    iVar1 = fcn.0004c300(arg1);
    if (iVar1 == 0) {
        fcn.0001c9f0(0xd,0x81,0x41,0);
        uVar2 = 0;
    }
    else {
        if (-1 < arg2) {
            *(iVar1 + 4) = arg2;
        }
        if (-1 < arg3) {
            *(iVar1 + 8) = arg3;
        }
        if (arg4 != 0) {
            *(iVar1 + 0xc) = arg4;
        }
        if (in_stack_00000028 != 0) {
            *(iVar1 + 0x10) = in_stack_00000028 | 1;
        }
        uVar2 = 1;
    }
    return uVar2;
}


/* fcn.000496f0 @ 0x496f0 */

void fcn.000496f0(int64_t arg1)

{
    ulong *puVar1;
    uint64_t uStack_28;
    uint64_t uStack_18;
    
    if (*0x711e0 != 0) {
        for (uStack_18 = 0; uStack_18 < *0x711d8; uStack_18 = uStack_18 + 1) {
            puVar1 = *0x711e0 + uStack_18 * 0x18;
            fcn.00019380(*puVar1,0x4fff6,0);
            for (uStack_28 = 0; uStack_28 < puVar1[2]; uStack_28 = uStack_28 + 1) {
                fcn.00019380(*(puVar1[1] + uStack_28 * 0x10),0x4fff6,0);
                fcn.00019380(*(puVar1[1] + 8 + uStack_28 * 0x10),0x4fff6,0);
            }
            fcn.00019380(puVar1[1],0x4fff6,0);
        }
        fcn.00019380(*0x711e0,0x4fff6,0);
        *0x711e0 = 0;
        *0x711d8 = 0;
    }
    return;
}


/* fcn.0004e874 @ 0x4e874 */

char * fcn.0004e874(uint32_t arg1,int64_t arg2)

{
    char cVar1;
    uint in_register_0000000c;
    char *pcVar2;
    
    pcVar2 = CONCAT44(in_register_0000000c,arg1);
    do {
        cVar1 = *pcVar2;
        if (cVar1 == arg2) {
            return pcVar2;
        }
        pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return NULL;
}


/* fcn.00049d30 @ 0x49d30 */

bool fcn.00049d30(int64_t arg1,int64_t arg2)

{
    uint32_t arg2_00;
    int iVar1;
    char *pcVar2;
    bool bVar3;
    char *pcStack_30;
    char *pcStack_28;
    char *pcStack_20;
    int64_t iStack_18;
    
    iStack_18 = 0;
    pcVar2 = fcn.0004e88c(arg1,0x2c);
    if (pcVar2 == NULL) {
        pcStack_28 = arg2;
        pcStack_20 = arg1;
code_r0x00049ee6:
        iVar1 = fcn.0001e770(pcStack_20,arg2,pcStack_28);
        fcn.00019380(iStack_18,0x4fff6,0);
        bVar3 = iVar1 != 0;
    }
    else {
        pcStack_20 = pcVar2 + 1;
        if (*pcStack_20 == '\0') {
            bVar3 = false;
        }
        else {
            while (iVar1 = fcn.00024b00(*pcStack_20,8), pcStack_28 = arg1, iVar1 != 0) {
                pcStack_20 = pcStack_20 + 1;
            }
            while (iVar1 = fcn.00024b00(*pcStack_28,8), iVar1 != 0) {
                pcStack_28 = pcStack_28 + 1;
            }
            do {
                pcStack_30 = pcVar2 + -1;
                iVar1 = fcn.00024b00(*pcStack_30,8);
                if (iVar1 == 0) {
                    arg2_00 = pcStack_28;
                    iStack_18 = fcn.00019200((pcVar2 - arg2_00) + 1,0x4fff6,0);
                    if (iStack_18 == 0) {
                        fcn.0001c9f0(0xd,0x7c,0x41,0);
                        return false;
                    }
                    fcn.0001320c(iStack_18,arg2_00,pcVar2 - arg2_00);
                    pcVar2[iStack_18 - pcStack_28] = '\0';
                    pcStack_28 = iStack_18;
                    goto code_r0x00049ee6;
                }
                pcVar2 = pcStack_30;
            } while (pcStack_30 != pcStack_28);
            bVar3 = false;
        }
    }
    return bVar3;
}


/* fcn.0004e88c @ 0x4e88c */

char * fcn.0004e88c(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    char *pcVar2;
    
    pcVar2 = NULL;
    do {
        cVar1 = *arg1;
        if (cVar1 == arg2) {
            pcVar2 = arg1;
        }
        arg1 = arg1 + 1;
    } while (cVar1 != '\0');
    return pcVar2;
}


/* fcn.0001e770 @ 0x1e770 */

uint fcn.0001e770(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    int iVar1;
    uint uVar2;
    int64_t *piVar3;
    uint32_t arg1_00;
    uint in_register_00000014;
    uint in_R8;
    uint uStack_18;
    
    uStack_18 = 0;
    if (CONCAT44(in_register_00000014,arg2) == 0) {
code_r0x0001e7aa:
        if (CONCAT44(in_R8,arg3) != 0) {
            iVar1 = fcn.0001e460(arg3);
            if (iVar1 != 0) goto code_r0x0001e7c0;
        }
        piVar3 = fcn.0001e2f0(arg1,1);
        if (piVar3 == NULL) {
            uStack_18 = 0;
        }
        else {
            arg1_00 = piVar3;
            iVar1 = fcn.0001e220(arg1_00);
            if (iVar1 == 0) {
                uVar2 = fcn.0001daf0(1);
                *(piVar3 + 2) = uVar2;
                *piVar3 = CONCAT44(in_register_00000014,arg2);
                piVar3[1] = CONCAT44(in_R8,arg3);
                uStack_18 = fcn.0001db20(arg1_00);
                *piVar3 = 0;
                piVar3[1] = 0;
            }
            else {
                fcn.0001c9f0(8,100,0x66,0);
            }
            fcn.00020510(arg1_00);
        }
    }
    else {
        iVar1 = fcn.0001e510(arg2);
        if (iVar1 == 0) goto code_r0x0001e7aa;
code_r0x0001e7c0:
        fcn.0001c9f0(8,100,0x66,0);
        uStack_18 = 0;
    }
    return uStack_18;
}


/* fcn.00049f40 @ 0x49f40 */

//WARNING: Removing unreachable block (ram,0x00049f9a)
//WARNING: Removing unreachable block (ram,0x0004a020)
//WARNING: Removing unreachable block (ram,0x00049fb9)
//WARNING: Removing unreachable block (ram,0x0004a075)

int64_t fcn.00049f40(int64_t arg1,uint32_t arg2)

{
    if (arg2 != 0) {
        arg1 = arg1 << (arg2 & 0x3f) | arg1 >> (0x40 - arg2 & 0x3f);
    }
    return arg1;
}


/* fcn.0004a090 @ 0x4a090 */

void fcn.0004a090(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint in_R8;
    
    uVar1 = *arg2 ^ *(arg2 + 0x28) ^ *(arg2 + 0x50) ^ *(arg2 + 0x78) ^ *(arg2 + 0xa0);
    uVar2 = *(arg2 + 8) ^ *(arg2 + 0x30) ^ *(arg2 + 0x58) ^ *(arg2 + 0x80) ^ *(arg2 + 0xa8);
    uVar3 = *(arg2 + 0x10) ^ *(arg2 + 0x38) ^ *(arg2 + 0x60) ^ *(arg2 + 0x88) ^ *(arg2 + 0xb0);
    uVar4 = *(arg2 + 0x18) ^ *(arg2 + 0x40) ^ *(arg2 + 0x68) ^ *(arg2 + 0x90) ^ *(arg2 + 0xb8);
    uVar5 = *(arg2 + 0x20) ^ *(arg2 + 0x48) ^ *(arg2 + 0x70) ^ *(arg2 + 0x98) ^ *(arg2 + 0xc0);
    uVar6 = fcn.00049f40(uVar2,1);
    uVar6 = uVar6 ^ uVar5;
    uVar7 = fcn.00049f40(uVar3,1);
    uVar7 = uVar7 ^ uVar1;
    uVar8 = fcn.00049f40(uVar4,1);
    uVar8 = uVar8 ^ uVar2;
    uVar2 = fcn.00049f40(uVar5,1);
    uVar2 = uVar2 ^ uVar3;
    uVar1 = fcn.00049f40(uVar1,1);
    uVar1 = uVar1 ^ uVar4;
    uVar3 = *arg2 ^ uVar6;
    uVar4 = fcn.00049f40(*(arg2 + 0x30) ^ uVar7,*0x6e5fe);
    uVar5 = fcn.00049f40(*(arg2 + 0x60) ^ uVar8,*0x6e604);
    uVar9 = fcn.00049f40(*(arg2 + 0x90) ^ uVar2,*0x6e60a);
    uVar10 = fcn.00049f40(*(arg2 + 0xc0) ^ uVar1,*0x6e610);
    *arg1 = uVar3 ^ ~uVar4 & uVar5 ^ *(CONCAT44(in_R8,arg3) * 8 + 0x6e620);
    *(arg1 + 8) = uVar4 ^ ~uVar5 & uVar9;
    *(arg1 + 0x10) = uVar5 ^ ~uVar9 & uVar10;
    *(arg1 + 0x18) = uVar9 ^ ~uVar10 & uVar3;
    *(arg1 + 0x20) = uVar10 ^ ~uVar3 & uVar4;
    uVar3 = fcn.00049f40(*(arg2 + 0x18) ^ uVar2,*0x6e5fb);
    uVar4 = fcn.00049f40(*(arg2 + 0x48) ^ uVar1,*0x6e601);
    uVar5 = fcn.00049f40(*(arg2 + 0x50) ^ uVar6,*0x6e602);
    uVar9 = fcn.00049f40(*(arg2 + 0x80) ^ uVar7,*0x6e608);
    uVar10 = fcn.00049f40(*(arg2 + 0xb0) ^ uVar8,*0x6e60e);
    *(arg1 + 0x28) = uVar3 ^ ~uVar4 & uVar5;
    *(arg1 + 0x30) = uVar4 ^ ~uVar5 & uVar9;
    *(arg1 + 0x38) = uVar5 ^ ~uVar9 & uVar10;
    *(arg1 + 0x40) = uVar9 ^ ~uVar10 & uVar3;
    *(arg1 + 0x48) = uVar10 ^ ~uVar3 & uVar4;
    uVar3 = fcn.00049f40(*(arg2 + 8) ^ uVar7,*0x6e5f9);
    uVar4 = fcn.00049f40(*(arg2 + 0x38) ^ uVar8,*0x6e5ff);
    uVar5 = fcn.00049f40(*(arg2 + 0x68) ^ uVar2,*0x6e605);
    uVar9 = fcn.00049f40(*(arg2 + 0x98) ^ uVar1,*0x6e60b);
    uVar10 = fcn.00049f40(*(arg2 + 0xa0) ^ uVar6,*0x6e60c);
    *(arg1 + 0x50) = uVar3 ^ ~uVar4 & uVar5;
    *(arg1 + 0x58) = uVar4 ^ ~uVar5 & uVar9;
    *(arg1 + 0x60) = uVar5 ^ ~uVar9 & uVar10;
    *(arg1 + 0x68) = uVar9 ^ ~uVar10 & uVar3;
    *(arg1 + 0x70) = uVar10 ^ ~uVar3 & uVar4;
    uVar3 = fcn.00049f40(*(arg2 + 0x20) ^ uVar1,*0x6e5fc);
    uVar4 = fcn.00049f40(*(arg2 + 0x28) ^ uVar6,*0x6e5fd);
    uVar5 = fcn.00049f40(*(arg2 + 0x58) ^ uVar7,*0x6e603);
    uVar9 = fcn.00049f40(*(arg2 + 0x88) ^ uVar8,*0x6e609);
    uVar10 = fcn.00049f40(*(arg2 + 0xb8) ^ uVar2,*0x6e60f);
    *(arg1 + 0x78) = uVar3 ^ ~uVar4 & uVar5;
    *(arg1 + 0x80) = uVar4 ^ ~uVar5 & uVar9;
    *(arg1 + 0x88) = uVar5 ^ ~uVar9 & uVar10;
    *(arg1 + 0x90) = uVar9 ^ ~uVar10 & uVar3;
    *(arg1 + 0x98) = uVar10 ^ ~uVar3 & uVar4;
    uVar3 = fcn.00049f40(*(arg2 + 0x10) ^ uVar8,*0x6e5fa);
    uVar2 = fcn.00049f40(*(arg2 + 0x40) ^ uVar2,*0x6e600);
    uVar1 = fcn.00049f40(*(arg2 + 0x70) ^ uVar1,*0x6e606);
    uVar4 = fcn.00049f40(*(arg2 + 0x78) ^ uVar6,*0x6e607);
    uVar5 = fcn.00049f40(*(arg2 + 0xa8) ^ uVar7,*0x6e60d);
    *(arg1 + 0xa0) = uVar3 ^ ~uVar2 & uVar1;
    *(arg1 + 0xa8) = uVar2 ^ ~uVar1 & uVar4;
    *(arg1 + 0xb0) = uVar1 ^ ~uVar4 & uVar5;
    *(arg1 + 0xb8) = uVar4 ^ ~uVar5 & uVar3;
    *(arg1 + 0xc0) = uVar5 ^ ~uVar3 & uVar2;
    return;
}


/* fcn.0004b8e0 @ 0x4b8e0 */

//WARNING: Removing unreachable block (ram,0x0004b8f3)

int64_t fcn.0004b8e0(int64_t arg1)

{
    return arg1;
}


/* fcn.0004b870 @ 0x4b870 */

void fcn.0004b870(int64_t arg1)

{
    uint64_t uStack_e8;
    uchar auStack_d8 [216];
    
    for (uStack_e8 = 0; uStack_e8 < 0x18; uStack_e8 = uStack_e8 + 2) {
        fcn.0004a090(auStack_d8,arg1,uStack_e8);
        fcn.0004a090(arg1,auStack_d8,uStack_e8 + 1);
    }
    return;
}


/* fcn.0004bb50 @ 0x4bb50 */

//WARNING: Removing unreachable block (ram,0x0004bb63)

ulong fcn.0004bb50(uint32_t arg1)

{
    uint in_register_0000000c;
    
    return CONCAT44(in_register_0000000c,arg1);
}


/* fcn.00021eb0 @ 0x21eb0 */

void fcn.00021eb0(int64_t arg1)

{
    fcn.00022100(arg1,0);
    return;
}


/* fcn.000224a0 @ 0x224a0 */

void fcn.000224a0(int64_t arg1,int64_t arg2)

{
    fcn.00022340(arg1,arg2,2);
    return;
}


/* fcn.0004c1f0 @ 0x4c1f0 */

int fcn.0004c1f0(int64_t arg1,int64_t arg2)

{
    return *arg1 - *arg2;
}


/* fcn.0004c190 @ 0x4c190 */

void fcn.0004c190(int64_t arg1,int64_t arg2)

{
    fcn.000224a0(arg1,arg2);
    return;
}


/* fcn.0004c250 @ 0x4c250 */

void fcn.0004c250(int64_t arg1,int64_t arg2,int64_t arg3)

{
    fcn.0001e5c0(arg1,arg2,arg3 & 0xffffffff,0x14);
    return;
}


/* fcn.0004c170 @ 0x4c170 */

void fcn.0004c170(int64_t arg1)

{
    fcn.00021eb0(arg1);
    return;
}


/* fcn.0004c290 @ 0x4c290 */

void fcn.0004c290(int64_t arg1)

{
    int arg2;
    uint auStack_20 [8];
    
    auStack_20[0] = arg1;
    if ((*0x6fd28 != 0) && (arg2 = fcn.0004c190(*0x6fd28,auStack_20), -1 < arg2)) {
        fcn.00023390(*0x6fd28,arg2);
        return;
    }
    fcn.0004c250(auStack_20,0x6e700,0x1b);
    return;
}


/* fcn.0004c300 @ 0x4c300 */

uint * fcn.0004c300(int64_t arg1)

{
    int iVar1;
    uint *puVar2;
    uint *puVar3;
    
    if ((*0x6fd28 == 0) && (*0x6fd28 = fcn.0004c170(0x4c1c0), *0x6fd28 == 0)) {
        return NULL;
    }
    puVar2 = fcn.0004c290(arg1 & 0xffffffff);
    if ((puVar2 == NULL) || ((puVar2[4] & 1) == 0)) {
        puVar3 = fcn.00019290(0x14,0x4fff6,0);
        if (puVar3 == NULL) {
            fcn.0001c9f0(0xd,0x8a,0x41,0);
            puVar3 = NULL;
        }
        else {
            iVar1 = fcn.00026800(*0x6fd28,puVar3);
            if (iVar1 == 0) {
                fcn.00019380(puVar3,0x4fff6,0);
                puVar3 = NULL;
            }
            else if (puVar2 == NULL) {
                *puVar3 = arg1;
                puVar3[1] = 0xffffffff;
                puVar3[2] = 0xffffffff;
                puVar3[4] = 1;
            }
            else {
                *puVar3 = *puVar2;
                puVar3[1] = puVar2[1];
                puVar3[2] = puVar2[2];
                puVar3[3] = puVar2[3];
                puVar3[4] = puVar2[4] | 1;
            }
        }
    }
    else {
        puVar3 = puVar2;
    }
    return puVar3;
}


/* fcn.0004dbcc @ 0x4dbcc */

char * fcn.0004dbcc(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    char *pcVar1;
    char *pcVar2;
    uint in_register_0000000c;
    uint in_register_00000014;
    char *pcVar3;
    bool bVar4;
    
    if (CONCAT44(in_register_00000014,arg2) == 0) {
        return NULL;
    }
    pcVar2 = CONCAT44(in_register_00000014,arg2);
    bVar4 = false;
    pcVar1 = CONCAT44(in_register_0000000c,arg1);
    do {
        pcVar3 = pcVar1;
        if (pcVar2 == NULL) break;
        pcVar2 = pcVar2 + -1;
        pcVar3 = pcVar1 + 1;
        bVar4 = arg3 == *pcVar1;
        pcVar1 = pcVar3;
    } while (!bVar4);
    pcVar1 = pcVar3 + -1;
    if (!bVar4) {
        pcVar1 = pcVar2;
    }
    return pcVar1;
}


/* fcn.00021bd0 @ 0x21bd0 */

int64_t fcn.00021bd0(uint32_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    
    if (CONCAT44(in_register_0000000c,arg1) == 0) {
        iVar2 = 0;
    }
    else {
        iVar1 = fcn.00021cf0(arg1,arg2);
        iVar2 = fcn.00019200(iVar1 + 1,arg3,arg4 & 0xffffffff);
        if (iVar2 != 0) {
            fcn.0001320c(iVar2,arg1,iVar1);
            *(iVar2 + iVar1) = 0;
        }
    }
    return iVar2;
}


/* fcn.0004c5b0 @ 0x4c5b0 */

ulong fcn.0004c5b0(uint32_t arg1,uint32_t arg2,uint32_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    uint in_register_0000000c;
    uint in_register_00000014;
    uint in_R8;
    ulong *puStack_20;
    int64_t iStack_18;
    int64_t iStack_10;
    
    puStack_20 = NULL;
    iStack_18 = 0;
    iStack_10 = 0;
    iVar1 = *arg4;
    if ((((CONCAT44(in_register_0000000c,arg1) == 0) || (iStack_18 = fcn.00021b40(arg1,0x4fff6,0), iStack_18 != 0))
        && (((CONCAT44(in_register_00000014,arg2) == 0 || (CONCAT44(in_R8,arg3) == 0)) ||
            ((iVar3 = fcn.0004dbcc(arg2,arg3 - 1,0), iVar3 == 0 &&
             (iStack_10 = fcn.00021bd0(arg2,arg3,0x4fff6,0), iStack_10 != 0)))))) &&
       (puStack_20 = fcn.00019200(0x18,0x4fff6,0), puStack_20 != NULL)) {
        if (iVar1 == 0) {
            uVar4 = fcn.000267f0();
            *arg4 = uVar4;
            if (*arg4 == 0) goto code_r0x0004c71e;
        }
        *puStack_20 = 0;
        puStack_20[1] = iStack_18;
        puStack_20[2] = iStack_10;
        iVar2 = fcn.00026800(*arg4,puStack_20);
        if (iVar2 != 0) {
            return 1;
        }
    }
code_r0x0004c71e:
    fcn.0001c9f0(0x22,0xae,0x41,0);
    if (iVar1 == 0) {
        fcn.000233b0(*arg4);
        *arg4 = 0;
    }
    fcn.00019380(puStack_20,0x4fff6,0);
    fcn.00019380(iStack_18,0x4fff6,0);
    fcn.00019380(iStack_10,0x4fff6,0);
    return 0;
}


/* fcn.0004cd90 @ 0x4cd90 */

char * fcn.0004cd90(uint32_t arg1)

{
    int iVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    char *pcStack_18;
    char *pcStack_10;
    
    pcStack_18 = CONCAT44(in_register_0000000c,arg1);
    while ((*pcStack_18 != '\0' && (iVar1 = fcn.00024b00(*pcStack_18,8), iVar1 != 0))) {
        pcStack_18 = pcStack_18 + 1;
    }
    if (*pcStack_18 == '\0') {
        pcStack_18 = NULL;
    }
    else {
        iVar2 = fcn.0001472c(pcStack_18,0x1000);
        pcStack_10 = pcStack_18 + iVar2 + -1;
        while ((pcStack_10 != pcStack_18 && (iVar1 = fcn.00024b00(*pcStack_10,8), iVar1 != 0))) {
            pcStack_10 = pcStack_10 + -1;
        }
        if (pcStack_18 != pcStack_10) {
            pcStack_10[1] = '\0';
        }
        if (*pcStack_18 == '\0') {
            pcStack_18 = NULL;
        }
    }
    return pcStack_18;
}


/* fcn.0004c7b0 @ 0x4c7b0 */

void fcn.0004c7b0(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    uint in_register_00000014;
    uint32_t uStack_18;
    
    if (CONCAT44(in_register_00000014,arg2) == 0) {
        uStack_18 = 0;
    }
    else {
        uStack_18 = fcn.0001472c(arg2,0x1000);
    }
    fcn.0004c5b0(arg1,arg2,uStack_18,arg3);
    return;
}


/* fcn.00014994 @ 0x14994 */

int64_t fcn.00014994(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint in_register_00000014;
    char *pcVar1;
    uint in_R8;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_R8,arg3);
    pcVar1 = CONCAT44(in_register_00000014,arg2);
    if (uVar2 == 0) {
        return 0;
    }
    for (; (((*arg1 != '\0' && (*pcVar1 != '\0')) && (*arg1 == *pcVar1)) && (1 < uVar2)); uVar2 = uVar2 - 1) {
        arg1 = arg1 + 1;
        pcVar1 = pcVar1 + 1;
    }
    return *arg1 - *pcVar1;
}


/* fcn.0004ce80 @ 0x4ce80 */

uint fcn.0004ce80(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    uint32_t uStackX_10;
    uint32_t uStack_18;
    
    uStackX_10 = arg2;
    if (arg2 == 0xffffffff) {
        uStackX_10 = fcn.0001472c(arg1,0x1000);
    }
    *0x711e8 = 0x6eb40;
    uStack_18 = 0;
    while( true ) {
        if (0x30 < uStack_18) {
            return 0xffffffff;
        }
        if ((uStackX_10 == *(*0x711e8 + 1)) && (iVar1 = fcn.00014994(**0x711e8,arg1,uStackX_10), iVar1 == 0)) break;
        uStack_18 = uStack_18 + 1;
        *0x711e8 = *0x711e8 + 2;
    }
    return *(*0x711e8 + 0xc);
}


/* fcn.00029f20 @ 0x29f20 */

uint fcn.00029f20(int arg1)

{
    uint uVar1;
    
    if ((arg1 < 0) || (0x1e < arg1)) {
        uVar1 = 0;
    }
    else {
        uVar1 = *(arg1 * 4 + 0x6bf80);
    }
    return uVar1;
}


/* fcn.0004da14 @ 0x4da14 */

int fcn.0004da14(uint32_t arg1)

{
    uint16_t uVar1;
    
    if (arg1 < 0x80) {
        uVar1 = *(*0x4f630 + arg1 * 2) & 0x1030;
    }
    else {
        uVar1 = 0;
    }
    if (uVar1 != 0) {
        if (arg1 < 0x80) {
            uVar1 = *(*0x4f630 + arg1 * 2) & 0x20;
        }
        else {
            uVar1 = 0;
        }
        if (uVar1 != 0) {
            arg1 = *(arg1 + *0x4f638);
        }
        arg1 = arg1 - 7;
    }
    return arg1 - 0x30;
}


/* fcn.0004e848 @ 0x4e848 */

uint32_t * fcn.0004e848(uint32_t *arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    
    if (arg3 == 0) {
        return arg1;
    }
    puVar1 = arg1;
    for (; arg3 != 0; arg3 = arg3 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.0004e498 @ 0x4e498 */

//WARNING: Variable defined which should be unmapped: var_13h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h

int fcn.0004e498(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg_50h,int64_t arg_58h,
                int32_t arg_60h)

{
    uint32_t uVar1;
    int iVar2;
    int64_t arg2_00;
    uint64_t arg1_00;
    uint32_t auStackX_10 [2];
    uint64_t *in_stack_00000028;
    int32_t var_38h;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uchar uStack_40;
    uint uStack_3f;
    uchar auStack_3b [3];
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int8_t var_bp_18h;
    int32_t var_17h;
    uint32_t var_13h;
    int8_t var_fh;
    
    uStack_3f = 0xffffffff;
    arg2_00 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    _auStack_3b = 0;
    var_30h._1_1_ = 0;
    if ((((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) || ((in_stack_00000028 == NULL || (*in_stack_00000028 == 0)))) {
        iVar2 = 3;
        goto code_r0x0004e5f1;
    }
    iVar2 = fcn.0004e61c(noname_0,&uStack_58);
    if (iVar2 != 0) goto code_r0x0004e5f1;
    auStackX_10[0] = 0;
    if ((*in_stack_00000028 == 0) || (_auStack_3b == 0)) {
        iVar2 = 3;
    }
    else {
        uVar1 = uStack_48._4_4_;
        arg1_00 = uStack_48._4_4_;
        arg2_00 = 0;
        if (arg1_00 < arg2) {
code_r0x0004e541:
            iVar2 = 0x23;
        }
        else {
            iVar2 = fcn.0004e1fc(&uStack_58,arg1,arg2 & 0xffffffff);
            if (iVar2 == 0) {
                auStackX_10[0] = uVar1;
                arg2_00 = fcn.0004e824(arg1_00);
                if (arg2_00 == 0) {
                    iVar2 = 5;
                }
                else {
                    iVar2 = fcn.0004e07c(&uStack_58,arg2_00,auStackX_10);
                    if (iVar2 == 0) {
                        if (*in_stack_00000028 < auStackX_10[0]) goto code_r0x0004e541;
                        fcn.0004e848(arg3,0,*in_stack_00000028);
                        iVar2 = fcn.0004e7ec(arg3,*in_stack_00000028,arg2_00,auStackX_10[0]);
                        if (iVar2 == 0) {
                            *in_stack_00000028 = auStackX_10[0];
                        }
                    }
                }
            }
        }
    }
    fcn.0004e834(arg2_00);
    if ((iVar2 == 0) && (*in_stack_00000028 < _var_38h)) {
        iVar2 = 0xf0;
    }
code_r0x0004e5f1:
    fcn.0004e2dc(&uStack_58);
    return iVar2;
}


/* fcn.0004e6c4 @ 0x4e6c4 */

int fcn.0004e6c4(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int *piVar6;
    
    uVar5 = 0;
    iVar2 = arg2;
    if (iVar2 < 0x14) {
        if (iVar2 == 0x13) {
            piVar1 = 0x4f5d8;
            iVar2 = 0x300;
            uVar3 = *0x4f608;
            goto code_r0x0004e7ca;
        }
        if (iVar2 == 0) {
            piVar1 = 0x4f5b8;
            iVar2 = 0x2ff;
            uVar3 = *0x4f5d0;
            goto code_r0x0004e7ca;
        }
        if ((iVar2 == 7) || (iVar2 == 9)) {
            piVar1 = 0x4f310;
            iVar2 = 0x2fb;
            uVar3 = *0x4f358;
            goto code_r0x0004e7ca;
        }
        if (iVar2 != 10) {
            if (iVar2 != 0xe) {
                return 0x301;
            }
            piVar1 = 0x4f3b0;
            iVar2 = 0x2fe;
            uVar3 = *0x4f5b0;
            goto code_r0x0004e7ca;
        }
    }
    else {
        if (iVar2 == 0x14) {
            piVar1 = 0x4f610;
            iVar2 = 0x316;
            uVar3 = *0x4f628;
            goto code_r0x0004e7ca;
        }
        if (iVar2 == 0x16) {
            piVar1 = 0x4f360;
            iVar2 = 0x2fc;
            uVar3 = *0x4f380;
            goto code_r0x0004e7ca;
        }
        if (iVar2 == 0x17) {
            piVar1 = 0x4f140;
            iVar2 = 0x2fa;
            uVar3 = *0x4f308;
            goto code_r0x0004e7ca;
        }
        if (iVar2 != 0x18) {
            if (iVar2 != 0x19) {
                return 0x301;
            }
            piVar1 = 0x4ea90;
            iVar2 = 0x2f9;
            uVar3 = *0x4f138;
            goto code_r0x0004e7ca;
        }
    }
    piVar1 = 0x4f388;
    iVar2 = 0x2fd;
    uVar3 = *0x4f3a0;
code_r0x0004e7ca:
    if (uVar3 != 0) {
        piVar6 = piVar1;
        while (*piVar6 != arg1) {
            uVar4 = uVar5 + 1;
            uVar5 = uVar4;
            piVar6 = piVar6 + 2;
            if (uVar3 <= uVar4) {
                return iVar2;
            }
        }
        iVar2 = piVar1[uVar5 * 2 + 1];
    }
    return iVar2;
}


/* fcn.0004dcdc @ 0x4dcdc */

void fcn.0004dcdc(uint32_t arg1)

{
    if ((arg1 != 0) && (arg1 != *0x6ef80)) {
        *0x6ef80 = arg1;
    }
    return;
}


/* fcn.0004e418 @ 0x4e418 */

void fcn.0004e418(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uchar in_stack_00000028;
    
    if ((*0x6ef88 != 0) || (iVar1 = (**(*0x6fbd8 + 0x140))(0x4e920,0,0x6ef88), -1 < iVar1)) {
        (**(*0x6ef88 + 0x10))(arg1 & 0xffffffff,arg2,arg3 & 0xffffffff,arg4,in_stack_00000028);
    }
    return;
}


/* fcn.0004e3a0 @ 0x4e3a0 */

void fcn.0004e3a0(int64_t arg1,int64_t arg2,uint32_t *arg3,int64_t arg4)

{
    int64_t iVar1;
    
    if ((*0x6ef88 != 0) || (iVar1 = (**(*0x6fbd8 + 0x140))(0x4e920,0,0x6ef88), -1 < iVar1)) {
        (**(*0x6ef88 + 8))(arg1 & 0xffffffff,arg2 & 0xffffffff,arg3,arg4);
    }
    return;
}


/* fcn.0004e82c @ 0x4e82c */

int64_t fcn.0004e82c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    char cVar2;
    char *pcVar3;
    char *pcVar4;
    
    if ((arg3 == 0) || (arg1 == arg2)) {
        return 0;
    }
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


/* fcn.0004e61c @ 0x4e61c */

ulong fcn.0004e61c(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    uint32_t arg2_00;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    ulong uStack_18;
    ulong uStack_10;
    
    if (arg2 == 0) {
code_r0x0004e6b6:
        uVar2 = 3;
    }
    else {
        arg2_00 = arg2;
        if (arg1 == 0x17) {
            uStack_18 = *0x4e990;
            uStack_10 = *0x4e998;
            uVar2 = fcn.0004dcf4(&uStack_18,arg2_00);
            if (uVar2 == 0) {
                if (*(arg2 + 0x10) == uVar2 + '\x01') {
                    return uVar2;
                }
                fcn.0004e2dc(arg2_00);
            }
            uVar3 = *0x4e9a0;
            uVar4 = *0x4e9a4;
            uVar5 = *0x4e9a8;
            uVar6 = *0x4e9ac;
        }
        else {
            if (arg1 == 0x16) {
                arg1 = 5;
            }
            else if (arg1 == 0x18) {
                arg1 = 10;
            }
            else if (arg1 == 0x19) {
                arg1 = 1;
            }
            else if (0x14 < arg1) goto code_r0x0004e6b6;
            iVar1 = arg1 * 0x10;
            uVar3 = *(iVar1 + 0x4e940);
            uVar4 = *(iVar1 + 0x4e944);
            uVar5 = *(iVar1 + 0x4e948);
            uVar6 = *(iVar1 + 0x4e94c);
        }
        uStack_18 = CONCAT44(uVar4,uVar3);
        uStack_10 = CONCAT44(uVar6,uVar5);
        uVar2 = fcn.0004dcf4(&uStack_18,arg2_00);
    }
    return uVar2;
}


/* fcn.0004e1fc @ 0x4e1fc */

uint fcn.0004e1fc(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    char cVar2;
    uint uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint in_register_0000000c;
    ulong in_R9;
    uint uStackX_8;
    
    iVar5 = CONCAT44(in_register_0000000c,arg1);
    if (((iVar5 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        uVar3 = 3;
    }
    else if (*(iVar5 + 0x14) < arg3) {
        uVar3 = 0x23;
    }
    else {
        uVar1 = *(iVar5 + 0x12);
        cVar2 = '\x01';
        if (*(iVar5 + 0x18) != '\x01') {
            fcn.0004e848(&uStackX_8,0,8);
            in_R9 = 0;
            uStackX_8._0_1_ = 8;
            uStackX_8._2_1_ = 1;
            uStackX_8._1_1_ = uVar1;
            iVar4 = fcn.0004e418(*0x6ef84,&uStackX_8,8,0);
            if (iVar4 < 0) {
                return 0x20;
            }
            cVar2 = *(iVar5 + 0x18);
        }
        iVar5 = fcn.0004e418(*0x6ef84,arg2,arg3 & 0xffffffff,CONCAT71(in_R9 >> 8,cVar2 == '\0'));
        uVar3 = 0;
        if (iVar5 < 0) {
            uVar3 = 0x17;
        }
    }
    return uVar3;
}


/* fcn.0004e824 @ 0x4e824 */

void fcn.0004e824(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00014414(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.00010320(arg1_00,arg1);
    }
    return;
}


/* fcn.0004e07c @ 0x4e07c */

//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

uint fcn.0004e07c(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint uVar4;
    uint32_t auStackX_8 [2];
    int64_t var_20h;
    uint auStack_28 [2];
    uint32_t auStack_20 [2];
    int32_t var_bp_10h;
    int64_t var_8h;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar4 = 0;
    if ((((iVar3 == 0) || (arg2 == 0)) || (arg3 == 0)) || (auStackX_8[0] = *arg3, auStackX_8[0] == 0)) {
        return 3;
    }
    uVar1 = *(iVar3 + 0x14);
    if (uVar1 < auStackX_8[0]) {
        *arg3 = uVar1;
        auStackX_8[0] = uVar1;
    }
    iVar2 = fcn.0004e3a0(*0x6ef84,1,arg2,auStackX_8);
    if (-1 < iVar2) {
        if ((auStackX_8[0] == 8) && (*arg2 == '\b')) {
            auStackX_8[0] = *arg3;
            fcn.0004e848(arg2,0,auStackX_8[0]);
            iVar3 = fcn.0004e3a0(*0x6ef84,1,arg2,auStackX_8);
            if (iVar3 < 0) {
                if (iVar3 != -0x7fffffffffffffee) {
                    return 0x17;
                }
                (**(*0x6fbd8 + 0xf8))(40000000);
                auStackX_8[0] = *arg3;
                fcn.0004e848(arg2,0,auStackX_8[0]);
                iVar3 = fcn.0004e3a0(*0x6ef84,1,arg2,auStackX_8);
                if (iVar3 < 0) {
                    return 0x17;
                }
            }
            *arg3 = auStackX_8[0];
        }
        else {
            *arg3 = auStackX_8[0];
            if (*0x6ef84 == 0) {
                auStack_28[0] = 8;
                if (*(iVar3 + 0x18) != '\x01') {
                    fcn.0004e848(auStack_20,0,8);
                    iVar3 = fcn.0004e3a0(*0x6ef84,1,auStack_20,auStack_28);
                    uVar4 = 0;
                    if (iVar3 < 0) {
                        uVar4 = 0x20;
                    }
                }
                return uVar4;
            }
        }
        return 0;
    }
    return 0x17;
}


/* fcn.0004e7ec @ 0x4e7ec */

ulong fcn.0004e7ec(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint in_register_00000014;
    
    if ((arg1 == 0) || (arg3 == 0)) {
        uVar1 = 3;
    }
    else if (CONCAT44(in_register_00000014,arg2) < arg4) {
        uVar1 = 0x28;
    }
    else {
        fcn.0001320c(arg1,arg3,arg4);
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.0004e834 @ 0x4e834 */

void fcn.0004e834(int64_t arg1)

{
    if (arg1 != 0) {
        fcn.000144a4();
    }
    return;
}


/* fcn.000144a4 @ 0x144a4 */

void fcn.000144a4(void)

{
    //WARNING: Could not recover jumptable at 0x000144ab. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x6fbd8 + 0x48))();
    return;
}


/* fcn.0004e2dc @ 0x4e2dc */

int fcn.0004e2dc(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    uchar uStackX_8;
    uchar uStackX_9;
    uchar uStackX_a;
    uint auStackX_10 [2];
    char acStackX_18 [3];
    char cStackX_1b;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    auStackX_10[0] = 8;
    if (iVar2 == 0) {
        return arg1 + 3;
    }
    if (*(iVar2 + 0x18) == '\0') {
        fcn.0004e848(&uStackX_8,0,4);
        fcn.0004e848(acStackX_18,0,8);
        uStackX_9 = *(iVar2 + 0x12);
        uStackX_8 = 7;
        uStackX_a = 1;
        iVar1 = fcn.0004e418(*0x6ef84,&uStackX_8,4,0);
        if ((((iVar1 < 0) || (iVar1 = fcn.0004e3a0(*0x6ef84,1,acStackX_18,auStackX_10), iVar1 < 0)) ||
            (acStackX_18[0] != -0x79)) || (cStackX_1b != '\0')) {
            return 0x1d;
        }
        *(iVar2 + 0x1d) = 0;
    }
    else {
        *(iVar2 + 0x1d) = 0;
    }
    return 0;
}


/* fcn.0004dcf4 @ 0x4dcf4 */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_15h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h
//WARNING: Type propagation algorithm not settling

int fcn.0004dcf4(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint in_register_00000014;
    ulong *puVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    uint auStackX_10 [2];
    uint uStackX_18;
    uint uStackX_20;
    int32_t var_6fh;
    int32_t var_77h;
    int64_t var_7fh;
    uint uStack_a8;
    char acStack_a4 [3];
    uint8_t uStack_a1;
    uint32_t auStack_a0 [2];
    char acStack_98 [3];
    char cStack_95;
    uint auStack_90 [2];
    uint uStack_88;
    ulong uStack_84;
    ulong uStack_7c;
    uchar uStack_74;
    uchar uStack_73;
    char cStack_72;
    uchar uStack_71;
    uint uStack_70;
    char acStack_68 [23];
    int64_t var_49h;
    int64_t var_41h;
    uint32_t var_39h;
    int32_t var_31h;
    int64_t var_29h;
    int8_t var_15h;
    int8_t var_14h;
    int8_t var_13h;
    int8_t var_12h;
    int32_t var_11h;
    uint32_t var_9h;
    
    puVar2 = CONCAT44(in_register_00000014,arg2);
    auStackX_10[0] = 0;
    if (puVar2 == NULL) {
        return arg2 + 3;
    }
    if (*(puVar2 + 0x1d) != 0) {
        auStack_90[0] = 8;
        if (*(puVar2 + 3) == '\0') {
            fcn.0004e848(&uStackX_18,0,4);
            fcn.0004e848(acStack_98,0,8);
            uStackX_18 = CONCAT31(CONCAT21(uStackX_18._2_2_,*(puVar2 + 0x12)),7);
            uVar4 = uStackX_18;
            uStackX_18._0_3_ = CONCAT12(1,uVar4);
            iVar1 = fcn.0004e418(*0x6ef84,&uStackX_18,4,0);
            if ((((iVar1 < 0) || (iVar1 = fcn.0004e3a0(*0x6ef84,1,acStack_98,auStack_90), iVar1 < 0)) ||
                (acStack_98[0] != -0x79)) || (cStack_95 != '\0')) goto code_r0x0004ddbc;
        }
        *(puVar2 + 0x1d) = 0;
    }
code_r0x0004ddbc:
    *(puVar2 + 3) = 0;
    *(puVar2 + 0x12) = 0;
    uVar4 = *0x6ef84;
    if ((*0x6ef88 != 0) || (iVar1 = (**(*0x6fbd8 + 0x140))(0x4e920,0,0x6ef88), -1 < iVar1)) {
        if (*0x4e930 != uVar4) {
            *0x4e930 = uVar4;
            iVar1 = (**(*0x6ef88 + 0x18))(uVar4);
            if (iVar1 < 0) {
                return 0x1c;
            }
        }
        fcn.0004e848(auStack_a0,0,4);
        fcn.0004e848(acStack_68,0,0x24);
        auStack_a0[0]._0_1_ = 4;
        uVar4 = 0;
        while (iVar1 = fcn.0004e418(*0x6ef84,auStack_a0,4,0), -1 < iVar1) {
            auStackX_10[0] = 0x24;
            iVar1 = fcn.0004e3a0(*0x6ef84,1,acStack_68,auStackX_10);
            if (-1 < iVar1) {
                if (acStack_68[0] != -0x7c) {
                    return 0x1c;
                }
                fcn.0004e848(&uStack_a8,0,4);
                uStack_a8._0_1_ = 5;
                uVar3 = 0;
                goto code_r0x0004ded3;
            }
            if (iVar1 != -0x7fffffffffffffee) {
                return 0x1c;
            }
            uVar4 = uVar4 + 1;
            if (2 < uVar4) {
                return 0x1c;
            }
        }
    }
    return 0x1c;
    while (uVar3 = uVar3 + 1, uVar3 < 0x100) {
code_r0x0004ded3:
        uStack_a8._1_1_ = uVar3;
        iVar1 = fcn.0004e418(*0x6ef84,&uStack_a8,4,0);
        if (iVar1 < 0) {
            return 0x1c;
        }
        fcn.0004e848(&uStack_88,0,0x1c);
        auStackX_10[0] = 0x1c;
        iVar1 = fcn.0004e3a0(*0x6ef84,1,&uStack_88,auStackX_10);
        if (iVar1 < 0) {
            return 0x1c;
        }
        if ((uStack_88._2_1_ == '\0') && (iVar1 = fcn.0004e82c(arg1,&uStack_84,0x10), iVar1 == 0)) {
            *(puVar2 + 0x12) = uStack_88._1_1_;
            *(puVar2 + 0x14) = uStack_70;
            break;
        }
    }
    if (*(puVar2 + 0x12) == '\0') {
        return 0x1c;
    }
    *(puVar2 + 2) = uStack_74;
    *(puVar2 + 0x11) = uStack_73;
    *(puVar2 + 0x13) = uStack_71;
    *(puVar2 + 0x12) = uStack_88._1_1_;
    *(puVar2 + 0x14) = uStack_70;
    *puVar2 = uStack_84;
    puVar2[1] = uStack_7c;
    if (cStack_72 != '\0') {
        *(puVar2 + 0x12) = cStack_72;
        *(puVar2 + 3) = 1;
code_r0x0004df98:
        *(puVar2 + 0x1d) = 1;
        return 0;
    }
    fcn.0004e848(&uStackX_20,0,4);
    fcn.0004e848(acStack_a4,0,4);
    uStackX_20._1_1_ = *(puVar2 + 0x12);
    uStackX_20._0_1_ = 6;
    uStackX_20._2_1_ = 1;
    iVar1 = fcn.0004e418(*0x6ef84,&uStackX_20,4,0);
    if (-1 < iVar1) {
        auStackX_10[0] = 4;
        iVar1 = fcn.0004e3a0(*0x6ef84,1,acStack_a4,auStackX_10);
        if (((-1 < iVar1) && (acStack_a4[0] == -0x7a)) && ((uStack_a1 & 0xfd) == 0)) {
            uStackX_18 = 8;
            if (*(puVar2 + 3) != '\x01') {
                fcn.0004e848(acStack_98,0,8);
                iVar1 = fcn.0004e3a0(*0x6ef84,1,acStack_98,&uStackX_18);
                if (iVar1 < 0) {
                    return 0x20;
                }
            }
            goto code_r0x0004df98;
        }
    }
    return 0x17;
}


