// decompiled by r2ghidra: 1761_AMITSE.pe32
// functions: 336

/* entry0 @ 0x104e0 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.00010520(arg1,arg2);
    iVar1 = fcn.00010e98(arg1,arg2);
    if (iVar1 < 0) {
        fcn.00010908(arg1,arg2);
    }
    return iVar1;
}


/* fcn.00010520 @ 0x10520 */

//WARNING: Variable defined which should be unmapped: var_10h

void fcn.00010520(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *arg2_00;
    int64_t iVar7;
    uint32_t uVar8;
    ulong noname_0;
    ulong *puVar9;
    ulong *puStackX_8;
    int64_t *piStackX_10;
    ulong uStackX_18;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    uchar auStack_38 [16];
    int64_t var_10h;
    
    *0x36d88 = *(arg2 + 0x60);
    *0x36d98 = *(arg2 + 0x58);
    *0x36d80 = arg2;
    *0x36d90 = arg1;
    fcn.00010ae8();
    noname_0 = 0x34070;
    iVar5 = fcn.00010b18(0x34070);
    if (iVar5 == 0) {
        uVar6 = fcn.00010460();
        fcn.00010410();
        uVar3 = in(0x1808);
        fcn.00010390(noname_0,0x1808);
        while( true ) {
            iVar4 = in(0x1808);
            uVar8 = ((uVar3 & 0xffffff) + 0x16b) - iVar4;
            if ((uVar8 >> 0x17 & 1) != 0) break;
            func_0x00010380();
        }
        fcn.00010390(uVar8,0x1808);
        if ((uVar6 >> 9 & 1) == 0) {
            fcn.00010410();
        }
        else {
            fcn.00010400();
        }
    }
    if (*0x36da8 == NULL) {
        *0x431f0 = 0x2000;
        iVar5 = (**(*(arg2 + 0x60) + 0x40))(4);
        if (iVar5 < 0) {
            *0x36da8 = NULL;
        }
    }
    if ((*0x36db0 != NULL) || (iVar5 = (**(*0x36d88 + 0x140))(0x34020), -1 < iVar5)) {
        (***0x36db0)(*0x36db0);
    }
    fcn.000103a0(1,0,0,&puStackX_8);
    (**(*0x36d88 + 0x140))(0x33f80,0,0x36dc0);
    (**(*0x36d88 + 0x140))(0x33f60,0,0x36de0);
    (**(*0x36d88 + 0x140))(0x33eb0,0,0x36dd0);
    (**(*0x36d88 + 0x140))(0x34060,0,0x36dc8);
    (**(*0x36d88 + 0x140))(0x33f10,0,0x36dd8);
    iVar5 = (**(*0x36d88 + 0x140))(0x34020,0,&puStackX_8);
    *0x36de8 = '\0';
    if (-1 < iVar5) {
        uStackX_18 = 0;
        (**puStackX_8)(puStackX_8,0x36de8);
        if (*0x36de8 != '\0') {
            (*puStackX_8[1])(puStackX_8,&uStackX_18);
        }
    }
    *0x36df8 = 0x10000;
    if (*0x36df0 == NULL) {
        iVar5 = (**(*0x36d88 + 0x40))(6,0x10000,&piStackX_10);
        *0x36df0 = piStackX_10;
        if (iVar5 < 0) {
            *0x36df0 = NULL;
        }
        piStackX_10 = *0x36df0;
        if ((*0x36df0 == NULL) || (*0x36df8 < 0x38)) goto code_r0x000107b9;
    }
    uVar6 = *0x36df8;
    piVar2 = *0x36df0;
    iVar5 = *0x36df8 - 0x28;
    (*0x36df0)[2] = 0;
    piVar1 = piVar2 + 5;
    piVar2[1] = iVar5;
    *piVar2 = piVar1;
    piVar2[4] = piVar1;
    piVar2[3] = (uVar6 - 0x38) + piVar1;
code_r0x000107b9:
    (**(*0x36d98 + 0x18))(auStack_38,0);
    section..text(0x34080,auStack_38,0x10);
    fcn.00010954(0x34030,0x36e00);
    puStackX_8 = NULL;
    iVar5 = fcn.00010954(0x33e00,&puStackX_8);
    if (iVar5 < 0) {
        arg2_00 = fcn.00010b18(0x33e00);
    }
    else {
        arg2_00 = puStackX_8;
    }
    if (arg2_00 != NULL) {
        *0x36f38 = *(arg2_00 + 0x1c);
        *0x36f28 = ((*(arg2_00 + 2) - 0x28) / *(arg2_00 + 4)) * *(arg2_00 + 0x1c);
        iVar7 = fcn.00027614(*0x36f28);
        *0x36f40 = iVar7;
        if (iVar7 != 0) {
            puVar9 = arg2_00 + 5;
            *0x36f30 = *0x36f28 + iVar7;
            if (puVar9 < *(arg2_00 + 2) + arg2_00) {
                uVar6 = *0x36f38;
                do {
                    (**(*0x36d88 + 0x160))(iVar7,puVar9 + 1,uVar6);
                    uVar6 = *0x36f38;
                    puVar9 = puVar9 + *(arg2_00 + 4);
                    iVar7 = iVar7 + uVar6;
                } while (puVar9 < *(arg2_00 + 2) + arg2_00);
            }
            if ((iVar5 < 0) && (iVar5 = fcn.00027698(6,*(arg2_00 + 2),arg2_00), iVar5 != 0)) {
                (**(*0x36d88 + 0xc0))(0x33e00,iVar5);
            }
        }
    }
    return;
}


/* fcn.00010e98 @ 0x10e98 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_8h

int64_t fcn.00010e98(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    ulong *arg1_00;
    ulong uStackX_8;
    int64_t var_bp_20h;
    int64_t var_28h;
    int32_t var_bp_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_28h = 0;
    if (*0x37060 == 0) {
        *0x37050 = *(arg2 + 0x60);
        *0x37058 = *(arg2 + 0x58);
        *0x37060 = arg2;
    }
    *0x36d80 = *0x37060;
    *0x36d88 = *0x37050;
    *0x36d90 = arg1;
    *0x36d98 = *0x37058;
    cVar1 = fcn.00014edc();
    if (cVar1 == '\x01') {
        iVar2 = -0x7ffffffffffffffd;
    }
    else {
        iVar2 = (**(*0x37050 + 0x118))(arg1,0x34bd8,&uStackX_8,arg1,0,2,0xc5912ed9,0x1f233699);
        if ((-1 < iVar2) && (iVar2 = (**(*0x37050 + 0x140))(0x34b08,0,&var_bp_20h), -1 < iVar2)) {
            (**var_bp_20h)(var_bp_20h,uStackX_8,0,0x431d0);
        }
        *0x34170 = *0x35060;
        *0x34174 = *0x35064;
        *0x34178 = *0x35068;
        *0x3417c = *0x3506c;
        iVar2 = fcn.0001faf8();
        if (-1 < iVar2) {
            fcn.000112f4();
            fcn.0001652c();
            if (*0x431c0 != 0) {
                fcn.0001470c(0x431c0);
            }
            *0x431c0 = fcn.0001504c(0x50);
            *(*0x431c0 + 0x48) = 0;
            *(*0x431c0 + 0x49) = 0;
            *(*0x431c0 + 0x40) = 0;
            *(*0x431c0 + 0x38) = 0;
            fcn.00014868(0xffff0005,0x215d8);
            *0x36e38 = 0;
            fcn.00018abc();
            fcn.00012358();
            iVar2 = fcn.00016e3c();
            if (iVar2 < 0) {
                (**(*0x36d88 + 0x150))(0x36e28,0x33f90,0x340b0,0);
                uStackX_8 = *0x36e28;
                arg1_00 = &uStackX_8;
                (**(*0x36d88 + 0x150))(arg1_00,0x33db0,0x34090,0);
                fcn.00014464(arg1_00);
            }
        }
    }
    return iVar2;
}


/* fcn.00010908 @ 0x10908 */

void fcn.00010908(ulong noname_0,int64_t arg1)

{
    if (*0x36df0 != 0) {
        fcn.00010cdc();
        (**(*0x36d88 + 0x48))(*0x36df0);
    }
    if (*0x36da8 != 0) {
        (**(*(arg1 + 0x60) + 0x48))();
        *0x36da8 = 0;
    }
    return;
}


/* fcn.00010ae8 @ 0x10ae8 */

int64_t fcn.00010ae8(void)

{
    if (*0x36da0 == 0) {
        fcn.00010954(0x33fb0,0x36da0);
    }
    return *0x36da0;
}


/* fcn.00010954 @ 0x10954 */

ulong fcn.00010954(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x36d80;
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


/* fcn.00010b18 @ 0x10b18 */

void fcn.00010b18(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00010ae8();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00010b46:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00010b46;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010460 @ 0x10460 */

uint64_t fcn.00010460(void)

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


/* fcn.00010410 @ 0x10410 */

void fcn.00010410(void)

{
    return;
}


/* fcn.00010390 @ 0x10390 */

uint64_t fcn.00010390(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010382 @ 0x10382 */

void fcn.00010382(void)

{
    return;
}


/* fcn.00010400 @ 0x10400 */

void fcn.00010400(void)

{
    return;
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


/* section..text @ 0x102c0 */

int64_t section..text(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_00000014;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 145888 named .text
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


/* fcn.00027614 @ 0x27614 */

ulong fcn.00027614(int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x36d88 + 0x40))(4,arg1,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.00027698 @ 0x27698 */

int64_t fcn.00027698(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_20;
    
    iVar1 = (**(*0x36d88 + 0x40))(noname_0,arg1,&iStackX_20);
    if (iVar1 < 0) {
        iStackX_20 = 0;
    }
    if (((iStackX_20 != 0) && (arg1 != 0)) && (iStackX_20 != arg2)) {
        iStackX_20 = section..text(iStackX_20,arg2,arg1);
    }
    return iStackX_20;
}


/* fcn.00010cdc @ 0x10cdc */

void fcn.00010cdc(void)

{
    int64_t *piVar1;
    int64_t iVar2;
    
    piVar1 = *0x36df0;
    if (*0x36df0 != NULL) {
        if ((*0x36df0)[1] != 0) {
            fcn.00010320(**0x36df0,(*0x36df0)[1],0);
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


/* fcn.000272fc @ 0x272fc */

int64_t fcn.000272fc(int64_t arg1,uint32_t arg2,uint32_t arg3)

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


/* fcn.00027648 @ 0x27648 */

int64_t fcn.00027648(ulong noname_0,uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_00000014;
    int64_t arg2;
    int64_t aiStackX_18 [2];
    
    arg2 = CONCAT44(in_register_00000014,arg1);
    iVar1 = (**(*0x36d88 + 0x40))(4,arg2,aiStackX_18);
    if (iVar1 < 0) {
        aiStackX_18[0] = 0;
    }
    if ((aiStackX_18[0] != 0) && (arg2 != 0)) {
        aiStackX_18[0] = fcn.00010300(aiStackX_18[0],arg2);
    }
    return aiStackX_18[0];
}


/* fcn.00010300 @ 0x10300 */

int64_t fcn.00010300(int64_t arg1,int64_t arg2)

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


/* fcn.00014edc @ 0x14edc */

uint8_t fcn.00014edc(void)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    uint64_t uStackX_8;
    uint64_t uStackX_10;
    
    uVar3 = 0;
    uStackX_10 = 0;
    uStackX_8 = 0;
    iVar2 = fcn.00014804(0xffff0026,&uStackX_10,&uStackX_8);
    if (iVar2 != 0) {
        for (uVar4 = uStackX_10; uVar4 <= uStackX_8; uVar4 = uVar4 + 1) {
            uVar1 = (**(uVar4 * 8 + 0x35910))();
            uVar3 = uVar3 | uVar1;
        }
    }
    return uVar3;
}


/* fcn.0001faf8 @ 0x1faf8 */

int64_t fcn.0001faf8(void)

{
    int64_t iVar1;
    
    iVar1 = (**(*0x36d88 + 0x140))(0x34060,0,0x36dc8);
    if (-1 < iVar1) {
        iVar1 = (**(*0x36d88 + 0x140))(0x33f60,0,0x36de0);
        if (-1 < iVar1) {
            iVar1 = (**(*0x36d88 + 0x140))(0x33f80,0,0x36dc0);
            if (-1 < iVar1) {
                iVar1 = 0;
            }
        }
    }
    return iVar1;
}


/* fcn.000112f4 @ 0x112f4 */

void fcn.000112f4(void)

{
    char *pcVar1;
    int64_t iVar2;
    int64_t iVar3;
    char cVar4;
    char *pcVar5;
    int64_t iStackX_8;
    char *pcStackX_10;
    ushort uStack_18;
    ulong uStack_16;
    
    uStack_18 = 0x20;
    uStack_16 = 0;
    pcVar1 = fcn.0001ebc8(*0x431d0);
    if (pcVar1 != NULL) {
        cVar4 = *pcVar1;
        pcVar5 = pcVar1;
        pcStackX_10 = pcVar1;
        while (cVar4 != '\0') {
            iVar3 = 0;
            while ((cVar4 != '\0' && (cVar4 != ';'))) {
                iVar3 = iVar3 + 1;
                cVar4 = pcVar5[iVar3];
            }
            (**(*0x36d88 + 0x160))(&uStack_18,pcVar5,iVar3);
            *(&uStack_18 + iVar3) = 0;
            iVar2 = iVar3 + 1;
            if (pcVar5[iVar3] != ';') {
                iVar2 = iVar3;
            }
            pcVar5 = pcVar5 + iVar2;
            iVar3 = fcn.0001646c(&uStack_18);
            iStackX_8 = iVar3;
            fcn.0001fb70(*0x431d0,2,iVar3,0x350e0);
            fcn.0001fb70(*0x431d0,3,iVar3,0x35110);
            if (iVar3 != 0) {
                fcn.0001470c(&iStackX_8);
            }
            cVar4 = *pcVar5;
        }
        if (pcVar1 != NULL) {
            fcn.0001470c(&pcStackX_10);
        }
    }
    return;
}


/* fcn.0001652c @ 0x1652c */

ulong fcn.0001652c(void)

{
    ulong uVar1;
    ulong uVar2;
    
    uVar2 = 0x8000000000000009;
    if (*0x431d8 != 0) {
        fcn.0001470c(0x431d8);
    }
    *0x431d8 = fcn.0001504c(0xb71b04);
    if (*0x431d8 != 0) {
        if (*0x431c8 != 0) {
            fcn.0001470c(0x431c8);
        }
        uVar1 = 0xb71b04;
        *0x431c8 = fcn.000150a0(0xb71b04);
        if (*0x431c8 != 0) {
            fcn.000153c4(CONCAT71(uVar1 >> 8,7));
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.0001470c @ 0x1470c */

void fcn.0001470c(uint32_t *arg1)

{
    if ((arg1 != NULL) && (*arg1 != 0)) {
        (**(*0x36d88 + 0x48))();
        arg1[0] = 0;
        arg1[1] = 0;
    }
    return;
}


/* fcn.0001504c @ 0x1504c */

int64_t fcn.0001504c(int64_t arg1)

{
    int64_t aiStackX_10 [3];
    
    aiStackX_10[0] = 0;
    (**(*0x37050 + 0x40))(4,arg1,aiStackX_10);
    if (aiStackX_10[0] != 0) {
        (**(*0x37050 + 0x168))(aiStackX_10[0],arg1,0);
    }
    return aiStackX_10[0];
}


/* fcn.00014868 @ 0x14868 */

void fcn.00014868(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uStackX_18;
    uint64_t uStackX_20;
    
    uStackX_20 = 0;
    uStackX_18 = 0;
    iVar1 = fcn.00014804(noname_0,&uStackX_20,&uStackX_18);
    if (iVar1 != 0) {
        for (uVar2 = uStackX_20; uVar2 <= uStackX_18; uVar2 = uVar2 + 1) {
            (**(uVar2 * 8 + 0x35910))();
        }
        return;
    }
    //WARNING: Could not recover jumptable at 0x000148b8. Too many branches
    //WARNING: Treating indirect jump as call
    (*arg1)();
    return;
}


/* fcn.00018abc @ 0x18abc */

void fcn.00018abc(void)

{
    char cVar1;
    bool bVar2;
    ushort uVar3;
    char *pcVar4;
    uchar *arg1;
    ulong uVar5;
    uint32_t *puVar6;
    uchar *puVar7;
    char *pcVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    int64_t iVar14;
    int64_t iStackX_8;
    char *pcStackX_10;
    
    uVar12 = 0;
    iStackX_8 = 0;
    iVar14 = 0;
    pcVar4 = fcn.000113fc(0x355c0,0x33ce0,0,&iStackX_8);
    if (pcVar4 != NULL) {
        bVar2 = false;
        pcVar8 = pcVar4;
        do {
            cVar1 = *pcVar8;
            if (cVar1 == ';') {
                uVar11 = uVar12 + 1;
                if (!bVar2) {
                    uVar11 = uVar12;
                }
                bVar2 = false;
                uVar12 = uVar11;
            }
            else {
                bVar2 = true;
            }
            pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        if (bVar2) {
            uVar12 = uVar12 + 1;
        }
    }
    pcStackX_10 = pcVar4;
    if (*0x43188 != NULL) {
        uVar11 = 0;
        if (*0x43180 != 0) {
            iVar9 = 0;
            iVar13 = *0x43188;
            do {
                if (*(iVar9 + iVar13) != 0) {
                    fcn.0001470c(iVar9 + iVar13);
                    iVar13 = *0x43188;
                }
                puVar6 = iVar13 + 0x10 + iVar9;
                if (*puVar6 != 0) {
                    fcn.0001470c(puVar6);
                    iVar13 = *0x43188;
                }
                puVar6 = iVar13 + 8 + iVar9;
                if (*puVar6 != 0) {
                    fcn.0001470c(puVar6);
                    iVar13 = *0x43188;
                }
                uVar11 = uVar11 + 1;
                iVar9 = iVar9 + 0x20;
            } while (uVar11 < *0x43180);
        }
        fcn.0001470c(0x43188);
    }
    if ((iStackX_8 == 0) || (pcVar4 == NULL)) {
        pcVar4 = fcn.000113fc(0x355e8,0x33ce0,0,&iStackX_8);
        pcStackX_10 = pcVar4;
        if (iStackX_8 == 0) {
            *0x43188 = fcn.0001504c(0x20);
            if (*0x43188 == NULL) {
                return;
            }
            uVar5 = fcn.000163dc();
            **0x43188 = uVar5;
            uVar5 = fcn.00015630(0x35610);
            (*0x43188)[1] = uVar5;
            *0x43180 = 1;
            iVar14 = fcn.0001ec60(-1,1,(*0x43188)[1]);
            uVar3 = fcn.0001d224(*0x431d0,iVar14);
            *(*0x43188 + 3) = uVar3;
            (*0x43188)[2] = iVar14;
            return;
        }
        uVar12 = 1;
    }
    *0x43188 = fcn.0001504c(uVar12 << 5);
    if (*0x43188 != NULL) {
        if (uVar12 != 0) {
            iVar13 = 0;
            uVar11 = uVar12;
            do {
                uVar10 = 0;
                pcVar8 = pcVar4;
                do {
                    cVar1 = *pcVar8;
                    if (cVar1 == ';') break;
                    uVar10 = uVar10 + 1;
                    pcVar8 = pcVar8 + 1;
                } while (cVar1 != '\0');
                arg1 = fcn.0001504c(uVar10 + 1);
                if (arg1 != NULL) {
                    iVar14 = 0;
                    puVar7 = arg1;
                    do {
                        iVar14 = iVar14 + 1;
                        *puVar7 = puVar7[pcVar4 - arg1];
                        puVar7 = puVar7 + 1;
                    } while (puVar7 - arg1 < uVar10);
                }
                *(iVar13 + *0x43188) = arg1;
                iVar9 = fcn.0001646c(arg1);
                *(iVar13 + 8 + *0x43188) = iVar9;
                iVar9 = fcn.0001ec60(-1,1,iVar9);
                uVar3 = fcn.0001d224(*0x431d0,iVar9);
                pcVar4 = pcVar4 + iVar14 + 1;
                *(iVar13 + 0x18 + *0x43188) = uVar3;
                *(iVar13 + 0x10 + *0x43188) = iVar9;
                iVar13 = iVar13 + 0x20;
                uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
        }
        *0x43180 = uVar12;
        fcn.0001470c(&pcStackX_10);
    }
    return;
}


/* fcn.00012358 @ 0x12358 */

void fcn.00012358(void)

{
    int64_t iVar1;
    int64_t *arg1;
    int64_t var_10h;
    int64_t var_18h;
    int32_t var_10h_2;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = (**(*0x36d88 + 0x148))(0x36e28,0x33f90,0x340b0,0);
    if (-1 < iVar1) {
        var_10h = *0x36e28;
        (**(*0x36d88 + 0x148))(&var_10h,0x33d10,0x340a8,0);
        var_18h = *0x36e28;
        arg1 = &var_18h;
        (**(*0x36d88 + 0x148))(arg1,0x33db0,0x34090,0);
        var_10h = *0x36e28;
        var_10h_2 = 0x4311edc0;
        var_ch = 0x46d46054;
        var_8h = 0x3e89409e;
        var_4h = -0x3303ad57;
        fcn.00014464(arg1);
        (**(*0x36d88 + 0x148))(&var_10h,&var_10h_2,0x34140,0);
    }
    return;
}


/* fcn.00014464 @ 0x14464 */

void fcn.00014464(int64_t arg1)

{
    int64_t iVar1;
    int64_t iStackX_8;
    int64_t var_18h;
    int64_t var_bp_20h;
    int64_t var_10h;
    int32_t var_bp_8h;
    int32_t var_4h;
    
    iStackX_8 = 0;
    var_10h._0_4_ = 0x4311edc0;
    var_10h._4_4_ = 0x46d46054;
    var_bp_8h = 0x3e89409e;
    var_4h = -0x3303ad57;
    *0x37050 = *0x36d88;
    iVar1 = (**(*0x36d88 + 0xb0))(2,&var_10h,0,&iStackX_8,&var_18h);
    if (iVar1 == -0x7ffffffffffffffb) {
        var_18h = fcn.0001504c(iStackX_8);
        if (var_18h == 0) {
            return;
        }
        iVar1 = (**(*0x36d88 + 0xb0))(2,&var_10h,0,&iStackX_8,&var_18h);
    }
    if ((-1 < iVar1) && (iVar1 = (**(*0x36d88 + 0x140))(&var_10h,0,&var_bp_20h), -1 < iVar1)) {
        (**(*0x36d88 + 0x150))(var_18h,&var_10h,var_bp_20h,0);
    }
    return;
}


/* fcn.00016e3c @ 0x16e3c */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00016e3c(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uStackX_8;
    ulong uStackX_10;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    uint uStack_28;
    uint uStack_24;
    uint uStack_20;
    uint uStack_1c;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_20h = 0;
    piVar2 = 0x342f0;
    var_28h = 0;
    uStack_28 = 0x2a534210;
    uStack_24 = 0x41d89280;
    uStack_20 = 0xdaca79ae;
    uStack_1c = 0x27b1a201;
    iVar1 = *0x342f0;
    while (iVar1 != 0) {
        iVar1 = (**(*0x36d88 + 0x50))(0x200,8,0x16fa8,*piVar2,*piVar2 + 8);
        if (-1 < iVar1) {
            iVar1 = *piVar2;
            iVar1 = (**(*0x36d88 + 0xa8))(*(iVar1 + 0x18),*(iVar1 + 8),iVar1 + 0x28);
            if (-1 < iVar1) {
                (**(*0x36d88 + 0x68))(*(*piVar2 + 8));
            }
        }
        piVar2 = piVar2 + 1;
        iVar1 = *piVar2;
    }
    iVar1 = (**(*0x36d88 + 0x50))(0x200,8,0x15048,0,&uStackX_8);
    if ((-1 < iVar1) && (iVar1 = (**(*0x36d88 + 0xa8))(&uStack_28,uStackX_8,&var_20h), -1 < iVar1)) {
        (**(*0x36d88 + 0x68))(uStackX_8);
    }
    iVar1 = (**(*0x36d88 + 0x50))(0x200,8,0x16e08,0,&uStackX_10);
    if ((-1 < iVar1) && (iVar1 = (**(*0x36d88 + 0xa8))(0x33f50,uStackX_10,&var_28h), -1 < iVar1)) {
        (**(*0x36d88 + 0x68))(uStackX_10);
    }
    return iVar1;
}


/* fcn.00015278 @ 0x15278 */

void fcn.00015278(int64_t arg1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    (**(*0x36d88 + 0x80))(auStackX_10,arg1,0,0);
    (**(*0x36d88 + 0x90))(auStackX_10[0],arg1,0);
    return;
}


/* fcn.00020698 @ 0x20698 */

int64_t fcn.00020698(void)

{
    char *pcVar1;
    char cVar2;
    int64_t iVar3;
    char *pcVar4;
    int64_t var_10h;
    int32_t var_10h_2;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    pcVar1 = *0x36ec0;
    var_10h = 0;
    iVar3 = 0x46a6;
    var_10h_2 = -0x1f9423;
    var_ch = 0x46a66107;
    var_8h = -0x63a54d85;
    var_4h = 0x5c27c57e;
    if (*0x36ec0 != NULL) {
        if ((*0x36ec0)[0x26] != 0) {
            iVar3 = 0x38;
            (*0x36ec0)[0x26] = (*0x36ec0)[0x26] & 0xfe;
            cVar2 = '\0';
            pcVar1[9] = '\0';
            pcVar4 = *0x36ec0;
            do {
                cVar2 = cVar2 + *pcVar4;
                pcVar4 = pcVar4 + 1;
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            pcVar1[9] = -cVar2;
        }
        iVar3 = (**(*0x36d88 + 0x140))(&var_10h_2,0,&var_10h);
        if (iVar3 == 0) {
            iVar3 = (**(var_10h + 8))(var_10h,*0x36ec8);
            if (iVar3 == 0) {
                *0x36ec8 = 0;
                iVar3 = (**var_10h)(var_10h,*0x36ec0,0x38,0x36ec8);
            }
        }
    }
    return iVar3;
}


/* fcn.00028124 @ 0x28124 */

int64_t fcn.00028124(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    if (*0x37068 == '\0') {
        iVar1 = fcn.0002809c();
        if (-1 < iVar1) {
            iVar1 = (***0x37080)(arg1 & 0xffffffffU,arg2 & 0xffffffffU,0,0,0);
        }
    }
    else if (*0x37070 == NULL) {
        iVar1 = -0x7ffffffffffffff2;
    }
    else {
        iVar1 = (***0x37070)(*0x37070,arg1 & 0xffffffffU,arg2 & 0xffffffffU,0,0,0);
    }
    return iVar1;
}


/* fcn.0001c390 @ 0x1c390 */

int64_t fcn.0001c390(void)

{
    char *pcVar1;
    char cVar2;
    int64_t iVar3;
    char *pcVar4;
    ulong *apuStackX_8 [4];
    uint uStack_18;
    uint uStack_14;
    uint uStack_10;
    uint uStack_c;
    
    if (*0x43190 != 0) {
        fcn.0001470c(0x43190);
    }
    *0x36ef2 = 0;
    for (; *0x42350 != NULL; *0x42350 = (*0x42350)[1]) {
        (**(*0x36d88 + 0x70))(*(**0x42350 + 0x28));
        fcn.0001470c(**0x42350 + 0x30);
        fcn.0001470c(**0x42350 + 0x48);
    }
    fcn.000114c0();
    pcVar1 = *0x36ec0;
    apuStackX_8[0] = NULL;
    iVar3 = 0x46a6;
    uStack_18 = 0xffe06bdd;
    uStack_14 = 0x46a66107;
    uStack_10 = 0x9c5ab27b;
    uStack_c = 0x5c27c57e;
    if (*0x36ec0 != NULL) {
        if ((*0x36ec0)[0x26] != 0) {
            iVar3 = 0x38;
            (*0x36ec0)[0x26] = (*0x36ec0)[0x26] & 0xfe;
            cVar2 = '\0';
            pcVar1[9] = '\0';
            pcVar4 = *0x36ec0;
            do {
                cVar2 = cVar2 + *pcVar4;
                pcVar4 = pcVar4 + 1;
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            pcVar1[9] = -cVar2;
        }
        iVar3 = (**(*0x36d88 + 0x140))(&uStack_18,0,apuStackX_8);
        if (iVar3 == 0) {
            iVar3 = (*apuStackX_8[0][1])(apuStackX_8[0],*0x36ec8);
            if (iVar3 == 0) {
                *0x36ec8 = 0;
                iVar3 = (**apuStackX_8[0])(apuStackX_8[0],*0x36ec0,0x38,0x36ec8);
            }
        }
    }
    return iVar3;
}


/* fcn.000195f0 @ 0x195f0 */

int16_t fcn.000195f0(void)

{
    int16_t iVar1;
    int16_t iVar2;
    int16_t *piVar3;
    int64_t iVar4;
    
    iVar2 = 0;
    if (*0x43178 != 0) {
        piVar3 = *0x43170 + 0x38;
        iVar4 = *0x43178;
        do {
            if (((**(piVar3 + -0x14) & 0x7f) == 5) && ((*(piVar3 + -0x14))[1] == 1)) {
                iVar1 = *piVar3;
            }
            else {
                iVar1 = 1;
            }
            piVar3 = piVar3 + 0x24;
            iVar2 = iVar2 + iVar1;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
    }
    return iVar2;
}


/* fcn.000113fc @ 0x113fc */

int64_t fcn.000113fc(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t *arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint auStackX_18 [4];
    int64_t aiStack_28 [2];
    
    auStackX_18[0] = 0;
    if (arg3 != 0) {
        auStackX_18[0] = *arg3;
    }
    iVar1 = (**(*0x36d98 + 0x48))(arg1,arg2,auStackX_18,arg4,0);
    if ((iVar1 == -0x7ffffffffffffffb) && (iVar1 = fcn.0001504c(*arg4 + 1), iVar1 != 0)) {
        aiStack_28[0] = iVar1;
        iVar2 = (**(*0x36d98 + 0x48))(arg1,arg2,auStackX_18,arg4,iVar1);
        if (iVar2 < 0) {
            fcn.0001470c(aiStack_28);
            iVar1 = aiStack_28[0];
        }
        if (arg3 != 0) {
            *arg3 = auStackX_18[0];
        }
        return iVar1;
    }
    return 0;
}


/* fcn.000150a0 @ 0x150a0 */

ulong fcn.000150a0(int64_t arg1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    (**(*0x37050 + 0x40))(4,arg1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.000188f8 @ 0x188f8 */

int64_t fcn.000188f8(int64_t arg1,ulong noname_1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    int16_t *piVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    char cVar6;
    int16_t *piVar7;
    uint64_t uVar8;
    int64_t iStackX_20;
    uint32_t auStack_28 [4];
    
    auStack_28[0] = 0;
    auStack_28[1] = 0;
    cVar6 = arg2;
    iStackX_20 = 0;
    if (*0x43170 != NULL) {
        if (cVar6 == '\0') {
            uVar8 = *0x43178;
            piVar3 = *0x43170;
        }
        else {
            auStack_28[0] = 0;
            auStack_28[1] = 0;
            iStackX_20 = fcn.000113fc(0x35260,0x33ce0,0,auStack_28);
            if (iStackX_20 == 0) {
                return 0;
            }
            uVar5 = 0;
            uVar8 = *0x43178;
            piVar3 = *0x43170;
            if (*0x43178 != 0) {
                do {
                    if (*0x43138 == *(iStackX_20 + uVar5 * 2)) {
                        uVar4 = 0;
                        if (uVar8 != 0) {
                            piVar7 = piVar3;
                            do {
                                uVar2 = 0;
                                do {
                                    if (*(iStackX_20 + uVar2 * 2) == *piVar7) break;
                                    uVar2 = uVar2 + 1;
                                } while (uVar2 < uVar8);
                                if (uVar8 <= uVar2) {
                                    *(iStackX_20 + uVar5 * 2) = piVar3[uVar4 * 0x24];
                                    uVar8 = *0x43178;
                                    piVar3 = *0x43170;
                                    break;
                                }
                                uVar4 = uVar4 + 1;
                                piVar7 = piVar7 + 0x24;
                            } while (uVar4 < uVar8);
                        }
                    }
                    uVar5 = uVar5 + 1;
                } while (uVar5 < uVar8);
            }
        }
        iVar1 = iStackX_20;
        uVar4 = 0;
        uVar5 = 0;
        if (uVar8 != 0) {
            do {
                piVar7 = piVar3;
                if ((cVar6 == '\0') || (piVar3 = fcn.00018888(*(iVar1 + uVar5 * 2)), piVar3 != NULL)) {
                    if (((**(piVar3 + 8) & 0x7f) == 5) && ((*(piVar3 + 8))[1] == 1)) {
                        if ((uVar4 <= (arg1 & 0xffffU)) && ((arg1 & 0xffffU) < piVar3[0x1c] + uVar4)) {
                            if (cVar6 != '\0') {
                                fcn.0001470c(&iStackX_20);
                            }
                            if ((*(piVar3 + 2) & 8) == 0) {
                                return *(piVar3 + 0x20) + 2 + ((arg1 & 0xffffU) - uVar4) * 0x68;
                            }
                            return 0;
                        }
                        uVar4 = uVar4 + piVar3[0x1c];
                    }
                    else {
                        if ((arg1 & 0xffffU) == uVar4) {
                            if (cVar6 != '\0') {
                                fcn.0001470c(&iStackX_20);
                            }
                            if ((*(piVar3 + 2) & 8) == 0) {
                                return *(piVar3 + 4);
                            }
                            return 0;
                        }
                        uVar4 = uVar4 + 1;
                    }
                }
                uVar5 = uVar5 + 1;
                piVar3 = piVar7 + 0x24;
            } while (uVar5 < uVar8);
        }
    }
    return 0;
}


/* fcn.00014044 @ 0x14044 */

void fcn.00014044(void)

{
    if (*0x36e40 != 0) {
        (**(*0x36d88 + 0x58))(*0x36e40,0,0);
        fcn.0001e488(0x36e40);
    }
    return;
}


/* fcn.0001e488 @ 0x1e488 */

ulong fcn.0001e488(int64_t arg1)

{
    if ((arg1 != 0) && (*arg1 != 0)) {
        (**(*0x36d88 + 0x70))();
        *arg1 = 0;
    }
    return 0;
}


/* fcn.0001ebc8 @ 0x1ebc8 */

ulong fcn.0001ebc8(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    int64_t iStackX_10;
    ulong auStackX_18 [2];
    
    fcn.0001faf8();
    iStackX_10 = 0x1000;
    uVar1 = fcn.000150a0(0x1000);
    auStackX_18[0] = uVar1;
    iVar2 = (**(*0x36dc0 + 0x18))(*0x36dc0,arg1,uVar1,&iStackX_10);
    if (iVar2 == -0x7ffffffffffffffb) {
        fcn.0001470c(auStackX_18);
        uVar1 = fcn.000150a0(iStackX_10);
        iVar2 = (**(*0x36dc0 + 0x18))(*0x36dc0,arg1,uVar1,&iStackX_10);
    }
    if (iVar2 < 0) {
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.0001646c @ 0x1646c */

void fcn.0001646c(int64_t arg1)

{
    char cVar1;
    uint8_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar4 = 0;
    cVar1 = *arg1;
    iVar3 = iVar4;
    while (cVar1 != '\0') {
        iVar3 = iVar3 + 1;
        cVar1 = *(iVar3 + arg1);
    }
    iVar3 = fcn.000150a0(iVar3 * 2 + 2);
    if (iVar3 != 0) {
        uVar2 = *arg1;
        while (uVar2 != 0) {
            *(iVar3 + iVar4 * 2) = uVar2;
            iVar4 = iVar4 + 1;
            uVar2 = *(iVar4 + arg1);
        }
        *(iVar3 + iVar4 * 2) = 0;
    }
    return;
}


/* fcn.0001fb70 @ 0x1fb70 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

int16_t fcn.0001fb70(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int16_t aiStack_38 [4];
    ulong uStack_30;
    int16_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    
    aiStack_38[0] = -1;
    uStack_30 = 0;
    iVar1 = fcn.0001faf8();
    if (iVar1 < 0) {
        return -1;
    }
    if (arg4 == 0) {
        return -1;
    }
    if (arg3 == 0) {
        return -1;
    }
    iVar1 = fcn.000164d0(arg3);
    _var_20h = iVar1;
    var_18h = fcn.0001ebc8(arg1);
    if (var_18h == NULL) {
        return -1;
    }
    if (*var_18h != '\0') {
        uStack_30 = fcn.000109b4(var_18h,0,iVar1,0);
        if (arg2 == 0) {
            iVar1 = (***0x36dc0)(*0x36dc0,arg1,aiStack_38,uStack_30,0,arg4,0);
        }
        else {
            iVar1 = (*(*0x36dc0)[2])(*0x36dc0,arg1,arg2 & 0xffff,uStack_30,arg4,0);
            aiStack_38[0] = arg2;
        }
        if (-1 < iVar1) goto code_r0x0001fc55;
    }
    aiStack_38[0] = -1;
code_r0x0001fc55:
    fcn.0001470c(&var_20h);
    fcn.0001470c(&var_18h);
    fcn.0001470c(&uStack_30);
    return aiStack_38[0];
}


/* fcn.00016d20 @ 0x16d20 */

void fcn.00016d20(void)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int iVar5;
    int64_t iStackX_8;
    int64_t iStackX_10;
    
    puVar1 = *(*0x36d80 + 0x40);
    if (puVar1 != NULL) {
        (**puVar1)(puVar1,0);
        iVar2 = *0x34160;
        iVar4 = *0x34158;
        iVar5 = 0;
        if (0 < **(*(*0x36d80 + 0x40) + 0x48)) {
            do {
                iVar3 = (**(*(*0x36d80 + 0x40) + 0x18))(*(*0x36d80 + 0x40),iVar5,&iStackX_8,&iStackX_10);
                if (((-1 < iVar3) && (iVar2 == iStackX_8)) && (iVar4 == iStackX_10)) break;
                iVar5 = iVar5 + 1;
            } while (iVar5 < **(*(*0x36d80 + 0x40) + 0x48));
        }
        iVar4 = (**(*(*0x36d80 + 0x40) + 0x20))(*(*0x36d80 + 0x40),iVar5);
        if ((iVar4 < 0) && (iVar4 = (**(*(*0x36d80 + 0x40) + 0x20))(*(*0x36d80 + 0x40),0), -1 < iVar4)) {
            *0x34158 = 0x18;
            *0x34160 = 0x50;
        }
    }
    return;
}


/* fcn.000114c0 @ 0x114c0 */

void fcn.000114c0(void)

{
    int64_t iVar1;
    uint auStackX_8 [8];
    
    auStackX_8[0] = 0;
    if (*0x36e60 != 0) {
        iVar1 = *(*(*0x36e60 + 0x18) + 8);
        (**(*0x36e60 + 0x10))(*0x36e60,auStackX_8,0,0,0,0,0,*(iVar1 + 4),*(iVar1 + 8),0);
    }
    return;
}


/* fcn.00015418 @ 0x15418 */

void fcn.00015418(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    fcn.000153c4(arg1);
    iVar1 = *(*0x36d80 + 0x40);
    if (iVar1 != 0) {
        (**(iVar1 + 0x40))(iVar1,0);
        (**(*(*0x36d80 + 0x40) + 0x28))(*(*0x36d80 + 0x40),arg1 & 0xff);
        (**(*(*0x36d80 + 0x40) + 0x30))(*(*0x36d80 + 0x40));
    }
    uVar2 = *0x34158 - 1;
    if (*0x34190 == 0xffff) {
        *0x34190 = uVar2;
    }
    *0x34198 = 0;
    if (*0x34190 < uVar2) {
        *0x34190 = uVar2;
    }
    return;
}


/* fcn.000153c4 @ 0x153c4 */

void fcn.000153c4(int64_t arg1)

{
    int64_t iVar1;
    uint *puVar2;
    unkbyte7 in_R8;
    
    if (*0x431c8 != NULL) {
        **0x431c8 = 0x54434153;
        fcn.00033b7e(*0x431c8 + 1,4000000,CONCAT71(in_R8,arg1));
        puVar2 = *0x431c8 + 0xf4241;
        for (iVar1 = 4000000; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar2 = 0x20;
            puVar2 = puVar2 + 2;
        }
    }
    return;
}


/* fcn.00033b7e @ 0x33b7e */

int64_t fcn.00033b7e(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00011a30 @ 0x11a30 */

void fcn.00011a30(void)

{
    int16_t iVar1;
    int16_t *piVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int16_t aiStack_78 [56];
    
    uVar6 = 0;
    if (0 < *0x36e0c) {
        uVar7 = *0x36e0c;
        piVar5 = *0x431e8;
        do {
            piVar2 = *piVar5;
            uVar8 = uVar6;
            if (*piVar2 != 0) {
                do {
                    piVar2 = piVar2 + 1;
                    uVar8 = uVar8 + 1;
                } while (*piVar2 != 0);
                if (0x1c < uVar8) {
                    fcn.000119c4(aiStack_78,0x3523c,0x1c);
                    fcn.000119c4(aiStack_78,*piVar5,0x19);
                    piVar2 = aiStack_78;
                    uVar4 = uVar6;
                    iVar3 = 0;
                    iVar1 = aiStack_78[0];
                    while (iVar1 != 0) {
                        piVar2 = piVar2 + 1;
                        uVar4 = uVar4 + 1;
                        iVar3 = uVar4;
                        iVar1 = *piVar2;
                    }
                    piVar2 = aiStack_78;
                    uVar4 = uVar6;
                    iVar1 = aiStack_78[0];
                    while (iVar1 != 0) {
                        piVar2 = piVar2 + 1;
                        uVar4 = uVar4 + 1;
                        iVar1 = *piVar2;
                    }
                    fcn.000119c4(aiStack_78 + uVar4,0x35240,0x1c - iVar3);
                    fcn.000119c4(*piVar5,0x3523c,uVar8);
                    fcn.000119c4(*piVar5,aiStack_78,0x1c);
                }
            }
            piVar5 = piVar5 + 2;
            uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
    }
    return;
}


/* fcn.00015958 @ 0x15958 */

void fcn.00015958(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    uint16_t uVar2;
    int16_t *piVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint in_register_00000014;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    unkbyte7 Var9;
    char cVar10;
    
    cVar10 = arg4;
    Var9 = arg3 >> 8;
    if (arg3 != 0) {
        uVar7 = 0;
        arg1 = *0x34160 * CONCAT44(in_register_00000014,arg2) + arg1;
        if (CONCAT44(in_register_00000014,arg2) < *0x34158) {
            iVar1 = *arg3;
            piVar3 = arg3;
            uVar6 = uVar7;
            while (iVar1 != 0) {
                piVar3 = piVar3 + 1;
                uVar6 = uVar6 + 1;
                iVar1 = *piVar3;
            }
            uVar4 = fcn.0001fc98(arg3);
            if ((uVar6 != 0) && (uVar4 / 0x13 != 0)) {
                if (cVar10 != '\0') {
                    fcn.00033b7e(*0x431c8 + 4 + arg1,uVar4 / 0x13,CONCAT71(Var9,cVar10));
                }
                if (uVar6 != 0) {
                    iVar8 = arg1 * 2 + 0x3d0904;
                    do {
                        uVar2 = *(arg3 + uVar7 * 2);
                        if (uVar2 == 10) {
                            return;
                        }
                        if (uVar2 - 0xc < 2) {
                            return;
                        }
                        if (uVar2 - 0x2028 < 2) {
                            return;
                        }
                        if (1 < uVar2 + 0x10) {
                            *(iVar8 + *0x431c8) = uVar2;
                            if (cVar10 != '\0') {
                                *(*0x431c8 + 4 + arg1) = cVar10;
                            }
                            iVar5 = fcn.0001d1e4(*(arg3 + uVar7 * 2));
                            if (iVar5 == 1) {
                                arg1 = arg1 + 2;
                                iVar8 = iVar8 + 4;
                            }
                            else {
                                arg1 = arg1 + 1;
                                iVar8 = iVar8 + 2;
                            }
                        }
                        uVar7 = uVar7 + 1;
                    } while (uVar7 < uVar6);
                }
            }
        }
    }
    return;
}


/* fcn.0001c0a4 @ 0x1c0a4 */

void fcn.0001c0a4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint *puVar3;
    uint *arg3_00;
    uint64_t uVar4;
    uint64_t uVar5;
    uint *puStackX_20;
    
    if ((arg4 != 0) && (arg3_00 = fcn.0001504c(arg3 * 2 + 0xc), arg3_00 != NULL)) {
        uVar5 = arg4 + -1 + arg2;
        uVar1 = arg3 - 1;
        uVar4 = 1;
        uVar2 = uVar1;
        puVar3 = arg3_00;
        if (1 < uVar1) {
            while( true ) {
                uVar4 = uVar1;
                if (uVar2 - 1 == 0) break;
                *(puVar3 + 2) = 0x2500;
                uVar2 = uVar2 - 1;
                puVar3 = puVar3 + 2;
            }
        }
        *arg3_00 = 0x250c;
        *(arg3_00 + uVar4 * 2) = 0x2510;
        puStackX_20 = arg3_00;
        fcn.00015958(arg1,arg2,arg3_00,0);
        *arg3_00 = 0x2514;
        *(arg3_00 + uVar4 * 2) = 0x2518;
        fcn.00015958(arg1,uVar5,arg3_00,0);
        *arg3_00 = 0x2502;
        while (arg2 = arg2 + 1, arg2 < uVar5) {
            fcn.00015958(arg1,arg2,arg3_00,0);
            fcn.00015958(arg3 + -1 + arg1,arg2,arg3_00,0);
        }
        fcn.0001470c(&puStackX_20);
    }
    return;
}


/* fcn.0001ec60 @ 0x1ec60 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.0001ec60(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    char *arg1_00;
    char *pcVar2;
    int64_t iVar3;
    int64_t iStackX_20;
    int64_t var_38h;
    char *pcStack_38;
    ulong uStack_30;
    int64_t var_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    
    iVar3 = 0;
    iStackX_20 = 0;
    uStack_30 = 0;
    iVar1 = fcn.0001faf8();
    if (iVar1 < 0) {
code_r0x0001ec9d:
        iVar3 = 0;
    }
    else {
        if (arg3 == 0) {
            if (*0x43100 == 0) {
                arg1_00 = fcn.000113fc(0x355e8,0x33ce0,0,&uStack_30);
                pcStack_38 = arg1_00;
                if (arg1_00 != NULL) {
                    (**(*0x36d88 + 0x168))(0x43100,0x28);
                    (**(*0x36d88 + 0x160))(0x43100,arg1_00,uStack_30);
                    goto code_r0x0001ed57;
                }
            }
            else {
                arg1_00 = fcn.0001504c(0x28);
                pcStack_38 = arg1_00;
                if (arg1_00 != NULL) {
                    fcn.00027364(arg1_00,0x14,0x43100);
                    goto code_r0x0001ed57;
                }
            }
code_r0x0001edbf:
            iVar1 = -0x7ffffffffffffff2;
        }
        else {
            arg1_00 = fcn.000164d0(arg3);
            pcStack_38 = arg1_00;
code_r0x0001ed57:
            if (arg1_00 == NULL) goto code_r0x0001edbf;
            if (arg1 == -1) {
                arg1 = *0x431d0;
            }
            iVar1 = fcn.00027af8(arg1,arg2 & 0xffff,arg1_00,&iStackX_20);
            iVar3 = 0;
            if (iVar1 == -0x7ffffffffffffffe) {
                iVar3 = fcn.0001504c(2);
                if (iVar3 == 0) goto code_r0x0001ec9d;
                iVar1 = fcn.00027af8(arg1,arg2 & 0xffff,arg1_00,&iStackX_20);
            }
        }
        if ((iVar1 < 0) && (iStackX_20 == 0)) {
            fcn.0001470c(&pcStack_38);
            arg1_00 = fcn.000163dc();
            iVar1 = arg1;
            if (arg1 == -1) {
                iVar1 = *0x431d0;
            }
            pcStack_38 = arg1_00;
            iVar1 = (**(*0x36dc0 + 8))(*0x36dc0,arg1_00,iVar1,arg2 & 0xffff,iVar3,&iStackX_20,0);
            if ((-1 < iVar1) || (iStackX_20 != 0)) {
code_r0x0001eec9:
                if (iVar1 == -0x7ffffffffffffffb) {
                    iVar3 = fcn.0001504c(iStackX_20);
                    if (iVar3 == 0) goto code_r0x0001ec9d;
                    iVar1 = arg1;
                    if (arg1 == -1) {
                        iVar1 = *0x431d0;
                    }
                    iVar1 = (**(*0x36dc0 + 8))(*0x36dc0,arg1_00,iVar1,arg2 & 0xffff,iVar3,&iStackX_20,0);
                    if (-1 < iVar1) goto code_r0x0001ef6b;
                }
                goto code_r0x0001ef28;
            }
            pcVar2 = 0x35604;
            for (; (*arg1_00 != '\0' && (*arg1_00 == *pcVar2)); arg1_00 = arg1_00 + 1) {
                pcVar2 = pcVar2 + 1;
            }
            if (*arg1_00 != *pcVar2) {
                fcn.0001470c(&pcStack_38);
                arg1_00 = fcn.000163dc();
                iVar1 = arg1;
                if (arg1 == -1) {
                    iVar1 = *0x431d0;
                }
                pcStack_38 = arg1_00;
                iVar1 = (**(*0x36dc0 + 8))(*0x36dc0,arg1_00,iVar1,arg2 & 0xffff,iVar3,&iStackX_20,0);
                if ((-1 < iVar1) || (iStackX_20 != 0)) goto code_r0x0001eec9;
            }
        }
        else {
code_r0x0001ef28:
            iVar3 = fcn.000150a0(iStackX_20);
            if (iVar3 == 0) goto code_r0x0001ec9d;
            var_20h = iVar3;
            iVar1 = fcn.00027af8(arg1,arg2 & 0xffff,arg1_00,&iStackX_20);
            if (iVar1 < 0) {
                fcn.0001470c(&var_20h);
                iVar3 = var_20h;
            }
        }
code_r0x0001ef6b:
        fcn.0001470c(&pcStack_38);
    }
    return iVar3;
}


/* fcn.00015b38 @ 0x15b38 */

void fcn.00015b38(int64_t arg1,int64_t arg2)

{
    unkbyte7 in_R8;
    
    fcn.00033b7e(*0x431c8 + arg2 + 4,1,CONCAT71(in_R8,0xf));
    *(*0x431c8 + 0x3d0904 + arg2 * 2) = arg1;
    return;
}


/* fcn.00016678 @ 0x16678 */

void fcn.00016678(void)

{
    uint16_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    uint64_t uVar15;
    char cVar16;
    uint64_t uVar17;
    char cStackX_8;
    int64_t iStackX_18;
    uint64_t uStackX_20;
    int64_t iStack_a8;
    uint64_t uStack_98;
    uint64_t uStack_80;
    int64_t iStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    cStackX_8 = '\0';
    iStack_78 = 0;
    uStack_80 = 0;
    if ((((*0x34198 != 0xffff) && (*0x34190 != 0xffff)) && (*(*0x36d80 + 0x40) != 0)) && (*0x34198 < *0x34158)) {
        uStack_70 = *0x34190;
        uStack_98 = *0x34198;
        if (*0x34190 < *0x34198) {
            uStack_70 = *0x34198;
            uStack_98 = *0x34190;
        }
        if (*0x34158 <= uStack_70) {
            uStack_70 = *0x34158 - 1;
        }
        iVar7 = ((uStack_70 - uStack_98) + 1) * *0x34160;
        iVar10 = *0x34160 * uStack_98;
        iStackX_18 = fcn.0001504c(*0x34160 * 2 + 2);
        if (iStackX_18 == 0) {
            fcn.000165a8(uStack_98,uStack_70);
        }
        else {
            if (uStack_98 <= uStack_70) {
                uVar9 = *0x34160;
                do {
                    iVar4 = *0x431d8;
                    uVar8 = uVar9 * uStack_98;
                    uVar13 = uVar9 + uVar8;
                    uStackX_20 = uVar8;
                    if (*0x36e8d == '\0') {
                        iVar2 = *0x431c8;
                        iVar3 = fcn.00027fcc(iVar2 + 4 + uVar8,*0x431d8 + 4 + uVar8,uVar9);
                        if (iVar3 != 0) goto code_r0x000167fe;
                        iVar4 = fcn.00027fcc(iVar2 + 0x3d0904 + uVar8 * 2,iVar4 + 0x3d0904 + uVar8 * 2,uVar9 * 2);
                        if (iVar4 != 0) goto code_r0x000167fe;
                    }
                    else {
code_r0x000167fe:
                        iVar4 = iStackX_18;
                        if (uVar9 * *0x34158 <= uVar13) {
                            uVar13 = uVar9 * *0x34158 - 1;
                        }
                        iStack_a8 = 0;
                        cVar16 = *(*0x431c8 + 4 + uVar8);
                        (**(*(*0x36d80 + 0x40) + 0x40))(*(*0x36d80 + 0x40),0);
                        (**(*(*0x36d80 + 0x40) + 0x38))(*(*0x36d80 + 0x40),0,uStack_98);
                        iStack_68 = 0;
                        fcn.00020134();
                        if (uVar8 < uVar13) {
                            do {
                                iVar3 = 0;
                                uVar9 = uVar8;
                                if (*(*0x431c8 + 4 + uVar8) == cVar16) {
                                    iVar14 = uVar8 * 2 + 0x3d0904;
                                    do {
                                        if (uVar13 <= uVar9) break;
                                        uVar1 = *(iVar14 + *0x431c8);
                                        *(iVar4 + iVar3 * 2) = uVar1;
                                        iVar5 = fcn.0001d1e4(uVar1);
                                        if (iVar5 == 1) {
                                            uVar9 = uVar9 + 1;
                                            iVar14 = iVar14 + 2;
                                        }
                                        uVar9 = uVar9 + 1;
                                        iVar14 = iVar14 + 2;
                                        iVar3 = iVar3 + 1;
                                    } while (*(*0x431c8 + 4 + uVar9) == cVar16);
                                    uStackX_20 = uVar9;
                                }
                                iVar14 = fcn.0001d1e4(*(*0x431d8 + 0x3d0902 + uVar9 * 2));
                                if (iVar14 == 1) {
                                    *(*0x431d8 + 0x3d0904 + uVar9 * 2) = *(*0x431c8 + 0x3d0904 + uVar9 * 2) + 1;
                                }
                                *(iVar4 + iVar3 * 2) = 0;
                                fcn.00020134();
                                iVar4 = *0x431d8;
                                uVar17 = uVar9 - uVar8;
                                if (uVar17 < 0xb) {
code_r0x00016b44:
                                    if (cStackX_8 != cVar16) {
                                        (**(*(*0x36d80 + 0x40) + 0x28))(*(*0x36d80 + 0x40));
                                        cStackX_8 = cVar16;
                                    }
                                    if (((iStack_68 + iStack_78 != iStack_a8) || (uStack_80 != uStack_98)) ||
                                       ((iStack_a8 == 0 && (uStack_98 == 0)))) {
                                        (**(*(*0x36d80 + 0x40) + 0x38))(*(*0x36d80 + 0x40),iStack_a8,uStack_98);
                                    }
                                    iStack_78 = iStack_a8;
                                    if (uVar13 < *0x34160 * *0x34158) {
                                        (**(*(*0x36d80 + 0x40) + 8))(*(*0x36d80 + 0x40));
                                    }
                                    iStack_68 = uVar9 - uVar8;
                                    uStack_80 = uStack_98;
                                    if (*0x34160 <= iStack_68 + iStack_a8) {
                                        uStack_80 = uStack_98 + 1;
                                        iStack_78 = 0;
                                    }
                                }
                                else {
                                    iVar2 = *0x431c8;
                                    iVar14 = fcn.00027fcc(iVar2 + 4 + uVar8,*0x431d8 + 4 + uVar8,uVar17);
                                    if ((iVar14 != 0) || (*0x36e8d != '\0')) goto code_r0x00016b44;
                                    iVar14 = fcn.00027fcc(iVar2 + 0x3d0904 + uVar8 * 2,iVar4 + 0x3d0904 + uVar8 * 2,
                                                          uVar17 * 2);
                                    iVar4 = iStackX_18;
                                    if (iVar14 != 0) {
                                        uVar12 = 0;
                                        iVar14 = 0;
                                        uVar11 = uVar17;
                                        uVar15 = uVar17;
                                        if (uVar17 != 0) {
                                            iVar5 = uVar8 * 2 + 0x3d0904;
                                            do {
                                                if (*(*0x431c8 + iVar5) != *(*0x431d8 + iVar5)) {
                                                    iVar3 = iVar14;
                                                    uVar15 = uVar12;
                                                    if (uVar12 < uVar11) {
                                                        uVar11 = uVar12;
                                                    }
                                                }
                                                iVar6 = fcn.0001d1e4(*(iVar4 + iVar14 * 2));
                                                if (iVar6 == 1) {
                                                    uVar12 = uVar12 + 1;
                                                    iVar5 = iVar5 + 2;
                                                }
                                                uVar12 = uVar12 + 1;
                                                iVar5 = iVar5 + 2;
                                                iVar14 = iVar14 + 1;
                                            } while (uVar12 < uVar17);
                                            uVar9 = uStackX_20;
                                        }
                                        iVar4 = iStackX_18;
                                        iVar14 = fcn.0001d1e4(*(iStackX_18 + iVar3 * 2));
                                        if ((((iVar14 == 0) &&
                                             (iVar14 = fcn.0001d1e4(*(*0x431d8 + 0x3d0904 + (uVar15 + uVar8) * 2)),
                                             iVar14 != 0)) && (uVar12 = uVar15 + 1, uVar12 < uVar17)) ||
                                           (((iVar14 = fcn.0001d1e4(*(iVar4 + iVar3 * 2)), iVar14 != 0 &&
                                             (iVar14 = fcn.0001d1e4(*(*0x431d8 + 0x3d0906 + (uVar15 + uVar8) * 2)),
                                             iVar14 != 0)) && (uVar12 = uVar15 + 2, uVar12 < uVar17)))) {
                                            iVar3 = iVar3 + 1;
                                            uVar15 = uVar12;
                                        }
                                        if (uVar11 < 0xb) {
                                            if (10 < (uVar9 - uVar15) - uVar8) {
                                                uVar9 = uVar8 + 1 + uVar15;
                                                uStackX_20 = uVar9;
                                                iVar14 = fcn.0001d1e4(*(iVar4 + iVar3 * 2));
                                                if (iVar14 == 1) {
                                                    uVar9 = uVar9 + 1;
                                                    uStackX_20 = uVar9;
                                                }
                                                *(iVar4 + 2 + iVar3 * 2) = 0;
                                            }
                                            goto code_r0x00016b44;
                                        }
                                        *(iVar4 + iVar3 * 2) = 0;
                                        uVar9 = uVar8 + uVar11;
                                        uStackX_20 = uVar9;
                                    }
                                }
                                iStack_a8 = iStack_a8 + (uVar9 - uVar8);
                                cVar16 = *(*0x431c8 + 4 + uVar9);
                                uVar8 = uVar9;
                                iVar4 = iStackX_18;
                            } while (uVar9 < uVar13);
                            uVar9 = *0x34160;
                        }
                        else {
                            uVar9 = *0x34160;
                        }
                    }
                    uStack_98 = uStack_98 + 1;
                } while (uStack_98 <= uStack_70);
            }
            fcn.00020134();
            *0x36e8d = '\0';
            (**(*0x36d88 + 0x160))(*0x431d8 + 4 + iVar10,*0x431c8 + 4 + iVar10,iVar7);
            (**(*0x36d88 + 0x160))(*0x431d8 + 0x3d0904 + iVar10 * 2,*0x431c8 + 0x3d0904 + iVar10 * 2,iVar7 * 2);
            *0x34198 = 0xffff;
            *0x34190 = 0xffff;
            fcn.0001470c(&iStackX_18);
        }
    }
    return;
}


/* fcn.00011e0c @ 0x11e0c */

void fcn.00011e0c(int64_t arg1,ulong noname_1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint32_t arg2_00;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    
    if (*0x431e8 != 0) {
        iVar5 = *0x36e14;
        arg2_00 = 10;
        iVar1 = arg1;
        if (iVar1 < iVar5) {
            iVar3 = iVar1 << 4;
            iVar1 = iVar5 - iVar1;
            do {
                uVar4 = 0;
                fcn.00015958(0x14,arg2_00,0x351b0,0);
                fcn.00015958(0x14,arg2_00,*(iVar3 + *0x431e8),CONCAT71(uVar4 >> 8,7));
                arg2_00 = arg2_00 + 1;
                iVar3 = iVar3 + 0x10;
                iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
        }
        uVar4 = 0;
        fcn.00015958(0x14,arg2_00,0x351b0,0);
        fcn.00015958(0x14,arg2_00,*(*0x431e8 + iVar5 * 0x10),CONCAT71(uVar4 >> 8,0xf));
        fcn.0001c0a4(0x11,9,0x23,arg2 + 2);
    }
    if ((9 < *0x34158) && (fcn.00015b38(0x2524,*0x34160 * 9 + 0x33), 9 < *0x34158)) {
        fcn.00015b38(0x251c,*0x34160 * 9 + 0x11);
    }
    fcn.00011b58(arg2 & 0xffffffff,0);
    uVar2 = *0x34158 - 1;
    if (*0x34190 == 0xffff) {
        *0x34190 = uVar2;
    }
    *0x34198 = 0;
    if (*0x34190 < uVar2) {
        *0x34190 = uVar2;
    }
    if (*0x36e18 < arg2 + -1) {
        *0x36e18 = *0x36e18 + 1;
    }
    return;
}


/* fcn.00011fbc @ 0x11fbc */

//WARNING: Variable defined which should be unmapped: var_14h

void fcn.00011fbc(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong in_R9;
    int64_t arg4;
    int32_t var_14h;
    
    if (*0x431e8 != 0) {
        arg4 = CONCAT71(in_R9 >> 8,0xf);
        iVar2 = *(*0x431e8 + *0x36e14 * 0x10);
        if (arg1 == 0) {
            fcn.00015958(0x14,*0x36e18 + 0xb,iVar2,arg4);
            iVar2 = *(*0x431e8 + (*0x36e14 + -1) * 0x10);
        }
        else {
            fcn.00015958(0x14,*0x36e18 + 9,iVar2,arg4);
            iVar2 = *(*0x431e8 + (*0x36e14 + 1) * 0x10);
        }
        fcn.00015958(0x14,*0x36e18 + 10,iVar2,CONCAT71(arg4 >> 8,7));
        fcn.0001c0a4(0x11,9,0x23,arg2 + 2);
    }
    if ((9 < *0x34158) && (fcn.00015b38(0x2524,*0x34160 * 9 + 0x33), 9 < *0x34158)) {
        fcn.00015b38(0x251c,*0x34160 * 9 + 0x11);
    }
    uVar1 = *0x34158 - 1;
    if (*0x34190 == 0xffff) {
        *0x34190 = uVar1;
    }
    *0x34198 = 0;
    if (*0x34190 < uVar1) {
        *0x34190 = uVar1;
    }
    if (arg1 == 0) {
        if (*0x36e18 < arg2 + -1) {
            *0x36e18 = *0x36e18 + 1;
        }
    }
    else if (0 < *0x36e18) {
        *0x36e18 = *0x36e18 + -1;
    }
    return;
}


/* fcn.00011c58 @ 0x11c58 */

void fcn.00011c58(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t arg2_00;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    uint64_t uVar5;
    int iVar6;
    
    iVar3 = arg1;
    if (*0x431e8 != 0) {
        arg2_00 = 10;
        if (iVar3 <= arg2) {
            uVar1 = (arg2 - iVar3) + 1;
            iVar2 = iVar3 << 4;
            uVar5 = uVar1;
            iVar3 = iVar3 + uVar1;
            do {
                uVar4 = 0;
                fcn.00015958(0x14,arg2_00,0x351b0,0);
                fcn.00015958(0x14,arg2_00,*(iVar2 + *0x431e8),CONCAT71(uVar4 >> 8,7));
                arg2_00 = arg2_00 + 1;
                iVar2 = iVar2 + 0x10;
                uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
        }
        iVar6 = arg3;
        uVar4 = 0;
        fcn.00015958(0x14,arg2_00 - iVar6,0x351b0,0);
        fcn.00015958(0x14,arg2_00 - iVar6,*(*0x431e8 + (iVar3 - iVar6) * 0x10),CONCAT71(uVar4 >> 8,0xf));
        fcn.0001c0a4(0x11,9,0x23,iVar6 + 2);
    }
    if ((9 < *0x34158) && (fcn.00015b38(0x2524,*0x34160 * 9 + 0x33), 9 < *0x34158)) {
        fcn.00015b38(0x251c,*0x34160 * 9 + 0x11);
    }
    fcn.00011b58(arg3 & 0xffffffff,1);
    uVar5 = *0x34158 - 1;
    if (*0x34190 == 0xffff) {
        *0x34190 = uVar5;
    }
    *0x34198 = 0;
    if (*0x34190 < uVar5) {
        *0x34190 = uVar5;
    }
    if (*0x36e18 != 0) {
        *0x36e18 = *0x36e18 + -1;
    }
    return;
}


/* fcn.00018d88 @ 0x18d88 */

ulong fcn.00018d88(ulong noname_0,int64_t arg1)

{
    bool bVar1;
    uint16_t uVar2;
    ushort *puVar3;
    ushort *puVar4;
    ulong uVar5;
    int64_t iVar6;
    ushort *puVar7;
    uint16_t uVar8;
    uint32_t uVar9;
    ushort *puVar10;
    int16_t *arg3;
    int16_t *piVar11;
    ushort *puVar12;
    ushort auStackX_10 [4];
    int64_t iStackX_18;
    uint32_t auStackX_20 [2];
    
    uVar2 = *0x431e0;
    auStackX_10[0] = CONCAT11(auStackX_10[0]._1_1_,arg1);
    uVar9 = *0x431e0;
    puVar10 = NULL;
    bVar1 = false;
    uVar8 = 0;
    fcn.00014868(0xffff0020,0x214c0);
    auStackX_20[0] = 0;
    auStackX_20[1] = 0;
    arg3 = NULL;
    iStackX_18 = fcn.000113fc(0x35260,0x33ce0,0,auStackX_20);
    puVar12 = *0x43178;
    if (iStackX_18 == 0) {
        iStackX_18 = 0;
    }
    else if (*0x43178 != NULL) {
        puVar4 = puVar10;
        piVar11 = *0x43170;
        do {
            if (*0x43138 == *(iStackX_18 + puVar4 * 2)) {
                if (puVar12 != NULL) {
                    puVar7 = puVar10;
                    arg3 = piVar11;
                    do {
                        puVar3 = puVar10;
                        do {
                            if (*(iStackX_18 + puVar3 * 2) == *arg3) break;
                            puVar3 = puVar3 + 1;
                        } while (puVar3 < puVar12);
                        if (puVar12 <= puVar3) {
                            *(iStackX_18 + puVar4 * 2) = piVar11[puVar7 * 0x24];
                            piVar11 = *0x43170;
                            puVar12 = *0x43178;
                            break;
                        }
                        puVar7 = puVar7 + 1;
                        arg3 = arg3 + 0x24;
                    } while (puVar7 < puVar12);
                }
            }
            puVar4 = puVar4 + 1;
        } while (puVar4 < puVar12);
    }
    puVar4 = puVar10;
    iVar6 = iStackX_18;
    if (puVar12 != NULL) {
        do {
            puVar4 = fcn.00018888(*(iVar6 + puVar10 * 2));
            if (puVar4 != NULL) {
                if (((**(puVar4 + 8) & 0x7f) == 5) && ((*(puVar4 + 8))[1] == 1)) {
                    if ((uVar8 <= uVar2) && (uVar9 < puVar4[0x1c] + uVar8)) {
                        bVar1 = true;
                        break;
                    }
                    uVar8 = uVar8 + puVar4[0x1c];
                }
                else {
                    if (uVar2 == uVar8) break;
                    uVar8 = uVar8 + 1;
                }
            }
            puVar10 = puVar10 + 1;
        } while (puVar10 < puVar12);
    }
    if (iVar6 != 0) {
        fcn.0001470c(&iStackX_18);
        puVar12 = *0x43178;
    }
    if (puVar4 == NULL) {
        uVar5 = 0x800000000000000e;
    }
    else if (puVar10 == puVar12) {
        uVar5 = 0x8000000000000009;
    }
    else if ((!bVar1) || (iVar6 = fcn.0001fce0(puVar4,uVar9 - uVar8,arg3), -1 < iVar6)) {
        auStackX_10[0] = *puVar4;
        uVar5 = 0;
        (**(*0x36d98 + 0x58))(L"BootCurrent",0x33ce0,6,2,auStackX_10);
        uVar5 = fcn.000197dc(*(puVar4 + 8),*(puVar4 + 0xc),*(puVar4 + 0x10),CONCAT71(uVar5 >> 8,1));
        (**(*0x36d98 + 0x58))(L"BootCurrent",0x33ce0,6,0,auStackX_10);
    }
    else {
        uVar5 = 0x8000000000000003;
    }
    return uVar5;
}


/* fcn.000119c4 @ 0x119c4 */

void fcn.000119c4(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    int16_t iVar1;
    int16_t *piVar2;
    uint64_t uVar3;
    uint in_register_00000014;
    int16_t *piVar4;
    ushort *puVar5;
    uint64_t uVar6;
    uint in_R8;
    uint64_t uVar7;
    int64_t iVar8;
    
    uVar7 = CONCAT44(in_R8,arg3);
    piVar4 = CONCAT44(in_register_00000014,arg2);
    uVar3 = 0;
    iVar1 = *piVar4;
    piVar2 = piVar4;
    uVar6 = uVar3;
    while (iVar1 != 0) {
        piVar2 = piVar2 + 1;
        uVar6 = uVar6 + 1;
        iVar1 = *piVar2;
    }
    if (uVar7 != 0) {
        puVar5 = arg1;
        do {
            if (uVar6 <= uVar3) break;
            uVar3 = uVar3 + 1;
            *puVar5 = *((piVar4 - arg1) + puVar5);
            puVar5 = puVar5 + 1;
        } while (uVar3 < uVar7);
    }
    if (uVar6 < uVar7) {
        puVar5 = arg1 + uVar6 * 2;
        for (iVar8 = uVar7 - uVar6; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
        }
    }
    return;
}


/* fcn.00011b58 @ 0x11b58 */

void fcn.00011b58(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    int64_t arg1_00;
    int64_t arg2_00;
    
    if (*0x36e0c < 9) {
        return;
    }
    iVar1 = arg1;
    if (arg2 == 2) {
code_r0x00011b72:
        if (*0x34158 <= iVar1 + 9) {
            return;
        }
        arg1_00 = 0x25bc;
        arg2_00 = *0x34160 * (iVar1 + 9) + 0x32;
    }
    else {
        if (arg2 == 0) {
            if (*0x36e14 <= iVar1 + -1) goto code_r0x00011b72;
            if ((*0x36e14 != *0x36e0c + -1) && (iVar1 + 9 < *0x34158)) {
                fcn.00015b38(0x25bc,*0x34160 * (iVar1 + 9) + 0x32);
            }
        }
        else {
            if (arg2 != 1) {
                return;
            }
            if (*0x36e14 < *0x36e0c - iVar1) {
                if (iVar1 + 9 < *0x34158) {
                    fcn.00015b38(0x25bc,*0x34160 * (iVar1 + 9) + 0x32);
                }
                if (*0x36e14 == 0) {
                    return;
                }
            }
        }
        if (*0x34158 < 0xb) {
            return;
        }
        arg1_00 = 0x25b2;
        arg2_00 = (*0x34160 + 5) * 10;
    }
    fcn.00015b38(arg1_00,arg2_00);
    return;
}


/* fcn.00017728 @ 0x17728 */

void fcn.00017728(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iStackX_8;
    uint64_t auStackX_10 [2];
    uchar auStackX_20 [8];
    
    auStackX_10[0] = 0;
    iStackX_8 = 0;
    auStackX_10[1] = 0;
    *0x36e60 = 0;
    (**(*0x36d88 + 0x138))(2,0x33f50,0,auStackX_10,&iStackX_8);
    uVar2 = 0;
    if (auStackX_10[0] != 0) {
        do {
            iVar1 = (**(*0x36d88 + 0x98))(*(iStackX_8 + uVar2 * 8),0x33e70,auStackX_20);
            if (-1 < iVar1) {
                (**(*0x36d88 + 0x98))(*(iStackX_8 + uVar2 * 8),0x33f50,0x36e60);
                break;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < auStackX_10[0]);
    }
    if (*0x36e60 == 0) {
        iVar1 = (**(*0x36d88 + 0x140))(0x33f50,0,0x36e60);
        if (iVar1 < 0) {
            *0x36e60 = 0;
        }
    }
    fcn.0001470c(&iStackX_8);
    return;
}


/* fcn.0001c500 @ 0x1c500 */

ulong fcn.0001c500(uint32_t *arg1,int64_t arg2)

{
    *arg1 = *(*(*(*0x36e60 + 0x18) + 8) + 4);
    *arg2 = *(*(*(*0x36e60 + 0x18) + 8) + 8);
    return 0;
}


/* fcn.0001c418 @ 0x1c418 */

ulong fcn.0001c418(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    bool bVar2;
    ulong uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    uVar8 = 0;
    uVar9 = 0;
    bVar2 = false;
    if (*0x36e60 == NULL) {
        uVar3 = 0x8000000000000003;
    }
    else {
        uVar7 = 0;
        if (*(*0x36e60)[3] != 0) {
            do {
                iVar4 = (***0x36e60)(*0x36e60,uVar7,&iStackX_18,&iStackX_20);
                if ((iVar4 == 0) && (iStackX_18 != 0)) {
                    uVar1 = *arg1;
                    uVar5 = *(iStackX_20 + 4);
                    if (uVar1 < uVar5) {
                        iVar4 = uVar5 - uVar1;
                    }
                    else {
                        iVar4 = uVar1 - uVar5;
                    }
                    uVar5 = *(iStackX_20 + 8);
                    uVar1 = *arg2;
                    if (uVar1 < uVar5) {
                        iVar6 = uVar5 - uVar1;
                    }
                    else {
                        iVar6 = uVar1 - uVar5;
                    }
                    if (((uVar9 == 0) && (!bVar2)) || (iVar6 + iVar4 <= uVar9)) {
                        bVar2 = true;
                        uVar9 = iVar6 + iVar4;
                        uVar8 = uVar7;
                    }
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < *(*0x36e60)[3]);
        }
        (*(*0x36e60)[1])(*0x36e60,uVar8);
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00020134 @ 0x20134 */

//WARNING: Variable defined which should be unmapped: var_28h

uint8_t fcn.00020134(ulong param_1,ulong param_2)

{
    int64_t arg1;
    int64_t iVar1;
    int64_t iVar2;
    uint8_t uVar3;
    int64_t iStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t var_28h;
    
    uVar3 = 0;
    iStackX_8 = 0;
    iStackX_10 = 0;
    arg1 = fcn.0001504c(0x2a);
    iStackX_18 = arg1;
    fcn.000201f4(&iStackX_8,param_2,&iStackX_10);
    iVar2 = iStackX_8;
    if ((iStackX_8 != 0) && (iStackX_10 == 0x51)) {
        fcn.00033b7e(arg1,0x2a,0);
        iVar1 = fcn.00027fcc(arg1,iVar2,0x28);
        iVar2 = fcn.00027fcc(arg1,iVar2 + 0x28,0x28);
        uVar3 = iVar1 == 0 | 2;
        if (iVar2 != 0) {
            uVar3 = iVar1 == 0;
        }
        uVar3 = uVar3 ^ 3;
    }
    fcn.0001470c(&iStackX_8);
    fcn.00014738(&iStackX_18);
    return uVar3;
}


/* fcn.000201f4 @ 0x201f4 */

void fcn.000201f4(int64_t arg1,ulong noname_1,int64_t arg2)

{
    ulong uVar1;
    int64_t var_10h;
    int32_t var_bp_8h;
    int32_t var_4h;
    
    *arg2 = 0;
    var_10h._0_4_ = 0xc811fa38;
    var_10h._4_4_ = 0x457942c8;
    var_bp_8h = -0x169f4457;
    var_4h = 0x34fbdd4e;
    uVar1 = fcn.000113fc(0x35190,&var_10h,0,arg2);
    *arg1 = uVar1;
    return;
}


/* fcn.00027fcc @ 0x27fcc */

int64_t fcn.00027fcc(uint32_t arg1,int64_t arg2,uint32_t arg3)

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


/* fcn.00014738 @ 0x14738 */

void fcn.00014738(uint32_t arg1)

{
    int16_t iVar1;
    int16_t *arg1_00;
    int16_t *piVar2;
    uint in_register_0000000c;
    ulong *puVar3;
    int64_t iVar4;
    
    puVar3 = CONCAT44(in_register_0000000c,arg1);
    iVar4 = 0;
    arg1_00 = *puVar3;
    if (arg1_00 != NULL) {
        iVar1 = *arg1_00;
        piVar2 = arg1_00;
        while (iVar1 != 0) {
            piVar2 = piVar2 + 1;
            iVar4 = iVar4 + 1;
            iVar1 = *piVar2;
        }
        fcn.00033b7e(arg1_00,iVar4 * 2,0);
        (**(*0x36d88 + 0x48))(*puVar3);
        *puVar3 = 0;
    }
    return;
}


/* fcn.00017818 @ 0x17818 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h

void fcn.00017818(void)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint32_t arg1;
    uint32_t unaff_R15D;
    uint64_t uVar6;
    int64_t iStackX_8;
    uint64_t uStackX_10;
    uint64_t uStackX_18;
    int64_t iStackX_20;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    uint64_t arg_50h;
    uint32_t in_stack_ffffffffffffffb0;
    int64_t in_stack_ffffffffffffffb8;
    int64_t var_18h;
    int64_t var_10h;
    
    uVar4 = 0;
    iStackX_8 = 0;
    iStackX_20 = 0;
    arg1 = 0;
    iVar1 = *(*0x36d80 + 0x40);
    uStackX_18 = 0;
    uStackX_10 = 0;
    if (iVar1 != 0) {
        uVar6 = uVar4;
        if (*0x36e38 == 7) {
            uVar6 = 7;
        }
        if (*0x36e38 < 6) {
            *0x36e38 = 1;
        }
        if (*0x36e48 != 0) {
            (**(*0x36e48 + 8))(*0x36e48,0);
        }
        iVar3 = *(*0x36d80 + 0x40);
        iVar3 = (**(iVar3 + 0x18))(iVar3,*(*(iVar3 + 0x48) + 4),&uStackX_18,&uStackX_10);
        if (iVar3 < 0) {
            *0x34158 = 0x18;
            *0x34160 = 0x50;
        }
        else if ((*0x34158 < uStackX_10) && (*0x34160 < uStackX_18)) {
            fcn.00016d20();
        }
        (**(iVar1 + 0x40))(iVar1,0);
        (**(iVar1 + 0x28))(iVar1,7);
        (**(iVar1 + 0x30))(iVar1);
        fcn.00020134();
        uVar5 = uVar4;
        if (*0x36e60 != 0) {
            uVar5 = *(*(*(*0x36e60 + 0x18) + 8) + 4);
        }
        if (*0x36e38 < 6) {
            arg_50h = 0;
            if (*0x36e60 != 0) {
                iVar1 = *0x34160 * -8;
                iVar3 = fcn.00020248(0x34390,&iStackX_8,&iStackX_20);
                if (iVar3 == 0) {
                    uVar4 = arg_50h;
                    fcn.0001c530(iStackX_8,iStackX_20,0,uVar5 + iVar1 >> 1,arg_50h,in_stack_ffffffffffffffb0,
                                 in_stack_ffffffffffffffb8,unaff_R15D);
                    iVar2 = fcn.00029c98(iStackX_8);
                    if (iVar2 != 1) {
                        fcn.0001470c(&iStackX_8);
                    }
                    fcn.00020698();
                }
                arg1 = uVar4 / 0x13;
                if (uVar4 != (uVar4 / 0x13) * 0x13) {
                    arg1 = arg1 + 1;
                }
            }
            if (uVar6 == 7) {
                *0x36e38 = 7;
            }
            fcn.000161e4(arg1);
            fcn.00014868(0xffff0023,0x15048);
        }
        else {
            *0x36e8e = 1;
            fcn.00020698();
        }
    }
    return;
}


/* fcn.00017110 @ 0x17110 */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h
//WARNING: Variable defined which should be unmapped: var_39h

void fcn.00017110(ulong noname_0,int64_t arg1)

{
    char cVar1;
    int16_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int16_t *arg1_00;
    int16_t *piVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t iStackX_8;
    uint64_t uStackX_10;
    int64_t iStackX_18;
    uint64_t uStackX_20;
    int64_t var_67h;
    uint32_t var_6fh;
    int64_t var_77h;
    uint32_t var_7fh;
    int64_t iStack_a8;
    uint uStack_a0;
    uint uStack_9c;
    uint uStack_98;
    uint uStack_94;
    uint uStack_90;
    uint uStack_8c;
    uint64_t auStack_88 [3];
    int64_t iStack_70;
    int16_t *piStack_68;
    uint64_t uStack_60;
    uchar auStack_58 [7];
    int32_t var_49h;
    int32_t var_45h;
    int32_t var_41h;
    int32_t var_3dh;
    int32_t var_39h;
    int32_t var_35h;
    int32_t var_31h;
    int32_t var_2dh;
    int64_t var_29h;
    int64_t var_21h;
    uint32_t var_19h;
    int64_t var_11h;
    int64_t var_9h;
    int64_t var_1h;
    
    uVar7 = 0;
    *0x36e48 = *0x34360;
    uStack_60 = 0;
    iStackX_8 = 0;
    uStackX_10 = 0;
    fcn.000201f4(&iStackX_8,arg1,&uStackX_10);
    if ((iStackX_8 == 0) || (uStackX_10 < 0x50)) {
        *0x36eb8 = '\0';
    }
    else {
        *0x36eb8 = *(iStackX_8 + 0x50);
    }
    fcn.0001470c(&iStackX_8);
    iVar3 = *(*0x36d80 + 0x40);
    if (iVar3 != 0) {
        iVar3 = (**(iVar3 + 0x18))(iVar3,*(*(iVar3 + 0x48) + 4),auStack_88,&uStackX_20);
        if (iVar3 < 0) {
            uStackX_20 = 0x18;
            auStack_88[0] = 0x50;
code_r0x000171e6:
            *0x34158 = uStackX_20;
            *0x34160 = auStack_88[0];
        }
        else {
            if ((uStackX_20 < *0x34158) && (auStack_88[0] < *0x34160)) {
                fcn.000160e4(auStack_88[0]);
                goto code_r0x000171e6;
            }
            if (((*0x34158 < uStackX_20) && (*0x34160 < auStack_88[0])) && (*0x36eb8 == '\0')) {
                fcn.00016d20();
            }
        }
        *0x431b0 = *0x34160;
        *0x431b8 = *0x34158;
    }
    uStack_98 = 0xa59a0056;
    uStack_94 = 0x44b53341;
    uStack_90 = 0x766d9c9c;
    uStack_8c = 0x173867f7;
    iStack_a8 = 0x4af964582ebe0275;
    uStack_a0 = 0xf4d3ed91;
    uStack_9c = 0xaa00b1ed;
    auStack_88[1] = 0;
    iStackX_18 = 0;
    iVar3 = (**(*0x36d88 + 0x138))(2,0x34be8,0,auStack_88 + 2,&iStack_70);
    if (iVar3 < 0) {
        iVar6 = iStackX_8;
    }
    else {
        uVar8 = uVar7;
        if (auStack_88[2] == 0) {
            iVar6 = iStackX_18;
        }
        else {
            do {
                (**(*0x36d88 + 0x98))(*(iStack_70 + uVar8 * 8),0x34be8,auStack_58);
                uVar9 = uVar7;
                do {
                    iStackX_18 = 0;
                    auStack_88[1] = 0;
                    iVar3 = (**(_auStack_58 + 0x18))
                                      (_auStack_58,&uStack_98,0x18,uVar9,&iStackX_18,auStack_88 + 1,&iStackX_8);
                    iVar6 = iStackX_18;
                    uVar9 = uVar9 + 1;
                    if (-1 < iVar3) {
                        iVar4 = fcn.00027fcc(iStackX_18,&iStack_a8,0x10);
                        if (iVar4 == 0) goto code_r0x00017345;
                    }
                    (**(*0x36d88 + 0x48))(iVar6);
                } while (-1 < iVar3);
                iVar6 = iStackX_18;
code_r0x00017345:
                if (-1 < iVar3) goto code_r0x00017366;
                uVar8 = uVar8 + 1;
            } while (uVar8 < auStack_88[2]);
        }
        if (iVar3 < 0) {
            iVar6 = iStackX_8;
        }
code_r0x00017366:
        (**(*0x36d88 + 0x48))(iStack_70);
    }
    if (iVar3 < 0) {
        arg1_00 = fcn.0001ec60(*0x431d0,3,0);
        uVar8 = uVar7;
        piStack_68 = arg1_00;
    }
    else {
        iVar3 = fcn.00027fcc(iVar6 + 0x10,0x3532c,5);
        if ((iVar3 != 0) || (*(iVar6 + 0x15) < 2)) goto code_r0x000174dd;
        arg1_00 = fcn.0001646c(iVar6 + 0x18);
        cVar1 = *(iVar6 + 0x18);
        uVar8 = uVar7;
        while (cVar1 != '\0') {
            uVar8 = uVar8 + 1;
            cVar1 = *(iVar6 + 0x18 + uVar8);
        }
        piStack_68 = arg1_00;
        uStack_60 = fcn.0001646c(uVar8 + 9 + iVar6 + 0x10);
        uVar8 = uStack_60;
    }
    if (arg1_00 != NULL) {
        iVar2 = *arg1_00;
        piVar5 = arg1_00;
        while (iVar2 != 0) {
            piVar5 = piVar5 + 1;
            uVar7 = uVar7 + 1;
            iVar2 = *piVar5;
        }
        iVar3 = uVar7 * 2 + 0x14;
        iVar6 = fcn.0001504c(iVar3);
        iStack_a8 = iVar6;
        if (iVar6 == 0) {
            fcn.00012f20(arg1_00);
        }
        else {
            uStackX_10 = CONCAT44(uStackX_10._4_4_,str.2024._0_4_);
            fcn.0001c360(iVar6,iVar3,arg1_00,2);
            fcn.00012f20(iVar6);
            fcn.0001470c(&iStack_a8);
        }
        fcn.0001470c(&piStack_68);
    }
    if (uVar8 != 0) {
        fcn.00012f20(uVar8);
        fcn.0001470c(&uStack_60);
    }
code_r0x000174dd:
    fcn.000149b0();
    if (((*0x36ebc & 1) != 0) && (*0x36eb8 != '\0')) {
        *0x36e38 = 2;
        if (*0x36e48 != 0) {
            (**(*0x36e48 + 8))(*0x36e48,1);
        }
        fcn.00014868(0xffff0001,0x20fac);
        fcn.00020134();
        *(*0x431c0 + 0x48) = 1;
        if (*(*0x431c0 + 0x49) != '\0') {
            fcn.00013230();
        }
    }
    if (*(*0x36d80 + 0x40) != 0) {
        if ((*0x36eb8 == '\0') || (*0x36e60 == 0)) {
            fcn.0001c390();
            fcn.00017818();
        }
        fcn.00014868(0xffff0021,0x15048);
    }
    fcn.00017a48();
    return;
}


/* fcn.00017d40 @ 0x17d40 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h_2
//WARNING: Variable defined which should be unmapped: var_30h_2

int64_t fcn.00017d40(void)

{
    bool bVar1;
    uint64_t uVar2;
    char cVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint16_t *puVar6;
    uint *puVar7;
    uint64_t uVar8;
    ulong uVar9;
    char16_t *pcVar10;
    uint16_t uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    int64_t iVar14;
    uint64_t uVar15;
    int16_t *arg1;
    int16_t iVar16;
    uint16_t uVar17;
    uint32_t *puVar18;
    char cVar19;
    uint64_t uVar20;
    int64_t var_10h_2;
    int *piStackX_10;
    int64_t var_20h_2;
    int16_t var_28h;
    char *var_30h;
    int64_t var_40h;
    int64_t var_50h;
    int64_t var_60h;
    int64_t var_70h;
    int64_t var_80h;
    int64_t var_90h;
    int64_t var_a0h;
    int64_t var_b0h;
    int64_t var_c0h;
    int32_t var_d0h;
    int16_t var_d4h;
    int64_t var_e0h;
    int64_t var_f0h;
    int64_t var_100h;
    int64_t var_110h;
    int64_t var_120h;
    int64_t var_130h;
    int16_t var_140h;
    int64_t var_150h;
    int8_t var_1b0h;
    int64_t var_1b8h;
    int64_t var_1c0h;
    int64_t var_1c8h;
    uint64_t uStack_278;
    int64_t iStack_270;
    uint16_t *puStack_268;
    int64_t iStack_260;
    uint64_t uStack_258;
    int64_t iStack_250;
    ulong uStack_248;
    uint *puStack_240;
    int64_t iStack_238;
    uint64_t uStack_230;
    ulong auStack_228 [2];
    char16_t acStack_218 [4];
    char16_t acStack_210 [4];
    char16_t acStack_208 [4];
    char16_t acStack_200 [4];
    char16_t acStack_1f8 [4];
    char16_t acStack_1f0 [4];
    char16_t acStack_1e8 [4];
    char16_t acStack_1e0 [4];
    char16_t acStack_1d8 [4];
    char16_t acStack_1d0 [2];
    char16_t cStack_1cc;
    char16_t acStack_1c8 [4];
    char16_t acStack_1c0 [4];
    char16_t acStack_1b8 [4];
    char16_t acStack_1b0 [4];
    char16_t acStack_1a8 [4];
    char16_t acStack_1a0 [4];
    char16_t acStack_198 [4];
    char16_t acStack_190 [4];
    char16_t acStack_188 [4];
    char16_t cStack_180;
    char16_t acStack_178 [4];
    char16_t acStack_170 [4];
    char16_t acStack_168 [4];
    char16_t acStack_160 [4];
    char16_t acStack_158 [4];
    char16_t acStack_150 [4];
    char16_t acStack_148 [4];
    char16_t acStack_140 [4];
    char16_t acStack_138 [8];
    char16_t acStack_128 [4];
    char16_t acStack_120 [4];
    char16_t acStack_118 [4];
    char16_t acStack_110 [4];
    char16_t acStack_108 [4];
    char16_t acStack_100 [4];
    char16_t acStack_f8 [4];
    char16_t acStack_f0 [4];
    char16_t acStack_e8 [4];
    char16_t acStack_e0 [4];
    char16_t acStack_d8 [2];
    char16_t cStack_d4;
    char16_t acStack_c8 [4];
    char16_t acStack_c0 [4];
    char16_t acStack_b8 [4];
    char16_t acStack_b0 [4];
    char16_t acStack_a8 [4];
    char16_t acStack_a0 [4];
    char16_t acStack_98 [4];
    char16_t acStack_90 [4];
    int64_t var_80h_2;
    char16_t acStack_80 [2];
    char16_t acStack_7c [2];
    int64_t var_70h_2;
    char16_t acStack_70 [2];
    char16_t acStack_6c [2];
    int64_t var_60h_2;
    int64_t var_50h_2;
    int64_t var_40h_2;
    int64_t var_30h_2;
    int32_t var_28h_2;
    int16_t var_24h;
    int64_t var_20h;
    int64_t var_10h;
    
    uVar20 = 0;
    cStack_180 = str.boot_0_9a_f__0_9a_f__0_9a_f__0_9a_f_[0x24];
    acStack_1c8 = str.boot_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._0_8_;
    acStack_1c0 = str.boot_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._8_8_;
    cVar19 = '\0';
    acStack_1a8 = str.boot_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._32_8_;
    acStack_1a0 = str.boot_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._40_8_;
    acStack_188 = str.boot_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._64_8_;
    acStack_178 = str.Key_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._0_8_;
    acStack_170 = str.Key_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._8_8_;
    acStack_158 = str.Key_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._32_8_;
    acStack_150 = str.Key_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._40_8_;
    acStack_1b8 = str.boot_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._16_8_;
    acStack_1b0 = str.boot_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._24_8_;
    acStack_138._0_8_ = str.Key_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._64_8_;
    acStack_198 = str.boot_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._48_8_;
    acStack_190 = str.boot_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._56_8_;
    acStack_218 = str.Driver_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._0_8_;
    acStack_210 = str.Driver_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._8_8_;
    acStack_168 = str.Key_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._16_8_;
    acStack_160 = str.Key_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._24_8_;
    acStack_1f8 = str.Driver_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._32_8_;
    acStack_1f0 = str.Driver_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._40_8_;
    acStack_148 = str.Key_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._48_8_;
    acStack_140 = str.Key_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._56_8_;
    acStack_1d8 = str.Driver_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._64_8_;
    acStack_208 = str.Driver_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._16_8_;
    acStack_200 = str.Driver_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._24_8_;
    acStack_128 = str.OsRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._0_8_;
    acStack_120 = str.OsRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._8_8_;
    acStack_1e8 = str.Driver_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._48_8_;
    acStack_1e0 = str.Driver_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._56_8_;
    acStack_1d0 = str.Driver_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._72_4_;
    cStack_1cc = str.Driver_0_9a_f__0_9a_f__0_9a_f__0_9a_f_[0x26];
    acStack_108 = str.OsRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._32_8_;
    acStack_100 = str.OsRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._40_8_;
    acStack_118 = str.OsRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._16_8_;
    acStack_110 = str.OsRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._24_8_;
    acStack_e8 = str.OsRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._64_8_;
    acStack_e0 = str.OsRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._72_8_;
    acStack_f8 = str.OsRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._48_8_;
    acStack_f0 = str.OsRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._56_8_;
    acStack_d8 = str.OsRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._80_4_;
    cStack_d4 = str.OsRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_[0x2a];
    acStack_c8 = str.PlatformRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._0_8_;
    acStack_c0 = str.PlatformRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._8_8_;
    var_60h_2._0_2_ = str.PlatformRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_[0x30];
    acStack_b8 = str.PlatformRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._16_8_;
    acStack_b0 = str.PlatformRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._24_8_;
    acStack_a8 = str.PlatformRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._32_8_;
    acStack_a0 = str.PlatformRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._40_8_;
    acStack_98 = str.PlatformRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._48_8_;
    acStack_90 = str.PlatformRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._56_8_;
    var_80h_2._0_4_ = str.PlatformRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._64_4_;
    var_80h_2._4_4_ = str.PlatformRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._68_4_;
    acStack_80 = str.PlatformRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._72_4_;
    acStack_7c = str.PlatformRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._76_4_;
    var_20h_2 = 0;
    uStack_248 = 2;
    uStack_278 = 0;
    var_10h_2 = var_10h_2 & 0xffffffffffffff00;
    var_70h_2._0_4_ = str.PlatformRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._80_4_;
    var_70h_2._4_4_ = str.PlatformRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._84_4_;
    acStack_70 = str.PlatformRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._88_4_;
    acStack_6c = str.PlatformRecovery_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._92_4_;
    *0x43138 = -1;
    *0x43148 = -1;
    *0x43160 = 0;
    *0x43178 = 0;
    uStack_258 = 0;
    *0x43150 = 0;
    *0x43130 = 0;
    iVar4 = (**(*0x36d88 + 0x140))(0x33d50,0);
    if (-1 < iVar4) {
        *0x36f78 = 0;
        *0x36f60 = 0;
        fcn.0001470c(0x36f50);
        iStack_238 = 0x50;
        _var_28h = 0x50;
        iVar5 = fcn.0001504c(0x50);
        iStack_270 = iVar5;
        piStackX_10 = fcn.000113fc(0x35248,0x34538,0,&var_20h_2);
        if (piStackX_10 != NULL) {
            if (*piStackX_10 == 7) {
                var_10h_2 = CONCAT71(var_10h_2._1_7_,1);
                uStack_278 = 0;
                puVar6 = fcn.000113fc(0x35260,0x33ce0,0,&uStack_278);
                pcVar10 = L"BOOTXXXX";
                uVar12 = uVar20;
                do {
                    pcVar10 = pcVar10 + 1;
                    uVar12 = uVar12 + 1;
                } while (*pcVar10 != L'\0');
                _var_28h = uVar12 * 2 + 2;
                puStack_268 = puVar6;
                if (iVar5 != 0) {
                    fcn.0001470c(&iStack_270);
                }
                iVar5 = fcn.0001504c(_var_28h);
                cVar19 = '\x01';
                iStack_270 = iVar5;
                if (puVar6 != NULL) {
                    fcn.0001c360(iVar5,_var_28h,0x35510,*puVar6);
                    fcn.0001470c(&puStack_268);
                }
            }
            fcn.0001470c(&piStackX_10);
        }
        var_20h_2 = 0;
        uStack_278 = 0;
        puStack_268 = fcn.000113fc(0x35260,0x33ce0,0,&uStack_278);
        iStack_250 = 0;
        uStack_230 = 0;
        iVar13 = 0x50;
        uVar15 = uVar20;
        uVar12 = uVar20;
code_r0x000180cc:
        while ((cVar19 == '\0' &&
               (iVar4 = (**(*0x36d98 + 0x50))(&var_28h,iVar5,&var_50h_2), iVar4 == -0x7ffffffffffffffb))) {
            iVar5 = fcn.0001478c(iVar5,iVar13,_var_28h);
            iStack_238 = _var_28h;
            iVar13 = _var_28h;
            iStack_270 = iVar5;
        }
        iVar14 = 0;
        pcVar10 = L"BOOTXXXX";
        iVar13 = iVar14;
        do {
            pcVar10 = pcVar10 + 1;
            iVar13 = iVar13 + 1;
        } while (*pcVar10 != L'\0');
        if (_var_28h == iVar13 * 2 + 2) {
code_r0x00018217:
            cVar3 = (**(iStack_260 + 8))(iStack_260,iVar5);
            if (cVar3 == '\0') {
                cVar3 = (**(iStack_260 + 8))(iStack_260,iVar5);
                if (cVar3 != '\0') {
                    puVar18 = &var_20h_2;
                    var_20h_2 = 0;
                    puVar7 = fcn.000113fc(iVar5,0x33ce0,0,puVar18);
                    bVar1 = false;
                    puStack_240 = puVar7;
                    if (puVar7 != NULL) {
                        if (uVar20 <= *0x43160) {
                            *0x43168 = fcn.0001478c(*0x43168,uVar15,uVar15 + 0x2d0);
                            if (*0x43168 == 0) {
                                iVar4 = -0x7ffffffffffffffd;
                                goto code_r0x00018721;
                            }
                            uVar20 = uVar20 + 10;
                            uStack_230 = uVar15 + 0x2d0;
                        }
                        uVar12 = *0x43168 + *0x43160 * 0x48;
                        fcn.000152c0(uVar12,&uStack_248,iVar5 + 0xc,puVar18);
                        *0x43160 = *0x43160 + 1;
                        bVar1 = true;
                    }
                    if (bVar1) {
code_r0x00018415:
                        if (uVar12 != 0) {
                            arg1 = puVar7 + 6;
                            *(uVar12 + 4) = *puVar7;
                            uVar9 = fcn.00015630(arg1);
                            iVar13 = 0;
                            *(uVar12 + 8) = uVar9;
                            for (; *arg1 != 0; arg1 = arg1 + 1) {
                                iVar13 = iVar13 + 1;
                            }
                            iVar13 = puVar7 + (iVar13 + 4) * 2;
                            iVar14 = fcn.0001504c(*(puVar7 + 1));
                            *(uVar12 + 0x10) = iVar14;
                            if (iVar14 != 0) {
                                (**(*0x36d88 + 0x160))(iVar14,iVar13,*(puVar7 + 1));
                            }
                            iVar13 = iVar13 + *(puVar7 + 1);
                            var_20h_2 = puVar7 + (var_20h_2 - iVar13);
                            if (var_20h_2 != 0) {
                                iVar14 = fcn.000150a0(var_20h_2);
                                *(uVar12 + 0x18) = iVar14;
                                if (iVar14 != 0) {
                                    *(uVar12 + 0x20) = var_20h_2;
                                    (**(*0x36d88 + 0x160))(iVar14,iVar13,var_20h_2);
                                }
                            }
                            fcn.0001470c(&puStack_240);
                        }
                    }
                }
            }
            else {
                puVar18 = &var_20h_2;
                var_20h_2 = 0;
                puVar7 = fcn.000113fc(iVar5,0x33ce0,0,puVar18);
                uVar15 = uStack_278;
                puStack_240 = puVar7;
                if (puVar7 != NULL) {
                    auStack_228[0] = 2;
                    piStackX_10 = CONCAT62(piStackX_10._2_6_,0xffff);
                    iVar14 = fcn.000152c0(&piStackX_10,auStack_228,iVar5 + 8,puVar18);
                    iVar13 = iStack_250;
                    uVar2 = uStack_258;
                    uVar8 = 0;
                    if (-1 < iVar14) {
                        uVar15 = uVar15 >> 1;
                        if (uVar15 != 0) {
                            do {
                                if (puStack_268[uVar8] == piStackX_10) break;
                                uVar8 = uVar8 + 1;
                            } while (uVar8 < uVar15);
                        }
                        if (uVar8 < uVar15) {
                            if (uStack_258 <= *0x43178) {
                                *0x43170 = fcn.0001478c(*0x43170,iStack_250,iStack_250 + 0x2d0);
                                if (*0x43170 == 0) {
                                    fcn.0001470c(&iStack_270);
                                    return -0x7ffffffffffffffd;
                                }
                                uStack_258 = uVar2 + 10;
                                iStack_250 = iVar13 + 0x2d0;
                            }
                            uVar12 = *0x43170 + *0x43178 * 0x48;
                            fcn.000152c0(uVar12,&uStack_248,iVar5 + 8,puVar18);
                            *0x43178 = *0x43178 + 1;
                            cVar19 = var_10h_2;
                            goto code_r0x00018415;
                        }
                    }
                    cVar19 = var_10h_2;
                }
            }
        }
        else {
            pcVar10 = L"DRIVERXXXX";
            iVar13 = iVar14;
            do {
                pcVar10 = pcVar10 + 1;
                iVar13 = iVar13 + 1;
            } while (*pcVar10 != L'\0');
            if (_var_28h == iVar13 * 2 + 2) goto code_r0x00018217;
            pcVar10 = L"OsRecoveryXXXX";
            iVar13 = iVar14;
            do {
                pcVar10 = pcVar10 + 1;
                iVar13 = iVar13 + 1;
            } while (*pcVar10 != L'\0');
            if (_var_28h == iVar13 * 2 + 2) goto code_r0x00018217;
            pcVar10 = L"PlatformRecoveryXXXX";
            iVar13 = iVar14;
            do {
                pcVar10 = pcVar10 + 1;
                iVar13 = iVar13 + 1;
            } while (*pcVar10 != L'\0');
            if (_var_28h == iVar13 * 2 + 2) goto code_r0x00018217;
            pcVar10 = L"keyXXXX";
            do {
                pcVar10 = pcVar10 + 1;
                iVar14 = iVar14 + 1;
            } while (*pcVar10 != L'\0');
            if (_var_28h == iVar14 * 2 + 2) {
                cVar3 = (**(iStack_260 + 8))(iStack_260,iVar5,acStack_178);
                if (cVar3 != '\0') {
                    fcn.0001f144(iVar5);
                }
            }
        }
        if (cVar19 == '\0') {
            _var_28h = iStack_238;
            if (iVar4 == -0x7ffffffffffffff2) goto code_r0x0001853a;
            iVar13 = iStack_238;
            uVar15 = uStack_230;
            goto code_r0x000180cc;
        }
code_r0x0001853a:
        uVar11 = 0;
        fcn.0001470c(&puStack_268);
        uVar12 = 0;
        if (*0x43178 != 0) {
            iVar16 = *0x43138;
            do {
                if (*(*0x43170 + uVar11 * 0x48) == iVar16) {
                    *0x43138 = iVar16 + -1;
                    uVar11 = 0xffff;
                    iVar16 = *0x43138;
                }
                uVar11 = uVar11 + 1;
            } while (uVar11 < *0x43178);
            cVar19 = var_10h_2;
        }
        uVar11 = 0;
        if (*0x43160 != 0) {
            uVar17 = uVar11;
            iVar16 = *0x43148;
            do {
                if (*(*0x43168 + uVar17 * 0x48) == iVar16) {
                    *0x43148 = iVar16 + -1;
                    uVar17 = 0xffff;
                    iVar16 = *0x43148;
                }
                uVar17 = uVar17 + 1;
            } while (uVar17 < *0x43160);
            cVar19 = var_10h_2;
        }
        if (*0x43178 < uStack_258) {
            *0x43170 = fcn.0001478c(*0x43170,uStack_258 * 0x48,*0x43178 * 0x48);
        }
        if (*0x43160 < uVar20) {
            *0x43168 = fcn.0001478c(*0x43168,uVar20 * 0x48,*0x43160 * 0x48);
        }
        var_10h_2 = fcn.0001504c(*0x43130 * 2);
        iVar5 = *0x43158;
        uVar20 = *0x43130;
        if (var_10h_2 != 0) {
            if (*0x43130 != 0) {
                do {
                    uVar11 = uVar11 + 1;
                    *(var_10h_2 + uVar12 * 2) = *(iVar5 + uVar12 * 0x48);
                    uVar12 = uVar11;
                } while (uVar12 < uVar20);
            }
            iVar4 = (**(*0x36d98 + 0x58))(L"PlatformRecoveryOrder",0x33d60,2,uVar20 * 2,var_10h_2);
            fcn.0001470c(&var_10h_2);
        }
        if (*0x36f78 < *0x36f60) {
            *0x36f50 = fcn.0001478c(*0x36f50,*0x36f60 * 0x14,*0x36f78 * 0x14);
        }
        if (cVar19 == '\0') {
            fcn.00019110();
            fcn.00019350();
        }
code_r0x00018721:
        fcn.0001470c(&iStack_270);
    }
    return iVar4;
}


/* fcn.0001e68c @ 0x1e68c */

void fcn.0001e68c(void)

{
    int64_t arg1;
    int16_t *arg2;
    int16_t *piVar1;
    int64_t arg4;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iStackX_10;
    int16_t *piStackX_18;
    
    uVar5 = 0;
    if (*0x43180 != 0) {
        uVar3 = uVar5;
        uVar4 = uVar5;
        do {
            arg2 = fcn.0001ec60(*0x431d0,3,*(uVar4 + 8 + *0x43188));
            if (arg2 == NULL) {
                return;
            }
            uVar2 = uVar5;
            for (piVar1 = arg2; *piVar1 != 0; piVar1 = piVar1 + 1) {
                uVar2 = uVar2 + 1;
            }
            arg1 = uVar2 * 2 + 0x14;
            piStackX_18 = arg2;
            arg4 = fcn.0001504c(arg1);
            iStackX_10 = arg4;
            if (arg4 != 0) {
                fcn.0001c360(arg4,arg1,arg2,2);
                fcn.0001fb70(*0x431d0,3,*(uVar4 + 8 + *0x43188),arg4);
            }
            fcn.0001470c(&iStackX_10);
            fcn.0001470c(&piStackX_18);
            uVar3 = uVar3 + 1;
            uVar4 = uVar4 + 0x20;
        } while (uVar3 < *0x43180);
    }
    return;
}


/* fcn.00020b64 @ 0x20b64 */

int16_t fcn.00020b64(int64_t arg1)

{
    int16_t iVar1;
    uint16_t auStackX_8 [4];
    uint32_t auStackX_10 [2];
    uint16_t *puStackX_18;
    
    auStackX_8[0] = 0;
    auStackX_10[0] = 0;
    auStackX_10[1] = 0;
    puStackX_18 = fcn.000113fc(0x35848,0x33ce0,0,auStackX_10);
    if (puStackX_18 == NULL) {
        auStackX_8[0] = 10;
        (**(*0x36d98 + 0x58))(L"Timeout",0x33ce0,7,2,auStackX_8);
    }
    else {
        auStackX_8[0] = *puStackX_18;
        fcn.0001470c(&puStackX_18);
    }
    if (auStackX_8[0] == 0xffff) {
        iVar1 = -1;
    }
    else if (auStackX_8[0] < 0x1999) {
        iVar1 = auStackX_8[0] * 10;
    }
    else {
        iVar1 = -2;
    }
    return iVar1;
}


/* fcn.000148bc @ 0x148bc */

void fcn.000148bc(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uStack_18;
    uint64_t uStack_10;
    
    uStack_10 = 0;
    uStack_18 = 0;
    iVar1 = fcn.00014804(noname_0,&uStack_10,&uStack_18);
    if (iVar1 == 0) {
        (*arg1)(arg2,arg3);
    }
    else {
        for (uVar2 = uStack_10; uVar2 <= uStack_18; uVar2 = uVar2 + 1) {
            (**(uVar2 * 8 + 0x35910))(arg2,arg3);
        }
    }
    return;
}


/* fcn.00012448 @ 0x12448 */

void fcn.00012448(void)

{
    *0x36e30 = 0;
    *0x36e70 = *0x36e70 + -1;
    (**(*0x36d98 + 0x58))(0x35248,0x34538,2,4,0x36e30);
    return;
}


/* fcn.00021b2c @ 0x21b2c */

ulong fcn.00021b2c(void)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    int *piVar4;
    int iVar5;
    uint32_t auStackX_8 [2];
    int *piStackX_10;
    
    uVar2 = 0;
    iVar5 = 0;
    auStackX_8[0] = 0;
    auStackX_8[1] = 0;
    piStackX_10 = fcn.000113fc(0x35248,0x34538,0,auStackX_8);
    if (piStackX_10 != NULL) {
        iVar5 = *piStackX_10;
    }
    fcn.0001470c(&piStackX_10);
    auStackX_8[0] = 0;
    auStackX_8[1] = 0;
    piStackX_10 = fcn.000113fc(0x358e0,0x34548,0,auStackX_8);
    if (piStackX_10 != NULL) {
        if (*piStackX_10 != 0) {
            iVar5 = *piStackX_10;
        }
    }
    fcn.0001470c(&piStackX_10);
    piVar4 = 0x34560;
    iVar1 = *0x34560;
    while( true ) {
        if (iVar1 == -1) {
            return 0;
        }
        if (iVar5 == iVar1) break;
        piVar4 = piVar4 + 10;
        iVar1 = *piVar4;
    }
    if (*(piVar4 + 8) != NULL) {
        uVar2 = (**(piVar4 + 8))(piVar4);
    }
    if (*(piVar4 + 0x15) == '\0') {
        uVar2 = 0x8000000000000003;
    }
    if ((piVar4[4] != 0) && (iVar3 = fcn.0001f770(), -1 < iVar3)) {
        (**(*0x36f48 + 0x80))(2,piVar4);
    }
    if ((piVar4[5] != '\0') && (piVar4[1] != 0)) {
        iVar3 = fcn.0001f770();
        if ((-1 < iVar3) && (iVar3 = (**(*0x36f48 + 0x80))(0,piVar4), -1 < iVar3)) {
            *0x36e59 = 1;
        }
        iVar3 = fcn.0001f770();
        if (-1 < iVar3) {
            (**(*0x36f48 + 0x80))(1,piVar4);
        }
    }
    if (piVar4[6] != '\0') {
        *0x36e59 = 0;
        return 0x8000000000000013;
    }
    return uVar2;
}


/* fcn.0001e410 @ 0x1e410 */

int64_t fcn.0001e410(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong in_stack_00000028;
    ulong in_stack_00000030;
    
    iVar1 = (**(*0x36d88 + 0x50))((-(arg2 != 0) & 0x200) + 0x80000000,in_stack_00000030,arg2,arg3,arg1);
    if ((-1 < iVar1) && (iVar1 = (**(*0x36d88 + 0x58))(*arg1,arg4 & 0xffffffff,in_stack_00000028), iVar1 < 0)) {
        fcn.0001e488(arg1);
    }
    return iVar1;
}


/* fcn.0001f770 @ 0x1f770 */

//WARNING: Variable defined which should be unmapped: var_8h

int64_t fcn.0001f770(void)

{
    int64_t iVar1;
    ulong in_R9;
    int64_t var_bp_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = 0;
    if ((*0x36f48 == 0) &&
       (iVar1 = (**(*0x36d88 + 0x140))(0x33cd0,0,0x36f48,in_R9,0xa2df5376,0x178bff90), iVar1 < 0)) {
        *0x36f48 = 0;
        return iVar1;
    }
    (**(*0x36f48 + 0x70))(0,1,0x431d0,0);
    (**(*0x36f48 + 0x70))(3,1,0x43188,0x43180);
    (**(*0x36f48 + 0x70))(4,1,0x36e60);
    if (*0x36e34 == '\0') {
        (**(*0x36f48 + 0x70))(5,1,0,0x36e38);
    }
    (**(*0x36f48 + 0x70))(6,1,0,0x36eb8);
    (**(*0x36f48 + 0x70))(8,1,0,0x43138);
    (**(*0x36f48 + 0x70))(9,1,0,0x43148);
    (**(*0x36f48 + 0x70))(0xc,1,0,0x36ec0);
    (**(*0x36f48 + 0x70))(0xd,1,0,0x36ec8);
    (**(*0x36f48 + 0x60))(*0x36d90,*0x36d80);
    return iVar1;
}


/* fcn.000155e8 @ 0x155e8 */

void fcn.000155e8(uint32_t arg1,uint32_t arg2,int64_t arg3,uint32_t arg4)

{
    uint in_register_0000000c;
    uint in_register_00000014;
    uint in_R9;
    
    if ((((CONCAT44(in_register_00000014,arg2) < CONCAT44(in_R9,arg4)) && (CONCAT44(in_R9,arg4) < 0x65)) &&
        (CONCAT44(in_register_0000000c,arg1) < arg3)) && (arg3 < 0x20)) {
        *0x36e98 = CONCAT44(in_register_0000000c,arg1);
        *0x36eb0 = CONCAT44(in_register_0000000c,arg1);
        *0x36e90 = CONCAT44(in_register_0000000c,arg1);
        *0x36ea8 = CONCAT44(in_register_00000014,arg2);
        *0x36ea0 = CONCAT44(in_register_00000014,arg2);
        *0x34188 = CONCAT44(in_R9,arg4);
        *0x34180 = arg3;
    }
    return;
}


/* fcn.00020d58 @ 0x20d58 */

ulong fcn.00020d58(uint32_t arg1,int64_t arg2,int64_t arg3,ulong noname_3,int64_t arg_30h)

{
    ulong uVar1;
    char16_t *arg1_00;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    *arg_30h = 0;
    if (arg2 == 0) {
        if (arg1 != 5) {
            return 0;
        }
        var_10h = -0x37ee05c8;
        arg3 = &var_10h;
        var_ch = 0x457942c8;
        arg1_00 = L"AMITSESetup";
        var_8h = -0x169f4457;
        var_4h = 0x34fbdd4e;
    }
    else {
        arg1_00 = arg2;
    }
    uVar1 = fcn.000113fc(arg1_00,arg3,0,arg_30h);
    return uVar1;
}


/* fcn.000110ac @ 0x110ac */

int64_t fcn.000110ac(int64_t arg1)

{
    ulong *puVar1;
    
    *0x36e50 = 0;
    puVar1 = *(*0x36d80 + 0x40);
    if (puVar1 != NULL) {
        (**puVar1)(puVar1,0);
        (**(*(*0x36d80 + 0x40) + 0x30))(*(*0x36d80 + 0x40));
        (**(*(*0x36d80 + 0x40) + 0x40))(*(*0x36d80 + 0x40),0);
    }
    return arg1;
}


/* fcn.00018888 @ 0x18888 */

int16_t * fcn.00018888(uint32_t arg1)

{
    uint64_t uVar1;
    int16_t *piVar2;
    
    uVar1 = 0;
    if (*0x43178 != 0) {
        piVar2 = *0x43170;
        do {
            if (*piVar2 == arg1) {
                return *0x43170 + uVar1 * 0x24;
            }
            uVar1 = uVar1 + 1;
            piVar2 = piVar2 + 0x24;
        } while (uVar1 < *0x43178);
    }
    return NULL;
}


/* fcn.0001be70 @ 0x1be70 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.0001be70(int64_t arg1)

{
    uint32_t *arg1_00;
    char16_t *pcVar1;
    int64_t iVar2;
    uint *puVar3;
    ulong uVar4;
    int64_t iVar5;
    int16_t *arg1_01;
    uint32_t *puVar6;
    int64_t iVar7;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t iStack_48;
    uint *puStack_40;
    int64_t var_10h;
    int64_t var_8h;
    
    iVar7 = 0;
    aiStackX_18[1] = 2;
    iStackX_10 = 0;
    pcVar1 = L"BOOTXXXX";
    iVar5 = iVar7;
    do {
        pcVar1 = pcVar1 + 1;
        iVar5 = iVar5 + 1;
    } while (*pcVar1 != L'\0');
    iVar5 = iVar5 * 2 + 2;
    iVar2 = fcn.0001504c(iVar5);
    if (iVar2 == 0) {
        return 0;
    }
    iStack_48 = iVar2;
    fcn.0001c360(iVar2,iVar5,0x35510,arg1 & 0xffff);
    puVar6 = &iStackX_10;
    puVar3 = fcn.000113fc(iVar2,0x33ce0,0,puVar6);
    iVar5 = iVar7;
    puStack_40 = puVar3;
    if ((puVar3 == NULL) || (iVar5 = fcn.0001504c(0x48), aiStackX_18[0] = iVar5, iVar5 == 0)) goto code_r0x0001c015;
    fcn.000152c0(iVar5,aiStackX_18 + 8,iVar2 + 8,puVar6);
    arg1_01 = puVar3 + 6;
    *(iVar5 + 4) = *puVar3;
    puVar6 = iVar5 + 8;
    uVar4 = fcn.00015630(arg1_01);
    *puVar6 = uVar4;
    for (; *arg1_01 != 0; arg1_01 = arg1_01 + 1) {
        iVar7 = iVar7 + 1;
    }
    iVar7 = puVar3 + (iVar7 + 4) * 2;
    iVar2 = fcn.0001504c(*(puVar3 + 1));
    arg1_00 = iVar5 + 0x10;
    *arg1_00 = iVar2;
    if (iVar2 != 0) {
        (**(*0x36d88 + 0x160))(iVar2,iVar7,*(puVar3 + 1));
        iVar7 = iVar7 + *(puVar3 + 1);
        iStackX_10 = puVar3 + (iStackX_10 - iVar7);
        if (iStackX_10 == 0) goto code_r0x0001c015;
        iVar2 = fcn.000150a0(iStackX_10);
        *(iVar5 + 0x18) = iVar2;
        if (iVar2 != 0) {
            *(iVar5 + 0x20) = iStackX_10;
            (**(*0x36d88 + 0x160))(*(iVar5 + 0x18),iVar7,iStackX_10);
            goto code_r0x0001c015;
        }
    }
    if (*arg1_00 != 0) {
        fcn.0001470c(arg1_00);
    }
    if (*puVar6 != 0) {
        fcn.0001470c(puVar6);
    }
    if (*(iVar5 + 0x18) != 0) {
        fcn.0001470c(iVar5 + 0x18);
    }
    fcn.0001470c(aiStackX_18);
    iVar5 = aiStackX_18[0];
code_r0x0001c015:
    fcn.0001470c(&iStack_48);
    if (puVar3 != NULL) {
        fcn.0001470c(&puStack_40);
    }
    return iVar5;
}


/* fcn.0001fce0 @ 0x1fce0 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.0001fce0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    uint16_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint16_t uVar5;
    uint16_t uVar6;
    ushort auStackX_8 [8];
    uint16_t auStackX_18 [4];
    int64_t iStackX_20;
    int16_t var_40h;
    int64_t var_58h;
    ulong uStack_48;
    ulong uStack_40;
    int64_t var_10h;
    int64_t var_8h;
    
    uVar1 = *(arg1 + 0x38);
    uStack_40 = 0;
    uVar5 = 0;
    uVar6 = 0;
    auStackX_8[0] = 0;
    auStackX_18[0] = 0;
    uStack_48 = 0;
    iStackX_20 = 0;
    iVar4 = fcn.0001d308();
    if ((-1 < iVar4) &&
       (iVar4 = (**(*0x36f20 + 0x30))(*0x36f20,auStackX_8,&uStack_48,auStackX_18,&iStackX_20), -1 < iVar4)) {
        if (auStackX_18[0] != 0) {
            do {
                uVar2 = *(uVar5 * 0x45 + iStackX_20);
                if ((uVar2 < 0xfffc) || (uVar2 == 0xfffe)) {
                    *(uVar5 * 0x45 + iStackX_20) = 0xfffe;
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < auStackX_18[0]);
        }
        iVar3 = *(arg1 + 0x40);
        if ((((iStackX_20 != 0) && (iVar3 != 0)) && (arg2 < uVar1)) && (*(arg2 * 0x68 + iVar3) < auStackX_18[0])) {
            *(*(arg2 * 0x68 + iVar3) * 0x45 + iStackX_20) = 0;
            uVar6 = 1;
        }
        if (*0x36e1d == '\0') {
            fcn.0001d938(uVar6);
        }
        if (uVar6 == 0) {
            iVar4 = -0x7ffffffffffffffd;
        }
    }
    return iVar4;
}


/* fcn.000197dc @ 0x197dc */

//WARNING: Type propagation algorithm not settling

uint32_t ******* fcn.000197dc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t *arg3_00;
    int16_t iVar1;
    int16_t *piVar2;
    char cVar3;
    uint8_t uVar4;
    char cVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint32_t *******pppppppuVar9;
    uint32_t *******pppppppuVar10;
    uint32_t *******arg3_01;
    int64_t iVar11;
    ulong uVar12;
    uint32_t *******arg1_00;
    uint *arg1_01;
    int64_t iVar13;
    uint64_t uVar14;
    uint32_t *arg4_00;
    uint32_t *******pppppppuVar15;
    int iVar16;
    uint32_t *******pppppppuVar17;
    uint16_t *puStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    char cStackX_20;
    uint32_t *******pppppppuVar18;
    uint32_t *******pppppppuStack_e8;
    char cStack_e0;
    int64_t iStack_d8;
    uint32_t *******in_stack_ffffffffffffff30;
    uint32_t *******pppppppuStack_c8;
    uint uStack_c0;
    uint uStack_bc;
    uint uStack_b8;
    uint uStack_b4;
    ulong uStack_b0;
    uint32_t *******pppppppuStack_a8;
    uint uStack_a0;
    uint uStack_9c;
    uint uStack_98;
    uint uStack_94;
    int iStack_90;
    int iStack_8c;
    uint32_t *******pppppppuStack_88;
    uint32_t *******pppppppuStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    uint32_t *******pppppppuStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    uint32_t auStack_50 [4];
    
    cStackX_20 = arg4;
    uStack_a0 = 0x3677770f;
    uStack_b0 = 0;
    cStack_e0 = '\0';
    pppppppuVar17 = 0x8000000000000003;
    uStack_9c = 0x43b2efb2;
    uStack_98 = 0x2b3aeb8;
    pppppppuVar15 = NULL;
    uStack_94 = 0x824860e9;
    uStack_c0 = 0x8c12a959;
    uStack_bc = 0x436270bc;
    uStack_b8 = 0x5b837b4;
    uStack_b4 = 0x6e91a114;
    iStack_60 = 0;
    auStack_50[0] = 0;
    auStack_50[1] = 0;
    iStack_d8 = 0;
    pppppppuStack_a8 = NULL;
    iStack_78 = 0;
    pppppppuStack_c8 = NULL;
    puStackX_8 = puStackX_8 & 0xffffffffffffff00;
    iStack_90 = 0;
    if (arg1 == 0) {
        return 0x8000000000000002;
    }
    iVar13 = *0x36e38;
    iStack_8c = *0x36e38;
    *0x36e38 = 7;
    iStackX_10 = arg2;
    iStackX_18 = arg3;
    pppppppuStack_e8 = (**(*0x36d88 + 0x170))(0x200,8,0x15048,0,0x33d30,&uStack_70);
    if (pppppppuStack_e8 < 0) {
        return pppppppuStack_e8;
    }
    (**(*0x36d88 + 0x68))(uStack_70);
    (**(*0x36d88 + 0x70))(uStack_70);
    fcn.00028124(1,0x3051001);
    fcn.0002006c();
    if (*0x36e30 == 7) {
        if (((*arg1 & 0x7f) == 5) && (*(arg1 + 1) == '\x01')) {
            fcn.00014868(0xffff0009,0x15048);
            fcn.00020564();
        }
        else {
            fcn.00014868(0xffff000b,0x21b24);
            if (*0x36ed0 != 0) {
                (**(*0x36d88 + 0x70))();
                *0x36ed0 = 0;
            }
            if (*0x36ee0 != 0) {
                (**(*0x36d88 + 0x70))();
                *0x36ee0 = 0;
            }
            if ((((*0x36e60 != 0) && (*0x430e8 != 0)) && (*0x430e0 != 0)) &&
               ((iVar13 = *(*(*0x36e60 + 0x18) + 8), *0x430e8 != *(iVar13 + 4) || (*0x430e0 != *(iVar13 + 8))))) {
                fcn.0001c418(0x430e8,0x430e0);
            }
            fcn.00015278(&uStack_a0);
            fcn.000196fc();
        }
        puStackX_8 = NULL;
        iVar13 = (**(*0x36d88 + 0x140))(0x343c8,0,&puStackX_8);
        if (-1 < iVar13) {
            pppppppuVar17 = (**puStackX_8)();
        }
        pppppppuStack_e8 = pppppppuVar17;
        if (((*arg1 & 0x7f) == 5) && (*(arg1 + 1) == '\x01')) {
            fcn.0001f8fc();
        }
code_r0x00019a3e:
        fcn.00015278(&uStack_c0);
        return pppppppuStack_e8;
    }
    if (((*arg1 & 0x7f) == 5) && (*(arg1 + 1) == '\x01')) {
        if ((*0x36e48 != NULL) && ((***0x36e48)(*0x36e48,&iStack_90,0,0), iStack_90 != 0)) {
            (*(*0x36e48)[1])(*0x36e48,0);
            fcn.00020698();
        }
        fcn.00014868(0xffff0009,0x15048);
        fcn.00020564();
        pppppppuVar15 = fcn.0001d308();
        if (-1 < pppppppuVar15) {
            pppppppuVar15 = (**(*0x36f20 + 0x20))(*0x36f20,arg1,0,0);
        }
        pppppppuStack_e8 = pppppppuVar15;
        fcn.0001f8fc();
        if ((pppppppuStack_e8 < 0) && (pppppppuStack_e8 == 0x800000000000001a)) {
            if ((*0x431a0 == 0) || (*0x43198 == 0)) {
                *0x34158 = 0x18;
                *0x34160 = 0x50;
            }
            else {
                *0x34158 = *0x431a0;
                *0x34160 = *0x43198;
            }
            fcn.00020760(0x1a);
            fcn.000155e8(0,0,*0x431b8 + -1,*0x431b0);
            *0x34198 = 0xffff;
            *0x34190 = 0xffff;
        }
        fcn.00014868(0xffff000a,0x15048);
        *0x36e38 = iVar13;
        goto code_r0x00019a3e;
    }
    uVar6 = (**(*0x36d88 + 0x18))(0x1f);
    (**(*0x36d88 + 0x20))(4);
    pppppppuVar18 = NULL;
    if (*arg1 == '\x04') {
        if (*(arg1 + 1) == '\x01') {
            arg1 = fcn.0001a4dc(arg1);
            cStack_e0 = '\x01';
            pppppppuVar18 = NULL;
            pppppppuVar15 = NULL;
        }
        else {
            if ((*(arg1 + 1) != '\x04') || (*0x36eea != '\0')) goto code_r0x00019c98;
            iVar11 = fcn.0001ae14(arg1);
            in_stack_ffffffffffffff30 = NULL;
            if (iVar11 != 0) {
                *0x36eea = 1;
                pppppppuStack_e8 = fcn.00018fd4(iVar11);
                fcn.0001470c(&stack0xffffffffffffff30);
                iVar11 = 0;
                iVar16 = 0;
                if (pppppppuStack_e8 < 0) {
                    arg3_00 = arg1 + 4;
                    iVar1 = *arg3_00;
                    piVar2 = arg3_00;
                    iVar7 = iVar11;
                    while (iVar1 != 0) {
                        piVar2 = piVar2 + 1;
                        iVar7 = iVar7 + 1;
                        iVar1 = *piVar2;
                    }
                    iVar7 = fcn.0001504c(iVar7 * 2 + 2);
                    if (iVar7 != 0) {
                        iVar1 = *arg3_00;
                        piVar2 = arg3_00;
                        while (iVar1 != 0) {
                            piVar2 = piVar2 + 1;
                            iVar11 = iVar11 + 1;
                            iVar16 = iVar11;
                            iVar1 = *piVar2;
                        }
                        fcn.00027364(iVar7,iVar16 + 1,arg3_00);
                        pppppppuStack_e8 = fcn.00018fd4(iVar7);
                        fcn.0001470c(&stack0xffffffffffffff30);
                    }
                }
                *0x36eea = '\0';
                *0x36e38 = iVar13;
                goto code_r0x0001a4af;
            }
        }
    }
    else {
code_r0x00019c98:
        cVar3 = fcn.0001af88(arg1);
        if (cVar3 != '\0') {
            iStack_d8 = fcn.0001b028(arg1,&pppppppuStack_c8,&pppppppuStack_a8);
            pppppppuVar15 = pppppppuStack_c8;
            if (iStack_d8 == 0) {
                pppppppuStack_e8 = 0x800000000000000e;
            }
            else {
                iStack_78 = fcn.0001bdf0(pppppppuStack_c8);
            }
            pppppppuVar18 = pppppppuStack_a8;
            if (pppppppuVar15 != NULL) {
                arg1 = pppppppuVar15;
            }
        }
    }
    cVar3 = fcn.0001c040(arg1);
    if (cVar3 != '\0') {
        fcn.00015278(&uStack_a0);
        fcn.00014868(0xffff000b,0x21b24);
    }
    if ((((*0x36e60 != 0) && (*0x430e8 != 0)) && (*0x430e0 != 0)) &&
       ((iVar13 = *(*(*0x36e60 + 0x18) + 8), *0x430e8 != *(iVar13 + 4) || (*0x430e0 != *(iVar13 + 8))))) {
        fcn.0001c418(0x430e8,0x430e0);
    }
    uVar12 = 0;
    fcn.00028124(1,0x3090001);
    iVar13 = iStack_d8;
    arg1_00 = CONCAT71(uVar12 >> 8,1);
    arg3_01 = arg1;
    iVar11 = iStack_d8;
    pppppppuStack_e8 = (**(*0x36d88 + 200))();
    if (pppppppuStack_e8 < 0) {
        iVar13 = -0x7ffffffffffffffd;
        if ((pppppppuStack_e8 == 0x800000000000001a) || (pppppppuStack_e8 == 0x800000000000000f)) {
            puStackX_8 = CONCAT71(puStackX_8._1_7_,1);
        }
        fcn.0001f994(pppppppuStack_e8);
        arg1_00 = arg1;
        iVar7 = fcn.0001f5d8(arg1);
        if ((*0x36e50 == 6) && (arg1_00 = arg1, cVar3 = fcn.0001c040(arg1), cVar3 != '\0')) {
            iVar13 = 0;
            if (iVar7 < 0) {
                in_stack_ffffffffffffff30 = NULL;
                pppppppuStack_88 = arg1;
                iVar8 = (**(*0x36d88 + 0xb8))(0x34010,&pppppppuStack_88,&stack0xffffffffffffff30);
                arg3_01 = &stack0xffffffffffffff30;
                if (iVar8 < 0) {
                    arg1_00 = 0x33e90;
                    pppppppuStack_88 = arg1;
                    iVar8 = (**(*0x36d88 + 0xb8))();
                    if (-1 < iVar8) goto code_r0x00019e75;
                }
                else {
                    arg1_00 = 0x33f70;
                    pppppppuStack_88 = arg1;
                    iVar8 = (**(*0x36d88 + 0xb8))();
                    if (iVar8 < 0) {
code_r0x00019e75:
                        arg1_00 = in_stack_ffffffffffffff30;
                        iVar11 = CONCAT71(iVar11 >> 8,1);
                        arg3_01 = NULL;
                        in_stack_ffffffffffffff30 = arg1_00;
                        (**(*0x36d88 + 0x108))();
                        goto code_r0x00019e8e;
                    }
                }
                iVar13 = -0x7ffffffffffffffd;
                goto code_r0x00019e8e;
            }
code_r0x00019e9a:
            uVar12 = 0;
            fcn.00028124(1,0x3090001);
            iVar11 = 0;
            arg1_00 = CONCAT71(uVar12 >> 8,1);
            pppppppuVar18 = NULL;
            arg3_01 = arg1;
            pppppppuVar9 = (**(*0x36d88 + 200))();
            pppppppuStack_e8 = pppppppuVar9;
            if (pppppppuVar9 < 0) {
                fcn.0001f994(pppppppuVar9);
                arg1_00 = pppppppuVar9;
                goto code_r0x00019eed;
            }
        }
        else {
code_r0x00019e8e:
            if ((-1 < iVar7) || (-1 < iVar13)) goto code_r0x00019e9a;
code_r0x00019eed:
            if (pppppppuStack_e8 < 0) {
                pppppppuStack_a8 = NULL;
                pppppppuVar9 = arg1;
                pppppppuStack_68 = arg1;
                pppppppuVar10 = fcn.0001a928(arg1);
                if (pppppppuVar10 == NULL) {
                    arg3_01 = &pppppppuStack_80;
                    pppppppuVar9 = 0x33f70;
                    pppppppuStack_e8 = (**(*0x36d88 + 0xb8))();
                }
                else {
                    pppppppuStack_80 = pppppppuVar10;
                }
                arg1_00 = pppppppuStack_80;
                if ((((pppppppuStack_e8 < 0) || (pppppppuVar9 = pppppppuStack_68, (*pppppppuStack_68 & 0x7f) != 0x7f))
                    || (*(pppppppuStack_68 + 1) != -1)) && (pppppppuVar10 == NULL)) {
                    pppppppuStack_e8 = 0x800000000000000e;
                    arg1_00 = pppppppuVar9;
                }
                else {
                    cVar3 = fcn.0001afd8(arg1);
                    if (cVar3 == '\0') {
                        pppppppuVar9 = fcn.0001516c(arg1_00,0x343e0,in_stack_ffffffffffffff30);
                        pppppppuStack_c8 = pppppppuVar9;
code_r0x00019fc8:
                        pppppppuVar15 = NULL;
                        if (pppppppuVar9 != NULL) {
                            pppppppuStack_e8 = (**(*0x36d88 + 0x98))(pppppppuStack_80,0x34010,&pppppppuStack_a8);
                            if ((-1 < pppppppuStack_e8) &&
                               (iStack_58 = fcn.000150a0(*(pppppppuStack_a8[1] + 0xc)), iStack_58 != 0)) {
                                (*pppppppuStack_a8[3])
                                          (pppppppuStack_a8,*pppppppuStack_a8[1],0,*(pppppppuStack_a8[1] + 0xc),
                                           iStack_58);
                                fcn.0001470c(&iStack_58);
                            }
                            fcn.00028124(1,0x3090001);
                            iVar11 = 0;
                            pppppppuVar18 = NULL;
                            pppppppuStack_e8 = (**(*0x36d88 + 200))(1);
                            if (pppppppuStack_e8 < 0) {
                                fcn.0001f994(pppppppuStack_e8);
                            }
                            arg1_00 = &pppppppuStack_c8;
                            fcn.0001470c(arg1_00);
                            arg3_01 = pppppppuVar9;
                            pppppppuVar15 = pppppppuStack_c8;
                            goto code_r0x0001a095;
                        }
                    }
                    else {
                        arg1_00 = fcn.0002846c(arg1);
                        pppppppuVar9 = fcn.0001504c(arg1_00);
                        pppppppuVar15 = pppppppuVar9;
                        pppppppuStack_c8 = pppppppuVar9;
                        if (pppppppuVar9 != NULL) {
                            arg3_01 = fcn.0002846c(arg1);
                            arg1_00 = pppppppuVar9;
                            fcn.00033bd0(pppppppuVar9,arg1,arg3_01);
                            goto code_r0x00019fc8;
                        }
                    }
                    pppppppuStack_e8 = 0x800000000000000e;
                }
            }
        }
code_r0x0001a095:
        iVar13 = iStack_d8;
    }
    cVar3 = cStackX_20;
    if (cStackX_20 == '\x01') {
        if (pppppppuStack_e8 < 0) {
            pppppppuVar9 = &pppppppuStack_e8;
            fcn.00026394(arg1_00,0x3051002,arg3_01,iVar11);
            if (puStackX_8 == '\0') {
                out(0x70,0x7e);
                uVar4 = in(0x71);
                if ((uVar4 & 1) == 0) {
                    out(0x70,0x7e);
                    out(0x71,1);
                    (**(*0x36d98 + 0x68))(1,0,0,0,pppppppuVar18,pppppppuVar9);
                }
            }
        }
        else if (puStackX_8 == '\0') {
            out(0x70,0x7e);
            uVar4 = in(0x71);
            if ((uVar4 & 1) != 0) {
                out(0x70,0x7e);
                out(0x71,0);
            }
        }
    }
    if (cStack_e0 != '\0') {
        (**(*0x36d88 + 0x48))(arg1);
    }
    if (pppppppuStack_e8 < 0) {
        cVar3 = fcn.0001c040(arg1);
        if (cVar3 != '\0') {
            fcn.00014868(0xffff000c,0x15048);
            fcn.00015278(&uStack_c0);
        }
        fcn.000114c0();
    }
    else {
        pppppppuStack_e8 = (**(*0x36d88 + 0x98))(uStack_b0,0x33ca0,&iStack_60);
        if ((-1 < pppppppuStack_e8) && (*(iStack_60 + 0x50) != 1)) {
            *0x36e38 = iStack_8c;
            pppppppuStack_e8 = 0x8000000000000003;
            if (4 < uVar6) {
                (**(*0x36d88 + 0x18))(uVar6);
                pppppppuVar17 = pppppppuStack_e8;
            }
            return pppppppuVar17;
        }
        iVar11 = *(*0x36d80 + 0x40);
        if (iVar11 != 0) {
            (**(iVar11 + 0x40))(iVar11,0);
        }
        iVar11 = (**(*0x36d88 + 0x98))(uStack_b0,0x33ca0);
        if (-1 < iVar11) {
            *(puStackX_8 + 0x1c) = iStackX_10;
            *(puStackX_8 + 0x18) = iStackX_18;
        }
        cVar5 = fcn.0001c040(arg1);
        if (cVar5 == '\0') {
            fcn.00014868(0xffff000b,0x21b24);
            fcn.00015278(&uStack_a0);
        }
        fcn.000196fc();
        arg4_00 = auStack_50;
        puStackX_8 = fcn.000113fc(0x355a0,0x33ce0,0,arg4_00);
        if (puStackX_8 != NULL) {
            iVar11 = fcn.00018888(*puStackX_8);
            if ((iVar11 != 0) && ((*(iVar11 + 4) & 0x100) == 0)) {
                arg4_00 = NULL;
                pppppppuVar17 = (**(*0x36d88 + 0x100))(300,0);
                *0x36ee9 = '\x01';
            }
            fcn.0001470c(&puStackX_8);
        }
        fcn.00028124(1,0x3090002);
        uVar12 = 0;
        pppppppuStack_e8 = (**(*0x36d88 + 0xd0))(uStack_b0,0);
        if ((-1 < pppppppuVar17) && (*0x36ee9 != '\0')) {
            arg4_00 = NULL;
            uVar12 = 0;
            (**(*0x36d88 + 0x100))(0,0);
            *0x36ee9 = '\0';
        }
        if (*0x36ed0 != 0) {
            (**(*0x36d88 + 0x70))();
            *0x36ed0 = 0;
        }
        if (*0x36ee0 != 0) {
            (**(*0x36d88 + 0x70))();
            *0x36ee0 = 0;
        }
        fcn.00014868(0xffff000c,0x15048);
        arg1_01 = &uStack_c0;
        fcn.00015278(arg1_01);
        fcn.000114c0();
        if (pppppppuStack_e8 < 0) {
            fcn.00020698();
            if (cVar3 == '\x01') {
                fcn.00026394(arg1_01,0x3051003,uVar12,arg4_00);
            }
            if (*0x431d8 != 0) {
                fcn.00033b7e(*0x431d8,0xb71b04,0);
            }
            iVar11 = *(*0x36d80 + 0x40);
            if (iVar11 != 0) {
                (**(iVar11 + 0x40))(iVar11,0);
                (**(*(*0x36d80 + 0x40) + 0x28))(*(*0x36d80 + 0x40),0xf);
                (**(*(*0x36d80 + 0x40) + 0x30))(*(*0x36d80 + 0x40));
            }
            uVar14 = *0x34158 - 1;
            if (*0x34190 == 0xffff) {
                *0x34190 = uVar14;
            }
            *0x34198 = 0;
            if (*0x34190 < uVar14) {
                *0x34190 = uVar14;
            }
        }
        else {
            fcn.00020698();
        }
    }
    if (iVar13 != 0) {
        fcn.0001470c(&iStack_d8);
    }
    if (pppppppuVar15 != NULL) {
        fcn.0001470c(&pppppppuStack_c8);
    }
    if (iStack_78 != 0) {
        fcn.0001bcfc(iStack_78);
        fcn.0001470c(&iStack_78);
    }
    *0x36e38 = iStack_8c;
code_r0x0001a4af:
    if (uVar6 < 5) {
        return pppppppuStack_e8;
    }
    (**(*0x36d88 + 0x18))(uVar6);
    return pppppppuStack_e8;
}


/* fcn.00021ca0 @ 0x21ca0 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h

int64_t fcn.00021ca0(void)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int iVar4;
    int *piVar5;
    int64_t iVar6;
    char acStackX_8 [8];
    int *piStackX_10;
    uint32_t auStackX_18 [2];
    int64_t iStackX_20;
    uint32_t var_48h;
    uint32_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    uint uStack_58;
    uint uStack_54;
    uint uStack_50;
    uint uStack_4c;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    
    iVar4 = 0;
    uStack_58 = 0x6449bc5;
    auStackX_18[0] = 0;
    auStackX_18[1] = 0;
    acStackX_8[0] = '\0';
    uStack_54 = 0x4f8c4494;
    uStack_50 = 0x241d7387;
    uStack_4c = 0xece7c064;
    iVar2 = fcn.00014f34(0xffff0027,0x1f984);
    if ((iVar2 != 0) && (iVar2 != -0x7fffffffffffffed)) {
        piStackX_10 = fcn.000113fc(0x35248,0x34538,0,auStackX_18);
        if (piStackX_10 != NULL) {
            iVar4 = *piStackX_10;
        }
        fcn.0001470c(&piStackX_10);
        auStackX_18[0] = 0;
        auStackX_18[1] = 0;
        piStackX_10 = fcn.000113fc(0x358e0,0x34548,0,auStackX_18);
        if (piStackX_10 != NULL) {
            if (*piStackX_10 != 0) {
                iVar4 = *piStackX_10;
            }
        }
        fcn.0001470c(&piStackX_10);
        piVar5 = 0x34560;
        iVar1 = *0x34560;
        while (iVar1 != -1) {
            if (iVar4 == iVar1) {
                if (piVar5[1] == 0) {
                    iVar6 = -0x7ffffffffffffffd;
                    iVar2 = (-(*(piVar5 + 0x16) != '\0') & 0x10) + 0x8000000000000003;
                    if (*(piVar5 + 0x17) != '\0') {
                        fcn.00018fd4(0x343e0);
                        fcn.00015278(&uStack_58);
                        auStackX_18[0] = 1;
                        auStackX_18[1] = 0;
                        iVar3 = (**(*0x36d98 + 0x48))(L"SecureBoot",0x33ce0,0,auStackX_18,acStackX_8);
                        if (((iVar3 < 0) || (acStackX_8[0] == '\0')) || (iVar3 < 0)) {
                            piStackX_10 = piStackX_10 & 0xffffffff00000000;
                            do {
                                iStackX_20 = fcn.0001a640(&piStackX_10,0x34170);
                                if (piStackX_10 != -1) {
                                    iVar6 = fcn.000197dc(iStackX_20,0,0,0);
                                }
                                fcn.0001470c(&iStackX_20);
                            } while ((iVar6 < 0) && (piStackX_10 != -1));
                        }
                    }
                }
                else {
                    iVar2 = fcn.0001f770();
                    if ((-1 < iVar2) && (iVar2 = (**(*0x36f48 + 0x80))(0,piVar5), -1 < iVar2)) {
                        *0x36e59 = 1;
                    }
                    iVar2 = fcn.0001f770();
                    if (-1 < iVar2) {
                        (**(*0x36f48 + 0x80))(1,piVar5);
                    }
                    iVar2 = -0x7fffffffffffffed;
                }
                break;
            }
            piVar5 = piVar5 + 10;
            iVar1 = *piVar5;
        }
    }
    return iVar2;
}


/* fcn.00018744 @ 0x18744 */

ulong fcn.00018744(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    ushort *arg1_00;
    ulong uVar2;
    ushort auStackX_20 [4];
    ushort *apuStack_28 [2];
    
    bVar1 = false;
    uVar2 = 0x800000000000000e;
    if (*0x36e1c == '\0') {
        arg1_00 = fcn.00018888(arg1);
        if (arg1_00 == NULL) {
            apuStack_28[0] = arg1_00;
            arg1_00 = fcn.0001be70(arg1);
            bVar1 = true;
            goto code_r0x00018794;
        }
    }
    else {
        arg1_00 = fcn.0001af0c(arg1,CONCAT71(arg2 >> 8,*0x36e1c));
code_r0x00018794:
        apuStack_28[0] = arg1_00;
        if (arg1_00 == NULL) goto code_r0x00018831;
    }
    auStackX_20[0] = *arg1_00;
    uVar2 = 0;
    apuStack_28[0] = arg1_00;
    (**(*0x36d98 + 0x58))(L"BootCurrent",0x33ce0,6,2,auStackX_20);
    if (*0x36e30 != 7) {
        fcn.0001db88(arg1_00,arg2,arg3);
    }
    uVar2 = fcn.000197dc(*(arg1_00 + 8),*(arg1_00 + 0xc),*(arg1_00 + 0x10),CONCAT71(uVar2 >> 8,1));
    (**(*0x36d98 + 0x58))(L"BootCurrent",0x33ce0,6,0,auStackX_20);
code_r0x00018831:
    if ((bVar1) && (arg1_00 != NULL)) {
        if (*(arg1_00 + 8) != 0) {
            fcn.0001470c(arg1_00 + 8);
        }
        if (*(arg1_00 + 4) != 0) {
            fcn.0001470c(arg1_00 + 4);
        }
        if (*(arg1_00 + 0xc) != 0) {
            fcn.0001470c(arg1_00 + 0xc);
        }
        fcn.0001470c(apuStack_28);
    }
    return uVar2;
}


/* fcn.00014f34 @ 0x14f34 */

ulong fcn.00014f34(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    uint64_t uStackX_18;
    uint64_t uStackX_20;
    
    uVar2 = 0;
    uStackX_20 = 0;
    uStackX_18 = 0;
    iVar1 = fcn.00014804(noname_0,&uStackX_20,&uStackX_18);
    if (iVar1 == 0) {
        uVar2 = (*arg1)();
    }
    else {
        for (uVar3 = uStackX_20; uVar3 <= uStackX_18; uVar3 = uVar3 + 1) {
            uVar2 = (**(uVar3 * 8 + 0x35910))();
        }
    }
    return uVar2;
}


/* fcn.00015fa0 @ 0x15fa0 */

ulong fcn.00015fa0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char cVar2;
    int64_t in_R9;
    uint64_t uVar3;
    
    uVar3 = *0x34180;
    cVar2 = arg2;
    iVar1 = arg1;
    if ((cVar2 != '\0') && (*0x34180 < *0x36e90)) {
        fcn.00015ea0();
        *0x36ea0 = *0x36ea8;
        *0x36e90 = uVar3;
    }
    iVar1 = fcn.000157a0(iVar1,arg2,arg1,in_R9);
    if (*0x36e8e != '\0') {
        uVar3 = *0x36e90 + iVar1;
        if (*0x34198 == 0xffff) {
            *0x34198 = *0x36eb0;
        }
        if (*0x34190 == 0xffff) {
            *0x34190 = uVar3;
        }
        if (*0x36eb0 < *0x34198) {
            *0x34198 = *0x36eb0;
        }
        if (*0x34190 < uVar3) {
            *0x34190 = uVar3;
        }
        fcn.00016678();
    }
    uVar3 = *0x34180;
    if (cVar2 == '\0') {
        if (*0x34160 < *0x36ea0) {
            *0x36ea0 = *0x36ea0 % *0x34160;
        }
        *0x36e90 = *0x36e90 + iVar1;
        if (*0x34180 < *0x36e90) {
            fcn.00015ea0();
            *0x36e90 = uVar3;
        }
    }
    else {
        *0x36e90 = *0x36e90 + 1 + iVar1;
        *0x36ea0 = *0x36ea8;
        if (*0x34158 < *0x36e90) {
            *0x36e90 = *0x34158;
        }
    }
    return 0;
}


/* fcn.0001c6e4 @ 0x1c6e4 */

void fcn.0001c6e4(void)

{
    int64_t arg1;
    int64_t arg2;
    uint64_t arg3;
    int64_t arg4;
    
    arg1 = **0x431c0;
    arg2 = (*0x431c0)[1];
    arg3 = (*0x431c0)[2];
    arg4 = (*0x431c0)[3];
    (*0x431c0)[8] = (*0x431c0)[8] + (*0x431c0)[7];
    if (((*0x431c0)[9] != '\0') && ((*0x431c0)[8] <= arg3)) {
        fcn.0001c7fc(arg1,arg2,arg3,arg4);
        fcn.0001c7fc(arg1,arg2,(*0x431c0)[8],arg4);
        fcn.0001c7fc(arg1,arg2,arg3,2);
        fcn.0001c7fc(arg1,arg2 + -2 + arg4,arg3,2);
        fcn.0001c7fc(arg1,arg2,2,arg4);
        fcn.0001c7fc(arg1 + -2 + arg3,arg2,2,arg4);
    }
    return;
}


/* fcn.0001c7fc @ 0x1c7fc */

void fcn.0001c7fc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong in_stack_00000028;
    
    if ((*0x36eb8 != '\0') && (*0x36e60 != 0)) {
        (**(*0x36e60 + 0x10))(*0x36e60,in_stack_00000028,0,0,0,arg1,arg2,arg3,arg4,0);
    }
    return;
}


/* fcn.000154c0 @ 0x154c0 */

void fcn.000154c0(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iStackX_8;
    int64_t iStackX_10;
    
    iStackX_8 = 0;
    iStackX_10 = 0;
    if (*0x36e60 != 0) {
        fcn.0001c500(&iStackX_8,&iStackX_10);
    }
    iVar2 = iStackX_10;
    iVar1 = iStackX_8;
    if (*0x43190 != 0) {
        fcn.0001470c(0x43190);
    }
    *0x43190 = fcn.0001504c(iVar2 * iVar1 * 4);
    if ((*0x43190 != 0) && (*0x36e60 != 0)) {
        (**(*0x36e60 + 0x10))(*0x36e60,*0x43190,1,0,0,0,0,iVar1,iVar2,0);
    }
    return;
}


/* fcn.00015574 @ 0x15574 */

void fcn.00015574(void)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uStackX_8;
    uint32_t auStackX_10 [6];
    
    iVar1 = 0;
    if (*0x43190 != 0) {
        auStackX_10[0] = 0;
        auStackX_10[1] = 0;
        uStackX_8 = 0;
        if (*0x36e60 != 0) {
            iVar2 = *0x36e60;
            iVar3 = *0x43190;
            fcn.0001c500(auStackX_10,&uStackX_8);
            (**(iVar2 + 0x10))(iVar2,iVar3,iVar1 + 2);
        }
    }
    return;
}


/* fcn.00017a48 @ 0x17a48 */

void fcn.00017a48(void)

{
    int64_t iVar1;
    
    if (*0x36e80 == 0) {
        iVar1 = fcn.0001e410(0x36e80,0x14aec,0,1);
        if (-1 < iVar1) {
            (**(*0x36d88 + 0x68))(*0x36e80);
        }
    }
    return;
}


/* fcn.00017aa0 @ 0x17aa0 */

void fcn.00017aa0(void)

{
    int64_t iVar1;
    
    if (*0x36e40 == 0) {
        iVar1 = fcn.0001e410(0x36e40,0x14eb0,0,1);
        if (-1 < iVar1) {
            (**(*0x36d88 + 0x68))(*0x36e40);
        }
    }
    return;
}


/* fcn.0001ef90 @ 0x1ef90 */

int64_t fcn.0001ef90(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_30h,int64_t arg_38h)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t var_30h;
    uint32_t var_28h;
    int32_t var_20h;
    int64_t var_1ch;
    int64_t var_14h;
    
    var_20h = arg2;
    var_14h = 0;
    var_1ch = arg3 & 0xffffffff;
    var_30h = 0;
    _var_28h = 0;
    iVar1 = (***0x36dc8)(*0x36dc8,2,arg1,&var_20h,&var_30h,0,0,&var_28h,0,0);
    if (-1 < iVar1) {
        if (var_30h != 0) {
            if (*(var_30h + 8) != 0) {
                fcn.0001470c(var_30h + 8);
            }
            fcn.0001470c(&var_30h);
        }
        var_30h = fcn.0001504c(0x10);
        if (var_30h == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            uVar2 = fcn.0001504c(*(_var_28h + 0x18) * *(_var_28h + 0x10) * 4);
            *(var_30h + 8) = uVar2;
            if (*(var_30h + 8) == 0) {
                iVar1 = -0x7ffffffffffffff7;
            }
            else {
                *var_30h = *(_var_28h + 0x18);
                *(var_30h + 2) = *(_var_28h + 0x10);
                iVar1 = (***0x36dc8)(*0x36dc8,2,arg1,&var_20h,&var_30h,0,0,0,0,0);
                if (-1 < iVar1) {
                    *arg_30h = *(var_30h + 8);
                    uVar2 = *(_var_28h + 0x18);
                    *arg4 = uVar2;
                    *arg_38h = uVar2;
                }
            }
            if (var_30h != 0) {
                fcn.0001470c(&var_30h);
            }
        }
        if (_var_28h != 0) {
            fcn.0001470c(&var_28h);
        }
    }
    return iVar1;
}


/* fcn.0001c84c @ 0x1c84c */

void fcn.0001c84c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar auVar1 [16];
    uchar auVar2 [16];
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int iVar7;
    uint64_t uStackX_18;
    uint64_t uStackX_20;
    uint64_t in_stack_00000028;
    uint64_t in_stack_00000030;
    int64_t in_stack_00000038;
    
    iVar3 = *0x36e60;
    uStackX_20 = 0;
    uVar5 = 0;
    uStackX_18 = 0;
    uVar6 = 0;
    if (*0x36e60 != 0) {
        fcn.0001c500(&uStackX_18,&uStackX_20);
    }
    iVar7 = arg2;
    if (((*0x36ef2 != '\0') && (*0x36e35 == '\0')) && (iVar7 == 8)) {
        uVar5 = *0x36eec;
        uVar6 = *0x36ef0;
    }
    if (iVar7 == 0) {
        if ((*0x36ef2 != '\0') && (*0x36e35 == '\0')) {
            in_stack_00000030 = uVar6;
            in_stack_00000028 = uVar5;
            goto code_r0x0001cacf;
        }
        goto code_r0x0001cac7;
    }
    if (iVar7 == 1) {
        in_stack_00000028 = (uStackX_18 - arg3) / 2;
    }
    else {
        if (iVar7 != 2) {
            if (iVar7 == 3) {
                in_stack_00000028 = (uStackX_18 - arg3) - in_stack_00000028;
code_r0x0001ca6f:
                in_stack_00000030 = (uStackX_20 - arg4) / 2;
            }
            else {
                if (iVar7 == 4) {
                    in_stack_00000028 = (uStackX_18 - arg3) - in_stack_00000028;
                }
                else {
                    if (iVar7 != 5) {
                        if (iVar7 == 6) {
                            in_stack_00000030 = (uStackX_20 - arg4) - in_stack_00000030;
                        }
                        else if (iVar7 == 7) {
                            in_stack_00000030 = (uStackX_20 - arg4) / 2;
                        }
                        else if (iVar7 == 8) {
                            if ((*0x36ef2 != '\0') && (*0x36e35 == '\0')) {
                                in_stack_00000030 = uVar6 + (uStackX_20 - arg4) / 2;
                                in_stack_00000028 = uVar5 + (uStackX_18 - arg3) / 2;
                                goto code_r0x0001cacf;
                            }
                            auVar1._8_8_ = 0;
                            auVar1._0_8_ = uStackX_18 * 0x28;
                            iVar4 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar1,8);
                            if ((arg3 <= (uStackX_18 * 0x28 - iVar4 >> 1) + iVar4 >> 6) &&
                               (auVar2._8_8_ = 0, auVar2._0_8_ = uStackX_20 * 0x28,
                               iVar4 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar2,8),
                               arg4 <= (uStackX_20 * 0x28 - iVar4 >> 1) + iVar4 >> 6)) {
                                in_stack_00000030 = (uStackX_20 * 0x17e) / 1000 - arg4 / 2;
                                in_stack_00000028 = (uStackX_18 - arg3) / 2;
                                goto code_r0x0001cacf;
                            }
                            in_stack_00000028 = (uStackX_18 - arg3) / 2;
                            goto code_r0x0001ca6f;
                        }
code_r0x0001cac7:
                        goto code_r0x0001cacf;
                    }
                    in_stack_00000028 = (uStackX_18 - arg3) / 2;
                }
                in_stack_00000030 = (uStackX_20 - arg4) - in_stack_00000030;
            }
            goto code_r0x0001cacf;
        }
        in_stack_00000028 = (uStackX_18 - arg3) - in_stack_00000028;
    }
code_r0x0001cacf:
    if (in_stack_00000028 < 0) {
        if (uStackX_18 < arg3) {
            uVar5 = arg3 - uStackX_18 >> 1;
        }
        in_stack_00000028 = 0;
    }
    if (in_stack_00000030 < 0) {
        if (uStackX_20 < arg4) {
            uVar6 = arg4 - uStackX_20 >> 1;
        }
        in_stack_00000030 = 0;
    }
    if (((*0x36ef2 != '\0') && (*0x36e35 == '\0')) && (iVar7 == 8)) {
        arg3 = *0x36ef4;
        arg4 = *0x36f00;
    }
    if (uStackX_18 < arg3 + in_stack_00000028) {
        if (uStackX_18 < in_stack_00000028) {
            arg3 = 0;
        }
        else {
            arg3 = uStackX_18 - in_stack_00000028;
        }
    }
    if (uStackX_20 < arg4 + in_stack_00000030) {
        if (uStackX_20 < in_stack_00000030) {
            arg4 = 0;
        }
        else {
            arg4 = uStackX_20 - in_stack_00000030;
        }
    }
    if (((iVar3 != 0) && (arg3 != 0)) && (arg4 != 0)) {
        (**(iVar3 + 0x10))(iVar3,arg1,2,uVar5,uVar6,in_stack_00000028,in_stack_00000030,arg3,arg4,
                           in_stack_00000038 << 2);
    }
    if (*0x36ef6 != '\0') {
        if (*0x36ef6 == '\x01') {
            *0x36f10 = arg3 + in_stack_00000028;
            *0x36f18 = arg4 + in_stack_00000030;
            *0x36ef8 = in_stack_00000030;
            *0x36f08 = in_stack_00000028;
        }
        else {
            if (in_stack_00000028 < *0x36f08) {
                *0x36f08 = in_stack_00000028;
            }
            if (in_stack_00000030 < *0x36ef8) {
                *0x36ef8 = in_stack_00000030;
            }
            if (*0x36f10 < arg3 + in_stack_00000028) {
                *0x36f10 = arg3 + in_stack_00000028;
            }
            if (*0x36f18 < arg4 + in_stack_00000030) {
                *0x36f18 = arg4 + in_stack_00000030;
            }
        }
        *0x36ef6 = *0x36ef6 + '\x01';
    }
    return;
}


/* fcn.000137f0 @ 0x137f0 */

int64_t fcn.000137f0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iStackX_18;
    uint32_t var_30h;
    ulong uStack_48;
    ulong uStack_40;
    int64_t var_30h_2;
    int64_t var_bp_28h;
    uint32_t var_bp_20h;
    int8_t var_18h;
    
    iStackX_18 = 1;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar1 = (**(*0x36d88 + 0x98))(*(*0x36d80 + 0x28));
    if (iVar1 < 0) {
        return iVar1;
    }
    uStack_48 = *(arg2 + 0x10);
    iVar1 = fcn.0001e410(&uStack_40,0,0,2);
    if (-1 < iVar1) {
        (**(*0x36d88 + 0x60))(2,&uStack_48,&iStackX_18);
        fcn.0001e488(&uStack_40);
        if (iStackX_18 == 1) {
            return -0x7ffffffffffffffa;
        }
        iVar1 = (**(arg2 + 8))(arg2,arg1);
        iVar2 = iVar1;
        if ((*(arg1 + 8) & 0x40) != 0) {
            if (iVar1 < 0) {
                return iVar1;
            }
            if ((*arg1 == 0) && (*(arg1 + 2) == 0)) {
                iVar1 = -0x7ffffffffffffffa;
                iVar2 = iVar1;
            }
        }
        while (-1 < iVar1) {
            iVar1 = (**(arg2 + 8))(arg2,&var_30h_2);
            if ((((var_bp_28h & 0x40) != 0) && (var_30h_2 == 0)) && (var_30h_2._2_2_ == 0)) {
                iVar1 = -0x7ffffffffffffffa;
            }
        }
        return iVar2;
    }
    return iVar1;
}


/* fcn.000205cc @ 0x205cc */

ulong fcn.000205cc(uint32_t arg1,int64_t arg2)

{
    ulong uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uchar uVar4;
    
    uVar1 = 0x7fffffff;
    uVar2 = arg1 & 0x7fffffff;
    uVar3 = arg2 & 0x7fffffff;
    uVar4 = 1;
    if (uVar2 != uVar3) {
        uVar4 = 0;
        uVar1 = 0;
        if ((arg2 & 3) == 3) {
            if ((arg1 & 3) == 0) goto code_r0x0002064f;
            uVar2 = arg1 & 0x7ffffffc;
            uVar3 = arg2 & 0x7ffffffc;
        }
        uVar1 = 0;
        if ((uVar3 & 0xc) == 0xc) {
            if ((uVar2 & 0xc) == 0) goto code_r0x0002064f;
            uVar2 = uVar2 & 0xfffffff3;
            uVar3 = uVar3 & 0xfffffff3;
        }
        uVar1 = 0;
        if ((uVar3 & 0x30) == 0x30) {
            if ((uVar2 & 0x30) == 0) goto code_r0x0002064f;
            uVar2 = uVar2 & 0xffffffcf;
            uVar3 = uVar3 & 0xffffffcf;
        }
        uVar1 = 0;
        if ((uVar3 & 0xc0) == 0xc0) {
            if ((uVar2 & 0xc0) == 0) goto code_r0x0002064f;
            uVar1 = 0xffffff3f;
            uVar2 = uVar2 & 0xffffff3f;
            uVar3 = uVar3 & 0xffffff3f;
        }
        uVar4 = 0;
        if (uVar3 == uVar2) {
            uVar4 = 1;
        }
    }
code_r0x0002064f:
    return CONCAT71(uVar1 >> 8,uVar4);
}


/* fcn.00013934 @ 0x13934 */

ulong fcn.00013934(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int16_t iVar2;
    uint32_t arg1_00;
    char cVar3;
    ulong uVar4;
    int64_t iVar5;
    uint in_register_00000014;
    uint16_t uVar6;
    int16_t iVar7;
    uint64_t uVar8;
    int16_t *in_stack_00000028;
    int16_t iStack_38;
    int16_t iStack_36;
    uint32_t uStack_34;
    
    uVar6 = arg4;
    if ((arg1 == 0) || ((arg2 == 8 && ((uVar6 == 0 || (arg3 == 0)))))) {
        uVar4 = 0x8000000000000002;
    }
    else {
        if (*0x36e38 == 1) {
            fcn.00015fa0(arg1,CONCAT71(CONCAT44(in_register_00000014,arg2) >> 8,1));
            do {
                do {
                    do {
                        iVar5 = 0x14;
                        fcn.00033b7e(&iStack_38,0x14,0);
                        iVar5 = fcn.000137f0(&iStack_38,iVar5);
                        arg1_00 = uStack_34;
                        iVar2 = iStack_36;
                        iVar1 = iStack_38;
                    } while (iVar5 != 0);
                } while (((arg3 == 0) || (uVar6 == 0)) || (uVar8 = 0, uVar6 == 0));
                do {
                    iVar7 = uVar8;
                    if (((*(arg3 + uVar8 * 8) == iVar1) && (*(arg3 + 2 + uVar8 * 8) == iVar2)) &&
                       (cVar3 = fcn.000205cc(arg1_00,*(arg3 + 4 + uVar8 * 8)), cVar3 != '\0')) {
                        if (in_stack_00000028 != NULL) {
                            *(in_stack_00000028 + 2) = uStack_34;
                            *in_stack_00000028 = iVar1;
                            in_stack_00000028[1] = iVar2;
                        }
                        return 0;
                    }
                    uVar8 = iVar7 + 1U;
                } while (iVar7 + 1U < uVar6);
            } while( true );
        }
        uVar4 = 0x8000000000000006;
    }
    return uVar4;
}


/* fcn.0001215c @ 0x1215c */

int64_t fcn.0001215c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    
    iVar2 = 0;
    fcn.00017728();
    if ((*0x36eb8 != '\0') && (*0x36e60 != 0)) {
        iVar1 = fcn.0001c500(arg1,arg2);
        if (iVar1 == 0) {
            iVar2 = fcn.000150a0(*arg1 * *arg2 * 4);
            if (iVar2 != 0) {
                (**(*0x36e60 + 0x10))(*0x36e60,iVar2,1,0,0,0,0,*arg1,*arg2,0);
            }
        }
    }
    return iVar2;
}


/* fcn.00012204 @ 0x12204 */

void fcn.00012204(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iStackX_8;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    
    iStackX_8 = arg1;
    iStackX_10 = arg2;
    aiStackX_18[0] = arg3;
    if (arg1 == 0) {
        if (((*0x36eb8 != '\0') && (*0x36e60 != 0)) && (*(*0x36d80 + 0x40) != 0)) {
            fcn.00014868(0xffff0001,0x20fac);
        }
    }
    else {
        if (*0x36e48 != 0) {
            (**(*0x36e48 + 8))(*0x36e48,1);
        }
        if (((*0x36e60 != 0) && (arg2 != 0)) &&
           ((arg3 != 0 && ((iVar1 = *(*(*0x36e60 + 0x18) + 8), arg2 != *(iVar1 + 4) || (arg3 != *(iVar1 + 8))))))) {
            fcn.0001c418(&iStackX_10,aiStackX_18);
        }
        fcn.00020134();
        if (*0x36e60 != 0) {
            (**(*0x36e60 + 0x10))(*0x36e60,arg1,2,0,0,0,0,arg2,arg3,0);
        }
    }
    if ((*(*0x36d80 + 0x40) != 0) && ((*0x36eb8 == '\0' || (*0x36e60 == 0)))) {
        if (*0x431d8 != 0) {
            fcn.00033b7e(*0x431d8,0xb71b04,0);
        }
        fcn.0001c390();
        fcn.00017818();
    }
    fcn.0001470c(&iStackX_8);
    return;
}


/* fcn.000299e8 @ 0x299e8 */

int64_t fcn.000299e8(void)

{
    char *pcVar1;
    char cVar2;
    int64_t iVar3;
    char *pcVar4;
    ulong *apuStackX_8 [4];
    int64_t iStack_18;
    uint uStack_10;
    uint uStack_c;
    
    iStack_18 = *0x42348 + 0x28;
    iVar3 = (**(*0x36d88 + 0x50))(0x80000200,0x10,0x29898);
    if ((*0x36e59 == '\x01') && (-1 < iVar3)) {
        if (*0x43190 != 0) {
            fcn.0001470c(0x43190);
        }
        *0x36ef2 = 0;
        for (; *0x42350 != NULL; *0x42350 = (*0x42350)[1]) {
            (**(*0x36d88 + 0x70))(*(**0x42350 + 0x28));
            fcn.0001470c(**0x42350 + 0x30);
            fcn.0001470c(**0x42350 + 0x48);
        }
        fcn.000114c0();
        pcVar1 = *0x36ec0;
        apuStackX_8[0] = NULL;
        iVar3 = 0x46a6;
        iStack_18 = 0x46a66107ffe06bdd;
        uStack_10 = 0x9c5ab27b;
        uStack_c = 0x5c27c57e;
        if (*0x36ec0 != NULL) {
            if ((*0x36ec0)[0x26] != 0) {
                iVar3 = 0x38;
                (*0x36ec0)[0x26] = (*0x36ec0)[0x26] & 0xfe;
                cVar2 = '\0';
                pcVar1[9] = '\0';
                pcVar4 = *0x36ec0;
                do {
                    cVar2 = cVar2 + *pcVar4;
                    pcVar4 = pcVar4 + 1;
                    iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
                pcVar1[9] = -cVar2;
            }
            iVar3 = (**(*0x36d88 + 0x140))(&iStack_18,0,apuStackX_8);
            if (iVar3 == 0) {
                iVar3 = (*apuStackX_8[0][1])(apuStackX_8[0],*0x36ec8);
                if (iVar3 == 0) {
                    *0x36ec8 = 0;
                    iVar3 = (**apuStackX_8[0])(apuStackX_8[0],*0x36ec0,0x38,0x36ec8);
                }
            }
        }
        return iVar3;
    }
    iVar3 = (**(*0x36d88 + 0x58))(*(*0x42348 + 0x28),2,*0x3fa98 * 10000);
    if (iVar3 < 0) {
        iVar3 = fcn.0001e488(*0x42348 + 0x28);
    }
    return iVar3;
}


/* fcn.00013a50 @ 0x13a50 */

ulong fcn.00013a50(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t iVar2;
    ulong uVar3;
    bool bVar4;
    bool bVar5;
    uchar in_stack_00000028;
    ulong in_stack_00000030;
    ushort in_stack_00000038;
    int64_t in_stack_00000040;
    uint16_t in_stack_00000048;
    ulong in_stack_00000050;
    ulong in_stack_00000058;
    
    uVar3 = 4;
    if (*(*0x36d80 + 0x40) != 0) {
        if (*0x36e38 < 3) {
            uVar3 = (**(*0x36d88 + 0x18))(0x1f);
            (**(*0x36d88 + 0x20))(4);
        }
        bVar4 = *0x36e80 != 0;
        if (bVar4) {
            fcn.0001e488(0x36e80);
        }
        bVar5 = *0x36e40 != 0;
        if (bVar5) {
            fcn.00014044();
        }
        if (*0x36ef2 != '\0') {
            fcn.0001e488(*0x42348 + 0x28);
            fcn.0001c390();
        }
        if (arg4 == 8) {
            uVar1 = fcn.00013934(arg2,8,in_stack_00000040,in_stack_00000048);
        }
        else {
            iVar2 = fcn.0001f770();
            if (iVar2 < 0) {
                uVar1 = 0x8000000000000003;
                iVar2 = *(*0x36d80 + 0x40);
                (**(iVar2 + 0x28))(iVar2,*(*(iVar2 + 0x48) + 8));
            }
            else {
                uVar1 = (**(*0x36f48 + 0x30))
                                  (arg1,arg2,arg3,arg4 & 0xffffffff,in_stack_00000028,in_stack_00000030,
                                   in_stack_00000038,in_stack_00000040,in_stack_00000048,in_stack_00000050,
                                   in_stack_00000058);
            }
        }
        if (bVar4) {
            fcn.00017a48();
        }
        if (bVar5) {
            fcn.00017aa0();
        }
        if (*0x36e38 < 3) {
            (**(*0x36d88 + 0x18))(0x1f);
            (**(*0x36d88 + 0x20))(uVar3);
        }
        return uVar1;
    }
    return 0x8000000000000006;
}


/* fcn.00014804 @ 0x14804 */

void fcn.00014804(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    int iVar4;
    
    *arg2 = 0;
    iVar4 = 0;
    iVar2 = 0xffff0001;
    iVar3 = 0;
    do {
        if (CONCAT44(in_register_0000000c,arg1) == iVar2) {
            iVar2 = iVar4 + 2;
            *arg2 = iVar2;
            uVar1 = *(iVar2 * 8 + 0x35910);
            while ((uVar1 != 0 && ((uVar1 & 0xffff0000) != 0xffff0000))) {
                iVar2 = iVar2 + 1;
                uVar1 = *(iVar2 * 8 + 0x35910);
            }
            *arg3 = iVar2 + -1;
            return;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 1;
        iVar2 = *(iVar3 * 8 + 0x35910);
    } while (iVar2 != 0);
    return;
}


/* fcn.00021274 @ 0x21274 */

uchar fcn.00021274(ulong param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    uchar uVar5;
    uchar auStackX_8 [8];
    ulong uStackX_10;
    int64_t iStackX_18;
    uchar auStackX_20 [8];
    
    uVar5 = 0;
    if (*0x36f81 == '\0') {
        param_3 = 0;
        iStackX_18 = fcn.0001ec60(*0x431d0,0x17,0);
        if (iStackX_18 != 0) {
            fcn.00012f20(iStackX_18);
        }
        fcn.0001470c(&iStackX_18);
        *0x36f81 = '\x01';
    }
    if (*0x36e88 == 0) {
        uVar2 = fcn.00020134();
        uStackX_10 = 3;
        if ((uVar2 & 3) != 0) {
            uVar5 = 1;
            iVar3 = fcn.0001f770();
            uVar4 = (**(*0x36d88 + 0x18))(0x1f);
            (**(*0x36d88 + 0x20))();
            if (iVar3 < 0) {
                iVar1 = fcn.0002e964(0,&uStackX_10,param_3);
            }
            else {
                if (*0x36ef2 != '\0') {
                    fcn.0001e488(*0x42348 + 0x28);
                }
                fcn.000148bc(0xffff0008,0x2183c,0,0);
                iVar1 = (**(*0x36f48 + 0x78))(0,&uStackX_10,0);
                *0x36e88 = iVar1;
            }
            if (iVar1 == 0) {
                do {
                    (**(*0x36d88 + 0x60))(1,*(*(*0x36d80 + 0x30) + 0x10),auStackX_20);
                    (**(*(*0x36d80 + 0x30) + 8))(*(*0x36d80 + 0x30),auStackX_8);
                } while( true );
            }
            (**(*0x36d88 + 0x18))(0x1f);
            (**(*0x36d88 + 0x20))(uVar4);
            if (*0x36ef2 != '\0') {
                fcn.000299e8();
            }
        }
    }
    return uVar5;
}


/* fcn.000214f4 @ 0x214f4 */

uchar fcn.000214f4(int64_t arg1)

{
    ulong uVar1;
    uchar auVar2 [16];
    int16_t iVar3;
    char cVar4;
    uchar uVar5;
    uint8_t uVar6;
    int16_t iStack_28;
    
    auVar2 = *arg1;
    uVar6 = 0;
    while( true ) {
        uVar1 = *(uVar6 * 0xc + 0x34460);
        cVar4 = fcn.000205cc(auVar2._4_4_,*(uVar6 * 0xc + 0x34468));
        if (((cVar4 != '\0') && (auVar2._2_2_ == uVar1 >> 0x10)) &&
           (iStack_28 = auVar2._0_2_, iStack_28 == uVar1 >> 0x20)) break;
        uVar6 = uVar6 + 1;
        if (0x11 < uVar6) {
            iVar3 = *(arg1 + 2);
            if ((iVar3 - 0x41U < 0x1a) || (iVar3 - 0x61U < 0x1a)) {
                uVar5 = 0xe;
            }
            else {
                uVar5 = 0;
                if (iVar3 - 0x30U < 10) {
                    uVar5 = 0xf;
                }
            }
            return uVar5;
        }
    }
    return *(uVar6 * 0xc + 0x34460);
}


/* fcn.00028598 @ 0x28598 */

int64_t fcn.00028598(int64_t arg1)

{
    int64_t arg1_00;
    int64_t arg1_01;
    
    arg1_00 = fcn.0002846c(arg1);
    arg1_01 = fcn.000150a0(arg1_00);
    fcn.00033bd0(arg1_01,arg1,arg1_00);
    return arg1_01;
}


/* fcn.0002846c @ 0x2846c */

int64_t fcn.0002846c(int64_t arg1)

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


/* fcn.00033bd0 @ 0x33bd0 */

int64_t fcn.00033bd0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00015248 @ 0x15248 */

ulong fcn.00015248(ulong param_1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    (**(*0x36d88 + 0x98))(param_1,0x33e70,auStackX_10);
    return auStackX_10[0];
}


/* fcn.000150cc @ 0x150cc */

int64_t fcn.000150cc(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t arg3;
    int64_t arg1_00;
    
    if (arg1 == 0) {
        arg1 = arg2;
        if (arg2 == 0) {
            arg1 = 0x34c38;
        }
    }
    else if (arg2 != 0) {
        iVar1 = fcn.0002846c(arg1);
        iVar1 = iVar1 + -4;
        arg3 = fcn.0002846c(arg2);
        arg1_00 = fcn.000150a0(arg3 + iVar1);
        fcn.00033bd0(arg1_00,arg1,iVar1);
        fcn.00033bd0(arg1_00 + iVar1,arg2,arg3);
        return arg1_00;
    }
    iVar1 = fcn.00028598(arg1);
    return iVar1;
}


/* fcn.00027364 @ 0x27364 */

ulong fcn.00027364(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int16_t iVar1;
    uint64_t extraout_RAX;
    uint in_register_00000014;
    
    if ((((arg1 == 0) || (arg3 == 0)) || (1000000 < CONCAT44(in_register_00000014,arg2))) ||
       (CONCAT44(in_register_00000014,arg2) == 0)) {
        return 0x8000000000000002;
    }
    fcn.00027330(arg3,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + (extraout_RAX + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x000273da;
    }
    if (arg3 < arg1 + CONCAT44(in_register_00000014,arg2) * 2) {
        return 0x800000000000000f;
    }
code_r0x000273da:
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


/* fcn.00015b80 @ 0x15b80 */

int64_t fcn.00015b80(int64_t noname_0,int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int16_t iVar2;
    int iVar3;
    int16_t *piVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int16_t *piVar8;
    int64_t iVar9;
    int64_t iVar10;
    int16_t *piVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t arg2_00;
    uint64_t uVar15;
    int16_t *apiStack_48 [2];
    
    piVar4 = fcn.00015630(noname_0);
    uVar12 = 0;
    iVar1 = *piVar4;
    piVar8 = piVar4;
    uVar15 = uVar12;
    while (iVar1 != 0) {
        piVar8 = piVar8 + 1;
        uVar15 = uVar15 + 1;
        iVar1 = *piVar8;
    }
    if (*piVar4 != 0) {
        piVar8 = piVar4;
        do {
            if (*piVar8 == 10) {
code_r0x00015c16:
                *piVar8 = 0;
code_r0x00015c1a:
                uVar12 = uVar12 + 1;
                piVar8 = piVar8 + 1;
            }
            else {
                if (*piVar8 != 0xd) goto code_r0x00015c1a;
                if (piVar8[1] != 10) goto code_r0x00015c16;
                piVar11 = piVar8;
                uVar14 = uVar12;
                do {
                    uVar14 = uVar14 + 1;
                    *piVar11 = piVar11[1];
                    piVar11 = piVar4 + uVar14;
                } while (*piVar11 != 0);
                uVar15 = uVar15 - 1;
            }
        } while (*piVar8 != 0);
    }
    apiStack_48[0] = piVar4;
    iVar5 = fcn.0001504c((*0x34158 + uVar15) * 2 + 2);
    uVar12 = 0;
    uVar14 = *0x34158 + 1 + uVar15;
    if (iVar5 != 0) {
        *arg2 = 0;
        uVar13 = uVar12;
        if (uVar15 != 0) {
            do {
                iVar9 = 0;
                piVar11 = piVar4 + uVar13;
                iVar1 = *piVar11;
                piVar8 = piVar11;
                while (iVar1 != 0) {
                    piVar8 = piVar8 + 1;
                    iVar9 = iVar9 + 1;
                    iVar1 = *piVar8;
                }
                if (uVar14 <= uVar12 + 1 + iVar9) break;
                arg2_00 = arg1 & 0xffff;
                uVar6 = fcn.0001fc98(piVar11);
                iVar3 = uVar14;
                if (arg2_00 < uVar6 / 0x13) {
                    iVar9 = fcn.0001d134(piVar11,arg2_00);
                    do {
                        iVar9 = iVar9 + -1;
                        if (iVar9 == 0) goto code_r0x00015dc2;
                    } while (piVar11[iVar9] != 0x20);
                    piVar11[iVar9] = 0;
                    fcn.00027364(iVar5 + uVar12 * 2,iVar3 - uVar12,piVar11);
                    iVar10 = 0;
                    iVar1 = *piVar11;
                    piVar8 = piVar11;
                    iVar7 = iVar10;
                    while (iVar1 != 0) {
                        piVar8 = piVar8 + 1;
                        iVar7 = iVar7 + 1;
                        iVar1 = *piVar8;
                    }
                    *(iVar5 + (uVar12 + iVar7) * 2) = 10;
                    uVar12 = uVar12 + iVar7 + 1;
                    iVar1 = *piVar11;
                    piVar8 = piVar11;
                    while (iVar1 != 0) {
                        piVar8 = piVar8 + 1;
                        iVar10 = iVar10 + 1;
                        iVar1 = *piVar8;
                    }
                    uVar13 = uVar13 + 1 + iVar10;
                    if (iVar9 == 0) {
code_r0x00015dc2:
                        iVar9 = fcn.0001d134(piVar11,arg2_00);
                        iVar1 = piVar11[iVar9 + -1];
                        piVar11[iVar9 + -1] = 0;
                        fcn.00027364(iVar5 + uVar12 * 2,iVar3 - uVar12,piVar11);
                        iVar7 = 0;
                        iVar2 = *piVar11;
                        piVar8 = piVar11;
                        iVar9 = iVar7;
                        while (iVar2 != 0) {
                            piVar8 = piVar8 + 1;
                            iVar9 = iVar9 + 1;
                            iVar2 = *piVar8;
                        }
                        iVar9 = uVar12 + iVar9;
                        *(iVar5 + iVar9 * 2) = iVar1;
                        *(iVar5 + (iVar9 + 1) * 2) = 10;
                        uVar12 = iVar9 + 2;
                        for (; *piVar11 != 0; piVar11 = piVar11 + 1) {
                            iVar7 = iVar7 + 1;
                        }
                        uVar13 = uVar13 + 1 + iVar7;
                    }
                }
                else {
                    fcn.00027364(iVar5 + uVar12 * 2,iVar3 - uVar12,piVar11);
                    iVar7 = 0;
                    iVar1 = *piVar11;
                    piVar8 = piVar11;
                    iVar9 = iVar7;
                    while (iVar1 != 0) {
                        piVar8 = piVar8 + 1;
                        iVar9 = iVar9 + 1;
                        iVar1 = *piVar8;
                    }
                    *(iVar5 + (uVar12 + iVar9) * 2) = 10;
                    uVar12 = uVar12 + iVar9 + 1;
                    for (; *piVar11 != 0; piVar11 = piVar11 + 1) {
                        iVar7 = iVar7 + 1;
                    }
                    uVar13 = uVar13 + 1 + iVar7;
                }
                if (piVar4[uVar13] == 0) {
                    *(iVar5 + uVar12 * 2) = 10;
                    uVar12 = uVar12 + 1;
                    uVar13 = uVar13 + 1;
                }
                *arg2 = *arg2 + 1;
            } while (uVar13 < uVar15);
        }
        *(iVar5 + uVar12 * 2) = 0;
        fcn.0001470c(apiStack_48);
    }
    return iVar5;
}


/* fcn.00015630 @ 0x15630 */

int64_t fcn.00015630(int64_t arg1)

{
    int16_t iVar1;
    int16_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    int iVar5;
    
    iVar4 = 0;
    iVar5 = 0;
    if (arg1 == 0) {
        iVar3 = 0;
    }
    else {
        iVar1 = *arg1;
        piVar2 = arg1;
        iVar3 = iVar4;
        while (iVar1 != 0) {
            piVar2 = piVar2 + 1;
            iVar3 = iVar3 + 1;
            iVar1 = *piVar2;
        }
        iVar3 = fcn.000150a0(iVar3 * 2 + 2);
        if (iVar3 != 0) {
            iVar1 = *arg1;
            piVar2 = arg1;
            while (iVar1 != 0) {
                piVar2 = piVar2 + 1;
                iVar4 = iVar4 + 1;
                iVar5 = iVar4;
                iVar1 = *piVar2;
            }
            fcn.00027364(iVar3,iVar5 + 1,arg1);
        }
    }
    return iVar3;
}


/* fcn.0001d134 @ 0x1d134 */

uint16_t fcn.0001d134(uint32_t arg1,int64_t arg2)

{
    int16_t *piVar1;
    uint64_t uVar2;
    uint in_register_0000000c;
    int16_t *piVar3;
    uint16_t uVar4;
    int64_t iVar5;
    int16_t aiStack_38 [16];
    
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    iVar5 = 0;
    uVar4 = 0;
    if (*piVar3 != 0) {
        piVar1 = piVar3;
        do {
            aiStack_38[0] = *piVar1;
            aiStack_38[1] = 0;
            uVar2 = fcn.0001fc98(aiStack_38);
            if (arg2 < uVar2 / 0x13 + iVar5) {
                return uVar4;
            }
            uVar2 = fcn.0001fc98(aiStack_38);
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + uVar2 / 0x13;
            piVar1 = piVar3 + uVar4;
        } while (*piVar1 != 0);
    }
    return uVar4;
}


/* fcn.00015ea0 @ 0x15ea0 */

void fcn.00015ea0(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    
    uVar2 = *0x34180;
    iVar1 = *0x34160;
    if (*0x36eb0 < *0x34180) {
        iVar3 = *0x34188 - *0x36ea8;
        iVar7 = (*0x36eb0 + 1) * *0x34160 + *0x36ea8;
        iVar4 = iVar7 * 2 + 0x3d0904;
        uVar6 = *0x36eb0;
        do {
            if (iVar3 != 0) {
                iVar10 = iVar7 - iVar1;
                iVar5 = iVar4;
                iVar8 = iVar3;
                iVar9 = iVar7;
                do {
                    *(iVar10 + 4 + *0x431c8) = *(*0x431c8 + 4 + iVar9);
                    *(iVar5 + iVar1 * -2 + *0x431c8) = *(iVar5 + *0x431c8);
                    if (uVar6 + 1 == uVar2) {
                        *(iVar5 + *0x431c8) = 0x20;
                    }
                    iVar9 = iVar9 + 1;
                    iVar5 = iVar5 + 2;
                    iVar10 = iVar10 + 1;
                    iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
            }
            uVar6 = uVar6 + 1;
            iVar7 = iVar7 + iVar1;
            iVar4 = iVar4 + iVar1 * 2;
        } while (uVar6 < uVar2);
    }
    return;
}


/* fcn.0001fc98 @ 0x1fc98 */

int64_t fcn.0001fc98(int64_t arg1)

{
    int16_t *piVar1;
    int16_t *piVar2;
    int64_t iVar3;
    
    iVar3 = 0;
    if (arg1 != 0) {
        piVar1 = fcn.00015630(arg1);
        for (piVar2 = piVar1; *piVar2 != 0; piVar2 = piVar2 + 1) {
            iVar3 = iVar3 + 1;
        }
        (**(*0x36d88 + 0x48))(piVar1);
        iVar3 = iVar3 * 0x13;
    }
    return iVar3;
}


/* fcn.0001d1e4 @ 0x1d1e4 */

bool fcn.0001d1e4(int64_t arg1)

{
    uint64_t uVar1;
    ushort uStack_28;
    ushort uStack_26;
    
    uStack_28 = arg1;
    uStack_26 = 0;
    uVar1 = fcn.0001fc98(&uStack_28);
    return uVar1 / 0x13 == 2;
}


/* fcn.000157a0 @ 0x157a0 */

int64_t fcn.000157a0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar uVar1;
    int16_t *arg3_00;
    uint64_t uVar2;
    int16_t *piVar3;
    uint64_t uVar4;
    int16_t *piVar5;
    int64_t iVar6;
    int64_t iVar7;
    unkbyte7 Var8;
    int64_t arg1_00;
    int64_t iVar9;
    int16_t iVar10;
    int16_t *piStackX_8;
    int64_t iStackX_10;
    char in_stack_00000028;
    
    arg1_00 = *0x36ea0;
    iVar6 = *0x36e90;
    uVar1 = *0x36e78;
    iVar9 = *0x34160;
    Var8 = arg4 >> 8;
    iVar7 = 0;
    piStackX_8 = arg1;
    iStackX_10 = arg2;
    arg3_00 = fcn.00015630(arg3);
    iVar10 = *arg3_00;
    piStackX_8 = arg3_00;
    while (piVar5 = arg3_00, iVar10 != 0) {
        for (; ((*piVar5 != 10 && (*piVar5 != 0xd)) && (*piVar5 != 0)); piVar5 = piVar5 + 1) {
        }
        iVar10 = *piVar5;
        *piVar5 = 0;
        if (in_stack_00000028 != '\0') {
            iVar9 = *0x34188;
        }
        iStackX_10 = iVar9;
        uVar2 = fcn.0001d134(arg3_00,iVar9 - arg1_00);
        uVar4 = *0x34158;
        if (in_stack_00000028 != '\0') {
            if (*0x34158 <= iVar7 + iVar6) {
                fcn.00015ea0();
                iVar6 = (uVar4 - iVar7) + -1;
            }
            iVar9 = iStackX_10;
        }
        uVar4 = 0;
        piVar3 = arg3_00;
        if (*arg3_00 == 0) {
code_r0x000158bf:
            fcn.00015958(arg1_00,iVar7 + iVar6,arg3_00,CONCAT71(Var8,uVar1));
        }
        else {
            do {
                piVar3 = piVar3 + 1;
                uVar4 = uVar4 + 1;
            } while (*piVar3 != 0);
            if (uVar4 <= uVar2) goto code_r0x000158bf;
            *piVar5 = iVar10;
            piVar5 = arg3_00 + uVar2;
            iVar10 = *piVar5;
            *piVar5 = 0;
            fcn.00015958(arg1_00,iVar7 + iVar6,arg3_00,CONCAT71(Var8,uVar1));
        }
        arg1_00 = 0;
        *0x36ea0 = arg1_00;
        for (; *arg3_00 != 0; arg3_00 = arg3_00 + 1) {
            *0x36ea0 = *0x36ea0 + 1;
        }
        *piVar5 = iVar10;
        if (iVar10 == 0) break;
        *0x36ea0 = 0;
        if (iVar10 == 0xd) {
            piVar5 = piVar5 + 1;
            iVar7 = iVar7 + -1;
        }
        arg3_00 = piVar5;
        if ((*piVar5 == 10) && (arg3_00 = piVar5 + 1, piVar5[-1] == 0xd)) {
            iVar7 = iVar7 + 1;
        }
        iVar7 = iVar7 + 1;
        iVar10 = *arg3_00;
    }
    fcn.0001470c(&piStackX_8);
    return iVar7;
}


/* fcn.00027404 @ 0x27404 */

uint64_t fcn.00027404(uint32_t arg1,int64_t arg2)

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


/* fcn.000165a8 @ 0x165a8 */

void fcn.000165a8(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    char cVar4;
    int64_t iVar5;
    uint auStackX_8 [2];
    
    uVar2 = *0x34160 * arg1;
    auStackX_8[0] = 0;
    uVar3 = ((arg2 - arg1) + 1) * *0x34160 + uVar2;
    cVar4 = -1;
    (**(*(*0x36d80 + 0x40) + 0x38))(*(*0x36d80 + 0x40),0,arg1);
    if (uVar2 < uVar3) {
        iVar5 = uVar2 * 2 + 0x3d0904;
        do {
            cVar1 = *(*0x431c8 + 4 + uVar2);
            if (cVar1 != cVar4) {
                (**(*(*0x36d80 + 0x40) + 0x28))(*(*0x36d80 + 0x40),cVar1);
                cVar4 = cVar1;
            }
            auStackX_8[0] = CONCAT22(auStackX_8[0]._2_2_,*(iVar5 + *0x431c8));
            (**(*(*0x36d80 + 0x40) + 8))(*(*0x36d80 + 0x40),auStackX_8);
            uVar2 = uVar2 + 1;
            iVar5 = iVar5 + 2;
        } while (uVar2 < uVar3);
    }
    return;
}


/* fcn.00017598 @ 0x17598 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_20h

void fcn.00017598(void)

{
    char cVar1;
    int64_t arg1;
    int64_t iVar2;
    char16_t *pcVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iStackX_8;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    uint32_t var_30h_2;
    int64_t var_38h;
    int64_t var_40h_2;
    uchar auStack_88 [16];
    char16_t acStack_78 [4];
    char16_t acStack_70 [4];
    int64_t var_60h;
    char16_t acStack_60 [4];
    int64_t var_50h;
    char16_t acStack_50 [4];
    int64_t var_40h;
    char16_t acStack_40 [4];
    int64_t var_30h;
    int64_t var_20h;
    int64_t var_10h;
    
    acStack_78 = str.Key_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._0_8_;
    acStack_70 = str.Key_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._8_8_;
    var_50h = str.Key_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._32_8_;
    acStack_50 = str.Key_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._40_8_;
    var_60h = str.Key_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._16_8_;
    acStack_60 = str.Key_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._24_8_;
    var_30h = str.Key_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._64_8_;
    var_40h = str.Key_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._48_8_;
    acStack_40 = str.Key_0_9a_f__0_9a_f__0_9a_f__0_9a_f_._56_8_;
    iStackX_8 = 0x50;
    arg1 = fcn.0001504c(0x50);
    if (arg1 != 0) {
        iVar4 = 0x36f50;
        *0x36f78 = 0;
        *0x36f60 = 0;
        iStackX_10 = arg1;
        fcn.0001470c(0x36f50);
        fcn.0001a878(iVar4);
        (**(*0x36d88 + 0x140))(0x33d50,0,aiStackX_18);
        iVar4 = 0x50;
        do {
            while( true ) {
                iVar2 = (**(*0x36d98 + 0x50))(&iStackX_8,arg1,auStack_88);
                if (iVar2 != -0x7ffffffffffffffb) break;
                arg1 = fcn.0001478c(arg1,iVar4,iStackX_8);
                iVar4 = iStackX_8;
            }
            pcVar3 = L"keyXXXX";
            iVar5 = 0;
            do {
                pcVar3 = pcVar3 + 1;
                iVar5 = iVar5 + 1;
            } while (*pcVar3 != L'\0');
            if (iStackX_8 == iVar5 * 2 + 2) {
                cVar1 = (**(aiStackX_18[0] + 8))(aiStackX_18[0],arg1,acStack_78);
                if (cVar1 != '\0') {
                    fcn.0001f144(arg1);
                }
            }
            iStackX_8 = iVar4;
        } while (iVar2 != -0x7ffffffffffffff2);
        iStackX_10 = arg1;
        if (*0x36f78 < *0x36f60) {
            *0x36f50 = fcn.0001478c(*0x36f50,*0x36f60 * 0x14,*0x36f78 * 0x14);
        }
        fcn.0001470c(&iStackX_10);
    }
    return;
}


/* fcn.000160e4 @ 0x160e4 */

void fcn.000160e4(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    
    uVar1 = *0x34160;
    uVar2 = CONCAT44(in_register_0000000c,arg1);
    if (uVar2 < *0x34160) {
        uVar4 = 0;
        if (*0x36e90 != 0) {
            iVar6 = 0;
            iVar5 = 0x3d0904;
            iVar7 = 0;
            iVar3 = 0x3d0904;
            do {
                (**(*0x36d88 + 0x160))(*0x431c8 + 4 + iVar6,*0x431c8 + 4 + iVar7,uVar2);
                (**(*0x36d88 + 0x160))(iVar5 + *0x431c8,iVar3 + *0x431c8,uVar2 * 2);
                iVar3 = iVar3 + uVar1 * 2;
                uVar4 = uVar4 + 1;
                iVar7 = iVar7 + uVar1;
                iVar6 = iVar6 + uVar2;
                iVar5 = iVar5 + uVar2 * 2;
            } while (uVar4 < *0x36e90);
        }
        iVar3 = (uVar1 - uVar2) * *0x36e90;
        if (iVar3 != 0) {
            iVar5 = *0x36e90 * uVar2 * 2 + 0x3d0904;
            do {
                *(iVar5 + *0x431c8) = 0x20;
                iVar5 = iVar5 + 2;
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
        }
    }
    return;
}


/* fcn.0001c360 @ 0x1c360 */

void fcn.0001c360(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00026474(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00026474 @ 0x26474 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00026474(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x000264d3;
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
code_r0x000264d3:
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
        uVar21 = fcn.00027404(arg4,0xf4241);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.00027330(arg4,0xf4241);
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
            pcVar8 = 0x365b4;
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
code_r0x0002688e:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x365b4;
            }
            else {
                pcVar8 = 0x365b8;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x00026625:
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
                    goto code_r0x000267c8;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x000267df;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x000267c8;
                        }
                        goto code_r0x000267df;
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
code_r0x000267c8:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x00026625;
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
                        goto code_r0x00026625;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x000267df;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x000267c8;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x000267df:
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
                        fcn.000271dc(&var_68h_2,0x26,0,0x36548);
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
                            goto code_r0x0002688e;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x00026a77;
                        if (uStack_a8 == 0x58) goto code_r0x00026b6c;
                        if (uStack_a8 == 0x61) goto code_r0x00026a80;
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
                            goto code_r0x00026606;
                        }
                        if (uStack_a8 != 100) goto code_r0x00026602;
                        goto code_r0x00026b83;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x365b4;
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
                goto code_r0x00026db0;
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
                            iVar12 = 0x3664b;
                            goto code_r0x00026b33;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x00026b33:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x00026db0;
                    }
                    fcn.000271dc(&var_68h_2,0x26,0,0x365ac);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x00026a77:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x00026a80:
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
                        goto code_r0x00026db0;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x00026602;
                            goto code_r0x00026b70;
                        }
                        goto code_r0x00026b75;
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
                        goto code_r0x00026db0;
                    }
                    fcn.000271dc(&var_68h_2,0x26,0,0x36590);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x00026db0;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x00026b6c:
            uVar21 = uVar21 | 0x20;
code_r0x00026b70:
            uVar21 = uVar21 | 0x80;
code_r0x00026b75:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x00026b83:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x00026bc5;
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
code_r0x00026bc5:
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
code_r0x00026c4d:
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
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x00026c4d;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar10 = uVar5;
            do {
                uVar6 = uVar10 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = "0123456789ABCDEF%"[uVar10 % uVar16];
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
code_r0x00026602:
            pcVar8 = &uStack_a8;
code_r0x00026606:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x00026db0:
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
                arg1 = fcn.00026440(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00026440(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
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
                arg1 = fcn.00026440(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
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
                arg1 = fcn.00026440(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
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


/* fcn.00012f20 @ 0x12f20 */

//WARNING: Removing unreachable block (ram,0x00016088)
//WARNING: Removing unreachable block (ram,0x0001609b)
//WARNING: Removing unreachable block (ram,0x000160a7)
//WARNING: Removing unreachable block (ram,0x000160c4)

ulong fcn.00012f20(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t arg2;
    int64_t in_R9;
    uint64_t uVar3;
    
    uVar2 = 0;
    iVar1 = (**(*0x36d88 + 0x140))(0x33cd0,0,0x36f48);
    if (-1 < iVar1) {
        in_R9 = 0x34168;
        uVar2 = 0;
        (**(*0x36f48 + 0x70))(0xf,0,0);
    }
    uVar3 = *0x34180;
    if (*0x34168 != '\0') {
        if (*(*0x36d80 + 0x40) != 0) {
            arg2 = CONCAT71(uVar2 >> 8,1);
            iVar1 = arg1;
            if (*0x34180 < *0x36e90) {
                fcn.00015ea0();
                *0x36ea0 = *0x36ea8;
                *0x36e90 = uVar3;
            }
            iVar1 = fcn.000157a0(iVar1,arg2,arg1,in_R9);
            if (*0x36e8e != '\0') {
                uVar3 = *0x36e90 + iVar1;
                if (*0x34198 == 0xffff) {
                    *0x34198 = *0x36eb0;
                }
                if (*0x34190 == 0xffff) {
                    *0x34190 = uVar3;
                }
                if (*0x36eb0 < *0x34198) {
                    *0x34198 = *0x36eb0;
                }
                if (*0x34190 < uVar3) {
                    *0x34190 = uVar3;
                }
                fcn.00016678();
            }
            *0x36e90 = *0x36e90 + 1 + iVar1;
            *0x36ea0 = *0x36ea8;
            if (*0x34158 < *0x36e90) {
                *0x36e90 = *0x34158;
            }
            return 0;
        }
        return 0x8000000000000006;
    }
    return 0x8000000000000003;
}


/* fcn.000149b0 @ 0x149b0 */

uint8_t fcn.000149b0(void)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    uint64_t uStackX_8;
    uint64_t uStackX_10;
    
    uVar3 = 0;
    uStackX_10 = 0;
    uStackX_8 = 0;
    iVar2 = fcn.00014804(0xffff0002,&uStackX_10,&uStackX_8);
    if (iVar2 == 0) {
        uVar3 = fcn.00021274();
    }
    else {
        for (uVar4 = uStackX_10; uVar4 <= uStackX_8; uVar4 = uVar4 + 1) {
            uVar1 = (**(uVar4 * 8 + 0x35910))();
            uVar3 = uVar3 | uVar1;
        }
    }
    return uVar3;
}


/* fcn.00013230 @ 0x13230 */

uint64_t fcn.00013230(void)

{
    char cVar1;
    
    cVar1 = *(*0x431c0 + 0x49);
    if (cVar1 != '\0') {
        fcn.0001c6e4();
    }
    return ~-(cVar1 != '\0') & 0x8000000000000003;
}


/* fcn.0001a878 @ 0x1a878 */

void fcn.0001a878(int64_t arg1)

{
    uint32_t *puVar1;
    uint32_t auStackX_8 [2];
    uint auStackX_10 [2];
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    char16_t acStack_48 [4];
    int64_t var_38h;
    char16_t acStack_38 [4];
    int64_t var_28h_2;
    char16_t acStack_28 [4];
    int32_t var_18h;
    
    var_20h = 0;
    auStackX_8[0] = 0;
    acStack_28._0_4_ = str.BootOptionSupport._32_4_;
    acStack_48 = str.BootOptionSupport._0_8_;
    var_38h = str.BootOptionSupport._8_8_;
    auStackX_10[0] = 6;
    acStack_38 = str.BootOptionSupport._16_8_;
    var_28h_2 = str.BootOptionSupport._24_8_;
    puVar1 = fcn.000113fc(acStack_48,0x33ce0,auStackX_10,&var_20h);
    if (puVar1 != NULL) {
        auStackX_8[0] = *puVar1;
    }
    auStackX_8[0] = auStackX_8[0] | 3;
    var_20h = 4;
    var_28h = puVar1;
    (**(*0x36d98 + 0x58))(acStack_48,0x33ce0,auStackX_10[0],4,auStackX_8);
    if (puVar1 != NULL) {
        fcn.0001470c(&var_28h);
    }
    return;
}


/* fcn.0001478c @ 0x1478c */

int64_t fcn.0001478c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iStackX_8;
    
    iStackX_8 = arg1;
    iVar1 = fcn.0001504c(arg3);
    if (iVar1 != 0) {
        if (arg1 != 0) {
            if (arg2 <= arg3) {
                arg3 = arg2;
            }
            (**(*0x36d88 + 0x160))(iVar1,arg1,arg3);
        }
        fcn.0001470c(&iStackX_8);
    }
    return iVar1;
}


/* fcn.0001f144 @ 0x1f144 */

void fcn.0001f144(int64_t arg1)

{
    uint16_t *puVar1;
    uint32_t *puVar2;
    uint32_t *puVar3;
    uint64_t uVar4;
    uint32_t auStackX_10 [2];
    int64_t iStackX_18;
    int32_t var_28h;
    int64_t var_30h_2;
    int64_t var_38h;
    uint32_t auStack_48 [2];
    int64_t iStack_40;
    int64_t var_30h;
    int64_t var_28h_2;
    int64_t var_20h;
    
    auStack_48[0] = 0;
    auStack_48[1] = 0;
    if (*0x36f60 <= *0x36f78) {
        *0x36f50 = fcn.0001478c(*0x36f50,*0x36f78 * 0x14,(*0x36f60 + 10) * 0x14);
        if (*0x36f50 == 0) {
            return;
        }
        *0x36f60 = *0x36f60 + 10;
    }
    puVar3 = fcn.000113fc(arg1,0x33ce0,0,auStack_48);
    if (puVar3 != NULL) {
        iStackX_18 = 0;
        auStackX_10[0] = 0;
        uVar4 = *puVar3 >> 0x1e;
        _var_28h = puVar3;
        fcn.0001c360(&var_30h,0x12,0x35510,puVar3[2]);
        iStack_40 = fcn.000113fc(&var_30h,0x33ce0,0,&iStackX_18);
        if ((iStack_40 != 0) && (iStackX_18 != 0)) {
            (**(*0x36d88 + 0x158))(iStack_40,iStackX_18,auStackX_10);
            fcn.0001470c(&iStack_40);
        }
        if ((auStackX_10[0] != 0) && (auStackX_10[0] == puVar3[1])) {
            *(*0x36f50 + 4 + *0x36f78 * 0x14) = 0x80000000;
            if ((*puVar3 & 0x100) != 0) {
                puVar2 = *0x36f50 + 4 + *0x36f78 * 0x14;
                *puVar2 = *puVar2 | 3;
            }
            if ((*puVar3 & 0x200) != 0) {
                puVar2 = *0x36f50 + 4 + *0x36f78 * 0x14;
                *puVar2 = *puVar2 | 0xc;
            }
            if ((*puVar3 & 0x400) != 0) {
                puVar2 = *0x36f50 + 4 + *0x36f78 * 0x14;
                *puVar2 = *puVar2 | 0x30;
            }
            if ((*puVar3 & 0x800) != 0) {
                puVar2 = *0x36f50 + 4 + *0x36f78 * 0x14;
                *puVar2 = *puVar2 | 0xc0;
            }
            if ((*puVar3 & 0x1000) != 0) {
                puVar2 = *0x36f50 + 4 + *0x36f78 * 0x14;
                *puVar2 = *puVar2 | 0x100;
            }
            if ((*puVar3 & 0x2000) != 0) {
                puVar2 = *0x36f50 + 4 + *0x36f78 * 0x14;
                *puVar2 = *puVar2 | 0x200;
            }
            *(*0x36f50 + 0xc + *0x36f78 * 0x14) = puVar3[2];
            *(*0x36f50 + 0x10 + *0x36f78 * 0x14) = puVar3[1];
            while (uVar4 != 0) {
                uVar4 = uVar4 - 1;
                puVar1 = *0x36f50 + *0x36f78 * 0x14;
                *puVar1 = *puVar1 | *(puVar3 + uVar4 * 4 + 10);
                puVar1 = *0x36f50 + 2 + *0x36f78 * 0x14;
                *puVar1 = *puVar1 | puVar3[uVar4 + 3];
            }
            *0x36f78 = *0x36f78 + 1;
        }
        fcn.0001470c(&var_28h);
    }
    return;
}


/* fcn.00020248 @ 0x20248 */

uint64_t fcn.00020248(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uchar auStackX_20 [8];
    uchar auStack_78 [4];
    uint uStack_74;
    int64_t iStack_70;
    uint64_t uStack_68;
    int64_t aiStack_60 [2];
    uint uStack_50;
    uint uStack_4c;
    uint uStack_48;
    uint uStack_44;
    uint uStack_40;
    uint uStack_3c;
    uint uStack_38;
    uint uStack_34;
    
    uVar6 = 0;
    uStack_40 = 0x5ad34ba;
    uStack_74 = 0;
    aiStack_60[1] = 0;
    uStack_3c = 0x42146f02;
    uStack_38 = 0xa04d2e95;
    uStack_34 = 0xb92b8e39;
    uStack_50 = 0x5ca020b;
    uStack_4c = 0x11dc0fc1;
    uStack_48 = 0x17001190;
    uStack_44 = 0xa8eb5331;
    iVar1 = (**(*0x36d88 + 0x138))(2,0x33ea0,0,&uStack_68,&iStack_70);
    if (-1 < iVar1) {
        uVar4 = 0x8000000000000005;
        uVar5 = uVar6;
        if (uStack_68 != 0) {
            do {
                (**(*0x36d88 + 0x98))(*(iStack_70 + uVar5 * 8),0x33ea0,aiStack_60);
                iVar1 = (**(aiStack_60[0] + 0x18))(aiStack_60[0],arg1,0x19,0,arg2,arg3,auStack_78);
                if (-1 < iVar1) {
                    uVar4 = uVar6;
                    goto code_r0x00020525;
                }
                if (iVar1 == -0x7ffffffffffffffb) goto code_r0x00020525;
                uVar5 = uVar5 + 1;
            } while (uVar5 < uStack_68);
        }
        if (uStack_68 != 0) {
            do {
                iVar1 = (**(*0x36d88 + 0x98))(*(iStack_70 + uVar6 * 8),0x33ea0,aiStack_60);
                if ((-1 < iVar1) &&
                   (iVar1 = (**(aiStack_60[0] + 0x10))
                                      (aiStack_60[0],&uStack_50,arg2,arg3,auStackX_20,&uStack_74,auStack_78),
                   -1 < iVar1)) {
                    if (*arg3 != 0) {
                        *arg3 = 0;
                    }
                    break;
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < uStack_68);
        }
        fcn.0001470c(&iStack_70);
        if (-1 < iVar1) {
            iVar2 = fcn.00028044(*0x36d80,&uStack_40);
            iVar1 = *arg2;
            uVar3 = (**(*0x36d88 + 0x18))(0x1f);
            (**(*0x36d88 + 0x20))(4);
            uVar6 = (**(iVar2 + 0x98))(iVar1,*(iVar1 + 0x30),aiStack_60 + 1);
            fcn.0001470c(arg2);
            if (uVar6 < 0) {
                return uVar6;
            }
            (**(*0x36d88 + 0x18))(0x1f);
            (**(*0x36d88 + 0x20))(uVar3);
            iVar1 = (**(*0x36d88 + 0x138))(2,0x33ea0,0,&uStack_68,&iStack_70);
            if (-1 < iVar1) {
                uVar6 = 0;
                if (uStack_68 != 0) {
                    do {
                        iVar1 = (**(*0x36d88 + 0x98))(*(iStack_70 + uVar6 * 8),0x33ea0,aiStack_60);
                        if (-1 < iVar1) {
                            iVar1 = (**(aiStack_60[0] + 0x18))(aiStack_60[0],arg1,0x19,0,arg2,arg3,auStack_78);
                            if (-1 < iVar1) {
                                uVar4 = 0;
code_r0x00020559:
                                fcn.0001470c(&iStack_70);
                                return uVar4;
                            }
                            if (iVar1 == -0x7ffffffffffffffb) goto code_r0x00020559;
                        }
                        uVar6 = uVar6 + 1;
                    } while (uVar6 < uStack_68);
                }
                uVar4 = 0x800000000000000e;
code_r0x00020525:
                (**(*0x36d88 + 0x48))(iStack_70);
                return uVar4;
            }
        }
    }
    return 0x800000000000000e;
}


/* fcn.0001c530 @ 0x1c530 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Removing unreachable block (ram,0x0001c6aa)

int64_t fcn.0001c530(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_50h,uint32_t arg_58h,
                    int64_t arg_60h,uint32_t arg_68h)

{
    int64_t *arg1_00;
    int64_t *arg2_00;
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *arg2_01;
    char in_stack_00000030;
    int64_t *in_stack_00000038;
    int64_t *in_stack_00000040;
    int64_t aiStack_40 [3];
    int8_t var_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    
    arg2_00 = in_stack_00000040;
    arg1_00 = in_stack_00000038;
    aiStack_40[1] = 0;
    *in_stack_00000038 = 0;
    *in_stack_00000040 = 0;
    aiStack_40[0] = 0;
    fcn.00017728();
    if (*0x36e60 == 0) {
        iVar2 = -0x7ffffffffffffffd;
    }
    else {
        arg2_01 = &stack0x00000038;
        iVar2 = fcn.0001c500(&stack0x00000040,arg2_01);
        if (-1 < iVar2) {
            if ((*arg1 == 'B') && (*(arg1 + 1) == 'M')) {
                iVar2 = fcn.0002e694(arg1,arg2_01,aiStack_40,aiStack_40 + 8);
            }
            else {
                iVar2 = fcn.00029d2c(arg1,arg2,aiStack_40,aiStack_40 + 1);
            }
            if (-1 < iVar2) {
                if ((in_stack_00000030 != '\0') &&
                   (((in_stack_00000040 < *arg1_00 || (in_stack_00000038 < *arg2_00)) &&
                    (fcn.0001c418(arg1_00,arg2_00), *0x36e60 != 0)))) {
                    fcn.0001c500(&stack0x00000040,&stack0x00000038);
                }
                fcn.0001c84c(aiStack_40[0],arg3 & 0xffffffff,*arg1_00,*arg2_00);
                iVar2 = *0x37060;
                iVar3 = fcn.00028044(*0x37060,0x34c50);
                iVar1 = 0;
                if (iVar3 != 0) {
                    iVar1 = *(iVar3 + 0xc);
                }
                if (iVar1 != 0x12) {
                    fcn.00028044(iVar2,0x34c50);
                }
                fcn.0001470c(aiStack_40);
                iVar2 = 0;
            }
        }
    }
    return iVar2;
}


/* fcn.00029c98 @ 0x29c98 */

ulong fcn.00029c98(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.00027fcc(arg1,0x35858,6);
    if ((iVar1 == 0) || (iVar1 = fcn.00027fcc(arg1,0x35860,6), iVar1 == 0)) {
        return 1;
    }
    if (*arg1 == -0x2701) {
        return 2;
    }
    if (((((*arg1 == -0x77) && (*(arg1 + 1) == 'P')) && (*(arg1 + 2) == 'N')) &&
        ((*(arg1 + 3) == 'G' && (*(arg1 + 4) == '\r')))) &&
       ((*(arg1 + 5) == '\n' && ((*(arg1 + 6) == '\x1a' && (*(arg1 + 7) == '\n')))))) {
        return 4;
    }
    return 6;
}


/* fcn.000161e4 @ 0x161e4 */

void fcn.000161e4(uint32_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint in_register_0000000c;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    
    uVar2 = *0x34160;
    uVar1 = *0x34158;
    uVar3 = CONCAT44(in_register_0000000c,arg1);
    if ((*0x36e8e == '\0') && (*0x36eb0 < uVar3)) {
        if (*0x34158 - uVar3 <= *0x36e90 - *0x36eb0) {
            *0x36eb0 = uVar3 + ((*0x36e90 - *0x34158) - *0x36eb0);
        }
        iVar5 = uVar3 - *0x36eb0;
        if (iVar5 != 0) {
            if (*0x36eb0 < *0x36e90) {
                iVar4 = (*0x36e90 + iVar5) * *0x34160;
                iVar8 = *0x34160 * *0x36eb0;
                iVar6 = *0x34160 * *0x36e90 + -1;
                *(*0x431c8 + 3 + iVar4) = *(*0x431c8 + 3 + *0x34160 * *0x36e90);
                iVar7 = iVar6 * 2 + 0x3d0904;
                *(*0x431c8 + 0x3d0902 + iVar4 * 2) = *(iVar7 + *0x431c8);
                *(iVar7 + *0x431c8) = 0x20;
                *(*0x431c8 + 4 + iVar6) = 7;
                if (iVar6 != iVar8) {
                    iVar4 = uVar2 * iVar5 + iVar6;
                    do {
                        iVar7 = iVar7 + -2;
                        iVar6 = iVar6 + -1;
                        iVar4 = iVar4 + -1;
                        *(*0x431c8 + 4 + iVar4) = *(*0x431c8 + 4 + iVar6);
                        *(iVar7 + uVar2 * iVar5 * 2 + *0x431c8) = *(iVar7 + *0x431c8);
                        *(iVar7 + *0x431c8) = 0x20;
                        *(*0x431c8 + 4 + iVar6) = 7;
                    } while (iVar6 != iVar8);
                }
            }
            *0x36e90 = *0x36e90 + iVar5;
            *0x36eb0 = uVar3;
        }
        if (uVar1 < *0x34180) {
            *0x34180 = uVar1;
        }
        if (uVar2 < *0x34188) {
            *0x34188 = uVar2;
        }
    }
    *0x36e8e = 1;
    if (*0x36eb0 < *0x36e90) {
        uVar1 = uVar1 - 1;
        if (*0x34198 == 0xffff) {
            *0x34198 = *0x36eb0;
        }
        if (*0x34190 == 0xffff) {
            *0x34190 = uVar1;
        }
        if (*0x36eb0 < *0x34198) {
            *0x34198 = *0x36eb0;
        }
        if (*0x34190 < uVar1) {
            *0x34190 = uVar1;
        }
        fcn.00016678();
    }
    return;
}


/* fcn.00033b70 @ 0x33b70 */

int64_t fcn.00033b70(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00017af8 @ 0x17af8 */

void fcn.00017af8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int32_t arg_30h,uint32_t arg_38h)

{
    uint8_t uVar1;
    uint8_t uVar2;
    char cVar3;
    uint64_t uVar4;
    int32_t *piVar5;
    int16_t *piVar6;
    char cVar7;
    int64_t iVar8;
    int16_t var_40h;
    int64_t var_3eh;
    int64_t var_36h;
    int16_t var_2eh;
    int32_t var_28h;
    int64_t var_24h;
    int8_t var_18h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    
    var_3eh._0_1_ = 0;
    var_3eh._1_1_ = 0;
    var_3eh._2_6_ = 0;
    var_36h._0_2_ = 0;
    var_36h._2_4_ = 0;
    var_36h._6_2_ = 0;
    var_2eh = 0;
    fcn.00033b70(&var_24h,0,0x20);
    var_28h = 0x54524742;
    var_24h._4_2_ = 1;
    var_24h._0_4_ = 0x38;
    uVar1 = 0;
    var_ch = 0x20494d41;
    do {
        uVar4 = uVar1;
        if ("ALASKA"[uVar4] == '\0') break;
        uVar1 = uVar1 + 1;
        *(&var_24h + uVar4 + 6) = "ALASKA"[uVar4];
    } while (uVar1 < 6);
    var_10h = 0x1072009;
    var_8h = 0x10013;
    uVar1 = 0;
    do {
        if ("A M I "[uVar1] == 0) break;
        uVar2 = uVar1 + 1;
        (&var_18h)[uVar1] = "A M I "[uVar1];
        uVar1 = uVar2;
    } while (uVar2 < 8);
    piVar5 = &var_28h;
    if (arg_38h == '\0') {
        var_3eh._0_1_ = 1;
    }
    var_3eh._2_6_ = arg3;
    var_36h._0_2_ = arg3 >> 0x30;
    iVar8 = 0x24;
    var_36h._6_2_ = arg_30h;
    var_2eh = arg_30h >> 0x10;
    cVar3 = '\0';
    var_40h = 1;
    var_3eh._1_1_ = 0;
    var_36h._2_4_ = arg4;
    do {
        cVar3 = cVar3 + *piVar5;
        piVar5 = piVar5 + 1;
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    iVar8 = 0x14;
    piVar6 = &var_40h;
    cVar7 = '\0';
    do {
        cVar7 = cVar7 + *piVar6;
        piVar6 = piVar6 + 1;
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    var_24h._4_2_ = CONCAT11(-cVar7 - cVar3,1);
    iVar8 = fcn.000150a0(0x38);
    *arg1 = iVar8;
    if (iVar8 != 0) {
        (**(*0x36d88 + 0x160))(iVar8,&var_28h,0x24);
        (**(*0x36d88 + 0x160))(*arg1 + 0x24,&var_40h,0x14);
        *arg2 = 0x38;
    }
    return;
}


/* fcn.000152c0 @ 0x152c0 */

ulong fcn.000152c0(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint8_t uVar4;
    uint in_register_00000014;
    uint64_t *puVar5;
    int16_t *piVar6;
    uint16_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint8_t uStackX_20;
    
    puVar5 = CONCAT44(in_register_00000014,arg2);
    uVar8 = 0;
    uStackX_20 = arg4;
    uVar7 = uStackX_20;
    uVar9 = uVar8;
    do {
        iVar1 = *(arg3 + uVar9 * 2);
        if (iVar1 - 0x30U < 10) {
            uVar7 = iVar1 - 0x30;
        }
        else if (iVar1 - 0x41U < 6) {
            uVar7 = iVar1 - 0x37;
        }
        else {
            if (5 < iVar1 - 0x61U) {
                if (uVar9 == 0) {
                    *puVar5 = 0;
                }
                else {
                    uVar2 = uVar9 + 1 >> 1;
                    uVar3 = *puVar5;
                    *puVar5 = uVar2;
                    if (uVar3 < uVar2) {
                        return 0x8000000000000005;
                    }
                    if (uVar9 != 0) {
                        piVar6 = arg3 + -2 + uVar9 * 2;
                        do {
                            if (*piVar6 - 0x30U < 10) {
                                uVar7 = *piVar6 - 0x30;
                            }
                            else if (*piVar6 - 0x41U < 6) {
                                uVar7 = *piVar6 - 0x37;
                            }
                            else if (*piVar6 - 0x61U < 6) {
                                uVar7 = *piVar6 + 0xa9;
                            }
                            uVar4 = uVar7;
                            if ((uVar8 & 1) != 0) {
                                uVar4 = *((uVar8 >> 1) + arg1) & 0xf | uVar4 << 4;
                            }
                            piVar6 = piVar6 + -1;
                            uVar3 = uVar8 >> 1;
                            uVar8 = uVar8 + 1;
                            *(uVar3 + arg1) = uVar4;
                        } while (uVar8 < uVar9);
                    }
                }
                return 0;
            }
            uVar7 = iVar1 - 0x57;
        }
        uVar9 = uVar9 + 1;
    } while( true );
}


/* fcn.00019110 @ 0x19110 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h

void fcn.00019110(void)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint16_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ushort auStackX_8 [4];
    int64_t iStackX_10;
    uint64_t uStackX_18;
    int16_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    uint uStack_38;
    uint uStack_34;
    uint uStack_30;
    uint uStack_2c;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    
    uStackX_18 = 0;
    uVar5 = 0;
    uStack_38 = 0xb4909cf3;
    uStack_34 = 0x47517b93;
    uStack_30 = 0xa85bd89b;
    uStack_2c = 0xb29b0b22;
    iStackX_10 = 0;
    if (CONCAT62(*0x4317a,*0x43178) != 0) {
        iStackX_10 = fcn.0001504c(CONCAT62(*0x4317a,*0x43178) * 2);
    }
    iVar6 = iStackX_10;
    iVar1 = fcn.000113fc(0x35260,0x33ce0,0,&uStackX_18);
    uVar9 = uStackX_18 >> 1;
    uVar8 = uVar5;
    _var_28h = iVar1;
    if (uVar9 != 0) {
        do {
            uVar4 = *(iVar1 + uVar8 * 2);
            iVar2 = fcn.00018888(uVar4);
            if ((iVar2 != 0) && ((*(iVar2 + 4) & 1) != 0)) {
                *(iVar6 + uVar5 * 2) = uVar4;
                uVar5 = uVar5 + 1;
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
    }
    uVar8 = CONCAT62(*0x4317a,*0x43178);
    uVar7 = 0;
    if (uVar8 != 0) {
        iVar2 = 0;
        do {
            if ((*(iVar2 + 4 + *0x43170) & 1) != 0) {
                uVar3 = 0;
                if (uVar9 != 0) {
                    do {
                        if (*(iVar1 + uVar3 * 2) == *(iVar2 + *0x43170)) break;
                        uVar3 = uVar3 + 1;
                    } while (uVar3 < uVar9);
                    if (uVar3 < uVar9) goto code_r0x00019204;
                }
                *(iVar6 + uVar5 * 2) = *(iVar2 + *0x43170);
                uVar5 = uVar5 + 1;
                uVar8 = CONCAT62(*0x4317a,*0x43178);
            }
code_r0x00019204:
            uVar7 = uVar7 + 1;
            iVar2 = iVar2 + 0x48;
        } while (uVar7 < uVar8);
    }
    fcn.0001470c(&var_28h);
    uVar8 = CONCAT62(*0x4317a,*0x43178);
    uVar9 = 0;
    if (uVar8 != 0) {
        iVar1 = 0;
        do {
            if ((*(iVar1 + 4 + *0x43170) & 0x101) == 0) {
                *(iVar6 + uVar5 * 2) = *(iVar1 + *0x43170);
                uVar5 = uVar5 + 1;
                uVar8 = CONCAT62(*0x4317a,*0x43178);
            }
            uVar9 = uVar9 + 1;
            iVar1 = iVar1 + 0x48;
        } while (uVar9 < uVar8);
    }
    uVar9 = 0;
    if (uVar8 != 0) {
        iVar1 = 0;
        do {
            if (((*(iVar1 + 4 + *0x43170) & 1) == 0) && ((*(iVar1 + 4 + *0x43170) & 0x100) != 0)) {
                *(iVar6 + uVar5 * 2) = *(iVar1 + *0x43170);
                uVar5 = uVar5 + 1;
                uVar8 = CONCAT62(*0x4317a,*0x43178);
            }
            uVar9 = uVar9 + 1;
            iVar1 = iVar1 + 0x48;
        } while (uVar9 < uVar8);
        if (uVar8 != 0) {
            fcn.00019040(0,&iStackX_10,uVar8);
            iVar6 = iStackX_10;
        }
    }
    (**(*0x36d98 + 0x58))(L"BootOrder",0x33ce0,7,uVar5 * 2,iVar6);
    fcn.0001470c(&iStackX_10);
    fcn.0001d478();
    auStackX_8[0] = *0x43178;
    (**(*0x36d98 + 0x58))(L"BootManager",&uStack_38,2,2,auStackX_8);
    auStackX_8[0] = fcn.000195f0();
    (**(*0x36d98 + 0x58))(L"BootNowCount",0x34370,2,2,auStackX_8);
    return;
}


/* fcn.00019350 @ 0x19350 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h

void fcn.00019350(void)

{
    uint16_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint16_t auStackX_8 [4];
    int64_t iStackX_10;
    uint64_t uStackX_18;
    int64_t iStackX_20;
    int16_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    uint uStack_48;
    uint uStack_44;
    uint uStack_40;
    uint uStack_3c;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    
    uVar6 = 0;
    uStackX_18 = 0;
    iStackX_10 = 0;
    auStackX_8[0] = 0;
    uStack_48 = 0xc0b4fb05;
    uStack_44 = 0x458815e5;
    uStack_40 = 0xd3b3e99f;
    uStack_3c = 0x1577069c;
    if ((CONCAT62(*0x43162,*0x43160) == 0) ||
       (iStackX_10 = fcn.0001504c(CONCAT62(*0x43162,*0x43160) * 2), iStackX_10 != 0)) {
        iVar7 = iStackX_10;
        iVar2 = fcn.000113fc(0x35638,0x33ce0,0,&uStackX_18);
        uVar5 = uStackX_18 >> 1;
        iStackX_20 = iVar2;
        if ((iVar2 == 0) || (uStackX_18 == 0)) {
            uVar11 = CONCAT62(*0x43162,*0x43160);
            uVar10 = auStackX_8[0];
            if (uVar11 != 0) {
                uVar9 = uVar6;
                uVar8 = uVar6;
                uVar12 = uVar10;
                do {
                    uVar10 = uVar12;
                    if ((*(uVar9 + 4 + *0x43168) & 1) != 0) {
                        *(iVar7 + uVar12 * 2) = *(uVar9 + *0x43168);
                        uVar11 = CONCAT62(*0x43162,*0x43160);
                        auStackX_8[0] = auStackX_8[0] + 1;
                        uVar10 = auStackX_8[0];
                        uVar5 = uVar12;
                    }
                    uVar8 = uVar8 + 1;
                    uVar9 = uVar9 + 0x48;
                    uVar12 = uVar10;
                } while (uVar8 < uVar11);
            }
        }
        else {
            uVar10 = auStackX_8[0];
            uVar9 = uVar5 & 0xffff;
            uVar11 = uVar6;
            if (uVar9 != 0) {
                do {
                    uVar1 = *(iVar2 + uVar11 * 2);
                    uVar5 = uVar1;
                    iVar3 = fcn.000188c0(uVar1);
                    if ((iVar3 != 0) && ((*(iVar3 + 4) & 1) != 0)) {
                        *(iVar7 + (uVar10 & 0xffff) * 2) = uVar5;
                        auStackX_8[0] = auStackX_8[0] + 1;
                        uVar10 = auStackX_8[0];
                    }
                    uVar11 = uVar11 + 1;
                } while (uVar11 < uVar9);
            }
            uVar11 = CONCAT62(*0x43162,*0x43160);
            if (uVar11 != 0) {
                uVar8 = uVar6;
                uVar12 = uVar6;
                do {
                    uVar5 = *0x43168;
                    if ((*(uVar8 + 4 + *0x43168) & 1) != 0) {
                        if (uVar9 != 0) {
                            uVar4 = uVar6;
                            do {
                                if (*(iVar2 + uVar4 * 2) == *(uVar8 + *0x43168)) break;
                                uVar4 = uVar4 + 1;
                            } while (uVar4 < uVar9);
                            if (uVar4 < uVar9) goto code_r0x000194a6;
                        }
                        uVar5 = *(uVar8 + *0x43170);
                        *(iVar7 + (uVar10 & 0xffff) * 2) = *(uVar8 + *0x43170);
                        uVar11 = CONCAT62(*0x43162,*0x43160);
                        auStackX_8[0] = auStackX_8[0] + 1;
                        uVar10 = auStackX_8[0];
                    }
code_r0x000194a6:
                    uVar12 = uVar12 + 1;
                    uVar8 = uVar8 + 0x48;
                } while (uVar12 < uVar11);
            }
        }
        iVar3 = 0;
        if (uVar11 != 0) {
            uVar9 = uVar6;
            do {
                if ((*(uVar6 + 4 + *0x43168) & 1) == 0) {
                    uVar5 = uVar10 & 0xffff;
                    *(iVar7 + uVar5 * 2) = *(uVar6 + *0x43168);
                    uVar11 = CONCAT62(*0x43162,*0x43160);
                    auStackX_8[0] = auStackX_8[0] + 1;
                    uVar10 = auStackX_8[0];
                }
                uVar9 = uVar9 + 1;
                uVar6 = uVar6 + 0x48;
            } while (uVar9 < uVar11);
            iVar3 = 0;
            if (uVar11 != 0) {
                fcn.00019040(CONCAT71(uVar5 >> 8,1),&iStackX_10,uVar11);
                iVar3 = CONCAT62(*0x43162,*0x43160);
                iVar7 = iStackX_10;
            }
        }
        (**(*0x36d98 + 0x58))(L"DriverOrder",0x33ce0,7,iVar3 * 2,iVar7);
        auStackX_8[0] = *0x43160;
        (**(*0x36d98 + 0x58))(L"DriverManager",&uStack_48,2,2,auStackX_8);
        if (iVar2 != 0) {
            fcn.0001470c(&iStackX_20);
        }
        if (iVar7 != 0) {
            fcn.0001470c(&iStackX_10);
        }
    }
    return;
}


/* fcn.0001af0c @ 0x1af0c */

int16_t * fcn.0001af0c(int64_t arg1,uint32_t arg2)

{
    uint64_t uVar1;
    int16_t *piVar2;
    
    if (arg2 == '\x01') {
        uVar1 = 0;
        if (*0x43150 != 0) {
            piVar2 = *0x43140;
            do {
                if (*piVar2 == arg1) {
                    return *0x43140 + uVar1 * 0x24;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 0x24;
            } while (uVar1 < *0x43150);
        }
    }
    else if ((arg2 == '\x02') && (uVar1 = 0, *0x43130 != 0)) {
        piVar2 = *0x43158;
        do {
            if (*piVar2 == arg1) {
                return *0x43158 + uVar1 * 0x24;
            }
            uVar1 = uVar1 + 1;
            piVar2 = piVar2 + 0x24;
        } while (uVar1 < *0x43130);
    }
    return NULL;
}


/* fcn.0001db88 @ 0x1db88 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

void fcn.0001db88(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint16_t uVar6;
    char16_t *arg1_00;
    ushort *arg2_00;
    uint64_t uVar7;
    uint16_t uVar8;
    uint64_t uVar9;
    uint16_t auStackX_20 [4];
    int16_t var_48h;
    ushort auStack_58 [2];
    ushort auStack_54 [2];
    int64_t iStack_50;
    uint64_t uStack_48;
    int64_t iStack_40;
    int16_t var_30h;
    int16_t var_2ch;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    
    uVar5 = 0;
    uVar8 = 0;
    auStack_54[0] = 0;
    auStackX_20[0] = 0;
    auStack_58[0] = 0;
    _var_30h = 0;
    iStack_50 = 0;
    uStack_48 = 0;
    iVar2 = fcn.0001d308();
    if (iVar2 < 0) {
        return;
    }
    iVar2 = (**(*0x36f20 + 0x30))(*0x36f20,auStack_54,&var_30h,auStackX_20,&iStack_50);
    if (iVar2 < 0) {
        return;
    }
    if (*0x36e1c == 1) {
        arg1_00 = L"OsRecoveryOrder";
    }
    else {
        if (*0x36e1c == 2) {
            iVar2 = 0x33d60;
            arg1_00 = L"PlatformRecoveryOrder";
            goto code_r0x0001dc36;
        }
        arg1_00 = L"BootOrder";
    }
    iVar2 = 0x33ce0;
code_r0x0001dc36:
    iVar2 = fcn.000113fc(arg1_00,iVar2,0,&uStack_48);
    uVar7 = uStack_48 >> 1;
    uVar6 = uVar8;
    if (auStackX_20[0] != 0) {
        do {
            uVar1 = *(uVar6 * 0x45 + iStack_50);
            if ((uVar1 < 0xfffc) || (uVar1 == 0xfffe)) {
                *(uVar6 * 0x45 + iStack_50) = 0xfffe;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < auStackX_20[0]);
    }
    arg2_00 = auStackX_20[0];
    iStack_40 = iVar2;
    if (arg2 == 0) {
        if (((**(arg1 + 0x10) & 0x7f) == 5) && ((*(arg1 + 0x10))[1] == 1)) {
            fcn.0001ddb4(iStack_50,auStack_58,arg1);
        }
    }
    else {
        uVar9 = *0x36e1c;
        if (arg3 != 0) {
            uVar4 = uVar5;
            uVar6 = uVar8;
            do {
                uVar1 = *(arg2 + uVar4 * 2);
                if (uVar9 == '\0') {
                    iVar3 = fcn.00018888(uVar1);
                }
                else {
                    arg2_00 = CONCAT71(arg2_00 >> 8,uVar9);
                    iVar3 = fcn.0001af0c(uVar1,arg2_00);
                }
                if (((iVar3 != 0) && ((**(iVar3 + 0x10) & 0x7f) == 5)) && ((*(iVar3 + 0x10))[1] == 1)) {
                    arg2_00 = auStack_58;
                    fcn.0001ddb4(iStack_50,arg2_00,iVar3);
                    uVar9 = *0x36e1c;
                }
                uVar6 = uVar6 + 1;
                uVar4 = uVar6;
            } while (uVar4 < arg3);
        }
        uVar7 = uVar7 & 0xffff;
        if (uVar7 != arg3) {
            do {
                uVar6 = *(iVar2 + uVar5 * 2);
                if (uVar9 == '\0') {
                    iVar3 = fcn.00018888(uVar6);
                }
                else {
                    arg2_00 = CONCAT71(arg2_00 >> 8,uVar9);
                    iVar3 = fcn.0001af0c(uVar6,arg2_00);
                }
                if (((iVar3 != 0) && ((**(iVar3 + 0x10) & 0x7f) == 5)) && ((*(iVar3 + 0x10))[1] == 1)) {
                    arg2_00 = auStack_58;
                    fcn.0001ddb4(iStack_50,arg2_00,iVar3);
                    uVar9 = *0x36e1c;
                }
                uVar8 = uVar8 + 1;
                uVar5 = uVar8;
            } while (uVar5 < uVar7 - arg3);
        }
    }
    if (iVar2 != 0) {
        fcn.0001470c(&iStack_40);
    }
    return;
}


/* fcn.0001d224 @ 0x1d224 */

uint16_t fcn.0001d224(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    
    uVar1 = fcn.0001fb70(arg1,0,*(*0x43188 + 8),arg2);
    if (uVar1 == 0xffff) {
        uVar2 = 0xffff;
    }
    else {
        uVar5 = 0;
        uVar4 = 1;
        uVar2 = uVar1;
        while (uVar4 < *0x43180) {
            if (uVar4 != uVar5) {
                uVar2 = fcn.0001fb70(arg1,uVar2,*(uVar4 * 0x20 + 8 + *0x43188),arg2);
            }
            uVar3 = uVar4;
            if (uVar2 == 0xffff) {
                uVar2 = fcn.0001fb70(arg1,0,*(uVar4 * 0x20 + 8 + *0x43188),arg2);
                if (uVar2 == 0xffff) {
                    uVar2 = uVar1;
                }
                else {
                    uVar3 = 0;
                    uVar5 = uVar4;
                }
            }
            uVar4 = uVar3 + 1;
        }
    }
    return uVar2;
}


/* fcn.000163dc @ 0x163dc */

char * fcn.000163dc(void)

{
    int64_t iVar1;
    char cVar2;
    char *pcVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t arg2;
    char *pcVar6;
    
    iVar1 = 0;
    do {
        iVar4 = iVar1;
        iVar1 = iVar4 + 1;
    } while (*(iVar4 + 0x35605) != '\0');
    pcVar3 = fcn.000150a0(iVar4 + 2);
    if (pcVar3 == NULL) {
        return NULL;
    }
    iVar1 = 0;
    do {
        iVar4 = iVar1;
        iVar1 = iVar4 + 1;
    } while (*(iVar4 + 0x35605) != '\0');
    arg2 = iVar4 + 2;
    if (999999 < iVar4 + 1U) {
        return pcVar3;
    }
    pcVar6 = pcVar3;
    uVar5 = fcn.00027404(0x35604,arg2);
    if (arg2 <= uVar5) {
        return pcVar3;
    }
    if (0x35603 < pcVar3) {
        if (pcVar3 < uVar5 + 0x35605) {
            return pcVar3;
        }
        if (0x35604 < pcVar3) goto code_r0x0001644d;
    }
    if (0x35604 < pcVar3 + arg2) {
        return pcVar3;
    }
code_r0x0001644d:
    cVar2 = 'e';
    do {
        *pcVar6 = cVar2;
        pcVar6 = pcVar6 + 1;
        cVar2 = pcVar6[0x35604 - pcVar3];
    } while (cVar2 != '\0');
    *pcVar6 = '\0';
    return pcVar3;
}


/* fcn.0001a730 @ 0x1a730 */

int64_t fcn.0001a730(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    int64_t in_stack_00000010;
    uchar auStackX_18 [8];
    int64_t iStackX_20;
    
    iVar3 = 0;
    iVar2 = (**(*0x36d88 + 0x138))(2,0x33f70,0,auStackX_18,&iStackX_20);
    if (iVar2 < 0) {
        *arg1 = 0xffffffff;
        iVar3 = 0;
    }
    else {
        for (uVar4 = *arg1; uVar1 = auStackX_18._0_4_, uVar4 < uVar1; uVar4 = uVar4 + 1) {
            iVar3 = fcn.0001516c(*(iStackX_20 + uVar4 * 8),arg2,in_stack_00000010);
            if (iVar3 != 0) {
                *arg1 = uVar4 + 1;
                uVar1 = auStackX_18._0_4_;
                break;
            }
        }
        if (uVar4 == uVar1) {
            *arg1 = 0xffffffff;
        }
        fcn.0001470c(&iStackX_20);
    }
    return iVar3;
}


/* fcn.000188c0 @ 0x188c0 */

int16_t * fcn.000188c0(uint32_t arg1)

{
    uint64_t uVar1;
    int16_t *piVar2;
    
    uVar1 = 0;
    if (*0x43160 != 0) {
        piVar2 = *0x43168;
        do {
            if (*piVar2 == arg1) {
                return *0x43168 + uVar1 * 0x24;
            }
            uVar1 = uVar1 + 1;
            piVar2 = piVar2 + 0x24;
        } while (uVar1 < *0x43160);
    }
    return NULL;
}


/* fcn.00019040 @ 0x19040 */

void fcn.00019040(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ushort uVar1;
    int64_t iVar2;
    uint32_t arg1_00;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    
    iVar4 = arg3 + -1;
    if (iVar4 != 0) {
        iVar6 = 0;
        uVar3 = 1;
        do {
            if (arg1 == '\0') {
                iVar2 = fcn.00018888(*(iVar6 + *arg2));
            }
            else {
                iVar2 = fcn.000188c0(*(iVar6 + *arg2));
            }
            if ((iVar2 != 0) && ((*(iVar2 + 4) & 8) != 0)) {
                for (uVar5 = uVar3; uVar5 < arg3; uVar5 = uVar5 + 1) {
                    arg1_00 = *(*arg2 + uVar5 * 2);
                    if (arg1 == '\0') {
                        iVar2 = fcn.00018888(arg1_00);
                    }
                    else {
                        iVar2 = fcn.000188c0(arg1_00);
                    }
                    if ((iVar2 != 0) && ((*(iVar2 + 4) & 8) == 0)) {
                        iVar2 = *arg2;
                        uVar1 = *(iVar6 + iVar2);
                        *(iVar6 + iVar2) = *(iVar2 + uVar5 * 2);
                        *(iVar2 + uVar5 * 2) = uVar1;
                        break;
                    }
                }
            }
            uVar3 = uVar3 + 1;
            iVar6 = iVar6 + 2;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
    }
    return;
}


/* fcn.0001d478 @ 0x1d478 */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h
//WARNING: Variable defined which should be unmapped: var_39h

void fcn.0001d478(void)

{
    uint8_t *puVar1;
    uint16_t *puVar2;
    char cVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t arg1;
    ulong uVar7;
    uint64_t uVar8;
    uint16_t *puVar9;
    uint16_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    int64_t iVar14;
    uint32_t *arg2;
    bool bVar15;
    int16_t aiStackX_8 [4];
    ushort auStackX_10 [4];
    ushort auStackX_18 [4];
    uint auStackX_20 [2];
    int16_t var_67h;
    int16_t var_6fh;
    int16_t var_77h;
    uint32_t var_7fh;
    uint64_t uStack_a8;
    uint auStack_a0 [2];
    uint64_t uStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    int64_t iStack_80;
    uint64_t uStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    int64_t iStack_60;
    uchar auStack_58 [7];
    uint32_t var_49h;
    int32_t var_41h;
    int64_t var_39h;
    int64_t var_31h;
    int64_t var_29h;
    int64_t var_21h;
    int64_t var_19h;
    int64_t var_11h;
    int64_t var_9h;
    int64_t var_1h;
    
    iVar14 = 0;
    auStack_a0[0] = 7;
    auStackX_18[0] = 0;
    auStackX_10[0] = 0;
    iStack_68 = 0;
    iStack_88 = 0;
    uStack_a8 = 0;
    uStack_98 = 0;
    aiStackX_8[0] = 0;
    iVar4 = fcn.0001d308();
    if (iVar4 < 0) {
        return;
    }
    (**(*0x36f20 + 0x30))(*0x36f20,auStackX_18,&iStack_68,auStackX_10,&iStack_88);
    uStack_a8 = 0;
    _auStack_58 = fcn.000113fc(0x35670,0x34380,auStack_a0,&uStack_a8);
    if (_auStack_58 == NULL) goto code_r0x0001d8b7;
    uStack_98 = 0;
    iVar4 = fcn.000113fc(0x35260,0x33ce0,0,&uStack_98);
    iStack_80 = iVar4;
    if (iVar4 == 0) goto code_r0x0001d8b7;
    iVar5 = fcn.0001504c(uStack_a8);
    iStack_70 = iVar5;
    iVar6 = fcn.0001504c(uStack_98);
    uStack_78 = 0;
    aiStackX_8[0] = 0;
    iVar13 = iVar5;
    iStack_90 = iVar6;
    iStack_60 = iVar5;
    if ((uStack_98 & 0xfffffffffffffffe) != 0) {
        iVar13 = 1;
        auStackX_20[0] = 0xff00;
code_r0x0001d597:
        uVar10 = *(iVar4 + uStack_78 * 2);
        arg1 = fcn.00018888(uVar10);
        if (arg1 != 0) {
            puVar1 = *(arg1 + 0x10);
            if (((*puVar1 & 0x7f) != 5) || (puVar1[1] != iVar13)) {
                *(iVar6 + iVar14 * 2) = uVar10;
                iVar14 = iVar14 + iVar13;
                goto code_r0x0001d81b;
            }
            uVar12 = 0;
            arg2 = _auStack_58;
            if (uStack_a8 != 0) {
code_r0x0001d5e3:
                uVar10 = arg2[1];
                if (uStack_a8 <= uVar10) {
                    return;
                }
                if (uVar10 == 0) {
                    return;
                }
                uVar10 = (uVar10 >> 1) - iVar13;
                if ((uVar10 == 0) || (*(puVar1 + 4) != *arg2)) goto code_r0x0001d638;
                cVar3 = fcn.0001d358(arg1,arg2,*(*(arg2 + 6) * 0x45 + 0x3d + iStack_88));
                if (cVar3 == '\0') {
                    iVar13 = 1;
                    goto code_r0x0001d638;
                }
                if (uStack_a8 <= uVar12) goto code_r0x0001d80a;
                *(iStack_90 + iVar14 * 2) = *(iStack_80 + uStack_78 * 2);
                iVar14 = iVar14 + 1;
                (**(*0x36d88 + 0x160))(iVar5,arg2,arg2[1] + 4);
                aiStackX_8[0] = aiStackX_8[0] + 1;
                bVar15 = *0x36f80 != '\0';
                *(arg1 + 0x30) = iVar5 - iStack_70;
                *(arg1 + 0x38) = uVar10;
                if ((bVar15) && (uVar12 = uVar10, uVar12 != 0)) {
                    puVar9 = iVar5 + 6;
                    do {
                        if (((*puVar9 & 0xff00) == 0xff00) &&
                           (cVar3 = fcn.0001e04c(*puVar9 * 0x45 + iStack_88), cVar3 == '\0')) {
                            *puVar9 = *puVar9;
                        }
                        puVar9 = puVar9 + 1;
                        uVar12 = uVar12 - 1;
                    } while (uVar12 != 0);
                }
                iVar4 = 0;
                uVar12 = uVar10;
                if (uVar12 != 0) {
                    puVar9 = iVar5 + 6;
                    uVar11 = 1;
                    do {
                        if ((*puVar9 & 0xff00) == 0xff00) {
                            uVar8 = uVar11;
                            puVar2 = puVar9;
                            if (uVar11 < uVar12) {
                                do {
                                    uVar10 = puVar2[1];
                                    if (auStackX_20[0] != (uVar10 & auStackX_20[0])) {
                                        *(iVar5 + 6 + uVar8 * 2) = *puVar9;
                                        *puVar9 = uVar10;
                                        break;
                                    }
                                    uVar8 = uVar8 + 1;
                                    puVar2 = puVar2 + 1;
                                } while (uVar8 < uVar12);
                                if (uVar8 < uVar12) goto code_r0x0001d76a;
                            }
                            break;
                        }
code_r0x0001d76a:
                        puVar9 = puVar9 + 1;
                        bVar15 = uVar11 < uVar12;
                        uVar11 = uVar11 + 1;
                    } while (bVar15);
                }
                uVar7 = fcn.0001504c(uVar12 * 0x68);
                *(arg1 + 0x40) = uVar7;
                if (uVar12 != 0) {
                    puVar9 = iVar5 + 6;
                    do {
                        *(iVar4 + *(arg1 + 0x40)) = *puVar9 & 0xff;
                        uVar11 = *(iVar4 + *(arg1 + 0x40));
                        fcn.0001fe1c(*(arg1 + 0x40) + 2 + iVar4,uVar11 * 0x45 + iStack_88,uVar11,iStack_68);
                        puVar9 = puVar9 + 1;
                        iVar4 = iVar4 + 0x68;
                        uVar12 = uVar12 - 1;
                    } while (uVar12 != 0);
                    iVar5 = iStack_60;
                }
                iVar13 = 1;
                iVar5 = iVar5 + *(iVar5 + 4) + 4;
                *arg2 = 0xff;
                iVar4 = iStack_80;
                iStack_60 = iVar5;
                goto code_r0x0001d817;
            }
            goto code_r0x0001d814;
        }
        goto code_r0x0001d81b;
    }
code_r0x0001d840:
    (**(*0x36d98 + 0x58))(L"LegacyDevOrder",0x34380,auStack_a0[0],iVar5 - iVar13,iVar13);
    (**(*0x36d98 + 0x58))(L"BootOrder",0x33ce0,7,iVar14 * 2,iVar6);
    fcn.0001e148();
    fcn.0001470c(&iStack_80);
    fcn.0001470c(&iStack_90);
    fcn.0001470c(auStack_58);
    fcn.0001470c(&iStack_70);
code_r0x0001d8b7:
    auStackX_20[0] = CONCAT22(auStackX_20[0]._2_2_,aiStackX_8[0]);
    (**(*0x36d98 + 0x58))(L"LegacyDev",0x34380,2,2,auStackX_20);
    aiStackX_8[0] = 0;
    (**(*0x36d98 + 0x58))(L"LegacyGroup",0x34380,2,2,aiStackX_8);
    return;
code_r0x0001d638:
    uVar11 = arg2[1] + 4;
    arg2 = arg2 + uVar11;
    uVar12 = uVar12 + uVar11;
    if (uStack_a8 <= uVar12) goto code_r0x0001d80a;
    goto code_r0x0001d5e3;
code_r0x0001d80a:
    iVar13 = 1;
    iVar4 = iStack_80;
code_r0x0001d814:
code_r0x0001d817:
    iVar6 = iStack_90;
code_r0x0001d81b:
    uStack_78 = uStack_78 + iVar13;
    if (uStack_98 >> 1 <= uStack_78) goto code_r0x0001d836;
    goto code_r0x0001d597;
code_r0x0001d836:
    iVar13 = iStack_70;
    goto code_r0x0001d840;
}


/* fcn.0002006c @ 0x2006c */

void fcn.0002006c(void)

{
    ulong uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint16_t uVar4;
    int64_t iStackX_8;
    uint64_t uStackX_10;
    int64_t iStackX_18;
    
    uVar3 = 0;
    iStackX_8 = 0;
    if ((*0x3f9e8 == '\0') && (iVar2 = (**(*0x36d88 + 0x138))(2,0x33d80,0,&uStackX_10,&iStackX_18), -1 < iVar2)) {
        uVar4 = 0;
        if (uStackX_10 != 0) {
            do {
                uVar1 = *(iStackX_18 + uVar3 * 8);
                iVar2 = (**(*0x36d88 + 0x118))(uVar1,0x33d80,&iStackX_8,0,uVar1,2);
                if (-1 < iVar2) {
                    (**(iStackX_8 + 0x20))(iStackX_8);
                }
                uVar4 = uVar4 + 1;
                uVar3 = uVar4;
            } while (uVar3 < uStackX_10);
        }
        *0x3f9e8 = '\x01';
        (**(*0x36d88 + 0x48))(iStackX_18);
    }
    return;
}


/* fcn.00020564 @ 0x20564 */

void fcn.00020564(void)

{
    int64_t iVar1;
    int64_t var_10h;
    int32_t var_10h_2;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_10h = 0;
    var_10h_2 = -0x1f9423;
    var_ch = 0x46a66107;
    var_8h = -0x63a54d85;
    var_4h = 0x5c27c57e;
    if (*0x36ec0 != 0) {
        iVar1 = (**(*0x36d88 + 0x140))(&var_10h_2,0,&var_10h);
        if (iVar1 == 0) {
            (**(var_10h + 8))(var_10h,*0x36ec8);
        }
    }
    return;
}


/* fcn.000196fc @ 0x196fc */

void fcn.000196fc(void)

{
    int64_t iVar1;
    int64_t var_10h;
    int32_t var_bp_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h_2;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_10h = 0;
    var_bp_20h = 0x47c7b223;
    var_1ch = 0x11d2c42a;
    var_18h = -0x5fffa872;
    var_14h = 0x3b7269c9;
    var_10h_2 = 0x6302d008;
    var_ch = 0x4f307f9b;
    var_8h = -0x369f5379;
    var_4h = 0x4edaf5fe;
    iVar1 = (**(*0x36d88 + 0x50))(0x200,8,0x19638,0,0x36ed0);
    if (-1 < iVar1) {
        (**(*0x36d88 + 0xa8))(&var_bp_20h,*0x36ed0,&var_10h);
    }
    iVar1 = (**(*0x36d88 + 0x50))(0x200,8,0x19638,0,0x36ee0);
    if (-1 < iVar1) {
        (**(*0x36d88 + 0xa8))(&var_10h_2,*0x36ee0,&var_10h);
    }
    return;
}


/* fcn.0001f8fc @ 0x1f8fc */

void fcn.0001f8fc(void)

{
    int64_t iVar1;
    int64_t var_10h;
    int32_t var_10h_2;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = *0x36ec0;
    var_10h = 0;
    var_10h_2 = -0x1f9423;
    var_ch = 0x46a66107;
    var_8h = -0x63a54d85;
    var_4h = 0x5c27c57e;
    if (*0x36ec0 != 0) {
        if (*(*0x36ec0 + 0x26) != '\0') {
            *(*0x36ec0 + 0x26) = 0;
            *(iVar1 + 9) = *(iVar1 + 9) + '\x01';
        }
        iVar1 = (**(*0x36d88 + 0x140))(&var_10h_2,0,&var_10h);
        if (iVar1 == 0) {
            *0x36ec8 = 0;
            (**var_10h)(var_10h,*0x36ec0,0x38,0x36ec8);
        }
    }
    return;
}


/* fcn.0001d308 @ 0x1d308 */

int64_t fcn.0001d308(void)

{
    int64_t iVar1;
    
    if (*0x36f20 == 0) {
        iVar1 = (**(*0x36d88 + 0x140))(0x33e60,0,0x36f20);
        if (iVar1 < 0) {
            *0x36f20 = 0;
        }
    }
    else {
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00020760 @ 0x20760 */

void fcn.00020760(uint32_t arg1)

{
    int64_t arg1_00;
    uint in_register_0000000c;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    if (CONCAT44(in_register_0000000c,arg1) == -0x7fffffffffffffe6) {
        arg1_00 = fcn.0001ec60(*0x431d0,0x7e,0);
        iStackX_18 = arg1_00;
        iStackX_20 = fcn.0001ec60(*0x431d0,0x7f,0);
        fcn.00013a50(arg1_00,iStackX_20,0,5);
        fcn.0001470c(&iStackX_18);
        fcn.0001470c(&iStackX_20);
    }
    return;
}


/* fcn.0001a4dc @ 0x1a4dc */

uint64_t fcn.0001a4dc(int64_t arg1)

{
    uint8_t *arg1_00;
    uint8_t *puVar1;
    uint8_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint8_t *puVar5;
    uint64_t uVar6;
    uint8_t *puVar7;
    int64_t iStackX_8;
    uint64_t uStackX_10;
    int64_t iStackX_18;
    uint8_t *puStackX_20;
    
    uVar4 = 0;
    iVar3 = (**(*0x36d88 + 0x138))(2,0x34010,0,&uStackX_10,&iStackX_8);
    if (iVar3 < 0) {
        uVar4 = 0;
    }
    else {
        uVar6 = uVar4;
        if (uStackX_10 != 0) {
            do {
                iVar3 = (**(*0x36d88 + 0x98))(*(iStackX_8 + uVar6 * 8),0x34010,&iStackX_18);
                if (((-1 < iVar3) && (*(*(iStackX_18 + 8) + 6) != '\0')) &&
                   (iVar3 = (**(*0x36d88 + 0x98))(*(iStackX_8 + uVar6 * 8),0x33e70,&puStackX_20),
                   arg1_00 = puStackX_20, -1 < iVar3)) {
                    uVar2 = *puStackX_20;
                    puVar1 = puStackX_20;
                    puVar7 = puStackX_20;
                    while (puVar5 = puVar1, (uVar2 & 0x7f) != 0x7f) {
                        puVar1 = puVar5 + *(puVar5 + 2);
                        puVar7 = puVar5;
                        uVar2 = puVar5[*(puVar5 + 2)];
                    }
                    if (((*puVar7 == 4) && (puVar7[1] == 1)) &&
                       ((*(puVar7 + 4) == *(arg1 + 4) &&
                        ((puVar7[0x29] == *(arg1 + 0x29) &&
                         (iVar3 = fcn.00027fcc(puVar7 + 0x18,arg1 + 0x18,0x10), iVar3 == 0)))))) {
                        uVar4 = fcn.000150cc(arg1_00,*(arg1 + 2) + arg1);
                        break;
                    }
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < uStackX_10);
        }
        (**(*0x36d88 + 0x48))(iStackX_8);
    }
    return uVar4;
}


/* fcn.0001ae14 @ 0x1ae14 */

int64_t fcn.0001ae14(int64_t arg1)

{
    int16_t *arg3;
    int16_t iVar1;
    int16_t *piVar2;
    int16_t *piVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int iVar7;
    int16_t *piStackX_8;
    
    iVar5 = 0;
    iVar7 = 0;
    if (arg1 != 0) {
        arg3 = arg1 + 4;
        iVar1 = *arg3;
        piVar3 = arg3;
        iVar4 = iVar5;
        while (iVar1 != 0) {
            piVar3 = piVar3 + 1;
            iVar4 = iVar4 + 1;
            iVar1 = *piVar3;
        }
        piVar3 = fcn.0001504c(iVar4 * 2 + 2);
        if (piVar3 != NULL) {
            iVar1 = *arg3;
            piVar2 = arg3;
            iVar4 = iVar5;
            while (iVar1 != 0) {
                piVar2 = piVar2 + 1;
                iVar4 = iVar4 + 1;
                iVar7 = iVar4;
                iVar1 = *piVar2;
            }
            piStackX_8 = piVar3;
            fcn.00027364(piVar3,iVar7 + 1,arg3);
            iVar1 = *piVar3;
            while (iVar1 != 0) {
                iVar5 = iVar5 + 1;
                iVar1 = piVar3[iVar5];
            }
            iVar4 = iVar5;
            do {
                iVar6 = iVar4;
                iVar4 = iVar6 + -1;
            } while (piVar3[iVar4] != 0x5c);
            iVar5 = iVar5 + (-1 - iVar4);
            iVar4 = fcn.0001504c(iVar5 * 2 + 2);
            if (iVar4 != 0) {
                fcn.00027364(iVar4,iVar5 + 1,piVar3 + iVar6);
                fcn.0001470c(&piStackX_8);
                return iVar4;
            }
        }
    }
    return 0;
}


/* fcn.00018fd4 @ 0x18fd4 */

int64_t fcn.00018fd4(int64_t arg1)

{
    int64_t iVar1;
    int aiStackX_10 [2];
    int64_t aiStackX_18 [2];
    
    aiStackX_10[0] = 0;
    iVar1 = -0x7ffffffffffffffd;
    do {
        aiStackX_18[0] = fcn.0001a730(aiStackX_10,arg1);
        if (aiStackX_10[0] != -1) {
            iVar1 = fcn.000197dc(aiStackX_18[0],0,0,0);
        }
        fcn.0001470c(aiStackX_18);
    } while ((iVar1 < 0) && (aiStackX_10[0] != -1));
    return iVar1;
}


/* fcn.0001af88 @ 0x1af88 */

uint64_t fcn.0001af88(int64_t arg1)

{
    uint64_t in_RAX;
    
    if ((arg1 != 0) && (in_RAX = fcn.000283f0(arg1), -1 < in_RAX)) {
        while( true ) {
            in_RAX = CONCAT71(in_RAX >> 8,*arg1) & 0xffffffffffffff7f;
            if (in_RAX == '\x7f') break;
            if ((*arg1 == '\x03') && (*(arg1 + 1) == '\x18')) {
                return CONCAT71(in_RAX >> 8,1);
            }
            in_RAX = 0;
            arg1 = arg1 + *(arg1 + 2);
        }
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.0001b028 @ 0x1b028 */

int16_t * fcn.0001b028(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    char cVar2;
    uint8_t uVar3;
    int64_t iVar4;
    int16_t **ppiVar5;
    int16_t **ppiVar6;
    uint64_t uVar7;
    int16_t *arg1_00;
    uint8_t *puVar8;
    int16_t *arg2_00;
    uint8_t *arg2_01;
    int16_t *piVar9;
    int16_t *piVar10;
    int16_t **ppiVar11;
    uint64_t uVar12;
    bool bVar13;
    int16_t **ppiStackX_20;
    int16_t *piStack_98;
    int16_t *piStack_90;
    int16_t *piStack_88;
    int16_t **ppiStack_80;
    uint64_t uStack_78;
    uint64_t uStack_70;
    int16_t **ppiStack_68;
    int16_t *piStack_60;
    int16_t *piStack_58;
    int16_t **appiStack_50 [2];
    
    arg2_00 = *arg2;
    ppiVar11 = NULL;
    piStack_60 = NULL;
    ppiStack_68 = NULL;
    ppiVar6 = arg1;
    do {
        do {
            piVar9 = piStack_60;
            uStack_70 = 0;
            ppiStackX_20 = NULL;
            piVar10 = arg2_00;
            piStack_88 = arg2_00;
            ppiStack_80 = arg1;
            if (arg1 == 0) {
code_r0x0001b07e:
                arg2_00 = NULL;
            }
            else if ((*arg1 == '\x03') && (*(arg1 + 1) == '\x18')) {
                uStack_78 = 0;
                arg1_00 = NULL;
                ppiVar6 = 0x2;
                iVar4 = (**(*0x36d88 + 0x138))(2,0x33dd0,0,&uStack_78,&piStack_98);
                if (iVar4 < 0) goto code_r0x0001b07e;
                uVar12 = 0;
                bVar13 = arg2_00 == NULL;
                if (uStack_78 != 0) {
                    do {
                        ppiVar6 = *(piStack_98 + uVar12 * 4);
                        ppiVar5 = fcn.00015248();
                        if (ppiVar5 != NULL) {
                            ppiVar6 = ppiVar5;
                            cVar2 = fcn.0001af88(ppiVar5);
                            if (cVar2 != '\0') {
                                uVar3 = *ppiVar5;
                                while ((uVar3 & 0x7f) != 0x7f) {
                                    ppiVar6 = *(ppiVar5 + 2) + ppiVar5;
                                    if ((*ppiVar6 == '\x03') && (*(ppiVar6 + 1) == '\x18')) {
                                        uVar7 = *(ppiVar5 + 2);
                                        *(uVar7 + ppiVar5) = 0x7f;
                                        *(uVar7 + 1 + ppiVar5) = 0xff;
                                        *(uVar7 + 2 + ppiVar5) = 4;
                                        break;
                                    }
                                    ppiVar5 = ppiVar6;
                                    uVar3 = *ppiVar6;
                                }
                                ppiVar6 = *(piStack_98 + uVar12 * 4);
                                arg1_00 = fcn.0001b83c(ppiVar6,arg1);
                                piStack_58 = arg1_00;
                                if (arg1_00 != NULL) {
                                    if (bVar13) break;
                                    iVar4 = fcn.00027fcc(arg1_00,arg2_00,arg1_00[1]);
                                    bVar13 = iVar4 == 0;
                                    ppiStack_80 = fcn.0001bdf0(arg1_00);
                                    if (ppiStack_80 != NULL) {
                                        fcn.0001bcfc(ppiStack_80);
                                        fcn.0001470c(&ppiStack_80);
                                    }
                                    ppiVar6 = &piStack_58;
                                    fcn.0001470c(ppiVar6);
                                    arg1_00 = NULL;
                                }
                            }
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < uStack_78);
                    piVar9 = piStack_60;
                    piVar10 = piStack_88;
                }
                arg2_00 = arg1_00;
                if (piStack_98 != NULL) {
                    ppiVar6 = &piStack_98;
                    fcn.0001470c(ppiVar6);
                }
            }
            else {
                appiStack_50[0] = arg1;
                iVar4 = (**(*0x36d88 + 0xb8))(0x33dd0,appiStack_50);
                if ((iVar4 < 0) || ((*appiStack_50[0] & 0x7f) != 0x7f)) {
                    ppiStackX_20 = NULL;
                    ppiVar6 = 0x2;
                    iVar4 = (**(*0x36d88 + 0x138))(2,0x33dd0,0,&uStack_70,&piStack_90);
                    if (iVar4 < 0) goto code_r0x0001b07e;
                    uVar12 = 0;
                    if (uStack_70 != 0) {
                        do {
                            puVar8 = fcn.00015248(*(piStack_90 + uVar12 * 4));
                            if (puVar8 != NULL) {
                                arg2_01 = arg1;
                                if ((*puVar8 & 0x7f) != 0x7f) {
                                    do {
                                        uVar3 = *arg2_01;
                                        if ((uVar3 & 0x7f) == 0x7f) break;
                                        uVar1 = *(puVar8 + 2);
                                        iVar4 = fcn.00027fcc(puVar8,arg2_01,uVar1);
                                        if (iVar4 != 0) {
                                            if (((*puVar8 & 0x7f) != 3) || ((uVar3 & 0x7f) != 3)) goto code_r0x0001b374;
                                            if (puVar8[1] == 0x1f) {
                                                puVar8 = puVar8 + uVar1;
                                            }
                                            if (arg2_01[1] == 0x1f) {
                                                arg2_01 = arg2_01 + *(arg2_01 + 2);
                                            }
                                            uVar3 = puVar8[1];
                                            if ((((uVar3 != 0xc) || (arg2_01[1] != 0xc)) &&
                                                ((uVar3 != 0xd || (arg2_01[1] != 0xd)))) &&
                                               ((uVar3 != 0x18 || (arg2_01[1] != 0x18)))) goto code_r0x0001b374;
                                        }
                                        puVar8 = puVar8 + *(puVar8 + 2);
                                        arg2_01 = arg2_01 + *(arg2_01 + 2);
                                    } while ((*puVar8 & 0x7f) != 0x7f);
                                }
                                if (((*puVar8 & 0x7f) == 0x7f) && ((*arg2_01 & 0x7f) == 0x7f)) {
                                    ppiStackX_20 = *(piStack_90 + uVar12 * 4);
                                    break;
                                }
                            }
code_r0x0001b374:
                            uVar12 = uVar12 + 1;
                        } while (uVar12 < uStack_70);
                    }
                    ppiVar6 = NULL;
                    if (piStack_90 != NULL) {
                        ppiVar6 = &piStack_90;
                        fcn.0001470c(ppiVar6);
                    }
                    ppiVar5 = ppiStack_80;
                    piVar10 = piStack_88;
                }
                else {
                    ppiVar5 = appiStack_50[0];
                    ppiVar6 = appiStack_50[0];
                }
                if (ppiStackX_20 == NULL) goto code_r0x0001b07e;
                ppiVar6 = ppiStackX_20;
                arg2_00 = fcn.0001b83c(ppiStackX_20,ppiVar5);
            }
            if ((piVar10 != NULL) && (piVar10 != *arg2)) {
                ppiVar6 = &piStack_88;
                fcn.0001470c(ppiVar6);
            }
            if (arg2_00 == NULL) goto code_r0x0001b493;
            piStack_60 = fcn.0001b4d0(ppiVar6,arg2_00,&ppiStack_68);
            ppiVar11 = ppiStack_68;
            piStack_58 = piStack_60;
        } while (piStack_60 == NULL);
        if ((((((ppiStack_68 == NULL) || (ppiStack_68 < 0x40)) ||
              (ppiVar6 = *(piStack_60 + 0x1e), ppiStack_68 <= ppiVar6)) ||
             ((*piStack_60 != 0x5a4d || (ppiStack_68 < ppiVar6 + 0x21)))) ||
            ((*(ppiVar6 + piStack_60) != 0x4550 ||
             (((*(ppiVar6 + 3 + piStack_60) - 0x10bU & 0xfeff) != 0 || (*(ppiVar6 + 4 + piStack_60) != -0x799c)))))) ||
           (*(ppiVar6 + 0x5c + piStack_60) != 10)) {
            ppiStackX_20 = fcn.0001bdf0(arg1);
            if (ppiStackX_20 == NULL) {
                fcn.0001bcfc(0);
                fcn.0001470c(&ppiStackX_20);
            }
            ppiVar6 = &piStack_58;
            fcn.0001470c(ppiVar6);
            piStack_60 = NULL;
        }
        piVar9 = piStack_60;
    } while (piStack_60 == NULL);
code_r0x0001b493:
    if (piVar9 == NULL) {
        arg2_00 = NULL;
        ppiVar11 = NULL;
    }
    *arg2 = arg2_00;
    *arg3 = ppiVar11;
    return piVar9;
}


/* fcn.0001bdf0 @ 0x1bdf0 */

int64_t fcn.0001bdf0(int64_t arg1)

{
    int64_t iVar1;
    uint8_t *puStackX_8;
    uchar auStackX_10 [24];
    
    puStackX_8 = arg1;
    iVar1 = (**(*0x36d88 + 0xb8))(0x33dd0,&puStackX_8,auStackX_10);
    if (((iVar1 < 0) || ((*puStackX_8 & 0x7f) != 4)) || (puStackX_8[1] != 9)) {
        iVar1 = 0;
    }
    else {
        puStackX_8 = puStackX_8 + *(puStackX_8 + 2);
        iVar1 = fcn.000272ac(arg1);
        puStackX_8 = puStackX_8 + (iVar1 - arg1);
        puStackX_8[0] = 0x7f;
        puStackX_8[1] = 0xff;
        puStackX_8[2] = 4;
        puStackX_8[3] = 0;
    }
    return iVar1;
}


/* fcn.0001c040 @ 0x1c040 */

uchar fcn.0001c040(int64_t arg1)

{
    int64_t iVar1;
    uchar uVar2;
    
    uVar2 = 0;
    if ((arg1 == 0) || (iVar1 = fcn.000283f0(arg1), iVar1 < 0)) {
        uVar2 = 0;
    }
    else {
        for (; (*arg1 & 0x7f) != 0x7f; arg1 = arg1 + *(arg1 + 2)) {
            if ((*arg1 == 3) && (*(arg1 + 1) - 0xc < 2)) {
                uVar2 = 1;
                break;
            }
        }
    }
    return uVar2;
}


/* fcn.0001f994 @ 0x1f994 */

void fcn.0001f994(uint32_t arg1)

{
    uint in_register_0000000c;
    
    if ((CONCAT44(in_register_0000000c,arg1) == -0x7fffffffffffffe6) ||
       (CONCAT44(in_register_0000000c,arg1) == -0x7ffffffffffffff1)) {
        if ((*0x431a0 == 0) || (*0x43198 == 0)) {
            *0x34158 = 0x18;
            *0x34160 = 0x50;
        }
        else {
            *0x34158 = *0x431a0;
            *0x34160 = *0x43198;
        }
        fcn.00020830(arg1);
        fcn.000155e8(0,0,*0x431b8 + -1,*0x431b0);
        *0x34198 = 0xffff;
        *0x34190 = 0xffff;
    }
    return;
}


/* fcn.0001f5d8 @ 0x1f5d8 */

int64_t fcn.0001f5d8(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    uint32_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_40h;
    int64_t var_38h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h_2;
    int32_t var_24h;
    int32_t var_20h_2;
    int32_t var_1ch;
    int32_t var_18h_2;
    int32_t var_14h;
    int32_t var_10h_2;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_18h = 0;
    var_28h = 0;
    var_20h = 0;
    var_10h = 0;
    var_38h = 0;
    var_20h_2 = -0x462b3ca0;
    var_1ch = 0x4f9bbcfb;
    var_18h_2 = -0x3eac676e;
    var_14h = 0x58229836;
    var_10h_2 = -0xdd03df4;
    var_ch = 0x45eb8cf4;
    var_8h = 0x4ead068e;
    var_4h = -0x2ca246b0;
    var_30h = 0x2a534210;
    var_2ch = 0x41d89280;
    var_28h_2 = -0x25358652;
    var_24h = 0x27b1a201;
    var_40h = arg1;
    iVar2 = (**(*0x36d88 + 0xb8))(0x33e70,&var_40h,&var_18h);
    if (iVar2 < 0) {
        return iVar2;
    }
    cVar1 = fcn.0001f460(var_18h);
    if (cVar1 != '\0') {
        iVar2 = (**(*0x36d88 + 0x98))(var_18h,&var_30h,&var_20h);
        if (iVar2 < 0) {
            return iVar2;
        }
        *0x36ee8 = 1;
        iVar2 = (**var_20h)(var_20h,var_18h,0,&var_10h,0,&var_28h);
        *0x36ee8 = 0;
        if (iVar2 < 0) {
            *0x36ee8 = 0;
            return iVar2;
        }
        iVar2 = (**(*0x36d88 + 0x140))(&var_20h_2,0,&var_38h);
        if (iVar2 < 0) {
            return iVar2;
        }
        if ((var_10h != 1) || (iVar2 = (**(var_20h + 8))(var_20h,var_18h,0,0), -1 < iVar2)) {
            *0x36ee8 = 1;
            iVar2 = (**var_20h)(var_20h,var_18h,0,&var_10h,0,&var_28h);
            *0x36ee8 = 0;
            if ((-1 < iVar2) && (var_10h == 0)) {
                *0x36ee8 = 0;
                return 0;
            }
        }
    }
    return -0x7ffffffffffffffd;
}


/* fcn.0001a928 @ 0x1a928 */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_31h
//WARNING: Variable defined which should be unmapped: var_39h

ulong fcn.0001a928(uint32_t arg1)

{
    ulong uVar1;
    char cVar2;
    int16_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t arg3;
    uint in_register_0000000c;
    char *pcVar6;
    int16_t *piVar7;
    int16_t *piVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    int16_t *piVar11;
    char *pcVar12;
    char *pcVar13;
    int16_t *piVar14;
    bool bVar15;
    int64_t var_fh;
    int16_t *piStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    uint32_t var_67h;
    uint32_t var_6fh;
    int64_t var_77h;
    int64_t var_7fh;
    int64_t aiStack_b8 [3];
    char *pcStack_a0;
    uchar auStack_98 [4];
    char cStack_94;
    char cStack_93;
    char cStack_92;
    int16_t in_stack_ffffffffffffff70;
    int16_t in_stack_ffffffffffffff72;
    uint in_stack_ffffffffffffff74;
    uchar uStack_88;
    int64_t iStack_80;
    int16_t *piStack_78;
    char *pcStack_70;
    uchar auStack_68 [7];
    int64_t var_59h;
    int64_t var_51h;
    int64_t var_49h;
    uint32_t var_41h;
    int64_t var_39h;
    uint32_t var_31h;
    int8_t var_29h;
    int64_t var_21h;
    uint32_t var_19h;
    uint32_t var_11h;
    int64_t var_9h;
    int64_t var_1h;
    
    pcVar6 = CONCAT44(in_register_0000000c,arg1);
    pcVar12 = NULL;
    _auStack_68 = NULL;
    pcStack_a0 = NULL;
    piStackX_10 = NULL;
    var_fh._1_2_ = 0;
    iStackX_20 = 0;
    aiStack_b8[0] = 0;
    pcStack_70 = NULL;
    if (*pcVar6 == '\x03') {
        if (pcVar6[1] == '\x0f') {
            pcVar13 = pcVar6;
        }
        else {
            if (*pcVar6 != '\x03') {
                return 0;
            }
            if (pcVar6[1] != '\x10') {
                return 0;
            }
            _auStack_68 = pcVar6 + 10;
            pcVar13 = pcVar12;
            pcStack_70 = pcVar6;
        }
        piVar8 = _auStack_68;
        pcVar6 = pcStack_70;
        iVar4 = (**(*0x36d88 + 0x138))(2,0x33ef0,0,&pcStack_a0,&iStackX_20);
        if (-1 < iVar4) {
            if (pcStack_a0 != NULL) {
                do {
                    piVar14 = NULL;
                    iVar4 = (**(*0x36d88 + 0x98))(*(iStackX_20 + pcVar12 * 8),0x33ef0,aiStack_b8);
                    if ((-1 < iVar4) && (iVar4 = (**(aiStack_b8[0] + 0x30))(aiStack_b8[0],auStack_98), -1 < iVar4)) {
                        if (pcVar6 != NULL) {
                            iVar4 = (**(aiStack_b8[0] + 0x58))(aiStack_b8[0],&var_59h + 1,&var_fh + 1);
                            if ((-1 < iVar4) && (var_fh._1_2_ != 0)) {
                                iVar4 = (**(aiStack_b8[0] + 0x50))
                                                  (aiStack_b8[0],*stack0xffffffffffffffa0,uStack_88,&piStackX_10);
                                if (iVar4 < 0) {
                                    piStackX_10 = piVar14;
                                }
                            }
                            iVar3 = *piVar8;
                            piVar7 = piVar8;
                            piVar11 = piVar14;
                            while (iVar3 != 0) {
                                piVar7 = piVar7 + 1;
                                piVar11 = piVar11 + 1;
                                iVar3 = *piVar7;
                            }
                            if ((piVar11 != NULL) != (piStackX_10 != NULL)) goto code_r0x0001ade2;
                        }
                        if (pcVar13 == NULL) {
                            if ((*(pcVar6 + 6) == in_stack_ffffffffffffff70) &&
                               (*(pcVar6 + 8) == in_stack_ffffffffffffff72)) {
                                if (piStackX_10 == NULL) {
                                    bVar15 = true;
                                }
                                else {
                                    iVar3 = *piVar8;
                                    piVar7 = piStackX_10;
                                    while ((iVar3 != 0 && (iVar3 == *piVar7))) {
                                        piVar8 = piVar8 + 1;
                                        piVar7 = piVar7 + 1;
                                        iVar3 = *piVar8;
                                    }
                                    bVar15 = *piVar8 == *piVar7;
                                }
                                if (bVar15) goto code_r0x0001ab73;
                            }
                        }
                        else if ((((((*(pcVar13 + 4) == in_stack_ffffffffffffff70) || (*(pcVar13 + 4) == -1)) &&
                                   ((*(pcVar13 + 6) == in_stack_ffffffffffffff72 || (*(pcVar13 + 6) == -1)))) &&
                                  ((pcVar13[8] == cStack_94 || (pcVar13[8] == -1)))) &&
                                 ((pcVar13[9] == cStack_93 || (pcVar13[9] == -1)))) &&
                                ((pcVar13[10] == cStack_92 || (pcVar13[10] == -1)))) {
code_r0x0001ab73:
                            iVar4 = (**(*0x36d88 + 0x130))(*(iStackX_20 + pcVar12 * 8),&var_51h + 1,&piStack_78);
                            if (iVar4 < 0) goto code_r0x0001ade2;
                            if (piStack_78 != NULL) {
                                do {
                                    uVar9 = 0;
                                    uVar1 = *(stack0xffffffffffffffa8 + piVar14 * 8);
                                    iVar4 = fcn.00027fcc(uVar1,0x33e40,0x10);
                                    if (iVar4 == 0) {
                                        aiStack_b8[2] = 0;
                                        aiStack_b8[1] = 0;
                                        stack0xffffffffffffffb0 = 0;
                                        iVar4 = (**(*0x36d88 + 0x128))
                                                          (*(iStackX_20 + pcVar12 * 8),uVar1,&iStackX_18,
                                                           aiStack_b8 + 2);
                                        if ((-1 < iVar4) && (aiStack_b8[2] != 0)) {
                                            uVar10 = uVar9;
                                            do {
                                                iVar4 = (**(*0x36d88 + 0x98))
                                                                  (*(uVar9 + 8 + iStackX_18),0x33f70,aiStack_b8 + 1);
                                                if (iVar4 < 0) {
                                                    iVar4 = (**(*0x36d88 + 0x98))
                                                                      (*(uVar9 + 8 + iStackX_18),0x34010,
                                                                       aiStack_b8 + 1);
                                                    if (-1 < iVar4) {
                                                        (**(*0x36d88 + 0x108))(*(uVar9 + 8 + iStackX_18),0,0,1);
                                                        iVar4 = (**(*0x36d88 + 0x98))
                                                                          (*(uVar9 + 8 + iStackX_18),0x33f70,
                                                                           aiStack_b8 + 1);
                                                        if (-1 < iVar4) goto code_r0x0001acac;
                                                    }
                                                }
                                                else {
code_r0x0001acac:
                                                    iVar4 = fcn.00015248(*(uVar9 + 8 + iStackX_18));
                                                    cVar2 = fcn.0001afd8(iVar4);
                                                    if (cVar2 == '\0') {
                                                        iVar5 = fcn.0001516c(*(uVar9 + 8 + iStackX_18),0x343e0,
                                                                             CONCAT44(in_stack_ffffffffffffff74,
                                                                                      CONCAT22(in_stack_ffffffffffffff72
                                                                                               ,
                                                            in_stack_ffffffffffffff70)));
                                                        iStack_80 = iVar5;
                                                    }
                                                    else {
                                                        iVar5 = fcn.0002846c(iVar4);
                                                        iVar5 = fcn.0001504c(iVar5);
                                                        iStack_80 = iVar5;
                                                        if (iVar5 == 0) goto code_r0x0001ad98;
                                                        arg3 = fcn.0002846c(iVar4);
                                                        fcn.00033bd0(iVar5,iVar4,arg3);
                                                    }
                                                    if (iVar5 != 0) {
                                                        fcn.00028124(1,0x3090001);
                                                        iVar4 = (**(*0x36d88 + 200))
                                                                          (1,*0x36d90,iVar5,0,0,&var_49h + 1);
                                                        fcn.0001470c(&iStack_80);
                                                        if (-1 < iVar4) {
                                                            if (piStackX_10 != NULL) {
                                                                fcn.0001470c(&piStackX_10);
                                                            }
                                                            fcn.0001470c(&iStackX_20);
                                                            return *(iStackX_18 + 8 + uVar10 * 0x18);
                                                        }
                                                    }
                                                }
code_r0x0001ad98:
                                                uVar10 = uVar10 + 1;
                                                uVar9 = uVar9 + 0x18;
                                            } while (uVar10 < aiStack_b8[2]);
                                            if (aiStack_b8[2] != 0) {
                                                fcn.0001470c(&iStackX_18);
                                            }
                                        }
                                    }
                                    piVar14 = piVar14 + 1;
                                    pcVar6 = pcStack_70;
                                } while (piVar14 < piStack_78);
                            }
                        }
                        if (piStackX_10 != NULL) {
                            fcn.0001470c(&piStackX_10);
                        }
                    }
code_r0x0001ade2:
                    pcVar12 = pcVar12 + 1;
                    if (pcStack_a0 <= pcVar12) break;
                    piVar8 = _auStack_68;
                } while( true );
            }
            fcn.0001470c(&iStackX_20);
        }
    }
    return 0;
}


/* fcn.0001afd8 @ 0x1afd8 */

uint64_t fcn.0001afd8(int64_t arg1)

{
    uint64_t in_RAX;
    
    if ((arg1 != 0) && (in_RAX = fcn.000283f0(arg1), -1 < in_RAX)) {
        while( true ) {
            in_RAX = CONCAT71(in_RAX >> 8,*arg1) & 0xffffffffffffff7f;
            if (in_RAX == '\x7f') break;
            if ((*arg1 == '\x04') && (*(arg1 + 1) == '\x04')) {
                return CONCAT71(in_RAX >> 8,1);
            }
            in_RAX = 0;
            arg1 = arg1 + *(arg1 + 2);
        }
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.0001516c @ 0x1516c */

//WARNING: Variable defined which should be unmapped: var_4h

ushort * fcn.0001516c(int64_t arg1,uint32_t arg2,int64_t arg_8h)

{
    int16_t iVar1;
    ushort *puVar2;
    ushort *arg2_00;
    int64_t iVar3;
    uint in_register_00000014;
    int16_t *piVar4;
    int32_t var_4h;
    
    piVar4 = CONCAT44(in_register_00000014,arg2);
    iVar1 = *piVar4;
    puVar2 = NULL;
    while (iVar1 != 0) {
        puVar2 = puVar2 + 1;
        iVar1 = piVar4[puVar2];
    }
    iVar3 = puVar2 * 2;
    arg2_00 = fcn.0001504c(iVar3 + 10);
    puVar2 = NULL;
    if (arg2_00 != NULL) {
        *arg2_00 = 0x404;
        *(arg2_00 + 1) = iVar3 + 2 + '\x04';
        *(arg2_00 + 3) = iVar3 + 6 >> 8;
        (**(*0x36d88 + 0x160))(arg2_00 + 2,piVar4,iVar3 + 2);
        *(arg2_00[1] + arg2_00) = 0x4ff7f;
        puVar2 = arg2_00;
        if (arg1 != 0) {
            iVar3 = fcn.00015248(arg1);
            puVar2 = fcn.000150cc(iVar3,arg2_00);
            (**(*0x36d88 + 0x48))(arg2_00);
        }
    }
    return puVar2;
}


/* fcn.00026394 @ 0x26394 */

//WARNING: Removing unreachable block (ram,0x0002642a)

ulong fcn.00026394(ulong noname_0,int64_t arg1,ulong noname_2,int64_t arg2)

{
    ulong uVar1;
    uchar *in_stack_00000030;
    uchar auStack_204 [508];
    
    uVar1 = 8;
    if ((in_stack_00000030 != NULL) && (auStack_204 != in_stack_00000030)) {
        section..text(auStack_204,in_stack_00000030,8);
    }
    uVar1 = fcn.000262e4(0x80000002,arg1 & 0xffffffff,uVar1,0x34040);
    return uVar1;
}


/* fcn.0001bcfc @ 0x1bcfc */

//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

void fcn.0001bcfc(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint8_t *puStackX_8;
    uchar auStackX_10 [8];
    int64_t var_20h;
    int64_t var_28h;
    uint uStack_28;
    uint uStack_24;
    uint uStack_20;
    uint uStack_1c;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    if (arg1 != 0) {
        uStack_28 = 0xab38a0df;
        uStack_24 = 0x44a96873;
        uStack_20 = 0xebd4e687;
        uStack_1c = 0x49841456;
        if ((*0x36ed8 != 0) || (iVar1 = (**(*0x36d88 + 0x140))(&uStack_28,0,0x36ed8), -1 < iVar1)) {
            iVar4 = 0;
            puStackX_8 = arg1;
            iVar1 = (**(*0x36d88 + 0xb8))(0x33dd0,&puStackX_8,auStackX_10);
            if ((iVar1 < 0) || (((*puStackX_8 & 0x7f) != 4 || (puStackX_8[1] != 9)))) {
                iVar1 = 0;
            }
            else {
                iVar1 = *(puStackX_8 + 4);
                uVar2 = (*(puStackX_8 + 0xc) - iVar1) + 1;
                iVar4 = ((uVar2 & 0xfff) != 0) + (uVar2 >> 0xc);
            }
            iVar3 = (**(*0x36ed8 + 8))(arg1);
            if ((-1 < iVar3) && (iVar1 != 0)) {
                (**(*0x36d88 + 0x30))(iVar1,iVar4);
            }
        }
    }
    return;
}


/* fcn.000284c0 @ 0x284c0 */

int64_t fcn.000284c0(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t arg1_01;
    
    if (arg2 == 0) {
        if (arg1 == 0) {
            arg1 = 0x34c38;
        }
        arg1_00 = fcn.00028598(arg1);
    }
    else {
        if (arg1 == 0) {
            iVar1 = 0;
        }
        else {
            iVar1 = fcn.0002846c(arg1);
            iVar1 = iVar1 + -4;
        }
        arg1_00 = fcn.000150a0(*(arg2 + 2) + 4 + *(arg2 + 3) * 0x100 + iVar1);
        arg1_01 = arg1_00;
        if (iVar1 != 0) {
            fcn.00033bd0(arg1_00,arg1,iVar1);
            arg1_01 = arg1_00 + iVar1;
        }
        fcn.00033bd0(arg1_01,arg2,*(arg2 + 2));
        *(*(arg2 + 2) + *(arg2 + 3) * 0x100 + arg1_01) = *0x34c38;
    }
    return arg1_00;
}


/* fcn.000283f0 @ 0x283f0 */

ulong fcn.000283f0(int64_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    
    uVar2 = 0;
    if (arg1 != 0) {
        while( true ) {
            if ((*arg1 == '\x7f') && (*(arg1 + 1) == -1)) {
                return 0;
            }
            uVar1 = *(arg1 + 3) * 0x100 + *(arg1 + 2);
            if (uVar1 < 4) break;
            uVar2 = uVar2 + uVar1;
            uVar1 = 0;
            do {
                if (*arg1 == *(uVar1 + 0x3695c)) break;
                uVar1 = uVar1 + 1;
            } while (uVar1 < 6);
            if (uVar1 == 6) {
                return 0x8000000000000002;
            }
            if (0x10000 < uVar2) {
                return 0x8000000000000002;
            }
            arg1 = arg1 + *(arg1 + 3) * 0x100 + *(arg1 + 2);
        }
    }
    return 0x8000000000000002;
}


/* fcn.0001b83c @ 0x1b83c */

int64_t fcn.0001b83c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t arg1_00;
    int64_t iVar2;
    ulong *noname_0;
    uint64_t uStackX_8;
    ulong *puStackX_18;
    ulong uStackX_20;
    
    iVar2 = 0;
    uStackX_8 = 0;
    uStackX_20 = 0;
    if ((arg1 != 0) && (iVar1 = (**(*0x36d88 + 0x98))(arg1,0x33dd0,&puStackX_18), -1 < iVar1)) {
        noname_0 = puStackX_18;
        iVar1 = (**puStackX_18)(puStackX_18,arg2,1,&uStackX_8,0);
        if (iVar1 == 6) {
            iVar2 = fcn.000274dc(noname_0,((uStackX_8 & 0xfff) != 0) + (uStackX_8 >> 0xc));
            if (iVar2 != 0) {
                iVar1 = (**puStackX_18)(puStackX_18,arg2,1,&uStackX_8,iVar2);
                if (-1 < iVar1) {
                    iVar2 = fcn.0001b9a4(arg1,&uStackX_20);
                    if (iVar2 != 0) {
                        return iVar2;
                    }
                    iVar2 = fcn.00015248(uStackX_20);
                    fcn.0001bcfc(iVar2);
                    return 0;
                }
                (**(*0x36d88 + 0x30))(iVar2,(uStackX_8 >> 0xc) + ((uStackX_8 & 0xfff) != 0));
            }
        }
        else if (iVar1 == -0x7ffffffffffffffb) {
            iVar1 = fcn.00015248(arg1);
            if (iVar1 != 0) {
                arg1_00 = fcn.0002846c(iVar1);
                iVar2 = fcn.0001504c(arg1_00);
                if (iVar2 != 0) {
                    fcn.00033bd0(iVar2,iVar1,arg1_00);
                }
            }
            return iVar2;
        }
    }
    return 0;
}


/* fcn.0001b4d0 @ 0x1b4d0 */

//WARNING: Variable defined which should be unmapped: var_fh
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_1fh
//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h

int64_t fcn.0001b4d0(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint8_t *puVar1;
    int64_t iVar2;
    uint8_t *puVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    bool bVar7;
    int64_t var_fh;
    int64_t var_17h;
    int64_t var_1fh;
    int64_t var_27h;
    int64_t var_6fh;
    int64_t var_7fh;
    int64_t iStack_88;
    uint uStack_80;
    uint uStack_7c;
    uint uStack_78;
    uint uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    ulong *puStack_50;
    int64_t iStack_48;
    uint8_t *puStack_40;
    uchar auStack_38 [7];
    int64_t var_29h;
    int32_t var_21h;
    int32_t var_1dh;
    int32_t var_19h;
    int32_t var_15h;
    int64_t var_11h;
    int64_t var_9h;
    int64_t var_1h;
    
    iVar5 = 0;
    uStack_80 = 0x9576e92;
    iStack_88 = 0;
    iStack_70 = 0;
    uStack_7c = 0x11d26d3f;
    uStack_78 = 0xa000398e;
    uStack_74 = 0x3b7269c9;
    if (arg1 == 0) {
        return 0;
    }
    puVar1 = fcn.000272ac(arg1);
    unique0x10000317 = puVar1;
    _auStack_38 = puVar1;
    iVar2 = (**(*0x36d88 + 0xb8))(0x33f70,&var_17h + 1,&uStack_60);
    iVar6 = iVar5;
    if (((-1 < iVar2) && (iVar2 = (**(*0x36d88 + 0x98))(uStack_60,0x33f70,&iStack_48), -1 < iVar2)) &&
       (iVar2 = (**(iStack_48 + 8))(iStack_48,&var_27h + 1), -1 < iVar2)) {
        puVar3 = fcn.000272ac(stack0x00000010);
        puStack_40 = puVar3;
        if (puVar3 == NULL) {
            (**(stack0x00000020 + 0x10))(stack0x00000020);
            iVar2 = -0x7ffffffffffffff7;
        }
        unique0x100002c7 = puVar3;
        if (-1 < iVar2) {
            do {
                iVar4 = stack0x00000020;
                if (((**0x10 & 0x7f) == 0x7f) && ((*0x10)[1] == 0xff)) break;
                if (((**0x10 & 0x7f) != 4) || ((*0x10)[1] != 4)) {
                    iVar2 = -0x7ffffffffffffffd;
                    break;
                }
                stack0x00000020 = 0;
                iVar2 = (**(iVar4 + 8))(iVar4,&var_27h + 1,*0x10 + 4,1,0);
                (**(iVar4 + 0x10))(iVar4);
                *0x10 = stack0x00000010 + *(stack0x00000010 + 2);
            } while (-1 < iVar2);
            if (-1 < iVar2) {
                iVar4 = 0;
                iStack_68 = 0;
                iStack_58 = 0;
                iVar2 = (**(stack0x00000020 + 0x40))(stack0x00000020,&uStack_80,&iStack_68,0);
                if (iVar2 == -0x7ffffffffffffffb) {
                    iVar4 = fcn.000150a0(iStack_68);
                    iStack_58 = iVar4;
                    if (iVar4 == 0) {
                        iVar2 = -0x7ffffffffffffff7;
                        goto code_r0x0001b71a;
                    }
                    iVar2 = (**(stack0x00000020 + 0x40))(stack0x00000020,&uStack_80,&iStack_68,iVar4);
                }
                if (-1 < iVar2) {
                    iVar6 = 0;
                    if (iVar4 == 0) goto code_r0x0001b71a;
                    if ((*(iVar4 + 0x48) & 0x10) == 0) {
                        iVar5 = fcn.000150a0(*(iVar4 + 8));
                        iStack_70 = iVar5;
                        if (iVar5 == 0) {
                            iVar2 = -0x7ffffffffffffff7;
                        }
                        else {
                            iStack_88 = *(iVar4 + 8);
                            iVar2 = (**(stack0x00000020 + 0x20))(stack0x00000020,&iStack_88,iVar5);
                        }
                    }
                }
                iVar6 = iVar5;
                if (iVar4 != 0) {
                    fcn.0001470c(&iStack_58);
                }
            }
        }
code_r0x0001b71a:
        if (stack0x00000020 != 0) {
            (**(stack0x00000020 + 0x10))(stack0x00000020);
        }
        if (puVar3 != NULL) {
            fcn.0001470c(&puStack_40);
        }
        if (iVar2 < 0) goto code_r0x0001b74a;
code_r0x0001b7f0:
        *arg2 = iStack_88;
        goto code_r0x0001b80f;
    }
code_r0x0001b74a:
    unique0x1000031f = puVar1;
    iVar5 = (**(*0x36d88 + 0xb8))(0x33dd0,&var_17h + 1,&uStack_60);
    if ((iVar5 < 0) || (iVar5 = (**(*0x36d88 + 0x98))(uStack_60,0x33dd0,&puStack_50), iVar5 < 0)) {
code_r0x0001b7fa:
        bVar7 = iVar6 != 0;
        iVar6 = 0;
        if (bVar7) {
            fcn.0001470c(&iStack_70);
            iVar6 = 0;
        }
    }
    else {
        iVar6 = 0;
        iStack_88 = 0;
        iStack_70 = 0;
        iVar5 = (**puStack_50)(puStack_50,stack0x00000010,1,&iStack_88,0);
        if (iVar5 != -0x7ffffffffffffffb) {
code_r0x0001b7eb:
            if (-1 < iVar5) goto code_r0x0001b7f0;
            goto code_r0x0001b7fa;
        }
        iVar6 = fcn.0001504c(iStack_88);
        iStack_70 = iVar6;
        if (iVar6 != 0) {
            iVar5 = (**puStack_50)(puStack_50,stack0x00000010,1,&iStack_88,iVar6);
            goto code_r0x0001b7eb;
        }
    }
    *arg2 = 0;
code_r0x0001b80f:
    if (puVar1 != NULL) {
        fcn.0001470c(auStack_38);
    }
    return iVar6;
}


/* fcn.000272ac @ 0x272ac */

void fcn.000272ac(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0002725c(arg1);
    if (arg1_00 != 0) {
        fcn.00027698(4,arg1_00,arg1);
    }
    return;
}


/* fcn.0002725c @ 0x2725c */

char * fcn.0002725c(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.00027200(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.000274dc @ 0x274dc */

ulong fcn.000274dc(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    if (arg1 == 0) {
        auStackX_10[0] = 0;
    }
    else {
        iVar1 = (**(*0x36d88 + 0x28))(0,0,arg1,auStackX_10);
        if (iVar1 < 0) {
            auStackX_10[0] = 0;
        }
    }
    return auStackX_10[0];
}


/* fcn.0001b9a4 @ 0x1b9a4 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.0001b9a4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t arg1_00;
    ulong uVar2;
    uint8_t *******arg2_00;
    uint64_t uVar3;
    uint64_t uStackX_18;
    uint8_t *******pppppppuStackX_20;
    uint32_t var_30h;
    int64_t var_38h;
    int64_t iStack_28;
    uint64_t uStack_20;
    uint32_t var_bp_10h;
    uint32_t var_bp_8h;
    
    arg1_00 = 0;
    uStack_20 = 0;
    uStackX_18 = 0;
    arg2_00 = 0x34010;
    pppppppuStackX_20 = NULL;
    iVar1 = (**(*0x36d88 + 0x138))(2,0x34010,0,&uStack_20,&iStack_28);
    if (-1 < iVar1) {
        uVar3 = arg1_00;
        if (uStack_20 != 0) {
            do {
                pppppppuStackX_20 = fcn.00015248(*(iStack_28 + uVar3 * 8));
                arg2_00 = &pppppppuStackX_20;
                iVar1 = (**(*0x36d88 + 0xb8))(0x33dd0,arg2_00,&uStackX_18);
                if ((((-1 < iVar1) && (uStackX_18 == arg1)) && ((*pppppppuStackX_20 & 0x7f) == 4)) &&
                   (*(pppppppuStackX_20 + 1) == 9)) {
                    uStackX_18 = *(iStack_28 + uVar3 * 8);
                    break;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < uStack_20);
        }
        if (iStack_28 != 0) {
            fcn.0001470c(&iStack_28);
        }
        if (uVar3 == uStack_20) {
            uStackX_18 = arg1_00;
        }
        *arg2 = uStackX_18;
        if (uStackX_18 != 0) {
            pppppppuStackX_20 = fcn.00015248();
            if (pppppppuStackX_20 != NULL) {
                iVar1 = fcn.0002846c(pppppppuStackX_20);
                arg1_00 = fcn.0001504c(iVar1);
                if (arg1_00 != 0) {
                    arg2_00 = pppppppuStackX_20;
                    fcn.00033bd0(arg1_00,pppppppuStackX_20,iVar1);
                }
            }
            uVar2 = fcn.0001baec(arg1_00,arg2_00);
            return uVar2;
        }
    }
    return 0;
}


/* fcn.0001baec @ 0x1baec */

//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.0001baec(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint8_t *arg1_00;
    int64_t iVar2;
    int64_t unaff_RDI;
    uint64_t uVar3;
    bool bVar4;
    int64_t iStackX_8;
    uint8_t *puStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t var_38h;
    uint32_t var_48h;
    int64_t var_50h;
    uint64_t uStack_48;
    int64_t aiStack_40 [2];
    uint32_t var_18h;
    int64_t var_bp_10h;
    
    puStackX_10 = arg1;
    iVar1 = (**(*0x36d88 + 0xb8))(0x33f70,&puStackX_10,&iStackX_8);
    if (iVar1 < 0) {
        iVar1 = (**(*0x36d88 + 0xb8))(0x34010,&puStackX_10,&iStackX_8);
        if (-1 < iVar1) {
            (**(*0x36d88 + 0x108))(iStackX_8,0,0,1);
            iVar1 = (**(*0x36d88 + 0x98))(iStackX_8,0x34010,&iStackX_20);
            if (-1 < iVar1) {
                aiStack_40[0] = fcn.000150a0(*(*(iStackX_20 + 8) + 0xc));
                if (aiStack_40[0] != 0) {
                    (**(iStackX_20 + 0x18))(iStackX_20,**(iStackX_20 + 8),0,(*(iStackX_20 + 8))[3],aiStack_40[0]);
                    fcn.0001470c(aiStack_40);
                }
                puStackX_10 = NULL;
                iVar1 = fcn.0002725c(arg1);
                (**(*0x36d88 + 0x138))(2,0x33f70,0,&uStack_48,&iStackX_18);
                uVar3 = 0;
                bVar4 = true;
                if (uStack_48 == 0) {
                    arg1_00 = puStackX_10;
                }
                else {
                    do {
                        arg1_00 = fcn.00015248(*(iStackX_18 + uVar3 * 8));
                        puStackX_10 = arg1_00;
                        iVar2 = fcn.0002725c(arg1_00);
                        if ((iVar1 - 4U <= iVar2 - 4U) && (iVar2 = fcn.00027fcc(arg1_00,arg1,iVar1 - 4U), iVar2 == 0)
                           ) {
                            puStackX_10 = fcn.0001516c(*(iStackX_18 + uVar3 * 8),0x356c0,unaff_RDI);
                            arg1_00 = puStackX_10;
                            if (bVar4) break;
                            iVar2 = fcn.00027fcc(puStackX_10,arg1,*(puStackX_10 + 2));
                            bVar4 = iVar2 == 0;
                            fcn.0001470c(&puStackX_10);
                            arg1_00 = NULL;
                            puStackX_10 = NULL;
                        }
                        uVar3 = uVar3 + 1;
                    } while (uVar3 < uStack_48);
                }
                if (iStackX_18 != 0) {
                    fcn.0001470c(&iStackX_18);
                    arg1_00 = puStackX_10;
                }
                return arg1_00;
            }
        }
    }
    else if (((*puStackX_10 & 0x7f) == 0x7f) && (puStackX_10[1] == 0xff)) {
        iVar1 = fcn.0001516c(iStackX_8,0x356c0,unaff_RDI);
        return iVar1;
    }
    return 0;
}


/* fcn.0002e694 @ 0x2e694 */

ulong fcn.0002e694(uint32_t arg1,ulong noname_1,uint32_t arg2,uint32_t arg3)

{
    uint8_t *puVar1;
    int16_t iVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint in_register_0000000c;
    char *pcVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint8_t *puVar10;
    uint in_R8;
    int64_t *piVar11;
    uint8_t *puVar12;
    uint8_t *puVar13;
    uint in_R9;
    uint64_t *puVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t *in_stack_00000028;
    uint64_t *in_stack_00000030;
    
    puVar14 = CONCAT44(in_R9,arg3);
    piVar11 = CONCAT44(in_R8,arg2);
    pcVar7 = CONCAT44(in_register_0000000c,arg1);
    if (((*pcVar7 == 'B') && (pcVar7[1] == 'M')) && (*(pcVar7 + 0x1e) == 0)) {
        puVar10 = pcVar7 + *(pcVar7 + 10);
        if (*(pcVar7 + 0x16) * *(pcVar7 + 0x12) < 0x40000000) {
            uVar4 = *(pcVar7 + 0x16) * *(pcVar7 + 0x12) * 4;
            if (*piVar11 == 0) {
                *puVar14 = uVar4;
                iVar5 = fcn.000150a0(uVar4);
                *piVar11 = iVar5;
                if (iVar5 == 0) {
                    return 0x8000000000000009;
                }
            }
            else if (*puVar14 < uVar4) {
                *puVar14 = uVar4;
                return 0x8000000000000005;
            }
            uVar17 = 0;
            uVar9 = *(pcVar7 + 0x12);
            uVar6 = *(pcVar7 + 0x16);
            uVar4 = uVar6;
            uVar16 = *(pcVar7 + 0x12);
            iVar5 = *piVar11;
            *in_stack_00000030 = uVar9;
            *in_stack_00000028 = uVar4;
            if (uVar6 != 0) {
                do {
                    uVar15 = 0;
                    puVar13 = iVar5 + ((uVar4 - uVar17) + -1) * uVar16 * 4;
                    if (uVar9 != 0) {
                        do {
                            iVar2 = *(pcVar7 + 0x1c);
                            if (iVar2 == 1) {
                                iVar8 = 8;
                                do {
                                    iVar8 = iVar8 + -1;
                                    if ((*puVar10 & 1 << (iVar8 & 0x1f)) == 0) {
                                        puVar13[2] = pcVar7[0x38];
                                        puVar13[1] = pcVar7[0x37];
                                        uVar3 = pcVar7[0x36];
                                    }
                                    else {
                                        puVar13[2] = pcVar7[0x3c];
                                        puVar13[1] = pcVar7[0x3b];
                                        uVar3 = pcVar7[0x3a];
                                    }
                                    *puVar13 = uVar3;
                                    if (uVar15 < *(pcVar7 + 0x12)) {
                                        puVar13 = puVar13 + 4;
                                        uVar15 = uVar15 + 1;
                                    }
                                } while (iVar8 != 0);
                                puVar12 = puVar13 + -4;
                                uVar15 = uVar15 - 1;
                            }
                            else {
                                puVar12 = puVar13;
                                if (iVar2 == 4) {
                                    uVar4 = *puVar10 >> 4;
                                    puVar13[2] = pcVar7[uVar4 * 4 + 0x38];
                                    puVar13[1] = pcVar7[uVar4 * 4 + 0x37];
                                    *puVar13 = pcVar7[uVar4 * 4 + 0x36];
                                    if (uVar15 < *(pcVar7 + 0x12) - 1) {
                                        puVar12 = puVar13 + 4;
                                        uVar15 = uVar15 + 1;
                                        uVar4 = *puVar10 & 0xf;
                                        puVar13[6] = pcVar7[uVar4 * 4 + 0x38];
                                        puVar13[5] = pcVar7[uVar4 * 4 + 0x37];
                                        *puVar12 = pcVar7[uVar4 * 4 + 0x36];
                                    }
                                }
                                else if (iVar2 == 8) {
                                    puVar13[2] = pcVar7[*puVar10 * 4 + 0x38];
                                    puVar13[1] = pcVar7[*puVar10 * 4 + 0x37];
                                    *puVar13 = pcVar7[*puVar10 * 4 + 0x36];
                                }
                                else if (iVar2 == 0x18) {
                                    *puVar13 = *puVar10;
                                    puVar1 = puVar10 + 1;
                                    puVar10 = puVar10 + 2;
                                    puVar13[1] = *puVar1;
                                    puVar13[2] = *puVar10;
                                }
                                else {
                                    if (iVar2 != 0x20) {
                                        return 0x8000000000000003;
                                    }
                                    if (*(pcVar7 + 0x1e) != 0) {
                                        return 0x8000000000000003;
                                    }
                                    *puVar13 = *puVar10;
                                    puVar13[1] = puVar10[1];
                                    puVar1 = puVar10 + 2;
                                    puVar10 = puVar10 + 3;
                                    puVar13[2] = *puVar1;
                                }
                            }
                            uVar9 = *(pcVar7 + 0x12);
                            uVar15 = uVar15 + 1;
                            puVar10 = puVar10 + 1;
                            puVar13 = puVar12 + 4;
                            uVar16 = *(pcVar7 + 0x12);
                        } while (uVar15 < uVar9);
                    }
                    uVar6 = puVar10 - *(pcVar7 + 10) & 3;
                    if (uVar6 != 0) {
                        puVar10 = puVar10 + (4 - uVar6);
                    }
                    uVar4 = *(pcVar7 + 0x16);
                    uVar17 = uVar17 + 1;
                } while (uVar17 < uVar4);
            }
            return 0;
        }
    }
    return 0x8000000000000003;
}


/* fcn.00029d2c @ 0x29d2c */

//WARNING: Removing unreachable block (ram,0x00029e33)

ulong fcn.00029d2c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    ulong uVar2;
    int64_t arg2_00;
    
    arg2_00 = arg2;
    iVar1 = fcn.00029c98(arg1);
    if (iVar1 == 1) {
        uVar2 = fcn.00029a70(arg1,arg2 & 0xffffffff,arg3,arg4);
    }
    else if (iVar1 == 2) {
        uVar2 = fcn.0002bedc(arg1,arg2_00,arg3,arg4);
    }
    else {
        if (iVar1 == 3) {
            return 0x8000000000000003;
        }
        if (iVar1 != 4) {
            return 0x8000000000000003;
        }
        uVar2 = fcn.00020c38(arg1,arg2_00,arg3,arg4);
    }
    return uVar2;
}


/* fcn.00028044 @ 0x28044 */

ulong fcn.00028044(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar3 = *(arg1 + 0x68);
    iVar2 = *(arg1 + 0x70);
    while( true ) {
        if (iVar3 == 0) {
            return 0;
        }
        iVar1 = fcn.00027fcc(iVar2,arg2,0x10);
        if (iVar1 == 0) break;
        iVar2 = iVar2 + 0x18;
        iVar3 = iVar3 + -1;
    }
    return *(iVar2 + 0x10);
}


/* fcn.00029e5c @ 0x29e5c */

int64_t fcn.00029e5c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    char cVar2;
    int64_t in_RAX;
    int64_t iVar3;
    char *pcVar4;
    ulong *apuStackX_8 [4];
    int64_t iStack_18;
    uint uStack_10;
    uint uStack_c;
    
    if (*0x3fa98 != 0) {
        *(*0x42348 + 0x10) = arg2;
        *(*0x42348 + 0x18) = arg3;
        *(*0x42348 + 0x38) = arg1;
        iStack_18 = *0x42348 + 0x28;
        iVar3 = (**(*0x36d88 + 0x50))(0x80000200,0x10,0x29898);
        if ((*0x36e59 == '\x01') && (-1 < iVar3)) {
            if (*0x43190 != 0) {
                fcn.0001470c(0x43190);
            }
            *0x36ef2 = 0;
            for (; *0x42350 != NULL; *0x42350 = (*0x42350)[1]) {
                (**(*0x36d88 + 0x70))(*(**0x42350 + 0x28));
                fcn.0001470c(**0x42350 + 0x30);
                fcn.0001470c(**0x42350 + 0x48);
            }
            fcn.000114c0();
            pcVar1 = *0x36ec0;
            apuStackX_8[0] = NULL;
            iVar3 = 0x46a6;
            iStack_18 = 0x46a66107ffe06bdd;
            uStack_10 = 0x9c5ab27b;
            uStack_c = 0x5c27c57e;
            if (*0x36ec0 != NULL) {
                if ((*0x36ec0)[0x26] != 0) {
                    iVar3 = 0x38;
                    (*0x36ec0)[0x26] = (*0x36ec0)[0x26] & 0xfe;
                    cVar2 = '\0';
                    pcVar1[9] = '\0';
                    pcVar4 = *0x36ec0;
                    do {
                        cVar2 = cVar2 + *pcVar4;
                        pcVar4 = pcVar4 + 1;
                        iVar3 = iVar3 + -1;
                    } while (iVar3 != 0);
                    pcVar1[9] = -cVar2;
                }
                iVar3 = (**(*0x36d88 + 0x140))(&iStack_18,0,apuStackX_8);
                if (iVar3 == 0) {
                    iVar3 = (*apuStackX_8[0][1])(apuStackX_8[0],*0x36ec8);
                    if (iVar3 == 0) {
                        *0x36ec8 = 0;
                        iVar3 = (**apuStackX_8[0])(apuStackX_8[0],*0x36ec0,0x38,0x36ec8);
                    }
                }
            }
            return iVar3;
        }
        in_RAX = (**(*0x36d88 + 0x58))(*(*0x42348 + 0x28),2,*0x3fa98 * 10000);
        if (in_RAX < 0) {
            in_RAX = fcn.0001e488(*0x42348 + 0x28);
        }
    }
    return in_RAX;
}


/* fcn.0001ce18 @ 0x1ce18 */

void fcn.0001ce18(uint32_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint in_register_0000000c;
    uint in_register_00000014;
    char in_stack_00000028;
    
    uVar2 = *0x36f10;
    uVar1 = *0x36f08;
    if (in_stack_00000028 != '\0') {
        uVar1 = *CONCAT44(in_register_0000000c,arg1);
        uVar2 = *CONCAT44(in_register_00000014,arg2);
        if (*0x36ef6 == '\x01') {
            *0x36f10 = uVar1 + *arg3;
            *0x36f18 = *arg4 + uVar2;
            *0x36ef8 = uVar2;
            *0x36f08 = uVar1;
        }
        else {
            if (uVar1 < *0x36f08) {
                *0x36f08 = uVar1;
            }
            if (uVar2 < *0x36ef8) {
                *0x36ef8 = uVar2;
            }
            if (*0x36f10 < uVar1 + *arg3) {
                *0x36f10 = uVar1 + *arg3;
            }
            if (*0x36f18 < *arg4 + uVar2) {
                *0x36f18 = *arg4 + uVar2;
            }
        }
        *0x36ef6 = *0x36ef6 + '\x01';
        return;
    }
    *CONCAT44(in_register_0000000c,arg1) = *0x36f08;
    uVar3 = *0x36ef8;
    *CONCAT44(in_register_00000014,arg2) = *0x36ef8;
    *arg3 = uVar2 - uVar1;
    *arg4 = *0x36f18 - uVar3;
    return;
}


/* fcn.0001cef4 @ 0x1cef4 */

ulong fcn.0001cef4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t aiStackX_18 [2];
    
    aiStackX_18[1] = 0;
    uVar2 = 0;
    aiStackX_18[0] = 0;
    if (*(*0x36e60)[3] != 0) {
        do {
            iVar1 = (***0x36e60)(*0x36e60,uVar2,aiStackX_18 + 1,aiStackX_18);
            if ((((-1 < iVar1) && (arg1 == *(aiStackX_18[0] + 4))) && (arg2 == *(aiStackX_18[0] + 8))) &&
               ((*((*0x36e60)[3] + 4) == uVar2 || (iVar1 = (*(*0x36e60)[1])(*0x36e60,uVar2), -1 < iVar1)))) {
                return 0;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(*0x36e60)[3]);
    }
    return 0x800000000000000e;
}


/* fcn.0001d358 @ 0x1d358 */

uchar fcn.0001d358(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uchar uVar5;
    uint8_t *puStackX_8;
    uint32_t auStackX_20 [2];
    int64_t iStack_48;
    uchar auStack_40 [24];
    
    uVar5 = 0;
    auStackX_20[0] = 0;
    auStackX_20[1] = 0;
    fcn.0001c360(auStack_40,0x12,0x34410,*arg1);
    iVar1 = fcn.000113fc(auStack_40,0x33ce0,0,auStackX_20);
    if (iVar1 == 0) {
        return 0;
    }
    iStack_48 = iVar1;
    uVar2 = fcn.0002846c(*(arg1 + 0x10));
    if (uVar2 != *(iVar1 + 4)) {
        iVar1 = fcn.0002846c(*(arg1 + 0x10));
        iVar1 = iVar1 + *(arg1 + 0x10);
        iVar3 = (**(*0x36d88 + 0x98))(arg3,0x33e70,&puStackX_8);
        if (-1 < iVar3) {
            if (iVar1 == 0) {
                if (puStackX_8 != NULL) goto code_r0x0001d40e;
            }
            else {
                if (puStackX_8 == NULL) {
code_r0x0001d40e:
                    iVar1 = -1;
code_r0x0001d412:
                    if (iVar1 == 0) goto code_r0x0001d429;
                }
                else {
                    iVar3 = fcn.0002846c(iVar1);
                    iVar4 = fcn.0002846c(puStackX_8);
                    if (iVar4 == iVar3) {
                        iVar1 = fcn.00027fcc(iVar1,puStackX_8,iVar3);
                        goto code_r0x0001d412;
                    }
                }
                if ((*arg2 != *puStackX_8) && (*(*(arg1 + 0x10) + 4) != *puStackX_8)) goto code_r0x0001d42b;
            }
        }
    }
code_r0x0001d429:
    uVar5 = 1;
code_r0x0001d42b:
    fcn.0001470c(&iStack_48);
    return uVar5;
}


/* fcn.0001e04c @ 0x1e04c */

//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

bool fcn.0001e04c(int64_t arg1)

{
    uint32_t arg3;
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    uint32_t var_bp_20h;
    int64_t var_28h;
    int64_t var_30h;
    uint uStack_28;
    uint uStack_24;
    uint uStack_20;
    uint uStack_1c;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    uStackX_8 = 0;
    iStackX_10 = 0;
    uStack_28 = 0xb4909cf3;
    uStack_24 = 0x47517b93;
    uStack_20 = 0xa85bd89b;
    uStack_1c = 0xb29b0b22;
    if ((*(arg1 + 0x3d) == 0) || (iVar1 = (**(*0x36d88 + 0x98))(*(arg1 + 0x3d),0x33e70), iVar1 < 0)) {
        return true;
    }
    iVar1 = fcn.000113fc(0x35780,&uStack_28,0,&uStackX_8);
    if (iVar1 == 0) {
        return false;
    }
    uVar5 = 0;
    iVar4 = iVar1;
    _var_bp_20h = iVar1;
    if (uStackX_8 != 0) {
        do {
            iVar2 = fcn.0002846c(iVar4);
            iVar3 = fcn.0002846c(iStackX_10);
            if (iVar2 == iVar3) {
                arg3 = fcn.0002846c(iVar4);
                iVar2 = fcn.00027fcc(iVar4,iStackX_10,arg3);
                if (iVar2 == 0) break;
            }
            iVar4 = fcn.0002846c(iVar4);
            uVar5 = uVar5 + iVar4;
            iVar4 = uVar5 + iVar1;
        } while (uVar5 < uStackX_8);
    }
    fcn.0001470c(&var_bp_20h);
    return uVar5 < uStackX_8;
}


/* fcn.0001fe1c @ 0x1fe1c */

void fcn.0001fe1c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int16_t iVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    char16_t *pcVar6;
    uint32_t uVar7;
    
    uVar7 = *(arg2 + 0x1e) * 0x10 + *(arg2 + 0x1c);
    if (uVar7 != 0) {
        uVar4 = 0;
        do {
            uVar1 = *(uVar4 + uVar7);
            uVar5 = uVar4;
            if (uVar1 == 0) break;
            uVar3 = uVar4 + 1;
            uVar5 = uVar3;
            *(arg1 + uVar4 * 2) = uVar1;
            uVar4 = uVar5;
        } while (uVar3 < 0x32);
        *(arg1 + uVar5 * 2) = 0;
        return;
    }
    iVar2 = *(arg2 + 0x14);
    if (iVar2 == 1) {
        pcVar6 = L"Floppy";
code_r0x0001ff18:
        fcn.00027364(arg1,0x33,pcVar6);
    }
    else {
        if (iVar2 == 2) {
            pcVar6 = L"Hard Drive";
        }
        else {
            if (iVar2 != 3) {
                if (iVar2 == 6) {
                    pcVar6 = L"Network";
                }
                else if (iVar2 == 0x80) {
                    pcVar6 = L"BEV Device";
                }
                else {
                    pcVar6 = L"Unknown";
                }
                goto code_r0x0001ff18;
            }
            pcVar6 = L"CDROM";
        }
        fcn.00027364(arg1,0x33,pcVar6);
        if (arg3 - 1U < 0x10) {
            fcn.0001df54(arg1,(arg3 - 1U & 1) * 0x200 + 0x15 + (arg3 - 1U >> 1) * 0x415 + arg4);
        }
    }
    return;
}


/* fcn.0001e148 @ 0x1e148 */

//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Variable defined which should be unmapped: var_38h

void fcn.0001e148(void)

{
    uint8_t *puVar1;
    char cVar2;
    int64_t iVar3;
    uint32_t *arg2;
    int64_t iVar4;
    int64_t arg1;
    ulong uVar5;
    uint32_t *arg2_00;
    uint16_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint16_t *puVar10;
    uint64_t uVar11;
    ushort auStackX_8 [4];
    ushort auStackX_10 [4];
    uint32_t *puStackX_18;
    uint64_t uStackX_20;
    int16_t var_48h;
    int16_t var_50h;
    int32_t var_58h;
    int64_t var_60h;
    uint64_t uStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    int64_t iStack_60;
    uint64_t uStack_58;
    int64_t var_48h_2;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_18h;
    
    puStackX_18 = CONCAT44(puStackX_18._4_4_,7);
    auStackX_10[0] = 0;
    auStackX_8[0] = 0;
    iStack_68 = 0;
    iStack_78 = 0;
    iStack_70 = 0;
    uStackX_20 = 0;
    iStack_80 = 0;
    uStack_88 = 0;
    iVar3 = fcn.0001d308();
    if (-1 < iVar3) {
        (**(*0x36f20 + 0x30))(*0x36f20,auStackX_10,&iStack_68,auStackX_8,&iStack_78);
        uStackX_20 = 0;
        arg2 = fcn.000113fc(0x35670,0x34380,&puStackX_18,&uStackX_20);
        puStackX_18 = arg2;
        if (arg2 != NULL) {
            uStack_88 = 0;
            arg2_00 = 0x33d60;
            iVar3 = fcn.000113fc(0x352d0,0x33d60,0,&uStack_88);
            iStack_80 = iVar3;
            if (iVar3 != 0) {
                iVar4 = fcn.0001504c(uStackX_20);
                uStack_58 = 0;
                iStack_70 = iVar4;
                iStack_60 = iVar4;
                if ((uStack_88 & 0xfffffffffffffffe) != 0) {
                    uVar11 = uStackX_20;
code_r0x0001e242:
                    uVar8 = uStack_58;
                    uVar9 = 0;
                    arg2_00 = CONCAT71(arg2_00 >> 8,2);
                    arg1 = fcn.0001af0c(*(iVar3 + uStack_58 * 2),arg2_00);
                    if (((arg1 != 0) && (puVar1 = *(arg1 + 0x10), (*puVar1 & 0x7f) == 5)) && (puVar1[1] == 1)) {
                        if (uVar11 != 0) {
code_r0x0001e287:
                            uVar6 = arg2[1];
                            if (uVar11 <= uVar6) {
                                return;
                            }
                            if (uVar6 == 0) {
                                return;
                            }
                            uVar6 = (uVar6 >> 1) - 1;
                            if (((uVar6 == 0) || (*(puVar1 + 4) != *arg2)) ||
                               (arg2_00 = arg2,
                               cVar2 = fcn.0001d358(arg1,arg2,*(*(arg2 + 6) * 0x45 + 0x3d + iStack_78)),
                               uVar11 = uStackX_20, cVar2 == '\0')) goto code_r0x0001e2d8;
                            if (uVar9 < uStackX_20) {
                                arg2_00 = arg2;
                                (**(*0x36d88 + 0x160))(iVar4,arg2,arg2[1] + 4);
                                uVar11 = uVar6;
                                *(arg1 + 0x30) = iVar4 - iStack_70;
                                *(arg1 + 0x38) = uVar6;
                                uVar5 = fcn.0001504c(uVar11 * 0x68);
                                iVar3 = 0;
                                *(arg1 + 0x40) = uVar5;
                                if (uVar11 != 0) {
                                    puVar10 = iVar4 + 6;
                                    do {
                                        *(iVar3 + *(arg1 + 0x40)) = *puVar10 & 0xff;
                                        uVar8 = *(*(arg1 + 0x40) + iVar3);
                                        arg2_00 = uVar8 * 0x45 + iStack_78;
                                        fcn.0001fe1c(*(arg1 + 0x40) + 2 + iVar3,arg2_00,uVar8,iStack_68);
                                        iVar3 = iVar3 + 0x68;
                                        puVar10 = puVar10 + 1;
                                        uVar11 = uVar11 - 1;
                                    } while (uVar11 != 0);
                                    iVar4 = iStack_60;
                                    uVar8 = uStack_58;
                                }
                                iVar4 = iVar4 + *(iVar4 + 4) + 4;
                                *arg2 = 0xff;
                                iVar3 = iStack_80;
                                uVar11 = uStackX_20;
                                iStack_60 = iVar4;
                                goto code_r0x0001e3c6;
                            }
                            goto code_r0x0001e3bf;
                        }
                        goto code_r0x0001e3c3;
                    }
                    goto code_r0x0001e3ca;
                }
            }
        }
code_r0x0001e3e1:
        fcn.0001470c(&iStack_80);
        fcn.0001470c(&puStackX_18);
        fcn.0001470c(&iStack_70);
    }
    return;
code_r0x0001e2d8:
    uVar7 = arg2[1] + 4;
    arg2 = arg2 + uVar7;
    uVar9 = uVar9 + uVar7;
    if (uVar11 <= uVar9) goto code_r0x0001e3bf;
    goto code_r0x0001e287;
code_r0x0001e3bf:
    iVar3 = iStack_80;
code_r0x0001e3c3:
code_r0x0001e3c6:
    arg2 = puStackX_18;
code_r0x0001e3ca:
    uStack_58 = uVar8 + 1;
    if (uStack_88 >> 1 <= uStack_58) goto code_r0x0001e3e1;
    goto code_r0x0001e242;
}


/* fcn.0001ddb4 @ 0x1ddb4 */

void fcn.0001ddb4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint16_t uVar2;
    int16_t iVar3;
    uint64_t uVar4;
    uint16_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iStackX_20;
    uint64_t auStack_18 [2];
    
    uVar6 = 0;
    auStack_18[0] = 0;
    iStackX_20 = fcn.000113fc(0x35670,0x34380,0,auStack_18);
    if (iStackX_20 == 0) {
        return;
    }
    uVar4 = *(arg3 + 0x30);
    if ((uVar4 <= auStack_18[0]) && (7 < auStack_18[0] - uVar4)) {
        iVar1 = uVar4 + iStackX_20;
        if ((*(iVar1 + 4) < auStack_18[0]) && (uVar5 = 0, *(iVar1 + 4) != 0)) {
            if (*0x36e1c == '\x02') {
                if (*(arg3 + 0x38) != 0) {
                    do {
                        iVar7 = *(iVar1 + 6 + uVar5 * 2) * 0x45;
                        if (*(iVar7 + arg1) != 0) {
                            *(iVar7 + arg1) = *arg2;
                        }
                        *arg2 = *arg2 + 1;
                        uVar5 = uVar5 + 1;
                    } while (uVar5 < *(arg3 + 0x38));
                }
            }
            else {
                if (*(arg3 + 4) == 0) {
                    if (*(arg3 + 0x38) == 0) goto code_r0x0001df33;
                    do {
                        uVar4 = uVar5;
                        uVar5 = uVar5 + 1;
                        *(*(uVar4 * 0x68 + *(arg3 + 0x40)) * 0x45 + arg1) = 0xfffc;
                    } while (uVar5 < *(arg3 + 0x38));
                }
                else {
                    if (*(arg3 + 0x38) == 0) goto code_r0x0001df33;
                    do {
                        uVar2 = *(iVar1 + 6 + uVar5 * 2);
                        if ((uVar2 & 0xff00) == 0xff00) {
                            *(uVar2 * 0x45 + arg1) = 0xfffc;
                        }
                        uVar5 = uVar5 + 1;
                    } while (uVar5 < *(arg3 + 0x38));
                }
                for (; uVar6 < *(arg3 + 0x38); uVar6 = uVar6 + 1) {
                    if (((*(iVar1 + 6 + uVar6 * 2) & 0xff00) == 0) &&
                       (iVar7 = *(iVar1 + 6 + uVar6 * 2) * 0x45, (*(iVar7 + arg1) + 4U & 0xfffb) != 0)) {
                        iVar3 = *arg2;
                        *(iVar7 + arg1) = iVar3;
                        *arg2 = iVar3 + 1;
                    }
                }
            }
        }
    }
code_r0x0001df33:
    fcn.0001470c(&iStackX_20);
    return;
}


/* fcn.000286a0 @ 0x286a0 */

ulong fcn.000286a0(int64_t arg1)

{
    fcn.000272ec(arg1,0x70);
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


/* fcn.000272ec @ 0x272ec */

uchar * fcn.000272ec(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    uchar *puVar1;
    uchar *puVar2;
    uchar in_R8B;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    if (arg2 == 0) {
        return puVar1;
    }
    puVar2 = puVar1;
    for (; arg2 != 0; arg2 = arg2 + -1) {
        *puVar2 = in_R8B;
        puVar2 = puVar2 + 1;
    }
    return puVar1;
}


/* fcn.00028780 @ 0x28780 */

ulong fcn.00028780(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    uint32_t arg1_00;
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
                fcn.000272d8(arg1_00 + uVar1,arg2,arg3);
                *(arg1 + 0x68) = *(arg1 + 0x68) + arg3;
                return 1;
            }
            fcn.000272d8(arg1_00 + uVar1,arg2,0x40 - uVar1);
            fcn.00028e70(arg1,arg1 + 0x28,1);
            iStack_18 = arg2 + (0x40 - uVar2);
            uStackX_18 = uStackX_18 - (0x40 - uVar2);
            *(arg1 + 0x68) = 0;
            fcn.000272ec(arg1_00,0x40);
        }
        uVar2 = uStackX_18 / 0x40;
        if (uVar2 != 0) {
            fcn.00028e70(arg1,iStack_18,uVar2);
            iStack_18 = iStack_18 + uVar2 * 0x40;
            uStackX_18 = uStackX_18 % 0x40;
        }
        if (uStackX_18 != 0) {
            *(arg1 + 0x68) = uStackX_18;
            fcn.000272d8(arg1 + 0x28,iStack_18,uStackX_18);
        }
    }
    return 1;
}


/* fcn.000289d0 @ 0x289d0 */

ulong fcn.000289d0(int64_t arg1,int64_t arg2)

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
        fcn.000272ec(arg2_00 + uStack_10,0x40 - uStack_10);
        uStack_10 = 0;
        fcn.00028e70(arg2,arg2_00,1);
    }
    fcn.000272ec(arg2_00 + uStack_10,0x38 - uStack_10);
    *(arg2 + 0x60) = *(arg2 + 0x24) >> 0x18;
    *(arg2 + 0x61) = *(arg2 + 0x24) >> 0x10;
    *(arg2 + 0x62) = *(arg2 + 0x24) >> 8;
    *(arg2 + 99) = *(arg2 + 0x24);
    *(arg2 + 100) = *(arg2 + 0x20) >> 0x18;
    *(arg2 + 0x65) = *(arg2 + 0x20) >> 0x10;
    *(arg2 + 0x66) = *(arg2 + 0x20) >> 8;
    *(arg2 + 0x67) = *(arg2 + 0x20);
    fcn.00028e70(arg2,arg2 + 0x28,1);
    *(arg2 + 0x68) = 0;
    fcn.000294d0(arg2 + 0x28,0x40);
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


/* fcn.00011964 @ 0x11964 */

void fcn.00011964(void)

{
    uint8_t uVar1;
    uint64_t uVar2;
    
    uVar1 = 0;
    if (*0x43178 != 0) {
        uVar2 = 0;
        do {
            if (*(*0x43170 + 4 + uVar2 * 0x48) != 0) break;
            uVar1 = uVar1 + 1;
            uVar2 = uVar1;
        } while (uVar2 < *0x43178);
    }
    uVar2 = *0x36e59;
    if (uVar1 == *0x43178) {
        uVar2 = 1;
    }
    *0x36e59 = uVar2;
    if (*0x36e59 != '\x01') {
        fcn.00018d88(uVar2,*0x43178);
    }
    return;
}


/* fcn.00013d88 @ 0x13d88 */

ulong fcn.00013d88(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t arg1_00;
    int64_t arg3_00;
    ushort in_stack_00000028;
    ulong in_stack_00000030;
    int64_t iStack_38;
    int64_t aiStack_30 [3];
    
    arg1_00 = 0;
    iStack_38 = 0;
    aiStack_30[0] = 0;
    if ((*(*0x36d80 + 0x40) == 0) || (*0x36e38 < 3)) {
        uVar2 = 0x8000000000000006;
    }
    else {
        iVar3 = fcn.0001f770();
        if (iVar3 < 0) {
            aiStack_30[1] = 0;
            aiStack_30[2] = 0;
            iVar1 = *(*(*(*0x36d80 + 0x40) + 0x48) + 8);
            iVar3 = arg1_00;
            arg3_00 = arg1_00;
            if (*0x36e38 - 1 < 2) {
                arg1_00 = fcn.0001215c(&iStack_38,aiStack_30);
                iVar3 = iStack_38;
                arg3_00 = aiStack_30[0];
            }
            (**(*(*0x36d80 + 0x40) + 0x28))(*(*0x36d80 + 0x40),iVar1);
            if (*0x36e38 - 1 < 2) {
                fcn.00012204(arg1_00,iVar3,arg3_00);
            }
            uVar2 = 0x8000000000000003;
        }
        else {
            uVar2 = (**(*0x36f48 + 0x28))
                              (arg1,arg2 & 0xffff,arg3 & 0xffff,arg4,in_stack_00000028,in_stack_00000030);
        }
    }
    return uVar2;
}


/* fcn.0001a7d0 @ 0x1a7d0 */

uchar fcn.0001a7d0(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint64_t uVar2;
    uchar uVar4;
    uchar uVar3;
    int64_t iStack_18;
    uint64_t uStack_10;
    
    uVar4 = 1;
    uVar3 = 1;
    if ((*(arg1 + 4) & 1) != 0) {
        uVar2 = *(arg1 + 0x30);
        uStack_10 = 0;
        iStack_18 = fcn.000113fc(0x35670,0x34380,0,&uStack_10);
        uVar3 = uVar4;
        if ((uVar2 <= uStack_10) && (7 < uStack_10 - uVar2)) {
            uVar1 = *(uVar2 + iStack_18 + 4);
            if ((uVar1 < uStack_10) && ((uVar1 != 0 && (*0x43138 != *(uVar2 + iStack_18 + 6 + (arg2 & 0xffffU) * 2)))))
            {
                uVar3 = 0;
            }
        }
        fcn.0001470c(&iStack_18);
    }
    return uVar3;
}


/* fcn.000164d0 @ 0x164d0 */

void fcn.000164d0(uint32_t arg1)

{
    int16_t *piVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int16_t *piVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    bool bVar6;
    
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar4 = 0;
    uVar5 = uVar4;
    if (*piVar3 != 0) {
        piVar1 = piVar3;
        do {
            piVar1 = piVar1 + 1;
            uVar5 = uVar5 + 1;
        } while (*piVar1 != 0);
    }
    iVar2 = fcn.0001504c(uVar5 + 1);
    if (iVar2 != 0) {
        do {
            *(iVar2 + uVar4) = piVar3[uVar4];
            bVar6 = uVar4 < uVar5;
            uVar4 = uVar4 + 1;
        } while (bVar6);
    }
    return;
}


/* fcn.00027af8 @ 0x27af8 */

int64_t fcn.00027af8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t arg1_00;
    int64_t noname_1;
    int64_t iVar2;
    ulong in_stack_00000028;
    
    if ((*0x37048 != 0) || (iVar1 = (**(*0x37050 + 0x140))(0x34b28,0,0x37048), -1 < iVar1)) {
        iVar1 = fcn.000276f8();
        arg1_00 = fcn.00027974(arg1);
        if (arg1_00 != 0) {
            iVar1 = fcn.00027854(arg1_00,arg3,iVar1,0x35604);
            if (iVar1 == 0) {
                iVar2 = -0x7ffffffffffffff2;
            }
            else {
                iVar2 = (**(*0x37048 + 8))(*0x37048,iVar1,arg1,arg2 & 0xffff,in_stack_00000028,arg4,0);
                noname_1 = *0x37050;
                (**(*0x37050 + 0x48))(iVar1);
                if (iVar2 == -0x7fffffffffffffe0) {
                    iVar2 = fcn.00027a34(arg1_00,noname_1,arg1,arg2 & 0xffff);
                }
            }
            (**(*0x37050 + 0x48))(arg1_00);
            return iVar2;
        }
    }
    return -0x7ffffffffffffff2;
}


/* fcn.0001f34c @ 0x1f34c */

//WARNING: Variable defined which should be unmapped: var_18h

char fcn.0001f34c(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char cVar2;
    char cVar3;
    int64_t iVar4;
    uint in_register_0000000c;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uStackX_18;
    int64_t iStackX_20;
    int64_t var_38h;
    int64_t var_40h;
    uint64_t uStack_48;
    int64_t iStack_40;
    uint64_t uStack_38;
    uint32_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    
    iVar5 = CONCAT44(in_register_0000000c,arg1);
    uVar7 = 0;
    iStack_40 = 0;
    uStack_48 = 0;
    cVar3 = '\0';
    uStackX_18 = 0;
    iStackX_20 = 0;
    iVar4 = (**(*0x36d88 + 0x130))(iVar5,&iStack_40,&uStack_48);
    if (iVar4 < 0) {
        cVar3 = '\0';
    }
    else {
        cVar2 = '\0';
        if (uStack_48 != 0) {
            do {
                cVar3 = cVar2;
                if (cVar3 != '\0') break;
                iVar4 = (**(*0x36d88 + 0x128))(iVar5,*(iStack_40 + uVar7 * 8),&iStackX_20,&uStackX_18);
                if (-1 < iVar4) {
                    uStack_38 = 0;
                    if (uStackX_18 != 0) {
                        iVar4 = 0;
                        uVar6 = uStackX_18;
                        do {
                            if (cVar3 != '\0') break;
                            if ((*(iVar4 + 0x10 + iStackX_20) & 0x18) != 0) {
                                iVar1 = *(iVar4 + iStackX_20);
                                if ((iVar1 == arg2) || (*(iVar4 + 8 + iStackX_20) == arg2)) {
                                    cVar3 = '\x01';
                                    break;
                                }
                                if (iVar1 != iVar5) {
                                    cVar3 = fcn.0001f34c(iVar1,arg2);
                                    uVar6 = uStackX_18;
                                }
                            }
                            iVar4 = iVar4 + 0x18;
                            uStack_38 = uStack_38 + 1;
                        } while (uStack_38 < uVar6);
                    }
                    fcn.0001470c(&iStackX_20);
                }
                uVar7 = uVar7 + 1;
                cVar2 = cVar3;
            } while (uVar7 < uStack_48);
        }
        fcn.0001470c(&iStack_40);
    }
    return cVar3;
}


/* fcn.0001f460 @ 0x1f460 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

uchar fcn.0001f460(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uchar uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iStackX_10;
    uint64_t uStackX_18;
    int64_t iStackX_20;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    uint64_t uStack_68;
    int64_t iStack_60;
    uint64_t uStack_58;
    uint uStack_50;
    uint uStack_4c;
    uint uStack_48;
    uint uStack_44;
    uint32_t var_30h;
    int64_t var_28h;
    uint32_t var_20h;
    int64_t var_18h;
    int32_t var_10h;
    int32_t var_ch;
    
    uStack_58 = 0;
    uStack_68 = 0;
    uStackX_18 = 0;
    iStackX_10 = 0;
    iStack_60 = 0;
    uVar4 = 1;
    iStackX_20 = 0;
    uStack_50 = 0x2a534210;
    uStack_4c = 0x41d89280;
    uStack_48 = 0xdaca79ae;
    uStack_44 = 0x27b1a201;
    iVar2 = (**(*0x36d88 + 0x138))(2,&uStack_50,0,&uStack_58,&iStackX_10);
    if (-1 < iVar2) {
        uVar5 = 0;
        if (uStack_58 == 0) {
code_r0x0001f5ba:
            uVar4 = 0;
code_r0x0001f5bc:
            fcn.0001470c(&iStackX_10);
            return uVar4;
        }
        while (iVar2 = (**(*0x36d88 + 0x130))(*(iStackX_10 + uVar5 * 8),&iStack_60,&uStack_68), -1 < iVar2) {
            uVar6 = 0;
            if (uStack_68 != 0) {
                do {
                    iVar2 = (**(*0x36d88 + 0x128))
                                      (*(iStackX_10 + uVar5 * 8),*(iStack_60 + uVar6 * 8),&iStackX_20,&uStackX_18);
                    if (-1 < iVar2) {
                        uVar7 = 0;
                        if (uStackX_18 != 0) {
                            iVar2 = 0;
                            uVar3 = uStackX_18;
                            do {
                                if ((*(iVar2 + 0x10 + iStackX_20) & 0x18) != 0) {
                                    if (((*(iVar2 + iStackX_20) == arg1) || (*(iVar2 + 8 + iStackX_20) == arg1)) ||
                                       (cVar1 = fcn.0001f34c(*(iVar2 + iStackX_20),arg1), cVar1 == '\x01'))
                                    goto code_r0x0001f5bc;
                                    uVar3 = uStackX_18;
                                }
                                uVar7 = uVar7 + 1;
                                iVar2 = iVar2 + 0x18;
                            } while (uVar7 < uVar3);
                        }
                        fcn.0001470c(&iStackX_20);
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 < uStack_68);
            }
            fcn.0001470c(&iStack_60);
            uVar5 = uVar5 + 1;
            if (uStack_58 <= uVar5) goto code_r0x0001f5ba;
        }
    }
    return 0;
}


/* fcn.00020830 @ 0x20830 */

void fcn.00020830(uint32_t arg1)

{
    int64_t arg1_00;
    uint in_register_0000000c;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    if ((CONCAT44(in_register_0000000c,arg1) == -0x7fffffffffffffe6) ||
       (CONCAT44(in_register_0000000c,arg1) == -0x7ffffffffffffff1)) {
        arg1_00 = fcn.0001ec60(*0x431d0,0x7e,0);
        iStackX_18 = arg1_00;
        iStackX_20 = fcn.0001ec60(*0x431d0,0x7f,0);
        fcn.00013a50(arg1_00,iStackX_20,0,5);
        fcn.0001470c(&iStackX_18);
        fcn.0001470c(&iStackX_20);
        fcn.00020698();
    }
    return;
}


/* fcn.000109b4 @ 0x109b4 */

char * fcn.000109b4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    char cVar2;
    int64_t iVar3;
    char *pcVar4;
    uint64_t uVar5;
    char *pcVar6;
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
code_r0x00010a04:
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
                if (uVar5 < 4) goto code_r0x00010a04;
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
                    goto code_r0x00010a9f;
                }
            }
            else {
code_r0x00010a9f:
                if (uVar5 != 0) {
                    cVar2 = *arg1;
                    pcVar6 = arg1;
                    while (cVar2 != '\0') {
                        if (arg2 == 0) {
                            for (; (*pcVar6 != '\0' && (*pcVar6 == ';')); pcVar6 = pcVar6 + 1) {
                            }
                            arg3_00 = 0;
                            cVar2 = *pcVar6;
                            while ((cVar2 != '\0' && (cVar2 != ';'))) {
                                arg3_00 = arg3_00 + 1;
                                cVar2 = pcVar6[arg3_00];
                            }
                            if (uVar5 <= arg3_00) goto code_r0x00010a6c;
                        }
                        else {
code_r0x00010a6c:
                            pcVar4 = pcVar6;
                            iVar3 = fcn.000272fc(pcVar6,arg3,uVar5);
                            if (iVar3 == 0) {
                                pcVar4 = fcn.00027648(pcVar4,arg3_00 + 1);
                                if (pcVar4 == NULL) {
                                    return NULL;
                                }
                                if (arg3_00 != 0) {
                                    if (pcVar4 != pcVar6) {
                                        pcVar6 = section..text(pcVar4,pcVar6,arg3_00);
                                        return pcVar6;
                                    }
                                    return pcVar4;
                                }
                                return pcVar4;
                            }
                        }
                        pcVar6 = pcVar6 + arg3_00;
                        cVar2 = *pcVar6;
                    }
                    if ((arg2 != 0) || (uVar5 = uVar5 - 1, uVar5 == 0)) goto code_r0x00010aa4;
                    do {
                        if (*(arg3 + uVar5) == '-') break;
                        uVar5 = uVar5 - 1;
                    } while (uVar5 != 0);
                    goto code_r0x00010a9f;
                }
            }
code_r0x00010aa4:
            piVar7 = piVar7 + 1;
            arg3 = *piVar7;
        } while (arg3 != NULL);
    }
    return NULL;
}


/* fcn.0001d938 @ 0x1d938 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

void fcn.0001d938(int64_t arg1)

{
    int64_t iVar1;
    uint16_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint16_t uVar7;
    uint64_t uVar8;
    uint16_t uVar9;
    int16_t iVar10;
    uint64_t uVar11;
    int16_t iVar12;
    ushort auStackX_10 [4];
    ushort auStackX_18 [4];
    uint64_t uStackX_20;
    int16_t var_48h;
    int16_t var_50h;
    int64_t var_58h;
    int64_t iStack_58;
    int64_t iStack_50;
    int64_t aiStack_48 [2];
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    
    iVar12 = arg1;
    uStackX_20 = 0;
    auStackX_18[0] = 0;
    auStackX_10[0] = 0;
    aiStack_48[1] = 0;
    iStack_58 = 0;
    iVar3 = fcn.0001d308();
    if ((-1 < iVar3) &&
       (iVar3 = (**(*0x36f20 + 0x30))(*0x36f20,auStackX_18,aiStack_48 + 1,auStackX_10,&iStack_58), -1 < iVar3)) {
        uStackX_20 = 0;
        iVar3 = fcn.000113fc(0x35260,0x33ce0,0,&uStackX_20);
        uVar8 = uStackX_20 >> 1;
        if (iVar3 != 0) {
            uStackX_20 = 0;
            iStack_50 = iVar3;
            iVar4 = fcn.000113fc(0x35670,0x34380,0,&uStackX_20);
            aiStack_48[0] = iVar4;
            if (iVar4 != 0) {
                uVar11 = 0;
                uVar7 = uVar8;
                if (uVar7 != 0) {
                    do {
                        iVar10 = uVar11;
                        iVar5 = fcn.00018888(*(iVar3 + uVar11 * 2));
                        if (((iVar5 != 0) && ((**(iVar5 + 0x10) & 0x7f) == 5)) && ((*(iVar5 + 0x10))[1] == 1)) {
                            uVar8 = *(iVar5 + 0x30);
                            if ((uStackX_20 < uVar8) || (uStackX_20 - uVar8 < 8)) break;
                            iVar1 = uVar8 + iVar4;
                            if ((uStackX_20 <= *(iVar1 + 4)) || (uVar9 = 0, *(iVar1 + 4) == 0)) break;
                            if (*(iVar5 + 4) == 0) {
                                if (*(iVar5 + 0x38) != 0) {
                                    do {
                                        uVar8 = uVar9;
                                        uVar9 = uVar9 + 1;
                                        *(*(uVar8 * 0x68 + *(iVar5 + 0x40)) * 0x45 + iStack_58) = 0xfffc;
                                    } while (uVar9 < *(iVar5 + 0x38));
                                }
                            }
                            else if (*(iVar5 + 0x38) != 0) {
                                do {
                                    uVar2 = *(iVar1 + 6 + uVar9 * 2);
                                    if ((uVar2 & 0xff00) == 0xff00) {
                                        *(uVar2 * 0x45 + iStack_58) = 0xfffc;
                                    }
                                    uVar9 = uVar9 + 1;
                                } while (uVar9 < *(iVar5 + 0x38));
                            }
                            uVar9 = 0;
                            if (*(iVar5 + 0x38) != 0) {
                                do {
                                    if (((*(iVar1 + 6 + uVar9 * 2) & 0xff00) == 0) &&
                                       (iVar6 = *(iVar1 + 6 + uVar9 * 2) * 0x45, *(iVar6 + iStack_58) == -2)) {
                                        *(iVar6 + iStack_58) = iVar12;
                                        iVar12 = iVar12 + 1;
                                    }
                                    uVar9 = uVar9 + 1;
                                } while (uVar9 < *(iVar5 + 0x38));
                            }
                        }
                        uVar11 = iVar10 + 1U;
                    } while (iVar10 + 1U < uVar7);
                }
                fcn.0001470c(aiStack_48);
            }
            fcn.0001470c(&iStack_50);
        }
    }
    return;
}


/* fcn.0001df54 @ 0x1df54 */

void fcn.0001df54(int64_t arg1,int64_t arg2)

{
    int32_t iVar1;
    uchar uVar2;
    uint8_t *puVar3;
    uint16_t *puVar4;
    int64_t iVar5;
    uint8_t uVar6;
    uint8_t uVar7;
    int32_t *piVar8;
    int32_t var_40h;
    int16_t var_3ch;
    int8_t var_3ah;
    int64_t var_39h;
    int8_t var_eh;
    
    var_40h = str.APAT_:._0_4_;
    var_3ch = str.APAT_:._4_2_;
    var_3ah = str.APAT_:[6];
    fcn.00033b70(&var_39h,0,0x2c);
    if (arg2 != 0) {
        if (*(arg2 + 0x98) != 0xffff) {
            uVar2 = var_40h._1_1_;
            if ((*(arg2 + 0x98) & 6) != 0) {
                uVar2 = 0x53;
            }
            var_40h._0_2_ = CONCAT11(uVar2,var_40h);
        }
        (**(*0x36d88 + 0x160))(&var_3ah,arg2 + 0x36,0x2e);
        piVar8 = &var_40h;
        iVar5 = 0x32;
        uVar6 = 0;
        do {
            iVar1 = *piVar8;
            uVar7 = uVar6 + 2;
            *piVar8 = *(&var_40h + uVar6 + 1);
            piVar8 = piVar8 + 2;
            *(&var_40h + uVar6 + 1) = iVar1;
            uVar6 = uVar7;
        } while (uVar7 < 0x32);
        var_eh = 0;
        puVar3 = &var_40h;
        puVar4 = arg1;
        do {
            uVar6 = *puVar3;
            puVar3 = puVar3 + 1;
            *puVar4 = uVar6;
            puVar4 = puVar4 + 1;
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        *(arg1 + 100) = 0;
    }
    return;
}


/* fcn.0002fe34 @ 0x2fe34 */

uint64_t fcn.0002fe34(void)

{
    int iVar1;
    ulong uVar2;
    bool bVar3;
    bool bVar4;
    int64_t iVar5;
    char *pcVar6;
    char cVar7;
    ushort uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    char *pcVar12;
    uchar *puVar13;
    uint16_t uVar14;
    uint64_t uVar15;
    int64_t iVar16;
    uint64_t uVar17;
    int64_t *piVar18;
    int64_t arg1;
    char **arg2;
    uint16_t uVar19;
    uint16_t uVar20;
    int64_t iStackX_20;
    uint32_t var_67h;
    int32_t var_6fh;
    int32_t var_77h;
    int64_t var_7fh;
    uint64_t uStack_f8;
    char *pcStack_f0;
    char *pcStack_e8;
    ulong uStack_e0;
    char *pcStack_d8;
    int64_t iStack_d0;
    uchar auStack_c8 [71];
    int64_t var_79h;
    int64_t var_71h;
    int64_t var_69h;
    
    uVar17 = 0;
    iStackX_20 = 0;
    pcStack_f0 = NULL;
    pcStack_e8 = NULL;
    uVar15 = 2;
    uStack_e0 = 0;
    uVar20 = 0;
    bVar4 = false;
    iVar9 = (**(*0x36d88 + 0x138))(2,0x33d80,0,&uStack_f8,&iStackX_20);
    iVar5 = *0x3f9f0;
    if (-1 < iVar9) {
        uVar10 = *0x3f9f8;
        if ((*0x3f9f8 != 0) && (*0x3f9d8 != 0)) {
            bVar3 = true;
            uVar15 = uVar17;
            if (*0x3f9f8 != 0) {
                do {
                    uVar11 = uVar17;
                    if (uStack_f8 != 0) {
                        do {
                            if (*(iVar5 + uVar15 * 8) == *(iStackX_20 + uVar11 * 8)) break;
                            uVar11 = uVar11 + 1;
                        } while (uVar11 < uStack_f8);
                    }
                    if (uVar11 == uStack_f8) {
                        *(iVar5 + uVar15 * 8) = 0;
                        uVar10 = *0x3f9f8;
                        bVar3 = false;
                    }
                    uVar15 = uVar15 + 1;
                } while (uVar15 < uVar10);
            }
            uVar15 = uVar10;
            if ((uVar10 == uStack_f8) && (bVar3)) {
                return uVar10;
            }
        }
        iVar5 = *0x3f9d8;
        *0x3f9d8 = fcn.00027648(uVar15,uStack_f8 << 6);
        if (*0x3f9d8 != 0) {
            if (uStack_f8 << 6 != 0) {
                fcn.00010300(*0x3f9d8,uStack_f8 << 6);
            }
            if (*0x3f9d8 != 0) {
                if (uStack_f8 != 0) {
                    iVar9 = *0x3f9d8;
                    uVar19 = uVar20;
                    do {
                        if ((*0x3f9f0 == 0) || (*0x3f9f8 == 0)) {
code_r0x0003000e:
                            piVar18 = uVar17 * 0x40 + iVar9;
                            arg2 = &pcStack_f0;
                            uVar2 = *(iStackX_20 + uVar17 * 8);
                            iVar9 = (**(*0x36d88 + 0x118))(uVar2,0x33d80,arg2,0,uVar2,2);
                            pcVar6 = pcStack_f0;
                            if (-1 < iVar9) {
                                iVar1 = *(pcStack_f0 + 0x40);
                                pcStack_f0[0x48] = -8;
                                pcStack_f0[0x49] = -7;
                                pcStack_f0[0x4a] = '\x03';
                                pcStack_f0[0x4b] = '\0';
                                pcStack_f0[0x4c] = '\0';
                                pcStack_f0[0x4d] = '\0';
                                pcStack_f0[0x4e] = '\0';
                                pcStack_f0[0x4f] = '\0';
                                pcStack_f0[0x50] = -0x28;
                                pcStack_f0[0x51] = -7;
                                pcStack_f0[0x52] = '\x03';
                                pcStack_f0[0x53] = '\0';
                                pcStack_f0[0x54] = '\0';
                                pcStack_f0[0x55] = '\0';
                                pcStack_f0[0x56] = '\0';
                                pcStack_f0[0x57] = '\0';
                                if (iVar1 == 0) {
                                    uVar2 = *(iStackX_20 + uVar17 * 8);
                                    iVar9 = (**(*0x36d88 + 0x118))(uVar2,0x33d20,&uStack_e0,0,uVar2,2);
                                    if (-1 < iVar9) {
                                        arg2 = &pcStack_d8;
                                        uVar2 = *(iStackX_20 + uVar17 * 8);
                                        iVar9 = (**(*0x36d88 + 0x118))(uVar2,0x33e70,arg2,0,uVar2,2);
                                        if (-1 < iVar9) {
                                            cVar7 = *pcStack_d8;
                                            pcVar12 = pcStack_d8;
                                            while (cVar7 != '\x7f') {
                                                if ((cVar7 == '\x01') && (pcVar12[1] == '\x01')) {
                                                    pcStack_e8 = pcVar12;
                                                    goto code_r0x00030114;
                                                }
                                                pcVar12 = pcVar12 + *(pcVar12 + 2);
                                                cVar7 = *pcVar12;
                                            }
code_r0x00030114:
                                            if (pcStack_e8 != NULL) goto code_r0x0003011d;
                                        }
                                    }
                                }
                                else {
code_r0x0003011d:
                                    if (*(pcVar6 + 0x40) == 1) {
code_r0x0003015a:
                                        *0x3fa10 = '\x01';
                                    }
                                    else if (*(pcVar6 + 0x40) == 3) {
                                        if (*(*(pcVar6 + 0x38) + 0x4c) == '\0') {
                                            bVar4 = true;
                                        }
                                        goto code_r0x0003015a;
                                    }
                                    cVar7 = fcn.00030364(pcStack_f0,piVar18 + 0x14,arg2);
                                    if (cVar7 != '\0') {
                                        *piVar18 = pcStack_f0;
                                        iVar9 = *(iStackX_20 + uVar17 * 8);
                                        cVar7 = fcn.000303a8(iVar9,&iStack_d0);
                                        iVar16 = iStack_d0;
                                        if (cVar7 != '\0') {
                                            uVar8 = fcn.0002fc88(iVar9,iStack_d0);
                                            *(piVar18 + 2) = uVar8;
                                            if ((*(pcVar6 + 0x40) == 2) || (bVar4)) {
                                                puVar13 = auStack_c8;
                                                fcn.0001c360(puVar13,0x78,0x36930,iVar16);
                                            }
                                            else {
                                                if (*0x3fa10 == '\0') {
                                                    iVar9 = fcn.0001ec60(*0x431d0,0xf1,0);
                                                    puVar13 = auStack_c8;
                                                    fcn.0001c360(puVar13,0x78,0x36ba0,iVar9);
                                                    uVar8 = fcn.0002fc88(puVar13,auStack_c8);
                                                    *(piVar18 + 0x12) = uVar8;
                                                    (**(*0x36d88 + 0x48))(iVar9);
                                                    goto code_r0x0003026f;
                                                }
                                                puVar13 = auStack_c8;
                                                fcn.0001c360(puVar13,0x78,0x36ba0,0x36b9c);
                                            }
                                            uVar8 = fcn.0002fc88(puVar13,auStack_c8);
                                            *(piVar18 + 0x12) = uVar8;
                                        }
code_r0x0003026f:
                                        *(piVar18 + 0x16) = 0;
                                        uVar20 = uVar20 + 1;
                                        piVar18[1] = *0x431d0;
                                        piVar18[7] = *(iStackX_20 + uVar17 * 8);
                                    }
                                }
                            }
                            iVar9 = *0x3f9d8;
                        }
                        else {
                            uVar14 = *0x3f9f8;
                            do {
                                if (*(iStackX_20 + uVar17 * 8) == *(*0x3f9f0 + (uVar14 - 1) * 8)) break;
                                uVar14 = uVar14 - 1;
                            } while (uVar14 != 0);
                            if (uVar14 == 0) goto code_r0x0003000e;
                            arg1 = uVar17 * 0x40 + iVar9;
                            iVar16 = (uVar14 - 1) * 0x40 + iVar5;
                            if (arg1 != iVar16) {
                                section..text(arg1,iVar16,0x40);
                                iVar9 = *0x3f9d8;
                            }
                            uVar20 = uVar20 + 1;
                        }
                        uVar19 = uVar19 + 1;
                        uVar17 = uVar19;
                    } while (uVar17 < uStack_f8);
                }
                iVar9 = *0x3f9f0;
                if (*0x3f9f0 != 0) {
                    (**(*0x36d88 + 0x48))();
                }
                *0x3f9f0 = fcn.00027648(iVar9,uStack_f8 << 3);
                if ((uStack_f8 << 3 != 0) && (*0x3f9f0 != iStackX_20)) {
                    section..text(*0x3f9f0,iStackX_20,uStack_f8 << 3);
                }
                (**(*0x36d88 + 0x48))(iStackX_20);
                if (iVar5 != 0) {
                    (**(*0x36d88 + 0x48))(iVar5);
                }
                if (uVar20 == 0) {
                    (**(*0x36d88 + 0x48))(*0x3f9d8);
                    *0x3f9d8 = 0;
                }
                return uVar20;
            }
        }
    }
    return 0;
}


/* fcn.000304b0 @ 0x304b0 */

void fcn.000304b0(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong noname_2;
    ulong unaff_R14;
    uint16_t auStackX_10 [4];
    int64_t iStackX_18;
    int64_t iStackX_20;
    int16_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    
    uVar5 = 0;
    auStackX_10[0] = 0;
    uVar4 = 0x20;
    fcn.000148bc(0xffff0008,0x2183c,0,0);
    (***(*0x36d80 + 0x30))(*(*0x36d80 + 0x30),0);
    puVar1 = *arg2;
    iVar2 = fcn.0001ec60(*0x431d0,0xf2,0);
    if (iVar2 != 0) {
        uVar3 = fcn.0001fc98(iVar2);
        if (0x20 < uVar3 / 0x13) {
            uVar4 = fcn.0001fc98(iVar2);
            uVar4 = uVar4 / 0x13;
        }
    }
    (**(*0x36d88 + 0x48))(iVar2);
    noname_2 = 0;
    iVar2 = fcn.0001ec60(*0x431d0,0xf4,0);
    if (iVar2 != 0) {
        uVar5 = fcn.0001fc98(iVar2);
        uVar5 = uVar5 / 0x13;
    }
    (**(*0x36d88 + 0x48))(iVar2);
    fcn.000262e4(1,0x3050004,noname_2,0x34040);
    uVar3 = arg1 & 0xffff;
    fcn.0002ee2c(uVar3,uVar4,&iStackX_20,&iStackX_18);
    iVar2 = fcn.00027648(uVar3,0x42);
    uVar3 = 0;
    do {
        iVar6 = (**puVar1)(puVar1,auStackX_10);
        if ((iVar6 == 0) && ((auStackX_10[0] & 0x10) != 0)) {
            fcn.0002ee2c(arg1 & 0xffff,uVar5,&iStackX_20,&iStackX_18);
            fcn.0002f1ac(uVar5,0xf4,iStackX_20,iStackX_18);
            iVar6 = iStackX_20;
            goto code_r0x000306e9;
        }
        fcn.0002f1ac(uVar4,0xf2,iStackX_20,iStackX_18 + -1);
        iVar6 = iStackX_20;
        iVar7 = fcn.0002f374(iVar2,0x20,iStackX_20,iStackX_18,unaff_R14);
        if (iVar7 != 0) break;
        iVar7 = fcn.0003078c(iVar2,arg2);
        if (iVar7 == 0) break;
        if (uVar3 != 2) {
            iVar6 = iStackX_20;
            fcn.0002f1ac(0x20,0x13,iStackX_20,iStackX_18);
        }
        uVar3 = uVar3 + 1;
    } while (uVar3 < 3);
    fcn.00010300(iVar2,0x42);
    (**(*0x36d88 + 0x48))(iVar2);
    if ((iVar7 != 0) || (4 < uVar3)) {
        fcn.0002f1ac(0x20,0xf0,iStackX_20,iStackX_18);
        fcn.000262e4(0x80000002,0x3051004,iStackX_20,0x34040);
        iVar6 = iStackX_20;
    }
code_r0x000306e9:
    fcn.000262e4(1,0x3050005,iVar6,0x34040);
    iVar2 = *(*0x36d80 + 0x40);
    if (iVar2 != 0) {
        (**(iVar2 + 0x40))(iVar2,0);
        (**(*(*0x36d80 + 0x40) + 0x28))(*(*0x36d80 + 0x40),0xf);
        (**(*(*0x36d80 + 0x40) + 0x30))(*(*0x36d80 + 0x40));
    }
    return;
}


/* fcn.0001cc48 @ 0x1cc48 */

//WARNING: Variable defined which should be unmapped: var_bh
//WARNING: Variable defined which should be unmapped: var_3h
//WARNING: Variable defined which should be unmapped: var_17h
//WARNING: Variable defined which should be unmapped: var_19h

int64_t fcn.0001cc48(void)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uchar *puVar9;
    int iVar10;
    int64_t var_9h;
    int64_t var_11h;
    int32_t var_19h_2;
    ulong uStackX_18;
    ulong uStackX_20;
    int64_t var_67h;
    int64_t var_6fh;
    int64_t var_77h;
    int64_t var_7fh;
    ushort uStack_78;
    ulong uStack_76;
    uint uStack_6e;
    uint uStack_6a;
    uint32_t uStack_66;
    int iStack_62;
    ulong uStack_5e;
    ulong uStack_56;
    ulong uStack_4e;
    uint uStack_46;
    int16_t var_19h;
    int64_t var_17h;
    int32_t var_fh;
    int64_t var_bh;
    int32_t var_3h;
    
    iVar8 = 0;
    uStack_78 = 0x4d42;
    uStack_76 = 0;
    uStack_6e = 0x36;
    uStack_6a = 0x28;
    uStack_66 = 0;
    iStack_62 = 0;
    uStack_5e = 0x180001;
    uStack_56 = 0;
    uStack_4e = 0;
    uStack_46 = 0;
    uStackX_20 = 0;
    uStackX_18 = 0;
    stack0x00000010 = 0;
    stack0x00000008 = 0;
    fcn.0001ce18(&uStackX_20,&uStackX_18,&var_11h + 7,&var_9h + 7);
    uVar3 = stack0x00000010;
    iVar2 = stack0x00000008;
    if ((*0x36e60 == 0) || (iVar6 = fcn.0001504c(stack0x00000008 * stack0x00000010 * 4), iVar6 == 0)) {
code_r0x0001ce04:
        iVar8 = 0;
    }
    else {
        unique0x100001d9 = iVar6;
        iVar7 = (**(*0x36e60 + 0x10))(*0x36e60,iVar6,1,uStackX_20,uStackX_18,0,0,uVar3,iVar2,0);
        if (iVar7 == 0) {
            uVar5 = uVar3;
            uVar4 = uVar5;
            if ((uVar3 & 3) != 0) {
                uVar4 = (uVar5 & 3) + uVar5;
            }
            iVar10 = iVar2;
            iVar1 = uVar4 * iVar10 * 3;
            uStack_56 = CONCAT44(uStack_56._4_4_,iVar1);
            uVar4 = iVar1 + 0x36;
            uStack_76 = CONCAT44(uStack_76._4_4_,uVar4);
            iVar8 = fcn.0001504c(uVar4);
            if (iVar8 == 0) {
                fcn.0001470c(&var_9h + 7);
                goto code_r0x0001ce04;
            }
            iStack_62 = iVar10;
            uStack_66 = uVar5;
            (**(*0x36d88 + 0x160))(iVar8,&uStack_78,0x36);
            puVar9 = *(iVar8 + 10) + iVar8;
            for (iVar10 = iVar10 * uVar5; uVar4 = uStack_66, iVar10 != 0; iVar10 = iVar10 - uStack_66) {
                for (; uVar4 != 0; uVar4 = uVar4 - 1) {
                    uVar5 = iVar10 - uVar4;
                    *puVar9 = *(iVar6 + uVar5 * 4);
                    puVar9[1] = *(iVar6 + 1 + uVar5 * 4);
                    puVar9[2] = *(iVar6 + 2 + uVar5 * 4);
                    puVar9 = puVar9 + 3;
                }
                uVar4 = puVar9 - *(iVar8 + 10) & 3;
                if (uVar4 != 0) {
                    puVar9 = puVar9 + (4 - uVar4);
                }
            }
        }
        fcn.0001470c(&var_9h + 7);
    }
    return iVar8;
}


/* fcn.00017c64 @ 0x17c64 */

void fcn.00017c64(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint in_stack_ffffffffffffffc0;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    
    var_30h = 0;
    var_28h = 0;
    var_20h = 0;
    var_18h = -0x1f9423;
    var_14h = 0x46a66107;
    var_10h = -0x63a54d85;
    var_ch = 0x5c27c57e;
    iVar1 = (**(*0x36d88 + 0x140))(&var_18h,0,&var_20h);
    if (iVar1 == 0) {
        fcn.00017af8(&var_30h,&var_28h,arg1,arg2,arg3,CONCAT31(in_stack_ffffffffffffffc0 >> 8,arg4));
        iVar1 = var_30h;
        if (var_30h != 0) {
            iVar2 = (**var_20h)(var_20h,var_30h,var_28h,0x36ec8);
            if (iVar2 == 0) {
                *0x36ec0 = iVar1;
            }
        }
    }
    return;
}


/* fcn.000130b8 @ 0x130b8 */

ulong fcn.000130b8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_68h)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint auStackX_8 [2];
    uint auStackX_10 [2];
    uint auStackX_18 [2];
    int aiStackX_20 [2];
    uint64_t in_stack_00000028;
    int32_t var_48h;
    int32_t var_50h;
    int32_t var_58h;
    uint32_t var_60h;
    
    aiStackX_20[0] = 0;
    iVar1 = fcn.0001504c(4);
    iVar2 = fcn.0001504c(4);
    iVar3 = fcn.0001504c(4);
    auStackX_10[0] = 0xc0c0c0;
    auStackX_18[0] = 0xc0c0c0;
    auStackX_8[0] = 0;
    (**(*0x36d88 + 0x160))(iVar1,auStackX_8,4);
    (**(*0x36d88 + 0x160))(iVar2,auStackX_10,4);
    (**(*0x36d88 + 0x160))(iVar3,auStackX_18,4);
    (*0x431c0)[7] = arg3 / in_stack_00000028;
    (*0x431c0)[2] = (arg3 / in_stack_00000028) * in_stack_00000028;
    (*0x431c0)[3] = arg4;
    **0x431c0 = arg1;
    (*0x431c0)[1] = arg2;
    (*0x431c0)[4] = iVar1;
    (*0x431c0)[5] = iVar2;
    (*0x431c0)[6] = iVar3;
    if (*0x36e48 != NULL) {
        (***0x36e48)(*0x36e48,aiStackX_20,0,0);
    }
    if ((aiStackX_20[0] == 1) && (*0x36e38 < 4)) {
        *(*0x431c0 + 9) = 1;
    }
    else {
        *(*0x431c0 + 9) = 0;
    }
    *(*0x431c0 + 0x49) = 1;
    (*0x431c0)[8] = 0;
    return 0;
}


/* fcn.0002a264 @ 0x2a264 */

//WARNING: Variable defined which should be unmapped: var_18h

ulong fcn.0002a264(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint8_t *puVar5;
    uchar *puVar6;
    uint32_t uVar7;
    uint32_t *puVar8;
    int aiStackX_8 [2];
    uint32_t auStackX_10 [2];
    uchar auStackX_18 [8];
    int64_t var_28h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t aiStack_38 [3];
    int64_t var_18h;
    
    if (arg1 == 0) {
        return 0x8000000000000015;
    }
    *0x37098 = arg1;
    auStackX_10[0] = arg2;
    uVar1 = fcn.00029f10();
    uVar7 = 0;
    iVar2 = fcn.0001504c(uVar1);
    if (iVar2 == 0) {
        return 0x8000000000000015;
    }
    *0x37098 = arg1 + 8;
    aiStack_38[0] = iVar2;
code_r0x0002a2af:
    iVar3 = fcn.0002a0c4(auStackX_10,&var_28h,aiStackX_8,auStackX_18);
    if (((iVar3 != 0) || (aiStackX_8[0] == 0x49454e44)) || (var_28h == 0)) {
        iVar3 = fcn.0002a728();
        if ((iVar3 == 0) && (iVar2 = fcn.0002d120(uVar7,iVar2), iVar2 == 0)) {
            fcn.0001470c(aiStack_38);
            return 0;
        }
code_r0x0002a4dc:
        fcn.0001470c(aiStack_38);
        return 0x8000000000000015;
    }
    if (aiStackX_8[0] == 0x49444154) {
        uVar1 = 0;
        puVar6 = var_28h;
        if (auStackX_10[0] != 0) {
            do {
                uVar4 = uVar1 + uVar7;
                uVar1 = uVar1 + 1;
                *(uVar4 + iVar2) = *puVar6;
                puVar6 = puVar6 + 1;
            } while (uVar1 < auStackX_10[0]);
        }
        uVar7 = uVar7 + auStackX_10[0];
        goto code_r0x0002a4c9;
    }
    if (aiStackX_8[0] == 0x49484452) {
        if (0xc < auStackX_10[0]) {
            *0x422a0 = ((*var_28h * 0x100 + *(var_28h + 1)) * 0x100 + *(var_28h + 2)) * 0x100 + *(var_28h + 3);
            *0x422a4 = ((*(var_28h + 4) * 0x100 + *(var_28h + 5)) * 0x100 + *(var_28h + 6)) * 0x100 + *(var_28h + 7);
            *0x422a8 = *(var_28h + 8);
            *0x422ac = *(var_28h + 9);
            *0x422b0 = *(var_28h + 10);
            *0x422b4 = *(var_28h + 0xb);
            *0x422b8 = *(var_28h + 0xc);
        }
        goto code_r0x0002a4c9;
    }
    if (aiStackX_8[0] == 0x504c5445) {
        iVar3 = fcn.0002a008(auStackX_10[0],var_28h);
        if (iVar3 != 0) goto code_r0x0002a4d7;
        goto code_r0x0002a4c9;
    }
    if (aiStackX_8[0] == 0x67414d41) goto code_r0x0002a3ce;
    if (aiStackX_8[0] != 0x74524e53) goto code_r0x0002a4c9;
    if (*0x422ac == 0) {
        if (auStackX_10[0] < 2) goto code_r0x0002a4d7;
        *0x422d0 = *var_28h * 0x100 + *(var_28h + 1);
    }
    else if (*0x422ac == 2) {
        if (auStackX_10[0] < 6) {
code_r0x0002a4d7:
            fcn.0001470c(&var_28h);
            goto code_r0x0002a4dc;
        }
        *0x422d0 = *var_28h * 0x100 + *(var_28h + 1);
        *0x422d4 = *(var_28h + 2) * 0x100 + *(var_28h + 3);
        *0x422d8 = *(var_28h + 4) * 0x100 + *(var_28h + 5);
    }
    else {
        if (*0x422ac != 3) goto code_r0x0002a4d7;
        uVar1 = 0;
        puVar8 = 0x422d0;
        puVar5 = var_28h;
        do {
            if (auStackX_10[0] <= uVar1) break;
            uVar1 = uVar1 + 1;
            *puVar8 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar8 = puVar8 + 1;
        } while (uVar1 < 3);
    }
    goto code_r0x0002a4c9;
code_r0x0002a3ce:
    if (auStackX_10[0] < 4) goto code_r0x0002a2af;
    *0x42340 = ((*var_28h * 0x100 + *(var_28h + 1)) * 0x100 + *(var_28h + 2)) * 0x100 + *(var_28h + 3);
code_r0x0002a4c9:
    fcn.0001470c(&var_28h);
    goto code_r0x0002a2af;
}


/* fcn.0001cf98 @ 0x1cf98 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h

int64_t fcn.0001cf98(void)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int *piStackX_18;
    uint32_t var_28h_2;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    uint uStack_48;
    uint uStack_44;
    uint uStack_40;
    uint uStack_3c;
    uint uStack_38;
    uint uStack_34;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    
    uVar4 = 0xffffffff;
    uStack_38 = 0xbd8c1056;
    uStack_34 = 0x44ec9f36;
    var_28h = 0x33a6a892;
    uVar2 = 0xffffffff;
    var_24h = -0x79867e81;
    uStack_48 = 0x1c0c34f6;
    uStack_44 = 0x41fad380;
    uStack_40 = 0xd08a49a0;
    uStack_3c = 0xaa661a6c;
    iVar1 = (**(*0x36d88 + 0x140))(&uStack_38,0,&piStackX_18);
    if ((iVar1 < 0) || (*piStackX_18 == 0)) {
        iVar1 = (**(*0x36d88 + 0x138))(2,&uStack_48,0,&uStackX_8,&iStackX_10);
        if (iVar1 < 0) goto code_r0x0001d11b;
        uVar3 = 0;
        if (uStackX_8 != 0) {
            do {
                iVar1 = (**(*0x36d88 + 0x98))(*(iStackX_10 + uVar3 * 8),&uStack_48,&var_28h_2);
                if ((((-1 < iVar1) && (*_var_28h_2 != 0)) && (iVar1 = *(_var_28h_2 + 2), (*(iVar1 + 0x18) & 2) != 0))
                   && (uVar5 = (*(iVar1 + 0x3a) & 0xf0) * 0x10 + *(iVar1 + 0x38), uVar5 < uVar4)) {
                    uVar2 = (*(iVar1 + 0x3d) & 0xf0) * 0x10 + *(iVar1 + 0x3b);
                    uVar4 = uVar5;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < uStackX_8);
        }
        if (iStackX_10 != 0) {
            (**(*0x36d88 + 0x48))();
        }
        if ((uVar4 == 0xffffffff) || (uVar2 == 0xffffffff)) goto code_r0x0001d11b;
    }
    else {
        iVar1 = *(piStackX_18 + 2);
        if ((*(iVar1 + 0x18) & 2) == 0) {
            return -0x7ffffffffffffffd;
        }
        uVar4 = (*(iVar1 + 0x3a) & 0xf0) * 0x10 + *(iVar1 + 0x38);
        uVar2 = (*(iVar1 + 0x3d) & 0xf0) * 0x10 + *(iVar1 + 0x3b);
    }
    iVar1 = fcn.0001cef4(uVar4,uVar2);
    if (-1 < iVar1) {
        return iVar1;
    }
code_r0x0001d11b:
    iVar1 = fcn.0001cef4(0x400,0x300);
    return iVar1;
}


/* fcn.00020914 @ 0x20914 */

void fcn.00020914(void)

{
    uchar uVar1;
    int64_t arg1;
    int64_t *arg4;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    ulong auStack_18 [2];
    
    uVar1 = *0x36ef2;
    arg1 = fcn.0001cc48();
    if (arg1 != 0) {
        arg4 = aiStackX_18 + 1;
        aiStackX_18[0] = 0;
        iStackX_10 = 0;
        auStack_18[0] = 0;
        aiStackX_18[1] = 0;
        fcn.0001ce18(aiStackX_18,&iStackX_10,auStack_18,arg4);
        fcn.00017c64(arg1,aiStackX_18[0],iStackX_10,CONCAT71(arg4 >> 8,uVar1));
    }
    return;
}


/* fcn.0002e964 @ 0x2e964 */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h
//WARNING: Variable defined which should be unmapped: var_39h

uint32_t fcn.0002e964(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int16_t *arg1_00;
    int64_t iVar6;
    int16_t *piVar7;
    uint *arg1_01;
    ulong noname_1;
    uint32_t uVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    int64_t var_fh;
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t var_6fh;
    int64_t var_7fh;
    uint uStack_d8;
    uint uStack_d4;
    uint uStack_d0;
    uint uStack_cc;
    uint uVar11;
    uint uStack_b8;
    uint uStack_b4;
    uint uStack_b0;
    uint uStack_ac;
    uint uStack_a8;
    uint uStack_a4;
    uint uStack_a0;
    uint uStack_9c;
    uint uStack_98;
    uint uStack_94;
    uint uStack_90;
    uint uStack_8c;
    uint uStack_88;
    uchar auStack_84 [3];
    int32_t var_79h;
    int32_t var_75h;
    int32_t var_71h;
    int32_t var_6dh;
    int32_t var_69h;
    int32_t var_65h;
    int32_t var_61h;
    int32_t var_5dh;
    int32_t var_59h;
    int32_t var_55h;
    int32_t var_51h;
    int32_t var_4dh;
    int32_t var_49h;
    int32_t var_45h;
    int32_t var_41h;
    int32_t var_3dh;
    int32_t var_39h;
    int32_t var_35h;
    int32_t var_31h;
    int32_t var_2dh;
    int32_t var_29h;
    int32_t var_25h;
    int32_t var_21h;
    int32_t var_1dh;
    uint32_t var_19h;
    int64_t var_11h;
    int64_t var_9h;
    int64_t var_1h;
    
    uStack_d8 = 0x73e7e01;
    uVar8 = 0;
    uStack_d4 = 0x4e852611;
    stack0xffffffffffffffa8 = 0;
    stack0xffffffffffffffb0 = 0;
    uVar9 = 0x14;
    uStack_d0 = 0xb6a396b8;
    uStack_cc = 0xba7c76;
    uStack_88 = 0xb9b038b0;
    _auStack_84 = 0x4aabe2b6;
    stack0xffffffffffffff80 = 0x65413594;
    stack0xffffffffffffff84 = 0x32d0feec;
    uStack_98 = 0xab1404ca;
    uStack_94 = 0x42084801;
    uStack_90 = 0xd530bf98;
    uStack_8c = 0xd3d4da21;
    uStack_a8 = 0x541d5a75;
    uStack_a4 = 0x43c795ee;
    uStack_a0 = 0x94235d9e;
    uStack_9c = 0x496248dc;
    uVar11 = 0xd69240c0;
    uStack_b8 = 0xfdfbbfab;
    uStack_b4 = 0x4961bc61;
    uStack_b0 = 0x447717b9;
    uStack_ac = 0x7b504156;
    iStackX_18 = arg3;
    fcn.00015278(&uStack_d8);
    *0x36e58 = 1;
    fcn.00028124(1,0x3051006);
    fcn.000148bc(0xffff0008,0x2183c,0,0);
    fcn.00020134();
    (***(*0x36d80 + 0x30))(*(*0x36d80 + 0x30),0);
    iVar3 = fcn.0001504c(0xb71b04);
    unique0x10000520 = iVar3;
    if (iVar3 != 0) {
        (**(*0x36d88 + 0x160))(iVar3,*0x431c8);
    }
    iStackX_20 = fcn.0001ec60(*0x431d0,0x13,0);
    if (iStackX_20 != 0) {
        iVar4 = fcn.0001eb48(iStackX_20);
        unique0x10000510 = iVar4;
        uVar5 = fcn.0001fc98(iVar4);
        if (0x14 < uVar5 / 0x13) {
            uVar9 = fcn.0001fc98(iVar4);
            uVar9 = uVar9 / 0x13;
        }
        fcn.0001470c(&iStackX_20);
        fcn.0001470c(&var_71h + 1);
    }
    fcn.0002ee2c(0x12,uVar9,&iStackX_10,&iStackX_18);
    arg1_00 = fcn.000150a0(0x2a);
    unique0x10000530 = arg1_00;
    uVar2 = fcn.00020134();
    if (*arg2 != 0) {
        uVar10 = 0;
        do {
            noname_1 = 0x14;
            iVar3 = fcn.0002f374(arg1_00,0x14,iStackX_10,iStackX_18,uVar11);
            if (iVar3 != -0x7fffffffffffffeb) {
                if (iVar3 == -0x7fffffffffffffee) break;
                iStackX_20 = 0;
                stack0xffffffffffffff88 = 0;
                fcn.000201f4(&iStackX_20,noname_1,&var_71h + 1);
                iVar3 = iStackX_20;
                uVar8 = uVar10;
                if ((iStackX_20 != 0) && (stack0xffffffffffffff88 == 0x51)) {
                    iVar4 = fcn.0001504c(0x2a);
                    unique0x10000528 = iVar4;
                    fcn.00033b7e(iVar4,0x2a,0);
                    fcn.00027364(iVar4,0x15,arg1_00);
                    fcn.000148bc(0xffff0014,0x1e4b4,iVar4,0x28);
                    iVar6 = fcn.00027fcc(arg1_00,iVar3,0x28);
                    if ((iVar6 == 0) || (iVar6 = fcn.00027fcc(iVar4,iVar3,0x28), iVar6 == 0)) {
                        uVar8 = 1;
                    }
                    iVar6 = fcn.00027fcc(arg1_00,iVar3 + 0x28,0x28);
                    if ((iVar6 == 0) || (iVar3 = fcn.00027fcc(iVar4,iVar3 + 0x28,0x28), iVar3 == 0)) {
                        uVar8 = 2;
                    }
                    fcn.0001470c(&iStackX_20);
                    fcn.00014738(&var_61h + 1);
                }
                uVar8 = uVar2 & uVar8;
                if (*arg1_00 == 0) {
                    if (uVar8 != 0) break;
                    if (((uVar2 & 1) == 0) && ((arg1 & 1U) != 0)) {
                        uVar8 = 1;
                    }
                    if (((uVar2 & 2) == 0) && ((arg1 & 2U) != 0)) {
                        uVar8 = 2;
                    }
                }
                if (uVar8 != 0) break;
                fcn.0002f1ac(0x14,0x13,iStackX_10,iStackX_18);
                *arg2 = *arg2 + -1;
            }
        } while (*arg2 != 0);
        iVar3 = stack0xffffffffffffff90;
    }
    uVar9 = 0;
    iVar1 = *arg1_00;
    piVar7 = arg1_00;
    while (iVar1 != 0) {
        piVar7 = piVar7 + 1;
        uVar9 = uVar9 + 1;
        iVar1 = *piVar7;
    }
    if ((uVar9 < *0x36f68) && (*0x36f58 != 0)) {
        fcn.00027364(*0x36f58,*0x36f68,arg1_00);
    }
    iVar4 = &var_59h + 1;
    fcn.00014738(iVar4);
    if (uVar8 == 0) {
        fcn.00015278(&stack0xffffffffffffff38);
        fcn.00028124(0x80000002,0x3051001);
        fcn.0002f1ac(0x14,0x13,iStackX_10,iStackX_18);
        arg1_01 = &uStack_b8;
    }
    else {
        fcn.00015418(CONCAT71(iVar4 >> 8,7));
        fcn.00016678();
        fcn.00020134();
        if ((uVar2 & 2) == 0) {
            uVar8 = 2;
        }
        fcn.0002e8f8(uVar8);
        if (uVar8 == 2) {
            fcn.00015278(&uStack_a8);
        }
        if (uVar8 != 1) goto code_r0x0002edda;
        arg1_01 = &uStack_98;
    }
    fcn.00015278(arg1_01);
code_r0x0002edda:
    fcn.00015278(&uStack_88);
    *0x36e58 = 0;
    if (iVar3 != 0) {
        (**(*0x36d88 + 0x160))(*0x431c8,iVar3,0xb71b04);
        fcn.0001470c(&var_69h + 1);
    }
    return uVar8;
}


/* fcn.0002e8f8 @ 0x2e8f8 */

void fcn.0002e8f8(uint32_t arg1)

{
    int8_t var_10h;
    int32_t var_10h_2;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_10h = arg1 == 1;
    *0x36e88 = arg1;
    if (arg1 != 0) {
        var_10h_2 = -0x188f4497;
        var_ch = 0x4d04bcb4;
        var_8h = -0xdc6862;
        var_4h = -0x5301a96c;
        (**(*0x36d98 + 0x58))(0x36b70,&var_10h_2,2,1,&var_10h);
    }
    return;
}


/* fcn.00021748 @ 0x21748 */

uchar fcn.00021748(uint32_t arg1,ulong noname_1,int64_t arg2)

{
    int16_t iVar1;
    uint32_t arg1_00;
    char cVar2;
    uint in_register_0000000c;
    uchar uVar3;
    
    iVar1 = *CONCAT44(in_register_0000000c,arg1);
    arg1_00 = *(CONCAT44(in_register_0000000c,arg1) + 2);
    cVar2 = '\0';
    uVar3 = 1;
    if (arg1_00 < 0) {
        cVar2 = fcn.000205cc(arg1_00,0);
    }
    if ((iVar1 != arg2) || (cVar2 == '\0')) {
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00021798 @ 0x21798 */

uint64_t fcn.00021798(int64_t arg1)

{
    uint uVar1;
    int iVar2;
    char cVar3;
    int64_t *piVar4;
    int *piVar5;
    int64_t iVar6;
    int64_t iStackX_8;
    
    iStackX_8 = 0;
    iVar6 = 0;
    uVar1 = *(arg1 + 4);
    piVar4 = *0x20;
    if (*0x36f88 != 0) {
        piVar4 = 0x36f88;
        do {
            cVar3 = (**piVar4)(*(arg1 + 2),*arg1,uVar1,&iStackX_8);
            if ((cVar3 != '\0') && (iStackX_8 != 0)) {
                piVar5 = 0x34560;
                iVar2 = *0x34560;
                while (iVar2 != -1) {
                    if (*piVar5 == 0x1005) {
                        *(piVar5 + 8) = iStackX_8;
                        return CONCAT71(piVar5 >> 8,1);
                    }
                    piVar5 = piVar5 + 10;
                    iVar2 = *piVar5;
                }
            }
            iVar6 = iVar6 + 1;
            piVar4 = iVar6 * 8 + 0x36f88;
        } while (*piVar4 != 0);
    }
    return piVar4 & 0xffffffffffffff00;
}


/* fcn.0001a640 @ 0x1a640 */

//WARNING: Variable defined which should be unmapped: var_14h

int64_t fcn.0001a640(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uchar auStackX_18 [8];
    int64_t iStackX_20;
    int64_t var_30h;
    int64_t var_38h;
    int64_t iStack_38;
    uint uStack_30;
    uchar auStack_2c [4];
    int64_t var_bp_20h;
    int32_t var_18h;
    int64_t var_14h;
    
    iVar3 = 0;
    iVar2 = (**(*0x36d88 + 0x138))(2,0x33ea0,0,auStackX_18,&iStackX_20);
    if (iVar2 < 0) {
        *arg1 = 0xffffffff;
        iVar3 = 0;
    }
    else {
        for (uVar4 = *arg1; uVar1 = auStackX_18._0_4_, uVar4 < uVar1; uVar4 = uVar4 + 1) {
            iVar2 = (**(*0x36d88 + 0x98))(*(iStackX_20 + uVar4 * 8),0x33e70,&iStack_38);
            if (-1 < iVar2) {
                uStack_30 = 0x140604;
                (**(*0x36d88 + 0x160))(auStack_2c,arg2,0x10);
                iVar3 = fcn.000284c0(iStack_38,&uStack_30);
                if (iVar3 != 0) {
                    *arg1 = uVar4 + 1;
                    uVar1 = auStackX_18._0_4_;
                    break;
                }
            }
        }
        if (uVar4 == uVar1) {
            *arg1 = 0xffffffff;
        }
        fcn.0001470c(&iStackX_20);
    }
    return iVar3;
}


/* fcn.000285e0 @ 0x285e0 */

int64_t fcn.000285e0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t *in_stack_00000028;
    
    if (*in_stack_00000028 == 0) {
        *arg4 = 0;
    }
    iVar1 = (**(*0x37058 + 0x48))();
    if ((iVar1 < 0) && (iVar1 == -0x7ffffffffffffffb)) {
        if (*in_stack_00000028 != 0) {
            (**(*0x37050 + 0x48))();
        }
        iVar1 = fcn.000150a0(*arg4);
        *in_stack_00000028 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x37058 + 0x48))(arg1,arg2,arg3,arg4,iVar1);
        }
    }
    return iVar1;
}


/* fcn.000283b0 @ 0x283b0 */

int64_t fcn.000283b0(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.000150a0(arg1);
    if (iVar1 != 0) {
        (**(*0x37050 + 0x168))(iVar1,arg1,0);
    }
    return iVar1;
}


/* fcn.00022884 @ 0x22884 */

int64_t fcn.00022884(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t *puStackX_18;
    ulong uStackX_20;
    int64_t var_30h;
    int64_t var_38h;
    uchar auStack_38 [16];
    int64_t var_20h;
    
    uStackX_20 = 0;
    puStackX_18 = NULL;
    fcn.0001c360(auStack_38,0x1e,0x35510,arg1 & 0xffffU);
    iVar1 = (**(*0x37058 + 0x48))(auStack_38,0x33ce0,0,&uStackX_20,puStackX_18);
    if ((iVar1 == -0x7ffffffffffffffb) && (iVar1 = (**(*0x37050 + 0x40))(4,uStackX_20,&puStackX_18), -1 < iVar1)) {
        iVar1 = (**(*0x37058 + 0x48))(auStack_38,0x33ce0,0,&uStackX_20,puStackX_18);
        if (-1 < iVar1) {
            iVar1 = fcn.00018888(arg1 & 0xffffU);
            if (arg2 == '\0') {
                *puStackX_18 = *puStackX_18 & 0xfffffffe;
                if (iVar1 != 0) {
                    *(iVar1 + 4) = *(iVar1 + 4) & 0xfffffffe;
                }
            }
            else {
                *puStackX_18 = *puStackX_18 | 1;
                if (iVar1 != 0) {
                    *(iVar1 + 4) = *(iVar1 + 4) | 1;
                }
            }
            iVar1 = (**(*0x37058 + 0x58))(auStack_38,0x33ce0,7,uStackX_20,puStackX_18);
        }
        if (puStackX_18 != NULL) {
            (**(*0x37050 + 0x48))();
        }
    }
    return iVar1;
}


/* fcn.000229c4 @ 0x229c4 */

void fcn.000229c4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint *puVar2;
    uint64_t uVar3;
    uint *puVar4;
    uint16_t *puVar5;
    uint64_t uVar6;
    uint *puStackX_8;
    uint *puStackX_18;
    
    puVar4 = *arg1;
    puStackX_8 = NULL;
    puStackX_18 = NULL;
    iVar1 = fcn.000285e0(0x35f30,0x34828,0,&puStackX_8);
    if (-1 < iVar1) {
        arg1 = *arg1;
        if (puVar4 < *arg2 + arg1) {
            do {
                puVar2 = puStackX_18;
                if (puStackX_8 != NULL) {
                    do {
                        uVar6 = 0;
                        uVar3 = *(puVar2 + 1) - 2 >> 1;
                        if (uVar3 != 0) {
                            puVar5 = puVar2 + 6;
                            do {
                                if ((*(puVar4 + 6) & 0xff) == (*puVar5 & 0xff)) {
                                    *puVar4 = *puVar2;
                                    puVar2 = puStackX_8;
                                    break;
                                }
                                uVar6 = uVar6 + 1;
                                puVar5 = puVar5 + 1;
                            } while (uVar6 < uVar3);
                        }
                        puVar2 = puVar2 + *(puVar2 + 1) + 4;
                    } while (puVar2 < puStackX_8);
                }
                puVar4 = puVar4 + *(puVar4 + 1) + 4;
            } while (puVar4 < *arg2 + arg1);
        }
        (**(*0x37050 + 0x48))(0);
    }
    return;
}


/* fcn.00021ecc @ 0x21ecc */

uint16_t fcn.00021ecc(int64_t arg1,uint32_t arg2)

{
    uint16_t uVar1;
    uint16_t uVar2;
    
    uVar2 = 0;
    if (arg1 != 0) {
        uVar1 = *arg1;
        while (uVar1 != 0) {
            if (uVar1 == arg2) {
                return uVar2;
            }
            uVar2 = uVar2 + 1;
            uVar1 = *(uVar2 * 7 + arg1);
        }
    }
    return 0xffff;
}


/* fcn.00021f7c @ 0x21f7c */

//WARNING: Removing unreachable block (ram,0x0002281b)
//WARNING: Removing unreachable block (ram,0x000221e5)
//WARNING: Removing unreachable block (ram,0x000221f2)
//WARNING: Removing unreachable block (ram,0x000221fa)
//WARNING: Removing unreachable block (ram,0x00022212)
//WARNING: Removing unreachable block (ram,0x00022217)
//WARNING: Removing unreachable block (ram,0x00022227)
//WARNING: Removing unreachable block (ram,0x0002223a)
//WARNING: Removing unreachable block (ram,0x0002224b)
//WARNING: Removing unreachable block (ram,0x000220ec)
//WARNING: Removing unreachable block (ram,0x000220f5)
//WARNING: Removing unreachable block (ram,0x00022100)
//WARNING: Removing unreachable block (ram,0x00022116)
//WARNING: Removing unreachable block (ram,0x0002212f)
//WARNING: Removing unreachable block (ram,0x00022142)
//WARNING: Removing unreachable block (ram,0x000221de)
//WARNING: Removing unreachable block (ram,0x0002214b)
//WARNING: Removing unreachable block (ram,0x00022161)
//WARNING: Removing unreachable block (ram,0x00022166)
//WARNING: Removing unreachable block (ram,0x00022180)
//WARNING: Removing unreachable block (ram,0x00022197)
//WARNING: Removing unreachable block (ram,0x000221b8)
//WARNING: Removing unreachable block (ram,0x000221a8)
//WARNING: Removing unreachable block (ram,0x000221c3)
//WARNING: Removing unreachable block (ram,0x000221dc)
//WARNING: Removing unreachable block (ram,0x00022252)
//WARNING: Removing unreachable block (ram,0x0002216f)
//WARNING: Removing unreachable block (ram,0x0002217b)
//WARNING: Removing unreachable block (ram,0x0002225a)
//WARNING: Removing unreachable block (ram,0x0002225d)
//WARNING: Removing unreachable block (ram,0x00022262)
//WARNING: Removing unreachable block (ram,0x00022281)
//WARNING: Removing unreachable block (ram,0x00022286)
//WARNING: Removing unreachable block (ram,0x00022293)
//WARNING: Removing unreachable block (ram,0x00022268)
//WARNING: Removing unreachable block (ram,0x0002226d)
//WARNING: Removing unreachable block (ram,0x0002227c)
//WARNING: Removing unreachable block (ram,0x000222c6)
//WARNING: Removing unreachable block (ram,0x000223c1)
//WARNING: Removing unreachable block (ram,0x000223c9)
//WARNING: Removing unreachable block (ram,0x000223e5)
//WARNING: Removing unreachable block (ram,0x000223f3)
//WARNING: Removing unreachable block (ram,0x000223ff)
//WARNING: Removing unreachable block (ram,0x00022404)
//WARNING: Removing unreachable block (ram,0x0002241c)
//WARNING: Removing unreachable block (ram,0x00022421)
//WARNING: Removing unreachable block (ram,0x00022430)
//WARNING: Removing unreachable block (ram,0x00022443)
//WARNING: Removing unreachable block (ram,0x00022452)
//WARNING: Removing unreachable block (ram,0x00022461)
//WARNING: Removing unreachable block (ram,0x00022473)
//WARNING: Removing unreachable block (ram,0x00022475)
//WARNING: Removing unreachable block (ram,0x000222d3)
//WARNING: Removing unreachable block (ram,0x000222e3)
//WARNING: Removing unreachable block (ram,0x000222f9)
//WARNING: Removing unreachable block (ram,0x00022315)
//WARNING: Removing unreachable block (ram,0x0002232b)
//WARNING: Removing unreachable block (ram,0x0002232f)
//WARNING: Removing unreachable block (ram,0x00022346)
//WARNING: Removing unreachable block (ram,0x00022356)
//WARNING: Removing unreachable block (ram,0x00022359)
//WARNING: Removing unreachable block (ram,0x0002237a)
//WARNING: Removing unreachable block (ram,0x0002236a)
//WARNING: Removing unreachable block (ram,0x00022385)
//WARNING: Removing unreachable block (ram,0x0002239e)
//WARNING: Removing unreachable block (ram,0x00022338)
//WARNING: Removing unreachable block (ram,0x00022344)
//WARNING: Removing unreachable block (ram,0x000223a6)
//WARNING: Removing unreachable block (ram,0x000223ad)
//WARNING: Removing unreachable block (ram,0x000223ba)
//WARNING: Removing unreachable block (ram,0x0002247c)
//WARNING: Removing unreachable block (ram,0x0002248d)
//WARNING: Removing unreachable block (ram,0x00022490)
//WARNING: Removing unreachable block (ram,0x0002249d)
//WARNING: Removing unreachable block (ram,0x000224b4)
//WARNING: Removing unreachable block (ram,0x000224cc)
//WARNING: Removing unreachable block (ram,0x000224d9)
//WARNING: Removing unreachable block (ram,0x000224ee)
//WARNING: Removing unreachable block (ram,0x00022500)
//WARNING: Removing unreachable block (ram,0x00022513)
//WARNING: Removing unreachable block (ram,0x00022523)
//WARNING: Removing unreachable block (ram,0x00022537)
//WARNING: Removing unreachable block (ram,0x0002254a)
//WARNING: Removing unreachable block (ram,0x00022546)
//WARNING: Removing unreachable block (ram,0x0002254c)
//WARNING: Removing unreachable block (ram,0x00022529)
//WARNING: Removing unreachable block (ram,0x00022535)
//WARNING: Removing unreachable block (ram,0x00022551)
//WARNING: Removing unreachable block (ram,0x00022558)
//WARNING: Removing unreachable block (ram,0x00022572)
//WARNING: Removing unreachable block (ram,0x000224de)
//WARNING: Removing unreachable block (ram,0x000224bf)
//WARNING: Removing unreachable block (ram,0x000224c7)
//WARNING: Removing unreachable block (ram,0x00022574)
//WARNING: Removing unreachable block (ram,0x0002257c)
//WARNING: Removing unreachable block (ram,0x00022582)
//WARNING: Removing unreachable block (ram,0x000225bb)
//WARNING: Removing unreachable block (ram,0x000225d7)
//WARNING: Removing unreachable block (ram,0x00022601)
//WARNING: Removing unreachable block (ram,0x00022607)
//WARNING: Removing unreachable block (ram,0x00022617)
//WARNING: Removing unreachable block (ram,0x00022630)
//WARNING: Removing unreachable block (ram,0x0002263d)
//WARNING: Removing unreachable block (ram,0x0002264b)
//WARNING: Removing unreachable block (ram,0x00022654)
//WARNING: Removing unreachable block (ram,0x00022657)
//WARNING: Removing unreachable block (ram,0x00022663)
//WARNING: Removing unreachable block (ram,0x00022676)
//WARNING: Removing unreachable block (ram,0x00022681)
//WARNING: Removing unreachable block (ram,0x000226bc)
//WARNING: Removing unreachable block (ram,0x000226d6)
//WARNING: Removing unreachable block (ram,0x000226f5)
//WARNING: Removing unreachable block (ram,0x00022739)
//WARNING: Removing unreachable block (ram,0x0002273c)
//WARNING: Removing unreachable block (ram,0x00022746)
//WARNING: Removing unreachable block (ram,0x0002274b)
//WARNING: Removing unreachable block (ram,0x00022754)
//WARNING: Removing unreachable block (ram,0x0002275d)
//WARNING: Removing unreachable block (ram,0x00022763)
//WARNING: Removing unreachable block (ram,0x00022779)
//WARNING: Removing unreachable block (ram,0x0002278c)
//WARNING: Removing unreachable block (ram,0x00022799)
//WARNING: Removing unreachable block (ram,0x00022807)
//WARNING: Removing unreachable block (ram,0x00022811)
//WARNING: Removing unreachable block (ram,0x00022828)
//WARNING: Removing unreachable block (ram,0x0002282d)
//WARNING: Removing unreachable block (ram,0x0002229d)
//WARNING: Removing unreachable block (ram,0x000222aa)
//WARNING: Removing unreachable block (ram,0x000222af)
//WARNING: Removing unreachable block (ram,0x000222bc)
//WARNING: Removing unreachable block (ram,0x00022852)

void fcn.00021f7c(void)

{
    int64_t iVar1;
    uchar auStackX_10 [8];
    int64_t iStackX_18;
    int64_t iStackX_20;
    int16_t var_d0h;
    int64_t var_d8h;
    int64_t var_e0h;
    int64_t var_e8h;
    int64_t aiStack_178 [2];
    ulong uStack_168;
    ulong uStack_160;
    int64_t iStack_158;
    
    uStack_160 = 0;
    iStackX_18 = 0;
    iStackX_20 = 0;
    aiStack_178[0] = 0;
    uStack_168 = 0;
    if (((*0x36f90 == '\0') && (iVar1 = (**(*0x37050 + 0x140))(0x34828,0), -1 < iVar1)) && (*0x36fa8 != '\0')) {
        iVar1 = fcn.000285e0(0x35f58,0x34828,0,&iStackX_20);
        if ((-1 < iVar1) || (iVar1 = fcn.000285e0(0x35f10,0x34828,0,&iStackX_20), iStack_158 = 0, -1 < iVar1)) {
            iStack_158 = iStackX_20;
        }
        iVar1 = fcn.000285e0(0x35f30,0x34828,0,aiStack_178);
        if (-1 < iVar1) {
            iStack_158 = iStack_158 + aiStack_178[0];
        }
        iStack_158 = iStack_158 + *0x43178;
        iVar1 = fcn.000283b0(iStack_158 * 2);
        fcn.000285e0(0x35f88,0x34828,auStackX_10,&uStack_160);
        if (iStackX_18 != 0) {
            (**(*0x37050 + 0x48))();
        }
        if (iVar1 != 0) {
            (**(*0x37050 + 0x48))(iVar1);
        }
    }
    return;
}


/* fcn.00027c48 @ 0x27c48 */

int64_t fcn.00027c48(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t noname_0;
    int64_t iStack_28;
    uchar auStack_20 [8];
    
    iStack_28 = 0;
    if (((*0x37030 == 0) && (iVar1 = (**(*0x37050 + 0x140))(0x34b48,0,0x37030), iVar1 < 0)) ||
       ((*0x37038 == 0 && (iVar1 = (**(*0x37050 + 0x140))(0x34b38,0,0x37038), iVar1 < 0)))) {
        iVar2 = -0x7ffffffffffffff2;
    }
    else {
        iVar2 = (**(*0x37030 + 8))(*0x37030,&iStack_28,0,1,arg3,arg4);
        iVar1 = iStack_28;
        if (iVar2 == -0x7ffffffffffffffb) {
            noname_0 = fcn.000150a0(iStack_28 + 0x70);
            iVar1 = fcn.0001c360(noname_0,iVar1 + 0x70,0x36930,0x34b60);
            iVar2 = (**(*0x37030 + 8))(*0x37030,&iStack_28,noname_0 + iVar1 * 2,1,arg3,arg4);
            if (-1 < iVar2) {
                iStack_28 = *arg1;
                iVar2 = (**(*0x37038 + 0x20))(*0x37038,noname_0,arg2,arg1,auStack_20);
                *arg1 = iStack_28;
            }
            (**(*0x37050 + 0x48))(noname_0);
        }
    }
    return iVar2;
}


/* fcn.00027dcc @ 0x27dcc */

int64_t fcn.00027dcc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
    if (((*0x37030 == 0) && (iVar3 = (**(*0x37050 + 0x140))(0x34b48,0,0x37030), iVar3 < 0)) ||
       ((*0x37038 == 0 && (iVar3 = (**(*0x37050 + 0x140))(0x34b38,0,0x37038), iVar3 < 0)))) {
        iVar3 = -0x7ffffffffffffff2;
    }
    else {
        iVar3 = (**(*0x37030 + 8))(*0x37030,&uStack_48,0,1,arg3,arg4);
        if (iVar3 == -0x7ffffffffffffffb) {
            iVar3 = uStack_48 + 0x70;
            arg1_00 = fcn.000150a0(iVar3);
            iVar3 = fcn.0001c360(arg1_00,iVar3,0x36930,0x34b60);
            iVar3 = (**(*0x37030 + 8))(*0x37030,&uStack_48,arg1_00 + iVar3 * 2,1,arg3,arg4);
            if (iVar3 < 0) {
                (**(*0x37050 + 0x48))();
            }
            else {
                fcn.00027774(arg1_00);
                iVar3 = (**(*0x37038 + 0x18))(*0x37038,arg1_00,arg2,arg1,&piStack_40,auStack_38);
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
                    iVar3 = (**(*0x37030 + 8))(*0x37030,&uStack_48,piStack_40,0,arg3,arg4);
                    (**(*0x37050 + 0x48))(piStack_40);
                }
                (**(*0x37050 + 0x48))(arg1_00);
            }
        }
    }
    return iVar3;
}


/* fcn.000235f8 @ 0x235f8 */

ulong fcn.000235f8(void)

{
    ulong uVar1;
    char16_t acStack_28 [4];
    char16_t acStack_20 [4];
    char16_t acStack_18 [4];
    char16_t cStack_10;
    
    cStack_10 = str._RecoveryBCD[0xc];
    acStack_28 = str._RecoveryBCD._0_8_;
    acStack_20 = str._RecoveryBCD._8_8_;
    acStack_18 = str._RecoveryBCD._16_8_;
    if (*0x36fe0 == '\0') {
        uVar1 = 0x8000000000000003;
    }
    else {
        uVar1 = fcn.000197dc(0x43020,acStack_28,0x1a,0);
    }
    return uVar1;
}


/* fcn.000236d8 @ 0x236d8 */

uint64_t fcn.000236d8(void)

{
    int16_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int16_t *piVar4;
    int16_t iVar5;
    int64_t *piVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    
    piVar2 = fcn.00027614(*(*(*0x43098 + 8) + 0xc));
    if (piVar2 != NULL) {
        iVar3 = (**(*0x43098 + 0x18))(*0x43098,**(*0x43098 + 8),1,(*(*0x43098 + 8))[3],piVar2);
        if (((-1 < iVar3) && (*piVar2 == 0x5452415020494645)) &&
           (iVar3 = fcn.00027614(*(*(*0x43098 + 8) + 0xc)), iVar3 != 0)) {
            uVar7 = 0x8000000000000003;
            uVar9 = 0;
            if (piVar2[10] != 0) {
                do {
                    uVar8 = uVar9;
                    if ((uVar9 & 3) == 0) {
                        (**(*0x43098 + 0x18))
                                  (*0x43098,**(*0x43098 + 8),(uVar9 >> 2) + piVar2[9],(*(*0x43098 + 8))[3],iVar3);
                    }
                    piVar6 = ((uVar8 & 3) << 7) + iVar3;
                    if ((*piVar6 == *0x34848) && (piVar6[1] == *0x34850)) {
                        *0x43020 = 0x2a0104;
                        *0x43024 = uVar8 + 1;
                        *0x43028 = piVar6[4];
                        *0x43030 = (piVar6[5] - piVar6[4]) + 1;
                        (**(*0x36d88 + 0x160))(0x43038,piVar6 + 2,0x10);
                        *0x43048 = 0x4040202;
                        iVar5 = 0x5c;
                        piVar4 = 0x4304e;
                        do {
                            *piVar4 = iVar5;
                            piVar1 = piVar4 + 1;
                            iVar5 = piVar4[-0x678e];
                            piVar4 = piVar1;
                        } while (iVar5 != 0);
                        *piVar1 = 0;
                        *0x4304c = 0x46;
                        *0x43090 = 0x4ff7f;
                        *0x36fe0 = 1;
                        uVar7 = 0;
                        break;
                    }
                    uVar9 = uVar8 + 1;
                } while (uVar8 + 1 < *(piVar2 + 10));
            }
            (**(*0x36d88 + 0x48))(piVar2);
            (**(*0x36d88 + 0x48))(iVar3);
            return uVar7;
        }
        (**(*0x36d88 + 0x48))(piVar2);
    }
    return 0x8000000000000003;
}


/* fcn.000262a8 @ 0x262a8 */

int64_t fcn.000262a8(void)

{
    if (*0x37020 == 0) {
        (**(*0x36d88 + 0x140))(0x33da0,0,0x37020);
    }
    return *0x37020;
}


/* fcn.00030c34 @ 0x30c34 */

//WARNING: Variable defined which should be unmapped: var_1ch

uint64_t fcn.00030c34(int64_t arg1,uint32_t arg2,int64_t arg3)

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
            iVar8 = 0x34c90;
            do {
                iVar3 = fcn.00027fcc(arg1,iVar8,0x10);
                if (iVar3 == 0) break;
                uVar2 = uVar2 + 1;
                iVar8 = iVar8 + 0x10;
            } while (uVar2 < 9);
            if ((((8 < uVar2) || (uVar1 < 0x2d)) || (0x30000 < uVar1)) ||
               ((*(arg1 + 0x14) != 0 || (uVar2 = *(arg1 + 0x18), (uVar5 - 0x1c) % uVar2 != 0)))) {
                return 0x8000000000000002;
            }
            if ((*arg1 == *0x33f20) && (*(arg1 + 8) == *0x33f28)) {
                fcn.00010cdc();
                iVar8 = fcn.00033638(arg1 + 0x2c,uVar2 - 0x10);
                uVar6 = ~-(iVar8 != 0) & 0x8000000000000002;
                fcn.00010cdc();
                if (uVar6 < 0) {
                    return uVar6;
                }
            }
            for (uVar6 = 0x1c; uVar6 < uVar5; uVar6 = uVar6 + uVar2) {
                iVar7 = iVar7 + 1;
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


/* fcn.00024220 @ 0x24220 */

void fcn.00024220(void)

{
    uchar uVar1;
    uchar auStackX_8 [16];
    int64_t var_bp_20h;
    int64_t var_30h;
    
    uVar1 = *0x36ee8;
    var_bp_20h = 6;
    *0x36ee8 = 1;
    (**(*0x37058 + 0x48))(L"SecureVarPresent",0x34a10,0,&var_bp_20h,0x37008);
    fcn.00027dcc(6,0x37008,0x34a10,0x36218);
    var_bp_20h = 1;
    (**(*0x37058 + 0x48))(L"SetupMode",0x33ce0,0,&var_bp_20h,auStackX_8);
    fcn.00027dcc(var_bp_20h,auStackX_8,0x33ce0,0x36240);
    var_bp_20h = 1;
    (**(*0x37058 + 0x48))(L"SecureBoot",0x33ce0,0,&var_bp_20h,auStackX_8);
    fcn.00027dcc(var_bp_20h,auStackX_8,0x33ce0,0x358f8);
    var_bp_20h = 1;
    (**(*0x37058 + 0x48))(L"VendorKeys",0x33ce0,0,&var_bp_20h,auStackX_8);
    fcn.00027dcc(var_bp_20h,auStackX_8,0x33ce0,0x36258);
    var_bp_20h = 1;
    (**(*0x37058 + 0x48))(L"VendorKeysNv",0x33f40,0,&var_bp_20h,auStackX_8);
    var_bp_20h = 1;
    (**(*0x37058 + 0x48))(L"AuditMode",0x33ce0,0,&var_bp_20h,auStackX_8);
    fcn.00027dcc(var_bp_20h,auStackX_8,0x33ce0,0x36290);
    var_bp_20h = 1;
    (**(*0x37058 + 0x48))(L"DeployedMode",0x33ce0,0,&var_bp_20h,auStackX_8);
    fcn.00027dcc(var_bp_20h,auStackX_8,0x33ce0,0x362a8);
    var_bp_20h = 1;
    (**(*0x37058 + 0x48))(L"DeploymentModeNv",0x33df0,0,&var_bp_20h,auStackX_8);
    *0x36ee8 = uVar1;
    return;
}


/* fcn.00024844 @ 0x24844 */

void fcn.00024844(void)

{
    int64_t iVar1;
    ulong auStackX_8 [4];
    
    if (*(*0x36d80 + 0x30) == 0) {
        fcn.000247c8(0,0);
    }
    else {
        iVar1 = (**(*0x36d88 + 0x170))(0x200,8,0x15048,0,0x33fc0,auStackX_8);
        if (-1 < iVar1) {
            (**(*0x36d88 + 0x68))(auStackX_8[0]);
            (**(*0x36d88 + 0x70))(auStackX_8[0]);
        }
    }
    return;
}


/* fcn.000247c8 @ 0x247c8 */

void fcn.000247c8(void)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    if (*0x37018 != '\x01') {
        if (*(*0x36d80 + 0x30) == 0) {
            iVar1 = (**(*0x36d88 + 0x50))(0x200,8,fcn.000247c8,0,auStackX_18);
            if (iVar1 == 0) {
                (**(*0x36d88 + 0xa8))(0x33ee0,auStackX_18[0],0x3fa90);
            }
        }
        else {
            fcn.00024844();
            *0x37018 = '\x01';
        }
    }
    return;
}


/* fcn.00024f0c @ 0x24f0c */

char * fcn.00024f0c(int64_t arg1,int64_t arg2)

{
    char cVar1;
    char *pcVar2;
    char cVar3;
    uchar auStackX_8 [8];
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    auStackX_8[0] = arg1;
    (**(*0x37050 + 0x140))(0x34a60,0,&iStackX_18);
    (**(iStackX_18 + 0x40))(1,1,&iStackX_20,auStackX_8);
    pcVar2 = *(iStackX_20 + 1) + iStackX_20;
    cVar1 = arg2 + -1;
    while (cVar1 != '\0') {
        cVar3 = cVar1 + -1;
        if (*pcVar2 != '\0') {
            cVar3 = cVar1;
        }
        pcVar2 = pcVar2 + 1;
        cVar1 = cVar3;
    }
    (**(*0x37050 + 0x48))();
    return pcVar2;
}


/* fcn.000254b4 @ 0x254b4 */

void fcn.000254b4(uint32_t arg1)

{
    uint8_t *puVar1;
    int16_t iVar2;
    uint16_t uVar3;
    uint in_register_0000000c;
    int64_t *piVar4;
    uint64_t uVar5;
    uint32_t arg2;
    uint16_t *puVar6;
    int64_t arg1_00;
    int64_t iVar7;
    uint16_t uVar8;
    uint32_t *puVar9;
    
    piVar4 = CONCAT44(in_register_0000000c,arg1);
    iVar7 = *piVar4;
    if ((((iVar7 != 0) && (piVar4[1] != 0)) && (puVar9 = piVar4[2], puVar9 != NULL)) && (7 < piVar4[3])) {
        uVar8 = 0;
        arg1_00 = *0x36fc0;
        if (piVar4[4] != 0) {
            iVar7 = iVar7 + 0x144;
            arg1_00 = *0x36fd8;
        }
        if (piVar4[3] != 0) {
            do {
                arg2 = *puVar9;
                iVar2 = fcn.00021ecc(arg1_00,arg2);
                if (iVar2 == -1) {
                    iVar2 = puVar9[1];
                }
                else {
                    uVar3 = fcn.00021ecc(arg1_00,arg2);
                    uVar5 = 0;
                    if ((puVar9[1] - 6 & 0xfffffffffffffffe) != 0) {
                        puVar6 = puVar9 + 6;
                        do {
                            puVar1 = (uVar3 + uVar3 * 8) * 2 + iVar7 + uVar5;
                            uVar5 = uVar5 + 1;
                            *puVar6 = *puVar1;
                            puVar6 = puVar6 + 1;
                        } while (uVar5 < puVar9[1] - 6 >> 1);
                    }
                    iVar2 = puVar9[1];
                    puVar9 = puVar9 + uVar5 * 2 + 6;
                }
                uVar8 = uVar8 + iVar2;
            } while (uVar8 < piVar4[3]);
        }
    }
    return;
}


/* fcn.00025770 @ 0x25770 */

int64_t fcn.00025770(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    int64_t iVar3;
    char *pcVar4;
    char *pcVar5;
    int64_t iStackX_8;
    int64_t iStackX_10;
    char *pcStackX_18;
    char *pcStackX_20;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    uint32_t var_48h;
    
    iStackX_8 = arg1;
    iVar3 = (**(*0x37050 + 0x98))(arg1,0x34010,&iStackX_10);
    if (((-1 < iVar3) && (*(*(iStackX_10 + 8) + 6) != '\0')) &&
       (iVar3 = (**(*0x37050 + 0x98))(iStackX_8,0x33e70,&pcStackX_20), -1 < iVar3)) {
        pcVar5 = pcStackX_20;
        do {
            pcVar4 = pcVar5;
            if (*(*(iStackX_10 + 8) + 6) == '\0') break;
            pcStackX_18 = pcVar5;
            if (pcVar5 == NULL) {
code_r0x000257ef:
                pcVar4 = NULL;
            }
            else {
                cVar1 = *pcVar5;
                pcVar4 = NULL;
                pcVar2 = pcVar5;
                while (cVar1 != '\x7f') {
                    cVar1 = pcVar2[pcVar2[3] * 0x100 + pcVar2[2]];
                    pcVar4 = pcVar2;
                    pcVar2 = pcVar2 + pcVar2[3] * 0x100 + pcVar2[2];
                }
                iVar3 = pcVar4 - pcVar5;
                if (iVar3 == 0) goto code_r0x000257ef;
                pcVar4 = fcn.000150a0(iVar3 + 4);
                fcn.00033bd0(pcVar4,pcVar5,iVar3);
                pcVar5 = pcVar4 + iVar3;
                pcVar5[0] = '\x7f';
                pcVar5[1] = -1;
                pcVar5[2] = '\x04';
                pcVar5[3] = '\0';
            }
            if (pcStackX_18 != pcStackX_20) {
                (**(*0x37050 + 0x48))(pcStackX_18);
            }
            if (pcVar4 == NULL) goto code_r0x000258cc;
            pcStackX_18 = pcVar4;
            iVar3 = (**(*0x37050 + 0xb8))(0x34010,&pcStackX_18,&iStackX_8);
            if (iVar3 < 0) break;
            iVar3 = (**(*0x37050 + 0x98))(iStackX_8,0x34010,&iStackX_10);
            pcVar5 = pcVar4;
        } while (-1 < iVar3);
        if ((pcVar4 != NULL) && (pcVar4 != pcStackX_20)) {
            (**(*0x37050 + 0x48))(pcVar4);
        }
code_r0x000258cc:
        if (*(*(iStackX_10 + 8) + 6) != '\0') {
            iStackX_8 = arg1;
        }
    }
    return iStackX_8;
}


/* fcn.0002819c @ 0x2819c */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

char fcn.0002819c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    char cVar5;
    uint64_t uVar6;
    int32_t var_48h;
    int64_t iStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    uint64_t uStack_50;
    int64_t aiStack_48 [2];
    int64_t var_30h;
    uint32_t var_28h;
    int64_t var_20h;
    uint32_t var_bp_18h;
    int64_t var_10h;
    
    cVar5 = '\0';
    iVar2 = (**(*0x37050 + 0x130))(arg1,aiStack_48,&uStack_50);
    if (iVar2 < 0) {
        cVar5 = '\0';
    }
    else {
        if (arg4 != 0) {
            *arg4 = 0;
        }
        uVar4 = 0;
        do {
            if (uStack_50 <= uVar4) break;
            uVar1 = *(aiStack_48[0] + uVar4 * 8);
            iVar2 = fcn.00027fcc(uVar1,0x34c40,0x10);
            if ((iVar2 != 0) && (iVar2 = (**(*0x37050 + 0x128))(arg1,uVar1,&iStack_58,&uStack_60), -1 < iVar2)) {
                uVar6 = 0;
                if (uStack_60 != 0) {
                    iVar2 = 0;
                    do {
                        if (*(iVar2 + 0x10 + iStack_58) == (-(arg2 != 0) & 0xfffffff8) + 0x10) {
                            if (arg2 != 0) {
                                if (*(iVar2 + 8 + iStack_58) != arg2) goto code_r0x0002834a;
                                if (arg4 != 0) {
                                    *arg4 = 1;
                                }
                            }
                            iVar3 = (**(*0x37050 + 0x98))(*(iVar2 + iStack_58),0x34c60,&iStack_68);
                            if (((-1 < iVar3) &&
                                ((iVar3 = (**(iStack_68 + 8))(iStack_68,arg1,arg2,0x35604,arg3), -1 < iVar3 ||
                                 (iVar3 = (**(iStack_68 + 8))(iStack_68,arg1,arg2,0x36958,arg3), -1 < iVar3)))) ||
                               ((iVar3 = (**(*0x37050 + 0x98))(*(iVar2 + iStack_58),0x34c18,&iStack_68), -1 < iVar3
                                && (iVar3 = (**(iStack_68 + 8))(iStack_68,arg1,arg2,0x355b8,arg3), -1 < iVar3)))) {
                                cVar5 = '\x01';
                                break;
                            }
                        }
code_r0x0002834a:
                        uVar6 = uVar6 + 1;
                        iVar2 = iVar2 + 0x18;
                    } while (uVar6 < uStack_60);
                }
                if (uStack_60 != 0) {
                    (**(*0x37050 + 0x48))(iStack_58);
                }
            }
            uVar4 = uVar4 + 1;
        } while (cVar5 == '\0');
        if (uStack_50 != 0) {
            (**(*0x37050 + 0x48))(aiStack_48[0]);
        }
    }
    return cVar5;
}


/* fcn.000258ec @ 0x258ec */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.000258ec(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    char cVar2;
    int64_t iVar3;
    int64_t iVar4;
    char *pcVar5;
    int16_t *piVar6;
    char *pcVar7;
    uint auStackX_18 [2];
    char *pcStackX_20;
    uint32_t var_40h;
    int64_t var_48h;
    int64_t iStack_48;
    char *pcStack_40;
    int64_t aiStack_38 [2];
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    iVar3 = fcn.00025770(arg1);
    auStackX_18[0] = 0x4ff7f;
    pcVar5 = NULL;
    cVar2 = fcn.0002819c(iVar3,0,&iStack_48,0);
    if (cVar2 == '\0') {
        iVar4 = (**(*0x37050 + 0x98))(iVar3,0x34bf8,&pcStackX_20);
        if (-1 < iVar4) {
            if (pcStackX_20 != NULL) {
                pcVar5 = fcn.00028598(pcStackX_20);
            }
            uVar1 = auStackX_18[0];
            pcStackX_20 = pcVar5;
            do {
                iVar4 = *0x37050;
                auStackX_18[0] = CONCAT31(auStackX_18[0]._1_3_,1);
                cVar2 = '\0';
                pcStack_40 = pcStackX_20;
                if ((pcStackX_20 == NULL) || (pcVar5 = pcStackX_20, *pcStackX_20 == '\x7f')) break;
                do {
                    pcVar7 = pcVar5;
                    pcVar5 = pcVar7 + (pcVar7[2] + pcVar7[3] * 0x100);
                } while (pcVar7[pcVar7[2] + pcVar7[3] * 0x100] != '\x7f');
                if (pcVar7 == NULL) break;
                *pcVar7 = uVar1;
                iVar4 = (**(iVar4 + 0xb8))(0x34bf8,&pcStack_40,aiStack_38);
                if (iVar4 < 0) break;
                cVar2 = fcn.0002819c(aiStack_38[0],iVar3,&iStack_48,auStackX_18);
            } while (auStackX_18[0] == '\0');
            (**(*0x37050 + 0x48))(pcStackX_20);
            if (cVar2 != '\0') goto code_r0x00025a09;
        }
        iVar3 = 0;
    }
    else {
code_r0x00025a09:
        iVar3 = fcn.0001c360(arg2,100,0x36450,iStack_48);
        if (iVar3 != 0) {
            piVar6 = arg2 + -2 + iVar3 * 2;
            do {
                if (*piVar6 != 0x20) break;
                piVar6 = piVar6 + -1;
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
        }
        *(arg2 + iVar3 * 2) = 0;
    }
    return iVar3;
}


/* fcn.00025a54 @ 0x25a54 */

ushort fcn.00025a54(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    char *pcVar3;
    char *pcVar4;
    uint32_t auStackX_10 [2];
    uint32_t auStackX_18 [2];
    char *pcStackX_20;
    int64_t aiStack_28 [2];
    
    iVar2 = (**(*0x37050 + 0x98))(arg1,0x33e70,&pcStackX_20);
    if (-1 < iVar2) {
        pcVar3 = NULL;
        pcVar4 = NULL;
        for (; cVar1 = *pcStackX_20, cVar1 != '\x7f';
            pcStackX_20 = pcStackX_20 + pcStackX_20[3] * 0x100 + pcStackX_20[2]) {
            if (cVar1 == '\x01') {
                if (pcStackX_20[1] == '\x01') {
                    pcVar4 = pcStackX_20;
                }
            }
            else if (cVar1 == '\x03') {
                pcVar3 = pcStackX_20;
            }
        }
        iVar2 = (**(*0x37050 + 0x98))(arg1,0x33d20,aiStack_28);
        if ((-1 < iVar2) && (iVar2 = (**(aiStack_28[0] + 0x28))(aiStack_28[0],auStackX_10,auStackX_18), -1 < iVar2))
        {
            if ((pcVar3 != NULL) && (pcVar3[1] == '\x01')) {
                if ((pcVar4 != NULL) && (pcVar4[4] == '\x05')) {
                    auStackX_18[0] = auStackX_18[0] + 2;
                }
                return *((auStackX_10[0] + auStackX_18[0] * 2) * 2 + 0x364e8);
            }
            return auStackX_10[0];
        }
    }
    return 0xff;
}


/* fcn.00025b40 @ 0x25b40 */

ulong fcn.00025b40(int64_t arg1,int64_t arg2)

{
    int16_t *piVar1;
    int16_t iVar2;
    int64_t iVar3;
    char16_t *pcVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong uStackX_18;
    int64_t iStackX_20;
    int64_t var_60h;
    uint32_t var_68h;
    ulong uStack_118;
    int64_t iStack_110;
    int64_t aiStack_108 [2];
    int16_t iStack_f8;
    int16_t aiStack_f6 [103];
    
    iStack_110 = fcn.0001a4dc(arg1);
    iVar6 = 0;
    if (iStack_110 == 0) {
        return 0;
    }
    uStack_118 = 0;
    uStackX_18 = 0;
    aiStack_108[0] = iStack_110;
    iVar3 = (**(*0x37050 + 0xb8))(0x33f70,&iStack_110,&uStack_118);
    if (iVar3 < 0) {
        pcVar4 = L" (Drive not present)";
        iVar3 = iVar6;
        do {
            pcVar4 = pcVar4 + 1;
            iVar3 = iVar3 + 1;
        } while (*pcVar4 != L'\0');
        iVar2 = *arg2;
        piVar1 = arg2;
        while (iVar2 != 0) {
            piVar1 = piVar1 + 1;
            iVar6 = iVar6 + 1;
            iVar2 = *piVar1;
        }
        iVar6 = (iVar6 + iVar3) * 2 + 2;
        iVar3 = (**(*0x37050 + 0x40))(4,iVar6,&uStackX_18);
        if (iVar3 < 0) {
            return 0;
        }
        pcVar4 = L"%S (Drive not present)";
    }
    else {
        iStackX_20 = 0;
        iVar3 = (**(*0x37050 + 0xb8))(0x34010,aiStack_108,&iStackX_20);
        if ((iVar3 < 0) || (iVar3 = fcn.00025770(iStackX_20), iVar3 == iStackX_20)) {
            return 0;
        }
        if (iVar3 == 0) {
            iVar5 = iVar6;
        }
        else {
            iVar5 = fcn.000258ec(iVar3,&iStack_f8);
        }
        piVar1 = &iStack_f8;
        iVar7 = iVar6;
        while (iStack_f8 != 0) {
            piVar1 = piVar1 + 1;
            iVar7 = iVar7 + 1;
            iStack_f8 = *piVar1;
        }
        iVar2 = *arg2;
        piVar1 = arg2;
        while (iVar2 != 0) {
            piVar1 = piVar1 + 1;
            iVar6 = iVar6 + 1;
            iVar2 = *piVar1;
        }
        iVar6 = (iVar6 + iVar7) * 2 + 0x1e;
        iVar7 = (**(*0x37050 + 0x40))(4,iVar6,&uStackX_18);
        if (iVar7 < 0) {
            return 0;
        }
        iVar2 = fcn.00025a54(iVar3);
        if (iVar2 != 0xff) {
            fcn.0001c360(uStackX_18,iVar6,0x364b8,arg2);
            return uStackX_18;
        }
        if (iVar5 != 0) {
            fcn.0001c360(uStackX_18,iVar6,0x364d8,arg2);
            return uStackX_18;
        }
        pcVar4 = 0x36450;
    }
    fcn.0001c360(uStackX_18,iVar6,pcVar4,arg2);
    return uStackX_18;
}


/* fcn.000262e4 @ 0x262e4 */

ulong fcn.000262e4(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    ulong in_stack_00000028;
    
    if ((arg1 & 0xff) - 1 < 3) {
        if (*0x37028 != NULL) {
code_r0x0002635c:
            uVar2 = (***0x37028)(arg1 & 0xffffffff,arg2 & 0xffffffff,0,arg3,in_stack_00000028);
            return uVar2;
        }
        if ((*0x36d88 != 0) && (*(*0x36d88 + 0x140) != NULL)) {
            iVar1 = (**(*0x36d88 + 0x140))(0x33d00,0,0x37028);
            if (iVar1 < 0) {
                *0x37028 = NULL;
            }
            if (*0x37028 != NULL) goto code_r0x0002635c;
        }
    }
    return 0x8000000000000003;
}


/* fcn.00027330 @ 0x27330 */

uint64_t fcn.00027330(uint32_t arg1,int64_t arg2)

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


/* fcn.000271dc @ 0x271dc */

void fcn.000271dc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00026474(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00026440 @ 0x26440 */

uchar * fcn.00026440(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00027200 @ 0x27200 */

bool fcn.00027200(uint32_t arg1)

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


/* fcn.000276f8 @ 0x276f8 */

//WARNING: Removing unreachable block (ram,0x0002772e)

int64_t fcn.000276f8(void)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong auStackX_10 [3];
    
    if (*0x37040 == 0) {
        auStackX_10[0] = 0;
        iVar1 = fcn.000285e0(0x355e8,0x34b18,0,auStackX_10);
        iVar2 = 0x35604;
        if (-1 < iVar1) {
            iVar2 = *0x37040;
        }
        *0x37040 = iVar2;
    }
    return *0x37040;
}


/* fcn.00027974 @ 0x27974 */

ulong fcn.00027974(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iStackX_8;
    
    iStackX_8 = 0;
    if ((arg1 != 0) &&
       (((*0x37048 != 0 || (iVar1 = (**(*0x37050 + 0x140))(0x34b28,0,0x37048), -1 < iVar1)) &&
        (iVar1 = (**(*0x37048 + 0x18))(*0x37048,arg1,0,&iStackX_8), iVar1 == -0x7ffffffffffffffb)))) {
        uVar2 = fcn.000150a0(iStackX_8);
        iVar1 = (**(*0x37048 + 0x18))(*0x37048,arg1,uVar2,&iStackX_8);
        if (-1 < iVar1) {
            return uVar2;
        }
        (**(*0x37050 + 0x48))(uVar2);
    }
    return 0;
}


/* fcn.00027854 @ 0x27854 */

int64_t fcn.00027854(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
                        if (*pcVar4 == '\0') goto code_r0x000278e0;
                        if (*pcVar4 == ';') break;
                        pcVar7 = pcVar7 + 1;
                        pcVar4 = pcVar4 + 1;
                        cVar2 = *pcVar7;
                    } while (cVar2 != '\0');
                }
                for (; (*pcVar4 != '\0' && (*pcVar4 != ';')); pcVar4 = pcVar4 + 1) {
                }
code_r0x000278e0:
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
                arg1_00 = fcn.000150a0(arg3_00 + 1);
                if (arg1_00 == 0) {
                    return 0;
                }
                fcn.00033bd0(arg1_00,arg2_00,arg3_00);
                *(arg3_00 + arg1_00) = 0;
                return arg1_00;
            }
            piVar8 = piVar8 + 1;
            pcVar5 = *piVar8;
        } while (pcVar5 != NULL);
    }
    return 0;
}


/* fcn.00027a34 @ 0x27a34 */

int64_t fcn.00027a34(uint32_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    char *pcVar4;
    char *pcVar5;
    
    iVar2 = *0x37048;
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


/* fcn.00027774 @ 0x27774 */

void fcn.00027774(int64_t arg1)

{
    int64_t iVar1;
    int16_t *piVar2;
    int64_t iVar3;
    ulong in_RDX;
    int64_t iVar4;
    int16_t iVar5;
    int64_t aiStackX_18 [2];
    
    iVar4 = 0;
    iVar1 = (**(*0x37050 + 0x40))(4,in_RDX,aiStackX_18);
    if (-1 < iVar1) {
        iVar5 = *arg1;
        iVar1 = iVar4;
        if (iVar5 != 0) {
            piVar2 = arg1;
            do {
                if ((iVar5 == 0x26) && (iVar3 = fcn.00027fcc(piVar2 + 2,*0x36950,0xc), iVar3 == 0)) {
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
        fcn.00033bd0(arg1,aiStackX_18[0],iVar1 * 2 + 2);
        (**(*0x37050 + 0x48))(aiStackX_18[0]);
    }
    return;
}


/* fcn.0002809c @ 0x2809c */

ulong fcn.0002809c(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x37068 == '\0') {
        if (*0x37080 == 0) {
            if (*0x37078 != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x37050 + 0x140))(0x34c08,0,0x37080);
        }
    }
    else if (*0x37070 == 0) {
        if ((*0x37078 == '\0') && (*0x37088 != 0)) {
    //WARNING: Could not recover jumptable at 0x000280db. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x37088 + 0xd0))(0x34c28,0,0x37070);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.000272d8 @ 0x272d8 */

ulong * fcn.000272d8(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    ulong *puVar2;
    ulong *puVar3;
    ulong *puVar4;
    uint64_t uVar5;
    uint in_R8;
    uint8_t uVar6;
    
    uVar1 = CONCAT44(in_R8,arg3);
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar6 = 0;
    if ((uVar1 != 0) && (puVar2 != arg2)) {
        puVar3 = arg2 + -1 + uVar1;
        if ((arg2 < puVar2) && (puVar2 <= puVar3)) {
            puVar4 = puVar2 + (uVar1 - 1);
            uVar6 = 1;
            uVar5 = uVar1;
        }
        else {
            uVar5 = arg3 & 7;
            puVar3 = arg2;
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


/* fcn.00028e70 @ 0x28e70 */

void fcn.00028e70(int64_t arg1,int64_t arg2,uint32_t arg3)

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
                            *(uStack_90 * 4 + 0x36970);
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
                            *(uStack_90 * 4 + 0x36970);
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


/* fcn.000294d0 @ 0x294d0 */

void fcn.000294d0(int64_t arg1,int64_t arg2)

{
    fcn.000272ec(arg1,arg2);
    return;
}


/* fcn.0002c0fc @ 0x2c0fc */

uint32_t fcn.0002c0fc(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int8_t iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    int8_t var_bp_10h;
    int8_t var_fh;
    int8_t var_eh;
    int8_t var_ah;
    int8_t var_9h;
    int8_t var_bp_8h;
    int8_t var_7h;
    int8_t var_6h;
    
    *0x3f534 = arg2;
    iVar4 = 0;
    *0x370a8 = arg1;
    *0x3f100 = arg1;
    *0x3f9b4 = *0x3f534;
    do {
        iVar1 = fcn.0002c58c();
        if (iVar1 < 0) {
            return 0xffffffff;
        }
        (&var_bp_10h)[iVar4] = iVar1;
        iVar4 = iVar4 + 1;
    } while (iVar4 < 0xd);
    iVar1 = 0;
    iVar4 = 0;
    do {
        if ((&var_bp_10h)[iVar4] != "GIF87a"[iVar4]) break;
        iVar1 = iVar1 + 1;
        iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
    if (iVar1 < 6) {
        iVar1 = 0;
        iVar4 = 0;
        do {
            if ((&var_bp_10h)[iVar4] != "GIF89a"[iVar4]) break;
            iVar1 = iVar1 + 1;
            iVar4 = iVar4 + 1;
        } while (iVar4 < 6);
        if (iVar1 < 6) {
            return 0xffffffff;
        }
    }
    iVar2 = (var_6h & 7U) + 1;
    uVar3 = _var_ah;
    uVar5 = uVar3;
    uVar6 = _var_bp_8h;
    *0x3f550 = 1 << iVar2;
    uVar10 = *0x3f550;
    *0x370bc = uVar3;
    *0x3f9b8 = uVar6;
    if ((var_6h & 0x80U) == 0) {
        *0x3f550 = 0;
    }
    else {
        uVar9 = 0;
        if (0 < 1 << iVar2) {
            iVar4 = 0;
            do {
                iVar7 = 0;
                do {
                    iVar1 = fcn.0002c58c();
                    uVar3 = uVar5;
                    if (iVar1 < 0) {
                        return 0xffffffff;
                    }
                    (&var_bp_10h)[iVar7] = iVar1;
                    iVar7 = iVar7 + 1;
                } while (iVar7 < 3);
                if (iVar4 < 0x100) {
                    *(iVar4 * 4 + 0x3f122) = var_bp_10h;
                    *(iVar4 * 4 + 0x3f121) = var_fh;
                    *(iVar4 * 4 + 0x3f120) = var_eh;
                }
                uVar8 = uVar9 + 1;
                uVar9 = uVar8;
                iVar4 = iVar4 + 1;
            } while (uVar8 < uVar10);
        }
    }
    *0x3f9b0 = 0;
    *0x3f548 = 0x3f120;
    *0x3f0f0 = 0;
    *0x3f0ec = 1;
    *0x370a0 = *0x370a8;
    *0x34c74 = uVar3;
    return uVar3 << 0x10 | uVar6;
}


/* fcn.0002c298 @ 0x2c298 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

int fcn.0002c298(int64_t arg1)

{
    int iVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int8_t iVar7;
    int64_t iVar8;
    uint32_t uVar9;
    int iVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    uint32_t uVar15;
    uint64_t uVar16;
    ulong uVar17;
    int64_t iVar18;
    uint32_t uVar19;
    uint8_t auStackX_8 [2];
    uint16_t uStackX_a;
    uint8_t uStackX_c;
    int8_t var_30h;
    int8_t var_31h;
    int8_t var_32h;
    int8_t var_33h;
    int8_t var_34h;
    ushort uStack_38;
    uint16_t uStack_36;
    uint16_t uStack_34;
    uint16_t uStack_32;
    uint8_t uStack_30;
    int8_t var_bp_10h;
    int8_t var_fh;
    int8_t var_eh;
    int8_t var_dh;
    int8_t var_ch;
    int8_t var_bh;
    int8_t var_ah;
    int8_t var_9h;
    int8_t var_8h;
    
    iVar1 = *0x3f9b0;
    iVar6 = 0;
    iVar10 = *0x3f0ec;
    *0x3f110 = arg1;
    do {
        uVar17 = 0x3f570;
        while (iVar4 = fcn.0002c58c(), iVar4 == 0x21) {
            iVar4 = fcn.0002c58c();
            if (iVar4 < 0) {
                return -1;
            }
            if (iVar4 == 0xf9) {
                iVar8 = 0;
                do {
                    iVar6 = fcn.0002c58c();
                    if (iVar6 < 0) {
                        iVar6 = -1;
                        goto code_r0x0002c578;
                    }
                    auStackX_8[iVar8] = iVar6;
                    iVar8 = iVar8 + 1;
                } while (iVar8 < 6);
                iVar6 = uStackX_a * 10;
                if ((auStackX_8[1] & 1) != 0) {
                    *0x34c70 = uStackX_c;
                }
                if (iVar6 != 0) goto code_r0x0002c578;
            }
            else {
                while (iVar4 = fcn.0002c58c(), 0 < iVar4) {
                    do {
                        iVar5 = fcn.0002c58c();
                        if (iVar5 < 0) {
                            return -1;
                        }
                        iVar4 = iVar4 + -1;
                    } while (0 < iVar4);
                }
                if (iVar4 < 0) {
                    return -1;
                }
            }
        }
        if (iVar4 != 0x2c) {
            if (iVar4 != 0x3b) {
                return -1;
            }
code_r0x0002c578:
            if (iVar6 - 1U < 99) {
                iVar6 = 100;
            }
            return iVar6;
        }
        iVar8 = 0;
        do {
            iVar4 = fcn.0002c58c();
            if (iVar4 < 0) {
                return -1;
            }
            *(&uStack_38 + iVar8) = iVar4;
            uVar3 = uStack_36;
            uVar2 = uStack_38;
            iVar8 = iVar8 + 1;
        } while (iVar8 < 9);
        iVar7 = (uStack_30 & 7) + 1;
        uVar9 = uStack_38;
        uVar19 = uStack_36;
        uVar15 = uStack_34;
        uVar16 = uVar15;
        uVar11 = uStack_32;
        uVar12 = uVar11;
        *0x3f568 = 1 << iVar7;
        uVar14 = *0x3f568;
        *0x3f520 = uStack_30 >> 6 & 1;
        *0x3f524 = uVar19;
        *0x3f528 = uVar11;
        *0x3f53c = uVar15;
        *0x3f9c0 = uVar9;
        if ((uStack_30 & 0x80) == 0) {
            uVar13 = 0 << iVar7;
            *0x3f568 = uVar13;
code_r0x0002c3f4:
            if (uVar13 < 1) goto code_r0x0002c40a;
            *0x3f0ec = 0;
            iVar10 = 0;
            *0x3f548 = uVar17;
        }
        else {
            iVar4 = 0;
            iVar8 = 0;
            if (0 < *0x3f568) {
                do {
                    iVar18 = 0;
                    do {
                        iVar5 = fcn.0002c58c();
                        uVar11 = uVar12;
                        uVar15 = uVar16;
                        uVar13 = uVar14;
                        if (iVar5 < 0) {
                            return -1;
                        }
                        *(&uStack_38 + iVar18) = iVar5;
                        iVar18 = iVar18 + 1;
                    } while (iVar18 < 3);
                    uVar17 = 0x3f570;
                    if (iVar8 < 0x100) {
                        *(iVar8 * 4 + 0x3f572) = uStack_38;
                        *(iVar8 * 4 + 0x3f571) = uStack_38._1_1_;
                        *(iVar8 * 4 + 0x3f570) = uStack_36;
                    }
                    iVar4 = iVar4 + 1;
                    iVar8 = iVar8 + 1;
                } while (iVar4 < uVar13);
                goto code_r0x0002c3f4;
            }
code_r0x0002c40a:
            if ((0 < *0x3f550) && (iVar10 == 0)) {
                *0x3f0ec = 1;
                *0x3f548 = 0x3f120;
                iVar10 = 1;
            }
        }
        *0x3f538 = (uVar9 - 1) + uVar15;
        *0x3f52c = (uVar19 - 1) + uVar11;
        *0x36eec = uVar2;
        *0x36ef0 = uVar3;
        if (uVar15 != 0) {
            *0x36ef4 = uVar15 + -1;
        }
        if (uVar11 != 0) {
            *0x36f00 = uVar11 + -1;
        }
        *0x3f540 = 0;
        *0x36ef2 = 1;
        *0x370b0 = (iVar1 + uVar19) * *0x34c74 + *0x3f0f0 + uVar9;
        if (*0x3f108 != *0x370b0 >> 0x10) {
            *0x3f108 = *0x370b0 >> 0x10;
        }
        *0x370c0 = uVar9;
        *0x370c4 = uVar19;
        iVar4 = fcn.0002c844();
        if (iVar4 != 0) {
            return -1;
        }
    } while( true );
}


/* fcn.000297dc @ 0x297dc */

ulong fcn.000297dc(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong uVar4;
    
    uVar3 = (**(*0x36d88 + 0x18))(0x10);
    iVar1 = fcn.0002c0fc(*(*arg1 + 0x48),*(*arg1 + 0x50));
    if (iVar1 == -1) {
        *0x40018 = 0;
        (**(*0x36d88 + 0x20))(uVar3);
        uVar4 = 0x8000000000000003;
    }
    else {
        *0x370a8 = *(*arg1 + 0x40);
        uVar2 = fcn.0002c298(*(*arg1 + 0x30));
        if (uVar2 == 0xffffffff) {
            *0x40018 = 0;
            uVar4 = 0x8000000000000003;
        }
        else {
            *0x40018 = uVar2;
            uVar4 = 0;
            *(*arg1 + 0x40) = *0x370a8;
        }
        (**(*0x36d88 + 0x20))(uVar3);
    }
    return uVar4;
}


/* fcn.00020c38 @ 0x20c38 */

uint64_t fcn.00020c38(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t uVar2;
    uchar *puVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uchar *puVar6;
    uint64_t uVar7;
    int iVar8;
    uint32_t uVar9;
    uint32_t *in_stack_00000028;
    uint32_t *in_stack_00000030;
    
    *0x42340 = 100000;
    *0x422d0 = 0x7fffffff;
    *0x422d4 = 0x7fffffff;
    *0x422d8 = 0x7fffffff;
    uVar7 = 0;
    iVar1 = fcn.0002a264(arg1,arg2);
    uVar9 = *0x422dc;
    if (iVar1 == 0) {
        uVar4 = *0x422e0;
        uVar2 = *0x422dc;
        *in_stack_00000028 = *0x422e0;
        *in_stack_00000030 = uVar9;
        iVar1 = uVar4 * uVar2 * 4;
        *arg4 = iVar1;
        puVar3 = fcn.0001504c(iVar1);
        *arg3 = puVar3;
        if (puVar3 == NULL) {
            uVar7 = 0x8000000000000009;
        }
        else {
            uVar2 = uVar7;
            if (*in_stack_00000028 != 0) {
                do {
                    iVar8 = uVar2;
                    uVar2 = uVar7;
                    if (*in_stack_00000030 != 0) {
                        do {
                            uVar9 = uVar2;
                            if (uVar9 < *0x422dc) {
                                uVar5 = (uVar9 + *0x422dc * iVar8) * 4;
                            }
                            else {
                                uVar5 = (iVar8 + 1) * *0x422dc * 4 - 4;
                            }
                            puVar6 = uVar5 + *0x422e8;
                            uVar2 = uVar9 + 1;
                            *puVar3 = puVar6[2];
                            puVar3[1] = puVar6[1];
                            puVar3[2] = *puVar6;
                            puVar3 = puVar3 + 4;
                        } while (uVar9 + 1 < *in_stack_00000030);
                    }
                    uVar2 = iVar8 + 1U;
                } while (iVar8 + 1U < *in_stack_00000028);
            }
        }
    }
    else {
        uVar7 = 0x8000000000000015;
    }
    return uVar7;
}


/* fcn.0002bedc @ 0x2bedc */

uint64_t fcn.0002bedc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint8_t uVar2;
    int64_t iVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    int iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t *in_stack_00000028;
    uint32_t *in_stack_00000030;
    uint32_t *in_stack_00000038;
    
    iVar3 = fcn.0002e230(arg1);
    uVar9 = 0;
    if (iVar3 == 0) {
        return 0x8000000000000003;
    }
    uVar1 = *(*0x40f60 + 6);
    uVar11 = *(*0x40f60 + 5) << 8 | uVar1;
    uVar2 = *(*0x40f60 + 4);
    uVar10 = *(*0x40f60 + 3) << 8 | uVar2;
    *in_stack_00000030 = uVar11;
    *in_stack_00000028 = uVar10;
    iVar4 = 0x10 - (uVar1 & 0xf);
    iVar7 = 0;
    if (iVar4 != 0x10) {
        iVar7 = iVar4;
    }
    iVar5 = 0x10 - (uVar2 & 0xf);
    iVar4 = 0;
    if (iVar5 != 0x10) {
        iVar4 = iVar5;
    }
    uVar11 = iVar7 + uVar11;
    *in_stack_00000038 = uVar11;
    uVar8 = (uVar10 + iVar4) * uVar11;
    if (0x3fffffff < uVar8) {
        return 0x8000000000000003;
    }
    uVar8 = uVar8 * 4;
    uVar11 = uVar8;
    if (*arg3 == 0) {
        *arg4 = uVar11;
        iVar3 = fcn.000150a0(uVar8 & 0xffffffff);
        *arg3 = iVar3;
        if (iVar3 == 0) {
            return 0x8000000000000009;
        }
    }
    else if (*arg4 < uVar11) {
        uVar9 = 0x8000000000000005;
        goto code_r0x0002c0db;
    }
    uVar8 = uVar8 & 0xffffffff;
    fcn.00033b7e(*arg3,uVar8,0);
    uVar6 = iVar4 + *in_stack_00000028;
    uVar10 = *in_stack_00000038;
    iVar3 = fcn.0002d764(uVar6,uVar8,arg1,*arg3);
    if (iVar3 == 0) {
        return 0x8000000000000003;
    }
    if (iVar7 == 0) {
        return 0;
    }
    uVar11 = *in_stack_00000028 * *in_stack_00000030 * 4;
    iVar3 = fcn.000150a0(uVar11);
    if (iVar3 == 0) {
        fcn.0001470c(arg3);
        return 0x8000000000000009;
    }
    uVar8 = uVar9;
    if (*in_stack_00000028 != 0) {
        do {
            iVar7 = uVar8;
            uVar8 = *in_stack_00000030 * iVar7;
            (**(*0x36d88 + 0x160))
                      (iVar3 + uVar8 * 4,*arg3 + *in_stack_00000038 * iVar7 * 4,*in_stack_00000030 << 2,uVar8,uVar10
                       ,uVar6);
            uVar8 = iVar7 + 1U;
        } while (iVar7 + 1U < *in_stack_00000028);
    }
    *in_stack_00000038 = *in_stack_00000030;
    fcn.0001470c(arg3);
    *arg3 = iVar3;
code_r0x0002c0db:
    *arg4 = uVar11;
    return uVar9;
}


/* fcn.00029a70 @ 0x29a70 */

ulong fcn.00029a70(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    ulong uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t *piVar7;
    int64_t *piVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t *in_stack_00000028;
    uint64_t *in_stack_00000030;
    uint64_t *in_stack_00000038;
    
    uVar4 = (**(*0x36d88 + 0x18))(0x10);
    uVar3 = fcn.0002c0fc(arg1,arg2 & 0xffffffff);
    (**(*0x36d88 + 0x20))(uVar4);
    uVar10 = uVar3;
    uVar9 = uVar3 >> 0x10;
    if (0x3fffffff < uVar10 * uVar9) {
        return 0x8000000000000003;
    }
    uVar5 = uVar10 * uVar9 * 4;
    if (*arg3 == 0) {
        *arg4 = uVar5;
        iVar6 = fcn.000150a0(uVar5);
        *arg3 = iVar6;
        if (iVar6 != 0) goto code_r0x00029b2f;
code_r0x00029b09:
        uVar4 = 0x8000000000000009;
    }
    else {
        if (*arg4 < uVar5) {
            *arg4 = uVar5;
            return 0x8000000000000005;
        }
code_r0x00029b2f:
        *in_stack_00000030 = uVar9;
        *in_stack_00000028 = uVar10;
        uVar4 = (**(*0x36d88 + 0x18))(0x10);
        fcn.0002c0fc(arg1,arg2 & 0xffffffff);
        uVar5 = *0x370a0;
        uVar3 = fcn.0002c298(*arg3);
        uVar2 = *0x370a8;
        iVar6 = *0x36d88;
        *0x40018 = uVar3;
        *in_stack_00000038 = *0x40018;
        (**(iVar6 + 0x20))(uVar4);
        if (*in_stack_00000038 != 0) {
            *0x42348 = fcn.0001504c(0x60);
            if (*0x42348 == NULL) goto code_r0x00029b09;
            uVar1 = *arg3;
            (*0x42348)[9] = arg1;
            (*0x42348)[10] = arg2;
            (*0x42348)[0xb] = uVar5;
            **0x42348 = uVar9;
            (*0x42348)[1] = uVar10;
            (*0x42348)[4] = uVar9;
            (*0x42348)[6] = uVar1;
            (*0x42348)[8] = uVar2;
            fcn.000297dc(0x42348);
            *0x3fa98 = *0x40018;
            piVar7 = fcn.0001504c(0x10);
            if (piVar7 != NULL) {
                *piVar7 = *0x42348;
                piVar8 = *0x42350;
                piVar7[1] = 0;
                if (piVar8 == NULL) {
                    *0x42350 = piVar7;
                }
                else {
                    for (; piVar8[1] != 0; piVar8 = piVar8[1]) {
                    }
                    piVar8[1] = piVar7;
                }
            }
        }
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.00029f10 @ 0x29f10 */

int fcn.00029f10(void)

{
    uint8_t *puVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint8_t *puStackX_8;
    
    iVar2 = 8;
    *0x37098 = *0x37098 + 8;
    puStackX_8 = fcn.0001504c(4);
    if (puStackX_8 == NULL) {
        iVar2 = 0;
    }
    else {
        do {
            puVar1 = puStackX_8;
            iVar3 = 4;
            do {
                *puVar1 = puVar1[*0x37098 - puStackX_8];
                puVar1 = puVar1 + 1;
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            uVar4 = ((*puStackX_8 * 0x100 + puStackX_8[1]) * 0x100 + puStackX_8[2]) * 0x100 + puStackX_8[3];
            puVar1 = puStackX_8;
            iVar3 = 4;
            do {
                *puVar1 = puVar1[(*0x37098 + 4) - puStackX_8];
                puVar1 = puVar1 + 1;
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            iVar2 = iVar2 + 0xc + uVar4;
            *0x37098 = *0x37098 + 4 + uVar4 + 8;
        } while (((*puStackX_8 * 0x100 + puStackX_8[1]) * 0x100 + puStackX_8[2]) * 0x100 + puStackX_8[3] != 0x49454e44);
        fcn.0001470c(&puStackX_8);
    }
    return iVar2;
}


/* fcn.0002a0c4 @ 0x2a0c4 */

int64_t fcn.0002a0c4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint8_t *puVar2;
    uint8_t *puVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint8_t *apuStack_28 [2];
    
    iVar5 = 0;
    iVar8 = 4;
    puVar2 = fcn.0001504c(4);
    if (puVar2 == NULL) {
        return -0x7ffffffffffffff7;
    }
    puVar3 = puVar2;
    iVar7 = iVar8;
    do {
        *puVar3 = puVar3[*0x37098 - puVar2];
        puVar3 = puVar3 + 1;
        iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    *arg1 = ((*puVar2 * 0x100 + puVar2[1]) * 0x100 + puVar2[2]) * 0x100 + puVar2[3];
    puVar3 = puVar2;
    iVar7 = iVar8;
    do {
        *puVar3 = puVar3[(*0x37098 + 4) - puVar2];
        puVar3 = puVar3 + 1;
        iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar7 = *0x37098 + 8;
    *0x37098 = iVar7;
    *arg3 = ((*puVar2 * 0x100 + puVar2[1]) * 0x100 + puVar2[2]) * 0x100 + puVar2[3];
    apuStack_28[0] = puVar2;
    if (*arg1 == 0) {
        *arg2 = 0;
        uVar4 = 0;
        *0x37098 = iVar7;
    }
    else {
        iVar7 = fcn.0001504c(*arg1);
        *arg2 = iVar7;
        if (iVar7 == 0) {
            iVar5 = -0x7ffffffffffffff7;
            goto code_r0x0002a238;
        }
        uVar1 = *arg1;
        uVar4 = uVar1;
        if (uVar1 != 0) {
            uVar9 = uVar1;
            iVar6 = iVar5;
            do {
                *(iVar6 + iVar7) = *(iVar6 + *0x37098);
                iVar6 = iVar6 + 1;
                uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
        }
    }
    puVar3 = puVar2;
    do {
        *puVar3 = puVar3[(*0x37098 + uVar4) - puVar2];
        puVar3 = puVar3 + 1;
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    *0x37098 = *0x37098 + uVar4 + 4;
    *arg4 = ((*puVar2 * 0x100 + puVar2[1]) * 0x100 + puVar2[2]) * 0x100 + puVar2[3];
code_r0x0002a238:
    fcn.0001470c(apuStack_28);
    return iVar5;
}


/* fcn.0002a008 @ 0x2a008 */

ulong fcn.0002a008(uint32_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    uint64_t arg1_00;
    uint32_t uVar3;
    
    arg1_00 = arg1;
    uVar3 = arg1 / 3;
    if (arg1 == uVar3 * 3) {
        iVar2 = 0;
        if (*0x422c8 != 0) {
            fcn.0001470c(0x422c8);
            *0x422c0 = 0;
        }
        if (arg1 != 0) {
            *0x422c8 = fcn.0001504c(arg1_00);
            if ((*0x422c8 != 0) && (*0x422c0 = uVar3, arg1 != 0)) {
                do {
                    *(iVar2 + *0x422c8) = *(iVar2 + arg2);
                    iVar2 = iVar2 + 1;
                    arg1_00 = arg1_00 - 1;
                } while (arg1_00 != 0);
            }
        }
        uVar1 = 0;
    }
    else {
        uVar1 = 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.0002a728 @ 0x2a728 */

ulong fcn.0002a728(void)

{
    uint64_t uVar1;
    bool bVar2;
    
    uVar1 = 0;
    if (*0x422ac == 0) {
        if ((*0x422a8 != 1) && (*0x422a8 != 8)) {
            return 0x8000000000000003;
        }
    }
    else {
        if (*0x422ac == 2) {
            bVar2 = (*0x422a8 - 8U & 0xfffffff7) == 0;
        }
        else if (*0x422ac == 3) {
            bVar2 = (*0x422a8 - 4U & 0xfffffffb) == 0;
        }
        else {
            if ((*0x422ac != 4) && (*0x422ac != 6)) {
                return 0x8000000000000003;
            }
            bVar2 = *0x422a8 == 8;
        }
        if (!bVar2) {
            return 0x8000000000000003;
        }
    }
    *0x422dc = *0x422a0;
    *0x422e0 = *0x422a4;
    if ((*0x422f0 == 1) && (*0x422e8 != 0)) {
        fcn.0001470c(0x422e8);
        *0x422e8 = 0;
    }
    *0x422e8 = fcn.0001504c(*0x422e0 * *0x422dc * 4);
    *0x422f8 = 0xffffffff;
    *0x422fc = 0;
    *0x422f4 = 0;
    *0x42304 = 0;
    *0x42300 = 1;
    *0x4231c = 0;
    *0x42320 = 1;
    if (*0x42328 != 0) {
        fcn.0001470c(0x42328);
    }
    if (*0x422ac == 0) {
        if (*0x422a8 == 1) {
code_r0x0002a96c:
            uVar1 = *0x422a0 + 7 >> 3;
            goto code_r0x0002a978;
        }
        if (*0x422a8 != 2) {
            if (*0x422a8 != 4) {
                if (*0x422a8 == 8) {
code_r0x0002a8f7:
                    uVar1 = *0x422a0;
                    goto code_r0x0002a978;
                }
                if (*0x422a8 != 0x10) goto code_r0x0002a978;
code_r0x0002a947:
                uVar1 = *0x422a0 * 2;
                goto code_r0x0002a978;
            }
code_r0x0002a952:
            uVar1 = *0x422a0 + 1 >> 1;
            goto code_r0x0002a978;
        }
    }
    else {
        if (*0x422ac == 2) {
            if (*0x422a8 == 8) {
                uVar1 = *0x422a0 * 3;
            }
            else if (*0x422a8 == 0x10) {
                uVar1 = *0x422a0 * 6;
            }
            goto code_r0x0002a978;
        }
        if (*0x422ac != 3) {
            if (*0x422ac == 4) {
                if (*0x422a8 == 8) goto code_r0x0002a947;
                if (*0x422a8 != 0x10) goto code_r0x0002a978;
            }
            else {
                uVar1 = 0;
                if (*0x422ac != 6) goto code_r0x0002a978;
                if (*0x422a8 != 8) {
                    if (*0x422a8 == 0x10) {
                        uVar1 = *0x422a0 << 3;
                    }
                    goto code_r0x0002a978;
                }
            }
            uVar1 = *0x422a0 << 2;
            goto code_r0x0002a978;
        }
        if (*0x422a8 == 1) goto code_r0x0002a96c;
        if (*0x422a8 != 2) {
            if (*0x422a8 != 4) {
                if (*0x422a8 != 8) goto code_r0x0002a978;
                goto code_r0x0002a8f7;
            }
            goto code_r0x0002a952;
        }
    }
    uVar1 = *0x422a0 + 3 >> 2;
code_r0x0002a978:
    *0x42330 = fcn.0001504c(uVar1 * 2);
    *0x42338 = uVar1 + *0x42330;
    *0x42328 = *0x42330;
    return 0;
}


/* fcn.0002d120 @ 0x2d120 */

//WARNING: Variable defined which should be unmapped: var_dh
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_15h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h
//WARNING: Variable defined which should be unmapped: var_39h

ulong fcn.0002d120(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    uint32_t *arg3;
    uint32_t *puVar6;
    uint32_t *arg1_00;
    uint8_t uVar7;
    int64_t iVar8;
    uint32_t *arg1_01;
    uint32_t uVar9;
    int iVar10;
    int iVar11;
    uint32_t *puVar12;
    uint32_t *puVar13;
    uint32_t uVar14;
    int64_t var_fh;
    uint32_t auStackX_10 [2];
    int aiStackX_18 [2];
    uint32_t uStackX_20;
    uint32_t var_6fh;
    uint32_t var_77h;
    int32_t var_7fh;
    int64_t iStack_b8;
    int64_t iStack_b0;
    int iStack_a8;
    int iStack_a4;
    int64_t iStack_a0;
    uint32_t uStack_98;
    int iStack_94;
    int iStack_90;
    uint32_t *puStack_88;
    int64_t iStack_80;
    int iStack_78;
    int iStack_74;
    int iStack_70;
    uchar auStack_6c [4];
    uchar auStack_68 [7];
    int64_t var_59h;
    int64_t var_51h;
    int32_t var_49h;
    int var_45h;
    uint32_t var_41h;
    int32_t var_39h;
    uint32_t var_35h;
    uint32_t var_31h;
    int64_t var_29h;
    uint32_t var_21h;
    int64_t var_15h;
    int64_t var_dh;
    int64_t var_1h;
    
    puVar6 = NULL;
    uVar7 = *(arg2 + 1);
    iStack_80 = 0;
    iStack_b0 = 0;
    iStack_b8 = 0;
    aiStackX_18[0] = 1;
    puStack_88 = NULL;
    iStack_a8 = 0;
    auStackX_10[0] = 2;
    if ((*arg2 & 0xf) == 8) {
        uStack_98 = 1 << (*arg2 >> 4) + 8;
        iStack_a0 = fcn.0001504c(uStack_98);
        uStackX_20 = 0;
        arg1_00 = puVar6;
        puVar13 = puVar6;
        arg3 = puVar6;
        if ((uVar7 & 0x20) == 0) {
            do {
                iVar8 = arg2;
                iStack_94 = fcn.0002cabc(arg2,auStackX_10,aiStackX_18);
                puVar6 = auStackX_10;
                iStack_90 = fcn.0002caec(iVar8,puVar6,aiStackX_18,2);
                uVar14 = arg1;
                if (uVar14 <= auStackX_10[0]) {
code_r0x0002d74a:
                    puVar6 = NULL;
                    arg1_00 = NULL;
                    break;
                }
                if (iStack_90 == 0) {
                    uVar9 = auStackX_10[0];
                    if (aiStackX_18[0] != 1) {
                        aiStackX_18[0] = 1;
                        uVar9 = auStackX_10[0] + 1;
                    }
                    if (uVar14 <= uVar9) goto code_r0x0002d74a;
                    iVar11 = 0;
                    iVar8 = 0;
                    iVar10 = *(uVar9 + 1 + arg2) * 0x100 + *(uVar9 + arg2);
                    if (iVar10 != 0) {
                        do {
                            iVar8 = CONCAT71(iVar8 >> 8,*(uVar9 + 4 + iVar11 + arg2));
                            fcn.0002a9a4(iVar8,puVar6);
                            iVar11 = iVar11 + 1;
                        } while (iVar11 < iVar10);
                    }
                    auStackX_10[0] = uVar9 + 4 + iVar10;
                }
                else {
                    puVar6 = NULL;
                    if (iStack_90 != 1 && iStack_90 != 2) goto code_r0x0002d74a;
                    if (iStack_90 == 1) {
                        iVar5 = fcn.0001504c(0x480);
                        iStack_b8 = iVar5;
                        arg3 = fcn.0001504c(0x480);
                        puStack_88 = arg3;
                        if ((iVar5 == 0) || (arg3 == NULL)) {
                            arg1_00 = NULL;
                            goto code_r0x0002d697;
                        }
                        uVar9 = 0;
                        iVar8 = iVar5 - arg3;
                        puVar6 = arg3;
                        do {
                            uVar2 = uVar9 + 0x30;
                            *(iVar8 + puVar6) = 8;
                            uVar9 = uVar9 + 1;
                            *puVar6 = uVar2;
                            puVar6 = puVar6 + 1;
                        } while (uVar9 < 0x90);
                        uVar9 = 0x90;
                        puVar6 = arg3 + 0x90;
                        do {
                            uVar2 = uVar9 + 0x100;
                            *(puVar6 + iVar8) = 9;
                            uVar9 = uVar9 + 1;
                            *puVar6 = uVar2;
                            puVar6 = puVar6 + 1;
                        } while (uVar9 < 0x100);
                        uVar9 = 0x100;
                        puVar6 = arg3 + 0x100;
                        do {
                            uVar2 = uVar9 - 0x100;
                            *(puVar6 + iVar8) = 7;
                            uVar9 = uVar9 + 1;
                            *puVar6 = uVar2;
                            puVar6 = puVar6 + 1;
                        } while (uVar9 < 0x118);
                        uVar9 = 0x118;
                        puVar6 = arg3 + 0x118;
                        do {
                            uVar2 = uVar9 - 0x58;
                            *(puVar6 + iVar8) = 8;
                            uVar9 = uVar9 + 1;
                            *puVar6 = uVar2;
                            puVar6 = puVar6 + 1;
                        } while (uVar9 < 0x120);
                        puVar6 = fcn.0002d034(0x120,iVar5,arg3);
                        arg1_00 = NULL;
                        fcn.0001470c(&iStack_b8);
                        fcn.0001470c(&puStack_88);
                        arg3 = puStack_88;
                    }
                    else {
                        iVar5 = fcn.0001504c(0x508);
                        iStack_80 = iVar5;
                        iVar8 = fcn.0001504c(0x508);
                        arg1_00 = NULL;
                        iStack_b0 = iVar8;
                        if ((((iVar5 == 0) || (iVar8 == 0)) ||
                            (iVar5 = fcn.0002ccf8(&iStack_78,&iStack_74,auStack_6c,&var_59h + 1), iVar5 != 0)) ||
                           ((puVar6 = fcn.0002d034(iStack_78 + 0x101,stack0xffffffffffffffa0,_auStack_68),
                            arg1_00 = NULL, puVar6 == NULL ||
                            (arg1_00 = fcn.0002d034(iStack_74 + 1,stack0xffffffffffffffb0,stack0xffffffffffffffa8),
                            arg1_00 == NULL)))) {
                            iVar5 = iStack_b8;
                            goto code_r0x0002d69b;
                        }
                        fcn.0001470c(&iStack_80);
                        fcn.0001470c(&iStack_b0);
                    }
                    puVar12 = puVar6;
                    if (puVar6 != NULL) {
                        do {
                            arg1_01 = auStackX_10;
                            iVar8 = arg2;
                            iVar10 = fcn.0002cabc(arg2,arg1_01,aiStackX_18);
                            if (iVar10 == 0) {
                                puVar12 = *(puVar12 + 2);
                            }
                            else {
                                puVar12 = *(puVar12 + 4);
                            }
                            if (puVar12 == NULL) goto code_r0x0002d693;
                            if ((*(puVar12 + 2) == 0) && (*(puVar12 + 4) == 0)) {
                                uVar9 = *puVar12;
                                if (uVar9 < 0x100) {
                                    *(puVar13 + iStack_a0) = uVar9;
                                    uStackX_20 = puVar13 + 1U & uStack_98 - 1;
                                    puVar13 = uStackX_20;
                                    iVar8 = fcn.0002a9a4(CONCAT71(iStack_a0 >> 8,uVar9),arg1_01);
                                    if (iVar8 != 0) goto code_r0x0002d693;
                                    iStack_a8 = iStack_a8 + 1;
                                }
                                else {
                                    if (uVar9 == 0x100) break;
                                    if (uVar9 < 0x11e) {
                                        if (uVar9 < 0x109) {
                                            iVar10 = uVar9 - 0xfe;
                                        }
                                        else if (uVar9 < 0x11d) {
                                            uVar2 = uVar9 - 0x109 >> 2;
                                            iVar10 = fcn.0002caec(iVar8,auStackX_10,aiStackX_18,uVar2 + 1);
                                            uVar9 = uVar9 - 1 & 3;
                                            arg1_01 = uVar9;
                                            uVar7 = uVar2;
                                            iVar10 = (8 << (uVar7 & 0x1f)) + 3 + iVar10 + (2 << (uVar7 & 0x1f)) * uVar9;
                                        }
                                        else {
                                            iVar10 = 0x102;
                                        }
                                        iStack_a4 = iVar10;
                                        if (iStack_90 == 1) {
                                            iVar8 = arg2;
                                            iVar11 = fcn.0002cabc(arg2,auStackX_10,aiStackX_18);
                                            iVar11 = iVar11 << 4;
                                            iVar3 = fcn.0002cabc(iVar8,auStackX_10,aiStackX_18);
                                            iVar11 = iVar11 + iVar3 * 8;
                                            iVar3 = fcn.0002cabc(iVar8,auStackX_10,aiStackX_18);
                                            iVar11 = iVar11 + iVar3 * 4;
                                            iVar3 = fcn.0002cabc(iVar8,auStackX_10,aiStackX_18);
                                            arg1_01 = auStackX_10;
                                            iVar4 = fcn.0002cabc(iVar8,arg1_01,aiStackX_18);
                                            uVar9 = iVar11 + iVar3 * 2 + iVar4;
                                        }
                                        else {
                                            puVar13 = arg1_00;
                                            while ((puVar12 = *(puVar13 + 2), puVar12 != NULL || (*(puVar13 + 4) != 0))
                                                  ) {
                                                arg1_01 = auStackX_10;
                                                iVar11 = fcn.0002cabc(arg2,arg1_01,aiStackX_18);
                                                if (iVar11 == 0) {
                                                    if (puVar12 != NULL) {
                                                        puVar13 = puVar12;
                                                    }
                                                }
                                                else if (*(puVar13 + 4) != NULL) {
                                                    puVar13 = *(puVar13 + 4);
                                                }
                                            }
                                            uVar9 = *puVar13;
                                        }
                                        if (3 < uVar9) {
                                            iVar11 = fcn.0002caec(arg2,auStackX_10,aiStackX_18,uVar9 - 2 >> 1);
                                            uVar7 = uVar9 - 4 >> 1;
                                            uVar2 = 4 << (uVar7 & 0x1f);
                                            arg1_01 = uVar2;
                                            uVar9 = (uVar9 & 1) * (2 << (uVar7 & 0x1f)) + iVar11 + uVar2;
                                        }
                                        iVar11 = 0;
                                        iStack_70 = uVar9 + 1;
                                        puVar13 = uStackX_20;
                                        if (0 < iVar10) {
                                            uVar9 = uStack_98 - 1;
                                            do {
                                                uVar2 = puVar13 - iStack_70 & uVar9;
                                                uVar1 = *(uVar2 + iStack_a0);
                                                iVar8 = fcn.0002a9a4(CONCAT31(uVar2 >> 8,uVar1),arg1_01);
                                                if (iVar8 != 0) goto code_r0x0002d693;
                                                iVar11 = iVar11 + 1;
                                                iStack_a8 = iStack_a8 + 1;
                                                *(uStackX_20 + iStack_a0) = uVar1;
                                                uStackX_20 = uStackX_20 + 1 & uVar9;
                                                puVar13 = uStackX_20;
                                            } while (iVar11 < iStack_a4);
                                        }
                                    }
                                }
                                puVar12 = puVar6;
                            }
                            if (uVar14 <= auStackX_10[0]) goto code_r0x0002d693;
                        } while( true );
                    }
                    fcn.0002d0ec(puVar6);
                    fcn.0002d0ec(arg1_00);
                }
                if (iStack_94 != 0) {
                    fcn.0001470c(&iStack_a0);
                    return 0;
                }
            } while( true );
        }
code_r0x0002d693:
        iVar5 = iStack_b8;
code_r0x0002d697:
        iVar8 = iStack_b0;
code_r0x0002d69b:
        if (iStack_a0 != 0) {
            fcn.0001470c(&iStack_a0);
        }
        if (puVar6 != NULL) {
            fcn.0002d0ec(puVar6);
        }
        if (arg1_00 != NULL) {
            fcn.0002d0ec(arg1_00);
        }
        if (iVar5 != 0) {
            fcn.0001470c(&iStack_b8);
        }
        if (arg3 != NULL) {
            fcn.0001470c(&puStack_88);
        }
        if (iStack_80 != 0) {
            fcn.0001470c(&iStack_80);
        }
        if (iVar8 != 0) {
            fcn.0001470c(&iStack_b0);
        }
    }
    return 0x8000000000000015;
}


/* fcn.0002a520 @ 0x2a520 */

void fcn.0002a520(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    char cVar4;
    int iVar5;
    char cVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    int iVar10;
    int iVar11;
    uint64_t uVar12;
    char *pcVar13;
    uint32_t uVar14;
    uint32_t in_stack_00000028;
    int in_stack_00000030;
    
    iVar11 = arg3;
    if (in_stack_00000030 == 1) {
        if ((0 < iVar11) && (0 < in_stack_00000028)) {
            pcVar13 = iVar11 * in_stack_00000028 + arg1;
            uVar12 = in_stack_00000028;
            do {
                *pcVar13 = *pcVar13 + pcVar13[(iVar11 + -1) * in_stack_00000028 - iVar11 * in_stack_00000028];
                pcVar13 = pcVar13 + 1;
                uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
        }
    }
    else {
        iVar10 = arg4;
        if (in_stack_00000030 == 2) {
            if ((0 < iVar10) && (0 < in_stack_00000028)) {
                uVar12 = in_stack_00000028;
                pcVar13 = iVar11 * in_stack_00000028 + arg1;
                do {
                    *pcVar13 = *pcVar13 + pcVar13[arg2 - arg1];
                    pcVar13 = pcVar13 + 1;
                    uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
            }
        }
        else if (in_stack_00000030 == 3) {
            iVar7 = 0;
            if (0 < in_stack_00000028) {
                pcVar13 = iVar11 * in_stack_00000028 + arg1;
                do {
                    if (iVar11 < 1) {
                        cVar6 = '\0';
                    }
                    else {
                        cVar6 = *(((iVar11 + -1) * in_stack_00000028 + iVar7) + arg1);
                    }
                    if (iVar10 < 1) {
                        cVar4 = '\0';
                    }
                    else {
                        cVar4 = pcVar13[arg2 - arg1];
                    }
                    iVar7 = iVar7 + 1;
                    *pcVar13 = *pcVar13 + (cVar4 + cVar6 >> 1);
                    pcVar13 = pcVar13 + 1;
                } while (iVar7 < in_stack_00000028);
            }
        }
        else if ((in_stack_00000030 == 4) && (iVar7 = 0, 0 < in_stack_00000028)) {
            pcVar13 = iVar11 * in_stack_00000028 + arg1;
            do {
                if (iVar11 < 1) {
                    uVar9 = 0;
                }
                else {
                    uVar9 = *(((iVar11 + -1) * in_stack_00000028 + iVar7) + arg1);
                }
                if (iVar10 < 1) {
                    uVar14 = 0;
                }
                else {
                    uVar14 = pcVar13[arg2 - arg1];
                }
                if ((iVar11 < 1) || (iVar10 < 1)) {
                    uVar8 = 0;
                }
                else {
                    uVar8 = *(((iVar11 + -1) * in_stack_00000028 + iVar7) + arg2);
                }
                iVar5 = (uVar14 - uVar8) + uVar9;
                iVar1 = uVar9 - iVar5;
                if (uVar9 < iVar5) {
                    iVar1 = iVar5 - uVar9;
                }
                iVar2 = uVar14 - iVar5;
                if (uVar14 < iVar5) {
                    iVar2 = iVar5 - uVar14;
                }
                iVar3 = uVar8 - iVar5;
                if (uVar8 < iVar5) {
                    iVar3 = iVar5 - uVar8;
                }
                if (((iVar2 < iVar1) || (iVar3 < iVar1)) && (uVar9 = uVar8, iVar2 <= iVar3)) {
                    uVar9 = uVar14;
                }
                *pcVar13 = *pcVar13 + uVar9;
                iVar7 = iVar7 + 1;
                pcVar13 = pcVar13 + 1;
            } while (iVar7 < in_stack_00000028);
        }
    }
    return;
}


/* fcn.0002e230 @ 0x2e230 */

ulong fcn.0002e230(uint32_t arg1)

{
    int64_t iVar1;
    bool bVar2;
    uint64_t uVar3;
    uint in_register_0000000c;
    unkbyte7 Var5;
    char *pcVar4;
    char *pcVar6;
    char cVar7;
    uint64_t uVar8;
    ulong *puVar9;
    uint8_t uVar10;
    uint8_t uVar11;
    ushort uStackX_8;
    
    pcVar4 = CONCAT44(in_register_0000000c,arg1);
    bVar2 = false;
    uVar8 = 0;
    if ((*pcVar4 == -1) && (pcVar6 = pcVar4, uVar11 = 0, pcVar4[1] == -0x28)) {
        do {
            cVar7 = uVar8;
            uVar10 = pcVar6[1];
            Var5 = pcVar4 >> 8;
            pcVar4 = CONCAT71(Var5,uVar10);
            if (uVar10 == 0xd8) {
                pcVar6 = pcVar6 + 2;
            }
            else {
                if (uVar10 == 0xd9) {
code_r0x0002e385:
                    if (cVar7 == '\x01') {
                        cVar7 = '\x02';
                        *0x40e48 = *0x40e40 + 0x41;
                    }
                    if (uVar11 == 1) {
                        puVar9 = 0x41508;
                        uVar11 = 1;
                        do {
                            iVar1 = *((uVar11 - 1) * 8 + 0x41500);
                            pcVar6 = NULL;
                            uVar10 = 0;
                            do {
                                uVar10 = uVar10 + pcVar6[iVar1 + 1];
                                pcVar6 = pcVar6 + 1;
                            } while (pcVar6 < 0x10);
                            pcVar4 = iVar1 + 0x11 + uVar10;
                            uVar11 = uVar11 + 1;
                            *puVar9 = pcVar4;
                            puVar9 = puVar9 + 1;
                        } while (uVar11 < 4);
                    }
                    if (uVar11 != 4) {
                        return 0;
                    }
                    if (cVar7 != '\x02') {
                        return 0;
                    }
                    if (!bVar2) {
                        return 0;
                    }
                    fcn.0002e150(CONCAT71(pcVar4 >> 8,2),CONCAT71(pcVar6 >> 8,4));
                    return 1;
                }
                if (uVar10 == 0) {
                    return 0;
                }
                if ((uVar10 & 0xf0) != 0xe0) {
                    if (uVar10 == 0xc0) {
                        *0x40f60 = pcVar6 + 2;
                        bVar2 = true;
                    }
                    else if (uVar10 == 0xc4) {
                        uVar3 = uVar11;
                        pcVar4 = pcVar6 + 4;
                        uVar11 = uVar11 + 1;
                        *(uVar3 * 8 + 0x41500) = pcVar4;
                    }
                    else if ((uVar10 & 0xf0) == 0xc0) {
                        if (((uVar10 != 0xc4) && (0xc0 < uVar10)) && (uVar10 < 0xd0)) {
                            return 0;
                        }
                    }
                    else {
                        if (uVar10 == 0xda) {
                            *0x40eb0 = pcVar6 + 0xe;
                            goto code_r0x0002e385;
                        }
                        if (uVar10 == 0xdb) {
                            pcVar4 = pcVar6 + 4;
                            *(uVar8 * 8 + 0x40e40) = pcVar4;
                            uVar8 = cVar7 + 1;
                        }
                        else if (uVar10 == 0xdd) {
                            *0x3f9d0 = pcVar6[5];
                            *0x3f9d1 = pcVar6[4];
                        }
                        else if ((uVar10 & 0xf8) != 0xd0) {
                            if (uVar10 == 0xdc) {
                                return 0;
                            }
                            if (uVar10 == 0xde) {
                                return 0;
                            }
                            if (uVar10 == 0xdf) {
                                return 0;
                            }
                            pcVar4 = CONCAT71(Var5,uVar10 + 0x10);
                            if (0xe < uVar10 + 0x10) {
                                return 0;
                            }
                        }
                    }
                }
                uStackX_8 = CONCAT11(pcVar6[2],pcVar6[3]);
                pcVar6 = pcVar6 + 2 + uStackX_8;
            }
        } while (*pcVar6 == -1);
    }
    return 0;
}


/* fcn.0002d764 @ 0x2d764 */

ulong fcn.0002d764(ulong noname_0,ulong noname_1,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    unkbyte7 Var3;
    uint in_stack_00000028;
    uint in_stack_00000030;
    
    Var3 = noname_1 >> 8;
    *0x42120 = in_stack_00000028;
    *0x40eb8 = in_stack_00000030;
    *0x3f9d0 = 0;
    *0x40d08 = 0;
    *0x421c0 = 0;
    *0x4191e = 0;
    *0x4191c = 8;
    *0x40da0 = 0;
    *0x3f9c8 = arg2;
    iVar1 = fcn.0002e230(arg1);
    uVar2 = 0;
    if (iVar1 != 0) {
        if (((*(*0x40f60 + 0xc) == '\x11') && (*(*0x40f60 + 0xf) == '\x11')) &&
           ((*(*0x40f60 + 9) == '\x11' || (*(*0x40f60 + 9) == '\"')))) {
            fcn.0002de20(*0x40f60,CONCAT71(Var3,0x11),*(*0x40f60 + 5) << 8 | *(*0x40f60 + 6),
                         *(*0x40f60 + 3) << 8 | *(*0x40f60 + 4));
        }
        uVar2 = 1;
    }
    return uVar2;
}


/* fcn.0002c58c @ 0x2c58c */

uint64_t fcn.0002c58c(void)

{
    uint8_t uVar1;
    
    if (*0x3f534 == 0) {
        return 0xffffffff;
    }
    *0x3f534 = *0x3f534 + -1;
    uVar1 = **0x370a8;
    *0x370a8 = *0x370a8 + 1;
    return uVar1;
}


/* fcn.0002c844 @ 0x2c844 */

ulong fcn.0002c844(void)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    int iVar9;
    int64_t iVar10;
    int iVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    uint32_t uVar14;
    
    if (*0x3f534 == 0) {
code_r0x0002caa0:
        uVar6 = 0xfffffffc;
    }
    else {
        *0x3f534 = *0x3f534 + -1;
        uVar1 = **0x370a8;
        *0x370a8 = *0x370a8 + 1;
        if (uVar1 - 2 < 8) {
            *0x370c8 = 0;
            uVar2 = uVar1 + 1;
            *0x3f558 = 0;
            uVar3 = 1 << (uVar1 & 0x1f);
            uVar7 = uVar2;
            iVar11 = 1 << (uVar2 & 0x1f);
            iVar9 = uVar3 + 2;
            *0x3f0e4 = 0x200;
            *0x370b8 = uVar3;
            *0x370d0 = uVar3 + 1;
            *0x3f0e0 = uVar2;
            *0x3f0e8 = iVar9;
            *0x3f554 = iVar9;
            *0x3f564 = iVar11;
            uVar5 = fcn.0002c6bc();
            *0x3f560 = uVar5;
            uVar5 = uVar5 & 0xffffffff;
            if (*0x3f560 != uVar3 + 1) {
                iVar10 = 0;
                uVar14 = uVar2;
                uVar8 = *0x3f55c;
                uVar4 = *0x3f0f4;
                do {
                    uVar12 = uVar5;
                    if ((*0x370cc != 0) || (uVar12 < 0)) goto code_r0x0002caa0;
                    if (uVar12 == uVar3) {
                        uVar7 = uVar2;
                        iVar11 = 1 << (uVar2 & 0x1f);
                        iVar9 = uVar3 + 2;
                        *0x370d0 = uVar3 + 1;
                        *0x370b8 = uVar3;
                        *0x3f0e0 = uVar2;
                        *0x3f0e8 = iVar9;
                        *0x3f554 = iVar9;
                        *0x3f564 = iVar11;
                        uVar4 = fcn.0002c6bc();
                        *0x3f560 = uVar4;
                        if ((*0x370cc != 0) || (uVar4 < 0)) goto code_r0x0002caa0;
                        uVar7 = CONCAT71(uVar7 >> 8,uVar4);
                        *0x3f0f4 = uVar4;
                        *0x3f530 = uVar4;
                        *0x3f55c = uVar4;
                        fcn.0002c5b8(uVar7);
                        uVar14 = uVar2;
                        uVar8 = uVar4;
                    }
                    else {
                        uVar13 = uVar5;
                        *0x370b4 = uVar12;
                        if (uVar12 < iVar9) goto code_r0x0002c9f8;
                        *(iVar10 * 8 + 0x370e5) = uVar4;
                        uVar4 = uVar8;
                        while( true ) {
                            uVar13 = uVar4;
                            iVar10 = iVar10 + 1;
code_r0x0002c9f8:
                            uVar4 = uVar13;
                            if (uVar4 < uVar3 + 2) break;
                            uVar7 = uVar4;
                            *(iVar10 * 8 + 0x370e5) = *(uVar7 * 8 + 0x370e4);
                            uVar4 = *(uVar7 * 8 + 0x370e0);
                        }
                        *(iVar10 * 8 + 0x370e5) = uVar13;
                        *0x3f0f4 = uVar4;
                        *0x3f530 = uVar4;
                        for (iVar10 = iVar10 + 1; 0 < iVar10; iVar10 = iVar10 + -1) {
                            uVar7 = CONCAT71(uVar7 >> 8,*(iVar10 * 8 + 0x370dd));
                            fcn.0002c5b8(uVar7);
                            uVar12 = uVar5;
                        }
                        if (iVar9 < 0x1000) {
                            *(iVar9 * 8 + 0x370e4) = uVar13;
                            *(iVar9 * 8 + 0x370e0) = uVar8;
                        }
                        *0x3f554 = iVar9 + 1;
                        uVar8 = uVar12;
                        *0x3f55c = uVar12;
                        iVar9 = *0x3f554;
                        if ((iVar11 <= *0x3f554) && (uVar14 < 0xc)) {
                            uVar14 = uVar14 + 1;
                            iVar11 = iVar11 * 2;
                            *0x3f0e0 = uVar14;
                            *0x3f564 = iVar11;
                        }
                    }
                    *0x3f560 = fcn.0002c6bc();
                    uVar5 = *0x3f560;
                } while (*0x3f560 != uVar3 + 1);
            }
            uVar6 = 0;
        }
        else {
            uVar6 = 0xfffffffd;
        }
    }
    return uVar6;
}


/* fcn.0002c6bc @ 0x2c6bc */

uint32_t fcn.0002c6bc(void)

{
    uint8_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iVar8;
    
    iVar5 = *0x3f0e4 >> 3;
    uVar7 = *0x3f0e4 & 7;
    *0x3f0f8 = iVar5;
    *0x3f9bc = uVar7;
    if (0x3c < iVar5) {
        iVar4 = 0;
        iVar2 = 0x40 - iVar5;
        iVar8 = 0;
        if (0 < iVar2) {
            do {
                iVar3 = iVar5;
                iVar5 = iVar5 + 1;
                *(iVar4 + 0x3f970) = *(iVar3 + 0x3f970);
                iVar4 = iVar4 + 1;
                iVar8 = iVar2;
            } while (iVar4 < iVar2);
        }
        iVar4 = iVar8;
        if (iVar4 < 0x40) {
            do {
                if (*0x370c8 == 0) {
                    if (*0x3f558 != 0) break;
                    if (*0x3f534 == 0) {
                        *0x370cc = 1;
                        return 0xffffffff;
                    }
                    uVar1 = **0x370a8;
                    *0x370c8 = uVar1;
                    *0x3f534 = *0x3f534 + -1;
                    *0x370a8 = *0x370a8 + 1;
                    if (uVar1 == 0) {
                        *0x3f558 = 1;
                        *0x370c8 = 0;
                        break;
                    }
                }
                if (*0x3f534 == 0) {
                    *0x370cc = 1;
                    return 0xffffffff;
                }
                uVar1 = **0x370a8;
                *0x3f534 = *0x3f534 + -1;
                *0x370a8 = *0x370a8 + 1;
                *(iVar4 + 0x3f970) = uVar1;
                *0x370c8 = *0x370c8 - 1;
                iVar4 = iVar4 + 1;
            } while (iVar4 < 0x40);
        }
        *0x3f0f8 = 0;
        *0x3f0e4 = uVar7;
    }
    uVar6 = CONCAT21(CONCAT11(*(*0x3f0f8 + 2 + 0x3f970),*(*0x3f0f8 + 1 + 0x3f970)),*(*0x3f0f8 + 0x3f970));
    if (uVar7 != 0) {
        uVar6 = uVar6 >> uVar7;
    }
    *0x3f0e4 = *0x3f0e4 + *0x3f0e0;
    return *((*0x3f0e0 + -1) * 4 + 0x36ac0) & uVar6;
}


/* fcn.0002c5b8 @ 0x2c5b8 */

void fcn.0002c5b8(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uchar *puVar3;
    
    iVar1 = *0x3f548;
    if ((arg1 & 0xff) != *0x34c70) {
        uVar2 = arg1 & 0xff;
        puVar3 = (*0x370b0 << 2) + *0x3f110;
        *puVar3 = *(*0x3f548 + uVar2 * 4);
        puVar3[1] = *(iVar1 + 1 + uVar2 * 4);
        puVar3[2] = *(iVar1 + 2 + uVar2 * 4);
        puVar3[3] = 0;
    }
    *0x370b0 = *0x370b0 + 1;
    *0x370c0 = *0x370c0 + 1;
    if (*0x3f538 < *0x370c0) {
        *0x370c0 = *0x3f9c0;
        if (*0x3f520 == 0) {
            *0x370c4 = *0x370c4 + 1;
        }
        else {
            *0x370c4 = *0x370c4 + *(*0x3f540 * 4 + 0x36aa8);
            if (*0x3f52c < *0x370c4) {
                *0x3f540 = *0x3f540 + 1;
                *0x370c4 = *(*0x3f540 * 4 + 0x36a90) + *0x3f524;
            }
        }
        *0x370b0 = (*0x3f9b0 + *0x370c4) * *0x34c74 + *0x3f0f0 + *0x3f9c0;
    }
    if (*0x3f108 != *0x370b0 >> 0x10) {
        *0x3f108 = *0x370b0 >> 0x10;
    }
    return;
}


/* fcn.0002cabc @ 0x2cabc */

bool fcn.0002cabc(int64_t noname_0,int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    uVar2 = *arg2;
    uVar3 = *arg1;
    uVar1 = *(uVar3 + noname_0);
    uVar4 = uVar2 * 2;
    *arg2 = uVar4;
    if (0xff < uVar4) {
        *arg2 = 1;
        *arg1 = uVar3 + 1;
    }
    return (uVar1 & uVar2) != 0;
}


/* fcn.0002caec @ 0x2caec */

uint64_t fcn.0002caec(int64_t arg1,int64_t noname_1,int64_t noname_2,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    
    uVar4 = 0;
    uVar2 = 1;
    if (arg2 != 0) {
        uVar3 = arg2 & 0xffffffff;
        do {
            iVar1 = fcn.0002cabc(arg1,noname_1,noname_2);
            if (iVar1 != 0) {
                uVar4 = uVar4 | uVar2;
            }
            uVar2 = uVar2 * 2;
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
    }
    return uVar4 & 0xffffffff;
}


/* fcn.0002cb28 @ 0x2cb28 */

void fcn.0002cb28(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t *puVar2;
    uint *arg1_00;
    uint *arg1_01;
    uint64_t uVar3;
    uint *puVar4;
    uint **arg1_02;
    int64_t iVar5;
    uint64_t uVar6;
    int iVar7;
    int iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint *puStack_38;
    uint *puStack_30;
    
    iVar7 = arg3;
    uVar6 = arg3 & 0xffffffff;
    if (iVar7 != 0) {
        iVar5 = arg4 - arg1;
        iVar9 = arg2 - arg1;
        uVar10 = uVar6;
        do {
            *arg1 = *(iVar5 + arg1);
            *(iVar9 + arg1) = 0;
            arg1 = arg1 + 4;
            uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
    }
    uVar10 = 0;
    if (iVar7 != 0) {
        puVar2 = arg4;
        uVar3 = uVar6;
        do {
            if (uVar10 < *puVar2) {
                uVar10 = *puVar2;
            }
            puVar2 = puVar2 + 1;
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
    }
    uVar1 = uVar10;
    uVar12 = uVar1 + 1;
    arg1_00 = fcn.0001504c(uVar12 << 2);
    if (arg1_00 != NULL) {
        puStack_38 = arg1_00;
        arg1_01 = fcn.0001504c(uVar12 << 2);
        puStack_30 = arg1_01;
        if (arg1_01 == NULL) {
            arg1_02 = &puStack_38;
        }
        else {
            uVar3 = 0;
            if (uVar12 != 0) {
                if ((3 < uVar12) && ((arg1_00 + uVar10 < arg1_01 || (arg1_01 + uVar10 < arg1_00)))) {
                    do {
                        uVar11 = uVar3 + 4;
                        uVar3 = uVar11;
                    } while (uVar11 < (uVar12 & 0xfffffffc));
                    iVar5 = ((uVar12 & 0xfffffffc) + 3 & 0xfffffffffffffffc) << 2;
                    fcn.00033b70(arg1_00,0,iVar5);
                    fcn.00033b70(arg1_01,0,iVar5);
                }
                if (uVar3 < uVar12) {
                    puVar4 = arg1_01 + uVar3;
                    uVar10 = uVar12 - uVar3;
                    do {
                        *((arg1_00 - arg1_01) + puVar4) = 0;
                        *puVar4 = 0;
                        puVar4 = puVar4 + 1;
                        uVar10 = uVar10 - 1;
                    } while (uVar10 != 0);
                }
            }
            if (iVar7 != 0) {
                puVar2 = arg4;
                uVar10 = uVar6;
                do {
                    uVar12 = *puVar2;
                    puVar2 = puVar2 + 1;
                    arg1_00[uVar12] = arg1_00[uVar12] + 1;
                    uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
            }
            iVar8 = 0;
            *arg1_00 = 0;
            uVar12 = 1;
            if (uVar1 != 0) {
                do {
                    uVar10 = uVar12;
                    iVar8 = (iVar8 + arg1_00[uVar12 - 1]) * 2;
                    uVar12 = uVar12 + 1;
                    arg1_01[uVar10] = iVar8;
                } while (uVar12 <= uVar1);
            }
            if (iVar7 != 0) {
                arg4 = arg4 - arg2;
                do {
                    if (*(arg4 + arg2) != 0) {
                        uVar1 = *(arg4 + arg2);
                        *arg2 = arg1_01[uVar1];
                        arg1_01[uVar1] = arg1_01[uVar1] + 1;
                    }
                    arg2 = arg2 + 4;
                    uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
            }
            fcn.0001470c(&puStack_38);
            arg1_02 = &puStack_30;
        }
        fcn.0001470c(arg1_02);
    }
    return;
}


/* fcn.0002d034 @ 0x2d034 */

uint32_t * fcn.0002d034(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t *puVar2;
    uint32_t *puVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint32_t *puVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    
    puVar2 = fcn.0001504c(0x18);
    if (puVar2 != NULL) {
        uVar7 = 0;
        if (arg1 != 0) {
            arg3 = arg3 - arg2;
            do {
                uVar1 = *arg2;
                if (uVar1 != 0) {
                    uVar5 = 1 << (uVar1 - 1U & 0x1f);
                    uVar8 = 0;
                    puVar3 = puVar2;
                    if (uVar1 != 0) {
                        do {
                            puVar6 = puVar3 + 4;
                            if ((*(arg3 + arg2) & uVar5) == 0) {
                                puVar6 = puVar3 + 2;
                            }
                            if (*puVar6 == 0) {
                                iVar4 = fcn.0001504c(0x18);
                                *puVar6 = iVar4;
                            }
                            puVar3 = *puVar6;
                            uVar8 = uVar8 + 1;
                            uVar5 = uVar5 >> 1;
                        } while (uVar8 < *arg2);
                    }
                    *puVar3 = uVar7;
                }
                uVar7 = uVar7 + 1;
                arg2 = arg2 + 4;
            } while (uVar7 < arg1);
        }
    }
    return puVar2;
}


/* fcn.0002d0ec @ 0x2d0ec */

void fcn.0002d0ec(int64_t arg1)

{
    int64_t aiStackX_8 [4];
    
    if (arg1 != 0) {
        aiStackX_8[0] = arg1;
        fcn.0002d0ec(*(arg1 + 8));
        fcn.0002d0ec(*(arg1 + 0x10));
        fcn.0001470c(aiStackX_8);
    }
    return;
}


/* fcn.0002a9a4 @ 0x2a9a4 */

ulong fcn.0002a9a4(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    uint32_t uVar7;
    char cVar8;
    uint32_t uVar9;
    uchar uVar10;
    int iVar11;
    bool bVar12;
    
    if ((*0x422e0 <= *0x422fc) || (uVar9 = 0, *0x422e8 == 0)) {
        return 0x8000000000000003;
    }
    if (*0x422f8 == 0xffffffff) {
        *0x422f4 = arg1 & 0xff;
        *0x422f8 = 0;
        *0x42304 = 0;
        return 0;
    }
    uVar10 = arg1;
    if (*0x422b8 == 0) {
        if (*0x422ac != 0) {
            if (*0x422ac == 2) {
                if (*0x422a8 == 8) {
                    *((*0x42304 + *0x42308) + *0x42330) = uVar10;
                    iVar11 = *0x42308 + 1;
                    *0x42304 = CONCAT44(iVar11,*0x42304);
                    if (iVar11 != 3) goto code_r0x0002be6e;
                    fcn.0002a520(*0x42330,*0x42338,*0x422f8,*0x422fc);
                    *(*0x4231c + *0x422e8) = *(*0x42304 + *0x42330);
                    *(*0x4231c + 1 + *0x422e8) = *((*0x42304 + 1) + *0x42330);
                    *(*0x4231c + 2 + *0x422e8) = *((*0x42304 + 2) + *0x42330);
                    if (((*(*0x42304 + *0x42330) == *0x422d0) && (*((*0x42304 + 1) + *0x42330) == *0x422d4)) &&
                       (*((*0x42304 + 2) + *0x42330) == *0x422d8)) {
                        *(*0x4231c + 3 + *0x422e8) = 0;
                    }
                    else {
                        *(*0x4231c + 3 + *0x422e8) = 0xff;
                    }
                    *0x4231c = *0x4231c + 4;
                    *0x422f8 = *0x422f8 + 1;
                    *0x42304 = *0x42304 + 3;
                }
                else {
                    if (*0x422a8 != 0x10) goto code_r0x0002be6e;
                    *((*0x42304 + *0x42308) + *0x42330) = uVar10;
                    iVar11 = *0x42308 + 1;
                    *0x42304 = CONCAT44(iVar11,*0x42304);
                    if (iVar11 != 6) goto code_r0x0002be6e;
                    fcn.0002a520(*0x42330,*0x42338,*0x422f8,*0x422fc);
                    *(*0x4231c + *0x422e8) = *(*0x42304 + *0x42330);
                    *(*0x4231c + 1 + *0x422e8) = *((*0x42304 + 2) + *0x42330);
                    *(*0x4231c + 2 + *0x422e8) = *((*0x42304 + 4) + *0x42330);
                    *0x4230c = *(*0x42304 + *0x42330) * 0x100 + *((*0x42304 + 1) + *0x42330);
                    *0x42310 = *((*0x42304 + 2) + *0x42330) * 0x100 + *((*0x42304 + 3) + *0x42330);
                    *0x42314 = *((*0x42304 + 4) + *0x42330) * 0x100 + *((*0x42304 + 5) + *0x42330);
                    if (((*0x4230c == *0x422d0) && (*0x42310 == *0x422d4)) && (*0x42314 == *0x422d8)) {
                        *(*0x4231c + 3 + *0x422e8) = 0;
                    }
                    else {
                        *(*0x4231c + 3 + *0x422e8) = 0xff;
                    }
                    *0x4231c = *0x4231c + 4;
                    *0x422f8 = *0x422f8 + 1;
                    *0x42304 = *0x42304 + 6;
                }
            }
            else {
                if (*0x422ac == 3) {
                    if (*0x422a8 == 4) {
                        *(*0x422f8 / 2 + *0x42330) = uVar10;
                        fcn.0002a520(*0x42330,*0x42338,*0x422f8 / 2,*0x422fc);
                        do {
                            if (*0x422dc <= *0x422f8) goto code_r0x0002be7b;
                            uVar7 = *0x422f8;
                            if (*0x422f8 < 0) {
                                uVar7 = *0x422f8 + 1;
                            }
                            uVar7 = *((uVar7 >> 1) + *0x42330) >> ((1U - uVar9 & 7) << 2) & 0xf;
                            if (uVar7 < *0x422c0) {
                                uVar2 = uVar7 * 3;
                                *(*0x4231c + *0x422e8) = *(uVar2 + *0x422c8);
                                *(*0x4231c + 1 + *0x422e8) = *(uVar2 + 1 + *0x422c8);
                                *(*0x4231c + 2 + *0x422e8) = *(uVar2 + 2 + *0x422c8);
                                if (((uVar7 == *0x422d0) || (uVar7 == *0x422d4)) || (uVar7 == *0x422d8)) {
                                    *(*0x4231c + 3 + *0x422e8) = 0;
                                }
                                else {
                                    *(*0x4231c + 3 + *0x422e8) = 0xff;
                                }
                            }
                            *0x4231c = *0x4231c + 4;
                            *0x422f8 = *0x422f8 + 1;
                            uVar9 = uVar9 + 1;
                        } while (uVar9 < 2);
                        goto code_r0x0002be6e;
                    }
                    if (*0x422a8 != 8) goto code_r0x0002be6e;
                    *(*0x422f8 + *0x42330) = uVar10;
                    fcn.0002a520(*0x42330,*0x42338,*0x422f8,*0x422fc);
                    uVar1 = *(*0x422f8 + *0x42330);
                    if (*0x422c0 <= uVar1) goto code_r0x0002bd3f;
                    uVar9 = uVar1 + uVar1 * 2;
                    *(*0x4231c + *0x422e8) = *(uVar9 + *0x422c8);
                    *(*0x4231c + 1 + *0x422e8) = *(uVar9 + 1 + *0x422c8);
                    *(*0x4231c + 2 + *0x422e8) = *(uVar9 + 2 + *0x422c8);
                    if ((uVar1 != *0x422d0) && (uVar1 != *0x422d4)) {
                        bVar12 = uVar1 == *0x422d8;
                        goto code_r0x0002bd0c;
                    }
                    goto code_r0x0002bd24;
                }
                if (*0x422ac == 4) {
                    if (*0x422a8 != 8) goto code_r0x0002be6e;
                    *((*0x42304 + *0x42308) + *0x42330) = uVar10;
                    iVar11 = *0x42308 + 1;
                    *0x42304 = CONCAT44(iVar11,*0x42304);
                    if (iVar11 != 2) goto code_r0x0002be6e;
                    fcn.0002a520(*0x42330,*0x42338,*0x422f8,*0x422fc);
                    *(*0x4231c + *0x422e8) = *(*0x42304 + *0x42330);
                    *(*0x4231c + 1 + *0x422e8) = *(*0x42304 + *0x42330);
                    *(*0x4231c + 2 + *0x422e8) = *(*0x42304 + *0x42330);
                    *(*0x4231c + 3 + *0x422e8) = *((*0x42304 + 1) + *0x42330);
                    *0x4231c = *0x4231c + 4;
                    *0x422f8 = *0x422f8 + 1;
                    *0x42304 = *0x42304 + 2;
                }
                else {
                    if ((*0x422ac != 6) || (*0x422a8 != 8)) goto code_r0x0002be6e;
                    *((*0x42304 + *0x42308) + *0x42330) = uVar10;
                    iVar11 = *0x42308 + 1;
                    *0x42304 = CONCAT44(iVar11,*0x42304);
                    if (iVar11 != 4) goto code_r0x0002be6e;
                    fcn.0002a520(*0x42330,*0x42338,*0x422f8,*0x422fc);
                    *(*0x4231c + *0x422e8) = *(*0x42304 + *0x42330);
                    *(*0x4231c + 1 + *0x422e8) = *((*0x42304 + 1) + *0x42330);
                    *(*0x4231c + 2 + *0x422e8) = *((*0x42304 + 2) + *0x42330);
                    *(*0x4231c + 3 + *0x422e8) = *((*0x42304 + 3) + *0x42330);
                    *0x4231c = *0x4231c + 4;
                    *0x422f8 = *0x422f8 + 1;
                    *0x42304 = *0x42304 + 4;
                }
            }
            *0x42304 = *0x42304;
            goto code_r0x0002be6e;
        }
        if (*0x422a8 == 1) {
            *((*0x422f8 + (*0x422f8 >> 0x1f & 7U) >> 3) + *0x42330) = uVar10;
            fcn.0002a520(*0x42330,*0x42338,(*0x422f8 >> 0x1f & 7U) + *0x422f8 >> 3,*0x422fc);
            do {
                if (*0x422dc <= *0x422f8) goto code_r0x0002be7b;
                uVar7 = *0x422f8;
                if (*0x422f8 < 0) {
                    uVar7 = *0x422f8 + 7;
                }
                cVar8 = uVar9;
                uVar9 = uVar9 + 1;
                cVar8 = -(*((uVar7 >> 3) + *0x42330) >> (7U - cVar8 & 0x1f) & 1);
                *(*0x4231c + *0x422e8) = cVar8;
                *(*0x4231c + 1 + *0x422e8) = cVar8;
                *(*0x4231c + 2 + *0x422e8) = cVar8;
                *(*0x4231c + 3 + *0x422e8) = 0;
                *0x422f8 = *0x422f8 + 1;
                *0x4231c = *0x4231c + 4;
            } while (uVar9 < 8);
            goto code_r0x0002be6e;
        }
        if (*0x422a8 != 8) goto code_r0x0002be6e;
        *(*0x422f8 + *0x42330) = uVar10;
        fcn.0002a520(*0x42330,*0x42338,*0x422f8,*0x422fc);
        *(*0x4231c + *0x422e8) = *(*0x422f8 + *0x42330);
        *(*0x4231c + 1 + *0x422e8) = *(*0x422f8 + *0x42330);
        *(*0x4231c + 2 + *0x422e8) = *(*0x422f8 + *0x42330);
        uVar1 = *(*0x422f8 + *0x42330);
        if ((uVar1 == *0x422d0) || (uVar1 == *0x422d4)) {
code_r0x0002bd24:
            *(*0x4231c + 3 + *0x422e8) = 0;
        }
        else {
            bVar12 = uVar1 == *0x422d8;
code_r0x0002bd0c:
            if (bVar12) goto code_r0x0002bd24;
            *(*0x4231c + 3 + *0x422e8) = 0xff;
        }
code_r0x0002bd3f:
        *0x422f8 = *0x422f8 + 1;
        *0x4231c = *0x4231c + 4;
code_r0x0002be6e:
        if (*0x422f8 < *0x422dc) {
            return 0;
        }
code_r0x0002be7b:
        iVar3 = *0x42330;
        *0x422fc = *0x422fc + 1;
        if (*0x42328 != 0) {
            *0x422f8 = 0xffffffff;
            *0x42330 = *0x42338;
            *0x42338 = iVar3;
            return 0;
        }
        *0x422f8 = 0xffffffff;
        return 0;
    }
    if (*0x422b8 != 1) {
        return 0x8000000000000003;
    }
    if (*0x42320 == 1) {
        iVar11 = *0x422dc + 7;
        uVar9 = *0x422f8 << 3;
code_r0x0002ab86:
        iVar5 = (iVar11 >> 0x1f & 7U) + iVar11 >> 3;
        iVar4 = (*0x422e0 + 7 >> 0x1f & 7U) + *0x422e0 + 7 >> 3;
        iVar11 = *0x422fc << 3;
    }
    else {
        if (*0x42320 == 2) {
            uVar9 = *0x422f8 * 8 + 4;
            iVar11 = *0x422dc + 3;
            goto code_r0x0002ab86;
        }
        if (*0x42320 == 3) {
            iVar5 = (*0x422dc + 3 >> 0x1f & 3U) + *0x422dc + 3 >> 2;
            iVar4 = (*0x422e0 + 3 >> 0x1f & 7U) + *0x422e0 + 3 >> 3;
            uVar9 = *0x422f8 << 2;
            iVar11 = *0x422fc * 8 + 4;
        }
        else if (*0x42320 == 4) {
            uVar9 = *0x422f8 * 4 + 2;
            iVar5 = (*0x422dc + 1 >> 0x1f & 3U) + *0x422dc + 1 >> 2;
            iVar4 = (*0x422e0 + 3 >> 0x1f & 3U) + *0x422e0 + 3 >> 2;
            iVar11 = *0x422fc << 2;
        }
        else if (*0x42320 == 5) {
            uVar9 = *0x422f8 * 2;
            iVar5 = (*0x422dc + 1) / 2;
            iVar4 = (*0x422e0 + 1 >> 0x1f & 3U) + *0x422e0 + 1 >> 2;
            iVar11 = *0x422fc * 4 + 2;
        }
        else if (*0x42320 == 6) {
            uVar9 = *0x422f8 * 2 + 1;
            iVar5 = *0x422dc / 2;
            iVar4 = (*0x422e0 + 1) / 2;
            iVar11 = *0x422fc * 2;
        }
        else {
            if (*0x42320 != 7) {
                return 0x8000000000000003;
            }
            iVar4 = *0x422e0 / 2;
            iVar11 = *0x422fc * 2 + 1;
            iVar5 = *0x422dc;
            uVar9 = *0x422f8;
        }
    }
    if (*0x422ac != 0) {
        if (*0x422ac == 2) {
            if (*0x422a8 == 8) {
                *((*0x42304 + *0x42308) + *0x42330) = uVar10;
                iVar6 = *0x42308 + 1;
                *0x42304 = CONCAT44(iVar6,*0x42304);
                if (iVar6 != 3) goto code_r0x0002b3b8;
                fcn.0002a520(*0x42330,*0x42338,*0x422f8,*0x422fc);
                *0x4231c = (*0x422dc * iVar11 + uVar9) * 4;
                *(*0x4231c + *0x422e8) = *(*0x42304 + *0x42330);
                *(*0x4231c + 1 + *0x422e8) = *((*0x42304 + 1) + *0x42330);
                *(*0x4231c + 2 + *0x422e8) = *((*0x42304 + 2) + *0x42330);
                if (((*(*0x42304 + *0x42330) == *0x422d0) && (*((*0x42304 + 1) + *0x42330) == *0x422d4)) &&
                   (*((*0x42304 + 2) + *0x42330) == *0x422d8)) {
                    *(*0x4231c + 3 + *0x422e8) = 0;
                }
                else {
                    *(*0x4231c + 3 + *0x422e8) = 0xff;
                }
                *0x422f8 = *0x422f8 + 1;
                *0x42304 = *0x42304 + 3;
            }
            else {
                if (*0x422a8 != 0x10) goto code_r0x0002b3b8;
                *((*0x42304 + *0x42308) + *0x42330) = uVar10;
                iVar6 = *0x42308 + 1;
                *0x42304 = CONCAT44(iVar6,*0x42304);
                if (iVar6 != 6) goto code_r0x0002b3b8;
                fcn.0002a520(*0x42330,*0x42338,*0x422f8,*0x422fc);
                *0x4231c = (*0x422dc * iVar11 + uVar9) * 4;
                *(*0x4231c + *0x422e8) = *(*0x42304 + *0x42330);
                *(*0x4231c + 1 + *0x422e8) = *((*0x42304 + 2) + *0x42330);
                *(*0x4231c + 2 + *0x422e8) = *((*0x42304 + 4) + *0x42330);
                *0x4230c = *(*0x42304 + *0x42330) * 0x100 + *((*0x42304 + 1) + *0x42330);
                *0x42310 = *((*0x42304 + 2) + *0x42330) * 0x100 + *((*0x42304 + 3) + *0x42330);
                *0x42314 = *((*0x42304 + 4) + *0x42330) * 0x100 + *((*0x42304 + 5) + *0x42330);
                if (((*0x4230c == *0x422d0) && (*0x42310 == *0x422d4)) && (*0x42314 == *0x422d8)) {
                    *(*0x4231c + 3 + *0x422e8) = 0;
                }
                else {
                    *(*0x4231c + 3 + *0x422e8) = 0xff;
                }
                *0x422f8 = *0x422f8 + 1;
                *0x42304 = *0x42304 + 6;
            }
        }
        else {
            if (*0x422ac == 3) {
                if (*0x422a8 != 8) goto code_r0x0002b3b8;
                *(*0x42304 + *0x42330) = uVar10;
                fcn.0002a520(*0x42330,*0x42338,*0x422f8,*0x422fc);
                *0x4231c = (*0x422dc * iVar11 + uVar9) * 4;
                uVar1 = *(*0x42304 + *0x42330);
                if (*0x422c0 <= uVar1) goto code_r0x0002b3a1;
                uVar9 = uVar1 + uVar1 * 2;
                *(*0x4231c + *0x422e8) = *(uVar9 + *0x422c8);
                *(*0x4231c + 1 + *0x422e8) = *(uVar9 + 1 + *0x422c8);
                *(*0x4231c + 2 + *0x422e8) = *(uVar9 + 2 + *0x422c8);
                if ((uVar1 != *0x422d0) && (uVar1 != *0x422d4)) {
                    bVar12 = uVar1 == *0x422d8;
                    goto code_r0x0002b375;
                }
                goto code_r0x0002b38d;
            }
            if (*0x422ac == 4) {
                if (*0x422a8 != 8) goto code_r0x0002b3b8;
                *((*0x42304 + *0x42308) + *0x42330) = uVar10;
                iVar6 = *0x42308 + 1;
                *0x42304 = CONCAT44(iVar6,*0x42304);
                if (iVar6 != 2) goto code_r0x0002b3b8;
                fcn.0002a520(*0x42330,*0x42338,*0x422f8,*0x422fc);
                *0x4231c = (*0x422dc * iVar11 + uVar9) * 4;
                *(*0x4231c + *0x422e8) = *(*0x42304 + *0x42330);
                *(*0x4231c + 1 + *0x422e8) = *(*0x42304 + *0x42330);
                *(*0x4231c + 2 + *0x422e8) = *(*0x42304 + *0x42330);
                *(*0x4231c + 3 + *0x422e8) = *((*0x42304 + 1) + *0x42330);
                *0x422f8 = *0x422f8 + 1;
                *0x42304 = *0x42304 + 2;
            }
            else {
                if ((*0x422ac != 6) || (*0x422a8 != 8)) goto code_r0x0002b3b8;
                *((*0x42304 + *0x42308) + *0x42330) = uVar10;
                iVar6 = *0x42308 + 1;
                *0x42304 = CONCAT44(iVar6,*0x42304);
                if (iVar6 != 4) goto code_r0x0002b3b8;
                fcn.0002a520(*0x42330,*0x42338,*0x422f8,*0x422fc);
                *0x4231c = (*0x422dc * iVar11 + uVar9) * 4;
                *(*0x4231c + *0x422e8) = *(*0x42304 + *0x42330);
                *(*0x4231c + 1 + *0x422e8) = *((*0x42304 + 1) + *0x42330);
                *(*0x4231c + 2 + *0x422e8) = *((*0x42304 + 2) + *0x42330);
                *(*0x4231c + 3 + *0x422e8) = *((*0x42304 + 3) + *0x42330);
                *0x422f8 = *0x422f8 + 1;
                *0x42304 = *0x42304 + 4;
            }
        }
        *0x42304 = *0x42304;
        goto code_r0x0002b3b8;
    }
    if (*0x422a8 != 8) goto code_r0x0002b3b8;
    *(*0x42304 + *0x42330) = uVar10;
    fcn.0002a520(*0x42330,*0x42338,*0x422f8,*0x422fc);
    *0x4231c = (*0x422dc * iVar11 + uVar9) * 4;
    *(*0x4231c + *0x422e8) = *(*0x42304 + *0x42330);
    *(*0x4231c + 1 + *0x422e8) = *(*0x42304 + *0x42330);
    *(*0x4231c + 2 + *0x422e8) = *(*0x42304 + *0x42330);
    uVar1 = *(*0x42304 + *0x42330);
    if ((uVar1 == *0x422d0) || (uVar1 == *0x422d4)) {
code_r0x0002b38d:
        *(*0x4231c + 3 + *0x422e8) = 0;
    }
    else {
        bVar12 = uVar1 == *0x422d8;
code_r0x0002b375:
        if (bVar12) goto code_r0x0002b38d;
        *(*0x4231c + 3 + *0x422e8) = 0xff;
    }
code_r0x0002b3a1:
    *0x422f8 = *0x422f8 + 1;
    *0x42304 = *0x42304 + 1;
code_r0x0002b3b8:
    iVar3 = *0x42330;
    if (iVar5 <= *0x422f8) {
        *0x422fc = *0x422fc + 1;
        *0x422f8 = 0xffffffff;
        if (*0x42328 != 0) {
            *0x42330 = *0x42338;
            *0x42338 = iVar3;
        }
        if (iVar4 <= *0x422fc) {
            *0x42320 = *0x42320 + 1;
            *0x422fc = 0;
        }
    }
    return 0;
}


/* fcn.0002ccf8 @ 0x2ccf8 */

ulong fcn.0002ccf8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint uVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t *puVar6;
    ulong uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    int64_t noname_2;
    uint32_t *puVar12;
    int64_t *in_stack_00000028;
    int64_t *in_stack_00000030;
    int64_t *in_stack_00000038;
    int64_t in_stack_00000040;
    uint in_stack_00000048;
    uint in_stack_0000004c;
    int64_t in_stack_00000050;
    int64_t in_stack_00000058;
    int64_t in_stack_00000060;
    uint32_t auStack_128 [20];
    uint auStack_d8 [20];
    uchar auStack_88 [80];
    
    *arg2 = 0;
    *arg3 = 0;
    uVar10 = 0;
    *arg1 = 0;
    auStack_128[0] = 0x10;
    auStack_128[1] = 0x11;
    auStack_128[2] = 0x12;
    auStack_128[3] = 0;
    auStack_128[4] = 8;
    auStack_128[5] = 7;
    auStack_128[6] = 9;
    auStack_128[7] = 6;
    auStack_128[8] = 10;
    auStack_128[9] = 5;
    auStack_128[10] = 0xb;
    auStack_128[0xb] = 4;
    auStack_128[0xc] = 0xc;
    auStack_128[0xd] = 3;
    auStack_128[0xe] = 0xd;
    auStack_128[0xf] = 2;
    auStack_128[0x10] = 0xe;
    auStack_128[0x11] = 1;
    auStack_128[0x12] = 0xf;
    iVar8 = in_stack_00000050;
    iVar9 = in_stack_00000058;
    noname_2 = in_stack_00000060;
    uVar2 = fcn.0002caec(in_stack_00000050,in_stack_00000058,in_stack_00000060,5);
    *arg1 = uVar2;
    uVar2 = fcn.0002caec(iVar8,iVar9,noname_2,5);
    *arg2 = uVar2;
    iVar3 = fcn.0002caec(iVar8,iVar9,noname_2,4);
    *arg3 = iVar3;
    fcn.00033b70(auStack_d8,0,0x4c);
    if (iVar3 + 4U != 0) {
        puVar6 = auStack_128;
        uVar11 = iVar3 + 4U;
        do {
            uVar2 = fcn.0002caec(in_stack_00000050,in_stack_00000058,in_stack_00000060,3);
            uVar4 = *puVar6;
            puVar6 = puVar6 + 1;
            auStack_d8[uVar4] = uVar2;
            uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
    }
    fcn.0002cb28(auStack_88,auStack_128,0x13,auStack_d8);
    uVar4 = *arg1;
    *arg4 = in_stack_00000040;
    *in_stack_00000028 = CONCAT44(in_stack_0000004c,in_stack_00000048);
    *in_stack_00000030 = in_stack_00000040 + 0x404 + uVar4 * 4;
    *in_stack_00000038 = CONCAT44(in_stack_0000004c,in_stack_00000048) + 0x404 + uVar4 * 4;
    puVar6 = fcn.0002d034(0x13,auStack_88,auStack_128);
    if (puVar6 == NULL) {
        uVar7 = 0x8000000000000015;
    }
    else {
        iVar3 = *arg1;
        uVar4 = *arg2 + 0x102 + iVar3;
        puVar12 = puVar6;
        if (uVar4 != 0) {
            do {
                iVar8 = in_stack_00000058;
                iVar9 = in_stack_00000060;
                iVar5 = fcn.0002cabc(in_stack_00000050,in_stack_00000058,in_stack_00000060);
                if (iVar5 == 0) {
                    if (*(puVar12 + 2) != NULL) {
                        puVar12 = *(puVar12 + 2);
                    }
                }
                else if (*(puVar12 + 4) != NULL) {
                    puVar12 = *(puVar12 + 4);
                }
                if ((*(puVar12 + 2) == 0) && (*(puVar12 + 4) == 0)) {
                    uVar1 = *puVar12;
                    if (uVar1 < 0x10) {
                        *(in_stack_00000040 + uVar10 * 4) = uVar1;
                        uVar10 = uVar10 + 1;
                    }
                    else if (uVar1 == 0x10) {
                        iVar5 = fcn.0002caec(in_stack_00000050,iVar8,iVar9,2);
                        for (iVar5 = iVar5 + 3; iVar5 != 0; iVar5 = iVar5 + -1) {
                            *(in_stack_00000040 + uVar10 * 4) = *(in_stack_00000040 + (uVar10 - 1) * 4);
                            uVar10 = uVar10 + 1;
                        }
                    }
                    else if (uVar1 == 0x11) {
                        iVar5 = fcn.0002caec(in_stack_00000050,iVar8,iVar9,3);
                        for (iVar5 = iVar5 + 3; iVar5 != 0; iVar5 = iVar5 + -1) {
                            *(in_stack_00000040 + uVar10 * 4) = 0;
                            uVar10 = uVar10 + 1;
                        }
                    }
                    else if (uVar1 == 0x12) {
                        iVar5 = fcn.0002caec(in_stack_00000050,iVar8,iVar9,7);
                        for (iVar5 = iVar5 + 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
                            *(in_stack_00000040 + uVar10 * 4) = 0;
                            uVar10 = uVar10 + 1;
                        }
                    }
                    puVar12 = puVar6;
                }
            } while (uVar10 < uVar4);
        }
        fcn.0002cb28(*arg4,*in_stack_00000028,iVar3 + 0x101,*arg4);
        fcn.0002cb28(*in_stack_00000030,*in_stack_00000038,*arg2 + 1,*in_stack_00000030);
        fcn.0002d0ec(puVar6);
        uVar7 = 0;
    }
    return uVar7;
}


/* fcn.0002de20 @ 0x2de20 */

void fcn.0002de20(ulong noname_0,ulong noname_1,int64_t arg1,int64_t arg2)

{
    char *arg1_00;
    uint16_t uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint64_t uVar4;
    uint64_t arg2_00;
    uint16_t uStackX_20;
    int16_t in_stack_00000028;
    
    uStackX_20 = arg2;
    uVar4 = 0;
    uVar1 = 0;
    if (in_stack_00000028 == 0x122) {
        uStackX_20 = uStackX_20 + 0xf >> 4;
    }
    else if (in_stack_00000028 == 0x111) {
        uStackX_20 = uStackX_20 + 7 >> 3;
    }
    if (uStackX_20 != 0) {
        arg2_00 = 8;
        do {
            arg1_00 = NULL;
            uVar3 = 0;
            if (in_stack_00000028 == 0x122) {
                for (uVar2 = arg1 + 0xfU >> 4; uVar2 != 0; uVar2 = uVar2 - 1) {
                    fcn.0002da58(arg1_00,0x122);
                    fcn.0002e0c4(uVar3,uVar1,0x41920);
                    fcn.0002e0c4(uVar3 + 8,uVar1,0x41a20);
                    fcn.0002e0c4(uVar3,arg2_00,0x41b20);
                    arg1_00 = uVar3 + 8;
                    fcn.0002e0c4(arg1_00,arg2_00,0x41c20);
                    uVar3 = uVar3 + 0x10;
                    uVar4 = uVar4 + 1;
                    if (((*0x3f9d0 != 0) && (arg1_00 = *0x3f9d0, uVar4 % *0x3f9d0 == 0)) &&
                       ((arg1_00 = *0x40eb0, **0x40eb0 == -1 && (((*0x40eb0)[1] & 0xf8U) == 0xd0)))) {
                        arg1_00 = *0x40eb0 + 2;
                        *0x40d08 = 0;
                        *0x421c0 = 0;
                        *0x4191e = 0;
                        *0x4191c = 8;
                        *0x40da0 = 0;
                        *0x40eb0 = arg1_00;
                    }
                }
                uVar1 = uVar1 + 0x10;
                arg2_00 = arg2_00 + 0x10;
            }
            else if (in_stack_00000028 == 0x111) {
                for (uVar2 = arg1 + 7U >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
                    fcn.0002da58(arg1_00,0x111);
                    arg1_00 = uVar3;
                    fcn.0002e0c4(arg1_00,uVar1,0x41920);
                    uVar3 = uVar3 + 8;
                    uVar4 = uVar4 + 1;
                    if ((((*0x3f9d0 != 0) && (arg1_00 = *0x3f9d0, uVar4 % *0x3f9d0 == 0)) &&
                        (arg1_00 = *0x40eb0, **0x40eb0 == -1)) && (((*0x40eb0)[1] & 0xf8U) == 0xd0)) {
                        arg1_00 = *0x40eb0 + 2;
                        *0x40d08 = 0;
                        *0x421c0 = 0;
                        *0x4191e = 0;
                        *0x4191c = 8;
                        *0x40da0 = 0;
                        *0x40eb0 = arg1_00;
                    }
                }
                uVar1 = uVar1 + 8;
                arg2_00 = arg2_00 + 8;
            }
            uStackX_20 = uStackX_20 - 1;
        } while (uStackX_20 != 0);
    }
    return;
}


/* fcn.0002dca8 @ 0x2dca8 */

void fcn.0002dca8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    uint8_t uVar2;
    int64_t iVar3;
    uint16_t *puVar4;
    uint32_t uVar5;
    uint16_t uVar6;
    uint64_t uVar7;
    uint16_t uVar8;
    
    uVar8 = 0;
    uVar5 = 0;
    uVar6 = uVar8;
    while( true ) {
        uVar6 = uVar6 * 2;
        iVar3 = fcn.0002ddac();
        if (iVar3 != 0) {
            uVar6 = uVar6 | 1;
        }
        uVar8 = uVar8 + 1;
        if (uVar8 == 0xffff) break;
        uVar1 = *arg1;
        puVar4 = arg1;
        while (uVar1 <= uVar8) {
            if ((uVar8 == uVar1) && (uVar6 == puVar4[1])) {
                uVar6 = puVar4[2];
                *arg3 = uVar6;
                uVar6 = uVar6 & 0xf;
                if (uVar6 != 0) {
                    uVar7 = uVar6;
                    do {
                        uVar5 = uVar5 * 2;
                        iVar3 = fcn.0002ddac();
                        if (iVar3 != 0) {
                            uVar5 = uVar5 | 1;
                        }
                        uVar7 = uVar7 - 1;
                    } while (uVar7 != 0);
                }
                uVar2 = uVar6 - 1;
                if ((uVar6 != 0) && ((uVar5 >> (uVar2 & 0xf) & 1) == 0)) {
                    uVar2 = 0x1e - uVar2;
                    uVar5 = ((uVar5 << (uVar2 & 0x1f) | 0x80000000) >> (uVar2 & 0x1f)) + 1;
                }
                *arg2 = uVar5;
                return;
            }
            puVar4 = puVar4 + 3;
            uVar1 = *puVar4;
        }
    }
    return;
}


/* fcn.0002e4c4 @ 0x2e4c4 */

void fcn.0002e4c4(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int *piVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int64_t iVar11;
    int iVar12;
    int iVar13;
    int aiStack_58 [4];
    int iStack_48;
    int iStack_44;
    int iStack_40;
    int iStack_3c;
    
    piVar5 = aiStack_58;
    iVar1 = 0;
    iVar11 = 8;
    do {
        *piVar5 = iVar1;
        iVar1 = iVar1 + (arg2 & 0xffff);
        piVar5 = piVar5 + 1;
        iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    iVar8 = *(arg1 + aiStack_58[1] * 2);
    iVar4 = *(arg1 + aiStack_58[3] * 2);
    iVar1 = iVar4 + iVar8;
    iVar7 = *arg1 * 0x2d41 >> 0xe;
    iVar6 = *(arg1 + aiStack_58[2] * 2);
    iVar3 = *(arg1 + iStack_44 * 2);
    iVar9 = *(arg1 + iStack_48 * 2) * 0x2d41 >> 0xe;
    iVar2 = iVar7 - iVar9;
    iVar7 = iVar7 + iVar9;
    iVar9 = (*(arg1 + iStack_40 * 2) + iVar6) * 0x2d41 >> 0xe;
    iVar12 = (*(arg1 + iStack_3c * 2) + iVar3 + iVar1) * 0x2d41 >> 0xe;
    iVar4 = (iVar3 + iVar4) * 0x2d41 >> 0xe;
    iVar10 = (iVar9 + iVar6) * 0x22a3 >> 0xe;
    iVar9 = (iVar6 - iVar9) * 0x539f >> 0xe;
    iVar3 = iVar4 + iVar8;
    iVar8 = iVar8 - iVar4;
    iVar4 = iVar10 + iVar7;
    iVar7 = iVar7 - iVar10;
    iVar13 = (iVar1 - iVar12) * 0x539f >> 0xe;
    iVar6 = iVar9 + iVar2;
    iVar1 = (iVar12 + iVar1) * 0x22a3 >> 0xe;
    iVar2 = iVar2 - iVar9;
    iVar10 = (iVar1 + iVar3) * 0x20a0 >> 0xe;
    iVar9 = (iVar13 + iVar8) * 0x267c >> 0xe;
    iVar8 = (iVar8 - iVar13) * 0x3999 >> 0xe;
    iVar1 = (iVar3 - iVar1) * 0xa406 >> 0xe;
    *arg1 = iVar10 + iVar4 >> 1;
    *(arg1 + iStack_3c * 2) = iVar4 - iVar10 >> 1;
    *(arg1 + aiStack_58[1] * 2) = iVar9 + iVar6 >> 1;
    *(arg1 + iStack_40 * 2) = iVar6 - iVar9 >> 1;
    *(arg1 + aiStack_58[2] * 2) = iVar8 + iVar2 >> 1;
    *(arg1 + iStack_44 * 2) = iVar2 - iVar8 >> 1;
    *(arg1 + aiStack_58[3] * 2) = iVar1 + iVar7 >> 1;
    *(arg1 + iStack_48 * 2) = iVar7 - iVar1 >> 1;
    return;
}


/* fcn.0002d8c4 @ 0x2d8c4 */

void fcn.0002d8c4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t *piVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ushort *puVar6;
    uint16_t auStackX_18 [4];
    ushort auStackX_20 [4];
    int64_t in_stack_00000028;
    int in_stack_00000030;
    
    iVar5 = 0;
    auStackX_18[0] = 0;
    auStackX_20[0] = 0;
    fcn.00033b7e(arg3,0x80,0);
    fcn.0002dca8(arg1,auStackX_20,auStackX_18);
    iVar3 = 1;
    *arg3 = auStackX_20[0];
    do {
        fcn.0002dca8(arg2,auStackX_20,auStackX_18);
        if (auStackX_18[0] == 0) break;
        auStackX_18[0] = auStackX_18[0] >> 4 & 0xf;
        if (auStackX_18[0] != 0) {
            puVar6 = arg3 + iVar3 * 2;
            for (uVar2 = auStackX_18[0]; uVar2 != 0; uVar2 = uVar2 - 1) {
                *puVar6 = 0;
                puVar6 = puVar6 + 1;
            }
            iVar3 = iVar3 + auStackX_18[0];
            do {
                auStackX_18[0] = auStackX_18[0] - 1;
            } while (auStackX_18[0] != 0);
            auStackX_18[0] = 0;
        }
        *(arg3 + iVar3 * 2) = auStackX_20[0];
        iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40);
    *arg4 = *arg4 + *arg3;
    *arg3 = *arg4;
    iVar3 = iVar5;
    do {
        *(arg3 + iVar3 * 2) = *(arg3 + iVar3 * 2) * *(iVar3 + in_stack_00000028);
        iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40);
    iVar3 = iVar5;
    do {
        *(iVar3 + 0x40dc0) = *(arg3 + *(iVar3 + 0x36af0) * 2);
        iVar3 = iVar3 + 2;
    } while (iVar3 < 0x80);
    (**(*0x36d88 + 0x160))(arg3,0x40dc0,0x80);
    iVar4 = 8;
    iVar3 = arg3;
    do {
        fcn.0002e4c4(iVar3,1);
        iVar3 = iVar3 + 0x10;
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 8;
    iVar3 = arg3;
    do {
        fcn.0002e4c4(iVar3,8);
        iVar3 = iVar3 + 2;
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (in_stack_00000030 != 0) {
        do {
            piVar1 = arg3 + iVar5 * 2;
            *piVar1 = *piVar1 + 0x80;
            iVar5 = iVar5 + 1;
        } while (iVar5 < 0x40);
    }
    return;
}


/* fcn.0002e41c @ 0x2e41c */

uint fcn.0002e41c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ushort uVar1;
    int iVar2;
    uint32_t uVar3;
    uchar uVar4;
    uint32_t uVar5;
    int iVar6;
    uint uStackX_8;
    
    iVar6 = arg1 * 0x4000;
    iVar2 = arg2;
    uVar3 = iVar6 + arg3 * 0x5b68 >> 0xe;
    uVar5 = 0;
    if ((uVar3 & 0x8000) == 0) {
        uVar5 = uVar3;
    }
    uVar1 = uVar5;
    if (0xff < (uVar5 & 0xffff)) {
        uVar1 = 0xff;
    }
    uVar5 = iVar6 + iVar2 * -0x1606 + arg3 * -0x2db4 >> 0xe;
    if ((uVar5 & 0x8000) != 0) {
        uVar5 = 0;
    }
    if (0xff < (uVar5 & 0xffff)) {
        uVar5 = 0xff;
    }
    uVar3 = iVar2 * 0x6e1e + (iVar2 * 0x1606 >> 3) + iVar6 >> 0xe;
    if ((uVar3 & 0x8000) != 0) {
        uVar3 = 0;
    }
    uVar4 = uVar3;
    if (0xff < (uVar3 & 0xffff)) {
        uVar4 = 0xff;
    }
    uStackX_8 = CONCAT31(CONCAT21(uVar1,uVar5),uVar4);
    return uStackX_8;
}


/* fcn.0002ddac @ 0x2ddac */

bool fcn.0002ddac(void)

{
    uint8_t uVar1;
    uint8_t *puVar2;
    
    if (*0x4191c == '\b') {
        *0x40da0 = **0x40eb0;
        puVar2 = *0x40eb0 + 1;
        if ((*0x40da0 == 0xff) && (uVar1 = *puVar2, puVar2 = *0x40eb0 + 2, uVar1 != 0)) {
            *0x40da0 = *puVar2;
            puVar2 = *0x40eb0 + 3;
        }
        *0x4191c = '\0';
        *0x40eb0 = puVar2;
    }
    *0x4191c = *0x4191c + '\x01';
    return (*0x40da0 & '\x01' << (8U - *0x4191c & 0x1f)) != 0;
}


/* fcn.0002da58 @ 0x2da58 */

void fcn.0002da58(ulong noname_0,int64_t arg1)

{
    uint uVar1;
    uint32_t uVar2;
    int16_t iVar3;
    int64_t iVar4;
    int iVar5;
    uint *puVar6;
    
    iVar3 = arg1;
    fcn.0002d8c4(0x40e60,0x41080,0x41480,0x40d08);
    if (iVar3 == 0x122) {
        fcn.0002d8c4(0x40e60,0x41080,0x42140,0x40d08);
        fcn.0002d8c4(0x40e60,0x41080,0x40d20,0x40d08);
        fcn.0002d8c4(0x40e60,0x41080,0x40f80,0x40d08);
    }
    iVar5 = 0;
    fcn.0002d8c4(0x40ec0,0x41520,0x421e0,0x421c0);
    fcn.0002d8c4(0x40ec0,0x41520,0x41000,0x4191e);
    puVar6 = 0x41b20;
    iVar4 = 0;
    do {
        if (iVar3 == 0x111) {
            uVar1 = fcn.0002e41c(*(iVar4 + 0x41480),*(iVar4 + 0x421e0),*(iVar4 + 0x41000));
            puVar6[-0x80] = uVar1;
        }
        else if (iVar3 == 0x122) {
            uVar2 = iVar5 >> 1 & 0x7ffb;
            uVar1 = fcn.0002e41c(*(iVar4 + 0x41480),*(uVar2 * 2 + 0x421e0),*(uVar2 * 2 + 0x41000));
            puVar6[-0x80] = uVar1;
            uVar1 = fcn.0002e41c(*(iVar4 + 0x42140),*((uVar2 + 4) * 2 + 0x421e0),*((uVar2 + 4) * 2 + 0x41000));
            puVar6[-0x40] = uVar1;
            uVar1 = fcn.0002e41c(*(iVar4 + 0x40d20),*((uVar2 + 0x20) * 2 + 0x421e0),*((uVar2 + 0x20) * 2 + 0x41000));
            *puVar6 = uVar1;
            uVar1 = fcn.0002e41c(*(iVar4 + 0x40f80),*((uVar2 + 0x24) * 2 + 0x421e0),*((uVar2 + 0x24) * 2 + 0x41000));
            puVar6[0x40] = uVar1;
        }
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 1;
        iVar4 = iVar4 + 2;
    } while (iVar5 < 0x40);
    return;
}


/* fcn.0002e0c4 @ 0x2e0c4 */

void fcn.0002e0c4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar *puVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    
    iVar4 = 0;
    uVar2 = arg2 & 0xffff;
    iVar5 = *0x3f9c8 + (uVar2 * *0x42120 + (arg1 & 0xffffU)) * 4;
    do {
        if (*0x40eb8 <= uVar2 + iVar4) {
            return;
        }
        puVar1 = iVar5 + 2;
        iVar6 = 8;
        uVar3 = arg1 & 0xffffU;
        do {
            if (uVar3 < *0x42120) {
                puVar1[-2] = *arg3;
                puVar1[-1] = *(arg3 + 1);
                *puVar1 = *(arg3 + 2);
            }
            arg3 = arg3 + 4;
            uVar3 = uVar3 + 1;
            puVar1 = puVar1 + 4;
            iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + *0x42120 * 4;
    } while (iVar4 < 8);
    return;
}


/* fcn.0002d820 @ 0x2d820 */

void fcn.0002d820(int64_t arg1,int64_t arg2)

{
    uint8_t *puVar1;
    uint8_t *puVar2;
    int iVar3;
    uint8_t *puVar4;
    int64_t iVar5;
    uint32_t uVar6;
    int16_t iVar7;
    uint8_t uVar8;
    
    iVar3 = 0;
    iVar7 = 0;
    iVar5 = 0;
    puVar2 = arg2 + 1;
    uVar8 = 1;
    puVar4 = puVar2;
    do {
        uVar6 = *puVar2;
        if (*puVar2 != 0) {
            iVar3 = iVar3 + uVar6 * 3;
            do {
                *(arg1 + iVar5 * 2) = uVar8;
                uVar6 = uVar6 - 1;
                *(arg1 + (iVar5 + 1) * 2) = iVar7;
                puVar1 = puVar4 + 0x10;
                iVar7 = iVar7 + 1;
                puVar4 = puVar4 + 1;
                *(arg1 + (iVar5 + 2) * 2) = *puVar1;
                iVar5 = iVar5 + 3;
            } while (0 < uVar6);
        }
        iVar7 = iVar7 * 2;
        puVar2 = puVar2 + 1;
        uVar8 = uVar8 + 1;
    } while (uVar8 < 0x11);
    *(arg1 + iVar3 * 2) = 0x11;
    return;
}


/* fcn.0002e150 @ 0x2e150 */

void fcn.0002e150(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    char cVar2;
    char *pcVar3;
    ulong *puVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    
    iVar6 = 0;
    if (arg1 != '\0') {
        do {
            pcVar3 = *(iVar6 * 8 + 0x40e40);
            if (*pcVar3 == '\0') {
                iVar7 = 0;
                do {
                    pcVar1 = iVar7 + 0x42260;
                    iVar7 = iVar7 + 1;
                    *pcVar1 = (pcVar3 + -0x4225f)[pcVar1];
                } while (iVar7 < 0x40);
            }
            else if (*pcVar3 == '\x01') {
                iVar7 = 0;
                do {
                    pcVar1 = iVar7 + 0x40f20;
                    iVar7 = iVar7 + 1;
                    *pcVar1 = (pcVar3 + -0x40f1f)[pcVar1];
                } while (iVar7 < 0x40);
            }
            iVar6 = iVar6 + 1;
        } while (iVar6 < (arg1 & 0xffU));
    }
    uVar5 = arg2 & 0xff;
    if (arg2 != '\0') {
        puVar4 = 0x41500;
        do {
            cVar2 = **puVar4;
            if (cVar2 == '\0') {
                iVar6 = 0x40e60;
code_r0x0002e216:
                fcn.0002d820(iVar6,*puVar4);
            }
            else {
                if (cVar2 == '\x01') {
                    iVar6 = 0x40ec0;
                    goto code_r0x0002e216;
                }
                if (cVar2 == '\x10') {
                    iVar6 = 0x41080;
                    goto code_r0x0002e216;
                }
                if (cVar2 == '\x11') {
                    iVar6 = 0x41520;
                    goto code_r0x0002e216;
                }
            }
            puVar4 = puVar4 + 1;
            uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
    }
    return;
}


/* fcn.0001eb48 @ 0x1eb48 */

int64_t fcn.0001eb48(int64_t arg1)

{
    int16_t iVar1;
    int64_t iVar2;
    int64_t iVar4;
    int64_t iVar3;
    int64_t iVar5;
    
    iVar3 = 0;
    if (arg1 == 0) {
        iVar2 = 0;
    }
    else {
        iVar2 = fcn.00015630(arg1);
        iVar1 = *arg1;
        iVar5 = iVar3;
        while (iVar1 != 0) {
            if ((*(arg1 + iVar3 * 2) == 0x1b) && (*(arg1 + 2 + iVar3 * 2) == 0x5b)) {
                do {
                    iVar4 = iVar3;
                    iVar3 = iVar4 + 1;
                } while (*(arg1 + iVar3 * 2) != 0x6d);
                iVar3 = iVar4 + 2;
            }
            iVar4 = iVar3 * 2;
            iVar3 = iVar3 + 1;
            *(iVar2 + iVar5 * 2) = *(arg1 + iVar4);
            iVar5 = iVar5 + 1;
            iVar1 = *(arg1 + iVar3 * 2);
        }
        *(iVar2 + iVar5 * 2) = 0;
    }
    return iVar2;
}


/* fcn.0002ee2c @ 0x2ee2c */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_20h

void fcn.0002ee2c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int16_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    int16_t *arg3_00;
    int64_t arg1_00;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t noname_0;
    int16_t *piVar7;
    int16_t *piVar8;
    uint16_t uVar9;
    int64_t *piVar10;
    int64_t iVar11;
    uint64_t uStackX_10;
    int64_t *piStackX_18;
    int16_t var_48h;
    int64_t iStack_58;
    int16_t *piStack_50;
    int64_t aiStack_48 [2];
    int64_t var_20h;
    int64_t var_bp_18h;
    int64_t var_10h;
    
    uVar6 = arg2 + 4;
    uStackX_10 = CONCAT62(uStackX_10._2_6_,1);
    arg1_00 = 0;
    iStack_58 = 0;
    iVar11 = arg1;
    piStackX_18 = arg3;
    fcn.00020698();
    iVar3 = fcn.0001f770();
    if (-1 < iVar3) {
        (**(*0x36f48 + 0x50))(arg1 & 0xffff,arg2,arg3,arg4);
        return;
    }
    piVar8 = NULL;
    if (*0x36e48 != 0) {
        iVar11 = *0x36e48;
        (**(*0x36e48 + 8))(*0x36e48,0);
    }
    iVar3 = *(*0x36d80 + 0x40);
    if ((iVar3 == 0) ||
       (iVar4 = (**(iVar3 + 0x18))(iVar3,*(*(iVar3 + 0x48) + 4),aiStack_48,&piStack_50), iVar11 = iVar3, iVar4 < 0)
       ) {
        iVar3 = iVar11;
        *0x34160 = 0x50;
        *0x34158 = 0x18;
    }
    else if ((*0x34158 != piStack_50) || (*0x34160 != aiStack_48[0])) {
        fcn.00016d20();
    }
    fcn.000114c0();
    fcn.00015418(CONCAT71(iVar3 >> 8,7));
    fcn.00016678();
    if (arg1 == -1) {
        arg3_00 = piVar8;
    }
    else {
        arg3_00 = fcn.0001ec60(*0x431d0,arg1 & 0xffff,0);
    }
    uVar9 = 1;
    piStack_50 = arg3_00;
    if (arg3_00 != NULL) {
        iVar1 = *arg3_00;
        piVar2 = arg3_00;
        piVar7 = piVar8;
        while (iVar1 != 0) {
            piVar2 = piVar2 + 1;
            piVar7 = piVar7 + 1;
            iVar1 = *piVar2;
        }
        arg1_00 = fcn.000150a0(piVar7 * 2 + 6);
        uVar9 = 1;
        iStack_58 = arg1_00;
        if (arg1_00 != 0) {
            iVar1 = *arg3_00;
            piVar2 = arg3_00;
            while (iVar1 != 0) {
                piVar2 = piVar2 + 1;
                piVar8 = piVar8 + 1;
                iVar1 = *piVar2;
            }
            fcn.0001c360(arg1_00,piVar8 * 2 + 6,0x36b90,arg3_00);
            uVar5 = fcn.0001fc98(arg1_00);
            if (uVar6 < uVar5 / 0x13 + 6) {
                uVar6 = fcn.0001fc98(arg1_00);
                uVar6 = uVar6 / 0x13 + 6;
            }
            uVar5 = *0x34160 - 2;
            if (uVar5 <= uVar6) {
                aiStack_48[0] = fcn.00015b80(arg1_00,uVar5 & 0xffff,&uStackX_10);
                fcn.0001470c(aiStack_48);
                uVar6 = uVar5;
                uVar9 = uStackX_10;
            }
        }
    }
    iVar11 = *0x34160 - uVar6;
    *arg4 = *0x34158 - 5U >> 1;
    uStackX_10 = uVar9;
    uVar5 = iVar11 - 2U >> 1;
    *arg3 = uVar5;
    iVar3 = *arg4;
    iVar11 = uStackX_10 + 4;
    iVar4 = iVar11;
    fcn.0001c1c4(uVar5,iVar3,uVar6,iVar11);
    if (uVar6 != 0) {
        fcn.0001c0a4(uVar5,iVar3,uVar6,iVar11);
        iVar4 = iVar11;
    }
    if (arg1_00 != 0) {
        noname_0 = fcn.0001fc98(arg1_00);
        piVar10 = piStackX_18;
        uVar5 = uStackX_10;
        if (*0x34160 - 2U < noname_0 / 0x13 + 6) {
            fcn.000156b4(*piStackX_18 + 2,*arg4,uVar6 - 3,uStackX_10);
            goto code_r0x0002f0e6;
        }
        fcn.00015aa0(noname_0,*0x34160 - 2U,*arg4,iVar4);
    }
    piVar10 = piStackX_18;
    uVar5 = uStackX_10;
code_r0x0002f0e6:
    if (arg3_00 != NULL) {
        fcn.0001470c(&piStack_50);
    }
    if (arg1_00 != 0) {
        fcn.0001470c(&iStack_58);
    }
    *piVar10 = (*0x34160 - uVar6 >> 1) + 1;
    *arg4 = *arg4 + uVar5 + 1;
    uVar6 = *arg4 + 2;
    uVar5 = (*arg4 - uVar5) - 1;
    if (*0x34198 == 0xffff) {
        *0x34198 = uVar5;
    }
    if (*0x34190 == 0xffff) {
        *0x34190 = uVar6;
    }
    if (uVar5 < *0x34198) {
        *0x34198 = uVar5;
    }
    if (*0x34190 < uVar6) {
        *0x34190 = uVar6;
    }
    fcn.00016678();
    return;
}


/* fcn.0002f374 @ 0x2f374 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Removing unreachable block (ram,0x0002f5e6)
//WARNING: Removing unreachable block (ram,0x0002f5eb)

uint64_t fcn.0002f374(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int8_t arg_50h)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    int16_t iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    bool bVar8;
    bool bVar9;
    bool bVar10;
    char cStack0000000000000028;
    int64_t var_40h;
    ulong uVar11;
    uint32_t uStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    uint uStack_40;
    uint8_t var_30h;
    int32_t var_2ch;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_18h;
    int8_t var_10h;
    
    bVar9 = *0x36e80 != 0;
    uStack_54 = 0;
    cStack0000000000000028 = '\0';
    iVar5 = 0;
    uVar7 = 0;
    if (bVar9) {
        fcn.0001e488(0x36e80);
    }
    bVar10 = *0x36e40 != 0;
    if (bVar10) {
        fcn.00014044();
    }
    iVar1 = fcn.0001f770();
    if (iVar1 < 0) {
        iVar1 = arg2 * 2 + 2;
        fcn.00033b7e(arg1,iVar1,0);
        iStack_50 = fcn.000150a0(iVar1);
        uVar6 = 0;
        uVar11 = 0x71;
        fcn.0001c1c4(arg3,arg4,arg2,1);
        if (*0x34198 == 0xffff) {
            *0x34198 = arg4;
        }
        if (*0x34190 == 0xffff) {
            *0x34190 = arg4;
        }
        if (arg4 < *0x34198) {
            *0x34198 = arg4;
        }
        if (*0x34190 < arg4) {
            *0x34190 = arg4;
        }
        fcn.00016678();
        iVar1 = *(*0x36d80 + 0x40);
        iVar4 = arg3;
code_r0x0002f49b:
        (**(iVar1 + 0x38))(iVar1,iVar4,arg4,iVar1,uVar11);
        (**(*(*0x36d80 + 0x40) + 0x40))(*(*0x36d80 + 0x40),1);
        uVar3 = (**(*0x36d88 + 0x18))(0x1f);
        (**(*0x36d88 + 0x20))(4);
        if (cStack0000000000000028 == '\0') {
            do {
                iVar1 = (**(*0x36d88 + 0x98))(*(*0x36d80 + 0x28),0x34450,&iStack_48);
                if (-1 < iVar1) {
                    iVar1 = (**(iStack_48 + 8))(iStack_48,&uStack_40);
                    if (((((var_30h & 0x40) != 0) && (-1 < iVar1)) && (uStack_40 == 0)) && (uStack_40._2_2_ == 0)) {
                        iVar1 = -0x7ffffffffffffffa;
                    }
                    uStack_54 = uStack_40;
                }
            } while ((iVar1 < 0) && (fcn.00020134(), cStack0000000000000028 == '\0'));
            uVar7 = uStack_54 >> 0x10;
            iVar5 = uStack_54;
        }
        (**(*0x36d88 + 0x18))(0x1f);
        (**(*0x36d88 + 0x20))(uVar3);
        uVar2 = 0;
        if (cStack0000000000000028 != '\0') {
            (***(*0x36d80 + 0x30))(*(*0x36d80 + 0x30),0);
            fcn.0001470c(&iStack_50);
            uVar2 = 0x8000000000000012;
code_r0x0002f744:
            *arg1 = 0;
            goto code_r0x0002f748;
        }
        if (uVar7 == 0) {
            if (iVar5 == 0x17) {
                (***(*0x36d80 + 0x30))(*(*0x36d80 + 0x30),0);
                fcn.0001470c(&iStack_50);
                uVar2 = 0x8000000000000015;
                goto code_r0x0002f744;
            }
            if (iVar5 == 0) {
                fcn.00014868(0xffff0016,0x15048);
            }
code_r0x0002f620:
            bVar8 = uVar6 < arg2;
        }
        else {
            if (uVar7 == 8) {
                if (uVar6 != 0) {
                    uVar6 = uVar6 - 1;
                    *(arg1 + uVar6 * 2) = 0;
                }
                goto code_r0x0002f620;
            }
            if (uVar7 == 0xd) goto code_r0x0002f6d5;
            if (0x5e < uVar7 - 0x20U) goto code_r0x0002f620;
            bVar8 = false;
            if (uVar6 < arg2) {
                *(arg1 + uVar6 * 2) = uVar7;
                uVar6 = uVar6 + 1;
                goto code_r0x0002f620;
            }
        }
        if (!bVar8 && uVar6 != arg2) {
            fcn.00014868(0xffff0016,0x15048);
        }
        if (arg2 != 0) {
            do {
                *(iStack_50 + uVar2 * 2) = (-(uVar2 < uVar6) & 10) + 0x20;
                uVar2 = uVar2 + 1;
            } while (uVar2 < arg2);
        }
        *(iStack_50 + arg2 * 2) = 0;
        fcn.00015958(arg3,arg4,iStack_50,0);
        if (*0x34198 == 0xffff) {
            *0x34198 = arg4;
        }
        if (*0x34190 == 0xffff) {
            *0x34190 = arg4;
        }
        if (arg4 < *0x34198) {
            *0x34198 = arg4;
        }
        if (*0x34190 < arg4) {
            *0x34190 = arg4;
        }
        fcn.00016678();
        iVar1 = *(*0x36d80 + 0x40);
        iVar4 = uVar6 + arg3 + -1;
        if (arg2 != uVar6) {
            iVar4 = uVar6 + arg3;
        }
        goto code_r0x0002f49b;
    }
    uVar2 = (**(*0x36f48 + 0x48))(arg1,arg2,arg3,arg4,0);
code_r0x0002f748:
    if (bVar9) {
        fcn.00017a48();
    }
    if (bVar10) {
        fcn.00017aa0();
    }
    return uVar2;
code_r0x0002f6d5:
    (***(*0x36d80 + 0x30))(*(*0x36d80 + 0x30),0);
    fcn.0001470c(&iStack_50);
    goto code_r0x0002f748;
}


/* fcn.0002f1ac @ 0x2f1ac */

void fcn.0002f1ac(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t uVar2;
    ushort *arg3_00;
    uint64_t uVar3;
    uint64_t uVar4;
    ushort *puVar5;
    char in_stack_00000028;
    uchar auStack_38 [2];
    int16_t iStack_36;
    ushort *puStack_30;
    int64_t iStack_28;
    int64_t iStack_20;
    
    iVar1 = fcn.0001f770();
    if (iVar1 < 0) {
        fcn.0001c1c4(arg3,arg4,arg1,1);
        iStack_28 = fcn.0001ec60(*0x431d0,arg2 & 0xffff,0);
        iVar1 = fcn.0001eb48(iStack_28);
        iStack_20 = iVar1;
        fcn.00015958(arg3,arg4,iVar1,0);
        uVar2 = arg4 - 2;
        uVar4 = arg4 + 2;
        if (*0x34198 == 0xffff) {
            *0x34198 = uVar2;
        }
        if (*0x34190 == 0xffff) {
            *0x34190 = uVar4;
        }
        if (uVar2 < *0x34198) {
            *0x34198 = uVar2;
        }
        if (*0x34190 < uVar4) {
            *0x34190 = uVar4;
        }
        fcn.00016678();
        if (in_stack_00000028 != '\0') {
            uVar2 = fcn.0001fc98(iVar1);
            uVar2 = uVar2 / 0x13;
            arg3_00 = fcn.0001504c(((uVar2 & 0xffff) + 1) * 2);
            uVar4 = uVar2 & 0xffff;
            if (uVar4 != 0) {
                puVar5 = arg3_00;
                for (uVar3 = uVar4; uVar3 != 0; uVar3 = uVar3 - 1) {
                    *puVar5 = 0x20;
                    puVar5 = puVar5 + 1;
                }
            }
            if (uVar2 != 0) {
                arg3_00[uVar4] = 0;
            }
            iStack_36 = 0;
            puStack_30 = arg3_00;
            do {
                (**(*(*0x36d80 + 0x30) + 8))(*(*0x36d80 + 0x30),auStack_38);
            } while (iStack_36 != 0xd);
            fcn.00015958(arg3,arg4,arg3_00,0);
            fcn.0001470c(&puStack_30);
        }
        fcn.0001470c(&iStack_28);
        fcn.0001470c(&iStack_20);
    }
    else {
        (**(*0x36f48 + 0x58))(arg1,arg2 & 0xffff,arg3,arg4,in_stack_00000028);
    }
    return;
}


/* fcn.0001c1c4 @ 0x1c1c4 */

void fcn.0001c1c4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ushort *puVar1;
    int64_t arg1_00;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ushort *puVar5;
    uchar in_stack_00000028;
    ushort *puStack_38;
    int64_t iStack_30;
    
    iVar3 = arg3;
    puVar1 = fcn.0001504c(*0x34160 * 2);
    if (puVar1 != NULL) {
        puStack_38 = puVar1;
        arg1_00 = fcn.0001504c(*0x34160);
        iStack_30 = arg1_00;
        if (arg1_00 != 0) {
            uVar4 = arg2 + arg4;
            if (*0x34158 <= uVar4) {
                uVar4 = *0x34158 - 1;
            }
            if (*0x34160 <= arg1 + arg3) {
                arg3 = (*0x34160 - arg1) + -1;
            }
            fcn.00033b7e(arg1_00,arg3,CONCAT71(iVar3 >> 8,in_stack_00000028));
            if (arg3 != 0) {
                puVar5 = puVar1;
                for (iVar3 = arg3; iVar3 != 0; iVar3 = iVar3 + -1) {
                    *puVar5 = 0x20;
                    puVar5 = puVar5 + 1;
                }
            }
            iVar3 = *0x34160 * arg2 + arg1;
            if (arg2 < uVar4) {
                arg2 = uVar4 - arg2;
                do {
                    if (arg1 != 0) {
                        iVar2 = fcn.0001d1e4(*(*0x431d8 + 0x3d0902 + iVar3 * 2));
                        if (iVar2 == 1) {
                            *(*0x431c8 + 0x3d0902 + iVar3 * 2) = 0x20;
                        }
                    }
                    (**(*0x36d88 + 0x160))(*0x431c8 + 0x3d0904 + iVar3 * 2,puVar1,arg3 * 2);
                    (**(*0x36d88 + 0x160))(*0x431c8 + 4 + iVar3,arg1_00,arg3);
                    iVar3 = iVar3 + *0x34160;
                    arg2 = arg2 + -1;
                } while (arg2 != 0);
            }
        }
        fcn.0001470c(&puStack_38);
        if (arg1_00 != 0) {
            fcn.0001470c(&iStack_30);
        }
    }
    return;
}


/* fcn.00015aa0 @ 0x15aa0 */

ulong fcn.00015aa0(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar auVar1 [16];
    int64_t arg1_00;
    uint64_t uVar2;
    ulong uVar3;
    uint64_t arg1_01;
    int64_t iStackX_20;
    int64_t in_stack_00000028;
    
    arg1_01 = 0;
    iStackX_20 = arg3;
    arg1_00 = fcn.00015630(in_stack_00000028);
    iStackX_20 = arg1_00;
    uVar2 = fcn.0001fc98(arg1_00);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    uVar3 = SUB168(ZEXT816(0xd79435e50d79435f) * auVar1,0);
    uVar2 = uVar2 / 0x13;
    if (uVar2 != 0) {
        if (uVar2 < arg1) {
            arg1_01 = arg1 - uVar2 >> 1;
        }
        else {
            *(arg1_00 + arg1 * 2) = 0;
        }
        fcn.00015958(arg1_01,arg2,arg1_00,0);
        uVar3 = fcn.0001470c(&iStackX_20);
    }
    return uVar3;
}


/* fcn.000156b4 @ 0x156b4 */

void fcn.000156b4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int16_t *arg3_00;
    int16_t *piVar2;
    uint64_t uVar3;
    int16_t *in_stack_00000028;
    uint16_t in_stack_00000030;
    
    if ((in_stack_00000028 != NULL) &&
       (arg3_00 = fcn.00015b80(in_stack_00000028,arg3 & 0xffff,&stack0x00000030), arg3_00 != NULL)) {
        uVar3 = 0;
        if (in_stack_00000030 < arg4) {
            arg4 = in_stack_00000030;
        }
        in_stack_00000028 = arg3_00;
        if (arg4 != 0) {
            do {
                piVar2 = arg3_00;
                if (*arg3_00 == 0) break;
                for (; ((*piVar2 != 10 && (*piVar2 != 0xd)) && (*piVar2 != 0)); piVar2 = piVar2 + 1) {
                }
                iVar1 = *piVar2;
                *piVar2 = 0;
                fcn.00015958(arg1,uVar3 + arg2,arg3_00,0);
                *piVar2 = iVar1;
                arg3_00 = piVar2;
                if ((iVar1 != 0) && ((arg3_00 = piVar2 + 1, *arg3_00 == 0xd || (*arg3_00 == 10)))) {
                    arg3_00 = piVar2 + 2;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < arg4);
        }
        fcn.0001470c(&stack0x00000028);
    }
    return;
}


/* fcn.00030824 @ 0x30824 */

int64_t fcn.00030824(int64_t arg1)

{
    int64_t iVar1;
    
    if ((*0x3f9f8 == 0) || (*0x3f9d8 == 0)) {
        *0x3f9f8 = fcn.0002fe34();
    }
    if (((*0x3f9f8 == 0) || (*0x3f9d8 == 0)) || (*0x3f9f8 <= arg1)) {
        iVar1 = 0;
    }
    else {
        iVar1 = *0x3f9d8 + arg1 * 0x40;
    }
    return iVar1;
}


/* fcn.0001ff30 @ 0x1ff30 */

void fcn.0001ff30(void)

{
    uint16_t uVar1;
    int64_t arg1;
    int64_t iVar2;
    int64_t arg2;
    uint16_t uVar3;
    int64_t iStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    
    iStackX_10 = 0;
    iStackX_8 = 0;
    fcn.0001f770();
    if (*0x36ef2 != '\0') {
        fcn.0001e488(*0x42348 + 0x28);
    }
    arg1 = fcn.0001215c(&iStackX_10,&iStackX_8);
    iVar2 = fcn.0001504c(0xb71b04);
    iStackX_18 = iVar2;
    if (iVar2 != 0) {
        (**(*0x36d88 + 0x160))(iVar2,*0x431c8,0xb71b04);
    }
    *0x3f9f8 = fcn.0002fe34();
    if ((((*0x3f9d8 != 0) && (*0x3f9f8 != 0)) && (*0x3f9e8 == '\0')) &&
       (uVar3 = 0, arg2 = *0x3f9d8, uVar1 = *0x3f9f8, *0x3f9f8 != 0)) {
        do {
            if ((*(arg2 + 0x14) != '\0') && (*(arg2 + 0x16) == '\0')) {
                *(arg2 + 0x16) = 1;
                fcn.000304b0(*(arg2 + 0x12),arg2);
                uVar1 = *0x3f9f8;
            }
            arg2 = arg2 + 0x40;
            uVar3 = uVar3 + 1;
        } while (uVar3 < uVar1);
    }
    if (iVar2 != 0) {
        (**(*0x36d88 + 0x160))(*0x431c8,iVar2,0xb71b04);
        fcn.0001470c(&iStackX_18);
    }
    fcn.00012204(arg1,iStackX_10,iStackX_8);
    if (*0x36ef2 != '\0') {
        fcn.000299e8();
    }
    return;
}


/* fcn.0002f800 @ 0x2f800 */

ulong fcn.0002f800(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    char *pcVar5;
    int64_t iStackX_18;
    uint64_t uStackX_20;
    char *pcStack_28;
    uchar auStack_20 [8];
    
    iVar1 = (**(*0x36d88 + 0x128))(noname_0,0x33e90,&iStackX_18,&uStackX_20);
    uVar3 = 0;
    if ((-1 < iVar1) && (uStackX_20 != 0)) {
        uVar2 = uStackX_20;
        uVar4 = uVar3;
        do {
            if ((*(uVar4 + 0x10 + iStackX_18) & 8) != 0) {
                iVar1 = (**(*0x36d88 + 0x98))(*(uVar4 + 8 + iStackX_18),0x34010,auStack_20);
                if ((-1 < iVar1) &&
                   (iVar1 = (**(*0x36d88 + 0x98))(*(uVar4 + 8 + iStackX_18),0x33e70,&pcStack_28), -1 < iVar1)) {
                    for (pcVar5 = pcStack_28;
                        ((*pcVar5 != '\x7f' || (pcVar5[1] != -1)) && ((*pcVar5 != '\x03' || (pcVar5[1] != '\x12'))));
                        pcVar5 = pcVar5 + *(pcVar5 + 2)) {
                    }
                    if ((((*pcVar5 != '\x7f') || (pcVar5[1] != -1)) && (*(pcVar5 + 4) == 1 << (arg1 & 0x1f))) &&
                       (*(pcVar5 + 8) == 0)) {
                        return *(iStackX_18 + 8 + uVar3 * 0x18);
                    }
                }
                uVar2 = uStackX_20;
            }
            uVar3 = uVar3 + 1;
            uVar4 = uVar4 + 0x18;
        } while (uVar3 < uVar2);
    }
    return 0;
}


/* fcn.0002f92c @ 0x2f92c */

ulong fcn.0002f92c(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    char *pcVar4;
    uint64_t uVar5;
    int64_t iStackX_18;
    uint64_t uStackX_20;
    char *pcStack_18;
    uchar auStack_10 [8];
    
    iVar1 = (**(*0x36d88 + 0x128))(noname_0,0x33e90,&iStackX_18,&uStackX_20);
    if ((-1 < iVar1) && (uVar5 = 0, uStackX_20 != 0)) {
        iVar1 = 0;
        do {
            if ((((*(iVar1 + 0x10 + iStackX_18) & 8) != 0) &&
                (iVar2 = (**(*0x36d88 + 0x98))(*(iVar1 + 8 + iStackX_18),0x34010,auStack_10), -1 < iVar2)) &&
               (iVar2 = (**(*0x36d88 + 0x98))(*(iVar1 + 8 + iStackX_18),0x33e70,&pcStack_18), -1 < iVar2)) {
                for (pcVar4 = pcStack_18;
                    ((*pcVar4 != '\x7f' || (pcVar4[1] != -1)) &&
                    ((*pcVar4 != '\x03' || ((pcVar4[1] != '\x17' && (pcVar4[1] != '\x12'))))));
                    pcVar4 = pcVar4 + *(pcVar4 + 2)) {
                }
                if ((*pcVar4 != '\x7f') || (pcVar4[1] != -1)) {
                    if (pcVar4[1] == '\x17') {
                        uVar3 = *(pcVar4 + 4);
                    }
                    else {
                        uVar3 = *(pcVar4 + 4);
                    }
                    if (uVar3 == 1 << (arg1 - 1U & 0x1f)) {
                        return *(iStackX_18 + 8 + uVar5 * 0x18);
                    }
                }
            }
            uVar5 = uVar5 + 1;
            iVar1 = iVar1 + 0x18;
        } while (uVar5 < uStackX_20);
    }
    return 0;
}


/* fcn.00030364 @ 0x30364 */

bool fcn.00030364(ulong *noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ushort auStackX_18 [8];
    
    auStackX_18[0] = 0;
    iVar1 = (**noname_0)(noname_0,auStackX_18);
    if (-1 < iVar1) {
        *arg1 = auStackX_18[0] >> 2 & 1;
    }
    return -1 < iVar1;
}


/* fcn.000303a8 @ 0x303a8 */

int64_t fcn.000303a8(ulong noname_0,int64_t arg1)

{
    int16_t iVar1;
    uint32_t uVar2;
    int16_t *arg3;
    int16_t *piVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint8_t uVar6;
    int64_t iStackX_18;
    
    iVar5 = 0;
    iStackX_18 = 0;
    iVar4 = (**(*0x36d88 + 0x98))(noname_0,0x33d80,&iStackX_18);
    if ((iVar4 < 0) || (uVar2 = *(iStackX_18 + 0x40), 5 < uVar2)) {
code_r0x00030496:
        iVar5 = 0;
    }
    else {
        if (uVar2 == 0) goto code_r0x00030498;
        if (uVar2 == 1) {
            iVar4 = *(*(iStackX_18 + 0x38) + 0x228);
        }
        else if (uVar2 == 2) {
            iVar4 = *(*(iStackX_18 + 0x38) + 0x170);
        }
        else {
            if (uVar2 != 3) goto code_r0x00030496;
            iVar4 = *(*(iStackX_18 + 0x38) + 0x40);
        }
        arg3 = *(iVar4 + 8);
        if (arg3 != NULL) {
            iVar1 = *arg3;
            piVar3 = arg3;
            iVar4 = iVar5;
            while (iVar1 != 0) {
                piVar3 = piVar3 + 1;
                iVar4 = iVar4 + 1;
                iVar1 = *piVar3;
            }
            uVar2 = iVar4 + 1;
            iVar4 = fcn.00027648(iVar4,uVar2 * 2);
            *arg1 = iVar4;
            if (iVar4 != 0) {
                uVar6 = 0x27;
                do {
                    if (arg3[uVar6] != 0x20) break;
                    arg3[uVar6] = 0;
                    uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
                fcn.00027364(iVar4,uVar2,arg3);
                iVar5 = 1;
            }
        }
    }
code_r0x00030498:
    return iVar5;
}


/* fcn.0002fc88 @ 0x2fc88 */

void fcn.0002fc88(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int64_t iVar1;
    char *pcVar2;
    char *pcVar3;
    uint64_t uStackX_8;
    int64_t aiStackX_18 [2];
    
    arg1_00 = *0x431d0;
    pcVar2 = NULL;
    aiStackX_18[0] = 0;
    uStackX_8 = arg1 & 0xffffffffffff0000;
    if ((*0x3fa08 != NULL) || (iVar1 = (**(*0x36d88 + 0x140))(0x33f80,0,0x3fa08), -1 < iVar1)) {
        if (*0x3fa00 == NULL) {
            iVar1 = (*(*0x3fa08)[3])(*0x3fa08,arg1_00,0,aiStackX_18);
            if ((iVar1 == -0x7ffffffffffffffb) &&
               ((pcVar2 = fcn.00027614(aiStackX_18[0]), pcVar2 == NULL ||
                (iVar1 = (*(*0x3fa08)[3])(*0x3fa08,arg1_00,pcVar2,aiStackX_18), iVar1 < 0)))) goto code_r0x0002fe1c;
            *0x3fa00 = pcVar2;
        }
        pcVar2 = *0x3fa00;
        pcVar3 = *0x3fa00;
        if (*0x3fa00 != NULL) {
            do {
                for (; *pcVar2 != ';'; pcVar2 = pcVar2 + 1) {
                    if (*pcVar2 == '\0') {
code_r0x0002fdd5:
                        if (uStackX_8 == 0) {
                            iVar1 = (***0x3fa08)(*0x3fa08,arg1_00,&uStackX_8,pcVar3,0,arg2,0);
                        }
                        else {
                            iVar1 = (*(*0x3fa08)[2])(*0x3fa08,arg1_00,uStackX_8 & 0xffff,pcVar3,arg2,0);
                        }
                        if ((-1 < iVar1) && (uStackX_8 != 0)) {
                            return;
                        }
                        goto code_r0x0002fe1c;
                    }
                }
                if (*pcVar2 == '\0') goto code_r0x0002fdd5;
                *pcVar2 = '\0';
                if (uStackX_8 == 0) {
                    iVar1 = (***0x3fa08)(*0x3fa08,arg1_00,&uStackX_8,pcVar3,0,arg2,0);
                }
                else {
                    iVar1 = (*(*0x3fa08)[2])(*0x3fa08,arg1_00,uStackX_8 & 0xffff,pcVar3,arg2,0);
                }
                *pcVar2 = ';';
                pcVar2 = pcVar2 + 1;
                pcVar3 = pcVar2;
            } while (-1 < iVar1);
        }
    }
code_r0x0002fe1c:
    fcn.0001d224(arg1_00,arg2);
    return;
}


/* fcn.0003078c @ 0x3078c */

ulong fcn.0003078c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    uchar auStack_38 [48];
    
    fcn.00010300(auStack_38,0x21);
    uVar3 = 0;
    do {
        auStack_38[uVar3] = *(arg1 + uVar3 * 2);
        if (*(arg1 + uVar3 * 2) == 0) break;
        uVar3 = uVar3 + 1;
    } while (uVar3 < 0x21);
    iVar1 = (**(*arg2 + 0x10))(*arg2,0,auStack_38);
    if (iVar1 < 0) {
        uVar2 = 0x800000000000000f;
    }
    else {
        if (arg2 + 0x17 != auStack_38) {
            section..text(arg2 + 0x17,auStack_38,0x21);
        }
        *(arg2 + 0x14) = 0;
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00027518 @ 0x27518 */

uint64_t fcn.00027518(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uStackX_10;
    
    if (arg1 != 0) {
        if (arg2 < 0x1001) {
            iVar1 = (**(*0x36d88 + 0x28))(0,4,arg1,&uStackX_10);
            if (-1 < iVar1) {
                return uStackX_10;
            }
        }
        else {
            iVar2 = (arg2 >> 0xc) + ((arg2 & 0xfffU) != 0) + arg1;
            iVar1 = (**(*0x36d88 + 0x28))(0,4,iVar2);
            if (-1 < iVar1) {
                uVar3 = uStackX_10 + (arg2 - 1U) & ~(arg2 - 1U);
                iVar1 = ((uVar3 - uStackX_10 & 0xfff) != 0) + (uVar3 - uStackX_10 >> 0xc);
                if (iVar1 != 0) {
                    (**(*0x36d88 + 0x30))(uStackX_10,iVar1);
                }
                uStackX_10 = arg1 * 0x1000 + uVar3;
                arg1 = (iVar2 - iVar1) - arg1;
                if (arg1 != 0) {
                    (**(*0x36d88 + 0x30))(uStackX_10,arg1);
                }
                return uVar3;
            }
        }
    }
    return 0;
}


/* fcn.00033638 @ 0x33638 */

int64_t fcn.00033638(int64_t arg1,int64_t arg2)

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
    
    arg1_00 = fcn.00010b64(0x440);
    fcn.00010320(arg1_00,0x440,0);
    if (arg1_00 != 0) {
        *(arg1_00 + 0x418) = arg1;
        pcVar4 = arg1 + arg2;
        iVar2 = fcn.00033824(arg1,arg2,&pcStack_48);
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
                iVar2 = fcn.00033334(pcStack_48,pcVar4 - pcStack_48,arg1_00,apcStackX_18);
                pcVar3 = apcStackX_18[0];
                if (iVar2 == 0) {
                    arg2_00 = pcVar4 - apcStackX_18[0];
                    *(arg1_00 + 0x430) = apcStackX_18[0] - pcVar1;
                    iVar2 = fcn.00033824(apcStackX_18[0],arg2_00,&uStack_30);
                    if (iVar2 < 0) {
                        iVar2 = -1;
                    }
                    else {
                        iVar2 = fcn.0003290c(pcVar3,arg2_00,arg1_00 + 0x398,apcStackX_18);
                        pcVar3 = apcStackX_18[0];
                    }
                    if ((((iVar2 == 0) && (iVar2 = fcn.00033824(pcVar3,pcVar4 - pcVar3,&pcStack_48), -1 < iVar2)) &&
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


/* fcn.000328ac @ 0x328ac */

ulong fcn.000328ac(void)

{
    ulong uVar1;
    
    if (*(*0x36d80 + 8) < 0x20000) {
        uVar1 = 0x8000000000000003;
    }
    else {
        uVar1 = (**(*0x36d88 + 0x170))(0x200,8,0x320a8,0,0x33d30,0x40ce0);
    }
    return uVar1;
}


/* fcn.000314fc @ 0x314fc */

uint64_t fcn.000314fc(void)

{
    bool bVar1;
    bool bVar2;
    int64_t iVar3;
    char cVar4;
    ushort uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint16_t uVar10;
    uint16_t uVar11;
    uint64_t uVar12;
    ulong uVar13;
    uchar *noname_0;
    uint64_t uVar14;
    uint64_t uVar15;
    uint16_t uVar16;
    uint16_t uStackX_10;
    uint32_t var_67h;
    int16_t var_6fh;
    int32_t var_77h;
    int32_t var_7fh;
    int64_t iStack_f8;
    uint64_t uStack_f0;
    int64_t iStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    int64_t iStack_d0;
    uchar auStack_c8 [71];
    int64_t var_79h;
    int64_t var_71h;
    int64_t var_69h;
    
    uVar14 = 0;
    iStack_f8 = 0;
    iStack_e8 = 0;
    uVar11 = 0xff;
    uVar16 = 0;
    uStack_e0 = 0;
    bVar2 = false;
    iVar6 = (**(*0x36d88 + 0x138))(2,0x33fd0,0,&uStack_f0,&iStack_f8);
    if (-1 < iVar6) {
        fcn.00031390(iStack_f8,&uStack_f0);
        uVar7 = *0x3fa6c;
        if ((*0x3fa6c != 0) && (*0x3fa30 != 0)) {
            bVar1 = true;
            if (*0x3fa6c == uStack_f0) {
                if (*0x3fa6c == 0) {
                    return uVar7;
                }
                uVar15 = uVar14;
                iVar6 = *0x3fa40;
                do {
                    uVar12 = uVar14;
                    if (uStack_f0 != 0) {
                        do {
                            if (*(iVar6 + uVar15 * 8) == *(iStack_f8 + uVar12 * 8)) break;
                            uVar12 = uVar12 + 1;
                        } while (uVar12 < uStack_f0);
                    }
                    if (uVar12 == uStack_f0) {
                        *(iVar6 + uVar15 * 8) = 0;
                        bVar1 = false;
                        uVar7 = *0x3fa6c;
                        iVar6 = *0x3fa40;
                    }
                    uVar15 = uVar15 + 1;
                } while (uVar15 < uVar7);
                if (bVar1) {
                    return uVar7;
                }
            }
        }
        iVar6 = *0x3fa30;
        iStack_d0 = *0x3fa30;
        *0x3fa30 = fcn.0001504c(uStack_f0 * 0x48);
        if (*0x3fa30 != 0) {
            (**(*0x36d88 + 0x168))(*0x3fa30,uStack_f0 * 0x48,0);
            uStackX_10 = 0;
            if (uStack_f0 != 0) {
                do {
                    iVar3 = *0x3fa30;
                    if ((*0x3fa40 == 0) || (*0x3fa6c == 0)) {
code_r0x000316f2:
                        uVar13 = *(iStack_f8 + uVar14 * 8);
                        iVar8 = (**(*0x36d88 + 0x118))(uVar13,0x33fd0,&iStack_e8,0,uVar13,2);
                        if (-1 < iVar8) {
                            uVar13 = *(iStack_f8 + uVar14 * 8);
                            iVar9 = (**(*0x36d88 + 0x118))(uVar13,0x34d30,&uStack_e0,0,uVar13,2);
                            iVar8 = iStack_e8;
                            if ((-1 < iVar9) && (*(iStack_e8 + 0x40) != 0)) {
                                *(iStack_e8 + 0x48) = 0x3fa6c;
                                *(iStack_e8 + 0x50) = 0x3fa30;
                                if (*(iStack_e8 + 0x40) == 1) {
                                    if (*(*(iStack_e8 + 0x38) + 9) == -1) {
                                        uVar11 = 0;
                                    }
                                    else {
                                        uVar11 = *(*(iStack_e8 + 0x38) + 9);
                                    }
                                }
                                else if (*(iStack_e8 + 0x40) == 3) {
                                    if (*(*(iStack_e8 + 0x38) + 0x4c) == '\0') {
                                        bVar2 = true;
                                    }
                                    else {
                                        uVar11 = *(*(iStack_e8 + 0x38) + 0x62);
                                    }
                                }
                                cVar4 = fcn.00031290(*(iStack_f8 + uVar14 * 8),iStack_e8,iVar3 + 0x1c + uVar14 * 0x48)
                                ;
                                if (cVar4 != '\0') {
                                    *(iVar3 + uVar14 * 0x48) = iStack_e8;
                                    *(iVar3 + 8 + uVar14 * 0x48) = uStack_e0;
                                    uVar13 = *(iStack_f8 + uVar14 * 8);
                                    cVar4 = fcn.000319a8(uVar13,&iStack_d8);
                                    iVar9 = iStack_d8;
                                    if (cVar4 != '\0') {
                                        uVar5 = fcn.00031258(uVar13,iStack_d8);
                                        *(iVar3 + 0x18 + uVar14 * 0x48) = uVar5;
                                        if ((*(iVar8 + 0x40) == 2) || (bVar2)) {
                                            noname_0 = auStack_c8;
                                            fcn.0001c360(noname_0,0x78,0x36930,iVar9);
                                        }
                                        else {
                                            noname_0 = auStack_c8;
                                            if (uVar11 == 0xff) {
                                                fcn.0001c360(noname_0,0x78,0x36ba0,0x36b9c);
                                            }
                                            else {
                                                fcn.0001c360(noname_0,0x78,0x36ce8,0x36b9c);
                                            }
                                        }
                                        uVar5 = fcn.00031258(noname_0,auStack_c8);
                                        *(iVar3 + 0x1a + uVar14 * 0x48) = uVar5;
                                    }
                                    *(iVar3 + 0x1e + uVar14 * 0x48) = 0;
                                    uVar16 = uVar16 + 1;
                                    *(iVar3 + 0x10 + uVar14 * 0x48) = *0x431d0;
                                    *(iVar3 + 0x40 + uVar14 * 0x48) = *(iStack_f8 + uVar14 * 8);
                                }
                            }
                        }
                    }
                    else {
                        uVar10 = *0x3fa6c;
                        do {
                            if (*(iStack_f8 + uVar14 * 8) == *(*0x3fa40 + (uVar10 - 1) * 8)) break;
                            uVar10 = uVar10 - 1;
                        } while (uVar10 != 0);
                        if (uVar10 == 0) goto code_r0x000316f2;
                        (**(*0x36d88 + 0x160))(*0x3fa30 + uVar14 * 0x48,iVar6 + (uVar10 - 1) * 0x48,0x48);
                        uVar16 = uVar16 + 1;
                    }
                    uStackX_10 = uStackX_10 + 1;
                    uVar14 = uStackX_10;
                } while (uVar14 < uStack_f0);
            }
            if (*0x3fa40 != 0) {
                fcn.0001470c(0x3fa40);
            }
            *0x3fa40 = fcn.0001504c(uStack_f0 << 3);
            (**(*0x36d88 + 0x160))(*0x3fa40,iStack_f8,uStack_f0 << 3);
            fcn.0001470c(&iStack_f8);
            fcn.0001470c(&iStack_d0);
            if (uVar16 == 0) {
                fcn.0001470c(0x3fa30);
                *0x3fa30 = 0;
            }
            return uVar16;
        }
    }
    return 0;
}


/* fcn.00031fd8 @ 0x31fd8 */

int64_t fcn.00031fd8(int64_t arg1)

{
    int64_t iVar1;
    
    if ((*0x3fa6c == 0) || (*0x3fa30 == 0)) {
        *0x3fa6c = fcn.000314fc();
    }
    if (((*0x3fa6c == 0) || (*0x3fa30 == 0)) || (*0x3fa6c <= arg1)) {
        iVar1 = 0;
    }
    else {
        iVar1 = *0x3fa30 + arg1 * 0x48;
    }
    return iVar1;
}


/* fcn.00031a78 @ 0x31a78 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_10h

void fcn.00031a78(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int16_t *arg1_00;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    int16_t iVar5;
    int64_t iVar6;
    ulong uVar7;
    uint *puVar8;
    uint64_t uVar9;
    uint16_t auStackX_10 [4];
    int16_t *apiStackX_18 [2];
    int16_t var_48h;
    int64_t var_50h;
    uint uStack_48;
    uchar uStack_44;
    int16_t *piStack_40;
    int32_t var_10h;
    int8_t var_ch;
    int64_t var_bp_8h;
    
    uStack_48 = 0x2000f6;
    iVar5 = arg1;
    uStack_44 = 1;
    uVar3 = 0;
    piStack_40 = NULL;
    auStackX_10[0] = 0;
    iVar6 = -0x7ffffffffffffff1;
    fcn.000148bc(0xffff0008,0x2183c,0,0);
    (***(*0x36d80 + 0x30))(*(*0x36d80 + 0x30),0);
    iVar1 = (**(*0x36d88 + 0x140))(0x33f90,0,0x3fa50);
    if (-1 < iVar1) {
        uVar7 = 0x3fa60;
        iVar1 = (**(*0x36d88 + 0x140))(0x33db0,0);
        if ((-1 < iVar1) && (arg1_00 = fcn.0001504c(0x42), arg1_00 != NULL)) {
            apiStackX_18[0] = arg1_00;
            fcn.000262e4(1,0x3050004,uVar7,0x34040);
            (***0x3fa60)();
            uVar9 = uVar3;
            do {
                fcn.00020134();
                (*(*0x3fa60)[2])(7);
                fcn.00020134();
                (**(*0x36d88 + 0x168))(arg1_00,0x42);
                uStack_48 = CONCAT22(uStack_48._2_2_,0xfb);
                piStack_40 = arg1_00;
                iVar1 = (**(*0x3fa50 + 0x88))(*0x431d0,arg1 & 0xffff,&uStack_48,1,0);
                fcn.00020134();
                if (iVar1 != 0) break;
                if (*piStack_40 == 0) {
                    iVar6 = -0x7ffffffffffffffe;
                }
                else {
                    iVar6 = fcn.00031f18(arg1_00,arg2,0);
                }
                if (iVar6 == 0) break;
                if (iVar5 == -1) {
                    uVar2 = uVar3;
                }
                else {
                    uVar2 = fcn.0001ec60(*0x431d0,arg1 & 0xffff,0);
                }
                uVar7 = fcn.0001ec60(*0x431d0,0x13,0);
                (**(*0x3fa50 + 0x20))(uVar2,uVar7,1,0);
                uVar9 = uVar9 + 1;
            } while (uVar9 < 3);
            iVar1 = (***arg2)(*arg2,auStackX_10);
            if (((-1 < iVar1) && (iVar6 != 0)) && ((auStackX_10[0] & 0x200) == 0)) {
                for (; uVar9 < 6; uVar9 = uVar9 + 1) {
                    fcn.00020134();
                    (*(*0x3fa60)[2])(7);
                    fcn.00020134();
                    (**(*0x36d88 + 0x168))(arg1_00,0x42);
                    puVar8 = &uStack_48;
                    uStack_48 = CONCAT22(uStack_48._2_2_,0xfa);
                    piStack_40 = arg1_00;
                    iVar1 = (**(*0x3fa50 + 0x88))(*0x431d0,arg1 & 0xffff,puVar8,1,0);
                    fcn.00020134();
                    if (iVar1 != 0) break;
                    if (*piStack_40 == 0) {
                        iVar6 = -0x7ffffffffffffffe;
                    }
                    else {
                        iVar6 = fcn.00031f18(arg1_00,arg2,CONCAT71(puVar8 >> 8,1));
                    }
                    if (iVar6 == 0) break;
                    if (uVar9 != 5) {
                        if (iVar5 == -1) {
                            uVar2 = uVar3;
                        }
                        else {
                            uVar2 = fcn.0001ec60(*0x431d0,arg1 & 0xffff,0);
                        }
                        uVar7 = fcn.0001ec60(*0x431d0,0x13,0);
                        (**(*0x3fa50 + 0x20))(uVar2,uVar7,1,0);
                    }
                }
            }
            uVar7 = 0;
            (**(*0x36d88 + 0x168))(arg1_00,0x42);
            fcn.0001470c(apiStackX_18);
            if (iVar6 != 0) {
                if (iVar5 != -1) {
                    uVar3 = fcn.0001ec60(*0x431d0,arg1 & 0xffff,0);
                }
                uVar7 = 0;
                uVar4 = fcn.0001ec60(*0x431d0,0xf8,0);
                uVar7 = CONCAT71(uVar7 >> 8,1);
                (**(*0x3fa50 + 0x20))(uVar3,uVar4,uVar7,0);
                fcn.00028124(0x80000002,0x3051004);
            }
            fcn.00020134();
            (*(*0x3fa60)[1])();
            fcn.00020134();
            fcn.000262e4(1,0x3050005,uVar7,0x34040);
        }
    }
    return;
}


/* fcn.000310a0 @ 0x310a0 */

//WARNING: Variable defined which should be unmapped: var_10h

int16_t fcn.000310a0(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    int64_t iVar2;
    int16_t aiStackX_18 [4];
    char *pcStackX_20;
    uint32_t var_30h;
    int64_t var_38h;
    ulong auStack_28 [2];
    int64_t var_10h;
    
    pcStackX_20 = NULL;
    auStack_28[0] = 0;
    aiStackX_18[0] = 0;
    if ((*0x3fa58 != NULL) || (iVar2 = (**(*0x36d88 + 0x140))(0x33f80,0,0x3fa58), -1 < iVar2)) {
        if (*0x3fa20 == NULL) {
            iVar2 = (*(*0x3fa58)[3])(*0x3fa58,arg1,pcStackX_20,auStack_28);
            if (iVar2 == -0x7ffffffffffffffb) {
                iVar2 = (**(*0x36d88 + 0x40))(4,auStack_28[0],&pcStackX_20);
                if (iVar2 < 0) {
                    return 0;
                }
                iVar2 = (*(*0x3fa58)[3])(*0x3fa58,arg1,pcStackX_20,auStack_28);
                if (iVar2 < 0) {
                    return 0;
                }
            }
            if (pcStackX_20 == NULL) {
                return 0;
            }
            *0x3fa20 = pcStackX_20;
            pcVar1 = pcStackX_20;
        }
        else {
            pcStackX_20 = *0x3fa20;
            pcVar1 = *0x3fa20;
        }
        do {
            for (; *pcStackX_20 != ';'; pcStackX_20 = pcStackX_20 + 1) {
                if (*pcStackX_20 == '\0') {
                    if (aiStackX_18[0] == 0) {
                        iVar2 = (***0x3fa58)(*0x3fa58,arg1,aiStackX_18,pcVar1,0,arg2,0);
                    }
                    else {
                        iVar2 = (*(*0x3fa58)[2])(*0x3fa58,arg1,aiStackX_18[0],pcVar1,arg2,0);
                    }
                    if (-1 < iVar2) {
                        return aiStackX_18[0];
                    }
                    return 0;
                }
            }
            *pcStackX_20 = '\0';
            if (aiStackX_18[0] == 0) {
                iVar2 = (***0x3fa58)(*0x3fa58,arg1,aiStackX_18,pcVar1,0,arg2,0);
            }
            else {
                iVar2 = (*(*0x3fa58)[2])(*0x3fa58,arg1,aiStackX_18[0],pcVar1,arg2,0);
            }
            *pcStackX_20 = ';';
            pcStackX_20 = pcStackX_20 + 1;
            pcVar1 = pcStackX_20;
        } while (-1 < iVar2);
    }
    return 0;
}


/* fcn.00031390 @ 0x31390 */

void fcn.00031390(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong *puVar6;
    ulong *puVar7;
    ulong *puVar8;
    int64_t aiStackX_10 [2];
    uchar auStackX_20 [8];
    ulong auStack_48 [2];
    
    uVar5 = *arg2;
    uVar4 = 0;
    aiStackX_10[1] = 0;
    aiStackX_10[0] = 0;
    auStack_48[0] = 0;
    if (uVar5 != 0) {
        puVar8 = arg1;
        puVar1 = arg1;
        do {
            puVar6 = puVar1 + 1;
            iVar2 = (**(*0x36d88 + 0x118))(*puVar8,0x33e70,auStackX_20,0,0,2);
            if (iVar2 < 0) {
code_r0x00031430:
                iVar2 = (**(*0x36d88 + 0x98))(*puVar8,0x33fd0,aiStackX_10);
                if ((-1 < iVar2) && (**(aiStackX_10[0] + 0x38) == 0x54535224)) {
                    iVar2 = (**(*0x36d88 + 0x118))(*puVar8,0x34d40,auStack_48,0,0,2);
                    if (-1 < iVar2) goto code_r0x000314ca;
                }
                uVar5 = uVar5 - 1;
                uVar3 = uVar4;
                if (uVar4 < uVar5) {
                    iVar2 = uVar5 - uVar4;
                    uVar3 = iVar2 + uVar4;
                    puVar7 = puVar8;
                    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
                        *puVar7 = *puVar6;
                        puVar6 = puVar6 + 1;
                        puVar7 = puVar7 + 1;
                    }
                }
                uVar4 = uVar4 - 1;
                *(arg1 + uVar3 * 8) = 0;
                puVar8 = puVar8 + -1;
                puVar6 = puVar1;
            }
            else {
                iVar2 = (**(*0x36d88 + 0xb8))(0x33e90,auStackX_20,aiStackX_10 + 1);
                if (iVar2 < 0) goto code_r0x00031430;
            }
code_r0x000314ca:
            uVar4 = uVar4 + 1;
            puVar8 = puVar8 + 1;
            puVar1 = puVar6;
        } while (uVar4 < uVar5);
    }
    *arg2 = uVar5;
    return;
}


/* fcn.00031290 @ 0x31290 */

ulong fcn.00031290(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int64_t iVar2;
    ushort auStackX_10 [4];
    uint64_t uStackX_18;
    ulong uStackX_20;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    
    uStackX_18 = 0;
    uStackX_20 = 0;
    *arg3 = 0;
    auStackX_10[0] = 0;
    iVar2 = (**arg2)(arg2,auStackX_10);
    if (iVar2 < 0) {
        return 0;
    }
    uVar1 = auStackX_10[0] >> 2 & 1;
    *arg3 = uVar1;
    if (uVar1 != 0) {
        iVar2 = (**(*0x36d88 + 0x98))(arg1,0x34010,&uStackX_18);
        if (iVar2 < 0) {
            if (*(arg2 + 0x40) == 1) {
                uStackX_18 = *(*(arg2 + 0x38) + 0x360);
                iVar2 = 0;
            }
            if (iVar2 < 0) {
                return 1;
            }
        }
        if (uStackX_18 != 0) {
            (**(*0x36d88 + 0x40))(4,*(*(uStackX_18 + 8) + 0xc),&uStackX_20);
            iVar2 = (**(uStackX_18 + 0x18))(uStackX_18,**(uStackX_18 + 8),0,(*(uStackX_18 + 8))[3],uStackX_20);
            if (-1 < iVar2) {
                *arg3 = 0;
            }
            (**(*0x36d88 + 0x48))(uStackX_20);
        }
    }
    return 1;
}


/* fcn.000319a8 @ 0x319a8 */

bool fcn.000319a8(ulong noname_0,int64_t arg1)

{
    int16_t iVar1;
    int iVar2;
    int16_t *arg3;
    int16_t *piVar3;
    int64_t iVar4;
    int64_t iVar5;
    bool bVar6;
    int64_t iStackX_18;
    
    iVar5 = 0;
    iStackX_18 = 0;
    iVar4 = (**(*0x36d88 + 0x98))(noname_0,0x33fd0,&iStackX_18);
    if (iVar4 < 0) {
code_r0x000319e3:
        bVar6 = false;
    }
    else {
        iVar2 = *(iStackX_18 + 0x40);
        if (iVar2 == 1) {
            iVar4 = *(*(iStackX_18 + 0x38) + 0x228);
        }
        else if (iVar2 == 2) {
            iVar4 = *(*(iStackX_18 + 0x38) + 0x170);
        }
        else {
            if (iVar2 != 3) goto code_r0x000319e3;
            iVar4 = *(*(iStackX_18 + 0x38) + 0x40);
        }
        arg3 = *(iVar4 + 8);
        iVar1 = *arg3;
        piVar3 = arg3;
        while (iVar1 != 0) {
            piVar3 = piVar3 + 1;
            iVar5 = iVar5 + 1;
            iVar1 = *piVar3;
        }
        iVar4 = fcn.0001504c((iVar5 + 1) * 2);
        *arg1 = iVar4;
        bVar6 = iVar4 != 0;
        if (bVar6) {
            fcn.00027364(iVar4,iVar5 + 1,arg3);
        }
    }
    return bVar6;
}


/* fcn.00031258 @ 0x31258 */

void fcn.00031258(ulong noname_0,int64_t arg1)

{
    int64_t arg1_00;
    int16_t iVar1;
    
    arg1_00 = *0x431d0;
    iVar1 = fcn.000310a0(*0x431d0,arg1);
    if (iVar1 == 0) {
        fcn.0001d224(arg1_00,arg1);
    }
    return;
}


/* fcn.00031f18 @ 0x31f18 */

ulong fcn.00031f18(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    uchar auStack_38 [48];
    
    (**(*0x36d88 + 0x168))(auStack_38,0x21);
    uVar3 = 0;
    do {
        auStack_38[uVar3] = *(arg1 + uVar3 * 2);
        if (*(arg1 + uVar3 * 2) == 0) break;
        uVar3 = uVar3 + 1;
    } while (uVar3 < 0x21);
    iVar1 = (**(*arg2 + 0x10))(*arg2,arg3 == '\0',auStack_38);
    if (iVar1 < 0) {
        uVar2 = 0x800000000000000f;
    }
    else {
        (**(*0x36d88 + 0x160))(arg2 + 0x1f,auStack_38,0x21);
        *(arg2 + 0x1c) = 0;
        if (arg3 == '\0') {
            *(arg2 + 0x1d) = 1;
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00031e68 @ 0x31e68 */

void fcn.00031e68(void)

{
    ulong uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint16_t uVar4;
    int64_t iStackX_8;
    uint64_t uStackX_10;
    int64_t iStackX_18;
    
    uVar3 = 0;
    iStackX_8 = 0;
    iVar2 = (**(*0x36d88 + 0x138))(2,0x33fd0,0,&uStackX_10,&iStackX_18);
    if (-1 < iVar2) {
        uVar4 = 0;
        if (uStackX_10 != 0) {
            do {
                uVar1 = *(iStackX_18 + uVar3 * 8);
                iVar2 = (**(*0x36d88 + 0x118))(uVar1,0x33fd0,&iStackX_8,0,uVar1,2);
                if (-1 < iVar2) {
                    (**(iStackX_8 + 0x20))(iStackX_8);
                }
                uVar4 = uVar4 + 1;
                uVar3 = uVar4;
            } while (uVar3 < uStackX_10);
        }
        fcn.0001470c(&iStackX_18);
    }
    return;
}


/* fcn.00020fac @ 0x20fac */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h

void fcn.00020fac(void)

{
    bool bVar1;
    int64_t iVar2;
    uint64_t uVar3;
    char cVar4;
    uint64_t uVar5;
    int64_t var_fh;
    int64_t var_17h;
    int64_t var_1fh;
    int64_t iStackX_20;
    int32_t var_67h;
    int64_t var_6fh;
    int64_t var_77h;
    int64_t var_7fh;
    int64_t arg_50h;
    ulong *arg_50h_00;
    uint32_t arg_58h;
    uint uVar6;
    uint uVar7;
    int64_t arg2;
    ulong uStack_68;
    int64_t iStack_60;
    uint64_t uStack_58;
    int64_t aiStack_50 [3];
    int64_t var_29h;
    int32_t var_21h;
    int32_t var_1dh;
    int32_t var_19h;
    int32_t var_15h;
    int64_t var_11h;
    int64_t var_9h;
    int64_t var_1h;
    
    arg_58h = 0x7bb28b99;
    arg_50h = 0;
    bVar1 = true;
    var_fh._1_4_ = 0;
    iStackX_20 = 0;
    arg2 = 0;
    uVar5 = 1;
    iStack_60 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uVar6 = 0x90005d9a;
    uVar7 = 0x4dc13f27;
    fcn.0001cf98();
    iVar2 = fcn.00020248(&stack0xffffffffffffff80,&iStackX_20,&stack0xffffffffffffff90);
    if (-1 < iVar2) {
        var_17h._1_4_ = 8;
        *0x36ef6 = '\x01';
        iVar2 = fcn.0001c530(iStackX_20,arg2,8,iStack_60,arg_50h,arg_58h,CONCAT44(uVar7,uVar6),arg2);
        uVar5 = iVar2 == 0;
        if (*0x36ef2 == '\0') {
            fcn.0001470c(&iStackX_20);
        }
    }
    cVar4 = uVar5;
    iVar2 = (**(*0x36d88 + 0x138))(2,0x33cf0,0,&uStack_58,aiStack_50);
    if (-1 < iVar2) {
        if (*0x36ef6 == '\0') {
            *0x36ef6 = '\x01';
        }
        uVar3 = 0;
        if (uStack_58 != 0) {
            do {
                arg_50h_00 = NULL;
                var_fh._1_4_ = 0;
                (**(*0x36d88 + 0x98))(*(aiStack_50[0] + uVar3 * 8),0x33cf0,&stack0xffffffffffffff78);
                if (arg_50h_00 != NULL) {
                    bVar1 = true;
                }
                if (bVar1) {
                    while (iVar2 = (**arg_50h_00)(arg_50h_00,&var_fh + 1,&var_1fh + 1,&iStackX_20,
                                                  &stack0xffffffffffffff90,&var_17h + 1,&iStack_60,&uStack_68),
                          bVar1 = false, -1 < iVar2) {
                        iVar2 = fcn.0001c530(iStackX_20,arg2,var_17h._1_4_,iStack_60,arg_50h_00,arg_58h,
                                             CONCAT44(uVar7,uVar6),arg2);
                        if (iVar2 != 0) {
                            uVar5 = 0;
                        }
                        if (*0x36ef2 == '\0') {
                            fcn.0001470c(&iStackX_20);
                        }
                    }
                }
                cVar4 = uVar5;
                uVar3 = uVar3 + 1;
            } while (uVar3 < uStack_58);
            if (uStack_58 != 0) {
                (**(*0x36d88 + 0x48))(aiStack_50[0]);
            }
        }
    }
    *0x36ef6 = 0;
    if (cVar4 == '\x01') {
        fcn.00020914();
    }
    if (*0x36e60 != 0) {
        fcn.0001c500(0x430e8,0x430e0);
    }
    iVar2 = (**(*0x36d88 + 0x140))(0x33cd0,0,0x36f48);
    if (iVar2 == 0) {
        (**(*0x36f48 + 0x70))(10,1,0,0x430e8);
        (**(*0x36f48 + 0x70))(0xb,1,0,0x430e0);
    }
    return;
}


/* fcn.00032540 @ 0x32540 */

uchar fcn.00032540(void)

{
    ulong auStackX_8 [4];
    int8_t var_bd6h;
    int64_t var_c00h;
    uint uStack_cc8;
    uint uStack_cc4;
    uint uStack_cc0;
    uint uStack_cbc;
    uchar auStack_cb8 [3222];
    uchar uStack_22;
    
    uStack_cc8 = 0xec87d643;
    uStack_cc4 = 0x4bb5eba4;
    uStack_cc0 = 0x3e3fe5a1;
    uStack_cbc = 0xa90db236;
    auStackX_8[0] = 0xca9;
    (**(*0x36d98 + 0x48))(0x35870,&uStack_cc8,0,auStackX_8,auStack_cb8);
    return uStack_22;
}


/* fcn.00021424 @ 0x21424 */

void fcn.00021424(ulong param_1,ulong param_2,int64_t param_3)

{
    uint8_t uVar1;
    int iVar2;
    int64_t iVar3;
    uchar auStackX_8 [8];
    ulong uStackX_10;
    uchar auStackX_18 [16];
    
    if (*0x36e88 == 0) {
        uVar1 = fcn.00020134();
        if ((uVar1 & 2) == 0) {
            fcn.0002e8f8(2);
        }
        else {
            uStackX_10 = 3;
            iVar3 = fcn.0001f770();
            if (iVar3 < 0) {
                iVar2 = fcn.0002e964(1,&uStackX_10,param_3);
            }
            else {
                iVar2 = (**(*0x36f48 + 0x78))(1,&uStackX_10,0);
                *0x36e88 = iVar2;
            }
            if (iVar2 == 0) {
                do {
                    (**(*0x36d88 + 0x60))(1,*(*(*0x36d80 + 0x30) + 0x10),auStackX_18);
                    (**(*(*0x36d80 + 0x30) + 8))(*(*0x36d80 + 0x30),auStackX_8);
                } while( true );
            }
        }
    }
    return;
}


/* fcn.00033824 @ 0x33824 */

int fcn.00033824(int64_t arg1,uint32_t arg2,int64_t arg3)

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


/* fcn.000339f4 @ 0x339f4 */

ulong fcn.000339f4(int64_t arg1,int64_t arg2,uint32_t arg3)

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


/* fcn.0003290c @ 0x3290c */

int fcn.0003290c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
            iVar1 = fcn.00033824(arg1_00,uVar2 - arg1_00,auStack_28);
            if (iVar1 < 0) {
                iVar1 = -1;
            }
            else {
                iVar1 = fcn.000339f4(arg3,&stack0x00000028,auStack_28);
            }
            return -(iVar1 != 0);
        }
    }
    return -1;
}


/* fcn.00010c48 @ 0x10c48 */

void fcn.00010c48(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int iVar5;
    
    iVar3 = *0x36df0;
    iVar5 = 0;
    if (*0x36df0 != 0) {
        if (*(*0x36df0 + 0x10) == 0) {
            fcn.00010cdc();
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


/* fcn.00010b64 @ 0x10b64 */

int64_t fcn.00010b64(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    int64_t iVar4;
    uint8_t *puVar5;
    int64_t *piVar6;
    uint32_t uVar7;
    
    iVar1 = *0x36df0;
    if (*0x36df0 != 0) {
        if (*(*0x36df0 + 0x10) == 0) {
            fcn.00010cdc();
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


/* fcn.000337c4 @ 0x337c4 */

void fcn.000337c4(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    uchar *puVar1;
    uchar *noname_1;
    uint auStackX_18 [4];
    uchar auStack_18 [16];
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    noname_1 = arg2;
    if ((arg2 != '\0') && (auStack_18 != puVar1)) {
        section..text(auStack_18,arg1,arg2 & 0xffU);
        noname_1 = puVar1;
    }
    auStack_18[arg2 & 0xffU] = 0;
    fcn.00027430(auStack_18,noname_1,auStackX_18);
    *arg3 = auStackX_18[0];
    return;
}


/* fcn.00027430 @ 0x27430 */

ulong fcn.00027430(int64_t arg1,ulong noname_1,int64_t arg2)

{
    char cVar1;
    uint64_t uVar2;
    
    if (((arg1 != 0) && (arg2 != 0)) && (uVar2 = fcn.00027404(arg1,0xf4241), uVar2 < 0xf4241)) {
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


/* fcn.00010d34 @ 0x10d34 */

uint fcn.00010d34(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

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
                        if (uVar6 != (uVar6 / 400) * 400) goto code_r0x00010df2;
                    }
                    iVar2 = 0x16e;
                }
                else {
code_r0x00010df2:
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
             ((arg4 + (*((iVar5 + arg2) * 4 + 0x35070) + -1 + arg3) * 0x18) * 0x3c + in_stack_00000028) * 0x3c +
             in_stack_00000030;
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.00032dec @ 0x32dec */

//WARNING: Variable defined which should be unmapped: var_8h

ulong fcn.00032dec(int64_t arg1,uint32_t arg2,uint32_t arg3,int64_t arg4)

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
        iVar2 = fcn.000337c4(uVar3,2,auStackX_18);
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
        iVar1 = fcn.000337c4(uVar3,iVar4,auStackX_18);
        if (iVar1 == -1) {
            return 0xffffffff;
        }
        uVar5 = auStackX_18[0];
    }
    uVar3 = uVar3 + iVar2;
    iVar4 = CONCAT71(iVar4 >> 8,2);
    iVar2 = fcn.000337c4(uVar3,iVar4,auStack_30);
    if (iVar2 != -1) {
        iVar4 = CONCAT71(iVar4 >> 8,2);
        iVar2 = fcn.000337c4(uVar3 + 2,iVar4,&uStack_34);
        if (iVar2 != -1) {
            iVar4 = CONCAT71(iVar4 >> 8,2);
            iVar2 = fcn.000337c4(uVar3 + 4,iVar4,&uStack_38);
            if (iVar2 != -1) {
                iVar4 = CONCAT71(iVar4 >> 8,2);
                iVar2 = fcn.000337c4(uVar3 + 6,iVar4,auStackX_8);
                if ((iVar2 != -1) &&
                   (iVar2 = fcn.000337c4(uVar3 + 8,CONCAT71(iVar4 >> 8,2),auStackX_18), iVar2 != -1)) {
                    iVar2 = fcn.00010d34(uVar5,auStack_30[0],uStack_34,uStack_38);
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


/* fcn.00033030 @ 0x33030 */

ulong fcn.00033030(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int iVar2;
    uint64_t arg1_00;
    uint64_t uVar3;
    uint32_t uVar4;
    int64_t var_20h;
    uint32_t var_17h;
    uint32_t var_bp_10h;
    
    iVar2 = fcn.00033824(arg2,arg3,&var_20h);
    uVar4 = 0;
    if (((-1 < iVar2) && (var_17h == '\0')) && (stack0xffffffffffffffe4 == 0x10)) {
        *(arg1 + 0x400) = *(arg1 + 0x400) | 1;
        if (var_bp_10h == 0) {
            return 0;
        }
        uVar3 = var_bp_10h + var_20h;
        iVar2 = fcn.00033824(var_20h,var_bp_10h,&var_20h);
        if ((-1 < iVar2) && (var_17h == '\0')) {
            if (stack0xffffffffffffffe4 == 1) {
                *(arg1 + 0x404) = *var_20h;
                arg1_00 = var_bp_10h + var_20h;
                if (uVar3 <= arg1_00) {
                    return 0;
                }
                iVar2 = fcn.00033824(arg1_00,uVar3 - arg1_00,&var_20h);
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


/* fcn.00033a2c @ 0x33a2c */

uint32_t fcn.00033a2c(int64_t arg1,uint32_t arg2)

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


/* fcn.00032a90 @ 0x32a90 */

ulong fcn.00032a90(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
    
    iVar3 = fcn.00033824(arg1,arg2,&pcStack_b8);
    if ((((iVar3 < 0) || (cStack_af != '\0')) || (iStack_ac != 0x10)) ||
       (pcVar9 = pcStack_b8 + uStack_a8, arg1 + arg2 < pcVar9)) {
        return 0xffffffff;
    }
    *arg4 = pcVar9;
    cStack_af = '\0';
    iStack_ac = 0x10;
    arg1_00 = pcStack_b8;
joined_r0x00032b02:
    do {
        if (pcVar9 <= arg1_00) {
            return 0;
        }
        iVar3 = fcn.00033824(arg1_00,pcVar9 - arg1_00,&pcStack_b8);
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
        iVar3 = fcn.00033824(pcStack_b8,arg1_00 - pcStack_b8,&pcStack_b8);
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
        iVar4 = fcn.00033824(pcStack_b8,iVar3 - pcStack_b8,auStack_38);
        if (iVar4 < 0) {
            iVar4 = -1;
        }
        else {
            iVar4 = fcn.000339f4(&iStack_98,&pcStack_a0,auStack_38);
            pcVar6 = pcStack_a0;
        }
        if (iVar4 != 0) {
            return 0xffffffff;
        }
        iVar3 = fcn.00033824(pcVar6,iVar3 - pcVar6,&pcStack_b8);
        if (iVar3 < 0) {
            return 0xffffffff;
        }
        if (cStack_af != '\0') {
            return 0xffffffff;
        }
        if (iStack_48 != 4) goto code_r0x00032c5c;
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
            goto code_r0x00032d48;
        }
        if (iStack_8c != 0xb) goto joined_r0x00032b02;
        uVar8 = 7;
    }
    goto code_r0x00032d48;
code_r0x00032c5c:
    if (iStack_48 != 7) goto joined_r0x00032b02;
    if (iStack_98 == 1) {
        if ((((iStack_94 == 2) && (iStack_90 == 0x348)) &&
            ((iStack_8c == 0x1bb8d && ((iStack_88 == 1 && (iStack_84 == 9)))))) && (iStack_80 == 1)) {
            fcn.00010c48(*(arg3 + 0x148));
            pcVar6 = fcn.00010b64(uStack_a8 + 1);
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
        goto joined_r0x00032b02;
    }
    if ((((iStack_98 != 0) || (iStack_94 != 9)) || (iStack_90 != 0x926)) ||
       (((iStack_8c != 0x124f92c || (iStack_88 != 100)) || ((iStack_84 != 1 || (iStack_80 != 0x19))))))
    goto joined_r0x00032b02;
    uVar8 = 1;
code_r0x00032d48:
    if ((*(arg3 + 0x140) == 0x14) ||
       (pcVar5 = fcn.00010b64(uStack_a8 + 1), pcVar6 = pcVar5, pcVar1 = pcStack_b8, uVar2 = uStack_a8,
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
    goto joined_r0x00032b02;
}


/* fcn.00032f40 @ 0x32f40 */

ulong fcn.00032f40(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t var_20h;
    uint32_t var_17h;
    int32_t var_10h;
    
    iVar1 = fcn.00033824(arg1,arg2,&var_20h);
    if ((((-1 < iVar1) && (var_17h == '\0')) && (stack0xffffffffffffffe4 == 0x10)) &&
       (var_10h <= (arg1 - var_20h) + arg2)) {
        *arg4 = var_10h + var_20h;
        iVar1 = fcn.00033824(var_20h,var_10h,&var_20h);
        if ((((-1 < iVar1) && (var_17h == '\0')) &&
            ((iVar1 = fcn.00032dec(var_20h,var_10h,stack0xffffffffffffffe4,arg3 + 0x328), -1 < iVar1 &&
             ((iVar1 = fcn.00033824(var_10h + var_20h,*arg4 - (var_10h + var_20h),&var_20h), -1 < iVar1 &&
              (var_17h == '\0')))))) &&
           (iVar1 = fcn.00032dec(var_20h,var_10h,stack0xffffffffffffffe4,arg3 + 0x32c), -1 < iVar1)) {
            return 0;
        }
    }
    return 0xffffffff;
}


/* fcn.00032978 @ 0x32978 */

ulong fcn.00032978(int64_t arg1,int64_t noname_1,int64_t arg2,int64_t arg3)

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
    
    iVar1 = fcn.00033824(arg1,(arg1 + noname_1) - arg1,&iStack_48);
    arg1_00 = iStack_48;
    if (((-1 < iVar1) && (cStack_3f == '\0')) && (iStack_3c == 0x10)) {
        uVar2 = var_30h + iStack_48;
        iStackX_8 = iStack_48;
        if (uVar2 <= arg1 + noname_1) {
            *arg3 = uVar2;
            arg2_00 = uVar2 - iStack_48;
            iVar1 = fcn.00033824(iStack_48,arg2_00,&uStack_30);
            if (iVar1 < 0) {
                iVar1 = -1;
            }
            else {
                iVar1 = fcn.0003290c(arg1_00,arg2_00,arg2 + 0x330,&iStackX_8);
                arg1_00 = iStackX_8;
            }
            if (((iVar1 == 0) && (iVar1 = fcn.00033824(arg1_00,uVar2 - arg1_00,&iStack_48), -1 < iVar1)) &&
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


/* fcn.00033138 @ 0x33138 */

//WARNING: Variable defined which should be unmapped: var_11h

ulong fcn.00033138(int64_t arg1,int64_t arg2,uint32_t arg3)

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
    
    iVar1 = fcn.00033824(arg2,arg3,&uStack_a8);
    if (((-1 < iVar1) && (cStack_9f == '\0')) && (iStack_9c == 0x10)) {
        arg1_01 = uStack_a8;
code_r0x00033192:
        do {
            if (uStack_98 + uStack_a8 <= arg1_01) {
                return 0;
            }
            iVar1 = fcn.00033824(arg1_01,(uStack_98 + uStack_a8) - arg1_01,&iStack_d8);
            arg1_00 = iStack_d8;
            if (((iVar1 < 0) || (cStack_cf != '\0')) || (iStack_cc != 0x10)) {
                iVar1 = -1;
            }
            else {
                arg1_01 = uStack_c8 + iStack_d8;
                iStackX_20 = iStack_d8;
                iVar1 = arg1_01;
                iVar2 = fcn.00033824(iStack_d8,iVar1 - iStack_d8,auStack_90);
                if (iVar2 < 0) {
                    iVar2 = -1;
                }
                else {
                    iVar2 = fcn.000339f4(&var_70h,&iStackX_20,auStack_90);
                    arg1_00 = iStackX_20;
                }
                if (iVar2 < 0) {
                    return 0xffffffff;
                }
                iVar2 = fcn.00033824(arg1_00,iVar1 - arg1_00,&iStack_d8);
                if (iVar2 < 0) {
                    return 0xffffffff;
                }
                if (cStack_cf != '\0') {
                    return 0xffffffff;
                }
                if (iStack_cc == 1) {
                    iVar1 = fcn.00033824(iStack_d8,iVar1 - iStack_d8,&iStack_d8);
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
                goto code_r0x00033192;
                if (_auStack_6c == 0xf) {
                    iVar1 = fcn.00033824(iStack_d8,uStack_c8,&iStack_c0);
                    if (((iVar1 < 0) || (cStack_b7 != '\0')) || ((iStack_b4 != 3 || (uStack_b0 == 0)))) {
                        iVar1 = -1;
                    }
                    else {
                        *(arg1 + 0x400) = *(arg1 + 0x400) | 4;
                        uVar3 = fcn.00033a2c(iStack_c0,uStack_b0);
                        *(arg1 + 0x40c) = uVar3;
                        iVar1 = 0;
                    }
                }
                else {
                    if (_auStack_6c != 0x13) goto code_r0x00033192;
                    iVar1 = fcn.00033030(arg1,iStack_d8,uStack_c8);
                }
                if (-1 < iVar1) goto code_r0x00033192;
            }
        } while (-1 < iVar1);
    }
    return 0xffffffff;
}


/* fcn.00033334 @ 0x33334 */

int fcn.00033334(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
    
    iVar2 = fcn.00033824(arg1,arg2,&puStack_50);
    if (((-1 < iVar2) && (var_40h._1_1_ == '\0')) && (var_40h._4_4_ == 0x10)) {
        puVar5 = puStack_50 + var_38h;
        *arg4 = puVar5;
        iVar2 = puVar5;
        iVar3 = fcn.00033824(puStack_50,iVar2 - puStack_50,&puStack_50);
        if (-1 < iVar3) {
            if (var_40h._1_1_ == '\x02') {
                iVar3 = fcn.00033824(puStack_50,iVar2 - puStack_50,&puStack_50);
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
                iVar3 = fcn.00033824(puStack_50 + 1,iVar2 - (puStack_50 + 1),&puStack_50);
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
                iVar3 = fcn.00033824(puVar4,puVar5 - puVar4,&uStack_38);
                if (iVar3 < 0) {
                    iVar3 = -1;
                }
                else {
                    iVar3 = fcn.0003290c(puVar4,puVar5 - puVar4,arg3 + 0x30,&puStack_58);
                    puVar4 = puStack_58;
                }
                if ((((iVar3 == 0) &&
                     (iVar3 = fcn.00032a90(puVar4,puVar5 - puVar4,arg3 + 0x88,&puStack_58), iVar3 == 0)) &&
                    (iVar3 = fcn.00032f40(puStack_58,puVar5 - puStack_58,arg3,&puStack_58), iVar3 == 0)) &&
                   ((iVar3 = fcn.00032a90(puStack_58,puVar5 - puStack_58,arg3 + 0x1d8,&puStack_58), iVar3 == 0 &&
                    (iVar3 = fcn.00032978(puStack_58,puVar5 - puStack_58,arg3,&puStack_58), iVar3 == 0)))) {
                    if ((puStack_58 == puVar5) || (*(arg3 + 0x10) == 0)) {
                        return 0;
                    }
                    iVar3 = fcn.00033824(puStack_58,iVar2 - puStack_58,&puStack_50);
                    if ((-1 < iVar3) && (var_40h._1_1_ == '\x02')) {
                        if (var_40h._4_4_ == 1) {
                            puVar4 = puStack_50 + var_38h;
                            if (puVar4 == puVar5) {
                                return 0;
                            }
                            iVar3 = fcn.00033824(puVar4,iVar2 - puVar4,&puStack_50);
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
                            iVar2 = fcn.00033824(puVar4,iVar2 - puVar4,&puStack_50);
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
                            iVar2 = fcn.00033138(arg3,puStack_50,var_38h);
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


