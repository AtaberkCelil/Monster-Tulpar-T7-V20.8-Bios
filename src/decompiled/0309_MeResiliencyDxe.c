// decompiled by r2ghidra: 0309_MeResiliencyDxe.pe32
// functions: 64

/* entry0 @ 0x10474 */

int64_t entry0(int64_t noname_0,uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_00000014;
    int64_t arg2;
    ulong uStackX_10;
    uchar auStackX_18 [16];
    
    arg2 = CONCAT44(in_register_00000014,arg1);
    if (0x1ffff < *(arg2 + 8)) {
        fcn.0001051c(noname_0,arg2);
        iVar1 = (**(*0x15960 + 0x50))(0x200,8,0x10790,0,&uStackX_10);
        if (((iVar1 < 0) || (iVar1 = (**(*0x15960 + 0xa8))(0x152f0,uStackX_10,auStackX_18), iVar1 < 0)) &&
           (*0x15978 != 0)) {
            (**(*(arg2 + 0x60) + 0x48))();
            *0x15978 = 0;
        }
        return iVar1;
    }
    return -0x7fffffffffffffe7;
}


/* fcn.0001051c @ 0x1051c */

void fcn.0001051c(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0;
    ulong *puStackX_8;
    ulong uStackX_10;
    
    *0x15960 = *(arg2 + 0x60);
    *0x15968 = *(arg2 + 0x58);
    *0x15958 = arg2;
    puStackX_8 = arg1;
    fcn.00010b1c();
    noname_0 = 0x15390;
    iVar3 = fcn.00010b88(0x15390);
    if (iVar3 == 0) {
        uVar4 = fcn.000103c0();
        fcn.00010370();
        uVar1 = in(0x1808);
        fcn.000102f0(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x000102e0();
        }
        fcn.000102f0(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010370();
        }
        else {
            fcn.00010360();
        }
    }
    if (*0x15978 == 0) {
        *0x159b0 = 0x2000;
        iVar3 = (**(*(arg2 + 0x60) + 0x40))(4);
        if (iVar3 < 0) {
            *0x15978 = 0;
        }
    }
    fcn.00010300(1,0,0,&puStackX_8);
    iVar3 = (**(*0x15960 + 0x140))(0x15380,0,&puStackX_8);
    *0x15980 = '\0';
    if (-1 < iVar3) {
        uStackX_10 = 0;
        (**puStackX_8)(puStackX_8,0x15980);
        if (*0x15980 != '\0') {
            (*puStackX_8[1])(puStackX_8,&uStackX_10);
        }
    }
    fcn.000102a0(0x15988,8);
    puStackX_8 = 0x8;
    (**(*0x15968 + 0x48))(L"SysFwUpdateProgress",0x15310,0,&puStackX_8,0x15988);
    return;
}


/* fcn.00010b1c @ 0x10b1c */

int64_t fcn.00010b1c(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x15970 == 0) {
        *0x15970 = 0;
        if (*(*0x15958 + 0x68) != 0) {
            piVar2 = *(*0x15958 + 0x70);
            do {
                if ((*0x15350 == *piVar2) && (*0x15358 == piVar2[1])) {
                    *0x15970 = (*(*0x15958 + 0x70))[uVar1 * 3 + 2];
                    return *0x15970;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x15958 + 0x68));
        }
    }
    return *0x15970;
}


/* fcn.00010b88 @ 0x10b88 */

void fcn.00010b88(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00010b1c();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00010bb6:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00010bb6;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.000103c0 @ 0x103c0 */

uint64_t fcn.000103c0(void)

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


/* fcn.00010370 @ 0x10370 */

void fcn.00010370(void)

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


/* fcn.000102e2 @ 0x102e2 */

void fcn.000102e2(void)

{
    return;
}


/* fcn.00010360 @ 0x10360 */

void fcn.00010360(void)

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


/* fcn.00011378 @ 0x11378 */

int64_t fcn.00011378(int64_t param_1)

{
    int64_t iVar1;
    char16_t *arg2;
    int64_t iStackX_8;
    int64_t aiStackX_10 [3];
    
    iStackX_8 = 0;
    aiStackX_10[0] = 0;
    if ((*0x159a0 == 0) && (*0x159a0 = fcn.00011264(), *0x159a0 == 0)) {
        return -0x7ffffffffffffff2;
    }
    iVar1 = fcn.00010d88(param_1,0x15450,&iStackX_8,aiStackX_10);
    if (-1 < iVar1) {
        arg2 = L"MeRecov.Cap";
        iVar1 = fcn.00010bd4(param_1,0x15438);
        if (((-1 < iVar1) || (iVar1 == -0x7ffffffffffffff2)) &&
           (iVar1 = fcn.00010c88(param_1,arg2,iStackX_8,aiStackX_10[0]), -1 < iVar1)) {
            fcn.00010bd4(param_1,0x15450);
        }
        (**(*0x15960 + 0x48))(iStackX_8);
    }
    return iVar1;
}


/* fcn.00011264 @ 0x11264 */

ulong fcn.00011264(ulong param_1,ulong param_2,int64_t param_3)

{
    uint16_t uVar1;
    uint16_t *puVar2;
    uint16_t *puVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    char *arg3;
    uint16_t *puStackX_8;
    ulong uStackX_10;
    uchar auStack_28 [32];
    
    iVar4 = fcn.00010a5c(0x154b8,&puStackX_8,param_3);
    iVar6 = 0;
    if ((-1 < iVar4) || (iVar4 = fcn.00010a5c(0x154d0,&puStackX_8,param_3), -1 < iVar4)) {
        puVar3 = puStackX_8;
        arg3 = "Boot%4X";
        fcn.00011430(auStack_28,0x12,0x154e8,*puStackX_8);
        (**(*0x15960 + 0x48))(puVar3);
        iVar4 = fcn.00010a5c(auStack_28,&puStackX_8,arg3);
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
                uVar5 = fcn.0001114c(puVar2);
            }
            else {
                puStackX_8 = puVar2;
                iVar6 = (**(*0x15960 + 0xb8))(0x15330,&puStackX_8,&uStackX_10);
                uVar5 = uStackX_10;
                if (iVar6 < 0) {
                    uVar5 = 0;
                }
            }
            (**(*0x15960 + 0x48))(puVar3);
            return uVar5;
        }
    }
    return 0;
}


/* fcn.00010d88 @ 0x10d88 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00010d88(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t arg1_00;
    int64_t iStackX_8;
    ulong uStack_48;
    int64_t iStack_40;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int32_t var_bp_18h;
    int32_t var_14h;
    int32_t var_bp_10h;
    int32_t var_ch;
    
    var_28h._0_4_ = 0x9576e92;
    var_28h._4_4_ = 0x11d26d3f;
    var_20h._0_4_ = 0xa000398e;
    var_20h._4_4_ = 0x3b7269c9;
    iStackX_8 = arg1;
    iVar1 = (**(*0x15960 + 0x98))(*0x159a0,0x15330,&var_30h);
    if (iVar1 < 0) {
        return iVar1;
    }
    iStack_40 = 0;
    iVar1 = (**(var_30h + 8))(var_30h,&iStack_40);
    if (iVar1 < 0) {
        return iVar1;
    }
    if (iStack_40 == 0) {
        return -0x7ffffffffffffff7;
    }
    iVar1 = (**(iStack_40 + 8))(iStack_40,&iStackX_8,arg2,1,0);
    if (iVar1 < 0) {
        return iVar1;
    }
    if (iStackX_8 == 0) {
        return -0x7ffffffffffffffd;
    }
    uStack_48 = 0;
    iVar1 = (**(iStackX_8 + 0x40))(iStackX_8,&var_28h,&uStack_48,0);
    if ((iVar1 < 0) && (iVar1 != -0x7ffffffffffffffb)) {
        return iVar1;
    }
    if ((arg3 == 0) || (arg4 == 0)) {
        return 0;
    }
    iVar1 = fcn.00012220();
    if (iVar1 == 0) {
        return -0x7ffffffffffffff7;
    }
    iVar2 = (**(iStackX_8 + 0x40))(iStackX_8,&var_28h,&uStack_48,iVar1);
    if (iVar2 < 0) goto code_r0x00010f13;
    arg1_00 = *(iVar1 + 8);
    *arg4 = arg1_00;
    if (arg1_00 == 0) {
        *arg3 = 0;
    }
    else {
        iVar2 = fcn.00012250(arg1_00);
        *arg3 = iVar2;
        if (iVar2 == 0) {
            iVar2 = -0x7ffffffffffffff7;
            goto code_r0x00010f13;
        }
        iVar2 = (**(iStackX_8 + 0x20))(iStackX_8,arg4,iVar2);
        if (iVar2 < 0) goto code_r0x00010f13;
    }
    iVar2 = 0;
code_r0x00010f13:
    (**(*0x15960 + 0x48))(iVar1);
    if (iStackX_8 != 0) {
        (**(iStackX_8 + 0x10))(iStackX_8);
    }
    if (iStack_40 != 0) {
        (**(iStack_40 + 0x10))(iStack_40);
    }
    return iVar2;
}


/* fcn.000106b4 @ 0x106b4 */

ulong fcn.000106b4(uint32_t arg1)

