// decompiled by r2ghidra: 0493_Setup.pe32
// functions: 337

/* entry0 @ 0x10500 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.00010558(arg1,arg2);
    iVar1 = fcn.00011020(arg1,arg2);
    if ((iVar1 < 0) && (*0x44e98 != 0)) {
        fcn.000396c8();
        (**(*0x44e00 + 0x48))(*0x44e98);
    }
    return iVar1;
}


/* fcn.00010558 @ 0x10558 */

ulong fcn.00010558(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    ulong noname_0;
    int64_t *piVar7;
    uchar auStackX_8 [8];
    ulong *puStackX_10;
    ulong uStackX_18;
    char *apcStack_18 [2];
    
    *0x44e00 = *(arg2 + 0x60);
    *0x44e10 = *(arg2 + 0x58);
    *0x44df8 = arg2;
    *0x44e08 = arg1;
    fcn.000381fc();
    noname_0 = 0x3f2b0;
    iVar4 = fcn.0003822c(0x3f2b0);
    if (iVar4 == 0) {
        uVar5 = fcn.000104e0();
        fcn.00010450();
        uVar2 = in(0x1808);
        fcn.00010430(noname_0,0x1808);
        while( true ) {
            iVar3 = in(0x1808);
            uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
            if ((uVar6 >> 0x17 & 1) != 0) break;
            fcn.00010420();
        }
        fcn.00010430(uVar6,0x1808);
        if ((uVar5 >> 9 & 1) == 0) {
            fcn.00010450();
        }
        else {
            fcn.00010440();
        }
    }
    if ((*0x44e60 != NULL) || (iVar4 = (**(*0x44e00 + 0x140))(0x3dba0), -1 < iVar4)) {
        (***0x44e60)(*0x44e60);
    }
    fcn.000103d0(1,0,0,auStackX_8);
    iVar4 = (**(*0x44e00 + 0x140))(0x3dba0,0,&puStackX_10);
    *0x44e69 = '\0';
    if (-1 < iVar4) {
        uStackX_18 = 0;
        (**puStackX_10)(puStackX_10,0x44e69);
        if (*0x44e69 != '\0') {
            (*puStackX_10[1])(puStackX_10,&uStackX_18);
        }
    }
    (**(*0x44e00 + 0x140))(0x3da20,0,0x44e70);
    (**(*0x44e00 + 0x140))(0x3d9f0,0,0x44e90);
    (**(*0x44e00 + 0x140))(0x3d8e0,0,0x44e80);
    (**(*0x44e00 + 0x140))(0x3dc70,0,0x44e78);
    (**(*0x44e00 + 0x140))(0x3d970,0,0x44e88);
    *0x44ea0 = 0x10000;
    if ((*0x44e98 != NULL) || ((*0x44e98 = fcn.00032bd8(0x10000), *0x44e98 != NULL && (0x37 < *0x44ea0)))) {
        uVar5 = *0x44ea0;
        piVar1 = *0x44e98;
        piVar7 = *0x44e98 + 5;
        iVar4 = *0x44ea0 - 0x28;
        **0x44e98 = piVar7;
        piVar1[1] = iVar4;
        piVar1[2] = 0;
        piVar1[3] = piVar1 + (uVar5 - 0x10);
        piVar1[4] = piVar7;
    }
    (**(*0x44e10 + 0x18))(apcStack_18,0);
    section..text(0x3f2c0,apcStack_18,0x10);
    uVar5 = 0;
    if (*(*0x44df8 + 0x68) != 0) {
        piVar7 = *(*0x44df8 + 0x70);
        do {
            if ((*0x3dbd0 == *piVar7) && (*0x3dbd8 == piVar7[1])) {
                *0x44eb0 = (*(*0x44df8 + 0x70))[uVar5 * 3 + 2];
                return 0;
            }
            uVar5 = uVar5 + 1;
            piVar7 = piVar7 + 3;
        } while (uVar5 < *(*0x44df8 + 0x68));
    }
    *0x44eb0 = 0;
    return 0x800000000000000e;
}


/* fcn.00011020 @ 0x11020 */

ulong fcn.00011020(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int16_t *piVar2;
    ulong uVar3;
    int16_t *piVar4;
    int64_t in_R8;
    uint auStackX_8 [2];
    int16_t *piStackX_18;
    ulong uStackX_20;
    int64_t var_c20h;
    int64_t var_c30h;
    int64_t var_c38h;
    uint uStack_ce8;
    uint uStack_ce4;
    uint uStack_ce0;
    uint uStack_cdc;
    uint uStack_cd8;
    uint uStack_cd4;
    uint uStack_cd0;
    uint uStack_ccc;
    uchar uStack_cb8;
    char cStack_cb7;
    
    if (*0x44e30 == 0) {
        *0x44e20 = *(arg2 + 0x60);
        *0x44e28 = *(arg2 + 0x58);
        *0x44e30 = arg2;
    }
    uVar3 = 0x10ddc;
    *0x44bc8 = arg1;
    fcn.000365e8(0x3d790,0x10ddc,in_R8,0x44ec8);
    uStack_ce8 = 0xec87d643;
    uStack_ce4 = 0x4bb5eba4;
    uStack_ce0 = 0x3e3fe5a1;
    uStack_cdc = 0xa90db236;
    uStackX_20 = 0xca9;
    piStackX_18 = NULL;
    uStack_cd8 = 0x718ad81;
    uStack_cd4 = 0x4850f26a;
    uStack_cd0 = 0x68f2eca6;
    uStack_ccc = 0x7d709e3;
    iVar1 = fcn.00039994(&uStack_cd8,CONCAT71(uVar3 >> 8,0x14),in_R8,&piStackX_18);
    if ((-1 < iVar1) && (piStackX_18 != NULL)) {
        piVar4 = 0x40dd0;
        piVar2 = piStackX_18;
        while( true ) {
            piVar2 = piVar2 + 1;
            if ((*piVar2 == 0) || (*piVar2 != *piVar4)) break;
            piVar4 = piVar4 + 1;
        }
        if (*piVar2 == *piVar4) {
            return 0;
        }
    }
    *0x44d18 = 1;
    iVar1 = (**(*0x44e10 + 0x48))(0x3ffe0,&uStack_ce8,auStackX_8,&uStackX_20,&uStack_cb8);
    if ((-1 < iVar1) && (cStack_cb7 == '\x01')) {
        iVar1 = fcn.00032b68();
        (**(iVar1 + 0xa0))(0x1dc,1);
        cStack_cb7 = 0;
        (**(*0x44e10 + 0x58))(0x3ffe0,&uStack_ce8,auStackX_8[0],uStackX_20,&uStack_cb8);
    }
    return 0;
}


/* fcn.000396c8 @ 0x396c8 */

void fcn.000396c8(void)

{
    int64_t *piVar1;
    int64_t iVar2;
    
    piVar1 = *0x44e98;
    if (*0x44e98 != NULL) {
        if ((*0x44e98)[1] != 0) {
            fcn.00010320(**0x44e98,(*0x44e98)[1],0);
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


/* fcn.000381fc @ 0x381fc */

int64_t fcn.000381fc(void)

{
    if (*0x44e58 == 0) {
        fcn.00037aac(0x3daa0,0x44e58);
    }
    return *0x44e58;
}


/* fcn.00037aac @ 0x37aac */

ulong fcn.00037aac(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x44df8;
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


/* fcn.0003822c @ 0x3822c */

void fcn.0003822c(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000381fc();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x0003825a:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x0003825a;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.000104e0 @ 0x104e0 */

uint64_t fcn.000104e0(void)

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


/* fcn.00010450 @ 0x10450 */

void fcn.00010450(void)

{
    return;
}


/* fcn.00010430 @ 0x10430 */

uint64_t fcn.00010430(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010422 @ 0x10422 */

void fcn.00010422(void)

{
    return;
}


/* fcn.00010440 @ 0x10440 */

void fcn.00010440(void)

{
    return;
}


/* fcn.000103d0 @ 0x103d0 */

uint64_t fcn.000103d0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00032bd8 @ 0x32bd8 */

int64_t fcn.00032bd8(int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_8 [4];
    
    aiStackX_8[0] = arg1;
    iVar1 = (**(*0x44e00 + 0x40))(6,0x10000,aiStackX_8);
    if (iVar1 < 0) {
        aiStackX_8[0] = 0;
    }
    return aiStackX_8[0];
}


/* section..text @ 0x102c0 */

char ** section..text(uint32_t arg1,char **arg2,int64_t arg3)

{
    uint in_register_0000000c;
    char **ppcVar1;
    uint64_t uVar2;
    char **ppcVar3;
    char **ppcVar4;
    uint64_t uVar5;
    uint8_t uVar6;
    
    ppcVar1 = CONCAT44(in_register_0000000c,arg1);
    //[00] -r-x section size 185088 named .text
    uVar6 = 0;
    ppcVar3 = arg2 + arg3 + -1;
    if ((arg2 < ppcVar1) && (ppcVar1 <= ppcVar3)) {
        ppcVar4 = ppcVar1 + arg3 + -1;
        uVar6 = 1;
        uVar5 = arg3;
    }
    else {
        uVar5 = arg3 & 7;
        ppcVar3 = arg2;
        ppcVar4 = ppcVar1;
        for (uVar2 = arg3 >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *ppcVar4 = *ppcVar3;
            ppcVar3 = ppcVar3 + 1;
            ppcVar4 = ppcVar4 + 1;
        }
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *ppcVar4 = *ppcVar3;
        ppcVar3 = ppcVar3 + uVar6 * -2 + 1;
        ppcVar4 = ppcVar4 + uVar6 * -2 + 1;
    }
    return ppcVar1;
}


/* fcn.00033098 @ 0x33098 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00033098(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x000330f7;
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
code_r0x000330f7:
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
        uVar21 = fcn.00034368(arg4,0xf4241);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.00033ecc(arg4,0xf4241);
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
            pcVar8 = 0x42764;
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
code_r0x000334b2:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x42764;
            }
            else {
                pcVar8 = 0x42768;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x00033249:
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
                    goto code_r0x000333ec;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x00033403;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x000333ec;
                        }
                        goto code_r0x00033403;
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
code_r0x000333ec:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x00033249;
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
                        goto code_r0x00033249;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x00033403;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x000333ec;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x00033403:
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
                        fcn.00033e00(&var_68h_2,0x26,0,0x426f8);
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
                            goto code_r0x000334b2;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x0003369b;
                        if (uStack_a8 == 0x58) goto code_r0x00033790;
                        if (uStack_a8 == 0x61) goto code_r0x000336a4;
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
                            goto code_r0x0003322a;
                        }
                        if (uStack_a8 != 100) goto code_r0x00033226;
                        goto code_r0x000337a7;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x42764;
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
                goto code_r0x000339d4;
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
                            iVar9 = (uVar10 & 0x7fffffffffffffff) * 0x15;
                            iVar12 = 0x427fb;
                            goto code_r0x00033757;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        iVar9 = 0x42770;
code_r0x00033757:
                        pcVar8 = iVar12 + iVar9;
                        if (pcVar8 != &var_68h_2) goto code_r0x000339d4;
                    }
                    fcn.00033e00(&var_68h_2,0x26,0,0x4275c);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x0003369b:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x000336a4:
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
                        goto code_r0x000339d4;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x00033226;
                            goto code_r0x00033794;
                        }
                        goto code_r0x00033799;
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
                        goto code_r0x000339d4;
                    }
                    fcn.00033e00(&var_68h_2,0x26,0,0x42740);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x000339d4;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x00033790:
            uVar21 = uVar21 | 0x20;
code_r0x00033794:
            uVar21 = uVar21 | 0x80;
code_r0x00033799:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x000337a7:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x000337e9;
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
code_r0x000337e9:
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
code_r0x00033871:
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
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x00033871;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar10 = uVar5;
            do {
                uVar6 = uVar10 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = str.0123456789ABCDEF[uVar10 % uVar16];
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
code_r0x00033226:
            pcVar8 = &uStack_a8;
code_r0x0003322a:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x000339d4:
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
                arg1 = fcn.00032d94(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00032d94(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
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
                arg1 = fcn.00032d94(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
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
                arg1 = fcn.00032d94(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
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


/* fcn.00039ab4 @ 0x39ab4 */

int16_t fcn.00039ab4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    char cVar2;
    char *arg1_00;
    int16_t iVar3;
    char *pcVar4;
    int64_t iVar5;
    char *pcVar6;
    int64_t iVar7;
    int64_t iVar8;
    int16_t aiStackX_10 [4];
    
    aiStackX_10[0] = arg2;
    pcVar4 = fcn.0003ad4c(arg1);
    if (pcVar4 == NULL) {
        iVar3 = 0;
    }
    else {
        iVar7 = -0x7ffffffffffffffe;
        cVar2 = *pcVar4;
        arg1_00 = pcVar4;
        while (cVar2 != '\0') {
            pcVar6 = arg1_00;
            if (*arg1_00 != '\0') {
                do {
                    if (*pcVar6 == ';') break;
                    pcVar6 = pcVar6 + 1;
                } while (*pcVar6 != '\0');
                if (*pcVar6 != '\0') {
                    *pcVar6 = '\0';
                    pcVar6 = pcVar6 + 1;
                }
            }
            iVar5 = 0;
            do {
                iVar8 = iVar5 + 1;
                pcVar1 = iVar5 + 0x414dd;
                iVar5 = iVar8;
            } while (*pcVar1 != '\0');
            iVar5 = fcn.00033e98(arg1_00,0x414dc,iVar8);
            if (iVar5 != 0) {
                if (aiStackX_10[0] == 0) {
                    iVar7 = (***0x44e70)(*0x44e70,arg1,aiStackX_10);
                }
                else {
                    iVar7 = (*(*0x44e70)[2])(*0x44e70,arg1);
                }
                if (iVar7 < 0) break;
            }
            arg1_00 = pcVar6;
            cVar2 = *pcVar6;
        }
        (**(*0x44e00 + 0x48))(pcVar4);
        iVar3 = 0;
        if (-1 < iVar7) {
            iVar3 = aiStackX_10[0];
        }
    }
    return iVar3;
}


/* fcn.000107d8 @ 0x107d8 */

void fcn.000107d8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar auStackY_818 [64];
    int64_t in_stack_fffffffffffff828;
    int8_t in_stack_fffffffffffff830;
    
    fcn.00033098(auStackY_818,0x400,0x140,arg3,in_stack_fffffffffffff828,in_stack_fffffffffffff830);
    fcn.00039ab4(arg1,arg2 & 0xffff,auStackY_818);
    return;
}


/* fcn.000346a8 @ 0x346a8 */

ulong fcn.000346a8(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t arg1_00;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    uVar2 = 0;
    if (arg2 == 0) {
        iVar3 = 0x42ae0;
        if (arg1 != 0) {
            iVar3 = arg1;
        }
        iVar4 = iVar3;
        arg1_00 = fcn.00034568(iVar3);
        if (arg1_00 != 0) {
            uVar2 = fcn.00032c60(iVar4,arg1_00,iVar3);
        }
    }
    else {
        uVar1 = *(arg2 + 2);
        iVar3 = fcn.00032ba4(uVar1 + 4);
        if (iVar3 != 0) {
            if ((uVar1 != 0) && (iVar3 != arg2)) {
                iVar3 = section..text(iVar3,arg2,uVar1);
            }
            iVar4 = *(iVar3 + 2) + iVar3;
            if (iVar4 != 0x42ae0) {
                section..text(iVar4,0x42ae0,4);
            }
            uVar2 = fcn.000345b8(arg1,iVar3);
            (**(*0x44e00 + 0x48))(iVar3);
        }
    }
    return uVar2;
}


/* fcn.000109fc @ 0x109fc */

//WARNING: Variable defined which should be unmapped: var_bp_10h

void fcn.000109fc(int64_t arg1)

{
    char *pcVar1;
    char cVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    code *pcVar6;
    int64_t iVar7;
    char *pcVar8;
    uint32_t *puVar9;
    ulong *puVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t uStackX_18;
    char *pcStackX_20;
    int64_t var_30h_2;
    int64_t var_38h_2;
    int64_t iStack_58;
    int64_t iStack_50;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int32_t var_bp_10h;
    
    uVar13 = 0;
    var_30h = 0x140304;
    var_38h = 0;
    var_40h = 0;
    iStack_58 = 0;
    iStack_50 = 0;
    var_28h = 0;
    var_20h._0_4_ = 0;
    if ((((*0x44bc0 == '\0') && (iVar4 = (**(*0x44e00 + 0x140))(0x3da20,0,&var_38h), -1 < iVar4)) &&
        (iVar4 = (**(*0x44e00 + 0x140))(0x3d9f0,0,&var_40h), -1 < iVar4)) &&
       ((iVar4 = (**(*0x44e00 + 0x98))(*0x44bc8,0x3d6c0,&iStack_58), -1 < iVar4 &&
        (iVar4 = (**(*0x44e00 + 0x98))(*0x44bc8,0x3d660,&iStack_50), -1 < iVar4)))) {
        for (puVar9 = iStack_58 + 0x14; puVar9 < *(iStack_58 + 0x10) + iStack_58; puVar9 = puVar9 + (*puVar9 & 0xffffff)
            ) {
            if (*(puVar9 + 3) == '\x02') {
                (**(*0x44e00 + 0x160))(&var_30h + 4,puVar9 + 6,0x10);
                (**(*0x44e00 + 0x160))(0x3e418,puVar9 + 6,0x10);
                break;
            }
        }
        uVar5 = fcn.000346a8(iStack_50,&var_30h);
        iVar4 = (**(*0x44e00 + 0x148))(0x3e408,0x3d860,uVar5,0x3da80,0x3e3f0,0);
        if ((-1 < iVar4) && (iVar4 = (**var_40h)(var_40h,iStack_58,*0x3e408,0x3e410), -1 < iVar4)) {
            *0x44bc0 = '\x01';
            if (arg1 != 0) {
                (**(*0x44e00 + 0x70))(arg1);
            }
            pcVar6 = 0x10994;
            uVar12 = uVar13;
            while (pcVar6 != NULL) {
                (*pcVar6)();
                iVar4 = uVar12 * 8;
                uVar12 = uVar12 + 1;
                pcVar6 = *(iVar4 + 0x3fa28);
            }
            pcVar6 = 0x2fad4;
            uVar12 = uVar13;
            while (pcVar6 != NULL) {
                (*pcVar6)(*0x3e410,1);
                iVar4 = uVar12 * 8;
                uVar12 = uVar12 + 1;
                pcVar6 = *(iVar4 + 0x3fa38);
            }
            for (puVar10 = *0x46fe0; iVar4 = var_38h, uVar5 = *0x3e410, puVar10 != 0x46fe0; puVar10 = *puVar10) {
                (*puVar10[2])(*0x3e410);
            }
            uStackX_18 = 0;
            pcStackX_20 = NULL;
            iVar7 = (**(var_38h + 0x18))(var_38h,*0x3e410,0,&uStackX_18);
            if (iVar7 == -0x7ffffffffffffffb) {
                (**(*0x44e00 + 0x40))(4,uStackX_18,&pcStackX_20);
                iVar7 = (**(iVar4 + 0x18))(iVar4,uVar5,pcStackX_20,&uStackX_18);
            }
            if (iVar7 < 0) {
                uStackX_18 = 6;
                (**(*0x44e00 + 0x40))(4,6,&pcStackX_20);
                (**(*0x44e00 + 0x160))(pcStackX_20,0x3f994,uStackX_18);
            }
            pcVar8 = pcStackX_20;
            uVar11 = uVar13;
            uVar12 = uStackX_18;
            if (uStackX_18 != 0) {
                do {
                    pcVar1 = pcVar8 + uVar11;
                    uVar3 = uVar11;
                    if (*pcVar1 == '\0') break;
                    for (; ((uVar3 < uVar12 && (pcVar8[uVar3] != ';')) && (pcVar8[uVar3] != '\0')); uVar3 = uVar3 + 1) {
                    }
                    if ((*pcVar1 == 'x') && (pcVar1[1] == '-')) {
                        if (pcVar8[uVar3] != ';') {
                            if (((pcVar8[uVar3] == '\0') && (uVar11 != 0)) && (pcVar1[-1] == ';')) {
                                pcVar1[-1] = '\0';
                                uVar12 = uVar11 - 1;
                                pcVar8 = pcStackX_20;
                                uStackX_18 = uVar12;
                            }
                            goto code_r0x00010d6f;
                        }
                        (**(*0x44e00 + 0x160))(pcVar1,pcVar8 + uVar3 + 1,(uVar12 - uVar3) + -1);
                        uVar12 = (uVar11 - uVar3) + uStackX_18 + 1;
                        pcVar8 = pcStackX_20;
                        uStackX_18 = uVar12;
                    }
                    else {
code_r0x00010d6f:
                        uVar11 = uVar3 + 1;
                    }
                } while (uVar11 < uVar12);
            }
            cVar2 = *pcVar8;
            while (cVar2 != '\0') {
                uVar13 = uVar13 + 1;
                cVar2 = pcVar8[uVar13];
            }
            uStackX_18 = uVar13 + 1;
            (**(*0x44e10 + 0x58))(L"PlatformLastLangCodes",0x3e428,3,uStackX_18,pcVar8);
            (**(*0x44e00 + 0x48))(pcStackX_20);
        }
    }
    return;
}


/* fcn.000365e8 @ 0x365e8 */

void fcn.000365e8(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    ulong in_stack_00000028;
    
    iVar1 = (**(*0x44e20 + 0x50))(0x200,8,arg2,0,arg3);
    if (-1 < iVar1) {
        (**(*0x44e20 + 0xa8))(arg1,*arg3,in_stack_00000028);
    }
    return;
}


/* fcn.00037b6c @ 0x37b6c */

int64_t fcn.00037b6c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iStackX_18;
    
    iStackX_18 = 0;
    *arg3 = 0;
    if (arg4 != 0) {
        *arg4 = 0;
    }
    iVar1 = (**(*0x44e10 + 0x48))(arg1,arg2,0,&iStackX_18,0);
    if (iVar1 == -0x7ffffffffffffffb) {
        iVar1 = fcn.00032ba4(iStackX_18);
        *arg3 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x44e10 + 0x48))(arg1,arg2,0,&iStackX_18,iVar1);
            if (iVar1 < 0) {
                (**(*0x44e00 + 0x48))(*arg3);
                *arg3 = 0;
            }
            if (arg4 != 0) {
                *arg4 = iStackX_18;
            }
        }
    }
    return iVar1;
}


/* fcn.00039994 @ 0x39994 */

int64_t fcn.00039994(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    int64_t arg1_01;
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t *arg4_00;
    int64_t aiStackX_18 [2];
    ulong in_stack_00000028;
    uint64_t auStack_38 [2];
    
    aiStackX_18[0] = arg3;
    arg1_01 = fcn.00039884(arg1);
    iVar1 = fcn.000398c4(arg1_01,arg1,CONCAT71(arg3 >> 8,arg2),arg4);
    if (iVar1 < 0) {
        aiStackX_18[0] = 0;
        iVar1 = 0;
        arg4_00 = auStack_38;
        iVar2 = (**(*0x44e00 + 0x138))(2,0x3d890,0,arg4_00,aiStackX_18,in_stack_00000028);
        if (-1 < iVar2) {
            uVar4 = 0;
            uVar3 = auStack_38[0];
            if (auStack_38[0] != 0) {
                do {
                    arg1_00 = *(aiStackX_18[0] + uVar4 * 8);
                    if (arg1_00 != arg1_01) {
                        iVar1 = CONCAT71(iVar1 >> 8,arg2);
                        iVar2 = fcn.000398c4(arg1_00,arg1,iVar1,arg4_00);
                        if (-1 < iVar2) goto code_r0x00039a82;
                        uVar3 = auStack_38[0];
                    }
                    uVar4 = uVar4 + 1;
                } while (uVar4 < uVar3);
            }
            if (uVar4 == uVar3) {
                iVar2 = -0x7ffffffffffffff2;
            }
        }
code_r0x00039a82:
        if (aiStackX_18[0] != 0) {
            (**(*0x44e00 + 0x48))();
        }
    }
    else {
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.00032b68 @ 0x32b68 */

int64_t fcn.00032b68(void)

{
    if (*0x44e18 == 0) {
        (**(*0x44e00 + 0x140))(0x3d710,0,0x44e18);
    }
    return *0x44e18;
}


/* fcn.000112ec @ 0x112ec */

void fcn.000112ec(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint8_t uVar2;
    char cVar3;
    uint64_t uVar4;
    
    uVar4 = 0;
    if (arg2 != 0) {
        do {
            if (uVar4 == arg2 - 1U) {
                cVar1 = *(arg1 + uVar4 * 2);
                cVar3 = '\0';
            }
            else {
                cVar3 = *(arg1 + uVar4 * 2);
                if (cVar3 - 0x30U < 10) {
                    cVar3 = cVar3 + -0x30;
                }
                else if (cVar3 + 0xbfU < 6) {
                    cVar3 = cVar3 + -0x37;
                }
                else {
                    cVar3 = cVar3 + -0x57;
                }
                cVar1 = *(arg1 + 2 + uVar4 * 2);
            }
            if (cVar1 - 0x30U < 10) {
                uVar2 = cVar1 - 0x30;
            }
            else if (cVar1 + 0xbfU < 6) {
                uVar2 = cVar1 - 0x37;
            }
            else {
                uVar2 = cVar1 + 0xa9;
            }
            uVar4 = uVar4 + 2;
            *arg3 = cVar3 << 4 | uVar2;
            arg3 = arg3 + 1;
        } while (uVar4 < arg2);
    }
    return;
}


/* fcn.00010300 @ 0x10300 */

int64_t fcn.00010300(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00011560 @ 0x11560 */

int64_t fcn.00011560(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    char cVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t arg2_00;
    int16_t *piVar5;
    
    arg2_00 = 0;
    piVar5 = arg1 + 10;
    while( true ) {
        iVar1 = *piVar5;
        uVar4 = iVar1 - 0x30U < 0x37;
        if (iVar1 - 0x3aU < 7) {
            uVar4 = 0;
        }
        cVar2 = uVar4;
        if (iVar1 - 0x47U < 0x1a) {
            cVar2 = '\0';
        }
        if (cVar2 == '\0') break;
        arg2_00 = arg2_00 + 1;
        piVar5 = piVar5 + 1;
    }
    iVar3 = (**(*0x44e00 + 0x40))(4,arg2_00 >> 1,arg2);
    if (-1 < iVar3) {
        fcn.000112ec(arg1 + 10,arg2_00,*arg2);
        iVar3 = 0;
        *arg3 = arg2_00 >> 1;
    }
    return iVar3;
}


/* fcn.00032c10 @ 0x32c10 */

int64_t fcn.00032c10(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_18 [2];
    
    iVar1 = (**(*0x44e00 + 0x40))(4,arg1,aiStackX_18);
    if (iVar1 < 0) {
        aiStackX_18[0] = 0;
    }
    if ((aiStackX_18[0] != 0) && (arg1 != 0)) {
        aiStackX_18[0] = fcn.00010340(aiStackX_18[0],arg1);
    }
    return aiStackX_18[0];
}


/* fcn.00010340 @ 0x10340 */

int64_t fcn.00010340(int64_t arg1,int64_t arg2)

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


/* fcn.000344d4 @ 0x344d4 */

ulong fcn.000344d4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint16_t uVar2;
    
    uVar2 = 0;
    if ((((arg2 == 0) || (arg1 == 0)) || (1000000 < arg3)) || (arg3 == 0)) {
        return 0x8000000000000002;
    }
    uVar1 = fcn.00034368(arg1,arg3);
    if (arg3 <= uVar1) {
        return 0x8000000000000005;
    }
    if (arg1 <= arg2) {
        if (arg2 < uVar1 + 1 + arg1) {
            return 0x800000000000000f;
        }
        if (arg1 < arg2) goto code_r0x00034556;
    }
    if (arg1 < arg2 + arg3 * 2) {
        return 0x800000000000000f;
    }
code_r0x00034556:
    for (; *arg1 != 0; arg1 = arg1 + 1) {
        *arg2 = *arg1;
        arg2 = arg2 + 2;
    }
    *arg2 = uVar2;
    return 0;
}


/* fcn.00039f30 @ 0x39f30 */

int16_t * fcn.00039f30(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t arg2_00;
    uint16_t uVar1;
    int16_t iVar2;
    bool bVar3;
    uint16_t *puVar4;
    uint64_t arg1_00;
    uint64_t uVar5;
    int16_t *arg1_01;
    int64_t iVar6;
    uint32_t *puVar7;
    uint64_t uVar8;
    uint in_register_00000014;
    uint16_t *puVar9;
    int16_t *piVar10;
    uint64_t uVar11;
    uint32_t *puVar12;
    
    puVar9 = CONCAT44(in_register_00000014,arg2);
    uVar8 = 0;
    uVar11 = uVar8;
    if (puVar9 != NULL) {
        uVar1 = *puVar9;
        uVar11 = 0;
        puVar4 = puVar9;
        while (uVar1 != 0) {
            puVar4 = puVar4 + 1;
            uVar11 = uVar11 + 1;
            uVar1 = *puVar4;
        }
    }
    arg1_00 = uVar8;
    uVar5 = uVar8;
    if (arg3 != 0) {
        arg1_00 = fcn.000363dc(arg3);
        if (arg1_00 == 0) {
            return NULL;
        }
        uVar5 = fcn.00034568(arg1_00);
    }
    iVar6 = uVar5 + uVar11 * 2;
    arg2_00 = iVar6 * 2 + 0x32;
    arg1_01 = fcn.00032c10(iVar6,arg2_00 * 2);
    if (arg1_01 != NULL) {
        fcn.00033f00(arg1_01,arg2_00,0x3fb30);
        iVar2 = *arg1_01;
        piVar10 = arg1_01;
        while (iVar2 != 0) {
            piVar10 = piVar10 + 1;
            uVar8 = uVar8 + 1;
            iVar2 = *piVar10;
        }
        puVar12 = arg1_01 + uVar8;
        if (arg1 != 0) {
            uVar11 = 0;
            do {
                fcn.00032dc8(puVar12,(arg2_00 * 2 - puVar12) + arg1_01,0xa0,*(uVar11 + arg1));
                iVar6 = fcn.00033ecc(puVar12,arg2_00 - (puVar12 - arg1_01 >> 1));
                uVar11 = uVar11 + 1;
                puVar12 = puVar12 + iVar6 * 2;
            } while (uVar11 < 0x10);
        }
        fcn.00034080(arg1_01,arg2_00,0x440d0);
        uVar8 = 0;
        iVar2 = *puVar12;
        puVar7 = puVar12;
        uVar11 = uVar8;
        while (iVar2 != 0) {
            puVar7 = puVar7 + 2;
            uVar11 = uVar11 + 1;
            iVar2 = *puVar7;
        }
        puVar12 = puVar12 + uVar11 * 2;
        if (puVar9 != NULL) {
            for (; *puVar9 != 0; puVar9 = puVar9 + 1) {
                fcn.00032dc8(puVar12,(arg2_00 * 2 - puVar12) + arg1_01,0xa0,*puVar9);
                iVar6 = fcn.00033ecc(puVar12,arg2_00 - (puVar12 - arg1_01 >> 1));
                puVar12 = puVar12 + iVar6 * 2;
            }
        }
        fcn.00034080(arg1_01,arg2_00,0x440e0);
        iVar2 = *puVar12;
        puVar7 = puVar12;
        uVar11 = uVar8;
        while (iVar2 != 0) {
            puVar7 = puVar7 + 2;
            uVar11 = uVar11 + 1;
            iVar2 = *puVar7;
        }
        puVar12 = puVar12 + uVar11 * 2;
        if (uVar5 != 0) {
            do {
                fcn.00032dc8(puVar12,(arg2_00 * 2 - puVar12) + arg1_01,0xa0,*(uVar8 + arg1_00));
                iVar6 = fcn.00033ecc(puVar12,arg2_00 - (puVar12 - arg1_01 >> 1));
                uVar8 = uVar8 + 1;
                puVar12 = puVar12 + iVar6 * 2;
            } while (uVar8 < uVar5);
        }
        *puVar12 = 0;
        bVar3 = false;
        iVar2 = *arg1_01;
        piVar10 = arg1_01;
        while (iVar2 != 0) {
            iVar2 = *piVar10;
            if (iVar2 == 0x3d) {
                bVar3 = true;
            }
            else if (iVar2 == 0x26) {
                bVar3 = false;
            }
            else if ((bVar3) && (iVar2 - 0x41U < 6)) {
                *piVar10 = iVar2 + 0x20;
            }
            piVar10 = piVar10 + 1;
            iVar2 = *piVar10;
        }
        return arg1_01;
    }
    return NULL;
}


/* fcn.00032d3c @ 0x32d3c */

void fcn.00032d3c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00033098(arg1,arg2 >> 1,0x140,arg3,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00039d9c @ 0x39d9c */

int64_t fcn.00039d9c(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iStackX_8;
    uchar auStackX_10 [24];
    
    iStackX_8 = 0;
    iVar1 = (**(*0x44e90 + 0x18))(*0x44e90,0,0,&iStackX_8,auStackX_10);
    if ((iVar1 == -0x7ffffffffffffffb) && (iVar1 = fcn.00032c10(0x8000000000000005,iStackX_8 + 8), iVar1 != 0)) {
        iVar2 = (**(*0x44e90 + 0x18))(*0x44e90,0,0,&iStackX_8,iVar1);
        if (-1 < iVar2) {
            return iVar1;
        }
        (**(*0x44e00 + 0x48))(iVar1);
    }
    return 0;
}


/* fcn.00011728 @ 0x11728 */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00011728(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h)

{
    char cVar1;
    int16_t iVar2;
    int16_t *noname_0;
    int64_t iVar3;
    int64_t arg2_00;
    int16_t *arg4_00;
    int64_t noname_0_00;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iStackX_18;
    int64_t iStackX_20;
    ulong *in_stack_00000028;
    int64_t var_50h;
    char *apcStack_48 [2];
    int64_t var_10h;
    
    iVar5 = 0;
    iStackX_18 = 0;
    cVar1 = *(arg3 + 0x16);
    iVar3 = 0;
    while (cVar1 != '\0') {
        iVar3 = iVar3 + 1;
        cVar1 = *(arg3 + 0x16 + iVar3);
    }
    iStackX_20 = arg4;
    arg2_00 = fcn.00032c10(0,(iVar3 + 1) * 2);
    if (arg2_00 == 0) {
        iVar4 = -0x7ffffffffffffff7;
    }
    else {
        fcn.000344d4(arg3 + 0x16,arg2_00,iVar3 + 1);
        if (apcStack_48 != arg3 + 2) {
            section..text(apcStack_48,arg3 + 2,0x10);
        }
        arg4_00 = fcn.00039f30(apcStack_48,arg2_00,arg2);
        iVar3 = 0;
        iVar2 = *arg4_00;
        noname_0 = arg4_00;
        while (iVar2 != 0) {
            noname_0 = noname_0 + 1;
            iVar3 = iVar3 + 1;
            iVar2 = *noname_0;
        }
        iStackX_18 = iVar3 * 2 + 0x42;
        iVar3 = fcn.00032c10(noname_0,iStackX_18);
        if (iVar3 == 0) {
            *in_stack_00000028 = 0;
            iVar4 = -0x7ffffffffffffff7;
            iVar5 = 0;
        }
        else {
            fcn.00032d3c(iVar3,iStackX_18,0x3fb70,arg4_00);
            iStackX_18 = 0;
            noname_0_00 = arg2_00;
            iVar4 = (**(*0x44e10 + 0x48))(arg2_00,apcStack_48,0,&iStackX_18,0);
            if (iVar4 == -0x7ffffffffffffffb) {
                iVar5 = fcn.00032c10(noname_0_00,iStackX_18);
                iVar4 = (**(*0x44e10 + 0x48))(arg2_00,apcStack_48,0,&iStackX_18,iVar5);
                if (-1 < iVar4) {
                    iVar4 = (**(arg1 + 0x18))(arg1,iVar3,iVar5,*(arg3 + 0x14),iStackX_20,in_stack_00000028);
                }
            }
        }
        (**(*0x44e00 + 0x48))(arg2_00);
        if (iVar5 != 0) {
            (**(*0x44e00 + 0x48))(iVar5);
        }
        (**(*0x44e00 + 0x48))(arg4_00);
        if (iVar3 != 0) {
            (**(*0x44e00 + 0x48))(iVar3);
        }
    }
    return iVar4;
}


/* fcn.00034080 @ 0x34080 */

ulong fcn.00034080(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    int16_t *piVar3;
    int64_t iVar4;
    uint64_t arg2_00;
    
    iVar4 = arg2;
    piVar3 = arg1;
    iVar1 = fcn.00033ecc(arg1,arg2);
    arg2_00 = iVar4 - iVar1;
    if ((((arg1 == 0) || (arg3 == NULL)) || (1000000 < arg2)) || (arg2 == 0)) {
        return 0x8000000000000002;
    }
    if (arg2_00 == 0) {
        return 0x8000000000000004;
    }
    uVar2 = fcn.00033ecc(arg3,arg2_00);
    if (arg2_00 <= uVar2) {
        return 0x8000000000000005;
    }
    if (arg3 <= piVar3) {
        if (piVar3 < arg3 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < piVar3) goto code_r0x00034121;
    }
    if (arg3 < piVar3 + arg2) {
        return 0x800000000000000f;
    }
code_r0x00034121:
    piVar3 = piVar3 + iVar1;
    for (; *arg3 != 0; arg3 = arg3 + 2) {
        *piVar3 = *arg3;
        piVar3 = piVar3 + 1;
    }
    *piVar3 = 0;
    return 0;
}


/* fcn.00011918 @ 0x11918 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

uint64_t fcn.00011918(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h)

{
    uint32_t uVar1;
    bool bVar2;
    bool bVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    int16_t *piVar7;
    int64_t iVar8;
    char *arg3_00;
    uint32_t uVar9;
    uint64_t uVar10;
    int64_t *piVar11;
    uint32_t *puVar12;
    uint32_t uVar13;
    int64_t *in_stack_00000028;
    int64_t iStackY_78;
    int16_t *piStackY_70;
    int64_t iStackY_68;
    ulong uStackY_60;
    int64_t arg1_00;
    char *pcStack_50;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    uint32_t var_bp_18h;
    uint32_t var_bp_10h;
    uint32_t var_bp_8h;
    
    uVar10 = 0;
    iStackY_68 = 0;
    arg1_00 = 0;
    piStackY_70 = NULL;
    bVar3 = false;
    uVar4 = (**(*0x44e00 + 0x140))(0x3d9f0,0,&iStackY_68);
    if (-1 < uVar4) {
        iVar8 = 0x3d8e0;
        uVar4 = (**(*0x44e00 + 0x140))(0x3d8e0,0,&stack0xffffffffffffffa8);
        if (-1 < uVar4) {
            piVar5 = fcn.00039d9c(iVar8);
            if (piVar5 != NULL) {
                bVar2 = bVar3;
                if (*piVar5 != 0) {
                    piVar11 = piVar5;
                    do {
                        (**(iStackY_68 + 0x50))(iStackY_68,*piVar11,&pcStack_50);
                        if ((pcStack_50 == arg2) && (*piVar11 == arg1)) {
                            bVar2 = true;
                            break;
                        }
                        uVar10 = uVar10 + 1;
                        piVar11 = piVar5 + uVar10;
                        bVar2 = false;
                    } while (*piVar11 != 0);
                }
                (**(*0x44e00 + 0x48))(piVar5);
                if (bVar2) {
                    uStackY_60 = 0;
                    iStackY_78 = 0;
                    uVar4 = (**(iStackY_68 + 0x20))(iStackY_68,arg1,&uStackY_60,0);
                    if ((uVar4 < 0) && (uVar4 != 0x8000000000000005)) {
                        return uVar4;
                    }
                    (**(*0x44e00 + 0x40))(4,uStackY_60,&iStackY_78);
                    if (iStackY_78 == 0) {
                        return 0x8000000000000009;
                    }
                    (**(iStackY_68 + 0x20))(iStackY_68,arg1,&uStackY_60);
                    uVar4 = 0x14;
                    uVar1 = *(iStackY_78 + 0x10);
                    iVar8 = iStackY_78;
                    bVar2 = false;
                    if (0x14 < uVar1) {
                        do {
                            bVar3 = bVar2;
                            if (bVar3) break;
                            puVar12 = uVar4 + iVar8;
                            uVar13 = uVar4 + (*puVar12 & 0xffffff);
                            uVar4 = uVar13;
                            if ((*(puVar12 + 3) == '\x02') && (uVar10 = 4, 4 < (*puVar12 & 0xffffff))) {
                                do {
                                    pcStack_50 = uVar10 + puVar12;
                                    uVar9 = uVar10 + (pcStack_50[1] & 0x7f);
                                    uVar10 = uVar9;
                                    if (*pcStack_50 == '\x0e') {
                                        if (&var_40h != pcStack_50 + 2) {
                                            section..text(&var_40h,pcStack_50 + 2,0x10);
                                        }
                                        if ((var_40h == *arg3) && (var_38h == *(arg3 + 8))) {
                                            bVar3 = true;
                                            break;
                                        }
                                    }
                                } while (uVar9 < (*puVar12 & 0xffffff));
                                iVar8 = iStackY_78;
                            }
                            bVar2 = bVar3;
                        } while (uVar13 < uVar1);
                    }
                    *arg4 = 0;
                    *in_stack_00000028 = 0;
                    arg3_00 = pcStack_50;
                    if (bVar3) {
                        do {
                            iVar8 = 0;
                            arg3_00 = arg3_00 + (arg3_00[1] & 0x7f);
                            if (((*arg3_00 == '$') &&
                                (iVar6 = fcn.00011728(arg1_00,arg2,arg3_00,&piStackY_70,arg1_00), -1 < iVar6)) &&
                               (piStackY_70 != NULL)) {
                                piVar7 = *arg4;
                                if (piVar7 == NULL) {
                                    *arg4 = piStackY_70;
                                }
                                else {
                                    iVar6 = iVar8;
                                    for (; *piVar7 != 0; piVar7 = piVar7 + 1) {
                                        iVar6 = iVar6 + 1;
                                    }
                                    for (piVar7 = piStackY_70; *piVar7 != 0; piVar7 = piVar7 + 1) {
                                        iVar8 = iVar8 + 1;
                                    }
                                    uVar4 = (iVar8 + iVar6) * 2 + 8;
                                    iVar8 = fcn.00032c10(iVar8,uVar4);
                                    if (iVar8 == 0) {
                                        return 0x8000000000000009;
                                    }
                                    uVar4 = uVar4 >> 1;
                                    fcn.00034080(iVar8,uVar4,*arg4);
                                    fcn.00034080(iVar8,uVar4,0x3fba4);
                                    fcn.00034080(iVar8,uVar4,piStackY_70);
                                    (**(*0x44e00 + 0x48))(*arg4);
                                    (**(*0x44e00 + 0x48))(piStackY_70);
                                    *arg4 = iVar8;
                                    piStackY_70 = NULL;
                                    *in_stack_00000028 = iVar8;
                                }
                            }
                            if (*arg3_00 == ')') {
                                if (iStackY_78 != 0) {
                                    (**(*0x44e00 + 0x48))();
                                }
                                return ~-(*arg4 != 0) & 0x800000000000000e;
                            }
                        } while( true );
                    }
                    if (iVar8 != 0) {
                        (**(*0x44e00 + 0x48))();
                    }
                }
            }
            uVar4 = 0x800000000000000e;
        }
    }
    return uVar4;
}


/* fcn.0001136c @ 0x1136c */

void fcn.0001136c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int16_t iVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    uint64_t uVar5;
    int16_t *piVar6;
    
    piVar6 = arg1 + 4;
    for (uVar5 = 0;
        (((iVar2 = piVar6[-2], 0x19 < iVar2 - 0x47U && (6 < iVar2 - 0x3aU && iVar2 - 0x30U < 0x37) &&
          (iVar2 = piVar6[-1], 0x19 < iVar2 - 0x47U && (6 < iVar2 - 0x3aU && iVar2 - 0x30U < 0x37))) &&
         (iVar2 = *piVar6, 0x19 < iVar2 - 0x47U && (6 < iVar2 - 0x3aU && iVar2 - 0x30U < 0x37))) &&
        ((iVar2 = piVar6[1], 0x19 < iVar2 - 0x47U && (6 < iVar2 - 0x3aU && iVar2 - 0x30U < 0x37) &&
         (uVar5 < *arg2 - 1U)))); uVar5 = uVar5 + 1) {
        cVar1 = piVar6[-2];
        if (cVar1 - 0x30U < 10) {
            uVar3 = cVar1 - 0x30;
        }
        else if (cVar1 + 0xbfU < 6) {
            uVar3 = cVar1 - 0x37;
        }
        else {
            uVar3 = cVar1 + 0xa9;
        }
        uVar4 = (uVar3 & 0xf) << 4;
        *(arg3 + uVar5 * 2) = uVar4;
        cVar1 = piVar6[-1];
        if (cVar1 - 0x30U < 10) {
            uVar3 = cVar1 - 0x30;
        }
        else if (cVar1 + 0xbfU < 6) {
            uVar3 = cVar1 - 0x37;
        }
        else {
            uVar3 = cVar1 + 0xa9;
        }
        uVar4 = (uVar3 | uVar4) << 4;
        *(arg3 + uVar5 * 2) = uVar4;
        cVar1 = *piVar6;
        if (cVar1 - 0x30U < 10) {
            uVar3 = cVar1 - 0x30;
        }
        else if (cVar1 + 0xbfU < 6) {
            uVar3 = cVar1 - 0x37;
        }
        else {
            uVar3 = cVar1 + 0xa9;
        }
        uVar4 = (uVar3 | uVar4) << 4;
        *(arg3 + uVar5 * 2) = uVar4;
        cVar1 = piVar6[1];
        if (cVar1 - 0x30U < 10) {
            uVar3 = cVar1 - 0x30;
        }
        else if (cVar1 + 0xbfU < 6) {
            uVar3 = cVar1 - 0x37;
        }
        else {
            uVar3 = cVar1 + 0xa9;
        }
        piVar6 = piVar6 + 4;
        *(arg3 + uVar5 * 2) = uVar3 | uVar4;
    }
    *arg2 = uVar5;
    *(arg3 + uVar5 * 2) = 0;
    return;
}


/* fcn.00011618 @ 0x11618 */

int64_t fcn.00011618(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int64_t iVar2;
    int16_t *arg2_00;
    int64_t iVar3;
    int16_t *arg1_00;
    char *apcStackX_8 [2];
    uint64_t uStackX_18;
    char *pcStackX_20;
    
    apcStackX_8[0] = NULL;
    arg2_00 = *0x3fc38;
    iVar3 = 0;
    arg1_00 = arg1;
    do {
        iVar1 = *arg1_00;
        while ((iVar1 != 0x26 && (iVar1 != 0))) {
            iVar3 = iVar3 + 1;
            iVar1 = *(arg1 + iVar3 * 2);
        }
        if (*(arg1 + iVar3 * 2) == 0) {
            return -0x7ffffffffffffff2;
        }
        iVar3 = iVar3 + 1;
        arg1_00 = arg1 + iVar3 * 2;
        if (arg1_00 == arg2_00) {
            iVar2 = 0;
        }
        else {
            iVar2 = fcn.00010300(arg1_00,arg2_00,10);
            arg2_00 = *0x3fc38;
        }
    } while (iVar2 != 0);
    iVar3 = fcn.00011560(arg1 + iVar3 * 2,apcStackX_8,&uStackX_18);
    if (-1 < iVar3) {
        if ((((apcStackX_8[0] == NULL) || (uStackX_18 < 4)) || (uStackX_18 < *(apcStackX_8[0] + 2))) ||
           ((4 < *apcStackX_8[0] - 1U && (*apcStackX_8[0] != '\x7f')))) {
            iVar3 = -0x7ffffffffffffff2;
        }
        else {
            pcStackX_20 = apcStackX_8[0];
            iVar3 = (**(*0x44e00 + 0xb8))(0x3d860,&pcStackX_20,arg2);
        }
        (**(*0x44e00 + 0x48))(apcStackX_8[0]);
    }
    return iVar3;
}


/* fcn.0003d4be @ 0x3d4be */

int64_t fcn.0003d4be(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00010320 @ 0x10320 */

int64_t fcn.00010320(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00032dc8 @ 0x32dc8 */

ulong fcn.00032dc8(uint32_t *arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *arg2_00;
    char cVar1;
    uchar auVar2 [16];
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    char *pcVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    char *pcVar11;
    char *pcVar12;
    uint64_t uVar13;
    uint32_t uVar14;
    char *in_stack_00000028;
    char cStack_58;
    char acStack_57 [47];
    
    if ((((arg1 == NULL) || (0x1e8481 < arg2)) || ((arg3 & 0xffffffffffffff56U) != 0)) ||
       (((arg3 & 0x88) == 0x88 || (0x25 < in_stack_00000028)))) {
        uVar4 = 0x8000000000000002;
    }
    else {
        if ((in_stack_00000028 == NULL) || ((arg3 & 8U) != 0)) {
            arg3 = arg3 & 0xffffffffffffffdf;
        }
        uVar14 = arg3;
        pcVar12 = 0x25;
        if (in_stack_00000028 != NULL) {
            pcVar12 = in_stack_00000028;
        }
        uVar6 = 0;
        uVar9 = (-((arg3 & 0x80U) != 0) & 6) + 10;
        if ((arg3 & 0x20U) == 0) {
            if ((arg4 < 0) && ((arg3 & 0x80U) == 0)) {
                uVar6 = (uVar14 & 0x80) + 1;
                pcVar11 = &cStack_58;
                uVar10 = -arg4;
                do {
                    uVar13 = uVar10 / uVar9;
                    pcVar11 = pcVar11 + 1;
                    *pcVar11 = str.0123456789ABCDEF[uVar10 % uVar9];
                    uVar10 = uVar13;
                } while (uVar13 != 0);
            }
            else {
                pcVar11 = &cStack_58;
                uVar10 = arg4;
                do {
                    uVar13 = uVar10 / uVar9;
                    pcVar11 = pcVar11 + 1;
                    *pcVar11 = str.0123456789ABCDEF[uVar10 % uVar9];
                    uVar10 = uVar13;
                } while (uVar13 != 0);
            }
            pcVar8 = pcVar11 + (uVar6 - &cStack_58);
            if ((arg3 & 8U) != 0) {
                pcVar8 = pcVar8 + (pcVar11 + (-1 - &cStack_58)) / 3;
            }
        }
        else {
            pcVar8 = pcVar12;
        }
        if (pcVar8 < pcVar12) {
            pcVar12 = pcVar8;
        }
        if (arg2 < pcVar12 * 2 + 2U) {
            uVar4 = 0x8000000000000005;
        }
        else {
            arg2_00 = arg1 + pcVar12 * 2;
            if ((arg4 < 0) && ((arg3 & 0x80U) == 0)) {
                arg4 = -arg4;
                iVar5 = 0;
                do {
                    if (arg2_00 <= arg1) break;
                    *arg1 = 0x2d;
                    iVar5 = iVar5 + 1;
                    arg1 = arg1 + 2;
                } while (iVar5 < 1);
                pcVar12 = pcVar12 + -1;
            }
            pcVar11 = &cStack_58;
            cStack_58 = '\0';
            do {
                auVar2._8_8_ = 0;
                auVar2._0_8_ = arg4;
                uVar6 = SUB168(auVar2 / ZEXT416(uVar9),0);
                pcVar11 = pcVar11 + 1;
                *pcVar11 = str.0123456789ABCDEF[arg4 % uVar9];
                arg4 = uVar6;
            } while (uVar6 != 0);
            uVar6 = pcVar11 - &cStack_58;
            iVar3 = SUB164(auVar2 / ZEXT416(uVar9),0);
            uVar10 = iVar3 + 2;
            if ((arg3 & 0x20U) != 0) {
                arg1 = fcn.00032d94(arg1,arg2_00,pcVar12 - uVar6,iVar3 + 0x30);
            }
            uVar13 = 0;
            iVar5 = 3 - uVar6 % 3;
            if (uVar6 % 3 == 0) {
                iVar5 = 0;
            }
            if (uVar6 != 0) {
                do {
                    cVar1 = *pcVar11;
                    iVar7 = 0;
                    do {
                        if (arg2_00 <= arg1) break;
                        *arg1 = cVar1;
                        iVar7 = iVar7 + 1;
                        *(arg1 + 1) = cVar1 >> 7;
                        arg1 = arg1 + uVar10;
                    } while (iVar7 < 1);
                    pcVar11 = pcVar11 + -1;
                    if ((((uVar14 & 8) != 0) && (iVar5 = iVar5 + 1, iVar5 == 3)) && (iVar5 = 0, uVar13 + 1 < uVar6)) {
                        iVar7 = 0;
                        do {
                            if (arg2_00 <= arg1) break;
                            *arg1 = 0x2c;
                            iVar7 = iVar7 + 1;
                            arg1 = arg1 + uVar10;
                        } while (iVar7 < 1);
                    }
                    uVar13 = uVar13 + 1;
                } while (uVar13 < uVar6);
            }
            iVar5 = 0;
            do {
                if (arg2_00 + uVar10 <= arg1) break;
                *arg1 = 0;
                iVar5 = iVar5 + 1;
                arg1 = arg1 + uVar10;
            } while (iVar5 < 1);
            uVar4 = 0;
        }
    }
    return uVar4;
}


/* fcn.0003d4b0 @ 0x3d4b0 */

int64_t fcn.0003d4b0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00032d6c @ 0x32d6c */

void fcn.00032d6c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00033098(arg1,arg2,0,arg3,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.000125f4 @ 0x125f4 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Variable defined which should be unmapped: var_38h

ulong fcn.000125f4(int64_t arg1,int64_t arg2,int64_t noname_2,int64_t arg3)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    uint8_t uVar6;
    uint8_t uVar7;
    int16_t iVar8;
    int16_t *piVar9;
    int64_t iVar10;
    ushort *puVar11;
    char **ppcVar12;
    ulong *puVar13;
    char cVar14;
    char cVar15;
    int64_t iVar16;
    int16_t var_bp_10h;
    int64_t var_20h_2;
    int64_t var_2ch;
    int8_t var_120h;
    int8_t var_128h;
    uchar auStack_1d8 [8];
    ushort uStack_1d0;
    ulong uStack_1c8;
    uint8_t uStack_1b0;
    uint8_t uStack_1af;
    char *pcStack_1a8;
    char16_t cStack_1a0;
    char *pcStack_198;
    char16_t cStack_190;
    char *pcStack_188;
    char16_t cStack_180;
    char *pcStack_178;
    char16_t cStack_170;
    char *pcStack_168;
    char16_t cStack_160;
    char *pcStack_158;
    char *pcStack_150;
    char16_t acStack_148 [4];
    char *pcStack_140;
    char16_t acStack_138 [4];
    char *pcStack_130;
    char16_t acStack_128 [4];
    uint uStack_120;
    char16_t acStack_11c [2];
    char16_t acStack_118 [2];
    char16_t acStack_114 [2];
    char16_t acStack_110 [2];
    char16_t cStack_10c;
    char *pcStack_108;
    char16_t acStack_100 [4];
    char16_t cStack_f8;
    char *pcStack_e8;
    uchar auStack_dc [10];
    uchar auStack_d2 [4];
    ulong auStack_ce [8];
    int64_t var_80h;
    int16_t var_bp_78h;
    int64_t var_bp_70h;
    int16_t var_bp_68h;
    int64_t var_bp_60h;
    int16_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int32_t var_40h;
    char *var_38h;
    int32_t var_30h;
    char *var_28h;
    int32_t var_20h;
    int64_t var_18h;
    int32_t var_bp_8h;
    int16_t var_4h;
    
    acStack_148._0_4_ = str.Drive._8_4_;
    iVar16 = 1;
    cStack_f8 = str.Keyboard[8];
    acStack_138._0_4_ = str.Mouse._8_4_;
    acStack_128._0_4_ = str.Point._8_4_;
    cStack_1a0 = str.Mice[4];
    pcStack_150 = str.Drive._0_8_;
    pcStack_158 = 0x6200750048;
    cStack_190 = str.UHCI[4];
    pcStack_108 = str.Keyboard._0_8_;
    acStack_100 = str.Keyboard._8_8_;
    cStack_180 = str.OHCI[4];
    pcStack_140 = str.Mouse._0_8_;
    pcStack_130 = str.Point._0_8_;
    cStack_170 = str.EHCI[4];
    pcStack_1a8 = str.Mice._0_8_;
    cStack_160 = str.XHCI[4];
    pcStack_198 = str.UHCI._0_8_;
    pcStack_188 = str.OHCI._0_8_;
    auStack_1d8._4_4_ = *0x3fe3c;
    uStack_1d0 = *0x3fe40;
    pcStack_178 = str.EHCI._0_8_;
    pcStack_168 = str.XHCI._0_8_;
    acStack_110 = str.____None._12_4_;
    cStack_10c = str.____None[8];
    auStack_1d8._0_4_ = 0x20;
    uStack_120 = *0x3fe48;
    acStack_11c = str.____None._0_4_;
    acStack_118 = str.____None._4_4_;
    acStack_114 = str.____None._8_4_;
    (**(noname_2 + 8))(arg3);
    uVar1 = *(arg3 + 6);
    uVar2 = *(arg3 + 5);
    uVar3 = *(arg3 + 3);
    uVar4 = *arg3;
    uVar5 = *(arg3 + 1);
    uVar6 = *(arg3 + 2);
    uVar7 = *(arg3 + 4);
    uStack_1af = *(arg3 + 8);
    uStack_1b0 = *(arg3 + 7);
    fcn.00010320(&pcStack_e8,0xa0,0);
    section..text(&pcStack_e8,&uStack_120,0x14);
    puVar13 = auStack_dc;
    if (uVar3 - 1 < 0x7e) {
        iVar16 = 0;
        fcn.00032dc8(&uStack_1c8,0x14,0,uVar3);
        piVar9 = &uStack_1c8;
        iVar10 = iVar16;
        iVar8 = uStack_1c8;
        while (iVar8 != 0) {
            piVar9 = piVar9 + 1;
            iVar10 = iVar10 + 1;
            iVar8 = *piVar9;
        }
        iVar10 = iVar10 * 2;
        if (iVar10 != 0) {
            section..text(auStack_dc,&uStack_1c8,iVar10);
        }
        if (auStack_dc + iVar10 != auStack_1d8) {
            section..text(auStack_dc + iVar10,auStack_1d8,2);
        }
        if (auStack_dc + iVar10 + 2 != &pcStack_150) {
            section..text(auStack_dc + iVar10 + 2,&pcStack_150,10);
        }
        puVar13 = auStack_d2 + iVar10 + 2;
        if (1 < uVar3) {
            *puVar13 = 0x73;
            puVar13 = auStack_ce + iVar10;
        }
    }
    cVar15 = iVar16;
    iVar16 = 0;
    if (uVar4 - 1 < 0x7e) {
        if (cVar15 == '\0') {
            if (puVar13 != auStack_1d8 + 4) {
                section..text(puVar13,auStack_1d8 + 4,4);
            }
            puVar13 = puVar13 + 4;
        }
        fcn.00032dc8(&uStack_1c8,0x14,0,uVar4);
        piVar9 = &uStack_1c8;
        iVar8 = uStack_1c8;
        while (iVar8 != 0) {
            piVar9 = piVar9 + 1;
            iVar16 = iVar16 + 1;
            iVar8 = *piVar9;
        }
        iVar16 = iVar16 * 2;
        if ((iVar16 != 0) && (puVar13 != &uStack_1c8)) {
            section..text(puVar13,&uStack_1c8,iVar16);
        }
        puVar11 = puVar13 + iVar16;
        if (puVar11 != auStack_1d8) {
            section..text(puVar11,auStack_1d8,2);
        }
        if (puVar11 + 1 != &pcStack_108) {
            section..text(puVar11 + 1,&pcStack_108,0x10);
        }
        puVar13 = puVar11 + 9;
        if (1 < uVar4) {
            *puVar13 = 0x73;
            puVar13 = puVar11 + 10;
        }
        cVar15 = '\0';
    }
    iVar16 = 0;
    if (uVar5 - 1 < 0x7e) {
        if (cVar15 == '\0') {
            if (puVar13 != auStack_1d8 + 4) {
                section..text(puVar13,auStack_1d8 + 4,4);
            }
            puVar13 = puVar13 + 4;
        }
        fcn.00032dc8(&uStack_1c8,0x14,0,uVar5);
        piVar9 = &uStack_1c8;
        iVar10 = iVar16;
        iVar8 = uStack_1c8;
        while (iVar8 != 0) {
            piVar9 = piVar9 + 1;
            iVar10 = iVar10 + 1;
            iVar8 = *piVar9;
        }
        iVar10 = iVar10 * 2;
        if ((iVar10 != 0) && (puVar13 != &uStack_1c8)) {
            section..text(puVar13,&uStack_1c8,iVar10);
        }
        puVar11 = puVar13 + iVar10;
        if (puVar11 != auStack_1d8) {
            section..text(puVar11,auStack_1d8,2);
        }
        ppcVar12 = puVar11 + 1;
        if (uVar5 == 1) {
            if (ppcVar12 != &pcStack_140) {
                section..text(ppcVar12,&pcStack_140,10);
            }
            iVar10 = 10;
        }
        else {
            if (ppcVar12 != &pcStack_1a8) {
                section..text(ppcVar12,&pcStack_1a8,8);
            }
            iVar10 = 8;
        }
        cVar15 = '\0';
        puVar13 = ppcVar12 + iVar10;
    }
    cVar14 = '\0';
    if (uVar6 - 1 < 0x7e) {
        if (cVar15 == '\0') {
            if (puVar13 != auStack_1d8 + 4) {
                section..text(puVar13,auStack_1d8 + 4,4);
            }
            puVar13 = puVar13 + 4;
        }
        fcn.00032dc8(&uStack_1c8,0x14,0,uVar6);
        piVar9 = &uStack_1c8;
        iVar10 = iVar16;
        iVar8 = uStack_1c8;
        while (iVar8 != 0) {
            piVar9 = piVar9 + 1;
            iVar10 = iVar10 + 1;
            iVar8 = *piVar9;
        }
        iVar10 = iVar10 * 2;
        if ((iVar10 != 0) && (puVar13 != &uStack_1c8)) {
            section..text(puVar13,&uStack_1c8,iVar10);
        }
        puVar11 = puVar13 + iVar10;
        if (puVar11 != auStack_1d8) {
            section..text(puVar11,auStack_1d8,2);
        }
        if (puVar11 + 1 != &pcStack_130) {
            section..text(puVar11 + 1,&pcStack_130,10);
        }
        puVar13 = puVar11 + 6;
        cVar15 = cVar14;
        if (1 < uVar6) {
            *puVar13 = 0x73;
            puVar13 = puVar11 + 7;
        }
    }
    if (uVar7 - 1 < 0x7e) {
        if (cVar15 == '\0') {
            if (puVar13 != auStack_1d8 + 4) {
                section..text(puVar13,auStack_1d8 + 4,4);
            }
            puVar13 = puVar13 + 4;
        }
        fcn.00032dc8(&uStack_1c8,0x14,0,uVar7);
        piVar9 = &uStack_1c8;
        iVar10 = iVar16;
        iVar8 = uStack_1c8;
        while (iVar8 != 0) {
            piVar9 = piVar9 + 1;
            iVar10 = iVar10 + 1;
            iVar8 = *piVar9;
        }
        iVar10 = iVar10 * 2;
        if ((iVar10 != 0) && (puVar13 != &uStack_1c8)) {
            section..text(puVar13,&uStack_1c8,iVar10);
        }
        puVar11 = puVar13 + iVar10;
        if (puVar11 != auStack_1d8) {
            section..text(puVar11,auStack_1d8,2);
        }
        if (puVar11 + 1 != &pcStack_158) {
            section..text(puVar11 + 1,&pcStack_158,6);
        }
        if (1 < uVar7) {
            puVar11[4] = 0x73;
        }
    }
    if (arg1 != &pcStack_e8) {
        section..text(arg1,&pcStack_e8,0xa0);
    }
    cVar15 = '\x01';
    fcn.00010320(&pcStack_e8,0xa0,0);
    section..text(&pcStack_e8,&uStack_120,0x14);
    puVar13 = auStack_dc;
    if (uVar2 != 0) {
        fcn.00032dc8(&uStack_1c8,0x14,0,uVar2);
        piVar9 = &uStack_1c8;
        iVar10 = iVar16;
        iVar8 = uStack_1c8;
        while (iVar8 != 0) {
            piVar9 = piVar9 + 1;
            iVar10 = iVar10 + 1;
            iVar8 = *piVar9;
        }
        iVar10 = iVar10 * 2;
        if (iVar10 != 0) {
            section..text(auStack_dc,&uStack_1c8,iVar10);
        }
        if (auStack_dc + iVar10 != auStack_1d8) {
            section..text(auStack_dc + iVar10,auStack_1d8,2);
        }
        if (auStack_dc + iVar10 + 2 != &pcStack_198) {
            section..text(auStack_dc + iVar10 + 2,&pcStack_198,8);
        }
        puVar13 = auStack_d2 + iVar10;
        if (1 < uVar2) {
            *puVar13 = 0x73;
            puVar13 = auStack_d2 + iVar10 + 2;
        }
        cVar15 = '\0';
    }
    if (uVar1 != 0) {
        if (cVar15 == '\0') {
            if (puVar13 != auStack_1d8 + 4) {
                section..text(puVar13,auStack_1d8 + 4,4);
            }
            puVar13 = puVar13 + 4;
        }
        fcn.00032dc8(&uStack_1c8,0x14,0,uVar1);
        piVar9 = &uStack_1c8;
        iVar10 = iVar16;
        iVar8 = uStack_1c8;
        while (iVar8 != 0) {
            piVar9 = piVar9 + 1;
            iVar10 = iVar10 + 1;
            iVar8 = *piVar9;
        }
        iVar10 = iVar10 * 2;
        if ((iVar10 != 0) && (puVar13 != &uStack_1c8)) {
            section..text(puVar13,&uStack_1c8,iVar10);
        }
        puVar11 = puVar13 + iVar10;
        if (puVar11 != auStack_1d8) {
            section..text(puVar11,auStack_1d8,2);
        }
        if (puVar11 + 1 != &pcStack_188) {
            section..text(puVar11 + 1,&pcStack_188,8);
        }
        puVar13 = puVar11 + 5;
        if (1 < uVar1) {
            *puVar13 = 0x73;
            puVar13 = puVar11 + 6;
        }
        cVar15 = '\0';
    }
    uVar1 = uStack_1b0;
    if (uStack_1b0 != 0) {
        if (cVar15 == '\0') {
            if (puVar13 != auStack_1d8 + 4) {
                section..text(puVar13,auStack_1d8 + 4,4);
            }
            puVar13 = puVar13 + 4;
        }
        fcn.00032dc8(&uStack_1c8,0x14,0,uVar1);
        piVar9 = &uStack_1c8;
        iVar10 = iVar16;
        iVar8 = uStack_1c8;
        while (iVar8 != 0) {
            piVar9 = piVar9 + 1;
            iVar10 = iVar10 + 1;
            iVar8 = *piVar9;
        }
        iVar10 = iVar10 * 2;
        if ((iVar10 != 0) && (puVar13 != &uStack_1c8)) {
            section..text(puVar13,&uStack_1c8,iVar10);
        }
        puVar11 = puVar13 + iVar10;
        if (puVar11 != auStack_1d8) {
            section..text(puVar11,auStack_1d8,2);
        }
        if (puVar11 + 1 != &pcStack_178) {
            section..text(puVar11 + 1,&pcStack_178,8);
        }
        puVar13 = puVar11 + 5;
        cVar15 = cVar14;
        if (1 < uVar1) {
            *puVar13 = 0x73;
            puVar13 = puVar11 + 6;
        }
    }
    uVar1 = uStack_1af;
    if (uStack_1af != 0) {
        if (cVar15 == '\0') {
            if (puVar13 != auStack_1d8 + 4) {
                section..text(puVar13,auStack_1d8 + 4,4);
            }
            puVar13 = puVar13 + 4;
        }
        fcn.00032dc8(&uStack_1c8,0x14,0,uVar1);
        piVar9 = &uStack_1c8;
        while (uStack_1c8 != 0) {
            piVar9 = piVar9 + 1;
            iVar16 = iVar16 + 1;
            uStack_1c8._0_2_ = *piVar9;
        }
        iVar16 = iVar16 * 2;
        if ((iVar16 != 0) && (puVar13 != &uStack_1c8)) {
            section..text(puVar13,&uStack_1c8,iVar16);
        }
        puVar11 = puVar13 + iVar16;
        if (puVar11 != auStack_1d8) {
            section..text(puVar11,auStack_1d8,2);
        }
        if (puVar11 + 1 != &pcStack_168) {
            section..text(puVar11 + 1,&pcStack_168,8);
        }
        if (1 < uVar1) {
            puVar11[5] = 0x73;
        }
    }
    if (arg2 != &pcStack_e8) {
        section..text(arg2,&pcStack_e8,0xa0);
    }
    return 0;
}


/* fcn.00012fb0 @ 0x12fb0 */

char fcn.00012fb0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uchar auStack_68 [48];
    uchar auStack_38 [48];
    
    fcn.0003d4b0(auStack_68,0,0x30);
    cVar1 = (**(arg3 + 0x10))(auStack_38,0x30,arg2 & 0xff);
    if (cVar1 != -1) {
        fcn.00032d6c(auStack_68,0x30,0x3fe60,auStack_38);
    }
    fcn.000344d4(auStack_68,arg1,0xa0);
    return cVar1;
}


/* fcn.00036d3c @ 0x36d3c */

int64_t fcn.00036d3c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t arg1_00;
    int64_t iStack_28;
    uchar auStack_20 [8];
    
    iStack_28 = 0;
    if (((*0x44e38 == 0) && (iVar1 = (**(*0x44e20 + 0x140))(0x3ed10,0,0x44e38), iVar1 < 0)) ||
       ((*0x44e40 == 0 && (iVar1 = (**(*0x44e20 + 0x140))(0x3ed00,0,0x44e40), iVar1 < 0)))) {
        iVar2 = -0x7ffffffffffffff2;
    }
    else {
        iVar2 = (**(*0x44e38 + 8))(*0x44e38,&iStack_28,0,1,arg3,arg4);
        iVar1 = iStack_28;
        if (iVar2 == -0x7ffffffffffffffb) {
            arg1_00 = fcn.00036468(iStack_28 + 0x70);
            iVar1 = fcn.00032d3c(arg1_00,iVar1 + 0x70,0x3f8d8,0x3ed20);
            iVar2 = (**(*0x44e38 + 8))(*0x44e38,&iStack_28,arg1_00 + iVar1 * 2,1,arg3,arg4);
            if (-1 < iVar2) {
                iStack_28 = *arg1;
                iVar2 = (**(*0x44e40 + 0x20))(*0x44e40,arg1_00,arg2,arg1,auStack_20);
                *arg1 = iStack_28;
            }
            (**(*0x44e20 + 0x48))(arg1_00);
        }
    }
    return iVar2;
}


/* fcn.00036ec0 @ 0x36ec0 */

int64_t fcn.00036ec0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int16_t *piVar2;
    int64_t iVar3;
    int64_t arg1_00;
    uint32_t uVar4;
    uint64_t uStack_48;
    int16_t *piStack_40;
    uchar auStack_38 [16];
    
    uStack_48 = 0;
    if (((*0x44e38 == 0) && (iVar3 = (**(*0x44e20 + 0x140))(0x3ed10,0,0x44e38), iVar3 < 0)) ||
       ((*0x44e40 == 0 && (iVar3 = (**(*0x44e20 + 0x140))(0x3ed00,0,0x44e40), iVar3 < 0)))) {
        iVar3 = -0x7ffffffffffffff2;
    }
    else {
        iVar3 = (**(*0x44e38 + 8))(*0x44e38,&uStack_48,0,1,arg3,arg4);
        if (iVar3 == -0x7ffffffffffffffb) {
            iVar3 = uStack_48 + 0x70;
            arg1_00 = fcn.00036468(iVar3);
            iVar3 = fcn.00032d3c(arg1_00,iVar3,0x3f8d8,0x3ed20);
            iVar3 = (**(*0x44e38 + 8))(*0x44e38,&uStack_48,arg1_00 + iVar3 * 2,1,arg3,arg4);
            if (iVar3 < 0) {
                (**(*0x44e20 + 0x48))();
            }
            else {
                fcn.0003672c(arg1_00);
                iVar3 = (**(*0x44e40 + 0x18))(*0x44e40,arg1_00,arg2,arg1,&piStack_40,auStack_38);
                if (-1 < iVar3) {
                    uVar4 = 2;
                    iVar1 = *piStack_40;
                    piVar2 = piStack_40;
                    while (iVar1 != 0) {
                        piVar2 = piVar2 + 1;
                        uVar4 = uVar4 + 2;
                        iVar1 = *piVar2;
                    }
                    uStack_48 = uVar4;
                    iVar3 = (**(*0x44e38 + 8))(*0x44e38,&uStack_48,piStack_40,0,arg3,arg4);
                    (**(*0x44e20 + 0x48))(piStack_40);
                }
                (**(*0x44e20 + 0x48))(arg1_00);
            }
        }
    }
    return iVar3;
}


/* fcn.00033ecc @ 0x33ecc */

uint64_t fcn.00033ecc(uint32_t arg1,int64_t arg2)

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


/* fcn.00033f00 @ 0x33f00 */

ulong fcn.00033f00(int64_t arg1,uint32_t arg2,uint32_t *arg3)

{
    int16_t iVar1;
    uint64_t extraout_RAX;
    uint in_register_00000014;
    int64_t iVar2;
    
    if ((((arg1 == 0) || (arg3 == NULL)) || (1000000 < CONCAT44(in_register_00000014,arg2))) ||
       (CONCAT44(in_register_00000014,arg2) == 0)) {
        return 0x8000000000000002;
    }
    fcn.00033ecc(arg3,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + (extraout_RAX + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x00033f76;
    }
    if (arg3 < arg1 + CONCAT44(in_register_00000014,arg2) * 2) {
        return 0x800000000000000f;
    }
code_r0x00033f76:
    iVar1 = *arg3;
    if (iVar1 != 0) {
        iVar2 = arg3 - arg1;
        do {
            *arg1 = iVar1;
            arg1 = arg1 + 2;
            iVar1 = *(iVar2 + arg1);
        } while (iVar1 != 0);
    }
    *arg1 = 0;
    return 0;
}


/* fcn.00013604 @ 0x13604 */

int64_t fcn.00013604(int64_t arg1,int64_t arg2)

{
    int64_t aiStackX_18 [2];
    
    aiStackX_18[0] = 0;
    (**(*0x44e00 + 0x40))(4,arg1,aiStackX_18);
    if (aiStackX_18[0] != 0) {
        (**(*0x44e00 + 0x160))(aiStackX_18[0],arg2,arg1);
    }
    return aiStackX_18[0];
}


/* fcn.00013664 @ 0x13664 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_10h

int16_t fcn.00013664(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    int64_t iVar2;
    int16_t aiStackX_18 [4];
    char *pcStackX_20;
    int16_t var_30h;
    int64_t var_38h;
    ulong *puStack_28;
    ulong uStack_20;
    int64_t var_10h;
    int64_t var_bp_8h;
    
    pcStackX_20 = NULL;
    uStack_20 = 0;
    aiStackX_18[0] = 0;
    puStack_28 = NULL;
    iVar2 = (**(*0x44e00 + 0x140))(0x3da20,0,&puStack_28);
    if (-1 < iVar2) {
        iVar2 = (*puStack_28[3])(puStack_28,arg1,pcStackX_20,&uStack_20);
        if (iVar2 == -0x7ffffffffffffffb) {
            iVar2 = (**(*0x44e00 + 0x40))(4,uStack_20,&pcStackX_20);
            if (iVar2 < 0) {
                return 0;
            }
            iVar2 = (*puStack_28[3])(puStack_28,arg1,pcStackX_20,&uStack_20);
        }
        if (-1 < iVar2) {
            while (pcVar1 = pcStackX_20, pcStackX_20 != NULL) {
                for (; *pcStackX_20 != ';'; pcStackX_20 = pcStackX_20 + 1) {
                    if (*pcStackX_20 == '\0') {
                        if (aiStackX_18[0] == 0) {
                            iVar2 = (**puStack_28)(puStack_28,arg1,aiStackX_18,pcVar1,0,arg2,0);
                        }
                        else {
                            iVar2 = (*puStack_28[2])(puStack_28,arg1,aiStackX_18[0],pcVar1,arg2,0);
                        }
                        if (-1 < iVar2) {
                            return aiStackX_18[0];
                        }
                        return 0;
                    }
                }
                *pcStackX_20 = '\0';
                if (aiStackX_18[0] == 0) {
                    iVar2 = (**puStack_28)(puStack_28,arg1,aiStackX_18,pcVar1,0,arg2,0);
                }
                else {
                    iVar2 = (*puStack_28[2])(puStack_28,arg1,aiStackX_18[0],pcVar1,arg2,0);
                }
                *pcStackX_20 = ';';
                pcStackX_20 = pcStackX_20 + 1;
                if (iVar2 < 0) {
                    return 0;
                }
            }
        }
    }
    return 0;
}


/* fcn.000138cc @ 0x138cc */

void fcn.000138cc(int64_t arg1,uint32_t arg2)

{
    uint64_t *puVar1;
    uint in_register_00000014;
    uint64_t uVar2;
    int64_t iVar3;
    
    uVar2 = 0;
    puVar1 = CONCAT44(in_register_00000014,arg2);
    if (*CONCAT44(in_register_00000014,arg2) != 0) {
        iVar3 = 0;
        do {
            (**(*0x44e00 + 0x48))(*(*arg1 + 0x10 + iVar3));
            uVar2 = uVar2 + 1;
            iVar3 = iVar3 + 0x1a;
        } while (uVar2 < *puVar1);
    }
    if (arg1 != 0) {
        if ((*arg1 != 0) && (*puVar1 != 0)) {
            (**(*0x44e00 + 0x48))();
        }
        *arg1 = 0;
    }
    *puVar1 = 0;
    return;
}


/* fcn.00013948 @ 0x13948 */

void fcn.00013948(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg4_00;
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    ushort uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    
    arg4_00 = arg4 + 0x50;
    uVar9 = 0;
    iVar5 = fcn.00033ecc(arg4_00,400);
    *arg3 = *arg3 + 1;
    iVar5 = iVar5 * 2 + 6;
    iVar6 = fcn.00013604(*arg3 * 0x1a,0);
    if (iVar6 != 0) {
        (**(*0x44e00 + 0x168))(iVar6,*arg3 * 0x1a,0);
        piVar2 = *arg2;
        if (piVar2 != NULL) {
            if (1 < *arg3) {
                uVar1 = *arg3 - 1;
                uVar9 = 1;
                piVar3 = piVar2;
                if (1 < uVar1) {
                    do {
                        if (*piVar3 != *(piVar3 + 0x1a)) break;
                        uVar9 = uVar9 + 1;
                        piVar3 = piVar3 + 0x1a;
                    } while (uVar9 < uVar1);
                }
            }
            iVar7 = uVar9 * 0x1a;
            (**(*0x44e00 + 0x160))(iVar6,piVar2,iVar7);
            (**(*0x44e00 + 0x160))(iVar6 + 0x1a + iVar7,*arg2 + iVar7,(*arg3 - uVar9) * 0x1a + -0x1a);
            (**(*0x44e00 + 0x48))(*arg2);
        }
        iVar8 = uVar9 * 0x1a;
        *(iVar8 + iVar6) = *(arg4 + 0x48) & 0x10;
        *(iVar8 + 8 + iVar6) = *(arg4 + 8);
        iVar7 = fcn.00013604(iVar5,*(iVar8 + 0x10 + iVar6));
        *(iVar8 + 0x10 + iVar6) = iVar7;
        if (iVar7 != 0) {
            (**(*0x44e00 + 0x168))(iVar7,iVar5,0);
            iVar7 = 0x3fef8;
            if (*(iVar8 + iVar6) != 0x10) {
                iVar7 = 0x3f8d8;
            }
            fcn.00032d3c(*(iVar8 + 0x10 + iVar6),iVar5,iVar7,arg4_00);
            uVar4 = fcn.00013664(arg1,*(iVar8 + 0x10 + iVar6));
            *(iVar8 + 0x18 + iVar6) = uVar4;
            (**(*0x44e00 + 0x168))(*(iVar8 + 0x10 + iVar6),iVar5,0);
            fcn.00032d3c(*(iVar8 + 0x10 + iVar6),iVar5,0x3f8d8,arg4_00);
        }
        *arg2 = iVar6;
    }
    return;
}


/* fcn.00013b14 @ 0x13b14 */

uint64_t fcn.00013b14(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ushort uVar1;
    int64_t iVar2;
    int64_t arg1_00;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t arg1_01;
    int64_t arg4_00;
    char16_t acStack_48 [4];
    char16_t acStack_40 [4];
    char16_t acStack_38 [4];
    char16_t acStack_30 [2];
    char16_t cStack_2c;
    
    acStack_48 = str.This_Directory._0_8_;
    acStack_40 = str.This_Directory._8_8_;
    acStack_38 = str.This_Directory._16_8_;
    uVar4 = 0;
    acStack_30 = str.This_Directory._24_4_;
    cStack_2c = str.This_Directory[0xe];
    arg4_00 = arg4;
    iVar2 = fcn.00033ecc(acStack_48,400);
    iVar2 = iVar2 * 2 + 200;
    arg1_00 = fcn.00013604(iVar2,0);
    if ((arg3 != 0) && (arg2 != 0)) {
        arg1_01 = arg3 * 0x28;
        iVar3 = fcn.00013604(arg1_01,0);
        if (iVar3 == 0) {
            return 0x8000000000000003;
        }
        (**(*0x44e00 + 0x168))(iVar3,arg1_01,0);
        if (arg3 != 1) {
            do {
                uVar5 = uVar4 + 1;
                *(iVar3 + uVar4 * 0x28) = *(uVar4 * 0x1a + 0x18 + arg2);
                uVar4 = uVar5;
            } while (uVar5 < arg3 - 1U);
        }
        fcn.00032d3c(arg1_00,iVar2,acStack_48,arg4_00);
        uVar1 = fcn.00013664(arg1,arg1_00);
        *(iVar3 + -0x28 + arg1_01) = uVar1;
        uVar4 = (**(*0x44be8 + 0x68))(arg1,0x2012,0,iVar3,arg3,arg4);
    }
    return uVar4;
}


/* fcn.000137e4 @ 0x137e4 */

void fcn.000137e4(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint in_register_0000000c;
    ushort *puVar2;
    ushort *puVar3;
    int16_t *piVar4;
    int16_t *piVar5;
    int64_t arg2_00;
    int16_t iVar6;
    ushort uVar7;
    
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    arg2_00 = 400;
    iVar6 = arg3;
    puVar3 = puVar2;
    iVar1 = fcn.00033ecc(arg1,400);
    uVar7 = 0;
    if (iVar1 != 0) {
        if (iVar6 == 0) {
            piVar5 = 0x3feec;
            iVar6 = *arg2;
            piVar4 = arg2;
            while ((iVar6 != 0 && (iVar6 == *piVar5))) {
                piVar4 = piVar4 + 1;
                piVar5 = piVar5 + 1;
                iVar6 = *piVar4;
            }
            arg2_00 = 400;
            if (*piVar4 == *piVar5) {
                iVar1 = fcn.00033ecc(arg1,400);
                if (iVar1 != 0) {
                    piVar4 = puVar2 + iVar1 + -1;
                    do {
                        if (*piVar4 == 0x5c) break;
                        piVar4 = piVar4 + -1;
                        iVar1 = iVar1 + -1;
                    } while (iVar1 != 0);
                    if (iVar1 != 0) {
                        puVar2[iVar1 + -1] = uVar7;
                        return;
                    }
                }
                *puVar2 = uVar7;
                return;
            }
            iVar1 = fcn.00033ecc(arg1,400);
            puVar3 = puVar2 + iVar1;
        }
        else {
            iVar1 = fcn.00033ecc(puVar3,arg2_00);
            puVar3 = puVar3 + iVar1;
        }
        fcn.00033f00(puVar3,arg2_00,0x3fef4);
        iVar1 = fcn.00033ecc(arg1,arg2_00);
        puVar3 = puVar2 + iVar1;
    }
    fcn.00033f00(puVar3,arg2_00,arg2);
    return;
}


/* fcn.00036ab0 @ 0x36ab0 */

int64_t fcn.00036ab0(int64_t arg1,int64_t arg2,uint32_t *arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t arg1_00;
    int64_t noname_1;
    int64_t iVar2;
    
    if ((*0x44e50 != 0) || (iVar1 = (**(*0x44e20 + 0x140))(0x3ecf0,0,0x44e50), -1 < iVar1)) {
        iVar1 = fcn.000366b8();
        arg1_00 = fcn.0003692c(arg1);
        if (arg1_00 != 0) {
            iVar1 = fcn.0003680c(arg1_00,iVar1,0x3f994,0x3f994);
            if (iVar1 == 0) {
                iVar2 = -0x7ffffffffffffff2;
            }
            else {
                iVar2 = (**(*0x44e50 + 8))(*0x44e50,iVar1,arg1,arg2 & 0xffff,arg4,arg3,0);
                noname_1 = *0x44e20;
                (**(*0x44e20 + 0x48))(iVar1);
                if (iVar2 == -0x7fffffffffffffe0) {
                    iVar2 = fcn.000369ec(arg1_00,noname_1,arg1,arg2 & 0xffff);
                }
            }
            (**(*0x44e20 + 0x48))(arg1_00);
            return iVar2;
        }
    }
    return -0x7ffffffffffffff2;
}


/* fcn.00034784 @ 0x34784 */

int64_t fcn.00034784(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *arg1_00;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t *arg1_01;
    code *pcVar4;
    int64_t in_R8;
    char *pcVar5;
    uchar in_R9B;
    unkbyte7 in_R9;
    int64_t iStack_38;
    uint32_t *puStack_30;
    
    iVar2 = 0;
    if (arg1 != 0) {
        arg1_00 = &iStack_38;
        fcn.00010340(arg1_00,0x18);
        for (; (*arg1 != '\x7f' || (*(arg1 + 1) != -1)); arg1 = arg1 + *(arg1 + 2)) {
            pcVar4 = 0x36308;
            iVar1 = iVar2;
            iVar3 = iVar2;
            do {
                if ((*arg1 == *(iVar1 + 0x43da0)) && (*(arg1 + 1) == *(iVar1 + 0x43da1))) {
                    pcVar4 = *(iVar3 * 0x10 + 0x43da8);
                    break;
                }
                iVar3 = iVar3 + 1;
                iVar1 = iVar3 * 0x10;
            } while (*(iVar1 + 0x43da8) != 0);
            arg1_01 = puStack_30;
            if (((puStack_30 != NULL) && (pcVar4 != 0x362fc)) && (*(iStack_38 + puStack_30 * 2) != 0x2c)) {
                arg1_01 = &iStack_38;
                fcn.00034914(arg1_01,0x43d34,in_R8,CONCAT71(in_R9,in_R9B));
            }
            pcVar5 = arg1;
            arg1_00 = fcn.00032c60(arg1_01,*(arg1 + 2),arg1);
            in_R9B = 1;
            in_R8 = CONCAT71(pcVar5 >> 8,arg2);
            (*pcVar4)(&iStack_38,arg1_00);
            (**(*0x44e00 + 0x48))();
        }
        if (iStack_38 == 0) {
            iVar2 = fcn.00032c10(arg1_00,2);
        }
        else {
            iVar2 = iStack_38;
        }
    }
    return iVar2;
}


/* fcn.00013d70 @ 0x13d70 */

int64_t fcn.00013d70(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    ushort uVar2;
    int64_t iVar3;
    int64_t arg4_00;
    int16_t *piVar4;
    int64_t iVar5;
    int16_t *piVar6;
    int64_t iVar7;
    uint16_t auStack_208 [4];
    int64_t iStack_200;
    ushort *puStack_1f8;
    int64_t iStack_1f0;
    int64_t iStack_1e8;
    int16_t *piStack_1e0;
    uint64_t uStack_1d8;
    int64_t iStack_1d0;
    int64_t aiStack_1c8 [2];
    uchar auStack_1b8 [400];
    
    aiStack_1c8[0] = 0;
    iStack_1e8 = 0;
    iStack_1d0 = 0;
    uStack_1d8 = 0;
    iStack_200 = 0;
    piStack_1e0 = NULL;
    puStack_1f8 = NULL;
    iVar3 = (**(*0x44e00 + 0x40))(4,0x10,&puStack_1f8);
    if (-1 < iVar3) {
        uVar2 = fcn.00013664(arg1,0x3fe44);
        *puStack_1f8 = uVar2;
        *(puStack_1f8 + 1) = 0x1e;
        *(puStack_1f8 + 3) = 3;
        *(puStack_1f8 + 2) = 0;
        iVar3 = (**(*0x44e00 + 0x140))(0x3da30,0,0x44be8);
        if (-1 < iVar3) {
            if (*0x44be0 != '\x01') {
                iVar7 = -0x7ffffffffffffffd;
code_r0x000142c5:
                (**(*0x44e00 + 0x48))(puStack_1f8);
                return iVar7;
            }
            *0x44be0 = '\0';
            iVar3 = (**(*0x44e00 + 0x98))(arg2,0x3da10,aiStack_1c8);
            if (-1 < iVar3) {
                iVar3 = (**(aiStack_1c8[0] + 8))(aiStack_1c8[0],&iStack_200);
            }
            fcn.000138cc(&iStack_1d0,&uStack_1d8);
            if (-1 < iVar3) {
                iVar7 = -0x7fffffffffffffeb;
                while (iStack_200 != 0) {
                    auStack_208[0] = 0;
                    (**(*0x44e00 + 0x168))(auStack_1b8,400,0);
                    iVar5 = iStack_200;
                    iVar3 = 0;
                    do {
                        if (iVar3 < 0) break;
                        iStack_1f0 = 0;
                        iVar3 = (**(iVar5 + 0x20))(iVar5);
                        if (-1 < iVar3) break;
                        arg4_00 = 0;
                        if ((iVar3 == -0x7ffffffffffffffb) && (arg4_00 = fcn.00013604(iStack_1f0,0), arg4_00 != 0)) {
                            (**(*0x44e00 + 0x168))(arg4_00,iStack_1f0,0);
                        }
                        iVar3 = (**(iVar5 + 0x20))(iVar5,&iStack_1f0);
                        if (((-1 < iVar3) && (iStack_1f0 != 0)) && ((*(arg4_00 + 0x48) & 0x10) != 0)) {
                            piVar6 = 0x3fedc;
                            for (piVar4 = arg4_00 + 0x50; (*piVar4 != 0 && (*piVar4 == *piVar6)); piVar4 = piVar4 + 1) {
                                piVar6 = piVar6 + 1;
                            }
                            if (*piVar4 != *piVar6) {
                                fcn.00013948(arg1,&iStack_1d0,&uStack_1d8,arg4_00);
                            }
                        }
                        (**(*0x44e00 + 0x48))(arg4_00);
                    } while (iStack_1f0 != 0);
                    iVar5 = iStack_1d0;
                    uVar1 = uStack_1d8;
                    if (uStack_1d8 == 0) {
                        iVar3 = -0x7ffffffffffffff2;
                    }
                    if ((-1 < iVar3) &&
                       (iVar3 = fcn.00013b14(arg1,iStack_1d0,uStack_1d8 + 1,auStack_208), -1 < iVar3)) {
                        if (auStack_208[0] == uVar1) {
                            (**(*0x44e00 + 0x40))(4,0x46,&piStack_1e0);
                            (**(*0x44e00 + 0x168))(piStack_1e0,0x3e,0);
                            iVar3 = 1;
                            *(puStack_1f8 + 4) = piStack_1e0;
                            (**(*0x44be8 + 0x88))(arg1,0x200c,puStack_1f8,1,0);
                            if (*piStack_1e0 == 0) {
                                fcn.00032d3c(piStack_1e0,0x3e,0x3ff50,iVar3);
                            }
                            fcn.00032d3c(piStack_1e0,0x46,0x3ff60,piStack_1e0);
                            iVar3 = (**(iStack_200 + 8))(iStack_200,&iStack_1e8,piStack_1e0,0x8000000000000003,0);
                            if ((((iStack_1e8 != 0) && (-1 < iVar3)) &&
                                (iVar3 = (**(iStack_200 + 0x28))(iStack_1e8,&stack0x00000028,arg3), -1 < iVar3)) &&
                               (iVar3 = (**(iStack_200 + 0x28))(iStack_1e8,&stack0x00000030,arg4), -1 < iVar3)) {
                                (**(iStack_200 + 0x10))(iStack_1e8);
                            }
                            break;
                        }
                        iVar3 = (**(iStack_200 + 8))
                                          (iStack_200,&iStack_1e8,*(auStack_208[0] * 0x1a + 0x10 + iVar5),1,0);
                        (**(iStack_200 + 0x10))(iStack_200);
                        iStack_200 = 0;
                        fcn.000137e4(auStack_1b8,*(auStack_208[0] * 0x1a + 0x10 + iVar5),auStack_208[0]);
                        if (-1 < iVar3) {
                            if (*(auStack_208[0] * 0x1a + iVar5) != 0x10) {
                                (**(iStack_1e8 + 0x10))(iStack_1e8);
                                iStack_1e8 = 0;
                            }
                            iStack_200 = iStack_1e8;
                        }
                    }
                    uStack_1d8 = uVar1;
                    if (uVar1 == 0) {
                        iStack_1f0 = 400;
                        iVar5 = fcn.00036ab0(arg1,0x200f,&iStack_1f0,0x45060);
                        if (iVar5 < 0) {
                            *0x45060 = 0x3f;
                        }
                        iStack_1f0 = 400;
                        iVar5 = fcn.00036ab0(arg1,0x2010,&iStack_1f0,0x44ed0);
                        if (iVar5 < 0) {
                            *0x44ed0 = 0x3f;
                        }
                        (**(*0x44be8 + 0x20))(0x45060,0x44ed0,1,0);
                    }
                    fcn.000138cc(&iStack_1d0,&uStack_1d8);
                    if (iVar3 == -0x7fffffffffffffeb) goto code_r0x000142c5;
                    if (iVar3 < 0) break;
                }
            }
        }
        (**(*0x44e00 + 0x48))(puStack_1f8);
    }
    return iVar3;
}


/* fcn.00013c7c @ 0x13c7c */

void fcn.00013c7c(int64_t arg1)

{
    int64_t iVar1;
    uchar auStackX_10 [8];
    uint auStackX_18 [2];
    ulong uStackX_20;
    
    uStackX_20 = 1;
    iVar1 = (**(*0x44e10 + 0x48))(0x3ff28,0x3e468,auStackX_18,&uStackX_20,auStackX_10);
    if (-1 < iVar1) {
        auStackX_10[0] = arg1;
        iVar1 = (**(*0x44e10 + 0x58))(0x3ff28,0x3e468,auStackX_18[0],uStackX_20,auStackX_10);
        if (-1 < iVar1) {
            fcn.00036ec0(1,auStackX_10,0x3e468,0x3ff28);
        }
    }
    return;
}


/* fcn.000142dc @ 0x142dc */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

ulong fcn.000142dc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h)

{
    ushort uVar1;
    int64_t iVar2;
    int64_t arg2_00;
    ulong uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t in_stack_00000028;
    uint16_t auStack_68 [4];
    uint64_t uStack_60;
    int64_t iStack_58;
    int64_t iStack_50;
    uint32_t auStack_48 [4];
    int16_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    
    uVar5 = 0;
    uStack_60 = 0;
    iStack_58 = 0;
    auStack_68[0] = 0;
    iVar4 = 0;
    iStack_50 = 0;
    if ((*0x44be8 == 0) && (iVar2 = (**(*0x44e00 + 0x140))(0x3da30,0,0x44be8), iVar2 < 0)) {
        return 0x8000000000000003;
    }
    if (in_stack_00000028 == 0) {
        return 0x8000000000000002;
    }
    iVar2 = (**(*0x44e00 + 0x138))(2,0x3da10,0,&uStack_60,&iStack_58);
    if (iVar2 < 0) {
        auStack_48[0] = 400;
        auStack_48[1] = 0;
        iVar2 = fcn.00036ab0(arg1,0x200d,auStack_48,0x45060);
        if (iVar2 < 0) {
            *0x45060 = 0x3f;
        }
        auStack_48[0] = 400;
        auStack_48[1] = 0;
        iVar2 = fcn.00036ab0(arg1,0x200e,auStack_48,0x44ed0);
        if (iVar2 < 0) {
            *0x44ed0 = 0x3f;
        }
        (**(*0x44be8 + 0x20))(0x45060,0x44ed0,1,0);
    }
    else {
        iVar4 = fcn.00013604(uStack_60 * 0x28,0);
        if (iVar4 == 0) goto code_r0x0001454a;
        (**(*0x44e00 + 0x168))(iVar4,uStack_60 * 0x28,0);
        if (uStack_60 != 0) {
            do {
                uVar3 = 0x3d860;
                iVar2 = (**(*0x44e00 + 0x98))(*(iStack_58 + uVar5 * 8),0x3d860,&iStack_50);
                if (iVar2 < 0) {
                    *(iVar4 + uVar5 * 0x28) = 0;
                    *(iVar4 + 0x20 + uVar5 * 0x28) = 2;
                }
                else {
                    arg2_00 = fcn.00034784(iStack_50,CONCAT71(uVar3 >> 8,1));
                    uVar1 = fcn.00013664(arg1,arg2_00);
                    *(iVar4 + uVar5 * 0x28) = uVar1;
                    iVar2 = *0x44e00;
                    *(iVar4 + 0x20 + uVar5 * 0x28) = 0;
                    (**(iVar2 + 0x48))(arg2_00);
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < uStack_60);
        }
        auStack_68[0] = 0;
        iVar2 = (**(*0x44be8 + 0x68))(arg1,0x2011,0,iVar4,uStack_60 & 0xffff,auStack_68);
        if (-1 < iVar2) {
            *0x44be0 = 1;
        }
    }
    if (iVar4 != 0) {
        (**(*0x44e00 + 0x48))(iVar4);
    }
code_r0x0001454a:
    if ((iStack_58 != 0) && (iVar4 = *(iStack_58 + auStack_68[0] * 8), iVar4 != 0)) {
        uVar3 = fcn.00013d70(arg1,iVar4,arg2,arg3);
        (**(*0x44e00 + 0x48))(iStack_58);
        return uVar3;
    }
    return 0x8000000000000002;
}


/* fcn.000394fc @ 0x394fc */

bool fcn.000394fc(void)

{
    int64_t iVar1;
    bool bVar2;
    uchar auStackX_8 [32];
    
    iVar1 = fcn.0003822c(0x3da40);
    if (iVar1 == 0) {
        iVar1 = (**(*0x44e00 + 0x140))(0x3dc00,0,auStackX_8);
        bVar2 = -1 < iVar1;
    }
    else {
        bVar2 = true;
    }
    return bVar2;
}


/* fcn.00037b0c @ 0x37b0c */

int64_t fcn.00037b0c(int64_t arg1,ulong noname_1,ulong noname_2,int64_t arg2)

{
    int64_t iStackX_20;
    ulong in_stack_00000028;
    
    iStackX_20 = arg2;
    (**(*0x44e00 + 0x50))(0x200,noname_1,noname_2,0,&iStackX_20);
    (**(*0x44e00 + 0xa8))(arg1,iStackX_20,in_stack_00000028);
    (**(*0x44e00 + 0x68))(iStackX_20);
    return iStackX_20;
}


/* fcn.000149d0 @ 0x149d0 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

void fcn.000149d0(void)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong noname_0;
    uchar auStackX_8 [8];
    char acStackX_10 [8];
    uint8_t auStackX_18 [8];
    uint auStackX_20 [2];
    int64_t var_30h;
    uint32_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    ushort uStack_48;
    uchar uStack_46;
    uchar uStack_43;
    uchar uStack_42;
    uchar uStack_41;
    ulong uStack_40;
    uchar auStack_38 [8];
    uchar auStack_30 [8];
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    
    uStack_40 = 8;
    iVar1 = (**(*0x44e10 + 0x48))(0x40000,0x3d700,auStackX_20,&uStack_40,&uStack_48);
    if (iVar1 < 0) {
        auStackX_20[0] = 3;
        fcn.00010340(&uStack_48,8);
    }
    noname_0 = 0x3d620;
    iVar1 = (**(*0x44e00 + 0x140))(0x3d620,0,auStack_30);
    if (iVar1 < 0) {
        uStack_41 = 0;
        uStack_43 = 0;
    }
    else {
        if (*0x44bf0 == '\0') {
            fcn.00010340(0x45768,0x1c);
            noname_0 = 0x45768;
            *0x45768 = 1;
            iVar1 = fcn.00038fcc(0x45768);
            if (-1 < iVar1) {
                *0x44bf0 = '\x01';
            }
        }
        iVar1 = fcn.00032c10(noname_0,0x300);
        if (iVar1 == 0) {
            return;
        }
        iVar2 = (**(*0x44e00 + 0x140))(0x3d620,0,auStack_38);
        if ((-1 < iVar2) && (iVar1 = fcn.00038dc8(auStackX_8,auStackX_18,acStackX_10,iVar1), -1 < iVar1)) {
            *0x44bf5 = auStackX_8[0];
            *0x44bf4 = auStackX_18[0];
            *0x44bf7 = 0;
            *0x44bf6 = 1 < auStackX_18[0] && acStackX_10[0] != '\0';
            uStack_42 = auStackX_8[0];
        }
        uStack_48 = ((*0x45769 >> 0x18) + 5000) / 10000;
        uStack_46 = *0x45778 >> 0x28;
        fcn.00014920(&uStack_48);
    }
    (**(*0x44e10 + 0x58))(0x40000,0x3d700,auStackX_20[0],8,&uStack_48);
    return;
}


/* fcn.00038fcc @ 0x38fcc */

int64_t fcn.00038fcc(int64_t arg1)

{
    int64_t iVar1;
    int aiStackX_10 [2];
    uint auStackX_18 [2];
    uint32_t var_28h;
    int64_t var_30h_2;
    int64_t var_38h;
    uint uStack_48;
    uint uStack_44;
    int iStack_40;
    uint uStack_3c;
    int64_t var_30h;
    uint32_t var_28h_2;
    int32_t var_24h;
    int8_t var_1ch;
    int8_t var_1bh;
    
    iVar1 = (**(*0x44e00 + 0x140))(0x3d620,0,&var_28h);
    if (-1 < iVar1) {
        iVar1 = (*_var_28h[8])(aiStackX_10);
        if ((iVar1 < 0) || (aiStackX_10[0] != 0)) {
            iVar1 = -0x7ffffffffffffffd;
        }
        else {
            fcn.00010340(&uStack_48,0x30);
            var_30h._4_1_ = *arg1;
            var_30h._5_1_ = *(arg1 + 1);
            auStackX_18[0] = 0x30;
            uStack_48 = 0x50000;
            uStack_44 = 0x1a;
            uStack_3c = 0x1c;
            iVar1 = (**_var_28h)(0,&uStack_48,0x30,auStackX_18,0,8);
            if (-1 < iVar1) {
                if (iStack_40 != 0) {
                    iVar1 = -0x7ffffffffffffff9;
                }
                if ((-1 < iVar1) && (arg1 != &var_30h + 4)) {
                    section..text(arg1,&var_30h + 4,0x1c);
                }
            }
        }
    }
    return iVar1;
}


/* fcn.00038dc8 @ 0x38dc8 */

int64_t fcn.00038dc8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t iVar2;
    int in_stack_00000028;
    uint in_stack_0000002c;
    uint auStack_348 [4];
    uint uStack_338;
    uint uStack_334;
    int iStack_330;
    uint uStack_32c;
    uchar uStack_324;
    uint8_t uStack_323;
    uchar uStack_322;
    char *apcStack_320 [97];
    
    piVar1 = CONCAT44(in_stack_0000002c,in_stack_00000028);
    iVar2 = (**(*piVar1 + 0x40))(&stack0x00000028);
    if ((iVar2 < 0) || (in_stack_00000028 != 0)) {
        iVar2 = -0x7ffffffffffffffd;
    }
    else {
        fcn.00010340(&uStack_338,0x318);
        uStack_32c = 0;
        auStack_348[0] = 0x318;
        uStack_338 = 0x50000;
        uStack_334 = 0x10;
        iVar2 = (***piVar1)(0,&uStack_338,0x14,auStack_348,0,8);
        if (-1 < iVar2) {
            if (iStack_330 != 0) {
                iVar2 = -0x7ffffffffffffff9;
            }
            if (arg1 != 0) {
                *arg1 = uStack_322;
            }
            if (arg2 != 0) {
                *arg2 = uStack_324;
            }
            if (arg3 != 0) {
                *arg3 = uStack_323 >> 7;
            }
            if ((arg4 != 0) && (arg4 != apcStack_320)) {
                section..text(arg4,apcStack_320,0x300);
            }
        }
    }
    return iVar2;
}


/* fcn.00014920 @ 0x14920 */

void fcn.00014920(int64_t arg1)

{
    bool bVar1;
    char cVar2;
    int64_t iVar3;
    bool bVar4;
    int aiStackX_10 [2];
    int64_t aiStackX_18 [2];
    
    bVar1 = false;
    iVar3 = (**(*0x44e00 + 0x140))(0x3d620,0,aiStackX_18);
    if ((iVar3 < 0) ||
       (((iVar3 = (**(aiStackX_18[0] + 0x40))(aiStackX_10), -1 < iVar3 && (aiStackX_10[0] == 0)) &&
        (cVar2 = fcn.000394fc(), cVar2 == '\0')))) {
        bVar4 = *0x44bf6 == '\0';
        *(arg1 + 7) = 1;
        if (bVar4) goto code_r0x00014979;
        *(arg1 + 5) = 1;
code_r0x00014982:
        if (*0x45774 == *0x45778) goto code_r0x000149a9;
        *(arg1 + 3) = 1;
    }
    else {
        bVar1 = true;
        *(arg1 + 7) = 0;
code_r0x00014979:
        *(arg1 + 5) = 0;
        if (!bVar1) goto code_r0x00014982;
code_r0x000149a9:
        *(arg1 + 3) = 0;
        if (bVar1) goto code_r0x000149c1;
    }
    if (*0x4577c != '\0') {
        *(arg1 + 4) = 1;
        return;
    }
code_r0x000149c1:
    *(arg1 + 4) = 0;
    return;
}


/* fcn.00038efc @ 0x38efc */

int64_t fcn.00038efc(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    uint32_t var_18h;
    int64_t var_20h_2;
    int64_t var_28h;
    int64_t var_20h;
    uint32_t var_18h_2;
    int32_t var_14h;
    int8_t var_ch;
    
    cVar1 = fcn.000394fc();
    if (cVar1 == '\0') {
        iVar2 = (**(*0x44e00 + 0x140))(0x3d620,0,&var_28h);
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = (**(var_28h + 0x40))(&var_18h);
        if ((-1 < iVar2) && (var_18h == 0)) {
            fcn.00010340(&var_20h,0x18);
            var_20h_2._0_4_ = 0x14;
            var_20h._0_4_ = 0x50000;
            var_20h._4_4_ = 0x11;
            var_14h = 4;
            var_ch = arg1;
            iVar2 = (**var_28h)(0,&var_20h,0x18,&var_20h_2,0,8);
            if (iVar2 < 0) {
                return iVar2;
            }
            if (var_18h_2 == 0) {
                return iVar2;
            }
            return -0x7ffffffffffffff9;
        }
    }
    return -0x7ffffffffffffffd;
}


/* fcn.00014768 @ 0x14768 */

void fcn.00014768(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    int aiStackX_10 [2];
    uint auStackX_18 [2];
    uint32_t var_28h;
    int32_t var_30h_2;
    int64_t var_38h_2;
    uint64_t in_stack_ffffffffffffff98;
    ulong *puStack_58;
    ulong uStack_50;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int32_t var_24h;
    int64_t var_1ch;
    
    cVar1 = fcn.000394fc();
    if ((cVar1 == '\0') && (arg1 != 0)) {
        iVar2 = (**(*0x44e00 + 0x140))(0x3d620,0,&puStack_58);
        if (-1 < iVar2) {
            iVar2 = (*puStack_58[8])(aiStackX_10);
            if ((-1 < iVar2) && (aiStackX_10[0] == 0)) {
                fcn.00010340(&var_40h,0x30);
                auStackX_18[0] = 0x30;
                var_40h._0_4_ = 0x50000;
                var_40h._4_4_ = 0x1b;
                var_38h._4_4_ = 0x1c;
                if (&var_30h + 4 != arg1) {
                    section..text(&var_30h + 4,arg1,0x1c);
                }
                (**puStack_58)(0,&var_40h,0x30,auStackX_18,in_stack_ffffffffffffff98 & 0xffffffffffffff00,8);
            }
        }
    }
    uStack_50 = 0x578;
    iVar2 = (**(*0x44e10 + 0x48))(0x40058,0x3db90,&var_28h,&uStack_50,0x451f0);
    if (-1 < iVar2) {
        *0x45234 = *(arg1 + 8) / 10000;
        (**(*0x44e10 + 0x58))(0x40058,0x3db90,var_28h,uStack_50,0x451f0);
        if (((*(arg1 + 4) != *0x4578c) || (*(arg1 + 0x14) != *0x4579c)) || (*(arg1 + 0x15) != *0x4579d)) {
            aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,1);
            (**(*0x44e10 + 0x58))(L"WdtPersistentData",0x3d960,3,1,aiStackX_10);
        }
    }
    return;
}


/* fcn.0003badc @ 0x3badc */

//WARNING: Variable defined which should be unmapped: var_1ch

uint64_t fcn.0003badc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iStackX_10;
    int64_t var_1ch;
    
    if ((arg2 < 0x30001) && (arg1 != 0)) {
        uVar1 = *(arg1 + 0x10);
        iVar6 = 0;
        iStackX_10 = 0;
        uVar2 = 0x800000000000001a;
        iVar7 = 0;
        if (arg2 != 0) {
            do {
                uVar4 = uVar1;
                if (arg2 < uVar4) break;
                uVar2 = 0;
                iVar7 = 0x3f3b0;
                do {
                    iVar3 = fcn.00036640(arg1,iVar7,0x10);
                    if (iVar3 == 0) break;
                    uVar2 = uVar2 + 1;
                    iVar7 = iVar7 + 0x10;
                } while (uVar2 < 9);
                if ((((8 < uVar2) || (uVar1 < 0x2d)) || (0x30000 < uVar1)) ||
                   ((*(arg1 + 0x14) != 0 || (uVar2 = *(arg1 + 0x18), (uVar4 - 0x1c) % uVar2 != 0)))) {
                    return 0x8000000000000002;
                }
                if ((*arg1 == *0x3d9a0) && (*(arg1 + 8) == *0x3d9a8)) {
                    fcn.000396c8();
                    iVar7 = fcn.0003cf70(arg1 + 0x2c,uVar2 - 0x10);
                    uVar5 = ~-(iVar7 != 0) & 0x8000000000000002;
                    fcn.000396c8();
                    if (uVar5 < 0) {
                        return uVar5;
                    }
                }
                iVar6 = iVar6 + 1;
                uVar5 = 0x1c;
                if (0x1c < uVar4) {
                    do {
                        iStackX_10 = iStackX_10 + 1;
                        uVar5 = uVar5 + uVar2;
                    } while (uVar5 < uVar4);
                }
                arg1 = arg1 + uVar4;
                uVar2 = 0;
                uVar1 = *(arg1 + 0x10);
                arg2 = arg2 - uVar4;
            } while (arg2 != 0);
            iVar7 = iStackX_10;
        }
        if (arg3 != 0) {
            *arg3 = iVar7;
        }
        if (arg4 != 0) {
            *arg4 = iVar6;
        }
    }
    else {
        uVar2 = 0x800000000000001a;
    }
    return uVar2;
}


/* fcn.00036640 @ 0x36640 */

int64_t fcn.00036640(uint32_t arg1,int64_t arg2,uint32_t arg3)

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


/* fcn.0001761c @ 0x1761c */

void fcn.0001761c(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    int16_t *piVar3;
    int iVar4;
    uint32_t auStack_18 [4];
    
    if (arg3 != 0) {
        auStack_18[0] = 400;
        auStack_18[1] = 0;
        iVar2 = fcn.00036ab0(arg1,arg2,auStack_18,arg3);
        if (iVar2 < 0) {
            piVar3 = 0x3fee0;
            iVar1 = 0;
            do {
                iVar4 = iVar1;
                piVar3 = piVar3 + 1;
                iVar1 = iVar4 + 1;
            } while (*piVar3 != 0);
            fcn.00033f00(arg3,iVar4 + 2,0x3fee0);
        }
    }
    return;
}


/* fcn.00036bf4 @ 0x36bf4 */

int64_t fcn.00036bf4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t iVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    int64_t iStackX_20;
    
    iStackX_20 = 0;
    if ((*0x44e50 == 0) && (iVar2 = (**(*0x44e20 + 0x140))(0x3ecf0,0,0x44e50), iVar2 < 0)) {
        iVar2 = -0x7ffffffffffffff2;
    }
    else {
        iVar2 = (**(*0x44e50 + 0x18))(*0x44e50,arg1,0,&iStackX_20);
        if (iVar2 == -0x7ffffffffffffffb) {
            pcVar3 = fcn.00036468(iStackX_20);
            iVar2 = (**(*0x44e50 + 0x18))(*0x44e50,arg1,pcVar3,&iStackX_20);
            if ((-1 < iVar2) && (pcVar5 = pcVar3, pcVar4 = pcVar3, pcVar3 < pcVar3 + iStackX_20)) {
                do {
                    for (; (*pcVar5 != ';' && (*pcVar5 != '\0')); pcVar5 = pcVar5 + 1) {
                    }
                    cVar1 = *pcVar5;
                    *pcVar5 = '\0';
                    iVar2 = (**(*0x44e50 + 0x10))(*0x44e50,arg1,arg2 & 0xffff,pcVar4,arg3,0);
                    if (iVar2 < 0) break;
                    *pcVar5 = cVar1;
                    pcVar5 = pcVar5 + 1;
                    pcVar4 = pcVar5;
                } while (pcVar5 < pcVar3 + iStackX_20);
            }
            (**(*0x44e20 + 0x48))(pcVar3);
        }
    }
    return iVar2;
}


/* fcn.00014d94 @ 0x14d94 */

void fcn.00014d94(void)

{
    uchar uVar1;
    uchar auStackX_8 [16];
    int64_t var_bp_20h;
    int64_t var_30h;
    
    uVar1 = *0x44c36;
    var_bp_20h = 6;
    *0x44c36 = 1;
    (**(*0x44e28 + 0x48))(0x40068,0x3e4b8,0,&var_bp_20h,0x44c30);
    fcn.00036ec0(6,0x44c30,0x3e4b8,0x40068);
    var_bp_20h = 1;
    (**(*0x44e28 + 0x48))(0x40090,0x3d600,0,&var_bp_20h,auStackX_8);
    fcn.00036ec0(var_bp_20h,auStackX_8,0x3d600,0x40090);
    var_bp_20h = 1;
    (**(*0x44e28 + 0x48))(0x400a8,0x3d600,0,&var_bp_20h,auStackX_8);
    fcn.00036ec0(var_bp_20h,auStackX_8,0x3d600,0x400a8);
    var_bp_20h = 1;
    (**(*0x44e28 + 0x48))(0x400c0,0x3d600,0,&var_bp_20h,auStackX_8);
    fcn.00036ec0(var_bp_20h,auStackX_8,0x3d600,0x400c0);
    var_bp_20h = 1;
    (**(*0x44e28 + 0x48))(L"VendorKeysNv",0x3d9d0,0,&var_bp_20h,auStackX_8);
    var_bp_20h = 1;
    (**(*0x44e28 + 0x48))(0x400f8,0x3d600,0,&var_bp_20h,auStackX_8);
    fcn.00036ec0(var_bp_20h,auStackX_8,0x3d600,0x400f8);
    var_bp_20h = 1;
    (**(*0x44e28 + 0x48))(0x40110,0x3d600,0,&var_bp_20h,auStackX_8);
    fcn.00036ec0(var_bp_20h,auStackX_8,0x3d600,0x40110);
    var_bp_20h = 1;
    (**(*0x44e28 + 0x48))(L"DeploymentModeNv",0x3d750,0,&var_bp_20h,auStackX_8);
    *0x44c36 = uVar1;
    return;
}


/* fcn.0003d510 @ 0x3d510 */

int64_t fcn.0003d510(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *puVar4;
    uint8_t uVar5;
    
    uVar5 = 0;
    bVar1 = false;
    uVar2 = arg2 - arg1;
    puVar4 = arg1;
    if (arg2 < arg1) {
        uVar2 = -uVar2;
        if (arg1 <= arg3 + arg2) {
            puVar4 = arg3 + arg1;
            bVar1 = true;
            uVar5 = 1;
            arg2 = arg3 + arg2;
        }
    }
    if ((7 < arg3) && (7 < uVar2)) {
        uVar2 = arg2 & 7;
        uVar3 = puVar4 & 7;
        if (bVar1) {
            arg2 = arg2 + -1;
            puVar4 = puVar4 + -1;
        }
        if ((uVar2 == uVar3) && (uVar2 != 0)) {
            if (!bVar1) {
                uVar2 = 8 - uVar2;
            }
            arg3 = arg3 - uVar2;
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                *puVar4 = *arg2;
                arg2 = arg2 + uVar5 * -2 + 1;
                puVar4 = puVar4 + uVar5 * -2 + 1;
            }
        }
        if (bVar1) {
            arg2 = arg2 + -7;
            puVar4 = puVar4 + -7;
        }
        for (uVar2 = arg3 >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *arg2;
            arg2 = arg2 + (uVar5 * -2 + 1) * 8;
            puVar4 = puVar4 + uVar5 * -2 + 1;
        }
        arg3 = arg3 & 7;
        if (arg3 == 0) {
            return arg1;
        }
        if (bVar1) {
            arg2 = arg2 + 8;
            puVar4 = puVar4 + 1;
        }
    }
    if (bVar1) {
        arg2 = arg2 + -1;
        puVar4 = puVar4 + -1;
    }
    for (; arg3 != 0; arg3 = arg3 - 1) {
        *puVar4 = *arg2;
        arg2 = arg2 + uVar5 * -2 + 1;
        puVar4 = puVar4 + uVar5 * -2 + 1;
    }
    return arg1;
}


/* fcn.0003bc74 @ 0x3bc74 */

int64_t fcn.0003bc74(int64_t arg1)

{
    int64_t iVar1;
    int16_t *piVar2;
    int16_t *piVar3;
    int64_t iVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    int16_t *piVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int64_t aiStackX_10 [3];
    
    if ((arg1 & 7U) == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar9 = 0;
        iVar4 = -0x7ffffffffffffff2;
        uVar10 = 0;
        iVar1 = iVar9;
        do {
            piVar7 = *(uVar10 * 8 + 0x44990);
            if (piVar7 == NULL) break;
            uVar6 = 0;
            iVar1 = iVar9;
            if (*0x44990 != NULL) {
                piVar2 = *0x44990;
                iVar8 = iVar9;
                do {
                    piVar3 = piVar7;
                    for (; (*piVar2 != 0 && (*piVar2 == *piVar3)); piVar2 = piVar2 + 1) {
                        piVar3 = piVar3 + 1;
                    }
                    if (*piVar2 == *piVar3) {
code_r0x0003bd58:
                        aiStackX_10[0] = 0;
                        aiStackX_10[1] = 0;
                        if ((arg1 & 6U) != 0) {
                            iVar1 = fcn.00039994(*(uVar6 * 8 + 0x449c8),CONCAT71(piVar3 >> 8,0x19),0,aiStackX_10);
                            if (iVar1 < 0) break;
                        }
                        if (3 < uVar6) goto code_r0x0003bde9;
                        for (piVar2 = *(uVar6 * 8 + 0x44990); (*piVar2 != 0 && (*piVar2 == *piVar7));
                            piVar2 = piVar2 + 1) {
                            piVar7 = piVar7 + 1;
                        }
                        iVar1 = 0x3d6f0;
                        if (*piVar2 != *piVar7) {
code_r0x0003bde9:
                            iVar1 = 0x3d600;
                        }
                        iVar1 = fcn.0003b6fc(arg1 & 0xffff,*(uVar6 * 8 + 0x44990),*(uVar6 * 8 + 0x44950),iVar1);
                        if (aiStackX_10[0] != 0) {
                            (**(*0x44e00 + 0x48))();
                        }
                        break;
                    }
                    piVar3 = piVar7;
                    for (piVar2 = *(iVar8 + 0x44950); (*piVar2 != 0 && (*piVar2 == *piVar3)); piVar2 = piVar2 + 1) {
                        piVar3 = piVar3 + 1;
                    }
                    if (*piVar2 == *piVar3) goto code_r0x0003bd58;
                    uVar5 = uVar6 + 1;
                    uVar6 = uVar5;
                    iVar8 = uVar5 * 8;
                    piVar2 = *(iVar8 + 0x44990);
                } while (piVar2 != NULL);
            }
            if (iVar1 < 0) {
                iVar8 = iVar9;
                if (iVar1 != -0x7ffffffffffffff2) {
                    iVar8 = iVar1;
                }
                iVar1 = iVar8;
            }
            else {
                iVar4 = iVar1;
            }
            uVar10 = uVar10 + 1;
        } while (-1 < iVar1);
        if (iVar4 < 0) {
            iVar1 = iVar4;
        }
    }
    return iVar1;
}


/* fcn.00014fb4 @ 0x14fb4 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h

void fcn.00014fb4(void)

{
    ulong *puVar1;
    char cVar2;
    uint32_t uVar3;
    uchar uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong uVar8;
    int64_t *piVar9;
    ulong *puVar10;
    ulong *arg3;
    uint8_t uVar11;
    ulong *puVar12;
    uint64_t uVar13;
    ulong *puStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    ulong *puStackX_20;
    int64_t var_40h;
    int64_t var_48h;
    uint32_t var_50h;
    int64_t var_58h;
    ulong uStack_58;
    int64_t iStack_50;
    int64_t aiStack_48 [2];
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    uVar11 = 0;
    if (*0x44990 != 0) {
        iVar6 = 0;
        piVar9 = 0x44990;
        uVar13 = 0;
        do {
            iVar5 = *piVar9;
            uVar8 = 0x3d6f0;
            if (3 < uVar11) {
                uVar8 = 0x3d600;
            }
            puStackX_8 = NULL;
            arg3 = NULL;
            *(uVar13 + 0x44c30) = 0;
            uStack_58 = 0;
            iVar5 = (**(*0x44e28 + 0x48))(iVar5,uVar8,0,&puStackX_8,0);
            if (iVar5 == -0x7ffffffffffffffb) {
                iStackX_10 = 0;
                *(uVar13 + 0x44c30) = 1;
                (**(*0x44e20 + 0x40))(4,puStackX_8);
                arg3 = NULL;
                puStackX_20 = puStackX_8;
                iVar5 = (**(*0x44e28 + 0x48))(*piVar9,uVar8,0,&puStackX_8,iStackX_10);
                if (-1 < iVar5) {
                    if (puStackX_8 == NULL) {
                        iVar5 = -0x7fffffffffffffe6;
                    }
                    else {
                        arg3 = &uStack_58;
                        iVar5 = fcn.0003badc(iStackX_10,puStackX_8,arg3,0);
                    }
                    if (-1 < iVar5) {
                        iStackX_18 = 0;
                        (**(*0x44e20 + 0x40))(4,puStackX_20);
                        arg3 = NULL;
                        iVar6 = (**(*0x44e28 + 0x48))(*(iVar6 + 0x44950),0x3d600,0,&puStackX_20,iStackX_18);
                        puVar12 = puStackX_20;
                        puVar10 = puStackX_8;
                        if (-1 < iVar6) {
                            iVar6 = 0;
                            iVar5 = iStackX_10;
                            puVar1 = puStackX_20;
                            while (puVar1 <= puVar10) {
                                arg3 = puVar12;
                                iVar7 = fcn.00036640(iVar5,iStackX_18,puVar12);
                                if (iVar7 == 0) {
                                    *(uVar13 + 0x44c30) = 2;
                                    uVar4 = *(uVar13 + 0x44c30);
                                    if (puVar12 < puVar10) {
                                        uVar4 = 3;
                                    }
                                    *(uVar13 + 0x44c30) = uVar4;
                                    break;
                                }
                                uVar3 = *(iVar5 + 0x10);
                                if (0x2ffd3 < uVar3 - 0x2d) break;
                                iVar6 = iVar6 + uVar3;
                                iVar5 = iVar5 + uVar3;
                                puVar1 = iVar6 + puVar12;
                            }
                        }
                        if (iStackX_18 != 0) {
                            (**(*0x44e20 + 0x48))(iStackX_18);
                            puVar10 = puStackX_8;
                        }
                        puVar12 = NULL;
                        if (puVar10 != NULL) {
                            iVar6 = iStackX_10;
                            iVar5 = *0x44c48;
                            do {
                                iVar7 = fcn.00036640(iVar6,0x3dc10,0x10);
                                if (iVar7 == 0) {
code_r0x000151e6:
                                    aiStack_48[0] = *(iVar6 + 0x14) + 0x2c + iVar6;
                                    iStack_50 = *(iVar6 + 0x18) - 0x10;
                                    if (iVar5 != 0) {
code_r0x0001522d:
                                        (**(iVar5 + 0x10))(iVar5,0x3d670,1,aiStack_48,&iStack_50,0x44c00);
                                        arg3 = 0x20;
                                        iVar5 = fcn.00036640(0x3e498,0x44c00,0x20);
                                        if (iVar5 != 0) {
                                            arg3 = 0x20;
                                            iVar5 = fcn.00036640(0x3e478,0x44c00,0x20);
                                            if (iVar5 != 0) goto code_r0x00015293;
                                        }
                                        *(uVar13 + 0x44c30) = 4;
                                        break;
                                    }
                                    arg3 = 0x44c48;
                                    (**(*0x44e20 + 0x140))(0x3d800,0);
                                    iVar5 = *0x44c48;
                                    if (*0x44c48 != 0) goto code_r0x0001522d;
code_r0x00015293:
                                    iVar5 = *0x44c48;
                                    puVar10 = puStackX_8;
                                }
                                else {
                                    arg3 = 0x10;
                                    iVar7 = fcn.00036640(iVar6,0x3d9a0,0x10);
                                    if (iVar7 == 0) goto code_r0x000151e6;
                                }
                                uVar3 = *(iVar6 + 0x10);
                                if (0x2ffb4 < uVar3 - 0x4c) break;
                                puVar12 = puVar12 + uVar3;
                                iVar6 = iVar6 + uVar3;
                            } while (puVar12 < puVar10);
                        }
                    }
                }
                if (iStackX_10 != 0) {
                    (**(*0x44e20 + 0x48))();
                }
            }
            cVar2 = *(uVar13 + 0x44c30);
            if (cVar2 == '\x01') {
                iVar6 = 0x2167;
            }
            else if (cVar2 == '\x02') {
                iVar6 = 0x2168;
            }
            else if (cVar2 == '\x03') {
                iVar6 = 0x2169;
            }
            else if (cVar2 == '\x04') {
                iVar6 = 0x216a;
            }
            else {
                iVar6 = 0x2166;
            }
            fcn.0001761c(*0x457a8,iVar6,arg3,0x45940);
            uVar8 = 0;
            fcn.0003d4be(0x45ad0,400,0);
            fcn.0001761c(*0x457a8,*(uVar13 * 2 + 0x40200),uVar8,0x45ad0);
            fcn.00032d3c(0x457b0,400,0x40158,0x45ad0);
            fcn.00036bf4(*0x457a8,*(uVar13 * 2 + 0x40280),0x457b0);
            uVar11 = uVar11 + 1;
            uVar13 = uVar11;
            iVar6 = uVar13 * 8;
            piVar9 = iVar6 + 0x44990;
        } while (*piVar9 != 0);
    }
    (**(*0x44e28 + 0x58))(0x40068,0x3e4b8,2,6,0x44c30);
    fcn.00014d94();
    return;
}


/* fcn.0001588c @ 0x1588c */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h

ulong fcn.0001588c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t var_28h_2;
    int16_t var_30h;
    int16_t var_38h;
    int16_t var_40h;
    char cStack_48;
    char acStack_47 [7];
    ulong uStack_40;
    ulong *puStack_38;
    uint32_t var_28h;
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    iVar3 = *0x44bd0;
    uVar1 = arg4 & 0xffff;
    cStack_48 = '\0';
    if (*0x44bd0 == 0) {
        return 0;
    }
    puStack_38 = *(*0x44bd0 + 0x20);
    if (*(*0x44bd0 + 8) != 0) {
        return 0x8000000000000003;
    }
    if (*0x44c28 == 0) {
        iVar2 = (**(*0x44e20 + 0x140))(0x3da30,0,0x44c28);
        if (iVar2 < 0) {
            return 0;
        }
        if (*0x44c28 == 0) {
            return 0;
        }
        uVar1 = arg4;
        arg3 = arg3 & 0xffff;
        arg2 = arg2 & 0xffff;
    }
    iVar2 = 0;
    *0x457a8 = arg1;
    if (uVar1 == 0x29e5) {
code_r0x00015c4d:
        fcn.00014fb4();
        return 0;
    }
    if (uVar1 == 0x29e7) {
        arg3 = 0;
        uStack_40 = 1;
        (**(*0x44e28 + 0x48))(0x40090,0x3d600,0,&uStack_40,acStack_47);
        if (**(iVar3 + 0x18) != '\x01') {
            return 0;
        }
        *puStack_38 = 0;
        if (acStack_47[0] == '\x01') {
            fcn.0001761c(arg1,0x218d,arg3,0x457b0);
            iVar3 = 0x218e;
        }
        else {
            puStack_38 = 0x8;
            arg3 = 0;
            iVar3 = (**(*0x44e20 + 0xb0))(2,0x3d820,0,&puStack_38,&var_28h);
            if (iVar3 < 0) {
                return 0;
            }
            fcn.0001761c(arg1,0x218f,arg3,0x457b0);
            iVar3 = 0x2190;
        }
        goto code_r0x00015c21;
    }
    if (uVar1 == 0x29e8) {
        iVar2 = 0;
        if (**(iVar3 + 0x18) == '\0') {
            fcn.0001588c(arg1,arg2,arg3,0x29f1);
            iVar2 = arg1;
        }
        fcn.00015434(CONCAT71(iVar2 >> 8,**(iVar3 + 0x18)),arg2);
        return 0;
    }
    if (uVar1 == 0x29e9) {
code_r0x00015a5d:
        fcn.0001761c(arg1,0x2192,arg3,0x457b0);
        fcn.0001761c(arg1,0x218c,arg3,0x45940);
        arg3 = CONCAT71(arg3 >> 8,3);
        (**(*0x44c28 + 0x20))(0x457b0,0x45940,arg3,&cStack_48);
        if (cStack_48 == '\0') {
            fcn.0003bc74(1);
            iVar2 = fcn.0003bc74(2);
            if (-1 < iVar2) {
                arg3 = 0;
                *puStack_38 = 1;
                uStack_40 = 1;
                (**(*0x44e28 + 0x48))(0x40090,0x3d600,0,&uStack_40,acStack_47);
                if (acStack_47[0] == '\0') {
                    acStack_47[0] = '\x01';
                    arg3 = 6;
                    iVar2 = (**(*0x44e28 + 0x58))(0x40110,0x3d600,6,1,acStack_47);
                }
            }
        }
    }
    else if (uVar1 != 0x29ea) {
        if (uVar1 == 0x29ee) goto code_r0x00015c4d;
        if (uVar1 == 0x29f0) {
            if (**(iVar3 + 0x18) == '\0') {
                return 0;
            }
        }
        else if (uVar1 != 0x29f1) {
            if (uVar1 != 0x29f2) {
                return 0;
            }
            goto code_r0x0001598f;
        }
        goto code_r0x00015a5d;
    }
code_r0x0001598f:
    if ((arg4 + 0xd616 & 0xfff7) == 0) {
        fcn.0001761c(arg1,0x214c,arg3,0x457b0);
        fcn.0001761c(arg1,0x2191,arg3,0x45940);
        arg3 = CONCAT71(arg3 >> 8,3);
        (**(*0x44c28 + 0x20))(0x457b0,0x45940,arg3,&cStack_48);
        if (cStack_48 == '\0') {
            iVar2 = fcn.0003bc74(1);
            if (-1 < iVar2) {
                *puStack_38 = 1;
            }
            goto code_r0x00015a08;
        }
    }
    else {
code_r0x00015a08:
        if (cStack_48 == '\0') {
            fcn.00014fb4();
        }
    }
    if (-1 < iVar2) {
        return 0;
    }
    if (iVar2 == -0x7ffffffffffffff2) {
        return 0;
    }
    fcn.0001761c(arg1,0x2193,arg3,0x457b0);
    iVar3 = 0x2194;
code_r0x00015c21:
    fcn.0001761c(arg1,iVar3,arg3,0x45940);
    (**(*0x44c28 + 0x20))(0x457b0,0x45940,1,0);
    return 0;
}


/* fcn.00015434 @ 0x15434 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00015434(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint auStackX_10 [2];
    uchar uStackX_18;
    char cStackX_19;
    uchar auStackX_20 [8];
    int64_t var_40h;
    int64_t var_48h;
    ulong auStack_38 [2];
    int64_t var_bp_10h;
    
    uVar1 = *0x44c36;
    auStackX_10[0] = CONCAT31(auStackX_10[0]._1_3_,arg2);
    *0x44c36 = 1;
    auStack_38[0] = 7;
    iVar2 = fcn.00036d3c(auStack_38,&uStackX_18,0x3e4b8,0x40178);
    *0x44c36 = uVar1;
    if (-1 < iVar2) {
        iVar2 = (**(*0x44e28 + 0x48))(0x40178,0x3e4b8,auStackX_10,auStack_38,auStackX_20);
        if (-1 < iVar2) {
            auStack_38[0] = 7;
            if (arg1 != -1) {
                cStackX_19 = arg1;
            }
            iVar3 = fcn.00036640(&uStackX_18,auStackX_20,7);
            if (iVar3 != 0) {
                iVar2 = (**(*0x44e28 + 0x58))(0x40178,0x3e4b8,auStackX_10[0],7,&uStackX_18);
            }
        }
    }
    return iVar2;
}


/* fcn.0003b6fc @ 0x3b6fc */

int64_t fcn.0003b6fc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    int64_t iStackX_10;
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    uchar auStack_58 [48];
    
    if (((arg2 == 0) || (arg4 == 0)) ||
       ((arg1 != 1 && (((in_stack_00000028 == 0 || (in_stack_00000030 == 0)) || (((arg1 & 4U) != 0 && (arg3 == 0))))))))
    {
        return -0x7ffffffffffffffe;
    }
    uVar4 = 6;
    if ((arg1 & 4U) != 0) {
        iVar3 = *(in_stack_00000028 + 0x10) + 0x10;
        iVar3 = (**(*0x44e28 + 0x58))(arg3,0x3d600,6,in_stack_00000030 - iVar3,iVar3 + in_stack_00000028);
        return iVar3;
    }
    iStackX_10 = 0;
    iVar3 = arg4;
    iVar2 = (**(*0x44e28 + 0x48))(arg2,arg4,0,&iStackX_10,0);
    if ((iVar2 == -0x7ffffffffffffffb) && ((arg1 & 1U) != 0)) {
        fcn.0003b8f8(auStack_58,CONCAT71(iVar3 >> 8,2));
        uVar4 = 0x27;
        iVar2 = (**(*0x44e28 + 0x58))(arg2,arg4,0x27,0x28,auStack_58);
        if (iVar2 < 0) {
            return iVar2;
        }
    }
    iVar3 = 0;
    if (iVar2 != -0x7ffffffffffffff2) {
        iVar3 = iVar2;
    }
    if ((arg1 & 2U) != 0) {
        uVar1 = uVar4 | 0x61;
        if ((arg1 & 8U) == 0) {
            uVar1 = uVar4 | 0x21;
        }
        iVar3 = (**(*0x44e28 + 0x58))(arg2,arg4,uVar1,in_stack_00000030);
        if (iVar3 == -0x7ffffffffffffff2) {
            return 0;
        }
        if (iVar3 < 0) {
            return iVar3;
        }
        in_stack_00000030 = 0;
        (**(*0x44e28 + 0x48))(arg2,arg4,0,&stack0x00000030,0);
        if (((arg1 & 8U) != 0) && (iStackX_10 == in_stack_00000030)) {
            iVar3 = -0x7fffffffffffffec;
        }
    }
    return iVar3;
}


/* fcn.00017bbc @ 0x17bbc */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h

int64_t fcn.00017bbc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_68h)

{
    ulong noname_0;
    ushort uVar1;
    int64_t iVar2;
    ushort *arg1_00;
    int64_t arg2_00;
    char cVar3;
    ulong uVar4;
    uint64_t uVar5;
    ushort *puVar6;
    bool bVar7;
    unkbyte7 in_stack_00000009;
    ulong *in_stack_00000028;
    uint32_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    uint16_t auStack_68 [4];
    uint64_t uStack_60;
    int64_t iStack_58;
    int64_t aiStack_50 [2];
    int16_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    cVar3 = arg1;
    uStack_60 = 0;
    iStack_58 = 0;
    auStack_68[0] = 0;
    aiStack_50[0] = 0;
    bVar7 = false;
    if (in_stack_00000028 == NULL) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        uVar4 = 0;
        iVar2 = (**(*0x44e20 + 0x138))(2,0x3da10,0,&uStack_60,&iStack_58);
        if (iVar2 < 0) {
            fcn.0001761c(*0x457a8,0x200d,uVar4,0x457b0);
            fcn.0001761c(*0x457a8,0x200e,uVar4,0x45940);
            (**(*0x44c28 + 0x20))(0x457b0,0x45940,1);
        }
        else {
            uVar4 = 0;
            arg1_00 = fcn.00017820(uStack_60 * 0x28,0);
            if (arg1_00 != NULL) {
                fcn.0003d4be(arg1_00,uStack_60 * 0x28,0);
                uVar5 = 0;
                if (uStack_60 != 0) {
                    puVar6 = arg1_00;
                    do {
                        iVar2 = (**(*0x44e20 + 0x98))(*(iStack_58 + uVar5 * 8),0x3d860,aiStack_50);
                        if (iVar2 < 0) {
                            *puVar6 = 0;
                            *(puVar6 + 0x10) = 2;
                        }
                        else {
                            iVar2 = aiStack_50[0];
                            arg2_00 = fcn.00034784(aiStack_50[0],0);
                            uVar1 = fcn.00017678(iVar2,arg2_00);
                            *puVar6 = uVar1;
                            *(puVar6 + 0x10) = 0;
                            (**(*0x44e20 + 0x48))(arg2_00);
                        }
                        uVar5 = uVar5 + 1;
                        puVar6 = puVar6 + 0x14;
                    } while (uVar5 < uStack_60);
                }
                auStack_68[0] = 0;
                uVar4 = 0x2011;
                iVar2 = (**(*0x44c28 + 0x68))(*0x457a8,0x2011,0,arg1_00,uStack_60 & 0xffff,auStack_68);
                bVar7 = -1 < iVar2;
                (**(*0x44e20 + 0x48))(arg1_00);
            }
            noname_0 = *(iStack_58 + auStack_68[0] * 8);
            *arg2 = noname_0;
            *in_stack_00000028 = 0;
            if (cVar3 != '\0') {
                iVar2 = fcn.00017e04(noname_0,CONCAT71(uVar4 >> 8,bVar7),arg3,arg4,
                                     CONCAT71(in_stack_00000009,cVar3));
            }
        }
        if (iStack_58 != 0) {
            (**(*0x44e20 + 0x48))();
        }
    }
    return iVar2;
}


/* fcn.000160bc @ 0x160bc */

int64_t fcn.000160bc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    ushort uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int16_t iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int16_t iVar8;
    int64_t iVar9;
    char16_t *arg3_00;
    char *pcVar10;
    char *arg4;
    uint16_t auStackX_20 [4];
    ulong uVar11;
    uint64_t in_stack_ffffffffffffff68;
    ushort *puStack_88;
    ushort *puStack_80;
    uint64_t uStack_78;
    ushort *puStack_70;
    char *pcStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    uint64_t uStack_50;
    ulong auStack_48 [2];
    
    iVar5 = arg1;
    arg4 = NULL;
    puStack_80 = NULL;
    auStack_48[0] = 0;
    if (*0x44c28 == 0) {
        return -0x7ffffffffffffffd;
    }
    if (((arg3 == 0) || (*arg3 == 0)) || (arg2 == 0)) {
        return -0x7ffffffffffffffe;
    }
    puStack_70 = NULL;
    arg3_00 = NULL;
    puStack_88 = NULL;
    iVar3 = fcn.0003badc(arg2,*arg3,0,&pcStack_68);
    pcVar1 = pcStack_68;
    if (-1 < iVar3) {
        arg3_00 = &puStack_88;
        pcVar10 = pcStack_68 + 1;
        iVar3 = (**(*0x44e20 + 0x40))(4,pcVar10 * 0x28);
        if (-1 < iVar3) {
            if (puStack_88 != NULL) {
                fcn.0003d4be(puStack_88,pcVar10 * 0x28,0);
                arg3_00 = &puStack_70;
                iVar3 = (**(*0x44e20 + 0x40))(4,pcVar1 << 3);
                if (iVar3 < 0) goto code_r0x000166b0;
                if (puStack_70 != NULL) {
                    arg3_00 = NULL;
                    fcn.0003d4be(puStack_70,pcVar1 << 3,0);
                    if (*0x44c48 == 0) {
                        arg3_00 = 0x44c48;
                        iVar3 = (**(*0x44e20 + 0x140))(0x3d800,0);
                    }
                    if (iVar3 < 0) goto code_r0x000166b0;
                    if (*0x44c48 != 0) {
                        arg3_00 = &puStack_80;
                        iStack_60 = 0x100;
                        iVar3 = (**(*0x44e20 + 0x40))(4);
                        if (iVar3 < 0) goto code_r0x000166b0;
                        if (puStack_80 != NULL) {
                            if (pcVar1 != NULL) {
                                iVar9 = 0;
                                iVar3 = arg2;
                                do {
                                    *(puStack_70 + arg4 * 4) = iVar3;
                                    iStack_58 = iVar3 + 0x1c + *(iVar3 + 0x14);
                                    pcStack_68 = *(iVar3 + 0x18) - 0x10;
                                    uStack_50 = ((*(iVar3 + 0x10) - *(iVar3 + 0x14)) - 0x1c) / *(iVar3 + 0x18);
                                    fcn.0003d4be(0x45940,400,0);
                                    uStack_78 = 0;
                                    uVar6 = iVar3;
                                    iVar4 = fcn.00036640(uVar6,0x3d9a0,0x10);
                                    if (iVar4 == 0) {
                                        iStack_60 = 0x100;
                                        fcn.0003d4be(puStack_80,0x100,0);
                                        pcVar10 = pcStack_68;
                                        iVar4 = (**(*0x44c48 + 8))(*0x44c48,iStack_58 + 0x10,pcStack_68,0,0,
                                                                   &puStack_80,&iStack_60,0x13,
                                                                   in_stack_ffffffffffffff68 & 0xffffffff00000000);
                                        if (iVar4 < 0) {
                                            pcVar10 = "!!! %r";
                                            fcn.00032d6c(puStack_80,iStack_60,0x40198,iVar4);
                                        }
                                        uStack_78 = fcn.0001756c(puStack_80);
                                        fcn.0001761c(*0x457a8,0x2188,pcVar10,0x45940);
                                    }
                                    else {
                                        uVar11 = 0x10;
                                        iVar4 = fcn.00036640(uVar6,0x3d720,0x10);
                                        if (iVar4 == 0) {
                                            iVar4 = 0x2189;
code_r0x0001642b:
                                            fcn.0001761c(*0x457a8,iVar4,uVar11,0x45940);
                                        }
                                        else {
                                            uVar11 = 0x10;
                                            iVar4 = fcn.00036640(uVar6,0x3d840,0x10);
                                            if (iVar4 == 0) {
code_r0x00016426:
                                                iVar4 = 0x218b;
                                                goto code_r0x0001642b;
                                            }
                                            uVar11 = 0x10;
                                            iVar4 = fcn.00036640(uVar6,0x3d7d0,0x10);
                                            if (iVar4 == 0) goto code_r0x00016426;
                                            uVar11 = 0x10;
                                            iVar4 = fcn.00036640(uVar6,0x3d8a0,0x10);
                                            if (iVar4 == 0) goto code_r0x00016426;
                                            uVar11 = 0x10;
                                            iVar4 = fcn.00036640(uVar6,0x3dc10,0x10);
                                            if (iVar4 == 0) {
                                                iVar4 = 0x218a;
                                                goto code_r0x0001642b;
                                            }
                                            fcn.00032d3c(0x45940,0x14,0x401a0,iVar3);
                                        }
                                        (**(*0x44e20 + 0x40))(4);
                                        if (uStack_78 != 0) {
                                            fcn.00032d3c(uStack_78,0x1c,0x401a8,*(iStack_58 + 0x10));
                                        }
                                    }
                                    fcn.0003d4be(0x45ad0,400,0);
                                    fcn.00032d3c(0x45ad0,0x14,0x401a0,iStack_58);
                                    arg3_00 = L"%4d|%s|%5d|%5d| %s...| %s";
                                    arg4 = arg4 + 1;
                                    in_stack_ffffffffffffff68 = uStack_78;
                                    fcn.00032d3c(0x457b0,400,0x401b8,arg4);
                                    uVar7 = uStack_78;
                                    if (uStack_78 != 0) {
                                        (**(*0x44e20 + 0x48))();
                                    }
                                    uVar2 = fcn.00017678(uVar7,0x457b0);
                                    *(iVar9 + 0x28 + puStack_88) = uVar2;
                                    *(iVar9 + 0x48 + puStack_88) = 0;
                                    iVar9 = iVar9 + 0x28;
                                    iVar3 = iVar3 + *(iVar3 + 0x10);
                                } while (arg4 < pcVar1);
                            }
                            iVar3 = *0x457a8;
                            fcn.0001761c(*0x457a8,0x2187,arg3_00,0x457b0);
                            uVar2 = fcn.00017678(iVar3,0x457b0);
                            arg3_00 = NULL;
                            *puStack_88 = uVar2;
                            iVar8 = pcVar1 + 1;
                            *(puStack_88 + 0x10) = 1;
                            auStackX_20[0] = 1;
                            iVar3 = (**(*0x44c28 + 0x68))(*0x457a8,iVar5,0,puStack_88,iVar8,auStackX_20);
                            if (iVar3 < 0) goto code_r0x000166b0;
                            do {
                                iVar9 = *(puStack_70 + (auStackX_20[0] - 1) * 4);
                                if (iVar5 == 0x2186) {
                                    uVar7 = *(iVar9 + 0x10);
                                    arg3_00 = ((*arg3 - uVar7) - iVar9) + arg2;
                                    fcn.0003d510(iVar9,uVar7 + iVar9,arg3_00);
                                    *arg3 = *arg3 - uVar7;
                                    break;
                                }
                                uVar6 = *(iVar9 + 0x14);
                                uVar11 = 0;
                                fcn.0003d4be(0x45ad0,400,0);
                                fcn.0001761c(*0x457a8,puStack_88[auStackX_20[0] * 0x14],uVar11,0x45ad0);
                                uVar11 = 0x45b22;
                                fcn.00032d3c(0x45940,400,0x401f0,uVar6 + iVar9 + 0x1c);
                                (**(*0x44c28 + 0x58))(0x457e8,0x45940,10,auStack_48,uVar11);
                                arg3_00 = NULL;
                                iVar3 = (**(*0x44c28 + 0x68))(*0x457a8,iVar5,0,puStack_88,iVar8,auStackX_20);
                            } while (-1 < iVar3);
                        }
                    }
                }
            }
            if (-1 < iVar3) goto code_r0x00016704;
        }
    }
code_r0x000166b0:
    if (iVar3 != -0x7fffffffffffffeb) {
        fcn.0001761c(*0x457a8,0x2197,arg3_00,0x45940);
        fcn.0001761c(*0x457a8,arg1 & 0xffff,arg3_00,0x457b0);
        (**(*0x44c28 + 0x20))(0x457b0,0x45940,1,0);
    }
code_r0x00016704:
    if (puStack_88 != NULL) {
        (**(*0x44e20 + 0x48))();
    }
    if (puStack_70 != NULL) {
        (**(*0x44e20 + 0x48))();
    }
    if (puStack_80 != NULL) {
        (**(*0x44e20 + 0x48))();
    }
    return iVar3;
}


/* fcn.0001756c @ 0x1756c */

int16_t * fcn.0001756c(uint32_t arg1)

{
    char cVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    int64_t iVar3;
    char *pcVar4;
    int16_t *piStackX_8;
    
    pcVar4 = CONCAT44(in_register_0000000c,arg1);
    iVar3 = 0;
    if (pcVar4 == NULL) {
        piStackX_8 = NULL;
    }
    else {
        cVar1 = *pcVar4;
        iVar2 = iVar3;
        while (cVar1 != '\0') {
            iVar2 = iVar2 + 1;
            cVar1 = pcVar4[iVar2];
        }
        iVar2 = fcn.00034368(arg1,iVar2 + 1);
        iVar2 = iVar2 * 2 + 2;
        (**(*0x44e20 + 0x40))(4,iVar2);
        fcn.0003d4be(piStackX_8,iVar2,0);
        if ((piStackX_8 != NULL) && (cVar1 = *pcVar4, *piStackX_8 = cVar1, cVar1 != 0)) {
            do {
                iVar3 = iVar3 + 2;
                pcVar4 = pcVar4 + 1;
                cVar1 = *pcVar4;
                *(iVar3 + piStackX_8) = cVar1;
            } while (cVar1 != 0);
        }
    }
    return piStackX_8;
}


/* fcn.00017678 @ 0x17678 */

uint64_t fcn.00017678(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    char *pcVar3;
    char *pcVar4;
    uint64_t uStackX_8;
    ulong auStackX_18 [2];
    
    uVar1 = *0x457a8;
    auStackX_18[0] = 0;
    uStackX_8 = arg1 & 0xffffffffffff0000;
    if ((*0x44c40 != NULL) || (iVar2 = (**(*0x44e20 + 0x140))(0x3da20,0,0x44c40), -1 < iVar2)) {
        pcVar4 = *0x44c38;
        pcVar3 = *0x44c38;
        if (*0x44c38 == NULL) {
            iVar2 = (*(*0x44c40)[3])(*0x44c40,uVar1,0,auStackX_18);
            if (iVar2 == -0x7ffffffffffffffb) {
                iVar2 = (**(*0x44e20 + 0x40))(4,auStackX_18[0],0x44c38);
                if (iVar2 < 0) {
                    return 0;
                }
                iVar2 = (*(*0x44c40)[3])(*0x44c40,uVar1,*0x44c38,auStackX_18);
            }
            if (iVar2 < 0) {
                return 0;
            }
            pcVar4 = *0x44c38;
            pcVar3 = *0x44c38;
            if (*0x44c38 == NULL) {
                return 0;
            }
        }
        do {
            for (; *pcVar4 != ';'; pcVar4 = pcVar4 + 1) {
                if (*pcVar4 == '\0') {
code_r0x000177cc:
                    if (uStackX_8 == 0) {
                        iVar2 = (***0x44c40)(*0x44c40,uVar1,&uStackX_8,pcVar3,0,arg2,0);
                    }
                    else {
                        iVar2 = (*(*0x44c40)[2])(*0x44c40,uVar1,uStackX_8 & 0xffff,pcVar3,arg2,0);
                    }
                    if (-1 < iVar2) {
                        return uStackX_8 & 0xffff;
                    }
                    return 0;
                }
            }
            if (*pcVar4 == '\0') goto code_r0x000177cc;
            *pcVar4 = '\0';
            if (uStackX_8 == 0) {
                iVar2 = (***0x44c40)(*0x44c40,uVar1,&uStackX_8,pcVar3,0,arg2,0);
            }
            else {
                iVar2 = (*(*0x44c40)[2])(*0x44c40,uVar1,uStackX_8 & 0xffff,pcVar3,arg2,0);
            }
            *pcVar4 = ';';
            pcVar4 = pcVar4 + 1;
            pcVar3 = pcVar4;
        } while (-1 < iVar2);
    }
    return 0;
}


/* fcn.00017240 @ 0x17240 */

//WARNING: Variable defined which should be unmapped: var_10h

void fcn.00017240(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t arg1_00;
    uint8_t uVar4;
    int64_t arg2_00;
    ulong uVar5;
    int64_t *arg3_00;
    char acStackX_10 [8];
    int64_t iStackX_18;
    int64_t iStackX_20;
    uint32_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t aiStack_48 [2];
    int64_t var_10h;
    
    uVar4 = arg2;
    if (5 < uVar4) {
        return;
    }
    iStackX_18 = 0;
    iStackX_20 = 0;
    acStackX_10[0] = '\0';
    fcn.0001761c(arg1,0x219c,arg3,0x457b0);
    if (uVar4 == 5) {
        fcn.0001761c(arg1,0x219e,arg3,0x45ad0);
        uVar5 = CONCAT71(arg3 >> 8,1);
    }
    else {
        uVar5 = 0;
        fcn.0003d4be(0x45ad0,400,0);
        fcn.0001761c(arg1,0x219d,uVar5,0x45940);
        uVar5 = 0x45940;
        fcn.00032d3c(0x45ad0,400,0x45940,*(uVar4 * 8 + 0x44990));
        uVar5 = CONCAT71(uVar5 >> 8,3);
    }
    uVar3 = 0x457b0;
    (**(*0x44c28 + 0x20))(0x457b0,0x45ad0,uVar5,acStackX_10);
    if (acStackX_10[0] == '\0') {
        fcn.0001761c(arg1,0x219f,uVar5,0x45940);
        fcn.0003d4be(0x45ad0,400,0);
        fcn.00032d3c(0x45ad0,400,0x45940,*(uVar4 * 8 + 0x44990));
        arg1_00 = 0x457b0;
        (**(*0x44c28 + 0x20))(0x457b0,0x45ad0);
        if (acStackX_10[0] != '\0') goto code_r0x000174b6;
        iVar2 = 0;
        arg2_00 = 1;
        iVar1 = 0;
    }
    else {
        arg3_00 = &iStackX_20;
        iVar1 = fcn.00015fd8(CONCAT71(uVar3 >> 8,uVar4),0x2186,arg3_00,aiStack_48);
        if (iVar1 < 0) goto code_r0x000174b6;
        fcn.0001761c(arg1,0x219c,arg3_00,0x457b0);
        fcn.0001761c(arg1,0x21a0,arg3_00,0x45940);
        fcn.0003d4be(0x45ad0,400,0);
        fcn.00032d3c(0x45ad0,400,0x45940,*(uVar4 * 8 + 0x44990));
        (**(*0x44c28 + 0x20))(0x457b0,0x45ad0,3,acStackX_10);
        if (acStackX_10[0] != '\0') goto code_r0x000174b6;
        iVar2 = aiStack_48[0] + 0x28;
        iVar1 = (**(*0x44e20 + 0x40))(4,iVar2);
        if (iVar1 < 0) goto code_r0x000174b6;
        iVar1 = iVar2;
        fcn.0003d4be(iStackX_18,iVar2,0);
        fcn.0003b8f8(iStackX_18,CONCAT71(iVar1 >> 8,2));
        arg1_00 = iStackX_18 + 0x28;
        fcn.0003d510(arg1_00,iStackX_20,aiStack_48[0]);
        arg2_00 = 3;
        iVar1 = iStackX_18;
    }
    iVar2 = fcn.00015c60(CONCAT71(arg1_00 >> 8,uVar4),arg2_00,iVar1,iVar2);
    if (acStackX_10[0] == '\0') {
        if (iVar2 < 0) {
            iVar2 = 0x2197;
        }
        else {
            fcn.00014fb4();
            iVar2 = 0x2198;
        }
        fcn.0001761c(arg1,iVar2,iVar1,0x45940);
        fcn.0001761c(arg1,0x219c,iVar1,0x457b0);
        (**(*0x44c28 + 0x20))(0x457b0,0x45940,1,0);
    }
code_r0x000174b6:
    if (iStackX_20 != 0) {
        (**(*0x44e20 + 0x48))();
    }
    if (iStackX_18 != 0) {
        (**(*0x44e20 + 0x48))();
    }
    return;
}


/* fcn.00016dc4 @ 0x16dc4 */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_31h

void fcn.00016dc4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong ****arg2_00;
    char cVar1;
    ulong ****arg1_00;
    int64_t iVar2;
    ulong uVar3;
    ulong ****ppppuVar4;
    int64_t arg2_01;
    uint8_t uVar5;
    ulong uVar6;
    uint16_t uVar7;
    char acStackX_10 [8];
    uint16_t auStackX_18 [4];
    ulong ****ppppuStackX_20;
    uint32_t var_6fh;
    int16_t var_77h;
    int64_t var_7fh;
    ulong ***pppuVar8;
    ulong ****ppppuStack_e8;
    ulong ****ppppuStack_e0;
    ulong ***pppuStack_d8;
    uchar auStack_d0 [16];
    int64_t in_stack_ffffffffffffff40;
    ushort auStack_b8 [20];
    ushort uStack_90;
    int64_t var_79h;
    int64_t var_71h;
    int64_t var_61h;
    int64_t var_59h;
    int16_t var_31h;
    int16_t var_9h;
    
    ppppuStackX_20 = NULL;
    ppppuStack_e0 = NULL;
    uVar6 = 0;
    pppuStack_d8 = NULL;
    fcn.0003d4be(0x45ad0,400,0);
    acStackX_10[0] = '\x01';
    uVar7 = 0;
    auStackX_18[0] = 0;
    iVar2 = 0x2172;
    if ((arg2 & 8U) == 0) {
        iVar2 = 0x2171;
    }
    fcn.0001761c(arg1,iVar2,uVar6,0x457b0);
    fcn.0001761c(arg1,0x2195,uVar6,0x45940);
    uVar6 = 0x45940;
    fcn.00032d3c(0x45ad0,400,0x45940,*((arg3 & 0xffU) * 8 + 0x44990));
    ppppuVar4 = CONCAT71(uVar6 >> 8,3);
    uVar3 = 0x45ad0;
    uVar6 = 0x457b0;
    (**(*0x44c28 + 0x20))(0x457b0,0x45ad0,ppppuVar4,acStackX_10);
    ppppuStack_e8 = NULL;
    if (acStackX_10[0] == '\0') {
        arg1_00 = *((arg3 & 0xffU) * 8 + 0x449c8);
        iVar2 = fcn.00039994(arg1_00,CONCAT71(uVar3 >> 8,0x19),ppppuVar4,&ppppuStackX_20);
code_r0x0001710d:
        ppppuVar4 = ppppuStackX_20;
        if (-1 < iVar2) {
            if (ppppuStackX_20 != NULL) {
                if (acStackX_10[0] == '\x01') {
                    fcn.0001761c(arg1,0x2196,ppppuStackX_20,0x45940);
                    pppuVar8 = pppuStack_d8;
                    fcn.00032d3c(0x45ad0,400,0x45940,*((arg3 & 0xffU) * 8 + 0x44990));
                    arg1_00 = 0x457b0;
                    (**(*0x44c28 + 0x20))(0x457b0,0x45ad0,3,acStackX_10,pppuVar8);
                }
                ppppuVar4 = ppppuStackX_20;
                if (acStackX_10[0] == '\0') {
                    iVar2 = fcn.00015c60(CONCAT71(arg1_00 >> 8,arg3),arg2 & 0xff,ppppuStackX_20,ppppuStack_e8);
                }
                else {
                    iVar2 = -0x7fffffffffffffeb;
                }
            }
            arg2_01 = 0x2198;
            if (-1 < iVar2) goto code_r0x000171b5;
        }
    }
    else {
        uVar5 = (arg3 < 4) + 2;
        if (*0x44c28 != 0) {
            arg1_00 = CONCAT71(uVar6 >> 8,1);
            ppppuVar4 = &pppuStack_d8;
            iVar2 = fcn.00017bbc(arg1_00,&stack0xffffffffffffff40,ppppuVar4,&ppppuStackX_20,
                                 in_stack_ffffffffffffff40);
            if (-1 < iVar2) {
                if (ppppuStackX_20 == NULL) goto code_r0x0001710d;
                fcn.0003d4be(auStack_b8,0x78,0);
                auStack_b8[0] = 0x2183;
                ppppuVar4 = NULL;
                uStack_90 = 0x2184;
                var_61h._1_2_ = 0x2185;
                iVar2 = (**(*0x44c28 + 0x68))(*0x457a8,0x2182,0,auStack_b8,uVar5,auStackX_18);
                if (-1 < iVar2) {
                    if (auStackX_18[0] == 2) {
                        cVar1 = fcn.00015524(ppppuStackX_20,0,ppppuVar4);
                        if (cVar1 == '\0') goto code_r0x000171b0;
                        (**(*0x44e20 + 0x48))(ppppuStackX_20);
                        ppppuStackX_20 = 0x44c00;
                        ppppuStack_e8 = 0x20;
                        auStackX_18[0] = 0;
                    }
                    if (auStackX_18[0] == 0) {
                        uVar7 = 0x54;
                    }
                    if (ppppuStack_e8 == NULL) {
                        iVar2 = -0x7fffffffffffffe6;
                    }
                    else {
                        iVar2 = fcn.0003badc(ppppuStackX_20,ppppuStack_e8,0,0);
                    }
                    if (-1 < iVar2) {
                        uVar7 = 0x28;
                        auStackX_18[0] = uVar5;
                    }
                    ppppuVar4 = &ppppuStack_e0;
                    arg2_00 = uVar7 + ppppuStack_e8;
                    iVar2 = (**(*0x44e20 + 0x40))(4,arg2_00);
                    if (-1 < iVar2) {
                        fcn.0003d4be(ppppuStack_e0,arg2_00,0);
                        ppppuVar4 = ppppuStackX_20;
                        fcn.0003d510(uVar7 + ppppuStack_e0,ppppuStackX_20,ppppuStack_e8);
                        if (auStackX_18[0] == 0) {
                            if (*0x44c28 == 0) {
                                cVar1 = '\0';
                            }
                            else {
                                cVar1 = fcn.00016ccc(auStack_d0);
                            }
                            if (cVar1 == '\0') {
                                fcn.0003d510(auStack_d0,0x3d980,0x10);
                            }
                            iVar2 = fcn.0003b9a8(ppppuStack_e0,ppppuStackX_20,ppppuStack_e8,auStack_d0);
                            ppppuVar4 = ppppuStack_e8;
                            if (iVar2 < 0) goto code_r0x000171b0;
                        }
                        else if (auStackX_18[0] == uVar5) {
                            fcn.0003b8f8(ppppuStack_e0,CONCAT71(ppppuVar4 >> 8,arg2));
                        }
                        iVar2 = 0;
                        arg1_00 = ppppuStackX_20;
                        if (ppppuStackX_20 != 0x44c00) {
                            (**(*0x44e20 + 0x48))();
                            arg1_00 = ppppuStackX_20;
                        }
                        ppppuStackX_20 = ppppuStack_e0;
                        ppppuStack_e8 = arg2_00;
                        goto code_r0x0001710d;
                    }
                }
            }
        }
    }
code_r0x000171b0:
    arg2_01 = 0x2197;
code_r0x000171b5:
    fcn.0001761c(arg1,arg2_01,ppppuVar4,0x45940);
    (**(*0x44c28 + 0x20))(0x457b0,0x45940,1,0);
    fcn.00014fb4();
    if (ppppuStack_e0 != ppppuStackX_20) {
        (**(*0x44e20 + 0x48))(ppppuStack_e0);
    }
    if (ppppuStackX_20 != NULL) {
        (**(*0x44e20 + 0x48))();
    }
    if (pppuStack_d8 != NULL) {
        (**(*0x44e20 + 0x48))();
    }
    return;
}


/* fcn.00015cac @ 0x15cac */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Removing unreachable block (ram,0x00015f03)

ulong fcn.00015cac(int64_t arg1,uint32_t arg2)

{
    bool bVar1;
    int64_t iVar2;
    uint16_t uVar3;
    ulong uVar4;
    uint16_t uVar5;
    uint64_t uVar6;
    uchar *noname_2;
    uint16_t uVar7;
    ulong uStackX_18;
    int64_t iStackX_20;
    int64_t var_50h;
    int64_t var_58h;
    uchar *puStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    int64_t iStack_50;
    ulong uStack_48;
    int64_t in_stack_ffffffffffffffc0;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_bp_8h;
    
    uVar3 = arg2;
    iStack_58 = 0;
    iStack_50 = 0;
    bVar1 = true;
    puStack_68 = NULL;
    if ((uVar3 < 7) && (uStackX_18 = 0, *0x457a8 = arg1, *0x44c28 != 0)) {
        iVar2 = fcn.00017bbc(0,&uStack_48,&iStack_50,&iStack_58,in_stack_ffffffffffffffc0);
        if (-1 < iVar2) {
            uVar6 = uVar3;
            uVar7 = 0;
            if (uVar3 == 6) {
                uVar6 = 0;
            }
            noname_2 = NULL;
            fcn.0003d4be(0x45ad0,400,0);
            do {
                uVar5 = uVar6;
                iVar2 = *(uVar6 * 8 + 0x44990);
                if (iVar2 == 0) break;
                uVar4 = 0x3d6f0;
                if (3 < uVar5) {
                    uVar4 = 0x3d600;
                }
                noname_2 = NULL;
                uStackX_18 = 0;
                iVar2 = (**(*0x44e28 + 0x48))(iVar2,uVar4,0,&uStackX_18,0);
                if (iVar2 == -0x7ffffffffffffffb) {
                    (**(*0x44e20 + 0x40))(4,uStackX_18);
                    noname_2 = NULL;
                    iVar2 = (**(*0x44e28 + 0x48))(*(uVar6 * 8 + 0x44990),uVar4,0,&uStackX_18,0);
                    if (-1 < iVar2) {
                        noname_2 = &stack0xffffffffffffffc0;
                        iVar2 = (**(*0x44e20 + 0x98))(uStack_48,0x3da10);
                        if ((-1 < iVar2) &&
                           (iVar2 = (**(in_stack_ffffffffffffffc0 + 8))(in_stack_ffffffffffffffc0,&iStack_60),
                           -1 < iVar2)) {
                            noname_2 = *(uVar6 * 8 + 0x44990);
                            iVar2 = (**(iStack_60 + 8))(iStack_60,&iStackX_20,noname_2,0x8000000000000003,0);
                            if (-1 < iVar2) {
                                (**(iStackX_20 + 0x18))(iStackX_20);
                                noname_2 = *(uVar6 * 8 + 0x44990);
                                iVar2 = (**(iStack_60 + 8))(iStack_60,&iStackX_20,noname_2,0x8000000000000003,0);
                                if (-1 < iVar2) {
                                    noname_2 = puStack_68;
                                    iVar2 = (**(iStackX_20 + 0x28))(iStackX_20,&uStackX_18);
                                    (**(iStackX_20 + 0x10))(iStackX_20);
                                    uVar7 = uVar7 + 1;
                                    if (-1 < iVar2) goto code_r0x00015f0d;
                                }
                            }
                        }
                        bVar1 = false;
                        fcn.0001761c(arg1,0x2199,noname_2,0x457b0);
                        noname_2 = CONCAT71(noname_2 >> 8,1);
                        (**(*0x44c28 + 0x20))(0x457b0,*(uVar6 * 8 + 0x44990),noname_2,0);
                    }
                }
code_r0x00015f0d:
                uVar5 = uVar5 + 1;
                uVar6 = uVar5;
                if (uVar3 != 6) {
                    uVar5 = 6;
                    break;
                }
            } while (bVar1);
            if ((uVar5 == 6) && (bVar1)) {
                fcn.0001761c(arg1,0x219b,noname_2,0x45940);
                uVar4 = 0x45940;
                fcn.00032d3c(0x45ad0,400,0x45940,uVar7);
                fcn.0001761c(arg1,0x219a,uVar4,0x457b0);
                (**(*0x44c28 + 0x20))(0x457b0,0x45ad0,1,0);
            }
        }
        if (iStack_58 != 0) {
            (**(*0x44e20 + 0x48))();
        }
        if (iStack_50 != 0) {
            (**(*0x44e20 + 0x48))();
        }
    }
    return 0;
}


/* fcn.00015fd8 @ 0x15fd8 */

int64_t fcn.00015fd8(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint8_t uVar2;
    ulong uVar3;
    
    uVar2 = arg1;
    if (uVar2 < 6) {
        *arg4 = 0;
        uVar3 = 0x3d6f0;
        if (3 < uVar2) {
            uVar3 = 0x3d600;
        }
        iVar1 = (**(*0x44e28 + 0x48))(*(uVar2 * 8 + 0x44990),uVar3,0,arg4,0);
        if (iVar1 == -0x7ffffffffffffffb) {
            (**(*0x44e20 + 0x40))(4,*arg4,arg3);
            iVar1 = (**(*0x44e28 + 0x48))(*(uVar2 * 8 + 0x44990),uVar3,0,arg4,*arg3);
            if (iVar1 < 0) {
                return iVar1;
            }
            iVar1 = fcn.000160bc(arg2 & 0xffff,*arg3,arg4);
            return iVar1;
        }
    }
    return -0x7ffffffffffffff1;
}


/* fcn.00015524 @ 0x15524 */

//WARNING: Removing unreachable block (ram,0x00015689)
//WARNING: Removing unreachable block (ram,0x000156c5)
//WARNING: Removing unreachable block (ram,0x000156ce)
//WARNING: Removing unreachable block (ram,0x000156d6)
//WARNING: Removing unreachable block (ram,0x000156de)
//WARNING: Removing unreachable block (ram,0x000156f2)
//WARNING: Removing unreachable block (ram,0x0001571c)
//WARNING: Removing unreachable block (ram,0x00015723)
//WARNING: Removing unreachable block (ram,0x0001577a)
//WARNING: Removing unreachable block (ram,0x00015781)
//WARNING: Removing unreachable block (ram,0x00015791)
//WARNING: Removing unreachable block (ram,0x0001579b)
//WARNING: Removing unreachable block (ram,0x0001579f)
//WARNING: Removing unreachable block (ram,0x000157c6)
//WARNING: Removing unreachable block (ram,0x000157c9)
//WARNING: Removing unreachable block (ram,0x000157de)
//WARNING: Removing unreachable block (ram,0x000157e3)
//WARNING: Removing unreachable block (ram,0x000157fd)
//WARNING: Removing unreachable block (ram,0x000157f5)
//WARNING: Removing unreachable block (ram,0x00015803)
//WARNING: Removing unreachable block (ram,0x0001581c)
//WARNING: Removing unreachable block (ram,0x00015864)

uint64_t fcn.00015524(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int16_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_150h;
    int64_t var_168h;
    
    iVar2 = 0x5a4d;
    iVar3 = -0x7fffffffffffffeb;
    if (*arg1 == 0x5a4d) {
        iVar2 = 0x5a56;
        piVar1 = arg1 + *(arg1 + 0x3c);
        if (*piVar1 != 0x5a56) {
            if ((*0x44c48 == 0) &&
               ((iVar2 = (**(*0x44e20 + 0x140))(0x3d800,0,0x44c48), iVar2 < 0 || (*0x44c48 == 0)))) {
                iVar3 = iVar2;
            }
            else {
                iVar2 = (**(*0x44e20 + 0x40))(4,piVar1[3] * 0x28);
                iVar3 = iVar2;
            }
        }
    }
    return CONCAT71(iVar2 >> 8,iVar3 >> 0x3f) ^ 1;
}


/* fcn.0003b9a8 @ 0x3b9a8 */

ulong fcn.0003b9a8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    ulong *puVar2;
    uchar in_stack_00000028;
    
    fcn.0003b8f8(arg1,CONCAT71(arg2 >> 8,in_stack_00000028));
    if (((arg1 != 0) && (arg2 != 0)) && (arg3 != 0)) {
        puVar1 = 0x3d720;
        if (arg3 != 0x20) {
            puVar1 = NULL;
        }
        puVar2 = 0x3d840;
        if (arg3 != 0x30) {
            puVar2 = puVar1;
        }
        puVar1 = 0x3d7d0;
        if (arg3 != 0x40) {
            puVar1 = puVar2;
        }
        puVar2 = 0x3d8a0;
        if (arg3 != 0x50) {
            puVar2 = puVar1;
        }
        puVar1 = 0x3dc10;
        if (arg3 != 0x100) {
            puVar1 = puVar2;
        }
        puVar2 = 0x3d9a0;
        if (arg3 < 0x101) {
            puVar2 = puVar1;
        }
        if (puVar2 != NULL) {
            *(arg1 + 0x28) = *puVar2;
            *(arg1 + 0x30) = puVar2[1];
            *(arg1 + 0x40) = arg3 + 0x10;
            *(arg1 + 0x38) = arg3 + 0x2c;
            *(arg1 + 0x3c) = 0;
            puVar1 = 0x3d980;
            if (arg4 != 0) {
                puVar1 = arg4;
            }
            *(arg1 + 0x44) = *puVar1;
            *(arg1 + 0x4c) = puVar1[1];
            fcn.0003d510(arg1 + 0x54,arg2,arg3);
            if (*(arg1 + 0x38) == 0) {
                return 0;
            }
            fcn.0003badc(arg1 + 0x28,*(arg1 + 0x38),0,0);
            return 0;
        }
    }
    return 0x8000000000000002;
}


/* fcn.00034150 @ 0x34150 */

ulong fcn.00034150(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint16_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint32_t arg4;
    int64_t var_bp_10h;
    ulong var_bp_8h;
    
    iVar5 = *0x44c20;
    if ((*0x44c20 == 0) || (arg1 == 0)) {
        uVar3 = 0x8000000000000002;
    }
    else {
        iVar4 = fcn.00034288(*0x44c20,8,&var_bp_10h,4);
        if ((-1 < iVar4) && (*(iVar5 + 0x10) == 0x2d)) {
            arg4 = 2;
            uVar1 = var_bp_10h._2_2_ << 8;
            uVar2 = var_bp_10h._2_2_ >> 8;
            var_bp_10h._2_2_ = var_bp_10h << 8 | var_bp_10h >> 8;
            var_bp_10h._0_2_ = uVar1 | uVar2;
            iVar4 = fcn.00034288(iVar5 + 0x12,4,&var_bp_10h + 4,2);
            if ((-1 < iVar4) && (*(iVar5 + 0x1a) == 0x2d)) {
                var_bp_10h._4_2_ = var_bp_10h._4_2_ << 8 | var_bp_10h._4_2_ >> 8;
                iVar4 = fcn.00034288(iVar5 + 0x1c,4,&var_bp_10h + 6,arg4);
                if ((-1 < iVar4) && (*(iVar5 + 0x24) == 0x2d)) {
                    var_bp_10h._6_2_ = var_bp_10h._6_2_ << 8 | var_bp_10h._6_2_ >> 8;
                    iVar4 = fcn.00034288(iVar5 + 0x26,4,&var_bp_8h,arg4);
                    if ((-1 < iVar4) &&
                       ((*(iVar5 + 0x2e) == 0x2d &&
                        (iVar5 = fcn.00034288(iVar5 + 0x30,0xc,&var_bp_8h + 2,6), -1 < iVar5)))) {
                        *arg1 = CONCAT26(var_bp_10h._6_2_,
                                         CONCAT24(var_bp_10h._4_2_,CONCAT22(var_bp_10h._2_2_,var_bp_10h)));
                        *(arg1 + 8) = var_bp_8h;
                        return 0;
                    }
                }
            }
        }
        uVar3 = 0x8000000000000003;
    }
    return uVar3;
}


/* fcn.00016ccc @ 0x16ccc */

uchar fcn.00016ccc(int64_t arg1)

{
    int64_t iVar1;
    ulong noname_0;
    uchar uVar2;
    uint uStack_18;
    uchar uStack_14;
    int16_t *piStack_10;
    
    uStack_18 = 0x2421a2;
    uStack_14 = 0;
    piStack_10 = NULL;
    if (arg1 != 0) {
        if (*0x44c20 == NULL) {
            iVar1 = (**(*0x44e20 + 0x40))(4,0x25,0x44c20);
            if (iVar1 < 0) {
                return 0;
            }
            fcn.00032d3c(*0x44c20,0x4a,0x401a0,0x3d980);
        }
        piStack_10 = *0x44c20;
        uStack_18 = CONCAT22(uStack_18._2_2_,0x21a2);
        noname_0 = *0x457a8;
        iVar1 = (**(*0x44c28 + 0x88))(*0x457a8,0x21a1,&uStack_18,1,0);
        if ((-1 < iVar1) && (*piStack_10 != 0)) {
            iVar1 = fcn.00034150(noname_0,arg1);
            if ((iVar1 < 0) || (uVar2 = 1, (*0x44c20)[0x24] != 0)) {
                uVar2 = 0;
            }
            return uVar2;
        }
    }
    return 0;
}


/* fcn.0003b8f8 @ 0x3b8f8 */

void fcn.0003b8f8(int64_t arg1,int64_t arg2)

{
    int32_t var_bp_10h;
    int64_t var_ch;
    int32_t var_4h;
    
    var_bp_10h = 0xb0107e8;
    var_ch._0_4_ = 0x1a370d;
    var_ch._4_4_ = 0;
    var_4h = 0;
    if (*0x44e28 != 0) {
        (**(*0x44e28 + 0x18))(&var_bp_10h,0);
        var_ch._0_4_ = var_ch & 0xffffff;
    }
    var_4h = 0;
    var_ch._4_4_ = 0;
    if (arg1 != &var_bp_10h) {
        section..text(arg1,&var_bp_10h,0x10);
    }
    if ((arg2 & 8U) != 0) {
        *arg1 = 2000;
    }
    *(arg1 + 0x10) = 0x18;
    *(arg1 + 0x14) = 0xef10200;
    *(arg1 + 0x18) = *0x3d7c0;
    *(arg1 + 0x20) = *0x3d7c8;
    return;
}


/* fcn.00015c60 @ 0x15c60 */

void fcn.00015c60(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg4_00;
    
    arg4_00 = 0x3d6f0;
    if (3 < arg1) {
        arg4_00 = 0x3d600;
    }
    fcn.0003b6fc(arg2 & 0xffff,*((arg1 & 0xff) * 8 + 0x44990),0,arg4_00);
    return;
}


/* fcn.00034368 @ 0x34368 */

uint64_t fcn.00034368(uint32_t arg1,int64_t arg2)

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


/* fcn.00017820 @ 0x17820 */

int64_t fcn.00017820(int64_t arg1,int64_t arg2)

{
    int64_t aiStackX_18 [2];
    
    aiStackX_18[0] = 0;
    (**(*0x44e20 + 0x40))(4,arg1,aiStackX_18);
    if ((aiStackX_18[0] != 0) && (arg2 != 0)) {
        (**(*0x44e20 + 0x160))(aiStackX_18[0],arg2,arg1);
    }
    return aiStackX_18[0];
}


/* fcn.00033e24 @ 0x33e24 */

int64_t fcn.00033e24(int64_t arg1,ulong noname_1,uint32_t arg2)

{
    uint16_t *puVar1;
    uint in_R8;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_R8,arg2);
    puVar1 = 0x3feec;
    if (uVar2 == 0) {
        return 0;
    }
    for (; (((*arg1 != 0 && (*puVar1 != 0)) && (*arg1 == *puVar1)) && (1 < uVar2)); uVar2 = uVar2 - 1) {
        arg1 = arg1 + 2;
        puVar1 = puVar1 + 1;
    }
    return *arg1 - *puVar1;
}


/* fcn.00017528 @ 0x17528 */

ulong fcn.00017528(uint32_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint in_register_0000000c;
    int16_t *piVar4;
    int64_t iVar5;
    uint64_t arg2_00;
    
    iVar2 = 0;
    iVar1 = *arg2;
    piVar4 = arg2;
    iVar5 = iVar2;
    while (iVar1 != 0) {
        piVar4 = piVar4 + 1;
        iVar5 = iVar5 + 1;
        iVar1 = *piVar4;
    }
    for (piVar4 = CONCAT44(in_register_0000000c,arg1); *piVar4 != 0; piVar4 = piVar4 + 1) {
        iVar2 = iVar2 + 1;
    }
    piVar4 = CONCAT44(in_register_0000000c,arg1) + iVar2;
    arg2_00 = iVar5 + 1;
    if ((((piVar4 == NULL) || (arg2 == 0)) || (1000000 < arg2_00)) || (arg2_00 == 0)) {
        return 0x8000000000000002;
    }
    uVar3 = fcn.00033ecc(arg2,arg2_00);
    if (arg2_00 <= uVar3) {
        return 0x8000000000000005;
    }
    if (arg2 <= piVar4) {
        if (piVar4 < arg2 + (uVar3 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg2 < piVar4) goto code_r0x00033f76;
    }
    if (arg2 < piVar4 + arg2_00) {
        return 0x800000000000000f;
    }
code_r0x00033f76:
    iVar1 = *arg2;
    if (iVar1 != 0) {
        arg2 = arg2 - piVar4;
        do {
            *piVar4 = iVar1;
            piVar4 = piVar4 + 1;
            iVar1 = *(arg2 + piVar4);
        } while (iVar1 != 0);
    }
    *piVar4 = 0;
    return 0;
}


/* fcn.00017e04 @ 0x17e04 */

ulong fcn.00017e04(ulong noname_0,uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg_b0h)

{
    ushort uVar1;
    int16_t iVar2;
    int16_t *piVar3;
    ulong *puVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    ushort *arg1_00;
    ushort *puVar8;
    ushort *puVar9;
    int64_t iVar10;
    int64_t iVar11;
    uint64_t arg3_00;
    ulong *in_stack_00000028;
    int64_t var_a8h;
    uint16_t auStack_158 [4];
    int64_t iStack_150;
    int64_t iStack_148;
    int64_t iStack_140;
    uint64_t uStack_138;
    int64_t iStack_130;
    int64_t iStack_128;
    uint uStack_118;
    
    iStack_128 = 0;
    iStack_140 = 0;
    iStack_130 = 0;
    uStack_138 = 0;
    iStack_148 = 0;
    if (*0x44c28 == 0) {
        uVar5 = 0x8000000000000003;
    }
    else if (arg1 == '\x01') {
        uVar6 = (**(*0x44e20 + 0x98))(noname_0,0x3da10);
        if (-1 < uVar6) {
            uVar6 = (**(iStack_128 + 8))(iStack_128,&iStack_148);
        }
        fcn.00017884(&iStack_130,&uStack_138);
        do {
            if ((uVar6 < 0) || (iStack_148 == 0)) {
                iVar11 = 0;
                piVar3 = &uStack_118;
                iVar10 = iVar11;
                iVar2 = uStack_118;
                while (iVar2 != 0) {
                    piVar3 = piVar3 + 1;
                    iVar10 = iVar10 + 1;
                    iVar2 = *piVar3;
                }
                uVar5 = (**(*0x44e20 + 0x40))(4,iVar10 * 2 + 2,arg2);
                piVar3 = &uStack_118;
                while (uStack_118 != 0) {
                    piVar3 = piVar3 + 1;
                    iVar11 = iVar11 + 1;
                    uStack_118._0_2_ = *piVar3;
                }
                fcn.00033f00(*arg2,iVar11 + 1,&uStack_118);
                return uVar5;
            }
            arg3_00 = 0;
            auStack_158[0] = 0;
            fcn.0003d4be(&uStack_118,0xf0,0);
            iVar10 = iStack_148;
            iStack_150 = 1;
            uVar6 = 0;
            do {
                if (uVar6 < 0) break;
                arg3_00 = 0;
                iStack_150 = 0;
                uVar6 = (**(iVar10 + 0x20))(iVar10);
                if (-1 < uVar6) break;
                uVar7 = 0;
                if ((uVar6 == 0x8000000000000005) && (uVar7 = fcn.00017820(iStack_150,0), uVar7 != 0)) {
                    fcn.0003d4be(uVar7,iStack_150,0);
                }
                arg3_00 = uVar7;
                uVar6 = (**(iVar10 + 0x20))(iVar10);
                if ((-1 < uVar6) && (iStack_150 != 0)) {
                    arg3_00 = uVar7;
                    fcn.00017900(&iStack_130,&uStack_138,uVar7);
                }
                (**(*0x44e20 + 0x48))(uVar7);
            } while (iStack_150 != 0);
            iVar10 = iStack_130;
            uVar7 = uStack_138;
            puVar4 = in_stack_00000028;
            if (uStack_138 == 0) {
                uVar6 = 0x800000000000000e;
            }
            if (-1 < uVar6) {
                uVar6 = 0;
                if ((uStack_138 != 0) && (iStack_130 != 0)) {
                    iVar11 = uStack_138 * 0x28;
                    arg1_00 = fcn.00017820(iVar11,0);
                    if ((arg1_00 != NULL) && (fcn.0003d4be(arg1_00,iVar11,0), uVar7 != 0)) {
                        puVar9 = iVar10 + 0x18;
                        puVar8 = arg1_00;
                        uVar6 = uVar7;
                        do {
                            uVar1 = *puVar9;
                            puVar9 = puVar9 + 0x10;
                            *puVar8 = uVar1;
                            puVar8 = puVar8 + 0x14;
                            uVar6 = uVar6 - 1;
                        } while (uVar6 != 0);
                    }
                    arg3_00 = 0;
                    uVar6 = (**(*0x44c28 + 0x68))(*0x457a8,0x2012,0,arg1_00,uVar7 & 0xffff,auStack_158);
                }
                if (-1 < uVar6) {
                    uVar6 = (**(iStack_148 + 8))
                                      (iStack_148,&iStack_140,*(auStack_158[0] * 0x20 + 0x10 + iVar10),1,0);
                    (**(iStack_148 + 0x10))(iStack_148);
                    arg3_00 = auStack_158[0];
                    iStack_148 = 0;
                    fcn.00017ac4(&uStack_118,*(arg3_00 * 0x20 + 0x10 + iVar10),arg3_00);
                    if (-1 < uVar6) {
                        if (*(auStack_158[0] * 0x20 + iVar10) != 0x10) {
                            arg3_00 = arg3;
                            uVar6 = (**(*0x44e20 + 0x40))(4,*(auStack_158[0] * 0x20 + 8 + iVar10));
                            if (-1 < uVar6) {
                                *puVar4 = *(auStack_158[0] * 0x20 + 8 + iVar10);
                                arg3_00 = *arg3;
                                uVar6 = (**(iStack_140 + 0x20))(iStack_140,puVar4);
                            }
                            (**(iStack_140 + 0x10))(iStack_140);
                            iStack_140 = 0;
                        }
                        iStack_148 = iStack_140;
                    }
                }
            }
            if (uVar7 == 0) {
                fcn.0001761c(*0x457a8,0x200f,arg3_00,0x457b0);
                fcn.0001761c(*0x457a8,0x2010,arg3_00,0x45940);
                (**(*0x44c28 + 0x20))(0x457b0,0x45940,1,0);
            }
            fcn.00017884(&iStack_130,&uStack_138);
        } while (uVar6 != 0x8000000000000015);
        uVar5 = 0x8000000000000015;
    }
    else {
        uVar5 = 0x8000000000000015;
    }
    return uVar5;
}


/* fcn.00017884 @ 0x17884 */

void fcn.00017884(int64_t arg1,uint32_t arg2)

{
    uint64_t *puVar1;
    uint in_register_00000014;
    uint64_t uVar2;
    int64_t iVar3;
    
    uVar2 = 0;
    puVar1 = CONCAT44(in_register_00000014,arg2);
    if (*CONCAT44(in_register_00000014,arg2) != 0) {
        iVar3 = 0;
        do {
            (**(*0x44e20 + 0x48))(*(*arg1 + 0x10 + iVar3));
            uVar2 = uVar2 + 1;
            iVar3 = iVar3 + 0x20;
        } while (uVar2 < *puVar1);
    }
    if (arg1 != 0) {
        if ((*arg1 != 0) && (*puVar1 != 0)) {
            (**(*0x44e20 + 0x48))();
        }
        *arg1 = 0;
    }
    *puVar1 = 0;
    return;
}


/* fcn.00017900 @ 0x17900 */

void fcn.00017900(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t *arg4;
    uint64_t uVar1;
    int16_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int16_t *piVar5;
    ushort uVar6;
    int64_t arg1_00;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t arg3_00;
    
    arg4 = arg3 + 0x50;
    uVar9 = 0;
    iVar8 = 0;
    iVar2 = *arg4;
    piVar5 = arg4;
    while (iVar2 != 0) {
        piVar5 = piVar5 + 1;
        iVar8 = iVar8 + 1;
        iVar2 = *piVar5;
    }
    *arg2 = *arg2 + 1;
    iVar8 = iVar8 * 2 + 6;
    arg1_00 = fcn.00017820(*arg2 << 5,0);
    if (arg1_00 != 0) {
        fcn.0003d4be(arg1_00,*arg2 << 5,0);
        piVar3 = *arg1;
        if (piVar3 != NULL) {
            if (1 < *arg2) {
                uVar9 = 1;
                uVar1 = *arg2 - 1;
                piVar4 = piVar3;
                if (1 < uVar1) {
                    do {
                        if (*piVar4 != piVar4[4]) break;
                        uVar9 = uVar9 + 1;
                        piVar4 = piVar4 + 4;
                    } while (uVar9 < uVar1);
                }
            }
            iVar7 = uVar9 * 0x20;
            (**(*0x44e20 + 0x160))(arg1_00,piVar3,iVar7);
            (**(*0x44e20 + 0x160))(arg1_00 + 0x20 + iVar7,*arg1 + iVar7);
            (**(*0x44e20 + 0x48))(*arg1);
        }
        iVar10 = uVar9 * 0x20;
        *(iVar10 + arg1_00) = *(arg3 + 0x48) & 0x10;
        *(iVar10 + 8 + arg1_00) = *(arg3 + 8);
        iVar7 = fcn.00017820(iVar8,*(iVar10 + 0x10 + arg1_00));
        *(iVar10 + 0x10 + arg1_00) = iVar7;
        if (iVar7 != 0) {
            fcn.0003d4be(iVar7,iVar8,0);
            arg3_00 = 0x3fef8;
            iVar7 = *(iVar10 + 0x10 + arg1_00);
            if (*(iVar10 + arg1_00) != 0x10) {
                arg3_00 = 0x3f8d8;
            }
            fcn.00032d3c(iVar7,iVar8,arg3_00,arg4);
            uVar6 = fcn.00017678(iVar7,*(iVar10 + 0x10 + arg1_00));
            *(iVar10 + 0x18 + arg1_00) = uVar6;
            fcn.0003d4be(*(iVar10 + 0x10 + arg1_00),iVar8,0);
            fcn.00032d3c(*(iVar10 + 0x10 + arg1_00),iVar8,0x3f8d8,arg4);
        }
        *arg1 = arg1_00;
    }
    return;
}


/* fcn.00017ac4 @ 0x17ac4 */

void fcn.00017ac4(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    int64_t iVar2;
    int16_t *piVar3;
    int64_t iVar4;
    uint in_register_0000000c;
    int16_t *arg1_00;
    uint in_register_00000014;
    uint32_t *arg3_00;
    int64_t iVar5;
    int16_t iVar6;
    int iVar7;
    
    arg3_00 = CONCAT44(in_register_00000014,arg2);
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar5 = 0;
    iVar7 = 0;
    iVar2 = iVar5;
    piVar3 = arg1_00;
    if (*arg1_00 != 0) {
        do {
            piVar3 = piVar3 + 1;
            iVar2 = iVar2 + 1;
        } while (*piVar3 != 0);
        if (iVar2 != 0) {
            if (arg3 == 0) {
                piVar3 = 0x3feec;
                iVar2 = iVar5;
                do {
                    iVar4 = iVar2;
                    piVar3 = piVar3 + 1;
                    iVar2 = iVar4 + 1;
                } while (*piVar3 != 0);
                iVar2 = fcn.00033e24(arg3_00,arg3_00,iVar4 + 2);
                if (iVar2 == 0) {
                    iVar2 = iVar5;
                    piVar3 = arg1_00;
                    do {
                        iVar4 = iVar2;
                        piVar3 = piVar3 + 1;
                        iVar2 = iVar4 + 1;
                        iVar6 = iVar5;
                    } while (*piVar3 != iVar6);
                    if (iVar2 != 0) {
                        piVar3 = arg1_00 + iVar4;
                        do {
                            if (*piVar3 == 0x5c) break;
                            piVar3 = piVar3 + -1;
                            iVar2 = iVar2 + -1;
                        } while (iVar2 != 0);
                        if (iVar2 != 0) {
                            arg1_00[iVar2 + -1] = iVar6;
                            return;
                        }
                    }
                    *arg1_00 = iVar6;
                    return;
                }
            }
            fcn.00017528(arg1,0x3fef4);
            fcn.00017528(arg1,arg3_00);
            return;
        }
    }
    iVar6 = *arg3_00;
    puVar1 = arg3_00;
    while (iVar6 != 0) {
        puVar1 = puVar1 + 2;
        iVar5 = iVar5 + 1;
        iVar7 = iVar5;
        iVar6 = *puVar1;
    }
    fcn.00033f00(arg1_00,iVar7 + 1,arg3_00);
    return;
}


/* fcn.00036528 @ 0x36528 */

int64_t fcn.00036528(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t *in_stack_00000028;
    
    if (*in_stack_00000028 == 0) {
        *arg4 = 0;
    }
    iVar1 = (**(*0x44e28 + 0x48))();
    if ((iVar1 < 0) && (iVar1 == -0x7ffffffffffffffb)) {
        if (*in_stack_00000028 != 0) {
            (**(*0x44e20 + 0x48))();
        }
        iVar1 = fcn.00036468(*arg4);
        *in_stack_00000028 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x44e28 + 0x48))(arg1,arg2,arg3,arg4,iVar1);
        }
    }
    return iVar1;
}


/* fcn.0001839c @ 0x1839c */

uint64_t fcn.0001839c(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t aiStackX_8 [2];
    
    uVar3 = 0;
    aiStackX_8[0] = 0;
    iVar1 = (**(*0x44e20 + 0x140))(0x3e4c8,0,aiStackX_8);
    if (iVar1 < 0) {
        uVar2 = 0;
    }
    else {
        *0x44c78 = **(aiStackX_8[0] + 0x48);
        uVar2 = *0x44c78;
        *0x44c60 = **(aiStackX_8[0] + 0x50);
        *0x46fc0 = *0x44c78;
        if (*0x44c78 != 0) {
            uVar4 = uVar3;
            uVar5 = uVar2;
            do {
                if (uVar3 + *0x44c60 != 0) {
                    iVar1 = (**(*0x44e20 + 0x98))(*(uVar3 + *0x44c60 + 0x38),0x3e4c8,aiStackX_8 + 1);
                    uVar2 = *0x46fc0;
                    uVar5 = *0x44c78;
                    if (iVar1 < 0) {
                        aiStackX_8[1] = 0;
                        *0x46fc0 = *0x46fc0 - 1;
                        uVar2 = *0x46fc0;
                    }
                }
                uVar4 = uVar4 + 1;
                uVar3 = uVar3 + 0x40;
            } while (uVar4 < uVar5);
        }
    }
    return uVar2;
}


/* fcn.0001848c @ 0x1848c */

int64_t fcn.0001848c(int64_t arg1)

{
    int64_t iVar1;
    
    if (((*0x46fc0 == 0) || (*0x44c78 == 0)) || (*0x44c60 == 0)) {
        *0x46fc0 = fcn.0001839c();
    }
    if (((*0x46fc0 == 0) || (*0x44c60 == 0)) || (*0x44c78 <= arg1)) {
        iVar1 = 0;
    }
    else {
        iVar1 = *0x44c60 + arg1 * 0x40;
    }
    return iVar1;
}


/* fcn.00018500 @ 0x18500 */

void fcn.00018500(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    uint16_t uVar2;
    int64_t *piVar3;
    int64_t iVar4;
    uint16_t uVar5;
    uint8_t uVar6;
    ushort auStackX_8 [4];
    uint32_t auStackX_18 [4];
    int64_t var_40h;
    int32_t var_50h;
    
    auStackX_18[0] = 0;
    piVar3 = fcn.0001848c(arg2);
    if (piVar3 != NULL) {
        puVar1 = *piVar3;
        auStackX_8[0] = 0;
        iVar4 = (**puVar1)(puVar1,auStackX_8);
        uVar6 = auStackX_8[0];
        if (-1 < iVar4) {
            uVar6 = auStackX_8[0] & 1;
        }
        *(arg1 + 2 + arg2 * 2) = uVar6;
        auStackX_8[0] = 0;
        iVar4 = (**puVar1)(puVar1,auStackX_8);
        if (-1 < iVar4) {
            uVar6 = auStackX_8[0] >> 1 & 1;
        }
        *(arg1 + 0xe + arg2 * 2) = uVar6;
        auStackX_8[0] = 0;
        iVar4 = (**puVar1)(puVar1,auStackX_8);
        if (-1 < iVar4) {
            uVar6 = auStackX_8[0] >> 2 & 1;
        }
        *(arg1 + 0x1a + arg2 * 2) = uVar6;
        auStackX_8[0] = 0;
        iVar4 = (**puVar1)(puVar1,auStackX_8);
        if (-1 < iVar4) {
            uVar6 = auStackX_8[0] >> 3 & 1;
        }
        *(arg1 + 0x26 + arg2 * 2) = uVar6;
        iVar4 = (*puVar1[6])(puVar1,auStackX_18);
        if (-1 < iVar4) {
            uVar2 = auStackX_18[0] >> 0x10;
            uVar5 = uVar2 >> 1 & 1;
            *(arg1 + 0x32 + arg2 * 2) = uVar5;
            *(arg1 + 0x3e + arg2 * 2) = uVar2 & 1;
            *(arg1 + 0x4a + arg2 * 2) = 0;
            if ((((*(arg1 + 0x1a + arg2 * 2) != 0) && ((auStackX_18[0] & 0x10000) != 0)) || (*(piVar3 + 0x15) != '\0'))
               || (uVar5 == 0)) {
                *(arg1 + 0x4a + arg2 * 2) = 1;
            }
        }
    }
    return;
}


/* fcn.0003830c @ 0x3830c */

uchar fcn.0003830c(int64_t arg1)

{
    char cVar1;
    uint32_t uVar2;
    
    uVar2 = 0;
    do {
        cVar1 = fcn.000104c3(arg1);
        if (cVar1 != '\0') {
            return 1;
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 10);
    return 0;
}


/* fcn.00018704 @ 0x18704 */

ulong fcn.00018704(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    char *apcStack_38 [6];
    
    fcn.0003d4be(apcStack_38,0x21,0);
    uVar3 = 0;
    do {
        *(apcStack_38 + uVar3) = *(arg1 + uVar3 * 2);
        if (*(arg1 + uVar3 * 2) == 0) break;
        uVar3 = uVar3 + 1;
    } while (uVar3 < 0x21);
    iVar1 = (**(*arg2 + 0x10))(*arg2,arg3 == '\0',apcStack_38);
    if (iVar1 < 0) {
        uVar2 = 0x800000000000000f;
    }
    else {
        if (arg2 + 0x17 != apcStack_38) {
            section..text(arg2 + 0x17,apcStack_38,0x21);
        }
        if (arg3 == '\0') {
            *(arg2 + 0x15) = 1;
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.000188d4 @ 0x188d4 */

//WARNING: Removing unreachable block (ram,0x000188f1)

void fcn.000188d4(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint64_t auStackX_18 [2];
    
    uVar2 = arg2 & 7;
    if (arg2 != 0) {
        uVar1 = arg2 >> 3;
        if (uVar1 != 0) {
            uVar3 = uVar1;
            do {
                fcn.0003830c(auStackX_18);
                *arg1 = auStackX_18[0];
                arg1 = arg1 + 8;
                uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
        }
        if (uVar2 != '\0') {
            fcn.0003830c(auStackX_18);
            do {
                *arg1 = auStackX_18[0];
                arg1 = arg1 + 1;
                auStackX_18[0] = auStackX_18[0] >> 8;
                uVar1 = uVar2 - 1;
                uVar2 = uVar1;
            } while (uVar1 != 0);
        }
    }
    return;
}


/* fcn.000187b8 @ 0x187b8 */

uchar fcn.000187b8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    int64_t *piVar2;
    unkint7 extraout_RAX;
    unkint7 extraout_RAX_00;
    unkint7 extraout_RAX_01;
    unkint7 extraout_RAX_02;
    unkint7 Var3;
    uint64_t uVar4;
    uint8_t uVar5;
    bool bVar6;
    ushort auStackX_18 [4];
    uchar auStack_48 [48];
    
    uVar4 = 0;
    bVar6 = arg3 == '\0';
    piVar2 = fcn.0001848c(arg1 & 0xffffffff);
    if (piVar2 != NULL) {
        puVar1 = *piVar2;
        auStackX_18[0] = 0;
        (**puVar1)(puVar1,auStackX_18);
        if (-1 < extraout_RAX) {
            uVar5 = auStackX_18[0] >> 2;
            auStackX_18[0] = 0;
            (**puVar1)(puVar1,auStackX_18);
            if ((-1 < extraout_RAX_00) && ((uVar5 & 1) == 0)) {
                if (*arg2 == 0) {
                    (*puVar1[3])(puVar1,bVar6,*0x44c60 + 0x17 + (arg1 & 0xffffffffU) * 0x40);
                    Var3 = extraout_RAX_01;
                }
                else {
                    fcn.0003d4be(auStack_48,0x21,0);
                    do {
                        auStack_48[uVar4] = *(arg2 + uVar4 * 2);
                        if (*(arg2 + uVar4 * 2) == 0) break;
                        uVar4 = uVar4 + 1;
                    } while (uVar4 < 0x21);
                    (*puVar1[1])(puVar1,bVar6,auStack_48,0);
                    Var3 = extraout_RAX_02;
                }
                if (-1 < Var3) {
                    return 1;
                }
            }
        }
    }
    return 0;
}


/* fcn.00018638 @ 0x18638 */

void fcn.00018638(void)

{
    ushort uVar1;
    int64_t iVar2;
    uint8_t uVar3;
    uint64_t arg2;
    bool bVar4;
    
    arg2 = 0;
    if (*0x44c58 == NULL) {
        iVar2 = (**(*0x44e20 + 0x40))(4,0x356,0x44c58);
        if (iVar2 < 0) {
            return;
        }
        if (*0x44c58 == NULL) {
            return;
        }
    }
    uVar1 = fcn.0001839c();
    bVar4 = *0x44c78 != 0;
    **0x44c58 = uVar1;
    if (bVar4) {
        do {
            fcn.00018500(*0x44c58,arg2);
            uVar3 = arg2 + 1;
            arg2 = uVar3;
        } while (uVar3 < *0x44c78);
    }
    (**(*0x44e28 + 0x58))(0x40210,0x3e510,2,0x356,*0x44c58);
    fcn.00036ec0(0x356,*0x44c58,0x3e510,0x40210);
    return;
}


/* fcn.00018e58 @ 0x18e58 */

void fcn.00018e58(void)

{
    int64_t iVar1;
    uint64_t arg1;
    int16_t iVar2;
    bool bVar3;
    
    fcn.0001848c(0);
    arg1 = 0;
    if (*0x44c58 == NULL) {
        iVar1 = (**(*0x44e20 + 0x40))(4,0x356,0x44c58);
        if (iVar1 < 0) {
            return;
        }
        if (*0x44c58 == NULL) {
            return;
        }
    }
    iVar2 = *0x46fc0;
    bVar3 = *0x44c78 != 0;
    **0x44c58 = *0x46fc0;
    if (bVar3) {
        do {
            if (iVar2 == 0) break;
            iVar1 = fcn.0001848c(arg1);
            if (iVar1 != 0) {
                iVar1 = fcn.0001824c(*(iVar1 + 8),*(iVar1 + 0x12));
                fcn.000107d8(*0x44c70,*(arg1 * 2 + 0x40230),0x3f8d8,iVar1);
                iVar2 = iVar2 + -1;
            }
            arg1 = arg1 + 1;
        } while (arg1 < *0x44c78);
    }
    (**(*0x44e28 + 0x58))(0x40210,0x3e510,2,0x356,*0x44c58);
    if (*0x44c68 == 0) {
        (**(*0x44e20 + 0x170))(0x200,8,0x18244,0,0x3e500,0x44c68);
    }
    return;
}


/* fcn.0001824c @ 0x1824c */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.0001824c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uStackX_20;
    int64_t var_30h;
    int64_t var_38h;
    ulong uStack_28;
    ulong uStack_20;
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    uStackX_20 = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    if ((*0x44c80 == 0) && (iVar1 = (**(*0x44e20 + 0x140))(0x3da20,0), iVar1 < 0)) {
        return 0;
    }
    iVar1 = fcn.00036528(0x3f9f8,0x3e4f0,0,&uStack_20);
    if (-1 < iVar1) {
        iVar1 = (**(*0x44c80 + 8))(*0x44c80,0,arg1,arg2 & 0xffff,uStackX_20,&uStack_28,0);
        if ((iVar1 == -0x7ffffffffffffffb) && (iVar1 = (**(*0x44e20 + 0x40))(4,uStack_28,&uStackX_20), -1 < iVar1)) {
            iVar1 = (**(*0x44c80 + 8))(*0x44c80,0,arg1,arg2 & 0xffff,uStackX_20,&uStack_28,0);
        }
        (**(*0x44e20 + 0x48))(0);
    }
    if (iVar1 < 0) {
        uStackX_20 = 0;
    }
    return uStackX_20;
}


/* fcn.00018f9c @ 0x18f9c */

void fcn.00018f9c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
    
    fcn.00010340(&uStack_48,0x38);
    fcn.00010340(&uStack_78,0x2c);
    fcn.00010340(auStack_88,0x10);
    uStack_70 = arg2;
    uStack_78 = uStack_78 & 0xffffff06 | 6;
    puStack_20 = &uStack_78;
    uStack_38 = 0x1000;
    puStack_18 = auStack_88;
    uStack_48 = 5000000;
    uStack_24 = 0;
    uStack_64 = arg3;
    uStack_74 = 4;
    iStack_40 = arg4;
    (**(arg1 + 8))(arg1,arg2 & 0xffffffff,&uStack_48,0);
    return;
}


/* fcn.00037738 @ 0x37738 */

void fcn.00037738(int64_t noname_0,ulong noname_1,int64_t arg1,int64_t arg2)

{
    int64_t iStackX_20;
    
    iStackX_20 = arg2;
    fcn.00037304(noname_0,noname_1,arg1,&iStackX_20);
    return;
}


/* fcn.00037304 @ 0x37304 */

int64_t fcn.00037304(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int16_t iVar2;
    uint32_t uVar3;
    int16_t *piVar4;
    int64_t iVar5;
    char *pcVar6;
    uint64_t uVar7;
    uint in_register_00000014;
    int16_t iVar8;
    uint32_t arg3_00;
    uint8_t *puVar9;
    int64_t noname_1;
    int16_t *noname_0;
    uint32_t *puStackX_18;
    int64_t var_c0h;
    int64_t var_210h;
    uint8_t *puStack_288;
    int16_t *piStack_280;
    int16_t aiStack_278 [32];
    char acStack_238 [256];
    char acStack_138 [176];
    int64_t var_80h;
    int64_t var_40h;
    
    noname_1 = CONCAT44(in_register_00000014,arg2);
    if ((arg1 == 0) || (arg3 == 0)) {
        arg1 = -1;
    }
    else {
        noname_0 = arg1;
        if (noname_1 != 1) {
            puStackX_18 = arg4 + -8;
            while( true ) {
                uVar7 = 0;
                iVar8 = *arg3;
                if (iVar8 == 0) break;
                puVar9 = arg3 + 2;
                if (iVar8 == 0x25) {
                    if (*puVar9 == 0x25) {
                        puVar9 = arg3 + 4;
                        *noname_0 = 0x25;
                        goto code_r0x00037383;
                    }
                    iVar8 = 0x20;
                    if (*puVar9 == 0x30) {
                        puVar9 = arg3 + 4;
                        iVar8 = 0x30;
                    }
                    if (*puVar9 == 0x2a) {
                        puStackX_18 = puStackX_18 + 2;
                        uVar3 = *puStackX_18;
                        puVar9 = puVar9 + 2;
                    }
                    else {
                        uVar3 = fcn.00037134(puVar9,&puStack_288);
                        puVar9 = puStack_288;
                    }
                    if (*puVar9 == 0x73) {
                        for (piVar4 = *(puStackX_18 + 2); *piVar4 != 0; piVar4 = piVar4 + 1) {
                            noname_1 = noname_1 + -1;
                            if (noname_1 == 0) goto code_r0x000376f3;
                            *noname_0 = *piVar4;
                            noname_0 = noname_0 + 1;
                        }
code_r0x000376dd:
                        puStackX_18 = puStackX_18 + 2;
                        puVar9 = puVar9 + 2;
                    }
                    else {
                        if ((*puVar9 == 0x53) || (*puVar9 == 0x61)) {
                            for (pcVar6 = *(puStackX_18 + 2); *pcVar6 != '\0'; pcVar6 = pcVar6 + 1) {
                                noname_1 = noname_1 + -1;
                                if (noname_1 == 0) goto code_r0x000376f3;
                                *noname_0 = *pcVar6;
                                noname_0 = noname_0 + 1;
                            }
                            goto code_r0x000376dd;
                        }
                        if (*puVar9 == 99) {
                            *noname_0 = puStackX_18[2];
                            noname_0 = noname_0 + 1;
                            goto code_r0x000376dd;
                        }
                        if ((*puVar9 & 0xdf) != 0x47) {
                            if (*puVar9 == 0x72) {
                                iVar5 = fcn.0003723c(*(puStackX_18 + 2));
                                if (iVar5 == 0) {
                                    iVar5 = fcn.00037738(noname_0,noname_1,0x44178,0x3eed0);
                                }
                                else {
                                    iVar5 = fcn.00037738(noname_0,noname_1,0x40400,iVar5);
                                }
                                noname_0 = noname_0 + iVar5;
                                noname_1 = noname_1 - iVar5;
                            }
                            else {
                                iVar1 = *puVar9;
                                if (iVar1 == 0x6c) {
                                    puVar9 = puVar9 + 2;
                                }
                                iVar2 = *puVar9;
                                if ((iVar2 == 100) || (iVar2 == 0x69)) {
                                    arg3_00 = 10;
                                }
                                else {
                                    if ((iVar2 & 0xdf) != 0x58) goto code_r0x000376e1;
                                    arg3_00 = 0x10;
                                }
                                piVar4 = aiStack_278;
                                if (iVar2 != 0x70 && iVar1 != 0x6c) {
                                    for (pcVar6 = fcn.000370c0(puStackX_18[2],acStack_138,arg3_00,0);
                                        acStack_138 <= pcVar6; pcVar6 = pcVar6 + -1) {
                                        *piVar4 = *pcVar6;
                                        piVar4 = piVar4 + 1;
                                    }
                                }
                                else {
                                    for (pcVar6 = fcn.000370c0(*(puStackX_18 + 2),acStack_238,arg3_00,1);
                                        acStack_238 <= pcVar6; pcVar6 = pcVar6 + -1) {
                                        *piVar4 = *pcVar6;
                                        piVar4 = piVar4 + 1;
                                    }
                                }
                                iVar1 = *puVar9;
                                *piVar4 = 0;
                                if ((iVar1 == 0x58) || (*puVar9 == 0x70)) {
                                    fcn.0003720c(aiStack_278);
                                }
                                piVar4 = aiStack_278;
                                iVar1 = aiStack_278[0];
                                while (iVar1 != 0) {
                                    piVar4 = piVar4 + 1;
                                    uVar7 = uVar7 + 1;
                                    iVar1 = *piVar4;
                                }
                                while (uVar7 < uVar3) {
                                    uVar7 = uVar7 + 1;
                                    noname_1 = noname_1 + -1;
                                    if (noname_1 == 0) goto code_r0x000376f3;
                                    *noname_0 = iVar8;
                                    noname_0 = noname_0 + 1;
                                }
                                piVar4 = aiStack_278;
                                iVar8 = aiStack_278[0];
                                while (iVar8 != 0) {
                                    noname_1 = noname_1 + -1;
                                    if (noname_1 == 0) goto code_r0x000376f3;
                                    iVar8 = *piVar4;
                                    piVar4 = piVar4 + 1;
                                    *noname_0 = iVar8;
                                    noname_0 = noname_0 + 1;
                                    iVar8 = *piVar4;
                                }
                            }
                            goto code_r0x000376dd;
                        }
                        puStackX_18 = puStackX_18 + 2;
                        piStack_280 = noname_0;
                        iVar5 = fcn.00037738(noname_0,noname_1,0x44110,**puStackX_18);
                        noname_0 = noname_0 + iVar5;
                        if (*puVar9 == 0x47) {
                            fcn.0003720c(piStack_280);
                        }
                        noname_1 = noname_1 - iVar5;
                        puVar9 = puVar9 + 2;
                    }
                }
                else {
                    *noname_0 = iVar8;
code_r0x00037383:
                    noname_0 = noname_0 + 1;
                    noname_1 = noname_1 + -1;
                }
code_r0x000376e1:
                if (noname_1 == 1) break;
                arg3 = puVar9;
            }
        }
        *noname_0 = 0;
        arg1 = noname_0 - arg1;
code_r0x000376fe:
        arg1 = arg1 >> 1;
    }
    return arg1;
code_r0x000376f3:
    *noname_0 = 0;
    arg1 = noname_0 - arg1;
    goto code_r0x000376fe;
}


/* fcn.00019468 @ 0x19468 */

uint64_t fcn.00019468(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    char *pcVar3;
    char *pcVar4;
    uint64_t uStackX_8;
    ulong auStackX_18 [2];
    
    uVar1 = *0x45cb8;
    auStackX_18[0] = 0;
    uStackX_8 = arg1 & 0xffffffffffff0000;
    if ((*0x44cc8 != NULL) || (iVar2 = (**(*0x44e20 + 0x140))(0x3da20,0,0x44cc8), -1 < iVar2)) {
        pcVar4 = *0x44ca8;
        pcVar3 = *0x44ca8;
        if (*0x44ca8 == NULL) {
            iVar2 = (*(*0x44cc8)[3])(*0x44cc8,uVar1,0,auStackX_18);
            if (iVar2 == -0x7ffffffffffffffb) {
                iVar2 = (**(*0x44e20 + 0x40))(4,auStackX_18[0],0x44ca8);
                if (iVar2 < 0) {
                    return 0;
                }
                iVar2 = (*(*0x44cc8)[3])(*0x44cc8,uVar1,*0x44ca8,auStackX_18);
            }
            if (iVar2 < 0) {
                return 0;
            }
            pcVar4 = *0x44ca8;
            pcVar3 = *0x44ca8;
            if (*0x44ca8 == NULL) {
                return 0;
            }
        }
        do {
            for (; *pcVar4 != ';'; pcVar4 = pcVar4 + 1) {
                if (*pcVar4 == '\0') {
code_r0x000195bc:
                    if (uStackX_8 == 0) {
                        iVar2 = (***0x44cc8)(*0x44cc8,uVar1,&uStackX_8,pcVar3,0,arg2,0);
                    }
                    else {
                        iVar2 = (*(*0x44cc8)[2])(*0x44cc8,uVar1,uStackX_8 & 0xffff,pcVar3,arg2,0);
                    }
                    if (-1 < iVar2) {
                        return uStackX_8 & 0xffff;
                    }
                    return 0;
                }
            }
            if (*pcVar4 == '\0') goto code_r0x000195bc;
            *pcVar4 = '\0';
            if (uStackX_8 == 0) {
                iVar2 = (***0x44cc8)(*0x44cc8,uVar1,&uStackX_8,pcVar3,0,arg2,0);
            }
            else {
                iVar2 = (*(*0x44cc8)[2])(*0x44cc8,uVar1,uStackX_8 & 0xffff,pcVar3,arg2,0);
            }
            *pcVar4 = ';';
            pcVar4 = pcVar4 + 1;
            pcVar3 = pcVar4;
        } while (-1 < iVar2);
    }
    return 0;
}


/* fcn.000193a0 @ 0x193a0 */

void fcn.000193a0(uint32_t arg1,int64_t arg2)

{
    int16_t *piVar1;
    int16_t *piVar2;
    int16_t iVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    iVar4 = 0;
    iVar3 = *piVar2;
    piVar1 = piVar2;
    while (iVar3 != 0) {
        piVar1 = piVar1 + 1;
        iVar4 = iVar4 + 1;
        iVar3 = *piVar1;
    }
    piVar2 = piVar2 + iVar4;
    iVar3 = *arg2;
    if (iVar3 != 0) {
        arg2 = arg2 - piVar2;
        do {
            *piVar2 = iVar3;
            piVar2 = piVar2 + 1;
            iVar3 = *(arg2 + piVar2);
        } while (iVar3 != 0);
    }
    *piVar2 = 0;
    return;
}


/* fcn.00019610 @ 0x19610 */

void fcn.00019610(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t *arg2_00;
    uint64_t uVar1;
    int16_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int16_t *piVar5;
    ushort uVar6;
    int64_t arg1_00;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t arg1_01;
    
    arg2_00 = arg3 + 0x50;
    uVar9 = 0;
    iVar8 = 0;
    iVar2 = *arg2_00;
    piVar5 = arg2_00;
    while (iVar2 != 0) {
        piVar5 = piVar5 + 1;
        iVar8 = iVar8 + 1;
        iVar2 = *piVar5;
    }
    *arg2 = *arg2 + 1;
    iVar8 = iVar8 * 2 + 6;
    arg1_00 = fcn.00017820(*arg2 << 5,0);
    if (arg1_00 != 0) {
        fcn.0003d4be(arg1_00,*arg2 << 5,0);
        piVar3 = *arg1;
        if (piVar3 != NULL) {
            if (1 < *arg2) {
                uVar9 = 1;
                uVar1 = *arg2 - 1;
                piVar4 = piVar3;
                if (1 < uVar1) {
                    do {
                        if (*piVar4 != piVar4[4]) break;
                        uVar9 = uVar9 + 1;
                        piVar4 = piVar4 + 4;
                    } while (uVar9 < uVar1);
                }
            }
            iVar7 = uVar9 * 0x20;
            (**(*0x44e20 + 0x160))(arg1_00,piVar3,iVar7);
            (**(*0x44e20 + 0x160))(arg1_00 + 0x20 + iVar7,*arg1 + iVar7);
            (**(*0x44e20 + 0x48))(*arg1);
        }
        iVar10 = uVar9 * 0x20;
        *(iVar10 + arg1_00) = *(arg3 + 0x48) & 0x10;
        *(iVar10 + 8 + arg1_00) = *(arg3 + 8);
        iVar7 = fcn.00017820(iVar8,*(iVar10 + 0x10 + arg1_00));
        *(iVar10 + 0x10 + arg1_00) = iVar7;
        if (iVar7 != 0) {
            fcn.0003d4be(iVar7,iVar8,0);
            arg1_01 = 0x3fef8;
            iVar7 = *(iVar10 + 0x10 + arg1_00);
            if (*(iVar10 + arg1_00) != 0x10) {
                arg1_01 = 0x3f8d8;
            }
            fcn.00037738(iVar7,iVar8,arg1_01,arg2_00);
            uVar6 = fcn.00019468(iVar7,*(iVar10 + 0x10 + arg1_00));
            *(iVar10 + 0x18 + arg1_00) = uVar6;
            fcn.0003d4be(*(iVar10 + 0x10 + arg1_00),iVar8,0);
            fcn.00037738(*(iVar10 + 0x10 + arg1_00),iVar8,0x3f8d8,arg2_00);
        }
        *arg1 = arg1_00;
    }
    return;
}


/* fcn.000197d4 @ 0x197d4 */

void fcn.000197d4(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    int16_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    int16_t iVar4;
    uint in_register_0000000c;
    int16_t *piVar5;
    int16_t *piVar6;
    uint in_register_00000014;
    int16_t *piVar7;
    
    piVar7 = CONCAT44(in_register_00000014,arg2);
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = 0;
    piVar6 = piVar1;
    if (*piVar1 != 0) {
        do {
            piVar6 = piVar6 + 1;
            iVar2 = iVar2 + 1;
        } while (*piVar6 != 0);
        if (iVar2 != 0) {
            if (arg3 == 0) {
                piVar5 = 0x3feec;
                for (piVar6 = piVar7; (*piVar6 != 0 && (*piVar6 == *piVar5)); piVar6 = piVar6 + 1) {
                    piVar5 = piVar5 + 1;
                }
                if (*piVar6 == *piVar5) {
                    iVar2 = 0;
                    piVar6 = piVar1;
                    do {
                        iVar3 = iVar2;
                        piVar6 = piVar6 + 1;
                        iVar2 = iVar3 + 1;
                    } while (*piVar6 != 0);
                    if (iVar2 != 0) {
                        piVar6 = piVar1 + iVar3;
                        do {
                            if (*piVar6 == 0x5c) break;
                            piVar6 = piVar6 + -1;
                            iVar2 = iVar2 + -1;
                        } while (iVar2 != 0);
                        if (iVar2 != 0) {
                            piVar1[iVar2 + -1] = 0;
                            return;
                        }
                    }
                    *piVar1 = 0;
                    return;
                }
            }
            fcn.000193a0(arg1,0x3fef4);
            iVar2 = 0;
            iVar4 = *piVar1;
            piVar6 = piVar1;
            while (iVar4 != 0) {
                piVar6 = piVar6 + 1;
                iVar2 = iVar2 + 1;
                iVar4 = *piVar6;
            }
            piVar1 = piVar1 + iVar2;
            iVar4 = *piVar7;
            if (iVar4 != 0) {
                iVar2 = piVar7 - piVar1;
                do {
                    *piVar1 = iVar4;
                    piVar1 = piVar1 + 1;
                    iVar4 = *(iVar2 + piVar1);
                } while (iVar4 != 0);
            }
            *piVar1 = 0;
            return;
        }
    }
    iVar4 = *piVar7;
    if (iVar4 != 0) {
        iVar2 = piVar7 - piVar1;
        do {
            *piVar1 = iVar4;
            piVar1 = piVar1 + 1;
            iVar4 = *(iVar2 + piVar1);
        } while (iVar4 != 0);
    }
    *piVar1 = 0;
    return;
}


/* fcn.00037758 @ 0x37758 */

ulong fcn.00037758(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uchar *arg1_00;
    char *pcVar4;
    uint64_t uVar5;
    uint8_t *arg4;
    ulong uStack_218;
    ulong uStack_210;
    uchar auStack_208 [512];
    
    arg1_00 = auStack_208;
    iVar3 = 0x200;
    do {
        uVar1 = *arg1;
        uVar5 = uVar1;
        if (uVar1 == 1) {
            uVar1 = *(arg1 + 1);
            if (uVar1 == 1) {
                uVar5 = *(arg1 + 5);
                pcVar4 = *0x44258;
                goto code_r0x0003797b;
            }
            if (uVar1 == 2) {
                uVar5 = *(arg1 + 4);
                iVar2 = *0x44260;
code_r0x00037957:
                iVar2 = fcn.00032d6c(arg1_00,iVar3,iVar2,uVar5);
            }
            else {
                if (uVar1 != 4) {
                    uVar5 = 1;
                    goto code_r0x000377ed;
                }
                iVar2 = *0x44268;
code_r0x0003793d:
                arg4 = arg1 + 4;
code_r0x00037941:
                iVar2 = fcn.00032d6c(arg1_00,iVar3,iVar2,arg4);
            }
        }
        else {
            if (uVar1 == 2) {
                if (*(arg1 + 1) == 1) {
                    uVar5 = *(arg1 + 4);
                    pcVar4 = *0x44270;
                }
                else {
                    uVar5 = 2;
code_r0x000377ed:
                    pcVar4 = "DevicePath(Type %i, SubType %i)";
                }
            }
            else if (uVar1 == 3) {
                uVar1 = *(arg1 + 1);
                if (uVar1 == 1) {
                    if (*(arg1 + 4) == 0) {
                        pcVar4 = "Master";
                    }
                    else {
                        if (*(arg1 + 4) != 1) goto code_r0x000378d6;
                        pcVar4 = L"Slave";
                    }
                    iVar2 = fcn.00032d6c(arg1_00,iVar3,*0x44298,pcVar4);
                    goto code_r0x00037983;
                }
                if (uVar1 == 2) {
                    uVar5 = *(arg1 + 4);
                    pcVar4 = *0x442a0;
                }
                else if (uVar1 == 5) {
                    pcVar4 = "USB(%x,%x)\\";
                    uVar5 = *(arg1 + 4);
                }
                else {
                    if (uVar1 == 10) {
                        iVar2 = *0x442a8;
                        goto code_r0x0003780c;
                    }
code_r0x000378d6:
                    uVar5 = 3;
                    pcVar4 = "DevicePath(Type %i, SubType %i)";
                }
            }
            else if (uVar1 == 4) {
                uVar1 = *(arg1 + 1);
                if (uVar1 != 1) {
                    if (uVar1 == 2) {
                        uVar5 = *(arg1 + 4);
                        iVar2 = *0x44280;
                        goto code_r0x00037957;
                    }
                    if (uVar1 == 3) {
                        iVar2 = *0x44288;
code_r0x0003780c:
                        uStack_218 = *(arg1 + 4);
                        uStack_210 = *(arg1 + 0xc);
                        arg4 = &uStack_218;
                        goto code_r0x00037941;
                    }
                    if (uVar1 == 4) {
                        iVar2 = *0x44290;
                        goto code_r0x0003793d;
                    }
                    uVar5 = 4;
                    goto code_r0x000377ed;
                }
                uVar5 = *(arg1 + 4);
                pcVar4 = *0x44278;
            }
            else {
                if (uVar1 == 0x7f) {
                    iVar2 = 0;
                    goto code_r0x00037983;
                }
                pcVar4 = "DevicePath(Type %i, SubType %i)";
            }
code_r0x0003797b:
            iVar2 = fcn.00032d6c(arg1_00,iVar3,pcVar4,uVar5);
        }
code_r0x00037983:
        arg1_00 = arg1_00 + iVar2;
        iVar3 = iVar3 - iVar2;
        if (iVar2 == -1) {
            return 0x8000000000000003;
        }
        if ((*arg1 == 0x7f) && (*(arg1 + 1) == 0xff)) {
            iVar3 = fcn.00036494((arg1_00 - auStack_208) + 1);
            *arg2 = iVar3;
            fcn.0003d510(iVar3,auStack_208,arg1_00 - auStack_208);
            return 0;
        }
        arg1 = arg1 + *(arg1 + 3) * 0x100 + *(arg1 + 2);
    } while( true );
}


/* fcn.000193e0 @ 0x193e0 */

int16_t * fcn.000193e0(uint32_t arg1)

{
    char cVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    int64_t iVar3;
    char *pcVar4;
    int16_t *piStackX_8;
    
    pcVar4 = CONCAT44(in_register_0000000c,arg1);
    iVar3 = 0;
    if (pcVar4 == NULL) {
        piStackX_8 = NULL;
    }
    else {
        cVar1 = *pcVar4;
        iVar2 = iVar3;
        while (cVar1 != '\0') {
            iVar2 = iVar2 + 1;
            cVar1 = pcVar4[iVar2];
        }
        (**(*0x44e20 + 0x40))(4,iVar2 * 2 + 2,&piStackX_8);
        if ((piStackX_8 != NULL) && (cVar1 = *pcVar4, *piStackX_8 = cVar1, cVar1 != 0)) {
            do {
                iVar3 = iVar3 + 2;
                pcVar4 = pcVar4 + 1;
                cVar1 = *pcVar4;
                *(iVar3 + piStackX_8) = cVar1;
            } while (cVar1 != 0);
        }
    }
    return piStackX_8;
}


/* fcn.000198bc @ 0x198bc */

ulong fcn.000198bc(ulong noname_0,uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg_b0h)

{
    int16_t iVar1;
    ulong *puVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t arg1_00;
    int16_t *piVar6;
    uint16_t uVar7;
    int64_t iVar8;
    int64_t arg1_01;
    uint64_t arg3_00;
    int16_t *piVar9;
    ulong *in_stack_00000028;
    int64_t var_a8h;
    uint16_t auStack_158 [4];
    int64_t iStack_150;
    int64_t iStack_148;
    int64_t iStack_140;
    uint64_t uStack_138;
    int64_t iStack_130;
    int64_t iStack_128;
    int16_t iStack_118;
    int16_t aiStack_116 [119];
    
    iStack_128 = 0;
    iStack_140 = 0;
    iStack_130 = 0;
    uStack_138 = 0;
    auStack_158[0] = 0;
    iStack_148 = 0;
    if (*0x44cb0 == 0) {
        uVar3 = 0x8000000000000003;
    }
    else if (arg1 == '\x01') {
        uVar4 = (**(*0x44e20 + 0x98))(noname_0,0x3da10);
        if (-1 < uVar4) {
            uVar4 = (**(iStack_128 + 8))(iStack_128,&iStack_148);
        }
        fcn.00017884(&iStack_130,&uStack_138);
        do {
            if ((uVar4 < 0) || (iStack_148 == 0)) {
                iVar8 = 0;
                piVar9 = &iStack_118;
                iVar1 = iStack_118;
                while (iVar1 != 0) {
                    piVar9 = piVar9 + 1;
                    iVar8 = iVar8 + 1;
                    iVar1 = *piVar9;
                }
                uVar3 = (**(*0x44e20 + 0x40))(4,iVar8 * 2 + 2,arg2);
                piVar6 = *arg2;
                piVar9 = &iStack_118;
                while (iStack_118 != 0) {
                    *piVar6 = iStack_118;
                    piVar9 = piVar9 + 1;
                    piVar6 = piVar6 + 1;
                    iStack_118 = *piVar9;
                }
                *piVar6 = 0;
                return uVar3;
            }
            arg3_00 = 0;
            auStack_158[0] = 0;
            fcn.0003d4be(&iStack_118,0xf0,0);
            iVar8 = iStack_148;
            iStack_150 = 1;
            uVar4 = 0;
            do {
                if (uVar4 < 0) break;
                arg3_00 = 0;
                iStack_150 = 0;
                uVar4 = (**(iVar8 + 0x20))(iVar8);
                if (-1 < uVar4) break;
                uVar5 = 0;
                if ((uVar4 == 0x8000000000000005) && (uVar5 = fcn.00017820(iStack_150,0), uVar5 != 0)) {
                    fcn.0003d4be(uVar5,iStack_150,0);
                }
                arg3_00 = uVar5;
                uVar4 = (**(iVar8 + 0x20))(iVar8);
                if ((-1 < uVar4) && (iStack_150 != 0)) {
                    arg3_00 = uVar5;
                    fcn.00019610(&iStack_130,&uStack_138,uVar5);
                }
                (**(*0x44e20 + 0x48))(uVar5);
            } while (iStack_150 != 0);
            iVar8 = iStack_130;
            uVar5 = uStack_138;
            puVar2 = in_stack_00000028;
            if (uStack_138 == 0) {
                uVar4 = 0x800000000000000e;
            }
            if (-1 < uVar4) {
                uVar4 = 0;
                if ((uStack_138 != 0) && (uVar4 = 0, iStack_130 != 0)) {
                    arg1_01 = uStack_138 * 0x28;
                    arg1_00 = fcn.00017820(arg1_01,0);
                    if (arg1_00 != 0) {
                        fcn.0003d4be(arg1_00,arg1_01,0);
                        uVar4 = 0;
                        uVar7 = 0;
                        if (uVar5 != 0) {
                            do {
                                uVar7 = uVar7 + 1;
                                *(arg1_00 + uVar4 * 0x28) = *(uVar4 * 0x20 + 0x18 + iVar8);
                                uVar4 = uVar7;
                            } while (uVar4 < uVar5);
                        }
                    }
                    arg3_00 = 0;
                    uVar4 = (**(*0x44cb0 + 0x68))(*0x45cb8,0x2012,0,arg1_00,uVar5 & 0xffff,auStack_158);
                }
                if (-1 < uVar4) {
                    uVar4 = (**(iStack_148 + 8))(iStack_148,&iStack_140,*(auStack_158[0] * 0x20 + 0x10 + iVar8),1,0)
                    ;
                    (**(iStack_148 + 0x10))();
                    arg3_00 = auStack_158[0];
                    iStack_148 = 0;
                    fcn.000197d4(&iStack_118,*(arg3_00 * 0x20 + 0x10 + iVar8),arg3_00);
                    if (-1 < uVar4) {
                        if (*(auStack_158[0] * 0x20 + iVar8) != 0x10) {
                            arg3_00 = arg3;
                            uVar4 = (**(*0x44e20 + 0x40))(4,*(auStack_158[0] * 0x20 + 8 + iVar8));
                            if (-1 < uVar4) {
                                *puVar2 = *(auStack_158[0] * 0x20 + 8 + iVar8);
                                arg3_00 = *arg3;
                                uVar4 = (**(iStack_140 + 0x20))(iStack_140,puVar2);
                            }
                            (**(iStack_140 + 0x10))();
                            iStack_140 = 0;
                        }
                        iStack_148 = iStack_140;
                    }
                }
            }
            if (uVar5 == 0) {
                fcn.0001761c(*0x45cb8,0x200f,arg3_00,0x45cc0);
                fcn.0001761c(*0x45cb8,0x2010,arg3_00,0x45e50);
                (**(*0x44cb0 + 0x20))(0x45cc0,0x45e50,1,0);
            }
            fcn.00017884(&iStack_130,&uStack_138);
        } while (uVar4 != 0x8000000000000015);
        uVar3 = 0x8000000000000015;
    }
    else {
        uVar3 = 0x8000000000000015;
    }
    return uVar3;
}


/* fcn.0001ad2c @ 0x1ad2c */

int64_t fcn.0001ad2c(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint8_t uVar2;
    ulong uVar3;
    
    uVar2 = arg1;
    if (uVar2 < 6) {
        *arg4 = 0;
        uVar3 = 0x3d6f0;
        if (3 < uVar2) {
            uVar3 = 0x3d600;
        }
        iVar1 = (**(*0x44e28 + 0x48))(*(uVar2 * 8 + 0x44990),uVar3,0,arg4,0);
        if (iVar1 == -0x7ffffffffffffffb) {
            (**(*0x44e20 + 0x40))(4,*arg4,arg3);
            iVar1 = (**(*0x44e28 + 0x48))(*(uVar2 * 8 + 0x44990),uVar3,0,arg4,*arg3);
            if (iVar1 < 0) {
                return iVar1;
            }
            iVar1 = fcn.0001b83c(arg2 & 0xffff,*arg3,arg4);
            return iVar1;
        }
    }
    return -0x7ffffffffffffff1;
}


/* fcn.0001ae10 @ 0x1ae10 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h

void fcn.0001ae10(void)

{
    ulong *puVar1;
    char cVar2;
    uint32_t uVar3;
    uchar uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong uVar8;
    int64_t *piVar9;
    ulong *puVar10;
    ulong *arg3;
    uint8_t uVar11;
    ulong *puVar12;
    uint64_t uVar13;
    ulong *puStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    ulong *puStackX_20;
    int64_t var_40h;
    int64_t var_48h;
    uint32_t var_50h;
    int64_t var_58h;
    ulong uStack_58;
    int64_t iStack_50;
    int64_t aiStack_48 [2];
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    uVar11 = 0;
    if (*0x44990 != 0) {
        iVar6 = 0;
        piVar9 = 0x44990;
        uVar13 = 0;
        do {
            iVar5 = *piVar9;
            uVar8 = 0x3d6f0;
            if (3 < uVar11) {
                uVar8 = 0x3d600;
            }
            puStackX_8 = NULL;
            puStackX_20 = NULL;
            arg3 = NULL;
            *(uVar13 + 0x44cb8) = 0;
            uStack_58 = 0;
            iVar5 = (**(*0x44e28 + 0x48))(iVar5,uVar8,0,&puStackX_8,0);
            if (iVar5 == -0x7ffffffffffffffb) {
                iStackX_10 = 0;
                *(uVar13 + 0x44cb8) = 1;
                (**(*0x44e20 + 0x40))(4,puStackX_8);
                arg3 = NULL;
                iVar5 = (**(*0x44e28 + 0x48))(*piVar9,uVar8,0,&puStackX_8,iStackX_10);
                if (-1 < iVar5) {
                    if (puStackX_8 == NULL) {
                        iVar5 = -0x7fffffffffffffe6;
                    }
                    else {
                        arg3 = &uStack_58;
                        iVar5 = fcn.0003badc(iStackX_10,puStackX_8,arg3,0);
                    }
                    if (-1 < iVar5) {
                        iStackX_18 = 0;
                        (**(*0x44e20 + 0x40))(4,puStackX_8);
                        puStackX_20 = puStackX_8;
                        arg3 = NULL;
                        iVar6 = (**(*0x44e28 + 0x48))(*(iVar6 + 0x44950),0x3d600,0,&puStackX_20,iStackX_18);
                        puVar12 = puStackX_20;
                        puVar10 = puStackX_8;
                        if (-1 < iVar6) {
                            iVar6 = 0;
                            iVar5 = iStackX_10;
                            puVar1 = puStackX_20;
                            while (puVar1 <= puVar10) {
                                arg3 = puVar12;
                                iVar7 = fcn.00036640(iVar5,iStackX_18,puVar12);
                                if (iVar7 == 0) {
                                    *(uVar13 + 0x44cb8) = 2;
                                    uVar4 = *(uVar13 + 0x44cb8);
                                    if (puVar12 < puVar10) {
                                        uVar4 = 3;
                                    }
                                    *(uVar13 + 0x44cb8) = uVar4;
                                    break;
                                }
                                uVar3 = *(iVar5 + 0x10);
                                if (0x2ffd3 < uVar3 - 0x2d) break;
                                iVar6 = iVar6 + uVar3;
                                iVar5 = iVar5 + uVar3;
                                puVar1 = iVar6 + puVar12;
                            }
                        }
                        if (iStackX_18 != 0) {
                            (**(*0x44e20 + 0x48))(iStackX_18);
                            puVar10 = puStackX_8;
                        }
                        puVar12 = NULL;
                        if (puVar10 != NULL) {
                            iVar6 = iStackX_10;
                            iVar5 = *0x44cc0;
                            do {
                                iVar7 = fcn.00036640(iVar6,0x3dc10,0x10);
                                if (iVar7 == 0) {
code_r0x0001b047:
                                    aiStack_48[0] = *(iVar6 + 0x14) + 0x2c + iVar6;
                                    iStack_50 = *(iVar6 + 0x18) - 0x10;
                                    if (iVar5 != 0) {
code_r0x0001b08e:
                                        (**(iVar5 + 0x10))(iVar5,0x3d670,1,aiStack_48,&iStack_50,0x44c88);
                                        arg3 = 0x20;
                                        iVar5 = fcn.00036640(0x3e558,0x44c88,0x20);
                                        if (iVar5 != 0) {
                                            arg3 = 0x20;
                                            iVar5 = fcn.00036640(0x3e528,0x44c88,0x20);
                                            if (iVar5 != 0) goto code_r0x0001b0f4;
                                        }
                                        *(uVar13 + 0x44cb8) = 4;
                                        break;
                                    }
                                    arg3 = 0x44cc0;
                                    (**(*0x44e20 + 0x140))(0x3d800,0);
                                    iVar5 = *0x44cc0;
                                    if (*0x44cc0 != 0) goto code_r0x0001b08e;
code_r0x0001b0f4:
                                    iVar5 = *0x44cc0;
                                    puVar10 = puStackX_8;
                                }
                                else {
                                    arg3 = 0x10;
                                    iVar7 = fcn.00036640(iVar6,0x3d9a0,0x10);
                                    if (iVar7 == 0) goto code_r0x0001b047;
                                }
                                uVar3 = *(iVar6 + 0x10);
                                if (0x2ffb4 < uVar3 - 0x4c) break;
                                puVar12 = puVar12 + uVar3;
                                iVar6 = iVar6 + uVar3;
                            } while (puVar12 < puVar10);
                        }
                    }
                }
                if (iStackX_10 != 0) {
                    (**(*0x44e20 + 0x48))();
                }
            }
            cVar2 = *(uVar13 + 0x44cb8);
            if (cVar2 == '\x01') {
                iVar6 = 0x2167;
            }
            else if (cVar2 == '\x02') {
                iVar6 = 0x2168;
            }
            else if (cVar2 == '\x03') {
                iVar6 = 0x2169;
            }
            else if (cVar2 == '\x04') {
                iVar6 = 0x216a;
            }
            else {
                iVar6 = 0x2166;
            }
            fcn.0001761c(*0x45cb8,iVar6,arg3,0x45e50);
            uVar8 = 0;
            fcn.0003d4be(0x45fe0,400,0);
            fcn.0001761c(*0x45cb8,*(uVar13 * 2 + 0x40200),uVar8,0x45fe0);
            fcn.00037738(0x45cc0,400,0x40158,0x45fe0);
            fcn.00036bf4(*0x45cb8,*(uVar13 * 2 + 0x40280),0x45cc0);
            uVar11 = uVar11 + 1;
            uVar13 = uVar11;
            iVar6 = uVar13 * 8;
            piVar9 = iVar6 + 0x44990;
        } while (*piVar9 != 0);
    }
    (**(*0x44e28 + 0x58))(0x40068,0x3e548,2,6,0x44cb8);
    fcn.00014d94();
    return;
}


/* fcn.0001a07c @ 0x1a07c */

//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Variable defined which should be unmapped: var_38h

int64_t fcn.0001a07c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_68h)

{
    ulong noname_0;
    ushort uVar1;
    int64_t iVar2;
    int64_t arg1_00;
    int64_t arg2_00;
    ulong uVar3;
    uint64_t uVar4;
    int64_t unaff_RBP;
    ulong *puVar5;
    uint16_t uVar6;
    bool bVar7;
    ulong *in_stack_00000028;
    uint32_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    uint16_t auStack_78 [4];
    uint64_t uStack_70;
    int64_t iStack_68;
    int64_t iStack_60;
    int64_t aiStack_58 [3];
    int16_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_18h;
    
    puVar5 = in_stack_00000028;
    uStack_70 = 0;
    iStack_68 = 0;
    auStack_78[0] = 0;
    aiStack_58[0] = 0;
    bVar7 = false;
    if (in_stack_00000028 == NULL) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        uVar3 = 0;
        iVar2 = (**(*0x44e20 + 0x138))(2,0x3da10,0,&uStack_70,&iStack_68);
        if (iVar2 < 0) {
            fcn.0001761c(*0x45cb8,0x200d,uVar3,0x45cc0);
            fcn.0001761c(*0x45cb8,0x200e,uVar3,0x45e50);
            (**(*0x44cb0 + 0x20))(0x45cc0,0x45e50,1);
        }
        else {
            uVar3 = 0;
            arg1_00 = fcn.00017820(uStack_70 * 0x28,0);
            if (arg1_00 != 0) {
                fcn.0003d4be(arg1_00,uStack_70 * 0x28,0);
                uVar6 = 0;
                if (uStack_70 != 0) {
                    uVar4 = 0;
                    do {
                        iVar2 = (**(*0x44e20 + 0x98))(*(iStack_68 + uVar4 * 8),0x3d860,aiStack_58);
                        if (iVar2 < 0) {
                            *(arg1_00 + uVar4 * 0x28) = 0;
                            *(arg1_00 + 0x20 + uVar4 * 0x28) = 2;
                        }
                        else {
                            iStack_60 = 0;
                            fcn.00037758(aiStack_58[0],&iStack_60);
                            iVar2 = iStack_60;
                            arg2_00 = fcn.000193e0(iStack_60);
                            uVar1 = fcn.00019468(iVar2,arg2_00);
                            *(arg1_00 + uVar4 * 0x28) = uVar1;
                            iVar2 = *0x44e20;
                            *(arg1_00 + 0x20 + uVar4 * 0x28) = 0;
                            (**(iVar2 + 0x48))(arg2_00);
                            (**(*0x44e20 + 0x48))();
                        }
                        uVar6 = uVar6 + 1;
                        uVar4 = uVar6;
                    } while (uVar4 < uStack_70);
                    puVar5 = in_stack_00000028;
                }
                auStack_78[0] = 0;
                uVar3 = 0x2011;
                iVar2 = (**(*0x44cb0 + 0x68))(*0x45cb8,0x2011,0,arg1_00,uStack_70 & 0xffff,auStack_78);
                bVar7 = -1 < iVar2;
                (**(*0x44e20 + 0x48))(arg1_00);
            }
            noname_0 = *(iStack_68 + auStack_78[0] * 8);
            *arg2 = noname_0;
            *puVar5 = 0;
            if (arg1 != '\0') {
                iVar2 = fcn.000198bc(noname_0,CONCAT71(uVar3 >> 8,bVar7),arg3,arg4,unaff_RBP);
            }
        }
        if (iStack_68 != 0) {
            (**(*0x44e20 + 0x48))();
        }
    }
    return iVar2;
}


/* fcn.00019d14 @ 0x19d14 */

//WARNING: Removing unreachable block (ram,0x00019e79)
//WARNING: Removing unreachable block (ram,0x00019eb5)
//WARNING: Removing unreachable block (ram,0x00019ebe)
//WARNING: Removing unreachable block (ram,0x00019ec6)
//WARNING: Removing unreachable block (ram,0x00019ece)
//WARNING: Removing unreachable block (ram,0x00019ee2)
//WARNING: Removing unreachable block (ram,0x00019f0c)
//WARNING: Removing unreachable block (ram,0x00019f13)
//WARNING: Removing unreachable block (ram,0x00019f6a)
//WARNING: Removing unreachable block (ram,0x00019f71)
//WARNING: Removing unreachable block (ram,0x00019f81)
//WARNING: Removing unreachable block (ram,0x00019f8b)
//WARNING: Removing unreachable block (ram,0x00019f8f)
//WARNING: Removing unreachable block (ram,0x00019fb6)
//WARNING: Removing unreachable block (ram,0x00019fb9)
//WARNING: Removing unreachable block (ram,0x00019fce)
//WARNING: Removing unreachable block (ram,0x00019fd3)
//WARNING: Removing unreachable block (ram,0x00019fed)
//WARNING: Removing unreachable block (ram,0x00019fe5)
//WARNING: Removing unreachable block (ram,0x00019ff3)
//WARNING: Removing unreachable block (ram,0x0001a00c)
//WARNING: Removing unreachable block (ram,0x0001a054)

uint64_t fcn.00019d14(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int16_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_150h;
    int64_t var_168h;
    
    iVar2 = 0x5a4d;
    iVar3 = -0x7fffffffffffffeb;
    if (*arg1 == 0x5a4d) {
        iVar2 = 0x5a56;
        piVar1 = arg1 + *(arg1 + 0x3c);
        if (*piVar1 != 0x5a56) {
            if ((*0x44cc0 == 0) &&
               ((iVar2 = (**(*0x44e20 + 0x140))(0x3d800,0,0x44cc0), iVar2 < 0 || (*0x44cc0 == 0)))) {
                iVar3 = iVar2;
            }
            else {
                iVar2 = (**(*0x44e20 + 0x40))(4,piVar1[3] * 0x28);
                iVar3 = iVar2;
            }
        }
    }
    return CONCAT71(iVar2 >> 8,iVar3 >> 0x3f) ^ 1;
}


/* fcn.0001b83c @ 0x1b83c */

int64_t fcn.0001b83c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    ushort uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int16_t iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int16_t iVar8;
    int64_t iVar9;
    char16_t *arg3_00;
    char *pcVar10;
    char *arg2_00;
    uint16_t auStackX_20 [4];
    ulong uVar11;
    uint64_t in_stack_ffffffffffffff68;
    ushort *puStack_88;
    ushort *puStack_80;
    uint64_t uStack_78;
    ushort *puStack_70;
    char *pcStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    uint64_t uStack_50;
    ulong auStack_48 [2];
    
    iVar5 = arg1;
    arg2_00 = NULL;
    auStack_48[0] = 0;
    if (*0x44cb0 == 0) {
        return -0x7ffffffffffffffd;
    }
    if (((arg3 == 0) || (*arg3 == 0)) || (arg2 == 0)) {
        return -0x7ffffffffffffffe;
    }
    puStack_70 = NULL;
    arg3_00 = NULL;
    puStack_88 = NULL;
    iVar3 = fcn.0003badc(arg2,*arg3,0,&pcStack_68);
    pcVar1 = pcStack_68;
    if (-1 < iVar3) {
        arg3_00 = &puStack_88;
        pcVar10 = pcStack_68 + 1;
        iVar3 = (**(*0x44e20 + 0x40))(4,pcVar10 * 0x28);
        if (-1 < iVar3) {
            if (puStack_88 != NULL) {
                fcn.0003d4be(puStack_88,pcVar10 * 0x28,0);
                arg3_00 = &puStack_70;
                iVar3 = (**(*0x44e20 + 0x40))(4,pcVar1 << 3);
                if (iVar3 < 0) goto code_r0x0001be2c;
                if (puStack_70 != NULL) {
                    arg3_00 = NULL;
                    fcn.0003d4be(puStack_70,pcVar1 << 3,0);
                    if (*0x44cc0 == 0) {
                        arg3_00 = 0x44cc0;
                        iVar3 = (**(*0x44e20 + 0x140))(0x3d800,0);
                    }
                    if (iVar3 < 0) goto code_r0x0001be2c;
                    if (*0x44cc0 != 0) {
                        arg3_00 = &puStack_80;
                        iStack_60 = 0x100;
                        iVar3 = (**(*0x44e20 + 0x40))(4);
                        if (iVar3 < 0) goto code_r0x0001be2c;
                        if (puStack_80 != NULL) {
                            if (pcVar1 != NULL) {
                                iVar9 = 0;
                                iVar3 = arg2;
                                do {
                                    *(puStack_70 + arg2_00 * 4) = iVar3;
                                    iStack_58 = iVar3 + 0x1c + *(iVar3 + 0x14);
                                    pcStack_68 = *(iVar3 + 0x18) - 0x10;
                                    uStack_50 = ((*(iVar3 + 0x10) - *(iVar3 + 0x14)) - 0x1c) / *(iVar3 + 0x18);
                                    fcn.0003d4be(0x45e50,400,0);
                                    uStack_78 = 0;
                                    uVar6 = iVar3;
                                    iVar4 = fcn.00036640(uVar6,0x3d9a0,0x10);
                                    if (iVar4 == 0) {
                                        iStack_60 = 0x100;
                                        fcn.0003d4be(puStack_80,0x100,0);
                                        pcVar10 = pcStack_68;
                                        iVar4 = (**(*0x44cc0 + 8))(*0x44cc0,iStack_58 + 0x10,pcStack_68,0,0,
                                                                   &puStack_80,&iStack_60,0x13,
                                                                   in_stack_ffffffffffffff68 & 0xffffffff00000000);
                                        if (iVar4 < 0) {
                                            pcVar10 = "!!! %r";
                                            fcn.00032d6c(puStack_80,iStack_60,0x40198,iVar4);
                                        }
                                        uStack_78 = fcn.000193e0(puStack_80);
                                        fcn.0001761c(*0x45cb8,0x2188,pcVar10,0x45e50);
                                    }
                                    else {
                                        uVar11 = 0x10;
                                        iVar4 = fcn.00036640(uVar6,0x3d720,0x10);
                                        if (iVar4 == 0) {
                                            iVar4 = 0x2189;
code_r0x0001bba7:
                                            fcn.0001761c(*0x45cb8,iVar4,uVar11,0x45e50);
                                        }
                                        else {
                                            uVar11 = 0x10;
                                            iVar4 = fcn.00036640(uVar6,0x3d840,0x10);
                                            if (iVar4 == 0) {
code_r0x0001bba2:
                                                iVar4 = 0x218b;
                                                goto code_r0x0001bba7;
                                            }
                                            uVar11 = 0x10;
                                            iVar4 = fcn.00036640(uVar6,0x3d7d0,0x10);
                                            if (iVar4 == 0) goto code_r0x0001bba2;
                                            uVar11 = 0x10;
                                            iVar4 = fcn.00036640(uVar6,0x3d8a0,0x10);
                                            if (iVar4 == 0) goto code_r0x0001bba2;
                                            uVar11 = 0x10;
                                            iVar4 = fcn.00036640(uVar6,0x3dc10,0x10);
                                            if (iVar4 == 0) {
                                                iVar4 = 0x218a;
                                                goto code_r0x0001bba7;
                                            }
                                            fcn.00037738(0x45e50,10,0x40264,iVar3);
                                        }
                                        (**(*0x44e20 + 0x40))(4);
                                        if (uStack_78 != 0) {
                                            fcn.00037738(uStack_78,0x1c,0x401a8,*(iStack_58 + 0x10));
                                        }
                                    }
                                    fcn.0003d4be(0x45fe0,400,0);
                                    fcn.00037738(0x45fe0,10,0x40264,iStack_58);
                                    arg3_00 = L"%4d|%s|%5d|%5d| %s...| %s";
                                    arg2_00 = arg2_00 + 1;
                                    in_stack_ffffffffffffff68 = uStack_78;
                                    fcn.00037738(0x45cc0,400,0x401b8,arg2_00);
                                    uVar7 = uStack_78;
                                    if (uStack_78 != 0) {
                                        (**(*0x44e20 + 0x48))();
                                    }
                                    uVar2 = fcn.00019468(uVar7,0x45cc0);
                                    *(iVar9 + 0x28 + puStack_88) = uVar2;
                                    *(iVar9 + 0x48 + puStack_88) = 0;
                                    iVar9 = iVar9 + 0x28;
                                    iVar3 = iVar3 + *(iVar3 + 0x10);
                                } while (arg2_00 < pcVar1);
                            }
                            iVar3 = *0x45cb8;
                            fcn.0001761c(*0x45cb8,0x2187,arg3_00,0x45cc0);
                            uVar2 = fcn.00019468(iVar3,0x45cc0);
                            arg3_00 = NULL;
                            *puStack_88 = uVar2;
                            iVar8 = pcVar1 + 1;
                            *(puStack_88 + 0x10) = 1;
                            auStackX_20[0] = 1;
                            iVar3 = (**(*0x44cb0 + 0x68))(*0x45cb8,iVar5,0,puStack_88,iVar8,auStackX_20);
                            if (iVar3 < 0) goto code_r0x0001be2c;
                            do {
                                iVar9 = *(puStack_70 + (auStackX_20[0] - 1) * 4);
                                if (iVar5 == 0x2186) {
                                    uVar7 = *(iVar9 + 0x10);
                                    arg3_00 = ((*arg3 - uVar7) - iVar9) + arg2;
                                    fcn.0003d510(iVar9,uVar7 + iVar9,arg3_00);
                                    *arg3 = *arg3 - uVar7;
                                    break;
                                }
                                uVar6 = *(iVar9 + 0x14);
                                uVar11 = 0;
                                fcn.0003d4be(0x45fe0,400,0);
                                fcn.0001761c(*0x45cb8,puStack_88[auStackX_20[0] * 0x14],uVar11,0x45fe0);
                                uVar11 = 0x46032;
                                fcn.00037738(0x45e50,400,0x40270,uVar6 + iVar9 + 0x1c);
                                (**(*0x44cb0 + 0x58))(0x45cf8,0x45e50,10,auStack_48,uVar11);
                                arg3_00 = NULL;
                                iVar3 = (**(*0x44cb0 + 0x68))(*0x45cb8,iVar5,0,puStack_88,iVar8,auStackX_20);
                            } while (-1 < iVar3);
                        }
                    }
                }
            }
            if (-1 < iVar3) goto code_r0x0001be80;
        }
    }
code_r0x0001be2c:
    if (iVar3 != -0x7fffffffffffffeb) {
        fcn.0001761c(*0x45cb8,0x2197,arg3_00,0x45e50);
        fcn.0001761c(*0x45cb8,arg1 & 0xffff,arg3_00,0x45cc0);
        (**(*0x44cb0 + 0x20))(0x45cc0,0x45e50,1,0);
    }
code_r0x0001be80:
    if (puStack_88 != NULL) {
        (**(*0x44e20 + 0x48))();
    }
    if (puStack_70 != NULL) {
        (**(*0x44e20 + 0x48))();
    }
    if (puStack_80 != NULL) {
        (**(*0x44e20 + 0x48))();
    }
    return iVar3;
}


/* fcn.0001b294 @ 0x1b294 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

ulong fcn.0001b294(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int16_t var_28h;
    int16_t var_30h;
    uint32_t var_38h;
    char cStack_38;
    char acStack_37 [7];
    ulong uStack_30;
    uint32_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    
    iVar4 = *0x44bd0;
    iVar3 = 0;
    cStack_38 = '\0';
    uVar1 = arg4 & 0xffff;
    if (*0x44bd0 == 0) {
        return 0;
    }
    if (*(*0x44bd0 + 8) != 0) {
        return 0x8000000000000003;
    }
    if (*0x44cb0 == 0) {
        iVar2 = (**(*0x44e20 + 0x140))(0x3da30,0,0x44cb0);
        if (iVar2 < 0) {
            return 0;
        }
        if (*0x44cb0 == 0) {
            return 0;
        }
        uVar1 = arg4;
        arg3 = arg3 & 0xffff;
        arg2 = arg2 & 0xffff;
    }
    *0x45cb8 = arg1;
    if (uVar1 == 0x2aeb) {
        uStack_30 = 1;
        (**(*0x44e28 + 0x48))(0x40090,0x3d600,0,&uStack_30,acStack_37);
        if (**(iVar4 + 0x18) != '\x01') {
            return 0;
        }
        **(iVar4 + 0x20) = 0;
        if (acStack_37[0] == '\x01') {
            fcn.0003bc74(3);
            return 0;
        }
        _var_20h = 8;
        arg3 = 0;
        iVar4 = (**(*0x44e20 + 0xb0))(2,0x3d820,0,&var_20h,&var_18h);
        if (iVar4 < 0) {
            return 0;
        }
        fcn.0001761c(arg1,0x218f,arg3,0x45cc0);
        iVar4 = 0x2190;
        goto code_r0x0001b534;
    }
    if (uVar1 == 0x2aec) {
        iVar3 = 0;
        if (**(iVar4 + 0x18) == '\0') {
            fcn.0001b294(arg1,arg2,arg3,10999);
            iVar3 = arg1;
        }
        fcn.00015434(CONCAT71(iVar3 >> 8,**(iVar4 + 0x18)),arg2);
        return 0;
    }
    if (uVar1 == 0x2aee) {
        fcn.0001ae10();
        return 0;
    }
    if (uVar1 == 10999) {
        fcn.0001761c(arg1,0x2192,arg3,0x45cc0);
        fcn.0001761c(arg1,0x218c,arg3,0x45e50);
        arg3 = CONCAT71(arg3 >> 8,3);
        (**(*0x44cb0 + 0x20))(0x45cc0,0x45e50,arg3,&cStack_38);
        if (cStack_38 == '\0') {
            iVar3 = fcn.0003bc74(3);
        }
    }
    else if (uVar1 != 11000) {
        return 0;
    }
    if (arg4 == 11000) {
        fcn.0001761c(arg1,0x214c,arg3,0x45cc0);
        fcn.0001761c(arg1,0x2191,arg3,0x45e50);
        arg3 = CONCAT71(arg3 >> 8,3);
        (**(*0x44cb0 + 0x20))(0x45cc0,0x45e50,arg3,&cStack_38);
        if (cStack_38 == '\0') {
            iVar3 = fcn.0003bc74(1);
            goto code_r0x0001b41b;
        }
    }
    else {
code_r0x0001b41b:
        if (cStack_38 == '\0') {
            fcn.0001ae10();
        }
    }
    if (-1 < iVar3) {
        return 0;
    }
    if (iVar3 == -0x7ffffffffffffff2) {
        return 0;
    }
    fcn.0001761c(arg1,0x2193,arg3,0x45cc0);
    iVar4 = 0x2194;
code_r0x0001b534:
    fcn.0001761c(arg1,iVar4,arg3,0x45e50);
    (**(*0x44cb0 + 0x20))(0x45cc0,0x45e50,1,0);
    return 0;
}


/* fcn.0001a2fc @ 0x1a2fc */

//WARNING: Variable defined which should be unmapped: var_10h

void fcn.0001a2fc(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t arg1_00;
    uint8_t uVar3;
    int64_t arg2_00;
    int64_t arg2_01;
    int64_t *arg3_00;
    ulong uVar4;
    char acStackX_10 [8];
    int64_t iStackX_18;
    int64_t iStackX_20;
    uint32_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t aiStack_48 [2];
    int64_t var_10h;
    
    uVar3 = arg2;
    if (5 < uVar3) {
        return;
    }
    iStackX_18 = 0;
    iStackX_20 = 0;
    acStackX_10[0] = '\0';
    fcn.0001761c(arg1,0x219c,arg3,0x45cc0);
    if (uVar3 == 5) {
        fcn.0001761c(arg1,0x219e,arg3,0x45fe0);
        uVar4 = CONCAT71(arg3 >> 8,1);
    }
    else {
        uVar4 = 0;
        fcn.0003d4be(0x45fe0,400,0);
        fcn.0001761c(arg1,0x219d,uVar4,0x45e50);
        uVar4 = 0x45e50;
        fcn.00037738(0x45fe0,400,0x45e50,*(uVar3 * 8 + 0x44990));
        uVar4 = CONCAT71(uVar4 >> 8,3);
    }
    uVar2 = 0x45cc0;
    (**(*0x44cb0 + 0x20))(0x45cc0,0x45fe0,uVar4,acStackX_10);
    if (acStackX_10[0] == '\0') {
        fcn.0001761c(arg1,0x219f,uVar4,0x45e50);
        fcn.0003d4be(0x45fe0,400,0);
        fcn.00037738(0x45fe0,400,0x45e50,*(uVar3 * 8 + 0x44990));
        arg1_00 = 0x45cc0;
        (**(*0x44cb0 + 0x20))(0x45cc0,0x45fe0);
        if (acStackX_10[0] != '\0') goto code_r0x0001a56f;
        arg2_01 = 0;
        arg2_00 = 1;
        iVar1 = 0;
    }
    else {
        arg3_00 = &iStackX_20;
        iVar1 = fcn.0001ad2c(CONCAT71(uVar2 >> 8,uVar3),0x2186,arg3_00,aiStack_48);
        if (iVar1 < 0) goto code_r0x0001a56f;
        fcn.0001761c(arg1,0x219c,arg3_00,0x45cc0);
        fcn.0001761c(arg1,0x21a0,arg3_00,0x45e50);
        fcn.0003d4be(0x45fe0,400,0);
        fcn.00037738(0x45fe0,400,0x45e50,*(uVar3 * 8 + 0x44990));
        (**(*0x44cb0 + 0x20))(0x45cc0,0x45fe0,3,acStackX_10);
        if (acStackX_10[0] != '\0') goto code_r0x0001a56f;
        arg2_01 = aiStack_48[0] + 0x28;
        iVar1 = (**(*0x44e20 + 0x40))(4,arg2_01);
        if (iVar1 < 0) goto code_r0x0001a56f;
        iVar1 = arg2_01;
        fcn.0003d4be(iStackX_18,arg2_01,0);
        fcn.0003b8f8(iStackX_18,CONCAT71(iVar1 >> 8,2));
        arg1_00 = iStackX_18 + 0x28;
        fcn.0003d510(arg1_00,iStackX_20,aiStack_48[0]);
        arg2_00 = 3;
        iVar1 = iStackX_18;
    }
    iVar1 = fcn.00015c60(CONCAT71(arg1_00 >> 8,uVar3),arg2_00,iVar1,arg2_01);
    if (acStackX_10[0] == '\0') {
        if (-1 < iVar1) {
            fcn.0001ae10();
        }
        uVar4 = 0x4025c;
        fcn.00032d3c(0x45e50,400,0x4025c,iVar1);
        fcn.0001761c(arg1,0x219c,uVar4,0x45cc0);
        (**(*0x44cb0 + 0x20))(0x45cc0,0x45e50,1,0);
    }
code_r0x0001a56f:
    if (iStackX_20 != 0) {
        (**(*0x44e20 + 0x48))();
    }
    if (iStackX_18 != 0) {
        (**(*0x44e20 + 0x48))();
    }
    return;
}


/* fcn.0001a5a4 @ 0x1a5a4 */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_31h

void fcn.0001a5a4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg2_00;
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    uint8_t uVar5;
    uint32_t arg3_00;
    ulong uVar6;
    uint16_t uVar7;
    uint64_t uVar8;
    char acStackX_10 [8];
    uint8_t uStackX_18;
    uint16_t auStackX_20 [4];
    uint32_t var_6fh;
    int16_t var_7fh;
    int64_t iStack_e8;
    int64_t iStack_e0;
    int64_t iStack_d8;
    int64_t iStack_d0;
    uint64_t uStack_c8;
    int64_t in_stack_ffffffffffffff40;
    ushort auStack_b8 [20];
    ushort uStack_90;
    int64_t var_79h;
    int64_t var_71h;
    int64_t var_69h;
    int64_t var_61h;
    int64_t var_59h;
    int16_t var_31h;
    int16_t var_9h;
    
    uVar5 = arg3;
    iStack_e8 = 0;
    iStack_d8 = 0;
    iStack_d0 = 0;
    uVar6 = 0;
    uStackX_18 = uVar5;
    fcn.0003d4be(0x45fe0,400,0);
    acStackX_10[0] = '\x01';
    uVar7 = 0;
    auStackX_20[0] = 0;
    iVar3 = 0x2172;
    if ((arg2 & 8U) == 0) {
        iVar3 = 0x2171;
    }
    fcn.0001761c(arg1,iVar3,uVar6,0x45cc0);
    fcn.0001761c(arg1,0x2195,uVar6,0x45e50);
    uVar8 = arg3 & 0xff;
    uVar6 = 0x45e50;
    uStack_c8 = uVar8;
    fcn.00037738(0x45fe0,400,0x45e50,*(uVar8 * 8 + 0x44990));
    iVar3 = CONCAT71(uVar6 >> 8,3);
    uVar6 = 0x45cc0;
    uVar4 = 0x45fe0;
    (**(*0x44cb0 + 0x20))(0x45cc0,0x45fe0,iVar3,acStackX_10);
    iStack_e0 = 0;
    if (acStackX_10[0] == '\0') {
        iVar2 = *(uVar8 * 8 + 0x449c8);
        iVar3 = fcn.00039994(iVar2,CONCAT71(uVar4 >> 8,0x19),iVar3,&iStack_e8);
    }
    else {
        uVar5 = (uVar5 < 4) + 2;
        if (*0x44cb0 == 0) {
            iVar3 = -0x7ffffffffffffffd;
            goto code_r0x0001a998;
        }
        iVar2 = CONCAT71(uVar6 >> 8,1);
        iVar3 = fcn.0001a07c(iVar2,&stack0xffffffffffffff40,&iStack_d0,&iStack_e8,in_stack_ffffffffffffff40);
        if (iVar3 < 0) goto code_r0x0001a998;
        if (iStack_e8 != 0) {
            fcn.0003d4be(auStack_b8,0x78,0);
            auStack_b8[0] = 0x2183;
            arg3_00 = 0;
            uStack_90 = 0x2184;
            var_61h._1_2_ = 0x2185;
            iVar3 = (**(*0x44cb0 + 0x68))(*0x45cb8,0x2182,0,auStack_b8,uVar5,auStackX_20);
            if (iVar3 < 0) goto code_r0x0001a998;
            iVar3 = -0x7fffffffffffffff;
            if (auStackX_20[0] == 2) {
                cVar1 = fcn.00019d14(iStack_e8,iStack_e0,arg3_00);
                if (cVar1 == '\0') goto code_r0x0001a998;
                (**(*0x44e20 + 0x48))(iStack_e8);
                iStack_e8 = 0x44c88;
                iStack_e0 = 0x20;
                auStackX_20[0] = 0;
            }
            if (auStackX_20[0] == 0) {
                uVar7 = 0x54;
            }
            if (iStack_e0 == 0) {
                iVar2 = -0x7fffffffffffffe6;
            }
            else {
                iVar2 = fcn.0003badc(iStack_e8,iStack_e0,0,0);
            }
            if (-1 < iVar2) {
                uVar7 = 0x28;
                auStackX_20[0] = uVar5;
            }
            arg2_00 = uVar7 + iStack_e0;
            iVar2 = (**(*0x44e20 + 0x40))(4,arg2_00);
            if (iVar2 < 0) goto code_r0x0001a998;
            iVar2 = arg2_00;
            fcn.0003d4be(iStack_d8,arg2_00,0);
            if (auStackX_20[0] == 0) {
                iVar2 = fcn.0003b9a8(iStack_d8,iStack_e8,iStack_e0,0x3d980);
                if (iVar2 < 0) {
                    (**(*0x44e20 + 0x48))(iStack_d8);
                    goto code_r0x0001a998;
                }
            }
            else if (auStackX_20[0] == uVar5) {
                fcn.0003b8f8(iStack_d8,CONCAT71(iVar2 >> 8,arg2));
            }
            iVar3 = 0;
            fcn.0003d510(iStack_d8 + uVar7,iStack_e8,iStack_e0);
            iVar2 = iStack_e8;
            if (iStack_e8 != 0x44c88) {
                (**(*0x44e20 + 0x48))();
                iVar2 = iStack_e8;
            }
            iStack_e8 = iStack_d8;
            iStack_e0 = arg2_00;
        }
        uVar8 = uStack_c8;
        uVar5 = uStackX_18;
    }
    if ((-1 < iVar3) && (iStack_e8 != 0)) {
        if (acStackX_10[0] == '\x01') {
            fcn.0001761c(arg1,0x2196,iStack_e8,0x45e50);
            iVar3 = iStack_d0;
            fcn.00037738(0x45fe0,400,0x45e50,*(uVar8 * 8 + 0x44990));
            iVar2 = 0x45cc0;
            (**(*0x44cb0 + 0x20))(0x45cc0,0x45fe0,3,acStackX_10,iVar3);
        }
        if (acStackX_10[0] == '\0') {
            iVar3 = fcn.00015c60(CONCAT71(iVar2 >> 8,uVar5),arg2 & 0xff,iStack_e8,iStack_e0);
        }
        else {
            iVar3 = -0x7fffffffffffffeb;
        }
    }
code_r0x0001a998:
    fcn.00032d3c(0x45e50,400,0x4025c,iVar3);
    (**(*0x44cb0 + 0x20))(0x45cc0,0x45e50,1,0);
    fcn.0001ae10();
    if (iStack_e8 != 0) {
        (**(*0x44e20 + 0x48))();
    }
    if (iStack_d0 != 0) {
        (**(*0x44e20 + 0x48))();
    }
    return;
}


/* fcn.0001aa10 @ 0x1aa10 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Removing unreachable block (ram,0x0001ac5c)

ulong fcn.0001aa10(int64_t arg1,uint32_t arg2)

{
    bool bVar1;
    int64_t iVar2;
    uint16_t uVar3;
    ulong uVar4;
    uint8_t uVar5;
    uchar *noname_2;
    uint64_t arg2_00;
    uint64_t uVar6;
    ulong uStackX_18;
    int64_t iStackX_20;
    int64_t var_50h;
    int64_t var_58h;
    uchar *puStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    int64_t iStack_50;
    ulong uStack_48;
    int64_t in_stack_ffffffffffffffc0;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_bp_8h;
    
    uVar3 = arg2;
    iStack_58 = 0;
    iStack_50 = 0;
    bVar1 = true;
    puStack_68 = NULL;
    if ((uVar3 < 7) && (uStackX_18 = 0, *0x45cb8 = arg1, *0x44cb0 != 0)) {
        iVar2 = fcn.0001a07c(0,&uStack_48,&iStack_50,&iStack_58,in_stack_ffffffffffffffc0);
        if (-1 < iVar2) {
            uVar5 = arg2;
            if (uVar3 == 6) {
                uVar5 = 0;
            }
            arg2_00 = 0;
            noname_2 = NULL;
            fcn.0003d4be(0x45fe0,400,0);
            do {
                uVar6 = uVar5;
                iVar2 = *(uVar6 * 8 + 0x44990);
                if (iVar2 == 0) break;
                uVar4 = 0x3d6f0;
                if (3 < uVar5) {
                    uVar4 = 0x3d600;
                }
                noname_2 = NULL;
                uStackX_18 = 0;
                iVar2 = (**(*0x44e28 + 0x48))(iVar2,uVar4,0,&uStackX_18,0);
                if (iVar2 == -0x7ffffffffffffffb) {
                    (**(*0x44e20 + 0x40))(4,uStackX_18);
                    noname_2 = NULL;
                    iVar2 = (**(*0x44e28 + 0x48))(*(uVar6 * 8 + 0x44990),uVar4,0,&uStackX_18,0);
                    if (-1 < iVar2) {
                        noname_2 = &stack0xffffffffffffffc0;
                        iVar2 = (**(*0x44e20 + 0x98))(uStack_48,0x3da10);
                        if ((-1 < iVar2) &&
                           (iVar2 = (**(in_stack_ffffffffffffffc0 + 8))(in_stack_ffffffffffffffc0,&iStack_60),
                           -1 < iVar2)) {
                            noname_2 = *(uVar6 * 8 + 0x44990);
                            iVar2 = (**(iStack_60 + 8))(iStack_60,&iStackX_20,noname_2,0x8000000000000003,0);
                            if (-1 < iVar2) {
                                (**(iStackX_20 + 0x18))(iStackX_20);
                                noname_2 = *(uVar6 * 8 + 0x44990);
                                iVar2 = (**(iStack_60 + 8))(iStack_60,&iStackX_20,noname_2,0x8000000000000003,0);
                                if (-1 < iVar2) {
                                    noname_2 = puStack_68;
                                    iVar2 = (**(iStackX_20 + 0x28))(iStackX_20,&uStackX_18);
                                    (**(iStackX_20 + 0x10))(iStackX_20);
                                    arg2_00 = arg2_00 + 1;
                                    if (-1 < iVar2) goto code_r0x0001ac66;
                                }
                            }
                        }
                        bVar1 = false;
                        fcn.0001761c(arg1,0x2199,noname_2,0x45cc0);
                        noname_2 = CONCAT71(noname_2 >> 8,1);
                        (**(*0x44cb0 + 0x20))(0x45cc0,*(uVar6 * 8 + 0x44990),noname_2,0);
                    }
                }
code_r0x0001ac66:
                uVar5 = uVar5 + 1;
                if (uVar3 != 6) {
                    uVar5 = 6;
                    break;
                }
            } while (bVar1);
            if ((uVar5 == 6) && (bVar1)) {
                fcn.0001761c(arg1,0x219b,noname_2,0x45e50);
                uVar4 = 0x45e50;
                fcn.00037738(0x45fe0,400,0x45e50,arg2_00);
                fcn.0001761c(arg1,0x219a,uVar4,0x45cc0);
                (**(*0x44cb0 + 0x20))(0x45cc0,0x45fe0,1,0);
            }
        }
        if (iStack_58 != 0) {
            (**(*0x44e20 + 0x48))();
        }
        if (iStack_50 != 0) {
            (**(*0x44e20 + 0x48))();
        }
    }
    return 0;
}


/* fcn.000323ac @ 0x323ac */

int64_t fcn.000323ac(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    int64_t iVar4;
    char cVar5;
    int64_t arg1_00;
    ulong uVar6;
    uint64_t arg2_00;
    uint64_t uVar7;
    ushort uVar8;
    
    uVar1 = arg2;
    cVar5 = arg1;
    iVar4 = fcn.00032348(arg1);
    uVar7 = 0;
    if (iVar4 < 0) {
        return iVar4;
    }
    arg1_00 = CONCAT71(arg1 >> 8,cVar5);
    fcn.000322c0(arg1_00);
    uVar6 = CONCAT71(arg1_00 >> 8,cVar5);
    fcn.00032248(uVar6,CONCAT71(arg2 >> 8,uVar1));
    fcn.00032348(CONCAT71(uVar6 >> 8,cVar5));
    uVar8 = 0x60;
    uVar2 = 100;
    uVar6 = 0;
    if (cVar5 != '`') {
        uVar2 = 0x66;
    }
    arg2_00 = uVar2;
    uVar3 = in(uVar2);
    if ((uVar3 & 2) != 0) {
        do {
            if (0x1ffff < uVar7) goto code_r0x0003244e;
            uVar6 = 0;
            fcn.000382d8(0xf,arg2_00);
            arg2_00 = uVar2;
            uVar3 = in(uVar2);
            uVar7 = uVar7 + 1;
        } while ((uVar3 & 2) != 0);
        if (0x1ffff < uVar7) goto code_r0x0003244e;
    }
    if (cVar5 != '`') {
        uVar8 = 0x62;
    }
    out(uVar8,arg3);
code_r0x0003244e:
    fcn.000322c0(CONCAT71(uVar6 >> 8,cVar5));
    return iVar4;
}


/* fcn.0001d6ec @ 0x1d6ec */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.0001d6ec(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint8_t *puVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iStackX_18;
    uint64_t uStackX_20;
    int64_t var_30h;
    uint32_t var_38h;
    int64_t iStack_38;
    uint64_t uStack_30;
    int64_t var_bp_20h;
    uint32_t var_18h;
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    iVar1 = (**(*0x44e20 + 0x138))(0,0,0,&uStackX_20,&iStackX_18);
    if (-1 < iVar1) {
        uVar5 = 0;
        if (uStackX_20 != 0) {
            do {
                iStack_38 = 0;
                iVar1 = (**(*0x44e20 + 0x130))(*(iStackX_18 + uVar5 * 8),&iStack_38,&uStack_30);
                if (-1 < iVar1) {
                    uVar6 = 0;
                    if (uStack_30 != 0) {
                        do {
                            iVar2 = (**(*0x44e20 + 0x128))
                                              (*(iStackX_18 + uVar5 * 8),*(iStack_38 + uVar6 * 8),&var_bp_20h);
                            iVar1 = *0x44e20;
                            if (-1 < iVar2) {
                                uVar7 = 0;
                                if (_var_18h != 0) {
                                    puVar4 = var_bp_20h + 0x10;
                                    do {
                                        if (((*(puVar4 + -8) == arg1) && ((*puVar4 & 0x10) != 0)) &&
                                           (uVar3 = 0, uStackX_20 != 0)) {
                                            do {
                                                if (*(iStackX_18 + uVar3 * 8) == *(puVar4 + -0x10)) {
                                                    *arg2 = *(iStackX_18 + uVar3 * 8);
                                                    (**(iVar1 + 0x48))(var_bp_20h);
                                                    (**(*0x44e20 + 0x48))(iStack_38);
                                                    (**(*0x44e20 + 0x48))(iStackX_18);
                                                    return 0;
                                                }
                                                uVar3 = uVar3 + 1;
                                            } while (uVar3 < uStackX_20);
                                        }
                                        uVar7 = uVar7 + 1;
                                        puVar4 = puVar4 + 0x18;
                                    } while (uVar7 < _var_18h);
                                }
                                if (var_bp_20h != 0) {
                                    (**(*0x44e20 + 0x48))(var_bp_20h);
                                }
                            }
                            uVar6 = uVar6 + 1;
                        } while (uVar6 < uStack_30);
                    }
                    if (iStack_38 != 0) {
                        (**(*0x44e20 + 0x48))();
                    }
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < uStackX_20);
        }
        if (iStackX_18 != 0) {
            (**(*0x44e20 + 0x48))();
        }
    }
    return 0x800000000000000e;
}


/* fcn.0001d048 @ 0x1d048 */

int64_t fcn.0001d048(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    
    iVar2 = 0;
    piVar3 = 0x40430;
    do {
        iVar1 = (**piVar3)(arg1,arg2,arg3);
        if (-1 < iVar1) {
            return iVar1;
        }
        iVar2 = iVar2 + 1;
        piVar3 = iVar2 * 8 + 0x40430;
    } while (*piVar3 != 0);
    return iVar1;
}


/* fcn.0001d498 @ 0x1d498 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

ulong fcn.0001d498(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    char *pcVar2;
    char cVar3;
    char *pcVar4;
    char *arg2_00;
    char *pcVar5;
    char *pcStack_48;
    int64_t iStack_40;
    int64_t aiStack_38 [2];
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    arg2_00 = NULL;
    pcStack_48 = NULL;
    iVar1 = (**(*0x44e20 + 0x118))(arg1,0x3d6d0,&iStack_40,0,0,2);
    if (iVar1 < 0) {
code_r0x0001d63f:
        iVar1 = (**(*0x44e20 + 0x118))(arg1,0x3db80,&iStack_40,0,0,2);
        if ((iVar1 < 0) || (iVar1 = (**(iStack_40 + 8))(iStack_40,arg2,arg3,0x40408,aiStack_38), iVar1 < 0)) {
            return 0;
        }
        if (aiStack_38[0] != 0) {
            iVar1 = fcn.00033ecc(aiStack_38[0],0x32);
            arg2_00 = iVar1 * 2 + 2;
        }
        (**(*0x44e20 + 0x40))(4,arg2_00,arg4);
    }
    else {
        iVar1 = (**(iStack_40 + 8))(iStack_40,arg2,arg3,0x3f994,aiStack_38);
        if (iVar1 < 0) {
            cVar3 = **(iStack_40 + 0x10);
            pcVar4 = arg2_00;
            while (cVar3 != '\0') {
                pcVar4 = pcVar4 + 1;
                cVar3 = (*(iStack_40 + 0x10))[pcVar4];
            }
            (**(*0x44e20 + 0x40))(4,pcVar4 + 1,&pcStack_48);
            if (pcStack_48 != NULL) {
                fcn.00034394(pcStack_48,pcVar4 + 1,*(iStack_40 + 0x10));
                cVar3 = *pcStack_48;
                pcVar4 = pcStack_48;
                while (cVar3 != '\0') {
                    pcVar5 = 0x403fc;
                    pcVar2 = pcVar4;
                    if (cVar3 == ';') {
                        do {
                            if (cVar3 == '\0') break;
                            pcVar2 = pcVar2 + 1;
                            pcVar5 = pcVar5 + 1;
                            cVar3 = *pcVar2;
                        } while (cVar3 == *pcVar5);
                        if (*pcVar5 == '\0') goto code_r0x0001d5b3;
                    }
                    if (*pcVar2 == '\0') goto code_r0x0001d5be;
                    pcVar4 = pcVar4 + 1;
                    cVar3 = *pcVar4;
                }
                pcVar4 = arg2_00;
code_r0x0001d5b3:
                if (pcVar4 != NULL) {
                    *pcVar4 = '\0';
                }
code_r0x0001d5be:
                iVar1 = (**(iStack_40 + 8))(iStack_40,arg2,arg3,pcStack_48,aiStack_38);
                (**(*0x44e20 + 0x48))(pcStack_48);
                pcStack_48 = NULL;
            }
            if (iVar1 < 0) goto code_r0x0001d63f;
        }
        if (aiStack_38[0] != 0) {
            iVar1 = fcn.00033ecc(aiStack_38[0],0x32);
            arg2_00 = iVar1 * 2 + 2;
        }
        (**(*0x44e20 + 0x40))(4,arg2_00,arg4);
    }
    fcn.00032d3c(*arg4,arg2_00,0x40400,aiStack_38[0]);
    return 1;
}


/* fcn.0001d284 @ 0x1d284 */

//WARNING: Variable defined which should be unmapped: var_10h

ulong fcn.0001d284(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char *pcVar2;
    char cVar3;
    char *pcVar4;
    char *arg2_00;
    char *pcVar5;
    char *pcStackX_18;
    ulong *puStackX_20;
    int64_t var_40h;
    int64_t var_48h;
    int64_t aiStack_38 [2];
    int64_t var_10h;
    
    arg2_00 = NULL;
    pcStackX_18 = NULL;
    iVar1 = (**(*0x44e20 + 0x118))(arg1,0x3d6d0,&puStackX_20,0,0,2);
    if (iVar1 < 0) {
code_r0x0001d406:
        iVar1 = (**(*0x44e20 + 0x118))(arg1,0x3db80,&puStackX_20,0,0,2);
        if ((iVar1 < 0) || (iVar1 = (**puStackX_20)(puStackX_20,0x40408,aiStack_38), iVar1 < 0)) {
            return 0;
        }
        if (aiStack_38[0] != 0) {
            iVar1 = fcn.00033ecc(aiStack_38[0],0x32);
            arg2_00 = iVar1 * 2 + 2;
        }
        (**(*0x44e20 + 0x40))(4,arg2_00,arg2);
    }
    else {
        iVar1 = (**puStackX_20)(puStackX_20,0x3f994,aiStack_38);
        if (iVar1 < 0) {
            cVar3 = *puStackX_20[2];
            pcVar4 = arg2_00;
            while (cVar3 != '\0') {
                pcVar4 = pcVar4 + 1;
                cVar3 = puStackX_20[2][pcVar4];
            }
            (**(*0x44e20 + 0x40))(4,pcVar4 + 1,&pcStackX_18);
            if (pcStackX_18 != NULL) {
                fcn.00034394(pcStackX_18,pcVar4 + 1,puStackX_20[2]);
                cVar3 = *pcStackX_18;
                pcVar4 = pcStackX_18;
                while (cVar3 != '\0') {
                    pcVar5 = 0x403fc;
                    pcVar2 = pcVar4;
                    if (cVar3 == ';') {
                        do {
                            if (cVar3 == '\0') break;
                            pcVar2 = pcVar2 + 1;
                            pcVar5 = pcVar5 + 1;
                            cVar3 = *pcVar2;
                        } while (cVar3 == *pcVar5);
                        if (*pcVar5 == '\0') goto code_r0x0001d383;
                    }
                    if (*pcVar2 == '\0') goto code_r0x0001d38e;
                    pcVar4 = pcVar4 + 1;
                    cVar3 = *pcVar4;
                }
                pcVar4 = arg2_00;
code_r0x0001d383:
                if (pcVar4 != NULL) {
                    *pcVar4 = '\0';
                }
code_r0x0001d38e:
                iVar1 = (**puStackX_20)(puStackX_20,pcStackX_18,aiStack_38);
                (**(*0x44e20 + 0x48))(pcStackX_18);
                pcStackX_18 = NULL;
            }
            if (iVar1 < 0) goto code_r0x0001d406;
        }
        if (aiStack_38[0] != 0) {
            iVar1 = fcn.00033ecc(aiStack_38[0],0x32);
            arg2_00 = iVar1 * 2 + 2;
        }
        (**(*0x44e20 + 0x40))(4,arg2_00,arg2);
    }
    fcn.00032d3c(*arg2,arg2_00,0x40400,aiStack_38[0]);
    return 1;
}


/* fcn.0001dbcc @ 0x1dbcc */

ulong fcn.0001dbcc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong uStack_18;
    ulong uStack_10;
    
    uStack_10 = *0x3f8a8;
    uStack_18 = *0x3f8a0;
    uVar3 = 0;
    *arg3 = 0;
    *arg4 = 0;
    fcn.0001daac(arg1,arg2,&uStack_18);
    uStack_18 = *0x3d9e0;
    uStack_10 = *0x3d9e8;
    uVar1 = fcn.0001daac(arg1,arg2,&uStack_18);
    iVar2 = *0x44ce8;
    if (*0x44ce8 != 0) {
        *arg3 = *0x44ce8;
        iVar2 = fcn.00036494(iVar2 << 3);
        *arg4 = iVar2;
        if (*arg3 != 0) {
            do {
                *(iVar2 + uVar3 * 8) = **(*0x44cf0 + uVar3 * 8);
                uVar3 = uVar3 + 1;
            } while (uVar3 < *arg3);
        }
    }
    return uVar1;
}


/* fcn.000364d4 @ 0x364d4 */

int64_t fcn.000364d4(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    
    if (arg1 == 0) {
        return 0;
    }
    iVar2 = 0;
    while( true ) {
        if ((*arg1 == '\x7f') && (*(arg1 + 1) == -1)) {
            return iVar2 + 4;
        }
        uVar1 = *(arg1 + 3) * 0x100 + *(arg1 + 2);
        if ((*arg1 == '\0') || (uVar1 == 0)) break;
        iVar2 = iVar2 + uVar1;
        arg1 = arg1 + *(arg1 + 3) * 0x100 + *(arg1 + 2);
    }
    return iVar2;
}


/* fcn.00034394 @ 0x34394 */

ulong fcn.00034394(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t extraout_RAX;
    uint in_register_00000014;
    
    if ((((arg1 == 0) || (arg3 == 0)) || (1000000 < CONCAT44(in_register_00000014,arg2))) ||
       (CONCAT44(in_register_00000014,arg2) == 0)) {
        return 0x8000000000000002;
    }
    fcn.00034368(arg3,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + extraout_RAX + 1) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x00034405;
    }
    if (arg3 < arg1 + CONCAT44(in_register_00000014,arg2)) {
        return 0x800000000000000f;
    }
code_r0x00034405:
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


/* fcn.00036494 @ 0x36494 */

int64_t fcn.00036494(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.00036468(arg1);
    if (iVar1 != 0) {
        (**(*0x44e20 + 0x168))(iVar1,arg1,0);
    }
    return iVar1;
}


/* fcn.00036468 @ 0x36468 */

ulong fcn.00036468(int64_t arg1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    (**(*0x44e20 + 0x40))(4,arg1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.0001d894 @ 0x1d894 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h

int64_t fcn.0001d894(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t auStackX_8 [2];
    int64_t iStackX_18;
    int64_t iStackX_20;
    uint32_t var_40h;
    int64_t var_50h;
    int64_t var_58h;
    uint64_t uStack_58;
    uint64_t uStack_50;
    ulong uStack_48;
    int64_t var_bp_20h;
    uint32_t var_18h;
    int64_t var_10h;
    
    *arg3 = 0;
    *arg4 = 0;
    auStackX_8[0] = 0;
    iStackX_18 = 0;
    if ((arg1 == 0) || (arg2 == 0)) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = (**(*0x44e20 + 0x138))(0,0,0,auStackX_8,&iStackX_18);
        if (-1 < iVar1) {
            iVar1 = fcn.00036494(auStackX_8[0]);
            uVar3 = 0;
            if (auStackX_8[0] != 0) {
                do {
                    *(uVar3 + iVar1) = 0;
                    uVar3 = uVar3 + 1;
                } while (uVar3 < auStackX_8[0]);
            }
            iVar2 = (**(*0x44e20 + 0x130))(arg2);
            if (-1 < iVar2) {
                uVar3 = 0;
                if (uStack_50 != 0) {
                    do {
                        iVar2 = (**(*0x44e20 + 0x128))(arg2);
                        if (-1 < iVar2) {
                            uVar6 = 0;
                            if (uStack_58 != 0) {
                                iVar2 = 0;
                                do {
                                    if (((*(iVar2 + iStackX_20) == arg1) && ((*(iVar2 + 0x10 + iStackX_20) & 8) != 0))
                                       && (uVar4 = 0, auStackX_8[0] != 0)) {
                                        do {
                                            if (*(iVar2 + 8 + iStackX_20) == *(iStackX_18 + uVar4 * 8)) {
                                                *(uVar4 + iVar1) = 1;
                                            }
                                            uVar4 = uVar4 + 1;
                                        } while (uVar4 < auStackX_8[0]);
                                    }
                                    uVar6 = uVar6 + 1;
                                    iVar2 = iVar2 + 0x18;
                                } while (uVar6 < uStack_58);
                            }
                            (**(*0x44e20 + 0x48))(iStackX_20);
                        }
                        uVar3 = uVar3 + 1;
                    } while (uVar3 < uStack_50);
                }
                (**(*0x44e20 + 0x48))(uStack_48);
            }
            uVar3 = 0;
            if (auStackX_8[0] != 0) {
                do {
                    if (*(uVar3 + iVar1) != '\0') {
                        *arg3 = *arg3 + 1;
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 < auStackX_8[0]);
            }
            if (*arg3 != 0) {
                iVar2 = fcn.00036494(*arg3 << 3);
                uVar3 = 0;
                *arg4 = iVar2;
                if (auStackX_8[0] != 0) {
                    iVar5 = 0;
                    do {
                        if (*(uVar3 + iVar1) != '\0') {
                            *(iVar5 + iVar2) = *(iStackX_18 + uVar3 * 8);
                            iVar5 = iVar5 + 8;
                        }
                        uVar3 = uVar3 + 1;
                    } while (uVar3 < auStackX_8[0]);
                }
            }
            if (iStackX_18 != 0) {
                (**(*0x44e20 + 0x48))();
            }
            return 0;
        }
    }
    if (iStackX_18 != 0) {
        (**(*0x44e20 + 0x48))();
    }
    return iVar1;
}


/* fcn.0001daac @ 0x1daac */

int64_t fcn.0001daac(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    int64_t *piVar6;
    int64_t iStackX_20;
    int64_t *piStack_28;
    ulong uStack_20;
    
    iStackX_20 = 0;
    piStack_28 = NULL;
    bVar1 = false;
    iVar2 = fcn.0001d894(arg1,arg2,&iStackX_20,&piStack_28);
    if (-1 < iVar2) {
        if (iStackX_20 != 0) {
            piVar6 = piStack_28;
            iVar2 = iStackX_20;
            do {
                iVar3 = (**(*0x44e20 + 0x118))(*piVar6,arg3,0,0,0,4);
                if (iVar3 < 0) {
                    piStack_28 = *arg3;
                    uStack_20 = *(arg3 + 8);
                    fcn.0001daac(arg1,*piVar6,&piStack_28);
                }
                else {
                    uVar5 = 0;
                    if (*0x44ce8 != 0) {
                        uVar4 = 0;
                        do {
                            if (**(*0x44cf0 + uVar4 * 8) == *piVar6) {
                                bVar1 = true;
                            }
                            uVar5 = uVar5 + 1;
                            uVar4 = uVar5;
                        } while (uVar4 < *0x44ce8);
                    }
                    if ((!bVar1) && (iVar3 = fcn.00037a04(0x44ce0), -1 < iVar3)) {
                        *(*0x44cf0 + *0x44ce8 * 8) = piVar6;
                        *0x44ce8 = *0x44ce8 + 1;
                    }
                }
                piVar6 = piVar6 + 1;
                iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.00037a04 @ 0x37a04 */

ulong fcn.00037a04(int arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    uint64_t *puVar2;
    uint64_t uVar3;
    
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = *puVar2;
    if (uVar3 == 0) {
        uVar3 = 0x50;
    }
    else {
        if (puVar2[2] == 0) {
            uVar3 = uVar3 << 3;
        }
        else {
            if (puVar2[1] <= uVar3 - 1) {
                return 0;
            }
            uVar3 = uVar3 * 8 + 0x50;
        }
        if (uVar3 == 0) {
            return 0;
        }
    }
    uVar1 = fcn.00036494(uVar3);
    if (uVar1 != 0) {
        (**(*0x44e20 + 0x160))(uVar1,puVar2[2],puVar2[1] << 3);
        (**(*0x44e20 + 0x48))(puVar2[2]);
        *puVar2 = uVar3 >> 3;
        puVar2[2] = uVar1;
        return 0;
    }
    return 0x8000000000000009;
}


/* fcn.00032ba4 @ 0x32ba4 */

ulong fcn.00032ba4(int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x44e00 + 0x40))(4,arg1,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.0003a1b8 @ 0x3a1b8 */

bool fcn.0003a1b8(int64_t noname_0,int64_t noname_1,int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int16_t *piVar2;
    int16_t *piVar3;
    char16_t *pcVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t aiStackX_18 [2];
    uchar auStack_28 [16];
    
    aiStackX_18[0] = arg1;
    piVar3 = fcn.00039e30(noname_0,noname_1,0);
    iVar6 = 0;
    if (piVar3 != NULL) {
        pcVar4 = L"GUID=00000000000000000000000000000000&NAME=0000&PATH=00";
        iVar5 = iVar6;
        do {
            pcVar4 = pcVar4 + 1;
            iVar5 = iVar5 + 1;
        } while (*pcVar4 != L'\0');
        iVar1 = *piVar3;
        piVar2 = piVar3;
        while (iVar1 != 0) {
            piVar2 = piVar2 + 1;
            iVar6 = iVar6 + 1;
            iVar1 = *piVar2;
        }
        iVar5 = iVar5 * 2 + iVar6 * 2;
        iVar6 = fcn.00032c10(iVar6,iVar5 + 4);
        fcn.00032d3c(iVar6,iVar5 + 4,0x44338,0x44350);
        (**(*0x44e00 + 0x48))(piVar3);
        if (iVar6 != 0) {
            iVar5 = (**(*0x44e80 + 0x20))(*0x44e80,iVar6,arg2,aiStackX_18,auStack_28);
            (**(*0x44e00 + 0x48))(iVar6);
            return -1 < iVar5;
        }
    }
    return false;
}


/* fcn.0003a2ac @ 0x3a2ac */

bool fcn.0003a2ac(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int16_t *piVar2;
    char16_t *pcVar3;
    int64_t iVar4;
    int16_t *piVar5;
    int64_t iVar6;
    int16_t *piVar7;
    char16_t *pcVar8;
    int16_t *in_stack_00000028;
    uchar auStack_38 [16];
    
    pcVar8 = L"GUID=00000000000000000000000000000000&NAME=0000&PATH=00";
    iVar6 = 0;
    pcVar3 = L"GUID=00000000000000000000000000000000&NAME=0000&PATH=00";
    if (in_stack_00000028 == NULL) {
        do {
            pcVar3 = pcVar3 + 1;
            iVar6 = iVar6 + 1;
        } while (*pcVar3 != L'\0');
        iVar4 = iVar6 * 2 + 0x42;
        iVar6 = fcn.00032c10(arg1,iVar4);
        pcVar3 = L"%s&OFFSET=0&WIDTH=%016LX";
    }
    else {
        iVar4 = iVar6;
        do {
            pcVar3 = pcVar3 + 1;
            iVar4 = iVar4 + 1;
        } while (*pcVar3 != L'\0');
        iVar1 = *in_stack_00000028;
        piVar7 = in_stack_00000028;
        while (iVar1 != 0) {
            piVar7 = piVar7 + 1;
            iVar6 = iVar6 + 1;
            iVar1 = *piVar7;
        }
        iVar4 = iVar4 * 2 + iVar6 * 2;
        iVar6 = fcn.00032c10(iVar6,iVar4 + 2);
        pcVar3 = 0x40308;
        iVar4 = iVar4 + 2;
    }
    fcn.00032d3c(iVar6,iVar4,pcVar3,0x44350);
    if (iVar6 != 0) {
        iVar4 = (**(*0x44e80 + 0x18))(*0x44e80,iVar6,arg4,arg3,&stack0x00000028,auStack_38);
        piVar7 = in_stack_00000028;
        if (iVar4 < 0) {
            piVar7 = NULL;
        }
        (**(*0x44e00 + 0x48))(iVar6);
        if (piVar7 != NULL) {
            piVar2 = NULL;
            do {
                piVar5 = piVar2;
                pcVar8 = pcVar8 + 1;
                piVar2 = piVar5 + 1;
            } while (*pcVar8 != L'\0');
            iVar6 = fcn.00039e30(arg1,arg2,piVar7 + piVar5 + 1);
            (**(*0x44e00 + 0x48))(piVar7);
            return iVar6 != 0;
        }
    }
    return false;
}


/* fcn.00012538 @ 0x12538 */

int64_t fcn.00012538(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    ulong *puStackX_10;
    
    puStackX_10 = NULL;
    iVar2 = -0x7ffffffffffffffe;
    if (arg2 != 0) {
        for (puVar1 = *0x47000; puVar1 != 0x47000; puVar1 = *puVar1) {
            if (*(puVar1 + 2) == arg1) {
                return -0x7ffffffffffffffd;
            }
        }
        iVar2 = (**(*0x44e00 + 0x40))(4,0x20,&puStackX_10);
        if (-1 < iVar2) {
            *(puStackX_10 + 2) = arg1;
            puStackX_10[3] = arg2;
            *puStackX_10 = 0x47000;
            puStackX_10[1] = *0x47008;
            **0x47008 = puStackX_10;
            *0x47008 = puStackX_10;
        }
    }
    return iVar2;
}


/* fcn.0003253c @ 0x3253c */

ulong fcn.0003253c(void)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uchar uVar3;
    uint32_t auStackX_8 [8];
    
    fcn.000103d0(1,auStackX_8,0,0);
    uVar3 = 4;
    if ((auStackX_8[0] & 0xfff0ff0) == 0x906a0) {
        if (*0xc0000002 < 0x4622) {
            uVar2 = *0xc0000002 - 0x4601;
            if ((*0xc0000002 - 0x4601 & 0xffffffdf) != 0) {
                if (*0xc0000002 != 0x4602) {
                    if (*0xc0000002 == 0x4609) goto code_r0x00032657;
                    uVar1 = *0xc0000002 - 0x460a;
                    uVar2 = uVar1;
                    if ((0xd < uVar1) || ((0x2401U >> (uVar1 & 0x1f) & 1) == 0)) {
                        if (*0xc0000002 == 0x4619) goto code_r0x00032657;
                        uVar2 = *0xc0000002 - 0x461a;
                        if (2 < *0xc0000002 - 0x461a) goto code_r0x0003259b;
                    }
                }
code_r0x00032599:
                uVar3 = 2;
                goto code_r0x0003259b;
            }
        }
        else {
            uVar2 = 0;
            if (*0xc0000002 == 0x4622) goto code_r0x00032599;
            if (((((*0xc0000002 != 0x4629) && (*0xc0000002 != 0x4641)) && (*0xc0000002 != 0x4645)) &&
                ((*0xc0000002 != 0x4649 && (*0xc0000002 != 0x4659)))) && (*0xc0000002 != 0x4661)) goto code_r0x0003259b;
        }
    }
    else {
        uVar1 = (auStackX_8[0] & 0xfff0ff0) - 0xb06a0;
        uVar2 = uVar1;
        if (uVar1 != 0) {
            if (uVar1 != 0x40) goto code_r0x0003259b;
            uVar2 = *0xc0000002;
            if ((*0xc0000002 != 0x4614) && (uVar1 = *0xc0000002 - 0x4617, uVar2 = uVar1, (uVar1 & 0xfffffffa) != 0))
            goto code_r0x0003259b;
            goto code_r0x00032599;
        }
        uVar2 = *0xc0000002;
        if (*0xc0000002 < 0xa706) goto code_r0x0003259b;
        if (0xa70b < *0xc0000002) {
            uVar1 = *0xc0000002 - 0xa715;
            uVar2 = uVar1;
            if ((7 < uVar1) || ((0xc3U >> (uVar1 & 0x1f) & 1) == 0)) goto code_r0x0003259b;
        }
    }
code_r0x00032657:
    uVar3 = 0;
code_r0x0003259b:
    return CONCAT71(uVar2 >> 8,uVar3);
}


/* fcn.00032138 @ 0x32138 */

ulong fcn.00032138(uint32_t arg1,ulong noname_1,int64_t arg2)

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
            if ((*(iVar2 + 8) == *0x3d880) && (*(iVar2 + 0x10) == *0x3d888)) {
                *arg2 = iVar2;
                return 0;
            }
            uVar4 = uVar4 + 1;
            uVar3 = uVar3 + *(iVar2 + 2);
        } while (uVar4 < *(iVar1 + 0x1e));
    }
    return 0x800000000000000e;
}


/* fcn.0001f010 @ 0x1f010 */

ulong fcn.0001f010(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    char *pcVar5;
    
    iVar1 = fcn.0003822c(0x3dc50);
    if (iVar1 == 0) {
        uVar2 = 0x800000000000000e;
    }
    else {
        uVar3 = 0;
        pcVar5 = iVar1 + 0x1e;
        do {
            if (uVar3 < 0x10) {
                if (uVar3 == 0xf) {
                    uVar4 = 0xf77;
                }
                else if (uVar3 < 8) {
                    if (uVar3 == 7) {
                        uVar4 = 0xf6f;
                    }
                    else if (uVar3 == 0) {
code_r0x0001f0c9:
                        uVar4 = 0xf68;
                    }
                    else if (uVar3 == 1) {
                        uVar4 = 0xf69;
                    }
                    else if (uVar3 == 2) {
                        uVar4 = 0xf6a;
                    }
                    else if (uVar3 == 3) {
                        uVar4 = 0xf6b;
                    }
                    else if (uVar3 == 4) {
                        uVar4 = 0xf6c;
                    }
                    else if (uVar3 == 5) {
                        uVar4 = 0xf6d;
                    }
                    else {
                        if (uVar3 != 6) goto code_r0x0001f0c9;
                        uVar4 = 0xf6e;
                    }
                }
                else if (uVar3 == 8) {
                    uVar4 = 0xf70;
                }
                else if (uVar3 == 9) {
                    uVar4 = 0xf71;
                }
                else if (uVar3 == 10) {
                    uVar4 = 0xf72;
                }
                else if (uVar3 == 0xb) {
                    uVar4 = 0xf73;
                }
                else if (uVar3 == 0xc) {
                    uVar4 = 0xf74;
                }
                else if (uVar3 == 0xd) {
                    uVar4 = 0xf75;
                }
                else {
                    if (uVar3 != 0xe) goto code_r0x0001f0c9;
                    uVar4 = 0xf76;
                }
            }
            else if (uVar3 < 0x18) {
                if (uVar3 == 0x17) {
                    uVar4 = 0xf7f;
                }
                else if (uVar3 == 0x10) {
                    uVar4 = 0xf78;
                }
                else if (uVar3 == 0x11) {
                    uVar4 = 0xf79;
                }
                else if (uVar3 == 0x12) {
                    uVar4 = 0xf7a;
                }
                else if (uVar3 == 0x13) {
                    uVar4 = 0xf7b;
                }
                else if (uVar3 == 0x14) {
                    uVar4 = 0xf7c;
                }
                else if (uVar3 == 0x15) {
                    uVar4 = 0xf7d;
                }
                else {
                    if (uVar3 != 0x16) goto code_r0x0001f0c9;
                    uVar4 = 0xf7e;
                }
            }
            else if (uVar3 == 0x18) {
                uVar4 = 0xf80;
            }
            else if (uVar3 == 0x19) {
                uVar4 = 0xf81;
            }
            else if (uVar3 == 0x1a) {
                uVar4 = 0xf82;
            }
            else if (uVar3 == 0x1b) {
                uVar4 = 0xf83;
            }
            else if (uVar3 == 0x1c) {
                uVar4 = 0xf84;
            }
            else if (uVar3 == 0x1d) {
                uVar4 = 0xf85;
            }
            else {
                if (uVar3 != 0x1e) goto code_r0x0001f0c9;
                uVar4 = 0xf86;
            }
            if (*pcVar5 == '\x17') {
                fcn.000107d8(arg1,uVar4,0x3f8d8,0x40830);
            }
            else {
                fcn.000107d8(arg1,uVar4,0x40850,0);
            }
            uVar3 = uVar3 + 1;
            pcVar5 = pcVar5 + 0xc;
        } while (uVar3 < 0x1f);
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0003207c @ 0x3207c */

//WARNING: Type propagation algorithm not settling

int64_t fcn.0003207c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t arg1_00;
    int16_t iVar1;
    int16_t *piVar2;
    uchar *puVar3;
    int64_t arg1_01;
    uchar *arg1_02;
    uchar auStack_48 [64];
    
    arg1_02 = auStack_48;
    puVar3 = fcn.00032d3c(arg1_02,0x3c,0x42480,arg2);
    if (arg1 != 0) {
        iVar1 = *arg1;
        piVar2 = arg1;
        arg1_02 = NULL;
        while (iVar1 != 0) {
            piVar2 = piVar2 + 1;
            arg1_02 = arg1_02 + 1;
            iVar1 = *piVar2;
        }
        puVar3 = puVar3 + arg1_02;
    }
    arg1_00 = puVar3 * 2 + 2;
    arg1_01 = fcn.00032c10(arg1_02,arg1_00);
    if (arg1_01 != 0) {
        if (arg1 != 0) {
            fcn.00034080(arg1_01,arg1_00 >> 1,arg1);
            (**(*0x44e00 + 0x48))(arg1);
        }
        fcn.00034080(arg1_01,arg1_00 >> 1,auStack_48);
    }
    return arg1_01;
}


/* fcn.00032210 @ 0x32210 */

ulong fcn.00032210(void)

{
    char cVar1;
    
    cVar1 = fcn.000321b0();
    if ((((cVar1 != '\x02') && (cVar1 = fcn.000321b0(), cVar1 != '\x05')) && (cVar1 = fcn.000321b0(), cVar1 != '\x06')
        ) && (cVar1 = fcn.000321b0(), cVar1 != '\x03')) {
        return 0;
    }
    return 1;
}


/* fcn.000321b0 @ 0x321b0 */

void fcn.000321b0(void)

{
    if (*0x3ea31 == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x3ea31 = '\x05';
        }
        else {
            *0x3ea31 = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


/* fcn.0001ff54 @ 0x1ff54 */

void fcn.0001ff54(ulong noname_0,int64_t arg1)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    ulong uVar13;
    bool bVar14;
    bool bVar15;
    
    iVar4 = fcn.0003822c(0x3daf0);
    uVar10 = 0;
    if ((iVar4 == 0) || (iVar4 = iVar4 + 0x18, iVar4 == 0)) {
        return;
    }
    uVar8 = 0x1c;
    uVar13 = 1;
    uVar11 = uVar10;
    do {
        uVar1 = fcn.000321b0();
        uVar3 = uVar8;
        uVar9 = uVar10;
        uVar6 = uVar1 - 3;
        uVar12 = uVar13;
        if (uVar6 == 0) {
code_r0x0001ffa8:
            uVar2 = 0xc;
        }
        else {
            uVar2 = uVar3;
            if (uVar6 != uVar12) {
                if (uVar6 - uVar12 == uVar12) goto code_r0x0001ffa8;
code_r0x0002002e:
                uVar1 = fcn.000321b0();
                uVar6 = uVar1 - 3;
                if ((uVar6 == 0) || ((uVar2 = uVar3, uVar6 != uVar12 && (uVar2 = uVar9, uVar6 - uVar12 == uVar12)))) {
                    uVar2 = 0xc;
                }
                if (uVar3 <= uVar2) {
                    return;
                }
                fcn.0003d4b0(arg1 + 0x1d + uVar2,CONCAT71(uVar3 - uVar2 >> 8,5),uVar3 - uVar2);
                return;
            }
        }
        uVar6 = uVar11;
        if (uVar2 <= uVar6) goto code_r0x0002002e;
        uVar3 = uVar12 << (uVar11 & 0x1f);
        uVar1 = uVar13;
        if ((*(iVar4 + 9) & uVar3) == 0) {
            if ((*(iVar4 + 0xd) & uVar3) == 0) {
                *((uVar11 & 0xffffffff) + 0x1d + arg1) = 3;
            }
            else {
                uVar7 = uVar11 >> 2 & 0x3fffffff;
                uVar3 = uVar6 & 3;
                if (uVar3 == uVar12) {
                    if (*(uVar7 + 1 + iVar4) != uVar10) {
code_r0x00020024:
                        *((uVar11 & 0xffffffff) + 0x1d + arg1) = 2;
                        goto code_r0x0001fffb;
                    }
                }
                else {
                    if (uVar3 == 2) {
                        uVar5 = *(uVar7 + 1 + iVar4) - 3;
                        bVar14 = uVar5 < uVar1;
                        bVar15 = uVar5 == uVar1;
                    }
                    else {
                        if (uVar3 != 3) goto code_r0x0001fff3;
                        uVar1 = *(uVar7 + 1 + iVar4) - 2;
                        bVar14 = uVar1 < 2;
                        bVar15 = uVar1 == 2;
                    }
                    if (bVar14 || bVar15) goto code_r0x00020024;
                }
code_r0x0001fff3:
                *((uVar11 & 0xffffffff) + 0x1d + arg1) = uVar10;
            }
        }
        else {
            *((uVar11 & 0xffffffff) + 0x1d + arg1) = uVar1;
        }
code_r0x0001fffb:
        uVar11 = uVar6 + uVar12;
    } while( true );
}


/* fcn.0001f688 @ 0x1f688 */

//WARNING: Variable defined which should be unmapped: var_1bh
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h
//WARNING: Variable defined which should be unmapped: var_39h

void fcn.0001f688(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int16_t *arg1_00;
    char *pcVar9;
    char *pcVar10;
    uint16_t uVar11;
    uchar *arg4;
    char *pcVar12;
    uint auStackX_18 [2];
    uint32_t auStackX_20 [2];
    int32_t var_77h;
    int64_t var_7fh;
    char *pcStack_d8;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar auStack_c0 [8];
    int64_t iStack_b8;
    int64_t iStack_b0;
    int64_t iStack_a8;
    int64_t iStack_a0;
    char *pcStack_98;
    int64_t iStack_90;
    uchar auStack_88 [7];
    uint32_t var_79h;
    uchar uStack_7a;
    int64_t var_71h;
    int64_t var_69h;
    int64_t var_61h;
    int64_t var_59h;
    uint32_t var_51h;
    uint32_t var_49h;
    uint32_t var_41h;
    int64_t var_39h;
    int64_t var_31h;
    int64_t var_29h;
    int8_t var_1bh;
    
    pcVar12 = NULL;
    auStackX_18[0] = 0;
    if (*0x44cf8 == '\0') {
        iVar6 = (**(*0x44e00 + 0x138))(2,0x3d870,0,&pcStack_d8,&iStack_d0);
        pcVar10 = NULL;
        if (iVar6 < 0) {
            pcStack_d8 = pcVar12;
        }
        if (pcStack_d8 != NULL) {
            do {
                (**(*0x44e00 + 0x98))(*(iStack_d0 + pcVar10 * 8),0x3d870,&iStack_b8);
                (**(iStack_b8 + 0x70))(iStack_b8,&var_51h + 1,&iStack_b0,&iStack_a8,&iStack_a0);
                if (((iStack_b0 == 0) && (iStack_a8 == 0x17)) && (iStack_a0 == 0)) {
                    (**(*0x44e00 + 0x108))(*(iStack_d0 + pcVar10 * 8),0,0,1);
                }
                pcVar10 = pcVar10 + 1;
            } while (pcVar10 < pcStack_d8);
        }
        if (iStack_d0 != 0) {
            (**(*0x44e00 + 0x48))();
        }
        *0x44cf8 = '\x01';
        iVar6 = fcn.00032ba4(0x100);
        if (iVar6 != 0) {
            iVar7 = fcn.00032ba4(0x40);
            iStack_90 = iVar7;
            if (iVar7 == 0) {
                iVar7 = iVar6;
            }
            else {
                iVar8 = (**(*0x44e00 + 0x138))(2,0x3d630,0,&pcStack_d8,&iStack_d0);
                pcVar10 = NULL;
                if (iVar8 < 0) {
                    pcStack_d8 = pcVar12;
                }
                if (pcStack_d8 != NULL) {
                    do {
                        (**(*0x44e00 + 0x98))(*(iStack_d0 + pcVar10 * 8),0x3d860,&pcStack_98);
                        for (pcVar9 = pcStack_98; *pcVar9 != '\x7f'; pcVar9 = pcVar9 + *(pcVar9 + 2)) {
                            if ((*pcVar9 == '\x01') && (pcVar9[1] == '\x01')) {
                                pcVar12 = pcVar9;
                                break;
                            }
                        }
                        if (((pcVar12 != NULL) && (pcVar12[5] == '\x17')) && (pcVar12[4] == '\0')) {
                            (**(*0x44e00 + 0x98))(*(iStack_d0 + pcVar10 * 8),0x3d630,&iStack_c8);
                            (**(iStack_c8 + 0x28))(iStack_c8,auStackX_20,auStack_c0);
                            uVar2 = *(auStackX_20[0] * 2 + 0x40a20);
                            uVar3 = *(auStackX_20[0] * 2 + 0x40a30);
                            arg1_00 = fcn.00032ba4(0x200);
                            if (arg1_00 == NULL) {
                                return;
                            }
                            fcn.00010340(arg1_00,0x200);
                            auStackX_18[0] = 0x200;
                            (**(iStack_c8 + 0x18))(iStack_c8,arg1_00,auStackX_18);
                            fcn.00010340(auStack_88,0x2a);
                            if (auStack_88 != arg1_00 + 0x1b) {
                                section..text(auStack_88,arg1_00 + 0x1b,0x28);
                            }
                            iVar7 = iStack_90;
                            uVar11 = 0;
                            uVar4 = 1;
                            do {
                                uVar1 = auStack_88[uVar11];
                                auStack_88[uVar11] = auStack_88[uVar4];
                                uVar5 = (uVar11 + 2) + 1;
                                auStack_88[uVar4] = uVar1;
                                uVar11 = uVar11 + 2;
                                uVar4 = uVar5;
                            } while (uVar5 < 0x28);
                            uStack_7a = 0;
                            if (*arg1_00 < 0) {
                                arg4 = auStack_88;
                                fcn.00032d6c(iVar6,0x100,0x40920,arg4);
                                pcVar9 = "  N/A  ";
                            }
                            else {
                                arg4 = auStack_88;
                                fcn.00032d6c(iVar6,0x100,0x408f0,arg4);
                                if ((arg1_00[0x4c] == -1) || ((*(arg1_00 + 0x4e) & 0x40) == 0)) {
                                    pcVar9 = "NOT SUPPORTED";
                                }
                                else {
                                    pcVar9 = "SUPPORTED";
                                }
                            }
                            fcn.00032d6c(iVar7,0x40,pcVar9,arg4);
                            fcn.000107d8(arg1,uVar2,0x406b4,iVar6);
                            fcn.000107d8(arg1,uVar3,0x406b4,iVar7);
                            (**(*0x44e00 + 0x48))(arg1_00);
                        }
                        pcVar10 = pcVar10 + 1;
                    } while (pcVar10 < pcStack_d8);
                }
                if (iStack_d0 != 0) {
                    (**(*0x44e00 + 0x48))();
                }
                (**(*0x44e00 + 0x48))(iVar6);
            }
            (**(*0x44e00 + 0x48))(iVar7);
        }
    }
    return;
}


/* fcn.0001feac @ 0x1feac */

void fcn.0001feac(int64_t arg1)

{
    char cVar1;
    uchar uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uchar *puVar8;
    bool bVar9;
    
    iVar3 = fcn.0003822c(0x3daf0);
    uVar7 = 0;
    if ((iVar3 != 0) && (iVar3 != -0x18)) {
        uVar5 = *(iVar3 + 0x2d);
        puVar8 = arg1 + 0x50;
        *(arg1 + 0x4f) = 1;
        *(arg1 + 0x6b) = uVar5 >> 0x11 & 1;
        uVar6 = uVar7;
        do {
            uVar5 = uVar6 + 1;
            uVar6 = uVar5;
            *puVar8 = 1;
            puVar8 = puVar8 + 1;
        } while (uVar5 < 2);
        uVar6 = uVar7;
        while( true ) {
            cVar1 = fcn.00032210();
            uVar5 = uVar6;
            if ((-(cVar1 != '\0') & 3) + 3 <= uVar5) break;
            if (uVar5 < 3) {
                uVar2 = 1;
            }
            else if (uVar5 < 6) {
                uVar2 = fcn.00032210();
            }
            else {
                uVar2 = uVar7;
            }
            uVar4 = uVar6 & 0xffffffff;
            uVar6 = uVar6 + 1;
            *(uVar4 + 0x52 + arg1) = uVar2;
        }
        arg1 = arg1 + 0x58;
        bVar9 = uVar7 < 4;
        do {
            uVar5 = uVar7 + 1;
            uVar7 = uVar5;
            *arg1 = bVar9;
            arg1 = arg1 + 1;
            bVar9 = true;
        } while (uVar5 < 4);
    }
    return;
}


/* fcn.000321ec @ 0x321ec */

uchar fcn.000321ec(void)

{
    char cVar1;
    uchar uVar2;
    
    cVar1 = fcn.000321b0();
    uVar2 = 1;
    if (cVar1 != '\x01') {
        uVar2 = 1;
        cVar1 = fcn.000321b0();
        if (cVar1 != '\x04') {
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.00020180 @ 0x20180 */

void fcn.00020180(int64_t arg1)

{
    int16_t iVar1;
    char cVar2;
    int64_t arg1_00;
    char *pcVar3;
    char *arg4;
    uchar auStackX_10 [24];
    
    arg1_00 = arg1;
    cVar2 = fcn.000321b0();
    pcVar3 = NULL;
    if (cVar2 == '\x03') {
        arg4 = "PCH-N";
    }
    else if (cVar2 == '\x04') {
        arg4 = "PCH-S";
    }
    else if (cVar2 == '\x05') {
        arg4 = "PCH-P";
    }
    else if (cVar2 == '\x06') {
        arg4 = "PCH-M";
    }
    else {
        arg4 = pcVar3;
    }
    fcn.000107d8(arg1_00,0x1a30,0x406b4,arg4);
    if (*0x3ea30 == 0xff) {
        *0x3ea30 = *0xc00f8008;
    }
    fcn.00032d6c(auStackX_10,3,0x424b8,(*0x3ea30 >> 4) + 0x41);
    fcn.000107d8(arg1,0x1a36,0x406b4,auStackX_10);
    iVar1 = *0x3ea40;
    do {
        if (iVar1 == -1) {
            pcVar3 = "Undefined SKU";
code_r0x00020288:
            fcn.000107d8(arg1,0x1a33,0x406b4,pcVar3);
            return;
        }
        if (*0xc00f8002 == iVar1) {
            pcVar3 = *(pcVar3 * 0x10 + 0x3ea48);
            goto code_r0x00020288;
        }
        pcVar3 = pcVar3 + 1;
        iVar1 = *(pcVar3 * 0x10 + 0x3ea40);
    } while( true );
}


/* fcn.00020074 @ 0x20074 */

void fcn.00020074(int64_t arg1)

{
    int64_t iVar1;
    uchar auStackX_10 [8];
    uchar auStackX_18 [16];
    
    iVar1 = fcn.0003822c(0x3d990);
    if (iVar1 != 0) {
        fcn.00032d6c(auStackX_10,3,0x40a04,*(iVar1 + 0x19));
        fcn.00032d6c(auStackX_18,3,0x40a04,*(iVar1 + 0x1a));
        fcn.000107d8(arg1,0x1a44,0x406b4,auStackX_10);
        fcn.000107d8(arg1,0x1a47,0x406b4,auStackX_18);
        fcn.000107d8(arg1,0x1a4a,0x404e0,*(iVar1 + 0x22));
        fcn.000107d8(arg1,0x1a4d,0x404e0,*(iVar1 + 0x2a));
    }
    return;
}


/* fcn.0001fb04 @ 0x1fb04 */

void fcn.0001fb04(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    char *pcVar5;
    uint auStackX_10 [2];
    ulong uStackX_18;
    uchar auStack_cc8 [1735];
    uchar uStack_601;
    
    auStackX_10[0] = 0;
    uStackX_18 = 0xca9;
    iVar2 = (**(*0x44e10 + 0x48))(0x3ffe0,0x3d8f0,auStackX_10,&uStackX_18,auStack_cc8);
    if (iVar2 < 0) {
        auStackX_10[0] = 3;
    }
    *((*0xc00fd010 & 0xfffff000) + 0xb4) = 0;
    uVar3 = *0xc00fd010 & 0xfffff000;
    *(uVar3 + 0xb4) = 0x1000;
    uVar3 = *(uVar3 + 0xb8);
    pcVar5 = "Supported";
    uVar4 = *0xc00fd010 & 0xfffff000;
    *(uVar4 + 0xb4) = 4;
    uVar4 = *(uVar4 + 0xb8) >> 8 & 3;
    if ((uVar3 & 0x100000) == 0) {
        pcVar5 = "Not supported";
    }
    fcn.000107d8(arg1,0x1a5f,0x406b4,pcVar5);
    uVar1 = uVar3 >> 0x1b & 7;
    if (uVar1 == 0) {
        pcVar5 = 0x40958;
    }
    else if (uVar1 == 1) {
        pcVar5 = "50 MHz";
    }
    else if (uVar1 == 4) {
        pcVar5 = "25 MHz";
    }
    else if (uVar1 == 6) {
        pcVar5 = "14 MHz";
    }
    else {
        pcVar5 = "Invalid Setting";
    }
    fcn.000107d8(arg1,0x1a62,0x406b4,pcVar5);
    uVar1 = uVar3 >> 0x18 & 7;
    if (uVar1 == 0) {
        pcVar5 = 0x40958;
    }
    else if (uVar1 == 1) {
        pcVar5 = "50 MHz";
    }
    else if (uVar1 == 4) {
        pcVar5 = "25 MHz";
    }
    else if (uVar1 == 6) {
        pcVar5 = "14 MHz";
    }
    else {
        pcVar5 = "Invalid Setting";
    }
    fcn.000107d8(arg1,0x1a65,0x406b4,pcVar5);
    uVar1 = uVar3 >> 0x15 & 7;
    if (uVar1 == 0) {
        pcVar5 = 0x40958;
    }
    else if (uVar1 == 1) {
        pcVar5 = "50 MHz";
    }
    else if (uVar1 == 4) {
        pcVar5 = "25 MHz";
    }
    else if (uVar1 == 6) {
        pcVar5 = "14 MHz";
    }
    else {
        pcVar5 = "Invalid Setting";
    }
    fcn.000107d8(arg1,0x1a68,0x406b4,pcVar5);
    pcVar5 = "Supported";
    if ((uVar3 & 0x100000) == 0) {
        pcVar5 = "Not supported";
    }
    fcn.000107d8(arg1,0x1a6b,0x406b4,pcVar5);
    if (uVar4 == 0) {
        fcn.000107d8(arg1,0x1a6e,0x406b4,0x40988);
        uStack_601 = 0;
code_r0x0001fd9f:
        if (uVar4 != 1) goto code_r0x0001fe10;
    }
    else {
        if (uVar4 != 1) {
            fcn.000107d8(arg1,0x1a6e,0x406b4,0x409a8);
            goto code_r0x0001fd9f;
        }
        fcn.000107d8(arg1,0x1a6e,0x406b4,0x40998);
        uStack_601 = 1;
    }
    uVar4 = uVar3 & 0xf0;
    if (uVar4 < 5) {
        if (uVar4 == 0) {
            pcVar5 = "512 KB";
        }
        else if (uVar4 == 1) {
            pcVar5 = "1 MB";
        }
        else if (uVar4 == 2) {
            pcVar5 = "2 MB";
        }
        else {
            if (uVar4 != 3) goto code_r0x0001fdf6;
            pcVar5 = "4 MB";
        }
    }
    else {
        pcVar5 = "Reserved";
        if (6 < uVar4 - 8) {
code_r0x0001fdf6:
            pcVar5 = "Not present";
        }
    }
    fcn.000107d8(arg1,0x1a71,0x406b4,pcVar5);
code_r0x0001fe10:
    uVar3 = uVar3 & 0xf;
    if (uVar3 == 0) {
        pcVar5 = "512 KB";
    }
    else if (uVar3 == 1) {
        pcVar5 = "1 MB";
    }
    else if (uVar3 == 2) {
        pcVar5 = "2 MB";
    }
    else if (uVar3 == 3) {
        pcVar5 = "4 MB";
    }
    else if (uVar3 == 4) {
        pcVar5 = "8 MB";
    }
    else if (uVar3 == 5) {
        pcVar5 = "16 MB";
    }
    else if (uVar3 == 6) {
        pcVar5 = "32 MB";
    }
    else {
        if (uVar3 != 7) {
            return;
        }
        pcVar5 = "64 MB";
    }
    fcn.000107d8(arg1,0x1a74,0x406b4,pcVar5);
    return;
}


/* fcn.000327dc @ 0x327dc */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.000327dc(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t *arg4)

{
    int64_t iVar1;
    int64_t arg2_00;
    char **ppcVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t *puVar5;
    uint32_t uStack_48;
    uchar auStack_44 [4];
    char *pcStack_40;
    uint32_t var_30h;
    uint32_t var_2ch;
    int64_t var_28h;
    uint32_t var_20h;
    uint32_t var_1ch;
    uint32_t var_bp_18h;
    int32_t var_14h;
    int64_t var_bp_10h;
    
    arg2_00 = arg2;
    iVar1 = fcn.00032a80(arg1,arg2);
    if (iVar1 < 0) {
        return iVar1;
    }
    iVar3 = arg1;
    uVar4 = arg2;
    if (iVar3 == 1) {
        uStack_48 = uVar4 | 0x80000000;
        uVar4 = *0xc0000048 & 0xfffffffe;
        puVar5 = uVar4 + 0x5da4;
        *puVar5 = uStack_48;
        fcn.00032a80(1,arg2_00);
        uStack_48 = *puVar5;
        uVar4 = uVar4 + 0x5da0;
        auStack_44 = *uVar4;
        fcn.000382d8(10,arg2_00);
        var_28h._0_4_ = *puVar5;
        var_28h._4_4_ = *uVar4;
        if ((uStack_48 != var_28h) && (auStack_44 != var_28h._4_4_)) {
            return -0x7ffffffffffffffe;
        }
        *arg4 = uStack_48 & 0xff;
    }
    else {
        if (iVar3 == 2) {
            var_30h = *arg3;
            var_2ch = uVar4 | 0x80000000;
            section..text(&pcStack_40,&var_30h,8);
            wrmsr(0x150,(pcStack_40 >> 0x20) << 0x20 | pcStack_40 & 0xffffffff);
            fcn.00032a80(2,pcStack_40 >> 0x20);
            pcStack_40 = rdmsr(0x150);
            ppcVar2 = &pcStack_40;
            section..text(&var_30h,ppcVar2,8);
            fcn.000382d8(10,ppcVar2);
            pcStack_40 = rdmsr(0x150);
            section..text(&var_20h,&pcStack_40,8);
            if ((var_2ch != var_1ch) && (var_30h != var_20h)) {
                return -0x7ffffffffffffffe;
            }
            *arg4 = var_2ch & 0xff;
            if (arg3 == &var_30h) {
                return iVar1;
            }
            ppcVar2 = &var_30h;
            goto code_r0x00032a5a;
        }
        if (iVar3 != 3) {
            return -0x7ffffffffffffffd;
        }
        auStack_44 = *arg3;
        uStack_48 = uVar4 | 0x80000000;
        wrmsr(0x608,auStack_44);
        wrmsr(0x607,uStack_48);
        fcn.00032a80(3,0);
        pcStack_40 = rdmsr(0x607);
        section..text(&uStack_48,&pcStack_40,4);
        pcStack_40 = rdmsr(0x608);
        ppcVar2 = &pcStack_40;
        section..text(auStack_44,ppcVar2,4);
        fcn.000382d8(10,ppcVar2);
        pcStack_40 = rdmsr(0x607);
        section..text(&var_28h,&pcStack_40,4);
        pcStack_40 = rdmsr(0x608);
        section..text(&var_28h + 4,&pcStack_40,4);
        if ((uStack_48 != var_28h) && (auStack_44 != var_28h._4_4_)) {
            return -0x7ffffffffffffffe;
        }
        *arg4 = uStack_48 & 0xff;
    }
    if (arg3 == auStack_44) {
        return iVar1;
    }
    ppcVar2 = auStack_44;
code_r0x00032a5a:
    section..text(arg3,ppcVar2,4);
    return iVar1;
}


/* fcn.000103a0 @ 0x103a0 */

uint64_t fcn.000103a0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint *in_stack_00000028;
    uint *in_stack_00000030;
    
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
    if (in_stack_00000028 != NULL) {
        *in_stack_00000028 = puVar1[3];
    }
    if (arg3 != 0) {
        *arg3 = uVar2;
    }
    if (arg4 != 0) {
        *arg4 = uVar3;
    }
    if (in_stack_00000030 != NULL) {
        *in_stack_00000030 = uVar4;
    }
    return arg1 & 0xffffffff;
}


/* fcn.00032660 @ 0x32660 */

void fcn.00032660(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    
    if ((arg1 != 0) || (arg2 != 0)) {
        uVar1 = rdmsr(0xce);
        if (arg1 != 0) {
            *arg1 = uVar1 >> 8;
        }
        if (arg2 != 0) {
            *arg2 = uVar1 >> 0x28;
        }
    }
    return;
}


/* fcn.0003269c @ 0x3269c */

ulong fcn.0003269c(int64_t arg1)

{
    uint8_t uVar1;
    uchar uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    unkbyte7 Var5;
    unkbyte7 extraout_RAX;
    ushort uVar6;
    ushort uVar7;
    
    uVar1 = 0;
    uVar3 = fcn.000104e0();
    uVar4 = fcn.00010450();
    if (arg1 < 0x80) {
        uVar7 = 0x70;
        uVar1 = in(0x70);
        uVar6 = 0x71;
        *0xfdc431fc = *0xfdc431fc & 0xfffdffff;
        uVar4 = *0xfdc431fc;
        uVar1 = uVar1 & 0x80;
    }
    else {
        uVar7 = 0x72;
        uVar6 = 0x73;
    }
    Var5 = uVar4 >> 8;
    out(uVar7,arg1 & 0x7f | uVar1);
    uVar2 = in(uVar6);
    if ((uVar3 >> 9 & 1) != 0) {
        fcn.00010440();
        Var5 = extraout_RAX;
    }
    return CONCAT71(Var5,uVar2);
}


/* fcn.00032738 @ 0x32738 */

uint64_t fcn.00032738(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ushort uVar4;
    ushort uVar5;
    
    uVar1 = 0;
    uVar2 = fcn.000104e0();
    fcn.00010450();
    if (arg1 < 0x80) {
        uVar5 = 0x70;
        uVar1 = in(0x70);
        uVar4 = 0x71;
        *0xfdc431fc = *0xfdc431fc & 0xfffdffff;
        uVar1 = uVar1 & 0x80;
    }
    else {
        uVar5 = 0x72;
        uVar4 = 0x73;
    }
    out(uVar5,arg1 & 0x7f | uVar1);
    uVar3 = arg2 & 0xff;
    out(uVar4,arg2);
    if ((uVar2 >> 9 & 1) != 0) {
        uVar3 = fcn.00010440(uVar4,uVar4);
    }
    return uVar3;
}


/* fcn.00032510 @ 0x32510 */

uint32_t fcn.00032510(void)

{
    uint32_t auStackX_8 [8];
    
    fcn.000103d0(1,auStackX_8,0,0);
    return auStackX_8[0] & 0xfff0ff0;
}


/* fcn.00021130 @ 0x21130 */

void fcn.00021130(void)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint uVar3;
    uint32_t uStackX_8;
    uint32_t uStackX_14;
    
    fcn.000103a0(7,0,0,0);
    uVar1 = rdmsr(0x1ad);
    if (*0x44d10 == '\0') {
        *0x44d10 = uVar1;
    }
    fcn.000107d8(*0x46b98,0x686,0x3f98c,uVar1 & 0xff);
    if (*0x44d11 == '\0') {
        *0x44d11 = (uVar1 & 0xffffffff) >> 8;
    }
    fcn.000107d8(*0x46b98,0x689,0x3f98c,(uVar1 & 0xffffffff) >> 8 & 0xff);
    if (*0x44d12 == '\0') {
        *0x44d12 = (uVar1 & 0xffffffff) >> 0x10;
    }
    fcn.000107d8(*0x46b98,0x68c,0x3f98c,(uVar1 & 0xffffffff) >> 0x10 & 0xff);
    if (*0x44d13 == '\0') {
        *0x44d13 = uVar1 >> 0x18;
    }
    fcn.000107d8(*0x46b98,0x68f,0x3f98c,uVar1 >> 0x18 & 0xff);
    uStackX_14 = uVar1 >> 0x20;
    if (*0x44d14 == '\0') {
        *0x44d14 = uVar1 >> 0x20;
    }
    fcn.000107d8(*0x46b98,0x692,0x3f98c,uStackX_14 & 0xff);
    if (*0x44d15 == '\0') {
        *0x44d15 = uVar1 >> 0x28;
    }
    fcn.000107d8(*0x46b98,0x695,0x3f98c,uStackX_14 >> 8 & 0xff);
    if (*0x44d16 == '\0') {
        *0x44d16 = uVar1 >> 0x30;
    }
    fcn.000107d8(*0x46b98,0x698,0x3f98c,uStackX_14 >> 0x10 & 0xff);
    if (*0x44d17 == '\0') {
        *0x44d17 = uVar1 >> 0x38;
    }
    fcn.000107d8(*0x46b98,0x69b,0x3f98c,uStackX_14 >> 0x18);
    uVar1 = rdmsr(0x1ae);
    fcn.000107d8(*0x46b98,0x66e,0x3f98c,uVar1 & 0xff);
    fcn.000107d8(*0x46b98,0x671,0x3f98c,uVar1 >> 8 & 0xff);
    fcn.000107d8(*0x46b98,0x674,0x3f98c,(uVar1 & 0xffffffff) >> 0x10 & 0xff);
    fcn.000107d8(*0x46b98,0x677,0x3f98c,uVar1 >> 0x18 & 0xff);
    uStackX_14 = uVar1 >> 0x20;
    fcn.000107d8(*0x46b98,0x67a,0x3f98c,uStackX_14 & 0xff);
    fcn.000107d8(*0x46b98,0x67d,0x3f98c,uStackX_14 >> 8 & 0xff);
    fcn.000107d8(*0x46b98,0x680,0x3f98c,uStackX_14 >> 0x10 & 0xff);
    fcn.000107d8(*0x46b98,0x683,0x3f98c,uStackX_14 >> 0x18);
    uVar2 = uStackX_8 >> 0xf & 1;
    if ((((uVar2 == 0) || (*0x469ff == '\0')) || (*0xc00000fc == '\x04')) || (*0xc00000fc == '\x03')) {
        if (uVar2 != 0) {
            return;
        }
        if (*0x469ff == '\0') {
            return;
        }
        if (*0xc00000fc == '\x04') {
            return;
        }
        if (*0xc00000fc == '\x03') {
            return;
        }
        uVar1 = rdmsr(0x1ad);
        fcn.000107d8(*0x46b98,0x6b6,0x3f98c,uVar1 & 0xff);
        fcn.000107d8(*0x46b98,0x6b9,0x3f98c,uVar1 >> 8 & 0xff);
        fcn.000107d8(*0x46b98,0x6bc,0x3f98c,(uVar1 & 0xffffffff) >> 0x10 & 0xff);
        fcn.000107d8(*0x46b98,0x6bf,0x3f98c,uVar1 >> 0x18 & 0xff);
        uStackX_14 = uVar1 >> 0x20;
        fcn.000107d8(*0x46b98,0x6c2,0x3f98c,uStackX_14 & 0xff);
        fcn.000107d8(*0x46b98,0x6c5,0x3f98c,uStackX_14 >> 8 & 0xff);
        fcn.000107d8(*0x46b98,0x6c8,0x3f98c,uStackX_14 >> 0x10 & 0xff);
        fcn.000107d8(*0x46b98,0x6cb,0x3f98c,uStackX_14 >> 0x18);
        uVar3 = 0x1ae;
    }
    else {
        uVar1 = rdmsr(0x650);
        fcn.000107d8(*0x46b98,0x6b6,0x3f98c,uVar1 & 0xff);
        fcn.000107d8(*0x46b98,0x6b9,0x3f98c,uVar1 >> 8 & 0xff);
        fcn.000107d8(*0x46b98,0x6bc,0x3f98c,(uVar1 & 0xffffffff) >> 0x10 & 0xff);
        fcn.000107d8(*0x46b98,0x6bf,0x3f98c,uVar1 >> 0x18 & 0xff);
        uStackX_14 = uVar1 >> 0x20;
        fcn.000107d8(*0x46b98,0x6c2,0x3f98c,uStackX_14 & 0xff);
        fcn.000107d8(*0x46b98,0x6c5,0x3f98c,uStackX_14 >> 8 & 0xff);
        fcn.000107d8(*0x46b98,0x6c8,0x3f98c,uStackX_14 >> 0x10 & 0xff);
        fcn.000107d8(*0x46b98,0x6cb,0x3f98c,uStackX_14 >> 0x18);
        uVar3 = 0x651;
    }
    uVar1 = rdmsr(uVar3);
    fcn.000107d8(*0x46b98,0x69e,0x3f98c,uVar1 & 0xff);
    fcn.000107d8(*0x46b98,0x6a1,0x3f98c,uVar1 >> 8 & 0xff);
    fcn.000107d8(*0x46b98,0x6a4,0x3f98c,(uVar1 & 0xffffffff) >> 0x10 & 0xff);
    fcn.000107d8(*0x46b98,0x6a7,0x3f98c,uVar1 >> 0x18 & 0xff);
    uStackX_14 = uVar1 >> 0x20;
    fcn.000107d8(*0x46b98,0x6aa,0x3f98c,uStackX_14 & 0xff);
    fcn.000107d8(*0x46b98,0x6ad,0x3f98c,uStackX_14 >> 8 & 0xff);
    fcn.000107d8(*0x46b98,0x6b0,0x3f98c,uStackX_14 >> 0x10 & 0xff);
    fcn.000107d8(*0x46b98,0x6b3,0x3f98c,uStackX_14 >> 0x18);
    return;
}


/* fcn.00020538 @ 0x20538 */

void fcn.00020538(uint32_t *arg1)

{
    uint64_t uVar1;
    uint auStackX_8 [2];
    uint32_t auStackX_10 [6];
    
    fcn.000327dc(2,0x1c,auStackX_8,auStackX_10);
    uVar1 = *0x44d0c;
    *(*arg1 + uVar1 * 4) = auStackX_8[0];
    *(*(arg1 + 2) + uVar1 * 4) = auStackX_10[0];
    return;
}


/* fcn.0002057c @ 0x2057c */

void fcn.0002057c(int64_t arg1)

{
    uint32_t uStackX_10;
    uchar auStackX_18 [3];
    uchar uStackX_1b;
    
    fcn.000103a0(7,0,0,0);
    if ((uStackX_10 & 0x8000) == 0) {
        *arg1 = 0x40;
    }
    else {
        fcn.000103d0(0x1a,auStackX_18,0,0);
        *arg1 = uStackX_1b;
    }
    return;
}


/* fcn.00023684 @ 0x23684 */

int64_t fcn.00023684(void)

{
    ulong *puVar1;
    int64_t iVar2;
    ulong *puStackX_10;
    
    fcn.00012538(0x2739,0x22a1c);
    fcn.00012538(0x273a,0x22a1c);
    fcn.00012538(0x273b,0x22a1c);
    fcn.00012538(0x273c,0x22a1c);
    fcn.00012538(0x273d,0x22a1c);
    fcn.00012538(0x273e,0x22a1c);
    fcn.00012538(0x273f,0x22a1c);
    fcn.00012538(0x2740,0x22a1c);
    fcn.00012538(0x2731,0x22a1c);
    fcn.00012538(0x2732,0x22a1c);
    fcn.00012538(0x2733,0x22a1c);
    fcn.00012538(0x2734,0x22a1c);
    fcn.00012538(0x2735,0x22a1c);
    fcn.00012538(0x2736,0x22a1c);
    fcn.00012538(0x2737,0x22a1c);
    fcn.00012538(0x2738,0x22a1c);
    fcn.00012538(0x2749,0x22a1c);
    fcn.00012538(0x274a,0x22a1c);
    fcn.00012538(0x274b,0x22a1c);
    fcn.00012538(0x274c,0x22a1c);
    fcn.00012538(0x274d,0x22a1c);
    fcn.00012538(0x274e,0x22a1c);
    fcn.00012538(0x274f,0x22a1c);
    fcn.00012538(0x2750,0x22a1c);
    fcn.00012538(0x2741,0x22a1c);
    fcn.00012538(0x2742,0x22a1c);
    fcn.00012538(0x2743,0x22a1c);
    fcn.00012538(0x2744,0x22a1c);
    fcn.00012538(0x2745,0x22a1c);
    fcn.00012538(0x2746,0x22a1c);
    fcn.00012538(0x2747,0x22a1c);
    fcn.00012538(0x2748,0x22a1c);
    fcn.00012538(0x272b,0x22a1c);
    fcn.00012538(0x272f,0x22a1c);
    fcn.00012538(0x2725,0x22a1c);
    fcn.00012538(0x2728,0x20ac0);
    fcn.00012538(0x2751,0x23050);
    fcn.00012538(0x2752,0x23050);
    fcn.00012538(0x2754,0x23050);
    fcn.00012538(0x2756,0x23050);
    fcn.00012538(0x2753,0x23050);
    fcn.00012538(0x2755,0x23050);
    puStackX_10 = NULL;
    puVar1 = *0x47000;
    while( true ) {
        if (puVar1 == 0x47000) {
            iVar2 = (**(*0x44e00 + 0x40))(4,0x20,&puStackX_10);
            if (-1 < iVar2) {
                *(puStackX_10 + 2) = 0x2757;
                puStackX_10[3] = 0x23050;
                *puStackX_10 = 0x47000;
                puStackX_10[1] = *0x47008;
                **0x47008 = puStackX_10;
                *0x47008 = puStackX_10;
            }
            return iVar2;
        }
        if (*(puVar1 + 2) == 0x2757) break;
        puVar1 = *puVar1;
    }
    return -0x7ffffffffffffffd;
}


/* fcn.000205e0 @ 0x205e0 */

void fcn.000205e0(int64_t arg1,int64_t arg2)

{
    int64_t iStackX_8;
    uint64_t uStackX_10;
    ulong auStackX_18 [2];
    
    auStackX_18[0] = 0x37;
    iStackX_8 = arg1;
    uStackX_10 = arg2;
    (**(*0x44e10 + 0x48))(0x40a40,0x3d8f0,&iStackX_8,auStackX_18,0x46ba0);
    auStackX_18[0] = 0x3c1;
    (**(*0x44e10 + 0x48))(0x40a68,0x3d730,&uStackX_10,auStackX_18,0x467d0);
    if (*0x46b4e == '\0') {
        *0x46b4e = '\x01';
        if (*0x46ba1 != '\x01') {
            *0x46b4f = 1;
            *0x467e3 = 1;
        }
        else {
            *0x46b4f = 2;
            *0x467e3 = 2;
        }
        *0x467e6 = *0x46ba1 == '\x01';
        *0x46b50 = *0x467e6;
        (**(*0x44e10 + 0x58))(0x40a68,0x3d730,uStackX_10 & 0xffffffff,auStackX_18[0],0x467d0);
    }
    return;
}


/* fcn.000206c8 @ 0x206c8 */

void fcn.000206c8(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uchar *puVar3;
    int64_t iVar4;
    int64_t iVar5;
    uchar auStackX_8 [8];
    int64_t var_18h_2;
    uint32_t auStackX_18 [2];
    int64_t var_28h;
    int64_t var_30h;
    uint32_t *puVar6;
    ulong uStack_28;
    int64_t var_18h;
    
    puVar6 = auStackX_18;
    var_18h_2 = arg1;
    fcn.000103a0(7,0,0,0);
    var_18h_2 = var_18h_2 & 0xffffffffffffff00;
    uStack_28 = 0x3c1;
    (**(*0x44e10 + 0x48))(0x40a68,0x3d730,&var_28h,&uStack_28,0x467d0,puVar6);
    if (*0x4689c != '\0') {
        return;
    }
    fcn.00032660(&var_18h_2,auStackX_8);
    *0x4689d = var_18h_2;
    *0x4689c = 1;
    uVar1 = rdmsr(0x1ad);
    uVar2 = uVar1 & 0xffffffff;
    iVar5 = 8;
    *0x4689f = uVar2 >> 8;
    *0x468a0 = uVar2 >> 0x10;
    *0x4689e = uVar1;
    *0x468a1 = uVar2 >> 0x18;
    *0x468a3 = uVar1 >> 0x28;
    *0x468a4 = uVar1 >> 0x30;
    *0x468a2 = uVar1 >> 0x20;
    *0x468a5 = uVar1 >> 0x38;
    puVar3 = 0x468a6;
    iVar4 = iVar5;
    do {
        *puVar3 = puVar3[-8];
        puVar3 = puVar3 + 1;
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    uVar1 = rdmsr(0x1ae);
    uVar2 = uVar1 & 0xffffffff;
    *0x468af = uVar2 >> 8;
    *0x468b0 = uVar2 >> 0x10;
    *0x468ae = uVar1;
    *0x468b1 = uVar2 >> 0x18;
    *0x468b3 = uVar1 >> 0x28;
    *0x468b4 = uVar1 >> 0x30;
    *0x468b2 = uVar1 >> 0x20;
    *0x468b5 = uVar1 >> 0x38;
    puVar3 = 0x468b6;
    iVar4 = iVar5;
    do {
        *puVar3 = puVar3[-8];
        puVar3 = puVar3 + 1;
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (((*0x469ff == '\0') || (*0xc00000fc == '\x04')) || (*0xc00000fc == '\x03')) {
        if ((auStackX_18[0] & 0x8000) != 0) goto code_r0x00020a92;
    }
    else if ((auStackX_18[0] & 0x8000) != 0) {
        uVar1 = rdmsr(0x650);
        uVar2 = uVar1 & 0xffffffff;
        *0x468bf = uVar2 >> 8;
        *0x468c0 = uVar2 >> 0x10;
        *0x468be = uVar1;
        *0x468c1 = uVar2 >> 0x18;
        *0x468c3 = uVar1 >> 0x28;
        *0x468c4 = uVar1 >> 0x30;
        *0x468c2 = uVar1 >> 0x20;
        *0x468c5 = uVar1 >> 0x38;
        puVar3 = 0x468c6;
        iVar4 = iVar5;
        do {
            *puVar3 = puVar3[-8];
            puVar3 = puVar3 + 1;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        uVar1 = rdmsr(0x651);
        uVar2 = uVar1 & 0xffffffff;
        *0x468cf = uVar2 >> 8;
        *0x468d0 = uVar2 >> 0x10;
        *0x468d1 = uVar2 >> 0x18;
        *0x468ce = uVar1;
        *0x468d2 = uVar1 >> 0x20;
        *0x468d3 = uVar1 >> 0x28;
        *0x468d4 = uVar1 >> 0x30;
        puVar3 = 0x468d6;
        *0x468d5 = uVar1 >> 0x38;
        do {
            *puVar3 = puVar3[-8];
            puVar3 = puVar3 + 1;
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        goto code_r0x00020a92;
    }
    if (((*0x469ff != '\0') && (*0xc00000fc != '\x04')) && (*0xc00000fc != '\x03')) {
        uVar1 = rdmsr(0x1ad);
        uVar2 = uVar1 & 0xffffffff;
        *0x468bf = uVar2 >> 8;
        *0x468c0 = uVar2 >> 0x10;
        *0x468be = uVar1;
        *0x468c1 = uVar2 >> 0x18;
        *0x468c3 = uVar1 >> 0x28;
        *0x468c4 = uVar1 >> 0x30;
        *0x468c2 = uVar1 >> 0x20;
        *0x468c5 = uVar1 >> 0x38;
        puVar3 = 0x468c6;
        iVar4 = iVar5;
        do {
            *puVar3 = puVar3[-8];
            puVar3 = puVar3 + 1;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        uVar1 = rdmsr(0x1ae);
        uVar2 = uVar1 & 0xffffffff;
        *0x468cf = uVar2 >> 8;
        *0x468d0 = uVar2 >> 0x10;
        *0x468d1 = uVar2 >> 0x18;
        *0x468ce = uVar1;
        *0x468d2 = uVar1 >> 0x20;
        *0x468d3 = uVar1 >> 0x28;
        *0x468d4 = uVar1 >> 0x30;
        puVar3 = 0x468d6;
        *0x468d5 = uVar1 >> 0x38;
        do {
            *puVar3 = puVar3[-8];
            puVar3 = puVar3 + 1;
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
    }
code_r0x00020a92:
    (**(*0x44e10 + 0x58))(0x40a68,0x3d730,var_28h,uStack_28,0x467d0);
    return;
}


/* fcn.00020c14 @ 0x20c14 */

void fcn.00020c14(void)

{
    int64_t iVar1;
    uint auStackX_8 [2];
    ulong auStackX_10 [3];
    
    auStackX_8[0] = 0;
    auStackX_10[0] = 0x3c1;
    iVar1 = (**(*0x44e10 + 0x48))(0x40a68,0x3d730,auStackX_8,auStackX_10,0x467d0);
    if (iVar1 < 0) {
        auStackX_8[0] = 7;
    }
    if ((*0xc00b0000 == -1) || (*0x468e3 = 1, (*0xc00b006c & 2) == 0)) {
        *0x468e3 = 0;
    }
    (**(*0x44e10 + 0x58))(0x40a68,0x3d730,auStackX_8[0],auStackX_10[0],0x467d0);
    return;
}


/* fcn.000217c8 @ 0x217c8 */

//WARNING: Variable defined which should be unmapped: var_dh
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h
//WARNING: Variable defined which should be unmapped: var_39h

void fcn.000217c8(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    char cVar4;
    int iVar5;
    int64_t iVar6;
    char *pcVar7;
    uint16_t uVar8;
    ulong uVar9;
    char *pcVar10;
    uint in_register_00000014;
    uint uVar11;
    uint64_t uVar12;
    char *pcVar13;
    uint64_t uVar14;
    uint32_t uVar15;
    char16_t *pcVar16;
    char *pcVar17;
    uint64_t arg4;
    uchar *arg4_00;
    ulong uStackX_8;
    uint64_t uStackX_10;
    uchar auStackX_18 [8];
    int aiStackX_20 [2];
    int32_t var_6bh;
    int64_t var_77h;
    uint32_t var_7fh;
    uint64_t *puVar18;
    int64_t iStack_f8;
    ulong uStack_f0;
    uchar auStack_e8 [6];
    uint16_t uStack_e2;
    uint8_t uStack_e0;
    uchar uStack_de;
    uint auStack_d8 [2];
    uint *puStack_d0;
    int64_t iStack_c8;
    uint32_t uStack_c0;
    uint uStack_bc;
    uint32_t uStack_b8;
    uint uStack_b4;
    uint auStack_b0 [2];
    uchar auStack_a8 [16];
    ulong uStack_98;
    ulong uStack_90;
    uchar uStack_88;
    int8_t var_7fh_2;
    int64_t var_79h;
    uint32_t var_71h;
    int64_t var_69h;
    int64_t var_61h;
    int64_t var_55h;
    int64_t var_49h;
    int64_t var_39h;
    int64_t var_31h;
    uint32_t var_29h;
    int64_t var_21h;
    uint32_t var_dh;
    
    uStackX_10 = CONCAT44(in_register_00000014,arg2);
    uVar14 = 0;
    uStack_f0 = 0x6d;
    aiStackX_20[0] = 0;
    *0x46fb0 = NULL;
    iVar5 = 0;
    uStackX_8 = arg1;
    iVar6 = (**(*0x44e10 + 0x48))(0x40490,0x3d8f0,0,&uStack_f0,0x46760);
    if (iVar6 < 0) {
        return;
    }
    iVar6 = (**(*0x44e00 + 0x140))(0x3d9c0);
    if (iVar6 < 0) {
        return;
    }
    pcVar10 = 0x1;
    fcn.000103d0(1,0,0,&uStack_c0);
    if ((uStack_c0 & 0x800) != 0) {
        uStack_98 = rdmsr(0xc80);
        iVar5 = uStack_98;
    }
    iVar6 = 0x40a80;
    if (-1 < iVar5) {
        iVar6 = 0x40a88;
    }
    fcn.000107d8(*0x46b98,0x1f2f,0x406b4,iVar6);
    iVar6 = *(iStack_f8 + 0x10);
    if (*(iVar6 + 0x71) == '\0') {
        fcn.000107d8(*0x46b98,0x1b3c,0x406b4,*(iVar6 + 0xc));
        fcn.000107d8(*0x46b98,0x1b3e,0x3fff0,*(*(iStack_f8 + 0x10) + 0x18));
        uVar15 = **(iStack_f8 + 0x10);
    }
    else {
        fcn.000107d8(*0x46b98,0x1b3c,0x406b4,*(iVar6 + 0x67));
        fcn.000107d8(*0x46b98,0x1b3e,0x3fff0,*(*(iStack_f8 + 0x10) + 0x73));
        uVar15 = *(*(iStack_f8 + 0x10) + 0x5b);
    }
    fcn.000107d8(*0x46b98,0x43a,0x40638,uVar15);
    fcn.000107d8(*0x46b98,0x1b44,0x406b4,0x40a08);
    uVar9 = rdmsr(0x8b);
    uVar15 = uVar9 >> 0x20;
    if (uVar15 != 0) {
        fcn.000107d8(*0x46b98,0x1b47,0x40a94,uVar15);
    }
    fcn.000107d8(*0x46b98,0x1b4b,0x40aa0,*(*(iStack_f8 + 0x10) + 0x16));
    fcn.000107d8(*0x46b98,0x1b4c,0x40aa0,*(*(iStack_f8 + 0x10) + 0x71));
    iVar6 = *(iStack_f8 + 0x10);
    if (*(iVar6 + 0x71) == '\0') {
        iVar6 = *(iVar6 + 0xc);
    }
    else {
        iVar6 = *(iVar6 + 0x67);
    }
    fcn.000107d8(*0x46b98,0x438,0x406b4,iVar6);
    do {
        iVar6 = *(iStack_f8 + 0x10);
        iVar2 = *(iVar6 + 0x24);
        iVar3 = uVar14 * 9;
        cVar4 = *(iVar3 + 1 + iVar2);
        if (cVar4 == '\x01') {
            cVar4 = *(iVar3 + 2 + iVar2);
            if (cVar4 == '\x01') {
                cVar4 = *(iVar6 + 0x16);
                uVar15 = *(iVar3 + 3 + iVar2);
                uVar1 = 0x43d;
            }
            else {
                if (cVar4 != '\x02') goto code_r0x00021b48;
                cVar4 = *(iVar6 + 0x16);
                uVar15 = *(iVar3 + 3 + iVar2);
                uVar1 = 0x440;
            }
            arg4 = uVar15;
            uVar12 = uVar1;
            if (cVar4 != '\x01') goto code_r0x00021b38;
code_r0x00021b2b:
            pcVar16 = L"%d KB";
code_r0x00021b2e:
            fcn.000107d8(*0x46b98,uVar12,pcVar16,arg4);
        }
        else if (cVar4 == '\x02') {
            arg4 = *(iVar3 + 3 + iVar2);
            uVar12 = 0x443;
            if (*(iVar6 + 0x16) < 5) goto code_r0x00021b2b;
code_r0x00021b38:
            fcn.000107d8(*0x46b98,uVar12,0x40ae0,arg4);
        }
        else if (cVar4 == '\x03') {
            pcVar16 = L"%d MB";
            arg4 = *(iVar3 + 3 + iVar2) >> 10;
            uVar12 = 0x446;
            goto code_r0x00021b2e;
        }
code_r0x00021b48:
        uVar15 = uVar14 + 1;
        uVar14 = uVar15;
    } while (uVar15 <= *(*(iStack_f8 + 0x10) + 0x2c));
    uVar15 = 0;
    pcVar13 = NULL;
    do {
        iVar6 = *(iStack_f8 + 0x10);
        iVar2 = *(iVar6 + 0x7f);
        iVar3 = uVar15 * 9;
        cVar4 = *(iVar3 + 1 + iVar2);
        if (cVar4 == '\x01') {
            cVar4 = *(iVar3 + 2 + iVar2);
            if (cVar4 == '\x01') {
                cVar4 = *(iVar6 + 0x71);
                uVar14 = *(iVar3 + 3 + iVar2);
                iVar6 = 0x449;
            }
            else {
                if (cVar4 != '\x02') goto code_r0x00021c39;
                cVar4 = *(iVar6 + 0x71);
                uVar14 = *(iVar3 + 3 + iVar2);
                iVar6 = 0x44c;
            }
code_r0x00021bdf:
            if (cVar4 == '\x01') {
                pcVar16 = L"%d KB";
code_r0x00021bcb:
                fcn.000107d8(*0x46b98,iVar6,pcVar16,uVar14);
            }
            else {
                fcn.000107d8(*0x46b98,iVar6,0x40ae0,uVar14);
            }
        }
        else {
            if (cVar4 == '\x02') {
                cVar4 = *(iVar6 + 0x71);
                uVar14 = *(iVar3 + 3 + iVar2);
                iVar6 = 0x44f;
                goto code_r0x00021bdf;
            }
            if (cVar4 == '\x03') {
                uVar14 = *(iVar3 + 3 + iVar2) >> 10;
                iVar6 = 0x452;
                pcVar16 = L"%d MB";
                goto code_r0x00021bcb;
            }
        }
code_r0x00021c39:
        uVar15 = uVar15 + 1;
    } while (uVar15 <= *(*(iStack_f8 + 0x10) + 0x87));
    iVar5 = fcn.00032510();
    if (iVar5 != 0x906a0) {
        if (iVar5 == 0xb06a0) {
            pcVar17 = "RaptorLake";
            goto code_r0x00021c84;
        }
        if (iVar5 != 0xb06e0) {
            pcVar17 = pcVar13;
            goto code_r0x00021c84;
        }
    }
    pcVar17 = "AlderLake";
code_r0x00021c84:
    cVar4 = fcn.0003253c();
    if (cVar4 == '\0') {
        pcVar7 = 0x426a8;
    }
    else if (cVar4 == '\x01') {
        pcVar7 = 0x426b0;
    }
    else if (cVar4 == '\x02') {
        pcVar7 = 0x426ac;
    }
    else if (cVar4 == '\x03') {
        pcVar7 = "Halo";
    }
    else {
        pcVar7 = pcVar13;
    }
    if ((pcVar17 == NULL) || (pcVar7 == NULL)) {
        fcn.000107d8(*0x46b98,0x1b38,0x406b4,0x40658);
    }
    else {
        fcn.000107d8(*0x46b98,0x1b38,0x40af8,pcVar17);
    }
    uStack_f0 = 0x37;
    iVar6 = (**(*0x44e10 + 0x48))(0x40a40,0x3d8f0,&uStack_b4,&uStack_f0,0x46ba0);
    if (-1 < iVar6) {
        uStack_f0 = 0x3c1;
        (**(*0x44e10 + 0x48))(0x40a68,0x3d730,&uStack_bc,&uStack_f0,0x467d0);
        iVar6 = 0x3c1;
        if (*0x46a7b == '\0') {
            *0x46a7b = *0x46bcd;
        }
        if (*0x46a7c == '\0') {
            *0x46a7c = *0x46bb5;
        }
        (**(*0x44e10 + 0x58))(0x40a68,0x3d730,uStack_bc,0x3c1,0x467d0);
        pcVar17 = "Supported";
        if (*0x46ba6 == '\0') {
            pcVar17 = 0x40b08;
        }
        fcn.00032d6c(auStack_a8,0xf,pcVar17,iVar6);
        arg4_00 = auStack_a8;
        fcn.000107d8(*0x46b98,0x456,0x406b4,arg4_00);
        pcVar17 = "Supported";
        if (*0x46ba8 == '\0') {
            pcVar17 = 0x40b08;
        }
        fcn.00032d6c(auStack_a8,0xf,pcVar17,arg4_00);
        fcn.000107d8(*0x46b98,0x459,0x406b4,auStack_a8);
        fcn.000107d8(*0x46b98,0x45c,0x40b18,*0xfed30030);
        fcn.000107d8(*0x46b98,0x45f,0x40b28,*0xfed300a0);
        fcn.000107d8(*0x46b98,0x462,0x40b18,*0xfed30328);
        fcn.000107d8(*0x46b98,0x465,0x40b28,*0xfed30378);
        iVar6 = rdmsr(0x13a);
        fcn.000107d8(*0x46b98,0x468,0x40b28,iVar6);
        uVar9 = rdmsr(0x606);
        uVar14 = 2LL << ((uVar9 & 0xf) - 1 & 0x3f);
        if (uVar14 != '\0') {
            uVar12 = rdmsr(0x614);
            uVar8 = uVar12 >> 0x20 & 0x7fff;
            if ((uVar12 & 0x7fff00000000) == 0) {
                uVar8 = 0x7fff;
            }
            uVar14 = uVar14 & 0xff;
            fcn.000107d8(*0x46b98,0x592,0x40b40,uVar8 / uVar14);
            fcn.000107d8(*0x46b98,0x595,0x40b40,(uVar12 >> 0x10 & 0x7fff) / uVar14);
            fcn.000107d8(*0x46b98,0x59e,0x40b40,(uVar12 & 0x7fff) / uVar14);
            uStackX_8 = rdmsr(0x610);
            fcn.000107d8(*0x46b98,0x598,0x40b40,(uStackX_8 & 0x7fff) / uVar14);
            fcn.000107d8(*0x46b98,0x59b,0x40b40,(uStackX_8._4_4_ & 0x7fff) / uVar14);
            fcn.00021130();
            uVar12 = rdmsr(0xce);
            fcn.000107d8(*0x46b98,0x4d0,0x3f98c,(uVar12 >> 0x21 & 3) + 1);
            if ((uVar12 >> 0x21 & 3) != 0) {
                uVar12 = rdmsr(0x648);
                fcn.000107d8(*0x46b98,0x4d3,0x40b50,uVar12 & 0xff);
                uVar12 = rdmsr(0x649);
                fcn.000107d8(*0x46b98,0x4d6,0x40b50,(uVar12 & 0xffffffff) >> 0x10 & 0xff);
                uVar12 = rdmsr(0x64a);
                fcn.000107d8(*0x46b98,0x4d9,0x40b50,(uVar12 & 0xffffffff) >> 0x10 & 0xff);
                uStackX_8 = rdmsr(0x610);
                fcn.000107d8(*0x46b98,0x4e2,0x40b88,(*0xfedc59a0 & 0x7fff) / uVar14);
                fcn.000107d8(*0x46b98,0x4e5,0x40b88,(*0xfedc59a4 & 0x7fff) / uVar14);
                uVar14 = rdmsr(0x64c);
                pcVar16 = L"%d (Locked)";
                if (-1 < uVar14) {
                    pcVar16 = L"%d (Unlocked)";
                }
                fcn.000107d8(*0x46b98,0x4df,pcVar16,uVar14 & 0xff);
            }
            uStack_f0 = 0xb;
            iVar6 = (**(*0x44e10 + 0x48))(0x40be8,0x3d730,auStack_d8,&uStack_f0,auStack_e8);
            uVar11 = auStack_d8[0];
            if (iVar6 < 0) {
                uVar11 = 6;
            }
            auStack_d8[0] = uVar11;
            iVar6 = fcn.0003822c(0x3d770);
            *0x46fb0 = iVar6 + 0x18;
            if (*0x46fb0 == NULL) {
                uStack_e2 = 0;
                uStack_e0 = 0;
                uStack_de = 0;
            }
            else {
                uStack_e2 = CONCAT11(~(**0x46fb0 >> 1),~**0x46fb0) & 0x101;
                uStack_e0 = ~(**0x46fb0 >> 2) & 1;
                uStack_de = *(iVar6 + 0x30);
            }
            (**(*0x44e10 + 0x58))(0x40be8,0x3d730,uVar11,0xb,auStack_e8);
            uVar15 = *((*0xc0000048 & 0xfffffffe) + 0x5a18);
            uVar1 = *((*0xc0000048 & 0xfffffffe) + 0x5a1c);
            fcn.000103d0(0x15,0,0,aiStackX_20);
            iVar5 = (uVar1 << 0x20) + (uVar15 & 0xfffffffffffffffe) >> 0x10;
            if (aiStackX_20[0] == 38400000) {
                uVar15 = iVar5 * 0x960;
            }
            else if (aiStackX_20[0] == 24000000) {
                uVar15 = iVar5 * 0x5dc >> 1;
            }
            else {
                uVar15 = 0;
            }
            fcn.000107d8(*0x46b98,0x3ab,0x40c18,uVar15 / 1000 & 0xffff);
            uVar9 = rdmsr(0x1a2);
            *0x4684f = uVar9 >> 0x18 & 0x3f;
            fcn.000107d8(*0x46b98,0x1b13,0x40c30,*0x4684f);
            puVar18 = NULL;
            fcn.000103a0(6,0,&uStack_b8,0);
            if ((uStack_b8 >> 0xe & 1) != 0) {
                iVar6 = (**(*0x44e00 + 0x140))(0x3d5e0,0,0x46fa8);
                if (iVar6 < 0) {
                    return;
                }
                fcn.00010340(&var_79h + 1,0x30);
                uVar9 = 0x35;
                uVar14 = rdmsr(0x35);
                uVar12 = (uVar14 & 0xffffffff) >> 0x10;
                puStack_d0 = fcn.00032c10(0x35,uVar12 << 2);
                iStack_c8 = fcn.00032c10(uVar9,uVar12 << 3);
                if (puStack_d0 == NULL) {
                    return;
                }
                if (iStack_c8 == 0) {
                    return;
                }
                (**(*0x46fa8 + 0x30))(*0x46fa8,&uStack_88);
                *0x44d0c = 0;
                uVar12 = 0;
                pcVar17 = pcVar13;
                if ((uVar14 & 0xffff) != 0) {
                    do {
                        iVar6 = (**(*0x46fa8 + 8))(*0x46fa8,uVar12,&var_79h + 1);
                        if (iVar6 < 0) {
                            return;
                        }
                        if (stack0xffffffffffffff94 == 0) {
                            if (uVar12 == _uStack_88) {
                                fcn.00020538(&puStack_d0);
                                *0x44d0c = *0x44d0c + 1;
                                uStackX_10 = uStackX_10 & 0xffffffffffffff00;
                                fcn.0002057c(&uStackX_10);
                            }
                            else {
                                (**(*0x46fa8 + 0x18))(*0x46fa8,fcn.00020538,uVar12,0,0,&puStack_d0,0);
                                *0x44d0c = *0x44d0c + 1;
                                puVar18 = &uStackX_10;
                                uStackX_10 = uStackX_10 & 0xffffffffffffff00;
                                (**(*0x46fa8 + 0x18))(*0x46fa8,fcn.0002057c,uVar12,0,0,puVar18,0);
                            }
                            if (uStackX_10 == '@') {
                                pcVar17 = pcVar17 + 1;
                            }
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < (uVar14 & 0xffff));
                }
                if (pcVar17 != 0) {
                    do {
                        fcn.000107d8(*0x46b98,*(pcVar13 * 2 + 0x40c70),0x3f98c,*(puStack_d0 + pcVar13));
                        pcVar13 = pcVar13 + 1;
                    } while (pcVar13 < pcVar17);
                }
                *0x46bb4 = 0;
                if (0x1 < pcVar17) {
                    do {
                        if (*puStack_d0 >> 8 != puStack_d0[pcVar10] >> 8) {
                            *0x46bb4 = 1;
                            break;
                        }
                        pcVar10 = pcVar10 + 1;
                    } while (pcVar10 < pcVar17);
                }
                (**(*0x44e10 + 0x58))(0x40a40,0x3d8f0,uStack_b4,0x37,0x46ba0);
                (**(*0x44e00 + 0x48))(puStack_d0);
                (**(*0x44e00 + 0x48))(iStack_c8);
            }
            uStackX_8 = uStackX_8 & 0xffffffffffffff00;
            uStack_90 = 0x3c1;
            iVar6 = (**(*0x44e10 + 0x48))(0x40a68,0x3d730,auStack_b0,&uStack_90,0x467d0,puVar18);
            if (-1 < iVar6) {
                fcn.00032660(&uStackX_8,auStackX_18);
                if (*0x467d3 == '\0') {
                    *0x467d2 = uStackX_8;
                }
                *0x467d1 = uStackX_8;
                (**(*0x44e10 + 0x58))(0x40a68,0x3d730,auStack_b0[0],uStack_90,0x467d0);
            }
            fcn.00023684();
        }
    }
    return;
}


/* fcn.00020cb8 @ 0x20cb8 */

void fcn.00020cb8(void)

{
    uint8_t uVar1;
    int64_t arg1;
    uint8_t uVar2;
    uint16_t uVar3;
    uint8_t *puVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [2];
    uint auStackX_18 [2];
    ulong uStackX_20;
    int32_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    
    uStackX_20 = 0x3c1;
    (**(*0x44e10 + 0x48))(0x40a68,0x3d730,auStackX_18,&uStackX_20,0x467d0);
    if (*0x46fb0 != NULL) {
        auStackX_8[0] = 0;
        fcn.000327dc(3,0x1818,auStackX_8,auStackX_10);
        fcn.000107d8(*0x46b98,0x5d3,0x3f98c,auStackX_8[0]);
        uVar6 = (*0x46fb0)[2];
        puVar4 = *0x46fb0;
        if (uVar6 < (*0x46fb0)[1]) {
            do {
                if (2 < uVar6) break;
                uVar1 = puVar4[uVar6 + 4];
                uVar2 = 0;
                if (uVar6 == 0) {
                    uVar2 = *puVar4;
code_r0x00020d92:
                    uVar2 = uVar2 & 1;
                }
                else {
                    if (uVar6 == 1) {
                        uVar2 = *puVar4 >> 1;
                        goto code_r0x00020d92;
                    }
                    if (uVar6 == 2) {
                        uVar2 = *puVar4 >> 2;
                        goto code_r0x00020d92;
                    }
                }
                if ((*(uVar6 + 0x468fd) == '\x01') && (uVar2 != 0)) {
                    auStackX_8[0] = 0;
                    uVar7 = (uVar1 & 0xf) << 0x10;
                    fcn.000327dc(3,uVar7 | 0x118,auStackX_8,auStackX_10);
                    uVar5 = auStackX_8[0] >> 0x10;
                    fcn.000107d8(*0x46b98,*(uVar6 * 2 + 0x40c50),0x3f98c,
                                 (auStackX_8[0] & 0xffff) * 100000 + 0x80000 >> 0x14);
                    fcn.000107d8(*0x46b98,*(uVar6 * 2 + 0x40c48),0x3f98c,uVar5 * 100000 + 0x80000 >> 0x14);
                    auStackX_8[0] = 0;
                    fcn.000327dc(3,uVar7 | 0x1318,auStackX_8,auStackX_10);
                    fcn.000107d8(*0x46b98,*(uVar6 * 2 + 0x40c40),0x3f98c,auStackX_8[0] & 0x3ff);
                    fcn.000107d8(*0x46b98,*(uVar6 * 2 + 0x40c68),0x3f98c,auStackX_8[0] >> 10 & 0x3ff);
                    fcn.000107d8(*0x46b98,*(uVar6 * 2 + 0x40c38),0x3f98c,auStackX_8[0] >> 0x14 & 0x3ff);
                    auStackX_8[0] = 0;
                    fcn.000327dc(3,uVar7 | 0x1418,auStackX_8,auStackX_10);
                    if ((auStackX_8[0] >> 0xf & 1) == 0) {
                        uVar3 = (auStackX_8[0] & 0xffff) * 1000 + 500 >> 8;
                    }
                    else {
                        uVar3 = ~(auStackX_8[0] - 1U) * 1000 + 500 >> 8;
                    }
                    uVar5 = auStackX_8[0] >> 0x10;
                    fcn.000107d8(*0x46b98,*(uVar6 * 2 + 0x40c90),0x3f98c,uVar3);
                    fcn.000107d8(*0x46b98,*(uVar6 * 2 + 0x40c88),0x3f98c,uVar5 * 100 + 0x32 >> 0xf);
                    auStackX_8[0] = 0;
                    fcn.000327dc(3,uVar7 | 0x518,auStackX_8,auStackX_10);
                    arg1 = *0x46b98;
                    *(uVar6 * 2 + 0x44d00) = auStackX_8[0] & 0x7ff;
                    fcn.000107d8(arg1,*(uVar6 * 2 + 0x40c58),0x3f98c,auStackX_8[0] & 0x7ff);
                    puVar4 = *0x46fb0;
                    if ((((*0x46fb0)[0x18] == 1) && (*(uVar6 + 0x46b49) == '\x01')) && (*(uVar6 * 2 + 0x46afa) == 0)) {
                        *(uVar6 * 2 + 0x46afa) = *(*0x46fb0 + uVar6 * 2 + 0xc);
                    }
                    if (puVar4[0x18] == 0) {
                        *(uVar6 + 0x46b49) = 0;
                    }
                    auStackX_8[0] = 0;
                    fcn.000327dc(3,(uVar1 & 0xf) << 8 | 0x19,auStackX_8,auStackX_10);
                    fcn.000107d8(*0x46b98,*(uVar6 * 2 + 0x40c60),0x3f98c,auStackX_8[0] & 0x7fff);
                    auStackX_8[0] = 0;
                    fcn.000327dc(3,uVar7 | 0x718,auStackX_8,auStackX_10);
                    fcn.000107d8(*0x46b98,*(uVar6 * 2 + 0x40c80),0x3f98c,(auStackX_8[0] & 0xffff) * 1000 + 500 >> 0xd
                                );
                    puVar4 = *0x46fb0;
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < puVar4[1]);
        }
        (**(*0x44e10 + 0x58))(0x40a68,0x3d730,auStackX_18[0],uStackX_20,0x467d0);
    }
    return;
}


/* fcn.000239b4 @ 0x239b4 */

//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h

uint64_t fcn.000239b4(void)

{
    bool bVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    uint64_t uStackX_18;
    int64_t iStackX_20;
    int64_t var_38h;
    int64_t var_40h;
    uint32_t var_48h;
    int64_t var_50h;
    uchar auStack_58 [8];
    ulong uStack_50;
    uchar auStack_48 [24];
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_18h;
    
    iVar2 = (**(*0x44e20 + 0x138))(2,0x3d9e0,0,&uStackX_18,&iStackX_20);
    uVar3 = 0;
    if (iVar2 < 0) {
        uVar3 = 0;
    }
    else {
        uVar6 = uVar3;
        if (uStackX_18 != 0) {
            do {
                iVar2 = (**(*0x44e20 + 0x98))(*(iStackX_20 + uVar6 * 8),0x3d860,auStack_58);
                if ((-1 < iVar2) && (iVar2 = (**(*0x44e20 + 0xb8))(0x3d870,auStack_58,&uStack_50), -1 < iVar2)) {
                    bVar1 = true;
                    iVar2 = (**(*0x44e20 + 0x128))(uStack_50,0x3d870,&iStackX_10,&uStackX_8);
                    if (-1 < iVar2) {
                        if (uStackX_8 != 0) {
                            uVar4 = uStackX_8;
                            uVar5 = uVar3;
                            uVar7 = uVar3;
                            do {
                                if ((*(uVar5 + 0x10 + iStackX_10) & 8) != 0) {
                                    iVar2 = (**(*0x44e20 + 0x98))(*(uVar5 + iStackX_10),0x3e628,auStack_48);
                                    if (-1 < iVar2) {
                                        bVar1 = false;
                                        break;
                                    }
                                    uVar4 = uStackX_8;
                                }
                                uVar7 = uVar7 + 1;
                                uVar5 = uVar5 + 0x18;
                            } while (uVar7 < uVar4);
                        }
                        (**(*0x44e20 + 0x48))(iStackX_10);
                        if (bVar1) goto code_r0x00023aef;
                    }
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < uStackX_18);
        }
        uVar3 = 1;
code_r0x00023aef:
        (**(*0x44e20 + 0x48))(iStackX_20);
    }
    return uVar3;
}


/* fcn.00036410 @ 0x36410 */

ulong fcn.00036410(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar3 = *(*0x44e30 + 0x68);
    iVar2 = *(*0x44e30 + 0x70);
    while( true ) {
        if (iVar3 == 0) {
            return 0;
        }
        iVar1 = fcn.00036640(iVar2,0x3ecd0,0x10);
        if (iVar1 == 0) break;
        iVar2 = iVar2 + 0x18;
        iVar3 = iVar3 + -1;
    }
    return *(iVar2 + 0x10);
}


/* fcn.0003a430 @ 0x3a430 */

int64_t * fcn.0003a430(void)

{
    int64_t *piVar1;
    int64_t iVar2;
    
    piVar1 = fcn.00032ba4(0x18);
    if (piVar1 != NULL) {
        iVar2 = fcn.00032ba4(0x200);
        *piVar1 = iVar2;
        if (iVar2 != 0) {
            piVar1[2] = 0;
            piVar1[1] = 0x200;
            return piVar1;
        }
        (**(*0x44e00 + 0x48))(piVar1);
    }
    return NULL;
}


/* fcn.0003a660 @ 0x3a660 */

void fcn.0003a660(int64_t arg1)

{
    unkbyte7 in_R8;
    uchar auStack_28 [2];
    ulong uStack_26;
    ulong uStack_1e;
    
    fcn.00010340(auStack_28,0x12);
    uStack_26 = *0x3d640;
    uStack_1e = *0x3d648;
    fcn.0003a510(arg1,auStack_28,CONCAT71(in_R8,0x5f),0x12);
    return;
}


/* fcn.0003a510 @ 0x3a510 */

int64_t fcn.0003a510(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint8_t uVar2;
    char in_stack_00000028;
    char in_stack_00000030;
    
    *arg1 = arg2;
    uVar2 = in_stack_00000028 + arg3 & 0x7fU | in_stack_00000030 << 7;
    *(arg1 + 1) = uVar2;
    iVar1 = fcn.0003a4b4(noname_0,uVar2 & 0x7f);
    if ((arg3 != 0) && (iVar1 != arg1)) {
        section..text(iVar1,arg1,arg3);
    }
    return iVar1;
}


/* fcn.0003a4b4 @ 0x3a4b4 */

int64_t fcn.0003a4b4(int64_t arg1,int64_t arg2)

{
    uint64_t arg2_00;
    int64_t iVar1;
    ulong uVar2;
    
    arg2_00 = *(arg1 + 8);
    if (arg2_00 < *(arg1 + 0x10) + arg2) {
        uVar2 = fcn.00032cc4(arg1,arg2_00,arg2 + 0x200 + arg2_00,*arg1);
        *arg1 = uVar2;
        *(arg1 + 8) = *(arg1 + 8) + arg2 + 0x200;
    }
    iVar1 = *(arg1 + 0x10);
    *(arg1 + 0x10) = iVar1 + arg2;
    return *arg1 + iVar1;
}


/* fcn.00032cc4 @ 0x32cc4 */

int64_t fcn.00032cc4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    
    iVar1 = fcn.00032c10(arg1,arg3);
    if ((iVar1 != 0) && (arg4 != 0)) {
        if (arg2 < arg3) {
            arg3 = arg2;
        }
        if ((arg3 != 0) && (iVar1 != arg4)) {
            section..text(iVar1,arg4,arg3);
        }
        (**(*0x44e00 + 0x48))(arg4);
    }
    return iVar1;
}


/* fcn.0003a5e0 @ 0x3a5e0 */

void fcn.0003a5e0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    uchar auStack_28 [2];
    ushort uStack_26;
    uint8_t uStack_24;
    uchar uStack_23;
    uchar auStack_22 [26];
    
    fcn.00010340(auStack_28,0x1c);
    uStack_26 = arg2;
    uStack_24 = arg3 & 0x30;
    uStack_23 = 0;
    uVar1 = 0;
    section..text(auStack_22,&stack0x00000028,1);
    fcn.0003a510(arg1,auStack_28,CONCAT71(uVar1 >> 8,9),7);
    return;
}


/* fcn.0003a718 @ 0x3a718 */

int64_t fcn.0003a718(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ushort uVar2;
    int64_t *in_stack_00000048;
    uchar auStack_38 [6];
    ushort uStack_32;
    ushort uStack_30;
    ushort uStack_2e;
    uchar uStack_2b;
    
    uVar2 = arg3;
    fcn.00010340(auStack_38,0x26);
    iVar1 = *(arg1 + 0x10);
    uStack_2b = 0;
    uStack_32 = arg2;
    uStack_30 = uVar2;
    uStack_2e = arg4;
    fcn.0003a510(arg1,auStack_38,CONCAT71(arg3 >> 8,5),0x11);
    fcn.0003a57c(arg1,*in_stack_00000048,in_stack_00000048[2]);
    fcn.0003a5b8(arg1);
    return *arg1 + iVar1;
}


/* fcn.0003a57c @ 0x3a57c */

void fcn.0003a57c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    iVar1 = fcn.0003a4b4(arg1,arg3);
    if ((arg3 != 0) && (iVar1 != arg2)) {
        section..text(iVar1,arg2,arg3);
    }
    return;
}


/* fcn.0003a5b8 @ 0x3a5b8 */

void fcn.0003a5b8(int64_t arg1)

{
    unkbyte7 in_R8;
    uchar auStackX_10 [24];
    
    fcn.0003a510(arg1,auStackX_10,CONCAT71(in_R8,0x29),2);
    return;
}


/* fcn.0003ab10 @ 0x3ab10 */

//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_24h
//WARNING: Type propagation algorithm not settling

int64_t fcn.0003ab10(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_68h)

{
    bool bVar1;
    int64_t iVar2;
    char **arg2_00;
    int64_t iVar3;
    char **ppcVar4;
    char **ppcVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t unaff_R14;
    char **ppcVar8;
    int64_t unaff_R15;
    int64_t var_48h;
    int64_t var_50h;
    int16_t var_58h;
    int64_t var_60h;
    ulong uStackY_68;
    int64_t iStackY_60;
    char **ppcStackY_58;
    uint32_t var_24h;
    int64_t var_20h;
    int64_t var_18h;
    
    ppcVar4 = NULL;
    iStackY_60 = 0;
    ppcVar5 = NULL;
    iVar2 = (**(*0x44e90 + 0x20))(*0x44e90,arg1,&iStackY_60,0);
    if (iVar2 != -0x7ffffffffffffffb) {
        return iVar2;
    }
    arg2_00 = fcn.00032ba4(iStackY_60);
    if (arg2_00 == NULL) {
        return -0x7ffffffffffffff7;
    }
    iVar2 = *0x44e90;
    iVar3 = (**(*0x44e90 + 0x20))(*0x44e90,arg1,&iStackY_60,arg2_00);
    if (-1 < iVar3) {
        iStackY_60 = iStackY_60 + *(arg4 + 0x10);
        ppcVar4 = fcn.00032c10(iVar2,iStackY_60);
        ppcStackY_58 = ppcVar4;
        if ((ppcVar4 == NULL) || (ppcVar5 = fcn.00032c10(iVar2,iStackY_60), ppcVar5 == NULL)) {
            iVar3 = -0x7ffffffffffffff7;
        }
        else {
            uVar7 = 0x14;
            if (ppcVar4 != arg2_00) {
                section..text(ppcVar4,arg2_00,0x14);
            }
            uStackY_68._4_4_ = *(arg2_00 + 2);
            ppcVar8 = ppcVar4 + 0x14;
            bVar1 = false;
            if (0x14 < uStackY_68._4_4_) {
                do {
                    ppcVar4 = uVar7 + arg2_00;
                    if (&uStackY_68 != ppcVar4) {
                        section..text(&uStackY_68,ppcVar4,4);
                    }
                    uVar6 = uVar7 + (*ppcVar4 & 0xffffff);
                    uVar7 = uVar6;
                    if ((*(ppcVar4 + 3) == '\x02') &&
                       (iVar2 = fcn.0003a850(arg2,arg3 & 0xffff,ppcVar4,arg4,unaff_R15,unaff_R14), -1 < iVar2)) {
                        bVar1 = true;
                        ppcVar4 = ppcVar5;
                    }
                    if (&uStackY_68 != ppcVar4) {
                        section..text(&uStackY_68,ppcVar4,4);
                    }
                    if (((uStackY_68 & 0xffffff) != 0) && (ppcVar8 != ppcVar4)) {
                        section..text(ppcVar8,ppcVar4,uStackY_68 & 0xffffff);
                    }
                    ppcVar4 = ppcStackY_58;
                    ppcVar8 = ppcVar8 + (uStackY_68 & 0xffffff);
                } while (uVar6 < uStackY_68._4_4_);
                if (bVar1) {
                    iStackY_60 = ppcVar8 - ppcStackY_58;
                    *(ppcStackY_58 + 2) = iStackY_60;
                    iVar3 = (**(*0x44e90 + 0x10))(*0x44e90,arg1,ppcStackY_58);
                    goto code_r0x0003ad04;
                }
            }
            iVar3 = -0x7ffffffffffffff2;
        }
    }
code_r0x0003ad04:
    (**(*0x44e00 + 0x48))(arg2_00);
    if (ppcVar4 != NULL) {
        (**(*0x44e00 + 0x48))(ppcVar4);
    }
    if (ppcVar5 != NULL) {
        (**(*0x44e00 + 0x48))(ppcVar5);
    }
    return iVar3;
}


/* fcn.0003a484 @ 0x3a484 */

void fcn.0003a484(int64_t arg1)

{
    if (*arg1 != 0) {
        (**(*0x44e00 + 0x48))();
    }
    //WARNING: Could not recover jumptable at 0x0003a4ae. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x44e00 + 0x48))(arg1);
    return;
}


/* fcn.000247f4 @ 0x247f4 */

void fcn.000247f4(int64_t arg1)

{
    int64_t arg1_00;
    int64_t arg1_01;
    int64_t arg1_02;
    int64_t iVar1;
    int64_t iVar2;
    ulong in_R8;
    int64_t unaff_retaddr;
    
    arg1_00 = fcn.0003a430();
    arg1_01 = fcn.0003a430();
    arg1_02 = fcn.0003a430();
    if (((arg1_00 != 0) && (arg1_01 != 0)) && (arg1_02 != 0)) {
        iVar1 = fcn.0003a660(arg1_00);
        if (iVar1 != 0) {
            *(iVar1 + 0x12) = 0;
            iVar2 = fcn.0003a660(arg1_01);
            if (iVar2 != 0) {
                *(iVar2 + 0x12) = 0;
                *(iVar1 + 0x13) = 0x28bc;
                *(iVar2 + 0x13) = 0x28bd;
                fcn.0003a5e0(arg1_02,4,CONCAT71(in_R8 >> 8,0x30));
                fcn.0003a5e0(arg1_02,3,0);
                fcn.0003a718(arg1_00,0,0xf101,1);
                fcn.0003ab10(arg1,0x3e728,0x2719,arg1_00,unaff_retaddr);
                fcn.0003a484(arg1_02);
                fcn.0003a484(arg1_00);
                fcn.0003a484(arg1_01);
            }
        }
    }
    return;
}


/* fcn.00024f58 @ 0x24f58 */

ulong fcn.00024f58(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    char **ppcVar3;
    uint8_t uVar4;
    int64_t iVar5;
    
    if (arg2 == '\0') {
        uVar2 = fcn.00032c10(arg1,1);
        *arg3 = uVar2;
    }
    else {
        iVar5 = 0;
        do {
            arg1 = arg1 + iVar5;
            uVar4 = arg2 - 1;
            arg2 = uVar4;
            iVar5 = 0;
            cVar1 = *arg1;
            while (cVar1 != '\0') {
                iVar5 = iVar5 + 1;
                cVar1 = *(iVar5 + arg1);
            }
            iVar5 = iVar5 + 1;
        } while ((*(iVar5 + arg1) != '\0') && (uVar4 != 0));
        ppcVar3 = fcn.00032ba4(iVar5);
        *arg3 = ppcVar3;
        if ((ppcVar3 != NULL) && ((iVar5 != 0 && (ppcVar3 != arg1)))) {
            section..text(ppcVar3,arg1,iVar5);
        }
    }
    return 0;
}


/* fcn.00039bcc @ 0x39bcc */

int64_t fcn.00039bcc(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    char cVar2;
    char *arg1_00;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    char *pcVar6;
    int64_t iVar7;
    int64_t iStackX_18;
    uchar auStackX_20 [8];
    int64_t aiStack_38 [2];
    
    auStackX_20[0] = arg3;
    aiStack_38[0] = 0;
    iVar5 = 0;
    iStackX_18 = arg2;
    arg1_00 = fcn.0003ad4c(arg1);
    if (arg1_00 != NULL) {
        fcn.00037b6c(0x3f9f8,0x3d600,aiStack_38,0);
        pcVar6 = arg1_00;
        iVar7 = aiStack_38[0];
        do {
            while( true ) {
                iVar3 = 0x44330;
                if (iVar7 != 0) {
                    iVar3 = iVar7;
                }
                iVar3 = fcn.00037c40(arg1_00,0,0x44330,iVar3);
                if (iVar3 == 0) goto code_r0x00039d54;
                iStackX_18 = 0;
                iVar4 = (**(*0x44e70 + 8))(*0x44e70,iVar3,arg1,0x1b2f,auStackX_20,&iStackX_18,0);
                if (iVar4 == -0x7ffffffffffffffb) {
                    iVar5 = fcn.00032c10(0x8000000000000005,iStackX_18);
                    if ((iVar5 != 0) &&
                       (iVar4 = (**(*0x44e70 + 8))(*0x44e70,iVar3,arg1,0x1b2f,iVar5,&iStackX_18,0), iVar4 < 0)) {
                        (**(*0x44e00 + 0x48))(iVar5);
                        iVar5 = 0;
                    }
                    goto code_r0x00039d54;
                }
                if (iVar4 != -0x7fffffffffffffe0) goto code_r0x00039d54;
                if (iVar7 == 0) break;
                (**(*0x44e00 + 0x48))(iVar7);
                iVar7 = 0;
            }
            for (; (*pcVar6 != '\0' && (*pcVar6 != ';')); pcVar6 = pcVar6 + 1) {
            }
            cVar2 = *pcVar6;
            pcVar1 = pcVar6 + 1;
            pcVar6 = NULL;
            if (cVar2 == ';') {
                pcVar6 = pcVar1;
            }
        } while (pcVar6 != NULL);
code_r0x00039d54:
        (**(*0x44e00 + 0x48))(arg1_00);
        if (iVar7 != 0) {
            (**(*0x44e00 + 0x48))(iVar7);
        }
        if (iVar3 != 0) {
            (**(*0x44e00 + 0x48))(iVar3);
        }
    }
    return iVar5;
}


/* fcn.00024fe0 @ 0x24fe0 */

void fcn.00024fe0(void)

{
    bool bVar1;
    bool bVar2;
    char *pcVar3;
    char cVar4;
    int16_t iVar5;
    int64_t iVar6;
    int16_t *piVar7;
    int16_t *piVar8;
    ushort *puVar9;
    int16_t *noname_1;
    int64_t arg2;
    uint64_t arg4;
    ushort auStackX_18 [4];
    uchar auStackX_20 [8];
    int16_t var_c30h;
    int64_t var_c38h;
    int64_t iStack_ce8;
    char *pcStack_ce0;
    int64_t aiStack_cd8 [2];
    uchar auStack_cc8 [87];
    char cStack_c71;
    uint32_t var_59h;
    
    (**(*0x44e00 + 0x70))();
    bVar1 = false;
    bVar2 = false;
    iVar6 = (**(*0x44e00 + 0x140))(0x3d8b0,0,aiStack_cd8);
    if (-1 < iVar6) {
        auStackX_18[0] = 0xfffe;
        do {
            puVar9 = auStackX_18;
            iVar6 = (**(aiStack_cd8[0] + 0x18))(aiStack_cd8[0],puVar9,0,&pcStack_ce0,0);
            pcVar3 = pcStack_ce0;
            if (iVar6 < 0) break;
            if (*pcStack_ce0 == '\x02') {
                fcn.00024f58(pcStack_ce0 + pcStack_ce0[1],CONCAT71(puVar9 >> 8,pcStack_ce0[5]),&iStack_ce8);
                arg2 = 0x40f40;
                noname_1 = 0x1b2f;
                iVar6 = iStack_ce8;
                fcn.000107d8(*0x44d20,0x1b2f,0x40f40,iStack_ce8);
                (**(*0x44e00 + 0x48))(iStack_ce8);
                piVar7 = fcn.00039bcc(*0x44d20,noname_1,arg2,iVar6);
                if (piVar7 != NULL) {
                    arg4 = 0;
                    do {
                        noname_1 = *(arg4 * 8 + 0x44450);
                        piVar8 = piVar7;
                        if (*piVar7 != 0) {
                            iVar5 = *piVar7;
                            do {
                                if (iVar5 != *noname_1) break;
                                piVar8 = piVar8 + 1;
                                noname_1 = noname_1 + 1;
                                iVar5 = *piVar8;
                            } while (iVar5 != 0);
                        }
                        if (*piVar8 == *noname_1) {
                            noname_1 = 0x1b2c;
                            fcn.000107d8(*0x44d20,0x1b2c,0x40638,arg4);
                            break;
                        }
                        arg4 = arg4 + 1;
                    } while (arg4 < 0x3f);
                }
                fcn.00024f58(pcVar3 + pcVar3[1],CONCAT71(noname_1 >> 8,pcVar3[6]),&iStack_ce8);
                fcn.000107d8(*0x44d20,0x1b32,0x40f40,iStack_ce8);
                (**(*0x44e00 + 0x48))(iStack_ce8);
                bVar1 = true;
            }
            if (*pcStack_ce0 == '\0') {
                fcn.000107d8(*0x44d20,0x1a50,0x40f50,pcStack_ce0[0x16]);
                bVar2 = true;
            }
        } while ((!bVar1) || (!bVar2));
        iVar6 = fcn.00032b68();
        cVar4 = (**(iVar6 + 8))(0x3a);
        if (cVar4 == '\x01') {
            iVar6 = 0x40f68;
        }
        else if (cVar4 == '\x02') {
            iVar6 = 0x40f70;
        }
        else {
            iVar6 = 0x40f78;
        }
        fcn.000107d8(*0x44d20,0x1a53,0x3f8d8,iVar6);
        aiStack_cd8[1] = 0xca9;
        iVar6 = (**(*0x44e10 + 0x48))(0x3ffe0,0x3d8f0,auStackX_20,aiStack_cd8 + 1,auStack_cc8);
        if (-1 < iVar6) {
            iVar6 = 0x40fa8;
            if (cStack_c71 == '\x01') {
                iVar6 = 0x40f80;
            }
            fcn.000107d8(*0x44d20,0x1a56,0x3f8d8,iVar6);
        }
    }
    return;
}


/* fcn.00025868 @ 0x25868 */

void fcn.00025868(int64_t arg1)

{
    uchar uVar1;
    uint16_t uVar2;
    char cVar3;
    uint16_t *puVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint16_t auStackX_18 [8];
    
    uVar6 = 0;
    auStackX_18[0] = 0;
    if (*0xc00fe000 == -1) {
        return;
    }
    cVar3 = fcn.0003b664(0xfe000);
    uVar2 = *0xc00fe0cc;
    uVar1 = *0xc00fe004;
    if (cVar3 != '\0') {
        *0xc00fe0cc = *0xc00fe0cc & 0xfffc;
        if ((*0xc00fe010 & 0xfffe0000) != 0) {
            *0xc00fe004 = 2;
            iVar5 = fcn.0003c020(*0xc00fe010 & 0xfffe0000,auStackX_18);
            *0xc00fe0cc = uVar2;
            if (iVar5 == -0x7ffffffffffffff2) {
                *0xc00fe004 = uVar1;
                return;
            }
            goto code_r0x00025927;
        }
    }
    iVar5 = -0x7ffffffffffffff9;
code_r0x00025927:
    *0xc00fe004 = uVar1;
    (**(*0x44e00 + 0x70))(arg1);
    if ((-1 < iVar5) && (auStackX_18[0] != 0)) {
        puVar4 = 0x3e740;
        do {
            if ((auStackX_18[0] & 0xff) == *puVar4) {
                fcn.000107d8(*0x44d20,0x1b35,0x410a8,auStackX_18[0]);
                return;
            }
            uVar6 = uVar6 + 1;
            puVar4 = puVar4 + 8;
        } while (uVar6 < 7);
        fcn.000107d8(*0x44d20,0x1b35,0x410b8,auStackX_18[0]);
    }
    return;
}


/* fcn.00038b6c @ 0x38b6c */

//WARNING: Variable defined which should be unmapped: var_fh
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_2fh

int64_t fcn.00038b6c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t var_fh;
    int iStackX_10;
    int64_t var_1fh;
    int64_t var_2fh;
    int64_t var_3fh;
    int64_t var_4fh;
    uint32_t var_6fh;
    int64_t var_77h;
    uint32_t auStack_68 [3];
    uint uStack_5c;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    uchar auStack_18 [7];
    int64_t var_9h;
    uint32_t var_1h;
    
    iVar1 = (**(*arg2 + 0x40))(&iStackX_10);
    if ((iVar1 < 0) || (iStackX_10 != 0)) {
        iVar1 = -0x7ffffffffffffffd;
    }
    else {
        auStack_68[0] = 0x1cff;
        auStack_68[1] = 0x50434d50;
        var_1fh._1_4_ = 0x60;
        iVar1 = (***arg2)(0,auStack_68,8,&var_1fh + 1,0,7);
        if ((((-1 < iVar1) && ((auStack_68[0] & 0x7f00) == 0x1c00)) && ((auStack_68[0] >> 0xf & 1) != 0)) &&
           (((auStack_68[0] & 0xff000000) == 0 && (auStack_68[2] == 0x50434d50)))) {
            *arg1 = CONCAT44(uStack_5c,0x50434d50);
            *(arg1 + 8) = uStack_58;
            *(arg1 + 0x10) = uStack_50;
            *(arg1 + 0x18) = uStack_48;
            *(arg1 + 0x20) = uStack_40;
            *(arg1 + 0x28) = uStack_38;
            *(arg1 + 0x30) = uStack_30;
            *(arg1 + 0x38) = uStack_28;
            *(arg1 + 0x40) = uStack_20;
            *(arg1 + 0x48) = _auStack_18;
            *(arg1 + 0x50) = stack0xfffffffffffffff0;
        }
    }
    return iVar1;
}


/* fcn.000252a0 @ 0x252a0 */

void fcn.000252a0(int64_t arg1)

{
    char cVar1;
    uint32_t uVar2;
    int64_t iVar3;
    
    iVar3 = fcn.00032b68();
    uVar2 = (**(iVar3 + 0x18))(0x213);
    if (uVar2 != 0) {
        iVar3 = fcn.00032b68();
        cVar1 = (**(iVar3 + 8))(0x11e);
        if (cVar1 == '\x01') {
            fcn.000107d8(arg1,0x1be3,0x40fd0,uVar2 >> 8 & 0xff);
            fcn.000107d8(arg1,0x1be6,0x3f98c,uVar2 >> 0x10 & 0xff);
            fcn.000107d8(arg1,0x1be9,0x40b40,uVar2 >> 0x1c);
        }
        else if (cVar1 == '\x02') {
            fcn.000107d8(arg1,0x1be9,0x40fe0,uVar2 >> 0x18);
        }
    }
    iVar3 = fcn.00032b68();
    uVar2 = (**(iVar3 + 0x18))(0x214);
    if (uVar2 != 0) {
        iVar3 = fcn.00032b68();
        cVar1 = (**(iVar3 + 8))(0x11e);
        if (cVar1 == '\x01') {
            fcn.000107d8(arg1,0x1bec,0x40fd0,uVar2 >> 8 & 0xff);
            fcn.000107d8(arg1,0x1bef,0x3f98c,uVar2 >> 0x10 & 0xff);
            fcn.000107d8(arg1,0x1bf2,0x40b40,uVar2 >> 0x1c);
        }
        else if (cVar1 == '\x02') {
            fcn.000107d8(arg1,0x1bf2,0x40fe0,uVar2 >> 0x18);
        }
    }
    return;
}


/* fcn.00024c64 @ 0x24c64 */

void fcn.00024c64(void)

{
    uchar auStackX_8 [8];
    uchar auStackX_10 [8];
    ulong uStackX_18;
    int64_t var_340h;
    int64_t var_8c0h;
    int64_t var_10d0h;
    int64_t var_1d90h;
    int64_t var_1d98h;
    int64_t var_1da0h;
    uchar auStack_1e58 [64];
    uchar auStack_1e18 [976];
    uchar auStack_1a48 [1408];
    uchar auStack_14c8 [2064];
    uchar auStack_cb8 [3248];
    
    uStackX_18 = 0xca9;
    (**(*0x44e10 + 0x48))(0x3ffe0,0x3d8f0,0,&uStackX_18,auStack_cb8);
    (**(*0x44e10 + 0x58))(L"ColdReset",0x3d8f0,2,uStackX_18,auStack_cb8);
    uStackX_18 = 0x578;
    (**(*0x44e10 + 0x48))(0x40058,0x3db90,0,&uStackX_18,auStack_1a48);
    (**(*0x44e10 + 0x58))(L"SaColdReset",0x3db90,2,uStackX_18,auStack_1a48);
    uStackX_18 = 0x36;
    (**(*0x44e10 + 0x48))(0x40e78,0x3db40,0,&uStackX_18,auStack_1e58);
    (**(*0x44e10 + 0x58))(L"MeColdReset",0x3db40,2,uStackX_18,auStack_1e58);
    uStackX_18 = 0x3c1;
    (**(*0x44e10 + 0x48))(0x40a68,0x3d730,0,&uStackX_18,auStack_1e18);
    (**(*0x44e10 + 0x58))(L"CpuColdReset",0x3d730,2,uStackX_18,auStack_1e18);
    uStackX_18 = 0x80d;
    (**(*0x44e10 + 0x48))(L"PchSetup",0x3db60,0,&uStackX_18,auStack_14c8);
    (**(*0x44e10 + 0x58))(L"PchColdReset",0x3db60,2,uStackX_18,auStack_14c8);
    uStackX_18 = 7;
    (**(*0x44e10 + 0x48))(0x40c98,0x3d6b0,0,&uStackX_18,auStackX_10);
    (**(*0x44e10 + 0x58))(L"SiColdReset",0x3d6b0,2,uStackX_18,auStackX_10);
    uStackX_18 = 5;
    (**(*0x44e10 + 0x48))(0x40ef8,0x3dc60,0,&uStackX_18,auStackX_8);
    (**(*0x44e10 + 0x58))(L"AmiWrapperColdReset",0x3dc60,2,uStackX_18,auStackX_8);
    return;
}


/* fcn.0003b664 @ 0x3b664 */

int64_t fcn.0003b664(int64_t arg1)

{
    uint64_t uVar1;
    unkuint7 Var2;
    
    uVar1 = arg1 + 0xbU & 0xffffffff;
    Var2 = uVar1 >> 8;
    if ((*((arg1 + 0xbU >> 4 & 0x10000000 | uVar1) + 0xc0000000) == '\x02') &&
       (*((arg1 + 10U >> 4 & 0x10000000 | arg1 + 10U & 0xffffffff) + 0xc0000000) == '\0')) {
        return CONCAT71(Var2,1);
    }
    return Var2 << 8;
}


/* fcn.0003c020 @ 0x3c020 */

int64_t fcn.0003c020(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    int64_t arg2_00;
    uint32_t uVar3;
    uint32_t *arg1_00;
    uint32_t *puVar4;
    char cVar5;
    uint *puVar6;
    
    arg1_00 = arg1 & 0xffffffff;
    if ((arg1 & 0xfffff000U) == 0) {
        return -0x7ffffffffffffffe;
    }
    iVar1 = arg1;
    puVar4 = iVar1 + 0xf00U;
    uVar3 = 0;
    *puVar4 = *(iVar1 + 0xf00U) | 0x20;
    arg2_00 = arg2;
    while ((*puVar4 & 0x20) == 0) {
        fcn.000382d8(0x32,arg2_00);
        uVar3 = uVar3 + 1;
        if (3999 < uVar3) {
            return -0x7fffffffffffffee;
        }
    }
    puVar6 = iVar1 + 0x20U;
    *(iVar1 + 0x20U) = 0x43f6020;
    iVar2 = fcn.0003bfdc(arg1_00,arg2_00);
    if (iVar2 == -0x7fffffffffffffee) {
        *(iVar1 + 0x18U) = *(iVar1 + 0x18U) | 0x800;
        *puVar6 = 0x43f6020;
        iVar2 = fcn.0003bfdc(arg1 & 0xffffffff,arg2_00);
        if (iVar2 == -0x7fffffffffffffee) {
            iVar2 = -0x7ffffffffffffff9;
            goto code_r0x0003c0fa;
        }
    }
    fcn.000382d8(4000,arg2_00);
    if (iVar2 < 0) {
code_r0x0003c0fa:
        *puVar4 = *puVar4 & 0xffffffdf;
        return iVar2;
    }
    *puVar6 = 0x4302580;
    iVar2 = fcn.0003bfdc(arg1_00,arg2_00);
    if (-1 < iVar2) {
        *puVar6 = 0x8430000;
        iVar2 = fcn.0003bfdc(arg1 & 0xffffffff,arg2_00);
        if (iVar2 == 0) {
            *arg2 = *puVar6;
        }
        if (*arg2 == 0) {
            if ((*arg1_00 & 0x30000) != 0) {
                iVar2 = -0x7ffffffffffffff9;
                goto code_r0x0003c21d;
            }
            cVar5 = 'e';
            *arg1_00 = *arg1_00 | 0x10000;
            *arg1_00 = *arg1_00 | 0x20000;
            do {
                if ((*(iVar1 + 0x18) & 4) != 0) break;
                fcn.000382d8(1000,arg2_00);
                cVar5 = cVar5 + -1;
            } while (cVar5 != '\0');
            if (cVar5 != '\0') {
                *puVar6 = 0x8430000;
                cVar5 = 'd';
                iVar2 = fcn.0003bfdc(arg1 & 0xffffffff,arg2_00);
                if (iVar2 == 0) {
                    *arg2 = *puVar6;
                }
                for (; (*arg2 == 0 && (cVar5 != '\0')); cVar5 = cVar5 + -1) {
                    *puVar6 = 0x8430000;
                    iVar2 = fcn.0003bfdc(arg1 & 0xffffffff,arg2_00);
                    if (iVar2 == 0) {
                        *arg2 = *puVar6;
                    }
                    if (iVar2 < 0) break;
                    fcn.000382d8(1000,arg2_00);
                }
            }
            *arg1_00 = *arg1_00 & 0xfffdffff;
            *arg1_00 = *arg1_00 & 0xfffeffff;
        }
        if (-1 < iVar2) {
            *puVar6 = 0x4302180;
            iVar2 = fcn.0003bfdc(arg1_00,arg2_00);
        }
    }
code_r0x0003c21d:
    *puVar4 = *puVar4 & 0xffffffdf;
    return iVar2;
}


/* fcn.00038ab0 @ 0x38ab0 */

int64_t fcn.00038ab0(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    uint32_t var_20h_2;
    int64_t var_bp_28h;
    int64_t var_20h;
    int64_t var_18h;
    int32_t var_bp_10h;
    
    iVar2 = (**(*0x44e00 + 0x140))(0x3d620,0,&var_20h);
    if (-1 < iVar2) {
        iVar2 = (**(var_20h + 0x40))(&var_20h_2);
        if (((iVar2 < 0) || (var_20h_2 != 0)) || (cVar1 = fcn.000394fc(), cVar1 != '\0')) {
            iVar2 = -0x7ffffffffffffffd;
        }
        else {
            var_18h._0_4_ = 0x14ff;
            var_18h._4_4_ = arg1;
            var_bp_10h = arg2;
            var_bp_28h._0_4_ = 8;
            iVar2 = (**var_20h)(0,&var_18h,0xc,&var_bp_28h,0,7);
            if ((-1 < iVar2) && (var_18h._4_4_ == 1)) {
                iVar2 = -0x7ffffffffffffff1;
            }
        }
    }
    return iVar2;
}


/* fcn.000259c4 @ 0x259c4 */

uint64_t fcn.000259c4(int64_t arg1)

{
    bool bVar1;
    bool bVar2;
    int64_t iVar3;
    int64_t arg2;
    uint64_t uVar4;
    uchar auStackX_10 [3];
    char cStackX_13;
    uchar auStackX_18 [3];
    char cStackX_1b;
    uchar auStackX_20 [8];
    uint32_t var_1f8fh;
    int64_t var_2210h;
    int8_t var_2a68h;
    int8_t var_2a69h;
    int8_t var_2bbah;
    int8_t var_2cebh;
    int64_t var_2ec0h;
    uint32_t var_3718h;
    uint32_t var_386ah;
    uint32_t var_399bh;
    int8_t var_3bbbh;
    uint32_t var_3bc3h;
    int64_t var_3bc8h;
    ulong uStack_3c78;
    ulong uStack_3c70;
    uchar auStack_3c68 [8];
    ulong uStack_3c60;
    uchar auStack_3c58 [68];
    char cStack_3c14;
    char cStack_3c13;
    char cStack_3bf4;
    char cStack_3bea;
    char cStack_3be0;
    char cStack_3b97;
    char cStack_3b48;
    uchar auStack_3888 [68];
    char cStack_3844;
    char cStack_3843;
    char cStack_3824;
    char cStack_381a;
    char cStack_3810;
    char cStack_37c7;
    char cStack_3778;
    uchar auStack_34b8 [51];
    char cStack_3485;
    char cStack_343e;
    char cStack_343b;
    char cStack_3407;
    char cStack_3401;
    char cStack_332e;
    char cStack_332b;
    uchar auStack_2f38 [51];
    char cStack_2f05;
    char cStack_2ebe;
    char cStack_2ebb;
    char cStack_2e87;
    char cStack_2e81;
    char cStack_2dae;
    char cStack_2dab;
    uchar auStack_29b8 [73];
    char cStack_296f;
    char cStack_2429;
    uchar auStack_21a8 [73];
    char cStack_215f;
    char cStack_1c19;
    uchar auStack_1998 [2136];
    char cStack_1140;
    char cStack_113f;
    char cStack_fee;
    char cStack_ebd;
    uchar auStack_ce8 [2136];
    char cStack_490;
    char cStack_48f;
    char cStack_33e;
    char cStack_20d;
    
    uStack_3c78 = 0xca9;
    uVar4 = arg1 & 0xffffffff;
    bVar2 = false;
    iVar3 = (**(*0x44e10 + 0x48))(0x3ffe0,0x3d8f0,0,&uStack_3c78,auStack_ce8);
    if (-1 < iVar3) {
        uStack_3c78 = 0x578;
        iVar3 = (**(*0x44e10 + 0x48))(0x40058,0x3db90,0,&uStack_3c78,auStack_2f38);
        if (-1 < iVar3) {
            uStack_3c78 = 0x3c1;
            iVar3 = (**(*0x44e10 + 0x48))(0x40a68,0x3d730,0,&uStack_3c78,auStack_3888);
            if (-1 < iVar3) {
                uStack_3c78 = 0x80d;
                iVar3 = (**(*0x44e10 + 0x48))(L"PchSetup",0x3db60,0,&uStack_3c78,auStack_21a8);
                if (-1 < iVar3) {
                    uStack_3c78 = 7;
                    iVar3 = (**(*0x44e10 + 0x48))(0x40c98,0x3d6b0,0,&uStack_3c78,auStack_3c68);
                    if (-1 < iVar3) {
                        uStack_3c78 = 0xca9;
                        iVar3 = (**(*0x44e10 + 0x48))(L"ColdReset",0x3d8f0,0,&uStack_3c78,auStack_1998);
                        if (-1 < iVar3) {
                            uStack_3c78 = 0x578;
                            iVar3 = (**(*0x44e10 + 0x48))(L"SaColdReset",0x3db90,0,&uStack_3c78,auStack_34b8);
                            if (-1 < iVar3) {
                                uStack_3c78 = 0x3c1;
                                iVar3 = (**(*0x44e10 + 0x48))(L"CpuColdReset",0x3d730,0,&uStack_3c78,auStack_3c58);
                                if (-1 < iVar3) {
                                    uStack_3c78 = 0x80d;
                                    iVar3 = (**(*0x44e10 + 0x48))
                                                      (L"PchColdReset",0x3db60,0,&uStack_3c78,auStack_29b8);
                                    if (-1 < iVar3) {
                                        uStack_3c78 = 7;
                                        iVar3 = (**(*0x44e10 + 0x48))
                                                          (L"SiColdReset",0x3d6b0,0,&uStack_3c78,auStackX_20);
                                        if (-1 < iVar3) {
                                            iVar3 = fcn.00010300(auStack_21a8,auStack_29b8,0x80d);
                                            if ((((iVar3 != 0) ||
                                                 (iVar3 = fcn.00010300(auStack_3888,auStack_3c58,0x3c1), iVar3 != 0))
                                                || (iVar3 = fcn.00010300(auStack_2f38,auStack_34b8,0x578), iVar3 != 0
                                                   )) || (iVar3 = fcn.00010300(auStack_3c68,auStackX_20,7),
                                                         iVar3 != 0)) {
                                                uStack_3c60 = 0;
                                                (**(*0x44e00 + 0x80))(&uStack_3c60,0x3da70,0,0);
                                            }
                                            if (cStack_20d != cStack_ebd) {
                                                (**(*0x44e10 + 0x58))(L"PdtExist",0x3d900,0,0,0);
                                            }
                                            if (cStack_215f != cStack_296f) {
                                                (**(*0x44e10 + 0x58))(L"BootState",0x3db20,0,0,0);
                                            }
                                            if ((((cStack_2ebb != cStack_343b) || (cStack_1c19 != cStack_2429)) ||
                                                ((cStack_37c7 != cStack_3b97 ||
                                                 ((cStack_2f05 != cStack_3485 || (cStack_2ebe != cStack_343e)))))) ||
                                               ((cStack_2dae != cStack_332e ||
                                                ((((cStack_2e81 != cStack_3401 || (cStack_2e87 != cStack_3407)) ||
                                                  (cStack_2dab != cStack_332b)) || (cStack_3778 != cStack_3b48)))))) {
                                                bVar2 = true;
                                            }
                                            uStack_3c70 = 5;
                                            (**(*0x44e10 + 0x48))
                                                      (L"AmiWrapperColdReset",0x3dc60,0,&uStack_3c70,auStackX_18);
                                            uStack_3c70 = 5;
                                            iVar3 = (**(*0x44e10 + 0x48))
                                                              (0x40ef8,0x3dc60,0,&uStack_3c70,auStackX_10);
                                            if ((-1 < iVar3) && (cStackX_13 != cStackX_1b)) {
                                                *0x44de0 = '\x01';
                                                if (cStackX_13 == '\x01') {
                                                    arg2 = 0;
                                                    iVar3 = 0x20000000;
                                                }
                                                else {
                                                    arg2 = 0x20000000;
                                                    iVar3 = 0;
                                                }
                                                fcn.00038ab0(iVar3,arg2);
                                            }
                                            if (*0x44bf9 != '\0') {
                                                bVar2 = true;
                                            }
                                            if (((cStack_3844 != cStack_3c14) || (cStack_3843 != cStack_3c13)) ||
                                               ((cStack_3824 != cStack_3bf4 ||
                                                ((cStack_381a != cStack_3bea || (cStack_3810 != cStack_3be0)))))) {
                                                bVar2 = true;
                                            }
                                            if ((cStack_490 != cStack_1140) ||
                                               (bVar1 = cStack_33e != cStack_fee || *0x44de0 != '\0',
                                               cStack_48f != cStack_113f)) {
                                                bVar1 = true;
                                            }
                                            if (bVar1) {
                                                return 3;
                                            }
                                            if (bVar2) {
                                                uVar4 = 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return uVar4;
}


/* fcn.000261b8 @ 0x261b8 */

ulong fcn.000261b8(void)

{
    int16_t *piVar1;
    char16_t cVar2;
    char16_t *pcVar3;
    char cVar4;
    int16_t iVar5;
    int64_t arg2;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int16_t iVar9;
    ulong uStack_98;
    char16_t acStack_90 [4];
    char16_t acStack_88 [4];
    char16_t acStack_80 [4];
    char16_t acStack_78 [4];
    char16_t acStack_70 [4];
    char16_t acStack_68 [4];
    char16_t cStack_60;
    ulong uStack_58;
    char16_t acStack_50 [4];
    char16_t acStack_48 [4];
    char16_t acStack_40 [4];
    char16_t acStack_38 [4];
    char16_t acStack_30 [4];
    char16_t acStack_28 [4];
    char16_t acStack_20 [4];
    
    acStack_20._0_4_ = str._SB.PC00.XHCI.RHUB.HS00.CRGB._56_4_;
    cStack_60 = str._SB.PC00.XHCI.RHUB.HS01.CIR[0x1c];
    uStack_58 = str._SB.PC00.XHCI.RHUB.HS00.CRGB._0_8_;
    acStack_50 = str._SB.PC00.XHCI.RHUB.HS00.CRGB._8_8_;
    acStack_48 = str._SB.PC00.XHCI.RHUB.HS00.CRGB._16_8_;
    acStack_40 = str._SB.PC00.XHCI.RHUB.HS00.CRGB._24_8_;
    acStack_38 = str._SB.PC00.XHCI.RHUB.HS00.CRGB._32_8_;
    acStack_30 = str._SB.PC00.XHCI.RHUB.HS00.CRGB._40_8_;
    acStack_28 = str._SB.PC00.XHCI.RHUB.HS00.CRGB._48_8_;
    uStack_98 = str._SB.PC00.XHCI.RHUB.HS01.CIR._0_8_;
    acStack_90 = str._SB.PC00.XHCI.RHUB.HS01.CIR._8_8_;
    acStack_88 = str._SB.PC00.XHCI.RHUB.HS01.CIR._16_8_;
    acStack_80 = str._SB.PC00.XHCI.RHUB.HS01.CIR._24_8_;
    acStack_78 = str._SB.PC00.XHCI.RHUB.HS01.CIR._32_8_;
    acStack_70 = str._SB.PC00.XHCI.RHUB.HS01.CIR._40_8_;
    acStack_68 = str._SB.PC00.XHCI.RHUB.HS01.CIR._48_8_;
    arg2 = fcn.00032ba4(0xca9);
    iVar8 = 0;
    if (arg2 == 0) {
        return 0x8000000000000009;
    }
    cVar4 = fcn.0003a1b8(0x3d8f0,0x3ffe0,0xca9,arg2);
    if (cVar4 == '\x01') {
        piVar1 = arg2 + 0x8d2;
        iVar9 = 0;
        if (*piVar1 == 0) {
            fcn.00010340(piVar1,0x62);
            pcVar3 = &uStack_58;
            iVar5 = iVar9;
            iVar7 = iVar8;
            cVar2 = uStack_58;
            while (cVar2 != L'\0') {
                pcVar3 = pcVar3 + 1;
                iVar7 = iVar7 + 1;
                iVar5 = iVar7;
                cVar2 = *pcVar3;
            }
            *(arg2 + 0x88e) = iVar5 + 1;
            pcVar3 = &uStack_98;
            iVar7 = iVar8;
            cVar2 = uStack_98;
            while (cVar2 != L'\0') {
                pcVar3 = pcVar3 + 1;
                iVar7 = iVar7 + 1;
                cVar2 = *pcVar3;
            }
            iVar7 = iVar7 * 2 + 2;
            if ((iVar7 != 0) && (piVar1 != &uStack_58)) {
                section..text(piVar1,&uStack_58,iVar7);
            }
        }
        piVar1 = arg2 + 0x934;
        if (*piVar1 == 0) {
            fcn.00010340(piVar1,0x62);
            pcVar3 = &uStack_98;
            iVar7 = iVar8;
            cVar2 = uStack_98;
            while (cVar2 != L'\0') {
                pcVar3 = pcVar3 + 1;
                iVar7 = iVar7 + 1;
                iVar9 = iVar7;
                cVar2 = *pcVar3;
            }
            *(arg2 + 0x890) = iVar9 + 1;
            pcVar3 = &uStack_98;
            cVar2 = uStack_98;
            while (cVar2 != L'\0') {
                pcVar3 = pcVar3 + 1;
                iVar8 = iVar8 + 1;
                cVar2 = *pcVar3;
            }
            iVar8 = iVar8 * 2 + 2;
            if ((iVar8 != 0) && (piVar1 != &uStack_98)) {
                section..text(piVar1,&uStack_98,iVar8);
            }
        }
        iVar8 = fcn.0003207c(0,0x8d2,0x62);
        iVar8 = fcn.0003207c(iVar8,0x934,0x62);
        iVar8 = fcn.0003207c(iVar8,0x88e,4);
        if (iVar8 != 0) {
            cVar4 = fcn.0003a2ac(0x3d8f0,0x3ffe0,0xca9,arg2);
            (**(*0x44e00 + 0x48))(iVar8);
            if (cVar4 != '\x01') goto code_r0x000262a4;
        }
        (**(*0x44e00 + 0x48))(arg2);
        uVar6 = 0;
    }
    else {
        (**(*0x44e00 + 0x48))(arg2);
code_r0x000262a4:
        uVar6 = 0x800000000000000e;
    }
    return uVar6;
}


/* fcn.0003b6b0 @ 0x3b6b0 */

ulong fcn.0003b6b0(ulong param_1,int64_t param_2)

{
    char cVar1;
    uint32_t uVar2;
    uint64_t arg1;
    
    if (*0xc00a3000 == -1) {
        cVar1 = fcn.00032210();
        if (cVar1 == '\0') {
            cVar1 = fcn.000321ec();
            arg1 = -(cVar1 != '\0') & 0x80e0004;
        }
        else {
            arg1 = 0x90c0002;
        }
        uVar2 = fcn.0003bf14(arg1,param_2);
        if ((uVar2 >> 0xb & 1) != 0) {
            return 0;
        }
    }
    return 1;
}


/* fcn.0003720c @ 0x3720c */

ulong fcn.0003720c(uint32_t arg1)

{
    int16_t iVar1;
    uint in_register_0000000c;
    int16_t *piVar2;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = *CONCAT44(in_register_0000000c,arg1);
    while (iVar1 != 0) {
        if (*piVar2 - 0x61U < 0x1a) {
            *piVar2 = *piVar2 + -0x20;
        }
        piVar2 = piVar2 + 1;
        iVar1 = *piVar2;
    }
    return CONCAT44(in_register_0000000c,arg1);
}


/* fcn.00026b64 @ 0x26b64 */

ulong fcn.00026b64(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint32_t arg3;
    int64_t iVar2;
    char *arg1_00;
    char *pcVar3;
    
    if (arg1 != 0) {
        cVar1 = *arg1;
        while (cVar1 != '\x7f') {
            if ((cVar1 == '\x04') && (*(arg1 + 1) == '\x01')) goto code_r0x00026b9c;
            arg1 = arg1 + *(arg1 + 2);
            cVar1 = *arg1;
        }
        arg1 = 0;
code_r0x00026b9c:
        if ((arg1 != NULL) && (arg2 != 0)) {
            cVar1 = *arg2;
            while (cVar1 != '\x7f') {
                if ((cVar1 == '\x04') && (*(arg2 + 1) == '\x01')) goto code_r0x00026bcb;
                arg2 = arg2 + *(arg2 + 2);
                cVar1 = *arg2;
            }
            arg2 = 0;
code_r0x00026bcb:
            if ((arg2 != NULL) && (iVar2 = fcn.00036640(arg1 + 4,arg2 + 4,0x26), iVar2 == 0)) {
                pcVar3 = arg1 + *(arg1 + 2);
                arg1_00 = arg2 + *(arg2 + 2);
                if ((*pcVar3 == '\x04') && (((pcVar3[1] == '\x04' && (*arg1_00 == '\x04')) && (arg1_00[1] == '\x04'))))
                {
                    fcn.0003720c(pcVar3 + 2);
                    fcn.0003720c(arg1_00 + 2);
                    arg3 = fcn.000364d4(arg1_00);
                    iVar2 = fcn.00036640(pcVar3,arg1_00,arg3);
                    if (iVar2 == 0) {
                        return 0;
                    }
                }
            }
        }
    }
    return 0x800000000000000e;
}


/* fcn.00026c50 @ 0x26c50 */

bool fcn.00026c50(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t arg3;
    unkint7 extraout_RAX;
    int64_t iVar2;
    bool bVar3;
    
    if ((arg1 == 0) || (arg2 == 0)) {
        bVar3 = false;
    }
    else {
        iVar2 = fcn.000364d4(arg1);
        iVar1 = fcn.000364d4(arg2);
        if (iVar2 == iVar1) {
            arg3 = fcn.000364d4(arg1);
            iVar2 = fcn.00036640(arg1,arg2,arg3);
            if (iVar2 == 0) {
                return true;
            }
        }
        fcn.00026b64(arg1,arg2);
        bVar3 = -1 < extraout_RAX;
    }
    return bVar3;
}


/* fcn.00026abc @ 0x26abc */

void fcn.00026abc(void)

{
    int16_t iVar1;
    uint16_t uVar2;
    
    uVar2 = 0;
    if (*0x44d50 != NULL) {
        iVar1 = **0x44d50;
        while (iVar1 != 0) {
            uVar2 = uVar2 + 1;
            iVar1 = (*0x44d50)[uVar2 * 5];
        }
        return;
    }
    return;
}


/* fcn.0002723c @ 0x2723c */

ulong fcn.0002723c(int64_t arg1)

{
    ulong auStackX_18 [2];
    uchar auStack_28 [32];
    
    auStackX_18[0] = 0;
    fcn.00032d3c(auStack_28,0x1e,0x411f8,arg1 & 0xffff);
    fcn.00036528(auStack_28,0x3d600,0,auStackX_18);
    return 0;
}


/* fcn.00026b20 @ 0x26b20 */

uint16_t fcn.00026b20(int64_t arg1)

{
    uint16_t uVar1;
    uint16_t uVar2;
    
    uVar2 = 0;
    if (**0x44d50 != 0) {
        uVar1 = **0x44d50;
        do {
            if (uVar1 == arg1) {
                return uVar2;
            }
            uVar2 = uVar2 + 1;
            uVar1 = (*0x44d50)[uVar2 * 5];
        } while (uVar1 != 0);
    }
    return 0xffff;
}


/* fcn.00027824 @ 0x27824 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h

uchar fcn.00027824(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    char cVar2;
    uint16_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int *piVar6;
    uchar uVar7;
    int16_t *piVar8;
    int64_t iVar9;
    int16_t *arg4_00;
    int *piVar10;
    int64_t iVar11;
    uint16_t *puStackX_18;
    uint32_t var_48h;
    uint32_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    ulong uStack_60;
    uint uStack_58;
    uint uStack_54;
    uint uStack_50;
    uint uStack_4c;
    int64_t var_28h;
    int64_t var_20h;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    
    iVar11 = 0;
    uStack_60 = 0;
    iVar4 = fcn.00036528(0x412c8,0x3d600,0,&uStack_60);
    if (iVar4 < 0) {
        uVar7 = 0;
    }
    else {
        iVar4 = fcn.0002723c(_pe_dos_header);
        if (iVar4 != 0) {
            puStackX_18 = 0x2;
            uVar7 = 1;
            do {
                iVar5 = 0;
                arg4_00 = iVar4 + 6;
                iVar1 = *arg4_00;
                piVar8 = arg4_00;
                while (iVar1 != 0) {
                    piVar8 = piVar8 + 1;
                    iVar5 = iVar5 + 1;
                    iVar1 = *piVar8;
                }
                piVar8 = arg4_00 + iVar5 + 1;
                piVar10 = *(iVar4 + 4) + piVar8;
                if (*piVar8 == '\x05') {
                    uStack_58 = 0x5ce8128b;
                    cVar2 = '\x05';
                    uStack_54 = 0x40f02cec;
                    uStack_50 = 0x64807283;
                    uStack_4c = 0x58c83d0e;
                    do {
                        if (((cVar2 == '\x01') && (*(piVar8 + 1) == '\x04')) &&
                           (iVar5 = fcn.00036640(piVar8 + 4,&uStack_58,0x10), iVar5 == 0)) {
                            uVar3 = piVar8[10];
                            goto code_r0x0002793d;
                        }
                        piVar8 = piVar8 + piVar8[1];
                        cVar2 = *piVar8;
                    } while (cVar2 != '\x7f');
                    uVar3 = 0xff;
code_r0x0002793d:
                    if (uVar3 != arg1) goto code_r0x000279a2;
                    if (*piVar10 == 0x4f470000) {
                        iVar5 = 0;
                        while( true ) {
                            piVar6 = piVar10 + 1;
                            if (iVar5 != 0) {
                                iVar9 = iVar5;
                                do {
                                    piVar6 = piVar6 + piVar6[1];
                                    iVar9 = iVar9 + -1;
                                } while (iVar9 != 0);
                            }
                            if (*piVar6 != 0x4f4e0000) break;
                            arg4_00 = piVar6 + 0xe;
                            if (iVar11 == arg2) goto code_r0x000279f8;
                            iVar5 = iVar5 + 1;
                            iVar11 = iVar11 + 1;
                        }
                    }
                    if (iVar11 == arg2) {
code_r0x000279f8:
                        fcn.00032d3c(arg4,0x202,0x3f8d8,arg4_00);
                        (**(*0x44e20 + 0x48))(iVar4);
                        goto code_r0x000279d8;
                    }
                    (**(*0x44e20 + 0x48))(iVar4);
                    iVar11 = iVar11 + 1;
                }
                else {
code_r0x000279a2:
                    (**(*0x44e20 + 0x48))(iVar4);
                }
                iVar4 = fcn.0002723c(*puStackX_18);
                puStackX_18 = puStackX_18 + 1;
            } while (iVar4 != 0);
        }
        uVar7 = 0;
code_r0x000279d8:
        (**(*0x44e20 + 0x48))(0);
    }
    return uVar7;
}


/* fcn.00026cc8 @ 0x26cc8 */

ulong fcn.00026cc8(ulong noname_0,int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    ulong *puVar3;
    int64_t iStackX_20;
    
    iVar2 = (**(*0x44e20 + 0x98))(noname_0,0x3d860);
    if (-1 < iVar2) {
        for (puVar3 = (**(*arg2 + 0x48))(); puVar3 != NULL; puVar3 = puVar3[3]) {
            cVar1 = fcn.00026c50(iStackX_20,puVar3[2]);
            if (cVar1 != '\0') {
                fcn.0003d4be(arg1,0x202,0);
                fcn.00033f00(arg1,0x101,*puVar3);
                return 1;
            }
        }
    }
    return 0;
}


/* fcn.00026d50 @ 0x26d50 */

ulong fcn.00026d50(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int16_t *piVar2;
    ulong *puVar3;
    int64_t iVar4;
    
    iVar4 = 0;
    for (piVar2 = arg1 + 6; *piVar2 != 0; piVar2 = piVar2 + 1) {
        iVar4 = iVar4 + 1;
    }
    puVar3 = (**(*arg3 + 0x48))();
    while( true ) {
        if (puVar3 == NULL) {
            return 0;
        }
        cVar1 = fcn.00026c50(arg1 + iVar4 * 2 + 8,puVar3[2]);
        if (cVar1 != '\0') break;
        puVar3 = puVar3[3];
    }
    *arg2 = *puVar3;
    return 1;
}


/* fcn.0002729c @ 0x2729c */

void fcn.0002729c(uint32_t arg1,int64_t arg2)

{
    char cVar1;
    bool bVar2;
    char *pcVar3;
    ulong uVar4;
    char *pcVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint16_t uVar8;
    int16_t *piVar9;
    uint64_t uVar10;
    char *pcStackX_18;
    ulong uStackX_20;
    int64_t var_160h;
    int64_t var_3c0h;
    int64_t var_3c8h;
    ulong auStack_468 [2];
    int16_t aiStack_458 [264];
    uchar auStack_248 [528];
    
    pcStackX_18 = NULL;
    uStackX_20 = 0;
    uVar8 = arg1;
    auStack_468[0] = 0;
    bVar2 = false;
    if ((0xff < uVar8) &&
       ((((*0x44d30 != 0 || (iVar6 = (**(*0x44e20 + 0x140))(0x3da20,0,0x44d30), -1 < iVar6)) &&
         (iVar6 = (**(*0x44d30 + 0x18))(*0x44d30,*0x46e58,pcStackX_18,&uStackX_20), iVar6 == -0x7ffffffffffffffb))
        && ((iVar6 = (**(*0x44e20 + 0x40))(4,uStackX_20,&pcStackX_18), -1 < iVar6 &&
            (iVar6 = (**(*0x44d30 + 0x18))(*0x44d30,*0x46e58,pcStackX_18,&uStackX_20), pcVar5 = pcStackX_18,
            -1 < iVar6)))))) {
        pcVar3 = pcStackX_18;
code_r0x000273c7:
        do {
            for (; (uVar4 = *0x46e58, *pcStackX_18 != ';' && (*pcStackX_18 != '\0')); pcStackX_18 = pcStackX_18 + 1) {
            }
            if ((*pcVar3 == 'x') && (pcVar3[1] == '-')) {
                if (*pcStackX_18 == '\0') {
                    bVar2 = true;
                }
                pcStackX_18 = pcStackX_18 + 1;
            }
            else {
                cVar1 = *pcStackX_18;
                *pcStackX_18 = '\0';
                auStack_468[0] = 0x100;
                iVar6 = (**(*0x44d30 + 8))(*0x44d30,pcVar3,uVar4,uVar8,aiStack_458,auStack_468,0);
                *pcStackX_18 = cVar1;
                if (iVar6 < 0) {
                    if (cVar1 == '\0') break;
                    *pcStackX_18 = ';';
                    pcStackX_18 = pcStackX_18 + 1;
                    pcVar3 = pcStackX_18;
                    goto code_r0x000273c7;
                }
                uVar7 = 0;
                while (piVar9 = aiStack_458, uVar10 = 0, aiStack_458[0] != 0) {
                    do {
                        piVar9 = piVar9 + 1;
                        uVar10 = uVar10 + 1;
                    } while (*piVar9 != 0);
                    if (uVar10 <= uVar7) break;
                    if (aiStack_458[uVar7] == 0x3a) {
                        aiStack_458[uVar7] = 0;
                        break;
                    }
                    uVar7 = uVar7 + 1;
                }
                if (arg2 == 0) {
                    fcn.00032d3c(auStack_248,0x202,0x3f8d8,aiStack_458);
                }
                else {
                    fcn.00032d3c(auStack_248,0x202,0x41210,aiStack_458);
                }
                if (*pcStackX_18 == '\0') {
                    iVar6 = (**(*0x44d30 + 0x10))(*0x44d30,*0x46e58,uVar8,pcVar3,auStack_248,0);
                    if (iVar6 < 0) goto code_r0x0002756e;
                    break;
                }
                *pcStackX_18 = '\0';
                iVar6 = (**(*0x44d30 + 0x10))(*0x44d30);
                *pcStackX_18 = ';';
                pcStackX_18 = pcStackX_18 + 1;
                if (iVar6 < 0) goto code_r0x0002756e;
            }
            pcVar3 = pcStackX_18;
        } while (!bVar2);
        if (pcVar5 != NULL) {
code_r0x0002756e:
            (**(*0x44e20 + 0x48))(pcVar5);
        }
    }
    return;
}


/* fcn.00027720 @ 0x27720 */

void fcn.00027720(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint *puVar2;
    uint64_t uVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint *puStackX_20;
    uint *puStack_28;
    
    puStackX_20 = NULL;
    puStack_28 = NULL;
    iVar1 = fcn.00036528(0x412a0,0x3e800,0,&puStackX_20);
    if (-1 < iVar1) {
        arg1 = *arg1;
        if (arg3 < *arg2 + arg1) {
            do {
                puVar2 = puStack_28;
                if (puStackX_20 != NULL) {
                    do {
                        uVar5 = 0;
                        uVar3 = *(puVar2 + 1) - 2 >> 1;
                        if (uVar3 != 0) {
                            puVar4 = puVar2 + 6;
                            do {
                                if ((*(arg3 + 6) & 0xff) == (*puVar4 & 0xff)) {
                                    *arg3 = *puVar2;
                                    puVar2 = puStackX_20;
                                    break;
                                }
                                uVar5 = uVar5 + 1;
                                puVar4 = puVar4 + 1;
                            } while (uVar5 < uVar3);
                        }
                        puVar2 = puVar2 + *(puVar2 + 1) + 4;
                    } while (puVar2 < puStackX_20);
                }
                arg3 = arg3 + *(arg3 + 4) + 4;
            } while (arg3 < *arg2 + arg1);
        }
        (**(*0x44e20 + 0x48))(0);
    }
    return;
}


/* fcn.00026ae8 @ 0x26ae8 */

uint16_t fcn.00026ae8(int64_t arg1,uint32_t arg2)

{
    uint16_t uVar1;
    uint16_t uVar2;
    
    uVar1 = *arg1;
    uVar2 = 0;
    while( true ) {
        if (uVar1 == 0) {
            return 0xffff;
        }
        if (uVar1 == arg2) break;
        uVar2 = uVar2 + 1;
        uVar1 = *(uVar2 * 7 + arg1);
    }
    return uVar2;
}


/* fcn.00027598 @ 0x27598 */

int64_t fcn.00027598(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uStackX_20;
    ulong uStack_18;
    int64_t iStack_10;
    
    uStack_18 = 0;
    uStackX_20 = 8;
    iVar1 = (**(*0x44e28 + 0x48))(L"FboGfHiiHandle",0x3e800,0,&uStackX_20,&iStack_10);
    if (-1 < iVar1) {
        iVar1 = fcn.00036528(0x41240,0x3e800,0,&uStack_18);
        if (-1 < iVar1) {
            fcn.000107d8(iStack_10,*(arg1 & 0xffff),0x3f8d8,arg2);
            (**(*0x44e20 + 0x48))(0);
        }
    }
    return iVar1;
}


/* fcn.00027f8c @ 0x27f8c */

void fcn.00027f8c(int64_t arg1,int64_t arg2)

{
    ulong noname_0;
    uint32_t *puVar1;
    char cVar2;
    uint16_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint16_t uVar6;
    uint32_t *arg3;
    int64_t iVar7;
    uint32_t *puStackX_18;
    uint64_t uStackX_20;
    int64_t var_190h;
    int64_t var_198h;
    uchar auStack_248 [528];
    
    uVar5 = 0;
    puStackX_18 = NULL;
    uStackX_20 = 0;
    uVar3 = fcn.00026abc();
    uVar6 = 0;
    if (uVar3 != 0) {
        do {
            if (*(*0x44d50 + uVar6 * 10) == arg1) break;
            uVar6 = uVar6 + 1;
        } while (uVar6 < uVar3);
    }
    if (0x11 < arg2) {
        fcn.0002729c(*(*0x44d50 + 2 + uVar6 * 10),0);
        return;
    }
    if (*0x44d38 == '\0') {
        iVar4 = fcn.00036528(0x412e0,0x3e800,0,&uStackX_20);
    }
    else {
        iVar4 = fcn.00036528(0x413b0,0x3e7f0,0,&uStackX_20);
        if (*0x44d60 != 0) {
            fcn.00027720(&puStackX_18,&uStackX_20,puStackX_18);
        }
    }
    puVar1 = puStackX_18;
    if ((-1 < iVar4) && (5 < uStackX_20)) {
        for (arg3 = puStackX_18; arg3 < uStackX_20 + puStackX_18; arg3 = arg3 + arg3[1] + 4) {
            if ((*arg3 == arg1) && (2 < arg3[1])) {
                iVar7 = *(arg3 + (arg2 & 0xffU) * 2 + 6) * 0x45;
                iVar4 = *(iVar7 + 0x1e + *0x44d60) * 0x10 + *(iVar7 + 0x1c + *0x44d60);
                goto code_r0x00028103;
            }
        }
    }
    goto code_r0x000281a3;
    while (uVar5 = uVar5 + 1, uVar5 < 10) {
code_r0x00028103:
        if (*(uVar5 + iVar4) == ':') {
            iVar4 = iVar4 + 1 + uVar5;
            break;
        }
    }
    cVar2 = fcn.00027824(*arg3,arg2 & 0xffU,arg3,auStack_248);
    if (cVar2 == '\0') {
        fcn.00032d3c(auStack_248,0x202,0x406b4,iVar4);
    }
    noname_0 = *(iVar7 + 0x3d + *0x44d60);
    iVar4 = (**(*0x44e20 + 0x140))(0x3e800,0,&puStackX_18);
    if (-1 < iVar4) {
        fcn.00026cc8(noname_0,auStack_248,&puStackX_18);
    }
    fcn.0002729c(*(*0x44d50 + 2 + uVar6 * 10),auStack_248);
code_r0x000281a3:
    if (puVar1 != NULL) {
        (**(*0x44e20 + 0x48))(puVar1);
    }
    return;
}


/* fcn.0002765c @ 0x2765c */

int64_t fcn.0002765c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uStackX_20;
    ulong uStack_18;
    int64_t iStack_10;
    
    uStack_18 = 0;
    uStackX_20 = 8;
    iVar1 = (**(*0x44e28 + 0x48))(L"FboGfHiiHandle",0x3e800,0,&uStackX_20,&iStack_10);
    if (-1 < iVar1) {
        iVar1 = fcn.00036528(0x41270,0x3e800,0,&uStack_18);
        if (-1 < iVar1) {
            fcn.000107d8(iStack_10,*(arg1 & 0xffff),0x3f8d8,arg2);
            (**(*0x44e20 + 0x48))(0);
        }
    }
    return iVar1;
}


/* fcn.000281d0 @ 0x281d0 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

void fcn.000281d0(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    uint16_t uVar2;
    int64_t iVar3;
    uint16_t *arg1_00;
    uint16_t *puVar4;
    char16_t *arg1_01;
    uint32_t *puVar5;
    uint64_t uVar6;
    uint16_t uVar7;
    uint32_t *puStackX_18;
    uint64_t uStackX_20;
    int64_t var_40h;
    int64_t var_48h;
    uint32_t **ppuVar8;
    uint16_t *apuStack_38 [2];
    int64_t var_bp_10h;
    
    uVar6 = 0;
    puStackX_18 = NULL;
    uStackX_20 = 0;
    uVar2 = fcn.00026abc();
    uVar7 = 0;
    if (uVar2 != 0) {
        do {
            if (*(*0x44d50 + uVar7 * 10) == arg1) break;
            uVar7 = uVar7 + 1;
        } while (uVar7 < uVar2);
    }
    if (arg2 < 0x12) {
        ppuVar8 = &puStackX_18;
        arg1_01 = L"DefaultUefiDevOrder";
        if (*0x44d38 == '\0') {
            arg1_01 = L"OriUefiDevOrder";
        }
        iVar3 = fcn.00036528(arg1_01,0x3e800,0,&uStackX_20);
        puVar1 = puStackX_18;
        if ((-1 < iVar3) && (5 < uStackX_20)) {
            for (puVar5 = puStackX_18; puVar5 < uStackX_20 + puStackX_18; puVar5 = puVar5 + puVar5[1] + 4) {
                if ((*puVar5 == arg1) && (2 < puVar5[1])) {
                    uVar2 = *(puVar5 + (arg2 & 0xffU) * 4 + 6);
                    arg1_00 = fcn.0002723c(uVar2);
                    if (arg1_00 != NULL) {
                        puStackX_18 = arg1_00 + 3;
                        iVar3 = (**(*0x44e20 + 0x140))(0x3e800,0,apuStack_38,*0x44e20,ppuVar8);
                        puVar5 = arg1_00 + 3;
                        if (-1 < iVar3) {
                            fcn.00026d50(arg1_00,&puStackX_18,apuStack_38);
                            puVar5 = puStackX_18;
                        }
                        goto code_r0x00028390;
                    }
                    puStackX_18 = NULL;
                    apuStack_38[0] = NULL;
                    iVar3 = fcn.00036528(0x41388,0x3e800,0,&puStackX_18);
                    if (-1 < iVar3) {
                        arg1_00 = apuStack_38[0];
                        if (puStackX_18 / 0x68 == 0) goto code_r0x000283a8;
                        puVar4 = apuStack_38[0];
                        goto code_r0x00028371;
                    }
                    break;
                }
            }
        }
code_r0x000283b5:
        if (puVar1 != NULL) {
            (**(*0x44e20 + 0x48))(puVar1);
        }
    }
    else {
        fcn.0002729c(*(*0x44d50 + 2 + uVar7 * 10),0);
    }
    return;
code_r0x00028371:
    if (uVar2 != *puVar4) goto code_r0x00028377;
    puVar5 = apuStack_38[0] + uVar6 * 0x34 + 1;
code_r0x00028390:
    fcn.0002729c(*(*0x44d50 + 2 + uVar7 * 10),puVar5);
code_r0x000283a8:
    (**(*0x44e20 + 0x48))(arg1_00);
    goto code_r0x000283b5;
code_r0x00028377:
    uVar6 = uVar6 + 1;
    puVar4 = puVar4 + 0x34;
    if (puStackX_18 / 0x68 <= uVar6) goto code_r0x000283a8;
    goto code_r0x00028371;
}


/* fcn.00027100 @ 0x27100 */

int64_t fcn.00027100(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iStackX_18;
    int64_t var_28h;
    
    var_28h = 0;
    iStackX_18 = 0;
    if ((((*0x44d30 != NULL) || (iVar1 = (**(*0x44e20 + 0x140))(0x3da20,0,0x44d30), -1 < iVar1)) &&
        (iVar1 = (*(*0x44d30)[3])(*0x44d30,arg1,iStackX_18,&var_28h), iVar1 == -0x7ffffffffffffffb)) &&
       ((iVar1 = (**(*0x44e20 + 0x40))(4,var_28h,&iStackX_18), -1 < iVar1 &&
        (iVar1 = (*(*0x44d30)[3])(*0x44d30,arg1,iStackX_18,&var_28h), -1 < iVar1)))) {
        uVar2 = 0;
        if (var_28h != 0) {
            do {
                if (*(uVar2 + iStackX_18) == ';') break;
                uVar2 = uVar2 + 1;
            } while (uVar2 < var_28h);
        }
        if (uVar2 != var_28h) {
            *(uVar2 + iStackX_18) = 0;
        }
        iVar1 = (***0x44d30)(*0x44d30,arg1,arg2,iStackX_18,0,0x3fe44,0);
        (**(*0x44e20 + 0x48))(iStackX_18);
    }
    return iVar1;
}


/* fcn.00028778 @ 0x28778 */

int64_t fcn.00028778(void)

{
    uint16_t uVar1;
    ulong noname_0;
    char cVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t *puVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint32_t uVar10;
    uchar *arg3;
    uint16_t uVar11;
    uint64_t unaff_R12;
    uint64_t arg2;
    uint32_t *puVar12;
    uint64_t unaff_R15;
    uint16_t uStackX_10;
    int16_t var_1c0h;
    int16_t var_1c8h;
    int64_t var_1d0h;
    int16_t var_1d8h;
    uint32_t *puStack_288;
    uint64_t uStack_280;
    int64_t iStack_278;
    uint32_t *puStack_270;
    uchar auStack_268 [16];
    uchar auStack_258 [536];
    
    puStack_288 = NULL;
    uStack_280 = 0;
    puStack_270 = NULL;
    iStack_278 = 0;
    if (*0x44d38 == '\0') {
        iVar5 = fcn.00036528(0x412a0,0x3e800,0,&uStack_280);
    }
    else {
        iVar5 = fcn.00036528(0x413b0,0x3e7f0,0,&uStack_280);
        if (*0x44d60 != 0) {
            fcn.00027720(&puStack_288,&uStack_280,puStack_288);
        }
    }
    puVar8 = puStack_288;
    puVar7 = NULL;
    if ((-1 < iVar5) && (puVar7 = NULL, 6 < uStack_280)) {
        iVar5 = fcn.00036528(0x41310,0x3e800,0,&iStack_278);
        if (iVar5 < 0) {
            return iVar5;
        }
        puVar7 = puStack_270;
        puVar9 = puVar8;
        puVar12 = puStack_270;
        if (puVar8 < uStack_280 + puVar8) {
            do {
                uVar10 = *puVar9;
                uVar6 = uVar10;
                unaff_R12 = unaff_R12 & 0xffffffffffffff00;
                unaff_R15 = unaff_R15 & 0xffffffffffffff00;
                if (uVar10 != 0xff) {
                    uVar3 = fcn.00026b20(uVar10);
                    uVar10 = uVar6;
                    uVar6 = uVar6 & 0xffffffff;
                    uVar4 = fcn.00026ae8(*0x44d58,uVar10);
                    arg3 = 0xffff;
                    if ((uVar3 != 0xffff) && (uVar4 != 0xffff)) {
                        arg2 = 0;
                        if (*(*0x44d50 + 4 + uVar3 * 10) != 0) {
                            for (puVar12 = puVar7; (puVar12 < iStack_278 + puVar7 && (*puVar12 != uVar10));
                                puVar12 = puVar12 + puVar12[1] + 4) {
                            }
                        }
                        if (puVar12 < iStack_278 + puVar7) {
                            uStackX_10 = 0;
                            if ((puVar9[1] - 2 & 0xfffffffffffffffe) == 0) {
code_r0x00028b2f:
                                iVar5 = CONCAT71(uVar6 >> 8,0x12);
                            }
                            else {
                                uVar11 = (puVar12 - puVar7) + 6;
                                do {
                                    uVar1 = *(puVar9 + arg2 * 2 + 6);
                                    if (*(*0x44d50 + 4 + uVar3 * 10) != 0) {
                                        cVar2 = fcn.00027824(*puVar9,arg2,arg3,auStack_258);
                                        if (cVar2 == '\0') {
                                            iVar5 = (uVar1 & 0xff) * 0x45;
                                            fcn.00032d3c(auStack_258,0x202,0x406b4,
                                                         *(iVar5 + 0x1e + *0x44d60) * 0x10 + *(iVar5 + 0x1c + *0x44d60))
                                            ;
                                        }
                                        arg3 = auStack_268;
                                        noname_0 = *((uVar1 & 0xff) * 0x45 + 0x3d + *0x44d60);
                                        iVar5 = (**(*0x44e20 + 0x140))(0x3e800,0);
                                        if (-1 < iVar5) {
                                            arg3 = auStack_268;
                                            fcn.00026cc8(noname_0,auStack_258,arg3);
                                        }
                                        if (0x100 < *(puVar12 + arg2 * 2 + 6)) {
                                            arg3 = 0x3f8d8;
                                            fcn.000107d8(*0x46e58,*(puVar12 + arg2 * 2 + 6),0x3f8d8,auStack_258);
                                            fcn.00027598(uVar11,auStack_258);
                                        }
                                    }
                                    iVar5 = (unaff_R15 & 0xff) + uVar4 * 0x12;
                                    uVar6 = unaff_R12 & 0xff;
                                    if ((*(puVar9 + arg2 * 2 + 6) & 0xff00) == 0) {
                                        uVar10 = unaff_R12 + unaff_R15;
                                        arg3 = uVar10;
                                        unaff_R12 = CONCAT71(unaff_R12 >> 8,unaff_R12 + '\x01');
                                        *(iVar5 + uVar6 + 0x46ce0) = uVar10;
                                    }
                                    else {
                                        unaff_R15 = CONCAT71(unaff_R15 >> 8,unaff_R15 + '\x01');
                                        *(iVar5 + uVar6 + 0x46ce0) = 0x12;
                                    }
                                    uVar6 = iVar5 + uVar6;
                                    if (0x11 < (unaff_R15 & 0xff) + (unaff_R12 & 0xff)) break;
                                    uStackX_10 = uStackX_10 + 1;
                                    arg2 = uStackX_10;
                                    uVar11 = uVar11 + 2;
                                } while (arg2 < puVar9[1] - 2 >> 1);
                                puVar7 = puStack_270;
                                puVar8 = puStack_288;
                                if (unaff_R12 == '\0') goto code_r0x00028b2f;
                                iVar5 = 0;
                            }
                            fcn.00027f8c(*puVar9,iVar5);
                            *(uVar4 + 0x46cc0) = unaff_R12;
                            if (unaff_R15 != '\0') {
                                cVar2 = unaff_R15 + unaff_R12;
                                unaff_R15 = CONCAT71(unaff_R15 >> 8,cVar2);
                                *(uVar4 + 0x46cc0) = cVar2;
                            }
                        }
                    }
                }
                puVar9 = puVar9 + puVar9[1] + 4;
            } while (puVar9 < uStack_280 + puVar8);
        }
    }
    if (puVar8 != NULL) {
        (**(*0x44e20 + 0x48))(puVar8);
    }
    if (puVar7 != NULL) {
        (**(*0x44e20 + 0x48))(puVar7);
    }
    return 0;
}


/* fcn.00028bc0 @ 0x28bc0 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Variable defined which should be unmapped: var_38h

int64_t fcn.00028bc0(void)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    int64_t iVar4;
    uint16_t *puVar5;
    char16_t *arg1;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint32_t arg2;
    char cVar12;
    uint64_t uVar13;
    uint32_t *puVar14;
    uint32_t *puVar15;
    uint8_t uStackX_8;
    unkbyte7 StackX_9;
    uint16_t uStackX_18;
    int64_t var_48h;
    int16_t var_50h;
    int16_t var_58h;
    int16_t var_60h;
    uint64_t uStack_80;
    uint32_t *puStack_78;
    uint32_t *puStack_70;
    int64_t iStack_68;
    uint16_t *puStack_60;
    uint64_t uStack_58;
    int16_t var_48h_2;
    uint32_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    puStack_78 = NULL;
    uStack_80 = 0;
    puStack_70 = NULL;
    iStack_68 = 0;
    arg1 = L"DefaultUefiDevOrder";
    if (*0x44d38 == '\0') {
        arg1 = L"UefiDevOrder";
    }
    iVar4 = fcn.00036528(arg1,0x3e800,0,&uStack_80);
    puVar10 = puStack_78;
    puVar11 = NULL;
    puVar14 = puVar10;
    if ((-1 < iVar4) && (puVar11 = NULL, 6 < uStack_80)) {
        iVar4 = fcn.00036528(0x41360,0x3e800,0,&iStack_68);
        if (iVar4 < 0) {
            return iVar4;
        }
        puVar11 = puStack_70;
        if (puVar10 < uStack_80 + puVar10) {
            puVar15 = CONCAT71(StackX_9,uStackX_8);
            do {
                uVar7 = *puVar10;
                uVar13 = 0;
                cVar12 = '\0';
                uStackX_8 = 0;
                uVar2 = fcn.00026b20(uVar7);
                arg2 = uVar7;
                uVar7 = uVar7 & 0xffffffff;
                uVar3 = fcn.00026ae8(*0x44d70,arg2);
                if ((uVar2 != 0xffff) && (uVar3 != 0xffff)) {
                    uVar6 = uVar2;
                    uVar8 = 0;
                    puStack_60 = uVar6 * 5;
                    if (*(*0x44d50 + 4 + uVar6 * 10) != 0) {
                        for (puVar15 = puVar11; (puVar15 < iStack_68 + puVar11 && (*puVar15 != arg2));
                            puVar15 = puVar15 + puVar15[1] + 4) {
                        }
                    }
                    if (puVar15 < iStack_68 + puVar11) {
                        uStackX_18 = 0;
                        if ((puVar10[1] - 2 & 0xfffffffffffffffc) == 0) {
                            uVar9 = 0;
code_r0x00028f70:
                            fcn.000281d0(*puVar10,CONCAT71(uVar7 >> 8,0x12));
                        }
                        else {
                            uVar2 = (puVar15 - puVar11) + 6;
                            do {
                                uVar1 = *(puVar10 + uVar8 * 4 + 6);
                                if (*(*0x44d50 + 4 + uVar6 * 10) != 0) {
                                    puVar5 = fcn.0002723c(uVar1);
                                    if (puVar5 == NULL) {
                                        uVar7 = 0;
                                        uStack_58 = 0;
                                        puStack_60 = NULL;
                                        iVar4 = fcn.00036528(0x41388,0x3e800,0,&uStack_58);
                                        if (iVar4 < 0) goto code_r0x00028ec1;
                                        if (uStack_58 / 0x68 != 0) {
                                            puVar5 = puStack_60;
                                            do {
                                                if ((uVar1 == *puVar5) && (0x100 < *(puVar15 + uVar8 * 2 + 6))) {
                                                    puVar5 = puStack_60 + uVar7 * 0x34 + 1;
                                                    fcn.000107d8(*0x46e58,*(puVar15 + uVar8 * 2 + 6),0x3f8d8,puVar5);
                                                    fcn.0002765c(uVar2,puVar5);
                                                    break;
                                                }
                                                uVar7 = uVar7 + 1;
                                                puVar5 = puVar5 + 0x34;
                                            } while (uVar7 < uStack_58 / 0x68);
                                        }
                                        puVar5 = puStack_60;
                                    }
                                    else {
                                        puStack_60 = puVar5 + 3;
                                        iVar4 = (**(*0x44e20 + 0x140))(0x3e800,0);
                                        if (-1 < iVar4) {
                                            fcn.00026d50(puVar5,&puStack_60,&var_48h_2);
                                        }
                                        if (0x100 < *(puVar15 + uVar8 * 2 + 6)) {
                                            fcn.000107d8(*0x46e58,*(puVar15 + uVar8 * 2 + 6),0x3f8d8,puStack_60);
                                            fcn.0002765c(uVar2,puStack_60);
                                        }
                                    }
                                    (**(*0x44e20 + 0x48))(puVar5);
                                }
code_r0x00028ec1:
                                puVar11 = puStack_70;
                                puVar14 = puStack_78;
                                uVar9 = uStackX_8;
                                iVar4 = uVar13 + uVar3 * 0x12 + uVar9;
                                if ((*(puVar10 + uVar8 * 4 + 6) & 0xff000000) == 0) {
                                    *(iVar4 + 0x46e60) = uStackX_8 + uVar13;
                                    uStackX_8 = uStackX_8 + 1;
                                    uVar9 = uStackX_8;
                                }
                                else {
                                    *(iVar4 + 0x46e60) = 0x12;
                                    uVar13 = uVar13 + 1;
                                }
                                cVar12 = uVar13;
                                uVar7 = 0;
                                if (0x11 < uVar13 + uVar9) break;
                                uStackX_18 = uStackX_18 + 1;
                                uVar8 = uStackX_18;
                                uVar2 = uVar2 + 2;
                            } while (uVar8 < puVar10[1] - 2 >> 2);
                            if (uVar9 == '\0') goto code_r0x00028f70;
                            fcn.000281d0(*puVar10,0);
                        }
                        *(uVar3 + 0x46e40) = uVar9;
                        if (cVar12 != '\0') {
                            *(uVar3 + 0x46e40) = cVar12 + uVar9;
                        }
                    }
                }
                puVar10 = puVar10 + puVar10[1] + 4;
            } while (puVar10 < uStack_80 + puVar14);
        }
    }
    if (puVar14 != NULL) {
        (**(*0x44e20 + 0x48))(puVar14);
    }
    if (puVar11 != NULL) {
        (**(*0x44e20 + 0x48))(puVar11);
    }
    return 0;
}


/* fcn.00027cd8 @ 0x27cd8 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Removing unreachable block (ram,0x00027f57)

int64_t fcn.00027cd8(void)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint32_t *puVar3;
    uint16_t uVar4;
    int64_t iVar5;
    uint32_t *puVar6;
    uint64_t uVar7;
    uint32_t *puVar8;
    uint64_t uVar9;
    uint32_t *puVar10;
    uint32_t *puStackX_8;
    int64_t iStackX_10;
    uint32_t *puStackX_18;
    uint32_t *puStackX_20;
    int64_t var_48h;
    int64_t var_50h;
    uint32_t var_58h;
    int64_t var_60h;
    uint32_t *puStack_68;
    int64_t iStack_60;
    uint64_t uStack_58;
    uchar auStack_50 [16];
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    puStack_68 = NULL;
    puStackX_20 = NULL;
    puStackX_18 = NULL;
    iStack_60 = 0;
    iVar5 = fcn.00036528(0x41340,0x3e800,0,&puStackX_18);
    puVar6 = NULL;
    if ((-1 < iVar5) && (puVar6 = NULL, 0x6 < puStackX_18)) {
        iVar5 = fcn.00036528(0x41360,0x3e800,0,&iStack_60);
        if (iVar5 < 0) {
            return iVar5;
        }
        puVar6 = puStackX_20;
        if (puStackX_18 != NULL) {
            puVar8 = puStackX_18;
            puVar10 = puStackX_8;
            do {
                uVar2 = *puStack_68;
                uVar4 = fcn.00026b20(uVar2);
                iVar5 = uVar4 * 5;
                if (*(*0x44d50 + 4 + uVar4 * 10) != 0) {
                    for (puVar10 = puVar6; (puVar10 < iStack_60 + puVar6 && (*puVar10 != uVar2));
                        puVar10 = puVar10 + puVar10[1] + 4) {
                    }
                }
                puStackX_8 = puStackX_8 & 0xffffffffffff0000;
                puVar3 = puStackX_8;
                iStackX_10 = iVar5;
                if ((puStack_68[1] - 2 & 0xfffffffffffffffc) != 0) {
                    puStackX_8._0_2_ = 0;
                    uVar9 = 0;
                    uVar4 = puStackX_8;
                    puStackX_8 = puVar3;
                    do {
                        if (*(*0x44d50 + 4 + iVar5 * 2) != 0) {
                            uVar1 = *(puStack_68 + uVar9 * 4 + 6);
                            puVar6 = fcn.0002723c(uVar1);
                            if (puVar6 == NULL) {
                                uStack_58 = 0;
                                puStackX_8 = NULL;
                                iVar5 = fcn.00036528(0x41388,0x3e800,0,&uStack_58);
                                if (-1 < iVar5) {
                                    puVar6 = puStackX_8;
                                    if (uStack_58 / 0x68 != 0) {
                                        puVar8 = puStackX_8;
                                        uVar7 = 0;
                                        do {
                                            if (uVar1 == *puVar8) {
                                                puVar8 = puStackX_8 + uVar7 * 0x68 + 2;
                                                goto code_r0x00027ee5;
                                            }
                                            uVar7 = uVar7 + 1;
                                            puVar8 = puVar8 + 0x1a;
                                        } while (uVar7 < uStack_58 / 0x68);
                                    }
                                    goto code_r0x00027efe;
                                }
                            }
                            else {
                                if (*(*0x44d50 + 4 + iStackX_10 * 2) != 0) {
                                    puStackX_8 = puVar6 + 6;
                                    iVar5 = (**(*0x44e20 + 0x140))(0x3e800,0,auStack_50);
                                    puVar8 = puVar6 + 6;
                                    if (-1 < iVar5) {
                                        fcn.00026d50(puVar6,&puStackX_8,auStack_50);
                                        puVar8 = puStackX_8;
                                    }
code_r0x00027ee5:
                                    fcn.000107d8(*0x46e58,*(puVar10 + uVar9 * 2 + 6),0x3f8d8,puVar8);
                                }
code_r0x00027efe:
                                (**(*0x44e20 + 0x48))(puVar6);
                            }
                            iVar5 = iStackX_10;
                        }
                        uVar4 = uVar4 + 1;
                        uVar9 = uVar4;
                    } while (uVar9 < puStack_68[1] - 2 >> 2);
                    puVar6 = puStackX_20;
                    puVar8 = puStackX_18;
                }
                puStack_68 = puStack_68 + puStack_68[1] + 4;
            } while (puStack_68 < puVar8);
        }
    }
    if (puVar6 != NULL) {
        (**(*0x44e20 + 0x48))(puVar6);
    }
    return 0;
}


/* fcn.00027a20 @ 0x27a20 */

int64_t fcn.00027a20(void)

{
    uint32_t uVar1;
    ulong noname_0;
    char cVar2;
    uint16_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint32_t *puVar6;
    uint32_t *puVar7;
    uint32_t *puVar8;
    int64_t arg3;
    uint64_t uVar9;
    uint64_t arg2;
    uint16_t uVar10;
    uint32_t *puVar11;
    uint64_t uStackX_8;
    uint32_t *puStackX_10;
    uint32_t *puStackX_18;
    int64_t iStackX_20;
    uint32_t var_1a0h;
    int64_t var_1a8h;
    int64_t var_1b0h;
    int64_t var_1b8h;
    uchar auStack_268 [8];
    int64_t iStack_260;
    uchar auStack_258 [536];
    
    puStackX_18 = NULL;
    puStackX_10 = NULL;
    uStackX_8 = 0;
    iStackX_20 = 0;
    iVar4 = fcn.00036528(0x412e0,0x3e800,0,&uStackX_8);
    puVar7 = puStackX_18;
    puVar6 = NULL;
    if ((-1 < iVar4) && (puVar6 = NULL, 6 < uStackX_8)) {
        arg3 = 0;
        iVar4 = fcn.00036528(0x41310,0x3e800,0,&iStackX_20);
        if (iVar4 < 0) {
            return iVar4;
        }
        puVar6 = puStackX_10;
        puVar8 = puVar7;
        uVar9 = uStackX_8;
        puVar11 = puStackX_10;
        if (puVar7 < uStackX_8 + puVar7) {
            do {
                arg2 = 0;
                uVar1 = *puVar8;
                if (uVar1 != 0xff) {
                    uVar3 = fcn.00026b20(uVar1);
                    iVar4 = uVar3 * 5;
                    uVar10 = 0;
                    if (*(*0x44d50 + 4 + uVar3 * 10) != 0) {
                        for (puVar11 = puVar6; (puVar11 < iStackX_20 + puVar6 && (*puVar11 != uVar1));
                            puVar11 = puVar11 + puVar11[1] + 4) {
                        }
                    }
                    iStack_260 = iVar4;
                    if ((puVar8[1] - 2 & 0xfffffffffffffffe) != 0) {
                        iVar5 = *0x44d50;
                        do {
                            uVar9 = *(puVar8 + arg2 * 2 + 6) & 0xff;
                            if (*(iVar5 + 4 + iVar4 * 2) != 0) {
                                cVar2 = fcn.00027824(*puVar8,arg2,arg3,auStack_258);
                                if (cVar2 == '\0') {
                                    iVar4 = uVar9 * 0x45;
                                    fcn.00032d3c(auStack_258,0x202,0x406b4,
                                                 *(iVar4 + 0x1e + *0x44d60) * 0x10 + *(iVar4 + 0x1c + *0x44d60));
                                }
                                noname_0 = *(uVar9 * 0x45 + 0x3d + *0x44d60);
                                iVar4 = (**(*0x44e20 + 0x140))(0x3e800,0,auStack_268);
                                if (-1 < iVar4) {
                                    fcn.00026cc8(noname_0,auStack_258,auStack_268);
                                }
                                arg3 = 0x3f8d8;
                                fcn.000107d8(*0x46e58,*(puVar11 + arg2 * 2 + 6),0x3f8d8,auStack_258);
                                iVar5 = *0x44d50;
                                iVar4 = iStack_260;
                            }
                            uVar10 = uVar10 + 1;
                            arg2 = uVar10;
                        } while (arg2 < puVar8[1] - 2 >> 1);
                        puVar6 = puStackX_10;
                        puVar7 = puStackX_18;
                        uVar9 = uStackX_8;
                    }
                }
                puVar8 = puVar8 + puVar8[1] + 4;
            } while (puVar8 < uVar9 + puVar7);
        }
    }
    if (puVar7 != NULL) {
        (**(*0x44e20 + 0x48))(puVar7);
    }
    if (puVar6 != NULL) {
        (**(*0x44e20 + 0x48))(puVar6);
    }
    return 0;
}


/* fcn.000296dc @ 0x296dc */

void fcn.000296dc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong noname_0;
    uint32_t *puVar1;
    char cVar2;
    uint16_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint32_t *puVar6;
    uint64_t uVar7;
    uchar *arg2_00;
    uint16_t uVar8;
    uint32_t *puVar9;
    uchar *arg3_00;
    uint32_t *puVar10;
    uint64_t uStackX_20;
    uint32_t **ppuVar11;
    uint32_t *puStack_258;
    uchar auStack_250 [8];
    uint64_t auStack_248 [2];
    uchar auStack_238 [528];
    
    puStack_258 = NULL;
    uStackX_20 = 0;
    uVar3 = fcn.00026abc();
    ppuVar11 = &puStack_258;
    arg3_00 = NULL;
    iVar4 = fcn.00036528(arg2,arg3,0,&uStackX_20);
    puVar1 = puStack_258;
    if (-1 < iVar4) {
        if (arg1 == '\0') {
            if ((5 < uStackX_20) && (uVar7 = uStackX_20, puVar9 = puStack_258, puStack_258 < uStackX_20 + puStack_258)
               ) {
                do {
                    if (2 < puVar9[1]) {
                        uVar8 = 0;
                        if (uVar3 != 0) {
                            do {
                                if (*(*0x44d50 + uVar8 * 10) == *puVar9) break;
                                uVar8 = uVar8 + 1;
                            } while (uVar8 < uVar3);
                        }
                        if (uVar3 != uVar8) {
                            if ((*(puVar9 + 6) & 0xff00) == 0) {
                                iVar4 = *(puVar9 + 6) * 0x45;
                                iVar4 = *(iVar4 + 0x1e + *0x44d60) * 0x10 + *(iVar4 + 0x1c + *0x44d60);
                                uVar7 = 0;
                                do {
                                    if (*(uVar7 + iVar4) == ':') {
                                        iVar4 = iVar4 + 1 + uVar7;
                                        break;
                                    }
                                    uVar7 = uVar7 + 1;
                                } while (uVar7 < 10);
                                cVar2 = fcn.00027824(*puVar9,0,arg3_00,auStack_238);
                                if (cVar2 == '\0') {
                                    fcn.00032d3c(auStack_238,0x202,0x406b4,iVar4);
                                }
                                arg3_00 = auStack_250;
                                noname_0 = *(*(puVar9 + 6) * 0x45 + 0x3d + *0x44d60);
                                iVar4 = (**(*0x44e20 + 0x140))(0x3e800,0);
                                if (-1 < iVar4) {
                                    arg3_00 = auStack_250;
                                    fcn.00026cc8(noname_0,auStack_238,arg3_00);
                                }
                                arg2_00 = auStack_238;
                            }
                            else {
                                arg2_00 = NULL;
                            }
                            fcn.0002729c(*(*0x44d50 + 2 + uVar8 * 10),arg2_00);
                            uVar7 = uStackX_20;
                        }
                    }
                    puVar9 = puVar9 + puVar9[1] + 4;
                } while (puVar9 < uVar7 + puVar1);
            }
        }
        else if ((5 < uStackX_20) && (puVar9 = puStack_258, puStack_258 < uStackX_20 + puStack_258)) {
            do {
                uVar7 = 0;
                if (2 < puVar9[1]) {
                    uVar8 = 0;
                    if (uVar3 != 0) {
                        do {
                            if (*(*0x44d50 + uVar8 * 10) == *puVar9) break;
                            uVar8 = uVar8 + 1;
                        } while (uVar8 < uVar3);
                    }
                    if (uVar3 != uVar8) {
                        if ((*(puVar9 + 6) & 0xff000000) == 0) {
                            iVar4 = fcn.0002723c(*(puVar9 + 6));
                            if (iVar4 == 0) {
                                ppuVar11 = &puStack_258;
                                auStack_248[0] = 0;
                                puStack_258 = NULL;
                                iVar4 = fcn.00036528(0x41388,0x3e800,0,auStack_248);
                                puVar10 = puStack_258;
                                if (-1 < iVar4) {
                                    if (auStack_248[0] / 0x68 != 0) {
                                        puVar6 = puStack_258;
                                        do {
                                            if (*(puVar9 + 6) == *puVar6) {
                                                fcn.0002729c(*(*0x44d50 + 2 + uVar8 * 10),
                                                             puStack_258 + uVar7 * 0x68 + 2);
                                                break;
                                            }
                                            uVar7 = uVar7 + 1;
                                            puVar6 = puVar6 + 0x1a;
                                        } while (uVar7 < auStack_248[0] / 0x68);
                                    }
                                    (**(*0x44e20 + 0x48))(puVar10);
                                }
                            }
                            else {
                                puStack_258 = iVar4 + 6;
                                iVar5 = (**(*0x44e20 + 0x140))(0x3e800,0,auStack_250,*0x44e20,ppuVar11);
                                puVar10 = iVar4 + 6;
                                if (-1 < iVar5) {
                                    fcn.00026d50(iVar4,&puStack_258,auStack_250);
                                    puVar10 = puStack_258;
                                }
                                fcn.0002729c(*(*0x44d50 + 2 + uVar8 * 10),puVar10);
                                (**(*0x44e20 + 0x48))(iVar4);
                            }
                        }
                        else {
                            fcn.0002729c(*(*0x44d50 + 2 + uVar8 * 10),0);
                        }
                    }
                }
                puVar9 = puVar9 + puVar9[1] + 4;
            } while (puVar9 < uStackX_20 + puVar1);
        }
        (**(*0x44e20 + 0x48))(puVar1);
    }
    return;
}


/* fcn.00026dcc @ 0x26dcc */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h

void fcn.00026dcc(void)

{
    char cVar1;
    int64_t iVar2;
    bool bVar3;
    uint16_t uVar4;
    int16_t iVar5;
    int64_t iVar6;
    int16_t *piVar7;
    int16_t *piVar8;
    int16_t *piVar9;
    int16_t *piVar10;
    char *pcVar11;
    uint64_t uVar12;
    int64_t *piVar13;
    uchar auStackX_18 [8];
    char *pcStackX_20;
    int8_t var_48h;
    int16_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    ulong uStack_68;
    ulong uStack_60;
    int64_t *piStack_58;
    char *pcStack_50;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    pcVar11 = NULL;
    pcStackX_20 = NULL;
    uVar4 = fcn.00026abc();
    bVar3 = false;
    piStack_58 = NULL;
    uStack_68 = 0;
    uStack_60 = 0;
    if (*0x44d30 == 0) {
        iVar6 = (**(*0x44e20 + 0x140))(0x3da20,0,0x44d30);
        if (iVar6 < 0) {
            return;
        }
        pcVar11 = pcStackX_20;
    }
    iVar6 = (**(*0x44d30 + 0x18))(*0x44d30,*0x46e58,pcVar11,&uStack_68);
    if ((((iVar6 == -0x7ffffffffffffffb) && (iVar6 = (**(*0x44e20 + 0x40))(4,uStack_68,&pcStackX_20), -1 < iVar6)) &&
        (iVar6 = (**(*0x44d30 + 0x18))(*0x44d30,*0x46e58,pcStackX_20,&uStack_68), -1 < iVar6)) &&
       (iVar6 = fcn.00036528(0x411d0,0x3e800,auStackX_18,&uStack_60), -1 < iVar6)) {
        pcStack_50 = pcStackX_20;
        pcVar11 = pcStackX_20;
        piVar13 = piStack_58;
        do {
            for (; (*pcStackX_20 != ';' && (*pcStackX_20 != '\0')); pcStackX_20 = pcStackX_20 + 1) {
            }
            if ((*pcVar11 == 'x') && (pcVar11[1] == '-')) {
                if (*pcStackX_20 == '\0') {
                    bVar3 = true;
                }
            }
            else {
                cVar1 = *pcStackX_20;
                *pcStackX_20 = '\0';
                piVar10 = *piVar13;
                if (piVar10 != NULL) {
                    do {
                        iVar6 = 0;
                        if (uVar4 != 0) {
                            uVar12 = uVar4;
                            do {
                                iVar5 = *(iVar6 + 2 + *0x44d50);
                                if (*piVar10 == iVar5) {
                                    (**(*0x44d30 + 0x10))(*0x44d30,*0x46e58,iVar5,pcVar11,*(piVar10 + 5),0);
                                }
                                else {
                                    piVar7 = fcn.00036494(0x100);
                                    uStack_60 = 0x100;
                                    (**(*0x44d30 + 8))(*0x44d30,pcVar11,*0x46e58,*(iVar6 + 2 + *0x44d50),piVar7,
                                                       &uStack_60,0);
                                    piVar9 = *(piVar10 + 1);
                                    if (piVar9 != NULL) {
                                        iVar5 = *piVar7;
                                        piVar8 = piVar7;
                                        while ((iVar5 != 0 && (iVar5 == *piVar9))) {
                                            piVar8 = piVar8 + 1;
                                            piVar9 = piVar9 + 1;
                                            iVar5 = *piVar8;
                                        }
                                        if (*piVar8 == *piVar9) {
                                            (**(*0x44d30 + 0x10))
                                                      (*0x44d30,*0x46e58,*(iVar6 + 2 + *0x44d50),pcVar11,
                                                       *(piVar10 + 5),0);
                                        }
                                    }
                                    (**(*0x44e20 + 0x48))(piVar7);
                                }
                                iVar6 = iVar6 + 10;
                                uVar12 = uVar12 - 1;
                            } while (uVar12 != 0);
                        }
                        piVar10 = *(piVar10 + 9);
                    } while (piVar10 != NULL);
                    piVar13 = piStack_58;
                }
                *pcStackX_20 = cVar1;
                if (cVar1 == '\0') break;
            }
            pcStackX_20 = pcStackX_20 + 1;
            pcVar11 = pcStackX_20;
        } while (!bVar3);
        iVar6 = *piVar13;
        while (iVar6 != 0) {
            iVar2 = *(iVar6 + 0x12);
            (**(*0x44e20 + 0x48))(iVar6);
            iVar6 = iVar2;
        }
        (**(*0x44e28 + 0x58))(L"FboGroupNameData",0x3e800,0,0,0);
        (**(*0x44e20 + 0x48))(pcStack_50);
        (**(*0x44e20 + 0x48))(piVar13);
    }
    return;
}


/* fcn.00028ff0 @ 0x28ff0 */

int64_t fcn.00028ff0(int64_t arg1)

{
    int64_t arg1_00;
    int *piVar1;
    int64_t iVar2;
    int *piVar3;
    uint64_t uVar4;
    int16_t iVar5;
    int *piVar6;
    int *piVar7;
    int64_t arg3;
    uint64_t uVar8;
    bool bVar9;
    uint64_t uStackX_8;
    uint64_t uStackX_10;
    int *piStackX_18;
    int64_t var_48h;
    int64_t var_50h;
    
    arg1_00 = *0x46e58;
    uStackX_10 = 0;
    uStackX_8 = arg1 & 0xffffffffffff0000;
    piStackX_18 = NULL;
    if ((*0x44d30 == 0) && (iVar2 = (**(*0x44e20 + 0x140))(0x3da20,0), iVar2 < 0)) {
        return iVar2;
    }
    arg3 = 0;
    iVar2 = fcn.00036528(0x412a0,0x3e800,0,&uStackX_10);
    if ((-1 < iVar2) && (6 < uStackX_10)) {
        piVar3 = fcn.00036494(uStackX_10);
        piVar1 = piStackX_18;
        if (piVar3 == NULL) {
            (**(*0x44e20 + 0x48))(piStackX_18);
            iVar2 = -0x7ffffffffffffff7;
        }
        else {
            bVar9 = piStackX_18 < piStackX_18 + uStackX_10;
            uVar4 = uStackX_10;
            piVar6 = piVar3;
            piVar7 = piStackX_18;
            while (bVar9) {
                if (*piVar7 != 0xff) {
                    *piVar6 = *piVar7;
                    *(piVar6 + 1) = ((*(piVar7 + 1) - 2 >> 1) + 1) * 2;
                    uVar4 = 0;
                    if ((*(piVar7 + 1) - 2 & 0xfffffffffffffffe) != 0) {
                        do {
                            if (0x11 < uVar4) break;
                            iVar2 = fcn.00027100(arg1_00,&uStackX_8,arg3);
                            if (iVar2 < 0) {
                                (**(*0x44e20 + 0x48))(piVar1);
                                (**(*0x44e20 + 0x48))(piVar3);
                                return iVar2;
                            }
                            uVar8 = uVar4 + 1;
                            *(piVar6 + uVar4 * 2 + 6) = uStackX_8;
                            uVar4 = uVar8;
                        } while (uVar8 < *(piVar7 + 1) - 2 >> 1);
                    }
                    piVar6 = piVar6 + *(piVar6 + 1) + 4;
                    uVar4 = uStackX_10;
                }
                piVar7 = piVar7 + *(piVar7 + 1) + 4;
                bVar9 = piVar7 < piVar1 + uVar4;
            }
            iVar5 = piVar6 - piVar3;
            if (iVar5 != 0) {
                (**(*0x44e28 + 0x58))(L"FixedHiiLegacyDevData",0x3e800,2,iVar5,piVar3);
            }
            (**(*0x44e20 + 0x48))(piVar1);
            (**(*0x44e20 + 0x48))(piVar3);
            iVar2 = 0;
        }
    }
    return iVar2;
}


/* fcn.000291ec @ 0x291ec */

int64_t fcn.000291ec(int64_t arg1)

{
    int64_t arg1_00;
    uint *puVar1;
    int64_t iVar2;
    uint *puVar3;
    uint64_t uVar4;
    int16_t iVar5;
    uint *puVar6;
    int64_t arg3;
    uint *puVar7;
    uint16_t uVar8;
    bool bVar9;
    uint64_t uStackX_8;
    uint64_t uStackX_10;
    uint *puStackX_18;
    int64_t var_48h;
    int64_t var_50h;
    
    arg1_00 = *0x46e58;
    uStackX_10 = 0;
    uStackX_8 = arg1 & 0xffffffffffff0000;
    puStackX_18 = NULL;
    if ((*0x44d30 != 0) || (iVar2 = (**(*0x44e20 + 0x140))(0x3da20,0), -1 < iVar2)) {
        arg3 = 0;
        iVar2 = fcn.00036528(0x41430,0x3e800,0,&uStackX_10);
        if ((-1 < iVar2) && (6 < uStackX_10)) {
            puVar3 = fcn.00036494(uStackX_10);
            puVar1 = puStackX_18;
            if (puVar3 == NULL) {
                (**(*0x44e20 + 0x48))(puStackX_18);
                iVar2 = -0x7ffffffffffffff7;
            }
            else {
                bVar9 = puStackX_18 < uStackX_10 + puStackX_18;
                puVar6 = puVar3;
                puVar7 = puStackX_18;
                while (bVar9) {
                    uVar8 = 0;
                    *puVar6 = *puVar7;
                    *(puVar6 + 1) = ((*(puVar7 + 1) - 2 >> 2) + 1) * 2;
                    if ((*(puVar7 + 1) - 2 & 0xfffffffffffffffc) != 0) {
                        do {
                            if (0x11 < uVar8) break;
                            iVar2 = fcn.00027100(arg1_00,&uStackX_8,arg3);
                            if (iVar2 < 0) {
                                (**(*0x44e20 + 0x48))(puVar1);
                                (**(*0x44e20 + 0x48))(puVar3);
                                return iVar2;
                            }
                            uVar4 = uVar8;
                            uVar8 = uVar8 + 1;
                            *(puVar6 + uVar4 * 2 + 6) = uStackX_8;
                        } while (uVar8 < *(puVar7 + 1) - 2 >> 2);
                    }
                    puVar6 = puVar6 + *(puVar6 + 1) + 4;
                    puVar7 = puVar7 + *(puVar7 + 1) + 4;
                    bVar9 = puVar7 < uStackX_10 + puVar1;
                }
                iVar5 = puVar6 - puVar3;
                if (iVar5 != 0) {
                    (**(*0x44e28 + 0x58))(L"FixedHiiUefiDevData",0x3e800,2,iVar5,puVar3);
                }
                (**(*0x44e20 + 0x48))(puVar1);
                (**(*0x44e20 + 0x48))(puVar3);
                iVar2 = 0;
            }
        }
    }
    return iVar2;
}


/* fcn.00029b20 @ 0x29b20 */

//WARNING: Variable defined which should be unmapped: var_29h

void fcn.00029b20(int64_t arg1)

{
    uint16_t uVar1;
    int64_t iVar2;
    uchar *arg1_00;
    uint64_t uVar3;
    uint64_t uVar4;
    uint16_t *puVar5;
    uint64_t uVar6;
    ulong noname_2;
    uint64_t uVar7;
    ulong uStackX_20;
    int64_t var_144h;
    int64_t var_2e0h;
    int64_t var_2e8h;
    uint uStack_398;
    uint uStack_394;
    uint uStack_390;
    uint uStack_38c;
    uint uStack_388;
    uint uStack_384;
    uint uStack_380;
    uint uStack_37c;
    uint uStack_378;
    uint uStack_374;
    uint uStack_370;
    uint uStack_36c;
    int64_t iStack_368;
    ulong uStack_360;
    ulong uStack_358;
    ulong auStack_350 [2];
    uchar auStack_340 [8];
    uchar auStack_338 [40];
    uchar uStack_310;
    ushort auStack_30f [8];
    ushort auStack_2ff [7];
    ushort auStack_2f1 [20];
    uchar auStack_2c8 [324];
    uchar auStack_184 [252];
    int64_t var_80h;
    int64_t var_78h;
    int64_t var_70h;
    int64_t var_bp_48h;
    int16_t var_37h;
    int16_t var_29h;
    
    uVar3 = 0;
    uStack_388 = 0xde8ab926;
    iStack_368 = 0;
    uVar6 = 0x2000;
    uStack_384 = 0x4c23efda;
    uStack_380 = 0xfd98c4bb;
    uStack_37c = 0x6900aa29;
    iVar2 = (**(*0x44e20 + 0x140))(0x3d820,0,&iStack_368);
    if ((-1 < iVar2) && (iVar2 = (**(iStack_368 + 0x30))(iStack_368,0x44d3c,0x46cb0,0x44d28,0x44d60), iVar2 < 0)) {
        return;
    }
    iVar2 = (**(*0x44e20 + 0x140))(0x3e800,0);
    if (-1 < iVar2) {
        (**0x18)(0x3e810);
        *0x44d58 = (**0x28)();
        *0x44d70 = (**0x30)();
        (**0x38)();
        *0x44d50 = (**0x40)();
        fcn.00026dcc();
    }
    (**(*0x44e20 + 0x168))(0x46cc0,0x12);
    (**(*0x44e20 + 0x168))(0x46e40,0x12,0);
    arg1_00 = auStack_338;
    (**(*0x44e20 + 0x168))(arg1_00,0x23,0);
    uVar1 = fcn.00026abc();
    uVar7 = uVar1;
    if (uVar7 != 0) {
        uVar4 = uVar3;
        do {
            uVar1 = *(uVar4 + 2 + *0x44d50);
            arg1_00 = uVar1;
            fcn.0002729c(uVar1,0);
            uVar4 = uVar4 + 10;
            uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
    }
    fcn.00028ff0(arg1_00);
    fcn.00028778();
    fcn.000291ec(arg1_00);
    fcn.00028bc0();
    if (*0x44d68 == '\0') {
        do {
            fcn.00012538(uVar6,0x2872c);
            uVar1 = uVar6 + 1;
            uVar6 = uVar1;
        } while (uVar1 < 0x2200);
    }
    iVar2 = *0x44d50;
    puVar5 = *0x44d58;
    uVar6 = uVar3;
    do {
        uVar1 = fcn.00026b20(*puVar5);
        if ((uVar1 != 0xffff) && (*(iVar2 + 4 + uVar1 * 10) != 0)) {
            auStack_338[*(iVar2 + 8 + uVar1 * 10)] = *(uVar6 + 0x46cc0);
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 7;
    } while (uVar6 < 7);
    puVar5 = *0x44d70;
    uVar6 = uVar3;
    do {
        uVar1 = fcn.00026b20(*puVar5);
        if ((uVar1 != 0xffff) && (*(iVar2 + 4 + uVar1 * 10) != 0)) {
            auStack_338[*(iVar2 + 8 + uVar1 * 10)] = *(uVar6 + 0x46e40);
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 7;
    } while (uVar6 < 6);
    (**(*0x44e28 + 0x58))(0x41480,0x3e800,7,0x23,auStack_338);
    fcn.0003d510(auStack_2c8,0x46ce0,0x144);
    fcn.0003d510(auStack_184,0x46e60,0x144);
    iVar2 = (**(*0x44e28 + 0x58))(L"FixedBoot",&uStack_388,7,0x288,auStack_2c8);
    if (iVar2 < 0) {
        (**(*0x44e28 + 0x58))(L"FixedBoot",&uStack_388,0,0,0);
        (**(*0x44e28 + 0x58))(L"FixedBoot",&uStack_388,7,0x288,auStack_2c8);
    }
    uStackX_20 = 0;
    uStack_398 = 0x7e07911a;
    uStack_394 = 0x4b0f4807;
    uStack_390 = 0x43f574a4;
    uStack_38c = 0xb407a91c;
    uStack_360 = 0;
    iVar2 = (**(*0x44e20 + 0x140))(&uStack_398,0);
    if (iVar2 < 0) {
        noname_2 = 0;
        (**(*0x44e20 + 0x80))(&uStackX_20,&uStack_398,0,0x3e7b8);
    }
    else {
        uStack_358 = 8;
        noname_2 = 0;
        iVar2 = (**(*0x44e20 + 0xb0))(2,&uStack_398,0,&uStack_358,&uStackX_20);
        if (-1 < iVar2) {
            noname_2 = uStack_360;
            (**(*0x44e20 + 0x88))(uStackX_20,&uStack_398,uStack_360,0x3e7b8);
        }
    }
    if (*0x44d68 == '\0') {
        uStack_378 = 0x8c12a959;
        uStack_374 = 0x436270bc;
        uStack_370 = 0x5b837b4;
        uStack_36c = 0x6e91a114;
        fcn.000365e8(&uStack_378,0x29ac8,noname_2,auStack_340);
        if (*0x44d68 == '\0') {
            auStack_350[0] = 0x3b;
            (**(*0x44e28 + 0x48))(0x41408,0x3e800,0,auStack_350,&uStack_310);
            (**(*0x44e20 + 0x40))(4,0x1a,0x44d48);
            (**(*0x44e20 + 0x40))(4,0xc,0x44d78);
            (**(*0x44e20 + 0x40))(4,0xe,0x44d40);
            uVar6 = uVar3;
            do {
                *(uVar6 + *0x44d48) = *(auStack_2f1 + uVar6);
                uVar6 = uVar6 + 2;
            } while (uVar6 < 0x1a);
            uVar6 = uVar3;
            do {
                *(uVar6 + *0x44d78) = *(auStack_2ff + uVar6);
                uVar6 = uVar6 + 2;
            } while (uVar6 < 0xc);
            do {
                *(uVar3 + *0x44d40) = *(auStack_30f + uVar3);
                uVar3 = uVar3 + 2;
            } while (uVar3 < 0xe);
        }
    }
    *0x44d68 = 1;
    (**(*0x44e20 + 0x70))(arg1);
    return;
}


/* fcn.00033e98 @ 0x33e98 */

int64_t fcn.00033e98(int64_t arg1,uint32_t arg2,uint32_t arg3)

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


/* fcn.0002a1f4 @ 0x2a1f4 */

ulong fcn.0002a1f4(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iStackX_8;
    
    iStackX_8 = 0;
    if ((arg1 != 0) &&
       (((*0x44d88 != 0 || (iVar1 = (**(*0x44e20 + 0x140))(0x3da20,0,0x44d88), -1 < iVar1)) &&
        (iVar1 = (**(*0x44d88 + 0x18))(*0x44d88,arg1,0,&iStackX_8), iVar1 == -0x7ffffffffffffffb)))) {
        uVar2 = fcn.00036468(iStackX_8);
        iVar1 = (**(*0x44d88 + 0x18))(*0x44d88,arg1,uVar2,&iStackX_8);
        if (-1 < iVar1) {
            return uVar2;
        }
        (**(*0x44e20 + 0x48))(uVar2);
    }
    return 0;
}


/* fcn.0002a2b4 @ 0x2a2b4 */

int64_t fcn.0002a2b4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    char cVar2;
    int64_t iVar3;
    char *arg1_00;
    char *pcVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    char *pcStackX_20;
    ulong auStack_138 [2];
    uchar auStack_128 [256];
    
    iVar7 = 0;
    auStack_138[0] = 0x80;
    if (arg4 == 0) {
        iVar3 = -0x7ffffffffffffffe;
    }
    else {
        cVar2 = *arg4;
        iVar3 = iVar7;
        while (cVar2 != '\0') {
            iVar3 = iVar3 + 1;
            cVar2 = *(iVar3 + arg4);
        }
        iVar3 = (**(*0x44e20 + 0x40))(4,iVar3 + 1,&pcStackX_20);
        if (-1 < iVar3) {
            cVar2 = *arg4;
            iVar5 = iVar7;
            while (cVar2 != '\0') {
                iVar5 = iVar5 + 1;
                cVar2 = *(iVar5 + arg4);
            }
            (**(*0x44e20 + 0x160))(pcStackX_20,arg4,iVar5 + 1);
            arg1_00 = pcStackX_20;
            if (*pcStackX_20 != '\0') {
                do {
                    pcVar4 = arg1_00;
                    if (*arg1_00 != '\0') {
                        do {
                            if (*pcVar4 == ';') break;
                            pcVar4 = pcVar4 + 1;
                        } while (*pcVar4 != '\0');
                        if (*pcVar4 != '\0') {
                            *pcVar4 = '\0';
                            pcVar4 = pcVar4 + 1;
                        }
                    }
                    iVar5 = iVar7;
                    do {
                        iVar6 = iVar5 + 1;
                        pcVar1 = iVar5 + 0x414dd;
                        iVar5 = iVar6;
                    } while (*pcVar1 != '\0');
                    iVar5 = fcn.00033e98(arg1_00,0x414dc,iVar6);
                    if (iVar5 != 0) {
                        iVar3 = (**(*0x44d88 + 8))(*0x44d88,arg1_00,arg1,arg2 & 0xffff,auStack_128,auStack_138,0);
                        if (iVar3 < 0) break;
                        (**(*0x44d88 + 0x10))(*0x44d88,arg1,arg3 & 0xffff,arg1_00,auStack_128,0);
                    }
                    arg1_00 = pcVar4;
                } while (*pcVar4 != '\0');
            }
            (**(*0x44e20 + 0x48))(pcStackX_20);
        }
    }
    return iVar3;
}


/* fcn.0002b324 @ 0x2b324 */

ulong fcn.0002b324(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char cVar2;
    char cVar3;
    char *pcVar4;
    ushort auStackX_10 [4];
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_bp_10h;
    ulong uStack_10;
    
    auStackX_10[0] = arg2;
    fcn.000107d8(arg1,0x2263,0x3f8d8,0x415c8);
    if (*0x44e20 != 0) {
        iVar1 = (**(*0x44e20 + 0x140))(0x3e8a0,0,&var_28h);
        if ((-1 < iVar1) && (iVar1 = (**(var_28h + 0x40))(1,1,&var_20h,auStackX_10), -1 < iVar1)) {
            if (*(var_20h + 4) != '\0') {
                pcVar4 = *(var_20h + 1) + var_20h;
                cVar3 = *(var_20h + 4) + -1;
                while (cVar3 != '\0') {
                    cVar2 = cVar3 + -1;
                    if (*pcVar4 != '\0') {
                        cVar2 = cVar3;
                    }
                    pcVar4 = pcVar4 + 1;
                    cVar3 = cVar2;
                }
                if (pcVar4 != NULL) {
                    fcn.000107d8(arg1,0x226a,0x406b4,pcVar4);
                }
            }
            if (*(var_20h + 5) != '\0') {
                pcVar4 = *(var_20h + 1) + var_20h;
                cVar3 = *(var_20h + 5) + -1;
                while (cVar3 != '\0') {
                    cVar2 = cVar3 + -1;
                    if (*pcVar4 != '\0') {
                        cVar2 = cVar3;
                    }
                    pcVar4 = pcVar4 + 1;
                    cVar3 = cVar2;
                }
                if (pcVar4 != NULL) {
                    fcn.000107d8(arg1,0x226c,0x406b4,pcVar4);
                }
            }
            var_bp_10h = *(var_20h + 8);
            uStack_10 = *(var_20h + 0x10);
            fcn.000107d8(arg1,0x2265,0x401a0,&var_bp_10h);
            if (*(var_20h + 7) != '\0') {
                pcVar4 = *(var_20h + 1) + var_20h;
                cVar3 = *(var_20h + 7) + -1;
                while (cVar3 != '\0') {
                    cVar2 = cVar3 + -1;
                    if (*pcVar4 != '\0') {
                        cVar2 = cVar3;
                    }
                    cVar3 = cVar2;
                    pcVar4 = pcVar4 + 1;
                }
                if (pcVar4 != NULL) {
                    fcn.000107d8(arg1,0x226e,0x406b4,pcVar4);
                }
            }
            iVar1 = (**(var_28h + 0x40))(3,1,&var_20h,auStackX_10);
            if (-1 < iVar1) {
                if (*(var_20h + 8) != '\0') {
                    pcVar4 = *(var_20h + 1) + var_20h;
                    cVar3 = *(var_20h + 8) + -1;
                    while (cVar3 != '\0') {
                        cVar2 = cVar3 + -1;
                        if (*pcVar4 != '\0') {
                            cVar2 = cVar3;
                        }
                        pcVar4 = pcVar4 + 1;
                        cVar3 = cVar2;
                    }
                    if (pcVar4 != NULL) {
                        fcn.000107d8(arg1,0x2270,0x406b4,pcVar4);
                    }
                }
                (**(*0x44e20 + 0x48))(var_20h);
            }
        }
    }
    return 0;
}


/* fcn.00032474 @ 0x32474 */

int64_t fcn.00032474(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uchar uVar2;
    int64_t extraout_RAX;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    unkbyte7 Var7;
    
    Var7 = arg2 >> 8;
    iVar5 = CONCAT71(arg1 >> 8,0xa3);
    iVar4 = CONCAT71(noname_0 >> 8,0x62);
    uVar6 = 0;
    fcn.000323ac(iVar4,iVar5,CONCAT71(Var7,4));
    iVar3 = extraout_RAX;
    if (-1 < extraout_RAX) {
        iVar5 = CONCAT71(iVar5 >> 8,0xa2);
        iVar4 = CONCAT71(iVar4 >> 8,0x62);
        iVar3 = fcn.000323ac(iVar4,iVar5,CONCAT71(Var7,arg1));
        if ((-1 < iVar3) && (iVar3 = fcn.00032248(CONCAT71(iVar4 >> 8,0x62),CONCAT71(iVar5 >> 8,0xa4)), -1 < iVar3))
        {
            uVar1 = in(0x66);
            if ((uVar1 & 1) == 0) {
                do {
                    if (0x1ffff < uVar6) {
                        return -0x7ffffffffffffff9;
                    }
                    fcn.000382d8(0xf,0x66);
                    uVar1 = in(0x66);
                    uVar6 = uVar6 + 1;
                } while ((uVar1 & 1) == 0);
                if (0x1ffff < uVar6) {
                    return -0x7ffffffffffffff9;
                }
            }
            uVar2 = in(0x62);
            *arg2 = uVar2;
            iVar3 = 0;
        }
    }
    return iVar3;
}


/* fcn.0002b53c @ 0x2b53c */

//WARNING: Variable defined which should be unmapped: var_fh
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_17h
//WARNING: Variable defined which should be unmapped: var_9h

ulong fcn.0002b53c(int64_t arg1)

{
    int16_t iVar1;
    char cVar2;
    char cVar3;
    uint8_t uVar4;
    int64_t iVar5;
    uint16_t uVar6;
    uint64_t uVar7;
    int64_t var_fh;
    int64_t var_17h;
    int64_t var_1fh;
    int8_t var_29h;
    int8_t var_2ah;
    uint64_t uStackX_20;
    int64_t var_77h;
    uint32_t var_7fh;
    uint64_t auStack_68 [4];
    ulong uStack_48;
    int16_t aiStack_40 [5];
    char cStack_36;
    char cStack_35;
    int64_t var_9h;
    int64_t var_1h;
    
    iVar5 = (**(*0x44e20 + 0x138))(2,0x3d870,0,&stack0x00000020,auStack_68 + 3);
    if ((-1 < iVar5) && (uVar7 = 0, uStackX_20 != 0)) {
        do {
            uStack_48 = 0;
            auStack_68[0] = 0;
            auStack_68[1] = 0;
            auStack_68[2] = 0;
            (**(*0x44e20 + 0x98))(*(auStack_68[3] + uVar7 * 8),0x3d870,&var_1fh + 1);
            (**(stack0x00000018 + 0x30))(stack0x00000018,2,0,4,aiStack_40);
            cVar3 = cStack_35;
            cVar2 = cStack_36;
            iVar1 = aiStack_40[0];
            (**(stack0x00000018 + 0x70))(stack0x00000018,&uStack_48,auStack_68,auStack_68 + 1,auStack_68 + 2);
            if ((cVar3 == '\x02') && (cVar2 == '\0')) {
                if (iVar1 != 0x10ec) {
                    return 0;
                }
                uVar6 = *(((((auStack_68[0] & 0xff) << 5 | auStack_68[1] & 0x1f) << 3 | auStack_68[2] & 7) << 0xc | 0x10
                          ) + 0xc0000000) & 0xfffe;
                in(uVar6 + 5);
                in(uVar6 + 4);
                in(uVar6 + 3);
                in(uVar6 + 2);
                in(uVar6 + 1);
                uVar4 = in(uVar6);
                fcn.000107d8(arg1,0x2272,0x415e0,uVar4);
                return 0;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < uStackX_20);
    }
    return 0;
}


/* fcn.0002b7b0 @ 0x2b7b0 */

void fcn.0002b7b0(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint8_t uVar6;
    uint32_t auStackX_10 [2];
    uint auStackX_18 [2];
    uint32_t uStackX_20;
    uint32_t uStackX_24;
    uint32_t var_294h;
    uint32_t var_358h;
    int64_t var_360h;
    int64_t var_368h;
    ulong auStack_418 [2];
    uchar auStack_408 [852];
    uint32_t uStack_b4;
    
    auStack_418[0] = 0x3c1;
    (**(*0x44e10 + 0x48))(0x40a68,0x3d730,auStackX_18,auStack_418,auStack_408);
    if (uStack_b4 == 0) {
        fcn.00010340(&uStackX_20,8);
        uStackX_24 = CONCAT22(uStackX_24._2_2_,0xe37);
        iVar3 = fcn.000327dc(1,uStackX_24,&uStackX_20,auStackX_10);
        if (iVar3 != 0) {
            return;
        }
        if (auStackX_10[0] != 0) {
            return;
        }
        uStack_b4 = uStackX_20;
    }
    (**(*0x44e10 + 0x58))(0x40a68,0x3d730,auStackX_18[0],auStack_418[0],auStack_408);
    uVar1 = uStack_b4;
    uVar5 = 0;
    uVar6 = 0;
    do {
        if ((uVar1 >> (uVar6 & 0x1f) & 1) == 0) {
            if (uVar6 < 0x11) {
                if (uVar6 == 0x10) {
                    uVar2 = 0x1cb2;
                    uVar4 = 0x1cd2;
                }
                else if (uVar6 < 9) {
                    if (uVar6 == 8) {
                        uVar2 = 0x1caa;
                        uVar4 = 0x1cca;
                    }
                    else if (uVar6 == 0) {
code_r0x0002b95b:
                        uVar2 = 0x1ca2;
                        uVar4 = 0x1cc2;
                    }
                    else if (uVar6 == 1) {
                        uVar2 = 0x1ca3;
                        uVar4 = 0x1cc3;
                    }
                    else if (uVar6 == 2) {
                        uVar2 = 0x1ca4;
                        uVar4 = 0x1cc4;
                    }
                    else if (uVar6 == 3) {
                        uVar2 = 0x1ca5;
                        uVar4 = 0x1cc5;
                    }
                    else if (uVar6 == 4) {
                        uVar2 = 0x1ca6;
                        uVar4 = 0x1cc6;
                    }
                    else if (uVar6 == 5) {
                        uVar2 = 0x1ca7;
                        uVar4 = 0x1cc7;
                    }
                    else if (uVar6 == 6) {
                        uVar2 = 0x1ca8;
                        uVar4 = 0x1cc8;
                    }
                    else {
                        if (uVar6 != 7) goto code_r0x0002b95b;
                        uVar2 = 0x1ca9;
                        uVar4 = 0x1cc9;
                    }
                }
                else if (uVar6 == 9) {
                    uVar2 = 0x1cab;
                    uVar4 = 0x1ccb;
                }
                else if (uVar6 == 10) {
                    uVar2 = 0x1cac;
                    uVar4 = 0x1ccc;
                }
                else if (uVar6 == 0xb) {
                    uVar2 = 0x1cad;
                    uVar4 = 0x1ccd;
                }
                else if (uVar6 == 0xc) {
                    uVar2 = 0x1cae;
                    uVar4 = 0x1cce;
                }
                else if (uVar6 == 0xd) {
                    uVar2 = 0x1caf;
                    uVar4 = 0x1ccf;
                }
                else if (uVar6 == 0xe) {
                    uVar2 = 0x1cb0;
                    uVar4 = 0x1cd0;
                }
                else {
                    if (uVar6 != 0xf) goto code_r0x0002b95b;
                    uVar2 = 0x1cb1;
                    uVar4 = 0x1cd1;
                }
            }
            else if (uVar6 < 0x19) {
                if (uVar6 == 0x18) {
                    uVar2 = 0x1cba;
                    uVar4 = 0x1cda;
                }
                else if (uVar6 == 0x11) {
                    uVar2 = 0x1cb3;
                    uVar4 = 0x1cd3;
                }
                else if (uVar6 == 0x12) {
                    uVar2 = 0x1cb4;
                    uVar4 = 0x1cd4;
                }
                else if (uVar6 == 0x13) {
                    uVar2 = 0x1cb5;
                    uVar4 = 0x1cd5;
                }
                else if (uVar6 == 0x14) {
                    uVar2 = 0x1cb6;
                    uVar4 = 0x1cd6;
                }
                else if (uVar6 == 0x15) {
                    uVar2 = 0x1cb7;
                    uVar4 = 0x1cd7;
                }
                else if (uVar6 == 0x16) {
                    uVar2 = 0x1cb8;
                    uVar4 = 0x1cd8;
                }
                else {
                    if (uVar6 != 0x17) goto code_r0x0002b95b;
                    uVar2 = 0x1cb9;
                    uVar4 = 0x1cd9;
                }
            }
            else if (uVar6 == 0x19) {
                uVar2 = 0x1cbb;
                uVar4 = 0x1cdb;
            }
            else if (uVar6 == 0x1a) {
                uVar2 = 0x1cbc;
                uVar4 = 0x1cdc;
            }
            else if (uVar6 == 0x1b) {
                uVar2 = 0x1cbd;
                uVar4 = 0x1cdd;
            }
            else if (uVar6 == 0x1c) {
                uVar2 = 0x1cbe;
                uVar4 = 0x1cde;
            }
            else if (uVar6 == 0x1d) {
                uVar2 = 0x1cbf;
                uVar4 = 0x1cdf;
            }
            else if (uVar6 == 0x1e) {
                uVar2 = 0x1cc0;
                uVar4 = 0x1ce0;
            }
            else {
                if (uVar6 != 0x1f) goto code_r0x0002b95b;
                uVar2 = 0x1cc1;
                uVar4 = 0x1ce1;
            }
            fcn.000107d8(arg1,uVar2,0x41648,uVar5);
            fcn.000107d8(arg1,uVar4,0x41658,uVar5);
            uVar5 = uVar5 + 1;
        }
        uVar6 = uVar6 + 1;
        if (0x1f < uVar6) {
            return;
        }
    } while( true );
}


/* fcn.0002bb4c @ 0x2bb4c */

void fcn.0002bb4c(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uStackX_10;
    uint32_t auStackX_18 [2];
    uint32_t auStackX_20 [2];
    
    iVar1 = fcn.000327dc(2,4,auStackX_20,auStackX_18);
    if ((iVar1 == 0) && (auStackX_18[0] == 0)) {
        uStackX_10 = CONCAT11(auStackX_20[0] >> 8,0x16) & 0xffff0fff;
        iVar1 = fcn.000327dc(2,uStackX_10,0x46ca8,auStackX_18);
        if ((iVar1 == 0) && (auStackX_18[0] == 0)) {
            fcn.000107d8(arg1,0x1da1,0x3f98c,*0x46ca8 & 0x7ff);
        }
        uStackX_10 = CONCAT11(auStackX_20[0] >> 0xd,uStackX_10) & 0xffff0fff;
        iVar1 = fcn.000327dc(2,uStackX_10,0x46ca4,auStackX_18);
        if ((iVar1 == 0) && (auStackX_18[0] == 0)) {
            fcn.000107d8(arg1,0x1da4,0x3f98c,*0x46ca4 & 0x7ff);
        }
    }
    return;
}


/* fcn.0002c994 @ 0x2c994 */

void fcn.0002c994(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint8_t *puVar5;
    
    *arg4 = 0;
    puVar5 = 0x416d8;
    uVar4 = 0;
    while( true ) {
        if (((arg1 <= *(puVar5 + -8)) && (*((uVar4 + 1) * 0xc + 0x416d0) < arg1)) &&
           ((*puVar5 & 1 << (arg3 & 0x1f)) != 0)) break;
        uVar3 = uVar4 + 1;
        uVar4 = uVar3;
        puVar5 = puVar5 + 0xc;
        if (0xb3 < uVar3) {
            return;
        }
    }
    uVar3 = *(uVar4 * 0xc + 0x416d4);
    if (uVar3 == 0) {
        return;
    }
    uVar2 = 100000000;
    if (99999999 < arg2) {
        uVar2 = arg2;
    }
    iVar1 = 0x208d5;
    if (arg3 == 1) {
        iVar1 = 100000;
    }
    uVar4 = ((uVar3 * 1000000000) / ((uVar2 / 100000) * iVar1) + 500) / 1000;
    if (0xfc < uVar4 - 3) {
        return;
    }
    *arg4 = uVar4;
    return;
}


/* fcn.0002d794 @ 0x2d794 */

int64_t fcn.0002d794(int64_t arg1)

{
    int64_t iVar1;
    int64_t *in_stack_00000028;
    
    iVar1 = *in_stack_00000028;
    if (iVar1 == 0) {
        *arg1 = 0;
    }
    iVar1 = (**(*0x44e28 + 0x48))(0x3f9f8,0x3d600,0,arg1,iVar1);
    if ((iVar1 < 0) && (iVar1 == -0x7ffffffffffffffb)) {
        if (*in_stack_00000028 != 0) {
            (**(*0x44e20 + 0x48))();
        }
        iVar1 = fcn.00036468(*arg1);
        *in_stack_00000028 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x44e28 + 0x48))(0x3f9f8,0x3d600,0,arg1,iVar1);
        }
    }
    return iVar1;
}


/* fcn.0002d638 @ 0x2d638 */

ulong fcn.0002d638(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    
    if (*0x44dc0 != 0) {
        iVar2 = *(*0x44dc0 + arg1 * 0x48);
        iVar1 = *(iVar2 + 0x40);
        iVar2 = *(iVar2 + 0x38);
        if (iVar1 == 1) {
            return *(iVar2 + 0x390);
        }
        if (iVar1 == 2) {
            return *(iVar2 + 0x148);
        }
        if (iVar1 == 3) {
            return *(iVar2 + 0x58);
        }
    }
    return 0;
}


/* fcn.0003a6bc @ 0x3a6bc */

void fcn.0003a6bc(int64_t arg1,int64_t arg2)

{
    unkbyte7 in_R8;
    uchar auStack_18 [2];
    ushort uStack_16;
    ushort uStack_14;
    uchar uStack_12;
    
    fcn.00010340(auStack_18,7);
    uStack_14 = 2;
    uStack_12 = 0;
    uStack_16 = arg2;
    fcn.0003a510(arg1,auStack_18,CONCAT71(in_R8,2),7);
    return;
}


/* fcn.0002d984 @ 0x2d984 */

//WARNING: Variable defined which should be unmapped: var_10h

int16_t fcn.0002d984(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    char *pcVar1;
    int64_t iVar2;
    int16_t aiStackX_18 [4];
    char *pcStackX_20;
    int64_t var_38h;
    ulong auStack_28 [2];
    int64_t var_10h;
    
    aiStackX_18[0] = arg3;
    pcStackX_20 = NULL;
    auStack_28[0] = 0;
    if ((*0x44dc8 == NULL) && (iVar2 = (**(*0x44e20 + 0x140))(0x3da20,0,0x44dc8), iVar2 < 0)) {
        return 0;
    }
    if (*0x44d90 == NULL) {
        iVar2 = (*(*0x44dc8)[3])(*0x44dc8,arg1,pcStackX_20,auStack_28);
        if (iVar2 == -0x7ffffffffffffffb) {
            iVar2 = (**(*0x44e20 + 0x40))(4,auStack_28[0],&pcStackX_20);
            if (iVar2 < 0) {
                return 0;
            }
            iVar2 = (*(*0x44dc8)[3])(*0x44dc8,arg1,pcStackX_20,auStack_28);
            if (iVar2 < 0) {
                return 0;
            }
        }
        if (pcStackX_20 == NULL) {
            return 0;
        }
        *0x44d90 = pcStackX_20;
        pcVar1 = pcStackX_20;
    }
    else {
        pcStackX_20 = *0x44d90;
        pcVar1 = *0x44d90;
    }
    do {
        for (; *pcStackX_20 != ';'; pcStackX_20 = pcStackX_20 + 1) {
            if (*pcStackX_20 == '\0') {
                if (aiStackX_18[0] == 0) {
                    iVar2 = (***0x44dc8)(*0x44dc8,arg1,aiStackX_18,pcVar1,0,arg2,0);
                }
                else {
                    iVar2 = (*(*0x44dc8)[2])(*0x44dc8,arg1,aiStackX_18[0],pcVar1,arg2,0);
                }
                if (iVar2 < 0) {
                    return 0;
                }
                return aiStackX_18[0];
            }
        }
        *pcStackX_20 = '\0';
        if (aiStackX_18[0] == 0) {
            iVar2 = (***0x44dc8)(*0x44dc8,arg1,aiStackX_18,pcVar1,0,arg2,0);
        }
        else {
            iVar2 = (*(*0x44dc8)[2])(*0x44dc8,arg1,aiStackX_18[0],pcVar1,arg2,0);
        }
        *pcStackX_20 = ';';
        pcStackX_20 = pcStackX_20 + 1;
        pcVar1 = pcStackX_20;
    } while (-1 < iVar2);
    return 0;
}


/* fcn.0003a7e4 @ 0x3a7e4 */

void fcn.0003a7e4(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    unkbyte7 Var1;
    uchar auStack_18 [2];
    ushort uStack_16;
    ushort uStack_14;
    ushort uStack_12;
    
    Var1 = noname_2 >> 8;
    fcn.00010340(auStack_18,8);
    uStack_14 = 2;
    uStack_16 = arg2;
    uStack_12 = arg3;
    fcn.0003a510(arg1,auStack_18,CONCAT71(Var1,3),8);
    return;
}


/* fcn.0002dbd8 @ 0x2dbd8 */

ulong fcn.0002dbd8(int64_t arg1)

{
    uint *arg2;
    ulong uVar1;
    
    arg2 = fcn.00032c10(arg1,4);
    uVar1 = 0;
    if (arg2 != NULL) {
        *arg2 = 0x246820a;
        uVar1 = fcn.0003a57c(arg1,arg2,4);
        (**(*0x44e00 + 0x48))(arg2);
    }
    return uVar1;
}


/* fcn.0003bedc @ 0x3bedc */

void fcn.0003bedc(int64_t arg1)

{
    ushort *puVar1;
    char *apcStackX_10 [3];
    
    apcStackX_10[0]._0_2_ = 0x229;
    puVar1 = fcn.0003a4b4(arg1,2);
    if (puVar1 != apcStackX_10) {
        section..text(puVar1,apcStackX_10,2);
    }
    return;
}


/* fcn.0003be7c @ 0x3be7c */

void fcn.0003be7c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar *puVar1;
    ulong uStack_18;
    
    uStack_18._4_2_ = arg2;
    uStack_18._0_1_ = 0x19;
    uStack_18._1_1_ = 0x82;
    uStack_18._2_1_ = 0x12;
    uStack_18._6_2_ = arg3;
    uStack_18._3_1_ = 6;
    puVar1 = fcn.0003a4b4(arg1,8);
    if (puVar1 != &uStack_18) {
        section..text(puVar1,&uStack_18,8);
    }
    return;
}


/* fcn.0002db3c @ 0x2db3c */

void fcn.0002db3c(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    ulong uVar1;
    uchar auStack_28 [6];
    ushort uStack_22;
    ushort uStack_20;
    ushort uStack_1e;
    uchar uStack_1c;
    uint uStack_1b;
    
    uVar1 = 0;
    (**(*0x44e20 + 0x168))(auStack_28,0x11);
    uStack_20 = 0xdddf;
    uStack_1c = 0x14;
    uStack_1b = 0x200000;
    uStack_22 = arg2;
    uStack_1e = arg3;
    fcn.0003a510(arg1,auStack_28,CONCAT71(uVar1 >> 8,8),0x11);
    return;
}


/* fcn.0002d844 @ 0x2d844 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.0002d844(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uStackX_20;
    int64_t var_30h;
    int64_t var_38h;
    ulong uStack_28;
    ulong uStack_20;
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    uStackX_20 = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    if ((*0x44dc8 == 0) && (iVar1 = (**(*0x44e20 + 0x140))(0x3da20,0,0x44dc8), iVar1 < 0)) {
        return 0;
    }
    iVar1 = fcn.0002d794(&uStack_20);
    if (-1 < iVar1) {
        iVar1 = (**(*0x44dc8 + 8))(*0x44dc8,0,arg1,arg2 & 0xffff,uStackX_20,&uStack_28,0);
        if ((iVar1 == -0x7ffffffffffffffb) && (iVar1 = (**(*0x44e20 + 0x40))(4,uStack_28,&uStackX_20), -1 < iVar1)) {
            iVar1 = (**(*0x44dc8 + 8))(*0x44dc8,0,arg1,arg2 & 0xffff,uStackX_20,&uStack_28,0);
        }
        (**(*0x44e20 + 0x48))(0);
    }
    if (iVar1 < 0) {
        uStackX_20 = 0;
    }
    return uStackX_20;
}


/* fcn.0002e3b4 @ 0x2e3b4 */

void fcn.0002e3b4(void)

{
    uint uStack_a8;
    uint uStack_a4;
    uint uStack_a0;
    uint uStack_9c;
    uchar auStack_98 [71];
    int32_t var_49h;
    int32_t var_45h;
    int32_t var_41h;
    int32_t var_3dh;
    int64_t var_39h;
    
    uStack_a8 = 0x2798f49d;
    uStack_a4 = 0x480bf760;
    uStack_a0 = 0x69915580;
    uStack_9c = 0x4077c240;
    (**(*0x44e28 + 0x58))(0x41fa0,&uStack_a8,2,0x8c,auStack_98);
    *0x44db0 = fcn.0002d680();
    if (*0x44db0 != 0) {
        fcn.0002dc2c();
        fcn.0002e104();
        if (*0x44d98 == 0) {
            (**(*0x44e20 + 0x170))(0x200,8,0x2e2e4,0,0x3e978,0x44d98);
        }
    }
    return;
}


/* fcn.0002d680 @ 0x2d680 */

ushort fcn.0002d680(void)

{
    ushort uVar1;
    int64_t iVar2;
    int64_t aiStackX_8 [4];
    
    aiStackX_8[0] = 0;
    iVar2 = (**(*0x44e20 + 0x140))(0x3e990,0,aiStackX_8);
    if (iVar2 < 0) {
        uVar1 = 0;
    }
    else {
        *0x44db0 = **(aiStackX_8[0] + 0x48);
        *0x44dc0 = **(aiStackX_8[0] + 0x50);
        uVar1 = *0x44db0;
    }
    return uVar1;
}


/* fcn.0002dc2c @ 0x2dc2c */

void fcn.0002dc2c(ulong param_1,ulong param_2,ulong param_3)

{
    int64_t arg1;
    int64_t arg1_00;
    int64_t arg1_01;
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    uchar auStackY_28 [2];
    uint uStackY_26;
    ushort uStackY_22;
    ushort uVar5;
    uint uVar6;
    ushort uVar7;
    
    arg1 = fcn.0003a430();
    arg1_00 = fcn.0003a430();
    arg1_01 = fcn.0003a430();
    iVar1 = fcn.0002d638(0);
    if (((arg1 != 0) && (arg1_00 != 0)) && (arg1_01 != 0)) {
        iVar2 = fcn.0003a660(arg1);
        if (iVar2 != 0) {
            *(iVar2 + 0x12) = 0;
            iVar3 = fcn.0003a660(arg1_00);
            if (iVar3 != 0) {
                *(iVar3 + 0x12) = 0;
                *(iVar2 + 0x13) = 0x2adc;
                *(iVar3 + 0x13) = 0x2add;
                fcn.0003a5e0(arg1_01,0x220c,CONCAT71(param_3 >> 8,0x30));
                fcn.0003a5e0(arg1_01,0x220d,0);
                fcn.0003a6bc(arg1,0x2201);
                fcn.0003a6bc(arg1,2);
                fcn.0003a6bc(arg1,0x2203);
                fcn.0003a6bc(arg1,0x2204);
                fcn.0003a6bc(arg1,0x2205);
                fcn.0003a6bc(arg1,0x2206);
                fcn.0003a6bc(arg1,2);
                fcn.0003a6bc(arg1,0x2202);
                fcn.0003a6bc(arg1,2);
                uVar4 = 0;
                *0x46c9e = fcn.0002d984(*0x44db8,0x41f70,0);
                fcn.0003a7e4(arg1,0x2207,uVar4,*0x46c9e);
                uVar4 = 0;
                *0x46c9c = fcn.0002d984(*0x44db8,0x415c0,0);
                fcn.0003a7e4(arg1,0x2208,uVar4,*0x46c9c);
                uVar4 = 0;
                *0x46c98 = fcn.0002d984(*0x44db8,0x415c0,0);
                fcn.0003a7e4(arg1,0x2209,uVar4,*0x46c98);
                uVar4 = 0;
                *0x46c88 = fcn.0002d984(*0x44db8,0x415c0,0);
                fcn.0003a7e4(arg1,0x220a,uVar4,*0x46c88);
                fcn.0002dbd8(arg1);
                fcn.0003a718(arg1,0x2a1c,0xdddf,4);
                fcn.0003bedc(arg1);
                fcn.0002dbd8(arg1);
                fcn.0003a718(arg1,0x2a3c,0xdddf,2);
                fcn.0003bedc(arg1);
                uVar4 = 0;
                *0x46c9a = fcn.0002d984(*0x44db8,0x415c0,0);
                fcn.0003a7e4(arg1,0x220b,uVar4,*0x46c9a);
                if ((iVar1 == 0) || (*(iVar1 + 0x3e) != 0x100)) {
                    uVar4 = 0;
                    *0x46ca0 = fcn.0002d984(*0x44db8,0x41f80,0);
                    fcn.0003a7e4(arg1,0x220e,uVar4,*0x46ca0);
                }
                uVar4 = 0;
                *0x46ca2 = fcn.0002d984(*0x44db8,0x41f80,0);
                fcn.0003a7e4(arg1,0x220f,uVar4,*0x46ca2);
                fcn.0002dbd8(arg1);
                fcn.0003a718(arg1,0x29fd,0xdddf,7);
                fcn.0003bedc(arg1);
                fcn.0003a6bc(arg1,2);
                fcn.0003be7c(arg1,0x29fd,0);
                uVar4 = 1;
                fcn.0003be7c(arg1,0x2a1c,1);
                fcn.0002db3c(arg1,0x2a7c,uVar4,10);
                fcn.0003bedc(arg1);
                fcn.0003bedc(arg1);
                if ((iVar1 == 0) || (*(iVar1 + 0x3e) != 0x100)) {
                    fcn.0003be7c(arg1,0x29fd,0);
                    fcn.0003be7c(arg1,0x2a1c,1);
                    uVar4 = 0;
                    fcn.0003be7c(arg1,0x2a3c,0);
                    fcn.0002db3c(arg1,0x2a5c,uVar4,8);
                    fcn.0003bedc(arg1);
                    fcn.0003bedc(arg1);
                    fcn.0003bedc(arg1);
                }
                fcn.00010340(auStackY_28,0x10);
                uStackY_26 = 0x22152214;
                uStackY_22 = 0x2a9c;
                uVar5 = 0xdddf;
                uVar6 = 0x14004a;
                uVar7 = 0x20;
                fcn.0003a510(arg1,auStackY_28,CONCAT71(uVar4 >> 8,0x1c),0x10);
                fcn.0003ab10(*0x44db8,0x3e9a0,0x2ae4,arg1,CONCAT26(uVar7,CONCAT42(uVar6,uVar5)));
                fcn.0003a484(arg1);
                fcn.0003a484(arg1_00);
                fcn.0003a484(arg1_01);
            }
        }
    }
    return;
}


/* fcn.0002e104 @ 0x2e104 */

void fcn.0002e104(ulong param_1,ulong param_2,int64_t param_3)

{
    ushort uVar1;
    int64_t arg1;
    int64_t arg1_00;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t unaff_retaddr;
    uchar auStack_28 [2];
    ushort uStack_26;
    ushort uStack_24;
    int16_t iStack_22;
    uchar uStack_1c;
    ushort uStack_1b;
    
    arg1 = fcn.0003a430();
    arg1_00 = fcn.0003a430();
    uVar4 = 0;
    if ((arg1 != 0) && (arg1_00 != 0)) {
        iVar2 = fcn.0003a660(arg1);
        if (iVar2 != 0) {
            *(iVar2 + 0x12) = 0;
            iVar3 = fcn.0003a660(arg1_00);
            if (iVar3 != 0) {
                *(iVar3 + 0x12) = 0;
                *(iVar2 + 0x13) = 0x2ade;
                *(iVar3 + 0x13) = 0x2adf;
                fcn.0003a6bc(arg1,0x21ff);
                if (*0x44db0 != 0) {
                    uVar5 = uVar4;
                    do {
                        if (0x8ff < uVar4) break;
                        iVar2 = *(uVar4 + 0x10 + *0x44dc0);
                        if (*0x44db8 == iVar2) {
                            uVar1 = *(uVar4 + 0x1a + *0x44dc0);
                        }
                        else {
                            iVar2 = fcn.0002d844(iVar2,*(uVar4 + 0x1a + *0x44dc0));
                            param_3 = 0;
                            uVar1 = fcn.0002d984(*0x44db8,iVar2,0);
                            (**(*0x44e00 + 0x48))(iVar2);
                        }
                        fcn.00010340(auStack_28,0xf);
                        uStack_24 = 0x2200;
                        iStack_22 = uVar5 + 0x2abc;
                        uStack_1c = 4;
                        param_3 = CONCAT71(param_3 >> 8,0xf);
                        uStack_1b = 0x2ae4;
                        uStack_26 = uVar1;
                        fcn.0003a510(arg1,auStack_28,param_3,0xf);
                        uVar5 = uVar5 + 1;
                        uVar4 = uVar4 + 0x48;
                    } while (uVar5 < *0x44db0);
                }
                fcn.0003ab10(*0x44db8,0x3e9a0,0x2719,arg1,unaff_retaddr);
                fcn.0003ab10(*0x44db8,0x3e9a0,0x2713,arg1,unaff_retaddr);
                fcn.0003a484(arg1);
                fcn.0003a484(arg1_00);
            }
        }
    }
    return;
}


/* fcn.0002d6dc @ 0x2d6dc */

ulong fcn.0002d6dc(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint8_t uVar2;
    uchar *puVar3;
    uint8_t uVar4;
    uchar *puVar5;
    
    iVar1 = (**(*0x44e20 + 0x40))(4);
    (**(*0x44e20 + 0x168))(0,0x42);
    if (-1 < iVar1) {
        puVar3 = NULL;
        puVar5 = 0x21;
        do {
            *puVar3 = puVar3[arg1];
            if (puVar3[arg1] == '\0') break;
            uVar2 = puVar3 + 1;
            puVar3 = uVar2;
        } while (uVar2 < 0x21);
        uVar2 = 0;
        do {
            *puVar5 = *(uVar2 + arg2);
            if (*(uVar2 + arg2) == '\0') {
                return 0;
            }
            uVar4 = puVar5 + 1;
            puVar5 = uVar4;
            uVar2 = uVar2 + 1;
        } while (uVar4 < 0x42);
    }
    return 0;
}


/* fcn.0002eac0 @ 0x2eac0 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

void fcn.0002eac0(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong *puVar2;
    int64_t iVar3;
    uint8_t uVar4;
    char16_t *arg2_00;
    int64_t arg2_01;
    bool bVar5;
    ushort auStackX_8 [4];
    uint32_t auStackX_10 [2];
    ulong uStackX_18;
    int16_t var_30h;
    int32_t var_38h;
    int64_t var_40h;
    uint uStack_38;
    uint uStack_34;
    uint uStack_30;
    uint uStack_2c;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    auStackX_10[0] = 0;
    auStackX_8[0] = 0;
    piVar1 = *0x44dc0 + arg2 * 0x48;
    if (piVar1 == NULL) {
        return;
    }
    puVar2 = *piVar1;
    iVar3 = (**puVar2)(puVar2,auStackX_8);
    if (iVar3 < 0) {
        return;
    }
    uVar4 = auStackX_8[0];
    *(arg1 + 1) = uVar4 & 1;
    *(arg1 + 2) = uVar4 >> 1 & 1;
    *(arg1 + 4) = uVar4 >> 3 & 1;
    *(arg1 + 3) = uVar4 >> 2 & 1;
    iVar3 = (*puVar2[6])(puVar2,auStackX_10);
    if (iVar3 < 0) {
        return;
    }
    if ((auStackX_10[0] & 0x10) == 0) {
        *(arg1 + 5) = auStackX_10[0] >> 0x11 & 1;
    }
    else {
        *(arg1 + 5) = 2;
    }
    uStack_38 = 0x38dc1092;
    bVar5 = *0x44dd0 == '\0';
    *(arg1 + 6) = auStackX_10[0] >> 0x10 & 1;
    uStack_34 = 0x4336ff7a;
    uStack_30 = 0xb5bf73a2;
    uStack_2c = 0x5f8a3619;
    uStackX_18 = 0;
    if (bVar5) {
        iVar3 = (**(*0x44e20 + 0x140))(&uStack_38,0,&uStackX_18);
        if (-1 < iVar3) {
            *0x44dd0 = '\x01';
        }
        if (*0x44dd0 == '\0') {
            *(arg1 + 7) = 1;
            goto code_r0x0002ebd9;
        }
    }
    *(arg1 + 7) = 0;
code_r0x0002ebd9:
    arg2_01 = 0x415c0;
    iVar3 = 0x415c0;
    if (*(arg1 + 1) != '\0') {
        iVar3 = 0x415b8;
    }
    fcn.0002d984(*0x44db8,iVar3,*0x46c9c);
    iVar3 = 0x415c0;
    if (*(arg1 + 2) != '\0') {
        iVar3 = 0x415b8;
    }
    fcn.0002d984(*0x44db8,iVar3,*0x46c98);
    iVar3 = 0x415c0;
    if (*(arg1 + 3) != '\0') {
        iVar3 = 0x415b8;
    }
    fcn.0002d984(*0x44db8,iVar3,*0x46c88);
    if (*(arg1 + 4) != '\0') {
        arg2_01 = 0x415b8;
    }
    fcn.0002d984(*0x44db8,arg2_01,*0x46c9a);
    iVar3 = 0x41f80;
    if (*(arg1 + 5) == '\0') {
        arg2_00 = 0x41f80;
    }
    else {
        arg2_00 = L"UNKNOWN";
        if (*(arg1 + 5) == '\x01') {
            arg2_00 = 0x41fd8;
        }
    }
    fcn.0002d984(*0x44db8,arg2_00,*0x46ca0);
    if (*(arg1 + 6) != '\0') {
        iVar3 = 0x41fd8;
    }
    fcn.0002d984(*0x44db8,iVar3,*0x46ca2);
    return;
}


/* fcn.0002e8e0 @ 0x2e8e0 */

int64_t fcn.0002e8e0(uint32_t arg1,int64_t arg2)

{
    uchar *arg2_00;
    int16_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong uVar4;
    uint in_register_0000000c;
    int16_t *piVar5;
    uchar *puVar6;
    uint8_t uVar7;
    uchar *puVar8;
    
    piVar5 = CONCAT44(in_register_0000000c,arg1);
    puVar8 = NULL;
    uVar7 = 0;
    iVar1 = *piVar5;
    while (iVar1 != 0) {
        uVar7 = uVar7 + 1;
        iVar1 = piVar5[uVar7];
    }
    puVar6 = uVar7;
    if (uVar7 == 0) {
        iVar2 = 0;
    }
    else {
        arg2_00 = puVar6 + 1;
        iVar2 = (**(*0x44e20 + 0x40))(4,arg2_00);
        if (iVar2 < 0) {
            return iVar2;
        }
        fcn.0003d4be(0,arg2_00,0);
        uVar7 = 0;
        if (puVar6 != NULL) {
            do {
                uVar7 = uVar7 + 1;
                *puVar8 = piVar5[puVar8];
                puVar8 = uVar7;
            } while (puVar8 < puVar6);
        }
        iVar2 = (***(arg2 + 8))(*(arg2 + 8),0);
        fcn.0003d4be(0,arg2_00,0);
        (**(*0x44e20 + 0x48))(0);
    }
    if (*0x44da8 == 0) {
        (**(*0x44e20 + 0x140))(0x3da30,0,0x44da8);
    }
    if (iVar2 < 0) {
        if (*0x44da8 != 0) {
            uVar3 = fcn.0002d844(*0x44db8,0x221a);
            uVar4 = fcn.0002d844(*0x44db8,0x2216);
            (**(*0x44da8 + 0x20))(uVar3,uVar4,1,0);
            (**(*0x44e00 + 0x48))(uVar3);
            (**(*0x44e00 + 0x48))(uVar4);
        }
    }
    else {
        if (*0x44da8 != 0) {
            uVar3 = fcn.0002d844(*0x44db8,0x2217);
            uVar4 = fcn.0002d844(*0x44db8,0x2218);
            (**(*0x44da8 + 0x20))(uVar3,uVar4,1,0);
            (**(*0x44e00 + 0x48))(uVar3);
            (**(*0x44e00 + 0x48))(uVar4);
        }
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.0002ecd0 @ 0x2ecd0 */

void fcn.0002ecd0(int64_t arg1)

{
    int64_t iVar1;
    uint64_t arg2;
    
    arg2 = 0;
    if (*0x44dd8 == 0) {
        iVar1 = (**(*0x44e20 + 0x40))(4,0x8c,0x44dd8);
        if (iVar1 < 0) {
            return;
        }
        if (*0x44dd8 == 0) {
            return;
        }
        (**(*0x44e20 + 0x168))(*0x44dd8,0x8c,0);
    }
    iVar1 = *0x44dd8;
    if (arg1 == 0xffff) {
        if (*0x44db0 != 0) {
            do {
                fcn.0002eac0(iVar1,arg2);
                arg2 = arg2 + 1;
            } while (arg2 < *0x44db0);
        }
    }
    else {
        fcn.0002eac0(*0x44dd8,arg1);
    }
    (**(*0x44e28 + 0x58))(0x41fa0,0x3e968,2,0x8c,*0x44dd8);
    fcn.00036ec0(0x8c,*0x44dd8,0x3e968,0x41fa0);
    return;
}


/* fcn.0002ede4 @ 0x2ede4 */

ulong fcn.0002ede4(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uVar3;
    char acStackX_10 [24];
    
    acStackX_10[0] = -1;
    iVar1 = fcn.0002d638(arg1);
    if ((iVar1 != 0) && (*(iVar1 + 0x3e) == 0x100)) {
        if ((*0x44da8 == 0) && ((**(*0x44e20 + 0x140))(0x3da30,0,0x44da8), *0x44da8 == 0)) {
            return 1;
        }
        uVar2 = fcn.0002d844(*0x44db8,0x221c);
        uVar3 = fcn.0002d844(*0x44db8,0x221f);
        (**(*0x44da8 + 0x20))(uVar2,uVar3,3,acStackX_10);
        (**(*0x44e00 + 0x48))(uVar2);
        (**(*0x44e00 + 0x48))(uVar3);
        if (acStackX_10[0] != '\0') {
            return 0;
        }
    }
    return 1;
}


/* fcn.0002e758 @ 0x2e758 */

int64_t fcn.0002e758(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint32_t auStackX_10 [2];
    uchar auStack_38 [48];
    
    uVar4 = 0;
    auStackX_10[0] = 0;
    fcn.0003d4be(auStack_38,0x21,0);
    do {
        auStack_38[uVar4] = *(arg1 + uVar4 * 2);
        if (*(arg1 + uVar4 * 2) == 0) break;
        uVar4 = uVar4 + 1;
    } while (uVar4 < 0x21);
    iVar1 = (**(*arg2 + 0x10))(*arg2,1,auStack_38);
    if (iVar1 < 0) {
        if (arg3 != '\0') {
            iVar1 = (**(*arg2 + 0x30))(*arg2,auStackX_10);
            if (iVar1 < 0) {
                return iVar1;
            }
            if ((auStackX_10[0] & 0x20010) != 0) {
                iVar1 = (**(*arg2 + 0x10))(*arg2,0,auStack_38);
            }
        }
        if (iVar1 < 0) {
            if (iVar1 == -0x7fffffffffffffeb) {
                if ((*0x44da8 == 0) && ((**(*0x44e20 + 0x140))(0x3da30,0,0x44da8), *0x44da8 == 0)) {
                    return -0x7ffffffffffffff1;
                }
                uVar2 = fcn.0002d844(*0x44db8,0x221a);
                uVar3 = fcn.0002d844(*0x44db8,0x2222);
                (**(*0x44da8 + 0x20))(uVar2,uVar3,1,0);
                (**(*0x44e00 + 0x48))(uVar2);
                (**(*0x44e00 + 0x48))(uVar3);
            }
            return -0x7ffffffffffffff1;
        }
    }
    (**(*0x44e20 + 0x160))(arg2 + 0x1f,auStack_38,0x21);
    *(arg2 + 0x1c) = 0x100;
    return 0;
}


/* fcn.0002e47c @ 0x2e47c */

ulong fcn.0002e47c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong uVar4;
    uchar *puVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint8_t uVar8;
    uchar *puVar9;
    uint8_t uVar10;
    ushort auStackX_18 [4];
    int64_t iStackX_20;
    uchar auStack_68 [48];
    
    iVar6 = *0x44dc0;
    puVar5 = NULL;
    uVar10 = arg3 == '\0';
    auStackX_18[0] = 0;
    if (*0x44dc0 == 0) {
        return 0;
    }
    iStackX_20 = (arg1 & 0xffffffffU) * 9;
    puVar1 = *(*0x44dc0 + (arg1 & 0xffffffffU) * 0x48);
    iVar2 = (**puVar1)(puVar1,auStackX_18);
    if (iVar2 < 0) {
        return 0;
    }
    uVar8 = auStackX_18[0] >> 1 & 1;
    if ((auStackX_18[0] >> 2 & 1) == 0) {
        uVar7 = 0;
        if (*arg2 == 0) {
            if (uVar8 == 0) {
                if (*0x44da8 == 0) {
                    return 0;
                }
                uVar3 = fcn.0002d844(*0x44db8,0x221c);
                uVar4 = fcn.0002d844(*0x44db8,0x221d);
                (**(*0x44da8 + 0x20))(uVar3,uVar4,1,0);
                (**(*0x44e00 + 0x48))(uVar3);
                (**(*0x44e00 + 0x48))(uVar4);
                return 0;
            }
            if (*0x44da8 == 0) {
                (**(*0x44e20 + 0x140))(0x3da30,0,0x44da8);
            }
            iVar2 = (*puVar1[3])(puVar1,uVar10,iStackX_20 * 8 + 0x1f + *0x44dc0);
            if (iVar2 < 0) {
                return 0;
            }
            if ((arg3 != '\0') || (*0x44da8 == 0)) goto code_r0x0002e733;
            uVar3 = fcn.0002d844(*0x44db8,0x221c);
            puVar5 = fcn.0002d844(*0x44db8,0x221e);
            (**(*0x44da8 + 0x20))(uVar3,puVar5,1,0);
            (**(*0x44e00 + 0x48))(uVar3);
            iVar6 = *0x44e00;
        }
        else {
            fcn.0003d4be(auStack_68,0x21,0);
            do {
                auStack_68[uVar7] = *(arg2 + uVar7 * 2);
                if (*(arg2 + uVar7 * 2) == 0) break;
                uVar7 = uVar7 + 1;
            } while (uVar7 < 0x21);
            if (uVar8 != 0) {
                puVar5 = fcn.0002d6dc(iStackX_20 * 8 + 0x1f + iVar6,auStack_68);
                if (puVar5 == NULL) {
                    return 0;
                }
                uVar10 = uVar10 | 2;
            }
            puVar9 = auStack_68;
            if ((uVar10 & 2) != 0) {
                puVar9 = puVar5;
            }
            iVar2 = (*puVar1[1])(puVar1,uVar10,puVar9,0);
            if ((iVar2 < 0) && (*0x44da8 != 0)) {
                uVar3 = fcn.0002d844(*0x44db8,0x221a);
                uVar4 = fcn.0002d844(*0x44db8,0x221b);
                (**(*0x44da8 + 0x20))(uVar3,uVar4,1,0);
                (**(*0x44e00 + 0x48))(uVar3);
                (**(*0x44e00 + 0x48))(uVar4);
            }
            if (puVar5 == NULL) goto code_r0x0002e733;
            iVar6 = *0x44e20;
        }
        (**(iVar6 + 0x48))(puVar5);
    }
code_r0x0002e733:
    if (iVar2 < 0) {
        return 0;
    }
    return 1;
}


/* fcn.0002f4cc @ 0x2f4cc */

void fcn.0002f4cc(void)

{
    int16_t iVar1;
    int iVar2;
    int64_t iVar3;
    char16_t *arg2;
    
    if (*0x44dc0 != 0) {
        iVar3 = *(*0x44dc0 + *0x3e9c0 * 0x48);
        iVar2 = *(iVar3 + 0x40);
        iVar3 = *(iVar3 + 0x38);
        if (iVar2 == 1) {
            iVar3 = *(iVar3 + 0x390);
        }
        else if (iVar2 == 2) {
            iVar3 = *(iVar3 + 0x148);
        }
        else {
            if (iVar2 != 3) {
                return;
            }
            iVar3 = *(iVar3 + 0x58);
        }
        if (iVar3 != 0) {
            iVar1 = *(iVar3 + 0x3e);
            if (iVar1 == 0x203) {
                arg2 = L"Opal";
            }
            else if (iVar1 == 0x301) {
                arg2 = L"Opalite";
            }
            else if (iVar1 == 0x302) {
                arg2 = L"Pyrite 1.0";
            }
            else if (iVar1 == 0x303) {
                arg2 = L"Pyrite 2.0";
            }
            else if (iVar1 == 0x100) {
                arg2 = L"Enterprise";
            }
            else {
                if (iVar1 != 0x304) {
                    return;
                }
                arg2 = L"Ruby";
            }
            fcn.0002d984(*0x44db8,arg2,*0x46c9e);
        }
    }
    return;
}


/* fcn.00037e1c @ 0x37e1c */

void fcn.00037e1c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
    ulong uStack_90;
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
    iVar1 = (**(*0x44e00 + 0x140))(&uStack_c8);
    uVar3 = 0;
    if (iVar1 < 0) {
        uVar9 = uVar3;
        if (iStackX_18 != 0) {
            piVar6 = &iStackX_18;
            iVar1 = iStackX_18;
            do {
                iVar8 = 0;
                uVar2 = fcn.00037d74(iVar1,0,0,0);
                if (uVar3 <= uVar2 >> 1) {
                    uVar3 = fcn.00037d74(iVar1,0,0,iVar8);
                    uVar3 = uVar3 >> 1;
                }
                piVar6 = piVar6 + 1;
                uVar9 = uVar9 + 1;
                iVar1 = *piVar6;
            } while (iVar1 != 0);
        }
        iVar1 = *(*0x44df8 + 0x40);
        if (&uStack_90 != *(iVar1 + 0x48)) {
            section..text(&uStack_90,*(iVar1 + 0x48),0x18);
        }
        (**(iVar1 + 0x18))(iVar1,uStack_90._4_4_,&iStack_68);
        (**(iVar1 + 0x40))(iVar1,0);
        iVar8 = iVar1;
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
        arg1_00 = fcn.00032c10(iVar8,uVar9 * 2 + 6);
        uVar3 = uVar9 * 2 + 4;
        if (uVar3 != 0) {
            fcn.00010400(arg1_00,uVar3 >> 1,0x2500);
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
                    fcn.00010400(arg1_00,uVar3 >> 1,0x20);
                }
                *arg1_00 = 0x2502;
                *(arg1_00 + uVar9 + 1) = 0x2502;
                (**(iVar1 + 0x38))(iVar1,uVar2);
                (**(iVar1 + 8))(iVar1);
                uVar5 = 0;
                uStack_b0 = fcn.00037d74(iVar4,0,0,0);
                uStack_b0 = uStack_b0 >> 1;
                if (uVar9 < uStack_b0) {
                    fcn.00037d74(iVar4,CONCAT71(uVar5 >> 8,1),uVar9,&uStack_b0);
                    uVar9 = uStack_b0;
                    iVar4 = fcn.00032c10(iVar4,uStack_b0 * 2 + 2);
                    fcn.00033fa0(iVar4,uVar9 + 1,iStack_98,uVar9 - 3);
                    fcn.00034080(iVar4,uVar9 + 1,0x442b0);
                    (**(iVar1 + 0x38))(iVar1,uStack_a8 + 1,iVar8);
                    (**(iVar1 + 8))(iVar1,iVar4);
                    (**(*0x44e00 + 0x48))();
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
            fcn.00010400(arg1_00,uVar3 >> 1,0x2500);
        }
        *arg1_00 = 0x2514;
        *(arg1_00 + uVar9 + 1) = 0x2518;
        (**(iVar1 + 0x38))(iVar1,uVar2,iVar8);
        (**(iVar1 + 8))(iVar1,arg1_00);
        (**(*0x44e00 + 0x48))(arg1_00);
        (**(iVar1 + 0x40))(iVar1,uStack_7c);
        (**(iVar1 + 0x38))(iVar1,iStack_84,iStack_80);
        (**(iVar1 + 0x28))(iVar1,iStack_88);
        if (arg2 != 0) {
            while (iVar1 = (**(*(*0x44df8 + 0x30) + 8))(*(*0x44df8 + 0x30),arg2), iVar1 < 0) {
                if (iVar1 == -0x7ffffffffffffffa) {
                    (**(*0x44e00 + 0x60))(1,*(*0x44df8 + 0x30) + 0x10,auStack_58);
                }
            }
        }
    }
    else {
        (**puStack_78)(arg1,arg2,&iStackX_18);
    }
    return;
}


/* fcn.0002ffb8 @ 0x2ffb8 */

void fcn.0002ffb8(void)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint auStackX_8 [2];
    int64_t aiStackX_10 [2];
    int8_t var_4bh;
    int8_t var_4ch;
    int8_t var_4dh;
    int8_t var_4eh;
    int64_t var_67h;
    int64_t var_6fh;
    int64_t var_77h;
    uchar auStack_78 [87];
    int64_t var_19h;
    uint8_t uStack_14;
    uint8_t uStack_13;
    uint8_t uStack_12;
    uint8_t uStack_11;
    
    iVar2 = (**(*0x44e00 + 0x140))(0x3d7b0,0,aiStackX_10);
    if (-1 < iVar2) {
        uVar1 = (**(aiStackX_10[0] + 0x10))();
        aiStackX_10[1] = 0x6d;
        (**(*0x44e10 + 0x48))(0x40490,0x3d8f0,auStackX_8,aiStackX_10 + 1,auStack_78);
        uStack_14 = uVar1 & 1;
        uStack_13 = uVar1 >> 1 & 1;
        uStack_12 = uVar1 >> 2 & 1;
        uStack_11 = uVar1 >> 3 & 1;
        (**(*0x44e10 + 0x58))(0x40490,0x3d8f0,auStackX_8[0],0x6d,auStack_78);
    }
    return;
}


/* fcn.00038340 @ 0x38340 */

int64_t fcn.00038340(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t var_20h_2;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int32_t var_fh;
    
    iVar1 = (**(*0x44e00 + 0x140))(0x3d620,0,&var_20h);
    if (-1 < iVar1) {
        iVar1 = (**(var_20h + 0x40))(&var_20h_2);
        if ((iVar1 < 0) || (var_20h_2 != 0)) {
            iVar1 = -0x7ffffffffffffffd;
        }
        else {
            var_18h._0_4_ = 0x203;
            var_18h._4_4_ = arg1;
            var_28h._0_4_ = 0xd;
            iVar1 = (**var_20h)(0,&var_18h,8,&var_28h,0,7);
            if ((((-1 < iVar1) && ((var_18h & 0x7f00) == 0x200)) && ((var_18h >> 0xf & 1) != 0)) &&
               ((var_18h & 0xff000000) == 0)) {
                *arg2 = var_fh;
            }
        }
    }
    return iVar1;
}


/* fcn.000315d8 @ 0x315d8 */

void fcn.000315d8(void)

{
    int64_t in_R9;
    
    fcn.00012538(0x2864,0x307ec);
    fcn.00012538(0x285c,0x30fdc);
    fcn.00012538(0x285d,0x31208);
    fcn.00012538(0x285e,0x312fc);
    fcn.00012538(0x285f,0x313f0);
    fcn.00012538(0x2860,0x314e4);
    fcn.00012538(0x285b,0x310e8);
    fcn.00037b0c(0x3d950,0x10,0x30520,in_R9);
    return;
}


/* fcn.00030990 @ 0x30990 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_30h

void fcn.00030990(int64_t arg1)

{
    uchar uVar1;
    uchar uVar2;
    char cVar3;
    int64_t arg2;
    int64_t iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint32_t *arg2_00;
    int iVar7;
    int64_t var_10h_2;
    uint32_t auStackX_10 [2];
    uint uStackX_18;
    uint32_t auStackX_20 [2];
    int32_t var_f0h;
    int32_t var_f8h;
    int32_t var_100h;
    int64_t var_108h;
    uint uStack_1a8;
    ushort uStack_1a4;
    uchar uStack_1a2;
    uint uStack_1a1;
    uchar uStack_19d;
    uint uStack_19c;
    uchar uStack_198;
    uchar uStack_197;
    uchar uStack_190;
    uint uStack_18f;
    uchar uStack_18b;
    ushort uStack_189;
    uchar uStack_187;
    ulong uStack_180;
    ulong uStack_178;
    uint uStack_170;
    uchar auStack_16c [52];
    uchar auStack_138 [8];
    int64_t aiStack_130 [21];
    int64_t var_80h;
    int64_t var_bp_70h;
    uint32_t var_bp_68h;
    int16_t var_64h;
    int16_t var_62h;
    int16_t var_60h;
    int16_t var_5eh;
    int64_t var_bp_50h;
    int64_t var_bp_48h;
    int64_t var_bp_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_10h;
    
    uVar6 = 0;
    uStackX_18 = 0x30004;
    uStack_178 = 0;
    var_10h_2._0_4_ = 0;
    auStackX_10[0] = 0xff;
    arg2 = fcn.00032c10(arg1,0x3fc);
    iVar7 = 1;
    if ((((arg2 != 0) && (iVar4 = (**(*0x44e00 + 0x140))(0x3d620,0,auStack_138), -1 < iVar4)) &&
        (iVar4 = fcn.00038888(auStackX_10,arg2,auStack_138), -1 < iVar4)) && (auStackX_10[0] != 0)) {
        do {
            if (*(arg2 + uVar6 * 4) == '\x03') {
                fcn.000107d8(*0x46c38,0x19d6,0x3f98c,*(arg2 + 3 + uVar6 * 4));
                fcn.000107d8(*0x46c38,0x19d9,0x3f98c,*(arg2 + 2 + uVar6 * 4));
                break;
            }
            uVar5 = uVar6 + 1;
            uVar6 = uVar5;
        } while (uVar5 < auStackX_10[0]);
    }
    uStack_180 = 10;
    iVar4 = (**(*0x44e10 + 0x48))(0x42260,0x3d8c0,&var_10h_2,&uStack_180,&uStack_190);
    if (iVar4 < 0) {
        var_10h_2._0_4_ = 3;
        uStack_18f = 0;
        uStack_18b = 0;
        uStack_189 = 0;
        uStack_187 = 0;
    }
    uStack_180 = 0x12;
    iVar4 = (**(*0x44e10 + 0x48))(0x42108,0x3db40,&var_10h_2,&uStack_180,&uStack_1a8);
    if (iVar4 < 0) {
        var_10h_2._0_4_ = 3;
        uStack_1a8 = 0x101;
        uStack_1a4 = 0;
        uStack_1a1 = 0;
        uStack_1a2 = 0;
        uStack_19c = 1;
        uStack_198 = 0;
    }
    iVar4 = 0;
    arg2_00 = auStackX_20;
    fcn.000103d0(1,arg2_00,0,0);
    auStackX_20[0] = auStackX_20[0] & 0xfff0ff0;
    if ((auStackX_20[0] == 0x906a0) || ((auStackX_20[0] != 0xb06a0 && (iVar7 = 0xff, auStackX_20[0] == 0xb06e0)))) {
        iVar7 = 0;
    }
    uStack_197 = iVar7 != 0;
    uStack_19d = 0;
    uStack_170 = 1;
    fcn.000384b4(0x10050000,arg2_00,&uStack_170,iVar4);
    uVar6 = rdmsr(0x13a);
    uVar1 = uStack_1a1;
    if ((uVar6 >> 0x20 & 1) != 0) {
        uVar1 = 1;
    }
    uVar6 = rdmsr(0x13a);
    uVar2 = uStack_1a1 >> 8;
    if ((uVar6 & 0x20) != 0) {
        uVar2 = 1;
    }
    uStack_1a1._0_2_ = CONCAT11(uVar2,uVar1);
    cVar3 = fcn.000394fc();
    uStack_1a8 = CONCAT13(cVar3 != '\0',uStack_1a8);
    iVar4 = (**(*0x44e00 + 0x140))(0x3d620,0,aiStack_130);
    if (iVar4 < 0) {
        uStack_1a8 = CONCAT13(1,uStack_1a8);
        if (arg2 != 0) {
            (**(*0x44e00 + 0x48))(arg2);
        }
        (**(*0x44e10 + 0x58))(0x42108,0x3db40,var_10h_2,0x12,&uStack_1a8);
        (**(*0x44e10 + 0x58))(L"MeBackupStorage",0x3db40,2,0x12,&uStack_1a8);
        (**(*0x44e10 + 0x58))(0x42260,0x3d8c0,var_10h_2,10,&uStack_190);
        return;
    }
    (**(aiStack_130[0] + 0x40))(auStack_16c);
    return;
}


/* fcn.000387c0 @ 0x387c0 */

int64_t fcn.000387c0(void)

{
    int64_t iVar1;
    uint32_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    
    iVar1 = (**(*0x44e00 + 0x140))(0x3d620,0,&var_28h);
    if (-1 < iVar1) {
        iVar1 = (**(var_28h + 0x40))(&var_10h);
        if ((iVar1 < 0) || (var_10h != 0)) {
            iVar1 = -0x7ffffffffffffffd;
        }
        else {
            fcn.00010340(&var_20h,8);
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


/* fcn.00038410 @ 0x38410 */

int64_t fcn.00038410(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int aiStackX_10 [2];
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_bp_18h;
    int8_t var_bp_10h;
    int32_t var_fh;
    
    aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,arg2);
    iVar1 = (**(*0x44e00 + 0x140))(0x3d620,0,&var_20h);
    if (-1 < iVar1) {
        iVar1 = (**(var_20h + 0x40))(aiStackX_10);
        if ((iVar1 < 0) || (aiStackX_10[0] != 0)) {
            iVar1 = -0x7ffffffffffffffd;
        }
        else {
            var_bp_18h._0_4_ = 0x303;
            var_bp_18h._4_4_ = arg1;
            var_bp_10h = 4;
            var_fh = arg3;
            var_28h._0_4_ = 8;
            iVar1 = (**var_20h)(0,&var_bp_18h,0xd,&var_28h,0,7);
        }
    }
    return iVar1;
}


/* fcn.000389c0 @ 0x389c0 */

int64_t fcn.000389c0(void)

{
    char cVar1;
    int64_t iVar2;
    uint32_t *arg2;
    uint64_t uVar3;
    int aiStackX_8 [2];
    uint32_t auStackX_10 [2];
    uint auStackX_18 [2];
    ulong *puStackX_20;
    
    iVar2 = (**(*0x44e00 + 0x140))(0x3d620,0,&puStackX_20);
    uVar3 = 0;
    if (-1 < iVar2) {
        (*puStackX_20[8])(aiStackX_8);
        if (aiStackX_8[0] == 0) {
            iVar2 = 0;
        }
        else {
            cVar1 = fcn.000394fc();
            if ((cVar1 == '\0') && (aiStackX_8[0] == 3)) {
                arg2 = auStackX_10;
                auStackX_10[0] = 0x3f0;
                auStackX_18[0] = 4;
                iVar2 = (**puStackX_20)(0,arg2,4,auStackX_18,0,7);
                if ((-1 < iVar2) && ((auStackX_10[0] & 0xff000000) != 0)) {
                    iVar2 = -0x7ffffffffffffffd;
                }
                do {
                    if ((*0xc00b0040 & 0xf) == 5) {
                        return iVar2;
                    }
                    fcn.000382d8(1000000,arg2);
                    uVar3 = uVar3 + 1;
                } while (uVar3 < 5);
                iVar2 = -0x7fffffffffffffee;
            }
            else {
                iVar2 = -0x7ffffffffffffffd;
            }
        }
    }
    return iVar2;
}


/* fcn.00038624 @ 0x38624 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Type propagation algorithm not settling

int64_t fcn.00038624(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    uint32_t *puVar3;
    int *noname_0;
    char *pcStackX_8;
    uint32_t auStackX_10 [2];
    int aiStackX_18 [2];
    uint auStackX_20 [2];
    int64_t var_38h;
    uint32_t var_40h;
    int32_t var_48h;
    int aiStack_48 [2];
    ulong *puStack_40;
    ulong *apuStack_38 [2];
    uint32_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    pcStackX_8._0_1_ = arg1;
    iVar2 = (**(*0x44e00 + 0x140))(0x3d620,0,&puStack_40);
    if (-1 < iVar2) {
        noname_0 = aiStackX_18;
        iVar2 = (*puStack_40[8])();
        if ((iVar2 < 0) || (aiStackX_18[0] != 0)) {
            iVar2 = -0x7ffffffffffffffd;
        }
        else {
            auStackX_20[0] = 4;
            puVar3 = fcn.00032c10(noname_0,0x12);
            if (puVar3 == NULL) {
                return -0x7ffffffffffffff7;
            }
            puVar3[2] = 0;
            *puVar3 = 10;
            *puVar3 = *puVar3 & 0xffff8bff;
            *puVar3 = *puVar3 | 0xb00;
            puVar3[3] = 1;
            puVar3[1] = 0x10050000;
            *(puVar3 + 4) = 0;
            if (puVar3 + 0x11 != &pcStackX_8) {
                section..text(puVar3 + 0x11,&pcStackX_8,1);
            }
            iVar2 = (**puStack_40)(0,puVar3,0x12,auStackX_20,0,9);
            if (*(puVar3 + 3) != '\0') {
                iVar2 = -0x7ffffffffffffff9;
            }
            (**(*0x44e00 + 0x48))(puVar3);
        }
    }
    if (iVar2 < 0) {
        return iVar2;
    }
    iVar2 = (**(*0x44e00 + 0x140))(0x3d620,0,apuStack_38);
    if (iVar2 < 0) {
        return iVar2;
    }
    iVar2 = (*apuStack_38[0][8])(aiStack_48);
    if (((-1 < iVar2) && (aiStack_48[0] == 0)) && (cVar1 = fcn.000394fc(), cVar1 == '\0')) {
        auStackX_10[0] = 0x40a;
        aiStack_48[1] = 4;
        iVar2 = (**apuStack_38[0])(0,auStackX_10,4,aiStack_48 + 1,0,9);
        if ((auStackX_10[0] & 0xff000000) != 0) {
            return -0x7ffffffffffffff9;
        }
        return iVar2;
    }
    return -0x7ffffffffffffffd;
}


/* fcn.00038c5c @ 0x38c5c */

int64_t fcn.00038c5c(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    int aiStackX_10 [2];
    uint auStackX_18 [2];
    uint32_t uStackX_20;
    uint uStackX_24;
    ulong *apuStack_18 [2];
    
    iVar2 = (**(*0x44e00 + 0x140))(0x3d620,0,apuStack_18);
    if (-1 < iVar2) {
        iVar2 = (*apuStack_18[0][8])(aiStackX_10);
        if (((iVar2 < 0) || (aiStackX_10[0] != 0)) || (cVar1 = fcn.000394fc(), cVar1 != '\0')) {
            iVar2 = -0x7ffffffffffffffd;
        }
        else {
            uStackX_20 = 0x20ff;
            uStackX_24 = arg1;
            auStackX_18[0] = 4;
            iVar2 = (**apuStack_18[0])(0,&uStackX_20,8,auStackX_18,0,7);
            if ((-1 < iVar2) && ((uStackX_20 & 0xff000000) != 0)) {
                iVar2 = -0x7ffffffffffffff9;
            }
        }
    }
    return iVar2;
}


/* fcn.0003917c @ 0x3917c */

int64_t fcn.0003917c(uint32_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    uint32_t auStackX_8 [2];
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_bp_10h;
    
    auStackX_8[0] = arg1;
    iVar2 = (**(*0x44e00 + 0x140))(0x3d620,0,&var_bp_10h);
    if (-1 < iVar2) {
        iVar2 = (**(var_bp_10h + 0x40))(auStackX_8);
        if (((iVar2 < 0) || (auStackX_8[0] != 0)) || (cVar1 = fcn.000394fc(), cVar1 != '\0')) {
            iVar2 = -0x7ffffffffffffffd;
        }
        else {
            fcn.00010340(&var_28h,8);
            var_28h._0_4_ = 0x10200;
            var_28h._4_4_ = CONCAT31(var_28h._5_3_,arg2);
            var_20h._0_4_ = 8;
            iVar2 = (**var_bp_10h)(0,&var_28h,5,&var_20h,0,0xd);
            if ((-1 < iVar2) && (var_28h._4_4_ != 0)) {
                iVar2 = -0x7ffffffffffffff9;
            }
        }
    }
    return iVar2;
}


/* fcn.00039300 @ 0x39300 */

int64_t fcn.00039300(uint32_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    uint32_t auStackX_8 [2];
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_bp_10h;
    
    auStackX_8[0] = arg1;
    iVar2 = (**(*0x44e00 + 0x140))(0x3d620,0,&var_bp_10h);
    if (-1 < iVar2) {
        iVar2 = (**(var_bp_10h + 0x40))(auStackX_8);
        if (((iVar2 < 0) || (auStackX_8[0] != 0)) || (cVar1 = fcn.000394fc(), cVar1 != '\0')) {
            iVar2 = -0x7ffffffffffffffd;
        }
        else {
            fcn.00010340(&var_28h,8);
            var_28h._0_4_ = 0x10400;
            var_28h._4_4_ = CONCAT31(var_28h._5_3_,arg2);
            var_20h._0_4_ = 8;
            iVar2 = (**var_bp_10h)(0,&var_28h,5,&var_20h,0,0xd);
            if ((-1 < iVar2) && (var_28h._4_4_ != 0)) {
                iVar2 = -0x7ffffffffffffff9;
            }
        }
    }
    return iVar2;
}


/* fcn.0002fda4 @ 0x2fda4 */

void fcn.0002fda4(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int16_t iVar4;
    int64_t iStackX_18;
    uchar auStackX_20 [8];
    uchar auStack_28 [4];
    char cStack_24;
    
    iVar4 = arg2;
    iVar2 = fcn.0003207c(0,4,1);
    if (iVar2 == 0) {
        return;
    }
    fcn.0003a1b8(0x3db40,0x42108,0x12,auStack_28);
    if ((arg1 != 3) || (iVar3 = (**(*0x44e00 + 0x140))(0x3d780,0,&iStackX_18), iVar3 < 0)) goto code_r0x0002fe77;
    cVar1 = (**(iStackX_18 + 0x18))();
    if ((cVar1 == '\0') && (cVar1 = (**(iStackX_18 + 0x48))(), cVar1 == '\0')) {
        cVar1 = (**(iStackX_18 + 0x30))();
        cStack_24 = '\0';
        if (cVar1 != '\0') goto code_r0x0002fe42;
    }
    else {
code_r0x0002fe42:
        cStack_24 = '\x01';
    }
    fcn.0003a2ac(0x3db40,0x42108,0x12,auStack_28);
    (**(*0x44e00 + 0x48))(iVar2);
code_r0x0002fe77:
    if (cStack_24 != '\x01') {
        if (arg1 == 3) {
            if (((iVar4 == 0x2864) || (iVar4 == 0x2894)) && ((cStack_24 == '\0' && (*0x44de1 == '\0')))) {
                *0x44de1 = '\x01';
                (**(*0x44e00 + 0x50))(0x200,0x10,0x2fc74,0,0x46c30);
                (**(*0x44e00 + 0xa8))(0x3dad0,*0x46c30,auStackX_20);
            }
        }
        else if (((arg1 == 4) && (iVar4 == 0x2864)) && (*0x44de1 != '\0')) {
            *0x44de1 = '\0';
            (**(*0x44e00 + 0x70))(*0x46c30);
        }
    }
    return;
}


/* fcn.00038888 @ 0x38888 */

int64_t fcn.00038888(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t *puVar3;
    int *noname_0;
    int aiStackX_18 [2];
    int aiStackX_20 [2];
    
    noname_0 = aiStackX_18;
    iVar2 = (**(*arg3 + 0x40))();
    if ((iVar2 < 0) || (aiStackX_18[0] != 0)) {
        iVar2 = -0x7ffffffffffffffd;
    }
    else if (arg1 == 0) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        uVar1 = *arg1;
        puVar3 = fcn.00032c10(noname_0,uVar1 * 4 + 8);
        if (puVar3 == NULL) {
            iVar2 = -0x7ffffffffffffff7;
        }
        else {
            *puVar3 = 10;
            *puVar3 = *puVar3 & 0xffff9cff;
            *puVar3 = *puVar3 | 0x1c00;
            aiStackX_20[0] = uVar1 * 4 + 8;
            iVar2 = (***arg3)(0,puVar3,4,aiStackX_20,0,9);
            if (iVar2 < 0) {
                if (iVar2 == -0x7ffffffffffffffb) {
                    *arg1 = puVar3[1];
                }
            }
            else if ((((*puVar3 & 0x7f00) == 0x1c00) && ((*puVar3 & 0x8000) != 0)) && (*(puVar3 + 3) == '\0')) {
                uVar1 = puVar3[1];
                *arg1 = uVar1;
                if ((uVar1 != 0) && (arg2 != puVar3 + 2)) {
                    section..text(arg2,puVar3 + 2,uVar1 << 2);
                }
            }
            (**(*0x44e00 + 0x48))(puVar3);
        }
    }
    return iVar2;
}


/* fcn.000384b4 @ 0x384b4 */

int64_t fcn.000384b4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char **arg2_00;
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t *puVar3;
    uint32_t auStackX_10 [4];
    int aiStackX_20 [2];
    char **in_stack_00000028;
    ulong *apuStack_28 [2];
    
    aiStackX_20[0] = CONCAT31(aiStackX_20[0]._1_3_,arg4);
    auStackX_10[0] = arg2;
    iVar2 = (**(*0x44e00 + 0x140))(0x3d620,0,apuStack_28);
    if (-1 < iVar2) {
        iVar2 = (*apuStack_28[0][8])(aiStackX_20);
        if ((iVar2 < 0) || (aiStackX_20[0] != 0)) {
            iVar2 = -0x7ffffffffffffffd;
        }
        else {
            auStackX_10[0] = *arg3 + 8;
            uVar1 = 0x11;
            if (0x11 < auStackX_10[0]) {
                uVar1 = auStackX_10[0];
            }
            puVar3 = fcn.00032c10(auStackX_10[0],uVar1);
            if (*arg3 != 0) {
                fcn.00010340(in_stack_00000028,*arg3);
            }
            if (puVar3 == NULL) {
                iVar2 = -0x7ffffffffffffff7;
            }
            else {
                uVar1 = *arg3;
                arg2_00 = puVar3 + 2;
                *arg2_00 = 0;
                *puVar3 = 10;
                *puVar3 = *puVar3 & 0xffff8aff;
                *puVar3 = *puVar3 | 0xa00;
                puVar3[1] = arg1;
                puVar3[3] = uVar1;
                *(puVar3 + 4) = 0;
                iVar2 = (**apuStack_28[0])(0,puVar3,0x11,auStackX_10,0,9);
                if (-1 < iVar2) {
                    if (((((*puVar3 & 0x7f00) == 0xa00) && ((*puVar3 & 0x8000) != 0)) && (*(puVar3 + 3) == '\0')) &&
                       (uVar1 = puVar3[1], uVar1 <= *arg3)) {
                        if ((uVar1 != 0) && (in_stack_00000028 != arg2_00)) {
                            section..text(in_stack_00000028,arg2_00,uVar1);
                        }
                        *arg3 = puVar3[1];
                    }
                    else {
                        iVar2 = -0x7ffffffffffffff9;
                    }
                }
                (**(*0x44e00 + 0x48))(puVar3);
            }
        }
    }
    return iVar2;
}


/* fcn.00038d0c @ 0x38d0c */

int64_t fcn.00038d0c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int aiStackX_10 [2];
    uint auStackX_18 [4];
    uint32_t uStack_28;
    ulong uStack_24;
    ulong uStack_1c;
    uint uStack_14;
    
    iVar1 = (**(*arg2 + 0x40))(aiStackX_10);
    if ((iVar1 < 0) || (aiStackX_10[0] != 0)) {
        iVar1 = -0x7ffffffffffffffd;
    }
    else {
        uStack_28 = 0x21ff;
        auStackX_18[0] = 0x18;
        iVar1 = (***arg2)(0,&uStack_28,4,auStackX_18,0,7);
        if (-1 < iVar1) {
            if ((((uStack_28 & 0x7f00) == 0x2100) && ((uStack_28 >> 0xf & 1) != 0)) && ((uStack_28 & 0xff000000) == 0))
            {
                *arg1 = uStack_24;
                *(arg1 + 8) = uStack_1c;
                *(arg1 + 0x10) = uStack_14;
            }
            else {
                iVar1 = -0x7ffffffffffffff9;
            }
        }
    }
    return iVar1;
}


/* fcn.000390bc @ 0x390bc */

int64_t fcn.000390bc(int64_t arg1)

{
    int64_t iVar1;
    uint32_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_10h;
    int8_t var_bp_8h;
    
    iVar1 = (**(*0x44e00 + 0x140))(0x3d620,0,&var_28h);
    if (-1 < iVar1) {
        iVar1 = (**(var_28h + 0x40))(&var_18h);
        if ((iVar1 < 0) || (var_18h != 0)) {
            iVar1 = -0x7ffffffffffffffd;
        }
        else {
            fcn.00010340(&var_10h,9);
            var_10h._0_4_ = 0x100;
            var_20h._0_4_ = 9;
            iVar1 = (**var_28h)(0,&var_10h,4,&var_20h,0,0xd);
            if (-1 < iVar1) {
                if (var_10h._4_4_ == 0) {
                    *arg1 = var_bp_8h;
                }
                else {
                    iVar1 = -0x7ffffffffffffff9;
                }
            }
        }
    }
    return iVar1;
}


/* fcn.000393c4 @ 0x393c4 */

//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_23h
//WARNING: Variable defined which should be unmapped: var_9h

int64_t fcn.000393c4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int aiStackX_10 [2];
    int64_t var_23h;
    uint32_t var_6fh;
    int64_t var_7fh;
    ulong *apuStack_78 [2];
    uint uStack_68;
    int iStack_64;
    uint uStack_60;
    char *apcStack_5c [4];
    char *apcStack_3c [3];
    int64_t var_19h;
    int64_t var_9h;
    int32_t var_1h;
    
    if ((arg2 == 0) || (arg3 == 0)) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = (**(*0x44e00 + 0x140))(0x3d620,0,apuStack_78);
        if (-1 < iVar1) {
            iVar1 = (*apuStack_78[0][8])(aiStackX_10);
            if ((iVar1 < 0) || (aiStackX_10[0] != 0)) {
                iVar1 = -0x7ffffffffffffffd;
            }
            else {
                fcn.00010340(&uStack_68,0x4c);
                uStack_68 = 0x500;
                stack0x00000020 = 0x4c;
                iVar1 = (**apuStack_78[0])(0,&uStack_68,4,&var_23h + 5,0,0xd);
                if (-1 < iVar1) {
                    if (iStack_64 == 0) {
                        *arg1 = uStack_60;
                        if (arg2 != apcStack_5c) {
                            section..text(arg2,apcStack_5c,0x20);
                        }
                        if (arg3 != apcStack_3c) {
                            section..text(arg3,apcStack_3c,0x20);
                        }
                    }
                    else {
                        iVar1 = -0x7ffffffffffffff9;
                    }
                }
            }
        }
    }
    return iVar1;
}


/* fcn.0002ff4c @ 0x2ff4c */

void fcn.0002ff4c(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint64_t uVar2;
    int16_t iVar3;
    
    uVar2 = 0;
    do {
        if (((uVar2 & 1) == 0) && (uVar2 != 0)) {
            *arg1 = 0x2d;
            arg1 = arg1 + 2;
        }
        uVar1 = *(uVar2 + arg2) >> 4;
        if (uVar1 < 10) {
            iVar3 = uVar1 + 0x30;
        }
        else {
            iVar3 = uVar1 + 0x37;
        }
        uVar1 = *(uVar2 + arg2) & 0xf;
        *arg1 = iVar3;
        if (uVar1 < 10) {
            iVar3 = uVar1 + 0x30;
        }
        else {
            iVar3 = uVar1 + 0x37;
        }
        *(arg1 + 2) = iVar3;
        uVar2 = uVar2 + 1;
        arg1 = arg1 + 4;
    } while (uVar2 < 0x20);
    *arg1 = 0;
    return;
}


/* fcn.00039240 @ 0x39240 */

int64_t fcn.00039240(int64_t arg1)

{
    int64_t iVar1;
    uint32_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_10h;
    int8_t var_bp_8h;
    
    iVar1 = (**(*0x44e00 + 0x140))(0x3d620,0,&var_28h);
    if (-1 < iVar1) {
        iVar1 = (**(var_28h + 0x40))(&var_18h);
        if ((iVar1 < 0) || (var_18h != 0)) {
            iVar1 = -0x7ffffffffffffffd;
        }
        else {
            fcn.00010340(&var_10h,9);
            var_10h._0_4_ = 0x300;
            var_20h._0_4_ = 9;
            iVar1 = (**var_28h)(0,&var_10h,4,&var_20h,0,0xd);
            if (-1 < iVar1) {
                if (var_10h._4_4_ == 0) {
                    *arg1 = var_bp_8h;
                }
                else {
                    iVar1 = -0x7ffffffffffffff9;
                }
            }
        }
    }
    return iVar1;
}


/* fcn.000382d8 @ 0x382d8 */

int64_t fcn.000382d8(int64_t arg1,int64_t arg2)

{
    fcn.00038278((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.00038278 @ 0x38278 */

void fcn.00038278(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int iVar4;
    uint32_t uVar5;
    
    uVar3 = arg1 >> 0x16 & 0x3ff;
    uVar5 = arg1 & 0x3fffff;
    do {
        uVar1 = in(0x1808);
        iVar4 = (uVar1 & 0xffffff) + uVar5;
        uVar5 = 0x400000;
        while( true ) {
            iVar2 = in(0x1808);
            if ((iVar4 - iVar2 >> 0x17 & 1) != 0) break;
            fcn.00010420();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00032348 @ 0x32348 */

ulong fcn.00032348(uint32_t arg1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    
    uVar3 = 0;
    uVar1 = 100;
    if (arg1 != '`') {
        uVar1 = 0x66;
    }
    uVar2 = in(uVar1);
    if ((uVar2 & 2) != 0) {
        do {
            if (0x1ffff < uVar3) {
                return 0x8000000000000007;
            }
            fcn.000382d8(0xf,uVar1);
            uVar2 = in(uVar1);
            uVar3 = uVar3 + 1;
        } while ((uVar2 & 2) != 0);
        if (0x1ffff < uVar3) {
            return 0x8000000000000007;
        }
    }
    return 0;
}


/* fcn.000322c0 @ 0x322c0 */

ulong fcn.000322c0(int64_t arg1)

{
    ushort uVar1;
    uint8_t uVar2;
    uchar uVar3;
    ushort uVar4;
    uint64_t uVar5;
    
    uVar5 = 0;
    uVar1 = 100;
    if (arg1 != '`') {
        uVar1 = 0x66;
    }
    uVar2 = in(uVar1);
    if ((uVar2 & 1) != 0) {
        do {
            if (0x1ffff < uVar5) {
                return 0x8000000000000007;
            }
            uVar4 = 0x60;
            if (arg1 != '`') {
                uVar4 = 0x62;
            }
            uVar3 = in(uVar4);
            out(0x80,uVar3);
            fcn.000382d8(5000,0x80);
            uVar2 = in(uVar1);
            uVar5 = uVar5 + 1;
        } while ((uVar2 & 1) != 0);
        if (0x1ffff < uVar5) {
            return 0x8000000000000007;
        }
    }
    return 0;
}


/* fcn.00032248 @ 0x32248 */

ulong fcn.00032248(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    ushort uVar4;
    
    uVar3 = 0;
    uVar1 = 100;
    if (arg1 != '`') {
        uVar1 = 0x66;
    }
    uVar4 = uVar1;
    uVar2 = in(uVar4);
    if ((uVar2 & 2) != 0) {
        do {
            if (0x1ffff < uVar3) {
                return 0x8000000000000007;
            }
            fcn.000382d8(0xf,uVar1);
            uVar2 = in(uVar4);
            uVar3 = uVar3 + 1;
        } while ((uVar2 & 2) != 0);
        if (0x1ffff < uVar3) {
            return 0x8000000000000007;
        }
    }
    out(uVar4,arg2);
    return 0;
}


/* fcn.00032a80 @ 0x32a80 */

ulong fcn.00032a80(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint16_t uVar2;
    ulong uVar3;
    uint8_t uVar4;
    char *pcStackX_10;
    uchar auStackX_18 [3];
    uint8_t uStackX_1b;
    uchar auStackX_20 [7];
    uint8_t uStackX_27;
    
    uVar3 = 0;
    uVar2 = 0;
    uVar4 = 1;
    do {
        iVar1 = arg1;
        if (iVar1 == 1) {
            uVar4 = *((*0xc0000048 & 0xfffffffe) + 0x5da4) >> 0x18;
code_r0x00032b27:
            uVar4 = uVar4 >> 7;
        }
        else if (iVar1 == 2) {
            pcStackX_10 = rdmsr(0x150);
            arg2 = &pcStackX_10;
            section..text(auStackX_20,arg2,8);
            uVar4 = uStackX_27 >> 7;
        }
        else if (iVar1 == 3) {
            pcStackX_10 = rdmsr(0x607);
            arg2 = &pcStackX_10;
            section..text(auStackX_18,arg2,8);
            uVar4 = uStackX_1b;
            goto code_r0x00032b27;
        }
        fcn.000382d8(1,arg2);
        uVar2 = uVar2 + 1;
        if (uVar4 != 1) {
            return 0;
        }
        if (999 < uVar2) {
            if (uVar2 == 1000) {
                uVar3 = 0x8000000000000012;
            }
            return uVar3;
        }
    } while( true );
}


/* fcn.00032d94 @ 0x32d94 */

uchar * fcn.00032d94(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00033e00 @ 0x33e00 */

void fcn.00033e00(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00033098(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00034288 @ 0x34288 */

ulong fcn.00034288(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int16_t iVar1;
    char cVar2;
    uint8_t uVar3;
    ulong uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint in_R9;
    uint64_t uVar7;
    
    uVar7 = 0;
    if ((((arg1 == 0) || (arg3 == 0)) || (1000000 < arg2)) || ((arg2 & 1U) != 0)) {
        uVar4 = 0x8000000000000002;
    }
    else if (CONCAT44(in_R9,arg4) < arg2 >> 1) {
        uVar4 = 0x8000000000000005;
    }
    else {
        uVar5 = uVar7;
        if (arg2 != 0) {
            do {
                iVar1 = *(arg1 + uVar5 * 2);
                if (((9 < iVar1 - 0x30U) && (5 < iVar1 - 0x41U)) && (5 < iVar1 - 0x61U)) break;
                uVar5 = uVar5 + 1;
            } while (uVar5 < arg2);
        }
        if (uVar5 == arg2) {
            if (arg2 != 0) {
                do {
                    uVar5 = *(arg1 + uVar7 * 2);
                    if ((uVar7 & 1) == 0) {
                        cVar2 = fcn.00033e68(uVar5);
                        *((uVar7 >> 1) + arg3) = cVar2 << 4;
                    }
                    else {
                        uVar6 = uVar7 >> 1;
                        uVar3 = fcn.00033e68(uVar5);
                        *(uVar6 + arg3) = *(uVar6 + arg3) | uVar3;
                    }
                    uVar7 = uVar7 + 1;
                } while (uVar7 < arg2);
            }
            uVar4 = 0;
        }
        else {
            uVar4 = 0x8000000000000003;
        }
    }
    return uVar4;
}


/* fcn.00033e68 @ 0x33e68 */

int64_t fcn.00033e68(int64_t arg1)

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


/* fcn.000348b8 @ 0x348b8 */

bool fcn.000348b8(uint32_t arg1)

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


/* fcn.00034568 @ 0x34568 */

char * fcn.00034568(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.000348b8(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.00032c60 @ 0x32c60 */

int64_t fcn.00032c60(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_20;
    
    iVar1 = (**(*0x44e00 + 0x40))(4,arg1,&iStackX_20);
    if (iVar1 < 0) {
        iStackX_20 = 0;
    }
    if (((iStackX_20 != 0) && (arg1 != 0)) && (iStackX_20 != arg2)) {
        iStackX_20 = section..text(iStackX_20,arg2,arg1);
    }
    return iStackX_20;
}


/* fcn.000345b8 @ 0x345b8 */

int64_t fcn.000345b8(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar3 = 0;
    if (arg1 == 0) {
        arg1 = 0x42ae0;
        if (arg2 != 0) {
            arg1 = arg2;
        }
    }
    else if (arg2 != 0) {
        cVar1 = fcn.000348b8(arg1);
        if (cVar1 == '\0') {
            return 0;
        }
        cVar1 = fcn.000348b8(arg2);
        if (cVar1 == '\0') {
            return 0;
        }
        iVar3 = fcn.00034568(arg1);
        iVar4 = fcn.00034568(arg2);
        iVar2 = fcn.00032ba4(iVar4 + -4 + iVar3);
        if (iVar2 != 0) {
            if ((iVar3 != 0) && (iVar2 != arg1)) {
                iVar2 = section..text(iVar2,arg1,iVar3);
            }
            iVar3 = iVar3 + -4 + iVar2;
            if ((iVar4 != 0) && (iVar3 != arg2)) {
                section..text(iVar3,arg2,iVar4);
            }
        }
        return iVar2;
    }
    iVar4 = arg1;
    iVar2 = fcn.00034568(arg1);
    if (iVar2 != 0) {
        iVar3 = fcn.00032c60(iVar4,iVar2,arg1);
    }
    return iVar3;
}


/* fcn.00034914 @ 0x34914 */

ulong fcn.00034914(uint32_t *arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t arg3_00;
    int64_t iVar2;
    ulong uVar3;
    int64_t arg1_00;
    int64_t in_stack_00000028;
    int8_t in_stack_00000030;
    
    arg1_00 = 0;
    iVar2 = fcn.00033098(0,0,0x2140,arg2,in_stack_00000028,in_stack_00000030);
    iVar1 = *(arg1 + 2);
    if (*(arg1 + 4) < (iVar1 + iVar2) * 2 + 2U) {
        arg3_00 = (iVar1 + 2 + iVar2 * 2) * 2;
        *(arg1 + 4) = arg3_00;
        uVar3 = fcn.00032cc4(arg1_00,iVar1 * 2,arg3_00,*arg1);
        *arg1 = uVar3;
    }
    fcn.00033098(*(arg1 + 2) * 2 + *arg1,*(arg1 + 4) + *(arg1 + 2) * -2 >> 1,0x140,arg2,in_stack_00000028,
                 in_stack_00000030);
    *(arg1 + 2) = *(arg1 + 2) + iVar2;
    return *arg1;
}


/* fcn.0003578c @ 0x3578c */

void fcn.0003578c(int64_t arg1,int64_t arg2)

{
    fcn.00034914(arg1,0x436f0,*arg2,*(arg2 + 1));
    return;
}


/* fcn.000366b8 @ 0x366b8 */

int64_t fcn.000366b8(void)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    if (*0x44e48 == 0x3f994) {
        *0x44e48 = 0;
    }
    iVar1 = fcn.00036528(0x3f9f8,0x3ece0,0,auStackX_10);
    iVar2 = 0x3f994;
    if (-1 < iVar1) {
        iVar2 = *0x44e48;
    }
    *0x44e48 = iVar2;
    return iVar2;
}


/* fcn.0003692c @ 0x3692c */

ulong fcn.0003692c(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iStackX_8;
    
    iStackX_8 = 0;
    if ((arg1 != 0) &&
       (((*0x44e50 != 0 || (iVar1 = (**(*0x44e20 + 0x140))(0x3ecf0,0,0x44e50), -1 < iVar1)) &&
        (iVar1 = (**(*0x44e50 + 0x18))(*0x44e50,arg1,0,&iStackX_8), iVar1 == -0x7ffffffffffffffb)))) {
        uVar2 = fcn.00036468(iStackX_8);
        iVar1 = (**(*0x44e50 + 0x18))(*0x44e50,arg1,uVar2,&iStackX_8);
        if (-1 < iVar1) {
            return uVar2;
        }
        (**(*0x44e20 + 0x48))(uVar2);
    }
    return 0;
}


/* fcn.0003680c @ 0x3680c */

int64_t fcn.0003680c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    bool bVar1;
    char cVar2;
    char *pcVar3;
    int64_t arg1_00;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    int64_t arg3_00;
    char *arg2_00;
    char *pcVar7;
    int64_t *piVar8;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    
    aiStackX_18[0] = arg3;
    aiStackX_18[1] = arg4;
    pcVar6 = NULL;
    if ((arg1 != 0) && (arg2 != 0)) {
        piVar8 = &iStackX_10;
        pcVar5 = arg2;
        do {
            arg2_00 = NULL;
            pcVar3 = arg1;
            do {
                bVar1 = false;
                pcVar4 = pcVar3;
                pcVar7 = pcVar5;
                if (*pcVar5 != '\0') {
                    cVar2 = *pcVar5;
                    do {
                        if (cVar2 == ';') break;
                        if (cVar2 == '-') {
                            bVar1 = true;
                        }
                        if (cVar2 != *pcVar4) break;
                        if (*pcVar4 == '\0') goto code_r0x00036898;
                        if (*pcVar4 == ';') break;
                        pcVar7 = pcVar7 + 1;
                        pcVar4 = pcVar4 + 1;
                        cVar2 = *pcVar7;
                    } while (cVar2 != '\0');
                }
                for (; (*pcVar4 != '\0' && (*pcVar4 != ';')); pcVar4 = pcVar4 + 1) {
                }
code_r0x00036898:
                if ((((bVar1) || (*pcVar7 == '\0')) || (*pcVar7 == ';')) && (pcVar7 != pcVar5 && -1 < pcVar7 - pcVar5))
                {
                    pcVar6 = pcVar4;
                    arg2_00 = pcVar3;
                }
                pcVar3 = pcVar4 + 1;
                if (*pcVar4 != ';') {
                    pcVar3 = pcVar4;
                }
            } while (((*pcVar3 != '\0') && (*pcVar7 != '\0')) && (*pcVar7 != ';'));
            if (arg2_00 != NULL) {
                if (pcVar6 == NULL) {
                    return 0;
                }
                arg3_00 = pcVar6 - arg2_00;
                iStackX_10 = arg2;
                arg1_00 = fcn.00036468(arg3_00 + 1);
                if (arg1_00 == 0) {
                    return 0;
                }
                fcn.0003d510(arg1_00,arg2_00,arg3_00);
                *(arg3_00 + arg1_00) = 0;
                return arg1_00;
            }
            piVar8 = piVar8 + 1;
            pcVar5 = *piVar8;
        } while (pcVar5 != NULL);
    }
    return 0;
}


/* fcn.000369ec @ 0x369ec */

int64_t fcn.000369ec(uint32_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    char *pcVar4;
    char *pcVar5;
    
    iVar2 = *0x44e50;
    pcVar4 = CONCAT44(in_register_0000000c,arg1);
    cVar1 = *pcVar4;
    iVar3 = -0x7ffffffffffffffe;
    while( true ) {
        if (cVar1 == '\0') {
            return iVar3;
        }
        cVar1 = *pcVar4;
        pcVar5 = pcVar4;
        while ((cVar1 != ';' && (*pcVar5 != '\0'))) {
            pcVar5 = pcVar5 + 1;
            cVar1 = *pcVar5;
        }
        cVar1 = *pcVar5;
        *pcVar5 = '\0';
        iVar3 = (**(iVar2 + 8))(iVar2,pcVar4,arg2,arg3 & 0xffff);
        if (iVar3 != -0x7fffffffffffffe0) break;
        if (cVar1 == '\0') {
            return -0x7fffffffffffffe0;
        }
        pcVar4 = pcVar5 + 1;
        cVar1 = *pcVar4;
        iVar3 = -0x7fffffffffffffe0;
    }
    return iVar3;
}


/* fcn.0003672c @ 0x3672c */

void fcn.0003672c(int64_t arg1)

{
    int64_t iVar1;
    int16_t *piVar2;
    int64_t iVar3;
    ulong in_RDX;
    int64_t iVar4;
    int16_t iVar5;
    int64_t aiStackX_18 [2];
    
    iVar4 = 0;
    iVar1 = (**(*0x44e20 + 0x40))(4,in_RDX,aiStackX_18);
    if (-1 < iVar1) {
        iVar5 = *arg1;
        iVar1 = iVar4;
        if (iVar5 != 0) {
            piVar2 = arg1;
            do {
                if ((iVar5 == 0x26) && (iVar3 = fcn.00036640(piVar2 + 2,*0x440f8,0xc), iVar3 == 0)) {
                    do {
                        iVar4 = iVar4 + 1;
                        iVar5 = *(arg1 + iVar4 * 2);
                        if (iVar5 == 0x26) break;
                    } while (iVar5 != 0);
                    iVar5 = *(arg1 + iVar4 * 2);
                    if (iVar5 == 0) break;
                }
                iVar4 = iVar4 + 1;
                *(aiStackX_18[0] + iVar1 * 2) = iVar5;
                piVar2 = arg1 + iVar4 * 2;
                iVar5 = *piVar2;
                iVar1 = iVar1 + 1;
            } while (iVar5 != 0);
        }
        *(aiStackX_18[0] + iVar1 * 2) = 0;
        fcn.0003d510(arg1,aiStackX_18[0],iVar1 * 2 + 2);
        (**(*0x44e20 + 0x48))(aiStackX_18[0]);
    }
    return;
}


/* fcn.00037134 @ 0x37134 */

int fcn.00037134(uint32_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    bool bVar2;
    bool bVar3;
    char cVar4;
    uint in_register_0000000c;
    uint8_t *puVar5;
    uint8_t *puVar6;
    uint32_t uVar7;
    char cVar8;
    
    bVar3 = false;
    bVar2 = false;
    cVar8 = '\x01';
    for (puVar5 = CONCAT44(in_register_0000000c,arg1); (*puVar5 == 0x20 || (*puVar5 == 9)); puVar5 = puVar5 + 2) {
    }
    if (*puVar5 == 0) {
        *arg2 = puVar5;
        return 0;
    }
    if (*puVar5 == 0x2d) {
        cVar8 = -1;
        puVar5 = puVar5 + 2;
    }
    puVar6 = puVar5 + 2;
    uVar7 = 0;
    if (*puVar5 != 0x2b) {
        puVar6 = puVar5;
        uVar7 = 0;
    }
    do {
        uVar1 = *puVar6;
        if (uVar1 - 0x30 < 10) {
            cVar4 = uVar1 - 0x30;
        }
        else {
            if (0x19 < (uVar1 & 0xdf) + 0xbf) {
code_r0x000371dd:
                *arg2 = puVar6;
                if ((bVar2) && (uVar7 = 0x7fffffff, cVar8 == -1)) {
                    uVar7 = 0x80000000;
                }
                return cVar8 * uVar7;
            }
            cVar4 = (uVar1 & 0xdf) - 0x37;
        }
        if (9 < cVar4) goto code_r0x000371dd;
        uVar7 = cVar4 + uVar7 * 10;
        if (cVar8 == '\x01') {
            if (0x7fffffff < uVar7) {
                bVar3 = true;
                bVar2 = bVar3;
            }
        }
        else {
            bVar2 = bVar3;
            if (0x80000000 < uVar7) {
                bVar3 = true;
                bVar2 = true;
            }
        }
        puVar6 = puVar6 + 2;
    } while( true );
}


/* fcn.0003723c @ 0x3723c */

char * fcn.0003723c(uint32_t arg1)

{
    int64_t iVar1;
    uint32_t in_register_0000000c;
    char *pcVar2;
    uint64_t uVar3;
    
    uVar3 = CONCAT44(in_register_0000000c,arg1);
    if (uVar3 == 0) {
        return "EFI_SUCCESS";
    }
    if (in_register_0000000c < 0) {
        uVar3 = uVar3 & 0x1fffffffffffffff;
        if ((in_register_0000000c & 0xa0000000) == 0xa0000000) {
            if (2 < uVar3) {
                return NULL;
            }
            iVar1 = uVar3 * 0x19;
            pcVar2 = "EFI_INTERRUPT_PENDING";
            goto code_r0x000372ff;
        }
        if ((in_register_0000000c & 0xc0000000) == 0xc0000000) {
            if (2 < uVar3) {
                return NULL;
            }
            iVar1 = uVar3 * 0x19 + 0x2eec7;
        }
        else {
            if (0x23 < uVar3) {
                return NULL;
            }
            iVar1 = uVar3 * 0x19 + 0x2ef07;
        }
    }
    else {
        if ((in_register_0000000c & 0x20000000) != 0) {
            if (1 < uVar3) {
                return NULL;
            }
            iVar1 = uVar3 * 0x23;
            pcVar2 = "EFI_WARN_INTERRUPT_SOURCE_PENDING";
            goto code_r0x000372ff;
        }
        if (5 < uVar3) {
            return NULL;
        }
        iVar1 = uVar3 * 0x1a + 0x2ed86;
    }
    pcVar2 = 0x10000;
code_r0x000372ff:
    return pcVar2 + iVar1;
}


/* fcn.000370c0 @ 0x370c0 */

char * fcn.000370c0(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uchar auVar1 [16];
    uchar auVar2 [16];
    uint64_t uVar3;
    char cVar4;
    
    uVar3 = arg1 & 0xffffffff;
    if (arg4 != '\0') {
        uVar3 = arg1;
    }
    if (arg3 == 10) {
        uVar3 = -arg1;
    }
    if (-1 < arg1) {
        uVar3 = arg1;
    }
    if (uVar3 == 0) {
        *arg2 = 0x30;
        arg2 = arg2 + 1;
    }
    else {
        do {
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg3;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar3;
            uVar3 = uVar3 / arg3;
            cVar4 = SUB161(auVar2 % auVar1,0);
            if (SUB168(auVar2 % auVar1,0) < 10) {
                cVar4 = cVar4 + '0';
            }
            else {
                cVar4 = cVar4 + 'W';
            }
            *arg2 = cVar4;
            arg2 = arg2 + 1;
        } while (uVar3 != 0);
    }
    if ((arg3 == 10) && (arg1 < 0)) {
        *arg2 = '-';
        arg2 = arg2 + 1;
    }
    *arg2 = '\0';
    return arg2 + -1;
}


/* fcn.00037d74 @ 0x37d74 */

int64_t fcn.00037d74(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00010400 @ 0x10400 */

int64_t fcn.00010400(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    ushort *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00033fa0 @ 0x33fa0 */

ulong fcn.00033fa0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
    uVar2 = fcn.00033ecc(arg3,arg2_00);
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
        if (arg3 < arg1) goto code_r0x00034048;
    }
    if (arg3 < arg1 + arg2 * 2) {
        return 0x800000000000000f;
    }
code_r0x00034048:
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


/* fcn.00010420 @ 0x10420 */

void fcn.00010420(void)

{
    return;
}


/* fcn.000104c3 @ 0x104c3 */

ulong fcn.000104c3(int64_t arg1)

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


/* fcn.00039884 @ 0x39884 */

ulong fcn.00039884(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t aiStackX_8 [4];
    
    aiStackX_8[0] = arg1;
    iVar1 = (**(*0x44e00 + 0x98))(*0x44e08,0x3d5c0,aiStackX_8);
    if (iVar1 < 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(aiStackX_8[0] + 0x18);
    }
    return uVar2;
}


/* fcn.000398c4 @ 0x398c4 */

int64_t fcn.000398c4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iStackX_8;
    int64_t iStackX_20;
    ulong *in_stack_00000028;
    ulong *in_stack_00000030;
    
    if (arg1 != 0) {
        iStackX_20 = arg4;
        iVar1 = (**(*0x44e00 + 0x98))(arg1,0x3d890,&iStackX_8);
        if (-1 < iVar1) {
            *in_stack_00000028 = 0;
            *in_stack_00000030 = 0;
            iVar1 = (**(iStackX_8 + 0x18))
                              (iStackX_8,arg2,arg3 & 0xff,0,in_stack_00000028,in_stack_00000030,&iStackX_20);
            if (-1 < iVar1) {
                return iVar1;
            }
            if (arg3 != '\x12') {
                return iVar1;
            }
            *in_stack_00000028 = 0;
            *in_stack_00000030 = 0;
            iVar1 = (**(iStackX_8 + 0x18))(iStackX_8,arg2,0x10,0,in_stack_00000028,in_stack_00000030,&iStackX_20);
            return iVar1;
        }
    }
    return -0x7ffffffffffffff2;
}


/* fcn.0003ad4c @ 0x3ad4c */

int64_t fcn.0003ad4c(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uchar auStackX_10 [8];
    int64_t aiStackX_18 [2];
    
    aiStackX_18[0] = 0;
    iVar1 = (**(*0x44e70 + 0x18))(*0x44e70,arg1,auStackX_10,aiStackX_18);
    if ((iVar1 == -0x7ffffffffffffffb) && (iVar1 = fcn.00032c10(0x8000000000000005,aiStackX_18[0]), iVar1 != 0)) {
        iVar2 = (**(*0x44e70 + 0x18))(*0x44e70,arg1,iVar1,aiStackX_18);
        if (-1 < iVar2) {
            return iVar1;
        }
        (**(*0x44e00 + 0x48))(iVar1);
    }
    return 0;
}


/* fcn.00037c40 @ 0x37c40 */

char ** fcn.00037c40(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    char cVar2;
    int64_t iVar3;
    char **ppcVar4;
    uint64_t uVar5;
    char **ppcVar6;
    int64_t *piVar7;
    uint64_t arg3_00;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iStackX_20 = arg4;
    if (arg3 != 0) {
        piVar7 = &iStackX_18;
        iStackX_18 = arg3;
        do {
            cVar2 = *arg3;
            uVar5 = 0;
            arg3_00 = 3;
            if (cVar2 == '\0') {
code_r0x00037c90:
                uVar5 = 0;
                cVar1 = cVar2;
                while (cVar1 != '\0') {
                    uVar5 = uVar5 + 1;
                    cVar1 = *(arg3 + uVar5);
                }
            }
            else {
                do {
                    uVar5 = uVar5 + 1;
                } while (*(arg3 + uVar5) != '\0');
                if (uVar5 < 4) goto code_r0x00037c90;
                uVar5 = 3;
            }
            if (arg2 == 0) {
                uVar5 = 0;
                if (cVar2 != '\0') {
                    do {
                        if (cVar2 == ';') break;
                        uVar5 = uVar5 + 1;
                        cVar2 = *(arg3 + uVar5);
                    } while (cVar2 != '\0');
                    goto code_r0x00037d2b;
                }
            }
            else {
code_r0x00037d2b:
                if (uVar5 != 0) {
                    cVar2 = *arg1;
                    ppcVar6 = arg1;
                    while (cVar2 != '\0') {
                        if (arg2 == 0) {
                            for (; (*ppcVar6 != '\0' && (*ppcVar6 == ';')); ppcVar6 = ppcVar6 + 1) {
                            }
                            arg3_00 = 0;
                            cVar2 = *ppcVar6;
                            while ((cVar2 != '\0' && (cVar2 != ';'))) {
                                arg3_00 = arg3_00 + 1;
                                cVar2 = *(ppcVar6 + arg3_00);
                            }
                            if (uVar5 <= arg3_00) goto code_r0x00037cf8;
                        }
                        else {
code_r0x00037cf8:
                            ppcVar4 = ppcVar6;
                            iVar3 = fcn.00033e98(ppcVar6,arg3,uVar5);
                            if (iVar3 == 0) {
                                ppcVar4 = fcn.00032c10(ppcVar4,arg3_00 + 1);
                                if (ppcVar4 == NULL) {
                                    return NULL;
                                }
                                if (arg3_00 != 0) {
                                    if (ppcVar4 != ppcVar6) {
                                        ppcVar6 = section..text(ppcVar4,ppcVar6,arg3_00);
                                        return ppcVar6;
                                    }
                                    return ppcVar4;
                                }
                                return ppcVar4;
                            }
                        }
                        ppcVar6 = ppcVar6 + arg3_00;
                        cVar2 = *ppcVar6;
                    }
                    if ((arg2 != 0) || (uVar5 = uVar5 - 1, uVar5 == 0)) goto code_r0x00037d30;
                    do {
                        if (*(arg3 + uVar5) == '-') break;
                        uVar5 = uVar5 - 1;
                    } while (uVar5 != 0);
                    goto code_r0x00037d2b;
                }
            }
code_r0x00037d30:
            piVar7 = piVar7 + 1;
            arg3 = *piVar7;
        } while (arg3 != NULL);
    }
    return NULL;
}


/* fcn.000363dc @ 0x363dc */

ulong fcn.000363dc(ulong param_1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x44e00 + 0x98))(param_1,0x3d860,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.00039e30 @ 0x39e30 */

int64_t fcn.00039e30(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    uchar auStackX_20 [8];
    int64_t aiStack_28 [2];
    
    if ((*0x44ea8 == 0) && ((iVar1 = (**(*0x44e00 + 0x140))(0x3db00,0,0x44ea8), iVar1 < 0 || (*0x44ea8 == 0)))) {
        return 0;
    }
    aiStack_28[0] = 0;
    if (arg3 == 0) {
        iVar1 = *0x44ea8;
        iVar2 = (**(*0x44ea8 + 8))(*0x44ea8,aiStack_28,auStackX_20,1,arg1,arg2);
        if (-1 < iVar2) {
            iVar1 = fcn.00032c10(iVar1,2);
            return iVar1;
        }
        if (iVar2 != -0x7ffffffffffffffb) {
            return 0;
        }
        iVar1 = fcn.00032c10(0x8000000000000005,aiStack_28[0]);
        if (iVar1 == 0) {
            return 0;
        }
    }
    else {
        iVar1 = arg3;
    }
    iVar2 = (**(*0x44ea8 + 8))(*0x44ea8,aiStack_28,iVar1,arg3 == 0,arg1,arg2);
    if (iVar2 < 0) {
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.0003a850 @ 0x3a850 */

//WARNING: Type propagation algorithm not settling

ulong fcn.0003a850(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_68h,int64_t arg_70h)

{
    char **ppcVar1;
    bool bVar2;
    uint32_t *puVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    char **arg2_00;
    char **ppcVar8;
    int iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    bool bVar12;
    ushort auStackX_10 [4];
    char *pcStackX_18;
    int64_t *piStackX_20;
    int64_t *in_stack_00000028;
    uint32_t *in_stack_00000030;
    uint32_t var_48h;
    int64_t var_58h;
    
    puVar3 = in_stack_00000030;
    auStackX_10[0] = arg2;
    uVar11 = 4;
    piStackX_20 = arg4;
    if (in_stack_00000030 != arg3) {
        section..text(in_stack_00000030,arg3,4);
    }
    iVar10 = 4;
    ppcVar8 = puVar3 + 1;
    if (&pcStackX_18 != arg3) {
        section..text(&pcStackX_18,arg3,4);
    }
    arg2_00 = arg3 + 4;
    bVar12 = arg1 == 0;
    bVar2 = false;
    uVar4 = pcStackX_18;
    do {
        if ((uVar4 & 0xffffff) <= uVar11) {
            return 0x800000000000000e;
        }
        if (((*(arg2_00 + 1) & 0x7f) != 0) && (ppcVar8 != arg2_00)) {
            section..text(ppcVar8,arg2_00,*(arg2_00 + 1) & 0x7f);
            uVar4 = pcStackX_18;
        }
        uVar7 = *(arg2_00 + 1) & 0x7f;
        ppcVar8 = ppcVar8 + uVar7;
        iVar10 = iVar10 + uVar7;
        if ((*arg2_00 == '\x0e') && (arg1 != 0)) {
            if ((*(arg2_00 + 2) == *arg1) && (*(arg2_00 + 10) == *(arg1 + 8))) {
                bVar12 = true;
            }
            else {
                bVar12 = false;
            }
        }
        else if ((*arg2_00 == '\x01') || (*arg2_00 == ']')) {
            if ((arg2_00 + 2 == auStackX_10) ||
               (iVar5 = fcn.00010300(arg2_00 + 2,auStackX_10,2), uVar4 = pcStackX_18, iVar5 == 0)) {
                bVar2 = true;
            }
            else {
                bVar2 = false;
            }
        }
        if (((bVar12) && (bVar2)) && (ppcVar1 = *piStackX_20, ((*(ppcVar1 + 1) ^ *(arg2_00 + 1)) & 0x7f) == 0)) {
            if (((*(ppcVar1 + 1) & 0x7f) == 0) || (arg2_00 == ppcVar1)) {
                iVar5 = 0;
            }
            else {
                iVar5 = fcn.00010300(arg2_00,ppcVar1,*(ppcVar1 + 1) & 0x7f);
                uVar4 = pcStackX_18;
            }
            if (iVar5 == 0) {
                if (in_stack_00000028 == NULL) goto code_r0x0003aa25;
                ppcVar1 = *in_stack_00000028;
                break;
            }
        }
        uVar7 = *(arg2_00 + 1) & 0x7f;
        uVar11 = uVar11 + uVar7;
        arg2_00 = arg2_00 + uVar7;
    } while( true );
    while( true ) {
        if (((*(ppcVar1 + 1) & 0x7f) == 0) || (arg2_00 == ppcVar1)) {
            iVar5 = 0;
        }
        else {
            iVar5 = fcn.00010300(arg2_00,ppcVar1,*(ppcVar1 + 1) & 0x7f);
            uVar4 = pcStackX_18;
        }
        if (iVar5 == 0) break;
        do {
            uVar7 = *(arg2_00 + 1) & 0x7f;
            uVar11 = uVar11 + uVar7;
            arg2_00 = arg2_00 + uVar7;
            if ((uVar4 & 0xffffff) <= uVar11) goto code_r0x0003aa17;
        } while (((*(ppcVar1 + 1) ^ *(arg2_00 + 1)) & 0x7f) != 0);
    }
code_r0x0003aa17:
    if ((uVar4 & 0xffffff) <= uVar11) {
        return 0x800000000000000e;
    }
code_r0x0003aa25:
    uVar7 = *(*piStackX_20 + 1) & 0x7f;
    ppcVar1 = *piStackX_20 + uVar7;
    if ((piStackX_20[2] - uVar7 != 0) && (ppcVar8 != ppcVar1)) {
        section..text(ppcVar8,ppcVar1,piStackX_20[2] - uVar7);
        uVar4 = pcStackX_18;
    }
    ppcVar8 = ppcVar8 + (piStackX_20[2] - uVar7);
    iVar9 = iVar10 + (piStackX_20[2] - uVar7);
    if (in_stack_00000028 != NULL) {
        if (((*(arg2_00 + 1) & 0x7f) != 0) && (ppcVar8 != arg2_00)) {
            section..text(ppcVar8,arg2_00,*(arg2_00 + 1) & 0x7f);
            uVar4 = pcStackX_18;
        }
        uVar6 = *(arg2_00 + 1) & 0x7f;
        ppcVar8 = ppcVar8 + uVar6;
        iVar9 = iVar9 + uVar6;
    }
    iVar5 = uVar11 + (*(arg2_00 + 1) & 0x7f);
    iVar10 = (uVar4 & 0xffffff) - iVar5;
    if ((iVar10 != 0) && (ppcVar8 != iVar5 + arg3)) {
        section..text(ppcVar8,iVar5 + arg3,iVar10);
        uVar4 = pcStackX_18;
    }
    pcStackX_18._0_4_ = uVar4 ^ (iVar9 + ((uVar4 & 0xffffff) - iVar5) ^ uVar4) & 0xffffff;
    if (in_stack_00000030 != &pcStackX_18) {
        section..text(in_stack_00000030,&pcStackX_18,4);
    }
    return 0;
}


/* fcn.0003bf14 @ 0x3bf14 */

uint fcn.0003bf14(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uchar auStackX_10 [24];
    
    auStackX_10[0] = arg2;
    uVar3 = arg1 & 0xffffffff;
    iVar2 = fcn.0003bf6c(auStackX_10);
    uVar1 = fcn.0003bf9c(uVar3 & 0xffffffff,arg2);
    return *(*((uVar3 >> 0x10 & 0x1f) * 0x1e + iVar2) << 0x10 | (uVar1 & 0xffff0000 | 0xfffd0000) << 8 | uVar1 & 0xffff)
    ;
}


/* fcn.0003bf6c @ 0x3bf6c */

ulong fcn.0003bf6c(uint *param_1)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00032210();
    if (cVar1 == '\0') {
        *param_1 = 0x13;
        uVar2 = 0x3f440;
    }
    else {
        *param_1 = 0x12;
        uVar2 = 0x3f680;
    }
    return uVar2;
}


/* fcn.0003bf9c @ 0x3bf9c */

int fcn.0003bf9c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint auStackX_10 [6];
    
    auStackX_10[0] = arg2;
    uVar2 = arg1 & 0xffffffff;
    iVar1 = fcn.0003bf6c(auStackX_10);
    return *((uVar2 >> 0x10 & 0x1f) * 0x1e + 0x1a + iVar1) + (uVar2 & 0x1ff) * 0x10 + 8;
}


/* fcn.0003cf70 @ 0x3cf70 */

int64_t fcn.0003cf70(int64_t arg1,int64_t arg2)

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
    
    arg1_00 = fcn.00039550(0x440);
    fcn.00010320(arg1_00,0x440,0);
    if (arg1_00 != 0) {
        *(arg1_00 + 0x418) = arg1;
        pcVar4 = arg1 + arg2;
        iVar2 = fcn.0003d15c(arg1,arg2,&pcStack_48);
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
                iVar2 = fcn.0003cc6c(pcStack_48,pcVar4 - pcStack_48,arg1_00,apcStackX_18);
                pcVar3 = apcStackX_18[0];
                if (iVar2 == 0) {
                    arg2_00 = pcVar4 - apcStackX_18[0];
                    *(arg1_00 + 0x430) = apcStackX_18[0] - pcVar1;
                    iVar2 = fcn.0003d15c(apcStackX_18[0],arg2_00,&uStack_30);
                    if (iVar2 < 0) {
                        iVar2 = -1;
                    }
                    else {
                        iVar2 = fcn.0003c244(pcVar3,arg2_00,arg1_00 + 0x398,apcStackX_18);
                        pcVar3 = apcStackX_18[0];
                    }
                    if ((((iVar2 == 0) && (iVar2 = fcn.0003d15c(pcVar3,pcVar4 - pcVar3,&pcStack_48), -1 < iVar2)) &&
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


/* fcn.0003bfdc @ 0x3bfdc */

ulong fcn.0003bfdc(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    
    uVar1 = 0;
    do {
        if ((*(arg1 + 0x20) >> 0x1c & 1) != 0) {
            return 0;
        }
        fcn.000382d8(0x32,arg2);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 4000);
    return 0x8000000000000012;
}


/* fcn.0003d15c @ 0x3d15c */

int fcn.0003d15c(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint8_t *puVar1;
    uint8_t uVar2;
    uint in_register_00000014;
    uint8_t *puVar3;
    int iVar4;
    
    fcn.00010320(arg3,0x18,0);
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


/* fcn.0003d32c @ 0x3d32c */

ulong fcn.0003d32c(int64_t arg1,int64_t arg2,uint32_t arg3)

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
        fcn.00010320(arg1,0x58,0);
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


/* fcn.0003c244 @ 0x3c244 */

int fcn.0003c244(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
            iVar1 = fcn.0003d15c(arg1_00,uVar2 - arg1_00,auStack_28);
            if (iVar1 < 0) {
                iVar1 = -1;
            }
            else {
                iVar1 = fcn.0003d32c(arg3,&stack0x00000028,auStack_28);
            }
            return -(iVar1 != 0);
        }
    }
    return -1;
}


/* fcn.00039634 @ 0x39634 */

void fcn.00039634(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int iVar5;
    
    iVar3 = *0x44e98;
    iVar5 = 0;
    if (*0x44e98 != 0) {
        if (*(*0x44e98 + 0x10) == 0) {
            fcn.000396c8();
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
                    fcn.00010320(iVar3,*(piVar1 + iVar5 * 2 + 1) << 7,0);
                    return;
                }
                iVar5 = iVar5 + 1;
                piVar4 = piVar4 + 2;
            } while (piVar1 + iVar5 * 2 <= piVar2);
        }
    }
    return;
}


/* fcn.00039550 @ 0x39550 */

int64_t fcn.00039550(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    int64_t iVar4;
    uint8_t *puVar5;
    int64_t *piVar6;
    uint32_t uVar7;
    
    iVar1 = *0x44e98;
    if (*0x44e98 != 0) {
        if (*(*0x44e98 + 0x10) == 0) {
            fcn.000396c8();
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


/* fcn.0003d0fc @ 0x3d0fc */

void fcn.0003d0fc(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    char **arg2_00;
    char **noname_1;
    uint auStackX_18 [4];
    char *apcStack_18 [2];
    
    arg2_00 = CONCAT44(in_register_0000000c,arg1);
    noname_1 = arg2;
    if ((arg2 != '\0') && (apcStack_18 != arg2_00)) {
        section..text(apcStack_18,arg2_00,arg2 & 0xffU);
        noname_1 = arg2_00;
    }
    *(apcStack_18 + (arg2 & 0xffU)) = 0;
    fcn.00034428(apcStack_18,noname_1,auStackX_18);
    *arg3 = auStackX_18[0];
    return;
}


/* fcn.00034428 @ 0x34428 */

ulong fcn.00034428(int64_t arg1,ulong noname_1,int64_t arg2)

{
    char cVar1;
    uint64_t uVar2;
    
    if (((arg1 != 0) && (arg2 != 0)) && (uVar2 = fcn.00034368(arg1,0xf4241), uVar2 < 0xf4241)) {
        for (; (*arg1 == ' ' || (*arg1 == '\t')); arg1 = arg1 + 1) {
        }
        for (; *arg1 == '0'; arg1 = arg1 + 1) {
        }
        *arg2 = 0;
        while( true ) {
            if (9 < *arg1 - 0x30U) {
                return 0;
            }
            cVar1 = *arg1;
            if (~(cVar1 + -0x30) / 10 < *arg2) break;
            arg1 = arg1 + 1;
            *arg2 = cVar1 + -0x30 + *arg2 * 10;
        }
        *arg2 = 0xffffffffffffffff;
        return 0x8000000000000003;
    }
    return 0x8000000000000002;
}


/* fcn.00039720 @ 0x39720 */

uint fcn.00039720(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

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
                        if (uVar6 != (uVar6 / 400) * 400) goto code_r0x000397de;
                    }
                    iVar2 = 0x16e;
                }
                else {
code_r0x000397de:
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
             ((arg4 + (*((iVar5 + arg2) * 4 + 0x442c0) + -1 + arg3) * 0x18) * 0x3c + in_stack_00000028) * 0x3c +
             in_stack_00000030;
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.0003c724 @ 0x3c724 */

//WARNING: Variable defined which should be unmapped: var_8h

ulong fcn.0003c724(int64_t arg1,uint32_t arg2,uint32_t arg3,int64_t arg4)

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
        iVar2 = fcn.0003d0fc(uVar3,2,auStackX_18);
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
        iVar1 = fcn.0003d0fc(uVar3,iVar4,auStackX_18);
        if (iVar1 == -1) {
            return 0xffffffff;
        }
        uVar5 = auStackX_18[0];
    }
    uVar3 = uVar3 + iVar2;
    iVar4 = CONCAT71(iVar4 >> 8,2);
    iVar2 = fcn.0003d0fc(uVar3,iVar4,auStack_30);
    if (iVar2 != -1) {
        iVar4 = CONCAT71(iVar4 >> 8,2);
        iVar2 = fcn.0003d0fc(uVar3 + 2,iVar4,&uStack_34);
        if (iVar2 != -1) {
            iVar4 = CONCAT71(iVar4 >> 8,2);
            iVar2 = fcn.0003d0fc(uVar3 + 4,iVar4,&uStack_38);
            if (iVar2 != -1) {
                iVar4 = CONCAT71(iVar4 >> 8,2);
                iVar2 = fcn.0003d0fc(uVar3 + 6,iVar4,auStackX_8);
                if ((iVar2 != -1) &&
                   (iVar2 = fcn.0003d0fc(uVar3 + 8,CONCAT71(iVar4 >> 8,2),auStackX_18), iVar2 != -1)) {
                    iVar2 = fcn.00039720(uVar5,auStack_30[0],uStack_34,uStack_38);
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


/* fcn.0003c968 @ 0x3c968 */

ulong fcn.0003c968(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int iVar2;
    uint64_t arg1_00;
    uint64_t uVar3;
    uint32_t uVar4;
    int64_t var_20h;
    uint32_t var_17h;
    uint32_t var_bp_10h;
    
    iVar2 = fcn.0003d15c(arg2,arg3,&var_20h);
    uVar4 = 0;
    if (((-1 < iVar2) && (var_17h == '\0')) && (stack0xffffffffffffffe4 == 0x10)) {
        *(arg1 + 0x400) = *(arg1 + 0x400) | 1;
        if (var_bp_10h == 0) {
            return 0;
        }
        uVar3 = var_bp_10h + var_20h;
        iVar2 = fcn.0003d15c(var_20h,var_bp_10h,&var_20h);
        if ((-1 < iVar2) && (var_17h == '\0')) {
            if (stack0xffffffffffffffe4 == 1) {
                *(arg1 + 0x404) = *var_20h;
                arg1_00 = var_bp_10h + var_20h;
                if (uVar3 <= arg1_00) {
                    return 0;
                }
                iVar2 = fcn.0003d15c(arg1_00,uVar3 - arg1_00,&var_20h);
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


/* fcn.0003d364 @ 0x3d364 */

uint32_t fcn.0003d364(int64_t arg1,uint32_t arg2)

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


/* fcn.0003c3c8 @ 0x3c3c8 */

ulong fcn.0003c3c8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    char **ppcVar4;
    char *pcVar5;
    char *pcVar6;
    uint64_t uVar7;
    uint uVar8;
    char **arg1_00;
    char **ppcVar9;
    char **ppcStack_b8;
    char cStack_af;
    int iStack_ac;
    uint32_t uStack_a8;
    char **ppcStack_a0;
    int iStack_98;
    int iStack_94;
    int iStack_90;
    int iStack_8c;
    int iStack_88;
    int iStack_84;
    int iStack_80;
    int64_t iStack_48;
    uchar auStack_38 [32];
    
    iVar2 = fcn.0003d15c(arg1,arg2,&ppcStack_b8);
    if ((((iVar2 < 0) || (cStack_af != '\0')) || (iStack_ac != 0x10)) ||
       (ppcVar9 = uStack_a8 + ppcStack_b8, arg1 + arg2 < ppcVar9)) {
        return 0xffffffff;
    }
    *arg4 = ppcVar9;
    cStack_af = '\0';
    iStack_ac = 0x10;
    arg1_00 = ppcStack_b8;
joined_r0x0003c43a:
    do {
        if (ppcVar9 <= arg1_00) {
            return 0;
        }
        iVar2 = fcn.0003d15c(arg1_00,ppcVar9 - arg1_00,&ppcStack_b8);
        if (iVar2 < 0) {
            return 0xffffffff;
        }
        if (cStack_af != '\0') {
            return 0xffffffff;
        }
        if (iStack_ac != 0x11) {
            return 0xffffffff;
        }
        arg1_00 = uStack_a8 + ppcStack_b8;
        iVar2 = fcn.0003d15c(ppcStack_b8,arg1_00 - ppcStack_b8,&ppcStack_b8);
        ppcVar4 = ppcStack_b8;
        if (iVar2 < 0) {
            return 0xffffffff;
        }
        if (cStack_af != '\0') {
            return 0xffffffff;
        }
        if (iStack_ac != 0x10) {
            return 0xffffffff;
        }
        iVar2 = uStack_a8 + ppcStack_b8;
        ppcStack_a0 = ppcStack_b8;
        iVar3 = fcn.0003d15c(ppcStack_b8,iVar2 - ppcStack_b8,auStack_38);
        if (iVar3 < 0) {
            iVar3 = -1;
        }
        else {
            iVar3 = fcn.0003d32c(&iStack_98,&ppcStack_a0,auStack_38);
            ppcVar4 = ppcStack_a0;
        }
        if (iVar3 != 0) {
            return 0xffffffff;
        }
        iVar2 = fcn.0003d15c(ppcVar4,iVar2 - ppcVar4,&ppcStack_b8);
        if (iVar2 < 0) {
            return 0xffffffff;
        }
        if (cStack_af != '\0') {
            return 0xffffffff;
        }
        if (iStack_48 != 4) goto code_r0x0003c594;
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
            goto code_r0x0003c680;
        }
        if (iStack_8c != 0xb) goto joined_r0x0003c43a;
        uVar8 = 7;
    }
    goto code_r0x0003c680;
code_r0x0003c594:
    if (iStack_48 != 7) goto joined_r0x0003c43a;
    if (iStack_98 == 1) {
        if ((((iStack_94 == 2) && (iStack_90 == 0x348)) &&
            ((iStack_8c == 0x1bb8d && ((iStack_88 == 1 && (iStack_84 == 9)))))) && (iStack_80 == 1)) {
            fcn.00039634(*(arg3 + 0x148));
            ppcVar4 = fcn.00039550(uStack_a8 + 1);
            *(arg3 + 0x148) = ppcVar4;
            if (ppcVar4 == NULL) {
                return 0xffffffff;
            }
            uVar7 = uStack_a8;
            if ((uStack_a8 != 0) && (ppcVar4 != ppcStack_b8)) {
                section..text(ppcVar4,ppcStack_b8,uStack_a8);
                uVar7 = uStack_a8;
            }
            *(uVar7 + *(arg3 + 0x148)) = 0;
        }
        goto joined_r0x0003c43a;
    }
    if ((((iStack_98 != 0) || (iStack_94 != 9)) || (iStack_90 != 0x926)) ||
       (((iStack_8c != 0x124f92c || (iStack_88 != 100)) || ((iStack_84 != 1 || (iStack_80 != 0x19))))))
    goto joined_r0x0003c43a;
    uVar8 = 1;
code_r0x0003c680:
    if ((*(arg3 + 0x140) == 0x14) ||
       (pcVar5 = fcn.00039550(uStack_a8 + 1), pcVar6 = pcVar5, ppcVar4 = ppcStack_b8, uVar1 = uStack_a8,
       pcVar5 == NULL)) {
        return 0xffffffff;
    }
    while (uVar1 != 0) {
        if (*ppcVar4 != '\0') {
            *pcVar6 = *ppcVar4;
            pcVar6 = pcVar6 + 1;
        }
        ppcVar4 = ppcVar4 + 1;
        uVar1 = uVar1 - 1;
    }
    pcVar5[uStack_a8] = '\0';
    *(arg3 + *(arg3 + 0x140) * 0x10) = uVar8;
    *(arg3 + 8 + *(arg3 + 0x140) * 0x10) = pcVar5;
    *(arg3 + 0x140) = *(arg3 + 0x140) + 1;
    goto joined_r0x0003c43a;
}


/* fcn.0003c878 @ 0x3c878 */

ulong fcn.0003c878(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t var_20h;
    uint32_t var_17h;
    int32_t var_10h;
    
    iVar1 = fcn.0003d15c(arg1,arg2,&var_20h);
    if ((((-1 < iVar1) && (var_17h == '\0')) && (stack0xffffffffffffffe4 == 0x10)) &&
       (var_10h <= (arg1 - var_20h) + arg2)) {
        *arg4 = var_10h + var_20h;
        iVar1 = fcn.0003d15c(var_20h,var_10h,&var_20h);
        if ((((-1 < iVar1) && (var_17h == '\0')) &&
            ((iVar1 = fcn.0003c724(var_20h,var_10h,stack0xffffffffffffffe4,arg3 + 0x328), -1 < iVar1 &&
             ((iVar1 = fcn.0003d15c(var_10h + var_20h,*arg4 - (var_10h + var_20h),&var_20h), -1 < iVar1 &&
              (var_17h == '\0')))))) &&
           (iVar1 = fcn.0003c724(var_20h,var_10h,stack0xffffffffffffffe4,arg3 + 0x32c), -1 < iVar1)) {
            return 0;
        }
    }
    return 0xffffffff;
}


/* fcn.0003c2b0 @ 0x3c2b0 */

ulong fcn.0003c2b0(int64_t arg1,int64_t noname_1,int64_t arg2,int64_t arg3)

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
    
    iVar1 = fcn.0003d15c(arg1,(arg1 + noname_1) - arg1,&iStack_48);
    arg1_00 = iStack_48;
    if (((-1 < iVar1) && (cStack_3f == '\0')) && (iStack_3c == 0x10)) {
        uVar2 = var_30h + iStack_48;
        iStackX_8 = iStack_48;
        if (uVar2 <= arg1 + noname_1) {
            *arg3 = uVar2;
            arg2_00 = uVar2 - iStack_48;
            iVar1 = fcn.0003d15c(iStack_48,arg2_00,&uStack_30);
            if (iVar1 < 0) {
                iVar1 = -1;
            }
            else {
                iVar1 = fcn.0003c244(arg1_00,arg2_00,arg2 + 0x330,&iStackX_8);
                arg1_00 = iStackX_8;
            }
            if (((iVar1 == 0) && (iVar1 = fcn.0003d15c(arg1_00,uVar2 - arg1_00,&iStack_48), -1 < iVar1)) &&
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


/* fcn.0003ca70 @ 0x3ca70 */

//WARNING: Variable defined which should be unmapped: var_11h

ulong fcn.0003ca70(int64_t arg1,int64_t arg2,uint32_t arg3)

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
    
    iVar1 = fcn.0003d15c(arg2,arg3,&uStack_a8);
    if (((-1 < iVar1) && (cStack_9f == '\0')) && (iStack_9c == 0x10)) {
        arg1_01 = uStack_a8;
code_r0x0003caca:
        do {
            if (uStack_98 + uStack_a8 <= arg1_01) {
                return 0;
            }
            iVar1 = fcn.0003d15c(arg1_01,(uStack_98 + uStack_a8) - arg1_01,&iStack_d8);
            arg1_00 = iStack_d8;
            if (((iVar1 < 0) || (cStack_cf != '\0')) || (iStack_cc != 0x10)) {
                iVar1 = -1;
            }
            else {
                arg1_01 = uStack_c8 + iStack_d8;
                iStackX_20 = iStack_d8;
                iVar1 = arg1_01;
                iVar2 = fcn.0003d15c(iStack_d8,iVar1 - iStack_d8,auStack_90);
                if (iVar2 < 0) {
                    iVar2 = -1;
                }
                else {
                    iVar2 = fcn.0003d32c(&var_70h,&iStackX_20,auStack_90);
                    arg1_00 = iStackX_20;
                }
                if (iVar2 < 0) {
                    return 0xffffffff;
                }
                iVar2 = fcn.0003d15c(arg1_00,iVar1 - arg1_00,&iStack_d8);
                if (iVar2 < 0) {
                    return 0xffffffff;
                }
                if (cStack_cf != '\0') {
                    return 0xffffffff;
                }
                if (iStack_cc == 1) {
                    iVar1 = fcn.0003d15c(iStack_d8,iVar1 - iStack_d8,&iStack_d8);
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
                goto code_r0x0003caca;
                if (_auStack_6c == 0xf) {
                    iVar1 = fcn.0003d15c(iStack_d8,uStack_c8,&iStack_c0);
                    if (((iVar1 < 0) || (cStack_b7 != '\0')) || ((iStack_b4 != 3 || (uStack_b0 == 0)))) {
                        iVar1 = -1;
                    }
                    else {
                        *(arg1 + 0x400) = *(arg1 + 0x400) | 4;
                        uVar3 = fcn.0003d364(iStack_c0,uStack_b0);
                        *(arg1 + 0x40c) = uVar3;
                        iVar1 = 0;
                    }
                }
                else {
                    if (_auStack_6c != 0x13) goto code_r0x0003caca;
                    iVar1 = fcn.0003c968(arg1,iStack_d8,uStack_c8);
                }
                if (-1 < iVar1) goto code_r0x0003caca;
            }
        } while (-1 < iVar1);
    }
    return 0xffffffff;
}


/* fcn.0003cc6c @ 0x3cc6c */

int fcn.0003cc6c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int iVar2;
    int iVar3;
    uint8_t *puVar4;
    uint8_t *puVar5;
    uint64_t arg3_00;
    uint8_t *puStack_58;
    char **ppcStack_50;
    int64_t var_40h;
    int64_t var_38h;
    uchar uStack_38;
    uint32_t var_2fh;
    uint32_t var_28h;
    int64_t var_20h;
    
    iVar2 = fcn.0003d15c(arg1,arg2,&ppcStack_50);
    if (((-1 < iVar2) && (var_40h._1_1_ == '\0')) && (var_40h._4_4_ == 0x10)) {
        puVar5 = var_38h + ppcStack_50;
        *arg4 = puVar5;
        iVar2 = puVar5;
        iVar3 = fcn.0003d15c(ppcStack_50,iVar2 - ppcStack_50,&ppcStack_50);
        if (-1 < iVar3) {
            if (var_40h._1_1_ == '\x02') {
                iVar3 = fcn.0003d15c(ppcStack_50,iVar2 - ppcStack_50,&ppcStack_50);
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
                uVar1 = *ppcStack_50;
                *(arg3 + 0x10) = uVar1;
                if (2 < uVar1) {
                    return -1;
                }
                iVar3 = fcn.0003d15c(ppcStack_50 + 1,iVar2 - (ppcStack_50 + 1),&ppcStack_50);
                if (iVar3 < 0) {
                    return -1;
                }
            }
            else {
                *(arg3 + 0x10) = 0;
            }
            if (((var_40h._1_1_ == '\0') && (var_40h._4_4_ == 2)) && (arg3_00 = var_38h, var_38h - 1 < 0x14)) {
                puVar4 = ppcStack_50 + arg3_00;
                for (; (var_38h != 0 && (*ppcStack_50 == '\0')); ppcStack_50 = ppcStack_50 + 1) {
                    var_38h._0_4_ = arg3_00 - 1;
                    arg3_00 = var_38h;
                }
                puStack_58 = puVar4;
                if ((arg3_00 != 0) && (arg3 + 0x14 != ppcStack_50)) {
                    section..text(arg3 + 0x14,ppcStack_50,arg3_00);
                    arg3_00 = var_38h;
                }
                *(arg3 + 0x28) = arg3_00;
                iVar3 = fcn.0003d15c(puVar4,puVar5 - puVar4,&uStack_38);
                if (iVar3 < 0) {
                    iVar3 = -1;
                }
                else {
                    iVar3 = fcn.0003c244(puVar4,puVar5 - puVar4,arg3 + 0x30,&puStack_58);
                    puVar4 = puStack_58;
                }
                if ((((iVar3 == 0) &&
                     (iVar3 = fcn.0003c3c8(puVar4,puVar5 - puVar4,arg3 + 0x88,&puStack_58), iVar3 == 0)) &&
                    (iVar3 = fcn.0003c878(puStack_58,puVar5 - puStack_58,arg3,&puStack_58), iVar3 == 0)) &&
                   ((iVar3 = fcn.0003c3c8(puStack_58,puVar5 - puStack_58,arg3 + 0x1d8,&puStack_58), iVar3 == 0 &&
                    (iVar3 = fcn.0003c2b0(puStack_58,puVar5 - puStack_58,arg3,&puStack_58), iVar3 == 0)))) {
                    if ((puStack_58 == puVar5) || (*(arg3 + 0x10) == 0)) {
                        return 0;
                    }
                    iVar3 = fcn.0003d15c(puStack_58,iVar2 - puStack_58,&ppcStack_50);
                    if ((-1 < iVar3) && (var_40h._1_1_ == '\x02')) {
                        if (var_40h._4_4_ == 1) {
                            puVar4 = var_38h + ppcStack_50;
                            if (puVar4 == puVar5) {
                                return 0;
                            }
                            iVar3 = fcn.0003d15c(puVar4,iVar2 - puVar4,&ppcStack_50);
                            if (iVar3 < 0) {
                                return -1;
                            }
                            if (var_40h._1_1_ != '\x02') {
                                return -1;
                            }
                        }
                        if (var_40h._4_4_ == 2) {
                            puVar4 = var_38h + ppcStack_50;
                            if (puVar4 == puVar5) {
                                return 0;
                            }
                            iVar2 = fcn.0003d15c(puVar4,iVar2 - puVar4,&ppcStack_50);
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
                            iVar2 = fcn.0003ca70(arg3,ppcStack_50,var_38h);
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


