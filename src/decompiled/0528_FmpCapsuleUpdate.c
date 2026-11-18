// decompiled by r2ghidra: 0528_FmpCapsuleUpdate.pe32
// functions: 57

/* entry0 @ 0x10494 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uStackX_8;
    
    fcn.0001050c(arg1,arg2);
    uStackX_8 = 0;
    *0x14868 = arg1;
    iVar1 = (**(*0x147d8 + 0x80))(&uStackX_8,0x14020,0,0x140b0);
    if ((iVar1 < 0) && (*0x147f0 != 0)) {
        (**(*(arg2 + 0x60) + 0x48))();
        *0x147f0 = 0;
    }
    return iVar1;
}


/* fcn.0001050c @ 0x1050c */

void fcn.0001050c(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    int64_t iStackX_8;
    ulong *puStackX_10;
    ulong uStackX_18;
    
    *0x147d8 = *(arg2 + 0x60);
    *0x147e0 = *(arg2 + 0x58);
    *0x147d0 = arg2;
    iStackX_8 = arg1;
    fcn.00012e84();
    iVar3 = fcn.00012ef0();
    if (iVar3 == 0) {
        uVar4 = fcn.000103e0();
        fcn.00010390();
        uVar1 = in(0x1808);
        fcn.00010310(arg1,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x00010300();
        }
        fcn.00010310(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010390();
        }
        else {
            fcn.00010380();
        }
    }
    if (*0x147f0 == 0) {
        *0x148a8 = 0x2000;
        iVar3 = (**(*(arg2 + 0x60) + 0x40))(4);
        if (iVar3 < 0) {
            *0x147f0 = 0;
        }
    }
    fcn.00010320(1,0,0,&iStackX_8);
    iVar3 = (**(*0x147d8 + 0x140))(82000,0,&puStackX_10);
    *0x147f8 = '\0';
    if (-1 < iVar3) {
        uStackX_18 = 0;
        (**puStackX_10)(puStackX_10,0x147f8);
        if (*0x147f8 != '\0') {
            (*puStackX_10[1])(puStackX_10,&uStackX_18);
        }
    }
    (**(*0x147d8 + 0x140))(0x14000,0,0x14800);
    (**(*0x147d8 + 0x140))(0x13fe0,0,84000);
    (**(*0x147d8 + 0x140))(0x13f90,0,0x14810);
    (**(*0x147d8 + 0x140))(0x14070,0,0x14808);
    (**(*0x147d8 + 0x140))(0x13fc0,0,0x14818);
    fcn.000102e0(0x14828,8);
    iStackX_8 = 8;
    (**(*0x147e0 + 0x48))(0x14730,0x13f70,0,&iStackX_8,0x14828);
    return;
}


/* fcn.00012e84 @ 0x12e84 */

int64_t fcn.00012e84(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x147e8 == 0) {
        *0x147e8 = 0;
        if (*(*0x147d0 + 0x68) != 0) {
            piVar2 = *(*0x147d0 + 0x70);
            do {
                if ((*0x14030 == *piVar2) && (*0x14038 == piVar2[1])) {
                    *0x147e8 = (*(*0x147d0 + 0x70))[uVar1 * 3 + 2];
                    return *0x147e8;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x147d0 + 0x68));
        }
    }
    return *0x147e8;
}


/* fcn.00012ef0 @ 0x12ef0 */