{
    ulong uVar1;
    uint in_register_0000000c;
    uint64_t uVar2;
    uchar auStackX_8 [8];
    
    uVar2 = CONCAT44(in_register_0000000c,arg1);
    if (uVar2 < 0x65) {
        if (uVar2 == 0) {
            *0x15950 = '\x01';
        }
        else {
            *0x15950 = (uVar2 == 100) + '\x02';
        }
        (**(*0x15960 + 0x100))(0,0,0,0);
        if (uVar2 != 100) {
            (**(*0x15960 + 0x100))(300,0,0,0);
        }
        uVar1 = (**(*0x15948 + 0x78))
                          (*0x15950,L"ME Resiliency update",L"Update Me Firmware",0,uVar2,0x159a8,auStackX_8);
        if (uVar2 == 100) {
            *0x15948 = 0;
        }
    }
    else {
        *0x15948 = 0;
        uVar1 = 0x8000000000000002;
    }
    return uVar1;
}


/* fcn.00010f98 @ 0x10f98 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Type propagation algorithm not settling

ulong fcn.00010f98(int64_t arg1,int64_t arg2,uint32_t arg3,uint32_t arg4)

{
    uchar auVar1 [16];
    int iVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint in_R8;
    int64_t *arg3_00;
    uint in_R9;
    uint32_t uVar7;
    uint32_t uVar8;
    uint64_t uStackX_18;
    uint64_t uStackX_20;
    uint32_t uStack_48;
    int aiStack_44 [3];
    int64_t iStack_38;
    int64_t iStack_30;
    int32_t var_bp_20h;
    uint32_t var_1ch;
    int32_t var_bp_18h;
    uint32_t var_10h;
    uint32_t var_bp_8h;
    
    uVar6 = 0;
    uStackX_18 = CONCAT44(in_R8,arg3) & 0xffffffffffff0000;
    uStackX_20 = CONCAT44(in_R9,arg4) & 0xffffffffffffff00;
    uStack_48 = 0;
    aiStack_44[0] = 0;
    aiStack_44[1] = 0;
    iVar2 = fcn.000124d4(&uStackX_18);
    if ((iVar2 != 0) || (uStackX_18 == 0)) {
        return 0x8000000000000007;
    }
    if (arg2 != 0) {
        *0x15998 = 5;
        *0x153a0 = 0x17;
        *0x15990 = arg2;
    }
    fcn.000129f8(&iStack_38);
    if ((iStack_38 == *0x15938) && (iStack_30 == *0x15940)) {
        arg3_00 = NULL;
    }
    else {
        arg3_00 = &iStack_38;
    }
    iVar2 = fcn.00012524(*(arg1 + 0x10),*(arg1 + 0x18),arg3_00,0x10f5c);
    if (iVar2 != 0) {
        return 0x8000000000000007;
    }
    iVar3 = fcn.000122ac(&uStackX_20,&uStack_48,aiStack_44,aiStack_44 + 1);
    iVar2 = 0;
    uVar7 = uVar6;
    uVar8 = uVar6;
    if (iVar3 == 0) {
        do {
            if (uStackX_20 == '\0') {
                if (arg2 != 0) {
                    (*arg2)(0x5f);
                }
                break;
            }
            (**(*0x15960 + 0xf8))(250000);
            if (uVar7 < 30000) {
                uVar7 = uVar7 + 0xfa;
            }
            else {
                if (uStack_48 == uVar8) break;
                uVar7 = uVar6;
                uVar8 = uStack_48;
            }
            if (arg2 != 0) {
                uVar4 = (0x5f - *0x153a0) * uStack_48;
                auVar1._8_8_ = 0;
                auVar1._0_8_ = uVar4;
                iVar5 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar1,8);
                (*arg2)(((uVar4 - iVar5 >> 1) + iVar5 >> 6) + *0x153a0);
            }
            iVar2 = fcn.000122ac(&uStackX_20,&uStack_48,aiStack_44,aiStack_44 + 1);
        } while (iVar2 == 0);
        if ((iVar2 == 0) && (aiStack_44[0] == 0)) {
            return 0;
        }
    }
    return 0x8000000000000007;
}


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 17216 named .text
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


/* fcn.000109a8 @ 0x109a8 */

ulong fcn.000109a8(int64_t arg1)

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
    uVar2 = fcn.0001097c(0x15420,10);
    if (uVar5 <= uVar2) {
        return 0x8000000000000005;
    }
    if (pcVar3 <= arg1) {
        if (arg1 < pcVar3 + uVar2 + 1) {
            return 0x800000000000000f;
        }
        if (pcVar3 < arg1) goto code_r0x00010a10;
    }
    if (pcVar3 < arg1 + 0x14) {
        return 0x800000000000000f;
    }
code_r0x00010a10:
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


/* fcn.0001097c @ 0x1097c */

uint64_t fcn.0001097c(uint32_t arg1,int64_t arg2)

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


/* fcn.00012220 @ 0x12220 */

ulong fcn.00012220(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x15960 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00012250 @ 0x12250 */

void fcn.00012250(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00012220(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102a0(arg1_00,arg1);
    }
    return;
}


/* fcn.000124d4 @ 0x124d4 */

int fcn.000124d4(int64_t arg1)

{
    int iVar1;
    uint auStackX_8 [8];
    
    auStackX_8[0] = 0;
    if (arg1 == 0) {
        iVar1 = 3;
    }
    else {
        iVar1 = fcn.0001439c(7,auStackX_8);
        if (iVar1 == 0) {
            *arg1 = auStackX_8[0];
            return 0;
        }
    }
    if (iVar1 != *0x15920) {
        *0x15920 = iVar1;
    }
    return iVar1;
}


/* fcn.0001439c @ 0x1439c */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_bp_8h

ulong fcn.0001439c(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int32_t unaff_EBP;
    int64_t var_18h;
    uint32_t var_bp_20h;
    int64_t var_10h;
    uint32_t var_bp_8h;
    
    _var_bp_20h = 0xd;
    if (arg2 == 0) {
        uVar1 = 3;
    }
    else {
        fcn.00014300(&var_18h,0,8);
        var_18h._4_4_ = arg1;
        var_18h._0_4_ = var_18h & 0xffff8203 | 0x203;
        uVar1 = fcn.00013f50(0x16,&var_18h,8,&var_10h,CONCAT44(var_10h._4_4_,var_10h),
                             CONCAT71(stack0xfffffffffffffff1,var_bp_8h),unaff_EBP);
        if (uVar1 == 0) {
            uVar1 = fcn.0001417c(var_10h._3_1_,0x16);
            if (uVar1 == 0) {
                if ((_var_bp_20h < 0xd) || (var_bp_8h != '\x04')) {
                    uVar1 = 0xf0;
                }
                else {
                    uVar1 = fcn.000142a4(arg2,4,&var_bp_8h + 1,4);
                }
            }
        }
    }
    return uVar1;
}


/* fcn.000129f8 @ 0x129f8 */

int fcn.000129f8(int64_t arg1)

{
    int iVar1;
    uint32_t auStackX_8 [2];
    ulong uStackX_10;
    uint32_t in_stack_ffffffffffffffd8;
    uint32_t in_stack_ffffffffffffffdc;
    int64_t in_stack_ffffffffffffffe0;
    int32_t in_stack_ffffffffffffffe8;
    
    uStackX_10 = 0x18;
    if (arg1 == 0) {
        iVar1 = 3;
    }
    else {
        fcn.00014300(auStackX_8,0,4);
        fcn.00014300(&stack0xffffffffffffffd8,0,0x18);
        auStackX_8[0] = 0x12;
        iVar1 = fcn.00013f50(0x19,auStackX_8,4,&stack0xffffffffffffffd8,
                             CONCAT44(in_stack_ffffffffffffffdc,in_stack_ffffffffffffffd8),in_stack_ffffffffffffffe0,
                             in_stack_ffffffffffffffe8);
        if (iVar1 == 0) {
            if (in_stack_ffffffffffffffd8 == 0x13) {
                iVar1 = fcn.0001417c(in_stack_ffffffffffffffdc,0x19);
                if ((iVar1 == 0) && (iVar1 = fcn.000142a4(arg1,0x10,&stack0xffffffffffffffe0,0x10), iVar1 == 0)) {
                    return 0;
                }
            }
            else {
                iVar1 = 0x148;
            }
        }
    }
    if (iVar1 != *0x15920) {
        *0x15920 = iVar1;
    }
    return iVar1;
}


/* fcn.00012524 @ 0x12524 */

int fcn.00012524(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int iVar2;
    uint64_t arg2_00;
    int *piVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    char *pcVar10;
    char cVar11;
    uint32_t uVar12;
    uint64_t arg1_00;
    uint32_t auStackX_8 [2];
    uint32_t auStack_528 [2];
    uint64_t uStack_520;
    uint32_t uStack_518;
    uint32_t uStack_514;
    uint32_t uStack_510;
    int64_t iStack_508;
    uint32_t *puStack_500;
    uint32_t *puStack_4f8;
    uint32_t auStack_4e8 [48];
    uchar auStack_428 [20];
    uint32_t uStack_414;
    uint32_t auStack_410 [6];
    uint32_t auStack_3f8 [240];
    
    arg2_00 = 0;
    uStack_520 = 0;
    auStack_528[0] = 0;
    uVar9 = arg2;
    arg1_00 = arg2 & 0xffffffff;
    auStackX_8[0] = auStackX_8[0] & 0xffffff00;
    uStack_514 = 0;
    uStack_510 = 0;
    cVar11 = '\0';
    uStack_518 = 0;
    if ((arg1 == 0) || (uVar9 == 0)) {
        iVar2 = 3;
        goto code_r0x000129c8;
    }
    if (uVar9 < 0x30) {
        iVar2 = 0x1fc;
code_r0x000128a8:
        if (iVar2 != *0x15920) {
            *0x15920 = iVar2;
        }
    }
    else {
        if (*(arg1 + 0x10) == 0x54504624) {
            iVar2 = fcn.00013228(arg1,arg2,&uStack_520,auStack_528);
            uVar1 = uStack_520;
            if (iVar2 != 0) goto code_r0x000129c8;
            pcVar10 = "FTPRNFTPRBEP";
            do {
                iVar2 = 0;
                if (((uStack_520 == 0) || (auStack_4e8 + arg2_00 * 2 == NULL)) ||
                   (auStack_4e8 + arg2_00 * 2 + 1 == NULL)) {
                    iVar2 = 3;
                    if (*0x15920 != 3) goto code_r0x00012886;
code_r0x00012653:
                    if (iVar2 != 0) goto code_r0x000129c8;
                }
                else {
                    cVar11 = '\0';
                    uVar7 = 0;
                    uVar12 = auStackX_8[0] >> 8;
                    auStackX_8[0] = auStackX_8[0] & 0xffffff00;
                    if (*(uStack_520 + 4) == 0) goto code_r0x00012653;
                    piVar3 = uStack_520 + 0x2c;
                    do {
                        if ((piVar3[-3] == *pcVar10) && (*piVar3 != 0)) {
                            cVar11 = '\x01';
                            auStackX_8[0] = CONCAT31(uVar12,1);
                            auStack_4e8[arg2_00 * 2] = *(uVar7 * 0x20 + 0x28 + uStack_520);
                            auStack_4e8[arg2_00 * 2 + 1] = *(uVar7 * 0x20 + 0x2c + uStack_520);
                            goto code_r0x00012664;
                        }
                        uVar4 = uVar7 + 1;
                        uVar7 = uVar4;
                        piVar3 = piVar3 + 8;
                    } while (uVar4 < *(uStack_520 + 4));
                }
                if (cVar11 == '\0') {
                    iVar2 = 0x200;
                    goto code_r0x000129c8;
                }
code_r0x00012664:
                uVar12 = arg2_00 + 1;
                arg2_00 = uVar12;
                pcVar10 = pcVar10 + 4;
            } while (uVar12 < 3);
            iVar2 = fcn.00014310(auStack_428);
            if (iVar2 != 0) goto code_r0x000129c8;
            if (0x14 < uStack_414) {
                iVar2 = 0x201;
                goto code_r0x000129c8;
            }
            uVar7 = 0;
            uStack_520 = uStack_520 & 0xffffffff00000000;
            uVar12 = uStack_414;
            if (uStack_414 != 0) {
                do {
                    iVar2 = 0;
                    iStack_508 = uVar7 * 0x30;
                    puStack_4f8 = auStack_4e8 + arg2_00 * 2 + 1;
                    puStack_500 = auStack_4e8 + arg2_00 * 2;
                    uVar4 = auStack_410[uVar7 * 0xc];
                    if (((uVar1 == 0) || (puStack_500 == NULL)) || (puStack_4f8 == NULL)) {
                        iVar2 = 3;
                        if (*0x15920 != 3) goto code_r0x00012886;
code_r0x00012742:
                        if (iVar2 != 0) goto code_r0x000129c8;
                    }
                    else {
                        cVar11 = '\0';
                        uVar8 = 0;
                        uVar6 = auStackX_8[0] >> 8;
                        auStackX_8[0] = auStackX_8[0] & 0xffffff00;
                        if (*(uVar1 + 4) == 0) goto code_r0x00012742;
                        piVar3 = uVar1 + 0x2c;
                        do {
                            if ((piVar3[-3] == uVar4) && (*piVar3 != 0)) {
                                cVar11 = '\x01';
                                auStackX_8[0] = CONCAT31(uVar6,1);
                                *puStack_500 = *(uVar8 * 0x20 + 0x28 + uVar1);
                                *puStack_4f8 = *(uVar8 * 0x20 + 0x2c + uVar1);
                                goto code_r0x00012753;
                            }
                            uVar5 = uVar8 + 1;
                            uVar8 = uVar5;
                            piVar3 = piVar3 + 8;
                        } while (uVar5 < *(uVar1 + 4));
                    }
                    if (cVar11 != '\0') {
code_r0x00012753:
                        if ((uVar4 == 0x4c434f4c) || (uVar4 == 0x444f4357)) {
                            uVar12 = *puStack_500;
                            uVar6 = uVar12 + *puStack_4f8;
                            if ((uVar9 < uVar6) || (uVar6 < uVar12)) {
                                iVar2 = 0x1fc;
                                goto code_r0x000129c8;
                            }
                            iVar2 = fcn.00012f48(arg1 + uVar12,*puStack_4f8,uVar4,&uStack_518);
                            if (iVar2 != 0) goto code_r0x000129c8;
                            if (*(auStack_3f8 + iStack_508) != uStack_518) {
                                iVar2 = fcn.00012c5c(auStack_528[0] + arg1,uVar9 - auStack_528[0],
                                                     *(auStack_410 + iStack_508),*(auStack_3f8 + iStack_508));
                                if (iVar2 != 0) goto code_r0x000129c8;
                                cVar11 = auStackX_8[0];
                                if (auStackX_8[0] != '\0') {
                                    if (auStack_528[0] + uStack_514 < uStack_514) {
                                        iVar2 = 0x1fd;
                                        goto code_r0x000129c8;
                                    }
                                    *puStack_500 = auStack_528[0] + uStack_514;
                                    *puStack_4f8 = uStack_510;
                                }
                            }
                            uVar7 = uStack_520 & 0xffffffff;
                            uVar12 = uStack_414;
                        }
                        arg2_00 = arg2_00 + 1;
                    }
                    uVar4 = uVar7 + 1;
                    uVar7 = uVar4;
                    uStack_520 = CONCAT44(uStack_520._4_4_,uVar4);
                } while (uVar4 < uVar12);
            }
            iVar2 = fcn.00013304(auStack_4e8,arg2_00,arg1,arg1_00);
        }
        else {
            if (*arg1 != 0x44504324) {
                iVar2 = 0x1fd;
                goto code_r0x000128a8;
            }
            uVar9 = *(arg1 + 0xc);
            if ((((uVar9 < 0x504d4f4a) || (uVar9 == 0x504e5549)) || (uVar9 == 0x50534441)) ||
               ((uVar9 == 0x50544254 || (uVar9 != 0x52505446)))) {
                iVar2 = 0x1fe;
                goto code_r0x000129c8;
            }
            iVar2 = fcn.000140d4(0x19,0x145a0);
            if (iVar2 == 0) {
                iVar2 = fcn.00013514(arg1_00,0,0,arg3);
                if (iVar2 == 0) {
                    iVar2 = fcn.00012ad0(arg1,arg1_00,arg4);
                    if (iVar2 == 0) {
                        fcn.00014300(auStackX_8,0,4);
                        auStackX_8[0] = 6;
                        iVar2 = fcn.00013b2c(0x145a0,auStackX_8,4);
                        if (iVar2 == 0) {
code_r0x000129af:
                            (**(*0x15960 + 0xf8))(100000);
                            goto code_r0x000129a5;
                        }
                        if (iVar2 == *0x15920) {
                            if (iVar2 == 0) goto code_r0x000129af;
                        }
                        else {
                            *0x15920 = iVar2;
                        }
                    }
                }
            }
            fcn.00013c0c(0x145a0);
            if (iVar2 == 0) {
                return 0;
            }
            if (iVar2 != *0x15920) {
                *0x15920 = iVar2;
            }
        }
code_r0x000129a5:
        if (iVar2 == 0) {
            return 0;
        }
    }
code_r0x000129c8:
    if (iVar2 != *0x15920) {
        *0x15920 = iVar2;
    }
    return iVar2;
code_r0x00012886:
    iVar2 = 3;
    *0x15920 = 3;
    goto code_r0x000129c8;
}


/* fcn.000122ac @ 0x122ac */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int fcn.000122ac(uint32_t *arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t *arg1_00;
    int64_t iVar3;
    uint32_t auStackX_8 [2];
    uint32_t auStack_38 [2];
    int *piStack_30;
    int64_t var_bp_20h;
    int64_t var_bp_18h;
    uint32_t var_bp_10h;
    
    if ((((arg1 == NULL) || (arg2 == 0)) || (arg3 == 0)) || (arg4 == 0)) {
        iVar1 = 3;
        goto code_r0x00012498;
    }
    fcn.00014300(auStack_38,0,4);
    arg1_00 = auStackX_8;
    fcn.00014300(arg1_00,0,4);
    *arg1 = 0;
    *arg3 = 0;
    *arg4 = 0;
    iVar3 = CONCAT71(arg1_00 >> 8,1);
    iVar1 = fcn.00014464(iVar3,auStack_38);
    if (iVar1 != 0) goto code_r0x00012498;
    iVar3 = CONCAT71(iVar3 >> 8,2);
    if ((auStack_38[0] & 0x800) == 0) {
        iVar1 = fcn.00014464(iVar3,auStackX_8);
        if (iVar1 != 0) goto code_r0x00012498;
        uVar2 = auStackX_8[0] >> 0x10 & 0x7f;
        if (auStackX_8[0] >> 0x1c == 7) {
            if (uVar2 == 100) {
                if (-1 < auStackX_8[0] >> 0x10) {
                    uVar2 = 0;
                    goto code_r0x000123fa;
                }
                goto code_r0x00012388;
            }
            if (uVar2 < 100) {
code_r0x000123fa:
                *arg1 = 1;
                *arg2 = uVar2;
                return 0;
            }
        }
    }
    else {
        iVar1 = fcn.00014464(iVar3,auStackX_8);
        if (iVar1 != 0) goto code_r0x00012498;
        if (auStackX_8[0] >> 0x1c != 7) {
            *arg1 = 1;
            return 0;
        }
        uVar2 = auStackX_8[0] >> 0x10 & 0x7f;
        if (uVar2 < 100) {
            *arg1 = 1;
            *arg2 = uVar2;
            return 0;
        }
        if (uVar2 == 100) {
code_r0x00012388:
            *arg2 = 100;
        }
    }
    piStack_30 = NULL;
    var_bp_20h = 0;
    iVar1 = fcn.00013dc8(0x145a0,&piStack_30,&var_bp_20h);
    if (iVar1 == 0) {
        if (piStack_30 == NULL) {
            iVar1 = 5;
        }
        else {
            iVar1 = fcn.000139ac(0x145a0,piStack_30,&var_bp_20h);
            if (iVar1 == 0) {
                if (var_bp_20h == 0x1c) {
                    if (*piStack_30 == 7) {
                        *arg3 = piStack_30[1];
                        *arg4 = piStack_30[2];
                    }
                    else {
                        iVar1 = 0x148;
                    }
                }
                else {
                    iVar1 = 0xf0;
                }
            }
        }
    }
    fcn.000142ec(piStack_30);
    fcn.00013c0c(0x145a0);
    if (iVar1 != 0) {
        if (iVar1 != *0x15920) {
            *0x15920 = iVar1;
            goto code_r0x00012498;
        }
        if (iVar1 != 0) goto code_r0x00012498;
    }
    iVar1 = fcn.0001417c(*arg3,0x19);
    if (iVar1 == 0) {
        return 0;
    }
code_r0x00012498:
    fcn.00013c0c(0x145a0);
    if ((iVar1 != 0) && (iVar1 != *0x15920)) {
        *0x15920 = iVar1;
    }
    return iVar1;
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


/* fcn.00010a5c @ 0x10a5c */

int64_t fcn.00010a5c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    auStackX_18[0] = 0;
    *arg2 = 0;
    iVar1 = (**(*0x15968 + 0x48))(arg1,0x152e0,0,auStackX_18,0);
    if (iVar1 == -0x7ffffffffffffffb) {
        iVar1 = fcn.00012220();
        *arg2 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x15968 + 0x48))(arg1,0x152e0,0,auStackX_18,iVar1);
            if (iVar1 < 0) {
                (**(*0x15960 + 0x48))(*arg2);
                *arg2 = 0;
            }
        }
    }
    return iVar1;
}