void fcn.00012ef0(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00012e84();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00012f27:
            if ((piVar1 == NULL) || ((*0x141a8 == *(piVar1 + 4) && (*0x141b0 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00012f27;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.000103e0 @ 0x103e0 */

uint64_t fcn.000103e0(void)

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


/* fcn.00010390 @ 0x10390 */

void fcn.00010390(void)

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


/* fcn.00010380 @ 0x10380 */

void fcn.00010380(void)

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


/* fcn.000102e0 @ 0x102e0 */

int64_t fcn.000102e0(int64_t arg1,int64_t arg2)

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


/* fcn.00013bb0 @ 0x13bb0 */

ulong fcn.00013bb0(void)

{
    uint16_t uVar1;
    uint16_t *puVar2;
    uint16_t *puVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    uint16_t *puStackX_8;
    ulong uStackX_10;
    uchar auStack_28 [32];
    
    iVar4 = fcn.00012db0(0x142a8,0x13f40,&puStackX_8,0);
    iVar6 = 0;
    if ((-1 < iVar4) || (iVar4 = fcn.00012db0(0x14290,0x13f40,&puStackX_8,0), -1 < iVar4)) {
        puVar3 = puStackX_8;
        fcn.00011be0(auStack_28,0x12,0x14288,*puStackX_8);
        (**(*0x147d8 + 0x48))(puVar3);
        iVar4 = fcn.00012db0(auStack_28,0x13f40,&puStackX_8,0);
        puVar3 = puStackX_8;
        if (-1 < iVar4) {
            puVar2 = puStackX_8 + 3;
            uVar1 = puStackX_8[3];
            while (uVar1 != 0) {
                puVar2 = puVar2 + 1;
                iVar6 = iVar6 + 1;
                uVar1 = *puVar2;
            }
            puVar2 = puStackX_8 + iVar6 + 4;
            if ((*puVar2 == '\x04') && (*(puVar2 + 1) == '\x01')) {
                uVar5 = fcn.00011504(puVar2);
            }
            else {
                puStackX_8 = puVar2;
                iVar6 = (**(*0x147d8 + 0xb8))(0x13ff0,&puStackX_8,&uStackX_10);
                uVar5 = uStackX_10;
                if (iVar6 < 0) {
                    uVar5 = 0;
                }
            }
            (**(*0x147d8 + 0x48))(puVar3);
            return uVar5;
        }
    }
    return 0;
}


/* fcn.00012ff8 @ 0x12ff8 */

//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00012ff8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iStackX_8;
    uint64_t uStackX_10;
    int64_t var_bp_20h;
    int64_t var_28h;
    int64_t iStack_28;
    int64_t iStack_20;
    int64_t var_10h;
    int64_t var_8h;
    
    iStackX_8 = arg1;
    uStackX_10 = arg2;
    iVar1 = (**(*0x147d8 + 0x98))(*0x14840,0x13ff0,&iStack_20);
    if ((-1 < iVar1) && (iVar1 = (**(iStack_20 + 8))(iStack_20,&iStack_28), -1 < iVar1)) {
        iVar1 = (**(iStack_28 + 8))(iStack_28,&iStackX_8,L"CapUptBkTemp",0x8000000000000003,0);
        if ((-1 < iVar1) && (iVar1 = -0x7ffffffffffffffd, iStackX_8 != 0)) {
            do {
                uStackX_10 = arg4;
                if (0x1000 < arg4) {
                    uStackX_10 = 0x1000;
                }
                iVar1 = (**(iStackX_8 + 0x28))(iStackX_8,&uStackX_10,arg3);
                if (iVar1 < 0) break;
                arg3 = arg3 + uStackX_10;
                arg4 = arg4 - uStackX_10;
            } while (arg4 != 0);
            (**(iStackX_8 + 0x10))(iStackX_8);
            (**(iStack_28 + 0x10))(iStack_28);
        }
    }
    return iVar1;
}


/* fcn.000129e0 @ 0x129e0 */

ulong fcn.000129e0(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x147d8 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 15552 named .text
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


/* fcn.00010c9c @ 0x10c9c */

int64_t fcn.00010c9c(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t *puVar2;
    uint in_register_0000000c;
    uint32_t *arg2_00;
    int64_t iVar3;
    int64_t arg3;
    ulong *puVar4;
    int64_t aiStackX_8 [2];
    ulong uStackX_18;
    int64_t iStackX_20;
    
    arg2_00 = CONCAT44(in_register_0000000c,arg1);
    uStackX_18 = 0;
    iVar3 = -0x7ffffffffffffff2;
    puVar2 = arg2_00;
    if (*arg2_00 < 2) {
        arg3 = 0;
    }
    else {
        arg3 = *(arg2_00 + 8);
    }
    while( true ) {
        iVar1 = fcn.00010af8(&uStackX_18,puVar2 + 1,arg3);
        if (iVar1 == 0) {
            return iVar3;
        }
        puVar2 = fcn.000129e0();
        if (puVar2 == NULL) break;
        if ((arg2 != 0) && (puVar2 != arg2_00)) {
            section..text(puVar2,arg2_00,arg2);
        }
        iVar3 = (**(*0x147d8 + 0x98))(iVar1,0x13fa0,&iStackX_20);
        if (-1 < iVar3) {
            iVar3 = (**(*0x147d8 + 0x140))(0x14128,0,0x147a8);
            puVar4 = 0x140e8;
            if (iVar3 < 0) {
                puVar4 = 0x14108;
            }
            iVar3 = *(*puVar2 * 4 + 0x14250) + puVar2;
            if (puVar2[7] == 0) {
                iVar1 = 0;
            }
            else {
                iVar1 = puVar2[6] + iVar3;
            }
            aiStackX_8[0] = 0;
            (**puVar4)(0x14080,0);
            iVar3 = (**(iStackX_20 + 0x10))(iStackX_20,puVar2[5],iVar3,puVar2[6],iVar1,puVar4[3],aiStackX_8);
            (*puVar4[1])();
            if ((iVar3 < 0) && (aiStackX_8[0] != 0)) {
                (*puVar4[2])(L"Firmware Update failed");
                (**(*0x147d8 + 0x48))(aiStackX_8[0]);
            }
        }
        (**(*0x147d8 + 0x48))(puVar2);
    }
    return -0x7ffffffffffffff7;
}


/* fcn.0001161c @ 0x1161c */

//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_bh
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_31h

void fcn.0001161c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int16_t *piVar4;
    int16_t *piVar5;
    uint *puVar6;
    uint16_t uVar7;
    ulong noname_1;
    int16_t *piVar8;
    uint *puVar9;
    bool bVar10;
    uint uVar11;
    uint *puStackX_8;
    int16_t *in_stack_00000028;
    int64_t var_5fh;
    ulong uStack_c8;
    uint *puStack_c0;
    ushort uStack_b8;
    uchar uStack_b6;
    uchar uStack_b5;
    uint uStack_b4;
    uint uStack_b0;
    uint uStack_ac;
    uint uStack_a8;
    uint uStack_a0;
    uint uStack_9c;
    uint uStack_98;
    uint uStack_94;
    uint uStack_90;
    uint uStack_8c;
    uchar auStack_88 [15];
    int64_t var_71h;
    int64_t var_69h;
    int64_t var_61h;
    ushort uStack_5a;
    uchar auStack_58 [11];
    int32_t var_45h;
    int64_t var_41h;
    int64_t var_31h;
    int64_t var_21h;
    int64_t var_19h;
    int64_t var_bh;
    int16_t var_3h;
    int64_t var_1h;
    
    piVar5 = NULL;
    uVar7 = 0;
    if (*0x147c0 == '\0') {
        puStackX_8 = 0x16;
        noname_1 = 0x14170;
        iVar2 = (**(*0x147e0 + 0x48))(L"CapsuleLast",0x14170,0,&puStackX_8,&var_69h + 1);
        if (-1 < iVar2) {
            uStack_5a = 0;
            fcn.00012c10(&var_61h + 7,noname_1,&uStack_c8);
            uVar7 = uStack_c8 + 1;
            if (uStack_c8 == 100) {
                uVar7 = 0;
            }
        }
        *0x147c0 = '\x01';
        *0x14888 = uVar7;
    }
    iVar2 = fcn.00012db0(0x142c0,arg1,&puStack_c0,&puStackX_8);
    puVar9 = puStackX_8;
    if (iVar2 < 0) {
        uStack_98 = *arg1;
        uStack_94 = *(arg1 + 4);
        uStack_90 = *(arg1 + 8);
        uStack_8c = *(arg1 + 0xc);
        uStack_9c = 0;
        unique0x100003de = arg4;
        uVar11 = (**(*0x147e0 + 0x18))(auStack_88,0);
        if (in_stack_00000028 == NULL) {
            iVar2 = 2;
        }
        else {
            iVar1 = *in_stack_00000028;
            piVar4 = piVar5;
            while (iVar1 != 0) {
                if (0xffe < piVar4) {
                    piVar4 = 0x1000;
                    break;
                }
                piVar4 = piVar4 + 1;
                iVar1 = in_stack_00000028[piVar4];
            }
            iVar2 = piVar4 * 2 + 2;
        }
        if (arg2 == 0) {
            piVar4 = piVar5;
        }
        else {
            puStackX_8 = NULL;
            piVar4 = piVar5;
            if (1 < *arg2) {
                piVar4 = *(arg2 + 0x20);
            }
            iVar3 = fcn.00010af8(&puStackX_8,arg2 + 4,piVar4);
            piVar4 = NULL;
            if (((iVar3 != 0) && (iVar3 = (**(*0x147d8 + 0x98))(iVar3,0x13f60,&uStack_c8), -1 < iVar3)) &&
               (iVar3 = (**(*0x147d8 + 0x140))(0x13f80,0,&puStack_c0), -1 < iVar3)) {
                piVar4 = (**(puStack_c0 + 2))(uStack_c8,0,0);
            }
            uVar11 = *(arg2 + 4);
            uStack_b0 = *(arg2 + 8);
            uStack_ac = *(arg2 + 0xc);
            uStack_a8 = *(arg2 + 0x10);
            uStack_b5 = *(arg2 + 0x14);
            uStack_b8 = 1;
            uStack_b6 = arg3;
            uStack_b4 = uVar11;
        }
        if (piVar4 == NULL) {
            iVar3 = 2;
        }
        else {
            iVar1 = *piVar4;
            while (iVar1 != 0) {
                piVar8 = 0x1000;
                if (0xffe < piVar5) goto code_r0x0001181a;
                piVar5 = piVar5 + 1;
                iVar1 = piVar4[piVar5];
            }
            piVar8 = piVar5;
code_r0x0001181a:
            iVar3 = piVar8 * 2 + 2;
        }
        puVar9 = iVar2 + 0x44 + iVar3;
        puVar6 = fcn.000129e0(uVar11,puVar9);
        if (puVar6 == NULL) {
            return;
        }
        uStack_a0 = SUB84(puVar9,0);
        puStackX_8 = puVar6;
        if (puVar6 != &uStack_a0) {
            section..text(puVar6,&uStack_a0,0x30);
        }
        if (puVar6 + 0xc != &uStack_b8) {
            section..text(puVar6 + 0xc,&uStack_b8,0x14);
        }
        piVar5 = puVar6 + 0x11;
        if (in_stack_00000028 == NULL) {
            *piVar5 = 0;
            iVar2 = 2;
        }
        else if ((iVar2 != 0) && (piVar5 != in_stack_00000028)) {
            section..text(piVar5,in_stack_00000028,iVar2);
        }
        piVar5 = piVar5 + iVar2;
        if (piVar4 == NULL) {
            *piVar5 = 0;
        }
        else {
            if ((iVar3 != 0) && (piVar5 != piVar4)) {
                section..text(piVar5,piVar4,iVar3);
            }
            (**(*0x147d8 + 0x48))(piVar4);
        }
    }
    else {
        puStackX_8 = puStack_c0;
    }
    fcn.00011be0(auStack_58,0x18,0x142e8,*0x14888);
    puVar6 = puStackX_8;
    (**(*0x147e0 + 0x58))(auStack_58,0x14170,7,puVar9,puStackX_8);
    bVar10 = *0x14888 == 100;
    *0x14888 = *0x14888 + 1;
    if (bVar10) {
        *0x14888 = 0;
    }
    (**(*0x147d8 + 0x48))(puVar6);
    return;
}


/* fcn.0001072c @ 0x1072c */

void fcn.0001072c(void)

{
    ulong uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    ulong uStackX_8;
    
    uVar4 = 0;
    if (*0x14858 != 0) {
        do {
            uVar3 = 0;
            if (*0x14870 != 0) {
                do {
                    if (*(*0x14850 + uVar4 * 8) == *(*0x14848 + uVar3 * 8)) goto code_r0x000107bc;
                    uVar3 = uVar3 + 1;
                } while (uVar3 < *0x14870);
            }
            uVar1 = *(*0x14850 + uVar4 * 8);
            iVar2 = (**(*0x147d8 + 0x98))(uVar1,0x13fa0,&uStackX_8);
            if (-1 < iVar2) {
                (**(*0x147d8 + 0x90))(uVar1,0x13fa0,uStackX_8);
            }
code_r0x000107bc:
            uVar4 = uVar4 + 1;
        } while (uVar4 < *0x14858);
    }
    (**(*0x147d8 + 0x48))(*0x14850);
    *0x14858 = 0;
    return;
}


/* fcn.00012f40 @ 0x12f40 */

int64_t fcn.00012f40(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_8;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    
    iStackX_8 = arg1;
    iStackX_10 = arg2;
    iVar1 = (**(*0x147d8 + 0x98))(*0x14840,0x13ff0,&iStackX_8);
    if (-1 < iVar1) {
        iVar1 = (**(iStackX_8 + 8))(iStackX_8,&iStackX_10);
        if (-1 < iVar1) {
            iVar1 = (**(iStackX_10 + 8))(iStackX_10,aiStackX_18,L"CapUptBkTemp",3,0);
            if (iVar1 == -0x7ffffffffffffff2) {
                iVar1 = 0;
            }
            else if (-1 < iVar1) {
                if (aiStackX_18[0] == 0) {
                    iVar1 = -0x7ffffffffffffffd;
                }
                else {
                    iVar1 = (**(aiStackX_18[0] + 0x18))(aiStackX_18[0]);
                    (**(iStackX_10 + 0x10))(iStackX_10);
                }
            }
        }
    }
    return iVar1;
}


/* fcn.00010af8 @ 0x10af8 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

ulong fcn.00010af8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t uVar5;
    uchar auStackX_8 [8];
    uint32_t auStackX_20 [2];
    int64_t var_40h;
    uint32_t var_58h;
    uchar auStack_68 [8];
    ulong uStack_60;
    int64_t iStack_58;
    ulong *puStack_50;
    uchar auStack_48 [16];
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    
    uVar5 = *arg1;
    uVar4 = 0;
    iStack_58 = 0;
    bVar1 = true;
    while ((uVar5 < *0x14858 && (bVar1))) {
        iVar2 = (**(*0x147d8 + 0x98))(*(*0x14850 + uVar5 * 8),0x13fa0,&puStack_50);
        if (-1 < iVar2) {
            iVar2 = 0;
            uStack_60 = 0;
            iStack_58 = 0;
            iVar3 = (**puStack_50)(puStack_50,&uStack_60,0,auStackX_20,auStackX_8,auStack_48,auStack_68,
                                   &iStack_58);
            if (iVar3 == -0x7ffffffffffffffb) {
                iVar2 = fcn.000129e0(0x8000000000000005,uStack_60);
                if (iVar2 == 0) {
                    return 0;
                }
                iVar3 = (**puStack_50)(puStack_50,&uStack_60,iVar2,auStackX_20,auStackX_8,auStack_48,auStack_68,
                                       &iStack_58);
            }
            if ((((-1 < iVar3) && (*arg2 == *(iVar2 + 4))) && (*(arg2 + 8) == *(iVar2 + 0xc))) &&
               ((arg3 == 0 || ((2 < auStackX_20[0] && (arg3 == *(iVar2 + 0x68))))))) {
                bVar1 = false;
                uVar4 = *(*0x14850 + uVar5 * 8);
                *arg1 = uVar5 + 1;
            }
            if (iVar2 != 0) {
                (**(*0x147d8 + 0x48))(iVar2);
                uStack_60 = 0;
            }
            if (iStack_58 != 0) {
                (**(*0x147d8 + 0x48))();
            }
        }
        uVar5 = uVar5 + 1;
    }
    return uVar4;
}


/* fcn.000139dc @ 0x139dc */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.000139dc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong uVar6;
    uint64_t uVar7;
    ulong uVar8;
    uint64_t uVar9;
    int64_t iStackX_20;
    int64_t var_58h;
    ulong in_stack_ffffffffffffff98;
    uint uVar10;
    ulong in_stack_ffffffffffffffa0;
    uint32_t uVar12;
    uint64_t uVar11;
    uchar auStack_48 [16];
    int64_t var_bp_10h;
    
    uVar6 = *0x14878;
    uVar8 = *0x14860;
    uVar10 = in_stack_ffffffffffffff98 >> 0x20;
    uVar12 = in_stack_ffffffffffffffa0 >> 0x20;
    iVar4 = (**(*0x147d8 + 0x140))(0x14010,0,&iStackX_20);
    if (iVar4 < 0) {
        return -0x7ffffffffffffff2;
    }
    iVar3 = (**(iStackX_20 + 0x50))();
    if (iVar3 != 2) {
        if (arg3 == 0) {
            if (iVar3 == 1) {
                (**(*(*0x147d0 + 0x40) + 0x30))(*(*0x147d0 + 0x40));
            }
            uVar5 = 1;
            arg3 = 0;
        }
        else {
            uVar5 = 2;
            if (arg3 == 100) {
                (**(iStackX_20 + 0x78))(2,uVar6,uVar8,0,100,0x14830,auStack_48);
                uVar8 = 0;
                uVar6 = 0;
                uVar5 = 3;
                arg3 = 100;
            }
        }
        (**(iStackX_20 + 0x78))(uVar5,uVar6,uVar8,0,arg3,0x14830,auStack_48);
        return iVar4;
    }
    (**(*0x147d8 + 0x140))(0x13fd0,0,0x14898);
    iVar2 = *(*(*0x14898 + 0x18) + 8);
    uVar1 = *(iVar2 + 4);
    uVar9 = *(iVar2 + 8);
    fcn.0001389c(arg3);
    uVar11 = uVar12 << 0x20;
    uVar7 = uVar1 / 5;
    (**(iStackX_20 + 0x18))(uVar6,uVar7,uVar9 - 0x50,9,CONCAT44(uVar10,0xffffff),uVar11);
    (**(iStackX_20 + 0x18))(uVar8,uVar7,uVar9 - 0x3c,9,0xffffff,uVar11 & 0xffffffff00000000);
    return iVar4;
}


/* fcn.00013cdc @ 0x13cdc */

ulong fcn.00013cdc(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t arg1_00;
    int64_t arg2_00;
    
    arg1_00 = arg1;
    arg2_00 = arg2;
    if ((*0x14840 == 0) && (*0x14840 = fcn.00013bb0(), *0x14840 == 0)) {
        return 0x800000000000000e;
    }
    uVar1 = fcn.000130f8(arg1_00,arg2_00,arg1,arg2);
    return uVar1;
}


/* fcn.000107f0 @ 0x107f0 */

void fcn.000107f0(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    uint16_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint64_t *puVar11;
    uint64_t uVar12;
    int64_t arg2_00;
    ulong uStackX_8;
    ulong *apuStackX_18 [2];
    
    uVar9 = 0;
    piVar5 = 0x141e0;
    while ((*arg1 != *piVar5 || (*(arg1 + 8) != piVar5[1]))) {
        uVar9 = uVar9 + 1;
        piVar5 = piVar5 + 2;
        if (4 < uVar9) {
code_r0x00010842:
            if ((*arg1 == *0x13f50) && (*(arg1 + 8) == *0x13f58)) {
                if ((*0x147b0 != '\0') &&
                   ((uVar9 = *(arg1 + 0x18), *0x14840 != 0 || (*0x14840 = fcn.00013bb0(), *0x14840 != 0)))) {
                    fcn.00012ff8(piVar5,arg2,arg1,uVar9);
                }
                iVar8 = *(arg1 + 0x10) + arg1;
                uVar12 = (*(arg1 + 0x18) - iVar8) + arg1;
                uVar1 = *(iVar8 + 4);
                uVar10 = uVar1;
                uVar9 = (*(iVar8 + 6) - 1) + uVar1;
                uVar4 = uVar9;
                if (*(iVar8 + 8 + uVar4 * 8) < uVar12) {
                    if (uVar9 != 0) {
                        puVar11 = iVar8 + (uVar9 + 1) * 8;
                        do {
                            uVar9 = uVar4 - 1;
                            uVar4 = uVar9;
                            if (*puVar11 <= *(iVar8 + 8 + uVar4 * 8)) {
                                return;
                            }
                            puVar11 = puVar11 + -1;
                        } while (uVar9 != 0);
                    }
                    uVar6 = 0;
                    arg2_00 = iVar8 + (uVar10 + 1 + *(iVar8 + 6)) * 8;
                    if (uVar1 != 0) {
                        do {
                            if ((uVar6 + 1 == uVar10) && (*(iVar8 + 6) == 0)) {
                                iVar7 = uVar12 - *(iVar8 + 8 + uVar6 * 8);
                            }
                            else {
                                iVar7 = *(iVar8 + 0x10 + uVar6 * 8) - *(iVar8 + 8 + uVar6 * 8);
                            }
                            iVar2 = fcn.000129e0(uVar6 + 1,iVar7);
                            if (iVar2 != 0) {
                                if ((iVar7 != 0) && (iVar2 != arg2_00)) {
                                    section..text(iVar2,arg2_00,iVar7);
                                }
                                iVar3 = (**(*0x147d8 + 200))(0,*0x14868,0,arg2_00,iVar7,&uStackX_8);
                                if (iVar3 < 0) {
                                    (**(*0x147d8 + 0x48))(iVar2);
                                }
                                else {
                                    (**(*0x147d8 + 0xd0))(uStackX_8,0,0);
                                }
                            }
                            uVar10 = *(iVar8 + 4);
                            arg2_00 = arg2_00 + iVar7;
                            uVar6 = uVar6 + 1;
                        } while (uVar6 < *(iVar8 + 4));
                    }
                    iVar7 = 0x13fa0;
                    piVar5 = 0x2;
                    (**(*0x147d8 + 0x138))();
                    uVar1 = *(iVar8 + 6);
                    uVar6 = 0;
                    if (uVar1 != 0) {
                        do {
                            uVar4 = *(iVar8 + 4) + uVar6;
                            if (uVar6 + 1 == uVar1) {
                                iVar2 = uVar12 - *(iVar8 + 8 + uVar4 * 8);
                            }
                            else {
                                iVar2 = *(iVar8 + 0x10 + uVar4 * 8) - *(iVar8 + 8 + uVar4 * 8);
                            }
                            iVar3 = fcn.00010c9c(arg2_00,iVar2);
                            piVar5 = arg1;
                            iVar7 = arg2_00;
                            fcn.0001161c(arg1,arg2_00,uVar6,iVar3);
                            uVar1 = *(iVar8 + 6);
                            arg2_00 = arg2_00 + iVar2;
                            uVar6 = uVar6 + 1;
                        } while (uVar6 < uVar1);
                    }
                    fcn.0001072c();
                    if ((*0x14840 != 0) || (*0x14840 = fcn.00013bb0(), *0x14840 != 0)) {
                        fcn.00012f40(piVar5,iVar7);
                    }
                    if ((*(arg1 + 0x14) & 0x40000) != 0) {
                        *0x147a0 = 1;
                    }
                }
            }
            else {
                iVar8 = (**(*0x147d8 + 0x140))(arg1,0,apuStackX_18);
                if (-1 < iVar8) {
                    iVar8 = (**apuStackX_18[0])(apuStackX_18[0]);
                    fcn.0001161c(arg1,0,0,iVar8);
                }
            }
            return;
        }
    }
    arg1 = arg1 + *(arg1 + 0x10);
    goto code_r0x00010842;
}


/* fcn.000110f4 @ 0x110f4 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

void fcn.000110f4(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint auStackX_8 [2];
    uint64_t uStackX_10;
    int64_t var_bp_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t iStack_28;
    int64_t iStack_20;
    int64_t var_10h;
    int64_t var_8h;
    
    var_28h = 8;
    iVar1 = (**(*0x147e0 + 0x48))(L"OsIndications",0x13f40,auStackX_8,&var_28h,&uStackX_10);
    if ((iVar1 < 0) || ((uStackX_10 & 4) == 0)) {
        iVar1 = -0x7ffffffffffffff2;
    }
    else {
        uStackX_10 = uStackX_10 & 0xfffffffffffffffb;
        iVar1 = (**(*0x147e0 + 0x58))(L"OsIndications",0x13f40,auStackX_8[0],var_28h,&uStackX_10);
    }
    if (-1 < iVar1) {
        *0x14880 = fcn.00011414();
        if (*0x14880 != 0) {
            iVar1 = (**(*0x147d8 + 0x98))(*0x14880,0x13ff0,&iStack_20);
            if (-1 < iVar1) {
                iVar1 = (**(iStack_20 + 8))(iStack_20,&iStack_28);
                if (-1 < iVar1) {
                    iVar1 = (**(iStack_28 + 8))(iStack_28,&var_bp_20h,0x14260,1,0);
                    if (-1 < iVar1) {
                        piVar2 = fcn.000132d0(var_bp_20h);
                        iVar1 = *piVar2;
                        while (iVar1 != 0) {
                            piVar2 = piVar2 + 1;
                            fcn.00011248(var_bp_20h,iVar1);
                            (**(*0x147d8 + 0x48))(iVar1);
                            iVar1 = *piVar2;
                        }
                        (**(var_bp_20h + 0x10))(var_bp_20h);
                        (**(iStack_28 + 0x10))(iStack_28);
                    }
                }
            }
        }
    }
    return;
}


/* fcn.0001197c @ 0x1197c */

void fcn.0001197c(void)

{
    uint16_t uVar1;
    uchar auStack_28 [32];
    
    fcn.00011be0(auStack_28,0x18,0x142e8,100);
    (**(*0x147e0 + 0x58))(L"CapsuleMax",0x14170,6,0x16,auStack_28);
    if (*0x147c0 != '\0') {
        uVar1 = *0x14888 - 1;
        if (*0x14888 == 0) {
            uVar1 = 100;
        }
        fcn.00011be0(auStack_28,0x18,0x142e8,uVar1);
        (**(*0x147e0 + 0x58))(L"CapsuleLast",0x14170,7,0x16,auStack_28);
    }
    return;
}


/* fcn.00011be0 @ 0x11be0 */

void fcn.00011be0(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00011c44(noname_0,arg1 >> 1,0x40,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00011c44 @ 0x11c44 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00011c44(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x00011ca3;
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
code_r0x00011ca3:
    if ((arg3 & 0x40U) == 0) {
        if (1000000 < arg2) {
            return 0;
        }
        uVar14 = 1;
    }
    else {
        if (1000000 < arg2) {
            return 0;
        }
        uVar14 = 2;
    }
    if ((arg3 >> 8 & 1) == 0) {
        uVar5 = fcn.00012d04(arg4);
        if (1000000 < uVar5) {
            return 0;
        }
        var_78h = 1;
        uStack_98 = 0xff;
    }
    else {
        if (arg4 == 0) {
            uVar5 = 0;
        }
        else {
            uVar5 = fcn.00012a3c(arg4,0xf4241);
        }
        puVar17 = NULL;
        if (1000000 < uVar5) {
            return 0;
        }
        var_78h = 2;
        uStack_98 = 0xffff;
    }
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
    if (var_78h == 1) {
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
            pcVar8 = 0x143b4;
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
code_r0x0001206e:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x143b4;
            }
            else {
                pcVar8 = 0x143b8;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x00011e05:
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
                    goto code_r0x00011fa8;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x00011fbf;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x00011fa8;
                        }
                        goto code_r0x00011fbf;
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
code_r0x00011fa8:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x00011e05;
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
                        goto code_r0x00011e05;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x00011fbf;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x00011fa8;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x00011fbf:
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
                        fcn.000129bc(&var_68h_2,0x26,0,0x14348);
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
                            goto code_r0x0001206e;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x00012257;
                        if (uStack_a8 == 0x58) goto code_r0x0001234c;
                        if (uStack_a8 == 0x61) goto code_r0x00012260;
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
                            goto code_r0x00011de6;
                        }
                        if (uStack_a8 != 100) goto code_r0x00011de2;
                        goto code_r0x00012363;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x143b4;
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
                goto code_r0x00012590;
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
                            iVar12 = 0x1444b;
                            goto code_r0x00012313;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x00012313:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x00012590;
                    }
                    fcn.000129bc(&var_68h_2,0x26,0,0x143ac);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x00012257:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x00012260:
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
                        goto code_r0x00012590;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x00011de2;
                            goto code_r0x00012350;
                        }
                        goto code_r0x00012355;
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
                        goto code_r0x00012590;
                    }
                    fcn.000129bc(&var_68h_2,0x26,0,0x14390);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x00012590;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x0001234c:
            uVar21 = uVar21 | 0x20;
code_r0x00012350:
            uVar21 = uVar21 | 0x80;
code_r0x00012355:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x00012363:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x000123a5;
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
code_r0x000123a5:
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
code_r0x0001242d:
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
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x0001242d;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar10 = uVar5;
            do {
                uVar6 = uVar10 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = "0123456789ABCDEFS"[uVar10 % uVar16];
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
code_r0x00011de2:
            pcVar8 = &uStack_a8;
code_r0x00011de6:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x00012590:
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
                arg1 = fcn.00011c10(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00011c10(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
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
                arg1 = fcn.00011c10(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
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
                arg1 = fcn.00011c10(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
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


/* fcn.00011adc @ 0x11adc */

void fcn.00011adc(void)

{
    int64_t iVar1;
    char *pcStackX_8;
    ulong uStackX_10;
    char acStack_238 [42];
    uchar auStack_20e [514];
    uint uStack_c;
    
    uStackX_10 = 0;
    if (*0x147c8 != 0) {
        uStack_c = *0x147b8;
        iVar1 = (**(*0x147d8 + 0x98))(*0x14880,0x13f60,&pcStackX_8);
        if (iVar1 == 0) {
            for (; *pcStackX_8 != '\x7f'; pcStackX_8 = pcStackX_8 + *(pcStackX_8 + 2)) {
                if ((*pcStackX_8 == '\x04') && (pcStackX_8[1] == '\x01')) {
                    if (acStack_238 != pcStackX_8) {
                        section..text(acStack_238,pcStackX_8,0x2a);
                    }
                    iVar1 = fcn.00011a2c(auStack_20e);
                    if (iVar1 == 0) {
                        iVar1 = (**(*0x147e0 + 0x58))(L"AmiMediaCapsuleVariableName",0x14060,7,0x230,acStack_238);
                        if (-1 < iVar1) {
                            *0x147a0 = 1;
                        }
                        return;
                    }
                    return;
                }
            }
        }
    }
    return;
}


/* fcn.00012a68 @ 0x12a68 */

ulong fcn.00012a68(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    uint64_t uVar2;
    int64_t arg2_00;
    int16_t *piVar3;
    
    if ((((*0x147c8 == NULL) || (arg2 == 0)) || (1000000 < arg1)) || ((1000000 < arg3 || (arg1 == 0)))) {
        return 0x8000000000000002;
    }
    arg2_00 = arg3;
    if (arg1 < arg3) {
        arg2_00 = arg1;
    }
    piVar3 = *0x147c8;
    uVar2 = fcn.00012a3c(arg2,arg2_00);
    if ((arg1 <= arg3) && (arg1 <= uVar2)) {
        return 0x8000000000000005;
    }
    if (arg3 < uVar2) {
        uVar2 = arg3;
    }
    if (arg2 <= piVar3) {
        if (piVar3 < arg2 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg2 < piVar3) goto code_r0x00012b14;
    }
    if (arg2 < piVar3 + arg1) {
        return 0x800000000000000f;
    }
code_r0x00012b14:
    if (uVar2 != 0) {
        arg2 = arg2 - piVar3;
        do {
            iVar1 = *(arg2 + piVar3);
            if (iVar1 == 0) break;
            *piVar3 = iVar1;
            piVar3 = piVar3 + 1;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    *piVar3 = 0;
    return 0;
}


/* fcn.00011414 @ 0x11414 */

uint64_t fcn.00011414(void)

{
    uint16_t *puVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint16_t uVar5;
    uint16_t *puStackX_8;
    int64_t iStackX_10;
    
    iVar2 = fcn.00012db0(0x142a8,0x13f40,&puStackX_8,0);
    puVar1 = puStackX_8;
    uVar4 = 0;
    if (-1 < iVar2) {
        uVar3 = fcn.00011300(*puStackX_8);
        (**(*0x147d8 + 0x48))(puVar1);
        (**(*0x147e0 + 0x58))(L"BootNext",0x13f40,0,0,0);
        if (uVar3 != 0) {
            return uVar3;
        }
    }
    iVar2 = fcn.00012db0(0x14290,0x13f40,&iStackX_10,&puStackX_8);
    uVar3 = uVar4;
    if (-1 < iVar2) {
        uVar5 = 0;
        if (puStackX_8 >> 1 != 0) {
            do {
                uVar3 = fcn.00011300(*(iStackX_10 + uVar4 * 2));
                if (uVar3 != 0) break;
                uVar5 = uVar5 + 1;
                uVar4 = uVar5;
            } while (uVar4 < puStackX_8 >> 1);
        }
        (**(*0x147d8 + 0x48))(iStackX_10);
    }
    return uVar3;
}


/* fcn.000132d0 @ 0x132d0 */

int64_t fcn.000132d0(int64_t arg1)

{
    char cVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t iStackX_8;
    int64_t aiStackX_10 [3];
    uint32_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    
    aiStackX_10[1] = 0;
    piVar2 = fcn.000137c8();
    do {
        iStackX_8 = 0;
        aiStackX_10[0] = 0;
        iVar3 = (**(arg1 + 0x20))(arg1,&iStackX_8,0);
        if (iVar3 == -0x7ffffffffffffffb) {
            aiStackX_10[0] = fcn.000129e0();
            iVar3 = (**(arg1 + 0x20))(arg1);
        }
        if ((aiStackX_10[0] != 0) && (-1 < iVar3)) {
            if (iStackX_8 == 0) {
code_r0x00013391:
                fcn.00013d2c(*piVar2,*(piVar2 + 0xc) / *(piVar2 + 2),*(piVar2 + 2));
                fcn.00013808(piVar2,aiStackX_10 + 1);
                return *piVar2;
            }
            if ((*(aiStackX_10[0] + 0x50) != 0x2e) || (*(aiStackX_10[0] + 0x52) != 0)) {
                if ((*(aiStackX_10[0] + 0x48) & 6) == 0) {
                    if (*0x148a0 != 0) {
                        cVar1 = fcn.000133c4(aiStackX_10[0] + 0x50);
                        goto code_r0x00013372;
                    }
                }
                else {
                    cVar1 = '\0';
code_r0x00013372:
                    if (cVar1 == '\0') goto code_r0x00013382;
                }
                fcn.00013808(piVar2,aiStackX_10);
            }
        }
code_r0x00013382:
        if ((iStackX_8 == 0) || (iVar3 < 0)) goto code_r0x00013391;
    } while( true );
}


/* fcn.00011248 @ 0x11248 */

void fcn.00011248(int64_t noname_0,int64_t arg1)

{
    int64_t arg3;
    int64_t iVar1;
    int64_t iVar2;
    int64_t iStackX_10;
    uint64_t auStackX_18 [2];
    
    if ((*(arg1 + 0x48) & 0x1f) != 0) {
        return;
    }
    arg3 = arg1 + 0x50;
    iVar1 = (**(noname_0 + 8))(noname_0,&iStackX_10,arg3,3,0);
    if (iVar1 < 0) {
        return;
    }
    auStackX_18[0] = *(arg1 + 8);
    iVar1 = fcn.000129e0();
    if (iVar1 == 0) {
        return;
    }
    iVar2 = (**(iStackX_10 + 0x20))(iStackX_10,auStackX_18,iVar1);
    if ((-1 < iVar2) && (auStackX_18[0] != 0)) {
        if (auStackX_18[0] == *(iVar1 + 0x18)) {
            iVar2 = fcn.00011040(iVar1,auStackX_18[0],arg3);
            if (-1 < iVar2) goto code_r0x000112e9;
            fcn.000107f0(iVar1,arg3);
        }
        (**(iStackX_10 + 0x18))(iStackX_10);
    }
code_r0x000112e9:
    (**(*0x147d8 + 0x48))(iVar1);
    return;
}


/* fcn.00011040 @ 0x11040 */

ulong fcn.00011040(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    uint64_t uVar2;
    uint in_register_0000000c;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    
    piVar5 = 0x141b8;
    uVar2 = 0;
    uVar4 = uVar2;
    while ((*CONCAT44(in_register_0000000c,arg1) != *piVar5 ||
           (*(CONCAT44(in_register_0000000c,arg1) + 8) != piVar5[1]))) {
        uVar3 = uVar4 + 1;
        uVar4 = uVar3;
        piVar5 = piVar5 + 2;
        if (1 < uVar3) {
            return 0x800000000000000e;
        }
    }
    if (arg3 != 0) {
        iVar1 = *arg3;
        while (iVar1 != 0) {
            if (0xffe < uVar2) {
                uVar2 = 0x1000;
                break;
            }
            uVar2 = uVar2 + 1;
            iVar1 = *(arg3 + uVar2 * 2);
        }
        uVar2 = uVar2 * 2 + 2;
    }
    *0x147c8 = fcn.000129e0();
    fcn.00012a68(CONCAT44(in_register_0000000c,arg1),uVar2 >> 1,arg3,(uVar2 >> 1) - 1);
    *0x147b8 = arg2;
    return 0;
}


/* fcn.00012db0 @ 0x12db0 */

int64_t fcn.00012db0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uStackX_18;
    
    uStackX_18 = 0;
    *arg3 = 0;
    if (arg4 != 0) {
        *arg4 = 0;
    }
    iVar1 = (**(*0x147e0 + 0x48))(arg1,arg2,0,&uStackX_18,0);
    if (iVar1 == -0x7ffffffffffffffb) {
        iVar1 = fcn.000129e0(0x8000000000000005,uStackX_18);
        *arg3 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x147e0 + 0x48))(arg1,arg2,0,&uStackX_18,iVar1);
            if (iVar1 < 0) {
                (**(*0x147d8 + 0x48))(*arg3);
                *arg3 = 0;
            }
            if (arg4 != 0) {
                *arg4 = uStackX_18;
            }
        }
    }
    return iVar1;
}


/* fcn.00011504 @ 0x11504 */

//WARNING: Variable defined which should be unmapped: var_10h

uint64_t fcn.00011504(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    char *arg1_00;
    uint64_t uVar4;
    char *pcStackX_10;
    char *pcStackX_18;
    uint64_t uStackX_20;
    int64_t var_38h;
    int64_t var_40h;
    uint32_t var_48h;
    uchar auStack_38 [16];
    int64_t var_10h;
    
    uVar2 = 0;
    iVar1 = (**(*0x147d8 + 0x138))(2,0x14040,0,&uStackX_20,&pcStackX_10);
    if (iVar1 < 0) {
        uVar2 = 0;
    }
    else {
        if (uStackX_20 != 0) {
            arg1_00 = pcStackX_10;
            uVar4 = uVar2;
            do {
                iVar1 = (**(*0x147d8 + 0x98))(*(pcStackX_10 + uVar4 * 8),0x13ff0,auStack_38);
                if ((-1 < iVar1) &&
                   (iVar1 = (**(*0x147d8 + 0x98))(*(pcStackX_10 + uVar4 * 8),0x13f60,&pcStackX_18), -1 < iVar1)) {
                    for (; (*pcStackX_18 != '\x7f' || (pcStackX_18[1] != -1));
                        pcStackX_18 = pcStackX_18 + *(pcStackX_18 + 2)) {
                        arg1_00 = pcStackX_18;
                    }
                    if ((*(arg1_00 + 2) == 0) || (arg1_00 == arg1)) {
                        uVar3 = uVar2;
                    }
                    else {
                        uVar3 = fcn.000102c0(arg1_00,arg1,*(arg1_00 + 2));
                    }
                    if (uVar3 == 0) {
                        uVar2 = *(pcStackX_10 + uVar4 * 8);
                        break;
                    }
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < uStackX_20);
        }
        (**(*0x147d8 + 0x48))(pcStackX_10);
    }
    return uVar2;
}


/* fcn.00011300 @ 0x11300 */

int64_t fcn.00011300(int64_t arg1)

{
    int16_t *piVar1;
    int16_t iVar2;
    char *pcVar3;
    int64_t iVar4;
    uint64_t uVar5;
    char *arg1_00;
    int64_t iVar6;
    char *pcStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    uchar auStack_38 [32];
    
    fcn.00011be0(auStack_38,0x12,0x14288,arg1 & 0xffff);
    iVar4 = fcn.00012db0(auStack_38,0x13f40,&pcStackX_10,0);
    pcVar3 = pcStackX_10;
    uVar5 = 0;
    if (-1 < iVar4) {
        piVar1 = pcStackX_10 + 6;
        if (piVar1 != NULL) {
            iVar2 = *piVar1;
            while (iVar2 != 0) {
                if (0xffe < uVar5) {
                    uVar5 = 0x1000;
                    break;
                }
                uVar5 = uVar5 + 1;
                iVar2 = piVar1[uVar5];
            }
            uVar5 = uVar5 * 2 + 2;
        }
        arg1_00 = uVar5 + piVar1;
        if ((*arg1_00 == '\x04') && (arg1_00[1] == '\x01')) {
            iVar4 = fcn.00011504(arg1_00);
        }
        else {
            pcStackX_10 = arg1_00;
            iVar6 = (**(*0x147d8 + 0xb8))(0x13ff0,&pcStackX_10,&iStackX_18);
            iVar4 = iStackX_18;
            if (iVar6 < 0) {
                iVar4 = 0;
            }
        }
        (**(*0x147d8 + 0x48))(pcVar3);
        if (((iVar4 != 0) && (iVar6 = (**(*0x147d8 + 0x98))(iVar4,0x13fb0,&iStackX_20), -1 < iVar6)) &&
           (*(iStackX_20 + 8) == '\x01')) {
            return iVar4;
        }
    }
    return 0;
}


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00012c10 @ 0x12c10 */

ulong fcn.00012c10(int64_t arg1,ulong noname_1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint16_t uVar3;
    int16_t iVar4;
    
    if (((arg1 != 0) && (arg2 != 0)) && (uVar1 = fcn.00012a3c(arg1,0xf4241), uVar1 < 0xf4241)) {
        for (; (*arg1 == 0x20 || (*arg1 == 9)); arg1 = arg1 + 2) {
        }
        iVar4 = 0x30;
        for (; *arg1 == 0x30; arg1 = arg1 + 2) {
        }
        uVar3 = *arg1;
        if (uVar3 - 0x61 < 0x1a) {
            uVar3 = uVar3 - 0x20;
        }
        if (uVar3 == 0x58) {
            if (*(arg1 + -2) != 0x30) {
                *arg2 = 0;
                return 0;
            }
            arg1 = arg1 + 2;
        }
        *arg2 = 0;
        uVar1 = 0xffffffffffffffff;
        for (; ((*arg1 - iVar4 < 10 || (*arg1 - 0x41 < 6)) || (*arg1 - 0x61 < 6)); arg1 = arg1 + 2) {
            iVar2 = fcn.00012d80(*arg1);
            if (uVar1 - iVar2 >> 4 < *arg2) {
                *arg2 = uVar1;
                return 0x8000000000000003;
            }
            *arg2 = *arg2 * 0x10 + iVar2;
        }
        return 0;
    }
    return 0x8000000000000002;
}


/* fcn.00012b4c @ 0x12b4c */

ulong fcn.00012b4c(int64_t arg1,ulong noname_1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    int16_t *piVar3;
    int64_t iVar4;
    uint64_t arg2_00;
    
    iVar1 = 0;
    iVar4 = 0x100;
    if (arg1 != 0) {
        iVar1 = fcn.00012a3c(arg1,0x100);
    }
    arg2_00 = iVar4 - iVar1;
    if ((arg1 == NULL) || (arg2 == NULL)) {
        return 0x8000000000000002;
    }
    if (arg2_00 == 0) {
        return 0x8000000000000004;
    }
    uVar2 = fcn.00012a3c(arg2,arg2_00);
    if (arg2_00 <= uVar2) {
        return 0x8000000000000005;
    }
    if (arg2 <= arg1) {
        if (arg1 < arg2 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg2 < arg1) goto code_r0x00012be6;
    }
    if (arg2 < arg1 + 0x200) {
        return 0x800000000000000f;
    }
code_r0x00012be6:
    piVar3 = arg1 + iVar1 * 2;
    for (; *arg2 != 0; arg2 = arg2 + 2) {
        *piVar3 = *arg2;
        piVar3 = piVar3 + 1;
    }
    *piVar3 = 0;
    return 0;
}


/* fcn.00011a2c @ 0x11a2c */

ulong fcn.00011a2c(int64_t arg1)

{
    int16_t iVar1;
    int64_t iVar2;
    int16_t *arg2;
    uint64_t uVar3;
    ulong uVar4;
    uint64_t noname_1;
    uint64_t uVar5;
    
    arg2 = *0x147c8;
    noname_1 = 0;
    uVar5 = noname_1;
    if (str.EFI_UpdateCapsule_[0] != L'\0') {
        uVar3 = noname_1;
        do {
            if (0x1ffd < uVar3) {
                uVar5 = 0x1000;
                break;
            }
            uVar5 = uVar5 + 1;
            iVar2 = uVar3 + 2;
            uVar3 = uVar3 + 2;
        } while (*(L"EFI/UpdateCapsule/" + iVar2) != 0);
    }
    if (*0x147c8 != NULL) {
        iVar1 = **0x147c8;
        uVar3 = noname_1;
        while (iVar1 != 0) {
            noname_1 = 0x1000;
            if (0xffe < uVar3) goto code_r0x00011a9d;
            uVar3 = uVar3 + 1;
            iVar1 = (*0x147c8)[uVar3];
        }
        noname_1 = uVar3;
    }
code_r0x00011a9d:
    if (noname_1 + uVar5 < 0x100) {
        *arg1 = 0;
        fcn.00012b4c(arg1,noname_1,0x14180);
        fcn.00012b4c(arg1,noname_1,arg2);
        uVar4 = 0;
    }
    else {
        uVar4 = 0x8000000000000005;
    }
    return uVar4;
}


/* fcn.00012a3c @ 0x12a3c */

uint64_t fcn.00012a3c(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if (arg2 == 0) {
        return 0;
    }
    if (*CONCAT44(in_register_0000000c,arg1) != 0) {
        while (uVar1 < arg2 - 1U) {
            uVar1 = uVar1 + 1;
            if (*(CONCAT44(in_register_0000000c,arg1) + uVar1 * 2) == 0) {
                return uVar1;
            }
        }
        uVar1 = arg2;
    }
    return uVar1;
}


/* fcn.00012d04 @ 0x12d04 */

uint64_t fcn.00012d04(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != '\0')) {
        while (uVar1 < 1000000) {
            uVar1 = uVar1 + 1;
            if (*(uVar1 + CONCAT44(in_register_0000000c,arg1)) == '\0') {
                return uVar1;
            }
        }
        uVar1 = 0xf4241;
    }
    return uVar1;
}


/* fcn.000129bc @ 0x129bc */

void fcn.000129bc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00011c44(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00011c10 @ 0x11c10 */

uchar * fcn.00011c10(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00012d80 @ 0x12d80 */

int64_t fcn.00012d80(int64_t arg1)

{
    int iVar1;
    uint16_t uVar2;
    
    uVar2 = arg1;
    if (uVar2 - 0x30 < 10) {
        iVar1 = (arg1 & 0xffff) - 0x30;
    }
    else {
        if (uVar2 - 0x61 < 0x1a) {
            uVar2 = uVar2 - 0x20;
        }
        iVar1 = uVar2 - 0x37;
    }
    return iVar1;
}


/* fcn.00012a10 @ 0x12a10 */

void fcn.00012a10(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000129e0(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102e0(arg1_00,arg1);
    }
    return;
}


/* fcn.000137c8 @ 0x137c8 */

ulong * fcn.000137c8(ulong param_1)

{
    ulong *puVar1;
    ulong uVar2;
    
    puVar1 = fcn.000129e0(param_1,0x18);
    *(puVar1 + 0xc) = 0;
    *(puVar1 + 1) = 800;
    *(puVar1 + 2) = 8;
    *(puVar1 + 0x14) = 0x32;
    uVar2 = fcn.000129e0();
    *puVar1 = uVar2;
    return puVar1;
}


/* fcn.000133c4 @ 0x133c4 */

bool fcn.000133c4(uint32_t arg1)

{
    int16_t iVar1;
    uint16_t uVar2;
    int16_t *piVar3;
    uint16_t *puVar4;
    ushort uVar5;
    int64_t iVar6;
    ushort *puVar7;
    uint in_register_0000000c;
    int16_t *piVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint16_t *puVar11;
    ushort *puVar12;
    
    piVar8 = CONCAT44(in_register_0000000c,arg1);
    iVar10 = 0;
    iVar1 = *piVar8;
    piVar3 = piVar8;
    iVar9 = iVar10;
    while (iVar1 != 0) {
        piVar3 = piVar3 + 1;
        iVar9 = iVar9 + 1;
        iVar1 = *piVar3;
    }
    do {
        iVar6 = iVar9 + -1;
        if (piVar8[iVar6] == 0x2e) {
            if (iVar6 == 0) {
                return true;
            }
            puVar11 = piVar8 + iVar9;
            uVar2 = *puVar11;
            puVar4 = puVar11;
            while (uVar2 != 0) {
                puVar4 = puVar4 + 1;
                iVar10 = iVar10 + 1;
                uVar2 = *puVar4;
            }
            puVar7 = fcn.000129e0(piVar8,iVar10 * 2 + 2);
            puVar12 = puVar7;
            for (; *puVar11 != 0; puVar11 = puVar11 + 1) {
                uVar5 = fcn.00013530(*puVar11);
                *puVar7 = uVar5;
                puVar7 = puVar7 + 1;
            }
            *puVar7 = 0;
            iVar9 = fcn.00012d28(0,puVar12);
            (**(*0x147d8 + 0x48))(puVar12);
            return iVar9 != 0;
        }
        iVar9 = iVar6;
    } while (iVar6 != 0);
    return true;
}


/* fcn.00013808 @ 0x13808 */

void fcn.00013808(uint32_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t *piVar3;
    int iVar4;
    
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = piVar3[1];
    if (*(piVar3 + 0xc) == iVar1) {
        iVar4 = *(piVar3 + 0x14) * piVar3[2] + iVar1;
        *(piVar3 + 1) = iVar4;
        iVar2 = fcn.000129e0(iVar1,iVar4);
        if ((*(piVar3 + 0xc) != 0) && (iVar2 != *piVar3)) {
            section..text(iVar2,*piVar3,*(piVar3 + 0xc));
        }
        (**(*0x147d8 + 0x48))(*piVar3);
        *piVar3 = iVar2;
    }
    iVar2 = *(piVar3 + 0xc) + *piVar3;
    if ((*(piVar3 + 2) != 0) && (iVar2 != arg2)) {
        section..text(iVar2,arg2,*(piVar3 + 2));
    }
    *(piVar3 + 0xc) = *(piVar3 + 0xc) + piVar3[2];
    return;
}


/* fcn.00013d2c @ 0x13d2c */

void fcn.00013d2c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    
    uVar1 = fcn.00012a10(arg3);
    fcn.00013d90(arg1,arg2,arg3,0x13758);
    //WARNING: Could not recover jumptable at 0x00013d8c. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x147d8 + 0x48))(uVar1);
    return;
}


/* fcn.00013d90 @ 0x13d90 */

void fcn.00013d90(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint in_register_00000014;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t arg2_00;
    int64_t in_stack_00000028;
    int64_t iStack_38;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    uVar3 = CONCAT44(in_register_00000014,arg2);
    if (1 < uVar3) {
        do {
            uStack_30 = 0;
            iStack_28 = uVar3 - 1;
            arg2_00 = iStack_28 * arg3 + arg1;
            if (iStack_28 != 0) {
                iVar2 = arg1;
                iStack_38 = arg1;
                do {
                    iVar1 = (*arg4)(iVar2,arg2_00);
                    if (iVar1 < 1) {
                        if (arg3 != 0) {
                            if (in_stack_00000028 != iStack_38) {
                                section..text(in_stack_00000028,iStack_38,arg3);
                            }
                            if (iStack_38 != iVar2) {
                                section..text(iStack_38,iVar2,arg3);
                            }
                            if (iVar2 != in_stack_00000028) {
                                section..text(iVar2,in_stack_00000028,arg3);
                            }
                        }
                        uStack_30 = uStack_30 + 1;
                        iStack_38 = iStack_38 + arg3;
                    }
                    iVar2 = iVar2 + arg3;
                    iStack_28 = iStack_28 + -1;
                } while (iStack_28 != 0);
            }
            if ((arg3 != 0) && (in_stack_00000028 != arg2_00)) {
                section..text(in_stack_00000028,arg2_00,arg3);
            }
            iVar2 = uStack_30 * arg3 + arg1;
            if (arg3 != 0) {
                if (arg2_00 != iVar2) {
                    section..text(arg2_00,iVar2,arg3);
                }
                if ((arg3 != 0) && (iVar2 != in_stack_00000028)) {
                    section..text(iVar2,in_stack_00000028,arg3);
                }
            }
            if (1 < uStack_30) {
                fcn.00013d90(arg1,uStack_30,arg3,arg4);
            }
            uVar3 = (uVar3 - uStack_30) - 1;
        } while ((1 < uVar3) && (arg1 = arg1 + (uStack_30 + 1) * arg3, 1 < uVar3));
    }
    return;
}


/* fcn.00013530 @ 0x13530 */

uint64_t fcn.00013530(int64_t arg1)

{
    uint16_t uVar1;
    
    if ((0x19 < arg1 - 0x61U) && ((uVar1 = arg1 - 0xe0, 0x1e < uVar1 || ((0x7f7fffffU >> (uVar1 & 0x1f) & 1) == 0)))) {
        return arg1 & 0xffff;
    }
    return (arg1 & 0xffff) - 0x20;
}


/* fcn.00012d28 @ 0x12d28 */

int16_t * fcn.00012d28(ulong noname_0,uint32_t arg1)

{
    int16_t *piVar1;
    int16_t *piVar2;
    int16_t iVar3;
    uint in_register_00000014;
    int16_t *piVar4;
    int16_t *piVar5;
    
    piVar4 = CONCAT44(in_register_00000014,arg1);
    piVar2 = *0x148a0;
    if (*piVar4 != 0) {
        for (; iVar3 = *piVar2, iVar3 != 0; piVar2 = piVar2 + 1) {
            piVar1 = piVar2;
            piVar5 = piVar4;
            if (iVar3 == *piVar4) {
                do {
                    if (iVar3 == 0) break;
                    piVar1 = piVar1 + 1;
                    piVar5 = piVar5 + 1;
                    iVar3 = *piVar1;
                } while (iVar3 == *piVar5);
            }
            if (*piVar5 == 0) {
                return piVar2;
            }
            if (*piVar1 == 0) break;
        }
        piVar2 = NULL;
    }
    return piVar2;
}


/* fcn.00013480 @ 0x13480 */

int16_t * fcn.00013480(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int16_t iVar2;
    int16_t *piVar3;
    uint in_register_0000000c;
    int16_t *piVar4;
    int64_t iVar5;
    
    piVar4 = CONCAT44(in_register_0000000c,arg1);
    iVar5 = 0;
    iVar2 = *piVar4;
    piVar3 = piVar4;
    while (iVar2 != 0) {
        piVar3 = piVar3 + 1;
        iVar5 = iVar5 + 1;
        iVar2 = *piVar3;
    }
    iVar1 = iVar5 + arg2;
    piVar3 = fcn.000129e0(piVar4,iVar1 * 2 + 2);
    if ((iVar5 * 2 != 0) && (piVar3 != piVar4)) {
        section..text(piVar3,piVar4,iVar5 * 2);
    }
    if (arg2 != 0) {
        piVar4 = piVar3 + iVar5;
        for (; arg2 != 0; arg2 = arg2 + -1) {
            *piVar4 = 0x20;
            piVar4 = piVar4 + 1;
        }
        iVar5 = iVar1;
    }
    piVar3[iVar5] = 0;
    return piVar3;
}


/* fcn.00013560 @ 0x13560 */

uint16_t * fcn.00013560(uint32_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint16_t *puVar2;
    uint16_t *puVar3;
    uint in_register_0000000c;
    uint16_t *puVar4;
    int16_t *piVar5;
    uint16_t *puVar6;
    uint16_t *puVar7;
    int64_t iVar8;
    uint32_t uVar9;
    
    puVar4 = CONCAT44(in_register_0000000c,arg1);
    puVar7 = NULL;
    uVar1 = *puVar4;
    puVar2 = puVar4;
    puVar6 = puVar7;
    while (uVar1 != 0) {
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
        uVar1 = *puVar2;
    }
    puVar2 = puVar7;
    piVar5 = arg2;
    if (*arg2 == 0) {
code_r0x000135c9:
        puVar3 = puVar7;
        if (puVar6 <= puVar2) goto code_r0x000135dc;
        puVar3 = fcn.00013480(arg2,puVar6 - puVar2);
        arg2 = puVar3;
    }
    else {
        do {
            piVar5 = piVar5 + 1;
            puVar2 = puVar2 + 1;
        } while (*piVar5 != 0);
        if (puVar2 <= puVar6) goto code_r0x000135c9;
        puVar3 = fcn.00013480(arg1,puVar2 - puVar6);
        puVar4 = puVar3;
    }
code_r0x000135dc:
    uVar1 = *puVar4;
    if (uVar1 != 0) {
        iVar8 = puVar4 - arg2;
        do {
            uVar1 = fcn.00013530(uVar1);
            uVar9 = uVar1;
            uVar1 = fcn.00013530(*arg2);
            puVar7 = uVar9 - uVar1;
            if (uVar9 - uVar1 != 0) break;
            arg2 = arg2 + 2;
            uVar1 = *(iVar8 + arg2);
        } while (uVar1 != 0);
    }
    if (puVar3 != NULL) {
        (**(*0x147d8 + 0x48))(puVar3);
    }
    return puVar7;
}


/* fcn.0001389c @ 0x1389c */

int64_t fcn.0001389c(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    
    iVar3 = 0;
    if ((*0x14890 != 0) || (iVar3 = (**(*0x147d8 + 0x140))(0x14010,0,0x14890), -1 < iVar3)) {
        iVar2 = (**(*0x14890 + 0x50))();
        if (iVar2 < 4) {
            if (arg1 == 0) {
                iVar3 = (**(*0x147d8 + 0x140))(0x13fd0,0,0x14898);
                if (*0x14898 != 0) {
                    iVar1 = *(*(*0x14898 + 0x18) + 8);
                    uVar4 = *(iVar1 + 4);
                    (**(*0x14890 + 0x40))(uVar4 / 5,*(iVar1 + 8) - 0x28,(uVar4 * 3) / 5,10,100);
                }
                *0x14838 = 0;
            }
            if (*0x14838 < arg1) {
                arg1 = arg1 - *0x14838;
                do {
                    (**(*0x14890 + 0x48))();
                    *0x14838 = *0x14838 + 1;
                    arg1 = arg1 + -1;
                } while (arg1 != 0);
            }
        }
        else {
            iVar3 = -0x7ffffffffffffffd;
        }
    }
    return iVar3;
}


/* fcn.000130f8 @ 0x130f8 */

//WARNING: Variable defined which should be unmapped: var_20h_2
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.000130f8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t arg1_00;
    int64_t iStackX_8;
    int64_t iStackX_10;
    int64_t var_20h_2;
    int64_t var_28h;
    int64_t iStack_38;
    int64_t iStack_30;
    int64_t var_20h;
    int64_t var_18h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_20h._0_4_ = 0x9576e92;
    var_20h._4_4_ = 0x11d26d3f;
    var_18h._0_4_ = 0xa000398e;
    var_18h._4_4_ = 0x3b7269c9;
    iStackX_8 = arg1;
    iStackX_10 = arg2;
    iVar1 = (**(*0x147d8 + 0x98))(*0x14840,0x13ff0,&iStack_30);
    if (iVar1 < 0) {
        return iVar1;
    }
    iStack_38 = 0;
    iVar1 = (**(iStack_30 + 8))(iStack_30,&iStack_38);
    if (iVar1 < 0) {
        return iVar1;
    }
    if (iStack_38 == 0) {
        return -0x7ffffffffffffff7;
    }
    iVar1 = (**(iStack_38 + 8))(iStack_38,&iStackX_10,L"CapUptBkTemp",1,0);
    if (iVar1 < 0) {
        return iVar1;
    }
    if (iStackX_10 == 0) {
        return -0x7ffffffffffffffd;
    }
    iStackX_8 = 0;
    iVar1 = (**(iStackX_10 + 0x40))(iStackX_10,&var_20h,&iStackX_8,0);
    if ((iVar1 < 0) && (iVar1 != -0x7ffffffffffffffb)) {
        return iVar1;
    }
    if ((arg3 == 0) || (arg4 == 0)) {
        return 0;
    }
    iVar1 = fcn.000129e0();
    if (iVar1 == 0) {
        return -0x7ffffffffffffff7;
    }
    iVar2 = (**(iStackX_10 + 0x40))(iStackX_10,&var_20h,&iStackX_8,iVar1);
    if (iVar2 < 0) goto code_r0x00013288;
    arg1_00 = *(iVar1 + 8);
    *arg4 = arg1_00;
    if (arg1_00 == 0) {
        *arg3 = 0;
    }
    else {
        iVar2 = fcn.00012a10(arg1_00);
        *arg3 = iVar2;
        if (iVar2 == 0) {
            iVar2 = -0x7ffffffffffffff7;
            goto code_r0x00013288;
        }
        iVar2 = (**(iStackX_10 + 0x20))(iStackX_10,arg4,iVar2);
        if (iVar2 < 0) goto code_r0x00013288;
    }
    iVar2 = 0;
code_r0x00013288:
    (**(*0x147d8 + 0x48))(iVar1);
    if (iStackX_10 != 0) {
        (**(iStackX_10 + 0x10))(iStackX_10);
    }
    if (iStack_38 != 0) {
        (**(iStack_38 + 0x10))(iStack_38);
    }
    return iVar2;
}