/* fcn.00011430 @ 0x11430 */

void fcn.00011430(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00011494(noname_0,arg1 >> 1,0x40,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00011494 @ 0x11494 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00011494(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x000114f3;
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
code_r0x000114f3:
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
        uVar21 = fcn.00010a38(arg4);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.0001097c(arg4,0xf4241);
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
            pcVar8 = 0x1557c;
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
code_r0x000118ae:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x1557c;
            }
            else {
                pcVar8 = 0x15580;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x00011645:
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
                    goto code_r0x000117e8;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x000117ff;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x000117e8;
                        }
                        goto code_r0x000117ff;
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
code_r0x000117e8:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x00011645;
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
                        goto code_r0x00011645;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x000117ff;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x000117e8;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x000117ff:
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
                        fcn.000121fc(&var_68h_2,0x26,0,0x15510);
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
                            goto code_r0x000118ae;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x00011a97;
                        if (uStack_a8 == 0x58) goto code_r0x00011b8c;
                        if (uStack_a8 == 0x61) goto code_r0x00011aa0;
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
                            goto code_r0x00011626;
                        }
                        if (uStack_a8 != 100) goto code_r0x00011622;
                        goto code_r0x00011ba3;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x1557c;
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
                goto code_r0x00011dd0;
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
                            iVar12 = 0x1561b;
                            goto code_r0x00011b53;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x00011b53:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x00011dd0;
                    }
                    fcn.000121fc(&var_68h_2,0x26,0,0x15574);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x00011a97:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x00011aa0:
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
                        goto code_r0x00011dd0;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x00011622;
                            goto code_r0x00011b90;
                        }
                        goto code_r0x00011b95;
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
                        goto code_r0x00011dd0;
                    }
                    fcn.000121fc(&var_68h_2,0x26,0,0x15558);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x00011dd0;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x00011b8c:
            uVar21 = uVar21 | 0x20;
code_r0x00011b90:
            uVar21 = uVar21 | 0x80;
code_r0x00011b95:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x00011ba3:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x00011be5;
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
code_r0x00011be5:
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
code_r0x00011c6d:
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
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x00011c6d;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar10 = uVar5;
            do {
                uVar6 = uVar10 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = "0123456789ABCDEF"[uVar10 % uVar16];
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
code_r0x00011622:
            pcVar8 = &uStack_a8;
code_r0x00011626:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x00011dd0:
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
                arg1 = fcn.00011460(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00011460(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
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
                arg1 = fcn.00011460(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
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
                arg1 = fcn.00011460(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
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


/* fcn.0001114c @ 0x1114c */

//WARNING: Variable defined which should be unmapped: var_10h

uint64_t fcn.0001114c(int64_t arg1)

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
    iVar1 = (**(*0x15960 + 0x138))(2,0x15370,0,&uStackX_20,&pcStackX_10);
    if (iVar1 < 0) {
        uVar2 = 0;
    }
    else {
        if (uStackX_20 != 0) {
            arg1_00 = pcStackX_10;
            uVar4 = uVar2;
            do {
                iVar1 = (**(*0x15960 + 0x98))(*(pcStackX_10 + uVar4 * 8),0x15330,auStack_38);
                if ((-1 < iVar1) &&
                   (iVar1 = (**(*0x15960 + 0x98))(*(pcStackX_10 + uVar4 * 8),0x15300,&pcStackX_18), -1 < iVar1)) {
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
        (**(*0x15960 + 0x48))(pcStackX_10);
    }
    return uVar2;
}


/* fcn.00010bd4 @ 0x10bd4 */

int64_t fcn.00010bd4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t aiStackX_8 [2];
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    aiStackX_8[0] = arg1;
    iVar1 = (**(*0x15960 + 0x98))(*0x159a0,0x15330,&iStackX_18);
    if (-1 < iVar1) {
        iVar1 = (**(iStackX_18 + 8))(iStackX_18,aiStackX_8);
        if (-1 < iVar1) {
            iVar1 = (**(aiStackX_8[0] + 8))(aiStackX_8[0],&iStackX_20,arg2,3,0);
            if (iVar1 == -0x7ffffffffffffff2) {
                iVar1 = 0;
            }
            else if (-1 < iVar1) {
                if (iStackX_20 == 0) {
                    iVar1 = -0x7ffffffffffffffd;
                }
                else {
                    iVar1 = (**(iStackX_20 + 0x18))(iStackX_20);
                    (**(aiStackX_8[0] + 0x10))(aiStackX_8[0]);
                }
            }
        }
    }
    return iVar1;
}


/* fcn.00010c88 @ 0x10c88 */

//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00010c88(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
    iVar1 = (**(*0x15960 + 0x98))(*0x159a0,0x15330,&iStack_20);
    if ((-1 < iVar1) && (iVar1 = (**(iStack_20 + 8))(iStack_20,&iStack_28), -1 < iVar1)) {
        iVar1 = (**(iStack_28 + 8))(iStack_28,&iStackX_8,L"MeRecov.Cap",0x8000000000000003,0);
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


/* fcn.00010a38 @ 0x10a38 */

uint64_t fcn.00010a38(uint32_t arg1)

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


/* fcn.000121fc @ 0x121fc */

void fcn.000121fc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00011494(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00011460 @ 0x11460 */

uchar * fcn.00011460(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00014300 @ 0x14300 */

uint32_t * fcn.00014300(uint32_t *arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00014464 @ 0x14464 */

uint fcn.00014464(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    int *piVar3;
    uint32_t uVar4;
    uint32_t auStack_108 [16];
    int aiStack_c8 [2];
    int aiStack_c0 [6];
    int iStack_a8;
    int iStack_a4;
    int iStack_a0;
    int aiStack_9c [37];
    
    uVar4 = arg1 & 0xff;
    if ((arg2 == 0) || (5 < arg1 - 1U)) {
        return 3;
    }
    *arg2 = 0;
    fcn.00014300(auStack_108,0,0x100);
    if (((*0x15930 != 0) || (iVar2 = (**(*0x15960 + 0x140))(0x152d0,0,0x15930), -1 < iVar2)) &&
       (iVar2 = (**(*0x15930 + 0x38))(*0x15930,2,0x160000,0x40,auStack_108), -1 < iVar2)) {
        if (uVar4 == 1) {
            piVar3 = aiStack_c8;
        }
        else if (uVar4 == 2) {
            piVar3 = aiStack_c0;
        }
        else if (uVar4 == 3) {
            piVar3 = &iStack_a8;
        }
        else if (uVar4 == 4) {
            piVar3 = &iStack_a4;
        }
        else if (uVar4 == 5) {
            piVar3 = &iStack_a0;
        }
        else {
            if (uVar4 != 6) {
                return 0x3d;
            }
            piVar3 = aiStack_9c;
        }
        iVar1 = *piVar3;
        *arg2 = iVar1;
        if (arg1 != '\x01') {
            return 0;
        }
        if ((iVar1 + 1U & 0xfffffffe) != 0) {
            return 0;
        }
    }
    return 0x3d;
}


/* fcn.00013dc8 @ 0x13dc8 */

uint fcn.00013dc8(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    uint uVar3;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    if ((((iVar2 == 0) || (arg2 == 0)) || (arg3 == 0)) || (*(iVar2 + 0x1d) == 0)) {
        uVar3 = 3;
    }
    else {
        uVar1 = *(iVar2 + 0x14);
        iVar2 = fcn.000142dc(uVar1);
        if (iVar2 == 0) {
            uVar3 = 5;
        }
        else {
            *arg3 = uVar1;
            *arg2 = iVar2;
        }
    }
    return uVar3;
}


/* fcn.000139ac @ 0x139ac */

//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

uint fcn.000139ac(uint32_t arg1,int64_t arg2,int64_t arg3)

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
    iVar2 = fcn.00013cd0(*0x15924,1,arg2,auStackX_8);
    if (-1 < iVar2) {
        if ((auStackX_8[0] == 8) && (*arg2 == '\b')) {
            auStackX_8[0] = *arg3;
            fcn.00014300(arg2,0,auStackX_8[0]);
            iVar3 = fcn.00013cd0(*0x15924,1,arg2,auStackX_8);
            if (iVar3 < 0) {
                if (iVar3 != -0x7fffffffffffffee) {
                    return 0x17;
                }
                (**(*0x15960 + 0xf8))(40000000);
                auStackX_8[0] = *arg3;
                fcn.00014300(arg2,0,auStackX_8[0]);
                iVar3 = fcn.00013cd0(*0x15924,1,arg2,auStackX_8);
                if (iVar3 < 0) {
                    return 0x17;
                }
            }
            *arg3 = auStackX_8[0];
        }
        else {
            *arg3 = auStackX_8[0];
            if (*0x15924 == 0) {
                auStack_28[0] = 8;
                if (*(iVar3 + 0x18) != '\x01') {
                    fcn.00014300(auStack_20,0,8);
                    iVar3 = fcn.00013cd0(*0x15924,1,auStack_20,auStack_28);
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


/* fcn.000142ec @ 0x142ec */

void fcn.000142ec(uint32_t arg1)

{
    uint in_register_0000000c;
    
    if (CONCAT44(in_register_0000000c,arg1) != 0) {
        fcn.0001227c();
    }
    return;
}


/* fcn.0001227c @ 0x1227c */

void fcn.0001227c(void)

{
    //WARNING: Could not recover jumptable at 0x00012283. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x15960 + 0x48))();
    return;
}


/* fcn.00013c0c @ 0x13c0c */

int fcn.00013c0c(uint32_t arg1)

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
        fcn.00014300(&uStackX_8,0,4);
        fcn.00014300(acStackX_18,0,8);
        uStackX_9 = *(iVar2 + 0x12);
        uStackX_8 = 7;
        uStackX_a = 1;
        iVar1 = fcn.00013d48(*0x15924,&uStackX_8,4,0);
        if ((((iVar1 < 0) || (iVar1 = fcn.00013cd0(*0x15924,1,acStackX_18,auStackX_10), iVar1 < 0)) ||
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


/* fcn.0001417c @ 0x1417c */

int fcn.0001417c(int64_t arg1,int64_t arg2)

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
            piVar1 = 0x15278;
            iVar2 = 0x300;
            uVar3 = *0x152a8;
            goto code_r0x00014282;
        }
        if (iVar2 == 0) {
            piVar1 = 0x15258;
            iVar2 = 0x2ff;
            uVar3 = *0x15270;
            goto code_r0x00014282;
        }
        if ((iVar2 == 7) || (iVar2 == 9)) {
            piVar1 = 0x14fb0;
            iVar2 = 0x2fb;
            uVar3 = *0x14ff8;
            goto code_r0x00014282;
        }
        if (iVar2 != 10) {
            if (iVar2 != 0xe) {
                return 0x301;
            }
            piVar1 = 0x15050;
            iVar2 = 0x2fe;
            uVar3 = *0x15250;
            goto code_r0x00014282;
        }
    }
    else {
        if (iVar2 == 0x14) {
            piVar1 = 0x152b0;
            iVar2 = 0x316;
            uVar3 = *0x152c8;
            goto code_r0x00014282;
        }
        if (iVar2 == 0x16) {
            piVar1 = 0x15000;
            iVar2 = 0x2fc;
            uVar3 = *0x15020;
            goto code_r0x00014282;
        }
        if (iVar2 == 0x17) {
            piVar1 = 0x14de0;
            iVar2 = 0x2fa;
            uVar3 = *0x14fa8;
            goto code_r0x00014282;
        }
        if (iVar2 != 0x18) {
            if (iVar2 != 0x19) {
                return 0x301;
            }
            piVar1 = 0x14730;
            iVar2 = 0x2f9;
            uVar3 = *0x14dd8;
            goto code_r0x00014282;
        }
    }
    piVar1 = 0x15028;
    iVar2 = 0x2fd;
    uVar3 = *0x15040;
code_r0x00014282:
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


/* fcn.00013228 @ 0x13228 */

int fcn.00013228(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int *piVar3;
    int iVar4;
    uint64_t uVar5;
    
    uVar5 = 0;
    uVar1 = arg2;
    if ((((arg1 == 0) || (uVar1 == 0)) || (arg3 == 0)) || (arg4 == 0)) {
        iVar4 = 3;
        goto code_r0x000132e0;
    }
    *arg3 = 0;
    *arg4 = 0;
    if (uVar1 < 0x30) {
code_r0x00013265:
        iVar4 = 0x1fc;
    }
    else {
        piVar3 = arg1 + 0x10;
        *arg3 = piVar3;
        if (*piVar3 != 0x54504624) {
            iVar4 = 0x14a;
            goto code_r0x000132e0;
        }
        uVar2 = *(arg1 + 0x14);
        if (uVar2 - 1 < 0x39) {
            if ((arg2 & 0xffffffffU) < (uVar2 + 1) * 0x20) goto code_r0x00013265;
            if (uVar2 == 0) {
                return 0;
            }
            while( true ) {
                uVar2 = piVar3[uVar5 * 8 + 0xb] + piVar3[uVar5 * 8 + 10];
                if ((uVar2 < piVar3[uVar5 * 8 + 10]) || (uVar1 < uVar2)) break;
                if (*arg4 < uVar2) {
                    *arg4 = uVar2;
                }
                piVar3 = *arg3;
                uVar2 = uVar5 + 1;
                uVar5 = uVar2;
                if (piVar3[1] <= uVar2) {
                    return 0;
                }
            }
        }
        iVar4 = 0x1fd;
    }
code_r0x000132e0:
    if (iVar4 != *0x15920) {
        *0x15920 = iVar4;
    }
    return iVar4;
}


/* fcn.00014310 @ 0x14310 */

ulong fcn.00014310(int64_t arg1)

{
    ulong uVar1;
    int64_t unaff_RBX;
    int64_t unaff_retaddr;
    int32_t arg_60h;
    uint32_t auStackX_10 [6];
    
    arg_60h = 1000;
    if (arg1 == 0) {
        uVar1 = 3;
    }
    else {
        fcn.00014300(auStackX_10,0,8);
        auStackX_10[0] = 0x1a;
        uVar1 = fcn.00013f50(0x19,auStackX_10,8,arg1,unaff_RBX,unaff_retaddr,arg_60h);
        if (uVar1 == 0) {
            if (*arg1 == 0x1b) {
                uVar1 = fcn.0001417c(*(arg1 + 4),0x19);
            }
            else {
                uVar1 = 0x148;
            }
        }
    }
    return uVar1;
}


/* fcn.00012f48 @ 0x12f48 */

int fcn.00012f48(int64_t arg1,int64_t arg2,int64_t noname_2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int *piVar4;
    int *piVar5;
    int *piVar7;
    int *piVar6;
    int *piVar8;
    uint32_t auStackX_8 [2];
    
    auStackX_8[0] = 0;
    piVar7 = NULL;
    piVar6 = NULL;
    if ((arg1 == 0) || (arg3 == 0)) {
        iVar3 = 3;
        goto code_r0x0001308c;
    }
    iVar3 = fcn.00012dd8(arg1,arg2,noname_2,auStackX_8);
    if (iVar3 != 0) goto code_r0x0001308c;
    arg1 = auStackX_8[0] + arg1;
    if (arg1 == 0) {
        iVar3 = 3;
code_r0x0001306a:
        if (iVar3 != *0x15920) {
            *0x15920 = iVar3;
        }
        piVar6 = piVar7;
    }
    else {
        if (*(arg1 + 0x1c) != 0x324e4d24) {
code_r0x00012fa6:
            iVar3 = 0x1fd;
            goto code_r0x0001306a;
        }
        uVar1 = *(arg1 + 0x18);
        if ((0x800 < uVar1) || (arg2 - auStackX_8[0] < uVar1 << 2)) {
            iVar3 = 0x1fc;
            goto code_r0x0001306a;
        }
        if ((0x7df < uVar1 - 0x21) || (uVar2 = *(arg1 + 4), uVar1 <= uVar2)) goto code_r0x00012fa6;
        piVar5 = uVar2 * 4 + arg1;
        if (piVar5 == NULL) {
            iVar3 = 3;
        }
        else {
            piVar8 = uVar1 * 4 + uVar2 * -4 + piVar5;
            if (piVar8 < piVar5) {
code_r0x00013003:
                iVar3 = 0x1fd;
                piVar6 = piVar7;
            }
            else {
                piVar4 = piVar5 + 2;
                piVar6 = piVar5;
                if (piVar5 <= piVar4) {
                    do {
                        if (piVar8 < piVar4) break;
                        if (((piVar6[1] < 8) || (piVar5 = piVar6[1] + piVar6, piVar5 < piVar6)) || (piVar8 < piVar5))
                        goto code_r0x00013003;
                        if (*piVar6 == 0x16) {
                            if (piVar6[1] < 0x58) goto code_r0x00013003;
                            iVar3 = 0;
                            goto code_r0x00013058;
                        }
                        piVar4 = piVar5 + 2;
                        piVar6 = piVar5;
                    } while (piVar5 <= piVar4);
                }
                iVar3 = 0x204;
                piVar6 = piVar7;
            }
        }
code_r0x00013058:
        piVar7 = piVar6;
        if (iVar3 != 0) goto code_r0x0001306a;
    }
    if (iVar3 == 0) {
        *arg3 = piVar6[6];
        return 0;
    }
code_r0x0001308c:
    if (iVar3 != *0x15920) {
        *0x15920 = iVar3;
    }
    return iVar3;
}


/* fcn.00012c5c @ 0x12c5c */

int fcn.00012c5c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    int *arg1_00;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint32_t auStackX_8 [2];
    int *in_stack_00000028;
    uint32_t *in_stack_00000030;
    uchar *in_stack_00000038;
    int iStack_48;
    uint32_t uStack_44;
    
    auStackX_8[0] = 0;
    iStack_48 = 0;
    if ((((arg1 == 0) || (in_stack_00000028 == NULL)) || (in_stack_00000030 == NULL)) || (in_stack_00000038 == NULL)) {
        iVar2 = 3;
    }
    else {
        uVar3 = arg2;
        if (uVar3 < 0x10) {
code_r0x00012cc7:
            iVar2 = 0x1fc;
        }
        else {
            *in_stack_00000038 = 0;
            iVar2 = *arg1;
            arg1_00 = arg1;
            while (iVar2 == 0x44504324) {
                uStack_44 = (arg1 - arg1_00) + uVar3;
                iVar2 = fcn.000130b8(arg1_00,uStack_44,arg1_00[3],auStackX_8);
                uVar1 = auStackX_8[0];
                if (iVar2 != 0) goto code_r0x00012dae;
                uVar4 = auStackX_8[0];
                if (auStackX_8[0] == 0) break;
                if (arg1_00[3] == arg3) {
                    if (arg4 != 0) {
                        iVar2 = fcn.00012f48(arg1_00,uStack_44,arg3 & 0xffffffff,&iStack_48);
                        if (iVar2 != 0) goto code_r0x00012dae;
                        if (arg4 != iStack_48) goto code_r0x00012d49;
                    }
                    *in_stack_00000028 = arg1_00 - arg1;
                    *in_stack_00000030 = uVar1;
                    if ((*in_stack_00000028 + uVar1 <= uVar3) && (uVar1 <= *in_stack_00000028 + uVar1)) {
                        *in_stack_00000038 = 1;
                        return 0;
                    }
                    break;
                }
code_r0x00012d49:
                iVar5 = (uVar4 - arg1) + arg1_00;
                if ((arg2 & 0xffffffffU) <= iVar5) {
                    return 0;
                }
                if (iVar5 < uVar4) {
                    return 0;
                }
                if (((arg2 & 0xffffffffU) < iVar5 + 0x10U) || (iVar5 + 0x10U < uVar4)) goto code_r0x00012cc7;
                arg1_00 = arg1_00 + uVar4;
                iVar2 = *arg1_00;
            }
            iVar2 = 0x1fd;
        }
    }
code_r0x00012dae:
    if (iVar2 != *0x15920) {
        *0x15920 = iVar2;
    }
    return iVar2;
}


/* fcn.00013304 @ 0x13304 */

int fcn.00013304(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t *puVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    int64_t arg1_00;
    uint32_t auStackX_10 [2];
    int64_t iStackX_18;
    uint32_t in_stack_00000028;
    uint32_t in_stack_00000030;
    int64_t in_stack_00000038;
    int64_t in_stack_00000040;
    
    uVar6 = 0;
    arg1_00 = 0;
    uVar7 = 0;
    uVar3 = arg2;
    iStackX_18 = arg3;
    if (uVar3 != 0) {
        puVar5 = arg1 + 4;
        do {
            uVar6 = uVar6 + *puVar5;
            if (uVar6 < *puVar5) {
                iVar4 = 0x1fd;
                goto code_r0x000134df;
            }
            uVar7 = uVar7 + 1;
            puVar5 = puVar5 + 2;
        } while (uVar7 < uVar3);
    }
    arg1_00 = fcn.000142dc(uVar6);
    if (arg1_00 == 0) {
        iVar4 = 5;
        goto code_r0x000134df;
    }
    iVar4 = 0;
    uVar8 = 0;
    if ((((arg3 == 0) || (arg4 == 0)) || (uVar6 == 0)) || ((arg1 == 0 || (uVar3 == 0)))) {
        iVar4 = 3;
        goto code_r0x000134df;
    }
    uVar7 = 0;
    if (uVar3 != 0) {
        puVar5 = arg1 + 4;
        do {
            uVar2 = puVar5[-1];
            uVar1 = uVar2 + *puVar5;
            if ((arg4 < uVar1) || (uVar1 < uVar2)) {
                iVar4 = 0x1fc;
code_r0x000133ee:
                if (iVar4 != *0x15920) {
                    *0x15920 = iVar4;
                }
                break;
            }
            iVar4 = fcn.000142a4(uVar8 + arg1_00,uVar6 - uVar8,uVar2 + iStackX_18,*puVar5);
            if (iVar4 != 0) goto code_r0x000133ee;
            uVar8 = uVar8 + *puVar5;
            uVar7 = uVar7 + 1;
            puVar5 = puVar5 + 2;
        } while (uVar7 < uVar3);
    }
    if (iVar4 != 0) goto code_r0x000134df;
    iVar4 = fcn.000140d4(0x19,0x145a0);
    if (iVar4 == 0) {
        iVar4 = fcn.00013514(uVar6,in_stack_00000028,in_stack_00000030,in_stack_00000038);
        if (iVar4 == 0) {
            iVar4 = fcn.00012ad0(arg1_00,uVar6,in_stack_00000040);
            if (iVar4 == 0) {
                fcn.00014300(auStackX_10,0,4);
                auStackX_10[0] = 6;
                iVar4 = fcn.00013b2c(0x145a0,auStackX_10,4);
                if (iVar4 == 0) {
code_r0x000134c6:
                    (**(*0x15960 + 0xf8))(100000);
                    goto code_r0x000134df;
                }
                if (iVar4 == *0x15920) {
                    if (iVar4 == 0) goto code_r0x000134c6;
                }
                else {
                    *0x15920 = iVar4;
                }
            }
        }
    }
    fcn.00013c0c(0x145a0);
    if ((iVar4 != 0) && (iVar4 != *0x15920)) {
        *0x15920 = iVar4;
    }
code_r0x000134df:
    fcn.000142ec(arg1_00);
    if ((iVar4 != 0) && (iVar4 != *0x15920)) {
        *0x15920 = iVar4;
    }
    return iVar4;
}


/* fcn.000140d4 @ 0x140d4 */

ulong fcn.000140d4(uint32_t arg1,int64_t arg2)

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
code_r0x0001416e:
        uVar2 = 3;
    }
    else {
        arg2_00 = arg2;
        if (arg1 == 0x17) {
            uStack_18 = *0x14630;
            uStack_10 = *0x14638;
            uVar2 = fcn.00013624(&uStack_18,arg2_00);
            if (uVar2 == 0) {
                if (*(arg2 + 0x10) == uVar2 + '\x01') {
                    return uVar2;
                }
                fcn.00013c0c(arg2_00);
            }
            uVar3 = *0x14640;
            uVar4 = *0x14644;
            uVar5 = *0x14648;
            uVar6 = *0x1464c;
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
            else if (0x14 < arg1) goto code_r0x0001416e;
            iVar1 = arg1 * 0x10;
            uVar3 = *(iVar1 + 0x145e0);
            uVar4 = *(iVar1 + 0x145e4);
            uVar5 = *(iVar1 + 0x145e8);
            uVar6 = *(iVar1 + 0x145ec);
        }
        uStack_18 = CONCAT44(uVar4,uVar3);
        uStack_10 = CONCAT44(uVar6,uVar5);
        uVar2 = fcn.00013624(&uStack_18,arg2_00);
    }
    return uVar2;
}


/* fcn.00013514 @ 0x13514 */

//WARNING: Removing unreachable block (ram,0x000135c9)

int fcn.00013514(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int iStack_80;
    uint32_t uStack_7c;
    uint32_t uStack_68;
    int iStack_64;
    uchar uStack_5c;
    uint uStack_3a;
    uchar auStack_2e [38];
    
    iVar1 = arg1;
    if (iVar1 == 0) {
        iVar1 = 3;
    }
    else {
        fcn.00014300(&uStack_68,0,0x5a);
        uStack_68 = 2;
        uStack_3a = arg3;
        iStack_64 = iVar1;
        uStack_5c = arg2;
        if (((arg4 == 0) || (iVar1 = fcn.000142a4(auStack_2e,0x10,arg4,0x10), iVar1 == 0)) &&
           (iVar1 = fcn.00013e30(0x145a0,&uStack_68,0x5a,&iStack_80), iVar1 == 0)) {
            if (iStack_80 == 3) {
                iVar1 = fcn.0001417c(uStack_7c,0x19);
                if (iVar1 == 0) {
                    return 0;
                }
            }
            else {
                iVar1 = 0x148;
            }
        }
    }
    if (iVar1 != *0x15920) {
        *0x15920 = iVar1;
    }
    return iVar1;
}


/* fcn.00012ad0 @ 0x12ad0 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

int fcn.00012ad0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint *puVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint *puStackX_20;
    uint32_t var_58h;
    uint64_t uStack_58;
    int64_t iStack_50;
    int iStack_48;
    uint32_t uStack_44;
    uint32_t var_20h;
    uint32_t var_18h;
    uint32_t var_bp_10h;
    int32_t var_ch;
    
    puStackX_20 = NULL;
    uStack_58 = 0;
    uVar5 = 0;
    iVar2 = fcn.00013dc8(0x145a0,&puStackX_20,&uStack_58);
    puVar1 = puStackX_20;
    if (iVar2 == 0) {
        if (puStackX_20 == NULL) {
            iVar2 = 5;
        }
        else if (uStack_58 < 0xd) {
            iVar2 = 0x23;
        }
        else {
            *puStackX_20 = 4;
            uVar4 = uStack_58 - 0xc;
            uVar6 = arg2;
            if (uVar6 != 0) {
                do {
                    uVar3 = uVar6 - uVar5;
                    if (uVar4 <= uVar3) {
                        uVar3 = uVar4;
                    }
                    uVar4 = uVar3;
                    iVar2 = fcn.000142a4(puVar1 + 0xb,uVar3,uVar5 + arg1,uVar3);
                    if (iVar2 != 0) break;
                    puVar1[1] = uVar3;
                    iStack_50 = 8;
                    if (puStackX_20 == NULL) {
                        iVar2 = 3;
code_r0x00012bf7:
                        if (iVar2 != *0x15920) {
                            *0x15920 = iVar2;
                        }
                    }
                    else {
                        iVar2 = fcn.00013e30(0x145a0,puStackX_20,uVar4 + 0xb,&iStack_48);
                        if (iVar2 != 0) goto code_r0x00012bf7;
                        if (iStack_50 != 8) {
                            iVar2 = 0xf0;
                            goto code_r0x00012bf7;
                        }
                        if (iStack_48 != 5) {
                            iVar2 = 0x148;
                            goto code_r0x00012bf7;
                        }
                        iVar2 = fcn.0001417c(uStack_44,0x19);
                        if (iVar2 != 0) goto code_r0x00012bf7;
                    }
                    if (iVar2 != 0) break;
                    uVar3 = uVar5 + uVar3;
                    uVar5 = uVar3;
                    if (arg3 != 0) {
                        (*arg3)(uVar5,arg2 & 0xffffffff);
                    }
                } while (uVar3 < uVar6);
            }
        }
    }
    fcn.000142ec(puStackX_20);
    if ((iVar2 != 0) && (iVar2 != *0x15920)) {
        *0x15920 = iVar2;
    }
    return iVar2;
}


/* fcn.00013b2c @ 0x13b2c */

uint fcn.00013b2c(uint32_t arg1,int64_t arg2,int64_t arg3)

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
            fcn.00014300(&uStackX_8,0,8);
            in_R9 = 0;
            uStackX_8._0_1_ = 8;
            uStackX_8._2_1_ = 1;
            uStackX_8._1_1_ = uVar1;
            iVar4 = fcn.00013d48(*0x15924,&uStackX_8,8,0);
            if (iVar4 < 0) {
                return 0x20;
            }
            cVar2 = *(iVar5 + 0x18);
        }
        iVar5 = fcn.00013d48(*0x15924,arg2,arg3 & 0xffffffff,CONCAT71(in_R9 >> 8,cVar2 == '\0'));
        uVar3 = 0;
        if (iVar5 < 0) {
            uVar3 = 0x17;
        }
    }
    return uVar3;
}


/* fcn.00013f50 @ 0x13f50 */

//WARNING: Variable defined which should be unmapped: var_13h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h

int fcn.00013f50(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_50h,int64_t arg_58h,
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
    if ((((arg2 == 0) || (arg3 == 0)) || (arg4 == 0)) || ((in_stack_00000028 == NULL || (*in_stack_00000028 == 0)))) {
        iVar2 = 3;
        goto code_r0x000140a9;
    }
    iVar2 = fcn.000140d4(arg1,&uStack_58);
    if (iVar2 != 0) goto code_r0x000140a9;
    auStackX_10[0] = 0;
    if ((*in_stack_00000028 == 0) || (_auStack_3b == 0)) {
        iVar2 = 3;
    }
    else {
        uVar1 = uStack_48._4_4_;
        arg1_00 = uStack_48._4_4_;
        arg2_00 = 0;
        if (arg1_00 < arg3) {
code_r0x00013ff9:
            iVar2 = 0x23;
        }
        else {
            iVar2 = fcn.00013b2c(&uStack_58,arg2,arg3 & 0xffffffff);
            if (iVar2 == 0) {
                auStackX_10[0] = uVar1;
                arg2_00 = fcn.000142dc(arg1_00);
                if (arg2_00 == 0) {
                    iVar2 = 5;
                }
                else {
                    iVar2 = fcn.000139ac(&uStack_58,arg2_00,auStackX_10);
                    if (iVar2 == 0) {
                        if (*in_stack_00000028 < auStackX_10[0]) goto code_r0x00013ff9;
                        fcn.00014300(arg4,0,*in_stack_00000028);
                        iVar2 = fcn.000142a4(arg4,*in_stack_00000028,arg2_00,auStackX_10[0]);
                        if (iVar2 == 0) {
                            *in_stack_00000028 = auStackX_10[0];
                        }
                    }
                }
            }
        }
    }
    fcn.000142ec(arg2_00);
    if ((iVar2 == 0) && (*in_stack_00000028 < _var_38h)) {
        iVar2 = 0xf0;
    }
code_r0x000140a9:
    fcn.00013c0c(&uStack_58);
    return iVar2;
}


/* fcn.000142a4 @ 0x142a4 */

ulong fcn.000142a4(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

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
        fcn.00010968(arg1,arg3,arg4);
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00013e30 @ 0x13e30 */

int fcn.00013e30(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t arg2_00;
    uint32_t auStackX_8 [2];
    uint64_t *in_stack_00000028;
    
    arg2_00 = 0;
    auStackX_8[0] = 0;
    if ((((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) ||
       (((arg4 == 0 || (in_stack_00000028 == NULL)) || ((*in_stack_00000028 == 0 || (*(arg1 + 0x1d) == 0)))))) {
        iVar2 = 3;
        goto code_r0x00013f2c;
    }
    uVar1 = *(arg1 + 0x14);
    arg2_00 = 0;
    if (arg3 <= uVar1) {
        iVar2 = fcn.00013b2c(arg1,arg2,arg3);
        if (iVar2 != 0) goto code_r0x00013f2c;
        auStackX_8[0] = uVar1;
        arg2_00 = fcn.000142dc(uVar1);
        if (arg2_00 == 0) {
            iVar2 = 5;
            goto code_r0x00013f2c;
        }
        iVar2 = fcn.000139ac(arg1,arg2_00,auStackX_8);
        if (iVar2 != 0) goto code_r0x00013f2c;
        if (auStackX_8[0] <= *in_stack_00000028) {
            fcn.00014300(arg4,0,*in_stack_00000028);
            iVar2 = fcn.000142a4(arg4,*in_stack_00000028,arg2_00,auStackX_8[0]);
            if (iVar2 == 0) {
                *in_stack_00000028 = auStackX_8[0];
            }
            goto code_r0x00013f2c;
        }
    }
    iVar2 = 0x23;
code_r0x00013f2c:
    fcn.000142ec(arg2_00);
    return iVar2;
}


/* fcn.000130b8 @ 0x130b8 */

int fcn.000130b8(int64_t arg1,int64_t arg2,int64_t noname_2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int *piVar4;
    int *piVar5;
    int *piVar7;
    int *piVar6;
    int *piVar8;
    uint32_t auStackX_8 [2];
    
    auStackX_8[0] = 0;
    piVar7 = NULL;
    piVar6 = NULL;
    if ((arg1 == 0) || (arg3 == 0)) {
        iVar3 = 3;
        goto code_r0x000131fc;
    }
    iVar3 = fcn.00012dd8(arg1,arg2,noname_2,auStackX_8);
    if (iVar3 != 0) goto code_r0x000131fc;
    arg1 = auStackX_8[0] + arg1;
    if (arg1 == 0) {
        iVar3 = 3;
code_r0x000131da:
        if (iVar3 != *0x15920) {
            *0x15920 = iVar3;
        }
        piVar6 = piVar7;
    }
    else {
        if (*(arg1 + 0x1c) != 0x324e4d24) {
code_r0x00013116:
            iVar3 = 0x1fd;
            goto code_r0x000131da;
        }
        uVar1 = *(arg1 + 0x18);
        if ((0x800 < uVar1) || (arg2 - auStackX_8[0] < uVar1 << 2)) {
            iVar3 = 0x1fc;
            goto code_r0x000131da;
        }
        if ((0x7df < uVar1 - 0x21) || (uVar2 = *(arg1 + 4), uVar1 <= uVar2)) goto code_r0x00013116;
        piVar5 = uVar2 * 4 + arg1;
        if (piVar5 == NULL) {
            iVar3 = 3;
        }
        else {
            piVar8 = uVar1 * 4 + uVar2 * -4 + piVar5;
            if (piVar8 < piVar5) {
code_r0x00013173:
                iVar3 = 0x1fd;
                piVar6 = piVar7;
            }
            else {
                piVar4 = piVar5 + 2;
                piVar6 = piVar5;
                if (piVar5 <= piVar4) {
                    do {
                        if (piVar8 < piVar4) break;
                        if (((piVar6[1] < 8) || (piVar5 = piVar6[1] + piVar6, piVar5 < piVar6)) || (piVar8 < piVar5))
                        goto code_r0x00013173;
                        if (*piVar6 == 0x16) {
                            if (piVar6[1] < 0x58) goto code_r0x00013173;
                            iVar3 = 0;
                            goto code_r0x000131c8;
                        }
                        piVar4 = piVar5 + 2;
                        piVar6 = piVar5;
                    } while (piVar5 <= piVar4);
                }
                iVar3 = 0x204;
                piVar6 = piVar7;
            }
        }
code_r0x000131c8:
        piVar7 = piVar6;
        if (iVar3 != 0) goto code_r0x000131da;
    }
    if (iVar3 == 0) {
        *arg3 = piVar6[3];
        return 0;
    }
code_r0x000131fc:
    if (iVar3 != *0x15920) {
        *0x15920 = iVar3;
    }
    return iVar3;
}


/* fcn.000142e4 @ 0x142e4 */

int64_t fcn.000142e4(uint32_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00012dd8 @ 0x12dd8 */

int fcn.00012dd8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int aiStackX_8 [2];
    uint uStack_48;
    uint auStack_44 [3];
    
    iVar3 = 0x203;
    if (arg1 == 0) {
        iVar3 = 3;
    }
    else {
        if (0xf < arg2) {
            if ((*arg1 != 0x44504324) || (*(arg1 + 0xc) != arg3)) {
code_r0x00012e1e:
                iVar3 = 0x1fd;
                goto code_r0x00012f1e;
            }
            uVar2 = *(arg1 + 4);
            if (uVar2 - 1 < 0x100) {
                uVar5 = *(arg1 + 10);
                uVar4 = uVar5 + uVar2 * 0x18;
                if ((uVar4 <= (arg2 & 0xffffffffU)) && (uVar5 <= uVar4)) {
                    uVar4 = 0;
                    if (uVar2 != 0) {
                        do {
                            auStack_44[0] = 0;
                            uVar2 = uVar5 + arg1 + uVar4 * 0x18;
                            uStack_48 = 0x6e616d2e;
                            aiStackX_8[0] = arg3;
                            iVar1 = fcn.000142e4(uVar2,aiStackX_8,4);
                            if (((iVar1 == 0) && (iVar1 = fcn.000142e4(uVar2 + 4,&uStack_48,4), iVar1 == 0)) &&
                               (iVar1 = fcn.000142e4(uVar2 + 8,auStack_44,4), iVar1 == 0)) {
                                uVar2 = *(uVar5 + arg1 + 0xc + uVar4 * 0x18) & 0x1ffffff;
                                if (((arg2 & 0xffffffffU) < uVar2 + 0x80) || (uVar2 + 0x80 < uVar2))
                                goto code_r0x00012f19;
                                if (*(uVar2 + 0x1c + arg1) == 0x324e4d24) {
                                    *arg4 = uVar2;
                                    return 0;
                                }
                                goto code_r0x00012e1e;
                            }
                            uVar2 = uVar4 + 1;
                            uVar4 = uVar2;
                        } while (uVar2 < *(arg1 + 4));
                    }
                    goto code_r0x00012f1e;
                }
            }
        }
code_r0x00012f19:
        iVar3 = 0x1fc;
    }
code_r0x00012f1e:
    if (iVar3 != *0x15920) {
        *0x15920 = iVar3;
    }
    return iVar3;
}


/* fcn.000142dc @ 0x142dc */

void fcn.000142dc(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00012220(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102a0(arg1_00,arg1);
    }
    return;
}


/* fcn.00013d48 @ 0x13d48 */

void fcn.00013d48(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uchar in_stack_00000028;
    
    if ((*0x15928 != 0) || (iVar1 = (**(*0x15960 + 0x140))(0x145c8,0,0x15928), -1 < iVar1)) {
        (**(*0x15928 + 0x10))(arg1 & 0xffffffff,arg2,arg3 & 0xffffffff,arg4,in_stack_00000028);
    }
    return;
}


/* fcn.00013cd0 @ 0x13cd0 */

void fcn.00013cd0(int64_t arg1,int64_t arg2,uint32_t *arg3,int64_t arg4)

{
    int64_t iVar1;
    
    if ((*0x15928 != 0) || (iVar1 = (**(*0x15960 + 0x140))(0x145c8,0,0x15928), -1 < iVar1)) {
        (**(*0x15928 + 8))(arg1 & 0xffffffff,arg2 & 0xffffffff,arg3,arg4);
    }
    return;
}


/* fcn.00013624 @ 0x13624 */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_15h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h
//WARNING: Type propagation algorithm not settling

int fcn.00013624(int64_t arg1,uint32_t arg2)

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
            fcn.00014300(&uStackX_18,0,4);
            fcn.00014300(acStack_98,0,8);
            uStackX_18 = CONCAT31(CONCAT21(uStackX_18._2_2_,*(puVar2 + 0x12)),7);
            uVar4 = uStackX_18;
            uStackX_18._0_3_ = CONCAT12(1,uVar4);
            iVar1 = fcn.00013d48(*0x15924,&uStackX_18,4,0);
            if ((((iVar1 < 0) || (iVar1 = fcn.00013cd0(*0x15924,1,acStack_98,auStack_90), iVar1 < 0)) ||
                (acStack_98[0] != -0x79)) || (cStack_95 != '\0')) goto code_r0x000136ec;
        }
        *(puVar2 + 0x1d) = 0;
    }
code_r0x000136ec:
    *(puVar2 + 3) = 0;
    *(puVar2 + 0x12) = 0;
    uVar4 = *0x15924;
    if ((*0x15928 != 0) || (iVar1 = (**(*0x15960 + 0x140))(0x145c8,0,0x15928), -1 < iVar1)) {
        if (*0x145d8 != uVar4) {
            *0x145d8 = uVar4;
            iVar1 = (**(*0x15928 + 0x18))(uVar4);
            if (iVar1 < 0) {
                return 0x1c;
            }
        }
        fcn.00014300(auStack_a0,0,4);
        fcn.00014300(acStack_68,0,0x24);
        auStack_a0[0]._0_1_ = 4;
        uVar4 = 0;
        while (iVar1 = fcn.00013d48(*0x15924,auStack_a0,4,0), -1 < iVar1) {
            auStackX_10[0] = 0x24;
            iVar1 = fcn.00013cd0(*0x15924,1,acStack_68,auStackX_10);
            if (-1 < iVar1) {
                if (acStack_68[0] != -0x7c) {
                    return 0x1c;
                }
                fcn.00014300(&uStack_a8,0,4);
                uStack_a8._0_1_ = 5;
                uVar3 = 0;
                goto code_r0x00013803;
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
code_r0x00013803:
        uStack_a8._1_1_ = uVar3;
        iVar1 = fcn.00013d48(*0x15924,&uStack_a8,4,0);
        if (iVar1 < 0) {
            return 0x1c;
        }
        fcn.00014300(&uStack_88,0,0x1c);
        auStackX_10[0] = 0x1c;
        iVar1 = fcn.00013cd0(*0x15924,1,&uStack_88,auStackX_10);
        if (iVar1 < 0) {
            return 0x1c;
        }
        if ((uStack_88._2_1_ == '\0') && (iVar1 = fcn.000142e4(arg1,&uStack_84,0x10), iVar1 == 0)) {
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
code_r0x000138c8:
        *(puVar2 + 0x1d) = 1;
        return 0;
    }
    fcn.00014300(&uStackX_20,0,4);
    fcn.00014300(acStack_a4,0,4);
    uStackX_20._1_1_ = *(puVar2 + 0x12);
    uStackX_20._0_1_ = 6;
    uStackX_20._2_1_ = 1;
    iVar1 = fcn.00013d48(*0x15924,&uStackX_20,4,0);
    if (-1 < iVar1) {
        auStackX_10[0] = 4;
        iVar1 = fcn.00013cd0(*0x15924,1,acStack_a4,auStackX_10);
        if (((-1 < iVar1) && (acStack_a4[0] == -0x7a)) && ((uStack_a1 & 0xfd) == 0)) {
            uStackX_18 = 8;
            if (*(puVar2 + 3) != '\x01') {
                fcn.00014300(acStack_98,0,8);
                iVar1 = fcn.00013cd0(*0x15924,1,acStack_98,&uStackX_18);
                if (iVar1 < 0) {
                    return 0x20;
                }
            }
            goto code_r0x000138c8;
        }
    }
    return 0x17;
}


/* fcn.00010968 @ 0x10968 */

ulong * fcn.00010968(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    ulong *puVar2;
    ulong *puVar3;
    ulong *puVar4;
    uint64_t uVar5;
    uint8_t uVar6;
    
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar6 = 0;
    if ((arg3 != 0) && (puVar2 != arg2)) {
        puVar3 = arg2 + -1 + arg3;
        if ((arg2 < puVar2) && (puVar2 <= puVar3)) {
            puVar4 = puVar2 + arg3 + -1;
            uVar6 = 1;
            uVar5 = arg3;
        }
        else {
            uVar5 = arg3 & 7;
            puVar3 = arg2;
            puVar4 = puVar2;
            for (uVar1 = arg3 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
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


